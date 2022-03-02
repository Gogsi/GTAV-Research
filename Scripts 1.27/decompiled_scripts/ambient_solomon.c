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
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
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
	struct<3> Local_59 = { 0, 0, 0 } ;
	float fLocal_62 = 0f;
	struct<3> Local_63 = { 0, 0, 0 } ;
	struct<3> Local_66 = { 0, 0, 0 } ;
	var uLocal_69 = 16;
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
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	float fLocal_236 = 0f;
	int iLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	int iLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	struct<3> Local_245 = { 0, 0, 0 } ;
	int iLocal_248 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	
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
	sLocal_20 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_37 = 3;
	iLocal_43 = 1;
	iLocal_44 = 65;
	iLocal_45 = 49;
	iLocal_46 = 64;
	Local_59 = { -1124.392f, -514.7001f, 33.21493f };
	fLocal_62 = 200f;
	Local_63 = { 2490f, 3777f, 2402.879f };
	Local_66 = { -2052f, 3237f, 1450.078f };
	fLocal_236 = 3f;
	iLocal_237 = 2;
	iLocal_248 = joaat("s_m_m_security_01");
	bVar0 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_70();
	}
	GlobalFunc_501(30);
	if (GlobalFunc_852(PLAYER::PLAYER_PED_ID()))
	{
		while (bVar0 == 0)
		{
			bVar0 = ((MISC::GET_MISSION_FLAG() == 0 && GlobalFunc_8354() == 0) && GlobalFunc_882(PLAYER::PLAYER_PED_ID(), Local_59, fLocal_62));
			func_61();
		}
	}
	GlobalFunc_585(65, 0);
	func_59(1);
	func_58(joaat("akuma"), 1);
	func_58(iLocal_248, 1);
	while (true)
	{
		GlobalFunc_852(PLAYER::PLAYER_PED_ID());
		Local_245 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()) };
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			func_57(&uLocal_234);
			func_3(&uLocal_235);
			if (GlobalFunc_877(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 7, 0, 0))
			{
				GlobalFunc_585(65, 1);
				GlobalFunc_492(30);
				func_70();
			}
		}
		func_61();
	}
}



void func_3(var uParam0)//Position - 0xF3A
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	switch (*uParam0)
	{
		case 0:
			func_53(&uLocal_240);
			GlobalFunc_585(65, 0);
			GlobalFunc_881(&uLocal_244);
			*uParam0++;
			break;
		
		case 1:
			if (func_51(PLAYER::PLAYER_PED_ID(), -1210.236f, -579.875f, 26.33215f, -1204.725f, -586.3573f, 29.56773f, 6f))
			{
				fLocal_236 = 0.25f;
				*uParam0++;
				return;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				uVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				uVar1 = MISC::ACOS(GlobalFunc_880(Local_245, 0.73f, 0.683f, -0.013f));
				if (MISC::ABSF(uVar1) < 25f)
				{
					if (func_51(uVar2, -1211.774f, -580.9299f, 26.33095f, -1208.127f, -585.3617f, 29.66056f, 4.5f))
					{
						fLocal_236 = 3f;
						*uParam0++;
					}
				}
			}
			break;
		
		case 2:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				uVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				func_49(uVar2, fLocal_236, iLocal_237, 1056964608, 0, 1);
			}
			else
			{
				TASK::TASK_STAND_STILL(PLAYER::PLAYER_PED_ID(), -1);
			}
			if (func_47(-1210.152f, -578.0859f, 26.7238f))
			{
				GlobalFunc_878(&uLocal_69, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
				if (GlobalFunc_745())
				{
					bVar0 = GlobalFunc_10643(&uLocal_69, "AMSOLAU", "AMSOL_HERE", 8, 0, 0, 0);
				}
				else
				{
					bVar0 = GlobalFunc_10643(&uLocal_69, "AMSOLAU", "AMSOL_WORK", 8, 0, 0, 0);
				}
				if (bVar0)
				{
					*uParam0++;
				}
			}
			else
			{
				*uParam0++;
			}
			break;
		
		case 3:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				uVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (func_49(uVar2, fLocal_236, iLocal_237, 1056964608, 0, 1))
				{
					*uParam0++;
					return;
				}
			}
			*uParam0++;
			break;
		
		case 4:
			if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()) && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				*uParam0++;
			}
			break;
		
		case 5:
			func_5(0);
			*uParam0++;
			break;
		
		case 6:
			func_4(&uLocal_240, -1206.84f, -583.2034f, 26.1738f, 311.4116f);
			*uParam0++;
			break;
		
		case 7:
			if (!func_51(PLAYER::PLAYER_PED_ID(), -1210.236f, -579.875f, 26.33215f, -1204.725f, -586.3573f, 29.56773f, 6f))
			{
				func_53(&uLocal_240);
				*uParam0++;
			}
			break;
		
		case 8:
			if (iLocal_242 == 0)
			{
				func_70();
			}
			break;
	}
}

void func_4(var uParam0, struct<3> Param1, float fParam4)//Position - 0x11E4
{
	uParam0->f_1 = VEHICLE::CREATE_VEHICLE(joaat("akuma"), Param1, fParam4, 1, 1);
	if (GlobalFunc_852(uParam0->f_1))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_1, 1);
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_1, 0, 0);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_1, 0);
		VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_1, 0, 1);
		*uParam0 = PED::CREATE_PED_INSIDE_VEHICLE(uParam0->f_1, 26, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), -1, 1, 1);
		if (GlobalFunc_852(*uParam0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
			ENTITY::SET_ENTITY_VISIBLE(*uParam0, 0);
			AUDIO::STOP_PED_SPEAKING(*uParam0, 1);
		}
	}
}

void func_5(int iParam0)//Position - 0x126C
{
	GlobalFunc_585(65, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-1039.504f, -477.7876f, 35.32967f, -1062.444f, -469.5685f, 40.62086f, 13f, 1);
	func_6(135, iParam0);
	func_6(136, iParam0);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-1039.504f, -477.7876f, 35.32967f, -1062.444f, -469.5685f, 40.62086f, 13f, 1);
	func_6(137, iParam0);
	func_6(138, iParam0);
}

void func_6(int iParam0, int iParam1)//Position - 0x12EB
{
	func_7(iParam0, iParam1);
	MISC::SET_BIT(&(Global_30796[(iParam0 / 32)]), (iParam0 % 32));
	Global_31257[iParam0] = iParam1;
	Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = iParam1;
}

void func_7(int iParam0, int iParam1)//Position - 0x1324
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
			func_9(iParam0);
			if (MISC::IS_BIT_SET(Global_30787[(iParam0 / 32)], (iParam0 % 32)))
			{
				GlobalFunc_510(iParam0);
			}
		}
	}
}


void func_9(int iParam0)//Position - 0x146B
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
		GlobalFunc_8355(iParam0, &Var0);
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
			iVar9 = GlobalFunc_9041(iParam0);
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
		if (GlobalFunc_9040())
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






































int func_47(struct<3> Param0)//Position - 0x5CD8
{
	int iVar0;
	int iVar1;
	var uVar2[20];
	
	iVar0 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar2, -1);
	if (iVar0 == 0)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (GlobalFunc_852(uVar2[iVar1]))
		{
			if (PED::IS_PED_MODEL(uVar2[iVar1], iLocal_248))
			{
				if (GlobalFunc_879(uVar2[iVar1], Param0, 1) < 5f)
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}


int func_49(var uParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5)//Position - 0x5D7E
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 138, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 136, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 107, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 110, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 87, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 88, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 113, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 115, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 116, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 117, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 118, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 119, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 131, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 132, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 123, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 126, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 129, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 130, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 133, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 134, 1);
	CAM::_0x17FCA7199A530203();
	if ((MISC::GET_GAME_TIMER() - Global_28) > 500)
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(uParam0, fParam1, iParam2, iParam4);
	}
	Global_28 = MISC::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(uParam0))
	{
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(uParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}


int func_51(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7)//Position - 0x5F17
{
	struct<3> Var0;
	struct<2> Var3;
	struct<2> Var6;
	
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uParam0, Param1, Param4, fParam7, 0, 1, 0))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_A_PED(uParam0))
	{
		return 0;
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam0), &Var3, &Var6);
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0, Var3, Var6.f_1, 0f) };
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, Param1, Param4, fParam7, 0, 1))
	{
		return 1;
	}
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0, 0f, Var6.f_1, 0f) };
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, Param1, Param4, fParam7, 0, 1))
	{
		return 1;
	}
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0, Var6, Var6.f_1, 0f) };
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, Param1, Param4, fParam7, 0, 1))
	{
		return 1;
	}
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0, Var3, Var3.f_1, 0f) };
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, Param1, Param4, fParam7, 0, 1))
	{
		return 1;
	}
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0, 0f, Var3.f_1, 0f) };
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, Param1, Param4, fParam7, 0, 1))
	{
		return 1;
	}
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0, Var6, Var3.f_1, 0f) };
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, Param1, Param4, fParam7, 0, 1))
	{
		return 1;
	}
	return 0;
}


void func_53(var uParam0)//Position - 0x609A
{
	GlobalFunc_881(uParam0);
	GlobalFunc_6838(&(uParam0->f_1));
}




void func_57(var uParam0)//Position - 0x6196
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	switch (*uParam0)
	{
		case 0:
			func_53(&uLocal_238);
			GlobalFunc_585(65, 0);
			GlobalFunc_881(&uLocal_243);
			*uParam0++;
			break;
		
		case 1:
			if (func_51(PLAYER::PLAYER_PED_ID(), -1055.046f, -469.3347f, 35.43333f, -1057.44f, -474.9772f, 39.8187f, 12.5f))
			{
				fLocal_236 = 0.25f;
				*uParam0++;
				return;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				uVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				uVar1 = MISC::ACOS(GlobalFunc_880(Local_245, -0.37f, -0.927f, -0.053f));
				if (MISC::ABSF(uVar1) < 45f)
				{
					if (func_51(uVar2, -1049.318f, -473.7472f, 34.94196f, -1059.483f, -468.7608f, 39.94483f, 4.5f))
					{
						fLocal_236 = 1f;
						*uParam0++;
					}
				}
			}
			break;
		
		case 2:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				uVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				func_49(uVar2, fLocal_236, iLocal_237, 1056964608, 0, 1);
			}
			else
			{
				TASK::TASK_STAND_STILL(PLAYER::PLAYER_PED_ID(), -1);
			}
			if (func_47(-1051.1f, -476.1f, 37f))
			{
				GlobalFunc_878(&uLocal_69, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
				if (GlobalFunc_745())
				{
					bVar0 = GlobalFunc_10643(&uLocal_69, "AMSOLAU", "AMSOL_HERE", 8, 0, 0, 0);
				}
				else
				{
					bVar0 = GlobalFunc_10643(&uLocal_69, "AMSOLAU", "AMSOL_WORK", 8, 0, 0, 0);
				}
				if (bVar0)
				{
					*uParam0++;
				}
			}
			else
			{
				*uParam0++;
			}
			break;
		
		case 3:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				uVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (func_49(uVar2, fLocal_236, iLocal_237, 1056964608, 0, 1))
				{
					*uParam0++;
				}
				return;
			}
			*uParam0++;
			break;
		
		case 4:
			if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()) && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				*uParam0++;
			}
			break;
		
		case 5:
			func_5(0);
			*uParam0++;
			break;
		
		case 6:
			func_4(&uLocal_238, -1051.956f, -472.055f, 35.5672f, 161.4418f);
			*uParam0++;
			break;
		
		case 7:
			if (!func_51(PLAYER::PLAYER_PED_ID(), -1055.514f, -474.6371f, 35.6278f, -1051.23f, -464.4126f, 39.91479f, 9.5f))
			{
				func_53(&uLocal_238);
				*uParam0++;
			}
			break;
		
		case 8:
			if (iLocal_242 == 0)
			{
				func_70();
			}
			break;
	}
}

int func_58(int iParam0, int iParam1)//Position - 0x6448
{
	int iVar0;
	
	iVar0 = MISC::GET_GAME_TIMER() + 7500;
	if (iParam0 == 0)
	{
		return 0;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	if (STREAMING::HAS_MODEL_LOADED(iParam0))
	{
		return 1;
	}
	if (iParam1 == 0)
	{
		return 1;
	}
	while (!STREAMING::HAS_MODEL_LOADED(iParam0))
	{
		SYSTEM::WAIT(0);
		if (MISC::GET_GAME_TIMER() > iVar0 && !STREAMING::HAS_MODEL_LOADED(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_59(int iParam0)//Position - 0x64AD
{
	GlobalFunc_585(65, 0);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1039.504f, -477.7876f, 35.32967f, -1062.444f, -469.5685f, 40.62086f, 13f, 0, 0, 1);
	func_6(135, iParam0);
	func_6(136, iParam0);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1039.504f, -477.7876f, 35.32967f, -1062.444f, -469.5685f, 40.62086f, 13f, 0, 0, 1);
	func_6(137, iParam0);
	func_6(138, iParam0);
}


void func_61()//Position - 0x6575
{
	GlobalFunc_852(PLAYER::PLAYER_PED_ID());
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("solomon1")) > 0)
	{
		GlobalFunc_492(30);
		GlobalFunc_585(65, 1);
		func_70();
	}
	if (GlobalFunc_230(59) == 1)
	{
		GlobalFunc_585(65, 1);
		GlobalFunc_492(30);
		func_70();
	}
	if (MISC::GET_MISSION_FLAG())
	{
		func_70();
	}
	if (GlobalFunc_8354() != 0)
	{
		func_70();
	}
	if (!GlobalFunc_882(PLAYER::PLAYER_PED_ID(), Local_59, (fLocal_62 + 30f)))
	{
		func_70();
	}
	SYSTEM::WAIT(0);
	GlobalFunc_852(PLAYER::PLAYER_PED_ID());
}









void func_70()//Position - 0x683F
{
	func_53(&uLocal_238);
	func_53(&uLocal_240);
	GlobalFunc_132(&uLocal_243, 0, 0, 1);
	GlobalFunc_132(&uLocal_244, 0, 0, 1);
	GlobalFunc_585(65, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_security_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("akuma"));
	SCRIPT::TERMINATE_THIS_THREAD();
}


