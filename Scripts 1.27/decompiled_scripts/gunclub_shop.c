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
	int iLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 8;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 2;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 8;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 8;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	float fLocal_87 = 0f;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	struct<4> Local_90 = { 0, 0, 0, 0 } ;
	var uLocal_94[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	int iLocal_131 = 0;
	bool bLocal_132 = 0;
	int iLocal_133 = 0;
	bool bLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	struct<3> Local_138 = { 0, 0, 0 } ;
	float fLocal_141 = 0f;
	var uLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	bool bLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	var uLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	char* sLocal_167 = NULL;
	struct<818> Local_168 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_986 = 0;
	var uLocal_987 = 0;
	int iLocal_988 = 0;
	int iLocal_989 = 0;
	int iLocal_990 = 0;
	var uLocal_991 = 0;
	int iLocal_992 = 0;
	int iLocal_993 = 0;
	int iLocal_994 = 0;
	var uLocal_995 = 0;
	int iLocal_996 = 0;
	int iLocal_997 = 0;
	var uLocal_998 = 0;
	int iLocal_999 = 0;
	int iLocal_1000 = 0;
	int iLocal_1001 = 0;
	var uLocal_1002 = 0;
	int iLocal_1003 = 0;
	int iLocal_1004 = 0;
	int iLocal_1005 = 0;
	var uLocal_1006 = 0;
	int iLocal_1007 = 0;
	int iLocal_1008 = 0;
	var uLocal_1009 = 0;
	int iLocal_1010 = 0;
	int iLocal_1011 = 0;
	int iLocal_1012 = 0;
	var uLocal_1013 = 0;
	int iLocal_1014 = 0;
	int iLocal_1015 = 0;
	int iLocal_1016 = 0;
	int iLocal_1017 = 0;
	var uLocal_1018 = 0;
	int iLocal_1019 = 0;
	int iLocal_1020 = 0;
	bool bLocal_1021 = 0;
	int iLocal_1022 = 0;
	int iLocal_1023 = 0;
	int iLocal_1024 = 0;
	int iLocal_1025 = 0;
	int iLocal_1026 = 0;
	int iLocal_1027 = 0;
	int iLocal_1028 = 0;
	int iLocal_1029 = 0;
	int iLocal_1030 = 0;
	int iLocal_1031 = 0;
	bool bLocal_1032 = 0;
	bool bLocal_1033 = 0;
	var uLocal_1034[2] = { 0, 0 };
	int iLocal_1037[2] = { 0, 0 };
	int iLocal_1040 = 0;
	int iLocal_1041 = 0;
	struct<3> Local_1042 = { 0, 0, 0 } ;
	bool bLocal_1045 = 0;
	int iLocal_1046 = 0;
	int iLocal_1047 = 0;
	bool bLocal_1048 = 0;
	int iLocal_1049 = 0;
	int iLocal_1050 = 0;
	int iLocal_1051 = 0;
	int iLocal_1052 = 0;
	bool bLocal_1053 = 0;
	int iLocal_1054 = 0;
	var uLocal_1055 = 0;
	int iLocal_1056 = 0;
	int iLocal_1057 = 0;
	char cLocal_1058[64] = "";
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	bool bLocal_1074 = 0;
	int iLocal_1075 = 0;
	bool bLocal_1076 = 0;
	int iLocal_1077 = 0;
	struct<20> Local_1078 = { 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_1098 = 0;
	float fLocal_1099 = 0f;
	bool bLocal_1100 = 0;
	int iLocal_1101[96] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1198 = 0;
	int iLocal_1199 = 0;
	int iLocal_1200 = 0;
	int iLocal_1201 = 0;
	int iLocal_1202 = 0;
	bool bLocal_1203 = 0;
	int iLocal_1204 = 0;
	bool bLocal_1205 = 0;
	int iLocal_1206 = 0;
	int iLocal_1207 = 0;
	int iLocal_1208 = 0;
	int iLocal_1209 = 0;
	float fLocal_1210 = 0f;
	float fLocal_1211 = 0f;
	struct<3> Local_1212 = { 0, 0, 0 } ;
	int iLocal_1215 = 0;
	struct<5> Local_1216 = { 0, 0, 0, 0, 0 } ;
	var uLocal_1221 = 0;
	struct<11> Local_1222 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_1233 = { 0, 0, 0 } ;
	int iLocal_1236 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
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
	iLocal_17 = 3;
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_87 = ((0.05f + 0.275f) - 0.01f);
	iLocal_1016 = MISC::GET_RANDOM_INT_IN_RANGE(8000, 16000);
	fLocal_1099 = 0.001f;
	fLocal_1210 = 4f;
	fLocal_1211 = -98f;
	Local_1212 = { 0f, 0f, 0f };
	iLocal_127 = uScriptParam_0;
	if (!MISC::IS_BIT_SET(Global_1336615, 1))
	{
		if (iLocal_127 == 28)
		{
			MISC::SET_BIT(&Global_1336615, 1);
		}
	}
	MISC::SET_BIT(&(Global_90014.f_1267[iLocal_127]), 16);
	func_889();
	GlobalFunc_5809(iLocal_127);
	while (!func_887())
	{
		SYSTEM::WAIT(0);
	}
	func_886();
	func_859(&Global_2543149);
	if (GlobalFunc_1549(1))
	{
		iLocal_135 = 1;
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		PAD::_0x7F4724035FDCA1DD(2);
		PAD::_0x7F4724035FDCA1DD(0);
		if (GlobalFunc_8562(iLocal_127))
		{
			if (!iLocal_1098)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_168.f_12) && !PED::IS_PED_INJURED(Local_168.f_12))
				{
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_168.f_12, 0);
					iLocal_1098 = 1;
				}
			}
		}
		else if (iLocal_1098)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_168.f_12) && !PED::IS_PED_INJURED(Local_168.f_12))
			{
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_168.f_12, 1);
				iLocal_1098 = 0;
			}
		}
		func_856(&(Local_168.f_12));
		if (GlobalFunc_2507(iLocal_127) && !GlobalFunc_8593(&Local_168, iLocal_127))
		{
			if (GlobalFunc_5807(&Local_168))
			{
				func_837(&Local_168, &(Local_90.f_3), 0, 0);
				func_830(&Local_168, &(Local_168.f_103));
				if (Local_168.f_9)
				{
					if (!GlobalFunc_8560(Local_168))
					{
						func_824(&Local_168, &(Local_168.f_103), 0);
					}
					else
					{
						func_823();
					}
				}
				func_800();
				func_798();
				func_797();
				func_795();
				if (Local_168.f_7 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
				}
				switch (Local_168.f_11)
				{
					case 0:
						func_786();
						break;
					
					case 1:
						GlobalFunc_7166(0);
						if (GlobalFunc_5803(Local_168))
						{
							func_769(Local_168, 0, 0);
							func_769(Local_168, 0, 1);
						}
						func_768();
						if (Local_168.f_11 == 2)
						{
							if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
							{
								uLocal_1034[0] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), MISC::GET_RANDOM_INT_IN_RANGE(4000, 5000));
								uLocal_1034[1] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 0);
							}
							else
							{
								iLocal_1037[0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 5000));
								iLocal_1037[1] = MISC::GET_GAME_TIMER();
							}
							Local_1042 = { 0f, 0f, 0f };
							func_758();
						}
						break;
					
					case 2:
						func_758();
						GlobalFunc_9218(&Local_168, &(Local_168.f_103));
						break;
					
					case 3:
						if (GlobalFunc_5803(Local_168))
						{
							func_769(Local_168, 0, 0);
							func_769(Local_168, 0, 1);
						}
						func_749();
						func_731();
						func_725();
						break;
					
					case 4:
						func_186();
						GlobalFunc_9218(&Local_168, &(Local_168.f_103));
						break;
					
					case 5:
						Local_168.f_11 = 1;
						break;
					}
			}
		}
		else
		{
			func_23(0);
		}
		if (GlobalFunc_8548(&Local_168))
		{
			func_10();
		}
		func_1();
	}
}

void func_1()//Position - 0x33A
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	int iVar6;
	
	if (Local_168.f_9 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uLocal_94[PLAYER::PLAYER_ID()] = Global_90014.f_1267[Local_168];
		GlobalFunc_5825(Local_168);
		if (Local_168.f_816)
		{
			if (NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), Local_168.f_817))
			{
				if (!MISC::IS_BIT_SET(Global_90014.f_1325, 26))
				{
					MISC::SET_BIT(&(Global_90014.f_1325), 26);
				}
				if ((!MISC::IS_BIT_SET(Global_90014.f_1267[Local_168], 0) && !MISC::IS_BIT_SET(Global_90014.f_1267[Local_168], 5)) && (!ENTITY::DOES_ENTITY_EXIST(Local_168.f_12) || PED::IS_PED_INJURED(Local_168.f_12)))
				{
					iVar0 = 0;
					while (iVar0 < 32)
					{
						if (GlobalFunc_252(PLAYER::INT_TO_PLAYERINDEX(iVar0), 1, 1))
						{
							if (MISC::IS_BIT_SET(uLocal_94[iVar0], 5))
							{
								MISC::CLEAR_BIT(&(Global_90014.f_1325), 26);
								MISC::SET_BIT(&(Global_90014.f_1325), 28);
								iVar0 = 33;
							}
						}
						iVar0++;
					}
				}
				else
				{
					MISC::CLEAR_BIT(&(Global_90014.f_1325), 26);
					MISC::SET_BIT(&(Global_90014.f_1325), 28);
				}
				if (Global_1573286)
				{
					Var1 = { GlobalFunc_546(Local_168) };
					uVar4 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Var1, 25f, joaat("hei_prop_heist_binbag"), 0, 0, 1);
					if (ENTITY::DOES_ENTITY_EXIST(uVar4))
					{
						iVar5 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var1, GlobalFunc_2464(Local_168));
						iVar6 = INTERIOR::GET_INTERIOR_FROM_ENTITY(uVar4);
						if (iVar5 != 0 && iVar5 == iVar6)
						{
							MISC::CLEAR_BIT(&(Global_90014.f_1325), 26);
							MISC::SET_BIT(&(Global_90014.f_1325), 28);
						}
					}
				}
				if (MISC::IS_BIT_SET(Global_90014.f_1325, 26))
				{
					if (!MISC::IS_BIT_SET(Global_90014.f_1325, 27))
					{
						GlobalFunc_5781(Local_168, 1, 0);
						MISC::SET_BIT(&(Global_90014.f_1325), 27);
						if (MISC::IS_BIT_SET(Global_90014.f_1325, 28))
						{
							MISC::CLEAR_BIT(&(Global_90014.f_1325), 28);
						}
					}
				}
				else if (!MISC::IS_BIT_SET(Global_90014.f_1325, 28))
				{
					GlobalFunc_5781(Local_168, 0, 0);
					MISC::SET_BIT(&(Global_90014.f_1325), 28);
					if (MISC::IS_BIT_SET(Global_90014.f_1325, 27))
					{
						MISC::CLEAR_BIT(&(Global_90014.f_1325), 27);
					}
				}
				Local_168.f_816 = 0;
			}
		}
		else
		{
			Local_168.f_817 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 2000);
			Local_168.f_816 = 1;
		}
	}
}









void func_10()//Position - 0x45E6
{
	func_23(1);
	func_11(&Local_168);
}

void func_11(var uParam0)//Position - 0x45F9
{
	int iVar0;
	
	GlobalFunc_2457(&(uParam0->f_103));
	GlobalFunc_2456(uParam0);
	GlobalFunc_2455(&(uParam0->f_646));
	GlobalFunc_2454(&(uParam0->f_170));
	uParam0->f_645 = 0;
	iVar0 = 0;
	while (iVar0 < 96)
	{
		uParam0->f_218.f_102[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_218.f_97)
	{
		uParam0->f_218.f_97[iVar0] = 0;
		iVar0++;
	}
}












void func_23(bool bParam0)//Position - 0x4C48
{
	var uVar0;
	
	GlobalFunc_7166(1);
	if (Local_168.f_103.f_19)
	{
		if (GlobalFunc_1814())
		{
			Global_2428131.f_656.f_40 = 0;
			GlobalFunc_5423();
			Global_2428131.f_656.f_33[0] = Local_168.f_103.f_1;
			Global_2428131.f_656.f_33[1] = Local_168.f_103.f_3;
			Global_2428131.f_656.f_39 = Local_168.f_103;
			if (Local_168.f_103.f_5 == 1)
			{
				Global_2428131.f_656.f_33[2] = Local_168.f_103.f_2;
				Global_2428131.f_656.f_40 = 1;
			}
		}
	}
	if (Local_168.f_3 != -1)
	{
		GlobalFunc_5420(&(Local_168.f_3));
	}
	func_170(&Local_168, iLocal_127);
	GlobalFunc_2465(&(Local_168.f_38));
	if (!bParam0 && !iLocal_1051)
	{
		func_163(1);
	}
	func_82(0, 1);
	MISC::_0x65D2EBB47E1CEC21(0);
	GlobalFunc_4988(1, Local_168);
	Global_2540565 = 0;
	GlobalFunc_5782(Local_168);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_167) && !bParam0)
	{
		STREAMING::REMOVE_ANIM_DICT(sLocal_167);
	}
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	func_76();
	func_75();
	Global_90014.f_1 = 0;
	if (Local_168.f_11 == 2)
	{
		if (CAM::DOES_CAM_EXIST(Local_168.f_141.f_10))
		{
			if (CAM::IS_CAM_ACTIVE(Local_168.f_141.f_10))
			{
				CAM::SET_CAM_ACTIVE(Local_168.f_141.f_10, 0);
			}
			CAM::DESTROY_CAM(Local_168.f_141.f_10, 0);
		}
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		GlobalFunc_9185();
	}
	if (Local_168.f_103.f_19)
	{
		uVar0 = PLAYER::PLAYER_PED_ID();
		func_53(uVar0, 1, 0);
		GlobalFunc_10160(&(Local_168.f_103), 0, 1, 1);
		if (Global_68245)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, 0);
		}
		CAM::SET_WIDESCREEN_BORDERS(0, 0);
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		GlobalFunc_2463(1);
		GlobalFunc_9185();
		GlobalFunc_2462();
		Local_1078.f_19 = 0;
		GlobalFunc_2582(&Local_1078, 1);
	}
	if (!PED::IS_PED_INJURED(Local_168.f_12))
	{
		if (Local_168.f_10)
		{
			if (GlobalFunc_2458(iLocal_127) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
			}
			else
			{
				PED::DELETE_PED(&(Local_168.f_12));
			}
		}
		else if (bParam0)
		{
			if (GlobalFunc_2458(iLocal_127) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
			}
			else
			{
				PED::DELETE_PED(&(Local_168.f_12));
			}
		}
		else if (GlobalFunc_2458(iLocal_127) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
		}
		else
		{
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_168.f_12, 1);
			PED::SET_PED_KEEP_TASK(Local_168.f_12, 1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_168.f_12));
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_168.f_12))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_168.f_12))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_168.f_12))
				{
					if (GlobalFunc_2458(iLocal_127) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
					}
					else
					{
						PED::DELETE_PED(&(Local_168.f_12));
					}
				}
				else if (GlobalFunc_2458(iLocal_127) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_168.f_12));
				}
			}
		}
		Local_168.f_12 = 0;
	}
	if (iLocal_158)
	{
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_159);
		iLocal_158 = 0;
	}
	if (bParam0)
	{
		GlobalFunc_2460("Resetting script", -1);
		MISC::SET_BIT(&(Global_90014.f_1267[iLocal_127]), 11);
	}
	else
	{
		GlobalFunc_2460("Terminating script", -1);
		MISC::CLEAR_BIT(&(Global_90014.f_1267[iLocal_127]), 16);
		if (MISC::IS_BIT_SET(Global_1336615, 1))
		{
			MISC::CLEAR_BIT(&Global_1336615, 1);
		}
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}






























void func_53(int iParam0, bool bParam1, bool bParam2)//Position - 0x5A9D
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = GlobalFunc_6782(uParam0);
	if (GlobalFunc_42(iVar0) && !PED::IS_PED_INJURED(uParam0))
	{
		GlobalFunc_7103(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar0 /*284*/]), bParam1);
		iVar1 = 0;
		while (iVar1 <= (8 - 1))
		{
			HUD::HUD_SET_WEAPON_WHEEL_TOP_SLOT(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1151[iVar1 /*4*/][iVar0]);
			if (bParam2)
			{
				if (iVar1 == Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1184 || (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1184 == -1 && iVar1 == 4))
				{
					if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1151[iVar1 /*4*/][iVar0] != 0 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1151[iVar1 /*4*/][iVar0] != joaat("weapon_molotov"))
					{
						if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1151[iVar1 /*4*/][iVar0], 0))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1151[iVar1 /*4*/][iVar0], 1);
						}
					}
				}
			}
			iVar1++;
		}
		if (iVar0 == 0)
		{
			STATS::STAT_GET_INT(joaat("sp0_parachute_current_tint"), &uVar2, -1);
		}
		else if (iVar0 == 1)
		{
			STATS::STAT_GET_INT(joaat("sp1_parachute_current_tint"), &uVar2, -1);
		}
		else if (iVar0 == 2)
		{
			STATS::STAT_GET_INT(joaat("sp2_parachute_current_tint"), &uVar2, -1);
		}
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), uVar2);
	}
}






















void func_75()//Position - 0x72EA
{
	if (Local_1233.x)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1233.f_1);
		Local_1233.x = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1233.f_2))
	{
		PED::DELETE_PED(&(Local_1233.f_2));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_2542603))
	{
		PED::DELETE_PED(&Global_2542603);
	}
}

void func_76()//Position - 0x732D
{
	if (iLocal_131)
	{
		NETWORK::RELEASE_ALL_COMMERCE_ITEM_IMAGES();
		iLocal_131 = 0;
		bLocal_132 = false;
	}
}






void func_82(bool bParam0, bool bParam1)//Position - 0x7692
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<25> Var4;
	
	iVar0 = 0;
	while (iVar0 < 16)
	{
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (func_84(Local_168, &Global_2543149, &Var4, iVar0, iVar1, 0))
			{
				if (Var4.f_24 == 3)
				{
					if (iVar1 == 0)
					{
						iVar3 = joaat("prop_armour_pickup");
					}
					else if (iVar1 == 1)
					{
						iVar3 = joaat("prop_bodyarmour_02");
					}
					else if (iVar1 == 2)
					{
						iVar3 = joaat("prop_bodyarmour_03");
					}
					else if (iVar1 == 3)
					{
						iVar3 = joaat("prop_bodyarmour_04");
					}
					else if (iVar1 == 4)
					{
						iVar3 = joaat("prop_bodyarmour_05");
					}
				}
				else if (Var4.f_24 == 4)
				{
					iVar3 = joaat("p_parachute_s_shop");
				}
				else if (Var4.f_24 == 7)
				{
					iVar3 = func_83(&Global_2543149, Var4.f_23);
				}
				else if (Var4.f_24 == 6)
				{
					iVar3 = joaat("ind_prop_firework_04");
				}
				else if (Var4 == joaat("weapon_knife"))
				{
					iVar3 = joaat("prop_w_me_knife_01");
				}
				else if (Var4 == joaat("weapon_bottle"))
				{
					iVar3 = joaat("prop_w_me_bottle");
				}
				else if (Var4 == joaat("weapon_dagger"))
				{
					iVar3 = joaat("prop_w_me_dagger");
				}
				else if (Var4 == joaat("weapon_hatchet"))
				{
					iVar3 = joaat("prop_w_me_hatchet");
				}
				else
				{
					iVar3 = WEAPON::GET_WEAPONTYPE_MODEL(Var4);
				}
				if (iVar3 != 0)
				{
					if (bParam1)
					{
						if (bLocal_134)
						{
							ENTITY::REMOVE_MODEL_HIDE(Var4.f_1, fLocal_1099, iVar3, 0);
						}
					}
					else if (!bLocal_134)
					{
						ENTITY::CREATE_MODEL_HIDE(Var4.f_1, fLocal_1099, iVar3, 1);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_168.f_218[iVar2]))
				{
					if (bParam0)
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_168.f_218[iVar2], true);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_168.f_218[iVar2], Var4.f_1, 0, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(Local_168.f_218[iVar2], Var4.f_4, 2, 1);
					}
					else
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_168.f_218[iVar2], true);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_168.f_218[iVar2], Var4.f_1 + Vector(100f, 0f, 0f), 0, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(Local_168.f_218[iVar2], Var4.f_4, 2, 1);
					}
					if (iVar3 == joaat("prop_ld_test_01"))
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_168.f_218[iVar2], false);
					}
				}
			}
			iVar2++;
			iVar1++;
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (bLocal_134)
		{
			ENTITY::REMOVE_MODEL_HIDE(Local_168.f_12.f_2, 20f, joaat("v_ilev_gc_weapons"), 0);
			ENTITY::REMOVE_MODEL_HIDE(Local_168.f_12.f_2, 20f, joaat("v_ilev_gc_handguns"), 0);
			ENTITY::REMOVE_MODEL_HIDE(Local_168.f_12.f_2, 20f, joaat("p_parachute_s"), 0);
			ENTITY::REMOVE_MODEL_HIDE(Local_168.f_12.f_2, 20f, joaat("v_7_wallhooks"), 0);
			ENTITY::REMOVE_MODEL_HIDE(Local_168.f_12.f_2, 20f, joaat("v_22_wallhooks"), 0);
		}
	}
	else if (!bLocal_134)
	{
		ENTITY::CREATE_MODEL_HIDE(Local_168.f_12.f_2, 20f, joaat("v_ilev_gc_weapons"), 1);
		ENTITY::CREATE_MODEL_HIDE(Local_168.f_12.f_2, 20f, joaat("v_ilev_gc_handguns"), 1);
		ENTITY::CREATE_MODEL_HIDE(Local_168.f_12.f_2, 20f, joaat("p_parachute_s"), 1);
		ENTITY::CREATE_MODEL_HIDE(Local_168.f_12.f_2, 20f, joaat("v_7_wallhooks"), 1);
		ENTITY::CREATE_MODEL_HIDE(Local_168.f_12.f_2, 20f, joaat("v_22_wallhooks"), 1);
	}
	bLocal_134 = !bParam1;
}

int func_83(var uParam0, int iParam1)//Position - 0x799F
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		return joaat("prop_ld_test_01");
	}
	iVar0 = MISC::GET_HASH_KEY(NETWORK::GET_COMMERCE_ITEM_ID(uParam0->f_26[iParam1]));
	if (iVar0 == joaat("weapon_pistol50"))
	{
		return joaat("v_ilev_gunsign_pistol50");
	}
	else if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iVar0 == joaat("weapon_assaultsmg"))
	{
		return joaat("v_ilev_gunsign_asssmg");
	}
	else if (iVar0 == -947031628)
	{
		return joaat("v_ilev_gunsign_hvyrif");
	}
	else if (iVar0 == -572349828)
	{
		return joaat("v_ilev_gunsign_assmg");
	}
	else if (iVar0 == joaat("weapon_bullpupshotgun"))
	{
		return joaat("v_ilev_gunsign_bull");
	}
	else if (iVar0 == 392730790)
	{
		return joaat("v_ilev_gunsign_asssniper");
	}
	else if (iVar0 == -1887867191)
	{
		return joaat("v_ilev_gunsign_progar");
	}
	return joaat("prop_ld_test_01");
}

bool func_84(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x7A67
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	GlobalFunc_3261(iParam2, 8, 0, 0, -1, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f);
	iVar0 = MISC::GET_HASH_KEY("v_gun");
	iVar1 = MISC::GET_HASH_KEY("v_gun2");
	iVar2 = MISC::GET_HASH_KEY(GlobalFunc_2464(iParam0));
	switch (iParam3)
	{
		case 0:
			switch (iParam4)
			{
				case 0:
					GlobalFunc_3261(iParam2, 4, 0, joaat("gadget_parachute"), 1, 19.7012f, -1103.268f, 31.3153f, -10.75f, 0f, -200f, 0f, 0.755f, 0f, 0f, 0f, 0f);
					break;
			}
			break;
		
		case 1:
			switch (iParam4)
			{
				case 0:
					GlobalFunc_3261(iParam2, 0, joaat("AMMO_SMG"), joaat("weapon_microsmg"), 16, 19.52f, -1103.05f, 30.8f, 0f, 0f, -20f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 1:
					GlobalFunc_3261(iParam2, 0, joaat("AMMO_SMG"), joaat("weapon_smg"), 30, 19.54f, -1103.05f, 30.36f, 0f, 0f, -20f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
			}
			break;
		
		case 2:
			switch (iParam4)
			{
				case 0:
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						GlobalFunc_3261(iParam2, 0, joaat("AMMO_SMG"), joaat("weapon_assaultsmg"), 30, 20.755f, -1103.491f, 31.425f, 0f, 0f, -20f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					}
					else
					{
						GlobalFunc_3261(iParam2, 0, joaat("AMMO_SHOTGUN"), joaat("weapon_sawnoffshotgun"), 8, 20.53f, -1103.41f, 31.4f, 0f, 0f, -20f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					}
					break;
				
				case 1:
					GlobalFunc_3261(iParam2, 0, joaat("AMMO_SHOTGUN"), joaat("weapon_pumpshotgun"), 8, 20.48f, -1103.4f, 30.9f, 0f, 0f, -20f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 2:
					GlobalFunc_3261(iParam2, 0, joaat("AMMO_SHOTGUN"), joaat("weapon_assaultshotgun"), 8, 20.62f, -1103.44f, 30.43f, 0f, 0f, -20f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
			}
			break;
		
		case 3:
			switch (iParam4)
			{
				case 0:
					GlobalFunc_3261(iParam2, 0, joaat("AMMO_RIFLE"), joaat("weapon_assaultrifle"), 30, 21.65f, -1103.79f, 31.37f, 0f, 0f, -20f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 1:
					GlobalFunc_3261(iParam2, 0, joaat("AMMO_RIFLE"), joaat("weapon_carbinerifle"), 30, 21.7f, -1103.81f, 30.89f, 0f, 0f, -20f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 2:
					GlobalFunc_3261(iParam2, 0, joaat("AMMO_RIFLE"), joaat("weapon_advancedrifle"), 30, 21.7f, -1103.81f, 30.41f, 0f, 0f, -20f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
			}
			break;
		
		case 4:
			switch (iParam4)
			{
				case 0:
					GlobalFunc_3261(iParam2, 0, joaat("AMMO_SNIPER"), joaat("weapon_sniperrifle"), 10, 22.61f, -1104.16f, 30.9f, 0f, 0f, -20f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 1:
					GlobalFunc_3261(iParam2, 0, joaat("AMMO_SNIPER"), joaat("weapon_heavysniper"), 6, 22.56f, -1104.14f, 30.42f, 0f, 0f, -20f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
			}
			break;
		
		case 5:
			switch (iParam4)
			{
				case 0:
					GlobalFunc_3261(iParam2, 0, joaat("AMMO_MG"), joaat("weapon_mg"), 54, 23.99f, -1104.71f, 31.17f, 0f, 0f, -20f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 1:
					GlobalFunc_3261(iParam2, 0, joaat("AMMO_MG"), joaat("weapon_combatmg"), 100, 24.08f, -1104.77f, 30.58f, 0f, 0f, -20f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
			}
			break;
		
		case 6:
			switch (iParam4)
			{
				case 0:
					GlobalFunc_3261(iParam2, 0, joaat("AMMO_RPG"), joaat("weapon_rpg"), 1, 25.6f, -1105.35f, 31.35f, 0f, 0f, -20f, -0.5f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 1:
					GlobalFunc_3261(iParam2, 0, joaat("AMMO_GRENADELAUNCHER"), joaat("weapon_grenadelauncher"), 10, 25.38f, -1105.22f, 30.96f, 0f, 0f, -20f, -0.5f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 2:
					GlobalFunc_3261(iParam2, 0, joaat("AMMO_MINIGUN"), joaat("weapon_minigun"), 50, 25.28f, -1105.25f, 30.47f, 0f, 0f, -20f, -0.5f, -0.755f, 0f, 0f, 0f, 0f);
					break;
			}
			break;
		
		case 7:
			switch (iParam4)
			{
				case 0:
					GlobalFunc_3261(iParam2, 1, 0, joaat("weapon_knife"), 1, 19.8568f, -1105.401f, 29.5403f, -89.9802f, 65f, 0f, 0f, 0f, 0.475f, 0f, 0f, 0f);
					break;
				
				case 1:
					GlobalFunc_3261(iParam2, 1, 0, joaat("weapon_nightstick"), 1, 20.2813f, -1105.526f, 29.5342f, -89.9802f, 64.9999f, 0f, 0f, 0f, 0.475f, 88.25f, 25.75f, -0.75f);
					break;
			}
			break;
		
		case 8:
			switch (iParam4)
			{
				case 0:
					GlobalFunc_3261(iParam2, 0, 0, joaat("weapon_stungun"), 1, 21.8045f, -1105.765f, 29.5454f, -90f, -5f, -20f, 0f, 0f, 0.475f, 90f, 5f, 0f);
					break;
				
				case 1:
					GlobalFunc_3261(iParam2, 0, joaat("AMMO_PISTOL"), joaat("weapon_appistol"), 18, 21.9604f, -1106.077f, 29.5387f, -90f, -5f, -20f, 0f, 0f, 0.475f, 90f, 5f, 0f);
					break;
				
				case 2:
					GlobalFunc_3261(iParam2, 0, joaat("AMMO_PISTOL"), joaat("weapon_combatpistol"), 12, 22.239f, -1105.929f, 29.5407f, -90f, -5f, -20f, 0f, 0f, 0.475f, 90f, 5f, 0f);
					break;
				
				case 3:
					GlobalFunc_3261(iParam2, 0, joaat("AMMO_PISTOL"), joaat("weapon_pistol"), 12, 22.3535f, -1106.242f, 29.5416f, -90f, -5f, -20f, 0f, 0f, 0.475f, 90f, 5f, 0f);
					break;
			}
			break;
		
		case 9:
			switch (iParam4)
			{
				case 0:
					GlobalFunc_3261(iParam2, 2, joaat("AMMO_SMOKEGRENADE"), joaat("weapon_smokegrenade"), 1, 23.2676f, -1107.351f, 29.6454f, 0f, 0f, 245f, 0f, 0f, 0.475f, 0f, 0f, 0f);
					break;
				
				case 1:
					GlobalFunc_3261(iParam2, 2, 214501711, joaat("weapon_grenade"), 1, 23.0382f, -1108.005f, 29.5878f, 0f, 0f, 245f, 0f, 0f, 0.475f, 0f, 0f, 0f);
					break;
				
				case 2:
					GlobalFunc_3261(iParam2, 2, joaat("AMMO_STICKYBOMB"), joaat("weapon_stickybomb"), 1, 22.8202f, -1108.452f, 29.5571f, 0f, 0f, 0f, 0f, 0f, 0.475f, 90f, 0f, -112f);
					break;
			}
			break;
		
		case 10:
			switch (iParam4)
			{
				case 0:
					GlobalFunc_3261(iParam2, 5, 0, joaat("weapon_petrolcan"), 5000, 22.9739f, -1109.181f, 29.6053f, 90f, 0f, 115f, -0.278f, -0.073f, 0.693f, -90f, 0f, 0f);
					break;
			}
			break;
		
		case 11:
			switch (iParam4)
			{
				case 0:
					GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[0], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 1:
					GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[1], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 2:
					GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[2], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 3:
					GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[3], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 4:
					GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[4], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 5:
					GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[5], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
			}
			break;
		
		case 12:
			switch (iParam4)
			{
				case 0:
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[7], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					}
					else
					{
						GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[6], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					}
					break;
				
				case 1:
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[9], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					}
					else
					{
						GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[7], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					}
					break;
				
				case 2:
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[10], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					}
					else
					{
						GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[8], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					}
					break;
				
				case 3:
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[8], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					}
					else
					{
						GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[10], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					}
					break;
				
				case 4:
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[6], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					}
					else
					{
						GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[11], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					}
					break;
				
				case 5:
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[11], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					}
					else
					{
						GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[9], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					}
					break;
			}
			break;
		
		case 13:
			switch (iParam4)
			{
				case 0:
					GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[12], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 1:
					GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[13], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 2:
					GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[14], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 3:
					GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[15], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 4:
					GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[16], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 5:
					GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[17], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
			}
			break;
		
		case 14:
			switch (iParam4)
			{
				case 0:
					GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[18], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 1:
					GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[19], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 2:
					GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[20], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 3:
					GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[21], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 4:
					GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[22], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
				
				case 5:
					GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[23], 1, 25.573f, -1106.415f, 32f, 0f, 0f, -120f, 0f, -0.755f, 0f, 0f, 0f, 0f);
					break;
			}
			break;
		
		case 15:
			switch (iParam4)
			{
				case 0:
					GlobalFunc_3261(iParam2, 3, 0, joaat("weapon_unarmed"), 20, 16.2547f, -1110.088f, 30.7311f, 0f, 0f, 70f, 0f, -0.565f, 0f, 0f, 0f, 0f);
					break;
				
				case 1:
					GlobalFunc_3261(iParam2, 3, 0, joaat("weapon_unarmed"), 40, 16.4693f, -1109.498f, 30.7311f, 0f, 0f, 70f, 0f, -0.565f, 0f, 0f, 0f, 0f);
					break;
				
				case 2:
					GlobalFunc_3261(iParam2, 3, 0, joaat("weapon_unarmed"), 60, 16.6786f, -1108.923f, 30.7311f, 0f, 0f, 70f, 0f, -0.565f, 0f, 0f, 0f, 0f);
					break;
				
				case 3:
					GlobalFunc_3261(iParam2, 3, 0, joaat("weapon_unarmed"), 80, 16.3512f, -1109.822f, 29.9462f, 0f, 0f, 70f, 0f, -0.565f, 0f, 0f, 0f, 0f);
					break;
				
				case 4:
					GlobalFunc_3261(iParam2, 3, 0, joaat("weapon_unarmed"), 100, 16.5802f, -1109.193f, 29.9462f, 0f, 0f, 70f, 0f, -0.565f, 0f, 0f, 0f, 0f);
					break;
			}
			break;
	}
	if (((iParam3 == 11 || iParam3 == 12) || iParam3 == 13) || iParam3 == 14)
	{
		switch (iParam4)
		{
			case 0:
				iParam2->f_1.f_2 = (iParam2->f_1.f_2 - 0.43f);
				break;
			
			case 1:
				iParam2->f_1.f_2 = (iParam2->f_1.f_2 - 0.7f);
				break;
			
			case 2:
				iParam2->f_1.f_2 = (iParam2->f_1.f_2 - 0.97f);
				break;
			
			case 3:
				iParam2->f_1.f_2 = (iParam2->f_1.f_2 - 1.24f);
				break;
			
			case 4:
				iParam2->f_1.f_2 = (iParam2->f_1.f_2 - 1.51f);
				break;
			
			case 5:
				iParam2->f_1.f_2 = (iParam2->f_1.f_2 - 1.78f);
				break;
			}
	}
	if (((*iParam2 == joaat("weapon_hammer") || *iParam2 == joaat("weapon_bottle")) || *iParam2 == joaat("weapon_dagger")) || *iParam2 == joaat("weapon_hatchet"))
	{
		iParam2->f_4.f_1 = (iParam2->f_4.f_1 + 90f);
	}
	if (*iParam2 == joaat("weapon_proxmine"))
	{
		iParam2->f_4 = (iParam2->f_4 + 90f);
	}
	if (*iParam2 == joaat("weapon_musket"))
	{
		iParam2->f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(iParam2->f_1, iParam2->f_4.f_2, -0.3f, 0f, 0f) };
	}
	if (*iParam2 == joaat("weapon_firework"))
	{
		iParam2->f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(iParam2->f_1, iParam2->f_4.f_2, 0.1f, 0f, 0f) };
	}
	if (*iParam2 == joaat("weapon_specialcarbine"))
	{
		iParam2->f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(iParam2->f_1, iParam2->f_4.f_2, -0.05f, 0f, 0f) };
	}
	if (*iParam2 == joaat("weapon_hominglauncher"))
	{
		iParam2->f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(iParam2->f_1, iParam2->f_4.f_2, 0.4f, 0f, 0f) };
	}
	if (iParam3 == 11)
	{
		iParam2->f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(iParam2->f_1, iParam2->f_4.f_2, -0.4f, 0f, 0f) };
	}
	else if (iParam3 == 12)
	{
		iParam2->f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(iParam2->f_1, iParam2->f_4.f_2, Vector(0f, 0f, -0.4f) + Vector(0f, 0f, 1.16f)) };
	}
	else if (iParam3 == 13)
	{
		iParam2->f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(iParam2->f_1, iParam2->f_4.f_2, Vector(0f, 0f, -0.4f) + Vector(0f, 0f, 2.32f)) };
	}
	else if (iParam3 == 14)
	{
		iParam2->f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(iParam2->f_1, iParam2->f_4.f_2, Vector(0f, 0f, -0.4f) + Vector(0f, 0f, 3.48f)) };
	}
	if (iVar2 == iVar1)
	{
		switch (iParam3)
		{
			case 0:
				switch (iParam4)
				{
					case 0:
						GlobalFunc_3260(iParam2, joaat("gadget_parachute"), 1689.082f, 3759.161f, 36.2236f, 0f, 0f, -132f, 0f, 0.755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 1:
				switch (iParam4)
				{
					case 0:
						GlobalFunc_3260(iParam2, joaat("weapon_microsmg"), 1688.8f, 3759.09f, 35.7f, 0f, 0f, 47.3919f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						GlobalFunc_3260(iParam2, joaat("weapon_smg"), 1688.82f, 3759.1f, 35.27f, 0f, 0f, 47.3919f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 2:
				switch (iParam4)
				{
					case 0:
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							GlobalFunc_3260(iParam2, joaat("weapon_assaultsmg"), 1689.693f, 3760.031f, 36.328f, 0f, 0f, 47.3919f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							GlobalFunc_3260(iParam2, joaat("weapon_sawnoffshotgun"), 1689.51f, 3759.85f, 36.3f, 0f, 0f, 47.3919f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 1:
						GlobalFunc_3260(iParam2, joaat("weapon_pumpshotgun"), 1689.51f, 3759.83f, 35.8f, 0f, 0f, 47.3919f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						GlobalFunc_3260(iParam2, joaat("weapon_assaultshotgun"), 1689.56f, 3759.91f, 35.34f, 0f, 0f, 47.3919f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 3:
				switch (iParam4)
				{
					case 0:
						GlobalFunc_3260(iParam2, joaat("weapon_assaultrifle"), 1690.32f, 3760.76f, 36.27f, 0f, 0f, 47.3919f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						GlobalFunc_3260(iParam2, joaat("weapon_carbinerifle"), 1690.36f, 3760.8f, 35.79f, 0f, 0f, 47.3919f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						GlobalFunc_3260(iParam2, joaat("weapon_advancedrifle"), 1690.35f, 3760.8f, 35.32f, 0f, 0f, 47.3919f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 4:
				switch (iParam4)
				{
					case 0:
						GlobalFunc_3260(iParam2, joaat("weapon_sniperrifle"), 1691.02f, 3761.51f, 35.81f, 0f, 0f, 47.3919f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						GlobalFunc_3260(iParam2, joaat("weapon_heavysniper"), 1690.99f, 3761.47f, 35.32f, 0f, 0f, 47.3919f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 5:
				switch (iParam4)
				{
					case 0:
						GlobalFunc_3260(iParam2, joaat("weapon_mg"), 1692.06f, 3762.57f, 36.08f, 0f, 0f, 47.3919f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						GlobalFunc_3260(iParam2, joaat("weapon_combatmg"), 1692.15f, 3762.63f, 35.49f, 0f, 0f, 47.3919f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 6:
				switch (iParam4)
				{
					case 0:
						GlobalFunc_3260(iParam2, joaat("weapon_rpg"), 1693.26f, 3763.82f, 36.26f, 0f, 0f, 47.3919f, -0.5f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						GlobalFunc_3260(iParam2, joaat("weapon_grenadelauncher"), 1693.12f, 3763.72f, 35.88f, 0f, 0f, 47.3919f, -0.5f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						GlobalFunc_3260(iParam2, joaat("weapon_minigun"), 1693.06f, 3763.56f, 35.39f, 0f, 0f, 47.3919f, -0.5f, -0.755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 7:
				switch (iParam4)
				{
					case 0:
						GlobalFunc_3260(iParam2, joaat("weapon_knife"), 1691.113f, 3758.477f, 34.4486f, -90f, 0f, 0f, 0f, 0f, 0.475f, 35f, 0f, 0f);
						break;
					
					case 1:
						GlobalFunc_3260(iParam2, joaat("weapon_nightstick"), 1691.394f, 3758.84f, 34.4425f, -89.9657f, -2.39193f, 0f, 0f, 0f, 0.475f, 45f, 0f, 0f);
						break;
				}
				break;
			
			case 8:
				switch (iParam4)
				{
					case 0:
						GlobalFunc_3260(iParam2, joaat("weapon_stungun"), 1692.197f, 3760.145f, 34.4537f, -90f, -45f, 0f, 0f, 0f, 0.475f, 90f, 45f, 45f);
						break;
					
					case 1:
						GlobalFunc_3260(iParam2, joaat("weapon_appistol"), 1692.546f, 3760.169f, 34.447f, -90f, -45f, 0f, 0f, 0f, 0.475f, 90f, 45f, 45f);
						break;
					
					case 2:
						GlobalFunc_3260(iParam2, joaat("weapon_combatpistol"), 1692.516f, 3760.483f, 34.449f, -90f, -45f, 0f, 0f, 0f, 0.475f, 90f, 45f, 45f);
						break;
					
					case 3:
						GlobalFunc_3260(iParam2, joaat("weapon_pistol"), 1692.849f, 3760.468f, 34.4499f, -90f, -45f, 0f, 0f, 0f, 0.475f, 90f, 45f, 45f);
						break;
				}
				break;
			
			case 9:
				switch (iParam4)
				{
					case 0:
						GlobalFunc_3260(iParam2, joaat("weapon_smokegrenade"), 1694.224f, 3760.886f, 34.5537f, 0f, 0f, 310f, 0f, 0f, 0.475f, 0f, 0f, 0f);
						break;
					
					case 1:
						GlobalFunc_3260(iParam2, joaat("weapon_grenade"), 1694.739f, 3760.423f, 34.4961f, 0f, 0f, 310f, 0f, 0f, 0.475f, 0f, 0f, 0f);
						break;
					
					case 2:
						GlobalFunc_3260(iParam2, joaat("weapon_stickybomb"), 1695.068f, 3760.049f, 34.4655f, 0f, 0f, 45f, 0f, 0f, 0.475f, 90f, 0f, -90f);
						break;
				}
				break;
			
			case 10:
				switch (iParam4)
				{
					case 0:
						GlobalFunc_3261(iParam2, 5, 0, joaat("weapon_petrolcan"), 5000, 1695.804f, 3759.918f, 34.5136f, -90f, 0f, 2.5f, -0.278f, -0.073f, 0.693f, 90f, 0f, -2.5f);
						break;
				}
				break;
			
			case 11:
				switch (iParam4)
				{
					case 0:
						GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[0], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[1], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[2], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[3], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 4:
						GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[4], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 5:
						GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[5], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 12:
				switch (iParam4)
				{
					case 0:
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[7], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[6], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 1:
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[9], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[7], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 2:
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[10], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[8], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 3:
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[8], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[10], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 4:
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[6], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[11], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 5:
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[11], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[9], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						}
						break;
				}
				break;
			
			case 13:
				switch (iParam4)
				{
					case 0:
						GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[12], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[13], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[14], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[15], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 4:
						GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[16], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 5:
						GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[17], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 14:
				switch (iParam4)
				{
					case 0:
						GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[18], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[19], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[20], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[21], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 4:
						GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[22], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
					
					case 5:
						GlobalFunc_3261(iParam2, 7, 0, (*uParam1)[23], 1, 1694.283f, 3763.622f, 37.06f, 0f, 0f, -42.608f, 0f, -0.755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 15:
				switch (iParam4)
				{
					case 0:
						GlobalFunc_3260(iParam2, joaat("weapon_unarmed"), 1694.045f, 3753.344f, 35.6458f, 0f, 0f, 137.392f, 0f, -0.565f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						GlobalFunc_3260(iParam2, joaat("weapon_unarmed"), 1693.583f, 3753.768f, 35.6458f, 0f, 0f, 137.392f, 0f, -0.565f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						GlobalFunc_3260(iParam2, joaat("weapon_unarmed"), 1693.133f, 3754.183f, 35.6458f, 0f, 0f, 137.392f, 0f, -0.565f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						GlobalFunc_3260(iParam2, joaat("weapon_unarmed"), 1693.838f, 3753.535f, 34.8608f, 0f, 0f, 137.392f, 0f, -0.565f, 0f, 0f, 0f, 0f);
						break;
					
					case 4:
						GlobalFunc_3260(iParam2, joaat("weapon_unarmed"), 1693.345f, 3753.988f, 34.8608f, 0f, 0f, 137.392f, 0f, -0.565f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
		}
		if (((iParam3 == 11 || iParam3 == 12) || iParam3 == 13) || iParam3 == 14)
		{
			iParam2->f_1.f_2 = (iParam2->f_1.f_2 - 0.15f);
			switch (iParam4)
			{
				case 0:
					iParam2->f_1.f_2 = (iParam2->f_1.f_2 - 0.43f);
					break;
				
				case 1:
					iParam2->f_1.f_2 = (iParam2->f_1.f_2 - 0.7f);
					break;
				
				case 2:
					iParam2->f_1.f_2 = (iParam2->f_1.f_2 - 0.97f);
					break;
				
				case 3:
					iParam2->f_1.f_2 = (iParam2->f_1.f_2 - 1.24f);
					break;
				
				case 4:
					iParam2->f_1.f_2 = (iParam2->f_1.f_2 - 1.51f);
					break;
				
				case 5:
					iParam2->f_1.f_2 = (iParam2->f_1.f_2 - 1.78f);
					break;
				}
		}
		if (((*iParam2 == joaat("weapon_hammer") || *iParam2 == joaat("weapon_bottle")) || *iParam2 == joaat("weapon_dagger")) || *iParam2 == joaat("weapon_hatchet"))
		{
			iParam2->f_4.f_1 = (iParam2->f_4.f_1 + 90f);
		}
		if (*iParam2 == joaat("weapon_proxmine"))
		{
			iParam2->f_4 = (iParam2->f_4 + 90f);
		}
		if (*iParam2 == joaat("weapon_musket"))
		{
			iParam2->f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(iParam2->f_1, iParam2->f_4.f_2, -0.3f, 0f, 0f) };
		}
		if (*iParam2 == joaat("weapon_firework"))
		{
			iParam2->f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(iParam2->f_1, iParam2->f_4.f_2, 0.1f, 0f, 0f) };
		}
		if (*iParam2 == joaat("weapon_specialcarbine"))
		{
			iParam2->f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(iParam2->f_1, iParam2->f_4.f_2, -0.05f, 0f, 0f) };
		}
		if (*iParam2 == joaat("weapon_hominglauncher"))
		{
			iParam2->f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(iParam2->f_1, iParam2->f_4.f_2, 0.4f, 0f, 0f) };
		}
		if (iParam3 == 11)
		{
			iParam2->f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(iParam2->f_1, iParam2->f_4.f_2, -0.4f, 0f, 0f) };
		}
		else if (iParam3 == 12)
		{
			iParam2->f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(iParam2->f_1, iParam2->f_4.f_2, Vector(0f, 0f, -0.4f) + Vector(0f, 0f, 1.16f)) };
		}
		else if (iParam3 == 13)
		{
			iParam2->f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(iParam2->f_1, iParam2->f_4.f_2, Vector(0f, 0f, -0.4f) + Vector(0f, 0f, 2.32f)) };
		}
		else if (iParam3 == 14)
		{
			iParam2->f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(iParam2->f_1, iParam2->f_4.f_2, Vector(0f, 0f, -0.4f) + Vector(0f, 0f, 3.48f)) };
		}
	}
	if (bParam5)
	{
		if (*iParam2 == joaat("weapon_unarmed"))
		{
			func_93(*iParam2, &(iParam2->f_19), &(iParam2->f_20), &(iParam2->f_21), iParam4);
		}
		else
		{
			func_93(*iParam2, &(iParam2->f_19), &(iParam2->f_20), &(iParam2->f_21), 0);
		}
	}
	if (iVar2 == iVar0)
	{
		iVar3 = 28;
	}
	else if (iVar2 == iVar1)
	{
		iVar3 = 29;
	}
	GlobalFunc_7133(iVar3, iParam0, &(iParam2->f_1));
	GlobalFunc_7132(iVar3, iParam0, &(iParam2->f_4));
	if (iParam2->f_24 == 7)
	{
		if (*iParam2 == joaat("object"))
		{
			iVar4 = 0;
			while (iVar4 < 24)
			{
				if (uParam1->f_77[iVar4] == iParam3 && uParam1->f_52[iVar4] == iParam4)
				{
					iParam2->f_23 = iVar4;
				}
				iVar4++;
			}
		}
		else if (*iParam2 != 0)
		{
			if (*iParam2 == -61829581)
			{
				iParam2->f_24 = 6;
			}
			else
			{
				GlobalFunc_6020(iParam2, *iParam2);
				switch (WEAPON::GET_WEAPONTYPE_GROUP(*iParam2))
				{
					case joaat("GROUP_PISTOL"):
					case joaat("GROUP_SMG"):
					case joaat("GROUP_RIFLE"):
					case joaat("GROUP_MG"):
					case joaat("GROUP_SHOTGUN"):
					case joaat("GROUP_SNIPER"):
					case joaat("GROUP_HEAVY"):
					case 88899580:
					case joaat("GROUP_STUNGUN"):
						iParam2->f_24 = 0;
						break;
					
					case joaat("GROUP_MELEE"):
					case joaat("GROUP_FIREEXTINGUISHER"):
					case joaat("GROUP_PETROLCAN"):
					case 507375312:
					case -755518101:
					case -801780072:
					case 431593103:
						iParam2->f_24 = 1;
						break;
					
					case joaat("GROUP_THROWN"):
						iParam2->f_24 = 2;
						break;
					}
				}
			}
	}
	return *iParam2 != 0;
}









bool func_93(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4)//Position - 0xA8CD
{
	struct<5> Var0;
	int iVar39;
	int iVar40;
	struct<5> Var41;
	char* sVar80;
	struct<4> Var96;
	int iVar100;
	int iVar101;
	int iVar102;
	float fVar103;
	
	*uParam1 = 0;
	*uParam2 = 0;
	*uParam3 = 0;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		switch (iParam0)
		{
			case joaat("weapon_unarmed"):
				if (iParam4 == 0)
				{
					*uParam1 = 500;
					*uParam2 = 500;
				}
				else if (iParam4 == 1)
				{
					*uParam1 = 1000;
					*uParam2 = 1000;
				}
				else if (iParam4 == 2)
				{
					*uParam1 = 1500;
					*uParam2 = 1500;
				}
				else if (iParam4 == 3)
				{
					*uParam1 = 2000;
					*uParam2 = 2000;
				}
				else if (iParam4 == 4)
				{
					*uParam1 = 2500;
					*uParam2 = 2500;
				}
				break;
			
			case joaat("gadget_parachute"):
				*uParam1 = 100;
				*uParam2 = 100;
				break;
			
			case joaat("weapon_microsmg"):
				*uParam1 = 850;
				*uParam2 = 20;
				break;
			
			case joaat("weapon_smg"):
				*uParam1 = 1300;
				*uParam2 = 38;
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				*uParam1 = 300;
				*uParam2 = 8;
				break;
			
			case joaat("weapon_pumpshotgun"):
				*uParam1 = 550;
				*uParam2 = 8;
				break;
			
			case joaat("weapon_assaultshotgun"):
				*uParam1 = 1500;
				*uParam2 = 8;
				break;
			
			case joaat("weapon_assaultrifle"):
				*uParam1 = 1400;
				*uParam2 = 36;
				break;
			
			case joaat("weapon_carbinerifle"):
				*uParam1 = 2100;
				*uParam2 = 36;
				break;
			
			case joaat("weapon_advancedrifle"):
				*uParam1 = 3500;
				*uParam2 = 36;
				break;
			
			case joaat("weapon_sniperrifle"):
				*uParam1 = 5000;
				*uParam2 = 48;
				break;
			
			case joaat("weapon_heavysniper"):
				*uParam1 = 9500;
				*uParam2 = 29;
				break;
			
			case joaat("weapon_mg"):
				*uParam1 = 3000;
				*uParam2 = 50;
				break;
			
			case joaat("weapon_combatmg"):
				*uParam1 = 3700;
				*uParam2 = 92;
				break;
			
			case joaat("weapon_rpg"):
				*uParam1 = 6500;
				*uParam2 = 100;
				break;
			
			case joaat("weapon_grenadelauncher"):
				*uParam1 = 8100;
				*uParam2 = 50;
				break;
			
			case joaat("weapon_minigun"):
				*uParam1 = 15000;
				*uParam2 = 50;
				break;
			
			case joaat("weapon_knife"):
				*uParam1 = 100;
				*uParam2 = 100;
				break;
			
			case joaat("weapon_nightstick"):
				*uParam1 = 100;
				*uParam2 = 100;
				break;
			
			case joaat("weapon_stungun"):
				*uParam1 = 100;
				*uParam2 = 50;
				break;
			
			case joaat("weapon_appistol"):
				*uParam1 = 1000;
				*uParam2 = 25;
				break;
			
			case joaat("weapon_combatpistol"):
				*uParam1 = 600;
				*uParam2 = 19;
				break;
			
			case joaat("weapon_pistol"):
				*uParam1 = 350;
				*uParam2 = 19;
				break;
			
			case joaat("weapon_smokegrenade"):
				*uParam1 = 150;
				*uParam2 = 150;
				break;
			
			case joaat("weapon_grenade"):
				*uParam1 = 150;
				*uParam2 = 150;
				break;
			
			case joaat("weapon_stickybomb"):
				*uParam1 = 400;
				*uParam2 = 400;
				break;
			
			case joaat("weapon_petrolcan"):
				*uParam1 = 25;
				*uParam2 = 25;
				break;
			
			case joaat("weapon_assaultsmg"):
				*uParam1 = 0;
				*uParam2 = 38;
				break;
			
			case joaat("weapon_bullpupshotgun"):
				*uParam1 = 1250;
				*uParam2 = 8;
				break;
			
			case joaat("weapon_pistol50"):
				*uParam1 = 4000;
				*uParam2 = 19;
				break;
			
			case joaat("weapon_hammer"):
				*uParam1 = 500;
				*uParam2 = 0;
				break;
			
			case joaat("weapon_specialcarbine"):
				*uParam1 = 14750;
				*uParam2 = 108;
				break;
			
			case joaat("weapon_bullpuprifle"):
				*uParam1 = 14500;
				*uParam2 = 108;
				break;
			
			case joaat("weapon_railgun"):
				*uParam1 = 250000;
				*uParam2 = 100;
				break;
			
			case joaat("weapon_hatchet"):
				*uParam1 = 750;
				*uParam2 = 0;
				break;
			
			case joaat("weapon_hominglauncher"):
				*uParam1 = 15500;
				*uParam2 = 400;
				break;
			
			case joaat("weapon_proxmine"):
				*uParam1 = 750;
				*uParam2 = 750;
				break;
			
			case joaat("weapon_combatpdw"):
				*uParam1 = 11750;
				*uParam2 = 113;
				break;
			
			default:
				if (GlobalFunc_221(iParam0, &Var0) != -1)
				{
					*uParam1 = Var0.f_3;
					*uParam2 = Var0.f_4;
				}
				break;
		}
		if ((iParam0 == joaat("weapon_bullpupshotgun") || iParam0 == joaat("weapon_pistol50")) || iParam0 == joaat("weapon_hammer"))
		{
			if (GlobalFunc_84() && (GlobalFunc_219() || GlobalFunc_220()))
			{
				*uParam1 = 0;
			}
		}
		iVar39 = *uParam2;
		switch (iParam0)
		{
			case joaat("weapon_appistol"):
				iVar39 = 25;
				break;
			
			case joaat("weapon_snspistol"):
				iVar39 = 10;
				break;
			
			case joaat("weapon_heavypistol"):
				iVar39 = 100;
				break;
			
			case joaat("weapon_vintagepistol"):
				iVar39 = 10;
				break;
			
			case joaat("weapon_microsmg"):
				iVar39 = 20;
				break;
			
			case joaat("weapon_specialcarbine"):
				iVar39 = 108;
				break;
			
			case joaat("weapon_bullpuprifle"):
				iVar39 = 108;
				break;
			
			case joaat("weapon_mg"):
				iVar39 = 50;
				break;
			
			case joaat("weapon_gusenberg"):
				iVar39 = 108;
				break;
			
			case joaat("weapon_heavyshotgun"):
				iVar39 = 18;
				break;
			
			case joaat("weapon_musket"):
				iVar39 = 15;
				break;
			
			case joaat("weapon_heavysniper"):
				iVar39 = 29;
				break;
			
			case joaat("weapon_marksmanrifle"):
				iVar39 = 87;
				break;
		}
		if (*uParam2 != iVar39)
		{
			*uParam2 = iVar39;
		}
	}
	else
	{
		iVar40 = -1;
		switch (iParam0)
		{
			case joaat("weapon_unarmed"):
				if (iParam4 == 0)
				{
					*uParam1 = 100;
					*uParam2 = 100;
				}
				else if (iParam4 == 1)
				{
					*uParam1 = 200;
					*uParam2 = 200;
				}
				else if (iParam4 == 2)
				{
					*uParam1 = 300;
					*uParam2 = 300;
				}
				else if (iParam4 == 3)
				{
					*uParam1 = 400;
					*uParam2 = 400;
				}
				else if (iParam4 == 4)
				{
					*uParam1 = 500;
					*uParam2 = 500;
				}
				if (iParam4 == 0)
				{
					*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_262145.f_2789));
					*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_262145.f_2789));
				}
				else if (iParam4 == 1)
				{
					*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_262145.f_2790));
					*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_262145.f_2790));
				}
				else if (iParam4 == 2)
				{
					*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_262145.f_2791));
					*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_262145.f_2791));
				}
				else if (iParam4 == 3)
				{
					*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_262145.f_2792));
					*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_262145.f_2792));
				}
				else if (iParam4 == 4)
				{
					*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_262145.f_2793));
					*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_262145.f_2793));
				}
				iVar40 = 15;
				break;
			
			case joaat("gadget_parachute"):
				*uParam1 = 500;
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_262145.f_2634));
				*uParam2 = 500;
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_262145.f_2634));
				iVar40 = 99;
				break;
			
			case joaat("weapon_microsmg"):
				if (Global_262145.f_2320 == -1)
				{
					*uParam1 = 3750;
				}
				else
				{
					*uParam1 = Global_262145.f_2320;
				}
				if (Global_262145.f_2349 == -1)
				{
					*uParam2 = 60;
				}
				else
				{
					*uParam2 = Global_262145.f_2349;
				}
				iVar40 = 1;
				break;
			
			case joaat("weapon_smg"):
				if (Global_262145.f_2321 == -1)
				{
					*uParam1 = 7500;
				}
				else
				{
					*uParam1 = Global_262145.f_2321;
				}
				if (Global_262145.f_2350 == -1)
				{
					*uParam2 = 113;
				}
				else
				{
					*uParam2 = Global_262145.f_2350;
				}
				iVar40 = 1;
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				if (Global_262145.f_2331 == -1)
				{
					*uParam1 = 0;
				}
				else
				{
					*uParam1 = Global_262145.f_2331;
				}
				if (Global_262145.f_2360 == -1)
				{
					*uParam2 = 24;
				}
				else
				{
					*uParam2 = Global_262145.f_2360;
				}
				iVar40 = 2;
				break;
			
			case joaat("weapon_pumpshotgun"):
				if (Global_262145.f_2330 == -1)
				{
					*uParam1 = 3500;
				}
				else
				{
					*uParam1 = Global_262145.f_2330;
				}
				if (Global_262145.f_2359 == -1)
				{
					*uParam2 = 24;
				}
				else
				{
					*uParam2 = Global_262145.f_2359;
				}
				iVar40 = 2;
				break;
			
			case joaat("weapon_assaultshotgun"):
				if (Global_262145.f_2333 == -1)
				{
					*uParam1 = 10000;
				}
				else
				{
					*uParam1 = Global_262145.f_2333;
				}
				if (Global_262145.f_2362 == -1)
				{
					*uParam2 = 24;
				}
				else
				{
					*uParam2 = Global_262145.f_2362;
				}
				iVar40 = 2;
				break;
			
			case joaat("weapon_assaultrifle"):
				if (Global_262145.f_2323 == -1)
				{
					*uParam1 = 8550;
				}
				else
				{
					*uParam1 = Global_262145.f_2323;
				}
				if (Global_262145.f_2352 == -1)
				{
					*uParam2 = 108;
				}
				else
				{
					*uParam2 = Global_262145.f_2352;
				}
				iVar40 = 3;
				break;
			
			case joaat("weapon_carbinerifle"):
				if (Global_262145.f_2324 == -1)
				{
					*uParam1 = 13000;
				}
				else
				{
					*uParam1 = Global_262145.f_2324;
				}
				if (Global_262145.f_2353 == -1)
				{
					*uParam2 = 108;
				}
				else
				{
					*uParam2 = Global_262145.f_2353;
				}
				iVar40 = 3;
				break;
			
			case joaat("weapon_advancedrifle"):
				if (Global_262145.f_2326 == -1)
				{
					*uParam1 = 14250;
				}
				else
				{
					*uParam1 = Global_262145.f_2326;
				}
				if (Global_262145.f_2355 == -1)
				{
					*uParam2 = 108;
				}
				else
				{
					*uParam2 = Global_262145.f_2355;
				}
				iVar40 = 3;
				break;
			
			case joaat("weapon_sniperrifle"):
				if (Global_262145.f_2336 == -1)
				{
					*uParam1 = 20000;
				}
				else
				{
					*uParam1 = Global_262145.f_2336;
				}
				if (Global_262145.f_2365 == -1)
				{
					*uParam2 = 145;
				}
				else
				{
					*uParam2 = Global_262145.f_2365;
				}
				iVar40 = 4;
				break;
			
			case joaat("weapon_heavysniper"):
				if (Global_262145.f_2334 == -1)
				{
					*uParam1 = 38150;
				}
				else
				{
					*uParam1 = Global_262145.f_2334;
				}
				if (Global_262145.f_2363 == -1)
				{
					*uParam2 = 87;
				}
				else
				{
					*uParam2 = Global_262145.f_2363;
				}
				iVar40 = 4;
				break;
			
			case joaat("weapon_mg"):
				if (Global_262145.f_2327 == -1)
				{
					*uParam1 = 13500;
				}
				else
				{
					*uParam1 = Global_262145.f_2327;
				}
				if (Global_262145.f_2356 == -1)
				{
					*uParam2 = 150;
				}
				else
				{
					*uParam2 = Global_262145.f_2356;
				}
				iVar40 = 5;
				break;
			
			case joaat("weapon_combatmg"):
				if (Global_262145.f_2328 == -1)
				{
					*uParam1 = 14800;
				}
				else
				{
					*uParam1 = Global_262145.f_2328;
				}
				if (Global_262145.f_2357 == -1)
				{
					*uParam2 = 277;
				}
				else
				{
					*uParam2 = Global_262145.f_2357;
				}
				iVar40 = 5;
				break;
			
			case joaat("weapon_rpg"):
				if (Global_262145.f_2339 == -1)
				{
					*uParam1 = 26250;
				}
				else
				{
					*uParam1 = Global_262145.f_2339;
				}
				if (Global_262145.f_2368 == -1)
				{
					*uParam2 = 1000;
				}
				else
				{
					*uParam2 = Global_262145.f_2368;
				}
				iVar40 = 6;
				break;
			
			case joaat("weapon_grenadelauncher"):
				if (Global_262145.f_2338 == -1)
				{
					*uParam1 = 32400;
				}
				else
				{
					*uParam1 = Global_262145.f_2338;
				}
				if (Global_262145.f_2367 == -1)
				{
					*uParam2 = 5000;
				}
				else
				{
					*uParam2 = Global_262145.f_2367;
				}
				iVar40 = 6;
				break;
			
			case joaat("weapon_minigun"):
				if (Global_262145.f_2340 == -1)
				{
					*uParam1 = 50000;
				}
				else
				{
					*uParam1 = Global_262145.f_2340;
				}
				if (Global_262145.f_2369 == -1)
				{
					*uParam2 = 150;
				}
				else
				{
					*uParam2 = Global_262145.f_2369;
				}
				iVar40 = 6;
				break;
			
			case joaat("weapon_knife"):
				if (Global_262145.f_2373 == -1)
				{
					*uParam1 = 400;
				}
				else
				{
					*uParam1 = Global_262145.f_2373;
				}
				if (Global_262145.f_2378 == -1)
				{
					*uParam2 = 100;
				}
				else
				{
					*uParam2 = Global_262145.f_2378;
				}
				iVar40 = 7;
				break;
			
			case joaat("weapon_nightstick"):
				if (Global_262145.f_2374 == -1)
				{
					*uParam1 = 400;
				}
				else
				{
					*uParam1 = Global_262145.f_2374;
				}
				if (Global_262145.f_2379 == -1)
				{
					*uParam2 = 100;
				}
				else
				{
					*uParam2 = Global_262145.f_2379;
				}
				iVar40 = 7;
				break;
			
			case joaat("weapon_dagger"):
				if (Global_262145.f_5540 == -1)
				{
					*uParam1 = 400;
				}
				else
				{
					*uParam1 = Global_262145.f_5540;
				}
				if (Global_262145.f_5542 == -1)
				{
					*uParam2 = 85;
				}
				else
				{
					*uParam2 = Global_262145.f_5542;
				}
				iVar40 = 7;
				break;
			
			case joaat("weapon_stungun"):
				*uParam1 = 100;
				*uParam2 = 50;
				break;
			
			case joaat("weapon_appistol"):
				if (Global_262145.f_2319 == -1)
				{
					*uParam1 = 5000;
				}
				else
				{
					*uParam1 = Global_262145.f_2319;
				}
				if (Global_262145.f_2348 == -1)
				{
					*uParam2 = 85;
				}
				else
				{
					*uParam2 = Global_262145.f_2348;
				}
				iVar40 = 8;
				break;
			
			case joaat("weapon_combatpistol"):
				if (Global_262145.f_2317 == -1)
				{
					*uParam1 = 3200;
				}
				else
				{
					*uParam1 = Global_262145.f_2317;
				}
				if (Global_262145.f_2346 == -1)
				{
					*uParam2 = 57;
				}
				else
				{
					*uParam2 = Global_262145.f_2346;
				}
				iVar40 = 8;
				break;
			
			case joaat("weapon_pistol"):
				if (Global_262145.f_2316 == -1)
				{
					*uParam1 = 2500;
				}
				else
				{
					*uParam1 = Global_262145.f_2316;
				}
				if (Global_262145.f_2345 == -1)
				{
					*uParam2 = 57;
				}
				else
				{
					*uParam2 = Global_262145.f_2345;
				}
				iVar40 = 8;
				break;
			
			case joaat("weapon_smokegrenade"):
				if (Global_262145.f_2341 == -1)
				{
					*uParam1 = 150;
				}
				else
				{
					*uParam1 = Global_262145.f_2341;
				}
				if (Global_262145.f_2377 == -1)
				{
					*uParam2 = 150;
				}
				else
				{
					*uParam2 = Global_262145.f_2377;
				}
				iVar40 = 9;
				break;
			
			case joaat("weapon_grenade"):
				if (Global_262145.f_2371 == -1)
				{
					*uParam1 = 250;
				}
				else
				{
					*uParam1 = Global_262145.f_2371;
				}
				if (Global_262145.f_2376 == -1)
				{
					*uParam2 = 250;
				}
				else
				{
					*uParam2 = Global_262145.f_2376;
				}
				iVar40 = 9;
				break;
			
			case joaat("weapon_stickybomb"):
				if (Global_262145.f_2370 == -1)
				{
					*uParam1 = 600;
				}
				else
				{
					*uParam1 = Global_262145.f_2370;
				}
				if (Global_262145.f_2375 == -1)
				{
					*uParam2 = 600;
				}
				else
				{
					*uParam2 = Global_262145.f_2375;
				}
				iVar40 = 9;
				break;
			
			case joaat("weapon_petrolcan"):
				if (Global_262145.f_2342 == -1)
				{
					*uParam1 = 100;
				}
				else
				{
					*uParam1 = Global_262145.f_2342;
				}
				*uParam2 = 100;
				iVar40 = 10;
				break;
			
			case joaat("weapon_assaultsmg"):
				if (Global_262145.f_2322 == -1)
				{
					*uParam1 = 12550;
				}
				else
				{
					*uParam1 = Global_262145.f_2322;
				}
				if (Global_262145.f_2351 == -1)
				{
					*uParam2 = 113;
				}
				else
				{
					*uParam2 = Global_262145.f_2351;
				}
				iVar40 = 1;
				break;
			
			case joaat("weapon_bullpupshotgun"):
				if (Global_262145.f_2332 == -1)
				{
					*uParam1 = 8000;
				}
				else
				{
					*uParam1 = Global_262145.f_2332;
				}
				if (Global_262145.f_2361 == -1)
				{
					*uParam2 = 24;
				}
				else
				{
					*uParam2 = Global_262145.f_2361;
				}
				if (GlobalFunc_84() && (GlobalFunc_220() || GlobalFunc_219()))
				{
					*uParam1 = 0;
				}
				iVar40 = 2;
				break;
			
			case joaat("weapon_pistol50"):
				if (Global_262145.f_2318 == -1)
				{
					*uParam1 = 3900;
				}
				else
				{
					*uParam1 = Global_262145.f_2318;
				}
				if (Global_262145.f_2347 == -1)
				{
					*uParam2 = 57;
				}
				else
				{
					*uParam2 = Global_262145.f_2347;
				}
				if (GlobalFunc_84() && (GlobalFunc_220() || GlobalFunc_219()))
				{
					*uParam1 = 0;
				}
				iVar40 = 8;
				break;
			
			case joaat("weapon_hammer"):
				if (Global_262145.f_2344 == -1)
				{
					*uParam1 = 500;
				}
				else
				{
					*uParam1 = Global_262145.f_2344;
				}
				*uParam2 = 0;
				if (GlobalFunc_84() && (GlobalFunc_220() || GlobalFunc_219()))
				{
					*uParam1 = 0;
				}
				iVar40 = 7;
				break;
			
			case joaat("weapon_snspistol"):
				*uParam1 = Global_262145.f_5535;
				*uParam2 = Global_262145.f_5530;
				iVar40 = 8;
				break;
			
			case joaat("weapon_bottle"):
				*uParam1 = Global_262145.f_5534;
				*uParam2 = 0;
				iVar40 = 7;
				break;
			
			case joaat("weapon_gusenberg"):
				*uParam1 = Global_262145.f_4934;
				*uParam2 = Global_262145.f_4940;
				iVar40 = 3;
				break;
			
			case joaat("weapon_heavypistol"):
				*uParam1 = Global_262145.f_5536;
				*uParam2 = Global_262145.f_5532;
				iVar40 = 8;
				break;
			
			case joaat("weapon_specialcarbine"):
				*uParam1 = Global_262145.f_5537;
				*uParam2 = Global_262145.f_5531;
				iVar40 = 3;
				break;
			
			case joaat("weapon_bullpuprifle"):
				*uParam1 = Global_262145.f_5538;
				*uParam2 = Global_262145.f_5533;
				iVar40 = 3;
				break;
			
			case joaat("weapon_vintagepistol"):
				*uParam1 = Global_262145.f_5539;
				*uParam2 = Global_262145.f_5541;
				iVar40 = 8;
				break;
			
			case joaat("weapon_musket"):
				*uParam1 = Global_262145.f_6139;
				*uParam2 = Global_262145.f_6140;
				iVar40 = 4;
				break;
			
			case joaat("weapon_firework"):
				*uParam1 = Global_262145.f_6141;
				*uParam2 = Global_262145.f_6142;
				iVar40 = 6;
				break;
			
			case joaat("weapon_heavyshotgun"):
				*uParam1 = Global_262145.f_6648;
				*uParam2 = Global_262145.f_6653;
				iVar40 = 2;
				break;
			
			case joaat("weapon_marksmanrifle"):
				*uParam1 = Global_262145.f_6654;
				*uParam2 = Global_262145.f_6661;
				iVar40 = 4;
				break;
			
			case joaat("weapon_hatchet"):
				*uParam1 = Global_262145.f_6967;
				*uParam2 = 0;
				iVar40 = 7;
				break;
			
			case joaat("weapon_flaregun"):
				*uParam1 = Global_262145.f_6898;
				*uParam2 = Global_262145.f_6899;
				iVar40 = 6;
				break;
			
			case joaat("weapon_proxmine"):
				*uParam1 = Global_262145.f_7182;
				*uParam2 = Global_262145.f_7182;
				iVar40 = 9;
				break;
			
			case joaat("weapon_knuckle"):
				*uParam1 = Global_262145.f_6900;
				*uParam2 = Global_262145.f_6901;
				iVar40 = 7;
				break;
			
			case joaat("weapon_marksmanpistol"):
				*uParam1 = Global_262145.f_6902;
				*uParam2 = Global_262145.f_6903;
				iVar40 = 8;
				break;
			
			case joaat("weapon_combatpdw"):
				*uParam1 = Global_262145.f_8273;
				*uParam2 = Global_262145.f_8274;
				iVar40 = 1;
				break;
			
			case joaat("weapon_hominglauncher"):
				*uParam1 = Global_262145.f_6904;
				*uParam2 = Global_262145.f_6905;
				iVar40 = 6;
				break;
			
			default:
				if (GlobalFunc_221(iParam0, &Var41) != -1)
				{
					*uParam1 = Var41.f_3;
					*uParam2 = Var41.f_4;
				}
				break;
		}
		switch (iVar40)
		{
			case 0:
				break;
			
			case 1:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_270421.f_2));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_270421.f_2));
				break;
			
			case 2:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_270421.f_2));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_270421.f_2));
				break;
			
			case 3:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_270421.f_2));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_270421.f_2));
				break;
			
			case 4:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_270421.f_2));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_270421.f_2));
				break;
			
			case 5:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_270421.f_2));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_270421.f_2));
				break;
			
			case 6:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_270421.f_2));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_270421.f_2));
				break;
			
			case 7:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_270421.f_6));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_270421.f_6));
				break;
			
			case 8:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_270421.f_4));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_270421.f_4));
				break;
			
			case 9:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_270421.f_2));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_270421.f_2));
				break;
			
			case 10:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_270421.f_2));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_270421.f_2));
				break;
			
			case 11:
				break;
			
			case 12:
				break;
			
			case 13:
				break;
			
			case 14:
				break;
			
			case 15:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_270421));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_270421));
				break;
			
			case 99:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_270421.f_7));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_270421.f_7));
				break;
			}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GlobalFunc_4979())
	{
		StringCopy(&Var96, GlobalFunc_5379(iParam0, 0), 16);
		iVar101 = 0;
		if (iParam0 == joaat("weapon_petrolcan"))
		{
			iVar100 = 5;
		}
		else if (iParam0 == joaat("gadget_parachute"))
		{
			iVar100 = 4;
		}
		else if (iParam0 == joaat("weapon_unarmed"))
		{
			iVar100 = 3;
		}
		else if (((((iParam0 == joaat("weapon_bottle") || iParam0 == joaat("weapon_dagger")) || iParam0 == joaat("weapon_hammer")) || iParam0 == joaat("weapon_hatchet")) || iParam0 == joaat("weapon_knife")) || iParam0 == joaat("weapon_nightstick"))
		{
			iVar100 = 1;
		}
		else if (((iParam0 == joaat("weapon_grenade") || iParam0 == joaat("weapon_smokegrenade")) || iParam0 == joaat("weapon_stickybomb")) || iParam0 == joaat("weapon_proxmine"))
		{
			iVar100 = 2;
			iVar101 = 1;
		}
		else
		{
			iVar100 = 0;
		}
		GlobalFunc_215(&sVar80, Var96, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 3, iVar100, iVar101, -1, -1);
		if (NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&sVar80))
		{
			*uParam1 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(MISC::GET_HASH_KEY(&sVar80), -1829708865, 1);
		}
		if (GlobalFunc_3258(iParam0, &iVar102))
		{
			GlobalFunc_3257(iVar102, 2, &Var96, 0);
			GlobalFunc_215(&sVar80, Var96, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 3, 0, GlobalFunc_4977(iParam0), -1, -1);
			if (NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&sVar80))
			{
				*uParam2 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(MISC::GET_HASH_KEY(&sVar80), 1067618600, 1);
				switch (iParam0)
				{
					case joaat("weapon_rpg"):
					case joaat("weapon_grenadelauncher"):
					case joaat("weapon_hominglauncher"):
					case joaat("weapon_firework"):
						*uParam3 = 1;
						break;
					}
				}
			}
	}
	fVar103 = func_94(iParam0, uParam1, uParam2);
	if (fVar103 != 1f)
	{
	}
	return *uParam1 != 0;
}

float func_94(int iParam0, int iParam1, int iParam2)//Position - 0xBE08
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar1 = 0f;
	fVar2 = 0f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GlobalFunc_4979())
	{
		return 1f;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = func_144(iParam0);
		if (iVar0 == 3)
		{
			fVar2 = (fVar2 + 0.05f);
		}
		else if (iVar0 == 2)
		{
			fVar2 = (fVar2 + 0.1f);
		}
		else if (iVar0 == 1)
		{
			fVar2 = (fVar2 + 0.15f);
		}
		if (fVar3 >= 100f)
		{
			fVar2 = (fVar2 + 0.1f);
		}
		else if (fVar3 >= 80f)
		{
			fVar2 = (fVar2 + 0.08f);
		}
		else if (fVar3 >= 60f)
		{
			fVar2 = (fVar2 + 0.06f);
		}
		else if (fVar3 >= 40f)
		{
			fVar2 = (fVar2 + 0.04f);
		}
		else if (fVar3 >= 20f)
		{
			fVar2 = (fVar2 + 0.02f);
		}
		fVar2 = (fVar2 + GlobalFunc_8697(iParam0));
		fVar2 = (fVar2 + GlobalFunc_8696());
		fVar2 = (fVar2 + GlobalFunc_8695());
		if (iLocal_49 == 1)
		{
			fVar2 = (fVar2 + (SYSTEM::TO_FLOAT(Global_262145.f_104) / 100f));
		}
		if (iLocal_49 == 0)
		{
			if (func_95())
			{
				fVar2 = (fVar2 + (SYSTEM::TO_FLOAT(Global_262145.f_104) / 100f));
				iLocal_49 = 1;
			}
			else
			{
				iLocal_49 = -1;
			}
		}
		fVar1 = (1f - fVar2);
		*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * fVar1));
		*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * Global_262145.f_62));
		*iParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam2) * Global_262145.f_62));
		return fVar1;
	}
	iVar0 = func_144(iParam0);
	if (iVar0 == 3)
	{
		fVar2 = (fVar2 + 0.1f);
	}
	else if (iVar0 == 2)
	{
		fVar2 = (fVar2 + 0.15f);
	}
	else if (iVar0 == 1)
	{
		fVar2 = (fVar2 + 0.25f);
	}
	fVar1 = (1f - fVar2);
	*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * fVar1));
	*iParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam2) * fVar1));
	return fVar1;
}

int func_95()//Position - 0xBFF8
{
	int iVar0;
	var uVar1;
	float fVar2;
	
	if (MISC::IS_PC_VERSION())
	{
		return 0;
	}
	if (GlobalFunc_6714())
	{
		if (GlobalFunc_10609())
		{
			iVar0 = GlobalFunc_4974();
			uVar1 = GlobalFunc_205();
			fVar2 = ((SYSTEM::TO_FLOAT(uVar1) / SYSTEM::TO_FLOAT(iVar0)) * 100f);
			if (fVar2 > IntToFloat(Global_262145.f_103) && iVar0 >= 8)
			{
				return 1;
			}
		}
	}
	return 0;
}

















































int func_144(int iParam0)//Position - 0xD04A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[6];
	bool bVar10;
	
	iVar0 = GlobalFunc_8354();
	if (iParam0 == 0 || !GlobalFunc_42(iVar0))
	{
		return -1;
	}
	iVar1 = 7;
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			break;
		
		case joaat("gadget_parachute"):
			break;
		
		case joaat("weapon_microsmg"):
			iVar1 = 1;
			break;
		
		case joaat("weapon_smg"):
			iVar1 = 1;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_pumpshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_assaultshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_assaultrifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_carbinerifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_advancedrifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_sniperrifle"):
			break;
		
		case joaat("weapon_heavysniper"):
			break;
		
		case joaat("weapon_mg"):
			iVar1 = 4;
			break;
		
		case joaat("weapon_combatmg"):
			iVar1 = 4;
			break;
		
		case joaat("weapon_rpg"):
			break;
		
		case joaat("weapon_grenadelauncher"):
			break;
		
		case joaat("weapon_minigun"):
			iVar1 = 5;
			break;
		
		case joaat("weapon_knife"):
			break;
		
		case joaat("weapon_nightstick"):
			break;
		
		case joaat("weapon_petrolcan"):
			break;
		
		case joaat("weapon_stungun"):
			break;
		
		case joaat("weapon_appistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_combatpistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_pistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_smokegrenade"):
			break;
		
		case joaat("weapon_grenade"):
			break;
		
		case joaat("weapon_stickybomb"):
			break;
	}
	if (iVar1 != 7)
	{
		switch (GlobalFunc_4976(iVar1, iVar0))
		{
			case 1:
				return 3;
				break;
			
			case 2:
				return 2;
				break;
			
			case 3:
				return 1;
				break;
		}
	}
	else
	{
		iVar3[0] = GlobalFunc_4976(1, iVar0);
		iVar3[1] = GlobalFunc_4976(3, iVar0);
		iVar3[2] = GlobalFunc_4976(2, iVar0);
		iVar3[3] = GlobalFunc_4976(4, iVar0);
		iVar3[4] = GlobalFunc_4976(5, iVar0);
		iVar3[5] = GlobalFunc_4976(0, iVar0);
		bVar10 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 3)
			{
				bVar10 = true;
			}
			iVar2++;
		}
		if (!bVar10)
		{
			return 1;
		}
		bVar10 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 2)
			{
				bVar10 = true;
			}
			iVar2++;
		}
		if (!bVar10)
		{
			return 2;
		}
		bVar10 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 1)
			{
				bVar10 = true;
			}
			iVar2++;
		}
		if (!bVar10)
		{
			return 3;
		}
	}
	return -1;
}



















void func_163(bool bParam0)//Position - 0xEBD0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	struct<25> Var9;
	int iVar35;
	int iVar36;
	
	iVar35 = 1;
	iVar36 = 1;
	if (bParam0)
	{
		iVar35 = 16;
		iVar36 = 6;
	}
	iVar3 = 0;
	while (iVar3 < iVar35)
	{
		iVar4 = 0;
		while (iVar4 < iVar36)
		{
			if (bParam0)
			{
				iVar0 = iVar3;
				iVar1 = iVar4;
			}
			else
			{
				iVar0 = iLocal_1049;
				iVar1 = iLocal_1050;
			}
			iVar5 = (iVar0 * 6 + iVar1);
			if (func_84(Local_168, &Global_2543149, &Var9, iVar0, iVar1, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_168.f_218[iVar5]))
				{
					OBJECT::DELETE_OBJECT(&(Local_168.f_218[iVar5]));
				}
				if (GlobalFunc_5102(Var9))
				{
					bVar6 = false;
					if (Var9.f_24 == 3)
					{
						if (iVar1 == 0)
						{
							iVar7 = joaat("prop_armour_pickup");
						}
						else if (iVar1 == 1)
						{
							iVar7 = joaat("prop_bodyarmour_02");
						}
						else if (iVar1 == 2)
						{
							iVar7 = joaat("prop_bodyarmour_03");
						}
						else if (iVar1 == 3)
						{
							iVar7 = joaat("prop_bodyarmour_04");
						}
						else if (iVar1 == 4)
						{
							iVar7 = joaat("prop_bodyarmour_05");
						}
					}
					else if (Var9.f_24 == 4)
					{
						iVar7 = joaat("p_parachute_s_shop");
					}
					else if (Var9.f_24 == 7)
					{
						iVar7 = func_83(&Global_2543149, Var9.f_23);
					}
					else if (Var9.f_24 == 6)
					{
						iVar7 = joaat("ind_prop_firework_04");
					}
					else if (Var9 == joaat("weapon_knife"))
					{
						iVar7 = joaat("prop_w_me_knife_01");
					}
					else if (Var9 == joaat("weapon_bottle"))
					{
						iVar7 = joaat("prop_w_me_bottle");
					}
					else if (Var9 == joaat("weapon_dagger"))
					{
						iVar7 = joaat("prop_w_me_dagger");
					}
					else if (Var9 == joaat("weapon_hatchet"))
					{
						iVar7 = joaat("prop_w_me_hatchet");
					}
					else
					{
						iVar7 = WEAPON::GET_WEAPONTYPE_MODEL(Var9);
						bVar6 = true;
					}
					if (iVar7 != 0)
					{
						ENTITY::REMOVE_MODEL_HIDE(Var9.f_1, 0.001f, iVar7, 0);
						if (bVar6)
						{
							WEAPON::REMOVE_WEAPON_ASSET(Var9);
						}
						else
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar7);
						}
						if (bVar6)
						{
							iVar2 = 0;
							while (func_164(&Local_1216, Var9, iVar2, 0))
							{
								if (Local_1216 != 0)
								{
									iVar8 = WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(Local_1216);
									if (iVar8 != 0)
									{
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar8);
									}
								}
								iVar2++;
							}
						}
					}
				}
			}
			iVar4++;
		}
		iVar3++;
	}
	iLocal_1050++;
	if (iLocal_1050 >= 6)
	{
		iLocal_1050 = 0;
		iLocal_1049++;
		if (iLocal_1049 >= 16)
		{
			iLocal_1049 = 0;
			iLocal_1051 = 1;
		}
	}
	if (iLocal_156)
	{
		STREAMING::REQUEST_MODEL(joaat("v_lirg_gunlight"));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_155))
	{
		OBJECT::DELETE_OBJECT(&iLocal_155);
	}
}

bool func_164(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xEE0E
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
	int iVar11;
	var uVar12;
	struct<4> Var51;
	
	func_168(iParam0, 0, 989182658, 0, 0);
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_168(iParam0, joaat("component_at_pi_flsh"), 1170392792, 1, 0);
					break;
				
				case 3:
					func_168(iParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_168(iParam0, joaat("component_pistol_varmod_luxe"), -1441477783, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_combatpistol_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_combatpistol_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_168(iParam0, joaat("component_at_pi_flsh"), 1170392792, 1, 0);
					break;
				
				case 3:
					func_168(iParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_appistol_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_appistol_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_168(iParam0, joaat("component_at_pi_flsh"), 1170392792, 1, 0);
					break;
				
				case 3:
					func_168(iParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_168(iParam0, joaat("component_appistol_varmod_luxe"), -1441477783, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_microsmg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_microsmg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_168(iParam0, joaat("component_at_pi_flsh"), 1170392792, 1, 0);
					break;
				
				case 3:
					func_168(iParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_168(iParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_168(iParam0, joaat("component_microsmg_varmod_luxe"), -1441477783, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_168(iParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 3:
					func_168(iParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_168(iParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_168(iParam0, joaat("component_smg_varmod_luxe"), -1441477783, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_168(iParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 3:
					func_168(iParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 4:
					func_168(iParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
					break;
				
				case 5:
					func_168(iParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 6:
					func_168(iParam0, joaat("component_assaultrifle_varmod_luxe"), -1441477783, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_168(iParam0, joaat("component_at_railcover_01"), joaat("WAPRail"), 1, 0);
					break;
				
				case 3:
					func_168(iParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 4:
					func_168(iParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 5:
					func_168(iParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
					break;
				
				case 6:
					func_168(iParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 7:
					func_168(iParam0, joaat("component_carbinerifle_varmod_luxe"), -1441477783, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_advancedrifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_advancedrifle_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_168(iParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 3:
					func_168(iParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_168(iParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_168(iParam0, joaat("component_advancedrifle_varmod_luxe"), -1441477783, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_mg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_mg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_168(iParam0, joaat("component_at_scope_small_02"), joaat("WAPScop"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_168(iParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 3:
					func_168(iParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_assaultshotgun_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_assaultshotgun_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_168(iParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 3:
					func_168(iParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 4:
					func_168(iParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_sniperrifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 2:
					func_168(iParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
					break;
				
				case 3:
					func_168(iParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
					break;
				
				case 4:
					func_168(iParam0, joaat("component_sniperrifle_varmod_luxe"), -1441477783, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
					break;
				
				case 2:
					func_168(iParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 2:
					func_168(iParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_minigun_clip_01"), joaat("WAPClip"), 1, 1);
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_assaultsmg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_assaultsmg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_168(iParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 3:
					func_168(iParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_168(iParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 2:
					func_168(iParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_pistol50_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_pistol50_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_168(iParam0, joaat("component_at_pi_flsh"), 1170392792, 1, 0);
					break;
				
				case 3:
					func_168(iParam0, joaat("component_at_ar_supp_02"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 4:
					func_168(iParam0, joaat("component_pistol50_varmod_luxe"), -1441477783, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_sawnoffshotgun_varmod_luxe"), -1441477783, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_168(iParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 1, 0);
					break;
				
				case 3:
					func_168(iParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 4:
					func_168(iParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_168(iParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 6:
					func_168(iParam0, joaat("component_marksmanrifle_varmod_luxe"), -1441477783, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_heavypistol"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_heavypistol_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_heavypistol_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_168(iParam0, joaat("component_at_pi_flsh"), 1170392792, 1, 0);
					break;
				
				case 3:
					func_168(iParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_168(iParam0, joaat("component_heavypistol_varmod_luxe"), -1441477783, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 2, 0);
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam2)
			{
				case 0:
					func_168(iParam0, joaat("component_combatpdw_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_168(iParam0, joaat("component_combatpdw_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_168(iParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 3:
					func_168(iParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 4:
					func_168(iParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
					break;
			}
			break;
		
		default:
			iVar10 = GlobalFunc_221(iParam1, &uVar12);
			if (iVar10 != -1)
			{
				iVar11 = 0;
				while (iVar11 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar10))
				{
					if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar10, iVar11, &Var51))
					{
						if (Var51 == joaat("WAPClip"))
						{
							iVar1++;
						}
						else if (Var51 == 1170392792)
						{
							iVar2++;
						}
						else if (Var51 == joaat("WAPScop"))
						{
							iVar3++;
						}
						else if (Var51 == joaat("WAPRail"))
						{
							iVar4++;
						}
						else if (Var51 == joaat("WAPGrip"))
						{
							iVar5++;
						}
						else if (Var51 == joaat("WAPSupp"))
						{
							iVar6++;
						}
						else if (Var51 == 1731751835)
						{
							iVar7++;
						}
						else if (Var51 == -1441477783)
						{
							iVar8++;
						}
						else
						{
							iVar9++;
						}
						if (iVar11 == iParam2)
						{
							if (Var51 == joaat("WAPClip"))
							{
								iVar0 = iVar1;
							}
							else if (Var51 == 1170392792)
							{
								iVar0 = iVar2;
							}
							else if (Var51 == joaat("WAPScop"))
							{
								iVar0 = iVar3;
							}
							else if (Var51 == joaat("WAPRail"))
							{
								iVar0 = iVar4;
							}
							else if (Var51 == joaat("WAPGrip"))
							{
								iVar0 = iVar5;
							}
							else if (Var51 == joaat("WAPSupp"))
							{
								iVar0 = iVar6;
							}
							else if (Var51 == 1731751835)
							{
								iVar0 = iVar7;
							}
							else if (Var51 == -1441477783)
							{
								iVar0 = iVar8;
							}
							else
							{
								iVar0 = iVar9;
							}
							func_168(iParam0, Var51.f_3, Var51, iVar0, Var51.f_1);
						}
					}
					iVar11++;
				}
			}
			break;
	}
	if (bParam3)
	{
		iParam0->f_2 = func_165(iParam1, *iParam0);
	}
	return iParam0->f_4 != 989182658;
}

int func_165(int iParam0, int iParam1)//Position - 0xFC6F
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<6> Var43;
	int iVar65;
	int iVar66;
	var uVar67;
	struct<6> Var106;
	char* sVar128;
	struct<4> Var144;
	float fVar148;
	
	iVar0 = 0;
	fVar1 = 2.5f;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		fVar1 = 2.5f;
		switch (iParam0)
		{
			case joaat("weapon_pistol"):
				switch (iParam1)
				{
					case joaat("component_pistol_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_pistol_clip_02"):
						iVar0 = 155;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = 729;
						break;
					
					case joaat("component_pistol_varmod_luxe"):
						iVar0 = 18600;
						break;
				}
				break;
			
			case joaat("weapon_combatpistol"):
				switch (iParam1)
				{
					case joaat("component_combatpistol_clip_01"):
						iVar0 = 136;
						break;
					
					case joaat("component_combatpistol_clip_02"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 735;
						break;
				}
				break;
			
			case joaat("weapon_appistol"):
				switch (iParam1)
				{
					case joaat("component_appistol_clip_01"):
						iVar0 = 145;
						break;
					
					case joaat("component_appistol_clip_02"):
						iVar0 = 165;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 185;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 730;
						break;
					
					case joaat("component_appistol_varmod_luxe"):
						iVar0 = 15800;
						break;
				}
				break;
			
			case joaat("weapon_microsmg"):
				switch (iParam1)
				{
					case joaat("component_microsmg_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_microsmg_clip_02"):
						iVar0 = 137;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 190;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 549;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 775;
						break;
					
					case joaat("component_microsmg_varmod_luxe"):
						iVar0 = 15100;
						break;
				}
				break;
			
			case joaat("weapon_smg"):
				switch (iParam1)
				{
					case joaat("component_smg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_smg_clip_02"):
						iVar0 = 134;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 210;
						break;
					
					case joaat("component_at_scope_macro_02"):
						iVar0 = 549;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 815;
						break;
					
					case joaat("component_smg_varmod_luxe"):
						iVar0 = 19300;
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle"):
				switch (iParam1)
				{
					case joaat("component_assaultrifle_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_assaultrifle_clip_02"):
						iVar0 = 129;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 565;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 810;
						break;
					
					case joaat("component_assaultrifle_varmod_luxe"):
						iVar0 = 14400;
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle"):
				switch (iParam1)
				{
					case joaat("component_carbinerifle_clip_01"):
						iVar0 = 99;
						break;
					
					case joaat("component_carbinerifle_clip_02"):
						iVar0 = 105;
						break;
					
					case joaat("component_at_railcover_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 132;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 150;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 450;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 815;
						break;
					
					case joaat("component_carbinerifle_varmod_luxe"):
						iVar0 = 17900;
						break;
				}
				break;
			
			case joaat("weapon_advancedrifle"):
				switch (iParam1)
				{
					case joaat("component_advancedrifle_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_advancedrifle_clip_02"):
						iVar0 = 124;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 450;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 812;
						break;
					
					case joaat("component_advancedrifle_varmod_luxe"):
						iVar0 = 16500;
						break;
				}
				break;
			
			case joaat("weapon_mg"):
				switch (iParam1)
				{
					case joaat("component_mg_clip_01"):
						iVar0 = 135;
						break;
					
					case joaat("component_mg_clip_02"):
						iVar0 = 145;
						break;
					
					case joaat("component_at_scope_small_02"):
						iVar0 = 450;
						break;
				}
				break;
			
			case joaat("weapon_combatmg"):
				switch (iParam1)
				{
					case joaat("component_combatmg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_combatmg_clip_02"):
						iVar0 = 126;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 129;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 559;
						break;
				}
				break;
			
			case joaat("weapon_pumpshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_sr_supp"):
						iVar0 = 975;
						break;
				}
				break;
			
			case joaat("weapon_assaultshotgun"):
				switch (iParam1)
				{
					case joaat("component_assaultshotgun_clip_01"):
						iVar0 = 129;
						break;
					
					case joaat("component_assaultshotgun_clip_02"):
						iVar0 = 139;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 150;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 225;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 899;
						break;
				}
				break;
			
			case joaat("weapon_sniperrifle"):
				switch (iParam1)
				{
					case joaat("component_sniperrifle_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 559;
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 975;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 920;
						break;
					
					case joaat("component_sniperrifle_varmod_luxe"):
						iVar0 = 13000;
						break;
				}
				break;
			
			case joaat("weapon_heavysniper"):
				switch (iParam1)
				{
					case joaat("component_heavysniper_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 575;
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 999;
						break;
				}
				break;
			
			case joaat("weapon_grenadelauncher"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 128;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 185;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 525;
						break;
				}
				break;
			
			case joaat("weapon_minigun"):
				switch (iParam1)
				{
					case joaat("component_minigun_clip_01"):
						iVar0 = -1;
						break;
				}
				break;
			
			case joaat("weapon_assaultsmg"):
				switch (iParam1)
				{
					case joaat("component_assaultsmg_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_assaultsmg_clip_02"):
						iVar0 = 9700;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2275;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10875;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12400;
						break;
				}
				if (GlobalFunc_84() && (GlobalFunc_220() || GlobalFunc_219()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_bullpupshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4100;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2300;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12450;
						break;
				}
				if (GlobalFunc_84() && (GlobalFunc_220() || GlobalFunc_219()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_pistol50"):
				switch (iParam1)
				{
					case joaat("component_pistol50_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_pistol50_clip_02"):
						iVar0 = 9500;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 2000;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12250;
						break;
					
					case joaat("component_pistol50_varmod_luxe"):
						iVar0 = 20000;
						break;
				}
				if (GlobalFunc_84() && (GlobalFunc_220() || GlobalFunc_219()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				switch (iParam1)
				{
					case joaat("component_sawnoffshotgun_varmod_luxe"):
						iVar0 = 13700;
						break;
				}
				break;
			
			case joaat("weapon_marksmanrifle"):
				switch (iParam1)
				{
					case joaat("component_marksmanrifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_marksmanrifle_clip_02"):
						iVar0 = 3612;
						break;
					
					case joaat("component_at_scope_large_fixed_zoom"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 1020;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 5000;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 1760;
						break;
					
					case joaat("component_marksmanrifle_varmod_luxe"):
						iVar0 = 17200;
						break;
				}
				break;
			
			case joaat("weapon_heavypistol"):
				switch (iParam1)
				{
					case joaat("component_heavypistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_heavypistol_clip_02"):
						iVar0 = 3680;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 710;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 4800;
						break;
					
					case joaat("component_heavypistol_varmod_luxe"):
						iVar0 = 12000;
						break;
				}
				break;
			
			default:
				iVar2 = GlobalFunc_221(iParam0, &uVar4);
				if (iVar2 != -1)
				{
					iVar3 = 0;
					while (iVar3 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar2))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar2, iVar3, &Var43))
						{
							if (Var43.f_3 == iParam1)
							{
								fVar1 = 1f;
								if (Var43.f_5 == -1)
								{
									iVar0 = -1;
								}
								else
								{
									iVar0 = Var43.f_5;
								}
								if (iParam0 == joaat("weapon_hammer"))
								{
									if (GlobalFunc_84() && (GlobalFunc_220() || GlobalFunc_219()))
									{
										iVar0 = 0;
									}
								}
							}
						}
						iVar3++;
					}
				}
				break;
		}
	}
	else
	{
		fVar1 = 2.5f;
		switch (iParam0)
		{
			case joaat("weapon_pistol"):
				switch (iParam1)
				{
					case joaat("component_pistol_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_pistol_clip_02"):
						iVar0 = 9175;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2855));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1675;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4305));
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = 12050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4306));
						break;
					
					case joaat("component_pistol_varmod_luxe"):
						iVar0 = Global_262145.f_8238;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4381));
						break;
				}
				break;
			
			case joaat("weapon_combatpistol"):
				switch (iParam1)
				{
					case joaat("component_combatpistol_clip_01"):
						iVar0 = 136;
						break;
					
					case joaat("component_combatpistol_clip_02"):
						iVar0 = 9250;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2856));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1825;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4307));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 12100;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4308));
						break;
				}
				break;
			
			case joaat("weapon_appistol"):
				switch (iParam1)
				{
					case joaat("component_appistol_clip_01"):
						iVar0 = 145;
						break;
					
					case joaat("component_appistol_clip_02"):
						iVar0 = 9400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2858));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1975;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4309));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 12200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4310));
						break;
					
					case joaat("component_appistol_varmod_luxe"):
						iVar0 = Global_262145.f_8237;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4370));
						break;
				}
				break;
			
			case joaat("weapon_microsmg"):
				switch (iParam1)
				{
					case joaat("component_microsmg_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_microsmg_clip_02"):
						iVar0 = 9325;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2859));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1900;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4313));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10800;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4315));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12150;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4314));
						break;
					
					case joaat("component_microsmg_varmod_luxe"):
						iVar0 = Global_262145.f_8241;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4380));
						break;
				}
				break;
			
			case joaat("weapon_smg"):
				switch (iParam1)
				{
					case joaat("component_smg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_smg_clip_02"):
						iVar0 = 9475;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2860));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4316));
						break;
					
					case joaat("component_at_scope_macro_02"):
						iVar0 = 10825;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4318));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 12250;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4317));
						break;
					
					case joaat("component_smg_varmod_luxe"):
						iVar0 = Global_262145.f_8240;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4385));
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle"):
				switch (iParam1)
				{
					case joaat("component_assaultrifle_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_assaultrifle_clip_02"):
						iVar0 = 9550;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2862));
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4325));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2125;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4322));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10850;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4324));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12300;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4323));
						break;
					
					case joaat("component_assaultrifle_varmod_luxe"):
						iVar0 = Global_262145.f_8234;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4371));
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle"):
				switch (iParam1)
				{
					case joaat("component_carbinerifle_clip_01"):
						iVar0 = 99;
						break;
					
					case joaat("component_carbinerifle_clip_02"):
						iVar0 = 9775;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2863));
						break;
					
					case joaat("component_at_railcover_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4333));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4330));
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 10900;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4332));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12450;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4331));
						break;
					
					case joaat("component_carbinerifle_varmod_luxe"):
						iVar0 = Global_262145.f_8236;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4374));
						break;
				}
				break;
			
			case joaat("weapon_advancedrifle"):
				switch (iParam1)
				{
					case joaat("component_advancedrifle_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_advancedrifle_clip_02"):
						iVar0 = 9925;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2865));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2425;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4335));
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 10950;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4337));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4336));
						break;
					
					case joaat("component_advancedrifle_varmod_luxe"):
						iVar0 = Global_262145.f_8235;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4369));
						break;
				}
				break;
			
			case joaat("weapon_mg"):
				switch (iParam1)
				{
					case joaat("component_mg_clip_01"):
						iVar0 = 135;
						break;
					
					case joaat("component_mg_clip_02"):
						iVar0 = 9850;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2866));
						break;
					
					case joaat("component_at_scope_small_02"):
						iVar0 = 10925;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4338));
						break;
				}
				break;
			
			case joaat("weapon_combatmg"):
				switch (iParam1)
				{
					case joaat("component_combatmg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_combatmg_clip_02"):
						iVar0 = 10000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2867));
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4425;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4359));
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 10975;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4360));
						break;
				}
				break;
			
			case joaat("weapon_pumpshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_flsh"):
						iVar0 = 1750;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4341));
						break;
					
					case joaat("component_at_sr_supp"):
						iVar0 = 12350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4342));
						break;
				}
				break;
			
			case joaat("weapon_assaultshotgun"):
				switch (iParam1)
				{
					case joaat("component_assaultshotgun_clip_01"):
						iVar0 = 129;
						break;
					
					case joaat("component_assaultshotgun_clip_02"):
						iVar0 = 9625;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2869));
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4275;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4345));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4346));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4347));
						break;
				}
				break;
			
			case joaat("weapon_sniperrifle"):
				switch (iParam1)
				{
					case joaat("component_sniperrifle_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 12400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4348));
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4349));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4350));
						break;
					
					case joaat("component_sniperrifle_varmod_luxe"):
						iVar0 = Global_262145.f_8243;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4386));
						break;
				}
				break;
			
			case joaat("weapon_heavysniper"):
				switch (iParam1)
				{
					case joaat("component_heavysniper_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 99;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4351));
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4352));
						break;
				}
				break;
			
			case joaat("weapon_grenadelauncher"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4361));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4357));
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 11000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4358));
						break;
				}
				break;
			
			case joaat("weapon_minigun"):
				switch (iParam1)
				{
					case joaat("component_minigun_clip_01"):
						iVar0 = -1;
						break;
				}
				break;
			
			case joaat("weapon_assaultsmg"):
				switch (iParam1)
				{
					case joaat("component_assaultsmg_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_assaultsmg_clip_02"):
						iVar0 = 9700;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2861));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2275;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4319));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10875;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4321));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4320));
						break;
				}
				break;
			
			case joaat("weapon_gusenberg"):
				switch (iParam1)
				{
					case joaat("component_gusenberg_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_gusenberg_clip_02"):
						iVar0 = Global_262145.f_4939;
						break;
				}
				break;
			
			case joaat("weapon_snspistol"):
				switch (iParam1)
				{
					case joaat("component_snspistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_snspistol_clip_02"):
						iVar0 = Global_262145.f_5516;
						break;
				}
				break;
			
			case joaat("weapon_specialcarbine"):
				switch (iParam1)
				{
					case joaat("component_specialcarbine_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_specialcarbine_clip_02"):
						iVar0 = Global_262145.f_5520;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_5523;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = Global_262145.f_5519;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_5517;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_5522;
						break;
				}
				break;
			
			case joaat("weapon_heavypistol"):
				switch (iParam1)
				{
					case joaat("component_heavypistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_heavypistol_clip_02"):
						iVar0 = Global_262145.f_5521;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = Global_262145.f_5524;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_5518;
						break;
					
					case joaat("component_heavypistol_varmod_luxe"):
						iVar0 = Global_262145.f_5543;
						break;
				}
				break;
			
			case joaat("weapon_bullpuprifle"):
				switch (iParam1)
				{
					case joaat("component_bullpuprifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_bullpuprifle_clip_02"):
						iVar0 = Global_262145.f_5527;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_5529;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_5525;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = Global_262145.f_5526;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_5528;
						break;
				}
				break;
			
			case joaat("weapon_vintagepistol"):
				switch (iParam1)
				{
					case joaat("component_vintagepistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_vintagepistol_clip_02"):
						iVar0 = Global_262145.f_5999;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_6000;
						break;
				}
				break;
			
			case joaat("weapon_heavyshotgun"):
				switch (iParam1)
				{
					case joaat("component_heavyshotgun_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_heavyshotgun_clip_02"):
						iVar0 = Global_262145.f_6649;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_6650;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_6651;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_6652;
						break;
				}
				break;
			
			case joaat("weapon_marksmanrifle"):
				switch (iParam1)
				{
					case joaat("component_marksmanrifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_marksmanrifle_clip_02"):
						iVar0 = Global_262145.f_6655;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = Global_262145.f_6657;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_6656;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_6658;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_6659;
						break;
					
					case joaat("component_marksmanrifle_varmod_luxe"):
						iVar0 = Global_262145.f_6660;
						break;
				}
				break;
			
			case joaat("weapon_bullpupshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4100;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2300;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4343));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12450;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4344));
						break;
				}
				if (GlobalFunc_84() && (GlobalFunc_220() || GlobalFunc_219()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_pistol50"):
				switch (iParam1)
				{
					case joaat("component_pistol50_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_pistol50_clip_02"):
						iVar0 = 9500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2857));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 2000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4311));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12250;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4312));
						break;
					
					case joaat("component_pistol50_varmod_luxe"):
						iVar0 = Global_262145.f_8239;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4382));
						break;
				}
				if (GlobalFunc_84() && (GlobalFunc_220() || GlobalFunc_219()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				switch (iParam1)
				{
					case joaat("component_sawnoffshotgun_varmod_luxe"):
						iVar0 = Global_262145.f_8242;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4384));
						break;
				}
				break;
			
			default:
				iVar65 = GlobalFunc_221(iParam0, &uVar67);
				if (iVar65 != -1)
				{
					iVar66 = 0;
					while (iVar66 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar65))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar65, iVar66, &Var106))
						{
							if (Var106.f_3 == iParam1)
							{
								fVar1 = 1f;
								if (Var106.f_5 == -1)
								{
									iVar0 = -1;
								}
								else
								{
									iVar0 = Var106.f_5;
								}
							}
						}
						iVar66++;
					}
				}
				break;
			}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GlobalFunc_4979())
	{
		StringCopy(&Var144, GlobalFunc_4978(iParam1, iParam0), 16);
		GlobalFunc_215(&sVar128, Var144, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 3, 1, GlobalFunc_4977(iParam0), -1, -1);
		if (NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&sVar128))
		{
			iVar0 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(MISC::GET_HASH_KEY(&sVar128), 1671640801, 1);
		}
	}
	if (iVar0 > 0)
	{
		fVar148 = func_166(iParam0, &iVar0, fVar1);
		if (fVar148 != 1f)
		{
		}
	}
	return iVar0;
}

float func_166(int iParam0, int iParam1, float fParam2)//Position - 0x11360
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = 0f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GlobalFunc_4979())
	{
		return 1f;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * fParam2));
	}
	if (!Global_68245)
	{
		if (*iParam1 != 0)
		{
			iVar2 = func_144(iParam0);
			if (iVar2 == 3)
			{
				fVar1 = 0.1f;
			}
			else if (iVar2 == 2)
			{
				fVar1 = 0.15f;
			}
			else if (iVar2 == 1)
			{
				fVar1 = 0.25f;
			}
		}
	}
	if (iLocal_49 == 1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * Global_262145.f_62));
			fVar1 = (fVar1 + (SYSTEM::TO_FLOAT(Global_262145.f_104) / 100f));
		}
	}
	if (iLocal_49 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * Global_262145.f_62));
			if (func_95())
			{
				fVar1 = (fVar1 + (SYSTEM::TO_FLOAT(Global_262145.f_104) / 100f));
				iLocal_49 = 1;
			}
			else
			{
				iLocal_49 = -1;
			}
		}
	}
	fVar0 = (1f - fVar1);
	*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * fVar0));
	return fVar0;
}


void func_168(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1199A
{
	*uParam0 = iParam1;
	uParam0->f_4 = iParam2;
	uParam0->f_5 = iParam3;
	uParam0->f_1 = iParam4;
}


void func_170(var uParam0, int iParam1)//Position - 0x119EF
{
	if (*uParam0 == iParam1 && uParam0->f_7)
	{
		GlobalFunc_2460("Unable to lock shop doors as player is inside the shop.", -1);
	}
	else
	{
		func_769(iParam1, 1, 0);
	}
	GlobalFunc_8585(iParam1, 0);
	GlobalFunc_8587(iParam1, 0);
	GlobalFunc_7833(iParam1, 1, 1);
	GlobalFunc_7833(iParam1, 10, 1);
	GlobalFunc_7833(iParam1, 11, 1);
	GlobalFunc_7833(iParam1, 12, 1);
	GlobalFunc_7833(iParam1, 13, 1);
	GlobalFunc_7833(iParam1, 22, 1);
	GlobalFunc_7833(iParam1, 25, 1);
	if (uParam0->f_1 == 1)
	{
		GlobalFunc_7833(iParam1, 19, 1);
	}
	if (!GlobalFunc_2507(iParam1))
	{
		GlobalFunc_2460("Letting shop controller know to relaunch when in range.", -1);
		GlobalFunc_7834(iParam1, 17, 1);
	}
	GlobalFunc_1293(iParam1);
	GlobalFunc_7128(iParam1);
	GlobalFunc_2466(PLAYER::PLAYER_ID(), iParam1);
	GlobalFunc_2462();
	if (GlobalFunc_2458(iParam1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12) && !PED::IS_PED_INJURED(uParam0->f_12))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_12))
			{
				PED::SET_PED_KEEP_TASK(uParam0->f_12, 1);
			}
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
		}
		if (GlobalFunc_8593(uParam0, iParam1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
			{
				PED::DELETE_PED(&(uParam0->f_12));
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_12));
		}
	}
}
















void func_186()//Position - 0x11F5E
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<25> Var3;
	
	if (GlobalFunc_1549(1))
	{
		if (GlobalFunc_252(PLAYER::PLAYER_ID(), 0, 1))
		{
			GlobalFunc_1547();
			GlobalFunc_1539();
		}
		else if (!GlobalFunc_2500())
		{
			GlobalFunc_1539();
		}
		return;
	}
	bLocal_1032 = (((((!HUD::IS_PAUSE_MENU_ACTIVE() && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !iLocal_1057) && !Global_90014.f_1318) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE());
	bLocal_1033 = true;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
		if ((WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), Global_90014.f_1, 0) && Local_168.f_103.f_31 == 2) && Global_90014.f_1 != joaat("gadget_parachute"))
		{
			iVar1 = Global_90014.f_1;
		}
		else
		{
			iVar1 = joaat("weapon_unarmed");
		}
		if (iVar0 != iVar1)
		{
			if (iVar1 == joaat("gadget_parachute"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar1, 0);
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar1, 1);
			}
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 1);
			WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), 0, 0, 1, 0);
		}
		if ((iVar1 != 0 && iVar1 != joaat("weapon_unarmed")) && iVar1 != joaat("gadget_parachute"))
		{
			bLocal_1033 = false;
		}
	}
	if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::DOES_ENTITY_EXIST(Local_168.f_12)) && !PED::IS_PED_INJURED(Local_168.f_12))
	{
		NETWORK::SET_ENTITY_LOCALLY_VISIBLE(Local_168.f_12);
	}
	func_710(&Local_168, &(Local_168.f_103));
	if (Local_168.f_103.f_31 > 1)
	{
		GlobalFunc_5800(0, bLocal_1033, 1);
	}
	GlobalFunc_7629();
	switch (Local_168.f_103.f_31)
	{
		case 0:
			if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Local_168.f_170.f_31, 7f) && !Global_68245)
			{
				GlobalFunc_7503(&Local_168);
			}
			Local_1078.f_19 = 0;
			Local_1078.f_18 = 0;
			MISC::_0x65D2EBB47E1CEC21(1);
			func_699(0, 0, 0);
			GlobalFunc_4998("GUN_MNU", Local_168);
			Global_2540565 = 1;
			GlobalFunc_5798(Local_168);
			func_695();
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_AMMO_SHOP", 0);
			func_694();
			bVar2 = true;
			if (!bLocal_1048)
			{
				GlobalFunc_2460("Waiting for weapons to load", -1);
				if (!func_699(1, 1, 0))
				{
					bVar2 = false;
				}
			}
			if (!GlobalFunc_4998("GUN_MNU", Local_168))
			{
				GlobalFunc_2460("Waiting for menu assets to load", -1);
				bVar2 = false;
			}
			if (!GlobalFunc_5798(Local_168))
			{
				GlobalFunc_2460("Waiting for intro assets to load", -1);
				bVar2 = false;
			}
			if (!func_695())
			{
			}
			if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_AMMO_SHOP", 0))
			{
				GlobalFunc_2460("Waiting for audio assets to load", -1);
				bVar2 = false;
			}
			if (bVar2)
			{
				Local_168.f_103.f_31 = 1;
				Local_168.f_103.f_5 = 0;
			}
			else if (SYSTEM::TIMERA() > 25000)
			{
				Local_168.f_103.f_31 = 8;
			}
			break;
		
		case 1:
			switch (Local_168.f_103.f_5)
			{
				case 0:
					Local_168.f_103.f_19 = 1;
					func_693(0, 1, Local_168.f_12, 0, 1, 0);
					GlobalFunc_10206(&(Local_168.f_103));
					GlobalFunc_9214(&Local_168, 1077936128);
					iLocal_1019 = 0;
					bLocal_1021 = true;
					iLocal_1020 = 1;
					iLocal_1022 = 1;
					bLocal_1053 = false;
					iLocal_1024 = 0;
					bLocal_1100 = false;
					iLocal_1023 = MISC::GET_GAME_TIMER();
					Local_168.f_103.f_1 = 0;
					Local_168.f_103.f_2 = -1;
					Local_168.f_103.f_3 = 0;
					Local_168.f_103.f_4 = 0;
					Local_168.f_103.f_9 = 0;
					Local_168.f_103.f_10 = 1;
					Local_168.f_103.f_5 = 0;
					Local_168.f_103.f_16 = 0;
					Local_168.f_103.f_17 = 0;
					Local_168.f_103.f_23 = 0;
					StringCopy(&(Local_168.f_103.f_11), "", 16);
					bLocal_1205 = false;
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						HUD::SET_MULTIPLAYER_WALLET_CASH();
						HUD::SET_MULTIPLAYER_BANK_CASH();
					}
					if (!Global_68245)
					{
						Local_1078.f_19 = 1;
					}
					func_82(1, 0);
					func_686(Local_168, Local_168.f_103, &(Local_168.f_103.f_1), &(Local_168.f_103.f_3), &Var3);
					if (!func_685(Var3, Var3.f_24))
					{
						func_684(Local_168, &(Local_168.f_103.f_1), Local_168.f_103.f_3, &Var3);
					}
					func_683(Var3);
					func_677();
					func_638();
					if (func_84(Local_168, &Global_2543149, &Var3, Local_168.f_103.f_3, Local_168.f_103.f_1, 0))
					{
						func_635(&Local_168, &(Local_168.f_103), &Var3, 0);
					}
					else
					{
						func_633(&Local_168, Local_168.f_103.f_4, Local_168.f_103.f_3);
					}
					func_630(&(Local_168.f_38[Local_168.f_103.f_4 /*12*/]));
					if (!Global_68245)
					{
						if (GlobalFunc_5785(1))
						{
							ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false);
						}
					}
					else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, 1);
					}
					iLocal_135 = 0;
					iLocal_1207 = 0;
					iLocal_1209 = 0;
					iLocal_1208 = 0;
					Local_168.f_103.f_31 = 2;
					break;
			}
			break;
		
		case 2:
			if (PAD::_0x6CD79468A1E595C6(2))
			{
				func_638();
			}
			func_695();
			func_343();
			func_324();
			func_322();
			func_318();
			func_193();
			break;
		
		case 6:
			GlobalFunc_2462();
			Local_168.f_103.f_31 = 7;
			break;
		
		case 7:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
				HUD::REMOVE_MULTIPLAYER_BANK_CASH();
			}
			GlobalFunc_2463(1);
			Local_1078.f_19 = 0;
			if (ENTITY::DOES_ENTITY_EXIST(Local_168.f_12))
			{
				TASK::TASK_LOOK_AT_ENTITY(Local_168.f_12, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				if (Global_68245)
				{
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, 0);
				}
			}
			GlobalFunc_2477(&(Local_168.f_38));
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			func_82(0, 1);
			MISC::_0x65D2EBB47E1CEC21(0);
			func_75();
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 0);
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
			}
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				func_190(PLAYER::PLAYER_PED_ID(), 0);
			}
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iLocal_1024)
				{
					if (!Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_685)
					{
						GlobalFunc_6677("AM_H_ARMR", 2, 0, 1000, 10000, 7, 0, 0, 0);
						Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_685 = 0;
					}
					iLocal_1024 = 0;
				}
			}
			GlobalFunc_9185();
			Global_90014.f_1 = 0;
			GlobalFunc_10160(&(Local_168.f_103), 0, 1, 1);
			GlobalFunc_4988(1, Local_168);
			Global_2540565 = 0;
			Local_168.f_103.f_19 = 0;
			Local_168.f_11 = 3;
			break;
		
		case 8:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
				HUD::REMOVE_MULTIPLAYER_BANK_CASH();
			}
			GlobalFunc_2477(&(Local_168.f_38));
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 0);
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
			}
			func_82(0, 1);
			MISC::_0x65D2EBB47E1CEC21(0);
			GlobalFunc_4988(1, Local_168);
			Global_2540565 = 0;
			GlobalFunc_5782(Local_168);
			AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
			func_76();
			func_75();
			GlobalFunc_10160(&(Local_168.f_103), 0, 1, 1);
			GlobalFunc_2463(1);
			GlobalFunc_9185();
			Local_1078.f_19 = 0;
			Global_90014.f_1 = 0;
			Local_168.f_103.f_19 = 0;
			Local_168.f_11 = 3;
			break;
	}
	GlobalFunc_2582(&Local_1078, 0);
}




void func_190(int iParam0, bool bParam1)//Position - 0x128EE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GlobalFunc_6782(iParam0);
	if (GlobalFunc_42(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			GlobalFunc_6796(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar0 /*284*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1151[iVar2 /*4*/][iVar0] = HUD::_HUD_WEAPON_WHEEL_GET_SLOT_HASH(iVar2);
				if (bParam1)
				{
					iVar1 = HUD::_HUD_WEAPON_WHEEL_GET_SELECTED_HASH();
					if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1151[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1184 = iVar2;
					}
				}
				iVar2++;
			}
			PLAYER::GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), &iVar3);
			if (iVar0 == 0)
			{
				STATS::STAT_SET_INT(joaat("sp0_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 1)
			{
				STATS::STAT_SET_INT(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				STATS::STAT_SET_INT(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}



void func_193()//Position - 0x12C7B
{
	struct<26> Var0;
	int iVar26;
	int iVar27;
	float fVar28;
	bool bVar29;
	char* sVar30;
	char cVar34[16];
	int iVar38;
	bool bVar39;
	int iVar40;
	int iVar41;
	float fVar42;
	bool bVar43;
	int iVar44;
	int iVar45;
	float fVar46;
	int iVar47;
	bool bVar48;
	int iVar49;
	bool bVar50;
	bool bVar51;
	int iVar52;
	var uVar53;
	float fVar54;
	bool bVar55;
	bool bVar56;
	int iVar57;
	var uVar58;
	float fVar59;
	bool bVar60;
	bool bVar61;
	bool bVar62;
	bool bVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	struct<5> Var69;
	struct<5> Var74;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	float fVar83;
	float fVar84;
	float fVar85;
	float fVar86;
	float fVar87;
	float fVar88[4];
	int iVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	float fVar98;
	float fVar99;
	
	if (iLocal_1031 && !Local_168.f_103.f_25)
	{
		if (Local_168.f_103.f_5 == 1 && Local_168.f_103.f_2 == -1)
		{
			if (func_84(Local_168, &Global_2543149, &Var0, Local_168.f_103.f_3, Local_168.f_103.f_1, 0))
			{
				if (Var0.f_24 == 0 && Var0.f_25 != 0)
				{
					Local_168.f_103.f_2 = 0;
				}
				else if (func_317(Var0, &(Local_168.f_103.f_2)))
				{
					Local_168.f_103.f_2++;
				}
				else if (func_313(Var0, &(Local_168.f_103.f_2)))
				{
					Local_168.f_103.f_2 += 21;
				}
				else
				{
					Local_168.f_103.f_2 = -1;
				}
			}
			if (Var0 == joaat("gadget_parachute"))
			{
				PLAYER::GET_PLAYER_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_ID(), &iLocal_1026);
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_1029 = GlobalFunc_6872(2024, -1, 0);
				}
				iLocal_1028 = func_312();
				if (PLAYER::GET_PLAYER_HAS_RESERVE_PARACHUTE(PLAYER::PLAYER_ID()))
				{
					PLAYER::GET_PLAYER_RESERVE_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_ID(), &iLocal_1027);
				}
				else
				{
					iLocal_1027 = -1;
				}
			}
			else if (Var0 == -61829581)
			{
			}
			else
			{
				iLocal_1026 = WEAPON::GET_PED_WEAPON_TINT_INDEX(PLAYER::PLAYER_PED_ID(), Var0);
				if (func_311(Var0))
				{
					if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), Var0, func_310(Var0)))
					{
						if (WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(Local_168.f_218[(Local_168.f_103.f_3 * 6 + Local_168.f_103.f_1)], func_310(Var0)))
						{
							iLocal_1026 = -1;
						}
					}
				}
			}
			iLocal_1030 = Local_168.f_103.f_2;
		}
		func_677();
		func_638();
		iLocal_1031 = 0;
	}
	HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
	HUD::SHOW_HUD_COMPONENT_THIS_FRAME(4);
	HUD::SHOW_HUD_COMPONENT_THIS_FRAME(5);
	HUD::SHOW_HUD_COMPONENT_THIS_FRAME(13);
	if (!bLocal_1033)
	{
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(2);
	}
	if (Local_168.f_103.f_16)
	{
		if (MISC::GET_HASH_KEY(&(Local_168.f_103.f_11)) == joaat("GSM_UNLOCK_N"))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				GlobalFunc_1353(&(Local_168.f_103.f_11), 0, 0);
			}
			else if (Global_90014.f_1 == joaat("weapon_bottle") || Global_90014.f_1 == joaat("weapon_snspistol"))
			{
				GlobalFunc_1353("SHOP_UNLOCKDLC", 0, 0);
				GlobalFunc_1330("SHOP_CONTENT_1");
			}
			else if (Global_90014.f_1 == joaat("weapon_gusenberg"))
			{
				GlobalFunc_1353("SHOP_UNLOCKDLC", 0, 0);
				GlobalFunc_1330("SHOP_CONTENT_4");
			}
			else if (Global_90014.f_1 == joaat("weapon_heavypistol") || Global_90014.f_1 == joaat("weapon_specialcarbine"))
			{
				GlobalFunc_1353("SHOP_UNLOCKDLC2", 0, 0);
				GlobalFunc_1330("SHOP_CONTENT_2");
			}
			else if (Global_90014.f_1 == joaat("weapon_bullpuprifle"))
			{
				GlobalFunc_1353("SHOP_UNLOCKDLC2", 0, 0);
				GlobalFunc_1330("SHOP_CONTENT_5");
			}
			else if (Global_90014.f_1 == joaat("weapon_dagger") || Global_90014.f_1 == joaat("weapon_vintagepistol"))
			{
				GlobalFunc_1353("SHOP_UNLOCKDLC2", 0, 0);
				GlobalFunc_1330("SHOP_CONTENT_6b");
			}
			else if (Global_90014.f_1 == joaat("weapon_combatpdw"))
			{
				GlobalFunc_1353("SHOP_UNLOCKDLC2", 0, 0);
				GlobalFunc_1330("SHOP_CONTENT_12");
			}
			else if (Global_90014.f_1 == joaat("weapon_musket"))
			{
				GlobalFunc_1353("SHOP_UNLOCKDLC3", 0, 0);
				GlobalFunc_1330("SHOP_CONTENT_8");
			}
			else if (Global_90014.f_1 == joaat("weapon_hominglauncher") || Global_90014.f_1 == joaat("weapon_proxmine"))
			{
				GlobalFunc_1353("SHOP_UNLOCKDLC4", 0, 0);
				GlobalFunc_1330("SHOP_CONTENT_3");
			}
			else if (Global_90014.f_1 == joaat("gadget_parachute"))
			{
				if (func_84(Local_168, &Global_2543149, &Var0, Local_168.f_103.f_3, Local_168.f_103.f_1, 0))
				{
					if (func_305(&Local_1222, Var0, func_307(Var0, (Local_168.f_103.f_2 - 21)), 0))
					{
						if (Local_1222.f_10 == 1 && Local_1222.f_9 > 46)
						{
							GlobalFunc_1353("SHOP_UNLOCKDLC4", 0, 0);
							GlobalFunc_1330("SHOP_CONTENT_3");
						}
						else if (Local_1222.f_10 == 1 && Local_1222.f_9 > 26)
						{
							GlobalFunc_1353("SHOP_UNLOCKDLC2", 0, 0);
							GlobalFunc_1330("SHOP_CONTENT_10b");
						}
						else if (((Local_1222.f_10 == 1 && Local_1222.f_9 > 0) || (Local_1222.f_10 == 2 && Local_1222.f_9 >= 8)) || (Local_1222.f_10 == 3 && Local_1222.f_9 >= 8))
						{
							GlobalFunc_1353("SHOP_UNLOCKDLC2", 0, 0);
							GlobalFunc_1330("SHOP_CONTENT_9b");
						}
						else
						{
							GlobalFunc_1353(&(Local_168.f_103.f_11), 0, 0);
						}
					}
				}
			}
			else
			{
				GlobalFunc_1353(&(Local_168.f_103.f_11), 0, 0);
			}
		}
		else
		{
			GlobalFunc_1353(&(Local_168.f_103.f_11), 0, 0);
			if (MISC::GET_HASH_KEY(&(Local_168.f_103.f_11)) == joaat("GSM_INV_FULL"))
			{
				if (!func_302(238))
				{
					GlobalFunc_1344(GlobalFunc_4198(238));
				}
				else if (!func_302(239))
				{
					GlobalFunc_1344(GlobalFunc_4198(239));
				}
				else if (!func_302(240))
				{
					GlobalFunc_1344(GlobalFunc_4198(240));
				}
				else if (!func_302(241))
				{
					GlobalFunc_1344(GlobalFunc_4198(241));
				}
				else if (!func_302(242))
				{
					GlobalFunc_1344(GlobalFunc_4198(242));
				}
				else if (!func_302(243))
				{
					GlobalFunc_1344(GlobalFunc_4198(243));
				}
				else if (!func_302(244))
				{
					GlobalFunc_1344(GlobalFunc_4198(244));
				}
				else if (!func_302(245))
				{
					GlobalFunc_1344(GlobalFunc_4198(245));
				}
				else if (!func_302(246))
				{
					GlobalFunc_1344(GlobalFunc_4198(246));
				}
				else if (!func_302(247))
				{
					GlobalFunc_1344(GlobalFunc_4198(247));
				}
			}
		}
		iVar26 = 0;
		iVar27 = 0;
		fVar28 = (1f - func_94(Var0, &iVar26, &iVar27));
		if (fVar28 != 0f)
		{
			GlobalFunc_2588("GSHOP_DISC", 0, 0);
			func_298(SYSTEM::ROUND((fVar28 * 100f)));
		}
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), Local_168.f_103.f_7)) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - Local_168.f_103.f_6) > 0))
		{
			Local_168.f_103.f_16 = 0;
		}
	}
	if (!Local_168.f_103.f_16)
	{
		bVar29 = false;
		if (func_84(Local_168, &Global_2543149, &Var0, Local_168.f_103.f_3, Local_168.f_103.f_1, 0))
		{
			if (Local_168.f_103.f_5 == 0)
			{
				if (Var0.f_24 == 7)
				{
					if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
					{
						GlobalFunc_1353("GSM_DLC1", 0, 0);
						bVar29 = true;
					}
					else if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
					{
						GlobalFunc_1353("GSM_DLC2", 0, 0);
						bVar29 = true;
					}
				}
				else if (!MISC::IS_BIT_SET(Local_168.f_645, 7))
				{
					if (Global_68245)
					{
						if (Var0.f_24 == 4)
						{
							GlobalFunc_1353("GS_STOCK2", 0, 0);
							GlobalFunc_1344(GlobalFunc_4198(1));
						}
						else if (Var0.f_24 == 3)
						{
							if (Local_168.f_103.f_1 == 0)
							{
								GlobalFunc_1353("GS_STOCK2", 0, 0);
								GlobalFunc_1344(GlobalFunc_4198(156));
							}
							else if (Local_168.f_103.f_1 == 1)
							{
								GlobalFunc_1353("GS_STOCK2", 0, 0);
								GlobalFunc_1344(GlobalFunc_4198(157));
							}
							else if (Local_168.f_103.f_1 == 2)
							{
								GlobalFunc_1353("GS_STOCK2", 0, 0);
								GlobalFunc_1344(GlobalFunc_4198(158));
							}
							else if (Local_168.f_103.f_1 == 3)
							{
								GlobalFunc_1353("GS_STOCK2", 0, 0);
								GlobalFunc_1344(GlobalFunc_4198(159));
							}
							else if (Local_168.f_103.f_1 == 4)
							{
								GlobalFunc_1353("GS_STOCK2", 0, 0);
								GlobalFunc_1344(GlobalFunc_4198(160));
							}
							else
							{
								GlobalFunc_1353("GS_STOCK", 0, 0);
							}
						}
						else if (((Var0.f_24 == 0 || Var0.f_24 == 1) || Var0.f_24 == 2) || Var0.f_24 == 5)
						{
							if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !GlobalFunc_524(1, 1)) && Var0 == joaat("weapon_sawnoffshotgun"))
							{
								GlobalFunc_1353("GSM_LOCK_SCLUB", 0, 0);
							}
							else
							{
								GlobalFunc_1353("GS_STOCK2", 0, 0);
								GlobalFunc_1344(GlobalFunc_8137(Var0));
							}
						}
						else
						{
							GlobalFunc_1353("GS_STOCK", 0, 0);
						}
						bVar29 = true;
					}
					else
					{
						GlobalFunc_1353("GS_STOCK", 0, 0);
						bVar29 = true;
					}
				}
				else
				{
					if (Var0.f_24 == 3 && Global_68245)
					{
						if (Local_168.f_103.f_1 == 0)
						{
							iVar38 = 156;
						}
						else if (Local_168.f_103.f_1 == 1)
						{
							iVar38 = 157;
						}
						else if (Local_168.f_103.f_1 == 2)
						{
							iVar38 = 158;
						}
						else if (Local_168.f_103.f_1 == 3)
						{
							iVar38 = 159;
						}
						else if (Local_168.f_103.f_1 == 4)
						{
							iVar38 = 160;
						}
						if (func_295(GlobalFunc_8354(), iVar38))
						{
							func_286(GlobalFunc_8354(), iVar38);
							func_284(&(Local_168.f_103), "GSM_UNLOCK_N", 3000);
						}
						else
						{
							func_282(&Global_2543149, Local_168.f_103.f_3, Local_168.f_103.f_1, &sVar30, &cVar34);
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar34) && HUD::DOES_TEXT_LABEL_EXIST(&cVar34))
							{
								GlobalFunc_1353(&cVar34, 0, 0);
								bVar29 = true;
							}
						}
					}
					else
					{
						bVar39 = false;
						if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							switch (Var0)
							{
								case joaat("weapon_bottle"):
									StringCopy(&cVar34, "WTD2_Bottle", 16);
									bVar39 = true;
									break;
								
								case joaat("weapon_snspistol"):
									StringCopy(&cVar34, "WTD2_SNSPistol", 16);
									bVar39 = true;
									break;
								
								case joaat("weapon_gusenberg"):
									StringCopy(&cVar34, "WTD2_GUSNBRG", 16);
									bVar39 = true;
									break;
								
								case joaat("weapon_heavypistol"):
									StringCopy(&cVar34, "WTD2_HvyPistol", 16);
									bVar39 = true;
									break;
								
								case joaat("weapon_specialcarbine"):
									StringCopy(&cVar34, "WTD2_SpCarbine", 16);
									bVar39 = true;
									break;
								
								case joaat("weapon_bullpuprifle"):
									StringCopy(&cVar34, "WTD2_BullRifle", 16);
									bVar39 = true;
									break;
								
								case joaat("weapon_dagger"):
									StringCopy(&cVar34, "WTD2_DAGGER", 16);
									bVar39 = true;
									break;
								
								case joaat("weapon_vintagepistol"):
									StringCopy(&cVar34, "WTD2_VPISTOL", 16);
									bVar39 = true;
									break;
								
								case joaat("weapon_firework"):
									StringCopy(&cVar34, "WTD2_FIREWRK", 16);
									bVar39 = true;
									break;
								
								case joaat("weapon_musket"):
									StringCopy(&cVar34, "WTD2_MUSKET", 16);
									bVar39 = true;
									break;
								
								case joaat("weapon_marksmanrifle"):
									StringCopy(&cVar34, "WTD2_MKRIFLE", 16);
									bVar39 = true;
									break;
								
								case joaat("weapon_heavyshotgun"):
									StringCopy(&cVar34, "WTD2_HVYSHGN", 16);
									bVar39 = true;
									break;
								
								case joaat("weapon_hominglauncher"):
									StringCopy(&cVar34, "WTD2_HOMLNCH", 16);
									bVar39 = true;
									break;
								
								case joaat("weapon_proxmine"):
									StringCopy(&cVar34, "WTD2_PRXMINE", 16);
									bVar39 = true;
									break;
								
								case joaat("weapon_combatpdw"):
									StringCopy(&cVar34, "WTD2_COMBATPDW", 16);
									bVar39 = true;
									break;
								}
						}
						if (bVar39)
						{
							GlobalFunc_1353(&cVar34, 0, 0);
							bVar29 = true;
						}
						else
						{
							func_282(&Global_2543149, Local_168.f_103.f_3, Local_168.f_103.f_1, &sVar30, &cVar34);
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar34) && HUD::DOES_TEXT_LABEL_EXIST(&cVar34))
							{
								GlobalFunc_1353(&cVar34, 0, 0);
								bVar29 = true;
							}
						}
					}
					if (!MISC::IS_BIT_SET(Local_168.f_645, 0))
					{
						iVar40 = 0;
						iVar41 = 0;
						fVar42 = (1f - func_94(Var0, &iVar40, &iVar41));
						if (fVar42 != 0f)
						{
							GlobalFunc_2588("GSHOP_DISC", 0, 0);
							func_298(SYSTEM::ROUND((fVar42 * 100f)));
						}
					}
				}
			}
			else if (Local_168.f_103.f_5 == 1)
			{
				if (bLocal_1203)
				{
					if (iLocal_1204 == 0)
					{
						GlobalFunc_1353("GS_PARA_M0", 0, 0);
						bVar29 = true;
					}
					else if (iLocal_1204 == 1)
					{
						GlobalFunc_1353("GS_PARA_M1", 0, 0);
						bVar29 = true;
					}
					else if (iLocal_1204 == 2)
					{
						GlobalFunc_1353("GS_PARA_M2", 0, 0);
						bVar29 = true;
					}
					else if (iLocal_1204 == 3)
					{
						GlobalFunc_1353("GS_PARA_M3", 0, 0);
						bVar29 = true;
					}
				}
				else if (MISC::IS_BIT_SET(Local_168.f_645, 10))
				{
					if (func_164(&Local_1216, Var0, (Local_168.f_103.f_2 - 1), 0))
					{
						if (!MISC::IS_BIT_SET(Local_168.f_645, 8))
						{
							if (Global_68245)
							{
								GlobalFunc_1353("GS_STOCK2", 0, 0);
								GlobalFunc_1344(func_281(Local_1216.f_4, Var0));
								bVar29 = true;
							}
							else
							{
								GlobalFunc_1353("GS_STOCK", 0, 0);
								bVar29 = true;
							}
						}
						else
						{
							func_279(Var0, (Local_168.f_103.f_2 - 1), &sVar30, &cVar34);
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar34) && HUD::DOES_TEXT_LABEL_EXIST(&cVar34))
							{
								GlobalFunc_1353(&cVar34, 0, 0);
								bVar29 = true;
							}
							bVar43 = false;
							if (func_269(Local_1216, Var0, &bVar43) || Local_1216.f_1)
							{
								if (bVar43)
								{
									GlobalFunc_1353("GSM_OWN_EQUIP", 0, 0);
									bVar29 = true;
								}
								else
								{
									GlobalFunc_1353("GSM_TICK", 0, 0);
									bVar29 = true;
								}
							}
							else
							{
								fVar46 = (1f - func_94(Var0, &iVar44, &iVar45));
								if (fVar46 != 0f)
								{
									GlobalFunc_2588("GSHOP_DISC", 0, 0);
									func_298(SYSTEM::ROUND((fVar46 * 100f)));
								}
							}
						}
					}
				}
				else if (MISC::IS_BIT_SET(Local_168.f_645, 11))
				{
					if (func_305(&Local_1222, Var0, func_307(Var0, (Local_168.f_103.f_2 - 21)), 0))
					{
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							if (!func_263(Var0, Local_1222.f_9, Local_1222.f_10))
							{
								if (func_262(Var0, Local_1222.f_9, &cVar34, &iVar47, &bVar48))
								{
									if (MISC::GET_HASH_KEY(&cVar34) == MISC::GET_HASH_KEY("GSM_TINT_CASH"))
									{
										if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
										{
											StringConCat(&cVar34, "1", 16);
										}
										else if ((MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION()) || MISC::IS_PC_VERSION())
										{
											StringConCat(&cVar34, "2", 16);
										}
									}
									else if (MISC::GET_HASH_KEY(&cVar34) == MISC::GET_HASH_KEY("GSM_TINT_KILL"))
									{
										iVar47 = (iVar47 - func_261(Var0));
									}
									GlobalFunc_1353(&cVar34, 0, 0);
									if (iVar47 != -1)
									{
										GlobalFunc_1344(iVar47);
									}
									if (bVar48)
									{
										func_282(&Global_2543149, Local_168.f_103.f_3, Local_168.f_103.f_1, &sVar30, &cVar34);
										GlobalFunc_1330(func_260(Var0));
									}
									bVar29 = true;
									if (Var0 == joaat("gadget_parachute"))
									{
										iVar49 = func_259(Var0, Local_1222.f_9, Local_1222.f_10);
										if (iVar49 != 0)
										{
											GlobalFunc_1353("GS_STOCK2", 0, 0);
											GlobalFunc_1344(GlobalFunc_4198(iVar49));
											bVar29 = true;
										}
									}
								}
								if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
								{
									if ((Var0 == joaat("gadget_parachute") && Local_1222.f_10 == 4) && Local_1222.f_9 == 6)
									{
										if (!GlobalFunc_5449())
										{
											GlobalFunc_1353("GSM_LOCK_CREW", 0, 0);
											bVar29 = true;
										}
										else if (!GlobalFunc_8858(6))
										{
											if (GlobalFunc_1974(PLAYER::PLAYER_ID()))
											{
												GlobalFunc_1353("GSM_LOCK_RNK", 0, 0);
											}
											else
											{
												GlobalFunc_1353("GSM_LOCK_RNKT", 0, 0);
											}
											bVar29 = true;
										}
									}
								}
							}
							else
							{
								bVar50 = false;
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_1222.f_4)) && HUD::DOES_TEXT_LABEL_EXIST(&(Local_1222.f_4)))
								{
									GlobalFunc_1353(&(Local_1222.f_4), 0, 0);
									bVar29 = true;
									bVar50 = true;
								}
								bVar51 = false;
								if (Local_1222.f_10 != 5)
								{
									iVar52 = iLocal_1026;
									if (Local_1222.f_10 == 1)
									{
										iVar52 = iLocal_1029;
									}
									else if (Local_1222.f_10 == 4)
									{
										iVar52 = iLocal_1028;
									}
									else if (Local_1222.f_10 == 2)
									{
										iVar52 = iLocal_1026;
									}
									else if (Local_1222.f_10 == 3)
									{
										iVar52 = iLocal_1027;
									}
									if (func_241(Var0, Local_1222.f_9, Local_1222.f_10, iVar52, &bVar51))
									{
										if (bVar51)
										{
											GlobalFunc_1353("GSM_OWN_EQUIP", 0, 0);
											bVar29 = true;
											bVar50 = false;
										}
										else
										{
											GlobalFunc_1353("GSM_TICK", 0, 0);
											bVar29 = true;
											bVar50 = false;
										}
									}
								}
								if (bVar50)
								{
									uVar53 = Local_1222.f_8;
									fVar54 = (1f - func_238(Var0, &uVar53));
									if (fVar54 != 0f)
									{
										GlobalFunc_2588("GSHOP_DISC", 0, 0);
										func_298(SYSTEM::ROUND((fVar54 * 100f)));
									}
								}
							}
						}
						else
						{
							bVar55 = false;
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_1222.f_4)) && HUD::DOES_TEXT_LABEL_EXIST(&(Local_1222.f_4)))
							{
								GlobalFunc_1353(&(Local_1222.f_4), 0, 0);
								bVar29 = true;
								bVar55 = true;
							}
							bVar56 = false;
							if (Local_1222.f_10 != 5)
							{
								iVar57 = iLocal_1026;
								if (Local_1222.f_10 == 1)
								{
									iVar57 = iLocal_1029;
								}
								else if (Local_1222.f_10 == 4)
								{
									iVar57 = iLocal_1028;
								}
								else if (Local_1222.f_10 == 2)
								{
									iVar57 = iLocal_1026;
								}
								else if (Local_1222.f_10 == 3)
								{
									iVar57 = iLocal_1027;
								}
								if (func_241(Var0, Local_1222.f_9, Local_1222.f_10, iVar57, &bVar56))
								{
									if (bVar56)
									{
										GlobalFunc_1353("GSM_OWN_EQUIP", 0, 0);
										bVar29 = true;
										bVar55 = false;
									}
									else
									{
										GlobalFunc_1353("GSM_TICK", 0, 0);
										bVar29 = true;
										bVar55 = false;
									}
								}
							}
							if (bVar55)
							{
								uVar58 = Local_1222.f_8;
								fVar59 = (1f - func_238(Var0, &uVar58));
								if (fVar59 != 0f)
								{
									GlobalFunc_2588("GSHOP_DISC", 0, 0);
									func_298(SYSTEM::ROUND((fVar59 * 100f)));
								}
							}
						}
					}
				}
			}
		}
		if (!bVar29)
		{
			GlobalFunc_1353("", 0, 0);
		}
	}
	if (iLocal_1057)
	{
		if (iLocal_1056 == 0)
		{
			iLocal_1056++;
		}
		else if (iLocal_1056 == 1)
		{
			bVar60 = false;
			bVar61 = false;
			bVar62 = false;
			bVar63 = false;
			if (func_237())
			{
				if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
				{
					if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
					{
						iVar64 = 2;
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("GLOBAL_ALERT_DEFAULT", "STORE_UNAVAIL", iVar64, 0, 0, -1, 0, 0, 1);
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
						{
							bVar61 = true;
						}
					}
					else if (!NETWORK::_0x59328EB08C5CEB2B())
					{
						iVar65 = 2;
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("GLOBAL_ALERT_DEFAULT", "HUD_PERM", iVar65, 0, 0, -1, 0, 0, 1);
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
						{
							bVar61 = true;
						}
					}
					else if (!NETWORK::IS_STORE_AVAILABLE_TO_USER())
					{
						iVar66 = 2;
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("GLOBAL_ALERT_DEFAULT", "STORE_UNAVAIL", iVar66, 0, 0, -1, 0, 0, 1);
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
						{
							bVar61 = true;
						}
					}
					else
					{
						bVar60 = true;
					}
				}
				else
				{
					bVar62 = true;
				}
			}
			else
			{
				bVar63 = true;
			}
			if (bVar63)
			{
				iLocal_1056 = 0;
				iLocal_1057 = 0;
				iLocal_1077 = 1;
			}
			else if (bVar62)
			{
				iLocal_1056 = 3;
			}
			else if (bVar60)
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					Global_2436017 = 1;
					Global_2436018 = 1;
				}
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV", "HUD_AMMO_SHOP_SOUNDSET", 1);
				NETWORK::_0xFAE628F1E9ADB239(MISC::GET_HASH_KEY(&(Global_90014.f_1259)), Global_90014.f_1263, MISC::GET_HASH_KEY(GlobalFunc_1988(Local_168)));
				NETWORK::OPEN_COMMERCE_STORE(&cLocal_1058, "", 3);
				iLocal_133 = 1;
				iLocal_1056++;
			}
			else if (bVar61)
			{
				iLocal_1056++;
			}
		}
		else if (iLocal_1056 == 2)
		{
			if (!NETWORK::IS_COMMERCE_STORE_OPEN())
			{
				iLocal_1056 = 0;
				iLocal_1057 = 0;
			}
		}
		else if (iLocal_1056 == 3)
		{
			if (GlobalFunc_7112(&uLocal_1055, 1))
			{
				if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						Global_2436017 = 1;
						Global_2436018 = 1;
					}
					if (NETWORK::IS_STORE_AVAILABLE_TO_USER())
					{
						NETWORK::_0xFAE628F1E9ADB239(MISC::GET_HASH_KEY(&(Global_90014.f_1259)), Global_90014.f_1263, MISC::GET_HASH_KEY(GlobalFunc_1988(Local_168)));
						NETWORK::OPEN_COMMERCE_STORE(&cLocal_1058, "", 3);
						iLocal_133 = 1;
					}
				}
				iLocal_1056 = 2;
			}
		}
	}
	else if (bLocal_1053)
	{
	}
	else if (((bLocal_1076 && !func_237()) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || iLocal_1077)
	{
		iLocal_1077 = 1;
		iVar67 = 2;
		HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "STORE_CON_ONL", iVar67, 0, 0, -1, 0, 0, 1);
		if (PAD::IS_CONTROL_PRESSED(2, 201))
		{
			bLocal_1076 = func_237();
			iLocal_1077 = 0;
		}
	}
	else if (((bLocal_1074 && !NETWORK::NETWORK_IS_SIGNED_ONLINE()) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || iLocal_1075)
	{
		iLocal_1075 = 1;
		iVar68 = 2;
		HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "STORE_SGN_ONL2", iVar68, 0, 0, -1, 0, 0, 1);
		if (PAD::IS_CONTROL_PRESSED(2, 201))
		{
			bLocal_1074 = NETWORK::NETWORK_IS_SIGNED_ONLINE();
			iLocal_1075 = 0;
		}
	}
	else
	{
		GlobalFunc_8511(1, Local_168, SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("lamar1")) == 0, 0, 1, -1082130432, 0, 0);
		if (GlobalFunc_4997(0, 0))
		{
			if (func_84(Local_168, &Global_2543149, &Var0, Local_168.f_103.f_3, Local_168.f_103.f_1, 0))
			{
				if ((Var0.f_24 == 0 || Var0.f_24 == 2) || Var0.f_24 == 5)
				{
					if (Local_168.f_103.f_5 == 1)
					{
						while (func_164(&Local_1216, Var0, iVar97, 0))
						{
							if (WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(Local_168.f_218[(Local_168.f_103.f_3 * 6 + Local_168.f_103.f_1)], Local_1216))
							{
								if (WEAPON::GET_WEAPON_COMPONENT_HUD_STATS(Local_1216, &Var74))
								{
									if (iVar97 != (Local_168.f_103.f_2 - 1) || MISC::IS_BIT_SET(Local_168.f_645, 6))
									{
										iVar93 = (iVar93 + Var74);
										iVar94 = (iVar94 + Var74.f_1);
										iVar95 = (iVar95 + Var74.f_3);
										iVar96 = (iVar96 + Var74.f_4);
									}
								}
							}
							iVar97++;
						}
					}
					if (WEAPON::GET_WEAPON_HUD_STATS(Var0, &Var69))
					{
						Var74 = 0;
						Var74.f_1 = 0;
						Var74.f_3 = 0;
						Var74.f_4 = 0;
						if (Local_168.f_103.f_5 == 1)
						{
							if (func_164(&Local_1216, Var0, (Local_168.f_103.f_2 - 1), 0))
							{
								if (!MISC::IS_BIT_SET(Local_168.f_645, 6))
								{
									WEAPON::GET_WEAPON_COMPONENT_HUD_STATS(Local_1216, &Var74);
								}
							}
						}
						fVar98 = ((GlobalFunc_2480() - GRAPHICS::GET_SAFE_ZONE_SIZE()) + (0.00138888f * 76f));
						fVar99 = (125f - 8f);
						GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
						GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
						HUD::GET_HUD_COLOUR(140, &iVar79, &iVar80, &iVar81, &iVar82);
						GlobalFunc_1327(0f, fVar98, Global_17235, (0.00138888f * 108f), iVar79, iVar80, iVar81, iVar82);
						fVar83 = 0.0046875f;
						fVar84 = ((0.00138888f * 108f) + (0.00138888f * 42f));
						fVar85 = fVar98;
						GlobalFunc_5345(0, 1, 0, 0, 0, 0);
						HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PM_DAMAGE");
						HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar83, (fVar84 + fVar85), 0);
						fVar85 = (fVar85 + 0.034722f);
						GlobalFunc_5345(0, 1, 0, 0, 0, 0);
						HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PM_FIRERATE");
						HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar83, (fVar84 + fVar85), 0);
						fVar85 = (fVar85 + 0.034722f);
						GlobalFunc_5345(0, 1, 0, 0, 0, 0);
						HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PM_ACCURACY");
						HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar83, (fVar84 + fVar85), 0);
						fVar85 = (fVar85 + 0.034722f);
						GlobalFunc_5345(0, 1, 0, 0, 0, 0);
						HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PM_RANGE");
						HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar83, (fVar84 + fVar85), 0);
						fVar85 = (fVar85 + 0.034722f);
						HUD::GET_HUD_COLOUR(1, &iVar79, &iVar80, &iVar81, &iVar82);
						iVar82 = 76;
						fVar86 = (0.00138888f * -89f);
						fVar87 = fVar98;
						GlobalFunc_5791((Global_17235 - (0.00078125f * 150f)), (fVar86 + fVar87), (0.00078125f * fVar99), (0.00138888f * 6f), iVar79, iVar80, iVar81, iVar82);
						fVar87 = (fVar87 + 0.034722f);
						GlobalFunc_5791((Global_17235 - (0.00078125f * 150f)), (fVar86 + fVar87), (0.00078125f * fVar99), (0.00138888f * 6f), iVar79, iVar80, iVar81, iVar82);
						fVar87 = (fVar87 + 0.034722f);
						GlobalFunc_5791((Global_17235 - (0.00078125f * 150f)), (fVar86 + fVar87), (0.00078125f * fVar99), (0.00138888f * 6f), iVar79, iVar80, iVar81, iVar82);
						fVar87 = (fVar87 + 0.034722f);
						GlobalFunc_5791((Global_17235 - (0.00078125f * 150f)), (fVar86 + fVar87), (0.00078125f * fVar99), (0.00138888f * 6f), iVar79, iVar80, iVar81, iVar82);
						fVar87 = (fVar87 + 0.034722f);
						fVar86 = (0.00138888f * -89f);
						fVar87 = fVar98;
						fVar88[0] = (0.00078125f * ((fVar99 / 100f) * SYSTEM::TO_FLOAT(Var69)));
						fVar88[0] = (fVar88[0] + (fVar88[0] * (SYSTEM::TO_FLOAT(iVar93) / 100f)));
						if (Local_168.f_103.f_5 == 1)
						{
							if (Var74 >= 0)
							{
								HUD::GET_HUD_COLOUR(9, &iVar79, &iVar80, &iVar81, &iVar82);
								GlobalFunc_5791((Global_17235 - (0.00078125f * 150f)), (fVar86 + fVar87), (fVar88[0] + (fVar88[0] * (SYSTEM::TO_FLOAT(Var74) / 100f))), (0.00138888f * 6f), iVar79, iVar80, iVar81, 255);
							}
							else
							{
								HUD::GET_HUD_COLOUR(6, &iVar79, &iVar80, &iVar81, &iVar82);
								GlobalFunc_5791((Global_17235 - (0.00078125f * 150f)), (fVar86 + fVar87), fVar88[0], (0.00138888f * 6f), iVar79, iVar80, iVar81, 255);
								fVar88[0] = (fVar88[0] + (fVar88[0] * (SYSTEM::TO_FLOAT(Var74) / 100f)));
							}
						}
						HUD::GET_HUD_COLOUR(1, &iVar79, &iVar80, &iVar81, &iVar82);
						GlobalFunc_5791((Global_17235 - (0.00078125f * 150f)), (fVar86 + fVar87), fVar88[0], (0.00138888f * 6f), iVar79, iVar80, iVar81, 255);
						fVar87 = (fVar87 + 0.034722f);
						fVar88[1] = (0.00078125f * ((fVar99 / 100f) * SYSTEM::TO_FLOAT(Var69.f_1)));
						fVar88[1] = (fVar88[1] + (fVar88[1] * (SYSTEM::TO_FLOAT(iVar94) / 100f)));
						if (Local_168.f_103.f_5 == 1)
						{
							if (Var74.f_1 >= 0)
							{
								HUD::GET_HUD_COLOUR(9, &iVar79, &iVar80, &iVar81, &iVar82);
								GlobalFunc_5791((Global_17235 - (0.00078125f * 150f)), (fVar86 + fVar87), (fVar88[1] + (fVar88[1] * (SYSTEM::TO_FLOAT(Var74.f_1) / 100f))), (0.00138888f * 6f), iVar79, iVar80, iVar81, 255);
							}
							else
							{
								HUD::GET_HUD_COLOUR(6, &iVar79, &iVar80, &iVar81, &iVar82);
								GlobalFunc_5791((Global_17235 - (0.00078125f * 150f)), (fVar86 + fVar87), fVar88[1], (0.00138888f * 6f), iVar79, iVar80, iVar81, 255);
								fVar88[1] = (fVar88[1] + (fVar88[1] * (SYSTEM::TO_FLOAT(Var74.f_1) / 100f)));
							}
						}
						HUD::GET_HUD_COLOUR(1, &iVar79, &iVar80, &iVar81, &iVar82);
						GlobalFunc_5791((Global_17235 - (0.00078125f * 150f)), (fVar86 + fVar87), fVar88[1], (0.00138888f * 6f), iVar79, iVar80, iVar81, 255);
						fVar87 = (fVar87 + 0.034722f);
						fVar88[2] = (0.00078125f * ((fVar99 / 100f) * SYSTEM::TO_FLOAT(Var69.f_3)));
						fVar88[2] = (fVar88[2] + (fVar88[2] * (SYSTEM::TO_FLOAT(iVar95) / 100f)));
						if (Local_168.f_103.f_5 == 1)
						{
							if (Var74.f_3 >= 0)
							{
								HUD::GET_HUD_COLOUR(9, &iVar79, &iVar80, &iVar81, &iVar82);
								GlobalFunc_5791((Global_17235 - (0.00078125f * 150f)), (fVar86 + fVar87), (fVar88[2] + (fVar88[2] * (SYSTEM::TO_FLOAT(Var74.f_3) / 100f))), (0.00138888f * 6f), iVar79, iVar80, iVar81, 255);
							}
							else
							{
								HUD::GET_HUD_COLOUR(6, &iVar79, &iVar80, &iVar81, &iVar82);
								GlobalFunc_5791((Global_17235 - (0.00078125f * 150f)), (fVar86 + fVar87), fVar88[2], (0.00138888f * 6f), iVar79, iVar80, iVar81, 255);
								fVar88[2] = (fVar88[2] + (fVar88[2] * (SYSTEM::TO_FLOAT(Var74.f_3) / 100f)));
							}
						}
						HUD::GET_HUD_COLOUR(1, &iVar79, &iVar80, &iVar81, &iVar82);
						GlobalFunc_5791((Global_17235 - (0.00078125f * 150f)), (fVar86 + fVar87), fVar88[2], (0.00138888f * 6f), iVar79, iVar80, iVar81, 255);
						fVar87 = (fVar87 + 0.034722f);
						fVar88[3] = (0.00078125f * ((fVar99 / 100f) * SYSTEM::TO_FLOAT(Var69.f_4)));
						fVar88[3] = (fVar88[3] + (fVar88[3] * (SYSTEM::TO_FLOAT(iVar96) / 100f)));
						if (Local_168.f_103.f_5 == 1)
						{
							if (Var74.f_4 >= 0)
							{
								HUD::GET_HUD_COLOUR(9, &iVar79, &iVar80, &iVar81, &iVar82);
								GlobalFunc_5791((Global_17235 - (0.00078125f * 150f)), (fVar86 + fVar87), (fVar88[3] + (fVar88[3] * (SYSTEM::TO_FLOAT(Var74.f_4) / 100f))), (0.00138888f * 6f), iVar79, iVar80, iVar81, 255);
							}
							else
							{
								HUD::GET_HUD_COLOUR(6, &iVar79, &iVar80, &iVar81, &iVar82);
								GlobalFunc_5791((Global_17235 - (0.00078125f * 150f)), (fVar86 + fVar87), fVar88[3], (0.00138888f * 6f), iVar79, iVar80, iVar81, 255);
								fVar88[3] = (fVar88[3] + (fVar88[3] * (SYSTEM::TO_FLOAT(Var74.f_4) / 100f)));
							}
						}
						HUD::GET_HUD_COLOUR(1, &iVar79, &iVar80, &iVar81, &iVar82);
						GlobalFunc_5791((Global_17235 - (0.00078125f * 150f)), (fVar86 + fVar87), fVar88[3], (0.00138888f * 6f), iVar79, iVar80, iVar81, 255);
						fVar87 = (fVar87 + 0.034722f);
						GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
					}
				}
			}
		}
	}
}












































bool func_237()//Position - 0x18E43
{
	return NETWORK::NETWORK_IS_CABLE_CONNECTED();
}

float func_238(int iParam0, var uParam1)//Position - 0x18E4F
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = 0f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GlobalFunc_4979())
	{
		return 1f;
	}
	if (GlobalFunc_82() || GlobalFunc_82())
	{
		if ((((((iParam0 == -572349828 || iParam0 == 392730790) || iParam0 == -947031628) || iParam0 == -572349828) || iParam0 == -1887867191) || iParam0 == -837150131) || iParam0 == -344484024)
		{
			*uParam1 = 0;
		}
	}
	if (!Global_68245)
	{
		iVar2 = func_144(iParam0);
		if (iVar2 == 3)
		{
			fVar1 = (fVar1 + 0.1f);
		}
		else if (iVar2 == 2)
		{
			fVar1 = (fVar1 + 0.15f);
		}
		else if (iVar2 == 1)
		{
			fVar1 = (fVar1 + 0.25f);
		}
	}
	if (iLocal_49 == 1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			fVar1 = (fVar1 + (SYSTEM::TO_FLOAT(Global_262145.f_104) / 100f));
		}
	}
	if (iLocal_49 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (func_95())
			{
				fVar1 = (fVar1 + (SYSTEM::TO_FLOAT(Global_262145.f_104) / 100f));
				iLocal_49 = 1;
			}
			else
			{
				iLocal_49 = -1;
			}
		}
	}
	fVar1 = (fVar1 + 0.2f);
	fVar0 = (1f - fVar1);
	*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * fVar0));
	return fVar0;
}



int func_241(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x18FB4
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (Global_68245)
	{
		iVar1 = func_259(iParam0, iParam1, iParam2);
		if (iVar1 != 0)
		{
			if (GlobalFunc_8847(iVar1, -1))
			{
				iVar0 = 1;
			}
		}
		else
		{
			iVar0 = 1;
		}
	}
	else
	{
		iVar1 = func_259(iParam0, iParam1, iParam2);
		if (iVar1 != 0)
		{
			if (func_242(GlobalFunc_8354(), iVar1))
			{
				iVar0 = 1;
			}
		}
		else
		{
			iVar0 = 1;
		}
	}
	*iParam4 = iParam1 == iParam3;
	return iVar0;
}

int func_242(int iParam0, int iParam1)//Position - 0x19020
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (GlobalFunc_42(iParam0))
	{
		uVar0 = func_246(iParam0, iParam1);
		iVar1 = GlobalFunc_5556(iParam1);
		iVar2 = GlobalFunc_299(iVar1);
		return MISC::IS_BIT_SET(uVar0, iVar2);
	}
	return 0;
}




var func_246(int iParam0, int iParam1)//Position - 0x1A5AE
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = GlobalFunc_5556(iParam1);
	iVar2 = GlobalFunc_300(iVar1);
	switch (iVar2)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_0"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_0"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_0"), &uVar0, -1);
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_1"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_1"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_1"), &uVar0, -1);
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_2"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_2"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_2"), &uVar0, -1);
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_3"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_3"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_3"), &uVar0, -1);
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_4"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_4"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_4"), &uVar0, -1);
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_5"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_5"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_5"), &uVar0, -1);
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_6"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_6"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_6"), &uVar0, -1);
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_7"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_7"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_7"), &uVar0, -1);
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_8"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_8"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_8"), &uVar0, -1);
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_9"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_9"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_9"), &uVar0, -1);
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_10"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_10"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_10"), &uVar0, -1);
					break;
			}
			break;
		
		case 11:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_11"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_11"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_11"), &uVar0, -1);
					break;
			}
			break;
		
		case 12:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_12"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_12"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_12"), &uVar0, -1);
					break;
			}
			break;
		
		default:
			break;
	}
	return uVar0;
}













int func_259(int iParam0, int iParam1, int iParam2)//Position - 0x1AC5A
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 76;
					break;
				
				case 2:
					return 16;
					break;
				
				case 3:
					return 136;
					break;
				
				case 4:
					return 56;
					break;
				
				case 5:
					return 116;
					break;
				
				case 6:
					return 96;
					break;
				
				case 7:
					return 36;
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 77;
					break;
				
				case 2:
					return 17;
					break;
				
				case 3:
					return 137;
					break;
				
				case 4:
					return 57;
					break;
				
				case 5:
					return 117;
					break;
				
				case 6:
					return 97;
					break;
				
				case 7:
					return 37;
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 78;
					break;
				
				case 2:
					return 18;
					break;
				
				case 3:
					return 138;
					break;
				
				case 4:
					return 58;
					break;
				
				case 5:
					return 118;
					break;
				
				case 6:
					return 98;
					break;
				
				case 7:
					return 38;
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 79;
					break;
				
				case 2:
					return 19;
					break;
				
				case 3:
					return 139;
					break;
				
				case 4:
					return 59;
					break;
				
				case 5:
					return 119;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 39;
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 80;
					break;
				
				case 2:
					return 20;
					break;
				
				case 3:
					return 140;
					break;
				
				case 4:
					return 60;
					break;
				
				case 5:
					return 120;
					break;
				
				case 6:
					return 100;
					break;
				
				case 7:
					return 40;
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 81;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 141;
					break;
				
				case 4:
					return 61;
					break;
				
				case 5:
					return 121;
					break;
				
				case 6:
					return 101;
					break;
				
				case 7:
					return 41;
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 82;
					break;
				
				case 2:
					return 22;
					break;
				
				case 3:
					return 142;
					break;
				
				case 4:
					return 62;
					break;
				
				case 5:
					return 122;
					break;
				
				case 6:
					return 102;
					break;
				
				case 7:
					return 42;
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 208;
					break;
				
				case 2:
					return 202;
					break;
				
				case 3:
					return 203;
					break;
				
				case 4:
					return 204;
					break;
				
				case 5:
					return 205;
					break;
				
				case 6:
					return 206;
					break;
				
				case 7:
					return 207;
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 215;
					break;
				
				case 2:
					return 209;
					break;
				
				case 3:
					return 210;
					break;
				
				case 4:
					return 211;
					break;
				
				case 5:
					return 212;
					break;
				
				case 6:
					return 213;
					break;
				
				case 7:
					return 214;
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 83;
					break;
				
				case 2:
					return 23;
					break;
				
				case 3:
					return 143;
					break;
				
				case 4:
					return 63;
					break;
				
				case 5:
					return 123;
					break;
				
				case 6:
					return 103;
					break;
				
				case 7:
					return 43;
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 84;
					break;
				
				case 2:
					return 24;
					break;
				
				case 3:
					return 144;
					break;
				
				case 4:
					return 64;
					break;
				
				case 5:
					return 124;
					break;
				
				case 6:
					return 104;
					break;
				
				case 7:
					return 44;
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 85;
					break;
				
				case 2:
					return 25;
					break;
				
				case 3:
					return 145;
					break;
				
				case 4:
					return 65;
					break;
				
				case 5:
					return 125;
					break;
				
				case 6:
					return 105;
					break;
				
				case 7:
					return 45;
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 87;
					break;
				
				case 2:
					return 27;
					break;
				
				case 3:
					return 147;
					break;
				
				case 4:
					return 67;
					break;
				
				case 5:
					return 127;
					break;
				
				case 6:
					return 107;
					break;
				
				case 7:
					return 47;
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 86;
					break;
				
				case 2:
					return 26;
					break;
				
				case 3:
					return 146;
					break;
				
				case 4:
					return 66;
					break;
				
				case 5:
					return 126;
					break;
				
				case 6:
					return 106;
					break;
				
				case 7:
					return 46;
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 28;
					break;
				
				case 3:
					return 148;
					break;
				
				case 4:
					return 68;
					break;
				
				case 5:
					return 128;
					break;
				
				case 6:
					return 108;
					break;
				
				case 7:
					return 48;
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 91;
					break;
				
				case 2:
					return 31;
					break;
				
				case 3:
					return 151;
					break;
				
				case 4:
					return 71;
					break;
				
				case 5:
					return 131;
					break;
				
				case 6:
					return 111;
					break;
				
				case 7:
					return 51;
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 92;
					break;
				
				case 2:
					return 32;
					break;
				
				case 3:
					return 152;
					break;
				
				case 4:
					return 72;
					break;
				
				case 5:
					return 132;
					break;
				
				case 6:
					return 112;
					break;
				
				case 7:
					return 52;
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 93;
					break;
				
				case 2:
					return 33;
					break;
				
				case 3:
					return 153;
					break;
				
				case 4:
					return 73;
					break;
				
				case 5:
					return 133;
					break;
				
				case 6:
					return 113;
					break;
				
				case 7:
					return 53;
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 95;
					break;
				
				case 2:
					return 35;
					break;
				
				case 3:
					return 155;
					break;
				
				case 4:
					return 75;
					break;
				
				case 5:
					return 135;
					break;
				
				case 6:
					return 115;
					break;
				
				case 7:
					return 55;
					break;
			}
			break;
		
		case joaat("weapon_rpg"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 94;
					break;
				
				case 2:
					return 34;
					break;
				
				case 3:
					return 154;
					break;
				
				case 4:
					return 74;
					break;
				
				case 5:
					return 134;
					break;
				
				case 6:
					return 114;
					break;
				
				case 7:
					return 54;
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 194;
					break;
				
				case 2:
					return 173;
					break;
				
				case 3:
					return 174;
					break;
				
				case 4:
					return 175;
					break;
				
				case 5:
					return 176;
					break;
				
				case 6:
					return 177;
					break;
				
				case 7:
					return 178;
					break;
			}
			break;
		
		case -572349828:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 193;
					break;
				
				case 2:
					return 179;
					break;
				
				case 3:
					return 180;
					break;
				
				case 4:
					return 181;
					break;
				
				case 5:
					return 182;
					break;
				
				case 6:
					return 183;
					break;
				
				case 7:
					return 184;
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 192;
					break;
				
				case 2:
					return 161;
					break;
				
				case 3:
					return 162;
					break;
				
				case 4:
					return 163;
					break;
				
				case 5:
					return 164;
					break;
				
				case 6:
					return 165;
					break;
				
				case 7:
					return 166;
					break;
			}
			break;
		
		case -947031628:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 191;
					break;
				
				case 2:
					return 185;
					break;
				
				case 3:
					return 186;
					break;
				
				case 4:
					return 187;
					break;
				
				case 5:
					return 188;
					break;
				
				case 6:
					return 189;
					break;
				
				case 7:
					return 190;
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 201;
					break;
				
				case 2:
					return 195;
					break;
				
				case 3:
					return 196;
					break;
				
				case 4:
					return 197;
					break;
				
				case 5:
					return 198;
					break;
				
				case 6:
					return 199;
					break;
				
				case 7:
					return 200;
					break;
			}
			break;
		
		case joaat("weapon_heavypistol"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 230;
					break;
				
				case 2:
					return 224;
					break;
				
				case 3:
					return 225;
					break;
				
				case 4:
					return 226;
					break;
				
				case 5:
					return 227;
					break;
				
				case 6:
					return 228;
					break;
				
				case 7:
					return 229;
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 223;
					break;
				
				case 2:
					return 217;
					break;
				
				case 3:
					return 218;
					break;
				
				case 4:
					return 219;
					break;
				
				case 5:
					return 220;
					break;
				
				case 6:
					return 221;
					break;
				
				case 7:
					return 222;
					break;
			}
			break;
		
		case joaat("weapon_gusenberg"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 231;
					break;
				
				case 2:
					return 232;
					break;
				
				case 3:
					return 233;
					break;
				
				case 4:
					return 234;
					break;
				
				case 5:
					return 235;
					break;
				
				case 6:
					return 236;
					break;
				
				case 7:
					return 237;
					break;
			}
			break;
		
		case joaat("gadget_parachute"):
			if (iParam2 == 1)
			{
				switch (iParam1)
				{
					case 0:
						return 255;
						break;
					
					case 1:
						return 256;
						break;
					
					case 2:
						return 257;
						break;
					
					case 3:
						return 258;
						break;
					
					case 4:
						return 259;
						break;
					
					case 5:
						return 260;
						break;
					
					case 6:
						return 261;
						break;
					
					case 7:
						return 262;
						break;
					
					case 8:
						return 305;
						break;
					
					case 9:
						return 306;
						break;
					
					case 10:
						return 307;
						break;
					
					case 11:
						return 308;
						break;
					
					case 12:
						return 309;
						break;
					
					case 13:
						return 310;
						break;
					
					case 14:
						return 311;
						break;
					
					case 15:
						return 312;
						break;
					
					case 16:
						return 313;
						break;
					
					case 17:
						return 314;
						break;
					
					case 18:
						return 315;
						break;
					
					case 19:
						return 316;
						break;
					
					case 20:
						return 317;
						break;
					
					case 21:
						return 318;
						break;
					
					case 22:
						return 319;
						break;
					
					case 23:
						return 320;
						break;
					
					case 24:
						return 321;
						break;
					
					case 25:
						return 322;
						break;
					
					case 26:
						return 323;
						break;
					
					case 27:
						return 345;
						break;
					
					case 28:
						return 346;
						break;
					
					case 29:
						return 347;
						break;
					
					case 30:
						return 348;
						break;
					
					case 31:
						return 349;
						break;
					
					case 32:
						return 350;
						break;
					
					case 33:
						return 351;
						break;
					
					case 34:
						return 352;
						break;
					
					case 35:
						return 353;
						break;
					
					case 36:
						return 354;
						break;
					
					case 37:
						return 355;
						break;
					
					case 38:
						return 356;
						break;
					
					case 39:
						return 357;
						break;
					
					case 40:
						return 358;
						break;
					
					case 41:
						return 359;
						break;
					
					case 42:
						return 360;
						break;
					
					case 43:
						return 361;
						break;
					
					case 44:
						return 362;
						break;
					
					case 45:
						return 363;
						break;
					
					case 46:
						return 364;
						break;
					
					case 47:
						return 372;
						break;
					
					case 48:
						return 373;
						break;
					
					case 49:
						return 374;
						break;
					
					case 50:
						return 375;
						break;
					
					case 51:
						return 376;
						break;
				}
			}
			else if (iParam2 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return 8;
						break;
					
					case 1:
						return 9;
						break;
					
					case 2:
						return 10;
						break;
					
					case 3:
						return 11;
						break;
					
					case 4:
						return 12;
						break;
					
					case 5:
						return 13;
						break;
					
					case 6:
						return 14;
						break;
					
					case 7:
						return 15;
						break;
					
					case 8:
						return 263;
						break;
					
					case 9:
						return 264;
						break;
					
					case 10:
						return 265;
						break;
					
					case 11:
						return 302;
						break;
					
					case 12:
						return 303;
						break;
					
					case 13:
						return 304;
						break;
				}
			}
			else if (iParam2 == 3)
			{
				switch (iParam1)
				{
					case 0:
						return 288;
						break;
					
					case 1:
						return 289;
						break;
					
					case 2:
						return 290;
						break;
					
					case 3:
						return 291;
						break;
					
					case 4:
						return 292;
						break;
					
					case 5:
						return 293;
						break;
					
					case 6:
						return 294;
						break;
					
					case 7:
						return 295;
						break;
					
					case 8:
						return 296;
						break;
					
					case 9:
						return 297;
						break;
					
					case 10:
						return 298;
						break;
					
					case 11:
						return 299;
						break;
					
					case 12:
						return 300;
						break;
					
					case 13:
						return 301;
						break;
				}
			}
			else if (iParam2 == 4)
			{
				switch (iParam1)
				{
					case 0:
						break;
					
					case 1:
						return 2;
						break;
					
					case 2:
						return 3;
						break;
					
					case 3:
						return 4;
						break;
					
					case 4:
						return 7;
						break;
					
					case 5:
						return 6;
						break;
					
					case 6:
						return 216;
						break;
					
					case 7:
						return 287;
						break;
					}
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 254;
					break;
				
				case 2:
					return 248;
					break;
				
				case 3:
					return 249;
					break;
				
				case 4:
					return 250;
					break;
				
				case 5:
					return 251;
					break;
				
				case 6:
					return 252;
					break;
				
				case 7:
					return 253;
					break;
			}
			break;
		
		case joaat("weapon_musket"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 266;
					break;
				
				case 2:
					return 267;
					break;
				
				case 3:
					return 268;
					break;
				
				case 4:
					return 269;
					break;
				
				case 5:
					return 270;
					break;
				
				case 6:
					return 271;
					break;
				
				case 7:
					return 272;
					break;
			}
			break;
		
		case joaat("weapon_firework"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 273;
					break;
				
				case 2:
					return 274;
					break;
				
				case 3:
					return 275;
					break;
				
				case 4:
					return 276;
					break;
				
				case 5:
					return 277;
					break;
				
				case 6:
					return 278;
					break;
				
				case 7:
					return 279;
					break;
			}
			break;
		
		case joaat("weapon_flaregun"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 280;
					break;
				
				case 2:
					return 281;
					break;
				
				case 3:
					return 282;
					break;
				
				case 4:
					return 283;
					break;
				
				case 5:
					return 284;
					break;
				
				case 6:
					return 285;
					break;
				
				case 7:
					return 286;
					break;
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 324;
					break;
				
				case 2:
					return 325;
					break;
				
				case 3:
					return 326;
					break;
				
				case 4:
					return 327;
					break;
				
				case 5:
					return 328;
					break;
				
				case 6:
					return 329;
					break;
				
				case 7:
					return 330;
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 331;
					break;
				
				case 2:
					return 332;
					break;
				
				case 3:
					return 333;
					break;
				
				case 4:
					return 334;
					break;
				
				case 5:
					return 335;
					break;
				
				case 6:
					return 336;
					break;
				
				case 7:
					return 337;
					break;
			}
			break;
		
		case joaat("weapon_hominglauncher"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 365;
					break;
				
				case 2:
					return 366;
					break;
				
				case 3:
					return 367;
					break;
				
				case 4:
					return 368;
					break;
				
				case 5:
					return 369;
					break;
				
				case 6:
					return 370;
					break;
				
				case 7:
					return 371;
					break;
			}
			break;
		
		case joaat("weapon_railgun"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 344;
					break;
				
				case 2:
					return 338;
					break;
				
				case 3:
					return 339;
					break;
				
				case 4:
					return 340;
					break;
				
				case 5:
					return 341;
					break;
				
				case 6:
					return 342;
					break;
				
				case 7:
					return 343;
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 377;
					break;
				
				case 2:
					return 378;
					break;
				
				case 3:
					return 379;
					break;
				
				case 4:
					return 380;
					break;
				
				case 5:
					return 381;
					break;
				
				case 6:
					return 382;
					break;
				
				case 7:
					return 383;
					break;
			}
			break;
	}
	return 0;
}

char* func_260(int iParam0)//Position - 0x1C3E2
{
	struct<24> Var0;
	
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return "WTT_PIST";
			break;
		
		case joaat("weapon_combatpistol"):
			return "WTT_PIST_CBT";
			break;
		
		case joaat("weapon_appistol"):
			return "WTT_PIST_AP";
			break;
		
		case joaat("weapon_smg"):
			return "WTT_SMG";
			break;
		
		case joaat("weapon_microsmg"):
			return "WTT_SMG_MCR";
			break;
		
		case joaat("weapon_assaultrifle"):
			return "WTT_RIFLE_ASL";
			break;
		
		case joaat("weapon_carbinerifle"):
			return "WTT_RIFLE_CBN";
			break;
		
		case joaat("weapon_advancedrifle"):
			return "WTT_RIFLE_ADV";
			break;
		
		case joaat("weapon_mg"):
			return "WTT_MG";
			break;
		
		case joaat("weapon_combatmg"):
			return "WTT_MG_CBT";
			break;
		
		case joaat("weapon_pumpshotgun"):
			return "WTT_SG_PMP";
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return "WTT_SG_SOF";
			break;
		
		case joaat("weapon_assaultshotgun"):
			return "WTT_SG_ASL";
			break;
		
		case joaat("weapon_heavysniper"):
			return "WTT_SNIP_HVY";
			break;
		
		case joaat("weapon_remotesniper"):
			return "WTT_SNIP_RMT";
			break;
		
		case joaat("weapon_sniperrifle"):
			return "WTT_SNIP_RIF";
			break;
		
		case joaat("weapon_grenadelauncher"):
			return "WTT_GL";
			break;
		
		case joaat("weapon_rpg"):
			return "WTT_RPG";
			break;
		
		case joaat("weapon_minigun"):
			return "WTT_MINIGUN";
			break;
		
		case joaat("weapon_assaultsmg"):
			return "WTT_SMG_ASL";
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return "WTT_SG_BLP";
			break;
		
		case joaat("weapon_pistol50"):
			return "WTT_PIST_50";
			break;
		
		case joaat("weapon_bottle"):
			return "WTT_BOTTLE";
			break;
		
		case joaat("weapon_gusenberg"):
			return "WTT_GUSENBERG";
			break;
		
		case joaat("weapon_snspistol"):
			return "WTT_SNSPISTOL";
			break;
		
		case joaat("weapon_vintagepistol"):
			return "WTT_VPISTOL";
			break;
		
		case joaat("weapon_dagger"):
			return "WTT_DAGGER";
			break;
		
		case joaat("weapon_flaregun"):
			return "WTT_FLAREGUN";
			break;
		
		case joaat("weapon_musket"):
			return "WTT_MUSKET";
			break;
		
		case joaat("weapon_firework"):
			return "WTT_FWRKLNCHR";
			break;
		
		case joaat("weapon_marksmanrifle"):
			return "WTT_HMKRIFLE";
			break;
		
		case joaat("weapon_heavyshotgun"):
			return "WTT_HVYSHOT";
			break;
		
		case joaat("weapon_proxmine"):
			return "WTT_PRXMINE";
			break;
		
		case joaat("weapon_hominglauncher"):
			return "WTT_HOMLNCH";
			break;
		
		case joaat("weapon_combatpdw"):
			return "WTT_COMBATPDW";
			break;
		
		case joaat("weapon_knuckle"):
			return "WTT_KNUCKLE";
			break;
		
		case joaat("weapon_marksmanpistol"):
			return "WTT_MKPISTOL";
			break;
		
		default:
			if (GlobalFunc_221(iParam0, &Var0) != -1)
			{
				return GlobalFunc_217(&(Var0.f_23));
			}
			break;
	}
	return "WT_INVALID";
}

int func_261(int iParam0)//Position - 0x1C65F
{
	int iVar0;
	
	switch (iParam0)
	{
		case joaat("weapon_knife"):
			iVar0 = 182;
			break;
		
		case joaat("weapon_pistol"):
			iVar0 = 247;
			break;
		
		case joaat("weapon_combatpistol"):
			iVar0 = 257;
			break;
		
		case joaat("weapon_appistol"):
			iVar0 = 277;
			break;
		
		case joaat("weapon_microsmg"):
			iVar0 = 287;
			break;
		
		case joaat("weapon_smg"):
			iVar0 = 297;
			break;
		
		case joaat("weapon_assaultrifle"):
			iVar0 = 316;
			break;
		
		case joaat("weapon_carbinerifle"):
			iVar0 = 325;
			break;
		
		case joaat("weapon_specialcarbine"):
			iVar0 = 2457;
			break;
		
		case joaat("weapon_advancedrifle"):
			iVar0 = 334;
			break;
		
		case joaat("weapon_mg"):
			iVar0 = 343;
			break;
		
		case joaat("weapon_combatmg"):
			iVar0 = 352;
			break;
		
		case joaat("weapon_pumpshotgun"):
			iVar0 = 370;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			iVar0 = 380;
			break;
		
		case joaat("weapon_assaultshotgun"):
			iVar0 = 398;
			break;
		
		case joaat("weapon_stungun"):
			iVar0 = 408;
			break;
		
		case joaat("weapon_sniperrifle"):
			iVar0 = 417;
			break;
		
		case joaat("weapon_heavysniper"):
			iVar0 = 426;
			break;
		
		case joaat("weapon_grenadelauncher"):
			iVar0 = 435;
			break;
		
		case joaat("weapon_rpg"):
			iVar0 = 442;
			break;
		
		case joaat("weapon_minigun"):
			iVar0 = 451;
			break;
		
		case joaat("weapon_grenade"):
			iVar0 = 459;
			break;
		
		case joaat("weapon_smokegrenade"):
			iVar0 = 468;
			break;
		
		case joaat("weapon_stickybomb"):
			iVar0 = 476;
			break;
		
		case joaat("weapon_molotov"):
			iVar0 = 485;
			break;
		
		case joaat("weapon_petrolcan"):
			return 0;
			break;
		
		case joaat("weapon_nightstick"):
			iVar0 = 190;
			break;
		
		case joaat("weapon_pistol50"):
			iVar0 = 267;
			break;
		
		case -572349828:
			iVar0 = 361;
			break;
		
		case joaat("weapon_assaultsmg"):
			iVar0 = 307;
			break;
		
		case 392730790:
			return 0;
			break;
		
		case joaat("weapon_hammer"):
			iVar0 = 218;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			iVar0 = 389;
			break;
		
		case joaat("weapon_bottle"):
			iVar0 = 1724;
			break;
		
		case joaat("weapon_snspistol"):
			iVar0 = 1734;
			break;
		
		case joaat("weapon_heavypistol"):
			iVar0 = 2447;
			break;
		
		case joaat("weapon_bullpuprifle"):
			iVar0 = 2467;
			break;
		
		case joaat("weapon_gusenberg"):
			iVar0 = 2477;
			break;
		
		case joaat("weapon_vintagepistol"):
			iVar0 = 2760;
			break;
		
		case joaat("weapon_dagger"):
			iVar0 = 2750;
			break;
		
		case joaat("weapon_musket"):
			iVar0 = 2780;
			break;
		
		case joaat("weapon_firework"):
			iVar0 = 2770;
			break;
		
		case joaat("weapon_heavyshotgun"):
			iVar0 = 2858;
			break;
		
		case joaat("weapon_marksmanrifle"):
			iVar0 = 2868;
			break;
		
		case joaat("weapon_proxmine"):
			iVar0 = 2884;
			break;
		
		case joaat("weapon_hominglauncher"):
			iVar0 = 2892;
			break;
		
		case joaat("weapon_hatchet"):
			iVar0 = 2876;
			break;
		
		case joaat("weapon_combatpdw"):
			iVar0 = 2893;
			break;
		
		default:
			return 0;
			break;
	}
	return GlobalFunc_6872(iVar0, -1, 0);
}

bool func_262(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4)//Position - 0x1C917
{
	StringCopy(sParam2, "", 16);
	*uParam3 = -1;
	*uParam4 = 0;
	switch (iParam0)
	{
		case joaat("gadget_parachute"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "PD_TINT0", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 1:
					StringCopy(sParam2, "PD_TINT0", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 2:
					StringCopy(sParam2, "PD_TINT0", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 3:
					StringCopy(sParam2, "PD_TINT0", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 4:
					StringCopy(sParam2, "PD_TINT0", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 5:
					StringCopy(sParam2, "PD_TINT0", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 6:
					StringCopy(sParam2, "PD_TINT0", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 7:
					StringCopy(sParam2, "PD_TINT0", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 8:
					StringCopy(sParam2, "PD_TINT0", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 9:
					StringCopy(sParam2, "PD_TINT0", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 10:
					StringCopy(sParam2, "PD_TINT0", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 11:
					StringCopy(sParam2, "PD_TINT0", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 12:
					StringCopy(sParam2, "PD_TINT1", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 13:
					StringCopy(sParam2, "PD_TINT2", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 14:
					StringCopy(sParam2, "PD_TINT3", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 15:
					StringCopy(sParam2, "PD_TINT4", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 16:
					StringCopy(sParam2, "PD_TINT5", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 17:
					StringCopy(sParam2, "PD_TINT6", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 18:
					StringCopy(sParam2, "PD_TINT7", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 19:
					StringCopy(sParam2, "PD_TINT8", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 20:
					StringCopy(sParam2, "PD_TINT9", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 21:
					StringCopy(sParam2, "PD_TINT10", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 22:
					StringCopy(sParam2, "PD_TINT11", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 23:
					StringCopy(sParam2, "PD_TINT12", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 24:
					StringCopy(sParam2, "PD_TINT13", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
				
				case 25:
					StringCopy(sParam2, "PD_TINT14", 16);
					*uParam3 = -1;
					*uParam4 = 0;
					break;
			}
			break;
		
		default:
			if (iParam0 == -61829581)
			{
				switch (iParam1)
				{
					case 0:
						StringCopy(sParam2, "", 16);
						*uParam3 = -1;
						*uParam4 = 0;
						break;
					
					case 1:
						StringCopy(sParam2, "", 16);
						*uParam3 = -1;
						*uParam4 = 0;
						break;
					
					case 2:
						StringCopy(sParam2, "", 16);
						*uParam3 = -1;
						*uParam4 = 0;
						break;
					
					case 3:
						StringCopy(sParam2, "", 16);
						*uParam3 = -1;
						*uParam4 = 0;
						break;
					
					case 4:
						StringCopy(sParam2, "", 16);
						*uParam3 = -1;
						*uParam4 = 0;
						break;
					
					case 5:
						StringCopy(sParam2, "", 16);
						*uParam3 = -1;
						*uParam4 = 0;
						break;
					
					case 6:
						StringCopy(sParam2, "", 16);
						*uParam3 = -1;
						*uParam4 = 0;
						break;
					
					case 7:
						StringCopy(sParam2, "", 16);
						*uParam3 = -1;
						*uParam4 = 0;
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						StringCopy(sParam2, "", 16);
						*uParam3 = -1;
						*uParam4 = 0;
						break;
					
					case 1:
						StringCopy(sParam2, "GSM_TINT_KILL", 16);
						*uParam3 = 200;
						*uParam4 = 1;
						break;
					
					case 2:
						StringCopy(sParam2, "GSM_TINT_CASH", 16);
						*uParam3 = -1;
						*uParam4 = 0;
						break;
					
					case 3:
						StringCopy(sParam2, "GSM_TINT_RANK", 16);
						*uParam3 = 50;
						*uParam4 = 0;
						break;
					
					case 4:
						StringCopy(sParam2, "GSM_TINT_KILL", 16);
						*uParam3 = 100;
						*uParam4 = 1;
						break;
					
					case 5:
						StringCopy(sParam2, "GSM_TINT_KILL", 16);
						*uParam3 = 600;
						*uParam4 = 1;
						break;
					
					case 6:
						StringCopy(sParam2, "GSM_TINT_KILL", 16);
						*uParam3 = 400;
						*uParam4 = 1;
						break;
					
					case 7:
						StringCopy(sParam2, "GSM_TINT_AWARD", 16);
						*uParam3 = -1;
						*uParam4 = 0;
						break;
					}
			}
			break;
	}
	return MISC::GET_HASH_KEY(sParam2) != 0;
}

int func_263(int iParam0, int iParam1, int iParam2)//Position - 0x1CD79
{
	var uVar0;
	int iVar39;
	int iVar40;
	struct<4> Var41;
	
	if (iParam0 != 0)
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == joaat("gadget_parachute")) && GlobalFunc_362(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (iParam2 == 5)
		{
			return 1;
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((((((iParam0 == -572349828 || iParam0 == 392730790) || iParam0 == joaat("weapon_bullpupshotgun")) || iParam0 == -947031628) || iParam0 == -344484024) || iParam0 == joaat("weapon_pistol50")) || iParam0 == -1887867191) || iParam0 == -837150131) || iParam0 == joaat("weapon_hammer"))
			{
				return 1;
			}
		}
		else if (((((((((iParam0 == -572349828 || iParam0 == joaat("weapon_assaultsmg")) || iParam0 == 392730790) || iParam0 == joaat("weapon_bullpupshotgun")) || iParam0 == -947031628) || iParam0 == -344484024) || iParam0 == joaat("weapon_pistol50")) || iParam0 == -1887867191) || iParam0 == -837150131) || iParam0 == joaat("weapon_hammer"))
		{
			return 1;
		}
		iVar39 = GlobalFunc_221(iParam0, &uVar0);
		if (iVar39 != -1)
		{
			return 1;
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((iParam0 == joaat("gadget_parachute") && iParam2 == 4) && iParam1 == 6)
			{
				if (!GlobalFunc_8858(6))
				{
					return 0;
				}
			}
			if ((iParam0 == joaat("gadget_parachute") && iParam2 == 4) && iParam1 == 7)
			{
				if (!GlobalFunc_321() || (!Global_262145.f_6114 && !GlobalFunc_6708(3602, -1, -1)))
				{
					return 0;
				}
			}
			if ((iParam0 != joaat("gadget_parachute") && iParam2 == 0) && iParam1 == 2)
			{
				iVar40 = func_259(iParam0, iParam1, iParam2);
				if (func_302(iVar40) || GlobalFunc_8858(14))
				{
					return 1;
				}
			}
			iVar40 = func_259(iParam0, iParam1, iParam2);
			if (iVar40 != 0)
			{
				return func_302(iVar40);
			}
			if (iParam0 == joaat("weapon_flaregun"))
			{
				StringCopy(&Var41, "WT_FLAREGUN", 16);
				return !func_264(Var41);
			}
		}
	}
	return 1;
}

int func_264(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)//Position - 0x1CFD3
{
	switch (MISC::GET_HASH_KEY(&cParam0))
	{
		case joaat("WT_FLAREGUN"):
			return !GlobalFunc_6708(3755, -1, -1);
			break;
		
		case -1433279578:
			return !GlobalFunc_6708(3760, -1, -1);
			break;
		
		case -993451163:
		case 406336869:
			return !GlobalFunc_6708(3757, -1, -1);
			break;
		
		case joaat("CLO_HST_B_1_0"):
			return !GlobalFunc_6708(3756, -1, -1);
			break;
		
		case 1643425118:
			return !GlobalFunc_6708(3758, -1, -1);
			break;
		
		case -334550899:
			return !GlobalFunc_6708(3759, -1, -1);
			break;
	}
	return 0;
}





int func_269(int iParam0, int iParam1, int iParam2)//Position - 0x1D36D
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_68245)
	{
		if (GlobalFunc_8831(iParam0, iParam1, -1))
		{
			iVar0 = 1;
		}
	}
	else if (func_270(GlobalFunc_8354(), iParam1, iParam0))
	{
		iVar0 = 1;
	}
	*iParam2 = WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam1, iParam0);
	return iVar0;
}

int func_270(int iParam0, int iParam1, int iParam2)//Position - 0x1D3B4
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (GlobalFunc_42(iParam0))
	{
		uVar0 = GlobalFunc_7249(iParam0, iParam1, iParam2);
		iVar1 = GlobalFunc_5846(iParam2, iParam1);
		iVar2 = GlobalFunc_299(iVar1);
		return MISC::IS_BIT_SET(uVar0, iVar2);
	}
	return 0;
}









bool func_279(int iParam0, int iParam1, char* sParam2, char* sParam3)//Position - 0x1E14C
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<15> Var41;
	
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_pistol_clip_01"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_pistol_clip_01"), iParam0), 16);
					break;
				
				case 1:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_pistol_clip_02"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_pistol_clip_02"), iParam0), 16);
					break;
				
				case 2:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_pi_flsh"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_pi_flsh"), iParam0), 16);
					break;
				
				case 3:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_pi_supp_02"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_pi_supp_02"), iParam0), 16);
					break;
				
				case 4:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_pistol_varmod_luxe"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_pistol_varmod_luxe"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_combatpistol_clip_01"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_combatpistol_clip_01"), iParam0), 16);
					break;
				
				case 1:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_combatpistol_clip_02"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_combatpistol_clip_02"), iParam0), 16);
					break;
				
				case 2:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_pi_flsh"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_pi_flsh"), iParam0), 16);
					break;
				
				case 3:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_pi_supp"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_pi_supp"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_appistol_clip_01"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_appistol_clip_01"), iParam0), 16);
					break;
				
				case 1:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_appistol_clip_02"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_appistol_clip_02"), iParam0), 16);
					break;
				
				case 2:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_pi_flsh"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_pi_flsh"), iParam0), 16);
					break;
				
				case 3:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_pi_supp"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_pi_supp"), iParam0), 16);
					break;
				
				case 4:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_appistol_varmod_luxe"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_appistol_varmod_luxe"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_microsmg_clip_01"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_microsmg_clip_01"), iParam0), 16);
					break;
				
				case 1:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_microsmg_clip_02"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_microsmg_clip_02"), iParam0), 16);
					break;
				
				case 2:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_pi_flsh"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_pi_flsh"), iParam0), 16);
					break;
				
				case 3:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_scope_macro"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_scope_macro"), iParam0), 16);
					break;
				
				case 4:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_ar_supp_02"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_ar_supp_02"), iParam0), 16);
					break;
				
				case 5:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_microsmg_varmod_luxe"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_microsmg_varmod_luxe"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_smg_clip_01"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_smg_clip_01"), iParam0), 16);
					break;
				
				case 1:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_smg_clip_02"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_smg_clip_02"), iParam0), 16);
					break;
				
				case 2:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_ar_flsh"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_ar_flsh"), iParam0), 16);
					break;
				
				case 3:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_scope_macro_02"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_scope_macro_02"), iParam0), 16);
					break;
				
				case 4:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_pi_supp"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_pi_supp"), iParam0), 16);
					break;
				
				case 5:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_smg_varmod_luxe"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_smg_varmod_luxe"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_assaultrifle_clip_01"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_assaultrifle_clip_01"), iParam0), 16);
					break;
				
				case 1:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_assaultrifle_clip_02"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_assaultrifle_clip_02"), iParam0), 16);
					break;
				
				case 2:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_ar_afgrip"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_ar_afgrip"), iParam0), 16);
					break;
				
				case 3:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_ar_flsh"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_ar_flsh"), iParam0), 16);
					break;
				
				case 4:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_scope_macro"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_scope_macro"), iParam0), 16);
					break;
				
				case 5:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_ar_supp_02"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_ar_supp_02"), iParam0), 16);
					break;
				
				case 6:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_assaultrifle_varmod_luxe"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_assaultrifle_varmod_luxe"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_carbinerifle_clip_01"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_carbinerifle_clip_01"), iParam0), 16);
					break;
				
				case 1:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_carbinerifle_clip_02"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_carbinerifle_clip_02"), iParam0), 16);
					break;
				
				case 2:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_railcover_01"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_railcover_01"), iParam0), 16);
					break;
				
				case 3:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_ar_afgrip"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_ar_afgrip"), iParam0), 16);
					break;
				
				case 4:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_ar_flsh"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_ar_flsh"), iParam0), 16);
					break;
				
				case 5:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_scope_medium"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_scope_medium"), iParam0), 16);
					break;
				
				case 6:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_ar_supp"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_ar_supp"), iParam0), 16);
					break;
				
				case 7:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_carbinerifle_varmod_luxe"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_carbinerifle_varmod_luxe"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_advancedrifle_clip_01"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_advancedrifle_clip_01"), iParam0), 16);
					break;
				
				case 1:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_advancedrifle_clip_02"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_advancedrifle_clip_02"), iParam0), 16);
					break;
				
				case 2:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_ar_flsh"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_ar_flsh"), iParam0), 16);
					break;
				
				case 3:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_scope_small"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_scope_small"), iParam0), 16);
					break;
				
				case 4:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_ar_supp"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_ar_supp"), iParam0), 16);
					break;
				
				case 5:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_advancedrifle_varmod_luxe"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_advancedrifle_varmod_luxe"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_mg_clip_01"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_mg_clip_01"), iParam0), 16);
					break;
				
				case 1:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_mg_clip_02"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_mg_clip_02"), iParam0), 16);
					break;
				
				case 2:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_scope_small_02"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_scope_small_02"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_combatmg_clip_01"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_combatmg_clip_01"), iParam0), 16);
					break;
				
				case 1:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_combatmg_clip_02"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_combatmg_clip_02"), iParam0), 16);
					break;
				
				case 2:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_ar_afgrip"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_ar_afgrip"), iParam0), 16);
					break;
				
				case 3:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_scope_medium"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_scope_medium"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_ar_flsh"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_ar_flsh"), iParam0), 16);
					break;
				
				case 1:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_sr_supp"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_sr_supp"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_assaultshotgun_clip_01"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_assaultshotgun_clip_01"), iParam0), 16);
					break;
				
				case 1:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_assaultshotgun_clip_02"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_assaultshotgun_clip_02"), iParam0), 16);
					break;
				
				case 2:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_ar_afgrip"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_ar_afgrip"), iParam0), 16);
					break;
				
				case 3:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_ar_flsh"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_ar_flsh"), iParam0), 16);
					break;
				
				case 4:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_ar_supp"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_ar_supp"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_sniperrifle_clip_01"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_sniperrifle_clip_01"), iParam0), 16);
					break;
				
				case 1:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_ar_supp_02"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_ar_supp_02"), iParam0), 16);
					break;
				
				case 2:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_scope_large"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_scope_large"), iParam0), 16);
					break;
				
				case 3:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_scope_max"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_scope_max"), iParam0), 16);
					break;
				
				case 4:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_sniperrifle_varmod_luxe"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_sniperrifle_varmod_luxe"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_heavysniper_clip_01"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_heavysniper_clip_01"), iParam0), 16);
					break;
				
				case 1:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_scope_large"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_scope_large"), iParam0), 16);
					break;
				
				case 2:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_scope_max"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_scope_max"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_ar_afgrip"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_ar_afgrip"), iParam0), 16);
					break;
				
				case 1:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_ar_flsh"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_ar_flsh"), iParam0), 16);
					break;
				
				case 2:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_scope_small"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_scope_small"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_minigun_clip_01"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_minigun_clip_01"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_assaultsmg_clip_01"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_assaultsmg_clip_01"), iParam0), 16);
					break;
				
				case 1:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_assaultsmg_clip_02"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_assaultsmg_clip_02"), iParam0), 16);
					break;
				
				case 2:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_ar_flsh"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_ar_flsh"), iParam0), 16);
					break;
				
				case 3:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_scope_macro"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_scope_macro"), iParam0), 16);
					break;
				
				case 4:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_ar_supp_02"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_ar_supp_02"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_ar_afgrip"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_ar_afgrip"), iParam0), 16);
					break;
				
				case 1:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_ar_flsh"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_ar_flsh"), iParam0), 16);
					break;
				
				case 2:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_ar_supp_02"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_ar_supp_02"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_pistol50_clip_01"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_pistol50_clip_01"), iParam0), 16);
					break;
				
				case 1:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_pistol50_clip_02"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_pistol50_clip_02"), iParam0), 16);
					break;
				
				case 2:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_pi_flsh"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_pi_flsh"), iParam0), 16);
					break;
				
				case 3:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_ar_supp_02"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_ar_supp_02"), iParam0), 16);
					break;
				
				case 4:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_pistol50_varmod_luxe"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_pistol50_varmod_luxe"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_sawnoffshotgun_varmod_luxe"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_sawnoffshotgun_varmod_luxe"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_heavypistol"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_heavypistol_clip_01"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_heavypistol_clip_01"), iParam0), 16);
					break;
				
				case 1:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_heavypistol_clip_02"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_heavypistol_clip_02"), iParam0), 16);
					break;
				
				case 2:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_pi_flsh"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_pi_flsh"), iParam0), 16);
					break;
				
				case 3:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_pi_supp"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_pi_supp"), iParam0), 16);
					break;
				
				case 4:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_heavypistol_varmod_luxe"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_heavypistol_varmod_luxe"), iParam0), 16);
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_marksmanrifle_clip_01"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_marksmanrifle_clip_01"), iParam0), 16);
					break;
				
				case 1:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_marksmanrifle_clip_02"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_marksmanrifle_clip_02"), iParam0), 16);
					break;
				
				case 2:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_scope_large_fixed_zoom"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_scope_large_fixed_zoom"), iParam0), 16);
					break;
				
				case 3:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_ar_flsh"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_ar_flsh"), iParam0), 16);
					break;
				
				case 4:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_ar_supp"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_ar_supp"), iParam0), 16);
					break;
				
				case 5:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_at_ar_afgrip"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_at_ar_afgrip"), iParam0), 16);
					break;
				
				case 6:
					StringCopy(sParam2, GlobalFunc_4978(joaat("component_marksmanrifle_varmod_luxe"), iParam0), 16);
					StringCopy(sParam3, GlobalFunc_6365(joaat("component_marksmanrifle_varmod_luxe"), iParam0), 16);
					break;
			}
			break;
		
		default:
			iVar0 = GlobalFunc_221(iParam0, &uVar2);
			if (iVar0 != -1)
			{
				iVar1 = 0;
				while (iVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar0))
				{
					if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar0, iVar1, &Var41))
					{
						if (iVar1 == iParam1)
						{
							MemCopy(sParam2, {Var41.f_6}, 4);
							MemCopy(sParam3, {Var41.f_14}, 4);
						}
					}
					iVar1++;
				}
			}
			break;
	}
	return (MISC::GET_HASH_KEY(sParam2) != 0 || MISC::GET_HASH_KEY(sParam3) != 0);
}


int func_281(int iParam0, int iParam1)//Position - 0x1F6D2
{
	switch (iParam0)
	{
		case joaat("WAPClip"):
			if (iParam1 == joaat("weapon_pistol"))
			{
				return 3;
			}
			else if (iParam1 == joaat("weapon_combatpistol"))
			{
				return 10;
			}
			else if (iParam1 == joaat("weapon_appistol"))
			{
				return 34;
			}
			else if (iParam1 == joaat("weapon_microsmg"))
			{
				return 6;
			}
			else if (iParam1 == joaat("weapon_smg"))
			{
				return 12;
			}
			else if (iParam1 == joaat("weapon_assaultsmg"))
			{
				return 30;
			}
			else if (iParam1 == joaat("weapon_assaultrifle"))
			{
				return 25;
			}
			else if (iParam1 == joaat("weapon_carbinerifle"))
			{
				return 43;
			}
			else if (iParam1 == joaat("weapon_advancedrifle"))
			{
				return 71;
			}
			else if (iParam1 == joaat("weapon_assaultshotgun"))
			{
				return 38;
			}
			else if (iParam1 == joaat("weapon_mg"))
			{
				return 51;
			}
			else if (iParam1 == joaat("weapon_combatmg"))
			{
				return 81;
			}
			break;
		
		case 1170392792:
			if (iParam1 == joaat("weapon_pistol"))
			{
				return 4;
			}
			else if (iParam1 == joaat("weapon_combatpistol"))
			{
				return 11;
			}
			else if (iParam1 == joaat("weapon_appistol"))
			{
				return 35;
			}
			else if (iParam1 == joaat("weapon_microsmg"))
			{
				return 7;
			}
			else if (iParam1 == joaat("weapon_smg"))
			{
				return 13;
			}
			else if (iParam1 == joaat("weapon_assaultsmg"))
			{
				return 31;
			}
			else if (iParam1 == joaat("weapon_assaultrifle"))
			{
				return 27;
			}
			else if (iParam1 == joaat("weapon_carbinerifle"))
			{
				return 45;
			}
			else if (iParam1 == joaat("weapon_advancedrifle"))
			{
				return 72;
			}
			else if (iParam1 == joaat("weapon_pumpshotgun"))
			{
				return 18;
			}
			else if (iParam1 == joaat("weapon_assaultshotgun"))
			{
				return 40;
			}
			else if (iParam1 == joaat("weapon_grenadelauncher"))
			{
				return 62;
			}
			break;
		
		case joaat("WAPScop"):
			if (iParam1 == joaat("weapon_microsmg"))
			{
				return 8;
			}
			else if (iParam1 == joaat("weapon_smg"))
			{
				return 14;
			}
			else if (iParam1 == joaat("weapon_assaultsmg"))
			{
				return 32;
			}
			else if (iParam1 == joaat("weapon_assaultrifle"))
			{
				return 28;
			}
			else if (iParam1 == joaat("weapon_carbinerifle"))
			{
				return 46;
			}
			else if (iParam1 == joaat("weapon_advancedrifle"))
			{
				return 73;
			}
			else if (iParam1 == joaat("weapon_mg"))
			{
				return 52;
			}
			else if (iParam1 == joaat("weapon_combatmg"))
			{
				return 83;
			}
			else if (iParam1 == joaat("weapon_sniperrifle"))
			{
				return 23;
			}
			else if (iParam1 == joaat("weapon_heavysniper"))
			{
				return 91;
			}
			else if (iParam1 == joaat("weapon_grenadelauncher"))
			{
				return 63;
			}
			break;
		
		case joaat("WAPRail"):
			if (iParam1 == joaat("weapon_sniperrifle"))
			{
				return 23;
			}
			else if (iParam1 == joaat("weapon_heavysniper"))
			{
				return 92;
			}
			break;
		
		case joaat("WAPGrip"):
			if (iParam1 == joaat("weapon_assaultrifle"))
			{
				return 26;
			}
			else if (iParam1 == joaat("weapon_carbinerifle"))
			{
				return 44;
			}
			else if (iParam1 == joaat("weapon_assaultshotgun"))
			{
				return 39;
			}
			else if (iParam1 == joaat("weapon_combatmg"))
			{
				return 82;
			}
			else if (iParam1 == joaat("weapon_grenadelauncher"))
			{
				return 61;
			}
			break;
		
		case joaat("WAPSupp"):
			if (iParam1 == joaat("weapon_pistol"))
			{
				return 5;
			}
			else if (iParam1 == joaat("weapon_combatpistol"))
			{
				return 12;
			}
			else if (iParam1 == joaat("weapon_appistol"))
			{
				return 36;
			}
			else if (iParam1 == joaat("weapon_microsmg"))
			{
				return 9;
			}
			else if (iParam1 == joaat("weapon_smg"))
			{
				return 15;
			}
			else if (iParam1 == joaat("weapon_assaultsmg"))
			{
				return 33;
			}
			else if (iParam1 == joaat("weapon_assaultrifle"))
			{
				return 29;
			}
			else if (iParam1 == joaat("weapon_carbinerifle"))
			{
				return 47;
			}
			else if (iParam1 == joaat("weapon_advancedrifle"))
			{
				return 74;
			}
			else if (iParam1 == joaat("weapon_pumpshotgun"))
			{
				return 19;
			}
			else if (iParam1 == joaat("weapon_assaultshotgun"))
			{
				return 41;
			}
			else if (iParam1 == joaat("weapon_sniperrifle"))
			{
				return 22;
			}
			break;
		
		case 1731751835:
			if (iParam1 == joaat("weapon_sniperrifle"))
			{
				return 23;
			}
			else if (iParam1 == joaat("weapon_heavysniper"))
			{
				return 92;
			}
			break;
		
		case -1441477783:
			return 0;
			break;
	}
	return 0;
}

bool func_282(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x1FB04
{
	int iVar0;
	
	StringCopy(sParam3, "", 16);
	StringCopy(sParam4, "", 16);
	iVar0 = -1;
	switch (iParam1)
	{
		case 0:
			switch (iParam2)
			{
				case 0:
					StringCopy(sParam3, GlobalFunc_5379(joaat("gadget_parachute"), 0), 16);
					StringCopy(sParam4, func_283(joaat("gadget_parachute")), 16);
					break;
			}
			break;
		
		case 1:
			switch (iParam2)
			{
				case 0:
					StringCopy(sParam3, GlobalFunc_5379(joaat("weapon_microsmg"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_microsmg")), 16);
					break;
				
				case 1:
					StringCopy(sParam3, GlobalFunc_5379(joaat("weapon_smg"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_smg")), 16);
					break;
			}
			break;
		
		case 2:
			switch (iParam2)
			{
				case 0:
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						StringCopy(sParam3, GlobalFunc_5379(joaat("weapon_assaultsmg"), 0), 16);
						StringCopy(sParam4, func_283(joaat("weapon_assaultsmg")), 16);
					}
					else
					{
						StringCopy(sParam3, GlobalFunc_5379(joaat("weapon_sawnoffshotgun"), 0), 16);
						StringCopy(sParam4, func_283(joaat("weapon_sawnoffshotgun")), 16);
					}
					break;
				
				case 1:
					StringCopy(sParam3, GlobalFunc_5379(joaat("weapon_pumpshotgun"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_pumpshotgun")), 16);
					break;
				
				case 2:
					StringCopy(sParam3, GlobalFunc_5379(joaat("weapon_assaultshotgun"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_assaultshotgun")), 16);
					break;
			}
			break;
		
		case 3:
			switch (iParam2)
			{
				case 0:
					StringCopy(sParam3, GlobalFunc_5379(joaat("weapon_assaultrifle"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_assaultrifle")), 16);
					break;
				
				case 1:
					StringCopy(sParam3, GlobalFunc_5379(joaat("weapon_carbinerifle"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_carbinerifle")), 16);
					break;
				
				case 2:
					StringCopy(sParam3, GlobalFunc_5379(joaat("weapon_advancedrifle"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_advancedrifle")), 16);
					break;
			}
			break;
		
		case 4:
			switch (iParam2)
			{
				case 0:
					StringCopy(sParam3, GlobalFunc_5379(joaat("weapon_sniperrifle"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_sniperrifle")), 16);
					break;
				
				case 1:
					StringCopy(sParam3, GlobalFunc_5379(joaat("weapon_heavysniper"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_heavysniper")), 16);
					break;
			}
			break;
		
		case 5:
			switch (iParam2)
			{
				case 0:
					StringCopy(sParam3, GlobalFunc_5379(joaat("weapon_mg"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_mg")), 16);
					break;
				
				case 1:
					StringCopy(sParam3, GlobalFunc_5379(joaat("weapon_combatmg"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_combatmg")), 16);
					break;
			}
			break;
		
		case 6:
			switch (iParam2)
			{
				case 0:
					StringCopy(sParam3, GlobalFunc_5379(joaat("weapon_rpg"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_rpg")), 16);
					break;
				
				case 1:
					StringCopy(sParam3, GlobalFunc_5379(joaat("weapon_grenadelauncher"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_grenadelauncher")), 16);
					break;
				
				case 2:
					StringCopy(sParam3, GlobalFunc_5379(joaat("weapon_minigun"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_minigun")), 16);
					break;
			}
			break;
		
		case 7:
			switch (iParam2)
			{
				case 0:
					StringCopy(sParam3, GlobalFunc_5379(joaat("weapon_knife"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_knife")), 16);
					break;
				
				case 1:
					StringCopy(sParam3, GlobalFunc_5379(joaat("weapon_nightstick"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_nightstick")), 16);
					break;
			}
			break;
		
		case 8:
			switch (iParam2)
			{
				case 0:
					StringCopy(sParam3, GlobalFunc_5379(joaat("weapon_stungun"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_stungun")), 16);
					break;
				
				case 1:
					StringCopy(sParam3, GlobalFunc_5379(joaat("weapon_appistol"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_appistol")), 16);
					break;
				
				case 2:
					StringCopy(sParam3, GlobalFunc_5379(joaat("weapon_combatpistol"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_combatpistol")), 16);
					break;
				
				case 3:
					StringCopy(sParam3, GlobalFunc_5379(joaat("weapon_pistol"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_pistol")), 16);
					break;
			}
			break;
		
		case 9:
			switch (iParam2)
			{
				case 0:
					StringCopy(sParam3, GlobalFunc_5379(joaat("weapon_smokegrenade"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_smokegrenade")), 16);
					break;
				
				case 1:
					StringCopy(sParam3, GlobalFunc_5379(joaat("weapon_grenade"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_grenade")), 16);
					break;
				
				case 2:
					StringCopy(sParam3, GlobalFunc_5379(joaat("weapon_stickybomb"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_stickybomb")), 16);
					break;
			}
			break;
		
		case 10:
			switch (iParam2)
			{
				case 0:
					StringCopy(sParam3, GlobalFunc_5379(joaat("weapon_petrolcan"), 0), 16);
					StringCopy(sParam4, func_283(joaat("weapon_petrolcan")), 16);
					break;
			}
			break;
		
		case 11:
			switch (iParam2)
			{
				case 0:
					StringCopy(sParam3, GlobalFunc_5379((*uParam0)[0], 0), 16);
					StringCopy(sParam4, func_283((*uParam0)[0]), 16);
					iVar0 = 0;
					break;
				
				case 1:
					StringCopy(sParam3, GlobalFunc_5379((*uParam0)[1], 0), 16);
					StringCopy(sParam4, func_283((*uParam0)[1]), 16);
					iVar0 = 1;
					break;
				
				case 2:
					StringCopy(sParam3, GlobalFunc_5379((*uParam0)[2], 0), 16);
					StringCopy(sParam4, func_283((*uParam0)[2]), 16);
					iVar0 = 2;
					break;
				
				case 3:
					StringCopy(sParam3, GlobalFunc_5379((*uParam0)[3], 0), 16);
					StringCopy(sParam4, func_283((*uParam0)[3]), 16);
					iVar0 = 3;
					break;
				
				case 4:
					StringCopy(sParam3, GlobalFunc_5379((*uParam0)[4], 0), 16);
					StringCopy(sParam4, func_283((*uParam0)[4]), 16);
					iVar0 = 4;
					break;
				
				case 5:
					StringCopy(sParam3, GlobalFunc_5379((*uParam0)[5], 0), 16);
					StringCopy(sParam4, func_283((*uParam0)[5]), 16);
					iVar0 = 5;
					break;
			}
			break;
		
		case 12:
			switch (iParam2)
			{
				case 0:
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						StringCopy(sParam3, GlobalFunc_5379((*uParam0)[7], 0), 16);
						StringCopy(sParam4, func_283((*uParam0)[7]), 16);
						iVar0 = 7;
					}
					else
					{
						StringCopy(sParam3, GlobalFunc_5379((*uParam0)[6], 0), 16);
						StringCopy(sParam4, func_283((*uParam0)[6]), 16);
						iVar0 = 6;
					}
					break;
				
				case 1:
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						StringCopy(sParam3, GlobalFunc_5379((*uParam0)[9], 0), 16);
						StringCopy(sParam4, func_283((*uParam0)[9]), 16);
						iVar0 = 9;
					}
					else
					{
						StringCopy(sParam3, GlobalFunc_5379((*uParam0)[7], 0), 16);
						StringCopy(sParam4, func_283((*uParam0)[7]), 16);
						iVar0 = 7;
					}
					break;
				
				case 2:
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						StringCopy(sParam3, GlobalFunc_5379((*uParam0)[10], 0), 16);
						StringCopy(sParam4, func_283((*uParam0)[10]), 16);
						iVar0 = 10;
					}
					else
					{
						StringCopy(sParam3, GlobalFunc_5379((*uParam0)[8], 0), 16);
						StringCopy(sParam4, func_283((*uParam0)[8]), 16);
						iVar0 = 8;
					}
					break;
				
				case 3:
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						StringCopy(sParam3, GlobalFunc_5379((*uParam0)[8], 0), 16);
						StringCopy(sParam4, func_283((*uParam0)[8]), 16);
						iVar0 = 8;
					}
					else
					{
						StringCopy(sParam3, GlobalFunc_5379((*uParam0)[10], 0), 16);
						StringCopy(sParam4, func_283((*uParam0)[10]), 16);
						iVar0 = 10;
					}
					break;
				
				case 4:
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						StringCopy(sParam3, GlobalFunc_5379((*uParam0)[6], 0), 16);
						StringCopy(sParam4, func_283((*uParam0)[6]), 16);
						iVar0 = 6;
					}
					else
					{
						StringCopy(sParam3, GlobalFunc_5379((*uParam0)[11], 0), 16);
						StringCopy(sParam4, func_283((*uParam0)[11]), 16);
						iVar0 = 11;
					}
					break;
				
				case 5:
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						StringCopy(sParam3, GlobalFunc_5379((*uParam0)[11], 0), 16);
						StringCopy(sParam4, func_283((*uParam0)[11]), 16);
						iVar0 = 11;
					}
					else
					{
						StringCopy(sParam3, GlobalFunc_5379((*uParam0)[9], 0), 16);
						StringCopy(sParam4, func_283((*uParam0)[9]), 16);
						iVar0 = 9;
					}
					break;
			}
			break;
		
		case 13:
			switch (iParam2)
			{
				case 0:
					StringCopy(sParam3, GlobalFunc_5379((*uParam0)[12], 0), 16);
					StringCopy(sParam4, func_283((*uParam0)[12]), 16);
					iVar0 = 13;
					break;
				
				case 1:
					StringCopy(sParam3, GlobalFunc_5379((*uParam0)[13], 0), 16);
					StringCopy(sParam4, func_283((*uParam0)[13]), 16);
					iVar0 = 12;
					break;
				
				case 2:
					StringCopy(sParam3, GlobalFunc_5379((*uParam0)[14], 0), 16);
					StringCopy(sParam4, func_283((*uParam0)[14]), 16);
					iVar0 = 14;
					break;
				
				case 3:
					StringCopy(sParam3, GlobalFunc_5379((*uParam0)[15], 0), 16);
					StringCopy(sParam4, func_283((*uParam0)[15]), 16);
					iVar0 = 15;
					break;
				
				case 4:
					StringCopy(sParam3, GlobalFunc_5379((*uParam0)[16], 0), 16);
					StringCopy(sParam4, func_283((*uParam0)[16]), 16);
					iVar0 = 16;
					break;
				
				case 5:
					StringCopy(sParam3, GlobalFunc_5379((*uParam0)[17], 0), 16);
					StringCopy(sParam4, func_283((*uParam0)[17]), 16);
					iVar0 = 17;
					break;
			}
			break;
		
		case 14:
			switch (iParam2)
			{
				case 0:
					StringCopy(sParam3, GlobalFunc_5379((*uParam0)[18], 0), 16);
					StringCopy(sParam4, func_283((*uParam0)[18]), 16);
					iVar0 = 18;
					break;
				
				case 1:
					StringCopy(sParam3, GlobalFunc_5379((*uParam0)[19], 0), 16);
					StringCopy(sParam4, func_283((*uParam0)[19]), 16);
					iVar0 = 19;
					break;
				
				case 2:
					StringCopy(sParam3, GlobalFunc_5379((*uParam0)[20], 0), 16);
					StringCopy(sParam4, func_283((*uParam0)[20]), 16);
					iVar0 = 20;
					break;
				
				case 3:
					StringCopy(sParam3, GlobalFunc_5379((*uParam0)[21], 0), 16);
					StringCopy(sParam4, func_283((*uParam0)[21]), 16);
					iVar0 = 21;
					break;
				
				case 4:
					StringCopy(sParam3, GlobalFunc_5379((*uParam0)[22], 0), 16);
					StringCopy(sParam4, func_283((*uParam0)[22]), 16);
					iVar0 = 22;
					break;
				
				case 5:
					StringCopy(sParam3, GlobalFunc_5379((*uParam0)[23], 0), 16);
					StringCopy(sParam4, func_283((*uParam0)[23]), 16);
					iVar0 = 23;
					break;
			}
			break;
		
		case 15:
			switch (iParam2)
			{
				case 0:
					StringCopy(sParam3, "WT_BA_0", 16);
					StringCopy(sParam4, "WTD_BA_0", 16);
					break;
				
				case 1:
					StringCopy(sParam3, "WT_BA_1", 16);
					StringCopy(sParam4, "WTD_BA_1", 16);
					break;
				
				case 2:
					StringCopy(sParam3, "WT_BA_2", 16);
					StringCopy(sParam4, "WTD_BA_2", 16);
					break;
				
				case 3:
					StringCopy(sParam3, "WT_BA_3", 16);
					StringCopy(sParam4, "WTD_BA_3", 16);
					break;
				
				case 4:
					StringCopy(sParam3, "WT_BA_4", 16);
					StringCopy(sParam4, "WTD_BA_4", 16);
					break;
			}
			break;
	}
	if (iVar0 != -1)
	{
		if ((*uParam0)[iVar0] == -61829581)
		{
			StringCopy(sParam3, "FW_WEAP", 16);
			StringCopy(sParam4, "FW_DESC", 16);
		}
	}
	return (MISC::GET_HASH_KEY(sParam3) != 0 || MISC::GET_HASH_KEY(sParam4) != 0);
}

char* func_283(int iParam0)//Position - 0x2057C
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0:
			return "";
			break;
		
		case joaat("weapon_unarmed"):
			return "";
			break;
		
		case joaat("weapon_pistol"):
			return "WT_PIST_DESC";
			break;
		
		case joaat("weapon_combatpistol"):
			return "WTD_PIST_CBT";
			break;
		
		case joaat("weapon_appistol"):
			return "WTD_PIST_AP";
			break;
		
		case joaat("weapon_smg"):
			return "WTD_SMG";
			break;
		
		case joaat("weapon_microsmg"):
			return "WTD_SMG_MCR";
			break;
		
		case joaat("weapon_assaultrifle"):
			return "WTD_RIFLE_ASL";
			break;
		
		case joaat("weapon_carbinerifle"):
			return "WTD_RIFLE_CBN";
			break;
		
		case joaat("weapon_advancedrifle"):
			return "WTD_RIFLE_ADV";
			break;
		
		case joaat("weapon_mg"):
			return "WTD_MG";
			break;
		
		case joaat("weapon_combatmg"):
			return "WTD_MG_CBT";
			break;
		
		case joaat("weapon_pumpshotgun"):
			return "WTD_SG_PMP";
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return "WTD_SG_SOF";
			break;
		
		case joaat("weapon_assaultshotgun"):
			return "WTD_SG_ASL";
			break;
		
		case joaat("weapon_heavysniper"):
			return "WTD_SNIP_HVY";
			break;
		
		case joaat("weapon_remotesniper"):
			return "WTD_SNIP_RMT";
			break;
		
		case joaat("weapon_sniperrifle"):
			return "WTD_SNIP_RIF";
			break;
		
		case joaat("weapon_grenadelauncher"):
			return "WTD_GL";
			break;
		
		case joaat("weapon_rpg"):
			return "WTD_RPG";
			break;
		
		case joaat("weapon_minigun"):
			return "WTD_MINIGUN";
			break;
		
		case joaat("weapon_grenade"):
			return "WTD_GNADE";
			break;
		
		case joaat("weapon_smokegrenade"):
			return "WTD_GNADE_SMK";
			break;
		
		case joaat("weapon_stickybomb"):
			return "WTD_GNADE_STK";
			break;
		
		case joaat("weapon_molotov"):
			return "WTD_MOLOTOV";
			break;
		
		case joaat("weapon_stungun"):
			return "WTD_STUN";
			break;
		
		case joaat("weapon_petrolcan"):
			return "WTD_PETROL";
			break;
		
		case joaat("weapon_digiscanner"):
			return "WTD_DIGI";
			break;
		
		case joaat("weapon_electric_fence"):
			return "WTD_ELCFEN";
			break;
		
		case joaat("vehicle_weapon_tank"):
			return "";
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			return "";
			break;
		
		case joaat("vehicle_weapon_player_laser"):
			return "";
			break;
		
		case joaat("object"):
			return "";
			break;
		
		case joaat("gadget_parachute"):
			return "WTD_PARA";
			break;
		
		case joaat("AMMO_RPG"):
			return "";
			break;
		
		case joaat("AMMO_TANK"):
			return "";
			break;
		
		case joaat("AMMO_SPACE_ROCKET"):
			return "";
			break;
		
		case joaat("AMMO_PLAYER_LASER"):
			return "";
			break;
		
		case joaat("AMMO_ENEMY_LASER"):
			return "";
			break;
		
		case joaat("weapon_knife"):
			return "WTD_KNIFE";
			break;
		
		case joaat("weapon_nightstick"):
			return "WTD_NGTSTK";
			break;
		
		case joaat("weapon_hammer"):
			return "WTD_HAMMER";
			break;
		
		case joaat("weapon_bat"):
			return "WTD_BAT";
			break;
		
		case joaat("weapon_crowbar"):
			return "WTD_CROWBAR";
			break;
		
		case joaat("weapon_golfclub"):
			return "WTD_GOLFCLUB";
			break;
		
		case joaat("weapon_rammed_by_car"):
			return "";
			break;
		
		case joaat("weapon_run_over_by_car"):
			return "";
			break;
		
		case joaat("weapon_assaultsmg"):
			return "WTD_SMG_ASL";
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return "WTD_SG_BLP";
			break;
		
		case joaat("weapon_pistol50"):
			return "WTD_PIST_50";
			break;
		
		case joaat("weapon_vintagepistol"):
			return "WTD_VPISTOL";
			break;
		
		case joaat("weapon_dagger"):
			return "WTD_DAGGER";
			break;
		
		case joaat("weapon_proxmine"):
			return "WTD_PRXMINE";
			break;
		
		case joaat("weapon_hominglauncher"):
			return "WTD_HOMLNCH";
			break;
		
		default:
			if (GlobalFunc_221(iParam0, &Var0) != -1)
			{
				return GlobalFunc_217(&(Var0.f_15));
			}
			break;
	}
	return "WT_INVALID";
}

void func_284(var uParam0, char* sParam1, int iParam2)//Position - 0x208EF
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_285(uParam0);
	}
	else
	{
		StringCopy(&(uParam0->f_11), sParam1, 16);
		uParam0->f_16 = 1;
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			uParam0->f_7 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam2);
		}
		else
		{
			uParam0->f_6 = (MISC::GET_GAME_TIMER() + iParam2);
		}
	}
}

int func_285(var uParam0)//Position - 0x2093A
{
	StringCopy(&(uParam0->f_11), "", 16);
	if (uParam0->f_16)
	{
		uParam0->f_16 = 0;
		return 1;
	}
	return 0;
}

void func_286(int iParam0, int iParam1)//Position - 0x2095B
{
	if (!func_295(iParam0, iParam1))
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_290(iParam1, 1);
	}
	else
	{
		func_287(iParam0, iParam1, 1);
	}
}

void func_287(int iParam0, int iParam1, bool bParam2)//Position - 0x2098C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (GlobalFunc_42(iParam0))
	{
		iVar0 = func_289(iParam0, iParam1);
		iVar1 = GlobalFunc_5556(iParam1);
		iVar2 = GlobalFunc_299(iVar1);
		if (bParam2)
		{
			MISC::SET_BIT(&iVar0, iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, iVar2);
		}
		func_288(iParam0, iParam1, iVar0);
	}
}

void func_288(int iParam0, int iParam1, int iParam2)//Position - 0x209D9
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_5556(iParam1);
	iVar1 = GlobalFunc_300(iVar0);
	switch (iVar1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_tint_view_0"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_tint_view_0"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_tint_view_0"), iParam2, 1);
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_tint_view_1"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_tint_view_1"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_tint_view_1"), iParam2, 1);
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_tint_view_2"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_tint_view_2"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_tint_view_2"), iParam2, 1);
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_tint_view_3"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_tint_view_3"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_tint_view_3"), iParam2, 1);
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_tint_view_4"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_tint_view_4"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_tint_view_4"), iParam2, 1);
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_tint_view_5"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_tint_view_5"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_tint_view_5"), iParam2, 1);
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_tint_view_6"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_tint_view_6"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_tint_view_6"), iParam2, 1);
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_tint_view_7"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_tint_view_7"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_tint_view_7"), iParam2, 1);
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_tint_view_8"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_tint_view_8"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_tint_view_8"), iParam2, 1);
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_tint_view_9"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_tint_view_9"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_tint_view_9"), iParam2, 1);
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_tint_view_10"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_tint_view_10"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_tint_view_10"), iParam2, 1);
					break;
			}
			break;
		
		case 11:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_tint_view_11"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_tint_view_11"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_tint_view_11"), iParam2, 1);
					break;
			}
			break;
		
		case 12:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_tint_view_12"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_tint_view_12"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_tint_view_12"), iParam2, 1);
					break;
			}
			break;
		
		default:
			break;
	}
}

var func_289(int iParam0, int iParam1)//Position - 0x20E25
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = GlobalFunc_5556(iParam1);
	iVar2 = GlobalFunc_300(iVar1);
	switch (iVar2)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_view_0"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_view_0"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_view_0"), &uVar0, -1);
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_view_1"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_view_1"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_view_1"), &uVar0, -1);
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_view_2"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_view_2"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_view_2"), &uVar0, -1);
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_view_3"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_view_3"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_view_3"), &uVar0, -1);
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_view_4"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_view_4"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_view_4"), &uVar0, -1);
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_view_5"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_view_5"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_view_5"), &uVar0, -1);
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_view_6"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_view_6"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_view_6"), &uVar0, -1);
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_view_7"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_view_7"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_view_7"), &uVar0, -1);
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_view_8"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_view_8"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_view_8"), &uVar0, -1);
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_view_9"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_view_9"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_view_9"), &uVar0, -1);
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_view_10"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_view_10"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_view_10"), &uVar0, -1);
					break;
			}
			break;
		
		case 11:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_view_11"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_view_11"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_view_11"), &uVar0, -1);
					break;
			}
			break;
		
		case 12:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_tint_view_12"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_tint_view_12"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_tint_view_12"), &uVar0, -1);
					break;
			}
			break;
		
		default:
			break;
	}
	return uVar0;
}

void func_290(int iParam0, bool bParam1)//Position - 0x21273
{
	if (bParam1)
	{
		if (!func_294(iParam0))
		{
			func_291(iParam0, 1);
		}
	}
	else if (func_294(iParam0))
	{
		func_291(iParam0, 0);
	}
}

void func_291(int iParam0, bool bParam1)//Position - 0x212A4
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_293(iParam0);
	iVar1 = iParam0;
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&iVar0, GlobalFunc_299(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, GlobalFunc_299(iVar1));
		}
		GlobalFunc_6720(func_292(iParam0), iVar0, -1, 1);
	}
}

int func_292(var uParam0)//Position - 0x212EF
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = GlobalFunc_300(iVar0);
	if ((GlobalFunc_3() == 0 || GlobalFunc_59() == 0) || (GlobalFunc_3() == 999 && GlobalFunc_59() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 702;
				break;
			
			case 1:
				return 703;
				break;
			
			case 2:
				return 704;
				break;
			
			case 3:
				return 705;
				break;
			
			case 4:
				return 706;
				break;
			
			case 5:
				return 707;
				break;
			
			case 6:
				return 708;
				break;
			
			case 7:
				return 709;
				break;
			
			case 8:
				return 710;
				break;
			
			case 9:
				return 2039;
				break;
			
			case 10:
				return 2051;
				break;
			
			case 11:
				return 2078;
				break;
			
			case 12:
				return 2386;
				break;
			}
	}
	return 2903;
}

int func_293(var uParam0)//Position - 0x21400
{
	int iVar0;
	
	iVar0 = GlobalFunc_6872(func_292(uParam0), -1, 0);
	return iVar0;
}

bool func_294(int iParam0)//Position - 0x21418
{
	var uVar0;
	int iVar1;
	
	if (GlobalFunc_1434())
	{
		return 0;
	}
	uVar0 = func_293(iParam0);
	iVar1 = iParam0;
	return MISC::IS_BIT_SET(uVar0, GlobalFunc_299(iVar1));
}

int func_295(int iParam0, int iParam1)//Position - 0x21443
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_302(iParam1) && !func_294(iParam1))
		{
			return 1;
		}
	}
	else if (!func_296(iParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_296(int iParam0, int iParam1)//Position - 0x2147F
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (GlobalFunc_42(iParam0))
	{
		uVar0 = func_289(iParam0, iParam1);
		iVar1 = GlobalFunc_5556(iParam1);
		iVar2 = GlobalFunc_299(iVar1);
		return MISC::IS_BIT_SET(uVar0, iVar2);
	}
	return 0;
}


void func_298(int iParam0)//Position - 0x2167A
{
	if (Global_2543305.f_62 >= 3 || Global_2543305.f_61 >= 4)
	{
		return;
	}
	Global_2543305.f_25[Global_2543305.f_61] = 2;
	Global_2543305.f_61++;
	Global_2543305.f_30[Global_2543305.f_62] = iParam0;
	Global_2543305.f_62++;
}




bool func_302(int iParam0)//Position - 0x227D8
{
	var uVar0;
	int iVar1;
	
	if (GlobalFunc_1434())
	{
		return 0;
	}
	uVar0 = func_303(iParam0);
	iVar1 = iParam0;
	return MISC::IS_BIT_SET(uVar0, GlobalFunc_299(iVar1));
}

var func_303(var uParam0)//Position - 0x22803
{
	var uVar0;
	
	uVar0 = GlobalFunc_6872(GlobalFunc_5554(uParam0, 999), -1, 0);
	return uVar0;
}


bool func_305(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x22939
{
	var uVar0;
	char* sVar39;
	int iVar55;
	float fVar56;
	
	func_306(sParam0, "", "", -1, -1, 0);
	switch (iParam1)
	{
		case joaat("gadget_parachute"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 1:
						func_306(sParam0, "PS_BAG_47", "PD_CONTENT_11", 9000, 47, 1);
						break;
					
					case 2:
						func_306(sParam0, "PS_BAG_49", "PD_CONTENT_11", 9000, 49, 1);
						break;
					
					case 3:
						func_306(sParam0, "PS_BAG_51", "PD_CONTENT_11", 9000, 51, 1);
						break;
					
					case 4:
						func_306(sParam0, "PS_BAG_48", "PD_CONTENT_11", 9000, 48, 1);
						break;
					
					case 5:
						func_306(sParam0, "PS_BAG_50", "PD_CONTENT_11", 9000, 50, 1);
						break;
					
					case 6:
						func_306(sParam0, "PS_BAG_13", "PD_CONTENT_9", 0, 13, 1);
						break;
					
					case 7:
						func_306(sParam0, "PS_BAG_22", "PD_CONTENT_9", 15000, 22, 1);
						break;
					
					case 8:
						func_306(sParam0, "PS_BAG_2", "PD_CONTENT_9", 15000, 2, 1);
						break;
					
					case 9:
						func_306(sParam0, "PS_BAG_20", "PD_CONTENT_9", 15000, 20, 1);
						break;
					
					case 10:
						func_306(sParam0, "PS_BAG_18", "PD_CONTENT_9", 15000, 18, 1);
						break;
					
					case 11:
						func_306(sParam0, "PS_BAG_3", "PD_CONTENT_9", 15000, 3, 1);
						break;
					
					case 12:
						func_306(sParam0, "PS_BAG_5", "PD_CONTENT_9", 15000, 5, 1);
						break;
					
					case 13:
						func_306(sParam0, "PS_BAG_31", "PD_CONTENT_10", 15000, 31, 1);
						break;
					
					case 14:
						func_306(sParam0, "PS_BAG_15", "PD_CONTENT_9", 15000, 15, 1);
						break;
					
					case 15:
						func_306(sParam0, "PS_BAG_32", "PD_CONTENT_10", 15000, 32, 1);
						break;
					
					case 16:
						func_306(sParam0, "PS_BAG_33", "PD_CONTENT_10", 15000, 33, 1);
						break;
					
					case 17:
						func_306(sParam0, "PS_BAG_28", "PD_CONTENT_10", 15000, 28, 1);
						break;
					
					case 18:
						func_306(sParam0, "PS_BAG_26", "PD_CONTENT_9", 15000, 26, 1);
						break;
					
					case 19:
						func_306(sParam0, "PS_BAG_27", "PD_CONTENT_10", 15000, 27, 1);
						break;
					
					case 20:
						func_306(sParam0, "PS_BAG_6", "PD_CONTENT_9", 15000, 6, 1);
						break;
					
					case 21:
						func_306(sParam0, "PS_BAG_7", "PD_CONTENT_9", 15000, 7, 1);
						break;
					
					case 22:
						func_306(sParam0, "PS_BAG_34", "PD_CONTENT_10", 15000, 34, 1);
						break;
					
					case 23:
						func_306(sParam0, "PS_BAG_24", "PD_CONTENT_9", 15000, 24, 1);
						break;
					
					case 24:
						func_306(sParam0, "PS_BAG_46", "PD_CONTENT_10", 15000, 46, 1);
						break;
					
					case 25:
						func_306(sParam0, "PS_BAG_11", "PD_CONTENT_9", 15000, 11, 1);
						break;
					
					case 26:
						func_306(sParam0, "PS_BAG_14", "PD_CONTENT_9", 15000, 14, 1);
						break;
					
					case 27:
						func_306(sParam0, "PS_BAG_8", "PD_CONTENT_9", 15000, 8, 1);
						break;
					
					case 28:
						func_306(sParam0, "PS_BAG_35", "PD_CONTENT_10", 15000, 35, 1);
						break;
					
					case 29:
						func_306(sParam0, "PS_BAG_36", "PD_CONTENT_10", 15000, 36, 1);
						break;
					
					case 30:
						func_306(sParam0, "PS_BAG_19", "PD_CONTENT_9", 15000, 19, 1);
						break;
					
					case 31:
						func_306(sParam0, "PS_BAG_29", "PD_CONTENT_10", 15000, 29, 1);
						break;
					
					case 32:
						func_306(sParam0, "PS_BAG_37", "PD_CONTENT_10", 15000, 37, 1);
						break;
					
					case 33:
						func_306(sParam0, "PS_BAG_38", "PD_CONTENT_10", 15000, 38, 1);
						break;
					
					case 34:
						func_306(sParam0, "PS_BAG_16", "PD_CONTENT_9", 15000, 16, 1);
						break;
					
					case 35:
						func_306(sParam0, "PS_BAG_45", "PD_CONTENT_10", 15000, 45, 1);
						break;
					
					case 36:
						func_306(sParam0, "PS_BAG_39", "PD_CONTENT_10", 15000, 39, 1);
						break;
					
					case 37:
						func_306(sParam0, "PS_BAG_30", "PD_CONTENT_10", 15000, 30, 1);
						break;
					
					case 38:
						func_306(sParam0, "PS_BAG_40", "PD_CONTENT_10", 15000, 40, 1);
						break;
					
					case 39:
						func_306(sParam0, "PS_BAG_21", "PD_CONTENT_9", 15000, 21, 1);
						break;
					
					case 40:
						func_306(sParam0, "PS_BAG_9", "PD_CONTENT_9", 15000, 9, 1);
						break;
					
					case 41:
						func_306(sParam0, "PS_BAG_41", "PD_CONTENT_10", 15000, 41, 1);
						break;
					
					case 42:
						func_306(sParam0, "PS_BAG_42", "PD_CONTENT_10", 15000, 42, 1);
						break;
					
					case 43:
						func_306(sParam0, "PS_BAG_43", "PD_CONTENT_10", 15000, 43, 1);
						break;
					
					case 44:
						func_306(sParam0, "PS_BAG_44", "PD_CONTENT_10", 15000, 44, 1);
						break;
					
					case 45:
						func_306(sParam0, "PS_BAG_4", "PD_CONTENT_9", 15000, 4, 1);
						break;
					
					case 46:
						func_306(sParam0, "PS_BAG_17", "PD_CONTENT_9", 15000, 17, 1);
						break;
					
					case 47:
						func_306(sParam0, "PS_BAG_12", "PD_CONTENT_9", 15000, 12, 1);
						break;
					
					case 48:
						func_306(sParam0, "PS_BAG_23", "PD_CONTENT_9", 15000, 23, 1);
						break;
					
					case 49:
						func_306(sParam0, "PS_BAG_10", "PD_CONTENT_9", 15000, 10, 1);
						break;
					
					case 50:
						func_306(sParam0, "PS_BAG_1", "PD_CONTENT_9", 15000, 1, 1);
						break;
					
					case 51:
						func_306(sParam0, "PS_BAG_25", "PD_CONTENT_9", 15000, 25, 1);
						break;
					
					case 52:
						func_306(sParam0, "PS_CAN_0", "PSD_CAN_0", 21500, 8, 2);
						break;
					
					case 53:
						func_306(sParam0, "PS_CAN_1", "PSD_CAN_1", 22100, 9, 2);
						break;
					
					case 54:
						func_306(sParam0, "PS_CAN_2", "PSD_CAN_2", 23900, 10, 2);
						break;
					
					case 55:
						func_306(sParam0, "PS_CAN_3", "PSD_CAN_3", 24800, 11, 2);
						break;
					
					case 56:
						func_306(sParam0, "PS_CAN_4", "PSD_CAN_4", 21000, 12, 2);
						break;
					
					case 57:
						func_306(sParam0, "PS_CAN_5", "PSD_CAN_5", 25000, 13, 2);
						break;
					
					case 58:
						func_306(sParam0, "PM_TINT5", "PD_TINT5", 18500, 5, 2);
						break;
					
					case 59:
						func_306(sParam0, "PM_TINT1", "PD_TINT1", 19250, 1, 2);
						break;
					
					case 60:
						func_306(sParam0, "PM_TINT2", "PD_TINT2", 18750, 2, 2);
						break;
					
					case 61:
						func_306(sParam0, "PM_TINT7", "PD_TINT7", 19000, 7, 2);
						break;
					
					case 62:
						func_306(sParam0, "PM_TINT4", "PD_TINT4", 12500, 4, 2);
						break;
					
					case 63:
						func_306(sParam0, "PM_TINT3", "PD_TINT3", 19500, 3, 2);
						break;
					
					case 64:
						func_306(sParam0, "PM_TINT0", "PD_TINT0", 19750, 0, 2);
						break;
					
					case 65:
						func_306(sParam0, "PM_TINT6", "PD_TINT6", 20000, 6, 2);
						break;
					
					case 66:
						func_306(sParam0, "PS_CAN_0", "PSD_CAN_0_R", 10750, 8, 3);
						break;
					
					case 67:
						func_306(sParam0, "PS_CAN_1", "PSD_CAN_1_R", 11050, 9, 3);
						break;
					
					case 68:
						func_306(sParam0, "PS_CAN_2", "PSD_CAN_2_R", 11950, 10, 3);
						break;
					
					case 69:
						func_306(sParam0, "PS_CAN_3", "PSD_CAN_3_R", 12400, 11, 3);
						break;
					
					case 70:
						func_306(sParam0, "PS_CAN_4", "PSD_CAN_4_R", 10500, 12, 3);
						break;
					
					case 71:
						func_306(sParam0, "PS_CAN_5", "PSD_CAN_5_R", 12500, 13, 3);
						break;
					
					case 72:
						func_306(sParam0, "PM_TINT5", "PD_TINT5_R", 9250, 5, 3);
						break;
					
					case 73:
						func_306(sParam0, "PM_TINT1", "PD_TINT1_R", 9625, 1, 3);
						break;
					
					case 74:
						func_306(sParam0, "PM_TINT2", "PD_TINT2_R", 9375, 2, 3);
						break;
					
					case 75:
						func_306(sParam0, "PM_TINT7", "PD_TINT7_R", 9500, 7, 3);
						break;
					
					case 76:
						func_306(sParam0, "PM_TINT4", "PD_TINT4_R", 6250, 4, 3);
						break;
					
					case 77:
						func_306(sParam0, "PM_TINT3", "PD_TINT3_R", 9750, 3, 3);
						break;
					
					case 78:
						func_306(sParam0, "PM_TINT0", "PD_TINT0_R", 9875, 0, 3);
						break;
					
					case joaat("mpsv_lp0_31"):
						func_306(sParam0, "PM_TINT6", "PD_TINT6_R", 10000, 6, 3);
						break;
					
					case 80:
						func_306(sParam0, "PM_TINT8", "PD_TINT8", 100, 0, 4);
						break;
					
					case 81:
						func_306(sParam0, "PM_TINT9", "PD_TINT9", 14300, 1, 4);
						break;
					
					case 82:
						func_306(sParam0, "PM_TINT10", "PD_TINT10", 14475, 2, 4);
						break;
					
					case 83:
						func_306(sParam0, "PM_TINT11", "PD_TINT11", 14650, 3, 4);
						break;
					
					case 84:
						func_306(sParam0, "PM_TINT12", "PD_TINT12", 14825, 4, 4);
						break;
					
					case 85:
						func_306(sParam0, "PM_TINT13", "PD_TINT13", 15000, 5, 4);
						break;
					
					case 86:
						func_306(sParam0, "PM_TINT14", "PD_TINT14", 25000, 6, 4);
						break;
					
					case 87:
						func_306(sParam0, "PM_TINT15", "PD_TINT15", 30000, 7, 4);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 1:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 2:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 3:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 4:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 5:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 6:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 7:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 8:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 9:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 10:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 11:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 12:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 13:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 14:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 15:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 16:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 17:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 18:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 19:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 20:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 21:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 22:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 23:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 24:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 25:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 26:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 27:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 28:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 29:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 30:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 31:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 32:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 33:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 34:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 35:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 36:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 37:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 38:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 39:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 40:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 41:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 42:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 43:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 44:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 45:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 46:
						func_306(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 47:
						func_306(sParam0, "PS_CAN_0", "PSD_CAN_0", 2750, 8, 2);
						break;
					
					case 48:
						func_306(sParam0, "PS_CAN_1", "PSD_CAN_1", 2750, 9, 2);
						break;
					
					case 49:
						func_306(sParam0, "PS_CAN_2", "PSD_CAN_2", 2750, 10, 2);
						break;
					
					case 50:
						func_306(sParam0, "PS_CAN_3", "PSD_CAN_3", 2750, 11, 2);
						break;
					
					case 51:
						func_306(sParam0, "PS_CAN_4", "PSD_CAN_4", 2750, 12, 2);
						break;
					
					case 52:
						func_306(sParam0, "PS_CAN_5", "PSD_CAN_5", 2750, 13, 2);
						break;
					
					case 53:
						func_306(sParam0, "PM_TINT5", "PD_TINT5", 250, 5, 2);
						break;
					
					case 54:
						func_306(sParam0, "PM_TINT1", "PD_TINT1", 500, 1, 2);
						break;
					
					case 55:
						func_306(sParam0, "PM_TINT2", "PD_TINT2", 1000, 2, 2);
						break;
					
					case 56:
						func_306(sParam0, "PM_TINT7", "PD_TINT7", 1250, 7, 2);
						break;
					
					case 57:
						func_306(sParam0, "PM_TINT4", "PD_TINT4", 1500, 4, 2);
						break;
					
					case 58:
						func_306(sParam0, "PM_TINT3", "PD_TINT3", 1750, 3, 2);
						break;
					
					case 59:
						func_306(sParam0, "PM_TINT0", "PD_TINT0", 2000, 0, 2);
						break;
					
					case 60:
						func_306(sParam0, "PM_TINT6", "PD_TINT6", 2500, 6, 2);
						break;
					
					case 61:
						func_306(sParam0, "PS_CAN_0", "PSD_CAN_0_R", 1375, 8, 3);
						break;
					
					case 62:
						func_306(sParam0, "PS_CAN_1", "PSD_CAN_1_R", 1375, 9, 3);
						break;
					
					case 63:
						func_306(sParam0, "PS_CAN_2", "PSD_CAN_2_R", 1375, 10, 3);
						break;
					
					case 64:
						func_306(sParam0, "PS_CAN_3", "PSD_CAN_3_R", 1375, 11, 3);
						break;
					
					case 65:
						func_306(sParam0, "PS_CAN_4", "PSD_CAN_4_R", 1375, 12, 3);
						break;
					
					case 66:
						func_306(sParam0, "PS_CAN_5", "PSD_CAN_5_R", 1375, 13, 3);
						break;
					
					case 67:
						func_306(sParam0, "PM_TINT5", "PD_TINT5_R", 125, 5, 3);
						break;
					
					case 68:
						func_306(sParam0, "PM_TINT1", "PD_TINT1_R", 250, 1, 3);
						break;
					
					case 69:
						func_306(sParam0, "PM_TINT2", "PD_TINT2_R", 500, 2, 3);
						break;
					
					case 70:
						func_306(sParam0, "PM_TINT7", "PD_TINT7_R", 625, 7, 3);
						break;
					
					case 71:
						func_306(sParam0, "PM_TINT4", "PD_TINT4_R", 750, 4, 3);
						break;
					
					case 72:
						func_306(sParam0, "PM_TINT3", "PD_TINT3_R", 875, 3, 3);
						break;
					
					case 73:
						func_306(sParam0, "PM_TINT0", "PD_TINT0_R", 1000, 0, 3);
						break;
					
					case 74:
						func_306(sParam0, "PM_TINT6", "PD_TINT6_R", 1250, 6, 3);
						break;
					
					case 75:
						func_306(sParam0, "PM_TINT8", "PD_TINT8", 100, 0, 4);
						break;
					
					case 76:
						func_306(sParam0, "PM_TINT9", "PD_TINT9", 14300, 1, 4);
						break;
					
					case 77:
						func_306(sParam0, "PM_TINT10", "PD_TINT10", 14475, 2, 4);
						break;
					
					case 78:
						func_306(sParam0, "PM_TINT11", "PD_TINT11", 14650, 3, 4);
						break;
					
					case joaat("mpsv_lp0_31"):
						func_306(sParam0, "PM_TINT12", "PD_TINT12", 14825, 4, 4);
						break;
					
					case 80:
						func_306(sParam0, "PM_TINT13", "PD_TINT13", 15000, 5, 4);
						break;
					}
			}
			break;
		
		default:
			if (iParam1 == -61829581)
			{
				switch (iParam2)
				{
					case 0:
						func_306(sParam0, "FW_TINT0", "FWD_TYPE1", Global_262145.f_6118, 0, 5);
						break;
					
					case 1:
						func_306(sParam0, "FW_TINT1", "FWD_TYPE1", Global_262145.f_6118, 1, 5);
						break;
					
					case 2:
						func_306(sParam0, "FW_TINT2", "FWD_TYPE1", Global_262145.f_6118, 2, 5);
						break;
					
					case 3:
						func_306(sParam0, "FW_TINT3", "FWD_TYPE2", Global_262145.f_6119, 3, 5);
						break;
					
					case 4:
						func_306(sParam0, "FW_TINT4", "FWD_TYPE2", Global_262145.f_6119, 4, 5);
						break;
					
					case 5:
						func_306(sParam0, "FW_TINT5", "FWD_TYPE2", Global_262145.f_6119, 5, 5);
						break;
					
					case 6:
						func_306(sParam0, "FW_TINT6", "FWD_TYPE3", Global_262145.f_6120, 6, 5);
						break;
					
					case 7:
						func_306(sParam0, "FW_TINT7", "FWD_TYPE3", Global_262145.f_6120, 7, 5);
						break;
					
					case 8:
						func_306(sParam0, "FW_TINT8", "FWD_TYPE3", Global_262145.f_6120, 8, 5);
						break;
					
					case 9:
						func_306(sParam0, "FW_TINT9", "FWD_TYPE4", Global_262145.f_6121, 9, 5);
						break;
					
					case 10:
						func_306(sParam0, "FW_TINT10", "FWD_TYPE4", Global_262145.f_6121, 10, 5);
						break;
					
					case 11:
						func_306(sParam0, "FW_TINT11", "FWD_TYPE4", Global_262145.f_6121, 11, 5);
						break;
				}
			}
			else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || GlobalFunc_221(iParam1, &uVar0) != -1)
			{
				switch (iParam2)
				{
					case 0:
						if ((iParam1 == joaat("weapon_musket") || iParam1 == joaat("weapon_flaregun")) || iParam1 == joaat("weapon_firework"))
						{
							func_306(sParam0, "WM_TINTDF", "", 500, 0, 0);
						}
						else
						{
							func_306(sParam0, "WM_TINT0", "", 500, 0, 0);
						}
						break;
					
					case 1:
						func_306(sParam0, "WM_TINT4", "", 5000, 4, 0);
						break;
					
					case 2:
						func_306(sParam0, "WM_TINT1", "", 5250, 1, 0);
						break;
					
					case 3:
						func_306(sParam0, "WM_TINT6", "", 5500, 6, 0);
						break;
					
					case 4:
						func_306(sParam0, "WM_TINT5", "", 5750, 5, 0);
						break;
					
					case 5:
						func_306(sParam0, "WM_TINT3", "", 7500, 3, 0);
						break;
					
					case 6:
						func_306(sParam0, "WM_TINT2", "", 10000, 2, 0);
						break;
					
					case 7:
						func_306(sParam0, "WM_TINT7", "", 12500, 7, 0);
						break;
					
					case 8:
						func_306(sParam0, "WM_TINT8", "", 15000, 8, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_306(sParam0, "WM_TINT0", "", 500, 0, 0);
						break;
					
					case 1:
						func_306(sParam0, "WM_TINT4", "", 100, 4, 0);
						break;
					
					case 2:
						func_306(sParam0, "WM_TINT1", "", 200, 1, 0);
						break;
					
					case 3:
						func_306(sParam0, "WM_TINT6", "", 400, 6, 0);
						break;
					
					case 4:
						func_306(sParam0, "WM_TINT5", "", 600, 5, 0);
						break;
					
					case 5:
						func_306(sParam0, "WM_TINT3", "", 800, 3, 0);
						break;
					
					case 6:
						func_306(sParam0, "WM_TINT2", "", 1000, 2, 0);
						break;
					
					case 7:
						func_306(sParam0, "WM_TINT7", "", 1500, 7, 0);
						break;
					
					case 8:
						func_306(sParam0, "WM_TINT8", "", 2000, 8, 0);
						break;
					}
			}
			break;
	}
	if (iParam3 && sParam0->f_8 != -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			switch (iParam1)
			{
				case joaat("gadget_parachute"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_7183;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_7185;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_7187;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_7184;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_7186;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_6392;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_6492;
							break;
						
						case 8:
							sParam0->f_8 = Global_262145.f_6387;
							break;
						
						case 9:
							sParam0->f_8 = Global_262145.f_6490;
							break;
						
						case 10:
							sParam0->f_8 = Global_262145.f_6488;
							break;
						
						case 11:
							sParam0->f_8 = Global_262145.f_6389;
							break;
						
						case 12:
							sParam0->f_8 = Global_262145.f_6383;
							break;
						
						case 13:
							sParam0->f_8 = Global_262145.f_6666;
							break;
						
						case 14:
							sParam0->f_8 = Global_262145.f_6485;
							break;
						
						case 15:
							sParam0->f_8 = Global_262145.f_6667;
							break;
						
						case 16:
							sParam0->f_8 = Global_262145.f_6668;
							break;
						
						case 17:
							sParam0->f_8 = Global_262145.f_6663;
							break;
						
						case 18:
							sParam0->f_8 = Global_262145.f_6496;
							break;
						
						case 19:
							sParam0->f_8 = Global_262145.f_6662;
							break;
						
						case 20:
							sParam0->f_8 = Global_262145.f_6384;
							break;
						
						case 21:
							sParam0->f_8 = Global_262145.f_6385;
							break;
						
						case 22:
							sParam0->f_8 = Global_262145.f_6669;
							break;
						
						case 23:
							sParam0->f_8 = Global_262145.f_6494;
							break;
						
						case 24:
							sParam0->f_8 = Global_262145.f_6681;
							break;
						
						case 25:
							sParam0->f_8 = Global_262145.f_6482;
							break;
						
						case 26:
							sParam0->f_8 = Global_262145.f_6484;
							break;
						
						case 27:
							sParam0->f_8 = Global_262145.f_6388;
							break;
						
						case 28:
							sParam0->f_8 = Global_262145.f_6670;
							break;
						
						case 29:
							sParam0->f_8 = Global_262145.f_6671;
							break;
						
						case 30:
							sParam0->f_8 = Global_262145.f_6489;
							break;
						
						case 31:
							sParam0->f_8 = Global_262145.f_6664;
							break;
						
						case 32:
							sParam0->f_8 = Global_262145.f_6672;
							break;
						
						case 33:
							sParam0->f_8 = Global_262145.f_6673;
							break;
						
						case 34:
							sParam0->f_8 = Global_262145.f_6486;
							break;
						
						case 35:
							sParam0->f_8 = Global_262145.f_6680;
							break;
						
						case 36:
							sParam0->f_8 = Global_262145.f_6674;
							break;
						
						case 37:
							sParam0->f_8 = Global_262145.f_6665;
							break;
						
						case 38:
							sParam0->f_8 = Global_262145.f_6675;
							break;
						
						case 39:
							sParam0->f_8 = Global_262145.f_6491;
							break;
						
						case 40:
							sParam0->f_8 = Global_262145.f_6382;
							break;
						
						case 41:
							sParam0->f_8 = Global_262145.f_6676;
							break;
						
						case 42:
							sParam0->f_8 = Global_262145.f_6677;
							break;
						
						case 43:
							sParam0->f_8 = Global_262145.f_6678;
							break;
						
						case 44:
							sParam0->f_8 = Global_262145.f_6679;
							break;
						
						case 45:
							sParam0->f_8 = Global_262145.f_6386;
							break;
						
						case 46:
							sParam0->f_8 = Global_262145.f_6487;
							break;
						
						case 47:
							sParam0->f_8 = Global_262145.f_6483;
							break;
						
						case 48:
							sParam0->f_8 = Global_262145.f_6493;
							break;
						
						case 49:
							sParam0->f_8 = Global_262145.f_6381;
							break;
						
						case 50:
							sParam0->f_8 = Global_262145.f_6380;
							break;
						
						case 51:
							sParam0->f_8 = Global_262145.f_6495;
							break;
						
						case 52:
							sParam0->f_8 = Global_262145.f_6374;
							break;
						
						case 53:
							sParam0->f_8 = Global_262145.f_6375;
							break;
						
						case 54:
							sParam0->f_8 = Global_262145.f_6376;
							break;
						
						case 55:
							sParam0->f_8 = Global_262145.f_6377;
							break;
						
						case 56:
							sParam0->f_8 = Global_262145.f_6378;
							break;
						
						case 57:
							sParam0->f_8 = Global_262145.f_6379;
							break;
						
						case 58:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2646));
							break;
						
						case 59:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2642));
							break;
						
						case 60:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2643));
							break;
						
						case 61:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2648));
							break;
						
						case 62:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2645));
							break;
						
						case 63:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2644));
							break;
						
						case 64:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2641));
							break;
						
						case 65:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2647));
							break;
						
						case 66:
							sParam0->f_8 = (Global_262145.f_6374 / 2);
							break;
						
						case 67:
							sParam0->f_8 = (Global_262145.f_6375 / 2);
							break;
						
						case 68:
							sParam0->f_8 = (Global_262145.f_6376 / 2);
							break;
						
						case 69:
							sParam0->f_8 = (Global_262145.f_6377 / 2);
							break;
						
						case 70:
							sParam0->f_8 = (Global_262145.f_6378 / 2);
							break;
						
						case 71:
							sParam0->f_8 = (Global_262145.f_6379 / 2);
							break;
						
						case 72:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2646));
							break;
						
						case 73:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2642));
							break;
						
						case 74:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2643));
							break;
						
						case 75:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2648));
							break;
						
						case 76:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2645));
							break;
						
						case 77:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2644));
							break;
						
						case 78:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2641));
							break;
						
						case joaat("mpsv_lp0_31"):
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2647));
							break;
						
						case 80:
							break;
						
						case 81:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2635));
							break;
						
						case 82:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2636));
							break;
						
						case 83:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2637));
							break;
						
						case 84:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2640));
							break;
						
						case 85:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2639));
							break;
						
						case 86:
							break;
						
						case 87:
							sParam0->f_8 = Global_262145.f_6143;
							break;
					}
					break;
				
				case joaat("weapon_assaultsmg"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_5544;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_5545;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_5546;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_5547;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_5548;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_5549;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_5550;
							break;
					}
					break;
				
				case joaat("weapon_snspistol"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_5401;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_5402;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_5403;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_5404;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_5405;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_5399;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_5400;
							break;
					}
					break;
				
				case joaat("weapon_specialcarbine"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_5408;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_5409;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_5410;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_5411;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_5412;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_5406;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_5407;
							break;
					}
					break;
				
				case joaat("weapon_heavypistol"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_5415;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_5416;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_5417;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_5418;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_5419;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_5413;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_5414;
							break;
					}
					break;
				
				case joaat("weapon_bullpuprifle"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_5422;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_5423;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_5424;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_5425;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_5426;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_5420;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_5421;
							break;
					}
					break;
				
				case joaat("weapon_vintagepistol"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_6685;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_6686;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_6687;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_6688;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_6689;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_6683;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_6684;
							break;
					}
					break;
				
				case joaat("weapon_heavyshotgun"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_6699;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_6700;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_6701;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_6702;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_6703;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_6697;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_6698;
							break;
					}
					break;
				
				case joaat("weapon_marksmanrifle"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_6692;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_6693;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_6694;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_6695;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_6696;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_6690;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_6691;
							break;
					}
					break;
				
				case joaat("weapon_pistol"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2689));
							break;
						
						case 2:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2709));
							break;
						
						case 3:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2729));
							break;
						
						case 4:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2749));
							break;
						
						case 5:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2769));
							break;
						
						case 6:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2649));
							break;
						
						case 7:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2669));
							break;
					}
					break;
				
				case joaat("weapon_combatpistol"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2690));
							break;
						
						case 2:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2710));
							break;
						
						case 3:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2730));
							break;
						
						case 4:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2750));
							break;
						
						case 5:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2770));
							break;
						
						case 6:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2650));
							break;
						
						case 7:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2670));
							break;
					}
					break;
				
				case joaat("weapon_appistol"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2691));
							break;
						
						case 2:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2711));
							break;
						
						case 3:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2731));
							break;
						
						case 4:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2751));
							break;
						
						case 5:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2771));
							break;
						
						case 6:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2651));
							break;
						
						case 7:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2671));
							break;
					}
					break;
				
				case joaat("weapon_microsmg"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2692));
							break;
						
						case 2:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2712));
							break;
						
						case 3:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2732));
							break;
						
						case 4:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2752));
							break;
						
						case 5:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2772));
							break;
						
						case 6:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2652));
							break;
						
						case 7:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2672));
							break;
					}
					break;
				
				case joaat("weapon_smg"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2693));
							break;
						
						case 2:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2713));
							break;
						
						case 3:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2733));
							break;
						
						case 4:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2753));
							break;
						
						case 5:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2773));
							break;
						
						case 6:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2653));
							break;
						
						case 7:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2673));
							break;
					}
					break;
				
				case joaat("weapon_assaultrifle"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2692));
							break;
						
						case 2:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2712));
							break;
						
						case 3:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2732));
							break;
						
						case 4:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2752));
							break;
						
						case 5:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2772));
							break;
						
						case 6:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2652));
							break;
						
						case 7:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2672));
							break;
					}
					break;
				
				case joaat("weapon_carbinerifle"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2695));
							break;
						
						case 2:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2715));
							break;
						
						case 3:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2735));
							break;
						
						case 4:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2755));
							break;
						
						case 5:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2775));
							break;
						
						case 6:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2655));
							break;
						
						case 7:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2675));
							break;
					}
					break;
				
				case joaat("weapon_advancedrifle"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2696));
							break;
						
						case 2:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2716));
							break;
						
						case 3:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2736));
							break;
						
						case 4:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2756));
							break;
						
						case 5:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2776));
							break;
						
						case 6:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2656));
							break;
						
						case 7:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2676));
							break;
					}
					break;
				
				case joaat("weapon_mg"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2697));
							break;
						
						case 2:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2717));
							break;
						
						case 3:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2737));
							break;
						
						case 4:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2757));
							break;
						
						case 5:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2777));
							break;
						
						case 6:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2657));
							break;
						
						case 7:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2677));
							break;
					}
					break;
				
				case joaat("weapon_combatmg"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2698));
							break;
						
						case 2:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2718));
							break;
						
						case 3:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2738));
							break;
						
						case 4:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2758));
							break;
						
						case 5:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2778));
							break;
						
						case 6:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2658));
							break;
						
						case 7:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2678));
							break;
					}
					break;
				
				case joaat("weapon_pumpshotgun"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2699));
							break;
						
						case 2:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2719));
							break;
						
						case 3:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2739));
							break;
						
						case 4:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2759));
							break;
						
						case 5:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2779));
							break;
						
						case 6:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2659));
							break;
						
						case 7:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2679));
							break;
					}
					break;
				
				case joaat("weapon_sawnoffshotgun"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2700));
							break;
						
						case 2:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2720));
							break;
						
						case 3:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2740));
							break;
						
						case 4:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2760));
							break;
						
						case 5:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2780));
							break;
						
						case 6:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2660));
							break;
						
						case 7:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2680));
							break;
					}
					break;
				
				case joaat("weapon_assaultshotgun"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2701));
							break;
						
						case 2:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2721));
							break;
						
						case 3:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2741));
							break;
						
						case 4:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2761));
							break;
						
						case 5:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2781));
							break;
						
						case 6:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2661));
							break;
						
						case 7:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2681));
							break;
					}
					break;
				
				case joaat("weapon_stungun"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2703));
							break;
						
						case 2:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2723));
							break;
						
						case 3:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2743));
							break;
						
						case 4:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2763));
							break;
						
						case 5:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2783));
							break;
						
						case 6:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2663));
							break;
						
						case 7:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2683));
							break;
					}
					break;
				
				case joaat("weapon_sniperrifle"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2704));
							break;
						
						case 2:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2724));
							break;
						
						case 3:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2744));
							break;
						
						case 4:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2764));
							break;
						
						case 5:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2784));
							break;
						
						case 6:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2664));
							break;
						
						case 7:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2684));
							break;
					}
					break;
				
				case joaat("weapon_heavysniper"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2705));
							break;
						
						case 2:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2725));
							break;
						
						case 3:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2745));
							break;
						
						case 4:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2765));
							break;
						
						case 5:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2785));
							break;
						
						case 6:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2665));
							break;
						
						case 7:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2685));
							break;
					}
					break;
				
				case joaat("weapon_grenadelauncher"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2706));
							break;
						
						case 2:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2726));
							break;
						
						case 3:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2746));
							break;
						
						case 4:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2766));
							break;
						
						case 5:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2786));
							break;
						
						case 6:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2666));
							break;
						
						case 7:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2686));
							break;
					}
					break;
				
				case joaat("weapon_rpg"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2707));
							break;
						
						case 2:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2727));
							break;
						
						case 3:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2747));
							break;
						
						case 4:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2767));
							break;
						
						case 5:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2787));
							break;
						
						case 6:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2667));
							break;
						
						case 7:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2687));
							break;
					}
					break;
				
				case joaat("weapon_minigun"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2708));
							break;
						
						case 2:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2728));
							break;
						
						case 3:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2748));
							break;
						
						case 4:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2768));
							break;
						
						case 5:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2788));
							break;
						
						case 6:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2668));
							break;
						
						case 7:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_2688));
							break;
					}
					break;
				
				default:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_4363));
							break;
						
						case 2:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_4366));
							break;
						
						case 3:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_4362));
							break;
						
						case 4:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_4364));
							break;
						
						case 5:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_4367));
							break;
						
						case 6:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_4368));
							break;
						
						case 7:
							sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_262145.f_4365));
					}
					break;
			}
			sParam0->f_8 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(sParam0->f_8) * Global_270421.f_8));
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GlobalFunc_4979())
		{
			iVar55 = 2;
			if (iParam1 == joaat("gadget_parachute"))
			{
				iVar55 = sParam0->f_10;
			}
			GlobalFunc_215(&sVar39, *sParam0, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 3, iVar55, GlobalFunc_4977(iParam1), -1, -1);
			if (NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&sVar39))
			{
				sParam0->f_8 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(MISC::GET_HASH_KEY(&sVar39), 1671640801, 1);
			}
		}
		if (GlobalFunc_84() && (GlobalFunc_220() || GlobalFunc_219()))
		{
			if (iParam1 == joaat("weapon_pistol50") || iParam1 == joaat("weapon_bullpupshotgun"))
			{
				sParam0->f_8 = 0;
			}
		}
		fVar56 = func_238(iParam1, &(sParam0->f_8));
		if (fVar56 != 1f)
		{
		}
	}
	return sParam0->f_8 != -1;
}

void func_306(char* sParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x261D8
{
	StringCopy(sParam0, sParam1, 16);
	StringCopy(&(sParam0->f_4), sParam2, 16);
	sParam0->f_8 = iParam3;
	sParam0->f_9 = iParam4;
	sParam0->f_10 = iParam5;
}

int func_307(int iParam0, int iParam1)//Position - 0x26200
{
	if (iParam0 == joaat("gadget_parachute"))
	{
		return iParam1;
	}
	if (iParam0 == -61829581)
	{
		return iParam1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return iParam1;
	}
	else if (GlobalFunc_82() || GlobalFunc_82())
	{
		return iParam1;
	}
	else if (iParam1 == 0)
	{
		return 0;
	}
	else if (iParam1 == 1)
	{
		return 1;
	}
	else if (iParam1 == 2)
	{
		return 4;
	}
	return -1;
}



int func_310(int iParam0)//Position - 0x26339
{
	switch (iParam0)
	{
		case joaat("weapon_assaultrifle"):
			return joaat("component_assaultrifle_varmod_luxe");
		
		case joaat("weapon_advancedrifle"):
			return joaat("component_advancedrifle_varmod_luxe");
		
		case joaat("weapon_carbinerifle"):
			return joaat("component_carbinerifle_varmod_luxe");
		
		case joaat("weapon_appistol"):
			return joaat("component_appistol_varmod_luxe");
		
		case joaat("weapon_pistol"):
			return joaat("component_pistol_varmod_luxe");
		
		case joaat("weapon_pistol50"):
			return joaat("component_pistol50_varmod_luxe");
		
		case joaat("weapon_heavypistol"):
			return joaat("component_heavypistol_varmod_luxe");
		
		case joaat("weapon_smg"):
			return joaat("component_smg_varmod_luxe");
		
		case joaat("weapon_microsmg"):
			return joaat("component_microsmg_varmod_luxe");
		
		case joaat("weapon_sawnoffshotgun"):
			return joaat("component_sawnoffshotgun_varmod_luxe");
		
		case joaat("weapon_sniperrifle"):
			return joaat("component_sniperrifle_varmod_luxe");
		
		case joaat("weapon_marksmanrifle"):
			return joaat("component_marksmanrifle_varmod_luxe");
		
		default:
	}
	return 0;
}

int func_311(int iParam0)//Position - 0x263F1
{
	if (((((((((((iParam0 == joaat("weapon_assaultrifle") || iParam0 == joaat("weapon_advancedrifle")) || iParam0 == joaat("weapon_carbinerifle")) || iParam0 == joaat("weapon_appistol")) || iParam0 == joaat("weapon_pistol")) || iParam0 == joaat("weapon_pistol50")) || iParam0 == joaat("weapon_heavypistol")) || iParam0 == joaat("weapon_smg")) || iParam0 == joaat("weapon_microsmg")) || iParam0 == joaat("weapon_sawnoffshotgun")) || iParam0 == joaat("weapon_sniperrifle")) || iParam0 == joaat("weapon_marksmanrifle"))
	{
		return 1;
	}
	return 0;
}

int func_312()//Position - 0x264A3
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	PLAYER::GET_PLAYER_PARACHUTE_SMOKE_TRAIL_COLOR(PLAYER::PLAYER_ID(), &iVar0, &iVar1, &iVar2);
	if ((iVar0 == 255 && iVar1 == 255) && iVar2 == 255)
	{
		return 0;
	}
	else if ((iVar0 == 255 && iVar1 == 0) && iVar2 == 0)
	{
		return 1;
	}
	else if ((iVar0 == 255 && iVar1 == 165) && iVar2 == 0)
	{
		return 2;
	}
	else if ((iVar0 == 255 && iVar1 == 255) && iVar2 == 0)
	{
		return 3;
	}
	else if ((iVar0 == 0 && iVar1 == 0) && iVar2 == 255)
	{
		return 4;
	}
	else if ((iVar0 == 20 && iVar1 == 20) && iVar2 == 20)
	{
		return 5;
	}
	else if (((((iVar0 == Global_1317060 && iVar1 == Global_1317061) && iVar2 == Global_1317062) && Global_1317059) && GlobalFunc_5449()) && GlobalFunc_8858(6))
	{
		return 6;
	}
	else if ((iVar0 == 0 && iVar1 == 0) && iVar2 == 0)
	{
		return 7;
	}
	return 0;
}

int func_313(int iParam0, int iParam1)//Position - 0x265E8
{
	int iVar0;
	
	*iParam1 = -1;
	iVar0 = 0;
	while (func_305(&Local_1222, iParam0, func_307(iParam0, iVar0), 1))
	{
		if (func_314(iParam0, Local_1222.f_9, Local_1222.f_10))
		{
			*iParam1 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_314(int iParam0, int iParam1, int iParam2)//Position - 0x26632
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam0 == -61829581)
	{
		return 1;
	}
	if (iParam0 == joaat("gadget_parachute"))
	{
		if (!bLocal_1203)
		{
			if ((((iLocal_1204 == 0 && iParam2 != 2) || (iLocal_1204 == 1 && iParam2 != 3)) || (iLocal_1204 == 2 && iParam2 != 4)) || (iLocal_1204 == 3 && iParam2 != 1))
			{
				return 0;
			}
		}
		if (iParam2 == 4 && iParam1 == 7)
		{
			if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !GlobalFunc_321()) || (!Global_262145.f_6114 && !GlobalFunc_6708(3602, -1, -1)))
			{
				return 0;
			}
		}
		if (iParam2 == 1 && iParam1 == 13)
		{
			if (!GlobalFunc_6708(3609, -1, -1))
			{
				return 0;
			}
		}
		if (iParam2 == 2 || iParam2 == 3)
		{
			if (iParam1 >= 8)
			{
				if (!GlobalFunc_280())
				{
					return 0;
				}
			}
		}
		if (iParam2 == 1)
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				return 0;
			}
			if (iParam1 >= 27)
			{
				if (!GlobalFunc_281())
				{
					return 0;
				}
			}
			else if (!GlobalFunc_280())
			{
				return 0;
			}
		}
		return 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (iParam1 >= 0 && iParam1 < WEAPON::GET_WEAPON_TINT_COUNT(iParam0))
		{
			return 1;
		}
	}
	else if (GlobalFunc_82() || GlobalFunc_82())
	{
		if (iParam1 >= 0 && iParam1 < WEAPON::GET_WEAPON_TINT_COUNT(iParam0))
		{
			return 1;
		}
	}
	else if (iParam1 >= 0 && iParam1 < WEAPON::GET_WEAPON_TINT_COUNT(iParam0))
	{
		if ((iParam1 == 0 || iParam1 == 4) || iParam1 == 5)
		{
			return 1;
		}
	}
	return 0;
}



int func_317(int iParam0, int iParam1)//Position - 0x2681D
{
	int iVar0;
	
	*iParam1 = -1;
	iVar0 = 0;
	while (func_164(&Local_1216, iParam0, iVar0, 1))
	{
		if (Local_1216.f_2 != -1)
		{
			*iParam1 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_318()//Position - 0x26857
{
	bool bVar0;
	int iVar1;
	struct<3> Var2;
	bool bVar9;
	int iVar10;
	
	if (GlobalFunc_5785(1))
	{
		bVar0 = false;
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), uLocal_1034[0]))
			{
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(3500, 5000);
				uLocal_1034[0] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iVar1);
				bVar0 = true;
			}
		}
		else if ((MISC::GET_GAME_TIMER() - iLocal_1037[0]) > 0)
		{
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(3500, 5000);
			iLocal_1037[0] = (MISC::GET_GAME_TIMER() + iVar1);
			bVar0 = true;
		}
		if (bVar0)
		{
			func_320(Local_168, &Var2, MISC::GET_RANDOM_INT_IN_RANGE(0, 10));
			TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Var2 + Vector(MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.05f), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.05f), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.05f)), iVar1 + 1000, 1, 2);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_168.f_12) && !PED::IS_PED_INJURED(Local_168.f_12))
	{
		if (iLocal_1041)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 500), uLocal_1034[1]))
				{
					uLocal_1034[1] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), MISC::GET_RANDOM_INT_IN_RANGE(400, 600));
				}
			}
			else if (MISC::GET_GAME_TIMER() + 500 < iLocal_1037[1])
			{
				iLocal_1037[1] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(400, 600));
			}
			iLocal_1041 = 0;
		}
		bVar9 = false;
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), uLocal_1034[1]))
			{
				iVar10 = MISC::GET_RANDOM_INT_IN_RANGE(9000, 12000);
				uLocal_1034[1] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iVar10);
				bVar9 = true;
			}
		}
		else if ((MISC::GET_GAME_TIMER() - iLocal_1037[1]) > 0)
		{
			iVar10 = MISC::GET_RANDOM_INT_IN_RANGE(9000, 12000);
			iLocal_1037[1] = (MISC::GET_GAME_TIMER() + iVar10);
			bVar9 = true;
		}
		if (bVar9)
		{
			if (iLocal_1040 > 0 && !GlobalFunc_100(Local_1042, 0f, 0f, 0f))
			{
				if (func_319(0))
				{
					TASK::TASK_LOOK_AT_COORD(Local_168.f_12, Local_1042, iVar10 + 1000, 1, 2);
					iLocal_1040 = 0;
				}
			}
			else if (func_319(0))
			{
				TASK::TASK_LOOK_AT_COORD(Local_168.f_12, CAM::GET_FINAL_RENDERED_CAM_COORD(), iVar10 + 1000, 1, 2);
				iLocal_1040++;
			}
		}
	}
}

int func_319(bool bParam0)//Position - 0x26A64
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_90))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_90))
			{
				return 1;
			}
			else if (bParam0)
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_90);
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_320(int iParam0, var uParam1, int iParam2)//Position - 0x26AA0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_321(uParam1, "WEAP_GROUP", 0f, 0f, 0f);
	iVar0 = MISC::GET_HASH_KEY("v_gun");
	iVar1 = MISC::GET_HASH_KEY("v_gun2");
	iVar2 = MISC::GET_HASH_KEY(GlobalFunc_2464(iParam0));
	if (iVar2 == iVar0)
	{
		switch (iParam2)
		{
			case 0:
				func_321(uParam1, "WEAP_EX", 19.73f, -1103.07f, 31.28f);
				break;
			
			case 1:
				func_321(uParam1, "WEAP_SMG", 19.56f, -1103.01f, 30.6f);
				break;
			
			case 2:
				func_321(uParam1, "WEAP_SG", 20.65f, -1103.41f, 30.88f);
				break;
			
			case 3:
				func_321(uParam1, "WEAP_AR", 21.71f, -1103.8f, 30.89f);
				break;
			
			case 4:
				func_321(uParam1, "WEAP_SR", 22.83f, -1104.21f, 30.68f);
				break;
			
			case 5:
				func_321(uParam1, "WEAP_LMG", 24.21f, -1104.71f, 30.85f);
				break;
			
			case 6:
				func_321(uParam1, "WEAP_S", 25.54f, -1105.19f, 30.87f);
				break;
			
			case 7:
				func_321(uParam1, "WEAP_K", 20.12f, -1105.39f, 29.52f);
				break;
			
			case 8:
				func_321(uParam1, "WEAP_HG", 22.1f, -1106.02f, 29.52f);
				break;
			
			case 9:
				func_321(uParam1, "WEAP_T", 23.1f, -1107.91f, 29.52f);
				break;
			
			case 10:
				func_321(uParam1, "WEAP_P", 23.24f, -1109.05f, 29.61f);
				break;
			
			case 11:
				func_321(uParam1, "WEAP_DLC1", 25.86f, -1106.09f, 30.79f);
				break;
			
			case 12:
				func_321(uParam1, "WEAP_DLC1", 25.27f, -1107.15f, 30.79f);
				break;
			
			case 13:
				func_321(uParam1, "WEAP_DLC1", 24.7f, -1108.16f, 30.79f);
				break;
			
			case 14:
				func_321(uParam1, "WEAP_DLC1", 24.14f, -1109.15f, 30.79f);
				break;
			
			case 15:
				func_321(uParam1, "WEAP_EX", 16.28f, -1109.51f, 30.32f);
				break;
		}
	}
	else if (iVar2 == iVar1)
	{
		switch (iParam2)
		{
			case 0:
				func_321(uParam1, "WEAP_EX", 1688.93f, 3759.28f, 36.21f);
				break;
			
			case 1:
				func_321(uParam1, "WEAP_SMG", 1688.81f, 3759.15f, 35.52f);
				break;
			
			case 2:
				func_321(uParam1, "WEAP_SG", 1689.59f, 3759.99f, 35.8f);
				break;
			
			case 3:
				func_321(uParam1, "WEAP_AR", 1690.33f, 3760.8f, 35.78f);
				break;
			
			case 4:
				func_321(uParam1, "WEAP_SR", 1691.17f, 3761.71f, 35.61f);
				break;
			
			case 5:
				func_321(uParam1, "WEAP_LMG", 1692.14f, 3762.77f, 35.81f);
				break;
			
			case 6:
				func_321(uParam1, "WEAP_S", 1693.12f, 3763.84f, 35.83f);
				break;
			
			case 7:
				func_321(uParam1, "WEAP_K", 1691.01f, 3758.37f, 34.43f);
				break;
			
			case 8:
				func_321(uParam1, "WEAP_HG", 1692.58f, 3760.34f, 34.43f);
				break;
			
			case 9:
				func_321(uParam1, "WEAP_T", 1694.65f, 3760.45f, 34.43f);
				break;
			
			case 10:
				func_321(uParam1, "WEAP_P", 1695.65f, 3759.79f, 34.43f);
				break;
			
			case 11:
				func_321(uParam1, "WEAP_DLC1", 1694.07f, 3763.93f, 35.77f);
				break;
			
			case 12:
				func_321(uParam1, "WEAP_DLC1", 1694.88f, 3763.19f, 35.77f);
				break;
			
			case 13:
				func_321(uParam1, "WEAP_DLC1", 1695.77f, 3762.38f, 35.77f);
				break;
			
			case 14:
				func_321(uParam1, "WEAP_DLC1", 1696.65f, 3761.56f, 35.77f);
				break;
			
			case 15:
				func_321(uParam1, "WEAP_EX", 1693.5f, 3753.65f, 35.21f);
				break;
			}
	}
	if (iVar2 == iVar0)
	{
		iVar3 = 28;
	}
	else if (iVar2 == iVar1)
	{
		iVar3 = 29;
	}
	GlobalFunc_7133(iVar3, iParam0, uParam1);
}

void func_321(var uParam0, char* sParam1, struct<3> Param2)//Position - 0x26F55
{
	*uParam0 = { Param2 };
	StringCopy(&(uParam0->f_3), sParam1, 16);
}

void func_322()//Position - 0x26F6D
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var4;
	float fVar7;
	struct<3> Var8;
	float fVar11;
	struct<3> Var12;
	float fVar15;
	
	if (CAM::DOES_CAM_EXIST(Local_168.f_38[Local_168.f_103.f_4 /*12*/]))
	{
		Var1 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
		Var4 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
		fVar7 = CAM::GET_FINAL_RENDERED_CAM_FOV();
		Var8 = { Var1 + Local_168.f_38[Local_168.f_103.f_4 /*12*/].f_1 - Var1 * Vector(0.2f, 0.2f, 0.2f) };
		fVar11 = (fVar7 + ((Local_168.f_38[Local_168.f_103.f_4 /*12*/].f_7 - fVar7) * 0.2f));
		if (bLocal_1205)
		{
			Var8 = { Var1 + Local_168.f_170.f_42 - Var1 * Vector(0.2f, 0.2f, 0.2f) };
			fVar15 = (Local_168.f_170.f_45.f_2 - Var4.f_2);
			while (fVar15 < -180f)
			{
				fVar15 = (fVar15 + 360f);
			}
			while (fVar15 > 180f)
			{
				fVar15 = (fVar15 - 360f);
			}
			Var12.x = (Var4.x + ((Local_168.f_170.f_45 - Var4.x) * 0.2f));
			Var12.f_1 = (Var4.f_1 + ((Local_168.f_170.f_45.f_1 - Var4.f_1) * 0.2f));
			Var12.f_2 = (Var4.f_2 + (fVar15 * 0.2f));
		}
		else
		{
			fVar15 = (Local_168.f_38[Local_168.f_103.f_4 /*12*/].f_4.f_2 - Var4.f_2);
			while (fVar15 < -180f)
			{
				fVar15 = (fVar15 + 360f);
			}
			while (fVar15 > 180f)
			{
				fVar15 = (fVar15 - 360f);
			}
			Var12.x = (Var4.x + ((Local_168.f_38[Local_168.f_103.f_4 /*12*/].f_4 - Var4.x) * 0.2f));
			Var12.f_1 = (Var4.f_1 + ((Local_168.f_38[Local_168.f_103.f_4 /*12*/].f_4.f_1 - Var4.f_1) * 0.2f));
			Var12.f_2 = (Var4.f_2 + (fVar15 * 0.2f));
		}
		if ((((PAD::_IS_USING_KEYBOARD(2) && Local_168.f_103.f_3 != 15) && iLocal_1207 == 0) && iLocal_1019 == 0) && Local_168.f_103.f_5 == 0)
		{
			if (iLocal_1215 == 0)
			{
				if (Global_2543375 > (1f - 0.05f))
				{
					iLocal_1208 = 1;
					fVar15 = ((0.05f - (1f - Global_2543375)) * -30f);
					HUD::_SET_MOUSE_CURSOR_SPRITE(7);
				}
				else if (Global_2543375 < 0.05f)
				{
					iLocal_1208 = 1;
					fVar15 = ((0.05f - Global_2543375) * 30f);
					HUD::_SET_MOUSE_CURSOR_SPRITE(6);
				}
				else if (iLocal_1208)
				{
					fVar15 = 0f;
				}
				if (Global_2543376 > (1f - 0.03f))
				{
					iLocal_1208 = 1;
					fVar0 = ((0.03f - (1f - Global_2543376)) * -30f);
					HUD::_SET_MOUSE_CURSOR_SPRITE(9);
				}
				else if (Global_2543376 < 0.03f)
				{
					iLocal_1208 = 1;
					fVar0 = ((0.03f - Global_2543376) * 30f);
					HUD::_SET_MOUSE_CURSOR_SPRITE(8);
				}
				else if (iLocal_1208)
				{
					fVar0 = 0f;
				}
			}
			else if (((!Global_2543375 > (1f - 0.05f) && !Global_2543375 < 0.05f) && !Global_2543376 > (1f - 0.03f)) && !Global_2543376 < 0.03f)
			{
				iLocal_1215 = 0;
			}
		}
		else
		{
			iLocal_1208 = 0;
		}
		if (iLocal_1208 && MISC::IS_PC_VERSION())
		{
			Var12.x = GlobalFunc_253((Var4.x + fVar0), -9.2f, 12.7f);
			Var12.f_1 = (Var4.f_1 + ((Local_168.f_38[Local_168.f_103.f_4 /*12*/].f_4.f_1 - Var4.f_1) * 0.2f));
			if (fLocal_1210 < -80f)
			{
				Var12.f_2 = (Var4.f_2 + fVar15);
				if (Var12.f_2 < 0f && Var12.f_2 > fLocal_1210)
				{
					Var12.f_2 = fLocal_1210;
				}
				else if (Var12.f_2 > 0f && Var12.f_2 < fLocal_1211)
				{
					Var12.f_2 = fLocal_1211;
				}
			}
			else if (fLocal_1210 > fLocal_1211)
			{
				Var12.f_2 = GlobalFunc_253((Var4.f_2 + fVar15), fLocal_1211, fLocal_1210);
			}
			else
			{
				Var12.f_2 = GlobalFunc_253((Var4.f_2 + fVar15), fLocal_1210, fLocal_1211);
			}
		}
		else
		{
			Var12.x = (Var4.x + ((Local_168.f_38[Local_168.f_103.f_4 /*12*/].f_4 - Var4.x) * 0.2f));
			Var12.f_1 = (Var4.f_1 + ((Local_168.f_38[Local_168.f_103.f_4 /*12*/].f_4.f_1 - Var4.f_1) * 0.2f));
			Var12.f_2 = (Var4.f_2 + (fVar15 * 0.2f));
		}
		CAM::SET_CAM_COORD(Local_168.f_38[Local_168.f_103.f_4 /*12*/], Var8);
		CAM::SET_CAM_ROT(Local_168.f_38[Local_168.f_103.f_4 /*12*/], Var12, 2);
		CAM::SET_CAM_FOV(Local_168.f_38[Local_168.f_103.f_4 /*12*/], fVar11);
	}
}


void func_324()//Position - 0x27400
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<25> Var6;
	int iVar32;
	bool bVar33;
	struct<3> Var34;
	struct<3> Var37;
	float fVar40;
	struct<5> Var41;
	struct<3> Var47;
	struct<3> Var50;
	
	iVar0 = 1;
	iVar5 = -1;
	if (Local_168.f_103.f_3 != -1 && Local_168.f_103.f_1 != -1)
	{
		iVar5 = (Local_168.f_103.f_3 * 6 + Local_168.f_103.f_1);
		if (!MISC::IS_BIT_SET(Local_168.f_218.f_97[(iVar5 / 32)], (iVar5 % 32)))
		{
			MISC::SET_BIT(&(Local_168.f_218.f_97[(iVar5 / 32)]), (iVar5 % 32));
			iLocal_1101[iLocal_1198] = iVar5;
			iLocal_1198++;
		}
	}
	iVar32 = iLocal_1198;
	iLocal_1198 = 0;
	fVar40 = 0.6f;
	iVar4 = 0;
	while (iVar4 < iVar32)
	{
		iVar3 = iLocal_1101[iVar4];
		bVar33 = true;
		iVar1 = (iVar3 / 6);
		iVar2 = (iVar3 % 6);
		if (ENTITY::DOES_ENTITY_EXIST(Local_168.f_218[iVar3]))
		{
			if (func_84(Local_168, &Global_2543149, &Var6, iVar1, iVar2, 0))
			{
				func_340(&(Local_168.f_218[iVar3]), &(Local_168.f_218.f_102[iVar3 /*3*/]), &bVar33, &Var6, iVar5 == iVar3);
				if (iVar5 == iVar3)
				{
					func_327(&(Local_168.f_218[iVar3]), &Var6);
					if (func_164(&Var41, Var6, (Local_168.f_103.f_2 - 1), 0))
					{
						if ((Var41.f_4 == -1441477783 && !iLocal_1199) && Local_168.f_103.f_2 < 21)
						{
							iLocal_1199 = 1;
							Var37 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var6.f_1, Var6.f_4.f_2, Var6.f_7) };
							Var34 = { Local_168.f_38[Local_168.f_103.f_4 /*12*/].f_1 };
							Local_168.f_38[Local_168.f_103.f_4 /*12*/].f_1 = { Local_168.f_38[Local_168.f_103.f_4 /*12*/].f_1 + Var37 - Var34 * Vector(fVar40, fVar40, fVar40) };
						}
						else if (Var41.f_4 != -1441477783)
						{
							if (iLocal_1199)
							{
								iLocal_1199 = 0;
								Local_168.f_103.f_17 = 0;
							}
						}
					}
					else if (iLocal_1199)
					{
						if (Var41.f_4 != -1441477783)
						{
							iLocal_1199 = 0;
							Local_168.f_103.f_17 = 0;
						}
					}
				}
			}
		}
		else
		{
			bVar33 = false;
		}
		if (bVar33)
		{
			MISC::SET_BIT(&(Local_168.f_218.f_97[(iVar3 / 32)]), (iVar3 % 32));
			iLocal_1101[iLocal_1198] = iVar3;
			iLocal_1198++;
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_168.f_218.f_97[(iVar3 / 32)]), (iVar3 % 32));
		}
		iVar4++;
	}
	if (bLocal_1053)
	{
		iVar1 = 0;
		while (iVar1 < 16)
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				func_84(Local_168, &Global_2543149, &Var6, iVar1, iVar2, 0);
				if (func_685(Var6, Var6.f_24))
				{
					iLocal_1046 = iVar1;
					iLocal_1047 = iVar2;
					if (!func_699(0, 1, 1))
					{
						iVar0 = 0;
					}
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	if (Local_168 == 28)
	{
		STREAMING::REQUEST_MODEL(joaat("v_lirg_gunlight"));
		iLocal_156 = 1;
		if (STREAMING::HAS_MODEL_LOADED(joaat("v_lirg_gunlight")))
		{
			if ((((Local_168.f_103.f_3 != 7 && Local_168.f_103.f_3 != 9) && Local_168.f_103.f_3 != 10) && Local_168.f_103.f_3 != 15) && func_84(Local_168, &Global_2543149, &Var6, Local_168.f_103.f_3, Local_168.f_103.f_1, 0))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_155))
				{
					Var47 = { Var6.f_1 + func_326(Local_168, Local_168.f_103.f_3) };
					Var50 = { func_325(Local_168, Local_168.f_103.f_3) };
					iLocal_155 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_lirg_gunlight"), Var6.f_1, 0, 1, 0);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_155, Var47, 0, 0, 1);
					ENTITY::SET_ENTITY_ROTATION(iLocal_155, Var50, 2, 1);
					iLocal_157 = 0;
				}
				else if (iLocal_157)
				{
					Var47 = { Var6.f_1 + func_326(Local_168, Local_168.f_103.f_3) };
					Var50 = { func_325(Local_168, Local_168.f_103.f_3) };
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_155, Var47, 0, 0, 1);
					ENTITY::SET_ENTITY_ROTATION(iLocal_155, Var50, 2, 1);
					iLocal_157 = 0;
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iLocal_155))
			{
				OBJECT::DELETE_OBJECT(&iLocal_155);
			}
		}
	}
	if (iVar0 && bLocal_1053)
	{
		iLocal_1031 = 1;
		bLocal_1053 = false;
	}
}

Vector3 func_325(int iParam0, int iParam1)//Position - 0x277D6
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	Var0 = { 0f, 0f, 0f };
	iVar3 = MISC::GET_HASH_KEY("v_gun");
	iVar4 = MISC::GET_HASH_KEY("v_gun2");
	iVar5 = MISC::GET_HASH_KEY(GlobalFunc_2464(iParam0));
	if (iVar5 == iVar3)
	{
		switch (iParam1)
		{
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
				Var0.x = 0f;
				Var0.f_1 = 0f;
				Var0.f_2 = 342.75f;
				break;
			
			case 8:
				Var0.x = 0f;
				Var0.f_1 = 1.71f;
				Var0.f_2 = -0.09f;
				break;
			
			case 11:
			case 12:
			case 13:
			case 14:
				Var0.x = 0f;
				Var0.f_1 = 0f;
				Var0.f_2 = 269f;
				break;
			}
	}
	if (iVar5 == iVar3)
	{
		iVar6 = 28;
	}
	else if (iVar5 == iVar4)
	{
		iVar6 = 29;
	}
	GlobalFunc_7132(iVar6, iParam0, &Var0);
	return Var0;
}

Vector3 func_326(int iParam0, int iParam1)//Position - 0x278C0
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	Var0 = { 0f, 0f, 0f };
	iVar3 = MISC::GET_HASH_KEY("v_gun");
	iVar4 = MISC::GET_HASH_KEY("v_gun2");
	iVar5 = MISC::GET_HASH_KEY(GlobalFunc_2464(iParam0));
	if (iVar5 == iVar3)
	{
		switch (iParam1)
		{
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
				Var0.x = 0.225f;
				Var0.f_1 = 0.368f;
				Var0.f_2 = -0.408f;
				break;
			
			case 8:
				Var0.x = 0f;
				Var0.f_1 = 0f;
				Var0.f_2 = 0f;
				break;
			
			case 11:
			case 12:
			case 13:
			case 14:
				Var0.x = 0.945f;
				Var0.f_1 = -0.128f;
				Var0.f_2 = -0.478f;
				break;
			}
	}
	if (iVar5 == iVar3)
	{
		iVar6 = 28;
	}
	else if (iVar5 == iVar4)
	{
		iVar6 = 29;
	}
	GlobalFunc_7133(iVar6, iParam0, &Var0);
	return Var0;
}

void func_327(var uParam0, int iParam1)//Position - 0x279B2
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<6> Var4;
	struct<6> Var10;
	
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		func_164(&Var10, *iParam1, (Local_168.f_103.f_2 - 1), 0);
		if (iParam1->f_24 == 0)
		{
			if (ENTITY::GET_ENTITY_MODEL(*uParam0) == WEAPON::GET_WEAPONTYPE_MODEL(*iParam1) || ENTITY::GET_ENTITY_MODEL(*uParam0) == func_339(*iParam1))
			{
				if (func_337(*iParam1, 0) != 0)
				{
					if (Local_168.f_103.f_2 > ((21 + func_337(*iParam1, 1)) - 1) || Local_168.f_103.f_2 < 21)
					{
						if (WEAPON::GET_WEAPON_OBJECT_TINT_INDEX(*uParam0) != 0)
						{
							WEAPON::SET_WEAPON_OBJECT_TINT_INDEX(*uParam0, 0);
						}
					}
					else if (ENTITY::GET_ENTITY_MODEL(*uParam0) == WEAPON::GET_WEAPONTYPE_MODEL(*iParam1))
					{
						iVar1 = 0;
						while (iVar1 < WEAPON::GET_WEAPON_TINT_COUNT(*iParam1))
						{
							if (func_305(&Local_1222, *iParam1, iVar1, 0))
							{
								if (Local_1222.f_10 == 0)
								{
									if (func_307(*iParam1, (Local_168.f_103.f_2 - 21)) == iVar1 && WEAPON::GET_WEAPON_OBJECT_TINT_INDEX(*uParam0) != Local_1222.f_9)
									{
										WEAPON::SET_WEAPON_OBJECT_TINT_INDEX(*uParam0, Local_1222.f_9);
									}
								}
							}
							iVar1++;
						}
					}
				}
				while (func_164(&Var4, *iParam1, iVar0, 0))
				{
					if (Var4 != 0)
					{
						bVar2 = false;
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), *iParam1, 0))
						{
							if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), *iParam1, Var4))
							{
								if (Var4.f_4 == -1441477783)
								{
									if (Local_168.f_103.f_2 < 21)
									{
										bVar2 = true;
									}
									else
									{
										bVar2 = false;
									}
								}
								else
								{
									bVar2 = true;
								}
							}
						}
						else if (Var4.f_1)
						{
							bVar2 = true;
						}
						if (Local_168.f_103.f_5 == 1)
						{
							if ((Local_168.f_103.f_2 - 1) == iVar0)
							{
								bVar2 = true;
							}
							if ((Local_168.f_103.f_2 - 1) != iVar0)
							{
								if (Var4.f_4 == Var10.f_4 && Var4.f_5 != Var10.f_5)
								{
									bVar2 = false;
								}
							}
						}
						if (bVar2)
						{
							if (!WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(*uParam0, Var4))
							{
								if (Var4.f_4 == -1441477783 && ENTITY::GET_ENTITY_MODEL(*uParam0) == WEAPON::GET_WEAPONTYPE_MODEL(*iParam1))
								{
									if (Var4.f_4 == -1441477783)
									{
										if (func_336(*iParam1))
										{
											if (WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(*uParam0, func_335(*iParam1, 0)))
											{
												WEAPON::REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(*uParam0, func_335(*iParam1, 0));
											}
										}
										if (*iParam1 == joaat("weapon_marksmanrifle"))
										{
											WEAPON::REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(*uParam0, joaat("component_at_scope_large_fixed_zoom"));
										}
										if (*iParam1 == joaat("weapon_sniperrifle"))
										{
											if (WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(*uParam0, joaat("component_at_scope_large")))
											{
												WEAPON::REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(*uParam0, joaat("component_at_scope_large"));
											}
										}
									}
									iVar3 = WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(Var4);
									func_328(uParam0, iParam1, ENTITY::GET_ENTITY_COORDS(*uParam0, 0), ENTITY::GET_ENTITY_ROTATION(*uParam0, 2), iVar3);
								}
								WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(*uParam0, Var4);
								if (Var4.f_4 == -1441477783)
								{
									if (func_336(*iParam1))
									{
										WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(*uParam0, func_335(*iParam1, 0));
									}
									if (*iParam1 == joaat("weapon_marksmanrifle"))
									{
										WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(*uParam0, joaat("component_at_scope_large_fixed_zoom"));
									}
									if (*iParam1 == joaat("weapon_sniperrifle"))
									{
										WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(*uParam0, joaat("component_at_scope_large"));
									}
								}
							}
						}
						else if (WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(*uParam0, Var4))
						{
							WEAPON::REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(*uParam0, Var4);
							if (Var4.f_4 == -1441477783 && ENTITY::GET_ENTITY_MODEL(*uParam0) == func_339(*iParam1))
							{
								func_328(uParam0, iParam1, ENTITY::GET_ENTITY_COORDS(*uParam0, 0), ENTITY::GET_ENTITY_ROTATION(*uParam0, 2), 0);
							}
						}
					}
					iVar0++;
				}
			}
		}
	}
}

void func_328(var uParam0, var uParam1, struct<3> Param2, struct<3> Param5, int iParam8)//Position - 0x27D00
{
	GlobalFunc_130(uParam0);
	if (iParam8 == func_339(*uParam1))
	{
		if (!GlobalFunc_105(uParam1->f_13) && !GlobalFunc_105(uParam1->f_16))
		{
			*uParam0 = WEAPON::CREATE_WEAPON_OBJECT(*uParam1, GlobalFunc_7440(*uParam1), uParam1->f_13, 1, 1f, iParam8);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*uParam0, uParam1->f_13, 0, 0, 1);
			ENTITY::SET_ENTITY_ROTATION(*uParam0, uParam1->f_16, 2, 0);
		}
		else
		{
			*uParam0 = WEAPON::CREATE_WEAPON_OBJECT(*uParam1, GlobalFunc_7440(*uParam1), Param2, 1, 1f, iParam8);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*uParam0, Param2, 0, 0, 1);
			ENTITY::SET_ENTITY_ROTATION(*uParam0, Param5, 2, 0);
		}
	}
	else
	{
		*uParam0 = WEAPON::CREATE_WEAPON_OBJECT(*uParam1, GlobalFunc_7440(*uParam1), Param2, 1, 1f, iParam8);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*uParam0, Param2, 0, 0, 1);
		ENTITY::SET_ENTITY_ROTATION(*uParam0, Param5, 2, 0);
	}
}







int func_335(int iParam0, int iParam1)//Position - 0x27F47
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					return joaat("component_pistol_clip_01");
				
				case 1:
					return joaat("component_pistol_clip_02");
				
				case 2:
					return joaat("component_at_pi_flsh");
				
				case 3:
					return joaat("component_at_pi_supp_02");
				
				case 4:
					return joaat("component_pistol_varmod_luxe");
				
				default:
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					return joaat("component_appistol_clip_01");
				
				case 1:
					return joaat("component_appistol_clip_02");
				
				case 2:
					return joaat("component_at_pi_flsh");
				
				case 3:
					return joaat("component_at_pi_supp");
				
				case 4:
					return joaat("component_appistol_varmod_luxe");
				
				default:
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					return joaat("component_microsmg_clip_01");
				
				case 1:
					return joaat("component_microsmg_clip_02");
				
				case 2:
					return joaat("component_at_pi_flsh");
				
				case 3:
					return joaat("component_at_scope_macro");
				
				case 4:
					return joaat("component_at_ar_supp_02");
				
				case 5:
					return joaat("component_microsmg_varmod_luxe");
				
				default:
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					return joaat("component_smg_clip_01");
				
				case 1:
					return joaat("component_smg_clip_02");
				
				case 2:
					return joaat("component_at_ar_flsh");
				
				case 3:
					return joaat("component_at_scope_macro_02");
				
				case 4:
					return joaat("component_at_pi_supp");
				
				case 5:
					return joaat("component_smg_varmod_luxe");
				
				default:
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					return joaat("component_assaultrifle_clip_01");
				
				case 1:
					return joaat("component_assaultrifle_clip_02");
				
				case 2:
					return joaat("component_at_ar_afgrip");
				
				case 3:
					return joaat("component_at_ar_flsh");
				
				case 4:
					return joaat("component_at_scope_macro");
				
				case 5:
					return joaat("component_at_ar_supp_02");
				
				case 6:
					return joaat("component_assaultrifle_varmod_luxe");
				
				default:
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					return joaat("component_carbinerifle_clip_01");
				
				case 1:
					return joaat("component_carbinerifle_clip_02");
				
				case 2:
					return joaat("component_at_railcover_01");
				
				case 3:
					return joaat("component_at_ar_afgrip");
				
				case 4:
					return joaat("component_at_ar_flsh");
				
				case 5:
					return joaat("component_at_scope_medium");
				
				case 6:
					return joaat("component_at_ar_supp");
				
				case 7:
					return joaat("component_carbinerifle_varmod_luxe");
				
				default:
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					return joaat("component_advancedrifle_clip_01");
				
				case 1:
					return joaat("component_advancedrifle_clip_02");
				
				case 2:
					return joaat("component_at_ar_flsh");
				
				case 3:
					return joaat("component_at_scope_small");
				
				case 4:
					return joaat("component_at_ar_supp");
				
				case 5:
					return joaat("component_advancedrifle_varmod_luxe");
				
				default:
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					return joaat("component_sniperrifle_clip_01");
				
				case 1:
					return joaat("component_at_ar_supp_02");
				
				case 2:
					return joaat("component_at_scope_large");
				
				case 3:
					return joaat("component_at_scope_max");
				
				case 4:
					return joaat("component_sniperrifle_varmod_luxe");
				
				default:
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					return joaat("component_pistol50_clip_01");
				
				case 1:
					return joaat("component_pistol50_clip_02");
				
				case 2:
					return joaat("component_at_pi_flsh");
				
				case 3:
					return joaat("component_at_ar_supp_02");
				
				case 4:
					return joaat("component_pistol50_varmod_luxe");
				
				default:
			}
			break;
		
		case joaat("weapon_heavypistol"):
			switch (iParam1)
			{
				case 0:
					return joaat("component_heavypistol_clip_01");
				
				case 1:
					return joaat("component_heavypistol_clip_02");
				
				case 2:
					return joaat("component_at_pi_flsh");
				
				case 3:
					return joaat("component_at_pi_supp");
				
				case 4:
					return joaat("component_heavypistol_varmod_luxe");
				
				default:
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			switch (iParam1)
			{
				case 0:
					return joaat("component_marksmanrifle_clip_01");
				
				case 1:
					return joaat("component_marksmanrifle_clip_02");
				
				case 2:
					return joaat("component_at_scope_large_fixed_zoom");
				
				case 3:
					return joaat("component_at_ar_flsh");
				
				case 4:
					return joaat("component_at_ar_supp");
				
				case 5:
					return joaat("component_at_ar_afgrip");
				
				case 6:
					return joaat("component_marksmanrifle_varmod_luxe");
				
				default:
			}
			break;
	}
	return 0;
}

int func_336(int iParam0)//Position - 0x283AE
{
	if ((((((((((iParam0 == joaat("weapon_assaultrifle") || iParam0 == joaat("weapon_advancedrifle")) || iParam0 == joaat("weapon_carbinerifle")) || iParam0 == joaat("weapon_appistol")) || iParam0 == joaat("weapon_pistol")) || iParam0 == joaat("weapon_pistol50")) || iParam0 == joaat("weapon_heavypistol")) || iParam0 == joaat("weapon_smg")) || iParam0 == joaat("weapon_microsmg")) || iParam0 == joaat("weapon_sniperrifle")) || iParam0 == joaat("weapon_marksmanrifle"))
	{
		return 1;
	}
	return 0;
}

int func_337(int iParam0, bool bParam1)//Position - 0x28452
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 == joaat("gadget_parachute"))
	{
		iVar0 += 52;
		iVar0 += 14;
		iVar0 += 14;
	}
	else if (iParam0 == -61829581)
	{
		iVar0 = 12;
	}
	else if (WEAPON::GET_WEAPON_TINT_COUNT(iParam0) > 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = WEAPON::GET_WEAPON_TINT_COUNT(iParam0);
		}
		else if (GlobalFunc_82() || GlobalFunc_82())
		{
			iVar0 = WEAPON::GET_WEAPON_TINT_COUNT(iParam0);
		}
		else
		{
			iVar0 = 3;
		}
	}
	if (bParam1)
	{
		if (iParam0 == joaat("gadget_parachute"))
		{
			iVar1 = func_338();
		}
	}
	return (iVar0 + iVar1);
}

int func_338()//Position - 0x284EF
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (GlobalFunc_321() && (Global_262145.f_6114 || GlobalFunc_6708(3602, -1, -1)))
		{
			return 8;
		}
		return 7;
	}
	return 6;
}

int func_339(int iParam0)//Position - 0x2852A
{
	switch (iParam0)
	{
		case joaat("weapon_assaultrifle"):
			return WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("component_assaultrifle_varmod_luxe"));
		
		case joaat("weapon_advancedrifle"):
			return WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("component_advancedrifle_varmod_luxe"));
		
		case joaat("weapon_carbinerifle"):
			return WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("component_carbinerifle_varmod_luxe"));
		
		case joaat("weapon_appistol"):
			return WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("component_appistol_varmod_luxe"));
		
		case joaat("weapon_pistol"):
			return WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("component_pistol_varmod_luxe"));
		
		case joaat("weapon_pistol50"):
			return WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("component_pistol50_varmod_luxe"));
		
		case joaat("weapon_heavypistol"):
			return WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("component_heavypistol_varmod_luxe"));
		
		case joaat("weapon_smg"):
			return WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("component_smg_varmod_luxe"));
		
		case joaat("weapon_microsmg"):
			return WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("component_microsmg_varmod_luxe"));
		
		case joaat("weapon_sawnoffshotgun"):
			return WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("component_sawnoffshotgun_varmod_luxe"));
		
		case joaat("weapon_sniperrifle"):
			return WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("component_sniperrifle_varmod_luxe"));
		
		case joaat("weapon_marksmanrifle"):
			return WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("component_marksmanrifle_varmod_luxe"));
		
		default:
	}
	return 0;
}

void func_340(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x28612
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	var uVar12;
	var uVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	struct<3> Var17;
	struct<3> Var20;
	struct<3> Var23;
	struct<3> Var26;
	struct<3> Var29;
	
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, 1) };
		if (bParam4)
		{
			Var3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(iParam3->f_1, iParam3->f_4.f_2, iParam3->f_7) };
			Var6 = { Var0 };
			Var6 = { Var6 + Var3 - Var0 * Vector(0.25f, 0.25f, 0.25f) };
			if (((Var6.x > (Var3.x - 0.01f) && Var6.x < (Var3.x + 0.01f)) && Var6.f_1 > (Var3.f_1 - 0.01f)) && Var6.f_1 < (Var3.f_1 + 0.01f))
			{
				if (iLocal_1022)
				{
					SYSTEM::SETTIMERB(1);
					iLocal_1022 = 0;
				}
				Var6.f_2 = (Var6.f_2 + (SYSTEM::SIN(SYSTEM::TO_FLOAT((SYSTEM::TIMERB() / 8))) * 0.003f));
			}
			ENTITY::SET_ENTITY_COORDS(*uParam0, Var6, 1, 0, 0, 1);
			if (bLocal_1032)
			{
				if (!PAD::_IS_USING_KEYBOARD(2))
				{
					GlobalFunc_612(&uVar12, &uVar13, &iVar14, &iVar15, 0);
					if (iLocal_1020)
					{
						if (((iVar15 > -64 && iVar15 < 64) && iVar14 > -64) && iVar14 < 64)
						{
							iLocal_1020 = 0;
						}
						else
						{
							iVar15 = 0;
							iVar14 = 0;
						}
					}
					if (PAD::IS_LOOK_INVERTED())
					{
						iVar15 = (iVar15 * -1);
					}
					if (((iVar14 < -32 || iVar14 > 32) || iVar15 < -32) || iVar15 > 32)
					{
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							uLocal_1018 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 300);
						}
						else
						{
							iLocal_1017 = MISC::GET_GAME_TIMER() + 300;
						}
						iLocal_1019 = 1;
					}
					else if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), uLocal_1018)) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_1017) > 0))
					{
						iLocal_1019 = 0;
					}
					if ((iVar14 < 32 && iVar14 > -32) && (iVar15 < 32 && iVar15 > -32))
					{
						if (iVar14 < 32 && iVar14 > -32)
						{
							iVar14 = 0;
						}
						else if (iVar14 < 0)
						{
							iVar14 = (iVar14 - 32);
						}
						else
						{
							iVar14 += 32;
						}
						if (iVar15 < 32 && iVar15 > -32)
						{
							iVar15 = 0;
						}
						else if (iVar15 < 0)
						{
							iVar15 = (iVar15 - 32);
						}
						else
						{
							iVar15 += 32;
						}
					}
					if (*iParam3 == joaat("gadget_parachute"))
					{
						iVar15 = (iVar15 * -1);
					}
					Var9 = { iParam3->f_4 + iParam3->f_10 };
					Var9.x = (Var9.x + (IntToFloat(iVar15) * 0.5f));
					Var9.f_2 = (Var9.f_2 + (IntToFloat(iVar14) * 0.35f));
				}
				else
				{
					iVar16 = 0;
					if (Local_168.f_103.f_5 == 1)
					{
						if (Global_2543381 == -1)
						{
							if (PAD::IS_CONTROL_PRESSED(2, 237))
							{
								iVar16 = 1;
								HUD::_SET_MOUSE_CURSOR_SPRITE(4);
							}
							else
							{
								HUD::_SET_MOUSE_CURSOR_SPRITE(3);
								iVar16 = 0;
							}
						}
						else if (Global_2543381 > -1)
						{
							HUD::_SET_MOUSE_CURSOR_SPRITE(1);
							iVar16 = 0;
						}
						else if (Global_2543381 == -2 || Global_2543381 == -3)
						{
							HUD::_SET_MOUSE_CURSOR_SPRITE(1);
							iVar16 = 0;
						}
						else
						{
							HUD::_SET_MOUSE_CURSOR_SPRITE(2);
							iVar16 = 0;
						}
					}
					else if (iLocal_1207 == 1)
					{
						if (Global_2543381 == -1)
						{
							HUD::_SET_MOUSE_CURSOR_SPRITE(4);
							iVar16 = 1;
						}
					}
					if (iVar16 == 1)
					{
						Var9 = { iParam3->f_4 + iParam3->f_10 };
						Local_1212.x = (Local_1212.x + (Global_2543380 * 400f));
						if (Local_1212.x < -64f)
						{
							Local_1212.x = -64f;
						}
						else if (Local_1212.x > 64f)
						{
							Local_1212.x = 64f;
						}
						if (*iParam3 == joaat("gadget_parachute"))
						{
							Local_1212.f_2 = (Local_1212.f_2 + GlobalFunc_253((-Global_2543379 * 400f), -32f, 32f));
						}
						else
						{
							Local_1212.f_2 = (Local_1212.f_2 + GlobalFunc_253((Global_2543379 * 400f), -32f, 32f));
						}
						if (Local_1212.f_2 < -32f)
						{
							Local_1212.f_2 = -32f;
						}
						else if (Local_1212.f_2 > 32f)
						{
							Local_1212.f_2 = 32f;
						}
						Var9 = { Var9 + Local_1212 };
					}
					else
					{
						Var9 = { iParam3->f_4 + iParam3->f_10 };
					}
				}
				Var17 = { *uParam1 };
				Var17 = { Var17 + Var9 - *uParam1 * Vector(0.25f, 0.25f, 0.25f) };
				ENTITY::SET_ENTITY_ROTATION(*uParam0, Var17, 2, 1);
				*uParam1 = { Var17 };
			}
		}
		if (!bParam4)
		{
			Var20 = { iParam3->f_1 };
			Var23 = { Var0 };
			Var23 = { Var23 + Var20 - Var0 * Vector(0.35f, 0.35f, 0.35f) };
			ENTITY::SET_ENTITY_COORDS(*uParam0, Var23, 1, 0, 0, 1);
			Var26 = { iParam3->f_4 };
			Var29 = { *uParam1 };
			Var29 = { Var29 + Var26 - *uParam1 * Vector(0.3f, 0.3f, 0.3f) };
			ENTITY::SET_ENTITY_ROTATION(*uParam0, Var29, 2, 1);
			*uParam1 = { Var29 };
			if (GlobalFunc_537(Var0, Var20, 0.01f))
			{
				if (GlobalFunc_537(*uParam1, Var26, 0.1f))
				{
					*iParam2 = 0;
				}
			}
		}
	}
}



void func_343()//Position - 0x28C38
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	bool bVar22;
	char cVar23[16];
	struct<4> Var27;
	char[] cVar31[8];
	struct<26> Var35;
	struct<26> Var61;
	var uVar87;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	int iVar112;
	int iVar113;
	int iVar114;
	int iVar115;
	int iVar116;
	int iVar117;
	int iVar118;
	int iVar119;
	int iVar120;
	int iVar121;
	int iVar122;
	int iVar123;
	int iVar124;
	int iVar125;
	int iVar126;
	int iVar127;
	int iVar128;
	int iVar129;
	int iVar130;
	int iVar131;
	int iVar132;
	int iVar133;
	int iVar134;
	int iVar135;
	int iVar136;
	int iVar137;
	int iVar138;
	int iVar139;
	int iVar140;
	float fVar141;
	int iVar142;
	float fVar143;
	var uVar144;
	float fVar145;
	struct<3> Var146;
	struct<3> Var149;
	float fVar152;
	
	GlobalFunc_5799(&(Local_168.f_609), 300);
	GlobalFunc_612(&iVar0, &iVar1, &uVar2, &uVar3, 0);
	if (Local_168.f_103.f_10 != 0)
	{
		if (SYSTEM::TIMERA() > 300 || (((iVar1 > -64 && iVar1 < 64) && iVar0 > -64) && iVar0 < 64))
		{
			Local_168.f_103.f_10 = 0;
		}
		else
		{
			iVar0 = 0;
			iVar1 = 0;
		}
	}
	bVar4 = (PAD::IS_CONTROL_PRESSED(2, 207) || Local_168.f_103.f_5 == 1);
	bVar5 = PAD::IS_CONTROL_JUST_PRESSED(2, 201);
	bVar6 = (PAD::IS_CONTROL_JUST_PRESSED(2, 202) || GlobalFunc_2041());
	bVar7 = PAD::IS_CONTROL_JUST_PRESSED(2, 203);
	bVar8 = PAD::IS_CONTROL_JUST_PRESSED(2, 204);
	bVar9 = ((iVar0 < -64 || PAD::IS_CONTROL_JUST_PRESSED(2, 189)) || (PAD::IS_CONTROL_PRESSED(2, 189) && Local_168.f_609.f_10));
	bVar10 = ((iVar0 > 64 || PAD::IS_CONTROL_JUST_PRESSED(2, 190)) || (PAD::IS_CONTROL_PRESSED(2, 190) && Local_168.f_609.f_11));
	bVar11 = ((iVar1 < -64 || PAD::IS_CONTROL_JUST_PRESSED(2, 188)) || (PAD::IS_CONTROL_PRESSED(2, 188) && Local_168.f_609.f_8));
	bVar12 = ((iVar1 > 64 || PAD::IS_CONTROL_JUST_PRESSED(2, 187)) || (PAD::IS_CONTROL_PRESSED(2, 187) && Local_168.f_609.f_9));
	bVar13 = (((iVar0 < -64 || iVar0 > 64) || iVar1 < -64) || iVar1 > 64);
	if (PAD::_IS_USING_KEYBOARD_2(2))
	{
		if (GlobalFunc_2494(Local_168.f_609.f_9, 0, 0))
		{
			bVar12 = true;
		}
		if (GlobalFunc_2495(Local_168.f_609.f_8, 0, 0))
		{
			bVar11 = true;
		}
	}
	if (!bVar13)
	{
		if (bVar9)
		{
			iVar0 = -1;
			Local_168.f_609.f_10 = 0;
			Local_168.f_609.f_5 = 0;
			Local_168.f_609.f_21 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				Local_168.f_609.f_25 = NETWORK::GET_NETWORK_TIME();
			}
		}
		else if (bVar10)
		{
			iVar0 = 1;
			Local_168.f_609.f_11 = 0;
			Local_168.f_609.f_5 = 0;
			Local_168.f_609.f_21 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				Local_168.f_609.f_25 = NETWORK::GET_NETWORK_TIME();
			}
		}
		else
		{
			iVar0 = 0;
		}
		if (bVar11)
		{
			iVar1 = -1;
			Local_168.f_609.f_8 = 0;
			Local_168.f_609.f_4 = 0;
			Local_168.f_609.f_20 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				Local_168.f_609.f_24 = NETWORK::GET_NETWORK_TIME();
			}
		}
		else if (bVar12)
		{
			iVar1 = 1;
			Local_168.f_609.f_9 = 0;
			Local_168.f_609.f_4 = 0;
			Local_168.f_609.f_20 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				Local_168.f_609.f_24 = NETWORK::GET_NETWORK_TIME();
			}
		}
		else
		{
			iVar1 = 0;
		}
	}
	if (!bVar4)
	{
		bLocal_1021 = false;
	}
	else if (bLocal_1021)
	{
		bVar4 = false;
	}
	if ((((((((((((bVar4 || iLocal_1019) || Local_168.f_103.f_17) || bVar5) || bVar6) || bVar8) || bVar9) || bVar10) || bVar11) || bVar12) || bVar7) || PAD::_IS_USING_KEYBOARD_2(2)) || Local_168.f_103.f_25)
	{
	}
	else
	{
		return;
	}
	if ((MISC::GET_GAME_TIMER() - iLocal_1023) < 500)
	{
		return;
	}
	bVar14 = false;
	bVar15 = false;
	bVar16 = false;
	bVar17 = false;
	bVar18 = false;
	bVar19 = false;
	iVar20 = 0;
	iVar21 = 0;
	bVar22 = true;
	func_84(Local_168, &Global_2543149, &Var35, Local_168.f_103.f_3, Local_168.f_103.f_1, 0);
	func_320(Local_168, &uVar87, Local_168.f_103.f_3);
	iVar94 = 0;
	iVar95 = -1;
	iVar96 = -1;
	iVar100 = 0;
	iVar101 = 0;
	if (Local_168.f_103.f_25)
	{
		bVar5 = false;
		bVar6 = false;
		bVar8 = false;
		bVar9 = false;
		bVar10 = false;
		bVar11 = false;
		bVar12 = false;
		bVar7 = false;
	}
	func_625();
	if (bLocal_1032 || Local_168.f_103.f_25)
	{
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
		}
		switch (Local_168.f_103.f_5)
		{
			case 0:
				if (MISC::IS_PC_VERSION() && !Local_168.f_103.f_25)
				{
					GlobalFunc_6900(1, 0, 0, 1);
					if (Global_2543381 > -1)
					{
						if (iLocal_1207 == 0)
						{
							HUD::_SET_MOUSE_CURSOR_SPRITE(1);
						}
					}
					else if (Global_2543381 == -4)
					{
						HUD::_SET_MOUSE_CURSOR_SPRITE(2);
					}
					if (GlobalFunc_1391())
					{
						iVar101 = 1;
					}
					else if (Global_2543381 == -1)
					{
						if (func_615(&Var61, &iVar96, &iVar95, &(Local_168.f_103)))
						{
							if (iVar96 == Local_168.f_103.f_3 && iVar95 == Local_168.f_103.f_1)
							{
								if (!iLocal_1207)
								{
									HUD::_SET_MOUSE_CURSOR_SPRITE(3);
									if (iLocal_1209 == 1)
									{
										if (!PAD::IS_CONTROL_PRESSED(2, 237))
										{
											iLocal_1209 = 0;
										}
									}
									else if (PAD::IS_CONTROL_PRESSED(2, 237))
									{
										iLocal_1207 = 1;
										iLocal_1208 = 0;
									}
								}
							}
							else
							{
								HUD::_SET_MOUSE_CURSOR_SPRITE(5);
								if (PAD::IS_CONTROL_JUST_PRESSED(2, 237))
								{
									iLocal_1208 = 0;
									iLocal_1207 = 0;
									iLocal_1209 = 1;
									iVar100 = 1;
									Var35 = { Var61 };
								}
							}
						}
						else if (!iLocal_1207)
						{
							HUD::_SET_MOUSE_CURSOR_SPRITE(1);
						}
					}
					if (iLocal_1207 == 1)
					{
						bVar4 = true;
						if (!PAD::IS_CONTROL_PRESSED(2, 237))
						{
							iLocal_1207 = 0;
							bVar4 = false;
						}
					}
				}
				if (bVar8)
				{
					iLocal_1056 = 0;
					iLocal_1057 = 1;
					StringCopy(&cLocal_1058, "", 64);
				}
				else if (iVar100 == 1)
				{
					Local_168.f_103.f_3 = iVar96;
					Local_168.f_103.f_1 = iVar95;
					bLocal_1100 = false;
					iLocal_1022 = 1;
					iLocal_1041 = 1;
					bVar14 = true;
					iLocal_1031 = 1;
					iLocal_145 = 1;
					Local_168.f_103.f_16 = 0;
					func_635(&Local_168, &(Local_168.f_103), &Var35, 0);
					iLocal_157 = 1;
					iVar100 = 0;
				}
				else if ((bVar5 || iVar101) || Local_168.f_103.f_25)
				{
					iVar101 = 0;
					bVar19 = false;
					Local_168.f_103.f_16 = 0;
					if (func_84(Local_168, &Global_2543149, &Var35, Local_168.f_103.f_3, Local_168.f_103.f_1, 1))
					{
						if (Var35.f_24 == 7)
						{
							if (Var35.f_23 == -1)
							{
							}
							else
							{
								iLocal_1056 = 0;
								iLocal_1057 = 1;
								StringCopy(&cLocal_1058, NETWORK::GET_COMMERCE_ITEM_ID(Global_2543149.f_26[Var35.f_23]), 64);
							}
						}
						else if (MISC::IS_BIT_SET(Local_168.f_645, 7))
						{
							if ((!MISC::IS_BIT_SET(Local_168.f_645, 0) && !MISC::IS_BIT_SET(Local_168.f_645, 1)) && !(Var35.f_24 == 3 && PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID()) > SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID())) / 100f) * IntToFloat(Var35.f_22)))))
							{
								if (func_614(Var35, Var35.f_19))
								{
									StringCopy(&cVar23, "GSM_EQUIP", 16);
								}
								else if (Var35.f_24 == 3)
								{
									if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
									{
										StringCopy(&cVar23, "GSM_PURCHASE_A", 16);
										bVar19 = true;
									}
									else
									{
										StringCopy(&cVar23, "GSM_PURCHASE", 16);
									}
								}
								else
								{
									StringCopy(&cVar23, "", 16);
								}
								if (func_557(0, Var35.f_19, Var35, Var35.f_24, 0, Local_168, 0, 0, joaat("AMMO_PISTOL"), 1))
								{
									Global_2540563 = 1;
									Local_168.f_103.f_23 = 1;
									iVar21 = Var35;
									if (Var35.f_24 == 1)
									{
										WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), Var35, 1, 0, 0);
										func_284(&(Local_168.f_103), &cVar23, 3000);
										iLocal_1031 = 1;
										if (Global_68245)
										{
											if (func_556(Var35, &iVar102))
											{
												GlobalFunc_7743(iVar102, 1, -1);
												func_523(func_552(Var35));
											}
										}
									}
									else if (Var35.f_24 == 5)
									{
										WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), Var35, &iVar103);
										WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), Var35, iVar103, 0, 0);
										func_284(&(Local_168.f_103), &cVar23, 3000);
										iLocal_1031 = 1;
										if (Global_68245)
										{
											if (func_556(Var35, &iVar104))
											{
												GlobalFunc_7743(iVar104, 1, -1);
												func_523(func_552(Var35));
											}
										}
									}
									else if (Var35.f_24 == 3)
									{
										if (PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID()) < SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID())) / 100f) * IntToFloat(Var35.f_22))))
										{
											PED::SET_PED_ARMOUR(PLAYER::PLAYER_PED_ID(), SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID())) / 100f) * IntToFloat(Var35.f_22))));
										}
										if (bVar19)
										{
											func_284(&(Local_168.f_103), &cVar23, 30000);
										}
										else
										{
											func_284(&(Local_168.f_103), &cVar23, 3000);
										}
										iLocal_1031 = 1;
										if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
										{
											iVar105 = GlobalFunc_6872(1740, -1, 0);
											if (iVar105 == 1)
											{
												iVar106 = GlobalFunc_6730(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), GlobalFunc_7054(PLAYER::PLAYER_PED_ID(), 11));
												if (iVar106 != 0)
												{
													iVar106 = (iVar106 + GlobalFunc_1957(Var35.f_22));
												}
												Global_2542476 = iVar106;
											}
										}
									}
									else if (Var35.f_24 == 2)
									{
										WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), Var35, 1, 0, 0);
										func_284(&(Local_168.f_103), &cVar23, 3000);
										if (Global_68245)
										{
											if (func_556(Var35, &iVar107))
											{
												GlobalFunc_7743(iVar107, 1, -1);
												func_523(func_552(Var35));
											}
										}
										iLocal_1031 = 1;
									}
									else if (Var35.f_24 == 4)
									{
										WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), Var35, 1, 0, 0);
										if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
										{
											func_517(GlobalFunc_8354(), 13, 1);
										}
										else
										{
											GlobalFunc_9471(13, 1, -1);
										}
										iVar97 = 5;
										iVar99 = 0;
										iVar98 = 0;
										if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
										{
											iVar97 = GlobalFunc_6872(573, -1, 0);
											iVar99 = GlobalFunc_6872(2024, -1, 0);
											iVar98 = GlobalFunc_6872(1433, -1, 0);
											if (iVar97 == 0 && !func_294(13))
											{
												iVar97 = 5;
											}
										}
										else
										{
											iVar108 = GlobalFunc_8354();
											if (iVar108 == 0)
											{
												STATS::STAT_GET_INT(joaat("sp0_parachute_current_tint"), &iVar97, -1);
											}
											else if (iVar108 == 1)
											{
												STATS::STAT_GET_INT(joaat("sp1_parachute_current_tint"), &iVar97, -1);
											}
											else if (iVar108 == 2)
											{
												STATS::STAT_GET_INT(joaat("sp2_parachute_current_tint"), &iVar97, -1);
											}
										}
										if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
										{
											func_512(iVar99, 1);
										}
										else
										{
											PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), iVar99);
											PLAYER::CLEAR_PLAYER_PARACHUTE_MODEL_OVERRIDE(PLAYER::PLAYER_ID());
											PLAYER::CLEAR_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID());
										}
										PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_ID(), iVar97);
										if (GlobalFunc_281())
										{
											PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(PLAYER::PLAYER_ID(), joaat("lts_p_para_pilot2_sp_s"));
										}
										else if (GlobalFunc_280())
										{
											PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(PLAYER::PLAYER_ID(), joaat("pil_p_para_pilot_sp_s"));
										}
										if (iVar98 == 0)
										{
											PLAYER::SET_PLAYER_PARACHUTE_SMOKE_TRAIL_COLOR(PLAYER::PLAYER_ID(), 255, 255, 255);
											PLAYER::SET_PLAYER_CAN_LEAVE_PARACHUTE_SMOKE_TRAIL(PLAYER::PLAYER_ID(), false);
										}
										if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
										{
											if (((((((((((((GlobalFunc_8847(288, -1) || GlobalFunc_8847(289, -1)) || GlobalFunc_8847(290, -1)) || GlobalFunc_8847(291, -1)) || GlobalFunc_8847(292, -1)) || GlobalFunc_8847(293, -1)) || GlobalFunc_8847(294, -1)) || GlobalFunc_8847(295, -1)) || GlobalFunc_8847(296, -1)) || GlobalFunc_8847(297, -1)) || GlobalFunc_8847(298, -1)) || GlobalFunc_8847(299, -1)) || GlobalFunc_8847(300, -1)) || GlobalFunc_8847(301, -1))
											{
												GlobalFunc_7885(-1, 0);
											}
										}
										else
										{
											iVar109 = GlobalFunc_8354();
											if (((((((((((((func_242(iVar109, 288) || func_242(iVar109, 289)) || func_242(iVar109, 290)) || func_242(iVar109, 291)) || func_242(iVar109, 292)) || func_242(iVar109, 293)) || func_242(iVar109, 294)) || func_242(iVar109, 295)) || func_242(iVar109, 296)) || func_242(iVar109, 297)) || func_242(iVar109, 298)) || func_242(iVar109, 299)) || func_242(iVar109, 300)) || func_242(iVar109, 301))
											{
												GlobalFunc_7885(iVar97, 0);
											}
										}
										func_286(GlobalFunc_8354(), 255);
										func_286(GlobalFunc_8354(), 13);
										func_284(&(Local_168.f_103), &cVar23, 3000);
										iLocal_1031 = 1;
									}
									else if (Var35.f_24 == 0)
									{
										if (Var35.f_25 == 0)
										{
											WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), Var35, 1, 0, 0);
										}
										else
										{
											WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), Var35, Var35.f_22 * 4, 0, 0);
											WEAPON::SET_PED_WEAPON_TINT_INDEX(PLAYER::PLAYER_PED_ID(), Var35, 0);
											while (func_164(&Local_1216, Var35, iVar110, 0))
											{
												if (Local_1216.f_1)
												{
													if (!WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), Var35, Local_1216))
													{
														WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), Var35, Local_1216);
													}
												}
												else if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), Var35, Local_1216))
												{
													WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(PLAYER::PLAYER_PED_ID(), Var35, Local_1216);
												}
												iVar110++;
											}
										}
										func_284(&(Local_168.f_103), &cVar23, 3000);
										if (Global_68245)
										{
											if (func_556(Var35, &iVar111))
											{
												GlobalFunc_7743(iVar111, Var35.f_22 * 4, -1);
												func_523(func_552(Var35));
											}
										}
										if (func_506(PLAYER::PLAYER_PED_ID(), Var35))
										{
											GlobalFunc_8960(29, 1);
										}
										iLocal_1031 = 1;
									}
									if ((MISC::IS_BIT_SET(Local_168.f_645, 4) || MISC::IS_BIT_SET(Local_168.f_645, 3)) || MISC::IS_BIT_SET(Local_168.f_645, 5))
									{
										Local_168.f_103.f_5 = 1;
										bLocal_1203 = Var35.f_24 == 4;
										Local_168.f_103.f_2 = -1;
									}
								}
								else if (!Local_168.f_103.f_25)
								{
									if (Local_168.f_103.f_21)
									{
										bVar15 = true;
										func_284(&(Local_168.f_103), "GSM_AFFORD", 3000);
										GlobalFunc_2478(MISC::GET_HASH_KEY(&(Global_90014.f_1259)), Global_90014.f_1263, MISC::GET_HASH_KEY(GlobalFunc_1988(Local_168)));
										GlobalFunc_7677(0, 10, 3);
									}
									else
									{
										bVar15 = true;
										func_284(&(Local_168.f_103), "GSM_LOCK", 3000);
									}
								}
							}
							else if (MISC::IS_BIT_SET(Local_168.f_645, 13))
							{
								if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Var35.f_24 == 3)
								{
									StringCopy(&cVar23, "GSM_PURCH_INV_A", 16);
									bVar19 = true;
								}
								else
								{
									StringCopy(&cVar23, "GSM_PURCH_INV", 16);
								}
								if (func_557(0, Var35.f_19, Var35, Var35.f_24, 0, Local_168, 0, 0, joaat("AMMO_PISTOL"), 1))
								{
									Global_2540563 = 1;
									Local_168.f_103.f_23 = 1;
									iVar21 = Var35;
									if (Var35.f_24 == 3)
									{
										if (Local_168.f_103.f_1 == 0)
										{
											iVar112 = GlobalFunc_6872(1865, -1, 0);
											iVar112++;
											GlobalFunc_6720(1865, iVar112, -1, 1);
										}
										else if (Local_168.f_103.f_1 == 1)
										{
											iVar112 = GlobalFunc_6872(1866, -1, 0);
											iVar112++;
											GlobalFunc_6720(1866, iVar112, -1, 1);
										}
										else if (Local_168.f_103.f_1 == 2)
										{
											iVar112 = GlobalFunc_6872(1867, -1, 0);
											iVar112++;
											GlobalFunc_6720(1867, iVar112, -1, 1);
										}
										else if (Local_168.f_103.f_1 == 3)
										{
											iVar112 = GlobalFunc_6872(1868, -1, 0);
											iVar112++;
											GlobalFunc_6720(1868, iVar112, -1, 1);
										}
										else if (Local_168.f_103.f_1 == 4)
										{
											iVar112 = GlobalFunc_6872(1869, -1, 0);
											iVar112++;
											GlobalFunc_6720(1869, iVar112, -1, 1);
										}
										if (bVar19)
										{
											func_284(&(Local_168.f_103), &cVar23, 30000);
										}
										else
										{
											func_284(&(Local_168.f_103), &cVar23, 3000);
										}
										iLocal_1031 = 1;
										if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
										{
										}
									}
								}
								else if (!Local_168.f_103.f_25)
								{
									if (Local_168.f_103.f_21)
									{
										bVar15 = true;
										func_284(&(Local_168.f_103), "GSM_AFFORD", 3000);
										GlobalFunc_2478(MISC::GET_HASH_KEY(&(Global_90014.f_1259)), Global_90014.f_1263, MISC::GET_HASH_KEY(GlobalFunc_1988(Local_168)));
										GlobalFunc_7677(0, 10, 3);
									}
									else
									{
										bVar15 = true;
										func_284(&(Local_168.f_103), "GSM_LOCK", 3000);
									}
								}
							}
							else if ((MISC::IS_BIT_SET(Local_168.f_645, 4) || MISC::IS_BIT_SET(Local_168.f_645, 3)) || MISC::IS_BIT_SET(Local_168.f_645, 5))
							{
								Local_168.f_103.f_5 = 1;
								bLocal_1203 = Var35.f_24 == 4;
								Local_168.f_103.f_2 = -1;
								Local_168.f_103.f_16 = 0;
								iLocal_1031 = 1;
								iVar20 = Var35;
							}
							else if (Var35.f_24 == 3 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
							{
								bVar15 = true;
								if (((((((((!func_302(247) || !func_302(246)) || !func_302(245)) || !func_302(244)) || !func_302(243)) || !func_302(242)) || !func_302(241)) || !func_302(240)) || !func_302(239)) || !func_302(238))
								{
									func_284(&(Local_168.f_103), "GSM_INV_FULL", 3000);
								}
								else
								{
									func_284(&(Local_168.f_103), "GSM_INV_FULL2", 3000);
								}
							}
							else if (Var35.f_24 == 3 && PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID()) > SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID())) / 100f) * IntToFloat(Var35.f_22))))
							{
								bVar15 = true;
								func_284(&(Local_168.f_103), "GSM_ARMOR", 3000);
							}
							else if (Var35.f_25 == 0)
							{
								bVar15 = true;
								func_284(&(Local_168.f_103), "GSM_HAVE", 3000);
							}
							else if (Var35.f_24 == 2)
							{
								if (MISC::IS_BIT_SET(Local_168.f_645, 1))
								{
									if (func_557(1, Var35.f_20, Var35, Var35.f_24, 0, Local_168, 0, 0, joaat("AMMO_PISTOL"), 1))
									{
										Global_2540563 = 1;
										Local_168.f_103.f_23 = 1;
										WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), Var35, 1, 0, 0);
										iVar21 = Var35;
										func_284(&(Local_168.f_103), "GSM_PURCHASE", 3000);
										if (Global_68245)
										{
											if (func_556(Var35, &iVar113))
											{
												GlobalFunc_7743(iVar113, 1, -1);
												func_523(func_552(Var35));
											}
										}
										iLocal_1031 = 1;
									}
									else if (!Local_168.f_103.f_25)
									{
										if (Local_168.f_103.f_21)
										{
											bVar15 = true;
											func_284(&(Local_168.f_103), "GSM_AFFORD", 3000);
											GlobalFunc_2478(MISC::GET_HASH_KEY(&(Global_90014.f_1259)), Global_90014.f_1263, MISC::GET_HASH_KEY(GlobalFunc_1988(Local_168)));
											GlobalFunc_7677(0, 10, 3);
										}
										else
										{
											bVar15 = true;
											func_284(&(Local_168.f_103), "GSM_LOCK", 3000);
										}
									}
								}
								else
								{
									bVar15 = true;
									func_284(&(Local_168.f_103), "GSM_FULL", 3000);
								}
							}
							else if (Var35.f_24 == 0)
							{
								if ((MISC::IS_BIT_SET(Local_168.f_645, 4) || MISC::IS_BIT_SET(Local_168.f_645, 3)) || MISC::IS_BIT_SET(Local_168.f_645, 5))
								{
									Local_168.f_103.f_5 = 1;
									bLocal_1203 = Var35.f_24 == 4;
									Local_168.f_103.f_2 = -1;
									Local_168.f_103.f_16 = 0;
									iLocal_1031 = 1;
								}
							}
						}
						else
						{
							if (Global_68245)
							{
								if (!func_685(Var35, Var35.f_24))
								{
									func_284(&(Local_168.f_103), "GSM_BLOCK_MP", 3000);
								}
								else if (!GlobalFunc_524(1, 1) && Var35 == joaat("weapon_sawnoffshotgun"))
								{
									func_284(&(Local_168.f_103), "GSM_LOCK", 3000);
								}
								else
								{
									func_284(&(Local_168.f_103), "GSM_LOCK_FM", 3000);
								}
							}
							else
							{
								func_284(&(Local_168.f_103), "GSM_LOCK", 3000);
							}
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) == 0)
							{
								GlobalFunc_2476(&(Local_168.f_646), 12, 1);
							}
							bVar15 = true;
						}
					}
				}
				else if (bVar6)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Var35.f_24 == 3)
					{
						if (PED::HAS_PED_HEAD_BLEND_FINISHED(PLAYER::PLAYER_PED_ID()) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
						{
							GlobalFunc_2460("HAS_PED_HEAD_BLEND_FINISHED = TRUE", -1);
							PED::FINALIZE_HEAD_BLEND(PLAYER::PLAYER_PED_ID());
							AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_AMMO_SHOP_SOUNDSET", 1);
							Local_168.f_103.f_31 = 6;
						}
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_AMMO_SHOP_SOUNDSET", 1);
						Local_168.f_103.f_31 = 6;
					}
				}
				else if (((bVar11 || bVar12) || bVar9) || bVar10)
				{
					if (func_487(func_488(iVar0, -iVar1), Var35, Local_168.f_103.f_3, Local_168.f_103.f_1, &iVar94, &iVar96, &iVar95))
					{
						iLocal_157 = 1;
						iLocal_1208 = 0;
						iLocal_1215 = 1;
						iVar114 = 0;
						while (iVar114 < 16)
						{
							iVar115 = 0;
							while (iVar115 < 6)
							{
								if (func_84(Local_168, &Global_2543149, &Var35, iVar114, iVar115, 0))
								{
									if (Var35 == iVar94 || (iVar95 == iVar115 && iVar96 == iVar114))
									{
										Local_168.f_103.f_1 = iVar115;
										Local_168.f_103.f_3 = iVar114;
										bLocal_1100 = false;
										iLocal_1022 = 1;
										iLocal_1041 = 1;
										bVar14 = true;
										iLocal_1031 = 1;
										iLocal_145 = 1;
										Local_168.f_103.f_16 = 0;
										func_635(&Local_168, &(Local_168.f_103), &Var35, 0);
										if (bVar13)
										{
											SYSTEM::SETTIMERA(0);
											Local_168.f_103.f_10 = 1;
										}
									}
								}
								iVar115++;
							}
							iVar114++;
						}
					}
				}
				break;
			
			case 1:
				if (PAD::_IS_USING_KEYBOARD(2) && !Local_168.f_103.f_25)
				{
					GlobalFunc_6900(0, 0, 0, 1);
					if (Global_2543381 > -1)
					{
						HUD::_SET_MOUSE_CURSOR_SPRITE(1);
					}
					else if (Global_2543381 == -4)
					{
						HUD::_SET_MOUSE_CURSOR_SPRITE(2);
					}
					if (GlobalFunc_1391() && !bLocal_1203)
					{
						if (Global_2543381 == Local_168.f_103.f_2)
						{
							iVar101 = 1;
						}
						else
						{
							if (MISC::IS_BIT_SET(Local_168.f_645, 4) && Global_2543381 == 0)
							{
								Local_168.f_103.f_2 = Global_2543381;
								iLocal_1031 = 1;
								bVar14 = true;
							}
							else if (MISC::IS_BIT_SET(Local_168.f_645, 3) && Global_2543381 < 21)
							{
								if (!func_486(GlobalFunc_8354(), Var35, Local_1216))
								{
									func_470(GlobalFunc_8354(), Var35, Local_1216);
								}
								Local_168.f_103.f_2 = Global_2543381;
								iLocal_1031 = 1;
								bVar14 = true;
								Local_168.f_103.f_16 = 0;
							}
							else if (MISC::IS_BIT_SET(Local_168.f_645, 5))
							{
								if (func_305(&Local_1222, Var35, func_307(Var35, (Local_168.f_103.f_2 - 21)), 1))
								{
									iVar116 = func_259(Var35, Local_1222.f_9, Local_1222.f_10);
									if (iVar116 != 0)
									{
										func_286(GlobalFunc_8354(), iVar116);
									}
								}
								Local_168.f_103.f_2 = Global_2543381;
								iLocal_1031 = 1;
								bVar14 = true;
								Local_168.f_103.f_16 = 0;
							}
							GlobalFunc_1588(Local_168.f_103.f_2, 0, 1);
						}
					}
				}
				if (bLocal_1203)
				{
					if (GlobalFunc_1391())
					{
						if (Global_2543381 == iLocal_1204)
						{
							bVar5 = true;
						}
						else
						{
							bVar14 = true;
							iLocal_1204 = Global_2543381;
							GlobalFunc_1588(iLocal_1204, 0, 1);
						}
					}
					if (bVar11)
					{
						iLocal_1204 = (iLocal_1204 - 1);
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							if (iLocal_1204 < 0)
							{
								iLocal_1204 = 3;
							}
						}
						else if (iLocal_1204 < 0)
						{
							iLocal_1204 = 2;
						}
						bVar14 = true;
						bVar14 = true;
						GlobalFunc_1588(iLocal_1204, 0, 1);
						if (bVar13)
						{
							SYSTEM::SETTIMERA(0);
							Local_168.f_103.f_10 = 1;
						}
					}
					else if (bVar12)
					{
						iLocal_1204++;
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							if (iLocal_1204 > 3)
							{
								iLocal_1204 = 0;
							}
						}
						else if (iLocal_1204 > 2)
						{
							iLocal_1204 = 0;
						}
						bVar14 = true;
						GlobalFunc_1588(iLocal_1204, 0, 1);
						if (bVar13)
						{
							SYSTEM::SETTIMERA(0);
							Local_168.f_103.f_10 = 1;
						}
					}
					else if (bVar5)
					{
						Local_168.f_103.f_5 = 1;
						bLocal_1203 = false;
						Local_168.f_103.f_2 = -1;
						Local_168.f_103.f_16 = 0;
						iLocal_1031 = 1;
						iVar20 = Var35;
						if (ENTITY::DOES_ENTITY_EXIST(Local_1233.f_2) && !PED::IS_PED_INJURED(Local_1233.f_2))
						{
							iLocal_1206 = 0;
							PED::SET_PED_COMPONENT_VARIATION(Local_1233.f_2, 5, func_465(Local_1233.f_2, iLocal_1206), GlobalFunc_282(Local_1233.f_2, iLocal_1206), GlobalFunc_81(Local_1233.f_2, iLocal_1206));
							PED::SET_PED_RESET_FLAG(Local_1233.f_2, 177, 1);
						}
					}
					else if (bVar6)
					{
						Local_168.f_103.f_16 = 0;
						AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_AMMO_SHOP_SOUNDSET", 1);
						Local_168.f_103.f_5 = 0;
						Local_168.f_103.f_2 = -1;
						iLocal_1031 = 1;
						iLocal_1204 = 0;
					}
				}
				else if (bVar11)
				{
					if (MISC::IS_BIT_SET(Local_168.f_645, 9))
					{
						if (MISC::IS_BIT_SET(Local_168.f_645, 5))
						{
							if (func_462(Var35, &iVar117))
							{
								Local_168.f_103.f_2 = iVar117 + 21;
								iLocal_1031 = 1;
								bVar14 = true;
								Local_168.f_103.f_16 = 0;
							}
						}
						else if (MISC::IS_BIT_SET(Local_168.f_645, 3))
						{
							if (func_461(Var35, &iVar117))
							{
								Local_168.f_103.f_2 = iVar117 + 1;
								iLocal_1031 = 1;
								bVar14 = true;
								Local_168.f_103.f_16 = 0;
							}
							else if (MISC::IS_BIT_SET(Local_168.f_645, 4))
							{
								Local_168.f_103.f_2 = 0;
								iLocal_1031 = 1;
								bVar14 = true;
								Local_168.f_103.f_16 = 0;
							}
						}
						else
						{
							Local_168.f_103.f_2 = 0;
							iLocal_1031 = 1;
							bVar14 = true;
							Local_168.f_103.f_16 = 0;
						}
					}
					else if (MISC::IS_BIT_SET(Local_168.f_645, 10))
					{
						if (!func_486(GlobalFunc_8354(), Var35, Local_1216))
						{
							func_470(GlobalFunc_8354(), Var35, Local_1216);
						}
						iVar117 = (Local_168.f_103.f_2 - 1);
						if (func_460(Var35, &iVar117))
						{
							Local_168.f_103.f_2 = iVar117 + 1;
							iLocal_1031 = 1;
							bVar14 = true;
							Local_168.f_103.f_16 = 0;
						}
						else if (MISC::IS_BIT_SET(Local_168.f_645, 4))
						{
							Local_168.f_103.f_2 = 0;
							iLocal_1031 = 1;
							bVar14 = true;
							Local_168.f_103.f_16 = 0;
						}
						else if (MISC::IS_BIT_SET(Local_168.f_645, 5))
						{
							func_462(Var35, &iVar117);
							Local_168.f_103.f_2 = (21 + iVar117);
							iLocal_1031 = 1;
							bVar14 = true;
							Local_168.f_103.f_16 = 0;
						}
						else
						{
							func_317(Var35, &iVar117);
							Local_168.f_103.f_2 = (1 + iVar117);
							iLocal_1031 = 1;
							bVar14 = true;
							Local_168.f_103.f_16 = 0;
						}
					}
					else if (MISC::IS_BIT_SET(Local_168.f_645, 11))
					{
						if (func_305(&Local_1222, Var35, func_307(Var35, (Local_168.f_103.f_2 - 21)), 1))
						{
							iVar118 = func_259(Var35, Local_1222.f_9, Local_1222.f_10);
							if (iVar118 != 0)
							{
								func_286(GlobalFunc_8354(), iVar118);
							}
						}
						iLocal_1206 = Local_1222.f_9;
						iVar117 = (Local_168.f_103.f_2 - 21);
						if (func_459(Var35, &iVar117))
						{
							Local_168.f_103.f_2 = iVar117 + 21;
							iLocal_1031 = 1;
							bVar14 = true;
							Local_168.f_103.f_16 = 0;
						}
						else if (MISC::IS_BIT_SET(Local_168.f_645, 3))
						{
							if (func_461(Var35, &iVar117))
							{
								Local_168.f_103.f_2 = iVar117 + 1;
								iLocal_1031 = 1;
								bVar14 = true;
								Local_168.f_103.f_16 = 0;
							}
							else if (MISC::IS_BIT_SET(Local_168.f_645, 4))
							{
								Local_168.f_103.f_2 = 0;
								iLocal_1031 = 1;
								bVar14 = true;
								Local_168.f_103.f_16 = 0;
							}
						}
						else if (MISC::IS_BIT_SET(Local_168.f_645, 4))
						{
							Local_168.f_103.f_2 = 0;
							iLocal_1031 = 1;
							bVar14 = true;
							Local_168.f_103.f_16 = 0;
						}
						else
						{
							func_462(Var35, &iVar117);
							Local_168.f_103.f_2 = (21 + iVar117);
							iLocal_1031 = 1;
							bVar14 = true;
							Local_168.f_103.f_16 = 0;
						}
					}
					GlobalFunc_1588(Local_168.f_103.f_2, 0, 1);
					iLocal_1030 = GlobalFunc_2479();
					if (bVar13)
					{
						SYSTEM::SETTIMERA(0);
						Local_168.f_103.f_10 = 1;
					}
				}
				else if (bVar12)
				{
					if (MISC::IS_BIT_SET(Local_168.f_645, 9))
					{
						if (MISC::IS_BIT_SET(Local_168.f_645, 3))
						{
							func_317(Var35, &iVar119);
							Local_168.f_103.f_2 = (1 + iVar119);
							iLocal_1031 = 1;
							bVar14 = true;
							Local_168.f_103.f_16 = 0;
						}
						else if (MISC::IS_BIT_SET(Local_168.f_645, 5))
						{
							func_313(Var35, &iVar119);
							Local_168.f_103.f_2 = (21 + iVar119);
							iLocal_1031 = 1;
							bVar14 = true;
							Local_168.f_103.f_16 = 0;
						}
						else
						{
							Local_168.f_103.f_2 = 0;
							iLocal_1031 = 1;
							bVar14 = true;
							Local_168.f_103.f_16 = 0;
						}
					}
					else if (MISC::IS_BIT_SET(Local_168.f_645, 10))
					{
						if (!func_486(GlobalFunc_8354(), Var35, Local_1216))
						{
							func_470(GlobalFunc_8354(), Var35, Local_1216);
						}
						iVar119 = (Local_168.f_103.f_2 - 1);
						if (func_457(Var35, &iVar119))
						{
							Local_168.f_103.f_2 = iVar119 + 1;
							iLocal_1031 = 1;
							bVar14 = true;
							Local_168.f_103.f_16 = 0;
						}
						else if (MISC::IS_BIT_SET(Local_168.f_645, 5))
						{
							func_313(Var35, &iVar119);
							Local_168.f_103.f_2 = (21 + iVar119);
							iLocal_1031 = 1;
							bVar14 = true;
							Local_168.f_103.f_16 = 0;
						}
						else if (MISC::IS_BIT_SET(Local_168.f_645, 4))
						{
							Local_168.f_103.f_2 = 0;
							iLocal_1031 = 1;
							bVar14 = true;
							Local_168.f_103.f_16 = 0;
						}
						else
						{
							func_317(Var35, &iVar119);
							Local_168.f_103.f_2 = (1 + iVar119);
							iLocal_1031 = 1;
							bVar14 = true;
							Local_168.f_103.f_16 = 0;
						}
					}
					else if (MISC::IS_BIT_SET(Local_168.f_645, 11))
					{
						if (func_305(&Local_1222, Var35, func_307(Var35, (Local_168.f_103.f_2 - 21)), 1))
						{
							iVar120 = func_259(Var35, Local_1222.f_9, Local_1222.f_10);
							if (iVar120 != 0)
							{
								func_286(GlobalFunc_8354(), iVar120);
							}
						}
						iLocal_1206 = Local_1222.f_9;
						iVar119 = (Local_168.f_103.f_2 - 21);
						if (func_456(Var35, &iVar119))
						{
							Local_168.f_103.f_2 = iVar119 + 21;
							iLocal_1031 = 1;
							bVar14 = true;
							Local_168.f_103.f_16 = 0;
						}
						else if (MISC::IS_BIT_SET(Local_168.f_645, 4))
						{
							Local_168.f_103.f_2 = 0;
							iLocal_1031 = 1;
							bVar14 = true;
							Local_168.f_103.f_16 = 0;
						}
						else if (MISC::IS_BIT_SET(Local_168.f_645, 3))
						{
							func_317(Var35, &iVar119);
							Local_168.f_103.f_2 = (1 + iVar119);
							iLocal_1031 = 1;
							bVar14 = true;
							Local_168.f_103.f_16 = 0;
						}
						else
						{
							func_313(Var35, &iVar119);
							Local_168.f_103.f_2 = (21 + iVar119);
							iLocal_1031 = 1;
							bVar14 = true;
							Local_168.f_103.f_16 = 0;
						}
					}
					GlobalFunc_1588(Local_168.f_103.f_2, 0, 1);
					iLocal_1030 = GlobalFunc_2479();
					if (bVar13)
					{
						SYSTEM::SETTIMERA(0);
						Local_168.f_103.f_10 = 1;
					}
				}
				else if ((bVar5 || iVar101) || Local_168.f_103.f_25)
				{
					Local_168.f_103.f_16 = 0;
					if (func_84(Local_168, &Global_2543149, &Var35, Local_168.f_103.f_3, Local_168.f_103.f_1, 1))
					{
						if (MISC::IS_BIT_SET(Local_168.f_645, 9))
						{
							if (!MISC::IS_BIT_SET(Local_168.f_645, 2))
							{
								iVar121 = Var35.f_20;
								iVar122 = Var35.f_22;
								if (Var35.f_24 == 0 && Var35 != joaat("weapon_railgun"))
								{
									iVar122 *= 2;
								}
								iVar123 = iVar122;
								if (GlobalFunc_218())
								{
									if (Var35.f_21)
									{
										Var35.f_20 = (Var35.f_20 * iVar122);
									}
								}
								if (bLocal_1100)
								{
									if (GlobalFunc_218() && Var35.f_21)
									{
										iVar121 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar121) * GlobalFunc_3263(Var35, iVar122)) * IntToFloat(iVar122)));
									}
									else
									{
										iVar121 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar121) * GlobalFunc_3263(Var35, iVar122)));
									}
									iVar122 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar122) * GlobalFunc_3263(Var35, iVar122)));
								}
								else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
								{
									func_454(Var35, &(Var35.f_20), &iVar122);
									iVar121 = Var35.f_20;
								}
								if (GlobalFunc_218() && Var35.f_21)
								{
									iVar124 = iVar122;
								}
								else if (bLocal_1100)
								{
									iVar124 = SYSTEM::FLOOR(GlobalFunc_3263(Var35, iVar123));
								}
								else
								{
									iVar124 = 1;
								}
								if (func_557(1, iVar121, Var35, Var35.f_24, 0, Local_168, iVar123, iVar122, Var35.f_25, iVar124))
								{
									Global_2540563 = 1;
									Local_168.f_103.f_23 = 1;
									WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), Var35, iVar122, 0, 0);
									bVar18 = true;
									iVar21 = Var35;
									func_284(&(Local_168.f_103), "GSM_PURCHASE", 3000);
									if (Global_68245)
									{
										if (func_556(Var35, &iVar125))
										{
											GlobalFunc_7743(iVar125, iVar122, -1);
											func_523(func_552(Var35));
										}
									}
									iLocal_1031 = 1;
								}
								else if (!Local_168.f_103.f_25)
								{
									if (Local_168.f_103.f_21)
									{
										bVar15 = true;
										func_284(&(Local_168.f_103), "GSM_AFFORD", 3000);
										GlobalFunc_2478(MISC::GET_HASH_KEY(&(Global_90014.f_1259)), Global_90014.f_1263, MISC::GET_HASH_KEY(GlobalFunc_1988(Local_168)));
										GlobalFunc_7677(0, 10, 3);
									}
									else
									{
										bVar15 = true;
										func_284(&(Local_168.f_103), "GSM_LOCK", 3000);
									}
								}
							}
							else
							{
								bVar15 = true;
								func_284(&(Local_168.f_103), "GSM_FULL", 3000);
							}
						}
						else if (MISC::IS_BIT_SET(Local_168.f_645, 11))
						{
							if (func_305(&Local_1222, Var35, func_307(Var35, (Local_168.f_103.f_2 - 21)), 1))
							{
								if (MISC::IS_BIT_SET(Local_168.f_645, 8))
								{
									if (Var35 == -61829581 && MISC::IS_BIT_SET(Local_168.f_645, 2))
									{
										bVar15 = true;
										func_284(&(Local_168.f_103), "GSM_FULL", 3000);
									}
									else if (!MISC::IS_BIT_SET(Local_168.f_645, 0))
									{
										if (func_557(3, Local_1222.f_8, Var35, Var35.f_24, 0, Local_168, 0, 0, joaat("AMMO_PISTOL"), 1))
										{
											Global_2540563 = 1;
											if (func_311(Var35))
											{
												if (func_164(&Local_1216, Var35, func_453(Var35), 0))
												{
													if (Local_1216 == func_310(Var35))
													{
														if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), Var35, Local_1216))
														{
															WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(PLAYER::PLAYER_PED_ID(), Var35, Local_1216);
															func_452(Var35);
															if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
															{
																GlobalFunc_9460(Local_1216, Var35, 0);
															}
															func_284(&(Local_168.f_103), "GSM_REMOVE", 3000);
															Local_168.f_103.f_23 = 1;
															bVar17 = true;
														}
													}
												}
											}
											if (Local_1222.f_10 == 0)
											{
												WEAPON::SET_PED_WEAPON_TINT_INDEX(PLAYER::PLAYER_PED_ID(), Var35, Local_1222.f_9);
												iLocal_1026 = Local_1222.f_9;
											}
											else if (Local_1222.f_10 == 2)
											{
												PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_ID(), Local_1222.f_9);
												if (GlobalFunc_281())
												{
													PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(PLAYER::PLAYER_ID(), joaat("lts_p_para_pilot2_sp_s"));
												}
												else if (GlobalFunc_280())
												{
													PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(PLAYER::PLAYER_ID(), joaat("pil_p_para_pilot_sp_s"));
												}
												if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
												{
													GlobalFunc_6720(573, Local_1222.f_9, -1, 1);
												}
												else
												{
													iVar126 = GlobalFunc_8354();
													if (iVar126 == 0)
													{
														STATS::STAT_SET_INT(joaat("sp0_parachute_current_tint"), Local_1222.f_9, 1);
													}
													else if (iVar126 == 1)
													{
														STATS::STAT_SET_INT(joaat("sp1_parachute_current_tint"), Local_1222.f_9, 1);
													}
													else if (iVar126 == 2)
													{
														STATS::STAT_SET_INT(joaat("sp2_parachute_current_tint"), Local_1222.f_9, 1);
													}
												}
												iLocal_1026 = Local_1222.f_9;
											}
											else if (Local_1222.f_10 == 3)
											{
												GlobalFunc_7885(Local_1222.f_9, 1);
												iLocal_1027 = Local_1222.f_9;
											}
											else if (Local_1222.f_10 == 1)
											{
												func_512(Local_1222.f_9, 1);
												iLocal_1029 = Local_1222.f_9;
											}
											else if (Local_1222.f_10 == 4)
											{
												GlobalFunc_1942(Local_1222.f_9, &iVar127, &iVar128, &iVar129);
												PLAYER::SET_PLAYER_PARACHUTE_SMOKE_TRAIL_COLOR(PLAYER::PLAYER_ID(), iVar127, iVar128, iVar129);
												PLAYER::SET_PLAYER_CAN_LEAVE_PARACHUTE_SMOKE_TRAIL(PLAYER::PLAYER_ID(), Local_1222.f_9 > 0);
												if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
												{
													GlobalFunc_6720(1433, Local_1222.f_9, -1, 1);
												}
												iLocal_1028 = Local_1222.f_9;
												if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
												{
													func_441(6, Local_1222.f_9 == 6);
													if (Local_1222.f_9 == 7)
													{
														GlobalFunc_5217(3602, 1, -1, 1);
													}
												}
											}
											else if (Local_1222.f_10 == 5)
											{
												iVar130 = 0;
												if (Local_1222.f_9 == 0)
												{
													iVar130 = GlobalFunc_6872(2782, -1, 0);
												}
												else if (Local_1222.f_9 == 1)
												{
													iVar130 = GlobalFunc_6872(2781, -1, 0);
												}
												else if (Local_1222.f_9 == 2)
												{
													iVar130 = GlobalFunc_6872(2783, -1, 0);
												}
												else if (Local_1222.f_9 == 3)
												{
													iVar130 = GlobalFunc_6872(2785, -1, 0);
												}
												else if (Local_1222.f_9 == 4)
												{
													iVar130 = GlobalFunc_6872(2784, -1, 0);
												}
												else if (Local_1222.f_9 == 5)
												{
													iVar130 = GlobalFunc_6872(2786, -1, 0);
												}
												else if (Local_1222.f_9 == 6)
												{
													iVar130 = GlobalFunc_6872(2788, -1, 0);
												}
												else if (Local_1222.f_9 == 7)
												{
													iVar130 = GlobalFunc_6872(2787, -1, 0);
												}
												else if (Local_1222.f_9 == 8)
												{
													iVar130 = GlobalFunc_6872(2789, -1, 0);
												}
												else if (Local_1222.f_9 == 9)
												{
													iVar130 = GlobalFunc_6872(2791, -1, 0);
												}
												else if (Local_1222.f_9 == 10)
												{
													iVar130 = GlobalFunc_6872(2790, -1, 0);
												}
												else if (Local_1222.f_9 == 11)
												{
													iVar130 = GlobalFunc_6872(2792, -1, 0);
												}
												iVar130++;
												if (Local_1222.f_9 == 0)
												{
													GlobalFunc_6720(2782, iVar130, -1, 1);
												}
												else if (Local_1222.f_9 == 1)
												{
													GlobalFunc_6720(2781, iVar130, -1, 1);
												}
												else if (Local_1222.f_9 == 2)
												{
													GlobalFunc_6720(2783, iVar130, -1, 1);
												}
												else if (Local_1222.f_9 == 3)
												{
													GlobalFunc_6720(2785, iVar130, -1, 1);
												}
												else if (Local_1222.f_9 == 4)
												{
													GlobalFunc_6720(2784, iVar130, -1, 1);
												}
												else if (Local_1222.f_9 == 5)
												{
													GlobalFunc_6720(2786, iVar130, -1, 1);
												}
												else if (Local_1222.f_9 == 6)
												{
													GlobalFunc_6720(2788, iVar130, -1, 1);
												}
												else if (Local_1222.f_9 == 7)
												{
													GlobalFunc_6720(2787, iVar130, -1, 1);
												}
												else if (Local_1222.f_9 == 8)
												{
													GlobalFunc_6720(2789, iVar130, -1, 1);
												}
												else if (Local_1222.f_9 == 9)
												{
													GlobalFunc_6720(2791, iVar130, -1, 1);
												}
												else if (Local_1222.f_9 == 10)
												{
													GlobalFunc_6720(2790, iVar130, -1, 1);
												}
												else if (Local_1222.f_9 == 11)
												{
													GlobalFunc_6720(2792, iVar130, -1, 1);
												}
											}
											if (Var35 == joaat("gadget_parachute"))
											{
												WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), Var35, 1, 0, 0);
											}
											if (func_506(PLAYER::PLAYER_PED_ID(), Var35))
											{
												GlobalFunc_8960(29, 1);
											}
											func_434(Var35);
											Local_168.f_103.f_23 = 1;
											iVar21 = Var35;
											func_284(&(Local_168.f_103), "GSM_PURCHASE", 3000);
										}
										else if (!Local_168.f_103.f_25)
										{
											if (Local_168.f_103.f_21)
											{
												bVar15 = true;
												func_284(&(Local_168.f_103), "GSM_AFFORD", 3000);
												GlobalFunc_2478(MISC::GET_HASH_KEY(&(Global_90014.f_1259)), Global_90014.f_1263, MISC::GET_HASH_KEY(GlobalFunc_1988(Local_168)));
												GlobalFunc_7677(0, 10, 3);
											}
											else
											{
												bVar15 = true;
												func_284(&(Local_168.f_103), "GSM_LOCK", 3000);
											}
										}
									}
									else if (!MISC::IS_BIT_SET(Local_168.f_645, 6))
									{
										if (func_311(Var35))
										{
											if (func_164(&Local_1216, Var35, func_453(Var35), 0))
											{
												if (Local_1216 == func_310(Var35))
												{
													if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), Var35, Local_1216))
													{
														WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(PLAYER::PLAYER_PED_ID(), Var35, Local_1216);
														func_452(Var35);
														if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
														{
															GlobalFunc_9460(Local_1216, Var35, 0);
														}
														func_284(&(Local_168.f_103), "GSM_REMOVE", 3000);
														Local_168.f_103.f_23 = 1;
														bVar17 = true;
													}
												}
											}
										}
										if (Local_1222.f_10 == 0)
										{
											WEAPON::SET_PED_WEAPON_TINT_INDEX(PLAYER::PLAYER_PED_ID(), Var35, Local_1222.f_9);
											iLocal_1026 = Local_1222.f_9;
										}
										else if (Local_1222.f_10 == 2)
										{
											PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_ID(), Local_1222.f_9);
											if (GlobalFunc_281())
											{
												PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(PLAYER::PLAYER_ID(), joaat("lts_p_para_pilot2_sp_s"));
											}
											else if (GlobalFunc_280())
											{
												PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(PLAYER::PLAYER_ID(), joaat("pil_p_para_pilot_sp_s"));
											}
											if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
											{
												GlobalFunc_6720(573, Local_1222.f_9, -1, 1);
											}
											else
											{
												iVar131 = GlobalFunc_8354();
												if (iVar131 == 0)
												{
													STATS::STAT_SET_INT(joaat("sp0_parachute_current_tint"), Local_1222.f_9, 1);
												}
												else if (iVar131 == 1)
												{
													STATS::STAT_SET_INT(joaat("sp1_parachute_current_tint"), Local_1222.f_9, 1);
												}
												else if (iVar131 == 2)
												{
													STATS::STAT_SET_INT(joaat("sp2_parachute_current_tint"), Local_1222.f_9, 1);
												}
											}
											iLocal_1026 = Local_1222.f_9;
										}
										else if (Local_1222.f_10 == 3)
										{
											GlobalFunc_7885(Local_1222.f_9, 1);
											iLocal_1027 = Local_1222.f_9;
										}
										else if (Local_1222.f_10 == 1)
										{
											func_512(Local_1222.f_9, 1);
											iLocal_1029 = Local_1222.f_9;
										}
										else if (Local_1222.f_10 == 4)
										{
											GlobalFunc_1942(Local_1222.f_9, &iVar132, &iVar133, &iVar134);
											PLAYER::SET_PLAYER_PARACHUTE_SMOKE_TRAIL_COLOR(PLAYER::PLAYER_ID(), iVar132, iVar133, iVar134);
											PLAYER::SET_PLAYER_CAN_LEAVE_PARACHUTE_SMOKE_TRAIL(PLAYER::PLAYER_ID(), Local_1222.f_9 > 0);
											iLocal_1028 = Local_1222.f_9;
											if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
											{
												func_441(6, Local_1222.f_9 == 6);
											}
										}
										else if (Local_1222.f_10 == 5)
										{
											iVar135 = 0;
											if (Local_1222.f_9 == 0)
											{
												iVar135 = GlobalFunc_6872(2782, -1, 0);
											}
											else if (Local_1222.f_9 == 1)
											{
												iVar135 = GlobalFunc_6872(2781, -1, 0);
											}
											else if (Local_1222.f_9 == 2)
											{
												iVar135 = GlobalFunc_6872(2783, -1, 0);
											}
											else if (Local_1222.f_9 == 3)
											{
												iVar135 = GlobalFunc_6872(2785, -1, 0);
											}
											else if (Local_1222.f_9 == 4)
											{
												iVar135 = GlobalFunc_6872(2784, -1, 0);
											}
											else if (Local_1222.f_9 == 5)
											{
												iVar135 = GlobalFunc_6872(2786, -1, 0);
											}
											else if (Local_1222.f_9 == 6)
											{
												iVar135 = GlobalFunc_6872(2788, -1, 0);
											}
											else if (Local_1222.f_9 == 7)
											{
												iVar135 = GlobalFunc_6872(2787, -1, 0);
											}
											else if (Local_1222.f_9 == 8)
											{
												iVar135 = GlobalFunc_6872(2789, -1, 0);
											}
											else if (Local_1222.f_9 == 9)
											{
												iVar135 = GlobalFunc_6872(2791, -1, 0);
											}
											else if (Local_1222.f_9 == 10)
											{
												iVar135 = GlobalFunc_6872(2790, -1, 0);
											}
											else if (Local_1222.f_9 == 11)
											{
												iVar135 = GlobalFunc_6872(2792, -1, 0);
											}
											iVar135++;
											if (Local_1222.f_9 == 0)
											{
												GlobalFunc_6720(2782, iVar135, -1, 1);
											}
											else if (Local_1222.f_9 == 1)
											{
												GlobalFunc_6720(2781, iVar135, -1, 1);
											}
											else if (Local_1222.f_9 == 2)
											{
												GlobalFunc_6720(2783, iVar135, -1, 1);
											}
											else if (Local_1222.f_9 == 3)
											{
												GlobalFunc_6720(2785, iVar135, -1, 1);
											}
											else if (Local_1222.f_9 == 4)
											{
												GlobalFunc_6720(2784, iVar135, -1, 1);
											}
											else if (Local_1222.f_9 == 5)
											{
												GlobalFunc_6720(2786, iVar135, -1, 1);
											}
											else if (Local_1222.f_9 == 6)
											{
												GlobalFunc_6720(2788, iVar135, -1, 1);
											}
											else if (Local_1222.f_9 == 7)
											{
												GlobalFunc_6720(2787, iVar135, -1, 1);
											}
											else if (Local_1222.f_9 == 8)
											{
												GlobalFunc_6720(2789, iVar135, -1, 1);
											}
											else if (Local_1222.f_9 == 9)
											{
												GlobalFunc_6720(2791, iVar135, -1, 1);
											}
											else if (Local_1222.f_9 == 10)
											{
												GlobalFunc_6720(2790, iVar135, -1, 1);
											}
											else if (Local_1222.f_9 == 11)
											{
												GlobalFunc_6720(2792, iVar135, -1, 1);
											}
										}
										func_434(Var35);
										func_284(&(Local_168.f_103), "GSM_EQUIP", 3000);
										Local_168.f_103.f_23 = 1;
										bVar16 = true;
										if (func_506(PLAYER::PLAYER_PED_ID(), Var35))
										{
											GlobalFunc_8960(29, 1);
										}
									}
									else
									{
										bVar15 = true;
										func_284(&(Local_168.f_103), "GSM_HAVE", 3000);
									}
								}
								else if (Global_68245)
								{
									bVar15 = true;
									func_284(&(Local_168.f_103), "GSM_LOCK", 3000);
								}
								else
								{
									bVar15 = true;
									func_284(&(Local_168.f_103), "GSM_LOCK", 3000);
								}
							}
							iLocal_1031 = 1;
						}
						else if (MISC::IS_BIT_SET(Local_168.f_645, 10))
						{
							if (func_164(&Local_1216, Var35, (Local_168.f_103.f_2 - 1), 1))
							{
								if (MISC::IS_BIT_SET(Local_168.f_645, 8))
								{
									if (func_433(Var35, Local_1216, Local_1216.f_2))
									{
										StringCopy(&cVar23, "GSM_EQUIP", 16);
									}
									else
									{
										StringCopy(&cVar23, "GSM_PURCHASE", 16);
									}
									if (!MISC::IS_BIT_SET(Local_168.f_645, 0))
									{
										if (func_557(2, Local_1216.f_2, Var35, Var35.f_24, Local_1216, Local_168, 0, 0, joaat("AMMO_PISTOL"), 1))
										{
											Global_2540563 = 1;
											Local_168.f_103.f_23 = 1;
											if (Local_1216 != 0)
											{
												if (Local_1216.f_4 == -1441477783)
												{
													WEAPON::SET_PED_WEAPON_TINT_INDEX(PLAYER::PLAYER_PED_ID(), Var35, -1);
													iLocal_1026 = -1;
													func_284(&(Local_168.f_103), "GSM_REMOVE", 3000);
												}
												WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), Var35, Local_1216);
												func_452(Var35);
												STATS::PLAYSTATS_WEAPON_MODE_CHANGE(Var35, Local_1216, 0);
											}
											iVar21 = Var35;
											func_284(&(Local_168.f_103), &cVar23, 3000);
											if (func_506(PLAYER::PLAYER_PED_ID(), Var35))
											{
												GlobalFunc_8960(29, 1);
											}
										}
										else if (!Local_168.f_103.f_25)
										{
											if (Local_168.f_103.f_21)
											{
												bVar15 = true;
												func_284(&(Local_168.f_103), "GSM_AFFORD", 3000);
												GlobalFunc_2478(MISC::GET_HASH_KEY(&(Global_90014.f_1259)), Global_90014.f_1263, MISC::GET_HASH_KEY(GlobalFunc_1988(Local_168)));
												GlobalFunc_7677(0, 10, 3);
											}
											else
											{
												bVar15 = true;
												func_284(&(Local_168.f_103), "GSM_LOCK", 3000);
											}
										}
									}
									else if (!MISC::IS_BIT_SET(Local_168.f_645, 6))
									{
										if (Local_1216 != 0)
										{
											if (Local_1216.f_4 == -1441477783)
											{
												WEAPON::SET_PED_WEAPON_TINT_INDEX(PLAYER::PLAYER_PED_ID(), Var35, -1);
												iLocal_1026 = -1;
												func_284(&(Local_168.f_103), "GSM_REMOVE", 3000);
											}
											WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), Var35, Local_1216);
											func_452(Var35);
											if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
											{
												GlobalFunc_9460(Local_1216, Var35, 1);
											}
											STATS::PLAYSTATS_WEAPON_MODE_CHANGE(Var35, Local_1216, 0);
											func_284(&(Local_168.f_103), "GSM_EQUIP", 3000);
											Local_168.f_103.f_23 = 1;
											bVar16 = true;
											if (func_506(PLAYER::PLAYER_PED_ID(), Var35))
											{
												GlobalFunc_8960(29, 1);
											}
										}
									}
									else if (MISC::IS_BIT_SET(Local_168.f_645, 12))
									{
										if (Local_1216 != 0)
										{
											WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(PLAYER::PLAYER_PED_ID(), Var35, Local_1216);
											func_452(Var35);
											if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
											{
												GlobalFunc_9460(Local_1216, Var35, 0);
											}
											func_284(&(Local_168.f_103), "GSM_REMOVE", 3000);
											Local_168.f_103.f_23 = 1;
											bVar17 = true;
											if (Local_1216.f_4 == -1441477783)
											{
												WEAPON::SET_PED_WEAPON_TINT_INDEX(PLAYER::PLAYER_PED_ID(), Var35, 0);
												iLocal_1026 = 0;
												func_284(&(Local_168.f_103), "GSM_REMOVE", 3000);
											}
										}
									}
									else
									{
										bVar15 = true;
										func_284(&(Local_168.f_103), "GSM_NOTOGGLE", 3000);
									}
								}
								else if (Global_68245)
								{
									bVar15 = true;
									func_284(&(Local_168.f_103), "GSM_LOCK_FM", 3000);
								}
								else
								{
									bVar15 = true;
									func_284(&(Local_168.f_103), "GSM_LOCK", 3000);
								}
							}
							iLocal_1031 = 1;
						}
					}
				}
				else if (bVar7)
				{
					if (MISC::IS_BIT_SET(Local_168.f_645, 9))
					{
						if (func_84(Local_168, &Global_2543149, &Var35, Local_168.f_103.f_3, Local_168.f_103.f_1, 0))
						{
							if (Var35.f_24 == 0)
							{
								bLocal_1100 = !bLocal_1100;
								iLocal_1031 = 1;
								AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_SELECT_OTHER", "HUD_AMMO_SHOP_SOUNDSET", 1);
							}
						}
					}
				}
				else if (bVar6)
				{
					if (MISC::IS_BIT_SET(Local_168.f_645, 10))
					{
						if (!func_486(GlobalFunc_8354(), Var35, Local_1216))
						{
							func_470(GlobalFunc_8354(), Var35, Local_1216);
						}
					}
					else if (MISC::IS_BIT_SET(Local_168.f_645, 11))
					{
						if (func_305(&Local_1222, Var35, func_307(Var35, (Local_168.f_103.f_2 - 21)), 1))
						{
							iVar136 = func_259(Var35, Local_1222.f_9, Local_1222.f_10);
							if (iVar136 != 0)
							{
								func_286(GlobalFunc_8354(), iVar136);
							}
						}
					}
					if (Var35 == joaat("gadget_parachute"))
					{
						Local_168.f_103.f_16 = 0;
						AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_AMMO_SHOP_SOUNDSET", 1);
						Local_168.f_103.f_5 = 1;
						bLocal_1203 = true;
						iLocal_1031 = 1;
						if (func_84(Local_168, &Global_2543149, &Var35, Local_168.f_103.f_3, Local_168.f_103.f_1, 0))
						{
							func_327(&(Local_168.f_218[(Local_168.f_103.f_3 * 6 + Local_168.f_103.f_1)]), &Var35);
						}
					}
					else
					{
						Local_168.f_103.f_16 = 0;
						AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_AMMO_SHOP_SOUNDSET", 1);
						iLocal_1199 = 0;
						Local_168.f_103.f_17 = 0;
						Local_168.f_103.f_5 = 0;
						Local_168.f_103.f_2 = -1;
						iLocal_1031 = 1;
						if (func_84(Local_168, &Global_2543149, &Var35, Local_168.f_103.f_3, Local_168.f_103.f_1, 0))
						{
							func_327(&(Local_168.f_218[(Local_168.f_103.f_3 * 6 + Local_168.f_103.f_1)]), &Var35);
						}
					}
				}
				break;
		}
		if (bVar14)
		{
			if (Local_168.f_103.f_5 == 0)
			{
				if (func_84(Local_168, &Global_2543149, &Var35, Local_168.f_103.f_3, Local_168.f_103.f_1, 1))
				{
					func_282(&Global_2543149, Local_168.f_103.f_3, Local_168.f_103.f_1, &Var27, &cVar31);
					func_432(Var27, Var35.f_19, Var35, 1, 0);
				}
			}
			else if (Local_168.f_103.f_5 == 1)
			{
				if (Local_168.f_103.f_2 == 0)
				{
					if (func_84(Local_168, &Global_2543149, &Var35, Local_168.f_103.f_3, Local_168.f_103.f_1, 1))
					{
						iVar137 = Var35.f_22;
						if (Var35.f_24 == 0)
						{
							iVar137 *= 2;
						}
						iVar138 = Var35.f_20;
						if (bLocal_1100)
						{
							iVar138 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar138) * GlobalFunc_3263(Var35, iVar137)));
							iVar137 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar137) * GlobalFunc_3263(Var35, iVar137)));
						}
						GlobalFunc_3257(Var35.f_25, iVar137, &Var27, 0);
						if (bLocal_1100)
						{
							StringCopy(&Var27, "GS_BUY_AF", 16);
							func_432(Var27, iVar138, Var35, iVar137, 0);
						}
						else
						{
							func_432(Var27, iVar138, Var35, iVar137, 0);
						}
					}
					fVar141 = (1f - func_94(Var35, &iVar139, &iVar140));
					if (fVar141 != 0f)
					{
						GlobalFunc_2588("GSHOP_DISC", 0, 0);
						func_298(SYSTEM::ROUND((fVar141 * 100f)));
					}
				}
				else if (Local_168.f_103.f_2 >= 1 && Local_168.f_103.f_2 < 21)
				{
					if (func_84(Local_168, &Global_2543149, &Var35, Local_168.f_103.f_3, Local_168.f_103.f_1, 0))
					{
						if (func_164(&Local_1216, Var35, Local_168.f_103.f_2, 1))
						{
							func_279(Var35, (Local_168.f_103.f_2 - 1), &Var27, &cVar31);
							func_432(Var27, Local_1216.f_2, Var35, 1, 0);
						}
					}
					fVar143 = (1f - func_166(Var35, &iVar142, 1065353216));
					if (fVar143 != 0f)
					{
						GlobalFunc_2588("GSHOP_DISC", 0, 0);
						func_298(SYSTEM::ROUND((fVar143 * 100f)));
					}
				}
				else if (Local_168.f_103.f_2 >= 21)
				{
					if (func_84(Local_168, &Global_2543149, &Var35, Local_168.f_103.f_3, Local_168.f_103.f_1, 0))
					{
						if (func_305(&Local_1222, Var35, func_307(Var35, (Local_168.f_103.f_2 - 21)), 1) && func_314(Var35, Local_1222.f_9, Local_1222.f_10))
						{
							func_432(Var27, Local_1216.f_2, Var35, 1, 0);
						}
					}
					uVar144 = Local_1216.f_2;
					fVar145 = (1f - func_238(Var35, &uVar144));
					if (fVar145 != 0f)
					{
						GlobalFunc_2588("GSHOP_DISC", 0, 0);
						func_298(SYSTEM::ROUND((fVar145 * 100f)));
					}
				}
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV", "HUD_AMMO_SHOP_SOUNDSET", 1);
		}
		if (iVar20 != 0)
		{
			func_683(iVar20);
		}
		if (iVar21 != 0)
		{
			if (bVar18)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_AMMO_PURCHASE", "HUD_AMMO_SHOP_SOUNDSET", 1);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_PURCHASE", "HUD_AMMO_SHOP_SOUNDSET", 1);
			}
		}
		if (bVar16)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_ATTACHMENT_EQUIP", "HUD_AMMO_SHOP_SOUNDSET", 1);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_PURCHASE", "HUD_AMMO_SHOP_SOUNDSET", 1);
			}
		}
		if (bVar17)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_ATTACHMENT_UNEQUIP", "HUD_AMMO_SHOP_SOUNDSET", 1);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_AMMO_SHOP_SOUNDSET", 1);
			}
		}
		if (bVar15)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_AMMO_SHOP_SOUNDSET", 1);
		}
		if (bVar14 && Local_168.f_103.f_5 == 0)
		{
			Local_168.f_103.f_17 = 0;
			iLocal_1019 = 0;
		}
		if (bVar22)
		{
			if (bVar4 || iLocal_1019)
			{
				if (!Local_168.f_103.f_17)
				{
					if (func_84(Local_168, &Global_2543149, &Var35, Local_168.f_103.f_3, Local_168.f_103.f_1, 0))
					{
						func_635(&Local_168, &(Local_168.f_103), &Var35, 1);
						if (Local_168.f_103 == 0)
						{
							Local_168.f_38[Local_168.f_103.f_4 /*12*/].f_7 = (Local_168.f_38[Local_168.f_103.f_4 /*12*/].f_7 - 2f);
						}
						else if (Local_168.f_103 == 1)
						{
							Local_168.f_38[Local_168.f_103.f_4 /*12*/].f_7 = (Local_168.f_38[Local_168.f_103.f_4 /*12*/].f_7 - 1f);
						}
						Var146 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var35.f_1, Var35.f_4.f_2, Var35.f_7) };
						Var149 = { Local_168.f_38[Local_168.f_103.f_4 /*12*/].f_1 };
						fVar152 = 0.4f;
						Local_168.f_38[Local_168.f_103.f_4 /*12*/].f_1 = { Local_168.f_38[Local_168.f_103.f_4 /*12*/].f_1 + Var146 - Var149 * Vector(fVar152, fVar152, fVar152) };
						Local_168.f_103.f_17 = 1;
					}
				}
			}
			else if (Local_168.f_103.f_17)
			{
				if (func_84(Local_168, &Global_2543149, &Var35, Local_168.f_103.f_3, Local_168.f_103.f_1, 0))
				{
					func_635(&Local_168, &(Local_168.f_103), &Var35, 0);
					Local_168.f_103.f_17 = 0;
				}
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_344();
			if (((Local_168.f_103.f_5 == 1 && Local_168.f_103.f_2 >= 21) && !bLocal_1203) && iLocal_1204 == 3)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1233.f_2) && !PED::IS_PED_INJURED(Local_1233.f_2))
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_1233.f_2, 5, func_465(Local_1233.f_2, iLocal_1206), GlobalFunc_282(Local_1233.f_2, iLocal_1206), GlobalFunc_81(Local_1233.f_2, iLocal_1206));
					PED::SET_PED_RESET_FLAG(Local_1233.f_2, 177, 1);
					ENTITY::SET_ENTITY_VISIBLE(Local_1233.f_2, true);
					bLocal_1205 = true;
				}
			}
			else if (bLocal_1205)
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_1233.f_2, false);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, 1);
				bLocal_1205 = false;
			}
		}
	}
}

void func_344()//Position - 0x2BE36
{
	if (Global_68245)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_694())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_1233.f_2))
				{
					Local_1233.f_2 = PED::CLONE_PED(PLAYER::PLAYER_PED_ID(), 0, 0, 0);
					Global_2542603 = Local_1233.f_2;
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1233.f_2, Local_168.f_170.f_31, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_1233.f_2, Local_168.f_170.f_34);
					ENTITY::SET_ENTITY_COLLISION(Local_1233.f_2, false, 0);
					ENTITY::FREEZE_ENTITY_POSITION(Local_1233.f_2, true);
					ENTITY::SET_ENTITY_VISIBLE(Local_1233.f_2, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1233.f_2, 0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1233.f_2, 1);
					func_345(&(Local_1233.f_2), -1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_1233.f_2, 5, 0, 0, 0);
				}
			}
		}
	}
}

void func_345(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x2BEEE
{
	struct<9> Var0;
	int iVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<8> Var20;
	int iVar35;
	
	if (iParam1 == -1)
	{
		iParam1 = GlobalFunc_5();
	}
	if (!bParam3)
	{
		PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(*uParam0);
	}
	iVar13 = GlobalFunc_303(*uParam0);
	bVar14 = func_429(*uParam0);
	bVar15 = GlobalFunc_5010(*uParam0);
	bVar16 = func_354(*uParam0);
	iVar17 = 0;
	while (iVar17 < 127)
	{
		if (GlobalFunc_8430(iVar17, iParam1))
		{
			if (GlobalFunc_5123(&Var0, iVar17, iVar13, *uParam0, -1))
			{
				if (GlobalFunc_9071(&Var0, Var0.f_8, bVar14, bVar15, bParam2, bVar16))
				{
					if (!bParam3)
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(*uParam0, Var0.f_4, Var0.f_5);
					}
				}
			}
		}
		iVar17++;
	}
	if (GlobalFunc_8430(123, -1))
	{
		if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
		{
			if (!bParam3)
			{
				PED::ADD_PED_DECORATION_FROM_HASHES(*uParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
	}
	iVar19 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar13);
	iVar18 = 0;
	while (iVar18 < iVar19)
	{
		if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar13, iVar18, &Var20))
		{
			if (!FILES::IS_CONTENT_ITEM_LOCKED(Var20))
			{
				iVar35 = (129 + iVar18);
				if (GlobalFunc_8430(iVar35, iParam1))
				{
					if (GlobalFunc_9071(&(Var20.f_7), Var20.f_6, bVar14, bVar15, bParam2, bVar16))
					{
						if (!bParam3)
						{
							PED::ADD_PED_DECORATION_FROM_HASHES(*uParam0, Var20.f_2, Var20.f_3);
							func_346(*uParam0, Var20.f_2, Var20.f_3);
						}
					}
				}
			}
		}
		iVar18++;
	}
}

void func_346(var uParam0, int iParam1, int iParam2)//Position - 0x2C040
{
	switch (iParam1)
	{
		case joaat("mpHeist_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Elite_M_Tshirt_1"):
					PED::ADD_PED_DECORATION_FROM_HASHES(uParam0, joaat("mpHeist_overlays"), joaat("MP_Elite_M_Tshirt_2"));
					break;
				
				case joaat("MP_Elite_F_Tshirt_1"):
					PED::ADD_PED_DECORATION_FROM_HASHES(uParam0, joaat("mpHeist_overlays"), joaat("MP_Elite_F_Tshirt_2"));
					break;
			}
			break;
		
		case joaat("mpLuxe_overlays"):
			switch (iParam2)
			{
				case joaat("MP_LUXE_TAT_029_M"):
					PED::ADD_PED_DECORATION_FROM_HASHES(uParam0, joaat("mpLuxe_overlays"), joaat("MP_LUXE_TAT_030_M"));
					PED::ADD_PED_DECORATION_FROM_HASHES(uParam0, joaat("mpLuxe_overlays"), joaat("MP_LUXE_TAT_031_M"));
					break;
				
				case joaat("MP_LUXE_TAT_029_F"):
					PED::ADD_PED_DECORATION_FROM_HASHES(uParam0, joaat("mpLuxe_overlays"), joaat("MP_LUXE_TAT_030_F"));
					PED::ADD_PED_DECORATION_FROM_HASHES(uParam0, joaat("mpLuxe_overlays"), joaat("MP_LUXE_TAT_031_F"));
					break;
			}
			break;
	}
}








int func_354(int iParam0)//Position - 0x2F7BB
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
			iVar1 = GlobalFunc_6872(1743, -1, 0);
			if (iVar0 > 15)
			{
				iVar2 = func_359(iParam0, 11, -1);
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
			iVar1 = GlobalFunc_6872(1743, -1, 0);
			if (iVar0 > 15)
			{
				iVar4 = func_359(iParam0, 11, -1);
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





int func_359(int iParam0, int iParam1, int iParam2)//Position - 0x2FE9F
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
				if (func_365(iParam0, iParam1, iVar0))
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
				if (func_365(iParam0, iParam1, iVar1))
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
				return GlobalFunc_7614(iParam0, iParam2);
			}
		}
		else
		{
			return GlobalFunc_7054(iParam0, iParam1);
		}
	}
	return -99;
}






int func_365(int iParam0, int iParam1, int iParam2)//Position - 0x30327
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar24;
	int iVar34;
	var uVar35;
	var uVar45;
	
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_68106[1 /*14*/] = { GlobalFunc_10848(iVar0, iParam1, iParam2) };
	uVar2 = Global_2621444;
	uVar3 = Global_2621445;
	if (!MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { GlobalFunc_7617(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 < 7)
		{
			switch (iVar7)
			{
				case 0:
					iVar4 = 1;
					break;
				
				case 1:
					iVar4 = 4;
					break;
				
				case 2:
					iVar4 = 6;
					break;
				
				case 3:
					iVar4 = 7;
					break;
				
				case 4:
					iVar4 = 8;
					break;
				
				case 5:
					iVar4 = 11;
					break;
				
				case 6:
					iVar4 = 13;
					break;
			}
			if (uVar8[iVar4] != -99)
			{
				if (!func_365(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2621444 = uVar2;
					Global_2621445 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar24 = { GlobalFunc_7616(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_365(iParam0, 14, uVar24[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_68106[2 /*14*/] = { GlobalFunc_10848(iVar0, 14, iVar6) };
									if (Global_68106[2 /*14*/].f_12 == iVar5)
									{
										if (func_365(iParam0, 14, iVar6))
										{
											if (!GlobalFunc_8307(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_68106[2 /*14*/])))
											{
												Global_2621444 = uVar2;
												Global_2621445 = uVar3;
												return 0;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else
					{
						iVar1 = GlobalFunc_7054(iParam0, iVar4);
						Global_68106[2 /*14*/] = { GlobalFunc_10848(iVar0, iVar4, iVar1) };
						if (!GlobalFunc_8307(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_68106[2 /*14*/])))
						{
							Global_2621444 = uVar2;
							Global_2621445 = uVar3;
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
		if (uVar8[10] != 0 && uVar8[10] != joaat("0"))
		{
			if (GlobalFunc_6872(1743, Global_68104, 0) != uVar8[10])
			{
				Global_2621444 = uVar2;
				Global_2621445 = uVar3;
				return 0;
			}
		}
		Global_2621444 = uVar2;
		Global_2621445 = uVar3;
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar35 = { GlobalFunc_7616(iVar0, iParam2) };
		iVar34 = 0;
		while (iVar34 <= 8)
		{
			if (!func_365(iParam0, 14, uVar35[iVar34]))
			{
				return 0;
			}
			iVar34++;
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
	else
	{
		if (Global_68106[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, GlobalFunc_33(iParam1)) && Global_68106[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, GlobalFunc_33(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			if (GlobalFunc_6729(iVar0, 11, GlobalFunc_7054(iParam0, 11)))
			{
				if (GlobalFunc_6727(iVar0, 4, iParam2, &uVar45))
				{
					return func_365(iParam0, 4, uVar45);
				}
			}
			else if (GlobalFunc_6726(iVar0, 4, iParam2, &uVar45))
			{
				return func_365(iParam0, 4, uVar45);
			}
		}
	}
	return 0;
}
































































int func_429(int iParam0)//Position - 0x4D6B0
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
						iVar2 = func_359(iParam0, 11, -1);
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
						iVar4 = func_359(iParam0, 8, -1);
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
						iVar6 = func_359(iParam0, 11, -1);
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
						iVar8 = func_359(iParam0, 8, -1);
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



void func_432(char[16] cParam0, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x4DD16
{
	Global_90014.f_1259 = { cParam0 };
	Global_90014.f_1263 = iParam4;
	Global_90014.f_1264 = iParam5;
	Global_90014.f_1265 = iParam6;
	Global_90014.f_1266 = iParam7;
}

int func_433(int iParam0, int iParam1, int iParam2)//Position - 0x4DD4F
{
	if (iParam2 <= 0)
	{
		return 1;
	}
	if (iParam0 == joaat("weapon_sniperrifle") && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("trevor2")) != 0)
	{
		if (iParam1 == joaat("component_at_scope_max") || iParam1 == joaat("component_at_ar_supp_02"))
		{
			return 1;
		}
	}
	return 0;
}

void func_434(int iParam0)//Position - 0x4DD9A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && iParam0 != 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar2 = func_337(iParam0, 0);
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				if (func_305(&Local_1222, iParam0, iVar0, 0))
				{
					iVar1 = func_259(iParam0, Local_1222.f_9, Local_1222.f_10);
					if (iVar1 != 0)
					{
						if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0, 0))
						{
							if ((((Local_1222.f_10 == 0 && Local_1222.f_9 == iLocal_1026) || (Local_1222.f_10 == 2 && Local_1222.f_9 == iLocal_1026)) || (Local_1222.f_10 == 3 && Local_1222.f_9 == iLocal_1027)) || (Local_1222.f_10 == 1 && Local_1222.f_9 == iLocal_1029))
							{
								func_435(iVar1, 1, -1);
							}
							else
							{
								func_435(iVar1, 0, -1);
							}
						}
						else
						{
							func_435(iVar1, 0, -1);
						}
					}
				}
				iVar0++;
			}
		}
	}
}

void func_435(int iParam0, bool bParam1, int iParam2)//Position - 0x4DE96
{
	if (bParam1)
	{
		if (!func_439(iParam0, iParam2))
		{
			GlobalFunc_8875(iParam0, 1, iParam2);
		}
	}
	else if (func_439(iParam0, iParam2))
	{
		GlobalFunc_8875(iParam0, 0, iParam2);
	}
}




bool func_439(var uParam0, int iParam1)//Position - 0x4E047
{
	var uVar0;
	int iVar1;
	
	if (GlobalFunc_1434())
	{
		return 0;
	}
	uVar0 = GlobalFunc_8135(uParam0, iParam1);
	iVar1 = uParam0;
	return MISC::IS_BIT_SET(uVar0, GlobalFunc_299(iVar1));
}


void func_441(int iParam0, bool bParam1)//Position - 0x4E2D1
{
	if (bParam1)
	{
		if (!func_445(iParam0))
		{
			func_442(iParam0, 1);
		}
	}
	else if (func_445(iParam0))
	{
		func_442(iParam0, 0);
	}
}

void func_442(var uParam0, bool bParam1)//Position - 0x4E302
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_8213(uParam0);
	iVar1 = uParam0;
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&iVar0, GlobalFunc_299(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, GlobalFunc_299(iVar1));
		}
		GlobalFunc_6720(GlobalFunc_6352(uParam0), iVar0, -1, 1);
	}
}



bool func_445(var uParam0)//Position - 0x4E3FE
{
	var uVar0;
	int iVar1;
	
	if (GlobalFunc_1434())
	{
		return 0;
	}
	uVar0 = GlobalFunc_8213(uParam0);
	iVar1 = uParam0;
	return MISC::IS_BIT_SET(uVar0, GlobalFunc_299(iVar1));
}







void func_452(int iParam0)//Position - 0x4E693
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && iParam0 != 0)
	{
		iVar0 = 0;
		while (func_164(&iVar1, iParam0, iVar0, 0))
		{
			if (iVar1 != 0)
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					GlobalFunc_9460(iVar1, iParam0, WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, iVar1));
				}
			}
			iVar0++;
		}
	}
}

int func_453(int iParam0)//Position - 0x4E6EB
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return 4;
			break;
		
		case joaat("weapon_appistol"):
			return 4;
			break;
		
		case joaat("weapon_microsmg"):
			return 5;
			break;
		
		case joaat("weapon_smg"):
			return 5;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 1;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 6;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 7;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 5;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 4;
			break;
		
		case joaat("weapon_pistol50"):
			return 4;
			break;
		
		case joaat("weapon_heavypistol"):
			return 4;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 6;
			break;
	}
	return -1;
}

int func_454(int iParam0, var uParam1, int iParam2)//Position - 0x4E797
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), iParam0, &iVar0);
	if (iParam0 == joaat("weapon_grenadelauncher"))
	{
		iVar1 = (*uParam1 / *iParam2);
		*iParam2 = (*iParam2 - WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0));
		*uParam1 = (*iParam2 * iVar1);
		return 1;
	}
	else if ((iParam0 == joaat("weapon_rpg") || iParam0 == joaat("weapon_hominglauncher")) || iParam0 == joaat("weapon_firework"))
	{
		iVar1 = (*uParam1 / *iParam2);
		iVar2 = (iVar0 - WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0));
		if (iVar2 < *iParam2)
		{
			*iParam2 = iVar2;
		}
		*uParam1 = (*iParam2 * iVar1);
		return 1;
	}
	return 0;
}


int func_456(int iParam0, int iParam1)//Position - 0x4E903
{
	int iVar0;
	
	iVar0 = *iParam1 + 1;
	while (func_305(&Local_1222, iParam0, func_307(iParam0, iVar0), 1))
	{
		if (func_314(iParam0, Local_1222.f_9, Local_1222.f_10))
		{
			*iParam1 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_457(int iParam0, int iParam1)//Position - 0x4E94D
{
	int iVar0;
	
	iVar0 = *iParam1 + 1;
	while (func_164(&Local_1216, iParam0, iVar0, 1))
	{
		if (Local_1216.f_2 != -1)
		{
			*iParam1 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}


int func_459(int iParam0, int iParam1)//Position - 0x4E995
{
	int iVar0;
	
	iVar0 = (*iParam1 - 1);
	while (iVar0 >= 0)
	{
		if (func_305(&Local_1222, iParam0, func_307(iParam0, iVar0), 1))
		{
			if (func_314(iParam0, Local_1222.f_9, Local_1222.f_10))
			{
				*iParam1 = iVar0;
				return 1;
			}
		}
		iVar0 = (iVar0 - 1);
	}
	return 0;
}

int func_460(int iParam0, int iParam1)//Position - 0x4E9E5
{
	int iVar0;
	
	iVar0 = (*iParam1 - 1);
	while (iVar0 >= 0)
	{
		if (func_164(&Local_1216, iParam0, iVar0, 1))
		{
			if (Local_1216.f_2 != -1)
			{
				*iParam1 = iVar0;
				return 1;
			}
		}
		iVar0 = (iVar0 - 1);
	}
	return 0;
}

int func_461(int iParam0, int iParam1)//Position - 0x4EA25
{
	int iVar0;
	
	*iParam1 = -1;
	iVar0 = 19;
	while (iVar0 >= 0)
	{
		if (func_164(&Local_1216, iParam0, iVar0, 1))
		{
			if (Local_1216.f_2 != -1)
			{
				*iParam1 = iVar0;
				return 1;
			}
		}
		iVar0 = (iVar0 - 1);
	}
	return 0;
}

int func_462(int iParam0, int iParam1)//Position - 0x4EA66
{
	int iVar0;
	
	*iParam1 = -1;
	iVar0 = (func_337(iParam0, 1) - 1);
	while (iVar0 >= 0)
	{
		if (func_305(&Local_1222, iParam0, func_307(iParam0, iVar0), 1))
		{
			if (func_314(iParam0, Local_1222.f_9, Local_1222.f_10))
			{
				*iParam1 = iVar0;
				return 1;
			}
		}
		iVar0 = (iVar0 - 1);
	}
	return 0;
}



int func_465(int iParam0, int iParam1)//Position - 0x4EB05
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = ENTITY::GET_ENTITY_MODEL(iParam0);
	uVar3 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(uVar3, joaat("OVER_JACKET"), 8))
	{
		if (iParam1 > 46)
		{
			return 51;
		}
		else if (iParam1 > 26)
		{
			return 50;
		}
		else if (iParam1 > 0)
		{
			return 49;
		}
		else
		{
			return 48;
		}
	}
	iVar4 = 0;
	if (iParam1 > 46)
	{
		iVar4 = 30;
	}
	else if (iParam1 > 26)
	{
		iVar4 = 20;
	}
	else if (iParam1 > 0)
	{
		iVar4 = 9;
	}
	else
	{
		iVar4 = 0;
	}
	if (iVar0 > 15)
	{
		uVar5 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(uVar5, joaat("HIPSTER_DRESS"), 0))
		{
			if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (2 + iVar4);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("PILOT_SUIT"), 0))
		{
			if (iParam1 > 46)
			{
				return 39;
			}
			else if (iParam1 > 26)
			{
				return 29;
			}
			else if (iParam1 > 0)
			{
				return 18;
			}
			else
			{
				return 19;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("COMBAT_GEAR"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (2 + iVar4);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (2 + iVar4);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("HOODED_JACKET"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (2 + iVar4);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (2 + iVar4);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LUXE_COAT"), 0))
		{
			iVar6 = func_468(iVar5, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar6)
				{
					case 0:
						return (2 + iVar4);
						break;
					
					case 2:
						if (iParam1 > 46)
						{
							return 39;
						}
						else if (iParam1 > 26)
						{
							return 29;
						}
						else if (iParam1 > 0)
						{
							return 18;
						}
						else
						{
							return 19;
						}
						break;
					
					default:
						iVar0 = func_467(iVar5);
						break;
				}
			}
			else
			{
				switch (iVar6)
				{
					case 2:
						return (7 + iVar4);
						break;
					
					default:
						iVar0 = func_467(iVar5);
						break;
					}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LUXE_BOMB"), 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LUXE_DRAW_4"), 0))
			{
				return (3 + iVar4);
			}
			else
			{
				return (7 + iVar4);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LUXE_SWEAT"), 0))
		{
			return (6 + iVar4);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("HEIST_GEAR"), 0))
		{
			iVar7 = func_466(iVar5, 0);
			switch (iVar7)
			{
				case 4:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 28;
					}
					else if (iParam1 > 0)
					{
						return 17;
					}
					else
					{
						return 8;
					}
					break;
				
				case 14:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 29;
					}
					else if (iParam1 > 0)
					{
						return 18;
					}
					else
					{
						return 19;
					}
					break;
				
				default:
					iVar0 = func_467(iVar5);
					break;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("XMAS2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (3 + iVar4);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (2 + iVar4);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -1086258388, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (6 + iVar4);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (2 + iVar4);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("VEST_SHIRT"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (1 + iVar4);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("TAILS_JACKET"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (2 + iVar4);
			}
		}
		else
		{
			iVar0 = func_467(iVar5);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (7 + iVar4);
				}
				else
				{
					return (7 + iVar4);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (3 + iVar4);
				}
				else
				{
					return (3 + iVar4);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (3 + iVar4);
				}
				else
				{
					return (3 + iVar4);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (2 + iVar4);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (3 + iVar4);
				}
				else
				{
					return (3 + iVar4);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return (3 + iVar4);
				}
				else
				{
					return (3 + iVar4);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (2 + iVar4);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (7 + iVar4);
				}
				else
				{
					return (2 + iVar4);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (6 + iVar4);
				}
				else
				{
					return (6 + iVar4);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (5 + iVar4);
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (7 + iVar4);
				}
				else
				{
					return (7 + iVar4);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (4 + iVar4);
				}
				else
				{
					return (3 + iVar4);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (6 + iVar4);
				}
				else
				{
					return (5 + iVar4);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (7 + iVar4);
				}
				else
				{
					return (7 + iVar4);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (7 + iVar4);
				}
				else
				{
					return (7 + iVar4);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (7 + iVar4);
				}
				else
				{
					return (7 + iVar4);
				}
				break;
			
			case 9:
				return (2 + iVar4);
				break;
			
			case 10:
				if (bVar1)
				{
					return (7 + iVar4);
				}
				else
				{
					return (7 + iVar4);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (4 + iVar4);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			}
	}
	return (1 + iVar4);
	return 0;
}

int func_466(int iParam0, int iParam1)//Position - 0x4F370
{
	int iVar0;
	
	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(uParam0, joaat("HEIST_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_467(int iParam0)//Position - 0x4F510
{
	int iVar0;
	
	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(uParam0, joaat("DRAW_0"), 0))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_1"), 0))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_2"), 0))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_3"), 0))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_4"), 0))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_5"), 0))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_6"), 0))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_7"), 0))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_8"), 0))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_9"), 0))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_10"), 0))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_11"), 0))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_12"), 0))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_13"), 0))
	{
		iVar0 = 13;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_14"), 0))
	{
		iVar0 = 14;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_468(int iParam0, int iParam1)//Position - 0x4F672
{
	int iVar0;
	
	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(uParam0, joaat("LUXE_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}


void func_470(int iParam0, int iParam1, int iParam2)//Position - 0x4F904
{
	if (!func_479(iParam0, iParam1, iParam2))
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_474(iParam2, iParam1, 1);
	}
	else
	{
		func_471(iParam0, iParam1, iParam2, 1);
	}
}

void func_471(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x4F93B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (GlobalFunc_42(iParam0))
	{
		iVar0 = func_473(iParam0, iParam1, iParam2);
		iVar1 = GlobalFunc_5846(iParam2, iParam1);
		iVar2 = GlobalFunc_299(iVar1);
		if (bParam3)
		{
			MISC::SET_BIT(&iVar0, iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, iVar2);
		}
		func_472(iParam0, iParam1, iParam2, iVar0);
	}
}

void func_472(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4F98E
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_5846(iParam2, iParam1);
	iVar1 = GlobalFunc_300(iVar0);
	switch (iVar1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_addon_view_0"), iParam3, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_addon_view_0"), iParam3, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_addon_view_0"), iParam3, 1);
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_addon_view_1"), iParam3, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_addon_view_1"), iParam3, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_addon_view_1"), iParam3, 1);
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_addon_view_2"), iParam3, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_addon_view_2"), iParam3, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_addon_view_2"), iParam3, 1);
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_addon_view_3"), iParam3, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_addon_view_3"), iParam3, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_addon_view_3"), iParam3, 1);
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_addon_view_4"), iParam3, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_addon_view_4"), iParam3, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_addon_view_4"), iParam3, 1);
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_addon_view_5"), iParam3, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_addon_view_5"), iParam3, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_addon_view_5"), iParam3, 1);
					break;
			}
			break;
		
		default:
			break;
	}
}

var func_473(int iParam0, int iParam1, int iParam2)//Position - 0x4FB9D
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = GlobalFunc_5846(iParam2, iParam1);
	iVar2 = GlobalFunc_300(iVar1);
	switch (iVar2)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_addon_view_0"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_addon_view_0"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_addon_view_0"), &uVar0, -1);
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_addon_view_1"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_addon_view_1"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_addon_view_1"), &uVar0, -1);
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_addon_view_2"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_addon_view_2"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_addon_view_2"), &uVar0, -1);
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_addon_view_3"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_addon_view_3"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_addon_view_3"), &uVar0, -1);
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_addon_view_4"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_addon_view_4"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_addon_view_4"), &uVar0, -1);
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_addon_view_5"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_addon_view_5"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_addon_view_5"), &uVar0, -1);
					break;
			}
			break;
		
		default:
			break;
	}
	return uVar0;
}

void func_474(int iParam0, int iParam1, bool bParam2)//Position - 0x4FDAE
{
	if (bParam2)
	{
		if (!func_478(iParam0, iParam1, -1))
		{
			func_475(iParam0, iParam1, 1);
		}
	}
	else if (func_478(iParam0, iParam1, -1))
	{
		func_475(iParam0, iParam1, 0);
	}
}

void func_475(int iParam0, int iParam1, bool bParam2)//Position - 0x4FDE9
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_477(iParam0, iParam1, -1);
	iVar1 = GlobalFunc_5846(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (bParam2)
		{
			MISC::SET_BIT(&iVar0, GlobalFunc_299(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, GlobalFunc_299(iVar1));
		}
		GlobalFunc_6720(GlobalFunc_7463(iParam0, iParam1), iVar0, -1, 1);
	}
}


var func_477(int iParam0, int iParam1, int iParam2)//Position - 0x4FEED
{
	var uVar0;
	
	uVar0 = GlobalFunc_6872(GlobalFunc_7463(iParam0, iParam1), iParam2, 0);
	return uVar0;
}

bool func_478(int iParam0, int iParam1, int iParam2)//Position - 0x4FF08
{
	var uVar0;
	int iVar1;
	
	if (GlobalFunc_1434())
	{
		return 0;
	}
	uVar0 = func_477(iParam0, iParam1, iParam2);
	iVar1 = GlobalFunc_5846(iParam0, iParam1);
	return MISC::IS_BIT_SET(uVar0, GlobalFunc_299(iVar1));
}

int func_479(int iParam0, int iParam1, int iParam2)//Position - 0x4FF3D
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_483(iParam2, iParam1, -1) && !func_478(iParam2, iParam1, -1))
		{
			return 1;
		}
	}
	else if (func_480(iParam0, iParam1, iParam2) && !func_486(iParam0, iParam1, iParam2))
	{
		return 1;
	}
	return 0;
}

int func_480(int iParam0, int iParam1, int iParam2)//Position - 0x4FF90
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (GlobalFunc_42(iParam0))
	{
		if (GlobalFunc_2766(iParam1))
		{
			return 1;
		}
		uVar0 = GlobalFunc_7171(iParam0, iParam1, iParam2);
		iVar1 = GlobalFunc_5846(iParam2, iParam1);
		iVar2 = GlobalFunc_299(iVar1);
		return MISC::IS_BIT_SET(uVar0, iVar2);
	}
	return 0;
}



bool func_483(int iParam0, int iParam1, int iParam2)//Position - 0x5025F
{
	var uVar0;
	int iVar1;
	
	if (GlobalFunc_1434())
	{
		return 0;
	}
	uVar0 = func_484(iParam0, iParam1, iParam2);
	iVar1 = GlobalFunc_5846(iParam0, iParam1);
	return MISC::IS_BIT_SET(uVar0, GlobalFunc_299(iVar1));
}

var func_484(int iParam0, int iParam1, int iParam2)//Position - 0x50294
{
	var uVar0;
	
	uVar0 = GlobalFunc_6872(GlobalFunc_7465(iParam0, iParam1), iParam2, 0);
	return uVar0;
}


int func_486(int iParam0, int iParam1, int iParam2)//Position - 0x5035D
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (GlobalFunc_42(iParam0))
	{
		uVar0 = func_473(iParam0, iParam1, iParam2);
		iVar1 = GlobalFunc_5846(iParam2, iParam1);
		iVar2 = GlobalFunc_299(iVar1);
		return MISC::IS_BIT_SET(uVar0, iVar2);
	}
	return 0;
}

int func_487(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x50398
{
	*iParam4 = 0;
	*iParam5 = -1;
	*iParam6 = -1;
	if (iParam2 == 11)
	{
		if (iParam3 == 0)
		{
			switch (iParam0)
			{
				case 0:
					*iParam4 = 0;
					break;
				
				case 1:
					*iParam5 = 11;
					*iParam6 = 1;
					break;
				
				case 2:
					*iParam5 = 12;
					*iParam6 = 0;
					break;
				
				case 3:
					*iParam4 = joaat("weapon_rpg");
					break;
			}
		}
		else if (iParam3 == 1)
		{
			switch (iParam0)
			{
				case 0:
					*iParam5 = 11;
					*iParam6 = 0;
					break;
				
				case 1:
					*iParam5 = 11;
					*iParam6 = 2;
					break;
				
				case 2:
					*iParam5 = 12;
					*iParam6 = 1;
					break;
				
				case 3:
					*iParam4 = joaat("weapon_rpg");
					break;
			}
		}
		else if (iParam3 == 2)
		{
			switch (iParam0)
			{
				case 0:
					*iParam5 = 11;
					*iParam6 = 1;
					break;
				
				case 1:
					*iParam5 = 11;
					*iParam6 = 3;
					break;
				
				case 2:
					*iParam5 = 12;
					*iParam6 = 2;
					break;
				
				case 3:
					*iParam4 = joaat("weapon_grenadelauncher");
					break;
			}
		}
		else if (iParam3 == 3)
		{
			switch (iParam0)
			{
				case 0:
					*iParam5 = 11;
					*iParam6 = 2;
					break;
				
				case 1:
					*iParam5 = 11;
					*iParam6 = 4;
					break;
				
				case 2:
					*iParam5 = 12;
					*iParam6 = 3;
					break;
				
				case 3:
					*iParam4 = joaat("weapon_grenadelauncher");
					break;
			}
		}
		else if (iParam3 == 4)
		{
			switch (iParam0)
			{
				case 0:
					*iParam5 = 11;
					*iParam6 = 3;
					break;
				
				case 1:
					*iParam5 = 11;
					*iParam6 = 5;
					break;
				
				case 2:
					*iParam5 = 12;
					*iParam6 = 4;
					break;
				
				case 3:
					*iParam4 = joaat("weapon_minigun");
					break;
			}
		}
		else if (iParam3 == 5)
		{
			switch (iParam0)
			{
				case 0:
					*iParam5 = 11;
					*iParam6 = 4;
					break;
				
				case 1:
					*iParam4 = joaat("weapon_smokegrenade");
					break;
				
				case 2:
					*iParam5 = 12;
					*iParam6 = 5;
					break;
				
				case 3:
					*iParam4 = joaat("weapon_minigun");
					break;
				}
		}
	}
	else if (iParam2 == 12)
	{
		if (iParam3 == 0)
		{
			switch (iParam0)
			{
				case 0:
					*iParam4 = 0;
					break;
				
				case 1:
					*iParam5 = 12;
					*iParam6 = 1;
					break;
				
				case 2:
					*iParam5 = 13;
					*iParam6 = 0;
					break;
				
				case 3:
					*iParam5 = 11;
					*iParam6 = 0;
					break;
			}
		}
		else if (iParam3 == 1)
		{
			switch (iParam0)
			{
				case 0:
					*iParam5 = 12;
					*iParam6 = 0;
					break;
				
				case 1:
					*iParam5 = 12;
					*iParam6 = 2;
					break;
				
				case 2:
					*iParam5 = 13;
					*iParam6 = 1;
					break;
				
				case 3:
					*iParam5 = 11;
					*iParam6 = 1;
					break;
			}
		}
		else if (iParam3 == 2)
		{
			switch (iParam0)
			{
				case 0:
					*iParam5 = 12;
					*iParam6 = 1;
					break;
				
				case 1:
					*iParam5 = 12;
					*iParam6 = 3;
					break;
				
				case 2:
					*iParam5 = 13;
					*iParam6 = 2;
					break;
				
				case 3:
					*iParam5 = 11;
					*iParam6 = 2;
					break;
			}
		}
		else if (iParam3 == 3)
		{
			switch (iParam0)
			{
				case 0:
					*iParam5 = 12;
					*iParam6 = 2;
					break;
				
				case 1:
					*iParam5 = 12;
					*iParam6 = 4;
					break;
				
				case 2:
					*iParam5 = 13;
					*iParam6 = 3;
					break;
				
				case 3:
					*iParam5 = 11;
					*iParam6 = 3;
					break;
			}
		}
		else if (iParam3 == 4)
		{
			switch (iParam0)
			{
				case 0:
					*iParam5 = 12;
					*iParam6 = 3;
					break;
				
				case 1:
					*iParam5 = 12;
					*iParam6 = 5;
					break;
				
				case 2:
					*iParam5 = 13;
					*iParam6 = 4;
					break;
				
				case 3:
					*iParam5 = 11;
					*iParam6 = 4;
					break;
			}
		}
		else if (iParam3 == 5)
		{
			switch (iParam0)
			{
				case 0:
					*iParam5 = 12;
					*iParam6 = 4;
					break;
				
				case 1:
					*iParam4 = joaat("weapon_grenade");
					break;
				
				case 2:
					*iParam5 = 13;
					*iParam6 = 5;
					break;
				
				case 3:
					*iParam5 = 11;
					*iParam6 = 5;
					break;
				}
		}
	}
	else if (iParam2 == 13)
	{
		if (iParam3 == 0)
		{
			switch (iParam0)
			{
				case 0:
					*iParam4 = 0;
					break;
				
				case 1:
					*iParam5 = 13;
					*iParam6 = 1;
					break;
				
				case 2:
					*iParam5 = 14;
					*iParam6 = 0;
					break;
				
				case 3:
					*iParam5 = 12;
					*iParam6 = 0;
					break;
			}
		}
		else if (iParam3 == 1)
		{
			switch (iParam0)
			{
				case 0:
					*iParam5 = 13;
					*iParam6 = 0;
					break;
				
				case 1:
					*iParam5 = 13;
					*iParam6 = 2;
					break;
				
				case 2:
					*iParam5 = 14;
					*iParam6 = 1;
					break;
				
				case 3:
					*iParam5 = 12;
					*iParam6 = 1;
					break;
			}
		}
		else if (iParam3 == 2)
		{
			switch (iParam0)
			{
				case 0:
					*iParam5 = 13;
					*iParam6 = 1;
					break;
				
				case 1:
					*iParam5 = 13;
					*iParam6 = 3;
					break;
				
				case 2:
					*iParam5 = 14;
					*iParam6 = 2;
					break;
				
				case 3:
					*iParam5 = 12;
					*iParam6 = 2;
					break;
			}
		}
		else if (iParam3 == 3)
		{
			switch (iParam0)
			{
				case 0:
					*iParam5 = 13;
					*iParam6 = 2;
					break;
				
				case 1:
					*iParam5 = 13;
					*iParam6 = 4;
					break;
				
				case 2:
					*iParam5 = 14;
					*iParam6 = 3;
					break;
				
				case 3:
					*iParam5 = 12;
					*iParam6 = 3;
					break;
			}
		}
		else if (iParam3 == 4)
		{
			switch (iParam0)
			{
				case 0:
					*iParam5 = 13;
					*iParam6 = 3;
					break;
				
				case 1:
					*iParam5 = 13;
					*iParam6 = 5;
					break;
				
				case 2:
					*iParam5 = 14;
					*iParam6 = 4;
					break;
				
				case 3:
					*iParam5 = 12;
					*iParam6 = 4;
					break;
			}
		}
		else if (iParam3 == 5)
		{
			switch (iParam0)
			{
				case 0:
					*iParam5 = 13;
					*iParam6 = 4;
					break;
				
				case 1:
					*iParam4 = joaat("weapon_stickybomb");
					break;
				
				case 2:
					*iParam5 = 14;
					*iParam6 = 5;
					break;
				
				case 3:
					*iParam5 = 12;
					*iParam6 = 5;
					break;
				}
		}
	}
	else if (iParam2 == 14)
	{
		if (iParam3 == 0)
		{
			switch (iParam0)
			{
				case 0:
					*iParam4 = 0;
					break;
				
				case 1:
					*iParam5 = 14;
					*iParam6 = 1;
					break;
				
				case 2:
					*iParam4 = 0;
					break;
				
				case 3:
					*iParam5 = 13;
					*iParam6 = 0;
					break;
			}
		}
		else if (iParam3 == 1)
		{
			switch (iParam0)
			{
				case 0:
					*iParam5 = 14;
					*iParam6 = 0;
					break;
				
				case 1:
					*iParam5 = 14;
					*iParam6 = 2;
					break;
				
				case 2:
					*iParam4 = 0;
					break;
				
				case 3:
					*iParam5 = 13;
					*iParam6 = 1;
					break;
			}
		}
		else if (iParam3 == 2)
		{
			switch (iParam0)
			{
				case 0:
					*iParam5 = 14;
					*iParam6 = 1;
					break;
				
				case 1:
					*iParam5 = 14;
					*iParam6 = 3;
					break;
				
				case 2:
					*iParam4 = 0;
					break;
				
				case 3:
					*iParam5 = 13;
					*iParam6 = 2;
					break;
			}
		}
		else if (iParam3 == 3)
		{
			switch (iParam0)
			{
				case 0:
					*iParam5 = 14;
					*iParam6 = 2;
					break;
				
				case 1:
					*iParam5 = 14;
					*iParam6 = 4;
					break;
				
				case 2:
					*iParam4 = 0;
					break;
				
				case 3:
					*iParam5 = 13;
					*iParam6 = 3;
					break;
			}
		}
		else if (iParam3 == 4)
		{
			switch (iParam0)
			{
				case 0:
					*iParam5 = 14;
					*iParam6 = 3;
					break;
				
				case 1:
					*iParam5 = 14;
					*iParam6 = 5;
					break;
				
				case 2:
					*iParam4 = 0;
					break;
				
				case 3:
					*iParam5 = 13;
					*iParam6 = 4;
					break;
			}
		}
		else if (iParam3 == 5)
		{
			switch (iParam0)
			{
				case 0:
					*iParam5 = 14;
					*iParam6 = 4;
					break;
				
				case 1:
					*iParam4 = joaat("weapon_petrolcan");
					break;
				
				case 2:
					*iParam4 = 0;
					break;
				
				case 3:
					*iParam5 = 13;
					*iParam6 = 5;
					break;
				}
		}
	}
	else if (iParam2 == 15)
	{
		if (iParam3 == 0)
		{
			switch (iParam0)
			{
				case 0:
					*iParam4 = 0;
					break;
				
				case 1:
					*iParam5 = 15;
					*iParam6 = 3;
					break;
				
				case 2:
					*iParam5 = 15;
					*iParam6 = 1;
					break;
				
				case 3:
					*iParam4 = 0;
					break;
			}
		}
		else if (iParam3 == 1)
		{
			switch (iParam0)
			{
				case 0:
					*iParam4 = 0;
					break;
				
				case 1:
					*iParam5 = 15;
					*iParam6 = 4;
					break;
				
				case 2:
					*iParam5 = 15;
					*iParam6 = 2;
					break;
				
				case 3:
					*iParam5 = 15;
					*iParam6 = 0;
					break;
			}
		}
		else if (iParam3 == 2)
		{
			switch (iParam0)
			{
				case 0:
					*iParam4 = 0;
					break;
				
				case 1:
					*iParam5 = 15;
					*iParam6 = 4;
					break;
				
				case 2:
					*iParam4 = 0;
					break;
				
				case 3:
					*iParam5 = 15;
					*iParam6 = 1;
					break;
			}
		}
		else if (iParam3 == 3)
		{
			switch (iParam0)
			{
				case 0:
					*iParam5 = 15;
					*iParam6 = 0;
					break;
				
				case 1:
					*iParam4 = 0;
					break;
				
				case 2:
					*iParam5 = 15;
					*iParam6 = 4;
					break;
				
				case 3:
					*iParam4 = 0;
					break;
			}
		}
		else if (iParam3 == 4)
		{
			switch (iParam0)
			{
				case 0:
					*iParam5 = 15;
					*iParam6 = 1;
					break;
				
				case 1:
					*iParam4 = 0;
					break;
				
				case 2:
					*iParam5 = 15;
					*iParam6 = 2;
					break;
				
				case 3:
					*iParam5 = 15;
					*iParam6 = 3;
					break;
				}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("weapon_pistol"):
				switch (iParam0)
				{
					case 0:
						*iParam4 = joaat("weapon_heavysniper");
						break;
					
					case 1:
						*iParam4 = 0;
						break;
					
					case 2:
						*iParam4 = joaat("weapon_smokegrenade");
						break;
					
					case 3:
						*iParam4 = joaat("weapon_combatpistol");
						break;
				}
				break;
			
			case joaat("weapon_combatpistol"):
				switch (iParam0)
				{
					case 0:
						*iParam4 = joaat("weapon_heavysniper");
						break;
					
					case 1:
						*iParam4 = 0;
						break;
					
					case 2:
						*iParam4 = joaat("weapon_pistol");
						break;
					
					case 3:
						*iParam4 = joaat("weapon_appistol");
						break;
				}
				break;
			
			case joaat("weapon_appistol"):
				switch (iParam0)
				{
					case 0:
						*iParam4 = joaat("weapon_heavysniper");
						break;
					
					case 1:
						*iParam4 = 0;
						break;
					
					case 2:
						*iParam4 = joaat("weapon_combatpistol");
						break;
					
					case 3:
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							*iParam4 = joaat("weapon_nightstick");
						}
						else
						{
							*iParam4 = joaat("weapon_stungun");
						}
						break;
				}
				break;
			
			case joaat("weapon_stungun"):
				switch (iParam0)
				{
					case 0:
						*iParam4 = joaat("weapon_heavysniper");
						break;
					
					case 1:
						*iParam4 = 0;
						break;
					
					case 2:
						*iParam4 = joaat("weapon_appistol");
						break;
					
					case 3:
						*iParam4 = joaat("weapon_nightstick");
						break;
				}
				break;
			
			case joaat("weapon_microsmg"):
				switch (iParam0)
				{
					case 0:
						*iParam4 = joaat("gadget_parachute");
						break;
					
					case 1:
						*iParam4 = joaat("weapon_smg");
						break;
					
					case 2:
						*iParam4 = joaat("weapon_pumpshotgun");
						break;
					
					case 3:
						*iParam4 = 0;
						break;
				}
				break;
			
			case joaat("weapon_smg"):
				switch (iParam0)
				{
					case 0:
						*iParam4 = joaat("weapon_microsmg");
						break;
					
					case 1:
						*iParam4 = joaat("weapon_knife");
						break;
					
					case 2:
						*iParam4 = joaat("weapon_assaultshotgun");
						break;
					
					case 3:
						*iParam4 = 0;
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle"):
				switch (iParam0)
				{
					case 0:
						*iParam4 = 0;
						break;
					
					case 1:
						*iParam4 = joaat("weapon_carbinerifle");
						break;
					
					case 2:
						*iParam4 = joaat("weapon_sniperrifle");
						break;
					
					case 3:
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							*iParam4 = joaat("weapon_assaultsmg");
						}
						else
						{
							*iParam4 = joaat("weapon_sawnoffshotgun");
						}
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle"):
				switch (iParam0)
				{
					case 0:
						*iParam4 = joaat("weapon_assaultrifle");
						break;
					
					case 1:
						*iParam4 = joaat("weapon_advancedrifle");
						break;
					
					case 2:
						*iParam4 = joaat("weapon_sniperrifle");
						break;
					
					case 3:
						*iParam4 = joaat("weapon_pumpshotgun");
						break;
				}
				break;
			
			case joaat("weapon_advancedrifle"):
				switch (iParam0)
				{
					case 0:
						*iParam4 = joaat("weapon_carbinerifle");
						break;
					
					case 1:
						*iParam4 = joaat("weapon_nightstick");
						break;
					
					case 2:
						*iParam4 = joaat("weapon_heavysniper");
						break;
					
					case 3:
						*iParam4 = joaat("weapon_assaultshotgun");
						break;
				}
				break;
			
			case joaat("weapon_mg"):
				switch (iParam0)
				{
					case 0:
						*iParam4 = 0;
						break;
					
					case 1:
						*iParam4 = joaat("weapon_combatmg");
						break;
					
					case 2:
						*iParam4 = joaat("weapon_grenadelauncher");
						break;
					
					case 3:
						*iParam4 = joaat("weapon_sniperrifle");
						break;
				}
				break;
			
			case joaat("weapon_combatmg"):
				switch (iParam0)
				{
					case 0:
						*iParam4 = joaat("weapon_mg");
						break;
					
					case 1:
						*iParam4 = joaat("weapon_pistol");
						break;
					
					case 2:
						*iParam4 = joaat("weapon_minigun");
						break;
					
					case 3:
						*iParam4 = joaat("weapon_heavysniper");
						break;
				}
				break;
			
			case joaat("weapon_pumpshotgun"):
				switch (iParam0)
				{
					case 0:
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							*iParam4 = joaat("weapon_assaultsmg");
						}
						else
						{
							*iParam4 = joaat("weapon_sawnoffshotgun");
						}
						break;
					
					case 1:
						*iParam4 = joaat("weapon_assaultshotgun");
						break;
					
					case 2:
						*iParam4 = joaat("weapon_carbinerifle");
						break;
					
					case 3:
						*iParam4 = joaat("weapon_microsmg");
						break;
				}
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					switch (iParam0)
					{
						case 0:
							*iParam4 = 0;
							break;
						
						case 1:
							*iParam4 = joaat("weapon_pumpshotgun");
							break;
						
						case 2:
							*iParam4 = joaat("weapon_assaultrifle");
							break;
						
						case 3:
							*iParam4 = joaat("gadget_parachute");
							break;
						}
				}
				break;
			
			case joaat("weapon_assaultsmg"):
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					switch (iParam0)
					{
						case 0:
							*iParam4 = 0;
							break;
						
						case 1:
							*iParam4 = joaat("weapon_pumpshotgun");
							break;
						
						case 2:
							*iParam4 = joaat("weapon_assaultrifle");
							break;
						
						case 3:
							*iParam4 = joaat("gadget_parachute");
							break;
						}
				}
				break;
			
			case joaat("weapon_assaultshotgun"):
				switch (iParam0)
				{
					case 0:
						*iParam4 = joaat("weapon_pumpshotgun");
						break;
					
					case 1:
						*iParam4 = joaat("weapon_knife");
						break;
					
					case 2:
						*iParam4 = joaat("weapon_advancedrifle");
						break;
					
					case 3:
						*iParam4 = joaat("weapon_smg");
						break;
				}
				break;
			
			case joaat("weapon_sniperrifle"):
				switch (iParam0)
				{
					case 0:
						*iParam4 = 0;
						break;
					
					case 1:
						*iParam4 = joaat("weapon_heavysniper");
						break;
					
					case 2:
						*iParam4 = joaat("weapon_mg");
						break;
					
					case 3:
						*iParam4 = joaat("weapon_carbinerifle");
						break;
				}
				break;
			
			case joaat("weapon_heavysniper"):
				switch (iParam0)
				{
					case 0:
						*iParam4 = joaat("weapon_sniperrifle");
						break;
					
					case 1:
						*iParam4 = joaat("weapon_combatpistol");
						break;
					
					case 2:
						*iParam4 = joaat("weapon_combatmg");
						break;
					
					case 3:
						*iParam4 = joaat("weapon_advancedrifle");
						break;
				}
				break;
			
			case joaat("weapon_rpg"):
				switch (iParam0)
				{
					case 0:
						*iParam4 = 0;
						break;
					
					case 1:
						*iParam4 = joaat("weapon_grenadelauncher");
						break;
					
					case 2:
						*iParam5 = 11;
						*iParam6 = 0;
						break;
					
					case 3:
						*iParam4 = joaat("weapon_mg");
						break;
				}
				break;
			
			case joaat("weapon_grenadelauncher"):
				switch (iParam0)
				{
					case 0:
						*iParam4 = joaat("weapon_rpg");
						break;
					
					case 1:
						*iParam4 = joaat("weapon_minigun");
						break;
					
					case 2:
						*iParam5 = 11;
						*iParam6 = 2;
						break;
					
					case 3:
						*iParam4 = joaat("weapon_mg");
						break;
				}
				break;
			
			case joaat("weapon_minigun"):
				switch (iParam0)
				{
					case 0:
						*iParam4 = joaat("weapon_grenadelauncher");
						break;
					
					case 1:
						*iParam4 = joaat("weapon_smokegrenade");
						break;
					
					case 2:
						*iParam5 = 11;
						*iParam6 = 4;
						break;
					
					case 3:
						*iParam4 = joaat("weapon_combatmg");
						break;
				}
				break;
			
			case joaat("weapon_smokegrenade"):
				switch (iParam0)
				{
					case 0:
						*iParam5 = 11;
						*iParam6 = 5;
						break;
					
					case 1:
						*iParam4 = 0;
						break;
					
					case 2:
						*iParam4 = joaat("weapon_grenade");
						break;
					
					case 3:
						*iParam4 = joaat("weapon_pistol");
						break;
				}
				break;
			
			case joaat("weapon_grenade"):
				switch (iParam0)
				{
					case 0:
						*iParam5 = 12;
						*iParam6 = 5;
						break;
					
					case 1:
						*iParam4 = 0;
						break;
					
					case 2:
						*iParam4 = joaat("weapon_stickybomb");
						break;
					
					case 3:
						*iParam4 = joaat("weapon_smokegrenade");
						break;
				}
				break;
			
			case joaat("weapon_stickybomb"):
				switch (iParam0)
				{
					case 0:
						*iParam5 = 13;
						*iParam6 = 5;
						break;
					
					case 1:
						*iParam4 = 0;
						break;
					
					case 2:
						*iParam4 = joaat("weapon_petrolcan");
						break;
					
					case 3:
						*iParam4 = joaat("weapon_grenade");
						break;
				}
				break;
			
			case joaat("weapon_petrolcan"):
				switch (iParam0)
				{
					case 0:
						*iParam5 = 14;
						*iParam6 = 5;
						break;
					
					case 1:
						*iParam4 = 0;
						break;
					
					case 2:
						*iParam4 = 0;
						break;
					
					case 3:
						*iParam4 = joaat("weapon_stickybomb");
						break;
				}
				break;
			
			case joaat("weapon_knife"):
				switch (iParam0)
				{
					case 0:
						*iParam4 = joaat("weapon_smg");
						break;
					
					case 1:
						*iParam4 = 0;
						break;
					
					case 2:
						*iParam4 = joaat("weapon_nightstick");
						break;
					
					case 3:
						*iParam4 = 0;
						break;
				}
				break;
			
			case joaat("weapon_nightstick"):
				switch (iParam0)
				{
					case 0:
						*iParam4 = joaat("weapon_advancedrifle");
						break;
					
					case 1:
						*iParam4 = 0;
						break;
					
					case 2:
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							*iParam4 = joaat("weapon_appistol");
						}
						else
						{
							*iParam4 = joaat("weapon_stungun");
						}
						break;
					
					case 3:
						*iParam4 = joaat("weapon_knife");
						break;
				}
				break;
			
			case joaat("gadget_parachute"):
				switch (iParam0)
				{
					case 0:
						*iParam4 = 0;
						break;
					
					case 1:
						*iParam4 = joaat("weapon_microsmg");
						break;
					
					case 2:
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							*iParam4 = joaat("weapon_assaultsmg");
						}
						else
						{
							*iParam4 = joaat("weapon_sawnoffshotgun");
						}
						break;
					
					case 3:
						*iParam4 = 0;
						break;
				}
				break;
			}
	}
	if (((*iParam4 != 0 && *iParam4 != iParam1) || (*iParam6 != -1 && *iParam6 != iParam3)) || (*iParam5 != -1 && *iParam5 != iParam2))
	{
		return 1;
	}
	return 0;
}

int func_488(int iParam0, int iParam1)//Position - 0x516A5
{
	struct<3> Var0;
	struct<3> Var3[4];
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	int iVar20;
	
	if (iParam0 == 0 && iParam1 == 0)
	{
		return 4;
	}
	Var0 = { IntToFloat(iParam0), IntToFloat(iParam1), 0f };
	Var3[0 /*3*/] = { 0f, 1f, 0f };
	Var3[1 /*3*/] = { 0f, -1f, 0f };
	Var3[2 /*3*/] = { 1f, 0f, 0f };
	Var3[3 /*3*/] = { -1f, 0f, 0f };
	if (Var0.x != 0f || Var0.f_1 != 0f)
	{
		Var0 = { GlobalFunc_107(Var0) };
	}
	iVar17 = -1;
	fVar19 = 360f;
	iVar20 = 4;
	iVar16 = 0;
	while (iVar16 < Var3.x)
	{
		fVar18 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.x, Var0.f_1, Var3[iVar16 /*3*/], Var3[iVar16 /*3*/].f_1);
		if (fVar18 < fVar19)
		{
			fVar19 = fVar18;
			iVar17 = iVar16;
		}
		iVar16++;
	}
	if (iVar17 != -1)
	{
		iVar20 = iVar17;
	}
	return iVar20;
}


















int func_506(int iParam0, int iParam1)//Position - 0x51B6D
{
	var uVar0;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	struct<6> Var45;
	
	if (iParam1 == -61829581)
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, iParam1, 0))
	{
		return 0;
	}
	iVar39 = GlobalFunc_221(iParam1, &uVar0);
	if ((((((((((((((((((((((iParam1 != joaat("weapon_pistol") && iParam1 != joaat("weapon_appistol")) && iParam1 != joaat("weapon_combatpistol")) && iParam1 != joaat("weapon_microsmg")) && iParam1 != joaat("weapon_smg")) && iParam1 != joaat("weapon_pumpshotgun")) && iParam1 != joaat("weapon_assaultshotgun")) && iParam1 != joaat("weapon_sawnoffshotgun")) && iParam1 != joaat("weapon_assaultrifle")) && iParam1 != joaat("weapon_carbinerifle")) && iParam1 != joaat("weapon_advancedrifle")) && iParam1 != joaat("weapon_sniperrifle")) && iParam1 != joaat("weapon_heavysniper")) && iParam1 != joaat("weapon_mg")) && iParam1 != joaat("weapon_combatmg")) && iParam1 != joaat("weapon_grenadelauncher")) && iParam1 != -572349828) && iParam1 != joaat("weapon_assaultsmg")) && iParam1 != 392730790) && iParam1 != -947031628) && iParam1 != joaat("weapon_bullpupshotgun")) && iParam1 != joaat("weapon_pistol50")) && (iVar39 == -1 || FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar39) < 3))
	{
		return 0;
	}
	iVar40 = 0;
	iVar41 = 0;
	iVar42 = 0;
	iVar43 = 0;
	iVar44 = 0;
	while (func_164(&Var45, iParam1, iVar44, 0))
	{
		if (Var45.f_4 == joaat("WAPClip"))
		{
			iVar41++;
		}
		if (Var45.f_4 == joaat("WAPScop"))
		{
			iVar40++;
		}
		if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iParam1, Var45))
		{
			if (Var45.f_4 == joaat("WAPClip"))
			{
				iVar43 = Var45.f_5;
			}
			else if (Var45.f_4 == joaat("WAPScop"))
			{
				iVar42 = Var45.f_5;
			}
		}
		else if (((Var45.f_4 == joaat("WAPClip") || Var45.f_4 == joaat("WAPScop")) || Var45.f_4 == joaat("WAPRail")) || Var45.f_4 == -1441477783)
		{
		}
		else
		{
			return 0;
		}
		iVar44++;
	}
	if (iVar40 > iVar42)
	{
		return 0;
	}
	if (iVar41 > iVar43)
	{
		return 0;
	}
	if (WEAPON::GET_WEAPON_TINT_COUNT(iParam1) > 0 && WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, iParam1) == 0)
	{
		return 0;
	}
	return 1;
}






void func_512(int iParam0, int iParam1)//Position - 0x52386
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		GlobalFunc_6720(2024, iParam0, -1, 1);
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, func_465(PLAYER::PLAYER_PED_ID(), iParam0), GlobalFunc_282(PLAYER::PLAYER_PED_ID(), iParam0), 0);
		GlobalFunc_5004(PLAYER::PLAYER_ID(), iParam0);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), GlobalFunc_81(PLAYER::PLAYER_PED_ID(), iParam0));
		if ((iParam1 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 5) != 0)
		{
			func_513(PLAYER::PLAYER_ID());
		}
	}
}

void func_513(int iParam0)//Position - 0x52405
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = GlobalFunc_6872(2024, -1, 0);
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(iParam0, 5, func_465(PLAYER::GET_PLAYER_PED(iParam0), iVar0), GlobalFunc_282(PLAYER::GET_PLAYER_PED(iParam0), iVar0), 0);
		GlobalFunc_5004(iParam0, iVar0);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(iParam0, GlobalFunc_81(PLAYER::GET_PLAYER_PED(iParam0), iVar0));
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::GET_PLAYER_PED(iParam0), 5, func_465(PLAYER::GET_PLAYER_PED(iParam0), iVar0), GlobalFunc_282(PLAYER::GET_PLAYER_PED(iParam0), iVar0), GlobalFunc_81(PLAYER::GET_PLAYER_PED(iParam0), iVar0));
		PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(iParam0, GlobalFunc_6872(573, -1, 0));
		if (GlobalFunc_281())
		{
			PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(iParam0, joaat("lts_p_para_pilot2_sp_s"));
		}
		else if (GlobalFunc_280())
		{
			PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(iParam0, joaat("pil_p_para_pilot_sp_s"));
		}
		PED::SET_PED_RESET_FLAG(PLAYER::GET_PLAYER_PED(iParam0), 177, 1);
	}
}




void func_517(int iParam0, int iParam1, bool bParam2)//Position - 0x525CA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (GlobalFunc_42(iParam0))
	{
		iVar0 = func_246(iParam0, iParam1);
		iVar1 = GlobalFunc_5556(iParam1);
		iVar2 = GlobalFunc_299(iVar1);
		if (bParam2)
		{
			MISC::SET_BIT(&iVar0, iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, iVar2);
		}
		func_518(iParam0, iParam1, iVar0);
	}
}

void func_518(int iParam0, int iParam1, int iParam2)//Position - 0x52617
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_5556(iParam1);
	iVar1 = GlobalFunc_300(iVar0);
	switch (iVar1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_tint_purch_0"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_tint_purch_0"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_tint_purch_0"), iParam2, 1);
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_tint_purch_1"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_tint_purch_1"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_tint_purch_1"), iParam2, 1);
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_tint_purch_2"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_tint_purch_2"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_tint_purch_2"), iParam2, 1);
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_tint_purch_3"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_tint_purch_3"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_tint_purch_3"), iParam2, 1);
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_tint_purch_4"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_tint_purch_4"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_tint_purch_4"), iParam2, 1);
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_tint_purch_5"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_tint_purch_5"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_tint_purch_5"), iParam2, 1);
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_tint_purch_6"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_tint_purch_6"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_tint_purch_6"), iParam2, 1);
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_tint_purch_7"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_tint_purch_7"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_tint_purch_7"), iParam2, 1);
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_tint_purch_8"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_tint_purch_8"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_tint_purch_8"), iParam2, 1);
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_tint_purch_9"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_tint_purch_9"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_tint_purch_9"), iParam2, 1);
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_tint_purch_10"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_tint_purch_10"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_tint_purch_10"), iParam2, 1);
					break;
			}
			break;
		
		case 11:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_tint_purch_11"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_tint_purch_11"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_tint_purch_11"), iParam2, 1);
					break;
			}
			break;
		
		case 12:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_tint_purch_12"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_tint_purch_12"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_tint_purch_12"), iParam2, 1);
					break;
			}
			break;
		
		default:
			break;
	}
}





void func_523(int iParam0)//Position - 0x52F81
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 0)
		{
			func_524(joaat("weapon_knife"));
		}
		else if (iParam0 == 1)
		{
			func_524(joaat("gadget_parachute"));
			GlobalFunc_5217(3610, PLAYER::GET_PLAYER_HAS_RESERVE_PARACHUTE(PLAYER::PLAYER_ID()), -1, 1);
		}
		else if (iParam0 == 2)
		{
			func_524(joaat("weapon_hammer"));
		}
		else if (iParam0 == 3)
		{
			func_524(joaat("weapon_grenade"));
		}
		else if (iParam0 == 4)
		{
			func_524(joaat("weapon_stickybomb"));
		}
		else if (iParam0 == 5)
		{
			func_524(joaat("weapon_smokegrenade"));
		}
		else if (iParam0 == 6)
		{
			func_524(joaat("weapon_heavysniper"));
		}
		else if (iParam0 == 7)
		{
			func_524(joaat("weapon_sniperrifle"));
		}
		else if (iParam0 == 8)
		{
			func_524(joaat("weapon_pistol"));
		}
		else if (iParam0 == 9)
		{
			func_524(joaat("weapon_combatpistol"));
		}
		else if (iParam0 == 10)
		{
			func_524(joaat("weapon_appistol"));
		}
		else if (iParam0 == 11)
		{
			func_524(joaat("weapon_microsmg"));
		}
		else if (iParam0 == 12)
		{
			func_524(joaat("weapon_advancedrifle"));
		}
		else if (iParam0 == 13)
		{
			func_524(joaat("weapon_assaultrifle"));
		}
		else if (iParam0 == 14)
		{
			func_524(joaat("weapon_combatmg"));
		}
		else if (iParam0 == 15)
		{
			func_524(joaat("weapon_mg"));
		}
		else if (iParam0 == 16)
		{
			func_524(joaat("weapon_assaultshotgun"));
		}
		else if (iParam0 == 17)
		{
			func_524(joaat("weapon_pumpshotgun"));
		}
		else if (iParam0 == 18)
		{
			func_524(joaat("weapon_sawnoffshotgun"));
		}
		else if (iParam0 == 19)
		{
			func_524(joaat("weapon_grenadelauncher"));
		}
		else if (iParam0 == 20)
		{
			func_524(joaat("weapon_rpg"));
		}
		else if (iParam0 == 21)
		{
			func_524(joaat("weapon_minigun"));
		}
		else if (iParam0 == 22)
		{
			func_524(joaat("weapon_molotov"));
		}
		else if (iParam0 == 23)
		{
			func_524(joaat("weapon_petrolcan"));
		}
		else if (iParam0 == 24)
		{
			func_524(joaat("weapon_nightstick"));
		}
		else if (iParam0 == 25)
		{
			func_524(joaat("weapon_golfclub"));
		}
		else if (iParam0 == 26)
		{
			func_524(joaat("weapon_crowbar"));
		}
		else if (iParam0 == 27)
		{
			func_524(joaat("weapon_assaultsmg"));
		}
		else if (iParam0 == 28)
		{
			func_524(joaat("weapon_smg"));
		}
		else if (iParam0 == 29)
		{
			func_524(joaat("weapon_carbinerifle"));
		}
		else if (iParam0 == 30)
		{
			func_524(joaat("weapon_assaultsmg"));
		}
		else if (iParam0 == 31)
		{
			if (WEAPON::IS_WEAPON_VALID(392730790))
			{
				func_524(392730790);
			}
		}
		else if (iParam0 == 32)
		{
			if (WEAPON::IS_WEAPON_VALID(joaat("weapon_pistol50")))
			{
				func_524(joaat("weapon_pistol50"));
			}
		}
		else if (iParam0 == 33)
		{
			if (WEAPON::IS_WEAPON_VALID(-572349828))
			{
				func_524(-572349828);
			}
		}
		else if (iParam0 == 34)
		{
			if (WEAPON::IS_WEAPON_VALID(joaat("weapon_bullpupshotgun")))
			{
				func_524(joaat("weapon_bullpupshotgun"));
			}
		}
		else if (iParam0 == 35)
		{
			if (WEAPON::IS_WEAPON_VALID(-947031628))
			{
				func_524(-947031628);
			}
		}
		else if (iParam0 == 36)
		{
			func_524(joaat("weapon_bat"));
		}
		else if (iParam0 == 37)
		{
			if (WEAPON::IS_WEAPON_VALID(joaat("weapon_bottle")))
			{
				func_524(joaat("weapon_bottle"));
			}
		}
		else if (iParam0 == 38)
		{
			if (WEAPON::IS_WEAPON_VALID(joaat("weapon_specialcarbine")))
			{
				func_524(joaat("weapon_specialcarbine"));
			}
		}
		else if (iParam0 == 39)
		{
			if (WEAPON::IS_WEAPON_VALID(joaat("weapon_snspistol")))
			{
				func_524(joaat("weapon_snspistol"));
			}
		}
		else if (iParam0 == 40)
		{
			if (WEAPON::IS_WEAPON_VALID(joaat("weapon_bullpuprifle")))
			{
				func_524(joaat("weapon_bullpuprifle"));
			}
		}
		else if (iParam0 == 41)
		{
			if (WEAPON::IS_WEAPON_VALID(joaat("weapon_heavypistol")))
			{
				func_524(joaat("weapon_heavypistol"));
			}
		}
		else if (iParam0 == 42)
		{
			if (WEAPON::IS_WEAPON_VALID(joaat("weapon_gusenberg")))
			{
				func_524(joaat("weapon_gusenberg"));
			}
		}
		else if (iParam0 == 43)
		{
			if (WEAPON::IS_WEAPON_VALID(joaat("weapon_dagger")))
			{
				func_524(joaat("weapon_dagger"));
			}
		}
		else if (iParam0 == 44)
		{
			if (WEAPON::IS_WEAPON_VALID(joaat("weapon_vintagepistol")))
			{
				func_524(joaat("weapon_vintagepistol"));
			}
		}
		else if (iParam0 == 45)
		{
			if (WEAPON::IS_WEAPON_VALID(joaat("weapon_musket")))
			{
				func_524(joaat("weapon_musket"));
			}
		}
		else if (iParam0 == 46)
		{
			if (WEAPON::IS_WEAPON_VALID(joaat("weapon_firework")))
			{
				func_524(joaat("weapon_firework"));
			}
		}
		else if (iParam0 == 47)
		{
			if (WEAPON::IS_WEAPON_VALID(joaat("weapon_flaregun")))
			{
				func_524(joaat("weapon_flaregun"));
			}
		}
		else if (iParam0 == 48)
		{
			if (WEAPON::IS_WEAPON_VALID(joaat("weapon_heavyshotgun")))
			{
				func_524(joaat("weapon_heavyshotgun"));
			}
		}
		else if (iParam0 == 49)
		{
			if (WEAPON::IS_WEAPON_VALID(joaat("weapon_marksmanrifle")))
			{
				func_524(joaat("weapon_marksmanrifle"));
			}
		}
		else if (iParam0 == 50)
		{
			if (WEAPON::IS_WEAPON_VALID(joaat("weapon_proxmine")))
			{
				func_524(joaat("weapon_proxmine"));
			}
		}
		else if (iParam0 == 51)
		{
			if (WEAPON::IS_WEAPON_VALID(joaat("weapon_hominglauncher")))
			{
				func_524(joaat("weapon_hominglauncher"));
			}
		}
		else if (iParam0 == 52)
		{
		}
		else if (iParam0 == 53)
		{
			if (WEAPON::IS_WEAPON_VALID(joaat("weapon_combatpdw")))
			{
				func_524(joaat("weapon_combatpdw"));
			}
		}
		else if (iParam0 == 54)
		{
		}
		else if (iParam0 == 55)
		{
			if (WEAPON::IS_WEAPON_VALID(joaat("weapon_hatchet")))
			{
				func_524(joaat("weapon_hatchet"));
			}
		}
	}
}

void func_524(int iParam0)//Position - 0x534BA
{
	if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0, 0))
	{
		func_535(iParam0);
		if (GlobalFunc_8821(iParam0, -1) == 0)
		{
			GlobalFunc_9453(iParam0, 1, -1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iParam0, 1))
			{
				GlobalFunc_3266(iParam0);
			}
		}
	}
	else if (GlobalFunc_8821(iParam0, -1) == 1)
	{
		GlobalFunc_9453(iParam0, 0, -1);
	}
}











void func_535(int iParam0)//Position - 0x53A4E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != joaat("weapon_unarmed") || iParam0 != 0)
	{
		iVar0 = GlobalFunc_6022(iParam0);
		if (iVar0 < 2903)
		{
			if ((((((((((iParam0 == joaat("weapon_knife") || iParam0 == joaat("gadget_parachute")) || iParam0 == joaat("weapon_crowbar")) || iParam0 == joaat("weapon_nightstick")) || iParam0 == joaat("weapon_golfclub")) || iParam0 == joaat("weapon_hammer")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("gadget_parachute")) || iParam0 == joaat("weapon_bottle")) || iParam0 == joaat("weapon_dagger")) || iParam0 == joaat("weapon_hatchet"))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0, 0))
				{
					if (GlobalFunc_6872(iVar0, -1, 0) != 1)
					{
						GlobalFunc_6720(iVar0, 1, -1, 1);
					}
				}
			}
			else if (GlobalFunc_6872(iVar0, -1, 0) != WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0))
			{
				GlobalFunc_6720(iVar0, WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0), -1, 1);
			}
			if (iParam0 == joaat("weapon_microsmg"))
			{
			}
			if ((((((((((((iParam0 != joaat("weapon_knife") && iParam0 != joaat("gadget_parachute")) && iParam0 != joaat("weapon_crowbar")) && iParam0 != joaat("weapon_nightstick")) && iParam0 != joaat("weapon_golfclub")) && iParam0 != joaat("weapon_bat")) && iParam0 != joaat("gadget_parachute")) && iParam0 != joaat("weapon_pistol")) && iParam0 != joaat("weapon_hammer")) && iParam0 != joaat("weapon_bottle")) && iParam0 != joaat("weapon_dagger")) && iParam0 != joaat("weapon_knuckle")) && iParam0 != joaat("weapon_hatchet"))
			{
				if (!GlobalFunc_1157(64))
				{
					if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0, 0))
					{
						if (((((WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0) == 0 && func_547(iParam0, -1, 0) == 0) && GlobalFunc_6872(GlobalFunc_6021(iParam0), -1, 0) == 0) && !func_543(iParam0, -1, 0)) && !GlobalFunc_6725(GlobalFunc_3264(iParam0), -1)) && Global_1582596[PLAYER::PLAYER_ID() /*324*/] != 13)
						{
							WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), iParam0);
							GlobalFunc_9453(iParam0, 0, -1);
						}
						if (Global_2454318.f_279 == 0)
						{
							if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0) < 4 && Global_1582596[PLAYER::PLAYER_ID() /*324*/] != 13)
							{
								iVar1 = GlobalFunc_1535(PLAYER::PLAYER_PED_ID());
								iVar2 = PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID());
								if ((iVar2 != 2 || iVar2 != 1) || iVar2 != 3)
								{
									if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iVar1, 0) && WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar1) < 4)
									{
										if (((((((((((((((((((((((iVar1 == joaat("weapon_microsmg") || iVar1 == joaat("weapon_pistol")) || iVar1 == joaat("weapon_combatpistol")) || iVar1 == joaat("weapon_smg")) || iVar1 == joaat("weapon_appistol")) || iVar1 == joaat("weapon_assaultrifle")) || iVar1 == joaat("weapon_carbinerifle")) || iVar1 == joaat("weapon_specialcarbine")) || iVar1 == joaat("weapon_advancedrifle")) || iVar1 == joaat("weapon_mg")) || iVar1 == joaat("weapon_combatmg")) || iVar1 == joaat("weapon_assaultsmg")) || iVar1 == -572349828) || iVar1 == joaat("weapon_pistol50")) || iVar1 == joaat("weapon_snspistol")) || iVar1 == joaat("weapon_bullpuprifle")) || iVar1 == joaat("weapon_heavypistol")) || iVar1 == joaat("weapon_gusenberg")) || iVar1 == joaat("weapon_musket")) || iVar1 == joaat("weapon_vintagepistol")) || iVar1 == joaat("weapon_heavyshotgun")) || iVar1 == joaat("weapon_marksmanrifle")) || iVar1 == joaat("weapon_combatpdw")) || iVar1 == joaat("weapon_marksmanpistol"))
										{
											GlobalFunc_8417("AMMO_IS_LOW", 1);
											Global_2454318.f_279 = 1;
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
}








bool func_543(int iParam0, int iParam1, int iParam2)//Position - 0x54356
{
	var uVar0;
	int iVar1;
	
	if (iParam2 == 0)
	{
	}
	if (GlobalFunc_1434())
	{
		return 0;
	}
	if (GlobalFunc_6714() == 0)
	{
		return 0;
	}
	if (iParam0 != joaat("gadget_parachute"))
	{
		if (GlobalFunc_6725(GlobalFunc_3264(iParam0), -1))
		{
			return 0;
		}
	}
	uVar0 = func_544(iParam0, iParam1);
	iVar1 = GlobalFunc_4977(iParam0);
	return MISC::IS_BIT_SET(uVar0, GlobalFunc_299(iVar1));
}

var func_544(int iParam0, int iParam1)//Position - 0x543B5
{
	var uVar0;
	
	uVar0 = GlobalFunc_6872(GlobalFunc_7283(iParam0), iParam1, 0);
	return uVar0;
}



bool func_547(int iParam0, int iParam1, int iParam2)//Position - 0x5474E
{
	var uVar0;
	int iVar1;
	
	if (iParam2 == 0)
	{
	}
	if (GlobalFunc_1434())
	{
		return 0;
	}
	uVar0 = func_548(iParam0, iParam1);
	iVar1 = GlobalFunc_4977(iParam0);
	return MISC::IS_BIT_SET(uVar0, GlobalFunc_299(iVar1));
}

var func_548(int iParam0, int iParam1)//Position - 0x54785
{
	var uVar0;
	
	uVar0 = GlobalFunc_6872(GlobalFunc_6912(iParam0), iParam1, 0);
	return uVar0;
}




int func_552(int iParam0)//Position - 0x54B69
{
	if (iParam0 == joaat("weapon_knife"))
	{
		return 0;
	}
	else if (iParam0 == joaat("gadget_parachute"))
	{
		return 1;
	}
	else if (iParam0 == joaat("weapon_grenade"))
	{
		return 2;
	}
	else if (iParam0 == joaat("weapon_hammer"))
	{
		return 3;
	}
	else if (iParam0 == joaat("weapon_stickybomb"))
	{
		return 4;
	}
	else if (iParam0 == joaat("weapon_smokegrenade"))
	{
		return 5;
	}
	else if (iParam0 == joaat("weapon_heavysniper"))
	{
		return 6;
	}
	else if (iParam0 == joaat("weapon_sniperrifle"))
	{
		return 7;
	}
	else if (iParam0 == joaat("weapon_pistol"))
	{
		return 8;
	}
	else if (iParam0 == joaat("weapon_combatpistol"))
	{
		return 9;
	}
	else if (iParam0 == joaat("weapon_appistol"))
	{
		return 10;
	}
	else if (iParam0 == joaat("weapon_microsmg"))
	{
		return 11;
	}
	else if (iParam0 == joaat("weapon_advancedrifle"))
	{
		return 12;
	}
	else if (iParam0 == joaat("weapon_assaultrifle"))
	{
		return 13;
	}
	else if (iParam0 == joaat("weapon_combatmg"))
	{
		return 14;
	}
	else if (iParam0 == joaat("weapon_mg"))
	{
		return 15;
	}
	else if (iParam0 == joaat("weapon_assaultshotgun"))
	{
		return 16;
	}
	else if (iParam0 == joaat("weapon_pumpshotgun"))
	{
		return 17;
	}
	else if (iParam0 == joaat("weapon_sawnoffshotgun"))
	{
		return 18;
	}
	else if (iParam0 == joaat("weapon_grenadelauncher"))
	{
		return 19;
	}
	else if (iParam0 == joaat("weapon_rpg"))
	{
		return 20;
	}
	else if (iParam0 == joaat("weapon_minigun"))
	{
		return 21;
	}
	else if (iParam0 == joaat("weapon_molotov"))
	{
		return 22;
	}
	else if (iParam0 == joaat("weapon_petrolcan"))
	{
		return 23;
	}
	else if (iParam0 == joaat("weapon_nightstick"))
	{
		return 24;
	}
	else if (iParam0 == joaat("weapon_golfclub"))
	{
		return 25;
	}
	else if (iParam0 == joaat("weapon_crowbar"))
	{
		return 26;
	}
	else if (iParam0 == joaat("weapon_assaultsmg"))
	{
		return 27;
	}
	else if (iParam0 == joaat("weapon_assaultsmg"))
	{
		return 28;
	}
	else if (iParam0 == joaat("weapon_smg"))
	{
		return 29;
	}
	else if (iParam0 == joaat("weapon_carbinerifle"))
	{
		return 30;
	}
	else if (iParam0 == joaat("weapon_assaultsmg"))
	{
		return 31;
	}
	else if (iParam0 == 392730790)
	{
		return 32;
	}
	else if (iParam0 == joaat("weapon_pistol50"))
	{
		return 33;
	}
	else if (iParam0 == -572349828)
	{
		return 34;
	}
	else if (iParam0 == -947031628)
	{
		return 35;
	}
	else if (iParam0 == joaat("weapon_bat"))
	{
		return 36;
	}
	else if (iParam0 == joaat("weapon_bottle"))
	{
		return 37;
	}
	else if (iParam0 == joaat("weapon_specialcarbine"))
	{
		return 38;
	}
	else if (iParam0 == joaat("weapon_snspistol"))
	{
		return 39;
	}
	else if (iParam0 == joaat("weapon_bullpuprifle"))
	{
		return 40;
	}
	else if (iParam0 == joaat("weapon_heavypistol"))
	{
		return 41;
	}
	else if (iParam0 == joaat("weapon_gusenberg"))
	{
		return 42;
	}
	else if (iParam0 == joaat("weapon_dagger"))
	{
		return 43;
	}
	else if (iParam0 == joaat("weapon_vintagepistol"))
	{
		return 44;
	}
	else if (iParam0 == joaat("weapon_heavyshotgun"))
	{
		return 45;
	}
	else if (iParam0 == joaat("weapon_marksmanrifle"))
	{
		return 46;
	}
	else if (iParam0 == joaat("weapon_proxmine"))
	{
		return 47;
	}
	else if (iParam0 == joaat("weapon_hominglauncher"))
	{
		return 48;
	}
	else if (iParam0 == joaat("weapon_combatpdw"))
	{
		return 50;
	}
	else if (iParam0 == joaat("weapon_hatchet"))
	{
		return 52;
	}
	return 55;
}




int func_556(int iParam0, var uParam1)//Position - 0x5526D
{
	if (GlobalFunc_3() == 0 || GlobalFunc_59() == 0)
	{
		switch (iParam0)
		{
			case joaat("weapon_knife"):
				*uParam1 = 187;
				return 1;
				break;
			
			case joaat("weapon_nightstick"):
				*uParam1 = 194;
				return 1;
				break;
			
			case joaat("weapon_pistol"):
				*uParam1 = 245;
				return 1;
				break;
			
			case joaat("weapon_combatpistol"):
				*uParam1 = 255;
				return 1;
				break;
			
			case joaat("weapon_appistol"):
				*uParam1 = 275;
				return 1;
				break;
			
			case joaat("weapon_microsmg"):
				*uParam1 = 285;
				return 1;
				break;
			
			case joaat("weapon_smg"):
				*uParam1 = 295;
				return 1;
				break;
			
			case joaat("weapon_assaultrifle"):
				*uParam1 = 314;
				return 1;
				break;
			
			case joaat("weapon_carbinerifle"):
				*uParam1 = 323;
				return 1;
				break;
			
			case joaat("weapon_specialcarbine"):
				*uParam1 = 2455;
				return 1;
				break;
			
			case joaat("weapon_advancedrifle"):
				*uParam1 = 332;
				return 1;
				break;
			
			case joaat("weapon_mg"):
				*uParam1 = 341;
				return 1;
				break;
			
			case joaat("weapon_combatmg"):
				*uParam1 = 350;
				return 1;
				break;
			
			case joaat("weapon_pumpshotgun"):
				*uParam1 = 368;
				return 1;
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				*uParam1 = 378;
				return 1;
				break;
			
			case joaat("weapon_assaultshotgun"):
				*uParam1 = 396;
				return 1;
				break;
			
			case joaat("weapon_stungun"):
				*uParam1 = 406;
				return 1;
				break;
			
			case joaat("weapon_sniperrifle"):
				*uParam1 = 415;
				return 1;
				break;
			
			case joaat("weapon_heavysniper"):
				*uParam1 = 424;
				return 1;
				break;
			
			case joaat("weapon_grenadelauncher"):
				*uParam1 = 433;
				return 1;
				break;
			
			case joaat("weapon_rpg"):
				*uParam1 = 440;
				return 1;
				break;
			
			case joaat("weapon_minigun"):
				*uParam1 = 449;
				return 1;
				break;
			
			case joaat("weapon_grenade"):
				*uParam1 = 457;
				return 1;
				break;
			
			case joaat("weapon_smokegrenade"):
				*uParam1 = 466;
				return 1;
				break;
			
			case joaat("weapon_stickybomb"):
				*uParam1 = 474;
				return 1;
				break;
			
			case joaat("gadget_parachute"):
				*uParam1 = 571;
				return 1;
				break;
			
			case joaat("weapon_petrolcan"):
				*uParam1 = 574;
				return 1;
				break;
			
			case joaat("weapon_pistol50"):
				*uParam1 = 265;
				return 1;
				break;
			
			case -572349828:
				*uParam1 = 359;
				return 1;
				break;
			
			case joaat("weapon_assaultsmg"):
				*uParam1 = 305;
				return 1;
				break;
			
			case 392730790:
				*uParam1 = 427;
				return 1;
				break;
			
			case joaat("weapon_hammer"):
				*uParam1 = 222;
				return 1;
				break;
			
			case joaat("weapon_bullpupshotgun"):
				*uParam1 = 387;
				return 1;
				break;
			
			case joaat("weapon_bottle"):
				*uParam1 = 1722;
				return 1;
				break;
			
			case joaat("weapon_snspistol"):
				*uParam1 = 1732;
				return 1;
				break;
			
			case joaat("weapon_heavypistol"):
				*uParam1 = 2445;
				return 1;
				break;
			
			case joaat("weapon_bullpuprifle"):
				*uParam1 = 2465;
				return 1;
				break;
			
			case joaat("weapon_gusenberg"):
				*uParam1 = 2475;
				return 1;
				break;
			
			case joaat("weapon_vintagepistol"):
				*uParam1 = 2758;
				return 1;
				break;
			
			case joaat("weapon_dagger"):
				*uParam1 = 2748;
				return 1;
				break;
			
			case joaat("weapon_musket"):
				*uParam1 = 2778;
				return 1;
				break;
			
			case joaat("weapon_firework"):
				*uParam1 = 2768;
				return 1;
				break;
			
			case joaat("weapon_heavyshotgun"):
				*uParam1 = 2856;
				return 1;
				break;
			
			case joaat("weapon_marksmanrifle"):
				*uParam1 = 2866;
				return 1;
				break;
			
			case joaat("weapon_proxmine"):
				*uParam1 = 2882;
				return 1;
				break;
			
			case joaat("weapon_hominglauncher"):
				*uParam1 = 2890;
				return 1;
				break;
			
			case joaat("weapon_combatpdw"):
				*uParam1 = 2900;
				return 1;
				break;
			
			case joaat("weapon_hatchet"):
				*uParam1 = 2874;
				return 1;
				break;
			}
	}
	return 0;
}

int func_557(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x5561D
{
	int iVar0;
	char* sVar1;
	char* sVar17;
	struct<4> Var33;
	char[] cVar37[8];
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	bool bVar48;
	struct<25> Var49;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	
	Local_168.f_103.f_21 = 1;
	if (GlobalFunc_5785(1))
	{
		if (iParam0 == 0)
		{
			if (func_614(iParam2, iParam1))
			{
				iParam1 = 0;
			}
		}
		else if (iParam0 == 2)
		{
			if (func_433(iParam2, iParam4, iParam1))
			{
				iParam1 = 0;
			}
		}
		else if (iParam0 == 3)
		{
			iVar0 = func_259(iParam2, Local_1222.f_9, Local_1222.f_10);
			if (iParam1 <= 0)
			{
				iParam1 = 0;
			}
			if (iVar0 != 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_242(GlobalFunc_8354(), iVar0))
				{
					iParam1 = 0;
				}
			}
			else if (iParam2 == -61829581)
			{
			}
			else
			{
				iParam1 = 0;
			}
		}
		if (Global_68245)
		{
			if ((iParam1 == 0 || MONEY::NETWORK_CAN_SPEND_MONEY(iParam1, 0, 1, 0, -1)) || Local_168.f_103.f_25)
			{
				if (GlobalFunc_4979() && !Local_168.f_103.f_25)
				{
					if (((iParam2 == joaat("weapon_grenade") || iParam2 == joaat("weapon_stickybomb")) || iParam2 == joaat("weapon_smokegrenade")) || iParam2 == joaat("weapon_proxmine"))
					{
						func_282(&Global_2543149, Local_168.f_103.f_3, Local_168.f_103.f_1, &Var33, &cVar37);
						GlobalFunc_215(&sVar1, Var33, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 3, iParam3, 0, -1, -1);
						GlobalFunc_215(&sVar17, Var33, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 3, iParam3, 1, -1, -1);
						iVar41 = GlobalFunc_6351(iParam2);
						iVar42 = GlobalFunc_6872(iVar41, -1, 0);
						iVar42++;
						if (GlobalFunc_7912(78225582, -1829708865, MISC::GET_HASH_KEY(&sVar1), 537254313, 1, 0, 1, 4, 0, 3) && GlobalFunc_7912(78225582, 1067618600, MISC::GET_HASH_KEY(&sVar17), 537254313, 1, iParam1, iVar42, 4, 0, 3))
						{
							Local_168.f_103.f_25 = 1;
							Local_168.f_103.f_26 = 0;
						}
						else
						{
							GlobalFunc_5069(GlobalFunc_5422());
							Local_168.f_103.f_21 = 0;
							return 0;
						}
					}
					else if (iParam0 == 0 && iParam2 == joaat("weapon_unarmed"))
					{
						func_282(&Global_2543149, Local_168.f_103.f_3, Local_168.f_103.f_1, &Var33, &cVar37);
						GlobalFunc_215(&sVar1, Var33, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 3, iParam3, 0, -1, -1);
						if (GlobalFunc_7912(78225582, 1067618600, MISC::GET_HASH_KEY(&sVar1), 537254313, 1, iParam1, 1, 4, 0, 3))
						{
							Local_168.f_103.f_25 = 1;
							Local_168.f_103.f_26 = 0;
						}
						else
						{
							GlobalFunc_5069(GlobalFunc_5422());
							Local_168.f_103.f_21 = 0;
							return 0;
						}
					}
					else if (iParam0 == 0)
					{
						func_282(&Global_2543149, Local_168.f_103.f_3, Local_168.f_103.f_1, &Var33, &cVar37);
						GlobalFunc_215(&sVar1, Var33, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 3, iParam3, 0, -1, -1);
						if (GlobalFunc_7912(78225582, -1829708865, MISC::GET_HASH_KEY(&sVar1), 537254313, 1, iParam1, 1, 4, 0, 3))
						{
							Local_168.f_103.f_25 = 1;
							Local_168.f_103.f_26 = 0;
						}
						else
						{
							GlobalFunc_5069(GlobalFunc_5422());
							Local_168.f_103.f_21 = 0;
							return 0;
						}
					}
					else if (iParam0 == 1)
					{
						GlobalFunc_3257(iParam8, iParam7, &Var33, 0);
						GlobalFunc_215(&sVar1, Var33, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 3, 0, GlobalFunc_4977(iParam2), -1, -1);
						if (GlobalFunc_7912(78225582, 1067618600, MISC::GET_HASH_KEY(&sVar1), 537254313, iParam9, (iParam1 / iParam9), 1, 4, 0, 3))
						{
							Local_168.f_103.f_25 = 1;
							Local_168.f_103.f_26 = 0;
						}
						else
						{
							GlobalFunc_5069(GlobalFunc_5422());
							Local_168.f_103.f_21 = 0;
							return 0;
						}
					}
					else if (iParam0 == 2)
					{
						func_279(iParam2, (Local_168.f_103.f_2 - 1), &Var33, &cVar37);
						GlobalFunc_215(&sVar1, Var33, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 3, 1, GlobalFunc_4977(iParam2), -1, -1);
						if (GlobalFunc_7912(78225582, 1671640801, MISC::GET_HASH_KEY(&sVar1), 537254313, 1, iParam1, 1, 4, 0, 3))
						{
							Local_168.f_103.f_25 = 1;
							Local_168.f_103.f_26 = 0;
						}
						else
						{
							GlobalFunc_5069(GlobalFunc_5422());
							Local_168.f_103.f_21 = 0;
							return 0;
						}
					}
					else if (iParam0 == 3)
					{
						iVar43 = 2;
						if (iParam2 == joaat("gadget_parachute"))
						{
							iVar43 = Local_1222.f_10;
						}
						GlobalFunc_215(&sVar1, Local_1222, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 3, iVar43, GlobalFunc_4977(iParam2), -1, -1);
						if (GlobalFunc_7912(78225582, 1671640801, MISC::GET_HASH_KEY(&sVar1), 537254313, 1, iParam1, 1, 4, 0, 3))
						{
							Local_168.f_103.f_25 = 1;
							Local_168.f_103.f_26 = 0;
						}
						else
						{
							GlobalFunc_5069(GlobalFunc_5422());
							Local_168.f_103.f_21 = 0;
							return 0;
						}
					}
				}
				if (!GlobalFunc_4979() || (func_601() && !Local_168.f_103.f_25))
				{
					if (iParam1 >= 0)
					{
						if (iParam0 == 0)
						{
							GlobalFunc_5790(joaat("mpply_ingamestore_moneyspent"), iParam1);
							if (iParam3 == 3)
							{
								func_590(iParam5, 1, 3);
							}
							else
							{
								func_590(iParam5, 1, 0);
								func_588(iLocal_150);
								func_587();
							}
						}
						else if (iParam0 == 2 || iParam0 == 3)
						{
							GlobalFunc_5217(4, 1, -1, 1);
							GlobalFunc_5790(joaat("mpply_ingamestore_moneyspent"), iParam1);
							func_590(iParam5, 1, 1);
						}
						else if (iParam0 == 1)
						{
							func_590(iParam5, 1, 2);
							GlobalFunc_5790(joaat("mpply_ingamestore_moneyspent"), iParam1);
						}
						if (GlobalFunc_218())
						{
							GlobalFunc_5069(GlobalFunc_5422());
						}
					}
					if (iParam0 == 0)
					{
						iLocal_150 = iParam2;
						iLocal_151 = Local_168.f_103.f_3;
						iLocal_152 = Local_168.f_103.f_1;
					}
					if (iParam0 == 0 || iParam0 == 1)
					{
						if (iParam3 != 3)
						{
							GlobalFunc_9453(iParam2, 1, -1);
							if (iParam0 == 0)
							{
								func_585(iParam2, 1, -1);
								iVar44 = GlobalFunc_6872(2043, -1, 0);
								iVar45 = (iVar44 / 25000) + 1 * 25000;
								if ((iVar44 + iParam1) >= iVar45)
								{
									func_583(iVar45);
								}
								GlobalFunc_6720(2043, (iVar44 + iParam1), -1, 1);
							}
						}
						if (!GlobalFunc_6910(0, -1))
						{
							bVar48 = true;
							iVar46 = 0;
							while (iVar46 < 16)
							{
								iVar47 = 0;
								while (iVar47 < 6)
								{
									if (func_84(Local_168, &Global_2543149, &Var49, iVar46, iVar47, 0))
									{
										if (Var49.f_24 == 0)
										{
											if (func_685(Var49, Var49.f_24) && !func_543(Var49, -1, 0))
											{
												bVar48 = false;
											}
										}
									}
									iVar47++;
								}
								iVar46++;
							}
							if (bVar48)
							{
								GlobalFunc_6909(0, 1, -1);
							}
						}
						if (iParam0 == 0)
						{
							GlobalFunc_9453(iParam2, 1, -1);
							while (func_164(&Local_1216, iParam2, iVar75, 0))
							{
								if (Local_1216.f_1)
								{
									GlobalFunc_9460(Local_1216, iParam2, 1);
									GlobalFunc_9470(Local_1216, iParam2, 1);
								}
								iVar75++;
							}
						}
					}
					else if (iParam0 == 2)
					{
						GlobalFunc_9460(iParam4, iParam2, 1);
						GlobalFunc_9470(iParam4, iParam2, 1);
					}
					else if (iParam0 == 3)
					{
						iVar76 = func_259(iParam2, Local_1222.f_9, Local_1222.f_10);
						if (iVar76 != 0)
						{
							GlobalFunc_9471(iVar76, 1, -1);
							func_435(iVar76, 1, -1);
						}
					}
					if ((iParam2 != 0 && iParam2 != joaat("weapon_unarmed")) && iParam2 != -61829581)
					{
						func_535(iParam2);
					}
					Local_168.f_103.f_21 = 0;
					return 1;
				}
			}
		}
		else if (GlobalFunc_469(GlobalFunc_8354()) >= iParam1)
		{
			if (iParam1 >= 0)
			{
				GlobalFunc_10834(GlobalFunc_8354(), GlobalFunc_2471(Local_168), iParam1);
			}
			if (iParam0 == 0)
			{
				func_590(iParam5, 1, 0);
				func_588(iLocal_150);
				iLocal_150 = iParam2;
				iLocal_151 = Local_168.f_103.f_3;
				iLocal_152 = Local_168.f_103.f_1;
			}
			else if (iParam0 == 1)
			{
				func_590(iParam5, 1, 1);
			}
			else if (iParam0 == 2)
			{
				func_590(iParam5, 1, 1);
			}
			else if (iParam0 == 3)
			{
				func_590(iParam5, 1, 1);
			}
			if (iParam0 == 0)
			{
				func_560(GlobalFunc_8354(), iParam2, 1);
				while (func_164(&Local_1216, iParam2, iVar77, 0))
				{
					if (Local_1216.f_1)
					{
						func_558(GlobalFunc_8354(), iParam2, Local_1216, 1);
					}
					iVar77++;
				}
				iVar78 = 0;
				iVar79 = 0;
				iVar80 = 0;
				STATS::STAT_GET_INT(joaat("sp0_sp_money_spent_on_weapons"), &iVar78, -1);
				STATS::STAT_GET_INT(joaat("sp1_sp_money_spent_on_weapons"), &iVar79, -1);
				STATS::STAT_GET_INT(joaat("sp2_sp_money_spent_on_weapons"), &iVar80, -1);
				iVar81 = ((iVar78 + iVar79) + iVar80);
				iVar82 = (iVar81 / 25000) + 1 * 25000;
				if ((iVar81 + iParam1) >= iVar82)
				{
					func_583(iVar82);
				}
				switch (GlobalFunc_8354())
				{
					case 0:
						STATS::STAT_SET_INT(joaat("sp0_sp_money_spent_on_weapons"), (iVar78 + iParam1), 1);
						break;
					
					case 1:
						STATS::STAT_SET_INT(joaat("sp1_sp_money_spent_on_weapons"), (iVar79 + iParam1), 1);
						break;
					
					case 2:
						STATS::STAT_SET_INT(joaat("sp2_sp_money_spent_on_weapons"), (iVar80 + iParam1), 1);
						break;
				}
			}
			else if (iParam0 == 2)
			{
				func_558(GlobalFunc_8354(), iParam2, iParam4, 1);
			}
			else if (iParam0 == 3)
			{
				iVar83 = func_259(iParam2, Local_1222.f_9, Local_1222.f_10);
				if (iVar83 != 0)
				{
					func_517(GlobalFunc_8354(), iVar83, 1);
				}
			}
			if (iParam3 == 3)
			{
				iLocal_1024 = 1;
			}
			Local_168.f_103.f_21 = 0;
			return 1;
		}
	}
	return 0;
}

void func_558(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x55EB3
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (GlobalFunc_42(iParam0))
	{
		iVar0 = GlobalFunc_7249(iParam0, iParam1, iParam2);
		iVar1 = GlobalFunc_5846(iParam2, iParam1);
		iVar2 = GlobalFunc_299(iVar1);
		if (bParam3)
		{
			MISC::SET_BIT(&iVar0, iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, iVar2);
		}
		func_559(iParam0, iParam1, iParam2, iVar0);
	}
}

void func_559(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x55F06
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_5846(iParam2, iParam1);
	iVar1 = GlobalFunc_300(iVar0);
	switch (iVar1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_addon_purch_0"), iParam3, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_addon_purch_0"), iParam3, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_addon_purch_0"), iParam3, 1);
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_addon_purch_1"), iParam3, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_addon_purch_1"), iParam3, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_addon_purch_1"), iParam3, 1);
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_addon_purch_2"), iParam3, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_addon_purch_2"), iParam3, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_addon_purch_2"), iParam3, 1);
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_addon_purch_3"), iParam3, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_addon_purch_3"), iParam3, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_addon_purch_3"), iParam3, 1);
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_addon_purch_4"), iParam3, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_addon_purch_4"), iParam3, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_addon_purch_4"), iParam3, 1);
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_addon_purch_5"), iParam3, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_addon_purch_5"), iParam3, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_addon_purch_5"), iParam3, 1);
					break;
			}
			break;
		
		default:
			break;
	}
}

void func_560(int iParam0, int iParam1, bool bParam2)//Position - 0x56116
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (GlobalFunc_42(iParam0))
	{
		uVar0 = func_562(iParam0, iParam1);
		iVar1 = GlobalFunc_4977(iParam1);
		iVar2 = GlobalFunc_299(iVar1);
		if (bParam2)
		{
			MISC::SET_BIT(&uVar0, iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(&uVar0, iVar2);
		}
		func_561(iParam0, iParam1, uVar0);
	}
}

void func_561(int iParam0, int iParam1, int iParam2)//Position - 0x56163
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_4977(iParam1);
	iVar1 = GlobalFunc_300(iVar0);
	switch (iVar1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_purch_0"), uParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_purch_0"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_purch_0"), iParam2, 1);
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_purch_1"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_purch_1"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_purch_1"), iParam2, 1);
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_purch_2"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_purch_2"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_purch_2"), iParam2, 1);
					break;
			}
			break;
		
		default:
			break;
	}
}

var func_562(int iParam0, int iParam1)//Position - 0x5627B
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = GlobalFunc_4977(iParam1);
	iVar2 = GlobalFunc_300(iVar1);
	switch (iVar2)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_purch_0"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_purch_0"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_purch_0"), &uVar0, -1);
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_purch_1"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_purch_1"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_purch_1"), &uVar0, -1);
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_purch_2"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_purch_2"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_purch_2"), &uVar0, -1);
					break;
			}
			break;
		
		default:
			break;
	}
	return uVar0;
}





















void func_583(int iParam0)//Position - 0x571A9
{
	int iVar0;
	
	iVar0 = GlobalFunc_886(86);
	Global_2408820[iVar0 /*83*/] = 86;
	Global_2408820[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2408820[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}


void func_585(int iParam0, bool bParam1, int iParam2)//Position - 0x5722D
{
	if (bParam1)
	{
		if (!func_543(iParam0, iParam2, 0))
		{
			func_586(iParam0, 1, iParam2);
		}
	}
	else if (func_543(iParam0, iParam2, 0))
	{
		func_586(iParam0, 0, iParam2);
	}
}

void func_586(int iParam0, bool bParam1, int iParam2)//Position - 0x57268
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_544(iParam0, iParam2);
	iVar1 = GlobalFunc_4977(iParam0);
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&iVar0, GlobalFunc_299(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, GlobalFunc_299(iVar1));
		}
		GlobalFunc_6720(GlobalFunc_7283(iParam0), iVar0, iParam2, 1);
	}
}

void func_587()//Position - 0x572BA
{
	int iVar0;
	
	iVar0 = GlobalFunc_886(19);
	Global_2408820[iVar0 /*83*/] = 19;
	StringCopy(&(Global_2408820[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

void func_588(int iParam0)//Position - 0x572E7
{
	switch (func_589(iParam0))
	{
		case 1:
			GlobalFunc_184(49, 1);
			break;
		
		case 2:
			GlobalFunc_184(50, 1);
			break;
	}
}

int func_589(int iParam0)//Position - 0x5731A
{
	switch (iParam0)
	{
		case joaat("weapon_stickybomb"):
		case joaat("weapon_stungun"):
		case joaat("weapon_grenadelauncher"):
		case joaat("weapon_heavysniper"):
		case joaat("weapon_carbinerifle"):
		case joaat("weapon_specialcarbine"):
		case joaat("weapon_smg"):
		case joaat("weapon_assaultshotgun"):
		case joaat("weapon_appistol"):
			return 0;
			break;
		
		case joaat("weapon_smokegrenade"):
		case joaat("weapon_remotesniper"):
		case joaat("weapon_rpg"):
		case joaat("weapon_mg"):
		case joaat("weapon_advancedrifle"):
		case joaat("weapon_microsmg"):
		case joaat("weapon_sawnoffshotgun"):
		case joaat("weapon_pistol"):
			return 1;
			break;
		
		case joaat("weapon_grenade"):
		case joaat("weapon_minigun"):
		case joaat("weapon_sniperrifle"):
		case joaat("weapon_combatmg"):
		case joaat("weapon_assaultrifle"):
		case joaat("weapon_pumpshotgun"):
		case joaat("weapon_combatpistol"):
			return 2;
			break;
		
		default:
			return 3;
			break;
	}
	return 3;
}

void func_590(int iParam0, bool bParam1, int iParam2)//Position - 0x573D6
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (bParam1)
	{
		if (!GlobalFunc_7782(iParam0, 3, 0))
		{
			GlobalFunc_7834(iParam0, 3, 0);
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			switch (GlobalFunc_330(iParam0))
			{
				case 4:
					GlobalFunc_7734(305, 0, 0);
					break;
				
				case 1:
					GlobalFunc_7734(304, 0, 0);
					break;
				
				case 3:
					GlobalFunc_7734(308, 0, 0);
					break;
				
				case 0:
					GlobalFunc_7734(306, 0, 0);
					break;
				
				case 2:
					GlobalFunc_7734(307, 0, 0);
					break;
				}
		}
		if (Global_90014.f_1263 >= 0)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				bVar0 = true;
				if (iParam2 == 6)
				{
					if (GlobalFunc_4962(1))
					{
						GlobalFunc_4960(1);
						bVar0 = false;
					}
				}
				if (bVar0)
				{
					bVar1 = MONEY::NETWORK_GET_VC_BANK_BALANCE() > 0;
					bVar2 = MONEY::NETWORK_GET_VC_BANK_BALANCE() < Global_90014.f_1263;
					if (GlobalFunc_218())
					{
						if (GlobalFunc_1360(GlobalFunc_5422()) > 0)
						{
							NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(GlobalFunc_1360(GlobalFunc_5422()));
						}
					}
					if (Global_90014.f_1263 > 0)
					{
						if (iParam2 == 1 && Global_90014.f_1264 == -61829581)
						{
							MONEY::NETWORK_BUY_ITEM(Global_90014.f_1263, MISC::GET_HASH_KEY(&(Global_90014.f_1259)), 17, Global_90014.f_1265, bVar1, &(Global_90014.f_1259), MISC::GET_HASH_KEY(GlobalFunc_1988(iParam0)), Global_90014.f_1264, Global_90014.f_1266, bVar2);
						}
						else if (((iParam2 == 0 || iParam2 == 7) || iParam2 == 9) || iParam2 == 11)
						{
							MONEY::NETWORK_BUY_ITEM(Global_90014.f_1263, Global_90014.f_1264, iParam2, Global_90014.f_1265, bVar1, &(Global_90014.f_1259), MISC::GET_HASH_KEY(GlobalFunc_1988(iParam0)), Global_90014.f_1264, Global_90014.f_1266, bVar2);
						}
						else if ((((iParam2 == 1 || iParam2 == 2) || iParam2 == 8) || iParam2 == 16) || iParam2 == 15)
						{
							MONEY::NETWORK_BUY_ITEM(Global_90014.f_1263, Global_90014.f_1264, iParam2, Global_90014.f_1265, bVar1, &(Global_90014.f_1259), MISC::GET_HASH_KEY(GlobalFunc_1988(iParam0)), Global_90014.f_1264, Global_90014.f_1266, bVar2);
						}
						else
						{
							MONEY::NETWORK_BUY_ITEM(Global_90014.f_1263, MISC::GET_HASH_KEY(&(Global_90014.f_1259)), iParam2, Global_90014.f_1265, bVar1, &(Global_90014.f_1259), MISC::GET_HASH_KEY(GlobalFunc_1988(iParam0)), Global_90014.f_1264, Global_90014.f_1266, bVar2);
						}
					}
				}
			}
			else if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_90014.f_1259)))
			{
				if (((iParam2 == 0 || iParam2 == 7) || iParam2 == 9) || iParam2 == 11)
				{
					if (Global_90014.f_1263 >= 0)
					{
						STATS::PLAYSTATS_SHOP_ITEM(MISC::GET_HASH_KEY(&(Global_90014.f_1259)), Global_90014.f_1263, MISC::GET_HASH_KEY(GlobalFunc_1988(iParam0)), Global_90014.f_1264, Global_90014.f_1266);
					}
				}
				else if ((((iParam2 == 1 || iParam2 == 2) || iParam2 == 8) || iParam2 == 16) || iParam2 == 15)
				{
					if (Global_90014.f_1263 >= 0)
					{
						STATS::PLAYSTATS_SHOP_ITEM(MISC::GET_HASH_KEY(&(Global_90014.f_1259)), Global_90014.f_1263, MISC::GET_HASH_KEY(GlobalFunc_1988(iParam0)), Global_90014.f_1264, Global_90014.f_1266);
					}
				}
				else if (Global_90014.f_1263 >= 0)
				{
					STATS::PLAYSTATS_SHOP_ITEM(MISC::GET_HASH_KEY(&(Global_90014.f_1259)), Global_90014.f_1263, MISC::GET_HASH_KEY(GlobalFunc_1988(iParam0)), 0, Global_90014.f_1266);
				}
			}
		}
	}
	else if (GlobalFunc_7782(iParam0, 3, 0))
	{
		GlobalFunc_7833(iParam0, 3, 0);
	}
}











int func_601()//Position - 0x58215
{
	if (Local_168.f_103.f_25)
	{
		switch (Local_168.f_103.f_26)
		{
			case 0:
				if (GlobalFunc_6940())
				{
					Local_168.f_103.f_26 = 70;
				}
				else
				{
					Local_168.f_103.f_26 = 90;
				}
				break;
			
			case 70:
				if (GlobalFunc_1363(GlobalFunc_5422()))
				{
					if (GlobalFunc_1362(GlobalFunc_5422()) == 2)
					{
						Local_168.f_103.f_26 = 80;
					}
					else
					{
						Local_168.f_103.f_26 = 90;
					}
				}
				break;
			
			case 80:
				Local_168.f_103.f_25 = 0;
				Local_168.f_103.f_26 = 0;
				break;
			
			case 90:
				GlobalFunc_5069(GlobalFunc_5422());
				Local_168.f_103.f_25 = 0;
				Local_168.f_103.f_26 = 0;
				Local_168.f_103.f_21 = 0;
				return 0;
				break;
			}
	}
	return 1;
}













int func_614(int iParam0, int iParam1)//Position - 0x58CF7
{
	if (iParam1 <= 0)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else if (iParam0 == joaat("weapon_sniperrifle") && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("trevor2")) != 0)
	{
		return 1;
	}
	return 0;
}

int func_615(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x58D33
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
	iVar0 = 0;
	while (iVar0 < 16)
	{
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (func_84(Local_168, &Global_2543149, iParam0, iVar0, iVar1, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_168.f_218[iVar2]))
				{
					if (ENTITY::IS_ENTITY_VISIBLE(Local_168.f_218[iVar2]))
					{
						if (ENTITY::GET_ENTITY_MODEL(Local_168.f_218[iVar2]) == WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_nightstick")) && (iVar0 != uParam3->f_3 || iVar1 != uParam3->f_1))
						{
							Var3 = { 0.21f, 0f, 0.22f };
							if ((func_616(Local_168.f_218[iVar2], 0f, 0f, 0f) || func_616(Local_168.f_218[iVar2], Var3 * Vector(1f, 1f, 1f))) || func_616(Local_168.f_218[iVar2], Var3 * Vector(2f, 2f, 2f)))
							{
								*iParam1 = iVar0;
								*iParam2 = iVar1;
								return 1;
							}
						}
						else if (func_616(Local_168.f_218[iVar2], 0f, 0f, 0f))
						{
							*iParam1 = iVar0;
							*iParam2 = iVar1;
							return 1;
						}
					}
				}
			}
			iVar2++;
			iVar1++;
		}
		iVar0++;
	}
	return 0;
}

int func_616(int iParam0, struct<3> Param1)//Position - 0x58E4F
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6[4];
	struct<3> Var19[4];
	var uVar32;
	struct<3> Var84;
	var uVar87;
	var uVar88;
	
	uVar32 = 15;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var0, &Var3);
	Var0 = { Var0 + Param1 };
	Var3 = { Var3 + Param1 };
	Var6[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var0.x, 0f, Var0.f_2) };
	Var6[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var0.x, 0f, Var3.f_2) };
	Var6[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var3.x, 0f, Var3.f_2) };
	Var6[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var3.x, 0f, Var0.f_2) };
	if (!GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var6[0 /*3*/], &(Var19[0 /*3*/]), &(Var19[0 /*3*/].f_1)) || !GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var6[1 /*3*/], &(Var19[1 /*3*/]), &(Var19[1 /*3*/].f_1)))
	{
		Var6[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 0f, Var0.f_2) };
		Var6[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 0f, Var3.f_2) };
		if (!GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var6[0 /*3*/], &(Var19[0 /*3*/]), &(Var19[0 /*3*/].f_1)) || !GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var6[1 /*3*/], &(Var19[1 /*3*/]), &(Var19[1 /*3*/].f_1)))
		{
			return 0;
		}
	}
	if (!GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var6[2 /*3*/], &(Var19[2 /*3*/]), &(Var19[2 /*3*/].f_1)) || !GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var6[3 /*3*/], &(Var19[3 /*3*/]), &(Var19[3 /*3*/].f_1)))
	{
		Var6[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 0f, Var3.f_2) };
		Var6[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 0f, Var0.f_2) };
		if (!GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var6[2 /*3*/], &(Var19[2 /*3*/]), &(Var19[2 /*3*/].f_1)) || !GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var6[3 /*3*/], &(Var19[3 /*3*/]), &(Var19[3 /*3*/].f_1)))
		{
			return 0;
		}
	}
	GlobalFunc_500(&uVar32);
	GlobalFunc_499(&uVar32, Var19[0 /*3*/]);
	GlobalFunc_499(&uVar32, Var19[1 /*3*/]);
	GlobalFunc_499(&uVar32, Var19[2 /*3*/]);
	GlobalFunc_499(&uVar32, Var19[3 /*3*/]);
	GlobalFunc_498(&uVar32);
	if (GlobalFunc_496(&uVar32, Global_2543375, Global_2543376, 0f))
	{
		return 1;
	}
	else
	{
		Var84 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
		if (GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var84, &uVar87, &uVar88))
		{
			if (SYSTEM::VDIST(uVar87, uVar88, 0f, Global_2543375, Global_2543376, 0f) < 0.05f)
			{
				return 1;
			}
		}
	}
	return 0;
}









void func_625()//Position - 0x59612
{
	if (MISC::IS_PC_VERSION())
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			if (iLocal_20 == 1)
			{
				HUD::_SET_MOUSE_CURSOR_SPRITE(1);
				iLocal_20 = 0;
			}
		}
		else
		{
			iLocal_20 = 1;
		}
	}
}





void func_630(var uParam0)//Position - 0x59DF2
{
	if (!uParam0->f_11)
	{
		*uParam0 = { func_631() };
	}
	if (!CAM::DOES_CAM_EXIST(*uParam0))
	{
		*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
	}
	CAM::SET_CAM_COORD(*uParam0, uParam0->f_1);
	CAM::SET_CAM_ROT(*uParam0, uParam0->f_4, 2);
	CAM::SET_CAM_FOV(*uParam0, uParam0->f_7);
	if (!CAM::IS_CAM_ACTIVE(*uParam0))
	{
		CAM::SET_CAM_ACTIVE(*uParam0, 1);
	}
	CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
}

struct<12> func_631()//Position - 0x59E67
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18;
	float fVar21;
	struct<12> Var22;
	
	Var3 = { -10.583f, 0f, -19.206f };
	Var6 = { -4.33f, -1.21f, -0.75f };
	Var9 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	Var12 = { Var9 - ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 0f, 1f) };
	Var15 = { Var9 - ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 1f, 0f, 0f) };
	Var18 = { Var9 - ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 1f, 0f) };
	GlobalFunc_107(Var12);
	GlobalFunc_107(Var15);
	GlobalFunc_107(Var18);
	Var0.x = GlobalFunc_168(Var6, Var18);
	Var0.f_1 = GlobalFunc_168(Var6, Var15);
	Var0.f_2 = GlobalFunc_168(Var6, Var12);
	fVar21 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	fVar21 = (fVar21 + 180f);
	while (fVar21 > 180f)
	{
		fVar21 = (fVar21 - 360f);
	}
	Var22.f_4 = { Var3 + Vector(fVar21, 0f, 0f) };
	Var22.f_1 = { Var9 + Var0 };
	Var22.f_7 = 25f;
	return Var22;
}


void func_633(int iParam0, int iParam1, int iParam2)//Position - 0x59FA2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_634(&(iParam0->f_38[iParam1 /*12*/]), 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0);
	iVar0 = MISC::GET_HASH_KEY("v_gun");
	iVar1 = MISC::GET_HASH_KEY("v_gun2");
	iVar2 = MISC::GET_HASH_KEY(GlobalFunc_2464(*iParam0));
	if (iVar2 == iVar0)
	{
		switch (iParam2)
		{
			case 0:
				func_634(&(iParam0->f_38[iParam1 /*12*/]), 20.36131f, -1108.527f, 30.41068f, 0.566872f, 0f, 2.197579f, 34.66004f, 1);
				break;
			
			case 1:
				func_634(&(iParam0->f_38[iParam1 /*12*/]), 20.36131f, -1108.527f, 30.41068f, -2.634378f, 0f, 2.197579f, 34.66004f, 1);
				break;
			
			case 2:
				func_634(&(iParam0->f_38[iParam1 /*12*/]), 20.36131f, -1108.527f, 30.41068f, -1.074794f, 0f, -5.846583f, 34.66004f, 1);
				break;
			
			case 3:
				func_634(&(iParam0->f_38[iParam1 /*12*/]), 20.36131f, -1108.527f, 30.41068f, -0.828544f, 0f, -16.70481f, 34.66004f, 1);
				break;
			
			case 4:
				func_634(&(iParam0->f_38[iParam1 /*12*/]), 20.36131f, -1108.527f, 30.41068f, -0.828544f, 0f, -28.87151f, 34.66004f, 1);
				break;
			
			case 5:
				func_634(&(iParam0->f_38[iParam1 /*12*/]), 20.36131f, -1108.527f, 30.41068f, -0.828544f, 0f, -42.47814f, 34.66004f, 1);
				break;
			
			case 6:
				func_634(&(iParam0->f_38[iParam1 /*12*/]), 20.36131f, -1108.527f, 30.41068f, -0.828544f, 0f, -52.13707f, 34.66004f, 1);
				break;
			
			case 7:
				func_634(&(iParam0->f_38[iParam1 /*12*/]), 20.36131f, -1108.527f, 30.41068f, -4.603421f, 0f, -1.56577f, 34.66004f, 1);
				break;
			
			case 8:
				func_634(&(iParam0->f_38[iParam1 /*12*/]), 20.36131f, -1108.527f, 30.41068f, -4.603421f, 0f, -32.85397f, 34.66004f, 1);
				break;
			
			case 9:
				func_634(&(iParam0->f_38[iParam1 /*12*/]), 20.36131f, -1108.527f, 30.41068f, -8.769061f, -1E-06f, -71.69663f, 34.66004f, 1);
				break;
			
			case 10:
				func_634(&(iParam0->f_38[iParam1 /*12*/]), 20.36131f, -1108.527f, 30.41068f, -8.978215f, -1E-06f, -95.29707f, 34.66004f, 1);
				break;
			
			case 11:
				func_634(&(iParam0->f_38[iParam1 /*12*/]), 20.36131f, -1108.527f, 30.41068f, 0.436189f, 0f, -64.68348f, 34.66004f, 1);
				break;
			
			case 12:
				func_634(&(iParam0->f_38[iParam1 /*12*/]), 20.36131f, -1108.527f, 30.41068f, 1.380731f, 0f, -73.16987f, 34.66004f, 1);
				break;
			
			case 13:
				func_634(&(iParam0->f_38[iParam1 /*12*/]), 20.36131f, -1108.527f, 30.41068f, 2.167335f, 0f, -83.37527f, 34.66004f, 1);
				break;
			
			case 14:
				func_634(&(iParam0->f_38[iParam1 /*12*/]), 20.36131f, -1108.527f, 30.41068f, 2.465499f, 0f, -92.22768f, 34.66004f, 1);
				break;
			
			case 15:
				func_634(&(iParam0->f_38[iParam1 /*12*/]), 19.48048f, -1109.81f, 30.57601f, -5.691335f, 0f, 87.05898f, 35.47426f, 1);
				break;
		}
	}
	else if (iVar2 == iVar1)
	{
		switch (iParam2)
		{
			case 0:
				func_634(&(iParam0->f_38[iParam1 /*12*/]), 1694.177f, 3757.739f, 35.33628f, 2.523056f, 0f, 71.52591f, 34.57779f, 1);
				break;
			
			case 1:
				func_634(&(iParam0->f_38[iParam1 /*12*/]), 1694.177f, 3757.739f, 35.33628f, -0.509445f, 0f, 71.52591f, 34.57779f, 1);
				break;
			
			case 2:
				func_634(&(iParam0->f_38[iParam1 /*12*/]), 1694.177f, 3757.739f, 35.33628f, -0.509445f, 0f, 61.35044f, 34.57779f, 1);
				break;
			
			case 3:
				func_634(&(iParam0->f_38[iParam1 /*12*/]), 1694.177f, 3757.739f, 35.33628f, -0.509445f, 0f, 51.69053f, 34.57779f, 1);
				break;
			
			case 4:
				func_634(&(iParam0->f_38[iParam1 /*12*/]), 1694.177f, 3757.739f, 35.33628f, -0.509445f, 0f, 38.13562f, 34.57779f, 1);
				break;
			
			case 5:
				func_634(&(iParam0->f_38[iParam1 /*12*/]), 1694.177f, 3757.739f, 35.33628f, -0.509445f, 0f, 26.75984f, 34.57779f, 1);
				break;
			
			case 6:
				func_634(&(iParam0->f_38[iParam1 /*12*/]), 1694.177f, 3757.739f, 35.33628f, -0.509445f, 0f, 15.76364f, 34.57779f, 1);
				break;
			
			case 7:
				func_634(&(iParam0->f_38[iParam1 /*12*/]), 1694.177f, 3757.739f, 35.33628f, -6.234849f, 0f, 69.07542f, 34.57779f, 1);
				break;
			
			case 8:
				func_634(&(iParam0->f_38[iParam1 /*12*/]), 1694.177f, 3757.739f, 35.33628f, -8.694158f, 0f, 32.3488f, 34.57779f, 1);
				break;
			
			case 9:
				func_634(&(iParam0->f_38[iParam1 /*12*/]), 1694.177f, 3757.739f, 35.33628f, -8.694158f, 0f, -7.361619f, 34.57779f, 1);
				break;
			
			case 10:
				func_634(&(iParam0->f_38[iParam1 /*12*/]), 1694.177f, 3757.739f, 35.33628f, -8.975378f, 0f, -27.66626f, 34.57779f, 1);
				break;
			
			case 11:
				func_634(&(iParam0->f_38[iParam1 /*12*/]), 1694.177f, 3757.74f, 35.33629f, 0.797561f, 0f, 1.527526f, 34.57778f, 1);
				break;
			
			case 12:
				func_634(&(iParam0->f_38[iParam1 /*12*/]), 1694.177f, 3757.74f, 35.33629f, 0.797561f, 0f, -5.563872f, 34.57778f, 1);
				break;
			
			case 13:
				func_634(&(iParam0->f_38[iParam1 /*12*/]), 1694.177f, 3757.74f, 35.33629f, 0.797561f, 0f, -17.42436f, 34.57778f, 1);
				break;
			
			case 14:
				func_634(&(iParam0->f_38[iParam1 /*12*/]), 1694.177f, 3757.74f, 35.33629f, 0.797561f, 0f, -25.75269f, 34.57778f, 1);
				break;
			
			case 15:
				func_634(&(iParam0->f_38[iParam1 /*12*/]), 1695.161f, 3756.454f, 35.4219f, -4.419658f, 0f, 153.8496f, 35.08089f, 1);
				break;
			}
	}
	if (iVar2 == iVar0)
	{
		iVar3 = 28;
	}
	else if (iVar2 == iVar1)
	{
		iVar3 = 29;
	}
	GlobalFunc_7133(iVar3, *iParam0, &(iParam0->f_38[iParam1 /*12*/].f_1));
	GlobalFunc_7132(iVar3, *iParam0, &(iParam0->f_38[iParam1 /*12*/].f_4));
}

void func_634(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, int iParam8)//Position - 0x5A6E3
{
	uParam0->f_1 = { Param1 };
	uParam0->f_4 = { Param4 };
	uParam0->f_7 = fParam7;
	uParam0->f_11 = iParam8;
}

void func_635(int iParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x5A70B
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	float fVar16;
	float fVar17;
	struct<3> Var18;
	float fVar21;
	float fVar22;
	
	fVar0 = 0.2f;
	if (bParam3)
	{
		fVar0 = 1f;
	}
	if (*iParam2 != 0)
	{
		func_633(iParam0, uParam1->f_4, uParam1->f_3);
		Var1 = { 0f, 0f, 0f };
		if (func_637(*iParam0) == 28)
		{
			if (bParam3)
			{
				if (*iParam2 == joaat("weapon_petrolcan"))
				{
					Var1 = { 0f, 0f, -0.25f };
				}
			}
			else if (*iParam2 == joaat("weapon_pistol"))
			{
				Var1 = { 5f, 0f, 0f };
			}
			else if (*iParam2 == joaat("weapon_combatpistol"))
			{
				Var1 = { 1.255f, 0f, 0f };
			}
			else if (*iParam2 == joaat("weapon_appistol"))
			{
				Var1 = { 0.5f, 0f, 0f };
			}
			else if (*iParam2 == joaat("weapon_nightstick"))
			{
				Var1 = { 1.955f, 0f, 0f };
			}
			else if (*iParam2 == joaat("weapon_stickybomb"))
			{
				Var1 = { 0f, -2.25f, 0f };
			}
			else if (*iParam2 == joaat("weapon_smokegrenade"))
			{
				Var1 = { 0f, -2f, 0f };
			}
			else if ((((*iParam2 == joaat("weapon_smg") || *iParam2 == joaat("weapon_assaultshotgun")) || *iParam2 == joaat("weapon_advancedrifle")) || *iParam2 == joaat("weapon_heavysniper")) || *iParam2 == joaat("weapon_combatmg"))
			{
				Var1 = { 0f, 0f, -0.5f };
			}
			else if (iParam2->f_24 == 7 && uParam1->f_1 == 3)
			{
				Var1 = { 0f, 0f, -1f };
			}
			else if (iParam2->f_24 == 7 && uParam1->f_1 == 2)
			{
				Var1 = { 0f, 0f, -0.5f };
			}
		}
		else if (bParam3)
		{
			if (*iParam2 == joaat("weapon_petrolcan"))
			{
				Var1 = { 0f, 0f, -0.25f };
			}
		}
		else if (*iParam2 == joaat("weapon_pistol"))
		{
			Var1 = { 2.575f, 0f, 0f };
		}
		else if (*iParam2 == joaat("weapon_combatpistol"))
		{
			Var1 = { 1f, 0f, 0f };
		}
		else if (*iParam2 == joaat("weapon_appistol"))
		{
			Var1 = { 0.5f, 0f, 0f };
		}
		else if (*iParam2 == joaat("weapon_stungun"))
		{
			Var1 = { 0f, -1.72f, 0f };
		}
		else if (*iParam2 == joaat("weapon_nightstick"))
		{
			Var1 = { 1.955f, 0f, 0f };
		}
		else if (*iParam2 == joaat("weapon_stickybomb"))
		{
			Var1 = { 0f, -2.25f, 0f };
		}
		else if (*iParam2 == joaat("weapon_smokegrenade"))
		{
			Var1 = { 0f, -2f, 0f };
		}
		else if ((((*iParam2 == joaat("weapon_smg") || *iParam2 == joaat("weapon_assaultshotgun")) || *iParam2 == joaat("weapon_advancedrifle")) || *iParam2 == joaat("weapon_heavysniper")) || *iParam2 == joaat("weapon_combatmg"))
		{
			Var1 = { 0f, 0f, -0.5f };
		}
		else if (iParam2->f_24 == 7 && uParam1->f_1 == 3)
		{
			Var1 = { 0f, 0f, -1f };
		}
		else if (iParam2->f_24 == 7 && uParam1->f_1 == 2)
		{
			Var1 = { 0f, 0f, -0.5f };
		}
		Var4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(iParam2->f_1, iParam2->f_4.f_2, iParam2->f_7 + Var1) };
		Var7 = { iParam0->f_38[uParam1->f_4 /*12*/].f_1 };
		Var10 = { Var4 - Var7 };
		Var13 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var7, iParam0->f_38[uParam1->f_4 /*12*/].f_4.f_2, 0f, 1f, 0f) - Var7 };
		fVar16 = MISC::ATAN2(Var10.f_2, SYSTEM::VMAG(Var10.x, Var10.f_1, 0f));
		Var10 = { GlobalFunc_107(Var10) };
		Var13 = { GlobalFunc_107(Var13) };
		fVar17 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var13.x, Var13.f_1, Var10.x, Var10.f_1);
		Var18 = { GlobalFunc_277(Var13, Var10) };
		if (Var18.f_2 > 0f)
		{
			fVar17 = MISC::ABSF(fVar17);
		}
		else
		{
			fVar17 = (MISC::ABSF(fVar17) * -1f);
		}
		fVar21 = ((fVar16 - iParam0->f_38[uParam1->f_4 /*12*/].f_4) * fVar0);
		fVar22 = (fVar17 * fVar0);
		iParam0->f_38[uParam1->f_4 /*12*/].f_4 = (iParam0->f_38[uParam1->f_4 /*12*/].f_4 + fVar21);
		iParam0->f_38[uParam1->f_4 /*12*/].f_4.f_2 = (iParam0->f_38[uParam1->f_4 /*12*/].f_4.f_2 + fVar22);
	}
}


int func_637(int iParam0)//Position - 0x5AB47
{
	if (iParam0 == 28)
	{
		return 28;
	}
	return 29;
}

void func_638()//Position - 0x5AB60
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;
	struct<4> Var8;
	char[] cVar12[8];
	struct<26> Var16;
	struct<4> Var42;
	int iVar49;
	int iVar50;
	char cVar51[64];
	int iVar67;
	int iVar68;
	float fVar69;
	int iVar70;
	int iVar71;
	float fVar72;
	int iVar73;
	int iVar74;
	float fVar75;
	var uVar76;
	float fVar77;
	
	GlobalFunc_262(0);
	GlobalFunc_7023(Local_168);
	GlobalFunc_1317(1, 1, 0, 0, 0);
	GlobalFunc_1316(1, 2, 1, 1, 1);
	func_84(Local_168, &Global_2543149, &Var16, Local_168.f_103.f_3, Local_168.f_103.f_1, 1);
	func_320(Local_168, &Var42, Local_168.f_103.f_3);
	if (Local_168.f_103.f_5 == 0)
	{
		func_282(&Global_2543149, Local_168.f_103.f_3, Local_168.f_103.f_1, &Var8, &cVar12);
		func_432(Var8, Var16.f_19, Var16, 1, 0);
		if (Local_168.f_103.f_1 == -1)
		{
			GlobalFunc_1318(&(Var42.f_3));
			GlobalFunc_7830(0, "GS_NONE", 0, 1, 0, 0);
			GlobalFunc_1588(Local_168.f_103.f_2, 1, 1);
			if (Global_68245)
			{
				Var4 = { Var42.f_3 };
				StringConCat(&Var4, "_MP", 16);
				GlobalFunc_1353(&Var4, 0, 0);
			}
			GlobalFunc_1354(202, "ITEM_BACK", -1);
			if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
			{
				GlobalFunc_261(204, "ITEM_PSSTORE", -1);
			}
			else if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
			{
				GlobalFunc_261(204, "ITEM_MARKET", -1);
			}
			else if (MISC::IS_PC_VERSION())
			{
				GlobalFunc_1354(204, "ITEM_STORE", -1);
			}
			if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
			{
				bLocal_1074 = true;
			}
			if (func_237())
			{
				bLocal_1076 = true;
			}
			GlobalFunc_260(6, "ITEM_MOVE", -1);
		}
		else
		{
			if (Var16.f_24 == 3)
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					GlobalFunc_1318("GS_TITLE_2b");
					iVar49 = 0;
					if (func_302(238))
					{
						iVar49++;
					}
					if (func_302(239))
					{
						iVar49++;
					}
					if (func_302(240))
					{
						iVar49++;
					}
					if (func_302(241))
					{
						iVar49++;
					}
					if (func_302(242))
					{
						iVar49++;
					}
					if (func_302(243))
					{
						iVar49++;
					}
					if (func_302(244))
					{
						iVar49++;
					}
					if (func_302(245))
					{
						iVar49++;
					}
					if (func_302(246))
					{
						iVar49++;
					}
					if (func_302(247))
					{
						iVar49++;
					}
					iVar50 = 0;
					iVar50 = (iVar50 + GlobalFunc_6872(1865, -1, 0));
					iVar50 = (iVar50 + GlobalFunc_6872(1866, -1, 0));
					iVar50 = (iVar50 + GlobalFunc_6872(1867, -1, 0));
					iVar50 = (iVar50 + GlobalFunc_6872(1868, -1, 0));
					iVar50 = (iVar50 + GlobalFunc_6872(1869, -1, 0));
					func_664(iVar50);
					func_664(iVar49);
				}
				else
				{
					GlobalFunc_1318("GS_TITLE_2a");
				}
			}
			else
			{
				GlobalFunc_1318("GS_TITLE_0");
			}
			if (Var16.f_24 == 7)
			{
				if (func_83(&Global_2543149, Var16.f_23) == joaat("prop_ld_test_01") || func_83(&Global_2543149, Var16.f_23) == 0)
				{
					GlobalFunc_7830(Local_168.f_103.f_1, "GS_NONE", 0, 1, 0, 0);
					GlobalFunc_7830(Local_168.f_103.f_1, "", 0, 1, 0, 0);
				}
				else
				{
					GlobalFunc_7830(Local_168.f_103.f_1, "STRING", 1, 1, 0, 0);
					GlobalFunc_8455(NETWORK::GET_COMMERCE_ITEM_NAME(Global_2543149.f_26[Var16.f_23]), 0, 0);
					GlobalFunc_7830(Local_168.f_103.f_1, "STRING", 1, 1, 0, 0);
					GlobalFunc_8455(NETWORK::GET_COMMERCE_PRODUCT_PRICE(Global_2543149.f_26[Var16.f_23]), 0, 0);
					if (func_695())
					{
						StringCopy(&cVar51, NETWORK::GET_COMMERCE_ITEM_TEXTURENAME(Global_2543149.f_26[Var16.f_23]), 64);
						GlobalFunc_1544(30, &cVar51, &cVar51);
						GlobalFunc_7830(Local_168.f_103.f_1 + 1, "", 1, 1, 0, 0);
						GlobalFunc_8447(30, 1);
					}
				}
			}
			else if (!MISC::IS_BIT_SET(Local_168.f_645, 7))
			{
				GlobalFunc_7830(Local_168.f_103.f_1, &Var8, 0, 1, 0, 0);
				GlobalFunc_7830(Local_168.f_103.f_1, "", 1, 1, 0, 0);
				GlobalFunc_8447(15, 0);
			}
			else if (!MISC::IS_BIT_SET(Local_168.f_645, 0) || MISC::IS_BIT_SET(Local_168.f_645, 13))
			{
				if (Var16.f_24 == 3 && Global_68245)
				{
					if (Local_168.f_103.f_1 == 0)
					{
						iVar3 = 156;
					}
					else if (Local_168.f_103.f_1 == 1)
					{
						iVar3 = 157;
					}
					else if (Local_168.f_103.f_1 == 2)
					{
						iVar3 = 158;
					}
					else if (Local_168.f_103.f_1 == 3)
					{
						iVar3 = 159;
					}
					else if (Local_168.f_103.f_1 == 4)
					{
						iVar3 = 160;
					}
					if (func_295(GlobalFunc_8354(), iVar3))
					{
						GlobalFunc_7830(Local_168.f_103.f_1, &Var8, 1, 1, 0, 0);
						GlobalFunc_8447(2, 0);
					}
					else
					{
						GlobalFunc_7830(Local_168.f_103.f_1, &Var8, 0, 1, 0, 0);
					}
				}
				else if (func_657(GlobalFunc_8354(), Var16))
				{
					GlobalFunc_7830(Local_168.f_103.f_1, &Var8, 1, 1, 0, 0);
					GlobalFunc_8447(2, 0);
					func_648(GlobalFunc_8354(), Var16);
					func_284(&(Local_168.f_103), "GSM_UNLOCK_N", 3000);
				}
				else
				{
					GlobalFunc_7830(Local_168.f_103.f_1, &Var8, 0, 1, 0, 0);
				}
				if (func_614(Var16, Var16.f_19))
				{
					GlobalFunc_7830(Local_168.f_103.f_1, "GS_FREE", 0, 1, 0, 0);
				}
				else
				{
					GlobalFunc_7830(Local_168.f_103.f_1, "GS_COST", 1, 1, 0, 0);
					GlobalFunc_8495(Var16.f_19, 0);
				}
				iVar67 = 0;
				iVar68 = 0;
				fVar69 = (1f - func_94(Var16, &iVar67, &iVar68));
				if (fVar69 != 0f)
				{
					GlobalFunc_2588("GSHOP_DISC", 0, 0);
					func_298(SYSTEM::ROUND((fVar69 * 100f)));
				}
			}
			else if (Var16.f_24 == 2)
			{
				GlobalFunc_7830(Local_168.f_103.f_1, &Var8, 0, 1, 0, 0);
				GlobalFunc_7830(Local_168.f_103.f_1, "GS_FULL", 0, 1, 0, 0);
			}
			else if (Var16.f_24 == 3)
			{
				GlobalFunc_7830(Local_168.f_103.f_1, &Var8, 0, 1, 0, 0);
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					GlobalFunc_7830(Local_168.f_103.f_1, "GS_FULL", 0, 1, 0, 0);
				}
				else
				{
					GlobalFunc_7830(Local_168.f_103.f_1, "", 1, 1, 0, 0);
					GlobalFunc_8447(18, 0);
				}
			}
			else if (Var16.f_24 == 4)
			{
				GlobalFunc_7830(Local_168.f_103.f_1, &Var8, 0, 1, 0, 0);
				GlobalFunc_7830(Local_168.f_103.f_1, "", 1, 1, 0, 0);
				GlobalFunc_8447(4, 0);
			}
			else if (Var16.f_24 == 6)
			{
				GlobalFunc_7830(Local_168.f_103.f_1, &Var8, 0, 1, 0, 0);
				GlobalFunc_7830(Local_168.f_103.f_1, "", 1, 1, 0, 0);
				GlobalFunc_8447(4, 0);
			}
			else
			{
				GlobalFunc_7830(Local_168.f_103.f_1, &Var8, 0, 1, 0, 0);
				GlobalFunc_7830(Local_168.f_103.f_1, "", 1, 1, 0, 0);
				GlobalFunc_8447(10, 0);
			}
			GlobalFunc_1588(Local_168.f_103.f_1, 1, 1);
			if (MISC::IS_BIT_SET(Local_168.f_645, 0))
			{
				if ((MISC::IS_BIT_SET(Local_168.f_645, 4) || MISC::IS_BIT_SET(Local_168.f_645, 3)) || MISC::IS_BIT_SET(Local_168.f_645, 5))
				{
					GlobalFunc_1354(201, "ITEM_VIEW_COMP", -1);
				}
				else
				{
					GlobalFunc_1354(201, "ITEM_SELECT", -1);
				}
			}
			else
			{
				GlobalFunc_1354(201, "ITEM_BUY", -1);
			}
			GlobalFunc_1354(202, "ITEM_BACK", -1);
			if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
			{
				GlobalFunc_261(204, "ITEM_PSSTORE", -1);
			}
			else if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
			{
				GlobalFunc_261(204, "ITEM_MARKET", -1);
			}
			else if (MISC::IS_PC_VERSION())
			{
				GlobalFunc_1354(204, "ITEM_STORE", -1);
			}
			if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
			{
				bLocal_1074 = true;
			}
			if (func_237())
			{
				bLocal_1076 = true;
			}
			GlobalFunc_260(6, "ITEM_MOVE", -1);
			GlobalFunc_260(21, "ITEM_INSPECT", -1);
		}
	}
	else if (Local_168.f_103.f_5 == 1)
	{
		if (bLocal_1203)
		{
			GlobalFunc_1318("GS_TITLE_1");
			func_646(GlobalFunc_5379(Var16, 1));
			if (func_645(0))
			{
				GlobalFunc_7830(0, "GS_BUY_P0", 1, 1, 0, 0);
				GlobalFunc_8447(2, 0);
			}
			else
			{
				GlobalFunc_7830(0, "GS_BUY_P0", 0, 1, 0, 0);
			}
			if (func_645(1))
			{
				GlobalFunc_7830(1, "GS_BUY_P1", 1, 1, 0, 0);
				GlobalFunc_8447(2, 0);
			}
			else
			{
				GlobalFunc_7830(1, "GS_BUY_P1", 0, 1, 0, 0);
			}
			if (func_645(2))
			{
				GlobalFunc_7830(2, "GS_BUY_P2", 1, 1, 0, 0);
				GlobalFunc_8447(2, 0);
			}
			else
			{
				GlobalFunc_7830(2, "GS_BUY_P2", 0, 1, 0, 0);
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (func_645(3))
				{
					GlobalFunc_7830(3, "GS_BUY_P3", 1, 1, 0, 0);
					GlobalFunc_8447(2, 0);
				}
				else
				{
					GlobalFunc_7830(3, "GS_BUY_P3", 0, 1, 0, 0);
				}
			}
			GlobalFunc_1588(iLocal_1204, 1, 1);
			GlobalFunc_1543(0);
			GlobalFunc_1354(201, "ITEM_SELECT", -1);
			GlobalFunc_1354(202, "ITEM_BACK", -1);
			GlobalFunc_260(21, "ITEM_INSPECT", -1);
		}
		else
		{
			if ((((Var16 == joaat("weapon_carbinerifle") || Var16 == joaat("weapon_appistol")) || Var16 == joaat("weapon_specialcarbine")) || Var16 == joaat("weapon_snspistol")) && LOCALIZATION::GET_CURRENT_LANGUAGE() == 7)
			{
				GlobalFunc_1318("GS_TITLE_2");
			}
			else if (Var16 == -61829581)
			{
				GlobalFunc_1318("FW_WEAP_U");
				iVar70 = 0;
				iVar70 = (iVar70 + GlobalFunc_6872(2782, -1, 0));
				iVar70 = (iVar70 + GlobalFunc_6872(2781, -1, 0));
				iVar70 = (iVar70 + GlobalFunc_6872(2783, -1, 0));
				iVar70 = (iVar70 + GlobalFunc_6872(2785, -1, 0));
				iVar70 = (iVar70 + GlobalFunc_6872(2784, -1, 0));
				iVar70 = (iVar70 + GlobalFunc_6872(2786, -1, 0));
				iVar70 = (iVar70 + GlobalFunc_6872(2788, -1, 0));
				iVar70 = (iVar70 + GlobalFunc_6872(2787, -1, 0));
				iVar70 = (iVar70 + GlobalFunc_6872(2789, -1, 0));
				iVar70 = (iVar70 + GlobalFunc_6872(2791, -1, 0));
				iVar70 = (iVar70 + GlobalFunc_6872(2790, -1, 0));
				iVar70 = (iVar70 + GlobalFunc_6872(2792, -1, 0));
				func_664(iVar70);
				func_664(Global_262145.f_6115);
			}
			else
			{
				GlobalFunc_1318("GS_TITLE_1");
				func_646(GlobalFunc_5379(Var16, 1));
			}
			if (MISC::IS_BIT_SET(Local_168.f_645, 4))
			{
				iVar71 = Var16.f_22;
				if (Var16.f_24 == 0 && Var16 != joaat("weapon_railgun"))
				{
					iVar71 *= 2;
				}
				if (GlobalFunc_218())
				{
					if (Var16.f_21)
					{
						Var16.f_20 = (Var16.f_20 * iVar71);
					}
				}
				if (bLocal_1100)
				{
					fVar72 = GlobalFunc_3263(Var16, iVar71);
					GlobalFunc_7830(0, "GS_BUY_AF", 0, 1, 0, 0);
					if (Local_168.f_103.f_2 == 0)
					{
						StringCopy(&Var4, "GS_BUY_AF", 16);
						func_432(Var4, SYSTEM::ROUND((SYSTEM::TO_FLOAT(Var16.f_20) * fVar72)), Var16, SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar71) * fVar72)), 0);
					}
					if (func_643(Var16))
					{
						GlobalFunc_7830(0, "GS_FULL", 0, 1, 0, 0);
					}
					else if (Var16.f_20 == 0)
					{
						GlobalFunc_7830(0, "GS_FREE", 0, 1, 0, 0);
					}
					else
					{
						GlobalFunc_7830(0, "GS_COST", 1, 1, 0, 0);
						GlobalFunc_8495(SYSTEM::ROUND((SYSTEM::TO_FLOAT(Var16.f_20) * fVar72)), 0);
					}
				}
				else
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						func_454(Var16, &(Var16.f_20), &iVar71);
					}
					GlobalFunc_3257(Var16.f_25, iVar71, &Var4, 0);
					if (Local_168.f_103.f_2 == 0)
					{
						func_432(Var4, Var16.f_20, Var16, iVar71, 0);
					}
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (iVar71 <= 0 && (Var16 == joaat("weapon_grenadelauncher") || Var16 == joaat("weapon_rpg")))
						{
							GlobalFunc_7830(0, &Var4, 0, 1, 0, 0);
						}
						else
						{
							GlobalFunc_7830(0, "GS_BUY_A", 2, 1, 0, 0);
							GlobalFunc_8454(&Var4, 0);
							GlobalFunc_8495(iVar71, 0);
						}
					}
					else
					{
						GlobalFunc_7830(0, "GS_BUY_A", 2, 1, 0, 0);
						GlobalFunc_8454(&Var4, 0);
						GlobalFunc_8495(iVar71, 0);
					}
					if (func_643(Var16))
					{
						GlobalFunc_7830(0, "GS_FULL", 0, 1, 0, 0);
					}
					else if (Var16.f_20 == 0)
					{
						GlobalFunc_7830(0, "GS_FREE", 0, 1, 0, 0);
					}
					else
					{
						GlobalFunc_7830(0, "GS_COST", 1, 1, 0, 0);
						GlobalFunc_8495(Var16.f_20, 0);
					}
				}
			}
			if (MISC::IS_BIT_SET(Local_168.f_645, 3))
			{
				iVar0 = -1;
				while (func_457(Var16, &iVar0))
				{
					if (func_164(&Local_1216, Var16, iVar0, 1))
					{
						func_279(Var16, iVar0, &Var8, &cVar12);
						if (Local_168.f_103.f_2 == (1 + iVar0))
						{
							func_432(Var8, Local_1216.f_2, Var16, 1, 0);
						}
						bVar2 = false;
						if (Global_68245)
						{
							if (GlobalFunc_8831(Local_1216, Var16, -1) || Local_1216.f_1)
							{
								bVar2 = true;
							}
						}
						else if (func_270(GlobalFunc_8354(), Var16, Local_1216) || Local_1216.f_1)
						{
							bVar2 = true;
						}
						if (!func_639(Local_1216, Var16) && !Local_1216.f_1)
						{
							GlobalFunc_7830((1 + iVar0), &Var8, 0, 1, 0, 0);
							GlobalFunc_7830((1 + iVar0), "", 1, 1, 0, 0);
							GlobalFunc_8447(15, 0);
						}
						else if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), Var16, Local_1216))
						{
							GlobalFunc_7830((1 + iVar0), &Var8, 0, 1, 0, 0);
							GlobalFunc_7830((1 + iVar0), "", 1, 1, 0, 0);
							GlobalFunc_8447(10, 0);
						}
						else if (bVar2)
						{
							GlobalFunc_7830((1 + iVar0), &Var8, 0, 1, 0, 0);
							GlobalFunc_7830((1 + iVar0), "", 1, 1, 0, 0);
							GlobalFunc_8447(4, 0);
						}
						else
						{
							if (func_479(GlobalFunc_8354(), Var16, Local_1216))
							{
								GlobalFunc_7830((1 + iVar0), &Var8, 1, 1, 0, 0);
								GlobalFunc_8447(2, 0);
								if ((1 + iVar0) == Local_168.f_103.f_2)
								{
									func_284(&(Local_168.f_103), "GSM_UNLOCK_N", 3000);
								}
							}
							else
							{
								GlobalFunc_7830((1 + iVar0), &Var8, 0, 1, 0, 0);
							}
							if (func_433(Var16, Local_1216, Local_1216.f_2))
							{
								GlobalFunc_7830((1 + iVar0), "", 1, 1, 0, 0);
								GlobalFunc_8447(4, 0);
							}
							else
							{
								GlobalFunc_7830((1 + iVar0), "GS_COST", 1, 1, 0, 0);
								GlobalFunc_8495(Local_1216.f_2, 0);
							}
							iVar73 = 0;
							iVar74 = 0;
							fVar75 = (1f - func_94(Var16, &iVar73, &iVar74));
							if (fVar75 != 0f)
							{
								GlobalFunc_2588("GSHOP_DISC", 0, 0);
								func_298(SYSTEM::ROUND((fVar75 * 100f)));
							}
						}
					}
				}
			}
			if (MISC::IS_BIT_SET(Local_168.f_645, 5))
			{
				iVar1 = 0;
				while (iVar1 < func_337(Var16, 1))
				{
					if (func_305(&Local_1222, Var16, func_307(Var16, iVar1), 1) && func_314(Var16, Local_1222.f_9, Local_1222.f_10))
					{
						if (Local_168.f_103.f_2 == (21 + iVar1))
						{
							func_432(Local_1222, Local_1222.f_8, Var16, 1, 0);
							iLocal_1206 = Local_1222.f_9;
						}
						bVar2 = false;
						if (Global_68245)
						{
							if (Var16 == -61829581)
							{
							}
							else
							{
								iVar3 = func_259(Var16, Local_1222.f_9, Local_1222.f_10);
								if (iVar3 != 0)
								{
									if (GlobalFunc_8847(iVar3, -1))
									{
										bVar2 = true;
									}
								}
								else
								{
									bVar2 = true;
								}
							}
						}
						else if (Var16 == -61829581)
						{
						}
						else
						{
							iVar3 = func_259(Var16, Local_1222.f_9, Local_1222.f_10);
							if (iVar3 != 0)
							{
								if (func_242(GlobalFunc_8354(), iVar3))
								{
									bVar2 = true;
								}
							}
							else
							{
								bVar2 = true;
							}
						}
						if (!func_263(Var16, Local_1222.f_9, Local_1222.f_10))
						{
							GlobalFunc_7830((21 + iVar1), &Local_1222, 0, 1, 0, 0);
							GlobalFunc_7830((21 + iVar1), "", 1, 1, 0, 0);
							GlobalFunc_8447(15, 0);
						}
						else if ((((((bVar2 && Local_1222.f_10 == 0) && iLocal_1026 != Local_1222.f_9) || ((bVar2 && Local_1222.f_10 == 2) && iLocal_1026 != Local_1222.f_9)) || ((bVar2 && Local_1222.f_10 == 3) && iLocal_1027 != Local_1222.f_9)) || ((bVar2 && Local_1222.f_10 == 1) && iLocal_1029 != Local_1222.f_9)) || ((bVar2 && Local_1222.f_10 == 4) && iLocal_1028 != Local_1222.f_9))
						{
							GlobalFunc_7830((21 + iVar1), &Local_1222, 0, 1, 0, 0);
							GlobalFunc_7830((21 + iVar1), "", 1, 1, 0, 0);
							GlobalFunc_8447(4, 0);
						}
						else if ((((((Local_1222.f_10 == 0 && iLocal_1026 != Local_1222.f_9) || (Local_1222.f_10 == 2 && iLocal_1026 != Local_1222.f_9)) || (Local_1222.f_10 == 3 && iLocal_1027 != Local_1222.f_9)) || (Local_1222.f_10 == 1 && iLocal_1029 != Local_1222.f_9)) || (Local_1222.f_10 == 4 && iLocal_1028 != Local_1222.f_9)) || Local_1222.f_10 == 5)
						{
							if (Var16 == -61829581)
							{
								GlobalFunc_7830((21 + iVar1), &Local_1222, 0, 1, 0, 0);
							}
							else
							{
								iVar3 = func_259(Var16, Local_1222.f_9, Local_1222.f_10);
								if (iVar3 != 0)
								{
									if (func_295(GlobalFunc_8354(), iVar3))
									{
										GlobalFunc_7830((21 + iVar1), &Local_1222, 1, 1, 0, 0);
										GlobalFunc_8447(2, 0);
										if ((21 + iVar1) == Local_168.f_103.f_2)
										{
											func_284(&(Local_168.f_103), "GSM_UNLOCK_N", 3000);
										}
									}
									else
									{
										GlobalFunc_7830((21 + iVar1), &Local_1222, 0, 1, 0, 0);
									}
								}
								else
								{
									GlobalFunc_7830((21 + iVar1), &Local_1222, 0, 1, 0, 0);
								}
							}
							if (Local_1222.f_8 == 0)
							{
								GlobalFunc_7830((21 + iVar1), "GS_FREE", 0, 1, 0, 0);
							}
							else
							{
								GlobalFunc_7830((21 + iVar1), "GS_COST", 1, 1, 0, 0);
								GlobalFunc_8495(Local_1222.f_8, 0);
							}
							uVar76 = Local_1222.f_8;
							fVar77 = (1f - func_238(Var16, &uVar76));
							if (fVar77 != 0f)
							{
								GlobalFunc_2588("GSHOP_DISC", 0, 0);
								func_298(SYSTEM::ROUND((fVar77 * 100f)));
							}
						}
						else
						{
							GlobalFunc_7830((21 + iVar1), &Local_1222, 0, 1, 0, 0);
							GlobalFunc_7830((21 + iVar1), "", 1, 1, 0, 0);
							GlobalFunc_8447(10, 0);
						}
					}
					iVar1++;
				}
			}
			GlobalFunc_1588(Local_168.f_103.f_2, 1, 1);
			GlobalFunc_1543(iLocal_1030);
			func_164(&Local_1216, Var16, (Local_168.f_103.f_2 - 1), 0);
			if (!MISC::IS_BIT_SET(Local_168.f_645, 0))
			{
				GlobalFunc_1354(201, "ITEM_BUY", -1);
			}
			else if (!MISC::IS_BIT_SET(Local_168.f_645, 6))
			{
				GlobalFunc_1354(201, "ITEM_SELECT", -1);
			}
			else if (MISC::IS_BIT_SET(Local_168.f_645, 12))
			{
				GlobalFunc_1354(201, "ITEM_REM", -1);
			}
			GlobalFunc_1354(202, "ITEM_BACK", -1);
			if (MISC::IS_BIT_SET(Local_168.f_645, 9))
			{
				GlobalFunc_1354(203, "ITEM_AMMO", -1);
			}
			GlobalFunc_260(21, "ITEM_INSPECT", -1);
		}
	}
}

int func_639(int iParam0, int iParam1)//Position - 0x5BCEA
{
	var uVar0;
	int iVar39;
	
	if (iParam0 != 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((((((iParam1 == -572349828 || iParam1 == 392730790) || iParam1 == joaat("weapon_bullpupshotgun")) || iParam1 == -947031628) || iParam1 == -344484024) || iParam1 == joaat("weapon_pistol50")) || iParam1 == -1887867191) || iParam1 == -837150131) || iParam1 == joaat("weapon_hammer"))
			{
				return 1;
			}
		}
		else if (((((((((iParam1 == -572349828 || iParam1 == joaat("weapon_assaultsmg")) || iParam1 == 392730790) || iParam1 == joaat("weapon_bullpupshotgun")) || iParam1 == -947031628) || iParam1 == -344484024) || iParam1 == joaat("weapon_pistol50")) || iParam1 == -1887867191) || iParam1 == -837150131) || iParam1 == joaat("weapon_hammer"))
		{
			return 1;
		}
		if (((((((((((iParam0 == joaat("component_advancedrifle_varmod_luxe") || iParam0 == joaat("component_appistol_varmod_luxe")) || iParam0 == joaat("component_assaultrifle_varmod_luxe")) || iParam0 == joaat("component_carbinerifle_varmod_luxe")) || iParam0 == joaat("component_heavypistol_varmod_luxe")) || iParam0 == joaat("component_marksmanrifle_varmod_luxe")) || iParam0 == joaat("component_microsmg_varmod_luxe")) || iParam0 == joaat("component_pistol_varmod_luxe")) || iParam0 == joaat("component_pistol50_varmod_luxe")) || iParam0 == joaat("component_sawnoffshotgun_varmod_luxe")) || iParam0 == joaat("component_smg_varmod_luxe")) || iParam0 == joaat("component_sniperrifle_varmod_luxe"))
		{
			return 1;
		}
		iVar39 = GlobalFunc_221(iParam1, &uVar0);
		if (iVar39 != -1)
		{
			return 1;
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (GlobalFunc_3() == 0)
			{
			}
			return func_483(iParam0, iParam1, -1);
		}
		else
		{
			return func_480(GlobalFunc_8354(), iParam1, iParam0);
		}
	}
	return 1;
}




int func_643(int iParam0)//Position - 0x5C4C4
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (GlobalFunc_5785(1))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0, 0))
		{
			if (WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), iParam0, &iVar0))
			{
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0) >= iVar0)
				{
					iVar1 = 1;
				}
			}
		}
	}
	return iVar1;
}


int func_645(int iParam0)//Position - 0x5C518
{
	int iVar0;
	int iVar1;
	
	iVar0 = 145;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = GlobalFunc_8354();
	}
	iVar1 = 0;
	while (iVar1 < func_337(joaat("gadget_parachute"), 1))
	{
		if (func_305(&Local_1222, joaat("gadget_parachute"), func_307(joaat("gadget_parachute"), iVar1), 0) && func_314(joaat("gadget_parachute"), Local_1222.f_9, Local_1222.f_10))
		{
			if ((((Local_1222.f_10 == 2 && iParam0 == 0) || (Local_1222.f_10 == 3 && iParam0 == 1)) || ((Local_1222.f_10 == 4 && iParam0 == 2) && Local_1222.f_9 != 0)) || (Local_1222.f_10 == 1 && iParam0 == 3))
			{
				if (func_295(iVar0, func_259(joaat("gadget_parachute"), Local_1222.f_9, Local_1222.f_10)))
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

void func_646(char* sParam0)//Position - 0x5C602
{
	if (Global_17236.f_71 >= 3 || Global_17236.f_68 >= 4)
	{
		return;
	}
	Global_17236.f_5[Global_17236.f_68] = 1;
	Global_17236.f_68++;
	StringCopy(&(Global_17236.f_22[Global_17236.f_71 /*4*/]), sParam0, 16);
	Global_17236.f_71++;
}


void func_648(int iParam0, int iParam1)//Position - 0x5C793
{
	if (!func_657(iParam0, iParam1))
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_652(iParam1, 1);
	}
	else
	{
		func_649(iParam0, iParam1, 1);
	}
}

void func_649(int iParam0, int iParam1, bool bParam2)//Position - 0x5C7C4
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (GlobalFunc_42(iParam0))
	{
		uVar0 = func_651(iParam0, iParam1);
		iVar1 = GlobalFunc_4977(iParam1);
		iVar2 = GlobalFunc_299(iVar1);
		if (bParam2)
		{
			MISC::SET_BIT(&uVar0, iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(&uVar0, iVar2);
		}
		func_650(iParam0, iParam1, uVar0);
	}
}

void func_650(int iParam0, int iParam1, int iParam2)//Position - 0x5C811
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_4977(iParam1);
	iVar1 = GlobalFunc_300(iVar0);
	switch (iVar1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_view_0"), uParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_view_0"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_view_0"), iParam2, 1);
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_view_1"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_view_1"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_view_1"), iParam2, 1);
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_view_2"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_view_2"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_view_2"), iParam2, 1);
					break;
			}
			break;
		
		default:
			break;
	}
}

var func_651(int iParam0, int iParam1)//Position - 0x5C929
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = GlobalFunc_4977(iParam1);
	iVar2 = GlobalFunc_300(iVar1);
	switch (iVar2)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_view_0"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_view_0"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_view_0"), &uVar0, -1);
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_view_1"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_view_1"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_view_1"), &uVar0, -1);
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("sp0_weap_view_2"), &uVar0, -1);
					break;
				
				case 1:
					STATS::STAT_GET_INT(joaat("sp1_weap_view_2"), &uVar0, -1);
					break;
				
				case 2:
					STATS::STAT_GET_INT(joaat("sp2_weap_view_2"), &uVar0, -1);
					break;
			}
			break;
		
		default:
			break;
	}
	return uVar0;
}

void func_652(int iParam0, bool bParam1)//Position - 0x5CA43
{
	if (bParam1)
	{
		if (!func_656(iParam0, -1))
		{
			func_653(iParam0, 1);
		}
	}
	else if (func_656(iParam0, -1))
	{
		func_653(iParam0, 0);
	}
}

void func_653(int iParam0, bool bParam1)//Position - 0x5CA76
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_655(iParam0, -1);
	iVar1 = GlobalFunc_4977(iParam0);
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&iVar0, GlobalFunc_299(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, GlobalFunc_299(iVar1));
		}
		GlobalFunc_6720(GlobalFunc_7456(iParam0), iVar0, -1, 1);
	}
}


var func_655(int iParam0, int iParam1)//Position - 0x5CB45
{
	var uVar0;
	
	uVar0 = GlobalFunc_6872(GlobalFunc_7456(iParam0), iParam1, 0);
	return uVar0;
}

bool func_656(int iParam0, int iParam1)//Position - 0x5CB5E
{
	var uVar0;
	int iVar1;
	
	if (GlobalFunc_1434())
	{
		return 0;
	}
	uVar0 = func_655(iParam0, iParam1);
	iVar1 = GlobalFunc_4977(iParam0);
	return MISC::IS_BIT_SET(uVar0, GlobalFunc_299(iVar1));
}

int func_657(int iParam0, int iParam1)//Position - 0x5CB8F
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_547(iParam1, -1, 0) && !func_656(iParam1, -1))
		{
			return 1;
		}
	}
	else if (GlobalFunc_8244(iParam0, iParam1) && !func_658(iParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_658(int iParam0, int iParam1)//Position - 0x5CBDB
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (GlobalFunc_42(iParam0))
	{
		uVar0 = func_651(iParam0, iParam1);
		iVar1 = GlobalFunc_4977(iParam1);
		iVar2 = GlobalFunc_299(iVar1);
		return MISC::IS_BIT_SET(uVar0, iVar2);
	}
	return 0;
}






void func_664(int iParam0)//Position - 0x5D013
{
	if (Global_17236.f_69 >= 3 || Global_17236.f_68 >= 4)
	{
		return;
	}
	Global_17236.f_5[Global_17236.f_68] = 2;
	Global_17236.f_68++;
	Global_17236.f_10[Global_17236.f_69] = iParam0;
	Global_17236.f_69++;
}













void func_677()//Position - 0x5DA84
{
	var uVar0;
	struct<26> Var1;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	
	Local_168.f_645 = 0;
	if (GlobalFunc_5785(1))
	{
		if (func_84(Local_168, &Global_2543149, &Var1, Local_168.f_103.f_3, Local_168.f_103.f_1, 1))
		{
			Local_1042 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var1.f_1, Var1.f_4.f_2, Var1.f_7) };
			Global_90014.f_1 = Var1;
			if (Global_90014.f_1 == -61829581)
			{
				Global_90014.f_1 = 0;
			}
			switch (Local_168.f_103.f_5)
			{
				case 0:
					if (Local_168.f_103.f_1 == -1)
					{
						return;
					}
					if ((((Var1.f_24 == 0 || Var1.f_24 == 1) || Var1.f_24 == 4) || Var1.f_24 == 2) || Var1.f_24 == 5)
					{
						if (func_680(Var1, Var1.f_24, Local_168.f_103.f_1))
						{
							MISC::SET_BIT(&(Local_168.f_645), 7);
						}
						if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), Var1, 0))
						{
							if (MISC::IS_BIT_SET(Local_168.f_645, 7))
							{
								if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
								{
								}
								else if (!func_679(GlobalFunc_8354(), Var1))
								{
									func_560(GlobalFunc_8354(), Var1, 1);
								}
							}
							if (Var1.f_24 == 2)
							{
								if (func_643(Var1))
								{
									MISC::SET_BIT(&(Local_168.f_645), 0);
								}
								else
								{
									MISC::SET_BIT(&(Local_168.f_645), 1);
								}
							}
							else if (Var1.f_24 == 5)
							{
								if (func_643(Var1))
								{
									MISC::SET_BIT(&(Local_168.f_645), 0);
								}
							}
							else
							{
								MISC::SET_BIT(&(Local_168.f_645), 0);
							}
							MISC::SET_BIT(&(Local_168.f_645), 6);
							if (Var1.f_25 != 0)
							{
								if (func_643(Var1))
								{
									MISC::SET_BIT(&(Local_168.f_645), 2);
								}
							}
						}
						if (func_317(Var1, &uVar0))
						{
							MISC::SET_BIT(&(Local_168.f_645), 3);
						}
						if (Var1.f_24 == 0 && Var1.f_25 != 0)
						{
							MISC::SET_BIT(&(Local_168.f_645), 4);
						}
						if (Var1.f_24 == 0)
						{
							if (func_337(Var1, 1) > 0)
							{
								MISC::SET_BIT(&(Local_168.f_645), 5);
							}
						}
						else if (Var1.f_24 == 4)
						{
							MISC::SET_BIT(&(Local_168.f_645), 5);
						}
					}
					else if (Var1.f_24 == 3)
					{
						if (func_680(Var1, Var1.f_24, Local_168.f_103.f_1))
						{
							MISC::SET_BIT(&(Local_168.f_645), 7);
						}
						if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							iVar27 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID())) / SYSTEM::TO_FLOAT(PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID()))) * 100f));
							if (Local_168.f_103.f_1 == 0)
							{
								if (iVar27 > 0 && PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID()) <= SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID())) / 100f) * 20f)))
								{
									MISC::SET_BIT(&(Local_168.f_645), 0);
								}
							}
							else if (Local_168.f_103.f_1 == 1)
							{
								if (iVar27 > 20 && PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID()) <= SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID())) / 100f) * 40f)))
								{
									MISC::SET_BIT(&(Local_168.f_645), 0);
								}
							}
							else if (Local_168.f_103.f_1 == 2)
							{
								if (iVar27 > 40 && PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID()) <= SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID())) / 100f) * 60f)))
								{
									MISC::SET_BIT(&(Local_168.f_645), 0);
								}
							}
							else if (Local_168.f_103.f_1 == 3)
							{
								if (iVar27 > 60 && PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID()) <= SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID())) / 100f) * 80f)))
								{
									MISC::SET_BIT(&(Local_168.f_645), 0);
								}
							}
							else if (Local_168.f_103.f_1 == 4)
							{
								if (iVar27 > 80 && PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID()) <= SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID())) / 100f) * 100f)))
								{
									MISC::SET_BIT(&(Local_168.f_645), 0);
								}
							}
						}
						else
						{
							if (PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID()) > 0)
							{
								MISC::SET_BIT(&(Local_168.f_645), 0);
							}
							iVar28 = 0;
							if (func_302(238))
							{
								iVar28++;
							}
							if (func_302(239))
							{
								iVar28++;
							}
							if (func_302(240))
							{
								iVar28++;
							}
							if (func_302(241))
							{
								iVar28++;
							}
							if (func_302(242))
							{
								iVar28++;
							}
							if (func_302(243))
							{
								iVar28++;
							}
							if (func_302(244))
							{
								iVar28++;
							}
							if (func_302(245))
							{
								iVar28++;
							}
							if (func_302(246))
							{
								iVar28++;
							}
							if (func_302(247))
							{
								iVar28++;
							}
							iVar29 = 0;
							iVar29 = (iVar29 + GlobalFunc_6872(1865, -1, 0));
							iVar29 = (iVar29 + GlobalFunc_6872(1866, -1, 0));
							iVar29 = (iVar29 + GlobalFunc_6872(1867, -1, 0));
							iVar29 = (iVar29 + GlobalFunc_6872(1868, -1, 0));
							iVar29 = (iVar29 + GlobalFunc_6872(1869, -1, 0));
							if (iVar29 < iVar28)
							{
								MISC::SET_BIT(&(Local_168.f_645), 13);
							}
						}
					}
					else if (Var1.f_24 == 6)
					{
						MISC::SET_BIT(&(Local_168.f_645), 7);
						MISC::SET_BIT(&(Local_168.f_645), 0);
						MISC::SET_BIT(&(Local_168.f_645), 5);
					}
					break;
				
				case 1:
					MISC::SET_BIT(&(Local_168.f_645), 7);
					if (func_317(Var1, &uVar0))
					{
						MISC::SET_BIT(&(Local_168.f_645), 3);
					}
					if (Var1.f_24 == 0 && Var1.f_25 != 0)
					{
						MISC::SET_BIT(&(Local_168.f_645), 4);
					}
					if (func_337(Var1, 1) > 0)
					{
						MISC::SET_BIT(&(Local_168.f_645), 5);
					}
					if (Local_168.f_103.f_2 == 0)
					{
						MISC::SET_BIT(&(Local_168.f_645), 9);
						if (func_643(Var1))
						{
							MISC::SET_BIT(&(Local_168.f_645), 2);
						}
					}
					else if (Local_168.f_103.f_2 >= 21)
					{
						MISC::SET_BIT(&(Local_168.f_645), 11);
						if (func_305(&Local_1222, Var1, func_307(Var1, (Local_168.f_103.f_2 - 21)), 1))
						{
							if (Local_1222.f_10 == 5)
							{
								iVar30 = 0;
								iVar30 = (iVar30 + GlobalFunc_6872(2782, -1, 0));
								iVar30 = (iVar30 + GlobalFunc_6872(2781, -1, 0));
								iVar30 = (iVar30 + GlobalFunc_6872(2783, -1, 0));
								iVar30 = (iVar30 + GlobalFunc_6872(2785, -1, 0));
								iVar30 = (iVar30 + GlobalFunc_6872(2784, -1, 0));
								iVar30 = (iVar30 + GlobalFunc_6872(2786, -1, 0));
								iVar30 = (iVar30 + GlobalFunc_6872(2788, -1, 0));
								iVar30 = (iVar30 + GlobalFunc_6872(2787, -1, 0));
								iVar30 = (iVar30 + GlobalFunc_6872(2789, -1, 0));
								iVar30 = (iVar30 + GlobalFunc_6872(2791, -1, 0));
								iVar30 = (iVar30 + GlobalFunc_6872(2790, -1, 0));
								iVar30 = (iVar30 + GlobalFunc_6872(2792, -1, 0));
								if (iVar30 >= Global_262145.f_6115)
								{
									MISC::SET_BIT(&(Local_168.f_645), 2);
								}
								MISC::SET_BIT(&(Local_168.f_645), 8);
							}
							else
							{
								if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
								{
									iVar31 = func_259(Var1, Local_1222.f_9, Local_1222.f_10);
									if (iVar31 != 0)
									{
										if (GlobalFunc_8847(iVar31, -1))
										{
											MISC::SET_BIT(&(Local_168.f_645), 0);
										}
									}
									else
									{
										MISC::SET_BIT(&(Local_168.f_645), 0);
									}
								}
								if (func_263(Var1, Local_1222.f_9, Local_1222.f_10))
								{
									MISC::SET_BIT(&(Local_168.f_645), 8);
								}
								if (Local_1222.f_10 == 0 || Local_1222.f_10 == 2)
								{
									if (Local_1222.f_9 == iLocal_1026)
									{
										MISC::SET_BIT(&(Local_168.f_645), 6);
										MISC::SET_BIT(&(Local_168.f_645), 0);
									}
								}
								else if (Local_1222.f_10 == 3)
								{
									if (Local_1222.f_9 == iLocal_1027)
									{
										MISC::SET_BIT(&(Local_168.f_645), 6);
										MISC::SET_BIT(&(Local_168.f_645), 0);
									}
								}
								else if (Local_1222.f_10 == 1)
								{
									if (Local_1222.f_9 == iLocal_1029)
									{
										MISC::SET_BIT(&(Local_168.f_645), 6);
										MISC::SET_BIT(&(Local_168.f_645), 0);
									}
								}
								else if (Local_1222.f_10 == 4)
								{
									if (Local_1222.f_9 == iLocal_1028)
									{
										MISC::SET_BIT(&(Local_168.f_645), 6);
										MISC::SET_BIT(&(Local_168.f_645), 0);
									}
								}
							}
						}
					}
					else if (func_164(&Local_1216, Var1, (Local_168.f_103.f_2 - 1), 1))
					{
						MISC::SET_BIT(&(Local_168.f_645), 10);
						if (func_639(Local_1216, Var1) || Local_1216.f_1)
						{
							MISC::SET_BIT(&(Local_168.f_645), 8);
						}
						if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), Var1, Local_1216))
						{
							MISC::SET_BIT(&(Local_168.f_645), 6);
							MISC::SET_BIT(&(Local_168.f_645), 0);
						}
						if (Global_68245)
						{
							if (GlobalFunc_8831(Local_1216, Var1, -1) || Local_1216.f_1)
							{
								MISC::SET_BIT(&(Local_168.f_645), 0);
							}
						}
						else if (func_270(GlobalFunc_8354(), Var1, Local_1216) || Local_1216.f_1)
						{
							MISC::SET_BIT(&(Local_168.f_645), 0);
						}
						if ((((Local_1216.f_1 || func_678(Var1, Local_1216.f_4) > 1) || (Local_1216.f_4 == joaat("WAPSupp") && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("lamar1")) > 0)) || (Local_1216.f_4 == 1170392792 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("lamar1")) > 0)) || (Local_1216.f_4 == joaat("WAPSupp") && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("trevor2")) > 0))
						{
						}
						else
						{
							MISC::SET_BIT(&(Local_168.f_645), 12);
						}
					}
					break;
				}
			}
	}
}

int func_678(int iParam0, int iParam1)//Position - 0x5E35F
{
	int iVar0;
	int iVar1;
	struct<5> Var2;
	
	iVar0 = 0;
	iVar1 = 0;
	while (func_164(&Var2, iParam0, iVar1, 0))
	{
		if (Var2.f_4 == iParam1)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_679(int iParam0, int iParam1)//Position - 0x5E395
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (GlobalFunc_42(iParam0))
	{
		uVar0 = func_562(iParam0, iParam1);
		iVar1 = GlobalFunc_4977(iParam1);
		iVar2 = GlobalFunc_299(iVar1);
		return MISC::IS_BIT_SET(uVar0, iVar2);
	}
	return 0;
}

int func_680(int iParam0, int iParam1, int iParam2)//Position - 0x5E3CC
{
	int iVar0;
	var uVar1;
	int iVar40;
	
	iVar0 = func_682(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	else if (iVar0 == 1)
	{
		return 1;
	}
	iVar40 = GlobalFunc_221(iParam0, &uVar1);
	if (iVar40 != -1)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (GlobalFunc_3() == 0)
		{
			if (iParam0 == joaat("weapon_stungun"))
			{
				return 0;
			}
			if (iParam1 == 3)
			{
				if (iParam2 == 0)
				{
					return func_302(156);
				}
				else if (iParam2 == 1)
				{
					return func_302(157);
				}
				else if (iParam2 == 2)
				{
					return func_302(158);
				}
				else if (iParam2 == 3)
				{
					return func_302(159);
				}
				else if (iParam2 == 4)
				{
					return func_302(160);
				}
				else
				{
					return 1;
				}
			}
			if (iParam1 == 4)
			{
				return func_302(1);
			}
			return func_547(iParam0, -1, 0);
		}
	}
	else
	{
		if (iParam0 == joaat("weapon_unarmed"))
		{
			if (iParam1 == 3)
			{
				return 1;
			}
		}
		if (GlobalFunc_8244(GlobalFunc_8354(), iParam0) && !func_681(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_681(int iParam0)//Position - 0x5E4D6
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_300(GlobalFunc_4977(iParam0));
	iVar1 = GlobalFunc_299(GlobalFunc_4977(iParam0));
	if (iVar0 > -1 && iVar1 > -1)
	{
		if (MISC::IS_BIT_SET(Global_90014.f_2[iVar0], iVar1))
		{
			return 1;
		}
	}
	return 0;
}

int func_682(int iParam0)//Position - 0x5E51E
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam0 == joaat("object"))
	{
		return 1;
	}
	if (iParam0 == -61829581)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((((((((iParam0 == -572349828 || iParam0 == 392730790) || iParam0 == joaat("weapon_bullpupshotgun")) || iParam0 == -947031628) || iParam0 == -344484024) || iParam0 == joaat("weapon_pistol50")) || iParam0 == -1887867191) || iParam0 == -837150131) || iParam0 == joaat("weapon_hammer"))
		{
			return 1;
		}
		if (iParam0 == joaat("weapon_hatchet"))
		{
			if (GlobalFunc_84())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_hatchet"):
				if (GlobalFunc_84())
				{
					if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[62 /*6*/])
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
				break;
			
			case joaat("weapon_railgun"):
				if (GlobalFunc_84())
				{
					if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[14 /*6*/])
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
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_hammer"):
				if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[1 /*6*/])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case joaat("weapon_snspistol"):
				if ((Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[1 /*6*/] || Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[43 /*6*/]) || Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[19 /*6*/])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case joaat("weapon_specialcarbine"):
				if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[90 /*6*/])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[62 /*6*/])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case joaat("weapon_heavypistol"):
				if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[29 /*6*/])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case joaat("weapon_bullpupshotgun"):
				if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[74 /*6*/] || Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[38 /*6*/])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case joaat("weapon_musket"):
				if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[59 /*6*/])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case joaat("weapon_gusenberg"):
				if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[28 /*6*/])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case joaat("weapon_pistol50"):
				if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[39 /*6*/])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case joaat("weapon_bullpuprifle"):
				if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[84 /*6*/] || Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[85 /*6*/])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case joaat("weapon_marksmanrifle"):
				if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[93 /*6*/])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case joaat("weapon_heavyshotgun"):
				if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[39 /*6*/])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case joaat("weapon_firework"):
				if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[28 /*6*/])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case joaat("weapon_proxmine"):
				if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[64 /*6*/])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case joaat("weapon_hominglauncher"):
				if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[14 /*6*/])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case joaat("weapon_combatpdw"):
				if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[92 /*6*/])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
		}
		if (((((((((iParam0 == -572349828 || iParam0 == joaat("weapon_assaultsmg")) || iParam0 == 392730790) || iParam0 == joaat("weapon_bullpupshotgun")) || iParam0 == -947031628) || iParam0 == -344484024) || iParam0 == joaat("weapon_pistol50")) || iParam0 == -1887867191) || iParam0 == -837150131) || iParam0 == joaat("weapon_hammer"))
		{
			return 1;
		}
	}
	return -1;
}

void func_683(int iParam0)//Position - 0x5E996
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
		case joaat("weapon_appistol"):
		case joaat("weapon_combatpistol"):
		case joaat("weapon_stungun"):
		case joaat("weapon_snspistol"):
		case joaat("weapon_heavypistol"):
			AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_SELECT_HANDGUN", "HUD_AMMO_SHOP_SOUNDSET", 1);
			break;
		
		case joaat("weapon_pumpshotgun"):
		case joaat("weapon_sawnoffshotgun"):
		case joaat("weapon_assaultshotgun"):
		case joaat("weapon_bullpupshotgun"):
			AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_SELECT_SHOTGUN", "HUD_AMMO_SHOP_SOUNDSET", 1);
			break;
		
		case joaat("weapon_advancedrifle"):
		case joaat("weapon_carbinerifle"):
		case joaat("weapon_specialcarbine"):
		case joaat("weapon_assaultrifle"):
		case joaat("weapon_mg"):
		case joaat("weapon_combatmg"):
		case joaat("weapon_bullpuprifle"):
			AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_SELECT_RIFLE", "HUD_AMMO_SHOP_SOUNDSET", 1);
			break;
		
		case joaat("weapon_grenadelauncher"):
			AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_SELECT_GRENADE_LAUNCHER", "HUD_AMMO_SHOP_SOUNDSET", 1);
			break;
		
		case joaat("weapon_rpg"):
			AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_SELECT_RPG_LAUNCHER", "HUD_AMMO_SHOP_SOUNDSET", 1);
			break;
		
		case joaat("weapon_knife"):
			AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_SELECT_KNIFE", "HUD_AMMO_SHOP_SOUNDSET", 1);
			break;
		
		case joaat("weapon_nightstick"):
			AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_SELECT_BATON", "HUD_AMMO_SHOP_SOUNDSET", 1);
			break;
		
		case joaat("gadget_parachute"):
			AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_SELECT_PARACHUTE", "HUD_AMMO_SHOP_SOUNDSET", 1);
			break;
		
		case joaat("weapon_petrolcan"):
			AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_SELECT_FUEL_CAN", "HUD_AMMO_SHOP_SOUNDSET", 1);
			break;
		
		case joaat("weapon_unarmed"):
			AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_SELECT_ARMOR", "HUD_AMMO_SHOP_SOUNDSET", 1);
			break;
		
		default:
			AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_SELECT_OTHER", "HUD_AMMO_SHOP_SOUNDSET", 1);
			break;
	}
}

void func_684(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x5EAF0
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<26> Var3;
	
	*uParam1 = -1;
	while (iVar0 < 6 && !bVar2)
	{
		if (func_84(iParam0, &Global_2543149, &Var3, iParam2, iVar0, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_168.f_218[(iParam2 * 6 + iVar0)]))
			{
				iVar1 = iVar0;
				bVar2 = true;
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		*iParam3 = { Var3 };
		*uParam1 = iVar1;
	}
}

int func_685(int iParam0, int iParam1)//Position - 0x5EB57
{
	if (iParam1 == 3)
	{
	}
	if (iParam0 == joaat("object"))
	{
		return 1;
	}
	if (!GlobalFunc_5102(iParam0))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (GlobalFunc_3() == 0)
		{
			if (iParam0 == joaat("weapon_stungun"))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_686(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)//Position - 0x5EB9F
{
	struct<26> Var0;
	int iVar26;
	int iVar27;
	int iVar28;
	
	if (iLocal_135)
	{
		if (func_84(iParam0, &Global_2543149, &Var0, Global_2428131.f_656.f_33[1], Global_2428131.f_656.f_33[0], 0))
		{
			*uParam2 = Global_2428131.f_656.f_33[0];
			*uParam3 = Global_2428131.f_656.f_33[1];
			if (Global_2428131.f_656.f_40)
			{
				Local_168.f_103.f_5 = 1;
				bLocal_1203 = Var0.f_24 == 4;
				Local_168.f_103.f_2 = Global_2428131.f_656.f_33[2];
				Global_2428131.f_656.f_40 = 0;
			}
			*uParam4 = { Var0 };
			return 1;
		}
		iLocal_135 = 0;
	}
	if (iParam1 == 1)
	{
		if (func_84(iParam0, &Global_2543149, &Var0, 15, 0, 0))
		{
			*uParam2 = 0;
			*uParam3 = 15;
			*uParam4 = { Var0 };
			return 1;
		}
	}
	else
	{
		iVar26 = Global_90014;
		if (Global_90014 == 0)
		{
			if (func_687(&Local_168))
			{
				iVar26 = joaat("weapon_pistol");
			}
			else
			{
				iVar26 = joaat("weapon_pistol");
			}
		}
		iVar27 = 0;
		while (iVar27 < 16)
		{
			iVar28 = 0;
			while (iVar28 < 6)
			{
				if (func_84(iParam0, &Global_2543149, &Var0, iVar27, iVar28, 0))
				{
					if (Var0 == iVar26)
					{
						*uParam2 = iVar28;
						*uParam3 = iVar27;
						*uParam4 = { Var0 };
						return 1;
					}
				}
				iVar28++;
			}
			iVar27++;
		}
	}
	return 0;
}

int func_687(var uParam0)//Position - 0x5ECEF
{
	if (uParam0->f_9)
	{
		if (Global_68245)
		{
			if (Global_90014.f_62[*uParam0])
			{
				return 1;
			}
		}
	}
	return 0;
}






void func_693(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x5EEFC
{
	if (Global_68245)
	{
		NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(iParam0, iParam1);
		if (ENTITY::DOES_ENTITY_EXIST(uParam2))
		{
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iParam2, 1, iParam4);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam3))
		{
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iParam3, 1, iParam5);
		}
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(1, 0);
	}
}

int func_694()//Position - 0x5EF3D
{
	if (Global_68245)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Local_1233.x = 1;
			Local_1233.f_1 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
			STREAMING::REQUEST_MODEL(Local_1233.f_1);
			return STREAMING::HAS_MODEL_LOADED(Local_1233.f_1);
		}
	}
	return 1;
}

bool func_695()//Position - 0x5EF7F
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	bVar0 = true;
	if (!bLocal_132)
	{
		if (Global_2543149.f_51 > 0)
		{
			iVar1 = 0;
			while (iVar1 < Global_2543149.f_51)
			{
				uVar2 = Global_2543149.f_26[iVar1];
				if (NETWORK::REQUEST_COMMERCE_ITEM_IMAGE(uVar2))
				{
				}
				else
				{
					bVar0 = false;
				}
				iLocal_131 = 1;
				iVar1++;
			}
		}
	}
	if (bVar0)
	{
		if (!bLocal_132)
		{
			iLocal_1031 = 1;
		}
	}
	bLocal_132 = bVar0;
	return bVar0;
}




int func_699(bool bParam0, bool bParam1, bool bParam2)//Position - 0x5F181
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	struct<25> Var10;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	
	iVar6 = 1;
	bVar7 = true;
	iVar40 = 1;
	iVar41 = 1;
	if (bParam0)
	{
		iVar40 = 16;
		iVar41 = 6;
	}
	iVar3 = 0;
	while (iVar3 < iVar40)
	{
		iVar4 = 0;
		while (iVar4 < iVar41)
		{
			if (bParam0)
			{
				iVar0 = iVar3;
				iVar1 = iVar4;
			}
			else
			{
				iVar0 = iLocal_1046;
				iVar1 = iLocal_1047;
			}
			iVar36 = (iVar0 * 6 + iVar1);
			bVar7 = true;
			if (func_84(Local_168, &Global_2543149, &Var10, iVar0, iVar1, 0))
			{
				if (func_685(Var10, Var10.f_24))
				{
					bVar5 = false;
					if (Var10.f_24 == 3)
					{
						if (iVar1 == 0)
						{
							iVar8 = joaat("prop_armour_pickup");
						}
						else if (iVar1 == 1)
						{
							iVar8 = joaat("prop_bodyarmour_02");
						}
						else if (iVar1 == 2)
						{
							iVar8 = joaat("prop_bodyarmour_03");
						}
						else if (iVar1 == 3)
						{
							iVar8 = joaat("prop_bodyarmour_04");
						}
						else if (iVar1 == 4)
						{
							iVar8 = joaat("prop_bodyarmour_05");
						}
					}
					else if (Var10.f_24 == 4)
					{
						iVar8 = joaat("p_parachute_s_shop");
					}
					else if (Var10.f_24 == 7)
					{
						iVar8 = func_83(&Global_2543149, Var10.f_23);
					}
					else if (Var10.f_24 == 6)
					{
						iVar8 = joaat("ind_prop_firework_04");
					}
					else if (Var10 == joaat("weapon_knife"))
					{
						iVar8 = joaat("prop_w_me_knife_01");
					}
					else if (Var10 == joaat("weapon_bottle"))
					{
						iVar8 = joaat("prop_w_me_bottle");
					}
					else if (Var10 == joaat("weapon_dagger"))
					{
						iVar8 = joaat("prop_w_me_dagger");
					}
					else if (Var10 == joaat("weapon_hatchet"))
					{
						iVar8 = joaat("prop_w_me_hatchet");
					}
					else
					{
						iVar8 = WEAPON::GET_WEAPONTYPE_MODEL(Var10);
						bVar5 = true;
					}
					if (iVar8 != 0)
					{
						if (bVar5)
						{
							WEAPON::REQUEST_WEAPON_ASSET(Var10, 0, 0);
							if (!WEAPON::HAS_WEAPON_ASSET_LOADED(Var10))
							{
								iVar6 = 0;
								bVar7 = false;
								iLocal_1054 = iVar36;
								if (bParam0)
								{
								}
							}
						}
						else
						{
							STREAMING::REQUEST_MODEL(iVar8);
							if (!STREAMING::HAS_MODEL_LOADED(iVar8))
							{
								iVar6 = 0;
								bVar7 = false;
								iLocal_1054 = iVar36;
								if (bParam0)
								{
								}
							}
						}
						if (bVar5)
						{
							iVar2 = 0;
							while (func_164(&Local_1216, Var10, iVar2, 0))
							{
								if (Local_1216 != 0)
								{
									iVar9 = WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(Local_1216);
									if (iVar9 != 0)
									{
										STREAMING::REQUEST_MODEL(iVar9);
										if (!STREAMING::HAS_MODEL_LOADED(iVar9))
										{
											iVar6 = 0;
											bVar7 = false;
											iLocal_1054 = iVar36;
										}
									}
									if (func_311(Var10))
									{
										if (Local_1216.f_4 == -1441477783)
										{
											iVar37 = WEAPON::_GET_WEAPON_COMPONENT_VARIANT_EXTRA_COMPONENT_COUNT(Local_1216);
											iVar37 = (iVar37 - 1);
											iVar38 = 0;
											while (iVar38 <= iVar37)
											{
												iVar39 = WEAPON::_GET_WEAPON_COMPONENT_VARIANT_EXTRA_COMPONENT_MODEL(Local_1216, iVar38);
												if (iVar39 != 0)
												{
													STREAMING::REQUEST_MODEL(iVar39);
													if (!STREAMING::HAS_MODEL_LOADED(iVar39))
													{
														iVar6 = 0;
														bVar7 = false;
														iLocal_1054 = iVar36;
													}
												}
												iVar38++;
											}
										}
									}
								}
								iVar2++;
							}
						}
						if (bParam1)
						{
							if (bVar7)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_168.f_218[iVar36]) && (ENTITY::GET_ENTITY_MODEL(Local_168.f_218[iVar36]) != iVar8 || iLocal_1202))
								{
									Var10.f_13 = { ENTITY::GET_ENTITY_COORDS(Local_168.f_218[iVar36], 1) };
									Var10.f_16 = { ENTITY::GET_ENTITY_ROTATION(Local_168.f_218[iVar36], 2) };
									OBJECT::DELETE_OBJECT(&(Local_168.f_218[iVar36]));
								}
								if (!ENTITY::DOES_ENTITY_EXIST(Local_168.f_218[iVar36]))
								{
									if (func_685(Var10, Var10.f_24))
									{
										if (((((((Var10.f_24 == 3 || Var10.f_24 == 4) || Var10.f_24 == 7) || Var10.f_24 == 6) || Var10 == joaat("weapon_knife")) || Var10 == joaat("weapon_bottle")) || Var10 == joaat("weapon_dagger")) || Var10 == joaat("weapon_hatchet"))
										{
											Local_168.f_218[iVar36] = func_701(iVar8, Var10.f_1);
										}
										else
										{
											Local_168.f_218[iVar36] = WEAPON::CREATE_WEAPON_OBJECT(Var10, 1, Var10.f_1, 1, 1065353216, 0);
											WEAPON::SET_WEAPON_OBJECT_TINT_INDEX(Local_168.f_218[iVar36], 0);
										}
										if (ENTITY::DOES_ENTITY_EXIST(Local_168.f_218[iVar36]))
										{
											if (bParam2)
											{
												ENTITY::SET_ENTITY_VISIBLE(Local_168.f_218[iVar36], true);
												ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_168.f_218[iVar36], Var10.f_1, 0, 0, 1);
												ENTITY::SET_ENTITY_ROTATION(Local_168.f_218[iVar36], Var10.f_4, 2, 1);
											}
											else
											{
												ENTITY::SET_ENTITY_VISIBLE(Local_168.f_218[iVar36], false);
												ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_168.f_218[iVar36], Var10.f_1 + Vector(100f, 0f, 0f), 0, 0, 1);
												ENTITY::SET_ENTITY_ROTATION(Local_168.f_218[iVar36], Var10.f_4, 2, 1);
											}
											if (iVar8 == joaat("prop_ld_test_01"))
											{
												ENTITY::SET_ENTITY_VISIBLE(Local_168.f_218[iVar36], false);
											}
											ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_168.f_218[iVar36], 0);
											Local_168.f_218.f_102[iVar36 /*3*/] = { Var10.f_4 };
											func_327(&(Local_168.f_218[iVar36]), &Var10);
											if (func_311(Var10))
											{
												func_700(&(Local_168.f_218[iVar36]), &Var10);
											}
											if (!func_680(Var10, Var10.f_24, iVar1))
											{
												ENTITY::SET_ENTITY_ALPHA(Local_168.f_218[iVar36], SYSTEM::FLOOR((255f * 0.5f)), 1);
												if (Var10 == joaat("weapon_appistol") || Var10 == joaat("weapon_combatpistol"))
												{
													ENTITY::_0x5C3B791D580E0BC2(Local_168.f_218[iVar36], 0.05f);
												}
											}
											MISC::CLEAR_BIT(&(Local_168.f_218.f_97[(iVar36 / 32)]), (iVar36 % 32));
											iLocal_1051 = 0;
										}
									}
								}
							}
						}
					}
				}
			}
			iVar4++;
		}
		iVar3++;
	}
	if (!bParam2 && (bParam0 || bVar7))
	{
		iLocal_1047++;
		if (iLocal_1047 >= 6)
		{
			iLocal_1047 = 0;
			iLocal_1046++;
			if (iLocal_1046 >= 16)
			{
				iLocal_1046 = 0;
				if (iLocal_1054 >= 96)
				{
					iLocal_1054 = -1;
					bLocal_1048 = true;
				}
				else
				{
					iLocal_1054 = 96;
				}
			}
		}
	}
	if (iVar6 && ((bParam2 || !bParam1) || iLocal_1054 == -1))
	{
		return 1;
	}
	return 0;
}

void func_700(var uParam0, int iParam1)//Position - 0x5F6FF
{
	int iVar0;
	
	if (ENTITY::GET_ENTITY_MODEL(*uParam0) == func_339(*iParam1))
	{
		while (func_164(&Local_1216, *iParam1, iVar0, 0))
		{
			if (Local_1216.f_4 != -1441477783)
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), *iParam1, 0))
				{
					if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), *iParam1, Local_1216))
					{
						if (WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(*uParam0, Local_1216))
						{
							WEAPON::REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(*uParam0, Local_1216);
							WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(*uParam0, Local_1216);
						}
						else
						{
							WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(*uParam0, Local_1216);
						}
					}
				}
			}
			iVar0++;
		}
	}
}

var func_701(int iParam0, struct<3> Param1)//Position - 0x5F78C
{
	return OBJECT::CREATE_OBJECT_NO_OFFSET(iParam0, Param1, 0, 0, 0);
}









void func_710(var uParam0, var uParam1)//Position - 0x60026
{
	bool bVar0;
	
	if (uParam0->f_9)
	{
		bVar0 = false;
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			bVar0 = true;
		}
		else if (!uParam0->f_7 && (uParam0->f_11 != 4 && uParam1->f_31 >= 6))
		{
			bVar0 = true;
		}
		else if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GlobalFunc_330(*uParam0) == 4) && uParam0->f_11 == 4)
		{
		}
		else if (!func_713(*uParam0, 0, PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)))
		{
			bVar0 = true;
		}
		else if (GlobalFunc_330(*uParam0) == 0 && !GlobalFunc_2497(PLAYER::PLAYER_ID(), *uParam0, 0))
		{
			bVar0 = true;
		}
		else if ((uParam0->f_12.f_14 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_12)) && PED::IS_PED_INJURED(uParam0->f_12))
		{
			bVar0 = true;
		}
		else if (!GlobalFunc_8555(*uParam0))
		{
			bVar0 = true;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_1315828)
		{
			bVar0 = true;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			uParam1->f_31 = 8;
		}
	}
}



int func_713(int iParam0, bool bParam1, bool bParam2)//Position - 0x6018B
{
	bool bVar0;
	var uVar1;
	
	if (GlobalFunc_5785(1))
	{
		if (bParam1)
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || ((!CAM::IS_GAMEPLAY_CAM_RENDERING() && !CAM::IS_AIM_CAM_ACTIVE()) && !bParam2))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || !PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
			bVar0 = false;
			uVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (ENTITY::DOES_ENTITY_EXIST(uVar1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0))
				{
					if (!ENTITY::IS_ENTITY_UPSIDEDOWN(iVar1))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1) == PLAYER::PLAYER_PED_ID())
						{
							if (!PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID()) && !TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
							{
								if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar1))
								{
									bVar0 = true;
								}
							}
						}
					}
				}
			}
			if (!bVar0)
			{
				return 0;
			}
		}
		if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID())) || FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !bParam2)) || (!PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && !bParam2)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(PLAYER::PLAYER_PED_ID())) || HUD::IS_HUD_COMPONENT_ACTIVE(19)) || CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE()) || GlobalFunc_142()) || GlobalFunc_8560(iParam0)) || GlobalFunc_268()) || GlobalFunc_476()) || GlobalFunc_489())
		{
			return 0;
		}
		if ((((GlobalFunc_236() || GlobalFunc_268()) || Global_24446) || Global_1573712) || Global_1573718)
		{
			return 0;
		}
		if ((!GlobalFunc_331() && GlobalFunc_160()) && (GlobalFunc_330(iParam0) != 4 || MISC::GET_HASH_KEY(&(Global_17236.f_1)) != joaat("PIM_TITLE1")))
		{
			return 0;
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (Global_1315828)
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_2446554.f_353.f_5, 0))
			{
				return 0;
			}
			if (GlobalFunc_1277())
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}












void func_725()//Position - 0x60507
{
	if (GlobalFunc_5785(1))
	{
		func_728(&Local_168);
		if (!Local_168.f_8)
		{
			GlobalFunc_2462();
		}
		if (!Local_168.f_7)
		{
			if (iLocal_1025)
			{
				GlobalFunc_5105();
				iLocal_1025 = 0;
			}
			GlobalFunc_4988(1, Local_168);
			Global_2540565 = 0;
			GlobalFunc_5782(Local_168);
			AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
			func_76();
			Local_168.f_11 = 1;
		}
	}
}



void func_728(int iParam0)//Position - 0x60592
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	var uVar5;
	
	if (iParam0->f_1)
	{
		iParam0->f_7 = GlobalFunc_7782(*iParam0, 5, 1);
		iParam0->f_8 = iParam0->f_7;
		return;
	}
	iVar0 = iParam0->f_7;
	iParam0->f_7 = 0;
	iParam0->f_8 = 0;
	if (GlobalFunc_5785(1))
	{
		Var1 = { GlobalFunc_546(*iParam0) };
		fVar4 = GlobalFunc_2499(*iParam0);
		if (fVar4 < 50f)
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0->f_95)
			{
				if (GlobalFunc_2499(*iParam0) < 3.5f)
				{
					iParam0->f_7 = 1;
					iParam0->f_8 = 1;
				}
			}
			uVar5 = GlobalFunc_2464(*iParam0);
			if (GlobalFunc_2498(*iParam0) && !MISC::IS_STRING_NULL_OR_EMPTY(uVar5))
			{
				if (iParam0->f_87 == 0)
				{
					iParam0->f_87 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var1, sVar5);
				}
				if (Global_90014.f_288 == iParam0->f_87 && Global_90014.f_288 != 0)
				{
					iParam0->f_7 = 1;
					if (Global_90014.f_289 == iParam0->f_4 || iParam0->f_4 == 0)
					{
						iParam0->f_8 = 1;
					}
				}
			}
			else if (*iParam0 == 21 && fVar4 < 4.5f)
			{
				iParam0->f_7 = 1;
				iParam0->f_8 = 1;
			}
			else if (fVar4 < 3f)
			{
				iParam0->f_7 = 1;
				iParam0->f_8 = 1;
			}
		}
	}
	if (iVar0 != iParam0->f_7)
	{
		if (iParam0->f_7)
		{
		}
		GlobalFunc_8585(*iParam0, iParam0->f_7);
	}
}



void func_731()//Position - 0x60716
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	struct<3> Var4;
	float fVar7;
	
	bVar2 = false;
	bVar3 = false;
	if (GlobalFunc_1549(1))
	{
		Local_168.f_103 = Global_2428131.f_656.f_39;
		func_747(&(Local_168.f_170), Local_168, Local_168.f_103);
	}
	if (GlobalFunc_5785(1))
	{
		if (GlobalFunc_1549(1) || ((((((!HUD::IS_PAUSE_MENU_ACTIVE() && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !Global_90014.f_1318) && func_713(Local_168, 1, 0)) && !GlobalFunc_8556(Local_168)) && !func_745()))
		{
			if (GlobalFunc_7504(Local_168))
			{
				bVar1 = true;
			}
			else if (Local_168.f_103 != -1 && ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_168.f_170.f_13[0 /*3*/], Local_168.f_170.f_13[1 /*3*/], Local_168.f_170.f_26[0], 0, 1, 1) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_168.f_170.f_13[2 /*3*/], Local_168.f_170.f_13[3 /*3*/], Local_168.f_170.f_26[1], 0, 1, 1)) || GlobalFunc_1549(1)))
			{
				bVar3 = true;
			}
			else
			{
				Local_168.f_103 = -1;
				iLocal_137 = (iLocal_137 + 1 % 4);
				Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				fVar7 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
				if (((!GlobalFunc_537(Var4, Local_138, 0.01f) || fVar7 != fLocal_141) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uLocal_142, 2000)))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_143) > 2000))
				{
					Local_138 = { Var4 };
					fLocal_141 = fVar7;
					iLocal_143 = MISC::GET_GAME_TIMER();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						uLocal_142 = NETWORK::GET_NETWORK_TIME();
					}
					iVar0 = 0;
					while (iVar0 <= (Local_168.f_2 - 1))
					{
						if ((iVar0 % 4) == iLocal_137)
						{
							if (func_747(&(Local_168.f_170), Local_168, iVar0))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_168.f_170.f_13[0 /*3*/], Local_168.f_170.f_13[1 /*3*/], Local_168.f_170.f_26[0], 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_168.f_170.f_13[2 /*3*/], Local_168.f_170.f_13[3 /*3*/], Local_168.f_170.f_26[1], 0, 1, 0))
								{
									Local_168.f_103 = iVar0;
									bVar3 = true;
								}
								Local_138 = { 0f, 0f, -9999f };
								fLocal_141 = -9999.9f;
								iVar0 = Local_168.f_2 + 1;
							}
						}
						iVar0++;
					}
				}
			}
		}
	}
	if (bVar1)
	{
		if (!iLocal_1003)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uLocal_1002 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), MISC::GET_RANDOM_INT_IN_RANGE(2000, 3000));
			}
			else
			{
				iLocal_1001 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(2000, 3000));
			}
			iLocal_1003 = 1;
			iLocal_1004 = 0;
		}
		else if (!iLocal_1004)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), uLocal_1002))
				{
					GlobalFunc_2476(&(Local_168.f_646), 14, 2);
					iLocal_988 = 1;
					uLocal_1002 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), MISC::GET_RANDOM_INT_IN_RANGE(9000, 14000));
					iLocal_1004 = 1;
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_1001) > 0)
			{
				GlobalFunc_2476(&(Local_168.f_646), 14, 2);
				iLocal_988 = 1;
				iLocal_1001 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(9000, 14000));
				iLocal_1004 = 1;
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), uLocal_1002))
			{
				iLocal_1003 = 0;
			}
		}
		else if ((MISC::GET_GAME_TIMER() - iLocal_1001) > 0)
		{
			iLocal_1003 = 0;
		}
		if (!Global_68245 && !GlobalFunc_6687(0))
		{
			GlobalFunc_5839("SHOP_COPS");
		}
	}
	else if (!CUTSCENE::IS_CUTSCENE_PLAYING() && CAM::IS_SCREEN_FADED_IN())
	{
		if (((((!Global_68245 && !bVar3) && Local_168.f_8) && Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_55 < 1) && !GlobalFunc_230(43)) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("lamar1")) > 0)
		{
			GlobalFunc_5839("SHOP_L_WEAP");
		}
		else
		{
			GlobalFunc_2462();
			if (bVar3 && Local_168.f_170 != 5)
			{
				if ((Local_168.f_3 != -1 && !iLocal_136) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					GlobalFunc_2460("Help text removed, releasing context intention", -1);
					GlobalFunc_5420(&(Local_168.f_3));
				}
				if (Local_168.f_3 == -1)
				{
					if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						GlobalFunc_7016(&(Local_168.f_3), 3, &(Local_168.f_170.f_7), 1, 0);
						iLocal_136 = 0;
					}
					else
					{
						GlobalFunc_7016(&(Local_168.f_3), 3, &(Local_168.f_170.f_7), 0, 0);
						iLocal_136 = 1;
					}
				}
				bVar2 = true;
				PAD::SET_INPUT_EXCLUSIVE(0, 51);
				if (GlobalFunc_5079(Local_168.f_3, 1) || GlobalFunc_1549(1))
				{
					bVar2 = false;
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("lamar1")) > 0)
					{
						Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_55++;
					}
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
					}
					Local_168.f_11 = 4;
					Local_168.f_103.f_31 = 0;
					SYSTEM::SETTIMERA(0);
					GlobalFunc_9218(&Local_168, &(Local_168.f_103));
				}
			}
		}
	}
	if (!bVar2)
	{
		if (Local_168.f_3 != -1)
		{
			GlobalFunc_5420(&(Local_168.f_3));
			if (Local_168.f_11 != 4)
			{
				GlobalFunc_4988(1, Local_168);
				Global_2540565 = 0;
				GlobalFunc_5782(Local_168);
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				func_76();
			}
		}
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GlobalFunc_396(PLAYER::PLAYER_ID()))
	{
		GlobalFunc_4988(1, Local_168);
		Global_2540565 = 0;
	}
	else
	{
		GlobalFunc_4998("GUN_MNU", Local_168);
		Global_2540565 = 1;
		GlobalFunc_5798(Local_168);
		func_695();
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_AMMO_SHOP", 0);
	}
}














int func_745()//Position - 0x61294
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (Global_68245)
		{
			if (NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}


int func_747(var uParam0, int iParam1, int iParam2)//Position - 0x612D0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	uParam0->f_13[0 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_13[1 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_13[2 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_13[3 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_26[0] = 0f;
	uParam0->f_26[1] = 0f;
	iVar0 = MISC::GET_HASH_KEY("v_gun");
	iVar1 = MISC::GET_HASH_KEY("v_gun2");
	iVar2 = MISC::GET_HASH_KEY(GlobalFunc_2464(iParam1));
	if (iVar2 == iVar0)
	{
		if (iParam2 == 0)
		{
			*uParam0 = 9;
			StringCopy(&(uParam0->f_7), "GS_BROWSE_W", 16);
			uParam0->f_1 = { 22.99f, -1104.26f, 30.31f };
			uParam0->f_13[0 /*3*/] = { 19.35751f, -1106.22f, 28.60952f };
			uParam0->f_13[1 /*3*/] = { 23.10207f, -1107.574f, 30.48993f };
			uParam0->f_26[0] = 1.9375f;
			uParam0->f_13[2 /*3*/] = { 21.54607f, -1107.329f, 28.73452f };
			uParam0->f_13[3 /*3*/] = { 23.31161f, -1110.421f, 30.29702f };
			uParam0->f_26[1] = 1.375f;
		}
		else if (iParam2 == 1)
		{
			*uParam0 = 12;
			StringCopy(&(uParam0->f_7), "GS_BROWSE_A", 16);
			uParam0->f_1 = { 16.59f, -1109.52f, 30.72f };
			uParam0->f_13[0 /*3*/] = { 18.24785f, -1111.273f, 28.73452f };
			uParam0->f_13[1 /*3*/] = { 19.0786f, -1108.969f, 30.29702f };
			uParam0->f_26[0] = 1.25f;
		}
		else if (iParam2 == 2)
		{
			*uParam0 = 5;
			StringCopy(&(uParam0->f_7), "", 16);
			uParam0->f_1 = { 22.1f, -1112.37f, 30.06f };
			uParam0->f_13[0 /*3*/] = { 22.55885f, -1110.589f, 28.73452f };
			uParam0->f_13[1 /*3*/] = { 20.68537f, -1114.135f, 30.29702f };
			uParam0->f_26[0] = 1.375f;
		}
		uParam0->f_31 = { 20.2672f, -1105.993f, 29.7959f };
		uParam0->f_34 = 341.6826f;
		uParam0->f_42 = { 20.11896f, -1107.994f, 29.96737f };
		uParam0->f_45 = { 3.655659f, 0f, 2.415002f };
	}
	else if (iVar2 == iVar1)
	{
		if (iParam2 == 0)
		{
			*uParam0 = 9;
			StringCopy(&(uParam0->f_7), "GS_BROWSE_W", 16);
			uParam0->f_1 = { 1691.06f, 3761.59f, 35.55f };
			uParam0->f_13[0 /*3*/] = { 1691.783f, 3757.687f, 33.59764f };
			uParam0->f_13[1 /*3*/] = { 1694.417f, 3760.594f, 35.26825f };
			uParam0->f_26[0] = 1.9375f;
			uParam0->f_13[2 /*3*/] = { 1693.513f, 3759.068f, 33.58032f };
			uParam0->f_13[3 /*3*/] = { 1697.123f, 3759.268f, 35.22161f };
			uParam0->f_26[1] = 1.3125f;
		}
		else if (iParam2 == 1)
		{
			*uParam0 = 12;
			StringCopy(&(uParam0->f_7), "GS_BROWSE_A", 16);
			uParam0->f_1 = { 1693.65f, 3753.87f, 35.63f };
			uParam0->f_13[0 /*3*/] = { 1695.99f, 3754.741f, 33.64282f };
			uParam0->f_13[1 /*3*/] = { 1694.252f, 3756.362f, 35.20532f };
			uParam0->f_26[0] = 1.25f;
		}
		else if (iParam2 == 2)
		{
			*uParam0 = 5;
			StringCopy(&(uParam0->f_7), "", 16);
			uParam0->f_1 = { 1699.32f, 3759.06f, 34.85f };
			uParam0->f_13[0 /*3*/] = { 1697.625f, 3759.942f, 33.51783f };
			uParam0->f_13[1 /*3*/] = { 1700.24f, 3757.387f, 35.70533f };
			uParam0->f_26[0] = 1.25f;
		}
		uParam0->f_31 = { 1692.063f, 3758.62f, 34.7052f };
		uParam0->f_34 = 42.0427f;
		uParam0->f_42 = { 1694.004f, 3757.726f, 34.87201f };
		uParam0->f_45 = { 3.240859f, 0f, 74.72784f };
	}
	if (iVar2 == iVar0)
	{
		iVar3 = 28;
	}
	else if (iVar2 == iVar1)
	{
		iVar3 = 29;
	}
	GlobalFunc_7133(iVar3, iParam1, &(uParam0->f_1));
	GlobalFunc_7133(iVar3, iParam1, &(uParam0->f_13[0 /*3*/]));
	GlobalFunc_7133(iVar3, iParam1, &(uParam0->f_13[1 /*3*/]));
	GlobalFunc_7133(iVar3, iParam1, &(uParam0->f_13[2 /*3*/]));
	GlobalFunc_7133(iVar3, iParam1, &(uParam0->f_13[3 /*3*/]));
	GlobalFunc_7133(iVar3, iParam1, &(uParam0->f_31));
	GlobalFunc_7133(iVar3, iParam1, &(uParam0->f_42));
	GlobalFunc_7132(iVar3, iParam1, &(uParam0->f_45));
	GlobalFunc_7134(iVar3, iParam1, &(uParam0->f_34));
	return 1;
}


void func_749()//Position - 0x61771
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!iLocal_1200)
		{
			if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
			{
				func_859(&Global_2543149);
				iLocal_1052 = 0;
				iLocal_1200 = 1;
				iLocal_1202 = 1;
			}
		}
		if (GlobalFunc_7793(PLAYER::PLAYER_ID()) > iLocal_1201)
		{
			iLocal_1052 = 0;
			iLocal_1201 = GlobalFunc_7793(PLAYER::PLAYER_ID());
			iLocal_1202 = 1;
		}
	}
}









void func_758()//Position - 0x61A30
{
	if (GlobalFunc_142())
	{
		return;
	}
	if (!GlobalFunc_8557(Local_168) && !Global_68245)
	{
		if (GlobalFunc_5785(1))
		{
			if (Local_168.f_103.f_5 > 1)
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				GlobalFunc_7629();
				if (Local_168.f_103.f_5 < 5)
				{
					if (!CAM::IS_SCREEN_FADING_OUT())
					{
						if (GlobalFunc_7135())
						{
							CAM::DO_SCREEN_FADE_OUT(500);
							Local_168.f_103.f_9 = MISC::GET_GAME_TIMER();
							Local_168.f_103.f_5 = 4;
						}
					}
				}
			}
			switch (Local_168.f_103.f_5)
			{
				case 0:
					if ((Local_168 == 28 && !GlobalFunc_230(43)) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("lamar1")) > 0)
					{
						Local_168.f_103.f_5++;
					}
					else
					{
						Local_168.f_11 = 3;
						return;
					}
					break;
				
				case 1:
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						Local_168.f_141.f_28 = 0;
						func_763(Local_168, &(Local_168.f_141));
						if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Local_168.f_170.f_13[0 /*3*/], 5f) && !Global_68245)
						{
							GlobalFunc_7503(&Local_168);
						}
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_168.f_141[0 /*3*/], 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_168.f_141.f_7[0]);
						if (!GlobalFunc_100(Local_168.f_141[1 /*3*/], 0f, 0f, 0f))
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Local_168.f_141[1 /*3*/], 1f, 20000, Local_168.f_141.f_7[1], 1056964608);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
						GlobalFunc_9214(&Local_168, 1077936128);
						if (!CAM::DOES_CAM_EXIST(Local_168.f_141.f_10))
						{
							Local_168.f_141.f_10 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
						}
						CAM::SET_CAM_ACTIVE(Local_168.f_141.f_10, 1);
						INTERIOR::_0x405DC2AEF6AF95B9(Local_168.f_4);
						CAM::SET_CAM_PARAMS(Local_168.f_141.f_10, Local_168.f_141.f_11[0 /*3*/], Local_168.f_141.f_18[0 /*3*/], Local_168.f_141.f_25[0], 0, 1, 1, 2);
						CAM::SET_CAM_PARAMS(Local_168.f_141.f_10, Local_168.f_141.f_11[1 /*3*/], Local_168.f_141.f_18[1 /*3*/], Local_168.f_141.f_25[1], 6000, 0, 0, 2);
						CAM::SHAKE_CAM(Local_168.f_141.f_10, "HAND_SHAKE", 0.15f);
						CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
						StringCopy(&(Local_168.f_103.f_11), "SHOP_INTRO", 16);
						Local_168.f_103.f_9 = MISC::GET_GAME_TIMER();
						Local_168.f_103.f_5++;
					}
					break;
				
				case 2:
					if ((MISC::GET_GAME_TIMER() - Local_168.f_103.f_9) >= 5900)
					{
						Local_168.f_141.f_28 = 1;
						func_763(Local_168, &(Local_168.f_141));
						CAM::SET_CAM_PARAMS(Local_168.f_141.f_10, Local_168.f_141.f_11[0 /*3*/], Local_168.f_141.f_18[0 /*3*/], Local_168.f_141.f_25[0], 0, 1, 1, 2);
						CAM::SET_CAM_PARAMS(Local_168.f_141.f_10, Local_168.f_141.f_11[1 /*3*/], Local_168.f_141.f_18[1 /*3*/], Local_168.f_141.f_25[1], 9000, 3, 3, 2);
						CAM::SHAKE_CAM(Local_168.f_141.f_10, "HAND_SHAKE", 0.15f);
						StringCopy(&(Local_168.f_103.f_11), "GS_INTRO_0", 16);
						Local_168.f_103.f_9 = MISC::GET_GAME_TIMER();
						Local_168.f_103.f_5++;
					}
					break;
				
				case 3:
					if ((MISC::GET_GAME_TIMER() - Local_168.f_103.f_9) >= 8900)
					{
						Local_168.f_141.f_28 = 2;
						func_763(Local_168, &(Local_168.f_141));
						CAM::SET_CAM_PARAMS(Local_168.f_141.f_10, Local_168.f_141.f_11[0 /*3*/], Local_168.f_141.f_18[0 /*3*/], Local_168.f_141.f_25[0], 0, 1, 1, 2);
						CAM::SET_CAM_PARAMS(Local_168.f_141.f_10, Local_168.f_141.f_11[1 /*3*/], Local_168.f_141.f_18[1 /*3*/], Local_168.f_141.f_25[1], 13000, 0, 0, 2);
						CAM::SHAKE_CAM(Local_168.f_141.f_10, "HAND_SHAKE", 0.15f);
						StringCopy(&(Local_168.f_103.f_11), "GS_INTRO_1", 16);
						Local_168.f_103.f_9 = MISC::GET_GAME_TIMER();
						Local_168.f_103.f_5++;
					}
					break;
				
				case 4:
					if ((CAM::IS_SCREEN_FADED_OUT() || (MISC::GET_GAME_TIMER() - Local_168.f_103.f_9) >= 10900) && !CAM::IS_SCREEN_FADING_OUT())
					{
						Local_168.f_103.f_5++;
					}
					break;
				
				case 5:
					if (CAM::DOES_CAM_EXIST(Local_168.f_141.f_10))
					{
						if (CAM::IS_CAM_ACTIVE(Local_168.f_141.f_10))
						{
							CAM::SET_CAM_ACTIVE(Local_168.f_141.f_10, 0);
						}
						CAM::DESTROY_CAM(Local_168.f_141.f_10, 0);
					}
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					HUD::CLEAR_HELP(1);
					if (!CAM::IS_SCREEN_FADED_IN())
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_168.f_141[1 /*3*/], 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_168.f_141.f_7[1]);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					}
					GlobalFunc_2462();
					Local_168.f_103.f_9 = MISC::GET_GAME_TIMER();
					GlobalFunc_9185();
					if (!CAM::IS_SCREEN_FADED_IN())
					{
						if (!CAM::IS_SCREEN_FADING_IN())
						{
							CAM::DO_SCREEN_FADE_IN(500);
						}
					}
					GlobalFunc_5782(Local_168);
					GlobalFunc_8590(Local_168, 1);
					break;
			}
			if ((Local_168.f_103.f_5 >= 2 && Local_168.f_103.f_5 < 5) && GlobalFunc_5798(Local_168))
			{
				GlobalFunc_5801(Local_168, &(Local_168.f_103.f_11));
			}
		}
	}
	else
	{
		GlobalFunc_8589(Local_168, 1);
		Local_168.f_11 = 3;
	}
}





void func_763(int iParam0, var uParam1)//Position - 0x62232
{
	switch (iParam0)
	{
		case 28:
			*(uParam1[0 /*3*/]) = { 17.5817f, -1114.677f, 28.797f };
			uParam1->f_7[0] = 327.4219f;
			*(uParam1[1 /*3*/]) = { 18.986f, -1112.406f, 28.797f };
			uParam1->f_7[1] = 341.6928f;
			switch (uParam1->f_28)
			{
				case 0:
					uParam1->f_11[0 /*3*/] = { 16.17042f, -1112.909f, 30.37529f };
					uParam1->f_18[0 /*3*/] = { -2.296382f, 0.010813f, -68.22787f };
					uParam1->f_25[0] = 45.64141f;
					uParam1->f_11[1 /*3*/] = { 16.12026f, -1112.783f, 30.37531f };
					uParam1->f_18[1 /*3*/] = { -2.296382f, 0.010813f, -68.22787f };
					uParam1->f_25[1] = 45.64141f;
					break;
				
				case 1:
					uParam1->f_11[0 /*3*/] = { 25.27993f, -1105.459f, 31.56988f };
					uParam1->f_18[0 /*3*/] = { -10.1024f, 0f, 151.2213f };
					uParam1->f_25[0] = 30.71615f;
					uParam1->f_11[1 /*3*/] = { 25.38027f, -1105.331f, 30.65363f };
					uParam1->f_18[1 /*3*/] = { -10.1024f, 0f, 127.9985f };
					uParam1->f_25[1] = 30.71615f;
					break;
				
				case 2:
					uParam1->f_11[0 /*3*/] = { 22.64528f, -1108.016f, 30.0456f };
					uParam1->f_18[0 /*3*/] = { 7.8716f, 0f, -18.51646f };
					uParam1->f_25[0] = 32.04739f;
					uParam1->f_11[1 /*3*/] = { 20.37609f, -1107.257f, 30.0456f };
					uParam1->f_18[1 /*3*/] = { 7.8716f, 0f, -18.51646f };
					uParam1->f_25[1] = 32.04739f;
					break;
			}
			break;
	}
}





void func_768()//Position - 0x624AD
{
	if (GlobalFunc_5785(1))
	{
		func_728(&Local_168);
		if (Local_168.f_8)
		{
			if (!Global_68245 && !iLocal_128)
			{
				Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_51++;
				iLocal_128 = 1;
			}
			Local_168.f_103 = -1;
			Local_168.f_11 = 2;
			Local_168.f_103.f_5 = 0;
		}
	}
}

void func_769(int iParam0, bool bParam1, bool bParam2)//Position - 0x62502
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	if (bParam2)
	{
		if (bParam1)
		{
			iVar0 = 4;
		}
		else
		{
			iVar0 = 3;
		}
	}
	iVar1 = GlobalFunc_2508(iParam0, 0);
	if (iVar1 != 225)
	{
		func_770(iVar1, iVar0);
	}
	iVar1 = GlobalFunc_2508(iParam0, 1);
	if (iVar1 != 225)
	{
		func_770(iVar1, iVar0);
	}
}

void func_770(int iParam0, int iParam1)//Position - 0x62565
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
			func_772(iParam0);
			if (MISC::IS_BIT_SET(Global_30787[(iParam0 / 32)], (iParam0 % 32)))
			{
				GlobalFunc_510(iParam0);
			}
		}
	}
}


void func_772(int iParam0)//Position - 0x626AC
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
		GlobalFunc_8379(iParam0, &Var0);
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














void func_786()//Position - 0x63AE2
{
	char cVar0[16];
	bool bVar4;
	
	switch (Local_168.f_103.f_5)
	{
		case 0:
			if (func_793(&Local_168, iLocal_127))
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && CAM::IS_SCREEN_FADED_OUT())
				{
					GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(GlobalFunc_546(Local_168), 25f);
					MISC::CLEAR_AREA_OF_PROJECTILES(GlobalFunc_546(Local_168), 25f, 0);
					MISC::CLEAR_AREA(GlobalFunc_546(Local_168), 25f, 1, 0, 0, 0);
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
					{
						iLocal_1200 = 1;
					}
					else
					{
						iLocal_1200 = 0;
					}
					iLocal_1201 = GlobalFunc_7793(PLAYER::PLAYER_ID());
				}
				if (MISC::IS_PC_VERSION())
				{
					func_792(Local_168, &fLocal_1210, &fLocal_1211);
					iLocal_1215 = 1;
				}
				Local_168.f_103.f_5++;
			}
			else
			{
				func_23(0);
			}
			break;
		
		case 1:
			if (GlobalFunc_8555(Local_168))
			{
				Local_168.f_103.f_5++;
			}
			break;
		
		case 2:
			if (!func_887())
			{
				return;
			}
			StringCopy(&cVar0, "GUNKEEPER", 16);
			StringIntConCat(&cVar0, Local_168, 16);
			if (!GlobalFunc_2458(iLocal_127) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (!Local_168.f_12.f_14)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_168.f_12))
					{
						if ((PED::IS_PED_INJURED(Local_168.f_12) || PED::IS_PED_FLEEING(Local_168.f_12)) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_168.f_12, 1), Local_168.f_12.f_2, 1) > 10f)
						{
							GlobalFunc_2460("Marking previous shop keeper as no longer needed", -1);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_168.f_12));
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_168.f_12))
					{
						PED::DELETE_PED(&(Local_168.f_12));
					}
				}
			}
			if (Local_168.f_12.f_1 != 0)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_168.f_12))
				{
					STREAMING::REQUEST_MODEL(Local_168.f_12.f_1);
					if (!STREAMING::HAS_MODEL_LOADED(Local_168.f_12.f_1))
					{
						return;
					}
					bVar4 = false;
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if ((NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() && !NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_90)) && !Local_90.f_2)
						{
							bVar4 = true;
						}
					}
					else
					{
						bVar4 = true;
					}
					if (!bVar4)
					{
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							GlobalFunc_2460("Using net shop keeper..", -1);
							func_856(&(Local_168.f_12));
							if (!Local_168.f_12.f_15)
							{
								GlobalFunc_2460("Waiting for shop keeper to be initialised", -1);
								return;
							}
						}
					}
					else
					{
						GlobalFunc_2460("Creating shop keeper", -1);
						MISC::CLEAR_AREA(Local_168.f_12.f_2, 2.5f, 1, 0, 0, 0);
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							if (!GlobalFunc_2625(&Local_90, 4, Local_168.f_12.f_1, Local_168.f_12.f_2, Local_168.f_12.f_5, 1, 1, 1))
							{
								return;
							}
							if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
							{
								Local_90.f_2 = 1;
							}
							func_856(&(Local_168.f_12));
						}
						else
						{
							Local_168.f_12 = PED::CREATE_PED(5, Local_168.f_12.f_1, Local_168.f_12.f_2, Local_168.f_12.f_5, 0, 0);
						}
						INTERIOR::_0x82EBB79E258FA2B7(Local_168.f_12, INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(GlobalFunc_546(Local_168), GlobalFunc_2464(Local_168)));
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_168.f_12, 1);
						PED::CLEAR_ALL_PED_PROPS(Local_168.f_12);
						if (Local_168 == 28 || Local_168 == 29)
						{
							PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_168.f_12);
							PED::SET_PED_PROP_INDEX(Local_168.f_12, 0, 0, 0, 0);
							PED::SET_PED_PROP_INDEX(Local_168.f_12, 1, 0, 0, 0);
						}
						else if (Local_168 == 30)
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 0, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 3, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 4, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 8, 0, 1, 0);
							PED::SET_PED_PROP_INDEX(Local_168.f_12, 1, 0, 0, 0);
						}
						else if (Local_168 == 31)
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 0, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 3, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 4, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 8, 0, 0, 0);
							PED::SET_PED_PROP_INDEX(Local_168.f_12, 0, 0, 0, 0);
						}
						else if (Local_168 == 32)
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 0, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 2, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 3, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 4, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 8, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 10, 0, 0, 0);
							PED::SET_PED_PROP_INDEX(Local_168.f_12, 1, 0, 0, 0);
						}
						else if (Local_168 == 33)
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 0, 0, 2, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 3, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 4, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 8, 0, 1, 0);
							PED::SET_PED_PROP_INDEX(Local_168.f_12, 0, 0, 0, 0);
							PED::SET_PED_PROP_INDEX(Local_168.f_12, 1, 0, 0, 0);
						}
						else if (Local_168 == 34)
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 0, 0, 2, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 3, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 4, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 8, 0, 0, 0);
							PED::SET_PED_PROP_INDEX(Local_168.f_12, 1, 0, 0, 0);
						}
						else if (Local_168 == 35)
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 0, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 2, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 3, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 4, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 8, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 10, 0, 1, 0);
							PED::SET_PED_PROP_INDEX(Local_168.f_12, 0, 0, 0, 0);
						}
						else if (Local_168 == 36)
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 0, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 2, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 3, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 4, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 8, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 10, 0, 0, 0);
						}
						else if (Local_168 == 37)
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 0, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 3, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 4, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 8, 0, 0, 0);
							PED::SET_PED_PROP_INDEX(Local_168.f_12, 0, 0, 0, 0);
						}
						else if (Local_168 == 38)
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 0, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 3, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 4, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_168.f_12, 8, 0, 1, 0);
							PED::SET_PED_PROP_INDEX(Local_168.f_12, 0, 0, 0, 0);
						}
						if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_168.f_12, joaat("weapon_assaultshotgun"), -1, 0, 0);
							WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(Local_168.f_12, 0);
						}
						PED::SET_PED_COMBAT_MOVEMENT(Local_168.f_12, 0);
						if (!iLocal_158)
						{
							PED::ADD_RELATIONSHIP_GROUP(&cVar0, &iLocal_159);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_168.f_12, iLocal_159);
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_159);
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_159, 1862763509);
							iLocal_158 = 1;
						}
						PED::SET_PED_AS_ENEMY(Local_168.f_12, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_168.f_12, 1);
						PED::SET_PED_CONFIG_FLAG(Local_168.f_12, 185, 1);
						PED::SET_PED_CAN_EVASIVE_DIVE(Local_168.f_12, 0);
						PED::_0x2F3C3D9F50681DE4(Local_168.f_12, 1);
						PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_168.f_12, 0);
					}
				}
				else
				{
					GlobalFunc_2460("shop keeper already exists..", -1);
				}
				if (!PED::IS_PED_INJURED(Local_168.f_12) && func_319(0))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_LOOK_AT_ENTITY(Local_168.f_12, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					}
					if (!GlobalFunc_8560(Local_168))
					{
						TASK::TASK_PERFORM_SEQUENCE(Local_168.f_12, uLocal_160);
					}
					GlobalFunc_200(&(Local_168.f_646.f_5), GlobalFunc_2020("D"));
					if (func_788(Local_168))
					{
						GlobalFunc_1286(&(Local_168.f_646.f_5), GlobalFunc_2020("D"), Local_168.f_12, "AMMUCOUNTRY", 0, 1);
						if (Local_168 == 29)
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(Local_168.f_12, "MELVIN");
						}
						else
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(Local_168.f_12, "S_M_M_AMMUCOUNTRY_WHITE_MINI_01");
						}
					}
					else
					{
						GlobalFunc_1286(&(Local_168.f_646.f_5), GlobalFunc_2020("D"), Local_168.f_12, "AMMUCITY", 0, 1);
						if (Local_168 == 28)
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(Local_168.f_12, "AMMUCITY");
						}
						else
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(Local_168.f_12, "S_M_Y_AMMUCITY_01_WHITE_MINI_01");
						}
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_168.f_12.f_1);
					Local_168.f_12.f_14 = 1;
				}
			}
			func_769(Local_168, 0, 0);
			MISC::_0x65D2EBB47E1CEC21(0);
			Local_168.f_103.f_5 = 0;
			Local_168.f_11 = 1;
			break;
	}
}


int func_788(int iParam0)//Position - 0x642EF
{
	switch (iParam0)
	{
		case 29:
		case 32:
		case 35:
		case 36:
			return 1;
			break;
	}
	return 0;
}




void func_792(int iParam0, float fParam1, float fParam2)//Position - 0x64637
{
	switch (iParam0)
	{
		case 35:
			*fParam1 = 68f;
			break;
		
		case 28:
			*fParam1 = 4f;
			break;
		
		case 31:
			*fParam1 = -154f;
			break;
		
		case 36:
			*fParam1 = 93f;
			break;
		
		case 33:
			*fParam1 = 26f;
			break;
		
		case 34:
			*fParam1 = -79f;
			break;
		
		case 32:
			*fParam1 = 71f;
			break;
		
		case 29:
			*fParam1 = 74f;
			break;
		
		case 30:
			*fParam1 = -85f;
			break;
		
		case 37:
			*fParam1 = -155f;
			break;
		
		case 38:
			*fParam1 = -155f;
			break;
		
		default:
			*fParam1 = 68f;
	}
	*fParam2 = (*fParam1 - 100f);
	while (*fParam2 > 180f)
	{
		*fParam2 = (*fParam2 - 360f);
	}
	while (*fParam2 < -180f)
	{
		*fParam2 = (*fParam2 + 360f);
	}
}

bool func_793(var uParam0, int iParam1)//Position - 0x64747
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	uParam0->f_9 = 0;
	func_794(uParam0, -1, 0, 0, 0, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0);
	iVar0 = MISC::GET_HASH_KEY("v_gun");
	iVar1 = MISC::GET_HASH_KEY("v_gun2");
	iVar2 = MISC::GET_HASH_KEY(GlobalFunc_2464(iParam1));
	if (iVar2 == iVar0)
	{
		func_794(uParam0, iParam1, MISC::GET_HASH_KEY("V_7_GunShopRm"), 3, joaat("s_m_y_ammucity_01"), 23.3396f, -1105.384f, 28.797f, 142.4851f, 23.3396f, -1105.384f, 28.797f, 142.4851f, 1);
	}
	else if (iVar2 == iVar1)
	{
		func_794(uParam0, iParam1, MISC::GET_HASH_KEY("V_22_GunShopRm"), 3, joaat("s_m_y_ammucity_01"), 1692.38f, 3761.682f, 33.7053f, 213.3571f, 1692.38f, 3761.682f, 33.7053f, 213.3571f, 1);
	}
	if (func_788(iParam1))
	{
		uParam0->f_12.f_1 = joaat("s_m_m_ammucountry");
	}
	if (iVar2 == iVar0)
	{
		iVar3 = 28;
	}
	else if (iVar2 == iVar1)
	{
		iVar3 = 29;
	}
	GlobalFunc_7133(iVar3, iParam1, &(uParam0->f_12.f_2));
	GlobalFunc_7133(iVar3, iParam1, &(uParam0->f_12.f_10));
	GlobalFunc_7134(iVar3, iParam1, &(uParam0->f_12.f_5));
	GlobalFunc_7134(iVar3, iParam1, &(uParam0->f_12.f_13));
	return uParam0->f_9;
}

void func_794(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, struct<3> Param5, float fParam8, struct<3> Param9, float fParam12, int iParam13)//Position - 0x6487D
{
	*uParam0 = iParam1;
	uParam0->f_4 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_12.f_1 = iParam4;
	uParam0->f_12.f_2 = { Param5 };
	uParam0->f_12.f_5 = fParam8;
	uParam0->f_12.f_10 = { Param9 };
	uParam0->f_12.f_13 = fParam12;
	uParam0->f_9 = iParam13;
}

void func_795()//Position - 0x648CC
{
	if (((Local_168.f_9 && Local_168.f_7) && Local_168 == 28) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!GlobalFunc_892(0, 11))
		{
			func_770(164, 4);
		}
		else
		{
			func_770(164, 3);
		}
	}
	if (((Local_168.f_9 && Local_168.f_7) && Local_168 == 38) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!GlobalFunc_892(0, 11))
		{
			func_770(185, 4);
		}
		else
		{
			func_770(185, 3);
		}
	}
}


void func_797()//Position - 0x649A1
{
	char* sVar0;
	char[] cVar4[8];
	
	if (iLocal_144 && Local_168.f_11 == 4)
	{
		if (!bLocal_146)
		{
			iLocal_149 = unk_0x67D02A194A2FC2BD("MP_BIG_MESSAGE_FREEMODE");
			iLocal_147 = 1;
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_149))
			{
				if (!iLocal_148)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_149, "SHOW_WEAPON_PURCHASED");
					GlobalFunc_726("SHOP_PURCH");
					func_282(&Global_2543149, iLocal_151, iLocal_152, &sVar0, &cVar4);
					GlobalFunc_726(&sVar0);
					if (iLocal_150 == joaat("weapon_unarmed") || iLocal_150 == 0)
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					}
					else
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_150);
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					iLocal_153 = MISC::GET_GAME_TIMER();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						uLocal_154 = NETWORK::GET_NETWORK_TIME();
					}
					iLocal_150 = 0;
					iLocal_151 = -1;
					iLocal_152 = -1;
					iLocal_145 = 0;
					iLocal_148 = 1;
				}
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_149, 255, 255, 255, 255, 0);
				if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uLocal_154, 5000))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_153) > 5000)) || iLocal_145)
				{
					iLocal_144 = 0;
				}
			}
		}
	}
	else
	{
		if (iLocal_147)
		{
			bLocal_146 = true;
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_149))
			{
				GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_149);
				iLocal_149 = 0;
				iLocal_147 = 0;
				bLocal_146 = false;
				iLocal_145 = 0;
			}
		}
		if (((!bLocal_146 && iLocal_150 != 0) && iLocal_150 != joaat("weapon_unarmed")) && Local_168.f_11 == 4)
		{
			iLocal_144 = 1;
		}
		else
		{
			iLocal_144 = 0;
		}
		iLocal_148 = 0;
	}
}

void func_798()//Position - 0x64AF7
{
	if ((!Local_168.f_9 || !Local_168.f_8) || func_799())
	{
		if (iLocal_1052)
		{
			bLocal_1048 = false;
			iLocal_1052 = 0;
			iLocal_1051 = 0;
			iLocal_1050 = 0;
			iLocal_1049 = 0;
		}
		else if (!iLocal_1051)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				GlobalFunc_434(&uLocal_129);
			}
			func_163(0);
		}
	}
	else if (!iLocal_1052)
	{
		iLocal_1051 = 0;
		iLocal_1052 = 1;
		bLocal_1048 = false;
		iLocal_1047 = 0;
		iLocal_1046 = 0;
		iLocal_1054 = 96;
	}
	else if (!bLocal_1048)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!GlobalFunc_439(&uLocal_129))
			{
				GlobalFunc_436(&uLocal_129, 0, 0);
			}
			if (GlobalFunc_5071(&uLocal_129, 1000, 0))
			{
				func_699(0, 1, 0);
			}
		}
		else
		{
			func_699(0, 1, 0);
		}
	}
	if ((NETWORK::IS_COMMERCE_STORE_OPEN() || HUD::IS_PAUSE_MENU_ACTIVE()) || PAD::IS_CONTROL_JUST_PRESSED(2, 199))
	{
		iLocal_133 = 1;
	}
	else if (iLocal_133)
	{
		func_859(&Global_2543149);
		func_76();
		iLocal_133 = 0;
		bLocal_1053 = true;
	}
	if (bLocal_1048)
	{
		iLocal_1202 = 0;
	}
}

int func_799()//Position - 0x64BFE
{
	if (Local_168 == 28 || Local_168 == 38)
	{
		if (Local_168.f_103 == -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_800()//Position - 0x64C26
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (iLocal_1025)
	{
		if (GlobalFunc_111())
		{
			return;
		}
		else
		{
			iLocal_1025 = 0;
		}
	}
	if (!Local_168.f_9 || !bLocal_1045)
	{
		GlobalFunc_2476(&(Local_168.f_646), -1, 1);
		return;
	}
	if (PED::IS_PED_INJURED(Local_168.f_12))
	{
		return;
	}
	bVar0 = false;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Local_168.f_12, joaat("weapon_assaultshotgun"), 0))
		{
			bVar0 = true;
			GlobalFunc_8592(Local_168, 1);
			if (!PED::IS_PED_IN_COMBAT(Local_168.f_12, 0))
			{
				if (!GlobalFunc_1575(ENTITY::GET_ENTITY_HEADING(Local_168.f_12), Local_168.f_12.f_5, 45f))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_168.f_12, 1920390111) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_168.f_12, 1920390111) != 0)
					{
						TASK::TASK_ACHIEVE_HEADING(Local_168.f_12, Local_168.f_12.f_5, 0);
					}
				}
			}
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !MISC::IS_STRING_NULL_OR_EMPTY(sLocal_167))
	{
		if ((((ENTITY::IS_ENTITY_PLAYING_ANIM(Local_168.f_12, sLocal_167, "_positive_goodbye", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(Local_168.f_12, sLocal_167, "_impatient_a", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(Local_168.f_12, sLocal_167, "_impatient_b", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(Local_168.f_12, sLocal_167, "_positive_a", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(Local_168.f_12, sLocal_167, "_greeting", 3))
		{
			return;
		}
	}
	if (Local_168.f_7)
	{
		if (Local_168.f_11 == 3)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (!iLocal_992)
				{
					if (!iLocal_993)
					{
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							uLocal_991 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), MISC::GET_RANDOM_INT_IN_RANGE(300, 600));
						}
						else
						{
							iLocal_990 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(300, 600));
						}
						iLocal_993 = 1;
					}
					else if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), uLocal_991)) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_990) > 0))
					{
						GlobalFunc_2476(&(Local_168.f_646), 15, 2);
						iLocal_992 = 1;
					}
				}
				iLocal_988 = 1;
			}
			else if (!iLocal_988)
			{
				if (!iLocal_989)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						uLocal_987 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), MISC::GET_RANDOM_INT_IN_RANGE(300, 600));
					}
					else
					{
						iLocal_986 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(300, 600));
					}
					iLocal_989 = 1;
				}
				else if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !GlobalFunc_7787(-1)) && !func_788(Local_168))
				{
					if (!GlobalFunc_7504(Local_168))
					{
						GlobalFunc_2476(&(Local_168.f_646), 1, 2);
						if (!GlobalFunc_8553(Local_168) && !GlobalFunc_8560(Local_168))
						{
						}
					}
					else
					{
						GlobalFunc_2476(&(Local_168.f_646), 14, 2);
					}
					iLocal_988 = 1;
				}
				else if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), uLocal_987)) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_986) > 0))
				{
					if (!GlobalFunc_7504(Local_168) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("trevor2")) == 0)
					{
						GlobalFunc_2476(&(Local_168.f_646), 0, 2);
						if (!GlobalFunc_8560(Local_168))
						{
							if (!GlobalFunc_8553(Local_168))
							{
								if (!bVar0)
								{
									TASK::TASK_PERFORM_SEQUENCE(Local_168.f_12, uLocal_161);
								}
							}
							else if (!bVar0)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_168.f_12, 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_168.f_12, 242628503) != 0)
								{
									TASK::TASK_PERFORM_SEQUENCE(Local_168.f_12, uLocal_160);
								}
							}
						}
					}
					else
					{
						GlobalFunc_2476(&(Local_168.f_646), 14, 2);
					}
					iLocal_988 = 1;
				}
			}
		}
	}
	else if (GlobalFunc_2499(Local_168) > 15f)
	{
		iLocal_988 = 0;
		iLocal_989 = 0;
		iLocal_993 = 0;
		iLocal_992 = 0;
	}
	if (!Local_168.f_103.f_19)
	{
		if (Local_168.f_8)
		{
			if (func_815())
			{
				if (!iLocal_1007)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						uLocal_1006 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), MISC::GET_RANDOM_INT_IN_RANGE(300, 600));
					}
					else
					{
						iLocal_1005 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(300, 600));
					}
					iLocal_1007 = 1;
				}
				else if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), uLocal_1006)) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_1005) > 0))
				{
					if (GlobalFunc_2627(&(Local_168.f_646), 3) && !GlobalFunc_2628(&(Local_168.f_646), 1000))
					{
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							uLocal_1006 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), MISC::GET_RANDOM_INT_IN_RANGE(5000, 15000));
						}
						else
						{
							iLocal_1005 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 15000));
						}
					}
					else
					{
						GlobalFunc_2476(&(Local_168.f_646), 3, 2);
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							uLocal_1006 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), MISC::GET_RANDOM_INT_IN_RANGE(15000, 30000));
						}
						else
						{
							iLocal_1005 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(15000, 30000));
						}
					}
				}
			}
			else
			{
				iLocal_1007 = 0;
			}
		}
	}
	if ((Local_168.f_8 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		if (!iLocal_1010)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uLocal_1009 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 100);
			}
			else
			{
				iLocal_1008 = MISC::GET_GAME_TIMER() + 100;
			}
			iLocal_1010 = 1;
		}
		else if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), uLocal_1009)) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_1008) > 0))
		{
			if (GlobalFunc_2627(&(Local_168.f_646), 2) && !GlobalFunc_2628(&(Local_168.f_646), 1000))
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uLocal_1009 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), MISC::GET_RANDOM_INT_IN_RANGE(5000, 15000));
				}
				else
				{
					iLocal_1008 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 15000));
				}
			}
			else
			{
				GlobalFunc_2476(&(Local_168.f_646), 2, 2);
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uLocal_1009 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), MISC::GET_RANDOM_INT_IN_RANGE(15000, 30000));
				}
				else
				{
					iLocal_1008 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(15000, 30000));
				}
			}
		}
	}
	else
	{
		iLocal_1007 = 0;
	}
	if (Local_168.f_103.f_19)
	{
		iLocal_988 = 1;
		if (Local_168.f_103.f_31 != 2)
		{
			GlobalFunc_2476(&(Local_168.f_646), -1, 1);
		}
		else
		{
			iLocal_1000 = 1;
			iLocal_999 = 0;
			if (iLocal_1011 != Local_168.f_103.f_3)
			{
				iLocal_1011 = Local_168.f_103.f_3;
				if (Local_168.f_103.f_1 != -1)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						uLocal_1013 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000));
					}
					else
					{
						iLocal_1012 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000));
					}
					iLocal_1014 = 1;
				}
			}
			else if (iLocal_1014)
			{
				if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), uLocal_1013)) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_1012) > 0))
				{
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
					{
						switch (iLocal_1011)
						{
							case 3:
								GlobalFunc_2476(&(Local_168.f_646), 6, 1);
								break;
							
							case 6:
								GlobalFunc_2476(&(Local_168.f_646), 9, 1);
								break;
							
							case 9:
								GlobalFunc_2476(&(Local_168.f_646), 8, 1);
								break;
							
							case 8:
								GlobalFunc_2476(&(Local_168.f_646), 7, 1);
								break;
							
							case 7:
								GlobalFunc_2476(&(Local_168.f_646), 5, 1);
								break;
							
							case 15:
								GlobalFunc_2476(&(Local_168.f_646), 10, 1);
								break;
							
							default:
								GlobalFunc_2476(&(Local_168.f_646), -1, 1);
								break;
						}
					}
					else
					{
						GlobalFunc_2476(&(Local_168.f_646), -1, 1);
					}
					iLocal_1014 = 0;
				}
			}
			if (GlobalFunc_2628(&(Local_168.f_646), iLocal_1016))
			{
				if (GlobalFunc_2627(&(Local_168.f_646), 4))
				{
					iLocal_1016 = MISC::GET_RANDOM_INT_IN_RANGE(45000, 60000);
				}
				else
				{
					iLocal_1016 = MISC::GET_RANDOM_INT_IN_RANGE(30000, 45000);
				}
				GlobalFunc_2476(&(Local_168.f_646), 4, 0);
				if (!GlobalFunc_8553(Local_168))
				{
					if (!GlobalFunc_8560(Local_168))
					{
						if (!bVar0)
						{
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
							{
								TASK::TASK_PERFORM_SEQUENCE(Local_168.f_12, uLocal_163);
							}
							else
							{
								TASK::TASK_PERFORM_SEQUENCE(Local_168.f_12, uLocal_164);
							}
						}
					}
				}
			}
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((Local_168.f_8 && !Local_168.f_103.f_19) && GlobalFunc_42(GlobalFunc_8354()))
		{
			iVar1 = GlobalFunc_469(GlobalFunc_8354());
			if (GlobalFunc_331())
			{
				if (iLocal_1015 != iVar1)
				{
					GlobalFunc_2476(&(Local_168.f_646), 4, 2);
					iLocal_1015 = iVar1;
				}
			}
			else
			{
				iLocal_1015 = iVar1;
			}
		}
	}
	if (!Local_168.f_103.f_19)
	{
		if (iLocal_1000)
		{
			if (!iLocal_999)
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uLocal_998 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), MISC::GET_RANDOM_INT_IN_RANGE(300, 600));
				}
				else
				{
					iLocal_997 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(300, 600));
				}
				iLocal_999 = 1;
			}
			else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), uLocal_998))
				{
					if (Local_168.f_103.f_23)
					{
						GlobalFunc_2476(&(Local_168.f_646), 11, 2);
						if (!GlobalFunc_8553(Local_168))
						{
							if (!GlobalFunc_8560(Local_168))
							{
								if (!bVar0)
								{
									if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
									{
										TASK::TASK_PERFORM_SEQUENCE(Local_168.f_12, uLocal_165);
									}
									else
									{
										TASK::TASK_PERFORM_SEQUENCE(Local_168.f_12, uLocal_166);
									}
								}
							}
						}
					}
					else
					{
						GlobalFunc_2476(&(Local_168.f_646), 13, 2);
						if (!GlobalFunc_8553(Local_168) && !GlobalFunc_8560(Local_168))
						{
							if (!bVar0)
							{
								TASK::TASK_PERFORM_SEQUENCE(Local_168.f_12, uLocal_162);
							}
						}
					}
					iLocal_1000 = 0;
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_997) > 0)
			{
				if (Local_168.f_103.f_23)
				{
					GlobalFunc_2476(&(Local_168.f_646), 11, 2);
					if (!GlobalFunc_8553(Local_168) && !GlobalFunc_8560(Local_168))
					{
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
						{
							TASK::TASK_PERFORM_SEQUENCE(Local_168.f_12, uLocal_165);
						}
						else
						{
							TASK::TASK_PERFORM_SEQUENCE(Local_168.f_12, uLocal_166);
						}
					}
				}
				else
				{
					GlobalFunc_2476(&(Local_168.f_646), 13, 2);
					if (!GlobalFunc_8553(Local_168) && !GlobalFunc_8560(Local_168))
					{
						TASK::TASK_PERFORM_SEQUENCE(Local_168.f_12, uLocal_162);
					}
				}
				iLocal_1000 = 0;
			}
		}
	}
	if (Local_168.f_646 != -1)
	{
		bVar2 = false;
		if (Local_168.f_646 == 2)
		{
			bVar2 = true;
		}
		if (!GlobalFunc_9189(&(Local_168.f_646), Local_168, bVar2))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (!iLocal_996)
				{
					uLocal_995 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 3000);
					iLocal_996 = 1;
				}
				else if (NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), uLocal_995))
				{
					GlobalFunc_2455(&(Local_168.f_646));
					iLocal_996 = 0;
				}
			}
			else if (!iLocal_996)
			{
				iLocal_994 = MISC::GET_GAME_TIMER();
				iLocal_996 = 1;
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_994) > 3000)
			{
				GlobalFunc_2455(&(Local_168.f_646));
				iLocal_996 = 0;
			}
		}
		else
		{
			iLocal_996 = 0;
			switch (Local_168.f_646)
			{
				case 0:
					switch (GlobalFunc_8354())
					{
						case 0:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_168.f_12, "SHOP_GREET_MICHAEL", "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 1:
							if ((GlobalFunc_230(43) && Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_53 < 5) && Local_168 == 28)
							{
								GlobalFunc_200(&(Local_168.f_646.f_5), GlobalFunc_2020("D"));
								GlobalFunc_1286(&(Local_168.f_646.f_5), GlobalFunc_2020("D"), Local_168.f_12, "AMMUCITY", 0, 1);
								GlobalFunc_1286(&(Local_168.f_646.f_5), 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
								if (Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_53 == 0)
								{
									GlobalFunc_10643(&(Local_168.f_646.f_5), "gunshau", "gunsh_frank1", 7, 0, 0, 0);
									Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_53++;
								}
								else if (Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_53 == 1)
								{
									GlobalFunc_10643(&(Local_168.f_646.f_5), "gunshau", "gunsh_frank2", 7, 0, 0, 0);
									Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_53++;
								}
								else if (Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_53 == 2)
								{
									GlobalFunc_10643(&(Local_168.f_646.f_5), "gunshau", "gunsh_frank3", 7, 0, 0, 0);
									Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_53++;
								}
								else if (Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_53 == 3)
								{
									GlobalFunc_10643(&(Local_168.f_646.f_5), "gunshau", "gunsh_frank4", 7, 0, 0, 0);
									Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_53++;
								}
								else if (Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_53 == 4)
								{
									GlobalFunc_10643(&(Local_168.f_646.f_5), "gunshau", "gunsh_frank5", 7, 0, 0, 0);
									Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_53++;
								}
								iLocal_1025 = 1;
							}
							else
							{
								AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_168.f_12, "SHOP_GREET_FRANKLIN", "SPEECH_PARAMS_FORCE", 1);
							}
							break;
						
						case 2:
							if ((GlobalFunc_230(63) && Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_52 < 5) && Local_168 == 29)
							{
								GlobalFunc_200(&(Local_168.f_646.f_5), GlobalFunc_2020("D"));
								GlobalFunc_1286(&(Local_168.f_646.f_5), GlobalFunc_2020("D"), Local_168.f_12, "MELVIN", 0, 1);
								GlobalFunc_1286(&(Local_168.f_646.f_5), 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
								if (Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_52 == 0)
								{
									GlobalFunc_10643(&(Local_168.f_646.f_5), "gunshau", "gunsh_trev1", 7, 0, 0, 0);
									Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_52++;
								}
								else if (Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_52 == 1)
								{
									GlobalFunc_10643(&(Local_168.f_646.f_5), "gunshau", "gunsh_trev2", 7, 0, 0, 0);
									Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_52++;
								}
								else if (Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_52 == 2)
								{
									GlobalFunc_10643(&(Local_168.f_646.f_5), "gunshau", "gunsh_trev3", 7, 0, 0, 0);
									Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_52++;
								}
								else if (Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_52 == 3)
								{
									GlobalFunc_10643(&(Local_168.f_646.f_5), "gunshau", "gunsh_trev4", 7, 0, 0, 0);
									Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_52++;
								}
								else if (Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_52 == 4)
								{
									GlobalFunc_10643(&(Local_168.f_646.f_5), "gunshau", "gunsh_trev5", 7, 0, 0, 0);
									Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_52++;
								}
								iLocal_1025 = 1;
							}
							else
							{
								AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_168.f_12, "SHOP_GREET_TREVOR", "SPEECH_PARAMS_FORCE", 1);
							}
							break;
					}
					break;
				
				case 1:
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_168.f_12, "SHOP_GREET", "SPEECH_PARAMS_FORCE", 1);
					break;
				
				case 2:
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_168.f_12, "SHOP_SHOOTING", "SPEECH_PARAMS_FORCE", 0);
					break;
				
				case 3:
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_168.f_12, "SHOP_NO_WEAPON", "SPEECH_PARAMS_FORCE", 0);
					break;
				
				case 4:
					if ((GlobalFunc_8354() == 1 && GlobalFunc_230(43)) && Local_168 == 28)
					{
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_168.f_12, "SHOP_BANTER_FRANKLIN", "SPEECH_PARAMS_FORCE", 1);
					}
					else if ((GlobalFunc_8354() == 2 && GlobalFunc_230(63)) && Local_168 == 29)
					{
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_168.f_12, "SHOP_BANTER_TREVOR", "SPEECH_PARAMS_FORCE", 1);
					}
					else
					{
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_168.f_12, "SHOP_BANTER", "SPEECH_PARAMS_FORCE", 1);
					}
					break;
				
				case 5:
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_168.f_12, "SHOP_BROWSE_MELEE", "SPEECH_PARAMS_FORCE", 1);
					break;
				
				case 6:
					if ((GlobalFunc_8354() == 1 && GlobalFunc_230(43)) && Local_168 == 28)
					{
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_168.f_12, "SHOP_BROWSE_FRANKLIN", "SPEECH_PARAMS_FORCE", 1);
					}
					else if ((GlobalFunc_8354() == 2 && GlobalFunc_230(63)) && Local_168 == 29)
					{
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_168.f_12, "SHOP_BROWSE_TREVOR", "SPEECH_PARAMS_FORCE", 1);
					}
					else
					{
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_168.f_12, "SHOP_BROWSE_GUN", "SPEECH_PARAMS_FORCE", 1);
					}
					break;
				
				case 7:
					if ((GlobalFunc_8354() == 1 && GlobalFunc_230(43)) && Local_168 == 28)
					{
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_168.f_12, "SHOP_BROWSE_FRANKLIN", "SPEECH_PARAMS_FORCE", 1);
					}
					else if ((GlobalFunc_8354() == 2 && GlobalFunc_230(63)) && Local_168 == 29)
					{
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_168.f_12, "SHOP_BROWSE_TREVOR", "SPEECH_PARAMS_FORCE", 1);
					}
					else
					{
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_168.f_12, "SHOP_BROWSE", "SPEECH_PARAMS_FORCE", 1);
					}
					break;
				
				case 8:
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_168.f_12, "SHOP_BROWSE_THROWN", "SPEECH_PARAMS_FORCE", 1);
					break;
				
				case 9:
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_168.f_12, "SHOP_BROWSE_BIG", "SPEECH_PARAMS_FORCE", 1);
					break;
				
				case 10:
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_168.f_12, "SHOP_BROWSE_ARMOUR", "SPEECH_PARAMS_FORCE", 1);
					break;
				
				case 11:
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_168.f_12, "SHOP_SELL", "SPEECH_PARAMS_FORCE", 1);
					break;
				
				case 12:
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_168.f_12, "SHOP_OUT_OF_STOCK", "SPEECH_PARAMS_FORCE", 1);
					break;
				
				case 13:
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_168.f_12, "SHOP_GOODBYE", "SPEECH_PARAMS_FORCE", 1);
					break;
				
				case 14:
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_168.f_12, "SHOP_NO_COPS", "SPEECH_PARAMS_FORCE", 1);
					break;
				
				case 15:
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_168.f_12, "SHOP_REMOVE_VEHICLE", "SPEECH_PARAMS_FORCE", 1);
					break;
				
				case 16:
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_168.f_12, "SHOP_GREET_SPECIAL", "SPEECH_PARAMS_FORCE", 1);
					break;
				
				case 17:
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_168.f_12, "SHOP_SPECIAL_DISCOUNT", "SPEECH_PARAMS_FORCE", 1);
					break;
				
				default:
					break;
			}
			GlobalFunc_2503(&(Local_168.f_646));
		}
	}
}















int func_815()//Position - 0x66423
{
	int iVar0;
	
	if (GlobalFunc_5785(1))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
		{
			if (iVar0 != 0 && iVar0 != -61829581)
			{
				if (((((((((WEAPON::GET_WEAPONTYPE_GROUP(iVar0) == joaat("GROUP_PISTOL") || WEAPON::GET_WEAPONTYPE_GROUP(iVar0) == joaat("GROUP_SMG")) || WEAPON::GET_WEAPONTYPE_GROUP(iVar0) == joaat("GROUP_RIFLE")) || WEAPON::GET_WEAPONTYPE_GROUP(iVar0) == joaat("GROUP_MG")) || WEAPON::GET_WEAPONTYPE_GROUP(iVar0) == joaat("GROUP_SHOTGUN")) || WEAPON::GET_WEAPONTYPE_GROUP(iVar0) == joaat("GROUP_SNIPER")) || WEAPON::GET_WEAPONTYPE_GROUP(iVar0) == joaat("GROUP_HEAVY")) || WEAPON::GET_WEAPONTYPE_GROUP(iVar0) == joaat("GROUP_THROWN")) || WEAPON::GET_WEAPONTYPE_GROUP(iVar0) == 88899580) || WEAPON::GET_WEAPONTYPE_GROUP(iVar0) == joaat("GROUP_STUNGUN"))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}








void func_823()//Position - 0x66633
{
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_1236 = 1;
		return;
	}
	if (iLocal_1236 && Local_168.f_7)
	{
		iLocal_1236 = 0;
		Local_168.f_12.f_17 = 0;
		GlobalFunc_2460("Player has returned for some more fighting", -1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_168.f_12) && !PED::IS_PED_INJURED(Local_168.f_12))
	{
		if (!Local_168.f_12.f_17)
		{
			if (func_319(1))
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(Local_168.f_12, joaat("weapon_assaultshotgun"), 0))
					{
						WEAPON::GIVE_WEAPON_TO_PED(Local_168.f_12, joaat("weapon_assaultshotgun"), -1, 0, 0);
						WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(Local_168.f_12, 0);
						PED::SET_PED_COMBAT_MOVEMENT(Local_168.f_12, 1);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_168.f_12, ENTITY::GET_ENTITY_COORDS(Local_168.f_12, 1), 3f, 0, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_168.f_12, 0);
					}
				}
				PED::SET_PED_CONFIG_FLAG(Local_168.f_12, 185, 0);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_168.f_12, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_168.f_12, 5, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_168.f_12, 23, 1);
				if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_168.f_12, 1), 30f, 1)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && Local_168.f_7))
				{
					GlobalFunc_2460("Telling shop staff to attack THE PLAYER", -1);
					if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						PED::SET_PED_COMBAT_MOVEMENT(Local_168.f_12, 0);
					}
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_168.f_12, -2065892691);
					if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || Local_90.f_3 == PLAYER::PLAYER_ID())
					{
						TASK::CLEAR_PED_TASKS(Local_168.f_12);
						TASK::TASK_COMBAT_PED(Local_168.f_12, PLAYER::PLAYER_PED_ID(), 67108864, 16);
					}
					else if (!PED::IS_PED_IN_COMBAT(Local_168.f_12, 0))
					{
						TASK::TASK_AIM_GUN_AT_ENTITY(Local_168.f_12, PLAYER::PLAYER_PED_ID(), -1, 0);
					}
					else
					{
						GlobalFunc_2460("No task for the gun shop keeper", -1);
					}
				}
				else
				{
					GlobalFunc_2460("Telling shop staff to attack SOMEONE", -1);
					TASK::CLEAR_PED_TASKS(Local_168.f_12);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 1862763509, iLocal_159);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_159, 1862763509);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_168.f_12, 0);
				}
				PED::SET_PED_KEEP_TASK(Local_168.f_12, 1);
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_168.f_12, "GENERIC_INSULT_HIGH", "SPEECH_PARAMS_FORCE", 1);
				Local_168.f_12.f_17 = 1;
			}
		}
	}
}

void func_824(int iParam0, var uParam1, int iParam2)//Position - 0x66830
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	
	if (iParam0->f_11 == 4)
	{
		if (iParam2 == 0)
		{
			PAD::SET_INPUT_EXCLUSIVE(2, 201);
		}
		PAD::SET_INPUT_EXCLUSIVE(2, 202);
		PAD::SET_INPUT_EXCLUSIVE(2, 188);
		PAD::SET_INPUT_EXCLUSIVE(2, 187);
		PAD::SET_INPUT_EXCLUSIVE(2, 189);
		PAD::SET_INPUT_EXCLUSIVE(2, 190);
		if (Global_68505)
		{
			PAD::DISABLE_CONTROL_ACTION(2, 201, 1);
			PAD::DISABLE_CONTROL_ACTION(2, 202, 1);
			PAD::DISABLE_CONTROL_ACTION(2, 188, 1);
			PAD::DISABLE_CONTROL_ACTION(2, 187, 1);
			PAD::DISABLE_CONTROL_ACTION(2, 189, 1);
			PAD::DISABLE_CONTROL_ACTION(2, 190, 1);
		}
	}
	else if (uParam1->f_30)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam1->f_29, 1500)))
			{
				PAD::SET_INPUT_EXCLUSIVE(2, 202);
				PAD::DISABLE_CONTROL_ACTION(0, 25, 0);
			}
			else
			{
				uParam1->f_30 = 0;
			}
		}
		else if ((MISC::GET_GAME_TIMER() - uParam1->f_28) < 1500)
		{
			PAD::SET_INPUT_EXCLUSIVE(2, 202);
			PAD::DISABLE_CONTROL_ACTION(0, 25, 0);
		}
		else
		{
			uParam1->f_30 = 0;
		}
	}
	if (((((iParam0->f_7 && *iParam0 != 21) && !GlobalFunc_1546(15f)) && !GlobalFunc_1157(64)) && !GlobalFunc_8559(*iParam0)) && !GlobalFunc_8558(*iParam0))
	{
		if (GlobalFunc_5361(PLAYER::PLAYER_ID(), 0) && GlobalFunc_330(*iParam0) == 3)
		{
			return;
		}
		if (!GlobalFunc_331())
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
			{
				if (iVar0 != joaat("object"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
					{
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
				}
			}
		}
		bVar1 = true;
		iVar2 = GlobalFunc_2508(*iParam0, 0);
		if (iVar2 != 225)
		{
			Var3 = { GlobalFunc_511(iVar2) };
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1) < 1.5f)
			{
				bVar1 = false;
			}
		}
		if (bVar1)
		{
			PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, 1);
		}
		if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
		}
		if (GlobalFunc_330(*iParam0) == 3)
		{
			HUD::_HUD_WEAPON_WHEEL_IGNORE_SELECTION();
		}
		else
		{
			PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
		}
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1.35f);
		PAD::DISABLE_CONTROL_ACTION(0, 157, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 158, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 159, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 160, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 161, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 162, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 163, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 164, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 165, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 14, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 15, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 16, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 17, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 53, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 54, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 140, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 141, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 142, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 143, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 143, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 47, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 38, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 69, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 70, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 68, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 92, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 99, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 115, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 46, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 25, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 36, 0);
	}
	if (!iParam0->f_7)
	{
		if ((*iParam0 == 28 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 15.0545f, -1115.276f, 28.23367f, 18.64721f, -1116.584f, 30.60867f, 2.1875f, 0, 1, 0)) || (*iParam0 == 38 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 813.5249f, -2147.429f, 27.93063f, 809.9389f, -2147.442f, 30.1772f, 2.1875f, 0, 1, 0)))
		{
			if (((!GlobalFunc_1546(15f) && !GlobalFunc_1157(64)) && !GlobalFunc_8559(*iParam0)) && !GlobalFunc_8558(*iParam0))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1.35f);
			}
		}
	}
}






void func_830(var uParam0, var uParam1)//Position - 0x66CBC
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	if (uParam0->f_9)
	{
		if (!uParam0->f_96)
		{
			if ((GlobalFunc_7782(*uParam0, 12, 1) || GlobalFunc_7782(*uParam0, 13, 1)) || GlobalFunc_7782(*uParam0, 2, 1))
			{
				uParam0->f_96 = 1;
			}
		}
		if (uParam0->f_11 != 6 && !MISC::IS_BIT_SET(Global_90014.f_1267[*uParam0], 11))
		{
			if (!GlobalFunc_8555(*uParam0) || (((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || uParam0->f_12.f_15) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_12)) && PED::IS_PED_INJURED(uParam0->f_12)))
			{
				if (uParam0->f_11 == 4)
				{
					uParam1->f_31 = 8;
				}
				else
				{
					uParam0->f_11 = 6;
				}
			}
			if (uParam0->f_11 == 6)
			{
				GlobalFunc_2462();
			}
		}
		if (uParam0->f_11 == 6)
		{
			func_728(uParam0);
			if (!uParam0->f_1)
			{
				if (uParam0->f_3 != -1)
				{
					GlobalFunc_5420(&(uParam0->f_3));
				}
				bVar0 = false;
				bVar1 = false;
				bVar2 = false;
				if (uParam0->f_7 || ((GlobalFunc_8560(*uParam0) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && GlobalFunc_330(*uParam0) != 4))
				{
					bVar1 = true;
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if ((!GlobalFunc_2505(*uParam0) || !GlobalFunc_7782(*uParam0, 0, 0)) || GlobalFunc_1117())
					{
						bVar0 = true;
					}
				}
				else if (!GlobalFunc_2504(*uParam0) || !GlobalFunc_7782(*uParam0, 0, 0))
				{
					bVar0 = true;
				}
				if (!bVar0)
				{
					if ((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || ((uParam0->f_7 && !uParam0->f_8) && GlobalFunc_330(*uParam0) == 3))
					{
						bVar0 = true;
					}
				}
				if (!bVar0)
				{
					if (!uParam0->f_7)
					{
						if (GlobalFunc_7782(*uParam0, 0, 1) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !GlobalFunc_330(*uParam0) == 4))
						{
							bVar0 = true;
						}
						if (!bVar0)
						{
							fVar3 = 2.5f;
							if (*uParam0 == 9)
							{
								fVar3 = 4f;
							}
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								fVar3 = 7.5f;
							}
							fVar4 = GlobalFunc_2499(*uParam0);
							if (fVar4 > fVar3)
							{
								bVar0 = true;
							}
						}
					}
					else if (!uParam0->f_8 && GlobalFunc_330(*uParam0) == 3)
					{
						bVar0 = true;
					}
				}
				if (GlobalFunc_8559(*uParam0))
				{
					bVar0 = true;
					bVar1 = true;
				}
				if (*uParam0 == 22 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("family6")) != 0)
				{
					bVar2 = true;
					if (!bVar0)
					{
						bVar0 = true;
					}
				}
				if (bVar0)
				{
					GlobalFunc_2462();
				}
				else if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || GlobalFunc_2502("SHOP_CLOSED", GlobalFunc_1988(*uParam0)))
				{
					GlobalFunc_5802("SHOP_CLOSED", GlobalFunc_1988(*uParam0));
				}
				if (!bVar2)
				{
					if (bVar1)
					{
						if (GlobalFunc_5803(*uParam0))
						{
							func_769(*uParam0, 0, 1);
						}
						func_769(*uParam0, 0, 0);
					}
					else
					{
						func_769(*uParam0, 1, 0);
					}
				}
			}
			if (GlobalFunc_5785(1))
			{
				if (Global_90014.f_62[*uParam0])
				{
					if ((uParam0->f_96 && !GlobalFunc_6722(PLAYER::PLAYER_ID(), 1)) && !GlobalFunc_8560(*uParam0))
					{
						GlobalFunc_8591(*uParam0);
					}
				}
				else if ((((((uParam0->f_96 && !GlobalFunc_39(11)) && !GlobalFunc_39(9)) && !GlobalFunc_39(0)) && !GlobalFunc_39(3)) && !MISC::IS_BIT_SET(Global_90014.f_1267[*uParam0], 1)) && !MISC::IS_BIT_SET(Global_90014.f_1267[*uParam0], 2))
				{
					if (GlobalFunc_330(*uParam0) == 3)
					{
						GlobalFunc_8591(*uParam0);
					}
					else if (!uParam0->f_7 && GlobalFunc_2499(*uParam0) > 50f)
					{
						GlobalFunc_8591(*uParam0);
					}
				}
			}
		}
	}
}







void func_837(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x67356
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	
	if ((((uParam0->f_9 && !uParam0->f_1) && GlobalFunc_5785(1)) && !GlobalFunc_8560(*uParam0)) && !GlobalFunc_8562(*uParam0))
	{
		bVar0 = false;
		bVar1 = false;
		iVar2 = GlobalFunc_330(*uParam0);
		Var3 = { GlobalFunc_546(*uParam0) };
		if ((GlobalFunc_6447(uParam0->f_12) || GlobalFunc_6447(iParam2)) || (Global_68245 == 0 && (MISC::IS_BULLET_IN_AREA(Var3, 5f, 0) || MISC::IS_PROJECTILE_IN_AREA(Var3 - Vector(2.5f, 2.5f, 2.5f), Var3 + Vector(2.5f, 2.5f, 2.5f), 1))))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				*uParam1 = PLAYER::PLAYER_ID();
			}
			bVar0 = true;
			bVar1 = true;
		}
		if (FIRE::GET_CLOSEST_FIRE_POS(&Var6, GlobalFunc_546(*uParam0)))
		{
			if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Var6))
			{
				bVar0 = true;
				bVar1 = true;
			}
		}
		if (uParam0->f_7 && !bVar1)
		{
			if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && uParam0->f_11 == 4) && GlobalFunc_330(*uParam0) == 4)
			{
			}
			else if (((iVar2 != 4 && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && (*uParam0 != 21 || (*uParam0 == 21 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uParam0->f_12, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 2.5f))) && (iVar2 != 2 || (iVar2 == 2 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uParam0->f_12, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 2.5f)))
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					*uParam1 = PLAYER::PLAYER_ID();
				}
				bVar1 = true;
			}
			else if ((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && !GlobalFunc_8561(*uParam0)) && !INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == MISC::GET_HASH_KEY("V_7_ShootRm"))
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					*uParam1 = PLAYER::PLAYER_ID();
				}
				bVar0 = true;
				bVar1 = true;
			}
			else if (GlobalFunc_5805())
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					*uParam1 = PLAYER::PLAYER_ID();
				}
				bVar0 = true;
				bVar1 = true;
			}
			else if ((GlobalFunc_1546(-1082130432) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) && iVar2 != 4)
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					*uParam1 = PLAYER::PLAYER_ID();
				}
				bVar1 = true;
			}
			else if ((uParam0->f_11 > 0 && (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || uParam0->f_12.f_15)) && (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_12) || PED::IS_PED_INJURED(uParam0->f_12)))
			{
				bVar1 = true;
			}
		}
		else if ((((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && uParam0->f_11 > 0) && uParam0->f_11 != 4) && uParam0->f_12.f_15) && (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12) && PED::IS_PED_INJURED(uParam0->f_12)))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			GlobalFunc_8592(*uParam0, 1);
			if (bVar0)
			{
				if ((PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && iVar2 != 3)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				}
			}
			switch (iVar2)
			{
				case 3:
					break;
				
				default:
					GlobalFunc_6446(iParam2);
					GlobalFunc_6446(iParam3);
					GlobalFunc_6446(uParam0->f_12);
					break;
				}
			}
	}
}



















void func_856(var uParam0)//Position - 0x67C8E
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_90))
		{
			*uParam0 = NETWORK::NET_TO_PED(Local_90);
			uParam0->f_14 = 1;
		}
		else
		{
			*uParam0 = 0;
		}
		uParam0->f_15 = Local_90.f_2;
	}
}



void func_859(var uParam0)//Position - 0x67D10
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	struct<4> Var44;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	
	uParam0->f_25 = 0;
	uParam0->f_51 = 0;
	iVar1 = 0;
	iVar2 = 11;
	iVar0 = 0;
	while (iVar0 < 24)
	{
		uParam0->f_52[iVar0] = 0;
		uParam0->f_77[iVar0] = 0;
		uParam0->f_26[iVar0] = -1;
		(*uParam0)[iVar0] = joaat("object");
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			switch (iVar0)
			{
				case 0:
					iVar66 = joaat("weapon_sawnoffshotgun");
					break;
				
				case 1:
					iVar66 = joaat("weapon_bullpupshotgun");
					break;
				
				case 2:
					iVar66 = joaat("weapon_pistol50");
					break;
				
				case 3:
					iVar66 = joaat("weapon_hammer");
					break;
			}
		}
		else
		{
			switch (iVar0)
			{
				case 0:
					iVar66 = joaat("weapon_assaultsmg");
					break;
				
				case 1:
					iVar66 = joaat("weapon_bullpupshotgun");
					break;
				
				case 2:
					iVar66 = joaat("weapon_pistol50");
					break;
				
				case 3:
					iVar66 = joaat("weapon_hammer");
					break;
				}
		}
		if (GlobalFunc_5102(iVar66))
		{
			(*uParam0)[uParam0->f_25] = iVar66;
			uParam0->f_25++;
			iVar1++;
			if (iVar1 >= 6)
			{
				iVar2++;
				iVar1 = 0;
			}
		}
		iVar0++;
	}
	iVar3 = 0;
	while (iVar3 < FILES::GET_NUM_DLC_WEAPONS())
	{
		if (FILES::GET_DLC_WEAPON_DATA(iVar3, &Var5))
		{
			iVar66 = Var5.f_1;
			if (((((iVar66 != 0 && GlobalFunc_5102(iVar66)) && !func_885(uParam0, iVar66)) && uParam0->f_25 < 24) && !func_884(iVar66)) && !GlobalFunc_222(iVar66))
			{
				(*uParam0)[uParam0->f_25] = iVar66;
				uParam0->f_25++;
				iVar1++;
				if (iVar1 >= 6)
				{
					iVar2++;
					iVar1 = 0;
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_875(iVar66, 1, 0, 0);
				}
				else
				{
					GlobalFunc_9223(0, iVar66, 1, 0);
					GlobalFunc_9223(1, iVar66, 1, 0);
					GlobalFunc_9223(2, iVar66, 1, 0);
				}
				iVar4 = 0;
				while (iVar4 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar3))
				{
					if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar3, iVar4, &Var44))
					{
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							func_862(Var44.f_3, iVar66, 1, 0, 0);
						}
						else
						{
							GlobalFunc_8001(0, iVar66, Var44.f_3, 1);
							GlobalFunc_8001(1, iVar66, Var44.f_3, 1);
							GlobalFunc_8001(2, iVar66, Var44.f_3, 1);
						}
					}
					iVar4++;
				}
			}
		}
		iVar3++;
	}
	if ((GlobalFunc_5102(-61829581) && uParam0->f_25 < 23) && !func_884(-61829581))
	{
		(*uParam0)[uParam0->f_25] = -61829581;
		uParam0->f_25++;
		iVar1++;
		if (iVar1 >= 6)
		{
			iVar2++;
			iVar1 = 0;
		}
	}
	if (NETWORK::IS_COMMERCE_DATA_VALID())
	{
		iVar68 = NETWORK::GET_NUM_COMMERCE_ITEMS();
		iVar67 = 0;
		while (iVar67 < iVar68)
		{
			iVar70 = NETWORK::GET_COMMERCE_ITEM_NUM_CATS(iVar67);
			iVar69 = 0;
			while (iVar69 < iVar70)
			{
				if (MISC::GET_HASH_KEY(NETWORK::GET_COMMERCE_ITEM_CAT(iVar67, iVar69)) == MISC::GET_HASH_KEY("Weapons"))
				{
					iVar71 = MISC::GET_HASH_KEY(NETWORK::GET_COMMERCE_ITEM_ID(iVar67));
					if (!GlobalFunc_5102(iVar71) && !func_885(uParam0, iVar66))
					{
						if (uParam0->f_51 < 23)
						{
							uParam0->f_26[uParam0->f_51] = iVar67;
							uParam0->f_77[uParam0->f_51] = iVar2;
							uParam0->f_52[uParam0->f_51] = iVar1;
							uParam0->f_51++;
							iVar1++;
							if (iVar1 >= 6)
							{
								iVar2++;
								iVar1 = 0;
							}
						}
					}
				}
				iVar69++;
			}
			iVar67++;
		}
	}
}



void func_862(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x682D6
{
	if (bParam2)
	{
		if (!func_483(iParam0, iParam1, -1))
		{
			func_871(iParam0, iParam1, 1);
		}
		if (bParam3)
		{
			if (GlobalFunc_8861(iParam0, iParam1) == 0)
			{
				GlobalFunc_5377(16, GlobalFunc_4978(iParam0, 0), GlobalFunc_6365(iParam0, 0), GlobalFunc_4180(iParam1), GlobalFunc_4179(iParam1), -1, 0, 0, 0, -1);
				GlobalFunc_8216(iParam0, iParam1, 1);
			}
		}
		if (bParam4)
		{
			func_474(iParam0, iParam1, 1);
		}
	}
	else if (func_483(iParam0, iParam1, -1))
	{
		func_871(iParam0, iParam1, 0);
	}
}









void func_871(int iParam0, int iParam1, bool bParam2)//Position - 0x68900
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_484(iParam0, iParam1, -1);
	iVar1 = GlobalFunc_5846(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (bParam2)
		{
			MISC::SET_BIT(&iVar0, GlobalFunc_299(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, GlobalFunc_299(iVar1));
		}
		GlobalFunc_6720(GlobalFunc_7465(iParam0, iParam1), iVar0, -1, 1);
	}
}




void func_875(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x68B01
{
	if (bParam1)
	{
		if (!func_547(iParam0, -1, 0))
		{
			func_883(iParam0, 1);
			if ((GlobalFunc_3() == 0 || GlobalFunc_59() == 0) || (GlobalFunc_3() == 999 && GlobalFunc_59() == 999))
			{
				GlobalFunc_6720(1174, iParam0, -1, 1);
			}
			if (iParam0 == joaat("weapon_sawnoffshotgun") || GlobalFunc_5249(GlobalFunc_7788(PLAYER::PLAYER_ID(), 1), 0) >= 5)
			{
				if (!GlobalFunc_6708(29, -1, -1))
				{
					if (Global_2452975.f_213 == 0)
					{
						Global_2452975.f_213 = 1;
						Global_1327593.f_946 = 0;
					}
				}
			}
		}
		if (bParam2)
		{
			if (GlobalFunc_8845(iParam0) == 0)
			{
				GlobalFunc_5377(15, GlobalFunc_5379(iParam0, 0), GlobalFunc_4181(iParam0), GlobalFunc_4180(iParam0), GlobalFunc_4179(iParam0), -1, 0, 0, 0, -1);
				GlobalFunc_8209(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_652(iParam0, 1);
		}
	}
	else if (func_547(iParam0, -1, 0))
	{
		func_883(iParam0, 0);
	}
}








void func_883(int iParam0, bool bParam1)//Position - 0x69011
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_548(iParam0, -1);
	iVar1 = GlobalFunc_4977(iParam0);
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
		GlobalFunc_6720(GlobalFunc_6912(iParam0), uVar0, -1, 1);
	}
}

int func_884(int iParam0)//Position - 0x69061
{
	switch (iParam0)
	{
		case joaat("weapon_railgun"):
			if (!GlobalFunc_84() || NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				return 1;
			}
			break;
		
		case joaat("weapon_hatchet"):
			if (!GlobalFunc_84())
			{
				return 1;
			}
			break;
		
		case joaat("weapon_gusenberg"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (!Global_262145.f_4937 && !func_543(iParam0, -1, 0))
				{
					return 1;
				}
			}
			break;
		
		case joaat("weapon_musket"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (!Global_262145.f_6114 && !func_543(iParam0, -1, 0))
				{
					return 1;
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("weapon_firework"):
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				return 1;
			}
			else if (Global_262145.f_6122)
			{
				return 1;
			}
			break;
	}
	if (iParam0 == -61829581)
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GlobalFunc_321()) && !Global_262145.f_6123)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_885(var uParam0, int iParam1)//Position - 0x6915E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_25)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_886()//Position - 0x6918B
{
	if (!bLocal_1045)
	{
		TASK::OPEN_SEQUENCE_TASK(&uLocal_160);
		TASK::TASK_PLAY_ANIM(0, sLocal_167, "_neutral_to_idle", 8f, -8f, -1, 262144, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, sLocal_167, "_idle", 8f, -8f, -1, 262144, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, sLocal_167, "_idle_a", 8f, -8f, -1, 262144, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, sLocal_167, "_idle_b", 8f, -8f, -1, 262144, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, sLocal_167, "_idle", 8f, -8f, -1, 262144, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, sLocal_167, "_idle_a", 8f, -8f, -1, 262144, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, sLocal_167, "_idle", 8f, -8f, -1, 262145, 0, 0, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(uLocal_160);
		TASK::OPEN_SEQUENCE_TASK(&uLocal_161);
		TASK::TASK_PLAY_ANIM(0, sLocal_167, "_greeting", 8f, -8f, -1, 786432, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, sLocal_167, "_idle", 8f, -2f, -1, 786433, 0, 0, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(uLocal_161);
		TASK::OPEN_SEQUENCE_TASK(&uLocal_162);
		TASK::TASK_PLAY_ANIM(0, sLocal_167, "_positive_goodbye", 8f, -8f, -1, 786432, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, sLocal_167, "_idle", 8f, -2f, -1, 786433, 0, 0, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(uLocal_162);
		TASK::OPEN_SEQUENCE_TASK(&uLocal_163);
		TASK::TASK_PLAY_ANIM(0, sLocal_167, "_impatient_a", 8f, -8f, -1, 786432, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, sLocal_167, "_idle", 8f, -2f, -1, 786433, 0, 0, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(uLocal_163);
		TASK::OPEN_SEQUENCE_TASK(&uLocal_164);
		TASK::TASK_PLAY_ANIM(0, sLocal_167, "_impatient_b", 8f, -8f, -1, 786432, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, sLocal_167, "_idle", 8f, -2f, -1, 786433, 0, 0, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(uLocal_164);
		TASK::OPEN_SEQUENCE_TASK(&uLocal_165);
		TASK::TASK_PLAY_ANIM(0, sLocal_167, "_idle_a", 4f, -8f, -1, 786432, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, sLocal_167, "_idle", 8f, -2f, -1, 786433, 0, 0, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(uLocal_165);
		TASK::OPEN_SEQUENCE_TASK(&uLocal_166);
		TASK::TASK_PLAY_ANIM(0, sLocal_167, "_positive_a", 8f, -8f, -1, 786432, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, sLocal_167, "_idle", 8f, -2f, -1, 786433, 0, 0, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(uLocal_166);
		bLocal_1045 = true;
	}
}

int func_887()//Position - 0x69428
{
	sLocal_167 = "random@shop_gunstore";
	STREAMING::REQUEST_ANIM_DICT(sLocal_167);
	if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_167))
	{
		return 1;
	}
	return 0;
}


void func_889()//Position - 0x694A9
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, iLocal_127);
		if (!GlobalFunc_5092(0, -1, 1))
		{
			func_23(0);
		}
		NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_90, 4);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&uLocal_94, 33);
		NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		if (!GlobalFunc_5091())
		{
			func_23(0);
		}
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(66))
	{
		func_23(0);
	}
}





