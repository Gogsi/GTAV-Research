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
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	int iLocal_44 = 0;
	struct<3> Local_45 = { 0, 0, 0 } ;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	var uLocal_54 = 16;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
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
	var uLocal_219[3] = { 0, 0, 0 };
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	struct<3> Local_225 = { 0, 0, 0 } ;
	struct<3> Local_228[3];
	float fLocal_238[3] = { 0f, 0f, 0f };
	struct<3> Local_242 = { 0, 0, 0 } ;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	var uLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	bool bLocal_255 = 0;
	struct<3> Local_256 = { 0, 0, 0 } ;
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
	int iVar0;
	struct<6> Var1;
	int iVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	bool bVar12;
	int iVar13;
	struct<3> Var14;
	float fVar17;
	int iVar18[3];
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	
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
	iVar0 = 0;
	Var1 = 3;
	iVar7 = 0;
	iLocal_50 = 3;
	Local_225 = { ScriptParam_0.f_1[0 /*3*/] };
	Local_228[0 /*3*/] = { 1283.85f, -1622.501f, 53.2255f };
	fLocal_238[0] = 198.9926f;
	Local_228[1 /*3*/] = { 1286.655f, -1627f, 53.225f };
	fLocal_238[1] = 22.3073f;
	Local_228[2 /*3*/] = { 1286.452f, -1624.782f, 53.225f };
	fLocal_238[2] = 49.6773f;
	Var14 = { 1298.391f, -1580.895f, 50.7937f };
	fVar17 = 332.006f;
	Local_242 = { 1277.725f, -1617.897f, 53.2254f };
	if (GlobalFunc_745())
	{
		Var1[0] = joaat("g_m_y_mexgoon_02");
		Var1[1] = joaat("g_m_y_mexgoon_02");
		Var1[2] = joaat("g_m_y_mexgoon_02");
		Var1.f_4 = joaat("a_f_y_eastsa_03");
	}
	else
	{
		Var1[0] = joaat("g_m_y_mexgoon_02");
		Var1[1] = joaat("g_m_y_mexgoon_02");
		Var1[2] = joaat("g_m_y_mexgoon_02");
		Var1.f_4 = joaat("a_f_y_eastsa_03");
	}
	Var1.f_5 = "amb_sit_wall_m";
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_146(Var1, iVar13, &iVar18, iVar22);
	}
	if (func_113(Local_225, -1, 0, 0, 0))
	{
		GlobalFunc_6828(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_109(1, Var1);
	while (iVar0 != 7)
	{
		SYSTEM::WAIT(0);
		iVar23 = 600;
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			iVar23 = 0;
			iVar0 = 7;
			func_146(Var1, iVar13, &iVar18, iVar22);
		}
		if (!GlobalFunc_6827())
		{
			if (GlobalFunc_10589())
			{
				iVar23 = 0;
				iVar0 = 7;
				func_146(Var1, iVar13, &iVar18, iVar22);
			}
		}
		RECORDING::_0x208784099002BC30("RE_GI", 0);
		switch (iVar0)
		{
			case 0:
				if (func_95())
				{
					iVar23 = 0;
					iVar0 = 7;
					func_146(Var1, iVar13, &iVar18, iVar22);
				}
				if (func_109(1, Var1))
				{
					iVar23 = 0;
					iVar0 = 2;
				}
				break;
			
			case 2:
				if (func_84(3))
				{
					GlobalFunc_728(1);
					iVar0 = 4;
				}
				else
				{
					iVar0 = 6;
				}
				iVar23 = 0;
				break;
			
			case 4:
				iVar23 = 0;
				PED::ADD_SCENARIO_BLOCKING_AREA(Local_242 - Vector(10f, 30f, 30f), Local_242 + Vector(10f, 30f, 30f), 0, 1, 1, 1);
				PED::SET_PED_NON_CREATION_AREA(Local_242 - Vector(50f, 50f, 50f), Local_242 + Vector(100f, 100f, 100f));
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_242 - Vector(15f, 15f, 15f), Local_242 + Vector(15f, 15f, 15f), 0, 1);
				MISC::SET_BIT(&uVar8, 4);
				MISC::SET_BIT(&uVar8, 1);
				MISC::SET_BIT(&uVar8, 5);
				PED::ADD_RELATIONSHIP_GROUP("GangOne", &uLocal_48);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_48, 1862763509);
				iVar22 = PED::CREATE_PED(12, Var1.f_4, Var14, fVar17, 1, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar22, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var1.f_4);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar22, uLocal_48);
				PED::SET_PED_CAN_BE_TARGETTED(iVar22, 0);
				PED::SET_PED_COMPONENT_VARIATION(iVar22, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iVar22, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iVar22, 3, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iVar22, 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iVar22, 8, 1, 1, 0);
				AUDIO::SET_AMBIENT_VOICE_NAME(iVar22, "G_F_Y_Vagos_01_LATINO_MINI_02");
				if (GlobalFunc_8354() == 0)
				{
					GlobalFunc_1286(&uLocal_54, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
				}
				else if (GlobalFunc_8354() == 1)
				{
					GlobalFunc_1286(&uLocal_54, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
				}
				else if (GlobalFunc_8354() == 2)
				{
					GlobalFunc_1286(&uLocal_54, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
				}
				GlobalFunc_1286(&uLocal_54, 3, iVar22, "REGIFemale", 0, 1);
				GlobalFunc_1286(&uLocal_54, 4, iVar18[2], "REGIMale", 0, 1);
				TASK::TASK_PLAY_ANIM(iVar22, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_idle_b", 2f, -2f, -1, 49, 0, 0, 0, 0);
				if (!HUD::DOES_BLIP_EXIST(uLocal_223))
				{
				}
				iVar24 = 0;
				while (iVar24 <= (iLocal_50 - 1))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iVar18[iVar24]))
					{
						iVar18[iVar24] = PED::CREATE_PED(12, Var1[iVar24], Local_228[iVar24 /*3*/], fLocal_238[iVar24], 1, 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar18[iVar24], 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var1[iVar24]);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar18[iVar24], uLocal_48);
						PED::SET_PED_CONFIG_FLAG(iVar18[iVar24], 42, 1);
						WEAPON::GIVE_WEAPON_TO_PED(iVar18[iVar24], func_80(), -1, 1, 1);
						PED::SET_PED_COMBAT_MOVEMENT(iVar18[iVar24], 2);
						PED::SET_PED_COMBAT_RANGE(iVar18[iVar24], 0);
						PED::SET_PED_ACCURACY(iVar18[iVar24], 13);
						PED::SET_PED_MONEY(iVar18[iVar24], MISC::GET_RANDOM_INT_IN_RANGE(200, 500));
					}
					iVar24++;
				}
				WEAPON::GIVE_WEAPON_TO_PED(iVar18[0], joaat("weapon_sawnoffshotgun"), 40, 1, 1);
				uLocal_51 = PED::CREATE_SYNCHRONIZED_SCENE(1283.205f, -1622.71f, 54.299f, 0f, 0f, 103.68f, 2);
				if (!PED::IS_PED_INJURED(iVar18[0]))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(iVar18[0], uLocal_51, "random@gang_intimidation@", "001446_02_gangintimidation_2_idle_thug_b", 4f, -4f, 17, 0, 1148846080, 0);
				}
				if (!PED::IS_PED_INJURED(iVar18[1]))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(iVar18[1], uLocal_51, "random@gang_intimidation@", "001446_02_gangintimidation_2_idle_thug_c", 4f, -4f, 17, 0, 1148846080, 0);
				}
				if (!PED::IS_PED_INJURED(iVar18[2]))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(iVar18[2], uLocal_51, "random@gang_intimidation@", "001446_02_gangintimidation_2_idle_thug_d", 4f, -4f, 17, 0, 1148846080, 0);
				}
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_51, 1);
				iLocal_248 = 1;
				iVar0 = 5;
				break;
			
			case 5:
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
				PLAYER::_0xC3376F42B1FACCC6(PLAYER::PLAYER_ID());
				if (iVar7 < 3)
				{
					if ((((((((func_73(&iVar18, &uVar11, &uVar10, &uVar9, uVar8, bVar12, 1075838976, 0) || GlobalFunc_4717(iVar18[0], 0)) || GlobalFunc_4717(iVar18[1], 0)) || GlobalFunc_4717(iVar18[2], 0)) || MISC::IS_BULLET_IN_AREA(Local_228[0 /*3*/], 40f, 1)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Local_228[0 /*3*/] - Vector(25f, 25f, 25f), Local_228[0 /*3*/] + Vector(25f, 25f, 25f), joaat("weapon_smokegrenade"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Local_228[0 /*3*/] - Vector(25f, 25f, 25f), Local_228[0 /*3*/] + Vector(25f, 25f, 25f), joaat("weapon_grenade"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Local_228[0 /*3*/] - Vector(25f, 25f, 25f), Local_228[0 /*3*/] + Vector(25f, 25f, 25f), joaat("weapon_grenadelauncher"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Local_228[0 /*3*/] - Vector(25f, 25f, 25f), Local_228[0 /*3*/] + Vector(25f, 25f, 25f), joaat("weapon_stickybomb"), 1))
					{
						iVar25 = 0;
						while (iVar25 < iVar18)
						{
							if (!PED::IS_PED_INJURED(iVar18[iVar25]))
							{
								GlobalFunc_4956();
								if (!PED::IS_PED_INJURED(iVar18[iVar25]))
								{
									TASK::CLEAR_PED_TASKS(iVar18[iVar25]);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_49);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000, 2048, 2);
									TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_49);
									TASK::TASK_PERFORM_SEQUENCE(iVar18[iVar25], iLocal_49);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_49);
									PED::SET_PED_KEEP_TASK(iVar18[iVar25], 1);
								}
							}
							iVar25++;
						}
						if (!PED::IS_PED_INJURED(iVar22))
						{
							if (!PED::IS_PED_INJURED(iVar22))
							{
								TASK::CLEAR_PED_TASKS(iVar22);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_49);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000, 2048, 2);
								TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_49);
								TASK::TASK_PERFORM_SEQUENCE(iVar22, iLocal_49);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_49);
								PED::SET_PED_KEEP_TASK(iVar22, 1);
							}
						}
						iLocal_247 = 1;
					}
				}
				else
				{
					iVar26 = 0;
					while (iVar26 < iVar18)
					{
						if (!PED::IS_PED_INJURED(iVar18[iVar26]))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar18[iVar26], PLAYER::PLAYER_PED_ID(), 1))
							{
								GlobalFunc_4956();
								iVar7 = 6;
							}
						}
						else
						{
							GlobalFunc_4956();
							iVar7 = 6;
						}
						iVar26++;
					}
				}
				if (iLocal_246)
				{
					iVar0 = 6;
				}
				if (iLocal_53)
				{
					if (!GlobalFunc_111())
					{
						iVar7 = 6;
					}
				}
				if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					iVar23 = 0;
					iVar0 = 6;
					break;
				}
				if (func_68(Local_225, 150))
				{
					iVar0 = 6;
					break;
				}
				if (iVar0 != 6)
				{
					if (func_1(&iVar7, Var1, iVar22, &iVar18, &iVar23, &iVar13) || iLocal_247)
					{
						iVar0 = 6;
						break;
					}
				}
				break;
			
			case 6:
				iVar23 = 0;
				func_146(Var1, iVar13, &iVar18, iVar22);
				iVar0 = 7;
				break;
				break;
			
			case 7:
				iVar23 = 0;
				break;
		}
		if (iVar0 != 7)
		{
		}
	}
	func_146(Var1, iVar13, &iVar18, iVar22);
}

int func_1(int iParam0, struct<6> Param1, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x8FA
{
	int iVar0;
	
	if (*iParam0 >= 3)
	{
		if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_52))
		{
			if ((!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_256, 9f, 9f, 9f, 0, 1, 0) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1276.21f, -1613.05f, 53f, 9f, 9f, 9f, 0, 1, 0)) || TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()))
			{
				*iParam0 = 6;
			}
		}
	}
	switch (*iParam0)
	{
		case 0:
			if (func_54(iParam7, iParam8))
			{
				if (bLocal_255)
				{
					*iParam0 = 2;
				}
				if (!PED::IS_PED_INJURED(iParam7))
				{
					PED::SET_PED_RESET_FLAG(iParam7, 247, 1);
					if (!GlobalFunc_4717(iParam7, 0))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam7, 15f, 15f, 15f, 0, 1, 0))
						{
							if ((WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && PED::CAN_PED_SEE_HATED_PED(iParam7, PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								if ((WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam7)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam7))
								{
									TASK::CLEAR_PED_SECONDARY_TASK(iParam7);
									TASK::TASK_LOOK_AT_ENTITY(iParam7, PLAYER::PLAYER_PED_ID(), 5000, 1024, 2);
									GlobalFunc_4956();
									SYSTEM::WAIT(1000);
									GlobalFunc_10643(&uLocal_54, "REGIAU", "REGIN_ARM", 4, 0, 0, 0);
									iVar0 = 0;
									while (iVar0 < *iParam8)
									{
										if (!PED::IS_PED_INJURED((*iParam8)[iVar0]))
										{
											TASK::CLEAR_PED_SECONDARY_TASK((*iParam8)[iVar0]);
											TASK::TASK_SMART_FLEE_PED((*iParam8)[iVar0], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
											PED::SET_PED_KEEP_TASK((*iParam8)[iVar0], 1);
										}
										iVar0++;
									}
									if (!PED::IS_PED_INJURED(iParam7))
									{
										TASK::TASK_SMART_FLEE_PED(iParam7, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
										PED::SET_PED_KEEP_TASK(iParam7, 1);
									}
									iLocal_247 = 1;
								}
							}
						}
					}
					else
					{
						GlobalFunc_4935();
						if (!PED::IS_PED_INJURED(iParam7))
						{
							TASK::CLEAR_PED_TASKS(iParam7);
							TASK::TASK_SMART_FLEE_PED(iParam7, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
							PED::SET_PED_KEEP_TASK(iParam7, 1);
						}
						iLocal_247 = 1;
					}
				}
				if ((PED::IS_PED_INJURED((*iParam8)[0]) || PED::IS_PED_INJURED((*iParam8)[1])) || PED::IS_PED_INJURED((*iParam8)[2]))
				{
					func_41(iParam8, iParam7);
				}
				if (PED::IS_PED_INJURED(iParam7))
				{
					if (iLocal_254 > 2)
					{
						func_41(iParam8, iParam7);
					}
					else
					{
						*iParam0 = 9;
					}
				}
				else if (PED::IS_PED_RAGDOLL(iParam7))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam7, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_wave_loop", 3))
					{
						TASK::STOP_ANIM_TASK(iParam7, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_wave_loop", -1056964608);
					}
				}
			}
			else
			{
				*iParam0 = 9;
			}
			break;
		
		case 2:
			unk_0x6A3E157475DBFCD9(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_242, 0, 0, 255, 255);
			TASK::TASK_PAUSE(PLAYER::PLAYER_PED_ID(), 1000);
			Local_256 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (!PED::IS_PED_INJURED((*iParam8)[1]))
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_219[1]))
				{
				}
				AUDIO::TRIGGER_MUSIC_EVENT("RE28_OS");
				uLocal_52 = PED::CREATE_SYNCHRONIZED_SCENE(1283.205f, -1622.71f, 54.299f, 0f, 0f, 103.68f, 2);
				if (!PED::IS_PED_INJURED((*iParam8)[0]))
				{
					TASK::TASK_SYNCHRONIZED_SCENE((*iParam8)[0], uLocal_52, "random@gang_intimidation@", "001446_02_gangintimidation_2_thug_b", 4f, -4f, 17, 0, 1148846080, 0);
				}
				if (!PED::IS_PED_INJURED((*iParam8)[1]))
				{
					TASK::TASK_SYNCHRONIZED_SCENE((*iParam8)[1], uLocal_52, "random@gang_intimidation@", "001446_02_gangintimidation_2_thug_c", 4f, -4f, 16, 0, 1148846080, 0);
				}
				if (!PED::IS_PED_INJURED((*iParam8)[2]))
				{
					TASK::TASK_SYNCHRONIZED_SCENE((*iParam8)[2], uLocal_52, "random@gang_intimidation@", "001446_02_gangintimidation_2_thug_d", 4f, -4f, 17, 0, 1148846080, 0);
				}
				*iParam0 = 3;
			}
			break;
		
		case 3:
			*iParam9 = 0;
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_52))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_52) > 0.3f)
				{
					if (!PED::IS_PED_INJURED((*iParam8)[0]))
					{
						PED::SET_PED_RESET_FLAG((*iParam8)[0], 156, 1);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_49);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Vector(0f, 0f, 1f), PLAYER::PLAYER_PED_ID(), 2f, 0, 3.5f, 5f, 1, 0, 0, -957453492, 20000);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 25000, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_49);
						TASK::TASK_PERFORM_SEQUENCE((*iParam8)[0], iLocal_49);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_49);
						iLocal_49 = 0;
					}
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_52) > 0.35f)
				{
					if (!PED::IS_PED_INJURED((*iParam8)[1]))
					{
						PED::SET_PED_RESET_FLAG((*iParam8)[1], 156, 1);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_49);
						TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 2f, 0, 5f, 1082130432, 1, 0, -957453492);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 25000, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_49);
						TASK::TASK_PERFORM_SEQUENCE((*iParam8)[1], iLocal_49);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_49);
						iLocal_49 = 0;
					}
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_52) > 0.275f)
				{
					if (!PED::IS_PED_INJURED((*iParam8)[2]))
					{
						PED::SET_PED_RESET_FLAG((*iParam8)[2], 156, 1);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_49);
						TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 2f, 0, 3.5f, 1082130432, 1, 0, -957453492);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 25000, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_49);
						TASK::TASK_PERFORM_SEQUENCE((*iParam8)[2], iLocal_49);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_49);
						iLocal_49 = 0;
					}
				}
			}
			if (!PED::IS_PED_INJURED((*iParam8)[2]))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY((*iParam8)[2], PLAYER::PLAYER_PED_ID(), 4f, 4f, 2f, 0, 1, 0))
				{
					GlobalFunc_4720(uLocal_223);
					GlobalFunc_4720(uLocal_224);
					func_36(iParam8);
					if (!PED::IS_PED_INJURED((*iParam8)[0]))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_49);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Vector(0f, 0f, 1f), PLAYER::PLAYER_PED_ID(), 2f, 0, 3.5f, 5f, 1, 0, 0, -957453492, 20000);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 25000, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_49);
						TASK::TASK_PERFORM_SEQUENCE((*iParam8)[0], iLocal_49);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_49);
						iLocal_49 = 0;
					}
					if (!PED::IS_PED_INJURED((*iParam8)[1]))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_49);
						TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 2f, 0, 5f, 1082130432, 1, 0, -957453492);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 25000, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_49);
						TASK::TASK_PERFORM_SEQUENCE((*iParam8)[1], iLocal_49);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_49);
						iLocal_49 = 0;
					}
					if (!PED::IS_PED_INJURED((*iParam8)[2]))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_49);
						TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 2f, 0, 3.5f, 1082130432, 1, 0, -957453492);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 25000, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_49);
						TASK::TASK_PERFORM_SEQUENCE((*iParam8)[2], iLocal_49);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_49);
						iLocal_49 = 0;
					}
					iLocal_250 = MISC::GET_GAME_TIMER();
					*iParam0 = 4;
				}
			}
			break;
		
		case 4:
			if (func_34(Param1, (*iParam8)[2], iParam8))
			{
				GlobalFunc_4720(uLocal_219[2]);
			}
			else if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				*iParam0 = 6;
			}
			break;
		
		case 6:
			if (!iLocal_249)
			{
				GlobalFunc_4956();
				SYSTEM::WAIT(0);
				GlobalFunc_10643(&uLocal_54, "REGIAU", "REGIN_WARN2", 4, 0, 0, 0);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.5f);
				func_36(iParam8);
				func_41(iParam8, iParam7);
				GlobalFunc_4720(uLocal_224);
				GlobalFunc_4720(uLocal_223);
				iLocal_249 = 1;
			}
			func_33(iParam8);
			func_32(iParam8);
			if (func_31(iParam8))
			{
				*iParam10 = 1;
				if (!PED::IS_PED_INJURED(iParam7))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam7, 8f, 8f, 8f, 0, 1, 0))
					{
						GlobalFunc_10643(&uLocal_54, "REGIAU", "REGIN_SORRY", 4, 0, 0, 0);
					}
				}
				if (!HUD::DOES_BLIP_EXIST(uLocal_224))
				{
				}
				while (GlobalFunc_111())
				{
					SYSTEM::WAIT(0);
				}
				while (!GlobalFunc_82())
				{
					SYSTEM::WAIT(0);
				}
				func_5(-1, 0);
				GlobalFunc_7068();
				return 1;
				*iParam0 = 9;
			}
			break;
		
		case 8:
			break;
		
		case 9:
			return 1;
			break;
	}
	return 0;
}




void func_5(int iParam0, int iParam1)//Position - 0x1117
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
			GlobalFunc_8276(GlobalFunc_4703(iParam0, iParam1), Local_45.x, Local_45.f_1);
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


























int func_31(var uParam0)//Position - 0x2665
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]))
		{
			if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_32(var uParam0)//Position - 0x26A3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (PED::IS_PED_INJURED((*uParam0)[iVar0]))
		{
			GlobalFunc_4720(uLocal_219[iVar0]);
		}
		iVar0++;
	}
}

void func_33(var uParam0)//Position - 0x26D8
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (iLocal_253 == 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_50 - 1))
		{
			if (!PED::IS_PED_INJURED((*uParam0)[iVar2]))
			{
				iVar0++;
				iVar1 = iVar2;
			}
			iVar2++;
		}
		if (iVar0 == 1)
		{
			if (!PED::IS_PED_INJURED((*uParam0)[iVar1]))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES((*uParam0)[iVar1], 0, 1);
				PED::SET_PED_COMBAT_RANGE((*uParam0)[iVar1], 0);
				iLocal_253 = 1;
			}
		}
	}
}

int func_34(struct<6> Param0, int iParam6, var uParam7)//Position - 0x2744
{
	switch (iLocal_251)
	{
		case 0:
			if (GlobalFunc_2521(iLocal_250, 0))
			{
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_8354() == 0)
					{
						GlobalFunc_10643(&uLocal_54, "REGIAU", "REGIN_MONEYM", 4, 0, 0, 0);
						iLocal_251 = 1;
					}
					else if (GlobalFunc_8354() == 1)
					{
						GlobalFunc_10643(&uLocal_54, "REGIAU", "REGIN_MONEYF", 4, 0, 0, 0);
						iLocal_251 = 1;
					}
					else if (GlobalFunc_8354() == 2)
					{
						GlobalFunc_10643(&uLocal_54, "REGIAU", "REGIN_MONEYT", 4, 0, 0, 0);
						iLocal_251 = 1;
					}
				}
				iLocal_49 = 0;
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iParam6))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam6, 242628503) == 7 || ENTITY::IS_ENTITY_AT_ENTITY(iParam6, PLAYER::PLAYER_PED_ID(), 8f, 8f, 8f, 0, 1, 0))
				{
					if (!GlobalFunc_111())
					{
						GlobalFunc_10643(&uLocal_54, "REGIAU", "REGIN_KILL", 4, 0, 0, 0);
						SYSTEM::SETTIMERA(0);
						iLocal_53 = 1;
						iLocal_251 = 4;
					}
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED((*uParam7)[2]))
			{
				if (!PED::IS_PED_INJURED((*uParam7)[0]))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_49);
					TASK::TASK_STAND_STILL(0, 700);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_228[0 /*3*/], 1f, -1, 0.25f, 0, 40000f);
					TASK::TASK_ACHIEVE_HEADING(0, fLocal_238[0], 0);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, Param0.f_5, "sit_down_idle_01", Local_228[0 /*3*/], 0f, 0f, fLocal_238[0], 1000f, -4f, -1, 1, 0, 2, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_49);
					TASK::TASK_PERFORM_SEQUENCE((*uParam7)[0], iLocal_49);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_49);
					iLocal_49 = 0;
				}
				if (!PED::IS_PED_INJURED((*uParam7)[1]))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_49);
					TASK::TASK_STAND_STILL(0, 200);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_228[1 /*3*/], 1f, -1, 0.25f, 0, 40000f);
					TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_49);
					TASK::TASK_PERFORM_SEQUENCE((*uParam7)[1], iLocal_49);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_49);
					iLocal_49 = 0;
				}
				if (!PED::IS_PED_INJURED((*uParam7)[2]))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_49);
					TASK::TASK_STAND_STILL(0, 1000);
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, (*uParam7)[0], 0f, -0.5f, 0f, 1f, 10000, 1036831949, 1);
					TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_49);
					TASK::TASK_PERFORM_SEQUENCE((*uParam7)[2], iLocal_49);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_49);
					iLocal_49 = 0;
				}
			}
			iLocal_251 = 3;
			break;
		
		case 3:
			if (!GlobalFunc_111())
			{
				if (GlobalFunc_8354() == 0)
				{
					GlobalFunc_10643(&uLocal_54, "REGIAU", "REGIN_REALM", 4, 0, 0, 0);
				}
				else if (GlobalFunc_8354() == 1)
				{
					GlobalFunc_10643(&uLocal_54, "REGIAU", "REGIN_REALF", 4, 0, 0, 0);
				}
				else if (GlobalFunc_8354() == 2)
				{
					GlobalFunc_10643(&uLocal_54, "REGIAU", "REGIN_REALT", 4, 0, 0, 0);
				}
				iLocal_251 = 4;
			}
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}


void func_36(var uParam0)//Position - 0x2A25
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (!HUD::DOES_BLIP_EXIST(uLocal_219[iVar0]))
		{
			if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
			{
				uLocal_219[iVar0] = GlobalFunc_7502((*uParam0)[iVar0], 1, 145);
				ENTITY::SET_ENTITY_IS_TARGET_PRIORITY((*uParam0)[iVar0], 1, 0);
			}
		}
		iVar0++;
	}
}





void func_41(var uParam0, int iParam1)//Position - 0x2BA2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
		{
			TASK::TASK_COMBAT_PED((*uParam0)[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
			PED::SET_PED_COMBAT_ATTRIBUTES((*uParam0)[iVar0], 0, 1);
			PED::SET_PED_KEEP_TASK((*uParam0)[iVar0], 1);
		}
		iVar0++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		TASK::CLEAR_PED_SECONDARY_TASK(iParam1);
		TASK::TASK_COWER(iParam1, -1);
		PED::SET_PED_KEEP_TASK(iParam1, 1);
	}
}













int func_54(int iParam0, var uParam1)//Position - 0x32A6
{
	switch (iLocal_254)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1272.878f, -1532.84f, 36.4104f, 1339.482f, -1623.636f, 71.4792f, 105.1875f, 0, 1, 0) && !ENTITY::IS_ENTITY_OCCLUDED(iParam0)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, 15f, 15f, 15f, 0, 1, 0))
				{
					if (!GlobalFunc_6827())
					{
						GlobalFunc_9034(1);
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_223))
					{
						GlobalFunc_4720(uLocal_223);
					}
					if (!HUD::DOES_BLIP_EXIST(uLocal_224))
					{
						uLocal_224 = GlobalFunc_7502(iParam0, 0, 145);
						HUD::SHOW_HEIGHT_ON_BLIP(uLocal_224, 0);
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) < 5f)
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, 10f, 10f, 10f, 0, 1, 0))
								{
									TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_49);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 20000, 1024, 2);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_49);
									TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_49);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_49);
									if (HUD::DOES_BLIP_EXIST(uLocal_224))
									{
										HUD::SHOW_HEIGHT_ON_BLIP(uLocal_224, 1);
									}
									WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
									if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 45f))
									{
										GlobalFunc_4935();
										SYSTEM::WAIT(0);
										GlobalFunc_10643(&uLocal_54, "REGIAU", "REGIN_LR1F", 4, 0, 0, 0);
										iLocal_254 = 1;
									}
								}
							}
							else if (iLocal_245 == 0)
							{
								GlobalFunc_10643(&uLocal_54, "REGIAU", "REGIN_CAR", 4, 0, 0, 0);
								if (!PED::IS_PED_INJURED(iParam0))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_49);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 20000, 1024, 2);
									TASK::TASK_PLAY_ANIM(0, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_wave_loop", 2f, -2f, -1, 49, 0, 0, 0, 0);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_49);
									TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_49);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_49);
								}
								iLocal_245 = 1;
							}
						}
						else
						{
							GlobalFunc_4935();
							SYSTEM::WAIT(0);
							GlobalFunc_10643(&uLocal_54, "REGIAU", "REGIN_POLICE", 4, 0, 0, 0);
							if (!PED::IS_PED_INJURED(iParam0))
							{
								TASK::CLEAR_PED_TASKS(iParam0);
								TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
								PED::SET_PED_KEEP_TASK(iParam0, 1);
								iLocal_246 = 1;
							}
						}
					}
					else if (!PED::IS_PED_INJURED(iParam0))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, 8f, 8f, 8f, 0, 1, 0))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_49);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
							TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 20000, 1024, 2);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_49);
							TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_49);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_49);
							if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 45f))
							{
								GlobalFunc_4935();
								SYSTEM::WAIT(0);
								GlobalFunc_10643(&uLocal_54, "REGIAU", "REGIN_LR1F", 4, 0, 0, 0);
								iLocal_254 = 1;
							}
						}
					}
				}
			}
			if (!PED::IS_PED_INJURED((*uParam1)[2]))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1273.098f, -1604.172f, 53.1535f, 1276.568f, -1615.127f, 56.7879f, 10f, 0, 1, 0) && !func_57())
				{
					iLocal_254 = 3;
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1298.546f, -1617.742f, 53.2254f, 1262.868f, -1629.36f, 64.2894f, 30.4375f, 0, 1, 0))
				{
					func_56(iParam0, uParam1);
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED((*uParam1)[2]))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1273.098f, -1604.172f, 53.1535f, 1276.568f, -1615.127f, 56.7879f, 10f, 0, 1, 0) && !func_57())
				{
					iLocal_254 = 3;
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1298.546f, -1617.742f, 53.2254f, 1262.868f, -1629.36f, 64.2894f, 30.4375f, 0, 1, 0))
				{
					func_56(iParam0, uParam1);
				}
			}
			if (!PED::IS_PED_INJURED(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				MISC::CLEAR_AREA_OF_VEHICLES(Local_242, 13f, 0, 0, 0, 0, 0);
				TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
				if (!PED::IS_PED_INJURED(iParam0))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_49);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_242, 2f, 20000, 0.25f, 0, 32.2195f);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 1024, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_49);
					TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_49);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_49);
					iLocal_49 = 0;
					if ((WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, 6f, 6f, 6f, 0, 1, 0)) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
					}
				}
				iLocal_254 = 2;
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iParam0) && !GlobalFunc_111())
			{
				if (GlobalFunc_10643(&uLocal_54, "REGIAU", "REGIN_LR1G", 4, 0, 0, 0))
				{
					SYSTEM::SETTIMERA(0);
					iLocal_254 = 3;
				}
			}
			break;
		
		case 3:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1273.098f, -1604.172f, 53.1535f, 1276.568f, -1615.127f, 56.7879f, 10f, 0, 1, 0) && !func_57())
			{
				func_55(iParam0);
				iLocal_254 = 4;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1298.546f, -1617.742f, 53.2254f, 1262.868f, -1629.36f, 64.2894f, 30.4375f, 0, 1, 0))
			{
				func_56(iParam0, uParam1);
			}
			else if (!PED::IS_PED_INJURED(iParam0))
			{
				if (SYSTEM::TIMERA() > 8000 && ENTITY::IS_ENTITY_AT_COORD(iParam0, Local_242, 3f, 3f, 3f, 0, 1, 0))
				{
					if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 60f))
					{
						if (GlobalFunc_745())
						{
							TASK::TASK_PLAY_ANIM(iParam0, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_idle_a", 2f, -2f, -1, 48, 0, 0, 0, 0);
						}
						else
						{
							TASK::TASK_PLAY_ANIM(iParam0, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_idle_b", 2f, -2f, -1, 0, 0, 0, 0, 0);
						}
						GlobalFunc_10643(&uLocal_54, "REGIAU", "REGIN_HERE", 4, 0, 0, 0);
						SYSTEM::SETTIMERA(0);
					}
				}
				if ((WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && PED::CAN_PED_SEE_HATED_PED(iParam0, PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
					{
						func_56(iParam0, uParam1);
					}
				}
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(iParam0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_49);
				TASK::TASK_STAND_STILL(0, 500);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_242, 2f, 20000, 0.25f, 0, 40000f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_49);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_49);
				iLocal_49 = 0;
			}
			GlobalFunc_4956();
			SYSTEM::WAIT(0);
			if (!GlobalFunc_111())
			{
				GlobalFunc_10643(&uLocal_54, "REGIAU", "REGIN_THRT", 4, 0, 0, 0);
				iLocal_254 = 5;
			}
			break;
		
		case 5:
			func_36(uParam1);
			GlobalFunc_4720(uLocal_224);
			bLocal_255 = true;
			return 1;
			break;
	}
	return 1;
}

void func_55(int iParam0)//Position - 0x3987
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		TASK::CLEAR_PED_TASKS(iParam0);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_49);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1286.037f, -1623.207f, 53.2297f, 2f, -1, 0.25f, 0, 40000f);
		TASK::TASK_COWER(0, -1);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_49);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_49);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_49);
		iLocal_49 = 0;
		PED::SET_PED_CAN_BE_TARGETTED(iParam0, 1);
		GlobalFunc_4720(uLocal_224);
	}
}

void func_56(int iParam0, var uParam1)//Position - 0x39F0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!PED::IS_PED_INJURED((*uParam1)[iVar0]) && !PED::IS_PED_INJURED(iParam0))
		{
			if ((PED::CAN_PED_SEE_HATED_PED((*uParam1)[iVar0], PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), (*uParam1)[iVar0])) || PED::CAN_PED_SEE_HATED_PED(iParam0, PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_4956();
				if (!PED::IS_PED_INJURED((*uParam1)[iVar0]))
				{
					TASK::CLEAR_PED_TASKS((*uParam1)[iVar0]);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_49);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000, 2048, 2);
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_49);
					TASK::TASK_PERFORM_SEQUENCE((*uParam1)[iVar0], iLocal_49);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_49);
					PED::SET_PED_KEEP_TASK((*uParam1)[iVar0], 1);
				}
				if (!PED::IS_PED_INJURED(iParam0))
				{
					TASK::CLEAR_PED_TASKS(iParam0);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_49);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000, 2048, 2);
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_49);
					TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_49);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_49);
					PED::SET_PED_KEEP_TASK(iParam0, 1);
				}
				iLocal_247 = 1;
			}
		}
		else
		{
			GlobalFunc_4956();
			if (!PED::IS_PED_INJURED((*uParam1)[iVar0]))
			{
				TASK::CLEAR_PED_TASKS((*uParam1)[iVar0]);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_49);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000, 2048, 2);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_49);
				TASK::TASK_PERFORM_SEQUENCE((*uParam1)[iVar0], iLocal_49);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_49);
				PED::SET_PED_KEEP_TASK((*uParam1)[iVar0], 1);
			}
			if (!PED::IS_PED_INJURED(iParam0))
			{
				TASK::CLEAR_PED_TASKS(iParam0);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_49);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000, 2048, 2);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_49);
				TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_49);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_49);
				PED::SET_PED_KEEP_TASK(iParam0, 1);
			}
			iLocal_247 = 1;
		}
		iVar0++;
	}
}

int func_57()//Position - 0x3BD4
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
		{
			if (PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("rhino")))
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	return 0;
}











int func_68(struct<3> Param0, int iParam3)//Position - 0x41E6
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Param0) > IntToFloat(iParam3))
		{
			return 1;
		}
	}
	return 0;
}





int func_73(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, float fParam6, int iParam7)//Position - 0x42B7
{
	int iVar0;
	
	fParam6 = fParam6;
	if (!bParam5)
	{
		iVar0 = 0;
		while (iVar0 < *uParam0)
		{
			if (func_74((*uParam0)[iVar0], uParam2, uParam3, uParam4, bParam5, fParam6, iParam7))
			{
				*uParam1 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_74(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, float fParam5, int iParam6)//Position - 0x4300
{
	float fVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	bVar2 = false;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0) && !bParam4)
	{
		if (PED::IS_PED_ON_FOOT(iParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !bParam4)
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			Var6 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			fVar9 = SYSTEM::VDIST(Var3, Var6);
			if (!MISC::IS_BIT_SET(uParam3, 3))
			{
				if (GlobalFunc_4717(iParam0, iParam6))
				{
					GlobalFunc_6524("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					GlobalFunc_6524("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					GlobalFunc_4718(iParam0);
					return 1;
				}
			}
			if (!MISC::IS_BIT_SET(uParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (MISC::IS_BULLET_IN_AREA(Var6, fParam5, 1))
				{
					GlobalFunc_6524("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					GlobalFunc_6524("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					GlobalFunc_4718(iParam0);
					return 1;
				}
				if (MISC::IS_PROJECTILE_IN_AREA(Var6 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), Var6 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), 0))
				{
					GlobalFunc_6524("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					GlobalFunc_6524("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					GlobalFunc_4718(iParam0);
					return 1;
				}
			}
			if (!MISC::IS_BIT_SET(uParam3, 2))
			{
				fVar0 = WEAPON::GET_LOCKON_DISTANCE_OF_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0))
					{
						if (fVar9 < fVar0)
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 17))
							{
								GlobalFunc_6524("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								GlobalFunc_6524("	aggro Ped knows player is pointing gun\n");
								GlobalFunc_6570("		lockOnTimer = ", *uParam2);
								GlobalFunc_6524("\n");
								GlobalFunc_6570("		time since not LockedOn = ", (MISC::GET_GAME_TIMER() - iLocal_44));
								GlobalFunc_6524("\n");
								bVar2 = true;
								if (MISC::GET_GAME_TIMER() > (iLocal_44 + *uParam2))
								{
									GlobalFunc_6524("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									GlobalFunc_4718(iParam0);
									return 1;
								}
							}
						}
						else
						{
							bVar2 = false;
						}
					}
					else
					{
						bVar2 = false;
					}
				}
			}
			if (!MISC::IS_BIT_SET(uParam3, 0))
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					GlobalFunc_6524("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					GlobalFunc_6524("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					GlobalFunc_4718(iParam0);
					return 1;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_44 = MISC::GET_GAME_TIMER();
	}
	return 0;
}






int func_80()//Position - 0x45AC
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	if (iVar0 == 0)
	{
		return joaat("weapon_combatpistol");
	}
	else if (iVar0 == 1)
	{
		return joaat("weapon_combatpistol");
	}
	else if (iVar0 == 2)
	{
		return joaat("weapon_pistol");
	}
	else if (iVar0 == 3)
	{
		return joaat("weapon_pistol");
	}
	else
	{
		return joaat("weapon_pistol");
	}
	return joaat("weapon_pistol");
}




int func_84(int iParam0)//Position - 0x46CE
{
	if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
	{
		if (GlobalFunc_10581(iParam0))
		{
			return 1;
		}
	}
	return 0;
}











int func_95()//Position - 0x4F3C
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_45) < (75f * 75f))
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
	if (GlobalFunc_9560(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}














int func_109(int iParam0, struct<5> Param1, var uParam6)//Position - 0x6C41
{
	int iVar0;
	
	if (iParam0 == 1)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_50 - 1))
		{
			STREAMING::REQUEST_MODEL(Param1[iVar0]);
			iVar0++;
		}
		STREAMING::REQUEST_MODEL(Param1.f_4);
		STREAMING::REQUEST_ANIM_DICT("random@gang_intimidation@");
		AUDIO::PREPARE_MUSIC_EVENT("RE28_OS");
		if (!STREAMING::HAS_MODEL_LOADED(Param1.f_4))
		{
			return 0;
		}
		iVar0 = 0;
		while (iVar0 <= (iLocal_50 - 1))
		{
			if (!STREAMING::HAS_MODEL_LOADED(Param1[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		if (STREAMING::HAS_ANIM_DICT_LOADED("random@gang_intimidation@"))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_50 - 1))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Param1[iVar0]);
			iVar0++;
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Param1.f_4);
	}
	return 0;
}




int func_113(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x6D77
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
	Local_45 = { Param0 };
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
		if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
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
			if ((Var1.f_2 - Local_45.f_2) > 50f)
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

































void func_146(struct<6> Param0, int iParam6, int iParam7, int iParam8)//Position - 0x7BB9
{
	int iVar0;
	
	if (iParam6 == 0)
	{
	}
	if (iLocal_248)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_242 - Vector(10f, 10f, 10f), Local_242 + Vector(10f, 10f, 10f), 1, 1);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		GlobalFunc_4720(uLocal_219[0]);
		GlobalFunc_4720(uLocal_219[1]);
		GlobalFunc_4720(uLocal_219[2]);
		iVar0 = 0;
		while (iVar0 <= (iLocal_50 - 1))
		{
			if (!PED::IS_PED_INJURED((*iParam7)[iVar0]))
			{
			}
			iVar0++;
		}
		if (!PED::IS_PED_INJURED(iParam8))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam8, 0);
		}
		GlobalFunc_728(0);
		func_109(0, Param0);
	}
	GlobalFunc_10823(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}













