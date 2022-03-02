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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
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
	struct<3> Local_42 = { 0, 0, 0 } ;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	struct<3> Local_48 = { 0, 0, 0 } ;
	struct<3> Local_51 = { 0, 0, 0 } ;
	struct<3> Local_54 = { 0, 0, 0 } ;
	struct<3> Local_57 = { 0, 0, 0 } ;
	struct<3> Local_60 = { 0, 0, 0 } ;
	struct<3> Local_63 = { 0, 0, 0 } ;
	float fLocal_66 = 0f;
	var uLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 16;
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
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	bool bLocal_242 = 0;
	bool bLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	Local_48 = { ScriptParam_0.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_165();
	}
	if (func_123(Local_48, -1, 0, 0, 0))
	{
		GlobalFunc_6828(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || bLocal_242)
		{
			if (!GlobalFunc_6827())
			{
				if (GlobalFunc_10586())
				{
					func_165();
				}
			}
			RECORDING::_0x208784099002BC30("RE_LU", 0);
			switch (iLocal_45)
			{
				case 0:
					if (func_106())
					{
						func_165();
					}
					if (iLocal_46)
					{
						iLocal_45 = 1;
						iLocal_47 = 1;
					}
					else
					{
						func_103();
					}
					break;
				
				case 1:
					if (!bLocal_242)
					{
						if (!iLocal_241)
						{
							func_90();
						}
						else if (!iLocal_245)
						{
							func_89();
							func_88();
						}
						func_79();
						if (!PED::IS_PED_INJURED(iLocal_68))
						{
							PED::SET_PED_RESET_FLAG(iLocal_68, 247, 1);
						}
					}
					else
					{
						PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
						if (!iLocal_245)
						{
							func_52();
						}
						else if (!iLocal_246)
						{
							func_51();
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_69))
					{
						PED::SET_PED_RESET_FLAG(iLocal_69, 156, 1);
					}
					func_35();
					GlobalFunc_587();
					func_1();
					break;
			}
		}
		else
		{
			func_165();
		}
	}
}

void func_1()//Position - 0x18E
{
	if (bLocal_242)
	{
		if (PED::IS_PED_INJURED(iLocal_69))
		{
			func_3();
		}
		else if (bLocal_243)
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_69, 100f, 100f, 100f, 0, 1, 0))
			{
				func_2();
			}
		}
		else if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_69, 100f, 100f, 100f, 0, 1, 0))
		{
			func_3();
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(iLocal_68))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_68, PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_68))
			{
				func_2();
			}
		}
		if (PED::IS_PED_INJURED(iLocal_68))
		{
			if (!PED::IS_PED_INJURED(iLocal_69))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_69, uLocal_74);
				PED::SET_PED_KEEP_TASK(iLocal_69, 1);
			}
			func_2();
		}
		if (PED::IS_PED_INJURED(iLocal_69))
		{
			if (!PED::IS_PED_INJURED(iLocal_68))
			{
				TASK::CLEAR_PED_TASKS(iLocal_68);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_68, uLocal_74);
				PED::SET_PED_KEEP_TASK(iLocal_68, 1);
			}
			func_2();
		}
	}
	if (PED::IS_PED_INJURED(iLocal_68))
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_70))
		{
			HUD::REMOVE_BLIP(&uLocal_70);
		}
	}
	if (PED::IS_PED_INJURED(iLocal_69))
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_71))
		{
			HUD::REMOVE_BLIP(&uLocal_71);
		}
	}
}

void func_2()//Position - 0x2FE
{
	func_165();
}

void func_3()//Position - 0x30A
{
	while (GlobalFunc_111())
	{
		SYSTEM::WAIT(0);
	}
	while (!GlobalFunc_82())
	{
		SYSTEM::WAIT(0);
	}
	func_7(-1, 0);
	GlobalFunc_7068();
	func_165();
}




void func_7(int iParam0, int iParam1)//Position - 0x3C2
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
			GlobalFunc_6677("RE_REWARD", 1, 0, 4000, 10000, GlobalFunc_8546(), 0, 138, 0);
			GlobalFunc_651(51);
		}
		if (GlobalFunc_827(iParam0))
		{
			Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_HELP_COUNT = 3;
		}
		if (GlobalFunc_4703(iParam0, iParam1) != 322)
		{
			GlobalFunc_8276(GlobalFunc_4703(iParam0, iParam1), Local_42.x, Local_42.f_1);
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




























void func_35()//Position - 0x1935
{
	if (!bLocal_242)
	{
		if (func_50())
		{
			iLocal_245 = 1;
			if (!PED::IS_PED_INJURED(iLocal_69))
			{
				TASK::CLEAR_PED_TASKS(iLocal_69);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_69, uLocal_74);
				PED::SET_PED_KEEP_TASK(iLocal_69, 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_68))
			{
				TASK::CLEAR_PED_TASKS(iLocal_68);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_68, uLocal_74);
				PED::SET_PED_KEEP_TASK(iLocal_68, 1);
			}
			func_2();
		}
	}
	else if (!iLocal_245 && !bLocal_243)
	{
		if ((func_50() || WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)) || !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_69, 0), 12f, 12f, 5f, 0, 1, 0))
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_67, 1862763509);
			if (!PED::IS_PED_INJURED(iLocal_69))
			{
				TASK::CLEAR_PED_TASKS(iLocal_69);
				TASK::TASK_COMBAT_PED(iLocal_69, PLAYER::PLAYER_PED_ID(), 0, 16);
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_69, 15f, 15f, 15f, 0, 1, 0))
				{
					GlobalFunc_4956();
					SYSTEM::WAIT(0);
					GlobalFunc_10641(&uLocal_75, "lurinau", "lurin_fucked", 4, 0, 0, 0);
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_68))
			{
				TASK::CLEAR_PED_TASKS(iLocal_68);
				TASK::TASK_COMBAT_PED(iLocal_68, PLAYER::PLAYER_PED_ID(), 0, 16);
			}
			iLocal_245 = 1;
		}
	}
}















int func_50()//Position - 0x217C
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 30f, 30f, 30f };
	Var3 = { -30f, -30f, -30f };
	if (!PED::IS_PED_INJURED(iLocal_68) && !PED::IS_PED_INJURED(iLocal_69))
	{
		if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_68, 31086, 0f, 0f, 0f), 30f, 1))
		{
			return 1;
		}
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_68, 30f, 30f, 30f, 0, 1, 0) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_68) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_69)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_68)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_69))
			{
				if (PED::CAN_PED_SEE_HATED_PED(iLocal_68, PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(iLocal_69, PLAYER::PLAYER_PED_ID()))
				{
					GlobalFunc_4956();
					SYSTEM::WAIT(0);
					GlobalFunc_10641(&uLocal_75, "lurinau", "lurin_gun", 4, 0, 0, 0);
					return 1;
				}
			}
		}
		Var0 = { Var0 + PED::GET_PED_BONE_COORDS(iLocal_68, 31086, 0f, 0f, 0f) };
		Var3 = { Var3 + PED::GET_PED_BONE_COORDS(iLocal_68, 31086, 0f, 0f, 0f) };
		if ((MISC::IS_PROJECTILE_TYPE_IN_AREA(Var3, Var0, joaat("weapon_smokegrenade"), 1) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var3, Var0, joaat("weapon_grenade"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var3, Var0, joaat("weapon_stickybomb"), 1))
		{
			return 1;
		}
		if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(iLocal_68, 31086, 0f, 0f, 0f), 3f))
		{
			return 1;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("bulldozer")))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_68) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_69))
				{
					return 1;
				}
			}
			if (((PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("rhino")) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("annihilator"))) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("buzzard"))) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("lazer")))
			{
				return 1;
			}
		}
		if (PED::IS_COP_PED_IN_AREA_3D(ENTITY::GET_ENTITY_COORDS(iLocal_68, 0) - Local_54, ENTITY::GET_ENTITY_COORDS(iLocal_68, 0) + Local_54) || VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(ENTITY::GET_ENTITY_COORDS(iLocal_68, 0) - Local_54, ENTITY::GET_ENTITY_COORDS(iLocal_68, 0) + Local_54))
		{
			return 1;
		}
	}
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 894.1762f, -1048.294f, 41.828f, 15f, 21.5625f, 10f, 0, 1, 0))
	{
		GlobalFunc_4956();
		SYSTEM::WAIT(0);
		GlobalFunc_10641(&uLocal_75, "lurinau", "lurin_other", 4, 0, 0, 0);
		return 1;
	}
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_48, 15f, 15f, 15f, 0, 1, 0))
	{
		if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
		{
			GlobalFunc_4956();
			return 1;
		}
	}
	else if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
	{
		PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
		GlobalFunc_4956();
	}
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_48, 40f, 40f, 40f, 0, 1, 0))
	{
		if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_68))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_68, PLAYER::PLAYER_PED_ID(), 1))
		{
			GlobalFunc_4956();
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_69))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_69, PLAYER::PLAYER_PED_ID(), 1))
		{
			GlobalFunc_4956();
			return 1;
		}
	}
	return 0;
}

void func_51()//Position - 0x24F3
{
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -734.9749f, -728.4423f, 29.4985f, 2f, 6f, 2f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -663.9312f, -725.6195f, 28.2592f, 2f, 6f, 2f, 0, 1, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_69))
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
			TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_69, uLocal_74);
			PED::SET_PED_KEEP_TASK(iLocal_69, 1);
		}
		if (!PED::IS_PED_INJURED(iLocal_68))
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
			TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_68, uLocal_74);
			PED::SET_PED_KEEP_TASK(iLocal_68, 1);
		}
		iLocal_246 = 1;
	}
}

void func_52()//Position - 0x25C9
{
	if (!bLocal_243)
	{
		if (!PED::IS_PED_INJURED(iLocal_69))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_69, 242628503) == 7 && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_69, PLAYER::PLAYER_PED_ID(), 2.8f, 2.8f, 2.8f, 0, 1, 0))
			{
				if (!iLocal_244)
				{
					iLocal_249 = 500;
					GlobalFunc_4956();
					SYSTEM::WAIT(0);
					if (GlobalFunc_469(GlobalFunc_8329()) >= iLocal_249)
					{
						GlobalFunc_10834(GlobalFunc_8329(), 1, iLocal_249);
						iLocal_250 = iLocal_249;
						GlobalFunc_10641(&uLocal_75, "lurinau", "lurin_mugtha", 4, 0, 0, 0);
					}
					else if (GlobalFunc_469(GlobalFunc_8329()) <= 0)
					{
						iLocal_250 = 0;
						GlobalFunc_10641(&uLocal_75, "lurinau", "lurin_mugnom", 4, 0, 0, 0);
					}
					else
					{
						iLocal_250 = GlobalFunc_469(GlobalFunc_8329());
						GlobalFunc_10834(GlobalFunc_8329(), 1, GlobalFunc_469(GlobalFunc_8329()));
						GlobalFunc_10641(&uLocal_75, "lurinau", "lurin_mugtha", 4, 0, 0, 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_69))
					{
						PED::SET_PED_MONEY(iLocal_69, iLocal_250);
					}
					iLocal_244 = 1;
				}
				if (!PED::IS_PED_INJURED(iLocal_69))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_69, uLocal_74);
					PED::SET_PED_KEEP_TASK(iLocal_69, 1);
					if (!PED::IS_PED_INJURED(iLocal_68))
					{
						TASK::CLEAR_PED_TASKS(iLocal_68);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_68, uLocal_74);
						PED::SET_PED_KEEP_TASK(iLocal_68, 1);
					}
					bLocal_243 = true;
				}
			}
		}
	}
}



























void func_79()//Position - 0x36A0
{
	if (!PED::IS_PED_INJURED(iLocal_69))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 873.9561f, -1050.806f, 33.0066f, 4.75f, 1.9f, 1f, 0, 1, 0))
		{
			if (!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_69, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				PED::SET_PED_DUCKING(iLocal_69, 0);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_69, joaat("weapon_pistol"), 200, 1, 1);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					GlobalFunc_4956();
					SYSTEM::WAIT(0);
					GlobalFunc_10641(&uLocal_75, "lurinau", "lurin_other", 4, 0, 0, 0);
					func_2();
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					TASK::TASK_PLAY_ANIM(0, "random@mugging5", "ig_1_guy_enter_stickup", 2f, -2f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 2f, 0, 2.3f, 4f, 1, 1, -957453492);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 500, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
				}
				TASK::TASK_PERFORM_SEQUENCE(iLocal_69, uLocal_74);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
				HUD::SET_BLIP_AS_FRIENDLY(uLocal_70, 0);
				uLocal_71 = GlobalFunc_7491(iLocal_69, 1, 145);
				AUDIO::TRIGGER_MUSIC_EVENT("RE35_OS");
				SYSTEM::WAIT(500);
				if (!PED::IS_PED_INJURED(iLocal_68))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_68, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_68, joaat("weapon_pistol"), 200, 1, 1);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_63, PLAYER::PLAYER_PED_ID(), 2f, 0, 0f, 4f, 1, 512, 0, -957453492, 20000);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_68, uLocal_74);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
				}
				if (!PED::IS_PED_INJURED(iLocal_69))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
					TASK::TASK_LOOK_AT_ENTITY(0, iLocal_69, -1, 2048, 2);
					TASK::TASK_PAUSE(0, 1000);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
					TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_74);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
					GlobalFunc_7632(1);
				}
				GlobalFunc_4956();
				SYSTEM::WAIT(0);
				GlobalFunc_10641(&uLocal_75, "lurinau", "lurin_mugger", 4, 0, 0, 0);
				SYSTEM::SETTIMERA(0);
				bLocal_242 = true;
			}
			else
			{
				TASK::CLEAR_PED_TASKS(iLocal_69);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_69, uLocal_74);
				PED::SET_PED_KEEP_TASK(iLocal_69, 1);
				if (!PED::IS_PED_INJURED(iLocal_68))
				{
					TASK::CLEAR_PED_TASKS(iLocal_68);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_68, uLocal_74);
					PED::SET_PED_KEEP_TASK(iLocal_68, 1);
				}
				GlobalFunc_4956();
				SYSTEM::WAIT(0);
				GlobalFunc_10641(&uLocal_75, "lurinau", "lurin_gun", 4, 0, 0, 0);
				func_2();
			}
		}
	}
}









void func_88()//Position - 0x3C14
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_68))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_68, 15f, 15f, 15f, 0, 1, 0))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (!GlobalFunc_111())
				{
					if (iLocal_248 == 0)
					{
						GlobalFunc_10641(&uLocal_75, "lurinau", "lurin_girlta", 4, 0, 0, 0);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_68, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
						iLocal_248++;
						SYSTEM::SETTIMERB(0);
					}
					if ((SYSTEM::TIMERB() > 3500 && iLocal_248 == 1) && !GlobalFunc_111())
					{
						GlobalFunc_10641(&uLocal_75, "lurinau", "lurin_girltb", 4, 0, 0, 0);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_68, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
						iLocal_248++;
						SYSTEM::SETTIMERB(0);
					}
					if ((SYSTEM::TIMERB() > 7000 && iLocal_248 == 2) && !GlobalFunc_111())
					{
						SYSTEM::SETTIMERB(0);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_68, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
						GlobalFunc_10641(&uLocal_75, "lurinau", "lurin_girlch", 4, 0, 0, 0);
					}
				}
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			}
		}
	}
}

void func_89()//Position - 0x3D2B
{
	if (!PED::IS_PED_INJURED(iLocal_68))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && PED::CAN_PED_SEE_HATED_PED(iLocal_68, PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS(iLocal_68);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_68, uLocal_74);
				PED::SET_PED_KEEP_TASK(iLocal_68, 1);
				if (!PED::IS_PED_INJURED(iLocal_69))
				{
					TASK::CLEAR_PED_TASKS(iLocal_69);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_69, uLocal_74);
					PED::SET_PED_KEEP_TASK(iLocal_69, 1);
				}
				GlobalFunc_4956();
				SYSTEM::WAIT(0);
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
				{
					GlobalFunc_10641(&uLocal_75, "lurinau", "lurin_gun", 4, 0, 0, 0);
				}
				else if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 2))
				{
					GlobalFunc_10641(&uLocal_75, "lurinau", "lurin_other", 4, 0, 0, 0);
				}
				func_2();
			}
		}
	}
}

void func_90()//Position - 0x3E39
{
	if (!GlobalFunc_6827())
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_68))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_48, 65f, 60f, 60f, 0, 1, 0) || Global_97348)
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_72))
				{
					HUD::REMOVE_BLIP(&uLocal_72);
				}
				uLocal_70 = GlobalFunc_7491(iLocal_68, 0, 145);
				HUD::SHOW_HEIGHT_ON_BLIP(uLocal_70, 0);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				GlobalFunc_9034(1);
			}
		}
	}
	if (!iLocal_240)
	{
		if (!PED::IS_PED_INJURED(iLocal_68))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_68, 25f, 25f, 25f, 0, 1, 0) && GlobalFunc_6827())
			{
				if (GlobalFunc_10641(&uLocal_75, "lurinau", "lurin_help2", 4, 0, 0, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2064, 2);
					TASK::TASK_PLAY_ANIM(0, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_idle_b", 4f, -4f, -1, 49, 0, 0, 0, 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_68, uLocal_74);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
					iLocal_240 = 1;
				}
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_68))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_68, 15f, 15f, 15f, 0, 1, 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
		}
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_68, 8f, 8f, 8f, 0, 1, 0))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iLocal_241 = 1;
				if (HUD::DOES_BLIP_EXIST(uLocal_70))
				{
					HUD::SHOW_HEIGHT_ON_BLIP(uLocal_70, 1);
				}
				TASK::CLEAR_PED_TASKS(iLocal_68);
				GlobalFunc_10641(&uLocal_75, "lurinau", "lurin_help", 4, 0, 0, 0);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_68))
				{
					SYSTEM::SETTIMERB(0);
					TASK::CLEAR_PED_SECONDARY_TASK(iLocal_68);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2064, 2);
					TASK::TASK_STAND_STILL(0, 1000);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_60, 2f, -1, 0.25f, 512, 80.1325f);
					TASK::TASK_PLAY_ANIM(0, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_idle_b", 4f, -4f, -1, 1, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_68, uLocal_74);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
					Local_54 = { 40f, 40f, 30f };
				}
			}
			else if (!iLocal_247)
			{
				GlobalFunc_5105();
				SYSTEM::WAIT(0);
				if (!GlobalFunc_111())
				{
					if (!PED::IS_PED_INJURED(iLocal_68))
					{
						GlobalFunc_10641(&uLocal_75, "lurinau", "lurin_girlca", 4, 0, 0, 0);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 3076, 2);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_68, uLocal_74);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
						iLocal_247 = 1;
					}
				}
			}
		}
	}
}













void func_103()//Position - 0x4668
{
	func_105();
	STREAMING::REQUEST_MODEL(joaat("a_m_m_tramp_01"));
	STREAMING::REQUEST_MODEL(joaat("a_f_m_skidrow_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_ld_wallet_01_s"));
	STREAMING::REQUEST_ANIM_DICT("random@mugging5");
	STREAMING::REQUEST_ANIM_DICT("random@gang_intimidation@");
	AUDIO::PREPARE_MUSIC_EVENT("RE35_OS");
	while ((((!STREAMING::HAS_MODEL_LOADED(joaat("a_f_m_skidrow_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("a_m_m_tramp_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_wallet_01_s"))) || !STREAMING::HAS_ANIM_DICT_LOADED("random@mugging5")) || !STREAMING::HAS_ANIM_DICT_LOADED("random@gang_intimidation@"))
	{
		SYSTEM::WAIT(0);
	}
	PED::ADD_SCENARIO_BLOCKING_AREA(Local_48 - Vector(10f, 30f, 30f), Local_48 + Vector(10f, 30f, 30f), 0, 1, 1, 1);
	PED::ADD_RELATIONSHIP_GROUP("mugger", &uLocal_67);
	iLocal_68 = PED::CREATE_PED(19, joaat("a_f_m_skidrow_01"), Local_57, 79.765f, 1, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_68, 1);
	PED::SET_PED_CONFIG_FLAG(iLocal_68, 185, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_68, 128, 1);
	AUDIO::STOP_PED_SPEAKING(iLocal_68, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_68, uLocal_67);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_67, 1862763509);
	TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
	TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 3076, 2);
	TASK::TASK_PLAY_ANIM(0, "random@mugging5", "ig_1_girl_agitated_loop", 2f, -2f, -1, 1, 0, 0, 0, 0);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
	TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
	TASK::TASK_PERFORM_SEQUENCE(iLocal_68, uLocal_74);
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
	iLocal_69 = PED::CREATE_PED(7, joaat("a_m_m_tramp_01"), Local_51, fLocal_66, 1, 1);
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_69, "A_M_M_TRAMP_01_BLACK_MINI_01");
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_69, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_69, 128, 1);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_69, 1, 0);
	AUDIO::STOP_PED_SPEAKING(iLocal_69, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_69, uLocal_67);
	TASK::TASK_LOOK_AT_ENTITY(iLocal_69, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
	GlobalFunc_173(&uLocal_75, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	GlobalFunc_173(&uLocal_75, 4, iLocal_68, "HOBOFEMALE", 0, 1);
	GlobalFunc_173(&uLocal_75, 5, iLocal_69, "HOBOMALE", 0, 1);
	iLocal_46 = 1;
}


void func_105()//Position - 0x48EC
{
	Local_51 = { 879.8144f, -1047.433f, 32.0067f };
	fLocal_66 = 237.0934f;
	Local_57 = { 862.9633f, -1049.857f, 28.5362f };
	Local_54 = { 15f, 15f, 15f };
	Local_60 = { 881.1367f, -1050.706f, 32.0067f };
	Local_63 = { 876.7977f, -1052.52f, 32.0067f };
}

int func_106()//Position - 0x495A
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_42) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !GlobalFunc_874())
		{
			return 0;
		}
	}
	if (GlobalFunc_6562())
	{
		return 1;
	}
	if (GlobalFunc_9553(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

















int func_123(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x664C
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
	Local_42 = { Param0 };
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
		if (GlobalFunc_42(GlobalFunc_8329()))
		{
			if (GlobalFunc_9553(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((Var1.f_2 - Local_42.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!GlobalFunc_6563(iParam3))
		{
			return 0;
		}
		if (GlobalFunc_42(GlobalFunc_8329()))
		{
			if (GlobalFunc_6509(GlobalFunc_8329()) == 4 || GlobalFunc_6509(GlobalFunc_8329()) == 5)
			{
				return 0;
			}
		}
		if (GlobalFunc_42(GlobalFunc_8329()))
		{
			if (!GlobalFunc_9555(iParam3, iParam4, 145))
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
		if (GlobalFunc_10550())
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
		if (!GlobalFunc_8988(4))
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
		if (GlobalFunc_42(GlobalFunc_8329()))
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
								if (GlobalFunc_8329() != iVar4)
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










































void func_165()//Position - 0x7C6D
{
	if (iLocal_47)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		GlobalFunc_7632(0);
		AUDIO::CANCEL_MUSIC_EVENT("RE35_OS");
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		OBJECT::DELETE_OBJECT(&uLocal_73);
		if (!PED::IS_PED_INJURED(iLocal_68))
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
			TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_68, uLocal_74);
			PED::SET_PED_KEEP_TASK(iLocal_68, 1);
		}
		if (!PED::IS_PED_INJURED(iLocal_69))
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
			TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_69, uLocal_74);
			PED::SET_PED_KEEP_TASK(iLocal_69, 1);
		}
	}
	Global_97348 = 0;
	GlobalFunc_10823(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}












