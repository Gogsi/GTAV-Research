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
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = 0;
	bool bLocal_51 = 0;
	struct<10> Local_52[16];
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	struct<3> Local_217 = { 0, 0, 0 } ;
	struct<3> Local_220 = { 0, 0, 0 } ;
	struct<3> Local_223 = { 0, 0, 0 } ;
	struct<3> Local_226 = { 0, 0, 0 } ;
	struct<3> Local_229 = { 0, 0, 0 } ;
	struct<3> Local_232 = { 0, 0, 0 } ;
	struct<3> Local_235 = { 0, 0, 0 } ;
	struct<3> Local_238 = { 0, 0, 0 } ;
	struct<3> Local_241 = { 0, 0, 0 } ;
	struct<3> Local_244 = { 0, 0, 0 } ;
	struct<3> Local_247 = { 0, 0, 0 } ;
	float fLocal_250 = 0f;
	struct<3> Local_251 = { 0, 0, 0 } ;
	float fLocal_254 = 0f;
	struct<3> Local_255 = { 0, 0, 0 } ;
	struct<3> Local_258 = { 0, 0, 0 } ;
	int iLocal_261 = 0;
	struct<3> Local_262[200];
	struct<3> Local_863 = { 0, 0, 0 } ;
	struct<3> Local_866 = { 0, 0, 0 } ;
	float fLocal_869 = 0f;
	struct<3> Local_870 = { 0, 0, 0 } ;
	struct<3> Local_873 = { 0, 0, 0 } ;
	float fLocal_876 = 0f;
	struct<3> Local_877 = { 0, 0, 0 } ;
	struct<3> Local_880 = { 0, 0, 0 } ;
	float fLocal_883 = 0f;
	struct<3> Local_884 = { 0, 0, 0 } ;
	float fLocal_887 = 0f;
	float fLocal_888 = 0f;
	float fLocal_889 = 0f;
	float fLocal_890 = 0f;
	float fLocal_891 = 0f;
	bool bLocal_892 = 0;
	int iLocal_893 = 0;
	bool bLocal_894 = 0;
	int iLocal_895 = 0;
	bool bLocal_896 = 0;
	int iLocal_897 = 0;
	int iLocal_898[3] = { 0, 0, 0 };
	int iLocal_902 = 0;
	bool bLocal_903 = 0;
	int iLocal_904 = 0;
	int iLocal_905 = 0;
	int iLocal_906 = 0;
	int iLocal_907 = 0;
	int iLocal_908 = 0;
	int iLocal_909 = 0;
	int iLocal_910[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_919 = 0;
	int iLocal_920 = 0;
	char* sLocal_921 = NULL;
	char[] cLocal_922[8] = 0;
	char* sLocal_923 = NULL;
	int iLocal_924[4] = { 0, 0, 0, 0 };
	int iLocal_929 = 0;
	int iLocal_930 = 0;
	struct<3> Local_931 = { 0, 0, 0 } ;
	struct<3> Local_934[4];
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = -1;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 1000;
	var uLocal_957 = 1000;
	var uLocal_958 = 0;
	struct<2> Local_959 = { 0, 0 } ;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	int iLocal_990 = 0;
	var uLocal_991 = 0;
	struct<3> Local_992 = { 0, 0, 0 } ;
	struct<3> Local_995 = { 0, 0, 0 } ;
	int iLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	int iLocal_1004 = 0;
	int iLocal_1005 = 0;
	int iLocal_1006 = 0;
	int iLocal_1007 = 0;
	int iLocal_1008 = 0;
	int iLocal_1009 = 0;
	int iLocal_1010 = 0;
	int iLocal_1011 = 0;
	int iLocal_1012 = 0;
	int iLocal_1013 = 0;
	int iLocal_1014[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1020 = 0;
	int iLocal_1021 = 0;
	int iLocal_1022 = 0;
	int iLocal_1023 = 0;
	int iLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	char* sLocal_1027 = NULL;
	char* sLocal_1028 = NULL;
	int iLocal_1029 = 0;
	int iLocal_1030 = 0;
	int iLocal_1031 = 0;
	struct<2> Local_1032 = { 0, 0 } ;
	struct<2> Local_1034 = { 0, 0 } ;
	struct<2> Local_1036 = { 0, 0 } ;
	struct<2> Local_1038 = { 0, 0 } ;
	struct<2> Local_1040 = { 0, 0 } ;
	struct<2> Local_1042 = { 0, 0 } ;
	struct<2> Local_1044 = { 0, 0 } ;
	struct<2> Local_1046 = { 0, 0 } ;
	struct<2> Local_1048 = { 0, 0 } ;
	struct<2> Local_1050 = { 0, 0 } ;
	struct<2> Local_1052 = { 0, 0 } ;
	int iLocal_1054 = 0;
	int iLocal_1055 = 0;
	struct<6> Local_1056 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1062 = 0;
	struct<3> Local_1063 = { 0, 0, 0 } ;
	struct<3> Local_1066 = { 0, 0, 0 } ;
	var uLocal_1069 = 0;
	struct<3> Local_1070 = { 0, 0, 0 } ;
	struct<3> Local_1073 = { 0, 0, 0 } ;
	var uLocal_1076 = 0;
	struct<2> Local_1077[4];
	struct<3> Local_1086[8];
	int iLocal_1111 = 0;
	int iLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = -1;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 1000;
	var uLocal_1123 = 1000;
	var uLocal_1124 = 0;
	int iLocal_1125 = 0;
	int iLocal_1126 = 0;
	int iLocal_1127 = 0;
	int iLocal_1128 = 0;
	float fLocal_1129 = 0f;
	int iLocal_1130 = 0;
	int iLocal_1131 = 0;
	int iLocal_1132 = 0;
	struct<6> Local_1133 = { 0, 0, 0, 0, 0, 0 } ;
	char* sLocal_1139 = NULL;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	char[] cLocal_1145[8] = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	int iLocal_1151 = 0;
	int iLocal_1152 = 0;
	struct<3> Local_1153 = { 0, 0, 0 } ;
	struct<3> Local_1156 = { 0, 0, 0 } ;
	float fLocal_1159 = 0f;
	struct<3> Local_1160 = { 0, 0, 0 } ;
	struct<3> Local_1163 = { 0, 0, 0 } ;
	float fLocal_1166 = 0f;
	struct<3> Local_1167 = { 0, 0, 0 } ;
	struct<3> Local_1170 = { 0, 0, 0 } ;
	float fLocal_1173 = 0f;
	struct<3> Local_1174 = { 0, 0, 0 } ;
	struct<3> Local_1177 = { 0, 0, 0 } ;
	float fLocal_1180 = 0f;
	float fLocal_1181 = 0f;
	struct<3> Local_1182 = { 0, 0, 0 } ;
	float fLocal_1185 = 0f;
	int iLocal_1186 = 0;
	int iLocal_1187 = 0;
	int iLocal_1188 = 0;
	int iLocal_1189 = 0;
	int iLocal_1190 = 0;
	int iLocal_1191 = 0;
	int iLocal_1192 = 0;
	bool bLocal_1193 = 0;
	int iLocal_1194 = 0;
	int iLocal_1195 = 0;
	int iLocal_1196 = 0;
	float fLocal_1197 = 0f;
	float fLocal_1198 = 0f;
	int iLocal_1199[3] = { 0, 0, 0 };
	int iLocal_1203 = 0;
	struct<3> Local_1204 = { 0, 0, 0 } ;
	struct<3> Local_1207 = { 0, 0, 0 } ;
	int iLocal_1210 = 0;
	int iLocal_1211 = 0;
	bool bLocal_1212 = 0;
	int iLocal_1213 = 0;
	int iLocal_1214 = 0;
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
	bLocal_51 = true;
	Local_217 = { -107.54f, -9.03f, 70.67f };
	Local_220 = { 71.4087f, -702.7785f, 31.2297f };
	Local_223 = { -70.5294f, -45.0289f, 62.1148f };
	Local_226 = { 0f, -2.3f, -0.35f };
	Local_229 = { -109.2446f, -8.7791f, 70f };
	Local_232 = { -84.4707f, -22.6341f, 65.3215f };
	Local_235 = { 0f, 0f, 0.7f };
	Local_238 = { 719.09f, -983.13f, 23.14f };
	Local_241 = { 0.08f, 0.07f, -0.005f };
	Local_244 = { 0f, -0.051185f, -20.33697f };
	Local_247 = { 715.2437f, -978.9654f, 23.1143f };
	fLocal_250 = 99.3712f;
	Local_251 = { 709.4145f, -980.8687f, 23.1044f };
	fLocal_254 = 280.8127f;
	Local_255 = { -78.025f, -17.575f, 65.318f };
	Local_258 = { 0f, 0.3f, -18.56f };
	Local_863 = { 111.0968f, -583.676f, 29.4001f };
	Local_866 = { 69.21112f, -698.3458f, 34.40248f };
	fLocal_869 = 27f;
	Local_870 = { 68.08572f, -701.3279f, 30.65333f };
	Local_873 = { 118.5602f, -562.4277f, 38.15651f };
	fLocal_876 = 27f;
	Local_877 = { -66.01379f, -59.91528f, 59.1543f };
	Local_880 = { -48.97403f, 10.51952f, 76.13416f };
	fLocal_883 = 60f;
	Local_884 = { 710.9962f, -979.7601f, 23.1001f };
	fLocal_887 = 223.343f;
	fLocal_888 = 50f;
	fLocal_889 = 340.9176f;
	fLocal_890 = 167.842f;
	fLocal_891 = 69.6488f;
	sLocal_921 = "83QSL722";
	cLocal_922 = "FBS1AUD";
	sLocal_923 = "agencysetup1park2";
	iLocal_929 = joaat("a_m_y_business_01");
	iLocal_930 = joaat("stanier");
	Local_931 = { 0f, -2.6829f, 0.0781f };
	Local_992 = { -107.492f, -9.034f, 69.524f };
	Local_995 = { 0f, 0f, -178f };
	sLocal_1027 = "ah_1_mcs_1";
	sLocal_1028 = "ah_1_int";
	StringCopy(&Local_1056, "", 24);
	Local_1063 = { Vector(34.62743f, -662.9772f, 62.32529f) + Vector(5f, 91.5f, 49.25f) };
	Local_1066 = { Vector(34.62743f, -662.9772f, 62.32529f) - Vector(5f, 91.5f, 49.25f) };
	Local_1070 = { -81.1729f, -94.4853f, -160.997f };
	Local_1073 = { -34.0891f, 28.3163f, 192.107f };
	iLocal_1111 = -1;
	fLocal_1129 = 0f;
	iLocal_1132 = 15000;
	StringCopy(&Local_1133, "", 24);
	Local_1153 = { 110.1114f, -584.3711f, 30.35288f };
	Local_1156 = { 104.6964f, -567.518f, 35.66985f };
	fLocal_1159 = 12f;
	Local_1160 = { 124.0822f, -38.15378f, 66.36127f };
	Local_1163 = { 100.9923f, -11.90827f, 71.92962f };
	fLocal_1166 = 17f;
	Local_1167 = { -28.27966f, 32.39373f, 70.74029f };
	Local_1170 = { -51.27546f, 24.57447f, 76.14353f };
	fLocal_1173 = 17f;
	Local_1174 = { 90.54105f, -482.0891f, 33.69548f };
	Local_1177 = { -58.22495f, -524.615f, 44.39926f };
	fLocal_1180 = 17f;
	fLocal_1197 = 0f;
	Local_1204 = { -110.732f, -6.756f, 70.538f };
	Local_1207 = { 0f, 0f, -105.84f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GlobalFunc_10632();
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1005))
		{
			PED::DELETE_PED(&iLocal_1005);
		}
		func_623();
	}
	MISC::SET_MISSION_FLAG(1);
	if (iLocal_47 != 10)
	{
		func_611();
	}
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_BR1", 0);
		switch (iLocal_47)
		{
			case 0:
				func_600();
				break;
			
			case 1:
				func_595();
				break;
			
			case 2:
				func_575();
				break;
			
			case 3:
				func_531();
				break;
			
			case 4:
				func_523();
				break;
			
			case 5:
				func_466();
				break;
			
			case 6:
				func_83();
				break;
			
			case 12:
				func_64();
				break;
			
			case 13:
				func_35();
				break;
			
			case 10:
				break;
			
			default:
				break;
		}
		if (PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 9) == 1)
		{
			PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(PLAYER::PLAYER_ID(), 1);
		}
		func_34(iLocal_1005);
		if ((func_33(iLocal_1005) && !iLocal_49) && !CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			func_10(Local_1046);
		}
		if (iLocal_49)
		{
			func_7();
			iLocal_49 = 0;
		}
		if (iLocal_47 > 4 && iLocal_47 != 13)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1004))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_1004, 0), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)) > 1000f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_1004))
				{
					PED::DELETE_PED(&iLocal_1004);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1013))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_1013, 0), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)) > 1000f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_1013))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_1013);
				}
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			GlobalFunc_504(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 530);
			GlobalFunc_503(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 531);
		}
		else
		{
			GlobalFunc_504(0, 530);
			GlobalFunc_503(0, 531);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1005))
		{
			if (PED::IS_PED_INJURED(iLocal_1005) || ENTITY::IS_ENTITY_DEAD(iLocal_1005))
			{
				func_10("S1_LESFAIL");
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iLocal_1022))
			{
				PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iLocal_1005, 0);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1007))
		{
			if (PED::IS_PED_INJURED(iLocal_1007) || PED::IS_PED_INJURED(iLocal_1007))
			{
				func_10("CMN_FDIED");
			}
		}
		if (iLocal_47 < 4)
		{
			func_4();
		}
		func_2();
		GlobalFunc_502();
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			if (iLocal_47 == 1 || iLocal_47 == 6)
			{
				func_64();
			}
			else if (iLocal_47 == 3 || iLocal_47 == 4)
			{
				if (!PED::IS_PED_INJURED(iLocal_1006))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1010, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_1006, iLocal_1010, 0))
						{
							TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_1006, iLocal_1010, PLAYER::PLAYER_PED_ID(), 8, 40f, 262144, 20f, 20f, 1);
						}
					}
					if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_1006, 0))
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_1006, PLAYER::PLAYER_PED_ID(), 200f, 20000, 0, 0);
					}
				}
				func_10("S1_JSPOOK");
			}
		}
		SYSTEM::WAIT(0);
	}
}


void func_2()//Position - 0x77D
{
	if (!iLocal_904)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1011, 0))
		{
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_1011, false);
			iLocal_904 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1011))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1011, 0))
		{
			if (iLocal_47 == 6)
			{
				if (!GlobalFunc_367(iLocal_1011, 0, 0, 0) || PED::IS_PED_IN_VEHICLE(iLocal_1005, iLocal_1011, 0))
				{
					if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_1011, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_1011, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_1011, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_1011, 1, 40000))
					{
						func_10("S1_VEHSTUCK");
					}
				}
			}
			else if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_1011, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_1011, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_1011, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_1011, 1, 40000))
			{
				func_10("S1_VEHSTUCK");
			}
		}
		else if (iLocal_47 < 6)
		{
			func_10("CMN_GENDEST");
		}
		else if (!GlobalFunc_367(iLocal_1011, 0, 0, 0) || PED::IS_PED_IN_VEHICLE(iLocal_1005, iLocal_1011, 0))
		{
			func_10("CMN_GENDEST");
		}
	}
}


void func_4()//Position - 0x95C
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1006))
	{
		if (PED::IS_PED_INJURED(iLocal_1006) && iLocal_47 < 6)
		{
			func_10("S1_FAILED_K");
		}
		else
		{
			if (((FIRE::IS_EXPLOSION_IN_AREA(-1, ENTITY::GET_ENTITY_COORDS(iLocal_1006, 0) + Vector(3f, 3f, 3f), ENTITY::GET_ENTITY_COORDS(iLocal_1006, 0) - Vector(3f, 3f, 3f)) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_1006, 0), 6f, 1)) || (PED::IS_PED_FLEEING(iLocal_1006) && !bLocal_50)) || (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_BEING_JACKED(iLocal_1006)))
			{
				func_10("S1_JSPOOK");
			}
			if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) && iLocal_1010 == PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))
			{
				func_10("S1_JSPOOK");
			}
		}
		if (!bLocal_892)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1010))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1010, 0))
				{
					func_10("S1_FAILED_C");
				}
			}
		}
	}
}



void func_7()//Position - 0xABD
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_52[1 /*10*/]) && ENTITY::DOES_ENTITY_EXIST(iLocal_1006))
	{
		if (!PED::IS_PED_INJURED(iLocal_1006))
		{
			GlobalFunc_173(&Local_52, 1, iLocal_1006, "AGENCYJANITOR", 0, 1);
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Local_52[1 /*10*/]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_1006))
	{
		GlobalFunc_200(&Local_52, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_52[2 /*10*/]) && ENTITY::DOES_ENTITY_EXIST(iLocal_1005))
	{
		if (!PED::IS_PED_INJURED(iLocal_1005))
		{
			GlobalFunc_173(&Local_52, 2, iLocal_1005, "LESTER", 0, 1);
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Local_52[2 /*10*/]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_1005))
	{
		GlobalFunc_200(&Local_52, 2);
	}
}



void func_10(char* sParam0)//Position - 0xC29
{
	AUDIO::TRIGGER_MUSIC_EVENT("AH1_FAIL");
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			if (CAM::DOES_CAM_EXIST(Local_959) && CAM::IS_CAM_RENDERING(Local_959))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			}
			if (CAM::DOES_CAM_EXIST(uLocal_1003) && CAM::IS_CAM_RENDERING(uLocal_1003))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			}
		}
	}
	GlobalFunc_4948(&uLocal_947, 0, 0);
	GlobalFunc_10835(sParam0);
	while (!GlobalFunc_145())
	{
		SYSTEM::WAIT(0);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		if (func_12(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -105.0312f, -8.6584f, 69.5201f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 259.2958f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-252283844, 0f, 1, 0);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-252283844, 1, 1, 0);
		}
	}
	if ((MISC::ARE_STRINGS_EQUAL(sParam0, "S1_JSPOOK") && ENTITY::DOES_ENTITY_EXIST(iLocal_1006)) && (PED::IS_PED_INJURED(iLocal_1006) || ENTITY::IS_ENTITY_DEAD(iLocal_1006)))
	{
		sParam0 = "S1_FAILED_K";
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1005))
	{
		PED::DELETE_PED(&iLocal_1005);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1004))
	{
		PED::DELETE_PED(&iLocal_1004);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1007))
	{
		PED::DELETE_PED(&iLocal_1007);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1006))
	{
		PED::DELETE_PED(&iLocal_1006);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1020))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_1020);
	}
	GlobalFunc_505(3, 0, 0);
	func_623();
}


int func_12(int iParam0)//Position - 0xDF1
{
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -112.6861f, -14.27577f, 69.53925f, -109.5499f, -5.690081f, 72.7827f, 6f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}





















int func_33(int iParam0)//Position - 0x1F69
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iParam0, 0), 1) > 150f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_34(int iParam0)//Position - 0x1FA7
{
	if (!PED::IS_PED_INJURED(iParam0) && PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0, 0);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iParam0, 0);
	}
}

void func_35()//Position - 0x1FD3
{
	var uVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_1006))
	{
		switch (iLocal_907)
		{
			case 0:
				if (!PED::IS_PED_INJURED(iLocal_1004))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_1004, -2065892691);
					TASK::CLEAR_PED_TASKS(iLocal_1004);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1004, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1004, 17, 1);
				}
				GlobalFunc_4956();
				HUD::CLEAR_PRINTS();
				TASK::CLEAR_PED_TASKS(iLocal_1006);
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
				if ((func_12(iLocal_1006) && !func_12(PLAYER::PLAYER_PED_ID())) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_1006, 0), Local_217) > 1f)
				{
					TASK::TASK_COWER(iLocal_1006, -1);
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1006, -99.23925f, -10.32197f, 65.75197f, -107.062f, -7.839327f, 72.58364f, 2.75f, 0, 1, 0) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_1006, 0), Local_217) < SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Local_217))
				{
					GlobalFunc_10617(61, 0);
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -111.5814f, -11.7526f, 69.5196f, 3f, -1, 0.25f, 0, 40000f);
					TASK::TASK_COWER(0, -1);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_1006, uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
				}
				else
				{
					if (bLocal_51)
					{
					}
					TASK::TASK_REACT_AND_FLEE_PED(iLocal_1006, PLAYER::PLAYER_PED_ID());
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1006, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1006, 17, 1);
				}
				SYSTEM::SETTIMERA(0);
				iLocal_907++;
				break;
			
			case 1:
				if (!GlobalFunc_111() && SYSTEM::TIMERA() > 1500)
				{
					func_10("S1_JSPOOK");
				}
				break;
		}
	}
	else
	{
		func_10("S1_FAILED_K");
	}
}





























void func_64()//Position - 0x6426
{
	if (iLocal_47 != 12)
	{
		iLocal_48 = iLocal_47;
		iLocal_47 = 12;
		HUD::CLEAR_PRINTS();
		func_82();
		Local_1044.f_1 = 0;
		iLocal_1127 = 0;
		if ((GlobalFunc_111() && iLocal_1054) && !iLocal_1055)
		{
			iLocal_1055 = 1;
			Local_1056 = { GlobalFunc_514() };
		}
		GlobalFunc_4956();
	}
	if (!GlobalFunc_111() || MISC::GET_PROFILE_SETTING(203) == 0)
	{
		func_79(&Local_1044);
	}
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Local_884) > 75f)
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(763780711) != 1 && OBJECT::DOOR_SYSTEM_GET_DOOR_PENDING_STATE(763780711) != 1)
		{
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(763780711, 0f, 1, 0);
			GlobalFunc_10617(63, 1);
		}
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-826072862) != 1 && OBJECT::DOOR_SYSTEM_GET_DOOR_PENDING_STATE(-826072862) != 1)
		{
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-826072862, 0f, 1, 0);
			GlobalFunc_10617(62, 1);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1011, 0))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1011, 0))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_1002))
			{
				HUD::REMOVE_BLIP(&uLocal_1002);
			}
			if (!iLocal_1127)
			{
				if (iLocal_48 == 1)
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)
					{
						if (GlobalFunc_10618(&Local_52, cLocal_922, "FBS1_WANT", 8, 0, 0, 0))
						{
							iLocal_1127 = 1;
						}
					}
				}
				else
				{
					iLocal_1127 = 1;
				}
			}
		}
		else if (!PED::IS_PED_INJURED(iLocal_1005) && PED::IS_PED_IN_VEHICLE(iLocal_1005, iLocal_1011, 0))
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_1002))
			{
				uLocal_1002 = GlobalFunc_6783(iLocal_1011, 0, 0);
			}
		}
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(763780711) == 1 || OBJECT::DOOR_SYSTEM_GET_DOOR_PENDING_STATE(763780711) == 1)
		{
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(763780711, 0f, 1, 0);
			GlobalFunc_10617(63, 0);
		}
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-826072862) == 1 || OBJECT::DOOR_SYSTEM_GET_DOOR_PENDING_STATE(-826072862) == 1)
		{
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-826072862, 0f, 1, 0);
			GlobalFunc_10617(62, 0);
		}
		iLocal_47 = iLocal_48;
		HUD::CLEAR_PRINTS();
	}
}















void func_79(var uParam0)//Position - 0x6D7B
{
	if (!uParam0->f_1)
	{
		GlobalFunc_164(*uParam0, 7500, 1);
		uParam0->f_1 = 1;
	}
}



void func_82()//Position - 0x6E60
{
	HUD::REMOVE_BLIP(&uLocal_1002);
	HUD::REMOVE_BLIP(&uLocal_1000);
	HUD::REMOVE_BLIP(&uLocal_1001);
}

void func_83()//Position - 0x6E7D
{
	var uVar0;
	int iVar1;
	
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Local_884) < 1000f)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	}
	if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(763780711) == 1 || OBJECT::DOOR_SYSTEM_GET_DOOR_PENDING_STATE(763780711) == 1)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(763780711, 0f, 1, 0);
		GlobalFunc_10617(63, 0);
	}
	if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-826072862) == 1 || OBJECT::DOOR_SYSTEM_GET_DOOR_PENDING_STATE(-826072862) == 1)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-826072862, 0f, 1, 0);
		GlobalFunc_10617(62, 0);
	}
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 716.1905f, -967.2184f, 31.58545f, 8f, 9f, 2.5f, 0, 1, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
	}
	switch (iLocal_907)
	{
		case 0:
			Local_1032.f_1 = 0;
			iLocal_1214 = 0;
			func_465(1);
			CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
			if (iLocal_49)
			{
				PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 9, 1, 1);
				STREAMING::REQUEST_COLLISION_AT_COORD(Local_217);
				if (INTERIOR::IS_VALID_INTERIOR(iLocal_1021))
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_1021);
					INTERIOR::CAP_INTERIOR(iLocal_1021, 1);
				}
				if (GlobalFunc_188() && GlobalFunc_199())
				{
					GlobalFunc_10627(&iLocal_1011, Local_223, fLocal_890, 0, 0, 0, 0, 1, joaat("asterope"), 0, 145);
				}
				while (!func_432(Local_223, fLocal_890, 0, 1))
				{
					SYSTEM::WAIT(0);
				}
				while (!ENTITY::DOES_ENTITY_EXIST(iLocal_1013))
				{
					func_431();
					SYSTEM::WAIT(0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1004))
				{
					PED::DELETE_PED(&iLocal_1004);
				}
				if (!GlobalFunc_188())
				{
					while (!ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(PLAYER::PLAYER_PED_ID()))
					{
						SYSTEM::WAIT(0);
					}
					STREAMING::SET_FOCUS_POS_AND_VEL(-105.0312f, -8.6584f, 69.5201f, 0f, 0f, 0f);
					STREAMING::NEW_LOAD_SCENE_START(-105.0312f, -8.6584f, 69.5201f, SYSTEM::COS((259.2958f + 90f)), SYSTEM::SIN((259.2958f + 90f)), 0f, 25f, 0);
					SYSTEM::SETTIMERA(0);
					while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() && SYSTEM::TIMERA() < 10000)
					{
						SYSTEM::WAIT(0);
					}
					STREAMING::CLEAR_FOCUS();
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 1, 1, 0);
				PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -105.0312f, -8.6584f, 69.5201f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 259.2958f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				func_426();
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_1011, Local_223, 0, 0, 1);
				ENTITY::SET_ENTITY_ROTATION(iLocal_1011, -11.3149f, 1.4111f, 167.8415f, 2, 1);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_1011, -0.0226f, -0.0967f, 0.9893f, 0.1066f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1011);
				while (!func_424(Local_232, fLocal_891))
				{
					SYSTEM::WAIT(0);
				}
				if (GlobalFunc_188())
				{
					GlobalFunc_5108(0, -1, 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_1005))
				{
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_1005, 0);
				}
				TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), -98.8604f, -10.5318f, 65.5199f, 1f, -1, 1193033728, 1056964608);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
			}
			RECORDING::_0x293220DA1B46CEBC(0f, 8f, 4);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1006))
			{
				PED::DELETE_PED(&iLocal_1006);
			}
			func_7();
			iLocal_907++;
			func_421(500);
			SYSTEM::SETTIMERA(0);
			break;
		
		case -1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1006))
			{
				PED::DELETE_PED(&iLocal_1006);
			}
			func_7();
			iLocal_907++;
			func_421(500);
			SYSTEM::SETTIMERA(0);
			iLocal_907 = 1;
			break;
		
		case 1:
			if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			if (SYSTEM::TIMERA() > 1000)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) == 1)
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1011, 0))
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_1002))
				{
					uLocal_1002 = GlobalFunc_6783(iLocal_1011, 0, 0);
					GlobalFunc_164("S1_BKINCAR", 7500, 1);
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1011, 0))
				{
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_DRIVE_TO_FACTORY"))
					{
						AUDIO::START_AUDIO_SCENE("AGENCY_H_1_DRIVE_TO_FACTORY");
					}
					AUDIO::TRIGGER_MUSIC_EVENT("AH1_BACK_IN_CAR");
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
					RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
					iLocal_907++;
					SYSTEM::SETTIMERA(0);
				}
				else if (!PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iLocal_1011, 0)) < 400f)
					{
						if (!PED::IS_PED_DEAD_OR_DYING(iLocal_1005, 1))
						{
							if (!PED::IS_PED_HEADTRACKING_PED(iLocal_1005, PLAYER::PLAYER_PED_ID()))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_1005, PLAYER::PLAYER_PED_ID(), -1, 2052, 3);
							}
						}
					}
					else if (!PED::IS_PED_DEAD_OR_DYING(iLocal_1005, 1))
					{
						if (PED::IS_PED_HEADTRACKING_PED(iLocal_1005, PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_CLEAR_LOOK_AT(iLocal_1005);
						}
					}
				}
			}
			break;
		
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1011, 0) && !PED::IS_PED_INJURED(iLocal_1005))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1011, 0))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_1005, iLocal_1011, 0))
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_1002))
						{
							HUD::REMOVE_BLIP(&uLocal_1002);
						}
						if (SYSTEM::TIMERA() > 500)
						{
							if (GlobalFunc_10618(&Local_52, "FBS1AUD", "FBS1_PKGE", 9, 0, 0, 0))
							{
								SYSTEM::SETTIMERA(0);
								iLocal_907++;
							}
						}
					}
				}
				else if (!HUD::DOES_BLIP_EXIST(uLocal_1002))
				{
					uLocal_1002 = GlobalFunc_6783(iLocal_1011, 0, 0);
				}
			}
			break;
		
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1011, 0) && !PED::IS_PED_INJURED(iLocal_1005))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1011, 0))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_1005, iLocal_1011, 0))
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_1002))
						{
							HUD::REMOVE_BLIP(&uLocal_1002);
						}
						if (GlobalFunc_10618(&Local_52, "FBS1AUD", "FBS1_GOHOME", 9, 0, 0, 0))
						{
							SYSTEM::SETTIMERA(0);
							iLocal_907++;
						}
					}
				}
				else if (!HUD::DOES_BLIP_EXIST(uLocal_1002))
				{
					uLocal_1002 = GlobalFunc_6783(iLocal_1011, 0, 0);
				}
			}
			break;
		
		case 4:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1011, 0) && !PED::IS_PED_INJURED(iLocal_1005))
			{
				if (SYSTEM::TIMERA() > 1000)
				{
					func_420(&iLocal_1011, &uLocal_1002, Local_238, &uLocal_1000);
				}
				if ((SYSTEM::TIMERA() > 3000 && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1011, 0)) && (!GlobalFunc_111() || MISC::GET_PROFILE_SETTING(203) == 0))
				{
					if (!Local_1040.f_1)
					{
						func_79(&Local_1040);
					}
				}
				if (SYSTEM::TIMERA() > 11000)
				{
					func_418(Local_1052, iLocal_1011);
				}
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Local_238) < 40000f)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1012))
					{
						if (GlobalFunc_9748(&iLocal_1012, 1, 711.2252f, -979.7821f, 23.1003f, 43.2293f, 1, 1))
						{
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1012);
							ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_1012, 0, 0f, 0f, -0.01f, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_1012, 2);
						}
					}
				}
				if ((HUD::DOES_BLIP_EXIST(uLocal_1000) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1011)) && !ENTITY::IS_ENTITY_UPSIDEDOWN(iLocal_1011))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_238, Global_18, 1, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 723.4905f, -983.8163f, 19.16173f, 710.2278f, -984.9537f, 26.11415f, 12.25f, 0, 1, 0))
					{
						iLocal_907++;
					}
				}
			}
			break;
		
		case 5:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1011, 0))
			{
				STREAMING::REQUEST_CLIP_SET("move_lester_CaneUp");
				if (GlobalFunc_530(iLocal_1011, 8f, 5, 1056964608, 0, 1))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
					SYSTEM::SETTIMERA(0);
					HUD::REMOVE_BLIP(&uLocal_1000);
					GlobalFunc_5105();
					iLocal_907++;
				}
			}
			break;
		
		case 6:
			if (!GlobalFunc_111())
			{
				if (GlobalFunc_10618(&Local_52, cLocal_922, "FBS1_HOME2", 8, 0, 0, 0))
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 8f, 4);
					iLocal_907++;
				}
			}
			break;
		
		case 7:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1011, 0))
			{
				if (ENTITY::GET_ENTITY_SPEED(iLocal_1011) < 0.5f)
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1011, 0))
					{
						TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1011, 0);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					uLocal_1000 = GlobalFunc_5104(706.5483f, -965.2577f, 29.4179f, 0);
					iLocal_907++;
					SYSTEM::SETTIMERA(0);
				}
			}
			break;
		
		case 8:
			if (SYSTEM::TIMERA() > 250 && STREAMING::HAS_CLIP_SET_LOADED("move_lester_CaneUp"))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1011, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_1005) && PED::IS_PED_IN_VEHICLE(iLocal_1005, iLocal_1011, 0))
					{
						PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(iLocal_1005, "move_lester_CaneUp");
						TASK::TASK_LOOK_AT_ENTITY(iLocal_1005, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						TASK::OPEN_SEQUENCE_TASK(&uVar0);
						TASK::TASK_LEAVE_VEHICLE(0, iLocal_1011, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 713.0986f, -962.1581f, 29.3953f, 1f, -1, 0.25f, 0, 40000f);
						TASK::TASK_ACHIEVE_HEADING(0, 185.6443f, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar0);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_1005, uVar0);
						TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					}
				}
				SCRIPT::REQUEST_SCRIPT("lesterHandler");
				GlobalFunc_505(3, 0, 1);
				iLocal_907++;
			}
			break;
		
		case 9:
			if (!PED::IS_PED_INJURED(iLocal_1005))
			{
				PED::SET_PED_MOVE_RATE_OVERRIDE(iLocal_1005, 0.8f);
			}
			if (!HUD::DOES_BLIP_EXIST(uLocal_1000))
			{
				uLocal_1000 = GlobalFunc_5104(706.5483f, -965.2577f, 29.4179f, 0);
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 710.9717f, -964.1349f, 30.64533f, 1f, 5.5f, 1.25f, 0, 1, 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					while (!GlobalFunc_530(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1093140480, 1, 1056964608, 0, 1))
					{
						SYSTEM::WAIT(0);
					}
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_1000))
				{
					HUD::REMOVE_BLIP(&uLocal_1000);
				}
				HUD::CLEAR_PRINTS();
				GlobalFunc_4956();
				iLocal_907++;
			}
			break;
		
		case 10:
			if (GlobalFunc_188())
			{
				GlobalFunc_5108(0, -1, 1);
			}
			if (GlobalFunc_109() && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				if (!PED::IS_PED_INJURED(iLocal_1005))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1005, "Lester", 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_1007))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1007, "Franklin", 1, 0, 0);
				}
				GlobalFunc_8316(1, 1, 1, 0);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x293220DA1B46CEBC(5f, 0f, 4);
				RECORDING::_0x48621C9FCA3EBD28(4);
				iLocal_907 = 100;
			}
			break;
		
		case 100:
			MISC::CLEAR_AREA(710.9717f, -964.1349f, 30.64533f, 20f, 1, 0, 0, 0);
			CAM::DO_SCREEN_FADE_IN(500);
			iLocal_907++;
			break;
		
		case 101:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1029))
			{
				OBJECT::DELETE_OBJECT(&iLocal_1029);
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_DRIVE_TO_FACTORY"))
			{
				AUDIO::STOP_AUDIO_SCENE("AGENCY_H_1_DRIVE_TO_FACTORY");
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1012))
			{
				VEHICLE::DELETE_VEHICLE(&iLocal_1012);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lester", 0) && !PED::IS_PED_INJURED(iLocal_1005))
			{
				if (SCRIPT::HAS_SCRIPT_LOADED("lesterHandler"))
				{
					iVar1 = iLocal_1005;
					SYSTEM::START_NEW_SCRIPT_WITH_ARGS("lesterHandler", &iVar1, 1, 1424);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("lesterHandler");
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				RECORDING::_0x81CBAE94390F9F89();
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
			}
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
			}
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				GlobalFunc_8316(0, 1, 1, 0);
				SYSTEM::SETTIMERA(0);
				iLocal_907++;
			}
			break;
		
		case 102:
			if (SYSTEM::TIMERA() < 1500 && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 715.8696f, -964.413f, 31.39533f, 4f, 6f, 2f, 0, 1, 0))
			{
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
			if (SYSTEM::TIMERA() > 3000)
			{
				func_371();
			}
			break;
	}
	if (((HUD::DOES_BLIP_EXIST(uLocal_1000) && !iLocal_1214) && iLocal_907 > 7) && !GlobalFunc_111())
	{
		GlobalFunc_527("S1_UPSTAIRS", 7500, 1);
		iLocal_1214 = 1;
	}
	if (!PED::IS_PED_INJURED(iLocal_1005))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1029))
		{
			if (iLocal_907 < 100)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Local_238) < 40000f)
				{
					STREAMING::REQUEST_MODEL(joaat("prop_cs_walking_stick"));
					if (STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_walking_stick")))
					{
						iLocal_1029 = OBJECT::CREATE_OBJECT(joaat("prop_cs_walking_stick"), ENTITY::GET_ENTITY_COORDS(iLocal_1005, 0), 1, 1, 0);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_1029, 0);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_1029, iLocal_1005, PED::GET_PED_BONE_INDEX(iLocal_1005, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					}
				}
			}
		}
		else if (ENTITY::IS_ENTITY_VISIBLE(iLocal_1029))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_1005, 0))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_1029, 0);
			}
		}
		else if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_1005, 0))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_1029, 1);
		}
	}
	if (iLocal_907 < 100)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1007) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Local_238) < 100f)
		{
			func_166();
			CUTSCENE::REQUEST_CUTSCENE("ah_1_ext_t6", 8);
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					GlobalFunc_10914("Franklin", joaat("player_one"), 39);
				}
			}
		}
		else if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Local_238) > 120f)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1007))
			{
				PED::DELETE_PED(&iLocal_1007);
			}
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 709.9813f, -963.5311f, 30.5453f, 100f, 100f, 50f, 0, 1, 0))
		{
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-874851305, 0f, 0, 1);
		}
	}
}



















































































int func_166()//Position - 0x1FF6C
{
	if (func_201(&iLocal_1007, 1, 705.4539f, -965.5662f, 29.3953f, 273.3178f, 1, 0, 0))
	{
		func_167(iLocal_1007, 12, 39, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		TASK::TASK_START_SCENARIO_AT_POSITION(iLocal_1007, "PROP_HUMAN_SEAT_CHAIR", 704.8563f, -965.3852f, 29.8245f, 269.2285f, 0, 0, 1);
		return 1;
	}
	return 0;
}

int func_167(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x1FFD1
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
		Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		GlobalFunc_8357(iParam1);
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
			iVar7 = GlobalFunc_7614(iParam0, 1);
			if (!GlobalFunc_6667(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = GlobalFunc_7614(iParam0, 0);
			if (!GlobalFunc_6666(iVar10, 14, iVar8) && !GlobalFunc_6665(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = GlobalFunc_7614(iParam0, 2);
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
				Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iVar0, uVar11[iVar0]) };
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
							Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, 14, uVar27[iVar1]) };
							GlobalFunc_515(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8357(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = GlobalFunc_11222(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_167(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						GlobalFunc_8357(iVar0);
						if (Global_68105 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = GlobalFunc_11222(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_167(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iVar0, GlobalFunc_11038(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (GlobalFunc_11037(iParam0, iVar10, &iVar4, 1))
							{
								func_167(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_167(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var53 = { GlobalFunc_10836(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 8, iVar5, &uVar11, &Var53))
				{
					func_167(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_167(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_167(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_167(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_167(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
			Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, 14, uVar67[iVar1]) };
			GlobalFunc_515(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8357(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11222(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_167(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		GlobalFunc_515(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		GlobalFunc_8357(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = GlobalFunc_11222(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_167(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = GlobalFunc_11222(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_167(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			GlobalFunc_11036(iVar10, iParam1, iParam2);
		}
	}
	if (Global_68105 == 1)
	{
		if (GlobalFunc_11037(iParam0, iVar10, &iVar4, 0))
		{
			func_167(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (GlobalFunc_11035(iParam0, iVar10, &iVar4))
		{
			func_167(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}


































int func_201(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x23EA7
{
	int iVar0;
	
	if (GlobalFunc_42(iParam1))
	{
		iVar0 = GlobalFunc_4917(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam5, 0, 0);
			GlobalFunc_8364(*iParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*iParam0, 0, 0);
			func_362(*iParam0);
			GlobalFunc_7694(*iParam0, 1, 0);
			GlobalFunc_7693(*iParam0);
			GlobalFunc_7692(*iParam0);
			func_203(*iParam0, bParam8);
			GlobalFunc_516(*iParam0);
			if (bParam6)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}


int func_203(int iParam0, bool bParam1)//Position - 0x23FBF
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_5101(iVar0))
	{
		GlobalFunc_5100(iVar0, 0);
		func_167(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		func_207(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (GlobalFunc_7685(iParam0))
		{
			GlobalFunc_5100(iVar0, 0);
			func_167(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			func_207(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[120] && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122])
			{
				func_167(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (GlobalFunc_10915(iParam0, 3, 169))
					{
						func_167(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						return 1;
					}
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 6))
			{
				func_167(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_167(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 20))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_167(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 21))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_167(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 22))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_167(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 11))
			{
				func_167(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 10))
			{
				func_167(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 50))
			{
				func_167(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 14, 59))
			{
				func_167(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10915(iParam0, 8, 22))
			{
				func_167(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 14))
			{
				func_167(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_10915(iParam0, 12, 13))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_167(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 14))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_167(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 15))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_167(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 4))
			{
				func_167(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 3))
			{
				func_167(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 14, 82))
			{
				func_167(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10915(iParam0, 8, 76))
			{
				func_167(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 1))
			{
				func_167(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 2:
			if (GlobalFunc_10915(iParam0, 12, 12))
			{
				func_167(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 15))
			{
				func_167(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (GlobalFunc_10915(iParam0, 3, 71))
				{
					func_167(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_167(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 18))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_167(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 19))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_167(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 7))
			{
				func_167(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 6))
			{
				func_167(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 14, 88))
			{
				func_167(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10915(iParam0, 8, 17))
			{
				func_167(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 11))
			{
				func_167(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
	}
	return 0;
}




void func_207(int iParam0, int iParam1)//Position - 0x2470E
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
				iVar1 = GlobalFunc_11038(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					GlobalFunc_521(iVar0);
					func_218(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			GlobalFunc_8358(iParam0, &Var2, 1);
			Global_89752[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				GlobalFunc_8999();
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











void func_218(int iParam0, var uParam1, bool bParam2)//Position - 0x2595E
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
				PED::SET_PED_PROP_INDEX(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], false);
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
			if (GlobalFunc_11037(iParam0, iVar1, &iVar2, 0))
			{
				func_167(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (GlobalFunc_11035(iParam0, iVar1, &iVar2))
			{
				func_167(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_6784(741, uParam1->f_60, Global_68104, 1);
			GlobalFunc_6784(742, uParam1->f_61, Global_68104, 1);
			iVar4 = GlobalFunc_4915(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			func_221(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			if (!bParam2)
			{
				iVar5 = GlobalFunc_4915(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_221(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
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



int func_221(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x25BF5
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
		Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		GlobalFunc_10920(iVar5, iParam1, iParam2, 1);
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
					Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 10, 0) };
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
						GlobalFunc_10920(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iVar0, uVar15[iVar0]) };
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
								Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 14, uVar31[iVar1]) };
								GlobalFunc_515(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
								if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
								{
									GlobalFunc_10920(iVar5, iVar0, uVar15[iVar0], 1);
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
								GlobalFunc_10920(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iVar0, GlobalFunc_11041(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					uVar41 = { GlobalFunc_7617(iVar5, 0) };
					func_221(iParam0, iVar0, uVar41[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
			}
			iVar0++;
		}
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0)
		{
			iVar57 = GlobalFunc_9005();
			if (iVar57 != -1)
			{
				GlobalFunc_9004(iVar57, 0, Global_68104);
			}
			GlobalFunc_10623(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar58 = { GlobalFunc_7616(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 14, uVar58[iVar1]) };
			GlobalFunc_515(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
			{
				GlobalFunc_10920(iVar5, 14, uVar58[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_68105 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = GlobalFunc_11040(iParam0, iVar5, 14, uVar58[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_221(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
			iVar3 = GlobalFunc_11040(iParam0, iVar5, 1, iVar69, 14, Global_68106[1 /*14*/].f_12);
			if (iVar3 != -99 && iVar3 != iParam2)
			{
				iVar7 = GlobalFunc_5013(iVar5, 1, -1);
			}
		}
		GlobalFunc_515(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
		{
			GlobalFunc_10920(iVar5, iParam1, iParam2, 1);
		}
		if (iParam5 == 0)
		{
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11040(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_221(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						iVar73 = GlobalFunc_11040(iParam0, iVar5, 11, iVar70, 3, 0);
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
							func_221(iParam0, 8, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
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
								func_221(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
								iVar9 = -99;
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									func_221(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								}
								Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
							}
						}
					}
					else
					{
						Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 11, iVar70) };
						iVar79 = Global_68106[1 /*14*/].f_3;
						Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 11, iParam2) };
						iVar80 = Global_68106[1 /*14*/].f_3;
						if (iVar79 != iVar80)
						{
							Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 8, iVar71) };
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
										Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 11, iVar82) };
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
								func_221(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_221(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
						}
					}
				}
				else
				{
					GlobalFunc_10622(iVar5, iParam2);
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			GlobalFunc_10623(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, GlobalFunc_11041(iParam0, 8, -1), iParam2);
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = GlobalFunc_6671(2135, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = GlobalFunc_6671(2142, iParam10, 0);
				}
				PED::_SET_PED_HAIR_COLOR(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				GlobalFunc_11255(iParam0, iParam2, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			GlobalFunc_10623(iParam0, iParam1, iParam2, iParam6, 0);
			iVar84 = GlobalFunc_6669(iParam0, 11);
			if (GlobalFunc_6737(iVar5, iVar84))
			{
				iVar85 = GlobalFunc_6736(iVar5, iParam2, Global_68106[1 /*14*/].f_4);
				GlobalFunc_10622(iVar5, iVar85);
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
				iVar87 = GlobalFunc_6671(2082, iParam10, 0);
				iVar88 = GlobalFunc_6671(2083, iParam10, 0);
				iVar89 = GlobalFunc_6671(2084, iParam10, 0);
				uVar90 = GlobalFunc_6788(135, iParam10);
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 0, 0, 0, iVar87, iVar88, iVar89, 0f, uVar90, 0f, false);
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 21, 0, 0, iVar87, iVar88, iVar89, 0f, fVar90, 0f, false);
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
				GlobalFunc_9000(iParam0, Global_68104);
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
						iVar3 = GlobalFunc_11040(iParam0, iVar5, iParam1, iVar94, 14, iVar95);
						iVar96 = GlobalFunc_7614(iParam0, iVar95);
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
					iVar3 = GlobalFunc_11040(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_221(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						if (!GlobalFunc_10918(iParam0, 9, iVar97))
						{
							func_221(iParam0, 9, iVar97, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						func_221(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_221(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
				}
				iVar98 = GlobalFunc_6671(2024, -1, 0);
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
					iVar99 = GlobalFunc_11041(iParam0, 4, -1);
					iVar100 = iParam2;
				}
				else
				{
					iVar99 = iParam2;
					iVar100 = GlobalFunc_11041(iParam0, 11, -1);
				}
				if (GlobalFunc_6729(iVar5, 11, iVar100))
				{
					if (!GlobalFunc_6728(iVar5, 4, iVar99))
					{
						if (GlobalFunc_6727(iVar5, 4, iVar99, &uVar101))
						{
							func_221(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
				}
				else if (GlobalFunc_6728(iVar5, 4, iVar99))
				{
					if (GlobalFunc_6726(iVar5, 4, iVar99, &uVar101))
					{
						func_221(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
					iVar3 = GlobalFunc_11040(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_221(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar3 = GlobalFunc_11040(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_221(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (GlobalFunc_11159(iParam0, &uVar4))
		{
			func_221(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	if (iVar6 != -99)
	{
		func_221(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar9 != -99)
	{
		func_221(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar7 != -99)
	{
		func_221(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				func_221(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}













































































































































void func_362(int iParam0)//Position - 0x51AA1
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
		func_218(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
		if (!Global_89948[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!GlobalFunc_526(49))
				{
					iVar1 = GlobalFunc_11038(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					GlobalFunc_11162(GlobalFunc_4917(0), 12, 16, 0, 0, 0, 0);
				}
				if (!GlobalFunc_526(44))
				{
					iVar1 = GlobalFunc_11038(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = GlobalFunc_11038(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 70, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 71, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 72, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 73, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 74, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 75, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 4, 41, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 4, 42, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 4, 43, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 4, 44, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = GlobalFunc_11038(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				GlobalFunc_521(iVar0);
				func_218(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
			}
		}
		Global_89948[iVar0] = 1;
	}
}









void func_371()//Position - 0x524C8
{
	GlobalFunc_505(3, 0, 1);
	GlobalFunc_5103(0, 0);
	func_623();
}















































void func_418(char* sParam0, int iParam1)//Position - 0x57384
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam1, 0))
		{
			if (!iLocal_1054)
			{
				if (GlobalFunc_10618(&Local_52, "FBS1AUD", sParam0, 8, 0, 0, 0))
				{
					iLocal_1055 = 0;
					iLocal_1054 = 1;
				}
			}
			if (iLocal_1055)
			{
				if (GlobalFunc_10626(&Local_52, "FBS1AUD", sParam0, &Local_1056, 8, 0, 0))
				{
					iLocal_1055 = 0;
				}
			}
		}
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam1, 0))
		{
			if (!iLocal_1055)
			{
				Local_1056 = { GlobalFunc_514() };
				GlobalFunc_5105();
				iLocal_1055 = 1;
			}
		}
	}
}


void func_420(int iParam0, var uParam1, struct<3> Param2, var uParam5)//Position - 0x57460
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0) && ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, 0))
		{
			if (!HUD::DOES_BLIP_EXIST(*uParam1))
			{
				HUD::CLEAR_PRINTS();
				func_79(&Local_1032);
				*uParam1 = GlobalFunc_6783(*iParam0, 0, 0);
			}
			if (HUD::DOES_BLIP_EXIST(*uParam5))
			{
				HUD::REMOVE_BLIP(uParam5);
			}
		}
		else
		{
			if (!HUD::DOES_BLIP_EXIST(*uParam5))
			{
				*uParam5 = GlobalFunc_5104(Param2, 1);
			}
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				HUD::CLEAR_PRINTS();
				HUD::REMOVE_BLIP(uParam1);
			}
		}
	}
}

void func_421(int iParam0)//Position - 0x574EF
{
	if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DO_SCREEN_FADE_IN(iParam0);
	}
}



bool func_424(struct<3> Param0, float fParam3)//Position - 0x575FC
{
	STREAMING::REQUEST_MODEL(iLocal_930);
	if (STREAMING::HAS_MODEL_LOADED(iLocal_930))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1010))
		{
			iLocal_1010 = VEHICLE::CREATE_VEHICLE(iLocal_930, Param0, fParam3, 1, 1);
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_1010, sLocal_921);
			VEHICLE::SET_VEHICLE_NAME_DEBUG(iLocal_1010, "JANITOR CAR");
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_1010, 9);
			GlobalFunc_534(iLocal_1010, iLocal_1014);
			ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_1010, 2, 0f, 0f, -1f, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
			VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_1010, 2f);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_1010, 3);
		}
	}
	STREAMING::REQUEST_MODEL(joaat("s_m_m_janitor"));
	if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_janitor")))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1010, 0) && !ENTITY::DOES_ENTITY_EXIST(iLocal_1006))
		{
			iLocal_1006 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1010, 26, joaat("s_m_m_janitor"), -1, 1, 1);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_1006, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_1006, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_1006, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_1006, 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_1006, 9, 1, 0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1006, 17, 1);
			PED::SET_PED_ID_RANGE(iLocal_1006, 20f);
			PED::SET_PED_SEEING_RANGE(iLocal_1006, 20f);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_1006, 0);
			PED::SET_PED_NAME_DEBUG(iLocal_1006, "JANITOR");
			PED::SET_PED_LOD_MULTIPLIER(iLocal_1006, 3f);
			GlobalFunc_173(&Local_52, 1, iLocal_1006, "AGENCYJANITOR", 0, 1);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_1006, "AGENCYJANITOR");
		}
	}
	return (ENTITY::DOES_ENTITY_EXIST(iLocal_1006) && ENTITY::DOES_ENTITY_EXIST(iLocal_1010));
}


void func_426()//Position - 0x57776
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1011, 0))
	{
		PED::DELETE_PED(&iLocal_1005);
		func_7();
		while (!GlobalFunc_6790(&iLocal_1005, 12, iLocal_1011, 0, 1))
		{
			SYSTEM::WAIT(0);
		}
		PED::SET_PED_PROP_INDEX(iLocal_1005, 1, 0, 0, false);
		func_427(iLocal_1005);
		func_7();
	}
}

void func_427(int iParam0)//Position - 0x577C4
{
	PED::SET_PED_CAN_BE_DRAGGED_OUT(iParam0, 0);
	PED::SET_PED_CAN_BE_TARGETTED(iParam0, 0);
	PED::SET_PED_KEEP_TASK(iParam0, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iLocal_1031);
	PED::SET_PED_CONFIG_FLAG(iParam0, 29, 0);
	PED::SET_PED_CONFIG_FLAG(iParam0, 116, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
	PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iParam0, 0);
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0, 0);
}




void func_431()//Position - 0x57902
{
	STREAMING::REQUEST_MODEL(joaat("a_f_y_hipster_01"));
	STREAMING::REQUEST_MODEL(joaat("dilettante"));
	STREAMING::REQUEST_ANIM_DICT("missheistfbisetup1");
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1004) && !ENTITY::DOES_ENTITY_EXIST(iLocal_1013))
	{
		if ((STREAMING::HAS_MODEL_LOADED(joaat("a_f_y_hipster_01")) && STREAMING::HAS_MODEL_LOADED(joaat("dilettante"))) && STREAMING::HAS_ANIM_DICT_LOADED("missheistfbisetup1"))
		{
			iLocal_1013 = VEHICLE::CREATE_VEHICLE(joaat("dilettante"), -81.15f, -18.851f, 65.82f, 67.68219f, 1, 1);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_1013, -81.15f, -18.851f, 65.82f, 0, 0, 1);
			ENTITY::SET_ENTITY_ROTATION(iLocal_1013, 0f, 0f, 67.6822f, 2, 1);
			ENTITY::SET_ENTITY_QUATERNION(iLocal_1013, 0f, 0f, 0.5569f, 0.8306f);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1013);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_990, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, iLocal_990);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_1013, 2);
			VEHICLE::SET_VEHICLE_ALARM(iLocal_1013, 1);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_1013, 3);
			iLocal_1004 = PED::CREATE_PED(5, joaat("a_f_y_hipster_01"), -81.93f, -19.81f, 65.32f, -18.56f, 1, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_1004, iLocal_990);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1004, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1004, 17, 1);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_1004, 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_1004, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_1004, 3, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_1004, 4, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_1004, 8, 0, 1, 0);
			PED::SET_PED_LOD_MULTIPLIER(iLocal_1004, 2f);
			uLocal_1126 = PED::CREATE_SYNCHRONIZED_SCENE(Local_255, Local_258, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_1004, uLocal_1126, "missheistfbisetup1", "hassle_intro_loop_f", 1000f, -4f, 1, 0, 1148846080, 0);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1126, 1);
			GlobalFunc_173(&Local_52, 5, iLocal_1004, "AH_NEIGHBOUR", 0, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_f_y_hippie_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dilettante"));
		}
	}
}

bool func_432(struct<3> Param0, float fParam3, bool bParam4, bool bParam5)//Position - 0x57ADE
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1011))
	{
		GlobalFunc_9748(&iLocal_1011, 0, Param0, fParam3, 1, 0);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1011, 0))
	{
		if (bParam5)
		{
			if (!PED::IS_PED_INJURED(iLocal_1005))
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_1005, iLocal_1011, 0))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_1005, iLocal_1011, 0);
				}
			}
		}
		if (bParam4)
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1011, 0))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1011, -1);
			}
		}
		ENTITY::SET_ENTITY_COORDS(iLocal_1011, Param0, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(iLocal_1011, fParam3);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1011);
		ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_1011, 2, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
	}
	return ENTITY::DOES_ENTITY_EXIST(iLocal_1011);
}

































void func_465(bool bParam0)//Position - 0x5A588
{
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-252283844))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-252283844, 0f, 0, 0);
		if (bParam0)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-252283844, 4, 0, 0);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-252283844, 1, 0, 0);
		}
		else
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-252283844, 3, 0, 0);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-252283844, 0, 0, 0);
		}
	}
}

void func_466()//Position - 0x5A5E3
{
	switch (iLocal_907)
	{
		case 0:
			bLocal_892 = true;
			CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
			if (iLocal_49)
			{
				PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 9, 1, 1);
				if (!GlobalFunc_188())
				{
					func_522(Local_217 + Vector(0f, 1f, 0.5f), -1082130432, 1, 12000, 1123680256, 0);
				}
				func_432(Local_223, fLocal_890, 0, 1);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_1011, -0.0341f, -0.1053f, 0.989f, 0.0985f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1011);
				while (!ENTITY::DOES_ENTITY_EXIST(iLocal_1013))
				{
					func_431();
					SYSTEM::WAIT(0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1004))
				{
					PED::DELETE_PED(&iLocal_1004);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1006))
				{
					STREAMING::REQUEST_MODEL(joaat("s_m_m_janitor"));
					while (!STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_janitor")))
					{
						SYSTEM::WAIT(0);
					}
					while (!func_424(Local_232, fLocal_891))
					{
						SYSTEM::WAIT(0);
					}
					func_426();
					if (!PED::IS_PED_INJURED(iLocal_1006))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_1006, Local_217, 1, 0, 0, 1);
					}
				}
				GlobalFunc_5108(0, -1, 1);
			}
			iLocal_1213 = 0;
			AUDIO::TRIGGER_MUSIC_EVENT("AH1_STOP");
			STREAMING::REMOVE_ANIM_DICT("missheistfbisetup1leadinoutah_1_mcs_1");
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_FOLLOW_ON_FOOT"))
			{
				AUDIO::STOP_AUDIO_SCENE("AGENCY_H_1_FOLLOW_ON_FOOT");
			}
			RECORDING::_0x293220DA1B46CEBC(8f, 0f, 4);
			func_7();
			iLocal_907++;
			break;
		
		case 1:
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REQUEST_CUTSCENE(sLocal_1027, 8);
			}
			if (GlobalFunc_109())
			{
				if (GlobalFunc_550(sLocal_1027))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					if (!PED::IS_PED_INJURED(iLocal_1006))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1006, "Janitor", 0, 0, 0);
					}
					GlobalFunc_8316(1, 1, 1, 0);
					CUTSCENE::START_CUTSCENE(0);
					RECORDING::_0x48621C9FCA3EBD28(4);
					func_517(6);
					iLocal_907++;
				}
				else
				{
					CUTSCENE::REMOVE_CUTSCENE();
				}
			}
			break;
		
		case 2:
			CAM::DO_SCREEN_FADE_IN(500);
			PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1024))
			{
				OBJECT::DELETE_OBJECT(&iLocal_1024);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1023))
			{
				OBJECT::DELETE_OBJECT(&iLocal_1023);
			}
			MISC::CLEAR_AREA(-98.8604f, -10.5318f, 65.5199f, 100f, 1, 0, 0, 0);
			PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
			iLocal_907++;
			break;
		
		case 3:
			if (!iLocal_1213)
			{
				PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 9, 1, 1);
				if (CUTSCENE::GET_CUTSCENE_TIME() > 27500)
				{
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 1, 1, 0);
					PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
					iLocal_1213 = 1;
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", joaat("player_zero")))
			{
				if (!iLocal_1213)
				{
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 1, 1, 0);
					PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
					iLocal_1213 = 1;
				}
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 251.011f);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1000, 0, 1, 0);
				}
				else
				{
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 287.4864f);
					TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), -98.8604f, -10.5318f, 65.5199f, 1f, -1, 1193033728, 1056964608);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				RECORDING::_0x81CBAE94390F9F89();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			}
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1006))
				{
					PED::DELETE_PED(&iLocal_1006);
				}
				GlobalFunc_8316(0, 1, 1, 0);
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 251.011f);
				}
				else
				{
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 287.4864f);
				}
				func_467(6);
			}
			break;
	}
}

void func_467(int iParam0)//Position - 0x5A973
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_1005))
	{
		if (iParam0 == 2)
		{
			func_477(1, "STAGE_WAIT_FOR_JANITOR", 0, 0, iLocal_1005, 1);
		}
		else if (iParam0 == 3)
		{
			func_477(2, "STAGE_TAIL_THE_JANITOR", 0, 0, iLocal_1005, 1);
		}
		else if (iParam0 >= 4 && iParam0 < 6)
		{
			func_477(3, "STAGE_FOLLOW_JANITOR_ON_FOOT", 0, 0, iLocal_1005, 1);
		}
		else if (iParam0 == 6)
		{
			func_477(4, "STAGE_DRIVE_BACK_TO_SAFEHOUSE", 1, 0, iLocal_1005, 1);
		}
	}
	else if (iParam0 == 2)
	{
		func_477(1, "STAGE_WAIT_FOR_JANITOR", 0, 0, 0, 1);
	}
	else if (iParam0 == 3)
	{
		func_477(2, "STAGE_TAIL_THE_JANITOR", 0, 0, 0, 1);
	}
	else if (iParam0 >= 4 && iParam0 < 6)
	{
		func_477(3, "STAGE_FOLLOW_JANITOR_ON_FOOT", 0, 0, 0, 1);
	}
	else if (iParam0 == 6)
	{
		func_477(4, "STAGE_DRIVE_BACK_TO_SAFEHOUSE", 1, 0, 0, 1);
	}
	GlobalFunc_10617(61, 1);
	iLocal_47 = iParam0;
	if (CUTSCENE::IS_CUTSCENE_ACTIVE() && CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		CUTSCENE::STOP_CUTSCENE(0);
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			SYSTEM::WAIT(0);
		}
	}
	if (HUD::IS_RADAR_HIDDEN())
	{
		HUD::DISPLAY_RADAR(1);
	}
	func_476();
	func_82();
	if (iParam0 != 3)
	{
		HUD::REMOVE_BLIP(&uLocal_999);
	}
	CAM::SET_WIDESCREEN_BORDERS(0, 0);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_1011))
	{
		VEHICLE::SET_VEHICLE_LIGHTS(iLocal_1011, 0);
	}
	func_474();
	HUD::CLEAR_HELP(1);
	HUD::CLEAR_PRINTS();
	if (iParam0 != 2 && !GlobalFunc_188())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	}
	if (!ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
	}
	if (iLocal_49)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1023))
		{
			OBJECT::DELETE_OBJECT(&iLocal_1023);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1024))
		{
			OBJECT::DELETE_OBJECT(&iLocal_1024);
		}
		func_473(500);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1011, 0))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_1011, 0);
			VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_1011, 1);
		}
		func_472();
		func_471();
		func_470();
		if (iLocal_47 != 3)
		{
			func_469(&uLocal_1003, 0);
			func_469(&Local_959, 0);
		}
		GlobalFunc_4956();
		GlobalFunc_4935();
		while (!func_517(iParam0))
		{
			SYSTEM::WAIT(0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1012))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_1012);
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_GET_TO_FIB"))
		{
			AUDIO::STOP_AUDIO_SCENE("AGENCY_H_1_GET_TO_FIB");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_WAIT_FOR_CARS"))
		{
			AUDIO::STOP_AUDIO_SCENE("AGENCY_H_1_WAIT_FOR_CARS");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_NON_TARGET_CARS"))
		{
			AUDIO::STOP_AUDIO_SCENE("AGENCY_H_1_NON_TARGET_CARS");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_JANITORS_CAR"))
		{
			AUDIO::STOP_AUDIO_SCENE("AGENCY_H_1_JANITORS_CAR");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_FOCUS_ON_PLATES"))
		{
			AUDIO::STOP_AUDIO_SCENE("AGENCY_H_1_FOCUS_ON_PLATES");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_FOLLOW_JANITOR"))
		{
			AUDIO::STOP_AUDIO_SCENE("AGENCY_H_1_FOLLOW_JANITOR");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_FOCUS_ON_JANITOR"))
		{
			AUDIO::STOP_AUDIO_SCENE("AGENCY_H_1_FOCUS_ON_JANITOR");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_FOLLOW_ON_FOOT"))
		{
			AUDIO::STOP_AUDIO_SCENE("AGENCY_H_1_FOLLOW_ON_FOOT");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_DRIVE_TO_FACTORY"))
		{
			AUDIO::STOP_AUDIO_SCENE("AGENCY_H_1_DRIVE_TO_FACTORY");
		}
	}
	if (CAM::DOES_CAM_EXIST(Local_959))
	{
		CAM::DESTROY_CAM(Local_959, 0);
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_1003))
	{
		CAM::DESTROY_CAM(uLocal_1003, 0);
	}
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	iVar0 = 0;
	while (iVar0 < iLocal_1014)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1014[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_1014[iVar0]));
		}
		iVar0++;
	}
	if (iLocal_47 != 6)
	{
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
	}
	iLocal_907 = 0;
}


void func_469(var uParam0, int iParam1)//Position - 0x5ACDF
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
		CAM::RENDER_SCRIPT_CAMS(0, iParam1, 3000, 1, 0, 0);
		CAM::SET_CAM_ACTIVE(*uParam0, 0);
		CAM::DESTROY_CAM(*uParam0, 0);
	}
}

void func_470()//Position - 0x5AD1D
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1004))
	{
		PED::DELETE_PED(&iLocal_1004);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1013))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_1013);
	}
}

void func_471()//Position - 0x5AD47
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1006))
	{
		PED::DELETE_PED(&iLocal_1006);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1010))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_1010);
	}
}

void func_472()//Position - 0x5AD71
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_1077)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1077[iVar0 /*2*/]))
		{
			PED::DELETE_PED(&(Local_1077[iVar0 /*2*/]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_1077[iVar0 /*2*/].f_1))
		{
			VEHICLE::DELETE_VEHICLE(&(Local_1077[iVar0 /*2*/].f_1));
		}
		iVar0++;
	}
}

void func_473(int iParam0)//Position - 0x5ADC3
{
	if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(iParam0);
	}
}

void func_474()//Position - 0x5ADE3
{
	Local_1032 = { GlobalFunc_541("S1_BKINCAR") };
	Local_1034 = { GlobalFunc_541("S1_WAIT") };
	Local_1036 = { GlobalFunc_541("S1_FOLLOW") };
	Local_1038 = { GlobalFunc_541("S1_GETTOBANK") };
	Local_1040 = { GlobalFunc_541("S1_GOTOSH") };
	Local_1042 = { GlobalFunc_541("S1_BKTOAPT") };
	Local_1044 = { GlobalFunc_541("S1_LOSECOPS") };
	Local_1046 = { GlobalFunc_541("S1_ABAND") };
	Local_1048 = { GlobalFunc_541("FBS1_TAIL1") };
	Local_1050 = { GlobalFunc_541("FBS1_TAIL2") };
	Local_1052 = { GlobalFunc_541("FBS1_HOME1") };
}


void func_476()//Position - 0x5AE99
{
	bLocal_892 = false;
	iLocal_893 = 0;
	bLocal_894 = false;
	iLocal_897 = 0;
	iLocal_1054 = 0;
	iLocal_1055 = 0;
	iLocal_919 = 0;
	StringCopy(&Local_1056, "", 24);
	iLocal_906 = 0;
	iLocal_907 = 0;
}

void func_477(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x5AECD
{
	int iVar0;
	int iVar1;
	var uVar2;
	char[] cVar3[8];
	int iVar5;
	var uVar6;
	int iVar10;
	
	if (iParam3 == 1)
	{
		if (!MISC::ARE_STRINGS_EQUAL("FinaleC2", SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_89999)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_89999)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		GlobalFunc_174(1);
		if (iParam0 <= Global_89999)
		{
		}
		iVar1 = GlobalFunc_5111(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iVar1 /*6*/].f_1 = 0;
			uVar2 = GlobalFunc_5110(iVar1);
			cVar3 = { Global_81155[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, uVar2, Global_89999, iParam0);
		}
		else
		{
			iVar5 = GlobalFunc_7703(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
			if (iVar5 != -1)
			{
				Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {GlobalFunc_44(iVar5)}, 4);
				STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar6, 0, Global_89999, iParam0);
			}
			else
			{
				iVar10 = GlobalFunc_547(&(Global_89962.f_3));
				if (iVar10 > -1)
				{
					Global_SAVE_DATA.BAIL_BOND_SAVED_STRUCT.f_4[iVar10] = 0;
				}
			}
		}
		Global_84545 = iParam2;
		Global_89999 = iParam0;
		func_478(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_89999)
	{
	}
}

void func_478(int iParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x5B045
{
	GlobalFunc_10838(&Global_93588, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, sParam1, iParam3, iParam2);
}







































int func_517(int iParam0)//Position - 0x5FD1B
{
	int iVar0[11];
	int iVar12[11];
	int iVar24;
	int iVar25;
	
	iVar0[0] = joaat("s_m_m_janitor");
	iVar0[1] = GlobalFunc_4946(12);
	iVar0[2] = GlobalFunc_4946(23);
	iVar0[3] = GlobalFunc_4946(30);
	iVar0[4] = joaat("tailgater");
	iVar0[5] = iLocal_930;
	iVar0[6] = iLocal_924[0];
	iVar0[7] = iLocal_924[1];
	iVar0[8] = iLocal_924[2];
	iVar0[9] = iLocal_929;
	iVar0[10] = joaat("a_f_y_hipster_03");
	iVar24 = 0;
	while (iVar24 < iVar12)
	{
		iVar12[iVar24] = 0;
		iVar24++;
	}
	switch (iParam0)
	{
		case 1:
			iVar12[0] = GlobalFunc_4946(12);
			iVar12[1] = GlobalFunc_4946(23);
			iVar12[2] = GlobalFunc_4946(30);
			iVar12[3] = GlobalFunc_5112(30, 0);
			iVar12[4] = joaat("tailgater");
			break;
		
		case 3:
			iVar12[0] = GlobalFunc_4946(12);
			iVar12[1] = joaat("tailgater");
			iVar12[2] = joaat("s_m_m_janitor");
			iVar12[3] = iLocal_930;
			VEHICLE::REQUEST_VEHICLE_RECORDING(1, "FBIs1UBER");
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_923);
			break;
		
		case 4:
			iVar12[0] = GlobalFunc_4946(12);
			iVar12[1] = joaat("tailgater");
			iVar12[2] = joaat("s_m_m_janitor");
			iVar12[3] = iLocal_930;
			break;
		
		case 5:
			iVar12[0] = GlobalFunc_4946(12);
			iVar12[1] = joaat("tailgater");
			iVar12[2] = joaat("s_m_m_janitor");
			iVar12[3] = iLocal_930;
			break;
		
		case 6:
			iVar12[0] = iLocal_930;
			iVar12[1] = GlobalFunc_4946(12);
			iVar12[2] = joaat("tailgater");
			break;
	}
	iVar25 = 1;
	iVar24 = 0;
	while (iVar24 < iVar12)
	{
		if (iVar12[iVar24] != 0)
		{
			STREAMING::REQUEST_MODEL(iVar12[iVar24]);
			if (!STREAMING::HAS_MODEL_LOADED(iVar12[iVar24]))
			{
				iVar25 = 0;
			}
		}
		iVar24++;
	}
	if (iParam0 == 3)
	{
		if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "FBIs1UBER") || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_923))
		{
			iVar25 = 0;
		}
	}
	iVar24 = 0;
	while (iVar24 < iVar0)
	{
		if (!func_518(iVar0[iVar24], &iVar12))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar24]);
		}
		iVar24++;
	}
	return iVar25;
}

bool func_518(int iParam0, int iParam1)//Position - 0x5FF59
{
	int iVar0;
	bool bVar1;
	
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (!bVar1)
		{
			if (iParam0 == (*iParam1)[iVar0])
			{
				bVar1 = true;
			}
		}
		iVar0++;
	}
	return bVar1;
}




void func_522(struct<3> Param0, float fParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x603F3
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
		STREAMING::NEW_LOAD_SCENE_START_SPHERE(Param0, iParam6, 0);
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

void func_523()//Position - 0x604FE
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if ((!PED::IS_PED_INJURED(iLocal_1006) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1011, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1010, 0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1023))
		{
			STREAMING::REQUEST_MODEL(joaat("prop_cs_beer_bot_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_beer_bot_01")))
			{
				iLocal_1023 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_cs_beer_bot_01"), -109.9875f, -6.925f, 70.5236f, 1, 1, 0);
				ENTITY::SET_ENTITY_ROTATION(iLocal_1023, 0f, 0f, -91.3911f, 2, 1);
				ENTITY::SET_ENTITY_VISIBLE(iLocal_1023, 0);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1024))
		{
			STREAMING::REQUEST_MODEL(joaat("p_ld_heist_bag_s_2"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("p_ld_heist_bag_s_2")))
			{
				iLocal_1024 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("p_ld_heist_bag_s_2"), -109.5757f, -6.4225f, 70.3903f, 1, 1, 0);
				ENTITY::SET_ENTITY_ROTATION(iLocal_1024, 0f, 0f, 153.0623f, 2, 1);
				ENTITY::SET_ENTITY_VISIBLE(iLocal_1024, 0);
			}
		}
		if (!HUD::DOES_BLIP_EXIST(uLocal_999))
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_1001))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_1006, 0))
				{
					uLocal_999 = GlobalFunc_6797(iLocal_1006, 0, 145);
					bLocal_1212 = false;
				}
				else
				{
					uLocal_999 = GlobalFunc_6797(iLocal_1006, 0, 145);
					bLocal_1212 = true;
					HUD::SET_BLIP_SCALE(uLocal_999, 1f);
				}
			}
		}
		else if ((HUD::DOES_BLIP_EXIST(uLocal_1001) || (bLocal_1212 && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_1006, 0))) || (!bLocal_1212 && PED::IS_PED_IN_ANY_VEHICLE(iLocal_1006, 0)))
		{
			HUD::REMOVE_BLIP(&uLocal_999);
		}
		switch (iLocal_919)
		{
			case 0:
				iLocal_1199[0] = -1;
				iLocal_1199[1] = -1;
				iLocal_1199[2] = -1;
				iLocal_1203 = -1;
				iLocal_1112 = 0;
				iLocal_1211 = 0;
				func_465(1);
				func_528();
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1004))
				{
					func_431();
				}
				else
				{
					RECORDING::_0x293220DA1B46CEBC(0f, 2f, 3);
					iLocal_919++;
				}
				break;
			
			case 1:
				func_528();
				if (iLocal_1112 > 2)
				{
					iLocal_919++;
				}
				break;
			
			case 2:
				func_528();
				if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_1006, -272084098) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_1006, -272084098) != 0) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_1010, 0), Local_232) < 0.2f)
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_1010, 0);
					iLocal_919++;
				}
				break;
			
			case 3:
				iLocal_919++;
				break;
			
			case 4:
				if (!PED::IS_PED_INJURED(iLocal_1004))
				{
					if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FBI_Heist_1_Tail_Janitor_01", 0))
					{
						if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -80.86742f, -25.2833f, 76.67683f, -43.42942f, -35.59374f, 56.31541f, 22.5f, 0, 1, 0) || (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_1004) || !ENTITY::IS_ENTITY_OCCLUDED(iLocal_1006))) || SYSTEM::TIMERA() > 3000)
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1010, 0, 0);
							TASK::CLEAR_PED_TASKS(iLocal_1004);
							iLocal_261 = PED::CREATE_SYNCHRONIZED_SCENE(Local_255, Local_258, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_1004, iLocal_261, "missheistfbisetup1", "hassle_f", 4f, -2f, 27, 0, 1148846080, 0);
							TASK::TASK_LOOK_AT_ENTITY(iLocal_1004, iLocal_1006, -1, 16, 2);
							TASK::OPEN_SEQUENCE_TASK(&uVar0);
							TASK::TASK_STAND_STILL(0, 2000);
							TASK::TASK_LEAVE_VEHICLE(0, iLocal_1010, 0);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -81.9327f, -25.7698f, 65.3204f, 1f, -1, 0.25f, 512, 282.6097f);
							TASK::CLOSE_SEQUENCE_TASK(uVar0);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_1006, uVar0);
							TASK::TASK_LOOK_AT_ENTITY(iLocal_1006, iLocal_1004, -1, 16, 2);
							TASK::CLEAR_SEQUENCE_TASK(&uVar0);
							iLocal_919++;
						}
					}
				}
				break;
			
			case 5:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_261))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_261) > 0.25f)
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iLocal_1006, 0)) < 1600f)
						{
							if (GlobalFunc_10618(&Local_52, "FBS1AUD", "FBS1_DAMN", 7, 0, 0, 0))
							{
								iLocal_919++;
							}
						}
						else if (GlobalFunc_10618(&Local_52, "FBS1AUD", "FBS1_DAMN", 7, 1, 1, 0))
						{
							iLocal_919++;
						}
					}
				}
				break;
			
			case 6:
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_261) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_261) > 0.44f) && !PED::IS_PED_INJURED(iLocal_1004))
				{
					TASK::CLEAR_PED_TASKS(iLocal_1004);
					TASK::OPEN_SEQUENCE_TASK(&uVar1);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -101.9519f, -82.8542f, 56.331f, 1f, -1, 0.25f, 0, 40000f);
					TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar1);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_1004, uVar1);
					TASK::CLEAR_SEQUENCE_TASK(&uVar1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1004, 0);
					SYSTEM::SETTIMERA(0);
					STREAMING::REQUEST_ANIM_DICT("missheistfbisetup1leadinoutah_1_mcs_1");
					iLocal_919++;
				}
				break;
			
			case 7:
				if (SYSTEM::TIMERA() > 2500)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_1006, -77.0063f, -17.4465f, 65.4398f, 1f, 20000, 0.25f, 0, 40000f);
					iLocal_919++;
				}
				break;
			
			case 8:
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_1006))
				{
					if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_1006) > 20)
					{
						TASK::CLEAR_PED_TASKS(iLocal_1006);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_1006, PED::GET_ANIM_INITIAL_OFFSET_POSITION("missheistfbisetup1", "unlock_enter_janitor", Local_992, Local_995, 0, 2), 1f, -1, 0.1f, 512, 92.34f);
						iLocal_919++;
					}
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(iLocal_1006, -77.0063f, -17.4465f, 65.4398f, 2f, 2f, 2f, 0, 1, 0))
				{
					TASK::CLEAR_PED_TASKS(iLocal_1006);
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_1006, "janitor_route", 0, 8, -1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_1006, 0, 0);
				}
				break;
			
			case 9:
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_1006, 0), PED::GET_ANIM_INITIAL_OFFSET_POSITION("missheistfbisetup1", "unlock_enter_janitor", Local_992, Local_995, 0, 2)) < 0.7f)
				{
					iLocal_1199[0] = PED::CREATE_SYNCHRONIZED_SCENE(Local_992, Local_995, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_1006, iLocal_1199[0], "missheistfbisetup1", "unlock_enter_janitor", 4f, -8f, 1, 0, 4f, 0);
					SYSTEM::SETTIMERB(0);
					iLocal_919++;
				}
				break;
			
			case 10:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1199[0]) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1199[0]) > 0.9f)
				{
					TASK::CLEAR_PED_TASKS(iLocal_1006);
					iLocal_1199[0] = -1;
					iLocal_1199[1] = PED::CREATE_SYNCHRONIZED_SCENE(Local_992, Local_995, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_1006, iLocal_1199[1], "missheistfbisetup1", "unlock_loop_janitor", 8f, -8f, 0, 0, 1148846080, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1199[1], 1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_1006, 0, 0);
					iLocal_919++;
				}
				break;
			
			case 11:
				if ((SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iLocal_1006, 0)) < 12f || !ENTITY::IS_ENTITY_OCCLUDED(iLocal_1006)) && PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1199[1]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_1006);
					iLocal_1199[1] = -1;
					iLocal_1199[2] = PED::CREATE_SYNCHRONIZED_SCENE(Local_992, Local_995, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_1006, iLocal_1199[2], "missheistfbisetup1", "unlock_exit_janitor", 8f, -4f, 0, 0, 1148846080, 0);
					if (ENTITY::DOES_ENTITY_EXIST(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-107.5401f, -9.0258f, 70.6696f, 2f, joaat("v_ilev_janitor_frontdoor"), 0, 0, 1)))
					{
						ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-107.5401f, -9.0258f, 70.6696f, 2f, joaat("v_ilev_janitor_frontdoor"), 0, 0, 1), 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-107.5401f, -9.0258f, 70.6696f, 2f, joaat("v_ilev_janitor_frontdoor"), 0, 0, 1), iLocal_1199[2], "unlock_exit_door", "missheistfbisetup1", 8f, -8f, 0, 1148846080);
					}
					iLocal_919++;
				}
				break;
			
			case 12:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1199[2]))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1199[2]) > 0.9f)
					{
						TASK::CLEAR_PED_TASKS(iLocal_1006);
						if (ENTITY::DOES_ENTITY_EXIST(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-107.5401f, -9.0258f, 70.6696f, 2f, joaat("v_ilev_janitor_frontdoor"), 0, 0, 1)))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-107.5401f, -9.0258f, 70.6696f, 2f, joaat("v_ilev_janitor_frontdoor"), 0, 0, 1), -8f, 1);
							func_465(0);
						}
						iLocal_1199[2] = -1;
						GlobalFunc_10617(61, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_1006, -111.455f, -7.0131f, 69.5283f, 1f, 20000, 0.25f, 0, 283f);
						PED::FORCE_PED_MOTION_STATE(iLocal_1006, -668482597, 0, 0, 0);
						ENTITY::SET_ENTITY_COLLISION(iLocal_1006, 1, 0);
						SYSTEM::SETTIMERA(0);
						iLocal_919++;
					}
				}
				break;
			
			case 13:
				if (SYSTEM::TIMERA() > 1000)
				{
					iLocal_919++;
				}
				break;
			
			case 14:
				if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_1006, 713668775) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_1006, 242628503) != 1) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1203))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1006, -113.7059f, -8.827343f, 69.57693f, -108.327f, -10.88776f, 72.76908f, 8.75f, 0, 1, 0))
					{
						if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_1006))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1006, 1);
							TASK::OPEN_SEQUENCE_TASK(&uVar2);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1204, 1f, -1, 0.1f, 512, 40000f);
							TASK::TASK_ACHIEVE_HEADING(0, Local_1207.f_2, 0);
							TASK::CLOSE_SEQUENCE_TASK(uVar2);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_1006, uVar2);
							TASK::CLEAR_SEQUENCE_TASK(&uVar2);
						}
					}
				}
				RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
				if (((ENTITY::IS_ENTITY_OCCLUDED(iLocal_1006) && func_12(iLocal_1006)) || ((func_12(iLocal_1006) && !func_12(PLAYER::PLAYER_PED_ID())) && OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(-252283844) < 0.05f)) || ((SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_1006, 0), Local_1204) < 0.4f && MISC::ABSF((ENTITY::GET_ENTITY_HEADING(iLocal_1006) - Local_1207.f_2)) < 10f) || MISC::ABSF(((ENTITY::GET_ENTITY_HEADING(iLocal_1006) - Local_1207.f_2) - 360f)) < 10f))
				{
					TASK::CLEAR_PED_TASKS(iLocal_1006);
					iLocal_1203 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1204, Local_1207, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_1006, iLocal_1203, "missheistfbisetup1leadinoutah_1_mcs_1", "leadin_janitor_idle_01", 4f, -8f, 0, 0, 1148846080, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1203, 1);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1024))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_1024, 1);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1023))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_1023, 1);
					}
					PED::SET_PED_COMPONENT_VARIATION(iLocal_1006, 9, 0, 0, 0);
					iLocal_919++;
				}
				break;
			
			case 15:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -113.7059f, -8.827343f, 69.57693f, -108.327f, -10.88776f, 72.76908f, 8.75f, 0, 1, 0))
				{
					TASK::CLEAR_PED_TASKS(iLocal_1006);
					iLocal_1203 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1204, Local_1207, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_1006, iLocal_1203, "missheistfbisetup1leadinoutah_1_mcs_1", "leadin_janitor_idle_action", 8f, -1000f, 0, 0, 1148846080, 0);
					iLocal_919++;
				}
				break;
			}
	}
	if (!iLocal_1211)
	{
		if (func_12(iLocal_1006) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Local_217) > 4f)
		{
			GlobalFunc_527("S1_FOLLOW2", 7500, 1);
			iLocal_1211 = 1;
		}
	}
	if (((!PED::IS_PED_INJURED(iLocal_1006) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1010, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1011, 0)) || iLocal_907 == 0)
	{
		switch (iLocal_907)
		{
			case 0:
				TASK::REQUEST_WAYPOINT_RECORDING("janitor_route");
				STREAMING::REQUEST_MODEL(joaat("a_f_y_hipster_03"));
				PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 9, 1, 1);
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
				if (iLocal_49)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "FBIs1UBER");
					TASK::REQUEST_WAYPOINT_RECORDING(sLocal_923);
					if (!GlobalFunc_188())
					{
						STREAMING::SET_FOCUS_POS_AND_VEL(-53.0454f, 18.6296f, 71.1259f, 0f, 0f, 0f);
						STREAMING::NEW_LOAD_SCENE_START(-53.0454f, 18.6296f, 71.1259f, SYSTEM::COS((167.0193f + 90f)), SYSTEM::SIN((167.0193f + 90f)), 0f, 125f, 0);
						iVar3 = MISC::GET_GAME_TIMER();
						while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() && (MISC::GET_GAME_TIMER() - iVar3) < 10000)
						{
							SYSTEM::WAIT(0);
						}
						STREAMING::CLEAR_FOCUS();
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					if (GlobalFunc_199() && GlobalFunc_188())
					{
						GlobalFunc_10627(&iLocal_1011, Local_884, fLocal_887, 0, 0, 0, 0, 1, joaat("asterope"), 0, 145);
					}
					while (!func_432(-53.0454f, 18.6296f, 71.1259f, 167.0193f, 1, 1))
					{
						SYSTEM::WAIT(0);
					}
					while (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_923))
					{
						SYSTEM::WAIT(0);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
					MISC::CLEAR_AREA(-83.2189f, -23.8057f, 65.321f, 50f, 1, 0, 0, 0);
					while ((!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "FBIs1UBER") || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("janitor_route")) || !STREAMING::HAS_MODEL_LOADED(joaat("a_f_y_hipster_03")))
					{
						SYSTEM::WAIT(0);
					}
					while (!ENTITY::DOES_ENTITY_EXIST(iLocal_1004))
					{
						func_431();
						SYSTEM::WAIT(0);
					}
					func_426();
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(iLocal_1011, -1, 1);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1006) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1010, 0))
					{
						while (!func_424(-59.3559f, -7.0657f, 69.2725f, 165.8312f))
						{
							SYSTEM::WAIT(0);
						}
					}
					if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1010, 0) && !PED::IS_PED_INJURED(iLocal_1006)) && PED::IS_PED_IN_VEHICLE(iLocal_1006, iLocal_1010, 0))
					{
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1010);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1010, 1, 1);
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_1010, 5f);
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_FOLLOW_JANITOR"))
					{
						AUDIO::START_AUDIO_SCENE("AGENCY_H_1_FOLLOW_JANITOR");
					}
					AUDIO::TRIGGER_MUSIC_EVENT("AH1_RESTART");
				}
				if (!PED::IS_PED_INJURED(iLocal_1006))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_1005, iLocal_1006, -1, 16, 3);
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1006, -1, 16, 3);
				}
				iLocal_1021 = INTERIOR::GET_INTERIOR_AT_COORDS(Local_229);
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_1021);
				STREAMING::SET_INTERIOR_ACTIVE(iLocal_1021, 1);
				INTERIOR::CAP_INTERIOR(iLocal_1021, 0);
				iLocal_919 = 0;
				func_7();
				iLocal_1210 = 0;
				CAM::SET_WIDESCREEN_BORDERS(0, 0);
				iLocal_907++;
				break;
			
			case 1:
				if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1011);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1011, 1, 1);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_1011, 12f);
					CAM::DO_SCREEN_FADE_IN(500);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1011, 0))
				{
					func_420(&iLocal_1011, &uLocal_1002, Local_223, &uLocal_1001);
					if (!iLocal_1210 && !PED::IS_PED_INJURED(iLocal_1006))
					{
						if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iLocal_1006, 0)) < SYSTEM::POW(50f, 2f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1010, 17)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1011, 0))
						{
							if (GlobalFunc_10618(&Local_52, "FBS1AUD", "FBS1_ARRIVE", 8, 0, 0, 0))
							{
								RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
								iLocal_1210 = 1;
							}
						}
					}
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1011))
					{
						if (((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_223, Global_18, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_223 - Vector(0.05f, 0f, 0f), 1f, 1f, 2.5f, 1, 1, 0)) && !ENTITY::IS_ENTITY_UPSIDEDOWN(iLocal_1011)) && GlobalFunc_552(1, 0, 1))
						{
							HUD::CLEAR_PRINTS();
							if (GlobalFunc_530(iLocal_1011, 1093140480, 1, 1056964608, 0, 1))
							{
								SYSTEM::SETTIMERB(0);
								HUD::REMOVE_BLIP(&uLocal_1001);
								iLocal_907++;
							}
						}
					}
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						HUD::CLEAR_PRINTS();
						HUD::REMOVE_BLIP(&uLocal_1001);
						HUD::REMOVE_BLIP(&uLocal_1002);
						iLocal_907++;
					}
				}
				break;
			
			case 2:
				if (iLocal_919 > 1)
				{
					SYSTEM::SETTIMERB(0);
					RECORDING::_0x293220DA1B46CEBC(0f, 10f, 4);
					iLocal_907++;
				}
				break;
			
			case 3:
				if (SYSTEM::TIMERB() > 1500)
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1011, 0))
					{
						if (GlobalFunc_10618(&Local_52, "FBS1AUD", "FBS1_OUT", 9, 0, 0, 0))
						{
							SYSTEM::SETTIMERB(0);
							iLocal_907++;
						}
					}
					else
					{
						SYSTEM::SETTIMERB(1500);
						iLocal_907++;
					}
				}
				break;
			
			case 4:
				if (SYSTEM::TIMERB() > 1500)
				{
					iLocal_907++;
				}
				break;
			
			case 5:
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_1006))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_1006, 1f, 0);
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -73.21686f, -16.19796f, 65.36488f, -104.95f, -4.713087f, 69.37826f, 6f, 0, 1, 0))
				{
					if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
					{
						CUTSCENE::REQUEST_CUTSCENE(sLocal_1027, 8);
					}
				}
				if (((func_12(PLAYER::PLAYER_PED_ID()) && func_12(iLocal_1006)) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID()))
				{
					if (INTERIOR::IS_VALID_INTERIOR(iLocal_1021))
					{
						INTERIOR::UNPIN_INTERIOR(iLocal_1021);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1004))
					{
						PED::DELETE_PED(&iLocal_1004);
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_f_y_hipster_01"));
					func_467(5);
				}
				break;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Local_217, 1) < 15f)
		{
			if (!iLocal_897)
			{
				func_517(5);
				iLocal_897 = 1;
			}
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REQUEST_CUTSCENE(sLocal_1027, 8);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_1006))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iLocal_1006, 0), 1) > 100f)
			{
				func_79(&Local_1042);
			}
		}
		if (iLocal_47 != 4)
		{
			GlobalFunc_10617(61, 6);
			GlobalFunc_10617(61, 1);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1010, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1010))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				}
				else
				{
					iVar4 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar4) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar4, 0))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar4, iLocal_1010))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1010);
						TASK::TASK_SMART_FLEE_PED(iLocal_1006, PLAYER::PLAYER_PED_ID(), 200f, 10000, 1, 0);
						GlobalFunc_4935();
						GlobalFunc_4956();
						func_10("S1_JSPOOK");
					}
				}
			}
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_FOLLOW_ON_FOOT"))
			{
				AUDIO::START_AUDIO_SCENE("AGENCY_H_1_FOLLOW_ON_FOOT");
			}
		}
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_FOCUS_ON_JANITOR"))
			{
				AUDIO::START_AUDIO_SCENE("AGENCY_H_1_FOCUS_ON_JANITOR");
			}
		}
		else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_FOCUS_ON_JANITOR"))
		{
			AUDIO::STOP_AUDIO_SCENE("AGENCY_H_1_FOCUS_ON_JANITOR");
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iLocal_1006, 0), 1) > 200f)
		{
			HUD::CLEAR_PRINTS();
			GlobalFunc_4935();
			GlobalFunc_4956();
			func_10("S1_FAILLV");
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_1006))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1010, 0) && (PED::IS_PED_IN_VEHICLE(iLocal_1006, iLocal_1010, 0) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_1006, 0), ENTITY::GET_ENTITY_COORDS(iLocal_1010, 0)) < 25f))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1010))
				{
					func_467(13);
				}
			}
		}
		if (func_524())
		{
			func_467(13);
		}
		if ((iLocal_919 < 7 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1006, -87.36494f, -31.34193f, 63.48099f, -80.96227f, -15.8854f, 70.97217f, 11.75f, 0, 1, 0)) && (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -87.36494f, -31.34193f, 63.48099f, -80.96227f, -15.8854f, 70.97217f, 11.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1011, -87.36494f, -31.34193f, 63.48099f, -80.96227f, -15.8854f, 70.97217f, 11.75f, 0, 1, 0)))
		{
			func_467(13);
		}
	}
	else if (PED::IS_PED_INJURED(iLocal_1006))
	{
		if (!PED::IS_PED_INJURED(iLocal_1004))
		{
			TASK::CLEAR_PED_TASKS(iLocal_1004);
			TASK::TASK_SMART_FLEE_PED(iLocal_1004, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
		}
		func_10("S1_FAILED_K");
	}
}

int func_524()//Position - 0x618F3
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1006))
	{
		fVar0 = 1f;
		fVar1 = 5f;
		fVar2 = 5f;
		fVar3 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iLocal_1006, 0));
		if (!PED::IS_PED_INJURED(iLocal_1006))
		{
			if (!func_12(iLocal_1006))
			{
				if (fVar3 < fVar2)
				{
					GlobalFunc_164("S1_BACKUP", 1000, 1);
					if (iLocal_1128 != 0)
					{
						fLocal_1129 = (fLocal_1129 + MISC::GET_FRAME_TIME());
					}
					iLocal_1128 = MISC::GET_GAME_TIMER();
				}
				else
				{
					iLocal_1128 = 0;
				}
				if (fVar3 < fVar2 && fLocal_1129 > GlobalFunc_551(fVar0, fVar1, (fVar3 / fVar2)))
				{
					return 1;
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -74.9495f, -20.33114f, 64.58515f, -101.6338f, -10.82294f, 70.84535f, 13f, 0, 1, 0) && fVar3 < 5f)
					{
						return 1;
					}
				}
			}
			if ((fVar3 < 10f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1006, -77.8852f, -15.15177f, 65.3689f, -106.7135f, -5.29953f, 72.15063f, 7f, 0, 1, 0)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_1006, PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1006, PLAYER::PLAYER_PED_ID(), 1))
			{
				bLocal_51 = false;
				return 1;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1004))
			{
				if (!PED::IS_PED_INJURED(iLocal_1004) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_1004, 0), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)) < 25f)
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1004))
					{
						iVar4 = 1;
					}
					if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), iLocal_1004))
					{
						iVar4 = 1;
					}
					if (((ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE())) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_1004, 0), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)) < 25f) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), iLocal_1004))
					{
						iVar4 = 1;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1013))
				{
					if (((((ENTITY::IS_ENTITY_DEAD(iLocal_1004) || PED::IS_PED_INJURED(iLocal_1004)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1004, PLAYER::PLAYER_PED_ID(), 1)) || iVar4) || PED::IS_PED_FLEEING(iLocal_1004)) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1013, 0) && VEHICLE::IS_VEHICLE_ALARM_ACTIVATED(iLocal_1013)))
					{
						if (!PED::IS_PED_INJURED(iLocal_1004))
						{
							if (!PED::IS_PED_FLEEING(iLocal_1004))
							{
								TASK::TASK_REACT_AND_FLEE_PED(iLocal_1004, PLAYER::PLAYER_PED_ID());
							}
						}
						if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_261) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_1006, 0), ENTITY::GET_ENTITY_COORDS(iLocal_1004, 0)) < 100f) || (PED::IS_PED_IN_ANY_VEHICLE(iLocal_1006, 0) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_1006, 0), Local_232) < 7f))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_1006, 0))
							{
								bLocal_51 = true;
							}
							else
							{
								bLocal_51 = false;
							}
							return 1;
						}
					}
				}
			}
			if (PED::IS_PED_FLEEING(iLocal_1006))
			{
				bLocal_51 = false;
				return 1;
			}
			if (((((((((((FIRE::IS_EXPLOSION_IN_SPHERE(0, ENTITY::GET_ENTITY_COORDS(iLocal_1006, 0), 10f) || FIRE::IS_EXPLOSION_IN_SPHERE(1, ENTITY::GET_ENTITY_COORDS(iLocal_1006, 0), 10f)) || FIRE::IS_EXPLOSION_IN_SPHERE(2, ENTITY::GET_ENTITY_COORDS(iLocal_1006, 0), 10f)) || FIRE::IS_EXPLOSION_IN_SPHERE(3, ENTITY::GET_ENTITY_COORDS(iLocal_1006, 0), 10f)) || FIRE::IS_EXPLOSION_IN_SPHERE(4, ENTITY::GET_ENTITY_COORDS(iLocal_1006, 0), 10f)) || FIRE::IS_EXPLOSION_IN_SPHERE(5, ENTITY::GET_ENTITY_COORDS(iLocal_1006, 0), 10f)) || FIRE::IS_EXPLOSION_IN_SPHERE(21, ENTITY::GET_ENTITY_COORDS(iLocal_1006, 0), 10f)) || FIRE::IS_EXPLOSION_IN_SPHERE(20, ENTITY::GET_ENTITY_COORDS(iLocal_1006, 0), 10f)) || FIRE::IS_EXPLOSION_IN_SPHERE(19, ENTITY::GET_ENTITY_COORDS(iLocal_1006, 0), 10f)) || FIRE::IS_EXPLOSION_IN_SPHERE(25, ENTITY::GET_ENTITY_COORDS(iLocal_1006, 0), 10f)) || FIRE::IS_EXPLOSION_IN_SPHERE(7, ENTITY::GET_ENTITY_COORDS(iLocal_1006, 0), 10f)) || FIRE::IS_EXPLOSION_IN_SPHERE(10, ENTITY::GET_ENTITY_COORDS(iLocal_1006, 0), 10f))
			{
				bLocal_51 = false;
				return 1;
			}
			if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_1006, 0), 5f, 1))
			{
				bLocal_51 = false;
				return 1;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
				{
					iVar5 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
			{
				iVar5 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar5))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar5, -74.64776f, -15.94403f, 69.25047f, -98.175f, -7.711004f, 65.12946f, 4.25f, 0, 1, 0))
				{
					bLocal_51 = true;
					return 1;
				}
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_1006))
			{
				return 1;
			}
		}
		else
		{
			bLocal_51 = false;
			return 1;
		}
		if ((fVar3 < 50f && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			if (!WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_1006, PLAYER::PLAYER_PED_ID()))
				{
					bLocal_51 = false;
					return 1;
				}
			}
			else
			{
				bLocal_51 = false;
				return 1;
			}
		}
		func_525();
	}
	return 0;
}

void func_525()//Position - 0x61E52
{
	if ((VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(-86.58f, -17.64f, 65.77f, 12f, 0, 4) != 0 || VEHICLE::GET_RANDOM_VEHICLE_BACK_BUMPER_IN_SPHERE(-86.58f, -17.64f, 65.77f, 12f, 0, 4, 0) != 0) || VEHICLE::GET_RANDOM_VEHICLE_FRONT_BUMPER_IN_SPHERE(-86.58f, -17.64f, 65.77f, 12f, 0, 4, 0) != 0)
	{
		TASK::TASK_SMART_FLEE_PED(iLocal_1006, PLAYER::PLAYER_PED_ID(), 200f, 20000, 1, 0);
		func_10("S1_JSPOOK");
	}
}



void func_528()//Position - 0x61FD0
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_1006) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1010, 0))
	{
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1010, Local_877, Local_880, fLocal_883, 0, 1, 0))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1006, -1817882002) != 1)
			{
				iVar0 = func_529(ENTITY::GET_ENTITY_COORDS(iLocal_1006, 0), &Local_1086) + 1;
				if (iVar0 >= 0 && iVar0 < Local_1086.x)
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_1010, 0), Local_1086[iVar0 /*3*/]) > 625f || iVar0 == 7)
					{
						iLocal_1111 = iVar0;
					}
					else if (iVar0 < (Local_1086.x - 1))
					{
						iLocal_1111 = iVar0 + 1;
					}
					if (iLocal_1111 >= 0)
					{
						iLocal_1112 = 0;
						if (iLocal_1111 < 2)
						{
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_1006, iLocal_1010, Local_1086[iLocal_1111 /*3*/], 15f, 0, joaat("stanier"), 786475, 3f, 0f);
						}
						else
						{
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_1006, iLocal_1010, Local_1086[iLocal_1111 /*3*/], 15f, 0, joaat("stanier"), 786603, 3f, 0f);
						}
					}
				}
			}
			else if (iLocal_1111 >= 0 && iLocal_1111 < Local_1086.x)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_1010, 0), Local_1086[iLocal_1111 /*3*/]) < 400f)
				{
					TASK::CLEAR_PED_TASKS(iLocal_1006);
				}
			}
		}
		else
		{
			switch (iLocal_1112)
			{
				case 0:
					TASK::REQUEST_WAYPOINT_RECORDING(sLocal_923);
					if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_923))
					{
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_1006, iLocal_1010, sLocal_923, 786469, 0, 8, -1, 10f, 0, 1073741824);
						iLocal_1112++;
					}
					break;
				
				case 1:
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1010))
					{
						iLocal_1112++;
					}
					break;
				
				case 2:
					if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1010))
					{
						iLocal_1112++;
					}
					break;
				}
			}
	}
}

int func_529(struct<3> Param0, int iParam3)//Position - 0x621A1
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	fVar2 = 99999f;
	iVar0 = 0;
	while (iVar0 < (*iParam3 - 1))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(MISC::_0x21C235BC64831E5A(Param0, *(iParam3[iVar0 /*3*/]), *(iParam3[iVar0 + 1 /*3*/]), 1), Param0, 1) < fVar2)
		{
			iVar1 = iVar0;
			fVar2 = SYSTEM::VDIST(MISC::_0x21C235BC64831E5A(Param0, *(iParam3[iVar0 /*3*/]), *(iParam3[iVar0 + 1 /*3*/]), 1), Param0);
		}
		iVar0++;
	}
	return iVar1;
}


void func_531()//Position - 0x6226D
{
	int iVar0;
	int iVar1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1011, 0) || iLocal_907 == 0)
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.85f);
		switch (iLocal_907)
		{
			case 0:
				bLocal_903 = true;
				fLocal_1197 = 0f;
				bLocal_896 = false;
				fLocal_1198 = 0f;
				iLocal_1112 = 0;
				STREAMING::REQUEST_ANIM_DICT("cellphone@");
				STREAMING::REQUEST_MODEL(joaat("prop_npc_phone"));
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
				if (iLocal_49)
				{
					func_472();
					PED::DELETE_PED(&iLocal_1006);
					VEHICLE::DELETE_VEHICLE(&iLocal_1010);
					while (!func_432(Local_220, fLocal_889, 1, 1))
					{
						SYSTEM::WAIT(0);
					}
					if (!GlobalFunc_188())
					{
						STREAMING::REQUEST_COLLISION_AT_COORD(Local_220);
						while (!ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(PLAYER::PLAYER_PED_ID()))
						{
							SYSTEM::WAIT(0);
						}
						STREAMING::SET_FOCUS_POS_AND_VEL(Local_220, 0f, 0f, 0f);
						STREAMING::NEW_LOAD_SCENE_START(Local_220, SYSTEM::COS((fLocal_889 + 90f)), SYSTEM::SIN((fLocal_889 + 90f)), 0f, 25f, 0);
						SYSTEM::SETTIMERA(0);
						while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() && SYSTEM::TIMERA() < 10000)
						{
							SYSTEM::WAIT(0);
						}
						STREAMING::CLEAR_FOCUS();
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					func_426();
					while (!func_424(80.8118f, -661.5384f, 30.6444f, 339.4735f))
					{
						SYSTEM::WAIT(0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1010, 0))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_1010, 94.7542f, -621.0219f, 31.2438f, 0, 0, 1);
						ENTITY::SET_ENTITY_QUATERNION(iLocal_1010, -0.0002f, -0.0024f, -0.1767f, 0.9843f);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_1010, "AGENCY_H_1_JANITORS_CAR_GROUP", 0);
					}
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "FBIs1UBER");
					while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "FBIs1UBER"))
					{
						SYSTEM::WAIT(0);
					}
					if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "FBIs1UBER"))
					{
						if (GlobalFunc_105(Local_262[0 /*3*/]))
						{
							func_573(&Local_262, 1, "FBIs1UBER");
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1010, 0))
					{
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_1010, 7f);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(iLocal_1011, -1, 1);
					}
					AUDIO::TRIGGER_MUSIC_EVENT("AH1_RESTART");
					Local_1036.f_1 = 0;
				}
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(199.8302f, 182.7406f, 64.70162f, 124.5474f, -22.54642f, 115.2314f, 17.5f, 0, 0, 1);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1010, 0) && !PED::IS_PED_INJURED(iLocal_1006))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_1010, 1);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_1006, 1);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_1010, 0);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_1006, 0);
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1010))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1010);
					}
					if (!HUD::DOES_BLIP_EXIST(uLocal_999))
					{
						uLocal_999 = GlobalFunc_6783(iLocal_1010, 0, 0);
					}
				}
				iLocal_898[0] = 0;
				iLocal_898[1] = 0;
				iLocal_898[2] = 0;
				iLocal_902 = 0;
				iLocal_920 = 0;
				iLocal_1130 = 0;
				SYSTEM::SETTIMERA(0);
				SYSTEM::SETTIMERB(0);
				func_7();
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_WAIT_FOR_CARS"))
				{
					AUDIO::STOP_AUDIO_SCENE("AGENCY_H_1_WAIT_FOR_CARS");
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_FOLLOW_JANITOR"))
				{
					AUDIO::START_AUDIO_SCENE("AGENCY_H_1_FOLLOW_JANITOR");
				}
				iLocal_998 = 1;
				iLocal_907++;
				break;
			
			case 1:
				func_421(500);
				if (HUD::DOES_BLIP_EXIST(uLocal_999) && !GlobalFunc_111())
				{
					func_79(&Local_1036);
				}
				switch (iLocal_920)
				{
					case 0:
						if (SYSTEM::TIMERA() > 7500)
						{
							func_565(Local_1048, 0);
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1011, 0))
							{
								if ((iLocal_1054 && !iLocal_1055) && !GlobalFunc_111())
								{
									SYSTEM::SETTIMERA(0);
									iLocal_1054 = 0;
									iLocal_1055 = 0;
									StringCopy(&Local_1056, "", 24);
									iLocal_920++;
								}
							}
						}
						break;
					
					case 1:
						func_565("", 1);
						if (SYSTEM::TIMERA() > 8000)
						{
							iLocal_920++;
						}
						break;
					
					case 2:
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1022))
						{
							STREAMING::REQUEST_MODEL(joaat("prop_npc_phone"));
							GlobalFunc_5115(&uLocal_991);
							STREAMING::REQUEST_ANIM_DICT("missheist_agency2aig_2");
							if (((STREAMING::HAS_MODEL_LOADED(joaat("prop_npc_phone")) && GlobalFunc_557(&uLocal_991)) && STREAMING::HAS_ANIM_DICT_LOADED("missheist_agency2aig_2")) && !PED::IS_PED_INJURED(iLocal_1005))
							{
								if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1022))
								{
									iLocal_1022 = OBJECT::CREATE_OBJECT(joaat("prop_npc_phone"), PED::GET_PED_BONE_COORDS(iLocal_1005, 60309, 0f, 0f, 0f), 1, 1, 0);
									GlobalFunc_556(&uLocal_991, 0, 20);
									ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_1022, iLocal_1005, PED::GET_PED_BONE_INDEX(iLocal_1005, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
									TASK::TASK_PLAY_ANIM(iLocal_1005, "missheist_agency2aig_2", "look_at_phone_a", 2f, -1000f, -1, 49, 0, 0, 0, 0);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_1005, iLocal_1022, -1, 0, 2);
									SYSTEM::SETTIMERA(0);
								}
							}
						}
						else if (SYSTEM::TIMERA() > 3000)
						{
							func_565(Local_1050, 0);
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1011, 0))
							{
								if ((iLocal_1054 && !iLocal_1055) && !GlobalFunc_111())
								{
									SYSTEM::SETTIMERA(0);
									iLocal_1054 = 0;
									iLocal_1055 = 0;
									StringCopy(&Local_1056, "", 24);
									iLocal_920++;
								}
							}
						}
						break;
					
					case 3:
						if (!PED::IS_PED_INJURED(iLocal_1005))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1005, "missheist_agency2aig_2", "look_at_phone_a", 3))
							{
								iVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_1005, "missheist_agency2aig_2", "look_at_phone_a");
								TASK::CLEAR_PED_TASKS(iLocal_1005);
								TASK::TASK_PLAY_ANIM(iLocal_1005, "missheist_agency2aig_2", "look_at_phone_a", 1000f, -2f, -1, 48, iVar0, 0, 0, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_1005, 0, 0);
								TASK::TASK_CLEAR_LOOK_AT(iLocal_1005);
								SYSTEM::SETTIMERA(0);
								iLocal_920++;
							}
						}
						break;
					
					case 4:
						if (((!PED::IS_PED_INJURED(iLocal_1005) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1005, "missheist_agency2aig_2", "look_at_phone_a", 3)) && ENTITY::DOES_ENTITY_EXIST(iLocal_1022)) && SYSTEM::TIMERA() > 1000)
						{
							SYSTEM::SETTIMERA(0);
							OBJECT::DELETE_OBJECT(&iLocal_1022);
							GlobalFunc_5114(&uLocal_991);
							GlobalFunc_555();
							iLocal_920++;
						}
						break;
					
					case 5:
						func_565("", 1);
						if (SYSTEM::TIMERA() > 4000)
						{
							iLocal_920++;
						}
						break;
					
					case 6:
						if (SYSTEM::TIMERA() > 3000)
						{
							func_565("FBS1_CASH", 0);
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1011, 0))
							{
								if ((iLocal_1054 && !iLocal_1055) && !GlobalFunc_111())
								{
									SYSTEM::SETTIMERA(0);
									iLocal_1054 = 0;
									iLocal_1055 = 0;
									StringCopy(&Local_1056, "", 24);
									iLocal_920++;
								}
							}
						}
						break;
					
					case 7:
						func_565("", 1);
						if (SYSTEM::TIMERA() > 10000)
						{
							iLocal_920++;
						}
						break;
					
					case 8:
						func_565("FBS1_TAIL3", 0);
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1011, 0))
						{
							if ((iLocal_1054 && !iLocal_1055) && !GlobalFunc_111())
							{
								SYSTEM::SETTIMERA(0);
								iLocal_1054 = 0;
								iLocal_1055 = 0;
								StringCopy(&Local_1056, "", 24);
								iLocal_920++;
							}
						}
						break;
					
					case 9:
						func_565("", 1);
						break;
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1010, 0))
				{
					if (VEHICLE::IS_VEHICLE_STOPPED_AT_TRAFFIC_LIGHTS(iLocal_1010))
					{
					}
					if (!PED::IS_PED_INJURED(iLocal_1006) && PED::IS_PED_IN_VEHICLE(iLocal_1006, iLocal_1010, 0))
					{
						func_528();
					}
					GlobalFunc_10629(&uLocal_947, iLocal_1010, 0, 0, 1, 1, 1);
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
						{
							iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
					{
						iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1010, iVar1, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1010, PLAYER::PLAYER_PED_ID(), 1))
						{
							if (!PED::IS_PED_INJURED(iLocal_1006))
							{
								PED::SET_PED_FLEE_ATTRIBUTES(iLocal_1006, 2, VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1010, 0));
								TASK::TASK_SMART_FLEE_PED(iLocal_1006, PLAYER::PLAYER_PED_ID(), 200f, 20000, 0, 0);
							}
							if (PED::IS_PED_IN_VEHICLE(iLocal_1005, iVar1, 0))
							{
								iLocal_907 = 2;
							}
							else
							{
								iLocal_907 = 20;
							}
							bLocal_50 = true;
							GlobalFunc_4956();
						}
					}
					if (func_535(1077936128, 1092616192, 1120403456, 1132068864))
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_999))
						{
							HUD::REMOVE_BLIP(&uLocal_999);
						}
						iLocal_907 = 3;
						bLocal_50 = true;
						GlobalFunc_4956();
					}
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1010, 10f, 10f, 3f, 0, 1, 0))
					{
						if (((PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) && PED::GET_VEHICLE_PED_IS_TRYING_TO_ENTER(PLAYER::PLAYER_PED_ID()) != 0) && PED::GET_VEHICLE_PED_IS_TRYING_TO_ENTER(PLAYER::PLAYER_PED_ID()) != 0) && !GlobalFunc_367(iLocal_1010, 0, 0, 0))
						{
							if (!PED::IS_PED_INJURED(iLocal_1006))
							{
								PED::SET_PED_FLEE_ATTRIBUTES(iLocal_1006, 2, VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1010, 0));
								TASK::TASK_SMART_FLEE_PED(iLocal_1006, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
							}
							SYSTEM::SETTIMERA(1500);
							iLocal_907 = 20;
							bLocal_50 = true;
							GlobalFunc_4956();
						}
					}
					if (((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_1011, 0), ENTITY::GET_ENTITY_COORDS(iLocal_1010, 0)) < 100f && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_1011, iLocal_1010)) || ((ENTITY::DOES_ENTITY_EXIST(iVar1) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar1, 0), ENTITY::GET_ENTITY_COORDS(iVar1, 0)) < 100f) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar1, iLocal_1010))) || func_534())
					{
						if (!bLocal_896)
						{
							if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1010, 0) && !PED::IS_PED_INJURED(iLocal_1006)) && PED::IS_PED_IN_VEHICLE(iLocal_1006, iLocal_1010, 0))
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1010);
								PED::SET_PED_FLEE_ATTRIBUTES(iLocal_1006, 2, VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1010, 0));
								TASK::TASK_SMART_FLEE_PED(iLocal_1006, PLAYER::PLAYER_PED_ID(), 200f, 20000, 0, 0);
								bLocal_50 = true;
								iLocal_907 = 2;
							}
						}
					}
					iVar1 = 0;
					if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1010, Local_1153, Local_1156, fLocal_1159, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1010, Local_1160, Local_1163, fLocal_1166, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1010, Local_1167, Local_1170, fLocal_1173, 0, 1, 0))
					{
						VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iLocal_1010, 1, 1);
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1010, Local_1174, Local_1177, fLocal_1180, 0, 1, 0))
					{
						VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iLocal_1010, 0, 1);
					}
					if (((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1010, 110.1414f, -578.8231f, 29.45908f, 104.0869f, -594.8766f, 34.62697f, 7.25f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1010, 125.5369f, -35.08237f, 64.56139f, 115.3332f, -62.90322f, 71.67062f, 9.75f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1010, -4.227216f, 24.24861f, 68.12498f, -33.93303f, 34.76137f, 77.05803f, 9.75f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1010, -45.32637f, -542.104f, 37.18411f, -10.14911f, -544.4824f, 43.56747f, 9.75f, 0, 1, 0))
					{
						VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iLocal_1010, 0, 0);
					}
				}
				func_533(&iLocal_1011, &uLocal_1002, iLocal_1010, &uLocal_999);
				break;
			
			case 2:
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1011))
				{
					if (GlobalFunc_10618(&Local_52, cLocal_922, "FBS1_SPKFAIL", 8, 0, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_907 = 20;
					}
				}
				else
				{
					iLocal_907 = 20;
				}
				break;
			
			case 20:
				if (SYSTEM::TIMERA() > 3000)
				{
					func_10("S1_JSPOOK");
				}
				break;
			
			case 3:
				if (HUD::DOES_BLIP_EXIST(uLocal_999))
				{
					HUD::REMOVE_BLIP(&uLocal_999);
				}
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1011))
				{
					if (GlobalFunc_10618(&Local_52, cLocal_922, "FBS1_LOSFAIL", 8, 0, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_907 = 30;
					}
				}
				else
				{
					iLocal_907 = 30;
				}
				break;
			
			case 30:
				if (SYSTEM::TIMERA() > 3000)
				{
					func_10("S1_FAILED");
				}
				break;
		}
		if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1010, 0) && !PED::IS_PED_INJURED(iLocal_1006)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1011, 0))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_877, Local_880, fLocal_883, 0, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1006, Local_877, Local_880, fLocal_883, 0, 1, 0))
			{
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					GlobalFunc_4948(&uLocal_947, 0, 0);
				}
				if (iLocal_907 == 1)
				{
				}
				if (bLocal_903)
				{
					GlobalFunc_553(528);
				}
				func_467(4);
			}
		}
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Local_877) < 40000f)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1004))
			{
				func_431();
			}
			if (!iLocal_897)
			{
				func_517(4);
				iLocal_897 = 1;
			}
		}
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_FOCUS_ON_JANITOR"))
			{
				AUDIO::START_AUDIO_SCENE("AGENCY_H_1_FOCUS_ON_JANITOR");
			}
		}
		else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_FOCUS_ON_JANITOR"))
		{
			AUDIO::STOP_AUDIO_SCENE("AGENCY_H_1_FOCUS_ON_JANITOR");
		}
	}
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
}


void func_533(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x62F89
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0) && ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, 0))
		{
			if (!HUD::DOES_BLIP_EXIST(*uParam1))
			{
				HUD::CLEAR_PRINTS();
				func_79(&Local_1032);
				*uParam1 = GlobalFunc_6783(*iParam0, 0, 0);
			}
			if (HUD::DOES_BLIP_EXIST(*uParam3))
			{
				HUD::REMOVE_BLIP(uParam3);
			}
		}
		else
		{
			if (!HUD::DOES_BLIP_EXIST(*uParam3))
			{
				if (ENTITY::IS_ENTITY_A_VEHICLE(iParam2))
				{
					*uParam3 = GlobalFunc_6783(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam2), 0, 0);
				}
				else if (ENTITY::IS_ENTITY_A_PED(iParam2))
				{
					*uParam3 = GlobalFunc_6797(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam2), 0, 145);
				}
			}
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				HUD::CLEAR_PRINTS();
				HUD::REMOVE_BLIP(uParam1);
			}
		}
	}
}

int func_534()//Position - 0x63040
{
	bool bVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	struct<3> Var8;
	struct<3> Var11[4];
	int iVar24;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1010, 0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0))
			{
				MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar1), &Var2, &Var5);
				Var8 = { Var5 - Var2 };
				Var11[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_1010, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, 0f, Var8.f_1, 0f)) };
				Var11[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_1010, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, 0f, -Var8.f_1, 0f)) };
				Var11[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_1010, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, Var8.x, 0f, 0f)) };
				Var11[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_1010, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, -Var8.x, 0f, 0f)) };
				iVar24 = 0;
				while (iVar24 < Var11.x)
				{
					if ((Var11[iVar24 /*3*/].f_1 > -1f && Var11[iVar24 /*3*/].f_1 < 7f) && MISC::ABSF(Var11[iVar24 /*3*/]) < 3.5f)
					{
						bVar0 = true;
					}
					iVar24++;
				}
			}
		}
		if (bVar0)
		{
			if (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()))
			{
				fLocal_1198 = (fLocal_1198 + (MISC::GET_FRAME_TIME() * 100f));
			}
			else
			{
				fLocal_1198 = (fLocal_1198 + MISC::GET_FRAME_TIME());
			}
		}
		else if (fLocal_1198 > 0f)
		{
			fLocal_1198 = (fLocal_1198 - (MISC::GET_FRAME_TIME() * 2f));
		}
		if (fLocal_1198 > 15f)
		{
			return 1;
		}
	}
	return 0;
}

int func_535(float fParam0, float fParam1, float fParam2, float fParam3)//Position - 0x63199
{
	float fVar0;
	float fVar1;
	
	fVar0 = (fParam3 - fParam2);
	fVar1 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iLocal_1010, 0));
	if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_1010) && fVar1 > fParam2)
	{
		fLocal_1197 = (fLocal_1197 + MISC::GET_FRAME_TIME());
	}
	else
	{
		fLocal_1197 = 0f;
	}
	if (fVar1 > fParam2 && fLocal_1197 > GlobalFunc_551(fParam0, fParam1, (1f - (GlobalFunc_253((fVar1 - fParam2), 0f, fVar0) / fVar0))))
	{
		return 1;
	}
	return 0;
}






























void func_565(char* sParam0, bool bParam1)//Position - 0x64130
{
	float fVar0;
	float fVar1;
	bool bVar2;
	
	if ((((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1010, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1011, 0)) && !PED::IS_PED_INJURED(iLocal_1006)) && !PED::IS_PED_INJURED(iLocal_1005)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "FBIs1UBER"))
	{
		fVar0 = func_572(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0));
		fVar1 = func_572(ENTITY::GET_ENTITY_COORDS(iLocal_1010, 0));
		bVar2 = fVar0 > fVar1;
		if ((!iLocal_1054 && !bParam1) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1011, 0))
			{
				if (GlobalFunc_10618(&Local_52, "FBS1AUD", sParam0, 8, 0, 0, 0))
				{
					iLocal_1054 = 1;
					iLocal_1130 = 0;
				}
			}
		}
		else
		{
			if (!iLocal_1130)
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1011, 0))
				{
					if (GlobalFunc_111())
					{
						Local_1133 = { GlobalFunc_514() };
						iLocal_1130 = 1;
						iLocal_1151 = 0;
						GlobalFunc_5105();
					}
				}
				else
				{
					if (!iLocal_1151)
					{
						if (func_570(&sLocal_1139, &cLocal_1145, bVar2) && (MISC::GET_GAME_TIMER() - iLocal_1131) > iLocal_1132)
						{
							iLocal_1151 = 1;
							iLocal_1152 = MISC::GET_GAME_TIMER();
						}
					}
					if (iLocal_1151)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_1152) < 3000)
						{
							if (GlobalFunc_111())
							{
								Local_1133 = { GlobalFunc_514() };
								GlobalFunc_5105();
							}
							if (!GlobalFunc_111())
							{
								if (iLocal_1151)
								{
									if ((!MISC::ARE_STRINGS_EQUAL(&sLocal_1139, "FBS1_LTURN") && !MISC::ARE_STRINGS_EQUAL(&sLocal_1139, "FBS1_RTURN")) && !MISC::IS_STRING_NULL(&sLocal_1139))
									{
										if (bParam1)
										{
											if (GlobalFunc_10631(&Local_52, "FBS1AUD", &sLocal_1139, &sLocal_1139, "FBS1_MRESP", "FBS1_MRESP", 8, 0, 0))
											{
												if (MISC::ARE_STRINGS_EQUAL(&sLocal_1139, "FBS1_FRONT") || MISC::ARE_STRINGS_EQUAL(&sLocal_1139, "FBS1_CLOSE"))
												{
													bLocal_903 = false;
												}
												iLocal_1130 = 1;
												iLocal_1151 = 0;
												iLocal_1131 = MISC::GET_GAME_TIMER();
											}
										}
										else if (GlobalFunc_10630(&Local_52, "FBS1AUD", &sLocal_1139, &cLocal_1145, 9, 0, 0))
										{
											if (MISC::ARE_STRINGS_EQUAL(&sLocal_1139, "FBS1_FRONT") || MISC::ARE_STRINGS_EQUAL(&sLocal_1139, "FBS1_CLOSE"))
											{
												bLocal_903 = false;
											}
											iLocal_1130 = 1;
											iLocal_1151 = 0;
											iLocal_1131 = MISC::GET_GAME_TIMER();
										}
									}
									else if (GlobalFunc_10630(&Local_52, "FBS1AUD", &sLocal_1139, &cLocal_1145, 9, 0, 0))
									{
										if (MISC::ARE_STRINGS_EQUAL(&cLocal_1145, "FBS1_LTURN_1"))
										{
											iLocal_898[0] = 1;
										}
										if (MISC::ARE_STRINGS_EQUAL(&cLocal_1145, "FBS1_LTURN_2"))
										{
											iLocal_898[1] = 1;
										}
										if (MISC::ARE_STRINGS_EQUAL(&cLocal_1145, "FBS1_LTURN_3"))
										{
											iLocal_898[2] = 1;
										}
										if (MISC::ARE_STRINGS_EQUAL(&cLocal_1145, "FBS1_RTURN_1"))
										{
											iLocal_902 = 1;
										}
										iLocal_1130 = 1;
										iLocal_1151 = 0;
										iLocal_1131 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
						else
						{
							iLocal_1151 = 0;
						}
					}
				}
			}
			if (iLocal_1130)
			{
				if (!GlobalFunc_111() && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1011, 0))
				{
					if (!bParam1)
					{
						if (GlobalFunc_10626(&Local_52, "FBS1AUD", sParam0, &Local_1133, 8, 0, 0))
						{
							iLocal_1130 = 0;
						}
					}
					else
					{
						iLocal_1130 = 0;
					}
				}
			}
		}
	}
}





int func_570(char* sParam0, char* sParam1, bool bParam2)//Position - 0x648C0
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1010, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1011, 0))
	{
		fVar1 = 7f;
		fVar2 = 100f;
		fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_1011, 0), ENTITY::GET_ENTITY_COORDS(iLocal_1010, 0), 1);
		StringCopy(sParam0, "", 24);
		StringCopy(sParam1, "", 24);
		if (bParam2 && !iLocal_998)
		{
			iVar0 = 1;
			StringCopy(sParam0, "FBS1_FRONT", 24);
			iLocal_998 = 1;
		}
		else if (func_571())
		{
			iVar0 = 1;
			StringCopy(sParam0, "FBS1_CALM", 24);
		}
		else if (fVar3 < fVar1 && !bParam2)
		{
			iVar0 = 1;
			StringCopy(sParam0, "FBS1_CLOSE", 24);
		}
		else if (fVar3 > fVar2 && !bParam2)
		{
			iVar0 = 1;
			StringCopy(sParam0, "FBS1_FAR", 24);
		}
		else if (!GlobalFunc_111())
		{
			if ((fVar3 < 100f && fVar3 > 40f) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_1010))
			{
				if (!iLocal_898[0])
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1010, Local_1153, Local_1156, fLocal_1159, 0, 1, 0))
					{
						StringCopy(sParam0, "FBS1_LTURN", 24);
						StringCopy(sParam1, "FBS1_LTURN_1", 24);
						iVar0 = 1;
					}
				}
				if (!iLocal_898[1])
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1010, Local_1160, Local_1163, fLocal_1166, 0, 1, 0))
					{
						StringCopy(sParam0, "FBS1_LTURN", 24);
						StringCopy(sParam1, "FBS1_LTURN_2", 24);
						iVar0 = 1;
					}
				}
				if (!iLocal_898[2])
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1010, Local_1167, Local_1170, fLocal_1173, 0, 1, 0))
					{
						StringCopy(sParam0, "FBS1_LTURN", 24);
						StringCopy(sParam1, "FBS1_LTURN_3", 24);
						iVar0 = 1;
					}
				}
				if (!iLocal_902)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1010, Local_1174, Local_1177, fLocal_1180, 0, 1, 0))
					{
						StringCopy(sParam0, "FBS1_RTURN", 24);
						StringCopy(sParam1, "FBS1_RTURN_1", 24);
						iVar0 = 1;
					}
				}
			}
		}
	}
	return iVar0;
}

int func_571()//Position - 0x64A94
{
	int iVar0;
	
	iVar0 = 0;
	if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1011, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1010, 0)) && !PED::IS_PED_INJURED(iLocal_1006))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1011, 0))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_1011, 0), ENTITY::GET_ENTITY_COORDS(iLocal_1010, 0)) < 10000f)
			{
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_1011))
				{
					iVar0 = 1;
				}
				if (ENTITY::GET_ENTITY_SPEED(iLocal_1011) > 60f)
				{
					iVar0 = 1;
				}
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					iVar0 = 1;
				}
				if (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()))
				{
					iVar0 = 1;
				}
			}
		}
	}
	return iVar0;
}

float func_572(struct<3> Param0)//Position - 0x64B2E
{
	int iVar0;
	float fVar1;
	
	iVar0 = func_529(Param0, &Local_1086);
	if (iVar0 >= 0 && iVar0 < Local_1086.x)
	{
		fVar1 = SYSTEM::TO_FLOAT(iVar0);
		if (iVar0 < (Local_1086.x - 1))
		{
			fVar1 = (fVar1 + MISC::_0x7F8F6405F4777AF6(Param0, Local_1086[iVar0 /*3*/], Local_1086[iVar0 + 1 /*3*/], 1));
		}
		return fVar1;
	}
	return -1f;
}

void func_573(var uParam0, int iParam1, char* sParam2)//Position - 0x64B8F
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, sParam2))
	{
		fVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam1, sParam2);
		fVar1 = (fVar0 / 199f);
		*(uParam0[199 /*3*/]) = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam1, fVar0, sParam2) };
		iVar2 = 0;
		while (iVar2 < *uParam0)
		{
			*(uParam0[iVar2 /*3*/]) = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam1, (fVar1 * IntToFloat(iVar2)), sParam2) };
			iVar2++;
		}
	}
}


void func_575()//Position - 0x64C1C
{
	int iVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	bool bVar9;
	
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1011, 0) || iLocal_907 == 0)
	{
		fVar1 = 0.2f;
		switch (iLocal_907)
		{
			case 0:
				iLocal_1192 = 0;
				VEHICLE::REQUEST_VEHICLE_RECORDING(1, "FBIs1UBER");
				if (iLocal_49)
				{
					STREAMING::REQUEST_COLLISION_AT_COORD(Local_220);
					while (!func_432(Local_220, fLocal_889, 1, 1))
					{
						SYSTEM::WAIT(0);
					}
					if (!GlobalFunc_188())
					{
						STREAMING::SET_FOCUS_POS_AND_VEL(Local_220, 0f, 0f, 0f);
						STREAMING::NEW_LOAD_SCENE_START(Local_220, SYSTEM::COS((fLocal_889 + 90f)), SYSTEM::SIN((fLocal_889 + 90f)), 0f, 25f, 0);
						SYSTEM::SETTIMERA(0);
						while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() && SYSTEM::TIMERA() < 10000)
						{
							SYSTEM::WAIT(0);
						}
						STREAMING::CLEAR_FOCUS();
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1011, 0))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_1011, 72.6414f, -702.4333f, 31.18f, 0, 0, 1);
						ENTITY::SET_ENTITY_QUATERNION(iLocal_1011, 0.0019f, 0.0174f, -0.174f, 0.9846f);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1011, 1, 1);
					}
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(iLocal_1011, -1, 1);
					}
					func_426();
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1011, 0))
				{
					iLocal_1009 = VEHICLE::CREATE_VEHICLE(ENTITY::GET_ENTITY_MODEL(iLocal_1011), 72.6414f, -702.4333f, 31.18f, 0f, 1, 1);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_1009, 0.0019f, 0.0174f, -0.174f, 0.9846f);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1009);
					iLocal_1008 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1009, 26, GlobalFunc_4917(0), -1, 1, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1008, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_1009, 1);
					ENTITY::SET_ENTITY_COLLISION(iLocal_1009, 0, 0);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_1009, 0);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_GET_TO_FIB"))
					{
						AUDIO::STOP_AUDIO_SCENE("AGENCY_H_1_GET_TO_FIB");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_WAIT_FOR_CARS"))
					{
						AUDIO::START_AUDIO_SCENE("AGENCY_H_1_WAIT_FOR_CARS");
					}
				}
				iLocal_906 = 0;
				iLocal_1191 = 0;
				iLocal_905 = 10000;
				iLocal_909 = 1;
				iLocal_908 = MISC::GET_RANDOM_INT_IN_RANGE(3, 5);
				func_7();
				bLocal_1193 = true;
				AUDIO::TRIGGER_MUSIC_EVENT("AH1_START");
				SYSTEM::SETTIMERA(0);
				iLocal_907++;
				break;
			
			case 1:
				if (SYSTEM::TIMERA() > 100)
				{
					if (!PED::IS_PED_INJURED(iLocal_1008))
					{
						iLocal_1194 = CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE();
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
						{
							func_473(500);
							while (!CAM::IS_SCREEN_FADED_OUT())
							{
								SYSTEM::WAIT(0);
							}
						}
						func_592();
						func_591(&Local_959, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(PED::GET_PED_BONE_COORDS(iLocal_1008, 31086, 0f, 0f, 0f), 339.9642f, Local_241), Local_244, 50f, 20, 10, 3, 1101004800, 0, 0, -1082130432, 0);
						func_590(&Local_959, 1);
						func_590(&uLocal_1003, 0);
						if (CAM::DOES_CAM_EXIST(uLocal_1003))
						{
							if (MISC::IS_PC_VERSION() && GRAPHICS::_GET_ASPECT_RATIO(1) > 1.8f)
							{
								fVar1 = 0.075f;
							}
							CAM::SET_CAM_NEAR_CLIP(uLocal_1003, fVar1);
						}
						if ((!PED::IS_PED_INJURED(iLocal_1005) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1005, "missheist_agency2aig_2", "look_at_phone_a", 3)) && ENTITY::DOES_ENTITY_EXIST(iLocal_1022))
						{
							OBJECT::DELETE_OBJECT(&iLocal_1022);
							GlobalFunc_5114(&uLocal_991);
							GlobalFunc_555();
							TASK::CLEAR_PED_TASKS(iLocal_1005);
							TASK::TASK_CLEAR_LOOK_AT(iLocal_1005);
							SYSTEM::SETTIMERA(0);
							iLocal_920++;
						}
						CAM::SET_WIDESCREEN_BORDERS(1, 0);
						MISC::CLEAR_AREA(Local_220, 200f, 1, 0, 0, 0);
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
						{
							SYSTEM::WAIT(500);
							func_421(500);
							while (!CAM::IS_SCREEN_FADED_IN())
							{
								SYSTEM::WAIT(0);
							}
						}
						CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(0);
					}
					CAM::DO_SCREEN_FADE_IN(500);
					func_79(&Local_1034);
					iLocal_907++;
				}
				break;
			
			case 2:
				if ((CAM::DOES_CAM_EXIST(Local_959) && CAM::IS_CAM_ACTIVE(Local_959)) && CAM::IS_CAM_RENDERING(Local_959))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				}
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_1011, 1);
				if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				}
				switch (iLocal_1192)
				{
					case 0:
						if (iLocal_906 < iLocal_908)
						{
							func_583(Local_1077[iLocal_906 /*2*/].f_1, Local_934[iLocal_906 /*3*/]);
						}
						if (SYSTEM::TIMERA() > iLocal_905 || iLocal_906 == 0)
						{
							if (iLocal_906 < iLocal_908)
							{
								if (iLocal_906 == 3)
								{
									iVar2 = 102;
								}
								else
								{
									iVar2 = (101 + iLocal_906);
								}
								if (func_582(&(Local_1077[iLocal_906 /*2*/]), iLocal_924[iLocal_906], iLocal_929, iVar2, iLocal_910[(2 * iLocal_906)], iLocal_910[(2 * iLocal_906) + 1]))
								{
									iLocal_1195 = 0;
									iLocal_1196 = 0;
									iLocal_1192 = 1;
									iLocal_905 = MISC::GET_RANDOM_INT_IN_RANGE(12000, 22000);
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1077[iLocal_906 /*2*/].f_1, 0))
									{
										AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_1077[iLocal_906 /*2*/].f_1, "AGENCY_H_1_NON_TARGET_CARS_GROUP", 0);
									}
									SYSTEM::SETTIMERA(0);
								}
							}
						}
						break;
					
					case 1:
						func_583(Local_1077[iLocal_906 /*2*/].f_1, Local_934[iLocal_906 /*3*/]);
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1077[iLocal_906 /*2*/].f_1, Local_863, Local_866, fLocal_869, 0, 1, 0))
						{
							if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_NON_TARGET_CARS"))
							{
								AUDIO::START_AUDIO_SCENE("AGENCY_H_1_NON_TARGET_CARS");
							}
							if (!iLocal_893)
							{
								GlobalFunc_1("S1_FOCUS");
							}
							if (GlobalFunc_10618(&Local_52, "FBS1AUD", "FBS1_SPOT", 8, 0, 0, 0))
							{
								RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
								iLocal_1192 = 2;
							}
						}
						break;
					
					case 2:
						if (func_583(Local_1077[iLocal_906 /*2*/].f_1, Local_934[iLocal_906 /*3*/]))
						{
							iLocal_1191++;
							iLocal_1192 = 3;
						}
						else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1077[iLocal_906 /*2*/].f_1, Local_863, Local_866, fLocal_869, 0, 1, 0))
						{
							iLocal_1192 = 4;
						}
						break;
					
					case 3:
						func_583(Local_1077[iLocal_906 /*2*/].f_1, Local_934[iLocal_906 /*3*/]);
						if (GlobalFunc_10618(&Local_52, "FBS1AUD", "FBS1_IDENT", 8, 0, 0, 0))
						{
							RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
							iLocal_1192 = 5;
						}
						break;
					
					case 4:
						func_583(Local_1077[iLocal_906 /*2*/].f_1, Local_934[iLocal_906 /*3*/]);
						if (GlobalFunc_10618(&Local_52, "FBS1AUD", "FBS1_MISS", 8, 0, 0, 0))
						{
							iLocal_1192 = 5;
						}
						break;
					
					case 5:
						func_583(Local_1077[iLocal_906 /*2*/].f_1, Local_934[iLocal_906 /*3*/]);
						if (!GlobalFunc_111())
						{
							if (iLocal_909 < 4)
							{
								StringCopy(&Var3, "FBS1_SOC", 24);
								StringIntConCat(&Var3, iLocal_909, 24);
								if (GlobalFunc_10618(&Local_52, "FBS1AUD", &Var3, 8, 0, 0, 0))
								{
									iLocal_1192 = 6;
									iLocal_909++;
								}
							}
							else
							{
								iLocal_1192 = 6;
							}
						}
						break;
					
					case 6:
						func_583(Local_1077[iLocal_906 /*2*/].f_1, Local_934[iLocal_906 /*3*/]);
						if (!GlobalFunc_111())
						{
							if ((ENTITY::DOES_ENTITY_EXIST(Local_1077[iLocal_906 /*2*/].f_1) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1077[iLocal_906 /*2*/].f_1, Local_870, Local_873, fLocal_876, 0, 1, 0)) || !ENTITY::DOES_ENTITY_EXIST(Local_1077[iLocal_906 /*2*/].f_1))
							{
								iLocal_906++;
								iLocal_905 = MISC::GET_RANDOM_INT_IN_RANGE(1000, 5000);
								if (iLocal_906 >= iLocal_908)
								{
									func_517(3);
									if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_NON_TARGET_CARS"))
									{
										AUDIO::STOP_AUDIO_SCENE("AGENCY_H_1_NON_TARGET_CARS");
									}
									if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_JANITORS_CAR"))
									{
										AUDIO::START_AUDIO_SCENE("AGENCY_H_1_JANITORS_CAR");
									}
									else if (ENTITY::DOES_ENTITY_EXIST(iLocal_1010))
									{
										AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_1010, "AGENCY_H_1_JANITORS_CAR_GROUP", 0);
									}
									iLocal_1195 = 0;
									iLocal_1196 = 0;
									iLocal_907++;
								}
								else
								{
									iLocal_1192 = 0;
								}
							}
						}
						break;
				}
				if (iLocal_906 < iLocal_908 && iLocal_906 >= 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_1077[iLocal_906 /*2*/].f_1) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1077[iLocal_906 /*2*/].f_1, 0))
					{
						if (!iLocal_1195)
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1077[iLocal_906 /*2*/], 94.87687f, -703.0773f, 31.52341f, 98.58408f, -692.7567f, 36.0824f, 9f, 0, 1, 0))
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FBI_HEIST_SETUP_1_Car_Park_Skid_CR", Local_1077[iLocal_906 /*2*/].f_1, 0, 0, 0);
								iLocal_1195 = 1;
							}
						}
						if (!iLocal_1196)
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1077[iLocal_906 /*2*/], 84.49801f, -699.1079f, 30.42747f, 88.14184f, -689.0353f, 35.59156f, 4f, 0, 1, 0))
							{
								if (iLocal_906 == 0)
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FBI_HEIST_SETUP_1_Car_Park_tyre_bump_CR", Local_1077[iLocal_906 /*2*/].f_1, 0, 0, 0);
								}
								else if (iLocal_906 == 1)
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FBI_HEIST_SETUP_1_Car_Park_tyre_bump_creak_CR", Local_1077[iLocal_906 /*2*/].f_1, 0, 0, 0);
								}
								else if (iLocal_906 == 2)
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FBI_HEIST_SETUP_1_Car_Park_tyre_bump_no_skid_CR", Local_1077[iLocal_906 /*2*/].f_1, 0, 0, 0);
								}
								else
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FBI_HEIST_SETUP_1_Car_Park_tyre_bump_scraped_CR", Local_1077[iLocal_906 /*2*/].f_1, 0, 0, 0);
								}
								iLocal_1196 = 1;
							}
						}
					}
				}
				iVar0 = 0;
				while (iVar0 < Local_1077)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1077[iVar0 /*2*/].f_1, 0) && !PED::IS_PED_INJURED(Local_1077[iVar0 /*2*/]))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1077[iVar0 /*2*/].f_1))
						{
							TASK::TASK_VEHICLE_DRIVE_WANDER(Local_1077[iVar0 /*2*/], Local_1077[iVar0 /*2*/].f_1, 20f, 262275);
							if (ENTITY::IS_ENTITY_OCCLUDED(Local_1077[iVar0 /*2*/].f_1))
							{
								AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_1077[iVar0 /*2*/].f_1, 0);
								PED::DELETE_PED(&(Local_1077[iVar0 /*2*/]));
								VEHICLE::DELETE_VEHICLE(&(Local_1077[iVar0 /*2*/].f_1));
							}
						}
					}
					iVar0++;
				}
				break;
			
			case 3:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1010, 0))
				{
					if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "FBIs1UBER") && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1010))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1010, 0))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(iLocal_1010, 1, "FBIs1UBER", 5f, 262144);
							SYSTEM::SETTIMERA(0);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1010) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1010, 0))
					{
						if (!iLocal_1195)
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1010, 94.87687f, -703.0773f, 31.52341f, 98.58408f, -692.7567f, 36.0824f, 4.75f, 0, 1, 0))
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FBI_HEIST_SETUP_1_Car_Park_Skid_CR", iLocal_1010, 0, 0, 0);
								iLocal_1195 = 1;
							}
						}
						if (!iLocal_1196)
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1010, 84.49801f, -699.1079f, 30.42747f, 88.14184f, -689.0353f, 35.59156f, 4f, 0, 1, 0))
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FBI_HEIST_SETUP_1_Car_Park_tyre_bump_CR", iLocal_1010, 0, 0, 0);
								iLocal_1196 = 1;
							}
						}
					}
					if (bLocal_894)
					{
						if (CAM::DOES_CAM_EXIST(Local_959))
						{
							CAM::SET_CAM_ACTIVE(Local_959, 0);
							CAM::DESTROY_CAM(Local_959, 0);
							ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
						}
						if (!GlobalFunc_7635(&uLocal_1113, 0, 1, 0) || SYSTEM::TIMERA() > 3000)
						{
							SYSTEM::SETTIMERA(0);
							iVar0 = 0;
							while (iVar0 < Local_1077)
							{
								if ((ENTITY::DOES_ENTITY_EXIST(Local_1077[iVar0 /*2*/]) && ENTITY::DOES_ENTITY_EXIST(Local_1077[iVar0 /*2*/].f_1)) && ENTITY::IS_ENTITY_OCCLUDED(Local_1077[iVar0 /*2*/].f_1))
								{
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1077[iVar0 /*2*/]));
									ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1077[iVar0 /*2*/].f_1));
								}
								iVar0++;
							}
							bLocal_1193 = false;
							GlobalFunc_4948(&uLocal_1113, 0, 0);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_1011, 0);
							SYSTEM::SETTIMERA(0);
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1010);
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(iLocal_1010, 1, "FBIs1UBER", 5f, 262275);
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_JANITORS_CAR"))
							{
								AUDIO::STOP_AUDIO_SCENE("AGENCY_H_1_JANITORS_CAR");
							}
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
							CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(iLocal_1194);
							CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
							if (CAM::DOES_CAM_EXIST(uLocal_1003))
							{
								CAM::DESTROY_CAM(uLocal_1003, 0);
							}
							iLocal_907++;
						}
					}
					else
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1010, Local_863, Local_866, fLocal_869, 0, 1, 0))
						{
							if (!iLocal_893)
							{
								GlobalFunc_1("S1_FOCUS");
							}
						}
						if (func_583(iLocal_1010, Local_931))
						{
							if (!bLocal_894)
							{
								GlobalFunc_4956();
								if (GlobalFunc_10618(&Local_52, "FBS1AUD", "FBS1_JANID", 8, 0, 0, 0))
								{
									if (iLocal_1191 == iLocal_908)
									{
										GlobalFunc_553(527);
									}
									RECORDING::_0x293220DA1B46CEBC(4f, 10f, 4);
									bLocal_894 = true;
									bLocal_896 = false;
									SYSTEM::SETTIMERA(0);
								}
							}
						}
					}
					if (((!bLocal_894 && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1010, Local_863, Local_866, fLocal_869, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1010, Local_870, Local_873, fLocal_876, 0, 1, 0)) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iLocal_1010, 0), 1) > 75f)
					{
						SYSTEM::SETTIMERA(0);
						iLocal_907 = 100;
					}
					iVar0 = 0;
					while (iVar0 < Local_1077)
					{
						if ((ENTITY::DOES_ENTITY_EXIST(Local_1077[iVar0 /*2*/]) && ENTITY::DOES_ENTITY_EXIST(Local_1077[iVar0 /*2*/].f_1)) && ENTITY::IS_ENTITY_OCCLUDED(Local_1077[iVar0 /*2*/].f_1))
						{
							AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_1077[iVar0 /*2*/].f_1, 0);
							PED::DELETE_PED(&(Local_1077[iVar0 /*2*/]));
							VEHICLE::DELETE_VEHICLE(&(Local_1077[iVar0 /*2*/].f_1));
							if (iVar0 == (Local_1077 - 1))
							{
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_NON_TARGET_CARS"))
								{
									AUDIO::STOP_AUDIO_SCENE("AGENCY_H_1_NON_TARGET_CARS");
								}
							}
						}
						iVar0++;
					}
				}
				break;
			
			case 4:
				func_580();
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_FOLLOW_JANITOR"))
				{
					AUDIO::START_AUDIO_SCENE("AGENCY_H_1_FOLLOW_JANITOR");
				}
				if (SYSTEM::TIMERA() > 500)
				{
					if (GlobalFunc_10618(&Local_52, "FBS1AUD", "FBS1_FOLLOW", 8, 0, 0, 0))
					{
						func_467(3);
						uLocal_999 = GlobalFunc_6783(iLocal_1010, 0, 0);
						WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
						iVar0 = 0;
						while (iVar0 < Local_1077)
						{
							PED::DELETE_PED(&(Local_1077[iVar0 /*2*/]));
							VEHICLE::DELETE_VEHICLE(&(Local_1077[iVar0 /*2*/].f_1));
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_924[iVar0]);
							iVar0++;
						}
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_929);
						HUD::CLEAR_HELP(1);
						SYSTEM::SETTIMERA(0);
					}
				}
				break;
			
			case 100:
				if (SYSTEM::TIMERA() > 3000)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_1010))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1010);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(iLocal_1010, 1, "FBIs1UBER", 5f, 262275);
					}
					SYSTEM::WAIT(0);
					func_10("S1_FAILED");
				}
				break;
			}
	}
	if (!PAD::IS_CONTROL_PRESSED(0, 85))
	{
		if (CAM::DOES_CAM_EXIST(Local_959))
		{
			GlobalFunc_4995(&Local_959, 0, 1, 0, 0, 1045220557, 0);
			if (CAM::DOES_CAM_EXIST(uLocal_1003) && CAM::IS_CAM_ACTIVE(uLocal_1003))
			{
				CAM::SET_CAM_ROT(Local_959, Local_244, 2);
			}
		}
	}
	if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "FBIs1UBER"))
	{
		func_424(98.6395f, -728.7055f, 32.134f, 347.8271f);
		if (GlobalFunc_105(Local_262[0 /*3*/]))
		{
			func_573(&Local_262, 1, "FBIs1UBER");
		}
	}
	if (CAM::DOES_CAM_EXIST(uLocal_1003) && CAM::IS_CAM_RENDERING(uLocal_1003))
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_FOCUS_ON_PLATES"))
		{
			AUDIO::START_AUDIO_SCENE("AGENCY_H_1_FOCUS_ON_PLATES");
		}
	}
	else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_FOCUS_ON_PLATES"))
	{
		AUDIO::STOP_AUDIO_SCENE("AGENCY_H_1_FOCUS_ON_PLATES");
	}
	if (!iLocal_893)
	{
		if (GlobalFunc_74("S1_FOCUS"))
		{
			bVar9 = false;
			iVar0 = 0;
			while (iVar0 < Local_1077)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1077[iVar0 /*2*/].f_1))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1077[iVar0 /*2*/].f_1, Local_863, Local_866, fLocal_869, 0, 1, 0))
					{
						bVar9 = true;
					}
				}
				iVar0++;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1010))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1010, Local_863, Local_866, fLocal_869, 0, 1, 0))
				{
					bVar9 = true;
				}
			}
			if (!bVar9)
			{
				HUD::CLEAR_HELP(1);
			}
		}
		if (CAM::DOES_CAM_EXIST(uLocal_1003))
		{
			if (CAM::IS_CAM_RENDERING(uLocal_1003) && CAM::GET_CAM_FOV(uLocal_1003) < 20f)
			{
				if (GlobalFunc_74("S1_FOCUS"))
				{
					HUD::CLEAR_HELP(1);
					iLocal_893 = 1;
				}
			}
		}
	}
	if (bLocal_1193)
	{
		if ((CAM::DOES_CAM_EXIST(Local_959) && CAM::IS_CAM_RENDERING(Local_959)) || (CAM::DOES_CAM_EXIST(uLocal_1003) && CAM::IS_CAM_RENDERING(uLocal_1003)))
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(5);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(11);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(12);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(17);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
		if (!PAD::IS_CONTROL_PRESSED(0, 85))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
		}
		PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 188, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 187, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 100, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 28, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 27, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 236, 1);
		GlobalFunc_187();
	}
}





void func_580()//Position - 0x662CC
{
	if (CAM::DOES_CAM_EXIST(uLocal_1003))
	{
		CAM::SET_CAM_ACTIVE(uLocal_1003, 0);
		CAM::DESTROY_CAM(uLocal_1003, 0);
	}
	if (CAM::DOES_CAM_EXIST(Local_959))
	{
		CAM::SET_CAM_ACTIVE(Local_959, 0);
		CAM::DESTROY_CAM(Local_959, 0);
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
	}
	if (!ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
	}
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
}


int func_582(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x66348
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1) || !ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		STREAMING::REQUEST_MODEL(iParam1);
		STREAMING::REQUEST_MODEL(iParam2);
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam3, "FBIs1");
		if ((STREAMING::HAS_MODEL_LOADED(iParam1) && STREAMING::HAS_MODEL_LOADED(iParam2)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam3, "FBIs1"))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
			{
				uParam0->f_1 = VEHICLE::CREATE_VEHICLE(iParam1, 99.8736f, -721.168f, 32.1399f, 342.0303f, 1, 1);
				if (iParam4 != -1 && iParam5 != -1)
				{
					VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_1, iParam4, iParam5);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_1, 0))
			{
				*uParam0 = PED::CREATE_PED_INSIDE_VEHICLE(uParam0->f_1, 26, iParam2, -1, 1, 1);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_1, 0) && !PED::IS_PED_INJURED(*uParam0))
			{
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(uParam0->f_1, iParam3, "FBIs1", 10f, 786477);
			}
		}
		return 0;
	}
	return 1;
}

int func_583(int iParam0, struct<3> Param1)//Position - 0x66441
{
	int iVar0;
	float fVar1;
	
	iVar0 = 0;
	if (CAM::DOES_CAM_EXIST(Local_959))
	{
		if ((((ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0)) && SYSTEM::VDIST(Local_220, ENTITY::GET_ENTITY_COORDS(iParam0, 0)) < 130.36f) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_870, Local_873, fLocal_876, 0, 1, 0)) && GlobalFunc_7635(&uLocal_1113, 0, 1, 0))
		{
			if (iLocal_1125 == 0)
			{
				iLocal_1125 = 1;
			}
		}
		else if (iLocal_1125 != 0 && iLocal_1125 != 4)
		{
			iLocal_1125 = 4;
		}
		fVar1 = 0.5f;
		switch (iLocal_1125)
		{
			case 1:
				if (!CAM::DOES_CAM_EXIST(uLocal_1003))
				{
					uLocal_1003 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, CAM::GET_CAM_COORD(Local_959), 0f, 0f, 0f, 3.5f, 0, 2);
				}
				if (CAM::DOES_CAM_EXIST(uLocal_1003))
				{
					if (MISC::IS_PC_VERSION() && GRAPHICS::_GET_ASPECT_RATIO(1) > 1.8f)
					{
						fVar1 = 0.25f;
					}
					CAM::SET_CAM_NEAR_CLIP(uLocal_1003, fVar1);
					CAM::SET_CAM_FOV(uLocal_1003, 3.5f);
					CAM::_0xA2767257A320FC82(uLocal_1003, 1);
					CAM::POINT_CAM_AT_ENTITY(uLocal_1003, iParam0, Param1, 1);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_1003, Local_959, 1500, 0, 1);
					fLocal_888 = 3.5f;
					iLocal_1125 = 2;
				}
				break;
			
			case 2:
				if (!CAM::IS_CAM_INTERPOLATING(uLocal_1003))
				{
					iLocal_1125 = 3;
				}
				break;
			
			case 3:
				if (fLocal_888 > 3.5f)
				{
					fLocal_888 = (fLocal_888 + ((-fLocal_888 * 2f) * SYSTEM::TIMESTEP()));
				}
				CAM::SET_CAM_FOV(uLocal_1003, fLocal_888);
				if (fLocal_888 < 5f)
				{
					if (func_584(iParam0, 0, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_863, Local_866, fLocal_869, 0, 1, 0))
					{
						iVar0 = 1;
					}
				}
				break;
			
			case 4:
				if (CAM::DOES_CAM_EXIST(uLocal_1003))
				{
					if (!CAM::IS_CAM_RENDERING(Local_959) && CAM::IS_CAM_ACTIVE(uLocal_1003))
					{
						CAM::SET_CAM_FOV(Local_959, 50f);
						CAM::SET_CAM_ACTIVE(uLocal_1003, 0);
						CAM::SET_CAM_ACTIVE(Local_959, 1);
					}
					if (CAM::IS_CAM_ACTIVE(Local_959) && CAM::IS_CAM_RENDERING(Local_959))
					{
						CAM::DESTROY_CAM(uLocal_1003, 0);
					}
					GlobalFunc_4948(&uLocal_1113, 0, 0);
				}
				else
				{
					iLocal_1125 = 0;
				}
				break;
			}
	}
	return iVar0;
}

int func_584(int iParam0, bool bParam1, bool bParam2)//Position - 0x66674
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	float fVar15;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Local_226) };
		Var3 = { func_588(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), Local_235), Var0) };
		Var6 = { Var0 - ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
		Var9 = { Var3 - Var0 };
		Var12 = { Var6 - Var0 };
		fVar15 = func_585(Var12, Var9);
		if (bParam2)
		{
		}
		if (bParam1)
		{
		}
		if (MISC::ABSF(fVar15) < 60f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

float func_585(struct<3> Param0, struct<3> Param3)//Position - 0x6670B
{
	float fVar0;
	
	Param0 = { func_586(Param0) };
	Param3 = { func_586(Param3) };
	fVar0 = (MISC::ATAN2(Param3.f_1, Param3.x) - MISC::ATAN2(Param0.f_1, Param0.x));
	if (fVar0 > 180f)
	{
		fVar0 = (fVar0 - 360f);
	}
	else if (fVar0 < -180f)
	{
		fVar0 = (fVar0 + 360f);
	}
	return fVar0;
}

Vector3 func_586(struct<3> Param0)//Position - 0x66771
{
	float fVar0;
	
	fVar0 = func_587(Param0);
	if (Param0.x != 0f)
	{
		Param0.x = (Param0.x / fVar0);
	}
	else
	{
		Param0.x = 0f;
	}
	if (Param0.f_1 != 0f)
	{
		Param0.f_1 = (Param0.f_1 / fVar0);
	}
	else
	{
		Param0.f_1 = 0f;
	}
	if (Param0.f_2 != 0f)
	{
		Param0.f_2 = (Param0.f_2 / fVar0);
	}
	else
	{
		Param0.f_2 = 0f;
	}
	return Param0;
}

var func_587(struct<3> Param0)//Position - 0x667D3
{
	var uVar0;
	
	uVar0 = SYSTEM::SQRT((((Param0.x * Param0.x) + (Param0.f_1 * Param0.f_1)) + (Param0.f_2 * Param0.f_2)));
	return uVar0;
}

Vector3 func_588(struct<3> Param0, struct<3> Param3)//Position - 0x667FC
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var3 = { Param3 - Param0 };
	func_589(&Var3, 0.3f);
	Var0 = { Param0 + Var3 };
	return Var0;
}

void func_589(var uParam0, float fParam1)//Position - 0x6682D
{
	*uParam0 = { func_586(*uParam0) };
	*uParam0 = (*uParam0 * fParam1);
	uParam0->f_1 = (uParam0->f_1 * fParam1);
	uParam0->f_2 = (uParam0->f_2 * fParam1);
}

void func_590(var uParam0, bool bParam1)//Position - 0x66860
{
	float fVar0;
	
	if (!CAM::DOES_CAM_EXIST(*uParam0))
	{
		*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
		CAM::SET_CAM_ACTIVE(*uParam0, bParam1);
		CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", 0.15f);
	}
	CAM::STOP_CAM_POINTING(*uParam0);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1009, 0) && !PED::IS_PED_INJURED(iLocal_1008))
	{
		CAM::SET_CAM_ROT(*uParam0, Local_244, 2);
		CAM::SET_CAM_COORD(*uParam0, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(PED::GET_PED_BONE_COORDS(iLocal_1008, 31086, 0.05f, 0f, 0f), 339.9642f, Local_241));
		if (*uParam0 == Local_959)
		{
			Local_959.f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(PED::GET_PED_BONE_COORDS(iLocal_1008, 31086, 0.05f, 0f, 0f), 339.9642f, Local_241) };
		}
		fVar0 = 0.2f;
		if (MISC::IS_PC_VERSION() && GRAPHICS::_GET_ASPECT_RATIO(1) > 1.8f)
		{
			fVar0 = 0.075f;
		}
		CAM::SET_CAM_NEAR_CLIP(*uParam0, fVar0);
		CAM::SET_CAM_FAR_CLIP(*uParam0, 600f);
		CAM::SET_CAM_USE_SHALLOW_DOF_MODE(*uParam0, 1);
		CAM::_0xA2767257A320FC82(*uParam0, 1);
	}
	CAM::SET_CAM_FOV(*uParam0, 50f);
	if (bParam1)
	{
		if (!CAM::IS_CAM_ACTIVE(*uParam0))
		{
			CAM::SET_CAM_ACTIVE(*uParam0, true);
		}
	}
}

void func_591(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)//Position - 0x66986
{
	uParam0->f_1 = { Param1 };
	uParam0->f_4 = { Param4 };
	uParam0->f_7 = fParam7;
	uParam0->f_20 = iParam8;
	uParam0->f_21 = iParam9;
	uParam0->f_22 = iParam10;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = fParam7;
	uParam0->f_18 = fParam7;
	uParam0->f_23 = iParam12;
	uParam0->f_19 = iParam11;
	*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
	CAM::SET_CAM_ACTIVE(*uParam0, true);
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam15)
	{
		CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", 0.19f);
	}
	CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
	if (fParam14 > 0f)
	{
		CAM::SET_CAM_NEAR_CLIP(*uParam0, fParam14);
	}
	if (uParam0->f_23)
	{
		HUD::LOCK_MINIMAP_ANGLE(iParam13);
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = 0f;
	uParam0->f_30 = 0f;
	uParam0->f_26 = 0;
	uParam0->f_28 = 0;
	uParam0->f_27 = 0;
}

void func_592()//Position - 0x66A80
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1011, 0))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1011, 0))
		{
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1011, -1);
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_1011, 72.6414f, -702.4333f, 31.18f, 0, 0, 1);
		ENTITY::SET_ENTITY_QUATERNION(iLocal_1011, 0.0019f, 0.0174f, -0.174f, 0.9846f);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1011);
	}
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
	ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
	WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
	WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 1);
	GlobalFunc_6685(0);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
}



void func_595()//Position - 0x66C03
{
	struct<6> Var0;
	int iVar6;
	struct<3> Var7;
	struct<3> Var10;
	
	VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1011))
	{
		if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1011, 0) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1011, 0)) && iLocal_907 < 2)
		{
			VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_1011);
		}
	}
	if (!iLocal_1187)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
	}
	switch (iLocal_907)
	{
		case 0:
			if (iLocal_49)
			{
				if (!GlobalFunc_188())
				{
					func_522(Local_247, fLocal_250, 0, 12000, 1123680256, 0);
				}
				while (!func_432(Local_884, fLocal_887, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1011);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1005))
				{
					while (!func_598(&iLocal_1005, 12, Local_251, fLocal_254))
					{
						SYSTEM::WAIT(0);
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_1005))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_1005, iLocal_1011, 0);
				}
				if (GlobalFunc_188())
				{
					GlobalFunc_5108(0, -1, 1);
				}
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_247, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_250);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 900, 0, 1, 0);
				func_7();
				func_427(iLocal_1005);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1011, 0))
			{
				VEHICLE::SET_PLAYERS_LAST_VEHICLE(iLocal_1011);
			}
			uLocal_1002 = GlobalFunc_6783(iLocal_1011, 0, 0);
			iLocal_1187 = 0;
			iLocal_895 = 0;
			iLocal_1190 = 0;
			iLocal_920 = 0;
			if (!PED::IS_PED_INJURED(iLocal_1005) && PED::IS_PED_IN_VEHICLE(iLocal_1005, iLocal_1011, 0))
			{
				func_478(0, "STAGE_GO_TO_FIB", iLocal_1005, 1);
			}
			RECORDING::_0x293220DA1B46CEBC(0f, 10f, 4);
			iLocal_907++;
			break;
		
		case 1:
			func_421(500);
			if (!PED::IS_PED_INJURED(iLocal_1005) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1011, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1011, 0))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_1005, iLocal_1011, 0))
					{
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("AGENCY_H_1_GET_TO_FIB"))
						{
							AUDIO::START_AUDIO_SCENE("AGENCY_H_1_GET_TO_FIB");
						}
						GlobalFunc_4956();
						if (GlobalFunc_10618(&Local_52, "FBS1AUD", "FBS1_INTRO", 8, 0, 0, 0))
						{
							SYSTEM::SETTIMERA(0);
							iLocal_907++;
						}
					}
				}
				else if (!iLocal_1187)
				{
					GlobalFunc_164("CMN_GENGETINY", 7500, 1);
					iLocal_1187 = 1;
				}
			}
			break;
		
		case 2:
			if (SYSTEM::TIMERA() > 7500)
			{
				func_418("FBS1_TOFIB", iLocal_1011);
			}
			switch (iLocal_920)
			{
				case 0:
					if (iLocal_1054 && !iLocal_1055)
					{
						Var0 = { GlobalFunc_560() };
						if (GlobalFunc_111() && MISC::ARE_STRINGS_EQUAL(&Var0, "FBS1_TOFIB"))
						{
							iLocal_920++;
						}
					}
					break;
				
				case 1:
					STREAMING::REQUEST_MODEL(joaat("prop_npc_phone"));
					GlobalFunc_5115(&uLocal_991);
					STREAMING::REQUEST_ANIM_DICT("missheist_agency2aig_2");
					if (((STREAMING::HAS_MODEL_LOADED(joaat("prop_npc_phone")) && GlobalFunc_557(&uLocal_991)) && STREAMING::HAS_ANIM_DICT_LOADED("missheist_agency2aig_2")) && !PED::IS_PED_INJURED(iLocal_1005))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1022))
						{
							iLocal_1022 = OBJECT::CREATE_OBJECT(joaat("prop_npc_phone"), PED::GET_PED_BONE_COORDS(iLocal_1005, 60309, 0f, 0f, 0f), 1, 1, 0);
							GlobalFunc_556(&uLocal_991, 0, 20);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_1022, iLocal_1005, PED::GET_PED_BONE_INDEX(iLocal_1005, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
							TASK::TASK_PLAY_ANIM(iLocal_1005, "missheist_agency2aig_2", "look_at_phone_a", 2f, -1000f, -1, 49, 0, 0, 0, 0);
							TASK::TASK_LOOK_AT_ENTITY(iLocal_1005, iLocal_1022, -1, 0, 2);
							iLocal_920++;
						}
					}
					break;
				
				case 2:
					if (iLocal_1054 && !iLocal_1055)
					{
						if (!GlobalFunc_111())
						{
							iLocal_920++;
						}
					}
					break;
				
				case 3:
					if (!PED::IS_PED_INJURED(iLocal_1005))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1005, "missheist_agency2aig_2", "look_at_phone_a", 3))
						{
							iVar6 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_1005, "missheist_agency2aig_2", "look_at_phone_a");
							TASK::CLEAR_PED_TASKS(iLocal_1005);
							TASK::TASK_PLAY_ANIM(iLocal_1005, "missheist_agency2aig_2", "look_at_phone_a", 1000f, -2f, -1, 48, iVar6, 0, 0, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_1005, 0, 0);
							TASK::TASK_CLEAR_LOOK_AT(iLocal_1005);
							SYSTEM::SETTIMERA(0);
							iLocal_920++;
						}
					}
					break;
				
				case 4:
					if (((!PED::IS_PED_INJURED(iLocal_1005) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1005, "missheist_agency2aig_2", "look_at_phone_a", 3)) && ENTITY::DOES_ENTITY_EXIST(iLocal_1022)) && SYSTEM::TIMERA() > 1000)
					{
						SYSTEM::SETTIMERA(0);
						OBJECT::DELETE_OBJECT(&iLocal_1022);
						GlobalFunc_5114(&uLocal_991);
						GlobalFunc_555();
						iLocal_920++;
					}
					break;
			}
			func_420(&iLocal_1011, &uLocal_1002, Local_220 - Vector(0.5f, 0.5f, 0.5f), &uLocal_1000);
			if (!GlobalFunc_111() || MISC::GET_PROFILE_SETTING(203) == 0)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1011, 0))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1011))
					{
						func_79(&Local_1038);
					}
				}
			}
			if (((!PED::IS_PED_INJURED(iLocal_1005) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1011, 0)) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1011)) && PED::IS_PED_IN_VEHICLE(iLocal_1005, iLocal_1011, 0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 72.25f, -703.94f, 30.53f, 15f, 15f, Global_18.f_2, 1, 1, 0))
				{
					Var7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_220, fLocal_889, 0f, 1f, 0f) - Local_220 };
					Var10 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_1011, 0), ENTITY::GET_ENTITY_HEADING(iLocal_1011), 0f, 1f, 0f) - ENTITY::GET_ENTITY_COORDS(iLocal_1011, 0) };
					unk_0x6A3E157475DBFCD9(Local_220, Local_220 + Var7, 0, 0, 255, 255);
					unk_0x6A3E157475DBFCD9(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) + Var10, 0, 0, 255, 255);
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 74.09583f, -698.9903f, 30.53067f, 70.89998f, -707.9105f, 32.52912f, 5.25f, 0, 1, 0))
					{
						if (!ENTITY::IS_ENTITY_UPSIDEDOWN(iLocal_1011) && GlobalFunc_552(1, 0, 1))
						{
							if (MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var7.x, Var7.f_1, Var10.x, Var10.f_1)) < 30f)
							{
								HUD::REMOVE_BLIP(&uLocal_1000);
								GlobalFunc_5105();
								iLocal_907++;
							}
							else if (!iLocal_1188)
							{
								if (!GlobalFunc_111())
								{
									if (GlobalFunc_10618(&Local_52, cLocal_922, "FBS1_TURNRND", 8, 0, 0, 0))
									{
										iLocal_1189 = MISC::GET_GAME_TIMER();
										iLocal_1188 = 1;
									}
								}
							}
							else if ((MISC::GET_GAME_TIMER() - iLocal_1189) > 15000)
							{
								iLocal_1188 = 0;
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1011, 0))
			{
				if (GlobalFunc_530(iLocal_1011, 5f, 5, 1056964608, 0, 1))
				{
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
						SYSTEM::SETTIMERA(0);
						iLocal_907++;
					}
				}
			}
			break;
		
		case 4:
			if (iLocal_1190)
			{
				iLocal_907++;
			}
			break;
		
		case 5:
			if (SYSTEM::TIMERA() > 2000)
			{
				func_467(2);
			}
			break;
	}
	if (!iLocal_1190)
	{
		if (iLocal_907 > 2)
		{
			if (GlobalFunc_10618(&Local_52, cLocal_922, "FBS1_ATFIB", 8, 0, 0, 0))
			{
				RECORDING::_0x293220DA1B46CEBC(10f, 10f, 4);
				iLocal_1190 = 1;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1011))
	{
		func_432(Local_884, fLocal_887, 0, 0);
	}
	func_596();
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Local_220, 1) < 300f)
	{
		if (!iLocal_895)
		{
			MISC::CLEAR_AREA(Local_220, 100f, 1, 0, 0, 0);
			MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(Local_863, Local_866, fLocal_869, 0, 0, 0, 0, 0);
			iLocal_895 = 1;
		}
	}
	else if (iLocal_895)
	{
		iLocal_895 = 0;
	}
	if (!iLocal_897)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Local_220, 1) < 100f)
		{
			func_517(2);
			iLocal_897 = 1;
		}
	}
}

void func_596()//Position - 0x673D8
{
	int iVar0;
	struct<3> Var1[5];
	float fVar17[5];
	int iVar23;
	
	if ((((!ENTITY::DOES_ENTITY_EXIST(iLocal_1014[0]) || !ENTITY::DOES_ENTITY_EXIST(iLocal_1014[1])) || !ENTITY::DOES_ENTITY_EXIST(iLocal_1014[2])) || !ENTITY::DOES_ENTITY_EXIST(iLocal_1014[3])) || !ENTITY::DOES_ENTITY_EXIST(iLocal_1014[4]))
	{
		Var1[0 /*3*/] = { 159.2625f, -683.4668f, 32.1298f };
		Var1[1 /*3*/] = { 174.8298f, -706.0013f, 32.1304f };
		Var1[2 /*3*/] = { 115.1112f, -734.7641f, 32.1331f };
		Var1[3 /*3*/] = { 130.1378f, -702.7861f, 32.1246f };
		Var1[4 /*3*/] = { 118.7168f, -698.4962f, 32.1258f };
		fVar17[0] = 336.4295f;
		fVar17[1] = 247.5462f;
		fVar17[2] = 339.0851f;
		fVar17[3] = 160.7991f;
		fVar17[4] = 342.2677f;
		iVar0 = 0;
		while (iVar0 < iLocal_1014)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1014[iVar0]))
			{
				if (iVar0 < 4)
				{
					iVar23 = iLocal_924[iVar0];
				}
				else
				{
					iVar23 = iLocal_930;
				}
				STREAMING::REQUEST_MODEL(iVar23);
				if (STREAMING::HAS_MODEL_LOADED(iVar23))
				{
					iLocal_1014[iVar0] = VEHICLE::CREATE_VEHICLE(iVar23, Var1[iVar0 /*3*/], fVar17[iVar0], 1, 1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1014[iVar0]);
					VEHICLE::SET_VEHICLE_ALARM(iLocal_1014[iVar0], 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_1014[iVar0], 7);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_1014[iVar0], 0, 0);
					if (iVar0 == 0)
					{
						VEHICLE::GET_VEHICLE_COLOURS(iLocal_1014[iVar0], &(iLocal_910[0]), &(iLocal_910[1]));
					}
					else if (iVar0 == 1)
					{
						VEHICLE::GET_VEHICLE_COLOURS(iLocal_1014[iVar0], &(iLocal_910[2]), &(iLocal_910[3]));
					}
					else if (iVar0 == 2)
					{
						VEHICLE::GET_VEHICLE_COLOURS(iLocal_1014[iVar0], &(iLocal_910[4]), &(iLocal_910[5]));
					}
					else if (iVar0 == 3)
					{
						VEHICLE::GET_VEHICLE_COLOURS(iLocal_1014[iVar0], &(iLocal_910[6]), &(iLocal_910[7]));
					}
					if (iVar0 == 4)
					{
						VEHICLE::SET_VEHICLE_COLOURS(iLocal_1014[iVar0], 35, 35);
						VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_1014[iVar0], 33, 33);
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_1014[iVar0], sLocal_921);
						GlobalFunc_534(iLocal_1014[iVar0], iVar0);
					}
				}
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_1014)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1014[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1014[iVar0], 0))
			{
				if (VEHICLE::IS_VEHICLE_ALARM_ACTIVATED(iLocal_1014[iVar0]))
				{
					fLocal_1181 = (fLocal_1181 + MISC::GET_FRAME_TIME());
				}
				GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(iLocal_1014[iVar0], 0) + Vector(1.5f, 0f, 0f), 0f, 255, 0, 255, 255);
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1014[iVar0], 0) || fLocal_1181 > 3f)
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1014[iVar0], PLAYER::PLAYER_PED_ID(), 1))
					{
					}
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_1014[iVar0]))
					{
					}
					if (VEHICLE::IS_VEHICLE_ALARM_ACTIVATED(iLocal_1014[iVar0]))
					{
					}
					func_10("S1_SECFAIL");
				}
			}
			else
			{
				func_10("S1_SECFAIL");
			}
		}
		iVar0++;
	}
}


int func_598(int iParam0, int iParam1, struct<3> Param2, float fParam5)//Position - 0x6771A
{
	STREAMING::REQUEST_MODEL(GlobalFunc_4946(iParam1));
	if (STREAMING::HAS_MODEL_LOADED(GlobalFunc_4946(iParam1)))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			GlobalFunc_6705(iParam0, iParam1, Param2, fParam5, 1);
		}
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			ENTITY::SET_ENTITY_COORDS(*iParam0, Param2, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(*iParam0, fParam5);
			if (iParam1 == 12)
			{
				PED::SET_PED_PROP_INDEX(*iParam0, 1, 0, 0, false);
			}
			func_427(*iParam0);
			return 1;
		}
	}
	return 0;
}


void func_600()//Position - 0x67823
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1011) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1011, 0))
	{
		VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_1011);
	}
	if (!iLocal_1187)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
	}
	switch (iLocal_907)
	{
		case 0:
			if (iLocal_49 || GlobalFunc_2(0))
			{
				while (!func_432(Local_884, fLocal_887, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				func_522(Local_884, fLocal_250, 0, 12000, 1123680256, 0);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_884, 1, 0, 0, 1);
				func_426();
				iLocal_49 = 0;
				iLocal_907 = -1;
			}
			else if ((!ENTITY::DOES_ENTITY_EXIST(iLocal_1030) || !ENTITY::DOES_ENTITY_EXIST(iLocal_1029)) || !ENTITY::DOES_ENTITY_EXIST(iLocal_1005))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_1005))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[0], 1, 1);
					iLocal_1005 = Global_86864.f_9[0];
					Global_86864.f_9[0] = 0;
				}
				if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[0]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_1030))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_28[0], 1, 1);
					iLocal_1030 = Global_86864.f_28[0];
					Global_86864.f_28[0] = 0;
				}
				if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[1]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_1029))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_28[1], 1, 1);
					iLocal_1029 = Global_86864.f_28[1];
					Global_86864.f_28[1] = 0;
				}
			}
			else
			{
				GlobalFunc_562(66);
				iLocal_907++;
			}
			break;
		
		case -1:
			iLocal_907 = 1;
			break;
		
		case 1:
			if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == -1)
			{
				CUTSCENE::REQUEST_CUTSCENE(sLocal_1028, 8);
				if (!iLocal_1186)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1005) && !PED::IS_PED_INJURED(iLocal_1005))
					{
						if (CUTSCENE::IS_CUTSCENE_ACTIVE())
						{
							if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
							{
								CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Lester", iLocal_1005, 0);
								iLocal_1186 = 1;
							}
						}
					}
				}
			}
			if (GlobalFunc_109())
			{
				if (GlobalFunc_550(sLocal_1028))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1005))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1005, "Lester", 2, GlobalFunc_4946(12), 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_1005))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1005, "Lester", 0, 0, 0);
						}
						CUTSCENE::START_CUTSCENE(0);
						RECORDING::_0x48621C9FCA3EBD28(4);
						STREAMING::REMOVE_ANIM_DICT("missheistfbisetup1leadinoutah_1_int");
						iLocal_907++;
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -828834893) != 1)
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
				}
				else
				{
					CUTSCENE::REMOVE_CUTSCENE();
				}
			}
			break;
		
		case 2:
			iVar0 = 0;
			while (iVar0 < Global_86864.f_28)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[iVar0]))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_28[iVar0], 1, 1);
					OBJECT::DELETE_OBJECT(&(Global_86864.f_28[iVar0]));
				}
				iVar0++;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1030))
			{
				OBJECT::DELETE_OBJECT(&iLocal_1030);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1029))
			{
				OBJECT::DELETE_OBJECT(&iLocal_1029);
			}
			iLocal_907++;
			break;
		
		case 3:
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			CAM::STOP_GAMEPLAY_HINT(0);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1011))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
				{
					iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, 1, 1);
					if (func_608(iVar1))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1) != PLAYER::PLAYER_PED_ID() && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1) != 0)
						{
							bVar2 = true;
						}
					}
					if (!VEHICLE::IS_BIG_VEHICLE(iVar1) && !bVar2)
					{
						GlobalFunc_9754(iVar1, 702.5282f, -980.0775f, 23.1412f, 225.0234f, 24, 0);
					}
					VEHICLE::DELETE_VEHICLE(&iVar1);
				}
				MISC::CLEAR_AREA(Local_884, 100f, 1, 0, 0, 0);
				GlobalFunc_76(24);
				while (!func_432(Local_884, fLocal_887, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
			else
			{
				MISC::CLEAR_AREA(Local_884, 100f, 1, 0, 0, 0);
			}
			PAD::DISABLE_CONTROL_ACTION(0, 18, 1);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1005))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", 0)))
				{
					iLocal_1005 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", 0));
					func_427(iLocal_1005);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1005) && ENTITY::DOES_ENTITY_EXIST(iLocal_1011))
			{
				iLocal_907++;
			}
			break;
		
		case 4:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1011, 0))
			{
				GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(iLocal_1011, 0) + Vector(2f, 0f, 0f), 0f, 255, 0, 255, 255);
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
				{
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 900, 0, 1, 0);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lester", 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_1005))
					{
						PED::SET_PED_INTO_VEHICLE(iLocal_1005, iLocal_1011, 0);
						func_427(iLocal_1005);
					}
				}
			}
			if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			}
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				MISC::CLEAR_AREA(Local_1070, 300f, 1, 0, 0, 0);
				MISC::CLEAR_AREA(Local_1063, 300f, 1, 0, 0, 0);
				VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(0);
				if (!PED::IS_PED_INJURED(iLocal_1005) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1011, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_1005, iLocal_1011, 0))
					{
						PED::SET_PED_INTO_VEHICLE(iLocal_1005, iLocal_1011, 0);
						func_427(iLocal_1005);
					}
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				func_421(500);
				func_7();
				SYSTEM::SETTIMERA(0);
				RECORDING::_0x81CBAE94390F9F89();
				func_467(1);
			}
			break;
	}
}








int func_608(int iParam0)//Position - 0x681EE
{
	if (VEHICLE::IS_VEHICLE_MODEL(iParam0, GlobalFunc_561()))
	{
		return 1;
	}
	return 0;
}



void func_611()//Position - 0x68239
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (HUD::IS_RADAR_HIDDEN())
	{
		HUD::DISPLAY_RADAR(1);
	}
	uLocal_1025 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(29.3953f, -963.6519f, 714.334f) - Vector(0f, 20f, 20f), Vector(29.3953f, -963.6519f, 714.334f) + Vector(10f, 20f, 20f), 0, 1, 1, 1);
	HUD::REQUEST_ADDITIONAL_TEXT("FBS1AUD", 6);
	HUD::REQUEST_ADDITIONAL_TEXT("H1SET1", 0);
	GlobalFunc_173(&Local_52, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	STREAMING::REQUEST_MODEL(joaat("prop_ld_test_01"));
	STREAMING::REQUEST_MODEL(joaat("tailgater"));
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FBI_Heist_1_Tail_Janitor_01", 0);
	if (GlobalFunc_199())
	{
		HUD::DISPLAY_RADAR(1);
		func_473(500);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
		{
			SYSTEM::WAIT(0);
		}
		func_474();
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) + Vector(2f, 0f, 0f), 1, 0, 0, 1);
		}
		iVar0 = GlobalFunc_198();
		if (Global_84544 == 1)
		{
			iVar0++;
		}
		if (iVar0 > 4)
		{
			Local_1182 = { 714.4953f, -964.8629f, 29.3953f };
			fLocal_1185 = 188.1813f;
			PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 9, 0, 0);
			while (!PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID()))
			{
				SYSTEM::WAIT(0);
			}
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
			PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
			func_467(6);
			iLocal_907 = 10;
			CUTSCENE::REQUEST_CUTSCENE("ah_1_ext_t6", 8);
		}
		else
		{
			iLocal_49 = 1;
			if (iVar0 == 0)
			{
				Local_1182 = { Local_247 };
				fLocal_1185 = fLocal_250;
				GlobalFunc_10627(&iLocal_1011, Local_884, fLocal_887, 0, 0, 0, 0, 1, joaat("asterope"), 0, 145);
				func_467(1);
			}
			if (iVar0 == 1)
			{
				Local_1182 = { Local_220 };
				fLocal_1185 = fLocal_889;
				GlobalFunc_10627(&iLocal_1011, Local_220, fLocal_889, 0, 0, 0, 0, 1, joaat("asterope"), 0, 145);
				func_467(2);
			}
			if (iVar0 == 2)
			{
				Local_1182 = { Local_220 };
				fLocal_1185 = fLocal_889;
				GlobalFunc_10627(&iLocal_1011, Local_220, fLocal_889, 0, 0, 0, 0, 1, joaat("asterope"), 0, 145);
				func_467(3);
			}
			if (iVar0 == 3)
			{
				Local_1182 = { -53.0454f, 18.6296f, 71.1259f };
				fLocal_1185 = 167.0193f;
				func_467(4);
			}
			if (iVar0 == 4)
			{
				if (Global_84544)
				{
					Local_1182 = { -105.0312f, -8.6584f, 69.5201f };
					fLocal_1185 = 259.2958f;
					func_467(5);
				}
				else
				{
					Local_1182 = { -105.0312f, -8.6584f, 69.5201f };
					fLocal_1185 = 259.2958f;
					func_467(6);
				}
			}
		}
		GlobalFunc_5116(Local_1182, fLocal_1185, 1, 0);
		MISC::CLEAR_AREA(Local_1182, 1000f, 1, 0, 0, 0);
		GRAPHICS::WASH_DECALS_IN_RANGE(Local_1182, 1000f, 1f);
		PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
	}
	if (GlobalFunc_2(0))
	{
		GlobalFunc_7621(70, 1, 0, 1, 0);
		GlobalFunc_7621(71, 1, 0, 1, 0);
		GlobalFunc_7621(73, 1, 0, 1, 0);
		GlobalFunc_7621(72, 0, 0, 1, 0);
		GlobalFunc_7621(74, 0, 0, 1, 0);
		GlobalFunc_10617(62, 0);
		GlobalFunc_10617(63, 0);
	}
	iLocal_924[0] = joaat("ingot");
	iLocal_924[1] = joaat("intruder");
	iLocal_924[2] = joaat("picador");
	iLocal_924[3] = joaat("asterope");
	Local_934[0 /*3*/] = { 0f, -2.3123f, 0.0297f };
	Local_934[1 /*3*/] = { 0f, -2.4781f, -0.1779f };
	Local_934[2 /*3*/] = { 0f, -2.7685f, -0.3293f };
	Local_934[3 /*3*/] = { 0f, -2.3374f, 0.2962f };
	func_615();
	iVar1 = 0;
	while (iVar1 < iLocal_910)
	{
		iLocal_910[iVar1] = -1;
		iVar1++;
	}
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("Aprtmnt_1");
	PED::ADD_RELATIONSHIP_GROUP("NEUTRAL PEDS", &iLocal_990);
	PED::ADD_RELATIONSHIP_GROUP("BUDDIES", &iLocal_1031);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_1031, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("COP"), iLocal_1031);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1031, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_1031);
	GlobalFunc_563(1);
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	}
	else
	{
		iVar2 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0))
	{
		if (!VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("taxi")))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iVar2, 0), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)) < 50f && !func_613(ENTITY::GET_ENTITY_MODEL(iVar2)))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, 1, 1);
				iLocal_1011 = iVar2;
				iVar2 = 0;
				ENTITY::SET_ENTITY_COORDS(iLocal_1011, Local_884, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_1011, fLocal_887);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1011);
			}
		}
	}
	MISC::CLEAR_AREA(Local_1070, 100f, 1, 0, 0, 0);
	MISC::CLEAR_AREA(Local_1063, 100f, 1, 0, 0, 0);
	VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(0);
	func_612(uLocal_1062, Local_1063, Local_1066);
	func_612(uLocal_1069, Local_1070, Local_1073);
	uLocal_1076 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(32.25392f, -702.4027f, 58.57883f) - Vector(3f, 9.75f, 5.5f), Vector(32.25392f, -702.4027f, 58.57883f) + Vector(3f, 9.75f, 5.5f), 0, 1, 1, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(65.321f, -23.8057f, -83.2189f) + Vector(3f, 5f, 5f), Vector(65.321f, -23.8057f, -83.2189f) - Vector(3f, 5f, 5f), 0, 1);
	uLocal_1026 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(66.61638f, -11.76182f, -85.14192f) - Vector(0f, 6.5f, 16.25f), Vector(66.61638f, -11.76182f, -85.14192f) + Vector(2f, 6.5f, 16.25f), 0, 1, 1, 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tailgater"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_930, 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("intruder"), 1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("s_m_m_janitor"), 1);
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Local_884, 40f);
	if ((((!GlobalFunc_199() && iLocal_47 != 11) && iLocal_47 != 7) && iLocal_47 != 8) && iLocal_47 != 10)
	{
		func_517(1);
		func_467(0);
	}
}

void func_612(var uParam0, struct<3> Param1, struct<3> Param4)//Position - 0x68851
{
	PATHFIND::SET_PED_PATHS_IN_AREA(Param1, Param4, 0, 0);
	PATHFIND::SET_ROADS_IN_AREA(Param1, Param4, 0, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Param1, Param4, 0, 1);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0, 0);
	uParam0 = PED::ADD_SCENARIO_BLOCKING_AREA(Param1, Param4, 0, 1, 1, 1);
}

int func_613(int iParam0)//Position - 0x6889C
{
	int iVar0;
	int iVar1[92];
	
	iVar1[0] = joaat("ambulance");
	iVar1[1] = joaat("benson");
	iVar1[2] = joaat("biff");
	iVar1[3] = joaat("bus");
	iVar1[4] = joaat("firetruk");
	iVar1[5] = joaat("forklift");
	iVar1[6] = joaat("mule");
	iVar1[7] = joaat("mule2");
	iVar1[8] = joaat("packer");
	iVar1[9] = joaat("phantom");
	iVar1[10] = joaat("police");
	iVar1[11] = joaat("stockade");
	iVar1[12] = joaat("squalo");
	iVar1[13] = joaat("maverick");
	iVar1[14] = joaat("polmav");
	iVar1[15] = joaat("airtug");
	iVar1[16] = joaat("fbi");
	iVar1[17] = joaat("annihilator");
	iVar1[18] = joaat("dinghy");
	iVar1[19] = joaat("police");
	iVar1[20] = joaat("ripley");
	iVar1[21] = joaat("trash");
	iVar1[22] = joaat("burrito");
	iVar1[23] = joaat("pony");
	iVar1[24] = joaat("speedo");
	iVar1[25] = joaat("marquis");
	iVar1[26] = joaat("sanchez");
	iVar1[27] = joaat("airtug");
	iVar1[28] = joaat("taco");
	iVar1[29] = joaat("barracks");
	iVar1[30] = joaat("romero");
	iVar1[31] = joaat("blazer");
	iVar1[32] = joaat("blazer2");
	iVar1[33] = 0;
	iVar1[34] = joaat("bodhi2");
	iVar1[35] = joaat("boxville2");
	iVar1[36] = joaat("bulldozer");
	iVar1[37] = joaat("caddy");
	iVar1[38] = joaat("caddy2");
	iVar1[39] = 0;
	iVar1[40] = joaat("camper");
	iVar1[41] = 0;
	iVar1[42] = joaat("tiptruck");
	iVar1[43] = joaat("tourbus");
	iVar1[44] = joaat("towtruck");
	iVar1[45] = joaat("towtruck2");
	iVar1[46] = joaat("tractor");
	iVar1[47] = joaat("tractor2");
	iVar1[48] = joaat("utillitruck");
	iVar1[49] = joaat("utillitruck2");
	iVar1[50] = joaat("utillitruck3");
	iVar1[51] = joaat("bfinjection");
	iVar1[52] = 0;
	iVar1[53] = joaat("dloader");
	iVar1[54] = joaat("docktug");
	iVar1[55] = joaat("dump");
	iVar1[56] = joaat("gburrito");
	iVar1[57] = joaat("handler");
	iVar1[58] = joaat("hauler");
	iVar1[59] = joaat("journey");
	iVar1[60] = joaat("lguard");
	iVar1[61] = 0;
	iVar1[62] = 0;
	iVar1[63] = 0;
	iVar1[64] = joaat("mixer");
	iVar1[65] = 0;
	iVar1[66] = joaat("rhino");
	iVar1[67] = joaat("cutter");
	iVar1[68] = joaat("pounder");
	iVar1[69] = joaat("tiptruck2");
	iVar1[70] = joaat("mixer2");
	iVar1[71] = joaat("tiptruck2");
	iVar1[72] = joaat("rubble");
	iVar1[73] = joaat("scrap");
	iVar1[74] = joaat("armytanker");
	iVar1[75] = joaat("barracks2");
	iVar1[76] = 0;
	iVar1[77] = joaat("airbus");
	iVar1[78] = joaat("coach");
	iVar1[79] = joaat("pbus");
	iVar1[80] = joaat("riot");
	iVar1[81] = 0;
	iVar1[82] = joaat("stockade3");
	iVar1[83] = joaat("flatbed");
	iVar1[84] = joaat("boxville");
	iVar1[85] = joaat("burrito2");
	iVar1[86] = joaat("burrito3");
	iVar1[87] = joaat("burrito4");
	iVar1[88] = joaat("rumpo");
	iVar1[89] = joaat("speedo2");
	iVar1[90] = 0;
	iVar1[91] = 0;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (iParam0 == iVar1[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	if ((((GlobalFunc_540(iParam0) || VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0))
	{
		return 1;
	}
	return 0;
}


void func_615()//Position - 0x68CF2
{
	Local_1086[0 /*3*/] = { 103.1711f, -599.2219f, 30.64482f };
	Local_1086[1 /*3*/] = { 69.96421f, -552.6214f, 31.93536f };
	Local_1086[2 /*3*/] = { -15.68856f, -544.8845f, 38.05373f };
	Local_1086[3 /*3*/] = { -39.99245f, -493.2776f, 39.466f };
	Local_1086[4 /*3*/] = { 114.2506f, -65.17094f, 65.38992f };
	Local_1086[5 /*3*/] = { 82.67328f, -8.04467f, 67.46969f };
	Local_1086[6 /*3*/] = { -10.82436f, 26.30634f, 70.45963f };
	Local_1086[7 /*3*/] = { -78.512f, -89.0248f, 56.8283f };
	iLocal_1111 = -1;
}








void func_623()//Position - 0x6D1F4
{
	GlobalFunc_4935();
	GlobalFunc_4956();
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_1021))
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_1021);
	}
	TASK::REMOVE_WAYPOINT_RECORDING("janitor_route");
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
	}
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("Aprtmnt_1");
	ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
	GlobalFunc_563(0);
	func_626(uLocal_1062, Local_1063, Local_1066);
	func_626(uLocal_1069, Local_1070, Local_1073);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1076, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(65.321f, -23.8057f, -83.2189f) + Vector(3f, 5f, 5f), Vector(65.321f, -23.8057f, -83.2189f) - Vector(3f, 5f, 5f), 1, 1);
	if (HUD::IS_RADAR_HIDDEN())
	{
		HUD::DISPLAY_RADAR(1);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1011, 0))
	{
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_1011, true);
	}
	ENTITY::REMOVE_MODEL_HIDE(-107.5401f, -9.0258f, 70.6696f, 1f, joaat("v_ilev_janitor_frontdoor"), 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-252283844, 0f, 0, 1);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tailgater"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_930, 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("intruder"), 0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("s_m_m_janitor"), 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1022))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1022);
	}
	GlobalFunc_5114(&uLocal_991);
	GlobalFunc_555();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1007))
	{
		PED::DELETE_PED(&iLocal_1007);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1008))
	{
		PED::DELETE_PED(&iLocal_1008);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1009))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_1009);
	}
	CAM::SET_WIDESCREEN_BORDERS(0, 0);
	GlobalFunc_9755("S1_LPTEXT");
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1025, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1026, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1076, 0);
	GlobalFunc_504(0, -1);
	GlobalFunc_503(0, -1);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(763780711, 0f, 1, 0);
	GlobalFunc_10617(63, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-826072862, 0f, 1, 0);
	GlobalFunc_10617(62, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}



void func_626(var uParam0, struct<3> Param1, struct<3> Param4)//Position - 0x6D4C8
{
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0, 0);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Param1, Param4, 1);
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(Param1, Param4, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Param1, Param4, 1, 1);
}



