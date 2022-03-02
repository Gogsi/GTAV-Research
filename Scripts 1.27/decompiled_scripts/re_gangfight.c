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
	int iLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	bool bLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_67 = 0;
	int iLocal_68[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_75 = 0;
	int iLocal_76[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_83 = 0;
	var uLocal_84 = 16;
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
	int iVar1;
	int iVar2;
	
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
	Local_49 = { ScriptParam_0.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_140();
	}
	if (func_98(Local_49, -1, 0, 0, 0))
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
		GlobalFunc_587();
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			if (iLocal_58 > MISC::GET_GAME_TIMER())
			{
				RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
			}
			if (!GlobalFunc_6827())
			{
				if (!GlobalFunc_6827())
				{
					if (GlobalFunc_10589())
					{
						func_140();
					}
				}
				RECORDING::_0x208784099002BC30("RE_CGF", 0);
				switch (iLocal_45)
				{
					case 0:
						if (func_80())
						{
							func_140();
						}
						if (func_79())
						{
							iLocal_52 = 1;
							iLocal_45 = 1;
						}
						break;
					
					case 1:
						func_78();
						if (!func_77() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
						{
							if ((!PED::IS_PED_INJURED(uLocal_67) && !PED::IS_PED_INJURED(iLocal_68[0])) && !PED::IS_PED_INJURED(iLocal_68[1]))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 969.2191f, 3608.665f, 41.8758f, 100f, 80f, 20f, 0, 1, 0))
								{
									uLocal_59 = GlobalFunc_7502(uLocal_67, 0, 145);
									HUD::SET_BLIP_PRIORITY(uLocal_59, 9);
									uLocal_60[0] = GlobalFunc_7502(iLocal_68[0], 1, 145);
									uLocal_60[1] = GlobalFunc_7502(iLocal_68[1], 1, 145);
									HUD::SHOW_HEIGHT_ON_BLIP(uLocal_59, 0);
									HUD::SHOW_HEIGHT_ON_BLIP(uLocal_60[0], 0);
									HUD::SHOW_HEIGHT_ON_BLIP(uLocal_60[1], 0);
									GlobalFunc_9034(1);
								}
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < iLocal_68)
							{
								if (!PED::IS_PED_INJURED(iLocal_68[iVar0]))
								{
									TASK::TASK_SMART_FLEE_PED(iLocal_68[iVar0], PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
								}
								iVar0++;
							}
							if (!PED::IS_PED_INJURED(uLocal_67))
							{
								TASK::TASK_SMART_FLEE_PED(uLocal_67, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
							}
							func_63();
						}
						break;
				}
			}
			else
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
				if (!PED::IS_PED_INJURED(uLocal_67))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_67, PLAYER::PLAYER_PED_ID(), 1))
					{
						TASK::TASK_SMART_FLEE_PED(uLocal_67, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
						func_63();
					}
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_67, 150f, 150f, 50f, 0, 1, 0))
					{
						if (iLocal_47 >= 5 && iLocal_46 == 2)
						{
						}
						else
						{
							func_78();
							func_62();
						}
						switch (iLocal_46)
						{
							case 0:
								func_61();
								if (func_77())
								{
									bLocal_54 = true;
									iLocal_47 = 4;
								}
								break;
							
							case 1:
								if (iLocal_47 < 7 && !PED::IS_PED_INJURED(uLocal_67))
								{
									if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_67, 90f))
									{
										if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), uLocal_67) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), uLocal_67))
										{
											func_58();
										}
									}
								}
								func_53();
								break;
							
							case 2:
								func_9();
								break;
							
							case 3:
								func_1();
								break;
						}
					}
					else
					{
						func_63();
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_59))
					{
						HUD::REMOVE_BLIP(&uLocal_59);
					}
					if (((!PED::IS_PED_INJURED(iLocal_68[0]) && !PED::IS_PED_INJURED(iLocal_68[1])) && !ENTITY::IS_ENTITY_DEAD(iLocal_76[0])) && !ENTITY::IS_ENTITY_DEAD(iLocal_76[1]))
					{
						func_63();
					}
					iVar1 = 0;
					iVar2 = 0;
					while (iVar2 < iLocal_68)
					{
						if (!PED::IS_PED_INJURED(iLocal_68[iVar2]))
						{
							TASK::TASK_COMBAT_PED(iLocal_68[iVar2], PLAYER::PLAYER_PED_ID(), 0, 16);
							PED::SET_PED_KEEP_TASK(iLocal_68[iVar2], 1);
							if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_68[iVar2], 150f, 150f, 50f, 0, 1, 0))
							{
								func_63();
							}
							iVar1 = 1;
						}
						else if (HUD::DOES_BLIP_EXIST(uLocal_60[iVar2]))
						{
							HUD::REMOVE_BLIP(&(uLocal_60[iVar2]));
						}
						iVar2++;
					}
					if (iVar1 == 0)
					{
						func_63();
					}
				}
			}
		}
		else
		{
			func_140();
		}
	}
}

void func_1()//Position - 0x42C
{
	int iVar0;
	
	if (iLocal_52 && !iLocal_57)
	{
		if (!GlobalFunc_5672("RECGF_SHOOT"))
		{
			GlobalFunc_4956();
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_59))
		{
			HUD::REMOVE_BLIP(&uLocal_59);
		}
		if (!PED::IS_PED_INJURED(uLocal_67))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uLocal_67, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_67, 0);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_68)
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_60[iVar0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_60[iVar0]));
			}
			if (!PED::IS_PED_INJURED(iLocal_68[iVar0]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (iVar0 < 2)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_76[iVar0]))
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_68[iVar0], iLocal_76[iVar0], PLAYER::PLAYER_PED_ID(), 8, 20f, 786469, 150f, 10f, 1);
						PED::SET_PED_KEEP_TASK(iLocal_68[iVar0], 1);
					}
					else
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_68[iVar0], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					}
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_68[iVar0], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_68[iVar0], 0);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_76)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_76[iVar0]))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_76[iVar0]));
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_COUNTRYSIDE_GANG_FIGHT_SCENE"))
				{
				}
			}
			iVar0++;
		}
		AUDIO::STOP_AUDIO_SCENE("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(417.901f, 3578.002f, 31.176f, 1305.897f, 3604.306f, 40.1064f, 100.0625f, 1);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		MISC::ENABLE_DISPATCH_SERVICE(3, 1);
		MISC::ENABLE_DISPATCH_SERVICE(5, 1);
		GlobalFunc_200(&uLocal_84, 1);
		GlobalFunc_200(&uLocal_84, 2);
		GlobalFunc_200(&uLocal_84, 3);
		GlobalFunc_200(&uLocal_84, 4);
		iLocal_57 = 1;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(GlobalFunc_80(PLAYER::PLAYER_ID()), Local_49, 1) > 50f)
	{
		func_140();
	}
}








void func_9()//Position - 0x6C8
{
	int iVar0;
	int iVar1;
	
	switch (iLocal_47)
	{
		case 0:
			if (SYSTEM::TIMERB() > 2000)
			{
				iVar0 = 0;
				while (iVar0 < iLocal_68)
				{
					if (!PED::IS_PED_INJURED(iLocal_68[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_76[iVar0]))
					{
						if (!HUD::DOES_BLIP_EXIST(uLocal_60[iVar0]))
						{
							uLocal_60[iVar0] = GlobalFunc_7502(iLocal_68[iVar0], 1, 145);
							if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_68[iVar0], 0))
							{
								if (!bLocal_54)
								{
									TASK::TASK_DRIVE_BY(iLocal_68[iVar0], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 150f, 100, 1, -753768974);
								}
								else
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_83);
									TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_83);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_68[iVar0], uLocal_83);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_83);
									PED::SET_PED_KEEP_TASK(iLocal_68[iVar0], 1);
								}
							}
						}
					}
					iVar0++;
				}
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_10643(&uLocal_84, "RECGFAU", "RECGF_BIKERS", 4, 0, 0, 0))
					{
						iLocal_47++;
					}
				}
			}
			break;
		
		case 1:
			iVar1 = 0;
			while (iVar1 < iLocal_68)
			{
				if (!PED::IS_PED_INJURED(iLocal_68[iVar1]))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_68[iVar1], 904.3153f, 3631.684f, 31.574f, 7f, 7f, 7f, 0, 1, 0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_76[iVar1]))
						{
							AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_76[iVar1], 0);
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_68[iVar1], 0))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_83);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_83);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_68[iVar1], uLocal_83);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_83);
							PED::SET_PED_KEEP_TASK(iLocal_68[iVar1], 1);
						}
					}
					if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_68[iVar1], 0))
					{
						TASK::TASK_COMBAT_PED(iLocal_68[iVar1], PLAYER::PLAYER_PED_ID(), 0, 16);
						PED::SET_PED_KEEP_TASK(iLocal_68[iVar1], 1);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_76[iVar1]))
					{
						if (VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(iLocal_76[iVar1]))
						{
						}
					}
				}
				if (PED::IS_PED_INJURED(iLocal_68[iVar1]))
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_60[iVar1]))
					{
						HUD::REMOVE_BLIP(&(uLocal_60[iVar1]));
					}
				}
				iVar1++;
			}
			if (((PED::IS_PED_INJURED(iLocal_68[2]) && PED::IS_PED_INJURED(iLocal_68[3])) && PED::IS_PED_INJURED(iLocal_68[4])) && PED::IS_PED_INJURED(iLocal_68[5]))
			{
				AUDIO::STOP_AUDIO_SCENE("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
				iLocal_47++;
			}
			break;
		
		case 2:
			func_40(1500);
			if (!PED::IS_PED_INJURED(uLocal_67))
			{
				TASK::CLEAR_PED_TASKS(uLocal_67);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_83);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2056, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_83);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_67, uLocal_83);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_83);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_75))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uLocal_75);
				if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_67, 5f, 5f, 5f, 0, 1, 0))
				{
					GlobalFunc_10643(&uLocal_84, "RECGFAU", "RECGF_REWARD", 4, 0, 0, 0);
				}
			}
			iLocal_47++;
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(uLocal_67))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_67, 6f, 6f, 6f, 0, 1, 0))
				{
					if (PED::IS_PED_FACING_PED(uLocal_67, PLAYER::PLAYER_PED_ID(), 60f))
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10643(&uLocal_84, "RECGFAU", "RECGF_END", 4, 0, 0, 0))
							{
								iLocal_47++;
							}
						}
					}
				}
			}
			if (!PED::IS_PED_INJURED(uLocal_67))
			{
				if (!ENTITY::IS_ENTITY_AT_ENTITY(uLocal_67, PLAYER::PLAYER_PED_ID(), 120f, 120f, 120f, 0, 1, 0))
				{
					func_10();
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_75))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_75, PLAYER::PLAYER_PED_ID(), 0))
				{
					func_63();
				}
			}
			break;
		
		case 4:
			iLocal_47++;
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(uLocal_67) && !ENTITY::IS_ENTITY_DEAD(uLocal_75))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_83);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1500);
				TASK::TASK_ENTER_VEHICLE(0, uLocal_75, -1, -1, 2f, 8, 0);
				TASK::TASK_PAUSE(0, 2000);
				TASK::TASK_PLAY_ANIM(0, "veh@drivebystd_ds_grenades", "drop_grenade", 2f, -2f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_VEHICLE_DRIVE_WANDER(0, uLocal_75, 10f, 786603);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_83);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_67, uLocal_83);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_83);
				PED::SET_PED_KEEP_TASK(uLocal_67, 1);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(uLocal_75, 1);
				iLocal_47++;
			}
			break;
		
		case 6:
			if (!PED::IS_PED_INJURED(uLocal_67))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_67, "veh@drivebystd_ds_grenades", "drop_grenade", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_67, "veh@drivebystd_ds_grenades", "drop_grenade") > 0.436f && PED::IS_PED_IN_ANY_VEHICLE(uLocal_67, 0))
					{
						OBJECT::CREATE_MONEY_PICKUPS(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PED::GET_VEHICLE_PED_IS_IN(uLocal_67, 0), -1f, 0f, 0f), 1000, 1, 0);
						iLocal_47++;
					}
				}
			}
			break;
		
		case 7:
			if (!GlobalFunc_111())
			{
				GlobalFunc_10643(&uLocal_84, "RECGFAU", "RECGF_END2", 4, 0, 0, 0);
				func_10();
			}
			break;
	}
}

void func_10()//Position - 0xB7F
{
	while (GlobalFunc_111())
	{
		SYSTEM::WAIT(0);
	}
	while (!GlobalFunc_82())
	{
		SYSTEM::WAIT(0);
	}
	func_14(-1, 0);
	GlobalFunc_7068();
	iLocal_46 = 3;
}




void func_14(int iParam0, int iParam1)//Position - 0xC36
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


























void func_40(int iParam0)//Position - 0x217F
{
	int iVar0;
	
	iVar0 = (MISC::GET_GAME_TIMER() + iParam0);
	while (MISC::GET_GAME_TIMER() <= iVar0)
	{
		SYSTEM::WAIT(0);
		if (iLocal_58 > MISC::GET_GAME_TIMER())
		{
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
		}
	}
}













void func_53()//Position - 0x2847
{
	int iVar0;
	
	switch (iLocal_47)
	{
		case 0:
			if (!PED::IS_PED_INJURED(uLocal_67))
			{
				iLocal_47++;
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(uLocal_67))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_67, 20f, 20f, 20f, 0, 1, 0))
				{
					TASK::TASK_LOOK_AT_ENTITY(uLocal_67, PLAYER::PLAYER_PED_ID(), -1, 2060, 2);
					GlobalFunc_10643(&uLocal_84, "RECGFAU", "RECGF_THX", 4, 0, 0, 0);
					iLocal_47++;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_67) && !ENTITY::IS_ENTITY_DEAD(uLocal_75))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_83);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 916.5764f, 3602.146f, 31.9262f, 1f, 40000, 1048576000, 0, 1193033728);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_83);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_67, uLocal_83);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_83);
				iLocal_47++;
			}
			break;
		
		case 3:
			if (!GlobalFunc_111())
			{
				if (GlobalFunc_8354() == 0)
				{
					GlobalFunc_10643(&uLocal_84, "RECGFAU", "RECGF_JABM", 4, 0, 0, 0);
				}
				else if (GlobalFunc_8354() == 1)
				{
					GlobalFunc_10643(&uLocal_84, "RECGFAU", "RECGF_JABF", 4, 0, 0, 0);
				}
				else if (GlobalFunc_8354() == 2)
				{
					GlobalFunc_10643(&uLocal_84, "RECGFAU", "RECGF_JABBER", 4, 0, 0, 0);
				}
				iLocal_47++;
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(iLocal_67))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_67, 916.5764f, 3602.146f, 31.9262f, 3.3f, 3.3f, 3.3f, 0, 1, 0))
				{
					if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_67, 8f, 8f, 8f, 0, 1, 0))
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10643(&uLocal_84, "RECGFAU", "RECGF_STASH", 4, 0, 0, 0))
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_67, PLAYER::PLAYER_PED_ID(), -1);
								if (!ENTITY::IS_ENTITY_DEAD(uLocal_75))
								{
									ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uLocal_75);
								}
								iLocal_47++;
							}
						}
					}
					else
					{
						if (!ENTITY::IS_ENTITY_DEAD(uLocal_75))
						{
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uLocal_75);
						}
						iLocal_47 = 6;
					}
				}
			}
			break;
		
		case 5:
			if (!GlobalFunc_111())
			{
				if (GlobalFunc_8354() == 0)
				{
					GlobalFunc_10643(&uLocal_84, "RECGFAU", "RECGF_STASHM", 4, 0, 0, 0);
				}
				else if (GlobalFunc_8354() == 1)
				{
					GlobalFunc_10643(&uLocal_84, "RECGFAU", "RECGF_STASHF", 4, 0, 0, 0);
				}
				iLocal_47++;
			}
			break;
		
		case 6:
			if (!PED::IS_PED_INJURED(iLocal_67))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_67, 8f, 8f, 8f, 0, 1, 0))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
					{
						if (func_56())
						{
							func_40(1000);
							if ((!PED::IS_PED_INJURED(iLocal_67) && !PED::IS_PED_INJURED(iLocal_68[2])) && !ENTITY::IS_ENTITY_DEAD(uLocal_75))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_83);
								TASK::TASK_OPEN_VEHICLE_DOOR(0, uLocal_75, -1, -1, 1f);
								TASK::TASK_LOOK_AT_ENTITY(0, iLocal_68[2], 2000, 0, 2);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_68[2], 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_83);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_67, uLocal_83);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_83);
								func_40(2000);
								GlobalFunc_4956();
								func_40(0);
								GlobalFunc_10643(&uLocal_84, "RECGFAU", "RECGF_HIDE", 4, 0, 0, 0);
								if ((!PED::IS_PED_INJURED(iLocal_67) && !ENTITY::IS_ENTITY_DEAD(uLocal_75)) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_67, 0))
								{
									iLocal_47++;
								}
								else
								{
									if (!PED::IS_PED_INJURED(iLocal_67) && !PED::IS_PED_INJURED(iLocal_68[2]))
									{
										TASK::OPEN_SEQUENCE_TASK(&uLocal_83);
										TASK::TASK_COWER(0, -1);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_83);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_67, uLocal_83);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_83);
									}
									bLocal_54 = false;
									SYSTEM::SETTIMERB(0);
									iLocal_47++;
								}
							}
						}
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_75))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_75, PLAYER::PLAYER_PED_ID(), 0))
				{
					func_63();
				}
			}
			break;
		
		case 7:
			if ((((!PED::IS_PED_INJURED(iLocal_67) && !ENTITY::IS_ENTITY_DEAD(uLocal_75)) && !PED::IS_PED_IN_VEHICLE(iLocal_67, uLocal_75, 0)) && !PED::IS_PED_IN_COVER(iLocal_67, 0)) && !PED::IS_PED_GOING_INTO_COVER(iLocal_67))
			{
			}
			iVar0 = 0;
			while (iVar0 < iLocal_68)
			{
				if (!PED::IS_PED_INJURED(iLocal_68[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_76[iVar0]))
				{
					if (((((PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), (916.3351f - 100f), (3602.048f - 100f), (31.9209f - 100f), (916.3351f + 100f), (3602.048f + 100f), (31.9209f + 100f), 0, 1) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_68[iVar0], 5f, 5f, 5f, 0, 1, 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_68[iVar0], PLAYER::PLAYER_PED_ID(), 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_76[iVar0], PLAYER::PLAYER_PED_ID(), 1)) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_68[iVar0])) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_76[iVar0]))
					{
						bLocal_54 = true;
						SYSTEM::SETTIMERB(2000);
						iLocal_47 = 0;
						iLocal_46 = 2;
					}
				}
				iVar0++;
			}
			if (((PED::IS_PED_INJURED(iLocal_68[2]) && PED::IS_PED_INJURED(iLocal_68[3])) && PED::IS_PED_INJURED(iLocal_68[4])) && PED::IS_PED_INJURED(iLocal_68[5]))
			{
				iLocal_47 = 2;
				iLocal_46 = 2;
			}
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_68[2], 970.3641f, 3629.886f, 31.3694f, 5f, 5f, 5f, 0, 1, 0) || SYSTEM::TIMERB() > 13000)
			{
				func_40(2000);
				iVar0 = 0;
				while (iVar0 < iLocal_68)
				{
					if (!PED::IS_PED_INJURED(iLocal_68[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_76[iVar0]))
						{
							if (PED::IS_PED_IN_VEHICLE(iLocal_68[iVar0], iLocal_76[iVar0], 0))
							{
								TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_68[iVar0], iLocal_76[iVar0], PLAYER::PLAYER_PED_ID(), (iVar0 - 2) + 10, 60f, 786475, 5f, 10f, 1);
							}
						}
					}
					iVar0++;
				}
				if (!PED::IS_PED_INJURED(iLocal_67))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_67, 15f, 15f, 15f, 0, 1, 0))
					{
						GlobalFunc_5105();
						func_40(0);
						GlobalFunc_10643(&uLocal_84, "RECGFAU", "RECGF_GANG", 4, 0, 0, 0);
					}
				}
				SYSTEM::SETTIMERB(0);
				iLocal_47 = 0;
				iLocal_46 = 2;
			}
			break;
	}
}



int func_56()//Position - 0x2EA0
{
	int iVar0;
	
	if (((((((!ENTITY::DOES_ENTITY_EXIST(iLocal_76[2]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_76[3])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_76[4])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_76[5])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_68[2])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_68[3])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_68[4])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_68[5]))
	{
		STREAMING::REQUEST_MODEL(joaat("hexer"));
		STREAMING::REQUEST_MODEL(joaat("g_m_y_lost_01"));
		STREAMING::REQUEST_MODEL(joaat("g_m_y_lost_02"));
		AUDIO::START_AUDIO_SCENE("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
		if (STREAMING::HAS_MODEL_LOADED(joaat("hexer")))
		{
			iLocal_76[2] = VEHICLE::CREATE_VEHICLE(joaat("hexer"), 863.4697f, 3633.5f, 31.9874f, 290.5797f, 1, 1);
			iLocal_76[3] = VEHICLE::CREATE_VEHICLE(joaat("hexer"), 866.4073f, 3636.039f, 31.9514f, 270.3649f, 1, 1);
			iLocal_76[4] = VEHICLE::CREATE_VEHICLE(joaat("hexer"), 866.3153f, 3631.587f, 31.9545f, 276.6327f, 1, 1);
			iLocal_76[5] = VEHICLE::CREATE_VEHICLE(joaat("hexer"), 868.5937f, 3633.523f, 31.9622f, 267.0991f, 1, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("hexer"));
			AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_76[2], 3);
			AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_76[4], 3);
			iLocal_58 = MISC::GET_GAME_TIMER() + 1500;
		}
		if ((STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_lost_01")) && STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_lost_02"))) && AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_COUNTRYSIDE_GANG_FIGHT_SCENE"))
		{
			iLocal_68[2] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_76[2], 22, joaat("g_m_y_lost_01"), -1, 1, 1);
			iLocal_68[3] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_76[3], 22, joaat("g_m_y_lost_02"), -1, 1, 1);
			iLocal_68[4] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_76[4], 22, joaat("g_m_y_lost_01"), -1, 1, 1);
			iLocal_68[5] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_76[5], 22, joaat("g_m_y_lost_02"), -1, 1, 1);
			GlobalFunc_1286(&uLocal_84, 4, iLocal_68[4], "RECGFLost3", 0, 1);
			iLocal_58 = MISC::GET_GAME_TIMER() + 1500;
			iVar0 = 0;
			while (iVar0 < iLocal_68)
			{
				if (!PED::IS_PED_INJURED(iLocal_68[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_76[iVar0]))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_76[iVar0], "RE_COUNTRYSIDE_GANG_BIKES", 0);
					PED::SET_PED_CONFIG_FLAG(iLocal_68[iVar0], 137, 1);
					PED::SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_68[iVar0], 0);
					PED::SET_PED_COMBAT_MOVEMENT(iLocal_68[iVar0], 2);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_68[iVar0], 50, 1);
					PED::SET_PED_COMBAT_ABILITY(iLocal_68[iVar0], 2);
					PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(iLocal_68[iVar0], 50f, 20);
					PED::SET_PED_COMBAT_RANGE(iLocal_68[iVar0], 1);
					PED::SET_PED_ACCURACY(iLocal_68[iVar0], 13);
					PED::SET_PED_HEARING_RANGE(iLocal_68[iVar0], 100f);
					PED::SET_PED_SEEING_RANGE(iLocal_68[iVar0], 100f);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_68[iVar0], uLocal_249);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_68[iVar0], 1);
					PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_68[iVar0], 3);
					PED::SET_PED_HELMET(iLocal_68[iVar0], 0);
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_68[iVar0], 1);
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_68[iVar0], 1, 1000f);
					if (iVar0 > 1 && iVar0 < 5)
					{
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_68[iVar0], joaat("weapon_pistol"), -1, 1, 1);
					}
					else
					{
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_68[iVar0], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&uLocal_83);
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_76[2], 966.7098f, 3633.926f, 31.3974f, 10f, 0, joaat("hexer"), 786725, 4f, 100f);
					TASK::TASK_LOOK_AT_COORD(0, Local_49, 5000, 0, 2);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_83);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_68[2], uLocal_83);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_83);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_83);
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_76[3], 970.6208f, 3636.743f, 31.3666f, 10f, 0, joaat("hexer"), 786725, 4f, 100f);
					TASK::TASK_LOOK_AT_COORD(0, Local_49, 5000, 0, 2);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_83);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_68[3], uLocal_83);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_83);
					PED::SET_PED_KEEP_TASK(iLocal_68[3], 1);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_83);
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_76[4], 971.023f, 3631.225f, 31.3807f, 10f, 0, joaat("hexer"), 786725, 4f, 100f);
					TASK::TASK_LOOK_AT_COORD(0, Local_49, 5000, 0, 2);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_83);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_68[4], uLocal_83);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_83);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_83);
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_76[5], 974.8073f, 3633.771f, 31.3818f, 10f, 0, joaat("hexer"), 786725, 4f, 100f);
					TASK::TASK_LOOK_AT_COORD(0, Local_49, 5000, 0, 2);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_83);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_68[5], uLocal_83);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_83);
				}
				iVar0++;
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("hexer"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_lost_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_lost_02"));
			return 1;
		}
	}
	return 0;
}


void func_58()//Position - 0x340D
{
	if (!PED::IS_PED_INJURED(iLocal_67))
	{
		TASK::TASK_SMART_FLEE_PED(iLocal_67, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
		PED::SET_PED_KEEP_TASK(iLocal_67, 1);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_68[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_68[1]))
		{
			ENTITY::SET_ENTITY_HEALTH(iLocal_67, 101);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_67, 0);
			TASK::TASK_SHOOT_AT_ENTITY(iLocal_68[0], iLocal_67, 1000, 0);
			TASK::TASK_SHOOT_AT_ENTITY(iLocal_68[1], iLocal_67, 1000, 0);
		}
		else
		{
			GlobalFunc_4956();
			func_40(0);
			if (!PED::IS_PED_INJURED(iLocal_67))
			{
				GlobalFunc_5122(iLocal_67, "GENERIC_FRIGHTENED_HIGH", 24);
			}
		}
		func_40(1000);
		func_63();
	}
}



void func_61()//Position - 0x36BA
{
	int iVar0;
	
	switch (iLocal_47)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_67, 45f, 45f, 20f, 0, 1, 0))
			{
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_8354() == 0)
					{
						GlobalFunc_10643(&uLocal_84, "RECGFAU", "RECGF_COMM", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8354() == 1)
					{
						GlobalFunc_10643(&uLocal_84, "RECGFAU", "RECGF_COMF", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8354() == 2)
					{
						GlobalFunc_10643(&uLocal_84, "RECGFAU", "RECGF_COMT", 4, 0, 0, 0);
					}
					iLocal_47++;
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_67))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_67, 40f, 40f, 20f, 0, 1, 0))
				{
					if (GlobalFunc_10643(&uLocal_84, "RECGFAU", "RECGF_HELP", 4, 0, 0, 0))
					{
						iLocal_47++;
					}
				}
			}
			break;
		
		case 2:
			if (!GlobalFunc_111())
			{
				GlobalFunc_10643(&uLocal_84, "RECGFAU", "RECGF_SHUTUP", 4, 0, 0, 0);
				SYSTEM::SETTIMERA(0);
				iLocal_47++;
			}
			break;
		
		case 3:
			if ((!PED::IS_PED_INJURED(iLocal_67) && !PED::IS_PED_INJURED(iLocal_68[0])) && !PED::IS_PED_INJURED(iLocal_68[1]))
			{
				if ((SYSTEM::TIMERA() > 5000 && !iLocal_55) && !GlobalFunc_111())
				{
					GlobalFunc_10643(&uLocal_84, "RECGFAU", "RECGF_PAYUP", 4, 0, 0, 0);
					iLocal_55 = 1;
				}
				if (SYSTEM::TIMERA() < 28000)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_67, 12f, 12f, 2.5f, 0, 1, 0))
					{
						if (((PED::CAN_PED_SEE_HATED_PED(iLocal_68[0], PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(iLocal_68[1], PLAYER::PLAYER_PED_ID())) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_68[0], PLAYER::PLAYER_PED_ID())) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_68[1], PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_68[0], PLAYER::PLAYER_PED_ID(), 4000, 2056, 4);
							TASK::TASK_LOOK_AT_ENTITY(iLocal_68[1], PLAYER::PLAYER_PED_ID(), 4000, 2056, 4);
							if (!iLocal_56)
							{
								GlobalFunc_4956();
								func_40(0);
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
								{
									GlobalFunc_10643(&uLocal_84, "RECGFAU", "RECGF_GETLOS", 4, 0, 0, 0);
								}
								else
								{
									GlobalFunc_10643(&uLocal_84, "RECGFAU", "RECGF_BEGONE", 4, 0, 0, 0);
								}
								iLocal_56 = 1;
							}
						}
					}
					else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_68[0], "random@countryside_gang_fight", "biker_02_stickup_loop", 3))
					{
						if (!PED::IS_PED_FACING_PED(iLocal_68[0], iLocal_67, 10f))
						{
							TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_68[0], iLocal_67, -1, 0);
						}
					}
				}
				else if (!ENTITY::IS_ENTITY_DEAD(iLocal_76[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_76[1]))
				{
					GlobalFunc_4956();
					func_40(0);
					GlobalFunc_10643(&uLocal_84, "RECGFAU", "RECGF_SHOOT", 4, 0, 0, 0);
					func_40(2000);
					func_58();
				}
			}
			break;
		
		case 4:
			iVar0 = 0;
			while (iVar0 < iLocal_68)
			{
				if (!PED::IS_PED_INJURED(iLocal_68[iVar0]))
				{
					PED::SET_PED_RESET_FLAG(iLocal_68[iVar0], 156, 1);
					TASK::TASK_COMBAT_PED(iLocal_68[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
					PED::SET_PED_KEEP_TASK(iLocal_68[iVar0], 1);
				}
				iVar0++;
			}
			if (!PED::IS_PED_INJURED(iLocal_67))
			{
				TASK::TASK_COWER(iLocal_67, -1);
			}
			iLocal_47++;
			break;
		
		case 5:
			iVar0 = 0;
			while (iVar0 < iLocal_68)
			{
				if (PED::IS_PED_INJURED(iLocal_68[iVar0]))
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_60[iVar0]))
					{
						HUD::REMOVE_BLIP(&(uLocal_60[iVar0]));
						GlobalFunc_200(&uLocal_84, 2);
						GlobalFunc_200(&uLocal_84, 3);
					}
				}
				iVar0++;
			}
			if (PED::IS_PED_INJURED(iLocal_68[0]) && PED::IS_PED_INJURED(iLocal_68[1]))
			{
				iLocal_47 = 0;
				iLocal_46 = 1;
			}
			break;
	}
}

void func_62()//Position - 0x3A65
{
	if (!CAM::IS_SPHERE_VISIBLE(916.4631f, 3601.261f, 31.9327f, 3f))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 916.4631f, 3601.261f, 31.9327f, 2f, 2f, 2f, 0, 1, 0))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 915.6531f, 3595.061f, 32.0774f, 1, 0, 0, 1);
			}
		}
	}
}

void func_63()//Position - 0x3ACC
{
	iLocal_46 = 3;
}














int func_77()//Position - 0x4148
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!bLocal_54)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, uLocal_249, 1862763509);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_68[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_68[1]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_68[0], PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_68[1], PLAYER::PLAYER_PED_ID(), 1))
			{
				GlobalFunc_4956();
				return 1;
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_68[0], PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_68[1], PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1))
				{
					GlobalFunc_4956();
					return 1;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_76[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_76[1]))
		{
			if (((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_76[0], 0) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_76[1], 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_76[0], PLAYER::PLAYER_PED_ID(), 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_76[1], PLAYER::PLAYER_PED_ID(), 1))
			{
				if (!PED::IS_PED_INJURED(iLocal_68[0]) && !PED::IS_PED_INJURED(iLocal_68[1]))
				{
					if (GlobalFunc_6827())
					{
						GlobalFunc_4956();
						func_40(0);
						GlobalFunc_10643(&uLocal_84, "RECGFAU", "RECGF_BIKES", 4, 0, 0, 0);
					}
					return 1;
				}
			}
		}
		if (PED::IS_PED_INJURED(iLocal_68[0]) || PED::IS_PED_INJURED(iLocal_68[1]))
		{
			GlobalFunc_4956();
			return 1;
		}
		Var0 = { 15f, 15f, 15f };
		Var3 = { -15f, -15f, -15f };
		if (!PED::IS_PED_INJURED(iLocal_68[0]))
		{
			if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_68[0], 31086, 0f, 0f, 0f), 5f, 1))
			{
				GlobalFunc_4956();
				return 1;
			}
			Var0 = { Var0 + PED::GET_PED_BONE_COORDS(iLocal_68[0], 31086, 0f, 0f, 0f) };
			Var3 = { Var3 + PED::GET_PED_BONE_COORDS(iLocal_68[0], 31086, 0f, 0f, 0f) };
			if (((MISC::IS_PROJECTILE_TYPE_IN_AREA(Var3, Var0, joaat("weapon_smokegrenade"), 1) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var3, Var0, joaat("weapon_grenade"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var3, Var0, joaat("weapon_grenadelauncher"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var3, Var0, joaat("weapon_stickybomb"), 1))
			{
				GlobalFunc_4956();
				return 1;
			}
			if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(iLocal_68[0], 31086, 0f, 0f, 0f), 3f))
			{
				GlobalFunc_4956();
				return 1;
			}
		}
		if (PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), (973.053f - 30f), (3616.738f - 30f), (32.6181f - 30f), (973.053f + 30f), (3616.738f + 30f), (32.6181f + 30f), 0, 1))
		{
			GlobalFunc_4956();
			return 1;
		}
		if ((!PED::IS_PED_INJURED(iLocal_67) && !PED::IS_PED_INJURED(iLocal_68[0])) && !PED::IS_PED_INJURED(iLocal_68[1]))
		{
			if (iLocal_48 != -1)
			{
				if (((PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_68[0]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_68[1])) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_68[0])) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_68[1]))
				{
					GlobalFunc_4956();
					return 1;
				}
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_67, 12f, 12f, 2.5f, 0, 1, 0))
			{
				if (((PED::CAN_PED_SEE_HATED_PED(iLocal_68[0], PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(iLocal_68[1], PLAYER::PLAYER_PED_ID())) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_68[0], PLAYER::PLAYER_PED_ID())) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_68[1], PLAYER::PLAYER_PED_ID()))
				{
					if (!iLocal_53)
					{
						TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_68[0], PLAYER::PLAYER_PED_ID(), -1, 0);
						iLocal_53 = 1;
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_59))
					{
						HUD::SHOW_HEIGHT_ON_BLIP(uLocal_59, 1);
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_60[0]))
					{
						HUD::SHOW_HEIGHT_ON_BLIP(uLocal_60[0], 1);
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_60[1]))
					{
						HUD::SHOW_HEIGHT_ON_BLIP(uLocal_60[1], 1);
					}
					if ((!GlobalFunc_111() || GlobalFunc_5672("RECGF_SHUTUP")) || GlobalFunc_5672("RECGF_PAYUP"))
					{
						if (iLocal_48 == -1)
						{
							iLocal_48 = MISC::GET_GAME_TIMER();
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								GlobalFunc_4956();
								func_40(0);
								GlobalFunc_10643(&uLocal_84, "RECGFAU", "RECGF_REPEAT", 4, 0, 0, 0);
							}
							else
							{
								GlobalFunc_4956();
								func_40(0);
								GlobalFunc_10643(&uLocal_84, "RECGFAU", "RECGF_REPEAT", 4, 0, 0, 0);
							}
						}
					}
				}
			}
			else
			{
				iLocal_53 = 0;
				iLocal_48 = -1;
			}
			if (iLocal_48 != -1 && MISC::GET_GAME_TIMER() > iLocal_48 + 10000)
			{
				GlobalFunc_4956();
				func_40(0);
				GlobalFunc_10643(&uLocal_84, "RECGFAU", "RECGF_WARNED", 4, 0, 0, 0);
				return 1;
			}
			if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_68[0], PLAYER::PLAYER_PED_ID(), 1) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_68[1], PLAYER::PLAYER_PED_ID(), 1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_67, PLAYER::PLAYER_PED_ID(), 1))
				{
					if (GlobalFunc_6827())
					{
						GlobalFunc_4956();
						func_40(0);
						GlobalFunc_10643(&uLocal_84, "RECGFAU", "RECGF_DEALER", 4, 0, 0, 0);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_78()//Position - 0x465A
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_75, 0))
	{
		if ((!ENTITY::IS_ENTITY_AT_COORD(uLocal_75, 915.7905f, 3603.449f, 31.9111f, 5f, 5f, 5f, 0, 1, 0) && !PED::IS_PED_IN_VEHICLE(iLocal_67, iLocal_75, 0)) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_75, 1))
		{
			func_58();
		}
	}
	else
	{
		func_58();
	}
}

int func_79()//Position - 0x46B6
{
	int iVar0;
	
	if (((((!ENTITY::DOES_ENTITY_EXIST(iLocal_67) && !ENTITY::DOES_ENTITY_EXIST(iLocal_68[0])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_68[1])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_75)) && !ENTITY::DOES_ENTITY_EXIST(iLocal_76[0])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_76[1]))
	{
		STREAMING::REQUEST_MODEL(joaat("a_m_m_skidrow_01"));
		STREAMING::REQUEST_MODEL(joaat("g_m_y_lost_01"));
		STREAMING::REQUEST_MODEL(joaat("g_m_y_lost_02"));
		STREAMING::REQUEST_MODEL(joaat("picador"));
		STREAMING::REQUEST_MODEL(joaat("hexer"));
		STREAMING::REQUEST_ANIM_DICT("random@countryside_gang_fight");
		STREAMING::REQUEST_ANIM_DICT("veh@drivebystd_ds_grenades");
		STREAMING::REQUEST_ANIM_SET("move_m@gangster@var_i");
		if (((((((STREAMING::HAS_MODEL_LOADED(joaat("a_m_m_skidrow_01")) && STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_lost_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_lost_02"))) && STREAMING::HAS_MODEL_LOADED(joaat("picador"))) && STREAMING::HAS_MODEL_LOADED(joaat("hexer"))) && STREAMING::HAS_ANIM_DICT_LOADED("random@countryside_gang_fight")) && STREAMING::HAS_ANIM_DICT_LOADED("veh@drivebystd_ds_grenades")) && STREAMING::HAS_ANIM_SET_LOADED("move_m@gangster@var_i"))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("picador"), 1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("hexer"), 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(417.901f, 3578.002f, 31.176f, 1305.897f, 3604.306f, 40.1064f, 100.0625f, 0, 0, 1);
			PED::ADD_SCENARIO_BLOCKING_AREA(Local_49 - Vector(20f, 50f, 80f), Local_49 + Vector(20f, 50f, 70f), 0, 1, 1, 1);
			MISC::ENABLE_DISPATCH_SERVICE(3, 0);
			MISC::ENABLE_DISPATCH_SERVICE(5, 0);
			PED::ADD_RELATIONSHIP_GROUP("rghLost", &uLocal_249);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_249, 1862763509);
			iLocal_67 = PED::CREATE_PED(26, joaat("a_m_m_skidrow_01"), 973.053f, 3616.738f, 31.6181f, 110.2753f, 1, 1);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_67, 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_67, 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_67, 3, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_67, 4, 0, 0, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_m_skidrow_01"));
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_67, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_67, 17, 1);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_67, 0);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_67, 1);
			PED::SET_PED_CONFIG_FLAG(iLocal_67, 185, 1);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_67, 16);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_67, "A_M_M_TRAMP_01_BLACK_MINI_01");
			GlobalFunc_1286(&uLocal_84, 1, iLocal_67, "RECGFDealer", 0, 1);
			AUDIO::STOP_PED_SPEAKING(iLocal_67, 1);
			TASK::TASK_PLAY_ANIM(iLocal_67, "random@countryside_gang_fight", "gangmember_stickup_loop", 1000f, -2f, -1, 1, 0, 0, 0, 0);
			PED::SET_PED_MOVEMENT_CLIPSET(iLocal_67, "move_m@gangster@var_i", 1048576000);
			iLocal_75 = VEHICLE::CREATE_VEHICLE(joaat("picador"), 915.7905f, 3603.449f, 31.9111f, 111.9593f, 1, 1);
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_75, 37, 0);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_75, 4, 0);
			VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_75, 1);
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_75, "WDU 696");
			iLocal_68[0] = PED::CREATE_PED(22, joaat("g_m_y_lost_01"), 970.2217f, 3614.821f, 31.6909f, 297.4345f, 1, 1);
			GlobalFunc_1286(&uLocal_84, 3, iLocal_68[0], "RECGFLost2", 0, 1);
			iLocal_68[1] = PED::CREATE_PED(22, joaat("g_m_y_lost_02"), 971.504f, 3618.054f, 31.5565f, 216.9967f, 1, 1);
			GlobalFunc_1286(&uLocal_84, 2, iLocal_68[1], "RECGFLost1", 0, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_lost_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_lost_02"));
			iLocal_76[0] = VEHICLE::CREATE_VEHICLE(joaat("hexer"), 968.2626f, 3611.717f, 31.7874f, 296.8978f, 1, 1);
			iLocal_76[1] = VEHICLE::CREATE_VEHICLE(joaat("hexer"), 970.8362f, 3625.563f, 31.3415f, 212.3456f, 1, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("hexer"));
			TASK::TASK_PLAY_ANIM(iLocal_68[0], "random@countryside_gang_fight", "biker_02_stickup_loop", 1000f, -2f, -1, 1, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(iLocal_68[1], "random@countryside_gang_fight", "biker_01_stickup_loop", 1000f, -2f, -1, 1, 0, 0, 0, 0);
			iVar0 = 0;
			while (iVar0 < iLocal_68)
			{
				if (iVar0 < 2)
				{
					PED::SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_68[iVar0], 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_68[iVar0], uLocal_249);
					PED::SET_PED_COMBAT_MOVEMENT(iLocal_68[iVar0], 2);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_68[iVar0], 50, 1);
					PED::SET_PED_COMBAT_RANGE(iLocal_68[iVar0], 0);
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_68[0], joaat("weapon_pistol"), -1, 1, 1);
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_68[1], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
					PED::SET_PED_KEEP_TASK(iLocal_68[iVar0], 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_68[iVar0], 1);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_68[iVar0], 1);
				}
				iVar0++;
			}
			iLocal_58 = MISC::GET_GAME_TIMER() + 1500;
			if (GlobalFunc_8354() == 0)
			{
				GlobalFunc_1286(&uLocal_84, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			}
			else if (GlobalFunc_8354() == 1)
			{
				GlobalFunc_1286(&uLocal_84, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			}
			else if (GlobalFunc_8354() == 2)
			{
				GlobalFunc_1286(&uLocal_84, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			}
			return 1;
		}
	}
	return 0;
}

int func_80()//Position - 0x4B6D
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
	if (GlobalFunc_9560(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}


















int func_98(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x6867
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
		if (GlobalFunc_42(GlobalFunc_8354()))
		{
			if (GlobalFunc_9560(100f, 1) != -1)
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










































void func_140()//Position - 0x7E88
{
	int iVar0;
	
	if (iLocal_52 && !iLocal_57)
	{
		if (!GlobalFunc_5672("RECGF_SHOOT"))
		{
			GlobalFunc_4956();
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_59))
		{
			HUD::REMOVE_BLIP(&uLocal_59);
		}
		if (!PED::IS_PED_INJURED(iLocal_67))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_67, 317, 1);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_67, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_67, 0);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_68)
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_60[iVar0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_60[iVar0]));
			}
			if (!PED::IS_PED_INJURED(iLocal_68[iVar0]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (iVar0 < 2)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_76[iVar0]))
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_68[iVar0], iLocal_76[iVar0], PLAYER::PLAYER_PED_ID(), 8, 20f, 786469, 150f, 10f, 1);
						PED::SET_PED_KEEP_TASK(iLocal_68[iVar0], 1);
					}
					else
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_68[iVar0], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					}
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_68[iVar0], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_68[iVar0], 0);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_76)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_76[iVar0]))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_76[iVar0]));
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_COUNTRYSIDE_GANG_FIGHT_SCENE"))
				{
				}
			}
			iVar0++;
		}
		AUDIO::STOP_AUDIO_SCENE("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(417.901f, 3578.002f, 31.176f, 1305.897f, 3604.306f, 40.1064f, 100.0625f, 1);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		MISC::ENABLE_DISPATCH_SERVICE(3, 1);
		MISC::ENABLE_DISPATCH_SERVICE(5, 1);
		GlobalFunc_200(&uLocal_84, 1);
		GlobalFunc_200(&uLocal_84, 2);
		GlobalFunc_200(&uLocal_84, 3);
		GlobalFunc_200(&uLocal_84, 4);
	}
	GlobalFunc_10823(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}












