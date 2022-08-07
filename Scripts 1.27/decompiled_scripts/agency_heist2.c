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
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	struct<3> Local_61 = { 0, 0, 0 } ;
	struct<3> Local_64 = { 0, 0, 0 } ;
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	int iLocal_74[4] = { 0, 0, 0, 0 };
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	struct<3> Local_96 = { 0, 0, 0 } ;
	float fLocal_99 = 0f;
	struct<3> Local_100 = { 0, 0, 0 } ;
	float fLocal_103 = 0f;
	struct<3> Local_104[4];
	struct<3> Local_117[4];
	struct<3> Local_130 = { 0, 0, 0 } ;
	float fLocal_133 = 0f;
	struct<3> Local_134 = { 0, 0, 0 } ;
	struct<3> Local_137 = { 0, 0, 0 } ;
	float fLocal_140 = 0f;
	struct<3> Local_141 = { 0, 0, 0 } ;
	struct<3> Local_144 = { 0, 0, 0 } ;
	bool bLocal_147 = 0;
	bool bLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	bool bLocal_152 = 0;
	int iLocal_153[2] = { 0, 0 };
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	bool bLocal_173 = 0;
	bool bLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	bool bLocal_179 = 0;
	int iLocal_180 = 0;
	float fLocal_181 = 0f;
	float fLocal_182 = 0f;
	float fLocal_183 = 0f;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	int iLocal_203 = 0;
	int iLocal_204 = 0;
	int iLocal_205 = 0;
	char* sLocal_206[5] = { NULL, NULL, NULL, NULL, NULL };
	int iLocal_212[5] = { 0, 0, 0, 0, 0 };
	var uLocal_218 = 0;
	struct<3> Local_219 = { 0, 0, 0 } ;
	struct<3> Local_222 = { 0, 0, 0 } ;
	var uLocal_225 = 0;
	struct<3> Local_226 = { 0, 0, 0 } ;
	struct<3> Local_229 = { 0, 0, 0 } ;
	struct<3> Local_232 = { 0, 0, 0 } ;
	int iLocal_235 = 0;
	char* sLocal_236 = NULL;
	char* sLocal_237 = NULL;
	char* sLocal_238 = NULL;
	char* sLocal_239 = NULL;
	char* sLocal_240 = NULL;
	char[] cLocal_241[8] = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	struct<10> Local_247[16];
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	struct<2> Local_412 = { 0, 0 } ;
	struct<2> Local_414 = { 0, 0 } ;
	struct<2> Local_416 = { 0, 0 } ;
	struct<2> Local_418 = { 0, 0 } ;
	struct<2> Local_420 = { 0, 0 } ;
	struct<2> Local_422 = { 0, 0 } ;
	struct<2> Local_424 = { 0, 0 } ;
	struct<36> Local_426[4];
	struct<14> Local_571[15];
	struct<3> Local_782 = { 0, 0, 0 } ;
	struct<3> Local_785 = { 0, 0, 0 } ;
	int iLocal_788 = 0;
	int iLocal_789 = 0;
	int iLocal_790 = 0;
	int iLocal_791 = 0;
	int iLocal_792 = 0;
	int iLocal_793 = 0;
	int iLocal_794 = 0;
	int iLocal_795 = 0;
	struct<6> Local_796[7];
	int iLocal_839 = 0;
	int iLocal_840 = 0;
	int iLocal_841 = 0;
	int iLocal_842 = 0;
	int iLocal_843 = 0;
	int iLocal_844 = 0;
	int iLocal_845 = 0;
	float fLocal_846 = 0f;
	int iLocal_847 = 0;
	int iLocal_848 = 0;
	float fLocal_849 = 0f;
	float fLocal_850 = 0f;
	var uLocal_851 = 0;
	struct<3> Local_852 = { 0, 0, 0 } ;
	struct<3> Local_855 = { 0, 0, 0 } ;
	struct<3> Local_858[8];
	struct<3> Local_883[8];
	struct<3> Local_908[6];
	int iLocal_927 = 0;
	int iLocal_928 = 0;
	struct<3> Local_929 = { 0, 0, 0 } ;
	struct<3> Local_932 = { 0, 0, 0 } ;
	float fLocal_935 = 0f;
	struct<3> Local_936 = { 0, 0, 0 } ;
	struct<3> Local_939 = { 0, 0, 0 } ;
	float fLocal_942 = 0f;
	var uLocal_943 = 0;
	int iLocal_944 = 0;
	int iLocal_945 = 0;
	char* sLocal_946[15] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_962 = 0;
	int iLocal_963 = 0;
	float fLocal_964 = 0f;
	float fLocal_965 = 0f;
	float fLocal_966 = 0f;
	struct<3> Local_967 = { 0, 0, 0 } ;
	struct<3> Local_970 = { 0, 0, 0 } ;
	struct<3> Local_973 = { 0, 0, 0 } ;
	var uLocal_976 = 0;
	struct<3> Local_977 = { 0, 0, 0 } ;
	struct<3> Local_980 = { 0, 0, 0 } ;
	struct<3> Local_983 = { 0, 0, 0 } ;
	int iLocal_986 = 0;
	char* sLocal_987 = NULL;
	int iLocal_988 = 0;
	var uLocal_989 = 0;
	int iLocal_990 = 0;
	int iLocal_991 = 0;
	int iLocal_992 = 0;
	int iLocal_993[4] = { 0, 0, 0, 0 };
	struct<3> Local_998[4];
	struct<3> Local_1011[4];
	int iLocal_1024 = 0;
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
	sLocal_19 = "NULL";
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
	Local_61 = { 0f, 0f, 0f };
	Local_64 = { 0f, 0f, 0f };
	iLocal_67 = -1;
	Local_96 = { -70.4456f, -1015.11f, 28.225f };
	fLocal_99 = 162.098f;
	Local_100 = { -109.9041f, -1032.184f, 26.2752f };
	fLocal_103 = 184.7313f;
	Local_134 = { -151.7855f, -996.3569f, 113.1353f };
	Local_137 = { -134.4733f, -958.6011f, 118.3848f };
	fLocal_140 = 12.25f;
	Local_144 = { 711.187f, -964.408f, 29.3953f };
	fLocal_181 = 0f;
	fLocal_182 = 0f;
	fLocal_183 = 0f;
	iLocal_198 = 1;
	iLocal_201 = -1;
	iLocal_202 = -1;
	iLocal_203 = -1;
	Local_219 = { -174.583f, -1002.13f, 113.13f };
	Local_222 = { 0f, 0f, 163.08f };
	Local_226 = { -135.997f, -966.943f, 113.135f };
	Local_229 = { 0f, 0f, -124f };
	sLocal_236 = "missfbi5ig_21";
	sLocal_237 = "missheist_agency2ahands_up";
	sLocal_238 = "hand_up_scientist";
	sLocal_239 = "handsup_anxious";
	sLocal_240 = "hands_up_shocked_scientist";
	cLocal_241 = "FB3aAUD";
	Local_782 = { -0.469401f, -0.863015f, -0.6957f };
	Local_785 = { -0.369f, -1.705f, -1.329f };
	iLocal_793 = -1;
	iLocal_794 = -1;
	iLocal_795 = -1;
	iLocal_841 = 4;
	iLocal_842 = 7;
	fLocal_849 = 9.8f;
	Local_852 = { -93.075f, -1031.653f, 27.075f };
	Local_855 = { 0f, 0f, 13.68f };
	Local_929 = { -186.1678f, -1010.032f, 113.3492f };
	Local_932 = { -177.5105f, -1013.213f, 117.3888f };
	fLocal_935 = 16.5f;
	Local_936 = { -157.9756f, -948.5523f, 112.6989f };
	Local_939 = { -154.2188f, -938.142f, 117.1885f };
	fLocal_942 = 17.75f;
	iLocal_944 = -1;
	Local_970 = { -148.683f, -1034.987f, 26.256f };
	Local_973 = { 0f, 0f, -104.8f };
	Local_977 = { -91.29668f, -1027.77f, 26.7887f };
	Local_980 = { -91.35906f, -1019.108f, 26.49537f };
	sLocal_987 = "theagencytwo";
	iLocal_988 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GlobalFunc_5129(706.9233f, -965.4952f, 29.4179f, 282.8027f);
		GlobalFunc_586(0);
		GlobalFunc_585(6, 0);
		GlobalFunc_10632();
		func_629();
	}
	MISC::SET_MISSION_FLAG(1);
	Global_89750++;
	func_582();
	func_581();
	func_579();
	func_577();
	while (((!func_576(&(Local_426[0 /*36*/])) || !func_576(&(Local_426[1 /*36*/]))) || !func_576(&(Local_426[2 /*36*/]))) || !func_576(&(Local_426[3 /*36*/])))
	{
		SYSTEM::WAIT(0);
	}
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_BR2", 0);
		Local_141 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		func_280();
		func_279();
		func_278();
		func_277();
		switch (iLocal_242)
		{
			case 0:
				func_266();
				break;
			
			case 1:
				func_260();
				break;
			
			case 2:
				func_251();
				break;
			
			case 3:
				func_135();
				break;
			
			case 5:
				func_132();
				break;
			
			case 6:
				func_96();
				break;
			
			case 4:
				func_94();
				break;
			
			case 7:
				break;
			
			default:
				break;
		}
		iVar0 = 0;
		while (iVar0 < Local_426)
		{
			func_83(&(Local_426[iVar0 /*36*/]));
			iVar0++;
		}
		func_82();
		if (bLocal_148)
		{
			func_81();
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0) == 7)
			{
				if (iLocal_242 != 3)
				{
					iLocal_150 = 1;
				}
				PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if (PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0) != 7 && iLocal_150)
		{
			iLocal_150 = 0;
			PED::SET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0, 7, 0, false);
		}
		GlobalFunc_504(PLAYER::PLAYER_PED_ID(), -1);
		if (!bLocal_147)
		{
			func_16();
		}
		if (!PED::IS_PED_INJURED(iLocal_80))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_80, -183.1873f, -1022.583f, 28.03928f, 6f, 10f, 3f, 0, 1, 0))
			{
				PED::SET_PED_RESET_FLAG(iLocal_80, 247, 1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_80))
		{
			if (!iLocal_169)
			{
				if (!PED::IS_PED_INJURED(iLocal_80) && (ENTITY::IS_ENTITY_AT_COORD(iLocal_80, -160.4385f, -938.4265f, 115.4342f, 10f, 10f, 10f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(iLocal_80, -186.0569f, -1017.815f, 115.43f, 10f, 10f, 10f, 0, 1, 0)))
				{
					if (!func_15(iLocal_80) && (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_80, -160.4385f, -938.4265f, 115.4342f, -162.48f, -944.1091f, 108.2559f, 9.25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_80, -186.0569f, -1017.815f, 115.43f, -180.3414f, -1019.818f, 108.076f, 4.75f, 0, 1, 0)))
					{
						AUDIO::PLAY_PAIN(iLocal_80, 2, 100f, 0);
						iLocal_169 = 1;
					}
				}
			}
			else if (!iLocal_170)
			{
				ENTITY::IS_ENTITY_DEAD(iLocal_80);
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_80, 1)) < 900f)
				{
					if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iLocal_80) < 2f && (PED::IS_PED_INJURED(iLocal_80) || ENTITY::IS_ENTITY_DEAD(iLocal_80)))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Architect_Fall", iLocal_80, "FBI_HEIST_SOUNDSET", 0, 0);
						iLocal_170 = 1;
					}
				}
			}
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_2_TAKE_OUT_ARCHITECT"))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_80))
			{
				if (((PED::IS_PED_INJURED(iLocal_80) || TASK::IS_PED_IN_WRITHE(iLocal_80)) || iLocal_159) || iLocal_151)
				{
					AUDIO::STOP_AUDIO_SCENE("AGENCY_H_2_TAKE_OUT_ARCHITECT");
				}
			}
		}
		func_1();
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -147.6221f, -1033.464f, 38.50214f) < 62500f)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_89))
			{
				STREAMING::REQUEST_MODEL(joaat("prop_const_fence02b"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("prop_const_fence02b")))
				{
					iLocal_89 = OBJECT::CREATE_OBJECT(joaat("prop_const_fence02b"), -147.6221f, -1033.464f, 38.40215f, 1, 1, 0);
					ENTITY::SET_ENTITY_ROTATION(iLocal_89, 0f, 0f, -17.76169f, 2, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_89, 1);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_89, 0);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_const_fence02b"));
				}
			}
		}
		else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -147.6221f, -1033.464f, 38.50214f) > 90000f)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_89))
			{
				OBJECT::DELETE_OBJECT(&iLocal_89);
			}
		}
		if (bLocal_147)
		{
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::STOP_GAMEPLAY_HINT(1);
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_2_FOLLOW_ARCHITECT_1"))
			{
				AUDIO::STOP_AUDIO_SCENE("AGENCY_H_2_FOLLOW_ARCHITECT_1");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_2_USE_ELEVATOR"))
			{
				AUDIO::STOP_AUDIO_SCENE("AGENCY_H_2_USE_ELEVATOR");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_2_FOLLOW_ARCHITECT_2"))
			{
				AUDIO::STOP_AUDIO_SCENE("AGENCY_H_2_FOLLOW_ARCHITECT_2");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_2_TAKE_OUT_ARCHITECT"))
			{
				AUDIO::STOP_AUDIO_SCENE("AGENCY_H_2_TAKE_OUT_ARCHITECT");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_2_LEAVE_SITE"))
			{
				AUDIO::STOP_AUDIO_SCENE("AGENCY_H_2_LEAVE_SITE");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_2_COVER_BLOWN"))
			{
				AUDIO::STOP_AUDIO_SCENE("AGENCY_H_2_COVER_BLOWN");
			}
			fLocal_182 = 0f;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x756
{
	int iVar0;
	struct<3> Var1;
	
	switch (iLocal_789)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_80))
			{
				iVar0 = 0;
				if ((MISC::GET_GAME_TIMER() - iLocal_199) > 1000)
				{
					WEAPON::GET_CURRENT_PED_WEAPON(iLocal_80, &iVar0, 0);
					iLocal_199 = MISC::GET_GAME_TIMER();
				}
				if (!PED::IS_PED_INJURED(iLocal_80))
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_80, joaat("weapon_briefcase_02"), 0))
					{
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_80, joaat("weapon_briefcase_02"), -1, 1, 1);
					}
					else if (iVar0 != joaat("weapon_briefcase_02"))
					{
						func_14(iLocal_80);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_82))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_80, iLocal_82, 1))
					{
						if (((ENTITY::IS_ENTITY_DEAD(iLocal_80) || PED::IS_PED_INJURED(iLocal_80)) || ENTITY::IS_ENTITY_DEAD(iLocal_82)) || PED::IS_PED_RAGDOLL(iLocal_80))
						{
							WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_briefcase_02"), 8, 0);
							if (WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_briefcase_02")))
							{
								WEAPON::REMOVE_WEAPON_FROM_PED(iLocal_80, joaat("weapon_briefcase_02"));
								iLocal_85 = WEAPON::CREATE_WEAPON_OBJECT(joaat("weapon_briefcase_02"), -1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_82, -1f, 0f, 0f), 1, 1065353216, 0);
								iLocal_789 = 2;
							}
						}
					}
				}
				if (iVar0 == joaat("weapon_briefcase_02"))
				{
					if ((PED::IS_PED_INJURED(iLocal_80) || ENTITY::IS_ENTITY_DEAD(iLocal_80)) || (!PED::IS_PED_INJURED(iLocal_80) && PED::IS_PED_RAGDOLL(iLocal_80)))
					{
						func_13(iLocal_80);
						iLocal_789 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (!iLocal_171)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_80))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_80))
					{
						if (bLocal_152)
						{
							GlobalFunc_565(537, 1, 1);
							iLocal_171 = 1;
						}
						else if (PED::IS_PED_BEING_STUNNED(iLocal_80, 0))
						{
							GlobalFunc_565(537, 2, 1);
							iLocal_171 = 1;
						}
						else if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 1) || !WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
						{
							GlobalFunc_565(537, 0, 1);
							iLocal_171 = 1;
						}
					}
					else if ((WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()) && !PED::WAS_PED_KILLED_BY_TAKEDOWN(iLocal_80)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_80, 1)) > 4f)
					{
						GlobalFunc_565(537, 3, 1);
						iLocal_171 = 1;
					}
					else
					{
						GlobalFunc_565(537, -1, 1);
						iLocal_171 = 1;
					}
				}
			}
			if (WEAPON::HAS_PED_GOT_WEAPON(iLocal_80, joaat("weapon_briefcase_02"), 0))
			{
				WEAPON::REMOVE_WEAPON_FROM_PED(iLocal_80, joaat("weapon_briefcase_02"));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_85))
			{
				if (func_15(iLocal_85) && Local_426[func_10(iLocal_85) /*36*/].f_26)
				{
					iLocal_789 = 2;
				}
				else if (iLocal_793 == -1)
				{
					iLocal_793 = MISC::GET_GAME_TIMER();
				}
				else if ((MISC::GET_GAME_TIMER() - iLocal_793) > 1000 && ENTITY::GET_ENTITY_SPEED(iLocal_85) < 0.1f)
				{
					iLocal_789 = 2;
				}
			}
			break;
		
		case 2:
			if (!iLocal_171)
			{
				GlobalFunc_565(537, -1, 1);
				iLocal_171 = 1;
			}
			if (WEAPON::HAS_PED_GOT_WEAPON(iLocal_80, joaat("weapon_briefcase_02"), 0))
			{
				WEAPON::REMOVE_WEAPON_FROM_PED(iLocal_80, joaat("weapon_briefcase_02"));
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_69))
			{
				HUD::REMOVE_BLIP(&uLocal_69);
			}
			if ((func_15(iLocal_85) && Local_426[func_10(iLocal_85) /*36*/].f_26) && ENTITY::DOES_ENTITY_EXIST(Local_426[func_10(iLocal_85) /*36*/]))
			{
				if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_85))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_85) || ENTITY::GET_ENTITY_SPEED(iLocal_85) > 0f)
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_85, Local_426[func_10(iLocal_85) /*36*/], 0, 0.450814f, -2.446289f, -2.240097f, -90f, 90.1774f, -0.609694f, 0, 0, 0, 0, 2, 1);
					}
					else
					{
						Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_85, 1) - ENTITY::GET_ENTITY_COORDS(Local_426[func_10(iLocal_85) /*36*/], 1) };
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_85, Local_426[func_10(iLocal_85) /*36*/], 0, Var1.x, Var1.f_1, -2.240097f, -90f, 90.1774f, -0.609694f, 0, 0, 0, 0, 2, 1);
					}
					iLocal_795 = func_10(iLocal_85);
				}
			}
			else if (iLocal_795 > 0 && iLocal_795 < 4)
			{
				if (!Local_426[iLocal_795 /*36*/].f_26)
				{
					if (ENTITY::IS_ENTITY_ATTACHED(iLocal_85))
					{
						ENTITY::DETACH_ENTITY(iLocal_85, 1, 0);
						ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_85, 0, 0f, 0f, 0.01f, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
					}
				}
			}
			break;
		
		case 4:
			if ((MISC::GET_GAME_TIMER() - iLocal_190) < 1000)
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, 1);
			}
			if (!iLocal_156)
			{
				iLocal_156 = 1;
			}
			if (func_9() == joaat("weapon_briefcase_02"))
			{
				if (!iLocal_157)
				{
					STREAMING::REQUEST_ANIM_SET("MOVE_P_M_ONE_BRIEFCASE");
					if (STREAMING::HAS_ANIM_SET_LOADED("MOVE_P_M_ONE_BRIEFCASE"))
					{
						PED::SET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "MOVE_P_M_ONE_BRIEFCASE", 1048576000);
						iLocal_157 = 1;
					}
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			}
			else if (iLocal_157)
			{
				STREAMING::REQUEST_ANIM_SET("MOVE_P_M_ONE");
				if (STREAMING::HAS_ANIM_SET_LOADED("MOVE_P_M_ONE"))
				{
					PED::SET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "MOVE_P_M_ONE", 1048576000);
					iLocal_157 = 0;
				}
			}
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_85))
	{
		if (iLocal_789 == 2)
		{
			if (iLocal_190 != 0)
			{
				iLocal_190 = 0;
			}
			if (!HUD::DOES_BLIP_EXIST(uLocal_71))
			{
				uLocal_71 = GlobalFunc_6799(iLocal_85);
			}
			else if (!GlobalFunc_111() || MISC::GET_PROFILE_SETTING(203) == 0)
			{
				if (!Local_412.f_1)
				{
					GlobalFunc_164("S3A_PICKUP", 7500, 1);
					Local_412.f_1 = 1;
					iLocal_794 = MISC::GET_GAME_TIMER();
				}
			}
			if (func_3())
			{
				HUD::CLEAR_PRINTS();
				func_2(2);
				func_14(PLAYER::PLAYER_PED_ID());
				iLocal_190 = MISC::GET_GAME_TIMER();
				iLocal_789 = 4;
			}
		}
	}
	if (!bLocal_147)
	{
		if (iLocal_789 != 0 && ((iLocal_242 == 0 || iLocal_242 == 1) || iLocal_242 == 5))
		{
			if (iLocal_789 == 4)
			{
				func_2(2);
			}
			else
			{
				func_2(6);
			}
		}
	}
}

void func_2(int iParam0)//Position - 0xCA7
{
	iLocal_242 = iParam0;
	if (HUD::DOES_BLIP_EXIST(uLocal_73))
	{
		HUD::REMOVE_BLIP(&uLocal_73);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_79))
	{
		HUD::REMOVE_BLIP(&uLocal_79);
	}
	iLocal_192 = 0;
	SYSTEM::SETTIMERA(0);
}

int func_3()//Position - 0xCD9
{
	if (((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_85, 1)) < (1.5f * 1.5f) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && ENTITY::GET_ENTITY_SPEED(iLocal_85) < 0.1f) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FBI_HEIST_H2_ARCHITECT_GRAB_CASE", iLocal_85, 0, 0, 0);
		if (HUD::DOES_BLIP_EXIST(uLocal_71))
		{
			RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
			HUD::REMOVE_BLIP(&uLocal_71);
		}
		iLocal_156 = 1;
		return 1;
	}
	return 0;
}






int func_9()//Position - 0xE64
{
	var uVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &uVar0, 0);
	return uVar0;
}

int func_10(int iParam0)//Position - 0xE7A
{
	int iVar0;
	int iVar1;
	
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Local_426)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(Local_426[iVar0 /*36*/])) && iVar1 == -1)
		{
			if (func_11(&(Local_426[iVar0 /*36*/]), iParam0))
			{
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_11(var uParam0, int iParam1)//Position - 0xED1
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam0, uParam0->f_19), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam0, uParam0->f_22), uParam0->f_25, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}


void func_13(int iParam0)//Position - 0xFC7
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_85))
	{
		OBJECT::DELETE_OBJECT(&iLocal_85);
	}
	iLocal_85 = WEAPON::GET_WEAPON_OBJECT_FROM_PED(iParam0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_85))
	{
		PHYSICS::ACTIVATE_PHYSICS(iLocal_85);
	}
	else
	{
		iLocal_85 = WEAPON::CREATE_WEAPON_OBJECT(joaat("weapon_briefcase_02"), -1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_82, -1f, 0f, 0f), 1, 1065353216, 0);
		PHYSICS::ACTIVATE_PHYSICS(iLocal_85);
	}
	WEAPON::REMOVE_WEAPON_FROM_PED(iParam0, joaat("weapon_briefcase_02"));
}

void func_14(int iParam0)//Position - 0x1026
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_85))
	{
		OBJECT::DELETE_OBJECT(&iLocal_85);
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("weapon_briefcase_02"), 0))
	{
		WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("weapon_briefcase_02"), -1, 1, 1);
	}
	WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_briefcase_02"), 1);
}

bool func_15(int iParam0)//Position - 0x1067
{
	int iVar0;
	bool bVar1;
	
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Local_426)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(Local_426[iVar0 /*36*/])) && !bVar1)
		{
			if (func_11(&(Local_426[iVar0 /*36*/]), iParam0))
			{
				bVar1 = true;
			}
		}
		iVar0++;
	}
	return bVar1;
}

void func_16()//Position - 0x10BC
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;
	
	func_79();
	func_77();
	if (iLocal_244 == 2)
	{
		if ((!bLocal_173 && !bLocal_174) && (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_100) < 4000f || func_75(PLAYER::PLAYER_PED_ID())))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, 0);
			PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
			if (func_74() || func_75(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_175 = 0;
			}
			iLocal_178 = MISC::GET_GAME_TIMER();
			bLocal_173 = true;
		}
	}
	if (iLocal_244 == 3)
	{
		if (!bLocal_174 && (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_100) < 4000f || func_75(PLAYER::PLAYER_PED_ID())))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 3, 0);
			PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
			if (func_74() || func_75(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_175 = 0;
			}
			iLocal_178 = MISC::GET_GAME_TIMER();
			bLocal_174 = true;
		}
	}
	if (iLocal_244 == 3 || iLocal_244 == 2)
	{
		if (bLocal_174 || bLocal_173)
		{
			if (bLocal_174)
			{
				if (!iLocal_177)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_178) > 3000)
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 3)
						{
							PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 3, 0);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
							iLocal_178 = MISC::GET_GAME_TIMER();
						}
					}
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >= 3)
					{
						iLocal_177 = 1;
					}
				}
				else if (!iLocal_175)
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 3)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 3, 0);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					}
				}
			}
			else if (bLocal_173)
			{
				if (!iLocal_176)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_178) > 3000)
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
						{
							PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, 0);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
							iLocal_178 = MISC::GET_GAME_TIMER();
						}
					}
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >= 2)
					{
						iLocal_176 = 1;
					}
				}
				else if (!iLocal_175)
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, 0);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					}
				}
			}
			PLAYER::SET_PLAYER_WANTED_CENTRE_POSITION(PLAYER::PLAYER_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
		}
		if (iLocal_176 || iLocal_177)
		{
			if (!iLocal_986)
			{
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_AH_MUGGING_01", 0f);
				iLocal_986 = 1;
			}
		}
		if (!iLocal_175)
		{
			if (!func_74() || !func_75(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_175 = 1;
			}
		}
	}
	switch (iLocal_245)
	{
		case 0:
			if (func_73())
			{
				iLocal_245 = 1;
			}
			break;
		
		case 1:
			if (iLocal_244 == 0)
			{
				func_56();
			}
			if (func_74())
			{
				iLocal_245 = 2;
			}
			break;
		
		case 2:
			if (func_55())
			{
				iLocal_245 = 3;
			}
			break;
		
		case 3:
			if (!func_74())
			{
				iLocal_245 = 4;
			}
			break;
		
		case 4:
			if (func_49())
			{
				iLocal_245 = 5;
			}
			break;
		
		case 5:
			func_48(1, 1, 1, 100f);
			break;
	}
	switch (iLocal_244)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < Local_571)
			{
				if (iLocal_244 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_571[iVar0 /*14*/]) && !PED::IS_PED_INJURED(Local_571[iVar0 /*14*/]))
					{
						fVar2 = SYSTEM::VDIST(Local_141, ENTITY::GET_ENTITY_COORDS(Local_571[iVar0 /*14*/], 1));
						if (fVar2 < 5f)
						{
							if (Local_571[iVar0 /*14*/].f_7)
							{
								Local_571[iVar0 /*14*/].f_9 = (Local_571[iVar0 /*14*/].f_9 + MISC::GET_FRAME_TIME());
							}
							else
							{
								Local_571[iVar0 /*14*/].f_9 = 0f;
							}
						}
						if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
						{
							if (fVar2 < 20f)
							{
								if (Local_571[iVar0 /*14*/].f_7)
								{
									Local_571[iVar0 /*14*/].f_9 = (Local_571[iVar0 /*14*/].f_9 + (MISC::GET_FRAME_TIME() * 3f));
								}
								else
								{
									Local_571[iVar0 /*14*/].f_9 = 0f;
								}
							}
						}
						if (Local_571[iVar0 /*14*/].f_9 > 3f)
						{
							Local_571[iVar0 /*14*/].f_8 = 1;
						}
						if (fVar2 < 2f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_571[iVar0 /*14*/]))
							{
								if (iVar0 == 1)
								{
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_571[iVar0 /*14*/], "missheist_agency2aig_8", "start_loop_foreman", 3))
									{
										Local_571[iVar0 /*14*/].f_8 = 1;
									}
								}
								else
								{
									Local_571[iVar0 /*14*/].f_8 = 1;
								}
							}
						}
						if (Local_571[iVar0 /*14*/].f_8 && (iLocal_205 < 1 || iLocal_205 > 6))
						{
							GlobalFunc_4956();
							HUD::CLEAR_PRINTS();
							TASK::CLEAR_PED_TASKS(Local_571[iVar0 /*14*/]);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_571[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 0);
							GlobalFunc_200(&Local_247, 4);
							GlobalFunc_173(&Local_247, 4, Local_571[iVar0 /*14*/], "FIBConstruction2", 0, 1);
							if (!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
							{
								if (GlobalFunc_10607(&Local_247, cLocal_241, "F3A_MAKE", 8, 0, 0, 0))
								{
									RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
									func_26(iVar0);
									iLocal_244 = 1;
								}
							}
							else
							{
								func_25(1);
							}
						}
					}
				}
				iVar0++;
			}
			break;
		
		case 1:
			iVar1 = func_24(&Local_571, 0);
			iVar0 = 0;
			while (iVar0 < Local_571)
			{
				if (!PED::IS_PED_INJURED(Local_571[iVar0 /*14*/]))
				{
					fVar2 = SYSTEM::VDIST(Local_141, ENTITY::GET_ENTITY_COORDS(Local_571[iVar0 /*14*/], 1));
					if (Local_571[iVar0 /*14*/].f_7)
					{
						if (!Local_571[iVar0 /*14*/].f_8)
						{
							if (fVar2 < 5f)
							{
								Local_571[iVar0 /*14*/].f_8 = 1;
							}
						}
						if ((Local_571[iVar0 /*14*/].f_8 && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)) && fVar2 < 5f)
						{
							GlobalFunc_4956();
							GlobalFunc_200(&Local_247, 2);
							GlobalFunc_173(&Local_247, 2, Local_571[iVar0 /*14*/], "FIBConstruction", 0, 1);
							if (GlobalFunc_10607(&Local_247, cLocal_241, "F3A_GUN", 8, 0, 0, 0))
							{
								func_25(1);
							}
						}
					}
					if (Local_571[iVar0 /*14*/].f_8)
					{
						if (!PED::IS_PED_FACING_PED(Local_571[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 60f))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_571[iVar0 /*14*/], 242628503) != 1)
							{
								TASK::CLEAR_PED_TASKS(Local_571[iVar0 /*14*/]);
								TASK::TASK_LOOK_AT_ENTITY(Local_571[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), -1, 16, 2);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_92);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_92);
								TASK::TASK_PERFORM_SEQUENCE(Local_571[iVar0 /*14*/], uLocal_92);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_92);
							}
						}
						bVar3 = true;
					}
				}
				iVar0++;
			}
			if (bVar3)
			{
				iVar1 = func_24(&Local_571, 1);
				if (iVar1 != -1)
				{
					if (!iLocal_165)
					{
						if (!GlobalFunc_111() && !func_23())
						{
							if (SYSTEM::VDIST2(Local_141, ENTITY::GET_ENTITY_COORDS(Local_571[iVar1 /*14*/], 1)) < 400f && Local_571[iVar1 /*14*/].f_7)
							{
								GlobalFunc_200(&Local_247, 2);
								GlobalFunc_173(&Local_247, 2, Local_571[iVar1 /*14*/], "FIBConstruction", 0, 1);
								if (GlobalFunc_10607(&Local_247, cLocal_241, "F3A_CONSPOT", 8, 0, 0, 0))
								{
									func_26(iVar1);
									iLocal_165 = 1;
								}
							}
						}
					}
					else if (SYSTEM::VDIST2(Local_141, ENTITY::GET_ENTITY_COORDS(Local_571[iVar1 /*14*/], 1)) < 400f && Local_571[iVar1 /*14*/].f_7)
					{
						GlobalFunc_5117(Local_571[iVar1 /*14*/], "SHOUT_THREATEN", "FIBConstruction", 10);
						func_25(0);
					}
				}
			}
			break;
		
		case 2:
			iVar0 = 0;
			while (iVar0 < Local_571)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_571[iVar0 /*14*/]) && !PED::IS_PED_INJURED(Local_571[iVar0 /*14*/]))
				{
					if (Local_571[iVar0 /*14*/].f_7 && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
					{
						func_20(3);
					}
				}
				if (!Local_571[iVar0 /*14*/].f_12)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_571[iVar0 /*14*/]) && !PED::IS_PED_INJURED(Local_571[iVar0 /*14*/]))
					{
						TASK::CLEAR_PED_TASKS(Local_571[iVar0 /*14*/]);
						if (PED::IS_PED_USING_ANY_SCENARIO(Local_571[iVar0 /*14*/]))
						{
							PED::SET_PED_PANIC_EXIT_SCENARIO(Local_571[iVar0 /*14*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
						}
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_571[iVar0 /*14*/], -2065892691);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_571[iVar0 /*14*/], 5, 1);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_571[iVar0 /*14*/], 512, 1);
						PED::SET_PED_COMBAT_RANGE(Local_571[iVar0 /*14*/], 2);
						TASK::TASK_COMBAT_PED(Local_571[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						Local_571[iVar0 /*14*/].f_12 = 1;
					}
				}
				iVar0++;
			}
			func_48(1, 1, 0, 30f);
			if ((MISC::GET_GAME_TIMER() - iLocal_197) > 3000 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (func_19("F3A_JANRUN", "F3A_CONRUN"))
				{
					iLocal_197 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		
		case 3:
			iVar0 = 0;
			while (iVar0 < Local_571)
			{
				if (!Local_571[iVar0 /*14*/].f_13)
				{
					if (func_74())
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_571[iVar0 /*14*/]) && !PED::IS_PED_INJURED(Local_571[iVar0 /*14*/]))
						{
							TASK::CLEAR_PED_TASKS(Local_571[iVar0 /*14*/]);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_571[iVar0 /*14*/], -2065892691);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_571[iVar0 /*14*/], 5, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_571[iVar0 /*14*/], 17, 1);
							PED::SET_PED_FLEE_ATTRIBUTES(Local_571[iVar0 /*14*/], 512, 0);
							PED::SET_PED_COMBAT_RANGE(Local_571[iVar0 /*14*/], 2);
							Local_571[iVar0 /*14*/].f_13 = 1;
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(Local_571[iVar0 /*14*/]) && !PED::IS_PED_INJURED(Local_571[iVar0 /*14*/]))
					{
						TASK::CLEAR_PED_TASKS(Local_571[iVar0 /*14*/]);
						if (PED::IS_PED_USING_ANY_SCENARIO(Local_571[iVar0 /*14*/]))
						{
							PED::SET_PED_PANIC_EXIT_SCENARIO(Local_571[iVar0 /*14*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
						}
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_571[iVar0 /*14*/], -2065892691);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_571[iVar0 /*14*/], 5, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_571[iVar0 /*14*/], 17, 1);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_571[iVar0 /*14*/], 512, 0);
						PED::SET_PED_COMBAT_RANGE(Local_571[iVar0 /*14*/], 2);
						if ((iVar0 % 3) == 0)
						{
							TASK::TASK_REACT_AND_FLEE_PED(Local_571[iVar0 /*14*/], PLAYER::PLAYER_PED_ID());
						}
						else
						{
							TASK::TASK_SMART_FLEE_PED(Local_571[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Local_571[iVar0 /*14*/], joaat("weapon_unarmed"), 1);
						Local_571[iVar0 /*14*/].f_13 = 1;
					}
				}
				else if (func_74())
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_571[iVar0 /*14*/]) && !PED::IS_PED_INJURED(Local_571[iVar0 /*14*/]))
					{
						if (!ENTITY::IS_ENTITY_AT_COORD(Local_571[iVar0 /*14*/], -159.4073f, -1024.213f, 113.3052f, 4f, 4f, 4f, 0, 1, 0))
						{
							if ((TASK::GET_SCRIPT_TASK_STATUS(Local_571[iVar0 /*14*/], 713668775) != 0 && TASK::GET_SCRIPT_TASK_STATUS(Local_571[iVar0 /*14*/], 713668775) != 1) && TASK::GET_SCRIPT_TASK_STATUS(Local_571[iVar0 /*14*/], 713668775) != 2)
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_571[iVar0 /*14*/], -159.4073f, -1024.213f, 113.3052f, 3f, -1, (3f - SYSTEM::TO_FLOAT(iVar0)), 0, 1193033728);
							}
						}
						else if (!iLocal_153[iVar0])
						{
							TASK::TASK_COWER(Local_571[iVar0 /*14*/], -1);
							iLocal_153[iVar0] = 1;
						}
					}
				}
				iVar0++;
			}
			func_48(1, 1, 0, 30f);
			if ((MISC::GET_GAME_TIMER() - iLocal_197) > 3000 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (func_19("F3A_JANRUN", "F3A_CONFLEE"))
				{
					iLocal_197 = MISC::GET_GAME_TIMER();
				}
			}
			break;
	}
	if (iLocal_244 == 0 || iLocal_244 == 1)
	{
		iVar0 = 0;
		while (iVar0 < Local_571)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_80) && (ENTITY::IS_ENTITY_DEAD(iLocal_80) || PED::IS_PED_INJURED(iLocal_80)))
			{
				if (!PED::IS_PED_INJURED(Local_571[iVar0 /*14*/]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_571[iVar0 /*14*/], 1), ENTITY::GET_ENTITY_COORDS(iLocal_80, 1)) < 400f)
				{
					if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Local_571[iVar0 /*14*/], iLocal_80))
					{
						if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && func_9() != joaat("weapon_stungun"))
						{
							iLocal_244 = 3;
						}
						else
						{
							iLocal_244 = 2;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (iLocal_244 < 2)
	{
		if (func_74())
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			if (func_18())
			{
				func_25(iLocal_844);
			}
		}
		else if (func_17(&bVar4))
		{
			func_25(bVar4);
		}
	}
}

int func_17(var uParam0)//Position - 0x1C5B
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = 0;
	while (iVar0 < Local_571)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_571[iVar0 /*14*/]) && PED::IS_PED_INJURED(Local_571[iVar0 /*14*/]))
		{
			iVar1 = 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_571[iVar0 /*14*/]) && ENTITY::IS_ENTITY_DEAD(Local_571[iVar0 /*14*/]))
		{
			iVar1 = 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_571[iVar0 /*14*/]) && !PED::IS_PED_INJURED(Local_571[iVar0 /*14*/]))
		{
			if (((FIRE::IS_EXPLOSION_IN_AREA(21, ENTITY::GET_ENTITY_COORDS(Local_571[iVar0 /*14*/], 1) + Vector(3f, 5f, 5f), ENTITY::GET_ENTITY_COORDS(Local_571[iVar0 /*14*/], 1) - Vector(3f, 5f, 5f)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_571[iVar0 /*14*/], 1) + Vector(3f, 5f, 5f), ENTITY::GET_ENTITY_COORDS(Local_571[iVar0 /*14*/], 1) - Vector(3f, 5f, 5f), joaat("weapon_bzgas"), 0)) || FIRE::IS_EXPLOSION_IN_AREA(20, ENTITY::GET_ENTITY_COORDS(Local_571[iVar0 /*14*/], 1) + Vector(3f, 5f, 5f), ENTITY::GET_ENTITY_COORDS(Local_571[iVar0 /*14*/], 1) - Vector(3f, 5f, 5f))) || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_571[iVar0 /*14*/], 1) + Vector(3f, 5f, 5f), ENTITY::GET_ENTITY_COORDS(Local_571[iVar0 /*14*/], 1) - Vector(3f, 5f, 5f), joaat("weapon_smokegrenade"), 0))
			{
				iVar1 = 1;
			}
			if (Local_571[iVar0 /*14*/].f_12 || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_571[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 1))
			{
				iVar1 = 1;
			}
			if (PED::IS_PED_BEING_STEALTH_KILLED(Local_571[iVar0 /*14*/]))
			{
				iVar1 = 1;
			}
		}
		iVar0++;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -116.8231f, -1049.831f, 22.22993f, -186.3756f, -1024.102f, 37.39154f, 23.25f, 0, 1, 0))
	{
		iVar1 = 1;
	}
	if ((((((((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)) && func_9() != joaat("weapon_stungun")) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID())) || FIRE::IS_EXPLOSION_IN_AREA(1, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(300f, 300f, 300f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Vector(300f, 300f, 300f))) || FIRE::IS_EXPLOSION_IN_AREA(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(300f, 300f, 300f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Vector(300f, 300f, 300f))) || FIRE::IS_EXPLOSION_IN_AREA(4, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(300f, 300f, 300f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Vector(300f, 300f, 300f))) || FIRE::IS_EXPLOSION_IN_AREA(3, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(300f, 300f, 300f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Vector(300f, 300f, 300f))) || FIRE::IS_EXPLOSION_IN_AREA(2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(300f, 300f, 300f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Vector(300f, 300f, 300f)))
	{
		*uParam0 = 1;
		iVar1 = 1;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_82, 0))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_82, 0))
		{
			iVar1 = 1;
		}
		if (VEHICLE::IS_VEHICLE_ALARM_ACTIVATED(iLocal_82) && (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_100) < 100f || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_81, 1), Local_100) < 100f))
		{
			iVar1 = 1;
		}
	}
	if (func_75(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (Var2.f_2 < 250f)
			{
				iVar1 = 1;
			}
		}
	}
	return iVar1;
}

int func_18()//Position - 0x2017
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < Local_571)
	{
		if (!PED::IS_PED_INJURED(Local_571[iVar1 /*14*/]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_571[iVar1 /*14*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_571[iVar1 /*14*/]) && !PED::IS_PED_INJURED(Local_571[iVar1 /*14*/]))
				{
					iVar0++;
				}
			}
		}
		iVar1++;
	}
	if (!iLocal_843)
	{
		if (iVar0 > 0)
		{
			iVar1 = 0;
			while (iVar1 < Local_571)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_571[iVar1 /*14*/]) && PED::IS_PED_INJURED(Local_571[iVar1 /*14*/]))
				{
					iLocal_843 = 1;
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_571[iVar1 /*14*/]) && ENTITY::IS_ENTITY_DEAD(Local_571[iVar1 /*14*/]))
				{
					iLocal_843 = 1;
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_571[iVar1 /*14*/]) && !PED::IS_PED_INJURED(Local_571[iVar1 /*14*/]))
				{
					if (((FIRE::IS_EXPLOSION_IN_AREA(21, ENTITY::GET_ENTITY_COORDS(Local_571[iVar1 /*14*/], 1) + Vector(3f, 5f, 5f), ENTITY::GET_ENTITY_COORDS(Local_571[iVar1 /*14*/], 1) - Vector(3f, 5f, 5f)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_571[iVar1 /*14*/], 1) + Vector(3f, 5f, 5f), ENTITY::GET_ENTITY_COORDS(Local_571[iVar1 /*14*/], 1) - Vector(3f, 5f, 5f), joaat("weapon_bzgas"), 0)) || FIRE::IS_EXPLOSION_IN_AREA(20, ENTITY::GET_ENTITY_COORDS(Local_571[iVar1 /*14*/], 1) + Vector(3f, 5f, 5f), ENTITY::GET_ENTITY_COORDS(Local_571[iVar1 /*14*/], 1) - Vector(3f, 5f, 5f))) || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_571[iVar1 /*14*/], 1) + Vector(3f, 5f, 5f), ENTITY::GET_ENTITY_COORDS(Local_571[iVar1 /*14*/], 1) - Vector(3f, 5f, 5f), joaat("weapon_smokegrenade"), 0))
					{
						iLocal_843 = 1;
					}
					if (Local_571[iVar1 /*14*/].f_12 || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_571[iVar1 /*14*/], PLAYER::PLAYER_PED_ID(), 1))
					{
						iLocal_843 = 1;
					}
					if (PED::IS_PED_BEING_STEALTH_KILLED(Local_571[iVar1 /*14*/]))
					{
						iLocal_843 = 1;
					}
				}
				iVar1++;
			}
			if ((((((((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)) && func_9() != joaat("weapon_stungun")) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID())) || FIRE::IS_EXPLOSION_IN_AREA(1, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(300f, 300f, 300f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Vector(300f, 300f, 300f))) || FIRE::IS_EXPLOSION_IN_AREA(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(300f, 300f, 300f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Vector(300f, 300f, 300f))) || FIRE::IS_EXPLOSION_IN_AREA(4, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(300f, 300f, 300f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Vector(300f, 300f, 300f))) || FIRE::IS_EXPLOSION_IN_AREA(3, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(300f, 300f, 300f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Vector(300f, 300f, 300f))) || FIRE::IS_EXPLOSION_IN_AREA(2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(300f, 300f, 300f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Vector(300f, 300f, 300f)))
			{
				iLocal_843 = 1;
				iLocal_844 = 1;
			}
			if (iLocal_843)
			{
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					iLocal_844 = 1;
				}
			}
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < Local_571)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_571[iVar1 /*14*/]) && !PED::IS_PED_INJURED(Local_571[iVar1 /*14*/]))
			{
				if (!iLocal_844)
				{
					if (!PED::IS_PED_IN_COMBAT(Local_571[iVar1 /*14*/], 0))
					{
						TASK::TASK_COMBAT_PED(Local_571[iVar1 /*14*/], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
				}
				else if (!PED::IS_PED_FLEEING(Local_571[iVar1 /*14*/]))
				{
					TASK::TASK_REACT_AND_FLEE_PED(Local_571[iVar1 /*14*/], PLAYER::PLAYER_PED_ID());
				}
			}
			iVar1++;
		}
		if (iVar0 > 0)
		{
			if (iLocal_845 == 0)
			{
				iLocal_845 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_845) > 2500)
			{
				return 1;
			}
		}
		if (iLocal_845 != 0)
		{
		}
	}
	return 0;
}

int func_19(char* sParam0, char* sParam1)//Position - 0x2424
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = true;
	if (((((ENTITY::DOES_ENTITY_EXIST(iLocal_80) && !ENTITY::IS_ENTITY_DEAD(iLocal_80)) && !PED::IS_PED_INJURED(iLocal_80)) && !PED::IS_PED_BEING_STEALTH_KILLED(iLocal_80)) && !PED::IS_PED_BEING_STUNNED(iLocal_80, 0)) && !iLocal_169)
	{
		bVar0 = true;
	}
	iVar2 = func_24(&Local_571, 0);
	if ((bVar0 && iVar2 != -1) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_571[iVar2 /*14*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_80, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_80, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 400f)
		{
			bVar1 = false;
			if (GlobalFunc_10607(&Local_247, cLocal_241, sParam0, 8, 0, 0, 0))
			{
				return 1;
			}
		}
	}
	else if (iVar2 != -1 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_571[iVar2 /*14*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 400f)
		{
			if (!PED::IS_PED_INJURED(Local_571[iVar2 /*14*/]))
			{
				bVar1 = false;
				GlobalFunc_200(&Local_247, 2);
				GlobalFunc_173(&Local_247, 2, Local_571[iVar2 /*14*/], "FIBConstruction", 0, 1);
				if (MISC::ARE_STRINGS_EQUAL(sParam1, "F3A_CONFLEE"))
				{
					GlobalFunc_5117(Local_571[iVar2 /*14*/], "SHOUT_THREATEN", "FIBConstruction", 10);
				}
				else if (MISC::ARE_STRINGS_EQUAL(sParam1, "F3A_CONFLEE"))
				{
					GlobalFunc_5117(Local_571[iVar2 /*14*/], "FIGHT_RUN", "FIBConstruction", 10);
				}
				return 1;
			}
		}
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

void func_20(int iParam0)//Position - 0x25B7
{
	iLocal_244 = iParam0;
}



bool func_23()//Position - 0x27D1
{
	return (MISC::GET_GAME_TIMER() - iLocal_794) < 6000;
}

int func_24(int iParam0, bool bParam1)//Position - 0x27E5
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	fVar1 = 999999f;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0 /*14*/]) && !PED::IS_PED_INJURED((*iParam0)[iVar0 /*14*/]))
		{
			if ((bParam1 && (iParam0[iVar0 /*14*/])->f_8) || !bParam1)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS((*iParam0)[iVar0 /*14*/], 1)) < fVar1)
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS((*iParam0)[iVar0 /*14*/], 1), 1);
					iVar2 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar2;
}

void func_25(bool bParam0)//Position - 0x2882
{
	if (iLocal_244 != 3 && iLocal_244 != 2)
	{
		if (!bParam0)
		{
			iLocal_244 = 2;
		}
		else
		{
			iLocal_244 = 3;
		}
	}
	if (!iLocal_156)
	{
		func_2(6);
	}
}

void func_26(int iParam0)//Position - 0x28B4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_571)
	{
		if (!Local_571[iVar0 /*14*/].f_8)
		{
			if (!PED::IS_PED_INJURED(Local_571[iVar0 /*14*/]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_571[iVar0 /*14*/], 1), ENTITY::GET_ENTITY_COORDS(Local_571[iParam0 /*14*/], 1)) < 25f)
			{
				Local_571[iVar0 /*14*/].f_8 = 1;
			}
		}
		iVar0++;
	}
	if (iLocal_242 == 1 || iLocal_242 == 0)
	{
		if (!PED::IS_PED_INJURED(iLocal_80))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_80, 1)) < 9f && !func_15(iLocal_80))
			{
				func_2(5);
			}
		}
	}
}






















void func_48(bool bParam0, bool bParam1, int iParam2, float fParam3)//Position - 0x3268
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	if (!iLocal_168)
	{
		iVar0 = 0;
		while (iVar0 < Local_571)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_571[iVar0 /*14*/]))
			{
				if ((!func_75(PLAYER::PLAYER_PED_ID()) || !bParam1) && (!func_75(Local_571[iVar0 /*14*/]) || !bParam0))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(Local_571[iVar0 /*14*/]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_571[iVar0 /*14*/], 0), Local_141) > (fParam3 * fParam3))
					{
						if (!PED::IS_PED_INJURED(Local_571[iVar0 /*14*/]))
						{
							PED::DELETE_PED(&(Local_571[iVar0 /*14*/]));
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_571[iVar0 /*14*/]))
			{
				if (!PED::IS_PED_INJURED(Local_571[iVar0 /*14*/]))
				{
					iVar1 = 0;
				}
			}
			iVar0++;
		}
	}
	if ((iVar1 && iParam2) && !iLocal_168)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_91, 0);
		iLocal_168 = 1;
	}
}

int func_49()//Position - 0x334F
{
	int iVar0;
	char cVar1[16];
	
	STREAMING::REQUEST_MODEL(joaat("s_m_y_construct_01"));
	STREAMING::REQUEST_MODEL(joaat("s_m_y_construct_02"));
	if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_construct_01")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_construct_02")))
	{
		func_54(1);
		func_52(&(Local_571[0 /*14*/]), -164.8137f, -1029.044f, 26.2758f, 110.8465f);
		func_52(&(Local_571[1 /*14*/]), -166.5433f, -1028.591f, 26.2758f, 220.4507f);
		func_52(&(Local_571[2 /*14*/]), -165.3987f, -1030.352f, 26.2758f, 4.9405f);
		func_52(&(Local_571[3 /*14*/]), -106.805f, -1063.775f, 26.2988f, 21.1665f);
		func_52(&(Local_571[4 /*14*/]), -175.26f, -1039.31f, 27.24f, 68.6232f);
		func_52(&(Local_571[5 /*14*/]), -93.1512f, -1015.138f, 26.2751f, 175.4839f);
		func_52(&(Local_571[6 /*14*/]), -94.76f, -1016.12f, 26.2751f, 264.7611f);
		func_52(&(Local_571[7 /*14*/]), -110.2056f, -956.395f, 26.2504f, 301.2692f);
		func_52(&(Local_571[8 /*14*/]), -109.4497f, -954.1309f, 26.5774f, 163.2955f);
		func_52(&(Local_571[9 /*14*/]), -218.0016f, -1107.698f, 21.906f, 155.2912f);
		func_52(&(Local_571[10 /*14*/]), -219.623f, -1108.006f, 21.9094f, 202.6225f);
		sLocal_946[0] = "WORLD_HUMAN_SMOKING";
		sLocal_946[1] = "WORLD_HUMAN_CLIPBOARD";
		sLocal_946[2] = "WORLD_HUMAN_HANG_OUT_STREET";
		sLocal_946[3] = "WORLD_HUMAN_CONST_DRILL";
		sLocal_946[4] = "WORLD_HUMAN_SEAT_WALL_EATING";
		sLocal_946[5] = "WORLD_HUMAN_CLIPBOARD";
		sLocal_946[6] = "WORLD_HUMAN_SMOKING";
		sLocal_946[7] = "WORLD_HUMAN_SMOKING";
		sLocal_946[8] = "WORLD_HUMAN_HANG_OUT_STREET";
		sLocal_946[9] = "WORLD_HUMAN_HANG_OUT_STREET";
		sLocal_946[10] = "WORLD_HUMAN_SMOKING";
		iVar0 = 0;
		while (iVar0 < Local_571)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_571[iVar0 /*14*/]))
			{
				if (Local_571[iVar0 /*14*/].f_11)
				{
					if ((iVar0 % 2) > 0)
					{
						func_50(&(Local_571[iVar0 /*14*/]), joaat("s_m_y_construct_01"));
					}
					else
					{
						func_50(&(Local_571[iVar0 /*14*/]), joaat("s_m_y_construct_02"));
					}
					StringCopy(&cVar1, "worker ", 16);
					StringIntConCat(&cVar1, iVar0, 16);
					PED::SET_PED_NAME_DEBUG(Local_571[iVar0 /*14*/], &cVar1);
					if (!PED::IS_PED_INJURED(Local_571[iVar0 /*14*/]))
					{
						TASK::TASK_START_SCENARIO_AT_POSITION(Local_571[iVar0 /*14*/], sLocal_946[iVar0], Local_571[iVar0 /*14*/].f_3, Local_571[iVar0 /*14*/].f_6, 0, 0, 1);
					}
				}
			}
			iVar0++;
		}
		return 1;
	}
	return 0;
}

void func_50(var uParam0, int iParam1)//Position - 0x35F8
{
	if (uParam0->f_11)
	{
		*uParam0 = PED::CREATE_PED(26, iParam1, uParam0->f_3, uParam0->f_6, 1, 1);
		func_51(*uParam0);
		if (iParam1 == joaat("s_m_y_construct_01"))
		{
			PED::SET_PED_PROP_INDEX(*uParam0, 0, 1, 2, false);
		}
		else
		{
			PED::SET_PED_PROP_INDEX(*uParam0, 0, 0, 1, false);
		}
		PED::SET_PED_KEEP_TASK(*uParam0, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iLocal_94);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 5, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 0, 0);
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 512, 1);
		PED::SET_PED_COMBAT_RANGE(*uParam0, 2);
		ENTITY::SET_ENTITY_HEALTH(*uParam0, MISC::GET_RANDOM_INT_IN_RANGE(125, 150));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
	}
}

void func_51(int iParam0)//Position - 0x3694
{
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("s_m_y_construct_01"))
	{
		if (iLocal_839 > iLocal_841)
		{
			iLocal_839 = 0;
		}
		switch (iLocal_839)
		{
			case 0:
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 9, 1, 0, 0);
				break;
			
			case 1:
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 2, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 9, 0, 0, 0);
				break;
			
			case 2:
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 9, 0, 0, 0);
				break;
			
			case 3:
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 9, 0, 0, 0);
				break;
			
			case 4:
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 9, 0, 0, 0);
				break;
		}
		iLocal_839++;
	}
	else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("s_m_y_construct_02"))
	{
		if (iLocal_840 > iLocal_842)
		{
			iLocal_840 = 0;
		}
		switch (iLocal_840)
		{
			case 0:
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, 0);
				break;
			
			case 1:
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, 0);
				break;
			
			case 2:
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, 0);
				break;
			
			case 3:
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 1, 0, 0);
				break;
			
			case 4:
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, 0);
				break;
			
			case 5:
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 1, 0, 0);
				break;
			
			case 6:
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, 0);
				break;
			
			case 7:
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, 0);
				break;
		}
		iLocal_840++;
	}
}

void func_52(var uParam0, struct<3> Param1, float fParam4)//Position - 0x3A0E
{
	func_53(uParam0, 0);
	uParam0->f_3 = { Param1 };
	uParam0->f_6 = fParam4;
	uParam0->f_11 = 1;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0f;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0;
}

void func_53(var uParam0, bool bParam1)//Position - 0x3A46
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (bParam1)
		{
			PED::DELETE_PED(uParam0);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		if (bParam1)
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_1));
		}
		else
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		}
	}
}

void func_54(bool bParam0)//Position - 0x3A8F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_571)
	{
		func_53(&(Local_571[iVar0 /*14*/]), bParam0);
		Local_571[iVar0 /*14*/].f_11 = 0;
		Local_571[iVar0 /*14*/].f_13 = 0;
		Local_571[iVar0 /*14*/].f_12 = 0;
		iVar0++;
	}
}

int func_55()//Position - 0x3AD6
{
	int iVar0;
	char cVar1[16];
	
	STREAMING::REQUEST_MODEL(joaat("s_m_y_construct_01"));
	STREAMING::REQUEST_MODEL(joaat("s_m_y_construct_02"));
	STREAMING::REQUEST_ANIM_DICT("missheist_agency2aig_4");
	if ((STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_construct_01")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_construct_02"))) && STREAMING::HAS_ANIM_DICT_LOADED("missheist_agency2aig_4"))
	{
		func_54(1);
		func_52(&(Local_571[0 /*14*/]), -175.896f, -1002.319f, 113.1376f, 286.7573f);
		func_52(&(Local_571[1 /*14*/]), -174.1983f, -1000.699f, 113.1376f, 146.8856f);
		iVar0 = 0;
		while (iVar0 < Local_571)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_571[iVar0 /*14*/]))
			{
				if (Local_571[iVar0 /*14*/].f_11)
				{
					if ((iVar0 % 2) > 0)
					{
						func_50(&(Local_571[iVar0 /*14*/]), joaat("s_m_y_construct_01"));
					}
					else
					{
						func_50(&(Local_571[iVar0 /*14*/]), joaat("s_m_y_construct_02"));
					}
					StringCopy(&cVar1, "worker ", 16);
					StringIntConCat(&cVar1, iVar0, 16);
					PED::SET_PED_NAME_DEBUG(Local_571[iVar0 /*14*/], &cVar1);
				}
			}
			iVar0++;
		}
		if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_218))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_571[0 /*14*/]) && ENTITY::DOES_ENTITY_EXIST(Local_571[1 /*14*/]))
			{
				if (!PED::IS_PED_INJURED(Local_571[0 /*14*/]) && !PED::IS_PED_INJURED(Local_571[1 /*14*/]))
				{
					uLocal_218 = PED::CREATE_SYNCHRONIZED_SCENE(Local_219, Local_222, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_571[0 /*14*/], uLocal_218, "missheist_agency2aig_4", "look_plan_base_worker1", 8f, -8f, 1, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_571[1 /*14*/], uLocal_218, "missheist_agency2aig_4", "look_plan_base_worker2", 8f, -8f, 1, 0, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_218, 1);
				}
			}
		}
		return 1;
	}
	return 0;
}

void func_56()//Position - 0x3C80
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	bool bVar9;
	bool bVar10;
	var uVar11;
	
	if ((iLocal_205 > 0 && iLocal_205 < 5) && PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_851))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 172, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 263, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 264, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
	}
	if (!PED::IS_PED_INJURED(Local_571[1 /*14*/]))
	{
		switch (iLocal_205)
		{
			case 0:
				STREAMING::REQUEST_ANIM_DICT("missheist_agency2aig_8");
				STREAMING::REQUEST_MODEL(joaat("prop_hard_hat_01"));
				if (STREAMING::HAS_ANIM_DICT_LOADED("missheist_agency2aig_8") && STREAMING::HAS_MODEL_LOADED(joaat("prop_hard_hat_01")))
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_851))
					{
						uLocal_851 = PED::CREATE_SYNCHRONIZED_SCENE(Local_852, Local_855, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_571[1 /*14*/], uLocal_851, "missheist_agency2aig_8", "start_loop_foreman", 1000f, -1000f, 1, 0, 1000f, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_851, 1);
						iLocal_88 = OBJECT::CREATE_OBJECT(joaat("prop_hard_hat_01"), ENTITY::GET_ENTITY_COORDS(Local_571[1 /*14*/], 1), 1, 1, 0);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_88, Local_571[1 /*14*/], PED::GET_PED_BONE_INDEX(Local_571[1 /*14*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_88, 0);
					}
					if ((func_75(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -79.43797f, -1023.79f, 25.90987f, -92.44922f, -1019.017f, 32.39662f, 24.5f, 0, 1, 0)) && (ENTITY::IS_ENTITY_OCCLUDED(Local_571[1 /*14*/]) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -150.4503f, -1044.424f, 46.90546f, -186.5446f, -1144.931f, 18.08708f, 121f, 0, 1, 0)))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_88))
						{
							OBJECT::DELETE_OBJECT(&iLocal_88);
						}
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_571[1 /*14*/]);
						ENTITY::SET_ENTITY_COORDS(Local_571[1 /*14*/], -90.1453f, -1030.234f, 26.9782f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_571[1 /*14*/], 12.4764f);
						TASK::TASK_START_SCENARIO_IN_PLACE(Local_571[1 /*14*/], "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
						iLocal_205 = 7;
					}
					if ((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -92.26848f, -1031.527f, 30.50646f, -94.06227f, -1014.746f, 26.02335f, 10.5f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -95.89285f, -1017.194f, 25.27506f, -79.71102f, -1014.68f, 30.69695f, 6.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -85.23752f, -1031.64f, 26.19956f, -91.32753f, -1026.263f, 29.98977f, 6.25f, 0, 1, 0)) && PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_851)) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(ENTITY::GET_ENTITY_COORDS(Local_571[1 /*14*/], 1), 5f))
					{
						GlobalFunc_200(&Local_247, 6);
						GlobalFunc_173(&Local_247, 6, Local_571[1 /*14*/], "FIBConstruction2", 0, 1);
						PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
						if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
						}
						else
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
						}
						Var6 = { MISC::_0x21C235BC64831E5A(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_977, Local_980, 1) };
						bVar9 = GlobalFunc_5118(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 20f, 0f), Local_977, Local_980, &Var0);
						if (!PED::IS_PED_INJURED(iLocal_80))
						{
							bVar10 = GlobalFunc_5118(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_80, 1), Local_977, Local_980, &Var3);
						}
						if (bVar9)
						{
							if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0) < 7f)
							{
								Local_983 = { Var0 };
							}
							else
							{
								bVar9 = false;
							}
						}
						if (!bVar9 && bVar10)
						{
							if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var3) < 7f)
							{
								Local_983 = { Var3 };
							}
							else
							{
								bVar10 = false;
							}
						}
						if (!bVar9 && !bVar10)
						{
							Local_983 = { Var6 };
						}
						TASK::OPEN_SEQUENCE_TASK(&uVar11);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_983, 1f, -1, 0.25f, 512, 1193033728);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_571[1 /*14*/], 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar11);
						TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar11);
						TASK::CLEAR_SEQUENCE_TASK(&uVar11);
						PED::RELEASE_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID());
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_571[1 /*14*/], -1, 16, 3);
						CAM::SET_GAMEPLAY_ENTITY_HINT(Local_571[1 /*14*/], 0f, 0f, 1f, 1, 20000, 2000, 2000, 0);
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
						PED::SET_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID(), 0, 7, 0);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_88, 1);
						GlobalFunc_8316(1, 1, 0, 0);
						iLocal_962 = -1;
						iLocal_963 = -1;
						iLocal_172 = 0;
						iLocal_205++;
					}
				}
				break;
			
			case 1:
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_983) < 3f)
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_571[1 /*14*/]);
					uLocal_851 = PED::CREATE_SYNCHRONIZED_SCENE(Local_852, Local_855, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_571[1 /*14*/], uLocal_851, "missheist_agency2aig_8", "throw_helmet_foreman", 1000f, -4f, 1, 0, 1000f, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_571[1 /*14*/], 1, 0);
					RECORDING::_0x293220DA1B46CEBC(4f, 5f, 4);
					iLocal_205++;
				}
				break;
			
			case 2:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_851))
				{
					if (iLocal_962 == -1)
					{
						iLocal_962 = MISC::GET_GAME_TIMER();
						fLocal_964 = PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_851);
					}
					else if (iLocal_963 == -1)
					{
						iLocal_963 = MISC::GET_GAME_TIMER();
						fLocal_965 = PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_851);
					}
					else if (iLocal_962 != -2)
					{
						fLocal_966 = ((IntToFloat((iLocal_963 - iLocal_962)) / (fLocal_965 - fLocal_964)) / 1000f);
						iLocal_962 = -2;
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_851) > 0.05f)
					{
						GlobalFunc_4956();
						GlobalFunc_10607(&Local_247, cLocal_241, "F3A_HAT", 8, 0, 0, 0);
						iLocal_205++;
					}
				}
				break;
			
			case 3:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_851))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_851) > 0.232f)
					{
						func_58(Local_571[1 /*14*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0.0356f, 0.3167f, 0.3579f), &fLocal_850);
						CAM::STOP_GAMEPLAY_HINT(0);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_88))
						{
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_88, -1, 16, 3);
						}
						SYSTEM::SETTIMERA(0);
						iLocal_205++;
					}
				}
				break;
			
			case 4:
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_88))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missheist_agency2aig_8", "throw_helmet_player1", 3))
					{
						if (((fLocal_850 * 1000f) - IntToFloat(SYSTEM::TIMERA())) < 1000f)
						{
							if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
							{
								TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missheist_agency2aig_8", "throw_helmet_player1", 1000f, -4f, 5000, 48, (0.278f - ((((fLocal_850 * 1000f) - IntToFloat(SYSTEM::TIMERA())) / fLocal_966) / 1000f)), 0, 0, 0);
							}
							else
							{
								TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missheist_agency2aig_8", "throw_helmet_player1", 1000f, -4f, 5000, 0, (0.278f - ((((fLocal_850 * 1000f) - IntToFloat(SYSTEM::TIMERA())) / fLocal_966) / 1000f)), 0, 0, 0);
							}
							TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
						}
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_88))
					{
						if (((fLocal_850 * 1000f) - IntToFloat(SYSTEM::TIMERA())) <= 0f)
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_88, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							GlobalFunc_8316(0, 1, 0, 0);
							if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
							}
						}
						else if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
							}
							else
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
							}
						}
					}
				}
				if ((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missheist_agency2aig_8", "throw_helmet_player1", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "missheist_agency2aig_8", "throw_helmet_player1") > 0.39f) && PED::HAS_PED_PRELOAD_PROP_DATA_FINISHED(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0, 7, 0, false);
					PED::RELEASE_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID());
					iLocal_191 = MISC::GET_GAME_TIMER();
					iLocal_205++;
				}
				break;
			
			case 5:
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_88))
				{
					OBJECT::DELETE_OBJECT(&iLocal_88);
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missheist_agency2aig_8", "throw_helmet_player1", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "missheist_agency2aig_8", "throw_helmet_player1") > 0.4f)
					{
						iLocal_205++;
					}
				}
				break;
			
			case 6:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missheist_agency2aig_8", "throw_helmet_player1", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "missheist_agency2aig_8", "throw_helmet_player1") > 0.45f)
					{
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_2_FOLLOW_ARCHITECT_1"))
						{
							AUDIO::START_AUDIO_SCENE("AGENCY_H_2_FOLLOW_ARCHITECT_1");
						}
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_571[0 /*14*/], 5000, 0, 4);
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_851))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_851) > 0.597f)
					{
						TASK::CLEAR_PED_TASKS(Local_571[1 /*14*/]);
						TASK::TASK_START_SCENARIO_IN_PLACE(Local_571[1 /*14*/], "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_80, -1, 16, 3);
						iLocal_205++;
					}
				}
				break;
		}
		if (!iLocal_172)
		{
			if (iLocal_205 > 3 && !GlobalFunc_111())
			{
				if (GlobalFunc_10607(&Local_247, cLocal_241, "F3A_THANKS", 8, 0, 0, 0))
				{
					iLocal_172 = 1;
				}
			}
		}
		if (iLocal_205 > 0 && iLocal_205 < 7)
		{
			Local_571[1 /*14*/].f_7 = 0;
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missheist_agency2aig_8", "throw_helmet_player1", 3))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
		}
		if (iLocal_242 == 0 && (MISC::GET_GAME_TIMER() - iLocal_191) < 2500)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		}
	}
	if (iLocal_192 < 100)
	{
		if (!PED::IS_PED_INJURED(Local_571[2 /*14*/]))
		{
			if (!PED::IS_PED_USING_SCENARIO(Local_571[2 /*14*/], "WORLD_HUMAN_CLIPBOARD"))
			{
				TASK::TASK_START_SCENARIO_IN_PLACE(Local_571[2 /*14*/], "WORLD_HUMAN_CLIPBOARD", 0, 0);
			}
		}
		if (!PED::IS_PED_INJURED(Local_571[3 /*14*/]))
		{
			if (!PED::IS_PED_USING_SCENARIO(Local_571[3 /*14*/], "WORLD_HUMAN_HANG_OUT_STREET"))
			{
				TASK::TASK_START_SCENARIO_IN_PLACE(Local_571[3 /*14*/], "WORLD_HUMAN_HANG_OUT_STREET", 0, 0);
				GlobalFunc_173(&Local_247, 3, Local_571[3 /*14*/], "FIBConstruction", 0, 1);
			}
			if (!Local_571[3 /*14*/].f_10)
			{
				if (PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0) != 7 && func_75(PLAYER::PLAYER_PED_ID()))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_571[3 /*14*/], 1)) < SYSTEM::POW(18f, 2f))
					{
						if (GlobalFunc_10607(&Local_247, cLocal_241, "F3A_HARD", 8, 0, 0, 0))
						{
							Local_571[3 /*14*/].f_10 = 1;
						}
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(Local_571[4 /*14*/]))
		{
			if (!PED::IS_PED_USING_SCENARIO(Local_571[4 /*14*/], "WORLD_HUMAN_SMOKING"))
			{
				TASK::TASK_START_SCENARIO_IN_PLACE(Local_571[4 /*14*/], "WORLD_HUMAN_SMOKING", 0, 0);
			}
		}
		if (!PED::IS_PED_INJURED(Local_571[5 /*14*/]))
		{
			if (!PED::IS_PED_USING_SCENARIO(Local_571[5 /*14*/], "WORLD_HUMAN_CLIPBOARD"))
			{
				TASK::TASK_START_SCENARIO_IN_PLACE(Local_571[5 /*14*/], "WORLD_HUMAN_CLIPBOARD", 0, 0);
			}
		}
		if (!PED::IS_PED_INJURED(Local_571[6 /*14*/]))
		{
			if (!PED::IS_PED_USING_SCENARIO(Local_571[6 /*14*/], "WORLD_HUMAN_HANG_OUT_STREET"))
			{
				TASK::TASK_START_SCENARIO_IN_PLACE(Local_571[6 /*14*/], "WORLD_HUMAN_HANG_OUT_STREET", 0, 0);
			}
		}
	}
	if ((!PED::IS_PED_INJURED(Local_571[7 /*14*/]) && !PED::IS_PED_INJURED(Local_571[8 /*14*/])) && !PED::IS_PED_INJURED(iLocal_80))
	{
		switch (iLocal_204)
		{
			case 0:
				STREAMING::REQUEST_ANIM_DICT("missheist_agency2aig_3");
				if (STREAMING::HAS_ANIM_DICT_LOADED("missheist_agency2aig_3"))
				{
					uLocal_976 = PED::CREATE_SYNCHRONIZED_SCENE(Local_970, Local_973, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_571[7 /*14*/], uLocal_976, "missheist_agency2aig_3", "chat_a_worker1", 8f, -8f, 1, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_571[8 /*14*/], uLocal_976, "missheist_agency2aig_3", "chat_a_worker2", 8f, -8f, 1, 0, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_976, 1);
					iLocal_204++;
				}
				break;
			
			case 1:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_80, -149.5483f, -1036.484f, 29.02515f, -143.127f, -1039.089f, 26.02515f, 10.5f, 0, 1, 0))
				{
					Local_967 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missheist_agency2aig_3", "walk_by_chat_architect", Local_970, Local_973, 0f, 2) };
					iLocal_204++;
				}
				break;
			
			case 2:
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_80, 1), Local_967) < 0.3f)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_80, 1)) < 20f)
					{
						GlobalFunc_200(&Local_247, 6);
						GlobalFunc_173(&Local_247, 6, Local_571[7 /*14*/], "FIBConstruction2", 0, 1);
						func_57(&Local_422);
					}
					TASK::CLEAR_PED_TASKS(Local_571[7 /*14*/]);
					TASK::CLEAR_PED_TASKS(Local_571[8 /*14*/]);
					Local_571[7 /*14*/].f_10 = 1;
					uLocal_976 = PED::CREATE_SYNCHRONIZED_SCENE(Local_970, Local_973, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_571[7 /*14*/], uLocal_976, "missheist_agency2aig_3", "walk_by_chat_worker1", 4f, -4f, 1, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_571[8 /*14*/], uLocal_976, "missheist_agency2aig_3", "walk_by_chat_worker2", 4f, -4f, 1, 0, 1000f, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_571[7 /*14*/], 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_571[8 /*14*/], 0, 0);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_80, Local_571[7 /*14*/], 30000, 0, 2);
					RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
					iLocal_204++;
				}
				break;
			
			case 3:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_976))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_976) > 0.9999f)
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_80);
						TASK::CLEAR_PED_TASKS(Local_571[7 /*14*/]);
						TASK::CLEAR_PED_TASKS(Local_571[8 /*14*/]);
						uLocal_976 = PED::CREATE_SYNCHRONIZED_SCENE(Local_970, Local_973, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_571[7 /*14*/], uLocal_976, "missheist_agency2aig_3", "chat_b_worker1", 4f, -4f, 1, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_571[8 /*14*/], uLocal_976, "missheist_agency2aig_3", "chat_b_worker2", 4f, -4f, 1, 0, 1000f, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_571[7 /*14*/], 0, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_571[8 /*14*/], 0, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_976, 1);
						iLocal_204++;
					}
				}
				break;
			
			case 4:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_976))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_571[7 /*14*/], 1), 10f, 10f, 5f, 0, 1, 0))
					{
						if (!Local_571[6 /*14*/].f_10)
						{
							GlobalFunc_200(&Local_247, 6);
							GlobalFunc_200(&Local_247, 3);
							GlobalFunc_173(&Local_247, 6, Local_571[7 /*14*/], "FIBConstruction2", 0, 1);
							GlobalFunc_173(&Local_247, 3, Local_571[8 /*14*/], "FIBConstruction", 0, 1);
							if (GlobalFunc_10607(&Local_247, cLocal_241, "F3A_WRKCHAT", 8, 1, 1, 0))
							{
								Local_571[6 /*14*/].f_10 = 1;
							}
						}
					}
				}
				break;
			}
	}
}

int func_57(var uParam0)//Position - 0x4B28
{
	if (!uParam0->f_1)
	{
		if (GlobalFunc_10607(&Local_247, cLocal_241, *uParam0, 8, 0, 0, 0))
		{
			uParam0->f_1 = 1;
			return 1;
		}
	}
	return 0;
}

void func_58(int iParam0, struct<3> Param1, var uParam4)//Position - 0x4B55
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	var uVar7;
	struct<3> Var8;
	
	Var0 = { PED::GET_PED_BONE_COORDS(iParam0, 28422, 0f, 0f, 0f) };
	Var3 = { Param1 - Var0 };
	fVar6 = SYSTEM::SQRT((SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1)) * 10f));
	if (Var3.f_2 > 0f)
	{
		fVar6 = (fVar6 + MISC::ABSF(Var3.f_2));
	}
	uVar7 = func_61(Var0, Param1, fVar6, 1);
	Var3.f_2 = 0f;
	Var8 = { Var3 };
	func_59(&Var8, (fVar6 * SYSTEM::COS(uVar7)));
	Var8.f_2 = (fVar6 * SYSTEM::SIN(uVar7));
	*uParam4 = (SYSTEM::VMAG(Var3) / (fVar6 * SYSTEM::COS(uVar7)));
	ENTITY::DETACH_ENTITY(iLocal_88, 0, 1);
	OBJECT::SET_OBJECT_PHYSICS_PARAMS(iLocal_88, 1f, 1f, 0f, 0f, 0f, 0f, 0f, 0f, -1082130432, -1082130432, -1082130432);
	PHYSICS::SET_DAMPING(iLocal_88, 0, 0f);
	PHYSICS::SET_DAMPING(iLocal_88, 1, 0f);
	PHYSICS::SET_DAMPING(iLocal_88, 2, 0f);
	PHYSICS::SET_DAMPING(iLocal_88, 3, 0f);
	PHYSICS::SET_DAMPING(iLocal_88, 4, 0f);
	PHYSICS::SET_DAMPING(iLocal_88, 5, 0f);
	ENTITY::SET_ENTITY_VELOCITY(iLocal_88, Var8);
}

void func_59(var uParam0, float fParam1)//Position - 0x4C5E
{
	struct<3> Var0;
	
	Var0 = { GlobalFunc_107(*uParam0) };
	Var0.x = (Var0.x * fParam1);
	Var0.f_1 = (Var0.f_1 * fParam1);
	Var0.f_2 = (Var0.f_2 * fParam1);
	*uParam0 = { Var0 };
}


var func_61(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)//Position - 0x4CD6
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	var uVar6;
	
	Var0 = { Param3 - Param0 };
	fVar3 = Var0.f_2;
	fVar4 = SYSTEM::SQRT(((Var0.x * Var0.x) + (Var0.f_1 * Var0.f_1)));
	fVar5 = ((((fParam6 * fParam6) * fParam6) * fParam6) - (fLocal_849 * ((fLocal_849 * (fVar4 * fVar4)) + ((2f * fVar3) * (fParam6 * fParam6)))));
	if (bParam7)
	{
		uVar6 = MISC::ATAN((((fParam6 * fParam6) - SYSTEM::SQRT(fVar5)) / (fLocal_849 * fVar4)));
	}
	else
	{
		uVar6 = MISC::ATAN((((fParam6 * fParam6) + SYSTEM::SQRT(fVar5)) / (fLocal_849 * fVar4)));
	}
	return uVar6;
}












int func_73()//Position - 0x50E3
{
	int iVar0;
	char cVar1[16];
	
	STREAMING::REQUEST_MODEL(joaat("s_m_y_construct_01"));
	STREAMING::REQUEST_MODEL(joaat("s_m_y_construct_02"));
	STREAMING::REQUEST_MODEL(joaat("prop_tool_hardhat"));
	STREAMING::REQUEST_MODEL(joaat("p_cs_clipboard"));
	STREAMING::REQUEST_ANIM_DICT("missheist_agency2aig_8");
	STREAMING::REQUEST_ANIM_DICT("missheist_agency2aig_3");
	if (((((STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_construct_01")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_construct_02"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_tool_hardhat"))) && STREAMING::HAS_MODEL_LOADED(joaat("p_cs_clipboard"))) && STREAMING::HAS_ANIM_DICT_LOADED("missheist_agency2aig_8")) && STREAMING::HAS_ANIM_DICT_LOADED("missheist_agency2aig_3"))
	{
		func_54(1);
		func_52(&(Local_571[0 /*14*/]), -109.056f, -1027.702f, 26.274f, 258.79f);
		func_52(&(Local_571[1 /*14*/]), -92.5795f, -1034.536f, 26.9519f, 4.1899f);
		func_52(&(Local_571[2 /*14*/]), -108.0088f, -1051.81f, 26.273f, 0f);
		func_52(&(Local_571[3 /*14*/]), -109.0365f, -1051.438f, 26.273f, -50.42029f);
		func_52(&(Local_571[4 /*14*/]), -108.1822f, -1050.196f, 26.273f, 164.6214f);
		func_52(&(Local_571[5 /*14*/]), -134.8451f, -1053.248f, 26.257f, 8.021409f);
		func_52(&(Local_571[6 /*14*/]), -135.8568f, -1053.001f, 26.257f, -53.85796f);
		func_52(&(Local_571[7 /*14*/]), -150.6152f, -1031.504f, 27.2799f, 155.454f);
		func_52(&(Local_571[8 /*14*/]), -151.8469f, -1030.76f, 27.2798f, -169.5955f);
		iVar0 = 0;
		while (iVar0 < Local_571)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_571[iVar0 /*14*/]))
			{
				if (Local_571[iVar0 /*14*/].f_11)
				{
					if ((iVar0 % 2) > 0)
					{
						func_50(&(Local_571[iVar0 /*14*/]), joaat("s_m_y_construct_01"));
					}
					else
					{
						func_50(&(Local_571[iVar0 /*14*/]), joaat("s_m_y_construct_02"));
					}
					if (iVar0 == 7)
					{
						Local_571[iVar0 /*14*/].f_1 = OBJECT::CREATE_OBJECT(joaat("p_cs_clipboard"), ENTITY::GET_ENTITY_COORDS(Local_571[iVar0 /*14*/], 1), 1, 1, 0);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_571[iVar0 /*14*/].f_1, Local_571[iVar0 /*14*/], PED::GET_PED_BONE_INDEX(Local_571[iVar0 /*14*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					}
					StringCopy(&cVar1, "worker ", 16);
					StringIntConCat(&cVar1, iVar0, 16);
					PED::SET_PED_NAME_DEBUG(Local_571[iVar0 /*14*/], &cVar1);
				}
			}
			iVar0++;
		}
		return 1;
	}
	return 0;
}

bool func_74()//Position - 0x534F
{
	return (func_75(PLAYER::PLAYER_PED_ID()) && Local_141.f_2 > 75f);
}

int func_75(int iParam0)//Position - 0x536E
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	iVar3 = 1;
	iVar4 = 0;
	while (iVar4 < Local_796)
	{
		if (!func_76(Var0, &(Local_796[iVar4 /*6*/])))
		{
			iVar3 = 0;
		}
		iVar4++;
	}
	return iVar3;
}

bool func_76(struct<2> Param0, var uParam2, var uParam3)//Position - 0x53B9
{
	float fVar0;
	
	fVar0 = (((uParam3->f_3 - *uParam3) * (Param0.f_1 - uParam3->f_1)) - ((uParam3->f_3.f_1 - uParam3->f_1) * (Param0 - *uParam3)));
	return fVar0 >= 0f;
}

void func_77()//Position - 0x53EC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_571)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_571[iVar0 /*14*/]))
		{
			if (HUD::DOES_BLIP_EXIST(Local_571[iVar0 /*14*/].f_2))
			{
				if ((((((((PED::IS_PED_INJURED(Local_571[iVar0 /*14*/]) || ENTITY::IS_ENTITY_DEAD(Local_571[iVar0 /*14*/])) || (!PED::IS_PED_INJURED(Local_571[iVar0 /*14*/]) && !Local_571[iVar0 /*14*/].f_12)) || (!PED::IS_PED_INJURED(Local_571[iVar0 /*14*/]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_571[iVar0 /*14*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 3025f)) || HUD::DOES_BLIP_EXIST(uLocal_69)) || HUD::DOES_BLIP_EXIST(uLocal_71)) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_571[iVar0 /*14*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 900f) || iLocal_789 == 1) || iLocal_789 == 2)
				{
					HUD::REMOVE_BLIP(&(Local_571[iVar0 /*14*/].f_2));
				}
			}
			else if (((((Local_571[iVar0 /*14*/].f_12 && !Local_571[iVar0 /*14*/].f_13) && !HUD::DOES_BLIP_EXIST(uLocal_69)) && !HUD::DOES_BLIP_EXIST(uLocal_71)) && iLocal_789 != 1) && iLocal_789 != 2)
			{
				if (!PED::IS_PED_INJURED(Local_571[iVar0 /*14*/]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_571[iVar0 /*14*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 400f)
				{
					Local_571[iVar0 /*14*/].f_2 = GlobalFunc_6797(Local_571[iVar0 /*14*/], 1, 145);
				}
			}
		}
		iVar0++;
	}
}


void func_79()//Position - 0x55E2
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_571[iLocal_184 /*14*/]) && !PED::IS_PED_INJURED(Local_571[iLocal_184 /*14*/]))
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_185) > 100)
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - ENTITY::GET_ENTITY_COORDS(Local_571[iLocal_184 /*14*/], 1) };
			Var3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(Local_571[iLocal_184 /*14*/]) };
			fVar6 = MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var3.x, Var3.f_1, Var0.x, Var0.f_1));
			fVar7 = SYSTEM::VDIST2(Local_141, ENTITY::GET_ENTITY_COORDS(Local_571[iLocal_184 /*14*/], 1));
			if (((((((iLocal_184 >= 0 && iLocal_184 < Local_571) && ENTITY::DOES_ENTITY_EXIST(Local_571[iLocal_184 /*14*/])) && !PED::IS_PED_INJURED(Local_571[iLocal_184 /*14*/])) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && fVar6 < 50f) && fVar7 < 400f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Local_571[iLocal_184 /*14*/], PLAYER::PLAYER_PED_ID()))
			{
				if (!Local_571[iLocal_184 /*14*/].f_7)
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_571[iLocal_184 /*14*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				}
				Local_571[iLocal_184 /*14*/].f_7 = 1;
			}
			else
			{
				if (Local_571[iLocal_184 /*14*/].f_7)
				{
					TASK::TASK_CLEAR_LOOK_AT(Local_571[iLocal_184 /*14*/]);
				}
				Local_571[iLocal_184 /*14*/].f_7 = 0;
			}
			iLocal_185 = MISC::GET_GAME_TIMER();
		}
		iLocal_184++;
		if (iLocal_184 >= Local_571)
		{
			iLocal_184 = 0;
		}
	}
	else
	{
		iLocal_184++;
		if (iLocal_184 >= Local_571)
		{
			iLocal_184 = 0;
		}
	}
}


void func_81()//Position - 0x57BC
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_83) && !iLocal_149)
	{
		STREAMING::REQUEST_MODEL(joaat("frogger"));
		VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_988, sLocal_987);
		if (STREAMING::HAS_MODEL_LOADED(joaat("frogger")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_988, sLocal_987))
		{
			iLocal_83 = VEHICLE::CREATE_VEHICLE(joaat("frogger"), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(800f, 0f, 0f), 0, 1, 1);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_83, iLocal_988, sLocal_987, 1);
			VEHICLE::SET_PLAYBACK_SPEED(iLocal_83, 0.75f);
		}
	}
	else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_83, 0))
	{
		if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_83))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_83);
			VEHICLE::DELETE_VEHICLE(&iLocal_83);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("frogger"));
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_988, sLocal_987);
			iLocal_149 = 1;
		}
		else
		{
			VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_83);
		}
	}
}

void func_82()//Position - 0x587D
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_247[0 /*10*/]))
	{
		GlobalFunc_173(&Local_247, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	if (!iLocal_848)
	{
		GlobalFunc_173(&Local_247, 3, 0, "MICHAEL", 0, 1);
		iLocal_848 = 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_247[1 /*10*/]) && !PED::IS_PED_INJURED(iLocal_80))
	{
		GlobalFunc_173(&Local_247, 1, iLocal_80, "FIBArchitect", 0, 1);
	}
}

void func_83(var uParam0)//Position - 0x58E4
{
	struct<3> Var0;
	var uVar3;
	struct<3> Var4;
	struct<3> Var7;
	float fVar10;
	struct<3> Var11;
	struct<3> Var14;
	
	if (!uParam0->f_26)
	{
		if (uParam0->f_27)
		{
			switch (uParam0->f_34)
			{
				case 0:
					if (func_11(uParam0, PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						PAD::DISABLE_CONTROL_ACTION(0, 27, 1);
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 51))
						{
							if (func_93(uParam0))
							{
								TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
								PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
								GlobalFunc_8316(1, 1, 0, 0);
								if (!iLocal_158)
								{
									AUDIO::TRIGGER_MUSIC_EVENT("AH2A_MISSION_START");
								}
								if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
								{
									iLocal_788 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
								}
								func_92(uParam0, PLAYER::PLAYER_PED_ID());
							}
						}
					}
					break;
				
				case 1:
					if (PED::IS_PED_A_PLAYER(uParam0->f_32))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
						Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1, 1) - ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam0, Local_785) };
						uVar3 = MISC::GET_HEADING_FROM_VECTOR_2D(Var0.x, Var0.f_1);
						TASK::TASK_GO_STRAIGHT_TO_COORD(uParam0->f_32, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam0, Local_785), 1f, -1, uVar3, 1056964608);
						uParam0->f_34++;
					}
					else if (func_11(uParam0, uParam0->f_32))
					{
						uParam0->f_34 = 5;
					}
					break;
				
				case 2:
					Var4 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1, 1) - ENTITY::GET_ENTITY_COORDS(uParam0->f_32, 1) };
					Var7 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_32) };
					fVar10 = MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var4.x, Var4.f_1, Var7.x, Var7.f_1));
					if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_32, 2106541073) != 1 || fVar10 < 15f)
					{
						uParam0->f_34++;
					}
					break;
				
				case 3:
					if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_32, -875674219) != 1)
					{
						Var11 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam0, Local_785) };
						Var11.f_2 = Local_141.f_2;
						uParam0->f_35 = PED::CREATE_SYNCHRONIZED_SCENE(Var11, ENTITY::GET_ENTITY_ROTATION(*uParam0, 2), 2);
						TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_32, uParam0->f_35, "missagency_heist_2a", "push_button", 4f, -4f, 1, 0, 4f, 0);
						uParam0->f_34++;
					}
					break;
				
				case 4:
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_35) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_35) > 0.95f)
					{
						uParam0->f_34++;
					}
					break;
				
				case 5:
					if (uParam0->f_30 == 0f)
					{
						uParam0->f_31 = 1f;
					}
					else
					{
						uParam0->f_31 = 0f;
					}
					uParam0->f_26 = 1;
					uParam0->f_34 = 0;
					TASK::CLEAR_PED_TASKS(uParam0->f_32);
					Var14 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(*uParam0, ENTITY::GET_ENTITY_COORDS(uParam0->f_32, 1)) };
					Var14.f_2 = -1.3024f;
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_32, *uParam0, 0, Var14, 0f, 0f, (ENTITY::GET_ENTITY_HEADING(uParam0->f_32) - ENTITY::GET_ENTITY_HEADING(*uParam0)), 0, 0, 1, 1, 2, 1);
					WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 0);
					uParam0->f_34 = 0;
					break;
				}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (uParam0->f_33 == -1)
		{
			func_91(uParam0);
		}
		if (uParam0->f_31 == 1f)
		{
			uParam0->f_30 = GlobalFunc_253((uParam0->f_30 + 0.003f), 0f, 1f);
		}
		else
		{
			uParam0->f_30 = GlobalFunc_253((uParam0->f_30 - 0.003f), 0f, 1f);
		}
		ENTITY::SET_ENTITY_COORDS(*uParam0, GlobalFunc_5119(uParam0->f_4, uParam0->f_7, uParam0->f_30), 1, 0, 0, 1);
		if (uParam0->f_32 == PLAYER::PLAYER_PED_ID())
		{
			CAM::_0xDD79DF9F4D26E1C9();
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (iLocal_788 > 0)
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), iLocal_788, 0);
			}
			func_87();
		}
		else
		{
			if (func_86(PLAYER::PLAYER_PED_ID(), uParam0))
			{
				if (!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_TO_RAGDOLL(PLAYER::PLAYER_PED_ID(), 5000, 5000, 0, 0, 0, 0);
				}
			}
			if (uParam0->f_26)
			{
				if (uParam0->f_32 == iLocal_80 && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_80, *uParam0))
				{
					if (((FIRE::IS_EXPLOSION_IN_SPHERE(4, ENTITY::GET_ENTITY_COORDS(iLocal_80, 0), 10f) || FIRE::IS_EXPLOSION_IN_SPHERE(0, ENTITY::GET_ENTITY_COORDS(iLocal_80, 0), 10f)) || FIRE::IS_EXPLOSION_IN_SPHERE(1, ENTITY::GET_ENTITY_COORDS(iLocal_80, 0), 10f)) || FIRE::IS_EXPLOSION_IN_SPHERE(2, ENTITY::GET_ENTITY_COORDS(iLocal_80, 0), 10f))
					{
						uParam0->f_26 = 1;
						uParam0->f_31 = 0f;
						ENTITY::DETACH_ENTITY(iLocal_80, 1, 0);
						ENTITY::SET_ENTITY_HEALTH(iLocal_80, 0);
					}
				}
			}
		}
		if (MISC::ABSF((uParam0->f_31 - uParam0->f_30)) == 0f)
		{
			if (func_86(PLAYER::PLAYER_PED_ID(), uParam0))
			{
				ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 0);
			}
			if (uParam0->f_32 != 0)
			{
				if (!PED::IS_PED_INJURED(uParam0->f_32))
				{
					ENTITY::DETACH_ENTITY(uParam0->f_32, 0, 0);
				}
				if (uParam0->f_32 == PLAYER::PLAYER_PED_ID())
				{
					Local_424.f_1 = 0;
					GlobalFunc_8316(0, 1, 0, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				}
				uParam0->f_32 = 0;
				func_85(uParam0);
				iLocal_788 = 0;
			}
			func_84(uParam0, uParam0->f_30);
		}
	}
}

void func_84(var uParam0, float fParam1)//Position - 0x5D7D
{
	uParam0->f_30 = GlobalFunc_253(fParam1, 0f, 1f);
	uParam0->f_26 = 0;
	if (uParam0->f_30 == 1f)
	{
		uParam0->f_31 = 0f;
	}
	else if (uParam0->f_30 == 0f)
	{
		uParam0->f_31 = 1f;
	}
	func_85(uParam0);
	ENTITY::SET_ENTITY_COORDS(*uParam0, GlobalFunc_5119(uParam0->f_4, uParam0->f_7, uParam0->f_30), 1, 0, 0, 1);
}

void func_85(var uParam0)//Position - 0x5DDA
{
	if (uParam0->f_33 != -1)
	{
		AUDIO::STOP_SOUND(uParam0->f_33);
		AUDIO::RELEASE_SOUND_ID(uParam0->f_33);
		uParam0->f_33 = -1;
	}
}

int func_86(int iParam0, var uParam1)//Position - 0x5DFF
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam1, uParam1->f_19 + Vector(-1.5f, 0f, -1f)), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam1, uParam1->f_22 + Vector(-1.5f, 0f, 1f)), (uParam1->f_25 + 1f), 0, 1, 0) && !func_11(uParam1, PLAYER::PLAYER_PED_ID())) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(*uParam1, 1), uParam1->f_4) < 4f) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(*uParam1, PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	return 0;
}

void func_87()//Position - 0x5E8D
{
	if (MISC::GET_GAME_TIMER() - iLocal_188) > MISC::GET_RANDOM_INT_IN_RANGE(3000, 5000)
	{
		switch (iLocal_189)
		{
			case 0:
				TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 5f, 5f, 0f), 5000, 0, 4);
				iLocal_189 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
				break;
			
			case 1:
				TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), -5f, 5f, 0f), 5000, 0, 4);
				iLocal_189 = MISC::GET_RANDOM_INT_IN_RANGE(2, 4);
				break;
			
			case 2:
				TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 5f, 10f), 5000, 0, 4);
				iLocal_189++;
				break;
			
			case 3:
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_426[0 /*36*/].f_1, 5000, 0, 4);
				iLocal_189 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
				break;
		}
		iLocal_188 = MISC::GET_GAME_TIMER();
	}
}




void func_91(var uParam0)//Position - 0x5FC9
{
	if (uParam0->f_33 == -1)
	{
		uParam0->f_33 = AUDIO::GET_SOUND_ID();
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_33, "FREIGHT_ELEVATOR_02_MOTOR", *uParam0, 0, 0, 0);
		}
	}
}

void func_92(var uParam0, int iParam1)//Position - 0x5FFD
{
	if (!PED::IS_PED_INJURED(iParam1) && ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		uParam0->f_32 = iParam1;
		uParam0->f_34 = 1;
	}
}

int func_93(var uParam0)//Position - 0x6026
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_80))
	{
		if (func_11(uParam0, iLocal_80))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < Local_426)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_571[iVar0 /*14*/]))
		{
			if (func_11(uParam0, Local_571[iVar0 /*14*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_94()//Position - 0x607D
{
	if (iLocal_242 != 4)
	{
		iLocal_243 = iLocal_242;
		iLocal_242 = 4;
		HUD::CLEAR_PRINTS();
		GlobalFunc_4935();
		HUD::REMOVE_BLIP(&uLocal_79);
		PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), true);
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		iLocal_242 = iLocal_243;
		HUD::CLEAR_PRINTS();
	}
}


void func_96()//Position - 0x60CD
{
	bool bVar0;
	float fVar1;
	
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_2_COVER_BLOWN"))
	{
		AUDIO::START_AUDIO_SCENE("AGENCY_H_2_COVER_BLOWN");
	}
	switch (iLocal_192)
	{
		case 0:
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && !func_15(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					GlobalFunc_8316(0, 1, 0, 0);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				}
			}
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::STOP_GAMEPLAY_HINT(0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_88))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(iLocal_88))
				{
					ENTITY::DETACH_ENTITY(iLocal_88, 1, 1);
				}
			}
			if ((!PED::IS_PED_INJURED(Local_571[0 /*14*/]) && ENTITY::DOES_ENTITY_EXIST(Local_571[0 /*14*/].f_1)) && ENTITY::IS_ENTITY_ATTACHED(Local_571[0 /*14*/].f_1))
			{
				ENTITY::DETACH_ENTITY(Local_571[0 /*14*/].f_1, 1, 1);
			}
			if ((!PED::IS_PED_INJURED(Local_571[7 /*14*/]) && ENTITY::DOES_ENTITY_EXIST(Local_571[7 /*14*/].f_1)) && ENTITY::IS_ENTITY_ATTACHED(Local_571[7 /*14*/].f_1))
			{
				ENTITY::DETACH_ENTITY(Local_571[7 /*14*/].f_1, 1, 1);
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_976))
			{
				if (!PED::IS_PED_INJURED(Local_571[7 /*14*/]))
				{
					TASK::CLEAR_PED_TASKS(Local_571[7 /*14*/]);
				}
				if (!PED::IS_PED_INJURED(Local_571[8 /*14*/]))
				{
					TASK::CLEAR_PED_TASKS(Local_571[8 /*14*/]);
				}
				if (!PED::IS_PED_INJURED(iLocal_80))
				{
					TASK::CLEAR_PED_TASKS(iLocal_80);
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_225))
			{
				if (!PED::IS_PED_INJURED(Local_571[0 /*14*/]))
				{
					TASK::CLEAR_PED_TASKS(Local_571[0 /*14*/]);
				}
				if (!PED::IS_PED_INJURED(Local_571[1 /*14*/]))
				{
					TASK::CLEAR_PED_TASKS(Local_571[1 /*14*/]);
				}
				if (!PED::IS_PED_INJURED(iLocal_80))
				{
					TASK::CLEAR_PED_TASKS(iLocal_80);
				}
				GlobalFunc_4956();
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_218))
			{
				if (!PED::IS_PED_INJURED(Local_571[0 /*14*/]))
				{
					TASK::CLEAR_PED_TASKS(Local_571[0 /*14*/]);
				}
				if (!PED::IS_PED_INJURED(Local_571[1 /*14*/]))
				{
					TASK::CLEAR_PED_TASKS(Local_571[1 /*14*/]);
				}
				if (!PED::IS_PED_INJURED(iLocal_80))
				{
					TASK::CLEAR_PED_TASKS(iLocal_80);
				}
				GlobalFunc_4956();
			}
			break;
		
		case 1:
			if (!GlobalFunc_111() && !func_23())
			{
				if (func_19("F3A_JANRUN", ""))
				{
					iLocal_192++;
				}
			}
			else if (SYSTEM::TIMERA() > 5000)
			{
				iLocal_192++;
			}
			break;
		
		case 2:
			if (!GlobalFunc_111() && !func_23())
			{
				if ((((!PED::IS_PED_INJURED(iLocal_80) && !PED::IS_PED_BEING_STEALTH_KILLED(iLocal_80)) && !PED::IS_PED_BEING_STUNNED(iLocal_80, 0)) && ENTITY::DOES_ENTITY_EXIST(iLocal_85)) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_85, iLocal_80))
				{
					GlobalFunc_527("S3A_TAKEDOWN", 7500, 1);
				}
				SYSTEM::SETTIMERA(0);
				iLocal_192++;
			}
			break;
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_69))
	{
		if (!HUD::DOES_BLIP_EXIST(uLocal_71))
		{
			if (HUD::GET_BLIP_HUD_COLOUR(uLocal_69) != 119)
			{
				HUD::REMOVE_BLIP(&uLocal_69);
				if (!PED::IS_PED_INJURED(iLocal_80))
				{
					uLocal_69 = GlobalFunc_6797(iLocal_80, 1, 145);
				}
			}
		}
		else
		{
			HUD::REMOVE_BLIP(&uLocal_71);
		}
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_71))
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_69))
		{
			HUD::REMOVE_BLIP(&uLocal_69);
		}
	}
	func_121();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_85) && !ENTITY::IS_ENTITY_ATTACHED(iLocal_85))
	{
		bVar0 = false;
		fVar1 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_85, 1));
		if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_85))
		{
			if (fVar1 > 100f)
			{
				bVar0 = true;
			}
			if (fVar1 > 5f)
			{
				fLocal_183 = (fLocal_183 + MISC::GET_FRAME_TIME());
			}
			if (fLocal_183 > 20f)
			{
				bVar0 = true;
			}
		}
		else if (fLocal_183 > 0f)
		{
			fLocal_183 = (fLocal_183 - (MISC::GET_FRAME_TIME() * 2f));
		}
		else
		{
			fLocal_183 = 0f;
		}
		if (bVar0)
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_71))
			{
				HUD::REMOVE_BLIP(&uLocal_71);
			}
			func_98("S3A_LFTCASE");
		}
	}
	else
	{
		func_97();
	}
}

void func_97()//Position - 0x6470
{
	float fVar0;
	struct<3> Var1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_80) && !PED::IS_PED_INJURED(iLocal_80))
	{
		fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_80, 1));
		if ((fVar0 > 10000f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_80)) || fVar0 > 62500f)
		{
			fLocal_846 = (fLocal_846 + MISC::GET_FRAME_TIME());
		}
		else
		{
			fLocal_846 = GlobalFunc_253((fLocal_846 - (MISC::GET_FRAME_TIME() * 2f)), 0f, 5f);
		}
		if (fLocal_846 > 3f)
		{
			HUD::CLEAR_PRINTS();
			GlobalFunc_4956();
			func_98("S3A_LOST");
		}
	}
	if (iLocal_242 == 0)
	{
		if (!PED::IS_PED_INJURED(iLocal_80))
		{
			if (iLocal_203 == -1)
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_80, 1) };
				if (Var1.f_2 > 100f && !Local_426[1 /*36*/].f_26)
				{
					iLocal_203 = MISC::GET_GAME_TIMER();
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_203) > 10000 && (!func_15(PLAYER::PLAYER_PED_ID()) || (func_15(PLAYER::PLAYER_PED_ID()) && !Local_426[func_10(PLAYER::PLAYER_PED_ID()) /*36*/].f_26)))
			{
				func_98("S3A_LOST");
			}
		}
	}
}

void func_98(char* sParam0)//Position - 0x658C
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_88))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iLocal_88))
		{
			ENTITY::DETACH_ENTITY(iLocal_88, 1, 1);
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(0);
	}
	GlobalFunc_5129(706.9233f, -965.4952f, 29.4179f, 282.8027f);
	GlobalFunc_586(0);
	GlobalFunc_10835(sParam0);
	while (!GlobalFunc_145())
	{
		iVar0 = 0;
		while (iVar0 < Local_426)
		{
			func_83(&(Local_426[iVar0 /*36*/]));
			iVar0++;
		}
		SYSTEM::WAIT(0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_81))
	{
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_81, 0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_81, 1, 1);
		}
		VEHICLE::DELETE_VEHICLE(&iLocal_81);
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase_02"), 0))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase_02"));
	}
	GlobalFunc_8319(24);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		GlobalFunc_5129(-76.3515f, -1021.134f, 27.5053f, 97.856f);
	}
	PED::DELETE_PED(&iLocal_80);
	if (iLocal_156 && iLocal_242 == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_82) && ENTITY::IS_ENTITY_DEAD(iLocal_82))
		{
			Global_Mission_Fail_State.f_12[0] = 1;
		}
	}
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_82);
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
	}
	iVar1 = 0;
	while (iVar1 < Local_571)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_571[iVar1 /*14*/]))
		{
			PED::DELETE_PED(&(Local_571[iVar1 /*14*/]));
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Local_571)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_571[iVar1 /*14*/]))
		{
			PED::DELETE_PED(&(Local_571[iVar1 /*14*/]));
		}
		iVar1++;
	}
	PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
	GlobalFunc_585(6, 0);
	func_629();
}























void func_121()//Position - 0x91B6
{
	struct<3> Var0;
	int iVar3;
	struct<3> Var4;
	
	if (!PED::IS_PED_INJURED(iLocal_80))
	{
		if (bLocal_152)
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_80, 1)) > 900f)
			{
				iLocal_790 = 7;
				bLocal_152 = false;
			}
		}
		else
		{
			if (func_75(iLocal_80))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_80, 1) };
				if (iLocal_792 < 3)
				{
					if (Var0.f_2 < 50f)
					{
						iLocal_792 = 3;
					}
				}
				else if (iLocal_792 > 3)
				{
					if (Var0.f_2 > 50f && !func_15(iLocal_80))
					{
						iLocal_792 = 0;
					}
				}
			}
			if (iLocal_244 == 0)
			{
				iVar3 = 0;
				while (iVar3 < Local_571)
				{
					if ((!PED::IS_PED_INJURED(Local_571[iVar3 /*14*/]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_571[iVar3 /*14*/], 1)) < 900f) && func_19("F3A_JANRUN", ""))
					{
						func_25(0);
					}
					iVar3++;
				}
			}
			switch (iLocal_792)
			{
				case 0:
					if (func_130(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &Local_858) >= func_130(ENTITY::GET_ENTITY_COORDS(iLocal_80, 1), &Local_858) && func_130(ENTITY::GET_ENTITY_COORDS(iLocal_80, 1), &Local_858) > 0f)
					{
						func_129(&Local_858);
					}
					func_127(&Local_858);
					if (!iLocal_945)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_80, Local_929, Local_932, fLocal_935, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_80, Local_936, Local_939, fLocal_942, 0, 1, 0))
						{
							iLocal_792 = 1;
							iLocal_944 = -1;
						}
					}
					else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_80, Local_929, Local_932, fLocal_935, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_80, Local_936, Local_939, fLocal_942, 0, 1, 0))
					{
						if (!func_15(iLocal_80))
						{
							iLocal_945 = 0;
						}
					}
					else if (func_130(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &Local_858) > func_130(ENTITY::GET_ENTITY_COORDS(iLocal_80, 1), &Local_858))
					{
						iLocal_945 = 0;
					}
					break;
				
				case 1:
					if (!func_15(iLocal_80))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_80, 242628503) != 1)
						{
							iLocal_944 = func_126(ENTITY::GET_ENTITY_COORDS(iLocal_80, 1));
							if (iLocal_944 != -1)
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_943);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_104[iLocal_944 /*3*/], 2f, -1, 0.25f, 1, 1193033728);
								TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_117[iLocal_944 /*3*/], 2f, -1, 40000f, 1.5f);
								TASK::TASK_TURN_PED_TO_FACE_COORD(0, -157.0022f, -941.1864f, 113.2076f, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_943);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_80, uLocal_943);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_943);
							}
						}
						else if (iLocal_944 != -1)
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_426[iLocal_944 /*36*/], 1)) > SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_80, 1), ENTITY::GET_ENTITY_COORDS(Local_426[iLocal_944 /*36*/], 1)))
							{
								if (func_11(&(Local_426[iLocal_944 /*36*/]), PLAYER::PLAYER_PED_ID()))
								{
									func_125();
								}
							}
							else
							{
								iLocal_792 = 0;
							}
						}
					}
					else
					{
						iLocal_792 = 2;
					}
					break;
				
				case 2:
					if (func_15(iLocal_80) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_80, 242628503) != 1)
					{
						if (!func_11(&(Local_426[func_10(iLocal_80) /*36*/]), PLAYER::PLAYER_PED_ID()) && !func_124(func_10(iLocal_80), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)))
						{
							if (!Local_426[func_10(iLocal_80) /*36*/].f_26)
							{
								iLocal_151 = 0;
								TASK::CLEAR_PED_TASKS(iLocal_80);
								Local_426[func_10(iLocal_80) /*36*/].f_27 = 1;
								func_92(&(Local_426[func_10(iLocal_80) /*36*/]), iLocal_80);
								iLocal_792 = 3;
							}
						}
						else if (func_11(&(Local_426[func_10(iLocal_80) /*36*/]), PLAYER::PLAYER_PED_ID()))
						{
							func_125();
							iLocal_792 = 0;
						}
						else if (func_124(func_10(iLocal_80), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)))
						{
							if (!iLocal_151)
							{
								TASK::TASK_COWER(iLocal_80, -1);
								func_13(iLocal_80);
								iLocal_789 = 1;
								iLocal_151 = 1;
							}
						}
					}
					break;
				
				case 3:
					Var4 = { ENTITY::GET_ENTITY_COORDS(iLocal_80, 1) };
					if ((Var4.f_2 < 50f || (func_15(iLocal_80) && Local_426[func_10(iLocal_80) /*36*/].f_30 < 0.2f)) || !func_15(iLocal_80))
					{
						func_125();
						iLocal_792 = 4;
					}
					break;
				
				case 4:
					if (!ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_80, 1)) < 625f)
					{
						if (func_130(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &Local_883) >= func_130(ENTITY::GET_ENTITY_COORDS(iLocal_80, 1), &Local_883) && func_130(ENTITY::GET_ENTITY_COORDS(iLocal_80, 1), &Local_883) > 0f)
						{
							func_129(&Local_883);
						}
					}
					if (!iLocal_151)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_80, -127.7293f, -944.4067f, 30.35205f, -138.3072f, -940.5934f, 35.79401f, 16.5f, 0, 1, 0) && func_130(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &Local_883) < func_130(ENTITY::GET_ENTITY_COORDS(iLocal_80, 1), &Local_883))
						{
							TASK::TASK_COWER(iLocal_80, -1);
							func_13(iLocal_80);
							iLocal_789 = 1;
							iLocal_151 = 1;
						}
					}
					func_127(&Local_883);
					if (func_15(iLocal_80))
					{
						if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_80))
						{
							if (ENTITY::IS_ENTITY_ATTACHED(iLocal_80))
							{
								ENTITY::DETACH_ENTITY(iLocal_80, 1, 1);
							}
							if (!CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_80, 1), 2f) && !CAM::IS_SPHERE_VISIBLE(func_123(&Local_883), 2f))
							{
								ENTITY::SET_ENTITY_COORDS(iLocal_80, func_123(&Local_883), 1, 0, 0, 1);
							}
						}
					}
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_80, -177.8841f, -1028.466f, 26.16829f, -141.8391f, -931.3359f, 35.79401f, 42.25f, 0, 1, 0) && !func_15(iLocal_80))
					{
						iLocal_927 = -1;
						func_125();
						iLocal_792 = 5;
					}
					break;
				
				case 5:
					if (!ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_80, 1)) < 625f)
					{
						if (func_130(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &Local_908) >= func_130(ENTITY::GET_ENTITY_COORDS(iLocal_80, 1), &Local_908) && func_130(ENTITY::GET_ENTITY_COORDS(iLocal_80, 1), &Local_908) > 0f)
						{
							func_129(&Local_908);
						}
					}
					func_127(&Local_908);
					if (!func_75(iLocal_80))
					{
						iLocal_792 = 6;
					}
					break;
				
				case 6:
					if (!PED::IS_PED_FLEEING(iLocal_80))
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_80, PLAYER::PLAYER_PED_ID(), 5000f, -1, 1, 0);
					}
					if (func_75(iLocal_80))
					{
						iLocal_792 = 5;
					}
					break;
			}
			if (iLocal_244 < 2)
			{
				func_122();
			}
		}
	}
}

void func_122()//Position - 0x983E
{
	if ((MISC::GET_GAME_TIMER() - iLocal_197) > 3000 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		if (func_19("F3A_JANRUN", ""))
		{
			iLocal_197 = MISC::GET_GAME_TIMER();
		}
	}
}

Vector3 func_123(var uParam0)//Position - 0x9873
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 9999999f;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), *(uParam0[iVar2 /*3*/])) < fVar0)
		{
			iVar1 = iVar2;
			fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), *(uParam0[iVar2 /*3*/]));
		}
		iVar2++;
	}
	return *(uParam0[iVar1 /*3*/]);
}

int func_124(int iParam0, struct<3> Param1)//Position - 0x98D7
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_426[iParam0 /*36*/]))
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_426[iParam0 /*36*/], Local_426[iParam0 /*36*/].f_19 - Vector(0f, 0f, 5f)), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_426[iParam0 /*36*/], Local_426[iParam0 /*36*/].f_22 + Vector(0f, 0f, 5f)), (Local_426[iParam0 /*36*/].f_25 + 4f), 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_125()//Position - 0x993E
{
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_943);
	TASK::CLEAR_PED_TASKS(iLocal_80);
	iLocal_944 = -1;
	iLocal_928 = -3;
	iLocal_945 = 1;
	iLocal_151 = 0;
}

int func_126(struct<3> Param0)//Position - 0x9964
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	fVar0 = 9999999f;
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 < Local_426)
	{
		if (Local_426[iVar2 /*36*/].f_26 == 0 && Local_426[iVar2 /*36*/].f_30 == 1f)
		{
			fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_426[iVar2 /*36*/], 1), Param0);
			if (fVar3 < fVar0)
			{
				fVar0 = fVar3;
				iVar1 = iVar2;
			}
		}
		iVar2++;
	}
	return iVar1;
}

void func_127(var uParam0)//Position - 0x99D0
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iLocal_80))
	{
		iVar0 = (*uParam0 - 1);
		if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_80, 713668775) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_80, 2106541073) != 1)
		{
			iVar1 = func_128(ENTITY::GET_ENTITY_COORDS(iLocal_80, 1), uParam0) + 1;
			if (iVar1 >= 0 && iVar1 < *uParam0)
			{
				iLocal_927 = -1;
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_80, 1), *(uParam0[iVar1 /*3*/])) > 16f)
				{
					iLocal_927 = iVar1;
				}
				else if (iVar1 < iVar0)
				{
					iLocal_927 = iVar1 + 1;
				}
				if (iLocal_927 >= 0)
				{
					if (iLocal_928 >= 0)
					{
						if (func_15(iLocal_80))
						{
							iLocal_927 = -1;
							TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_80, func_123(uParam0), 2f, -1, 1193033728, 1056964608);
						}
						else
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_80, *(uParam0[iLocal_927 /*3*/]), 2f, -1, 0.05f, 1, 1193033728);
						}
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_80, 0, 0);
						iLocal_928 = -2;
					}
				}
			}
		}
		else if (iLocal_927 >= 0 && iLocal_927 < *uParam0)
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_80, 1), *(uParam0[iLocal_927 /*3*/])) < 9f)
			{
				TASK::CLEAR_PED_TASKS(iLocal_80);
			}
		}
		if (iLocal_928 < 0)
		{
			iLocal_928++;
		}
	}
}

int func_128(struct<3> Param0, var uParam3)//Position - 0x9B0D
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	fVar2 = 99999f;
	iVar0 = 0;
	while (iVar0 < (*uParam3 - 1))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(MISC::_0x21C235BC64831E5A(Param0, *(uParam3[iVar0 /*3*/]), *(uParam3[iVar0 + 1 /*3*/]), 1), Param0, 1) < fVar2)
		{
			iVar1 = iVar0;
			fVar2 = SYSTEM::VDIST(MISC::_0x21C235BC64831E5A(Param0, *(uParam3[iVar0 /*3*/]), *(uParam3[iVar0 + 1 /*3*/]), 1), Param0);
		}
		iVar0++;
	}
	return iVar1;
}

void func_129(var uParam0)//Position - 0x9B87
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
	iVar0 = *uParam0;
	if ((iVar2 % 2) != 0)
	{
		iVar2 = (SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / 2f)) - 1);
	}
	else
	{
		iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / 2f));
	}
	iVar1 = 0;
	while (iVar1 <= (iVar2 - 1))
	{
		Var3 = { *(uParam0[iVar1 /*3*/]) };
		*(uParam0[iVar1 /*3*/]) = { *(uParam0[((iVar0 - 1) - iVar1) /*3*/]) };
		*(uParam0[((iVar0 - 1) - iVar1) /*3*/]) = { Var3 };
		iVar1++;
	}
	if (!PED::IS_PED_INJURED(iLocal_80))
	{
		TASK::CLEAR_PED_TASKS(iLocal_80);
	}
}

float func_130(struct<3> Param0, var uParam3)//Position - 0x9C14
{
	int iVar0;
	float fVar1;
	
	iVar0 = func_128(Param0, uParam3);
	if (iVar0 >= 0 && iVar0 < *uParam3)
	{
		fVar1 = SYSTEM::TO_FLOAT(iVar0);
		if (iVar0 < (*uParam3 - 1))
		{
			fVar1 = (fVar1 + MISC::_0x7F8F6405F4777AF6(Param0, *(uParam3[iVar0 /*3*/]), *(uParam3[iVar0 + 1 /*3*/]), 1));
		}
		return fVar1;
	}
	return -1f;
}


void func_132()//Position - 0x9C8B
{
	switch (iLocal_192)
	{
		case 0:
			SYSTEM::SETTIMERB(0);
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_80))
			{
				TASK::CLEAR_PED_TASKS(iLocal_80);
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_976))
			{
				if (!PED::IS_PED_INJURED(Local_571[7 /*14*/]))
				{
					TASK::CLEAR_PED_TASKS(Local_571[7 /*14*/]);
				}
				if (!PED::IS_PED_INJURED(Local_571[8 /*14*/]))
				{
					TASK::CLEAR_PED_TASKS(Local_571[8 /*14*/]);
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_225))
			{
				if (!PED::IS_PED_INJURED(Local_571[0 /*14*/]))
				{
					TASK::CLEAR_PED_TASKS(Local_571[0 /*14*/]);
				}
				if (!PED::IS_PED_INJURED(Local_571[1 /*14*/]))
				{
					TASK::CLEAR_PED_TASKS(Local_571[1 /*14*/]);
				}
			}
			GlobalFunc_4956();
			RECORDING::_0x293220DA1B46CEBC(3f, 2f, 3);
			iLocal_192++;
			break;
		
		case 1:
			func_134();
			if (func_133())
			{
				func_2(6);
			}
			else if (GlobalFunc_10607(&Local_247, cLocal_241, "F3A_WHORU", 8, 0, 0, 0))
			{
				SYSTEM::SETTIMERB(0);
				iLocal_192++;
			}
			break;
		
		case 2:
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				fLocal_181 = (fLocal_181 + MISC::GET_FRAME_TIME());
			}
			if ((SYSTEM::TIMERB() > 3000 || fLocal_181 > 1.5f) || func_133())
			{
				if (GlobalFunc_10607(&Local_247, cLocal_241, "F3A_SECURITY", 8, 0, 0, 0))
				{
					func_25(fLocal_181 > 1.5f);
					func_2(6);
				}
			}
			break;
	}
}

int func_133()//Position - 0x9DE2
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!bLocal_147)
	{
		if (!PED::IS_PED_INJURED(iLocal_80) && !ENTITY::IS_ENTITY_DEAD(iLocal_80))
		{
			iVar1 = 0;
			while (iVar1 < Local_571)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_571[iVar1 /*14*/]))
				{
					if ((PED::IS_PED_INJURED(Local_571[iVar1 /*14*/]) || ENTITY::IS_ENTITY_DEAD(Local_571[iVar1 /*14*/])) || (!PED::IS_PED_INJURED(Local_571[iVar1 /*14*/]) && PED::IS_PED_FLEEING(Local_571[iVar1 /*14*/])))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_80, 1), ENTITY::GET_ENTITY_COORDS(Local_571[iVar1 /*14*/], 1)) < 900f)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_847) > 500)
							{
								if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_80, Local_571[iVar1 /*14*/]))
								{
									iVar0 = 1;
								}
							}
							iLocal_847 = MISC::GET_GAME_TIMER();
						}
					}
				}
				iVar1++;
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_80, PLAYER::PLAYER_PED_ID(), 1))
			{
				iVar0 = 1;
			}
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_80, 1)) < 9f)
			{
				if (PED::IS_PED_RAGDOLL(iLocal_80))
				{
					iVar0 = 1;
				}
			}
		}
	}
	return iVar0;
}

void func_134()//Position - 0x9EF0
{
	if (!PED::IS_PED_INJURED(iLocal_80))
	{
		if (!PED::IS_PED_FACING_PED(iLocal_80, PLAYER::PLAYER_PED_ID(), 60f))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_80, 242628503) != 1)
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_80, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_92);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_92);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_80, uLocal_92);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_92);
			}
		}
		else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_80, 242628503) != 1)
		{
			if (!PED::IS_PED_INJURED(iLocal_80))
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_80, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
			}
		}
	}
}

void func_135()//Position - 0x9F8D
{
	int iVar0;
	
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_144) < 10000f)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_80))
	{
		if (!PED::IS_PED_INJURED(iLocal_80))
		{
			func_121();
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_80, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 50f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_80))
			{
				PED::DELETE_PED(&iLocal_80);
			}
		}
	}
	switch (iLocal_192)
	{
		case 0:
			GlobalFunc_200(&Local_247, 3);
			GlobalFunc_173(&Local_247, 3, 0, "MICHAEL", 0, 1);
			AUDIO::RELEASE_MISSION_AUDIO_BANK();
			AUDIO::TRIGGER_MUSIC_EVENT("AH2A_EXIT_SITE");
			func_250();
			func_248();
			GlobalFunc_571(1, -1);
			if (bLocal_147)
			{
				func_246();
				GlobalFunc_570(500);
				func_244(0, 4);
				func_243(0);
				iLocal_156 = 1;
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_88))
				{
					OBJECT::DELETE_OBJECT(&iLocal_88);
				}
				if (Global_Mission_Fail_State.f_12[0] != 1)
				{
					while (!func_242(Local_100, fLocal_103))
					{
						SYSTEM::WAIT(0);
					}
				}
				while (!func_215(Local_96, fLocal_99))
				{
					SYSTEM::WAIT(0);
				}
				OBJECT::DELETE_OBJECT(&iLocal_85);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -77.7099f, -1019.901f, 27.5262f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 315.6337f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				if (GlobalFunc_188())
				{
					GlobalFunc_5108(0, -1, 1);
				}
				CAM::DO_SCREEN_FADE_IN(500);
				bLocal_147 = false;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				iLocal_192 = -1;
			}
			else
			{
				iLocal_192++;
			}
			break;
		
		case -1:
			GlobalFunc_164("S3A_LOSECOPS", 7500, 1);
			RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
			iLocal_192 = (iLocal_192 - 1);
			break;
		
		case -2:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				HUD::CLEAR_PRINTS();
				iLocal_192 = 1;
			}
			break;
		
		case 1:
			PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			GlobalFunc_Checkpoint1(3, "Drive back", 1, 0, 0, 1);
			if (PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0) == 7)
			{
				STREAMING::REQUEST_ANIM_DICT("veh@bike@common@Front@base");
				if (STREAMING::HAS_ANIM_DICT_LOADED("veh@bike@common@Front@base") && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						PLAYER::SET_PLAYER_CAN_USE_COVER(PLAYER::PLAYER_ID(), 0);
						PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 262, 1);
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "veh@bike@common@Front@base", "take_off_helmet_walk", 3))
						{
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "veh@bike@common@Front@base", "take_off_helmet_walk", 8f, -8f, -1, 48, 0, 0, 0, 0);
						}
						else
						{
							SYSTEM::SETTIMERA(0);
							iLocal_192++;
						}
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
						iLocal_150 = 0;
						iLocal_192++;
					}
				}
			}
			else
			{
				iLocal_150 = 0;
				iLocal_192 = 3;
			}
			break;
		
		case 2:
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "veh@bike@common@Front@base", "take_off_helmet_walk", 3))
			{
				PLAYER::SET_PLAYER_CAN_USE_COVER(PLAYER::PLAYER_ID(), 0);
				PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 262, 1);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_88))
				{
					if (PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0) == 7)
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "veh@bike@common@Front@base", "take_off_helmet_walk") > 0.5399f)
						{
							PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
							iLocal_88 = OBJECT::CREATE_OBJECT(joaat("prop_hard_hat_01"), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 1, 0);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_88, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 60309), 0f, 0f, 0f, 0f, 90f, 0f, 0, 0, 0, 0, 2, 1);
						}
					}
				}
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_88))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(iLocal_88))
					{
						ENTITY::DETACH_ENTITY(iLocal_88, 1, 1);
						ENTITY::SET_ENTITY_COLLISION(iLocal_88, 1, 0);
						ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_88, 0, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_88);
					}
				}
				iLocal_192++;
			}
			break;
		
		case 3:
			if (SYSTEM::TIMERA() > 1000)
			{
				GlobalFunc_164("S3A_GOHOME", 7500, 1);
				iLocal_192++;
			}
			break;
		
		case 4:
			if (!HUD::DOES_BLIP_EXIST(uLocal_79))
			{
				RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
				uLocal_79 = GlobalFunc_5104(Local_144, 1);
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				func_94();
			}
			if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
			{
				if (!iLocal_166)
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_144) < (100f * 100f))
					{
						GlobalFunc_585(6, 1);
						iLocal_166 = 1;
					}
				}
				else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_144) > (120f * 120f))
				{
					GlobalFunc_585(6, 0);
					iLocal_166 = 0;
				}
			}
			ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_144, Global_18, 1, 1, 0);
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 710.9642f, -975.3923f, 29.26327f, 710.6976f, -958.3569f, 32.59424f, 2.25f, 0, 1, 0))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_79))
				{
					HUD::REMOVE_BLIP(&uLocal_79);
				}
				RECORDING::_0x293220DA1B46CEBC(7f, 5f, 4);
				func_138();
			}
			break;
	}
	PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), !iLocal_991);
	if (iLocal_991)
	{
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 741.51f, -984.7452f, 23.69251f, 677.4985f, -984.195f, 33.70847f, 17.25f, 0, 1, 0) && !func_137(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_991 = 0;
			iLocal_992 = 0;
		}
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 741.51f, -984.7452f, 23.69251f, 677.4985f, -984.195f, 33.70847f, 17.25f, 0, 1, 0) || func_137(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 0);
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (!iLocal_992)
			{
				iLocal_992 = 1;
			}
		}
		else if (iVar0 != joaat("weapon_briefcase_02"))
		{
			if (func_137(PLAYER::PLAYER_PED_ID()) || iLocal_992)
			{
				if (!GlobalFunc_116(0))
				{
					func_14(PLAYER::PLAYER_PED_ID());
				}
			}
		}
		else
		{
			iLocal_991 = 1;
		}
	}
}


int func_137(int iParam0)//Position - 0xA5D8
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0))
	{
		return (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 696.426f, -961.0247f, 22.88202f, 739.2752f, -961.2941f, 35.81699f, 30.5f, 0, 1, 0) && INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())));
	}
	return 0;
}

void func_138()//Position - 0xA636
{
	Global_86864[0] = iLocal_81;
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	GlobalFunc_4935();
	GlobalFunc_4956();
	if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		GlobalFunc_585(6, 1);
		GlobalFunc_5103(1, 0);
	}
	else
	{
		GlobalFunc_5103(0, 0);
	}
	func_629();
}













































































int func_215(struct<3> Param0, float fParam3)//Position - 0x11663
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_81))
	{
		STREAMING::REQUEST_MODEL(GlobalFunc_4931(1, 1));
		if (STREAMING::HAS_MODEL_LOADED(GlobalFunc_4931(1, 1)))
		{
			GlobalFunc_9756(&iLocal_81, 1, Param0, fParam3, 1, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_81) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_81, 0))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_81, Param0, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(iLocal_81, fParam3);
		ENTITY::SET_ENTITY_QUATERNION(iLocal_81, -0.0256f, -0.0077f, 0.9857f, 0.1664f);
		return 1;
	}
	return 0;
}



























int func_242(struct<3> Param0, float fParam3)//Position - 0x156B4
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_82))
	{
		STREAMING::REQUEST_MODEL(joaat("zion2"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("zion2")))
		{
			iLocal_82 = VEHICLE::CREATE_VEHICLE(joaat("zion2"), Param0, fParam3, 1, 1);
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_82, 33, 0);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_82, 69, 0);
			VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_82, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_82) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_82, 0))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_82, Param0, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(iLocal_82, fParam3);
		VEHICLE::SET_VEHICLE_ALARM(iLocal_82, 1);
		return 1;
	}
	return 0;
}

void func_243(int iParam0)//Position - 0x1573E
{
	iLocal_790 = iParam0;
	iLocal_791 = 0;
	iLocal_167 = 0;
}

void func_244(int iParam0, int iParam1)//Position - 0x15752
{
	func_54(1);
	switch (iParam1)
	{
		case 0:
		case 1:
			iLocal_245 = iParam1;
			break;
		
		case 2:
		case 3:
			iLocal_245 = iParam1;
			break;
		
		case 4:
		case 5:
			iLocal_245 = iParam1;
			break;
	}
	iLocal_244 = iParam0;
}


void func_246()//Position - 0x157C9
{
	iLocal_150 = 0;
	iLocal_151 = 0;
	iLocal_153[0] = 0;
	iLocal_153[1] = 0;
	iLocal_156 = 0;
	iLocal_159 = 0;
	iLocal_161 = 0;
	iLocal_163 = 0;
	iLocal_165 = 0;
	iLocal_168 = 0;
	fLocal_181 = 0f;
	iLocal_184 = 0;
	iLocal_185 = 0;
	fLocal_182 = 0f;
	iLocal_193 = 0;
	iLocal_194 = 0;
	iLocal_195 = 0;
	iLocal_196 = 0;
	iLocal_197 = 0;
	iLocal_198 = 1;
	iLocal_199 = 0;
	iLocal_201 = -1;
}


void func_248()//Position - 0x158B3
{
	Local_412 = { GlobalFunc_541("S3A_PICKUP") };
	Local_414 = { GlobalFunc_541("S3A_PARK") };
	Local_416 = { GlobalFunc_541("S3A_GETOUT") };
	Local_422 = { GlobalFunc_541("F3A_ARCHAT") };
	Local_418 = { GlobalFunc_541("S3A_LFTHLP") };
	Local_420 = { GlobalFunc_541("S3A_MUGHLP") };
	if (MISC::IS_STRING_NULL_OR_EMPTY(Local_424))
	{
		Local_424 = { GlobalFunc_541("S3A_CAMHELP") };
	}
}


void func_250()//Position - 0x15935
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_571)
	{
		if (HUD::DOES_BLIP_EXIST(Local_571[iVar0 /*14*/].f_2))
		{
			HUD::REMOVE_BLIP(&(Local_571[iVar0 /*14*/].f_2));
		}
		iVar0++;
	}
}

void func_251()//Position - 0x1596E
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_2_TAKE_OUT_ARCHITECT"))
	{
		AUDIO::STOP_AUDIO_SCENE("AGENCY_H_2_TAKE_OUT_ARCHITECT");
	}
	switch (iLocal_192)
	{
		case 0:
			func_259();
			func_248();
			if (bLocal_147)
			{
				func_246();
				func_243(6);
				GlobalFunc_570(500);
				func_244(0, 2);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_88))
				{
					OBJECT::DELETE_OBJECT(&iLocal_88);
				}
				while (!func_242(Local_100, fLocal_103) || !func_215(Local_96, fLocal_99))
				{
					SYSTEM::WAIT(0);
				}
				PED::DELETE_PED(&iLocal_80);
				func_258(-136.7302f, -967.6271f, 113.1347f, 312.9988f);
				TASK::TASK_COWER(iLocal_80, -1);
				bLocal_152 = true;
				OBJECT::DELETE_OBJECT(&iLocal_85);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -139.9581f, -971.2977f, 113.133f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 332.4719f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				Local_418.f_1 = 0;
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				iLocal_156 = 1;
				func_14(PLAYER::PLAYER_PED_ID());
				iLocal_789 = 4;
				SYSTEM::WAIT(2000);
				if (GlobalFunc_188())
				{
					GlobalFunc_5108(0, -1, 1);
				}
				GlobalFunc_575(500);
				bLocal_147 = false;
			}
			iVar1 = 0;
			while (iVar1 < Local_426)
			{
				Local_426[iVar1 /*36*/].f_27 = 1;
				iVar1++;
			}
			GlobalFunc_574(534, 0);
			AUDIO::TRIGGER_MUSIC_EVENT("AH2A_FLEE_SITE");
			HUD::CLEAR_PRINTS();
			iLocal_192++;
			break;
		
		case 1:
			bVar2 = false;
			if (((SYSTEM::TIMERB() > 2000 && !iLocal_161) && func_75(PLAYER::PLAYER_PED_ID())) && (!GlobalFunc_111() || MISC::GET_PROFILE_SETTING(203) == 0))
			{
				GlobalFunc_164("S3A_ESCAPE", 7500, 1);
				iLocal_161 = 1;
			}
			if ((!func_75(PLAYER::PLAYER_PED_ID()) && PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == -1) && (func_255() || iLocal_244 == 0))
			{
				HUD::CLEAR_PRINTS();
				func_2(3);
			}
			iVar0 = 0;
			while (iVar0 < Local_426)
			{
				if (Local_426[iVar0 /*36*/].f_27 == 1 && func_93(&(Local_426[iVar0 /*36*/])))
				{
					if (func_11(&(Local_426[iVar0 /*36*/]), PLAYER::PLAYER_PED_ID()))
					{
						bVar2 = true;
						if (!Local_426[iVar0 /*36*/].f_26)
						{
							func_253(&Local_418);
						}
						if (Local_426[iVar0 /*36*/].f_26)
						{
							if (GlobalFunc_572(Local_418))
							{
								HUD::CLEAR_HELP(1);
							}
						}
					}
				}
				iVar0++;
			}
			if (!bVar2)
			{
				if (Local_418.f_1)
				{
					Local_418.f_1 = 0;
				}
				if (GlobalFunc_572(Local_418))
				{
					HUD::CLEAR_HELP(1);
				}
			}
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_80))
	{
		if (!PED::IS_PED_INJURED(iLocal_80))
		{
			func_121();
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_80, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 50f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_80))
			{
				PED::DELETE_PED(&iLocal_80);
			}
		}
	}
}


void func_253(var uParam0)//Position - 0x15C51
{
	if (!uParam0->f_1)
	{
		HUD::CLEAR_HELP(1);
		GlobalFunc_573(*uParam0, -1);
		uParam0->f_1 = 1;
	}
}


int func_255()//Position - 0x15C8A
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < Local_571)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_571[iVar0 /*14*/]) && !PED::IS_PED_INJURED(Local_571[iVar0 /*14*/]))
		{
			if (!PED::IS_PED_FLEEING(Local_571[iVar0 /*14*/]))
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_571[iVar0 /*14*/], 1)) < 50f || !ENTITY::IS_ENTITY_OCCLUDED(Local_571[iVar0 /*14*/]))
				{
					iVar1 = 0;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}



bool func_258(struct<3> Param0, float fParam3)//Position - 0x15D80
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_80) || PED::IS_PED_INJURED(iLocal_80))
	{
		if (PED::IS_PED_INJURED(iLocal_80))
		{
			PED::DELETE_PED(&iLocal_80);
		}
		STREAMING::REQUEST_MODEL(joaat("u_m_m_fibarchitect"));
		STREAMING::REQUEST_MODEL(joaat("prop_hard_hat_01"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("u_m_m_fibarchitect")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_hard_hat_01")))
		{
			iLocal_80 = PED::CREATE_PED(26, joaat("u_m_m_fibarchitect"), Param0, fParam3, 1, 1);
			GlobalFunc_173(&Local_247, 1, iLocal_80, "FIBArchitect", 0, 1);
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_80))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iLocal_80))
		{
			ENTITY::DETACH_ENTITY(iLocal_80, 1, 1);
		}
		ENTITY::SET_ENTITY_COORDS(iLocal_80, Param0, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(iLocal_80, fParam3);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_80, 17, 1);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_80, 2, 0);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_80, 8, 1);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_80, 128, 1);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_80, 16, 1);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_80, 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_80, 2, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_80, 3, 1, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_80, 4, 1, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_80, 8, 0, 0, 0);
		AUDIO::STOP_PED_SPEAKING(iLocal_80, 1);
		PED::SET_PED_PROP_INDEX(iLocal_80, 0, 0, 0, false);
		PED::SET_PED_PROP_INDEX(iLocal_80, 1, 0, 0, false);
		PED::SET_PED_HEARING_RANGE(iLocal_80, 5f);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_80, 1, 0);
		ENTITY::SET_ENTITY_HEALTH(iLocal_80, 110);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_80, 1);
		WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iLocal_80, 0);
		WEAPON::SET_PED_DROPS_WEAPON(iLocal_80);
		PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(iLocal_80, -60f);
		PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(iLocal_80, 60f);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_80, 1);
		PED::SET_PED_LOD_MULTIPLIER(iLocal_80, 2f);
	}
	return (ENTITY::DOES_ENTITY_EXIST(iLocal_80) && !PED::IS_PED_INJURED(iLocal_80));
}

void func_259()//Position - 0x15F09
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(uLocal_69))
	{
		HUD::REMOVE_BLIP(&uLocal_69);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_70))
	{
		HUD::REMOVE_BLIP(&uLocal_70);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_71))
	{
		HUD::REMOVE_BLIP(&uLocal_71);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_72))
	{
		HUD::REMOVE_BLIP(&uLocal_72);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_73))
	{
		HUD::REMOVE_BLIP(&uLocal_73);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_74)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_74[iVar0]))
		{
			HUD::REMOVE_BLIP(&(iLocal_74[iVar0]));
		}
		iVar0++;
	}
}

void func_260()//Position - 0x15F86
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	var uVar5;
	struct<3> Var6;
	
	switch (iLocal_192)
	{
		case 0:
			func_265();
			iLocal_843 = 0;
			iLocal_844 = 0;
			iLocal_845 = 0;
			func_259();
			func_248();
			TASK::REQUEST_WAYPOINT_RECORDING("agency2Afloor");
			STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_10@idle_d");
			AUDIO::REQUEST_MISSION_AUDIO_BANK("FBI_Heist_Mug_Architect", 0);
			STREAMING::REQUEST_ANIM_DICT("missheist_agency2aig_4");
			STREAMING::REQUEST_ANIM_DICT("missheist_agency2aig_12");
			if (bLocal_147)
			{
				func_258(-182.3432f, -1011.59f, 113.1388f, 347.4715f);
				func_243(0);
				func_20(0);
				func_244(0, 2);
				GlobalFunc_570(500);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_88))
				{
					OBJECT::DELETE_OBJECT(&iLocal_88);
				}
				PED::SET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0, 7, 0, false);
				PED::RELEASE_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID());
				func_84(&(Local_426[0 /*36*/]), 1f);
				func_84(&(Local_426[1 /*36*/]), 1f);
				while ((!func_242(Local_100, fLocal_103) || !func_215(Local_96, fLocal_99)) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("agency2Afloor"))
				{
					SYSTEM::WAIT(0);
				}
				iLocal_789 = 0;
				bLocal_147 = false;
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				iVar0 = 0;
				while (iVar0 < Local_426)
				{
					Local_426[iVar0 /*36*/].f_27 = 1;
					iVar0++;
				}
				if (!GlobalFunc_188())
				{
					func_264(-180.1966f, -1017.039f, 113.2076f, 340.09f, 0, 12000, 1123680256, 0);
				}
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -180.1966f, -1017.039f, 113.2072f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 340.09f);
				STREAMING::REQUEST_ANIM_DICT("missheist_agency2aig_4");
				GlobalFunc_200(&Local_247, 1);
				GlobalFunc_173(&Local_247, 1, iLocal_80, "FIBArchitect", 0, 1);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				if (GlobalFunc_188())
				{
					GlobalFunc_5108(0, -1, 1);
				}
			}
			SYSTEM::SETTIMERA(0);
			SYSTEM::SETTIMERB(0);
			iLocal_196 = 0;
			iLocal_198 = 1;
			iLocal_193 = 0;
			iLocal_194 = 0;
			iLocal_195 = 0;
			GlobalFunc_Checkpoint1(1, "Top floor", 0, 0, 0, 1);
			iLocal_192++;
			break;
		
		case 1:
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_2_USE_ELEVATOR"))
			{
				if (!func_15(PLAYER::PLAYER_PED_ID()) || (func_15(PLAYER::PLAYER_PED_ID()) && !Local_426[func_10(PLAYER::PLAYER_PED_ID()) /*36*/].f_26))
				{
					AUDIO::STOP_AUDIO_SCENE("AGENCY_H_2_USE_ELEVATOR");
				}
			}
			else if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_2_FOLLOW_ARCHITECT_2"))
			{
				AUDIO::START_AUDIO_SCENE("AGENCY_H_2_FOLLOW_ARCHITECT_2");
			}
			if (!PED::IS_PED_INJURED(iLocal_80) && iLocal_200 < 200)
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_69))
				{
					uLocal_69 = GlobalFunc_6797(iLocal_80, 0, 145);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_69, "S3A_ARCLABEL");
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_80, Local_134, Local_137, fLocal_140, 0, 1, 0))
				{
					GlobalFunc_164("S3A_KILL", 7500, 1);
					SYSTEM::SETTIMERA(0);
					HUD::SET_BLIP_AS_FRIENDLY(uLocal_69, false);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_2_FOLLOW_ARCHITECT_2"))
					{
						AUDIO::STOP_AUDIO_SCENE("AGENCY_H_2_FOLLOW_ARCHITECT_2");
					}
					iLocal_192++;
				}
				if (func_133())
				{
					func_2(6);
				}
				else if (func_263(1))
				{
					func_2(5);
				}
			}
			else
			{
				HUD::CLEAR_PRINTS();
				iLocal_192 = 2;
			}
			break;
		
		case 2:
			if (func_133())
			{
				func_2(6);
			}
			else if (func_262() && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_80, 1)) < 49f)
			{
				func_2(5);
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_2_TAKE_OUT_ARCHITECT"))
			{
				AUDIO::START_AUDIO_SCENE("AGENCY_H_2_TAKE_OUT_ARCHITECT");
			}
			break;
	}
	switch (iLocal_200)
	{
		case 0:
			if (Local_141.f_2 > 100f)
			{
				if ((!PED::IS_PED_INJURED(Local_571[0 /*14*/]) && !PED::IS_PED_INJURED(Local_571[1 /*14*/])) && ENTITY::DOES_ENTITY_EXIST(iLocal_80))
				{
					STREAMING::REQUEST_ANIM_DICT("missheist_agency2aig_4");
					if ((STREAMING::HAS_ANIM_DICT_LOADED("missheist_agency2aig_4") && !ENTITY::IS_ENTITY_ATTACHED(iLocal_80)) && !GlobalFunc_188())
					{
						TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_80, -177.6619f, -1002.115f, 113.1388f, 1f, -1, 302.3083f, 1056964608);
						GlobalFunc_575(500);
						iLocal_200++;
					}
				}
			}
			break;
		
		case 1:
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_80, 1), -175.3637f, -1002.185f, 113.1388f) < 10.5f)
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_80, -177.6619f, -1002.115f, 113.1388f, 1f, -1, 0.25f, 512, 302.3083f);
				GlobalFunc_173(&Local_247, 2, Local_571[0 /*14*/], "FIBConstruction", 0, 1);
				TASK::CLEAR_PED_TASKS(Local_571[0 /*14*/]);
				TASK::CLEAR_PED_TASKS(Local_571[1 /*14*/]);
				uLocal_218 = PED::CREATE_SYNCHRONIZED_SCENE(Local_219, Local_222, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_571[0 /*14*/], uLocal_218, "missheist_agency2aig_4", "walk_by_worker1", 8f, -8f, 1, 0, 1000f, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_571[1 /*14*/], uLocal_218, "missheist_agency2aig_4", "walk_by_worker2", 8f, -8f, 1, 0, 1000f, 0);
				if (!PED::IS_PED_INJURED(Local_571[0 /*14*/]) && !PED::IS_PED_INJURED(Local_571[1 /*14*/]))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_80, Local_571[0 /*14*/], 10000, 0, 2);
					TASK::TASK_LOOK_AT_ENTITY(Local_571[0 /*14*/], iLocal_80, 10000, 0, 2);
					TASK::TASK_LOOK_AT_ENTITY(Local_571[1 /*14*/], iLocal_80, 10000, 0, 2);
				}
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_80, 1)) < 25f)
				{
					GlobalFunc_10607(&Local_247, cLocal_241, "F3A_WCHAT2", 8, 0, 0, 0);
				}
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_218, 0);
				RECORDING::_0x293220DA1B46CEBC(4f, 5f, 3);
				iLocal_200++;
			}
			break;
		
		case 2:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_218))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_218) > 0.65f)
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_80, "agency2Afloor", 0, 8, -1);
					iLocal_200++;
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(Local_571[0 /*14*/]) && !PED::IS_PED_INJURED(Local_571[1 /*14*/]))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_218))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_218) > 0.95f)
					{
						TASK::CLEAR_PED_TASKS(Local_571[0 /*14*/]);
						TASK::CLEAR_PED_TASKS(Local_571[1 /*14*/]);
						uLocal_218 = PED::CREATE_SYNCHRONIZED_SCENE(Local_219, Local_222, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_571[0 /*14*/], uLocal_218, "missheist_agency2aig_4", "look_plan_a_worker1", 8f, -4f, 1, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_571[1 /*14*/], uLocal_218, "missheist_agency2aig_4", "look_plan_a_worker2", 8f, -4f, 1, 0, 1000f, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_218, 1);
						iLocal_200++;
					}
				}
			}
			break;
		
		case 4:
			Local_232 = { -137.2063f, -968.6782f, 113.1362f };
			iLocal_200++;
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(iLocal_80))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_80) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_80, 1), Local_232) < 3f)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_80, Local_232, 1f, -1, 0.1f, 512, 1193033728);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_80, 0, 0);
					iLocal_200++;
				}
			}
			break;
		
		case 6:
			if (!PED::IS_PED_INJURED(iLocal_80))
			{
				fVar1 = ENTITY::GET_ENTITY_HEADING(iLocal_80);
				if (iLocal_790 <= 2)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_80, 1), Local_232) < 1.5f && (MISC::ABSF((fVar1 - 334.8835f)) < 10f || MISC::ABSF((fVar1 - -26.8835f)) < 10f))
					{
						func_261();
					}
					else
					{
						if (iLocal_186 != 0)
						{
							iLocal_186 = 0;
						}
						if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_80, 1), Local_232) > 1f)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_80, 713668775) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_80, 713668775) != 0)
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_80, Local_232, 1f, -1, 0.1f, 512, 334.8835f);
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_80, 1920390111) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_80, 1920390111) != 0)
						{
							TASK::TASK_ACHIEVE_HEADING(iLocal_80, 334.8835f, 0);
						}
					}
				}
			}
			break;
		
		case 7:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_225))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(iLocal_85) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_225) > 0.651f)
				{
					ENTITY::DETACH_ENTITY(iLocal_85, 0, 1);
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_225) > 0.95f)
				{
					TASK::CLEAR_PED_TASKS(iLocal_80);
					uLocal_225 = PED::CREATE_SYNCHRONIZED_SCENE(Local_226, Local_229, 2);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_225, 1);
					iLocal_200++;
				}
			}
			break;
		
		case 8:
			if (!PED::IS_PED_INJURED(iLocal_80))
			{
				if (iLocal_198 < 5)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_196) > 7500)
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_80, 1)) < 900f)
						{
							if (GlobalFunc_10607(&Local_247, cLocal_241, sLocal_206[iLocal_198], 8, 0, 0, 0))
							{
								iLocal_196 = MISC::GET_GAME_TIMER();
								iLocal_198++;
							}
						}
					}
				}
			}
			break;
		
		case -100:
			if (!PED::IS_PED_INJURED(iLocal_80))
			{
				TASK::CLEAR_PED_TASKS(iLocal_80);
				Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				TASK::OPEN_SEQUENCE_TASK(&uVar5);
				TASK::TASK_STAND_STILL(0, 1500);
				TASK::TASK_TURN_PED_TO_FACE_COORD(0, Var2, 0);
				TASK::CLOSE_SEQUENCE_TASK(uVar5);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_80, uVar5);
				TASK::CLEAR_SEQUENCE_TASK(&uVar5);
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_80, 1)) < 400f)
				{
					GlobalFunc_10607(&Local_247, cLocal_241, "F3A_WASSAT", 8, 0, 0, 0);
				}
				iLocal_200 = -101;
			}
			break;
		
		case -101:
			if ((MISC::GET_GAME_TIMER() - iLocal_187) > 5000)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_80, 1)) < 400f)
				{
					GlobalFunc_10607(&Local_247, cLocal_241, "F3A_NOTHING", 8, 0, 0, 0);
				}
				iLocal_200 = iLocal_201;
				if (iLocal_200 <= 5)
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_80, "agency2Afloor", 0, 8, -1);
				}
			}
			break;
	}
	if (iLocal_200 < 100)
	{
		if (!PED::IS_PED_INJURED(iLocal_80))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_80, -135.4579f, -965.9833f, 116.1112f, -148.9843f, -988.0995f, 112.3862f, 3.5f, 0, 1, 0))
			{
				if (iLocal_790 <= 2 && iLocal_242 != 6)
				{
					if ((iLocal_200 > -100 && (MISC::GET_GAME_TIMER() - iLocal_187) > 8000) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_80, 2f, 2f, 3f, 0, 1, 0))
					{
						if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_80))
						{
							iLocal_201 = iLocal_200;
							iLocal_200 = -100;
							iLocal_187 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
	}
	if (!iLocal_163 && !PED::IS_PED_INJURED(iLocal_80))
	{
		if (PED::IS_PED_BEING_STEALTH_KILLED(iLocal_80))
		{
			GlobalFunc_4956();
			if (GlobalFunc_10607(&Local_247, cLocal_241, "F3A_JSTEALTH", 8, 0, 0, 0))
			{
				iLocal_163 = 1;
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_80))
	{
		Var6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		if (Var6.f_2 < 40f)
		{
			func_98("S3A_LOST");
		}
	}
}

void func_261()//Position - 0x169D9
{
	if ((!PED::IS_PED_INJURED(iLocal_80) && !ENTITY::IS_ENTITY_DEAD(iLocal_80)) && !PED::IS_PED_DEAD_OR_DYING(iLocal_80, 1))
	{
		switch (iLocal_186)
		{
			case 0:
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_225))
				{
					uLocal_225 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_ENTITY_COORDS(iLocal_80, 1), 0f, 0f, 334.8835f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_80, uLocal_225, "missheist_agency2aig_12", "look_at_plan_base", 4f, -4f, 1, 0, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_225, 1);
					iLocal_186++;
				}
				break;
			
			case 1:
				if ((MISC::GET_GAME_TIMER() - iLocal_196) > 5000 && iLocal_198 < iLocal_212)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_225))
					{
						TASK::CLEAR_PED_TASKS(iLocal_80);
					}
					uLocal_225 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_ENTITY_COORDS(iLocal_80, 1), 0f, 0f, 334.8835f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_80, uLocal_225, "missheist_agency2aig_12", iLocal_212[iLocal_198], 4f, -4f, 1, 0, 1000f, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_80, 0, 0);
					iLocal_186++;
				}
				break;
			
			case 2:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_225))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_225) > 0.2f)
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_80, 1)) < 900f)
						{
							GlobalFunc_10607(&Local_247, cLocal_241, sLocal_206[iLocal_198], 8, 0, 0, 0);
						}
						iLocal_198++;
						iLocal_186++;
					}
				}
				break;
			
			case 3:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_225))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_225) > 0.957f)
					{
						TASK::CLEAR_PED_TASKS(iLocal_80);
						uLocal_225 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_ENTITY_COORDS(iLocal_80, 1), 0f, 0f, 334.8835f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_80, uLocal_225, "missheist_agency2aig_12", "look_at_plan_base", 4f, -4f, 1, 0, 1000f, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_80, 0, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_225, 1);
						iLocal_196 = MISC::GET_GAME_TIMER();
						iLocal_186 = 1;
					}
				}
				break;
			}
	}
}

bool func_262()//Position - 0x16BA1
{
	return bLocal_179;
}

int func_263(bool bParam0)//Position - 0x16BAB
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_80) && !PED::IS_PED_INJURED(iLocal_80))
	{
		fVar1 = 1f;
		if (func_262())
		{
			fVar1 = 4f;
		}
		fVar2 = 5f;
		fVar3 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_80, 1));
		bVar4 = ((func_15(iLocal_80) && !func_15(PLAYER::PLAYER_PED_ID())) || ((func_15(PLAYER::PLAYER_PED_ID()) && func_15(iLocal_80)) && func_10(iLocal_80) != func_10(PLAYER::PLAYER_PED_ID())));
		if (fVar3 < fVar1 && !bVar4)
		{
			if (bParam0)
			{
				if (!PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID()))
				{
					GlobalFunc_164("S3A_BACKUP", 1000, 1);
				}
			}
			fLocal_182 = (fLocal_182 + MISC::GET_FRAME_TIME());
		}
		else
		{
			fLocal_182 = 0f;
		}
		if ((func_15(iLocal_80) && func_15(PLAYER::PLAYER_PED_ID())) && func_10(PLAYER::PLAYER_PED_ID()) == func_10(iLocal_80))
		{
			Local_426[func_10(iLocal_80) /*36*/].f_26 = 0;
			iVar0 = 1;
		}
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_80, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 3f, 3f, 3f, 0, 1, 0))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_80))
			{
				iVar0 = 1;
			}
		}
		if (fLocal_182 > fVar2)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_264(struct<3> Param0, float fParam3, bool bParam4, int iParam5, float fParam6, bool bParam7)//Position - 0x16CDD
{
	int iVar0;
	
	if (bParam4)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(500);
			}
		}
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			SYSTEM::WAIT(0);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		STREAMING::SET_FOCUS_POS_AND_VEL(Param0, 0f, 0f, 0f);
		iVar0 = (MISC::GET_GAME_TIMER() + iParam5);
		STREAMING::NEW_LOAD_SCENE_START_SPHERE(Param0, fParam6, 0);
		while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() && MISC::GET_GAME_TIMER() < iVar0)
		{
			SYSTEM::WAIT(0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (!bParam7)
			{
				Param0.f_2 = (Param0.f_2 + 1f);
				MISC::GET_GROUND_Z_FOR_3D_COORD(Param0, &(Param0.f_2));
			}
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, 1, 0, 0, 1);
			if (fParam3 != -1f)
			{
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
			}
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
		}
		STREAMING::CLEAR_FOCUS();
		STREAMING::NEW_LOAD_SCENE_STOP();
		MISC::CLEAR_AREA(Param0, 5000f, 1, 0, 0, 0);
		PED::INSTANTLY_FILL_PED_POPULATION();
		VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (bParam4)
	{
		CAM::DO_SCREEN_FADE_IN(800);
	}
}

void func_265()//Position - 0x16DE8
{
	iLocal_150 = 0;
	bLocal_152 = false;
	iLocal_153[0] = 0;
	iLocal_153[1] = 0;
	iLocal_158 = 0;
	iLocal_170 = 0;
	iLocal_186 = 0;
	iLocal_193 = 0;
	iLocal_194 = 0;
	iLocal_195 = 0;
	iLocal_196 = 0;
	iLocal_197 = 0;
	iLocal_198 = 1;
	iLocal_200 = 0;
}

void func_266()//Position - 0x16E20
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if ((func_15(PLAYER::PLAYER_PED_ID()) && Local_426[func_10(PLAYER::PLAYER_PED_ID()) /*36*/].f_26) && Local_426[func_10(PLAYER::PLAYER_PED_ID()) /*36*/].f_32 == PLAYER::PLAYER_PED_ID())
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_2_FOLLOW_ARCHITECT_1"))
		{
			AUDIO::STOP_AUDIO_SCENE("AGENCY_H_2_FOLLOW_ARCHITECT_1");
		}
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_2_USE_ELEVATOR"))
		{
			AUDIO::START_AUDIO_SCENE("AGENCY_H_2_USE_ELEVATOR");
		}
	}
	if (!func_11(&(Local_426[0 /*36*/]), PLAYER::PLAYER_PED_ID()))
	{
		if (MISC::GET_GAME_TIMER() - iLocal_188) > MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_85) && !CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				if (ENTITY::IS_ENTITY_ATTACHED(iLocal_85))
				{
					if (!PED::IS_PED_INJURED(iLocal_80) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_80, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < SYSTEM::POW(15f, 2f))
					{
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_80, 3000, 0, 4);
						iLocal_188 = MISC::GET_GAME_TIMER();
					}
					else if (ENTITY::DOES_ENTITY_EXIST(Local_426[0 /*36*/]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_426[0 /*36*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < SYSTEM::POW(10f, 2f))
					{
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_426[0 /*36*/], 3000, 0, 4);
						iLocal_188 = MISC::GET_GAME_TIMER();
					}
					else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_426[0 /*36*/].f_4) < 400f)
					{
						if (iLocal_160)
						{
							TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), -5f, 5f, 0f), 3000, 0, 4);
						}
						else
						{
							TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 5f, 5f, 0f), 3000, 0, 4);
						}
						iLocal_160 = !iLocal_160;
						iLocal_188 = MISC::GET_GAME_TIMER();
					}
				}
			}
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_82, 0) && !VEHICLE::IS_VEHICLE_ALARM_ACTIVATED(iLocal_82))
	{
		if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_82, 1)) < 25f && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_82)) && PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
		{
			VEHICLE::START_VEHICLE_ALARM(iLocal_82);
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
		{
			iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar0, 1), ENTITY::GET_ENTITY_COORDS(iLocal_82, 1)) < 25f)
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iLocal_82))
				{
					VEHICLE::START_VEHICLE_ALARM(iLocal_82);
				}
			}
		}
		iVar0 = 0;
	}
	switch (iLocal_192)
	{
		case 0:
			func_259();
			func_248();
			func_276();
			func_243(0);
			TASK::REQUEST_WAYPOINT_RECORDING("agency2Aground");
			STREAMING::REQUEST_ANIM_DICT("missheist_agency2aig_2");
			STREAMING::REQUEST_ANIM_DICT("missheist_agency2aig_1");
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\FBI_Heist_Mug_Architect", 0);
			iLocal_162 = 0;
			iLocal_990 = 0;
			if (bLocal_147)
			{
				iLocal_792 = 0;
				func_275();
				func_20(0);
				func_244(0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_88))
				{
					OBJECT::DELETE_OBJECT(&iLocal_88);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_571[1 /*14*/]))
				{
					if (!PED::IS_PED_INJURED(Local_571[1 /*14*/]))
					{
						TASK::CLEAR_PED_TASKS(Local_571[1 /*14*/]);
					}
				}
				while ((!func_242(Local_100, fLocal_103) || !func_258(Local_100, 0f)) || !STREAMING::HAS_ANIM_DICT_LOADED("missheist_agency2aig_2"))
				{
					SYSTEM::WAIT(0);
				}
				if (GlobalFunc_188() || GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
				{
					if (!GlobalFunc_236())
					{
						while (!func_215(Local_96, fLocal_99))
						{
							SYSTEM::WAIT(0);
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(Global_89730[1]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_89730[1], 1), Local_96) < 2500f)
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_89730[1], 1, 1);
						iLocal_81 = Global_89730[1];
						Global_89730[1] = 0;
					}
					else
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Global_89730[1]))
						{
						}
						iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(Local_96, 100f, GlobalFunc_4931(1, 1), 6);
						if (ENTITY::DOES_ENTITY_EXIST(iVar1) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar1, 1), Local_96) < 2500f)
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, 1, 1);
							iLocal_81 = iVar1;
							iVar1 = 0;
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
						{
						}
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_81))
						{
							MISC::CLEAR_AREA_OF_VEHICLES(Local_96, 5f, 0, 0, 0, 0, 0);
							while (!func_215(Local_96, fLocal_99))
							{
								SYSTEM::WAIT(0);
							}
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_81, 0))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_81);
					VEHICLE::SET_LAST_DRIVEN_VEHICLE(iLocal_81);
				}
				if (!PED::IS_PED_INJURED(iLocal_80) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_82, 0))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_80, iLocal_82, -1);
					TASK::TASK_PLAY_ANIM(iLocal_80, "missheist_agency2aig_2", "look_at_phone_c", 1000f, -8f, -1, 1, 0, 0, 0, 0);
				}
				iLocal_789 = 0;
				func_84(&(Local_426[0 /*36*/]), 1f);
				func_84(&(Local_426[1 /*36*/]), 1f);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				if (!PED::IS_PED_INJURED(Local_571[1 /*14*/]))
				{
					TASK::CLEAR_PED_TASKS(Local_571[1 /*14*/]);
				}
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				GlobalFunc_Checkpoint1(0, "Ground Floor", 0, 0, 0, 1);
				if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0) && !GlobalFunc_188())
				{
					func_264(-78.4023f, -1019.235f, 27.5447f, 109.0206f, 0, 12000, 200f, 0);
				}
				if (GlobalFunc_188())
				{
					GlobalFunc_5108(0, -1, 1);
				}
				MISC::CLEAR_AREA(Local_100, 500f, 1, 0, 0, 0);
				while (iLocal_245 != 1)
				{
					func_16();
					SYSTEM::WAIT(0);
				}
				bLocal_147 = false;
			}
			func_273();
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -78.4023f, -1019.235f, 27.5447f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 109.0206f);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_80, 15000, 0, 2);
			Local_426[0 /*36*/].f_27 = 0;
			Local_426[1 /*36*/].f_27 = 0;
			SYSTEM::SETTIMERA(0);
			SYSTEM::SETTIMERB(0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			uLocal_69 = GlobalFunc_6783(iLocal_82, 0, 0);
			iLocal_192++;
			GlobalFunc_575(500);
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				GlobalFunc_576();
			}
			break;
		
		case 1:
			if ((!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && CAM::IS_GAMEPLAY_CAM_RENDERING()) && !GlobalFunc_488())
			{
				SYSTEM::SETTIMERA(0);
				SYSTEM::SETTIMERB(0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				GlobalFunc_164("S3A_FOLLOW", 7500, 1);
				GlobalFunc_575(500);
				iLocal_192 = 3;
			}
			break;
		
		case 3:
			if (iLocal_202 == -1)
			{
				if (func_75(PLAYER::PLAYER_PED_ID()) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_82, 0))
				{
					iLocal_202 = MISC::GET_GAME_TIMER();
				}
			}
			else if ((((((MISC::GET_GAME_TIMER() - iLocal_202) > 1500 && !PED::IS_PED_INJURED(iLocal_80)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_82, 0)) && !func_23()) && !CAM::IS_GAMEPLAY_HINT_ACTIVE()) && (iLocal_205 > 3 || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_100) < 225f))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_80, 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_80, 0, 0);
					SYSTEM::SETTIMERA(0);
					RECORDING::_0x293220DA1B46CEBC(3f, 4f, 3);
					iLocal_192++;
				}
			}
			break;
		
		case 4:
			if (((!PED::IS_PED_INJURED(iLocal_80) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("agency2Aground")) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_80, 1)) && SYSTEM::TIMERA() > 2000)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_82) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_82, 0))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_82, 7);
					VEHICLE::SET_VEHICLE_ALARM(iLocal_82, 1);
				}
				HUD::REMOVE_BLIP(&uLocal_69);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_80, "agency2aground", 0, 40, -1);
				iLocal_192++;
			}
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(iLocal_80))
			{
				if (((SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_80, 1), ENTITY::GET_ENTITY_COORDS(Local_426[1 /*36*/], 1)) < 5f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_80)) && !func_11(&(Local_426[1 /*36*/]), iLocal_80)) && !Local_426[1 /*36*/].f_26)
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_80, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_426[1 /*36*/], 0f, -1.93f, -2.4f), 1, 0, 0, 1);
					TASK::CLEAR_PED_TASKS(iLocal_80);
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_426[1 /*36*/].f_4, ENTITY::GET_ENTITY_COORDS(iLocal_80, 1), 1) < 30f)
				{
					if (Local_426[1 /*36*/].f_30 == 1f)
					{
						Local_426[1 /*36*/].f_31 = 0f;
						Local_426[1 /*36*/].f_26 = 1;
					}
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_426[1 /*36*/].f_4, ENTITY::GET_ENTITY_COORDS(iLocal_80, 1), 1) < 28f)
				{
					if (Local_426[0 /*36*/].f_30 == 1f)
					{
						Local_426[0 /*36*/].f_31 = 0f;
						Local_426[0 /*36*/].f_26 = 1;
					}
				}
				if (((!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_80) && func_11(&(Local_426[1 /*36*/]), iLocal_80)) && !func_11(&(Local_426[1 /*36*/]), PLAYER::PLAYER_PED_ID())) && (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_80, 1)) > 4f || (func_15(PLAYER::PLAYER_PED_ID()) && func_10(iLocal_80) != func_10(PLAYER::PLAYER_PED_ID()))))
				{
					Local_426[0 /*36*/].f_27 = 1;
					if (!Local_426[1 /*36*/].f_27)
					{
						Local_426[1 /*36*/].f_27 = 1;
						func_92(&(Local_426[1 /*36*/]), iLocal_80);
						iLocal_192++;
					}
				}
			}
			break;
		
		case 6:
			if (!bLocal_148)
			{
				if ((func_11(&(Local_426[0 /*36*/]), PLAYER::PLAYER_PED_ID()) && Local_426[0 /*36*/].f_26) && Local_426[0 /*36*/].f_32 == PLAYER::PLAYER_PED_ID())
				{
					func_269();
					bLocal_148 = true;
				}
			}
			if (Local_426[1 /*36*/].f_30 > 0.5f && Local_426[0 /*36*/].f_30 > 0.5f)
			{
				func_2(1);
			}
			break;
	}
	if (!iLocal_990)
	{
		if ((((!PED::IS_PED_INJURED(iLocal_80) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_80, 0)) && !GlobalFunc_111()) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_80, 1), Local_100) < 400f) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_80, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 900f)
		{
			if (GlobalFunc_10607(&Local_247, cLocal_241, "F3A_SITE", 8, 0, 0, 0))
			{
				iLocal_990 = 1;
			}
		}
	}
	if (((PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0) != 7 && func_75(PLAYER::PLAYER_PED_ID())) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_977) < 625f) && iLocal_205 < 7)
	{
		if (SYSTEM::VDIST2(MISC::_0x21C235BC64831E5A(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_977, Local_980, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 49f)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 263, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 264, 1);
		}
		if ((!iLocal_162 && !PED::IS_PED_INJURED(Local_571[1 /*14*/])) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (SYSTEM::VDIST2(MISC::_0x21C235BC64831E5A(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_977, Local_980, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 25f)
			{
				if (!GlobalFunc_111())
				{
					iLocal_162 = 1;
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_80))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_80, -183.1873f, -1022.583f, 28.03928f, 6f, 10f, 3f, 0, 1, 0))
		{
			STREAMING::REQUEST_COLLISION_AT_COORD(-184.8105f, -1019.519f, 28.28928f);
			STREAMING::REQUEST_ADDITIONAL_COLLISION_AT_COORD(-184.8105f, -1019.519f, 28.28928f);
		}
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE() || HUD::DOES_BLIP_EXIST(uLocal_73))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_80, 0.3f);
		}
	}
	if (Local_426[0 /*36*/].f_27 == 1)
	{
		if (func_11(&(Local_426[0 /*36*/]), PLAYER::PLAYER_PED_ID()))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_72))
			{
				HUD::CLEAR_PRINTS();
				HUD::REMOVE_BLIP(&uLocal_72);
			}
			func_253(&Local_418);
			if (Local_426[0 /*36*/].f_26 && GlobalFunc_572(Local_418))
			{
				HUD::CLEAR_HELP(1);
			}
		}
	}
	if (GlobalFunc_572(Local_418) && !func_15(PLAYER::PLAYER_PED_ID()))
	{
		HUD::CLEAR_HELP(1);
		Local_418.f_1 = 0;
	}
	if ((func_11(&(Local_426[1 /*36*/]), iLocal_80) && Local_426[1 /*36*/].f_30 == 1f) && !ENTITY::IS_ENTITY_ATTACHED(iLocal_80))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_80, -183.1782f, -1012.137f, 113.139f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(iLocal_80, 341.0595f);
	}
	if (!PED::IS_PED_INJURED(Local_571[0 /*14*/]))
	{
		if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -110.5488f, -1025.63f, 26.27515f, -96.83872f, -1052.73f, 36.3257f, 15f, 0, 1, 0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())) && PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) != iLocal_82)
		{
			if (!iLocal_164)
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_73))
				{
					GlobalFunc_200(&Local_247, 2);
					GlobalFunc_173(&Local_247, 2, Local_571[0 /*14*/], "FIBConstruction", 0, 1);
					if (GlobalFunc_10607(&Local_247, cLocal_241, "F3A_SIGN", 8, 0, 0, 0))
					{
						CAM::SET_GAMEPLAY_ENTITY_HINT(Local_571[0 /*14*/], 0f, 0f, 0.5f, 1, 2000, 2000, 2000, 0);
						TASK::OPEN_SEQUENCE_TASK(&uVar2);
						TASK::TASK_STAND_STILL(0, 2000);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::TASK_PLAY_ANIM(0, "missheist_agency2aig_1", "direct_traffic_c", 8f, -8f, -1, 0, 0, 0, 0, 0);
						TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_CLIPBOARD", 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar2);
						TASK::TASK_PERFORM_SEQUENCE(Local_571[0 /*14*/], uVar2);
						TASK::CLEAR_SEQUENCE_TASK(&uVar2);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
						SYSTEM::SETTIMERB(0);
						iLocal_164 = 1;
					}
				}
			}
			else if (SYSTEM::TIMERB() > 3000)
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_73))
				{
					HUD::CLEAR_PRINTS();
					uLocal_73 = GlobalFunc_5104(-99.0973f, -1014.745f, 26.2727f, 0);
				}
				else if (!GlobalFunc_111() && !func_23())
				{
					func_268(&Local_414);
				}
				if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				}
			}
		}
		else if ((!PED::IS_PED_USING_SCENARIO(Local_571[0 /*14*/], "WORLD_HUMAN_CLIPBOARD") && !Local_571[0 /*14*/].f_10) && !func_15(PLAYER::PLAYER_PED_ID()))
		{
			TASK::TASK_START_SCENARIO_IN_PLACE(Local_571[0 /*14*/], "WORLD_HUMAN_CLIPBOARD", 0, 0);
			Local_571[0 /*14*/].f_10 = 1;
		}
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_73))
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_69))
		{
			HUD::REMOVE_BLIP(&uLocal_69);
		}
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -99.0973f, -1014.745f, 26.2727f, Global_18, 0, 1, 0))
		{
			HUD::CLEAR_PRINTS();
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			SYSTEM::WAIT(1000);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			HUD::REMOVE_BLIP(&uLocal_73);
			func_268(&Local_416);
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			HUD::CLEAR_PRINTS();
			if (!PED::IS_PED_INJURED(Local_571[0 /*14*/]))
			{
				GlobalFunc_5122(Local_571[0 /*14*/], "GENERIC_INSULT_MED", 6);
			}
			HUD::REMOVE_BLIP(&uLocal_73);
		}
	}
	else if (!HUD::DOES_BLIP_EXIST(uLocal_69) && !PED::IS_PED_INJURED(iLocal_80))
	{
		uLocal_69 = GlobalFunc_6797(iLocal_80, 0, 145);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_69, "S3A_ARCLABEL");
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && Local_416.f_1)
	{
		Local_416.f_1 = 0;
		HUD::CLEAR_PRINTS();
	}
	if (!bLocal_147)
	{
		if (func_263(1) && !func_15(iLocal_80))
		{
			func_2(5);
		}
		if (func_11(&(Local_426[1 /*36*/]), PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_80, -182.8385f, -1013.135f, 27.62564f, -186.0956f, -1021.54f, 32.53928f, 4.25f, 0, 1, 0))
		{
			func_2(5);
		}
	}
	if (CAM::DOES_CAM_EXIST(uLocal_90))
	{
		if (CAM::IS_CAM_ACTIVE(uLocal_90))
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		}
	}
	if (func_133())
	{
		func_2(6);
	}
	func_97();
}


void func_268(var uParam0)//Position - 0x17DD4
{
	if (!uParam0->f_1)
	{
		GlobalFunc_164(*uParam0, 7500, 1);
		uParam0->f_1 = 1;
	}
}

void func_269()//Position - 0x17DF4
{
	STREAMING::REQUEST_MODEL(joaat("s_m_y_construct_01"));
	STREAMING::REQUEST_MODEL(joaat("s_m_y_construct_02"));
	STREAMING::REQUEST_ANIM_DICT("missheist_agency2aig_4");
}




void func_273()//Position - 0x17E8B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_426)
	{
		Local_426[iVar0 /*36*/].f_33 = -1;
		iVar0++;
	}
}


void func_275()//Position - 0x17ECD
{
	bLocal_148 = false;
	iLocal_149 = 0;
	iLocal_150 = 0;
	iLocal_151 = 0;
	bLocal_152 = false;
	iLocal_153[0] = 0;
	iLocal_153[1] = 0;
	iLocal_156 = 0;
	iLocal_158 = 0;
	iLocal_159 = 0;
	iLocal_160 = 0;
	iLocal_161 = 0;
	iLocal_162 = 0;
	iLocal_163 = 0;
	iLocal_164 = 0;
	iLocal_165 = 0;
	iLocal_168 = 0;
	fLocal_181 = 0f;
	iLocal_184 = 0;
	iLocal_185 = 0;
	iLocal_186 = 0;
	iLocal_187 = 0;
	iLocal_188 = 0;
	iLocal_189 = 0;
	fLocal_182 = 0f;
	iLocal_192 = 0;
	iLocal_193 = 0;
	iLocal_194 = 0;
	iLocal_195 = 0;
	iLocal_196 = 0;
	iLocal_197 = 0;
	iLocal_198 = 1;
	iLocal_199 = 0;
	iLocal_200 = 0;
	iLocal_201 = -1;
	iLocal_202 = -1;
	iLocal_203 = -1;
	iLocal_204 = 0;
	iLocal_205 = 0;
	iLocal_168 = 0;
	iLocal_169 = 0;
	iLocal_170 = 0;
	bLocal_173 = false;
	bLocal_174 = false;
	iLocal_175 = 0;
	iLocal_176 = 0;
	iLocal_177 = 0;
}

void func_276()//Position - 0x17F68
{
	bLocal_148 = false;
	iLocal_149 = 0;
	iLocal_160 = 0;
	iLocal_162 = 0;
	iLocal_164 = 0;
	iLocal_204 = 0;
	iLocal_205 = 0;
	iLocal_187 = 0;
	iLocal_188 = 0;
	iLocal_189 = 0;
	iLocal_202 = -1;
	iLocal_203 = -1;
}

void func_277()//Position - 0x17F94
{
	var uVar0;
	
	if (iLocal_790 != 8 && iLocal_790 != 7)
	{
		if ((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)) && (!WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()) || (!PED::IS_PED_INJURED(iLocal_80) && MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_80, 1), 3f, 1))))
		{
			if (iLocal_790 != 6)
			{
				iLocal_790 = 7;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_80))
		{
			if ((PED::IS_PED_INJURED(iLocal_80) || PED::IS_PED_RAGDOLL(iLocal_80)) || ENTITY::IS_ENTITY_DEAD(iLocal_80))
			{
				if (PED::IS_PED_INJURED(iLocal_80))
				{
				}
				if (PED::IS_PED_RAGDOLL(iLocal_80))
				{
				}
				iLocal_790 = 7;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_80))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_80, PLAYER::PLAYER_PED_ID(), 1))
			{
				iLocal_790 = 7;
			}
		}
		if (iLocal_790 > 2)
		{
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_80, Local_134, Local_137, fLocal_140, 0, 1, 0))
			{
				iLocal_790 = 7;
			}
		}
	}
	switch (iLocal_790)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT(sLocal_236);
			STREAMING::REQUEST_ANIM_DICT(sLocal_237);
			if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_236) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_237))
			{
				iLocal_167 = 0;
				iLocal_790 = 1;
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_80))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_80, Local_134, Local_137, fLocal_140, 0, 1, 0))
				{
					iLocal_790 = 2;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_80))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_80, Local_134, Local_137, fLocal_140, 0, 1, 0))
				{
					if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
					{
						func_253(&Local_420);
						if ((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_80) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_80)) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_80, 1)) < 15f)
						{
							HUD::CLEAR_HELP(1);
							GlobalFunc_4956();
							if (GlobalFunc_10607(&Local_247, cLocal_241, "F3A_FMUG", 8, 0, 0, 0))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_80, 1);
								iLocal_790 = 4;
							}
						}
					}
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_134, Local_137, fLocal_140, 0, 1, 0) && GlobalFunc_572(Local_420))
					{
						HUD::CLEAR_HELP(1);
						Local_420.f_1 = 0;
					}
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_80))
			{
				if (!PED::IS_PED_FACING_PED(iLocal_80, PLAYER::PLAYER_PED_ID(), 20f))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_80, -1519143300) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_80, -1519143300) != 2)
					{
						TASK::TASK_HANDS_UP(iLocal_80, 10000, PLAYER::PLAYER_PED_ID(), -1, 0);
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_80, -1519143300) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_80, -1519143300) == 2)
				{
					iLocal_790 = 6;
				}
			}
			break;
		
		case 4:
			TASK::TASK_LOOK_AT_ENTITY(iLocal_80, PLAYER::PLAYER_PED_ID(), -1, 16, 4);
			TASK::OPEN_SEQUENCE_TASK(&uVar0);
			if (ENTITY::GET_ENTITY_SPEED(iLocal_80) > 1f)
			{
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_80, 0f, 1f, 0f), 1f, 20000, 1193033728, 1056964608);
				TASK::TASK_STAND_STILL(0, 500);
			}
			else
			{
				TASK::TASK_STAND_STILL(0, 1000);
			}
			TASK::TASK_PLAY_ANIM(0, sLocal_237, "handsup_enter", 4f, -8f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, sLocal_237, "handsup_loop", 8f, -8f, -1, 1, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_80, uVar0);
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
			iLocal_790 = 5;
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(iLocal_80))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_80, sLocal_237, "handsup_loop", 3))
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10607(&Local_247, cLocal_241, "F3A_MUGG", 8, 0, 0, 0))
						{
							TASK::TASK_PLAY_ANIM(iLocal_80, sLocal_237, "handsup_exit", 8f, -4f, -1, 0, 0, 0, 0, 0);
						}
					}
				}
				else if (iLocal_789 < 1)
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_80, sLocal_237, "handsup_exit", 3))
					{
						if (!bLocal_152)
						{
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_80, sLocal_237, "handsup_exit") > 0.255f)
							{
								func_13(iLocal_80);
								iLocal_789 = 1;
								PED::SET_PED_CONFIG_FLAG(iLocal_80, 318, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_80, 8, 0);
								iLocal_790 = 6;
								bLocal_152 = true;
							}
						}
					}
				}
			}
			break;
		
		case 6:
			if ((!PED::IS_PED_INJURED(iLocal_80) && !ENTITY::IS_ENTITY_DEAD(iLocal_80)) && bLocal_152)
			{
				if (iLocal_791 != 2)
				{
					if (((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)) && (!WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()) || func_262())) && MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_80, 1), 3f, 1))
					{
						iLocal_791 = 2;
						TASK::TASK_PLAY_ANIM(iLocal_80, sLocal_236, sLocal_240, 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					if (!iLocal_167 && (MISC::GET_GAME_TIMER() - iLocal_794) < 1000)
					{
						if (!GlobalFunc_111() && !func_23())
						{
							if (!iLocal_156)
							{
								if (GlobalFunc_10607(&Local_247, cLocal_241, "F3A_BRIEF", 8, 0, 0, 0))
								{
									iLocal_167 = 1;
								}
							}
							else
							{
								iLocal_167 = 1;
							}
						}
					}
				}
				switch (iLocal_791)
				{
					case 0:
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_80, sLocal_237, "handsup_exit", 3))
						{
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_80, sLocal_237, "handsup_exit") > 0.9f)
							{
								TASK::TASK_PLAY_ANIM(iLocal_80, sLocal_236, sLocal_238, 8f, -4f, -1, 1, 0, 0, 0, 0);
							}
						}
						else
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_80, sLocal_236, sLocal_238, 3))
							{
								TASK::TASK_PLAY_ANIM(iLocal_80, sLocal_236, sLocal_238, 8f, -4f, -1, 1, 0, 0, 0, 0);
							}
							if ((MISC::GET_GAME_TIMER() - iLocal_235) > 1000)
							{
								if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_80, 1)) < 15f)
								{
									if ((WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_80) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_80))) && func_262())
									{
										TASK::TASK_PLAY_ANIM(iLocal_80, sLocal_237, sLocal_239, 4f, -4f, -1, 49, 0, 0, 0, 0);
										iLocal_235 = MISC::GET_GAME_TIMER();
										iLocal_791 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_80, sLocal_236, sLocal_238, 3))
						{
							TASK::TASK_PLAY_ANIM(iLocal_80, sLocal_236, sLocal_238, 8f, -4f, -1, 1, 0, 0, 0, 0);
						}
						if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && func_262())
						{
							iLocal_235 = MISC::GET_GAME_TIMER();
						}
						if ((MISC::GET_GAME_TIMER() - iLocal_235) > 3000)
						{
							if (((SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_80, 1)) > 15f || !WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)) || !(PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_80) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_80))) || !func_262())
							{
								TASK::CLEAR_PED_TASKS(iLocal_80);
								TASK::TASK_PLAY_ANIM(iLocal_80, sLocal_236, sLocal_238, 4f, -4f, -1, 1, 0, 0, 0, 0);
								iLocal_791 = 0;
							}
						}
						break;
					
					case 2:
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_80, sLocal_236, sLocal_240, 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_80, sLocal_236, sLocal_240) > 0.9f)
						{
							iLocal_791 = 0;
						}
						break;
					}
			}
			break;
		
		case 7:
			if (!PED::IS_PED_INJURED(iLocal_80))
			{
				TASK::CLEAR_PED_TASKS(iLocal_80);
				iLocal_790 = 8;
				bLocal_152 = false;
			}
			if (iLocal_242 == 1)
			{
				func_2(6);
			}
			break;
	}
}

void func_278()//Position - 0x18689
{
	if ((MISC::GET_GAME_TIMER() - iLocal_180) > 500)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_80) && !PED::IS_PED_INJURED(iLocal_80)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			bLocal_179 = (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_80, PLAYER::PLAYER_PED_ID()) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_80, 1)) < 100f);
			iLocal_180 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_279()//Position - 0x186F2
{
	int iVar0;
	
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_1024) > 1000)
		{
			iVar0 = 0;
			while (iVar0 < iLocal_993)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_993[iVar0]))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1011[iVar0 /*3*/]) < 10000f && !CAM::IS_SPHERE_VISIBLE(Local_1011[iVar0 /*3*/], 10f))
					{
						if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Local_1011[iVar0 /*3*/], 1f, joaat("prop_fnclink_03gate4"), 0))
						{
							iLocal_993[iVar0] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_1011[iVar0 /*3*/], 2f, joaat("prop_fnclink_03gate4"), 1, 0, 1);
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_993[iVar0], 1, 1);
							ENTITY::SET_ENTITY_ROTATION(iLocal_993[iVar0], Local_998[iVar0 /*3*/], 2, 1);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_993[iVar0], 1);
						}
					}
				}
				else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1011[iVar0 /*3*/]) > 22500f)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_993[iVar0], 0);
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_993[iVar0]));
				}
				iVar0++;
			}
			iLocal_1024 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_280()//Position - 0x1880D
{
	if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		switch (iLocal_246)
		{
			case 0:
				if ((iLocal_242 == 3 || iLocal_242 == 4) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_144) < 90000f)
				{
					if (((!ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]) || !ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1])) || !ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[0])) || !ENTITY::DOES_ENTITY_EXIST(iLocal_84))
					{
						STREAMING::REQUEST_ANIM_DICT("MISSAH_2_EXT_ALTLEADINOUT");
						STREAMING::REQUEST_MODEL(joaat("prop_cs_walking_stick"));
						STREAMING::REQUEST_MODEL(GlobalFunc_4946(12));
						STREAMING::REQUEST_MODEL(GlobalFunc_4917(0));
						STREAMING::REQUEST_MODEL(GlobalFunc_4931(0, 0));
						if ((((STREAMING::HAS_ANIM_DICT_LOADED("MISSAH_2_EXT_ALTLEADINOUT") && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_walking_stick"))) && STREAMING::HAS_MODEL_LOADED(GlobalFunc_4946(12))) && STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(0))) && STREAMING::HAS_MODEL_LOADED(GlobalFunc_4931(0, 0)))
						{
							uLocal_93 = INTERIOR::GET_INTERIOR_AT_COORDS(714.0795f, -964.6153f, 29.3953f);
							INTERIOR::PIN_INTERIOR_IN_MEMORY(uLocal_93);
							GlobalFunc_6800(&(Global_86864.f_9[0]), 12, 707.35f, -967.2f, 30.4f, 0, 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(12));
							func_572(Global_86864.f_9[0], iLocal_95);
							TASK::TASK_PLAY_ANIM_ADVANCED(Global_86864.f_9[0], "MISSAH_2_EXT_ALTLEADINOUT", "HACK_LOOP", 707.35f, -967.2f, 30.4f, 0f, 0f, 175f, 8f, -8f, -1, 262145, 0, 2, 0);
							Global_86864.f_28[0] = OBJECT::CREATE_OBJECT(joaat("prop_cs_walking_stick"), 706.9874f, -967.0945f, 30.4f, 1, 1, 0);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_walking_stick"));
							ENTITY::SET_ENTITY_COORDS(Global_86864.f_28[0], 706.9874f, -967.0945f, 30.4f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_ROTATION(Global_86864.f_28[0], 90f, 0f, 160f, 2, 1);
							ENTITY::FREEZE_ENTITY_POSITION(Global_86864.f_28[0], 1);
							func_302(&(Global_86864.f_9[1]), 0, 705.431f, -965.364f, 30.415f, 0f, 0, 0, 0);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4917(0));
							func_572(Global_86864.f_9[1], iLocal_95);
							TASK::TASK_PLAY_ANIM_ADVANCED(Global_86864.f_9[1], "MISSAH_2_EXT_ALTLEADINOUT", "SOFA_LOOP", 705.431f, -965.364f, 30.415f, 0f, 0f, -75.96f, 8f, -8f, -1, 262145, 0, 2, 0);
							MISC::CLEAR_AREA_OF_VEHICLES(719.9169f, -982.8645f, 23.1393f, 7.5f, 0, 0, 0, 0, 0);
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_84))
							{
								if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_84, PLAYER::PLAYER_PED_ID(), 150f, 150f, 150f, 0, 1, 0))
								{
									GlobalFunc_7695(24);
									GlobalFunc_9756(&iLocal_84, 0, 706.629f, -979.8341f, 23.1355f, 45.3224f, 1, 0);
									GlobalFunc_9754(iLocal_84, 706.629f, -979.8341f, 23.1355f, 45.3224f, 24, 0);
								}
							}
							else
							{
								GlobalFunc_7695(24);
								GlobalFunc_9756(&iLocal_84, 0, 706.629f, -979.8341f, 23.1355f, 45.3224f, 1, 0);
								GlobalFunc_9754(iLocal_84, 706.629f, -979.8341f, 23.1355f, 45.3224f, 24, 0);
							}
							Global_86864[0] = iLocal_81;
							iLocal_246 = 2;
						}
					}
				}
				break;
			
			case 1:
				if (INTERIOR::IS_INTERIOR_READY(uLocal_93))
				{
					INTERIOR::PIN_INTERIOR_IN_MEMORY(uLocal_93);
					STREAMING::SET_INTERIOR_ACTIVE(uLocal_93, 1);
					iLocal_246 = 2;
				}
				break;
			
			case 2:
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_144) > 22500f || (iLocal_242 != 3 && iLocal_242 != 4))
				{
					if (INTERIOR::IS_INTERIOR_READY(uLocal_93))
					{
						INTERIOR::UNPIN_INTERIOR(uLocal_93);
						STREAMING::SET_INTERIOR_ACTIVE(uLocal_93, 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
					{
						PED::DELETE_PED(&(Global_86864.f_9[0]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1]))
					{
						PED::DELETE_PED(&(Global_86864.f_9[1]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[0]))
					{
						OBJECT::DELETE_OBJECT(&(Global_86864.f_28[0]));
					}
					STREAMING::REMOVE_ANIM_DICT("MISSAH_2_EXT_ALTLEADINOUT");
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_walking_stick"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(12));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4917(0));
					iLocal_246 = 0;
				}
				break;
			}
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || iLocal_246 != 2)
	{
		if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0) && !func_137(PLAYER::PLAYER_PED_ID()))
		{
			if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(-826072862) != 0f)
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-826072862, 0f, 1, 0);
			}
			if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(763780711) != 0f)
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(763780711, 0f, 1, 0);
			}
			if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-826072862) != 1)
			{
				GlobalFunc_10617(62, 1);
			}
			if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(763780711) != 1)
			{
				GlobalFunc_10617(63, 1);
			}
		}
	}
	else
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-826072862) != 0)
		{
			GlobalFunc_10617(62, 0);
		}
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(763780711) != 0)
		{
			GlobalFunc_10617(63, 0);
		}
	}
	if ((iLocal_242 == 3 && (iLocal_192 > 4 || iLocal_192 < 0)) || iLocal_242 == 4)
	{
		if (func_137(PLAYER::PLAYER_PED_ID()))
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
			PLAYER::SET_MAX_WANTED_LEVEL(0);
		}
		else
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			PLAYER::SET_MAX_WANTED_LEVEL(5);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
	{
		if (PED::IS_PED_INJURED(Global_86864.f_9[0]) || ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[0]))
		{
			func_98("CMN_LDIED");
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1]))
	{
		if (PED::IS_PED_INJURED(Global_86864.f_9[1]) || ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[1]))
		{
			func_98("CMN_MDIED");
		}
	}
}






















int func_302(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x1D354
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
			GlobalFunc_8364(*uParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
			GlobalFunc_11317(*uParam0);
			GlobalFunc_7694(*uParam0, 1, 0);
			GlobalFunc_7693(*uParam0);
			GlobalFunc_7707(*uParam0);
			GlobalFunc_11332(*uParam0, bParam8);
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














































































































































































































































































void func_572(int iParam0, int iParam1)//Position - 0x665E2
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iParam1, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			PED::SET_PED_AS_ENEMY(iParam0, 0);
			PED::SET_PED_CAN_BE_TARGETTED(iParam0, 0);
			PED::SET_PED_SUFFERS_CRITICAL_HITS(iParam0, 0);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iParam0, 0, 0);
			PED::SET_PED_CAN_RAGDOLL(iParam0, 1);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 128);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 16);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 1);
			PED::SET_PED_DIES_WHEN_INJURED(iParam0, 0);
			PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
			PED::SET_PED_CONFIG_FLAG(iParam0, 132, 1);
			PED::SET_PED_CONFIG_FLAG(iParam0, 208, 1);
			PED::SET_PED_CONFIG_FLAG(iParam0, 118, 0);
			PED::SET_PED_CONFIG_FLAG(iParam0, 174, 1);
			PED::SET_PED_CONFIG_FLAG(iParam0, 169, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iParam1);
		}
	}
}




bool func_576(var uParam0)//Position - 0x66799
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		STREAMING::REQUEST_MODEL(joaat("prop_conslift_lift"));
		STREAMING::REQUEST_MODEL(joaat("prop_sub_release"));
		STREAMING::REQUEST_ANIM_DICT("missagency_heist_2a");
		if ((STREAMING::HAS_MODEL_LOADED(joaat("prop_conslift_lift")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_sub_release"))) && STREAMING::HAS_ANIM_DICT_LOADED("missagency_heist_2a"))
		{
			*uParam0 = OBJECT::CREATE_OBJECT(joaat("prop_conslift_lift"), uParam0->f_4, 1, 1, 0);
			ENTITY::SET_CAN_CLIMB_ON_ENTITY(*uParam0, 0);
			if (uParam0->f_30 == 1f)
			{
				ENTITY::SET_ENTITY_COORDS(*uParam0, uParam0->f_7, 1, 0, 0, 1);
			}
			else if (uParam0->f_30 == 0f)
			{
				ENTITY::SET_ENTITY_COORDS(*uParam0, uParam0->f_4, 1, 0, 0, 1);
			}
			ENTITY::SET_ENTITY_ROTATION(*uParam0, uParam0->f_10, 2, 1);
			ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 1);
			uParam0->f_1 = OBJECT::CREATE_OBJECT(joaat("prop_sub_release"), uParam0->f_4, 1, 1, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_1, *uParam0, 0, Local_782, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
		}
	}
	return (ENTITY::DOES_ENTITY_EXIST(*uParam0) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_1));
}

void func_577()//Position - 0x6689F
{
	func_578(&(Local_426[0 /*36*/]), -182.19f, -1016.54f, 31.36f, -182.19f, -1016.19f, 115.51f, 0f, 0f, 70.09f, 1, 1, 0);
	func_578(&(Local_426[1 /*36*/]), -182.19f, -1016.54f, 31.36f, -182.19f, -1016.19f, 115.51f, 0f, 0f, -110.09f, 1, 1, 1);
	func_578(&(Local_426[2 /*36*/]), -158.78f, -942.25f, 31.36f, -158.78f, -942.25f, 115.51f, 0f, 0f, 160.09f, 1, 1, 1);
	func_578(&(Local_426[3 /*36*/]), -158.78f, -942.25f, 31.36f, -158.78f, -942.25f, 115.51f, 0f, 0f, -20.09f, 1, 1, 0);
	Local_426[0 /*36*/].f_13 = { -0.8f, -1.72f, -0.8f };
	Local_426[0 /*36*/].f_16 = { -1.44f, 0f, 166.32f };
	Local_426[1 /*36*/].f_13 = { 0.8f, -1.72f, -0.8f };
	Local_426[1 /*36*/].f_16 = { -1.44f, 0f, 153.36f };
	Local_426[2 /*36*/].f_13 = { 0.8f, -1.72f, -0.8f };
	Local_426[2 /*36*/].f_16 = { -1.44f, 0f, 64.44f };
	Local_426[3 /*36*/].f_13 = { -0.8f, -1.72f, -0.8f };
	Local_426[3 /*36*/].f_16 = { -1.44f, 0f, 75.6f };
}

void func_578(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, bool bParam10, int iParam11, int iParam12)//Position - 0x66A27
{
	uParam0->f_4 = { Param1 };
	uParam0->f_7 = { Param4 };
	if (uParam0->f_4.f_2 > uParam0->f_7.f_2)
	{
		uParam0->f_4 = { Param4 };
		uParam0->f_7 = { Param1 };
	}
	if (bParam10)
	{
		uParam0->f_30 = 1f;
		uParam0->f_31 = 0f;
	}
	else
	{
		uParam0->f_30 = 0f;
		uParam0->f_31 = 1f;
	}
	uParam0->f_10 = { Param7 };
	uParam0->f_26 = 0;
	uParam0->f_27 = iParam11;
	uParam0->f_28 = iParam12;
	uParam0->f_29 = 0;
	uParam0->f_19 = { -2.48f, -2f, -2.6f };
	uParam0->f_22 = { 2.48f, -2f, 0.4f };
	uParam0->f_25 = 3f;
	uParam0->f_32 = 0;
	uParam0->f_33 = -1;
	uParam0->f_34 = 0;
}

void func_579()//Position - 0x66AE1
{
	Local_796[0 /*6*/] = { func_580(-58.59f, -961.48f, 28.37f, -159.73f, -924.63f, 28.4f) };
	Local_796[1 /*6*/] = { func_580(-159.73f, -924.63f, 28.4f, -230.83f, -1120.06f, 21.99f) };
	Local_796[2 /*6*/] = { func_580(-230.83f, -1120.06f, 21.99f, -136.78f, -1119.1f, 24f) };
	Local_796[3 /*6*/] = { func_580(-136.78f, -1119.1f, 24f, -124.51f, -1114.89f, 24.68f) };
	Local_796[4 /*6*/] = { func_580(-124.51f, -1114.89f, 24.68f, -112.83f, -1098.48f, 24.81f) };
	Local_796[5 /*6*/] = { func_580(-112.83f, -1098.48f, 24.81f, -102.21f, -1077.07f, 25.84f) };
	Local_796[6 /*6*/] = { func_580(-102.21f, -1077.07f, 25.84f, -58.59f, -961.48f, 28.37f) };
}

struct<6> func_580(struct<3> Param0, struct<3> Param3)//Position - 0x66C0F
{
	struct<6> Var0;
	
	Var0 = { Param0 };
	Var0.f_3 = { Param3 };
	return Var0;
}

void func_581()//Position - 0x66C2D
{
	int iVar0;
	
	Local_998[0 /*3*/] = { 0f, 0.0001f, 64.0457f };
	Local_998[1 /*3*/] = { 0f, 0.0002f, -99.6494f };
	Local_998[2 /*3*/] = { -0.0002f, 0.0003f, -60.12f };
	Local_998[3 /*3*/] = { -0.0014f, 0f, -179.027f };
	Local_1011[0 /*3*/] = { -83.0655f, -1029.296f, 28.8274f };
	Local_1011[1 /*3*/] = { -79.116f, -1017.857f, 29.2833f };
	Local_1011[2 /*3*/] = { -226.1044f, -1122.346f, 23.6851f };
	Local_1011[3 /*3*/] = { -213.9111f, -1122.364f, 23.6257f };
	iVar0 = 0;
	while (iVar0 < iLocal_993)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_993[iVar0]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_993[iVar0]));
		}
		iVar0++;
	}
	iLocal_1024 = 0;
}

void func_582()//Position - 0x66D12
{
	int iVar0;
	
	func_628();
	STREAMING::REQUEST_MODEL(joaat("prop_ld_case_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_chair_06"));
	STREAMING::REQUEST_MODEL(joaat("prop_hard_hat_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_tool_box_05"));
	STREAMING::REQUEST_MODEL(joaat("u_m_m_fibarchitect"));
	HUD::REQUEST_ADDITIONAL_TEXT("H1SET3A", 0);
	HUD::REQUEST_ADDITIONAL_TEXT(cLocal_241, 6);
	WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_briefcase_02"), 8, 0);
	while ((((((((!STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_case_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_chair_06"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_hard_hat_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_tool_box_05"))) || !STREAMING::HAS_MODEL_LOADED(joaat("u_m_m_fibarchitect"))) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Freight_Elevator", 0)) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(0)) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6)) || !AUDIO::LOAD_STREAM("Construction_Site_Stream", "FBI_HEIST_SOUNDSET"))
	{
		SYSTEM::WAIT(0);
	}
	iLocal_212[0] = "look_at_plan_a";
	iLocal_212[1] = "look_at_plan_b";
	iLocal_212[2] = "look_at_plan_c";
	iLocal_212[3] = "look_at_plan_d";
	iLocal_212[4] = "look_at_plan_e";
	sLocal_206[0] = "F3A_ARCH";
	sLocal_206[1] = "F3A_ARCH2";
	sLocal_206[2] = "F3A_ARCH3";
	sLocal_206[3] = "F3A_ARCH4";
	sLocal_206[4] = "F3A_ARCH5";
	AUDIO::PLAY_STREAM_FROM_POSITION(-146f, -990f, 33f);
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PED::SET_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID(), 0, 7, 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		if (GlobalFunc_Is_Mission_Retry())
		{
			CUTSCENE::REMOVE_CUTSCENE();
			GlobalFunc_570(500);
			GlobalFunc_5128(0);
			iVar0 = GlobalFunc_Get_Mission_Fail_Checkpoint();
			if (Global_84544 == 1)
			{
				iVar0++;
			}
			if (iVar0 > 3)
			{
				GlobalFunc_5116(Local_144, 122.1115f, 1, 0);
				PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
				GlobalFunc_5108(0, -1, 1);
				func_138();
			}
			else
			{
				switch (iVar0)
				{
					case 0:
						Local_130 = { -139.9581f, -971.2977f, 113.133f };
						fLocal_133 = 332.4719f;
						iLocal_242 = 0;
						break;
					
					case 1:
						Local_130 = { -180.1966f, -1017.039f, 113.2072f };
						fLocal_133 = 340.09f;
						iLocal_242 = 1;
						AUDIO::TRIGGER_MUSIC_EVENT("AH2A_FIRST_FLOOR_RESTART");
						break;
					
					case 2:
						Local_130 = { -139.9581f, -971.2977f, 113.133f };
						fLocal_133 = 332.4719f;
						iLocal_242 = 2;
						GlobalFunc_Checkpoint1(2, "Architect mugged", 0, 0, 0, 1);
						break;
					
					case 3:
						if (!Global_84544)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Global_86864[1]))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[1], 1, 1);
								iLocal_82 = Global_86864[1];
								Global_86864[1] = 0;
							}
						}
						Local_130 = { -77.7099f, -1019.901f, 27.5262f };
						fLocal_133 = 315.6337f;
						iLocal_242 = 3;
						break;
				}
				bLocal_147 = true;
				GlobalFunc_5116(Local_130, fLocal_133, 1, 0);
			}
		}
	}
	if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		GlobalFunc_7621(70, 1, 0, 1, 0);
		GlobalFunc_7621(71, 1, 0, 1, 0);
		GlobalFunc_7621(73, 1, 0, 1, 0);
		GlobalFunc_7621(72, 0, 0, 1, 0);
		GlobalFunc_7621(74, 0, 0, 1, 0);
		GlobalFunc_10617(62, 0);
		GlobalFunc_10617(63, 0);
	}
	PATHFIND::SET_ROADS_IN_AREA(-19.16f, -969.91f, 28.3f, -111.44f, -1114.63f, 24.77f, 0, 1);
	MISC::CLEAR_AREA(Local_100, 500f, 1, 0, 0, 0);
	GRAPHICS::WASH_DECALS_IN_RANGE(Local_100, 1000f, 1f);
	while (!func_585(1, 1))
	{
		SYSTEM::WAIT(0);
	}
	uLocal_86 = OBJECT::CREATE_OBJECT(joaat("prop_chair_06"), -90.855f, -1031.863f, 27.0969f, 1, 1, 0);
	ENTITY::SET_ENTITY_QUATERNION(uLocal_86, 0f, 0f, 0.7268f, -0.6868f);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_86, 1);
	uLocal_87 = OBJECT::CREATE_OBJECT(joaat("prop_tool_box_05"), -92.0505f, -1032.05f, 27.1212f, 1, 1, 0);
	ENTITY::SET_ENTITY_QUATERNION(uLocal_87, 0f, 0f, 0.7665f, 0.6423f);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_87, 1);
	GlobalFunc_173(&Local_247, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	GlobalFunc_173(&Local_247, 3, 0, "MICHAEL", 0, 1);
	GlobalFunc_563(1);
	Local_104[0 /*3*/] = { -179.206f, -1013.273f, 113.1372f };
	Local_104[1 /*3*/] = { -182.7186f, -1011.827f, 113.1388f };
	Local_104[2 /*3*/] = { -154.6769f, -941.7866f, 113.1388f };
	Local_104[3 /*3*/] = { -155.5882f, -945.6394f, 113.1388f };
	Local_117[0 /*3*/] = { -180.2197f, -1016.752f, 113.2066f };
	Local_117[1 /*3*/] = { -183.6155f, -1015.317f, 113.2066f };
	Local_117[2 /*3*/] = { -157.7097f, -940.4479f, 113.2066f };
	Local_117[3 /*3*/] = { -159.8848f, -943.6281f, 113.2066f };
	func_583();
	PED::ADD_RELATIONSHIP_GROUP("construction workers", &iLocal_94);
	PED::ADD_RELATIONSHIP_GROUP("agency2setupbg", &iLocal_95);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_94, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_95, 1862763509);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(GlobalFunc_4931(1, 1), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("buffalo"), 1);
	bLocal_147 = true;
}

void func_583()//Position - 0x67218
{
	Local_883[0 /*3*/] = { -129.7323f, -944.4222f, 28.294f };
	Local_883[1 /*3*/] = { -158.7628f, -934.1577f, 28.29401f };
	Local_883[2 /*3*/] = { -162.975f, -938.788f, 28.28928f };
	Local_883[3 /*3*/] = { -164.2448f, -942.7136f, 28.28928f };
	Local_883[4 /*3*/] = { -189.4494f, -1018.859f, 28.28928f };
	Local_883[5 /*3*/] = { -185.7217f, -1020.865f, 28.28928f };
	Local_883[6 /*3*/] = { -182.1412f, -1022.125f, 28.28928f };
	Local_883[7 /*3*/] = { -187.197f, -1035.605f, 26.15204f };
	Local_908[0 /*3*/] = { -78.36512f, -1023.823f, 27.41733f };
	Local_908[1 /*3*/] = { -94.58283f, -1030.617f, 26.58587f };
	Local_908[2 /*3*/] = { -128.5077f, -1044.736f, 26.27405f };
	Local_908[3 /*3*/] = { -175.8163f, -1035.866f, 26.27405f };
	Local_908[4 /*3*/] = { -187.6243f, -1043.728f, 25.48483f };
	Local_908[5 /*3*/] = { -222.1247f, -1132.414f, 22.01625f };
	Local_858[0 /*3*/] = { -180.3286f, -1009.96f, 113.1388f };
	Local_858[1 /*3*/] = { -176.0401f, -998.0266f, 113.1388f };
	Local_858[2 /*3*/] = { -155.2943f, -998.7463f, 113.1388f };
	Local_858[3 /*3*/] = { -147.7375f, -985.4456f, 113.1388f };
	Local_858[4 /*3*/] = { -139.0465f, -970.2491f, 113.1388f };
	Local_858[5 /*3*/] = { -148.797f, -958.0107f, 113.1388f };
	Local_858[6 /*3*/] = { -147.4532f, -949.2042f, 113.608f };
	Local_858[7 /*3*/] = { -153.5585f, -944.0073f, 113.1531f };
}


int func_585(int iParam0, bool bParam1)//Position - 0x67446
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
		func_618(&(Global_17052[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2));
		func_302(&(Global_17052[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_17052.f_7 = iParam0;
	Global_17052.f_39 = 1;
	GlobalFunc_10924(&Global_17052, 0, 0, 0);
	GlobalFunc_5124(iParam0);
	return 1;
}

































int func_618(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x68D42
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
				GlobalFunc_8364(*uParam0, iParam1, bParam5);
				PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
				GlobalFunc_11317(*uParam0);
				GlobalFunc_7694(*uParam0, 1, 0);
				GlobalFunc_7693(*uParam0);
				GlobalFunc_7707(*uParam0);
				GlobalFunc_11332(*uParam0, bParam6);
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










void func_628()//Position - 0x6D342
{
	uLocal_91 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(73.76294f, -1025.597f, -151.7031f) + Vector(61.5f, 148.75f, 131.5f), Vector(73.76294f, -1025.597f, -151.7031f) - Vector(61.5f, 148.75f, 131.5f), 0, 1, 1, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(28.7762f, -1037.519f, -107.925f) + Vector(10f, 24.25f, 20f), Vector(28.7762f, -1037.519f, -107.925f) - Vector(10f, 24.25f, 20f), 0, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(24.4869f, -1113.94f, -219.0097f) + Vector(4f, 4.5f, 4.5f), Vector(24.4869f, -1113.94f, -219.0097f) - Vector(4f, 4.5f, 4.5f), 0, 1);
}

void func_629()//Position - 0x6D412
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_80))
	{
		if (!PED::IS_PED_FLEEING(iLocal_80))
		{
			TASK::CLEAR_PED_TASKS(iLocal_80);
		}
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_80);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_85))
	{
		OBJECT::DELETE_OBJECT(&iLocal_85);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
		}
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_91, 0);
	GlobalFunc_563(0);
	iVar0 = 0;
	while (iVar0 < Local_571)
	{
		func_53(&(Local_571[iVar0 /*14*/]), 0);
		iVar0++;
	}
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(28.7762f, -1037.519f, -107.925f) + Vector(4f, 14.25f, 9f), Vector(28.7762f, -1037.519f, -107.925f) - Vector(4f, 14.25f, 9f), 1, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(24.4869f, -1113.94f, -219.0097f) + Vector(4f, 4.5f, 4.5f), Vector(24.4869f, -1113.94f, -219.0097f) - Vector(4f, 4.5f, 4.5f), 1, 1);
	CAM::RENDER_SCRIPT_CAMS(0, 1, 3000, 1, 0, 0);
	CAM::SET_WIDESCREEN_BORDERS(0, 0);
	MISC::_REMOVE_STEALTH_KILL(MISC::GET_HASH_KEY("ACT_stealth_kill_a"), 1);
	MISC::_REMOVE_STEALTH_KILL(MISC::GET_HASH_KEY("ACT_stealth_kill_b"), 1);
	AUDIO::TRIGGER_MUSIC_EVENT("AH2A_MISSION_FAIL");
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_95);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(0);
	}
	AUDIO::STOP_STREAM();
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-826072862, 0, 0, 1);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(763780711, 0, 0, 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(GlobalFunc_4931(1, 1), 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}






