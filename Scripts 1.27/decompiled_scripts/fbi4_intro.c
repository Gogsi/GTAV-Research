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
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	bool bLocal_41 = 0;
	char* sLocal_42 = NULL;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	struct<3> Local_45 = { 0, 0, 0 } ;
	int iLocal_48[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_55[4] = { 0, 0, 0, 0 };
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	var uLocal_64 = 16;
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
	bool bLocal_229 = 0;
	bool bLocal_230 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
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
	Local_45 = { 0f, 0f, 0f };
	iLocal_61 = -1;
	iLocal_62 = -1;
	iLocal_63 = -1;
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() != 1)
		{
			sLocal_42 = 0;
			GlobalFunc_10632();
			func_515();
		}
		else if (iLocal_37 != 3)
		{
			func_512(1, 1);
		}
		else
		{
			sLocal_42 = 0;
			GlobalFunc_10632();
			func_515();
		}
	}
	iLocal_39 = GlobalFunc_8315();
	if (GlobalFunc_199())
	{
		GlobalFunc_4972(1377.195f, -2103.532f, 53.4723f, 215.9222f, 1, 0);
	}
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_BPINT", 0);
		if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
		{
			func_506();
			switch (iLocal_37)
			{
				case 0:
					func_496();
					break;
				
				case 1:
					func_461();
					break;
				
				case 2:
					func_20();
					break;
				
				case 3:
					func_1();
					break;
			}
			if (iLocal_37 != 3)
			{
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x137
{
	switch (iLocal_38)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_42))
			{
				GlobalFunc_10835(sLocal_42);
			}
			else
			{
				GlobalFunc_10616(0);
			}
			iLocal_38 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				func_2();
				func_515();
			}
			break;
	}
}

void func_2()//Position - 0x18B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (iLocal_48[iVar0] != PLAYER::PLAYER_PED_ID())
		{
			GlobalFunc_881(&(iLocal_48[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (2 != iVar0)
		{
			GlobalFunc_6689(&(iLocal_55[iVar0]));
		}
		else
		{
			GlobalFunc_131(&(iLocal_55[iVar0]));
		}
		iVar0++;
	}
}


















void func_20()//Position - 0x11EF
{
	switch (iLocal_38)
	{
		case 0:
			if (func_55(iLocal_37, bLocal_41))
			{
				iLocal_61 = MISC::GET_GAME_TIMER();
				if (GlobalFunc_4924(iLocal_48[3]))
				{
					GlobalFunc_173(&uLocal_64, 0, iLocal_48[3], "MICHAEL", 0, 1);
					func_53("WORLD_HUMAN_SMOKING", 2);
					PED::SET_PED_PRIMARY_LOOKAT(iLocal_48[3], PLAYER::PLAYER_PED_ID());
				}
				iLocal_38 = 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_4924(iLocal_48[3]))
			{
				func_40();
				if (func_39())
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_48[3]);
						TASK::TASK_SMART_FLEE_PED(iLocal_48[3], PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_48[3], 1);
						func_36(2);
						return;
					}
				}
				if ((MISC::IS_BULLET_IN_AREA(1393.965f, -2070.811f, 50.99826f, 18.48f, 1) || MISC::IS_PROJECTILE_IN_AREA(1402.489f, -2056.896f, 50f, 1389.384f, -2082.867f, 61f, 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_48[3], PLAYER::PLAYER_PED_ID(), 1))
				{
					PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_48[3]);
					TASK::TASK_SMART_FLEE_PED(iLocal_48[3], PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_48[3], 1);
					func_36(2);
					return;
				}
			}
			if (!GlobalFunc_663("INT_LEAVE", 0, 0))
			{
				GlobalFunc_164("INT_LEAVE", 60000, 0);
			}
			if (!GlobalFunc_775(PLAYER::PLAYER_PED_ID(), 1392.934f, -2072.412f, 50.9982f, 180f))
			{
				iLocal_38 = 2;
			}
			break;
		
		case 2:
			func_512(0, 0);
			break;
		
		case 3:
			func_21(1, 1, 1);
			iLocal_38 = 2;
			break;
	}
}

void func_21(int iParam0, int iParam1, int iParam2)//Position - 0x1390
{
	func_23(0, 0, iParam2, 1);
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


void func_23(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1400
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(uVar0, 0);
	PLAYER::SET_PLAYER_CONTROL(iVar0, iParam3, 0);
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













void func_36(int iParam0)//Position - 0x1731
{
	HUD::CLEAR_PRINTS();
	GlobalFunc_4935();
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			sLocal_42 = "CMN_MDIED";
			break;
		
		case 2:
			sLocal_42 = "INT_THREAT";
			break;
	}
	iLocal_37 = 3;
	iLocal_38 = 0;
}



int func_39()//Position - 0x17DA
{
	if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_48[3], PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	return 0;
}

void func_40()//Position - 0x17F7
{
	if (iLocal_62 == -1)
	{
		if (!GlobalFunc_111())
		{
			iLocal_62 = MISC::GET_GAME_TIMER();
		}
	}
	else if ((MISC::GET_GAME_TIMER() - iLocal_62) > 12000)
	{
		if (GlobalFunc_10607(&uLocal_64, "FBIPRAU", "FBI4_INT_M", 8, 1, 0, 0))
		{
			iLocal_62 = -1;
		}
	}
	switch (iLocal_36)
	{
		case 1:
			func_41(2000, "WORLD_HUMAN_SMOKING", 2);
			break;
		
		case 2:
			func_41(40000, "", 3);
			break;
		
		case 3:
			func_41(6000, "WORLD_HUMAN_STAND_MOBILE", 4);
			break;
		
		case 4:
			func_41(40000, "", 5);
			break;
		
		case 5:
			func_41(6000, "WORLD_HUMAN_STAND_IMPATIENT", 1);
			break;
	}
}

void func_41(int iParam0, char* sParam1, int iParam2)//Position - 0x18A7
{
	if (iLocal_63 != -1)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_63) > iParam0)
		{
			func_53(sParam1, iParam2);
		}
	}
	else
	{
		iLocal_63 = MISC::GET_GAME_TIMER();
	}
}












void func_53(char* sParam0, int iParam1)//Position - 0x1F04
{
	TASK::CLEAR_PED_TASKS(iLocal_48[3]);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_48[3], sParam0, 1000, 1);
	}
	iLocal_36 = iParam1;
	iLocal_63 = -1;
}


int func_55(int iParam0, bool bParam1)//Position - 0x1FD0
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				bLocal_41 = false;
				func_21(1, 1, 1);
			}
			else if (func_459(2, Local_45, 0))
			{
				if (!GlobalFunc_199())
				{
					if (func_458() && func_454())
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4917(2));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4917(1));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4917(0));
						GlobalFunc_562(32);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 1:
			if (bParam1)
			{
				if (func_55(0, 0))
				{
					bLocal_41 = false;
					func_21(1, 1, 1);
				}
			}
			else
			{
				HUD::REQUEST_ADDITIONAL_TEXT("FBIINT", 0);
				if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
				{
					if (iLocal_39 != 2)
					{
						STREAMING::REQUEST_MODEL(joaat("bodhi2"));
						STREAMING::REQUEST_MODEL(joaat("bagger"));
						if (STREAMING::HAS_MODEL_LOADED(joaat("bodhi2")) && STREAMING::HAS_MODEL_LOADED(joaat("bagger")))
						{
							return 1;
						}
					}
					else
					{
						STREAMING::REQUEST_MODEL(joaat("bagger"));
						if (STREAMING::HAS_MODEL_LOADED(joaat("bagger")))
						{
							return 1;
						}
					}
				}
			}
			break;
		
		case 2:
			if (bParam1)
			{
				if (GlobalFunc_8315() != 2)
				{
					if (func_187(&(iLocal_48[4]), 2, 1377.195f, -2103.532f, 53.4723f, 215.9222f, 0, 0, 0))
					{
						GlobalFunc_10159(1423.143f, -2040.784f, 45.99826f, 1345.547f, -2093.602f, 120.0257f, 79.3f, 1399.72f, -2057.412f, 50.9981f, 324.4025f, GlobalFunc_625(), 1, 1, 1, 0, 0);
						if (GlobalFunc_8315() == 0)
						{
							iLocal_48[3] = PLAYER::PLAYER_PED_ID();
							func_97();
							func_95(iLocal_48[3], 1391.777f, -2071.477f, 50.9982f, 35.6553f);
						}
						else
						{
							iLocal_48[5] = PLAYER::PLAYER_PED_ID();
							func_97();
							while (!func_187(&(iLocal_48[3]), 0, 1391.777f, -2071.477f, 50.9982f, 35.6553f, 0, 0, 0))
							{
								SYSTEM::WAIT(0);
							}
						}
						GlobalFunc_562(32);
					}
				}
				else
				{
					while (!func_187(&(iLocal_48[3]), 0, 1391.777f, -2071.477f, 50.9982f, 35.6553f, 0, 0, 0))
					{
						SYSTEM::WAIT(0);
					}
				}
				if (GlobalFunc_10155(&(iLocal_55[2]), 2, 1382.5f, -2068.988f, 51.96749f, 13.78538f, 1, 0))
				{
					HUD::REQUEST_ADDITIONAL_TEXT("FBIINT", 0);
					if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
					{
						bLocal_41 = false;
						GlobalFunc_4967(iLocal_55[2], -1, 1);
						func_21(1, 1, 1);
					}
				}
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}








































void func_95(int iParam0, struct<3> Param1, float fParam4)//Position - 0x6F12
{
	if (GlobalFunc_4924(iParam0))
	{
		TASK::CLEAR_PED_TASKS(iParam0);
	}
	GlobalFunc_5823(iParam0, Param1, fParam4, 0, 1);
}


void func_97()//Position - 0x6F92
{
	var uVar0;
	
	if (GlobalFunc_8315() != 2)
	{
		uVar0 = 4;
		uVar0.f_8 = 4;
		uVar0.f_13 = 4;
		uVar0.f_18 = 4;
		uVar0.f_24 = 4;
		uVar0.f_29 = 4;
		uVar0.f_34 = 4;
		uVar0[2] = iLocal_48[4];
		uVar0[0] = iLocal_48[3];
		uVar0[1] = iLocal_48[5];
		if (iLocal_39 != 2)
		{
			GlobalFunc_9134(&uVar0, 2);
			if (GlobalFunc_10924(&uVar0, 1, 1, 1))
			{
			}
		}
	}
}


























































































int func_187(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0xF601
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
			*uParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam5, 0, 0);
			func_451(*uParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
			func_444(*uParam0);
			GlobalFunc_8021(*uParam0, 1, 0);
			GlobalFunc_8030(*uParam0);
			GlobalFunc_7714(*uParam0);
			func_189(*uParam0, bParam8);
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


int func_189(int iParam0, bool bParam1)//Position - 0xF719
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_5101(iVar0))
	{
		GlobalFunc_5100(iVar0, 0);
		func_419(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		func_279(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (GlobalFunc_7685(iParam0))
		{
			GlobalFunc_5100(iVar0, 0);
			func_419(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			func_279(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[120] && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122])
			{
				func_419(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (GlobalFunc_10910(iParam0, 3, 169))
					{
						func_419(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						return 1;
					}
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 6))
			{
				func_419(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 17))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_419(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 20))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_419(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 21))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_419(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 22))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_419(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 11))
			{
				func_419(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 10))
			{
				func_419(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 50))
			{
				func_419(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 14, 59))
			{
				func_419(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10910(iParam0, 8, 22))
			{
				func_419(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 14))
			{
				func_419(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_10910(iParam0, 12, 13))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_419(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 14))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_419(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 15))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_419(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 4))
			{
				func_419(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 3))
			{
				func_419(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 14, 82))
			{
				func_419(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10910(iParam0, 8, 76))
			{
				func_419(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 1))
			{
				func_419(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 2:
			if (GlobalFunc_10910(iParam0, 12, 12))
			{
				func_419(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 15))
			{
				func_419(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (GlobalFunc_10910(iParam0, 3, 71))
				{
					func_419(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 17))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_419(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 18))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_419(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 19))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_419(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 7))
			{
				func_419(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 6))
			{
				func_419(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 14, 88))
			{
				func_419(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10910(iParam0, 8, 17))
			{
				func_419(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 11))
			{
				func_419(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
	}
	return 0;
}


























































































void func_279(int iParam0, int iParam1)//Position - 0x29324
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar67;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = GlobalFunc_6674(iParam0);
		if (GlobalFunc_42(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = GlobalFunc_11118(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					GlobalFunc_521(iVar0);
					func_281(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			GlobalFunc_8358(iParam0, &Var2, 1);
			Global_89752[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				GlobalFunc_8999();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("lester1")) == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!GlobalFunc_39(0) && !GlobalFunc_39(1)) && !GlobalFunc_39(2)) && !GlobalFunc_39(3)) && !GlobalFunc_39(4)) && !GlobalFunc_39(9)) && !GlobalFunc_39(10)))
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/] = { Var2 };
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1619[iVar0] = GlobalFunc_518(iParam0);
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[iVar67 /*4*/][iVar0] = GlobalFunc_6669(iParam0, GlobalFunc_33(iVar67));
						iVar67++;
					}
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[iVar67 /*4*/][iVar0] = GlobalFunc_6669(iParam0, GlobalFunc_33(iVar67));
						iVar67++;
					}
					if (iVar0 == 0)
					{
						if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[121])
						{
							Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122] = 1;
						}
					}
				}
			}
		}
	}
}


void func_281(int iParam0, var uParam1, bool bParam2)//Position - 0x2959B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = GlobalFunc_6674(iParam0);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar3 = 0;
		while (iVar3 < 12)
		{
			if (iVar3 != 1 || (iVar3 == 1 && !bParam2))
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar3, uParam1->f_13[iVar3], (*uParam1)[iVar3], uParam1->f_26[iVar3]);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < 9)
		{
			if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
			{
				PED::SET_PED_PROP_INDEX(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], 0);
			}
			else
			{
				PED::CLEAR_PED_PROP(iParam0, iVar3);
			}
			iVar3++;
		}
		if (GlobalFunc_42(iVar0))
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_416(iParam0, iVar1, &iVar2, 0))
			{
				func_419(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_414(iParam0, iVar1, &iVar2))
			{
				func_419(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_6784(741, uParam1->f_60, Global_68104, 1);
			GlobalFunc_6784(742, uParam1->f_61, Global_68104, 1);
			iVar4 = GlobalFunc_4915(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			func_284(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			if (!bParam2)
			{
				iVar5 = GlobalFunc_4915(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_284(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			GlobalFunc_6784(740, uParam1->f_59, Global_68104, 1);
			GlobalFunc_6784(2035, uParam1->f_59, Global_68104, 1);
			GlobalFunc_6785(161, 1, -1, 1);
		}
	}
}



int func_284(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x29832
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar31;
	var uVar41;
	int iVar57;
	var uVar58;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	int iVar87;
	int iVar88;
	int iVar89;
	var uVar90;
	int iVar91;
	int iVar92;
	int iVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	var uVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((Global_1315831 != 4 && Global_1315831 != 5) && Global_1315831 != 7)
		{
			return 0;
		}
	}
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_PED_ID() && Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_219 == 2)
	{
		return 0;
	}
	Global_68105++;
	iVar5 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -1;
	iVar9 = -99;
	iVar10 = -99;
	iVar11 = -1;
	iVar12 = -1;
	if (iParam5 == 0)
	{
		Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		GlobalFunc_10957(iVar5, iParam1, iParam2, 1);
	}
	if (iParam1 == 12)
	{
		uVar13 = Global_2621444;
		uVar14 = Global_2621445;
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar15 = 15;
		if (iParam5 == 1)
		{
			uVar15 = { Global_68149 };
		}
		else
		{
			uVar15 = { GlobalFunc_7617(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar15[iVar0] != -99)
			{
				if (iVar0 == 10)
				{
					Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, 10, 0) };
					if (iParam4 == -1)
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iVar0)));
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
					}
					if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
					{
						GlobalFunc_10957(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, iVar0, uVar15[iVar0]) };
					if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar31 = 9;
							if (iParam5 == 1)
							{
								uVar31 = { Global_68165 };
							}
							else
							{
								uVar31 = { GlobalFunc_7616(iVar5, uVar15[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, 14, uVar31[iVar1]) };
								GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
								if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
								{
									GlobalFunc_10957(iVar5, iVar0, uVar15[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iParam4 == -1)
							{
								PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iVar0)));
							}
							else
							{
								PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
							}
							if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
							{
								GlobalFunc_10957(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, iVar0, GlobalFunc_11117(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					uVar41 = { GlobalFunc_7617(iVar5, 0) };
					func_284(iParam0, iVar0, uVar41[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
			}
			iVar0++;
		}
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0)
		{
			iVar57 = GlobalFunc_9005();
			if (iVar57 != -1)
			{
				GlobalFunc_9004(iVar57, 0, Global_68104);
			}
			GlobalFunc_10637(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar58 = { GlobalFunc_7616(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, 14, uVar58[iVar1]) };
			GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
			{
				GlobalFunc_10957(iVar5, 14, uVar58[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_68105 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = GlobalFunc_11068(iParam0, iVar5, 14, uVar58[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_284(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		iVar68 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar68, joaat("FORCE_PROP"), 0))
		{
			iVar69 = GlobalFunc_6669(iParam0, 1);
			iVar3 = GlobalFunc_11068(iParam0, iVar5, 1, iVar69, 14, Global_68106[1 /*14*/].f_12);
			if (iVar3 != -99 && iVar3 != iParam2)
			{
				iVar7 = GlobalFunc_5013(iVar5, 1, -1);
			}
		}
		GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
		{
			GlobalFunc_10957(iVar5, iParam1, iParam2, 1);
		}
		if (iParam5 == 0)
		{
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11068(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_284(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
		}
	}
	else
	{
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar70 = GlobalFunc_6669(iParam0, 11);
				iVar71 = GlobalFunc_6669(iParam0, 8);
				iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
				{
					iVar9 = GlobalFunc_6669(iParam0, 8);
				}
				iVar72 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar72, joaat("GLOVES"), 3))
				{
					iVar73 = GlobalFunc_6739(iVar5, iVar71, iVar70);
					if (iVar73 == -99)
					{
						iVar73 = GlobalFunc_11068(iParam0, iVar5, 11, iVar70, 3, 0);
					}
					if (iVar73 != -99)
					{
						iVar74 = iVar73;
						iVar75 = 0;
						while (iVar75 < 9)
						{
							if (GlobalFunc_308(iVar5, iVar74, iVar75) == iVar72)
							{
								iVar11 = iVar75;
								iVar12 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar75++;
						}
					}
				}
				iVar76 = -1;
				if ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(GlobalFunc_4913(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar70 = GlobalFunc_6669(iParam0, 11);
					if (iVar70 >= 256)
					{
						iVar76 = GlobalFunc_4913(iVar5, iVar70, 11, 4);
					}
					if (iVar70 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("VEST_SHIRT"), 0))
					{
						iVar77 = GlobalFunc_6738(iVar5, iVar70, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar77 != -99)
						{
							func_284(iParam0, 8, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, iParam1, iParam2) };
						}
					}
				}
				else if (GlobalFunc_6737(iVar5, iParam2))
				{
					if (iVar70 >= 256)
					{
						iVar76 = GlobalFunc_4913(iVar5, iVar70, 11, 4);
					}
					if (!GlobalFunc_6737(iVar5, iVar70))
					{
						if ((iVar5 == joaat("mp_f_freemode_01") && iVar70 >= 256) && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("VEST"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("mp_f_freemode_01") && iVar70 >= 256) && ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_12"), 0)))
						{
						}
						else
						{
							iVar78 = GlobalFunc_6738(iVar5, iVar70, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar78 != -99)
							{
								func_284(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, iParam1, iParam2) };
								iVar9 = -99;
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									func_284(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								}
								Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, iParam1, iParam2) };
							}
						}
					}
					else
					{
						Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, 11, iVar70) };
						iVar79 = Global_68106[1 /*14*/].f_3;
						Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, 11, iParam2) };
						iVar80 = Global_68106[1 /*14*/].f_3;
						if (iVar79 != iVar80)
						{
							Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, 8, iVar71) };
							iVar81 = Global_68106[1 /*14*/].f_4;
							iVar82 = GlobalFunc_6736(iVar5, iVar71, iVar81);
							if (iVar82 == -99)
							{
								iVar83 = iVar71;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if ((iParam2 >= 96 && iParam2 <= 107) || GlobalFunc_306(GlobalFunc_4913(iVar5, iParam2, 11, 3)) == 6)
									{
										iVar82 = GlobalFunc_5013(iVar5, 11, -1);
										Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, 11, iVar82) };
										iVar83 = GlobalFunc_6738(iVar5, iVar82, iParam2, Global_68106[1 /*14*/].f_4);
									}
								}
							}
							else
							{
								iVar83 = GlobalFunc_6738(iVar5, iVar82, iParam2, iVar81);
							}
							if (iVar83 != -99)
							{
								func_284(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_284(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, iParam1, iParam2) };
						}
					}
				}
				else
				{
					GlobalFunc_10622(iVar5, iParam2);
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			GlobalFunc_10637(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, GlobalFunc_11117(iParam0, 8, -1), iParam2);
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = GlobalFunc_6671(2135, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = GlobalFunc_6671(2142, iParam10, 0);
				}
				PED::_SET_PED_HAIR_COLOR(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				func_328(iParam0, iParam2, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			GlobalFunc_10637(iParam0, iParam1, iParam2, iParam6, 0);
			iVar84 = GlobalFunc_6669(iParam0, 11);
			if (GlobalFunc_6737(iVar5, iVar84))
			{
				iVar85 = GlobalFunc_6736(iVar5, iParam2, Global_68106[1 /*14*/].f_4);
				GlobalFunc_10622(iVar5, iVar85);
			}
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, iParam2, GlobalFunc_6669(iParam0, 11));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar86 = GlobalFunc_6669(iParam0, 7);
				if (!GlobalFunc_8360(iVar5, iVar86, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2621444, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2621444, joaat("SHRINK_HEAD"), 0)))
			{
				iVar87 = GlobalFunc_6671(2082, iParam10, 0);
				iVar88 = GlobalFunc_6671(2083, iParam10, 0);
				iVar89 = GlobalFunc_6671(2084, iParam10, 0);
				uVar90 = GlobalFunc_6788(135, iParam10);
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 0, 0, 0, iVar87, iVar88, iVar89, 0f, uVar90, 0f, 0);
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 21, 0, 0, iVar87, iVar88, iVar89, 0f, fVar90, 0f, 0);
				}
				iVar91 = 0;
				while (iVar91 < 20)
				{
					PED::_SET_PED_FACE_FEATURE(iParam0, iVar91, 0f);
					iVar91++;
				}
			}
			else
			{
				GlobalFunc_9021(iParam0, Global_68104);
			}
			iVar92 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
			iVar93 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar92, joaat("FORCE_PROP"), 0))
			{
				if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar93, joaat("FORCE_PROP"), 0))
				{
					iVar94 = GlobalFunc_6669(iParam0, 1);
					iVar95 = 0;
					while (iVar95 < 9)
					{
						iVar3 = GlobalFunc_11068(iParam0, iVar5, iParam1, iVar94, 14, iVar95);
						iVar96 = GlobalFunc_7980(iParam0, iVar95);
						if (iVar3 == iVar96)
						{
							PED::CLEAR_PED_PROP(iParam0, iVar95);
						}
						iVar95++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11068(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_284(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				if (GlobalFunc_7688(iParam0))
				{
					iVar97 = -99;
					iVar97 = GlobalFunc_6730(iVar5, iParam2);
					if (iVar97 > 0)
					{
						iVar97 = (iVar97 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!GlobalFunc_10955(iParam0, 9, iVar97))
						{
							func_284(iParam0, 9, iVar97, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						func_284(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_284(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
				}
				iVar98 = GlobalFunc_6671(2024, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, GlobalFunc_5005(iParam0, iVar98), GlobalFunc_282(iParam0, iVar98), GlobalFunc_81(iParam0, iVar98));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, GlobalFunc_5005(PLAYER::PLAYER_PED_ID(), iVar98), GlobalFunc_282(PLAYER::PLAYER_PED_ID(), iVar98), 0);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), GlobalFunc_81(PLAYER::PLAYER_PED_ID(), iVar98));
					GlobalFunc_5004(PLAYER::PLAYER_ID(), iVar98);
				}
			}
			if (iVar5 == joaat("mp_f_freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar99 = GlobalFunc_11117(iParam0, 4, -1);
					iVar100 = iParam2;
				}
				else
				{
					iVar99 = iParam2;
					iVar100 = GlobalFunc_11117(iParam0, 11, -1);
				}
				if (GlobalFunc_6729(iVar5, 11, iVar100))
				{
					if (!GlobalFunc_6728(iVar5, 4, iVar99))
					{
						if (GlobalFunc_6727(iVar5, 4, iVar99, &uVar101))
						{
							func_284(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
				}
				else if (GlobalFunc_6728(iVar5, 4, iVar99))
				{
					if (GlobalFunc_6726(iVar5, 4, iVar99, &uVar101))
					{
						func_284(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				GlobalFunc_5003(iParam0);
				iVar102 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar103 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar104 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar102, iVar103);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar104, joaat("FORCE_PROP"), 0))
				{
					iVar3 = GlobalFunc_11068(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_284(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar3 = GlobalFunc_11068(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_284(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (GlobalFunc_11199(iParam0, &uVar4))
		{
			func_284(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	if (iVar6 != -99)
	{
		func_284(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar9 != -99)
	{
		func_284(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar7 != -99)
	{
		func_284(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar11 != -1)
	{
		iVar105 = GlobalFunc_308(iVar5, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), iVar11);
		if (iVar105 != -1)
		{
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				iVar10 = GlobalFunc_4914(iVar5, iVar105, 3, 3);
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				iVar10 = GlobalFunc_4914(iVar5, iVar105, 3, 4);
			}
			if (iVar10 != -99)
			{
				iVar10 = (iVar10 + iVar12);
				func_284(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}












































void func_328(int iParam0, int iParam1, bool bParam2)//Position - 0x2FBB3
{
	int iVar0;
	int iVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	GlobalFunc_9803(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = GlobalFunc_6735(iVar0, iParam1);
	if (iVar1 != -1)
	{
		GlobalFunc_9004(iVar1, 1, Global_68104);
	}
	GlobalFunc_11242(iParam0, bParam2, 0);
}






















































































int func_414(var uParam0, int iParam1, int iParam2)//Position - 0x54334
{
	int iVar0;
	
	iVar0 = GlobalFunc_19(iParam1);
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 != -99)
	{
		if (!GlobalFunc_10910(uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = -99;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}


int func_416(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x543FB
{
	int iVar0;
	
	iVar0 = GlobalFunc_19(iParam1);
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 != -99)
	{
		if (!GlobalFunc_10910(uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_59;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 = -99;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}



int func_419(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x5475C
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
		GlobalFunc_8357(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = GlobalFunc_6669(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = GlobalFunc_6669(iParam0, 9);
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
			iVar7 = GlobalFunc_7980(iParam0, 1);
			if (!GlobalFunc_6667(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = GlobalFunc_7980(iParam0, 0);
			if (!GlobalFunc_6666(iVar10, 14, iVar8) && !GlobalFunc_6665(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = GlobalFunc_7980(iParam0, 2);
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
							GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8357(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = GlobalFunc_11231(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_419(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						GlobalFunc_8357(iVar0);
						if (Global_68105 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = GlobalFunc_11231(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_419(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, iVar0, GlobalFunc_11118(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_416(iParam0, iVar10, &iVar4, 1))
							{
								func_419(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_419(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
					func_419(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_419(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_419(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_419(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_419(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
			GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8357(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11231(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_419(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		GlobalFunc_8357(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = GlobalFunc_11231(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_419(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = GlobalFunc_11231(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_419(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
		if (func_416(iParam0, iVar10, &iVar4, 0))
		{
			func_419(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (func_414(iParam0, iVar10, &iVar4))
		{
			func_419(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}

























void func_444(int iParam0)//Position - 0x57782
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_42(iVar0))
	{
		if (!Global_89948[iVar0])
		{
			if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1619[iVar0] != 0)
			{
				if (GlobalFunc_518(iParam0) != Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1619[iVar0])
				{
					GlobalFunc_521(iVar0);
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1619[iVar0] = GlobalFunc_518(iParam0);
				}
			}
		}
		func_281(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
		if (!Global_89948[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!GlobalFunc_526(49))
				{
					iVar1 = GlobalFunc_11118(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					GlobalFunc_11185(GlobalFunc_4917(0), 12, 16, 0, 0, 0, 0);
				}
				if (!GlobalFunc_526(44))
				{
					iVar1 = GlobalFunc_11118(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = GlobalFunc_11118(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					GlobalFunc_11185(GlobalFunc_4917(0), 3, 70, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 3, 71, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 3, 72, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 3, 73, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 3, 74, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 3, 75, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 4, 41, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 4, 42, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 4, 43, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 4, 44, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = GlobalFunc_11118(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				GlobalFunc_521(iVar0);
				func_281(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
			}
		}
		Global_89948[iVar0] = 1;
	}
}







int func_451(int iParam0, int iParam1, bool bParam2)//Position - 0x5803C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 4;
	if (iParam1 == 0)
	{
		iVar0 = 0;
	}
	else if (iParam1 == 2)
	{
		iVar0 = 2;
	}
	else if (iParam1 == 1)
	{
		iVar0 = 1;
	}
	else if (iParam1 == 145)
	{
		iVar0 = 3;
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_87845[iVar0]))
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < Global_89952)
		{
			if (iVar1 < 0)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Global_89952[iVar2]))
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 < 0 || iVar1 > Global_89952)
		{
			iVar1 = 0;
		}
		Global_89952[iVar1] = Global_87845[iVar0];
		if (bParam2)
		{
			if (!PED::IS_PED_INJURED(Global_89952[iVar1]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iParam0))
					{
						TASK::CLEAR_PED_TASKS(Global_89952[iVar1]);
						TASK::TASK_SMART_FLEE_COORD(Global_89952[iVar1], ENTITY::GET_ENTITY_COORDS(iParam0, 1), 1000f, -1, 1, 0);
					}
				}
			}
		}
	}
	Global_87845[iVar0] = iParam0;
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iParam1] = GlobalFunc_7626();
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iParam1 /*3*/] = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[iParam1] = ENTITY::GET_ENTITY_HEADING(iParam0);
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_87845.f_47), iVar0);
	}
	return 1;
}



int func_454()//Position - 0x581E0
{
	switch (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()))
	{
		case 0:
			if (func_457())
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_456())
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_455())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_455()//Position - 0x58232
{
	if (func_459(3, Local_45, 0) && func_459(10, Local_45, 0))
	{
		return 1;
	}
	return 0;
}

int func_456()//Position - 0x5825C
{
	if (((func_459(3, Local_45, 0) && func_459(5, Local_45, 0)) && func_459(10, Local_45, 0)) && func_459(12, Local_45, 0))
	{
		return 1;
	}
	return 0;
}

int func_457()//Position - 0x582A5
{
	if (func_187(&(iLocal_48[4]), 2, 1377.195f, -2103.532f, 53.4723f, 215.9222f, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_458()//Position - 0x582D6
{
	if (((func_459(6, Local_45, 0) && func_459(7, Local_45, 0)) && func_459(8, Local_45, 0)) && func_459(9, Local_45, 0))
	{
		return 1;
	}
	return 0;
}

int func_459(int iParam0, struct<3> Param1, float fParam4)//Position - 0x5831F
{
	switch (iParam0)
	{
		case 0:
			if (GlobalFunc_537(Param1, Local_45, 1056964608) && fParam4 == 0f)
			{
				return 1;
			}
			break;
		
		case 2:
			if (!GlobalFunc_199())
			{
				if (CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					return 1;
				}
				if (iLocal_39 == 1)
				{
					CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("FBI_4_INT", 120, 8);
				}
				else if (iLocal_39 == 2)
				{
					CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("FBI_4_INT", 124, 8);
				}
				else
				{
					CUTSCENE::REQUEST_CUTSCENE("FBI_4_INT", 8);
				}
			}
			else
			{
				return 1;
			}
			break;
		
		case 3:
			if (iLocal_39 == 0)
			{
				return 1;
			}
			if (GlobalFunc_4924(Global_86864.f_9[3]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[3], 1, 1);
				iLocal_48[3] = Global_86864.f_9[3];
				if (GlobalFunc_4924(iLocal_48[3]))
				{
					return 1;
				}
			}
			else if (func_187(&(iLocal_48[3]), 0, 1982.198f, 3818.953f, 31.4232f, 215.9222f, 0, 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			return 1;
			break;
		
		case 5:
			if (iLocal_39 == 0)
			{
				return 1;
			}
			else if (iLocal_39 == 2)
			{
				return 1;
			}
			if (GlobalFunc_4924(Global_86864.f_9[4]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[4], 1, 1);
				iLocal_48[4] = Global_86864.f_9[4];
				if (GlobalFunc_4924(iLocal_48[4]))
				{
					return 1;
				}
			}
			else if (func_187(&(iLocal_48[4]), 2, 1982.198f, 3818.953f, 31.4232f, 215.9222f, 0, 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (GlobalFunc_4924(Global_86864.f_9[2]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[2], 1, 1);
				iLocal_48[2] = Global_86864.f_9[2];
				if (GlobalFunc_4924(iLocal_48[2]))
				{
					PED::SET_PED_PROP_INDEX(iLocal_48[2], 1, 0, 0, false);
					return 1;
				}
			}
			break;
		
		case 7:
			if (GlobalFunc_4924(Global_86864.f_9[0]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[0], 1, 1);
				iLocal_48[0] = Global_86864.f_9[0];
				if (GlobalFunc_4924(iLocal_48[0]))
				{
					return 1;
				}
			}
			break;
		
		case 8:
			if (GlobalFunc_4924(Global_86864.f_9[1]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[1], 1, 1);
				iLocal_48[1] = Global_86864.f_9[1];
				if (GlobalFunc_4924(iLocal_48[1]))
				{
					return 1;
				}
			}
			break;
		
		case 9:
			if (iLocal_39 != 0)
			{
				return 1;
			}
			if (GlobalFunc_115(Global_86864.f_28[0]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_28[0], 1, 1);
				iLocal_60 = Global_86864.f_28[0];
				if (GlobalFunc_115(iLocal_60))
				{
					return 1;
				}
			}
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			if (GlobalFunc_10155(&(iLocal_55[1]), 1, 1379.7f, -2056.002f, 50.9983f, 231.3996f, 1, 0))
			{
				return 1;
			}
			break;
		
		case 12:
			if (GlobalFunc_4940(Global_86864[1]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[1], 1, 1);
				iLocal_55[2] = Global_86864[1];
				if (GlobalFunc_4940(iLocal_55[2]))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}


void func_461()//Position - 0x586BA
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	float fVar7;
	float fVar8;
	
	iVar0 = CUTSCENE::GET_CUTSCENE_TIME();
	if (iLocal_38 == 1)
	{
		if (((GlobalFunc_4926(1000) && iLocal_43) && !bLocal_41) && iVar0 < 157323)
		{
		}
		else if (CUTSCENE::GET_CUTSCENE_TIME() > 157323)
		{
			CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(0);
		}
	}
	if (!iLocal_43)
	{
		if (func_55(1, bLocal_41))
		{
			iLocal_43 = 1;
		}
	}
	switch (iLocal_38)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			if (GlobalFunc_552(1, 0, 1))
			{
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					if (GlobalFunc_4924(iLocal_48[2]))
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("steve_FBI", iLocal_48[2], 0);
						CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("steve_FBI", 1, 0, 0, 0);
					}
					if (GlobalFunc_4924(iLocal_48[5]))
					{
						GlobalFunc_11106("Franklin", iLocal_48[5], 0, 2);
					}
					if (GlobalFunc_4924(iLocal_48[4]))
					{
						GlobalFunc_11106("trevor", iLocal_48[4], 0, 2);
					}
					if (GlobalFunc_4924(iLocal_48[3]))
					{
						GlobalFunc_11106("michael", iLocal_48[3], 0, 2);
					}
				}
				if (GlobalFunc_8034(1, 1093140480, 0))
				{
					func_485();
					CUTSCENE::START_CUTSCENE(1024);
					CUTSCENE::_0x7F96F23FA9B73327(GlobalFunc_4931(2, 0));
					if (GlobalFunc_4940(iLocal_55[2]))
					{
						VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(iLocal_55[2], 1, 1, 1);
					}
					SYSTEM::WAIT(0);
					PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
					Var4 = { 1368.741f, -2068.144f, 51.0552f };
					fVar8 = 163.6238f;
					switch (GlobalFunc_8315())
					{
						case 0:
							if (GlobalFunc_7091(GlobalFunc_625(), 1))
							{
								Var1 = { 1388.069f, -2057.908f, 50.9983f };
								fVar7 = 263.5418f;
								GlobalFunc_10159(1423.143f, -2040.784f, 45.99826f, 1345.547f, -2093.602f, 120.0257f, 79.3f, Var1, fVar7, GlobalFunc_625(), 1, 1, 1, 0, 0);
								func_469(Var1, fVar7);
							}
							else
							{
								GlobalFunc_10064(1423.143f, -2040.784f, 45.99826f, 1345.547f, -2093.602f, 120.0257f, 79.3f, Var4, fVar8, 1, 1, 1, 0, 0);
								func_469(Var4, fVar8);
							}
							iLocal_55[0] = PLAYER::GET_PLAYERS_LAST_VEHICLE();
							if (GlobalFunc_4940(iLocal_55[0]))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_55[0], 1, 0);
							}
							break;
						
						case 1:
							if (GlobalFunc_7091(GlobalFunc_625(), 1))
							{
								Var1 = { 1379.7f, -2056.002f, 50.9983f };
								fVar7 = 231.3996f;
								GlobalFunc_10159(1423.143f, -2040.784f, 45.99826f, 1345.547f, -2093.602f, 120.0257f, 79.3f, Var1, fVar7, GlobalFunc_625(), 1, 1, 1, 0, 0);
							}
							else
							{
								GlobalFunc_10064(1423.143f, -2040.784f, 45.99826f, 1345.547f, -2093.602f, 120.0257f, 79.3f, Var4, fVar8, 1, 1, 1, 0, 0);
							}
							iLocal_55[1] = PLAYER::GET_PLAYERS_LAST_VEHICLE();
							if (GlobalFunc_4940(iLocal_55[1]))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_55[1], 1, 0);
							}
							break;
						
						case 2:
							if (!GlobalFunc_4940(iLocal_55[2]))
							{
								if (GlobalFunc_7091(GlobalFunc_625(), 1))
								{
									Var1 = { 1382.5f, -2068.988f, 51.96749f };
									fVar7 = 13.78538f;
									GlobalFunc_10159(1423.143f, -2040.784f, 45.99826f, 1345.547f, -2093.602f, 120.0257f, 79.3f, Var4, fVar8, GlobalFunc_625(), 1, 1, 1, 0, 0);
								}
								else
								{
									GlobalFunc_10064(1423.143f, -2040.784f, 45.99826f, 1345.547f, -2093.602f, 120.0257f, 79.3f, Var4, fVar8, 1, 1, 1, 0, 0);
								}
							}
							break;
					}
					func_465(-1046.617f, -516.399f, 35.0386f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
					GlobalFunc_79(800, 0);
					iLocal_38 = 1;
				}
			}
			break;
		
		case 1:
			PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.1f);
			if (iLocal_39 != 1)
			{
				if (!bLocal_229)
				{
					if (!GlobalFunc_4924(iLocal_48[5]))
					{
						if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Franklin", 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Franklin", 0)))
							{
								iLocal_48[5] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Franklin", 0));
							}
						}
					}
					if (CUTSCENE::GET_CUTSCENE_SECTION_PLAYING() == 4)
					{
						bLocal_229 = func_459(11, Local_45, 0);
					}
				}
			}
			if (GlobalFunc_4924(iLocal_48[4]))
			{
				func_97();
			}
			if (!GlobalFunc_4940(iLocal_55[2]))
			{
				if (!bLocal_230)
				{
					if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("trevors_car", 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevors_car", 0)))
						{
							iLocal_55[2] = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevors_car", 0));
							VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(iLocal_55[2], 1, 1, 1);
							bLocal_230 = true;
						}
					}
				}
			}
			else if (!bLocal_230)
			{
				if (GlobalFunc_4940(iLocal_55[2]))
				{
					bLocal_230 = true;
					VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(iLocal_55[2], 1, 1, 1);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Andreas_Sanchez", 0))
			{
				GlobalFunc_881(&(iLocal_48[0]));
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Dave_FBI", 0))
			{
				GlobalFunc_881(&(iLocal_48[1]));
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("steve_FBI", 0))
			{
				GlobalFunc_881(&(iLocal_48[2]));
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("DaveNortons_Phone", 0))
			{
				GlobalFunc_2346(&iLocal_60);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				if (GlobalFunc_4940(iLocal_55[2]))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_55[2], -1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
					VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_55[2], 0, 1);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				if (!bLocal_229)
				{
					if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Franklin", 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Franklin", 0)))
						{
							iLocal_48[5] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Franklin", 0));
						}
					}
				}
				GlobalFunc_881(&(iLocal_48[5]));
			}
			if (iVar0 >= 166500)
			{
				GlobalFunc_6689(&(iLocal_55[1]));
				GlobalFunc_6791(1, 0);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				if (iLocal_39 != 2)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", 1);
					GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneTrevor", 0, 0);
				}
			}
			if (!CUTSCENE::IS_CUTSCENE_PLAYING() && iLocal_43)
			{
				CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(1);
				iLocal_38 = 2;
			}
			break;
		
		case 2:
			CAM::STOP_GAMEPLAY_HINT(0);
			if (iLocal_61 == -1)
			{
				iLocal_61 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_61) > 1000)
			{
				iLocal_43 = 0;
				func_23(1, 1, 1, 1);
				func_462(0);
			}
			break;
		
		case 3:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (!bLocal_230)
				{
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("trevors_car", 0))
					{
						if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("trevors_car", 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevors_car", 0)))
							{
								iLocal_55[2] = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevors_car", 0));
							}
						}
					}
				}
				if (!bLocal_229)
				{
					if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Franklin", 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Franklin", 0)))
						{
							iLocal_48[5] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Franklin", 0));
							bLocal_229 = true;
						}
					}
				}
			}
			else
			{
				GlobalFunc_6689(&(iLocal_55[1]));
				GlobalFunc_6791(1, 0);
				if (bLocal_229)
				{
					GlobalFunc_881(&(iLocal_48[5]));
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-27.6467f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-5.1166f, 1065353216);
				iLocal_38 = 2;
			}
			break;
	}
}

void func_462(bool bParam0)//Position - 0x58DCB
{
	iLocal_40 = iLocal_37;
	if (!bParam0)
	{
		iLocal_37 = iLocal_40 + 1;
	}
	else if (iLocal_40 > 0)
	{
		iLocal_37 = (iLocal_40 - 1);
	}
	iLocal_38 = 0;
}



void func_465(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x58EC1
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
	{
		GlobalFunc_9154(0);
		if (bParam9)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (bParam8)
		{
			switch (GlobalFunc_8315())
			{
				case 0:
					if (GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_419(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_419(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 8, 1) || GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_419(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_419(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
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




void func_469(struct<3> Param0, float fParam3)//Position - 0x590EF
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			GlobalFunc_9622(iVar0, Param0, fParam3, 24, 0);
		}
	}
}
















void func_485()//Position - 0x5AE98
{
	int iVar0;
	
	if ((GlobalFunc_4924(iLocal_48[0]) && GlobalFunc_4924(iLocal_48[1])) && GlobalFunc_4924(iLocal_48[2]))
	{
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_48[0], "Andreas_Sanchez", 0, 0, 0);
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_48[1], "Dave_FBI", 0, 0, 0);
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_48[2], "steve_FBI", 0, 0, 0);
		if (GlobalFunc_115(iLocal_60))
		{
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_60, "DaveNortons_Phone", 0, 0, 0);
		}
	}
	switch (GlobalFunc_8315())
	{
		case 0:
			iLocal_48[3] = PLAYER::PLAYER_PED_ID();
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_48[5], "Franklin", 2, GlobalFunc_4917(1), 0);
			if (GlobalFunc_4924(iLocal_48[4]))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_48[4], "trevor", 0, GlobalFunc_4917(2), 0);
			}
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_55[2], "trevors_car", 2, joaat("bodhi2"), 32);
			break;
		
		case 1:
			if ((GlobalFunc_4924(iLocal_48[3]) && GlobalFunc_4924(iLocal_48[4])) && GlobalFunc_4940(iLocal_55[2]))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_48[3], "michael", 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_48[4], "trevor", 0, 0, 0);
				iLocal_48[5] = PLAYER::PLAYER_PED_ID();
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_55[2], "trevors_car", 0, joaat("bodhi2"), 32);
			}
			break;
		
		case 2:
			if (GlobalFunc_4924(iLocal_48[3]))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_48[3], "michael", 0, GlobalFunc_4917(0), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_48[5], "Franklin", 2, GlobalFunc_4917(1), 0);
				if (GlobalFunc_4940(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
				{
					iVar0 = GlobalFunc_99(PLAYER::GET_PLAYERS_LAST_VEHICLE());
					if (iVar0 == 2)
					{
						iLocal_55[2] = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_55[2], 1, 1);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_55[2], "trevors_car", 0, joaat("bodhi2"), 32);
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_55[2], "trevors_car", 2, joaat("bodhi2"), 32);
					}
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_55[2], "trevors_car", 2, joaat("bodhi2"), 32);
				}
			}
			break;
	}
}











void func_496()//Position - 0x5B822
{
	switch (iLocal_38)
	{
		case 0:
			if (func_55(iLocal_37, 0))
			{
				if (GlobalFunc_4940(iLocal_55[2]))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_55[2], 1);
				}
				GlobalFunc_3008(0);
				if (GlobalFunc_199())
				{
					func_497(2);
				}
				else
				{
					if (GlobalFunc_2(0))
					{
						GlobalFunc_79(500, 1);
					}
					iLocal_38 = 2;
				}
			}
			break;
		
		case 2:
			func_462(0);
			break;
	}
}

void func_497(int iParam0)//Position - 0x5B88F
{
	func_504(1, 1);
	bLocal_41 = true;
	iLocal_37 = iParam0;
	if (iLocal_37 == 0)
	{
		iLocal_37 = 0;
	}
	iLocal_38 = 0;
	func_498(1);
}

void func_498(bool bParam0)//Position - 0x5B8B5
{
	if (bParam0)
	{
	}
	GlobalFunc_4956();
	HUD::CLEAR_PRINTS();
	func_501(1, 1, 1);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	if (bParam0)
	{
		func_2();
	}
	else
	{
		func_499();
	}
	if (CAM::DOES_CAM_EXIST(uLocal_44))
	{
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		CAM::DESTROY_CAM(uLocal_44, 0);
	}
}

void func_499()//Position - 0x5B907
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (iLocal_48[iVar0] != PLAYER::PLAYER_PED_ID())
		{
			GlobalFunc_132(&(iLocal_48[iVar0]), 1, 0, 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		GlobalFunc_131(&(iLocal_55[iVar0]));
		iVar0++;
	}
}


void func_501(bool bParam0, int iParam1, int iParam2)//Position - 0x5B9A8
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
			func_23(iParam1, iParam2, 1, 1);
		}
	}
}



void func_504(bool bParam0, bool bParam1)//Position - 0x5BA38
{
	if (bParam0)
	{
		func_501(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_465(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}


void func_506()//Position - 0x5BAB2
{
	if (!bLocal_41 && iLocal_37 != 3)
	{
		if (iLocal_37 > 1)
		{
			func_507();
		}
	}
}

void func_507()//Position - 0x5BAD3
{
	if (!GlobalFunc_4924(iLocal_48[3]))
	{
		func_36(1);
	}
}





void func_512(bool bParam0, int iParam1)//Position - 0x5BBDF
{
	HUD::CLEAR_PRINTS();
	GlobalFunc_4935();
	func_513(bParam0, iParam1);
	func_515();
}

void func_513(bool bParam0, var uParam1)//Position - 0x5BBFB
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_54752)
	{
		Global_54752 = uParam1;
	}
	if (bParam0)
	{
		if ((GlobalFunc_2(0) && Global_68491.f_1 == 1) && GlobalFunc_528(Global_68491))
		{
		}
		else
		{
			Global_54750 = 1;
		}
	}
	if (Global_SAVE_DATA.isGameflowActive || GlobalFunc_2(0))
	{
		iVar0 = GlobalFunc_508();
		iVar1 = Global_81119[iVar0 /*5*/];
		uVar2 = Global_68514.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_SAVE_DATA.isGameflowActive)
			{
			}
			return;
		}
		if (MISC::IS_BIT_SET(Global_81119[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (MISC::IS_BIT_SET(Global_81119[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		MISC::SET_BIT(&(Global_81119[iVar0 /*5*/].f_1), 4);
		MISC::SET_BIT(&Global_68493, 1);
		Global_68509 = uVar2;
		Global_68510 = MISC::GET_GAME_TIMER();
	}
}


void func_515()//Position - 0x5BD0F
{
	GlobalFunc_3008(1);
	GlobalFunc_695(1);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
	func_498(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}




