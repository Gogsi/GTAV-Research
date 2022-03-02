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
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	float fLocal_40 = 0f;
	float fLocal_41 = 0f;
	struct<3> Local_42 = { 0, 0, 0 } ;
	struct<3> Local_45 = { 0, 0, 0 } ;
	struct<3> Local_48 = { 0, 0, 0 } ;
	float fLocal_51 = 0f;
	struct<3> Local_52 = { 0, 0, 0 } ;
	float fLocal_55 = 0f;
	struct<3> Local_56 = { 0, 0, 0 } ;
	float fLocal_59 = 0f;
	float fLocal_60 = 0f;
	float fLocal_61 = 0f;
	var uLocal_62 = 16;
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
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
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
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	fLocal_40 = 50f;
	fLocal_41 = 2500f;
	Local_42 = { 409.1539f, -1626.677f, 28.2928f };
	Local_48 = { 409.2747f, -1623.022f, 28.29278f };
	fLocal_51 = 202.6928f;
	Local_52 = { 415.6071f, -1647.604f, 28.2928f };
	fLocal_55 = 85.7173f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
	{
		func_27();
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("ambient_tonyacall2")) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID());
		if (GlobalFunc_893(0, 14))
		{
			func_27();
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			Local_45 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		}
		if (SYSTEM::VDIST2(Local_45, Local_42) > fLocal_41)
		{
			func_27();
		}
		switch (iLocal_36)
		{
			case 0:
				if (func_22())
				{
					iLocal_36 = 1;
				}
				break;
			
			case 1:
				STREAMING::REQUEST_ANIM_DICT("amb@world_human_stand_mobile@female@standing@call@enter");
				STREAMING::REQUEST_ANIM_DICT("amb@world_human_stand_mobile@female@standing@call@base");
				STREAMING::REQUEST_ANIM_DICT("amb@world_human_stand_mobile@female@standing@call@exit");
				STREAMING::REQUEST_MODEL(joaat("prop_phone_ing"));
				if (((STREAMING::HAS_MODEL_LOADED(joaat("prop_phone_ing")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_stand_mobile@female@standing@call@enter")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_stand_mobile@female@standing@call@base")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_stand_mobile@female@standing@call@exit"))
				{
					iLocal_36 = 2;
				}
				break;
			
			case 2:
				if (func_1())
				{
					iLocal_36 = 3;
				}
				break;
			
			case 3:
				func_27();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

int func_1()//Position - 0x1B6
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	var uVar7;
	float fVar8;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_37))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(uLocal_37, 1) };
	}
	else
	{
		Var3 = { 408.5002f, -1624.583f, 29.2928f };
	}
	if ((SYSTEM::VDIST2(Var0, Var3) > 10000f || ENTITY::IS_ENTITY_DEAD(uLocal_37)) || func_21())
	{
		return 1;
	}
	switch (iLocal_39)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_37) && !ENTITY::IS_ENTITY_DEAD(uLocal_37))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(uLocal_37, Local_56, 1f, 1f, 1f, 0, 1, 0))
				{
					TASK::CLEAR_SEQUENCE_TASK(&uVar7);
					TASK::OPEN_SEQUENCE_TASK(&uVar7);
					TASK::TASK_ACHIEVE_HEADING(0, fLocal_59, 0);
					TASK::TASK_PLAY_ANIM(0, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 4f, -4f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "amb@world_human_stand_mobile@female@standing@call@base", "base", 4f, -4f, -1, 1, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar7);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_37, uVar7);
					TASK::CLEAR_SEQUENCE_TASK(&uVar7);
					iLocal_39 = 1;
				}
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_37) && !ENTITY::IS_ENTITY_DEAD(uLocal_37))
			{
				if (TASK::GET_SEQUENCE_PROGRESS(uLocal_37) == 1)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(uLocal_38))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_37, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 3))
						{
							fVar8 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_37, "amb@world_human_stand_mobile@female@standing@call@enter", "enter");
							if (fVar8 >= 0.157f)
							{
								uLocal_38 = OBJECT::CREATE_OBJECT(joaat("prop_phone_ing"), 1f, 1f, 1f, 1, 1, 0);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_38, uLocal_37, PED::GET_PED_BONE_INDEX(uLocal_37, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
							}
						}
					}
				}
				else if (TASK::GET_SEQUENCE_PROGRESS(uLocal_37) == 2)
				{
					iVar6 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 2);
					if (iVar6 == 0)
					{
						if (GlobalFunc_10643(&uLocal_62, "TOWAUD", "TONYA_CALL3", 8, 0, 0, 0))
						{
							iLocal_39 = 2;
						}
					}
					else if (GlobalFunc_10643(&uLocal_62, "TOWAUD", "TONYA_CALL4", 8, 0, 0, 0))
					{
						iLocal_39 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_37))
			{
				if (!GlobalFunc_111())
				{
					TASK::CLEAR_SEQUENCE_TASK(&uVar7);
					TASK::OPEN_SEQUENCE_TASK(&uVar7);
					TASK::TASK_PLAY_ANIM(0, "amb@world_human_stand_mobile@female@standing@call@exit", "exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", -1, 1);
					TASK::CLOSE_SEQUENCE_TASK(uVar7);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_37, uVar7);
					TASK::CLEAR_SEQUENCE_TASK(&uVar7);
					iLocal_39 = 3;
				}
			}
			break;
		
		case 3:
			func_2();
			if (SYSTEM::VDIST2(Var0, Var3) < 25f)
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
				{
					if (GlobalFunc_10643(&uLocal_62, "TOWAUD", "TOW_MESS2", 8, 0, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_39 = 4;
					}
				}
			}
			break;
		
		case 4:
			func_2();
			if (SYSTEM::TIMERA() > 10000)
			{
				iLocal_39 = 3;
			}
			break;
	}
	return 0;
}

void func_2()//Position - 0x45A
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_37) && !ENTITY::IS_ENTITY_DEAD(uLocal_37))
	{
		if (TASK::GET_SEQUENCE_PROGRESS(uLocal_37) == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_38))
			{
				OBJECT::DELETE_OBJECT(&uLocal_38);
				TASK::TASK_LOOK_AT_ENTITY(uLocal_37, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_37) && !ENTITY::IS_ENTITY_DEAD(uLocal_37))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_38))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_37, 993674639) == 1)
			{
				OBJECT::DELETE_OBJECT(&uLocal_38);
			}
		}
	}
}



















int func_21()//Position - 0xD09
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(uLocal_37))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_37) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_38))
			{
				ENTITY::DETACH_ENTITY(uLocal_38, 1, 1);
			}
			AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_37, 1805844857) != 1)
			{
				PED::SET_PED_KEEP_TASK(uLocal_37, 1);
				TASK::TASK_SMART_FLEE_PED(uLocal_37, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
				return 1;
			}
		}
	}
	return 0;
}

int func_22()//Position - 0xD88
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	PED::GET_CLOSEST_PED(Var0, fLocal_40, 1, 1, &uVar3, 0, 1, -1);
	if (ENTITY::DOES_ENTITY_EXIST(uVar3) && !ENTITY::IS_ENTITY_DEAD(uVar3))
	{
		iVar4 = ENTITY::GET_ENTITY_MODEL(uVar3);
		if (iVar4 == joaat("ig_tonya"))
		{
			uLocal_37 = uVar3;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_37, 1, 0);
			PED::SET_PED_MONEY(uLocal_37, 0);
			PED::SET_PED_CAN_BE_TARGETTED(uLocal_37, 0);
			PED::SET_PED_NAME_DEBUG(uLocal_37, "TONYA");
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_37, 1862763509);
			GlobalFunc_878(&uLocal_62, 3, uLocal_37, "TONYA", 1, 1);
			func_24();
			if (!GlobalFunc_105(Local_56))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_37, 713668775) != 1)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_37, Local_56, 1f, -1, 0.25f, 0, fLocal_59);
					PED::SET_PED_KEEP_TASK(uLocal_37, 1);
				}
				return 1;
			}
		}
	}
	return 0;
}


void func_24()//Position - 0xE87
{
	struct<3> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_37) && !ENTITY::IS_ENTITY_DEAD(uLocal_37))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(uLocal_37, 1) };
		if (GlobalFunc_105(Local_56))
		{
			fLocal_60 = SYSTEM::VDIST(Var0, Local_48);
			fLocal_61 = SYSTEM::VDIST(Var0, Local_52);
			if (fLocal_60 < fLocal_61)
			{
				Local_56 = { Local_48 };
				fLocal_59 = fLocal_51;
			}
			else
			{
				Local_56 = { Local_52 };
				fLocal_59 = fLocal_55;
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 407.4285f, -1626.572f, 27.29278f, 412.8245f, -1620.167f, 33.29278f, 6f, 0, 1, 0))
				{
					Local_56 = { Local_52 };
					fLocal_59 = fLocal_55;
				}
			}
		}
	}
}



void func_27()//Position - 0x1026
{
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_stand_mobile@female@standing@call@enter");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_stand_mobile@female@standing@call@base");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_stand_mobile@female@standing@call@exit");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_phone_ing"));
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_37))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_37))
		{
			PED::DELETE_PED(&uLocal_37);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uLocal_37);
		}
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

