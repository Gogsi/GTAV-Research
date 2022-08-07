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
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	struct<3> Local_56 = { 0, 0, 0 } ;
	struct<3> Local_59 = { 0, 0, 0 } ;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	var uLocal_64 = 8;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 2;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 8;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 8;
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
	int iLocal_100 = 0;
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
	var uLocal_122 = 8;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 4;
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
	var uLocal_141 = 4;
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
	var uLocal_156 = 4;
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
	var uLocal_171 = 4;
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
	var uLocal_186 = 4;
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
	var uLocal_201 = 4;
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
	var uLocal_216 = 4;
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
	var uLocal_231 = 4;
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
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
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
	Local_56 = { 0f, 0f, 0f };
	Local_59 = { 0f, 0f, 0f };
	iLocal_62 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_101);
		AUDIO::STOP_STREAM();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(0);
		}
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			SYSTEM::WAIT(0);
		}
	}
	while (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		SYSTEM::WAIT(0);
	}
	GlobalFunc_8316(1, 1, 1, 0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
	HUD::DISPLAY_RADAR(0);
	HUD::DISPLAY_HUD(0);
	while (func_560())
	{
		func_558();
		SYSTEM::WAIT(0);
	}
	func_553();
	func_552(1);
	AUDIO::SKIP_RADIO_FORWARD();
	GlobalFunc_8316(0, 1, 1, 0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	if (GlobalFunc_485(136))
	{
		func_541(2);
	}
	else if (GlobalFunc_485(135))
	{
		func_541(0);
	}
	GlobalFunc_5095(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT), -1);
	if (GlobalFunc_6809(2))
	{
		if (GlobalFunc_6809(0))
		{
			GlobalFunc_3033(Global_88538[74 /*3*/], -1082130432, 350, 1114636288, 0);
			func_372(74, 64);
			GlobalFunc_8646(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT), 0, 72);
			GlobalFunc_8646(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT), 1, 73);
		}
		else
		{
			while (!func_10(2, 1))
			{
				SYSTEM::WAIT(0);
			}
			GlobalFunc_3033(Global_88538[267 /*3*/], -1082130432, 350, 1114636288, 0);
			func_372(267, 64);
			GlobalFunc_8646(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT), 1, 73);
		}
	}
	else
	{
		while (!func_10(0, 1))
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_3033(Global_88538[83 /*3*/], -1082130432, 350, 1114636288, 0);
		func_372(83, 64);
		GlobalFunc_8646(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT), 1, 73);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_87845[iVar0]))
		{
			if (Global_87845[iVar0] != PLAYER::PLAYER_PED_ID())
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_87845[iVar0], 1))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_87845[iVar0], 1, 1);
				}
				PED::DELETE_PED(&(Global_87845[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_89952)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_89952[iVar0]))
		{
			if (Global_89952[iVar0] != PLAYER::PLAYER_PED_ID())
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_89952[iVar0], 1))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_89952[iVar0], 1, 1);
				}
				PED::DELETE_PED(&(Global_89952[iVar0]));
			}
		}
		iVar0++;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		CAM::DO_SCREEN_FADE_IN(2500);
	}
	while (!CAM::IS_SCREEN_FADED_IN())
	{
		SYSTEM::WAIT(0);
	}
	if (NETWORK::_FACEBOOK_IS_AVAILABLE())
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT.f_290, 2))
		{
			GlobalFunc_5849(1);
			NETWORK::_FACEBOOK_SET_MILESTONE_COMPLETE(1);
			MISC::SET_BIT(&(Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT.f_290), 2);
		}
	}
	Global_54750 = 0;
	GlobalFunc_45(0, 0);
	GlobalFunc_585(137, 1);
	GlobalFunc_6677("SHRINK_SOCIAL", 3, 0, -1, 10000, 7, 0, 0, 0);
	GlobalFunc_4907();
	SCRIPT::TERMINATE_THIS_THREAD();
}










int func_10(int iParam0, bool bParam1)//Position - 0x829
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	
	Global_17098.f_13 = 0;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	iVar0 = GlobalFunc_584(iParam0);
	iVar1 = GlobalFunc_4917(iVar0);
	if (iVar1 == 0)
	{
		return 1;
	}
	if (PED::IS_PED_MODEL(PLAYER::PLAYER_PED_ID(), iVar1))
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iVar1);
	if (!STREAMING::HAS_MODEL_LOADED(iVar1))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1))
		{
			iVar3 = -1;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 0))
		{
			iVar3 = 0;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 1))
		{
			iVar3 = 1;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 2))
		{
			iVar3 = 2;
		}
		else
		{
			iVar3 = -1;
		}
	}
	else
	{
		iVar2 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		func_359(&(Global_17052[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2));
		func_91(&(Global_17052[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_17052.f_7 = iParam0;
	Global_17052.f_39 = 1;
	func_13(&Global_17052, 0, 0, 0);
	GlobalFunc_5124(iParam0);
	return 1;
}



int func_13(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x9E1
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	char cVar6[64];
	int iVar22;
	var uVar23;
	char* sVar24;
	
	if (!uParam0->f_39)
	{
		if (uParam0->f_7 == 4)
		{
			return 1;
		}
	}
	if ((!PED::IS_PED_INJURED((*uParam0)[uParam0->f_7]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && (*uParam0)[uParam0->f_7] != PLAYER::PLAYER_PED_ID())
	{
		if (!bParam2)
		{
			if ((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			else
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			if ((PED::IS_PED_RAGDOLL((*uParam0)[uParam0->f_7]) && !FIRE::IS_ENTITY_ON_FIRE((*uParam0)[uParam0->f_7])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE((*uParam0)[uParam0->f_7]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam0)[uParam0->f_7]);
			}
			else
			{
				TASK::CLEAR_PED_TASKS((*uParam0)[uParam0->f_7]);
			}
		}
		iVar0 = PLAYER::PLAYER_PED_ID();
		iVar1 = GlobalFunc_8315();
		if (!uParam0->f_23)
		{
			GlobalFunc_9270(iVar0, 0);
		}
		GlobalFunc_5127(iVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, 1);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, 1);
		iVar2 = GlobalFunc_584(uParam0->f_7);
		GlobalFunc_9270((*uParam0)[uParam0->f_7], 0);
		fVar3 = (((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH((*uParam0)[uParam0->f_7])) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH((*uParam0)[uParam0->f_7])) - 100f)) * 100f);
		switch (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()))
		{
			case 0:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTime"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("BulletTime");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTimeOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("BulletTimeOut");
				}
				break;
			
			case 1:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocus"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocus");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocusOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocusOut");
				}
				break;
			
			case 2:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMIST"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("REDMIST");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMISTOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("REDMISTOut");
				}
				break;
		}
		if (GlobalFunc_42(GlobalFunc_8315()))
		{
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
			{
				PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
			}
		}
		PLAYER::CHANGE_PLAYER_PED(PLAYER::PLAYER_ID(), (*uParam0)[uParam0->f_7], bParam2, 0);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
		if (iParam3 & 1 != 0)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 210, 0);
		}
		if (GlobalFunc_6687(0) || GlobalFunc_6687(3))
		{
			if (Global_17098.f_13)
			{
				iVar4 = 0;
				while (iVar4 < 7)
				{
					if (MISC::IS_BIT_SET(Global_Running_Missions[iVar4 /*5*/].f_1, 2))
					{
						iVar5 = Global_Running_Missions[iVar4 /*5*/];
						StringCopy(&cVar6, "MISS_SWITCH_", 64);
						StringConCat(&cVar6, &(Global_81155[Global_68514.f_109[iVar5 /*4*/] /*34*/]), 64);
						STATS::STAT_INCREMENT(MISC::GET_HASH_KEY(&cVar6), 1f);
					}
					iVar4++;
				}
			}
		}
		Global_17098.f_13 = 0;
		uParam0->f_5 = GlobalFunc_237(iVar1);
		if (uParam0->f_5 == 4)
		{
			uParam0->f_5 = 3;
		}
		(*uParam0)[uParam0->f_5] = iVar0;
		(*uParam0)[uParam0->f_7] = 0;
		uParam0->f_6 = GlobalFunc_237(iVar2);
		uParam0->f_7 = 4;
		iVar22 = PLAYER::PLAYER_PED_ID();
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
		GlobalFunc_7709(iVar22);
		PED::_0xE861D0B05C7662B8(iVar22, 0, 0);
		if (fVar3 < 25f && !PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), SYSTEM::ROUND((((25f / 100f) * (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID())) - 100f)) + 100f)));
		}
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar0, 1);
				GlobalFunc_7709(iVar0);
				PED::_0xE861D0B05C7662B8(iVar0, 0, 0);
				PED::SET_PED_STEALTH_MOVEMENT(iVar0, 0, 0);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			sVar24 = ENTITY::GET_ENTITY_SCRIPT(iVar0, &uVar23);
			if (!MISC::IS_STRING_NULL(sVar24))
			{
				if (!MISC::ARE_STRINGS_EQUAL(sVar24, SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 0, 1);
				}
				PED::DELETE_PED(&iVar0);
			}
		}
		Global_87649 = 1;
		GlobalFunc_5126(PLAYER::PLAYER_PED_ID());
		GlobalFunc_8376();
		GlobalFunc_582(iVar2);
		GlobalFunc_9118();
		GlobalFunc_8506(iVar2);
		GlobalFunc_10882(GlobalFunc_4933(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 145, 0));
		PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), 0);
		PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(PLAYER::PLAYER_ID(), GlobalFunc_485(67));
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(PLAYER::PLAYER_ID(), GlobalFunc_485(68));
		}
		GlobalFunc_6801(iVar2, &iVar22);
		if (((GlobalFunc_39(0) || GlobalFunc_39(3)) || GlobalFunc_39(2)) || GlobalFunc_39(4))
		{
			PED::SET_PED_CONFIG_FLAG(iVar22, 32, 0);
			PED::SET_PED_CONFIG_FLAG(iVar22, 250, 0);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar22, 32, 1);
			PED::SET_PED_CONFIG_FLAG(iVar22, 250, 1);
		}
		if (!GlobalFunc_579())
		{
			GlobalFunc_8382();
		}
		Global_87286 = 0;
		return 1;
	}
	else
	{
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
		}
		if (PED::IS_PED_INJURED((*uParam0)[uParam0->f_7]))
		{
		}
		if (PLAYER::PLAYER_PED_ID() == (*uParam0)[uParam0->f_7])
		{
		}
	}
	return 0;
}














































































int func_91(var uParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x847B
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
			*uParam0 = PED::CREATE_PED(26, iVar0, Param2, uParam5, 0, 0);
			GlobalFunc_8645(*uParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
			func_351(*uParam0);
			GlobalFunc_7694(*uParam0, 1, 0);
			GlobalFunc_7693(*uParam0);
			GlobalFunc_7707(*uParam0);
			func_93(*uParam0, bParam8);
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


int func_93(int iParam0, bool bParam1)//Position - 0x8593
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_5101(iVar0))
	{
		GlobalFunc_5100(iVar0, 0);
		func_326(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		func_183(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (GlobalFunc_7685(iParam0))
		{
			GlobalFunc_5100(iVar0, 0);
			func_326(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			func_183(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[120] && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122])
			{
				func_326(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (GlobalFunc_10939(iParam0, 3, 169))
					{
						func_326(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						return 1;
					}
				}
			}
			if (GlobalFunc_10939(iParam0, 12, 6))
			{
				func_326(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10939(iParam0, 12, 17))
			{
				if (!GlobalFunc_10941(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_326(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10939(iParam0, 12, 20))
			{
				if (!GlobalFunc_10941(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_326(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10939(iParam0, 12, 21))
			{
				if (!GlobalFunc_10941(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_326(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10939(iParam0, 12, 22))
			{
				if (!GlobalFunc_10941(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_326(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10939(iParam0, 12, 11))
			{
				func_326(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10939(iParam0, 12, 10))
			{
				func_326(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10939(iParam0, 12, 50))
			{
				func_326(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10939(iParam0, 14, 59))
			{
				func_326(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10939(iParam0, 8, 22))
			{
				func_326(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10939(iParam0, 12, 14))
			{
				func_326(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_10939(iParam0, 12, 13))
			{
				if (!GlobalFunc_10941(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_326(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10939(iParam0, 12, 14))
			{
				if (!GlobalFunc_10941(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_326(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10939(iParam0, 12, 15))
			{
				if (!GlobalFunc_10941(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_326(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10939(iParam0, 12, 4))
			{
				func_326(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10939(iParam0, 12, 3))
			{
				func_326(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10939(iParam0, 14, 82))
			{
				func_326(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10939(iParam0, 8, 76))
			{
				func_326(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10939(iParam0, 12, 1))
			{
				func_326(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 2:
			if (GlobalFunc_10939(iParam0, 12, 12))
			{
				func_326(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10939(iParam0, 12, 15))
			{
				func_326(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (GlobalFunc_10939(iParam0, 3, 71))
				{
					func_326(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10939(iParam0, 12, 17))
			{
				if (!GlobalFunc_10941(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_326(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10939(iParam0, 12, 18))
			{
				if (!GlobalFunc_10941(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_326(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10939(iParam0, 12, 19))
			{
				if (!GlobalFunc_10941(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_326(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10939(iParam0, 12, 7))
			{
				func_326(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10939(iParam0, 12, 6))
			{
				func_326(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10939(iParam0, 14, 88))
			{
				func_326(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10939(iParam0, 8, 17))
			{
				func_326(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10939(iParam0, 12, 11))
			{
				func_326(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
	}
	return 0;
}


























































































void func_183(int iParam0, int iParam1)//Position - 0x221D0
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
				iVar1 = func_325(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					GlobalFunc_521(iVar0);
					func_185(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			GlobalFunc_8507(iParam0, &Var2, 1);
			Global_89752[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				GlobalFunc_9118();
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


void func_185(int iParam0, var uParam1, bool bParam2)//Position - 0x22447
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
			if (func_323(iParam0, iVar1, &iVar2, 0))
			{
				func_326(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_321(iParam0, iVar1, &iVar2))
			{
				func_326(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_6784(741, uParam1->f_60, Global_68104, 1);
			GlobalFunc_6784(742, uParam1->f_61, Global_68104, 1);
			iVar4 = GlobalFunc_4915(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			func_188(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			if (!bParam2)
			{
				iVar5 = GlobalFunc_4915(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_188(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
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



int func_188(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x226DE
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
		Global_68106[1 /*14*/] = { GlobalFunc_10855(iVar5, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		func_283(iVar5, iParam1, iParam2, 1);
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
					Global_68106[1 /*14*/] = { GlobalFunc_10855(iVar5, 10, 0) };
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
						func_283(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_68106[1 /*14*/] = { GlobalFunc_10855(iVar5, iVar0, uVar15[iVar0]) };
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
								Global_68106[1 /*14*/] = { GlobalFunc_10855(iVar5, 14, uVar31[iVar1]) };
								GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
								if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
								{
									func_283(iVar5, iVar0, uVar15[iVar0], 1);
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
								func_283(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10855(iVar5, iVar0, func_281(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					uVar41 = { GlobalFunc_7617(iVar5, 0) };
					func_188(iParam0, iVar0, uVar41[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
			}
			iVar0++;
		}
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0)
		{
			iVar57 = GlobalFunc_9107();
			if (iVar57 != -1)
			{
				func_278(iVar57, 0, Global_68104);
			}
			func_276(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar58 = { GlobalFunc_7616(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_68106[1 /*14*/] = { GlobalFunc_10855(iVar5, 14, uVar58[iVar1]) };
			GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
			{
				func_283(iVar5, 14, uVar58[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_68105 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = GlobalFunc_11052(iParam0, iVar5, 14, uVar58[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_188(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
			iVar3 = GlobalFunc_11052(iParam0, iVar5, 1, iVar69, 14, Global_68106[1 /*14*/].f_12);
			if (iVar3 != -99 && iVar3 != iParam2)
			{
				iVar7 = GlobalFunc_5013(iVar5, 1, -1);
			}
		}
		GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
		{
			func_283(iVar5, iParam1, iParam2, 1);
		}
		if (iParam5 == 0)
		{
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11052(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_188(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						iVar73 = GlobalFunc_11052(iParam0, iVar5, 11, iVar70, 3, 0);
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
							func_188(iParam0, 8, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							Global_68106[1 /*14*/] = { GlobalFunc_10855(iVar5, iParam1, iParam2) };
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
								func_188(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								Global_68106[1 /*14*/] = { GlobalFunc_10855(iVar5, iParam1, iParam2) };
								iVar9 = -99;
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									func_188(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								}
								Global_68106[1 /*14*/] = { GlobalFunc_10855(iVar5, iParam1, iParam2) };
							}
						}
					}
					else
					{
						Global_68106[1 /*14*/] = { GlobalFunc_10855(iVar5, 11, iVar70) };
						iVar79 = Global_68106[1 /*14*/].f_3;
						Global_68106[1 /*14*/] = { GlobalFunc_10855(iVar5, 11, iParam2) };
						iVar80 = Global_68106[1 /*14*/].f_3;
						if (iVar79 != iVar80)
						{
							Global_68106[1 /*14*/] = { GlobalFunc_10855(iVar5, 8, iVar71) };
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
										Global_68106[1 /*14*/] = { GlobalFunc_10855(iVar5, 11, iVar82) };
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
								func_188(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_188(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							Global_68106[1 /*14*/] = { GlobalFunc_10855(iVar5, iParam1, iParam2) };
						}
					}
				}
				else
				{
					func_260(iVar5, iParam2);
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_276(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, func_281(iParam0, 8, -1), iParam2);
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = GlobalFunc_6709(2135, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = GlobalFunc_6709(2142, iParam10, 0);
				}
				PED::_SET_PED_HAIR_COLOR(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				func_232(iParam0, iParam2, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			func_276(iParam0, iParam1, iParam2, iParam6, 0);
			iVar84 = GlobalFunc_6669(iParam0, 11);
			if (GlobalFunc_6737(iVar5, iVar84))
			{
				iVar85 = GlobalFunc_6736(iVar5, iParam2, Global_68106[1 /*14*/].f_4);
				func_260(iVar5, iVar85);
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
				iVar87 = GlobalFunc_6709(2082, iParam10, 0);
				iVar88 = GlobalFunc_6709(2083, iParam10, 0);
				iVar89 = GlobalFunc_6709(2084, iParam10, 0);
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
				GlobalFunc_9102(iParam0, Global_68104);
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
						iVar3 = GlobalFunc_11052(iParam0, iVar5, iParam1, iVar94, 14, iVar95);
						iVar96 = GlobalFunc_7953(iParam0, iVar95);
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
					iVar3 = GlobalFunc_11052(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_188(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						if (!GlobalFunc_10936(iParam0, 9, iVar97))
						{
							func_188(iParam0, 9, iVar97, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						func_188(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_188(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
				}
				iVar98 = GlobalFunc_6709(2024, -1, 0);
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
					iVar99 = func_281(iParam0, 4, -1);
					iVar100 = iParam2;
				}
				else
				{
					iVar99 = iParam2;
					iVar100 = func_281(iParam0, 11, -1);
				}
				if (GlobalFunc_6729(iVar5, 11, iVar100))
				{
					if (!GlobalFunc_6728(iVar5, 4, iVar99))
					{
						if (GlobalFunc_6727(iVar5, 4, iVar99, &uVar101))
						{
							func_188(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
				}
				else if (GlobalFunc_6728(iVar5, 4, iVar99))
				{
					if (GlobalFunc_6726(iVar5, 4, iVar99, &uVar101))
					{
						func_188(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
					iVar3 = GlobalFunc_11052(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_188(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar3 = GlobalFunc_11052(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_188(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_189(iParam0, &uVar4))
		{
			func_188(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	if (iVar6 != -99)
	{
		func_188(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar9 != -99)
	{
		func_188(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar7 != -99)
	{
		func_188(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				func_188(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}

int func_189(int iParam0, var uParam1)//Position - 0x237A2
{
	int iVar0;
	int iVar1;
	
	*uParam1 = func_281(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (GlobalFunc_6709(741, Global_68104, 0) != -99 && GlobalFunc_6714())
	{
		if (GlobalFunc_278() == 4)
		{
			return 1;
		}
		if (GlobalFunc_6709(741, Global_68104, 0) == 0 && GlobalFunc_6709(742, Global_68104, 0) == 0)
		{
			if (GlobalFunc_6707(161, Global_68104))
			{
				if (GlobalFunc_6709(2035, Global_68104, 0) == 0)
				{
					return 0;
				}
			}
			else if (GlobalFunc_6709(740, Global_68104, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = GlobalFunc_6709(741, Global_68104, 0);
		iVar1 = GlobalFunc_6709(742, Global_68104, 0);
		if (!GlobalFunc_10936(iParam0, iVar1, iVar0))
		{
			if (GlobalFunc_6707(161, Global_68104))
			{
				*uParam1 = GlobalFunc_6709(2035, Global_68104, 0);
			}
			else
			{
				*uParam1 = GlobalFunc_6709(740, Global_68104, 0);
			}
			GlobalFunc_6784(741, -99, Global_68104, 1);
			GlobalFunc_6784(742, 2, Global_68104, 1);
			return 1;
		}
	}
	return 0;
}











































void func_232(int iParam0, int iParam1, bool bParam2)//Position - 0x28A5D
{
	int iVar0;
	int iVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	func_259(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = GlobalFunc_6735(iVar0, iParam1);
	if (iVar1 != -1)
	{
		func_278(iVar1, 1, Global_68104);
	}
	func_233(iParam0, bParam2, 0);
}

void func_233(int iParam0, bool bParam1, bool bParam2)//Position - 0x28A9F
{
	int iVar0;
	struct<9> Var1;
	int iVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<8> Var21;
	int iVar36;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = Global_68104;
		PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(iParam0);
		iVar14 = GlobalFunc_303(iParam0);
		bVar15 = func_252(iParam0);
		bVar16 = GlobalFunc_5010(iParam0);
		bVar17 = func_249(iParam0);
		if (bParam1)
		{
			bVar16 = true;
		}
		if (bParam2)
		{
			bVar16 = false;
		}
		iVar18 = 0;
		while (iVar18 < 127)
		{
			if (GlobalFunc_8500(iVar18, iVar0))
			{
				if (GlobalFunc_5123(&Var1, iVar18, iVar14, iParam0, -1))
				{
					if (GlobalFunc_9103(&Var1, Var1.f_8, bVar15, bVar16, bParam1, bVar17))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar18++;
		}
		if (GlobalFunc_8500(123, iVar0))
		{
			if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
			{
				PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
		iVar20 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar14);
		iVar19 = 0;
		while (iVar19 < iVar20)
		{
			if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar14, iVar19, &Var21))
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var21))
				{
					iVar36 = (129 + iVar19);
					if (GlobalFunc_8500(iVar36, iVar0))
					{
						if (GlobalFunc_9103(&(Var21.f_7), Var21.f_6, bVar15, bVar16, bParam1, bVar17))
						{
							PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var21.f_2, Var21.f_3);
							GlobalFunc_294(iParam0, Var21.f_2, Var21.f_3);
						}
					}
				}
			}
			iVar19++;
		}
	}
}
















int func_249(int iParam0)//Position - 0x2C5F3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = GlobalFunc_6709(1743, -1, 0);
			if (iVar0 > 15)
			{
				iVar2 = func_281(iParam0, 11, -1);
				if (iVar2 >= 256)
				{
					iVar3 = GlobalFunc_4913(joaat("mp_f_freemode_01"), iVar2, 11, 4);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						if (iVar1 == joaat("MP_Elite_M_Tshirt_1"))
						{
							return 1;
						}
					}
				}
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = GlobalFunc_6709(1743, -1, 0);
			if (iVar0 > 15)
			{
				iVar4 = func_281(iParam0, 11, -1);
				if (iVar4 >= 256)
				{
					iVar5 = GlobalFunc_4913(joaat("mp_f_freemode_01"), iVar4, 11, 4);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						if (iVar1 == joaat("MP_Elite_F_Tshirt_1"))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}



int func_252(int iParam0)//Position - 0x2C7C2
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
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 9:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar2 = func_281(iParam0, 11, -1);
						if (iVar2 >= 237)
						{
							iVar3 = GlobalFunc_4913(joaat("mp_m_freemode_01"), iVar2, 11, 3);
							if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("TAT_DECL_NO_SAVE"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar4 = func_281(iParam0, 8, -1);
						if (iVar4 >= 241)
						{
							iVar5 = GlobalFunc_4913(joaat("mp_m_freemode_01"), iVar4, 8, 3);
							if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("TAT_DECL_NO_SAVE"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
						case 7:
						case 4:
						case 9:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 0:
						case 1:
						case 2:
						case 3:
						case 4:
							return 1;
							break;
					}
					break;
				
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar6 = func_281(iParam0, 11, -1);
						if (iVar6 >= 256)
						{
							iVar7 = GlobalFunc_4913(joaat("mp_f_freemode_01"), iVar6, 11, 4);
							if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("TAT_DECL_NO_SAVE"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar8 = func_281(iParam0, 8, -1);
						if (iVar8 >= 136)
						{
							iVar9 = GlobalFunc_4913(joaat("mp_f_freemode_01"), iVar8, 8, 4);
							if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("TAT_DECL_NO_SAVE"), 0))
							{
								return 1;
							}
						}
					}
					break;
				}
		}
		if (GlobalFunc_302(iParam0))
		{
			return 1;
		}
	}
	return 0;
}







void func_259(int iParam0, int iParam1)//Position - 0x2F81E
{
	struct<12> Var0;
	int iVar13;
	int iVar14;
	int iVar15;
	struct<7> Var16;
	int iVar31;
	int iVar32;
	struct<7> Var33;
	int iVar48;
	int iVar49;
	struct<7> Var50;
	int iVar65;
	int iVar66;
	struct<7> Var67;
	int iVar82;
	
	if (!PED::IS_PED_INJURED(iParam1))
	{
		iVar13 = GlobalFunc_303(iParam1);
		if (iParam0 != 0)
		{
			if (iVar13 == 3 || iVar13 == 4)
			{
				if (iParam0 == 1019352240)
				{
					func_278(13, 0, Global_68104);
					func_278(14, 0, Global_68104);
					func_278(15, 0, Global_68104);
					func_278(16, 0, Global_68104);
					func_278(71, 0, Global_68104);
					func_278(72, 0, Global_68104);
					return;
				}
				else if (iParam0 == 277073536)
				{
					if (iVar13 == 3)
					{
						func_278(73, 0, Global_68104);
						func_278(74, 0, Global_68104);
						func_278(75, 0, Global_68104);
						func_278(76, 0, Global_68104);
						func_278(77, 0, Global_68104);
						func_278(78, 0, Global_68104);
						func_278(79, 0, Global_68104);
						func_278(80, 0, Global_68104);
						func_278(81, 0, Global_68104);
						func_278(82, 0, Global_68104);
						func_278(83, 0, Global_68104);
						func_278(84, 0, Global_68104);
						func_278(85, 0, Global_68104);
						func_278(86, 0, Global_68104);
						func_278(90, 0, Global_68104);
						func_278(91, 0, Global_68104);
						func_278(124, 0, Global_68104);
						func_278(125, 0, Global_68104);
						func_278(87, 0, Global_68104);
						func_278(88, 0, Global_68104);
						func_278(89, 0, Global_68104);
						iVar15 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(3);
						iVar14 = 0;
						while (iVar14 < iVar15)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(3, iVar14, &Var16))
							{
								if (Var16.f_6 == 277073536)
								{
									func_278((129 + iVar14), 0, Global_68104);
								}
							}
							iVar14++;
						}
					}
					else
					{
						func_278(73, 0, Global_68104);
						func_278(74, 0, Global_68104);
						func_278(75, 0, Global_68104);
						func_278(76, 0, Global_68104);
						func_278(77, 0, Global_68104);
						func_278(78, 0, Global_68104);
						func_278(79, 0, Global_68104);
						func_278(80, 0, Global_68104);
						func_278(81, 0, Global_68104);
						func_278(82, 0, Global_68104);
						func_278(83, 0, Global_68104);
						func_278(84, 0, Global_68104);
						func_278(85, 0, Global_68104);
						func_278(92, 0, Global_68104);
						func_278(87, 0, Global_68104);
						func_278(88, 0, Global_68104);
						func_278(89, 0, Global_68104);
						iVar32 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(4);
						iVar31 = 0;
						while (iVar31 < iVar32)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(4, iVar31, &Var33))
							{
								if (Var33.f_6 == 277073536)
								{
									func_278((129 + iVar31), 0, Global_68104);
								}
							}
							iVar31++;
						}
					}
				}
				else if (iParam0 == 2140335355)
				{
					if (iVar13 == 3)
					{
						func_278(93, 0, Global_68104);
						func_278(94, 0, Global_68104);
						func_278(95, 0, Global_68104);
						func_278(96, 0, Global_68104);
						func_278(97, 0, Global_68104);
						func_278(98, 0, Global_68104);
						func_278(99, 0, Global_68104);
						func_278(100, 0, Global_68104);
						func_278(101, 0, Global_68104);
						func_278(102, 0, Global_68104);
						func_278(103, 0, Global_68104);
						func_278(104, 0, Global_68104);
						func_278(105, 0, Global_68104);
						func_278(106, 0, Global_68104);
						func_278(107, 0, Global_68104);
						func_278(108, 0, Global_68104);
						func_278(109, 0, Global_68104);
						func_278(110, 0, Global_68104);
						func_278(111, 0, Global_68104);
						func_278(112, 0, Global_68104);
						func_278(113, 0, Global_68104);
						func_278(114, 0, Global_68104);
						func_278(115, 0, Global_68104);
						func_278(116, 0, Global_68104);
						func_278(117, 0, Global_68104);
						func_278(123, 0, Global_68104);
						iVar49 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(3);
						iVar48 = 0;
						while (iVar48 < iVar49)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(3, iVar48, &Var50))
							{
								if (Var50.f_6 == 2140335355)
								{
									func_278((129 + iVar48), 0, Global_68104);
								}
							}
							iVar48++;
						}
					}
					else
					{
						func_278(93, 0, Global_68104);
						func_278(94, 0, Global_68104);
						func_278(95, 0, Global_68104);
						func_278(96, 0, Global_68104);
						func_278(97, 0, Global_68104);
						func_278(98, 0, Global_68104);
						func_278(99, 0, Global_68104);
						func_278(100, 0, Global_68104);
						func_278(101, 0, Global_68104);
						func_278(102, 0, Global_68104);
						func_278(103, 0, Global_68104);
						func_278(104, 0, Global_68104);
						func_278(105, 0, Global_68104);
						func_278(106, 0, Global_68104);
						func_278(107, 0, Global_68104);
						func_278(108, 0, Global_68104);
						func_278(109, 0, Global_68104);
						func_278(110, 0, Global_68104);
						func_278(111, 0, Global_68104);
						func_278(112, 0, Global_68104);
						func_278(113, 0, Global_68104);
						func_278(114, 0, Global_68104);
						func_278(115, 0, Global_68104);
						func_278(116, 0, Global_68104);
						func_278(117, 0, Global_68104);
						func_278(118, 0, Global_68104);
						func_278(119, 0, Global_68104);
						func_278(120, 0, Global_68104);
						func_278(121, 0, Global_68104);
						func_278(122, 0, Global_68104);
						func_278(123, 0, Global_68104);
						iVar66 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(4);
						iVar65 = 0;
						while (iVar65 < iVar66)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(4, iVar65, &Var67))
							{
								if (Var67.f_6 == 2140335355)
								{
									func_278((129 + iVar65), 0, Global_68104);
								}
							}
							iVar65++;
						}
					}
					return;
				}
			}
			iVar82 = 0;
			while (iVar82 < 127)
			{
				if (GlobalFunc_5123(&Var0, iVar82, iVar13, iParam1, -1))
				{
					if (Var0.f_8 == iParam0)
					{
						func_278(Var0.f_11, 0, Global_68104);
					}
				}
				iVar82++;
			}
		}
	}
}

void func_260(int iParam0, int iParam1)//Position - 0x2FE1B
{
	int iVar0;
	
	iVar0 = GlobalFunc_9107();
	if (iVar0 != -1)
	{
		if (!GlobalFunc_9938(iParam0, iParam1, iVar0))
		{
			func_278(iVar0, 0, Global_68104);
		}
	}
}
















void func_276(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x3509B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 11 || iParam1 == 8)
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (iParam1 == 11)
			{
				if (GlobalFunc_6737(iVar0, iParam2))
				{
					iParam1 = 8;
					iParam2 = GlobalFunc_6669(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = GlobalFunc_6669(iParam0, 11);
				if (!GlobalFunc_6737(iVar0, iVar1))
				{
					return;
				}
			}
			func_259(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!GlobalFunc_9938(iVar0, iParam2, 13) && !GlobalFunc_9938(iVar0, iParam2, 14)) && !GlobalFunc_9938(iVar0, iParam2, 15)) && !GlobalFunc_9938(iVar0, iParam2, 16)) && !GlobalFunc_9938(iVar0, iParam2, 71)) && !GlobalFunc_9938(iVar0, iParam2, 72))
				{
					func_259(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = GlobalFunc_9104(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					GlobalFunc_9105(iParam0, iVar2);
				}
				else
				{
					func_278(iVar2, 1, Global_68104);
				}
			}
		}
	}
}


void func_278(int iParam0, bool bParam1, int iParam2)//Position - 0x35216
{
	if (bParam1)
	{
		if (!GlobalFunc_8500(iParam0, iParam2))
		{
			func_279(iParam0, 1, iParam2);
		}
	}
	else if (GlobalFunc_8500(iParam0, iParam2))
	{
		func_279(iParam0, 0, iParam2);
	}
}

void func_279(int iParam0, bool bParam1, int iParam2)//Position - 0x3524F
{
	var uVar0;
	int iVar1;
	
	uVar0 = GlobalFunc_7899(iParam0, iParam2);
	iVar1 = iParam0;
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&uVar0, GlobalFunc_299(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&uVar0, GlobalFunc_299(iVar1));
		}
		GlobalFunc_6784(GlobalFunc_5009(iParam0), uVar0, iParam2, 1);
	}
}


int func_281(int iParam0, int iParam1, int iParam2)//Position - 0x3530C
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (GlobalFunc_10936(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (GlobalFunc_10936(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return GlobalFunc_7953(iParam0, iParam2);
			}
		}
		else
		{
			return GlobalFunc_6669(iParam0, iParam1);
		}
	}
	return -99;
}


void func_283(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x353D6
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9[2];
	struct<2> Var12;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	struct<2> Var33;
	int iVar50;
	int iVar51;
	int iVar52;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_68104 != GlobalFunc_5() || iParam2 == -99)
		{
			return;
		}
		Global_68106[2 /*14*/] = { GlobalFunc_10855(iParam0, iParam1, iParam2) };
		if (MISC::IS_BIT_SET(Global_68106[2 /*14*/].f_6, 1) && MISC::IS_BIT_SET(Global_68106[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				func_285(Global_2621444, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				func_285(Global_2621444, 2, 1, 1, -1);
			}
			else
			{
				func_285(Global_2621444, 2, 1, 1, -1);
			}
			if (bParam3)
			{
				iVar0 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(Global_2621444);
				iVar1 = 0;
				while (iVar1 < iVar0)
				{
					if (iVar1 < Global_2542253)
					{
						Global_2542253[iVar1] = -1;
						Global_2542364[iVar1] = -1;
					}
					FILES::GET_VARIANT_COMPONENT(Global_2621444, iVar1, &iVar2, &uVar3, &iVar4);
					if (iVar4 != 10)
					{
						if (iVar2 != 0 && iVar2 != joaat("0"))
						{
							func_285(iVar2, 2, 1, 1, -1);
							if (iVar1 < Global_2542253)
							{
								Global_2542253[iVar1] = iVar2;
								Global_2542364[iVar1] = iVar4;
							}
						}
						else
						{
							func_283(iParam0, GlobalFunc_33(iVar4), uVar3, 0);
						}
					}
					iVar1++;
				}
				Global_2542252++;
				if (Global_2542252 < 2)
				{
					iVar1 = 0;
					while (iVar1 < iVar0)
					{
						if (iVar1 < Global_2542253)
						{
							if (Global_2542253[iVar1] != -1)
							{
								if (iParam0 == joaat("mp_m_freemode_01"))
								{
									func_283(iParam0, GlobalFunc_33(Global_2542364[iVar1]), GlobalFunc_4914(iParam0, Global_2542253[iVar1], GlobalFunc_33(Global_2542364[iVar1]), 3), 1);
								}
								else
								{
									func_283(iParam0, GlobalFunc_33(Global_2542364[iVar1]), GlobalFunc_4914(iParam0, Global_2542253[iVar1], GlobalFunc_33(Global_2542364[iVar1]), 4), 1);
								}
							}
						}
						iVar1++;
					}
				}
				Global_2542252 = (Global_2542252 - 1);
			}
			return;
		}
		if (MISC::IS_BIT_SET(Global_68106[2 /*14*/].f_6, 1) && !MISC::IS_BIT_SET(Global_68106[2 /*14*/].f_6, 6))
		{
			if (GlobalFunc_36(iParam1, Global_68106[1 /*14*/].f_2, &iVar5))
			{
				uVar6 = GlobalFunc_6709(iVar5, Global_68104, 0);
				MISC::SET_BIT(&uVar6, Global_68106[2 /*14*/].f_1);
				GlobalFunc_6784(iVar5, uVar6, Global_68104, 1);
			}
			if (bParam3 == 1)
			{
				if (iParam0 == joaat("mp_m_freemode_01"))
				{
					if (iParam1 == 14)
					{
						if (iParam2 >= 83 && iParam2 <= 90)
						{
							iVar7 = (75 + Global_68106[2 /*14*/].f_4);
							func_283(iParam0, 14, iVar7, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar7 = (83 + Global_68106[2 /*14*/].f_4);
							func_283(iParam0, 14, iVar7, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar7 = (64 + Global_68106[2 /*14*/].f_4);
							func_283(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar7 = (48 + Global_68106[2 /*14*/].f_4);
							func_283(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar7 = (112 + Global_68106[2 /*14*/].f_4);
							func_283(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar7 = (96 + Global_68106[2 /*14*/].f_4);
							func_283(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar7 = (160 + Global_68106[2 /*14*/].f_4);
							func_283(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar7 = (176 + Global_68106[2 /*14*/].f_4);
							func_283(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar7 = (0 + Global_68106[2 /*14*/].f_4);
							func_283(iParam0, 11, iVar7, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar7 = (16 + Global_68106[2 /*14*/].f_4);
							func_283(iParam0, 11, iVar7, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar7 = (32 + Global_68106[2 /*14*/].f_4);
							func_283(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar7 = (224 + Global_68106[2 /*14*/].f_4);
							func_283(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_0");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_0");
									break;
								
								case 221:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_1");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_1");
									break;
								
								case 222:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_2");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_2");
									break;
								
								case 223:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_3");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_3");
									break;
								
								case 224:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_4");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_4");
									break;
								
								case 225:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_5");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_5");
									break;
								
								case 226:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_6");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_6");
									break;
								
								case 227:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_7");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_7");
									break;
								
								case 228:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_8");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_8");
									break;
								
								case 229:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_9");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_9");
									break;
								
								case 230:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_10");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_10");
									break;
								
								case 231:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_11");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_11");
									break;
								
								case 232:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_12");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_12");
									break;
								
								case 233:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_13");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_13");
									break;
								
								case 234:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_14");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_14");
									break;
								
								case 235:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_15");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_15");
									break;
							}
							FILES::INIT_SHOP_PED_COMPONENT(&Var12);
							iVar31 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(3, 6, -1, 0, -1, 8);
							iVar29 = 0;
							while (iVar29 < iVar31)
							{
								FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar29, &Var12);
								if (!FILES::IS_CONTENT_ITEM_LOCKED(Var12))
								{
									if (Var12.f_1 == iVar9[0] || Var12.f_1 == iVar9[1])
									{
										func_283(iParam0, 8, (241 + iVar30), 0);
										iVar29 = iVar31 + 1;
									}
									iVar30++;
								}
								iVar29++;
							}
						}
					}
					else if (iParam1 == 7)
					{
						if (iParam2 >= 41 && iParam2 <= 56)
						{
							switch (Global_68106[2 /*14*/].f_4)
							{
								case 0:
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								
								case 1:
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								
								case 2:
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								
								case 3:
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								
								case 4:
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								
								case 5:
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								
								case 6:
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								
								case 7:
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								
								case 8:
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								
								case 9:
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								
								case 10:
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								
								case 11:
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								
								case 12:
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								
								case 13:
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								
								case 14:
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								
								case 15:
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_68106[2 /*14*/].f_4)
							{
								case 0:
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								
								case 1:
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								
								case 2:
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								
								case 3:
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								
								case 4:
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								
								case 5:
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								
								case 6:
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								
								case 7:
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								
								case 8:
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								
								case 9:
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								
								case 10:
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								
								case 11:
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								
								case 12:
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								
								case 13:
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								
								case 14:
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								
								case 15:
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_283(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
									break;
								}
							}
					}
				}
				else if (iParam0 == joaat("mp_f_freemode_01"))
				{
					if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar7 = (16 + Global_68106[2 /*14*/].f_4);
							func_283(iParam0, 8, iVar7, 0);
						}
					}
				}
				Global_68106[2 /*14*/] = { GlobalFunc_10855(iParam0, iParam1, iParam2) };
				if (iParam1 == 11)
				{
					iVar8 = GlobalFunc_6741(iParam0, iParam2, Global_68106[2 /*14*/].f_4);
					if (iVar8 != -99)
					{
						func_283(iParam0, 8, iVar8, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								iVar32 = joaat("DLC_MP_BUSI_F_ACCS2_0");
								break;
							
							case 200:
								iVar32 = joaat("DLC_MP_BUSI_F_ACCS2_1");
								break;
							
							case 201:
								iVar32 = joaat("DLC_MP_BUSI_F_ACCS2_2");
								break;
						}
						FILES::INIT_SHOP_PED_COMPONENT(&Var33);
						iVar52 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(4, 6, -1, 0, -1, 8);
						iVar50 = 0;
						while (iVar50 < iVar52)
						{
							FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar50, &Var33);
							if (!FILES::IS_CONTENT_ITEM_LOCKED(Var33))
							{
								if (Var33.f_1 == iVar32)
								{
									func_283(iParam0, 8, (136 + iVar51), 0);
									iVar50 = iVar52 + 1;
								}
								iVar51++;
							}
							iVar50++;
						}
					}
				}
				else if (iParam1 == 8)
				{
					iVar8 = GlobalFunc_6736(iParam0, iParam2, Global_68106[2 /*14*/].f_4);
					if (iVar8 != -99)
					{
						func_283(iParam0, 11, iVar8, 0);
					}
				}
			}
		}
	}
}


void func_285(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x365C7
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = Global_68104;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (GlobalFunc_30(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		uVar3 = GlobalFunc_6709(iVar2, iVar0, 0);
		MISC::SET_BIT(&uVar3, iVar1);
		GlobalFunc_6784(iVar2, uVar3, iVar0, 1);
	}
}




































int func_321(var uParam0, int iParam1, int iParam2)//Position - 0x4CFD2
{
	int iVar0;
	
	iVar0 = GlobalFunc_19(iParam1);
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 != -99)
	{
		if (!GlobalFunc_10939(uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = -99;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}


int func_323(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4D099
{
	int iVar0;
	
	iVar0 = GlobalFunc_19(iParam1);
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 != -99)
	{
		if (!GlobalFunc_10939(uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_59;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 = -99;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}


int func_325(int iParam0, int iParam1, int iParam2)//Position - 0x4D359
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (GlobalFunc_10939(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (GlobalFunc_10939(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return GlobalFunc_7953(iParam0, iParam2);
			}
		}
		else
		{
			return GlobalFunc_6669(iParam0, iParam1);
		}
	}
	return -99;
}

int func_326(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x4D3FA
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
		Global_68106[1 /*14*/] = { GlobalFunc_10856(iVar10, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		func_339(iParam1);
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
			iVar7 = GlobalFunc_7953(iParam0, 1);
			if (!GlobalFunc_6667(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = GlobalFunc_7953(iParam0, 0);
			if (!GlobalFunc_6666(iVar10, 14, iVar8) && !GlobalFunc_6665(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = GlobalFunc_7953(iParam0, 2);
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
				Global_68106[1 /*14*/] = { GlobalFunc_10856(iVar10, iVar0, uVar11[iVar0]) };
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
							Global_68106[1 /*14*/] = { GlobalFunc_10856(iVar10, 14, uVar27[iVar1]) };
							GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							func_339(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_331(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_326(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						func_339(iVar0);
						if (Global_68105 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_331(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_326(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10856(iVar10, iVar0, func_325(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_323(iParam0, iVar10, &iVar4, 1))
							{
								func_326(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_326(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var53 = { GlobalFunc_10856(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 8, iVar5, &uVar11, &Var53))
				{
					func_326(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10856(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_326(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10856(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_326(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10856(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_326(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10856(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_326(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
			Global_68106[1 /*14*/] = { GlobalFunc_10856(iVar10, 14, uVar67[iVar1]) };
			GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			func_339(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_331(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_326(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
		func_339(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_331(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_326(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = func_331(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_326(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			GlobalFunc_11055(iVar10, iParam1, iParam2);
		}
	}
	if (Global_68105 == 1)
	{
		if (func_323(iParam0, iVar10, &iVar4, 0))
		{
			func_326(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (func_321(iParam0, iVar10, &iVar4))
		{
			func_326(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}





int func_331(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x4E080
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
	
	iVar0 = -99;
	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				iVar1 = GlobalFunc_6669(uParam0, 1);
				iVar0 = GlobalFunc_24(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = GlobalFunc_6669(uParam0, 2);
				iVar0 = GlobalFunc_24(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		GlobalFunc_4911(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		GlobalFunc_4912(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (GlobalFunc_23(iParam1, iParam3, &iVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("player_zero"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (iParam3)
								{
									case 36:
										iVar0 = 17;
										break;
									
									case 37:
										iVar0 = 17;
										break;
									
									case 38:
										iVar0 = 18;
										break;
									
									case 39:
										iVar0 = 18;
										break;
									
									case 40:
										iVar0 = 19;
										break;
									
									case 41:
										iVar0 = 19;
										break;
									
									case 42:
										iVar0 = 20;
										break;
									
									case 43:
										iVar0 = 20;
										break;
								}
								break;
							
							case 11:
								if (iParam3 >= 2 && iParam3 <= 7)
								{
									if (!GlobalFunc_7954(uParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!GlobalFunc_7954(uParam0, 3, 135, 150))
									{
										iVar0 = GlobalFunc_11057(iParam1, 3, 135, 150);
									}
								}
								break;
						}
						break;
					
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 63:
										iVar0 = 4;
										break;
									
									case 61:
										iVar0 = 3;
										break;
									
									case 16:
										iVar0 = 1;
										break;
									
									case 114:
										iVar0 = 15;
										break;
									
									case 115:
										iVar0 = 17;
										break;
									
									case 116:
										iVar0 = 16;
										break;
									
									case 117:
										iVar0 = 18;
										break;
									
									case 118:
										iVar0 = 20;
										break;
									
									case 119:
										iVar0 = 19;
										break;
									
									case 125:
										iVar0 = 21;
										break;
									
									case 120:
										iVar0 = 22;
										break;
									
									case 124:
										iVar0 = 23;
										break;
									
									case 126:
										iVar0 = 24;
										break;
									
									case 121:
										iVar0 = 25;
										break;
									
									case 127:
										iVar0 = 26;
										break;
									
									case 128:
										iVar0 = 27;
										break;
									
									case 85:
										iVar0 = 6;
										break;
									
									case 77:
										iVar0 = 7;
										break;
									
									case 78:
										iVar0 = 8;
										break;
									
									case joaat("mpsv_lp0_31"):
										iVar0 = 9;
										break;
									
									case 80:
										iVar0 = 10;
										break;
									
									case 81:
										iVar0 = 11;
										break;
									
									case 82:
										iVar0 = 12;
										break;
									
									case 83:
										iVar0 = 13;
										break;
									
									case 84:
										iVar0 = 14;
										break;
									
									case 21:
										iVar0 = 31;
										break;
									
									case 22:
										iVar0 = 30;
										break;
									
									case 23:
										iVar0 = 29;
										break;
									
									case 24:
										iVar0 = 28;
										break;
									
									case 25:
										iVar0 = 33;
										break;
									
									case 26:
										iVar0 = 35;
										break;
									
									case 27:
										iVar0 = 34;
										break;
									
									case 28:
										iVar0 = 32;
										break;
									
									default:
										if (iParam3 >= 17 && iParam3 <= 20)
										{
										}
										else
										{
											iVar0 = 0;
										}
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if ((iParam3 >= 44 && iParam3 <= 59) || (iParam3 >= 135 && iParam3 <= 150))
							{
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 10)
						{
							if (iParam3 >= 36 && iParam3 <= 43)
							{
								iVar0 = 0;
							}
						}
						break;
				}
				break;
			
			case joaat("player_one"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 17:
										iVar0 = 2;
										break;
									
									case 90:
										iVar0 = 1;
										break;
									
									case 268:
										iVar0 = 3;
										break;
									
									case 269:
										iVar0 = 5;
										break;
									
									case 270:
										iVar0 = 4;
										break;
									
									case 271:
										iVar0 = 6;
										break;
									
									case 272:
										iVar0 = 8;
										break;
									
									case 273:
										iVar0 = 7;
										break;
									
									case 279:
										iVar0 = 9;
										break;
									
									case 274:
										iVar0 = 10;
										break;
									
									case 278:
										iVar0 = 11;
										break;
									
									case 280:
										iVar0 = 12;
										break;
									
									case 275:
										iVar0 = 13;
										break;
									
									case 281:
										iVar0 = 14;
										break;
									
									case 282:
										iVar0 = 15;
										break;
									
									case 107:
										iVar0 = 16;
										break;
									
									case 108:
										iVar0 = 17;
										break;
									
									case 109:
										iVar0 = 18;
										break;
									
									case 110:
										iVar0 = 19;
										break;
									
									case 111:
										iVar0 = 20;
										break;
									
									case 112:
										iVar0 = 21;
										break;
									
									case 113:
										iVar0 = 22;
										break;
									
									case 114:
										iVar0 = 23;
										break;
									
									case 115:
										iVar0 = 24;
										break;
									
									case 116:
										iVar0 = 25;
										break;
									
									case 117:
										iVar0 = 52;
										break;
									
									case 118:
										iVar0 = 27;
										break;
									
									case 119:
										iVar0 = 28;
										break;
									
									case 120:
										iVar0 = 29;
										break;
									
									case 121:
										iVar0 = 30;
										break;
									
									case 122:
										iVar0 = 31;
										break;
									
									case 296:
										iVar0 = 32;
										break;
									
									case 297:
										iVar0 = 33;
										break;
									
									case 298:
										iVar0 = 34;
										break;
									
									case 299:
										iVar0 = 35;
										break;
									
									case 300:
										iVar0 = 36;
										break;
									
									case 301:
										iVar0 = 37;
										break;
									
									case 302:
										iVar0 = 38;
										break;
									
									case 309:
										iVar0 = 39;
										break;
									
									case 310:
										iVar0 = 40;
										break;
									
									case 311:
										iVar0 = 41;
										break;
									
									case 312:
										iVar0 = 42;
										break;
									
									case 313:
										iVar0 = 43;
										break;
									
									case 314:
										iVar0 = 44;
										break;
									
									case 315:
										iVar0 = 45;
										break;
									
									case 316:
										iVar0 = 46;
										break;
									
									case 317:
										iVar0 = 51;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 3:
						switch (iParam2)
						{
							case 11:
								if (iParam3 >= 47 && iParam3 <= 62)
								{
									if (!GlobalFunc_7954(uParam0, 3, 209, 222))
									{
										iVar0 = GlobalFunc_11057(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!GlobalFunc_7954(uParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = GlobalFunc_11057(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = GlobalFunc_11057(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = GlobalFunc_11057(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = GlobalFunc_11057(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!GlobalFunc_7954(uParam0, 3, 176, 191) && !GlobalFunc_7954(uParam0, 3, 227, 242))
									{
										iVar0 = GlobalFunc_11057(iParam1, 3, 176, 191);
									}
								}
								break;
						}
						break;
					
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								iVar5 = iParam3;
								iVar4 = GlobalFunc_6669(uParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = GlobalFunc_6669(uParam0, 11);
								iVar5 = GlobalFunc_11173(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = GlobalFunc_6669(uParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!GlobalFunc_22(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6))
								{
									if (iVar6 != -99)
									{
										iVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 27 && iVar3 <= 42) || (iVar3 >= 43 && iVar3 <= 58)) || (iVar3 >= 59 && iVar3 <= 74))
							{
								iVar0 = 26;
							}
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if (iParam3 >= 209 && iParam3 <= 222)
							{
							}
							else if (((iParam3 >= 176 && iParam3 <= 191) || (iParam3 >= 227 && iParam3 <= 242)) || (iParam3 >= 243 && iParam3 <= 258))
							{
								iVar7 = GlobalFunc_6669(uParam0, 8);
								iVar8 = GlobalFunc_6669(uParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = GlobalFunc_11173(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = GlobalFunc_11173(iParam1, iParam3, iVar8, 1);
								}
							}
							else if (iParam3 >= 41 && iParam3 <= 56)
							{
								iVar0 = 45;
							}
							else if (iParam3 >= 223 && iParam3 <= 226)
							{
								iVar0 = 44;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 8)
						{
							if (((iParam3 >= 27 && iParam3 <= 42) || (iParam3 >= 43 && iParam3 <= 58)) || (iParam3 >= 59 && iParam3 <= 74))
							{
								iVar9 = GlobalFunc_6669(uParam0, 11);
								iVar0 = GlobalFunc_11173(iParam1, -99, iVar9, 0);
							}
						}
						break;
				}
				break;
			
			case joaat("player_two"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 50:
										iVar0 = 3;
										break;
									
									case 81:
										iVar0 = 5;
										break;
									
									case 82:
										iVar0 = 6;
										break;
									
									case 83:
										iVar0 = 7;
										break;
									
									case 84:
										iVar0 = 10;
										break;
									
									case 85:
										iVar0 = 9;
										break;
									
									case 86:
										iVar0 = 8;
										break;
									
									case 92:
										iVar0 = 22;
										break;
									
									case 87:
										iVar0 = 23;
										break;
									
									case 91:
										iVar0 = 24;
										break;
									
									case 93:
										iVar0 = 25;
										break;
									
									case 88:
										iVar0 = 26;
										break;
									
									case 94:
										iVar0 = 27;
										break;
									
									case 120:
										iVar0 = 11;
										break;
									
									case 121:
										iVar0 = 13;
										break;
									
									case 122:
										iVar0 = 14;
										break;
									
									case 124:
										iVar0 = 12;
										break;
									
									case 126:
										iVar0 = 18;
										break;
									
									case 128:
										iVar0 = 17;
										break;
									
									case 130:
										iVar0 = 19;
										break;
									
									case 131:
										iVar0 = 16;
										break;
									
									case 134:
										iVar0 = 15;
										break;
									
									case 135:
										iVar0 = 20;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
						}
						break;
				}
				break;
			}
	}
	return iVar0;
}








void func_339(int iParam0)//Position - 0x4F8E9
{
	if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1) && !MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 6))
	{
		GlobalFunc_31(iParam0, Global_68106[1 /*14*/].f_5, Global_68106[1 /*14*/].f_2, 2, Global_68106[1 /*14*/].f_1, 1, 0);
	}
	if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1) && MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 6))
	{
		if (iParam0 == 12)
		{
			func_285(Global_2621444, 2, 1, 1, -1);
		}
		else if (iParam0 == 13)
		{
		}
		else if (iParam0 == 14)
		{
			func_285(Global_2621444, 2, 1, 1, -1);
		}
		else
		{
			func_285(Global_2621444, 2, 1, 1, -1);
		}
	}
}












void func_351(int iParam0)//Position - 0x50422
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
		func_185(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
		if (!Global_89948[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!GlobalFunc_526(49))
				{
					iVar1 = func_325(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					GlobalFunc_11174(GlobalFunc_4917(0), 12, 16, 0, 0, 0, 0);
				}
				if (!GlobalFunc_526(44))
				{
					iVar1 = func_325(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_325(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					GlobalFunc_11174(GlobalFunc_4917(0), 3, 70, 1, 0, 0, 0);
					GlobalFunc_11174(GlobalFunc_4917(0), 3, 71, 1, 0, 0, 0);
					GlobalFunc_11174(GlobalFunc_4917(0), 3, 72, 1, 0, 0, 0);
					GlobalFunc_11174(GlobalFunc_4917(0), 3, 73, 1, 0, 0, 0);
					GlobalFunc_11174(GlobalFunc_4917(0), 3, 74, 1, 0, 0, 0);
					GlobalFunc_11174(GlobalFunc_4917(0), 3, 75, 1, 0, 0, 0);
					GlobalFunc_11174(GlobalFunc_4917(0), 4, 41, 1, 0, 0, 0);
					GlobalFunc_11174(GlobalFunc_4917(0), 4, 42, 1, 0, 0, 0);
					GlobalFunc_11174(GlobalFunc_4917(0), 4, 43, 1, 0, 0, 0);
					GlobalFunc_11174(GlobalFunc_4917(0), 4, 44, 1, 0, 0, 0);
					GlobalFunc_11174(GlobalFunc_4917(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_325(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				GlobalFunc_521(iVar0);
				func_185(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
			}
		}
		Global_89948[iVar0] = 1;
	}
}








int func_359(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x50E30
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
			if (ENTITY::DOES_ENTITY_EXIST(iParam2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0))
			{
				*uParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, iParam3, 1, 1);
				GlobalFunc_8645(*uParam0, iParam1, bParam5);
				PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
				func_351(*uParam0);
				GlobalFunc_7694(*uParam0, 1, 0);
				GlobalFunc_7693(*uParam0);
				GlobalFunc_7707(*uParam0);
				func_93(*uParam0, bParam6);
				GlobalFunc_516(*uParam0);
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				}
			}
			return 1;
		}
	}
	return 0;
}













void func_372(int iParam0, int iParam1)//Position - 0x55788
{
	struct<97> Var0;
	int iVar109;
	int iVar110;
	
	Var0.f_1 = -1;
	Var0.f_17 = 4;
	Var0.f_17.f_8 = 4;
	Var0.f_17.f_13 = 4;
	Var0.f_17.f_18 = 4;
	Var0.f_17.f_24 = 4;
	Var0.f_17.f_29 = 4;
	Var0.f_17.f_34 = 4;
	Var0.f_62 = 8;
	Var0.f_96.f_7 = 21;
	Var0.f_96.f_8 = 6;
	Var0.f_17.f_5 = 0;
	Var0.f_17.f_6 = 0;
	Var0 = 0;
	Var0.f_2 = iParam0;
	Var0.f_62.f_15 = 0;
	GlobalFunc_5939(Var0.f_2, &(Var0.f_3));
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (GlobalFunc_747(iParam1, 64))
		{
			GlobalFunc_3033(Global_88538[iParam0 /*3*/], -1082130432, 350, 1114636288, 0);
			if (!GlobalFunc_8633(Var0.f_3))
			{
				iVar109 = GlobalFunc_237(Var0.f_3);
				while (!func_10(iVar109, 1))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
	}
	iVar110 = 1;
	while (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && iVar110)
	{
		if (!func_373(&Var0, iParam1))
		{
		}
		else
		{
			iVar110 = 0;
		}
		SYSTEM::WAIT(0);
	}
}

bool func_373(var uParam0, var uParam1)//Position - 0x55890
{
	return func_374(uParam0, 462139/*func_532*/, 461968/*func_531*/, uParam1);
}

int func_374(var uParam0, int iParam1, int iParam2, var uParam3)//Position - 0x558A8
{
	int iVar0;
	struct<97> Var1;
	struct<3> Var121;
	int iVar124;
	struct<3> Var125;
	var uVar128;
	struct<3> Var129;
	struct<3> Var132;
	var uVar135;
	char* sVar136;
	char[] cVar152[8];
	char* sVar168;
	var uVar172;
	var uVar173;
	var uVar174;
	var uVar175;
	var uVar176;
	var uVar177;
	char* sVar178;
	char* sVar184;
	int iVar192;
	float fVar193;
	float fVar194;
	int iVar195;
	struct<65> Var196;
	bool bVar261;
	int iVar262;
	bool bVar263;
	bool bVar264;
	int iVar265;
	float fVar266;
	float fVar267;
	bool bVar268;
	bool bVar269;
	struct<6> Var270;
	bool bVar276;
	char cVar277[64];
	char* sVar293;
	char cVar309[64];
	int iVar325;
	int iVar326;
	int iVar327;
	int iVar328;
	char* sVar329;
	bool bVar337;
	int iVar338;
	int iVar339;
	int iVar340;
	
	if (!uParam0->f_62.f_19)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	iVar0 = MISC::GET_GAME_TIMER();
	if (iVar0 >= (Global_Next_Notification_Time - 1000))
	{
		GlobalFunc_49(2666);
	}
	Var1.f_1 = -1;
	Var1.f_17 = 4;
	Var1.f_17.f_8 = 4;
	Var1.f_17.f_13 = 4;
	Var1.f_17.f_18 = 4;
	Var1.f_17.f_24 = 4;
	Var1.f_17.f_29 = 4;
	Var1.f_17.f_34 = 4;
	Var1.f_62 = 8;
	Var1.f_96.f_7 = 21;
	Var1.f_96.f_8 = 6;
	Var121 = { 5f, 5f, 4f };
	if (*uParam0 == 0)
	{
		iVar124 = GlobalFunc_7733(&(uParam0->f_1), 0, 17, 1, 0);
		if (iVar124 == 1)
		{
			STATS::STAT_INCREMENT(joaat("sp_ambient_switch_count"), 1f);
			*uParam0 = 1;
		}
		if (!*uParam0 == 1)
		{
			if (!Global_68507 == -1)
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_81155[Global_68507 /*34*/]), SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					*uParam0 = 1;
				}
			}
			else if (GlobalFunc_8648() == 36)
			{
				*uParam0 = 1;
			}
		}
	}
	if (*uParam0 == 1)
	{
		uParam0->f_96.f_2 = 0;
		uParam0->f_96.f_3 = 0;
		Global_89750 = 0;
		uParam0->f_61 = GlobalFunc_237(uParam0->f_3);
		if (GlobalFunc_8044(uParam0->f_2, &(uParam0->f_4), &(uParam0->f_7), &(uParam0->f_8)))
		{
			GlobalFunc_7632(1);
			if (GlobalFunc_10760(uParam0, &Var125, &uVar128))
			{
				uParam0->f_4 = { Var125 };
				uParam0->f_7 = uVar128;
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[uParam0->f_3 /*3*/] = { Var125 };
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[uParam0->f_3] = uVar128;
				if (Global_89726[uParam0->f_3] == 2)
				{
					Global_89734[uParam0->f_3 /*3*/] = { Var125 };
					Global_89744[uParam0->f_3] = uVar128;
				}
			}
			Global_88209 = uParam0->f_2;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_8)))
			{
				uParam0->f_16 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(uParam0->f_4, &(uParam0->f_8));
			}
			else if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(uParam0->f_4))
			{
				uParam0->f_16 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_4);
			}
			else
			{
				uParam0->f_16 = 0;
			}
			if (uParam0->f_16 != 0)
			{
				if (!INTERIOR::IS_INTERIOR_READY(uParam0->f_16))
				{
					INTERIOR::PIN_INTERIOR_IN_MEMORY(uParam0->f_16);
				}
			}
			if ((uParam0->f_2 == 222 || uParam0->f_2 == 223) || uParam0->f_2 == 224)
			{
				GlobalFunc_7934(21, 0);
			}
			GlobalFunc_7225(uParam0->f_2);
			if (GlobalFunc_8632(uParam0->f_2, &Var129, &Var132, &uVar135))
			{
				if ((GlobalFunc_2940(uParam0->f_2, &sVar136, &cVar152) || GlobalFunc_2939(uParam0->f_2, &sVar168, &uVar172, &uVar173, &uVar174, &uVar175, &uVar176, &uVar177)) || GlobalFunc_2938(uParam0->f_2, &sVar178))
				{
					uParam0->f_62.f_10 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					CAM::SET_CAM_COORD(uParam0->f_62.f_10, Var129);
					CAM::SET_CAM_ROT(uParam0->f_62.f_10, Var132, 2);
					CAM::SET_CAM_FOV(uParam0->f_62.f_10, uVar135);
					PED::SET_PED_NON_CREATION_AREA(Var129 - Var121, Var129 + Var121);
					uParam0->f_108 = PED::ADD_SCENARIO_BLOCKING_AREA(Var129 - Var121, Var129 + Var121, 0, 1, 1, 1);
					MISC::CLEAR_AREA(Var129, SYSTEM::VMAG(Var121), 1, 0, 0, 0);
				}
			}
			Global_89750++;
			if (GlobalFunc_2937(uParam0->f_2, &sVar184))
			{
				Global_89750++;
			}
			Global_89502 = uParam0->f_2;
			iVar192 = GlobalFunc_8315();
			if (iVar192 != 145)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_89730[iVar192]))
				{
					fVar193 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Global_89730[iVar192]);
					fVar194 = VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Global_89730[iVar192]);
					if (fVar193 < (-1000f * 0.75f))
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Global_89730[iVar192], (-1000f * 0.25f));
					}
					if (fVar194 < (-1000f * 0.75f))
					{
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Global_89730[iVar192], (-1000f * 0.25f));
					}
				}
				GlobalFunc_8631(PLAYER::PLAYER_PED_ID(), &(Global_89503[iVar192 /*74*/]), &(Global_89734[iVar192 /*3*/]), &(Global_89744[iVar192]), &(Global_89726[iVar192]), &(Global_2544853[iVar192]));
				func_485(PLAYER::PLAYER_PED_ID(), 0);
				GlobalFunc_8060(PLAYER::PLAYER_PED_ID());
			}
			GlobalFunc_9262(uParam0->f_3, uParam0->f_2);
			iLocal_63 = 0;
			Global_24491 = MISC::GET_GAME_TIMER();
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 10f);
			STREAMING::REQUEST_MODEL(GlobalFunc_4917(uParam0->f_3));
			*uParam0 = 3;
		}
		else
		{
			return 1;
		}
	}
	if (*uParam0 == 2)
	{
		*uParam0 = 3;
		iLocal_63++;
		STREAMING::REQUEST_MODEL(GlobalFunc_4917(uParam0->f_3));
		if (uParam0->f_16 != 0)
		{
			if (!INTERIOR::IS_INTERIOR_READY(uParam0->f_16))
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(uParam0->f_16);
				*uParam0 = 2;
				if (iLocal_63 > 150)
				{
					iLocal_63 = 0;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_8)))
					{
						uParam0->f_16 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(uParam0->f_4, &(uParam0->f_8));
					}
					else
					{
						uParam0->f_16 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_4);
					}
					*uParam0 = 3;
				}
			}
		}
	}
	if (*uParam0 == 3)
	{
		if (uParam0->f_2 == 1)
		{
			iVar195 = GlobalFunc_584(uParam0->f_61);
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_17[iVar195]))
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_17[iVar195], 1))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_17[iVar195]));
				}
			}
			uParam0->f_17[uParam0->f_61] = 0;
			uParam0->f_2 = 1;
		}
		if (GlobalFunc_10759(uParam0))
		{
			Var196 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[uParam0->f_61 /*65*/] };
			bVar261 = false;
			if ((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)
			{
				bVar261 = true;
			}
			if (func_91(&(uParam0->f_17[uParam0->f_61]), uParam0->f_3, uParam0->f_4, uParam0->f_7, 1, 0, bVar261))
			{
				if ((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)
				{
					if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_62.f_13) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_62.f_12)) && STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_13, 0), ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_12, 0)) != 3)
					{
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[uParam0->f_61 /*65*/] = { Var196 };
					}
				}
				GlobalFunc_5169(uParam0->f_17[uParam0->f_61]);
				if ((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)
				{
				}
				else
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_17[uParam0->f_61], 0);
				}
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_17[uParam0->f_61], 1);
				GlobalFunc_2932(uParam0);
				uParam0->f_17.f_39 = 1;
				uParam0->f_17.f_7 = uParam0->f_61;
				uParam0->f_62.f_12 = uParam0->f_17[uParam0->f_61];
				Global_89751 = -1;
				GlobalFunc_5935(uParam0->f_2);
				if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_62.f_13) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_62.f_12)) && STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_13, 0), ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_12, 0)) == 3)
				{
					if (!PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(uParam0->f_17[uParam0->f_61]))
					{
						iVar262 = MISC::GET_GAME_TIMER();
						while (iVar262 + 500 < MISC::GET_GAME_TIMER() && iVar262 > 0)
						{
							if (PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(uParam0->f_17[uParam0->f_61]))
							{
								iVar262 = -1;
							}
							SYSTEM::WAIT(0);
						}
						if (!iVar262 == -1)
						{
						}
					}
				}
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uParam0->f_62.f_12, 1);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_62.f_12, 1);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_62.f_12, 0);
				PED::RELEASE_PED_PRELOAD_VARIATION_DATA(uParam0->f_17[uParam0->f_61]);
				Stack.Push(uParam0);
				Call_Loc(iParam1);
				*uParam0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
				*uParam0 = 4;
			}
		}
		else
		{
			uParam0->f_17.f_39 = 1;
			uParam0->f_17.f_7 = uParam0->f_61;
			uParam0->f_62.f_12 = uParam0->f_17[uParam0->f_61];
			if (uParam0->f_62.f_12 != PLAYER::PLAYER_PED_ID())
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_62.f_12, 1, 1);
			}
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uParam0->f_62.f_12, 1);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_62.f_12, 1);
			PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_62.f_12, 0);
			MISC::CLEAR_AREA_OF_PROJECTILES(uParam0->f_4, 10f, 0);
			if (!GlobalFunc_537(uParam0->f_4, ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_12, 1), 5f) && !GlobalFunc_537(uParam0->f_4, 0f, 0f, 0f, 5f))
			{
				if ((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)
				{
				}
			}
			Global_89751 = -1;
			GlobalFunc_5935(uParam0->f_2);
			PED::RELEASE_PED_PRELOAD_VARIATION_DATA(uParam0->f_17[uParam0->f_61]);
			Stack.Push(uParam0);
			Call_Loc(iParam1);
			*uParam0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
			*uParam0 = 4;
		}
	}
	if (*uParam0 == 4)
	{
		bVar263 = false;
		bVar264 = false;
		iVar265 = 0;
		fVar266 = 0f;
		fVar267 = 0f;
		bVar268 = false;
		bVar269 = false;
		GlobalFunc_9260(uParam0, &bVar263, &bVar264, &iVar265, &fVar266, &fVar267, &bVar268, &bVar269, &uParam3);
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_8)))
		{
			if (GlobalFunc_2938(uParam0->f_2, &Var270))
			{
				MemCopy(&(uParam0->f_8), {Var270}, 8);
			}
		}
		if (uParam0->f_2 == 231)
		{
			if (!bVar268)
			{
				bVar268 = true;
			}
		}
		bVar276 = false;
		if (!CAM::DOES_CAM_EXIST(uParam0->f_62.f_10))
		{
			if (func_461(&(uParam0->f_62), iVar265, uParam3, fVar266, fVar267, bVar268, bVar269, &(uParam0->f_8), 0, 0))
			{
				bVar276 = true;
			}
		}
		else
		{
			MemCopy(&cVar277, {uParam0->f_8}, 16);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar277))
			{
				GlobalFunc_2940(uParam0->f_2, &sVar293, &cVar309);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar309))
				{
					StringConCat(&cVar277, &cVar309, 64);
				}
			}
			if (func_447(&(uParam0->f_62), uParam0->f_62.f_10, iVar265, uParam3, fVar266, fVar267, bVar268, bVar269, &cVar277, 2))
			{
				bVar276 = true;
			}
		}
		if (bVar276)
		{
			iVar326 = 3;
			iVar327 = 8;
			if (Global_3)
			{
				iVar326 = 7;
				iVar327 = 7;
			}
			if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
			{
				iVar325 = STREAMING::GET_PLAYER_SWITCH_STATE();
				if ((iVar325 == 8 || iVar325 == 11) || ((STREAMING::GET_PLAYER_SWITCH_TYPE() == 2 && iVar325 == 3) && !((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)))
				{
					if (STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() == 0)
					{
						if (Global_89750 > 0)
						{
							if (Global_89751 < 0)
							{
								Global_89751 = MISC::GET_GAME_TIMER();
							}
							else
							{
								iVar328 = 12500;
								if (iVar325 == 11)
								{
									iVar328 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar328) * 1.75f));
								}
								if (GlobalFunc_2937(uParam0->f_2, &sVar329))
								{
									iVar328 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar328) * 1.75f));
								}
								if (MISC::GET_GAME_TIMER() > (Global_89751 + iVar328))
								{
									Global_89750 = (Global_89750 - 1);
									STREAMING::ALLOW_PLAYER_SWITCH_OUTRO();
									Global_89751 = -1;
								}
							}
						}
					}
				}
			}
			else
			{
				iVar325 = iVar326;
				iVar327 = iVar326;
			}
			func_422(uParam0);
			if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				if (iVar325 != 1)
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
			if (GlobalFunc_747(uParam3, 512))
			{
				if (iVar325 == 1)
				{
					Stack.Push(uParam0);
					Stack.Push(&Var1);
					Stack.Push(uParam3);
					Call_Loc(iParam2);
				}
			}
			if (iVar325 >= iVar326)
			{
				Stack.Push(uParam0);
				Stack.Push(&Var1);
				Stack.Push(uParam3);
				Call_Loc(iParam2);
				if (StackVal)
				{
					if (!uParam0->f_62.f_19)
					{
						if (uParam0->f_62.f_18 && iVar325 >= iVar327)
						{
							bVar337 = false;
							if (func_13(&(uParam0->f_17), bVar263, bVar264, 0))
							{
								bVar337 = true;
							}
							if (bVar337)
							{
								if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_62.f_13))
								{
									ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_62.f_13, 1);
								}
								GlobalFunc_2928(&(uParam0->f_17));
								func_422(uParam0);
								GlobalFunc_9259();
								PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
								Global_87845 = { uParam0->f_17 };
								uParam0->f_62.f_19 = 1;
							}
						}
					}
				}
			}
			if (iVar325 >= 3)
			{
				PAD::SET_PLAYERPAD_SHAKES_WHEN_CONTROLLER_DISABLED(0);
			}
			if (Global_87678)
			{
				if (uParam0->f_62.f_19)
				{
					if (GlobalFunc_5934(uParam0))
					{
						Global_87678 = 0;
					}
				}
			}
		}
		else
		{
			*uParam0 = 5;
		}
	}
	if (*uParam0 == 5)
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_62.f_10))
		{
			if (CAM::IS_CAM_ACTIVE(uParam0->f_62.f_10))
			{
				if (CAM::IS_CAM_INTERPOLATING(uParam0->f_62.f_10))
				{
				}
				else
				{
					CAM::SET_CAM_ACTIVE(uParam0->f_62.f_10, 0);
					CAM::DESTROY_CAM(uParam0->f_62.f_10, 0);
				}
			}
			else
			{
				CAM::SET_CAM_ACTIVE(uParam0->f_62.f_10, 0);
				CAM::DESTROY_CAM(uParam0->f_62.f_10, 0);
			}
			PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_108, 0);
			PED::CLEAR_PED_NON_CREATION_AREA();
		}
		else
		{
			if (CAM::DOES_CAM_EXIST(uParam0->f_62.f_9))
			{
				CAM::DESTROY_CAM(uParam0->f_62.f_9, 0);
			}
			if (uParam0->f_62.f_24 > 0)
			{
				iVar338 = 0;
				while (iVar338 <= (uParam0->f_62.f_24 - 1))
				{
					if (CAM::DOES_CAM_EXIST(uParam0->f_62[iVar338]))
					{
						CAM::DESTROY_CAM(uParam0->f_62[iVar338], 0);
					}
					iVar338++;
				}
			}
			if (((uParam0->f_2 != 8 && uParam0->f_2 != 9) && uParam0->f_2 != 10) && uParam0->f_2 != 55)
			{
				GlobalFunc_7632(uParam0->f_62.f_21);
			}
			uParam0->f_62.f_15 = 0;
			uParam0->f_62.f_16 = 0;
			uParam0->f_62.f_17 = 0;
			uParam0->f_62.f_18 = 0;
			uParam0->f_62.f_19 = 0;
			uParam0->f_62.f_20 = 0;
			uParam0->f_62.f_24 = 0;
			if (!Global_35923)
			{
				CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
				CAM::_0x487A82C650EB7799(0f);
				CAM::_0x0225778816FDC28C(0f);
			}
			CAM::RENDER_SCRIPT_CAMS(0, 1, 1000, 1, 0, 0);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 0);
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
				PED::SET_PED_CAN_BE_TARGETTED(PLAYER::PLAYER_PED_ID(), 1);
				PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), 1, 0);
				}
			}
			GlobalFunc_749(0);
			if (!PED::IS_PED_INJURED(uParam0->f_62.f_13))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_62.f_13, 0);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uParam0->f_62.f_13, 1);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_62.f_12, 1);
			}
			if (!PED::IS_PED_INJURED(uParam0->f_62.f_12))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_62.f_12, 0);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_62.f_12, 1);
				if (uParam0->f_62.f_12 != PLAYER::PLAYER_PED_ID())
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_62.f_12, 0);
				}
			}
			*uParam0 = 6;
		}
	}
	if (*uParam0 == 6)
	{
		if (uParam0->f_16 != 0)
		{
			INTERIOR::UNPIN_INTERIOR(uParam0->f_16);
		}
		STREAMING::CLEAR_FOCUS();
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4917(uParam0->f_3));
		iVar339 = GlobalFunc_8315();
		if (iVar339 != 145)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_89730[iVar339]))
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_89730[iVar339], 1))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_89730[iVar339]));
				}
			}
			iVar340 = Global_89503[iVar339 /*74*/];
			if (iVar340 != 0)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar340);
			}
		}
		GlobalFunc_9271(uParam0->f_3);
		if ((((((uParam0->f_2 != 5 && uParam0->f_2 != 6) && uParam0->f_2 != 7) && uParam0->f_2 != 2) && uParam0->f_2 != 3) && uParam0->f_2 != 4) && uParam0->f_2 != 1)
		{
			Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[uParam0->f_3] = uParam0->f_2;
			GlobalFunc_5933(uParam0->f_3, uParam0->f_2);
		}
		if (uParam0->f_2 == 1)
		{
			GlobalFunc_5095(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT), -1);
		}
		GlobalFunc_5932(uParam0->f_3);
		GlobalFunc_8629(uParam0, &Var1);
		GlobalFunc_8628(uParam0);
		GlobalFunc_7222(uParam0->f_2);
		GlobalFunc_17(&Global_1312465);
		GlobalFunc_17(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[uParam0->f_3]));
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOD_SHIFT_SCENE"))
		{
			AUDIO::STOP_SOUND(uParam0->f_96.f_10);
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
		}
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[uParam0->f_3 /*3*/] = { 0f, 0f, 0f };
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[uParam0->f_3] = 0f;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1542[uParam0->f_3] = 0;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1546[uParam0->f_3 /*3*/] = { 0f, 0f, 0f };
		Global_87678 = 0;
		Global_89751 = -1;
		GlobalFunc_54(&(uParam0->f_1));
		if (((uParam0->f_2 != 8 && uParam0->f_2 != 9) && uParam0->f_2 != 10) && uParam0->f_2 != 55)
		{
			GlobalFunc_7632(0);
		}
		return 1;
	}
	return 0;
}
















































int func_422(var uParam0)//Position - 0x5FE1E
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	char* sVar8;
	char* sVar9;
	
	iVar0 = uParam0->f_2;
	uParam0->f_96.f_4 = uParam0->f_62.f_9;
	switch (iVar0)
	{
		case 234:
			if (Global_3)
			{
				if (func_446(uParam0, &fVar1))
				{
					return GlobalFunc_9272(19, 0, "EXTRASUNNY", "Cirrus", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 192:
			if (Global_3)
			{
				if (func_446(uParam0, &fVar1))
				{
					return GlobalFunc_9272(9, 0, "Overcast", "RAIN", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 75:
			if (Global_3)
			{
				if (func_446(uParam0, &fVar1))
				{
					return GlobalFunc_9272(19, 45, "SMOG", "Wispy", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 95:
			if (Global_3)
			{
				if (func_446(uParam0, &fVar1))
				{
					return GlobalFunc_9272(22, 0, "SMOG", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 280:
			if (Global_3)
			{
				if (func_446(uParam0, &fVar1))
				{
					return GlobalFunc_9272(18, 0, "SMOG", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 76:
			if (Global_3)
			{
				if (func_446(uParam0, &fVar1))
				{
					return GlobalFunc_9272(22, 0, "SMOG", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 174:
			if (func_446(uParam0, &fVar1))
			{
				GlobalFunc_741(20, &uVar3, &iVar2);
				return GlobalFunc_9272(iVar2, 0, "", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
			}
			break;
		
		case 231:
			if (func_446(uParam0, &fVar1))
			{
				GlobalFunc_741(15, &uVar5, &iVar4);
				return GlobalFunc_9272(iVar4, 0, "", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
			}
			break;
	}
	if (GlobalFunc_6710(Global_1312465))
	{
		iVar6 = GlobalFunc_208(Global_1312465);
		iVar7 = GlobalFunc_207(Global_1312465);
		sVar8 = "";
		sVar9 = "";
		if (!GlobalFunc_2929())
		{
			sVar8 = "SMOG";
		}
		if (func_423(&fVar1, 5f))
		{
			return GlobalFunc_9272(iVar6, iVar7, sVar8, sVar9, &(uParam0->f_96), fVar1, 0, 1, 5f);
		}
	}
	else if (!GlobalFunc_2929())
	{
	}
	return 0;
}

int func_423(float fParam0, float fParam1)//Position - 0x6005A
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_GAME_TIMER();
	if (iLocal_62 == -1)
	{
		iLocal_62 = iVar0;
	}
	iVar1 = (iVar0 - iLocal_62);
	*fParam0 = (SYSTEM::TO_FLOAT(iVar1) / (fParam1 * 1000f));
	if (*fParam0 < 0f)
	{
		*fParam0 = 0f;
	}
	if (*fParam0 > 1f)
	{
		*fParam0 = 1f;
	}
	return 1;
}























int func_446(var uParam0, float fParam1)//Position - 0x60BDB
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	
	Var0 = { Local_56 };
	Var3 = { Local_59 };
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_62.f_13))
	{
		Local_56 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_13, 1) };
		Var0 = { Local_56 };
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_62.f_12))
	{
		Local_59 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_12, 1) };
		Var3 = { Local_59 };
	}
	Var6 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
	fVar9 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, 0);
	fVar10 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var6, 0);
	*fParam1 = (fVar10 / fVar9);
	if (*fParam1 < 0f)
	{
		*fParam1 = 0f;
	}
	if (*fParam1 > 1f)
	{
		*fParam1 = 1f;
	}
	return 1;
}

int func_447(var uParam0, int iParam1, int iParam2, var uParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, char[4] cParam8, int iParam9)//Position - 0x60C84
{
	return func_448(uParam0, iParam1, iParam2, uParam3, fParam4, fParam5, bParam6, bParam7, cParam8, iParam9, 0, 0, 0);
	return 1;
}

int func_448(var uParam0, int iParam1, var uParam2, var uParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, char* sParam8, int iParam9, bool bParam10, bool bParam11, int iParam12)//Position - 0x60CAB
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	
	iVar0 = uParam3;
	if (!uParam0->f_16)
	{
		if (STREAMING::_0x71E7B2E657449AAD())
		{
			if (!bParam10)
			{
				uParam0->f_13 = PLAYER::PLAYER_PED_ID();
			}
			if ((!PED::IS_PED_INJURED(uParam0->f_13) || bParam10) && !PED::IS_PED_INJURED(uParam0->f_12))
			{
				uParam0->f_27 = 0;
				Global_87286 = 1;
				if (!bParam10)
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_13))
					{
						iVar1 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_13, 0);
						GlobalFunc_750(iVar1, 0);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
					ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_13, 1);
					ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_12, 1);
				}
				uParam0->f_21 = GlobalFunc_701();
				GlobalFunc_7632(1);
				if (bParam6)
				{
					iVar0 |= 4;
				}
				if (bParam7)
				{
					iVar0 |= 8;
				}
				if (CAM::DOES_CAM_EXIST(iParam1) || !MISC::IS_STRING_NULL_OR_EMPTY(uParam8))
				{
					iVar0 |= 2;
				}
				if (GlobalFunc_268())
				{
					iVar0 |= 1;
				}
				if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					STREAMING::START_PLAYER_SWITCH(uParam0->f_13, uParam0->f_12, iVar0, uParam2);
					if (bParam11)
					{
						STREAMING::_0x5F2013F8BC24EE69(iParam12);
					}
					switch (GlobalFunc_6674(uParam0->f_13))
					{
						case 0:
							GRAPHICS::_ANIMPOSTFX_STOP_AND_DO_UNK("SwitchHUDMichaelOut");
							break;
						
						case 1:
							GRAPHICS::_ANIMPOSTFX_STOP_AND_DO_UNK("SwitchHUDMichaelOut");
							break;
						
						case 2:
							GRAPHICS::_ANIMPOSTFX_STOP_AND_DO_UNK("SwitchHUDTrevorOut");
							break;
					}
					GRAPHICS::_ANIMPOSTFX_STOP_AND_DO_UNK("SwitchHUDOut");
				}
				else if (STREAMING::_0x933BBEEB8C61B5F4())
				{
					STREAMING::_SWITCH_IN_PLAYER(uParam0->f_12);
					GlobalFunc_749(0);
				}
				else
				{
					return 0;
				}
				if (CAM::DOES_CAM_EXIST(iParam1))
				{
					if (STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(ENTITY::GET_ENTITY_COORDS(uParam0->f_13, 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_12, 1)) != 3)
					{
						STREAMING::SET_PLAYER_SWITCH_OUTRO(CAM::GET_CAM_COORD(iParam1), CAM::GET_CAM_ROT(iParam1, iParam9), CAM::GET_CAM_FOV(iParam1), CAM::GET_CAM_FAR_CLIP(iParam1), iParam9);
					}
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					STREAMING::SET_PLAYER_SWITCH_ESTABLISHING_SHOT(sParam8);
				}
				if (!Global_17098.f_111)
				{
					AUDIO::PLAY_SOUND(-1, "CHARACTER_CHANGE_UP_MASTER", 0, 0, 0, 1);
					if (STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(ENTITY::GET_ENTITY_COORDS(uParam0->f_13, 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_12, 1)) == 3)
					{
						AUDIO::PLAY_SOUND(-1, "slow", "SHORT_PLAYER_SWITCH_SOUND_SET", 0, 0, 1);
					}
					if (Global_17098.f_109 == -1)
					{
						Global_17098.f_109 = AUDIO::GET_SOUND_ID();
					}
					Global_17098.f_110 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
					AUDIO::PLAY_SOUND(Global_17098.f_109, "CHARACTER_CHANGE_SKY_MASTER", 0, 0, 0, 1);
					AUDIO::START_AUDIO_SCENE("CHARACTER_CHANGE_IN_SKY_SCENE");
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHARACTER_CHANGE_IN_SKY_SCENE"))
					{
					}
				}
				if (Global_17098.f_109 != -1 && Global_17098.f_110 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					AUDIO::STOP_SOUND(Global_17098.f_109);
					AUDIO::RELEASE_SOUND_ID(Global_17098.f_109);
					Global_17098.f_109 = -1;
					Global_17098.f_110 = 0;
				}
				uParam0->f_25 = MISC::GET_GAME_TIMER();
				uParam0->f_16 = 1;
				GlobalFunc_748(1);
				HUD::SET_MINIMAP_IN_SPECTATOR_MODE(1, uParam0->f_13);
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 3)
				{
					CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(1);
				}
				if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3)
				{
					CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(1);
				}
				if (!bParam10)
				{
					if (ENTITY::GET_ENTITY_MODEL(uParam0->f_12) == GlobalFunc_4917(0))
					{
						GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(GlobalFunc_707(0));
					}
					else if (ENTITY::GET_ENTITY_MODEL(uParam0->f_12) == GlobalFunc_4917(2))
					{
						GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(GlobalFunc_707(2));
					}
					else if (ENTITY::GET_ENTITY_MODEL(uParam0->f_12) == GlobalFunc_4917(1))
					{
						GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(GlobalFunc_707(1));
					}
					else
					{
						GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER("");
					}
					GRAPHICS::SET_PLAYER_TCMODIFIER_TRANSITION(0f);
				}
			}
			else
			{
				uParam0->f_17 = 1;
			}
		}
		else
		{
			uParam0->f_17 = 1;
		}
	}
	if (uParam0->f_16)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (!Global_17098.f_111)
			{
			}
			if (GlobalFunc_747(uParam3, 512))
			{
				if (!STREAMING::IS_SWITCH_READY_FOR_DESCENT())
				{
				}
				else if (Global_89750 == 0)
				{
					STREAMING::ALLOW_PLAYER_SWITCH_DESCENT();
				}
			}
			if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
			{
				if (STREAMING::GET_PLAYER_SHORT_SWITCH_STATE() >= 1)
				{
					if (!uParam0->f_18)
					{
						GlobalFunc_737();
						uParam0->f_18 = 1;
					}
					if (!uParam0->f_22)
					{
						GlobalFunc_7981(0, 1);
						uParam0->f_22 = 1;
					}
				}
			}
			else
			{
				if (STREAMING::GET_PLAYER_SWITCH_STATE() >= 8)
				{
					if (!uParam0->f_18)
					{
						GlobalFunc_737();
						uParam0->f_18 = 1;
					}
				}
				if (!uParam0->f_18)
				{
					if (STREAMING::IS_SWITCH_SKIPPING_DESCENT() && STREAMING::GET_PLAYER_SWITCH_STATE() == 3)
					{
						Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						Var5 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						fVar8 = 20f;
						fVar9 = SYSTEM::VDIST2(Var2, Var5);
						if (fVar9 < (fVar8 * fVar8))
						{
							GlobalFunc_737();
							uParam0->f_18 = 1;
						}
					}
				}
				if (!uParam0->f_22)
				{
					if (STREAMING::GET_PLAYER_SWITCH_STATE() > 2)
					{
						GlobalFunc_7981(0, 1);
						uParam0->f_22 = 1;
					}
				}
				if (!uParam0->f_23)
				{
					if (STREAMING::GET_PLAYER_SWITCH_STATE() >= 3)
					{
						GRAPHICS::CASCADE_SHADOWS_SET_SHADOW_SAMPLE_TYPE("CSM_ST_BOX3x3");
						uParam0->f_23 = 1;
					}
				}
			}
		}
		else
		{
			if (!uParam0->f_18)
			{
				uParam0->f_18 = 1;
				GlobalFunc_737();
			}
			if (!uParam0->f_22)
			{
				GlobalFunc_7981(0, 1);
				uParam0->f_22 = 1;
			}
			uParam0->f_17 = 1;
		}
	}
	if (uParam0->f_17)
	{
		iVar10 = GlobalFunc_5187();
		if (((iVar10 != 8 && iVar10 != 9) && iVar10 != 10) && iVar10 != 55)
		{
			GlobalFunc_7632(uParam0->f_21);
		}
		if (uParam0->f_23)
		{
			GRAPHICS::_CASCADE_SHADOWS_CLEAR_SHADOW_SAMPLE_TYPE();
			uParam0->f_23 = 0;
		}
		uParam0->f_16 = 0;
		uParam0->f_17 = 0;
		uParam0->f_18 = 0;
		uParam0->f_19 = 0;
		uParam0->f_20 = 0;
		uParam0->f_24 = 0;
		uParam0->f_27 = 0;
		if (Global_17098.f_109 != -1 && Global_17098.f_110 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
			AUDIO::STOP_SOUND(Global_17098.f_109);
			AUDIO::RELEASE_SOUND_ID(Global_17098.f_109);
			Global_17098.f_109 = -1;
			Global_17098.f_110 = 0;
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHARACTER_CHANGE_IN_SKY_SCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("CHARACTER_CHANGE_IN_SKY_SCENE");
		}
		if (Global_17098.f_107 != -1 && Global_17098.f_108 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
			AUDIO::STOP_SOUND(Global_17098.f_107);
			AUDIO::RELEASE_SOUND_ID(Global_17098.f_107);
			Global_17098.f_107 = -1;
			Global_17098.f_108 = 0;
		}
		if (fParam5 <= 360f && fParam5 >= -360f)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam5);
		}
		if (fParam4 <= 360f && fParam4 >= -360f)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam4, 1065353216);
		}
		if (!Global_35923)
		{
			CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
			CAM::_0x487A82C650EB7799(0f);
			CAM::_0x0225778816FDC28C(0f);
		}
		if (!bParam10)
		{
			if (!PED::IS_PED_INJURED(uParam0->f_13))
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_13, 1);
				PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_13, 1);
				if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_13, 0))
				{
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_13, 1, 0);
				}
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_13))
				{
					iVar11 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_13, 0);
					GlobalFunc_750(iVar11, 1);
				}
			}
		}
		GlobalFunc_749(0);
		if (!bParam10)
		{
			if (!PED::IS_PED_INJURED(uParam0->f_13) || bParam10)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_13, 0);
			}
			if (!PED::IS_PED_INJURED(uParam0->f_12))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_12, 0);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			GRAPHICS::SET_CURRENT_PLAYER_TCMODIFIER(GlobalFunc_707(GlobalFunc_8315()));
		}
		GlobalFunc_748(0);
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(0, 0);
		return 0;
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	return 1;
}













int func_461(var uParam0, int iParam1, var uParam2, float fParam3, float fParam4, bool bParam5, bool bParam6, var uParam7, bool bParam8, int iParam9)//Position - 0x61514
{
	return func_448(uParam0, 0, iParam1, uParam2, fParam3, fParam4, bParam5, bParam6, uParam7, 2, 0, bParam8, iParam9);
	return 1;
}
























void func_485(int iParam0, int iParam1)//Position - 0x62C79
{
	int iVar0;
	struct<3> Var1;
	
	GlobalFunc_9270(iParam0, 0);
	func_183(iParam0, 0);
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_42(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			if (PATHFIND::GET_SAFE_COORD_FOR_PED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar0 /*3*/], iParam1, &Var1, 16))
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar0 /*3*/] = { Var1 };
			}
		}
	}
}
























































void func_541(int iParam0)//Position - 0x718C5
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, iParam0);
	iVar1 = 0;
	while (iVar1 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls)
	{
		if (Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[iVar1 /*15*/].Player_Char_Bitset == iVar0)
		{
			GlobalFunc_7682(Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[iVar1 /*15*/]);
			iVar1 = 0;
		}
		else
		{
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Chat_Calls)
	{
		if (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAT_CALLS_ARRAY[iVar1 /*15*/].f_2 == iVar0)
		{
			GlobalFunc_7682(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAT_CALLS_ARRAY[iVar1 /*15*/]);
			iVar1 = 0;
		}
		else
		{
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Texts)
	{
		if (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_TEXTS_ARRAY[iVar1 /*14*/].Player_Char_Bitset == iVar0)
		{
			GlobalFunc_7682(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_TEXTS_ARRAY[iVar1 /*14*/]);
			iVar1 = 0;
		}
		else
		{
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Emails)
	{
		if (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_EMAILS_ARRAY[iVar1 /*10*/].Player_Char_Bitset == iVar0)
		{
			GlobalFunc_7682(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_EMAILS_ARRAY[iVar1 /*10*/]);
			iVar1 = 0;
		}
		else
		{
			iVar1++;
		}
	}
}











void func_552(bool bParam0)//Position - 0x72084
{
	GlobalFunc_10943(joaat("player_zero"), 12, 20, bParam0);
	GlobalFunc_10943(joaat("player_zero"), 12, 21, bParam0);
	GlobalFunc_10943(joaat("player_zero"), 12, 22, bParam0);
	GlobalFunc_10943(joaat("player_one"), 12, 13, bParam0);
	GlobalFunc_10943(joaat("player_one"), 12, 14, bParam0);
	GlobalFunc_10943(joaat("player_one"), 12, 15, bParam0);
	GlobalFunc_10943(joaat("player_two"), 12, 17, bParam0);
	GlobalFunc_10943(joaat("player_two"), 12, 18, bParam0);
	GlobalFunc_10943(joaat("player_two"), 12, 19, bParam0);
}

void func_553()//Position - 0x72113
{
	func_554(24);
	func_554(25);
	func_554(26);
	func_554(27);
}

void func_554(int iParam0)//Position - 0x72133
{
	int iVar0;
	
	iVar0 = iParam0;
	if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iVar0 /*6*/] == 0)
	{
		GlobalFunc_5982(iVar0, joaat("cities_passed"), 1);
	}
}




void func_558()//Position - 0x72530
{
	PAD::DISABLE_CONTROL_ACTION(2, 199, 1);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	GlobalFunc_7629();
}


int func_560()//Position - 0x72582
{
	struct<4> Var0;
	
	switch (iLocal_100)
	{
		case 0:
			AUDIO::START_AUDIO_SCENE("END_CREDITS_SHRINKS_NOTE_SCENE");
			uLocal_101 = unk_0x67D02A194A2FC2BD("PSYCHOLOGY_REPORT");
			while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_101))
			{
				func_558();
				SYSTEM::WAIT(0);
			}
			while (!AUDIO::LOAD_STREAM("Office_Background_Stream", "SHRINK_SOUNDS"))
			{
				func_558();
				SYSTEM::WAIT(0);
			}
			HUD::REQUEST_ADDITIONAL_TEXT("REPORT", 0);
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				func_558();
				SYSTEM::WAIT(0);
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_101, "SET_PLAYER_NAME");
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL("PATIENT");
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("GAMERTAG");
			if (NETWORK::NETWORK_IS_SIGNED_IN())
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()));
			}
			else
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL("ACCNA_MIKE");
			}
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_101, "SET_LETTER_TEXT");
			GlobalFunc_726("HEADER_1");
			GlobalFunc_726("HEADER_2");
			Var0 = { func_599(&uLocal_102) };
			GlobalFunc_726(&Var0);
			Var0 = { func_598(&uLocal_102) };
			GlobalFunc_726(&Var0);
			Var0 = { func_597(&uLocal_102) };
			GlobalFunc_726(&Var0);
			Var0 = { func_596(&uLocal_102) };
			GlobalFunc_726(&Var0);
			Var0 = { func_595(&uLocal_102) };
			GlobalFunc_726(&Var0);
			Var0 = { func_593(&uLocal_102) };
			GlobalFunc_726(&Var0);
			Var0 = { func_591(&uLocal_102) };
			GlobalFunc_726(&Var0);
			Var0 = { func_590(&uLocal_102) };
			GlobalFunc_726(&Var0);
			Var0 = { func_589(&uLocal_102) };
			GlobalFunc_726(&Var0);
			Var0 = { func_588(&uLocal_102) };
			GlobalFunc_726(&Var0);
			Var0 = { func_586(&uLocal_102) };
			GlobalFunc_726(&Var0);
			Var0 = { func_583(&uLocal_102) };
			GlobalFunc_726(&Var0);
			Var0 = { func_582(&uLocal_102) };
			GlobalFunc_726(&Var0);
			Var0 = { func_581(&uLocal_102) };
			GlobalFunc_726(&Var0);
			Var0 = { func_580(&uLocal_102) };
			GlobalFunc_726(&Var0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			while (!func_573(&uLocal_118, &uLocal_119, &uLocal_102))
			{
				func_558();
				SYSTEM::WAIT(0);
			}
			GlobalFunc_810(&uLocal_120);
			GlobalFunc_5210(&uLocal_120, 0, 0, 1, 1);
			GlobalFunc_813(&uLocal_120, "CONTINUE", 2, 201, 1, 1, 0);
			GlobalFunc_5275(&uLocal_120, 1);
			GlobalFunc_5850(&uLocal_120, 1);
			AUDIO::PLAY_STREAM_FRONTEND();
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				while (!CAM::IS_SCREEN_FADED_IN())
				{
					func_558();
					GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
					GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_101, 255, 255, 255, 255, 0);
					SYSTEM::WAIT(0);
				}
			}
			func_558();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_101, 255, 255, 255, 255, 0);
			iLocal_100 = 1;
			break;
		
		case 1:
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_101, 255, 255, 255, 255, 0);
			func_561(&uLocal_120, 1128792064, 1, 0, 1, 1065353216);
			if (PAD::_IS_USING_KEYBOARD(2))
			{
				HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
			}
			if (PAD::IS_CONTROL_PRESSED(2, 201))
			{
				iLocal_100 = 2;
			}
			break;
		
		case 2:
			GlobalFunc_810(&uLocal_120);
			CAM::DO_SCREEN_FADE_OUT(3000);
			while (CAM::IS_SCREEN_FADING_OUT())
			{
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_101, 255, 255, 255, 255, 0);
				func_558();
				SYSTEM::WAIT(0);
			}
			AUDIO::STOP_STREAM();
			AUDIO::STOP_AUDIO_SCENE("END_CREDITS_SHRINKS_NOTE_SCENE");
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_101);
			return 0;
			break;
	}
	return 1;
}

void func_561(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x7289E
{
	var uVar0;
	var uVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (((CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADED_OUT()) || MISC::IS_FRONTEND_FADING())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!GlobalFunc_5209(uParam0))
	{
		return;
	}
	HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam2);
	if (!GlobalFunc_747(uParam0->f_1, 256) || (GlobalFunc_747(uParam0->f_1, 8192) && PAD::_0x6CD79468A1E595C6(2)))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_CLEAR_SPACE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam5);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(GlobalFunc_747(uParam0->f_1, 4096));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = PAD::_IS_USING_KEYBOARD(2);
					break;
				
				case 2:
					bVar4 = !PAD::_IS_USING_KEYBOARD(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT"))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						uVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						uVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = MISC::IS_BIT_SET(uParam0->f_2[iVar6 /*15*/].f_13, iVar7);
						if (!MISC::IS_BIT_SET(uParam0->f_2[iVar6 /*15*/].f_12, iVar7))
						{
							uVar3 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(uVar0, uVar1, bVar2);
						}
						else
						{
							uVar3 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(uVar0, uVar1, bVar2);
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uVar3))
						{
							GlobalFunc_257(sVar3);
						}
						iVar7++;
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[iVar6 /*15*/]))
					{
						GlobalFunc_726(uParam0->f_2[iVar6 /*15*/]);
					}
					if (MISC::IS_PC_VERSION())
					{
						if (GlobalFunc_747(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
							}
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar6++;
		}
		fVar8 = GlobalFunc_512(bParam4, GlobalFunc_512(GlobalFunc_747(uParam0->f_1, 32), 1f, 0f), -1f);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar8);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_BACKGROUND_COLOUR");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(80f);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GlobalFunc_812(&(uParam0->f_1), 256);
		GlobalFunc_811(&(uParam0->f_1), 128);
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 0, 0);
}












int func_573(var uParam0, var uParam1, var uParam2)//Position - 0x72D97
{
	int iVar0;
	
	if (GlobalFunc_6874())
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			if (GlobalFunc_1173())
			{
				return 0;
			}
			GlobalFunc_1172();
			*uParam0++;
			break;
		
		case 1:
			DATAFILE::DATAFILE_CREATE();
			iVar0 = DATAFILE::DATAFILE_GET_FILE_DICT();
			DATAFILE::DATADICT_SET_INT(iVar0, "in", *uParam2);
			DATAFILE::DATADICT_SET_STRING(iVar0, "st", &(uParam2->f_1));
			DATAFILE::DATADICT_SET_STRING(iVar0, "mp", &(uParam2->f_2));
			DATAFILE::DATADICT_SET_STRING(iVar0, "ms", &(uParam2->f_3));
			DATAFILE::DATADICT_SET_STRING(iVar0, "sc", &(uParam2->f_5));
			DATAFILE::DATADICT_SET_STRING(iVar0, "pr", &(uParam2->f_6));
			DATAFILE::DATADICT_SET_STRING(iVar0, "fa", &(uParam2->f_7));
			DATAFILE::DATADICT_SET_STRING(iVar0, "sm", &(uParam2->f_8));
			DATAFILE::DATADICT_SET_STRING(iVar0, "kp", &(uParam2->f_9));
			DATAFILE::DATADICT_SET_STRING(iVar0, "sv", &(uParam2->f_10));
			DATAFILE::DATADICT_SET_STRING(iVar0, "yo", &(uParam2->f_11));
			DATAFILE::DATADICT_SET_STRING(iVar0, "fi", &(uParam2->f_12));
			DATAFILE::DATADICT_SET_STRING(iVar0, "rc", &(uParam2->f_13));
			DATAFILE::DATADICT_SET_STRING(iVar0, "co", &(uParam2->f_14));
			DATAFILE::DATADICT_SET_INT(iVar0, "su", uParam2->f_15);
			DATAFILE::DATAFILE_START_SAVE_TO_CLOUD("gta5/psych/index.json");
			*uParam0++;
			break;
		
		case 2:
			if (func_574(uParam1, 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_574(var uParam0, int iParam1)//Position - 0x72EEF
{
	if (!DATAFILE::DATAFILE_UPDATE_SAVE_TO_CLOUD(uParam0))
	{
		if (*uParam0)
		{
			if (DATAFILE::DATAFILE_GET_FILE_DICT() != 0 && iParam1)
			{
				DATAFILE::DATAFILE_DELETE();
			}
			return 1;
		}
		else
		{
			if (DATAFILE::DATAFILE_GET_FILE_DICT() != 0 && iParam1)
			{
				DATAFILE::DATAFILE_DELETE();
			}
			return 1;
		}
	}
	return 0;
}






struct<4> func_580(var uParam0)//Position - 0x72FC3
{
	struct<4> Var0;
	int iVar4;
	
	StringCopy(&Var0, "SUMMARY_", 16);
	iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(1, 24);
	uParam0->f_15 = iVar4;
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

struct<4> func_581(var uParam0)//Position - 0x72FED
{
	struct<4> Var0;
	int iVar4;
	
	StringCopy(&Var0, "COLLECT_", 16);
	if (((GlobalFunc_485(110) || GlobalFunc_485(95)) || GlobalFunc_485(106)) || GlobalFunc_485(107))
	{
		StringCopy(&(uParam0->f_14), "Y", 4);
		StringConCat(&Var0, "Y", 16);
		iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(1, 11);
	}
	else
	{
		StringCopy(&(uParam0->f_14), "N", 4);
		StringConCat(&Var0, "N", 16);
		iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(1, 12);
	}
	StringIntConCat(&(uParam0->f_14), iVar4, 4);
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

struct<4> func_582(var uParam0)//Position - 0x7307A
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	StringCopy(&Var0, "RAND_", 16);
	STATS::STAT_GET_INT(joaat("num_rndpeople_completed"), &iVar5, -1);
	STATS::STAT_GET_INT(joaat("num_rndevents_completed"), &iVar6, -1);
	iVar7 = (iVar5 + iVar6);
	if (iVar7 > 10)
	{
		StringCopy(&(uParam0->f_13), "Y", 4);
		StringConCat(&Var0, "Y", 16);
	}
	else
	{
		StringCopy(&(uParam0->f_13), "N", 4);
		StringConCat(&Var0, "N", 16);
	}
	iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
	StringIntConCat(&(uParam0->f_13), iVar4, 4);
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

struct<4> func_583(var uParam0)//Position - 0x730F9
{
	struct<4> Var0;
	int iVar4;
	
	StringCopy(&Var0, "FIT_", 16);
	if ((((((((GlobalFunc_6814(1, 1) > 50 && GlobalFunc_6814(1, 2) > 50) && GlobalFunc_6814(1, 3) > 50) && GlobalFunc_6814(0, 1) > 50) && GlobalFunc_6814(0, 2) > 50) && GlobalFunc_6814(0, 3) > 50) && GlobalFunc_6814(2, 1) > 50) && GlobalFunc_6814(2, 2) > 50) && GlobalFunc_6814(2, 3) > 50)
	{
		StringCopy(&(uParam0->f_12), "Y", 4);
		StringConCat(&Var0, "Y", 16);
	}
	else
	{
		StringCopy(&(uParam0->f_12), "N", 4);
		StringConCat(&Var0, "N", 16);
	}
	iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(1, 11);
	StringIntConCat(&(uParam0->f_12), iVar4, 4);
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}



struct<4> func_586(var uParam0)//Position - 0x73200
{
	struct<4> Var0;
	int iVar4;
	
	StringCopy(&Var0, "YOGA_", 16);
	if (GlobalFunc_433(300, 1))
	{
		StringCopy(&(uParam0->f_11), "Y", 4);
		StringConCat(&Var0, "Y", 16);
	}
	else
	{
		StringCopy(&(uParam0->f_11), "N", 4);
		StringConCat(&Var0, "N", 16);
	}
	iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
	StringIntConCat(&(uParam0->f_11), iVar4, 4);
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}


struct<4> func_588(var uParam0)//Position - 0x73289
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;
	
	StringCopy(&Var0, "VEHS_", 16);
	STATS::STAT_GET_INT(joaat("sp0_number_stolen_cop_vehicle"), &iVar5, 0);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(joaat("sp0_number_stolen_cars"), &iVar5, 0);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(joaat("sp0_number_stolen_bikes"), &iVar5, 0);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(joaat("sp0_number_stolen_boats"), &iVar5, 0);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(joaat("sp0_number_stolen_helis"), &iVar5, 0);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(joaat("sp0_number_stolen_quadbikes"), &iVar5, 0);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(joaat("sp0_number_stolen_bicycles"), &iVar5, 0);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(joaat("sp1_number_stolen_cop_vehicle"), &iVar5, 1);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(joaat("sp1_number_stolen_cars"), &iVar5, 1);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(joaat("sp1_number_stolen_bikes"), &iVar5, 1);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(joaat("sp1_number_stolen_boats"), &iVar5, 1);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(joaat("sp1_number_stolen_helis"), &iVar5, 1);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(joaat("sp1_number_stolen_quadbikes"), &iVar5, 1);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(joaat("sp1_number_stolen_bicycles"), &iVar5, 1);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(joaat("sp2_number_stolen_cop_vehicle"), &iVar5, 2);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(joaat("sp2_number_stolen_cars"), &iVar5, 2);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(joaat("sp2_number_stolen_bikes"), &iVar5, 2);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(joaat("sp2_number_stolen_boats"), &iVar5, 2);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(joaat("sp2_number_stolen_helis"), &iVar5, 2);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(joaat("sp2_number_stolen_quadbikes"), &iVar5, 2);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(joaat("sp2_number_stolen_bicycles"), &iVar5, 2);
	iVar6 = (iVar6 + iVar5);
	if (iVar6 >= 100)
	{
		StringCopy(&(uParam0->f_10), "Y", 4);
		StringConCat(&Var0, "Y", 16);
	}
	else
	{
		StringCopy(&(uParam0->f_10), "N", 4);
		StringConCat(&Var0, "N", 16);
	}
	iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
	StringIntConCat(&(uParam0->f_10), iVar4, 4);
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

struct<4> func_589(var uParam0)//Position - 0x7348B
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;
	
	StringCopy(&Var0, "PEDS_", 16);
	STATS::STAT_GET_INT(joaat("sp0_kills_innocents"), &iVar5, 0);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(joaat("sp1_kills_innocents"), &iVar5, 1);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(joaat("sp2_kills_innocents"), &iVar5, 2);
	iVar6 = (iVar6 + iVar5);
	if (iVar6 >= 100)
	{
		StringCopy(&(uParam0->f_9), "Y", 4);
		StringConCat(&Var0, "Y", 16);
	}
	else
	{
		StringCopy(&(uParam0->f_9), "N", 4);
		StringConCat(&Var0, "N", 16);
	}
	iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
	StringIntConCat(&(uParam0->f_9), iVar4, 4);
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

struct<4> func_590(var uParam0)//Position - 0x73525
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	
	StringCopy(&Var0, "STOCK_", 16);
	STATS::STAT_GET_INT(joaat("time_spent_on_stockmarket"), &iVar5, 0);
	if (iVar5 >= 120000)
	{
		StringCopy(&(uParam0->f_8), "Y", 4);
		StringConCat(&Var0, "Y", 16);
	}
	else
	{
		StringCopy(&(uParam0->f_8), "N", 4);
		StringConCat(&Var0, "N", 16);
	}
	iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
	StringIntConCat(&(uParam0->f_8), iVar4, 4);
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

struct<4> func_591(var uParam0)//Position - 0x73592
{
	struct<4> Var0;
	int iVar4;
	
	StringCopy(&Var0, "FAMILY_", 16);
	if (func_592(8) && func_592(5))
	{
		StringCopy(&(uParam0->f_7), "Y", 4);
		StringConCat(&Var0, "Y", 16);
	}
	else if ((Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[50 /*6*/] == 1 && Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[51 /*6*/] == 1) && Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[52 /*6*/] == 1)
	{
		StringCopy(&(uParam0->f_7), "Y", 4);
		StringConCat(&Var0, "Y", 16);
	}
	else
	{
		StringCopy(&(uParam0->f_7), "N", 4);
		StringConCat(&Var0, "N", 16);
	}
	iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
	StringIntConCat(&(uParam0->f_7), iVar4, 4);
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

int func_592(int iParam0)//Position - 0x73650
{
	if (iParam0 < 9)
	{
		return MISC::IS_BIT_SET(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam0 /*19*/].f_18, 0);
	}
	return 0;
}

struct<4> func_593(var uParam0)//Position - 0x7367A
{
	struct<4> Var0;
	int iVar4;
	
	StringCopy(&Var0, "PROS_", 16);
	if ((func_594(1) > 0 || func_594(0) > 0) || func_594(2) > 0)
	{
		StringCopy(&(uParam0->f_6), "Y", 4);
		StringConCat(&Var0, "Y", 16);
	}
	else
	{
		StringCopy(&(uParam0->f_6), "N", 4);
		StringConCat(&Var0, "N", 16);
	}
	iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
	StringIntConCat(&(uParam0->f_6), iVar4, 4);
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

int func_594(int iParam0)//Position - 0x736F5
{
	switch (iParam0)
	{
		case 0:
			return Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PROSTITUTE_SERVICES_ARRAY[0];
			break;
		
		case 1:
			return Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PROSTITUTE_SERVICES_ARRAY[1];
			break;
		
		case 2:
			return Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PROSTITUTE_SERVICES_ARRAY[2];
			break;
	}
	return 0;
}

struct<4> func_595(var uParam0)//Position - 0x7374D
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "STRIP_", 16);
	STATS::STAT_GET_INT(joaat("sp0_lap_danced_bought"), &iVar5, 0);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(joaat("sp1_lap_danced_bought"), &iVar5, 1);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(joaat("sp2_lap_danced_bought"), &iVar5, 2);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(joaat("sp0_money_spent_in_strip_clubs"), &iVar7, 0);
	iVar8 = (iVar8 + iVar7);
	STATS::STAT_GET_INT(joaat("sp1_money_spent_in_strip_clubs"), &iVar7, 1);
	iVar8 = (iVar8 + iVar7);
	STATS::STAT_GET_INT(joaat("sp2_money_spent_in_strip_clubs"), &iVar7, 2);
	iVar8 = (iVar8 + iVar7);
	if (iVar6 >= 3 || iVar8 >= 100)
	{
		StringCopy(&(uParam0->f_5), "Y", 4);
		StringConCat(&Var0, "Y", 16);
		iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
	}
	else
	{
		StringCopy(&(uParam0->f_5), "N", 4);
		StringConCat(&Var0, "N", 16);
		iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(1, 12);
	}
	StringIntConCat(&(uParam0->f_5), iVar4, 4);
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

struct<4> func_596(var uParam0)//Position - 0x73837
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;
	
	StringCopy(&Var0, "CASH_", 16);
	STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar5, 0);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar5, 1);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar5, 2);
	iVar6 = (iVar6 + iVar5);
	if (iVar6 >= 1000000)
	{
		StringCopy(&(uParam0->f_3), "SP", 8);
		StringConCat(&Var0, "SP", 16);
		iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(1, 14);
	}
	else
	{
		StringCopy(&(uParam0->f_3), "SA", 8);
		StringConCat(&Var0, "SA", 16);
		iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
	}
	StringIntConCat(&(uParam0->f_3), iVar4, 8);
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

struct<4> func_597(var uParam0)//Position - 0x738DC
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	StringCopy(&Var0, "CHAR_", 16);
	iVar5 = 0;
	iVar7 = 0;
	STATS::STAT_GET_INT(joaat("sp0_total_playing_time"), &iVar7, 0);
	STATS::STAT_GET_INT(joaat("sp1_total_playing_time"), &iVar6, 1);
	if (iVar6 > iVar7)
	{
		iVar7 = iVar6;
		iVar5 = 1;
	}
	STATS::STAT_GET_INT(joaat("sp2_total_playing_time"), &iVar6, 2);
	if (iVar6 > iVar7)
	{
		iVar7 = iVar6;
		iVar5 = 2;
	}
	if (iVar5 == 0)
	{
		StringCopy(&(uParam0->f_2), "M", 4);
		StringConCat(&Var0, "M", 16);
		iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
	}
	else if (iVar5 == 1)
	{
		StringCopy(&(uParam0->f_2), "F", 4);
		StringConCat(&Var0, "F", 16);
		iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
	}
	else
	{
		StringCopy(&(uParam0->f_2), "T", 4);
		StringConCat(&Var0, "T", 16);
		iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(1, 12);
	}
	StringIntConCat(&(uParam0->f_2), iVar4, 4);
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

struct<4> func_598(var uParam0)//Position - 0x739B1
{
	struct<4> Var0;
	int iVar4;
	
	StringCopy(&Var0, "STORY_", 16);
	if (GlobalFunc_485(135))
	{
		StringCopy(&(uParam0->f_1), "M", 4);
		StringConCat(&Var0, "M", 16);
		iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(1, 11);
	}
	else if (GlobalFunc_485(136))
	{
		StringCopy(&(uParam0->f_1), "T", 4);
		StringConCat(&Var0, "T", 16);
		iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(1, 10);
	}
	else
	{
		StringCopy(&(uParam0->f_1), "B", 4);
		StringConCat(&Var0, "B", 16);
		iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(1, 11);
	}
	StringIntConCat(&(uParam0->f_1), iVar4, 4);
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

struct<4> func_599(var uParam0)//Position - 0x73A43
{
	struct<4> Var0;
	int iVar4;
	
	StringCopy(&Var0, "INTRO_", 16);
	iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(1, 21);
	*uParam0 = iVar4;
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}









