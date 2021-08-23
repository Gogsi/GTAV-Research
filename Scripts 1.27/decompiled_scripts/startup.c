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
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
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
	char* sLocal_46 = NULL;
	char* sLocal_47 = NULL;
	char* sLocal_48 = NULL;
	struct<3> Local_49 = { 0, 0, 0 } ;
	struct<3> Local_52 = { 0, 0, 0 } ;
	int iLocal_55 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	int iVar1;
	int iVar18;
	int iVar19;
	
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
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	sLocal_46 = "CHECKPOINT_NORMAL";
	sLocal_47 = "CHECKPOINT_MISSED";
	sLocal_48 = "CHECKPOINT_PERFECT";
	Local_49 = { 1694.74f, 3276.502f, 41.2796f };
	Local_52 = { 8.79494f, 0.59893f, 154.8464f };
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	HUD::_SET_PLAYER_IS_IN_DIRECTOR_MODE(0);
	MISC::_SET_PLAYER_IS_IN_ANIMAL_FORM(0);
	STREAMING::REMOVE_IPL("prologue_DistantLights");
	STREAMING::REMOVE_IPL("prologue_LODLights");
	iLocal_55 = 0;
	bVar0 = func_30();
	if (MISC::_IS_COMMAND_LINE_BENCHMARK_VALUE_SET() || MISC::_LANDING_MENU_IS_ACTIVE())
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		SCRIPT::_0xB1577667C3708F9B();
	}
	MISC::SET_INSTANCE_PRIORITY_MODE(0);
	func_29(joaat("mp_registration"), 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("mp_registration"));
	func_29(joaat("mp_fm_registration"), 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("mp_fm_registration"));
	func_29(joaat("tunables_registration"), 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("tunables_registration"));
	func_29(joaat("sc_lb_global_block"), 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("sc_lb_global_block"));
	func_29(joaat("mp_save_game_global_block"), 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("mp_save_game_global_block"));
	func_29(joaat("mp_prop_global_block"), 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("mp_prop_global_block"));
	func_29(joaat("title_update_registration"), 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("title_update_registration"));
	Global_2545212 = 0;
	func_29(joaat("sp_dlc_registration"), 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("sp_dlc_registration"));
	func_29(joaat("sp_pilotschool_reg"), 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("sp_pilotschool_reg"));
	func_28();
	switch (iLocal_55)
	{
		case 0:
			func_29(joaat("standard_global_init"), 1424);
			SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("standard_global_init"));
			break;
	}
	SYSTEM::WAIT(0);
	Global_68247 = 1;
	Global_2 = bVar0;
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	switch (iLocal_55)
	{
		case 0:
			Global_2621550 = 0;
			Global_2621549 = 0;
			func_29(joaat("standard_global_reg"), 1424);
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("standard_global_reg");
			while ((!MISC::IS_BIT_SET(Global_2545212, 0) || !MISC::IS_BIT_SET(Global_2545212, 1)) || !MISC::IS_BIT_SET(Global_2545212, 2))
			{
				if (!MISC::IS_BIT_SET(Global_2545212, 0))
				{
				}
				if (!MISC::IS_BIT_SET(Global_2545212, 1))
				{
				}
				if (!MISC::IS_BIT_SET(Global_2545212, 2))
				{
				}
				SYSTEM::WAIT(0);
			}
			MISC::START_SAVE_DATA(&Global_SAVE_DATA, 1, 1);
			MISC::REGISTER_FLOAT_TO_SAVE(&Global_SAVE_DATA, "fSaveVersion");
			MISC::STOP_SAVE_DATA();
			break;
	}
	MISC::START_SAVE_DATA(&Global_2097152, 8054, 0);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&Global_2097152, 8054, "g_savedMPGlobals");
	iVar1 = 0;
	while (iVar1 < 1)
	{
		func_22(&(Global_2097152[iVar1 /*8053*/]), iVar1);
		func_20(&(Global_2097152[iVar1 /*8053*/]), iVar1);
		func_18(&(Global_2097152[iVar1 /*8053*/]), iVar1);
		func_14(&(Global_2097152[iVar1 /*8053*/]), iVar1);
		func_12(&(Global_2097152[iVar1 /*8053*/]), iVar1);
		func_11(&(Global_2097152[iVar1 /*8053*/]), iVar1);
		func_10(&(Global_2097152[iVar1 /*8053*/]), iVar1);
		func_3(&(Global_2097152[iVar1 /*8053*/]), iVar1);
		iVar1++;
	}
	MISC::STOP_SAVE_STRUCT();
	MISC::STOP_SAVE_DATA();
	iVar18 = 8054;
	iVar19 = MISC::GET_SIZE_OF_SAVE_DATA(0);
	if (iVar18 != iVar19)
	{
	}
	if (!NETWORK::IS_COMMERCE_DATA_VALID() && !NETWORK::_0x1D4DC17C38FEAFF0())
	{
		NETWORK::_0xB606E6CC59664972(0);
	}
	PATHFIND::_SET_ALL_PATHS_CACHE_BOUNDINGSTRUCT(0);
	MISC::_SET_PLAYER_IS_IN_ANIMAL_FORM(0);
	func_2();
	func_1();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1()//Position - 0x376
{
	Global_29[0] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1680.49f, -929.44f, -0.462531f, "vbca_tunnel1");
	Global_29[1] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1562.04f, -876.91f, -0.471913f, "vbca_tunnel2");
	Global_29[2] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1429.65f, -823.211f, -0.432763f, "vbca_tunnel3");
	Global_29[3] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1316.9f, -843.515f, 1.43639f, "vbca_tunnel4");
	Global_29[4] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1249.67f, -896.27f, 0.293292f, "vbca_tunnel5");
	Global_29[5] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-38.9818f, -570.534f, 28.4812f, "v_31_tun_01");
	Global_29[6] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(481.908f, -577.602f, 2.41908f, "v_31_newtunnel1");
	Global_29[7] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1029.02f, -260.955f, 48.2681f, "v_31_newtun5");
	Global_29[8] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1022.25f, -205.648f, 42.8956f, "v_31_newtun4b");
	Global_29[9] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(823.852f, -299.823f, 4.54864f, "v_31_newtun3");
	Global_29[0] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(615.395f, -409.282f, -1.57599f, "v_31_newtun2");
	Global_29[11] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1190.58f, -685.387f, 11.0753f, "sm20_tun4");
	Global_29[12] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1292.36f, -730.629f, 11.0934f, "sm20_tun3");
	Global_29[13] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1411.97f, -759.518f, 15.5455f, "sm20_tun2");
	Global_29[14] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1531.56f, -762.391f, 15.3451f, "sm20_tun1");
	Global_29[15] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(558.653f, -1486.49f, 21.4096f, "sc1_rd_inttunshort");
	Global_29[16] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(569.673f, -1920.17f, 21.1009f, "sc1_rd_inttun3b_end");
	Global_29[17] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(512.412f, -1908.55f, 21.2086f, "sc1_rd_inttun3b");
	Global_29[18] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(434.343f, -1945.27f, 17.3936f, "sc1_rd_inttun3");
	Global_29[19] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(513.914f, -2009.82f, 21.1486f, "sc1_rd_inttun2b_end");
	Global_29[20] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(465.139f, -2025.49f, 19.4406f, "sc1_rd_inttun2b");
	Global_29[21] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(406.938f, -1978.14f, 16.3512f, "sc1_rd_inttun2");
	Global_29[22] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(319.321f, -1896.97f, 22.4086f, "sc1_rd_inttun1");
	Global_29[23] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-573.473f, -580.793f, 25.3082f, "kt1_04_roadtunnel_int");
	Global_29[24] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-675.628f, -606.272f, 25.3078f, "kt1_03_carpark_int");
	Global_29[25] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1314.63f, -904.059f, 53.0877f, "id2_21_a_tun5");
	Global_29[26] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1248.64f, -773.6f, 44.5493f, "id2_21_a_tun4");
	Global_29[27] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1213.45f, -597.799f, 37.7533f, "id2_21_a_tun3");
	Global_29[28] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1083.25f, -502.542f, 34.6573f, "id2_21_a_tun2");
	Global_29[29] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(926.428f, -488.737f, 33.8564f, "id2_21_a_tun1");
	Global_29[30] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(732.663f, -2486.45f, 11.0686f, "id1_11_tunnel8_int");
	Global_29[31] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(749.494f, -2364.79f, 16.2255f, "id1_11_tunnel7_int");
	Global_29[32] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(758.957f, -2260.08f, 23.4637f, "id1_11_tunnel6_int");
	Global_29[33] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(769.889f, -2124.24f, 21.8223f, "id1_11_tunnel5_int");
	Global_29[34] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(789.138f, -1963.58f, 20.6408f, "id1_11_tunnel4_int");
	Global_29[35] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(815.852f, -1832.2f, 22.9671f, "id1_11_tunnel3_int");
	Global_29[36] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(829.752f, -1718.51f, 20.4594f, "id1_11_tunnel2_int");
	Global_29[37] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(829.845f, -1718.51f, 20.1823f, "id1_11_tunnel1_int");
	Global_29[38] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(274.441f, -636.403f, 29.0854f, "dt1_rd1_tun3");
	Global_29[39] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(142.198f, -581.121f, 31.2974f, "dt1_rd1_tun2");
	Global_29[40] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(204.925f, -601.567f, 29.3757f, "dt1_rd1_tun");
	Global_29[41] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2571.05f, 3907.95f, 41.1896f, "cs4_rwayb_tunnelint");
	Global_29[42] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-493.613f, 4275.55f, 89.1677f, "cs3_03railtunnel_int4");
	Global_29[43] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-476.018f, 4201.55f, 87.9392f, "cs3_03railtunnel_int3");
	Global_29[44] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-457.748f, 4125.51f, 86.1208f, "cs3_03railtunnel_int2");
	Global_29[45] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-442.948f, 4064.86f, 84.1041f, "cs3_03railtunnel_int1");
	Global_29[46] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2159.62f, 5995.87f, 51.2999f, "cs2_roadsb_tunnel_03");
	Global_29[47] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2250.3f, 5915.56f, 49.6273f, "cs2_roadsb_tunnel_02");
	Global_29[48] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2341.18f, 5814.9f, 46.7075f, "cs2_roadsb_tunnel_01");
	Global_29[49] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-537.422f, 4613.09f, 89.7512f, "cs1_14brailway6");
	Global_29[50] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-540.452f, 4719.74f, 89.7576f, "cs1_14brailway5");
	Global_29[51] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-543.783f, 4821.95f, 89.7357f, "cs1_14brailway4");
	Global_29[52] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-546.036f, 4923.02f, 89.8919f, "cs1_14brailway3");
	Global_29[53] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-546.265f, 4999.07f, 90.8104f, "cs1_14brailway2");
	Global_29[54] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-539.261f, 5077.03f, 91.6235f, "cs1_14brailway1");
	Global_29[55] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-183.656f, 4664.52f, 130.5f, "cs1_12_tunnel03_int");
	Global_29[56] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-273.86f, 4752.12f, 138.21f, "cs1_12_tunnel02_int");
	Global_29[57] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-410.302f, 4860.98f, 144.864f, "cs1_12_tunnel01_int");
	Global_29[58] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-2596.83f, 3088.87f, 15.4225f, "ch1_roadsdint_tun2");
	Global_29[59] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-2583.04f, 3268.07f, 13.3157f, "ch1_roadsdint_tun1");
	Global_29[60] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-179.51f, -180.189f, 43.6251f, "bt1_04_carpark");
}

void func_2()//Position - 0xA93
{
	Global_131668 = 1;
	Global_131669 = 1;
}

void func_3(var uParam0, int iParam1)//Position - 0xAA5
{
	func_9(uParam0, iParam1);
	func_8(uParam0, iParam1);
	func_7(uParam0, iParam1);
	func_6(uParam0, iParam1);
	func_5(uParam0, iParam1);
	func_4(uParam0, iParam1);
}

void func_4(var uParam0, int iParam1)//Position - 0xADD
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_DATE_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_8026.f_19), 8, &cVar0);
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(uParam0->f_8026.f_19[0 /*7*/]), 7, "TEMPSTAT_DATE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8026.f_19[0 /*7*/]), "TEMPSTAT_DATE.year");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8026.f_19[0 /*7*/].f_1), "TEMPSTAT_DATE.month");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8026.f_19[0 /*7*/].f_2), "TEMPSTAT_DATE.day");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8026.f_19[0 /*7*/].f_3), "TEMPSTAT_DATE.hour");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8026.f_19[0 /*7*/].f_4), "TEMPSTAT_DATE.minute");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8026.f_19[0 /*7*/].f_5), "TEMPSTAT_DATE.seconds");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8026.f_19[0 /*7*/].f_6), "TEMPSTAT_DATE.Milliseconds");
	MISC::STOP_SAVE_STRUCT();
	MISC::STOP_SAVE_ARRAY();
}

void func_5(var uParam0, int iParam1)//Position - 0xBA7
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_VECTOR_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_8026.f_15), 4, &cVar0);
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(uParam0->f_8026.f_15[0 /*3*/]), 3, "TEMPSTAT_VEC");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_8026.f_15[0 /*3*/]), "TEMPSTAT_VEC.x");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_8026.f_15[0 /*3*/].f_1), "TEMPSTAT_VEC.y");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_8026.f_15[0 /*3*/].f_2), "TEMPSTAT_VEC.z");
	MISC::STOP_SAVE_STRUCT();
	MISC::STOP_SAVE_ARRAY();
}

void func_6(var uParam0, int iParam1)//Position - 0xC20
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_STRING_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_8026.f_6), 9, &cVar0);
	MISC::_0x8269816F6CFD40F8(&(uParam0->f_8026.f_6[0 /*8*/]), "TEMPSTAT_LABEL");
	MISC::STOP_SAVE_ARRAY();
}

void func_7(var uParam0, int iParam1)//Position - 0xC5B
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_BOOL_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_8026.f_4), 2, &cVar0);
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_8026.f_4[0]), "TEMPSTAT_BOOL");
	MISC::STOP_SAVE_ARRAY();
}

void func_8(var uParam0, int iParam1)//Position - 0xC95
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_FLOAT_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_8026.f_2), 2, &cVar0);
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_8026.f_2[0]), "TEMPSTAT_FLOAT");
	MISC::STOP_SAVE_ARRAY();
}

void func_9(var uParam0, int iParam1)//Position - 0xCCF
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_INT_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_8026), 2, &cVar0);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8026[0]), "TEMPSTAT_INT1");
	MISC::STOP_SAVE_ARRAY();
}

void func_10(var uParam0, int iParam1)//Position - 0xD05
{
	char cVar0[24];
	int iVar6;
	struct<4> Var7;
	char cVar11[16];
	char cVar15[16];
	char cVar19[16];
	char cVar23[16];
	
	StringCopy(&cVar0, "MP_ATM_SAVED", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(uParam0->f_7876), 150, &cVar0);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_7876), "MPATM_CARET_");
	iVar6 = 0;
	StringCopy(&Var7, "MPATMLOGVAL", 16);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_7876.f_1), 17, &Var7);
	iVar6 = 0;
	while (iVar6 < 16)
	{
		cVar11 = { Var7 };
		StringIntConCat(&cVar11, iVar6, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_7876.f_1[iVar6]), &cVar11);
		iVar6++;
	}
	MISC::STOP_SAVE_ARRAY();
	StringCopy(&Var7, "MPATMLOGSCRS", 16);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_7876.f_18), 97, &Var7);
	iVar6 = 0;
	while (iVar6 < 16)
	{
		cVar15 = { Var7 };
		StringIntConCat(&cVar15, iVar6, 16);
		MISC::_0x48F069265A0E4BEC(&(uParam0->f_7876.f_18[iVar6 /*6*/]), &cVar15);
		iVar6++;
	}
	MISC::STOP_SAVE_ARRAY();
	StringCopy(&Var7, "MPATMLOGACT", 16);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_7876.f_115), 17, &Var7);
	iVar6 = 0;
	while (iVar6 < 16)
	{
		cVar19 = { Var7 };
		StringIntConCat(&cVar19, iVar6, 16);
		MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_7876.f_115[iVar6]), &cVar19);
		iVar6++;
	}
	MISC::STOP_SAVE_ARRAY();
	StringCopy(&Var7, "MPATMLOGDAT", 16);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_7876.f_132), 17, &Var7);
	iVar6 = 0;
	while (iVar6 < 16)
	{
		cVar23 = { Var7 };
		StringIntConCat(&cVar23, iVar6, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_7876.f_132[iVar6]), &cVar23);
		iVar6++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_7876.f_149), "mpAnyVecBought");
	MISC::STOP_SAVE_STRUCT();
}

void func_11(var uParam0, int iParam1)//Position - 0xE7F
{
	struct<6> Var0;
	char cVar6[32];
	int iVar14;
	
	StringCopy(&Var0, "MP_BOUNTY_SAVED", 24);
	StringIntConCat(&Var0, iParam1, 24);
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(uParam0->f_7635), 241, &Var0);
	MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_7635), "BOUNTY_GAMERH64_1");
	MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_7635.f_1), "BOUNTY_GAMERH64_2");
	MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_7635.f_2), "BOUNTY_GAMERH64_3");
	MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_7635.f_3), "BOUNTY_GAMERH64_4");
	MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_7635.f_4), "BOUNTY_GAMERH64_5");
	MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_7635.f_5), "BOUNTY_GAMERH64_6");
	MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_7635.f_6), "BOUNTY_GAMERH64_7");
	MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_7635.f_7), "BOUNTY_GAMERH64_8");
	MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_7635.f_8), "BOUNTY_GAMERH64_9");
	MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_7635.f_9), "BOUNTY_GAMERH64_10");
	MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_7635.f_10), "BOUNTY_GAMERH64_11");
	MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_7635.f_11), "BOUNTY_GAMERH64_12");
	MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_7635.f_12), "BOUNTY_GAMERH64_13");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_7635.f_13), "BOUNTY_TIME");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_7635.f_14), "BOUNTY_VALUE");
	StringConCat(&Var0, "_GH", 24);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_7635.f_15), 209, &Var0);
	iVar14 = 0;
	while (iVar14 < 16)
	{
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_1", 32);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_7635.f_15[iVar14 /*13*/]), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_2", 32);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_7635.f_15[iVar14 /*13*/].f_1), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_3", 32);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_7635.f_15[iVar14 /*13*/].f_2), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_4", 32);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_7635.f_15[iVar14 /*13*/].f_3), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_5", 32);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_7635.f_15[iVar14 /*13*/].f_4), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_6", 32);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_7635.f_15[iVar14 /*13*/].f_5), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_7", 32);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_7635.f_15[iVar14 /*13*/].f_6), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_8", 32);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_7635.f_15[iVar14 /*13*/].f_7), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_9", 32);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_7635.f_15[iVar14 /*13*/].f_8), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_10", 32);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_7635.f_15[iVar14 /*13*/].f_9), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_11", 32);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_7635.f_15[iVar14 /*13*/].f_10), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_12", 32);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_7635.f_15[iVar14 /*13*/].f_11), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_13", 32);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_7635.f_15[iVar14 /*13*/].f_12), &cVar6);
		iVar14++;
	}
	MISC::STOP_SAVE_ARRAY();
	StringCopy(&Var0, "MP_BOUNTY_SAVED", 24);
	StringIntConCat(&Var0, iParam1, 24);
	StringConCat(&Var0, "_TIM", 24);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_7635.f_224), 17, &Var0);
	iVar14 = 0;
	while (iVar14 < 16)
	{
		MemCopy(&cVar6, {Var0}, 8);
		StringIntConCat(&cVar6, iVar14, 32);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_7635.f_224[iVar14]), &cVar6);
		iVar14++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_STRUCT();
}

void func_12(var uParam0, int iParam1)//Position - 0x12A5
{
	char cVar0[24];
	
	StringCopy(&cVar0, "MP_GENERAL_SAVED", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_13(&(uParam0->f_5756), &cVar0);
}

void func_13(var uParam0, char[4] cParam1)//Position - 0x12C6
{
	int iVar0;
	struct<4> Var1;
	int iVar5;
	char cVar6[64];
	int iVar22;
	int iVar23;
	char cVar24[16];
	char cVar28[16];
	
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 1879, cParam1);
	MISC::REGISTER_INT_TO_SAVE(uParam0, "CASH_GIVEN_TOTAL");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "CASH_GIVEN_TIME");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2), "LAST_SAVED_CAR");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3), "CURRENT_PROP_VALUE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4), "WHEELIE_TIMER");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5), "WHEELIE_UPDATES");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_6), "WHEELIE_TIME");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_7), "GRAB_TIME");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8), "iLastSoldVehicleTime");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_9), "ilasttimeplayed");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10), "iSaveCoupons");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_11), "iLastBruciePillReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_12), "iLastSecVanReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_13), "iLastBountyReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_14), "iLastParaReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_15), "iLastCrateDropReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_16), "iLastGangAttackReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_17), "iLastImpExpReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_18), "iLastInsuranceReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_19), "iLastSurvivalReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_20), "iLastBikerBackupReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_21), "iLastVagosBackupReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_22), "iLastLesterVehReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_23), "iLastPersonalVehDeliveryReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_24), "iLastPegasusVehicleReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_25), "iLastMerryweatherReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_26), "iLastLesterHelpReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_27), "iLastLesterReqJobReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_28), "iLastGeraldReqJobReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_29), "iLastSimeonReqJobReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_30), "iLastMartinReqJobReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_31), "iLastRonReqJobReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_32), "iRecentlyPassedMissionBitset");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_33), "iRecentlyPassedMissionTime");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_34), "iLastImportExportDelTime");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_35), "iLastImportExportListTime");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_36), "iMyLastImportExportListDay");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_37), "iVehicleWebsiteReminderTime");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_38), "bDefaultClothesSet");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_39), 5, "CLOTHES");
	iVar0 = 0;
	while (iVar0 < uParam0->f_39)
	{
		StringCopy(&Var1, "CLOTHES", 16);
		StringIntConCat(&Var1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_39[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_44), 605, "CARMODS");
	iVar0 = 0;
	while (iVar0 < uParam0->f_44)
	{
		StringCopy(&Var1, "CARMODS", 16);
		StringIntConCat(&Var1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_44[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_649), "iLastCrewCharWasIn");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_650), "iStripperUnlockedBS");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_651), "iGeneralBS");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_652), "iCarsModifiedTimeStamp");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_653), 10, "GOLF_fLongestDriveHole");
	iVar5 = 0;
	while (iVar5 < uParam0->f_653)
	{
		StringCopy(&cVar6, "fLongestDriveHole_", 64);
		StringIntConCat(&cVar6, iVar5, 64);
		MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_653[iVar5]), &cVar6);
		iVar5++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_663), 10, "GOLF_fLongestPuttHole");
	iVar5 = 0;
	while (iVar5 < uParam0->f_663)
	{
		StringCopy(&cVar6, "fLongestPuttHole_", 64);
		StringIntConCat(&cVar6, iVar5, 64);
		MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_663[iVar5]), &cVar6);
		iVar5++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_673), "GOLF_iBestRound");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_674), "GOLF_fLongestDrive");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_675), "GOLF_fLongestPutt");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_676), "iShareLJCashTotal");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_677), "iShareLJCashTime");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_678), "iReceiveLJCashTotal");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_679), "iReceiveLJCashTime");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_680), "LAST_ACC_PROP");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_681), "MULTI1_PROP_VAL");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_682), 2, "PROP_ARY_VAL");
	iVar22 = 0;
	while (iVar22 < uParam0->f_682)
	{
		StringCopy(&Var1, "PROP_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_682[iVar22]), &Var1);
		iVar22++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_684), "KR_PATCH_UPDATE");
	iVar22 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1336), 454, "DLC_MODS");
	iVar22 = 0;
	while (iVar22 < uParam0->f_1336)
	{
		StringCopy(&Var1, "DLC_MODS_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1336[iVar22]), &Var1);
		iVar22++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_685), 131, "OUTFIT_CompDraw");
	iVar22 = 0;
	while (iVar22 < 10)
	{
		StringCopy(&Var1, "CompDraw", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_685[iVar22 /*13*/]), 13, &Var1);
		iVar23 = 0;
		while (iVar23 < 12)
		{
			StringCopy(&Var1, "CompDraw", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar22, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar23, 16);
			MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_685[iVar22 /*13*/][iVar23]), &Var1);
			iVar23++;
		}
		MISC::STOP_SAVE_ARRAY();
		iVar22++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_816), 131, "OUTFIT_CompTex");
	iVar22 = 0;
	while (iVar22 < 10)
	{
		StringCopy(&Var1, "CompTex", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_816[iVar22 /*13*/]), 13, &Var1);
		iVar23 = 0;
		while (iVar23 < 12)
		{
			StringCopy(&Var1, "CompTex", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar22, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar23, 16);
			MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_816[iVar22 /*13*/][iVar23]), &Var1);
			iVar23++;
		}
		MISC::STOP_SAVE_ARRAY();
		iVar22++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_947), 101, "OUTFIT_PropID");
	iVar22 = 0;
	while (iVar22 < 10)
	{
		StringCopy(&Var1, "PropID", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_947[iVar22 /*10*/]), 10, &Var1);
		iVar23 = 0;
		while (iVar23 < 9)
		{
			StringCopy(&Var1, "PropID", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar22, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar23, 16);
			MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_947[iVar22 /*10*/][iVar23]), &Var1);
			iVar23++;
		}
		MISC::STOP_SAVE_ARRAY();
		iVar22++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1048), 101, "OUTFIT_PropTex");
	iVar22 = 0;
	while (iVar22 < 10)
	{
		StringCopy(&Var1, "PropTex", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1048[iVar22 /*10*/]), 10, &Var1);
		iVar23 = 0;
		while (iVar23 < 9)
		{
			StringCopy(&Var1, "PropTex", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar22, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar23, 16);
			MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1048[iVar22 /*10*/][iVar23]), &Var1);
			iVar23++;
		}
		MISC::STOP_SAVE_ARRAY();
		iVar22++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1149), 11, "OUTFIT_Stored");
	iVar22 = 0;
	while (iVar22 < 10)
	{
		StringCopy(&Var1, "Stored", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_1149[iVar22]), &Var1);
		iVar22++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1160), 11, "OUTFIT_CrewTatA");
	iVar22 = 0;
	while (iVar22 < 10)
	{
		StringCopy(&Var1, "CrewDecalA", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_1160[iVar22]), &Var1);
		iVar22++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1171), 11, "OUTFIT_CrewTatB");
	iVar22 = 0;
	while (iVar22 < 10)
	{
		StringCopy(&Var1, "CrewDecalB", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_1171[iVar22]), &Var1);
		iVar22++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1182), 11, "OUTFIT_CrewTatC");
	iVar22 = 0;
	while (iVar22 < 10)
	{
		StringCopy(&Var1, "CrewDecalC", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_1182[iVar22]), &Var1);
		iVar22++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1193), 11, "OUTFIT_CrewTatD");
	iVar22 = 0;
	while (iVar22 < 10)
	{
		StringCopy(&Var1, "CrewDecalD", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_1193[iVar22]), &Var1);
		iVar22++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1285), 11, "OUTFIT_Shirt");
	iVar22 = 0;
	while (iVar22 < 10)
	{
		StringCopy(&Var1, "ShirtDecal", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1285[iVar22]), &Var1);
		iVar22++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1204), 81, "OUTFIT_Name");
	iVar22 = 0;
	while (iVar22 < 10)
	{
		StringCopy(&Var1, "Name", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		MISC::_0x8269816F6CFD40F8(&(uParam0->f_1204[iVar22 /*8*/]), &Var1);
		iVar22++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1296), 40, "LAST_JobGamer");
	iVar22 = 0;
	while (iVar22 < 3)
	{
		StringCopy(&Var1, "LastJobG64_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_1", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_1296[iVar22 /*13*/]), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_2", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_1296[iVar22 /*13*/].f_1), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_3", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_1296[iVar22 /*13*/].f_2), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_4", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_1296[iVar22 /*13*/].f_3), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_5", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_1296[iVar22 /*13*/].f_4), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_6", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_1296[iVar22 /*13*/].f_5), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_7", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_1296[iVar22 /*13*/].f_6), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_8", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_1296[iVar22 /*13*/].f_7), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_9", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_1296[iVar22 /*13*/].f_8), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_10", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_1296[iVar22 /*13*/].f_9), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_11", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_1296[iVar22 /*13*/].f_10), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_12", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_1296[iVar22 /*13*/].f_11), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_13", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_1296[iVar22 /*13*/].f_12), &cVar24);
		iVar22++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_1790), "DO_CompletedObjectives");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_1791), "DO_LoggedInToday");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1792), "DO_xValue");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1793), "DO_LastHistoryLength");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1794), "DO_LastResetTime");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1795), 10, "DO_Objectives");
	iVar22 = 0;
	while (iVar22 < 3)
	{
		StringCopy(&Var1, "Objective", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1795[iVar22 /*3*/]), &Var1);
		StringCopy(&Var1, "Completed", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_1795[iVar22 /*3*/].f_1), &Var1);
		StringCopy(&Var1, "Initial", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1795[iVar22 /*3*/].f_2), &Var1);
		iVar22++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1805), 25, "DO_History");
	iVar22 = 0;
	while (iVar22 < 24)
	{
		StringCopy(&Var1, "History", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1805[iVar22]), &Var1);
		iVar22++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1830), 49, "LAST_JobGamer_TL");
	iVar22 = 0;
	while (iVar22 < 3)
	{
		StringCopy(&Var1, "LastJobTL_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		cVar28 = { Var1 };
		StringConCat(&cVar28, "_1", 16);
		MISC::_0xFAA457EF263E8763(&(uParam0->f_1830[iVar22 /*16*/]), &cVar28);
		iVar22++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_ARRAY();
}

void func_14(var uParam0, int iParam1)//Position - 0x1ED3
{
	char cVar0[24];
	
	StringCopy(&cVar0, "MP_SAVED_CARAPP", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_15(&(uParam0->f_4358), &cVar0, iParam1);
}

void func_15(var uParam0, char[4] cParam1, int iParam2)//Position - 0x1EF6
{
	char cVar0[64];
	int iVar16;
	
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 1398, cParam1);
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 1291, "CAR_APP_DATA");
	iVar16 = 0;
	while (iVar16 < 30)
	{
		StringCopy(&cVar0, "CARAPP_DATA_", 64);
		StringIntConCat(&cVar0, iVar16, 64);
		func_17(uParam0[iVar16 /*43*/], &cVar0);
		iVar16++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_STRUCT();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1332), 31, "CAR_HIDDEN");
	iVar16 = 0;
	while (iVar16 < 30)
	{
		StringCopy(&cVar0, "CAR_HIDDEN", 64);
		StringIntConCat(&cVar0, iVar16, 64);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_1332[iVar16]), &cVar0);
		iVar16++;
	}
	MISC::STOP_SAVE_ARRAY();
	func_16(&(uParam0->f_1291), "CAR_APP_ORDER");
	StringCopy(&cVar0, "bMultiplayerDataWiped", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_1363), &cVar0);
	StringCopy(&cVar0, "bCarAppPlateSet", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_1365), &cVar0);
	StringCopy(&cVar0, "bDeleteCarData", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_1364), &cVar0);
	StringCopy(&cVar0, "iCarAppPlateBack", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1370), &cVar0);
	StringCopy(&cVar0, "tlCarAppPlateText", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	MISC::_REGISTER_TEXT_LABEL_TO_SAVE_2(&(uParam0->f_1366), &cVar0);
	StringCopy(&cVar0, "iOrderCount", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1371), &cVar0);
	StringCopy(&cVar0, "iOrderVehicle", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1372), &cVar0);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1373), 11, "SAVED_VEH_SLOT");
	iVar16 = 0;
	while (iVar16 < 10)
	{
		StringCopy(&cVar0, "VEH_SLOT", 64);
		StringIntConCat(&cVar0, iVar16, 64);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1373[iVar16]), &cVar0);
		iVar16++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1384), 11, "SAVED_VEH_PRIO");
	iVar16 = 0;
	while (iVar16 < 10)
	{
		StringCopy(&cVar0, "VEH_PRIO", 64);
		StringIntConCat(&cVar0, iVar16, 64);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1384[iVar16]), &cVar0);
		iVar16++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1395), "LAST_USED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1396), "NEW_SAVED");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_1397), "SETUP_INIT");
}

void func_16(var uParam0, char* sParam1)//Position - 0x20F7
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 41, sParam1);
	MISC::REGISTER_ENUM_TO_SAVE(uParam0, "Model");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "iColourID1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2), "iColourID2");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3), "iColour1Group");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4), "iColour2Group");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5), "iWindowTint");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_6), "iTyreSmokeR");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_7), "iTyreSmokeG");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8), "iTyreSmokeB");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_9), "iEngine");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10), "iBrakes");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_11), "iWheels");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_12), "iWheelType");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_13), "iExhaust");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_14), "iSuspension");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_15), "iArmour");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_16), "iHorn");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_17), "iLights");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_18), "bBulletProofTyres");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_19), "iTurbo");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_20), "iTyreSmoke");
	MISC::_REGISTER_TEXT_LABEL_TO_SAVE_2(&(uParam0->f_21), "tlPlateText");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_25), "iPlateBack");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_26), "UID");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_27), "Cost");
	MISC::_REGISTER_TEXT_LABEL_TO_SAVE_2(&(uParam0->f_28), "tlPlateText_pending");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_32), "iPlateBack_pending");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_33), "bProcessOrder");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_36), "bOrderPending");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_35), "bOrderReceivedOnBoot");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_34), "bOrderForPlayerVehicle");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_37), "bCheckPlateProfanity");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_40), "bOrderPaidFor");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_38), "bSCProfanityFailed");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_39), "bOrderFailedFunds");
	MISC::STOP_SAVE_STRUCT();
}

void func_17(var uParam0, char[4] cParam1)//Position - 0x22AF
{
	int iVar0;
	char cVar1[16];
	
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 43, cParam1);
	MISC::REGISTER_ENUM_TO_SAVE(uParam0, "Model");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "iColourID1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2), "iColourID2");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3), "iWindowTint");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4), "iTyreSmokeR");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5), "iTyreSmokeG");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_6), "iTyreSmokeB");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_7), "iEngine");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8), "iBrakes");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_9), "iWheels");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10), "iWheelType");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_11), "iExhaust");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_12), "iSuspension");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_13), "iArmour");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_14), "iHorn");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_15), "iLights");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_16), "bBulletProofTyres");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_17), "iTurbo");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_18), "iTyreSmoke");
	MISC::_REGISTER_TEXT_LABEL_TO_SAVE_2(&(uParam0->f_19), "tlPlateText");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_23), "iPlateBack");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_24), "iModCountEngine");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_25), "iModCountBrakes");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_26), "iModCountExhaust");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_27), "iModCountWheels");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_28), "iModCountHorn");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_29), "iModCountArmour");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_30), "iModCountSuspension");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_31), "fModPriceModifier");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_32), "iModColoursThatCanBeSet");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_33), 6, "iHornHash");
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringCopy(&cVar1, "iHornHash", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_33[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_39), "eModKitType");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_40), "bSendDataToCloud");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_41), "bDeleteData");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_42), "bUpdateMods");
	MISC::STOP_SAVE_STRUCT();
}

void func_18(var uParam0, int iParam1)//Position - 0x249A
{
	char cVar0[24];
	
	StringCopy(&cVar0, "MP_PROPERTY_SAVED", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_19(&(uParam0->f_4335), &cVar0);
}

void func_19(var uParam0, char[4] cParam1)//Position - 0x24BB
{
	int iVar0;
	char cVar1[16];
	
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 23, cParam1);
	MISC::REGISTER_BOOL_TO_SAVE(uParam0, "TV_ON");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "TV_CHANNEL_ID");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2), 3, "RADIO_ON");
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&cVar1, "RADIO_ON_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_5), 3, "RADIO_STATION");
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&cVar1, "RDO_STA_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_8), "GARAGE_TV_ON");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_9), "GARAGE_TV_CHANNEL_ID");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_10), "GARAGE_RADIO_ON");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_11), "GARAGE_RADIO_STATION_ID");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_12), "NUMBERS_TIMES_SMOKED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_13), "NUMBER_TIMES_DRANK");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_14), "NUMBER_TIMES_STRIPPERS");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_15), "NUMBERS_TIMES_SMOKED_SECOND");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_16), "NUMBER_TIMES_DRANK_SECOND");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_17), "NUMBER_TIMES_STRIPPERS_SECOND");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_18), "NUMBERS_TIMES_SMOKED3");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_19), "NUMBER_TIMES_DRANK3");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_20), "NUMBER_TIMES_STRIPPERS3");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_21), "DATE_LAST_CLEANED_APARTMENT");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_22), "SHOWERS_TAKEN");
	MISC::STOP_SAVE_ARRAY();
}

void func_20(var uParam0, int iParam1)//Position - 0x2619
{
	char cVar0[24];
	
	StringCopy(&cVar0, "MP_BIG_ASS_VEHICLES", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_21(&(uParam0->f_4330), &cVar0);
}

void func_21(var uParam0, char[4] cParam1)//Position - 0x263A
{
	int iVar0;
	char cVar1[16];
	
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 5, cParam1);
	MISC::REGISTER_INT_TO_SAVE(uParam0, "BAV_Timestamp");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1), 4, "B_A_V_BS_ID");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(&cVar1, "B_A_V_BS_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_ARRAY();
}

void func_22(var uParam0, int iParam1)//Position - 0x2698
{
	struct<3> Var0;
	
	StringCopy(&Var0, "MP_SAVED_VEHICLES", 24);
	StringIntConCat(&Var0, iParam1, 24);
	func_23(uParam0, &Var0);
}

void func_23(var uParam0, char* sParam1)//Position - 0x26B6
{
	int iVar0;
	char cVar1[32];
	
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4330, sParam1);
	iVar0 = 0;
	while (iVar0 < 39)
	{
		StringCopy(&cVar1, "MP_VEHICLE", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		func_24(uParam0[iVar0 /*111*/], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_24(var uParam0, char[4] cParam1)//Position - 0x26FD
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 111, cParam1);
	func_25(uParam0, "VEHICLE_SETUP_STRUCT_MP");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_72), "VEHICLE_BS");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_74), "PAID_PREMIUM");
	MISC::_0xFAA457EF263E8763(&(uParam0->f_75), "PAID_PLAYER");
	MISC::_0xFAA457EF263E8763(&(uParam0->f_91), "RADIO_STATION");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_73), "IMPOUND_TIME");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_107), "COLOUR_GROUP1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_108), "COLOUR_GROUP2");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_109), "PRICE_PAID");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_110), "OBTAIN_TIME");
	MISC::STOP_SAVE_STRUCT();
}

void func_25(var uParam0, char* sParam1)//Position - 0x2789
{
	func_27(uParam0, "VEHICLE_SETUP_STRUCT");
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 72, sParam1);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_54), "iSpawnVehicleHorn");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_55), "fEnveffScale");
	func_26(&(uParam0->f_56), "GamerHandleOfCarOwner");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_69), "OwnerStatus");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_70), "iFlags");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_71), "iPVSlot");
	MISC::STOP_SAVE_STRUCT();
}

void func_26(var uParam0, char* sParam1)//Position - 0x27F1
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 13, sParam1);
	MISC::_REGISTER_INT64_TO_SAVE(uParam0, "Data64_1");
	MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_1), "Data64_2");
	MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_2), "Data64_3");
	MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_3), "Data64_4");
	MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_4), "Data64_5");
	MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_5), "Data64_6");
	MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_6), "Data64_7");
	MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_7), "Data64_8");
	MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_8), "Data64_9");
	MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_9), "Data64_10");
	MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_10), "Data64_11");
	MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_11), "Data64_12");
	MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_12), "Data64_13");
	MISC::STOP_SAVE_STRUCT();
}

void func_27(var uParam0, char* sParam1)//Position - 0x28A1
{
	int iVar0;
	char cVar1[16];
	
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 54, sParam1);
	MISC::REGISTER_INT_TO_SAVE(uParam0, "iPlateIndex");
	MISC::_REGISTER_TEXT_LABEL_TO_SAVE_2(&(uParam0->f_1), "tlPlateText");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5), "iColour1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_6), "iColour2");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_7), "iColourExtra1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8), "iColourExtra2");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_38), "iTyreR");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_39), "iTyreG");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_40), "iTyreB");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_41), "iWindowTintColour");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_43), "iLivery");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_45), "iWheelType");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_44), "eRoofState");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_53), "iFlags");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_47), "iCustomR");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_48), "iCustomG");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_49), "iCustomB");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_50), "iNeonR");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_51), "iNeonG");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_52), "iNeonB");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_42), "eModel");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_9), 26, "MODS_ID");
	iVar0 = 0;
	while (iVar0 < 25)
	{
		StringCopy(&cVar1, "MOD_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_9[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_35), 3, "MODS_VAR");
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&cVar1, "MOD_VAR", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_35[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_46), "eLockState");
	MISC::STOP_SAVE_STRUCT();
}

void func_28()//Position - 0x2A3D
{
	REPLAY::_0x7E2BD3EF6C205F09("No_Filter", 1);
	REPLAY::_0x7E2BD3EF6C205F09("phone_cam1", 1);
	REPLAY::_0x7E2BD3EF6C205F09("phone_cam2", 1);
	REPLAY::_0x7E2BD3EF6C205F09("phone_cam3", 1);
	REPLAY::_0x7E2BD3EF6C205F09("phone_cam4", 1);
	REPLAY::_0x7E2BD3EF6C205F09("phone_cam5", 1);
	REPLAY::_0x7E2BD3EF6C205F09("phone_cam6", 1);
	REPLAY::_0x7E2BD3EF6C205F09("phone_cam7", 1);
	REPLAY::_0x7E2BD3EF6C205F09("phone_cam9", 1);
	REPLAY::_0x7E2BD3EF6C205F09("phone_cam12", 0);
}

void func_29(int iParam0, int iParam1)//Position - 0x2A9F
{
	SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iParam0);
	while (!SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iParam0))
	{
		SYSTEM::WAIT(0);
		SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iParam0);
	}
	SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH(iParam0, iParam1);
}

int func_30()//Position - 0x2ACE
{
	if (((LOADINGSCREEN::_LOADINGSCREEN_GET_LOAD_FREEMODE() || LOADINGSCREEN::_0xF2CA003F167E21D2()) || NETWORK::_0x88B588B41FF7868E()) || NETWORK::_0x67FC09BC554A75E5())
	{
		return 1;
	}
	return 0;
}

