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
	int iLocal_28 = 0;
	bool bLocal_29 = 0;
	bool bLocal_30 = 0;
	bool bLocal_31 = 0;
	bool bLocal_32 = 0;
	bool bLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	bool bLocal_36 = 0;
	bool bLocal_37 = 0;
	int iLocal_38 = 0;
	bool bLocal_39 = 0;
	bool bLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	bool bLocal_45 = 0;
	int iLocal_46 = 0;
	bool bLocal_47 = 0;
	int iLocal_48 = 0;
	bool bLocal_49 = 0;
	int iLocal_50 = 0;
	bool bLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	bool bLocal_54 = 0;
	int iLocal_55 = 0;
	bool bLocal_56 = 0;
	bool bLocal_57 = 0;
	bool bLocal_58 = 0;
	bool bLocal_59 = 0;
	bool bLocal_60 = 0;
	float fLocal_61[80] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_142[80] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_223[80] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_304[80] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_385[80] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	float fLocal_470[95] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_566[95] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_662[95] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_758[95] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_854[95] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_950[95] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1046[4] = { 0f, 0f, 0f, 0f };
	float fLocal_1051[4] = { 0f, 0f, 0f, 0f };
	float fLocal_1056[4] = { 0f, 0f, 0f, 0f };
	float fLocal_1061[4] = { 0f, 0f, 0f, 0f };
	float fLocal_1066 = 0f;
	float fLocal_1067 = 0f;
	float fLocal_1068 = 0f;
	float fLocal_1069 = 0f;
	float fLocal_1070 = 0f;
	float fLocal_1071 = 0f;
	float fLocal_1072 = 0f;
	float fLocal_1073 = 0f;
	float fLocal_1074 = 0f;
	float fLocal_1075 = 0f;
	float fLocal_1076 = 0f;
	float fLocal_1077 = 0f;
	float fLocal_1078 = 0f;
	float fLocal_1079 = 0f;
	float fLocal_1080 = 0f;
	float fLocal_1081 = 0f;
	float fLocal_1082 = 0f;
	float fLocal_1083 = 0f;
	float fLocal_1084 = 0f;
	float fLocal_1085 = 0f;
	float fLocal_1086 = 0f;
	int iLocal_1087[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1168[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1249[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1330[95] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1426[95] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1522[95] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1618[4] = { 0, 0, 0, 0 };
	int iLocal_1623 = 0;
	int iLocal_1624 = 0;
	int iLocal_1625 = 0;
	int iLocal_1626 = 0;
	int iLocal_1627 = 0;
	int iLocal_1628 = 0;
	int iLocal_1629 = 0;
	int iLocal_1630 = 0;
	int iLocal_1631 = 0;
	int iLocal_1632 = 0;
	int iLocal_1633 = 0;
	int iLocal_1634 = 0;
	int iLocal_1635 = 0;
	int iLocal_1636 = 0;
	int iLocal_1637 = 0;
	int iLocal_1638 = 0;
	int iLocal_1639 = 0;
	struct<3> Local_1640[80];
	struct<3> Local_1881[4];
	struct<3> Local_1894[95];
	struct<3> Local_2180 = { 0, 0, 0 } ;
	struct<3> Local_2183 = { 0, 0, 0 } ;
	struct<3> Local_2186 = { 0, 0, 0 } ;
	var uLocal_2189 = 0;
	var uLocal_2190 = 0;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	struct<3> Local_2195 = { 0, 0, 0 } ;
	struct<3> Local_2198 = { 0, 0, 0 } ;
	struct<3> Local_2201 = { 0, 0, 0 } ;
	struct<3> Local_2204 = { 0, 0, 0 } ;
	char cLocal_2207[64] = "";
	var uLocal_2215 = 0;
	var uLocal_2216 = 0;
	var uLocal_2217 = 0;
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 0;
	var uLocal_2222 = 0;
	int iLocal_2223 = 0;
	int iLocal_2224[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2305[4] = { 0, 0, 0, 0 };
	int iLocal_2310[95] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2406 = 0;
	int iLocal_2407 = 0;
	int iLocal_2408 = 0;
	int iLocal_2409[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2490[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2504[4] = { 0, 0, 0, 0 };
	int iLocal_2509[95] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2605[4] = { 0, 0, 0, 0 };
	int iLocal_2610 = 0;
	int iLocal_2611 = 0;
	int iLocal_2612 = 0;
	var uLocal_2613 = 13;
	var uLocal_2614 = 0;
	var uLocal_2615 = 0;
	var uLocal_2616 = 0;
	var uLocal_2617 = 0;
	var uLocal_2618 = 0;
	var uLocal_2619 = 0;
	var uLocal_2620 = 0;
	var uLocal_2621 = 0;
	var uLocal_2622 = 0;
	var uLocal_2623 = 0;
	var uLocal_2624 = 0;
	var uLocal_2625 = 0;
	var uLocal_2626 = 0;
	int iLocal_2627 = 0;
	var uLocal_2628 = 0;
	var uLocal_2629 = 0;
	float fLocal_2630 = 0f;
	float fLocal_2631 = 0f;
	float fLocal_2632 = 0f;
	var uLocal_2633 = 0;
	var uLocal_2634 = 0;
	var uLocal_2635 = 0;
	var uLocal_2636 = 0;
	var uLocal_2637 = 0;
	int iLocal_2638 = 0;
	int iLocal_2639 = 0;
	int iLocal_2640 = 0;
	int iLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	var uLocal_2647 = 0;
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = 0;
	var uLocal_2654 = 0;
	var uLocal_2655 = 0;
	var uLocal_2656 = 0;
	var uLocal_2657 = 0;
	var uLocal_2658 = 0;
	var uLocal_2659 = 0;
	var uLocal_2660 = 0;
	struct<3> Local_2661 = { 0, 0, 0 } ;
	struct<3> Local_2664 = { 0, 0, 0 } ;
	int iLocal_2667 = 0;
	var uLocal_2668 = 0;
	int iLocal_2669[26] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2696 = 0;
	int iLocal_2697 = 0;
	struct<7> Local_2698 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 0;
	var uLocal_2708 = 0;
	var uLocal_2709 = 0;
	var uLocal_2710 = 0;
	var uLocal_2711 = 0;
	var uLocal_2712 = 0;
	struct<14> Local_2713 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2727 = 0;
	struct<12> Local_2728 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2740 = 0;
	var uLocal_2741 = 0;
	var uLocal_2742 = 0;
	struct<8> Local_2743 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2751 = 0;
	var uLocal_2752 = 0;
	var uLocal_2753 = 0;
	var uLocal_2754 = 0;
	var uLocal_2755 = 0;
	var uLocal_2756 = 0;
	var uLocal_2757 = 0;
	struct<15> Local_2758[3];
	struct<14> Local_2804 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2818 = 0;
	struct<15> Local_2819[3];
	struct<15> Local_2865[3];
	struct<7> Local_2911 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2918 = 0;
	var uLocal_2919 = 0;
	var uLocal_2920 = 0;
	var uLocal_2921 = 0;
	var uLocal_2922 = 0;
	var uLocal_2923 = 0;
	var uLocal_2924 = 0;
	var uLocal_2925 = 0;
	struct<12> Local_2926 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2938 = 0;
	var uLocal_2939 = 0;
	var uLocal_2940 = 0;
	var uLocal_2941 = 0;
	var uLocal_2942 = 0;
	var uLocal_2943 = 0;
	var uLocal_2944 = 0;
	var uLocal_2945 = 0;
	struct<10> Local_2946 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2956 = 0;
	var uLocal_2957 = 0;
	var uLocal_2958 = 0;
	var uLocal_2959 = 0;
	var uLocal_2960 = 0;
	var uLocal_2961 = 0;
	var uLocal_2962 = 0;
	var uLocal_2963 = 0;
	var uLocal_2964 = 0;
	var uLocal_2965 = 0;
	struct<12> Local_2966 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2978 = 0;
	var uLocal_2979 = 0;
	var uLocal_2980 = 0;
	var uLocal_2981 = 0;
	var uLocal_2982 = 0;
	var uLocal_2983 = 0;
	var uLocal_2984 = 0;
	var uLocal_2985 = 0;
	struct<10> Local_2986 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2996 = 0;
	var uLocal_2997 = 0;
	var uLocal_2998 = 0;
	var uLocal_2999 = 0;
	var uLocal_3000 = 0;
	var uLocal_3001 = 0;
	var uLocal_3002 = 0;
	var uLocal_3003 = 0;
	var uLocal_3004 = 0;
	var uLocal_3005 = 0;
	struct<20> Local_3006[26];
	struct<20> Local_3527[2];
	struct<15> Local_3568 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3583 = 0;
	var uLocal_3584 = 0;
	var uLocal_3585 = 0;
	var uLocal_3586 = 0;
	var uLocal_3587 = 0;
	struct<16> Local_3588 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3604 = 0;
	var uLocal_3605 = 0;
	var uLocal_3606 = 0;
	var uLocal_3607 = 0;
	struct<2> Local_3608 = { 0, 0 } ;
	var uLocal_3610 = 0;
	var uLocal_3611 = 0;
	var uLocal_3612 = 0;
	var uLocal_3613 = 0;
	var uLocal_3614 = 0;
	var uLocal_3615 = 0;
	var uLocal_3616 = 0;
	var uLocal_3617 = 0;
	var uLocal_3618 = 0;
	var uLocal_3619 = 0;
	var uLocal_3620 = 0;
	var uLocal_3621 = 0;
	var uLocal_3622 = 0;
	var uLocal_3623 = 0;
	var uLocal_3624 = 0;
	var uLocal_3625 = 0;
	var uLocal_3626 = 0;
	var uLocal_3627 = 0;
	struct<15> Local_3628 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3643 = 0;
	var uLocal_3644 = 0;
	var uLocal_3645 = 0;
	var uLocal_3646 = 0;
	var uLocal_3647 = 0;
	struct<24> Local_3648[5];
	struct<3> Local_3769 = { 0, 0, 0 } ;
	var uLocal_3772 = 0;
	var uLocal_3773 = 0;
	var uLocal_3774 = 0;
	var uLocal_3775 = 0;
	var uLocal_3776 = 0;
	var uLocal_3777 = 0;
	var uLocal_3778 = 0;
	var uLocal_3779 = 0;
	var uLocal_3780 = 0;
	var uLocal_3781 = 0;
	var uLocal_3782 = 0;
	var uLocal_3783 = 0;
	var uLocal_3784 = 0;
	var uLocal_3785 = 0;
	var uLocal_3786 = 0;
	var uLocal_3787 = 0;
	var uLocal_3788 = 0;
	var uLocal_3789 = 0;
	var uLocal_3790 = 0;
	var uLocal_3791 = 0;
	var uLocal_3792 = 0;
	struct<3> Local_3793 = { 0, 0, 0 } ;
	var uLocal_3796 = 0;
	var uLocal_3797 = 0;
	var uLocal_3798 = 0;
	var uLocal_3799 = 0;
	var uLocal_3800 = 0;
	var uLocal_3801 = 0;
	var uLocal_3802 = 0;
	var uLocal_3803 = 0;
	var uLocal_3804 = 0;
	var uLocal_3805 = 0;
	var uLocal_3806 = 0;
	var uLocal_3807 = 0;
	var uLocal_3808 = 0;
	var uLocal_3809 = 0;
	var uLocal_3810 = 0;
	var uLocal_3811 = 0;
	var uLocal_3812 = 0;
	var uLocal_3813 = 0;
	var uLocal_3814 = 0;
	var uLocal_3815 = 0;
	var uLocal_3816 = 0;
	struct<3> Local_3817 = { 0, 0, 0 } ;
	var uLocal_3820 = 0;
	var uLocal_3821 = 0;
	var uLocal_3822 = 0;
	var uLocal_3823 = 0;
	var uLocal_3824 = 0;
	var uLocal_3825 = 0;
	var uLocal_3826 = 0;
	var uLocal_3827 = 0;
	var uLocal_3828 = 0;
	var uLocal_3829 = 0;
	var uLocal_3830 = 0;
	var uLocal_3831 = 0;
	var uLocal_3832 = 0;
	var uLocal_3833 = 0;
	var uLocal_3834 = 0;
	var uLocal_3835 = 0;
	var uLocal_3836 = 0;
	var uLocal_3837 = 0;
	var uLocal_3838 = 0;
	var uLocal_3839 = 0;
	var uLocal_3840 = 0;
	struct<3> Local_3841 = { 0, 0, 0 } ;
	var uLocal_3844 = 0;
	var uLocal_3845 = 0;
	var uLocal_3846 = 0;
	var uLocal_3847 = 0;
	var uLocal_3848 = 0;
	var uLocal_3849 = 0;
	var uLocal_3850 = 0;
	var uLocal_3851 = 0;
	var uLocal_3852 = 0;
	var uLocal_3853 = 0;
	var uLocal_3854 = 0;
	var uLocal_3855 = 0;
	var uLocal_3856 = 0;
	var uLocal_3857 = 0;
	var uLocal_3858 = 0;
	var uLocal_3859 = 0;
	var uLocal_3860 = 0;
	var uLocal_3861 = 0;
	var uLocal_3862 = 0;
	var uLocal_3863 = 0;
	var uLocal_3864 = 0;
	var uLocal_3865[4] = { 0, 0, 0, 0 };
	var uLocal_3870 = 0;
	var uLocal_3871 = 0;
	var uLocal_3872 = 0;
	var uLocal_3873 = 4;
	var uLocal_3874 = 0;
	var uLocal_3875 = 0;
	var uLocal_3876 = 0;
	var uLocal_3877 = 0;
	var uLocal_3878 = 4;
	var uLocal_3879 = 0;
	var uLocal_3880 = 0;
	var uLocal_3881 = 0;
	var uLocal_3882 = 0;
	var uLocal_3883 = 4;
	var uLocal_3884 = 0;
	var uLocal_3885 = 0;
	var uLocal_3886 = 0;
	var uLocal_3887 = 0;
	var uLocal_3888 = 0;
	var uLocal_3889 = 4;
	var uLocal_3890 = 0;
	var uLocal_3891 = 0;
	var uLocal_3892 = 0;
	var uLocal_3893 = 0;
	var uLocal_3894 = 4;
	var uLocal_3895 = 0;
	var uLocal_3896 = 0;
	var uLocal_3897 = 0;
	var uLocal_3898 = 0;
	var uLocal_3899 = 4;
	var uLocal_3900 = 0;
	var uLocal_3901 = 0;
	var uLocal_3902 = 0;
	var uLocal_3903 = 0;
	var uLocal_3904 = 0;
	var uLocal_3905 = 0;
	var uLocal_3906 = 0;
	var uLocal_3907 = 0;
	var uLocal_3908 = 0;
	int iLocal_3909 = 0;
	int iLocal_3910 = 0;
	int iLocal_3911 = 0;
	int iLocal_3912 = 0;
	int iLocal_3913 = 0;
	bool bLocal_3914 = 0;
	int iLocal_3915 = 0;
	int iLocal_3916 = 0;
	int iLocal_3917 = 0;
	bool bLocal_3918 = 0;
	bool bLocal_3919 = 0;
	int iLocal_3920 = 0;
	int iLocal_3921 = 0;
	int iLocal_3922 = 0;
	int iLocal_3923 = 0;
	int iLocal_3924 = 0;
	bool bLocal_3925 = 0;
	int iLocal_3926 = 0;
	int iLocal_3927 = 0;
	int iLocal_3928 = 0;
	int iLocal_3929 = 0;
	int iLocal_3930[5] = { 0, 0, 0, 0, 0 };
	int iLocal_3936 = 0;
	int iLocal_3937 = 0;
	int iLocal_3938 = 0;
	int iLocal_3939 = 0;
	int iLocal_3940 = 0;
	int iLocal_3941 = 0;
	int iLocal_3942 = 0;
	int iLocal_3943 = 0;
	int iLocal_3944 = 0;
	int iLocal_3945 = 0;
	int iLocal_3946 = 0;
	int iLocal_3947 = 0;
	int iLocal_3948 = 0;
	int iLocal_3949 = 0;
	int iLocal_3950 = 0;
	int iLocal_3951 = 0;
	int iLocal_3952 = 0;
	int iLocal_3953 = 0;
	int iLocal_3954 = 0;
	int iLocal_3955 = 0;
	int iLocal_3956 = 0;
	int iLocal_3957 = 0;
	int iLocal_3958 = 0;
	int iLocal_3959 = 0;
	int iLocal_3960 = 0;
	int iLocal_3961 = 0;
	int iLocal_3962 = 0;
	int iLocal_3963[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3974 = 0;
	int iLocal_3975 = 0;
	int iLocal_3976 = 0;
	int iLocal_3977 = 0;
	int iLocal_3978 = 0;
	int iLocal_3979 = 0;
	int iLocal_3980 = 0;
	int iLocal_3981 = 0;
	int iLocal_3982 = 0;
	int iLocal_3983 = 0;
	int iLocal_3984 = 0;
	int iLocal_3985 = 0;
	int iLocal_3986 = 0;
	int iLocal_3987 = 0;
	int iLocal_3988 = 0;
	int iLocal_3989 = 0;
	int iLocal_3990 = 0;
	int iLocal_3991 = 0;
	float fLocal_3992 = 0f;
	float fLocal_3993 = 0f;
	float fLocal_3994 = 0f;
	float fLocal_3995 = 0f;
	float fLocal_3996 = 0f;
	float fLocal_3997 = 0f;
	struct<3> Local_3998 = { 0, 0, 0 } ;
	struct<3> Local_4001 = { 0, 0, 0 } ;
	struct<3> Local_4004 = { 0, 0, 0 } ;
	float fLocal_4007 = 0f;
	int iLocal_4008 = 0;
	int iLocal_4009 = 0;
	char* sLocal_4010 = NULL;
	var uLocal_4011 = 0;
	int iLocal_4012 = 0;
	var uLocal_4013 = 0;
	var uLocal_4014 = 0;
	var uLocal_4015 = 0;
	var uLocal_4016 = 0;
	var uLocal_4017 = 0;
	var uLocal_4018 = 0;
	var uLocal_4019 = 0;
	var uLocal_4020 = 0;
	var uLocal_4021 = 0;
	var uLocal_4022 = 0;
	var uLocal_4023 = 0;
	int iLocal_4024 = 0;
	int iLocal_4025[4] = { 0, 0, 0, 0 };
	int iLocal_4030 = 0;
	int iLocal_4031[2] = { 0, 0 };
	int iLocal_4034 = 0;
	int iLocal_4035 = 0;
	int iLocal_4036 = 0;
	int iLocal_4037 = 0;
	int iLocal_4038[2] = { 0, 0 };
	int iLocal_4041 = 0;
	int iLocal_4042 = 0;
	int iLocal_4043 = 0;
	var uLocal_4044 = 16;
	var uLocal_4045 = 0;
	var uLocal_4046 = 0;
	var uLocal_4047 = 0;
	var uLocal_4048 = 0;
	var uLocal_4049 = 0;
	var uLocal_4050 = 0;
	var uLocal_4051 = 0;
	var uLocal_4052 = 0;
	var uLocal_4053 = 0;
	var uLocal_4054 = 0;
	var uLocal_4055 = 0;
	var uLocal_4056 = 0;
	var uLocal_4057 = 0;
	var uLocal_4058 = 0;
	var uLocal_4059 = 0;
	var uLocal_4060 = 0;
	var uLocal_4061 = 0;
	var uLocal_4062 = 0;
	var uLocal_4063 = 0;
	var uLocal_4064 = 0;
	var uLocal_4065 = 0;
	var uLocal_4066 = 0;
	var uLocal_4067 = 0;
	var uLocal_4068 = 0;
	var uLocal_4069 = 0;
	var uLocal_4070 = 0;
	var uLocal_4071 = 0;
	var uLocal_4072 = 0;
	var uLocal_4073 = 0;
	var uLocal_4074 = 0;
	var uLocal_4075 = 0;
	var uLocal_4076 = 0;
	var uLocal_4077 = 0;
	var uLocal_4078 = 0;
	var uLocal_4079 = 0;
	var uLocal_4080 = 0;
	var uLocal_4081 = 0;
	var uLocal_4082 = 0;
	var uLocal_4083 = 0;
	var uLocal_4084 = 0;
	var uLocal_4085 = 0;
	var uLocal_4086 = 0;
	var uLocal_4087 = 0;
	var uLocal_4088 = 0;
	var uLocal_4089 = 0;
	var uLocal_4090 = 0;
	var uLocal_4091 = 0;
	var uLocal_4092 = 0;
	var uLocal_4093 = 0;
	var uLocal_4094 = 0;
	var uLocal_4095 = 0;
	var uLocal_4096 = 0;
	var uLocal_4097 = 0;
	var uLocal_4098 = 0;
	var uLocal_4099 = 0;
	var uLocal_4100 = 0;
	var uLocal_4101 = 0;
	var uLocal_4102 = 0;
	var uLocal_4103 = 0;
	var uLocal_4104 = 0;
	var uLocal_4105 = 0;
	var uLocal_4106 = 0;
	var uLocal_4107 = 0;
	var uLocal_4108 = 0;
	var uLocal_4109 = 0;
	var uLocal_4110 = 0;
	var uLocal_4111 = 0;
	var uLocal_4112 = 0;
	var uLocal_4113 = 0;
	var uLocal_4114 = 0;
	var uLocal_4115 = 0;
	var uLocal_4116 = 0;
	var uLocal_4117 = 0;
	var uLocal_4118 = 0;
	var uLocal_4119 = 0;
	var uLocal_4120 = 0;
	var uLocal_4121 = 0;
	var uLocal_4122 = 0;
	var uLocal_4123 = 0;
	var uLocal_4124 = 0;
	var uLocal_4125 = 0;
	var uLocal_4126 = 0;
	var uLocal_4127 = 0;
	var uLocal_4128 = 0;
	var uLocal_4129 = 0;
	var uLocal_4130 = 0;
	var uLocal_4131 = 0;
	var uLocal_4132 = 0;
	var uLocal_4133 = 0;
	var uLocal_4134 = 0;
	var uLocal_4135 = 0;
	var uLocal_4136 = 0;
	var uLocal_4137 = 0;
	var uLocal_4138 = 0;
	var uLocal_4139 = 0;
	var uLocal_4140 = 0;
	var uLocal_4141 = 0;
	var uLocal_4142 = 0;
	var uLocal_4143 = 0;
	var uLocal_4144 = 0;
	var uLocal_4145 = 0;
	var uLocal_4146 = 0;
	var uLocal_4147 = 0;
	var uLocal_4148 = 0;
	var uLocal_4149 = 0;
	var uLocal_4150 = 0;
	var uLocal_4151 = 0;
	var uLocal_4152 = 0;
	var uLocal_4153 = 0;
	var uLocal_4154 = 0;
	var uLocal_4155 = 0;
	var uLocal_4156 = 0;
	var uLocal_4157 = 0;
	var uLocal_4158 = 0;
	var uLocal_4159 = 0;
	var uLocal_4160 = 0;
	var uLocal_4161 = 0;
	var uLocal_4162 = 0;
	var uLocal_4163 = 0;
	var uLocal_4164 = 0;
	var uLocal_4165 = 0;
	var uLocal_4166 = 0;
	var uLocal_4167 = 0;
	var uLocal_4168 = 0;
	var uLocal_4169 = 0;
	var uLocal_4170 = 0;
	var uLocal_4171 = 0;
	var uLocal_4172 = 0;
	var uLocal_4173 = 0;
	var uLocal_4174 = 0;
	var uLocal_4175 = 0;
	var uLocal_4176 = 0;
	var uLocal_4177 = 0;
	var uLocal_4178 = 0;
	var uLocal_4179 = 0;
	var uLocal_4180 = 0;
	var uLocal_4181 = 0;
	var uLocal_4182 = 0;
	var uLocal_4183 = 0;
	var uLocal_4184 = 0;
	var uLocal_4185 = 0;
	var uLocal_4186 = 0;
	var uLocal_4187 = 0;
	var uLocal_4188 = 0;
	var uLocal_4189 = 0;
	var uLocal_4190 = 0;
	var uLocal_4191 = 0;
	var uLocal_4192 = 0;
	var uLocal_4193 = 0;
	var uLocal_4194 = 0;
	var uLocal_4195 = 0;
	var uLocal_4196 = 0;
	var uLocal_4197 = 0;
	var uLocal_4198 = 0;
	var uLocal_4199 = 0;
	var uLocal_4200 = 0;
	var uLocal_4201 = 0;
	var uLocal_4202 = 0;
	var uLocal_4203 = 0;
	var uLocal_4204 = 0;
	var uLocal_4205 = 0;
	var uLocal_4206 = 0;
	var uLocal_4207 = 0;
	var uLocal_4208 = 0;
	var uLocal_4209 = 0;
	var uLocal_4210 = 0;
	var uLocal_4211 = -1;
	var uLocal_4212 = 0;
	var uLocal_4213 = 0;
	var uLocal_4214 = 0;
	var uLocal_4215 = 0;
	var uLocal_4216 = 0;
	var uLocal_4217 = 0;
	var uLocal_4218 = 1000;
	var uLocal_4219 = 1000;
	var uLocal_4220 = 0;
	struct<6> Local_4221 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_4227 = 0;
	var uLocal_4228 = 1092616192;
	var uLocal_4229 = 1101004800;
	var uLocal_4230 = 0;
	var uLocal_4231 = 0;
	var uLocal_4232 = 0;
	var uLocal_4233 = 0;
	var uLocal_4234 = 0;
	var uLocal_4235 = 0;
	var uLocal_4236 = 0;
	var uLocal_4237 = 0;
	var uLocal_4238 = 3;
	var uLocal_4239 = 0;
	var uLocal_4240 = 0;
	var uLocal_4241 = 0;
	var uLocal_4242 = 0;
	var uLocal_4243 = 0;
	var uLocal_4244 = 0;
	var uLocal_4245 = 0;
	int iLocal_4246 = 0;
	int iLocal_4247 = 0;
	var uLocal_4248 = 0;
	var uLocal_4249 = 0;
	var uLocal_4250 = 0;
	var uLocal_4251 = 0;
	var uLocal_4252 = 0;
	var uLocal_4253 = 0;
	var uLocal_4254 = 0;
	var uLocal_4255 = 0;
	var uLocal_4256 = 0;
	var uLocal_4257 = 21;
	var uLocal_4258 = 6;
	var uLocal_4259 = 0;
	var uLocal_4260 = 0;
	var uLocal_4261 = 0;
	char cLocal_4262[24] = "";
	var uLocal_4265 = 0;
	var uLocal_4266 = 0;
	var uLocal_4267 = 0;
	char cLocal_4268[24] = "";
	var uLocal_4271 = 0;
	var uLocal_4272 = 0;
	var uLocal_4273 = 0;
	int iLocal_4274 = 0;
	int iLocal_4275 = 0;
	int iLocal_4276 = 0;
	int iLocal_4277 = 0;
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
	bLocal_30 = true;
	bLocal_37 = true;
	bLocal_59 = true;
	fLocal_1066 = 120f;
	fLocal_1067 = 0f;
	fLocal_1069 = 1f;
	fLocal_1070 = 0f;
	fLocal_1071 = 1f;
	fLocal_1072 = 30f;
	fLocal_1074 = 1f;
	fLocal_1075 = 5f;
	fLocal_1076 = 1f;
	fLocal_1077 = 1f;
	fLocal_1078 = 100f;
	fLocal_1079 = 100f;
	fLocal_1080 = 0f;
	fLocal_1081 = 7000f;
	fLocal_1082 = 0f;
	fLocal_1083 = 0f;
	fLocal_1084 = 0.3f;
	fLocal_1085 = 0.5f;
	fLocal_1086 = 50f;
	iLocal_1626 = -1;
	iLocal_1634 = -1;
	iLocal_1635 = -1;
	iLocal_2627 = 3;
	fLocal_2630 = 80f;
	fLocal_2631 = 140f;
	fLocal_2632 = 180f;
	iLocal_2638 = 1;
	iLocal_2639 = 65;
	iLocal_2640 = 49;
	iLocal_2641 = 64;
	uLocal_2645 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_2646 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	Local_2661 = { 0f, 0f, 0f };
	Local_2664 = { 0f, 0f, 0f };
	iLocal_2667 = -1;
	fLocal_3997 = 1f;
	Local_4004 = { -868.3934f, 152.2284f, 62.5499f };
	fLocal_4007 = 174.5712f;
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GlobalFunc_10632();
		func_870();
	}
	func_857();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!iLocal_3909)
		{
			if (func_852())
			{
				func_841();
			}
		}
		GlobalFunc_587();
		func_837();
		RECORDING::_0x208784099002BC30("M_FameOrShame", 0);
		switch (iLocal_2696)
		{
			case 0:
				func_827();
				break;
			
			case 1:
				func_785();
				break;
			
			case 2:
				func_783();
				break;
			
			case 3:
				func_764();
				break;
			
			case 4:
				func_762();
				break;
			
			case 5:
				func_744();
				break;
			
			case 7:
				func_648();
				break;
			
			case 8:
				func_642();
				break;
			
			case 9:
				func_615();
				break;
			
			case 11:
				GlobalFunc_587();
				break;
			
			case 12:
				func_610();
				break;
			
			case 13:
				func_606();
				break;
			
			case 14:
				func_59();
				break;
			
			case 15:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x240
{
	func_48(0);
	func_43();
	if (GlobalFunc_588(&iLocal_3976, 3000))
	{
		if (GlobalFunc_145())
		{
			GlobalFunc_586(2);
			switch (iLocal_2697)
			{
				case 5:
				case 7:
					GlobalFunc_5129(-868.919f, 199.3321f, 72.3914f, 242.1369f);
					break;
			}
			if (MISC::ARE_STRINGS_EQUAL(sLocal_4010, "family4_fail_1"))
			{
				GlobalFunc_5129(-452.5382f, -346.4354f, 33.3646f, 128.5391f);
			}
			func_2();
		}
	}
}

void func_2()//Position - 0x2C2
{
	func_3();
	func_870();
}

void func_3()//Position - 0x2D2
{
	int iVar0;
	
	iVar0 = 0;
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	GlobalFunc_5652(&Local_4221, 1, 0);
	func_6(1, 1);
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3865[0]))
	{
		PED::DELETE_PED(&(uLocal_3865[0]));
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2946.f_1);
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3865[2]))
	{
		PED::DELETE_PED(&(uLocal_3865[2]));
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2986.f_1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_2926))
	{
		PED::DELETE_PED(&Local_2926);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2926.f_1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_2966))
	{
		PED::DELETE_PED(&Local_2966);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2966.f_1);
	iVar0 = 0;
	while (iVar0 <= (Local_3006 - 1))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_3006[iVar0 /*20*/]));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3006[iVar0 /*20*/].f_1);
		ENTITY::REMOVE_FORCED_OBJECT(Local_3006[iVar0 /*20*/].f_3, 0.5f, joaat("v_ilev_chair02_ped"));
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_3568))
	{
		PED::DELETE_PED(&Local_3568);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_3817.x))
	{
		OBJECT::DELETE_OBJECT(&Local_3817);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_3588))
	{
		PED::DELETE_PED(&Local_3588);
	}
	func_4();
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2743.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2713.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2728.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("towtruck"));
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_4249))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_4249, 0);
	}
	VEHICLE::DELETE_ALL_TRAINS();
	if (HUD::DOES_BLIP_EXIST(uLocal_4011))
	{
		HUD::REMOVE_BLIP(&uLocal_4011);
	}
}

void func_4()//Position - 0x431
{
	int iVar0;
	
	iVar0 = 0;
	GlobalFunc_2873(&Local_2698, 0);
	GlobalFunc_2873(&Local_2743, 0);
	GlobalFunc_2873(&iLocal_4024, 0);
	GlobalFunc_2873(&Local_2713, 0);
	GlobalFunc_2873(&Local_2728, 0);
	iVar0 = 0;
	while (iVar0 <= (Local_2819 - 1))
	{
		GlobalFunc_2873(&(Local_2819[iVar0 /*15*/]), 0);
		GlobalFunc_2873(&(Local_2865[iVar0 /*15*/]), 0);
		iVar0++;
	}
	GlobalFunc_2873(&iLocal_4030, 1);
	GlobalFunc_2873(&iLocal_4034, 0);
	GlobalFunc_2873(&iLocal_4035, 0);
	GlobalFunc_2873(&iLocal_4036, 0);
	GlobalFunc_2873(&iLocal_4037, 0);
	iVar0 = 0;
	while (iVar0 <= (iLocal_4031 - 1))
	{
		GlobalFunc_2873(&(iLocal_4031[iVar0]), 0);
		iVar0++;
	}
}


void func_6(bool bParam0, bool bParam1)//Position - 0x577
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_2207))
	{
		iLocal_43 = 0;
		GlobalFunc_2214();
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_2223);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
			PED::SET_CREATE_RANDOM_COPS(1);
		}
		if (bLocal_59)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_31());
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2213());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2212());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2211());
		if (!CAM::IS_SCREEN_FADED_OUT() && !bParam0)
		{
			func_27();
			func_26();
			func_23();
		}
		else
		{
			func_19();
			func_18();
		}
		if (bParam1)
		{
			GlobalFunc_9132(0);
		}
	}
}












void func_18()//Position - 0xB0E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 80)
	{
		iLocal_2409[iVar0] = 0;
		Local_1640[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_61[iVar0] = 0f;
		fLocal_142[iVar0] = 0f;
		fLocal_223[iVar0] = 0f;
		fLocal_304[iVar0] = 0f;
		iLocal_1087[iVar0] = 0;
		fLocal_385[iVar0] = 0f;
		iLocal_1168[iVar0] = 0;
		iLocal_2224[iVar0] = 0;
		iLocal_1249[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 13)
	{
		iLocal_2490[iVar0] = 0;
		iVar0++;
	}
	iLocal_1623 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_2504[iVar0] = 0;
		Local_1881[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_1046[iVar0] = 0f;
		fLocal_1051[iVar0] = 0f;
		fLocal_1056[iVar0] = 0f;
		fLocal_1061[iVar0] = 0f;
		iLocal_1618[iVar0] = 0;
		iLocal_2305[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_2605[iVar0] = 0;
		iVar0++;
	}
	iLocal_1625 = 0;
	iVar0 = 0;
	while (iVar0 < 95)
	{
		iLocal_2509[iVar0] = 0;
		Local_1894[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_470[iVar0] = 0f;
		fLocal_566[iVar0] = 0f;
		fLocal_662[iVar0] = 0f;
		fLocal_758[iVar0] = 0f;
		iLocal_1330[iVar0] = 0;
		fLocal_854[iVar0] = 0f;
		iLocal_1426[iVar0] = 0;
		iLocal_2310[iVar0] = 0;
		iLocal_1522[iVar0] = 0;
		iVar0++;
	}
	iLocal_1624 = 0;
	iLocal_1627 = 0;
	iLocal_1630 = 0;
	iLocal_1631 = 0;
	iLocal_1632 = 0;
}

void func_19()//Position - 0xC98
{
	func_22();
	func_21();
	func_20();
}

void func_20()//Position - 0xCAC
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 95)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2509[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2509[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2509[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2509[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2509[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_2509[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_2509[iVar0]));
			}
		}
		iLocal_1426[iVar0] = 0;
		if (!bLocal_39 && !bLocal_52)
		{
			if (iLocal_1330[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1330[iVar0], &cLocal_2207);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 95)
	{
		if (!iLocal_2310[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2310[iVar0]);
		}
		iVar0++;
	}
}

void func_21()//Position - 0xDA2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2504[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_2504[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_2504[iVar0]));
			}
		}
		iLocal_1618[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!iLocal_2305[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2305[iVar0]);
		}
		iVar0++;
	}
	iLocal_1628 = 0;
	iLocal_1625 = 0;
}

void func_22()//Position - 0xE1D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 80)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2409[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2409[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2409[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2409[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2409[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_2409[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_2409[iVar0]));
			}
		}
		if (!bLocal_39 && !bLocal_52)
		{
			if (iLocal_1087[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1087[iVar0], &cLocal_2207);
			}
		}
		iLocal_1168[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 80)
	{
		if (!iLocal_2224[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2224[iVar0]);
		}
		iVar0++;
	}
	iLocal_1627 = 0;
	iLocal_1623 = 0;
}

void func_23()//Position - 0xF1B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 95)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2509[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2509[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2509[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2509[iVar0]);
				}
			}
			GlobalFunc_2911(iLocal_2509[iVar0]);
			GlobalFunc_2210(iLocal_2509[iVar0]);
		}
		iLocal_1426[iVar0] = 0;
		iLocal_1522[iVar0] = 0;
		if (!bLocal_39 && !bLocal_52)
		{
			if (iLocal_1330[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1330[iVar0], &cLocal_2207);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 95)
	{
		if (!iLocal_2310[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2310[iVar0]);
		}
		iVar0++;
	}
	iLocal_1629 = 0;
}



void func_26()//Position - 0x1098
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2504[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2504[iVar0]))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_2504[iVar0], 1, 0);
			}
			GlobalFunc_2210(iLocal_2504[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!iLocal_2305[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2305[iVar0]);
		}
		iVar0++;
	}
	iLocal_1628 = 0;
	iLocal_1625 = 0;
}

void func_27()//Position - 0x1119
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 80)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2409[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2409[iVar0]))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_2409[iVar0], 1, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2409[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2409[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2409[iVar0]);
				}
			}
			GlobalFunc_2911(iLocal_2409[iVar0]);
			GlobalFunc_2210(iLocal_2409[iVar0]);
		}
		iLocal_1168[iVar0] = 0;
		iLocal_1249[iVar0] = 0;
		if (!bLocal_39 && !bLocal_52)
		{
			if (iLocal_1087[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1087[iVar0], &cLocal_2207);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 80)
	{
		if (!iLocal_2224[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2224[iVar0]);
		}
		iVar0++;
	}
	iLocal_1627 = 0;
	iLocal_1623 = 0;
}




int func_31()//Position - 0x122D
{
	if (iLocal_2406 == 0)
	{
		return joaat("a_m_y_business_01");
	}
	return iLocal_2406;
}












void func_43()//Position - 0x158F
{
	int iVar0;
	
	if (iLocal_2669[iVar0] != 8 && iLocal_2669[iVar0] != 7)
	{
		if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -175.828f, -2039.052f, 26.621f, -276.227f, -1989.866f, 35.621f, 195.7f, 0, 1, 0) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -231.798f, -2041.398f, 26.361f, -260.114f, -2021.864f, 34.161f, 39.2f)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -252.133f, -2011.385f, 29.146f, -269.892f, -2032.251f, 32.146f, 16.5f))
		{
			if (!FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -251.28f, -2001.547f, 23.685f, -221.936f, -2007.784f, 26.685f, 38f))
			{
				func_47();
			}
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Local_3006 - 1))
	{
		if (!PED::IS_PED_INJURED(Local_3006[iVar0 /*20*/]))
		{
			if (iLocal_2669[iVar0] != 8 && iLocal_2669[iVar0] != 7)
			{
				if (iLocal_2696 == 3)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_3006[iVar0 /*20*/].f_3, 1) > 100f)
					{
						if (!TASK::DOES_SCENARIO_EXIST_IN_AREA(Local_3006[iVar0 /*20*/].f_3, 0.5f, 1))
						{
							Local_3006[iVar0 /*20*/].f_14 = 0;
							PED::DELETE_PED(&(Local_3006[iVar0 /*20*/]));
						}
					}
				}
				if (func_46(&(Local_3006[iVar0 /*20*/]), &(Local_3006[iVar0 /*20*/].f_10)) || func_45(&(Local_3006[iVar0 /*20*/]), 20f, 0))
				{
					func_47();
				}
			}
			switch (iLocal_2669[iVar0])
			{
				case 0:
					break;
				
				case 5:
					if (iLocal_2696 == 4)
					{
						switch (iVar0)
						{
							case 0:
								break;
							
							case 1:
								break;
							
							case 7:
								if (CUTSCENE::GET_CUTSCENE_TIME() > 7000)
								{
									func_44(&(Local_3006[iVar0 /*20*/]), "back_right");
									iLocal_2669[iVar0] = 6;
								}
								break;
							
							case 8:
								if (CUTSCENE::GET_CUTSCENE_TIME() > 13000)
								{
									func_44(&(Local_3006[iVar0 /*20*/]), "right");
									iLocal_2669[iVar0] = 6;
								}
								break;
							
							case 18:
								if (CUTSCENE::GET_CUTSCENE_TIME() > 10000)
								{
									func_44(&(Local_3006[iVar0 /*20*/]), "forward");
									iLocal_2669[iVar0] = 6;
								}
								break;
							
							case 19:
								if (CUTSCENE::GET_CUTSCENE_TIME() > 10500)
								{
									func_44(&(Local_3006[iVar0 /*20*/]), "right");
									iLocal_2669[iVar0] = 6;
								}
								break;
							
							case 21:
								if (CUTSCENE::GET_CUTSCENE_TIME() > 9000)
								{
									func_44(&(Local_3006[iVar0 /*20*/]), "right");
									iLocal_2669[iVar0] = 6;
								}
								break;
							
							case 23:
								if (CUTSCENE::GET_CUTSCENE_TIME() > 8000)
								{
									func_44(&(Local_3006[iVar0 /*20*/]), "right");
									iLocal_2669[iVar0] = 6;
								}
								break;
							}
					}
					break;
				
				case 6:
					iLocal_2669[iVar0] = 0;
					break;
				
				case 7:
					if (PED::IS_PED_USING_ANY_SCENARIO(Local_3006[iVar0 /*20*/]))
					{
						switch (iVar0)
						{
							case 0:
							case 3:
							case 6:
							case 9:
								PED::_0x9A77DFD295E29B09(Local_3006[iVar0 /*20*/], 1);
								iLocal_2669[iVar0] = 8;
								break;
							
							case 1:
							case 4:
							case 7:
								if (PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(Local_3006[iVar0 /*20*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_3006[iVar0 /*20*/], 0f, 0.5f, 0f)))
								{
									TASK::TASK_SMART_FLEE_PED(Local_3006[iVar0 /*20*/], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
									iLocal_2669[iVar0] = 8;
								}
								break;
							
							case 2:
							case 10:
							case 13:
								if (GlobalFunc_588(&iLocal_3986, 4000))
								{
									if (PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(Local_3006[iVar0 /*20*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_3006[iVar0 /*20*/], 0f, 0.5f, 0f)))
									{
										TASK::TASK_SMART_FLEE_PED(Local_3006[iVar0 /*20*/], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
										iLocal_2669[iVar0] = 8;
									}
								}
								break;
							
							case 5:
							case 8:
							case 11:
							case 16:
								if (GlobalFunc_588(&iLocal_3986, 2000))
								{
									PED::_0x9A77DFD295E29B09(Local_3006[iVar0 /*20*/], 1);
									iLocal_2669[iVar0] = 8;
								}
								break;
							
							case 12:
							case 15:
							case 18:
							case 21:
							case 24:
								PED::_0x9A77DFD295E29B09(Local_3006[iVar0 /*20*/], 1);
								iLocal_2669[iVar0] = 8;
								break;
							
							case 14:
							case 17:
							case 20:
							case 23:
								if (GlobalFunc_588(&iLocal_3986, 2500))
								{
									PED::_0x9A77DFD295E29B09(Local_3006[iVar0 /*20*/], 1);
									iLocal_2669[iVar0] = 8;
								}
								break;
							
							case 19:
							case 22:
							case 25:
								if (GlobalFunc_588(&iLocal_3986, 9000))
								{
									if (PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(Local_3006[iVar0 /*20*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_3006[iVar0 /*20*/], 0f, 0.5f, 0f)))
									{
										TASK::TASK_SMART_FLEE_PED(Local_3006[iVar0 /*20*/], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
										iLocal_2669[iVar0] = 8;
									}
								}
								break;
						}
					}
					else
					{
						TASK::TASK_SMART_FLEE_PED(Local_3006[iVar0 /*20*/], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
						iLocal_2669[iVar0] = 8;
					}
					break;
				
				case 8:
					break;
			}
		}
		else if (!Local_3006[iVar0 /*20*/].f_14)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_3006[iVar0 /*20*/].f_3, 1) < 150f)
			{
				STREAMING::REQUEST_MODEL(Local_3006[iVar0 /*20*/].f_1);
				STREAMING::REQUEST_ANIM_DICT("amb@prop_human_seat_chair@male@elbows_on_knees@react_shock");
				STREAMING::REQUEST_ANIM_DICT("amb@prop_human_seat_chair@male@generic_skinny@react_shock");
				STREAMING::REQUEST_ANIM_DICT("amb@prop_human_seat_chair@male@left_elbow_on_knee@react_shock");
				STREAMING::REQUEST_ANIM_DICT("amb@prop_human_seat_chair@female@arms_folded@react_shock");
				STREAMING::REQUEST_ANIM_DICT("amb@prop_human_seat_chair@female@legs_crossed@react_shock");
				STREAMING::REQUEST_ANIM_DICT("amb@prop_human_seat_chair@female@proper@react_shock");
				STREAMING::REQUEST_ANIM_DICT("amb@prop_human_seat_chair@female@proper_skinny@react_shock");
				if (((((((STREAMING::HAS_MODEL_LOADED(Local_3006[iVar0 /*20*/].f_1) && STREAMING::HAS_ANIM_DICT_LOADED("amb@prop_human_seat_chair@male@elbows_on_knees@react_shock")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@prop_human_seat_chair@male@generic_skinny@react_shock")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@prop_human_seat_chair@male@left_elbow_on_knee@react_shock")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@prop_human_seat_chair@female@arms_folded@react_shock")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@prop_human_seat_chair@female@legs_crossed@react_shock")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@prop_human_seat_chair@female@proper@react_shock")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@prop_human_seat_chair@female@proper_skinny@react_shock"))
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(Local_3006[iVar0 /*20*/].f_3, 0.5f, 1))
					{
						Local_3006[iVar0 /*20*/] = PED::CREATE_PED(26, Local_3006[iVar0 /*20*/].f_1, Local_3006[iVar0 /*20*/].f_3, Local_3006[iVar0 /*20*/].f_9, 1, 1);
						PED::SET_PED_KEEP_TASK(Local_3006[iVar0 /*20*/], 1);
						ENTITY::SET_ENTITY_HEALTH(Local_3006[iVar0 /*20*/], Local_3006[iVar0 /*20*/].f_10);
						PED::SET_PED_RANDOM_COMPONENT_VARIATION(Local_3006[iVar0 /*20*/], 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3006[iVar0 /*20*/], 1);
						PED::SET_PED_NAME_DEBUG(Local_3006[iVar0 /*20*/], &(Local_3006[iVar0 /*20*/].f_16));
						PED::_0x425AECF167663F48(Local_3006[iVar0 /*20*/], 1);
						ENTITY::CREATE_FORCED_OBJECT(Local_3006[iVar0 /*20*/].f_3, 0.5f, joaat("v_ilev_chair02_ped"), 1);
						TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_3006[iVar0 /*20*/], Local_3006[iVar0 /*20*/].f_3, 0.5f, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_3006[iVar0 /*20*/], 0, 0);
						Local_3006[iVar0 /*20*/].f_14 = 1;
						return;
					}
				}
			}
		}
		else if (iLocal_2669[iVar0] != 8 && iLocal_2669[iVar0] != 7)
		{
			if (PED::IS_PED_INJURED(Local_3006[iVar0 /*20*/]))
			{
				func_47();
			}
		}
		iVar0++;
	}
}

void func_44(var uParam0, char* sParam1)//Position - 0x1CC3
{
	switch (ENTITY::GET_ENTITY_MODEL(*uParam0))
	{
		case joaat("a_m_y_hipster_03"):
			if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(*uParam0, "amb@prop_human_seat_chair@male@elbows_on_knees@base", "base"))
			{
				TASK::PLAY_ANIM_ON_RUNNING_SCENARIO(*uParam0, "amb@prop_human_seat_chair@male@elbows_on_knees@react_shock", sParam1);
			}
			else if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(*uParam0, "amb@prop_human_seat_chair@male@generic_skinny@base", "base"))
			{
				TASK::PLAY_ANIM_ON_RUNNING_SCENARIO(*uParam0, "amb@prop_human_seat_chair@male@generic_skinny@react_shock", sParam1);
			}
			else if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(*uParam0, "amb@prop_human_seat_chair@male@left_elbow_on_knee@base", "base"))
			{
				TASK::PLAY_ANIM_ON_RUNNING_SCENARIO(*uParam0, "amb@prop_human_seat_chair@male@left_elbow_on_knee@react_shock", sParam1);
			}
			break;
		
		case joaat("a_f_y_hipster_03"):
			if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(*uParam0, "amb@prop_human_seat_chair@female@arms_folded@base", "base"))
			{
				TASK::PLAY_ANIM_ON_RUNNING_SCENARIO(*uParam0, "amb@prop_human_seat_chair@female@arms_folded@react_shock", sParam1);
			}
			else if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(*uParam0, "amb@prop_human_seat_chair@female@legs_crossed@base", "base"))
			{
				TASK::PLAY_ANIM_ON_RUNNING_SCENARIO(*uParam0, "amb@prop_human_seat_chair@female@legs_crossed@react_shock", sParam1);
			}
			else if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(*uParam0, "amb@prop_human_seat_chair@female@proper@base", "base"))
			{
				TASK::PLAY_ANIM_ON_RUNNING_SCENARIO(*uParam0, "amb@prop_human_seat_chair@female@proper@react_shock", sParam1);
			}
			else if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(*uParam0, "amb@prop_human_seat_chair@female@proper_skinny@base", "base"))
			{
				TASK::PLAY_ANIM_ON_RUNNING_SCENARIO(*uParam0, "amb@prop_human_seat_chair@female@proper_skinny@react_shock", sParam1);
			}
			break;
	}
}

int func_45(int iParam0, float fParam1, bool bParam2)//Position - 0x1DD3
{
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(*iParam0, 1), 1) < fParam1)
		{
			if (PED::CAN_PED_SEE_HATED_PED(*iParam0, PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
				{
					if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), *iParam0))
					{
						return 1;
					}
					if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), *iParam0))
					{
						return 1;
					}
				}
			}
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
		if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(*iParam0, 1), 4f, 1))
		{
			return 1;
		}
		if (bParam2)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(*iParam0, 1), 1) < 1.5f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_46(int iParam0, var uParam1)//Position - 0x1E8D
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(*iParam0);
			if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, PLAYER::PLAYER_PED_ID(), 1) || iVar0 < *uParam1) || PED::IS_PED_RESPONDING_TO_EVENT(*iParam0, 17))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_47()//Position - 0x1EE9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Local_3006 - 1))
	{
		if (iLocal_2669[iVar0] != 8 && iLocal_2669[iVar0] != 7)
		{
			iLocal_2669[iVar0] = 7;
		}
		iVar0++;
	}
	if (iLocal_3986 == 0)
	{
		iLocal_3986 = MISC::GET_GAME_TIMER();
	}
}

void func_48(bool bParam0)//Position - 0x1F38
{
	if (!PED::IS_PED_INJURED(Local_3588))
	{
		if (iLocal_3960 != 22)
		{
			if (((func_46(&Local_3588, &(Local_3588.f_10)) || func_45(&Local_3588, 30f, 0)) || PED::IS_PED_RAGDOLL(Local_3588)) || (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -175.828f, -2039.052f, 26.621f, -276.227f, -1989.866f, 35.621f, 195.7f, 0, 1, 0) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3588, "missfam4", "base", 3))
				{
					TASK::STOP_ANIM_TASK(Local_3588, "missfam4", "base", -1056964608);
				}
				ENTITY::DETACH_ENTITY(Local_3817.x, 1, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3817.f_2);
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&Local_3817);
				TASK::TASK_SMART_FLEE_PED(Local_3588, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_3588);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3588.f_1);
				iLocal_3960 = 22;
			}
		}
		switch (iLocal_3960)
		{
			case 0:
				iLocal_4042 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_4042, 0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_4042, -221.051f, -2039.714f, 26.62f, -217.358f, -2033.186f, 29.62f, 6.7f, 0, 1, 0) || iLocal_3947 >= 2)
					{
						switch (GlobalFunc_8315())
						{
							case 0:
								if (!PED::IS_PED_SITTING_IN_VEHICLE(uLocal_3865[2], iLocal_4042))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_4248);
									TASK::TASK_LOOK_AT_ENTITY(0, uLocal_3865[2], -1, 0, 2);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uLocal_3865[2], 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_4248);
									TASK::TASK_PERFORM_SEQUENCE(Local_3588, uLocal_4248);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_4248);
									iLocal_3960++;
								}
								break;
							
							case 2:
								if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_4042))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_4248);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_4248);
									TASK::TASK_PERFORM_SEQUENCE(Local_3588, uLocal_4248);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_4248);
									iLocal_3960++;
								}
								break;
							}
						}
				}
				break;
			
			case 1:
				switch (GlobalFunc_8315())
				{
					case 0:
						if (!PED::IS_PED_INJURED(uLocal_3865[2]) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_3588, 1), ENTITY::GET_ENTITY_COORDS(uLocal_3865[2], 1), 1) < 20f)
						{
							if (!PED::IS_PED_FACING_PED(Local_3588, uLocal_3865[2], 40f))
							{
								if (func_52(Local_3588, 242628503, 1, -2))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_4248);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uLocal_3865[2], 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_4248);
									TASK::TASK_PERFORM_SEQUENCE(Local_3588, uLocal_4248);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_4248);
								}
							}
						}
						else if (!PED::IS_PED_FACING_PED(Local_3588, PLAYER::PLAYER_PED_ID(), 40f))
						{
							if (func_52(Local_3588, 242628503, 1, -2))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_4248);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_4248);
								TASK::TASK_PERFORM_SEQUENCE(Local_3588, uLocal_4248);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_4248);
							}
						}
						break;
					
					case 2:
						if (!PED::IS_PED_FACING_PED(Local_3588, PLAYER::PLAYER_PED_ID(), 40f))
						{
							if (func_52(Local_3588, 242628503, 1, -2))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_4248);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_4248);
								TASK::TASK_PERFORM_SEQUENCE(Local_3588, uLocal_4248);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_4248);
							}
						}
						break;
				}
				break;
			
			case 22:
				break;
		}
	}
	else if (!Local_3588.f_14)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_2713.f_3, 1) < 650f)
		{
			STREAMING::REQUEST_MODEL(Local_3588.f_1);
			STREAMING::REQUEST_MODEL(Local_3817.f_2);
			STREAMING::REQUEST_ANIM_DICT("missfam4");
			if ((STREAMING::HAS_MODEL_LOADED(Local_3588.f_1) && STREAMING::HAS_MODEL_LOADED(Local_3817.f_2)) && STREAMING::HAS_ANIM_DICT_LOADED("missfam4"))
			{
				func_51(&Local_3588);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_4276, 1862763509);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_4276, iLocal_4274);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_3588, iLocal_4276);
				PED::SET_PED_CAN_RAGDOLL(Local_3588, 1);
				PED::SET_PED_CONFIG_FLAG(Local_3588, 42, 1);
				HUD::REMOVE_BLIP(&(Local_3588.f_2));
				GlobalFunc_173(&uLocal_4044, 6, Local_3588, "groupie1", 0, 1);
				TASK::TASK_PLAY_ANIM(Local_3588, "missfam4", "base", 1000f, -8f, -1, 49, 0, 0, 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_3588, 0, 0);
				Local_3817.x = OBJECT::CREATE_OBJECT(Local_3817.f_2, Local_3588.f_3 + Vector(1f, 0f, 0f), 1, 1, 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_3817.x, Local_3588, PED::GET_PED_BONE_INDEX(Local_3588, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_3817.x);
			}
		}
	}
	else if (bParam0)
	{
		GlobalFunc_553(236);
	}
}



void func_51(var uParam0)//Position - 0x24DC
{
	MISC::CLEAR_AREA(uParam0->f_3, 2f, 1, 0, 0, 0);
	*uParam0 = PED::CREATE_PED(26, uParam0->f_1, uParam0->f_3, uParam0->f_9, 1, 1);
	PED::SET_PED_RANDOM_COMPONENT_VARIATION(*uParam0, 0);
	PED::SET_PED_DIES_WHEN_INJURED(*uParam0, 1);
	PED::SET_PED_AS_ENEMY(*uParam0, 1);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam0, 1, 0);
	PED::SET_PED_KEEP_TASK(*uParam0, 1);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 132, 1);
	WEAPON::GIVE_WEAPON_TO_PED(*uParam0, uParam0->f_15, -1, 1, 1);
	ENTITY::SET_ENTITY_HEALTH(*uParam0, uParam0->f_10);
	PED::SET_PED_MAX_HEALTH(*uParam0, uParam0->f_10);
	if (uParam0->f_12)
	{
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*uParam0, 1);
	}
	if (uParam0->f_13)
	{
		PED::ADD_ARMOUR_TO_PED(*uParam0, 100);
	}
	uParam0->f_14 = 1;
	PED::SET_PED_NAME_DEBUG(*uParam0, &(uParam0->f_16));
	PED::SET_PED_SEEING_RANGE(*uParam0, 250f);
	PED::SET_PED_HEARING_RANGE(*uParam0, 250f);
	PED::SET_PED_ID_RANGE(*uParam0, 250f);
	uParam0->f_2 = HUD::ADD_BLIP_FOR_ENTITY(*uParam0);
	HUD::SET_BLIP_DISPLAY(uParam0->f_2, 2);
	PED::SET_PED_CAN_EVASIVE_DIVE(*uParam0, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
}

int func_52(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x25DA
{
	int iVar0;
	
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1);
	if (bParam2)
	{
		if ((iVar0 == 7 || iVar0 == 2) || TASK::GET_SEQUENCE_PROGRESS(iParam0) == iParam3)
		{
			return 1;
		}
	}
	else if (iVar0 == 7 || iVar0 == 2)
	{
		return 1;
	}
	return 0;
}







void func_59()//Position - 0x27C5
{
	func_603();
	switch (iLocal_4008)
	{
		case 0:
			func_600();
			break;
		
		case 1:
			func_548();
			break;
		
		case 2:
			func_513();
			break;
		
		case 3:
			func_511();
			break;
		
		case 4:
			func_427();
			break;
		
		case 5:
			func_60();
			break;
	}
}

void func_60()//Position - 0x2827
{
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	PED::SET_CREATE_RANDOM_COPS(0);
	VEHICLE::DELETE_ALL_TRAINS();
	VEHICLE::SET_RANDOM_TRAINS(0);
	if (iLocal_4009)
	{
		GlobalFunc_4972(1059.502f, -291.9928f, 49.4891f, 332.7211f, 1, 0);
	}
	STREAMING::REQUEST_MODEL(Local_2946.f_1);
	STREAMING::REQUEST_MODEL(Local_2986.f_1);
	STREAMING::REQUEST_MODEL(Local_2713.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_2713.f_1, 1);
	STREAMING::REQUEST_MODEL(Local_2728.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_2728.f_1, 1);
	STREAMING::REQUEST_MODEL(Local_2926.f_1);
	STREAMING::REQUEST_MODEL(Local_2743.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_2743.f_1, 1);
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "lkfamily4");
	func_425();
	if (iLocal_4009)
	{
		GlobalFunc_4967(0, -1, 1);
	}
	while (((((((!STREAMING::HAS_MODEL_LOADED(Local_2946.f_1) || !STREAMING::HAS_MODEL_LOADED(Local_2986.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_2713.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_2728.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_2926.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_2743.f_1)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "lkfamily4")) || !CUTSCENE::HAS_CUTSCENE_LOADED())
	{
		SYSTEM::WAIT(0);
	}
	MISC::CLEAR_AREA(1059.502f, -291.9928f, 49.4891f, 1000f, 1, 0, 0, 0);
	Local_2713 = VEHICLE::CREATE_VEHICLE(Local_2713.f_1, 1059.502f, -291.9928f, 49.4891f, 332.7211f, 1, 1);
	VEHICLE::SET_VEHICLE_STRONG(Local_2713, 1);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_2713, 1);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_2713, 1, 1);
	VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_2713, false);
	VEHICLE::SET_VEHICLE_COLOURS(Local_2713, 0, 0);
	Local_2728 = VEHICLE::CREATE_VEHICLE(Local_2728.f_1, 1051.93f, -304.8f, 49.4891f, 332.7211f, 1, 1);
	VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_2728, false);
	ENTITY::SET_ENTITY_PROOFS(Local_2728, 1, 1, 1, 1, 1, 0, 0, 0);
	VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_2713, Local_2728, 1065353216);
	func_371(2, 0);
	GlobalFunc_173(&uLocal_4044, 2, PLAYER::PLAYER_PED_ID(), "trevor", 0, 1);
	PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2713, -1);
	func_79(&(uLocal_3865[0]), 0, Local_2713, 0, 0, 0, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_3865[0], 1);
	GlobalFunc_173(&uLocal_4044, 0, uLocal_3865[0], "michael", 0, 1);
	Local_2743 = VEHICLE::CREATE_VEHICLE(Local_2743.f_1, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(1, (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(1, "lkfamily4") - 3500f), "lkfamily4"), 332.2f, 1, 1);
	VEHICLE::SET_VEHICLE_STRONG(Local_2743, 1);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_2743, 1);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_2743, 1, 1);
	VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_2743, false);
	VEHICLE::SET_VEHICLE_COLOURS(Local_2743, 27, 0);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2743, 1, "lkfamily4", 1);
	VEHICLE::SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(Local_2743);
	VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_2743, 0);
	VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_2743, 0);
	GlobalFunc_7061(&Local_2926, 27, Local_2743, -1, 0);
	GlobalFunc_173(&uLocal_4044, 5, Local_2926, "lazlow", 0, 1);
	CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_3865[0], "Michael", 0, 0, 0);
	CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_2926, "Lazlow", 0, 0, 0);
	CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_2743, "Lazlows_car", 0, 0, 0);
	CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_2713, "family_4_truck", 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(Local_2728))
	{
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_2728, "Family_4_trailer", 0, 0, 0);
	}
	else
	{
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Family_4_trailer", 3, Local_2728.f_1, 0);
	}
	CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Lazlow_Jeans", 2, Local_3841.f_2, 0);
	if (!iLocal_4009)
	{
		STREAMING::LOAD_SCENE(1059.502f, -291.9928f, 49.4891f);
	}
	func_69(1, 1, 1, 0);
	GlobalFunc_8316(1, 1, 1, 0);
	CUTSCENE::START_CUTSCENE(0);
	while (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		SYSTEM::WAIT(0);
	}
	CAM::DO_SCREEN_FADE_IN(800);
	iLocal_3946 = 2;
	iLocal_2696 = 9;
}









int func_69(bool bParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x2DE2
{
	if (GlobalFunc_552(1, 0, 1) || iParam3)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
		GlobalFunc_8316(1, 1, 1, 0);
		HUD::CLEAR_HELP(1);
		HUD::CLEAR_PRINTS();
		if (bParam2)
		{
			GlobalFunc_4956();
		}
		else
		{
			GlobalFunc_4935();
		}
		HUD::DISPLAY_HUD(0);
		HUD::DISPLAY_RADAR(0);
		CAM::SET_WIDESCREEN_BORDERS(1, 500);
		if (bParam0)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 4);
		}
		else
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		}
		if (bParam1)
		{
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 1);
		}
		else
		{
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
		}
		GlobalFunc_626();
		return 1;
	}
	return 0;
}










int func_79(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x30FF
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
				GlobalFunc_8386(*uParam0, iParam1, bParam5);
				PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
				GlobalFunc_11325(*uParam0);
				GlobalFunc_7694(*uParam0, 1, 0);
				GlobalFunc_7693(*uParam0);
				GlobalFunc_7714(*uParam0);
				GlobalFunc_11336(*uParam0, bParam6);
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




































































































































































































































































































int func_371(int iParam0, bool bParam1)//Position - 0x4DBD6
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
		func_79(&(Global_17052[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2));
		func_419(&(Global_17052[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_17052.f_7 = iParam0;
	Global_17052.f_39 = 1;
	GlobalFunc_10979(&Global_17052, 0, 0, 0);
	GlobalFunc_5124(iParam0);
	return 1;
}
















































int func_419(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x537BA
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
			GlobalFunc_8386(*uParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
			GlobalFunc_11325(*uParam0);
			GlobalFunc_7694(*uParam0, 1, 0);
			GlobalFunc_7693(*uParam0);
			GlobalFunc_7714(*uParam0);
			GlobalFunc_11336(*uParam0, bParam8);
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






int func_425()//Position - 0x539AC
{
	CUTSCENE::REQUEST_CUTSCENE("Family_4_MCS_3_concat", 8);
	return 1;
}


void func_427()//Position - 0x53A55
{
	struct<3> Var0;
	
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	PED::SET_CREATE_RANDOM_COPS(0);
	VEHICLE::DELETE_ALL_TRAINS();
	VEHICLE::SET_RANDOM_TRAINS(0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("utillitruck"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("utillitruck2"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("utillitruck3"), 1);
	if (iLocal_4009)
	{
		GlobalFunc_4972(503.0987f, -851.0613f, 24.0433f, 359.5455f, 0, 0);
	}
	STREAMING::REQUEST_MODEL(Local_2946.f_1);
	STREAMING::REQUEST_MODEL(Local_2986.f_1);
	STREAMING::REQUEST_MODEL(Local_2713.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_2713.f_1, 1);
	STREAMING::REQUEST_MODEL(Local_2728.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_2728.f_1, 1);
	STREAMING::REQUEST_MODEL(Local_2743.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_2743.f_1, 1);
	STREAMING::REQUEST_MODEL(Local_2926.f_1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(Local_2926.f_1, 1);
	STREAMING::REQUEST_MODEL(joaat("sentinel"));
	STREAMING::REQUEST_MODEL(joaat("schafter2"));
	STREAMING::REQUEST_MODEL(joaat("manana"));
	STREAMING::REQUEST_ANIM_DICT("missfam4");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\FAM4_UNHITCH_TRAILER", 0);
	STREAMING::REQUEST_PTFX_ASSET();
	func_510();
	if (iLocal_4009)
	{
		GlobalFunc_4967(0, -1, 1);
	}
	while ((((((((((((!STREAMING::HAS_MODEL_LOADED(Local_2946.f_1) || !STREAMING::HAS_MODEL_LOADED(Local_2986.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_2713.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_2728.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_2743.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_2926.f_1)) || !STREAMING::HAS_MODEL_LOADED(joaat("sentinel"))) || !STREAMING::HAS_MODEL_LOADED(joaat("schafter2"))) || !STREAMING::HAS_MODEL_LOADED(joaat("manana"))) || !STREAMING::HAS_ANIM_DICT_LOADED("missfam4")) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\FAM4_UNHITCH_TRAILER", 0)) || !STREAMING::HAS_PTFX_ASSET_LOADED()) || !func_509())
	{
		SYSTEM::WAIT(0);
	}
	STREAMING::SET_PED_POPULATION_BUDGET(2);
	MISC::CLEAR_AREA(502.97f, -860.93f, 24.15f, 10000f, 1, 0, 0, 0);
	Local_2713 = VEHICLE::CREATE_VEHICLE(Local_2713.f_1, 502.9799f, -860.9365f, 24.1538f, 358.903f, 1, 1);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_2713);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_2713, 1, 1);
	VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_2713, false);
	VEHICLE::SET_VEHICLE_COLOURS(Local_2713, 0, 0);
	ENTITY::SET_ENTITY_HEALTH(Local_2713, 1500);
	VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_2713, 1500f);
	VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_2713, 1500f);
	VEHICLE::SET_VEHICLE_STRONG(Local_2713, 1);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_2713, 1);
	AUDIO::SET_RADIO_TO_STATION_NAME("off");
	if (!Global_86818)
	{
		Local_2728 = VEHICLE::CREATE_VEHICLE(Local_2728.f_1, 502.9191f, -865.4985f, 24.2171f, 358.8516f, 1, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_2728);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_2728, false);
		VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_2713, Local_2728, 1065353216);
		PHYSICS::ACTIVATE_PHYSICS(Local_2713);
		PHYSICS::ACTIVATE_PHYSICS(Local_2728);
	}
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2713, 201, "lkfamily4", 1);
	VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_2713, 7000f);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2713, 1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_2728))
	{
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2728, 202, "lkfamily4", 1);
		VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_2728, 7000f);
		VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2728, 1);
	}
	VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_2713, -15f);
	Local_2743.f_3 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(1, 68000f, "lkfamily4") };
	Var0 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(1, 68000f, "lkfamily4") };
	Local_2743 = VEHICLE::CREATE_VEHICLE(Local_2743.f_1, Local_2743.f_3, Var0.f_2, 1, 1);
	VEHICLE::SET_VEHICLE_STRONG(Local_2743, 1);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_2743, 1);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_2743, 1, 1);
	VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_2743, false);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_2743, 1);
	ENTITY::SET_ENTITY_PROOFS(Local_2743, 0, 1, 1, 1, 1, 0, 0, 0);
	VEHICLE::SET_VEHICLE_STRONG(Local_2743, 1);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_2743, 1);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2743, 3);
	VEHICLE::SET_VEHICLE_COLOURS(Local_2743, 27, 0);
	VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_2743, 0);
	VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_2743, 0);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_2743, "FAMILY_4_LAZLOWS_CAR", 0);
	GlobalFunc_7061(&Local_2926, 27, Local_2743, -1, 0);
	PED::SET_PED_CAN_RAGDOLL(Local_2926, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_2926, 3, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2926, 1);
	GlobalFunc_173(&uLocal_4044, 5, Local_2926, "lazlow", 0, 1);
	func_371(2, 0);
	GlobalFunc_173(&uLocal_4044, 2, PLAYER::PLAYER_PED_ID(), "trevor", 0, 1);
	PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2713, -1);
	func_79(&(uLocal_3865[0]), 0, Local_2713, 0, 0, 0, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_3865[0], 1);
	GlobalFunc_173(&uLocal_4044, 0, uLocal_3865[0], "michael", 0, 1);
	func_508("lkfamily4", 1, 1, 1);
	func_507();
	fLocal_1078 = 200f;
	iLocal_41 = 1;
	iLocal_46 = 1;
	iLocal_55 = 1;
	iLocal_53 = 1;
	func_506(1, 3, 11);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2743, 1, "lkfamily4", 1);
	func_504(Local_2743, 68000f);
	func_478(Local_2743, 1f);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2743, 1);
	MISC::SET_INSTANCE_PRIORITY_HINT(2);
	func_477(joaat("sentinel"), 100);
	func_477(joaat("schafter2"), 100);
	func_477(joaat("taco"), 100);
	if (!iLocal_4009)
	{
		STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
	}
	AUDIO::START_AUDIO_SCENE("FAMILY_4_CHASE_TRUCK_1");
	AUDIO::TRIGGER_MUSIC_EVENT("FAM4_CHASE_RESTART");
	iLocal_3928 = 3;
	iLocal_3943 = 3;
	iLocal_3954 = 6;
	iLocal_3944 = 2;
	iLocal_3953 = 5;
	fLocal_3997 = 1f;
	Local_2743.f_7 = 1f;
	iLocal_3926 = MISC::GET_GAME_TIMER();
	while (!GlobalFunc_588(&iLocal_3926, 1000))
	{
		SYSTEM::WAIT(0);
		func_478(Local_2743, 1f);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2713, 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2713))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2713);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_2728))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2728, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2728))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2728);
			}
		}
	}
	func_473(1, 0, 0, 1);
	iLocal_3926 = MISC::GET_GAME_TIMER();
	iLocal_3975 = MISC::GET_GAME_TIMER();
	GlobalFunc_164("family4_god_2", 4000, 1);
	GlobalFunc_11046(4, "half way through truck chase", 1, 0, 0, 1);
	iLocal_2696 = 7;
}














































void func_473(bool bParam0, float fParam1, float fParam2, bool bParam3)//Position - 0x591D2
{
	GlobalFunc_8316(0, 1, 1, 0);
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	GlobalFunc_5105();
	HUD::DISPLAY_HUD(1);
	HUD::DISPLAY_RADAR(1);
	CAM::SET_WIDESCREEN_BORDERS(0, 500);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		CAM::DESTROY_ALL_CAMS(0);
		CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam1);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam2, 1065353216);
		if (bParam0)
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
	}
	if (bParam3)
	{
		GlobalFunc_698();
	}
	else
	{
		GlobalFunc_626();
	}
	CAM::DO_SCREEN_FADE_IN(800);
}




void func_477(int iParam0, int iParam1)//Position - 0x592B9
{
	if (Global_54909 == 32)
	{
		return;
	}
	Global_54910[Global_54909 /*2*/] = iParam0;
	Global_54910[Global_54909 /*2*/].f_1 = iParam1;
	Global_54909++;
}

void func_478(int iParam0, float fParam1)//Position - 0x592EA
{
	float fVar0;
	struct<3> Var1;
	int iVar4;
	
	fVar0 = MISC::GET_FRAME_TIME();
	fVar0 = (fVar0 * 1000f);
	bLocal_58 = false;
	if (!bLocal_40)
	{
		if (bLocal_39)
		{
			GlobalFunc_2512();
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				MISC::CLEAR_AREA(Var1, 1000f, 1, 0, 0, 0);
			}
			bLocal_40 = true;
		}
	}
	else if (!bLocal_39)
	{
		GlobalFunc_2214();
		bLocal_40 = false;
	}
	if (bLocal_39)
	{
		fParam1 = 1f;
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (!bLocal_33)
	{
		if (iLocal_28)
		{
			fLocal_1071 = 0f;
		}
		else
		{
			fLocal_1071 = 1f;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (GlobalFunc_5657(PLAYER::PLAYER_PED_ID(), iParam0))
					{
						iLocal_38 = 1;
					}
					else
					{
						iLocal_38 = 0;
					}
				}
				fLocal_1068 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
				VEHICLE::SET_PLAYBACK_SPEED(iParam0, ((fParam1 * fLocal_1069) * fLocal_1071));
				if (bLocal_37)
				{
					func_501(iParam0, fLocal_1068);
					GlobalFunc_2913(iParam0, fLocal_1078);
					if (fLocal_1073 > 1000f)
					{
						if (iLocal_1639 == 0)
						{
							GlobalFunc_2912(iParam0, fLocal_1078);
						}
						fVar0 = ((fLocal_1068 + 4000f) + (SYSTEM::TO_FLOAT(iLocal_1639) * 2000f));
						func_498(iParam0, fVar0, fLocal_1072);
						iLocal_1639++;
						if (iLocal_1639 > 2)
						{
							fLocal_1073 = 0f;
						}
					}
					else
					{
						iLocal_1639 = 0;
						fLocal_1073 = (fLocal_1073 + (MISC::GET_FRAME_TIME() * 1000f));
					}
				}
			}
		}
		iVar4 = 0;
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				iVar4 = 1;
			}
		}
		if (fLocal_1068 == 0f || CAM::IS_SCREEN_FADED_OUT())
		{
			iVar4 = 1;
		}
		if (iVar4 && !bLocal_45)
		{
			if (!iLocal_27)
			{
				func_495(iParam0, ((fParam1 * fLocal_1069) * fLocal_1071), 0);
				if (!iLocal_48)
				{
				}
				iLocal_48 = 0;
			}
			if (bLocal_30)
			{
				func_494(iParam0);
			}
			if (!iLocal_27)
			{
				func_481(iParam0, ((fParam1 * fLocal_1069) * fLocal_1071), 0);
			}
		}
		if (iLocal_35)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_2610 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					Local_2180 = { ENTITY::GET_ENTITY_COORDS(iLocal_2610, 1) };
					ENTITY::GET_ENTITY_QUATERNION(iLocal_2610, &uLocal_466, &uLocal_467, &uLocal_468, &uLocal_469);
				}
			}
			iLocal_35 = 0;
		}
		if (iLocal_34)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2610))
			{
				GlobalFunc_2210(iLocal_2611);
				iLocal_2611 = iLocal_2610;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2611, 0))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_2611, Local_2180, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_2611, uLocal_466, uLocal_467, uLocal_468, uLocal_469);
			}
			fLocal_1067 = fLocal_1070;
			iLocal_27 = 1;
			iLocal_34 = 0;
		}
		if (iLocal_27)
		{
			while (!func_479(&iParam0, fLocal_1067))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_28 = 1;
		}
		if (iLocal_41)
		{
			iLocal_41 = 0;
		}
	}
}

int func_479(int iParam0, float fParam1)//Position - 0x59585
{
	if (!iLocal_42)
	{
		iLocal_27 = 1;
		func_19();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
				VEHICLE::SET_VEHICLE_FIXED(*iParam0);
			}
			if (!iLocal_1626 == -1)
			{
				while (!func_480(iParam0, iLocal_1626, fParam1, 1, 0, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!bLocal_32)
				{
					iLocal_28 = 1;
					fLocal_1071 = 0f;
					iLocal_1627 = 0;
					iLocal_1629 = 0;
					iLocal_1628 = 0;
					iLocal_1623 = 0;
					iLocal_1624 = 0;
					iLocal_1625 = 0;
					iLocal_1630 = 0;
					iLocal_1631 = 0;
					iLocal_1632 = 0;
				}
			}
		}
		iLocal_42 = 1;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(*iParam0, ((1f * fLocal_1069) * fLocal_1071));
				func_480(iParam0, iLocal_1626, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_1068 = fParam1;
		iLocal_1633 = 0;
		iLocal_1636 = 0;
		fLocal_1083 = 0f;
		fLocal_1082 = 0f;
		func_481(*iParam0, ((1f * fLocal_1069) * fLocal_1071), 1);
		func_495(*iParam0, ((1f * fLocal_1069) * fLocal_1071), 1);
		func_494(*iParam0);
		if ((iLocal_1630 == 0 && iLocal_1631 == 0) && iLocal_1632 == 0)
		{
			iLocal_28 = 0;
			iLocal_27 = 0;
			iLocal_42 = 0;
			return 1;
		}
	}
	return 0;
}

int func_480(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x596B7
{
	float fVar0;
	
	if (iParam1 > 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_2207);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, &cLocal_2207))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*iParam0, 0);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*iParam0, iParam1, &cLocal_2207, 1092616192, 786603);
					}
					else
					{
						if (iParam1 != iLocal_1634 && iParam1 != iLocal_1635)
						{
							if (bParam7)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_2207, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_2207, 1 | 4, 0, 786603);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_2207, 1);
							}
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_2207, 1);
						}
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, fParam2);
						if (bParam5)
						{
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*iParam0, 1);
						}
						return 1;
					}
				}
				else if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(*iParam0) == VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, &cLocal_2207))
				{
					fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(*iParam0);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
						VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_2207);
					}
					if (bParam5)
					{
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*iParam0, 1);
					}
					return 1;
				}
				else
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
					ENTITY::FREEZE_ENTITY_POSITION(*iParam0, 0);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*iParam0, iParam1, &cLocal_2207, 1092616192, 786603);
					}
					else if (iParam1 != iLocal_1634 && iParam1 != iLocal_1635)
					{
						if (bParam7)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_2207, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_2207, 1 | 4, 0, 786603);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_2207, 1);
						}
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_2207, 1);
					}
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, fParam2);
					if (bParam5)
					{
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*iParam0, 1);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_481(int iParam0, float fParam1, bool bParam2)//Position - 0x5989D
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	float fVar12;
	float fVar13;
	bool bVar14;
	bool bVar15;
	var uVar16;
	var uVar17;
	bool bVar18;
	int iVar19;
	int iVar20;
	
	bVar15 = PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID());
	uVar16 = PED::CAN_CREATE_RANDOM_DRIVER();
	uVar17 = PED::CAN_CREATE_RANDOM_BIKE_RIDER();
	bVar18 = false;
	if (bVar15)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		}
		Var9 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar0 = iLocal_1629;
		while (iVar0 < 95)
		{
			if (iLocal_1426[iVar0] != 99)
			{
				if (iLocal_1426[iVar0] == 0)
				{
					if (iLocal_1330[iVar0] > 0)
					{
						if (!iLocal_27)
						{
							if (fLocal_1068 > (fLocal_854[iVar0] - (7000f * fParam1)))
							{
								if (GlobalFunc_2222(iLocal_2310[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_1522[iVar0]), 0);
								}
								else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2310[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_1522[iVar0]), 2);
								}
								MISC::CLEAR_BIT(&(iLocal_1522[iVar0]), 1);
								iLocal_1426[iVar0]++;
								iLocal_1631++;
							}
						}
						else
						{
							fVar12 = (fLocal_1068 - fLocal_854[iVar0]);
							fVar12 = (fVar12 * fLocal_950[iVar0]);
							if (fVar12 >= 0f)
							{
								if (fVar12 < func_492(iLocal_1330[iVar0]))
								{
									if (GlobalFunc_2222(iLocal_2310[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1522[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2310[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1522[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_1522[iVar0]), 1);
									iLocal_1426[iVar0]++;
									iLocal_1631++;
								}
								else
								{
									iLocal_1426[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_1426[iVar0] = 99;
					}
				}
				else if (iLocal_1426[iVar0] == 1)
				{
					bVar14 = false;
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1330[iVar0], &cLocal_2207);
					if (MISC::IS_BIT_SET(iLocal_1522[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2211());
						bVar14 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
					}
					else if (!bLocal_54 && ((!MISC::IS_BIT_SET(iLocal_1522[iVar0], 2) && uVar16) || (MISC::IS_BIT_SET(iLocal_1522[iVar0], 2) && uVar17)))
					{
						bVar14 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_31());
						bVar14 = STREAMING::HAS_MODEL_LOADED(func_31());
					}
					if (bVar14)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2509[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_2310[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_2310[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1330[iVar0], &cLocal_2207))
							{
								if (fLocal_1068 >= (fLocal_854[iVar0] - (fLocal_1081 * fParam1)))
								{
									if ((iLocal_41 || bParam2) || (!bLocal_58 && !func_491(Local_1894[iVar0 /*3*/], Var9, 5f, fLocal_1079)))
									{
										if (bLocal_37)
										{
											func_490(Local_1894[iVar0 /*3*/], Var9, fLocal_1072);
										}
										iLocal_2509[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_2310[iVar0], Local_1894[iVar0 /*3*/], 0f, 0, 0);
										if (iLocal_2310[iVar0] == joaat("polmav"))
										{
											VEHICLE::SET_VEHICLE_LIVERY(iLocal_2509[iVar0], 0);
										}
										if (iLocal_50 && !MISC::IS_BIT_SET(iLocal_1522[iVar0], 0))
										{
											func_489(iLocal_2509[iVar0]);
										}
										if (MISC::IS_BIT_SET(iLocal_1522[iVar0], 3))
										{
											ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_2509[iVar0], 1);
										}
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_2509[iVar0], Local_1894[iVar0 /*3*/], 0, 0, 1);
										ENTITY::SET_ENTITY_QUATERNION(iLocal_2509[iVar0], fLocal_470[iVar0], fLocal_566[iVar0], fLocal_662[iVar0], fLocal_758[iVar0]);
										if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_2310[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2310[iVar0]))
										{
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2509[iVar0]);
										}
										if (!MISC::IS_BIT_SET(iLocal_1522[iVar0], 0))
										{
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2509[iVar0], 1, 1);
											if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
											{
												VEHICLE::SET_VEHICLE_LIGHTS(iLocal_2509[iVar0], 3);
											}
										}
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_2509[iVar0], 1);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2310[iVar0]);
										iLocal_1631 = (iLocal_1631 - 1);
										iLocal_1426[iVar0]++;
										bLocal_58 = true;
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_2509[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2509[iVar0], 0))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_2509[iVar0], Local_1894[iVar0 /*3*/], 0, 0, 1);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_2509[iVar0], fLocal_470[iVar0], fLocal_566[iVar0], fLocal_662[iVar0], fLocal_758[iVar0]);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_2310[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2310[iVar0]))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2509[iVar0]);
							}
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_2509[iVar0], 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2310[iVar0]);
							iLocal_1631 = (iLocal_1631 - 1);
							iLocal_1426[iVar0]++;
						}
					}
				}
				else if (iLocal_1426[iVar0] == 2)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1330[iVar0], &cLocal_2207);
					if (!MISC::IS_BIT_SET(iLocal_1522[iVar0], 1))
					{
						bVar14 = false;
						if (MISC::IS_BIT_SET(iLocal_1522[iVar0], 0))
						{
							STREAMING::REQUEST_MODEL(GlobalFunc_2211());
							bVar14 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
							iVar19 = 2;
						}
						else if (!bLocal_54 && ((!MISC::IS_BIT_SET(iLocal_1522[iVar0], 2) && uVar16) || (MISC::IS_BIT_SET(iLocal_1522[iVar0], 2) && uVar17)))
						{
							bVar14 = true;
							iVar19 = 1;
						}
						else
						{
							STREAMING::REQUEST_MODEL(func_31());
							bVar14 = STREAMING::HAS_MODEL_LOADED(func_31());
							iVar19 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_2509[iVar0]))
						{
							if (!bLocal_58 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2509[iVar0], -1))
							{
								if (bVar14)
								{
									if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_2509[iVar0], 1), Var9) < 10000f || bParam2) || iLocal_41)
									{
										func_487(&(iLocal_2509[iVar0]), iVar19, 1);
										MISC::SET_BIT(&(iLocal_1522[iVar0]), 1);
									}
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2509[iVar0], 0))
					{
						if (fLocal_1068 >= fLocal_854[iVar0])
						{
							if (20 > iLocal_1624)
							{
								fVar12 = (fLocal_1068 - fLocal_854[iVar0]);
								fVar12 = (fVar12 * fLocal_950[iVar0]);
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1330[iVar0], &cLocal_2207))
								{
									if (fVar12 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1330[iVar0], &cLocal_2207))
									{
										Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_2509[iVar0], 1) };
										Var6 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_1330[iVar0], fVar12, &cLocal_2207) };
										if (((!func_491(Var3, Var9, 5f, fLocal_1079) && func_491(Var6, Var9, 5f, fLocal_1079)) && !iLocal_41) && !bParam2)
										{
											if (!MISC::IS_BIT_SET(iLocal_1522[iVar0], 1))
											{
												func_487(&(iLocal_2509[iVar0]), iVar19, 1);
											}
											iLocal_1624++;
											iLocal_1426[iVar0]++;
										}
										else if (((!bLocal_58 || MISC::IS_BIT_SET(iLocal_1522[iVar0], 1)) || iLocal_41) || bParam2)
										{
											if (func_480(&(iLocal_2509[iVar0]), iLocal_1330[iVar0], fVar12, 1, 0, 0, bLocal_56, iLocal_55))
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_2509[iVar0], (fParam1 * fLocal_950[iVar0]));
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2509[iVar0], 0))
												{
													if (MISC::IS_BIT_SET(iLocal_1522[iVar0], 0))
													{
														VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2509[iVar0], 1, 1);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_2509[iVar0], 1);
														VEHICLE::SET_VEHICLE_LIGHTS(iLocal_2509[iVar0], 2);
														if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2310[iVar0]))
														{
															AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_2509[iVar0], 1);
														}
													}
												}
												if (!MISC::IS_BIT_SET(iLocal_1522[iVar0], 1))
												{
													func_487(&(iLocal_2509[iVar0]), iVar19, 1);
												}
												iLocal_1624++;
												iLocal_1426[iVar0]++;
											}
										}
									}
									else
									{
										if (!MISC::IS_BIT_SET(iLocal_1522[iVar0], 1))
										{
											func_487(&(iLocal_2509[iVar0]), iVar19, 1);
										}
										iLocal_1624++;
										iLocal_1426[iVar0]++;
									}
								}
							}
							else
							{
								if (!MISC::IS_BIT_SET(iLocal_1522[iVar0], 1))
								{
									func_487(&(iLocal_2509[iVar0]), iVar19, 1);
								}
								iLocal_1624++;
								iLocal_1426[iVar0]++;
							}
						}
					}
					else
					{
						if (!MISC::IS_BIT_SET(iLocal_1522[iVar0], 1))
						{
							func_487(&(iLocal_2509[iVar0]), iVar19, 1);
						}
						iLocal_1624++;
						iLocal_1426[iVar0]++;
					}
				}
				else if (iLocal_1426[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2509[iVar0], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2509[iVar0]))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2509[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (bVar15)
								{
									if (((!bLocal_31 && !iLocal_28) && !bLocal_47) && (((!bLocal_56 && !iLocal_55) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_2509[iVar0])) || func_486(iLocal_2509[iVar0])))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar2))
										{
											bVar14 = false;
											if (bLocal_49)
											{
												bVar14 = true;
											}
											else
											{
												fVar13 = ENTITY::GET_ENTITY_SPEED(iVar2);
												if (fVar13 < 1f)
												{
													bVar14 = true;
												}
												else if (MISC::ABSF((fVar13 - ENTITY::GET_ENTITY_SPEED(iLocal_2509[iVar0]))) > 15f)
												{
													bVar14 = true;
												}
												else if (!GlobalFunc_5655(iLocal_2509[iVar0], iVar2, 45f))
												{
													bVar14 = true;
												}
												else if (GlobalFunc_5654(iVar2, iLocal_2509[iVar0], 0))
												{
													bVar14 = true;
												}
											}
											if (bVar14)
											{
												GlobalFunc_5929(iLocal_2509[iVar0]);
												iLocal_1426[iVar0]++;
											}
										}
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_2509[iVar0], (fParam1 * fLocal_950[iVar0]));
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2509[iVar0]);
							}
						}
						else
						{
							iLocal_1426[iVar0]++;
						}
					}
					else
					{
						iLocal_1426[iVar0]++;
					}
				}
				else if (iLocal_1426[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2509[iVar0], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2509[iVar0]))
						{
							iLocal_1426[iVar0]++;
						}
						else
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2509[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_2509[iVar0], (fParam1 * fLocal_950[iVar0]));
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2509[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1330[iVar0], &cLocal_2207))
							{
								if (fLocal_1068 > (fLocal_854[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1330[iVar0], &cLocal_2207)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2509[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2509[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1426[iVar0]++;
					}
				}
				else if (iLocal_1426[iVar0] == 5)
				{
					if (!iLocal_2509[iVar0] == iLocal_2612)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2509[iVar0], 0))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2509[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								iVar20 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, 242628503);
								if (iVar20 == 7)
								{
									fVar13 = ENTITY::GET_ENTITY_SPEED(iLocal_2509[iVar0]);
									if (fVar13 < 8f)
									{
										fVar13 = 8f;
									}
									if (fVar13 > 62.9f)
									{
										fVar13 = 62.9f;
									}
									TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar1, fVar13);
								}
							}
						}
						if (!bLocal_39 && !bLocal_52)
						{
							if (iLocal_1330[iVar0] > 0)
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1330[iVar0], &cLocal_2207);
							}
						}
						if (!bLocal_29)
						{
							if (!bLocal_57)
							{
								GlobalFunc_2210(iLocal_2509[iVar0]);
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_2509[iVar0]))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_2509[iVar0]));
						}
					}
					iLocal_1624 = (iLocal_1624 - 1);
					iLocal_1426[iVar0] = 99;
				}
				if (!bVar18)
				{
					iLocal_1629 = iVar0;
					bVar18 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_23();
	}
}





int func_486(int iParam0)//Position - 0x5A5FE
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_53)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
			if (iVar2 == joaat("phantom"))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar1))
				{
					if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iVar1, &iVar0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, uParam0))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_487(var uParam0, int iParam1, bool bParam2)//Position - 0x5A65B
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, -1))
		{
			if (iParam1 == 2)
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, GlobalFunc_2211(), -1, 0, 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iLocal_2223);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2211());
			}
			else if (iParam1 == 1)
			{
				iVar0 = PED::CREATE_RANDOM_PED_AS_DRIVER(*uParam0, 1);
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
				{
					PED::GIVE_PED_HELMET(iVar0, 1, 4096, -1);
				}
			}
			else
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 4, func_31(), -1, 0, 0);
				if (bLocal_59)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_31());
				}
			}
			if (bParam2)
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar0, 1);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iVar0, 0);
				PED::SET_PED_CONFIG_FLAG(iVar0, 32, 0);
			}
			if (bLocal_60)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(*uParam0, 1);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 1);
			GlobalFunc_2221(iVar0);
			bLocal_58 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}


void func_489(int iParam0)//Position - 0x5A767
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iLocal_2407 >= -1 && iLocal_2408 >= -1)
	{
		while (iVar0 == iLocal_2407 || iVar0 == iLocal_2408)
		{
			iVar0++;
		}
	}
	else if (iLocal_2407 >= -1)
	{
		if (iVar0 == iLocal_2407)
		{
			iVar0++;
		}
	}
	iVar1 = iVar0;
	switch (iVar1)
	{
		case 0:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 0, 0);
			break;
		
		case 1:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 2, 2);
			break;
		
		case 2:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 4, 4);
			break;
		
		case 3:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 27, 27);
			break;
		
		case 4:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 7, 7);
			break;
		
		case 5:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 73, 73);
			break;
		
		case 6:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 68, 68);
			break;
		
		case 7:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 62, 62);
			break;
		
		case 8:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 132, 132);
			break;
		
		case 9:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 117, 0);
			break;
		
		case 10:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 52, 52);
			break;
		
		case 11:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 88, 88);
			break;
		
		case 12:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 1, 1);
			break;
		
		case 13:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 36, 36);
			break;
		
		case 14:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 95, 95);
			break;
		
		default:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 73, 73);
			break;
	}
}

void func_490(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x5A8E0
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (!bLocal_40)
	{
		if (!func_491(Param0, Param3, fParam6, 200f))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (!ENTITY::IS_ENTITY_DEAD(iVar1))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iVar1, Param0, fParam6, fParam6, fParam6, 0, 1, 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				MISC::CLEAR_AREA_OF_VEHICLES(Param0, fParam6, 0, 0, 0, 0, 0);
			}
		}
	}
}

int func_491(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7)//Position - 0x5A950
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!bLocal_40)
		{
			if (!iLocal_27)
			{
				if (SYSTEM::VMAG2(Param3 - Param0) - fParam6) < (fParam7 * fParam7)
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam6))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

float func_492(int iParam0)//Position - 0x5A997
{
	var uVar0;
	
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, &cLocal_2207);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, &cLocal_2207))
	{
		SYSTEM::WAIT(0);
	}
	uVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam0, &cLocal_2207);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, &cLocal_2207);
	return uVar0;
}


void func_494(int iParam0)//Position - 0x5AA4D
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	bool bVar7;
	bool bVar8;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		bVar7 = false;
		bVar8 = false;
		iVar0 = iLocal_1628;
		while (iVar0 < 4)
		{
			switch (iLocal_1618[iVar0])
			{
				case 0:
					if (!iLocal_2305[iVar0] == 0)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Local_1881[iVar0 /*3*/], fLocal_1066, fLocal_1066, fLocal_1066, 0, 1, 0))
						{
							iLocal_1630++;
							iLocal_1618[iVar0]++;
						}
					}
					else
					{
						iLocal_1618[iVar0] = 99;
					}
					break;
				
				case 1:
					if (4 > iLocal_1625)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2504[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_2305[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_2305[iVar0]))
							{
								if ((iLocal_27 || iLocal_41) || (!bLocal_58 && !func_491(Local_1881[iVar0 /*3*/], Var1, 5f, fLocal_1079)))
								{
									if (bLocal_37)
									{
										func_490(Local_1881[iVar0 /*3*/], Var1, fLocal_1072);
									}
									iLocal_2504[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_2305[iVar0], Local_1881[iVar0 /*3*/], 0f, 0, 0);
									if (iLocal_2305[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_2504[iVar0], 0);
									}
									ENTITY::SET_ENTITY_QUATERNION(iLocal_2504[iVar0], fLocal_1046[iVar0], fLocal_1051[iVar0], fLocal_1056[iVar0], fLocal_1061[iVar0]);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2305[iVar0]);
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_2504[iVar0], GlobalFunc_2212()))
									{
										VEHICLE::SET_VEHICLE_SIREN(iLocal_2504[iVar0], 1);
										if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2305[iVar0]))
										{
											AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_2504[iVar0], 1);
										}
									}
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_2504[iVar0], GlobalFunc_2213()))
									{
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_2504[iVar0], 0, 0);
									}
									ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_2504[iVar0], 1);
									iLocal_1630 = (iLocal_1630 - 1);
									iLocal_1625++;
									iLocal_1618[iVar0]++;
									bLocal_58 = true;
								}
							}
						}
						else
						{
							iLocal_1630 = (iLocal_1630 - 1);
							iLocal_1625++;
							iLocal_1618[iVar0]++;
						}
					}
					break;
				
				case 2:
					if (!bVar7)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2504[iVar0], 0))
						{
							Var4 = { ENTITY::GET_ENTITY_COORDS(iLocal_2504[iVar0], 1) };
						}
						if (fLocal_1080 == 0f || SYSTEM::VDIST2(Var1, Var4) < (fLocal_1080 * fLocal_1080))
						{
							if (!GlobalFunc_5654(iLocal_2504[iVar0], iParam0, 0))
							{
								if (!bLocal_29)
								{
									GlobalFunc_2210(iLocal_2504[iVar0]);
								}
								else
								{
									VEHICLE::DELETE_VEHICLE(&(iLocal_2504[iVar0]));
								}
								iLocal_1625 = (iLocal_1625 - 1);
								iLocal_1618[iVar0] = 99;
								bVar7 = true;
							}
						}
					}
					break;
			}
			if (iLocal_1618[iVar0] != 99)
			{
				if (!bVar8)
				{
					iLocal_1628 = iVar0;
					bVar8 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_26();
	}
}

void func_495(int iParam0, float fParam1, int iParam2)//Position - 0x5AD42
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	float fVar15;
	float fVar16;
	bool bVar17;
	bool bVar18;
	var uVar19;
	var uVar20;
	int iVar21;
	int iVar22;
	bool bVar23;
	bool bVar24;
	struct<3> Var25;
	
	iVar5 = 0;
	bVar18 = PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID());
	uVar19 = PED::CAN_CREATE_RANDOM_DRIVER();
	uVar20 = PED::CAN_CREATE_RANDOM_BIKE_RIDER();
	if (bVar18)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar5 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		}
		Var12 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	iVar1 = 0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			fLocal_1068 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
		}
		iVar22 = -1;
		bVar23 = false;
		bVar24 = false;
		iVar0 = iLocal_1627;
		while (iVar0 < 80 && !bVar23)
		{
			if (iLocal_1168[iVar0] != 99)
			{
				if (iLocal_1168[iVar0] == 0)
				{
					if (iLocal_1087[iVar0] > 0 && iLocal_2224[iVar0] != 0)
					{
						if (!iLocal_27)
						{
							if (fLocal_1068 < (fLocal_385[iVar0] + 20000f))
							{
								if (fLocal_1068 >= (fLocal_385[iVar0] - (7000f * fParam1)))
								{
									if (GlobalFunc_2222(iLocal_2224[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1249[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2224[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1249[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_1249[iVar0]), 1);
									iLocal_1632++;
									iLocal_1168[iVar0]++;
								}
								else if (iVar1 > 2)
								{
									bVar23 = true;
								}
								else
								{
									iVar1++;
								}
							}
							else
							{
								func_497(iVar0, 1090519040);
							}
						}
						else
						{
							fVar15 = (fLocal_1068 - fLocal_385[iVar0]);
							if (fVar15 >= 0f)
							{
								if (fVar15 < func_492(iLocal_1087[iVar0]))
								{
									if (GlobalFunc_2222(iLocal_2224[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1249[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2224[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1249[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_1249[iVar0]), 1);
									iLocal_1632++;
									iLocal_1168[iVar0]++;
								}
								else
								{
									func_497(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_497(iVar0, 1090519040);
					}
				}
				else if (iLocal_1168[iVar0] == 1)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1087[iVar0], &cLocal_2207);
					bVar17 = false;
					if (MISC::IS_BIT_SET(iLocal_1249[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2211());
						if (STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211()))
						{
							bVar17 = true;
						}
					}
					else if (!bLocal_54 && ((!MISC::IS_BIT_SET(iLocal_1249[iVar0], 2) && uVar19) || (MISC::IS_BIT_SET(iLocal_1249[iVar0], 2) && uVar20)))
					{
						bVar17 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_31());
						bVar17 = STREAMING::HAS_MODEL_LOADED(func_31());
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2409[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_2224[iVar0]);
						if ((STREAMING::HAS_MODEL_LOADED(iLocal_2224[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1087[iVar0], &cLocal_2207)) && bVar17)
						{
							if (fLocal_1068 >= (fLocal_385[iVar0] - (fLocal_1081 * fParam1)))
							{
								if ((iLocal_41 || iParam2) || (!bLocal_58 && !func_491(Local_1640[iVar0 /*3*/], Var12, 5f, fLocal_1079)))
								{
									if (bLocal_37)
									{
										func_490(Local_1640[iVar0 /*3*/], Var12, fLocal_1072);
									}
									iLocal_2409[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_2224[iVar0], Local_1640[iVar0 /*3*/], 0f, 0, 0);
									if (iLocal_2224[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_2409[iVar0], 0);
									}
									if (iLocal_50 && !MISC::IS_BIT_SET(iLocal_1249[iVar0], 0))
									{
										func_489(iLocal_2409[iVar0]);
									}
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_2409[iVar0], Local_1640[iVar0 /*3*/], 0, 0, 1);
									ENTITY::SET_ENTITY_QUATERNION(iLocal_2409[iVar0], fLocal_61[iVar0], fLocal_142[iVar0], fLocal_223[iVar0], fLocal_304[iVar0]);
									if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_2224[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2224[iVar0]))
									{
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2409[iVar0]);
									}
									if (MISC::IS_BIT_SET(iLocal_1249[iVar0], 3))
									{
										ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_2409[iVar0], 1);
									}
									if (!MISC::IS_BIT_SET(iLocal_1249[iVar0], 0))
									{
										VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2409[iVar0], 1, 1);
										if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
										{
											VEHICLE::SET_VEHICLE_LIGHTS(iLocal_2409[iVar0], 3);
										}
									}
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_2409[iVar0], 1);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_2409[iVar0], 1);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2224[iVar0]);
									iLocal_1632 = (iLocal_1632 - 1);
									iLocal_1168[iVar0]++;
									bLocal_58 = true;
								}
								else if (fLocal_1068 > fLocal_385[iVar0])
								{
									iLocal_1632 = (iLocal_1632 - 1);
									func_497(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_1168[iVar0] == 2)
				{
					bVar17 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_1638 || iLocal_1638 == 0)) || iLocal_41) || iParam2)
					{
						if (!MISC::IS_BIT_SET(iLocal_1249[iVar0], 1))
						{
							if (MISC::IS_BIT_SET(iLocal_1249[iVar0], 0))
							{
								STREAMING::REQUEST_MODEL(GlobalFunc_2211());
								bVar17 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
								iVar21 = 2;
							}
							else if (!bLocal_54 && ((!MISC::IS_BIT_SET(iLocal_1249[iVar0], 2) && uVar19) || (MISC::IS_BIT_SET(iLocal_1249[iVar0], 2) && uVar20)))
							{
								bVar17 = true;
								iVar21 = 1;
							}
							else
							{
								STREAMING::REQUEST_MODEL(func_31());
								bVar17 = STREAMING::HAS_MODEL_LOADED(func_31());
								iVar21 = 0;
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_2409[iVar0]))
							{
								if (!bLocal_58 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2409[iVar0], -1))
								{
									if (bVar17)
									{
										if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_2409[iVar0], 1), Var12) < 10000f || iParam2) || iLocal_41)
										{
											func_487(&(iLocal_2409[iVar0]), iVar21, 0);
											MISC::SET_BIT(&(iLocal_1249[iVar0]), 1);
										}
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2409[iVar0], 0))
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1087[iVar0], &cLocal_2207);
							if (fLocal_1068 >= fLocal_385[iVar0])
							{
								if (13 > iLocal_1623)
								{
									fVar15 = (fLocal_1068 - fLocal_385[iVar0]);
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1087[iVar0], &cLocal_2207))
									{
										if (fVar15 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1087[iVar0], &cLocal_2207))
										{
											Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_2409[iVar0], 1) };
											Var9 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_1087[iVar0], fVar15, &cLocal_2207) };
											if (!func_491(Var6, Var12, 5f, fLocal_1079) && func_491(Var9, Var12, 5f, fLocal_1079))
											{
												if (!MISC::IS_BIT_SET(iLocal_1249[iVar0], 1))
												{
													func_487(&(iLocal_2409[iVar0]), iVar21, 0);
												}
												func_497(iVar0, 1090519040);
											}
											else if (((!bLocal_58 || MISC::IS_BIT_SET(iLocal_1249[iVar0], 1)) || iLocal_41) || iParam2)
											{
												if (func_480(&(iLocal_2409[iVar0]), iLocal_1087[iVar0], fVar15, 1, 0, 0, 1, iLocal_55))
												{
													if (!MISC::IS_BIT_SET(iLocal_1249[iVar0], 1))
													{
														func_487(&(iLocal_2409[iVar0]), iVar21, 0);
													}
													ENTITY::SET_ENTITY_COLLISION(iLocal_2409[iVar0], 1, 0);
													VEHICLE::SET_PLAYBACK_SPEED(iLocal_2409[iVar0], fParam1);
													iLocal_1623++;
													iLocal_1168[iVar0]++;
												}
											}
										}
										else
										{
											if (!MISC::IS_BIT_SET(iLocal_1249[iVar0], 1))
											{
												func_487(&(iLocal_2409[iVar0]), iVar21, 0);
											}
											func_497(iVar0, 1090519040);
										}
									}
									else if (fVar15 > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1087[iVar0], &cLocal_2207))
									{
										if (!MISC::IS_BIT_SET(iLocal_1249[iVar0], 1))
										{
											func_487(&(iLocal_2409[iVar0]), iVar21, 0);
										}
										func_497(iVar0, 1090519040);
									}
								}
								else
								{
									if (!MISC::IS_BIT_SET(iLocal_1249[iVar0], 1))
									{
										func_487(&(iLocal_2409[iVar0]), iVar21, 0);
									}
									func_497(iVar0, 1090519040);
								}
							}
							else if (iLocal_38 && !iLocal_46)
							{
								if (!MISC::IS_BIT_SET(iLocal_1249[iVar0], 1))
								{
									func_487(&(iLocal_2409[iVar0]), iVar21, 0);
								}
								func_497(iVar0, 1090519040);
							}
						}
						else
						{
							if (!MISC::IS_BIT_SET(iLocal_1249[iVar0], 1))
							{
								func_487(&(iLocal_2409[iVar0]), iVar21, 0);
							}
							func_497(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_1638 = iVar0;
					}
				}
				else if (iLocal_1168[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2409[iVar0], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2409[iVar0]))
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2409[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								if (bVar18)
								{
									bVar24 = false;
									if (!bLocal_36)
									{
										if ((!bLocal_31 && !iLocal_28) && func_486(iLocal_2409[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_1637 || iLocal_1637 == 0))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iVar5))
												{
													bVar17 = false;
													if (!GlobalFunc_5656(iLocal_2409[iVar0], iVar5) || GlobalFunc_5654(iVar5, iLocal_2409[iVar0], 0))
													{
														bVar24 = true;
													}
												}
												iLocal_1637 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_51 && !MISC::IS_BIT_SET(iLocal_1249[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_1637 || iLocal_1637 == 0))
										{
											Var25 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iLocal_2409[iVar0], 1)) };
											if (Var25.f_1 < 0f)
											{
												if (MISC::ABSF(Var25.f_1) > MISC::ABSF(Var25.x))
												{
													bVar24 = true;
												}
											}
											iVar2++;
											iLocal_1637 = iVar0;
										}
									}
									if (bVar24)
									{
										GlobalFunc_5929(iLocal_2409[iVar0]);
										iLocal_1168[iVar0]++;
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_2409[iVar0], fParam1);
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2409[iVar0]);
							}
						}
						else
						{
							iLocal_1168[iVar0]++;
						}
					}
					else
					{
						iLocal_1168[iVar0]++;
					}
				}
				else if (iLocal_1168[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2409[iVar0], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2409[iVar0]))
						{
							iLocal_1168[iVar0]++;
						}
						else
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2409[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_2409[iVar0], fParam1);
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2409[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1087[iVar0], &cLocal_2207))
							{
								if (fLocal_1068 > (fLocal_385[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1087[iVar0], &cLocal_2207)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2409[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2409[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1168[iVar0]++;
					}
				}
				else if (iLocal_1168[iVar0] == 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2409[iVar0]))
					{
						fVar16 = ENTITY::GET_ENTITY_SPEED(iLocal_2409[iVar0]);
					}
					iLocal_1623 = (iLocal_1623 - 1);
					func_497(iVar0, fVar16);
				}
				if (iVar22 == -1)
				{
					iVar22 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar22 != -1)
		{
			iLocal_1627 = iVar22;
		}
		if (iVar2 < 3)
		{
			iLocal_1637 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_1638 = 0;
		}
	}
	else
	{
		func_27();
	}
}


void func_497(int iParam0, float fParam1)//Position - 0x5B90B
{
	int iVar0;
	
	if (!iLocal_2224[iParam0] == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2224[iParam0]);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_2409[iParam0]))
	{
		ENTITY::SET_ENTITY_COLLISION(iLocal_2409[iParam0], 1, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_2409[iParam0], 0);
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2409[iParam0], -1);
		if (!PED::IS_PED_INJURED(iVar0) && iVar0 != PLAYER::PLAYER_PED_ID())
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 0);
			if (fParam1 < 8f)
			{
				fParam1 = 8f;
			}
			if (fParam1 > 62.9f)
			{
				fParam1 = 62.9f;
			}
			TASK::TASK_VEHICLE_MISSION(iVar0, iLocal_2409[iParam0], 0, 1, fParam1, 786603, 5f, 5f, 1);
			PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
			if (bLocal_60)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, 0);
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar0, fParam1);
		}
	}
	if (!bLocal_29)
	{
		if (!bLocal_57)
		{
			GlobalFunc_2221(iVar0);
			GlobalFunc_2210(iLocal_2409[iParam0]);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::DELETE_PED(&iVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2409[iParam0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_2409[iParam0]));
		}
	}
	if (!bLocal_39 && !bLocal_52)
	{
		if (iLocal_1087[iParam0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1087[iParam0], &cLocal_2207);
		}
	}
	iLocal_1168[iParam0] = 99;
}

void func_498(int iParam0, float fParam1, float fParam2)//Position - 0x5BA64
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var10 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			uVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			Var1 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fParam1) };
			Var4 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			Var7 = { Var4 - Var1 };
			fVar13 = SYSTEM::VMAG(Var7);
			if (fVar13 > fParam2)
			{
				fVar13 = fParam2;
			}
			func_490(Var1, Var10, fVar13);
		}
	}
}



void func_501(int iParam0, float fParam1)//Position - 0x5BB81
{
	var uVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
	{
		fVar1 = (fLocal_1082 + 2000f);
		fVar2 = (fLocal_1083 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			uVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (fVar1 <= VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(uVar0))
			{
				if (iLocal_1633 == 0)
				{
					Local_2195 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fLocal_1082) };
					iLocal_1633++;
				}
				else if (iLocal_1633 == 1)
				{
					Local_2198 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fVar1) };
					iLocal_1633++;
				}
				else if (!bLocal_58)
				{
					if (Local_2195.x > Local_2198.x)
					{
						fVar3 = Local_2195.x;
						Local_2195.x = Local_2198.x;
						Local_2198.x = fVar3;
					}
					if (Local_2195.f_1 > Local_2198.f_1)
					{
						fVar3 = Local_2195.f_1;
						Local_2195.f_1 = Local_2198.f_1;
						Local_2198.f_1 = fVar3;
					}
					if (Local_2195.f_2 > Local_2198.f_2)
					{
						fVar3 = Local_2195.f_2;
						Local_2195.f_2 = Local_2198.f_2;
						Local_2198.f_2 = fVar3;
					}
					Local_2195 = { Local_2195 - Vector(fLocal_1086, fLocal_1086, fLocal_1086) };
					Local_2198 = { Local_2198 + Vector(fLocal_1086, fLocal_1086, fLocal_1086) };
					PATHFIND::SET_ROADS_IN_AREA(Local_2195, Local_2198, 0, 0);
					fLocal_1082 = fVar1;
					iLocal_1633 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			uVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (iLocal_1636 == 0)
			{
				Local_2201 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fLocal_1083) };
				iLocal_1636++;
			}
			else if (iLocal_1636 == 1)
			{
				Local_2204 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fVar2) };
				iLocal_1636++;
			}
			else if (!bLocal_58 && !bVar4)
			{
				if (Local_2201.x > Local_2204.x)
				{
					fVar3 = Local_2201.x;
					Local_2201.x = Local_2204.x;
					Local_2204.x = fVar3;
				}
				if (Local_2201.f_1 > Local_2204.f_1)
				{
					fVar3 = Local_2201.f_1;
					Local_2201.f_1 = Local_2204.f_1;
					Local_2204.f_1 = fVar3;
				}
				if (Local_2201.f_2 > Local_2204.f_2)
				{
					fVar3 = Local_2201.f_2;
					Local_2201.f_2 = Local_2204.f_2;
					Local_2204.f_2 = fVar3;
				}
				Local_2201 = { Local_2201 - Vector(fLocal_1086, fLocal_1086, fLocal_1086) };
				Local_2204 = { Local_2204 + Vector(fLocal_1086, fLocal_1086, fLocal_1086) };
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_2201, Local_2204, 1);
				fLocal_1083 = fVar2;
				iLocal_1636 = 0;
			}
		}
	}
}



void func_504(int iParam0, float fParam1)//Position - 0x5BEB9
{
	int iVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			func_505();
			func_480(&iParam0, iLocal_1626, fParam1, 1, 0, 1, 0, 0);
			fLocal_1068 = fParam1;
			iVar0 = 0;
			while (iVar0 < 95)
			{
				if (iLocal_1426[iVar0] > 2 && iLocal_1426[iVar0] < 6)
				{
					bVar2 = false;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2509[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_2509[iVar0]))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2509[iVar0]))
							{
								fVar1 = (fParam1 - fLocal_854[iVar0]);
								fVar1 = (fVar1 * fLocal_950[iVar0]);
								if (fVar1 >= 0f)
								{
									if (fVar1 < func_492(iLocal_1330[iVar0]))
									{
										func_480(&(iLocal_2509[iVar0]), iLocal_1330[iVar0], fVar1, 1, 0, 1, bLocal_56, iLocal_55);
									}
									else
									{
										bVar2 = true;
									}
								}
								else
								{
									bVar2 = true;
								}
							}
							else
							{
								bVar2 = true;
							}
						}
						else
						{
							bVar2 = true;
						}
					}
					else
					{
						bVar2 = true;
					}
					if (bVar2)
					{
						iLocal_1426[iVar0] = 99;
						iLocal_1624 = (iLocal_1624 - 1);
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 80)
			{
				if (iLocal_1168[iVar0] > 2 && iLocal_1168[iVar0] < 6)
				{
					bVar2 = false;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2409[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_2409[iVar0]))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2409[iVar0]))
							{
								fVar1 = (fParam1 - fLocal_385[iVar0]);
								if (fVar1 >= 0f)
								{
									if (fVar1 < func_492(iLocal_1087[iVar0]))
									{
										func_480(&(iLocal_2409[iVar0]), iLocal_1087[iVar0], fVar1, 1, 0, 1, 1, iLocal_55);
									}
									else
									{
										bVar2 = true;
									}
								}
								else
								{
									bVar2 = true;
								}
							}
							else
							{
								bVar2 = true;
							}
						}
						else
						{
							bVar2 = true;
						}
					}
					else
					{
						bVar2 = true;
					}
					if (bVar2)
					{
						iLocal_1168[iVar0] = 99;
						iLocal_1623 = (iLocal_1623 - 1);
					}
				}
				iVar0++;
			}
			iLocal_1627 = 0;
			iLocal_1629 = 0;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (iLocal_1618[iVar0] > 2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2504[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_2504[iVar0]))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_2504[iVar0], 1, 0);
							iLocal_1625++;
							iLocal_1618[iVar0] = 2;
						}
					}
					else
					{
						iLocal_1618[iVar0] = 0;
					}
				}
				iVar0++;
			}
			iLocal_1628 = 0;
			iLocal_1633 = 0;
			iLocal_1636 = 0;
			fLocal_1083 = fParam1;
			fLocal_1082 = fParam1;
			Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			Local_2183 = { Var3 - Vector(100f, 100f, 100f) };
			Local_2186 = { Var3 + Vector(100f, 100f, 100f) };
			PATHFIND::SET_ROADS_IN_AREA(Local_2183, Local_2186, 0, 0);
		}
	}
}

void func_505()//Position - 0x5C167
{
	iLocal_41 = 1;
}

void func_506(bool bParam0, int iParam1, int iParam2)//Position - 0x5C172
{
	if (bParam0)
	{
		iLocal_50 = 1;
		iLocal_2407 = iParam1;
		iLocal_2408 = iParam2;
	}
}

void func_507()//Position - 0x5C18C
{
	Local_1640[0 /*3*/] = { -206.0217f, -1880.73f, 27.4747f };
	fLocal_61[0] = -0.0032f;
	fLocal_142[0] = -0.0196f;
	fLocal_223[0] = 0.9262f;
	fLocal_304[0] = -0.3766f;
	iLocal_1087[0] = 2;
	fLocal_385[0] = 6000f;
	iLocal_2224[0] = joaat("sentinel");
	Local_1640[1 /*3*/] = { -243.0447f, -1852.218f, 28.4643f };
	fLocal_61[1] = -0.0366f;
	fLocal_142[1] = -0.0132f;
	fLocal_223[1] = 0.9692f;
	fLocal_304[1] = -0.2433f;
	iLocal_1087[1] = 3;
	fLocal_385[1] = 7000f;
	iLocal_2224[1] = joaat("manana");
	Local_1640[2 /*3*/] = { -276.6977f, -1841.898f, 26.6822f };
	fLocal_61[2] = 0.0378f;
	fLocal_142[2] = -0.0052f;
	fLocal_223[2] = -0.6626f;
	fLocal_304[2] = 0.748f;
	iLocal_1087[2] = 4;
	fLocal_385[2] = 9500f;
	iLocal_2224[2] = joaat("schafter2");
	Local_1640[3 /*3*/] = { -263.7085f, -1834.591f, 27.6854f };
	fLocal_61[3] = 0.0243f;
	fLocal_142[3] = -0.0221f;
	fLocal_223[3] = -0.5941f;
	fLocal_304[3] = 0.8037f;
	iLocal_1087[3] = 72;
	fLocal_385[3] = 10000f;
	iLocal_2224[3] = joaat("schafter2");
	Local_1640[4 /*3*/] = { -293.1659f, -1838.303f, 25.6359f };
	fLocal_61[4] = 0.027f;
	fLocal_142[4] = -0.0221f;
	fLocal_223[4] = -0.6649f;
	fLocal_304[4] = 0.7461f;
	iLocal_1087[4] = 5;
	fLocal_385[4] = 12000f;
	iLocal_2224[4] = joaat("manana");
	Local_1640[5 /*3*/] = { -291.337f, -1843.31f, 25.4949f };
	fLocal_61[5] = 0.0439f;
	fLocal_142[5] = -0.0029f;
	fLocal_223[5] = -0.687f;
	fLocal_304[5] = 0.7253f;
	iLocal_1087[5] = 6;
	fLocal_385[5] = 12000f;
	iLocal_2224[5] = joaat("sentinel");
	Local_1640[6 /*3*/] = { -338.9504f, -1830.927f, 23.1457f };
	fLocal_61[6] = -0.0179f;
	fLocal_142[6] = 0.0108f;
	fLocal_223[6] = 0.7347f;
	fLocal_304[6] = -0.6781f;
	iLocal_1087[6] = 7;
	fLocal_385[6] = 13000f;
	iLocal_2224[6] = joaat("schafter2");
	Local_1640[7 /*3*/] = { -153.5809f, -1718.481f, 29.8741f };
	fLocal_61[7] = -0.0115f;
	fLocal_142[7] = -0.0252f;
	fLocal_223[7] = 0.9155f;
	fLocal_304[7] = -0.4014f;
	iLocal_1087[7] = 8;
	fLocal_385[7] = 13250f;
	iLocal_2224[7] = joaat("speedo");
	Local_1640[8 /*3*/] = { -120.4816f, -1714.154f, 29.1332f };
	fLocal_61[8] = 0.0088f;
	fLocal_142[8] = 0.0254f;
	fLocal_223[8] = 0.9429f;
	fLocal_304[8] = 0.332f;
	iLocal_1087[8] = 9;
	fLocal_385[8] = 15000f;
	iLocal_2224[8] = joaat("sentinel");
	Local_1640[9 /*3*/] = { -212.9735f, -1810.001f, 29.4217f };
	fLocal_61[9] = -0.0018f;
	fLocal_142[9] = -0.0041f;
	fLocal_223[9] = -0.4979f;
	fLocal_304[9] = 0.8672f;
	iLocal_1087[9] = 69;
	fLocal_385[9] = 15000f;
	iLocal_2224[9] = joaat("manana");
	Local_1640[10 /*3*/] = { -72.3315f, -1654.241f, 28.8377f };
	fLocal_61[10] = 0.0003f;
	fLocal_142[10] = 0.0006f;
	fLocal_223[10] = 0.9405f;
	fLocal_304[10] = 0.3397f;
	iLocal_1087[10] = 73;
	fLocal_385[10] = 17000f;
	iLocal_2224[10] = joaat("manana");
	Local_1640[11 /*3*/] = { -53.5047f, -1623.801f, 28.6285f };
	fLocal_61[11] = -0.0239f;
	fLocal_142[11] = 0.0097f;
	fLocal_223[11] = 0.9455f;
	fLocal_304[11] = 0.3246f;
	iLocal_1087[11] = 74;
	fLocal_385[11] = 17100f;
	iLocal_2224[11] = joaat("sentinel");
	Local_1640[12 /*3*/] = { -14.4963f, -1698.93f, 28.8408f };
	fLocal_61[12] = 0.0013f;
	fLocal_142[12] = 0.0006f;
	fLocal_223[12] = 0.8138f;
	fLocal_304[12] = 0.5812f;
	iLocal_1087[12] = 10;
	fLocal_385[12] = 18000f;
	iLocal_2224[12] = joaat("manana");
	Local_1640[13 /*3*/] = { -81.5279f, -1756.83f, 29.3488f };
	fLocal_61[13] = -0.0096f;
	fLocal_142[13] = -0.0131f;
	fLocal_223[13] = -0.1676f;
	fLocal_304[13] = 0.9857f;
	iLocal_1087[13] = 71;
	fLocal_385[13] = 20500f;
	iLocal_2224[13] = joaat("speedo");
	Local_1640[14 /*3*/] = { 2.0713f, -1646.31f, 28.8887f };
	fLocal_61[14] = -0.0161f;
	fLocal_142[14] = -0.0094f;
	fLocal_223[14] = 0.9179f;
	fLocal_304[14] = -0.3963f;
	iLocal_1087[14] = 11;
	fLocal_385[14] = 22000f;
	iLocal_2224[14] = joaat("schafter2");
	Local_1640[15 /*3*/] = { -34.5467f, -1718.343f, 28.846f };
	fLocal_61[15] = 0.0102f;
	fLocal_142[15] = 0.0177f;
	fLocal_223[15] = -0.5537f;
	fLocal_304[15] = 0.8325f;
	iLocal_1087[15] = 12;
	fLocal_385[15] = 22000f;
	iLocal_2224[15] = joaat("schafter2");
	Local_1640[16 /*3*/] = { 108.9714f, -1704.712f, 28.6355f };
	fLocal_61[16] = -0.008f;
	fLocal_142[16] = 0.0172f;
	fLocal_223[16] = 0.4206f;
	fLocal_304[16] = 0.907f;
	iLocal_1087[16] = 62;
	fLocal_385[16] = 24500f;
	iLocal_2224[16] = joaat("manana");
	Local_1640[17 /*3*/] = { 217.4134f, -1616.318f, 28.8266f };
	fLocal_61[17] = -0.0075f;
	fLocal_142[17] = 0.0182f;
	fLocal_223[17] = 0.4621f;
	fLocal_304[17] = 0.8866f;
	iLocal_1087[17] = 63;
	fLocal_385[17] = 25500f;
	iLocal_2224[17] = joaat("schafter2");
	Local_1640[18 /*3*/] = { -5.501f, -1694.963f, 28.8337f };
	fLocal_61[18] = -0.0037f;
	fLocal_142[18] = -0.004f;
	fLocal_223[18] = 0.8342f;
	fLocal_304[18] = 0.5514f;
	iLocal_1087[18] = 83;
	fLocal_385[18] = 25900f;
	iLocal_2224[18] = joaat("manana");
	Local_1640[19 /*3*/] = { 157.9259f, -1603.979f, 29.052f };
	fLocal_61[19] = -0.002f;
	fLocal_142[19] = -0.0002f;
	fLocal_223[19] = 0.8672f;
	fLocal_304[19] = 0.4979f;
	iLocal_1087[19] = 14;
	fLocal_385[19] = 26000f;
	iLocal_2224[19] = joaat("speedo");
	Local_1640[20 /*3*/] = { 297.3597f, -1518.585f, 28.6524f };
	fLocal_61[20] = -0.0133f;
	fLocal_142[20] = 0.008f;
	fLocal_223[20] = 0.8617f;
	fLocal_304[20] = 0.5071f;
	iLocal_1087[20] = 64;
	fLocal_385[20] = 27500f;
	iLocal_2224[20] = joaat("sentinel");
	Local_1640[21 /*3*/] = { 235.9646f, -1635.447f, 28.7485f };
	fLocal_61[21] = -0.0094f;
	fLocal_142[21] = 0.021f;
	fLocal_223[21] = 0.4102f;
	fLocal_304[21] = 0.9117f;
	iLocal_1087[21] = 15;
	fLocal_385[21] = 28000f;
	iLocal_2224[21] = joaat("manana");
	Local_1640[22 /*3*/] = { 188.7709f, -1558.226f, 28.5961f };
	fLocal_61[22] = -0.0025f;
	fLocal_142[22] = 0.0043f;
	fLocal_223[22] = 0.9477f;
	fLocal_304[22] = -0.319f;
	iLocal_1087[22] = 16;
	fLocal_385[22] = 29000f;
	iLocal_2224[22] = joaat("sentinel");
	Local_1640[23 /*3*/] = { 277.7f, -1491.559f, 29.0148f };
	fLocal_61[23] = -0.014f;
	fLocal_142[23] = -0.0069f;
	fLocal_223[23] = 0.9238f;
	fLocal_304[23] = -0.3825f;
	iLocal_1087[23] = 65;
	fLocal_385[23] = 31000f;
	iLocal_2224[23] = joaat("speedo");
	Local_1640[24 /*3*/] = { 381.9591f, -1474.35f, 28.7077f };
	fLocal_61[24] = -0.0003f;
	fLocal_142[24] = 0.0011f;
	fLocal_223[24] = 0.8734f;
	fLocal_304[24] = 0.487f;
	iLocal_1087[24] = 66;
	fLocal_385[24] = 33000f;
	iLocal_2224[24] = joaat("sentinel");
	Local_1640[25 /*3*/] = { 338.1085f, -1464.628f, 29.068f };
	fLocal_61[25] = 0.0073f;
	fLocal_142[25] = -0.0125f;
	fLocal_223[25] = 0.9359f;
	fLocal_304[25] = -0.3519f;
	iLocal_1087[25] = 68;
	fLocal_385[25] = 33000f;
	iLocal_2224[25] = joaat("manana");
	Local_1640[26 /*3*/] = { 412.8397f, -1456.012f, 28.9169f };
	fLocal_61[26] = -0.0006f;
	fLocal_142[26] = 0.0005f;
	fLocal_223[26] = 0.8832f;
	fLocal_304[26] = 0.4689f;
	iLocal_1087[26] = 17;
	fLocal_385[26] = 34000f;
	iLocal_2224[26] = joaat("schafter2");
	Local_1640[27 /*3*/] = { 433.0769f, -1418.891f, 28.6627f };
	fLocal_61[27] = -0.015f;
	fLocal_142[27] = -0.0062f;
	fLocal_223[27] = 0.9995f;
	fLocal_304[27] = -0.0262f;
	iLocal_1087[27] = 18;
	fLocal_385[27] = 36000f;
	iLocal_2224[27] = joaat("sentinel");
	Local_1640[28 /*3*/] = { 268.183f, -1477.318f, 28.9245f };
	fLocal_61[28] = -0.0002f;
	fLocal_142[28] = -0.0006f;
	fLocal_223[28] = 0.9097f;
	fLocal_304[28] = -0.4152f;
	iLocal_1087[28] = 67;
	fLocal_385[28] = 36700f;
	iLocal_2224[28] = joaat("schafter2");
	Local_1640[29 /*3*/] = { 412.7635f, -1395.716f, 29.0825f };
	fLocal_61[29] = 0.005f;
	fLocal_142[29] = -0.0104f;
	fLocal_223[29] = 0.908f;
	fLocal_304[29] = -0.4188f;
	iLocal_1087[29] = 76;
	fLocal_385[29] = 37500f;
	iLocal_2224[29] = joaat("schafter2");
	Local_1640[30 /*3*/] = { 533.9572f, -1398.336f, 28.7811f };
	fLocal_61[30] = -0.0186f;
	fLocal_142[30] = 0.0001f;
	fLocal_223[30] = 0.9985f;
	fLocal_304[30] = 0.0517f;
	iLocal_1087[30] = 19;
	fLocal_385[30] = 38500f;
	iLocal_2224[30] = joaat("manana");
	Local_1640[31 /*3*/] = { 528.0538f, -1428.073f, 28.7182f };
	fLocal_61[31] = -0.0005f;
	fLocal_142[31] = -0.0001f;
	fLocal_223[31] = 0.6927f;
	fLocal_304[31] = 0.7212f;
	iLocal_1087[31] = 75;
	fLocal_385[31] = 40100f;
	iLocal_2224[31] = joaat("sentinel");
	Local_1640[32 /*3*/] = { 472.6559f, -1260.828f, 29.618f };
	fLocal_61[32] = -0.0105f;
	fLocal_142[32] = 0.0036f;
	fLocal_223[32] = -0.6968f;
	fLocal_304[32] = 0.7172f;
	iLocal_1087[32] = 21;
	fLocal_385[32] = 47500f;
	iLocal_2224[32] = joaat("mule");
	Local_1640[33 /*3*/] = { 500.1397f, -1274.942f, 28.8656f };
	fLocal_61[33] = -0.0159f;
	fLocal_142[33] = 0.0001f;
	fLocal_223[33] = 0.9992f;
	fLocal_304[33] = -0.0378f;
	iLocal_1087[33] = 20;
	fLocal_385[33] = 48500f;
	iLocal_2224[33] = joaat("schafter2");
	Local_1640[34 /*3*/] = { 498.531f, -1126.826f, 28.7957f };
	fLocal_61[34] = -0.013f;
	fLocal_142[34] = 0.002f;
	fLocal_223[34] = 0.9999f;
	fLocal_304[34] = -0.0026f;
	iLocal_1087[34] = 22;
	fLocal_385[34] = 49000f;
	iLocal_2224[34] = joaat("sentinel");
	Local_1640[35 /*3*/] = { 502.8969f, -737.7939f, 24.4451f };
	fLocal_61[35] = -0.0153f;
	fLocal_142[35] = -0.0009f;
	fLocal_223[35] = 0.9991f;
	fLocal_304[35] = 0.039f;
	iLocal_1087[35] = 23;
	fLocal_385[35] = 62000f;
	iLocal_2224[35] = joaat("schafter2");
	Local_1640[36 /*3*/] = { 466.5153f, -679.8666f, 26.6178f };
	fLocal_61[36] = 0.0065f;
	fLocal_142[36] = -0.0422f;
	fLocal_223[36] = 0.7491f;
	fLocal_304[36] = -0.661f;
	iLocal_1087[36] = 24;
	fLocal_385[36] = 63500f;
	iLocal_2224[36] = joaat("manana");
	Local_1640[37 /*3*/] = { 406.9349f, -710.4351f, 28.6729f };
	fLocal_61[37] = 0.0005f;
	fLocal_142[37] = 0.0125f;
	fLocal_223[37] = -0.0197f;
	fLocal_304[37] = 0.9997f;
	iLocal_1087[37] = 25;
	fLocal_385[37] = 68500f;
	iLocal_2224[37] = joaat("sentinel");
	Local_1640[38 /*3*/] = { 335.3656f, -738.0789f, 28.8257f };
	fLocal_61[38] = 0.0009f;
	fLocal_142[38] = 0.0002f;
	fLocal_223[38] = -0.1776f;
	fLocal_304[38] = 0.9841f;
	iLocal_1087[38] = 26;
	fLocal_385[38] = 71500f;
	iLocal_2224[38] = joaat("manana");
	Local_1640[39 /*3*/] = { 372.9934f, -611.9315f, 28.2991f };
	fLocal_61[39] = -0.0142f;
	fLocal_142[39] = 0.0084f;
	fLocal_223[39] = 0.9689f;
	fLocal_304[39] = 0.247f;
	iLocal_1087[39] = 27;
	fLocal_385[39] = 71700f;
	iLocal_2224[39] = joaat("sentinel");
	Local_1640[40 /*3*/] = { 366.9933f, -632.9999f, 28.6681f };
	fLocal_61[40] = 0.0013f;
	fLocal_142[40] = 0.009f;
	fLocal_223[40] = 0.9814f;
	fLocal_304[40] = 0.1915f;
	iLocal_1087[40] = 28;
	fLocal_385[40] = 72000f;
	iLocal_2224[40] = joaat("schafter2");
	Local_1640[41 /*3*/] = { 390.9968f, -591.7441f, 28.3359f };
	fLocal_61[41] = -0.001f;
	fLocal_142[41] = 0.0075f;
	fLocal_223[41] = 0.9487f;
	fLocal_304[41] = 0.3159f;
	iLocal_1087[41] = 29;
	fLocal_385[41] = 72500f;
	iLocal_2224[41] = joaat("schafter2");
	Local_1640[42 /*3*/] = { 212.6834f, -606.123f, 28.5511f };
	fLocal_61[42] = -0.0064f;
	fLocal_142[42] = -0.0164f;
	fLocal_223[42] = 0.8544f;
	fLocal_304[42] = -0.5194f;
	iLocal_1087[42] = 30;
	fLocal_385[42] = 73000f;
	iLocal_2224[42] = joaat("manana");
	Local_1640[43 /*3*/] = { 109.3219f, -593.4142f, 31.3559f };
	fLocal_61[43] = 0.0013f;
	fLocal_142[43] = 0.0075f;
	fLocal_223[43] = -0.1903f;
	fLocal_304[43] = 0.9817f;
	iLocal_1087[43] = 31;
	fLocal_385[43] = 74500f;
	iLocal_2224[43] = joaat("speedo");
	Local_1640[44 /*3*/] = { 102.9036f, -596.8571f, 31.1318f };
	fLocal_61[44] = 0.0005f;
	fLocal_142[44] = -0.002f;
	fLocal_223[44] = -0.1782f;
	fLocal_304[44] = 0.984f;
	iLocal_1087[44] = 32;
	fLocal_385[44] = 79000f;
	iLocal_2224[44] = joaat("manana");
	Local_1640[45 /*3*/] = { -23.0533f, -549.3762f, 38.6333f };
	fLocal_61[45] = -0.002f;
	fLocal_142[45] = -0.0357f;
	fLocal_223[45] = 0.7315f;
	fLocal_304[45] = -0.6809f;
	iLocal_1087[45] = 33;
	fLocal_385[45] = 80000f;
	iLocal_2224[45] = joaat("sentinel");
	Local_1640[46 /*3*/] = { -60.2264f, -570.8044f, 37.5655f };
	fLocal_61[46] = 0.0763f;
	fLocal_142[46] = 0.0013f;
	fLocal_223[46] = -0.1846f;
	fLocal_304[46] = 0.9798f;
	iLocal_1087[46] = 34;
	fLocal_385[46] = 81500f;
	iLocal_2224[46] = joaat("schafter2");
	Local_1640[47 /*3*/] = { -68.89f, -584.9039f, 35.8065f };
	fLocal_61[47] = 0.0228f;
	fLocal_142[47] = -0.0029f;
	fLocal_223[47] = -0.1597f;
	fLocal_304[47] = 0.9869f;
	iLocal_1087[47] = 35;
	fLocal_385[47] = 84000f;
	iLocal_2224[47] = joaat("sentinel");
	Local_1640[48 /*3*/] = { 5.5875f, -324.5258f, 44.1159f };
	fLocal_61[48] = -0.0045f;
	fLocal_142[48] = -0.0484f;
	fLocal_223[48] = 0.9805f;
	fLocal_304[48] = 0.1906f;
	iLocal_1087[48] = 37;
	fLocal_385[48] = 85200f;
	iLocal_2224[48] = joaat("schafter2");
	Local_1640[49 /*3*/] = { -5.0009f, -276.8104f, 46.5723f };
	fLocal_61[49] = -0.0178f;
	fLocal_142[49] = -0.0006f;
	fLocal_223[49] = 0.9544f;
	fLocal_304[49] = -0.298f;
	iLocal_1087[49] = 38;
	fLocal_385[49] = 90000f;
	iLocal_2224[49] = joaat("sentinel");
	Local_1640[50 /*3*/] = { 45.598f, -165.0067f, 54.8493f };
	fLocal_61[50] = -0.008f;
	fLocal_142[50] = -0.0223f;
	fLocal_223[50] = 0.8178f;
	fLocal_304[50] = -0.5749f;
	iLocal_1087[50] = 40;
	fLocal_385[50] = 95000f;
	iLocal_2224[50] = joaat("speedo");
	Local_1640[51 /*3*/] = { 54.4349f, -301.091f, 46.7789f };
	fLocal_61[51] = -0.0185f;
	fLocal_142[51] = -0.031f;
	fLocal_223[51] = 0.8226f;
	fLocal_304[51] = -0.5674f;
	iLocal_1087[51] = 42;
	fLocal_385[51] = 100000f;
	iLocal_2224[51] = joaat("manana");
	Local_1640[52 /*3*/] = { 186.4678f, -334.258f, 43.6281f };
	fLocal_61[52] = -0.001f;
	fLocal_142[52] = 0.001f;
	fLocal_223[52] = 0.5602f;
	fLocal_304[52] = 0.8283f;
	iLocal_1087[52] = 43;
	fLocal_385[52] = 101000f;
	iLocal_2224[52] = joaat("schafter2");
	Local_1640[53 /*3*/] = { 337.992f, -391.9135f, 44.7304f };
	fLocal_61[53] = 0.0021f;
	fLocal_142[53] = 0.0021f;
	fLocal_223[53] = 0.5651f;
	fLocal_304[53] = 0.825f;
	iLocal_1087[53] = 48;
	fLocal_385[53] = 104000f;
	iLocal_2224[53] = joaat("manana");
	Local_1640[54 /*3*/] = { 196.7375f, -313.3328f, 43.7309f };
	fLocal_61[54] = -0.0055f;
	fLocal_142[54] = -0.0176f;
	fLocal_223[54] = 0.9897f;
	fLocal_304[54] = 0.142f;
	iLocal_1087[54] = 46;
	fLocal_385[54] = 106000f;
	iLocal_2224[54] = joaat("schafter2");
	Local_1640[55 /*3*/] = { 250.8725f, -365.2076f, 44.1542f };
	fLocal_61[55] = -0.0174f;
	fLocal_142[55] = -0.0052f;
	fLocal_223[55] = 0.8039f;
	fLocal_304[55] = -0.5944f;
	iLocal_1087[55] = 50;
	fLocal_385[55] = 106000f;
	iLocal_2224[55] = joaat("schafter2");
	Local_1640[56 /*3*/] = { 319.1082f, -346.9253f, 45.8237f };
	fLocal_61[56] = -0.0191f;
	fLocal_142[56] = -0.055f;
	fLocal_223[56] = 0.9719f;
	fLocal_304[56] = 0.2282f;
	iLocal_1087[56] = 47;
	fLocal_385[56] = 106100f;
	iLocal_2224[56] = joaat("sentinel");
	Local_1640[57 /*3*/] = { 324.421f, -342.9175f, 46.7807f };
	fLocal_61[57] = -0.0172f;
	fLocal_142[57] = -0.0711f;
	fLocal_223[57] = 0.9864f;
	fLocal_304[57] = 0.1474f;
	iLocal_1087[57] = 49;
	fLocal_385[57] = 108000f;
	iLocal_2224[57] = joaat("manana");
	Local_1640[58 /*3*/] = { 451.9781f, -337.0199f, 47.248f };
	fLocal_61[58] = 0.0068f;
	fLocal_142[58] = 0.0028f;
	fLocal_223[58] = 0.9618f;
	fLocal_304[58] = 0.2738f;
	iLocal_1087[58] = 52;
	fLocal_385[58] = 111000f;
	iLocal_2224[58] = joaat("speedo");
	Local_1640[59 /*3*/] = { 423.7515f, -307.0238f, 49.6123f };
	fLocal_61[59] = 0.0044f;
	fLocal_142[59] = -0.0397f;
	fLocal_223[59] = 0.8441f;
	fLocal_304[59] = -0.5346f;
	iLocal_1087[59] = 53;
	fLocal_385[59] = 111100f;
	iLocal_2224[59] = joaat("manana");
	Local_1640[60 /*3*/] = { 440.5575f, -303.2848f, 48.7468f };
	fLocal_61[60] = 0.019f;
	fLocal_142[60] = -0.029f;
	fLocal_223[60] = 0.8561f;
	fLocal_304[60] = -0.5157f;
	iLocal_1087[60] = 54;
	fLocal_385[60] = 113100f;
	iLocal_2224[60] = joaat("manana");
	Local_1640[61 /*3*/] = { 438.0004f, -307.1298f, 48.8818f };
	fLocal_61[61] = 0.0188f;
	fLocal_142[61] = -0.0296f;
	fLocal_223[61] = 0.8477f;
	fLocal_304[61] = -0.5293f;
	iLocal_1087[61] = 55;
	fLocal_385[61] = 115100f;
	iLocal_2224[61] = joaat("schafter2");
	Local_1640[62 /*3*/] = { 639.7904f, -383.6028f, 42.3535f };
	fLocal_61[62] = 0.019f;
	fLocal_142[62] = -0.0018f;
	fLocal_223[62] = 0.5239f;
	fLocal_304[62] = 0.8516f;
	iLocal_1087[62] = 58;
	fLocal_385[62] = 116000f;
	iLocal_2224[62] = joaat("sentinel");
	Local_1640[63 /*3*/] = { 690.0759f, -415.4828f, 40.4451f };
	fLocal_61[63] = 0.0262f;
	fLocal_142[63] = 0.0264f;
	fLocal_223[63] = 0.4536f;
	fLocal_304[63] = 0.8904f;
	iLocal_1087[63] = 59;
	fLocal_385[63] = 120000f;
	iLocal_2224[63] = joaat("schafter2");
	Local_1640[64 /*3*/] = { 725.498f, -450.7779f, 37.691f };
	fLocal_61[64] = 0.0197f;
	fLocal_142[64] = 0.0206f;
	fLocal_223[64] = 0.4235f;
	fLocal_304[64] = 0.9055f;
	iLocal_1087[64] = 60;
	fLocal_385[64] = 121000f;
	iLocal_2224[64] = joaat("sentinel");
	Local_1640[65 /*3*/] = { 717.0089f, -436.9935f, 38.4648f };
	fLocal_61[65] = 0.0177f;
	fLocal_142[65] = 0.024f;
	fLocal_223[65] = 0.4359f;
	fLocal_304[65] = 0.8995f;
	iLocal_1087[65] = 61;
	fLocal_385[65] = 121000f;
	iLocal_2224[65] = joaat("manana");
	Local_1881[0 /*3*/] = { 25.7395f, -1708.263f, 28.7747f };
	fLocal_1046[0] = 0f;
	fLocal_1051[0] = 0f;
	fLocal_1056[0] = 0.2217f;
	fLocal_1061[0] = 0.9751f;
	iLocal_2305[0] = joaat("sentinel");
	Local_1881[1 /*3*/] = { 383.526f, -1452.055f, 29.0287f };
	fLocal_1046[1] = 0.0142f;
	fLocal_1051[1] = 0.0098f;
	fLocal_1056[1] = 0.23f;
	fLocal_1061[1] = 0.973f;
	iLocal_2305[1] = joaat("schafter2");
	Local_1881[2 /*3*/] = { 486.8542f, -1167.331f, 28.9366f };
	fLocal_1046[2] = 0f;
	fLocal_1051[2] = 0f;
	fLocal_1056[2] = 0.7338f;
	fLocal_1061[2] = -0.6794f;
	iLocal_2305[2] = joaat("schafter2");
	Local_1881[3 /*3*/] = { 458.2476f, -639.8495f, 28.1547f };
	fLocal_1046[3] = 0.0001f;
	fLocal_1051[3] = 0.0003f;
	fLocal_1056[3] = 0.2649f;
	fLocal_1061[3] = 0.9643f;
	iLocal_2305[3] = joaat("schafter2");
	Local_1894[0 /*3*/] = { 494.3779f, -634.8876f, 24.965f };
	fLocal_470[0] = -0.0085f;
	fLocal_566[0] = 0.0132f;
	fLocal_662[0] = 0.6339f;
	fLocal_758[0] = 0.7733f;
	iLocal_1330[0] = 137;
	fLocal_854[0] = 91000f;
	fLocal_950[0] = 1f;
	iLocal_2310[0] = joaat("phantom");
	Local_1894[1 /*3*/] = { -76.4095f, -606.6107f, 35.8049f };
	fLocal_470[1] = -0.0004f;
	fLocal_566[1] = 0f;
	fLocal_662[1] = -0.1581f;
	fLocal_758[1] = 0.9874f;
	iLocal_1330[1] = 36;
	fLocal_854[1] = 84500f;
	fLocal_950[1] = 1f;
	iLocal_2310[1] = joaat("manana");
	Local_1894[2 /*3*/] = { -40.1297f, -260.0975f, 45.7146f };
	fLocal_470[2] = -0.0087f;
	fLocal_566[2] = 0.0118f;
	fLocal_662[2] = 0.8115f;
	fLocal_758[2] = -0.5842f;
	iLocal_1330[2] = 39;
	fLocal_854[2] = 96000f;
	fLocal_950[2] = 1f;
	iLocal_2310[2] = joaat("schafter2");
	Local_1894[3 /*3*/] = { 84.8523f, -293.1762f, 46.0589f };
	fLocal_470[3] = -0.0019f;
	fLocal_566[3] = 0.0293f;
	fLocal_662[3] = 0.5779f;
	fLocal_758[3] = 0.8156f;
	iLocal_1330[3] = 41;
	fLocal_854[3] = 97000f;
	fLocal_950[3] = 1f;
	iLocal_2310[3] = joaat("manana");
	Local_1894[4 /*3*/] = { 172.4911f, -375.0501f, 42.274f };
	fLocal_470[4] = 0.0282f;
	fLocal_566[4] = -0.0032f;
	fLocal_662[4] = -0.2149f;
	fLocal_758[4] = 0.9762f;
	iLocal_1330[4] = 44;
	fLocal_854[4] = 104000f;
	fLocal_950[4] = 1f;
	iLocal_2310[4] = joaat("sentinel");
	Local_1894[5 /*3*/] = { 171.7265f, -390.1432f, 41.6091f };
	fLocal_470[5] = 0.0283f;
	fLocal_566[5] = -0.0041f;
	fLocal_662[5] = -0.1949f;
	fLocal_758[5] = 0.9804f;
	iLocal_1330[5] = 45;
	fLocal_854[5] = 106000f;
	fLocal_950[5] = 1f;
	iLocal_2310[5] = joaat("manana");
	Local_1894[6 /*3*/] = { 333.1232f, -351.4108f, 45.8325f };
	fLocal_470[6] = 0.0103f;
	fLocal_566[6] = -0.0667f;
	fLocal_662[6] = 0.9862f;
	fLocal_758[6] = 0.1509f;
	iLocal_1330[6] = 51;
	fLocal_854[6] = 109000f;
	fLocal_950[6] = 1f;
	iLocal_2310[6] = joaat("sentinel");
	Local_1894[7 /*3*/] = { 504.7013f, -264.2179f, 46.8504f };
	fLocal_470[7] = 0.0004f;
	fLocal_566[7] = -0.0199f;
	fLocal_662[7] = 0.9636f;
	fLocal_758[7] = 0.2664f;
	iLocal_1330[7] = 56;
	fLocal_854[7] = 116000f;
	fLocal_950[7] = 1f;
	iLocal_2310[7] = joaat("sentinel");
	Local_1894[8 /*3*/] = { 617.3689f, -343.3064f, 42.9542f };
	fLocal_470[8] = -0.0003f;
	fLocal_566[8] = -0.0011f;
	fLocal_662[8] = 0.9826f;
	fLocal_758[8] = 0.1858f;
	iLocal_1330[8] = 57;
	fLocal_854[8] = 118000f;
	fLocal_950[8] = 1f;
	iLocal_2310[8] = joaat("manana");
	Local_1894[9 /*3*/] = { -164.4686f, -2056.109f, 23.837f };
	fLocal_470[9] = -0.071f;
	fLocal_566[9] = 0.0019f;
	fLocal_662[9] = -0.1413f;
	fLocal_758[9] = 0.9874f;
	iLocal_1330[9] = 80;
	fLocal_854[9] = 3500f;
	fLocal_950[9] = 1f;
	iLocal_2310[9] = joaat("schafter2");
	Local_1894[10 /*3*/] = { -48.2772f, -1712.614f, 28.8332f };
	fLocal_470[10] = -0.003f;
	fLocal_566[10] = -0.0045f;
	fLocal_662[10] = 0.8231f;
	fLocal_758[10] = 0.5679f;
	iLocal_1330[10] = 13;
	fLocal_854[10] = 17900f;
	fLocal_950[10] = 1f;
	iLocal_2310[10] = joaat("sentinel");
	Local_1894[11 /*3*/] = { -77.0531f, -1786.769f, 27.7276f };
	fLocal_470[11] = 0.0108f;
	fLocal_566[11] = 0.0247f;
	fLocal_662[11] = 0.3258f;
	fLocal_758[11] = 0.9451f;
	iLocal_1330[11] = 82;
	fLocal_854[11] = 20000f;
	fLocal_950[11] = 1f;
	iLocal_2310[11] = joaat("sentinel");
	Local_1894[12 /*3*/] = { 625.6348f, -1433.35f, 29.9579f };
	fLocal_470[12] = -0.0056f;
	fLocal_566[12] = -0.0043f;
	fLocal_662[12] = 0.7058f;
	fLocal_758[12] = 0.7084f;
	iLocal_1330[12] = 77;
	fLocal_854[12] = 42000f;
	fLocal_950[12] = 1f;
	iLocal_2310[12] = joaat("schafter2");
	Local_1894[13 /*3*/] = { 648.611f, -1429.158f, 29.9931f };
	fLocal_470[13] = -0.014f;
	fLocal_566[13] = 0.006f;
	fLocal_662[13] = 0.7031f;
	fLocal_758[13] = 0.711f;
	iLocal_1330[13] = 78;
	fLocal_854[13] = 42200f;
	fLocal_950[13] = 1f;
	iLocal_2310[13] = joaat("sentinel");
	Local_1894[14 /*3*/] = { 524.4578f, -1438.703f, 28.7174f };
	fLocal_470[14] = -0.0011f;
	fLocal_566[14] = 0f;
	fLocal_662[14] = 0.7202f;
	fLocal_758[14] = -0.6938f;
	iLocal_1330[14] = 79;
	fLocal_854[14] = 41500f;
	fLocal_950[14] = 1f;
	iLocal_2310[14] = joaat("sentinel");
	Local_1894[15 /*3*/] = { 559.7665f, -1443.769f, 28.9727f };
	fLocal_470[15] = -0.0151f;
	fLocal_566[15] = -0.0034f;
	fLocal_662[15] = 0.7189f;
	fLocal_758[15] = -0.6949f;
	iLocal_1330[15] = 83;
	fLocal_854[15] = 43000f;
	fLocal_950[15] = 1f;
	iLocal_2310[15] = joaat("manana");
	Local_1894[16 /*3*/] = { 667.5609f, -1432.702f, 30.4244f };
	fLocal_470[16] = -0.0045f;
	fLocal_566[16] = -0.0037f;
	fLocal_662[16] = 0.7154f;
	fLocal_758[16] = 0.6987f;
	iLocal_1330[16] = 84;
	fLocal_854[16] = 43100f;
	fLocal_950[16] = 1f;
	iLocal_2310[16] = joaat("manana");
}

void func_508(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x5E3B0
{
	struct<3> Var0;
	
	StringCopy(&cLocal_2207, sParam0, 64);
	bLocal_37 = true;
	iLocal_42 = 0;
	iLocal_1623 = 0;
	iLocal_1624 = 0;
	iLocal_1625 = 0;
	iLocal_1626 = iParam1;
	iLocal_1627 = 0;
	iLocal_1628 = 0;
	iLocal_1629 = 0;
	iLocal_1633 = 0;
	iLocal_1636 = 0;
	iLocal_1634 = -1;
	iLocal_1635 = -1;
	iLocal_1637 = 0;
	iLocal_1638 = 0;
	fLocal_1082 = 0f;
	fLocal_1083 = 0f;
	fLocal_1068 = 0f;
	iLocal_43 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		Local_2183.x = (Var0.x - 100f);
		Local_2183.f_1 = (Var0.f_1 - 100f);
		Local_2183.f_2 = (Var0.f_2 - 100f);
		Local_2186.x = (Var0.x + 100f);
		Local_2186.f_1 = (Var0.f_1 + 100f);
		Local_2186.f_2 = (Var0.f_2 + 100f);
		PATHFIND::SET_ROADS_IN_AREA(Local_2183, Local_2186, 0, 0);
		if (bParam2)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(Var0, 500f, 0, 0, 0, 0, 0);
		}
	}
	PED::ADD_RELATIONSHIP_GROUP("rgh_traffic", &iLocal_2223);
	GlobalFunc_2512();
	if (bParam3)
	{
		GlobalFunc_9132(1);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 0);
		PED::SET_CREATE_RANDOM_COPS(0);
	}
	func_18();
}

int func_509()//Position - 0x5E4D2
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "lkfamily4") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(5, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(6, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(7, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(8, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(9, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(10, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(11, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(12, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(13, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(14, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(15, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(16, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(17, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(18, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(19, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(20, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(21, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(22, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(23, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(24, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(26, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(27, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(28, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(29, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(30, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(31, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(32, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(33, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(34, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(35, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(36, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(37, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(38, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(39, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(40, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(41, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(42, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(43, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(45, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(46, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(47, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(48, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(49, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(50, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(51, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(52, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(53, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(54, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(55, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(56, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(57, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(58, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(59, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(60, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(61, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(62, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(63, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(64, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(65, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(66, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(69, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(70, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(71, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(72, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(73, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(74, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(75, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(76, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(77, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(80, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(81, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(82, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(83, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(84, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(85, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(86, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(87, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(88, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(89, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(90, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(91, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(92, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(93, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(94, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(95, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(112, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(137, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(201, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(202, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(301, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(302, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(401, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(402, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(403, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(404, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(405, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(406, "lkfamily4"))
	{
		return 1;
	}
	return 0;
}

void func_510()//Position - 0x5EAC9
{
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(2, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(3, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(4, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(5, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(6, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(7, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(8, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(9, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(10, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(11, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(12, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(13, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(14, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(15, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(16, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(17, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(18, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(19, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(20, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(21, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(22, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(23, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(24, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(26, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(27, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(28, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(29, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(30, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(31, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(32, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(33, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(34, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(35, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(36, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(37, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(38, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(39, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(40, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(41, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(42, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(43, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(45, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(46, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(47, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(48, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(49, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(50, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(51, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(52, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(53, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(54, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(55, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(56, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(57, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(58, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(59, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(60, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(61, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(62, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(63, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(64, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(65, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(66, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(69, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(70, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(71, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(72, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(73, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(74, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(75, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(76, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(77, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(80, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(81, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(82, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(83, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(84, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(85, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(86, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(87, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(88, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(89, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(90, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(91, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(92, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(93, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(94, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(95, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(112, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(137, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(201, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(202, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(301, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(302, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(401, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(402, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(403, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(404, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(405, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(406, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(501, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(502, "lkfamily4");
}

void func_511()//Position - 0x5EEDA
{
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	PED::SET_CREATE_RANDOM_COPS(0);
	VEHICLE::DELETE_ALL_TRAINS();
	VEHICLE::SET_RANDOM_TRAINS(0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("utillitruck"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("utillitruck2"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("utillitruck3"), 1);
	if (iLocal_4009)
	{
		GlobalFunc_4972(Local_2713.f_3, Local_2713.f_6, 0, 0);
	}
	STREAMING::REQUEST_MODEL(Local_2946.f_1);
	STREAMING::REQUEST_MODEL(Local_2986.f_1);
	STREAMING::REQUEST_MODEL(Local_3628.f_1);
	STREAMING::REQUEST_MODEL(Local_2713.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_2713.f_1, 1);
	STREAMING::REQUEST_MODEL(Local_2728.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_2728.f_1, 1);
	STREAMING::REQUEST_MODEL(Local_2743.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_2743.f_1, 1);
	STREAMING::REQUEST_MODEL(Local_2926.f_1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(Local_2926.f_1, 1);
	STREAMING::REQUEST_MODEL(joaat("sentinel"));
	STREAMING::REQUEST_MODEL(joaat("schafter2"));
	STREAMING::REQUEST_MODEL(joaat("manana"));
	STREAMING::REQUEST_ANIM_DICT("missfam4");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\FAM4_UNHITCH_TRAILER", 0);
	STREAMING::REQUEST_PTFX_ASSET();
	func_510();
	if (iLocal_4009)
	{
		GlobalFunc_4967(0, -1, 1);
	}
	while (((((((((((((!STREAMING::HAS_MODEL_LOADED(Local_2946.f_1) || !STREAMING::HAS_MODEL_LOADED(Local_2986.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_3628.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_2713.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_2728.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_2743.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_2926.f_1)) || !STREAMING::HAS_MODEL_LOADED(joaat("sentinel"))) || !STREAMING::HAS_MODEL_LOADED(joaat("schafter2"))) || !STREAMING::HAS_MODEL_LOADED(joaat("manana"))) || !STREAMING::HAS_ANIM_DICT_LOADED("missfam4")) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\FAM4_UNHITCH_TRAILER", 0)) || !STREAMING::HAS_PTFX_ASSET_LOADED()) || !func_509())
	{
		SYSTEM::WAIT(0);
	}
	MISC::CLEAR_AREA(-219.6464f, -2037.822f, 26.6207f, 10000f, 1, 0, 0, 0);
	func_512(0);
	VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_2713, -15f);
	GlobalFunc_7061(&Local_2926, 27, Local_2743, -1, 0);
	PED::SET_PED_CAN_RAGDOLL(Local_2926, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_2926, 3, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2926, 1);
	GlobalFunc_173(&uLocal_4044, 5, Local_2926, "lazlow", 0, 1);
	func_371(2, 0);
	GlobalFunc_173(&uLocal_4044, 2, PLAYER::PLAYER_PED_ID(), "trevor", 0, 1);
	PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2713, -1);
	func_79(&(uLocal_3865[0]), 0, Local_2713, 0, 0, 0, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_3865[0], 1);
	GlobalFunc_173(&uLocal_4044, 0, uLocal_3865[0], "michael", 0, 1);
	func_508("lkfamily4", 1, 1, 1);
	func_507();
	fLocal_1078 = 200f;
	iLocal_41 = 1;
	iLocal_46 = 1;
	iLocal_55 = 1;
	iLocal_53 = 1;
	func_506(1, 3, 11);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2743, 1, "lkfamily4", 1);
	func_478(Local_2743, 1f);
	func_504(Local_2743, 3000f);
	func_478(Local_2743, 1f);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2743, 1);
	MISC::SET_INSTANCE_PRIORITY_HINT(2);
	func_477(joaat("sentinel"), 100);
	func_477(joaat("schafter2"), 100);
	func_477(joaat("taco"), 100);
	if (!iLocal_4009)
	{
		STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
	}
	AUDIO::START_AUDIO_SCENE("FAMILY_4_CHASE_TRUCK_1");
	AUDIO::TRIGGER_MUSIC_EVENT("FAM4_CHASE_RESTART");
	func_473(1, 0, 0, 1);
	iLocal_3926 = MISC::GET_GAME_TIMER();
	iLocal_3975 = MISC::GET_GAME_TIMER();
	GlobalFunc_164("family4_god_2", 4000, 1);
	GlobalFunc_11046(3, "Chase truck", 0, 0, 0, 1);
	iLocal_2696 = 7;
}

int func_512(bool bParam0)//Position - 0x5F255
{
	int iVar0;
	
	iVar0 = 0;
	switch (iLocal_3987)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_2713))
			{
				STREAMING::REQUEST_MODEL(Local_2713.f_1);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_2713.f_1, 1);
				STREAMING::REQUEST_MODEL(Local_2728.f_1);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_2728.f_1, 1);
				STREAMING::REQUEST_MODEL(Local_2743.f_1);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_2743.f_1, 1);
				STREAMING::REQUEST_MODEL(joaat("sentinel"));
				STREAMING::REQUEST_MODEL(joaat("schafter2"));
				STREAMING::REQUEST_MODEL(joaat("manana"));
				if (bParam0)
				{
					STREAMING::REQUEST_MODEL(Local_3568.f_1);
				}
				STREAMING::REQUEST_ANIM_DICT("missfam4");
				VEHICLE::REQUEST_VEHICLE_RECORDING(1, "lkfamily4");
				VEHICLE::REQUEST_VEHICLE_RECORDING(112, "lkfamily4");
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\FAM4_UNHITCH_TRAILER", 0);
				STREAMING::REQUEST_PTFX_ASSET();
				if (((((((((((STREAMING::HAS_MODEL_LOADED(Local_2713.f_1) && STREAMING::HAS_MODEL_LOADED(Local_2728.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_2743.f_1)) && STREAMING::HAS_MODEL_LOADED(joaat("sentinel"))) && STREAMING::HAS_MODEL_LOADED(joaat("schafter2"))) && STREAMING::HAS_MODEL_LOADED(joaat("manana"))) && (!bParam0 || STREAMING::HAS_MODEL_LOADED(Local_3568.f_1))) && STREAMING::HAS_ANIM_DICT_LOADED("missfam4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(112, "lkfamily4")) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\FAM4_UNHITCH_TRAILER", 0)) && STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					MISC::CLEAR_AREA(Local_2713.f_3, 10f, 1, 0, 0, 0);
					Local_2713 = VEHICLE::CREATE_VEHICLE(Local_2713.f_1, Local_2713.f_3, Local_2713.f_6, 1, 1);
					VEHICLE::SET_FORCE_HD_VEHICLE(Local_2713, 1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_2713);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_2713, 1, 1);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_2713, false);
					VEHICLE::SET_VEHICLE_COLOURS(Local_2713, 0, 0);
					ENTITY::SET_ENTITY_HEALTH(Local_2713, 1500);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_2713, 1500f);
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_2713, 1500f);
					VEHICLE::SET_VEHICLE_STRONG(Local_2713, 1);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_2713, 1);
					AUDIO::SET_RADIO_TO_STATION_NAME("off");
					MISC::CLEAR_AREA(Local_2728.f_3, 10f, 1, 0, 0, 0);
					Local_2728 = VEHICLE::CREATE_VEHICLE(Local_2728.f_1, Local_2728.f_3, Local_2728.f_6, 1, 1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_2728);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_2728, false);
					VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_2713, Local_2728, 1065353216);
					VEHICLE::SET_TRAILER_LEGS_RAISED(Local_2728);
					PHYSICS::ACTIVATE_PHYSICS(Local_2713);
					PHYSICS::ACTIVATE_PHYSICS(Local_2728);
					if (bParam0)
					{
						Local_3568 = PED::CREATE_PED_INSIDE_VEHICLE(Local_2713, 26, Local_3568.f_1, -1, 1, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3568.f_1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3568, 1);
						AUDIO::STOP_PED_SPEAKING(Local_3568, 1);
						GlobalFunc_173(&uLocal_4044, 8, Local_3568, "truckdriver", 0, 1);
					}
					MISC::CLEAR_AREA(Local_2743.f_3, 10f, 1, 0, 0, 0);
					Local_2743 = VEHICLE::CREATE_VEHICLE(Local_2743.f_1, Local_2743.f_3, Local_2743.f_6, 1, 1);
					VEHICLE::SET_VEHICLE_STRONG(Local_2743, 1);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_2743, 1);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_2743, 1, 1);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_2743, false);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_2743, 1);
					ENTITY::SET_ENTITY_PROOFS(Local_2743, 0, 1, 1, 1, 1, 0, 0, 0);
					VEHICLE::SET_VEHICLE_STRONG(Local_2743, 1);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_2743, 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2743, 3);
					VEHICLE::SET_VEHICLE_COLOURS(Local_2743, 27, 0);
					VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_2743, 0);
					VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_2743, 0);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_2743, "FAMILY_4_LAZLOWS_CAR", 0);
					iVar0 = 1;
					while (iVar0 <= (Local_2819 - 1))
					{
						MISC::CLEAR_AREA(Local_2819[iVar0 /*15*/].f_3, 10f, 1, 0, 0, 0);
						Local_2819[iVar0 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_2819[iVar0 /*15*/].f_1, Local_2819[iVar0 /*15*/].f_3, Local_2819[iVar0 /*15*/].f_6, 1, 1);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2819[iVar0 /*15*/], 2);
						VEHICLE::SET_VEHICLE_COLOURS(Local_2819[iVar0 /*15*/], (10 * iVar0), 0);
						Local_2865[iVar0 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_2865[iVar0 /*15*/].f_1, Local_2865[iVar0 /*15*/].f_3, Local_2865[iVar0 /*15*/].f_6, 1, 1);
						VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_2819[iVar0 /*15*/], Local_2865[iVar0 /*15*/], 1065353216);
						iVar0++;
					}
					MISC::CLEAR_AREA(209.64f, -2015.48f, 26.6f, 10f, 1, 0, 0, 0);
					iLocal_4030 = VEHICLE::CREATE_VEHICLE(joaat("schafter2"), -209.6465f, -2015.481f, 26.6206f, 0f, 1, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_4030, 73.3412f);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_4030, 64, 0);
					MISC::CLEAR_AREA(-210.8506f, -2018.37f, 26.6207f, 10f, 1, 0, 0, 0);
					iLocal_4034 = VEHICLE::CREATE_VEHICLE(joaat("schafter2"), -210.8506f, -2018.37f, 26.6207f, 0f, 1, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_4034, 70.9631f);
					MISC::CLEAR_AREA(-206.0113f, -2055.33f, 26.6199f, 10f, 1, 0, 0, 0);
					iLocal_4035 = VEHICLE::CREATE_VEHICLE(joaat("sentinel"), -206.0113f, -2055.33f, 26.6199f, 0f, 1, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_4035, 53.3779f);
					MISC::CLEAR_AREA(-199.4559f, -2045.28f, 26.6199f, 10f, 1, 0, 0, 0);
					iLocal_4036 = VEHICLE::CREATE_VEHICLE(joaat("sentinel"), -199.4559f, -2045.28f, 26.6199f, 0f, 1, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_4036, 59.9934f);
					MISC::CLEAR_AREA(-218.2066f, -2070.032f, 26.6199f, 10f, 1, 0, 0, 0);
					iLocal_4037 = VEHICLE::CREATE_VEHICLE(joaat("sentinel"), -218.2066f, -2070.032f, 26.6199f, 0f, 1, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_4037, 45.2218f);
					iLocal_3987++;
				}
			}
			break;
		
		case 1:
			func_510();
			if (func_509())
			{
				iLocal_3987++;
				return 1;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

void func_513()//Position - 0x5F7E6
{
	if (iLocal_4009)
	{
		GlobalFunc_4972(-239.1158f, -2005.142f, 23.6855f, 121.9928f, 0, 0);
	}
	STREAMING::REQUEST_MODEL(GlobalFunc_4917(0));
	STREAMING::REQUEST_MODEL(GlobalFunc_4917(2));
	func_547();
	STREAMING::REQUEST_MODEL(Local_3608.f_1);
	TASK::REQUEST_WAYPOINT_RECORDING("family4_0");
	TASK::REQUEST_WAYPOINT_RECORDING("family4_1");
	iLocal_4246 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-251.4008f, -2008.338f, 29.1458f, "v_stadium");
	INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_4246);
	if (iLocal_4009)
	{
		GlobalFunc_4967(0, -1, 1);
	}
	while ((((((!STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(0)) || !STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(2))) || !func_546()) || !STREAMING::HAS_MODEL_LOADED(Local_3608.f_1)) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("family4_0")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("family4_1")) || !INTERIOR::IS_INTERIOR_READY(iLocal_4246))
	{
		SYSTEM::WAIT(0);
	}
	func_371(2, 1);
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -239.1158f, -2005.142f, 23.6855f, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 121.9928f);
	GlobalFunc_601(2, 1);
	MISC::CLEAR_AREA(-239.1602f, -2002.615f, 23.6856f, 1000f, 1, 0, 0, 0);
	if (!iLocal_4009)
	{
		STREAMING::NEW_LOAD_SCENE_START(-239.1602f, -2002.615f, 23.6856f, GlobalFunc_590(0f, 0f, 145.8395f), 40f, 0);
		while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			SYSTEM::WAIT(0);
		}
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	func_371(2, 1);
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -238.8316f, -2005.546f, 23.6855f, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 103.8542f);
	GlobalFunc_173(&uLocal_4044, 2, PLAYER::PLAYER_PED_ID(), "trevor", 0, 1);
	INTERIOR::FORCE_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID(), INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-239.1158f, -2005.142f, 23.6855f, "v_stadium"), MISC::GET_HASH_KEY("GtaMloRoom004"));
	func_419(&(uLocal_3865[0]), 0, -240.5416f, -2006.294f, 23.6856f, 85.0646f, 1, 0, 0);
	func_543(uLocal_3865[0]);
	func_542(&(uLocal_3865[0]), 1);
	GlobalFunc_173(&uLocal_4044, 0, uLocal_3865[0], "michael", 0, 1);
	INTERIOR::FORCE_ROOM_FOR_ENTITY(uLocal_3865[0], INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-239.1158f, -2005.142f, 23.6855f, "v_stadium"), MISC::GET_HASH_KEY("GtaMloRoom004"));
	GlobalFunc_6808(&Local_2926, 27, Local_2926.f_3, Local_2926.f_9, 0);
	func_543(Local_2926);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_2926, 3, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2926, 1);
	Local_2926.f_2 = GlobalFunc_6797(Local_2926, 1, 145);
	GlobalFunc_173(&uLocal_4044, 5, Local_2926, "lazlow", 0, 1);
	INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_2926, INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-239.1158f, -2005.142f, 23.6855f, "v_stadium"), MISC::GET_HASH_KEY("GtaMloRoom001"));
	GlobalFunc_6808(&Local_2966, 15, -235.0557f, -2000.045f, 23.6854f, 86.6f, 1);
	func_543(Local_2966);
	func_542(&Local_2966, 1);
	PED::SET_PED_CAN_RAGDOLL(Local_2966, 1);
	PED::SET_PED_COMPONENT_VARIATION(Local_2966, 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_2966, 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_2966, 2, 4, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_2966, 3, 5, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_2966, 4, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_2966, 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_2966, 6, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_2966, 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_2966, 8, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_2966, 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_2966, 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_2966, 11, 0, 0, 0);
	GlobalFunc_173(&uLocal_4044, 4, Local_2966, "tracey", 0, 1);
	INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_2966, INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-239.1158f, -2005.142f, 23.6855f, "v_stadium"), MISC::GET_HASH_KEY("GtaMloRoom004"));
	Local_3608 = PED::CREATE_PED(26, Local_3608.f_1, -235.4601f, -2003f, 23.6854f, 86.6f, 1, 1);
	INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_3608, INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-239.1158f, -2005.142f, 23.6855f, "v_stadium"), MISC::GET_HASH_KEY("GtaMloRoom004"));
	ENTITY::SET_ENTITY_HEALTH(Local_3608, 2);
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_3608);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3608.f_1);
	SYSTEM::WAIT(0);
	while (((!GlobalFunc_591(PLAYER::PLAYER_PED_ID()) || !GlobalFunc_591(uLocal_3865[0])) || !GlobalFunc_591(Local_2926)) || !GlobalFunc_591(Local_2966))
	{
		SYSTEM::WAIT(0);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::OPEN_SEQUENCE_TASK(&uLocal_4248);
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "family4_1", 5, 44, 13);
		TASK::CLOSE_SEQUENCE_TASK(uLocal_4248);
		TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_4248);
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_4248);
		PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -530524, 0, 0, 0);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
	if (!PED::IS_PED_INJURED(uLocal_3865[0]))
	{
		TASK::OPEN_SEQUENCE_TASK(&uLocal_4248);
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "family4_1", 8, 44, -1);
		TASK::CLOSE_SEQUENCE_TASK(uLocal_4248);
		TASK::TASK_PERFORM_SEQUENCE(uLocal_3865[0], uLocal_4248);
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_4248);
		PED::FORCE_PED_MOTION_STATE(uLocal_3865[0], -530524, 0, 0, 0);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_3865[0], 0, 0);
	}
	iLocal_3926 = MISC::GET_GAME_TIMER();
	func_514();
	GlobalFunc_11046(2, "run after lazlow", 0, 0, 0, 1);
}

void func_514()//Position - 0x5FD32
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_2669 - 1))
	{
		iLocal_2669[iVar0] = 6;
		iVar0++;
	}
	GlobalFunc_601(2, 1);
	uLocal_4011 = GlobalFunc_6783(uLocal_3865[0], 0, 0);
	func_543(uLocal_3865[0]);
	func_542(&(uLocal_3865[0]), 1);
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	PED::SET_CREATE_RANDOM_COPS(0);
	if (!PED::IS_PED_INJURED(Local_2966))
	{
		func_543(Local_2966);
		func_542(&Local_2966, 1);
		PED::SET_PED_CAN_RAGDOLL(Local_2966, 1);
		GlobalFunc_173(&uLocal_4044, 4, Local_2966, "tracey", 0, 1);
		func_522();
	}
	VEHICLE::DELETE_ALL_TRAINS();
	VEHICLE::SET_RANDOM_TRAINS(0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("utillitruck"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("utillitruck2"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("utillitruck3"), 1);
	func_521();
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 2)
		{
			func_473(0, 0f, 0f, 0);
		}
		else
		{
			func_473(0, -60f, 0f, 0);
		}
	}
	else if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 2)
	{
		func_519(0, 1, 0, 0f, 0f, 3000, 0);
	}
	else
	{
		func_519(0, 1, 0, -60f, 0f, 3000, 0);
	}
	if (!func_518("FAM4_MISSION_START"))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FAM4_MISSION_START");
		func_515("FAM4_MISSION_START", 1);
	}
	GlobalFunc_11046(2, "run after lazlow", 0, 0, 0, 1);
	iLocal_2696 = 5;
}

void func_515(char* sParam0, bool bParam1)//Position - 0x5FE7F
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = 0;
	if (bParam1)
	{
		bVar2 = false;
		while (!bVar2 && iVar1 < iLocal_3963)
		{
			if (iLocal_3963[iVar1] == iVar0)
			{
				bVar2 = true;
			}
			else if (iLocal_3963[iVar1] == 0)
			{
				iLocal_3963[iVar1] = iVar0;
				bVar2 = true;
			}
			iVar1++;
		}
	}
	else
	{
		iVar3 = func_517(iVar0);
		if (iVar3 != -1)
		{
			iLocal_3963[iVar3] = 0;
			func_516();
		}
	}
}

void func_516()//Position - 0x5FEFA
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iLocal_3963 - 1))
	{
		if (iLocal_3963[iVar0] == 0)
		{
			if (iLocal_3963[iVar0 + 1] != 0)
			{
				iLocal_3963[iVar0] = iLocal_3963[iVar0 + 1];
				iLocal_3963[iVar0 + 1] = 0;
			}
		}
		iVar0++;
	}
}

int func_517(int iParam0)//Position - 0x5FF4D
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_3963)
	{
		if (iLocal_3963[iVar0] == 0)
		{
			return -1;
		}
		else if (iLocal_3963[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_518(char* sParam0)//Position - 0x5FF90
{
	return func_517(MISC::GET_HASH_KEY(sParam0)) != -1;
}

void func_519(bool bParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, int iParam5, bool bParam6)//Position - 0x5FFA4
{
	GlobalFunc_657();
	GlobalFunc_8316(0, 1, 1, 0);
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	GlobalFunc_5105();
	HUD::DISPLAY_HUD(1);
	HUD::DISPLAY_RADAR(1);
	CAM::SET_WIDESCREEN_BORDERS(0, 500);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		CAM::DESTROY_ALL_CAMS(0);
		if (bParam1)
		{
			if (bParam2)
			{
				CAM::RENDER_SCRIPT_CAMS(false, 1, iParam5, 1, 0, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam3);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam4, 1065353216);
			}
			else
			{
				CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam3);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam4, 1065353216);
			}
		}
		if (bParam0)
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
		PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 1);
		WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	if (bParam6)
	{
		GlobalFunc_698();
	}
	else
	{
		GlobalFunc_626();
	}
}


void func_521()//Position - 0x60073
{
	switch (iLocal_3990)
	{
		case 0:
			if (iLocal_3922)
			{
				if (CAM::IS_SCREEN_FADED_IN())
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneTrevor", 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", 1);
						iLocal_3990++;
					}
					else
					{
						iLocal_3990++;
					}
				}
			}
			break;
		
		case 1:
			break;
	}
}

void func_522()//Position - 0x600D9
{
	if (!PED::IS_PED_INJURED(Local_2966))
	{
		switch (iLocal_3974)
		{
			case 0:
				if (STREAMING::HAS_ANIM_DICT_LOADED("missfam4leadinoutmcs2"))
				{
					Local_3998 = { -234.834f, -1999.252f, 24.68f };
					Local_4001 = { 0f, 0f, -127f };
					Local_2966.f_11 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3998, Local_4001, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_2966, Local_2966.f_11, "missfam4leadinoutmcs2", "tracy_loop", 1000f, -8f, 1, 0, 1148846080, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_2966.f_11, 1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_2966, 1, 0);
					PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_2966, 16);
					iLocal_3974++;
				}
				break;
			
			case 1:
				if (!func_518("FAM4_CRIES"))
				{
					if (!GlobalFunc_5172(&Local_4221, 0))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_2966, 1), 1) < 5f)
						{
							if (GlobalFunc_10618(&uLocal_4044, "fam4aud", "FAM4_CRIES", 6, 0, 0, 0))
							{
								func_515("FAM4_CRIES", 1);
							}
						}
					}
				}
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_2966.f_11) && !PED::IS_PED_RAGDOLL(Local_2966)) && !PED::IS_PED_DEAD_OR_DYING(Local_2966, 1))
				{
					if (func_52(Local_2966, 242628503, 1, -2))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_4248);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::TASK_COWER(0, -1);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_4248);
						TASK::TASK_PERFORM_SEQUENCE(Local_2966, uLocal_4248);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_4248);
					}
				}
				break;
			
			case 2:
				break;
			}
	}
}




















void func_542(int iParam0, bool bParam1)//Position - 0x60AE9
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_4274, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_4274);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_4275);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_4274, iLocal_4275);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_4275, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_4275, iLocal_4274);
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam0, iLocal_4274);
			PED::SET_PED_TARGET_LOSS_RESPONSE(*iParam0, 1);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*iParam0, 0, 0);
			if (bParam1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 1);
			}
			else
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
			}
		}
	}
}

void func_543(int iParam0)//Position - 0x60B83
{
	PED::SET_PED_DIES_WHEN_INJURED(iParam0, 0);
	PED::SET_PED_CAN_BE_TARGETTED(iParam0, 0);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(iParam0, 0);
	PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, 0);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iParam0, 0, 0);
	PED::SET_PED_KEEP_TASK(iParam0, 1);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 145);
	PED::SET_PED_CONFIG_FLAG(iParam0, 132, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 32, 0);
	PED::SET_PED_CONFIG_FLAG(iParam0, 208, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 118, 0);
	PED::SET_PED_CONFIG_FLAG(iParam0, 188, 1);
	PED::SET_PED_SEEING_RANGE(iParam0, 250f);
	PED::SET_PED_HEARING_RANGE(iParam0, 250f);
	PED::SET_PED_ID_RANGE(iParam0, 250f);
}



int func_546()//Position - 0x60C5B
{
	if ((STREAMING::HAS_MODEL_LOADED(Local_2926.f_1) && STREAMING::HAS_MODEL_LOADED(Local_2966.f_1)) && STREAMING::HAS_ANIM_DICT_LOADED("missfam4leadinoutmcs2"))
	{
		return 1;
	}
	return 0;
}

void func_547()//Position - 0x60C90
{
	STREAMING::REQUEST_MODEL(Local_2926.f_1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(Local_2926.f_1, 1);
	STREAMING::REQUEST_MODEL(Local_2966.f_1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(Local_2966.f_1, 1);
	STREAMING::REQUEST_ANIM_DICT("missfam4leadinoutmcs2");
	TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("fame1");
}

void func_548()//Position - 0x60CD0
{
	if (iLocal_4009)
	{
		GlobalFunc_4972(-219.6464f, -2037.822f, 26.6207f, 56.6757f, 0, 0);
	}
	STREAMING::REQUEST_MODEL(Local_2946.f_1);
	STREAMING::REQUEST_MODEL(Local_2986.f_1);
	STREAMING::REQUEST_MODEL(Local_3006[0 /*20*/].f_1);
	STREAMING::REQUEST_MODEL(Local_3006[1 /*20*/].f_1);
	STREAMING::REQUEST_MODEL(Local_3588.f_1);
	STREAMING::REQUEST_MODEL(Local_3817.f_2);
	if (GlobalFunc_7698())
	{
		if (GlobalFunc_7218(GlobalFunc_625(), 1))
		{
			Local_2698.f_1 = GlobalFunc_622();
		}
	}
	STREAMING::REQUEST_MODEL(Local_2698.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_2698.f_1, 1);
	STREAMING::REQUEST_MODEL(Local_2819[0 /*15*/].f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_2819[0 /*15*/].f_1, 1);
	STREAMING::REQUEST_MODEL(Local_2865[0 /*15*/].f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_2865[0 /*15*/].f_1, 1);
	STREAMING::REQUEST_MODEL(Local_2743.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_2743.f_1, 1);
	STREAMING::REQUEST_MODEL(joaat("sentinel"));
	STREAMING::REQUEST_MODEL(joaat("schafter2"));
	STREAMING::REQUEST_ANIM_DICT("missfam4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(501, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(502, "lkfamily4");
	TASK::REQUEST_WAYPOINT_RECORDING("family4_0");
	TASK::REQUEST_WAYPOINT_RECORDING("family4_1");
	TASK::REQUEST_WAYPOINT_RECORDING("family4_2");
	iLocal_4246 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-251.4008f, -2008.338f, 29.1458f, "v_stadium");
	INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_4246);
	TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("fame1");
	if (iLocal_4009)
	{
		GlobalFunc_4967(0, -1, 1);
	}
	while ((((((((((((((((((!STREAMING::HAS_MODEL_LOADED(Local_2946.f_1) || !STREAMING::HAS_MODEL_LOADED(Local_2986.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_3006[0 /*20*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_3006[1 /*20*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_3588.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_3817.f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_2698.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_2819[0 /*15*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_2865[0 /*15*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_2743.f_1)) || !STREAMING::HAS_MODEL_LOADED(joaat("sentinel"))) || !STREAMING::HAS_MODEL_LOADED(joaat("schafter2"))) || !STREAMING::HAS_ANIM_DICT_LOADED("missfam4")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(501, "lkfamily4")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(502, "lkfamily4")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("family4_0")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("family4_1")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("family4_2")) || !INTERIOR::IS_INTERIOR_READY(iLocal_4246))
	{
		SYSTEM::WAIT(0);
	}
	MISC::CLEAR_AREA(-219.6464f, -2037.822f, 26.6207f, 10000f, 1, 0, 0, 0);
	if (GlobalFunc_7698())
	{
		if (GlobalFunc_7218(GlobalFunc_625(), 1))
		{
			Local_2698 = GlobalFunc_9749(-219.6464f, -2037.822f, 26.6207f, 56.6757f);
			VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_2698, 0, 0);
		}
		else
		{
			GlobalFunc_9748(&Local_2698, 0, -219.6464f, -2037.822f, 26.6207f, 56.6757f, 1, 0);
			VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_2698, 0, 0);
		}
	}
	else
	{
		GlobalFunc_9748(&Local_2698, 0, -219.6464f, -2037.822f, 26.6207f, 56.6757f, 1, 0);
		VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_2698, 0, 0);
	}
	VEHICLE::SET_FORCE_HD_VEHICLE(Local_2698, 1);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_2698, 1, 1);
	if (GlobalFunc_8315() == 0)
	{
		PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2698, -1);
		GlobalFunc_173(&uLocal_4044, 0, PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
		func_79(&(uLocal_3865[2]), 2, Local_2698, 0, 0, 0, 0);
		func_543(uLocal_3865[2]);
		func_542(&(uLocal_3865[2]), 1);
		GlobalFunc_173(&uLocal_4044, 2, uLocal_3865[2], "trevor", 0, 1);
		if (!GlobalFunc_2569(uLocal_3865[2], 0))
		{
			WEAPON::GIVE_WEAPON_TO_PED(uLocal_3865[2], joaat("weapon_pistol"), 50, 0, 0);
		}
	}
	else
	{
		PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2698, -1);
		GlobalFunc_173(&uLocal_4044, 2, uLocal_3865[0], "trevor", 0, 1);
		func_79(&(uLocal_3865[0]), 0, Local_2698, 0, 0, 0, 0);
		func_543(uLocal_3865[0]);
		func_542(&(uLocal_3865[0]), 1);
		GlobalFunc_173(&uLocal_4044, 0, uLocal_3865[0], "michael", 0, 1);
		if (!GlobalFunc_2569(uLocal_3865[0], 0))
		{
			WEAPON::GIVE_WEAPON_TO_PED(uLocal_3865[0], joaat("weapon_pistol"), 50, 0, 0);
		}
	}
	while (!func_549())
	{
		SYSTEM::WAIT(0);
	}
	Local_2819[0 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_2819[0 /*15*/].f_1, Local_2819[0 /*15*/].f_3, Local_2819[0 /*15*/].f_6, 1, 1);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2819[0 /*15*/], 2);
	VEHICLE::SET_VEHICLE_COLOURS(Local_2819[0 /*15*/], 0, 0);
	Local_2865[0 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_2865[0 /*15*/].f_1, Local_2865[0 /*15*/].f_3, Local_2865[0 /*15*/].f_6, 1, 1);
	VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_2819[0 /*15*/], Local_2865[0 /*15*/], 1065353216);
	Local_3568 = PED::CREATE_PED_INSIDE_VEHICLE(Local_2819[0 /*15*/], 26, Local_3568.f_1, -1, 1, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3568.f_1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3568, 1);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2819[0 /*15*/], 501, "lkfamily4", 1);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2865[0 /*15*/], 502, "lkfamily4", 1);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2819[0 /*15*/], 1);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2865[0 /*15*/], 1);
	iLocal_3961 = 2;
	func_48(1);
	func_43();
	while (!ENTITY::DOES_ENTITY_EXIST(Local_3006[0 /*20*/]))
	{
		SYSTEM::WAIT(0);
		func_43();
	}
	if (!iLocal_4009)
	{
		STREAMING::LOAD_SCENE(-219.6464f, -2037.822f, 26.6207f);
	}
	iLocal_3949 = 5;
	iLocal_3947 = 2;
	func_473(1, 0, 0, 1);
	GlobalFunc_11046(1, "outside stadium", 0, 0, 0, 1);
	iLocal_2696 = 3;
}

int func_549()//Position - 0x6127C
{
	int iVar0;
	
	iVar0 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(Local_2713))
	{
		switch (iLocal_3989)
		{
			case 0:
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_2713.f_3, 1) < 550f)
				{
					STREAMING::REQUEST_MODEL(Local_2713.f_1);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_2713.f_1, 1);
					STREAMING::REQUEST_MODEL(Local_2728.f_1);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_2728.f_1, 1);
					STREAMING::REQUEST_MODEL(Local_2743.f_1);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_2743.f_1, 1);
					if ((STREAMING::HAS_MODEL_LOADED(Local_2713.f_1) && STREAMING::HAS_MODEL_LOADED(Local_2728.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_2743.f_1))
					{
						iLocal_3989++;
					}
				}
				break;
			
			case 1:
				STREAMING::REQUEST_MODEL(Local_2713.f_1);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_2713.f_1, 1);
				STREAMING::REQUEST_MODEL(Local_2728.f_1);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_2728.f_1, 1);
				STREAMING::REQUEST_MODEL(Local_2743.f_1);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_2743.f_1, 1);
				STREAMING::REQUEST_MODEL(joaat("sentinel"));
				STREAMING::REQUEST_MODEL(joaat("schafter2"));
				if ((((STREAMING::HAS_MODEL_LOADED(Local_2713.f_1) && STREAMING::HAS_MODEL_LOADED(Local_2728.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_2743.f_1)) && STREAMING::HAS_MODEL_LOADED(joaat("sentinel"))) && STREAMING::HAS_MODEL_LOADED(joaat("schafter2")))
				{
					MISC::CLEAR_AREA(Local_2713.f_3, 10f, 1, 0, 0, 0);
					Local_2713 = VEHICLE::CREATE_VEHICLE(Local_2713.f_1, Local_2713.f_3, Local_2713.f_6, 1, 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2713, 2);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_2713, false);
					VEHICLE::SET_VEHICLE_COLOURS(Local_2713, 0, 0);
					ENTITY::SET_ENTITY_HEALTH(Local_2713, 1500);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_2713, 1500f);
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_2713, 1500f);
					VEHICLE::SET_VEHICLE_STRONG(Local_2713, 1);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_2713, 1);
					MISC::CLEAR_AREA(Local_2728.f_3, 10f, 1, 0, 0, 0);
					Local_2728 = VEHICLE::CREATE_VEHICLE(Local_2728.f_1, Local_2728.f_3, Local_2728.f_6, 1, 1);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_2728, false);
					VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_2713, Local_2728, 1065353216);
					Local_2743 = VEHICLE::CREATE_VEHICLE(Local_2743.f_1, Local_2743.f_3, Local_2743.f_6, 1, 1);
					VEHICLE::SET_VEHICLE_STRONG(Local_2743, 1);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_2743, 1);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_2743, 1, 1);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_2743, false);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_2743, 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2743, 3);
					VEHICLE::SET_VEHICLE_COLOURS(Local_2743, 27, 0);
					VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_2743, 0);
					VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_2743, 0);
					iVar0 = 1;
					while (iVar0 <= (Local_2819 - 1))
					{
						MISC::CLEAR_AREA(Local_2819[iVar0 /*15*/].f_3, 10f, 1, 0, 0, 0);
						Local_2819[iVar0 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_2819[iVar0 /*15*/].f_1, Local_2819[iVar0 /*15*/].f_3, Local_2819[iVar0 /*15*/].f_6, 1, 1);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2819[iVar0 /*15*/], 2);
						VEHICLE::SET_VEHICLE_COLOURS(Local_2819[iVar0 /*15*/], (10 * iVar0), 0);
						Local_2865[iVar0 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_2865[iVar0 /*15*/].f_1, Local_2865[iVar0 /*15*/].f_3, Local_2865[iVar0 /*15*/].f_6, 1, 1);
						VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_2819[iVar0 /*15*/], Local_2865[iVar0 /*15*/], 1065353216);
						iVar0++;
					}
					MISC::CLEAR_AREA(-210.2187f, -2015.108f, 27.1112f, 4f, 1, 0, 0, 0);
					iLocal_4030 = VEHICLE::CREATE_VEHICLE(joaat("schafter2"), -209.6465f, -2015.481f, 26.6206f, 0f, 1, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_4030, 73.3412f);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_4030, 64, 0);
					MISC::CLEAR_AREA(-210.8506f, -2018.37f, 26.6207f, 4f, 1, 0, 0, 0);
					iLocal_4034 = VEHICLE::CREATE_VEHICLE(joaat("schafter2"), -210.8506f, -2018.37f, 26.6207f, 0f, 1, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_4034, 70.9631f);
					MISC::CLEAR_AREA(-206.0113f, -2055.33f, 26.6199f, 4f, 1, 0, 0, 0);
					iLocal_4035 = VEHICLE::CREATE_VEHICLE(joaat("sentinel"), -206.0113f, -2055.33f, 26.6199f, 0f, 1, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_4035, 53.3779f);
					MISC::CLEAR_AREA(-199.4559f, -2045.28f, 26.6199f, 4f, 1, 0, 0, 0);
					iLocal_4036 = VEHICLE::CREATE_VEHICLE(joaat("sentinel"), -199.4559f, -2045.28f, 26.6199f, 0f, 1, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_4036, 59.9934f);
					MISC::CLEAR_AREA(-218.2066f, -2070.032f, 26.6199f, 4f, 1, 0, 0, 0);
					iLocal_4037 = VEHICLE::CREATE_VEHICLE(joaat("sentinel"), -218.2066f, -2070.032f, 26.6199f, 0f, 1, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_4037, 45.2218f);
					iLocal_3989++;
					return 1;
				}
				break;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}



















































void func_600()//Position - 0x68146
{
	if (iLocal_4009)
	{
		GlobalFunc_4972(Local_2946.f_3, Local_2946.f_9, 1, 0);
	}
	STREAMING::REQUEST_MODEL(Local_2946.f_1);
	STREAMING::REQUEST_MODEL(Local_2986.f_1);
	if (GlobalFunc_7698())
	{
		Local_2698.f_1 = GlobalFunc_622();
	}
	STREAMING::REQUEST_MODEL(Local_2698.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_2698.f_1, 1);
	TASK::REQUEST_WAYPOINT_RECORDING("family4_0");
	TASK::REQUEST_WAYPOINT_RECORDING("family4_1");
	TASK::REQUEST_WAYPOINT_RECORDING("family4_2");
	if (iLocal_4009)
	{
		GlobalFunc_4967(0, -1, 1);
	}
	while (((((!STREAMING::HAS_MODEL_LOADED(Local_2946.f_1) || !STREAMING::HAS_MODEL_LOADED(Local_2986.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_2698.f_1)) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("family4_0")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("family4_1")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("family4_2"))
	{
		SYSTEM::WAIT(0);
	}
	if (!GlobalFunc_580(4, PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_5125(4, PLAYER::PLAYER_PED_ID());
	}
	MISC::CLEAR_AREA(Local_2698.f_3, 300f, 1, 0, 0, 0);
	GlobalFunc_8365(-800.31f, 184.8f, 72.72f, 300f, 0);
	GlobalFunc_6791(0, 0);
	if (GlobalFunc_7698())
	{
		Local_2698 = GlobalFunc_9749(Local_2698.f_3, Local_2698.f_6);
		VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_2698, 0, 0);
	}
	else
	{
		GlobalFunc_9748(&Local_2698, 0, Local_2698.f_3, Local_2698.f_6, 1, 0);
		VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_2698, 0, 0);
	}
	if (GlobalFunc_8315() == 0)
	{
	}
	else if (GlobalFunc_8315() == 2)
	{
	}
	switch (GlobalFunc_8315())
	{
		case 0:
			func_419(&(uLocal_3865[2]), 2, Local_2986.f_3, Local_2986.f_9, 0, 0, 0);
			func_543(uLocal_3865[2]);
			func_602(uLocal_3865[2], joaat("weapon_pistol"), 50, 0, 0);
			func_542(&(uLocal_3865[2]), 1);
			GlobalFunc_173(&uLocal_4044, 2, uLocal_3865[2], "trevor", 0, 1);
			while (!GlobalFunc_591(PLAYER::PLAYER_PED_ID()) || !GlobalFunc_591(uLocal_3865[2]))
			{
				SYSTEM::WAIT(0);
			}
			if (!PED::IS_PED_INJURED(uLocal_3865[2]))
			{
				PED::FORCE_PED_MOTION_STATE(uLocal_3865[2], -668482597, 0, 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_3865[2], 0, 0);
			}
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_2946.f_3, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_2946.f_9);
			PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(PLAYER::PLAYER_ID(), 1);
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
			GlobalFunc_173(&uLocal_4044, 0, PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
			break;
		
		case 2:
			func_419(&(uLocal_3865[0]), 0, Local_2986.f_3, Local_2986.f_9, 0, 0, 0);
			func_543(uLocal_3865[0]);
			func_602(uLocal_3865[0], joaat("weapon_pistol"), 50, 0, 0);
			func_542(&(uLocal_3865[0]), 1);
			GlobalFunc_173(&uLocal_4044, 0, uLocal_3865[0], "michael", 0, 1);
			if (!GlobalFunc_2569(uLocal_3865[0], 0))
			{
				WEAPON::GIVE_WEAPON_TO_PED(uLocal_3865[0], joaat("weapon_pistol"), 50, 0, 0);
			}
			while (!GlobalFunc_591(PLAYER::PLAYER_PED_ID()) || !GlobalFunc_591(uLocal_3865[0]))
			{
				SYSTEM::WAIT(0);
			}
			if (!PED::IS_PED_INJURED(uLocal_3865[0]))
			{
				PED::FORCE_PED_MOTION_STATE(uLocal_3865[0], -668482597, 0, 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_3865[0], 0, 0);
			}
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_2946.f_3, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_2946.f_9);
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
			GlobalFunc_173(&uLocal_4044, 2, PLAYER::PLAYER_PED_ID(), "trevor", 0, 1);
			break;
	}
	if (!iLocal_4009)
	{
		STREAMING::LOAD_SCENE(-819.9973f, 176.7442f, 70.6074f);
	}
	func_473(1, 0, 0, 1);
	GlobalFunc_690(&Local_4221, Local_2698);
	GlobalFunc_11046(0, "start of mission", 0, 0, 0, 1);
	iLocal_2696 = 3;
}


void func_602(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x68580
{
	if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, iParam1, 0))
	{
		WEAPON::GIVE_WEAPON_TO_PED(iParam0, iParam1, iParam2, iParam3, iParam4);
	}
	else if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iParam1) < 50)
	{
		WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), iParam1, iParam2);
	}
}

void func_603()//Position - 0x685C1
{
	int iVar0;
	
	iVar0 = 0;
	iLocal_3909 = 0;
	iLocal_3910 = 0;
	iLocal_3911 = 0;
	iLocal_3912 = 0;
	iLocal_3913 = 0;
	bLocal_3914 = false;
	iLocal_3915 = 0;
	iLocal_3916 = 0;
	iLocal_3917 = 0;
	bLocal_3918 = false;
	bLocal_3919 = false;
	iLocal_3920 = 0;
	iLocal_3921 = 0;
	iLocal_3922 = 0;
	iLocal_3924 = 0;
	bLocal_3925 = false;
	iLocal_3926 = 0;
	iLocal_3927 = 0;
	iLocal_3928 = 0;
	iLocal_3929 = 0;
	iLocal_3936 = 0;
	iLocal_3937 = 0;
	iLocal_3938 = 0;
	iLocal_3939 = 0;
	iLocal_3940 = 0;
	iLocal_3941 = 0;
	iLocal_3942 = 0;
	iLocal_3943 = 0;
	iLocal_3944 = 0;
	iLocal_3945 = 0;
	iLocal_3946 = 0;
	iLocal_3947 = 0;
	iLocal_3948 = 0;
	iLocal_3949 = 0;
	iLocal_3951 = 0;
	iLocal_3953 = 0;
	iLocal_3954 = 0;
	iLocal_3955 = 0;
	iLocal_3956 = 0;
	iLocal_3957 = 0;
	iLocal_3958 = 0;
	iLocal_3959 = 0;
	iLocal_3960 = 0;
	iLocal_3961 = 0;
	iLocal_3962 = 0;
	iLocal_3974 = 0;
	iLocal_3975 = 0;
	iLocal_3976 = 0;
	iLocal_3977 = 0;
	iLocal_3978 = 0;
	iLocal_3979 = 0;
	iLocal_3980 = 0;
	iLocal_3981 = 0;
	iLocal_3982 = 0;
	iLocal_3983 = 0;
	iLocal_3984 = 0;
	iLocal_3985 = 0;
	iLocal_3986 = 0;
	iLocal_3987 = 0;
	iLocal_3988 = 0;
	iLocal_3989 = 0;
	iLocal_3990 = 0;
	iLocal_3991 = 0;
	fLocal_3997 = 1f;
	Local_2698.f_1 = GlobalFunc_4931(0, 0);
	Local_2698.f_3 = { -823.5428f, 181.3025f, 70.6662f };
	Local_2698.f_6 = 142.815f;
	Local_2911.f_1 = GlobalFunc_5112(17, 0);
	Local_2911.f_3 = { -814.9363f, 159.0206f, 70.1653f };
	Local_2911.f_6 = 111.478f;
	Local_2966.f_1 = GlobalFunc_4946(15);
	Local_2966.f_3 = { -235.6421f, -2002.962f, 23.7019f };
	Local_2966.f_9 = 346.8777f;
	Local_2986.f_1 = GlobalFunc_4917(2);
	Local_2986.f_3 = { -821.6787f, 177.1601f, 70.4371f };
	Local_2986.f_9 = 60.5512f;
	Local_2926.f_1 = GlobalFunc_4946(27);
	Local_2926.f_3 = { -251.9397f, -2015.833f, 29.1458f };
	Local_2926.f_9 = 179.1901f;
	Local_2946.f_1 = GlobalFunc_4917(0);
	Local_2946.f_3 = { -818.2477f, 177.6348f, 71.2278f };
	Local_2946.f_9 = 55f;
	Local_3588.f_1 = joaat("a_m_y_bevhills_02");
	Local_3588.f_3 = { -225.6118f, -2036.628f, 26.7552f };
	Local_3588.f_9 = 234.7701f;
	Local_3588.f_10 = 200;
	Local_3588.f_15 = joaat("weapon_unarmed");
	Local_3588.f_14 = 0;
	Local_3817.f_2 = joaat("p_cs_clipboard");
	Local_3527[0 /*20*/].f_3 = { -238.6681f, -1999.346f, 23.6856f };
	Local_3527[0 /*20*/].f_9 = 228.3978f;
	Local_3527[0 /*20*/].f_1 = joaat("a_m_y_bevhills_02");
	Local_3527[0 /*20*/].f_10 = 200;
	Local_3527[0 /*20*/].f_15 = joaat("weapon_unarmed");
	Local_3527[1 /*20*/].f_3 = { -239.6867f, -2000.659f, 23.6857f };
	Local_3527[1 /*20*/].f_9 = 291.412f;
	Local_3527[1 /*20*/].f_1 = joaat("a_m_y_bevhills_02");
	Local_3527[1 /*20*/].f_10 = 200;
	Local_3527[1 /*20*/].f_15 = joaat("weapon_unarmed");
	Local_3568.f_1 = joaat("a_m_y_hipster_03");
	Local_3568.f_14 = 0;
	Local_3628.f_1 = joaat("a_m_y_hipster_03");
	Local_3628.f_14 = 0;
	Local_3769.f_2 = joaat("prop_v_bmike_01");
	Local_3793.f_2 = joaat("prop_v_cam_01");
	Local_2743.f_3 = { -228.9739f, -2048.902f, 26.6199f };
	Local_2743.f_6 = 237.5635f;
	Local_2743.f_1 = joaat("dilettante");
	Local_2713.f_3 = { -236.062f, -2061.147f, 26.6199f };
	Local_2713.f_6 = 312.1216f;
	Local_2713.f_1 = joaat("phantom");
	Local_2713.f_9 = 1500;
	Local_2713.f_10 = 1500f;
	Local_2713.f_11 = 1500f;
	Local_2728.f_3 = { -236.062f, -2061.147f, 36.7554f };
	Local_2728.f_6 = 312.1205f;
	Local_2728.f_1 = joaat("tvtrailer");
	Local_2728.f_9 = 1500;
	Local_2728.f_10 = 1500f;
	Local_2728.f_11 = 1500f;
	Local_2819[0 /*15*/].f_3 = { -201.8963f, -2032.448f, 26.6203f };
	Local_2819[0 /*15*/].f_6 = 337.8227f;
	Local_2819[0 /*15*/].f_1 = joaat("phantom");
	Local_2819[1 /*15*/].f_3 = { -182.2236f, -2037.111f, 26.6207f };
	Local_2819[1 /*15*/].f_6 = 159.8179f;
	Local_2819[1 /*15*/].f_1 = joaat("phantom");
	Local_2819[2 /*15*/].f_3 = { -194.6085f, -2059.626f, 26.6199f };
	Local_2819[2 /*15*/].f_6 = 323.6319f;
	Local_2819[2 /*15*/].f_1 = joaat("phantom");
	Local_2865[0 /*15*/].f_3 = { -201.8963f, -2032.448f, 26.6203f };
	Local_2865[0 /*15*/].f_6 = 337.8227f;
	Local_2865[0 /*15*/].f_1 = joaat("tvtrailer");
	Local_2865[1 /*15*/].f_3 = { -182.2236f, -2037.111f, 26.6207f };
	Local_2865[1 /*15*/].f_6 = 159.8179f;
	Local_2865[1 /*15*/].f_1 = joaat("tvtrailer");
	Local_2865[2 /*15*/].f_3 = { -194.6085f, -2059.626f, 26.6199f };
	Local_2865[2 /*15*/].f_6 = 323.6319f;
	Local_2865[2 /*15*/].f_1 = joaat("tvtrailer");
	Local_3006[0 /*20*/].f_3 = { -251.9136f, -2009.557f, 29.7709f };
	Local_3006[0 /*20*/].f_9 = 7.232f;
	Local_3006[0 /*20*/].f_1 = joaat("a_m_y_hipster_03");
	Local_3006[0 /*20*/].f_10 = 200;
	StringCopy(&(Local_3006[0 /*20*/].f_16), "ambient 0", 16);
	Local_3006[1 /*20*/].f_3 = { -253.3561f, -2009.177f, 29.61563f };
	Local_3006[1 /*20*/].f_9 = 157.1295f;
	Local_3006[1 /*20*/].f_1 = joaat("a_f_y_hipster_03");
	Local_3006[1 /*20*/].f_10 = 200;
	StringCopy(&(Local_3006[1 /*20*/].f_16), "ambient 1", 16);
	Local_3006[2 /*20*/].f_3 = { -254.0654f, -2008.937f, 29.61491f };
	Local_3006[2 /*20*/].f_9 = 346.0804f;
	Local_3006[2 /*20*/].f_1 = joaat("a_m_y_hipster_03");
	Local_3006[2 /*20*/].f_10 = 200;
	StringCopy(&(Local_3006[2 /*20*/].f_16), "ambient 2", 16);
	Local_3006[3 /*20*/].f_3 = { -252.6981f, -2011.397f, 29.61507f };
	Local_3006[3 /*20*/].f_9 = 190.848f;
	Local_3006[3 /*20*/].f_1 = joaat("a_f_y_hipster_03");
	Local_3006[3 /*20*/].f_10 = 200;
	StringCopy(&(Local_3006[3 /*20*/].f_16), "ambient 3", 16);
	Local_3006[4 /*20*/].f_3 = { -254.0823f, -2010.932f, 29.61472f };
	Local_3006[4 /*20*/].f_9 = 137.1725f;
	Local_3006[4 /*20*/].f_1 = joaat("a_m_y_hipster_03");
	Local_3006[4 /*20*/].f_10 = 200;
	StringCopy(&(Local_3006[4 /*20*/].f_16), "ambient 4", 16);
	Local_3006[5 /*20*/].f_3 = { -256.9932f, -2011.696f, 29.61485f };
	Local_3006[5 /*20*/].f_9 = 25.3523f;
	Local_3006[5 /*20*/].f_1 = joaat("a_m_y_hipster_03");
	Local_3006[5 /*20*/].f_10 = 200;
	Local_3006[5 /*20*/].f_6 = { -264.8563f, -2026.969f, 29.1457f };
	StringCopy(&(Local_3006[5 /*20*/].f_16), "ambient 5", 16);
	Local_3006[6 /*20*/].f_3 = { -254.7875f, -2015.167f, 29.61569f };
	Local_3006[6 /*20*/].f_9 = 55.1177f;
	Local_3006[6 /*20*/].f_1 = joaat("a_f_y_hipster_03");
	Local_3006[6 /*20*/].f_10 = 200;
	Local_3006[6 /*20*/].f_6 = { -267.6687f, -2026.724f, 29.1457f };
	StringCopy(&(Local_3006[6 /*20*/].f_16), "ambient 6", 16);
	Local_3006[7 /*20*/].f_3 = { -256.7811f, -2016.89f, 29.61457f };
	Local_3006[7 /*20*/].f_9 = 61.2313f;
	Local_3006[7 /*20*/].f_1 = joaat("a_f_y_hipster_03");
	Local_3006[7 /*20*/].f_6 = { -262.918f, -2015.773f, 29.1457f };
	Local_3006[7 /*20*/].f_10 = 200;
	StringCopy(&(Local_3006[7 /*20*/].f_16), "ambient 7", 16);
	Local_3006[8 /*20*/].f_3 = { -256.9193f, -2019.323f, 29.61442f };
	Local_3006[8 /*20*/].f_9 = 53.501f;
	Local_3006[8 /*20*/].f_1 = joaat("a_f_y_hipster_03");
	Local_3006[8 /*20*/].f_6 = { -261.5929f, -2013.748f, 29.1457f };
	Local_3006[8 /*20*/].f_10 = 200;
	StringCopy(&(Local_3006[8 /*20*/].f_16), "ambient 8", 16);
	Local_3006[9 /*20*/].f_3 = { -261.9f, -2012.4f, 30.4f };
	Local_3006[9 /*20*/].f_9 = 53.501f;
	Local_3006[9 /*20*/].f_1 = joaat("a_m_y_hipster_03");
	Local_3006[9 /*20*/].f_6 = { -261.5929f, -2013.748f, 29.1457f };
	Local_3006[9 /*20*/].f_10 = 200;
	StringCopy(&(Local_3006[9 /*20*/].f_16), "ambient 9", 16);
	Local_3006[10 /*20*/].f_3 = { -253.3907f, -2011.148f, 29.6145f };
	Local_3006[10 /*20*/].f_9 = 53.501f;
	Local_3006[10 /*20*/].f_1 = joaat("a_m_y_hipster_03");
	Local_3006[10 /*20*/].f_6 = { -261.5929f, -2013.748f, 29.1457f };
	Local_3006[10 /*20*/].f_10 = 200;
	StringCopy(&(Local_3006[10 /*20*/].f_16), "ambient 10", 16);
	Local_3006[11 /*20*/].f_3 = { -253.1889f, -2013.814f, 29.61418f };
	Local_3006[11 /*20*/].f_9 = 53.501f;
	Local_3006[11 /*20*/].f_1 = joaat("a_f_y_hipster_03");
	Local_3006[11 /*20*/].f_6 = { -261.5929f, -2013.748f, 29.1457f };
	Local_3006[11 /*20*/].f_10 = 200;
	StringCopy(&(Local_3006[11 /*20*/].f_16), "ambient 11", 16);
	Local_3006[12 /*20*/].f_3 = { -254.5197f, -2013.185f, 29.61651f };
	Local_3006[12 /*20*/].f_9 = 53.501f;
	Local_3006[12 /*20*/].f_1 = joaat("a_f_y_hipster_03");
	Local_3006[12 /*20*/].f_6 = { -261.5929f, -2013.748f, 29.1457f };
	Local_3006[12 /*20*/].f_10 = 200;
	StringCopy(&(Local_3006[12 /*20*/].f_16), "ambient 12", 16);
	Local_3006[13 /*20*/].f_3 = { -255.7113f, -2012.375f, 29.61684f };
	Local_3006[13 /*20*/].f_9 = 53.501f;
	Local_3006[13 /*20*/].f_1 = joaat("a_m_y_hipster_03");
	Local_3006[13 /*20*/].f_6 = { -261.5929f, -2013.748f, 29.1457f };
	Local_3006[13 /*20*/].f_10 = 200;
	StringCopy(&(Local_3006[13 /*20*/].f_16), "ambient 13", 16);
	Local_3006[14 /*20*/].f_3 = { -256.0377f, -2014.472f, 29.61486f };
	Local_3006[14 /*20*/].f_9 = 53.501f;
	Local_3006[14 /*20*/].f_1 = joaat("a_m_y_hipster_03");
	Local_3006[14 /*20*/].f_6 = { -261.5929f, -2013.748f, 29.1457f };
	Local_3006[14 /*20*/].f_10 = 200;
	StringCopy(&(Local_3006[14 /*20*/].f_16), "ambient 14", 16);
	Local_3006[15 /*20*/].f_3 = { -258.0088f, -2018.375f, 29.61538f };
	Local_3006[15 /*20*/].f_9 = 53.501f;
	Local_3006[15 /*20*/].f_1 = joaat("a_f_y_hipster_03");
	Local_3006[15 /*20*/].f_6 = { -261.5929f, -2013.748f, 29.1457f };
	Local_3006[15 /*20*/].f_10 = 200;
	StringCopy(&(Local_3006[15 /*20*/].f_16), "ambient 15", 16);
	Local_3006[16 /*20*/].f_3 = { -258.5865f, -2017.89f, 29.61535f };
	Local_3006[16 /*20*/].f_9 = 53.501f;
	Local_3006[16 /*20*/].f_1 = joaat("a_m_y_hipster_03");
	Local_3006[16 /*20*/].f_6 = { -261.5929f, -2013.748f, 29.1457f };
	Local_3006[16 /*20*/].f_10 = 200;
	StringCopy(&(Local_3006[16 /*20*/].f_16), "ambient 16", 16);
	Local_3006[17 /*20*/].f_3 = { -259.0728f, -2017.372f, 29.61586f };
	Local_3006[17 /*20*/].f_9 = 53.501f;
	Local_3006[17 /*20*/].f_1 = joaat("a_f_y_hipster_03");
	Local_3006[17 /*20*/].f_6 = { -261.5929f, -2013.748f, 29.1457f };
	Local_3006[17 /*20*/].f_10 = 200;
	StringCopy(&(Local_3006[17 /*20*/].f_16), "ambient 17", 16);
	Local_3006[18 /*20*/].f_3 = { -259.3856f, -2021.036f, 29.61567f };
	Local_3006[18 /*20*/].f_9 = 53.501f;
	Local_3006[18 /*20*/].f_1 = joaat("a_m_y_hipster_03");
	Local_3006[18 /*20*/].f_6 = { -261.5929f, -2013.748f, 29.1457f };
	Local_3006[18 /*20*/].f_10 = 200;
	StringCopy(&(Local_3006[18 /*20*/].f_16), "ambient 18", 16);
	Local_3006[19 /*20*/].f_3 = { -260.5004f, -2020.141f, 29.61454f };
	Local_3006[19 /*20*/].f_9 = 53.501f;
	Local_3006[19 /*20*/].f_1 = joaat("a_m_y_hipster_03");
	Local_3006[19 /*20*/].f_6 = { -261.5929f, -2013.748f, 29.1457f };
	Local_3006[19 /*20*/].f_10 = 200;
	StringCopy(&(Local_3006[19 /*20*/].f_16), "ambient 19", 16);
	Local_3006[20 /*20*/].f_3 = { -260.6187f, -2022.499f, 29.61511f };
	Local_3006[20 /*20*/].f_9 = 53.501f;
	Local_3006[20 /*20*/].f_1 = joaat("a_m_y_hipster_03");
	Local_3006[20 /*20*/].f_6 = { -261.5929f, -2013.748f, 29.1457f };
	Local_3006[20 /*20*/].f_10 = 200;
	StringCopy(&(Local_3006[20 /*20*/].f_16), "ambient 20", 16);
	Local_3006[21 /*20*/].f_3 = { -261.7297f, -2021.567f, 29.61508f };
	Local_3006[21 /*20*/].f_9 = 53.501f;
	Local_3006[21 /*20*/].f_1 = joaat("a_f_y_hipster_03");
	Local_3006[21 /*20*/].f_6 = { -261.5929f, -2013.748f, 29.1457f };
	Local_3006[21 /*20*/].f_10 = 200;
	StringCopy(&(Local_3006[21 /*20*/].f_16), "ambient 21", 16);
	Local_3006[22 /*20*/].f_3 = { -262.8053f, -2020.648f, 29.61561f };
	Local_3006[22 /*20*/].f_9 = 53.501f;
	Local_3006[22 /*20*/].f_1 = joaat("a_m_y_hipster_03");
	Local_3006[22 /*20*/].f_6 = { -261.5929f, -2013.748f, 29.1457f };
	Local_3006[22 /*20*/].f_10 = 200;
	StringCopy(&(Local_3006[22 /*20*/].f_16), "ambient 22", 16);
	Local_3006[23 /*20*/].f_3 = { -261.8285f, -2023.949f, 29.61547f };
	Local_3006[23 /*20*/].f_9 = 53.501f;
	Local_3006[23 /*20*/].f_1 = joaat("a_f_y_hipster_03");
	Local_3006[23 /*20*/].f_6 = { -261.5929f, -2013.748f, 29.1457f };
	Local_3006[23 /*20*/].f_10 = 200;
	StringCopy(&(Local_3006[23 /*20*/].f_16), "ambient 23", 16);
	Local_3006[24 /*20*/].f_3 = { -262.9226f, -2023.054f, 29.61676f };
	Local_3006[24 /*20*/].f_9 = 53.501f;
	Local_3006[24 /*20*/].f_1 = joaat("a_m_y_hipster_03");
	Local_3006[24 /*20*/].f_6 = { -261.5929f, -2013.748f, 29.1457f };
	Local_3006[24 /*20*/].f_10 = 200;
	StringCopy(&(Local_3006[24 /*20*/].f_16), "ambient 24", 16);
	Local_3006[25 /*20*/].f_3 = { -263.0445f, -2025.401f, 29.61566f };
	Local_3006[25 /*20*/].f_9 = 53.501f;
	Local_3006[25 /*20*/].f_1 = joaat("a_m_y_hipster_03");
	Local_3006[25 /*20*/].f_6 = { -261.5929f, -2013.748f, 29.1457f };
	Local_3006[25 /*20*/].f_10 = 200;
	StringCopy(&(Local_3006[25 /*20*/].f_16), "ambient 25", 16);
	Local_3608.f_1 = joaat("s_m_y_doorman_01");
	Local_2758[0 /*15*/].f_3 = { 473.57f, -1204.89f, 29.3429f };
	Local_2758[0 /*15*/].f_6 = 270f;
	Local_2758[0 /*15*/].f_1 = joaat("metrotrain");
	Local_2758[0 /*15*/].f_13 = 4;
	Local_2758[1 /*15*/].f_3 = { 497.61f, -1206f, 29f };
	Local_2758[1 /*15*/].f_6 = 322f;
	Local_2758[1 /*15*/].f_1 = joaat("tankercar");
	Local_2758[2 /*15*/].f_3 = { 440.77f, -1201.98f, 33f };
	Local_2758[2 /*15*/].f_1 = joaat("freight");
	Local_2804.f_1 = joaat("biff");
	Local_2804.f_3 = { 497.5658f, -1094.848f, 28.0248f };
	Local_2804.f_6 = 179.3035f;
	Local_2804.f_13 = 7;
	Local_3648[0 /*24*/].f_3 = { 458.3f, -1084.37f, 29.94f };
	Local_3648[0 /*24*/].f_2 = joaat("prop_gascyl_01a");
	Local_3648[0 /*24*/].f_6 = { 0f, -2.53f, 0.66f };
	Local_3648[0 /*24*/].f_15 = { 0f, 0f, 90f };
	Local_3648[0 /*24*/].f_19 = 194000f;
	Local_3648[1 /*24*/].f_3 = { 458.3f, -1084.37f, 30.94f };
	Local_3648[1 /*24*/].f_2 = joaat("prop_gascyl_01a");
	Local_3648[1 /*24*/].f_6 = { 0f, -1.74f, 0.66f };
	Local_3648[1 /*24*/].f_15 = { 0f, 0f, 90f };
	Local_3648[1 /*24*/].f_19 = 19700f;
	Local_3648[2 /*24*/].f_3 = { 458.3f, -1084.37f, 31.94f };
	Local_3648[2 /*24*/].f_2 = joaat("prop_gascyl_01a");
	Local_3648[2 /*24*/].f_6 = { 0f, -0.91f, 0.66f };
	Local_3648[2 /*24*/].f_15 = { 0f, 0f, 90f };
	Local_3648[2 /*24*/].f_19 = 20000f;
	Local_3648[3 /*24*/].f_3 = { 458.3f, -1084.37f, 32.94f };
	Local_3648[3 /*24*/].f_2 = joaat("prop_gascyl_01a");
	Local_3648[3 /*24*/].f_6 = { 0f, -0.1f, 0.66f };
	Local_3648[3 /*24*/].f_15 = { 0f, 0f, 90f };
	Local_3648[3 /*24*/].f_19 = 20300f;
	Local_3648[4 /*24*/].f_3 = { 458.3f, -1084.37f, 33.94f };
	Local_3648[4 /*24*/].f_2 = joaat("prop_gascyl_01a");
	Local_3648[4 /*24*/].f_6 = { 0f, 0.72f, 0.66f };
	Local_3648[4 /*24*/].f_15 = { 0f, 0f, 90f };
	Local_3648[4 /*24*/].f_19 = 20600f;
	Local_3841.f_2 = joaat("p_laz_j02_s");
	iVar0 = 0;
	while (iVar0 <= (Local_3648 - 1))
	{
		iLocal_3930[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_2669 - 1))
	{
		iLocal_2669[iVar0] = 5;
		Local_3006[iVar0 /*20*/].f_14 = 0;
		iVar0++;
	}
}



void func_606()//Position - 0x69C01
{
	int iVar0;
	
	iVar0 = 0;
	switch (iLocal_3962)
	{
		case 0:
			STREAMING::REQUEST_MODEL(Local_2743.f_1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_2743.f_1, 1);
			STREAMING::REQUEST_MODEL(joaat("sentinel"));
			STREAMING::REQUEST_MODEL(joaat("schafter2"));
			STREAMING::REQUEST_MODEL(joaat("manana"));
			func_510();
			if ((((STREAMING::HAS_MODEL_LOADED(Local_2743.f_1) && STREAMING::HAS_MODEL_LOADED(joaat("sentinel"))) && STREAMING::HAS_MODEL_LOADED(joaat("schafter2"))) && STREAMING::HAS_MODEL_LOADED(joaat("manana"))) && func_509())
			{
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
				if (!ENTITY::DOES_ENTITY_EXIST(Local_2743))
				{
					Local_2743 = VEHICLE::CREATE_VEHICLE(Local_2743.f_1, Local_2743.f_3, Local_2743.f_6, 1, 1);
					VEHICLE::SET_VEHICLE_STRONG(Local_2743, 1);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_2743, 1);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_2743, 1, 1);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_2743, false);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_2743, 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2743, 3);
					VEHICLE::SET_VEHICLE_COLOURS(Local_2743, 27, 0);
					VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_2743, 0);
					VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_2743, 0);
					ENTITY::SET_ENTITY_COLLISION(Local_2743, 0, 0);
					ENTITY::SET_ENTITY_VISIBLE(Local_2743, 0);
					Local_2743.f_2 = GlobalFunc_6783(Local_2743, 0, 0);
					func_508("lkfamily4", 1, 1, 1);
					iLocal_41 = 1;
					iLocal_46 = 1;
					iLocal_55 = 1;
					iLocal_53 = 1;
					func_506(1, 3, 11);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2743, 1, "lkfamily4", 1);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2743, 0))
				{
					VEHICLE::SET_VEHICLE_FIXED(Local_2743);
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_3865[0]))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_3865[0]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2946.f_1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_2713))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_2713);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2713.f_1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_2728))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_2728);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2728.f_1);
				}
				iVar0 = 0;
				while (iVar0 <= (Local_2819 - 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_2819[iVar0 /*15*/]))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_2819[iVar0 /*15*/]));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2819[iVar0 /*15*/].f_1);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_2865[iVar0 /*15*/]))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_2865[iVar0 /*15*/]));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2865[iVar0 /*15*/].f_1);
					}
					iVar0++;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_4277))
				{
					iLocal_4277 = VEHICLE::CREATE_VEHICLE(Local_2743.f_1, Local_2743.f_3, Local_2743.f_6, 1, 1);
					ENTITY::SET_ENTITY_PROOFS(iLocal_4277, 1, 1, 1, 1, 1, 0, 0, 0);
					VEHICLE::SET_VEHICLE_STRONG(iLocal_4277, 1);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_4277, 1);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_4277, 12, 0);
					VEHICLE::MODIFY_VEHICLE_TOP_SPEED(iLocal_4277, -20f);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_4277, 0))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_4277, Local_2743.f_3, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_4277, Local_2743.f_6);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_4277);
					VEHICLE::SET_VEHICLE_FIXED(iLocal_4277);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_4277, -1);
					fLocal_3996 = -20f;
				}
				iLocal_3962++;
			}
			break;
		
		case 1:
			HUD::SET_TEXT_SCALE(0f, 1.5f);
			HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
			HUD::SET_TEXT_CENTRE(0);
			HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
			HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
			GlobalFunc_1321(0.5f, 0.2f, "NUMBER", SYSTEM::ROUND(ENTITY::GET_ENTITY_SPEED(iLocal_4277)), 0);
			if (PAD::IS_CONTROL_PRESSED(2, 223))
			{
				if (fLocal_3996 < 0f)
				{
					fLocal_3996 = (fLocal_3996 + (MISC::GET_FRAME_TIME() * 2f));
					if (fLocal_3996 >= 0f)
					{
						fLocal_3996 = 0f;
					}
					VEHICLE::MODIFY_VEHICLE_TOP_SPEED(iLocal_4277, fLocal_3996);
				}
			}
			else if (fLocal_3996 > -20f)
			{
				fLocal_3996 = (fLocal_3996 - MISC::GET_FRAME_TIME());
				if (fLocal_3996 <= -20f)
				{
					fLocal_3996 = -20f;
				}
				VEHICLE::MODIFY_VEHICLE_TOP_SPEED(iLocal_4277, fLocal_3996);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_4277))
			{
				VEHICLE::SET_VEHICLE_STRONG(iLocal_4277, 1);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_4277, 1);
				VEHICLE::SET_VEHICLE_FIXED(iLocal_4277);
				ENTITY::SET_ENTITY_HEALTH(iLocal_4277, 10000);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_4277, 10000f);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_4277, 10000f);
				ENTITY::SET_ENTITY_PROOFS(iLocal_4277, 1, 1, 1, 1, 1, 0, 0, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2743, 0))
			{
				VEHICLE::SET_VEHICLE_FIXED(Local_2743);
				func_478(Local_2743, 1f);
				func_608();
				func_607();
			}
			break;
		
		case 2:
			STREAMING::REQUEST_MODEL(Local_2743.f_1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_2743.f_1, 1);
			STREAMING::REQUEST_MODEL(joaat("sentinel"));
			STREAMING::REQUEST_MODEL(joaat("schafter2"));
			STREAMING::REQUEST_MODEL(joaat("manana"));
			func_510();
			VEHICLE::REQUEST_VEHICLE_RECORDING(1, "lkfamily4b");
			if (((((STREAMING::HAS_MODEL_LOADED(Local_2743.f_1) && STREAMING::HAS_MODEL_LOADED(joaat("sentinel"))) && STREAMING::HAS_MODEL_LOADED(joaat("schafter2"))) && STREAMING::HAS_MODEL_LOADED(joaat("manana"))) && func_509()) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "lkfamily4b"))
			{
				Local_2743 = VEHICLE::CREATE_VEHICLE(Local_2743.f_1, Local_2743.f_3, Local_2743.f_6, 1, 1);
				VEHICLE::SET_VEHICLE_STRONG(Local_2743, 1);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_2743, 1);
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_2743, 1, 1);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_2743, false);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_2743, 1);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2743, 3);
				VEHICLE::SET_VEHICLE_COLOURS(Local_2743, 27, 0);
				VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_2743, 0);
				VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_2743, 0);
				ENTITY::SET_ENTITY_COLLISION(Local_2743, 0, 0);
				ENTITY::SET_ENTITY_VISIBLE(Local_2743, 1);
				Local_2743.f_2 = GlobalFunc_6783(Local_2743, 0, 0);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2743, 1, "lkfamily4b", 1);
				iLocal_4277 = VEHICLE::CREATE_VEHICLE(Local_2743.f_1, Local_2743.f_3, Local_2743.f_6, 1, 1);
				ENTITY::SET_ENTITY_PROOFS(iLocal_4277, 1, 1, 1, 1, 1, 0, 0, 0);
				VEHICLE::SET_VEHICLE_STRONG(iLocal_4277, 1);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_4277, 1);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_4277, 12, 0);
				VEHICLE::MODIFY_VEHICLE_TOP_SPEED(iLocal_4277, -25f);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_4277, 1, "lkfamily4", 1);
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_3865[0]))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_3865[0]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2946.f_1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_2713))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_2713);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2713.f_1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_2728))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_2728);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2728.f_1);
				}
				iVar0 = 0;
				while (iVar0 <= (Local_2819 - 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_2819[iVar0 /*15*/]))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_2819[iVar0 /*15*/]));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2819[iVar0 /*15*/].f_1);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_2865[iVar0 /*15*/]))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_2865[iVar0 /*15*/]));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2865[iVar0 /*15*/].f_1);
					}
					iVar0++;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_4277))
				{
					iLocal_4277 = VEHICLE::CREATE_VEHICLE(Local_2743.f_1, Local_2743.f_3, Local_2743.f_6, 1, 1);
					ENTITY::SET_ENTITY_PROOFS(iLocal_4277, 1, 1, 1, 1, 1, 0, 0, 0);
					VEHICLE::SET_VEHICLE_STRONG(iLocal_4277, 1);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_4277, 1);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_4277, 12, 0);
					VEHICLE::MODIFY_VEHICLE_TOP_SPEED(iLocal_4277, -25f);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_4277, 0))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_4277, Local_2743.f_3, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_4277, Local_2743.f_6);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_4277);
					VEHICLE::SET_VEHICLE_FIXED(iLocal_4277);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_4277, -1);
				}
				iLocal_3962++;
			}
			break;
		
		case 3:
			break;
		
		case 4:
			STREAMING::REQUEST_MODEL(Local_2743.f_1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_2743.f_1, 1);
			STREAMING::REQUEST_MODEL(joaat("sentinel"));
			STREAMING::REQUEST_MODEL(joaat("schafter2"));
			STREAMING::REQUEST_MODEL(joaat("manana"));
			func_510();
			if ((((STREAMING::HAS_MODEL_LOADED(Local_2743.f_1) && STREAMING::HAS_MODEL_LOADED(joaat("sentinel"))) && STREAMING::HAS_MODEL_LOADED(joaat("schafter2"))) && STREAMING::HAS_MODEL_LOADED(joaat("manana"))) && func_509())
			{
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
				if (!ENTITY::DOES_ENTITY_EXIST(Local_2743))
				{
					Local_2743 = VEHICLE::CREATE_VEHICLE(Local_2743.f_1, Local_2743.f_3, Local_2743.f_6, 1, 1);
					VEHICLE::SET_VEHICLE_STRONG(Local_2743, 1);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_2743, 1);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_2743, 1, 1);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_2743, false);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_2743, 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2743, 3);
					VEHICLE::SET_VEHICLE_COLOURS(Local_2743, 27, 0);
					VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_2743, 0);
					VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_2743, 0);
					ENTITY::SET_ENTITY_COLLISION(Local_2743, 0, 0);
					ENTITY::SET_ENTITY_VISIBLE(Local_2743, 1);
					Local_2743.f_2 = GlobalFunc_6783(Local_2743, 0, 0);
					func_508("lkfamily4", 1, 1, 1);
					func_507();
					fLocal_1078 = 200f;
					iLocal_41 = 1;
					iLocal_46 = 1;
					iLocal_55 = 1;
					iLocal_53 = 1;
					func_506(1, 3, 11);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2743, 1, "lkfamily4", 1);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2743, 0))
				{
					VEHICLE::SET_VEHICLE_FIXED(Local_2743);
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_3865[0]))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_3865[0]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2946.f_1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_2713))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_2713);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2713.f_1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_2728))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_2728);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2728.f_1);
				}
				iVar0 = 0;
				while (iVar0 <= (Local_2819 - 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_2819[iVar0 /*15*/]))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_2819[iVar0 /*15*/]));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2819[iVar0 /*15*/].f_1);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_2865[iVar0 /*15*/]))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_2865[iVar0 /*15*/]));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2865[iVar0 /*15*/].f_1);
					}
					iVar0++;
				}
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -234.7623f, -2046.005f, 26.7555f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 216.8192f);
				iLocal_3962++;
			}
			break;
		
		case 5:
			func_478(Local_2743, 1f);
			break;
	}
}

void func_607()//Position - 0x6A546
{
	switch (iLocal_3942)
	{
		case 0:
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2743) > 142000f)
			{
				STREAMING::REQUEST_MODEL(joaat("towtruck"));
				STREAMING::REQUEST_MODEL(joaat("schafter2"));
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), 1);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("schafter2"), 1);
				if (STREAMING::HAS_MODEL_LOADED(joaat("towtruck")) && STREAMING::HAS_MODEL_LOADED(joaat("schafter2")))
				{
					iLocal_4031[0] = VEHICLE::CREATE_VEHICLE(joaat("towtruck"), 690.676f, -380.5773f, 39.6706f, 301.5845f, 1, 1);
					iLocal_4031[1] = VEHICLE::CREATE_VEHICLE(joaat("schafter2"), 685.2643f, -384.7363f, 39.7185f, 312.2964f, 1, 1);
					iLocal_3942++;
				}
			}
			break;
		
		case 1:
			break;
	}
}

void func_608()//Position - 0x6A60A
{
	int iVar0;
	
	iVar0 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(Local_2728))
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_2509 - 1))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2509[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2509[iVar0]))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_2728, iLocal_2509[iVar0]))
					{
						VEHICLE::SET_PLAYBACK_TO_USE_AI(iLocal_2509[iVar0], 786603);
						GlobalFunc_2911(iLocal_2509[iVar0]);
					}
				}
			}
			iVar0++;
		}
	}
}


void func_610()//Position - 0x6A69B
{
	switch (iLocal_3948)
	{
		case 0:
			VEHICLE::REQUEST_VEHICLE_RECORDING(1, "lkfamily4");
			VEHICLE::REQUEST_VEHICLE_RECORDING(201, "lkfamily4");
			VEHICLE::REQUEST_VEHICLE_RECORDING(202, "lkfamily4");
			VEHICLE::REQUEST_VEHICLE_RECORDING(203, "lkfamily4");
			VEHICLE::REQUEST_VEHICLE_RECORDING(204, "lkfamily4");
			VEHICLE::REQUEST_VEHICLE_RECORDING(205, "lkfamily4");
			STREAMING::REQUEST_MODEL(Local_2728.f_1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_2728.f_1, 1);
			STREAMING::REQUEST_MODEL(Local_2713.f_1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_2713.f_1, 1);
			STREAMING::REQUEST_MODEL(joaat("premier"));
			STREAMING::REQUEST_MODEL(joaat("sentinel"));
			STREAMING::REQUEST_MODEL(Local_2743.f_1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_2743.f_1, 1);
			while ((((((((((!STREAMING::HAS_MODEL_LOADED(Local_2728.f_1) || !STREAMING::HAS_MODEL_LOADED(Local_2713.f_1)) || !STREAMING::HAS_MODEL_LOADED(joaat("premier"))) || !STREAMING::HAS_MODEL_LOADED(joaat("sentinel"))) || !STREAMING::HAS_MODEL_LOADED(Local_2743.f_1)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "lkfamily4")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(201, "lkfamily4")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(202, "lkfamily4")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(203, "lkfamily4")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(204, "lkfamily4")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(205, "lkfamily4"))
			{
				SYSTEM::WAIT(0);
			}
			Local_2713 = VEHICLE::CREATE_VEHICLE(Local_2713.f_1, -57.6468f, -547.713f, 39.0136f, 341.9843f, 1, 1);
			VEHICLE::SET_VEHICLE_STRONG(Local_2713, 1);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_2713, 1);
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_2713, 1, 1);
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_2713, false);
			VEHICLE::SET_VEHICLE_COLOURS(Local_2713, 73, 0);
			Local_2728 = VEHICLE::CREATE_VEHICLE(Local_2728.f_1, -47.6468f, -547.713f, 39.0136f, 341.9843f, 1, 1);
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_2728, false);
			VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_2713, Local_2728, 1065353216);
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2713, -1);
			STREAMING::LOAD_SCENE(-47.2755f, -515.6834f, 39.466f);
			iLocal_3926 = MISC::GET_GAME_TIMER();
			while (!GlobalFunc_588(&iLocal_3926, 5000))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_3948++;
			break;
		
		case 1:
			func_611();
			break;
		
		case 2:
			break;
	}
}

int func_611()//Position - 0x6A8D5
{
	switch (iLocal_3939)
	{
		case 0:
			uLocal_4015 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", -22.70835f, -451.5728f, 41.74343f, -1.770246f, 7.460166f, 144.9795f, 32.98425f, 0, 2);
			uLocal_4016 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", -16.80243f, -433.5381f, 41.6213f, 4.556459f, 7.441601f, 142.0148f, 32.98425f, 0, 2);
			uLocal_4021 = CAM::CREATE_CAM("default_scripted_camera", 0);
			CAM::ATTACH_CAM_TO_ENTITY(uLocal_4021, Local_2713, 6.18f, 2.5f, 0.49f, 1);
			CAM::POINT_CAM_AT_ENTITY(uLocal_4021, Local_2713, -0.8f, -2.2f, 0.6f, 1);
			CAM::SET_CAM_FOV(uLocal_4021, 40f);
			uLocal_4022 = CAM::CREATE_CAM("default_scripted_camera", 0);
			CAM::ATTACH_CAM_TO_ENTITY(uLocal_4022, Local_2713, 6.18f, -0.52f, 0.23f, 1);
			CAM::POINT_CAM_AT_ENTITY(uLocal_4022, Local_2713, -0.8f, -2.2f, 0.6f, 1);
			CAM::SET_CAM_FOV(uLocal_4022, 37.7f);
			uLocal_4017 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", -20.61369f, -440.846f, 39.88369f, 0.674877f, 3.426711f, -0.729025f, 33.3f, 0, 2);
			uLocal_4018 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", -40.99189f, -441.0197f, 40.56381f, 0.40158f, 6.06467f, -74.57228f, 30.67171f, 0, 2);
			uLocal_4019 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", -39.75343f, -441.0334f, 40.00727f, 2.512532f, 6.064665f, -110.0364f, 27.35505f, 0, 2);
			uLocal_4020 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", -42.09504f, -458.7592f, 39.87999f, 4.366019f, 5.12976f, -38.7072f, 26.95476f, 0, 2);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2713, 201, "lkfamily4", 1);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_2713, 7500f);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2728, 202, "lkfamily4", 1);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_2728, 7395f);
			SYSTEM::WAIT(0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2743, 0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2743);
				ENTITY::SET_ENTITY_VISIBLE(Local_2743, 0);
				ENTITY::SET_ENTITY_COLLISION(Local_2743, 0, 0);
				ENTITY::SET_ENTITY_PROOFS(Local_2743, 1, 1, 1, 1, 1, 0, 0, 0);
			}
			func_6(1, 1);
			PATHFIND::SET_ROADS_IN_AREA(-106.62f, -88.47f, 100f, 45f, -780f, -100f, 0, 1);
			MISC::CLEAR_AREA(-47.2755f, -515.6834f, 39.466f, 200f, 1, 0, 0, 0);
			CAM::SET_CAM_ACTIVE(uLocal_4021, 1);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_4022, uLocal_4021, 1500, 0, 1);
			CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2713, 0))
			{
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_fam4_trailer_sparks", Local_2713, 0f, -1.2f, 0f, 0f, 0f, 0f, 1f, 0, 0, 0);
			}
			iLocal_3926 = MISC::GET_GAME_TIMER();
			iLocal_3915 = 1;
			iLocal_3939++;
			break;
		
		case 1:
			GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_fam4_trailer_sparks", Local_2713, 0f, -1.2f, 0f, 0f, 0f, 0f, 1f, 0, 0, 0);
			iLocal_3939++;
			break;
		
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2713, 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2713))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2713) > 8500f)
					{
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_2713, -100000f);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_2728, -100000f);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_2713, 7650f);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_2728, 7545f);
						SYSTEM::WAIT(0);
						CAM::SET_CAM_ACTIVE(uLocal_4021, 0);
						CAM::SET_CAM_ACTIVE(uLocal_4022, 0);
						CAM::SET_CAM_ACTIVE(uLocal_4015, 1);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_4016, uLocal_4015, 2200, 0, 1);
						iLocal_3939++;
					}
				}
			}
			break;
		
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2713, 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2713))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2713) > 9000f)
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2728))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2728);
						}
						ENTITY::DETACH_ENTITY(Local_2728, 0, 1);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2728, 203, "lkfamily4", 1);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_2713, 1800f);
						if (STREAMING::HAS_MODEL_LOADED(joaat("sentinel")))
						{
							iLocal_4038[0] = VEHICLE::CREATE_VEHICLE(joaat("sentinel"), -9.6958f, -361.1301f, 40.1008f, 0f, 1, 1);
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_4038[0], 204, "lkfamily4", 1);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_4038[0], 6000f);
						}
						if (STREAMING::HAS_MODEL_LOADED(joaat("premier")))
						{
							iLocal_4038[1] = VEHICLE::CREATE_VEHICLE(joaat("premier"), -40.6385f, -497.1492f, 39.9915f, 0f, 1, 1);
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_4038[1], 205, "lkfamily4", 1);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_4038[1], 4250f);
						}
						SYSTEM::WAIT(0);
						MISC::SET_TIME_SCALE(0.5f);
						CAM::SET_CAM_ACTIVE(uLocal_4015, 0);
						CAM::SET_CAM_ACTIVE(uLocal_4016, 0);
						CAM::SET_CAM_ACTIVE(uLocal_4017, 1);
						STREAMING::REQUEST_MODEL(joaat("taco"));
						STREAMING::REQUEST_MODEL(joaat("schafter2"));
						iLocal_3939++;
					}
				}
			}
			break;
		
		case 4:
			func_613();
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2728))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2728) > 600f)
				{
					CAM::SET_CAM_ACTIVE(uLocal_4017, 0);
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2713))
					{
						VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(Local_2713);
					}
					MISC::SET_TIME_SCALE(0.6f);
					CAM::SET_CAM_ACTIVE(uLocal_4018, 1);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_4019, uLocal_4018, 3000, 0, 1);
					iLocal_3939++;
				}
			}
			break;
		
		case 5:
			func_613();
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2728))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2728) > 1258f)
				{
					CAM::SET_CAM_ACTIVE(uLocal_4018, 0);
					CAM::SET_CAM_ACTIVE(uLocal_4019, 0);
					CAM::SET_CAM_ACTIVE(uLocal_4020, 1);
					iLocal_3939++;
				}
			}
			break;
		
		case 6:
			func_613();
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2728))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2728) > 2000f)
				{
					PATHFIND::SET_ROADS_IN_AREA(-106.62f, -88.47f, 100f, 45f, -780f, -100f, 1, 1);
					func_508("lkfamily4", 1, 1, 1);
					func_507();
					fLocal_1078 = 200f;
					func_612(127000);
					iLocal_55 = 1;
					iLocal_53 = 1;
					func_506(1, 3, 11);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2743, 1, "lkfamily4", 1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2713, 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2713))
						{
							VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Local_2713);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_2713, -100000f);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_2713, (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(201, "lkfamily4") - 1500f));
						}
					}
					func_478(Local_2743, 1f);
					SYSTEM::WAIT(0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2743, 0))
					{
						func_504(Local_2743, 133000f);
						func_478(Local_2743, 1f);
						ENTITY::SET_ENTITY_VISIBLE(Local_2743, 1);
						ENTITY::SET_ENTITY_COLLISION(Local_2743, 1, 0);
						ENTITY::SET_ENTITY_PROOFS(Local_2743, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					MISC::SET_TIME_SCALE(1f);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2713, 0))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2713);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2728, 0))
					{
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_2728, true);
					}
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_2728);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2728.f_1);
					func_519(1, 1, 0, 0, 0, 3000, 1);
					iLocal_3915 = 0;
					iLocal_3939++;
					return 1;
				}
			}
			break;
		
		case 7:
			break;
		
		case 22:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2713, 0))
			{
			}
			MISC::CLEAR_AREA(-57.6468f, -547.713f, 39.0136f, 100f, 1, 0, 0, 0);
			break;
	}
	return 0;
}

void func_612(int iParam0)//Position - 0x6B005
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 94)
	{
		if (fLocal_854[iVar0] < IntToFloat(iParam0))
		{
			iLocal_1426[iVar0] = 99;
		}
		iVar0++;
	}
}

void func_613()//Position - 0x6B03A
{
	int iVar0;
	
	iVar0 = 0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2728, 0))
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_4038 - 1))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_4038[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_4038[iVar0]))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_2728, iLocal_4038[iVar0]))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_4038[iVar0]);
					}
				}
			}
			iVar0++;
		}
	}
}


void func_615()//Position - 0x6B0A7
{
	switch (iLocal_3946)
	{
		case 0:
			func_425();
			if (GlobalFunc_109())
			{
				GlobalFunc_5652(&Local_4221, 1, 0);
				if (!CAM::IS_SCREEN_FADED_IN())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_2743, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_3865[0], "Michael", 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_2926, "Lazlow", 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_2743, "Lazlows_car", 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_2713, "family_4_truck", 1, 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(Local_2728))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_2728, "Family_4_trailer", 1, 0, 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Family_4_trailer", 3, Local_2728.f_1, 0);
				}
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Lazlow_Jeans", 2, Local_3841.f_2, 0);
				GlobalFunc_8316(1, 1, 1, 0);
				CUTSCENE::START_CUTSCENE(256);
				RECORDING::_0x48621C9FCA3EBD28(4);
				iLocal_3946++;
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CAM::DESTROY_ALL_CAMS(0);
				CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
				MISC::CLEAR_AREA(1059.502f, -291.9928f, 49.4891f, 1000f, 1, 0, 0, 0);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2743, 1);
				VEHICLE::SET_VEHICLE_UNDRIVEABLE(Local_2743, 1);
				iLocal_3946++;
			}
			break;
		
		case 2:
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (!CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lazlow_Jeans", Local_3841.f_2)))
					{
						Local_3841.x = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lazlow_Jeans", Local_3841.f_2));
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("trevor", GlobalFunc_4917(2)))
					{
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("michael", GlobalFunc_4917(0)))
					{
						GlobalFunc_9134(&uLocal_3865, 0);
						GlobalFunc_10979(&uLocal_3865, 1, 0, 0);
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
						PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
					if (GlobalFunc_8315() == 2)
					{
						CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(uLocal_3865[0]);
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
					{
						CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(uLocal_3865[0]);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					}
				}
				else
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 1, 0);
					iLocal_3946++;
				}
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2926))
				{
					PED::DELETE_PED(&Local_2926);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_3841.x))
				{
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&Local_3841);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_2743))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_2743);
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_3865[2]))
				{
					PED::DELETE_PED(&(uLocal_3865[2]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_2728))
				{
					VEHICLE::DELETE_VEHICLE(&Local_2728);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_2713))
				{
					VEHICLE::DELETE_VEHICLE(&Local_2713);
				}
				GlobalFunc_5917(&Local_2713);
				func_519(0, 0, 0, 0, 0, 3000, 1);
				RECORDING::_0x81CBAE94390F9F89();
				func_616();
			}
			break;
		
		case 3:
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lazlow_Jeans", Local_3841.f_2)))
				{
					Local_3841.x = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lazlow_Jeans", Local_3841.f_2));
				}
			}
			else
			{
				GlobalFunc_9134(&uLocal_3865, 0);
				GlobalFunc_10979(&uLocal_3865, 0, 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(Local_2926))
				{
					PED::DELETE_PED(&Local_2926);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_3841.x))
				{
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&Local_3841);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_2743))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_2743);
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_3865[2]))
				{
					PED::DELETE_PED(&(uLocal_3865[2]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_2713))
				{
					VEHICLE::DELETE_VEHICLE(&Local_2713);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_2728))
				{
					VEHICLE::DELETE_VEHICLE(&Local_2728);
				}
				GlobalFunc_5917(&Local_2713);
				func_473(1, 0, 0, 1);
				RECORDING::_0x81CBAE94390F9F89();
				func_616();
			}
			break;
	}
}

void func_616()//Position - 0x6B414
{
	GlobalFunc_5103(0, 0);
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
	GlobalFunc_9804(2, 0);
	func_870();
}


























void func_642()//Position - 0x6BBC5
{
	GlobalFunc_587();
	if (GlobalFunc_4926(1000))
	{
		iLocal_3956 = 22;
	}
	func_425();
	switch (iLocal_3956)
	{
		case 0:
			VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Local_2713);
			MISC::CLEAR_AREA(1067.999f, -279.0626f, 50.3196f, 1000f, 1, 0, 0, 0);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2713, -1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_3865[0]);
			PED::SET_PED_INTO_VEHICLE(uLocal_3865[0], Local_2713, 0);
			switch (func_644())
			{
				case 0:
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2713, 401, "lkfamily4", 1);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_2713, 10500f);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2713, 1);
					if (ENTITY::DOES_ENTITY_EXIST(Local_2728))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_2728))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2728, 402, "lkfamily4", 1);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_2728, 10500f);
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2728, 1);
						}
					}
					Local_2713.f_13 = 401;
					break;
				
				case 1:
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2713, 403, "lkfamily4", 1);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_2713, 9500f);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2713, 1);
					if (ENTITY::DOES_ENTITY_EXIST(Local_2728))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_2728))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2728, 404, "lkfamily4", 1);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_2728, 9500f);
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2728, 1);
						}
					}
					Local_2713.f_13 = 403;
					break;
				
				case 2:
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2713, 405, "lkfamily4", 1);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_2713, 9500f);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2713, 1);
					if (ENTITY::DOES_ENTITY_EXIST(Local_2728))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_2728))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2728, 406, "lkfamily4", 1);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_2728, 9500f);
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2728, 1);
						}
					}
					Local_2713.f_13 = 405;
					break;
				
				default:
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2713, 401, "lkfamily4", 1);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_2713, 10500f);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2713, 1);
					if (ENTITY::DOES_ENTITY_EXIST(Local_2728))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_2728))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2728, 402, "lkfamily4", 1);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_2728, 10500f);
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2728, 1);
						}
					}
					Local_2713.f_13 = 401;
					break;
			}
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2743))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2743);
			}
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_2743, 1000f, 1);
			ENTITY::SET_ENTITY_COORDS(Local_2743, 1067.999f, -279.0626f, 50.3196f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(Local_2743, 334.6674f);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_2743);
			VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_2743, 1);
			GlobalFunc_2875(&Local_2743);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_2926);
			Local_3998 = { ENTITY::GET_ENTITY_COORDS(Local_2743, 1) };
			Local_4001 = { ENTITY::GET_ENTITY_ROTATION(Local_2743, 2) };
			Local_2926.f_11 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3998, Local_4001, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(Local_2926, Local_2926.f_11, "missfam4mcs3", "loop_lazlow", 1000f, -8f, 0, 0, 1148846080, 0);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_2926.f_11, 1);
			TASK::TASK_LOOK_AT_ENTITY(Local_2926, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			uLocal_4015 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 1070.4f, -276.6132f, 52.56542f, -7.739586f, 2.908233f, 130.9663f, 31.37406f, 0, 2);
			uLocal_4016 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 1070.462f, -276.5903f, 52.10928f, -7.739586f, 2.908233f, 130.9663f, 28.28113f, 0, 2);
			uLocal_4017 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 1054.241f, -292.1299f, 49.77601f, 7.170268f, 2.907489f, -50.98007f, 28.5157f, 0, 2);
			uLocal_4018 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 1054.568f, -291.8514f, 49.74801f, 7.170268f, 2.907489f, -50.12729f, 26.94595f, 0, 2);
			CAM::SET_CAM_ACTIVE(uLocal_4015, 1);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_4016, uLocal_4015, 5000, 0, 1);
			CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
			RECORDING::_0x48621C9FCA3EBD28(4);
			iLocal_3956++;
			break;
		
		case 1:
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2713) > (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(Local_2713.f_13, "lkfamily4") - 200f))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_4248);
				TASK::TASK_LEAVE_VEHICLE(0, Local_2713, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1067.999f, -279.0626f, 50.3196f, 1f, -1, 0.25f, 0, 1193033728);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_4248);
				TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_4248);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_4248);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_4248);
				TASK::TASK_PAUSE(0, 200);
				TASK::TASK_LEAVE_VEHICLE(0, Local_2713, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1067.999f, -279.0626f, 50.3196f, 1f, -1, 0.25f, 0, 1193033728);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_4248);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_3865[0], uLocal_4248);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_4248);
				iLocal_3926 = MISC::GET_GAME_TIMER();
				iLocal_3956++;
			}
			break;
		
		case 2:
			if (!CAM::IS_CAM_INTERPOLATING(uLocal_4016))
			{
				CAM::SET_CAM_ACTIVE(uLocal_4015, 0);
				CAM::SET_CAM_ACTIVE(uLocal_4016, 0);
				ENTITY::SET_ENTITY_COORDS(Local_2713, 1057.25f, -294.328f, 50.4676f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_2713, 327.8918f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_2713);
				ENTITY::FREEZE_ENTITY_POSITION(Local_2713, 1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1055.86f, -292.17f, 49.4391f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 316.7899f);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 1, 0, 0);
				TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), 1066.7f, -274.9f, 50.3196f, 1f, -1, 1193033728, 1056964608);
				CAM::SET_CAM_ACTIVE(uLocal_4018, 1);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_4018, uLocal_4017, 3000, 0, 1);
				iLocal_3956++;
			}
			break;
		
		case 3:
			if (!CAM::IS_CAM_INTERPOLATING(uLocal_4018))
			{
				GlobalFunc_5917(&Local_2743);
				ENTITY::FREEZE_ENTITY_POSITION(Local_2713, 0);
				iLocal_2696 = 9;
			}
			break;
		
		case 22:
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(800);
				}
			}
			else
			{
				GlobalFunc_5917(&Local_2743);
				ENTITY::FREEZE_ENTITY_POSITION(Local_2713, 0);
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2713))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2713);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_2728))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2728, 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2728))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2728);
						}
					}
				}
				ENTITY::SET_ENTITY_COORDS(Local_2713, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(401, (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(401, "lkfamily4") - 50f), "lkfamily4"), 1, 0, 0, 1);
				ENTITY::SET_ENTITY_ROTATION(Local_2713, VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(401, (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(401, "lkfamily4") - 50f), "lkfamily4"), 2, 1);
				if (ENTITY::DOES_ENTITY_EXIST(Local_2728))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2728, 0))
					{
						ENTITY::SET_ENTITY_COORDS(Local_2728, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(402, (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(402, "lkfamily4") - 50f), "lkfamily4") + Vector(10f, 0f, 0f), 1, 0, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(Local_2728, VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(402, (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(402, "lkfamily4") - 50f), "lkfamily4"), 2, 1);
						VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_2713, Local_2728, 1065353216);
					}
				}
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_3865[0]);
				RECORDING::_0x81CBAE94390F9F89();
				while (!CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					SYSTEM::WAIT(0);
				}
				iLocal_2696 = 9;
			}
			break;
	}
}


int func_644()//Position - 0x6C36C
{
	return iLocal_3984;
}




int func_648()//Position - 0x6C3FB
{
	func_706();
	func_697();
	func_696();
	func_686();
	func_685();
	func_666();
	func_665();
	func_664();
	func_663();
	func_657();
	func_656();
	func_650();
	func_649();
	return 0;
}

void func_649()//Position - 0x6C439
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_2926, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 180f)
	{
		GlobalFunc_553(230);
	}
}

int func_650()//Position - 0x6C466
{
	if (iLocal_3957 > 0)
	{
		func_655();
	}
	switch (iLocal_3957)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(Local_2926, 1063.57f, -284.17f, 50.6f, 80f, 80f, 20f, 0, 1, 0))
			{
				STREAMING::REQUEST_ANIM_DICT("missfam4mcs3");
				func_425();
				iLocal_3957++;
			}
			break;
		
		case 1:
			func_697();
			func_425();
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2743))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2743) + 5000f) > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(1, "lkfamily4")
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_2743, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 80f)
					{
						GlobalFunc_4956();
						GlobalFunc_5157(&uLocal_4044, "fam4aud", "FAM4_POW", 7, 0, 0);
						iLocal_3957++;
					}
				}
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_2743, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 80f)
			{
				GlobalFunc_4956();
				GlobalFunc_5157(&uLocal_4044, "fam4aud", "FAM4_POW2", 7, 0, 0);
				iLocal_3957++;
			}
			break;
		
		case 2:
			func_697();
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2743))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2743) + 100f) > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(1, "lkfamily4")
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2743);
					ENTITY::FREEZE_ENTITY_POSITION(Local_2743, 1);
					ENTITY::FREEZE_ENTITY_POSITION(Local_2743, 0);
					uLocal_4249 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_fam4_truck_vent", Local_2743, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
					iLocal_3957++;
				}
			}
			else
			{
				uLocal_4249 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_fam4_truck_vent", Local_2743, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				iLocal_3957++;
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_2926, 1), 1) < 45.5f)
			{
				if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_4249))
				{
					uLocal_4249 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_fam4_truck_vent", Local_2743, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				}
				iLocal_3957 = 3;
			}
			break;
		
		case 3:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_2926, 1), 1) < 40f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_2713, 1), ENTITY::GET_ENTITY_COORDS(Local_2926, 1), 1) < 40f)
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2713))
				{
					GlobalFunc_5652(&Local_4221, 1, 0);
					MISC::SET_INSTANCE_PRIORITY_HINT(0);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_4_CHASE_TRUCK_2"))
					{
						AUDIO::STOP_AUDIO_SCENE("FAMILY_4_CHASE_TRUCK_2");
					}
					AUDIO::TRIGGER_MUSIC_EVENT("FAM4_STOP_TRACK");
					GlobalFunc_763(Local_2713, 7f, 1, 1056964608, 0, 1);
					iLocal_3957++;
				}
				else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_2926, 1), 1) < 15f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_2713, 1), ENTITY::GET_ENTITY_COORDS(Local_2926, 1), 1) < 17f)
				{
					if (func_69(0, 1, 0, 1))
					{
						MISC::SET_INSTANCE_PRIORITY_HINT(0);
						func_651(&Local_2926, &Local_2713);
						GlobalFunc_5652(&Local_4221, 1, 0);
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_4_CHASE_TRUCK_2"))
						{
							AUDIO::START_AUDIO_SCENE("FAMILY_4_CHASE_TRUCK_2");
						}
						AUDIO::TRIGGER_MUSIC_EVENT("FAM4_STOP_TRACK");
						iLocal_2696 = 9;
						return 1;
					}
				}
			}
			break;
		
		case 4:
			if (GlobalFunc_763(Local_2713, 7f, 1, 1056964608, 0, 1))
			{
				func_69(0, 0, 0, 0);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_4248);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1067.455f, -279.304f, 50.2995f, 1f, -1, 0.2f, 0, 1193033728);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_4248);
				TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_4248);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_4248);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				iLocal_3926 = MISC::GET_GAME_TIMER();
				iLocal_3924 = 1;
				iLocal_3957++;
			}
			break;
		
		case 5:
			if (GlobalFunc_588(&iLocal_3926, 3000))
			{
				RECORDING::_0x293220DA1B46CEBC(5f, 2f, 3);
				iLocal_2696 = 9;
				return 1;
			}
			break;
	}
	return 0;
}

void func_651(int iParam0, int iParam1)//Position - 0x6C83E
{
	func_652(iParam0);
	GlobalFunc_2875(iParam1);
}

void func_652(var uParam0)//Position - 0x6C852
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!PED::IS_PED_INJURED(*uParam0))
		{
			ENTITY::SET_ENTITY_PROOFS(*uParam0, 1, 1, 1, 1, 1, 0, 0, 0);
		}
	}
}



void func_655()//Position - 0x6CA3B
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1025.122f, -337.243f, 47.967f, 1044.686f, -349.899f, 62f, 5f, 0, 1, 0))
	{
		iLocal_3984 = 0;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1014.375f, -330.291f, 47.867f, 1023.359f, -336.103f, 62.067f, 5f, 0, 1, 0))
	{
		iLocal_3984 = 1;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 992.965f, -316.44f, 47.867f, 1012.612f, -329.15f, 62.067f, 5f, 0, 1, 0))
	{
		iLocal_3984 = 2;
	}
}

void func_656()//Position - 0x6CADC
{
	int iVar0;
	
	iVar0 = 0;
	switch (iLocal_3953)
	{
		case 0:
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2743))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2743) > 45000f)
				{
					STREAMING::REQUEST_MODEL(joaat("freight"));
					iLocal_3953++;
				}
			}
			break;
		
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(joaat("freight")))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2743))
				{
					iLocal_4025[1] = VEHICLE::CREATE_MISSION_TRAIN(18, 534.5f, -946.8f, 26.5f, 0);
					VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_4025[1], 0f);
					VEHICLE::SET_TRAIN_SPEED(iLocal_4025[1], 0f);
					ENTITY::SET_ENTITY_PROOFS(iLocal_4025[1], 1, 1, 1, 1, 1, 0, 0, 0);
					iLocal_4025[2] = VEHICLE::CREATE_MISSION_TRAIN(18, 517.6304f, -1060.372f, 26.7011f, 0);
					VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_4025[2], 0f);
					VEHICLE::SET_TRAIN_SPEED(iLocal_4025[2], 0f);
					ENTITY::SET_ENTITY_PROOFS(iLocal_4025[2], 1, 1, 1, 1, 1, 0, 0, 0);
					iLocal_4025[3] = VEHICLE::CREATE_VEHICLE(joaat("freight"), 522.3235f, -1064.828f, 27.003f, 184f, 1, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_4025[3], 1);
					ENTITY::SET_ENTITY_PROOFS(iLocal_4025[3], 1, 1, 1, 1, 1, 0, 0, 0);
					iLocal_3953++;
				}
			}
			break;
		
		case 2:
			iLocal_3953++;
			break;
		
		case 3:
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2743))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2743) > 65000f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_4025[1], 0))
					{
						VEHICLE::START_VEHICLE_HORN(iLocal_4025[1], 7000, 0, 0);
						iLocal_3953++;
					}
				}
			}
			break;
		
		case 4:
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2743) > 82000f)
			{
				iVar0 = 1;
				while (iVar0 <= (iLocal_4025 - 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_4025[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_4025[iVar0]))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_4025[iVar0], 0), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 50f)
							{
								if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_4025[iVar0]))
								{
									if (iVar0 != 3)
									{
										VEHICLE::DELETE_MISSION_TRAIN(&(iLocal_4025[iVar0]));
									}
									else
									{
										VEHICLE::DELETE_VEHICLE(&(iLocal_4025[iVar0]));
									}
								}
							}
						}
					}
					iVar0++;
				}
			}
			if ((!ENTITY::DOES_ENTITY_EXIST(iLocal_4025[1]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_4025[2])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_4025[3]))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freight"));
				iLocal_3953++;
			}
			break;
		
		case 5:
			break;
	}
}

void func_657()//Position - 0x6CD52
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_2728))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_2728))
		{
			func_661();
		}
		else
		{
			func_659();
			if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Local_2713))
			{
				func_661();
			}
			else if (IntToFloat(ENTITY::GET_ENTITY_HEALTH(Local_2728)) < 300f)
			{
				iVar0 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(Local_2728, 1), 10f, 0, GlobalFunc_2220());
				if (iVar0 != Local_2743 && iVar0 != Local_2713)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_2713, iVar0))
						{
							func_661();
						}
					}
				}
			}
		}
	}
}


void func_659()//Position - 0x6CDED
{
	switch (iLocal_3977)
	{
		case 0:
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2713))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -264.563f, -1828.329f, 27.333f, -238.324f, -1817.461f, 36.033f, 41f, 0, 1, 0))
					{
						GlobalFunc_159("family4_help_1", -1);
						iLocal_3977++;
					}
				}
			}
			break;
		
		case 1:
			break;
		
		case 2:
			break;
	}
}


void func_661()//Position - 0x6CE88
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_2728))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_2728))
		{
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Local_2713))
			{
				ENTITY::DETACH_ENTITY(Local_2728, 0, 1);
				ENTITY::APPLY_FORCE_TO_ENTITY(Local_2728, 3, 0f, -5f, 0f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
				ENTITY::APPLY_FORCE_TO_ENTITY(Local_2728, 5, 0f, 0f, -1f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_2728, true);
			}
		}
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "UNHITCH_TRAILER", Local_2728, "FAM4_UNHITCH_TRAILER", 0, 0);
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_2728);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2728.f_1);
		if (GlobalFunc_74("family4_help_1"))
		{
			HUD::CLEAR_HELP(1);
		}
		VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_2713, -10f);
		GlobalFunc_10618(&uLocal_4044, "fam4aud", "FAM4_DIT2", 6, 0, 0, 0);
		Global_86818 = 1;
		GlobalFunc_553(237);
	}
}


void func_663()//Position - 0x6CF61
{
	switch (iLocal_3929)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
	}
}

void func_664()//Position - 0x6CF8C
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_4030))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_4030, 0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_4030, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 150f)
			{
				switch (iLocal_3941)
				{
					case 0:
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2713))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -216.64f, -2023.141f, 26.651f, -176.791f, -2037.643f, 30.896f, 45.5f, 0, 1, 0))
							{
								Local_3628 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_4030, 26, Local_3628.f_1, -1, 1, 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3628, 1);
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_4030, 1.2f);
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(iLocal_4030, 112, "lkfamily4", 2 | 4, 0, 786603);
								iLocal_3941++;
							}
						}
						break;
					
					case 1:
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_4030, Local_2713))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_4030);
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_4030);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_3628);
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_4034);
							iLocal_3941++;
						}
						break;
					
					case 2:
						break;
				}
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_4030);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3628.f_1);
			}
		}
	}
}

void func_665()//Position - 0x6D0B6
{
	int iVar0;
	
	iVar0 = 0;
	switch (iLocal_3944)
	{
		case 0:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -219.6464f, -2037.822f, 26.6207f, 1) > 70f)
			{
				iVar0 = 0;
				while (iVar0 <= (Local_3006 - 1))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_3006[iVar0 /*20*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3006[iVar0 /*20*/].f_1);
					ENTITY::REMOVE_FORCED_OBJECT(Local_3006[iVar0 /*20*/].f_3, 0.5f, joaat("v_ilev_chair02_ped"));
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 <= (Local_2819 - 1))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_2819[iVar0 /*15*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2819[iVar0 /*15*/].f_1);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_2865[iVar0 /*15*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2865[iVar0 /*15*/].f_1);
					iVar0++;
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_2698))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_2698);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2698.f_1);
				if (ENTITY::DOES_ENTITY_EXIST(Local_3628))
				{
					PED::DELETE_PED(&Local_3628);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3628.f_1);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_4030);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_4034);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_4035);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_4036);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_4037);
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-365.5f, -2063.4f, 100f, -141.4f, -1837f, -100f, 0, 1);
				iLocal_3944++;
			}
			break;
		
		case 1:
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2743))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2743) > 83000f)
				{
					iVar0 = 0;
					while (iVar0 <= (iLocal_4025 - 1))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_4025[iVar0]))
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_4025[iVar0]));
						}
						iVar0++;
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freight"));
					iLocal_3944++;
				}
			}
			break;
		
		case 2:
			break;
	}
}

void func_666()//Position - 0x6D274
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2743, 0))
	{
		if (!CAM::DOES_CAM_EXIST(uLocal_4013))
		{
			uLocal_4013 = CAM::CREATE_CAM("default_scripted_camera", 0);
			CAM::SET_CAM_FOV(uLocal_4013, 45f);
			uLocal_4014 = CAM::CREATE_CAM("default_scripted_camera", 0);
			CAM::SET_CAM_FOV(uLocal_4014, 40f);
			CAM::SET_CAM_ACTIVE(uLocal_4013, 1);
			iLocal_3911 = 0;
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_2926, 1), 1) < 120f)
		{
			if (func_673(&Local_2743))
			{
				if (!CAM::IS_CAM_RENDERING(uLocal_4013) && !CAM::IS_CAM_RENDERING(uLocal_4014))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_2713, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2743, -10f, -22f, -10f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2743, -0.4f, -22f, 10f), 55f, 0, 1, 0))
					{
						CAM::ATTACH_CAM_TO_ENTITY(uLocal_4013, Local_2743, -0.68f, 1.58f, 0.59f, 1);
						CAM::POINT_CAM_AT_ENTITY(uLocal_4013, Local_2743, 2.5f, -4.9f, 0.2f, 1);
						CAM::ATTACH_CAM_TO_ENTITY(uLocal_4014, Local_2743, -1.5f, 1.58f, 0.59f, 1);
						CAM::POINT_CAM_AT_ENTITY(uLocal_4014, Local_2713, 0f, 0f, 0f, 1);
						TASK::TASK_LOOK_AT_COORD(Local_2926, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2743, -1.5f, -10f, 0.7f), 2000, 0, 2);
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_2713, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2743, 1.4f, -22f, -10f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2743, 10f, -22f, 10f), 55f, 0, 1, 0))
					{
						CAM::ATTACH_CAM_TO_ENTITY(uLocal_4013, Local_2743, 0.68f, 1.58f, 0.59f, 1);
						CAM::POINT_CAM_AT_ENTITY(uLocal_4013, Local_2743, -2.1f, -4.9f, 0.2f, 1);
						CAM::ATTACH_CAM_TO_ENTITY(uLocal_4014, Local_2743, 1.5f, 1.58f, 0.59f, 1);
						CAM::POINT_CAM_AT_ENTITY(uLocal_4014, Local_2713, 0f, 0f, 0f, 1);
						TASK::TASK_LOOK_AT_COORD(Local_2926, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2743, 1.5f, -10f, 0.7f), 2000, 0, 2);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY(uLocal_4013, Local_2743, -0.68f, 1.58f, 0.59f, 1);
						CAM::POINT_CAM_AT_ENTITY(uLocal_4013, Local_2743, 2.5f, -4.9f, 0.2f, 1);
						CAM::ATTACH_CAM_TO_ENTITY(uLocal_4014, Local_2743, -1.5f, 1.58f, 0.59f, 1);
						CAM::POINT_CAM_AT_ENTITY(uLocal_4014, Local_2713, 0f, 0f, 0f, 1);
						TASK::TASK_LOOK_AT_COORD(Local_2926, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2743, -1.5f, -10f, 0.7f), 2000, 0, 2);
					}
					func_670();
					GlobalFunc_4956();
					iLocal_3950 = 0;
					CAM::SET_CAM_ACTIVE(uLocal_4013, 1);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_4014, uLocal_4013, 2900, 0, 1);
					CAM::SHAKE_CAM(uLocal_4013, "ROAD_VIBRATION_SHAKE", 0.2f);
					CAM::SHAKE_CAM(uLocal_4014, "ROAD_VIBRATION_SHAKE", 0.2f);
					CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
					iLocal_3911 = 1;
					iLocal_3913 = 1;
					GlobalFunc_565(234, 1, 0);
					CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
				}
				else
				{
					PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
					if (iLocal_3991 < 8)
					{
						if (iLocal_3950 == 0)
						{
							if (GlobalFunc_10618(&uLocal_4044, "fam4aud", "lazlo_chase", 7, 0, 0, 0))
							{
								RECORDING::_0x293220DA1B46CEBC(2f, 3f, 3);
								iLocal_3991++;
								iLocal_3950 = MISC::GET_GAME_TIMER();
							}
						}
						else if (GlobalFunc_588(&iLocal_3950, 5500))
						{
							if (GlobalFunc_10618(&uLocal_4044, "fam4aud", "lazlo_chase", 7, 0, 0, 0))
							{
								iLocal_3991++;
								iLocal_3950 = MISC::GET_GAME_TIMER();
							}
						}
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_4_CHASE_TRUCK_CAMERA"))
					{
						AUDIO::START_AUDIO_SCENE("FAMILY_4_CHASE_TRUCK_CAMERA");
					}
				}
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				STREAMING::_0x1E9057A74FD73E23();
			}
			else
			{
				func_667();
			}
		}
		else
		{
			func_667();
		}
	}
	else if (iLocal_3912 || iLocal_3913)
	{
		if (GlobalFunc_74("family4_help_0"))
		{
			HUD::CLEAR_HELP(1);
		}
		iLocal_3912 = 0;
		iLocal_3913 = 0;
	}
}

void func_667()//Position - 0x6D656
{
	if (CAM::IS_CAM_ACTIVE(uLocal_4013))
	{
		CAM::SET_CAM_ACTIVE(uLocal_4014, 0);
		CAM::SET_CAM_ACTIVE(uLocal_4013, 0);
		CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
		if (!PED::IS_PED_INJURED(Local_2926))
		{
			TASK::TASK_CLEAR_LOOK_AT(Local_2926);
		}
		GlobalFunc_4956();
		iLocal_3911 = 0;
		GlobalFunc_4948(&uLocal_4209, 0, 0);
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_4_CHASE_TRUCK_CAMERA"))
		{
			AUDIO::STOP_AUDIO_SCENE("FAMILY_4_CHASE_TRUCK_CAMERA");
		}
	}
}



void func_670()//Position - 0x6D84A
{
	if (GlobalFunc_111())
	{
		if (!iLocal_3916)
		{
			cLocal_4262 = { GlobalFunc_560() };
			cLocal_4268 = { GlobalFunc_514() };
			if (!MISC::ARE_STRINGS_EQUAL(&cLocal_4262, "null") && !MISC::ARE_STRINGS_EQUAL(&cLocal_4268, "null"))
			{
				iLocal_3916 = 1;
			}
		}
	}
}



int func_673(int iParam0)//Position - 0x6D96B
{
	int iVar0;
	struct<3> Var1;
	
	if (HUD::DOES_BLIP_EXIST(Local_2926.f_2))
	{
		if (GlobalFunc_7635(&uLocal_4209, 1, 0, 1))
		{
			iLocal_3911 = 1;
		}
		else
		{
			iLocal_3911 = 0;
		}
	}
	if (iLocal_3911)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (HUD::DOES_BLIP_EXIST(Local_2926.f_2) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				if (!GlobalFunc_116(0))
				{
					iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					if (((iVar0 == 0 || GlobalFunc_660(PLAYER::PLAYER_PED_ID(), 249.3368f, -622.8621f, 29.6647f, "dt1_rd1_tun")) || GlobalFunc_660(PLAYER::PLAYER_PED_ID(), 132.835f, -577.4266f, 33.01003f, "dt1_rd1_tun2")) || GlobalFunc_660(PLAYER::PLAYER_PED_ID(), 287.4f, -641.1f, 30.51003f, "dt1_rd1_tun3"))
					{
						Var1 = { ENTITY::GET_ENTITY_ROTATION(Local_2713, 2) };
						if (MISC::ABSF(Var1.x) < 45f && MISC::ABSF(Var1.f_1) < 45f)
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












void func_685()//Position - 0x6E185
{
	struct<3> Var0;
	
	switch (iLocal_3959)
	{
		case 0:
			if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2743))
			{
				if (ENTITY::GET_ENTITY_SPEED(Local_2743) < 0.01f)
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam4mcs3"))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_2926);
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_2926, Local_2743, 0);
						Local_3998 = { ENTITY::GET_ENTITY_COORDS(Local_2743, 1) };
						Local_4001 = { ENTITY::GET_ENTITY_ROTATION(Local_2743, 2) };
						Local_2926.f_11 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3998, Local_4001, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_2926, Local_2926.f_11, "missfam4mcs3", "loop_intro_lazlow", 1000f, -8f, 1, 0, 1148846080, 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_2743, Local_2926.f_11, "loop_intro_car", "missfam4mcs3", 1000f, -8f, 0, 1148846080);
						iLocal_3959++;
					}
				}
			}
			break;
		
		case 1:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_2926.f_11))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_2926.f_11) >= 1f)
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_2743, 1000f, 1);
					Local_3998 = { ENTITY::GET_ENTITY_COORDS(Local_2743, 1) };
					Local_4001 = { ENTITY::GET_ENTITY_ROTATION(Local_2743, 2) };
					Local_2926.f_11 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3998, Local_4001, 2);
					TASK::TASK_LOOK_AT_ENTITY(Local_2926, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_2926, Local_2926.f_11, "missfam4mcs3", "loop_lazlow", 8f, -8f, 1, 0, 1148846080, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_2926.f_11, 1);
					iLocal_3959++;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_2926.f_11) && !PED::IS_PED_RAGDOLL(Local_2926))
			{
				Local_2926.f_6 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfam4mcs3", "loop_lazlow", Local_3998, Local_4001, 0f, 2) };
				Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missfam4mcs3", "loop_lazlow", Local_3998, Local_4001, 0f, 2) };
				Local_2926.f_9 = Var0.f_2;
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_2926, Local_2926.f_6, 0.5f, 0.5f, 1.6f, 0, 1, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_4248);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_2926.f_6, 1f, -1, 0.25f, 0, 1193033728);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_4248);
					TASK::TASK_PERFORM_SEQUENCE(Local_2926, uLocal_4248);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_4248);
				}
				else
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_2926, Local_2926.f_11, "missfam4mcs3", "loop_lazlow", 8f, -8f, 1, 0, 1148846080, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_2926.f_11, 1);
				}
			}
			break;
	}
}

void func_686()//Position - 0x6E3FF
{
	if (HUD::DOES_BLIP_EXIST(Local_2926.f_2))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2743))
		{
			switch (iLocal_3943)
			{
				case 0:
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -187.434f, -1998.193f, 26.626f, -189.068f, -2012.098f, 33.626f, 5f, 0, 1, 0))
					{
						func_670();
						if (GlobalFunc_10618(&uLocal_4044, "fam4aud", "FAM4_LEF", 7, 0, 0, 0))
						{
							iLocal_3943++;
						}
						else
						{
							GlobalFunc_4956();
						}
					}
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2743) > 40000f)
					{
						iLocal_3943++;
					}
					break;
				
				case 1:
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2743) > 47150.92f)
					{
						if ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_2743, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 150f || ENTITY::IS_ENTITY_ON_SCREEN(Local_2743)) && !iLocal_3911)
						{
							func_670();
							if (GlobalFunc_10618(&uLocal_4044, "fam4aud", "FAM4_LEF", 7, 0, 0, 0))
							{
								iLocal_3943++;
							}
						}
						else
						{
							iLocal_3943++;
						}
					}
					break;
				
				case 2:
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2743) > 56283.16f)
					{
						if ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_2743, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 120f || ENTITY::IS_ENTITY_ON_SCREEN(Local_2743)) && !iLocal_3911)
						{
							func_670();
							if (GlobalFunc_10618(&uLocal_4044, "fam4aud", "fam4_tline", 7, 0, 0, 0))
							{
								RECORDING::_0x293220DA1B46CEBC(4f, 4f, 4);
								AUDIO::START_AUDIO_SCENE("FAMILY_4_CHASE_TRUCK_TRACKS");
								iLocal_3943++;
							}
						}
						else
						{
							iLocal_3943++;
						}
					}
					break;
				
				case 3:
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2743) > 70551.43f)
					{
						if ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_2743, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 120f || ENTITY::IS_ENTITY_ON_SCREEN(Local_2743)) && !iLocal_3911)
						{
							func_670();
							if (GlobalFunc_10618(&uLocal_4044, "fam4aud", "FAM4_LEF", 7, 0, 0, 0))
							{
								iLocal_3943++;
							}
						}
						else
						{
							iLocal_3943++;
						}
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_4_CHASE_TRUCK_TRACKS"))
						{
							AUDIO::STOP_AUDIO_SCENE("FAMILY_4_CHASE_TRUCK_TRACKS");
						}
					}
					break;
				
				case 4:
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2743) > 90100.55f)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_2743, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 120f || (ENTITY::IS_ENTITY_ON_SCREEN(Local_2743) && !iLocal_3911))
						{
							func_670();
							if (GlobalFunc_10618(&uLocal_4044, "fam4aud", "FAM4_RIG", 7, 0, 0, 0))
							{
								RECORDING::_0x293220DA1B46CEBC(4f, 4f, 4);
								iLocal_3943++;
							}
						}
						else
						{
							iLocal_3943++;
						}
					}
					break;
				
				case 5:
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2743) > 102000.4f)
					{
						if ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_2743, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 120f || ENTITY::IS_ENTITY_ON_SCREEN(Local_2743)) && !iLocal_3911)
						{
							func_670();
							if (GlobalFunc_10618(&uLocal_4044, "fam4aud", "FAM4_RIG", 7, 0, 0, 0))
							{
								iLocal_3943++;
							}
						}
						else
						{
							iLocal_3943++;
						}
					}
					break;
				
				case 6:
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2743) > 126768f)
					{
						if ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_2743, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 120f || ENTITY::IS_ENTITY_ON_SCREEN(Local_2743)) && !iLocal_3911)
						{
							func_670();
							if (GlobalFunc_10618(&uLocal_4044, "fam4aud", "FAM4_RIV", 7, 0, 0, 0))
							{
								RECORDING::_0x293220DA1B46CEBC(4f, 4f, 4);
								iLocal_3943++;
							}
						}
						else
						{
							iLocal_3943++;
						}
					}
					break;
				
				case 7:
					break;
				
				case 22:
					break;
			}
			if (GlobalFunc_588(&iLocal_3952, 5000))
			{
			}
			if (!iLocal_3911)
			{
				switch (iLocal_3954)
				{
					case 0:
						if (!GlobalFunc_5172(&Local_4221, 1))
						{
							if (GlobalFunc_10618(&uLocal_4044, "fam4aud", "fam4_c0", 6, 0, 0, 0))
							{
								RECORDING::_0x293220DA1B46CEBC(2f, 5f, 3);
								iLocal_3954++;
							}
						}
						break;
					
					case 1:
						if (HUD::DOES_BLIP_EXIST(Local_2926.f_2))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -165.656f, -1985.216f, 22.043f, -127.556f, -1985.216f, 27.643f, 4f, 0, 1, 0) || VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2743) > 20000f)
							{
								if (!GlobalFunc_5172(&Local_4221, 0))
								{
									if (GlobalFunc_10618(&uLocal_4044, "fam4aud", "FAM4_C1", 6, 0, 0, 0))
									{
										iLocal_3954++;
									}
								}
							}
						}
						break;
					
					case 2:
						if (func_687(Local_2926.f_2, &(uLocal_3865[0])))
						{
							if (GlobalFunc_10618(&uLocal_4044, "fam4aud", "FAM4_WAY", 6, 0, 0, 0))
							{
								iLocal_3954++;
							}
						}
						break;
					
					case 3:
						if (HUD::DOES_BLIP_EXIST(Local_2926.f_2))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2743) > 25000f)
							{
								if (!GlobalFunc_5172(&Local_4221, 0))
								{
									if (GlobalFunc_10618(&uLocal_4044, "fam4aud", "FAM4_C2", 6, 0, 0, 0))
									{
										iLocal_3954++;
									}
								}
							}
						}
						break;
					
					case 4:
						if (!GlobalFunc_5172(&Local_4221, 0))
						{
							if (GlobalFunc_10618(&uLocal_4044, "fam4aud", "FAM4_CU2", 6, 0, 0, 0))
							{
								iLocal_3954++;
							}
						}
						break;
					
					case 5:
						iLocal_3954++;
						break;
					
					case 6:
						if (func_687(Local_2926.f_2, &(uLocal_3865[0])))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2743) > 62000f)
							{
								if (!GlobalFunc_5172(&Local_4221, 0))
								{
									if (GlobalFunc_10618(&uLocal_4044, "fam4aud", "FAM4_C3", 6, 0, 0, 0))
									{
										iLocal_3954++;
									}
								}
							}
						}
						break;
					
					case 7:
						if (func_687(Local_2926.f_2, &(uLocal_3865[0])))
						{
							iLocal_3954++;
						}
						break;
					
					case 8:
						if (HUD::DOES_BLIP_EXIST(Local_2926.f_2))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2743) > 74000f)
							{
								if (!GlobalFunc_5172(&Local_4221, 0))
								{
									if (GlobalFunc_10618(&uLocal_4044, "fam4aud", "FAM4_C4", 6, 0, 0, 0))
									{
										if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_4_CHASE_TRUCK_1"))
										{
											AUDIO::STOP_AUDIO_SCENE("FAMILY_4_CHASE_TRUCK_1");
										}
										AUDIO::START_AUDIO_SCENE("FAMILY_4_CHASE_TRUCK_2");
										iLocal_3954++;
									}
								}
							}
						}
						break;
					
					case 9:
						if (func_687(Local_2926.f_2, &(uLocal_3865[0])))
						{
							iLocal_3954++;
						}
						break;
					
					case 10:
						if (HUD::DOES_BLIP_EXIST(Local_2926.f_2))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2743) > 103000f)
							{
								if (!GlobalFunc_5172(&Local_4221, 0))
								{
									if (GlobalFunc_10618(&uLocal_4044, "fam4aud", "FAM4_C5", 6, 0, 0, 0))
									{
										iLocal_3954++;
									}
								}
							}
						}
						break;
					
					case 11:
						if (func_687(Local_2926.f_2, &(uLocal_3865[0])))
						{
							iLocal_3954++;
						}
						break;
					
					case 12:
						if (func_687(Local_2926.f_2, &(uLocal_3865[0])))
						{
							iLocal_3954++;
						}
						break;
					
					case 13:
						if (HUD::DOES_BLIP_EXIST(Local_2926.f_2))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2743) > 131000f)
							{
								if (!GlobalFunc_5172(&Local_4221, 0))
								{
									if (GlobalFunc_10618(&uLocal_4044, "fam4aud", "FAM4_C7", 6, 0, 0, 0))
									{
										iLocal_3954++;
									}
								}
							}
						}
						break;
					
					case 14:
						if (HUD::DOES_BLIP_EXIST(Local_2926.f_2))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2743) > 140000f)
							{
								GlobalFunc_4935();
								iLocal_3954++;
							}
						}
						func_687(Local_2926.f_2, &(uLocal_3865[0]));
						break;
					
					case 15:
						break;
					}
				}
		}
	}
	else
	{
		func_687(Local_2926.f_2, &(uLocal_3865[0]));
		func_670();
	}
}

int func_687(var uParam0, var uParam1)//Position - 0x6EBD3
{
	if (func_692(uParam0, uParam1))
	{
		if (GlobalFunc_620())
		{
			GlobalFunc_619(0);
		}
		if (iLocal_3916)
		{
			if (!GlobalFunc_5172(&Local_4221, 0))
			{
				if (GlobalFunc_10626(&uLocal_4044, "fam4aud", &cLocal_4262, &cLocal_4268, 6, 0, 0))
				{
					iLocal_3916 = 0;
				}
			}
		}
		if (!GlobalFunc_5172(&Local_4221, 0) && !iLocal_3916)
		{
			return 1;
		}
	}
	else if (GlobalFunc_111())
	{
		if (!func_689())
		{
			if (!GlobalFunc_620())
			{
				GlobalFunc_619(1);
				if (GlobalFunc_617())
				{
					func_670();
				}
			}
		}
	}
	return 0;
}


int func_689()//Position - 0x6EC8D
{
	var uVar0;
	
	if (GlobalFunc_111())
	{
		MemCopy(&uVar0, {GlobalFunc_560()}, 4);
		if (MISC::ARE_STRINGS_EQUAL(&uVar0, "FAM4_POW") || MISC::ARE_STRINGS_EQUAL(&uVar0, "FAM4_POW2"))
		{
			return 1;
		}
	}
	return 0;
}



int func_692(var uParam0, var uParam1)//Position - 0x6ED2A
{
	if (HUD::DOES_BLIP_EXIST(uParam0))
	{
		if (!PED::IS_PED_INJURED(*uParam1))
		{
			if (func_694(uParam1) || (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_ON_FOOT(*uParam1)))
			{
				if (!GlobalFunc_617() && !GlobalFunc_2233())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}


int func_694(var uParam0)//Position - 0x6ED8C
{
	int iVar0;
	
	if (GlobalFunc_621(&iVar0))
	{
		if (!PED::IS_PED_INJURED(*uParam0))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(*uParam0, iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}


void func_696()//Position - 0x6EDED
{
	switch (iLocal_3980)
	{
		case 0:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 291.3065f, -653.2268f, 28.35263f, 297.3251f, -637.2277f, 35.39275f, 5.5f, 0, 1, 0))
			{
				AUDIO::START_AUDIO_SCENE("FAMILY_4_CHASE_TRUCK_TUNNEL");
				iLocal_3980++;
			}
			break;
		
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 130.1262f, -567.934f, 31.0244f, 124.8335f, -583.8284f, 37.62289f, 3.25f, 0, 1, 0))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_4_CHASE_TRUCK_TUNNEL"))
				{
					AUDIO::STOP_AUDIO_SCENE("FAMILY_4_CHASE_TRUCK_TUNNEL");
				}
				iLocal_3980++;
			}
			break;
		
		case 2:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 722.7059f, -402.1422f, 35.35888f, 705.1086f, -412.5562f, 44.90356f, 9f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 730.1918f, -399.9188f, 35.37416f, 719.6653f, -400.8f, 44.31248f, 4.25f, 0, 1, 0))
			{
				AUDIO::START_AUDIO_SCENE("FAMILY_4_CHASE_TRUCK_JUMP");
				iLocal_3926 = MISC::GET_GAME_TIMER();
				iLocal_3980++;
			}
			break;
		
		case 3:
			Local_2713.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_2713, 1) };
			if (((((Local_2713.f_3.f_2 > 18f && Local_2713.f_3.f_2 < 24f) && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(Local_2713) > 0.5f) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_2713)) || GlobalFunc_588(&iLocal_3926, 4000)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 749.9376f, -418.8858f, 17.44975f, 765.3489f, -455.7631f, 28.3066f, 78.25f, 0, 1, 0))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_4_CHASE_TRUCK_JUMP"))
				{
					AUDIO::STOP_AUDIO_SCENE("FAMILY_4_CHASE_TRUCK_JUMP");
				}
				iLocal_3980++;
			}
			break;
		
		case 4:
			break;
	}
}

void func_697()//Position - 0x6EFE9
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2743, 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2743))
		{
			switch (iLocal_3928)
			{
				case 0:
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2743) < 12000f)
					{
						if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_2743))
						{
							Local_2743.f_7 = 0.3f;
						}
						else
						{
							func_702(Local_2743, PLAYER::PLAYER_PED_ID(), &(Local_2743.f_7), 1f, 10f, 20f, 50f, 2f, 1f, 0.7f, 1);
						}
					}
					else
					{
						MISC::SET_INSTANCE_PRIORITY_HINT(2);
						iLocal_41 = 0;
						iLocal_46 = 0;
						func_701(&fLocal_3997, &Local_2713, Local_2743, 10f, 20f, 50f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 0f, 15f, 1);
						GlobalFunc_2218(&(Local_2743.f_7), fLocal_3997, 1008981770);
						iLocal_3928++;
					}
					func_478(Local_2743, Local_2743.f_7);
					break;
				
				case 1:
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2743) > 43521.09f)
					{
						fLocal_3992 = 10f;
						fLocal_3993 = 20f;
						fLocal_3994 = 50f;
						RECORDING::_0x293220DA1B46CEBC(3f, 2f, 3);
						iLocal_3928++;
					}
					func_701(&fLocal_3997, &Local_2713, Local_2743, 10f, 20f, 50f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 0f, 15f, 1);
					GlobalFunc_2218(&(Local_2743.f_7), fLocal_3997, 1008981770);
					func_478(Local_2743, Local_2743.f_7);
					break;
				
				case 2:
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2743) > 52234.77f)
					{
						iLocal_3928++;
					}
					fLocal_3995 = 1.2f;
					fLocal_3992 = (fLocal_3992 + (MISC::GET_FRAME_TIME() * fLocal_3995));
					if (fLocal_3992 > 20f)
					{
						fLocal_3992 = 20f;
					}
					fLocal_3993 = (fLocal_3993 + (MISC::GET_FRAME_TIME() * fLocal_3995));
					if (fLocal_3993 > 30f)
					{
						fLocal_3993 = 30f;
					}
					fLocal_3994 = (fLocal_3994 + (MISC::GET_FRAME_TIME() * fLocal_3995));
					if (fLocal_3994 > 60f)
					{
						fLocal_3994 = 60f;
					}
					func_701(&fLocal_3997, &Local_2713, Local_2743, fLocal_3992, fLocal_3993, fLocal_3994, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 0f, 15f, 1);
					GlobalFunc_2218(&(Local_2743.f_7), fLocal_3997, 1008981770);
					func_478(Local_2743, Local_2743.f_7);
					GlobalFunc_2218(&(Local_2743.f_7), fLocal_3997, (0.01f * 0.5f));
					break;
				
				case 3:
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2743) > 66924.33f)
					{
						RECORDING::_0x293220DA1B46CEBC(3f, 2f, 3);
						iLocal_3928++;
					}
					fLocal_3995 = 1.2f;
					fLocal_3992 = (fLocal_3992 - (MISC::GET_FRAME_TIME() * fLocal_3995));
					if (fLocal_3992 < 10f)
					{
						fLocal_3992 = 10f;
					}
					fLocal_3993 = (fLocal_3993 - (MISC::GET_FRAME_TIME() * fLocal_3995));
					if (fLocal_3993 < 20f)
					{
						fLocal_3993 = 20f;
					}
					fLocal_3994 = (fLocal_3994 - (MISC::GET_FRAME_TIME() * fLocal_3995));
					if (fLocal_3994 < 50f)
					{
						fLocal_3994 = 50f;
					}
					func_701(&fLocal_3997, &Local_2713, Local_2743, fLocal_3992, fLocal_3993, fLocal_3994, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 0f, 15f, 1);
					GlobalFunc_2218(&(Local_2743.f_7), fLocal_3997, 1008981770);
					func_478(Local_2743, Local_2743.f_7);
					break;
				
				case 4:
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 487.246f, -879.994f, 9.75f, 651.344f, -879.135f, 32.45f, 4f, 0, 1, 0))
					{
						GlobalFunc_11046(4, "half way through truck chase", 1, 0, 0, 1);
					}
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2743) > 76193.88f)
					{
						iLocal_3928++;
					}
					fLocal_3995 = 1.2f;
					fLocal_3992 = (fLocal_3992 + (MISC::GET_FRAME_TIME() * fLocal_3995));
					if (fLocal_3992 > 20f)
					{
						fLocal_3992 = 20f;
					}
					fLocal_3993 = (fLocal_3993 + (MISC::GET_FRAME_TIME() * fLocal_3995));
					if (fLocal_3993 > 30f)
					{
						fLocal_3993 = 30f;
					}
					fLocal_3994 = (fLocal_3994 + (MISC::GET_FRAME_TIME() * fLocal_3995));
					if (fLocal_3994 > 60f)
					{
						fLocal_3994 = 60f;
					}
					func_701(&fLocal_3997, &Local_2713, Local_2743, fLocal_3992, fLocal_3993, fLocal_3994, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 0f, 15f, 1);
					GlobalFunc_2218(&(Local_2743.f_7), fLocal_3997, 1008981770);
					func_478(Local_2743, Local_2743.f_7);
					break;
				
				case 5:
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2743) > 84967.06f)
					{
						RECORDING::_0x293220DA1B46CEBC(3f, 2f, 3);
						iLocal_3928++;
					}
					fLocal_3995 = 1.2f;
					fLocal_3992 = (fLocal_3992 - (MISC::GET_FRAME_TIME() * fLocal_3995));
					if (fLocal_3992 < 10f)
					{
						fLocal_3992 = 10f;
					}
					fLocal_3993 = (fLocal_3993 - (MISC::GET_FRAME_TIME() * fLocal_3995));
					if (fLocal_3993 < 20f)
					{
						fLocal_3993 = 20f;
					}
					fLocal_3994 = (fLocal_3994 - (MISC::GET_FRAME_TIME() * fLocal_3995));
					if (fLocal_3994 < 50f)
					{
						fLocal_3994 = 50f;
					}
					func_701(&fLocal_3997, &Local_2713, Local_2743, fLocal_3992, fLocal_3993, fLocal_3994, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 0f, 15f, 1);
					GlobalFunc_2218(&(Local_2743.f_7), fLocal_3997, 1008981770);
					func_478(Local_2743, Local_2743.f_7);
					break;
				
				case 6:
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2743) > 126768f)
					{
						RECORDING::_0x293220DA1B46CEBC(3f, 2f, 3);
						iLocal_3928++;
					}
					fLocal_3995 = 1.2f;
					fLocal_3992 = (fLocal_3992 + (MISC::GET_FRAME_TIME() * fLocal_3995));
					if (fLocal_3992 > 20f)
					{
						fLocal_3992 = 20f;
					}
					fLocal_3993 = (fLocal_3993 + (MISC::GET_FRAME_TIME() * fLocal_3995));
					if (fLocal_3993 > 30f)
					{
						fLocal_3993 = 30f;
					}
					fLocal_3994 = (fLocal_3994 + (MISC::GET_FRAME_TIME() * fLocal_3995));
					if (fLocal_3994 > 60f)
					{
						fLocal_3994 = 60f;
					}
					func_701(&fLocal_3997, &Local_2713, Local_2743, fLocal_3992, fLocal_3993, fLocal_3994, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 0f, 15f, 1);
					GlobalFunc_2218(&(Local_2743.f_7), fLocal_3997, 1008981770);
					func_478(Local_2743, Local_2743.f_7);
					break;
				
				case 7:
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2743) > 128070.6f)
					{
						iLocal_3928++;
					}
					fLocal_3995 = 5f;
					fLocal_3992 = (fLocal_3992 + (MISC::GET_FRAME_TIME() * fLocal_3995));
					if (fLocal_3992 > 25f)
					{
						fLocal_3992 = 25f;
					}
					fLocal_3993 = (fLocal_3993 + (MISC::GET_FRAME_TIME() * fLocal_3995));
					if (fLocal_3993 > 35f)
					{
						fLocal_3993 = 35f;
					}
					fLocal_3994 = (fLocal_3994 + (MISC::GET_FRAME_TIME() * fLocal_3995));
					if (fLocal_3994 > 65f)
					{
						fLocal_3994 = 65f;
					}
					func_701(&fLocal_3997, &Local_2713, Local_2743, fLocal_3992, fLocal_3993, fLocal_3994, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 0f, 15f, 1);
					GlobalFunc_2218(&(Local_2743.f_7), fLocal_3997, 1008981770);
					func_478(Local_2743, Local_2743.f_7);
					break;
				
				case 8:
					fLocal_3995 = 8f;
					fLocal_3992 = (fLocal_3992 + (MISC::GET_FRAME_TIME() * fLocal_3995));
					if (fLocal_3992 > 180f)
					{
						fLocal_3992 = 180f;
					}
					fLocal_3993 = (fLocal_3993 + (MISC::GET_FRAME_TIME() * fLocal_3995));
					if (fLocal_3993 > 200f)
					{
						fLocal_3993 = 200f;
					}
					fLocal_3994 = (fLocal_3994 + (MISC::GET_FRAME_TIME() * fLocal_3995));
					if (fLocal_3994 > 235f)
					{
						fLocal_3994 = 235f;
					}
					func_701(&fLocal_3997, &Local_2713, Local_2743, fLocal_3992, fLocal_3993, fLocal_3994, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 0f, 15f, 1);
					GlobalFunc_2218(&(Local_2743.f_7), fLocal_3997, 1008981770);
					func_478(Local_2743, Local_2743.f_7);
					break;
			}
			func_607();
			func_699();
			func_698();
		}
		else if (!bLocal_3914 && !iLocal_3915)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_2743, 1), 1) < 15f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_4031[0]))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_4031[0]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_4031[1]))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_4031[1]));
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("towtruck"));
			}
		}
	}
}

void func_698()//Position - 0x6F870
{
	if (GlobalFunc_588(&iLocal_3982, 35000))
	{
		VEHICLE::START_VEHICLE_HORN(Local_2743, 2500, 0, 0);
		iLocal_3982 = MISC::GET_GAME_TIMER();
	}
}

void func_699()//Position - 0x6F899
{
	switch (iLocal_3951)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2509[1]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2509[1], 0))
				{
					iLocal_4041 = iLocal_2509[1];
					iLocal_4012 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2509[1], -1);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_4012))
					{
						iLocal_3951++;
					}
				}
			}
			break;
		
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2509[1], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_4041))
				{
					iLocal_3951++;
				}
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
}


void func_701(float fParam0, var uParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, float fParam13, float fParam14, int iParam15)//Position - 0x6F954
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	float fVar14;
	float fVar15;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(*uParam1, 1) };
	Var3 = { ENTITY::GET_ENTITY_COORDS(iParam2, 1) };
	Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam2, Var0) };
	fVar9 = SYSTEM::VDIST(Var0, Var3);
	fVar10 = 0f;
	fVar11 = (fParam11 - 1f);
	fVar12 = (1f - fParam9);
	if (Var6.f_1 < 1f)
	{
		if (fVar9 > fParam5)
		{
			iVar13 = 0;
			if (fVar9 > fParam6)
			{
				if (fVar9 > (fParam6 * 2f))
				{
					iVar13 = 1;
				}
				fVar9 = fParam6;
			}
			fVar10 = ((fVar9 - fParam5) / (fParam6 - fParam5));
			if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam2) || iVar13)
			{
				*fParam0 = (fParam9 - ((fParam9 - fParam10) * fVar10));
			}
			else
			{
				*fParam0 = fParam9;
			}
		}
		else if (fVar9 > fParam4)
		{
			fVar10 = ((fVar9 - fParam4) / (fParam5 - fParam4));
			*fParam0 = (1f - (fVar12 * fVar10));
		}
		else
		{
			if (fVar9 < fParam3)
			{
				fVar9 = fParam3;
			}
			fVar10 = ((fParam4 - fVar9) / (fParam4 - fParam3));
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()) && iParam15)
			{
				*fParam0 = (1f + ((fVar10 * fVar11) * 2f));
			}
			else
			{
				*fParam0 = (1f + (fVar10 * fVar11));
			}
		}
	}
	else
	{
		if (fVar9 > fParam7)
		{
			fVar9 = fParam7;
		}
		fVar10 = (fVar9 / fParam7);
		fVar14 = (ENTITY::GET_ENTITY_SPEED(iParam2) - ENTITY::GET_ENTITY_SPEED(*uParam1));
		if (fVar14 > 0f)
		{
			fVar10 = (fVar10 * 0.5f);
		}
		if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()) && iParam15)
		{
			*fParam0 = (2f + fVar10);
		}
		else if (ENTITY::GET_ENTITY_SPEED(*uParam1) < 5f && fVar14 > 0f)
		{
			*fParam0 = (0.6f + fVar10);
		}
		else
		{
			*fParam0 = (1f + fVar10);
		}
	}
	*fParam0 = (*fParam0 * fParam8);
	if (bParam12)
	{
		fVar15 = fParam13;
		if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()) && iParam15)
		{
			fParam14 = (fParam14 * 2f);
			fParam13 = (fParam13 * 2f);
		}
		if (*fParam0 > 1f)
		{
			fVar15 = (fParam13 + ((fParam14 - fParam13) * (*fParam0 - 1f)));
		}
		VEHICLE::MODIFY_VEHICLE_TOP_SPEED(*uParam1, -fVar15);
	}
}

void func_702(int iParam0, int iParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, bool bParam10)//Position - 0x6FB38
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	
	if (iLocal_43 == 0)
	{
		if (*uParam2 < fParam3)
		{
			*uParam2 = fParam3;
			iLocal_43 = 1;
		}
	}
	if (fParam8 < 0f)
	{
		fParam8 = fLocal_1077;
	}
	fVar0 = (fParam3 * fParam7);
	if (!fVar0 > fParam3)
	{
		fVar0 = (fParam3 + 0.1f);
	}
	fVar5 = (fParam3 * fParam9);
	fVar6 = (((fParam6 - fParam5) * 0.4f) + fParam5);
	fVar2 = GlobalFunc_2916(iParam0, iParam1);
	if (fVar2 < 0f)
	{
		fVar2 = (fVar2 * -1f);
	}
	fVar3 = fVar2;
	if (fVar3 < fParam4)
	{
		fVar3 = fParam4;
	}
	if (fVar3 > fVar6)
	{
		fVar3 = fVar6;
	}
	fVar4 = fParam3;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (GlobalFunc_5657(iParam1, iParam0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, 0))
			{
				fVar4 = fVar0;
			}
			else if (fVar2 < 50f)
			{
				fVar4 = fParam3;
			}
			else
			{
				fVar4 = fVar0;
			}
		}
		else if (fVar2 < fParam5)
		{
			if (GlobalFunc_2915(iParam0, iParam1) < fParam5)
			{
				fVar1 = GlobalFunc_2914(iParam0, iParam1);
				fVar1 = (fVar1 + -15f);
				if (fVar1 < 0f)
				{
					fVar1 = 0f;
				}
				if (fVar1 > 75f)
				{
					fVar1 = 75f;
				}
				fVar7 = ((75f - fVar1) / 75f);
			}
			else
			{
				fVar7 = 1f;
			}
			fVar4 = ((((((fParam5 - fParam4) - (fVar3 - fParam4)) / (fParam5 - fParam4)) * (fVar0 - fParam3)) * fVar7) + fParam3);
		}
		else if (fVar2 > fParam6)
		{
			fVar4 = fVar5;
			iLocal_44 = 1;
		}
		else if (iLocal_44)
		{
			if (fVar2 < fVar6)
			{
				fVar4 = fParam3;
				iLocal_44 = 0;
			}
			else
			{
				fVar4 = fVar5;
			}
		}
		else
		{
			fVar4 = fParam3;
		}
	}
	fVar1 = (fVar4 - *uParam2);
	if (fVar1 > 0f)
	{
		fVar1 = MISC::GET_FRAME_TIME();
		fVar8 = ((fLocal_1084 * fParam3) * fVar1);
		fVar1 = (fVar4 - *uParam2);
		if (fVar1 > fVar8)
		{
			fVar1 = fVar8;
		}
		*uParam2 = (*uParam2 + fVar1);
	}
	else
	{
		fVar1 = MISC::GET_FRAME_TIME();
		fVar8 = ((fLocal_1085 * fParam3) * fVar1);
		fVar1 = (fVar4 - *uParam2);
		if (fVar1 < (fVar8 * -1f))
		{
			fVar1 = (fVar8 * -1f);
		}
		*uParam2 = (*uParam2 + fVar1);
	}
	if (bParam10)
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, 0))
			{
				iVar9 = PED::GET_VEHICLE_PED_IS_IN(iParam1, 0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar9))
				{
					iVar10 = ENTITY::GET_ENTITY_MODEL(iVar9);
					if (VEHICLE::IS_THIS_MODEL_A_CAR(iVar10) || VEHICLE::IS_THIS_MODEL_A_BIKE(iVar10))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar9, 0))
						{
							fVar1 = fVar4;
							if (fVar1 < fParam3)
							{
								fVar1 = fParam3;
							}
							fVar1 = (fVar1 - fParam3);
							fVar1 = (fVar1 / (fVar0 - fParam3));
							fVar1 = (fVar1 * fParam8);
							fVar1 = (fVar1 * (fLocal_1075 - fLocal_1076));
							fVar1 = (fVar1 + fLocal_1076);
							fLocal_1074 = fVar1;
							if (fLocal_1074 < fLocal_1076)
							{
								fLocal_1074 = fLocal_1076;
							}
							if (fLocal_1074 > fLocal_1075)
							{
								fLocal_1074 = fLocal_1075;
							}
							PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), fLocal_1074);
						}
					}
				}
			}
		}
	}
}




void func_706()//Position - 0x6FF5A
{
	if (!iLocal_3924)
	{
		GlobalFunc_10157(&Local_4221, ENTITY::GET_ENTITY_COORDS(Local_2926, 1), 0.01f, 0.01f, 0.01f, 0, uLocal_3865[0], Local_2713, "", "family4_god_14", "", "family4_god_3", 0, 0, 1, -1);
		if (HUD::DOES_BLIP_EXIST(Local_4221.f_5))
		{
			HUD::SET_BLIP_ALPHA(Local_4221.f_5, 0);
			HUD::SET_BLIP_ROUTE(Local_4221.f_5, 0);
			if (!HUD::DOES_BLIP_EXIST(Local_2926.f_2))
			{
				Local_2926.f_2 = GlobalFunc_6797(Local_2926, 1, 145);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_2926.f_2, "family4_god_17");
				HUD::SET_BLIP_SCALE(Local_2926.f_2, 1f);
			}
			else if (PED::IS_PED_SITTING_IN_VEHICLE(Local_2926, Local_2743))
			{
				HUD::SET_BLIP_SCALE(Local_2926.f_2, 1f);
			}
			else
			{
				HUD::SET_BLIP_SCALE(Local_2926.f_2, 0.5f);
			}
			GlobalFunc_2216(Local_2926.f_2, Local_2926, 200f, 1061158912, 0);
		}
		else if (HUD::DOES_BLIP_EXIST(Local_2926.f_2))
		{
			HUD::REMOVE_BLIP(&(Local_2926.f_2));
		}
	}
}






































int func_744()//Position - 0x72891
{
	RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	if (func_759())
	{
		iLocal_2696 = 7;
		return 1;
	}
	func_521();
	func_757(242628503);
	GlobalFunc_587();
	func_755();
	func_754();
	func_43();
	func_753();
	GlobalFunc_587();
	func_750();
	func_522();
	func_749();
	func_748();
	func_746();
	func_745();
	return 0;
}

void func_745()//Position - 0x728EA
{
	if (!func_518("family4_god_18"))
	{
		if (!GlobalFunc_5172(&Local_4221, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_2713))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2713))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(Local_2713, Local_2728.f_3, 2f, 2f, 2f, 0, 1, 0))
					{
						if ((!PED::IS_PED_SITTING_IN_VEHICLE(uLocal_3865[0], Local_2713) && !PED::IS_PED_IN_VEHICLE(uLocal_3865[0], Local_2713, 0)) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uLocal_3865[0]))
						{
							RECORDING::_0x293220DA1B46CEBC(8f, 5f, 4);
							GlobalFunc_164("family4_god_18", 7500, 1);
							func_515("family4_god_18", 1);
						}
					}
				}
			}
		}
	}
}

void func_746()//Position - 0x72992
{
	switch (iLocal_3983)
	{
		case 0:
			AUDIO::_0x149AEE66F0CB3A99(1f, 1f);
			iLocal_3983++;
			break;
		
		case 1:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -252.8894f, -1997.574f, 29.1458f, 1.5f, 1.5f, 1.5f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(uLocal_3865[0], -252.8894f, -1997.574f, 29.1458f, 1.5f, 1.5f, 1.5f, 0, 1, 0))
			{
				AUDIO::_0x062D5EAD4DA2FA6A();
				if (!PED::IS_PED_INJURED(Local_3006[0 /*20*/]))
				{
					AUDIO::PLAY_PAIN(Local_3006[0 /*20*/], 3, 0, 0);
				}
				if (!PED::IS_PED_INJURED(Local_3006[10 /*20*/]))
				{
					AUDIO::PLAY_PAIN(Local_3006[10 /*20*/], 7, 0, 0);
				}
				iLocal_3983++;
			}
			break;
		
		case 2:
			if (!func_747(PLAYER::PLAYER_PED_ID(), -260.7652f, -2026.163f, 29.1458f))
			{
				AUDIO::_0x149AEE66F0CB3A99(0f, 0f);
				iLocal_3983++;
			}
			break;
	}
}

int func_747(int iParam0, struct<3> Param1)//Position - 0x72A95
{
	int iVar0;
	int iVar1;
	
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(Param1);
	iVar1 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
	if (!iVar1 == 0)
	{
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

void func_748()//Position - 0x72AC3
{
	switch (iLocal_3979)
	{
		case 0:
			AUDIO::START_AUDIO_SCENE("FAMILY_4_CHASE_FOOT");
			iLocal_3979++;
			break;
		
		case 1:
			if (!func_747(PLAYER::PLAYER_PED_ID(), -260.7652f, -2026.163f, 29.1458f))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_4_CHASE_FOOT"))
				{
					AUDIO::STOP_AUDIO_SCENE("FAMILY_4_CHASE_FOOT");
				}
				AUDIO::START_AUDIO_SCENE("FAMILY_4_CHASE_FOOT_OUTSIDE");
				iLocal_3979++;
			}
			break;
		
		case 2:
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) == 1)
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_4_CHASE_FOOT_OUTSIDE"))
				{
					AUDIO::STOP_AUDIO_SCENE("FAMILY_4_CHASE_FOOT_OUTSIDE");
				}
				iLocal_3979++;
			}
			break;
		
		case 3:
			break;
	}
}

void func_749()//Position - 0x72B79
{
	switch (iLocal_3958)
	{
		case 0:
			if (GlobalFunc_10618(&uLocal_4044, "fam4Aud", "FAM4_GOHOME", 7, 0, 0, 0))
			{
				iLocal_3958++;
			}
			break;
		
		case 1:
			if (GlobalFunc_10618(&uLocal_4044, "fam4Aud", "FAM4_SHOUT", 7, 0, 0, 0))
			{
				iLocal_3958++;
			}
			break;
		
		case 2:
			if (!GlobalFunc_5172(&Local_4221, 0))
			{
				GlobalFunc_164("family4_god_11", 7500, 1);
				iLocal_3958++;
			}
			break;
		
		case 3:
			if (!func_747(PLAYER::PLAYER_PED_ID(), -260.7652f, -2026.163f, 29.1458f))
			{
				if (bLocal_3919)
				{
					if (GlobalFunc_10618(&uLocal_4044, "fam4Aud", "FAM4_TOW", 7, 0, 0, 0))
					{
						iLocal_3926 = MISC::GET_GAME_TIMER();
						iLocal_3958++;
					}
				}
				else
				{
					iLocal_3958++;
				}
			}
			break;
		
		case 4:
			if (GlobalFunc_10618(&uLocal_4044, "fam4Aud", "FAM4_TRU", 7, 0, 0, 0))
			{
				iLocal_3926 = MISC::GET_GAME_TIMER();
				iLocal_3958++;
			}
			break;
		
		case 5:
			if (!GlobalFunc_5172(&Local_4221, 0))
			{
				GlobalFunc_164("family4_god_1", 7500, 1);
				iLocal_3958++;
			}
			break;
		
		case 6:
			if (!GlobalFunc_5172(&Local_4221, 0))
			{
			}
			break;
	}
}

void func_750()//Position - 0x72CD0
{
	struct<3> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3865[0]))
	{
		PED::SET_PED_RESET_FLAG(uLocal_3865[0], 247, 1);
		switch (iLocal_3938)
		{
			case 0:
				iLocal_3938++;
				break;
			
			case 1:
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_3865[0]))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_3865[0], -244.914f, -2007.479f, 23.691f, -244.325f, -2004.946f, 26.191f, 4.3f, 0, 1, 0) || !func_751(PLAYER::PLAYER_PED_ID(), -249.8176f, -2008.059f, 29.1458f, "GtaMloRoom001"))
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_3865[0], 2f, 0);
					}
					else
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_3865[0], 3f, 0);
					}
				}
				TASK::WAYPOINT_RECORDING_GET_COORD("family4_1", 55, &Var0);
				if (ENTITY::IS_ENTITY_AT_COORD(uLocal_3865[0], Var0, 1.5f, 1.5f, 2f, 0, 1, 0))
				{
					if (func_747(PLAYER::PLAYER_PED_ID(), -260.7652f, -2026.163f, 29.1458f))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_4248);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_4248);
						TASK::TASK_PERFORM_SEQUENCE(uLocal_3865[0], uLocal_4248);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_4248);
						iLocal_3938 = 2;
					}
					else
					{
						PED::SET_PED_CONFIG_FLAG(uLocal_3865[0], 170, 1);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_4248);
						TASK::TASK_ENTER_VEHICLE(0, Local_2713, -1, 0, 2f, 8, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_4248);
						TASK::TASK_PERFORM_SEQUENCE(uLocal_3865[0], uLocal_4248);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_4248);
						iLocal_3938 = 3;
					}
				}
				break;
			
			case 2:
				if (func_747(PLAYER::PLAYER_PED_ID(), -260.7652f, -2026.163f, 29.1458f))
				{
					if (PED::IS_PED_FACING_PED(uLocal_3865[0], PLAYER::PLAYER_PED_ID(), 45f))
					{
						if (STREAMING::HAS_ANIM_DICT_LOADED("missfam4"))
						{
							if (GlobalFunc_588(&iLocal_3926, 8000))
							{
								if (func_751(PLAYER::PLAYER_PED_ID(), -249.8176f, -2008.059f, 29.1458f, "GtaMloRoom001"))
								{
									GlobalFunc_10618(&uLocal_4044, "fam4Aud", "FAM4_LAG", 6, 0, 0, 0);
								}
								TASK::OPEN_SEQUENCE_TASK(&uLocal_4248);
								TASK::TASK_PLAY_ANIM(0, "missfam4", "say_hurry_up_a_trevor", 8f, -4f, -1, 0, 0, 0, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_4248);
								TASK::TASK_PERFORM_SEQUENCE(uLocal_3865[0], uLocal_4248);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_4248);
								iLocal_3926 = MISC::GET_GAME_TIMER();
							}
						}
					}
					else if (func_52(uLocal_3865[0], -875674219, 1, -2))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_4248);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_4248);
						TASK::TASK_PERFORM_SEQUENCE(uLocal_3865[0], uLocal_4248);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_4248);
					}
				}
				else
				{
					PED::SET_PED_CONFIG_FLAG(uLocal_3865[0], 170, 1);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_4248);
					TASK::TASK_ENTER_VEHICLE(0, Local_2713, -1, 0, 2f, 8, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_4248);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_3865[0], uLocal_4248);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_4248);
					iLocal_3938 = 3;
				}
				break;
			
			case 3:
				if (!PED::IS_PED_SITTING_IN_VEHICLE(uLocal_3865[0], Local_2713))
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_4011))
					{
						uLocal_4011 = GlobalFunc_6783(uLocal_3865[0], 0, 0);
					}
					if (func_52(uLocal_3865[0], 242628503, 1, -2))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_4248);
						TASK::TASK_ENTER_VEHICLE(0, Local_2713, -1, 0, 2f, 1, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_4248);
						TASK::TASK_PERFORM_SEQUENCE(uLocal_3865[0], uLocal_4248);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_4248);
					}
				}
				else if (HUD::DOES_BLIP_EXIST(uLocal_4011))
				{
					HUD::REMOVE_BLIP(&uLocal_4011);
				}
				break;
			
			case 4:
				break;
			}
	}
}

int func_751(int iParam0, struct<3> Param1, char* sParam4)//Position - 0x7303D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(Param1);
		iVar1 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
		if (!iVar0 == 0)
		{
			if (iVar0 == iVar1)
			{
				iVar2 = INTERIOR::GET_KEY_FOR_ENTITY_IN_ROOM(iParam0);
				iVar3 = MISC::GET_HASH_KEY(sParam4);
				if (iVar2 != 0)
				{
					if (iVar2 == iVar3)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}


void func_753()//Position - 0x7309A
{
	switch (iLocal_3981)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(Local_3568) && ENTITY::DOES_ENTITY_EXIST(Local_2713))
			{
				if (!PED::IS_PED_INJURED(Local_3568))
				{
					STREAMING::REQUEST_ANIM_DICT("veh@truck@ds@idle_panic");
					if (PED::IS_PED_IN_VEHICLE(uLocal_3865[0], Local_2713, 0))
					{
						if (STREAMING::HAS_ANIM_DICT_LOADED("veh@truck@ds@idle_panic"))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3568, "veh@truck@ds@idle_panic", "sit", 3))
							{
								TASK::TASK_PLAY_ANIM(Local_3568, "veh@truck@ds@idle_panic", "sit", 8f, -8f, -1, 1, 0, 0, 0, 0);
							}
						}
					}
					if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_3568, Local_2713))
					{
						PED::SET_PED_KEEP_TASK(Local_3568, 1);
						TASK::TASK_SMART_FLEE_PED(Local_3568, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
						iLocal_3981 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (GlobalFunc_10618(&uLocal_4044, "fam4aud", "FAM4_NOTRU", 7, 0, 0, 0))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_3568);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3568.f_1);
				STREAMING::REMOVE_ANIM_DICT("veh@truck@ds@idle_panic");
				iLocal_3981++;
			}
			break;
		
		case 2:
			break;
	}
}

void func_754()//Position - 0x731A9
{
	struct<3> Var0;
	int iVar3;
	
	switch (iLocal_3936)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("missfamily4_fameshame");
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -252.8894f, -1997.574f, 29.1458f, 1.5f, 1.5f, 1.5f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(uLocal_3865[0], -252.8894f, -1997.574f, 29.1458f, 1.5f, 1.5f, 1.5f, 0, 1, 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_4248);
				TASK::TASK_FORCE_MOTION_STATE(0, -530524, 0);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "family4_0", 12, 10, -1);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_4248);
				TASK::TASK_PERFORM_SEQUENCE(Local_2926, uLocal_4248);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_4248);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_2926, 0, 0);
				iLocal_3936++;
			}
			break;
		
		case 1:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_2926))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_2926, 3f, 0);
			}
			if (TASK::WAYPOINT_RECORDING_GET_COORD("family4_0", 48, &Var0))
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_2926, Var0, 1.5f, 1.5f, 1.6f, 0, 1, 0))
				{
					if (func_52(Local_2926, 242628503, 1, -2))
					{
						if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("family4_0", ENTITY::GET_ENTITY_COORDS(Local_2926, 1), &iVar3))
						{
							iVar3++;
							if (iVar3 > 59)
							{
								iVar3 = 59;
							}
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2926, 1);
							TASK::CLEAR_PED_TASKS(Local_2926);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_4248);
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "family4_0", iVar3, 2, -1);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_4248);
							TASK::TASK_PERFORM_SEQUENCE(Local_2926, uLocal_4248);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_4248);
						}
					}
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_4248);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfamily4_fameshame", "lazlow_getincar_l", -228.974f, -2048.902f, 27.12f, 0f, 0f, -122.436f, 0f, 2), 2f, -1, 1193033728, 1056964608);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_4248);
					TASK::TASK_PERFORM_SEQUENCE(Local_2926, uLocal_4248);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_4248);
					iLocal_3936++;
				}
			}
			break;
		
		case 2:
			if (STREAMING::HAS_ANIM_DICT_LOADED("missfamily4_fameshame") && ENTITY::DOES_ENTITY_EXIST(Local_2743))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(Local_2926, PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfamily4_fameshame", "lazlow_getincar_l", -228.974f, -2048.902f, 27.12f, 0f, 0f, -122.436f, 0f, 2), 0.5f, 0.5f, 1.6f, 0, 1, 0) || func_52(Local_2926, 242628503, 1, -2))
				{
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_2926, Local_2743, 0);
					Local_3998 = { -228.974f, -2048.902f, 27.12f };
					Local_4001 = { 0f, 0f, -122.436f };
					Local_2926.f_11 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3998, Local_4001, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_2926, Local_2926.f_11, "missfamily4_fameshame", "lazlow_getincar_l", 4f, -8f, 1, 0, 1148846080, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_2743, Local_2926.f_11, "lazlow_getincar_car", "missfamily4_fameshame", 1000f, -8f, 0, 1148846080);
					PED::SET_SYNCHRONIZED_SCENE_RATE(Local_2926.f_11, 1.15f);
					iLocal_3936++;
				}
			}
			break;
		
		case 3:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_2926.f_11))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_2926.f_11) > 0.93f)
				{
					HUD::SET_BLIP_SCALE(Local_2926.f_2, 1f);
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_2743, 1000f, 1);
					TASK::CLEAR_PED_TASKS(Local_2926);
					PED::SET_PED_INTO_VEHICLE(Local_2926, Local_2743, -1);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_2743, 1);
					STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
					STREAMING::SET_PED_POPULATION_BUDGET(2);
					PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					PED::SET_CREATE_RANDOM_COPS(0);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					func_508("lkfamily4", 1, 1, 1);
					func_507();
					fLocal_1078 = 200f;
					iLocal_41 = 1;
					iLocal_46 = 1;
					iLocal_55 = 1;
					iLocal_53 = 1;
					func_506(1, 3, 11);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2743, 1, "lkfamily4", 1);
					func_478(Local_2743, 0.7f);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2743, 1);
					ENTITY::SET_ENTITY_PROOFS(Local_2743, 0, 1, 0, 1, 1, 0, 0, 0);
					func_477(joaat("sentinel"), 100);
					func_477(joaat("schafter2"), 100);
					func_477(joaat("taco"), 100);
					iLocal_3936++;
				}
			}
			break;
		
		case 4:
			break;
	}
}

void func_755()//Position - 0x735B5
{
	if (HUD::DOES_BLIP_EXIST(Local_2926.f_2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_2743))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2743))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2743) > 7000f)
				{
					if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2713))
					{
						GlobalFunc_2216(Local_2926.f_2, Local_2926, 200f, 0.6f, 1);
					}
					else
					{
						GlobalFunc_2216(Local_2926.f_2, Local_2926, 200f, 1061158912, 0);
					}
				}
			}
		}
	}
}


void func_757(int iParam0)//Position - 0x73635
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), iParam0) == 1)
	{
		iVar4 = 28;
		GlobalFunc_612(&iVar0, &iVar1, &uVar2, &iVar3, 0);
		if (!PAD::IS_LOOK_INVERTED())
		{
			iVar3 = (iVar3 * -1);
		}
		if ((((((((iVar1 > iVar4 || iVar1 < (iVar4 * -1)) || iVar0 > iVar4) || iVar0 < (iVar4 * -1)) || PAD::IS_CONTROL_PRESSED(0, 21)) || PAD::IS_CONTROL_PRESSED(0, 75)) || PAD::IS_CONTROL_PRESSED(0, 22)) || PAD::IS_CONTROL_PRESSED(0, 23)) || PAD::IS_CONTROL_PRESSED(0, 24))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
	}
}


int func_759()//Position - 0x737B5
{
	int iVar0;
	
	iVar0 = 0;
	switch (iLocal_3937)
	{
		case 0:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -248.775f, -1999.858f, 25.003f, -248.012f, -1997.058f, 31.302f, 2f, 0, 1, 0))
			{
				PED::DELETE_PED(&Local_2966);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2966.f_1);
				STREAMING::REMOVE_ANIM_DICT("missfam4leadinoutmcs2");
				PED::DELETE_PED(&Local_3608);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3608.f_1);
				iVar0 = 0;
				while (iVar0 <= (Local_3527 - 1))
				{
					PED::DELETE_PED(&(Local_3527[iVar0 /*20*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3527[iVar0 /*20*/].f_1);
					iVar0++;
				}
				OBJECT::DELETE_OBJECT(&Local_3769);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3769.f_2);
				OBJECT::DELETE_OBJECT(&Local_3793);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3793.f_2);
				if (INTERIOR::IS_VALID_INTERIOR(iLocal_4246))
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_4246);
				}
				iLocal_3937++;
			}
			func_512(1);
			break;
		
		case 1:
			func_512(1);
			if (!HUD::DOES_BLIP_EXIST(Local_2713.f_2))
			{
				if (!func_747(PLAYER::PLAYER_PED_ID(), -260.7652f, -2026.163f, 29.1458f))
				{
					RECORDING::_0x293220DA1B46CEBC(3f, 2f, 3);
					Local_2713.f_2 = GlobalFunc_6783(Local_2713, 0, 0);
				}
			}
			func_697();
			if (ENTITY::DOES_ENTITY_EXIST(Local_2713))
			{
				if ((PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2713) && PED::IS_PED_SITTING_IN_VEHICLE(uLocal_3865[0], Local_2713)) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2743))
				{
					func_761();
					func_760();
					GlobalFunc_601(2, 0);
					AUDIO::START_AUDIO_SCENE("FAMILY_4_CHASE_TRUCK_1");
					AUDIO::TRIGGER_MUSIC_EVENT("FAM4_CHASE_START");
					if (HUD::DOES_BLIP_EXIST(uLocal_4011))
					{
						HUD::REMOVE_BLIP(&uLocal_4011);
					}
					if (HUD::DOES_BLIP_EXIST(Local_2713.f_2))
					{
						HUD::REMOVE_BLIP(&(Local_2713.f_2));
					}
					GlobalFunc_11046(3, "Chase truck", 1, 0, 0, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_760()//Position - 0x73979
{
	iLocal_3916 = 0;
	StringCopy(&cLocal_4262, "null", 24);
	StringCopy(&cLocal_4268, "null", 24);
}

void func_761()//Position - 0x73999
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_3963)
	{
		iLocal_3963[iVar0] = 0;
		iVar0++;
	}
}

int func_762()//Position - 0x739C0
{
	int iVar0;
	
	iVar0 = 0;
	func_43();
	switch (iLocal_3955)
	{
		case 0:
			if (func_763())
			{
				bLocal_3919 = true;
			}
			GlobalFunc_8316(1, 1, 1, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "lazlow", 2, Local_2926.f_1, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Tracy", 2, Local_2966.f_1, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "judges_security", 2, Local_3608.f_1, 0);
			RECORDING::_0x293220DA1B46CEBC(5f, 0f, 4);
			RECORDING::_0x48621C9FCA3EBD28(4);
			switch (GlobalFunc_8315())
			{
				case 0:
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_3865[2], 1);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_3865[2], "trevor", 0, 0, 0);
					iLocal_3922 = 1;
					CUTSCENE::START_CUTSCENE(1024);
					break;
				
				case 2:
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_3865[0], 1);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_3865[0], "michael", 0, 0, 0);
					CUTSCENE::START_CUTSCENE(0);
					break;
			}
			iLocal_3955++;
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				MISC::CLEAR_AREA(-228.2306f, -2047.419f, 26.6199f, 1000f, 1, 0, 0, 0);
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
				STREAMING::REMOVE_ANIM_DICT("missfam4");
				if (ENTITY::DOES_ENTITY_EXIST(Local_2743))
				{
					VEHICLE::DELETE_VEHICLE(&Local_2743);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2743.f_1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_2713))
				{
					VEHICLE::DELETE_VEHICLE(&Local_2713);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2713.f_1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_2728))
				{
					VEHICLE::DELETE_VEHICLE(&Local_2728);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2728.f_1);
				iVar0 = 0;
				while (iVar0 <= (Local_2819 - 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_2819[iVar0 /*15*/]))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_2819[iVar0 /*15*/]));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2819[iVar0 /*15*/].f_1);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_2865[iVar0 /*15*/]))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_2865[iVar0 /*15*/]));
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2865[iVar0 /*15*/].f_1);
					iVar0++;
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_3568))
				{
					PED::DELETE_PED(&Local_3568);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_4030))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_4030);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_4034))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_4034);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_4035))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_4035);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_4036))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_4036);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_4037))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_4037);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sentinel"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("schafter2"));
				if (ENTITY::DOES_ENTITY_EXIST(Local_3817.x))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3817.f_2);
					OBJECT::DELETE_OBJECT(&Local_3817);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_3588))
				{
					PED::DELETE_PED(&Local_3588);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3588.f_1);
				}
				VEHICLE::REMOVE_VEHICLE_RECORDING(501, "lkfamily4");
				VEHICLE::REMOVE_VEHICLE_RECORDING(502, "lkfamily4");
				GlobalFunc_5652(&Local_4221, 1, 0);
				iVar0 = 8;
				while (iVar0 <= 25)
				{
					if (!PED::IS_PED_INJURED(Local_3006[iVar0 /*20*/]))
					{
						TASK::TASK_LOOK_AT_COORD(Local_3006[iVar0 /*20*/], -249.6f, -2016.1f, 30.8f, 15000, 2048, 2);
					}
					iVar0++;
				}
				iLocal_3955++;
			}
			break;
		
		case 2:
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (!CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() >= 40000)
					{
						func_547();
					}
					if (!func_518("FAM4_MISSION_START"))
					{
						if (CUTSCENE::GET_CUTSCENE_TIME() >= 125366)
						{
							AUDIO::TRIGGER_MUSIC_EVENT("FAM4_MISSION_START");
							func_515("FAM4_MISSION_START", 1);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lazlow", Local_2926.f_1)))
					{
						Local_2926 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lazlow", Local_2926.f_1));
					}
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Tracy", Local_2966.f_1)))
					{
						Local_2966 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Tracy", Local_2966.f_1));
					}
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("judges_security", Local_3608.f_1)))
					{
						Local_3608 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("judges_security", Local_3608.f_1));
					}
					switch (GlobalFunc_8315())
					{
						case 0:
							if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("michael", GlobalFunc_4917(0)))
							{
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -240.5416f, -2006.294f, 23.6856f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 85.0646f);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_4248);
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "family4_1", 8, 44, -1);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_4248);
								TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_4248);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_4248);
								PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -530524, 0, 0, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
							}
							if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("trevor", GlobalFunc_4917(2)))
							{
								GlobalFunc_9134(&uLocal_3865, 2);
								GlobalFunc_10979(&uLocal_3865, 1, 1, 0);
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -238.8316f, -2005.546f, 23.6855f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 103.8542f);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_4248);
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "family4_1", 5, 44, 13);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_4248);
								TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_4248);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_4248);
								PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -530524, 0, 0, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
							}
							break;
						
						case 2:
							if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("michael", GlobalFunc_4917(0)))
							{
								ENTITY::SET_ENTITY_COORDS(uLocal_3865[0], -240.5416f, -2006.294f, 23.6856f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(uLocal_3865[0], 85.0646f);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_4248);
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "family4_1", 8, 44, -1);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_4248);
								TASK::TASK_PERFORM_SEQUENCE(uLocal_3865[0], uLocal_4248);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_4248);
								PED::FORCE_PED_MOTION_STATE(uLocal_3865[0], -530524, 0, 0, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_3865[0], 0, 0);
							}
							if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("trevor", GlobalFunc_4917(2)))
							{
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -238.8316f, -2005.546f, 23.6855f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 103.8542f);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_4248);
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "family4_1", 5, 44, 13);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_4248);
								TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_4248);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_4248);
								PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -530524, 0, 0, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
							}
							break;
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("lazlow", Local_2926.f_1))
					{
						if (!PED::IS_PED_INJURED(Local_2926))
						{
							ENTITY::SET_ENTITY_COORDS(Local_2926, Local_2926.f_3, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(Local_2926, Local_2926.f_9);
							func_543(Local_2926);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_2926, 3, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2926, 1);
							Local_2926.f_2 = GlobalFunc_6797(Local_2926, 1, 145);
							GlobalFunc_173(&uLocal_4044, 5, Local_2926, "lazlow", 0, 1);
							INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_2926, INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-239.1158f, -2005.142f, 23.6855f, "v_stadium"), MISC::GET_HASH_KEY("GtaMloRoom001"));
						}
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("judges_security", Local_3608.f_1))
					{
						if (!PED::IS_PED_INJURED(Local_3608))
						{
							ENTITY::SET_ENTITY_HEALTH(Local_3608, 2);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_3608);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3608.f_1);
						}
					}
				}
				else
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 1, 0);
					iLocal_3955++;
				}
			}
			else if (func_546())
			{
				iLocal_3926 = MISC::GET_GAME_TIMER();
				GlobalFunc_8316(0, 1, 1, 0);
				func_514();
				RECORDING::_0x81CBAE94390F9F89();
				return 1;
			}
			break;
		
		case 3:
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lazlow", Local_2926.f_1)))
				{
					Local_2926 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lazlow", Local_2926.f_1));
				}
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Tracy", Local_2966.f_1)))
				{
					Local_2966 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Tracy", Local_2966.f_1));
				}
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("judges_security", Local_3608.f_1)))
				{
					Local_3608 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("judges_security", Local_3608.f_1));
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("judges_security", Local_3608.f_1))
				{
					if (!PED::IS_PED_INJURED(Local_3608))
					{
						ENTITY::SET_ENTITY_HEALTH(Local_3608, 2);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_3608);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3608.f_1);
					}
				}
			}
			else
			{
				func_547();
				STREAMING::NEW_LOAD_SCENE_START(-239.1602f, -2002.615f, 23.6856f, GlobalFunc_590(0f, 0f, 145.8395f), 3f, 0);
				while (!func_546() || !STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
					if (!func_546())
					{
					}
					if (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
					{
					}
					SYSTEM::WAIT(0);
				}
				STREAMING::NEW_LOAD_SCENE_STOP();
				if (GlobalFunc_8315() != 2)
				{
					GlobalFunc_9134(&uLocal_3865, 2);
					GlobalFunc_10979(&uLocal_3865, 1, 1, 0);
				}
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -238.8316f, -2005.546f, 23.6855f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 103.8542f);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_4248);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "family4_1", 5, 44, 13);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_4248);
				TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_4248);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_4248);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -530524, 0, 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				if (!PED::IS_PED_INJURED(uLocal_3865[0]))
				{
					ENTITY::SET_ENTITY_COORDS(uLocal_3865[0], -240.5416f, -2006.294f, 23.6856f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(uLocal_3865[0], 85.0646f);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_4248);
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "family4_1", 8, 44, -1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_4248);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_3865[0], uLocal_4248);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_4248);
					PED::FORCE_PED_MOTION_STATE(uLocal_3865[0], -530524, 0, 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_3865[0], 0, 0);
				}
				if (!PED::IS_PED_INJURED(Local_2926))
				{
					ENTITY::SET_ENTITY_COORDS(Local_2926, Local_2926.f_3, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_2926, Local_2926.f_9);
					func_543(Local_2926);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_2926, 3, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2926, 1);
					Local_2926.f_2 = GlobalFunc_6797(Local_2926, 1, 145);
					GlobalFunc_173(&uLocal_4044, 5, Local_2926, "lazlow", 0, 1);
				}
				iLocal_3926 = MISC::GET_GAME_TIMER();
				GlobalFunc_8316(0, 1, 1, 0);
				func_514();
				if (!PED::IS_PED_INJURED(Local_3608))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_3608, 2);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_3608);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3608.f_1);
				}
				RECORDING::_0x81CBAE94390F9F89();
				return 1;
			}
			break;
	}
	return 0;
}

int func_763()//Position - 0x7437B
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("taxi")))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) == PLAYER::PLAYER_PED_ID() || VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) == 0)
				{
					GlobalFunc_8317(iVar0, 145);
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 1);
					}
					VEHICLE::DELETE_VEHICLE(&iVar0);
					return 1;
				}
			}
			else
			{
				GlobalFunc_8317(iVar0, 145);
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 1);
				}
				VEHICLE::DELETE_VEHICLE(&iVar0);
				return 1;
			}
		}
	}
	return 0;
}

void func_764()//Position - 0x74417
{
	float fVar0;
	
	func_782();
	func_549();
	func_48(1);
	func_781();
	func_43();
	func_780();
	func_778();
	switch (iLocal_3947)
	{
		case 0:
			func_776();
			fVar0 = func_775();
			switch (GlobalFunc_8315())
			{
				case 0:
					func_773(&Local_4221, -219.5123f, -2037.851f, 26.9f, 0.01f, 0.01f, 2f, 1, uLocal_3865[2], "family4_god_0", "family4_god_8", 1, 1, 1, -1);
					if (HUD::DOES_BLIP_EXIST(Local_4221.f_5))
					{
						if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -221.051f, -2039.714f, 26.62f, -217.358f, -2033.186f, 29.62f, fVar0, 0, 1, 0) || (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -221.051f, -2039.714f, 26.62f, -217.358f, -2033.186f, 29.62f, 6.7f, 0, 1, 0))) || ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && GlobalFunc_662(PLAYER::PLAYER_PED_ID(), 328.7722f, 15f)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -221.051f, -2039.714f, 26.62f, -217.358f, -2033.186f, 29.62f, 2f, 0, 1, 0))) || ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && GlobalFunc_662(PLAYER::PLAYER_PED_ID(), 148.7722f, 15f)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -221.051f, -2039.714f, 26.62f, -217.358f, -2033.186f, 29.62f, 2f, 0, 1, 0)))
						{
							if (GlobalFunc_621(&iLocal_4042))
							{
								if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iLocal_4042))
								{
									GlobalFunc_4935();
									iLocal_3949 = 5;
									GlobalFunc_5652(&Local_4221, 1, 0);
									iLocal_3926 = 0;
									GlobalFunc_763(iLocal_4042, 1093140480, 1, 1056964608, 0, 1);
									GlobalFunc_11046(1, "outside stadium", 0, 0, 0, 1);
									iLocal_3947++;
								}
							}
							else
							{
								GlobalFunc_4935();
								iLocal_3949 = 5;
								GlobalFunc_5652(&Local_4221, 1, 0);
								iLocal_3926 = 0;
								GlobalFunc_11046(1, "outside stadium", 0, 0, 0, 1);
								iLocal_3947 = 2;
							}
						}
					}
					break;
				
				case 2:
					func_773(&Local_4221, -219.5123f, -2037.851f, 26.9f, 0.01f, 0.01f, 2f, 1, uLocal_3865[0], "family4_god_0", "family4_god_14", 1, 1, 1, -1);
					if (HUD::DOES_BLIP_EXIST(Local_4221.f_5))
					{
						if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -221.051f, -2039.714f, 26.62f, -217.358f, -2033.186f, 29.62f, fVar0, 0, 1, 0) || (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -221.051f, -2039.714f, 26.62f, -217.358f, -2033.186f, 29.62f, 6.7f, 0, 1, 0))) || ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && GlobalFunc_662(PLAYER::PLAYER_PED_ID(), 328.7722f, 15f)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -221.051f, -2039.714f, 26.62f, -217.358f, -2033.186f, 29.62f, 2f, 0, 1, 0))) || ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && GlobalFunc_662(PLAYER::PLAYER_PED_ID(), 148.7722f, 15f)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -221.051f, -2039.714f, 26.62f, -217.358f, -2033.186f, 29.62f, 2f, 0, 1, 0)))
						{
							TASK::CLEAR_PED_TASKS(uLocal_3865[0]);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_3865[0], 1);
							GlobalFunc_5652(&Local_4221, 0, 0);
							GlobalFunc_4935();
							iLocal_3949 = 5;
							if (GlobalFunc_621(&iLocal_4042))
							{
								GlobalFunc_763(iLocal_4042, 1093140480, 1, 1056964608, 0, 1);
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_3588))
							{
								TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_3588, 8000, 2048, 2);
							}
							GlobalFunc_11046(1, "outside stadium", 0, 0, 0, 1);
							iLocal_3947++;
						}
					}
					break;
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -248.824f, -2021.74f, 28.944f, -258.934f, -2033.879f, 31.958f, 4.5f, 0, 1, 0) || func_747(PLAYER::PLAYER_PED_ID(), -249.8176f, -2008.059f, 29.1458f))
			{
				if (GlobalFunc_109())
				{
					if (func_69(0, 1, 1, 1))
					{
						GlobalFunc_11046(1, "outside stadium", 0, 0, 0, 1);
						iLocal_2696 = 4;
					}
				}
			}
			break;
		
		case 1:
			if (GlobalFunc_621(&iLocal_4042))
			{
				if (GlobalFunc_763(iLocal_4042, 1093140480, 1, 1056964608, 0, 1))
				{
					switch (GlobalFunc_8315())
					{
						case 0:
							if (!PED::IS_PED_INJURED(uLocal_3865[2]))
							{
								TASK::CLEAR_PED_TASKS(uLocal_3865[2]);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_3865[2], 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_3588))
								{
									TASK::TASK_LOOK_AT_ENTITY(uLocal_3865[2], Local_3588, 8000, 2048, 2);
								}
								TASK::OPEN_SEQUENCE_TASK(&uLocal_4248);
								TASK::TASK_PAUSE(0, 500);
								TASK::TASK_LEAVE_VEHICLE(0, iLocal_4042, 0);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -253.7119f, -2028.464f, 28.9458f, 1f, -1, -1f, 0, 1193033728);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_4248);
								TASK::TASK_PERFORM_SEQUENCE(uLocal_3865[2], uLocal_4248);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_4248);
							}
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_3865[2], 8000, 0, 2);
							TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_4042, 0);
							break;
					}
					iLocal_3947++;
				}
			}
			else
			{
				iLocal_3947++;
			}
			break;
		
		case 2:
			STREAMING::REQUEST_ANIM_DICT("missfam4");
			func_776();
			switch (GlobalFunc_8315())
			{
				case 0:
					func_771(&(uLocal_3865[2]));
					func_770(&Local_4221, -255.1339f, -2026.679f, 28.9458f, 0.01f, 0.01f, 2f, 1, "", 1, 1, -1, 0);
					if (!ENTITY::IS_ENTITY_AT_COORD(uLocal_3865[2], -253.7119f, -2028.464f, 28.9458f, 1.5f, 1.5f, 2f, 0, 1, 0))
					{
						if (func_52(uLocal_3865[2], 242628503, 1, -2))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_4248);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -253.7119f, -2028.464f, 28.9458f, 2f, -1, -1f, 0, 1193033728);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_4248);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_3865[2], uLocal_4248);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_4248);
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uLocal_3865[2], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 2f)
					{
						if (PED::IS_PED_FACING_PED(uLocal_3865[2], PLAYER::PLAYER_PED_ID(), 20f))
						{
							if (STREAMING::HAS_ANIM_DICT_LOADED("missfam4"))
							{
								if (GlobalFunc_588(&iLocal_3926, 8000))
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_3865[2], 1), 1) < 40f)
									{
										GlobalFunc_10618(&uLocal_4044, "fam4Aud", "FAM4_LAG", 6, 0, 0, 0);
									}
									TASK::OPEN_SEQUENCE_TASK(&uLocal_4248);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::TASK_PLAY_ANIM(0, "missfam4", "say_hurry_up_a_trevor", 4f, -8f, -1, 0, 0, 0, 0, 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_4248);
									TASK::TASK_PERFORM_SEQUENCE(uLocal_3865[2], uLocal_4248);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_4248);
									iLocal_3926 = MISC::GET_GAME_TIMER();
								}
							}
						}
						else if (func_52(uLocal_3865[2], 242628503, 1, -2))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_4248);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_4248);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_3865[2], uLocal_4248);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_4248);
						}
					}
					break;
				
				case 2:
					func_767(&Local_4221, -255.1339f, -2026.679f, 28.9458f, 0.01f, 0.01f, 2f, 1, uLocal_3865[0], "", "family4_god_14", 1, 1, 1, -1);
					break;
			}
			func_765();
			if (HUD::DOES_BLIP_EXIST(Local_4221.f_5))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -248.824f, -2021.74f, 28.944f, -258.934f, -2033.879f, 31.958f, 7f, 0, 1, 0) || func_747(PLAYER::PLAYER_PED_ID(), -249.8176f, -2008.059f, 29.1458f))
				{
					if (GlobalFunc_109())
					{
						if (func_69(0, 1, 1, 1))
						{
							iLocal_2696 = 4;
						}
					}
				}
			}
			break;
	}
}

void func_765()//Position - 0x74C55
{
	struct<3> Var0;
	
	switch (GlobalFunc_8315())
	{
		case 0:
			if (func_766(PLAYER::PLAYER_PED_ID(), uLocal_3865[2]))
			{
				if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(uLocal_3865[2], 1)) };
					if (Var0.f_1 < 2f)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 150319005) > 1)
						{
							TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
						}
					}
				}
			}
			break;
		
		case 2:
			if (func_766(PLAYER::PLAYER_PED_ID(), uLocal_3865[2]))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 150319005) > 1)
				{
					TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				}
			}
			break;
	}
}

int func_766(int iParam0, int iParam1)//Position - 0x74CF8
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (!PED::IS_PED_INJURED(iParam1))
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
					Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
					Var6 = { Var3 - Var0 };
					Var9 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 0f, 0.5f, 0f) - Var3 };
					if (GlobalFunc_168(Var6, Var9) < 0f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_767(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, char* sParam9, char* sParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14)//Position - 0x74D75
{
	return func_768(uParam0, Param1, Param4, iParam7, iParam8, 0, 0, sParam9, sParam10, sParam10, sParam10, sParam10, bParam11, bParam12, bParam13, iParam14, 1);
}

int func_768(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, bool bParam16, bool bParam17, bool bParam18, int iParam19, bool bParam20)//Position - 0x74DA4
{
	return GlobalFunc_8566(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 3, iParam8, iParam9, iParam10, 0, sParam11, sParam12, sParam13, sParam14, sParam15, GlobalFunc_648(), bParam16, bParam17, GlobalFunc_648(), 0, 0, bParam18, iParam19, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), bParam20, 1065353216);
}


int func_770(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, char* sParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x74E05
{
	return GlobalFunc_8566(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 3, 0, 0, 0, 0, sParam8, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), 0, bParam9, GlobalFunc_648(), 0, 0, bParam10, iParam11, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), bParam12, 1065353216);
}

void func_771(var uParam0)//Position - 0x74E60
{
	var uVar0;
	
	if (!iLocal_3917)
	{
		if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
		{
			uVar0 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID());
			if (TASK::IS_MOVE_BLEND_RATIO_RUNNING(uVar0) || TASK::IS_MOVE_BLEND_RATIO_SPRINTING(uVar0))
			{
				TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(*uParam0, 2f);
				iLocal_3917 = 1;
			}
		}
	}
	else
	{
		TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(*uParam0, 2f);
	}
}


int func_773(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, var uParam8, char* sParam9, char* sParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14)//Position - 0x74EFE
{
	return func_774(uParam0, Param1, Param4, iParam7, uParam8, 0, 0, sParam9, sParam10, sParam10, sParam10, sParam10, bParam11, bParam12, bParam13, iParam14);
}

int func_774(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, var uParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, bool bParam16, bool bParam17, bool bParam18, int iParam19)//Position - 0x74F2C
{
	return GlobalFunc_8566(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 1, uParam8, iParam9, iParam10, 0, sParam11, sParam12, sParam13, sParam14, sParam15, GlobalFunc_648(), bParam16, bParam17, GlobalFunc_648(), 0, 0, bParam18, iParam19, 0, 0, 0, 1, 1065353216);
}

float func_775()//Position - 0x74F79
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	
	fVar0 = 0.5f;
	fVar1 = 6.7f;
	fVar2 = 3f;
	fVar3 = 12f;
	if (GlobalFunc_621(&iVar7))
	{
		fVar4 = ENTITY::GET_ENTITY_SPEED(iVar7);
		if (fVar4 < 3f)
		{
			fVar4 = 3f;
		}
		fVar5 = ((fVar4 - fVar2) / (fVar3 - fVar2));
		fVar6 = (fVar0 + ((fVar1 - fVar0) * fVar5));
		return fVar6;
	}
	return 6.7f;
}

void func_776()//Position - 0x74FD8
{
	GlobalFunc_650(-252.6443f, -2022.632f, 29.1457f, 100f, 120f, "family_4_mcs_2");
}


void func_778()//Position - 0x7505A
{
	if (HUD::DOES_BLIP_EXIST(Local_4221.f_5))
	{
		if (!iLocal_3921)
		{
			GlobalFunc_2269(&(Local_4221.f_5), -210.9444f, -2041.729f, 26.6206f, 100.8531f);
			iLocal_3921 = 1;
		}
	}
	else
	{
		iLocal_3921 = 0;
	}
}


void func_780()//Position - 0x750C6
{
	switch (iLocal_3978)
	{
		case 0:
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				AUDIO::START_AUDIO_SCENE("FAMILY_4_DRIVE_TO_STADIUM");
				iLocal_3978++;
			}
			break;
		
		case 1:
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_4_DRIVE_TO_STADIUM"))
			{
				if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && iLocal_3947 > 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -248.824f, -2021.74f, 28.944f, -258.934f, -2033.879f, 31.958f, 4.5f, 0, 1, 0))
				{
					AUDIO::STOP_AUDIO_SCENE("FAMILY_4_DRIVE_TO_STADIUM");
					iLocal_3978++;
				}
			}
			break;
	}
}

void func_781()//Position - 0x7516B
{
	if ((ENTITY::DOES_ENTITY_EXIST(Local_2819[0 /*15*/]) && ENTITY::DOES_ENTITY_EXIST(Local_2865[0 /*15*/])) && ENTITY::DOES_ENTITY_EXIST(Local_2819[0 /*15*/]))
	{
		switch (iLocal_3961)
		{
			case 0:
				if (!ENTITY::IS_ENTITY_DEAD(Local_2819[0 /*15*/]) && !ENTITY::IS_ENTITY_DEAD(Local_2865[0 /*15*/]))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -140.858f, -2011.314f, 20.385f, -170.442f, -2007.734f, 27.185f, 90f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -175.828f, -2039.052f, 26.621f, -276.227f, -1989.866f, 35.621f, 195.7f, 0, 1, 0))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2819[0 /*15*/], 501, "lkfamily4", 1);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2865[0 /*15*/], 502, "lkfamily4", 1);
						iLocal_3961++;
					}
				}
				break;
			
			case 1:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2819[0 /*15*/], 0))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2819[0 /*15*/]))
					{
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_2819[0 /*15*/], 0, 1);
						iLocal_3961++;
					}
				}
				break;
			
			case 2:
				break;
		}
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_2713.f_3, 1) < 550f)
	{
		STREAMING::REQUEST_MODEL(Local_2819[0 /*15*/].f_1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_2819[0 /*15*/].f_1, 1);
		STREAMING::REQUEST_MODEL(Local_2865[0 /*15*/].f_1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_2865[0 /*15*/].f_1, 1);
		STREAMING::REQUEST_MODEL(Local_3568.f_1);
		VEHICLE::REQUEST_VEHICLE_RECORDING(501, "lkfamily4");
		VEHICLE::REQUEST_VEHICLE_RECORDING(502, "lkfamily4");
		if ((((STREAMING::HAS_MODEL_LOADED(Local_2819[0 /*15*/].f_1) && STREAMING::HAS_MODEL_LOADED(Local_2865[0 /*15*/].f_1)) && STREAMING::HAS_MODEL_LOADED(Local_3568.f_1)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(501, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(502, "lkfamily4"))
		{
			Local_2819[0 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_2819[0 /*15*/].f_1, Local_2819[0 /*15*/].f_3, Local_2819[0 /*15*/].f_6, 1, 1);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2819[0 /*15*/], 2);
			VEHICLE::SET_VEHICLE_COLOURS(Local_2819[0 /*15*/], 0, 0);
			Local_2865[0 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_2865[0 /*15*/].f_1, Local_2865[0 /*15*/].f_3, Local_2865[0 /*15*/].f_6, 1, 1);
			VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_2819[0 /*15*/], Local_2865[0 /*15*/], 1065353216);
			Local_3568 = PED::CREATE_PED_INSIDE_VEHICLE(Local_2819[0 /*15*/], 26, Local_3568.f_1, -1, 1, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3568.f_1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3568, 1);
		}
	}
}

void func_782()//Position - 0x75400
{
	switch (iLocal_3949)
	{
		case 0:
			iLocal_3949++;
			break;
		
		case 1:
			if (!GlobalFunc_5172(&Local_4221, 1))
			{
				iLocal_3949++;
			}
			break;
		
		case 2:
			if (!GlobalFunc_5172(&Local_4221, 0))
			{
				if (func_687(Local_4221.f_5, &(uLocal_3865[0])) || func_687(Local_4221.f_5, &(uLocal_3865[2])))
				{
					switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
					{
						case 0:
							if (GlobalFunc_10618(&uLocal_4044, "fam4Aud", "FAM4_B1A", 6, 0, 0, 0))
							{
								iLocal_3949++;
							}
							break;
						
						case 1:
							if (GlobalFunc_10618(&uLocal_4044, "fam4Aud", "FAM4_B1A2", 6, 0, 0, 0))
							{
								iLocal_3949++;
							}
							break;
						}
					}
			}
			break;
		
		case 3:
			switch (GlobalFunc_8315())
			{
				case 0:
					if (func_687(Local_4221.f_5, &(uLocal_3865[2])))
					{
						iLocal_3949 = 4;
					}
					break;
				
				case 2:
					if (func_687(Local_4221.f_5, &(uLocal_3865[0])))
					{
						iLocal_3949 = 4;
					}
					break;
			}
			break;
		
		case 4:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -219.5123f, -2037.851f, 26.9f, 1) > 400f)
			{
				if (GlobalFunc_588(&iLocal_3975, 30000))
				{
					switch (GlobalFunc_8315())
					{
						case 0:
							if (GlobalFunc_10618(&uLocal_4044, "fam4Aud", "FAM4_HURRY", 6, 0, 0, 0))
							{
								iLocal_3975 = MISC::GET_GAME_TIMER();
							}
							break;
						
						case 2:
							if (GlobalFunc_10618(&uLocal_4044, "fam4Aud", "FAM4_HURRY2", 6, 0, 0, 0))
							{
								iLocal_3975 = MISC::GET_GAME_TIMER();
							}
							break;
						}
					}
			}
			if (!func_518("FAM4_DRV2"))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -219.5123f, -2037.851f, 26.9f, 1) < 50f)
				{
					switch (GlobalFunc_8315())
					{
						case 0:
							if (func_687(Local_4221.f_5, &(uLocal_3865[2])))
							{
								if (GlobalFunc_10618(&uLocal_4044, "fam4Aud", "FAM4_DRV2", 7, 0, 0, 0))
								{
									RECORDING::_0x293220DA1B46CEBC(2f, 3f, 3);
									func_515("FAM4_DRV2", 1);
								}
							}
							break;
						
						case 2:
							if (func_687(Local_4221.f_5, &(uLocal_3865[0])))
							{
								if (GlobalFunc_10618(&uLocal_4044, "fam4Aud", "FAM4_DRV2", 7, 0, 0, 0))
								{
									RECORDING::_0x293220DA1B46CEBC(2f, 3f, 3);
									func_515("FAM4_DRV2", 1);
								}
							}
							break;
						}
					}
			}
			break;
		
		case 5:
			switch (GlobalFunc_8315())
			{
				case 0:
					if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(uLocal_3865[2]))
					{
						if (!GlobalFunc_5172(&Local_4221, 0))
						{
							if (GlobalFunc_10618(&uLocal_4044, "fam4Aud", "walk_stad0", 7, 0, 0, 0))
							{
								RECORDING::_0x293220DA1B46CEBC(6f, 6f, 3);
								iLocal_3949 = 7;
							}
						}
					}
					break;
				
				case 2:
					if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (!GlobalFunc_5172(&Local_4221, 0))
						{
							if (GlobalFunc_10618(&uLocal_4044, "fam4Aud", "walk_stad0", 7, 0, 0, 0))
							{
								RECORDING::_0x293220DA1B46CEBC(6f, 6f, 3);
								iLocal_3949 = 7;
							}
						}
					}
					break;
			}
			break;
		
		case 6:
			switch (GlobalFunc_8315())
			{
				case 0:
					if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(uLocal_3865[2]))
					{
						if (!GlobalFunc_5172(&Local_4221, 0))
						{
							if (GlobalFunc_10618(&uLocal_4044, "fam4Aud", "walk_stad1", 7, 0, 0, 0))
							{
								iLocal_3949 = 7;
							}
						}
					}
					break;
				
				case 2:
					if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (!GlobalFunc_5172(&Local_4221, 0))
						{
							if (GlobalFunc_10618(&uLocal_4044, "fam4Aud", "walk_stad1", 7, 0, 0, 0))
							{
								iLocal_3949 = 7;
							}
						}
					}
					break;
			}
			break;
		
		case 7:
			if (GlobalFunc_10618(&uLocal_4044, "fam4Aud", "FAM4_VIP", 7, 0, 0, 0))
			{
				iLocal_3949++;
			}
			break;
		
		case 8:
			switch (GlobalFunc_8315())
			{
				case 0:
					if (func_687(Local_4221.f_5, &(uLocal_3865[2])))
					{
						GlobalFunc_164("family4_god_13", 7500, 1);
						iLocal_3949++;
					}
					break;
				
				case 2:
					if (func_687(Local_4221.f_5, &(uLocal_3865[0])))
					{
						GlobalFunc_164("family4_god_13", 7500, 1);
						iLocal_3949++;
					}
					break;
			}
			break;
		
		case 9:
			break;
	}
}

void func_783()//Position - 0x7584E
{
	int iVar0;
	
	iLocal_4247 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-800.31f, 184.8f, 72.72f, "V_Michael");
	INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_4247);
	CUTSCENE::REQUEST_CUTSCENE("FAM_4_INT_ALT1", 8);
	STREAMING::_0xF8155A7F03DDFC8E(3);
	STREAMING::_0xBEB2D9A1D9A8F55A(5, 5, 5, 5);
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		iVar0 = STREAMING::GET_PLAYER_SWITCH_STATE();
		if (iVar0 != 9)
		{
			if (!iLocal_3920)
			{
				if (((iVar0 >= 8 && STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() < 1) && INTERIOR::IS_INTERIOR_READY(iLocal_4247)) && CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					GlobalFunc_576();
					iLocal_3920 = 1;
				}
			}
		}
		else
		{
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "trevor", 2, GlobalFunc_4917(2), 0);
			GlobalFunc_8316(1, 1, 1, 0);
			CUTSCENE::START_CUTSCENE(0);
			iLocal_3945 = 1;
			iLocal_2696 = 0;
		}
	}
	else if (CUTSCENE::HAS_CUTSCENE_LOADED())
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "trevor", 2, GlobalFunc_4917(2), 0);
			GlobalFunc_8316(1, 1, 1, 0);
			CUTSCENE::START_CUTSCENE(0);
			iLocal_3945 = 1;
			iLocal_2696 = 0;
		}
	}
}


void func_785()//Position - 0x75982
{
	switch (iLocal_3985)
	{
		case 0:
			func_69(0, 1, 1, 1);
			iLocal_4043 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_4043))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_4043, 0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_4043, -817.51f, 151.703f, 64.606f, -815.789f, 192.767f, 77.706f, 61.4f, 0, 1, 0))
					{
						GlobalFunc_9805(-817.51f, 151.703f, 64.606f, -815.789f, 192.767f, 77.706f, 61.4f, Local_2698.f_3, Local_2698.f_6, 15f, 15f, 15f, 1, 1, 1, 0, 0);
						func_813(Local_2698.f_3, Local_2698.f_6);
						func_813(Local_2698.f_3, Local_2698.f_6);
						iLocal_3923 = 1;
					}
					else
					{
						GlobalFunc_9805(-860.221f, 150.219f, 62.021f, -858.733f, 175.275f, 72.921f, 31.5f, Local_4004, fLocal_4007, 15f, 15f, 15f, 0, 1, 1, 0, 0);
						func_813(Local_4004, fLocal_4007);
						iLocal_3923 = 1;
					}
				}
			}
			MISC::CLEAR_AREA(-868.3934f, 152.2284f, 62.5499f, 1000f, 1, 0, 0, 0);
			if (GlobalFunc_621(&iLocal_4042))
			{
				ENTITY::SET_ENTITY_HEADING(iLocal_4042, fLocal_4007);
				ENTITY::SET_ENTITY_COORDS(iLocal_4042, Local_4004, 1, 0, 0, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_4042);
			}
			else
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -870.8275f, 152.0728f, 62.6623f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 287.7694f);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
			}
			TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), -831.9f, 165.2f, 71.3f, 5000, 0, 2);
			uLocal_4023 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 1);
			uLocal_4015 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", -872.3856f, 148.4303f, 63.40092f, 8.263765f, 0f, -63.05555f, 30.0172f, 0, 2);
			uLocal_4016 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", -869.3068f, 147.8171f, 64.73584f, 9.493369f, 0f, -63.17923f, 30.0172f, 0, 2);
			CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA_FRAME(uLocal_4023, uLocal_4015, 0, 3);
			CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA_FRAME(uLocal_4023, uLocal_4016, 5000, 3);
			STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
			CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
			iLocal_3985++;
			break;
		
		case 1:
			STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
			if (!CAM::IS_CAM_INTERPOLATING(uLocal_4023))
			{
				iLocal_3985++;
			}
			break;
		
		case 2:
			if (GlobalFunc_10734(20, &uLocal_4250, 0, 1, 0, 0, 0))
			{
				iLocal_2696 = 0;
			}
			break;
	}
}




























void func_813(struct<3> Param0, float fParam3)//Position - 0x78015
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			GlobalFunc_10367(iVar0, Param0, fParam3, 24, 0);
		}
	}
}














void func_827()//Position - 0x78CD4
{
	switch (iLocal_3945)
	{
		case 0:
			iLocal_4247 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-800.31f, 184.8f, 72.72f, "V_Michael");
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_4247);
			switch (GlobalFunc_8315())
			{
				case 0:
					CUTSCENE::REQUEST_CUTSCENE("FAM_4_INT_ALT1", 8);
					break;
				
				case 2:
					CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("FAM_4_INT_ALT1", 12, 8);
					break;
			}
			if (!bLocal_3925)
			{
				STREAMING::NEW_LOAD_SCENE_START(-797.4664f, 185.0637f, 72.6055f, GlobalFunc_590(0f, 0f, 97.6005f), 20f, 0);
				bLocal_3925 = true;
			}
			if (INTERIOR::IS_INTERIOR_READY(iLocal_4247))
			{
				if (CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					switch (GlobalFunc_8315())
					{
						case 0:
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "trevor", 2, GlobalFunc_4917(2), 0);
							break;
						
						case 2:
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "michael", 2, GlobalFunc_4917(0), 0);
							break;
					}
					GlobalFunc_8316(1, 1, 1, 0);
					CUTSCENE::START_CUTSCENE(0);
					RECORDING::_0x48621C9FCA3EBD28(4);
					iLocal_3945++;
				}
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (bLocal_3925)
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				GlobalFunc_9140(&uLocal_4250, 0, 0, 2000, 1, 1, 0, 1);
				AUDIO::SET_STATIC_EMITTER_ENABLED("SE_MICHAELS_HOUSE_RADIO", 0);
				STREAMING::_0xEF39EE20C537E98C(Local_2946.f_3, GlobalFunc_590(0f, 0f, Local_2946.f_9));
				STREAMING::_0xBEB2D9A1D9A8F55A(5, 5, 5, 5);
				if (!iLocal_3923)
				{
					GlobalFunc_8365(-800.31f, 184.8f, 72.72f, 300f, 0);
				}
				GlobalFunc_6791(0, 0);
				iLocal_4043 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_4043))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_4043, 0))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_4043, -817.51f, 151.703f, 64.606f, -815.789f, 192.767f, 77.706f, 61.4f, 0, 1, 0))
						{
							GlobalFunc_9805(-817.51f, 151.703f, 64.606f, -815.789f, 192.767f, 77.706f, 61.4f, Local_2698.f_3, Local_2698.f_6, 15f, 15f, 15f, 1, 1, 1, 0, 0);
							func_813(Local_2698.f_3, Local_2698.f_6);
						}
						else
						{
							GlobalFunc_9805(-860.221f, 150.219f, 62.021f, -858.733f, 175.275f, 72.921f, 31.5f, Local_4004, fLocal_4007, 15f, 15f, 15f, 1, 1, 1, 0, 0);
							func_813(Local_4004, fLocal_4007);
						}
					}
				}
				MISC::CLEAR_AREA(-800.31f, 184.8f, 72.72f, 10000f, 1, 0, 0, 0);
				iLocal_3945++;
			}
			break;
		
		case 2:
			func_836();
			func_835();
			if (!CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				if (CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					func_833();
					switch (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()))
					{
						case 0:
							if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevor", GlobalFunc_4917(2))))
							{
								uLocal_3865[2] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevor", GlobalFunc_4917(2)));
							}
							if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("trevor", GlobalFunc_4917(2)))
							{
								if (!PED::IS_PED_INJURED(uLocal_3865[2]))
								{
									ENTITY::SET_ENTITY_COORDS(uLocal_3865[2], Local_2986.f_3, 1, 0, 0, 1);
									ENTITY::SET_ENTITY_HEADING(uLocal_3865[2], Local_2986.f_9);
									func_543(uLocal_3865[2]);
									func_602(uLocal_3865[2], joaat("weapon_pistol"), 50, 0, 0);
									func_542(&(uLocal_3865[2]), 0);
									GlobalFunc_173(&uLocal_4044, 2, uLocal_3865[2], "trevor", 0, 1);
									if (ENTITY::DOES_ENTITY_EXIST(Local_2698))
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2698, 0))
										{
											TASK::TASK_ENTER_VEHICLE(uLocal_3865[2], Local_2698, 30000, 0, 1f, 1, 0);
										}
									}
									PED::FORCE_PED_MOTION_STATE(uLocal_3865[2], -668482597, 0, 0, 0);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_3865[2], 0, 0);
								}
							}
							if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("michael", GlobalFunc_4917(0)))
							{
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_2946.f_3, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_2946.f_9);
								PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
								PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
								GlobalFunc_173(&uLocal_4044, 0, PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
							}
							break;
						
						case 2:
							if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("michael", GlobalFunc_4917(0))))
							{
								uLocal_3865[0] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("michael", GlobalFunc_4917(0)));
							}
							if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("michael", GlobalFunc_4917(0)))
							{
								if (!PED::IS_PED_INJURED(uLocal_3865[0]))
								{
									ENTITY::SET_ENTITY_COORDS(uLocal_3865[0], Local_2986.f_3, 1, 0, 0, 1);
									ENTITY::SET_ENTITY_HEADING(uLocal_3865[0], Local_2986.f_9);
									func_543(uLocal_3865[0]);
									func_602(uLocal_3865[0], joaat("weapon_pistol"), 50, 0, 0);
									func_542(&(uLocal_3865[0]), 0);
									GlobalFunc_173(&uLocal_4044, 0, uLocal_3865[0], "michael", 0, 1);
									if (ENTITY::DOES_ENTITY_EXIST(Local_2698))
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2698, 0))
										{
											TASK::TASK_ENTER_VEHICLE(uLocal_3865[0], Local_2698, 30000, 0, 1f, 1, 0);
										}
									}
									PED::FORCE_PED_MOTION_STATE(uLocal_3865[0], -668482597, 0, 0, 0);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_3865[0], 0, 0);
								}
							}
							if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("trevor", GlobalFunc_4917(2)))
							{
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_2946.f_3, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_2946.f_9);
								PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
								PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
								GlobalFunc_173(&uLocal_4044, 2, PLAYER::PLAYER_PED_ID(), "trevor", 0, 1);
							}
							break;
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					}
				}
				else if (func_835())
				{
					RECORDING::_0x81CBAE94390F9F89();
					func_828();
				}
			}
			else
			{
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 1, 0);
				iLocal_3945++;
			}
			break;
		
		case 3:
			func_836();
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				switch (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()))
				{
					case 0:
						if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevor", 0)))
						{
							uLocal_3865[2] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevor", 0));
						}
						break;
					
					case 2:
						if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("michael", 0)))
						{
							uLocal_3865[0] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("michael", 0));
						}
						break;
				}
			}
			else
			{
				STREAMING::NEW_LOAD_SCENE_START(Local_2946.f_3, GlobalFunc_590(0f, 0f, Local_2946.f_9), 20f, 0);
				while (!func_835() || !STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
					SYSTEM::WAIT(0);
				}
				STREAMING::NEW_LOAD_SCENE_STOP();
				func_833();
				switch (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()))
				{
					case 0:
						if (!PED::IS_PED_INJURED(uLocal_3865[2]))
						{
							ENTITY::SET_ENTITY_COORDS(uLocal_3865[2], Local_2986.f_3, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(uLocal_3865[2], Local_2986.f_9);
							func_543(uLocal_3865[2]);
							func_602(uLocal_3865[2], joaat("weapon_pistol"), 50, 0, 0);
							func_542(&(uLocal_3865[2]), 0);
							GlobalFunc_173(&uLocal_4044, 2, uLocal_3865[2], "trevor", 0, 1);
							if (ENTITY::DOES_ENTITY_EXIST(Local_2698))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2698, 0))
								{
									TASK::TASK_ENTER_VEHICLE(uLocal_3865[2], Local_2698, 30000, 0, 1f, 1, 0);
								}
							}
							PED::FORCE_PED_MOTION_STATE(uLocal_3865[2], -668482597, 0, 0, 0);
						}
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_2946.f_3, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_2946.f_9);
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
						PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
						GlobalFunc_173(&uLocal_4044, 0, PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
						break;
					
					case 2:
						if (!PED::IS_PED_INJURED(uLocal_3865[0]))
						{
							ENTITY::SET_ENTITY_COORDS(uLocal_3865[0], Local_2986.f_3, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(uLocal_3865[0], Local_2986.f_9);
							func_543(uLocal_3865[0]);
							func_602(uLocal_3865[0], joaat("weapon_pistol"), 50, 0, 0);
							func_542(&(uLocal_3865[0]), 0);
							GlobalFunc_173(&uLocal_4044, 0, uLocal_3865[0], "michael", 0, 1);
							if (ENTITY::DOES_ENTITY_EXIST(Local_2698))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2698, 0))
								{
									TASK::TASK_ENTER_VEHICLE(uLocal_3865[0], Local_2698, 30000, 0, 1f, 1, 0);
								}
							}
							PED::FORCE_PED_MOTION_STATE(uLocal_3865[0], -668482597, 0, 0, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_3865[0], 0, 0);
						}
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_2946.f_3, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_2946.f_9);
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
						PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
						GlobalFunc_173(&uLocal_4044, 2, PLAYER::PLAYER_PED_ID(), "trevor", 0, 1);
						break;
				}
				func_828();
			}
			break;
	}
}

void func_828()//Position - 0x79599
{
	MISC::CLEAR_AREA(-800.31f, 184.8f, 72.72f, 1000f, 1, 0, 0, 0);
	STREAMING::_0xF8155A7F03DDFC8E(0);
	if (!GlobalFunc_580(4, PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_5125(4, PLAYER::PLAYER_PED_ID());
	}
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_MICHAELS_HOUSE_RADIO", 1);
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_4247))
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_4247);
	}
	GlobalFunc_8316(0, 1, 1, 0);
	GlobalFunc_8038(&Local_2911, 17, Local_2911.f_3, Local_2911.f_6, 1, 0);
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_2911);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_2698))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_2698))
		{
			GlobalFunc_10367(Local_2698, Local_2698.f_3, Local_2698.f_6, 24, 0);
			GlobalFunc_9138(Local_2698);
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2698.f_1);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		func_473(1, 0, 0, 1);
	}
	else
	{
		func_519(0, 0, 0, 0, 0, 3000, 1);
	}
	GlobalFunc_11046(0, "start of mission", 0, 0, 0, 1);
	iLocal_2696 = 3;
}





void func_833()//Position - 0x79EB0
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(Local_2698))
	{
		if (STREAMING::HAS_MODEL_LOADED(Local_2698.f_1))
		{
			if (!func_834(PLAYER::GET_PLAYERS_LAST_VEHICLE(), Local_2698.f_3, 1, -822.8611f, 157.759f, 69.009f, 87.7002f, 1))
			{
				GlobalFunc_9748(&Local_2698, 0, Local_2698.f_3, Local_2698.f_6, 0, 0);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_2698, 0, 0);
				GlobalFunc_690(&Local_4221, Local_2698);
			}
			else
			{
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iVar0, 0, 0);
				GlobalFunc_690(&Local_4221, iVar0);
			}
		}
	}
}

int func_834(int iParam0, struct<3> Param1, int iParam4, struct<3> Param5, float fParam8, bool bParam9)//Position - 0x79F3E
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Param1, 10f, 10f, 10f, 0, 1, 0))
			{
				iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
				if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar0))
				{
					if (bParam9)
					{
						if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) >= iParam4)
						{
							return 1;
						}
						else
						{
							MISC::CLEAR_AREA(Param5, 10f, 1, 0, 0, 0);
							ENTITY::SET_ENTITY_COORDS(iParam0, Param5, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iParam0, fParam8);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0);
							func_813(Param5, fParam8);
						}
					}
				}
				else if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) >= iParam4)
				{
					return 1;
				}
				else
				{
					MISC::CLEAR_AREA(Param5, 10f, 1, 0, 0, 0);
					ENTITY::SET_ENTITY_COORDS(iParam0, Param5, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iParam0, fParam8);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0);
					func_813(Param5, fParam8);
				}
			}
		}
	}
	return 0;
}

int func_835()//Position - 0x7A026
{
	if (!STREAMING::HAS_MODEL_LOADED(Local_2946.f_1))
	{
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_2986.f_1))
	{
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_2698.f_1))
	{
	}
	if (!VEHICLE::HAS_VEHICLE_ASSET_LOADED(Local_2698.f_1))
	{
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("family4_0"))
	{
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("family4_1"))
	{
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("family4_2"))
	{
	}
	if ((((((STREAMING::HAS_MODEL_LOADED(Local_2946.f_1) && STREAMING::HAS_MODEL_LOADED(Local_2986.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_2698.f_1)) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(Local_2698.f_1)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("family4_0")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("family4_1")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("family4_2"))
	{
		return 1;
	}
	return 0;
}

void func_836()//Position - 0x7A0EE
{
	STREAMING::REQUEST_MODEL(Local_2946.f_1);
	STREAMING::REQUEST_MODEL(Local_2986.f_1);
	STREAMING::REQUEST_MODEL(Local_2698.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_2698.f_1, 1);
	VEHICLE::REQUEST_VEHICLE_ASSET(Local_2698.f_1, 15);
	STREAMING::REQUEST_MODEL(Local_2911.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_2911.f_1, 1);
	TASK::REQUEST_WAYPOINT_RECORDING("family4_0");
	TASK::REQUEST_WAYPOINT_RECORDING("family4_1");
	TASK::REQUEST_WAYPOINT_RECORDING("family4_2");
}

void func_837()//Position - 0x7A154
{
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_504(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 231);
		if (ENTITY::DOES_ENTITY_EXIST(Local_2713) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2713))
		{
			GlobalFunc_503(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -1);
		}
		else
		{
			GlobalFunc_503(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 232);
		}
	}
	else
	{
		GlobalFunc_504(0, 231);
		GlobalFunc_503(0, -1);
	}
}




void func_841()//Position - 0x7A245
{
	if (bLocal_3918)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		iLocal_3976 = MISC::GET_GAME_TIMER();
	}
	GlobalFunc_4956();
	func_851();
	GlobalFunc_10835(sLocal_4010);
	AUDIO::TRIGGER_MUSIC_EVENT("FAM4_MISSION_FAIL");
	iLocal_3909 = 1;
	iLocal_2697 = iLocal_2696;
	iLocal_2696 = 15;
}










void func_851()//Position - 0x7B0BD
{
	if (HUD::DOES_BLIP_EXIST(Local_2926.f_2))
	{
		HUD::REMOVE_BLIP(&(Local_2926.f_2));
	}
}

int func_852()//Position - 0x7B0DA
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	iVar0 = 0;
	switch (iLocal_2696)
	{
		case 3:
			if (GlobalFunc_694(&(uLocal_3865[2])))
			{
				sLocal_4010 = "family4_fail_1";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_3865[0])))
			{
				sLocal_4010 = "family4_fail_0";
				return 1;
			}
			iVar0 = 0;
			while (iVar0 <= (Local_3006 - 1))
			{
				if (func_46(&(Local_3006[iVar0 /*20*/]), &(Local_3006[iVar0 /*20*/].f_10)) || func_45(&(Local_3006[iVar0 /*20*/]), 20f, 0))
				{
					sLocal_4010 = "family4_fail_11";
					return 1;
				}
				iVar0++;
			}
			if (GlobalFunc_693(&Local_2743))
			{
				bLocal_3918 = true;
				sLocal_4010 = "family4_fail_11";
				return 1;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_2743))
			{
				if ((ENTITY::GET_ENTITY_HEALTH(Local_2743) < 700 || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_2743) < 700f) || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_2743) < 700f)
				{
					sLocal_4010 = "family4_fail_11";
					return 1;
				}
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_2743, Local_2743.f_3, 2f, 2f, 2f, 0, 1, 0))
				{
					sLocal_4010 = "family4_fail_11";
					return 1;
				}
			}
			if (GlobalFunc_693(&Local_2713))
			{
				bLocal_3918 = true;
				sLocal_4010 = "family4_fail_11";
				return 1;
			}
			iVar0 = 0;
			while (iVar0 <= (Local_2819 - 1))
			{
				if (GlobalFunc_693(&(Local_2819[iVar0 /*15*/])))
				{
					bLocal_3918 = true;
					sLocal_4010 = "family4_fail_11";
					return 1;
				}
				iVar0++;
			}
			if ((((GlobalFunc_693(&iLocal_4030) || GlobalFunc_693(&iLocal_4034)) || GlobalFunc_693(&iLocal_4035)) || GlobalFunc_693(&iLocal_4036)) || GlobalFunc_693(&iLocal_4037))
			{
				bLocal_3918 = true;
				sLocal_4010 = "family4_fail_11";
				return 1;
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_3865[2]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_3865[2], 1), 1) > 200f)
				{
					sLocal_4010 = "family4_fail_10";
					return 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_3865[0]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_3865[0], 1), 1) > 200f)
				{
					sLocal_4010 = "family4_fail_9";
					return 1;
				}
			}
			if (func_747(PLAYER::PLAYER_PED_ID(), -260.7652f, -2026.163f, 29.1458f))
			{
				if ((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
					{
						func_47();
					}
					bLocal_3918 = true;
					sLocal_4010 = "family4_fail_11";
					return 1;
				}
			}
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar1))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1, -258.158f, -2034.546f, 27.946f, -248.087f, -2022.372f, 31.946f, 5.2f, 0, 1, 0))
					{
						func_47();
						bLocal_3918 = true;
						sLocal_4010 = "family4_fail_11";
						return 1;
					}
				}
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -175.828f, -2039.052f, 26.621f, -276.227f, -1989.866f, 35.621f, 195.7f, 0, 1, 0))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &uVar2, 1))
					{
						if (WEAPON::GET_WEAPONTYPE_GROUP(uVar2) != joaat("GROUP_THROWN"))
						{
							func_47();
							bLocal_3918 = true;
							sLocal_4010 = "family4_fail_11";
							return 1;
						}
					}
				}
				if (GlobalFunc_621(&iVar3))
				{
					if (ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("firetruk"))
					{
						if (PAD::IS_CONTROL_PRESSED(0, 69))
						{
							bLocal_3918 = true;
							sLocal_4010 = "family4_fail_11";
							return 1;
						}
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					sLocal_4010 = "family4_fail_11";
					return 1;
				}
			}
			if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -231.798f, -2041.398f, 26.361f, -260.114f, -2021.864f, 34.161f, 39.2f) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -252.133f, -2011.385f, 29.146f, -269.892f, -2032.251f, 32.146f, 16.5f))
			{
				func_47();
				bLocal_3918 = true;
				sLocal_4010 = "family4_fail_11";
				return 1;
			}
			break;
		
		case 4:
			if (GlobalFunc_694(&(uLocal_3865[2])))
			{
				sLocal_4010 = "family4_fail_1";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_3865[0])))
			{
				sLocal_4010 = "family4_fail_0";
				return 1;
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_3865[2]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_3865[2], 1), 1) > 200f)
				{
					sLocal_4010 = "family4_fail_10";
					return 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_3865[0]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_3865[0], 1), 1) > 200f)
				{
					sLocal_4010 = "family4_fail_9";
					return 1;
				}
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -243.6647f, -2001.472f, 24.7756f, 1) > 200f)
			{
				sLocal_4010 = "family4_fail_12";
				return 1;
			}
			break;
		
		case 5:
			if (GlobalFunc_694(&Local_2966))
			{
				sLocal_4010 = "family4_fail_2";
				return 1;
			}
			if (GlobalFunc_694(&Local_2926))
			{
				sLocal_4010 = "family4_fail_3";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_3865[2])))
			{
				sLocal_4010 = "family4_fail_1";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_3865[0])))
			{
				sLocal_4010 = "family4_fail_0";
				return 1;
			}
			if (GlobalFunc_693(&Local_2743))
			{
				sLocal_4010 = "family4_fail_5";
				return 1;
			}
			if (GlobalFunc_693(&Local_2713) || GlobalFunc_693(&Local_2728))
			{
				sLocal_4010 = "family4_god_5";
				return 1;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_2743))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(Local_2926, Local_2743))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2743))
					{
						if (func_747(PLAYER::PLAYER_PED_ID(), -249.8176f, -2008.059f, 29.1458f))
						{
							if (!func_751(PLAYER::PLAYER_PED_ID(), -249.8176f, -2008.059f, 29.1458f, "GtaMloRoom001"))
							{
								sLocal_4010 = "family4_fail_6";
								return 1;
							}
						}
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2743) > 11000f)
						{
							if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2713))
							{
								sLocal_4010 = "family4_fail_6";
								return 1;
							}
						}
					}
				}
			}
			switch (GlobalFunc_8315())
			{
				case 2:
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_3865[0], 1), 1) > 200f)
					{
						sLocal_4010 = "family4_fail_9";
						return 1;
					}
					break;
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_2926, 1), 1) > 200f)
			{
				sLocal_4010 = "family4_fail_6";
				return 1;
			}
			if (GlobalFunc_588(&iLocal_3926, 60000))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_2926, 1), 1) > 150f)
				{
					sLocal_4010 = "family4_fail_6";
					return 1;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_3865[0], 1), 1) > 100f)
				{
					sLocal_4010 = "family4_fail_9";
					return 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_2713))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2713))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_3865[0], 1), 1) > 50f)
					{
						sLocal_4010 = "family4_fail_9";
						return 1;
					}
				}
			}
			break;
		
		case 6:
			if (GlobalFunc_694(&Local_2926))
			{
				sLocal_4010 = "family4_fail_3";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_3865[2])))
			{
				sLocal_4010 = "family4_fail_1";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_3865[0])))
			{
				sLocal_4010 = "family4_fail_0";
				return 1;
			}
			if (GlobalFunc_693(&Local_2743))
			{
				sLocal_4010 = "family4_fail_5";
				return 1;
			}
			if (GlobalFunc_693(&Local_2713) || GlobalFunc_693(&Local_2728))
			{
				sLocal_4010 = "family4_god_5";
				return 1;
			}
			break;
		
		case 7:
			if (GlobalFunc_694(&Local_2926))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_2743))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2743))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2743);
					}
				}
				sLocal_4010 = "family4_fail_3";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_3865[0])))
			{
				sLocal_4010 = "family4_fail_0";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_3865[2])))
			{
				sLocal_4010 = "family4_fail_1";
				return 1;
			}
			if (GlobalFunc_693(&Local_2743))
			{
				sLocal_4010 = "family4_fail_3";
				FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(Local_2743, 0), 0, 2f, 1, 0, 1065353216);
				return 1;
			}
			if (GlobalFunc_693(&Local_2713) || GlobalFunc_693(&Local_2728))
			{
				sLocal_4010 = "family4_god_5";
				return 1;
			}
			if (GlobalFunc_692(&Local_2713))
			{
				sLocal_4010 = "family4_god_4";
				return 1;
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_3865[0], 1), 1) > 200f)
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_3865[0]))
				{
					sLocal_4010 = "family4_fail_9";
					return 1;
				}
			}
			if (!func_853())
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_2926, 1), 1) > 250f)
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_2926))
					{
						sLocal_4010 = "family4_fail_6";
						return 1;
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_2926, 1), 1) > 300f)
					{
						sLocal_4010 = "family4_fail_6";
						return 1;
					}
				}
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_2926, 1), 1) > 400f)
			{
				sLocal_4010 = "family4_fail_6";
				return 1;
			}
			break;
		
		case 8:
		case 9:
			if (GlobalFunc_694(&Local_2926))
			{
				sLocal_4010 = "family4_fail_3";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_3865[0])))
			{
				sLocal_4010 = "family4_fail_0";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_3865[2])))
			{
				sLocal_4010 = "family4_fail_1";
				return 1;
			}
			if (GlobalFunc_693(&Local_2743))
			{
				sLocal_4010 = "family4_fail_3";
				VEHICLE::EXPLODE_VEHICLE(Local_2743, 1, 0);
				return 1;
			}
			if (GlobalFunc_693(&Local_2713) || GlobalFunc_693(&Local_2728))
			{
				sLocal_4010 = "family4_god_5";
				return 1;
			}
			break;
		
		case 11:
			if (GlobalFunc_693(&Local_2713))
			{
			}
			if (GlobalFunc_693(&Local_2728))
			{
			}
			if (GlobalFunc_693(&(Local_2758[0 /*15*/])))
			{
			}
			if (GlobalFunc_693(&Local_2743))
			{
			}
			if (GlobalFunc_694(&Local_2926))
			{
			}
			break;
		
		case 12:
			if (GlobalFunc_694(&Local_2926))
			{
				sLocal_4010 = "family4_fail_3";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_3865[0])))
			{
				sLocal_4010 = "family4_fail_0";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_3865[2])))
			{
				sLocal_4010 = "family4_fail_1";
				return 1;
			}
			if (GlobalFunc_693(&Local_2743))
			{
				sLocal_4010 = "family4_fail_3";
				VEHICLE::EXPLODE_VEHICLE(Local_2743, 1, 0);
				return 1;
			}
			if (GlobalFunc_693(&Local_2713) || GlobalFunc_693(&Local_2728))
			{
				sLocal_4010 = "family4_god_5";
				return 1;
			}
			break;
	}
	return 0;
}

int func_853()//Position - 0x7BBAE
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 746.675f, -371.534f, 14.751f, 769.989f, -490.368f, 34.751f, 110f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 847.737f, -352.096f, 20.22f, 870.975f, -470.538f, 77.346f, 164.8f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}




void func_857()//Position - 0x7BCC4
{
	int iVar0;
	
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	func_603();
	func_869();
	func_868();
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_2713.f_1, 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_2728.f_1, 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_2743.f_1, 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_2698.f_1, 1);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.5f);
	GlobalFunc_696();
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-392.1f, -2114.8f, 100f, -141.4f, -1837f, -100f, 0, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(-193.7f, -2025f, 35f, -145.7f, -1988f, 20f, 0, 1, 1, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(-267.8f, -2032f, 35f, -246.2f, -2024f, -28f, 0, 1, 1, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(-260.8f, -2029f, -100f, -333f, -1931f, 100f, 0, 1, 1, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(-254f, -2024.9f, -100f, -333f, -1931f, 100f, 0, 1, 1, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(-249.7f, -2016f, -100f, -333f, -1931f, 100f, 0, 1, 1, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(987f, -209.5f, 0f, 1121f, -413f, 78f, 0, 1, 1, 1);
	OBJECT::_DOOR_CONTROL(joaat("v_ilev_stad_fdoor"), -259.49f, -2031.94f, 30.52f, 1, 0f, 0f, 1f);
	OBJECT::_DOOR_CONTROL(joaat("v_ilev_stad_fdoor"), -257.49f, -2029.56f, 30.52f, 1, 0f, 0f, -1f);
	OBJECT::_DOOR_CONTROL(joaat("v_ilev_stad_fdoor"), -256.08f, -2027.87f, 30.52f, 1, 0f, 0f, 1f);
	OBJECT::_DOOR_CONTROL(joaat("v_ilev_stad_fdoor"), -254.09f, -2025.5f, 30.52f, 1, 0f, 0f, -1f);
	OBJECT::_DOOR_CONTROL(joaat("v_ilev_stad_fdoor"), -252.67f, -2023.81f, 30.52f, 1, 0f, 0f, 1f);
	OBJECT::_DOOR_CONTROL(joaat("v_ilev_stad_fdoor"), -250.68f, -2021.44f, 30.52f, 1, 0f, 0f, -1f);
	GlobalFunc_7621(100, 1, 0, 1, 0);
	if (GlobalFunc_199())
	{
		iLocal_4009 = 1;
		if (!Global_84544)
		{
			switch (GlobalFunc_198())
			{
				case 0:
					func_600();
					break;
				
				case 1:
					func_548();
					break;
				
				case 2:
					func_513();
					break;
				
				case 3:
					func_511();
					break;
				
				case 4:
					func_427();
					break;
				
				case 5:
					break;
			}
		}
		else
		{
			iVar0 = GlobalFunc_198() + 1;
			switch (iVar0)
			{
				case 1:
					func_548();
					break;
				
				case 2:
					func_513();
					break;
				
				case 3:
					func_511();
					break;
				
				case 4:
					func_427();
					break;
				
				case 5:
					func_60();
					break;
				}
		}
		iLocal_4009 = 0;
	}
	else
	{
		Global_86818 = 0;
		if (!GlobalFunc_2(0))
		{
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				if (!CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (GlobalFunc_8315() == 0)
				{
					iLocal_2696 = 2;
				}
				func_859();
			}
			else
			{
				switch (GlobalFunc_8315())
				{
					case 2:
						iLocal_2696 = 1;
						break;
					}
			}
			GlobalFunc_11046(0, "start of mission", 0, 0, 0, 1);
		}
		else
		{
			func_858();
		}
	}
}

void func_858()//Position - 0x7C018
{
	STREAMING::REQUEST_MODEL(GlobalFunc_4917(0));
	while (!STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(0)))
	{
		SYSTEM::WAIT(0);
	}
	func_371(0, 1);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -822.2418f, 180.9213f, 70.6951f, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 73.814f);
	STREAMING::NEW_LOAD_SCENE_START(-822.2418f, 180.9213f, 70.6951f, GlobalFunc_590(0f, 0f, 73.814f), 100f, 0);
	while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
	{
		SYSTEM::WAIT(0);
	}
	STREAMING::NEW_LOAD_SCENE_STOP();
	iLocal_4247 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-800.31f, 184.8f, 72.72f, "V_Michael");
	INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_4247);
	CUTSCENE::REQUEST_CUTSCENE("FAM_4_INT_ALT1", 8);
	while (!INTERIOR::IS_INTERIOR_READY(iLocal_4247) || !CUTSCENE::HAS_CUTSCENE_LOADED())
	{
		SYSTEM::WAIT(0);
	}
	switch (GlobalFunc_8315())
	{
		case 0:
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "trevor", 2, GlobalFunc_4917(2), 0);
			break;
	}
	GlobalFunc_8316(1, 1, 1, 0);
	CUTSCENE::START_CUTSCENE(0);
	while (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		SYSTEM::WAIT(0);
	}
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_MICHAELS_HOUSE_RADIO", 0);
	STREAMING::_0xEF39EE20C537E98C(Local_2946.f_3, GlobalFunc_590(0f, 0f, Local_2946.f_9));
	STREAMING::_0xBEB2D9A1D9A8F55A(5, 5, 5, 5);
	GlobalFunc_8365(-800.31f, 184.8f, 72.72f, 300f, 0);
	GlobalFunc_6791(0, 0);
	iLocal_4043 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_4043))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_4043, 0))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_4043, -817.51f, 151.703f, 64.606f, -815.789f, 192.767f, 77.706f, 61.4f, 0, 1, 0))
			{
				GlobalFunc_9805(-812.943f, 167.079f, 69.294f, -811.455f, 192.135f, 76.794f, 37f, Local_2698.f_3, Local_2698.f_6, 15f, 15f, 15f, 0, 1, 1, 0, 0);
				func_813(Local_2698.f_3, Local_2698.f_6);
			}
			else
			{
				GlobalFunc_9805(-860.221f, 150.219f, 62.021f, -858.733f, 175.275f, 72.921f, 31.5f, Local_4004, fLocal_4007, 15f, 15f, 15f, 0, 1, 1, 0, 0);
				func_813(Local_4004, fLocal_4007);
			}
		}
	}
	MISC::CLEAR_AREA(-800.31f, 184.8f, 72.72f, 10000f, 1, 0, 0, 0);
	iLocal_3945 = 2;
	CAM::DO_SCREEN_FADE_IN(800);
	GlobalFunc_11046(0, "start of mission", 0, 0, 0, 1);
	Global_93588 = 0;
}

void func_859()//Position - 0x7C2AE
{
	iLocal_4043 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_4043))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_4043, 0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_4043, 1, 1);
			GlobalFunc_9257(iLocal_4043, 0, 145);
			VEHICLE::DELETE_VEHICLE(&iLocal_4043);
		}
		else
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_4043, 1, 1);
			VEHICLE::DELETE_VEHICLE(&iLocal_4043);
		}
	}
}









void func_868()//Position - 0x807BB
{
	PED::ADD_RELATIONSHIP_GROUP("players group", &iLocal_4274);
	PED::ADD_RELATIONSHIP_GROUP("enemy group", &iLocal_4275);
	PED::ADD_RELATIONSHIP_GROUP("gropie group", &iLocal_4276);
}

void func_869()//Position - 0x807EA
{
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("fam4aud", 6))
	{
		HUD::REQUEST_ADDITIONAL_TEXT("fam4aud", 6);
	}
	if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("family4", 0))
	{
		HUD::REQUEST_ADDITIONAL_TEXT("family4", 0);
	}
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
	{
		SYSTEM::WAIT(0);
	}
}

void func_870()//Position - 0x80844
{
	GlobalFunc_4935();
	MISC::SET_FAKE_WANTED_LEVEL(0);
	PLAYER::SET_MAX_WANTED_LEVEL(6);
	PED::SET_CREATE_RANDOM_COPS(1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_MICHAELS_HOUSE_RADIO", 1);
	GlobalFunc_699();
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
	GlobalFunc_601(2, 0);
	if (ENTITY::DOES_ENTITY_EXIST(Local_2713))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2713, 0))
		{
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_2713, true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_2728))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2728, 0))
		{
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_2728, true);
		}
	}
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_2713.f_1, 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_2728.f_1, 0);
	if (CAM::DOES_CAM_EXIST(uLocal_4013))
	{
		CAM::DESTROY_CAM(uLocal_4013, 0);
		CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
	}
	GlobalFunc_4948(&uLocal_4209, 0, 0);
	TASK::REMOVE_WAYPOINT_RECORDING("family4_0");
	TASK::REMOVE_WAYPOINT_RECORDING("family4_1");
	TASK::REMOVE_WAYPOINT_RECORDING("family4_2");
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("fame1");
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	MISC::SET_TIME_SCALE(1f);
	VEHICLE::SET_RANDOM_TRAINS(1);
	func_6(0, 1);
	GlobalFunc_5652(&Local_4221, 1, 0);
	GlobalFunc_698();
	GlobalFunc_8523(1, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-365.5f, -2063.4f, 100f, -141.4f, -1837f, -100f, 1, 1);
	AUDIO::TRIGGER_MUSIC_EVENT("FAM4_MISSION_FAIL");
	GlobalFunc_7621(100, 0, 1, 1, 0);
	AUDIO::_0x149AEE66F0CB3A99(0f, 0f);
	STREAMING::_0xF8155A7F03DDFC8E(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}




