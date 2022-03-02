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
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	struct<134> Var2;
	var uVar286;
	
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
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	GlobalFunc_7534();
	func_641();
	GlobalFunc_8912();
	func_629();
	func_628();
	func_626();
	func_619();
	func_605();
	MISC::START_SAVE_DATA(&Global_SAVE_DATA, 34067, 1);
	MISC::REGISTER_FLOAT_TO_SAVE(&Global_SAVE_DATA, "fSaveVersion");
	func_595();
	func_588();
	func_574();
	func_567();
	func_563();
	func_559();
	func_555();
	func_550();
	func_540();
	func_524();
	func_519();
	func_516();
	func_503();
	func_500();
	func_493();
	func_491();
	func_479();
	func_476();
	func_472();
	func_467();
	func_462();
	func_458();
	func_448();
	func_445();
	func_444();
	func_443();
	func_442();
	func_441();
	func_439();
	func_435();
	func_434();
	func_431();
	func_427();
	func_425();
	func_423();
	func_420();
	func_414();
	func_409();
	func_408();
	func_398();
	func_397();
	func_394();
	func_391();
	func_390();
	func_386();
	func_383();
	func_382();
	func_381();
	func_380();
	MISC::STOP_SAVE_DATA();
	MISC::SET_BIT(&Global_2545212, 2);
	iVar0 = 34067;
	iVar1 = MISC::GET_SIZE_OF_SAVE_DATA(1);
	if (iVar0 != iVar1)
	{
	}
	STATS::STAT_SET_INT(joaat("sp_knife_flights_count"), func_379(), 1);
	STATS::STAT_SET_INT(joaat("sp_under_the_bridge_count"), GlobalFunc_5988(), 1);
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[27 /*3*/], 1))
	{
		Global_1 = 1;
	}
	else
	{
		Global_1 = 0;
	}
	if (Global_1)
	{
		Global_0 = Global_SAVE_DATA;
	}
	Global_SAVE_DATA = 1.5f;
	if (Global_1)
	{
		if (Global_0 != 1.5f)
		{
			func_371(Global_0);
		}
	}
	func_361(0);
	if ((!GlobalFunc_82() && !GlobalFunc_82()) && !GlobalFunc_81())
	{
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_683, 0) || MISC::IS_BIT_SET(Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_683, 1))
		{
			GlobalFunc_521(0);
			GlobalFunc_521(1);
			GlobalFunc_521(2);
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				func_110(PLAYER::PLAYER_PED_ID());
			}
		}
	}
	if ((((!GlobalFunc_83() && !GlobalFunc_82()) && !GlobalFunc_82()) && !GlobalFunc_81()) && !GlobalFunc_84())
	{
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_683, 3))
		{
			GlobalFunc_780(48);
			TASK::SET_SCENARIO_GROUP_ENABLED("BLIMP", 0);
			func_106(57);
			MISC::CLEAR_BIT(&(Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_683), 3);
		}
	}
	if ((!GlobalFunc_82() && !GlobalFunc_82()) && !GlobalFunc_81())
	{
		if (GlobalFunc_892(0, 10))
		{
			GlobalFunc_2196(0, 10, 0);
			GlobalFunc_2198(94, 0, 0);
		}
	}
	Var2 = 44;
	Var2.f_133 = 50;
	func_102(&Var2, &uVar286);
	if (Global_1 || !GlobalFunc_100(Global_SAVE_DATA.RP_PLAYER_x, 0f, 0f, 0f))
	{
		if (Global_2)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && GlobalFunc_42(GlobalFunc_8315()))
			{
				GlobalFunc_7694(PLAYER::PLAYER_PED_ID(), 1, 0);
				GlobalFunc_7693(PLAYER::PLAYER_PED_ID());
				GlobalFunc_7714(PLAYER::PLAYER_PED_ID());
				func_110(PLAYER::PLAYER_PED_ID());
				PED::_0xE861D0B05C7662B8(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			Global_24747 = 0;
		}
		else
		{
			func_80("startup_positioning", 2224);
		}
	}
	Global_SAVE_DATA.isGameflowActive = 1;
	if (!Global_1)
	{
		func_78();
		if (Global_2 || Global_3)
		{
			MISC::CLEAR_BIT(&(Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[27 /*3*/]), 1);
		}
		else
		{
			MISC::SET_BIT(&(Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[27 /*3*/]), 1);
		}
	}
	Global_SAVE_DATA.RESPAWN_LOCATION_DATA.f_31 = 1;
	func_76();
	func_73();
	GlobalFunc_11149();
	GlobalFunc_7532();
	GlobalFunc_7533();
	GlobalFunc_9183(0);
	GlobalFunc_516(PLAYER::PLAYER_PED_ID());
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_683, 3))
	{
		if (!TASK::IS_SCENARIO_GROUP_ENABLED("BLIMP"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("BLIMP", 1);
		}
	}
	else if (TASK::IS_SCENARIO_GROUP_ENABLED("BLIMP"))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("BLIMP", 0);
	}
	GlobalFunc_6663();
	SYSTEM::WAIT(0);
	if (!(MISC::_IS_COMMAND_LINE_BENCHMARK_VALUE_SET() || MISC::_LANDING_MENU_IS_ACTIVE()))
	{
		func_80("main_persistent", 1424);
		BRAIN::ENABLE_SCRIPT_BRAIN_SET(1);
	}
}









































































void func_73()//Position - 0xB166
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	MISC::ADD_STUNT_JUMP_ANGLED(2.143237f, 1720.526f, 224.3622f, 14.62072f, 1712.374f, 230.3794f, 6f, 98.66151f, 1846.07f, 173.6653f, 41.45658f, 1758.399f, 213.0361f, 30f, 58.2f, 1729.6f, 228.1f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-437.4357f, -1196.306f, 52.99947f, -442.8505f, -1190.487f, 57.12535f, 6f, -435.0204f, -1242.034f, 48.43407f, -448.8804f, -1342.776f, 30.26572f, 24f, -462.6627f, -1212.356f, 58.3663f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(466.72f, 4319.375f, 59.95854f, 474.2116f, 4328.239f, 64.00435f, 8f, 401.4681f, 4394.32f, 61.78275f, 450.5329f, 4342.308f, 66.88426f, 25.75f, 454.1235f, 4323.501f, 68.73932f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-166.3456f, 6578.911f, 12.05939f, -162.1356f, 6575.203f, 16.19019f, 6f, -151.7565f, 6588.687f, 8.772982f, -55.48508f, 6689.387f, 14.51807f, 21f, -166.0263f, 6588.806f, 11.69604f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-977.3154f, 4180.182f, 133.4073f, -969.1559f, 4188.988f, 138.6073f, 7f, -1068.254f, 4267.542f, 101.9986f, -1008.683f, 4219.646f, 117.8451f, 24f, -977f, 4247f, 144f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-7.579316f, -1037.718f, 37.53464f, -6.544167f, -1033.321f, 41.57407f, 8f, -32.06438f, -1018.62f, 26.90977f, -100.7285f, -1024.356f, 29.27405f, 38.75f, -36f, -1037f, 47f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-268.0506f, -770.5955f, 55.124f, -270.5158f, -775.4097f, 60.10282f, 6f, -213.3776f, -799.5538f, 28.45401f, -176.9494f, -812.3639f, 34.23903f, 25.75f, -163.4269f, -787.8375f, 53.7828f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-86.19047f, -537.1067f, 38.11981f, -81.48403f, -537.1505f, 43.90483f, 3f, -102.1343f, -526.785f, 26.51042f, -177.5483f, -526.9933f, 32.5276f, 24f, -113f, -545f, 45f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-1594.773f, -762.3895f, 20.85323f, -1603.425f, -727.0289f, 25.63661f, 8f, -1634.038f, -735.4114f, 9.369503f, -1718.671f, -678.6514f, 14.0662f, 78.5f, -1610f, -714f, 22f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-248.6565f, -215.402f, 47.083f, -234.4291f, -206.4805f, 50.083f, 6f, -288.7843f, -199.2215f, 36.63531f, -348.309f, -192.3793f, 41.15861f, 33.5f, -268f, -223f, 50f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-1442.916f, 403.0396f, 109.2874f, -1447.803f, 402.9255f, 114.2972f, 6f, -1431.152f, 327.9755f, 60.38145f, -1443.336f, 247.949f, 63.55577f, 55.5f, -1474f, 352.8f, 104.1f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(3351.987f, 5156.334f, 18.20752f, 3352.75f, 5148.515f, 24.13302f, 10f, 3418.529f, 5166.281f, 3.857807f, 3445.439f, 5168.265f, 9.606205f, 32.25f, 3391f, 5177f, 18f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(1687.485f, 2340.26f, 73.36435f, 1674.006f, 2340.698f, 78.25781f, 6f, 1685.363f, 2411.073f, 43.42663f, 1684.302f, 2434.852f, 48.56516f, 40f, 1648f, 2359f, 80f, 150, 0);
	Var6 = { 319f, -612f, 45f };
	MISC::ADD_STUNT_JUMP(307.3563f, -621.0101f, 42.3353f, 309.8869f, -619.0259f, 45.4455f, 334.0952f, -649.0976f, 27.6553f, 390.8702f, -627.327f, 30.9727f, Var6, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-882.7947f, -854.2749f, 17.6236f, -884.027f, -849.2998f, 28.1236f, 9f, -963.61f, -859.1973f, 11.98967f, -902.2921f, -857.7957f, 20.24098f, 38.25f, -910f, -876f, 25f, 150, 0);
	Var6 = { 366f, -1150f, 43f };
	MISC::ADD_STUNT_JUMP(364.7186f, -1162.999f, 28.2918f, 374.8433f, -1153.451f, 34.7019f, 289.772f, -1195.962f, 37.1024f, 344.4012f, -1168.454f, 40.4272f, Var6, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(396.1014f, -1656.237f, 48.00058f, 400.5907f, -1659.715f, 53.08016f, 8f, 423.4009f, -1627.283f, 27.29182f, 448.9984f, -1594.914f, 32.30539f, 55.25f, 424f, -1656f, 51f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(52.47308f, -779.2045f, 42.21918f, 50.38058f, -784.9816f, 47.18962f, 6f, 74.71162f, -792.1132f, 29.64289f, 119.4799f, -808.371f, 34.34875f, 24.5f, 73f, -769f, 46f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(32.60692f, 6526.098f, 29.62476f, 44.76025f, 6513.196f, 41.56066f, 13.5f, 28.0924f, 6507.57f, 29.43886f, -21.48365f, 6456.287f, 33.36642f, 32.25f, 1.0814f, 6495.755f, 39.2608f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(1789.045f, 2049.238f, 65.45301f, 1783.491f, 2044.977f, 68.84211f, 6f, 1839.666f, 1912.061f, 56.96013f, 1806.044f, 1994.968f, 63.33834f, 20f, 1774f, 2030f, 71f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-1070.755f, 10.70386f, 50.34879f, -1071.086f, 8.394933f, 55.37626f, 6f, -1059.804f, 7.505019f, 59.62975f, -1042.759f, 4.53342f, 45.65608f, 3f, -1062f, 24f, 63f, 150, 0);
	Var0 = { 89.6931f, -2191.275f, 5.747f };
	Var3 = { 30.7866f, -2192.573f, 5.1184f };
	Var6 = { 80.9447f, -2199.302f, 4.9105f };
	MISC::ADD_STUNT_JUMP(func_75(Var0, 0), func_75(Var0, 1), func_74(Var3, 0), func_74(Var3, 1), Var6, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(1637.904f, 3608.275f, 33.47485f, 1629.742f, 3603.816f, 42.63604f, 9.875f, 1590.551f, 3584.659f, 30.72894f, 1495.256f, 3532.62f, 40.86155f, 41.625f, 1557f, 3589f, 42f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(566.68f, -594.16f, 43.86801f, 564.135f, -594.5361f, 48.96004f, 6f, 584.3754f, -656.7363f, 10.542f, 607.3912f, -744.896f, 15.90709f, 80f, 550f, -632f, 45f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(452.9986f, -1374.922f, 43.02972f, 449.3213f, -1379.443f, 48.07609f, 6f, 491.9446f, -1413.2f, 27.3054f, 557.421f, -1461.428f, 32.19254f, 46.5f, 495f, -1397f, 48f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-425.5986f, -1555.608f, 22.70676f, -418.9902f, -1557.324f, 31.41631f, 9.5f, -425.4729f, -1443.893f, 19.71997f, -430.4611f, -1535.311f, 28.21267f, 25.5f, -444.5202f, -1511.756f, 27.8632f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-963.1714f, -2778.506f, 14.47828f, -965.7361f, -2777.121f, 19.46395f, 8f, -988.8297f, -2830.789f, 11.96478f, -1027.989f, -2895.436f, 16.95805f, 18f, -967.196f, -2811.716f, 14.5521f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-2009.693f, -319.2802f, 47.54504f, -2000.673f, -306.3672f, 51.54504f, 8f, -2102.132f, -241.9226f, 7.677715f, -2040.342f, -281.8877f, 26.53936f, 71.75f, -2060.904f, -251.8438f, 35.9419f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(1671.913f, 3151.226f, 45.29734f, 1680.949f, 3154.494f, 50.3022f, 6f, 1658.687f, 3255.261f, 38.57218f, 1665.78f, 3198.186f, 46.24008f, 60.5f, 1651f, 3166f, 57f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-524.6519f, -1489.865f, 12.31534f, -521.7512f, -1477.948f, 17.32255f, 6f, -499.4218f, -1491.98f, 8.405223f, -443.707f, -1514.7f, 15.50227f, 33.5f, -522f, -1516f, 17f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(787.837f, -2912.408f, 5.628719f, 787.8829f, -2910.002f, 10.59276f, 8f, 734.1174f, -2910.26f, 3.919759f, 671.3137f, -2910.305f, 9.191636f, 14f, 757f, -2923f, 20f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(1978.694f, 1925.877f, 87.246f, 1980.888f, 1942.735f, 96.48006f, 8.3125f, 1918.173f, 1913.685f, 55.10921f, 1900.403f, 2006.587f, 61.17362f, 31f, 1928.212f, 1911.14f, 73.7466f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(672.2588f, -3003.404f, 6.047905f, 672.0038f, -3007.075f, 10.86605f, 6f, 782.1926f, -2994.932f, 4.036896f, 732.1247f, -3005.69f, 11.83312f, 37.25f, 715f, -3024f, 20f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(108.1759f, -2815.123f, 9.17942f, 110.2545f, -2814.757f, 14.23679f, 6f, 93.96964f, -2739.858f, 4.505202f, 82.31894f, -2706.242f, 7.005202f, 23.25f, 92f, -2786f, 15f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(109.0594f, -3209.312f, 7.463991f, 111.0596f, -3208.928f, 12.91259f, 6f, 127.4547f, -3257.39f, 14.77992f, 128.4464f, -3311.17f, 19.44173f, 18f, 108f, -3292f, 26f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(124.2149f, -2954.815f, 9.250035f, 122.1116f, -2955.03f, 14.26613f, 6f, 128.9299f, -3006.801f, 15.47611f, 134.7525f, -3068.489f, 20.46475f, 22f, 113f, -2980f, 19f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(174.6314f, -2782.512f, 7.013673f, 183.1974f, -2774.705f, 13.7502f, 3.25f, 260.693f, -2675.165f, 16.32216f, 231.2144f, -2747.909f, 18.90412f, 16f, 188f, -2749f, 24f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(163.6802f, -2961.333f, 7.712487f, 165.7382f, -2960.979f, 12.76933f, 6f, 142.2329f, -2895.039f, 12.95989f, 142.2177f, -2849.85f, 18.45989f, 28.25f, 173f, -2918f, 20f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(285.7501f, -3014.055f, 8.774601f, 288.3199f, -3013.423f, 13.83196f, 6f, 274.9825f, -2988.799f, 3.447593f, 272.0995f, -2860.959f, 9.019781f, 60.75f, 284f, -2968f, 16f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(371.4717f, -2635.26f, 9.349143f, 371.6286f, -2637.314f, 14.39637f, 6f, 506.0603f, -2627.234f, 4.586116f, 442.4721f, -2630.006f, 7.15538f, 18f, 412f, -2621f, 21f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-854.3132f, -2551.837f, 20.41864f, -850.6099f, -2553.969f, 27.43327f, 6f, -798.0812f, -2469.664f, 11.88453f, -885.4293f, -2483.408f, 23.94611f, 95.25f, -891.8524f, -2466.815f, 60.0357f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-986.5257f, -2507.188f, 20.45239f, -990.4862f, -2504.88f, 27.38469f, 6f, -987.5785f, -2554.466f, 32.70585f, -1014.478f, -2600.25f, 40.10584f, 50.25f, -1023f, -2516f, 43f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-589.2717f, -1532.161f, 3.122784f, -587.6168f, -1526.171f, 6.213938f, 6f, -704.963f, -1488.515f, 3.172576f, -763.7324f, -1463.675f, 6.000514f, 42.5f, -669f, -1537f, 33f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-626.5751f, -1075.897f, 21.0667f, -625.0385f, -1070.019f, 26.05841f, 7f, -704.2628f, -1075.639f, 11.31195f, -668.6943f, -1051.684f, 17.63114f, 28.25f, -641f, -1061f, 25f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-453.6471f, -1397.42f, 30.32707f, -449.6354f, -1397.113f, 35.30394f, 6f, -456.1882f, -1440.832f, 27.29717f, -454.3793f, -1482.426f, 34.73454f, 16.75f, -436f, -1417f, 39f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-445.2386f, -542.0142f, 24.50053f, -442.5161f, -542.0551f, 29.52355f, 6f, -445.7004f, -442.1162f, 40.4093f, -445.1812f, -499.7989f, 20.82354f, 24.25f, -464f, -526f, 30f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-594.9152f, -109.8597f, 40.96681f, -600.7094f, -107.168f, 45.9851f, 3.375f, -625.0757f, -166.6679f, 35.66935f, -603.1118f, -120.366f, 40.4407f, 3.75f, -601f, -124f, 44f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(-726.3411f, -58.79087f, 39.67519f, -728.8365f, -54.57068f, 42.72398f, 3f, -771.4631f, -75.39616f, 35.85175f, -855.1539f, -118.4413f, 40.32775f, 30f, -737f, -78f, 46f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(1480.185f, -2218.538f, 77.75645f, 1478.212f, -2215.55f, 80.62068f, 3f, 1429.022f, -2249.86f, 59.38379f, 1361.268f, -2295.879f, 68.70474f, 34.75f, 1457f, -2255f, 79f, 150, 0);
	MISC::ADD_STUNT_JUMP_ANGLED(367.1642f, -2522.259f, 6.246408f, 367.948f, -2525.47f, 10.87989f, 6f, 401.6762f, -2508.97f, 10.13972f, 433.9243f, -2495.269f, 17.23942f, 25.75f, 376f, -2490f, 18f, 150, 0);
	MISC::ENABLE_STUNT_JUMP_SET(0);
}

Vector3 func_74(struct<3> Param0, bool bParam3)//Position - 0xC323
{
	struct<3> Var0;
	
	Var0 = { -15f, -15f, -2f };
	if (bParam3)
	{
		Var0 = { 15f, 15f, 5f };
	}
	Var0 = { Param0 + Var0 };
	return Var0;
}

Vector3 func_75(struct<3> Param0, bool bParam3)//Position - 0xC363
{
	struct<3> Var0;
	
	Var0 = { -5f, -5f, 0f };
	if (bParam3)
	{
		Var0 = { 5f, 5f, 3f };
	}
	Var0 = { Param0 + Var0 };
	return Var0;
}

void func_76()//Position - 0xC397
{
	func_77(-1680125890);
	func_77(-1355829283);
	func_77(359660636);
	func_77(1393576711);
	func_77(86126380);
	func_77(-205222799);
	func_77(391435153);
	func_77(-937839340);
	func_77(-1173448450);
	func_77(-897631773);
	func_77(-1137468084);
	func_77(-519379206);
	func_77(-754857240);
	func_77(1840214442);
	func_77(1840769);
	func_77(161163647);
	func_77(467127800);
	func_77(682485668);
	func_77(-652109396);
	func_77(-354665183);
	func_77(864702084);
	func_77(1028416008);
	func_77(635450156);
	func_77(462102146);
	func_77(1559732570);
	func_77(1864517039);
	func_77(1685533938);
	func_77(1395036753);
	func_77(-2135823001);
	func_77(1835189961);
	func_77(-1673223028);
	func_77(-1978531801);
	func_77(-1213637803);
	func_77(-460147389);
	func_77(-742386786);
	func_77(19689078);
	func_77(-1488383664);
	func_77(-644090379);
	func_77(-203675019);
	func_77(-437416296);
	func_77(1053081101);
	func_77(755374736);
	func_77(307225892);
	func_77(1739830342);
	func_77(1008345977);
	func_77(-1838261400);
	func_77(-88189184);
	func_77(-14436651);
	func_77(-295889592);
	func_77(1667956578);
	func_77(1367432079);
	func_77(-801974028);
	func_77(-1218336942);
	func_77(380898258);
	func_77(-1889206990);
	func_77(-1834311451);
	func_77(1669415571);
	func_77(22407341);
	func_77(-1132110067);
	func_77(1999080436);
	func_77(-2122735464);
	func_77(-1689889743);
	func_77(-1508546097);
	func_77(-1614750430);
	func_77(-1433472322);
	func_77(-453122141);
	func_77(-827016431);
	func_77(27336937);
	func_77(670861759);
	func_77(84471659);
	func_77(-2106541084);
	func_77(613961892);
	func_77(830974511);
	func_77(-1089784078);
	func_77(-862072297);
	func_77(1774128219);
	func_77(2020911558);
	func_77(1322145394);
	func_77(1560081103);
	func_77(1028478351);
	func_77(-1117366713);
	func_77(-1741878315);
	func_77(-1444827330);
	func_77(-224378694);
	func_77(2122012786);
	func_77(1616809629);
	func_77(-1380475172);
	func_77(-279150617);
	func_77(-1189014671);
	func_77(-942231332);
	func_77(-2120178575);
	func_77(1631749045);
	func_77(-40354734);
	func_77(-104186273);
	func_77(1246814063);
	func_77(1063217957);
	func_77(-106864726);
	func_77(-1873493291);
	func_77(-2010178835);
	func_77(-1905121421);
	func_77(1775073303);
	func_77(1099769751);
	func_77(1661725620);
	func_77(759267360);
	func_77(1540733319);
	func_77(1293360138);
	func_77(-1005160179);
	func_77(-808284251);
	func_77(-2139165953);
	func_77(517816380);
	func_77(1445867565);
	func_77(-1064705745);
	func_77(-1370964819);
	func_77(-302630109);
	func_77(-88255311);
	func_77(1480953272);
	func_77(963989528);
	func_77(-959812712);
	func_77(-1198469339);
	func_77(-5531601);
	func_77(1198794687);
	func_77(-1564779168);
	func_77(1538150219);
	func_77(408472505);
	func_77(629663255);
	func_77(1810854397);
	func_77(1009554040);
	func_77(1462321819);
	func_77(107618590);
}

void func_77(int iParam0)//Position - 0xC827
{
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iParam0);
	}
}

void func_78()//Position - 0xC83E
{
	if (!Global_2)
	{
		SCRIPT::_0xB1577667C3708F9B();
		Global_2 = GlobalFunc_4731();
		if (Global_2)
		{
		}
	}
}


void func_80(char* sParam0, int iParam1)//Position - 0xC899
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
		SCRIPT::REQUEST_SCRIPT(sParam0);
	}
	SYSTEM::START_NEW_SCRIPT(sParam0, iParam1);
}






















void func_102(var uParam0, var uParam1)//Position - 0x114B3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = FILES::GET_NUM_DLC_WEAPONS();
	iVar2 = 0;
	while (iVar2 < 3)
	{
		*uParam0 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar2 /*284*/] };
		iVar4 = 0;
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			if (((iVar4 < iVar0 && FILES::GET_DLC_WEAPON_DATA(iVar1, uParam1)) && !FILES::IS_CONTENT_ITEM_LOCKED(*uParam1)) && !GlobalFunc_222(uParam1->f_1))
			{
				iVar5 = 1;
				iVar3 = 0;
				while (iVar5 && iVar3 < uParam0->f_133)
				{
					if (uParam0->f_133[iVar3 /*3*/] == uParam1->f_1)
					{
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar2 /*284*/].f_133[iVar4 /*3*/] = { uParam0->f_133[iVar3 /*3*/] };
						iVar4++;
						iVar5 = 0;
					}
					iVar3++;
				}
				if (iVar5 && (MISC::IS_XBOX360_VERSION() || MISC::IS_PS3_VERSION()))
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar2 /*284*/].f_133[iVar4 /*3*/].f_1 = uParam1->f_6 * 2;
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar2 /*284*/].f_133[iVar4 /*3*/] = uParam1->f_1;
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar2 /*284*/].f_133[iVar4 /*3*/].f_2 = 0;
					iVar4++;
				}
			}
			iVar1++;
		}
		iVar1 = iVar4;
		while (iVar1 <= 49)
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar2 /*284*/].f_133[iVar1 /*3*/] = 0;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar2 /*284*/].f_133[iVar1 /*3*/].f_2 = 0;
			iVar1++;
		}
		if (GlobalFunc_8315() == iVar2)
		{
			GlobalFunc_7694(PLAYER::PLAYER_PED_ID(), 1, 0);
		}
		iVar2++;
	}
}




void func_106(int iParam0)//Position - 0x1183C
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
		MISC::CLEAR_BIT(&(Global_SAVE_DATA.FLOW_HELP_STRUCT.HELP_DISPLAYED_BITSET_ARRAY[iVar1]), iVar0);
		MISC::CLEAR_BIT(&(Global_SAVE_DATA.FLOW_HELP_STRUCT.HELP_DISPLAYED_BITSET_ARRAY[iVar1]), iVar0);
	}
}




void func_110(int iParam0)//Position - 0x119A9
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
				if (GlobalFunc_3021(iParam0) != Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1619[iVar0])
				{
					GlobalFunc_521(iVar0);
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1619[iVar0] = GlobalFunc_3021(iParam0);
				}
			}
		}
		func_211(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
		if (!Global_89948[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!GlobalFunc_526(49))
				{
					iVar1 = GlobalFunc_11119(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					GlobalFunc_11185(GlobalFunc_4917(0), 12, 16, 0, 0, 0, 0);
				}
				if (!GlobalFunc_526(44))
				{
					iVar1 = GlobalFunc_11119(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = GlobalFunc_11119(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					GlobalFunc_11185(GlobalFunc_4917(0), 3, 70, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 3, 71, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 3, 72, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 3, 73, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 3, 74, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 3, 75, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 4, 41, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 4, 42, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 4, 43, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 4, 44, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = GlobalFunc_11119(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				GlobalFunc_521(iVar0);
				func_211(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
			}
		}
		Global_89948[iVar0] = 1;
	}
}





































































































void func_211(int iParam0, var uParam1, bool bParam2)//Position - 0x2BC37
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
			if (GlobalFunc_11071(iParam0, iVar1, &iVar2, 0))
			{
				func_341(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (GlobalFunc_11070(iParam0, iVar1, &iVar2))
			{
				func_341(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_6784(741, uParam1->f_60, Global_68104, 1);
			GlobalFunc_6784(742, uParam1->f_61, Global_68104, 1);
			iVar4 = GlobalFunc_4915(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			func_214(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			if (!bParam2)
			{
				iVar5 = GlobalFunc_4915(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_214(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
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



int func_214(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x2BECE
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
		Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		GlobalFunc_11022(iVar5, iParam1, iParam2, 1);
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
					Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, 10, 0) };
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
						GlobalFunc_11022(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, iVar0, uVar15[iVar0]) };
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
								Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, 14, uVar31[iVar1]) };
								GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
								if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
								{
									GlobalFunc_11022(iVar5, iVar0, uVar15[iVar0], 1);
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
								GlobalFunc_11022(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, iVar0, GlobalFunc_11069(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					uVar41 = { GlobalFunc_7617(iVar5, 0) };
					func_214(iParam0, iVar0, uVar41[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				GlobalFunc_9519(iVar57, 0, Global_68104);
			}
			GlobalFunc_10817(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar58 = { GlobalFunc_7616(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, 14, uVar58[iVar1]) };
			GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
			{
				GlobalFunc_11022(iVar5, 14, uVar58[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_68105 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = GlobalFunc_11068(iParam0, iVar5, 14, uVar58[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_214(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
			iVar3 = GlobalFunc_11068(iParam0, iVar5, 1, iVar69, 14, Global_68106[1 /*14*/].f_12);
			if (iVar3 != -99 && iVar3 != iParam2)
			{
				iVar7 = GlobalFunc_5013(iVar5, 1, -1);
			}
		}
		GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
		{
			GlobalFunc_11022(iVar5, iParam1, iParam2, 1);
		}
		if (iParam5 == 0)
		{
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11068(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_214(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						iVar73 = GlobalFunc_11068(iParam0, iVar5, 11, iVar70, 3, 0);
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
							func_214(iParam0, 8, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, iParam1, iParam2) };
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
								func_214(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, iParam1, iParam2) };
								iVar9 = -99;
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									func_214(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								}
								Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, iParam1, iParam2) };
							}
						}
					}
					else
					{
						Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, 11, iVar70) };
						iVar79 = Global_68106[1 /*14*/].f_3;
						Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, 11, iParam2) };
						iVar80 = Global_68106[1 /*14*/].f_3;
						if (iVar79 != iVar80)
						{
							Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, 8, iVar71) };
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
										Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, 11, iVar82) };
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
								func_214(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_214(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, iParam1, iParam2) };
						}
					}
				}
				else
				{
					GlobalFunc_10810(iVar5, iParam2);
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			GlobalFunc_10817(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, GlobalFunc_11069(iParam0, 8, -1), iParam2);
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
				func_258(iParam0, iParam2, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			GlobalFunc_10817(iParam0, iParam1, iParam2, iParam6, 0);
			iVar84 = GlobalFunc_6669(iParam0, 11);
			if (GlobalFunc_6737(iVar5, iVar84))
			{
				iVar85 = GlobalFunc_6736(iVar5, iParam2, Global_68106[1 /*14*/].f_4);
				GlobalFunc_10810(iVar5, iVar85);
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
				GlobalFunc_9021(iParam0, Global_68104);
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
						iVar3 = GlobalFunc_11068(iParam0, iVar5, iParam1, iVar94, 14, iVar95);
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
					iVar3 = GlobalFunc_11068(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_214(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						if (!GlobalFunc_10955(iParam0, 9, iVar97))
						{
							func_214(iParam0, 9, iVar97, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						func_214(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_214(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
					iVar99 = GlobalFunc_11069(iParam0, 4, -1);
					iVar100 = iParam2;
				}
				else
				{
					iVar99 = iParam2;
					iVar100 = GlobalFunc_11069(iParam0, 11, -1);
				}
				if (GlobalFunc_6729(iVar5, 11, iVar100))
				{
					if (!GlobalFunc_6728(iVar5, 4, iVar99))
					{
						if (GlobalFunc_6727(iVar5, 4, iVar99, &uVar101))
						{
							func_214(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
				}
				else if (GlobalFunc_6728(iVar5, 4, iVar99))
				{
					if (GlobalFunc_6726(iVar5, 4, iVar99, &uVar101))
					{
						func_214(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
					iVar3 = GlobalFunc_11068(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_214(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar3 = GlobalFunc_11068(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_214(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (GlobalFunc_11178(iParam0, &uVar4))
		{
			func_214(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	if (iVar6 != -99)
	{
		func_214(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar9 != -99)
	{
		func_214(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar7 != -99)
	{
		func_214(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				func_214(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}












































void func_258(int iParam0, int iParam1, bool bParam2)//Position - 0x31FB7
{
	int iVar0;
	int iVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	GlobalFunc_10551(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = GlobalFunc_6735(iVar0, iParam1);
	if (iVar1 != -1)
	{
		GlobalFunc_9519(iVar1, 1, Global_68104);
	}
	GlobalFunc_11230(iParam0, bParam2, 0);
}



















































































int func_341(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x531BD
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
		Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		GlobalFunc_8613(iParam1);
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
				Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, iVar0, uVar11[iVar0]) };
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
							Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, 14, uVar27[iVar1]) };
							GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8613(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = GlobalFunc_11231(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_341(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						GlobalFunc_8613(iVar0);
						if (Global_68105 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = GlobalFunc_11231(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_341(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, iVar0, GlobalFunc_11119(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (GlobalFunc_11071(iParam0, iVar10, &iVar4, 1))
							{
								func_341(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_341(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var53 = { GlobalFunc_10828(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 8, iVar5, &uVar11, &Var53))
				{
					func_341(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_341(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_341(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_341(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_341(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
			Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, 14, uVar67[iVar1]) };
			GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8613(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11231(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_341(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
		GlobalFunc_8613(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = GlobalFunc_11231(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_341(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = GlobalFunc_11231(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_341(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			GlobalFunc_11027(iVar10, iParam1, iParam2);
		}
	}
	if (Global_68105 == 1)
	{
		if (GlobalFunc_11071(iParam0, iVar10, &iVar4, 0))
		{
			func_341(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (GlobalFunc_11070(iParam0, iVar10, &iVar4))
		{
			func_341(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}




















void func_361(int iParam0)//Position - 0x55AD5
{
	int iVar0;
	
	if (Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.numberStoredOverrides > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.numberStoredOverrides)
		{
			if (Global_SAVE_DATA.MF_STRANDS_TO_OVERRIDE_ARRAY[iVar0] != -1)
			{
				if (iParam0 || !Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.MF_APPLY_ON_MP_SWITCH_ONLY[iVar0])
				{
					Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[Global_SAVE_DATA.MF_STRANDS_TO_OVERRIDE_ARRAY[iVar0] /*3*/].f_1 = Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.MF_COMMAND_POINTER_OVERRIDE_ARRAY[iVar0];
					Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[Global_SAVE_DATA.MF_STRANDS_TO_OVERRIDE_ARRAY[iVar0] /*3*/].f_2 = Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.MF_COMMAND_POINTER_HASH_ID_ARRAY[iVar0];
					if (Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.MF_MISSION_TO_UNCOMPLETE[iVar0] != -1)
					{
						if (GlobalFunc_3059(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.MF_MISSION_TO_UNCOMPLETE[iVar0]) == Global_SAVE_DATA.MF_STRANDS_TO_OVERRIDE_ARRAY[iVar0])
						{
							GlobalFunc_8649(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.MF_MISSION_TO_UNCOMPLETE[iVar0], 0);
						}
					}
				}
			}
			iVar0++;
		}
		Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Completed_Call = -1;
		Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Call_Answered = 0;
		Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Call_Had_Response = 0;
	}
}










void func_371(float fParam0)//Position - 0x56B75
{
	func_376();
	if (fParam0 == 1f)
	{
		func_374();
	}
	if (fParam0 <= 1.1f)
	{
		GlobalFunc_587();
	}
	if (fParam0 <= 1.5f)
	{
		func_372();
	}
}

void func_372()//Position - 0x56BAA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 171;
		while (iVar1 <= 198)
		{
			if (MISC::IS_BIT_SET(Global_SAVE_DATA.OWVEC_IND[iVar1], iVar0))
			{
				MISC::CLEAR_BIT(&(Global_SAVE_DATA.OWVEC_IND[iVar1]), iVar0);
				iVar2 = (iVar1 + (198 - 171)) + 1;
				MISC::SET_BIT(&(Global_SAVE_DATA.OWVEC_IND[iVar2]), iVar0);
			}
			iVar1++;
		}
		iVar0++;
	}
}


void func_374()//Position - 0x56C21
{
	if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[7] != 0)
	{
		if (!Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[86 /*6*/])
		{
			Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[86 /*6*/] = 1;
		}
	}
	if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[8] != 0)
	{
		if (!Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[71 /*6*/])
		{
			Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[71 /*6*/] = 1;
		}
	}
	if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[9] != 0)
	{
		if (!Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[91 /*6*/])
		{
			Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[91 /*6*/] = 1;
		}
	}
	if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[10] != 0)
	{
		if (!Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[67 /*6*/])
		{
			Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[67 /*6*/] = 1;
		}
	}
	if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[11] != 0)
	{
		if (!Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[77 /*6*/])
		{
			Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[77 /*6*/] = 1;
		}
	}
	func_375(195, 198);
	func_375(195, 197);
	func_375(195, 196);
}

void func_375(int iParam0, int iParam1)//Position - 0x56D41
{
	struct<4> Var0;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	
	Var0 = { Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/] };
	uVar4 = Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_4;
	uVar5 = Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_5;
	uVar6 = Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_6;
	uVar7 = Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_7;
	uVar8 = Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_8;
	uVar9 = Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_9;
	uVar10 = Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_10;
	uVar11 = Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_11;
	Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/] = { Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam1 /*12*/] };
	Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_4 = Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam1 /*12*/].f_4;
	Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_5 = Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam1 /*12*/].f_5;
	Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_6 = Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam1 /*12*/].f_6;
	Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_7 = Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam1 /*12*/].f_7;
	Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_8 = Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam1 /*12*/].f_8;
	Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_9 = Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam1 /*12*/].f_9;
	Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_10 = Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam1 /*12*/].f_10;
	Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_11 = Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam1 /*12*/].f_11;
	Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam1 /*12*/] = { Var0 };
	Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam1 /*12*/].f_4 = uVar4;
	Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam1 /*12*/].f_5 = uVar5;
	Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam1 /*12*/].f_6 = uVar6;
	Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam1 /*12*/].f_7 = uVar7;
	Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam1 /*12*/].f_8 = uVar8;
	Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam1 /*12*/].f_9 = uVar9;
	Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam1 /*12*/].f_10 = uVar10;
	Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam1 /*12*/].f_11 = uVar11;
}

void func_376()//Position - 0x56F45
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!GlobalFunc_42(Global_SAVE_DATA.PROPERTIES_SAVED_DATA[iVar0 /*4*/]))
		{
			if (Global_SAVE_DATA.PROPERTIES_SAVED_DATA[iVar0 /*4*/] != 145)
			{
				Global_SAVE_DATA.PROPERTIES_SAVED_DATA[iVar0 /*4*/] = 145;
			}
		}
		iVar0++;
	}
}



int func_379()//Position - 0x57088
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.BRIDGES_FLOWN_UNDER_FLAGS, iVar1))
		{
			if (GlobalFunc_3063(iVar1))
			{
				iVar0++;
			}
		}
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.BRIDGES_FLOWN_UNDER_FLAGS_2, iVar1))
		{
			if (GlobalFunc_3063(iVar1 + 32))
			{
				iVar0++;
			}
		}
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.BRIDGES_FLOWN_UNDER_FLAGS_3, iVar1))
		{
			if (GlobalFunc_3063(iVar1 + 64))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_380()//Position - 0x5710C
{
	int iVar0;
	char cVar1[32];
	struct<8> Var9;
	
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_SAVE_DATA.BitsetCharacterStoryUnlock), 167, "DIRECTOR_SAVED_STRUCT");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.BitsetCharacterStoryUnlock), "BitsetCharacterStoryUnlock");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.DIRECTOR_SAVED_STRUCT.BitsetCharacterHeistUnlock), "BitsetCharacterHeistUnlock");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.DIRECTOR_SAVED_STRUCT.BitsetCharacterSpecialUnlock), "BitsetCharacterSpecialUnlock");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.DIRECTOR_SAVED_STRUCT.BitsetCharacterAnimalUnlock), "BitsetCharacterAnimalUnlock");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.DIRECTOR_SAVED_STRUCT.BitsetTravelLocationRevealed), "BitsetTravelLocationRevealed");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.DIRECTOR_SAVED_STRUCT.ExitHelpShownCount), "ExitHelpShownCount");
	StringCopy(&Var9, "DirMode_bookmark", 32);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(Global_SAVE_DATA.DIRECTOR_SAVED_STRUCT.f_6), 101, &Var9);
	iVar0 = 0;
	while (iVar0 < Global_SAVE_DATA.DIRECTOR_SAVED_STRUCT.f_6)
	{
		cVar1 = { Var9 };
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.DIRECTOR_SAVED_STRUCT.f_6[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	StringCopy(&Var9, "DirMode_bookmarkcat", 32);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(Global_SAVE_DATA.DIRECTOR_SAVED_STRUCT.f_107), 21, &Var9);
	iVar0 = 0;
	while (iVar0 < Global_SAVE_DATA.DIRECTOR_SAVED_STRUCT.f_107)
	{
		cVar1 = { Var9 };
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.DIRECTOR_SAVED_STRUCT.f_107[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	StringCopy(&Var9, "DirMode_bookmarkmodel", 32);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(Global_SAVE_DATA.DIRECTOR_SAVED_STRUCT.f_128), 21, &Var9);
	iVar0 = 0;
	while (iVar0 < Global_SAVE_DATA.DIRECTOR_SAVED_STRUCT.f_128)
	{
		cVar1 = { Var9 };
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.DIRECTOR_SAVED_STRUCT.f_128[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.DIRECTOR_SAVED_STRUCT.BitsetshortlistSex), "BitsetshortlistSex");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_SAVE_DATA.DIRECTOR_SAVED_STRUCT.Player_headingX), "Player_headingX");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_SAVE_DATA.DIRECTOR_SAVED_STRUCT.Player_headingX.Player_headingY), "Player_headingY");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_SAVE_DATA.DIRECTOR_SAVED_STRUCT.Player_headingX.Player_headingZ), "Player_headingZ");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_SAVE_DATA.DIRECTOR_SAVED_STRUCT.Player_heading), "Player_heading");
	StringCopy(&Var9, "DirMode_userloc", 32);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(Global_SAVE_DATA.DIRECTOR_SAVED_STRUCT.f_154), 7, &Var9);
	iVar0 = 0;
	while (iVar0 < Global_SAVE_DATA.DIRECTOR_SAVED_STRUCT.f_154)
	{
		cVar1 = { Var9 };
		StringConCat(&cVar1, "X", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_FLOAT_TO_SAVE(&(Global_SAVE_DATA.DIRECTOR_SAVED_STRUCT.f_154[iVar0 /*3*/]), &cVar1);
		cVar1 = { Var9 };
		StringConCat(&cVar1, "Y", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_FLOAT_TO_SAVE(&(Global_SAVE_DATA.DIRECTOR_SAVED_STRUCT.f_154[iVar0 /*3*/].f_1), &cVar1);
		cVar1 = { Var9 };
		StringConCat(&cVar1, "Z", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_FLOAT_TO_SAVE(&(Global_SAVE_DATA.DIRECTOR_SAVED_STRUCT.f_154[iVar0 /*3*/].f_2), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	StringCopy(&Var9, "DirMode_userhead", 32);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(Global_SAVE_DATA.DIRECTOR_SAVED_STRUCT.f_161), 3, &Var9);
	iVar0 = 0;
	while (iVar0 < Global_SAVE_DATA.DIRECTOR_SAVED_STRUCT.f_161)
	{
		cVar1 = { Var9 };
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_FLOAT_TO_SAVE(&(Global_SAVE_DATA.DIRECTOR_SAVED_STRUCT.f_161[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	StringCopy(&Var9, "DirMode_userInterior", 32);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(Global_SAVE_DATA.DIRECTOR_SAVED_STRUCT.f_164), 3, &Var9);
	iVar0 = 0;
	while (iVar0 < Global_SAVE_DATA.DIRECTOR_SAVED_STRUCT.f_164)
	{
		cVar1 = { Var9 };
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.DIRECTOR_SAVED_STRUCT.f_164[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_STRUCT();
}

void func_381()//Position - 0x57476
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_SAVE_DATA.COUNTRY_RACE_iCurrentRace), 11, "COUNTRY_RACE_SAVED_STRUCT");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.COUNTRY_RACE_iCurrentRace), "COUNTRY_RACE_iCurrentRace");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.COUNTRY_RACE_SAVED_STRUCT.COUNTRY_RACE_iBestTime), "COUNTRY_RACE_iBestTime");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.COUNTRY_RACE_SAVED_STRUCT.COUNTRY_RACE_iSlipStreamHelpCount), "COUNTRY_RACE_iSlipStreamHelpCount");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.COUNTRY_RACE_SAVED_STRUCT.COUNTRY_RACE_bStallionUnlocked), "COUNTRY_RACE_bStallionUnlocked");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.COUNTRY_RACE_SAVED_STRUCT.COUNTRY_RACE_bGauntletUnlocked), "COUNTRY_RACE_bGauntletUnlocked");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.COUNTRY_RACE_SAVED_STRUCT.COUNTRY_RACE_bDominatorUnlocked), "COUNTRY_RACE_bDominatorUnlocked");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.COUNTRY_RACE_SAVED_STRUCT.COUNTRY_RACE_bBuffaloUnlocked), "COUNTRY_RACE_bBuffaloUnlocked");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.COUNTRY_RACE_SAVED_STRUCT.COUNTRY_RACE_bMarshallUnlocked), "COUNTRY_RACE_bMarshallUnlocked");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.COUNTRY_RACE_SAVED_STRUCT.COUNTRY_RACE_bRaceJustCompleted), "COUNTRY_RACE_bRaceJustCompleted");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.COUNTRY_RACE_SAVED_STRUCT.COUNTRY_RACE_bDisrupted), "COUNTRY_RACE_bDisrupted");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.COUNTRY_RACE_SAVED_STRUCT.COUNTRY_RACE_bTextRegistered), "COUNTRY_RACE_bTextRegistered");
	MISC::STOP_SAVE_STRUCT();
}

void func_382()//Position - 0x57558
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_SAVE_DATA.bSeaRaceFirstBlip), 3, "SEA_RACE_SAVED_STRUCT");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.bSeaRaceFirstBlip), "bSeaRaceFirstBlip");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.SEA_RACE_SAVED_STRUCT.iSeaRaceWon), "iSeaRaceWon");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.SEA_RACE_SAVED_STRUCT.iSeaRaceLeaveArea), "iSeaRaceLeaveArea");
	MISC::STOP_SAVE_STRUCT();
}

void func_383()//Position - 0x575A9
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_SAVE_DATA.RE_FLAGS), 78, "RANDOM_EVENTS_SAVED");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.RE_FLAGS), "RE_FLAGS");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_TIME_REQ_SET), "RE_TIME_REQ_SET");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_HELP_COUNT), "RE_HELP_COUNT");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_BLIP_HELP_COUNT), "RE_BLIP_HELP_COUNT");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_ITEM_HELP_COUNT), "RE_ITEM_HELP_COUNT");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_NUMBER_OF_PEDS_DELIVERED), "RE_NUMBER_OF_PEDS_DELIVERED");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_SECVANHELP), "RE_SECVANHELP");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_DRUGFARMATTACKED), "RE_DRUGFARMATTACKED");
	func_385(&(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_VAR_COMPLETE), "RE_VAR_COMPLETE");
	func_384(&(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_BLOCK_TIME), "RE_BLOCK_TIME");
	MISC::STOP_SAVE_STRUCT();
}

void func_384(var uParam0, char* sParam1)//Position - 0x57679
{
	int iVar0;
	char cVar1[32];
	
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 35, sParam1);
	iVar0 = 0;
	while (iVar0 < 34)
	{
		StringCopy(&cVar1, "RAND_EVENT_Time", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_ENUM_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_385(var uParam0, char* sParam1)//Position - 0x576C0
{
	int iVar0;
	char cVar1[32];
	
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 35, sParam1);
	iVar0 = 0;
	while (iVar0 < 34)
	{
		StringCopy(&cVar1, "RAND_EVENT_Var", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_386()//Position - 0x57707
{
	func_387(&(Global_SAVE_DATA.PROPERTIES_SAVED_DATA), "PROPERTIES_SAVED_DATA");
}

void func_387(var uParam0, char* sParam1)//Position - 0x5771F
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 72, sParam1);
	func_388(uParam0, "OwnershipData");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_65), "bit");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_66), "subvarbit");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_67), "propertyNextTime");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_68), "cardest");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_69), "soncash");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_70), "trafcash");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_71), "towcash");
	MISC::STOP_SAVE_STRUCT();
}

void func_388(var uParam0, char* sParam1)//Position - 0x5779B
{
	int iVar0;
	struct<4> Var1;
	int iVar9;
	
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 65, sParam1);
	iVar0 = 0;
	while (iVar0 < 16)
	{
		iVar9 = iVar0;
		switch (iVar9)
		{
			case 0:
				StringCopy(&Var1, "PROPERTY_TOWING_IMPOUND", 32);
				break;
			
			case 1:
				StringCopy(&Var1, "PROPERTY_TAXI_LOT", 32);
				break;
			
			case 2:
				StringCopy(&Var1, "PROPERTY_ARMS_TRAFFICKING", 32);
				break;
			
			case 3:
				StringCopy(&Var1, "PROPERTY_SONAR_COLLECTIONS", 32);
				break;
			
			case 4:
				StringCopy(&Var1, "PROPERTY_CAR_MOD_SHOP", 32);
				break;
			
			case 5:
				StringCopy(&Var1, "PROPERTY_CINEMA_VINEWOOD", 32);
				break;
			
			case 6:
				StringCopy(&Var1, "PROPERTY_CINEMA_DOWNTOWN", 32);
				break;
			
			case 7:
				StringCopy(&Var1, "PROPERTY_CINEMA_MORNINGWOOD", 32);
				break;
			
			case 8:
				StringCopy(&Var1, "PROPERTY_GOLF_CLUB", 32);
				break;
			
			case 9:
				StringCopy(&Var1, "PROPERTY_CAR_SCRAP_YARD", 32);
				break;
			
			case 10:
				StringCopy(&Var1, "PROPERTY_WEED_SHOP", 32);
				break;
			
			case 11:
				StringCopy(&Var1, "PROPERTY_BAR_TEQUILALA", 32);
				break;
			
			case 12:
				StringCopy(&Var1, "PROPERTY_BAR_PITCHERS", 32);
				break;
			
			case 13:
				StringCopy(&Var1, "PROPERTY_BAR_HEN_HOUSE", 32);
				break;
			
			case 14:
				StringCopy(&Var1, "PROPERTY_BAR_HOOKIES", 32);
				break;
			
			case 15:
				StringCopy(&Var1, "PROPERTY_BAR_STRIP_CLUB", 32);
				break;
			
			default:
				StringCopy(&Var1, "Property", 32);
				StringIntConCat(&Var1, iVar0, 32);
				break;
		}
		func_389(uParam0[iVar0 /*4*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_389(var uParam0, char* sParam1)//Position - 0x57910
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 4, sParam1);
	MISC::REGISTER_ENUM_TO_SAVE(uParam0, "propertyOwner");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_1), "propertyNextTime");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2), "bit");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3), "lastincome");
	MISC::STOP_SAVE_STRUCT();
}

void func_390()//Position - 0x57957
{
	int iVar0;
	char cVar1[32];
	struct<8> Var9;
	
	StringCopy(&Var9, "BB_FailsNP", 32);
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_SAVE_DATA.Launcher_Bit_Flags), 9, "BAIL_BOND_SAVED_STRUCT");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.Launcher_Bit_Flags), "Launcher_Bit_Flags");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.BAIL_BOND_SAVED_STRUCT.Current_Mission), "Current_Mission");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.BAIL_BOND_SAVED_STRUCT.Launcher_State), "Launcher_State");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_SAVE_DATA.BAIL_BOND_SAVED_STRUCT.Stored_Time_Stamp), "Stored_Time_Stamp");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(Global_SAVE_DATA.BAIL_BOND_SAVED_STRUCT.f_4), 5, &Var9);
	iVar0 = 0;
	while (iVar0 < Global_SAVE_DATA.BAIL_BOND_SAVED_STRUCT.f_4)
	{
		cVar1 = { Var9 };
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.BAIL_BOND_SAVED_STRUCT.f_4[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_STRUCT();
}

void func_391()//Position - 0x57A15
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_SAVE_DATA.OWVEC_IND), 1252, "BUY_VEC_SAVED");
	func_393(&(Global_SAVE_DATA.OWVEC_IND), "OWVEC_IND");
	func_392(&(Global_SAVE_DATA.BUY_VEC_SAVED.OWVEC_COL_M), "OWVEC_COL_M");
	func_392(&(Global_SAVE_DATA.BUY_VEC_SAVED.OWVEC_COL_F), "OWVEC_COL_F");
	func_392(&(Global_SAVE_DATA.BUY_VEC_SAVED.OWVEC_COL_T), "OWVEC_COL_T");
	MISC::STOP_SAVE_STRUCT();
}

void func_392(var uParam0, char* sParam1)//Position - 0x57A7D
{
	int iVar0;
	char cVar1[32];
	
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 313, sParam1);
	iVar0 = 0;
	while (iVar0 < 312)
	{
		StringCopy(&cVar1, "BUYVEC_C_", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_ENUM_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_393(var uParam0, char* sParam1)//Position - 0x57AC6
{
	int iVar0;
	char cVar1[32];
	
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 313, sParam1);
	iVar0 = 0;
	while (iVar0 < 312)
	{
		StringCopy(&cVar1, "BUYVEC_I_", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_394()//Position - 0x57B0F
{
	struct<8> Var0;
	struct<8> Var8;
	struct<8> Var16;
	
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_SAVE_DATA.RP_PLAYER_x), 6, "RP_PLAYER");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_SAVE_DATA.RP_PLAYER_x), "RP_PLAYER_x");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_SAVE_DATA.RP_PLAYER.RP_PLAYER_y), "RP_PLAYER_y");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_SAVE_DATA.RP_PLAYER.RP_PLAYER_z), "RP_PLAYER_z");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_SAVE_DATA.RP_PLAYER.RP_PLAYER_heading), "RP_PLAYER_heading");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.RP_PLAYER.RP_PLAYER_Wanted), "RP_PLAYER_Wanted");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_SAVE_DATA.RP_PLAYER.RP_PLAYER_Parachute), "RP_PLAYER_Parachute");
	MISC::STOP_SAVE_STRUCT();
	StringCopy(&Var8, "RP_Vehicle", 32);
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x), 66, &Var8);
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x), "RP_Vehicle_x");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.RP_Vehicle_y), "RP_Vehicle_y");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.RP_Vehicle_z), "RP_Vehicle_z");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.RP_Velocity_x), "RP_Velocity_x");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.RP_Velocity_x.RP_Velocity_y), "RP_Velocity_y");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.RP_Velocity_x.RP_Velocity_z), "RP_Velocity_z");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.RP_Vehicle_heading), "RP_Vehicle_heading");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.RP_Vehicle_personal), "RP_Vehicle_personal");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.RP_Vehicle_bVehGen), "RP_Vehicle_bVehGen");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.RP_Vehicle_bInVehicle), "RP_Vehicle_bInVehicle");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.RP_Vehicle_bTrackedForImpound), "RP_Vehicle_bTrackedForImpound");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.RP_Vehicle_character), "RP_Vehicle_character");
	Var16 = { Var8 };
	StringConCat(&Var16, "_Data_", 32);
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.f_12), 54, &Var16);
	Var0 = { Var16 };
	StringConCat(&Var0, "PlateI", 32);
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.f_12), &Var0);
	Var0 = { Var16 };
	StringConCat(&Var0, "PlateT", 32);
	MISC::_REGISTER_TEXT_LABEL_TO_SAVE_2(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.f_12.f_1), &Var0);
	Var0 = { Var16 };
	StringConCat(&Var0, "Colour1", 32);
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.f_12.f_5), &Var0);
	Var0 = { Var16 };
	StringConCat(&Var0, "Colour2", 32);
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.f_12.f_6), &Var0);
	Var0 = { Var16 };
	StringConCat(&Var0, "ColourEx1", 32);
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.f_12.f_7), &Var0);
	Var0 = { Var16 };
	StringConCat(&Var0, "ColourEx2", 32);
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.f_12.f_8), &Var0);
	Var0 = { Var16 };
	StringConCat(&Var0, "TyreR", 32);
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.f_12.f_38), &Var0);
	Var0 = { Var16 };
	StringConCat(&Var0, "TyreG", 32);
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.f_12.f_39), &Var0);
	Var0 = { Var16 };
	StringConCat(&Var0, "TyreB", 32);
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.f_12.f_40), &Var0);
	Var0 = { Var16 };
	StringConCat(&Var0, "WindowTint", 32);
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.f_12.f_41), &Var0);
	Var0 = { Var16 };
	StringConCat(&Var0, "Flags", 32);
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.f_12.f_53), &Var0);
	Var0 = { Var16 };
	StringConCat(&Var0, "CustomR", 32);
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.f_12.f_47), &Var0);
	Var0 = { Var16 };
	StringConCat(&Var0, "CustomG", 32);
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.f_12.f_48), &Var0);
	Var0 = { Var16 };
	StringConCat(&Var0, "CustomB", 32);
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.f_12.f_49), &Var0);
	Var0 = { Var16 };
	StringConCat(&Var0, "NeonR", 32);
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.f_12.f_50), &Var0);
	Var0 = { Var16 };
	StringConCat(&Var0, "NeonG", 32);
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.f_12.f_51), &Var0);
	Var0 = { Var16 };
	StringConCat(&Var0, "NeonB", 32);
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.f_12.f_52), &Var0);
	Var0 = { Var16 };
	StringConCat(&Var0, "LockState", 32);
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.f_12.f_46), &Var0);
	Var0 = { Var16 };
	StringConCat(&Var0, "Model", 32);
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.f_12.f_42), &Var0);
	Var0 = { Var16 };
	StringConCat(&Var0, "Livery", 32);
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.f_12.f_43), &Var0);
	Var0 = { Var16 };
	StringConCat(&Var0, "WheelType", 32);
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.f_12.f_45), &Var0);
	Var0 = { Var16 };
	StringConCat(&Var0, "Roof", 32);
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.f_12.f_44), &Var0);
	Var0 = { Var16 };
	StringConCat(&Var0, "ModIndex", 32);
	func_396(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.f_12.f_9), Var0);
	Var0 = { Var16 };
	StringConCat(&Var0, "ModVariations", 32);
	func_395(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.f_12.f_35), Var0);
	MISC::STOP_SAVE_STRUCT();
	MISC::STOP_SAVE_STRUCT();
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_SAVE_DATA.RP_PLAYER.Mission), "Mission");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_SAVE_DATA.RP_PLAYER.eRCMissionToBlock), "eRCMissionToBlock");
}

void func_395(var uParam0, char[32] cParam1)//Position - 0x58089
{
	char cVar0[32];
	int iVar8;
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 3, &cParam1);
	iVar8 = 0;
	while (iVar8 < *uParam0)
	{
		cVar0 = { cParam1 };
		StringIntConCat(&cVar0, iVar8, 32);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar8], &cVar0);
		iVar8++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_396(var uParam0, char[32] cParam1)//Position - 0x580CE
{
	char cVar0[32];
	int iVar8;
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 26, &cParam1);
	iVar8 = 0;
	while (iVar8 < *uParam0)
	{
		cVar0 = { cParam1 };
		StringIntConCat(&cVar0, iVar8, 32);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar8], &cVar0);
		iVar8++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_397()//Position - 0x58114
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_SAVE_DATA.eStreetRaceToUnlock), 7, "STREET_RACE_SAVED_STRUCT");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_SAVE_DATA.eStreetRaceToUnlock), "eStreetRaceToUnlock");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceUnlocked), "iStreetRaceUnlocked");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceWon), "iStreetRaceWon");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceLeaveArea), "iStreetRaceLeaveArea");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.bPhonecallDone), "bPhonecallDone");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iSlipstreamHelpCount), "iSlipstreamHelpCount");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.bSpecialAbilityHelp), "bSpecialAbilityHelp");
	MISC::STOP_SAVE_STRUCT();
}

void func_398()//Position - 0x581AD
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_SAVE_DATA.EMAIL_DATA), 3839, "EMAIL_DATA");
	func_399(&(Global_SAVE_DATA.EMAIL_DATA));
	MISC::STOP_SAVE_STRUCT();
}

void func_399(var uParam0)//Position - 0x581D7
{
	int iVar0;
	
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 310, "EMI_AR");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_405(uParam0[iVar0 /*103*/], iVar0, "EMI_");
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_310), "EMIDGENRT");
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_311), 1422, "EMDT_AR");
	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_402(&(uParam0->f_311[iVar0 /*203*/]), iVar0, "EMD_");
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1733), 1681, "EMS_AR");
	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_401(&(uParam0->f_1733[iVar0 /*14*/]), iVar0, "EMS_");
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_3414), 425, "EMB_AR");
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_400(&(uParam0->f_3414[iVar0 /*53*/]), iVar0, "EMB_");
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_400(var uParam0, int iParam1, char* sParam2)//Position - 0x582E1
{
	struct<4> Var0;
	char cVar4[16];
	int iVar8;
	char cVar9[16];
	
	StringCopy(&Var0, sParam2, 16);
	StringIntConCat(&Var0, iParam1, 16);
	StringConCat(&Var0, "_", 16);
	cVar4 = { Var0 };
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 53, &Var0);
	cVar4 = { Var0 };
	StringConCat(&cVar4, "A", 16);
	MISC::REGISTER_ENUM_TO_SAVE(uParam0, &cVar4);
	cVar4 = { Var0 };
	StringConCat(&cVar4, "B", 16);
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_1), &cVar4);
	cVar4 = { Var0 };
	StringConCat(&cVar4, "C", 16);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2), &cVar4);
	cVar4 = { Var0 };
	StringConCat(&cVar4, "D", 16);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3), &cVar4);
	cVar4 = { Var0 };
	StringConCat(&cVar4, "E", 16);
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_4), &cVar4);
	cVar4 = { Var0 };
	StringConCat(&cVar4, "F", 16);
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_5), &cVar4);
	cVar4 = { Var0 };
	StringConCat(&cVar4, "G", 16);
	MISC::_REGISTER_TEXT_LABEL_TO_SAVE_2(&(uParam0->f_6), &cVar4);
	cVar4 = { Var0 };
	StringConCat(&cVar4, "H", 16);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10), &cVar4);
	cVar4 = { Var0 };
	StringConCat(&cVar4, "J", 16);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_11), 41, &cVar4);
	iVar8 = 0;
	iVar8 = 0;
	while (iVar8 < 10)
	{
		cVar9 = { cVar4 };
		StringConCat(&cVar9, "_", 16);
		StringIntConCat(&cVar9, iVar8, 16);
		MISC::_REGISTER_TEXT_LABEL_TO_SAVE_2(&(uParam0->f_11[iVar8 /*4*/]), &cVar9);
		iVar8++;
	}
	MISC::STOP_SAVE_ARRAY();
	cVar4 = { Var0 };
	StringConCat(&cVar4, "RI", 16);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_52), &cVar4);
	MISC::STOP_SAVE_STRUCT();
}

void func_401(var uParam0, int iParam1, char* sParam2)//Position - 0x58461
{
	struct<4> Var0;
	struct<4> Var4;
	int iVar8;
	char cVar9[16];
	
	StringCopy(&Var0, sParam2, 16);
	StringIntConCat(&Var0, iParam1, 16);
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 14, &Var0);
	StringConCat(&Var0, "_", 16);
	Var4 = { Var0 };
	StringConCat(&Var4, "A", 16);
	MISC::REGISTER_BOOL_TO_SAVE(uParam0, &Var4);
	Var4 = { Var0 };
	StringConCat(&Var4, "E", 16);
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_1), &Var4);
	Var4 = { Var0 };
	StringConCat(&Var4, "B", 16);
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2), &Var4);
	Var4 = { Var0 };
	StringConCat(&Var4, "C", 16);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3), &Var4);
	Var4 = { Var0 };
	StringConCat(&Var4, "Z", 16);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_4), 10, &Var4);
	iParam1 = 0;
	iVar8 = 0;
	while (iVar8 < 9)
	{
		cVar9 = { Var4 };
		StringIntConCat(&cVar9, iVar8, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4[iVar8]), &cVar9);
		iVar8++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_STRUCT();
}

void func_402(var uParam0, int iParam1, char* sParam2)//Position - 0x58549
{
	struct<4> Var0;
	struct<2> Var4;
	int iVar8;
	
	StringCopy(&Var0, sParam2, 16);
	StringIntConCat(&Var0, iParam1, 16);
	StringConCat(&Var0, "_", 16);
	Var4 = { Var0 };
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 203, &Var0);
	Var4 = { Var0 };
	StringConCat(&Var4, "A", 16);
	MISC::REGISTER_ENUM_TO_SAVE(uParam0, &Var4);
	Var4 = { Var0 };
	StringConCat(&Var4, "B", 16);
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_1), &Var4);
	Var4 = { Var0 };
	StringConCat(&Var4, "C", 16);
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2), &Var4);
	Var4 = { Var0 };
	StringConCat(&Var4, "D", 16);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3), &Var4);
	Var4 = { Var0 };
	StringConCat(&Var4, "E", 16);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_4), 5, &Var4);
	iVar8 = 0;
	iVar8 = 0;
	while (iVar8 < 4)
	{
		func_404(&(uParam0->f_4[iVar8]), iVar8, &Var4);
		iVar8++;
	}
	MISC::STOP_SAVE_ARRAY();
	Var4 = { Var0 };
	StringConCat(&Var4, "F", 16);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_9), &Var4);
	Var4 = { Var0 };
	StringConCat(&Var4, "G", 16);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_10), 193, &Var4);
	iVar8 = 0;
	iVar8 = 0;
	while (iVar8 < 4)
	{
		func_403(&(uParam0->f_10[iVar8 /*48*/]), iVar8, &Var4);
		iVar8++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_STRUCT();
}

void func_403(var uParam0, int iParam1, char* sParam2)//Position - 0x5868C
{
	struct<4> Var0;
	struct<4> Var4;
	int iVar8;
	char cVar9[16];
	
	StringCopy(&Var0, sParam2, 16);
	StringIntConCat(&Var0, iParam1, 16);
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 48, &Var0);
	StringConCat(&Var0, "_", 16);
	Var4 = { Var0 };
	StringConCat(&Var4, "A", 16);
	MISC::REGISTER_ENUM_TO_SAVE(uParam0, &Var4);
	Var4 = { Var0 };
	StringConCat(&Var4, "B", 16);
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_1), &Var4);
	Var4 = { Var0 };
	StringConCat(&Var4, "C", 16);
	MISC::_REGISTER_TEXT_LABEL_TO_SAVE_2(&(uParam0->f_2), &Var4);
	Var4 = { Var0 };
	StringConCat(&Var4, "D", 16);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_6), &Var4);
	iVar8 = 0;
	Var4 = { Var0 };
	StringConCat(&Var4, "E", 16);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_7), 41, &Var4);
	iVar8 = 0;
	while (iVar8 < 10)
	{
		cVar9 = { Var4 };
		StringIntConCat(&cVar9, iVar8, 16);
		MISC::_REGISTER_TEXT_LABEL_TO_SAVE_2(&(uParam0->f_7[iVar8 /*4*/]), &cVar9);
		iVar8++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_STRUCT();
}

void func_404(var uParam0, int iParam1, char* sParam2)//Position - 0x58774
{
	char cVar0[16];
	
	StringCopy(&cVar0, sParam2, 16);
	StringIntConCat(&cVar0, iParam1, 16);
	MISC::REGISTER_ENUM_TO_SAVE(uParam0, &cVar0);
}

void func_405(var uParam0, int iParam1, char* sParam2)//Position - 0x58790
{
	struct<4> Var0;
	int iVar4;
	struct<2> Var5;
	struct<4> Var9;
	
	StringCopy(&Var0, sParam2, 16);
	StringIntConCat(&Var0, iParam1, 16);
	StringConCat(&Var0, "_", 16);
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 103, &Var0);
	iVar4 = 0;
	Var9 = { Var0 };
	StringConCat(&Var9, "A", 16);
	MISC::REGISTER_INT_TO_SAVE(uParam0, &Var9);
	Var9 = { Var0 };
	StringConCat(&Var9, "B", 16);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1), 17, &Var9);
	iVar4 = 0;
	while (iVar4 < 16)
	{
		Var5 = { Var9 };
		StringIntConCat(&Var5, iVar4, 16);
		StringConCat(&Var5, "_", 16);
		func_407(&(uParam0->f_1[iVar4]), iVar4, &Var5);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	iVar4 = 0;
	Var9 = { Var0 };
	StringConCat(&Var9, "C", 16);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_18), 17, &Var9);
	iVar4 = 0;
	while (iVar4 < 16)
	{
		Var5 = { Var9 };
		StringIntConCat(&Var5, iVar4, 16);
		StringConCat(&Var5, "_", 16);
		func_407(&(uParam0->f_18[iVar4]), iVar4, &Var5);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	iVar4 = 0;
	Var9 = { Var0 };
	StringConCat(&Var9, "D", 16);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_35), 17, &Var9);
	StringConCat(&Var9, "_", 16);
	iVar4 = 0;
	while (iVar4 < 16)
	{
		Var5 = { Var9 };
		StringIntConCat(&Var5, iVar4, 16);
		StringConCat(&Var5, "_", 16);
		func_406(&(uParam0->f_35[iVar4]), iVar4, &Var5);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	iVar4 = 0;
	Var9 = { Var0 };
	StringConCat(&Var9, "E", 16);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_52), 17, &Var9);
	iVar4 = 0;
	while (iVar4 < 16)
	{
		Var5 = { Var9 };
		StringIntConCat(&Var5, iVar4, 16);
		StringConCat(&Var5, "_", 16);
		func_407(&(uParam0->f_52[iVar4]), iVar4, &Var5);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	iVar4 = 0;
	Var9 = { Var0 };
	StringConCat(&Var9, "F", 16);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_69), 17, &Var9);
	iVar4 = 0;
	while (iVar4 < 16)
	{
		Var5 = { Var9 };
		StringIntConCat(&Var5, iVar4, 16);
		StringConCat(&Var5, "_", 16);
		func_406(&(uParam0->f_69[iVar4]), iVar4, &Var5);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	iVar4 = 0;
	Var9 = { Var0 };
	StringConCat(&Var9, "G", 16);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_86), 17, &Var9);
	iVar4 = 0;
	while (iVar4 < 16)
	{
		Var5 = { Var9 };
		StringIntConCat(&Var5, iVar4, 16);
		StringConCat(&Var5, "_", 16);
		func_406(&(uParam0->f_86[iVar4]), iVar4, &Var5);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_STRUCT();
}

void func_406(var uParam0, int iParam1, char* sParam2)//Position - 0x58A11
{
	char cVar0[16];
	
	StringCopy(&cVar0, sParam2, 16);
	StringIntConCat(&cVar0, iParam1, 16);
	MISC::REGISTER_BOOL_TO_SAVE(uParam0, &cVar0);
}

void func_407(var uParam0, int iParam1, char* sParam2)//Position - 0x58A2D
{
	char cVar0[16];
	
	StringCopy(&cVar0, sParam2, 16);
	StringIntConCat(&cVar0, iParam1, 16);
	MISC::REGISTER_INT_TO_SAVE(uParam0, &cVar0);
}

void func_408()//Position - 0x58A49
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_SAVE_DATA.SPEC_PedsKilled), 1, "SPECIALPED_SAVED_STRUCT");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_SAVE_DATA.SPEC_PedsKilled), "SPEC_PedsKilled");
	MISC::STOP_SAVE_STRUCT();
}

void func_409()//Position - 0x58A76
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_SAVE_DATA.ShopRob_NumTimesRobbed_Array), 82, "SHOPROBBERIES_SAVED_STRUCT");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.SHOPROBBERIES_SAVED_STRUCT.ShopRob_NumOfRobsSinceCopAmbush), "ShopRob_NumOfRobsSinceCopAmbush");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.SHOPROBBERIES_SAVED_STRUCT.ShopRob_GenericShopData), "ShopRob_GenericShopData");
	func_413(&(Global_SAVE_DATA.ShopRob_NumTimesRobbed_Array), "ShopRob_NumTimesRobbed_Array");
	func_412(&(Global_SAVE_DATA.SHOPROBBERIES_SAVED_STRUCT.ShopRob_TimeLastRobbed_Array), "ShopRob_TimeLastRobbed_Array");
	func_411(&(Global_SAVE_DATA.SHOPROBBERIES_SAVED_STRUCT.ShopRob_TimeLastPlayerRobbed_Array), "ShopRob_TimeLastPlayerRobbed_Array");
	func_410(&(Global_SAVE_DATA.SHOPROBBERIES_SAVED_STRUCT.ShopRob_LastPlayerToRobShop_Array), "ShopRob_LastPlayerToRobShop_Array");
	MISC::STOP_SAVE_STRUCT();
}

void func_410(var uParam0, char* sParam1)//Position - 0x58AFE
{
	int iVar0;
	char cVar1[32];
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 20, sParam1);
	iVar0 = 0;
	while (iVar0 < 19)
	{
		StringCopy(&cVar1, "ShopRob_LastPlayerToRobShop", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_411(var uParam0, char* sParam1)//Position - 0x58B42
{
	int iVar0;
	char cVar1[32];
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 20, sParam1);
	iVar0 = 0;
	while (iVar0 < 19)
	{
		StringCopy(&cVar1, "ShopRob_TimeLastPlayerRobbed", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_412(var uParam0, char* sParam1)//Position - 0x58B86
{
	int iVar0;
	char cVar1[32];
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 20, sParam1);
	iVar0 = 0;
	while (iVar0 < 19)
	{
		StringCopy(&cVar1, "ShopRob_TimeLastRobbed", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_413(var uParam0, char* sParam1)//Position - 0x58BCA
{
	int iVar0;
	char cVar1[32];
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 20, sParam1);
	iVar0 = 0;
	while (iVar0 < 19)
	{
		StringCopy(&cVar1, "ShopRob_NumTimesRobbed", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_414()//Position - 0x58C0E
{
	func_415(&(Global_SAVE_DATA.SPTT_DATA_SAVED_STRUCT), "SPTT_DATA_SAVED_STRUCT");
}

void func_415(var uParam0, char* sParam1)//Position - 0x58C26
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 54, sParam1);
	func_419(&(uParam0->f_6), "SPTT_TIMES");
	func_418(uParam0, "SPTT_RANKS");
	func_416(&(uParam0->f_12), "SPTT_COURSE_DATA");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_53), "SPTT_iGeneralFlags");
	MISC::STOP_SAVE_STRUCT();
}

void func_416(var uParam0, char* sParam1)//Position - 0x58C6E
{
	struct<8> Var0;
	int iVar16;
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 41, sParam1);
	iVar16 = 0;
	while (iVar16 < *uParam0)
	{
		StringCopy(&Var0, sParam1, 64);
		StringConCat(&Var0, "_SPTTSTRUCT_", 64);
		StringIntConCat(&Var0, iVar16, 64);
		func_417(uParam0[iVar16 /*8*/], &Var0);
		iVar16++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_417(var uParam0, char* sParam1)//Position - 0x58CB9
{
	char cVar0[64];
	
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 8, sParam1);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, "_Name", 64);
	MISC::REGISTER_TEXT_LABEL_TO_SAVE(uParam0, &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, "_Status", 64);
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_4), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, "_Goals", 64);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, "_PreReq", 64);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_6), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, "_MedalScore", 64);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_7), &cVar0);
	MISC::STOP_SAVE_STRUCT();
}

void func_418(var uParam0, char* sParam1)//Position - 0x58D4A
{
	char cVar0[64];
	int iVar16;
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 6, sParam1);
	iVar16 = 0;
	while (iVar16 < *uParam0)
	{
		StringCopy(&cVar0, sParam1, 64);
		StringConCat(&cVar0, "_BestRank_", 64);
		StringIntConCat(&cVar0, iVar16, 64);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar16], &cVar0);
		iVar16++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_419(var uParam0, char* sParam1)//Position - 0x58D94
{
	char cVar0[64];
	int iVar16;
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 6, sParam1);
	iVar16 = 0;
	while (iVar16 < *uParam0)
	{
		StringCopy(&cVar0, sParam1, 64);
		StringConCat(&cVar0, "_BestTime_", 64);
		StringIntConCat(&cVar0, iVar16, 64);
		MISC::REGISTER_FLOAT_TO_SAVE(uParam0[iVar16], &cVar0);
		iVar16++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_420()//Position - 0x58DDE
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_SAVE_DATA.TRI_RANKS), 10, "TRIATHLON_SAVED_STRUCT");
	func_422(&(Global_SAVE_DATA.TRIATHLON_SAVED_STRUCT.TRI_TIMES), "TRI_TIMES");
	func_421(&(Global_SAVE_DATA.TRI_RANKS), "TRI_RANKS");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_SAVE_DATA.TRIATHLON_SAVED_STRUCT.TRIATHLON_eCurrentUnlock), "TRIATHLON_eCurrentUnlock");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.TRIATHLON_SAVED_STRUCT.TRIATHLON_iBitFlags), "TRIATHLON_iBitFlags");
	MISC::STOP_SAVE_STRUCT();
}

void func_421(var uParam0, char* sParam1)//Position - 0x58E42
{
	char cVar0[64];
	int iVar16;
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4, sParam1);
	iVar16 = 0;
	while (iVar16 < *uParam0)
	{
		StringCopy(&cVar0, sParam1, 64);
		StringConCat(&cVar0, "_BestRank_", 64);
		StringIntConCat(&cVar0, iVar16, 64);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar16], &cVar0);
		iVar16++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_422(var uParam0, char* sParam1)//Position - 0x58E8C
{
	char cVar0[64];
	int iVar16;
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4, sParam1);
	iVar16 = 0;
	while (iVar16 < *uParam0)
	{
		StringCopy(&cVar0, sParam1, 64);
		StringConCat(&cVar0, "_BestTime_", 64);
		StringIntConCat(&cVar0, iVar16, 64);
		MISC::REGISTER_FLOAT_TO_SAVE(uParam0[iVar16], &cVar0);
		iVar16++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_423()//Position - 0x58ED6
{
	func_424(&(Global_SAVE_DATA.TENNIS_SAVE_DATA), "TENNIS_SAVE_DATA");
}

void func_424(var uParam0, char* sParam1)//Position - 0x58EEE
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 14, sParam1);
	MISC::REGISTER_INT_TO_SAVE(uParam0, "TENNIS_iTotalAces");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "TENNIS_iTotalAced");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2), "TENNIS_iTotalPoints");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3), "TENNIS_iHighestDeuce");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4), "TENNIS_iGamesWon");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5), "TENNIS_iGamesLost");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_6), "TENNIS_iSetsWon");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_7), "TENNIS_iSetsLost");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8), "TENNIS_iMatchesWon");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_9), "TENNIS_iMatchesLost");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10), "TENNIS_iTotalOOB");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_11), "TENNIS_iTotalFaults");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_12), "TENNIS_iSwingsForStrength");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_13), "TENNIS_iSavedFlags");
	MISC::STOP_SAVE_STRUCT();
}

void func_425()//Position - 0x58FB8
{
	int iVar0;
	char cVar1[32];
	
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY), 814, "SHOOTING_RANGE_SAVED_ARRAY");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iVar0 == 0)
		{
			StringCopy(&cVar1, "RANGE_SAVED_MICHAEL", 32);
		}
		else if (iVar0 == 1)
		{
			StringCopy(&cVar1, "RANGE_SAVED_FRANKLIN", 32);
		}
		else if (iVar0 == 2)
		{
			StringCopy(&cVar1, "RANGE_SAVED_TREVOR", 32);
		}
		MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iVar0 /*271*/]), 271, &cVar1);
		MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iVar0 /*271*/]), "SRANGE_iCategoryChallengeLockStatus");
		MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iVar0 /*271*/].f_1), "SRANGE_iWeaponsLockStatus");
		MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iVar0 /*271*/].f_2), "SRANGE_iWeaponUsedStatus");
		func_426(&(Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iVar0 /*271*/].f_3), "SRANGE_ROUND_ARRAY");
		MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iVar0 /*271*/].f_268), "SRANGE_bHasSeenTutorial");
		MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iVar0 /*271*/].f_269), "SRANGE_bClearedAll");
		MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[iVar0 /*271*/].f_270), "SRANGE_iBoolBits");
		MISC::STOP_SAVE_STRUCT();
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_426(var uParam0, char* sParam1)//Position - 0x590DA
{
	int iVar0;
	struct<8> Var1;
	char cVar9[32];
	
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 265, sParam1);
	iVar0 = 0;
	while (iVar0 < 22)
	{
		StringCopy(&Var1, "SRANGE_ROUND", 32);
		StringIntConCat(&Var1, iVar0, 32);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_Z1HITS", 32);
		MISC::REGISTER_INT_TO_SAVE(&((uParam0[iVar0 /*12*/])->f_8), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_Z2HITS", 32);
		MISC::REGISTER_INT_TO_SAVE(&((uParam0[iVar0 /*12*/])->f_9), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_Z3HITS", 32);
		MISC::REGISTER_INT_TO_SAVE(&((uParam0[iVar0 /*12*/])->f_10), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_Z4HITS", 32);
		MISC::REGISTER_INT_TO_SAVE(&((uParam0[iVar0 /*12*/])->f_11), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_LASTSCORE", 32);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0 /*12*/], &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_UNLOCKED", 32);
		MISC::REGISTER_BOOL_TO_SAVE(&((uParam0[iVar0 /*12*/])->f_1), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_PASSED", 32);
		MISC::REGISTER_BOOL_TO_SAVE(&((uParam0[iVar0 /*12*/])->f_2), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_MEDAL", 32);
		MISC::REGISTER_ENUM_TO_SAVE(&((uParam0[iVar0 /*12*/])->f_3), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_WEAPTYPE", 32);
		MISC::REGISTER_ENUM_TO_SAVE(&((uParam0[iVar0 /*12*/])->f_4), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_FIRED", 32);
		MISC::REGISTER_INT_TO_SAVE(&((uParam0[iVar0 /*12*/])->f_5), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_HITS", 32);
		MISC::REGISTER_INT_TO_SAVE(&((uParam0[iVar0 /*12*/])->f_6), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_ACCURACY", 32);
		MISC::REGISTER_FLOAT_TO_SAVE(&((uParam0[iVar0 /*12*/])->f_7), &cVar9);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_427()//Position - 0x592A0
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_SAVE_DATA.GOLF_COURSE_), 37, "GOLF_SAVED_STRUCT");
	func_429(&(Global_SAVE_DATA.GOLF_COURSE_), "GOLF_COURSE_");
	func_428(&(Global_SAVE_DATA.GOLF_SAVED_STRUCT.GOLF_iNumRoundsWithCharacter_), "GOLF_iNumRoundsWithCharacter_");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.GOLF_SAVED_STRUCT.GOLF_iNumHolesPlayed), "GOLF_iNumHolesPlayed");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.GOLF_SAVED_STRUCT.GOLF_iNumPuttsTotal), "GOLF_iNumPuttsTotal");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.GOLF_SAVED_STRUCT.GOLF_iNumFairwayDrivesTotal), "GOLF_iNumFairwayDrivesTotal");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_SAVE_DATA.GOLF_SAVED_STRUCT.GOLF_eUnlockedBuddies), "GOLF_eUnlockedBuddies");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_SAVE_DATA.GOLF_SAVED_STRUCT.GOLF_eGolfSavedFlags), "GOLF_eGolfSavedFlags");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.GOLF_SAVED_STRUCT.GOLF_iBestRound), "GOLF_iBestRound");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.GOLF_SAVED_STRUCT.GOLF_iNumRoundsPlayedSP), "GOLF_iNumRoundsPlayedSP");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.GOLF_SAVED_STRUCT.GOLF_iNumRoundsPlayedMP), "GOLF_iNumRoundsPlayedMP");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.GOLF_SAVED_STRUCT.GOLF_iNumGolfWins), "GOLF_iNumGolfWins");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_SAVE_DATA.GOLF_SAVED_STRUCT.GOLF_fLongestDrive), "GOLF_fLongestDrive");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_SAVE_DATA.GOLF_SAVED_STRUCT.GOLF_fLongestPutt), "GOLF_fLongestPutt");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_SAVE_DATA.GOLF_SAVED_STRUCT.GOLF_fAveragePutts), "GOLF_fAveragePutts");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_SAVE_DATA.GOLF_SAVED_STRUCT.GOLF_fAverageFairwayDrives), "GOLF_fAverageFairwayDrives");
	MISC::STOP_SAVE_STRUCT();
}

void func_428(var uParam0, char* sParam1)//Position - 0x593CA
{
	int iVar0;
	char cVar1[64];
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4, sParam1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		StringCopy(&cVar1, sParam1, 64);
		StringIntConCat(&cVar1, iVar0, 64);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_429(var uParam0, char* sParam1)//Position - 0x5940B
{
	int iVar0;
	struct<8> Var1;
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 20, sParam1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		StringCopy(&Var1, sParam1, 64);
		StringIntConCat(&Var1, iVar0, 64);
		StringConCat(&Var1, "_", 64);
		func_430(uParam0[iVar0 /*19*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_430(var uParam0, char* sParam1)//Position - 0x59456
{
	int iVar0;
	struct<16> Var1;
	char cVar17[64];
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 19, sParam1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		StringCopy(&Var1, sParam1, 64);
		StringIntConCat(&Var1, iVar0, 64);
		StringConCat(&Var1, "_", 64);
		cVar17 = { Var1 };
		StringConCat(&cVar17, "fLongestDriveHole", 64);
		MISC::REGISTER_FLOAT_TO_SAVE(uParam0[iVar0 /*2*/], &cVar17);
		cVar17 = { Var1 };
		StringConCat(&cVar17, "fLongestPuttHole", 64);
		MISC::REGISTER_FLOAT_TO_SAVE(&((uParam0[iVar0 /*2*/])->f_1), &cVar17);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_431()//Position - 0x594D5
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_SAVE_DATA.OFFROAD_iBitflags), 27, "OFFROAD_SAVED_STRUCT");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.OFFROAD_iBitflags), "OFFROAD_iBitflags");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_SAVE_DATA.OFFROAD_SAVED_STRUCT.OFFROAD_eCurrentRace), "OFFROAD_eCurrentRace");
	func_433(&(Global_SAVE_DATA.OFFROAD_SAVED_STRUCT.OFFROAD_TIMES), "OFFROAD_TIMES");
	func_432(&(Global_SAVE_DATA.OFFROAD_SAVED_STRUCT.OFFROAD_RANKS), "OFFROAD_RANKS");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.OFFROAD_SAVED_STRUCT.OFFROAD_iRacePlaceEarned), "OFFROAD_iRacePlaceEarned");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(Global_SAVE_DATA.OFFROAD_SAVED_STRUCT.OFFROAD_iBestPlaces), 8, "OFFROAD_iBestPlaces");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.OFFROAD_SAVED_STRUCT.OFFROAD_iBestPlaces[0]), "OFFROAD_Race5Best");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.OFFROAD_SAVED_STRUCT.OFFROAD_iBestPlaces[1]), "OFFROAD_Race8Best");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.OFFROAD_SAVED_STRUCT.OFFROAD_iBestPlaces[3]), "OFFROAD_Race9Best");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.OFFROAD_SAVED_STRUCT.OFFROAD_iBestPlaces[4]), "OFFROAD_Race10Best");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.OFFROAD_SAVED_STRUCT.OFFROAD_iBestPlaces[5]), "OFFROAD_Race11Best");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.OFFROAD_SAVED_STRUCT.OFFROAD_iBestPlaces[2]), "OFFROAD_Race12Best");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.OFFROAD_SAVED_STRUCT.OFFROAD_iBestPlaces[6]), "OFFROAD_Race13Best");
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_STRUCT();
}

void func_432(var uParam0, char* sParam1)//Position - 0x595F6
{
	char cVar0[64];
	int iVar16;
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 8, sParam1);
	iVar16 = 0;
	while (iVar16 < *uParam0)
	{
		StringCopy(&cVar0, sParam1, 64);
		StringConCat(&cVar0, "_BestRank_", 64);
		StringIntConCat(&cVar0, iVar16, 64);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar16], &cVar0);
		iVar16++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_433(var uParam0, char* sParam1)//Position - 0x59641
{
	char cVar0[64];
	int iVar16;
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 8, sParam1);
	iVar16 = 0;
	while (iVar16 < *uParam0)
	{
		StringCopy(&cVar0, sParam1, 64);
		StringConCat(&cVar0, "_BestTime_", 64);
		StringIntConCat(&cVar0, iVar16, 64);
		MISC::REGISTER_FLOAT_TO_SAVE(uParam0[iVar16], &cVar0);
		iVar16++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_434()//Position - 0x5968C
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_SAVE_DATA.SHRINK_iByte0), 2, "SHRINK_SAVED_STRUCT");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.SHRINK_iByte0), "SHRINK_iByte0");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.SHRINK_SAVED_STRUCT.SHRINK_iByte1), "SHRINK_iByte1");
	MISC::STOP_SAVE_STRUCT();
}

void func_435()//Position - 0x596CB
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_SAVE_DATA.TAXI_iGenData), 50, "TAXI_SAVED_STRUCT");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.TAXI_iGenData), "TAXI_iGenData");
	func_438(&(Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_MISSION_ARRAY), "TAXI_MISSION_ARRAY");
	func_437(&(Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY), "TAXI_STAT_ARRAY");
	func_436(&(Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_RUNS_ARRAY), "TAXI_RUNS_ARRAY");
	MISC::STOP_SAVE_STRUCT();
}

void func_436(var uParam0, char* sParam1)//Position - 0x5972F
{
	int iVar0;
	char cVar1[32];
	
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 11, sParam1);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		StringCopy(&cVar1, "TAXI_RUNS", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_437(var uParam0, char* sParam1)//Position - 0x59776
{
	int iVar0;
	char cVar1[32];
	
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 17, sParam1);
	iVar0 = 0;
	while (iVar0 < 16)
	{
		StringCopy(&cVar1, "TAXI_STAT", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_438(var uParam0, char* sParam1)//Position - 0x597BD
{
	int iVar0;
	char cVar1[32];
	
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 21, sParam1);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		StringCopy(&cVar1, "TAXI_MISSION_PASSED", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_BOOL_TO_SAVE(uParam0[iVar0 /*2*/], &cVar1);
		StringCopy(&cVar1, "TAXI_MISSION_FAILED", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_BOOL_TO_SAVE(&((uParam0[iVar0 /*2*/])->f_1), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_439()//Position - 0x59821
{
	int iVar0;
	char cVar1[32];
	
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_SAVE_DATA.TRAFFICKING_iBools), 28, "TRAFFICKING_SAVED_STRUCT");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.TRAFFICKING_iBools), "TRAFFICKING_iBools");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.TRAFFICKING_SAVED_STRUCT.TRAFFICKING_iGndRank), "TRAFFICKING_iGndRank");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.TRAFFICKING_SAVED_STRUCT.TRAFFICKING_SAVED_iAirRank), "TRAFFICKING_SAVED_iAirRank");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.TRAFFICKING_SAVED_STRUCT.TRAFFICKING_iLastPairing), "TRAFFICKING_iLastPairing");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.TRAFFICKING_SAVED_STRUCT.TRAFFICKING_iNumRepeatComplete), "TRAFFICKING_iNumRepeatComplete");
	func_440(&(Global_SAVE_DATA.TRAFFICKING_SAVED_STRUCT.TRAFFICKING_TIME_COLLECTED_ARRAY), "TRAFFICKING_TIME_COLLECTED_ARRAY");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_SAVE_DATA.TRAFFICKING_SAVED_STRUCT.TRAFFICKING_todNextAir), "TRAFFICKING_todNextAir");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_SAVE_DATA.TRAFFICKING_SAVED_STRUCT.TRAFFICKING_todNextGnd), "TRAFFICKING_todNextGnd");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.TRAFFICKING_SAVED_STRUCT.TRAFFICKING_GndBlipOn), "TRAFFICKING_GndBlipOn");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.TRAFFICKING_SAVED_STRUCT.TRAFFICKING_AirBlipOn), "TRAFFICKING_AirBlipOn");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.TRAFFICKING_SAVED_STRUCT.TRAFFICKING_RanIntro), "TRAFFICKING_RanIntro");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.TRAFFICKING_SAVED_STRUCT.TRAFFICKING_bBomb), "TRAFFICKING_bBomb");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.TRAFFICKING_SAVED_STRUCT.TRAFFICKING_bTrain), "TRAFFICKING_bTrain");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.TRAFFICKING_SAVED_STRUCT.TRAFFICKING_bConvoy), "TRAFFICKING_bConvoy");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.TRAFFICKING_SAVED_STRUCT.TRAFFICKING_bTimed), "TRAFFICKING_bTimed");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.TRAFFICKING_SAVED_STRUCT.TRAFFICKING_bLowAlt), "TRAFFICKING_bLowAlt");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(Global_SAVE_DATA.TRAFFICKING_SAVED_STRUCT.TRAFFICKING_iDropLocations), 5, "TRAFFICKING_iDropLocations");
	iVar0 = 0;
	while (iVar0 < Global_SAVE_DATA.TRAFFICKING_SAVED_STRUCT.TRAFFICKING_iDropLocations)
	{
		StringCopy(&cVar1, "TRAFFICKING_iDropLocations", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.TRAFFICKING_SAVED_STRUCT.TRAFFICKING_iDropLocations[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.TRAFFICKING_SAVED_STRUCT.TRAFFICKING_iNumDropLocations), "TRAFFICKING_iNumDropLocations");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_SAVE_DATA.TRAFFICKING_SAVED_STRUCT.TRAFFICKING_gangTypes), "TRAFFICKING_gangTypes");
	MISC::STOP_SAVE_STRUCT();
}

void func_440(var uParam0, char* sParam1)//Position - 0x599D4
{
	int iVar0;
	char cVar1[32];
	
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 6, sParam1);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringCopy(&cVar1, "TRAFFICKING_iTimePkgCollected_", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_441()//Position - 0x59A19
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_SAVE_DATA.DARTS_iNumBullseyes), 9, "DARTS_SAVED_STRUCT");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.DARTS_iNumBullseyes), "DARTS_iNumBullseyes");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.DARTS_SAVED_STRUCT.DARTS_iNumOneEighties), "DARTS_iNumOneEighties");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.DARTS_SAVED_STRUCT.DARTS_iDartGamesWon), "DARTS_iDartGamesWon");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.DARTS_SAVED_STRUCT.DARTS_iDartGamesLoss), "DARTS_iDartGamesLoss");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.DARTS_SAVED_STRUCT.DARTS_iDartsThrown), "DARTS_iDartsThrown");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.DARTS_SAVED_STRUCT.DARTS_iTotalDartGames), "DARTS_iTotalDartGames");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.DARTS_SAVED_STRUCT.DARTS_iDartTimePlayed), "DARTS_iDartTimePlayed");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_SAVE_DATA.DARTS_SAVED_STRUCT.DARTS_fWinPct), "DARTS_fWinPct");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_SAVE_DATA.DARTS_SAVED_STRUCT.DARTS_fAvgDartsPerMatch), "DARTS_fAvgDartsPerMatch");
	MISC::STOP_SAVE_STRUCT();
}

void func_442()//Position - 0x59AD7
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_SAVE_DATA.BJ_iLaunchRank), 3, "BASEJUMP_SAVED_STRUCT");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.BJ_iLaunchRank), "BJ_iLaunchRank");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.BASEJUMP_SAVED_STRUCT.BJ_iCompletedFlags), "BJ_iCompletedFlags");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_SAVE_DATA.BASEJUMP_SAVED_STRUCT.BJ_fLongestSkydive), "BJ_fLongestSkydive");
	MISC::STOP_SAVE_STRUCT();
}

void func_443()//Position - 0x59B28
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_SAVE_DATA.ASSASSIN_iCurRank), 10, "ASSASSIN_SAVED_STRUCT");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.ASSASSIN_iCurRank), "ASSASSIN_iCurRank");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.ASSASSIN_SAVED_STRUCT.ASSASSIN_iGenData), "ASSASSIN_iGenData");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.ASSASSIN_SAVED_STRUCT.ASSASSIN_iBools), "ASSASSIN_iBools");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.ASSASSIN_SAVED_STRUCT.ASSASSIN_iAttemptsOnCur), "ASSASSIN_iAttemptsOnCur");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_SAVE_DATA.ASSASSIN_SAVED_STRUCT.ASSASSIN_TOD_iTime), "ASSASSIN_TOD_iTime");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_SAVE_DATA.ASSASSIN_SAVED_STRUCT.ASSASSIN_HotelMissionTime), "ASSASSIN_HotelMissionTime");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_SAVE_DATA.ASSASSIN_SAVED_STRUCT.ASSASSIN_MultiMissionTime), "ASSASSIN_MultiMissionTime");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_SAVE_DATA.ASSASSIN_SAVED_STRUCT.ASSASSIN_ViceMissionTime), "ASSASSIN_ViceMissionTime");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_SAVE_DATA.ASSASSIN_SAVED_STRUCT.ASSASSIN_BusMissionTime), "ASSASSIN_BusMissionTime");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_SAVE_DATA.ASSASSIN_SAVED_STRUCT.ASSASSIN_ConstructionMissionTime), "ASSASSIN_ConstructionMissionTime");
	MISC::STOP_SAVE_STRUCT();
}

void func_444()//Position - 0x59BF8
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_SAVE_DATA.TOWING_iRank), 10, "TOWING_SAVED_STRUCT");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.TOWING_iRank), "TOWING_iRank");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBools), "TOWING_iBools");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_eLastNode), "TOWING_eLastNode");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iJobsCompleted), "TOWING_iJobsCompleted");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iAbandonCompleted), "TOWING_iAbandonCompleted");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted), "TOWING_iTrainCompleted");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iHandiCompleted), "TOWING_iHandiCompleted");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted), "TOWING_iBreakDownCompleted");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iLastNodeIndex), "TOWING_iLastNodeIndex");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iAccidentCompleted), "TOWING_iAccidentCompleted");
	MISC::STOP_SAVE_STRUCT();
}

void func_445()//Position - 0x59CC8
{
	func_446(&(Global_SAVE_DATA.FINANCE_SAVED_ARRAY), "FINANCE_SAVED_ARRAY");
}

void func_446(var uParam0, char* sParam1)//Position - 0x59CE0
{
	int iVar0;
	struct<4> Var1;
	struct<4> Var5;
	int iVar9;
	char cVar10[16];
	struct<4> Var14;
	struct<4> Var18;
	char cVar22[16];
	char cVar26[16];
	char cVar30[16];
	
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 473, sParam1);
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 11, "M_S_CI_AR");
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_407(uParam0[iVar0], iVar0, "M_CI_");
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_11), 11, "M_S_I_AR");
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_447(&(uParam0->f_11[iVar0]), iVar0, "M_I_");
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_22), 11, "M_S_OOT_AR");
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_407(&(uParam0->f_22[iVar0]), iVar0, "M_OOT_");
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_33), 11, "F_S_CI_AR");
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_407(&(uParam0->f_33[iVar0]), iVar0, "F_CI_");
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_44), 11, "F_S_I_AR");
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_447(&(uParam0->f_44[iVar0]), iVar0, "F_I_");
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_55), 11, "F_S_OOT_AR");
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_407(&(uParam0->f_55[iVar0]), iVar0, "F_OOT_");
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_66), 11, "T_S_CI_AR");
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_407(&(uParam0->f_66[iVar0]), iVar0, "T_CI_");
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_77), 11, "T_S_I_AR");
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_447(&(uParam0->f_77[iVar0]), iVar0, "T_I_");
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_88), 11, "T_S_OOT_AR");
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_407(&(uParam0->f_88[iVar0]), iVar0, "T_OOT_");
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_99), "STOCK_TUT");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_100), "ATM_TUT");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_101), "STK_PRC_GEN");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_102), "STK_PRC_SSK");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_103), 43, "SPSPD_AR");
	iVar0 = 0;
	while (iVar0 < 42)
	{
		func_447(&(uParam0->f_103[iVar0]), iVar0, "SPSPD_");
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_146), 43, "SPSMAD_AR");
	iVar0 = 0;
	while (iVar0 < 42)
	{
		func_447(&(uParam0->f_146[iVar0]), iVar0, "SPSMAD_");
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_189), 43, "SPSMID_AR");
	iVar0 = 0;
	while (iVar0 < 42)
	{
		func_447(&(uParam0->f_189[iVar0]), iVar0, "SPSMID_");
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_232), "SCBNK_INI");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_233), 208, "PLR_ACNT_LGS");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(&Var1, "BNKST_", 16);
		StringIntConCat(&Var1, iVar0, 16);
		MISC::START_SAVE_STRUCT_WITH_SIZE(&(uParam0->f_233[iVar0 /*69*/]), 69, &Var1);
		Var5 = { Var1 };
		StringConCat(&Var5, "ac", 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_233[iVar0 /*69*/]), &Var5);
		Var5 = { Var1 };
		StringConCat(&Var5, "lp", 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_233[iVar0 /*69*/].f_1), &Var5);
		Var5 = { Var1 };
		StringConCat(&Var5, "l", 16);
		MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_233[iVar0 /*69*/].f_2), 67, &Var5);
		StringConCat(&Var5, "_", 16);
		iVar9 = 0;
		iVar9 = 0;
		while (iVar9 < 11)
		{
			cVar10 = { Var5 };
			StringIntConCat(&cVar10, iVar9, 16);
			MISC::START_SAVE_STRUCT_WITH_SIZE(&(uParam0->f_233[iVar0 /*69*/].f_2[iVar9 /*6*/]), 6, &cVar10);
			cVar10 = { Var5 };
			StringConCat(&cVar10, "a", 16);
			MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_233[iVar0 /*69*/].f_2[iVar9 /*6*/]), &cVar10);
			cVar10 = { Var5 };
			StringConCat(&cVar10, "b", 16);
			MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_233[iVar0 /*69*/].f_2[iVar9 /*6*/].f_1), &cVar10);
			cVar10 = { Var5 };
			StringConCat(&cVar10, "c", 16);
			MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_233[iVar0 /*69*/].f_2[iVar9 /*6*/].f_2), &cVar10);
			cVar10 = { Var5 };
			StringConCat(&cVar10, "d", 16);
			MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_233[iVar0 /*69*/].f_2[iVar9 /*6*/].f_3), &cVar10);
			cVar10 = { Var5 };
			StringConCat(&cVar10, "e", 16);
			MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_233[iVar0 /*69*/].f_2[iVar9 /*6*/].f_4), &cVar10);
			cVar10 = { Var5 };
			StringConCat(&cVar10, "f", 16);
			MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_233[iVar0 /*69*/].f_2[iVar9 /*6*/].f_5), &cVar10);
			MISC::STOP_SAVE_STRUCT();
			iVar9++;
		}
		MISC::STOP_SAVE_ARRAY();
		MISC::STOP_SAVE_STRUCT();
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_441), "Profloss");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_442), "FILTR_TOT");
	StringCopy(&Var14, "FILTR_", 16);
	Var18 = { Var14 };
	StringConCat(&Var18, "ff", 16);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_443), 9, &Var18);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		cVar22 = { Var18 };
		StringIntConCat(&cVar22, iVar0, 16);
		MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_443[iVar0]), &cVar22);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	Var18 = { Var14 };
	StringConCat(&Var18, "fdr", 16);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_452), 9, &Var18);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		cVar26 = { Var18 };
		StringIntConCat(&cVar26, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_452[iVar0]), &cVar26);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	Var18 = { Var14 };
	StringConCat(&Var18, "ffl", 16);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_461), 9, &Var18);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		cVar30 = { Var18 };
		StringIntConCat(&cVar30, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_461[iVar0]), &cVar30);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_470), "SCBNK_WEBTU");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_471), "FIN_COUPONS");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_472), "FIN_NEWSENM");
	MISC::STOP_SAVE_STRUCT();
}

void func_447(var uParam0, int iParam1, char* sParam2)//Position - 0x5A31D
{
	char cVar0[16];
	
	StringCopy(&cVar0, sParam2, 16);
	StringIntConCat(&cVar0, iParam1, 16);
	MISC::REGISTER_FLOAT_TO_SAVE(uParam0, &cVar0);
}

void func_448()//Position - 0x5A339
{
	func_455(&(Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY), "CELLPHONE_SETTINGS_SAVED_ARRAY");
	func_452(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY), "TEXT_MESSAGES_SAVED_ARRAY");
	func_449(&(Global_SAVE_DATA.GALLERY_IMAGES_SAVED_ARRAY), "GALLERY_IMAGES_SAVED_ARRAY");
}

void func_449(var uParam0, char* sParam1)//Position - 0x5A371
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 321, sParam1);
	func_450(uParam0, "struct_g_GalleryImage");
	MISC::STOP_SAVE_STRUCT();
}

void func_450(var uParam0, char* sParam1)//Position - 0x5A393
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 321, sParam1);
	while (iVar0 < 10)
	{
		StringCopy(&Var1, "GalleryImgIndex", 24);
		StringConCat(&Var1, "_", 24);
		StringIntConCat(&Var1, iVar0, 24);
		func_451(uParam0[iVar0 /*32*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_451(var uParam0, char* sParam1)//Position - 0x5A3E1
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 32, sParam1);
	MISC::_0xFAA457EF263E8763(uParam0, "Thumb_label");
	MISC::_0xFAA457EF263E8763(&(uParam0->f_16), "Photo_label");
	MISC::STOP_SAVE_STRUCT();
}

void func_452(var uParam0, char* sParam1)//Position - 0x5A40F
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 3641, sParam1);
	func_453(uParam0, "struct_g_TextMessage");
	MISC::STOP_SAVE_STRUCT();
}

void func_453(var uParam0, char* sParam1)//Position - 0x5A431
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 3641, sParam1);
	while (iVar0 < 35)
	{
		StringCopy(&Var1, "TextMsgIndex", 24);
		StringConCat(&Var1, "_", 24);
		StringIntConCat(&Var1, iVar0, 24);
		func_454(uParam0[iVar0 /*104*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_454(var uParam0, char* sParam1)//Position - 0x5A47F
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 104, sParam1);
	MISC::_0xFAA457EF263E8763(uParam0, "GXTlabel");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_16), "FeedId_Int");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_17), "Sender");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_18), "SentSecs");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_18.f_1), "SentMins");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_18.f_2), "SentHours");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_18.f_3), "SentDay");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_18.f_4), "SentMonth");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_18.f_5), "SentYear");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_24), "LockStatus");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_25), "IsCritical");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_26), "AutoUnlock");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_27), "DelMode");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_28), "ReadStatus");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_29), "ReplyStatus");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_30), "CallSenderStatus");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_31), "BarterStatus");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_32), "SpecialComps");
	MISC::_0xFAA457EF263E8763(&(uParam0->f_33), "StringComp");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_49), "NumberComp");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_66), "NumberofAdditionalStrings");
	MISC::_0xFAA457EF263E8763(&(uParam0->f_67), "SecondStringComp");
	MISC::_0xFAA457EF263E8763(&(uParam0->f_83), "ThirdStringComp");
	MISC::_0xFAA457EF263E8763(&(uParam0->f_50), "SenderStringComp");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_99), 5, "PhonePresenceArray");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_99[0]), "MichaelPres");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_99[1]), "FrankPres");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_99[2]), "TrevPres");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_99[3]), "MP_Pres");
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_STRUCT();
}

void func_455(var uParam0, char* sParam1)//Position - 0x5A627
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 90, sParam1);
	func_456(uParam0, "struct_g_CellphoneSettings");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY.Focus_Lock_Help_Been_Displayed), "Focus_Lock_Help_Been_Displayed");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY.Sleep_Warning_Been_Displayed), "Sleep_Warning_Been_Displayed");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY.SleepIcon_Help_Been_Displayed), "SleepIcon_Help_Been_Displayed");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY.Sleep_Reminder_Been_Displayed), "Sleep_Reminder_Been_Displayed");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY.QuickSave_Help_Been_Displayed), "QuickSave_Help_Been_Displayed");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY.TranslucentIcon_Help_Been_Displayed), "TranslucentIcon_Help_Been_Displayed");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY.MPTranslucentIcon_Help_Been_Displayed), "MPTranslucentIcon_Help_Been_Displayed");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY.Is_Sniper_App_Available), "Is_Sniper_App_Available");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY.Is_Trackify_App_Available), "Is_Trackify_App_Available");
	MISC::STOP_SAVE_STRUCT();
}

void func_456(var uParam0, char* sParam1)//Position - 0x5A6EA
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 81, sParam1);
	while (iVar0 < 4)
	{
		switch (iVar0)
		{
			case 0:
				StringCopy(&Var1, "Michael_Char_0_CS", 24);
				break;
			
			case 1:
				StringCopy(&Var1, "Franklin_Char_1_CS", 24);
				break;
			
			case 2:
				StringCopy(&Var1, "Trevor_Char_2_CS", 24);
				break;
			
			case 3:
				StringCopy(&Var1, "MP_Char_3_CS", 24);
				break;
		}
		func_457(uParam0[iVar0 /*20*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_457(var uParam0, char* sParam1)//Position - 0x5A76D
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 20, sParam1);
	MISC::_0x48F069265A0E4BEC(uParam0, "Movie_Name_For_This_Player");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_7), "OS_For_This_Player");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_6), "Theme_For_This_Player");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10), "Vibrate_For_This_Player");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8), "Provider_For_This_Player");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_9), "Wallpaper_For_This_Player");
	MISC::_0x48F069265A0E4BEC(&(uParam0->f_11), "Ringtone_For_This_Player");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_17), "LastMessageNeedsRead");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_18), "LaunchToTextMessageScreen");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_19), "ThisPlayerOnScheduledActivity");
	MISC::STOP_SAVE_STRUCT();
}

void func_458()//Position - 0x5A803
{
	func_459(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY), "COMP_PERCENT_SAVED_ARRAY");
}

void func_459(var uParam0, char* sParam1)//Position - 0x5A81B
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 3857, sParam1);
	func_460(uParam0, "struct_g_CompletionPercentage");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_3853), "Game_Complete_Percentage");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_3854), "Has_100_Percent_Been_Reached");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3855), "SP_Event_F_EntryTrackerBitset");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3856), "SP_Event_F_EntryTrackerBS_2");
	MISC::STOP_SAVE_STRUCT();
}

void func_460(var uParam0, char* sParam1)//Position - 0x5A875
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 3853, sParam1);
	while (iVar0 < 321)
	{
		MemCopy(&Var1, {Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iVar0 /*12*/]}, 8);
		StringConCat(&Var1, "_Saved", 32);
		func_461(uParam0[iVar0 /*12*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_461(var uParam0, char* sParam1)//Position - 0x5A8C8
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 12, sParam1);
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_5), "Marked_as_Completed");
	MISC::REGISTER_TEXT_LABEL_TO_SAVE(uParam0, "CompPercentage_Label");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_4), "CompPercentage_Weighting");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_6), "CompPercentage_Grouping");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_7), "CompPercentage_ChoiceMission");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8), "CompPercentage_EnumAndVarData");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_9), "CompPercentage_SC_Cluster");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_10), "Runtime_defined_location_X");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_11), "Runtime_defined_location_Y");
	MISC::STOP_SAVE_STRUCT();
}

void func_462()//Position - 0x5A951
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY), 154, "FLOW_HELP_STRUCT");
	func_465(&(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY), "FLOW_HELP_STRUCT_ARRAY");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount), "iFlowHelpCount");
	func_464(&(Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY), "FLOW_HELP_PRIORITY_ARRAY");
	func_463(&(Global_SAVE_DATA.FLOW_HELP_STRUCT.HELP_DISPLAYED_BITSET_ARRAY), "HELP_DISPLAYED_BITSET_ARRAY");
	MISC::STOP_SAVE_STRUCT();
}

void func_463(var uParam0, char* sParam1)//Position - 0x5A9B5
{
	char cVar0[32];
	int iVar8;
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4, sParam1);
	iVar8 = 0;
	while (iVar8 < *uParam0)
	{
		StringCopy(&cVar0, "HELP_DISPLAYED_BITSET_", 32);
		StringIntConCat(&cVar0, iVar8, 32);
		MISC::REGISTER_ENUM_TO_SAVE(uParam0[iVar8], &cVar0);
		iVar8++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_464(var uParam0, char* sParam1)//Position - 0x5A9F9
{
	char cVar0[32];
	int iVar8;
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4, sParam1);
	iVar8 = 0;
	while (iVar8 < *uParam0)
	{
		StringCopy(&cVar0, "FLOW_HELP_PRIORITY_", 32);
		StringIntConCat(&cVar0, iVar8, 32);
		MISC::REGISTER_ENUM_TO_SAVE(uParam0[iVar8], &cVar0);
		iVar8++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_465(var uParam0, char* sParam1)//Position - 0x5AA3D
{
	struct<4> Var0;
	int iVar8;
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 145, sParam1);
	iVar8 = 0;
	while (iVar8 < *uParam0)
	{
		StringCopy(&Var0, "FLOW_HELP_STRUCT_", 32);
		StringIntConCat(&Var0, iVar8, 32);
		func_466(uParam0[iVar8 /*16*/], &Var0);
		iVar8++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_466(var uParam0, char* sParam1)//Position - 0x5AA82
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 16, sParam1);
	MISC::REGISTER_TEXT_LABEL_TO_SAVE(uParam0, "tHelpText");
	MISC::REGISTER_TEXT_LABEL_TO_SAVE(&(uParam0->f_4), "tAddText");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8), "iStartTime");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_9), "iDuration");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10), "iExpirationTime");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_11), "iCharBitset");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_12), "ePriority");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_13), "eCodeIDStart");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_14), "eCodeIDDisplayed");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_15), "iSettingsFlags");
	MISC::STOP_SAVE_STRUCT();
}

void func_467()//Position - 0x5AB18
{
	func_468(&(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT), "VEHICLE_GEN_SAVED_DATA_STRUCT");
}

void func_468(var uParam0, char* sParam1)//Position - 0x5AB30
{
	int iVar0;
	char cVar1[24];
	int iVar7;
	int iVar8;
	
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 4971, sParam1);
	func_471(uParam0, "VEHICLE_GEN_PROPERTIES");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_69), 1243, "DYANMIC_DATA");
	iVar0 = 0;
	while (iVar0 < 23)
	{
		StringCopy(&cVar1, "DYANMIC_DATA", 24);
		StringIntConCat(&cVar1, iVar0, 24);
		func_470(&(uParam0->f_69[iVar0 /*54*/]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_4251), 163, "HEIST_VEHS");
	iVar0 = 0;
	while (iVar0 < uParam0->f_4251)
	{
		StringCopy(&cVar1, "HEIST_VEHS", 24);
		StringIntConCat(&cVar1, iVar0, 24);
		func_470(&(uParam0->f_4251[iVar0 /*54*/]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_4414), 328, "IMPOUND_VEHS");
	iVar7 = 0;
	while (iVar7 < 3)
	{
		StringCopy(&cVar1, "IMPOUND_VEHS", 24);
		StringConCat(&cVar1, "_", 24);
		StringIntConCat(&cVar1, iVar7, 24);
		MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_4414[iVar7 /*109*/]), 109, &cVar1);
		iVar0 = 0;
		while (iVar0 < GlobalFunc_535(&(uParam0->f_4414[iVar7 /*109*/])))
		{
			StringCopy(&cVar1, "IMPOUND_VEHS", 24);
			StringConCat(&cVar1, "_", 24);
			StringIntConCat(&cVar1, iVar7, 24);
			StringConCat(&cVar1, "_", 24);
			StringIntConCat(&cVar1, iVar0, 24);
			func_470(&(uParam0->f_4414[iVar7 /*109*/][iVar0 /*54*/]), &cVar1);
			iVar0++;
		}
		MISC::STOP_SAVE_ARRAY();
		iVar7++;
	}
	MISC::STOP_SAVE_ARRAY();
	func_470(&(uParam0->f_4742), "NEXT_IMPOUND");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_4796), "IMPOUND_TRACK");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_4797), "IMPOUND_SWITCH");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_4798), "IMPOUND_CHAR");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_4799), "VEHGEN_CHAR");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_4800), 4, "IMPOUND_SLOTS");
	iVar0 = 0;
	while (iVar0 < uParam0->f_4800)
	{
		StringCopy(&cVar1, "IMPOUND_SLOTS", 24);
		StringIntConCat(&cVar1, iVar0, 24);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4800[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_4804), 4, "IMPOUND_HELP");
	iVar0 = 0;
	while (iVar0 < uParam0->f_4804)
	{
		StringCopy(&cVar1, "IMPOUND_HELP", 24);
		StringIntConCat(&cVar1, iVar0, 24);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_4804[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1312), 70, "DYNAMIC_COORDS");
	iVar0 = 0;
	while (iVar0 < 23)
	{
		StringCopy(&cVar1, "DYNAMIC_COORDS", 24);
		StringIntConCat(&cVar1, iVar0, 24);
		StringConCat(&cVar1, "_X", 24);
		MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_1312[iVar0 /*3*/]), &cVar1);
		StringCopy(&cVar1, "DYNAMIC_COORDS", 24);
		StringIntConCat(&cVar1, iVar0, 24);
		StringConCat(&cVar1, "_Y", 24);
		MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_1312[iVar0 /*3*/].f_1), &cVar1);
		StringCopy(&cVar1, "DYNAMIC_COORDS", 24);
		StringIntConCat(&cVar1, iVar0, 24);
		StringConCat(&cVar1, "_Z", 24);
		MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_1312[iVar0 /*3*/].f_2), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1382), 24, "DYANMIC_HEAD");
	iVar0 = 0;
	while (iVar0 < 23)
	{
		StringCopy(&cVar1, "DYNAMIC_HEAD", 24);
		StringIntConCat(&cVar1, iVar0, 24);
		MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_1382[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1406), 24, "PLAYER_VEH");
	iVar0 = 0;
	while (iVar0 < 23)
	{
		StringCopy(&cVar1, "PLAYER_VEH", 24);
		StringIntConCat(&cVar1, iVar0, 24);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1406[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1430), 2818, "WEB_VEHICLES");
	iVar8 = 0;
	while (iVar8 < uParam0->f_1430)
	{
		StringCopy(&cVar1, "WEB_VEH_", 24);
		StringIntConCat(&cVar1, iVar8, 24);
		MISC::START_SAVE_STRUCT_WITH_SIZE(&(uParam0->f_1430[iVar8 /*939*/]), 939, &cVar1);
		MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1430[iVar8 /*939*/]), 313, "SITE_ID");
		iVar0 = 0;
		while (iVar0 < 312)
		{
			StringCopy(&cVar1, "SITE_ID_", 24);
			StringIntConCat(&cVar1, iVar0, 24);
			MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1430[iVar8 /*939*/][iVar0]), &cVar1);
			iVar0++;
		}
		MISC::STOP_SAVE_ARRAY();
		MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1430[iVar8 /*939*/].f_313), 313, "VEH_GEN");
		iVar0 = 0;
		while (iVar0 < 312)
		{
			StringCopy(&cVar1, "VEH_GEN_", 24);
			StringIntConCat(&cVar1, iVar0, 24);
			MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_1430[iVar8 /*939*/].f_313[iVar0]), &cVar1);
			iVar0++;
		}
		MISC::STOP_SAVE_ARRAY();
		MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1430[iVar8 /*939*/].f_626), 313, "EMAIL_DATE");
		iVar0 = 0;
		while (iVar0 < 312)
		{
			StringCopy(&cVar1, "EMAIL_DATE_", 24);
			StringIntConCat(&cVar1, iVar0, 24);
			MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_1430[iVar8 /*939*/].f_626[iVar0]), &cVar1);
			iVar0++;
		}
		MISC::STOP_SAVE_ARRAY();
		MISC::STOP_SAVE_STRUCT();
		iVar8++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_4808), 163, "SWITCH_IMP");
	iVar0 = 0;
	while (iVar0 < uParam0->f_4808)
	{
		StringCopy(&cVar1, "SWITCH_IMP", 24);
		StringIntConCat(&cVar1, iVar0, 24);
		func_470(&(uParam0->f_4808[iVar0 /*54*/]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_4250), "VEHDATA_SETUP");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_4249), "MISSVEH_TIME");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_4248), "GARAGE_INTRO");
	MISC::STOP_SAVE_STRUCT();
}


void func_470(var uParam0, char* sParam1)//Position - 0x5B055
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
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_46), "eLockState");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_47), "iCustomR");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_48), "iCustomG");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_49), "iCustomB");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_50), "iNeonR");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_51), "iNeonG");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_52), "iNeonB");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_42), "eModel");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_9), 26, "VEH_MOD_ID");
	iVar0 = 0;
	while (iVar0 < 25)
	{
		StringCopy(&cVar1, "MOD_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_9[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_35), 3, "VEH_MOD_VAR");
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&cVar1, "MOD_VAR", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_35[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_STRUCT();
}

void func_471(var uParam0, char* sParam1)//Position - 0x5B20B
{
	int iVar0;
	char cVar1[32];
	
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 69, sParam1);
	iVar0 = 0;
	while (iVar0 < 68)
	{
		StringCopy(&cVar1, "VEHGEN_", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_472()//Position - 0x5B252
{
	func_473(&(Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT), "BUILDING_SAVED_DATA_STRUCT");
}

void func_473(var uParam0, char* sParam1)//Position - 0x5B26A
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 426, sParam1);
	func_475(uParam0, "DOOR_STATES");
	func_474(&(uParam0->f_226), "BUILDING_STATES");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_425), "BUILDING_DEFAULT_DATA_SET");
	MISC::STOP_SAVE_STRUCT();
}

void func_474(var uParam0, char* sParam1)//Position - 0x5B2A7
{
	int iVar0;
	char cVar1[32];
	
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 199, sParam1);
	iVar0 = 0;
	while (iVar0 < 198)
	{
		StringCopy(&cVar1, "BUILDING_", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_ENUM_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_475(var uParam0, char* sParam1)//Position - 0x5B2EE
{
	int iVar0;
	char cVar1[32];
	
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 226, sParam1);
	iVar0 = 0;
	while (iVar0 < 225)
	{
		StringCopy(&cVar1, "DOOR_", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_ENUM_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_476()//Position - 0x5B335
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_SAVE_DATA.CODE_CONTROL_RUNFLAG_ARRAY), 472, "CODE_CONTROL_DATA_STRUCT");
	func_478(&(Global_SAVE_DATA.CODE_CONTROL_RUNFLAG_ARRAY), "CODE_CONTROL_RUNFLAG_ARRAY");
	func_477(&(Global_SAVE_DATA.CODE_CONTROL_DATA_STRUCT.CODE_CONTROL_EXECUTE_TIMER_ARRAY), "CODE_CONTROL_EXECUTE_TIMER_ARRAY");
	MISC::STOP_SAVE_STRUCT();
}

void func_477(var uParam0, char* sParam1)//Position - 0x5B376
{
	int iVar0;
	char cVar1[64];
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 236, sParam1);
	iVar0 = 0;
	while (iVar0 < 235)
	{
		StringCopy(&cVar1, "CODE_ID_EXECUTE_TIMER_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_478(var uParam0, char* sParam1)//Position - 0x5B3BA
{
	int iVar0;
	char cVar1[64];
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 236, sParam1);
	iVar0 = 0;
	while (iVar0 < 235)
	{
		StringCopy(&cVar1, "CODE_ID_RUNFLAG_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		MISC::REGISTER_BOOL_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_479()//Position - 0x5B3FE
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY), 925, "COMM_CONTROL_DATA_STRUCT");
	func_490(&(Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY), "COMM_CONTROL_QUEUED_CALLS_ARRAY");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls), "No_Queued_Calls");
	func_489(&(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_MISSED_CALLS_ARRAY), "COMM_CONTROL_MISSED_CALLS_ARRAY");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Missed_Calls), "No_Missed_Calls");
	func_487(&(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAT_CALLS_ARRAY), "COMM_CONTROL_CHAT_CALLS_ARRAY");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Chat_Calls), "No_Chat_Calls");
	func_486(&(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_TEXTS_ARRAY), "COMM_CONTROL_QUEUED_TEXTS_ARRAY");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Texts), "No_Queued_Texts");
	func_484(&(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_SENT_TEXTS_ARRAY), "COMM_CONTROL_SENT_TEXTS_ARRAY");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Sent_Texts), "No_Sent_Texts");
	func_481(&(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_EMAILS_ARRAY), "COMM_CONTROL_QUEUED_EMAILS_ARRAY");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Emails), "No_Queued_Emails");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Completed_Call), "Last_Completed_Call");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Call_Answered), "Last_Call_Answered");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Call_Had_Response), "Last_Call_Had_Response");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Call_Response), "Last_Call_Response");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Completed_Text), "Last_Completed_Text");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Text_Had_Response), "Last_Text_Had_Response");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Text_Response), "Last_Text_Response");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Completed_Email), "Last_Completed_Email");
	func_480(&(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY), "COMM_CONTROL_CHAR_PRIORITY_ARRAY");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Exile_Warning_Bitset), "Exile_Warning_Bitset");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Comms_Game_time), "Comms_Game_time");
	MISC::STOP_SAVE_STRUCT();
}

void func_480(var uParam0, char* sParam1)//Position - 0x5B5CB
{
	int iVar0;
	char cVar1[64];
	int iVar17;
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4, sParam1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar17 = iVar0;
		StringCopy(&cVar1, "Character_Priority_", 64);
		switch (iVar17)
		{
			case 0:
				StringConCat(&cVar1, "Michael", 64);
				break;
			
			case 1:
				StringConCat(&cVar1, "Franklin", 64);
				break;
			
			case 2:
				StringConCat(&cVar1, "Trevor", 64);
				break;
		}
		MISC::REGISTER_ENUM_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_481(var uParam0, char* sParam1)//Position - 0x5B648
{
	int iVar0;
	struct<8> Var1;
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 101, sParam1);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		StringCopy(&Var1, "EMAIL_DATA_STRUCT_", 64);
		StringIntConCat(&Var1, iVar0, 64);
		func_482(uParam0[iVar0 /*10*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_482(var uParam0, char* sParam1)//Position - 0x5B68C
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 10, sParam1);
	func_483(uParam0, "COMMUNICATION_DATA_STRUCT");
	MISC::STOP_SAVE_STRUCT();
}

void func_483(var uParam0, char* sParam1)//Position - 0x5B6AD
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 10, sParam1);
	MISC::REGISTER_ENUM_TO_SAVE(uParam0, "ID");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "Settings");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2), "Player_Char_Bitset");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_3), "Priority");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4), "Queue_Time");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5), "Requeue_Time");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_6), "NPC_Character");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_7), "Restricted_Area_ID");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_8), "Execute_On_Complete_ID");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_9), "Send_Check");
	MISC::STOP_SAVE_STRUCT();
}

void func_484(var uParam0, char* sParam1)//Position - 0x5B743
{
	int iVar0;
	struct<8> Var1;
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 43, sParam1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(&Var1, "SENT_TEXT_DATA_STRUCT_", 64);
		StringIntConCat(&Var1, iVar0, 64);
		func_485(uParam0[iVar0 /*14*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_485(var uParam0, char* sParam1)//Position - 0x5B786
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 14, sParam1);
	func_483(uParam0, "COMMUNICATION_DATA_STRUCT");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_10), "ePart1");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_11), "ePart2");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_12), "Fail_Count");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_13), "WhichCanCallSenderStatus");
	MISC::STOP_SAVE_STRUCT();
}

void func_486(var uParam0, char* sParam1)//Position - 0x5B7DB
{
	int iVar0;
	struct<8> Var1;
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 113, sParam1);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		StringCopy(&Var1, "TEXT_MESSAGE_DATA_STRUCT_", 64);
		StringIntConCat(&Var1, iVar0, 64);
		func_485(uParam0[iVar0 /*14*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_487(var uParam0, char* sParam1)//Position - 0x5B81F
{
	int iVar0;
	struct<8> Var1;
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 451, sParam1);
	iVar0 = 0;
	while (iVar0 < 30)
	{
		StringCopy(&Var1, "CHAT_CALL_DATA_STRUCT_", 64);
		StringIntConCat(&Var1, iVar0, 64);
		func_488(uParam0[iVar0 /*15*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_488(var uParam0, char* sParam1)//Position - 0x5B864
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 15, sParam1);
	func_483(uParam0, "COMMUNICATION_DATA_STRUCT");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_10), "eCommExtra");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_11), "eCommExtra2");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_12), "eYesResponse");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_13), "eNoResponse");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_14), "Speaker_ID");
	MISC::STOP_SAVE_STRUCT();
}

void func_489(var uParam0, char* sParam1)//Position - 0x5B8C6
{
	int iVar0;
	struct<8> Var1;
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 61, sParam1);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&Var1, "MISSED_CALL_DATA_STRUCT_", 64);
		StringIntConCat(&Var1, iVar0, 64);
		func_488(uParam0[iVar0 /*15*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_490(var uParam0, char* sParam1)//Position - 0x5B909
{
	int iVar0;
	struct<8> Var1;
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 136, sParam1);
	iVar0 = 0;
	while (iVar0 < 9)
	{
		StringCopy(&Var1, "CALL_DATA_STRUCT_", 64);
		StringIntConCat(&Var1, iVar0, 64);
		func_488(uParam0[iVar0 /*15*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_491()//Position - 0x5B94D
{
	int iVar0;
	char[] cVar1[8];
	int iVar2;
	char cVar3[64];
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS), 379, "SAVED_RANDOM_CHARACTERS");
	iVar0 = 0;
	while (iVar0 < 63)
	{
		switch (iVar0)
		{
			case 0:
				cVar1 = "RC_ABIGAIL_1";
				break;
			
			case 1:
				cVar1 = "RC_ABIGAIL_2";
				break;
			
			case 2:
				cVar1 = "RC_BARRY_1";
				break;
			
			case 3:
				cVar1 = "RC_BARRY_2";
				break;
			
			case 4:
				cVar1 = "RC_BARRY_3";
				break;
			
			case 5:
				cVar1 = "RC_BARRY_3A";
				break;
			
			case 6:
				cVar1 = "RC_BARRY_3C";
				break;
			
			case 7:
				cVar1 = "RC_BARRY_4";
				break;
			
			case 8:
				cVar1 = "RC_DREYFUSS_1";
				break;
			
			case 9:
				cVar1 = "RC_EPSILON_1";
				break;
			
			case 10:
				cVar1 = "RC_EPSILON_2";
				break;
			
			case 11:
				cVar1 = "RC_EPSILON_3";
				break;
			
			case 12:
				cVar1 = "RC_EPSILON_4";
				break;
			
			case 13:
				cVar1 = "RC_EPSILON_5";
				break;
			
			case 14:
				cVar1 = "RC_EPSILON_6";
				break;
			
			case 15:
				cVar1 = "RC_EPSILON_7";
				break;
			
			case 16:
				cVar1 = "RC_EPSILON_8";
				break;
			
			case 17:
				cVar1 = "RC_EXTREME_1";
				break;
			
			case 18:
				cVar1 = "RC_EXTREME_2";
				break;
			
			case 19:
				cVar1 = "RC_EXTREME_3";
				break;
			
			case 20:
				cVar1 = "RC_EXTREME_4";
				break;
			
			case 21:
				cVar1 = "RC_FANATIC_1";
				break;
			
			case 22:
				cVar1 = "RC_FANATIC_2";
				break;
			
			case 23:
				cVar1 = "RC_FANATIC_3";
				break;
			
			case 24:
				cVar1 = "RC_HAO_1";
				break;
			
			case 25:
				cVar1 = "RC_HUNTING_1";
				break;
			
			case 26:
				cVar1 = "RC_HUNTING_2";
				break;
			
			case 27:
				cVar1 = "RC_JOSH_1";
				break;
			
			case 28:
				cVar1 = "RC_JOSH_2";
				break;
			
			case 29:
				cVar1 = "RC_JOSH_3";
				break;
			
			case 30:
				cVar1 = "RC_JOSH_4";
				break;
			
			case 31:
				cVar1 = "RC_MAUDE_1";
				break;
			
			case 32:
				cVar1 = "RC_MINUTE_1";
				break;
			
			case 33:
				cVar1 = "RC_MINUTE_2";
				break;
			
			case 34:
				cVar1 = "RC_MINUTE_3";
				break;
			
			case 35:
				cVar1 = "RC_MRS_PHILIPS_1";
				break;
			
			case 36:
				cVar1 = "RC_MRS_PHILIPS_2";
				break;
			
			case 37:
				cVar1 = "RC_NIGEL_1";
				break;
			
			case 38:
				cVar1 = "RC_NIGEL_1A";
				break;
			
			case 39:
				cVar1 = "RC_NIGEL_1B";
				break;
			
			case 40:
				cVar1 = "RC_NIGEL_1C";
				break;
			
			case 41:
				cVar1 = "RC_NIGEL_1D";
				break;
			
			case 42:
				cVar1 = "RC_NIGEL_2";
				break;
			
			case 43:
				cVar1 = "RC_NIGEL_3";
				break;
			
			case 44:
				cVar1 = "RC_OMEGA_1";
				break;
			
			case 45:
				cVar1 = "RC_OMEGA_2";
				break;
			
			case 46:
				cVar1 = "RC_PAPARAZZO_1";
				break;
			
			case 47:
				cVar1 = "RC_PAPARAZZO_2";
				break;
			
			case 48:
				cVar1 = "RC_PAPARAZZO_3";
				break;
			
			case 49:
				cVar1 = "RC_PAPARAZZO_3A";
				break;
			
			case 50:
				cVar1 = "RC_PAPARAZZO_3B";
				break;
			
			case 51:
				cVar1 = "RC_PAPARAZZO_4";
				break;
			
			case 52:
				cVar1 = "RC_RAMPAGE_1";
				break;
			
			case 53:
				cVar1 = "RC_RAMPAGE_2";
				break;
			
			case 54:
				cVar1 = "RC_RAMPAGE_3";
				break;
			
			case 55:
				cVar1 = "RC_RAMPAGE_4";
				break;
			
			case 56:
				cVar1 = "RC_RAMPAGE_5";
				break;
			
			case 57:
				cVar1 = "RC_THELASTONE";
				break;
			
			case 58:
				cVar1 = "RC_TONYA_1";
				break;
			
			case 59:
				cVar1 = "RC_TONYA_2";
				break;
			
			case 60:
				cVar1 = "RC_TONYA_3";
				break;
			
			case 61:
				cVar1 = "RC_TONYA_4";
				break;
			
			case 62:
				cVar1 = "RC_TONYA_5";
				break;
			
			default:
				cVar1 = "UNKNOWN";
				break;
		}
		func_492(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar0 /*6*/]), cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.RC_EVENTS), "RC_EVENTS");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.iRCMissionsCompleted), "iRCMissionsCompleted");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iCurrentEpsilonPayment), "g_iCurrentEpsilonPayment");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iWebsiteQueryBit), "g_iWebsiteQueryBit");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iREDomesticCompOrder), "g_iREDomesticCompOrder");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_bFanaticHelp), "g_bFanaticHelp");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_bFanaticStamina), "g_bFanaticStamina");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_bFanaticCheated), "g_bFanaticCheated");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_bFinalEpsilonPayment), "g_bFinalEpsilonPayment");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_bStoleEpsilonCash), "g_bStoleEpsilonCash");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_bTriggeredHao1), "g_bTriggeredHao1");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.VISIBLE_IN_FOW), 3, "VISIBLE_IN_FOW");
	iVar2 = 0;
	while (iVar2 < 2)
	{
		StringCopy(&cVar3, "VISIBLE_IN_FOW_BITSET_", 64);
		StringIntConCat(&cVar3, iVar2, 64);
		MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.VISIBLE_IN_FOW[iVar2]), &cVar3);
		iVar2++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_492(var uParam0, char* sParam1)//Position - 0x5BEAF
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 6, sParam1);
	MISC::REGISTER_INT_TO_SAVE(uParam0, "RC_FLAGS");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_1), "RC_TIME_REQ_SET");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_2), "RC_STORED_TIME");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3), "RC_iCompletionOrder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4), "RC_iFailsNoProgress");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_5), "fStatCompletion");
	MISC::STOP_SAVE_STRUCT();
}

void func_493()//Position - 0x5BF10
{
	func_494(&(Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA), "PLAYER_SCENE_SAVED_DATA");
}

void func_494(var uParam0, char* sParam1)//Position - 0x5BF28
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 41, sParam1);
	func_499(uParam0, "g_ePlayerLastScene");
	func_497(&(uParam0->f_4), "g_eLastSceneQueue");
	func_495(&(uParam0->f_24), "g_bPlayerTriggeredPrioritySwitch");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_23), "g_iSeenOneOffSceneBit");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_40), "g_bSeenTrevorsPrettyDress");
	MISC::STOP_SAVE_STRUCT();
}

void func_495(var uParam0, char* sParam1)//Position - 0x5BF7D
{
	int iVar0;
	struct<4> Var1;
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 16, sParam1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		switch (iVar0)
		{
			case 0:
				StringCopy(&Var1, "CHAR_MICHAEL", 32);
				break;
			
			case 1:
				StringCopy(&Var1, "CHAR_FRANKLIN", 32);
				break;
			
			case 2:
				StringCopy(&Var1, "CHAR_TREVOR", 32);
				break;
			
			default:
				StringCopy(&Var1, "char_", 32);
				StringIntConCat(&Var1, iVar0, 32);
				break;
		}
		func_496(uParam0[iVar0 /*5*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_496(var uParam0, char* sParam1)//Position - 0x5C000
{
	int iVar0;
	char cVar1[32];
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 5, sParam1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		switch (iVar0)
		{
			case 0:
				StringCopy(&cVar1, "_0", 32);
				break;
			
			case 1:
				StringCopy(&cVar1, "_1", 32);
				break;
			
			case 2:
				StringCopy(&cVar1, "_2", 32);
				break;
			
			case 3:
				StringCopy(&cVar1, "_3", 32);
				break;
			
			default:
				StringIntConCat(&cVar1, iVar0, 32);
				break;
		}
		MISC::REGISTER_BOOL_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_497(var uParam0, char* sParam1)//Position - 0x5C08D
{
	int iVar0;
	struct<4> Var1;
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 19, sParam1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		switch (iVar0)
		{
			case 0:
				StringCopy(&Var1, "CHAR_MICHAEL", 32);
				break;
			
			case 1:
				StringCopy(&Var1, "CHAR_FRANKLIN", 32);
				break;
			
			case 2:
				StringCopy(&Var1, "CHAR_TREVOR", 32);
				break;
			
			default:
				StringCopy(&Var1, "char_", 32);
				StringIntConCat(&Var1, iVar0, 32);
				break;
		}
		func_498(uParam0[iVar0 /*6*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_498(var uParam0, char* sParam1)//Position - 0x5C110
{
	int iVar0;
	char cVar1[32];
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 6, sParam1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		StringCopy(&cVar1, "_", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_ENUM_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_499(var uParam0, char* sParam1)//Position - 0x5C154
{
	int iVar0;
	char cVar1[32];
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4, sParam1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		switch (iVar0)
		{
			case 0:
				StringCopy(&cVar1, "CHAR_MICHAEL", 32);
				break;
			
			case 1:
				StringCopy(&cVar1, "CHAR_FRANKLIN", 32);
				break;
			
			case 2:
				StringCopy(&cVar1, "CHAR_TREVOR", 32);
				break;
			
			default:
				StringCopy(&cVar1, "Player_Scene_Sheet_", 32);
				StringIntConCat(&cVar1, iVar0, 32);
				break;
		}
		MISC::REGISTER_ENUM_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_500()//Position - 0x5C1D6
{
	func_501(&(Global_SAVE_DATA.FAMILY_SAVED_DATA), "FAMILY_SAVED_DATA");
}

void func_501(var uParam0, char* sParam1)//Position - 0x5C1EE
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 19, sParam1);
	func_502(uParam0, "ePreviousFamilyEvent");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_16), "bInitialisedPreviousEvents");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_17), "bSeenFamWeaponDisplay");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_18), "bHeardTrevorCountry");
	MISC::STOP_SAVE_STRUCT();
}

void func_502(var uParam0, char* sParam1)//Position - 0x5C236
{
	int iVar0;
	char cVar1[32];
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 16, sParam1);
	iVar0 = 0;
	while (iVar0 < 15)
	{
		switch (iVar0)
		{
			case 0:
				StringCopy(&cVar1, "FM_MICHAEL_SON", 32);
				break;
			
			case 1:
				StringCopy(&cVar1, "FM_MICHAEL_DAUGHTER", 32);
				break;
			
			case 2:
				StringCopy(&cVar1, "FM_MICHAEL_WIFE", 32);
				break;
			
			case 3:
				StringCopy(&cVar1, "FM_MICHAEL_MEXMAID", 32);
				break;
			
			case 4:
				StringCopy(&cVar1, "FM_MICHAEL_GARDENER", 32);
				break;
			
			case 5:
				StringCopy(&cVar1, "FM_FRANKLIN_AUNT", 32);
				break;
			
			case 6:
				StringCopy(&cVar1, "FM_FRANKLIN_LAMAR", 32);
				break;
			
			case 7:
				StringCopy(&cVar1, "FM_FRANKLIN_STRETCH", 32);
				break;
			
			case 10:
				StringCopy(&cVar1, "FM_TREVOR_0_RON", 32);
				break;
			
			case 8:
				StringCopy(&cVar1, "FM_TREVOR_0_MICHAEL", 32);
				break;
			
			case 9:
				StringCopy(&cVar1, "FM_TREVOR_0_TREVOR", 32);
				break;
			
			case 11:
				StringCopy(&cVar1, "FM_TREVOR_0_WIFE", 32);
				break;
			
			case 12:
				StringCopy(&cVar1, "FM_TREVOR_0_MOTHER", 32);
				break;
			
			case 13:
				StringCopy(&cVar1, "FM_TREVOR_1_FLOYD", 32);
				break;
			
			case 14:
				StringCopy(&cVar1, "FM_TREVOR_1_WADE", 32);
				break;
			
			default:
				StringCopy(&cVar1, "Family_Sheet_", 32);
				StringIntConCat(&cVar1, iVar0, 32);
				break;
		}
		MISC::REGISTER_ENUM_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_503()//Position - 0x5C392
{
	func_504(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY), "FRIENDS_SAVED_ARRAY");
}

void func_504(var uParam0, char* sParam1)//Position - 0x5C3AA
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 411, sParam1);
	func_513(uParam0, "g_FriendData");
	func_511(&(uParam0->f_175), "g_FriendConnectData");
	func_509(&(uParam0->f_347), "g_FriendGroupData");
	func_507(&(uParam0->f_362), "g_FriendFailTimers");
	func_506(&(uParam0->f_381), "g_FriendFailMessages");
	func_505(&(uParam0->f_388), "g_FranklinLamarEndChat");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_395), "g_FriendScriptThread");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_396), "g_bHelpDoneCanPhoneFriend");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_397), "g_bHelpDoneCanPhoneBBuddy");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_398), "g_bHelpDoneCanPhoneDecline");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_399), "g_bHelpDonePickupDest");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_400), "g_bHelpDonePickupWait");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_401), "g_bHelpDoneActivityBlips");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_402), "g_bHelpDoneOpenMap");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_403), "g_bHelpDoneDropoff");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_404), "g_bHelpDoneCanCancel");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_405), "g_bCalledToCancelOnce");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_406), "g_bHasPlayerBeenTurnedDown");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_407), "g_bExplainedDeadFriend");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_408), "g_bHelpDoneBBuddyArrival");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_409), "g_bHelpDoneBBuddySwitch");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_410), "g_iAmbChatBitfield");
	MISC::STOP_SAVE_STRUCT();
}

void func_505(var uParam0, char* sParam1)//Position - 0x5C4F1
{
	char cVar0[32];
	int iVar8;
	
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 7, sParam1);
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 7, "banks");
	iVar8 = 0;
	while (iVar8 < 6)
	{
		StringCopy(&cVar0, "bank", 32);
		StringIntConCat(&cVar0, iVar8, 32);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar8], &cVar0);
		iVar8++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_STRUCT();
}

void func_506(var uParam0, char* sParam1)//Position - 0x5C543
{
	int iVar0;
	char cVar1[32];
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 7, sParam1);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		switch (iVar0)
		{
			case 0:
				StringCopy(&cVar1, "tMICHAEL", 32);
				break;
			
			case 1:
				StringCopy(&cVar1, "tFRANKLIN", 32);
				break;
			
			case 2:
				StringCopy(&cVar1, "tTREVOR", 32);
				break;
			
			case 3:
				StringCopy(&cVar1, "tLAMAR", 32);
				break;
			
			case 4:
				StringCopy(&cVar1, "tJIMMY", 32);
				break;
			
			case 5:
				StringCopy(&cVar1, "tAMANDA", 32);
				break;
			
			default:
				StringCopy(&cVar1, "Friend", 32);
				StringIntConCat(&cVar1, iVar0, 32);
				break;
		}
		MISC::REGISTER_ENUM_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_507(var uParam0, char* sParam1)//Position - 0x5C5FB
{
	int iVar0;
	struct<4> Var1;
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 19, sParam1);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		switch (iVar0)
		{
			case 0:
				StringCopy(&Var1, "tMICHAEL", 32);
				break;
			
			case 1:
				StringCopy(&Var1, "tFRANKLIN", 32);
				break;
			
			case 2:
				StringCopy(&Var1, "tTREVOR", 32);
				break;
			
			case 3:
				StringCopy(&Var1, "tLAMAR", 32);
				break;
			
			case 4:
				StringCopy(&Var1, "tJIMMY", 32);
				break;
			
			case 5:
				StringCopy(&Var1, "tAMANDA", 32);
				break;
			
			default:
				StringCopy(&Var1, "Friend", 32);
				StringIntConCat(&Var1, iVar0, 32);
				break;
		}
		func_508(uParam0[iVar0 /*3*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_508(var uParam0, char* sParam1)//Position - 0x5C6B4
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 3, sParam1);
	MISC::REGISTER_INT_TO_SAVE(uParam0, "TimerBits");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_1), "StartTime");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_2), "PauseTime");
	MISC::STOP_SAVE_STRUCT();
}

void func_509(var uParam0, char* sParam1)//Position - 0x5C6EE
{
	int iVar0;
	struct<4> Var1;
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 15, sParam1);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		switch (iVar0)
		{
			case 0:
				StringCopy(&Var1, "FG_MICHAEL_FRANKLIN_TREVOR", 32);
				break;
			
			case 1:
				StringCopy(&Var1, "FG_FRANKLIN_TREVOR_LAMAR", 32);
				break;
			
			default:
				StringCopy(&Var1, "Friend group", 32);
				StringIntConCat(&Var1, iVar0, 32);
				break;
		}
		func_510(uParam0[iVar0 /*7*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_510(var uParam0, char* sParam1)//Position - 0x5C75F
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 7, sParam1);
	func_505(uParam0, "chatData");
	MISC::STOP_SAVE_STRUCT();
}

void func_511(var uParam0, char* sParam1)//Position - 0x5C77F
{
	int iVar0;
	struct<4> Var1;
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 172, sParam1);
	iVar0 = 0;
	while (iVar0 < 9)
	{
		switch (iVar0)
		{
			case 0:
				StringCopy(&Var1, "FC_MICHAEL_FRANKLIN", 32);
				break;
			
			case 1:
				StringCopy(&Var1, "FC_FRANKLIN_TREVOR", 32);
				break;
			
			case 2:
				StringCopy(&Var1, "FC_TREVOR_MICHAEL", 32);
				break;
			
			case 3:
				StringCopy(&Var1, "FC_FRANKLIN_LAMAR", 32);
				break;
			
			case 4:
				StringCopy(&Var1, "FC_TREVOR_LAMAR", 32);
				break;
			
			case 5:
				StringCopy(&Var1, "FC_MICHAEL_JIMMY", 32);
				break;
			
			case 6:
				StringCopy(&Var1, "FC_FRANKLIN_JIMMY", 32);
				break;
			
			case 7:
				StringCopy(&Var1, "FC_TREVOR_JIMMY", 32);
				break;
			
			case 8:
				StringCopy(&Var1, "FC_MICHAEL_AMANDA", 32);
				break;
			
			default:
				StringCopy(&Var1, "Friend Sheet", 32);
				StringIntConCat(&Var1, iVar0, 32);
				break;
		}
		func_512(uParam0[iVar0 /*19*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_512(var uParam0, char* sParam1)//Position - 0x5C86F
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 19, sParam1);
	MISC::REGISTER_ENUM_TO_SAVE(uParam0, "friendA");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_1), "friendB");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2), "blockBits");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_3), "blockMissionID");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_4), "commID");
	func_508(&(uParam0->f_5), "lastContactTimer");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_8), "lastContactType");
	func_505(&(uParam0->f_9), "chatData");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_16), "wanted");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_17), "likes");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_18), "flags");
	MISC::STOP_SAVE_STRUCT();
}

void func_513(var uParam0, char* sParam1)//Position - 0x5C912
{
	int iVar0;
	struct<4> Var1;
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 175, sParam1);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		switch (iVar0)
		{
			case 0:
				StringCopy(&Var1, "FR_MICHAEL", 32);
				break;
			
			case 1:
				StringCopy(&Var1, "FR_FRANKLIN", 32);
				break;
			
			case 2:
				StringCopy(&Var1, "FR_TREVOR", 32);
				break;
			
			case 3:
				StringCopy(&Var1, "FR_LAMAR", 32);
				break;
			
			case 4:
				StringCopy(&Var1, "FR_JIMMY", 32);
				break;
			
			case 5:
				StringCopy(&Var1, "FR_AMANDA", 32);
				break;
			
			default:
				StringCopy(&Var1, "Friend Sheet", 32);
				StringIntConCat(&Var1, iVar0, 32);
				break;
		}
		func_514(uParam0[iVar0 /*29*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_514(var uParam0, char* sParam1)//Position - 0x5C9CB
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 29, sParam1);
	func_515(uParam0, "charSheet");
	MISC::STOP_SAVE_STRUCT();
}

void func_515(var uParam0, char* sParam1)//Position - 0x5C9EC
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 29, sParam1);
	MISC::REGISTER_ENUM_TO_SAVE(uParam0, "game_model");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "alpha_int");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2), "orig_alpha_int");
	MISC::REGISTER_TEXT_LABEL_TO_SAVE(&(uParam0->f_3), "char_label");
	MISC::REGISTER_TEXT_LABEL_TO_SAVE(&(uParam0->f_7), "char_picture");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_11), "is_friend");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_12), 5, "PhoneBookStateArray");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_12[0]), "PhoneBook_State_ToMichael");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_12[1]), "PhoneBook_State_ToFranklin");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_12[2]), "PhoneBook_State_ToTrevor");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_12[3]), "PhoneBook_State_ToMP");
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_17), "bank_acc");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_18), "Picmsg_Status");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_19), 5, "MissedCallStatusArray");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_19[0]), "MissedCallStatus_ToMichael");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_19[1]), "MissedCallStatus_ToFranklin");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_19[2]), "MissedCallStatus_ToTrevor");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_19[3]), "MissedCallStatus_ToMP");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_24), 5, "StatusAsCallerArray");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_24[0]), "StatusAsCaller_ToMichael");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_24[1]), "StatusAsCaller_ToFranklin");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_24[2]), "StatusAsCaller_ToTrevor");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_24[3]), "StatusAsCaller_ToMP");
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_STRUCT();
}

void func_516()//Position - 0x5CB5E
{
	func_517(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY), "CHARSHEET_SAVED_ARRAY");
}

void func_517(var uParam0, char* sParam1)//Position - 0x5CB76
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 4293, sParam1);
	func_518(uParam0, "struct_g_CharacterSheet");
	MISC::STOP_SAVE_STRUCT();
}

void func_518(var uParam0, char* sParam1)//Position - 0x5CB98
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4293, sParam1);
	while (iVar0 < 148)
	{
		MemCopy(&Var1, {Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar0 /*29*/].f_3}, 8);
		StringConCat(&Var1, "_Saved", 32);
		func_515(uParam0[iVar0 /*29*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_519()//Position - 0x5CBEC
{
	func_520(&(Global_SAVE_DATA.RESPAWN_LOCATION_DATA), "RESPAWN_LOCATION_DATA");
}

void func_520(var uParam0, char* sParam1)//Position - 0x5CC04
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 32, sParam1);
	func_523(uParam0, "SAVEHOUSE");
	func_522(&(uParam0->f_17), "POLICE_STATION");
	func_521(&(uParam0->f_11), "HOSPITAL");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_25), "SAVEHOUSE_DATA_SET");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_26), "HOSPITAL_DATA_SET");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_27), "POLICE_DATA_SET");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_28), "bSeenFirstTimeWasted");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_29), "bSeenFirstTimeDrowned");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_30), "bSeenFirstTimeBusted");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_31), "bNewGameStarted");
	MISC::STOP_SAVE_STRUCT();
}

void func_521(var uParam0, char* sParam1)//Position - 0x5CC9A
{
	int iVar0;
	char cVar1[32];
	
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 6, sParam1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		StringCopy(&cVar1, sParam1, 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_522(var uParam0, char* sParam1)//Position - 0x5CCDE
{
	int iVar0;
	char cVar1[32];
	
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 8, sParam1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		StringCopy(&cVar1, sParam1, 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_523(var uParam0, char* sParam1)//Position - 0x5CD23
{
	int iVar0;
	char cVar1[32];
	
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 11, sParam1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		StringCopy(&cVar1, sParam1, 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_524()//Position - 0x5CD68
{
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(Global_SAVE_DATA.COMPONENTS_ARRAY), 493, "COMPONENTS_ARRAY");
	func_539(&(Global_SAVE_DATA.COMPONENTS_ARRAY[0 /*164*/]), "SP0");
	func_539(&(Global_SAVE_DATA.COMPONENTS_ARRAY[1 /*164*/]), "SP1");
	func_539(&(Global_SAVE_DATA.COMPONENTS_ARRAY[2 /*164*/]), "SP2");
	MISC::STOP_SAVE_ARRAY();
	func_526(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT), "PP_INFO_STRUCT");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY), 46, "TATTOOS_ARRAY");
	func_525(&(Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[0 /*15*/]), "SP0");
	func_525(&(Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[1 /*15*/]), "SP1");
	func_525(&(Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[2 /*15*/]), "SP2");
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.COMPONENTS_ARRAY.FRANKLIN_ORIGINAL_OUTFIT_ID), "FRANKLIN_ORIGINAL_OUTFIT_ID");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_SAVE_DATA.COMPONENTS_ARRAY.OVERRIDE_PED), "OVERRIDE_PED");
}

void func_525(var uParam0, char* sParam1)//Position - 0x5CE54
{
	int iVar0;
	char cVar1[32];
	
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 15, sParam1);
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 5, "UNLOCKED");
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&cVar1, "unlockedBitset", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_5), 5, "VIEWED");
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&cVar1, "viewedBitset", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_10), 5, "CURRENT");
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&cVar1, "currentBitset", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_STRUCT();
}

void func_526(var uParam0, char* sParam1)//Position - 0x5CF29
{
	int iVar0;
	struct<16> Var1;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 3216, sParam1);
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 196, "VARIATIONS");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_538(iVar0, "VARIATIONS") };
		func_533(uParam0[iVar0 /*65*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_196), 4, "GOLF_TOPS");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_538(iVar0, "GOLF_TOPS") };
		MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_196[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_200), 4, "GOLF_PANTS");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_538(iVar0, "GOLF_PANTS") };
		MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_200[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_298), 853, "WEAPONS");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_538(iVar0, "WEAPONS") };
		func_530(&(uParam0->f_298[iVar0 /*284*/]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1151), 33, "WEAPON_TO_SHOW");
	iVar17 = 0;
	while (iVar17 < 8)
	{
		StringCopy(&Var1, "WHEEL_SLOT_", 64);
		StringIntConCat(&Var1, iVar17, 64);
		MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1151[iVar17 /*4*/]), 4, &Var1);
		iVar0 = 0;
		while (iVar0 < 3)
		{
			Var1 = { func_538(iVar0, "WEAPON") };
			MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_1151[iVar17 /*4*/][iVar0]), &Var1);
			iVar0++;
		}
		MISC::STOP_SAVE_ARRAY();
		iVar17++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1184), "EQUIPPED_WEAPON_SLOT");
	func_530(&(uParam0->f_1185), "SNAP_WEAP");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_290), 4, "HEALTH_PERCENTAGE");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_538(iVar0, "HEALTH_PERCENTAGE") };
		MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_290[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_294), 4, "ARMOUR");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_538(iVar0, "ARMOUR") };
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_294[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1576), 4, "AVAILABLE");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_538(iVar0, "AVAILABLE") };
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_1576[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1469), 6, "CARMODS");
	iVar18 = 0;
	while (iVar18 < 5)
	{
		Var1 = { func_538(iVar18, "_CARMODS") };
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1469[iVar18]), &Var1);
		iVar18++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1475), 33, "STAT_UPDATES");
	iVar19 = 0;
	while (iVar19 < 8)
	{
		StringCopy(&Var1, "STATS", 64);
		StringIntConCat(&Var1, iVar19, 64);
		MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1475[iVar19 /*4*/]), 4, &Var1);
		iVar0 = 0;
		while (iVar0 < 3)
		{
			Var1 = { func_538(iVar0, "_STATS") };
			MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1475[iVar19 /*4*/][iVar0]), &Var1);
			iVar0++;
		}
		MISC::STOP_SAVE_ARRAY();
		iVar19++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_204), 49, "TRACKED_COMPS");
	iVar20 = 0;
	while (iVar20 < 12)
	{
		StringCopy(&Var1, "COMP", 64);
		StringIntConCat(&Var1, iVar20, 64);
		MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_204[iVar20 /*4*/]), 4, &Var1);
		iVar0 = 0;
		while (iVar0 < 3)
		{
			Var1 = { func_538(iVar0, "_COMP") };
			MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_204[iVar20 /*4*/][iVar0]), &Var1);
			iVar0++;
		}
		MISC::STOP_SAVE_ARRAY();
		iVar20++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_253), 37, "TRACKED_PROPS");
	iVar21 = 0;
	while (iVar21 < 9)
	{
		StringCopy(&Var1, "PROP", 64);
		StringIntConCat(&Var1, iVar21, 64);
		MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_253[iVar21 /*4*/]), 4, &Var1);
		iVar0 = 0;
		while (iVar0 < 3)
		{
			Var1 = { func_538(iVar0, "_PROPS") };
			MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_253[iVar21 /*4*/][iVar0]), &Var1);
			iVar0++;
		}
		MISC::STOP_SAVE_ARRAY();
		iVar21++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1508), 4, "WH_TIMER");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_538(iVar0, "_WHTIMER") };
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1508[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1512), 4, "WH_UPDATE");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_538(iVar0, "_WHUPDATE") };
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1512[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1516), 4, "WH_TIME");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_538(iVar0, "_WHTIME") };
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1516[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1520), 4, "GRAB_TIME");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_538(iVar0, "_GRABTIME") };
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_1520[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2528), 21, "VEH_POS");
	iVar22 = 0;
	while (iVar22 < 2)
	{
		StringCopy(&Var1, "VEH_POS_", 64);
		StringIntConCat(&Var1, iVar22, 64);
		MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2528[iVar22 /*10*/]), 10, &Var1);
		iVar0 = 0;
		while (iVar0 < 3)
		{
			Var1 = { func_538(iVar0, "VEH_POS_X") };
			MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_2528[iVar22 /*10*/][iVar0 /*3*/]), &Var1);
			Var1 = { func_538(iVar0, "VEH_POS_Y") };
			MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_2528[iVar22 /*10*/][iVar0 /*3*/].f_1), &Var1);
			Var1 = { func_538(iVar0, "VEH_POS_Z") };
			MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_2528[iVar22 /*10*/][iVar0 /*3*/].f_2), &Var1);
			iVar0++;
		}
		MISC::STOP_SAVE_ARRAY();
		iVar22++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2549), 9, "VEH_HEAD");
	iVar22 = 0;
	while (iVar22 < 2)
	{
		StringCopy(&Var1, "VEH_HEAD_", 64);
		StringIntConCat(&Var1, iVar22, 64);
		MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2549[iVar22 /*4*/]), 4, &Var1);
		iVar0 = 0;
		while (iVar0 < 3)
		{
			Var1 = { func_538(iVar0, "VEH_HEAD") };
			MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_2549[iVar22 /*4*/][iVar0]), &Var1);
			iVar0++;
		}
		MISC::STOP_SAVE_ARRAY();
		iVar22++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1538), 4, "LAST_KNOWN_HEADING");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_538(iVar0, "LAST_KNOWN_HEADING") };
		MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_1538[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1542), 4, "LAST_KNOWN_ROOM_KEY");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_538(iVar0, "LAST_KNOWN_ROOM_KEY") };
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1542[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1546), 10, "LAST_KNOWN_VELOCITY");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_538(iVar0, "LAST_KNOWN_VELOCITY_X") };
		MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_1546[iVar0 /*3*/]), &Var1);
		Var1 = { func_538(iVar0, "LAST_KNOWN_VELOCITY_Y") };
		MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_1546[iVar0 /*3*/].f_1), &Var1);
		Var1 = { func_538(iVar0, "LAST_KNOWN_VELOCITY_Z") };
		MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_1546[iVar0 /*3*/].f_2), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1556), 4, "LAST_KNOWN_WANTED");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_538(iVar0, "LAST_KNOWN_WANTED") };
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1556[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1560), 4, "CHANGE_ON_MISS");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_538(iVar0, "CHANGE_ON_MISS") };
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_1560[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1564), 4, "CHANGED_CLOTHES");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_538(iVar0, "CHANGED_CLOTHES") };
		MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_1564[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1568), 4, "CHANGED_HAIR");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_538(iVar0, "CHANGED_HAIR") };
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1568[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1572), 4, "CHANGED_TATTS");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_538(iVar0, "CHANGED_TATTS") };
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1572[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1528), 10, "LAST_KNOWN_XCOORD");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_538(iVar0, "LAST_KNOWN_XCOORD") };
		MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_1528[iVar0 /*3*/]), &Var1);
		Var1 = { func_538(iVar0, "LAST_KNOWN_YCOORD") };
		MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_1528[iVar0 /*3*/].f_1), &Var1);
		Var1 = { func_538(iVar0, "LAST_KNOWN_ZCOORD") };
		MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_1528[iVar0 /*3*/].f_2), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1524), 4, "LAST_TIME_ACTIVE");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_538(iVar0, "LAST_TIME_ACTIVE") };
		func_529(&(uParam0->f_1524[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1635), 893, "STORED_VEH_DATA");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1635[0 /*223*/]), 223, "STORED_CAR_DATA");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_538(iVar0, "STORED_CAR_DATA") };
		func_528(&(uParam0->f_1635[0 /*223*/][iVar0 /*74*/]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1635[1 /*223*/]), 223, "STORED_BIK_DATA");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_538(iVar0, "STORED_BIK_DATA") };
		func_528(&(uParam0->f_1635[1 /*223*/][iVar0 /*74*/]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1635[2 /*223*/]), 223, "STORED_GAR_DATA");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_538(iVar0, "STORED_GAR_DATA") };
		func_528(&(uParam0->f_1635[2 /*223*/][iVar0 /*74*/]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1635[3 /*223*/]), 223, "STORED_MOD_DATA");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_538(iVar0, "STORED_MOD_DATA") };
		func_528(&(uParam0->f_1635[3 /*223*/][iVar0 /*74*/]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2558), 150, "NPC_VEH_DATA");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2558[0 /*149*/]), 149, "NPC_CAR_DATA");
	func_528(&(uParam0->f_2558[0 /*149*/][0 /*74*/]), "AMANDAS_CAR");
	func_528(&(uParam0->f_2558[0 /*149*/][1 /*74*/]), "TRACEYS_CAR");
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1611), 4, "SPECIAL_ABILITY");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_538(iVar0, "SPECIAL_ABILITY") };
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_1611[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1583), 4, "STAT_OFFSET_1");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_538(iVar0, "STAT_OFFSET_1") };
		MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_1583[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1587), 4, "STAT_OFFSET_2");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_538(iVar0, "STAT_OFFSET_2") };
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1587[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1591), 4, "STAT_OFFSET_3");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_538(iVar0, "STAT_OFFSET_3") };
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1591[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1595), 4, "STAT_OFFSET_4");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_538(iVar0, "STAT_OFFSET_4") };
		MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_1595[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1599), 4, "STAT_OFFSET_5");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_538(iVar0, "STAT_OFFSET_5") };
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1599[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1603), 4, "STAT_OFFSET_6");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_538(iVar0, "STAT_OFFSET_6") };
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1603[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1607), 4, "STAT_OFFSET_7");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_538(iVar0, "STAT_OFFSET_7") };
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1607[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1615), 4, "SPEC_AB_UNLOCK");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_538(iVar0, "SPEC_AB_UNLOCK") };
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1615[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1619), 4, "PED_COMPS");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_538(iVar0, "PED_COMPS") };
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1619[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1623), 4, "FBI4MASKSNAME");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_538(iVar0, "FBI4MASKNAME") };
		MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_1623[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1627), 4, "FBI4MASKSTYPE");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_538(iVar0, "FBI4MASKTYPE") };
		MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_1627[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1631), 4, "FBI4SUITS");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_538(iVar0, "FBI4SUIT") };
		MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_1631[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2708), 499, "WARDROBE");
	iVar23 = 0;
	while (iVar23 < 3)
	{
		StringCopy(&Var1, "WARDROBE", 64);
		StringIntConCat(&Var1, iVar23, 64);
		func_527(&(uParam0->f_2708[iVar23 /*166*/]), &Var1);
		iVar23++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_3209), 4, "CLOUD_VEH");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Var1 = { func_538(iVar0, "CLOUD_VEH") };
		MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_3209[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_1580), "PP_DEFAULT_INFO_SET");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_1581), "PP_DEFAULT_CLOTHES_INFO_SET");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_1582), "PP_DEFAULT_STATS_SET");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_3207), "PP_VARS_IN_STATS");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_3208), "PP_JIMMYMODS");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_3213), "PP_CURRENT_PED");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_3214), "PP_PREVIOUS_PED");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_3215), "PP_LAST_KNOWN_PED");
	MISC::STOP_SAVE_STRUCT();
}

void func_527(var uParam0, char* sParam1)//Position - 0x5DEF2
{
	int iVar0;
	int iVar1;
	char cVar2[16];
	
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 166, sParam1);
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 166, "ITEM_BITSET");
	iVar0 = 0;
	while (iVar0 < 15)
	{
		StringCopy(&cVar2, "COMP", 16);
		StringIntConCat(&cVar2, iVar0, 16);
		MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0[iVar0 /*11*/], 11, &cVar2);
		iVar1 = 0;
		while (iVar1 < 10)
		{
			StringCopy(&cVar2, "BITSET", 16);
			StringIntConCat(&cVar2, iVar1, 16);
			MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0 /*11*/][iVar1], &cVar2);
			iVar1++;
		}
		MISC::STOP_SAVE_ARRAY();
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_STRUCT();
}

void func_528(var uParam0, char* sParam1)//Position - 0x5DF7F
{
	int iVar0;
	char cVar1[16];
	
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 74, sParam1);
	MISC::REGISTER_ENUM_TO_SAVE(uParam0, "model");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_1), "modelTrailer");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_2), "fDirtLevel");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3), "fHealth");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4), "iColourCombo");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5), "iColour1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_6), "iColour2");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_7), "iColourExtra1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8), "iColourExtra2");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_9), "bColourCombo");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_10), "bColourExtra");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_11), 13, "EXTRAS");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_11[0]), "Extra0");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_11[1]), "Extra1");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_11[2]), "Extra2");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_11[3]), "Extra3");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_11[4]), "Extra4");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_11[5]), "Extra5");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_11[6]), "Extra6");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_11[7]), "Extra7");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_11[8]), "Extra8");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_11[9]), "Extra9");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_11[10]), "Extra10");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_11[11]), "Extra11");
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_24), "bConvertible");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_25), "iRadioIndex");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_26), "iPlateBack");
	MISC::_REGISTER_TEXT_LABEL_TO_SAVE_2(&(uParam0->f_27), "tlNumberPlate");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_31), 26, "VEH_MOD_ID");
	iVar0 = 0;
	while (iVar0 < 25)
	{
		StringCopy(&cVar1, "MOD_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_31[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_57), 3, "VEH_MOD_VAR");
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&cVar1, "MOD_VAR", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_57[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_60), "iTyreR");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_61), "iTyreG");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_62), "iTyreB");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_63), "iWindowTintColour");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_64), "bTyresCanBurst");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_65), "iLivery");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_66), "iWheelType");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_72), "fEnvEff");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_73), "bIsPlayerVehicle");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_67), "eType");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_69), "iNeonR");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_70), "iNeonG");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_71), "iNeonB");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_68), "iFlags");
	MISC::STOP_SAVE_STRUCT();
}

void func_529(var uParam0, char* sParam1)//Position - 0x5E267
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 1, sParam1);
	MISC::REGISTER_ENUM_TO_SAVE(uParam0, "iStoredTime");
	MISC::STOP_SAVE_STRUCT();
}

void func_530(var uParam0, char* sParam1)//Position - 0x5E287
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 284, sParam1);
	func_532(uParam0, "WEAPON_INFO");
	func_531(&(uParam0->f_133), "DLC_INFO");
	MISC::STOP_SAVE_STRUCT();
}

void func_531(var uParam0, char* sParam1)//Position - 0x5E2B6
{
	int iVar0;
	char cVar1[32];
	
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 151, sParam1);
	iVar0 = 0;
	while (iVar0 < 50)
	{
		StringCopy(&cVar1, "WEAPON_IN_SLOT_", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_ENUM_TO_SAVE(uParam0[iVar0 /*3*/], &cVar1);
		StringCopy(&cVar1, "AMMO_IN_SLOT_", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(&((uParam0[iVar0 /*3*/])->f_1), &cVar1);
		StringCopy(&cVar1, "MOD_IN_SLOT_", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(&((uParam0[iVar0 /*3*/])->f_2), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_532(var uParam0, char* sParam1)//Position - 0x5E337
{
	int iVar0;
	char cVar1[32];
	
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 133, sParam1);
	iVar0 = 0;
	while (iVar0 < 44)
	{
		StringCopy(&cVar1, "WEAPON_IN_SLOT_", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_ENUM_TO_SAVE(uParam0[iVar0 /*3*/], &cVar1);
		StringCopy(&cVar1, "AMMO_IN_SLOT_", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(&((uParam0[iVar0 /*3*/])->f_1), &cVar1);
		StringCopy(&cVar1, "MOD_IN_SLOT_", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(&((uParam0[iVar0 /*3*/])->f_2), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_533(var uParam0, char* sParam1)//Position - 0x5E3B8
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 65, sParam1);
	func_537(&(uParam0->f_13), "DRAWABLE_VARIATION");
	func_536(uParam0, "TEXTURE_VARIATION");
	func_535(&(uParam0->f_26), "PALETTE_VARIATION");
	func_534(&(uParam0->f_39), "PROP_INDEX");
	func_534(&(uParam0->f_49), "PROP_TEXTURE");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_59), "STORED_HAIR");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_60), "HAIR_CHANGE_ITEM");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_61), "HAIR_CHANGE_TYPE");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_62), "STORED_BEARD");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_63), "BEARD_CHANGE_ITEM");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_64), "BEARD_CHANGE_TYPE");
	MISC::STOP_SAVE_STRUCT();
}

void func_534(var uParam0, char* sParam1)//Position - 0x5E45B
{
	int iVar0;
	char cVar1[32];
	int iVar9;
	
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 10, sParam1);
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar9 = iVar0;
		switch (iVar9)
		{
			case 0:
				StringCopy(&cVar1, "ANCHOR_HEAD", 32);
				break;
			
			case 1:
				StringCopy(&cVar1, "ANCHOR_EYES", 32);
				break;
			
			case 2:
				StringCopy(&cVar1, "ANCHOR_EARS", 32);
				break;
			
			case 3:
				StringCopy(&cVar1, "ANCHOR_MOUTH", 32);
				break;
			
			case 4:
				StringCopy(&cVar1, "ANCHOR_LEFT_HAND", 32);
				break;
			
			case 5:
				StringCopy(&cVar1, "ANCHOR_RIGHT_HAND", 32);
				break;
			
			case 6:
				StringCopy(&cVar1, "ANCHOR_LEFT_WRIST", 32);
				break;
			
			case 7:
				StringCopy(&cVar1, "ANCHOR_RIGHT_WRIST", 32);
				break;
			
			case 8:
				StringCopy(&cVar1, "ANCHOR_HIP", 32);
				break;
			
			default:
				StringCopy(&cVar1, "PropDetails", 32);
				StringIntConCat(&cVar1, iVar0, 32);
				break;
		}
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_535(var uParam0, char* sParam1)//Position - 0x5E552
{
	int iVar0;
	char cVar1[32];
	int iVar9;
	
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 13, sParam1);
	iVar0 = 0;
	while (iVar0 < 12)
	{
		iVar9 = iVar0;
		switch (iVar9)
		{
			case 0:
				StringCopy(&cVar1, "PED_COMP_HEAD", 32);
				break;
			
			case 1:
				StringCopy(&cVar1, "PED_COMP_BERD", 32);
				break;
			
			case 2:
				StringCopy(&cVar1, "PED_COMP_HAIR", 32);
				break;
			
			case 3:
				StringCopy(&cVar1, "PED_COMP_TORSO", 32);
				break;
			
			case 4:
				StringCopy(&cVar1, "PED_COMP_LEG", 32);
				break;
			
			case 5:
				StringCopy(&cVar1, "PED_COMP_HAND", 32);
				break;
			
			case 6:
				StringCopy(&cVar1, "PED_COMP_FEET", 32);
				break;
			
			case 7:
				StringCopy(&cVar1, "PED_COMP_TEETH", 32);
				break;
			
			case 8:
				StringCopy(&cVar1, "PED_COMP_SPECIAL", 32);
				break;
			
			case 9:
				StringCopy(&cVar1, "PED_COMP_SPECIAL2", 32);
				break;
			
			case 10:
				StringCopy(&cVar1, "PED_COMP_DECL", 32);
				break;
			
			case 11:
				StringCopy(&cVar1, "PED_COMP_JBIB", 32);
				break;
			
			default:
				StringCopy(&cVar1, "PaletteIDDetails", 32);
				StringIntConCat(&cVar1, iVar0, 32);
				break;
		}
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_536(var uParam0, char* sParam1)//Position - 0x5E67F
{
	int iVar0;
	char cVar1[32];
	int iVar9;
	
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 13, sParam1);
	iVar0 = 0;
	while (iVar0 < 12)
	{
		iVar9 = iVar0;
		switch (iVar9)
		{
			case 0:
				StringCopy(&cVar1, "PED_COMP_HEAD", 32);
				break;
			
			case 1:
				StringCopy(&cVar1, "PED_COMP_BERD", 32);
				break;
			
			case 2:
				StringCopy(&cVar1, "PED_COMP_HAIR", 32);
				break;
			
			case 3:
				StringCopy(&cVar1, "PED_COMP_TORSO", 32);
				break;
			
			case 4:
				StringCopy(&cVar1, "PED_COMP_LEG", 32);
				break;
			
			case 5:
				StringCopy(&cVar1, "PED_COMP_HAND", 32);
				break;
			
			case 6:
				StringCopy(&cVar1, "PED_COMP_FEET", 32);
				break;
			
			case 7:
				StringCopy(&cVar1, "PED_COMP_TEETH", 32);
				break;
			
			case 8:
				StringCopy(&cVar1, "PED_COMP_SPECIAL", 32);
				break;
			
			case 9:
				StringCopy(&cVar1, "PED_COMP_SPECIAL2", 32);
				break;
			
			case 10:
				StringCopy(&cVar1, "PED_COMP_DECL", 32);
				break;
			
			case 11:
				StringCopy(&cVar1, "PED_COMP_JBIB", 32);
				break;
			
			default:
				StringCopy(&cVar1, "DrawableIDDetails", 32);
				StringIntConCat(&cVar1, iVar0, 32);
				break;
		}
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_537(var uParam0, char* sParam1)//Position - 0x5E7AC
{
	int iVar0;
	char cVar1[32];
	int iVar9;
	
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 13, sParam1);
	iVar0 = 0;
	while (iVar0 < 12)
	{
		iVar9 = iVar0;
		switch (iVar9)
		{
			case 0:
				StringCopy(&cVar1, "PED_COMP_HEAD", 32);
				break;
			
			case 1:
				StringCopy(&cVar1, "PED_COMP_BERD", 32);
				break;
			
			case 2:
				StringCopy(&cVar1, "PED_COMP_HAIR", 32);
				break;
			
			case 3:
				StringCopy(&cVar1, "PED_COMP_TORSO", 32);
				break;
			
			case 4:
				StringCopy(&cVar1, "PED_COMP_LEG", 32);
				break;
			
			case 5:
				StringCopy(&cVar1, "PED_COMP_HAND", 32);
				break;
			
			case 6:
				StringCopy(&cVar1, "PED_COMP_FEET", 32);
				break;
			
			case 7:
				StringCopy(&cVar1, "PED_COMP_TEETH", 32);
				break;
			
			case 8:
				StringCopy(&cVar1, "PED_COMP_SPECIAL", 32);
				break;
			
			case 9:
				StringCopy(&cVar1, "PED_COMP_SPECIAL2", 32);
				break;
			
			case 10:
				StringCopy(&cVar1, "PED_COMP_DECL", 32);
				break;
			
			case 11:
				StringCopy(&cVar1, "PED_COMP_JBIB", 32);
				break;
			
			default:
				StringCopy(&cVar1, "TextureIDDetails", 32);
				StringIntConCat(&cVar1, iVar0, 32);
				break;
		}
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

struct<16> func_538(int iParam0, char* sParam1)//Position - 0x5E8D9
{
	struct<16> Var0;
	
	StringCopy(&Var0, "SP", 64);
	StringIntConCat(&Var0, iParam0, 64);
	StringConCat(&Var0, "_", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_539(var uParam0, char* sParam1)//Position - 0x5E904
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 164, sParam1);
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4, "HEAD0");
	MISC::REGISTER_INT_TO_SAVE(uParam0[0], "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(uParam0[1], "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(uParam0[2], "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_4), 4, "BEARD0");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_8), 4, "HAIR0");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_12), 4, "TORSO0");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_12[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_12[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_12[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_16), 4, "TORSO1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_16[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_16[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_16[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_20), 4, "TORSO2");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_20[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_20[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_20[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_24), 4, "TORSO3");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_24[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_24[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_24[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_28), 4, "TORSO4");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_28[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_28[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_28[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_32), 4, "TORSO5");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_32[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_32[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_32[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_36), 4, "TORSO6");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_36[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_36[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_36[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_40), 4, "TORSO7");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_40[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_40[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_40[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_44), 4, "TORSO8");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_44[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_44[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_44[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_48), 4, "TORSO9");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_48[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_48[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_48[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_52), 4, "LEGS0");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_52[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_52[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_52[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_56), 4, "LEGS1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_56[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_56[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_56[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_60), 4, "LEGS2");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_60[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_60[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_60[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_64), 4, "LEGS3");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_64[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_64[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_64[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_68), 4, "HAND0");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_68[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_68[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_68[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_72), 4, "FEET0");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_72[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_72[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_72[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_76), 4, "FEET1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_76[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_76[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_76[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_80), 4, "FEET2");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_80[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_80[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_80[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_84), 4, "FEET3");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_84[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_84[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_84[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_88), 4, "FEET4");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_88[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_88[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_88[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_92), 4, "TEETH0");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_92[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_92[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_92[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_96), 4, "SPEC0");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_96[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_96[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_96[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_100), 4, "SPEC1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_100[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_100[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_100[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_104), 4, "SPEC2");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_104[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_104[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_104[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_108), 4, "SPEC2_0");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_108[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_108[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_108[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_112), 4, "DECL0");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_112[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_112[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_112[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_116), 4, "DECL1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_116[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_116[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_116[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_120), 4, "JBIB0");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_120[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_120[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_120[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_124), 4, "JBIB1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_124[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_124[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_124[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_128), 4, "OUTF0");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_128[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_128[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_128[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_132), 4, "OUTF1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_132[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_132[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_132[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_136), 4, "PROPG0");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_136[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_136[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_136[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_140), 4, "PROP0");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_140[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_140[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_140[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_144), 4, "PROP1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_144[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_144[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_144[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_148), 4, "PROP2");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_148[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_148[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_148[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_152), 4, "PROP3");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_152[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_152[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_152[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_156), 4, "PROP4");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_156[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_156[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_156[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_160), 4, "PROP5");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_160[0]), "AVAILABLE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_160[1]), "ACQUIRED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_160[2]), "NEW");
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_STRUCT();
}

void func_540()//Position - 0x5F3A4
{
	func_549(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT), "STUNT_JUMPS_SAVED_STRUCT");
	func_547(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PROSTITUTE_SAVED_DATA), "PROSTITUTE_SAVED_DATA");
	func_546(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PROSTITUTE_SERVICES_ARRAY), "PROSTITUTE_SERVICES_ARRAY");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.CHOP_HINTS_DISPLAYED), "CHOP_HINTS_DISPLAYED");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WARDROBE_HINTS_DISPLAYED), "WARDROBE_HINTS_DISPLAYED");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.BRIDGES_FLOWN_UNDER_FLAGS), "BRIDGES_FLOWN_UNDER_FLAGS");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.BRIDGES_FLOWN_UNDER_FLAGS_2), "BRIDGES_FLOWN_UNDER_FLAGS_2");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.BRIDGES_FLOWN_UNDER_FLAGS_3), "BRIDGES_FLOWN_UNDER_FLAGS_3");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WILDLIFE_PHOTOGRAPHY_FLAGS), "WILDLIFE_PHOTOGRAPHY_FLAGS");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.CHASE_HELP_TEXT_DISPLAYED_MI), "CHASE_HELP_TEXT_DISPLAYED_MI");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.CHASE_HELP_TEXT_DISPLAYED_RC), "CHASE_HELP_TEXT_DISPLAYED_RC");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.CHASE_HELP_TEXT_DISPLAYED_RE), "CHASE_HELP_TEXT_DISPLAYED_RE");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.EPSCAR_STAGE), "EPSCAR_STAGE");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.EPSCAR_LAST_EMAIL), "EPSCAR_LAST_EMAIL");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.EPSROBES_ROBES_TIME), "EPSROBES_ROBES_TIME");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.EPSROBES_ROBES_DELIVERY_TIME), "EPSROBES_ROBES_DELIVERY_TIME");
	MISC::REGISTER_FLOAT_TO_SAVE(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.EPSDESERT_DISTANCE_RUN), "EPSDESERT_DISTANCE_RUN");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.FOR_SALE_SIGN_DESTROYED_FLAGS), "FOR_SALE_SIGN_DESTROYED_FLAGS");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.HUNTING_HISCORE_FREE_MODE), "HUNTING_HISCORE_FREE_MODE");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.HUNTING_LOWEST_TIME_GOLD), "HUNTING_LOWEST_TIME_GOLD");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.HUNTING_CHALLENGE_DISPLAYED), "HUNTING_CHALLENGE_DISPLAYED");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.HUNTING_WEEK_TIMER), "HUNTING_WEEK_TIMER");
	func_545(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.CHALLENGE_FREE_MODE), "CHALLENGE_FREE_MODE");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.VEHICLE_REPAIR_FRANKLIN), "VEHICLE_REPAIR_FRANKLIN");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.VEHICLE_REPAIR_MICHAEL), "VEHICLE_REPAIR_MICHAEL");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.VEHICLE_REPAIR_TREVOR), "VEHICLE_REPAIR_TREVOR");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.TAXI_HAIL_HELP_PROMPT), "TAXI_HAIL_HELP_PROMPT");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.TAXI_ENTER_HELP_PROMPT), "TAXI_ENTER_HELP_PROMPT");
	func_544(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.LETTER_SCRAPS_SAVED_STRUCT), "LETTER_SCRAPS_SAVED_STRUCT");
	func_544(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.SPACESHIP_PARTS_SAVED_STRUCT), "SPACESHIP_PARTS_SAVED_STRUCT");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.FIB4_GETAWAY_STATE), "FIB4_GETAWAY_STATE");
	func_543(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.WEBSITE_SUBSCRIPTION_ARRAY), "WEBSITE_SUBSCRIPTION_ARRAY");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.MURDER_MYSTERY_PROGRESS), "MURDER_MYSTERY_PROGRESS");
	MISC::REGISTER_ENUM_TO_SAVE(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.NOIR_EFFECTS_STATUS), "NOIR_EFFECTS_STATUS");
	func_542(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PHOTOGRAPHY_MONKEY_FLAGS), "PHOTOGRAPHY_MONKEY_FLAGS");
	func_541(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PEYOTE_PICKUP_OF_TYPE_FOUND), "PEYOTE_PICKUP_OF_TYPE_FOUND");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PEYOTE_ANIMAL_SEEN), "PEYOTE_ANIMAL_SEEN");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PEYOTE_PROGRESSION_COMPLETE), "PEYOTE_PROGRESSION_COMPLETE");
}

void func_541(var uParam0, char* sParam1)//Position - 0x5F656
{
	int iVar0;
	char cVar1[64];
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 5, sParam1);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&cVar1, sParam1, 64);
		StringConCat(&cVar1, "_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_542(var uParam0, char* sParam1)//Position - 0x5F69E
{
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 3, sParam1);
	MISC::REGISTER_INT_TO_SAVE(uParam0[0], "PHOTOGRAPHY_MONKEY_FLAGS_1");
	MISC::REGISTER_INT_TO_SAVE(uParam0[1], "PHOTOGRAPHY_MONKEY_FLAGS_2");
	MISC::STOP_SAVE_ARRAY();
}

void func_543(var uParam0, char* sParam1)//Position - 0x5F6CF
{
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4, sParam1);
	MISC::REGISTER_BOOL_TO_SAVE(uParam0[0], "REALITY_MILL_MICHAEL");
	MISC::REGISTER_BOOL_TO_SAVE(uParam0[1], "REALITY_MILL_FRANKLIN");
	MISC::REGISTER_BOOL_TO_SAVE(uParam0[2], "REALITY_MILL_TREVOR");
	MISC::STOP_SAVE_ARRAY();
}

void func_544(var uParam0, char* sParam1)//Position - 0x5F70E
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 3, sParam1);
	MISC::REGISTER_INT_TO_SAVE(uParam0, "GLOBAL_SCRAP_DATA_iScrap0to31");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "GLOBAL_SCRAP_DATA_iScrap32to63");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2), "GLOBAL_SCRAP_DATA_bMissionActive");
	MISC::STOP_SAVE_STRUCT();
}

void func_545(var uParam0, char* sParam1)//Position - 0x5F748
{
	char cVar0[32];
	int iVar8;
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4, sParam1);
	iVar8 = 0;
	while (iVar8 < *uParam0)
	{
		StringCopy(&cVar0, sParam1, 32);
		StringIntConCat(&cVar0, iVar8, 32);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar8], &cVar0);
		iVar8++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_546(var uParam0, char* sParam1)//Position - 0x5F789
{
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4, sParam1);
	MISC::REGISTER_INT_TO_SAVE(uParam0[0], "PROSTITUTE_SERVICES_MICHAEL");
	MISC::REGISTER_INT_TO_SAVE(uParam0[1], "PROSTITUTE_SERVICES_FRANKLIN");
	MISC::REGISTER_INT_TO_SAVE(uParam0[2], "PROSTITUTE_SERVICES_TREVOR");
	MISC::STOP_SAVE_ARRAY();
}

void func_547(var uParam0, char* sParam1)//Position - 0x5F7C8
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 89, sParam1);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		switch (iVar0)
		{
			case 0:
				StringCopy(&Var1, "U_PRO_BABS", 32);
				break;
			
			case 1:
				StringCopy(&Var1, "U_PRO_DANA", 32);
				break;
			
			case 2:
				StringCopy(&Var1, "U_PRO_LIZZIE", 32);
				break;
			
			case 3:
				StringCopy(&Var1, "U_PRO_AMANDA", 32);
				break;
			
			case 4:
				StringCopy(&Var1, "U_PRO_ASHLEY", 32);
				break;
			
			case 5:
				StringCopy(&Var1, "U_PRO_KRISTEN", 32);
				break;
			
			case 6:
				StringCopy(&Var1, "U_PRO_SASHA", 32);
				break;
			
			case 7:
				StringCopy(&Var1, "U_PRO_JACQUELINE", 32);
				break;
			
			default:
				StringCopy(&Var1, "Prostitute_UDF", 32);
				StringIntConCat(&Var1, iVar0, 32);
				break;
		}
		func_548(uParam0[iVar0 /*11*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_548(var uParam0, char* sParam1)//Position - 0x5F8A9
{
	char cVar0[64];
	char cVar16[64];
	
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, "_iNumFdAry", 64);
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 11, sParam1);
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4, &cVar0);
	MISC::REGISTER_INT_TO_SAVE(uParam0[0], "iMetMichael");
	MISC::REGISTER_INT_TO_SAVE(uParam0[1], "iMetFranklin");
	MISC::REGISTER_INT_TO_SAVE(uParam0[2], "iMetTrevor");
	MISC::STOP_SAVE_ARRAY();
	StringCopy(&cVar16, sParam1, 64);
	StringConCat(&cVar16, "_CmpDrawAry", 64);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_4), 3, &cVar16);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4[0]), "iUPCmpDrawHEAD");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4[1]), "iUPCmpDrawHAIR");
	MISC::STOP_SAVE_ARRAY();
	StringCopy(&cVar16, sParam1, 64);
	StringConCat(&cVar16, "_CmpTextAry", 64);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_7), 3, &cVar16);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_7[0]), "iUPCmpTextHEAD");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_7[1]), "iUPCmpTextHAIR");
	MISC::STOP_SAVE_ARRAY();
	StringCopy(&cVar16, sParam1, 64);
	StringConCat(&cVar16, "_ModelType", 64);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10), &cVar16);
	MISC::STOP_SAVE_STRUCT();
}

void func_549(var uParam0, char* sParam1)//Position - 0x5F99A
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 1, sParam1);
	MISC::REGISTER_INT_TO_SAVE(uParam0, "STUNT_JUMPS_iStuntJumpsCompleted");
	MISC::STOP_SAVE_STRUCT();
}

void func_550()//Position - 0x5F9BA
{
	func_551(&(Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT), "SOCIAL_SAVED_DATA_STRUCT");
}

void func_551(var uParam0, char* sParam1)//Position - 0x5F9D2
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 292, sParam1);
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 130, "CAR_APP_DATA");
	func_554(uParam0[0 /*43*/], "CAR_APP_DATA_M");
	func_554(uParam0[1 /*43*/], "CAR_APP_DATA_F");
	func_554(uParam0[2 /*43*/], "CAR_APP_DATA_T");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_130), 124, "CAR_APP_ORDER");
	func_553(&(uParam0->f_130[0 /*41*/]), "CAR_APP_ORDER_M");
	func_553(&(uParam0->f_130[1 /*41*/]), "CAR_APP_ORDER_F");
	func_553(&(uParam0->f_130[2 /*41*/]), "CAR_APP_ORDER_T");
	MISC::STOP_SAVE_ARRAY();
	func_552(&(uParam0->f_254), "DOG_APP_DATA");
	MISC::STOP_SAVE_STRUCT();
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_260), "bSingleplayeDataWiped");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_261), "bCarAppPlateSet");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_262), "bCarAppUsed");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_263), "bDogAppUsed");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_264), "bUpdateDogLocation");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_265), "bDeleteCarData");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_266), "iOrderToDelete");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_271), "iCarAppPlateBack");
	MISC::_REGISTER_TEXT_LABEL_TO_SAVE_2(&(uParam0->f_267), "tlCarAppPlateText");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_272), "iGameUID");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_273), 4, "PED_UNLOCK");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_273[0]), "0");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_273[1]), "1");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_273[2]), "2");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_277), 4, "VEH_SENT");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_277[0]), "0");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_277[1]), "1");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_277[2]), "2");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_281), 4, "FIRST_ORDER");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_281[0]), "0");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_281[1]), "1");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_281[2]), "2");
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_285), 4, "ORDER_COUNT");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_285[0]), "0");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_285[1]), "1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_285[2]), "2");
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_289), "HelpTextTriggered");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_290), "FacebookPostsMadeBitset");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_291), "ActivityFeedPostsMadeBitset");
}

void func_552(var uParam0, char* sParam1)//Position - 0x5FC42
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 6, sParam1);
	MISC::REGISTER_FLOAT_TO_SAVE(uParam0, "fHappiness");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_1), "fCleanliness");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_2), "fHunger");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3), "iTrainingLevel");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4), "iCollar");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_5), "bAppDataReceived");
	MISC::STOP_SAVE_STRUCT();
}

void func_553(var uParam0, char* sParam1)//Position - 0x5FCA3
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

void func_554(var uParam0, char* sParam1)//Position - 0x5FE7E
{
	int iVar0;
	char cVar1[16];
	
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 43, sParam1);
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

void func_555()//Position - 0x6008E
{
	func_556(&(Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT), "SHOP_SAVED_DATA_STRUCT");
}

void func_556(var uParam0, char* sParam1)//Position - 0x600A6
{
	int iVar0;
	char cVar1[16];
	
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 686, sParam1);
	func_558(uParam0, "SHOP_PROPERTIES");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_45), "SHOP_DEFAULT_DATA_SET");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_46), "SHOP_TYPES_VISITED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_47), "iHairdoShopVisits");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_48), "iClothesShopVisits");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_49), "iTattooShopVisits");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_50), "iCarmodShopVisits");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_51), "iGunShopVisits");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_55), "iGunShopHelpCount");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_52), "iGunShopPostTrev2Dialogue");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_53), "iGunShopPostLamar1Dialogue");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_54), "iClothesShopPostLester1Dialogue");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_57), 16, "CARMOD_DATA");
	func_557(&(uParam0->f_57[0 /*5*/]), "P0_CARMOD_DATA");
	func_557(&(uParam0->f_57[1 /*5*/]), "P1_CARMOD_DATA");
	func_557(&(uParam0->f_57[2 /*5*/]), "P2_CARMOD_DATA");
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_56), "FIRST_MODSHOP_REPAIR");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_684), "SHOP_BARBER_BLIP_HELP_SHOWN");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_685), "SHOP_ARMOUR_HELP_SHOWN");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_678), "CONTENT_VEHICLES");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_679), "CONTENT_WEAPONS");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_680), "CONTENT_CLOTHES");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_681), "CONTENT_HAIRDOS");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_682), "CONTENT_TATTOOS");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_683), "CONTENT_GAME");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_73), 605, "VIEWED_MODS");
	iVar0 = 0;
	while (iVar0 < uParam0->f_73)
	{
		StringCopy(&cVar1, "VIEWED_MODS", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_73[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_STRUCT();
}

void func_557(var uParam0, char* sParam1)//Position - 0x6025D
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 5, sParam1);
	MISC::REGISTER_BOOL_TO_SAVE(uParam0, "PROCESSING");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_1), "READY");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2), "MESSAGE_SENT");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3), "HOURS_TO_COMPLETE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4), "TYPE");
	MISC::STOP_SAVE_STRUCT();
}

void func_558(var uParam0, char* sParam1)//Position - 0x602B1
{
	int iVar0;
	char cVar1[32];
	
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 45, sParam1);
	iVar0 = 0;
	while (iVar0 < 44)
	{
		StringCopy(&cVar1, "SHOP_", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_559()//Position - 0x602F8
{
	func_560(&(Global_SAVE_DATA.RAMPAGE_SAVED_ARRAY), "RAMPAGE_SAVED_ARRAY");
}

void func_560(var uParam0, char* sParam1)//Position - 0x60310
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 11, sParam1);
	func_561(uParam0, "structRampagePlayerData");
	MISC::STOP_SAVE_STRUCT();
}

void func_561(var uParam0, char* sParam1)//Position - 0x60331
{
	int iVar0;
	struct<4> Var1;
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 11, sParam1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		StringCopy(&Var1, "Rampage", 32);
		StringIntConCat(&Var1, iVar0 + 1, 32);
		func_562(uParam0[iVar0 /*2*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_562(var uParam0, char* sParam1)//Position - 0x60378
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 2, sParam1);
	MISC::REGISTER_INT_TO_SAVE(uParam0, "MedalIndex");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "HighScore");
	MISC::STOP_SAVE_STRUCT();
}

void func_563()//Position - 0x603A5
{
	func_564(&(Global_SAVE_DATA.PILOT_SCHOOL_SAVED_ARRAY), "PILOT_SCHOOL_SAVED_ARRAY");
}

void func_564(var uParam0, char* sParam1)//Position - 0x603BD
{
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 364, sParam1);
	func_565(uParam0[0 /*121*/], "structPilotSchool_p0");
	func_565(uParam0[1 /*121*/], "structPilotSchool_p1");
	func_565(uParam0[2 /*121*/], "structPilotSchool_p2");
	MISC::STOP_SAVE_ARRAY();
}

void func_565(var uParam0, char* sParam1)//Position - 0x603FE
{
	int iVar0;
	struct<4> Var1;
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 121, sParam1);
	iVar0 = 0;
	while (iVar0 < 12)
	{
		switch (iVar0)
		{
			case 0:
				StringCopy(&Var1, "PSC_Takeoff", 32);
				break;
			
			case 1:
				StringCopy(&Var1, "PSC_Landing", 32);
				break;
			
			case 2:
				StringCopy(&Var1, "PSC_Inverted", 32);
				break;
			
			case 3:
				StringCopy(&Var1, "PSC_Knifing", 32);
				break;
			
			case 6:
				StringCopy(&Var1, "PSC_loopTheLoop", 32);
				break;
			
			case 4:
				StringCopy(&Var1, "PSC_FlyLow", 32);
				break;
			
			case 5:
				StringCopy(&Var1, "PSC_DaringLanding", 32);
				break;
			
			case 11:
				StringCopy(&Var1, "PSC_planeCourse", 32);
				break;
			
			case 7:
				StringCopy(&Var1, "PSC_heliCourse", 32);
				break;
			
			case 8:
				StringCopy(&Var1, "PSC_heliSpeedRun", 32);
				break;
			
			case 9:
				StringCopy(&Var1, "PSC_parachuteOntoTarget", 32);
				break;
			
			case 10:
				StringCopy(&Var1, "PSC_chuteOntoMovingTarg", 32);
				break;
			
			default:
				StringCopy(&Var1, "Pilot School", 32);
				StringIntConCat(&Var1, iVar0, 32);
				break;
		}
		func_566(uParam0[iVar0 /*10*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_566(var uParam0, char* sParam1)//Position - 0x60524
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 10, sParam1);
	MISC::REGISTER_FLOAT_TO_SAVE(uParam0, "ElapsedTime");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_1), "LastElapsedTime");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_3), "LandingDistance");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_2), "LastLandingDistance");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_4), "Multiplier");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5), "CheckpointCount");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_6), "FormationTimer");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_7), "HasPassedLesson");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_8), "eMedal");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_9), "eLastMedal");
	MISC::STOP_SAVE_STRUCT();
}

void func_567()//Position - 0x605BA
{
	func_568(&(Global_SAVE_DATA.STRIP_CLUB_SAVED_ARRAY), "STRIP_CLUB_SAVED_ARRAY");
}

void func_568(var uParam0, char* sParam1)//Position - 0x605D1
{
	int iVar0;
	struct<8> Var1;
	int iVar17;
	
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 425, sParam1);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iVar17 = iVar0;
		switch (iVar17)
		{
			case 0:
				StringCopy(&Var1, "SAVED_STRIP_CLUB_MICHAEL", 64);
				break;
			
			case 1:
				StringCopy(&Var1, "SAVED_STRIP_CLUB_FRANKLIN", 64);
				break;
			
			case 2:
				StringCopy(&Var1, "SAVED_STRIP_CLUB_TREVOR", 64);
				break;
			
			case 3:
				StringCopy(&Var1, "STRIP_CLUB_PLAYER_CHAR_MULTI_0", 64);
				break;
			
			case 4:
				StringCopy(&Var1, "STRIP_CLUB_PLAYER_CHAR_MULTI_1", 64);
				break;
			
			case 5:
				StringCopy(&Var1, "STRIP_CLUB_PLAYER_CHAR_MULTI_2", 64);
				break;
			
			case 6:
				StringCopy(&Var1, "STRIP_CLUB_PLAYER_CHAR_MULTI_3", 64);
				break;
			
			case 7:
				StringCopy(&Var1, "STRIP_CLUB_PLAYER_CHAR_MULTI_4", 64);
				break;
			
			default:
				StringCopy(&Var1, "Strip Club Saved", 64);
				StringIntConCat(&Var1, iVar0, 64);
				break;
		}
		func_569(uParam0[iVar0 /*53*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_569(var uParam0, char* sParam1)//Position - 0x606B7
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 53, sParam1);
	func_572(uParam0, "STRIP_CLUBS");
	func_570(&(uParam0->f_2), "BOOTY_CALLS");
	MISC::STOP_SAVE_STRUCT();
}

void func_570(var uParam0, char* sParam1)//Position - 0x606E5
{
	int iVar0;
	struct<4> Var1;
	int iVar9;
	
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 51, sParam1);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar9 = iVar0;
		switch (iVar9)
		{
			case 0:
				StringCopy(&Var1, "BC_STRIPPER_JULIET", 32);
				break;
			
			case 1:
				StringCopy(&Var1, "BC_STRIPPER_NIKKI", 32);
				break;
			
			case 2:
				StringCopy(&Var1, "BC_STRIPPER_CHASTITY", 32);
				break;
			
			case 3:
				StringCopy(&Var1, "BC_STRIPPER_CHEETAH", 32);
				break;
			
			case 4:
				StringCopy(&Var1, "BC_STRIPPER_SAPPHIRE", 32);
				break;
			
			case 5:
				StringCopy(&Var1, "BC_STRIPPER_INFERNUS", 32);
				break;
			
			case 6:
				StringCopy(&Var1, "BC_STRIPPER_FUFU", 32);
				break;
			
			case 7:
				StringCopy(&Var1, "BC_STRIPPER_PEACH", 32);
				break;
			
			case 8:
				StringCopy(&Var1, "BC_TAXI_LIZ", 32);
				break;
			
			case 9:
				StringCopy(&Var1, "BC_HITCHER_GIRL", 32);
				break;
			
			default:
				StringCopy(&Var1, "BootyCall", 32);
				StringIntConCat(&Var1, iVar0, 32);
				break;
		}
		func_571(uParam0[iVar0 /*5*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_571(var uParam0, char* sParam1)//Position - 0x607EE
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 5, sParam1);
	MISC::REGISTER_INT_TO_SAVE(uParam0, "bootyCallLike");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "bootyCallPlayerDenials");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2), "bootyCallSextsSent");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3), "bootyCallBCCBits");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_4), "bootyCallActivated");
	MISC::STOP_SAVE_STRUCT();
}

void func_572(var uParam0, char* sParam1)//Position - 0x60842
{
	int iVar0;
	struct<4> Var1;
	int iVar9;
	
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 2, sParam1);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar9 = iVar0;
		switch (iVar9)
		{
			case 0:
				StringCopy(&Var1, "STRIP_CLUB_LOW", 32);
				break;
			
			default:
				StringCopy(&Var1, "Strip Club", 32);
				StringIntConCat(&Var1, iVar0, 32);
				break;
		}
		func_573(uParam0[iVar0], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_573(var uParam0, char* sParam1)//Position - 0x608A7
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 1, sParam1);
	MISC::REGISTER_INT_TO_SAVE(uParam0, "stripClubReputation");
	MISC::STOP_SAVE_STRUCT();
}

void func_574()//Position - 0x608C7
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_SAVE_DATA.HEIST_CHOICE_HELP_DISPLAYED_ARRAY), 242, "HEIST_DATA_STRUCT");
	func_587(&(Global_SAVE_DATA.HEIST_CHOICE_HELP_DISPLAYED_ARRAY), "HEIST_CHOICE_HELP_DISPLAYED_ARRAY");
	func_586(&(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_CREW_HELP_DISPLAYED_ARRAY), "HEIST_CREW_HELP_DISPLAYED_ARRAY");
	func_584(&(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_SELECTED_CREW_ARRAY), "HEIST_SELECTED_CREW_ARRAY");
	func_582(&(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_CREW_ACTIVE_DATA_ARRAY), "HEIST_CREW_ACTIVE_DATA_ARRAY");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.HEIST_DATA_STRUCT.Crew_Unlocked_Bitset), "Crew_Unlocked_Bitset");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.HEIST_DATA_STRUCT.Crew_Used_Bitset), "Crew_Used_Bitset");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.HEIST_DATA_STRUCT.Crew_Dead_Bitset), "Crew_Dead_Bitset");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.HEIST_DATA_STRUCT.Crew_Dialogue_Bitset), "Crew_Dialogue_Bitset");
	func_581(&(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_DISPLAY_GROUP_VISIBLE_ARRAY), "HEIST_DISPLAY_GROUP_VISIBLE_ARRAY");
	func_575(&(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT), "HEIST_END_SCREEN_DATA_STRUCT");
	MISC::STOP_SAVE_STRUCT();
}

void func_575(var uParam0, char* sParam1)//Position - 0x6098C
{
	int iVar0;
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 116, sParam1);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		switch (iVar0)
		{
			case 0:
				func_576(uParam0[iVar0 /*23*/], "HEIST_END_SCREEN_JEWEL");
				break;
			
			case 1:
				func_576(uParam0[iVar0 /*23*/], "HEIST_END_SCREEN_DOCKS");
				break;
			
			case 2:
				func_576(uParam0[iVar0 /*23*/], "HEIST_END_SCREEN_RURAL_BANK");
				break;
			
			case 3:
				func_576(uParam0[iVar0 /*23*/], "HEIST_END_SCREEN_AGENCY");
				break;
			
			case 4:
				func_576(uParam0[iVar0 /*23*/], "HEIST_END_SCREEN_FINALE");
				break;
		}
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_576(var uParam0, char* sParam1)//Position - 0x60A33
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 23, sParam1);
	MISC::REGISTER_INT_TO_SAVE(uParam0, "Potential_Take");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "Actual_Take");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10), "Time_Taken");
	func_580(&(uParam0->f_2), "HEIST_END_SCREEN_PLAYER_TAKE");
	func_579(&(uParam0->f_6), "HEIST_END_SCREEN_PLAYER_PERC");
	func_578(&(uParam0->f_11), "HEIST_END_SCREEN_CREW_STATUS");
	func_577(&(uParam0->f_17), "HEIST_END_SCREEN_CREW_TAKE");
	MISC::STOP_SAVE_STRUCT();
}

void func_577(var uParam0, char* sParam1)//Position - 0x60AA2
{
	int iVar0;
	char cVar1[16];
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 6, sParam1);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringCopy(&cVar1, "Crew_Take_", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_578(var uParam0, char* sParam1)//Position - 0x60AE4
{
	int iVar0;
	char cVar1[16];
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 6, sParam1);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringCopy(&cVar1, "Crew_Status_", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_ENUM_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_579(var uParam0, char* sParam1)//Position - 0x60B26
{
	int iVar0;
	char cVar1[16];
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4, sParam1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(&cVar1, "Plyr_Perc_", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_FLOAT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_580(var uParam0, char* sParam1)//Position - 0x60B68
{
	int iVar0;
	char cVar1[16];
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4, sParam1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(&cVar1, "Plyr_Take_", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_581(var uParam0, char* sParam1)//Position - 0x60BAA
{
	int iVar0;
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 6, sParam1);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		switch (iVar0)
		{
			case 0:
				MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], "Jewel_Display_Group_Bitset");
				break;
			
			case 1:
				MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], "Docks_Display_Group_Bitset");
				break;
			
			case 2:
				MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], "Rural_Display_Group_Bitset");
				break;
			
			case 3:
				MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], "Agency_Display_Group_Bitset");
				break;
			
			case 4:
				MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], "Finale_Display_Group_Bitset");
				break;
		}
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_582(var uParam0, char* sParam1)//Position - 0x60C50
{
	int iVar0;
	struct<4> Var1;
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 43, sParam1);
	iVar0 = 0;
	while (iVar0 < 14)
	{
		StringCopy(&Var1, "CREW_ACTIVE_DATA_STRUCT_", 32);
		StringIntConCat(&Var1, iVar0, 32);
		func_583(uParam0[iVar0 /*3*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_583(var uParam0, char* sParam1)//Position - 0x60C94
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 3, sParam1);
	MISC::REGISTER_ENUM_TO_SAVE(uParam0, "Skill");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "StatsA");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2), "StatsB");
	MISC::STOP_SAVE_STRUCT();
}

void func_584(var uParam0, char* sParam1)//Position - 0x60CCE
{
	int iVar0;
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 61, sParam1);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		switch (iVar0)
		{
			case 0:
				func_585(uParam0[iVar0 /*6*/], "CREW_ARRAY_EMPTY");
				break;
			
			case 1:
				func_585(uParam0[iVar0 /*6*/], "CREW_ARRAY_JEWEL_STEALTH");
				break;
			
			case 2:
				func_585(uParam0[iVar0 /*6*/], "CREW_ARRAY_JEWEL_HIGH_IMPACT");
				break;
			
			case 4:
				func_585(uParam0[iVar0 /*6*/], "CREW_ARRAY_DOCKS_DEEP_SEA");
				break;
			
			case 3:
				func_585(uParam0[iVar0 /*6*/], "CREW_ARRAY_DOCKS_BLOW_UP_BOAT");
				break;
			
			case 5:
				func_585(uParam0[iVar0 /*6*/], "CREW_ARRAY_RURAL_NO_TANK");
				break;
			
			case 6:
				func_585(uParam0[iVar0 /*6*/], "CREW_ARRAY_AGENCY_FIRETRUCK");
				break;
			
			case 7:
				func_585(uParam0[iVar0 /*6*/], "CREW_ARRAY_AGENCY_HELICOPTER");
				break;
			
			case 8:
				func_585(uParam0[iVar0 /*6*/], "CREW_ARRAY_FINALE_TRAFFCONT");
				break;
			
			case 9:
				func_585(uParam0[iVar0 /*6*/], "CREW_ARRAY_FINALE_HELI");
				break;
			
			default:
				break;
		}
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_585(var uParam0, char* sParam1)//Position - 0x60DF1
{
	int iVar0;
	char cVar1[16];
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 6, sParam1);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringCopy(&cVar1, "Crew_Slot_", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_ENUM_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_586(var uParam0, char* sParam1)//Position - 0x60E33
{
	int iVar0;
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 6, sParam1);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		switch (iVar0)
		{
			case 0:
				MISC::REGISTER_BOOL_TO_SAVE(uParam0[iVar0], "Jewel_Crew_Help_Displayed");
				break;
			
			case 1:
				MISC::REGISTER_BOOL_TO_SAVE(uParam0[iVar0], "Docks_Crew_Help_Displayed");
				break;
			
			case 2:
				MISC::REGISTER_BOOL_TO_SAVE(uParam0[iVar0], "Rural_Crew_Help_Displayed");
				break;
			
			case 3:
				MISC::REGISTER_BOOL_TO_SAVE(uParam0[iVar0], "Agency_Crew_Help_Displayed");
				break;
			
			case 4:
				MISC::REGISTER_BOOL_TO_SAVE(uParam0[iVar0], "Finale_Crew_Help_Displayed");
				break;
		}
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_587(var uParam0, char* sParam1)//Position - 0x60ED9
{
	int iVar0;
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 6, sParam1);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		switch (iVar0)
		{
			case 0:
				MISC::REGISTER_BOOL_TO_SAVE(uParam0[iVar0], "Jewel_Choice_Help_Displayed");
				break;
			
			case 1:
				MISC::REGISTER_BOOL_TO_SAVE(uParam0[iVar0], "Docks_Choice_Help_Displayed");
				break;
			
			case 2:
				MISC::REGISTER_BOOL_TO_SAVE(uParam0[iVar0], "Rural_Choice_Help_Displayed");
				break;
			
			case 3:
				MISC::REGISTER_BOOL_TO_SAVE(uParam0[iVar0], "Agency_Choice_Help_Displayed");
				break;
			
			case 4:
				MISC::REGISTER_BOOL_TO_SAVE(uParam0[iVar0], "Finale_Choice_Help_Displayed");
				break;
		}
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_588()//Position - 0x60F7F
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_SAVE_DATA.MF_STRANDS_TO_OVERRIDE_ARRAY), 33, "FLOW_CUSTOM_STRUCT");
	func_594(&(Global_SAVE_DATA.MF_STRANDS_TO_OVERRIDE_ARRAY), "MF_STRANDS_TO_OVERRIDE_ARRAY");
	func_593(&(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.MF_COMMAND_POINTER_OVERRIDE_ARRAY), "MF_COMMAND_POINTER_OVERRIDE_ARRAY");
	func_592(&(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.MF_COMMAND_POINTER_HASH_ID_ARRAY), "MF_COMMAND_POINTER_HASH_ID_ARRAY");
	func_591(&(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.MF_MISSION_TO_UNCOMPLETE), "MF_MISSION_TO_UNCOMPLETE");
	func_590(&(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.MF_APPLY_ON_MP_SWITCH_ONLY), "MF_APPLY_ON_MP_SWITCH_ONLY");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.numberStoredOverrides), "numberStoredOverrides");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.iMissionsCompleted), "iMissionsCompleted");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.iMissionGolds), "iMissionGolds");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.wasFadedOut), "wasFadedOut");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.wasFadedOut_switch), "wasFadedOut_switch");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.spInitBitset), "spInitBitset");
	func_589(&(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.MF_MISS_FIRST_ACTIVATE_ARRAY), "MF_MISS_FIRST_ACTIVATE_ARRAY");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.iFirstPersonCoverHelpCountMission), "iFirstPersonCoverHelpCountMission");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.iFirstPersonCoverHelpCountFlow), "iFirstPersonCoverHelpCountFlow");
	MISC::REGISTER_INT_TO_SAVE(&(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.iVehDuckHelpCount), "iVehDuckHelpCount");
	MISC::STOP_SAVE_STRUCT();
}

void func_589(var uParam0, char* sParam1)//Position - 0x610A9
{
	int iVar0;
	char cVar1[64];
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4, sParam1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(&cVar1, "FIRST_ACTIVATION_BITSET_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_590(var uParam0, char* sParam1)//Position - 0x610EB
{
	int iVar0;
	char cVar1[64];
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4, sParam1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(&cVar1, "APPLY_ON_MP_SWITCH_ONLY_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		MISC::REGISTER_BOOL_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_591(var uParam0, char* sParam1)//Position - 0x6112D
{
	int iVar0;
	char cVar1[64];
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4, sParam1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(&cVar1, "MISSION_TO_UNCOMPLETE_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		MISC::REGISTER_ENUM_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_592(var uParam0, char* sParam1)//Position - 0x6116F
{
	int iVar0;
	char cVar1[64];
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4, sParam1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(&cVar1, "COMMAND_POINTER_HASH_ID_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_593(var uParam0, char* sParam1)//Position - 0x611B1
{
	int iVar0;
	char cVar1[64];
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4, sParam1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(&cVar1, "COMMAND_POINTER_OVERRIDE_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_594(var uParam0, char* sParam1)//Position - 0x611F3
{
	int iVar0;
	char cVar1[64];
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 4, sParam1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(&cVar1, "STRAND_TO_OVERRIDE_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		MISC::REGISTER_ENUM_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_595()//Position - 0x61235
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(Global_SAVE_DATA.isGameflowActive), 929, "FLOW_STRUCT");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.isGameflowActive), "isGameflowActive");
	MISC::REGISTER_BOOL_TO_SAVE(&(Global_SAVE_DATA.FLOW_STRUCT.flowCompleted), "flowCompleted");
	func_603(&(Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY), "MF_STRANDS_ARRAY");
	func_598(&(Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT), "MF_CONTROLS_STRUCT");
	func_596(&(Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY), "MF_MISSION_ARRAY");
	MISC::STOP_SAVE_STRUCT();
}

void func_596(var uParam0, char* sParam1)//Position - 0x612AD
{
	int iVar0;
	struct<8> Var1;
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 601, sParam1);
	iVar0 = 0;
	while (iVar0 < 100)
	{
		StringCopy(&Var1, "MF_MISSION_STRUCT_", 64);
		StringIntConCat(&Var1, iVar0, 64);
		func_597(uParam0[iVar0 /*6*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_597(var uParam0, char* sParam1)//Position - 0x612F2
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 6, sParam1);
	MISC::REGISTER_BOOL_TO_SAVE(uParam0, "completed");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "missionFailsNoProgress");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2), "missionFailsTotal");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3), "iCompletionOrder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4), "iScore");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_5), "fStatCompletion");
	MISC::STOP_SAVE_STRUCT();
}

void func_598(var uParam0, char* sParam1)//Position - 0x61353
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 229, sParam1);
	func_602(uParam0, "MF_CONTROL_SYNCIDS");
	func_601(&(uParam0->f_58), "MF_CONTROL_FLAGIDS");
	func_600(&(uParam0->f_203), "MF_CONTROL_INTIDS");
	func_599(&(uParam0->f_217), "MF_CONTROL_BITSETIDS");
	MISC::STOP_SAVE_STRUCT();
}

void func_599(var uParam0, char* sParam1)//Position - 0x6139B
{
	int iVar0;
	char cVar1[32];
	int iVar9;
	
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 12, sParam1);
	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar9 = iVar0;
		switch (iVar9)
		{
			case 0:
				StringCopy(&cVar1, "BITS_MINIGAME_ACTIVE", 32);
				break;
			
			case 1:
				StringCopy(&cVar1, "BITS_H_DISABLE_BOARD_EXIT", 32);
				break;
			
			case 2:
				StringCopy(&cVar1, "BITS_H_TOGGLE_BOARD", 32);
				break;
			
			case 3:
				StringCopy(&cVar1, "BITS_H_POI_OVERVIEW_DONE", 32);
				break;
			
			case 4:
				StringCopy(&cVar1, "BITS_H_CREW_SELECTED", 32);
				break;
			
			case 5:
				StringCopy(&cVar1, "BITS_H_CHOICE_SELECTED", 32);
				break;
			
			case 6:
				StringCopy(&cVar1, "BITS_FR_CHANGED_HAIRCUT", 32);
				break;
			
			case 7:
				StringCopy(&cVar1, "BITS_FR_CHANGED_OUTFIT", 32);
				break;
			
			case 8:
				StringCopy(&cVar1, "BITS_MI_VISITED_GYM", 32);
				break;
			
			case 9:
				StringCopy(&cVar1, "BITS_RST_FLOWLAUNCH_SCS1", 32);
				break;
			
			case 10:
				StringCopy(&cVar1, "BITS_RST_FLOWLAUNCH_SCS2", 32);
				break;
			
			default:
				StringCopy(&cVar1, "BitsetIDDetails", 32);
				StringIntConCat(&cVar1, iVar0, 32);
				break;
		}
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_600(var uParam0, char* sParam1)//Position - 0x614B6
{
	int iVar0;
	char cVar1[32];
	int iVar9;
	
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 14, sParam1);
	iVar0 = 0;
	while (iVar0 < 13)
	{
		iVar9 = iVar0;
		switch (iVar9)
		{
			case 0:
				StringCopy(&cVar1, "INT_H_TRIGGER_HEIST", 32);
				break;
			
			case 1:
				StringCopy(&cVar1, "INT_H_TRIGGER_MISSION", 32);
				break;
			
			case 2:
				StringCopy(&cVar1, "INT_H_BOARD_M_JEWEL", 32);
				break;
			
			case 3:
				StringCopy(&cVar1, "INT_H_BOARD_M_DOCKS", 32);
				break;
			
			case 4:
				StringCopy(&cVar1, "INT_H_BOARD_M_RURAL", 32);
				break;
			
			case 5:
				StringCopy(&cVar1, "INT_H_BOARD_M_AGENCY", 32);
				break;
			
			case 6:
				StringCopy(&cVar1, "INT_H_BOARD_M_FINALE", 32);
				break;
			
			case 7:
				StringCopy(&cVar1, "INT_HEIST_CHOICE_JEWEL", 32);
				break;
			
			case 8:
				StringCopy(&cVar1, "INT_HEIST_CHOICE_DOCKS", 32);
				break;
			
			case 9:
				StringCopy(&cVar1, "INT_HEIST_CHOICE_RURAL", 32);
				break;
			
			case 10:
				StringCopy(&cVar1, "INT_HEIST_CHOICE_AGENCY", 32);
				break;
			
			case 11:
				StringCopy(&cVar1, "INT_HEIST_CHOICE_FINALE", 32);
				break;
			
			case 12:
				StringCopy(&cVar1, "INT_MISS_CHOICE_FINALE", 32);
				break;
			
			default:
				StringCopy(&cVar1, "IntIDDetails", 32);
				StringIntConCat(&cVar1, iVar0, 32);
				break;
		}
		MISC::REGISTER_INT_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_601(var uParam0, char* sParam1)//Position - 0x615F5
{
	int iVar0;
	char cVar1[32];
	int iVar9;
	
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 145, sParam1);
	iVar0 = 0;
	while (iVar0 < 144)
	{
		iVar9 = iVar0;
		switch (iVar9)
		{
			case 0:
				StringCopy(&cVar1, "FLAG_H_BOARD_UNDO", 32);
				break;
			
			case 1:
				StringCopy(&cVar1, "FLAG_H_FIN_DOCKS", 32);
				break;
			
			case 2:
				StringCopy(&cVar1, "FLAG_H_FIN_AGENCY", 32);
				break;
			
			case 4:
				StringCopy(&cVar1, "FLAG_H_FIN_JEWEL", 32);
				break;
			
			case 5:
				StringCopy(&cVar1, "FLAG_H_FIN_RURALBANK", 32);
				break;
			
			case 3:
				StringCopy(&cVar1, "FLAG_H_FIN_FINALE", 32);
				break;
			
			case 6:
				StringCopy(&cVar1, "FLAG_H_AGENCY_PRIME_BOARD", 32);
				break;
			
			case 8:
				StringCopy(&cVar1, "FLAG_H_AGENCY_DO_B_EXIT", 32);
				break;
			
			case 7:
				StringCopy(&cVar1, "FLAG_H_AGENCY_LOAD_B_EXIT", 32);
				break;
			
			case 9:
				StringCopy(&cVar1, "FLAG_H_AGENCY_CALLS_COMPLETE", 32);
				break;
			
			case 10:
				StringCopy(&cVar1, "FLAG_H_AGENCY_2_UNLOCKED", 32);
				break;
			
			case 11:
				StringCopy(&cVar1, "FLAG_H_AGENCY_2_AUTOTRIG", 32);
				break;
			
			case 13:
				StringCopy(&cVar1, "FLAG_H_AGENCY_FT_GOT_WANTED", 32);
				break;
			
			case 12:
				StringCopy(&cVar1, "FLAG_H_AGENCY_P_2_DONE", 32);
				break;
			
			case 14:
				StringCopy(&cVar1, "FLAG_H_AGENCY_P_CALLS_DONE", 32);
				break;
			
			case 20:
				StringCopy(&cVar1, "FLAG_H_DOCKS_PRIME_BOARD", 32);
				break;
			
			case 22:
				StringCopy(&cVar1, "FLAG_H_DOCKS_DO_B_EXIT", 32);
				break;
			
			case 21:
				StringCopy(&cVar1, "FLAG_H_DOCKS_LOAD_B_EXIT", 32);
				break;
			
			case 23:
				StringCopy(&cVar1, "FLAG_DOCKS_PRE_H_TEXTS_DONE", 32);
				break;
			
			case 24:
				StringCopy(&cVar1, "FLAG_H_FINALE_PRIME_BOARD", 32);
				break;
			
			case 25:
				StringCopy(&cVar1, "FLAG_H_FINALE_LOAD_B_EXIT", 32);
				break;
			
			case 26:
				StringCopy(&cVar1, "FLAG_H_FINALE_DO_B_EXIT", 32);
				break;
			
			case 27:
				StringCopy(&cVar1, "FLAG_H_FINALE_P_GOT_WANTED", 32);
				break;
			
			case 28:
				StringCopy(&cVar1, "FLAG_H_FINALE_PA_CALLS_DONE", 32);
				break;
			
			case 29:
				StringCopy(&cVar1, "FLAG_H_FINALE_PB_CALLS_DONE", 32);
				break;
			
			case 30:
				StringCopy(&cVar1, "FLAG_H_FINALE_PC_EMAIL_DONE", 32);
				break;
			
			case 31:
				StringCopy(&cVar1, "FLAG_H_FINALE_PC_1_STOLEN", 32);
				break;
			
			case 32:
				StringCopy(&cVar1, "FLAG_H_FINALE_PC_2_STOLEN", 32);
				break;
			
			case 33:
				StringCopy(&cVar1, "FLAG_H_FINALE_PC_3_STOLEN", 32);
				break;
			
			case 34:
				StringCopy(&cVar1, "FLAG_H_FINALE_P_E_DONE", 32);
				break;
			
			case 35:
				StringCopy(&cVar1, "FLAG_H_FINALE_P_E_PLACE", 32);
				break;
			
			case 36:
				StringCopy(&cVar1, "FLAG_H_FINALE_2_READY", 32);
				break;
			
			case 15:
				StringCopy(&cVar1, "FLAG_H_JEWEL_P2A_R", 32);
				break;
			
			case 16:
				StringCopy(&cVar1, "FLAG_H_JEWEL_PRIME_BOARD", 32);
				break;
			
			case 18:
				StringCopy(&cVar1, "FLAG_H_JEWEL_DO_B_EXIT", 32);
				break;
			
			case 17:
				StringCopy(&cVar1, "FLAG_H_JEWEL_LOAD_B_EXIT", 32);
				break;
			
			case 19:
				StringCopy(&cVar1, "FLAG_H_JEWEL_RUN", 32);
				break;
			
			case 37:
				StringCopy(&cVar1, "FLAG_H_RURAL_LOAD_MIKE_WIN", 32);
				break;
			
			case 38:
				StringCopy(&cVar1, "FLAG_H_RURAL_LOAD_TREV_WIN", 32);
				break;
			
			case 39:
				StringCopy(&cVar1, "FLAG_H_RURAL_LOAD_B_EXIT", 32);
				break;
			
			case 40:
				StringCopy(&cVar1, "FLAG_H_RURAL_DO_B_EXIT", 32);
				break;
			
			case 41:
				StringCopy(&cVar1, "FLAG_H_RURAL_PREP_CALL_DONE", 32);
				break;
			
			case 52:
				StringCopy(&cVar1, "FLAG_ALLOW_RANDOM_EVENTS", 32);
				break;
			
			case 53:
				StringCopy(&cVar1, "FLAG_ALLOW_CINEMA", 32);
				break;
			
			case 54:
				StringCopy(&cVar1, "FLAG_ALLOW_COMEDYCLUB", 32);
				break;
			
			case 55:
				StringCopy(&cVar1, "FLAG_ALLOW_LIVEMUSIC", 32);
				break;
			
			case 56:
				StringCopy(&cVar1, "FLAG_ALLOW_SHOP_ROBBERIES", 32);
				break;
			
			case 57:
				StringCopy(&cVar1, "FLOW_BLOCK_SH_FOR_SAVE", 32);
				break;
			
			case 58:
				StringCopy(&cVar1, "FLAG_T_RESTRICT_COUNTRY", 32);
				break;
			
			case 59:
				StringCopy(&cVar1, "FLAG_T_RESTRICT_CITY", 32);
				break;
			
			case 60:
				StringCopy(&cVar1, "FLOWFLAG_F_FROZEN_POST_PRO", 32);
				break;
			
			case 63:
				StringCopy(&cVar1, "FLAG_CHOP_DOG_UNLOCKED", 32);
				break;
			
			case 64:
				StringCopy(&cVar1, "FLAG_CAR3_INITIALISED", 32);
				break;
			
			case 65:
				StringCopy(&cVar1, "FLAG_MOVIE_STUDIO_OPEN", 32);
				break;
			
			case 66:
				StringCopy(&cVar1, "FLAG_MOVIE_STUDIO_OPEN_FRAN", 32);
				break;
			
			case 67:
				StringCopy(&cVar1, "FLAG_AIR_VEH_PARA_UNLOCKED", 32);
				break;
			
			case 68:
				StringCopy(&cVar1, "FLAG_WATER_VEH_SCUBA_UNLOCKED", 32);
				break;
			
			case 69:
				StringCopy(&cVar1, "FLAG_OFFR_RACE_UNLOCK_ALL", 32);
				break;
			
			case 70:
				StringCopy(&cVar1, "FLAG_RUN_BUILDSITE_AMB_AUD", 32);
				break;
			
			case 71:
				StringCopy(&cVar1, "FLAG_MICHAEL_D_FLYING_LES", 32);
				break;
			
			case 61:
				StringCopy(&cVar1, "FLOWFLAG_ARM1_CAR_DAMAGED", 32);
				break;
			
			case 62:
				StringCopy(&cVar1, "FLAG_STRETCH_TEXT_SENT", 32);
				break;
			
			case 72:
				StringCopy(&cVar1, "FLAG_ARM3_STRIPSWITCH_AVAIL", 32);
				break;
			
			case 73:
				StringCopy(&cVar1, "FLAG_DARTS_YELLOW_JACK_AV", 32);
				break;
			
			case 74:
				StringCopy(&cVar1, "FLAG_RES_AND_RCS_UNLOCKED", 32);
				break;
			
			case 75:
				StringCopy(&cVar1, "FLAG_EXILE1_PICKUPS_UNLOCKED", 32);
				break;
			
			case 76:
				StringCopy(&cVar1, "FLAG_CAR2_KILLED_MULLIGAN", 32);
				break;
			
			case 77:
				StringCopy(&cVar1, "FLAG_FRAN_DONE_ACT_WITH_LAM", 32);
				break;
			
			case 78:
				StringCopy(&cVar1, "FLAG_TREV_DONE_ACT_WITH_LAM", 32);
				break;
			
			case joaat("mpsv_lp0_31"):
				StringCopy(&cVar1, "FLOWFLAG_AMANDA_M_EV_SKIPPED", 32);
				break;
			
			case 80:
				StringCopy(&cVar1, "FLOWFLAG_SHRINK_KILLED", 32);
				break;
			
			case 81:
				StringCopy(&cVar1, "FLOWFLAG_BLOCK_F_MISSIONS_FOR_T", 32);
				break;
			
			case 82:
				StringCopy(&cVar1, "FLAG_GUNRANGE_TUTORIAL_DONE", 32);
				break;
			
			case 83:
				StringCopy(&cVar1, "FLAG_WILD_PHOTO_UNLOCKED", 32);
				break;
			
			case 84:
				StringCopy(&cVar1, "FLAG_BARRY3_TEXT_RECEIVED", 32);
				break;
			
			case 85:
				StringCopy(&cVar1, "FLAG_BARRY4_TEXT_RECEIVED", 32);
				break;
			
			case 86:
				StringCopy(&cVar1, "FLAG_EPSILON_QUESTIONNAIRE_DONE", 32);
				break;
			
			case 87:
				StringCopy(&cVar1, "FLAG_EPSILON_DONATED_500", 32);
				break;
			
			case 88:
				StringCopy(&cVar1, "FLAG_EPSILON_DONATED_5000", 32);
				break;
			
			case 89:
				StringCopy(&cVar1, "FLAG_EPSILON_DONATED_10000", 32);
				break;
			
			case 90:
				StringCopy(&cVar1, "FLAG_EPSILON_CARS_DONE", 32);
				break;
			
			case 91:
				StringCopy(&cVar1, "FLAG_EPSILON_ROBES_BOUGHT", 32);
				break;
			
			case 92:
				StringCopy(&cVar1, "FLAG_EPSILON_ROBES_DONE", 32);
				break;
			
			case 93:
				StringCopy(&cVar1, "FLAG_EPSILON_6_TEXT_RECEIVED", 32);
				break;
			
			case 94:
				StringCopy(&cVar1, "FLAG_EPSILON_DESERT_DONE", 32);
				break;
			
			case 95:
				StringCopy(&cVar1, "FLAG_EPSILON_UNLOCKED_TRACT", 32);
				break;
			
			case 96:
				StringCopy(&cVar1, "FLAG_EXTREME2_TEXT_RECEIVED", 32);
				break;
			
			case 97:
				StringCopy(&cVar1, "FLAG_EXTREME3_TEXT_RECEIVED", 32);
				break;
			
			case 98:
				StringCopy(&cVar1, "FLAG_EXTREME4_BJUMPS_FINISHED", 32);
				break;
			
			case 99:
				StringCopy(&cVar1, "FLAG_HUNTINTG1_TEXT_RECEIVED", 32);
				break;
			
			case 100:
				StringCopy(&cVar1, "FLAG_NIGEL1_EMAIL_RECEIVED", 32);
				break;
			
			case 101:
				StringCopy(&cVar1, "FLAG_NIGEL3_NAPOLI_KILLED", 32);
				break;
			
			case 102:
				StringCopy(&cVar1, "FLAG_PAPARAZZO3_TEXT_RECEIVED", 32);
				break;
			
			case 103:
				StringCopy(&cVar1, "FLAG_TONYA3_TEXT_RECEIVED", 32);
				break;
			
			case 104:
				StringCopy(&cVar1, "FLAG_TONYA4_TEXT_RECEIVED", 32);
				break;
			
			case 105:
				StringCopy(&cVar1, "FLAG_FOR_SALE_SIGNS_DESTROYED", 32);
				break;
			
			case 106:
				StringCopy(&cVar1, "FLAG_LETTER_SCRAPS_DONE", 32);
				break;
			
			case 107:
				StringCopy(&cVar1, "FLAG_SPACESHIP_PARTS_DONE", 32);
				break;
			
			case 108:
				StringCopy(&cVar1, "FLAG_ALL_RAMPAGES_UNLOCKED", 32);
				break;
			
			case 109:
				StringCopy(&cVar1, "FLAG_PURCHASED_MARINA_PROPERTY", 32);
				break;
			
			case 118:
				StringCopy(&cVar1, "FLAG_PLAYER_VEH_F_UNLOCK_BIKE", 32);
				break;
			
			case 119:
				StringCopy(&cVar1, "FLAG_PLAYER_VEH_T_UNLOCK_RJAM", 32);
				break;
			
			case 115:
				StringCopy(&cVar1, "FLAG_PLAYER_PED_INTRODUCED_M", 32);
				break;
			
			case 116:
				StringCopy(&cVar1, "FLAG_PLAYER_PED_INTRODUCED_F", 32);
				break;
			
			case 117:
				StringCopy(&cVar1, "FLAG_PLAYER_PED_INTRODUCED_T", 32);
				break;
			
			case 120:
				StringCopy(&cVar1, "FLAG_MIC_HAS_HAGGARD_SUIT", 32);
				break;
			
			case 121:
				StringCopy(&cVar1, "FLAG_MIC_SET_HAGGARD_SUIT", 32);
				break;
			
			case 122:
				StringCopy(&cVar1, "FLAG_MIC_REM_HAGGARD_SUIT", 32);
				break;
			
			case 123:
				StringCopy(&cVar1, "FLOW_MIC_HIDE_BARE_CHEST", 32);
				break;
			
			case 124:
				StringCopy(&cVar1, "FLOW_MIC_PRO_MASK_REMOVED", 32);
				break;
			
			case 125:
				StringCopy(&cVar1, "FLOW_TRV_PRO_MASK_REMOVED", 32);
				break;
			
			case 42:
				StringCopy(&cVar1, "FLAG_UNLOCK_LAMAR_1", 32);
				break;
			
			case 43:
				StringCopy(&cVar1, "FLAG_FRANK1_MC_CLIPPED", 32);
				break;
			
			case 44:
				StringCopy(&cVar1, "FLAG_FBI_3_CALLS_DONE", 32);
				break;
			
			case 45:
				StringCopy(&cVar1, "FLAG_FBI_4_PREP_3_COMPLETED", 32);
				break;
			
			case 46:
				StringCopy(&cVar1, "FLAG_FBI_4_UNLOCKED_FROM_P", 32);
				break;
			
			case 47:
				StringCopy(&cVar1, "FLAG_FBI_4_CALLS_DONE", 32);
				break;
			
			case 48:
				StringCopy(&cVar1, "FLAG_ASS_1_UNLOCKED", 32);
				break;
			
			case 49:
				StringCopy(&cVar1, "FLAG_ASS_COMPLETED", 32);
				break;
			
			case 50:
				StringCopy(&cVar1, "FLAG_MICHAEL_4_TEXTS_DONE", 32);
				break;
			
			case 51:
				StringCopy(&cVar1, "FLAG_MARTIN_1_CALLS_DONE", 32);
				break;
			
			case 126:
				StringCopy(&cVar1, "FLAG_F_MOVED_TO_HILLS_APART", 32);
				break;
			
			case 127:
				StringCopy(&cVar1, "FLAG_M_F_ARE_FRIENDS", 32);
				break;
			
			case 128:
				StringCopy(&cVar1, "FLAG_M_A_HAVE_SPLIT", 32);
				break;
			
			case 129:
				StringCopy(&cVar1, "FLAG_M_A_HAVE_FALLEN_OUT", 32);
				break;
			
			case 130:
				StringCopy(&cVar1, "FLAG_M_T_EXILE_STARTED", 32);
				break;
			
			case 131:
				StringCopy(&cVar1, "FLAG_M_T_EXILE_FINISHED", 32);
				break;
			
			case 132:
				StringCopy(&cVar1, "FLAG_ORTEGA_KILLED", 32);
				break;
			
			case 133:
				StringCopy(&cVar1, "FLAG_GAME_100_PERC_COMP", 32);
				break;
			
			case 134:
				StringCopy(&cVar1, "FLAG_FINAL_CHOICE_MADE", 32);
				break;
			
			case 135:
				StringCopy(&cVar1, "FLAG_MICHAEL_KILLED", 32);
				break;
			
			case 136:
				StringCopy(&cVar1, "FLAG_TREVOR_KILLED", 32);
				break;
			
			case 137:
				StringCopy(&cVar1, "FLAG_RESPAWNED_AFTER_FIN", 32);
				break;
			
			case 110:
				StringCopy(&cVar1, "FLAG_DIVING_SCRAPS_DONE", 32);
				break;
			
			case 138:
				StringCopy(&cVar1, "FLAG_PLAYER_HAS_USED_FP_VIEW", 32);
				break;
			
			case 111:
				StringCopy(&cVar1, "FLAG_MIKE_CON_BOUGHT", 32);
				break;
			
			case 112:
				StringCopy(&cVar1, "FLAG_FRANK_CON_BOUGHT", 32);
				break;
			
			case 113:
				StringCopy(&cVar1, "FLAG_TREV_CON_BOUGHT", 32);
				break;
			
			case 114:
				StringCopy(&cVar1, "FLAG_BEV_SENT_WILD_TXT", 32);
				break;
			
			case 139:
				StringCopy(&cVar1, "FLAG_SENT_PROX_MINE_EMAIL", 32);
				break;
			
			case 140:
				StringCopy(&cVar1, "FLAG_SENT_MISSILE_EMAIL", 32);
				break;
			
			case 141:
				StringCopy(&cVar1, "FLAG_SENT_DLC_WEAPON_EMAIL_1", 32);
				break;
			
			case 143:
				StringCopy(&cVar1, "FLAG_SENT_DLC_WEAPON_EMAIL_2", 32);
				break;
			
			case 142:
				StringCopy(&cVar1, "FLAG_SENT_DLC_WEAPON_EMAIL_3", 32);
				break;
			
			default:
				StringCopy(&cVar1, "FlagIDDetails", 32);
				StringIntConCat(&cVar1, iVar0, 32);
				break;
		}
		MISC::REGISTER_BOOL_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_602(var uParam0, char* sParam1)//Position - 0x6206A
{
	int iVar0;
	char cVar1[32];
	int iVar9;
	
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 58, sParam1);
	iVar0 = 0;
	while (iVar0 < 57)
	{
		iVar9 = iVar0;
		switch (iVar9)
		{
			case 0:
				StringCopy(&cVar1, "SYNC_ASSA3_TO_CARSTEAL1", 32);
				break;
			
			case 1:
				StringCopy(&cVar1, "SYNC_ASSA5_TO_EXILE1", 32);
				break;
			
			case 2:
				StringCopy(&cVar1, "SYNC_CAR_STEAL_TO_MICHAEL", 32);
				break;
			
			case 3:
				StringCopy(&cVar1, "SYNC_CAR_STEAL3_TO_MARTIN1", 32);
				break;
			
			case 4:
				StringCopy(&cVar1, "SYNC_CHINESE_TO_TREVOR", 32);
				break;
			
			case 5:
				StringCopy(&cVar1, "SYNC_DOCKS_HEISTP_TO_FBIO3", 32);
				break;
			
			case 6:
				StringCopy(&cVar1, "SYNC_DOCKSH_TO_DOCKSH_2", 32);
				break;
			
			case 7:
				StringCopy(&cVar1, "SYNC_EXILE2_TO_RURAL_H1", 32);
				break;
			
			case 8:
				StringCopy(&cVar1, "SYNC_EXILE3_TO_RURAL_H2", 32);
				break;
			
			case 9:
				StringCopy(&cVar1, "SYNC_FAMILY3_TO_TONYA1", 32);
				break;
			
			case 10:
				StringCopy(&cVar1, "SYNC_FAMILY2_TO_FRANKLIN0", 32);
				break;
			
			case 11:
				StringCopy(&cVar1, "SYNC_FAMILY_TO_FBI_OFF", 32);
				break;
			
			case 12:
				StringCopy(&cVar1, "SYNC_FAMILY_TO_TREVOR", 32);
				break;
			
			case 13:
				StringCopy(&cVar1, "SYNC_FAMILY6_TO_AGENCY1", 32);
				break;
			
			case 14:
				StringCopy(&cVar1, "SYNC_FBI_OFF4_TO_ASS1", 32);
				break;
			
			case 15:
				StringCopy(&cVar1, "SYNC_FBI_OFF4_TO_DOCKSH2", 32);
				break;
			
			case 16:
				StringCopy(&cVar1, "SYNC_FBI_OFF4_TO_FRANKLIN1", 32);
				break;
			
			case 17:
				StringCopy(&cVar1, "SYNC_FBI_OFF_TO_FBI_OFF2", 32);
				break;
			
			case 18:
				StringCopy(&cVar1, "SYNC_FBI_OFF_TO_FBI_OFF3", 32);
				break;
			
			case 19:
				StringCopy(&cVar1, "SYNC_FBI_OFF_TO_FBI_OFF4", 32);
				break;
			
			case 20:
				StringCopy(&cVar1, "SYNC_FBI_OFF_TO_FBI_OFF5", 32);
				break;
			
			case 21:
				StringCopy(&cVar1, "SYNC_FBI_OFF4_TO_DOCKS_H_P", 32);
				break;
			
			case 22:
				StringCopy(&cVar1, "SYNC_FBI_OFF_TO_EXILE", 32);
				break;
			
			case 23:
				StringCopy(&cVar1, "SYNC_FBI_OFF_TO_FAMILY", 32);
				break;
			
			case 24:
				StringCopy(&cVar1, "SYNC_FINALEH1_TO_SOL1B", 32);
				break;
			
			case 25:
				StringCopy(&cVar1, "SYNC_FINALEH_TO_MICHAEL4", 32);
				break;
			
			case 26:
				StringCopy(&cVar1, "SYNC_FINALEH_TO_FINALEH2", 32);
				break;
			
			case 27:
				StringCopy(&cVar1, "SYNC_FINALEH_TO_FINALEH3", 32);
				break;
			
			case 28:
				StringCopy(&cVar1, "SYNC_FINALEH_TO_FINALEH4", 32);
				break;
			
			case 29:
				StringCopy(&cVar1, "SYNC_FRANKLIN1_TO_LAMAR", 32);
				break;
			
			case 30:
				StringCopy(&cVar1, "SYNC_FRANKLIN1_TO_FBI_OFF2", 32);
				break;
			
			case 31:
				StringCopy(&cVar1, "SYNC_FRANKLIN2_TO_FAMILY6", 32);
				break;
			
			case 32:
				StringCopy(&cVar1, "SYNC_FRANKLIN2_TO_MICHAEL3", 32);
				break;
			
			case 33:
				StringCopy(&cVar1, "SYNC_JEWELHP_TO_FAMILY3", 32);
				break;
			
			case 34:
				StringCopy(&cVar1, "SYNC_JEWELH_TO_JEWELH2", 32);
				break;
			
			case 35:
				StringCopy(&cVar1, "SYNC_LAMAR1_TO_FRANKLIN0", 32);
				break;
			
			case 36:
				StringCopy(&cVar1, "SYNC_MARTIN1_TO_CAR_STEAL2", 32);
				break;
			
			case 37:
				StringCopy(&cVar1, "SYNC_MICHAEL1_TO_CARS3", 32);
				break;
			
			case 40:
				StringCopy(&cVar1, "SYNC_MICHAEL2_TO_CAR_STEAL4", 32);
				break;
			
			case 41:
				StringCopy(&cVar1, "SYNC_MICHAEL3_TO_AGENCYH", 32);
				break;
			
			case 38:
				StringCopy(&cVar1, "SYNC_MICHAEL4_TO_FRANKLIN2", 32);
				break;
			
			case 39:
				StringCopy(&cVar1, "SYNC_MICH4_TO_SOLOMON3", 32);
				break;
			
			case 42:
				StringCopy(&cVar1, "SYNC_MIKE_EV_J_TO_FAM6", 32);
				break;
			
			case 43:
				StringCopy(&cVar1, "SYNC_MIKE_EV_J_TO_MIC4", 32);
				break;
			
			case 44:
				StringCopy(&cVar1, "SYNC_RURALH2_TO_EXILE2", 32);
				break;
			
			case 47:
				StringCopy(&cVar1, "SYNC_SHRINK4_TO_EXILE1", 32);
				break;
			
			case 45:
				StringCopy(&cVar1, "SYNC_SHRINK2_TO_FAMILY4", 32);
				break;
			
			case 48:
				StringCopy(&cVar1, "SYNC_SHRINK5_TO_FAMILY6", 32);
				break;
			
			case 46:
				StringCopy(&cVar1, "SYNC_SHRINK3_TO_SOLOMON1", 32);
				break;
			
			case 49:
				StringCopy(&cVar1, "SYNC_SHRINK5_TO_SOLOMON3", 32);
				break;
			
			case 50:
				StringCopy(&cVar1, "SYNC_SHRINK5_TO_MICHAEL3", 32);
				break;
			
			case 51:
				StringCopy(&cVar1, "SYNC_SOLOMON2_TO_MICHAEL2", 32);
				break;
			
			case 52:
				StringCopy(&cVar1, "SYNC_SOLOMON3_TO_AGENCYH2", 32);
				break;
			
			case 53:
				StringCopy(&cVar1, "SYNC_SOLOMON3_TO_FAMILY6", 32);
				break;
			
			case 54:
				StringCopy(&cVar1, "SYNC_TREVOR2_TO_CHINESE1C", 32);
				break;
			
			case 55:
				StringCopy(&cVar1, "SYNC_TREVOR3_TO_CHINESE2", 32);
				break;
			
			case 56:
				StringCopy(&cVar1, "SYNC_TREVOR4_TO_FBIO5", 32);
				break;
			
			default:
				StringCopy(&cVar1, "SyncIDDetails", 32);
				StringIntConCat(&cVar1, iVar0, 32);
				break;
		}
		MISC::REGISTER_BOOL_TO_SAVE(uParam0[iVar0], &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_603(var uParam0, char* sParam1)//Position - 0x624C1
{
	int iVar0;
	struct<4> Var1;
	int iVar9;
	
	iVar0 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 97, sParam1);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar9 = iVar0;
		switch (iVar9)
		{
			case 0:
				StringCopy(&Var1, "STRAND_AGENCY_HEIST", 32);
				break;
			
			case 2:
				StringCopy(&Var1, "STRAND_ASSASSINATIONS", 32);
				break;
			
			case 1:
				StringCopy(&Var1, "STRAND_ARMENIAN", 32);
				break;
			
			case 3:
				StringCopy(&Var1, "STRAND_CAR_STEAL", 32);
				break;
			
			case 4:
				StringCopy(&Var1, "STRAND_CHINESE", 32);
				break;
			
			case 5:
				StringCopy(&Var1, "STRAND_DOCKS_HEIST", 32);
				break;
			
			case 6:
				StringCopy(&Var1, "STRAND_DOCKS_HEIST_2", 32);
				break;
			
			case 7:
				StringCopy(&Var1, "STRAND_EXILE", 32);
				break;
			
			case 8:
				StringCopy(&Var1, "STRAND_FAMILY", 32);
				break;
			
			case 9:
				StringCopy(&Var1, "STRAND_FBI_OFFICERS", 32);
				break;
			
			case 10:
				StringCopy(&Var1, "STRAND_FBI_OFFICERS_2", 32);
				break;
			
			case 11:
				StringCopy(&Var1, "STRAND_FBI_OFFICERS_3", 32);
				break;
			
			case 12:
				StringCopy(&Var1, "STRAND_FBI_OFFICERS_4", 32);
				break;
			
			case 13:
				StringCopy(&Var1, "STRAND_FBI_OFFICERS_5", 32);
				break;
			
			case 14:
				StringCopy(&Var1, "STRAND_FINALE", 32);
				break;
			
			case 15:
				StringCopy(&Var1, "STRAND_FINALE_HEIST", 32);
				break;
			
			case 16:
				StringCopy(&Var1, "STRAND_FINALE_HEIST_2", 32);
				break;
			
			case 17:
				StringCopy(&Var1, "STRAND_FINALE_HEIST_3", 32);
				break;
			
			case 18:
				StringCopy(&Var1, "STRAND_FINALE_HEIST_4", 32);
				break;
			
			case 19:
				StringCopy(&Var1, "STRAND_FRANKLIN", 32);
				break;
			
			case 20:
				StringCopy(&Var1, "STRAND_JEWEL_HEIST", 32);
				break;
			
			case 21:
				StringCopy(&Var1, "STRAND_JEWEL_HEIST_2", 32);
				break;
			
			case 22:
				StringCopy(&Var1, "STRAND_LAMAR", 32);
				break;
			
			case 23:
				StringCopy(&Var1, "STRAND_LESTER", 32);
				break;
			
			case 24:
				StringCopy(&Var1, "STRAND_MARTIN", 32);
				break;
			
			case 25:
				StringCopy(&Var1, "STRAND_MICHAEL", 32);
				break;
			
			case 26:
				StringCopy(&Var1, "STRAND_MICHAEL_EVENTS", 32);
				break;
			
			case 27:
				StringCopy(&Var1, "STRAND_PROLOGUE", 32);
				break;
			
			case 28:
				StringCopy(&Var1, "STRAND_RURAL_BANK_HEIST", 32);
				break;
			
			case 29:
				StringCopy(&Var1, "STRAND_SHRINK", 32);
				break;
			
			case 30:
				StringCopy(&Var1, "STRAND_SOLOMON", 32);
				break;
			
			case 31:
				StringCopy(&Var1, "STRAND_TREVOR", 32);
				break;
			
			default:
				StringCopy(&Var1, "StrandDetails", 32);
				StringIntConCat(&Var1, iVar0, 32);
				break;
		}
		func_604(uParam0[iVar0 /*3*/], &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
}

void func_604(var uParam0, char* sParam1)//Position - 0x62756
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 3, sParam1);
	MISC::REGISTER_INT_TO_SAVE(uParam0, "flowStrandBitFlags");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "flowStrandCommandPos");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2), "flowStrandCommandHashID");
	MISC::STOP_SAVE_STRUCT();
}

void func_605()//Position - 0x62790
{
	func_618();
	func_607(-1909.513f, -573.3823f, 18.097f, -1909.513f, -573.3823f, 18.097f, 144.3309f, 7, 262, "V_65_Main", 0);
	func_607(-1909.513f, -573.3823f, 18.097f, -1909.513f, -573.3823f, 18.097f, 144.3309f, 8, 262, "V_65_Main", 1);
	func_607(-1909.513f, -573.3823f, 18.097f, -1909.513f, -573.3823f, 18.097f, 144.3309f, 9, 262, "V_65_Main", 2);
	func_607(-813.603f, 179.4738f, 71.1531f, -813.603f, 179.4738f, 71.1531f, 111.1168f, 0, 0, "V_Michael_G_Hall", 0);
	func_607(1972.606f, 3817.044f, 32.4297f, 1972.606f, 3817.044f, 32.4297f, 210.6042f, 1, 1, "V_TrailerRm", 0);
	func_607(1972.606f, 3817.044f, 32.4297f, 1972.606f, 3817.044f, 32.4297f, 210.6042f, 2, 2, "V_TrailerRm", 2);
	func_607(-1151.746f, -1518.136f, 9.6346f, -1151.746f, -1518.136f, 9.6346f, 187.2844f, 3, 3, "rm_Lounge", 2);
	func_607(94.5723f, -1290.082f, 28.7355f, 96.1503f, -1290.725f, 28.2688f, 301.5321f, 4, 4, "strp3off", 2);
	func_607(-14.3803f, -1438.514f, 31.2f, -14.3803f, -1438.514f, 31.2f, 182.1964f, 5, 5, "V_57_HallRM", 1);
	func_607(7.119f, 536.6152f, 175.028f, 7.119f, 536.6152f, 175.028f, 336.5715f, 6, 6, "Lounge", 1);
	func_606();
}

void func_606()//Position - 0x6297E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if ((Global_85405[iVar0 /*10*/].f_3 == 0f && Global_85405[iVar0 /*10*/].f_3.f_1 == 0f) && Global_85405[iVar0 /*10*/].f_3.f_2 == 0f)
		{
		}
		iVar0++;
	}
}

void func_607(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10)//Position - 0x629D0
{
	var uVar0;
	
	if (iParam7 == 10)
	{
		return;
	}
	uVar0 = GlobalFunc_4917(iParam10);
	Global_85405[iParam7 /*10*/].f_8 = MISC::REGISTER_SAVE_HOUSE(Param3, fParam6, sParam9, 0, uVar0);
	MISC::SET_SAVE_HOUSE(Global_85405[iParam7 /*10*/].f_8, true, 1);
	Global_85405[iParam7 /*10*/] = { Param0 };
	Global_85405[iParam7 /*10*/].f_3 = { Param3 };
	Global_85405[iParam7 /*10*/].f_6 = fParam6;
	Global_85405[iParam7 /*10*/].f_7 = iParam8;
	Global_85405[iParam7 /*10*/].f_9 = iParam10;
	if (iParam8 != 262)
	{
		GlobalFunc_2198(iParam8, 0, 0);
		GlobalFunc_5773(iParam8);
		GlobalFunc_2201(iParam8, 0);
		GlobalFunc_5986(iParam8, 1, iParam10, 0);
		GlobalFunc_3013(iParam8, Global_85405[iParam7 /*10*/]);
		GlobalFunc_2637(iParam8, 1);
		GlobalFunc_4548(iParam8, 40);
	}
}











void func_618()//Position - 0x62FF5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		Global_85405[iVar0 /*10*/] = { 0f, 0f, 0f };
		Global_85405[iVar0 /*10*/].f_3 = { 0f, 0f, 0f };
		Global_85405[iVar0 /*10*/].f_6 = 0f;
		Global_85405[iVar0 /*10*/].f_7 = 262;
		Global_85405[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
}

void func_619()//Position - 0x63051
{
	func_625(0, joaat("player_zero"), 1360, "CELL_101", "CELL_301", "CELL_401", 0, 0, "NO_ANSMSG", 0, 8, 0, 0, 0, "CELL_1001", 0);
	func_625(2, joaat("player_two"), 2070, "CELL_102", "CELL_302", "CELL_402", 2, 2, "NO_ANSMSG", 2, 9, 0, 0, 0, "CELL_1002", 2);
	func_625(1, joaat("player_one"), 670, "CELL_103", "CELL_303", "CELL_403", 1, 1, "NO_ANSMSG", 1, 16, 0, 0, 0, "CELL_1003", 1);
	func_625(3, joaat("a_m_y_beachvesp_01"), 240, "CELL_197", "CELL_195", "CELL_195", 138, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1091", 4);
	func_625(10, 0, 340, "CELL_189", "CELL_389", "CELL_489", 8, 4, "NO_ANSMSG", 7, 16, 2, 2, 2, "CELL_1091", 4);
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[10 /*29*/].f_24[0] = 1;
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[10 /*29*/].f_24[1] = 1;
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[10 /*29*/].f_24[2] = 1;
	func_625(11, 0, 350, "CELL_190", "CELL_390", "CELL_489", 8, 4, "NO_ANSMSG", 7, 16, 2, 2, 2, "CELL_1091", 4);
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[11 /*29*/].f_24[0] = 1;
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[11 /*29*/].f_24[1] = 1;
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[11 /*29*/].f_24[2] = 1;
	func_625(5, 0, 370, "CELL_191", "CELL_391", "CELL_489", 4, 4, "NO_ANSMSG", 7, 16, 2, 2, 2, "CELL_1091", 4);
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[5 /*29*/].f_24[0] = 1;
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[5 /*29*/].f_24[1] = 1;
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[5 /*29*/].f_24[2] = 1;
	func_625(6, 0, 373, "CELL_E_277", "CELL_E_382", "CELL_489", 5, 4, "NO_ANSMSG", 7, 16, 2, 2, 2, "CELL_1091", 4);
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[7 /*29*/].f_24[0] = 1;
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[7 /*29*/].f_24[1] = 1;
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[7 /*29*/].f_24[2] = 1;
	func_625(7, 0, 375, "CELL_E_278", "CELL_E_383", "CELL_489", 6, 4, "NO_ANSMSG", 7, 16, 2, 2, 2, "CELL_1091", 4);
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[7 /*29*/].f_24[0] = 1;
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[7 /*29*/].f_24[1] = 1;
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[7 /*29*/].f_24[2] = 1;
	func_625(8, 0, 380, "CELL_192", "CELL_392", "CELL_489", 7, 4, "NO_ANSMSG", 7, 16, 2, 2, 2, "CELL_1091", 4);
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[8 /*29*/].f_24[0] = 1;
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[8 /*29*/].f_24[1] = 1;
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[8 /*29*/].f_24[2] = 1;
	func_625(9, 0, 390, "CELL_193", "CELL_393", "CELL_489", 8, 4, "NO_ANSMSG", 7, 16, 2, 2, 2, "CELL_1091", 4);
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[9 /*29*/].f_24[0] = 1;
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[9 /*29*/].f_24[1] = 1;
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[9 /*29*/].f_24[2] = 1;
	func_625(4, 0, 360, "CELL_199", "CELL_396", "CELL_489", 3, 4, "NO_ANSMSG", 7, 16, 2, 2, 2, "CELL_1091", 4);
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[4 /*29*/].f_24[0] = 1;
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[4 /*29*/].f_24[1] = 1;
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[4 /*29*/].f_24[2] = 1;
	func_625(12, joaat("ig_lestercrest"), 1240, "CELL_111", "CELL_311", "CELL_411", 11, 4, "LES_APH2", 7, 16, 0, 0, 0, "CELL_1011", 4);
	func_625(13, joaat("ig_lestercrest"), 1240, "CELL_E_211", "CELL_E_311", "CELL_411", 11, 4, "LES_APH1", 7, 16, 0, 0, 0, "CELL_1048", 4);
	func_625(101, 0, 1950, "CELL_E_212", "CELL_E_312", "CELL_411", 97, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1054", 4);
	func_625(146, 0, 120, "CELL_E_284", "CELL_E_323", "CELL_E_385", 136, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELLC_DIRECTOR", 4);
	func_625(102, joaat("a_c_chop"), 361, "CELL_E_225", "CELL_386", "CELL_411", 98, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_MN_32", 4);
	func_625(134, 0, 980, "CELL_E_283", "CELL_E_322", "CELL_E_385", 135, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_1006", 4);
	func_625(14, joaat("ig_jimmydisanto"), 1030, "CELL_124", "CELL_324", "CELL_424", 12, 4, "JIM_APH1", 4, 0, 0, 0, 0, "CELL_1024", 4);
	func_625(15, joaat("ig_tracydisanto"), 2050, "CELL_125", "CELL_325", "CELL_425", 13, 4, "TRA_APH1", 7, 1, 0, 0, 0, "CELL_1025", 4);
	func_625(16, joaat("ig_abigail"), 110, "CELL_E_240", "CELL_E_377", "CELL_400", 14, 4, "ABI_APH1", 7, 16, 0, 0, 0, "CELL_MN_27", 4);
	func_625(17, joaat("ig_amandatownley"), 150, "CELL_126", "CELL_326", "CELL_426", 15, 4, "AMA_APH1", 5, 2, 0, 0, 0, "CELL_1026", 4);
	func_625(18, joaat("ig_siemonyetarian"), 1930, "CELL_127", "CELL_327", "CELL_427", 16, 4, "ANS_Sbusy", 7, 16, 0, 0, 0, "CELL_1027", 4);
	func_625(19, joaat("ig_lamardavis"), 1210, "CELL_128", "CELL_328", "CELL_428", 17, 4, "LAM_APH1", 3, 6, 0, 0, 0, "CELL_1028", 4);
	func_625(20, joaat("ig_nervousron"), 1880, "CELL_129", "CELL_329", "CELL_429", 18, 4, "RON_APH1", 7, 10, 0, 0, 0, "CELL_1029", 4);
	func_625(21, joaat("ig_taocheng"), 340, "CELL_133", "CELL_332", "CELL_432", 19, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1033", 4);
	func_625(22, joaat("ig_taocheng"), 1910, "CELL_E_281", "CELL_E_381", "CELL_432", 20, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_MN_12", 4);
	func_625(23, joaat("ig_stevehains"), 1970, "CELL_134", "CELL_333", "CELL_433", 21, 4, "STE_APH1", 7, 16, 0, 0, 0, "CELL_1034", 4);
	func_625(24, joaat("ig_wade"), 2300, "CELL_135", "CELL_334", "CELL_434", 22, 4, "WAD_APH1", 7, 16, 0, 0, 0, "CELL_1035", 4);
	func_625(25, joaat("ig_tenniscoach"), 2020, "CELL_136", "CELL_335", "CELL_435", 23, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1036", 4);
	func_625(26, joaat("ig_solomon"), 1950, "CELL_137", "CELL_336", "CELL_436", 24, 4, "SOL_APH1", 7, 16, 0, 0, 0, "CELL_1037", 4);
	func_625(27, joaat("ig_lazlow"), 1220, "CELL_138", "CELL_337", "CELL_437", 25, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1038", 4);
	func_625(28, joaat("a_m_y_business_01"), 560, "CELL_139", "CELL_338", "CELL_438", 26, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1039", 4);
	func_625(29, joaat("ig_devin"), 450, "CELL_142", "CELL_342", "CELL_442", 27, 4, "DEV_APH1", 7, 16, 0, 0, 0, "CELL_1042", 4);
	func_625(30, joaat("ig_davenorton"), 420, "CELL_143", "CELL_343", "CELL_443", 28, 4, "DAV_APH1", 7, 16, 0, 0, 0, "CELL_1043", 4);
	func_625(31, joaat("a_m_y_business_01"), 1330, "CELL_144", "CELL_344", "CELL_444", 29, 4, "ANS_MMbusy", 7, 16, 0, 0, 0, "CELL_1044", 4);
	func_625(32, joaat("ig_floyd"), 650, "CELL_145", "CELL_345", "CELL_445", 30, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1074", 4);
	func_625(33, joaat("a_m_y_business_01"), 1380, "CELL_146", "CELL_346", "CELL_401", 31, 4, "MIL_APH1", 7, 16, 0, 0, 0, "CELL_1045", 4);
	func_625(34, joaat("g_m_y_mexgoon_02"), 1590, "CELL_164", "CELL_363", "CELL_400", 32, 4, "OSC_APH1", 7, 16, 0, 0, 0, "CELL_1063", 4);
	func_625(35, joaat("ig_chengsr"), 355, "CELL_200", "CELL_395", "CELL_494", 33, 4, "CHE_APH1", 7, 16, 0, 0, 0, "CELL_1066", 4);
	func_625(36, joaat("ig_drfriedlander"), 492, "CELL_121", "CELL_397", "CELL_496", 34, 4, "SHR_APH1", 7, 16, 0, 0, 0, "CELL_1067", 4);
	func_625(37, joaat("ig_stretch"), 1977, "CELL_122", "CELL_322", "CELL_422", 35, 4, "STR_APH1", 7, 16, 0, 0, 0, "CELL_1068", 4);
	func_625(38, joaat("ig_ortega"), 1580, "CELL_123", "CELL_323", "CELL_423", 36, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1069", 4);
	func_625(39, joaat("a_m_m_farmer_01"), 1570, "CELL_E_208", "CELL_381", "CELL_400", 37, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1059", 4);
	func_625(40, joaat("ig_patricia"), 1620, "CELL_E_210", "CELL_382", "CELL_400", 38, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1071", 4);
	func_625(43, joaat("ig_tanisha"), 2010, "CELL_E_218", "CELL_384", "CELL_400", 41, 4, "TAN_APH1", 7, 16, 0, 0, 0, "CELL_1073", 4);
	func_625(44, joaat("ig_denise"), 440, "CELL_E_226", "CELL_387", "CELL_400", 42, 4, "DEN_APH1", 7, 16, 0, 0, 0, "CELL_1074", 4);
	func_625(45, joaat("ig_molly"), 1360, "CELL_E_227", "CELL_388", "CELL_400", 43, 4, "MOL_APH1", 7, 16, 0, 0, 0, "CELL_1076", 4);
	func_625(46, joaat("ig_lifeinvad_01"), 1860, "CELL_E_217", "CELL_383", "CELL_400", 44, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1072", 4);
	func_625(47, joaat("ig_chef"), 330, "CELL_E_224", "CELL_385", "CELL_400", 45, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_MN_28", 4);
	func_625(49, joaat("ig_barry"), 200, "CELL_147", "CELL_347", "CELL_400", 47, 4, "BAR_APH1", 7, 16, 0, 0, 0, "CELL_1046", 4);
	func_625(50, joaat("ig_beverly"), 220, "CELL_148", "CELL_348", "CELL_400", 48, 4, "BEV_APH1", 7, 16, 0, 0, 0, "CELL_1047", 4);
	if (GlobalFunc_84())
	{
		func_625(48, joaat("ig_beverly"), 250, "CELL_E_279", "CELL_E_379", "CELL_400", 46, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_MN_40", 4);
	}
	else
	{
		func_625(48, joaat("ig_beverly"), 250, "CELL_E_279", "CELL_E_386", "CELL_400", 46, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_MN_40", 4);
	}
	func_625(51, joaat("s_m_m_highsec_01"), 380, "CELL_166", "CELL_365", "CELL_448", 49, 4, "CRI_APH1", 7, 16, 0, 0, 0, "CELL_1075", 4);
	func_625(52, joaat("ig_dom"), 450, "CELL_150", "CELL_350", "CELL_400", 50, 4, "ANS_Dbusy", 7, 16, 0, 0, 0, "CELL_1049", 4);
	func_625(53, joaat("ig_hao"), 800, "CELL_E_246", "CELL_E_346", "CELL_400", 51, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1049", 4);
	func_625(54, joaat("ig_cletus"), 370, "CELL_167", "CELL_366", "CELL_449", 52, 4, "CLE_APH1", 7, 16, 0, 0, 0, "CELL_1076", 4);
	func_625(55, joaat("ig_jimmyboston"), 1040, "CELL_151", "CELL_357", "CELL_400", 53, 4, "JIB_APH1", 7, 16, 0, 0, 0, "CELL_1050", 4);
	func_625(56, joaat("ig_joeminuteman"), 1060, "CELL_152", "CELL_352", "CELL_400", 54, 4, "JOE_APH1", 7, 16, 0, 0, 0, "CELL_1051", 4);
	func_625(57, joaat("ig_josef"), 1070, "CELL_153", "CELL_353", "CELL_400", 55, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1052", 4);
	func_625(58, joaat("ig_josh"), 1080, "CELL_154", "CELL_354", "CELL_400", 56, 4, "JOS_APH1", 7, 16, 0, 0, 0, "CELL_1053", 4);
	func_625(59, joaat("ig_manuel"), 1310, "CELL_156", "CELL_356", "CELL_400", 57, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1055", 4);
	func_625(60, joaat("ig_marnie"), 1320, "CELL_157", "CELL_E_310", "CELL_400", 58, 4, "MAR_APH1", 7, 16, 0, 0, 0, "CELL_1056", 4);
	func_625(61, joaat("ig_maryann"), 1340, "CELL_158", "CELL_358", "CELL_400", 59, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1057", 4);
	func_625(62, joaat("ig_maude"), 1340, "CELL_E_244", "CELL_E_344", "CELL_400", 60, 4, "MAU_APH1", 7, 16, 0, 0, 0, "CELL_1057", 4);
	func_625(133, 0, 1360, "CELL_E_282", "CELL_300", "CELL_E_384", 138, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_1005", 4);
	func_625(63, joaat("ig_mrs_thornhill"), 1390, "CELL_161", "CELL_361", "CELL_400", 61, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1060", 4);
	func_625(64, joaat("ig_nigel"), 1430, "CELL_162", "CELL_362", "CELL_400", 62, 4, "NIG_APH1", 7, 16, 0, 0, 0, "CELL_1061", 4);
	func_625(65, joaat("ig_orleans"), 1910, "CELL_168", "CELL_367", "CELL_450", 63, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1077", 4);
	func_625(66, joaat("ig_ashley"), 178, "CELL_E_202", "CELL_368", "CELL_400", 64, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1070", 4);
	func_625(67, joaat("ig_andreas"), 180, "CELL_E_205", "CELL_369", "CELL_400", 138, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1080", 4);
	func_625(68, joaat("ig_dreyfuss"), 490, "CELL_E_206", "CELL_398", "CELL_400", 138, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1078", 4);
	func_625(69, joaat("ig_omega"), 1540, "CELL_E_207", "CELL_399", "CELL_400", 65, 4, "OME_APH1", 7, 16, 0, 0, 0, "CELL_1079", 4);
	func_625(92, joaat("a_m_y_beachvesp_01"), 480, "CELL_140", "CELL_340", "CELL_401", 91, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1040", 4);
	func_625(93, joaat("a_f_y_hiker_01"), 2170, "CELL_141", "CELL_341", "CELL_401", 92, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1041", 4);
	func_625(98, 0, 1960, "CELL_179", "CELL_379", "CELL_400", 138, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1064", 4);
	func_625(99, 0, 1290, "CELL_E_245", "CELL_378", "CELL_400", 133, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1075", 4);
	func_625(100, joaat("s_m_y_xmech_02"), 1360, "CELL_180", "CELL_380", "CELL_400", 138, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1065", 4);
	func_625(104, joaat("s_f_y_stripper_01"), 1090, "CELL_112", "CELL_312", "CELL_400", 99, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1080", 4);
	func_625(105, joaat("s_f_y_stripper_02"), 1460, "CELL_113", "CELL_313", "CELL_413", 100, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1081", 4);
	func_625(106, joaat("s_f_y_stripper_01"), 340, "CELL_114", "CELL_314", "CELL_414", 101, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1082", 4);
	func_625(107, joaat("s_f_y_stripper_02"), 350, "CELL_115", "CELL_315", "CELL_415", 102, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1083", 4);
	func_625(108, joaat("s_f_y_stripper_01"), 1910, "CELL_116", "CELL_316", "CELL_416", 103, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1084", 4);
	func_625(109, joaat("s_f_y_stripper_02"), 940, "CELL_117", "CELL_317", "CELL_417", 104, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1085", 4);
	func_625(110, joaat("s_f_y_stripper_01"), 680, "CELL_118", "CELL_318", "CELL_418", 105, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1086", 4);
	func_625(111, joaat("s_f_y_stripper_02"), 1630, "CELL_119", "CELL_319", "CELL_419", 106, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1087", 4);
	func_625(94, joaat("a_f_y_fitness_02"), 280, "CELL_120", "CELL_320", "CELL_420", 93, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1088", 4);
	func_625(95, joaat("a_f_y_hipster_01"), 190, "CELL_E_280", "CELL_E_321", "CELL_400", 94, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_MN_41", 4);
	func_625(112, joaat("a_f_y_eastsa_03"), 1260, "CELL_E_201", "CELL_321", "CELL_421", 107, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1089", 4);
	func_625(113, 0, 1, "CELL_E_248", "CELL_E_350", "CELL_400", 108, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1080", 4);
	func_625(114, 0, 1, "CELL_E_249", "CELL_E_351", "CELL_400", 109, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1080", 4);
	func_625(115, 0, 1, "CELL_E_250", "CELL_E_352", "CELL_400", 110, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1080", 4);
	func_625(116, 0, 1, "CELL_E_251", "CELL_E_353", "CELL_400", 111, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1080", 4);
	func_625(117, 0, 1, "CELL_E_252", "CELL_E_354", "CELL_400", 112, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1080", 4);
	func_625(118, 0, 1, "CELL_E_254", "CELL_E_356", "CELL_400", 114, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1080", 4);
	func_625(119, 0, 1, "CELL_E_255", "CELL_E_357", "CELL_400", 115, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1080", 4);
	func_625(120, 0, 1, "CELL_E_256", "CELL_E_358", "CELL_400", 116, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1080", 4);
	func_625(121, 0, 1, "CELL_E_260", "CELL_E_362", "CELL_400", 117, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1080", 4);
	func_625(122, 0, 1, "CELL_E_262", "CELL_E_364", "CELL_400", 118, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1080", 4);
	func_625(123, 0, 1, "CELL_E_263", "CELL_E_366", "CELL_400", 119, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1080", 4);
	func_625(124, 0, 1, "CELL_E_264", "CELL_E_367", "CELL_400", 120, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1080", 4);
	func_625(125, 0, 1, "CELL_E_265", "CELL_E_368", "CELL_400", 121, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1080", 4);
	func_625(126, 0, 1, "CELL_E_266", "CELL_E_369", "CELL_400", 122, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1080", 4);
	func_625(127, 0, 1, "CELL_E_267", "CELL_E_370", "CELL_400", 123, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1080", 4);
	func_625(103, joaat("ig_tonya"), 2040, "CELL_E_223", "CELL_370", "CELL_470", 124, 4, "TON_APH1", 7, 16, 0, 0, 0, "CELL_1090", 4);
	func_625(96, 0, 1270, "CELL_E_209", "CELL_E_309", "CELL_400", 95, 4, "NO_ANSMG", 7, 16, 2, 2, 2, "CELL_1091", 4);
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[96 /*29*/].f_24[0] = 1;
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[96 /*29*/].f_24[1] = 1;
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[96 /*29*/].f_24[2] = 1;
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[96 /*29*/].f_24[3] = 1;
	func_625(97, 0, 113, "CELL_E_220", "CELL_E_320", "CELL_400", 96, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_01", 4);
	func_625(70, joaat("a_m_y_beachvesp_01"), 150, "CELL_174", "CELL_MP_320", "CELL_400", 66, 4, "ANS_Lbusy", 7, 16, 0, 0, 0, "CELL_MN_02", 4);
	func_625(71, joaat("a_m_y_beachvesp_01"), 610, "CELL_176", "CELL_MP_322", "CELL_400", 68, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_04", 4);
	func_625(72, joaat("a_m_y_beachvesp_01"), 520, "CELL_177", "CELL_MP_323", "CELL_400", 69, 4, "ANS_Vbusy", 7, 16, 0, 0, 0, "CELL_MN_05", 4);
	func_625(73, joaat("a_m_y_beachvesp_01"), 1670, "CELL_178", "CELL_MP_324", "CELL_400", 70, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_06", 4);
	func_625(74, joaat("a_m_y_beachvesp_01"), 4110, "CELL_E_204", "CELL_MP_326", "CELL_400", 71, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_08", 4);
	func_625(75, joaat("a_m_y_beachvesp_01"), 270, "CELL_173", "CELL_MP_327", "CELL_400", 73, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_09", 4);
	func_625(76, -1718834823, 150, "CELL_165", "CELL_MP_329", "CELL_400", 74, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_11", 4);
	func_625(77, joaat("a_m_y_beachvesp_01"), 1970, "CELL_172", "CELL_MP_331", "CELL_400", 72, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_13", 4);
	func_625(83, joaat("a_m_y_beachvesp_01"), 1220, "CELL_E_215", "CELL_MP_342", "CELL_400", 80, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_14", 4);
	func_625(84, joaat("a_m_y_beachvesp_01"), 280, "CELL_E_216", "CELL_MP_343", "CELL_400", 80, 4, "ANS_Bbusy", 7, 16, 0, 0, 0, "CELL_MN_25", 4);
	func_625(85, joaat("a_m_y_beachvesp_01"), 1349, "CELL_E_221", "CELL_MP_344", "CELL_400", 80, 4, "ANS_MWbusy", 7, 16, 0, 0, 0, "CELL_MN_26", 4);
	func_625(86, joaat("a_m_y_beachvesp_01"), 823, "CELL_E_228", "CELL_MP_349", "CELL_400", 80, 4, "ANS_GBusy", 7, 16, 0, 0, 0, "CELL_1004", 4);
	func_625(89, joaat("a_m_y_beachvesp_01"), 1343, "CELL_E_MP0", "CELL_MP_345", "CELL_400", 80, 4, "ANS_MECbusy", 7, 16, 0, 0, 0, "CELL_MN_29", 4);
	func_625(90, joaat("a_m_y_beachvesp_01"), 1060, "CELL_E_242", "CELL_MP_346", "CELL_400", 80, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_30", 4);
	func_625(87, joaat("a_m_y_beachvesp_01"), 1670, "CELL_E_243", "CELL_MP_347", "CELL_400", 84, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_31", 4);
	func_625(78, joaat("a_m_y_beachvesp_01"), 380, "CELL_169", "CELL_MP_332", "CELL_400", 75, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_16", 4);
	func_625(79, joaat("a_m_y_beachvesp_01"), 630, "CELL_184", "CELL_MP_336", "CELL_400", 76, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_20", 4);
	func_625(80, joaat("a_m_y_beachvesp_01"), 170, "CELL_185", "CELL_MP_337", "CELL_400", 77, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_21", 4);
	func_625(41, 0, 1640, "CELL_E_247", "CELL_E_347", "CELL_400", 39, 4, "ANS_PGbusy", 7, 16, 0, 0, 0, "CELL_MN_33", 4);
	func_625(42, 0, 1240, "CELL_E_276", "CELL_E_376", "CELL_400", 40, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_39", 4);
	func_625(81, joaat("a_m_y_beachvesp_01"), 1860, "CELL_182", "CELL_MP_339", "CELL_400", 78, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_23", 4);
	func_625(82, joaat("a_m_y_beachvesp_01"), 1810, "CELL_183", "CELL_MP_340", "CELL_400", 79, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_24", 4);
	func_625(88, joaat("a_m_y_beachvesp_01"), 450, "CELL_E_222", "CELL_330", "CELL_430", 126, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_1091", 4);
	func_625(91, joaat("a_m_y_beachvesp_01"), 1370, "CELL_E_275", "CELL_MP_348", "CELL_400", 85, 4, "ANS_INSbusy", 7, 16, 0, 0, 0, "CELL_MN_38", 4);
	func_625(138, 0, 1810, "CELL_E_271", "CELL_MP_352", "CELL_400", 134, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_34", 4);
	func_625(141, 0, 1810, "CELL_E_272", "CELL_MP_355", "CELL_400", 134, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_35", 4);
	func_625(140, 0, 1810, "CELL_E_273", "CELL_MP_353", "CELL_400", 134, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_36", 4);
	func_625(139, 0, 1810, "CELL_E_274", "CELL_MP_351", "CELL_400", 134, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_37", 4);
	func_625(142, 0, 1810, "CELL_E_269", "CELL_MP_354", "CELL_400", 134, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_42", 4);
	func_625(143, 0, 1810, "CELL_E_270", "CELL_MP_350", "CELL_400", 134, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_43", 4);
	func_625(128, 0, 430, "CELL_130", "CELL_330", "CELL_430", 125, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_1091", 4);
	func_625(129, 0, 1020, "CELL_132", "CELL_330", "CELL_430", 126, 4, "DET_APH1", 7, 16, 0, 0, 0, "CELL_1091", 4);
	func_625(130, 0, 560, "CELL_131", "CELL_331", "CELL_431", 127, 4, "NO_ANSMSG", 7, 16, 2, 2, 2, "CELL_9011", 4);
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[130 /*29*/].f_24[0] = 1;
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[130 /*29*/].f_24[1] = 1;
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[130 /*29*/].f_24[2] = 1;
	func_625(131, 0, 480, "CELL_163", "CELL_394", "CELL_446", 128, 4, "NO_ANSMSG", 7, 16, 2, 2, 2, "CELL_1062", 4);
	func_625(137, 0, 240, "CELL_195", "CELL_300", "CELL_195", 138, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1091", 4);
	func_625(132, 0, 90, "CELL_E_219", "CELL_E_319", "CELL_431", 132, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1091", 4);
	func_625(135, 0, 320, "CELL_109", "CELL_309", "CELL_409", 129, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1091", 4);
	func_625(136, 0, 120, "CELL_ARTU", "CELL_300", "CELL_410", 130, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1091", 4);
	func_625(144, 0, 320, "CELL_196", "CELL_300", "CELL_196", 134, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1091", 4);
	func_625(147, 0, 100, "CELL_181", "CELL_300", "CELL_196", 134, 4, "NO_ANSMSG", 7, 16, 0, 0, 0, "CELL_1091", 4);
	func_623();
	func_622(0, "CELLGW_1", "RON_APH2", "NervousRon");
	func_622(1, "CELLC_MONOC", "CELLPHONE_CHEAT", "CHEAT_MONOC");
	func_622(2, "CELLC_SUPJUM", "CELLPHONE_CHEAT", "CHEAT_SUPJUM");
	func_622(3, "CELLC_HEALA", "CELLPHONE_CHEAT", "CHEAT_HEALA");
	func_622(4, "CELLC_SLIDEYC", "CELLPHONE_CHEAT", "CHEAT_SLIDEYC");
	func_622(5, "CELLC_FASTR", "CELLPHONE_CHEAT", "CHEAT_FASTR");
	func_622(6, "CELLC_WANTDN", "CELLPHONE_CHEAT", "CHEAT_WANTDN");
	func_622(7, "CELLC_WANTUP", "CELLPHONE_CHEAT", "CHEAT_WANTUP");
	func_622(8, "CELLC_WEATHER", "CELLPHONE_CHEAT", "CHEAT_WEATHER");
	func_622(9, "CELLC_FASTS", "CELLPHONE_CHEAT", "CHEAT_FASTS");
	func_622(10, "CELLC_POWER", "CELLPHONE_CHEAT", "CHEAT_POWER");
	func_622(11, "CELLC_CHUTE", "CELLPHONE_CHEAT", "CHEAT_CHUTE");
	func_622(12, "CELLC_BANG", "CELLPHONE_CHEAT", "CHEAT_BANG");
	func_622(13, "CELLC_FLAMB", "CELLPHONE_CHEAT", "CHEAT_FLAMB");
	func_622(14, "CELLC_EXPMEL", "CELLPHONE_CHEAT", "CHEAT_EXPMEL");
	func_622(15, "CELLC_ZEROG", "CELLPHONE_CHEAT", "CHEAT_ZEROG");
	func_622(16, "CELLC_INVINC", "CELLPHONE_CHEAT", "CHEAT_INVINC");
	func_622(17, "CELLC_SLOWMO", "CELLPHONE_CHEAT", "CHEAT_SLOWMO");
	func_622(18, "CELLC_SKYFA", "CELLPHONE_CHEAT", "CHEAT_SKYFA");
	func_622(19, "CELLC_DRUNK", "CELLPHONE_CHEAT", "CHEAT_DRUNK");
	func_622(20, "CELLC_DEADEYE", "CELLPHONE_CHEAT", "CHEAT_DEADEYE");
	func_622(21, "CELLC_BUZZARD", "CELLPHONE_CHEAT", "CHEAT_BUZZARD");
	func_622(22, "CELLC_COMET2", "CELLPHONE_CHEAT", "CHEAT_COMET2");
	func_622(23, "CELLC_BMX", "CELLPHONE_CHEAT", "CHEAT_BMX");
	func_622(24, "CELLC_CADDY", "CELLPHONE_CHEAT", "CHEAT_CADDY");
	func_622(25, "CELLC_DUSTER", "CELLPHONE_CHEAT", "CHEAT_DUSTER");
	func_622(26, "CELLC_PCJ", "CELLPHONE_CHEAT", "CHEAT_PCJ");
	func_622(27, "CELLC_RAPIDGT", "CELLPHONE_CHEAT", "CHEAT_RAPIDGT");
	func_622(28, "CELLC_STRETCH", "CELLPHONE_CHEAT", "CHEAT_STRETCH");
	func_622(29, "CELLC_STUNT", "CELLPHONE_CHEAT", "CHEAT_STUNT");
	func_622(30, "CELLC_TRASH", "CELLPHONE_CHEAT", "CHEAT_TRASH");
	func_622(31, "CELLC_SANCHEZ", "CELLPHONE_CHEAT", "CHEAT_SANCHEZ");
	func_622(32, "CELLC_SEAPLANE", "CELLPHONE_CHEAT", "CHEAT_SEAPLANE");
	func_622(33, "CELLC_DUELC", "CELLPHONE_CHEAT", "CHEAT_DUELC");
	func_622(34, "CELLC_BUBBLE", "CELLPHONE_CHEAT", "CHEAT_BUBBLE");
	func_622(35, "CELLC_WEAPONS", "CELLPHONE_CHEAT", "CHEAT_WEAPONS");
	func_622(36, "CELLC_DIRECTOR", "CELLPHONE_CHEAT", "CHEAT_DIRECTOR");
	func_621(0, 36, "CELL_SFUN_NULL", "CELL_SFUN_NULL");
	func_621(1, 17, "CELL_SFUN_NULL", "CELL_SFUN_NULL");
	func_621(2, 1, "CELL_SFUN_NULL", "CELL_SFUN_NULL");
	func_621(3, 14, "CELL_SFUN_NULL", "CELL_SFUN_NULL");
	func_620(0, 0, "CELL_SFUN_NULL");
	func_620(1, 1, "CELL_SFUN_NULL");
	func_620(2, 2, "CELL_SFUN_NULL");
	func_620(3, 12, "CELL_SFUN_NULL");
	func_625(74, joaat("a_m_y_beachvesp_01"), 1230, "CELL_E_204", "CELL_MP_326", "CELL_400", 71, 4, "NO_ANSMG", 7, 16, 0, 0, 0, "CELL_MN_08", 4);
}

void func_620(int iParam0, int iParam1, char* sParam2)//Position - 0x6515C
{
	MemCopy(&(Global_2101[iParam0 /*16*/]), {Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam1 /*29*/].f_3}, 8);
	StringCopy(&(Global_2101[iParam0 /*16*/].f_8), sParam2, 32);
}

void func_621(int iParam0, int iParam1, char* sParam2, char* sParam3)//Position - 0x6518B
{
	MemCopy(&(Global_2166[iParam0 /*24*/]), {Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam1 /*29*/].f_3}, 8);
	StringCopy(&(Global_2166[iParam0 /*24*/].f_8), sParam2, 32);
	StringCopy(&(Global_2166[iParam0 /*24*/].f_16), sParam3, 32);
}

void func_622(int iParam0, char* sParam1, char* sParam2, char* sParam3)//Position - 0x651C7
{
	StringCopy(&(Global_1582[iParam0 /*14*/]), sParam1, 16);
	StringCopy(&(Global_1582[iParam0 /*14*/].f_4), sParam2, 16);
	StringCopy(&(Global_1582[iParam0 /*14*/].f_8), sParam3, 24);
}

void func_623()//Position - 0x651F4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_624(iVar0, 0, 160, "CELL_700", 25, 1);
		func_624(iVar0, 1, 180, "CELL_710", 18, 1);
		func_624(iVar0, 2, 200, "CELL_720", 23, 1);
		func_624(iVar0, 3, 220, "CELL_730", 20, 1);
		func_624(iVar0, 4, 20, "CELL_740", 23, 1);
		func_624(iVar0, 5, 150, "CELL_705", 18, 1);
		StringCopy(&(Global_3068[iVar0 /*2811*/][0 /*281*/].f_7[0 /*4*/]), "CELL_800", 16);
		Global_3068[iVar0 /*2811*/][0 /*281*/].f_124[0] = 1;
		Global_3068[iVar0 /*2811*/][0 /*281*/].f_84[0] = 140;
		Global_3068[iVar0 /*2811*/][0 /*281*/].f_104[0] = 25;
		StringCopy(&(Global_3068[iVar0 /*2811*/][0 /*281*/].f_7[1 /*4*/]), "CELL_802", 16);
		Global_3068[iVar0 /*2811*/][0 /*281*/].f_124[1] = 0;
		Global_3068[iVar0 /*2811*/][0 /*281*/].f_84[1] = 170;
		Global_3068[iVar0 /*2811*/][0 /*281*/].f_104[1] = 25;
		StringCopy(&(Global_3068[iVar0 /*2811*/][0 /*281*/].f_7[2 /*4*/]), "CELL_801", 16);
		Global_3068[iVar0 /*2811*/][0 /*281*/].f_124[2] = 1;
		Global_3068[iVar0 /*2811*/][0 /*281*/].f_84[2] = 190;
		Global_3068[iVar0 /*2811*/][0 /*281*/].f_104[2] = 26;
		Global_3068[iVar0 /*2811*/][0 /*281*/].f_259 = 0;
		StringCopy(&(Global_3068[iVar0 /*2811*/][1 /*281*/].f_7[0 /*4*/]), "CELL_810", 16);
		Global_3068[iVar0 /*2811*/][1 /*281*/].f_124[0] = 1;
		StringCopy(&(Global_3068[iVar0 /*2811*/][1 /*281*/].f_144[0 /*6*/]), "PHONE_GENERIC_RING_01", 24);
		Global_3068[iVar0 /*2811*/][1 /*281*/].f_84[0] = 160;
		Global_3068[iVar0 /*2811*/][1 /*281*/].f_104[0] = 18;
		StringCopy(&(Global_3068[iVar0 /*2811*/][1 /*281*/].f_7[1 /*4*/]), "CELL_811", 16);
		Global_3068[iVar0 /*2811*/][1 /*281*/].f_124[1] = 1;
		StringCopy(&(Global_3068[iVar0 /*2811*/][1 /*281*/].f_144[1 /*6*/]), "PHONE_GENERIC_RING_02", 24);
		Global_3068[iVar0 /*2811*/][1 /*281*/].f_84[1] = 163;
		Global_3068[iVar0 /*2811*/][1 /*281*/].f_104[1] = 18;
		StringCopy(&(Global_3068[iVar0 /*2811*/][1 /*281*/].f_7[2 /*4*/]), "CELL_812", 16);
		Global_3068[iVar0 /*2811*/][1 /*281*/].f_124[2] = 1;
		StringCopy(&(Global_3068[iVar0 /*2811*/][1 /*281*/].f_144[2 /*6*/]), "PHONE_GENERIC_RING_03", 24);
		Global_3068[iVar0 /*2811*/][1 /*281*/].f_84[2] = 167;
		Global_3068[iVar0 /*2811*/][1 /*281*/].f_104[2] = 18;
		StringCopy(&(Global_3068[iVar0 /*2811*/][1 /*281*/].f_7[3 /*4*/]), "CELL_813", 16);
		Global_3068[iVar0 /*2811*/][1 /*281*/].f_124[3] = 1;
		StringCopy(&(Global_3068[iVar0 /*2811*/][1 /*281*/].f_144[3 /*6*/]), "Silent Ringtone Dummy", 24);
		Global_3068[iVar0 /*2811*/][1 /*281*/].f_84[3] = 168;
		Global_3068[iVar0 /*2811*/][1 /*281*/].f_104[3] = 51;
		StringCopy(&(Global_3068[iVar0 /*2811*/][2 /*281*/].f_7[0 /*4*/]), "CELL_820", 16);
		Global_3068[iVar0 /*2811*/][2 /*281*/].f_124[0] = 0;
		Global_3068[iVar0 /*2811*/][2 /*281*/].f_84[0] = 100;
		Global_3068[iVar0 /*2811*/][2 /*281*/].f_104[0] = 2;
		StringCopy(&(Global_3068[iVar0 /*2811*/][2 /*281*/].f_7[1 /*4*/]), "CELL_820", 16);
		Global_3068[iVar0 /*2811*/][2 /*281*/].f_124[1] = 1;
		Global_3068[iVar0 /*2811*/][2 /*281*/].f_84[1] = 25;
		Global_3068[iVar0 /*2811*/][2 /*281*/].f_104[1] = 23;
		Global_3068[iVar0 /*2811*/][2 /*281*/].f_260[1] = 1;
		StringCopy(&(Global_3068[iVar0 /*2811*/][2 /*281*/].f_7[2 /*4*/]), "CELL_821", 16);
		Global_3068[iVar0 /*2811*/][2 /*281*/].f_124[2] = 1;
		Global_3068[iVar0 /*2811*/][2 /*281*/].f_84[2] = 75;
		Global_3068[iVar0 /*2811*/][2 /*281*/].f_104[2] = 23;
		Global_3068[iVar0 /*2811*/][2 /*281*/].f_260[2] = 2;
		StringCopy(&(Global_3068[iVar0 /*2811*/][2 /*281*/].f_7[3 /*4*/]), "CELL_822", 16);
		Global_3068[iVar0 /*2811*/][2 /*281*/].f_124[3] = 1;
		Global_3068[iVar0 /*2811*/][2 /*281*/].f_84[3] = 187;
		Global_3068[iVar0 /*2811*/][2 /*281*/].f_104[3] = 23;
		Global_3068[iVar0 /*2811*/][2 /*281*/].f_260[3] = 3;
		StringCopy(&(Global_3068[iVar0 /*2811*/][2 /*281*/].f_7[4 /*4*/]), "CELL_823", 16);
		Global_3068[iVar0 /*2811*/][2 /*281*/].f_124[4] = 1;
		Global_3068[iVar0 /*2811*/][2 /*281*/].f_84[4] = 157;
		Global_3068[iVar0 /*2811*/][2 /*281*/].f_104[4] = 23;
		Global_3068[iVar0 /*2811*/][2 /*281*/].f_260[4] = 4;
		StringCopy(&(Global_3068[iVar0 /*2811*/][2 /*281*/].f_7[5 /*4*/]), "CELL_824", 16);
		Global_3068[iVar0 /*2811*/][2 /*281*/].f_124[5] = 1;
		Global_3068[iVar0 /*2811*/][2 /*281*/].f_84[5] = 77;
		Global_3068[iVar0 /*2811*/][2 /*281*/].f_104[5] = 23;
		Global_3068[iVar0 /*2811*/][2 /*281*/].f_260[5] = 5;
		StringCopy(&(Global_3068[iVar0 /*2811*/][2 /*281*/].f_7[6 /*4*/]), "CELL_825", 16);
		Global_3068[iVar0 /*2811*/][2 /*281*/].f_124[6] = 1;
		Global_3068[iVar0 /*2811*/][2 /*281*/].f_84[6] = 168;
		Global_3068[iVar0 /*2811*/][2 /*281*/].f_104[6] = 23;
		Global_3068[iVar0 /*2811*/][2 /*281*/].f_260[6] = 6;
		StringCopy(&(Global_3068[iVar0 /*2811*/][2 /*281*/].f_7[7 /*4*/]), "CELL_826", 16);
		Global_3068[iVar0 /*2811*/][2 /*281*/].f_124[7] = 1;
		Global_3068[iVar0 /*2811*/][2 /*281*/].f_84[7] = 164;
		Global_3068[iVar0 /*2811*/][2 /*281*/].f_104[7] = 23;
		Global_3068[iVar0 /*2811*/][2 /*281*/].f_260[7] = 7;
		StringCopy(&(Global_3068[iVar0 /*2811*/][2 /*281*/].f_7[8 /*4*/]), "CELL_846", 16);
		Global_3068[iVar0 /*2811*/][2 /*281*/].f_124[8] = 0;
		Global_3068[iVar0 /*2811*/][2 /*281*/].f_84[8] = 196;
		Global_3068[iVar0 /*2811*/][2 /*281*/].f_104[8] = 23;
		Global_3068[iVar0 /*2811*/][2 /*281*/].f_260[8] = 2;
		if (iVar0 == 3)
		{
			StringCopy(&(Global_3068[iVar0 /*2811*/][4 /*281*/].f_7[0 /*4*/]), "CELL_CREWEMB", 16);
			Global_3068[iVar0 /*2811*/][4 /*281*/].f_124[0] = 1;
			Global_3068[iVar0 /*2811*/][4 /*281*/].f_84[0] = 300;
			Global_3068[iVar0 /*2811*/][4 /*281*/].f_104[0] = 23;
		}
		else
		{
			StringCopy(&(Global_3068[iVar0 /*2811*/][4 /*281*/].f_7[0 /*4*/]), "CELL_840", 16);
			Global_3068[iVar0 /*2811*/][4 /*281*/].f_124[0] = 1;
			Global_3068[iVar0 /*2811*/][4 /*281*/].f_84[0] = 300;
			Global_3068[iVar0 /*2811*/][4 /*281*/].f_104[0] = 23;
		}
		StringCopy(&(Global_3068[iVar0 /*2811*/][4 /*281*/].f_7[1 /*4*/]), "CELL_841", 16);
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_124[1] = 0;
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_84[1] = 3021;
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_104[1] = 23;
		StringCopy(&(Global_3068[iVar0 /*2811*/][4 /*281*/].f_7[2 /*4*/]), "CELL_842", 16);
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_124[2] = 0;
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_84[2] = 3233;
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_104[2] = 23;
		StringCopy(&(Global_3068[iVar0 /*2811*/][4 /*281*/].f_7[3 /*4*/]), "CELL_843", 16);
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_124[3] = 0;
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_84[3] = 3205;
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_104[3] = 23;
		StringCopy(&(Global_3068[iVar0 /*2811*/][4 /*281*/].f_7[4 /*4*/]), "CELL_844", 16);
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_124[4] = 1;
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_84[4] = 3197;
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_104[4] = 23;
		StringCopy(&(Global_3068[iVar0 /*2811*/][4 /*281*/].f_7[5 /*4*/]), "CELL_845", 16);
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_124[5] = 1;
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_84[5] = 3163;
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_104[5] = 23;
		StringCopy(&(Global_3068[iVar0 /*2811*/][4 /*281*/].f_7[6 /*4*/]), "CELL_846", 16);
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_124[6] = 1;
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_84[6] = 3194;
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_104[6] = 23;
		StringCopy(&(Global_3068[iVar0 /*2811*/][4 /*281*/].f_7[7 /*4*/]), "CELL_847", 16);
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_124[7] = 1;
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_84[7] = 3192;
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_104[7] = 23;
		StringCopy(&(Global_3068[iVar0 /*2811*/][4 /*281*/].f_7[8 /*4*/]), "CELL_848", 16);
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_124[8] = 1;
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_84[8] = 3167;
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_104[8] = 23;
		StringCopy(&(Global_3068[iVar0 /*2811*/][4 /*281*/].f_7[9 /*4*/]), "CELL_849", 16);
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_124[9] = 1;
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_84[9] = 3161;
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_104[9] = 23;
		StringCopy(&(Global_3068[iVar0 /*2811*/][4 /*281*/].f_7[10 /*4*/]), "CELL_850", 16);
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_124[10] = 1;
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_84[10] = 3023;
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_104[10] = 23;
		StringCopy(&(Global_3068[iVar0 /*2811*/][4 /*281*/].f_7[11 /*4*/]), "CELL_851", 16);
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_124[11] = 1;
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_84[11] = 3038;
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_104[11] = 23;
		StringCopy(&(Global_3068[iVar0 /*2811*/][4 /*281*/].f_7[12 /*4*/]), "CELL_852", 16);
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_124[12] = 1;
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_84[12] = 3045;
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_104[12] = 23;
		StringCopy(&(Global_3068[iVar0 /*2811*/][4 /*281*/].f_7[13 /*4*/]), "CELL_853", 16);
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_124[13] = 1;
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_84[13] = 3065;
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_104[13] = 23;
		StringCopy(&(Global_3068[iVar0 /*2811*/][4 /*281*/].f_7[14 /*4*/]), "CELL_854", 16);
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_124[14] = 1;
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_84[14] = 3102;
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_104[14] = 23;
		StringCopy(&(Global_3068[iVar0 /*2811*/][4 /*281*/].f_7[15 /*4*/]), "CELL_855", 16);
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_124[15] = 1;
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_84[15] = 3190;
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_104[15] = 23;
		StringCopy(&(Global_3068[iVar0 /*2811*/][4 /*281*/].f_7[16 /*4*/]), "CELL_856", 16);
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_124[16] = 1;
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_84[16] = 3195;
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_104[16] = 23;
		StringCopy(&(Global_3068[iVar0 /*2811*/][4 /*281*/].f_7[17 /*4*/]), "CELL_857", 16);
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_124[17] = 1;
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_84[17] = 3198;
		Global_3068[iVar0 /*2811*/][4 /*281*/].f_104[17] = 23;
		Global_3068[iVar0 /*2811*/][2 /*281*/].f_259 = 1;
		StringCopy(&(Global_3068[iVar0 /*2811*/][3 /*281*/].f_7[0 /*4*/]), "CELL_831", 16);
		Global_3068[iVar0 /*2811*/][3 /*281*/].f_124[0] = 1;
		Global_3068[iVar0 /*2811*/][3 /*281*/].f_84[0] = 153;
		Global_3068[iVar0 /*2811*/][3 /*281*/].f_104[0] = 21;
		StringCopy(&(Global_3068[iVar0 /*2811*/][3 /*281*/].f_7[1 /*4*/]), "CELL_830", 16);
		Global_3068[iVar0 /*2811*/][3 /*281*/].f_124[1] = 1;
		Global_3068[iVar0 /*2811*/][3 /*281*/].f_84[1] = 157;
		Global_3068[iVar0 /*2811*/][3 /*281*/].f_104[1] = 20;
		Global_3068[iVar0 /*2811*/][3 /*281*/].f_259 = 1;
		StringCopy(&(Global_3068[iVar0 /*2811*/][5 /*281*/].f_7[0 /*4*/]), "CELL_831", 16);
		Global_3068[iVar0 /*2811*/][5 /*281*/].f_124[0] = 1;
		Global_3068[iVar0 /*2811*/][5 /*281*/].f_84[0] = 153;
		Global_3068[iVar0 /*2811*/][5 /*281*/].f_104[0] = 51;
		StringCopy(&(Global_3068[iVar0 /*2811*/][5 /*281*/].f_7[1 /*4*/]), "CELL_830", 16);
		Global_3068[iVar0 /*2811*/][5 /*281*/].f_124[1] = 1;
		Global_3068[iVar0 /*2811*/][5 /*281*/].f_84[1] = 157;
		Global_3068[iVar0 /*2811*/][5 /*281*/].f_104[1] = 18;
		Global_3068[iVar0 /*2811*/][5 /*281*/].f_259 = 1;
		iVar0++;
	}
	StringCopy(&(Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[0 /*20*/]), "cellphone_iFruit", 24);
	Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[0 /*20*/].f_6 = 1;
	StringCopy(&(Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[0 /*20*/].f_11), "PHONE_GENERIC_RING_01", 24);
	Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[0 /*20*/].f_7 = 0;
	Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[0 /*20*/].f_10 = 1;
	Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[0 /*20*/].f_8 = 1;
	Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[0 /*20*/].f_9 = 0;
	Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[0 /*20*/].f_17 = 0;
	StringCopy(&(Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[1 /*20*/]), "cellphone_badger", 24);
	Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[1 /*20*/].f_6 = 2;
	StringCopy(&(Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[1 /*20*/].f_11), "PHONE_GENERIC_RING_02", 24);
	Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[1 /*20*/].f_7 = 3;
	Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[1 /*20*/].f_10 = 1;
	Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[1 /*20*/].f_8 = 3;
	Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[1 /*20*/].f_9 = 0;
	Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[1 /*20*/].f_17 = 0;
	StringCopy(&(Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[2 /*20*/]), "cellphone_facade", 24);
	Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[2 /*20*/].f_6 = 3;
	StringCopy(&(Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[2 /*20*/].f_11), "PHONE_GENERIC_RING_03", 24);
	Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[2 /*20*/].f_7 = 2;
	Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[2 /*20*/].f_10 = 1;
	Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[2 /*20*/].f_8 = 2;
	Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[2 /*20*/].f_9 = 0;
	Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[2 /*20*/].f_17 = 0;
	StringCopy(&(Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[3 /*20*/]), "cellphone_ifruit", 24);
	Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[3 /*20*/].f_6 = 1;
	StringCopy(&(Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[3 /*20*/].f_11), "PHONE_GENERIC_RING_01", 24);
	Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[3 /*20*/].f_7 = 1;
	Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[3 /*20*/].f_10 = 1;
	Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[3 /*20*/].f_8 = 1;
	Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[3 /*20*/].f_9 = 0;
	Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[3 /*20*/].f_17 = 0;
}

void func_624(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x661E0
{
	Global_3068[iParam0 /*2811*/][iParam1 /*281*/] = iParam2;
	Global_3068[iParam0 /*2811*/][iParam1 /*281*/].f_1 = iParam2;
	StringCopy(&(Global_3068[iParam0 /*2811*/][iParam1 /*281*/].f_2), sParam3, 16);
	Global_3068[iParam0 /*2811*/][iParam1 /*281*/].f_6 = iParam4;
	Global_3068[iParam0 /*2811*/][iParam1 /*281*/].f_280 = iParam5;
	if (Global_3068[iParam0 /*2811*/][iParam1 /*281*/].f_1 == 0)
	{
		Global_3068[iParam0 /*2811*/][iParam1 /*281*/].f_1 = 0;
	}
}

void func_625(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, char* sParam14, int iParam15)//Position - 0x66261
{
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/] = iParam1;
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_1 = iParam2;
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_2 = Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_1;
	StringCopy(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_3), sParam3, 16);
	StringCopy(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_7), sParam4, 16);
	sParam5 = sParam5;
	Global_97[iParam0 /*10*/].f_8 = iParam6;
	Global_97[iParam0 /*10*/].f_9 = iParam7;
	StringCopy(&(Global_97[iParam0 /*10*/]), sParam8, 16);
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_11 = iParam9;
	iParam10 = iParam10;
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_12[0] = iParam11;
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_12[1] = iParam12;
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_12[2] = iParam13;
	StringCopy(&(Global_97[iParam0 /*10*/].f_4), sParam14, 16);
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_17 = iParam15;
}

void func_626()//Position - 0x6634B
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	
	Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3853 = 0f;
	Global_97080 = 69f;
	fVar0 = (55f / Global_97080);
	func_627(0, 1, fVar0, 0, 0, "M_ARM1", 0, 127, 0, 0);
	func_627(1, 1, fVar0, 0, 0, "M_ARM2", 1, 127, 0, 0);
	func_627(2, 1, fVar0, 0, 0, "M_ARM3", 2, 127, 0, 0);
	func_627(3, 1, fVar0, 0, 0, "M_CAR1", 8, 127, 0, 0);
	func_627(4, 1, fVar0, 0, 0, "M_CAR2", 9, 127, 0, 0);
	func_627(5, 1, fVar0, 0, 0, "M_CAR3", 10, 127, 0, 0);
	func_627(6, 1, fVar0, 0, 0, "M_CAR4", 11, 127, 0, 0);
	func_627(7, 1, fVar0, 0, 0, "M_CHN1", 12, 127, 0, 0);
	func_627(8, 1, fVar0, 0, 0, "M_CHN2", 13, 127, 0, 0);
	func_627(9, 1, fVar0, 0, 0, "M_EXL1", 14, 127, 0, 0);
	func_627(10, 1, fVar0, 0, 0, "M_EXL2", 15, 127, 0, 0);
	func_627(11, 1, fVar0, 0, 0, "M_EXL3", 16, 127, 0, 0);
	func_627(12, 1, fVar0, 0, 0, "M_FAM1", 17, 127, 0, 0);
	func_627(13, 1, fVar0, 0, 0, "M_FAM2", 18, 127, 0, 0);
	func_627(14, 1, fVar0, 0, 0, "M_FAM3", 19, 127, 0, 0);
	func_627(15, 1, fVar0, 0, 0, "M_FAM4", 20, 127, 0, 0);
	func_627(16, 1, fVar0, 0, 0, "M_FAM5", 21, 127, 0, 0);
	func_627(17, 1, fVar0, 0, 0, "M_FAM6", 22, 127, 0, 0);
	func_627(18, 1, fVar0, 0, 0, "M_FIB1", 29, 127, 0, 0);
	func_627(19, 1, fVar0, 0, 0, "M_FIB2", 30, 127, 0, 0);
	func_627(20, 1, fVar0, 0, 0, "M_FIB3", 31, 127, 0, 0);
	func_627(21, 1, fVar0, 0, 0, "M_FB4P1", 33, 127, 0, 0);
	func_627(22, 1, fVar0, 0, 0, "M_FB4P2", 34, 127, 0, 0);
	func_627(23, 1, fVar0, 0, 0, "M_FB4P3", 35, 127, 0, 0);
	func_627(24, 1, fVar0, 0, 0, "M_FB4P4", 36, 127, 0, 0);
	func_627(25, 1, fVar0, 0, 0, "M_FB4P5", 37, 127, 0, 0);
	func_627(26, 1, fVar0, 0, 0, "M_FIB4", 38, 127, 0, 0);
	func_627(27, 1, fVar0, 0, 0, "M_FIB5", 39, 127, 0, 0);
	func_627(28, 1, fVar0, 0, 0, "M_FRA0", 40, 127, 0, 0);
	func_627(29, 1, fVar0, 0, 0, "M_FRA1", 41, 127, 0, 0);
	func_627(30, 1, fVar0, 0, 0, "M_FRA2", 42, 127, 0, 0);
	func_627(31, 1, fVar0, 0, 0, "M_LM1", 43, 127, 0, 0);
	func_627(32, 1, fVar0, 0, 0, "M_LS1", 44, 127, 0, 0);
	func_627(34, 1, fVar0, 0, 0, "M_MIC1", 46, 127, 0, 0);
	func_627(35, 1, fVar0, 0, 0, "M_MIC2", 47, 127, 0, 0);
	func_627(36, 1, fVar0, 0, 0, "M_MIC3", 48, 127, 0, 0);
	func_627(37, 1, fVar0, 0, 0, "M_MIC4", 49, 127, 0, 0);
	func_627(38, 1, fVar0, 0, 0, "M_PRO1", 53, 127, 0, 0);
	func_627(39, 1, fVar0, 0, 0, "M_MAR1", 45, 127, 0, 0);
	func_627(40, 1, fVar0, 0, 0, "M_SOL1", 59, 127, 0, 0);
	func_627(41, 1, fVar0, 0, 0, "M_SOL2", 60, 127, 0, 0);
	func_627(42, 1, fVar0, 0, 0, "M_SOL3", 61, 127, 0, 0);
	func_627(43, 1, fVar0, 0, 0, "M_TRV1", 62, 127, 0, 0);
	func_627(44, 1, fVar0, 0, 0, "M_TRV2", 63, 127, 0, 0);
	func_627(45, 1, fVar0, 0, 0, "M_TRV3", 64, 127, 0, 0);
	func_627(46, 1, fVar0, 0, 0, "M_TRV4", 65, 127, 0, 0);
	func_627(47, 1, fVar0, 0, 0, "M_AH1", 66, 127, 0, 0);
	func_627(48, 1, fVar0, 0, 0, "M_AH2", 67, 127, 0, 0);
	func_627(49, 1, fVar0, 0, 0, "M_AH3a", 69, 127, 1, 0);
	func_627(50, 1, fVar0, 0, 0, "FHPB", 77, 127, 0, 0);
	func_627(51, 1, fVar0, 0, 0, "M_FH1", 76, 127, 0, 0);
	func_627(52, 1, fVar0, 0, 0, "M_FH2a", 84, 127, 1, 0);
	func_627(53, 1, fVar0, 0, 0, "M_JH1", 86, 127, 0, 0);
	func_627(54, 1, fVar0, 0, 0, "SC_JWL_P_CHOICE", 87, 127, 1, 0);
	func_627(55, 1, fVar0, 0, 0, "M_JH2A", 90, 127, 0, 0);
	func_627(57, 1, fVar0, 0, 0, "M_RH1", 91, 127, 0, 0);
	func_627(56, 1, fVar0, 0, 0, "M_RHP1", 92, 127, 0, 0);
	func_627(58, 1, fVar0, 0, 0, "M_RH2", 93, 127, 0, 0);
	func_627(59, 1, fVar0, 0, 0, "DHP1", 72, 127, 0, 0);
	func_627(60, 1, fVar0, 0, 0, "M_DH1", 71, 127, 0, 0);
	func_627(61, 1, fVar0, 0, 0, "M_DH2A", 74, 127, 1, 0);
	func_627(62, 1, fVar0, 0, 0, "SC_FINP1_CHOICE", 78, 127, 1, 0);
	func_627(63, 1, fVar0, 0, 0, "SC_FINP2_CHOICE", 80, 127, 1, 0);
	func_627(64, 0, fVar0, 0, 0, "M_FINC1", 26, 127, 0, 0);
	func_627(65, 1, fVar0, 0, 0, "SC_FIN_K_CHOICE", 24, 127, 1, 0);
	func_627(144, 1, fVar0, 0, 0, "ASS1", 3, 127, 0, 0);
	func_627(145, 1, fVar0, 0, 0, "ASS2", 4, 127, 0, 0);
	func_627(146, 1, fVar0, 0, 0, "ASS3", 5, 127, 0, 0);
	func_627(147, 1, fVar0, 0, 0, "ASS4", 6, 127, 0, 0);
	func_627(148, 1, fVar0, 0, 0, "ASS5", 7, 127, 0, 0);
	Global_97083 = 20f;
	fVar1 = (10f / Global_97083);
	func_627(66, 7, fVar1, 0, 0, "SC_RC_OME1", 44, 127, 0, 0);
	func_627(67, 7, fVar1, 0, 0, "SC_RC_OME2", 45, 127, 0, 0);
	func_627(68, 7, fVar1, 0, 0, "SC_RC_DRE1", 8, 127, 0, 0);
	func_627(69, 8, fVar1, 0, 0, "SC_RC_BA1", 2, 127, 0, 0);
	func_627(70, 8, fVar1, 0, 0, "SC_RC_BA2", 3, 127, 0, 0);
	func_627(71, 7, fVar1, 0, 0, "SC_RC_BA3", 4, 127, 0, 0);
	func_627(72, 7, fVar1, 0, 0, "SC_RC_BA4", 7, 127, 0, 0);
	func_627(73, 8, fVar1, 0, 0, "SC_RC_EPS1", 9, 127, 0, 0);
	func_627(74, 8, fVar1, 0, 0, "SC_RC_EPS2", 10, 127, 0, 0);
	func_627(75, 8, fVar1, 0, 0, "SC_RC_EPS3", 11, 127, 0, 0);
	func_627(76, 8, fVar1, 0, 0, "SC_RC_EPS4", 12, 127, 0, 0);
	func_627(77, 8, fVar1, 0, 0, "SC_RC_EPS5", 13, 127, 0, 0);
	func_627(78, 8, fVar1, 0, 0, "SC_RC_EPS6", 14, 127, 0, 0);
	func_627(79, 8, fVar1, 0, 0, "SC_RC_EPS7", 15, 127, 0, 0);
	func_627(80, 8, fVar1, 0, 0, "SC_RC_EPS8", 16, 127, 0, 0);
	func_627(81, 7, fVar1, 0, 0, "SC_RC_EXT1", 17, 127, 0, 0);
	func_627(82, 7, fVar1, 0, 0, "SC_RC_EXT2", 18, 127, 0, 0);
	func_627(83, 7, fVar1, 0, 0, "SC_RC_EXT3", 19, 127, 0, 0);
	func_627(84, 7, fVar1, 0, 0, "SC_RC_EXT4", 20, 127, 0, 0);
	func_627(85, 8, fVar1, 0, 0, "SC_RC_FAN1", 21, 127, 0, 0);
	func_627(86, 8, fVar1, 0, 0, "SC_RC_FAN2", 22, 127, 0, 0);
	func_627(87, 7, fVar1, 0, 0, "SC_RC_FAN3", 23, 127, 0, 0);
	func_627(178, 8, fVar1, 0, 0, "SC_RC_HUN1", 25, 127, 0, 0);
	func_627(179, 8, fVar1, 0, 0, "SC_RC_HUN2", 26, 127, 0, 0);
	func_627(88, 8, fVar1, 0, 0, "SC_RC_JOS1", 27, 127, 0, 0);
	func_627(89, 8, fVar1, 0, 0, "SC_RC_JOS2", 28, 127, 0, 0);
	func_627(90, 8, fVar1, 0, 0, "SC_RC_JOS3", 29, 127, 0, 0);
	func_627(91, 8, fVar1, 0, 0, "SC_RC_JOS4", 30, 127, 0, 0);
	func_627(92, 8, fVar1, 0, 0, "SC_RC_MIN1", 32, 127, 0, 0);
	func_627(93, 8, fVar1, 0, 0, "SC_RC_MIN2", 33, 127, 0, 0);
	func_627(94, 8, fVar1, 0, 0, "SC_RC_MIN3", 34, 127, 0, 0);
	func_627(95, 8, fVar1, 0, 0, "SC_RC_NI1", 37, 127, 0, 0);
	func_627(96, 8, fVar1, 0, 0, "SC_RC_NI1A", 38, 127, 0, 0);
	func_627(97, 8, fVar1, 0, 0, "SC_RC_NI1B", 39, 127, 0, 0);
	func_627(98, 8, fVar1, 0, 0, "SC_RC_NI1C", 40, 127, 0, 0);
	func_627(99, 8, fVar1, 0, 0, "SC_RC_NI1D", 41, 127, 0, 0);
	func_627(100, 8, fVar1, 0, 0, "SC_RC_NI2", 42, 127, 0, 0);
	func_627(101, 8, fVar1, 0, 0, "SC_RC_NI3", 43, 127, 0, 0);
	func_627(102, 7, fVar1, 0, 0, "SC_RC_PA1", 46, 127, 0, 0);
	func_627(103, 7, fVar1, 0, 0, "SC_RC_PA2", 47, 127, 0, 0);
	func_627(104, 7, fVar1, 0, 0, "SC_RC_PA3", 48, 127, 0, 0);
	func_627(105, 7, fVar1, 0, 0, "SC_RC_PA4", 51, 127, 0, 0);
	func_627(208, 7, fVar1, 0, 0, "SC_RC_TON1", 58, 127, 0, 0);
	func_627(209, 7, fVar1, 0, 0, "SC_RC_TON2", 59, 127, 0, 0);
	func_627(210, 7, fVar1, 0, 0, "SC_RC_TON3", 60, 127, 0, 0);
	func_627(211, 7, fVar1, 0, 0, "SC_RC_TON4", 61, 127, 0, 0);
	func_627(212, 7, fVar1, 0, 0, "SC_RC_TON5", 62, 127, 0, 0);
	func_627(106, 7, fVar1, 0, 0, "SC_RC_HAO1", 24, 127, 0, 0);
	func_627(107, 8, fVar1, 0, 0, "SC_RC_MAU1", 31, 127, 0, 0);
	func_627(108, 8, fVar1, 0, 0, "SC_RC_SAS1", 57, 127, 0, 0);
	func_627(109, 8, fVar1, 0, 0, "SC_RC_ABI1", 0, 127, 0, 0);
	func_627(110, 8, fVar1, 0, 0, "SC_RC_MRS1", 35, 127, 0, 0);
	func_627(111, 8, fVar1, 0, 0, "SC_RC_MRS2", 36, 127, 0, 0);
	Global_97081 = 42f;
	fVar2 = (10f / Global_97081);
	func_627(112, 3, fVar2, 0, 0, "SC_MG_OFF1", 4, 0, 0, 0);
	func_627(113, 3, fVar2, 0, 0, "SC_MG_OFF2", 4, 1, 0, 0);
	func_627(114, 3, fVar2, 0, 0, "SC_MG_OFF3", 4, 2, 0, 0);
	func_627(115, 3, fVar2, 0, 0, "SC_MG_OFF4", 4, 3, 0, 0);
	func_627(116, 3, fVar2, 0, 0, "SC_MG_OFF5", 4, 4, 0, 0);
	func_627(117, 3, fVar2, 0, 0, "SC_MG_OFF6", 4, 5, 0, 0);
	func_627(118, 0, fVar2, 0, 0, "MGSRm", 11, 0, 0, 0);
	func_627(119, 3, fVar2, 0, 0, "SC_MG_SHHAN", 11, 0, 0, 0);
	func_627(120, 3, fVar2, 0, 0, "SC_MG_SHSUB", 11, 1, 0, 0);
	func_627(121, 3, fVar2, 0, 0, "SC_MG_SHRIF", 11, 2, 0, 0);
	func_627(122, 3, fVar2, 0, 0, "SC_MG_SHLMG", 11, 3, 0, 0);
	func_627(123, 3, fVar2, 0, 0, "SC_MG_SHHVY", 11, 4, 0, 0);
	func_627(124, 3, fVar2, 0, 0, "SC_MG_SHSHO", 11, 5, 0, 0);
	func_627(125, 4, fVar2, 0, 0, "MGSP", 10, 0, 0, 0);
	func_627(126, 3, fVar2, 0, 0, "SC_MG_TENN", 13, 0, 0, 0);
	func_627(127, 3, fVar2, 0, 0, "SC_MG_GOLF", 2, 0, 0, 0);
	func_627(128, 3, fVar2, 0, 0, "SC_MG_BJUM", 0, 0, 0, 0);
	func_627(129, 3, fVar2, 0, 0, "SC_MG_SKYD", 0, 1, 0, 0);
	func_627(141, 3, fVar2, 0, 0, "SC_MG_TRI1", 17, 0, 0, 0);
	func_627(142, 3, fVar2, 0, 0, "SC_MG_TRI2", 17, 1, 0, 0);
	func_627(143, 3, fVar2, 0, 0, "SC_MG_TRI3", 17, 2, 0, 0);
	func_627(131, 3, fVar2, 0, 0, "SC_MG_STRP", 9, 0, 0, 0);
	func_627(130, 3, fVar2, 0, 0, "SC_MG_DART", 1, 0, 0, 0);
	func_627(132, 3, fVar2, 0, 0, "SC_MG_SNCA", 7, 0, 0, 0);
	func_627(133, 3, fVar2, 0, 0, "SC_MG_SSC", 7, 1, 0, 0);
	func_627(134, 3, fVar2, 0, 0, "SC_MG_SCAA", 7, 2, 0, 0);
	func_627(135, 3, fVar2, 0, 0, "SC_MG_SCAB", 7, 3, 0, 0);
	func_627(136, 3, fVar2, 0, 0, "SC_MG_SRCC", 8, 0, 0, 0);
	func_627(137, 3, fVar2, 0, 0, "SC_MG_SRAP", 8, 1, 0, 0);
	func_627(138, 3, fVar2, 0, 0, "SC_MG_SRFW", 8, 2, 0, 0);
	func_627(139, 3, fVar2, 0, 0, "SC_MG_SRVC", 8, 3, 0, 0);
	func_627(140, 3, fVar2, 0, 0, "SC_MG_SRLS", 8, 4, 0, 0);
	func_627(181, 3, fVar2, 0, 0, "SC_MGPS1", 5, 0, 0, 0);
	func_627(182, 3, fVar2, 0, 0, "SC_MGPS2", 5, 1, 0, 0);
	func_627(183, 3, fVar2, 0, 0, "SC_MGPS3", 5, 2, 0, 0);
	func_627(184, 3, fVar2, 0, 0, "SC_MGPS4", 5, 3, 0, 0);
	func_627(185, 3, fVar2, 0, 0, "SC_MGPS5", 5, 4, 0, 0);
	func_627(186, 3, fVar2, 0, 0, "SC_MGPS6", 5, 5, 0, 0);
	func_627(187, 3, fVar2, 0, 0, "SC_MGPS7", 5, 6, 0, 0);
	func_627(188, 3, fVar2, 0, 0, "SC_MGPS8", 5, 7, 0, 0);
	func_627(189, 3, fVar2, 0, 0, "SC_MGPS9", 5, 8, 0, 0);
	func_627(190, 3, fVar2, 0, 0, "SC_MGPS10", 5, 9, 0, 0);
	func_627(191, 3, fVar2, 0, 0, "SC_MGPS11", 5, 10, 0, 0);
	func_627(192, 3, fVar2, 0, 0, "SC_MGPS12", 5, 11, 0, 0);
	func_627(193, 0, fVar2, 0, 0, "SC_MGPS13", 5, 12, 0, 0);
	Global_97082 = 0f;
	fVar3 = (0f / Global_97082);
	func_627(149, 6, fVar3, 0, 0, "SC_OJBB3", 15, 0, 0, 0);
	func_627(150, 6, fVar3, 0, 0, "SC_OJBB5", 15, 1, 0, 0);
	func_627(151, 6, fVar3, 0, 0, "SC_OJBB6", 15, 2, 0, 0);
	func_627(152, 6, fVar3, 0, 0, "SC_OJBB7", 15, 3, 0, 0);
	func_627(153, 6, fVar3, 0, 0, "OJDA1", 15, 0, 0, 0);
	func_627(154, 6, fVar3, 0, 0, "OJDA2", 15, 1, 0, 0);
	func_627(155, 6, fVar3, 0, 0, "OJDA3", 15, 2, 0, 0);
	func_627(156, 6, fVar3, 0, 0, "OJDA4", 15, 3, 0, 0);
	func_627(157, 6, fVar3, 0, 0, "OJDA5", 15, 4, 0, 0);
	func_627(158, 6, fVar3, 0, 0, "OJDG1", 16, 0, 0, 0);
	func_627(159, 6, fVar3, 0, 0, "OJDG2", 16, 1, 0, 0);
	func_627(160, 6, fVar3, 0, 0, "OJDG3", 16, 2, 0, 0);
	func_627(161, 6, fVar3, 0, 0, "OJDG4", 16, 3, 0, 0);
	func_627(162, 6, fVar3, 0, 0, "OJDG5", 16, 4, 0, 0);
	func_627(163, 0, fVar3, 0, 0, "OJDG6", 16, 5, 0, 0);
	func_627(164, 0, fVar3, 0, 0, "OJDG7", 16, 6, 0, 0);
	func_627(165, 0, fVar3, 0, 0, "OJDG8", 16, 7, 0, 0);
	func_627(166, 0, fVar3, 0, 0, "OJDG9", 16, 8, 0, 0);
	func_627(167, 0, fVar3, 0, 0, "OJDG10", 16, 9, 0, 0);
	func_627(168, 0, fVar3, 0, 0, "OJGD11", 16, 10, 0, 0);
	func_627(169, 0, fVar3, 0, 0, "OJDG12", 16, 11, 0, 0);
	func_627(170, 0, fVar3, 0, 0, "OJDG13", 16, 12, 0, 0);
	func_627(171, 0, fVar3, 0, 0, "OJDG14", 16, 13, 0, 0);
	func_627(172, 0, fVar3, 0, 0, "OJDG15", 16, 14, 0, 0);
	func_627(173, 0, fVar3, 0, 0, "OJDG16", 16, 15, 0, 0);
	func_627(174, 0, fVar3, 0, 0, "OJDG17", 16, 16, 0, 0);
	func_627(175, 0, fVar3, 0, 0, "OJDG18", 16, 17, 0, 0);
	func_627(176, 0, fVar3, 0, 0, "OJDG19", 16, 18, 0, 0);
	func_627(177, 0, fVar3, 0, 0, "OJDG20", 16, 19, 0, 0);
	func_627(194, 6, fVar3, 0, 0, "SC_RC_RAM1", 6, 0, 0, 0);
	func_627(196, 6, fVar3, 0, 0, "SC_RC_RAM2", 6, 1, 0, 0);
	func_627(197, 6, fVar3, 0, 0, "SC_RC_RAM3", 6, 2, 0, 0);
	func_627(198, 6, fVar3, 0, 0, "SC_RC_RAM4", 6, 3, 0, 0);
	func_627(195, 6, fVar3, 0, 0, "SC_RC_RAM5", 6, 4, 0, 0);
	func_627(180, 6, fVar3, 0, 0, "OJHU", 3, 0, 0, 0);
	func_627(199, 0, fVar3, 0, 0, "OJTX1", 12, 0, 0, 0);
	func_627(200, 0, fVar3, 0, 0, "OJTX2", 12, 1, 0, 0);
	func_627(201, 0, fVar3, 0, 0, "OJTX3", 12, 2, 0, 0);
	func_627(202, 0, fVar3, 0, 0, "OJTX4", 12, 3, 0, 0);
	func_627(203, 0, fVar3, 0, 0, "OJTX5", 12, 4, 0, 0);
	func_627(204, 0, fVar3, 0, 0, "OJTX7", 12, 6, 0, 0);
	func_627(205, 0, fVar3, 0, 0, "OJTX8", 12, 7, 0, 0);
	func_627(206, 0, fVar3, 0, 0, "OJTX9", 12, 8, 0, 0);
	func_627(207, 0, fVar3, 0, 0, "OJTX10", 12, 9, 0, 0);
	Global_97084 = 59f;
	Global_97079 = 14;
	fVar4 = (5f / Global_97084);
	func_627(213, 9, fVar4, 0, 0, "RE8A", 127, 127, 0, 0);
	func_627(214, 9, fVar4, 0, 0, "RE8B", 127, 127, 0, 0);
	func_627(215, 9, fVar4, 0, 0, "RE66", 127, 127, 0, 0);
	func_627(219, 9, fVar4, 0, 0, "RE25", 127, 127, 0, 0);
	func_627(216, 9, fVar4, 0, 0, "RE28", 127, 127, 0, 0);
	func_627(217, 9, fVar4, 0, 0, "RE32A", 127, 127, 0, 0);
	func_627(218, 9, fVar4, 0, 0, "RE35", 127, 127, 0, 0);
	func_627(221, 9, fVar4, 0, 0, "RE44A", 127, 127, 0, 0);
	func_627(222, 9, fVar4, 0, 0, "RE44B", 127, 127, 0, 0);
	func_627(223, 0, fVar4, 0, 0, "RE58", 127, 127, 0, 0);
	func_627(220, 0, fVar4, 0, 0, "RE41", 127, 127, 0, 0);
	func_627(224, 9, fVar4, 0, 0, "RE1A", 127, 127, 0, 0);
	func_627(225, 9, fVar4, 0, 0, "RE1B", 127, 127, 0, 0);
	func_627(226, 9, fVar4, 0, 0, "RE2A", 127, 127, 0, 0);
	func_627(227, 9, fVar4, 0, 0, "RE3A", 127, 127, 0, 0);
	func_627(228, 9, fVar4, 0, 0, "RE3B", 127, 127, 0, 0);
	func_627(232, 0, fVar4, 0, 0, "RE5A", 127, 127, 0, 0);
	func_627(233, 0, fVar4, 0, 0, "RE5B", 127, 127, 0, 0);
	func_627(234, 0, fVar4, 0, 0, "RE5C", 127, 127, 0, 0);
	func_627(235, 0, fVar4, 0, 0, "RE5D", 127, 127, 0, 0);
	func_627(236, 0, fVar4, 0, 0, "RE5E", 127, 127, 0, 0);
	func_627(237, 0, fVar4, 0, 0, "RE5F", 127, 127, 0, 0);
	func_627(238, 0, fVar4, 0, 0, "RE5G", 127, 127, 0, 0);
	func_627(239, 0, fVar4, 0, 0, "RE5H", 127, 127, 0, 0);
	func_627(240, 0, fVar4, 0, 0, "RE5I", 127, 127, 0, 0);
	func_627(241, 0, fVar4, 0, 0, "RE5J", 127, 127, 0, 0);
	func_627(242, 9, fVar4, 0, 0, "RE6", 127, 127, 0, 0);
	func_627(243, 9, fVar4, 0, 0, "RE7", 127, 127, 0, 0);
	func_627(244, 9, fVar4, 0, 0, "RE11A", 127, 127, 0, 0);
	func_627(245, 9, fVar4, 0, 0, "RE11B", 127, 127, 0, 0);
	func_627(246, 9, fVar4, 0, 0, "RE12A", 127, 127, 0, 0);
	func_627(247, 9, fVar4, 0, 0, "RE12B", 127, 127, 0, 0);
	func_627(248, 9, fVar4, 0, 0, "RE13A", 127, 127, 0, 0);
	func_627(249, 9, fVar4, 0, 0, "RE13B", 127, 127, 0, 0);
	func_627(250, 9, fVar4, 0, 0, "RE14A", 127, 127, 0, 0);
	func_627(251, 9, fVar4, 0, 0, "RE16", 127, 127, 0, 0);
	func_627(252, 9, fVar4, 0, 0, "RE18", 127, 127, 0, 0);
	func_627(253, 9, fVar4, 0, 0, "RE20", 127, 127, 0, 0);
	func_627(254, 9, fVar4, 0, 0, "RE21", 127, 127, 0, 0);
	func_627(255, 9, fVar4, 0, 0, "RE4A", 127, 127, 0, 0);
	func_627(256, 9, fVar4, 0, 0, "RE22", 127, 127, 0, 0);
	func_627(257, 9, fVar4, 0, 0, "RE24A", 127, 127, 0, 0);
	func_627(258, 9, fVar4, 0, 0, "RE24B", 127, 127, 0, 0);
	func_627(259, 9, fVar4, 0, 0, "RE29", 127, 127, 0, 0);
	func_627(260, 9, fVar4, 0, 0, "RE31A", 127, 127, 0, 0);
	func_627(261, 9, fVar4, 0, 0, "RE31B", 127, 127, 0, 0);
	func_627(262, 9, fVar4, 0, 0, "RE31C", 127, 127, 0, 0);
	func_627(263, 0, fVar4, 0, 0, "RE31D", 127, 127, 0, 0);
	func_627(264, 9, fVar4, 0, 0, "RE31E", 127, 127, 0, 0);
	func_627(265, 9, fVar4, 0, 0, "RE62", 127, 127, 0, 0);
	func_627(266, 0, fVar4, 0, 0, "RE36", 127, 127, 0, 0);
	func_627(267, 9, fVar4, 0, 0, "RE37A", 127, 127, 0, 0);
	func_627(268, 9, fVar4, 0, 0, "RE37B", 127, 127, 0, 0);
	func_627(269, 9, fVar4, 0, 0, "RE37C", 127, 127, 0, 0);
	func_627(270, 0, fVar4, 0, 0, "RE37D", 127, 127, 0, 0);
	func_627(229, 9, fVar4, 0, 0, "RE15A", 127, 127, 0, 0);
	func_627(230, 9, fVar4, 0, 0, "RE15B", 127, 127, 0, 0);
	func_627(231, 9, fVar4, 0, 0, "RE15C", 127, 127, 0, 0);
	func_627(271, 9, fVar4, 0, 0, "RE49A", 127, 127, 0, 0);
	func_627(272, 9, fVar4, 0, 0, "RE49B", 127, 127, 0, 0);
	func_627(273, 9, fVar4, 0, 0, "RE49D", 127, 127, 0, 0);
	func_627(274, 9, fVar4, 0, 0, "RE49E", 127, 127, 0, 0);
	func_627(275, 9, fVar4, 0, 0, "RE49F", 127, 127, 0, 0);
	func_627(276, 9, fVar4, 0, 0, "RE49G", 127, 127, 0, 0);
	func_627(277, 9, fVar4, 0, 0, "RE49H", 127, 127, 0, 0);
	func_627(278, 9, fVar4, 0, 0, "RE49I", 127, 127, 0, 0);
	func_627(279, 9, fVar4, 0, 0, "RE49J", 127, 127, 0, 0);
	func_627(280, 9, fVar4, 0, 0, "RE49K", 127, 127, 0, 0);
	func_627(281, 9, fVar4, 0, 0, "RE51A", 127, 127, 0, 0);
	func_627(282, 9, fVar4, 0, 0, "RE51B", 127, 127, 0, 0);
	func_627(283, 9, fVar4, 0, 0, "RE52", 127, 127, 0, 0);
	func_627(284, 0, fVar4, 0, 0, "RE59", 127, 127, 0, 0);
	func_627(285, 9, fVar4, 0, 0, "RE9", 127, 127, 0, 0);
	func_627(318, 9, fVar4, 0, 0, "RE67", 127, 127, 0, 0);
	func_627(319, 9, fVar4, 0, 0, "RE68", 127, 127, 0, 0);
	func_627(320, 9, fVar4, 0, 0, "RE69", 127, 127, 0, 0);
	Global_97085 = 12f;
	fVar5 = (15f / Global_97085);
	func_627(286, 11, fVar5, 0, 0, "SC_CO_UFOP1", 127, 127, 0, 0);
	func_627(287, 11, fVar5, 0, 0, "SC_CO_DLS1", 127, 127, 0, 0);
	func_627(288, 11, fVar5, 0, 0, "SC_MSC_CIN", 127, 127, 0, 0);
	func_627(289, 11, fVar5, 0, 0, "SC_MSC_STJ", 127, 127, 0, 0);
	func_627(290, 11, fVar5, 0, 0, "SC_MSC_BRG", 127, 127, 0, 0);
	func_627(291, 11, fVar5, 0, 0, "SC_MSC_KFT", 127, 127, 0, 0);
	func_627(292, 11, fVar5, 0, 0, "SC_MSC_PPY", 127, 127, 0, 0);
	func_627(293, 11, fVar5, 0, 0, "SC_MSC_VEH", 127, 127, 0, 0);
	func_627(294, 11, fVar5, 0, 0, "SC_MSC_CHP", 127, 127, 0, 0);
	func_627(295, 11, fVar5, 0, 0, "SC_MSC_BOO", 127, 127, 0, 0);
	func_627(296, 11, fVar5, 0, 0, "SC_MSC_HKR", 127, 127, 0, 0);
	func_627(297, 11, fVar5, 0, 0, "SC_MSC_HLD", 127, 127, 0, 0);
	func_627(298, 12, fVar5, 0, 0, "SC_MSC_DIV", 127, 127, 0, 0);
	func_627(299, 12, fVar5, 0, 0, "SC_MSC_SON", 127, 127, 0, 0);
	func_627(300, 12, fVar5, 0, 0, "SC_MSC_YOG", 127, 127, 0, 0);
	func_627(301, 12, fVar5, 0, 0, "SC_MSC_CAB", 127, 127, 0, 0);
	func_627(302, 12, fVar5, 0, 0, "SC_MSC_WSH", 127, 127, 0, 0);
	func_627(303, 12, fVar5, 0, 0, "SC_MSC_FRG", 127, 127, 0, 0);
	func_627(304, 12, fVar5, 0, 0, "SC_MSC_CLT", 127, 127, 0, 0);
	func_627(305, 12, fVar5, 0, 0, "SC_MSC_MOD", 127, 127, 0, 0);
	func_627(306, 12, fVar5, 0, 0, "SC_MSC_BRB", 127, 127, 0, 0);
	func_627(307, 12, fVar5, 0, 0, "SC_MSC_TAT", 127, 127, 0, 0);
	func_627(308, 12, fVar5, 0, 0, "SC_MSC_GUN", 127, 127, 0, 0);
	func_627(309, 12, fVar5, 0, 0, "SC_MSC_WTV", 127, 127, 0, 0);
	func_627(310, 12, fVar5, 0, 0, "SC_MSC_STK", 127, 127, 0, 0);
	Global_97086 = 4f;
	fVar6 = (5f / Global_97086);
	func_627(311, 0, fVar6, 0, 0, "SC_FR_ARRACT", 127, 127, 0, 0);
	func_627(312, 13, fVar6, 0, 0, "SC_FR_BAR", 127, 127, 0, 0);
	func_627(313, 13, fVar6, 0, 0, "SC_FR_CIN", 127, 127, 0, 0);
	func_627(314, 13, fVar6, 0, 0, "SC_FR_DAR", 127, 127, 0, 0);
	func_627(316, 13, fVar6, 0, 0, "SC_FR_STR", 127, 127, 0, 0);
	func_627(315, 14, fVar6, 0, 0, "SC_FR_GOL", 127, 127, 0, 0);
	func_627(317, 14, fVar6, 0, 0, "SC_FR_TEN", 127, 127, 0, 0);
	iVar7 = 0;
	fVar8 = 0f;
	while (iVar7 < 321)
	{
		if (!Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iVar7 /*12*/].f_6 == 0)
		{
			fVar8 = (fVar8 + Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iVar7 /*12*/].f_4);
		}
		switch (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iVar7 /*12*/].f_6)
		{
			case 1:
				Global_97072++;
				break;
			
			case 3:
				Global_97073++;
				break;
			
			case 5:
				Global_97074++;
				break;
			
			case 7:
				Global_97075++;
				break;
			
			case 9:
				Global_97076++;
				break;
			
			case 11:
				Global_97077++;
				break;
			
			case 13:
				Global_97078++;
				break;
			
			default:
				break;
		}
		iVar7++;
	}
}

void func_627(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x67F52
{
	Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_6 = iParam1;
	Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_4 = fParam2;
	Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_5 = iParam3;
	if (iParam4 == 1)
	{
	}
	StringCopy(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/]), sParam5, 16);
	Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_7 = iParam8;
	Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_9 = iParam9;
	if (iParam6 <= 127)
	{
		Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_8 = iParam6;
	}
	if (iParam7 <= 127)
	{
		Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_8 = (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_8 || SYSTEM::SHIFT_LEFT(iParam7, 7));
	}
}

void func_628()//Position - 0x67FFF
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iVar0] = 318;
		iVar1 = 0;
		while (iVar1 < 5)
		{
			Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA.f_4[iVar0 /*6*/][iVar1] = 318;
			iVar1++;
		}
		iVar0++;
	}
	Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA.f_23 = 0;
}

void func_629()//Position - 0x68058
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_SAVE_DATA.PROPERTIES_SAVED_DATA[iVar0 /*4*/] = 145;
		iVar0++;
	}
	Global_96066.f_19 = 0;
	Global_96066.f_21 = 0;
	Global_96066 = 0;
	Global_SAVE_DATA.PROPERTIES_SAVED_DATA.f_67 = GlobalFunc_7626();
}












void func_641()//Position - 0x688D7
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 8)
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			Global_SAVE_DATA.STRIP_CLUB_SAVED_ARRAY[iVar1 /*53*/][iVar0] = 50;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_SAVE_DATA.STRIP_CLUB_SAVED_ARRAY[iVar1 /*53*/].f_2[iVar0 /*5*/] = func_642(iVar1, iVar0);
			Global_SAVE_DATA.STRIP_CLUB_SAVED_ARRAY[iVar1 /*53*/].f_2[iVar0 /*5*/].f_4 = 0;
			iVar0++;
		}
		iVar1++;
	}
}

int func_642(int iParam0, int iParam1)//Position - 0x68952
{
	float fVar0;
	
	fVar0 = 0f;
	if (iParam0 >= 3)
	{
		return SYSTEM::FLOOR((0.1f * 7500f));
	}
	switch (iParam1)
	{
		case 0:
			if (iParam0 == 0)
			{
				fVar0 = 0.3f;
			}
			else if (iParam0 == 1)
			{
				fVar0 = 0.3f;
			}
			else if (iParam0 == 2)
			{
				fVar0 = 0.01f;
			}
			break;
		
		case 1:
			if (iParam0 == 0)
			{
				fVar0 = 0.15f;
			}
			else if (iParam0 == 1)
			{
				fVar0 = 0.15f;
			}
			else if (iParam0 == 2)
			{
				fVar0 = 0.01f;
			}
			break;
		
		case 2:
			if (iParam0 == 0)
			{
				fVar0 = 0.15f;
			}
			else if (iParam0 == 1)
			{
				fVar0 = 0.3f;
			}
			else if (iParam0 == 2)
			{
				fVar0 = 0.15f;
			}
			break;
		
		case 3:
			if (iParam0 == 0)
			{
				fVar0 = 0.1f;
			}
			else if (iParam0 == 1)
			{
				fVar0 = 0.3f;
			}
			else if (iParam0 == 2)
			{
				fVar0 = 0.1f;
			}
			break;
		
		case 4:
			if (iParam0 == 0)
			{
				fVar0 = 0.3f;
			}
			else if (iParam0 == 1)
			{
				fVar0 = 0.15f;
			}
			else if (iParam0 == 2)
			{
				fVar0 = 0.01f;
			}
			break;
		
		case 5:
			if (iParam0 == 0)
			{
				fVar0 = 0.15f;
			}
			else if (iParam0 == 1)
			{
				fVar0 = 0.3f;
			}
			else if (iParam0 == 2)
			{
				fVar0 = 0.01f;
			}
			break;
		
		case 6:
			if (iParam0 == 0)
			{
				fVar0 = 0.3f;
			}
			else if (iParam0 == 1)
			{
				fVar0 = 0.15f;
			}
			else if (iParam0 == 2)
			{
				fVar0 = 0.01f;
			}
			break;
		
		case 7:
			if (iParam0 == 0)
			{
				fVar0 = 0.15f;
			}
			else if (iParam0 == 1)
			{
				fVar0 = 0.15f;
			}
			else if (iParam0 == 2)
			{
				fVar0 = 0.3f;
			}
			break;
	}
	return SYSTEM::FLOOR((fVar0 * 7500f));
}










