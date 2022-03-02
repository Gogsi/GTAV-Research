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
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 16;
	var uLocal_41 = 0;
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
	struct<3> Local_158[234];
	struct<3> Local_861 = { 0, 0, 0 } ;
	int iLocal_864 = 0;
	int iLocal_865 = 0;
	float fLocal_866 = 0f;
	struct<12> Local_867 = { 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<10> Local_879 = { 0, 0, 0, 0, 4, 0, 0, 0, 0, 0 } ;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	int iLocal_891 = 0;
	struct<22> Local_892 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	int iLocal_923 = 0;
	int iLocal_924[4] = { 0, 0, 0, 0 };
	var uLocal_929 = 0;
	int iLocal_930 = 0;
	int iLocal_931 = 0;
	int iLocal_932 = 0;
	int iLocal_933 = 0;
	int iLocal_934 = 0;
	int iLocal_935 = 0;
	float fLocal_936 = 0f;
	float fLocal_937 = 0f;
	float fLocal_938 = 0f;
	int iLocal_939 = 0;
	struct<3> Local_940[32];
	int iLocal_1037 = 0;
	int iLocal_1038 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	float fVar10;
	float fVar11;
	int iVar12;
	float fVar13;
	float fVar14;
	
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
	iLocal_39 = joaat("prop_ld_test_01");
	Local_861 = { 0f, 0f, 1.7f };
	fLocal_866 = 0f;
	iLocal_930 = -1;
	iLocal_931 = -1;
	iLocal_932 = 32;
	iLocal_933 = 32;
	iLocal_934 = 3;
	fLocal_936 = 0.25f;
	fLocal_937 = 1.75f;
	fLocal_938 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_181(0);
	}
	SYSTEM::WAIT(0);
	func_54(0f, 0f, 0f, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	MISC::SET_BIT(&Global_68493, 7);
	if (!CAM::DOES_CAM_EXIST(uLocal_929))
	{
		uLocal_929 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -1652.227f, -1120.93f, 22.4479f, 9.2388f, 0f, -131.6249f, 50.1098f, 1, 2);
		CAM::SET_CAM_PARAMS(uLocal_929, -1652.227f, -1120.93f, 22.4479f, 9.2388f, 0f, -131.6249f, 50.1098f, 0, 1, 1, 2);
		CAM::SET_CAM_ACTIVE(uLocal_929, 1);
		CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
	}
	if (GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
		}
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
		MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 60f, 0);
		FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 60f);
	}
	GlobalFunc_5730(&uLocal_40, 0, iLocal_39);
	GlobalFunc_5730(&uLocal_40, 1, joaat("prop_roller_car_01"));
	GlobalFunc_5730(&uLocal_40, 2, joaat("prop_roller_car_02"));
	while (!AUDIO::LOAD_STREAM("LEVIATHON_RIDE_MASTER", 0))
	{
		GlobalFunc_112();
		GlobalFunc_234(PLAYER::PLAYER_PED_ID());
		SYSTEM::WAIT(0);
	}
	AUDIO::PLAY_STREAM_FRONTEND();
	if (CAM::DOES_CAM_EXIST(uLocal_929))
	{
		CAM::SET_CAM_PARAMS(uLocal_929, -1651.501f, -1118.395f, 23.5181f, 3.435f, 0f, -152.2412f, 50.1098f, 5000, 1, 1, 2);
		iVar12 = MISC::GET_GAME_TIMER() + 5000;
	}
	while (!GlobalFunc_5731(&uLocal_40) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		GlobalFunc_112();
		GlobalFunc_234(PLAYER::PLAYER_PED_ID());
		SYSTEM::WAIT(0);
	}
	if (GlobalFunc_234(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
	{
		if (func_46(PLAYER::GET_PLAYERS_LAST_VEHICLE(), joaat("bagger")))
		{
			func_32(-1633.43f, -1111.998f, 11.02252f, -1661.27f, -1142.66f, 25.51722f, 12f, -1630.952f, -1107.58f, 12.0215f, 51.9704f, 1, 1, 1, 0, 0);
		}
		else if (func_46(PLAYER::GET_PLAYERS_LAST_VEHICLE(), joaat("sandking")))
		{
			func_32(-1633.43f, -1111.998f, 11.02252f, -1661.27f, -1142.66f, 25.51722f, 12f, -1636.344f, -1106.241f, 12.0261f, 52.3427f, 1, 1, 1, 0, 0);
		}
	}
	fLocal_938 = 0.5f;
	func_31(1, 0.5f, 2);
	func_31(2, 0.5f, 5);
	func_31(13, 0.5f, 0);
	func_31(14, 0.3f, 0);
	func_31(15, 0.2f, 0);
	func_31(16, 0.1f, 0);
	func_31(17, 0.05f, 6);
	func_31(18, 0.05f, 0);
	func_31(19, 1f, 2);
	func_31(20, 1f, 4);
	func_31(31, 1f, 2);
	func_31(34, 1f, 4);
	func_31(45, 1f, 4);
	func_31(60, 1f, 4);
	func_31(69, 1f, 4);
	func_31(81, 1f, 3);
	func_31(84, 0.75f, 1);
	func_31(90, 0.75f, 5);
	func_31(94, 0.75f, 6);
	func_31(95, 1f, 2);
	func_31(97, 1f, 4);
	func_31(118, 1f, 4);
	func_31(130, 1f, 4);
	func_31(155, 1f, 4);
	func_31(172, 1f, 4);
	func_31(184, 1f, 4);
	func_31(197, 1f, 4);
	func_31(216, 1f, 4);
	func_31(222, 1f, 3);
	func_31(232, 0.01f, 0);
	GlobalFunc_238(iLocal_939);
	func_28();
	func_27();
	func_26(&Local_867, 1, 0);
	SYSTEM::WAIT(0);
	func_26(&Local_879, 2, 0);
	Local_867.f_11 = 1;
	GlobalFunc_7632(1);
	SYSTEM::WAIT(0);
	func_15();
	if (GlobalFunc_234(PLAYER::PLAYER_PED_ID()) && GlobalFunc_234(Local_867.f_9))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1648.4f, -1127.6f, 18.3f, 1, 0, 0, 1);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Local_867.f_9, 0, 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
	}
	while (MISC::GET_GAME_TIMER() < iVar12)
	{
		SYSTEM::WAIT(0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_929))
	{
		CAM::SET_CAM_ACTIVE(uLocal_929, 0);
		CAM::DESTROY_CAM(uLocal_929, 0);
	}
	if (GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
	{
		Local_892.f_20 = 60;
		Local_892.f_21 = 20;
		Var1 = { PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 31086, 0f, -0.25f, 0f) };
		GlobalFunc_1478(&Local_892, Var1, ENTITY::GET_ENTITY_ROTATION(Local_867.f_9, 2), 50f, Local_892.f_20, Local_892.f_21, 3, 1101004800, 0, 0, -1082130432, 0);
		CAM::ATTACH_CAM_TO_ENTITY(Local_892, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0.5f, 1);
	}
	SYSTEM::WAIT(0);
	if (GlobalFunc_234(PLAYER::PLAYER_PED_ID()) && GlobalFunc_234(Local_879.f_9))
	{
		GlobalFunc_5395(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_879.f_9, 1), &fVar10, &fVar11, 1);
		GlobalFunc_4995(&Local_892, 1, 1, 0, 0, 1045220557, 0);
		CAM::SET_CAM_ROT(Local_892, Vector(fVar11, 0f, fVar10) + Local_892.f_14, 2);
	}
	AUDIO::START_AUDIO_SCENE("FAIRGROUND_RIDES_LEVIATHAN");
	iLocal_935 = MISC::GET_GAME_TIMER() + 5000;
	GlobalFunc_159("FGND_SKIPRIDE", -1);
	PAD::SET_PAD_SHAKE(0, 1000, 255);
	while (true)
	{
		func_6();
		func_15();
		iVar0 = Local_867.f_4[1];
		Var4 = { GlobalFunc_107(func_5(iVar0 + 1) - func_5(iVar0)) };
		Var7 = { GlobalFunc_107(func_5(iVar0 + 4) - func_5(iVar0)) };
		fVar14 = (1f - GlobalFunc_168(Var7, Var4));
		fVar13 = (SYSTEM::SIN(((Local_867.f_10 - IntToFloat(SYSTEM::FLOOR(Local_867.f_10))) * 360f)) * fLocal_936);
		if (GlobalFunc_234(PLAYER::PLAYER_PED_ID()) && GlobalFunc_234(Local_879.f_9))
		{
			GlobalFunc_5395(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_879.f_9, 1), &fVar10, &fVar11, 1);
			GlobalFunc_4995(&Local_892, 1, 1, 0, 0, 1045220557, 0);
			CAM::SET_CAM_ROT(Local_892, Vector((fVar11 + (fVar13 * (fVar14 * 2f))), 0f, (fVar10 + fVar13)) + Local_892.f_14, 2);
		}
		GlobalFunc_112();
		GlobalFunc_187();
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		}
		if (MISC::GET_GAME_TIMER() > iLocal_935)
		{
			if (fLocal_938 > 0.01f)
			{
				if (fLocal_938 > 0.5f)
				{
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "ROLLERCOASTER_CHAT_EXCITED", "SPEECH_PARAMS_FORCE_FRONTEND", 1);
				}
				else
				{
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "ROLLERCOASTER_CHAT_NORMAL", "SPEECH_PARAMS_FORCE_FRONTEND", 1);
				}
				iLocal_935 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 13000));
			}
		}
		if (iLocal_923 == 0)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 18) || PAD::IS_CONTROL_JUST_PRESSED(2, 51))
			{
				GlobalFunc_2350(500, 0);
				iLocal_923 = 1;
			}
		}
		else if (CAM::IS_SCREEN_FADED_OUT())
		{
			func_181(1);
		}
		else if (!CAM::IS_SCREEN_FADING_OUT())
		{
			iLocal_923 = 0;
		}
		SYSTEM::WAIT(0);
	}
}





Vector3 func_5(int iParam0)//Position - 0x809
{
	int iVar0;
	
	iVar0 = (iParam0 % iLocal_864);
	return Local_158[iVar0 /*3*/];
}

void func_6()//Position - 0x821
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = iLocal_939 + 1;
	if (iLocal_939 >= Local_940.x)
	{
		iLocal_939 = 0;
		return;
	}
	if (iVar3 >= Local_940.x)
	{
		return;
	}
	if (Local_867.f_10 < IntToFloat(Local_940[iLocal_939 /*3*/]))
	{
		return;
	}
	if (Local_867.f_10 >= IntToFloat(Local_940[iVar3 /*3*/]))
	{
		iLocal_939 = iVar3;
		return;
	}
	if (iVar3 >= Local_940.x)
	{
		return;
	}
	if (Local_940[iLocal_939 /*3*/].f_1 == Local_940[iVar3 /*3*/].f_1)
	{
		fLocal_938 = Local_940[iLocal_939 /*3*/].f_1;
		return;
	}
	fVar0 = SYSTEM::TO_FLOAT(MISC::ABSI((Local_940[iLocal_939 + 1 /*3*/] - Local_940[iLocal_939 /*3*/])));
	fVar1 = (Local_940[iVar3 /*3*/].f_1 - Local_940[iLocal_939 /*3*/].f_1);
	fVar2 = (1f - ((SYSTEM::TO_FLOAT(Local_940[iVar3 /*3*/]) - Local_867.f_10) / fVar0));
	fLocal_938 = (Local_940[iLocal_939 /*3*/].f_1 + (fVar2 * fVar1));
	if (Local_940[iLocal_939 /*3*/].f_1 < Local_940[iVar3 /*3*/].f_1)
	{
		fLocal_938 = GlobalFunc_253(fLocal_938, Local_940[iLocal_939 /*3*/].f_1, Local_940[iVar3 /*3*/].f_1);
	}
	else
	{
		fLocal_938 = GlobalFunc_253(fLocal_938, Local_940[iVar3 /*3*/].f_1, Local_940[iLocal_939 /*3*/].f_1);
	}
}









void func_15()//Position - 0x112A
{
	func_19();
	func_17(&Local_879);
	func_17(&Local_867);
	func_16(Local_867.f_9, Local_879.f_9);
}

void func_16(int iParam0, int iParam1)//Position - 0x1152
{
	var uVar0;
	var uVar1;
	
	GlobalFunc_5395(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1), &uVar0, &uVar1, 1);
	ENTITY::SET_ENTITY_ROTATION(iParam0, uVar0, 0f, uVar1, 2, 1);
}

void func_17(var uParam0)//Position - 0x117E
{
	float fVar0;
	
	fVar0 = uParam0->f_3;
	uParam0->f_3 = (uParam0->f_3 + (((fLocal_866 * fLocal_938) * fLocal_937) * SYSTEM::TIMESTEP()));
	if (uParam0->f_3 >= 1f)
	{
		uParam0->f_3 = (uParam0->f_3 - 1f);
		uParam0->f_4[0] = uParam0->f_4[1];
		uParam0->f_4[1] = uParam0->f_4[2];
		uParam0->f_4[2] = uParam0->f_4[3];
		uParam0->f_4[3]++;
		if (uParam0->f_4[3] >= iLocal_864)
		{
			uParam0->f_4[3] = (uParam0->f_4[3] - iLocal_864);
		}
		if ((uParam0->f_4[3] % iLocal_934) == 0)
		{
			PAD::SET_PAD_SHAKE(0, iLocal_932, iLocal_933);
		}
	}
	*uParam0 = { func_18(&(Local_158[uParam0->f_4[0] /*3*/]), &(Local_158[uParam0->f_4[1] /*3*/]), &(Local_158[uParam0->f_4[2] /*3*/]), &(Local_158[uParam0->f_4[3] /*3*/]), uParam0->f_3) };
	*uParam0 = { *uParam0 + Local_861 };
	if (GlobalFunc_234(uParam0->f_9) && fVar0 != uParam0->f_3)
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_9, *uParam0, 0, 0, 1);
	}
	uParam0->f_10 = (SYSTEM::TO_FLOAT(uParam0->f_4[1]) + uParam0->f_3);
}

Vector3 func_18(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4)//Position - 0x12AB
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	fVar3 = (fParam4 * fParam4);
	fVar4 = (fVar3 * fParam4);
	Var0.x = (0.5f * ((((2f * *uParam1) + ((-*uParam0 + *uParam2) * fParam4)) + (((((2f * *uParam0) - (5f * *uParam1)) + (4f * *uParam2)) - *uParam3) * fVar3)) + ((((-*uParam0 + (3f * *uParam1)) - (3f * *uParam2)) + *uParam3) * fVar4)));
	Var0.f_1 = (0.5f * ((((2f * uParam1->f_1) + ((-uParam0->f_1 + uParam2->f_1) * fParam4)) + (((((2f * uParam0->f_1) - (5f * uParam1->f_1)) + (4f * uParam2->f_1)) - uParam3->f_1) * fVar3)) + ((((-uParam0->f_1 + (3f * uParam1->f_1)) - (3f * uParam2->f_1)) + uParam3->f_1) * fVar4)));
	Var0.f_2 = (0.5f * ((((2f * uParam1->f_2) + ((-uParam0->f_2 + uParam2->f_2) * fParam4)) + (((((2f * uParam0->f_2) - (5f * uParam1->f_2)) + (4f * uParam2->f_2)) - uParam3->f_2) * fVar3)) + ((((-uParam0->f_2 + (3f * uParam1->f_2)) - (3f * uParam2->f_2)) + uParam3->f_2) * fVar4)));
	return Var0;
}

void func_19()//Position - 0x13BD
{
	switch (iLocal_891)
	{
		case 0:
			fLocal_866 = (fLocal_866 + (MISC::GET_FRAME_TIME() / 2f));
			if (fLocal_866 >= 5f)
			{
				fLocal_866 = 5f;
				iLocal_891 = 1;
			}
			break;
		
		case 1:
			if (Local_867.f_4[1] == 224 && iLocal_865 == 0)
			{
				iLocal_891 = 2;
				if (GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "BIG_STOP", PLAYER::PLAYER_PED_ID(), 0, 0, 0);
				}
			}
			break;
		
		case 2:
			fLocal_866 = (fLocal_866 - MISC::GET_FRAME_TIME());
			if (fLocal_866 <= 0f)
			{
				fLocal_866 = 0f;
				iLocal_891 = 3;
			}
			break;
		
		case 3:
			SYSTEM::WAIT(1500);
			func_181(1);
			break;
	}
}







void func_26(var uParam0, int iParam1, int iParam2)//Position - 0x165C
{
	int iVar0;
	
	uParam0->f_4[0] = (iParam1 - 2);
	uParam0->f_4[1] = (iParam1 - 1);
	uParam0->f_4[2] = iParam1;
	uParam0->f_4[3] = iParam1 + 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_4)
	{
		if (uParam0->f_4[iVar0] < 0)
		{
			uParam0->f_4[iVar0] = (uParam0->f_4[iVar0] + iLocal_864);
		}
		if (uParam0->f_4[iVar0] >= iLocal_864)
		{
			uParam0->f_4[iVar0] = (uParam0->f_4[iVar0] - iLocal_864);
		}
		iVar0++;
	}
	uParam0->f_3 = iParam2;
	*uParam0 = { func_18(&(Local_158[uParam0->f_4[0] /*3*/]), &(Local_158[uParam0->f_4[1] /*3*/]), &(Local_158[uParam0->f_4[2] /*3*/]), &(Local_158[uParam0->f_4[3] /*3*/]), uParam0->f_3) };
	*uParam0 = { *uParam0 + Local_861 };
	uParam0->f_9 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_39, *uParam0, 1, 1, 0);
	if (GlobalFunc_234(uParam0->f_9))
	{
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_9, 0, 0);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_9, 0);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_9, 1);
	}
}

void func_27()//Position - 0x1769
{
	int iVar0;
	
	iLocal_924[0] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1643.524f, -1124.681f, 17.4326f, 2f, joaat("prop_roller_car_01"), 1, 0, 1);
	iLocal_924[1] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1645.146f, -1126.613f, 17.4326f, 2f, joaat("prop_roller_car_02"), 1, 0, 1);
	iLocal_924[2] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1646.768f, -1128.545f, 17.4326f, 2f, joaat("prop_roller_car_02"), 1, 0, 1);
	iLocal_924[3] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1648.39f, -1130.478f, 17.4326f, 2f, joaat("prop_roller_car_02"), 1, 0, 1);
	iVar0 = 0;
	while (iVar0 < iLocal_924)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_924[iVar0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_924[iVar0], 1, 0);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_924[iVar0], 0);
			ENTITY::SET_ENTITY_COLLISION(iLocal_924[iVar0], 0, 0);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_924[iVar0], 1);
		}
		iVar0++;
	}
}

void func_28()//Position - 0x184D
{
	iLocal_864 = 0;
	func_29(-1642.878f, -1123.903f, 16.875f);
	func_29(-1644.42f, -1125.74f, 16.8748f);
	func_29(-1645.895f, -1127.499f, 16.8755f);
	func_29(-1647.437f, -1129.335f, 16.8753f);
	func_29(-1648.756f, -1130.908f, 16.8753f);
	func_29(-1650.298f, -1132.745f, 16.875f);
	func_29(-1651.617f, -1134.318f, 16.8751f);
	func_29(-1653.159f, -1136.154f, 16.8748f);
	func_29(-1654.478f, -1137.727f, 16.8748f);
	func_29(-1656.035f, -1139.584f, 16.8755f);
	func_29(-1657.531f, -1141.365f, 16.8737f);
	func_29(-1658.991f, -1143.106f, 16.8658f);
	func_29(-1660.499f, -1144.902f, 16.6238f);
	func_29(-1661.96f, -1146.644f, 16.1105f);
	func_29(-1663.401f, -1148.361f, 15.6586f);
	func_29(-1664.841f, -1150.076f, 15.3486f);
	func_29(-1666.32f, -1151.839f, 15.2158f);
	func_29(-1667.848f, -1153.661f, 15.211f);
	func_29(-1669.439f, -1155.514f, 15.2169f);
	func_29(-1671.27f, -1156.976f, 15.2531f);
	func_29(-1673.393f, -1158.006f, 15.3676f);
	func_29(-1675.675f, -1158.609f, 15.5443f);
	func_29(-1678.03f, -1158.768f, 15.7925f);
	func_29(-1680.365f, -1158.453f, 16.034f);
	func_29(-1682.584f, -1157.648f, 16.248f);
	func_29(-1684.608f, -1156.435f, 16.4506f);
	func_29(-1686.366f, -1154.861f, 16.6232f);
	func_29(-1687.747f, -1152.951f, 16.7552f);
	func_29(-1688.719f, -1150.8f, 16.8714f);
	func_29(-1689.263f, -1148.505f, 16.9875f);
	func_29(-1689.357f, -1146.15f, 17.1035f);
	func_29(-1688.931f, -1143.829f, 17.2199f);
	func_29(-1688.069f, -1141.633f, 17.336f);
	func_29(-1686.807f, -1139.64f, 17.4523f);
	func_29(-1685.166f, -1137.95f, 17.5683f);
	func_29(-1683.206f, -1136.637f, 17.6846f);
	func_29(-1681.032f, -1135.722f, 17.8007f);
	func_29(-1678.724f, -1135.234f, 17.9169f);
	func_29(-1676.369f, -1135.259f, 18.033f);
	func_29(-1674.061f, -1135.746f, 18.1492f);
	func_29(-1671.889f, -1136.663f, 18.2653f);
	func_29(-1669.941f, -1137.983f, 18.3814f);
	func_29(-1668.322f, -1139.7f, 18.4976f);
	func_29(-1667.06f, -1141.692f, 18.6138f);
	func_29(-1666.2f, -1143.889f, 18.73f);
	func_29(-1665.816f, -1146.209f, 18.846f);
	func_29(-1665.915f, -1148.565f, 18.9622f);
	func_29(-1666.461f, -1150.859f, 19.0783f);
	func_29(-1667.432f, -1153.01f, 19.1946f);
	func_29(-1668.85f, -1154.886f, 19.3106f);
	func_29(-1670.606f, -1156.458f, 19.4267f);
	func_29(-1672.631f, -1157.669f, 19.5429f);
	func_29(-1674.787f, -1158.446f, 19.6567f);
	func_29(-1676.391f, -1158.717f, 19.7777f);
	func_29(-1678.231f, -1158.801f, 19.953f);
	func_29(-1680.221f, -1158.663f, 20.1677f);
	func_29(-1682.411f, -1158.297f, 20.4143f);
	func_29(-1684.64f, -1157.654f, 20.674f);
	func_29(-1686.893f, -1156.715f, 20.9358f);
	func_29(-1689.116f, -1155.455f, 21.1866f);
	func_29(-1691.256f, -1153.845f, 21.4132f);
	func_29(-1693.259f, -1151.858f, 21.6023f);
	func_29(-1695.072f, -1149.467f, 21.7407f);
	func_29(-1696.551f, -1146.853f, 21.8203f);
	func_29(-1697.635f, -1144.237f, 21.8563f);
	func_29(-1698.362f, -1141.636f, 21.8562f);
	func_29(-1698.763f, -1139.082f, 21.8259f);
	func_29(-1698.866f, -1136.601f, 21.7715f);
	func_29(-1698.701f, -1134.224f, 21.6989f);
	func_29(-1698.297f, -1131.982f, 21.6144f);
	func_29(-1697.682f, -1129.901f, 21.5238f);
	func_29(-1696.888f, -1128.012f, 21.4334f);
	func_29(-1695.943f, -1126.344f, 21.349f);
	func_29(-1694.799f, -1124.871f, 21.2657f);
	func_29(-1693.095f, -1123.239f, 21.119f);
	func_29(-1691.154f, -1121.899f, 20.981f);
	func_29(-1689.025f, -1120.886f, 20.8585f);
	func_29(-1686.762f, -1120.225f, 20.7582f);
	func_29(-1684.423f, -1119.934f, 20.6861f);
	func_29(-1682.068f, -1120.019f, 20.6475f);
	func_29(-1679.757f, -1120.477f, 20.6471f);
	func_29(-1677.549f, -1121.297f, 20.6883f);
	func_29(-1675.502f, -1122.458f, 20.7732f);
	func_29(-1673.668f, -1123.928f, 20.9032f);
	func_29(-1672.092f, -1125.669f, 21.0783f);
	func_29(-1670.814f, -1127.635f, 21.2971f);
	func_29(-1669.866f, -1129.775f, 21.5574f);
	func_29(-1669.27f, -1132.034f, 21.8556f);
	func_29(-1669.038f, -1134.355f, 22.1878f);
	func_29(-1669.175f, -1136.681f, 22.5487f);
	func_29(-1669.676f, -1138.953f, 22.9324f);
	func_29(-1670.528f, -1141.116f, 23.3331f);
	func_29(-1671.709f, -1143.117f, 23.7443f);
	func_29(-1673.19f, -1144.908f, 24.1589f);
	func_29(-1674.938f, -1146.445f, 24.5706f);
	func_29(-1676.906f, -1147.688f, 24.9723f);
	func_29(-1679.051f, -1148.605f, 25.3575f);
	func_29(-1681.317f, -1149.174f, 25.7202f);
	func_29(-1683.65f, -1149.377f, 26.0545f);
	func_29(-1685.991f, -1149.208f, 26.3554f);
	func_29(-1688.28f, -1148.664f, 26.6179f);
	func_29(-1690.457f, -1147.763f, 26.839f);
	func_29(-1692.464f, -1146.523f, 27.0161f);
	func_29(-1694.252f, -1144.976f, 27.1481f);
	func_29(-1695.768f, -1143.161f, 27.2346f);
	func_29(-1696.975f, -1141.127f, 27.2771f);
	func_29(-1697.84f, -1138.925f, 27.2778f);
	func_29(-1698.343f, -1136.614f, 27.2402f);
	func_29(-1698.466f, -1134.255f, 27.1688f);
	func_29(-1698.212f, -1131.907f, 27.0692f);
	func_29(-1697.585f, -1129.633f, 26.9473f);
	func_29(-1696.603f, -1127.482f, 26.7859f);
	func_29(-1695.289f, -1125.519f, 26.5684f);
	func_29(-1693.684f, -1123.795f, 26.2981f);
	func_29(-1691.833f, -1122.354f, 25.9974f);
	func_29(-1689.777f, -1121.226f, 25.6751f);
	func_29(-1687.713f, -1120.211f, 25.2977f);
	func_29(-1685.634f, -1119.26f, 24.7922f);
	func_29(-1683.51f, -1118.348f, 24.1724f);
	func_29(-1681.371f, -1117.453f, 23.4526f);
	func_29(-1679.248f, -1116.55f, 22.6476f);
	func_29(-1677.17f, -1115.614f, 21.7713f);
	func_29(-1675.14f, -1114.667f, 20.8298f);
	func_29(-1673.202f, -1113.769f, 19.8983f);
	func_29(-1671.307f, -1112.867f, 19.0396f);
	func_29(-1669.394f, -1111.905f, 18.3093f);
	func_29(-1667.402f, -1110.821f, 17.7619f);
	func_29(-1665.336f, -1109.608f, 17.4552f);
	func_29(-1663.536f, -1108.452f, 17.3517f);
	func_29(-1661.669f, -1107.159f, 17.3564f);
	func_29(-1659.768f, -1105.758f, 17.4696f);
	func_29(-1657.862f, -1104.276f, 17.6914f);
	func_29(-1655.984f, -1102.739f, 18.0218f);
	func_29(-1654.165f, -1101.174f, 18.4604f);
	func_29(-1652.433f, -1099.61f, 19.0069f);
	func_29(-1650.78f, -1098.037f, 19.6917f);
	func_29(-1649.132f, -1096.398f, 20.453f);
	func_29(-1647.489f, -1094.706f, 21.0879f);
	func_29(-1645.845f, -1092.971f, 21.3809f);
	func_29(-1644.2f, -1091.197f, 21.0723f);
	func_29(-1642.623f, -1089.434f, 20.123f);
	func_29(-1641.134f, -1087.733f, 18.9288f);
	func_29(-1639.768f, -1086.149f, 17.8822f);
	func_29(-1638.441f, -1084.604f, 17.2995f);
	func_29(-1636.935f, -1082.814f, 17.1529f);
	func_29(-1635.397f, -1080.972f, 17.1524f);
	func_29(-1633.897f, -1079.234f, 17.1531f);
	func_29(-1632.36f, -1077.393f, 17.1529f);
	func_29(-1631.046f, -1075.816f, 17.1529f);
	func_29(-1629.509f, -1073.975f, 17.1526f);
	func_29(-1628.196f, -1072.4f, 17.1529f);
	func_29(-1626.819f, -1070.732f, 17.4133f);
	func_29(-1625.401f, -1069.021f, 17.9281f);
	func_29(-1623.926f, -1067.252f, 18.5038f);
	func_29(-1622.451f, -1065.482f, 19.0797f);
	func_29(-1620.975f, -1063.712f, 19.6554f);
	func_29(-1619.5f, -1061.943f, 20.2312f);
	func_29(-1618.024f, -1060.173f, 20.8071f);
	func_29(-1616.489f, -1058.332f, 21.2475f);
	func_29(-1614.941f, -1056.539f, 21.564f);
	func_29(-1613.163f, -1054.989f, 21.7555f);
	func_29(-1611.103f, -1053.833f, 21.9471f);
	func_29(-1608.837f, -1053.192f, 22.1368f);
	func_29(-1606.488f, -1053.012f, 22.3259f);
	func_29(-1604.152f, -1053.35f, 22.5146f);
	func_29(-1601.952f, -1054.192f, 22.7019f);
	func_29(-1599.962f, -1055.453f, 22.8885f);
	func_29(-1598.318f, -1057.143f, 23.0742f);
	func_29(-1597.06f, -1059.136f, 23.2587f);
	func_29(-1596.231f, -1061.343f, 23.4426f);
	func_29(-1595.945f, -1063.68f, 23.6253f);
	func_29(-1596.129f, -1066.029f, 23.8069f);
	func_29(-1596.815f, -1068.28f, 23.9876f);
	func_29(-1597.986f, -1070.323f, 24.167f);
	func_29(-1599.539f, -1072.095f, 24.3456f);
	func_29(-1601.453f, -1073.462f, 24.5229f);
	func_29(-1603.615f, -1074.397f, 24.6991f);
	func_29(-1605.916f, -1074.88f, 24.8739f);
	func_29(-1608.272f, -1074.802f, 25.0476f);
	func_29(-1610.562f, -1074.259f, 25.2202f);
	func_29(-1612.68f, -1073.243f, 25.3914f);
	func_29(-1614.518f, -1071.77f, 25.5611f);
	func_29(-1616.027f, -1069.961f, 25.7295f);
	func_29(-1617.085f, -1067.866f, 25.8962f);
	func_29(-1617.675f, -1065.586f, 26.0615f);
	func_29(-1617.801f, -1063.243f, 26.2248f);
	func_29(-1617.36f, -1060.927f, 26.3871f);
	func_29(-1616.468f, -1058.749f, 26.5474f);
	func_29(-1615.142f, -1056.816f, 26.7056f);
	func_29(-1613.403f, -1055.226f, 26.8622f);
	func_29(-1611.382f, -1054.014f, 27.0169f);
	func_29(-1609.158f, -1053.292f, 27.1687f);
	func_29(-1606.81f, -1053.063f, 27.3184f);
	func_29(-1604.463f, -1053.302f, 27.4662f);
	func_29(-1602.257f, -1054.092f, 27.6101f);
	func_29(-1600.243f, -1055.312f, 27.7515f);
	func_29(-1598.541f, -1056.919f, 27.8892f);
	func_29(-1597.239f, -1058.884f, 28.0238f);
	func_29(-1596.357f, -1061.07f, 28.154f);
	func_29(-1595.99f, -1063.383f, 28.2781f);
	func_29(-1596.127f, -1065.735f, 28.3966f);
	func_29(-1596.732f, -1068.018f, 28.5072f);
	func_29(-1597.858f, -1070.078f, 28.6005f);
	func_29(-1599.33f, -1071.968f, 28.6213f);
	func_29(-1600.886f, -1073.818f, 28.4356f);
	func_29(-1602.445f, -1075.671f, 27.9888f);
	func_29(-1604.088f, -1077.617f, 27.4895f);
	func_29(-1605.422f, -1079.2f, 27.0316f);
	func_29(-1606.93f, -1080.994f, 26.878f);
	func_29(-1608.35f, -1082.681f, 26.9447f);
	func_29(-1609.353f, -1083.874f, 27.4738f);
	func_29(-1611.127f, -1085.98f, 28.7125f);
	func_29(-1612.731f, -1087.885f, 29.8581f);
	func_29(-1614.073f, -1089.48f, 30.4043f);
	func_29(-1614.825f, -1090.372f, 30.4459f);
	func_29(-1615.627f, -1091.327f, 30.3721f);
	func_29(-1616.686f, -1092.589f, 30.0253f);
	func_29(-1617.414f, -1093.462f, 29.5944f);
	func_29(-1618.748f, -1095.055f, 28.8046f);
	func_29(-1620.603f, -1097.274f, 27.7044f);
	func_29(-1622.873f, -1099.989f, 26.3576f);
	func_29(-1624.088f, -1101.44f, 25.6371f);
	func_29(-1625.373f, -1102.978f, 24.8741f);
	func_29(-1626.722f, -1104.591f, 24.0733f);
	func_29(-1628.125f, -1106.27f, 23.2405f);
	func_29(-1629.573f, -1108.003f, 22.3803f);
	func_29(-1631.06f, -1109.78f, 21.4979f);
	func_29(-1632.574f, -1111.592f, 20.5988f);
	func_29(-1634.109f, -1113.427f, 19.6878f);
	func_29(-1635.654f, -1115.276f, 18.7701f);
	func_29(-1636.903f, -1116.767f, 18.0427f);
	func_29(-1638.121f, -1118.224f, 17.4692f);
	func_29(-1639.578f, -1119.969f, 17.089f);
	func_29(-1641.219f, -1121.927f, 16.8752f);
}

void func_29(float fParam0, float fParam1, float fParam2)//Position - 0x29B7
{
	Local_158[(233 - iLocal_864) /*3*/] = fParam0;
	Local_158[(233 - iLocal_864) /*3*/].f_1 = fParam1;
	Local_158[(233 - iLocal_864) /*3*/].f_2 = fParam2;
	iLocal_864++;
}


void func_31(int iParam0, float fParam1, int iParam2)//Position - 0x29FD
{
	if (iLocal_1037 >= Local_940.x)
	{
		Local_940[(Local_940.x - 1) /*3*/] = 232;
		Local_940[(Local_940.x - 1) /*3*/].f_1 = 0.01f;
		Local_940[(Local_940.x - 1) /*3*/].f_2 = 0;
		return;
	}
	Local_940[iLocal_1037 /*3*/] = (iParam0 + iLocal_1038);
	if (Local_940[iLocal_1037 /*3*/] >= 234)
	{
		Local_940[iLocal_1037 /*3*/] = 233;
	}
	Local_940[iLocal_1037 /*3*/].f_1 = fParam1;
	Local_940[iLocal_1037 /*3*/].f_2 = iParam2;
	iLocal_1037++;
}

void func_32(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)//Position - 0x2A80
{
	func_33(Param0, Param3, fParam6, Param7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
}

void func_33(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)//Position - 0x2AA9
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (bParam15)
	{
		bParam15 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	uVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(uVar0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
			iVar3 = 1;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			if (bParam18)
			{
				GlobalFunc_108(iVar0);
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, Param0, Param3, fParam6, 0, 1, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var10 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
				if ((Var10.f_2 > Param0.f_2 && Var10.f_2 < Param3.f_2) || (Var10.f_2 > Param3.f_2 && Var10.f_2 < Param0.f_2))
				{
					if (GlobalFunc_4934(iVar0, Param0, Param3, fParam6))
					{
						bVar1 = true;
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("taxi")))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != PLAYER::PLAYER_PED_ID() && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != 0)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0 + Param3 / Vector(2f, 2f, 2f), ENTITY::GET_ENTITY_COORDS(iVar0, 1), 1) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam16)
			{
				if (GlobalFunc_5750(iVar0, GlobalFunc_8329(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!GlobalFunc_105(Param11))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
					{
						iVar13 = ENTITY::GET_ENTITY_MODEL(iVar0);
						VEHICLE::_GET_VEHICLE_SUSPENSION_BOUNDS(iVar0, &Var4, &Var7);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar13))
						{
							Param11.x = (Param11.x + 3f);
							Param11.f_1 = (Param11.f_1 + 3f);
						}
						if (((iVar13 == joaat("zentorno") || iVar13 == joaat("btype")) || iVar13 == joaat("dubsta3")) || iVar13 == joaat("monster"))
						{
							Param11 = { Param11 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar13 == joaat("t20") || iVar13 == joaat("virgo"))
						{
							Param11 = { Param11 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((Var7.x - Var4.x) > Param11.x)
						{
							bVar2 = false;
						}
						else if ((Var7.f_1 - Var4.f_1) > Param11.f_1)
						{
							bVar2 = false;
						}
						else if ((Var7.f_2 - Var4.f_2) > Param11.f_2)
						{
							bVar2 = false;
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
				{
					if (bVar2)
					{
						MISC::CLEAR_AREA_OF_VEHICLES(Param7, 5f, 0, 0, 0, 0, 0);
						ENTITY::SET_ENTITY_HEADING(iVar0, fParam10);
						ENTITY::SET_ENTITY_COORDS(iVar0, Param7, 1, 0, 0, 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
						if (bParam17)
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, 0, 1);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, 1);
						}
					}
					else
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, 1))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 1);
						}
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0))
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iVar0, 1), 1, 0, 0, 1);
						}
						VEHICLE::DELETE_VEHICLE(&iVar0);
					}
				}
			}
			if (bParam14)
			{
				MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(Param0, Param3, fParam6, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
			}
			iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
			{
				ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, 1), 1, 0, 0, 1);
			}
			iVar15 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
			if (iVar15 <= 2)
			{
				iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
				{
					ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, 1), 1, 0, 0, 1);
				}
			}
			if (iVar15 <= 4)
			{
				iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
				{
					ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, 1), 1, 0, 0, 1);
				}
				iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 2);
				if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
				{
					ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, 1), 1, 0, 0, 1);
				}
			}
			VEHICLE::DELETE_VEHICLE(&iVar0);
		}
	}
}













int func_46(int iParam0, int iParam1)//Position - 0x35A4
{
	struct<2> Var0;
	struct<2> Var3;
	struct<2> Var6;
	struct<2> Var9;
	
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam0), &Var0, &Var3);
	MISC::GET_MODEL_DIMENSIONS(iParam1, &Var6, &Var9);
	if (MISC::ABSF((Var3 - Var0)) > MISC::ABSF((Var9 - Var6)))
	{
		return 0;
	}
	if (MISC::ABSF((Var3.f_1 - Var0.f_1)) > MISC::ABSF((Var9.f_1 - Var6.f_1)))
	{
		return 0;
	}
	return 1;
}








void func_54(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x3AF8
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(uVar0))
	{
		GlobalFunc_8955(0);
		if (bParam9)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (bParam8)
		{
			switch (GlobalFunc_8329())
			{
				case 0:
					if (func_172(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_58(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (func_172(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_58(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (func_172(PLAYER::PLAYER_PED_ID(), 8, 1) || func_172(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_58(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (func_172(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_58(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
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
		PLAYER::SET_PLAYER_WANTED_LEVEL(uVar0, 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(uVar0, 0);
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(uVar0, 1);
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
			iLocal_38 = 0;
			if (GlobalFunc_777(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_38 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam5 == 1)
		{
			GlobalFunc_79(500, 0);
		}
	}
}




int func_58(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x3D1D
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
	
	if (PED::IS_PED_INJURED(uParam0) || iParam2 == -99)
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
		Global_68106[1 /*14*/] = { GlobalFunc_10870(iVar10, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		GlobalFunc_8541(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = GlobalFunc_7110(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = GlobalFunc_7110(iParam0, 9);
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
			iVar7 = GlobalFunc_7634(iParam0, 1);
			if (!GlobalFunc_6667(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = GlobalFunc_7634(iParam0, 0);
			if (!GlobalFunc_6666(iVar10, 14, iVar8) && !GlobalFunc_6665(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = GlobalFunc_7634(iParam0, 2);
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
				Global_68106[1 /*14*/] = { GlobalFunc_10870(iVar10, iVar0, uVar11[iVar0]) };
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
							Global_68106[1 /*14*/] = { GlobalFunc_10870(iVar10, 14, uVar27[iVar1]) };
							GlobalFunc_2384(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8541(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_70(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_58(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						GlobalFunc_8541(iVar0);
						if (Global_68105 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_70(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_58(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10870(iVar10, iVar0, func_67(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_66(iParam0, iVar10, &iVar4, 1))
							{
								func_58(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_58(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var53 = { GlobalFunc_10870(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 8, iVar5, &uVar11, &Var53))
				{
					func_58(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10870(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_58(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10870(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_58(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10870(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_58(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10870(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_58(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
			Global_68106[1 /*14*/] = { GlobalFunc_10870(iVar10, 14, uVar67[iVar1]) };
			GlobalFunc_2384(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8541(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_70(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_58(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		GlobalFunc_2384(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		GlobalFunc_8541(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_70(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_58(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = func_70(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_58(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			GlobalFunc_11078(iVar10, iParam1, iParam2);
		}
	}
	if (Global_68105 == 1)
	{
		if (func_66(iParam0, iVar10, &iVar4, 0))
		{
			func_58(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (func_59(iParam0, iVar10, &iVar4))
		{
			func_58(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}

int func_59(var uParam0, int iParam1, int iParam2)//Position - 0x450B
{
	int iVar0;
	
	iVar0 = GlobalFunc_19(iParam1);
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_172(uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = -99;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}







int func_66(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4DF8
{
	int iVar0;
	
	iVar0 = GlobalFunc_19(iParam1);
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_172(uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_59;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 = -99;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_67(int iParam0, int iParam1, int iParam2)//Position - 0x4E8E
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(uParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_172(iParam0, iParam1, iVar0))
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
				if (func_172(iParam0, iParam1, iVar1))
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
				return GlobalFunc_7634(iParam0, iParam2);
			}
		}
		else
		{
			return GlobalFunc_7110(iParam0, iParam1);
		}
	}
	return -99;
}



int func_70(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x52E6
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
				iVar1 = GlobalFunc_7110(uParam0, 1);
				iVar0 = GlobalFunc_24(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = GlobalFunc_7110(uParam0, 2);
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
									if (!GlobalFunc_7970(uParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!GlobalFunc_7970(uParam0, 3, 135, 150))
									{
										iVar0 = GlobalFunc_11079(iParam1, 3, 135, 150);
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
									if (!GlobalFunc_7970(uParam0, 3, 209, 222))
									{
										iVar0 = GlobalFunc_11079(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!GlobalFunc_7970(uParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = GlobalFunc_11079(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = GlobalFunc_11079(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = GlobalFunc_11079(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = GlobalFunc_11079(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!GlobalFunc_7970(uParam0, 3, 176, 191) && !GlobalFunc_7970(uParam0, 3, 227, 242))
									{
										iVar0 = GlobalFunc_11079(iParam1, 3, 176, 191);
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
								iVar4 = GlobalFunc_7110(uParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = GlobalFunc_7110(uParam0, 11);
								iVar5 = GlobalFunc_11181(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = GlobalFunc_7110(uParam0, 8);
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
								iVar7 = GlobalFunc_7110(uParam0, 8);
								iVar8 = GlobalFunc_7110(uParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = GlobalFunc_11181(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = GlobalFunc_11181(iParam1, iParam3, iVar8, 1);
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
								iVar9 = GlobalFunc_7110(uParam0, 11);
								iVar0 = GlobalFunc_11181(iParam1, -99, iVar9, 0);
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






































































































int func_172(int iParam0, int iParam1, int iParam2)//Position - 0x1FA55
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar21;
	int iVar31;
	var uVar32;
	
	if (PED::IS_PED_INJURED(uParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_68106[1 /*14*/] = { GlobalFunc_10870(iVar0, iParam1, iParam2) };
	if (!MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { GlobalFunc_7617(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_172(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar21 = { GlobalFunc_7616(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_172(iParam0, 14, uVar21[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_68106[2 /*14*/] = { GlobalFunc_10870(iVar0, 14, iVar4) };
									if (Global_68106[2 /*14*/].f_12 == iVar3)
									{
										if (func_172(iParam0, 14, iVar4))
										{
											if (!GlobalFunc_8307(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_68106[2 /*14*/])))
											{
												return 0;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = GlobalFunc_7110(iParam0, iVar2);
						Global_68106[2 /*14*/] = { GlobalFunc_10870(iVar0, iVar2, iVar1) };
						if (!GlobalFunc_8307(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_68106[2 /*14*/])))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar32 = { GlobalFunc_7616(iVar0, iParam2) };
		iVar31 = 0;
		while (iVar31 <= 8)
		{
			if (!func_172(iParam0, 14, uVar32[iVar31]))
			{
				return 0;
			}
			iVar31++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, Global_68106[1 /*14*/].f_12) == Global_68106[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_68106[1 /*14*/].f_12) == Global_68106[1 /*14*/].f_4 || Global_68106[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_68106[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, GlobalFunc_33(iParam1)) && Global_68106[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, GlobalFunc_33(iParam1)))
	{
		return 1;
	}
	return 0;
}









void func_181(bool bParam0)//Position - 0x1FEEC
{
	AUDIO::STOP_STREAM();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAIRGROUND_RIDES_LEVIATHAN"))
	{
		AUDIO::STOP_AUDIO_SCENE("FAIRGROUND_RIDES_LEVIATHAN");
	}
	if (bParam0)
	{
		HUD::CLEAR_HELP(1);
		MISC::CLEAR_BIT(&Global_68493, 7);
		GlobalFunc_2350(500, 1);
	}
	GlobalFunc_7610(303, 0, 0);
	GlobalFunc_431(&Local_892, 0, 1);
	GlobalFunc_894(&iLocal_930);
	GlobalFunc_894(&iLocal_931);
	GlobalFunc_234(PLAYER::PLAYER_PED_ID());
	if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
	}
	func_213();
	func_212(PLAYER::PLAYER_PED_ID(), -1631.348f, -1112.651f, 12.0206f);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 316.464f);
	ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
	ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), 1, 0);
	func_210(1, 1, 1, 1);
	if (bParam0)
	{
		HUD::CLEAR_HELP(1);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
		PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
		SYSTEM::WAIT(125);
	}
	GlobalFunc_7632(0);
	BRAIN::_0x6D6840CEE8845831("fairgroundHub");
	if (bParam0)
	{
		GlobalFunc_79(500, 0);
		GlobalFunc_10871(GlobalFunc_8329(), 1, 15);
	}
	GlobalFunc_6925(&uLocal_40);
	SCRIPT::TERMINATE_THIS_THREAD();
}





























void func_210(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2118F
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(uVar0, 0);
	PLAYER::SET_PLAYER_CONTROL(uVar0, iParam3, 0);
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
		if ((iLocal_38 != 0 && iLocal_38 != joaat("object")) && iLocal_38 != joaat("gadget_parachute"))
		{
			if (GlobalFunc_777(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_38, 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_38, 0);
				}
			}
		}
	}
	if (GlobalFunc_5228(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}


Vector3 func_212(int iParam0, struct<3> Param1)//Position - 0x21256
{
	var uVar0;
	
	Param1.f_2 = (Param1.f_2 + 0.15f);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Param1, &uVar0))
	{
		Param1.f_2 = uVar0;
	}
	if (GlobalFunc_234(uParam0))
	{
		ENTITY::SET_ENTITY_COORDS(uParam0, Param1, 1, 0, 0, 1);
	}
	return Param1;
}

void func_213()//Position - 0x2129A
{
	int iVar0;
	
	if (!GlobalFunc_234(iLocal_924[0]))
	{
		iLocal_924[0] = OBJECT::CREATE_OBJECT(joaat("prop_roller_car_01"), -1643.524f, -1124.681f, 17.4326f, 1, 1, 0);
	}
	if (!GlobalFunc_234(iLocal_924[1]))
	{
		iLocal_924[1] = OBJECT::CREATE_OBJECT(joaat("prop_roller_car_02"), -1645.146f, -1126.613f, 17.4326f, 1, 1, 0);
	}
	if (!GlobalFunc_234(iLocal_924[2]))
	{
		iLocal_924[2] = OBJECT::CREATE_OBJECT(joaat("prop_roller_car_02"), -1646.768f, -1128.545f, 17.4326f, 1, 1, 0);
	}
	if (!GlobalFunc_234(iLocal_924[3]))
	{
		iLocal_924[3] = OBJECT::CREATE_OBJECT(joaat("prop_roller_car_02"), -1648.39f, -1130.478f, 17.4326f, 1, 1, 0);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_924)
	{
		if (GlobalFunc_234(iLocal_924[iVar0]))
		{
			ENTITY::SET_ENTITY_HEADING(iLocal_924[iVar0], 140f);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_924[iVar0], 1);
			ENTITY::SET_ENTITY_COLLISION(iLocal_924[iVar0], 1, 0);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_924[iVar0], 1);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_924[iVar0], 1);
			GlobalFunc_129(&(iLocal_924[iVar0]), 0);
		}
		iVar0++;
	}
}










