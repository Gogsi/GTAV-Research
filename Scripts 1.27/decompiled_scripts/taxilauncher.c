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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
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
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	struct<31> Local_55 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	var uLocal_100 = 16;
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
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	char* sLocal_265 = NULL;
	char* sLocal_266 = NULL;
	char* sLocal_267 = NULL;
	var uLocal_268 = 0;
	char cLocal_269[16] = "";
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	struct<3> Local_273 = { 0, 0, 0 } ;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
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
	sLocal_17 = "NULL";
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
	uLocal_45 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_46 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_89 = 1;
	iLocal_94 = -1;
	iLocal_98 = func_144();
	iLocal_99 = func_143();
	StringCopy(&cLocal_269, "TAXI_HAIL", 16);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		func_142();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.TAXI_HAIL_HELP_PROMPT = 1;
	while (true)
	{
		switch (iLocal_50)
		{
			case 0:
				if (func_141())
				{
					iLocal_50 = 1;
				}
				else
				{
					SYSTEM::WAIT(500);
				}
				break;
			
			case 1:
				if (func_141())
				{
					Local_273 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
					func_110();
					if (func_109())
					{
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("taxi"), 0);
						func_108();
						if (!func_106())
						{
							func_64();
							func_30();
							func_14();
						}
					}
					else
					{
						func_4(0);
						iLocal_50 = 1;
						func_1();
						SYSTEM::WAIT(500);
					}
				}
				else
				{
					func_4(1);
					iLocal_50 = 0;
				}
				break;
			
			case 2:
				if (!SCRIPT::IS_THREAD_ACTIVE(uLocal_268))
				{
					func_4(1);
					iLocal_53 = 3;
					iLocal_50 = 0;
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x169
{
	if (!func_3())
	{
		if (MISC::ARE_STRINGS_EQUAL("NULL", &Global_96409))
		{
			func_2(0);
		}
		else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&Global_96409)) == 0)
		{
			func_2(0);
		}
	}
}

void func_2(bool bParam0)//Position - 0x1A3
{
	if (bParam0)
	{
		StringCopy(&Global_96409, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
		Global_96403 = 1;
	}
	else
	{
		StringCopy(&Global_96409, "NULL", 24);
		Global_96403 = 0;
	}
}

int func_3()//Position - 0x1CF
{
	if (!Global_96402)
	{
		return 0;
	}
	if (Global_96403)
	{
		return 0;
	}
	return 1;
}

void func_4(bool bParam0)//Position - 0x1EF
{
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("taxi"), 0);
	func_13();
	func_10();
	func_5();
	iLocal_89 = 1;
	iLocal_87 = 0;
	iLocal_51 = 0;
	iLocal_52 = 0;
	iLocal_54 = 0;
	iLocal_53 = 0;
	iLocal_95 = 0;
	if (bParam0)
	{
		iLocal_50 = 0;
	}
}

void func_5()//Position - 0x22A
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_269, "HAIL_TAXI", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(PLAYER::PLAYER_PED_ID(), "HAIL_TAXI", &cLocal_269, -2f);
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_269, "FP_HAIL_TAXI", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(PLAYER::PLAYER_PED_ID(), "FP_HAIL_TAXI", &cLocal_269, -2f);
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_269, "FUCK_U", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(PLAYER::PLAYER_PED_ID(), "FUCK_U", &cLocal_269, -2f);
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_269, "FORGET_IT", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(PLAYER::PLAYER_PED_ID(), "FORGET_IT", &cLocal_269, -2f);
		}
		if (iLocal_94 != -1)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 113, 0);
		}
		if (iLocal_91 == 1)
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
			iLocal_91 = 0;
		}
	}
	STREAMING::REMOVE_ANIM_DICT(&cLocal_269);
	if (iLocal_94 != -1)
	{
		func_8(&iLocal_94);
	}
	if (func_7("TXM_H01"))
	{
		iLocal_93++;
		if (iLocal_93 == 3)
		{
			Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.TAXI_HAIL_HELP_PROMPT = 1;
		}
		HUD::CLEAR_HELP(1);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_92))
	{
		HUD::SET_BLIP_ROUTE(uLocal_92, 0);
		HUD::REMOVE_BLIP(&uLocal_92);
	}
	if (iLocal_87)
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96385))
	{
		if (!PED::IS_PED_INJURED(Global_96385))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_96385, &cLocal_269, "Aknowledge_R", 3))
			{
				ENTITY::STOP_ENTITY_ANIM(Global_96385, "Aknowledge_R", &cLocal_269, -4f);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_96385, &cLocal_269, "Aknowledge_L", 3))
			{
				ENTITY::STOP_ENTITY_ANIM(Global_96385, "Aknowledge_L", &cLocal_269, -4f);
			}
		}
	}
	if (iLocal_53 == 0)
	{
		func_6();
	}
	iLocal_277 = 0;
	iLocal_86 = 0;
	iLocal_87 = 0;
	iLocal_96 = 0;
	iLocal_97 = 0;
	Global_96421 = -1;
	iLocal_54 = 0;
}

void func_6()//Position - 0x3E9
{
	var uVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_96385))
	{
		if (!PED::IS_PED_INJURED(Global_96385))
		{
			PED::SET_PED_CONFIG_FLAG(Global_96385, 251, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_96385, 0);
			if (!PED::IS_PED_FLEEING(Global_96385) && !PED::IS_PED_IN_COMBAT(Global_96385, 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Global_96385, 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_96384))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96384, 0))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(Global_96385, Global_96384))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Global_96385, -258271821) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Global_96385, -258271821) != 0)
								{
									TASK::OPEN_SEQUENCE_TASK(&uVar0);
									if ((!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_96384, 1) || !VEHICLE::IS_VEHICLE_SEAT_FREE(Global_96384, 2)) || !VEHICLE::IS_VEHICLE_SEAT_FREE(Global_96384, 0))
									{
										TASK::TASK_PAUSE(0, 2000);
									}
									else
									{
										TASK::TASK_PAUSE(0, 500);
									}
									TASK::TASK_VEHICLE_DRIVE_WANDER(0, Global_96384, 12f, 790699);
									TASK::CLOSE_SEQUENCE_TASK(uVar0);
									TASK::TASK_PERFORM_SEQUENCE(Global_96385, uVar0);
									TASK::CLEAR_SEQUENCE_TASK(&uVar0);
								}
							}
							else
							{
								TASK::TASK_SMART_FLEE_PED(Global_96385, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
							}
						}
						else
						{
							TASK::TASK_SMART_FLEE_PED(Global_96385, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
						}
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(Global_96385, -1146898486) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Global_96385, -1146898486) != 0)
				{
					TASK::TASK_WANDER_STANDARD(Global_96385, 1193033728, 0);
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96385))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_96385))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_96385, 0))
			{
				if (!PED::IS_PED_INJURED(Global_96385))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_96385, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_96385, 0);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Global_96385);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96384))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_96384))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_96384, 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96384, 0))
				{
					VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(Global_96384, 0);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Global_96384, 1, 0);
					VEHICLE::_0xBE5C1255A1830FF5(Global_96384, 0);
				}
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Global_96384);
			}
		}
	}
	Global_96385 = 0;
	Global_96384 = 0;
	StringCopy(&Global_96415, "NULL", 24);
	Global_96421 = -1;
}

bool func_7(char* sParam0)//Position - 0x623
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_8(int iParam0)//Position - 0x636
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_9(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_35613[iVar0 /*18*/])
		{
			Global_35613[iVar0 /*18*/].f_6 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_9(int iParam0)//Position - 0x68D
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_35613[iVar0 /*18*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_10()//Position - 0x6C8
{
	if (iLocal_53 == 1)
	{
		PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), 1);
		func_11();
	}
	else if (iLocal_53 == 2)
	{
		if (SCRIPT::HAS_SCRIPT_LOADED("taxiService"))
		{
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("taxiService");
		}
		PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), 1);
		func_11();
	}
	func_6();
	if (func_7("TX_H02"))
	{
		HUD::CLEAR_HELP(1);
	}
	iLocal_95 = 0;
	iLocal_53 = 0;
}

void func_11()//Position - 0x723
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (PED::DOES_GROUP_EXIST(func_12()))
	{
		PED::GET_GROUP_SIZE(func_12(), &uVar1, &iVar0);
		if (iVar0 > 0)
		{
			uVar2 = PED::GET_PED_AS_GROUP_MEMBER(func_12(), 0);
			if (!PED::IS_PED_INJURED(uVar2))
			{
				TASK::CLEAR_PED_TASKS(iVar2);
				if (!ENTITY::IS_ENTITY_DEAD(Global_96384))
				{
					if (PED::IS_PED_IN_VEHICLE(iVar2, Global_96384, 0))
					{
						TASK::TASK_LEAVE_VEHICLE(iVar2, Global_96384, 64);
					}
				}
			}
			if (iVar0 > 1)
			{
				iVar2 = PED::GET_PED_AS_GROUP_MEMBER(func_12(), 1);
				if (!PED::IS_PED_INJURED(iVar2))
				{
					TASK::CLEAR_PED_TASKS(iVar2);
					if (!ENTITY::IS_ENTITY_DEAD(Global_96384))
					{
						if (PED::IS_PED_IN_VEHICLE(iVar2, Global_96384, 0))
						{
							TASK::TASK_LEAVE_VEHICLE(iVar2, Global_96384, 64);
						}
					}
				}
			}
		}
	}
}

var func_12()//Position - 0x7D0
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_13()//Position - 0x7E0
{
	var uVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_55.f_1))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_55.f_1, 0))
		{
			if (Local_55.f_1 != Global_96385)
			{
				if (!PED::IS_PED_INJURED(Local_55.f_1))
				{
					PED::SET_PED_CONFIG_FLAG(Local_55.f_1, 251, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_55.f_1, 0);
					if (!PED::IS_PED_FLEEING(Local_55.f_1) && !PED::IS_PED_IN_COMBAT(Local_55.f_1, 0))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_55.f_1, 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_55))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_55, 0))
								{
									if (PED::IS_PED_SITTING_IN_VEHICLE(Local_55.f_1, Local_55))
									{
										TASK::OPEN_SEQUENCE_TASK(&uVar0);
										if ((!VEHICLE::IS_VEHICLE_SEAT_FREE(Local_55, 1) || !VEHICLE::IS_VEHICLE_SEAT_FREE(Local_55, 2)) || !VEHICLE::IS_VEHICLE_SEAT_FREE(Local_55, 0))
										{
											TASK::TASK_PAUSE(0, 2000);
										}
										else
										{
											TASK::TASK_PAUSE(0, 500);
										}
										TASK::TASK_VEHICLE_DRIVE_WANDER(0, Local_55, 12f, 790699);
										TASK::CLOSE_SEQUENCE_TASK(uVar0);
										TASK::TASK_PERFORM_SEQUENCE(Local_55.f_1, uVar0);
										TASK::CLEAR_SEQUENCE_TASK(&uVar0);
									}
									else
									{
										TASK::TASK_SMART_FLEE_PED(Local_55.f_1, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
									}
								}
								else
								{
									TASK::TASK_SMART_FLEE_PED(Local_55.f_1, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
								}
							}
						}
						else
						{
							TASK::TASK_WANDER_STANDARD(Local_55.f_1, 1193033728, 0);
						}
					}
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(Local_55.f_1));
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_55.f_1));
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_55))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_55, 0))
		{
			if (Local_55 != Global_96384)
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_55);
			}
		}
	}
	if (iLocal_52 == 1)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_99);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_98);
	}
	Local_55 = 0;
	Local_55.f_1 = 0;
	Local_55.f_2 = 0;
	Local_55.f_3 = 0;
	Local_55.f_5 = 0f;
	Local_55.f_6 = 0f;
	Local_55.f_7 = 45f;
	Local_55.f_8 = 0;
	Local_55.f_10 = 0;
	Local_55.f_9 = 0;
	Local_55.f_11 = { 0f, 0f, 0f };
	Local_55.f_14 = { 0f, 0f, 0f };
	Local_55.f_17 = { 0f, 0f, 0f };
	Local_55.f_20 = { 0f, 0f, 0f };
	Local_55.f_23 = { 0f, 0f, 0f };
	Local_55.f_26 = { 0f, 0f, 0f };
	Local_55.f_29 = 1076367531;
	Local_55.f_30 = 147;
	iLocal_52 = 0;
}

void func_14()//Position - 0x9E3
{
	if (iLocal_53 == 0)
	{
		func_26();
	}
	else if (iLocal_53 == 1)
	{
		func_22();
	}
	else if (iLocal_53 == 2)
	{
		func_15();
	}
	else if (iLocal_53 == 3)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iLocal_53 = 0;
		}
	}
}

void func_15()//Position - 0xA28
{
	if (func_21(&Global_96384, iLocal_99, iLocal_98))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_96384, 0))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_96384))
			{
				func_20();
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_96384, 1) == PLAYER::PLAYER_PED_ID())
				{
					iLocal_278 = 1;
				}
				else
				{
					iLocal_278 = 2;
				}
				func_19(&Global_96384, iLocal_278);
				if (!PED::IS_PED_INJURED(Global_96385) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96384, 0))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(Global_96385, Global_96384))
					{
						if (!func_18(Global_96385, -2118855366))
						{
							TASK::TASK_VEHICLE_TEMP_ACTION(Global_96385, Global_96384, 1, 1000000);
						}
					}
				}
				func_13();
				func_5();
				if (iLocal_88)
				{
					if (func_7("TX_H02"))
					{
						HUD::CLEAR_HELP(1);
					}
					iLocal_88 = 0;
				}
				func_17();
				func_16();
				PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), 0);
				SCRIPT::REQUEST_SCRIPT("taxiService");
				if (SCRIPT::HAS_SCRIPT_LOADED("taxiService"))
				{
					uLocal_268 = SYSTEM::START_NEW_SCRIPT("taxiService", 1828);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("taxiService");
					iLocal_50 = 2;
				}
			}
		}
		else
		{
			func_4(1);
		}
	}
	else
	{
		func_10();
	}
}

void func_16()//Position - 0xB3A
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1.5f, 1.5f, 1.5f, -1);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			if (PED::IS_PED_ON_FOOT(iVar0))
			{
				TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
			}
		}
	}
}

void func_17()//Position - 0xB92
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96384, 0))
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_96384, 1))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_96384, 1);
			if (PLAYER::PLAYER_PED_ID() != iVar0)
			{
				if (!PED::IS_PED_GROUP_MEMBER(iVar0, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
				}
			}
		}
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_96384, 2))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_96384, 2);
			if (PLAYER::PLAYER_PED_ID() != iVar0)
			{
				if (!PED::IS_PED_GROUP_MEMBER(iVar0, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
				}
			}
		}
	}
}

int func_18(int iParam0, int iParam1)//Position - 0xC30
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_19(var uParam0, int iParam1)//Position - 0xC77
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	if (PED::DOES_GROUP_EXIST(func_12()))
	{
		PED::GET_GROUP_SIZE(func_12(), &uVar1, &iVar0);
		if (iVar0 > 0)
		{
			iVar2 = PED::GET_PED_AS_GROUP_MEMBER(func_12(), 0);
			if (!PED::IS_PED_INJURED(iVar2))
			{
				iVar5 = 1;
				if (iParam1 == 1)
				{
					iVar5 = 2;
				}
				bVar4 = true;
				iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, iVar5);
				if (ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					if (iVar3 == PLAYER::PLAYER_PED_ID())
					{
						bVar4 = false;
					}
					else if (iVar3 == iVar2)
					{
						bVar4 = false;
					}
				}
				if (PED::GET_PED_CONFIG_FLAG(iVar2, 167, 0))
				{
					bVar4 = false;
				}
				if (func_18(iVar2, -1794415470))
				{
					bVar4 = false;
				}
				if (bVar4)
				{
					TASK::TASK_ENTER_VEHICLE(iVar2, *uParam0, 20000, iVar5, 2f, 9437185, 0);
				}
			}
			if (iVar0 > 1)
			{
				iVar2 = PED::GET_PED_AS_GROUP_MEMBER(func_12(), 1);
				if (!PED::IS_PED_INJURED(iVar2))
				{
					bVar4 = true;
					iVar5 = 0;
					iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, iVar5);
					if (ENTITY::DOES_ENTITY_EXIST(iVar3))
					{
						if (iVar3 == PLAYER::PLAYER_PED_ID())
						{
							bVar4 = false;
						}
						else if (iVar3 == iVar2)
						{
							bVar4 = false;
						}
					}
					if (PED::GET_PED_CONFIG_FLAG(iVar2, 167, 0))
					{
						bVar4 = false;
					}
					if (func_18(iVar2, -1794415470))
					{
						bVar4 = false;
					}
					if (bVar4)
					{
						TASK::TASK_ENTER_VEHICLE(iVar2, *uParam0, 20000, iVar5, 2f, 9437185, 0);
					}
				}
			}
		}
	}
}

void func_20()//Position - 0xDAD
{
	Global_17098.f_6 = 1;
}

int func_21(int iParam0, int iParam1, int iParam2)//Position - 0xDBB
{
	var uVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) == iParam1)
			{
				uVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, -1);
				if (ENTITY::DOES_ENTITY_EXIST(uVar0))
				{
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (!PED::IS_PED_FLEEING(iVar0))
						{
							if (!PED::IS_PED_IN_COMBAT(iVar0, 0))
							{
								if (PED::IS_PED_MODEL(iVar0, iParam2))
								{
									if (ENTITY::IS_ENTITY_UPRIGHT(*iParam0, 1119092736))
									{
										iVar1 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(*iParam0);
										if (iVar1 != 3 && iVar1 != 2)
										{
											return 1;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_22()//Position - 0xE4E
{
	if (func_21(&Global_96384, iLocal_99, iLocal_98))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_96384, 0))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_96384))
			{
				iLocal_53 = 2;
			}
			func_20();
		}
		else
		{
			func_23();
		}
	}
	else
	{
		func_10();
	}
}

void func_23()//Position - 0xE99
{
	int iVar0;
	
	if (func_24(&Global_96384))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (iVar0 == iLocal_276)
			{
				func_20();
				if (!PED::IS_PED_INJURED(Global_96385) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96384, 0))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(Global_96385, Global_96384))
					{
						if (!func_18(Global_96385, -2118855366))
						{
							TASK::TASK_VEHICLE_TEMP_ACTION(Global_96385, Global_96384, 1, 1000000);
						}
					}
				}
			}
			else
			{
				iLocal_53 = 0;
			}
		}
		else
		{
			iLocal_53 = 0;
		}
	}
	else
	{
		iLocal_53 = 0;
	}
}

int func_24(int iParam0)//Position - 0xF28
{
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), *iParam0, 5f, 5f, 2f, 0, 1, 0))
	{
		return 0;
	}
	if (ENTITY::GET_ENTITY_SPEED(*iParam0) > 0.5f)
	{
		return 0;
	}
	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(*iParam0) != INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (!func_25(*iParam0))
	{
		return 0;
	}
	return 1;
}

int func_25(int iParam0)//Position - 0xF93
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (ENTITY::IS_ENTITY_UPRIGHT(iParam0, 1119092736))
		{
			return 1;
		}
	}
	return 0;
}

void func_26()//Position - 0xFB8
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_276))
	{
		if (func_21(&iLocal_276, iLocal_99, iLocal_98))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				func_28();
			}
			else if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_276))
				{
					iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_276, -1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_276, 1))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_276, 1) == PLAYER::PLAYER_PED_ID())
						{
							iLocal_278 = 1;
						}
					}
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_276, 2))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_276, 2) == PLAYER::PLAYER_PED_ID())
						{
							iLocal_278 = 2;
						}
					}
					if (iLocal_54 == 4 || iLocal_54 == 2)
					{
						if (iLocal_276 != Global_96384)
						{
							func_5();
						}
					}
					func_20();
					if (func_27(&iLocal_276, &iVar0, 0))
					{
						iLocal_276 = 0;
						iLocal_53 = 2;
					}
				}
				else
				{
					func_10();
				}
			}
		}
	}
}

int func_27(int iParam0, int iParam1, bool bParam2)//Position - 0x108B
{
	if (!*iParam0 == Global_96384 && !Global_96384 == 0)
	{
		func_6();
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0) && ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (!PED::IS_PED_INJURED(*iParam1))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(*iParam1, *iParam0))
				{
					Global_96384 = *iParam0;
					Global_96385 = *iParam1;
					Global_96399 = 1;
					if (bParam2)
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96385, 1, 1);
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96384, 1, 1);
						StringCopy(&Global_96415, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
					}
					else
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_96385))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96385, 1, 0);
						}
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_96384))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96384, 1, 0);
							StringCopy(&Global_96415, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
						}
					}
					PED::SET_PED_CONFIG_FLAG(Global_96385, 251, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Global_96385, 5, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Global_96385, 17, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(Global_96385, 512, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_96385, 1);
					AUDIO::SET_AMBIENT_VOICE_NAME(Global_96385, "A_M_M_EASTSA_02_LATINO_FULL_01");
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_96384, 1);
					VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(Global_96384, 1);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Global_96384, 0, 0);
					VEHICLE::_0xBE5C1255A1830FF5(Global_96384, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_28()//Position - 0x11CE
{
	int iVar0;
	int iVar1;
	
	if (func_24(&iLocal_276))
	{
		if (!iLocal_88)
		{
			if (iLocal_276 == Global_96384 && iLocal_54 == 4)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					if (!func_7("TX_H02"))
					{
						if (Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.TAXI_ENTER_HELP_PROMPT < 5)
						{
							func_29("TX_H02", -1);
							Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.TAXI_ENTER_HELP_PROMPT++;
						}
						iLocal_88 = 1;
					}
				}
			}
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (iVar0 == iLocal_276)
			{
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_276, -1);
				if (iLocal_54 == 4 || iLocal_54 == 2)
				{
					if (iLocal_276 != Global_96384)
					{
						func_5();
					}
				}
				func_20();
				if (func_27(&iLocal_276, &iVar1, 0))
				{
					if (iLocal_87)
					{
						if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
						{
							CAM::STOP_GAMEPLAY_HINT(0);
						}
						iLocal_87 = 0;
					}
					if (!PED::IS_PED_INJURED(Global_96385) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96384, 0))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(Global_96385, Global_96384))
						{
							if (!func_18(Global_96385, -2118855366))
							{
								TASK::TASK_VEHICLE_TEMP_ACTION(Global_96385, Global_96384, 1, 10000);
							}
						}
					}
					iLocal_88 = 0;
					iLocal_53 = 1;
				}
			}
		}
	}
	else if (func_7("TX_H02"))
	{
		HUD::CLEAR_HELP(1);
	}
}

void func_29(char* sParam0, int iParam1)//Position - 0x1304
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_30()//Position - 0x131B
{
	if (iLocal_54 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
		{
			iLocal_54 = 1;
		}
	}
	else if (iLocal_54 == 1)
	{
		func_57();
	}
	else if (iLocal_54 == 2)
	{
		func_48();
	}
	else if (iLocal_54 == 3)
	{
		func_42();
	}
	else if (iLocal_54 == 4)
	{
		func_31();
	}
}

void func_31()//Position - 0x136A
{
	if (func_41(&Global_96384, &Global_96385, iLocal_99, iLocal_98))
	{
		if (!func_35())
		{
			if (!func_18(Global_96385, -2118855366))
			{
				TASK::TASK_VEHICLE_TEMP_ACTION(Global_96385, Global_96384, 1, 1000000);
			}
			PED::SET_PED_CONFIG_FLAG(Global_96385, 251, 1);
			func_32();
			if (HUD::DOES_BLIP_EXIST(uLocal_92))
			{
				HUD::SET_BLIP_FLASH_TIMER(uLocal_92, 10000);
			}
		}
		else
		{
			func_5();
		}
	}
	else
	{
		func_5();
	}
}

void func_32()//Position - 0x13DE
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (iLocal_87)
		{
			if (func_33())
			{
				CAM::STOP_GAMEPLAY_HINT(0);
			}
		}
	}
}

int func_33()//Position - 0x13FE
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	func_34(&iVar0, &iVar1, &uVar2, &uVar3, 0);
	if (((iVar0 > 64 || iVar0 < -64) || iVar1 > 64) || iVar1 < -64)
	{
		return 1;
	}
	return 0;
}

void func_34(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x1443
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 218) * 127f));
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 220) * 127f));
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 221) * 127f));
		}
	}
}

int func_35()//Position - 0x1518
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	
	if (iLocal_54 == 4)
	{
		if (Global_96421 == -1 || Global_96421 == 0)
		{
			Global_96421 = MISC::GET_GAME_TIMER();
		}
		else if (func_40(Global_96421, 30000))
		{
			if (iLocal_53 == 0 || iLocal_53 == 3)
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_96384, 1))
				{
					return 1;
				}
			}
		}
	}
	if (func_38(Global_96384))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(Global_96384, 0) };
		if (iLocal_54 == 4)
		{
			if (!func_37(Local_273, Var0, 75f))
			{
				return 1;
			}
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_96384, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
		if (MISC::IS_BULLET_IN_AREA(Var0, 7f, 0))
		{
			return 1;
		}
		fVar3 = 15f;
		Var4 = { Var0 };
		Var7 = { Var4 };
		Var4.x = (Var4.x - fVar3);
		Var4.f_1 = (Var4.f_1 - fVar3);
		Var4.f_2 = (Var4.f_2 - fVar3);
		Var7.x = (Var7.x + fVar3);
		Var7.f_1 = (Var7.f_1 + fVar3);
		Var7.f_2 = (Var7.f_2 + fVar3);
		if (MISC::IS_PROJECTILE_IN_AREA(Var4, Var7, 1))
		{
			return 1;
		}
		if (func_37(Local_273, Var0, 20f))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Global_96384) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Global_96384))
			{
				return 1;
			}
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	if (func_36(Global_96385))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_96385, PLAYER::PLAYER_PED_ID(), 1))
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

int func_36(int iParam0)//Position - 0x16B3
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_37(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x16DD
{
	return SYSTEM::VDIST2(Param0, Param3) <= (fParam6 * fParam6);
}

int func_38(int iParam0)//Position - 0x16F7
{
	if (func_39(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_39(int iParam0)//Position - 0x1721
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_40(int iParam0, int iParam1)//Position - 0x1741
{
	return (MISC::GET_GAME_TIMER() - iParam0) > iParam1;
}

int func_41(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x1753
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				if (!PED::IS_PED_INJURED(*uParam1))
				{
					if (!PED::IS_PED_FLEEING(*uParam1))
					{
						if (!PED::IS_PED_IN_COMBAT(*uParam1, 0))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(*uParam1, *uParam0))
							{
								if (ENTITY::GET_ENTITY_MODEL(*uParam0) == iParam2)
								{
									if (PED::IS_PED_MODEL(*uParam1, iParam3))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_42()//Position - 0x17C6
{
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_269, "HAIL_TAXI", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_269, "FP_HAIL_TAXI", 3))
	{
		return;
	}
	else if (func_40(iLocal_96, 3000))
	{
		STREAMING::REQUEST_ANIM_DICT(&cLocal_269);
		if (STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_269))
		{
			if (func_43())
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 113, 1);
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) < 2)
				{
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_269, "FORGET_IT", 4f, -2f, -1, 48, 0, 0, 0, 0);
				}
				else
				{
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_269, "FUCK_U", 4f, -2f, -1, 48, 0, 0, 0, 0);
				}
			}
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 5) == 1)
			{
				if (!Global_35956)
				{
					iLocal_86 = 1;
				}
			}
			iLocal_96 = MISC::GET_GAME_TIMER();
			iLocal_97 = MISC::GET_GAME_TIMER();
			if (iLocal_91 == 1)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
				iLocal_91 = 0;
			}
			if (iLocal_94 != -1)
			{
				func_8(&iLocal_94);
			}
			iLocal_54 = 0;
		}
	}
}

int func_43()//Position - 0x18B6
{
	if (iLocal_53 != 0)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_FREE_FOR_AMBIENT_TASK(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (!Global_35956 && PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		return 0;
	}
	if (func_47(0))
	{
		return 0;
	}
	if (func_46())
	{
		return 0;
	}
	if (func_45())
	{
		return 0;
	}
	if (func_44())
	{
		return 0;
	}
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		return 0;
	}
	return 1;
}

bool func_44()//Position - 0x1965
{
	return MISC::GET_GAME_TIMER() <= Global_17236.f_5130 + 100;
}

bool func_45()//Position - 0x197A
{
	return Global_90014.f_291 > 0;
}

bool func_46()//Position - 0x198B
{
	return Global_67058;
}

int func_47(int iParam0)//Position - 0x1997
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_2263, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_48()//Position - 0x19F1
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	
	if (func_41(&Global_96384, &Global_96385, iLocal_99, iLocal_98))
	{
		bVar0 = false;
		if (PAD::IS_CONTROL_PRESSED(2, 23))
		{
			bVar0 = true;
		}
		if (func_40(iLocal_96, 1000))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -2017877118) == 7)
			{
				if (((!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_269, "HAIL_TAXI", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_269, "FP_HAIL_TAXI", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_269, "FUCK_U", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_269, "FORGET_IT", 3))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 242628503) == 7)
					{
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 113, 0);
						if (iLocal_91 == 1)
						{
							PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
							iLocal_91 = 0;
						}
						bVar0 = true;
					}
				}
			}
		}
		if (bVar0)
		{
			STREAMING::REQUEST_ANIM_DICT(&cLocal_269);
			if (STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_269))
			{
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10) < 8)
				{
					if (!func_53(0, 0))
					{
						bVar1 = AUDIO::IS_AMBIENT_SPEECH_DISABLED(PLAYER::PLAYER_PED_ID());
						if (bVar1)
						{
							AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 0);
						}
						func_51(PLAYER::PLAYER_PED_ID(), "TAXI_HAIL", 34);
						if (bVar1)
						{
							AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 1);
						}
					}
				}
				TASK::OPEN_SEQUENCE_TASK(&uVar2);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000, 2048, 2);
				if (func_50(Global_96384))
				{
					TASK::TASK_PLAY_ANIM(0, &cLocal_269, "Aknowledge_R", 8f, -4f, -1, 16785456, 0, 0, 0, 0);
				}
				else
				{
					TASK::TASK_PLAY_ANIM(0, &cLocal_269, "Aknowledge_L", 8f, -4f, -1, 16785456, 0, 0, 0, 0);
				}
				TASK::TASK_VEHICLE_MISSION(0, Global_96384, Global_96384, 22, 12f, 262275, 3f, 3f, 1);
				TASK::TASK_VEHICLE_MISSION(0, Global_96384, Global_96384, 5, 12f, 262275, 3f, 3f, 1);
				TASK::CLOSE_SEQUENCE_TASK(uVar2);
				TASK::TASK_PERFORM_SEQUENCE(Global_96385, uVar2);
				TASK::CLEAR_SEQUENCE_TASK(&uVar2);
				func_49();
				iLocal_54 = 4;
			}
		}
	}
	else
	{
		func_5();
	}
}

void func_49()//Position - 0x1BD5
{
	if (HUD::DOES_BLIP_EXIST(uLocal_92))
	{
		HUD::SET_BLIP_ROUTE(uLocal_92, 0);
		HUD::REMOVE_BLIP(&uLocal_92);
	}
	if (func_38(Global_96384))
	{
		if (!HUD::DOES_BLIP_EXIST(uLocal_92))
		{
			uLocal_92 = HUD::ADD_BLIP_FOR_ENTITY(Global_96384);
			HUD::SET_BLIP_SPRITE(uLocal_92, 198);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_92, "TXM_BLIP");
			HUD::SET_BLIP_FLASHES(uLocal_92, 1);
			HUD::SET_BLIP_FLASH_TIMER(uLocal_92, 10000);
		}
	}
}

int func_50(int iParam0)//Position - 0x1C33
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
		Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 1f, 0f, 0f) };
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			Var6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		}
		Var9 = { Var3 - Var0 };
		Var12 = { Var6 - Var0 };
		if (MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var9.x, Var9.f_1, Var12.x, Var12.f_1) < 90f)
		{
			return 1;
		}
	}
	return 0;
}

void func_51(int iParam0, char* sParam1, int iParam2)//Position - 0x1CAD
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, func_52(iParam2), 1);
}

int func_52(int iParam0)//Position - 0x1CC4
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

int func_53(int iParam0, bool bParam1)//Position - 0x1EB4
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iParam0))
		{
			func_55("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(DriverID)\n");
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
		{
			func_55("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(PLAYER_PED_ID())\n");
			return 1;
		}
	}
	if (func_54())
	{
		func_55("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_ANY_CONVERSATION_ONGOING_OR_QUEUED()\n");
		return 1;
	}
	if (bParam1)
	{
		if (HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			func_55("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_MESSAGE_BEING_DISPLAYED()\n");
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::DOES_GROUP_EXIST(func_12()))
		{
			PED::GET_GROUP_SIZE(func_12(), &iVar2, &iVar1);
			if (iVar1 > 0)
			{
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar0 = PED::GET_PED_AS_GROUP_MEMBER(func_12(), iVar2);
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iVar0))
						{
							func_55("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(TempGroupPedID)\n");
							return 1;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return 0;
}

int func_54()//Position - 0x1F8F
{
	if (Global_15692 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_55(char* sParam0)//Position - 0x1FB1
{
	func_56(sParam0);
}

void func_56(char* sParam0)//Position - 0x1FBF
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sParam0))
	{
	}
}

void func_57()//Position - 0x1FD2
{
	int iVar0;
	
	func_63();
	func_32();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
	{
		if (func_21(&iLocal_277, iLocal_99, iLocal_98))
		{
			if (func_43())
			{
				STREAMING::REQUEST_ANIM_DICT(&cLocal_269);
				if (STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_269))
				{
					if (((!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_269, "HAIL_TAXI", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_269, "FP_HAIL_TAXI", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_269, "FUCK_U", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_269, "FORGET_IT", 3))
					{
						if (!func_62(&iLocal_277))
						{
							if (!VEHICLE::IS_TAXI_LIGHT_ON(iLocal_277))
							{
								VEHICLE::SET_TAXI_LIGHTS(iLocal_277, 1);
							}
						}
						if (iLocal_94 == -1)
						{
							func_61(&iLocal_94, 0, "TXM_H01", 1, 0);
						}
						if (func_60(iLocal_94, 1))
						{
							if (func_7("TXM_H01"))
							{
								HUD::CLEAR_HELP(1);
							}
							if (iLocal_91 == 0)
							{
								PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 0);
								iLocal_91 = 1;
							}
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_277, 5000, 0, 2);
							func_59();
							func_58();
							iLocal_96 = MISC::GET_GAME_TIMER();
							func_8(&iLocal_94);
							if (func_62(&iLocal_277))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, 0))
								{
									VEHICLE::SET_TAXI_LIGHTS(iLocal_277, 0);
								}
								iLocal_87 = 0;
								iLocal_54 = 3;
							}
							else
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_277, -1);
								if (func_27(&iLocal_277, &iVar0, 0))
								{
									iLocal_277 = 0;
									TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Global_96384, 5000, 0, 2);
									Global_96421 = MISC::GET_GAME_TIMER();
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96384, 0))
									{
										if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
										{
											CAM::SET_GAMEPLAY_VEHICLE_HINT(Global_96384, 0f, 0f, 0f, 1, 4000, 2000, 2000);
											iLocal_87 = 1;
										}
									}
									Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.TAXI_HAIL_HELP_PROMPT = 1;
									iLocal_54 = 2;
								}
							}
						}
					}
				}
			}
		}
		else
		{
			func_5();
		}
	}
	else
	{
		func_5();
	}
}

void func_58()//Position - 0x2184
{
	PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 16, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 17, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 12, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 13, 1);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 113, 1);
}

void func_59()//Position - 0x21C7
{
	var uVar0;
	bool bVar1;
	struct<20> Var2;
	struct<22> Var24;
	int iVar46;
	int iVar47;
	
	bVar1 = AUDIO::IS_AMBIENT_SPEECH_DISABLED(PLAYER::PLAYER_PED_ID());
	TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	if (!Global_35956)
	{
		Var2.f_4 = 1065353216;
		Var2.f_5 = 1065353216;
		Var2.f_9 = 1065353216;
		Var2.f_10 = 1065353216;
		Var2.f_14 = 1065353216;
		Var2.f_15 = 1065353216;
		Var2.f_17 = 1040187392;
		Var2.f_18 = 1040187392;
		Var2.f_19 = -1;
		Var24.f_4 = 1065353216;
		Var24.f_5 = 1065353216;
		Var24.f_9 = 1065353216;
		Var24.f_10 = 1065353216;
		Var24.f_14 = 1065353216;
		Var24.f_15 = 1065353216;
		Var24.f_17 = 1040187392;
		Var24.f_18 = 1040187392;
		Var24.f_19 = -1;
		iVar46 = 0;
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
		{
			Var24 = 1;
			Var24.f_2 = "FP_HAIL_TAXI";
			Var24.f_1 = "TAXI_HAIL";
			Var24.f_3 = 0f;
			Var24.f_4 = 1f;
			Var24.f_16 = MISC::GET_HASH_KEY("UpperbodyAndIk_filter");
			iVar46 += 16;
			iVar46 += 32;
			iVar46 += 8192;
			Var24.f_20 = iVar46;
			Var24.f_21 = 1024;
		}
		else
		{
			Var24 = 1;
			Var24.f_2 = "HAIL_TAXI";
			Var24.f_1 = "TAXI_HAIL";
			Var24.f_3 = 0f;
			Var24.f_4 = 1f;
			Var24.f_16 = MISC::GET_HASH_KEY("BONEMASK_HEAD_NECK_AND_L_ARM");
			iVar46 += 32;
			iVar46 += 8192;
			Var24.f_20 = iVar46;
		}
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar47, 1);
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7) || (MISC::ARE_STRINGS_EQUAL(Var24.f_2, "FP_HAIL_TAXI") && iVar47 == joaat("weapon_petrolcan")))
		{
			if (iVar47 != joaat("weapon_petrolcan") || !MISC::ARE_STRINGS_EQUAL(Var24.f_2, "FP_HAIL_TAXI"))
			{
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 113, 1);
			}
			TASK::OPEN_SEQUENCE_TASK(&uVar0);
			TASK::TASK_SWAP_WEAPON(0, 0);
			TASK::TASK_SCRIPTED_ANIMATION(0, &Var24, &Var2, &Var2, 0.25f, 0.25f);
			TASK::CLOSE_SEQUENCE_TASK(uVar0);
			TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar0);
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
		}
		else
		{
			TASK::TASK_SCRIPTED_ANIMATION(PLAYER::PLAYER_PED_ID(), &Var24, &Var2, &Var2, 0.25f, 0.25f);
		}
	}
	else
	{
		if (bVar1)
		{
			AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 0);
		}
		func_51(PLAYER::PLAYER_PED_ID(), "TAXI_HAIL_DRUNK", 7);
		if (bVar1)
		{
			AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 1);
		}
	}
}

int func_60(int iParam0, bool bParam1)//Position - 0x2407
{
	int iVar0;
	
	iVar0 = func_9(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_47(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_35613[iVar0 /*18*/] == 1 && Global_35613[iVar0 /*18*/].f_3 == 1)
		{
			if (bParam1)
			{
				if (Global_35613[iVar0 /*18*/].f_16)
				{
					return 0;
				}
			}
			Global_35613[iVar0 /*18*/].f_4 = 1;
			Global_35613[iVar0 /*18*/].f_16 = 1;
			return 1;
		}
		else
		{
			if (Global_35613[iVar0 /*18*/] == 0)
			{
			}
			if (Global_35613[iVar0 /*18*/].f_6)
			{
			}
		}
	}
	return 0;
}

void func_61(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4)//Position - 0x24BF
{
	int iVar0;
	
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_8(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_35613[iVar0 /*18*/])
		{
			Global_35613[iVar0 /*18*/] = 1;
			Global_35613[iVar0 /*18*/].f_1 = Global_35730;
			Global_35730++;
			Global_35613[iVar0 /*18*/].f_3 = 0;
			Global_35613[iVar0 /*18*/].f_16 = 0;
			Global_35613[iVar0 /*18*/].f_4 = 0;
			Global_35613[iVar0 /*18*/].f_2 = iParam1;
			StringCopy(&(Global_35613[iVar0 /*18*/].f_7), sParam2, 16);
			Global_35613[iVar0 /*18*/].f_5 = iParam3;
			Global_35613[iVar0 /*18*/].f_17 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_35613[iVar0 /*18*/].f_6 = 0;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_35613[iVar0 /*18*/].f_11 = 1;
				StringCopy(&(Global_35613[iVar0 /*18*/].f_12), sParam4, 16);
			}
			else
			{
				Global_35613[iVar0 /*18*/].f_11 = 0;
			}
			*iParam0 = Global_35613[iVar0 /*18*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_62(int iParam0)//Position - 0x25CA
{
	int iVar0;
	
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam0, 1))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, 1);
		if (!iVar0 == PLAYER::PLAYER_PED_ID())
		{
			if (!PED::IS_PED_GROUP_MEMBER(iVar0, func_12()))
			{
				if (VEHICLE::IS_TAXI_LIGHT_ON(*iParam0))
				{
					VEHICLE::SET_TAXI_LIGHTS(*iParam0, 0);
				}
				return 1;
			}
		}
	}
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam0, 2))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, 2);
		if (!iVar0 == PLAYER::PLAYER_PED_ID())
		{
			if (!PED::IS_PED_GROUP_MEMBER(iVar0, func_12()))
			{
				if (VEHICLE::IS_TAXI_LIGHT_ON(*iParam0))
				{
					VEHICLE::SET_TAXI_LIGHTS(*iParam0, 0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_63()//Position - 0x265D
{
	bool bVar0;
	
	if (iLocal_86)
	{
		if (func_40(iLocal_97, 1000))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -2017877118) == 7)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 242628503) == 7)
				{
					if (((!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_269, "HAIL_TAXI", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_269, "FP_HAIL_TAXI", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_269, "FUCK_U", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_269, "FORGET_IT", 3))
					{
						if (!Global_35956)
						{
							bVar0 = AUDIO::IS_AMBIENT_SPEECH_DISABLED(PLAYER::PLAYER_PED_ID());
							if (!bVar0)
							{
								AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 1);
							}
							func_51(PLAYER::PLAYER_PED_ID(), "TAXI_DRIVES_PAST", 24);
							if (!bVar0)
							{
								AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 0);
							}
						}
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 113, 0);
						if (iLocal_91 == 1)
						{
							PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
							iLocal_91 = 0;
						}
						iLocal_86 = 0;
					}
				}
			}
		}
	}
}

void func_64()//Position - 0x2747
{
	if (iLocal_52 != 0)
	{
		if (func_105())
		{
			func_13();
		}
	}
	if (iLocal_52 == 0)
	{
	}
	else if (iLocal_52 == 1)
	{
		func_97();
	}
	else if (iLocal_52 == 2)
	{
		func_73();
	}
	else if (iLocal_52 == 3)
	{
		func_65();
	}
}

void func_65()//Position - 0x278D
{
	if (func_66())
	{
		if (iLocal_53 == 0 && iLocal_54 != 4)
		{
			func_5();
			if (func_27(&Local_55, &(Local_55.f_1), 0))
			{
				Global_96421 = 0;
				if (func_38(Global_96384))
				{
					VEHICLE::START_VEHICLE_HORN(Global_96384, 2500, MISC::GET_HASH_KEY("NORMAL"), 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Global_96385))
				{
					if (!PED::IS_PED_INJURED(Global_96385))
					{
						TASK::TASK_LOOK_AT_ENTITY(Global_96385, PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Global_96385, 3000, 0, 2);
					}
				}
				func_49();
				iLocal_54 = 4;
				func_13();
			}
			else
			{
				func_13();
			}
		}
	}
}

int func_66()//Position - 0x282D
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(Local_55, 0) };
	if (!Local_55.f_2)
	{
		if (!Local_55.f_3)
		{
			if (func_67(Var0, Local_55.f_14, Local_55.f_6, &(Local_55.f_17), &(Local_55.f_6)))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_55.f_1))
				{
					PED::SET_DRIVER_ABILITY(Local_55.f_1, 0.5f);
					if (Local_55.f_4)
					{
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_55.f_1, Local_55, Local_55.f_17, 10f, 0, ENTITY::GET_ENTITY_MODEL(Local_55), Local_55.f_29, 5f, MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_55.f_17, 1));
						Local_55.f_4 = 0;
					}
					else
					{
						TASK::TASK_VEHICLE_PARK(Local_55.f_1, Local_55, Local_55.f_17, Local_55.f_6, 3, 90f, 1);
					}
				}
				Local_55.f_2 = 1;
			}
		}
		else
		{
			PED::SET_DRIVER_ABILITY(Local_55.f_1, 0.5f);
			Local_55.f_17 = { Var0 };
			TASK::TASK_VEHICLE_TEMP_ACTION(Local_55.f_1, Local_55, 6, 15000);
			Local_55.f_2 = 1;
		}
	}
	else if (!func_18(Local_55.f_1, -272084098))
	{
		if (VEHICLE::IS_VEHICLE_STOPPED(Local_55))
		{
			TASK::TASK_VEHICLE_TEMP_ACTION(Local_55.f_1, Local_55, 1, 1000000);
			return 1;
		}
	}
	else
	{
		if (func_37(Var0, Local_273, 5f))
		{
			if (VEHICLE::IS_VEHICLE_STOPPED(Local_55) || VEHICLE::IS_VEHICLE_STOPPED_AT_TRAFFIC_LIGHTS(Local_55))
			{
				TASK::TASK_VEHICLE_TEMP_ACTION(Local_55.f_1, Local_55, 1, 1000000);
				return 1;
			}
		}
		if (!Local_55.f_3)
		{
			if (!func_37(Var0, Local_55.f_17, 10f))
			{
				if (func_37(Var0, Local_273, 5f))
				{
					Local_55.f_14 = { Local_273 };
					Local_55.f_3 = 1;
					Local_55.f_2 = 0;
				}
			}
		}
	}
	return 0;
}

int func_67(struct<3> Param0, struct<3> Param3, var uParam6, var uParam7, var uParam8)//Position - 0x29C4
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	var uVar9;
	int iVar10;
	struct<3> Var11;
	struct<3> Var14;
	struct<3> Var17;
	float fVar20;
	
	iVar10 = 1;
	if (!func_72(Param3))
	{
		iVar10 = 9;
	}
	uVar9 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(Param3, 1, iVar10, 1077936128, 0);
	if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(uVar9))
	{
		PATHFIND::GET_VEHICLE_NODE_POSITION(uVar9, &Var0);
		if (PATHFIND::_GET_POINT_ON_ROAD_SIDE(Var0, 0, &Var3) && PATHFIND::_GET_POINT_ON_ROAD_SIDE(Var0, 1, &Var6))
		{
			Var11 = { Var3 - Var0 };
			Var14 = { -Var11.f_1, Var11.x, 0f };
			Var17 = { Param0 - Param3 };
			fVar20 = func_71(Var14, Var17);
			if (fVar20 < 0f)
			{
				*uParam7 = { Var3 };
				*uParam8 = uParam6;
				if (func_69(uParam7, Var0))
				{
					Local_55.f_4 = 1;
				}
			}
			else
			{
				*uParam7 = { Var6 };
				*uParam8 = (*uParam8 + 180f);
				*uParam8 = func_68(*uParam8, 0f, 360f);
				if (func_69(uParam7, Var0))
				{
					Local_55.f_4 = 1;
				}
			}
			return 1;
		}
		else if (PATHFIND::_GET_POINT_ON_ROAD_SIDE(Var0, -1, &Var3))
		{
			*uParam7 = { Var3 };
			*uParam8 = uParam6;
			return 1;
		}
	}
	return 0;
}

float func_68(float fParam0, float fParam1, float fParam2)//Position - 0x2AE1
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_69(var uParam0, struct<3> Param1)//Position - 0x2B23
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	
	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam0, uParam0->f_1, 1000f, &uVar0))
	{
		*uParam0 = { Param1 };
		return 0;
	}
	Var1 = { *uParam0, uParam0->f_1, uVar0 };
	if (func_70(Var1, Param1))
	{
		Var4 = { Param1 - Var1 / Vector(5f, 5f, 5f) };
		iVar7 = 1;
		while (iVar7 <= 5)
		{
			Var1 = { Var1 + Var4 };
			if (!func_70(Var1, Param1))
			{
				*uParam0 = { Var1 };
				return 1;
			}
			iVar7++;
		}
		*uParam0 = { Param1 };
		return 1;
	}
	return 0;
}

int func_70(struct<3> Param0, struct<3> Param3)//Position - 0x2BC1
{
	if ((Param0.f_2 - Param3.f_2) > 0.45f || (Param0.f_2 - Param3.f_2) < -0.45f)
	{
		return 1;
	}
	return 0;
}

float func_71(struct<3> Param0, struct<3> Param3)//Position - 0x2BF5
{
	return (((Param0.x * Param3.x) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_72(struct<3> Param0)//Position - 0x2C16
{
	var uVar0;
	
	uVar0 = ZONE::GET_NAME_OF_ZONE(Param0);
	if (((((((((((((((((((((((((((((((((((((((((((((MISC::ARE_STRINGS_EQUAL("SanAnd", uVar0) || MISC::ARE_STRINGS_EQUAL("Alamo", sVar0)) || MISC::ARE_STRINGS_EQUAL("ArmyB", sVar0)) || MISC::ARE_STRINGS_EQUAL("BhamCa", sVar0)) || MISC::ARE_STRINGS_EQUAL("Baytre", sVar0)) || MISC::ARE_STRINGS_EQUAL("BradT", sVar0)) || MISC::ARE_STRINGS_EQUAL("BradP", sVar0)) || MISC::ARE_STRINGS_EQUAL("CANNY", sVar0)) || MISC::ARE_STRINGS_EQUAL("CCreak", sVar0)) || MISC::ARE_STRINGS_EQUAL("ChamH", sVar0)) || MISC::ARE_STRINGS_EQUAL("CHU", sVar0)) || MISC::ARE_STRINGS_EQUAL("COSI", sVar0)) || MISC::ARE_STRINGS_EQUAL("CMSW", sVar0)) || MISC::ARE_STRINGS_EQUAL("Cypre", sVar0)) || MISC::ARE_STRINGS_EQUAL("Desrt", sVar0)) || MISC::ARE_STRINGS_EQUAL("ELGorl", sVar0)) || MISC::ARE_STRINGS_EQUAL("Galli", sVar0)) || MISC::ARE_STRINGS_EQUAL("Galfish", sVar0)) || MISC::ARE_STRINGS_EQUAL("Harmo", sVar0)) || MISC::ARE_STRINGS_EQUAL("HumLab", sVar0)) || MISC::ARE_STRINGS_EQUAL("Jail", sVar0)) || MISC::ARE_STRINGS_EQUAL("LAct", sVar0)) || MISC::ARE_STRINGS_EQUAL("LDam", sVar0)) || MISC::ARE_STRINGS_EQUAL("Lago", sVar0)) || MISC::ARE_STRINGS_EQUAL("MTChil", sVar0)) || MISC::ARE_STRINGS_EQUAL("MTJose", sVar0)) || MISC::ARE_STRINGS_EQUAL("MTGordo", sVar0)) || MISC::ARE_STRINGS_EQUAL("NCHU", sVar0)) || MISC::ARE_STRINGS_EQUAL("Oceana", sVar0)) || MISC::ARE_STRINGS_EQUAL("Palmpow", sVar0)) || MISC::ARE_STRINGS_EQUAL("PBluff", sVar0)) || MISC::ARE_STRINGS_EQUAL("Paleto", sVar0)) || MISC::ARE_STRINGS_EQUAL("PalCov", sVar0)) || MISC::ARE_STRINGS_EQUAL("PalFor", sVar0)) || MISC::ARE_STRINGS_EQUAL("PalHigh", sVar0)) || MISC::ARE_STRINGS_EQUAL("RTRAK", sVar0)) || MISC::ARE_STRINGS_EQUAL("Rancho", sVar0)) || MISC::ARE_STRINGS_EQUAL("SANDY", sVar0)) || MISC::ARE_STRINGS_EQUAL("TongvaH", sVar0)) || MISC::ARE_STRINGS_EQUAL("TongvaV", sVar0)) || MISC::ARE_STRINGS_EQUAL("Zenora", sVar0)) || MISC::ARE_STRINGS_EQUAL("Slab", sVar0)) || MISC::ARE_STRINGS_EQUAL("WindF", sVar0)) || MISC::ARE_STRINGS_EQUAL("Zancudo", sVar0)) || MISC::ARE_STRINGS_EQUAL("SanChia", sVar0)) || MISC::ARE_STRINGS_EQUAL("zQ_UAR", sVar0))
	{
		return 1;
	}
	return 0;
}

void func_73()//Position - 0x2F0A
{
	if (func_74())
	{
		Local_55.f_2 = 0;
		iLocal_52 = 3;
	}
}

int func_74()//Position - 0x2F21
{
	struct<3> Var0;
	
	if (!Local_55.f_2)
	{
		if (func_75(Local_55.f_20, &(Local_55.f_14), &(Local_55.f_6), &(Local_55.f_8), 250))
		{
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_55.f_1, Local_55, Local_55.f_14, 12f, 0, ENTITY::GET_ENTITY_MODEL(Local_55), Local_55.f_29, (Local_55.f_7 - 20f), 20f);
			Local_55.f_2 = 1;
		}
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(Local_55, 1) };
		if (func_37(Var0, Local_55.f_14, Local_55.f_7))
		{
			return 1;
		}
		else if (func_37(Var0, Local_273, 5f))
		{
			Local_55.f_14 = { Local_273 };
			return 1;
		}
		else if (!func_18(Local_55.f_1, -1817882002))
		{
			Local_55.f_2 = 0;
			Local_55.f_8 = 0;
		}
	}
	return 0;
}

int func_75(struct<3> Param0, var uParam3, var uParam4, var uParam5, int iParam6)//Position - 0x2FE9
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	
	fVar0 = 3f;
	fVar1 = 2.5f;
	iVar3 = 0;
	iVar6 = *uParam5 + 2;
	iVar7 = 50;
	bVar8 = false;
	iVar9 = 1;
	if (!func_72(Param0))
	{
		iVar9 = 9;
	}
	func_95(Param0, Param0, &(Local_55.f_23), &(Local_55.f_26), iParam6);
	if (func_94(Local_55.f_23, Local_55.f_26))
	{
		if (!func_78(Param0, uParam3, uParam4, 1))
		{
			while (!bVar8 && *uParam5 < iVar6)
			{
				if (Param0.f_2 == 1f)
				{
					fVar0 = 0f;
				}
				if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param0, *uParam5, uParam3, uParam4, &uVar4, iVar9, fVar0, fVar1))
				{
					uVar5 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(*uParam3, 1, iVar9, 1077936128, 0);
					if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(uVar5))
					{
						fVar2 = (Param0.f_2 - uParam3->f_2);
						if (fVar2 < 0f)
						{
							fVar2 = (fVar2 * -1f);
						}
						if (func_77(Param0, *uParam3) || fVar2 < 0.5f)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_55, 0))
							{
								iVar3 = Local_55;
							}
							if (!MISC::IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(*uParam3, 3f, 3f, 3f, iVar3))
							{
								bVar8 = true;
							}
						}
					}
				}
				*uParam5++;
				if (*uParam5 >= iVar7)
				{
					bVar8 = true;
				}
			}
		}
		else
		{
			bVar8 = true;
		}
		if (bVar8)
		{
			Local_55.f_5 = func_76(Param0, *uParam3);
			return 1;
		}
	}
	return 0;
}

var func_76(struct<3> Param0, struct<3> Param3)//Position - 0x3148
{
	struct<3> Var0;
	
	Var0 = { Param0 - Param3 };
	Var0.f_2 = 0f;
	return SYSTEM::VMAG(Var0);
}

int func_77(struct<3> Param0, struct<3> Param3)//Position - 0x316A
{
	float fVar0;
	float fVar1;
	
	fVar1 = (Param3.f_2 - Param0.f_2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 * -1f);
	}
	if (Param0.f_2 <= 1f)
	{
		func_55("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - vCoord1.z <= 1, probably a waypoint blip - RETURN TRUE\n");
		return 1;
	}
	fVar0 = SYSTEM::VDIST(Param0, Param3);
	fVar0 = (fVar0 / 1.75f);
	if (fVar1 < fVar0)
	{
		func_55("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - fTemp < acceptableHeight, RETURN TRUE\n");
		return 1;
	}
	return 0;
}

int func_78(struct<3> Param0, var uParam3, var uParam4, int iParam5)//Position - 0x31CC
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4[6];
	int iVar23;
	float fVar24;
	float fVar25;
	int iVar26;
	struct<3> Var27;
	float fVar30;
	float fVar31;
	struct<3> Var32;
	float fVar35;
	float fVar36;
	bool bVar37;
	
	if (func_93(Param0, 1900f, -6600f, 100f, 6900f, -3600f, 140f))
	{
		*uParam3 = { 1261.58f, -3332.685f, 5.4191f };
		*uParam4 = 163.87f;
		return 1;
	}
	else if (func_93(Param0, -3800f, 5400f, -100f, -1900f, 8500f, 100f))
	{
		*uParam3 = { -1577.16f, 5166.51f, 19.1864f };
		*uParam4 = 0f;
		return 1;
	}
	else if (func_93(Param0, -874.9833f, 125.7645f, -100f, -768.6254f, 193.0297f, 100f))
	{
		*uParam3 = { -856.6151f, 163.7361f, 65.093f };
		*uParam4 = 355.3355f;
		return 1;
	}
	else if (func_93(Param0, -39.2005f, -1473.55f, -100f, 10.6133f, -1430.099f, 100f))
	{
		*uParam3 = { -15.5181f, -1456.4f, 29.4244f };
		*uParam4 = 94.6893f;
		return 1;
	}
	else if (func_93(Param0, 1964.742f, 3792.59f, -100f, 1992.636f, 3840.253f, 100f))
	{
		*uParam3 = { 1996.372f, 3818.831f, 31.1612f };
		*uParam4 = 170.0221f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -68.2187f, -1086.951f, -100f, -10.54518f, -1106.895f, 100f, 43.5f, 0, 1))
	{
		*uParam3 = { -63.5854f, -1074.732f, 26.0995f };
		*uParam4 = 324.1257f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 398.7899f, -1651.417f, -100f, 423.8372f, -1619.432f, 100f, 45f, 0, 1))
	{
		*uParam3 = { 416.871f, -1613.081f, 28.1401f };
		*uParam4 = 227.9333f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -988.8535f, -2553.177f, -100f, -1041.486f, -2644.97f, 100f, 49.75f, 0, 1) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*uParam3 = { -1039.542f, -2574.467f, 12.7566f };
		*uParam4 = 162.2744f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -906.902f, -2600.461f, -100f, -959.7651f, -2692.057f, 100f, 49.75f, 0, 1) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*uParam3 = { -911.1597f, -2676.132f, 12.7567f };
		*uParam4 = 338.9414f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -209.3372f, -2011.099f, 26.62037f, -257.2225f, -2076.963f, 36.62037f, 30f, 0, 1))
	{
		*uParam3 = { -211.8546f, -2030.771f, 26.6204f };
		*uParam4 = 154.4302f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 159f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -804.05f, 4216.412f, 204.4872f, -509.0679f, 4135.19f, 123.2502f, 250f, 0, 1))
	{
		*uParam3 = { -623.3622f, 3996f, 120.7669f };
		*uParam4 = 37.8784f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 180f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -2203.167f, 183.3549f, 167.4022f, -2311.587f, 434.3828f, 195.4669f, 138.5f, 0, 1))
	{
		*uParam3 = { -2294.945f, 376.2506f, 173.4669f };
		*uParam4 = 296.6963f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 10f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -2041.478f, -553.2159f, -0.089962f, -1787.08f, -768.0886f, 37.99918f, 220f, 0, 1))
	{
		*uParam3 = { -1897.077f, -557.3334f, 10.7279f };
		*uParam4 = 228.7709f;
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1882.883f, -541.7442f, 4.675224f, -1929.626f, -598.6026f, 40.4298f, 35f, 0, 1))
		{
			return 1;
		}
		else
		{
			Var4[0 /*3*/] = { -1962.468f, -503.4229f, 10.8349f };
			Var4[1 /*3*/] = { -1924.472f, -534.7357f, 10.8181f };
			Var4[2 /*3*/] = { -1896.324f, -557.768f, 10.7256f };
			Var4[3 /*3*/] = { -1850.661f, -595.8367f, 10.4649f };
			Var4[4 /*3*/] = { -1809f, -632.1207f, 10.0016f };
			Var4[5 /*3*/] = { -1745.043f, -694.4053f, 9.1245f };
			iVar23 = -1;
			fVar24 = 99999f;
			iVar26 = 0;
			while (iVar26 <= 5)
			{
				fVar25 = SYSTEM::VDIST(Var4[iVar26 /*3*/], Var1);
				if (fVar25 < fVar24)
				{
					fVar24 = fVar25;
					iVar23 = iVar26;
				}
				iVar26++;
			}
			*uParam3 = { Var4[iVar23 /*3*/] };
			if (iVar23 == 0)
			{
				*uParam4 = 234.3999f;
			}
			else if (iVar23 == 1)
			{
				*uParam4 = 232.2255f;
			}
			else if (iVar23 == 2)
			{
				*uParam4 = 228.2855f;
			}
			else if (iVar23 == 3)
			{
				*uParam4 = 231.4914f;
			}
			else if (iVar23 == 4)
			{
				*uParam4 = 230.6703f;
			}
			else if (iVar23 == 5)
			{
				*uParam4 = 228.7709f;
			}
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 330f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -446.12f, 1057.452f, 318.6169f, -405.8336f, 1194.486f, 337.0966f, 106.25f, 0, 1))
	{
		*uParam3 = { -411.3629f, 1174.587f, 324.6421f };
		*uParam4 = 255.2881f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1362.091f, -29.26777f, -100f, -1377.953f, 152.2389f, 100f, 50f, 0, 1))
	{
		iVar0 = (iParam5 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam3 = { -1380.101f, 95.1566f, 53.5054f };
				*uParam4 = 4.555f;
				break;
			
			case 2:
				*uParam3 = { -1379.139f, 84.2472f, 53.0592f };
				*uParam4 = 6.9278f;
				break;
			
			case 3:
				*uParam3 = { -1378.427f, 74.5077f, 52.6622f };
				*uParam4 = 2.6813f;
				break;
			
			case 4:
				*uParam3 = { -1384.177f, 73.9207f, 52.7438f };
				*uParam4 = 5.542f;
				break;
			
			case 5:
				*uParam3 = { -1381.118f, 35.7838f, 52.659f };
				*uParam4 = 7.6687f;
				break;
			
			case 6:
				*uParam3 = { -1383.741f, 64.1491f, 52.6647f };
				*uParam4 = 2.5572f;
				break;
			
			case 7:
				*uParam3 = { -1382.616f, 49.6876f, 52.6585f };
				*uParam4 = 3.0185f;
				break;
			
			default:
				*uParam3 = { -1383.299f, 54.4598f, 52.6562f };
				*uParam4 = 6.2155f;
				break;
		}
		return 1;
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 48.31006f, -1120.669f, 28.0305f, -12.12345f, -1112.084f, 36.08567f, 60f, 0, 1))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { 50.9889f, -1092.525f, 28.2152f };
					*uParam4 = 150.8833f;
					break;
				
				case 2:
					*uParam3 = { 46.7725f, -1099.751f, 28.1639f };
					*uParam4 = 149.4322f;
					break;
				
				case 3:
					*uParam3 = { 41.6146f, -1107.742f, 28.1318f };
					*uParam4 = 154.1378f;
					break;
				
				case 4:
					*uParam3 = { 38.1922f, -1113.394f, 28.1507f };
					*uParam4 = 146.3778f;
					break;
				
				case 5:
					*uParam3 = { 13.0436f, -1124.767f, 27.7359f };
					*uParam4 = 91.163f;
					break;
				
				case 6:
					*uParam3 = { 1.4336f, -1125.042f, 27.1705f };
					*uParam4 = 91.0578f;
					break;
				
				case 7:
					*uParam3 = { -11.1811f, -1125.811f, 26.3688f };
					*uParam4 = 91.866f;
					break;
				
				default:
					*uParam3 = { 21.9431f, -1124.573f, 27.9417f };
					*uParam4 = 91.6961f;
					break;
			}
			return 1;
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1061.018f, -2540.235f, 18.66932f, -1023.332f, -2562.115f, 31.57616f, 250f, 0, 1))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { -1023.982f, -2489.882f, 19.0755f };
					*uParam4 = 148.7004f;
					break;
				
				case 2:
					*uParam3 = { -1029.968f, -2500.438f, 19.0803f };
					*uParam4 = 148.7144f;
					break;
				
				case 3:
					*uParam3 = { -1070.546f, -2570.859f, 19.0836f };
					*uParam4 = 150.0955f;
					break;
				
				case 4:
					*uParam3 = { -1056.065f, -2545.662f, 19.0809f };
					*uParam4 = 149.5649f;
					break;
				
				case 5:
					*uParam3 = { -1050.578f, -2536.219f, 19.0824f };
					*uParam4 = 150.7363f;
					break;
				
				case 6:
					*uParam3 = { -1036.032f, -2510.902f, 19.0794f };
					*uParam4 = 147.2113f;
					break;
				
				case 7:
					*uParam3 = { -1044.487f, -2525.534f, 19.079f };
					*uParam4 = 150.7597f;
					break;
				
				default:
					*uParam3 = { -1064.5f, -2560.653f, 19.0905f };
					*uParam4 = 150.7081f;
					break;
			}
			return 1;
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1061.059f, -2540.254f, 10.94467f, -1023.297f, -2562.052f, 18.51685f, 250f, 0, 1))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { -1044.741f, -2528.786f, 12.7568f };
					*uParam4 = 150.9439f;
					break;
				
				case 2:
					*uParam3 = { -1050.763f, -2539.498f, 12.7566f };
					*uParam4 = 150.851f;
					break;
				
				case 3:
					*uParam3 = { -1054.952f, -2546.86f, 12.7566f };
					*uParam4 = 149.9285f;
					break;
				
				case 4:
					*uParam3 = { -1060.397f, -2556.898f, 12.6066f };
					*uParam4 = 150.8244f;
					break;
				
				case 5:
					*uParam3 = { -1020.744f, -2490.084f, 12.6396f };
					*uParam4 = 148.6134f;
					break;
				
				case 6:
					*uParam3 = { -1076.904f, -2589.179f, 12.6858f };
					*uParam4 = 149.0112f;
					break;
				
				case 7:
					*uParam3 = { -1026.387f, -2501.952f, 12.6923f };
					*uParam4 = 149.7553f;
					break;
				
				default:
					*uParam3 = { -1070.506f, -2578.389f, 12.6932f };
					*uParam4 = 148.5232f;
					break;
			}
			return 1;
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1043.364f, -2747.29f, 16.96057f, -991.5368f, -2657.682f, 69.12349f, 200f, 0, 1))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { -1067.846f, -2708.94f, 19.0588f };
					*uParam4 = 230.9025f;
					break;
				
				case 2:
					*uParam3 = { -1058.224f, -2716.217f, 19.06f };
					*uParam4 = 237.1285f;
					break;
				
				case 3:
					*uParam3 = { -1004.567f, -2744.797f, 19.0811f };
					*uParam4 = 255.6885f;
					break;
				
				case 4:
					*uParam3 = { -1049.509f, -2721.58f, 19.0546f };
					*uParam4 = 242.3581f;
					break;
				
				case 5:
					*uParam3 = { -1017.154f, -2740.117f, 19.0525f };
					*uParam4 = 243.5798f;
					break;
				
				case 6:
					*uParam3 = { -1042.087f, -2726.077f, 19.0452f };
					*uParam4 = 240.2381f;
					break;
				
				case 7:
					*uParam3 = { -1027.353f, -2734.462f, 19.0509f };
					*uParam4 = 239.8703f;
					break;
				
				default:
					*uParam3 = { -1033.74f, -2730.746f, 19.0521f };
					*uParam4 = 239.9237f;
					break;
			}
			return 1;
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1047.646f, -2754.947f, 2.941969f, -991.7314f, -2653.153f, 16.89228f, 200f, 0, 1))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { -971.9154f, -2749.122f, 12.6069f };
					*uParam4 = 265.8022f;
					break;
				
				case 2:
					*uParam3 = { -980.6166f, -2748.535f, 12.757f };
					*uParam4 = 263.5472f;
					break;
				
				case 3:
					*uParam3 = { -987.6072f, -2747.273f, 12.6069f };
					*uParam4 = 257.2886f;
					break;
				
				case 4:
					*uParam3 = { -1006.815f, -2739.345f, 12.6334f };
					*uParam4 = 242.1315f;
					break;
				
				case 5:
					*uParam3 = { -1051.83f, -2713.553f, 12.6333f };
					*uParam4 = 239.9312f;
					break;
				
				case 6:
					*uParam3 = { -1041.004f, -2719.647f, 12.6402f };
					*uParam4 = 240.1081f;
					break;
				
				case 7:
					*uParam3 = { -1023.832f, -2729.465f, 12.6445f };
					*uParam4 = 239.6737f;
					break;
				
				default:
					*uParam3 = { -1012.848f, -2735.172f, 12.6656f };
					*uParam4 = 237.6545f;
					break;
			}
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 845.7216f, -990.7473f, 37.4696f, 846.3397f, -1066.88f, 16.96623f, 90f, 0, 1))
	{
		iVar0 = (iParam5 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam3 = { 868.1039f, -995.9224f, 29.7369f };
				*uParam4 = 93.132f;
				break;
			
			case 2:
				*uParam3 = { 859.283f, -996.4102f, 28.7865f };
				*uParam4 = 92.2581f;
				break;
			
			case 3:
				*uParam3 = { 849.4288f, -997.1062f, 27.5347f };
				*uParam4 = 92.714f;
				break;
			
			case 4:
				*uParam3 = { 841.1268f, -997.4826f, 26.5744f };
				*uParam4 = 92.8628f;
				break;
			
			case 5:
				*uParam3 = { 831.2605f, -1009.556f, 25.599f };
				*uParam4 = 268.6186f;
				break;
			
			case 6:
				*uParam3 = { 844.6506f, -1010.09f, 26.9894f };
				*uParam4 = 270.076f;
				break;
			
			case 7:
				*uParam3 = { 852.2498f, -1010.132f, 27.8091f };
				*uParam4 = 269.722f;
				break;
			
			default:
				*uParam3 = { 861.4028f, -1010.025f, 28.808f };
				*uParam4 = 270.7686f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 767.3736f, -1077.429f, -10.78654f, 682.8284f, -1080.686f, 79.67303f, 60f, 0, 1))
	{
		iVar0 = (iParam5 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam3 = { 703.2726f, -1067.7f, 21.4765f };
				*uParam4 = 181.3629f;
				break;
			
			case 2:
				*uParam3 = { 715.2089f, -1070.399f, 21.2708f };
				*uParam4 = 175.4362f;
				break;
			
			case 3:
				*uParam3 = { 715.2911f, -1059.42f, 21.0876f };
				*uParam4 = 181.0347f;
				break;
			
			case 4:
				*uParam3 = { 709.6841f, -1086.78f, 21.419f };
				*uParam4 = 233.169f;
				break;
			
			case 5:
				*uParam3 = { 703.807f, -1057.866f, 21.4152f };
				*uParam4 = 170.1609f;
				break;
			
			case 6:
				*uParam3 = { 708.1994f, -1048.194f, 21.216f };
				*uParam4 = 134.2729f;
				break;
			
			case 7:
				*uParam3 = { 711.1124f, -1069.423f, 21.3129f };
				*uParam4 = 177.9198f;
				break;
			
			default:
				*uParam3 = { 703.545f, -1078.718f, 21.3987f };
				*uParam4 = 180.5686f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 31f;
	}
	if (func_90(3, Var1))
	{
		if (func_89(Var1, 3, 0, 0))
		{
			*uParam3 = { -1520.121f, 2731.511f, 16.6437f };
			*uParam4 = 48.1572f;
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 77.2f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1535.987f, -2041.497f, 68.21275f, 1529.357f, -2204.463f, 96.11195f, 105f, 0, 1))
	{
		*uParam3 = { 1540.75f, -2051.49f, 76.85f };
		*uParam4 = 255.41f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 51.1739f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1185.81f, -1768.367f, 28.31145f, 1369.068f, -1701.452f, 66.25389f, 70f, 1, 1))
	{
		if (func_88(Var1, 1283.326f, -1731.522f, 51.78555f, 17f))
		{
			*uParam3 = { 1283.326f, -1731.522f, 51.78555f };
			*uParam4 = 275.4274f;
			return 1;
		}
		if (func_88(Var1, 1334.386f, -1709.762f, 55.70131f, 41f))
		{
			*uParam3 = { 1334.386f, -1709.762f, 55.70131f };
			*uParam4 = 275.4411f;
			return 1;
		}
		if (func_88(Var1, 1246.166f, -1750.625f, 45.35691f, 28f))
		{
			*uParam3 = { 1246.166f, -1750.625f, 45.35691f };
			*uParam4 = 301.2981f;
			return 1;
		}
		if (func_88(Var1, 1196.272f, -1753.051f, 37.63976f, 32f))
		{
			*uParam3 = { 1196.272f, -1753.051f, 37.63976f };
			*uParam4 = 209.4354f;
			return 1;
		}
		*uParam3 = { 1283.326f, -1731.522f, 51.78555f };
		*uParam4 = 275.4274f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 25f;
	}
	if (func_88(Var1, -1693.302f, -1109.13f, 17.89778f, 240f))
	{
		if ((OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1538.981f, -941.1323f, 10.56623f, -1715.57f, -1139.766f, 52.20361f, 110f, 0, 1) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1739.989f, -1115.973f, 10.08726f, -1800.515f, -1187.18f, 52.0172f, 25f, 0, 1)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1801.766f, -1180.252f, 4.017236f, -1857.718f, -1244.628f, 38.49653f, 85f, 0, 1))
		{
			*uParam3 = { -1624.445f, -976.9755f, 12.0175f };
			*uParam4 = 141.167f;
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 10f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1140.89f, -1573.135f, -6.566939f, -1067.084f, -1675.976f, 23.53153f, 52f, 0, 1))
	{
		*uParam3 = { -1095.63f, -1577.24f, 3.82f };
		*uParam4 = 216.12f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 114f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1324.172f, 1110.748f, 99.65493f, 1523.097f, 1110.473f, 132.8859f, 170f, 0, 1))
	{
		iVar0 = 3;
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
		{
			case 0:
				*uParam3 = { 1369.246f, 1147.653f, 112.7592f };
				*uParam4 = 182.0998f;
				break;
			
			case 1:
				*uParam3 = { 1360.848f, 1139.121f, 112.7592f };
				*uParam4 = 83.3356f;
				break;
			
			case 2:
				*uParam3 = { 1364.751f, 1154.367f, 112.7592f };
				*uParam4 = 223.2795f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 40f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1737.39f, 3287.795f, 35.13897f, 1724.345f, 3337.854f, 57.20038f, 40f, 0, 1))
	{
		*uParam3 = { 1782.19f, 3300.076f, 40.4593f };
		*uParam4 = 142.426f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 7f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -695.7981f, -1379.678f, 24.48124f, -777.3731f, -1491.13f, -3.594945f, 72f, 0, 1))
	{
		*uParam3 = { -658.2056f, -1388.789f, 9.499f };
		*uParam4 = 174.6945f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 325f;
	}
	if (SYSTEM::VDIST2(Var1, -75.59782f, -818.6082f, 325.1745f) < (58f * 58f))
	{
		*uParam3 = { -142.367f, -895.0251f, 28.191f };
		*uParam4 = 71.6555f;
		return 1;
	}
	if (!func_80())
	{
		Var1 = { Param0 };
		if (Param0.f_2 == 1f)
		{
			Var1.f_2 = 36.1141f;
		}
		if (func_90(7, Var1))
		{
			if (func_89(Var1, 7, 0, 0))
			{
				*uParam3 = { -1012.31f, -465.1634f, 36.1141f };
				*uParam4 = 112.1485f;
				return 1;
			}
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 12.7091f;
	}
	if (func_90(2, Var1))
	{
		if (func_89(Var1, 2, 0, 0))
		{
			iVar0 = 4;
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
				{
					case 0:
						*uParam3 = { -979.95f, -2746.109f, 12.7091f };
						*uParam4 = 91.4929f;
						break;
					
					case 1:
						*uParam3 = { -1025.193f, -2728.218f, 12.6647f };
						*uParam4 = 239.0041f;
						break;
					
					case 2:
						*uParam3 = { -1051.315f, -2713.069f, 12.6676f };
						*uParam4 = 236.4666f;
						break;
					
					case 3:
						*uParam3 = { -1095.742f, -2637.871f, 12.6461f };
						*uParam4 = 188.9897f;
						break;
				}
			}
			else
			{
				iVar0 = (iParam5 % 8);
				switch (iVar0)
				{
					case 1:
						*uParam3 = { -1023.982f, -2489.882f, 19.0755f };
						*uParam4 = 148.7004f;
						break;
					
					case 2:
						*uParam3 = { -1029.968f, -2500.438f, 19.0803f };
						*uParam4 = 148.7144f;
						break;
					
					case 3:
						*uParam3 = { -1070.546f, -2570.859f, 19.0836f };
						*uParam4 = 150.0955f;
						break;
					
					case 4:
						*uParam3 = { -1056.065f, -2545.662f, 19.0809f };
						*uParam4 = 149.5649f;
						break;
					
					case 5:
						*uParam3 = { -1050.578f, -2536.219f, 19.0824f };
						*uParam4 = 150.7363f;
						break;
					
					case 6:
						*uParam3 = { -1036.032f, -2510.902f, 19.0794f };
						*uParam4 = 147.2113f;
						break;
					
					case 7:
						*uParam3 = { -1044.487f, -2525.534f, 19.079f };
						*uParam4 = 150.7597f;
						break;
					
					default:
						*uParam3 = { -1064.5f, -2560.653f, 19.0905f };
						*uParam4 = 150.7081f;
						break;
					}
			}
			return 1;
		}
	}
	Var27 = { -509.5746f, 4938.918f, 146.3271f };
	fVar30 = 232.0109f;
	fVar31 = func_79(Param0, Var27);
	Var32 = { 2450.604f, 5129.224f, 45.9722f };
	fVar35 = 241.1957f;
	fVar36 = func_79(Param0, Var32);
	Var1 = { Param0 };
	bVar37 = false;
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 400f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -148.8777f, 4862.204f, 305.6442f, 454.6274f, 5573.104f, 804.097f, 250f, 0, 1))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 200f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -482.8931f, 4990.255f, 155.1601f, 7.830751f, 5009.371f, 430.7604f, 250f, 0, 1))
	{
		bVar37 = true;
	}
	if (bVar37)
	{
		*uParam3 = { Var27 };
		*uParam4 = fVar30;
		if (fVar36 < fVar31)
		{
			*uParam3 = { Var32 };
			*uParam4 = fVar35;
		}
		return 1;
	}
	bVar37 = false;
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 700f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 441.3999f, 5579.99f, 802.5138f, 965.7776f, 5675.921f, 601.2646f, 250f, 0, 1))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 300f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 954.1139f, 5641.051f, 646.5054f, 2140.375f, 5377.753f, 149.1221f, 250f, 0, 1))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 100f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 2117.348f, 5377.259f, 173.3297f, 2439.934f, 5297.445f, 62.68662f, 100f, 0, 1))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 65f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 2393.347f, 5321.58f, 107.0624f, 2523.946f, 5124.746f, 41.68384f, 70f, 0, 1))
	{
		bVar37 = true;
	}
	if (bVar37)
	{
		*uParam3 = { Var32 };
		*uParam4 = fVar35;
		if (fVar31 < fVar36)
		{
			*uParam3 = { Var27 };
			*uParam4 = fVar30;
		}
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 6f;
	}
	if (func_37(Var1, -99.68751f, -2448.891f, 5.01731f, 230f))
	{
		if ((((OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 85.05448f, -2511.884f, -2.996267f, -57.59977f, -2412.716f, 15.00095f, 75f, 0, 1) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 7.516524f, -2546.741f, 1.331557f, -177.3268f, -2417.047f, 19.16044f, 80f, 0, 1)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -260.0354f, -2419.978f, 1.399635f, -27.26375f, -2423.848f, 25.00064f, 80f, 0, 1)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -187.4256f, -2516.086f, -6.849975f, -186.7518f, -2438.149f, 25.0016f, 40f, 0, 1)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -73.60813f, -2538.564f, -6.989857f, -183.2556f, -2465.145f, 25.0203f, 70f, 0, 1))
		{
			iVar0 = 2;
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0) == 0)
			{
				*uParam3 = { 29.5582f, -2553.587f, 5.0004f };
				*uParam4 = 253.9545f;
			}
			else
			{
				*uParam3 = { -189.6824f, -2531.649f, 5.0031f };
				*uParam4 = 0.0408f;
			}
			return 1;
		}
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.4f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 412.279f, 6481.868f, 25.80821f, 468.9353f, 6442.752f, 45.60727f, 24f, 0, 1))
	{
		*uParam3 = { 445.231f, 6476.948f, 28.4862f };
		*uParam4 = 219.4788f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.2065f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 476.5394f, -1301.548f, 44.82458f, 499.5822f, -1339.025f, 26.31703f, 35f, 0, 1))
	{
		*uParam3 = { 498.185f, -1288.535f, 28.1923f };
		*uParam4 = 181.3208f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.2065f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 496.9816f, -1412.255f, 43.29391f, 497.269f, -1339.364f, 26.31648f, 40f, 0, 1))
	{
		*uParam3 = { 504.1738f, -1421.251f, 28.2065f };
		*uParam4 = 83.2905f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 73f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 951.1704f, -147.0047f, 71.54326f, 1005.245f, -98.44745f, 95.62679f, 70f, 0, 1))
	{
		*uParam3 = { 961.3104f, -150.1964f, 73.4016f };
		*uParam4 = 58.9938f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 52f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1137.022f, 89.06853f, 74.89022f, 1267.821f, 292.0106f, 102.9904f, 195f, 0, 1))
	{
		*uParam3 = { 1118.751f, 262.0209f, 79.8555f };
		*uParam4 = 52.3086f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1137.022f, 89.06853f, 71.89022f, 1010.046f, -91.56699f, 103.4568f, 180f, 0, 1))
	{
		*uParam3 = { 1134.053f, 53.1835f, 79.7553f };
		*uParam4 = 145.5134f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 30.6f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 191.8731f, -723.553f, 40.23576f, 79.58656f, -687.6684f, 29.54734f, 85f, 0, 1))
	{
		iVar0 = 2;
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0) == 0)
		{
			*uParam3 = { 182.6361f, -753.5836f, 31.8051f };
			*uParam4 = 162.0019f;
		}
		else
		{
			*uParam3 = { 81.5318f, -675.4875f, 30.5695f };
			*uParam4 = 341.8541f;
		}
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 33.5f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -40f, -687.7f, 36.6f, -72.7f, -682f, 29.6f, 15f, 0, 1) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -45.3f, -687.8f, 29.3f, 5.9f, -688.7f, 36.8f, 55f, 0, 1))
	{
		*uParam3 = { -88.4f, -660.9f, 35f };
		*uParam4 = -20f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 8.1f, -685.5f, 31.2f, 26.3f, -665.7f, 35.2f, 10f, 0, 1))
	{
		*uParam3 = { 61.4f, -653.2f, 32f };
		*uParam4 = 160f;
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 496.2593f, -3116.586f, 13.6414f, 471.4366f, -3116.258f, 5.7109f, 10f, 0, 1))
	{
		*uParam3 = { 484.0132f, -3033.162f, 5.0717f };
		*uParam4 = 140.7302f;
		return 1;
	}
	return 0;
}

float func_79(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)//Position - 0x52F0
{
	return SYSTEM::VDIST2(Param0, Param0.f_1, 0f, Param3, Param3.f_1, 0f);
}

int func_80()//Position - 0x530A
{
	int iVar0;
	
	iVar0 = func_82();
	if (iVar0 == 0)
	{
		if (func_81(65))
		{
			return 1;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("ambient_solomon")) > 0)
		{
			return 1;
		}
	}
	else if (iVar0 == 1)
	{
		if (func_81(66))
		{
			return 1;
		}
	}
	else if (iVar0 == 2)
	{
		if (func_81(65))
		{
			return 1;
		}
	}
	return 0;
}

int func_81(int iParam0)//Position - 0x5369
{
	if (iParam0 == 144 || iParam0 == -1)
	{
		return 0;
	}
	return Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[iParam0];
}

int func_82()//Position - 0x5396
{
	func_83();
	return Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
}

void func_83()//Position - 0x53AF
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_87(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_86(PLAYER::PLAYER_PED_ID());
			if (func_85(iVar0) && (!func_84(14) || Global_96306))
			{
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 != iVar0 && func_85(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213))
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

bool func_84(int iParam0)//Position - 0x54AC
{
	return Global_34913 == iParam0;
}

bool func_85(int iParam0)//Position - 0x54BA
{
	return iParam0 < 3;
}

int func_86(int iParam0)//Position - 0x54C6
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_87(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_87(int iParam0)//Position - 0x5503
{
	if (func_85(iParam0))
	{
		return Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_88(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x552D
{
	struct<3> Var0;
	
	Var0 = { Param3 - Param0 };
	return ((Var0.x * Var0.x) + (Var0.f_1 * Var0.f_1)) <= (fParam6 * fParam6);
}

int func_89(struct<3> Param0, int iParam3, int iParam4, bool bParam5)//Position - 0x5557
{
	struct<3> Var0[15];
	struct<3> Var46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	
	iVar110 = 0;
	switch (iParam3)
	{
		case 1:
			Var0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			Var46[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar92[0] = 171.25f;
			Var0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			Var46[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar92[1] = 132f;
			Var0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			Var46[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		
		case 2:
			Var0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			Var46[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 247f;
			Var0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			Var46[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 149f;
			Var0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			Var46[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 185.5f;
			Var0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			Var46[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 250f;
			Var0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			Var46[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 193.5f;
			Var0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			Var46[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 234.5f;
			Var0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			Var46[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar92[6] = 16f;
			Var0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			Var46[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 80f;
			Var0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			Var46[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 142f;
			Var0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			Var46[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam4)) };
			fVar92[9] = 30.75f;
			Var0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			Var46[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam4)) };
			fVar92[10] = 150f;
			Var0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			Var46[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam4)) };
			fVar92[11] = 29.25f;
			Var0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			Var46[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam4)) };
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		
		case 3:
			Var0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			Var46[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 250f;
			Var0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			Var46[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			Var0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			Var46[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 200f;
			Var0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			Var46[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			Var46[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 140.5f;
			Var0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			Var46[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 140.5f;
			Var0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			Var46[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam4)) };
			fVar92[6] = 90f;
			Var0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			Var46[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 100f;
			Var0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			Var46[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 248.75f;
			Var0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			Var46[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar92[9] = 128f;
			Var0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			Var46[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar92[10] = 127.25f;
			Var0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			Var46[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar92[11] = 16f;
			Var0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			Var46[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar92[12] = 214.25f;
			Var0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			Var46[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar92[13] = 65.75f;
			if (bParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			Var46[9 /*3*/].f_2 = (Var46[9 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[10 /*3*/].f_2 = (Var46[10 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[11 /*3*/].f_2 = (Var46[11 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[12 /*3*/].f_2 = (Var46[12 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[13 /*3*/].f_2 = (Var46[13 /*3*/].f_2 + IntToFloat(iVar111));
			iVar108 = 14;
			break;
		
		case 4:
			Var0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			Var46[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam4)) };
			fVar92[0] = 114f;
			Var0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			Var46[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam4)) };
			fVar92[1] = 88.5f;
			Var0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			Var46[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam4)) };
			fVar92[2] = 133.25f;
			Var0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			Var46[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam4)) };
			fVar92[3] = 104.5f;
			Var0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			Var46[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam4)) };
			fVar92[4] = 121.75f;
			Var0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			Var46[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam4)) };
			fVar92[5] = 84.5f;
			Var0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			Var46[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam4)) };
			fVar92[6] = 103.75f;
			Var0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			Var46[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam4)) };
			fVar92[7] = 104.25f;
			Var0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			Var46[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam4)) };
			fVar92[8] = 91f;
			Var0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			Var46[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam4)) };
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		
		case 5:
			Var0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			Var46[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam4)) };
			fVar92[0] = 45.75f;
			Var0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			Var46[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam4)) };
			fVar92[1] = 99f;
			Var0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			Var46[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam4)) };
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		
		case 6:
			Var0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			Var46[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam4)) };
			fVar92[0] = 120f;
			Var0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			Var46[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar92[1] = 170f;
			Var0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			Var46[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar92[2] = 12.5f;
			Var0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			Var46[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		
		case 7:
			Var0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			Var46[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam4)) };
			fVar92[0] = 162f;
			Var0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			Var46[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam4)) };
			fVar92[1] = 124f;
			Var0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			Var46[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam4)) };
			fVar92[2] = 55f;
			Var0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			Var46[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam4)) };
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		
		case 8:
			Var0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			Var46[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar92[0] = 7.75f;
			Var0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			Var46[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar92[1] = 14.75f;
			Var0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			Var46[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar92[2] = 31.5f;
			Var0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			Var46[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar92[3] = 30.5f;
			Var0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			Var46[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

bool func_90(int iParam0, struct<3> Param1)//Position - 0x62AB
{
	return SYSTEM::VDIST2(Param1, func_92(iParam0)) < func_91(iParam0);
}

float func_91(int iParam0)//Position - 0x62C8
{
	switch (iParam0)
	{
		case 1:
			return 1000000f;
			break;
		
		case 2:
			return 1000000f;
			break;
		
		case 3:
			return 1500000f;
			break;
		
		case 4:
			return 500000f;
			break;
		
		case 5:
			return 500000f;
			break;
		
		case 6:
			return 500000f;
			break;
		
		case 7:
			return 500000f;
			break;
		
		case 8:
			return 500000f;
			break;
	}
	return 0f;
}

Vector3 func_92(int iParam0)//Position - 0x6360
{
	switch (iParam0)
	{
		case 1:
			return -1155.877f, 48.3426f, 52.4985f;
			break;
		
		case 2:
			return -1245.12f, -2818.38f, 12.94f;
			break;
		
		case 3:
			return -2176.19f, 3092.07f, 31.81f;
			break;
		
		case 4:
			return 1701.666f, 2586.261f, 51.4925f;
			break;
		
		case 5:
			return 3525.058f, 3711.323f, 35.6423f;
			break;
		
		case 6:
			return 548.1421f, -3157.961f, 5.0696f;
			break;
		
		case 7:
			return -1142.411f, -526.4487f, 31.6878f;
			break;
		
		case 8:
			return 456.8879f, -985.2783f, 35.6895f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_93(struct<3> Param0, struct<3> Param3, struct<3> Param6)//Position - 0x644A
{
	if (((((Param0.x > Param3.x && Param0.x < Param6.x) && Param0.f_1 > Param3.f_1) && Param0.f_1 < Param6.f_1) && Param0.f_2 > Param3.f_2) && Param0.f_2 < Param6.f_2)
	{
		return 1;
	}
	return 0;
}

int func_94(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)//Position - 0x64A1
{
	if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Param0, Param0.f_1, Param3, Param3.f_1))
	{
		return 1;
	}
	return 0;
}

void func_95(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, var uParam6, var uParam7, int iParam8)//Position - 0x64C1
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (Param3 <= Param0)
	{
		Var0.x = Param3;
		Var3.x = Param0;
	}
	else
	{
		Var0.x = Param0;
		Var3.x = Param3;
	}
	if (Param3.f_1 <= Param0.f_1)
	{
		Var0.f_1 = Param3.f_1;
		Var3.f_1 = Param0.f_1;
	}
	else
	{
		Var0.f_1 = Param0.f_1;
		Var3.f_1 = Param3.f_1;
	}
	Var0 = { Var0 - Vector(IntToFloat(iParam8), IntToFloat(iParam8), IntToFloat(iParam8)) };
	Var3 = { Var3 + Vector(IntToFloat(iParam8), IntToFloat(iParam8), IntToFloat(iParam8)) };
	if (!func_96(Var0, *uParam6, 1056964608) || !func_96(Var0, *uParam6, 1056964608))
	{
		*uParam6 = { Var0 };
		*uParam7 = { Var3 };
	}
	PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(*uParam6, uParam6->f_1, *uParam7, uParam7->f_1);
}

int func_96(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x658A
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((Param0.x - Param3.x)) <= fParam6)
	{
		if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			if (MISC::ABSF((Param0.f_2 - Param3.f_2)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_97()//Position - 0x65D6
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_40(Local_55.f_9, 10000))
		{
			STREAMING::REQUEST_MODEL(iLocal_99);
			STREAMING::REQUEST_MODEL(iLocal_98);
			if (STREAMING::HAS_MODEL_LOADED(iLocal_99))
			{
				if (STREAMING::HAS_MODEL_LOADED(iLocal_98))
				{
					if (func_72(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)))
					{
						if (Local_55.f_10 < 2)
						{
							iVar4 = 0;
						}
						else if (Local_55.f_10 < 5)
						{
							iVar4 = 9;
						}
						else
						{
							iVar4 = 1;
						}
					}
					else if (Local_55.f_10 < 5)
					{
						iVar4 = 0;
					}
					else
					{
						iVar4 = 9;
					}
					if (func_99(&Var0, &uVar3, &(Local_55.f_8), iVar4, 1103626240))
					{
						MISC::CLEAR_AREA(Var0, 5f, 1, 0, 0, 0);
						if (func_98(&Local_55, &(Local_55.f_1), Var0, uVar3))
						{
							Local_55.f_5 = func_76(ENTITY::GET_ENTITY_COORDS(Local_55, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
							Local_55.f_2 = 0;
							Local_55.f_8 = 0;
							iLocal_52 = 2;
						}
					}
					else if (Local_55.f_8 >= 5)
					{
						Local_55.f_10++;
						if (Local_55.f_10 > 10)
						{
							func_13();
						}
						else
						{
							Local_55.f_8 = 0;
							Local_55.f_9 = (MISC::GET_GAME_TIMER() - 9000);
						}
					}
				}
			}
		}
	}
}

int func_98(var uParam0, var uParam1, struct<3> Param2, var uParam5)//Position - 0x66F7
{
	STREAMING::REQUEST_MODEL(func_144());
	STREAMING::REQUEST_MODEL(func_143());
	if (STREAMING::HAS_MODEL_LOADED(func_143()))
	{
		if (STREAMING::HAS_MODEL_LOADED(func_144()))
		{
			*uParam0 = VEHICLE::CREATE_VEHICLE(func_143(), Param2, uParam5, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0);
					VEHICLE::SET_TAXI_LIGHTS(*uParam0, 1);
					VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(*uParam0, 1);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(*uParam0, 0, 0);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(*uParam0, 1);
					*uParam1 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 25, func_144(), -1, 1, 1);
					if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
					{
						if (!PED::IS_PED_INJURED(*uParam1))
						{
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(*uParam0, 5f);
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam1))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam1, 1, 0);
							}
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 0);
							}
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam1, 1);
							PED::SET_PED_CONFIG_FLAG(*uParam1, 251, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(*uParam1, 5, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(*uParam1, 17, 1);
							PED::SET_PED_FLEE_ATTRIBUTES(*uParam1, 512, 0);
							AUDIO::SET_AMBIENT_VOICE_NAME(*uParam1, "A_M_M_EASTSA_02_LATINO_FULL_01");
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_143());
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_144());
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_99(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)//Position - 0x681E
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	var uVar10;
	int iVar11;
	bool bVar12;
	int iVar13;
	float fVar14;
	float fVar15;
	struct<3> Var16;
	struct<3> Var19;
	struct<3> Var22;
	int iVar25;
	struct<3> Var26;
	
	fVar9 = 0f;
	iVar11 = 1;
	if (iParam3 == 0)
	{
		iVar11 = 0;
	}
	bVar12 = false;
	iVar13 = 0;
	fVar14 = 100f;
	fVar15 = 2.5f;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		Var26 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		iVar25 = func_104(Var26);
		if (iVar25 != 6)
		{
			if (func_103(Var26, iVar25, uParam0, uParam1))
			{
				return 1;
			}
		}
		else if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Var26, *uParam2, &Var0, &fVar9, &uVar10, iParam3, fVar14, fVar15))
		{
			while (!bVar12 && iVar13 < 5)
			{
				if (VEHICLE::_0xA4822F1CF23F4810(&Var0, &Var3, &Var6, 0f, 180f, iParam4, iVar11, 1, 0))
				{
					fVar9 = func_102(0f, 0f, 0f, Var6, 1);
					if (func_100(Var26, Var3, 1133903872, 1101004800))
					{
						bVar12 = true;
						Var16 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var3, fVar9, 0f, 1f, 0f) };
						Var19 = { Var16 - Var3 };
						Var22 = { Var0 - Var3 };
						if (MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var19.x, Var19.f_1, Var22.x, Var22.f_1) > 60f)
						{
							fVar9 = (fVar9 + 180f);
							fVar9 = func_68(fVar9, 0f, 360f);
						}
						*uParam0 = { Var3 };
						*uParam1 = fVar9;
						return 1;
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			*uParam2++;
		}
		else
		{
			*uParam2++;
		}
	}
	return 0;
}

int func_100(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7)//Position - 0x6992
{
	float fVar0;
	
	fVar0 = SYSTEM::VDIST2(Param0, Param3);
	if (fVar0 >= (fParam6 * fParam6))
	{
		return 0;
	}
	if (fVar0 <= (fParam7 * fParam7))
	{
		return 0;
	}
	if (CAM::IS_SPHERE_VISIBLE(Param3, 2.5f))
	{
		return 0;
	}
	if (MISC::IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(Param3, 3f, 3f, 3f, 0))
	{
		return 0;
	}
	if (func_101(Param3, 0))
	{
		return 0;
	}
	return 1;
}

int func_101(struct<3> Param0, bool bParam3)//Position - 0x69FE
{
	if (func_37(Param0, -1144.497f, 43.01712f, 51.94447f, 325f))
	{
		if (func_89(Param0, 1, 0, 0))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1319.769f, 29.52616f, 49.56616f, -1336.527f, 121.0351f, 75.61888f, 18f, 0, 1))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1360.02f, 110.1307f, 52.63413f, -1365.276f, 172.0624f, 72.01312f, 52f, 0, 1))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1363.007f, 170.533f, 50.00813f, -1296.903f, 178.8133f, 73.37104f, 35f, 0, 1))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1197.521f, 199.8643f, 57.04471f, -1298.04f, 176.1384f, 73.33252f, 34f, 0, 1))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1103.745f, 221.1367f, 55.34814f, -1208.394f, 191.0909f, 79.13708f, 45f, 0, 1))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -989.0328f, -89.39376f, 32.48801f, -1086.211f, -115.7076f, 50.65051f, 70f, 0, 1))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -958.5481f, -111.5455f, 30.76432f, -1132.685f, 190.7841f, 73.90366f, 70f, 0, 1))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1077.028f, -139.7337f, 38.73388f, -1299.556f, -15.16894f, 63.4371f, 20f, 0, 1))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1319.769f, 29.52616f, 47.56616f, -1287.619f, -24.88864f, 67.5273f, 20f, 0, 1))
		{
			return 1;
		}
	}
	if (func_90(2, Param0))
	{
		if (func_89(Param0, 2, 0, 0))
		{
			return 1;
		}
	}
	if (func_90(3, Param0))
	{
		if (func_89(Param0, 3, 0, 0))
		{
			return 1;
		}
	}
	if (func_90(4, Param0))
	{
		if (func_89(Param0, 4, 0, 0))
		{
			return 1;
		}
	}
	if (func_90(5, Param0))
	{
		if (func_89(Param0, 5, 0, 0))
		{
			return 1;
		}
	}
	if (func_90(6, Param0))
	{
		if (func_89(Param0, 6, 0, 0))
		{
			return 1;
		}
	}
	if (!func_80())
	{
		if (func_90(7, Param0))
		{
			if (func_89(Param0, 7, 0, 0))
			{
				return 1;
			}
		}
	}
	if (func_90(8, Param0))
	{
		if (func_89(Param0, 8, 0, 0))
		{
			return 1;
		}
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 2591.626f, -268.894f, 111.8859f, 2591.331f, -614.4355f, 55.36921f, 70f, 0, 1))
	{
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1112.586f, -2674.767f, 12.56804f, -1215.468f, -2854.589f, 19.44588f, 41.25f, 0, 1))
	{
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -804.05f, 4216.412f, 204.4872f, -509.0679f, 4135.19f, 123.2502f, 250f, 0, 1))
	{
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -148.8777f, 4862.204f, 305.6442f, 454.6274f, 5573.104f, 804.097f, 250f, 0, 1) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -482.8931f, 4990.255f, 155.1601f, 7.830751f, 5009.371f, 430.7604f, 250f, 0, 1))
	{
		return 1;
	}
	if (((OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 441.3999f, 5579.99f, 802.5138f, 965.7776f, 5675.921f, 601.2646f, 250f, 0, 1) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 954.1139f, 5641.051f, 646.5054f, 2140.375f, 5377.753f, 149.1221f, 250f, 0, 1)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 2117.348f, 5377.259f, 173.3297f, 2439.934f, 5297.445f, 62.68662f, 100f, 0, 1)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 2393.347f, 5321.58f, 107.0624f, 2523.946f, 5124.746f, 41.68384f, 70f, 0, 1))
	{
		return 1;
	}
	if (func_37(Param0, -99.68751f, -2448.891f, 5.01731f, 230f))
	{
		if ((((OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 85.05448f, -2511.884f, -2.996267f, -57.59977f, -2412.716f, 15.00095f, 75f, 0, 1) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 7.516524f, -2546.741f, 1.331557f, -177.3268f, -2417.047f, 19.16044f, 80f, 0, 1)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -260.0354f, -2419.978f, 1.399635f, -27.26375f, -2423.848f, 25.00064f, 80f, 0, 1)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -187.4256f, -2516.086f, -6.849975f, -186.7518f, -2438.149f, 25.0016f, 40f, 0, 1)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -73.60813f, -2538.564f, -6.989857f, -183.2556f, -2465.145f, 25.0203f, 70f, 0, 1))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1171.709f, -1524.66f, 23.37969f, -1139.721f, -1573.589f, -1.585432f, 55f, 0, 1))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 476.5394f, -1301.548f, 44.82458f, 499.5822f, -1339.025f, 26.31703f, 35f, 0, 1) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 496.9816f, -1412.255f, 43.29391f, 497.269f, -1339.364f, 26.31648f, 40f, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

float func_102(struct<2> Param0, float fParam2, struct<2> Param3, var uParam5, int iParam6)//Position - 0x7078
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

int func_103(struct<3> Param0, int iParam3, var uParam4, var uParam5)//Position - 0x70DD
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	
	if (iParam3 == 0)
	{
		iVar4 = 0;
		iVar5 = 5;
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			if (iVar4 == 0)
			{
				Var0 = { -883.8992f, 76.3237f, 50.9372f };
				fVar3 = 271.8234f;
			}
			else if (iVar4 == 1)
			{
				Var0 = { -838.2045f, 88.1067f, 51.3396f };
				fVar3 = 102.3721f;
			}
			else if (iVar4 == 2)
			{
				Var0 = { -884.0715f, 217.2857f, 71.7633f };
				fVar3 = 254.5437f;
			}
			else if (iVar4 == 3)
			{
				Var0 = { -834.0018f, 217.2782f, 73.154f };
				fVar3 = 80.7037f;
			}
			else if (iVar4 == 4)
			{
				Var0 = { -830.9222f, 135.3548f, 58.1352f };
				fVar3 = 92.957f;
			}
			if (func_100(Param0, Var0, 1133903872, 1101004800))
			{
				*uParam4 = { Var0 };
				*uParam5 = fVar3;
				return 1;
			}
			iVar4++;
		}
	}
	else if (iParam3 == 1)
	{
		iVar4 = 0;
		iVar5 = 6;
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			if (iVar4 == 0)
			{
				Var0 = { -1587.096f, -928.5875f, 14.3046f };
				fVar3 = 139.9023f;
			}
			else if (iVar4 == 1)
			{
				Var0 = { -1532.458f, -863.667f, 21.6188f };
				fVar3 = 139.9028f;
			}
			else if (iVar4 == 2)
			{
				Var0 = { -1472.888f, -733.0396f, 24.0746f };
				fVar3 = 236.3756f;
			}
			else if (iVar4 == 3)
			{
				Var0 = { -1397.303f, -781.1235f, 19.3347f };
				fVar3 = 48.1876f;
			}
			else if (iVar4 == 4)
			{
				Var0 = { -1605.409f, -1012.578f, 12.0175f };
				fVar3 = 51.1191f;
			}
			else if (iVar4 == 5)
			{
				Var0 = { -1572.457f, -1007.106f, 12.0184f };
				fVar3 = 141.2024f;
			}
			if (func_100(Param0, Var0, 1133903872, 1101004800))
			{
				*uParam4 = { Var0 };
				*uParam5 = fVar3;
				return 1;
			}
			iVar4++;
		}
	}
	else if (iParam3 == 2)
	{
		iVar4 = 0;
		iVar5 = 4;
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			if (iVar4 == 0)
			{
				Var0 = { -1126.552f, -1530.591f, 3.294f };
				fVar3 = 214.5477f;
			}
			else if (iVar4 == 1)
			{
				Var0 = { -1043.019f, -1644.172f, 3.4894f };
				fVar3 = 35.3163f;
			}
			else if (iVar4 == 2)
			{
				Var0 = { -1039.345f, -1532.581f, 4.1467f };
				fVar3 = 32.1734f;
			}
			else if (iVar4 == 3)
			{
				Var0 = { -1067.577f, -1501.944f, 4.0327f };
				fVar3 = 216.1659f;
			}
			if (func_100(Param0, Var0, 1133903872, 1101004800))
			{
				*uParam4 = { Var0 };
				*uParam5 = fVar3;
				return 1;
			}
			iVar4++;
		}
	}
	else if (iParam3 == 3)
	{
		iVar4 = 0;
		iVar5 = 4;
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			if (iVar4 == 0)
			{
				Var0 = { -1247.291f, 2549.53f, 16.4214f };
				fVar3 = 137.1185f;
			}
			else if (iVar4 == 1)
			{
				Var0 = { -1314.11f, 2470.677f, 23.3185f };
				fVar3 = 309.2187f;
			}
			else if (iVar4 == 2)
			{
				Var0 = { -1095.382f, 2686.487f, 18.5919f };
				fVar3 = 130.0954f;
			}
			else if (iVar4 == 3)
			{
				Var0 = { -1373.514f, 2429.944f, 26.7492f };
				fVar3 = 298.9626f;
			}
			if (func_100(Param0, Var0, 1133903872, 1101004800))
			{
				*uParam4 = { Var0 };
				*uParam5 = fVar3;
				return 1;
			}
			iVar4++;
		}
	}
	else if (iParam3 == 4)
	{
		iVar4 = 0;
		iVar5 = 5;
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			if (iVar4 == 0)
			{
				Var0 = { 1299.198f, 1164.342f, 105.3728f };
				fVar3 = 3.1765f;
			}
			else if (iVar4 == 1)
			{
				Var0 = { 1304.831f, 1084.598f, 104.6453f };
				fVar3 = 8.2195f;
			}
			else if (iVar4 == 2)
			{
				Var0 = { 1290.873f, 1237.684f, 107.4217f };
				fVar3 = 186.5802f;
			}
			else if (iVar4 == 3)
			{
				Var0 = { 1310.975f, 1001.138f, 104.9354f };
				fVar3 = 359.3654f;
			}
			else if (iVar4 == 4)
			{
				Var0 = { 1284.936f, 1355.748f, 103.4301f };
				fVar3 = 182.4582f;
			}
			if (func_100(Param0, Var0, 1133903872, 1101004800))
			{
				*uParam4 = { Var0 };
				*uParam5 = fVar3;
				return 1;
			}
			iVar4++;
		}
	}
	else if (iParam3 == 5)
	{
		iVar4 = 0;
		iVar5 = 5;
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			if (iVar4 == 0)
			{
				Var0 = { -1208.617f, -1410.733f, 3.1853f };
				fVar3 = 215.8772f;
			}
			else if (iVar4 == 1)
			{
				Var0 = { -1172.9f, -1412.38f, 3.6078f };
				fVar3 = 126.9322f;
			}
			else if (iVar4 == 2)
			{
				Var0 = { -1112.842f, -1437.895f, 4.031f };
				fVar3 = 211.4814f;
			}
			else if (iVar4 == 3)
			{
				Var0 = { -1079.885f, -1472.878f, 4.0784f };
				fVar3 = 32.9476f;
			}
			else if (iVar4 == 4)
			{
				Var0 = { -1086.768f, -1540.707f, 3.5549f };
				fVar3 = 128.3527f;
			}
			if (func_100(Param0, Var0, 1133903872, 1101004800))
			{
				*uParam4 = { Var0 };
				*uParam5 = fVar3;
				return 1;
			}
			iVar4++;
		}
	}
	return 0;
}

int func_104(struct<3> Param0)//Position - 0x7690
{
	if (func_93(Param0, -874.9833f, 125.7645f, -100f, -768.6254f, 193.0297f, 100f))
	{
		return 0;
	}
	if (func_88(Param0, -1693.302f, -1109.13f, 17.89778f, 240f))
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1538.981f, -941.1323f, 10.56623f, -1715.57f, -1139.766f, 52.20361f, 110f, 0, 1))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1739.989f, -1115.973f, 10.08726f, -1800.515f, -1187.18f, 52.0172f, 25f, 0, 1))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1801.766f, -1180.252f, 4.017236f, -1857.718f, -1244.628f, 38.49653f, 85f, 0, 1))
		{
			return 1;
		}
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1140.89f, -1573.135f, -6.566939f, -1067.084f, -1675.976f, 23.53153f, 52f, 0, 1))
	{
		return 2;
	}
	if (func_90(3, Param0))
	{
		if (func_89(Param0, 3, 0, 0))
		{
			return 3;
		}
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 1324.172f, 1110.748f, 99.65493f, 1523.097f, 1110.473f, 132.8859f, 170f, 0, 1))
	{
		return 4;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1171.709f, -1524.66f, 23.37969f, -1139.721f, -1573.589f, -1.585432f, 55f, 0, 1))
	{
		return 5;
	}
	return 6;
}

int func_105()//Position - 0x783B
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	
	if (!func_37(Local_273, Local_55.f_20, 100f))
	{
		return 1;
	}
	if (func_86(PLAYER::PLAYER_PED_ID()) != Local_55.f_30)
	{
		return 1;
	}
	if (iLocal_54 == 4)
	{
		return 1;
	}
	if (iLocal_52 == 2 || iLocal_52 == 3)
	{
		if (!func_36(Local_55.f_1))
		{
			return 1;
		}
		if (!func_38(Local_55))
		{
			return 1;
		}
		if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_55.f_1, Local_55))
		{
			return 1;
		}
		if (PED::IS_PED_FLEEING(Local_55.f_1))
		{
			return 1;
		}
		if (PED::IS_PED_IN_COMBAT(Local_55.f_1, 0))
		{
			return 1;
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_55, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_55.f_1, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
		Var0 = { ENTITY::GET_ENTITY_COORDS(Local_55, 0) };
		if (MISC::IS_BULLET_IN_AREA(Var0, 7f, 0))
		{
			return 1;
		}
		fVar3 = 15f;
		Var4 = { Var0 };
		Var7 = { Var4 };
		Var4.x = (Var4.x - fVar3);
		Var4.f_1 = (Var4.f_1 - fVar3);
		Var4.f_2 = (Var4.f_2 - fVar3);
		Var7.x = (Var7.x + fVar3);
		Var7.f_1 = (Var7.f_1 + fVar3);
		Var7.f_2 = (Var7.f_2 + fVar3);
		if (MISC::IS_PROJECTILE_IN_AREA(Var4, Var7, 1))
		{
			return 1;
		}
		if (func_37(Local_273, Var0, 20f))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_55) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_55))
			{
				return 1;
			}
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_106()//Position - 0x79C9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	struct<3> Var9;
	float fVar12;
	struct<3> Var13;
	struct<3> Var16;
	var uVar19[12];
	
	if (iLocal_53 == 0)
	{
		if (func_40(iLocal_95, 500))
		{
			iVar1 = -1;
			iVar2 = -1;
			iVar5 = 0;
			fVar7 = -99999f;
			if (iLocal_54 != 0 && iLocal_54 != 1)
			{
				iLocal_89 = 0;
			}
			if (iLocal_89)
			{
				iVar0 = 3;
				fVar8 = 35f;
			}
			else
			{
				iVar0 = 1;
				fVar8 = 10f;
			}
			iVar3 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar19);
			if (iVar3 > 0)
			{
				iVar4 = 0;
				while (iVar4 <= (iVar3 - 1))
				{
					if (iVar5 < iVar0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uVar19[iVar4]))
						{
							if (ENTITY::GET_ENTITY_MODEL(uVar19[iVar4]) == iLocal_99)
							{
								Var9 = { ENTITY::GET_ENTITY_COORDS(uVar19[iVar4], 0) };
								fVar12 = SYSTEM::VDIST2(Local_273, Var9);
								if (fVar12 <= (fVar8 * fVar8))
								{
									if (func_21(&(uVar19[iVar4]), iLocal_99, iLocal_98))
									{
										if (iVar2 == -1)
										{
											iVar2 = iVar4;
										}
										if (iLocal_89)
										{
											if (uVar19[iVar4] != Global_96384)
											{
												if (INTERIOR::GET_INTERIOR_FROM_ENTITY(uVar19[iVar4]) == INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()))
												{
													fVar6 = 1f;
													fVar12 = (fVar12 / fVar12);
													fVar12 = (fVar12 - 35f);
													fVar12 = (fVar12 * -1f);
													fVar12 = (fVar12 / 35f);
													fVar12 = (fVar12 * 0.5f);
													fVar12 = (fVar12 + 0.5f);
													fVar6 = (fVar6 * fVar12);
													fVar12 = (Local_273.f_2 - Var9.f_2);
													if (fVar12 < 0f)
													{
														fVar12 = (fVar12 * -1f);
													}
													if (fVar12 < 4f)
													{
														Var13 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()) };
														Var16 = { Var9 - Local_273 };
														if (((Var13.x * Var16.x) + (Var13.f_1 * Var16.f_1)) / SYSTEM::VDIST(Var16, 0f, 0f, 0f)) > SYSTEM::COS(120f)
														{
															if (CAM::IS_SPHERE_VISIBLE(Var9, 2f))
															{
																fVar6 = (fVar6 * 0.5f);
															}
															if (func_62(&(uVar19[iVar4])))
															{
																fVar6 = (fVar6 * 0.2f);
															}
															if (!ENTITY::IS_ENTITY_UPRIGHT(uVar19[iVar4], 1119092736) || ENTITY::IS_ENTITY_IN_WATER(uVar19[iVar4]))
															{
																fVar6 = 0f;
															}
															if (fVar6 > fVar7)
															{
																fVar7 = fVar6;
																iVar1 = iVar4;
															}
														}
													}
												}
											}
										}
										iVar5++;
									}
								}
								else
								{
									iVar4 = iVar3;
								}
							}
						}
						else
						{
							iVar4 = iVar3;
						}
					}
					else
					{
						iVar4 = iVar3;
					}
					iVar4++;
				}
			}
			if (iVar2 == -1)
			{
				func_107(&iLocal_276, 0);
				iLocal_276 = 0;
			}
			else if (iLocal_276 != uVar19[iVar2])
			{
				func_107(&iLocal_276, 0);
				iLocal_276 = uVar19[iVar2];
				func_107(&iLocal_276, 1);
			}
			if (iLocal_89)
			{
				if (iVar1 == -1)
				{
					iLocal_277 = 0;
				}
				else
				{
					iLocal_277 = uVar19[iVar1];
				}
				iLocal_89 = 0;
			}
			else
			{
				iLocal_89 = 1;
			}
			iLocal_95 = MISC::GET_GAME_TIMER();
			return 1;
		}
	}
	return 0;
}

void func_107(int iParam0, int iParam1)//Position - 0x7C65
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, -1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (PED::IS_PED_MODEL(iVar0, func_144()))
				{
					if (!PED::IS_PED_INJURED(iVar0))
					{
						PED::SET_PED_CONFIG_FLAG(iVar0, 251, iParam1);
					}
				}
			}
		}
	}
}

void func_108()//Position - 0x7CB6
{
	if (iLocal_54 == 2 || iLocal_54 == 3)
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_269, "HAIL_TAXI", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_269, "FP_HAIL_TAXI", 3))
		{
			func_58();
		}
	}
}

int func_109()//Position - 0x7CFA
{
	if (!func_3())
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	return 1;
}

void func_110()//Position - 0x7D2F
{
	if (iLocal_51 == 0)
	{
		if (func_140(131))
		{
			if (func_139(func_82()))
			{
				func_138();
				func_137(&uLocal_100, 0, PLAYER::PLAYER_PED_ID(), sLocal_265, 0, 1);
				func_137(&uLocal_100, 1, 0, "TaxiDispatch", 0, 1);
				if (func_131())
				{
					if (func_130(&uLocal_100, 131, "TAXISAU", sLocal_266, sLocal_266, "TX_2", "TX_2", sLocal_267, sLocal_267, 2, 1, 0, 0, 0))
					{
						iLocal_90 = 0;
						iLocal_51 = 2;
					}
				}
				else if (func_116(&uLocal_100, 131, "TAXISAU", sLocal_266, sLocal_266, "TX_2A", "TX_2A", 2, 1, 0, 0, 0))
				{
					iLocal_51 = 1;
				}
			}
		}
	}
	else if (iLocal_51 == 1)
	{
		if (func_115())
		{
			iLocal_51 = 0;
		}
	}
	else if (iLocal_51 == 2)
	{
		if (func_115())
		{
			if (func_114())
			{
				if (!iLocal_90)
				{
					iLocal_51 = 0;
				}
			}
			else if (func_113())
			{
				if (!iLocal_90)
				{
					iLocal_51 = 0;
				}
			}
			if (iLocal_51 != 0)
			{
				if (!func_112(19))
				{
					func_111(19);
				}
				func_13();
				Local_55.f_9 = MISC::GET_GAME_TIMER();
				Local_55.f_20 = { Local_273 };
				Local_55.f_30 = func_86(PLAYER::PLAYER_PED_ID());
				Local_55.f_8 = 0;
				Local_55.f_10 = 0;
				iLocal_52 = 1;
				iLocal_51 = 0;
			}
		}
		else if (!iLocal_90)
		{
			if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() == 1)
			{
				iLocal_90 = 1;
			}
		}
	}
}

void func_111(int iParam0)//Position - 0x7E73
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		MISC::SET_BIT(&(Global_SAVE_DATA.FLOW_HELP_STRUCT.HELP_DISPLAYED_BITSET_ARRAY[iVar1]), iVar0);
	}
}

int func_112(int iParam0)//Position - 0x7EB5
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_HELP_STRUCT.HELP_DISPLAYED_BITSET_ARRAY[iVar1], iVar0);
	}
	return 0;
}

int func_113()//Position - 0x7EF8
{
	if (Global_14378)
	{
		return 1;
	}
	return 0;
}

int func_114()//Position - 0x7F0E
{
	if (Global_15741 == 1 || Global_16708 == 1)
	{
		return 1;
	}
	return 0;
}

int func_115()//Position - 0x7F31
{
	if (Global_15692 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_116(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x7F48
{
	var uVar0;
	var uVar11;
	
	func_129(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_128();
	if (iParam8 == 1)
	{
		Global_15704 = 1;
	}
	else
	{
		Global_15704 = 0;
	}
	uVar0 = 10;
	uVar11 = 10;
	func_126(2, &uVar0, &uVar11, sParam3, sParam4, sParam5, sParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_117(&uVar0, &uVar11, iParam7, bParam11);
}

int func_117(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x7FA7
{
	int iVar0;
	
	Global_15693 = 0;
	if (Global_15692 == 0 || Global_15694 == 2)
	{
		if (Global_15692 != 0)
		{
			if (iParam2 > Global_15694)
			{
				if (bParam3 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
					Global_14393.f_1 = 3;
					Global_15692 = 0;
					Global_15693 = 1;
					Global_15745 = 0;
					Global_15688 = 0;
					Global_15689 = 0;
				}
				else
				{
					func_125();
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
		if (func_124(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_123();
		Global_14981 = { Global_15146 };
		Global_15698 = Global_15699;
		Global_15705 = Global_15706;
		Global_2621442 = Global_2621441;
		Global_15707 = { Global_15723 };
		Global_15700 = Global_15701;
		Global_16682 = Global_16683;
		Global_16690 = { Global_16696 };
		Global_16688 = Global_16689;
		Global_16684 = Global_16685;
		Global_16686 = Global_16687;
		Global_15311.f_368 = Global_16679;
		Global_15311.f_369 = Global_16680;
		Global_15311.f_370 = Global_16681;
		Global_15688 = Global_15689;
		Global_15690 = Global_15691;
		if (Global_15950 == 0)
		{
			Global_15846[0 /*6*/] = { Global_15872[0 /*6*/] };
			Global_15846[1 /*6*/] = { Global_15872[1 /*6*/] };
			Global_15898[0 /*6*/] = { Global_15924[0 /*6*/] };
			Global_15898[1 /*6*/] = { Global_15924[1 /*6*/] };
			Global_15859[0 /*6*/] = { Global_15885[0 /*6*/] };
			Global_15859[1 /*6*/] = { Global_15885[1 /*6*/] };
			Global_15911[0 /*6*/] = { Global_15937[0 /*6*/] };
			Global_15911[1 /*6*/] = { Global_15937[1 /*6*/] };
		}
		if (Global_15698)
		{
			MISC::CLEAR_BIT(&Global_2263, 20);
			MISC::CLEAR_BIT(&Global_2264, 17);
			MISC::CLEAR_BIT(&Global_2265, 0);
			if (bParam3)
			{
				func_122();
				if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
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
				if (func_121())
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
					if (Global_15950 == 0)
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
			}
			if (func_120())
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
			}
			func_119();
			Global_15702 = bParam3;
		}
		Global_15694 = iParam2;
		if (Global_15688 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_15688)
			{
				StringCopy(&(Global_15311.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_15311.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_14558 = 0;
		func_118();
		return 1;
	}
	if (Global_15692 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_15694 || iParam2 == Global_15694)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_125();
	}
	return 0;
}

void func_118()//Position - 0x8312
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

void func_119()//Position - 0x8344
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

int func_120()//Position - 0x83D9
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_121()//Position - 0x8400
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

void func_122()//Position - 0x8499
{
	if (func_84(14))
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
		Global_14393 = func_82();
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

void func_123()//Position - 0x853A
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

bool func_124(int iParam0, int iParam1)//Position - 0x8592
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

void func_125()//Position - 0x85CD
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

void func_126(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x8624
{
	func_127(iParam0);
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_127(var uParam0)//Position - 0x8694
{
	Global_15689 = uParam0;
	Global_15699 = 1;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16689 = 0;
	Global_2621441 = 0;
}

void func_128()//Position - 0x86BA
{
	Global_15740 = 0;
	Global_15699 = 1;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_15706 = 0;
	Global_16689 = 0;
	Global_15697 = 0;
	Global_15744 = 0;
	Global_15746 = 0;
	Global_2621441 = 0;
}

void func_129(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x86F3
{
	Global_15146 = { *uParam0 };
	Global_1579 = uParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = iParam5;
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

bool func_130(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)//Position - 0x8749
{
	var uVar0;
	var uVar11;
	
	func_129(uParam0, iParam1, sParam2, iParam11, iParam12, 0);
	func_128();
	if (iParam10 == 1)
	{
		Global_15704 = 1;
	}
	else
	{
		Global_15704 = 0;
	}
	uVar0 = 10;
	uVar11 = 10;
	func_126(3, &uVar0, &uVar11, sParam3, sParam4, sParam5, sParam6, sParam7, sParam8, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_117(&uVar0, &uVar11, iParam9, bParam13);
}

int func_131()//Position - 0x87AA
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	
	if (iLocal_52 != 0)
	{
		return 0;
	}
	if (iLocal_54 == 4 || iLocal_54 == 2)
	{
		return 0;
	}
	if (iLocal_53 != 0)
	{
		return 0;
	}
	if (SCRIPT::IS_THREAD_ACTIVE(uLocal_268))
	{
		return 0;
	}
	if (!func_109())
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
		{
			return 0;
		}
	}
	func_132();
	fVar3 = 50f;
	iVar4 = 1;
	if (!func_72(Local_273))
	{
		iVar4 = 9;
	}
	if (!PATHFIND::GET_CLOSEST_VEHICLE_NODE(Local_273, &Var0, iVar4, 100f, 2.5f))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var0, fVar3, fVar3, 20f, 0, 1, 0))
	{
		return 0;
	}
	if (func_101(Local_273, 1))
	{
		return 0;
	}
	return 1;
}

int func_132()//Position - 0x8886
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = func_82();
		if (func_85(iVar0))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			iVar4 = 0;
			while (iVar4 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls)
			{
				if (MISC::IS_BIT_SET(Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[iVar4 /*15*/].f_2, iVar0))
				{
					if (func_135(Var1, func_136(iVar4)))
					{
						return 1;
					}
				}
				iVar4++;
			}
			iVar4 = 0;
			while (iVar4 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Texts)
			{
				if (MISC::IS_BIT_SET(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_TEXTS_ARRAY[iVar4 /*14*/].f_2, iVar0))
				{
					if (func_135(Var1, func_134(iVar4)))
					{
						return 1;
					}
				}
				iVar4++;
			}
			iVar4 = 0;
			while (iVar4 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Emails)
			{
				if (MISC::IS_BIT_SET(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_EMAILS_ARRAY[iVar4 /*10*/].f_2, iVar0))
				{
					if (func_135(Var1, func_133(iVar4)))
					{
						return 1;
					}
				}
				iVar4++;
			}
		}
	}
	return 0;
}

int func_133(int iParam0)//Position - 0x898E
{
	return Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_EMAILS_ARRAY[iParam0 /*10*/].f_7;
}

int func_134(int iParam0)//Position - 0x89A6
{
	return Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_TEXTS_ARRAY[iParam0 /*14*/].f_7;
}

int func_135(struct<3> Param0, int iParam3)//Position - 0x89BE
{
	if (iParam3 != -1)
	{
		if (iParam3 >= Global_34914)
		{
			return 0;
		}
		if (SYSTEM::VDIST2(Param0, Global_34914[iParam3 /*5*/]) <= (Global_34914[iParam3 /*5*/].f_3 * Global_34914[iParam3 /*5*/].f_3))
		{
			return 1;
		}
		else if (Global_34914[iParam3 /*5*/].f_4 != -1)
		{
			return func_135(Param0, Global_34914[iParam3 /*5*/].f_4);
		}
	}
	return 0;
}

int func_136(int iParam0)//Position - 0x8A29
{
	return Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[iParam0 /*15*/].f_7;
}

void func_137(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x8A3E
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68245)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

void func_138()//Position - 0x8AD9
{
	int iVar0;
	
	iVar0 = func_82();
	if (iVar0 == 0)
	{
		sLocal_265 = "MICHAEL";
		sLocal_266 = "TX_1M";
		sLocal_267 = "TX_3M";
	}
	else if (iVar0 == 1)
	{
		sLocal_265 = "FRANKLIN";
		sLocal_266 = "TX_1F";
		sLocal_267 = "TX_3F";
	}
	else if (iVar0 == 2)
	{
		sLocal_265 = "TREVOR";
		sLocal_266 = "TX_1T";
		sLocal_267 = "TX_3T";
	}
}

int func_139(int iParam0)//Position - 0x8B3E
{
	if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
	{
		if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[131 /*29*/].f_12[iParam0] == 1)
		{
			return 1;
		}
	}
	else if (iParam0 == 147)
	{
		if ((Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[131 /*29*/].f_12[0] == 1 || Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[131 /*29*/].f_12[1] == 1) || Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[131 /*29*/].f_12[2] == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_140(int iParam0)//Position - 0x8BCE
{
	if ((Global_16806 || Global_16805) || Global_16807)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_97[iParam0 /*10*/].f_8 != 138)
	{
		if (Global_14393.f_1 == 10)
		{
			if (Global_1578 == iParam0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_141()//Position - 0x8C32
{
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (Global_87287 == 1)
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (Global_96404)
	{
		return 0;
	}
	if (Global_4)
	{
		return 0;
	}
	if (REPLAY::_IS_INTERIOR_RENDERING_DISABLED())
	{
		return 0;
	}
	return 1;
}

void func_142()//Position - 0x8C81
{
	func_6();
	func_4(1);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_269);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("taxi"), 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_99);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_98);
	if (iLocal_87)
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(0);
		}
	}
}

int func_143()//Position - 0x8CC0
{
	return joaat("taxi");
}

int func_144()//Position - 0x8CCD
{
	return joaat("a_m_y_stlat_01");
}

