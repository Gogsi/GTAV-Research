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
	bool bLocal_49 = 0;
	bool bLocal_50 = 0;
	bool bLocal_51 = 0;
	bool bLocal_52 = 0;
	bool bLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	bool bLocal_56 = 0;
	bool bLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = 0;
	bool bLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	bool bLocal_65 = 0;
	int iLocal_66 = 0;
	bool bLocal_67 = 0;
	int iLocal_68 = 0;
	bool bLocal_69 = 0;
	var uLocal_70 = 0;
	bool bLocal_71 = 0;
	bool bLocal_72 = 0;
	bool bLocal_73 = 0;
	bool bLocal_74 = 0;
	bool bLocal_75 = 0;
	int iLocal_76 = 0;
	bool bLocal_77 = 0;
	bool bLocal_78 = 0;
	bool bLocal_79 = 0;
	bool bLocal_80 = 0;
	float fLocal_81[150] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_232[150] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_383[150] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_534[150] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_685[150] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	float fLocal_840[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_866[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_892[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_918[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_944[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_970[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_996[50] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1047[50] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1098[50] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1149[50] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1200 = 0f;
	float fLocal_1201 = 0f;
	float fLocal_1202 = 0f;
	float fLocal_1203 = 0f;
	float fLocal_1204 = 0f;
	float fLocal_1205 = 0f;
	float fLocal_1206 = 0f;
	float fLocal_1207 = 0f;
	float fLocal_1208 = 0f;
	float fLocal_1209 = 0f;
	float fLocal_1210 = 0f;
	float fLocal_1211 = 0f;
	float fLocal_1212 = 0f;
	float fLocal_1213 = 0f;
	float fLocal_1214 = 0f;
	float fLocal_1215 = 0f;
	float fLocal_1216 = 0f;
	float fLocal_1217 = 0f;
	float fLocal_1218 = 0f;
	float fLocal_1219 = 0f;
	float fLocal_1220 = 0f;
	int iLocal_1221[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1372[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1523[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1674[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1700[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1726[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1752[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1803 = 0;
	int iLocal_1804 = 0;
	int iLocal_1805 = 0;
	int iLocal_1806 = 0;
	int iLocal_1807 = 0;
	int iLocal_1808 = 0;
	int iLocal_1809 = 0;
	int iLocal_1810 = 0;
	int iLocal_1811 = 0;
	int iLocal_1812 = 0;
	int iLocal_1813 = 0;
	int iLocal_1814 = 0;
	int iLocal_1815 = 0;
	int iLocal_1816 = 0;
	int iLocal_1817 = 0;
	int iLocal_1818 = 0;
	int iLocal_1819 = 0;
	struct<3> Local_1820[150];
	struct<3> Local_2271[50];
	struct<3> Local_2422[25];
	struct<3> Local_2498 = { 0, 0, 0 } ;
	struct<3> Local_2501 = { 0, 0, 0 } ;
	struct<3> Local_2504 = { 0, 0, 0 } ;
	var uLocal_2507 = 0;
	var uLocal_2508 = 0;
	var uLocal_2509 = 0;
	var uLocal_2510 = 0;
	var uLocal_2511 = 0;
	var uLocal_2512 = 0;
	struct<3> Local_2513 = { 0, 0, 0 } ;
	struct<3> Local_2516 = { 0, 0, 0 } ;
	struct<3> Local_2519 = { 0, 0, 0 } ;
	struct<3> Local_2522 = { 0, 0, 0 } ;
	char cLocal_2525[64] = "";
	var uLocal_2533 = 0;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	int iLocal_2541 = 0;
	int iLocal_2542[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2693[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2744[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2770 = 0;
	int iLocal_2771 = 0;
	int iLocal_2772 = 0;
	int iLocal_2773[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2924[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2939[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2990[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3016[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_3023 = 0;
	int iLocal_3024 = 0;
	int iLocal_3025 = 0;
	var uLocal_3026 = 14;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = 0;
	var uLocal_3030 = 0;
	var uLocal_3031 = 0;
	var uLocal_3032 = 0;
	var uLocal_3033 = 0;
	var uLocal_3034 = 0;
	var uLocal_3035 = 0;
	var uLocal_3036 = 0;
	var uLocal_3037 = 0;
	var uLocal_3038 = 0;
	var uLocal_3039 = 0;
	var uLocal_3040 = 0;
	char* sLocal_3041 = NULL;
	struct<3> Local_3042 = { 0, 0, 0 } ;
	struct<3> Local_3045 = { 0, 0, 0 } ;
	struct<3> Local_3048 = { 0, 0, 0 } ;
	struct<3> Local_3051 = { 0, 0, 0 } ;
	struct<3> Local_3054 = { 0, 0, 0 } ;
	struct<3> Local_3057 = { 0, 0, 0 } ;
	char* sLocal_3060 = NULL;
	struct<3> Local_3061 = { 0, 0, 0 } ;
	struct<3> Local_3064 = { 0, 0, 0 } ;
	struct<3> Local_3067 = { 0, 0, 0 } ;
	struct<3> Local_3070 = { 0, 0, 0 } ;
	struct<2> Local_3073 = { 0, 0 } ;
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
	struct<2> Local_3077 = { 0, 0 } ;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	struct<2> Local_3081 = { 0, 0 } ;
	var uLocal_3083 = 0;
	var uLocal_3084 = 0;
	struct<2> Local_3085 = { 0, 0 } ;
	var uLocal_3087 = 0;
	var uLocal_3088 = 0;
	char cLocal_3089[16] = "";
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	char cLocal_3093[16] = "";
	var uLocal_3095 = 0;
	var uLocal_3096 = 0;
	struct<2> Local_3097 = { 0, 0 } ;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	int iLocal_3101 = 0;
	var uLocal_3102 = 0;
	int iLocal_3103 = 0;
	int iLocal_3104 = 0;
	int iLocal_3105 = 0;
	struct<17> Local_3106 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3123 = 0;
	struct<16> Local_3124 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3140 = 0;
	var uLocal_3141 = 0;
	struct<12> Local_3142 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3154 = 0;
	var uLocal_3155 = 0;
	var uLocal_3156 = 0;
	var uLocal_3157 = 0;
	var uLocal_3158 = 0;
	var uLocal_3159 = 0;
	struct<12> Local_3160 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3172 = 0;
	var uLocal_3173 = 0;
	var uLocal_3174 = 0;
	var uLocal_3175 = 0;
	var uLocal_3176 = 0;
	var uLocal_3177 = 0;
	struct<7> Local_3178 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3185 = 0;
	var uLocal_3186 = 0;
	var uLocal_3187 = 0;
	var uLocal_3188 = 0;
	var uLocal_3189 = 0;
	var uLocal_3190 = 0;
	var uLocal_3191 = 0;
	var uLocal_3192 = 0;
	var uLocal_3193 = 0;
	var uLocal_3194 = 0;
	var uLocal_3195 = 0;
	var uLocal_3196 = 0;
	var uLocal_3197 = 0;
	var uLocal_3198 = 0;
	var uLocal_3199 = 0;
	struct<12> Local_3200 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3212 = 0;
	var uLocal_3213 = 0;
	var uLocal_3214 = 0;
	var uLocal_3215 = 0;
	var uLocal_3216 = 0;
	var uLocal_3217 = 0;
	var uLocal_3218 = 0;
	var uLocal_3219 = 0;
	var uLocal_3220 = 0;
	var uLocal_3221 = 0;
	struct<22> Local_3222 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<22> Local_3244 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_3266 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3273 = 0;
	var uLocal_3274 = 0;
	var uLocal_3275 = 0;
	var uLocal_3276 = 0;
	var uLocal_3277 = 0;
	var uLocal_3278 = 0;
	var uLocal_3279 = 0;
	var uLocal_3280 = 0;
	var uLocal_3281 = 0;
	var uLocal_3282 = 0;
	var uLocal_3283 = 0;
	var uLocal_3284 = 0;
	var uLocal_3285 = 0;
	var uLocal_3286 = 0;
	var uLocal_3287 = 0;
	struct<8> Local_3288 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_3296 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_3304 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_3312 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_3320 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_3328 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_3336 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_3344 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_3352 = 0;
	int iLocal_3353 = 0;
	int iLocal_3354 = 0;
	int iLocal_3355 = 0;
	int iLocal_3356 = 4;
	var uLocal_3357 = 0;
	var uLocal_3358 = 0;
	var uLocal_3359 = 0;
	var uLocal_3360 = 0;
	var uLocal_3361 = 0;
	var uLocal_3362 = 0;
	var uLocal_3363 = 0;
	var uLocal_3364 = 4;
	var uLocal_3365 = 0;
	var uLocal_3366 = 0;
	var uLocal_3367 = 0;
	var uLocal_3368 = 0;
	var uLocal_3369 = 4;
	var uLocal_3370 = 0;
	var uLocal_3371 = 0;
	var uLocal_3372 = 0;
	var uLocal_3373 = 0;
	var uLocal_3374 = 4;
	var uLocal_3375 = 0;
	var uLocal_3376 = 0;
	var uLocal_3377 = 0;
	var uLocal_3378 = 0;
	var uLocal_3379 = 0;
	var uLocal_3380 = 4;
	var uLocal_3381 = 0;
	var uLocal_3382 = 0;
	var uLocal_3383 = 0;
	var uLocal_3384 = 0;
	var uLocal_3385 = 4;
	var uLocal_3386 = 0;
	var uLocal_3387 = 0;
	var uLocal_3388 = 0;
	var uLocal_3389 = 0;
	var uLocal_3390 = 4;
	var uLocal_3391 = 0;
	var uLocal_3392 = 0;
	var uLocal_3393 = 0;
	var uLocal_3394 = 0;
	var uLocal_3395 = 0;
	var uLocal_3396 = 0;
	var uLocal_3397 = 0;
	var uLocal_3398 = 0;
	var uLocal_3399 = 0;
	struct<21> Local_3400 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3421 = 0;
	var uLocal_3422 = 0;
	var uLocal_3423 = 0;
	var uLocal_3424 = 0;
	var uLocal_3425 = 0;
	var uLocal_3426 = 0;
	var uLocal_3427 = 0;
	var uLocal_3428 = 0;
	var uLocal_3429 = 0;
	var uLocal_3430 = 0;
	var uLocal_3431 = 0;
	var uLocal_3432 = 0;
	var uLocal_3433 = 0;
	struct<14> Local_3434 = { 0, 3, 0, 0, 0, 0, 0, 1092616192, 1101004800, 0, 0, 0, 0, 0 } ;
	var uLocal_3448 = 0;
	var uLocal_3449 = 0;
	var uLocal_3450 = 0;
	var uLocal_3451 = 3;
	var uLocal_3452 = 0;
	var uLocal_3453 = 0;
	var uLocal_3454 = 0;
	var uLocal_3455 = 0;
	var uLocal_3456 = 0;
	var uLocal_3457 = 0;
	var uLocal_3458 = 0;
	var uLocal_3459 = 0;
	var uLocal_3460 = 0;
	var uLocal_3461 = -1;
	var uLocal_3462 = 0;
	var uLocal_3463 = 0;
	var uLocal_3464 = 0;
	var uLocal_3465 = 0;
	var uLocal_3466 = 0;
	var uLocal_3467 = 0;
	var uLocal_3468 = 1000;
	var uLocal_3469 = 1000;
	var uLocal_3470 = 0;
	var uLocal_3471 = 16;
	var uLocal_3472 = 0;
	var uLocal_3473 = 0;
	var uLocal_3474 = 0;
	var uLocal_3475 = 0;
	var uLocal_3476 = 0;
	var uLocal_3477 = 0;
	var uLocal_3478 = 0;
	var uLocal_3479 = 0;
	var uLocal_3480 = 0;
	var uLocal_3481 = 0;
	var uLocal_3482 = 0;
	var uLocal_3483 = 0;
	var uLocal_3484 = 0;
	var uLocal_3485 = 0;
	var uLocal_3486 = 0;
	var uLocal_3487 = 0;
	var uLocal_3488 = 0;
	var uLocal_3489 = 0;
	var uLocal_3490 = 0;
	var uLocal_3491 = 0;
	var uLocal_3492 = 0;
	var uLocal_3493 = 0;
	var uLocal_3494 = 0;
	var uLocal_3495 = 0;
	var uLocal_3496 = 0;
	var uLocal_3497 = 0;
	var uLocal_3498 = 0;
	var uLocal_3499 = 0;
	var uLocal_3500 = 0;
	var uLocal_3501 = 0;
	var uLocal_3502 = 0;
	var uLocal_3503 = 0;
	var uLocal_3504 = 0;
	var uLocal_3505 = 0;
	var uLocal_3506 = 0;
	var uLocal_3507 = 0;
	var uLocal_3508 = 0;
	var uLocal_3509 = 0;
	var uLocal_3510 = 0;
	var uLocal_3511 = 0;
	var uLocal_3512 = 0;
	var uLocal_3513 = 0;
	var uLocal_3514 = 0;
	var uLocal_3515 = 0;
	var uLocal_3516 = 0;
	var uLocal_3517 = 0;
	var uLocal_3518 = 0;
	var uLocal_3519 = 0;
	var uLocal_3520 = 0;
	var uLocal_3521 = 0;
	var uLocal_3522 = 0;
	var uLocal_3523 = 0;
	var uLocal_3524 = 0;
	var uLocal_3525 = 0;
	var uLocal_3526 = 0;
	var uLocal_3527 = 0;
	var uLocal_3528 = 0;
	var uLocal_3529 = 0;
	var uLocal_3530 = 0;
	var uLocal_3531 = 0;
	var uLocal_3532 = 0;
	var uLocal_3533 = 0;
	var uLocal_3534 = 0;
	var uLocal_3535 = 0;
	var uLocal_3536 = 0;
	var uLocal_3537 = 0;
	var uLocal_3538 = 0;
	var uLocal_3539 = 0;
	var uLocal_3540 = 0;
	var uLocal_3541 = 0;
	var uLocal_3542 = 0;
	var uLocal_3543 = 0;
	var uLocal_3544 = 0;
	var uLocal_3545 = 0;
	var uLocal_3546 = 0;
	var uLocal_3547 = 0;
	var uLocal_3548 = 0;
	var uLocal_3549 = 0;
	var uLocal_3550 = 0;
	var uLocal_3551 = 0;
	var uLocal_3552 = 0;
	var uLocal_3553 = 0;
	var uLocal_3554 = 0;
	var uLocal_3555 = 0;
	var uLocal_3556 = 0;
	var uLocal_3557 = 0;
	var uLocal_3558 = 0;
	var uLocal_3559 = 0;
	var uLocal_3560 = 0;
	var uLocal_3561 = 0;
	var uLocal_3562 = 0;
	var uLocal_3563 = 0;
	var uLocal_3564 = 0;
	var uLocal_3565 = 0;
	var uLocal_3566 = 0;
	var uLocal_3567 = 0;
	var uLocal_3568 = 0;
	var uLocal_3569 = 0;
	var uLocal_3570 = 0;
	var uLocal_3571 = 0;
	var uLocal_3572 = 0;
	var uLocal_3573 = 0;
	var uLocal_3574 = 0;
	var uLocal_3575 = 0;
	var uLocal_3576 = 0;
	var uLocal_3577 = 0;
	var uLocal_3578 = 0;
	var uLocal_3579 = 0;
	var uLocal_3580 = 0;
	var uLocal_3581 = 0;
	var uLocal_3582 = 0;
	var uLocal_3583 = 0;
	var uLocal_3584 = 0;
	var uLocal_3585 = 0;
	var uLocal_3586 = 0;
	var uLocal_3587 = 0;
	var uLocal_3588 = 0;
	var uLocal_3589 = 0;
	var uLocal_3590 = 0;
	var uLocal_3591 = 0;
	var uLocal_3592 = 0;
	var uLocal_3593 = 0;
	var uLocal_3594 = 0;
	var uLocal_3595 = 0;
	var uLocal_3596 = 0;
	var uLocal_3597 = 0;
	var uLocal_3598 = 0;
	var uLocal_3599 = 0;
	var uLocal_3600 = 0;
	var uLocal_3601 = 0;
	var uLocal_3602 = 0;
	var uLocal_3603 = 0;
	var uLocal_3604 = 0;
	var uLocal_3605 = 0;
	var uLocal_3606 = 0;
	var uLocal_3607 = 0;
	var uLocal_3608 = 0;
	var uLocal_3609 = 0;
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
	var uLocal_3628 = 0;
	var uLocal_3629 = 0;
	var uLocal_3630 = 0;
	var uLocal_3631 = 0;
	var uLocal_3632 = 0;
	var uLocal_3633 = 0;
	var uLocal_3634 = 0;
	var uLocal_3635 = 0;
	int iLocal_3636 = 0;
	int iLocal_3637 = 0;
	int iLocal_3638 = 0;
	var uLocal_3639 = 0;
	int iLocal_3640 = 0;
	int iLocal_3641 = 0;
	var uLocal_3642 = 0;
	var uLocal_3643 = 0;
	var uLocal_3644 = 0;
	int iLocal_3645[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3676 = 0;
	int iLocal_3677 = 0;
	int iLocal_3678 = 0;
	var uLocal_3679 = 0;
	var uLocal_3680 = 0;
	var uLocal_3681 = 0;
	var uLocal_3682 = 0;
	int iLocal_3683 = 0;
	int iLocal_3684 = 0;
	int iLocal_3685 = 0;
	int iLocal_3686 = 0;
	int iLocal_3687 = 0;
	float fLocal_3688 = 0f;
	var uLocal_3689 = 0;
	bool bLocal_3690 = 0;
	int iLocal_3691 = 0;
	var uLocal_3692 = 0;
	float fLocal_3693 = 0f;
	float fLocal_3694 = 0f;
	int iLocal_3695 = 0;
	var uLocal_3696 = 0;
	var uLocal_3697 = 0;
	var uLocal_3698 = 0;
	int iLocal_3699 = 0;
	int iLocal_3700 = 0;
	int iLocal_3701 = 0;
	int iLocal_3702 = 0;
	int iLocal_3703 = 0;
	int iLocal_3704 = 0;
	int iLocal_3705 = 0;
	int iLocal_3706 = 0;
	int iLocal_3707 = 0;
	int iLocal_3708 = 0;
	int iLocal_3709 = 0;
	struct<6> Local_3710 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_3716 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_3722 = 0;
	int iLocal_3723 = 0;
	int iLocal_3724 = 0;
	int iLocal_3725 = 0;
	int iLocal_3726 = 0;
	int iLocal_3727 = 0;
	int iLocal_3728 = 0;
	int iLocal_3729 = 0;
	int iLocal_3730 = 0;
	int iLocal_3731 = 0;
	int iLocal_3732 = 0;
	int iLocal_3733 = 0;
	int iLocal_3734 = 0;
	int iLocal_3735 = 0;
	int iLocal_3736 = 0;
	int iLocal_3737 = 0;
	int iLocal_3738 = 0;
	float fLocal_3739 = 0f;
	float fLocal_3740 = 0f;
	float fLocal_3741 = 0f;
	int iLocal_3742 = 0;
	float fLocal_3743 = 0f;
	struct<3> Local_3744 = { 0, 0, 0 } ;
	struct<3> Local_3747 = { 0, 0, 0 } ;
	int iLocal_3750 = 0;
	int iLocal_3751 = 0;
	int iLocal_3752 = 0;
	int iLocal_3753 = 0;
	int iLocal_3754 = 0;
	int iLocal_3755 = 0;
	int iLocal_3756 = 0;
	int iLocal_3757 = 0;
	int iLocal_3758 = 0;
	int iLocal_3759 = 0;
	bool bLocal_3760 = 0;
	int iLocal_3761 = 0;
	int iLocal_3762 = 0;
	int iLocal_3763 = 0;
	int iLocal_3764 = 0;
	int iLocal_3765 = 0;
	int iLocal_3766 = 0;
	int iLocal_3767 = 0;
	int iLocal_3768 = 0;
	int iLocal_3769 = 0;
	int iLocal_3770 = 0;
	bool bLocal_3771 = 0;
	int iLocal_3772 = 0;
	int iLocal_3773 = 0;
	int iLocal_3774 = 0;
	int iLocal_3775 = 0;
	int iLocal_3776 = 0;
	int iLocal_3777 = 0;
	float fLocal_3778 = 0f;
	float fLocal_3779 = 0f;
	float fLocal_3780 = 0f;
	float fLocal_3781 = 0f;
	int iLocal_3782 = 0;
	int iLocal_3783 = 0;
	int iLocal_3784 = 0;
	int iLocal_3785 = 0;
	int iLocal_3786 = 0;
	int iLocal_3787 = 0;
	int iLocal_3788 = 0;
	int iLocal_3789 = 0;
	int iLocal_3790 = 0;
	int iLocal_3791 = 0;
	int iLocal_3792 = 0;
	int iLocal_3793 = 0;
	int iLocal_3794 = 0;
	int iLocal_3795 = 0;
	int iLocal_3796 = 0;
	int iLocal_3797 = 0;
	int iLocal_3798 = 0;
	int iLocal_3799 = 0;
	int iLocal_3800 = 0;
	int iLocal_3801 = 0;
	int iLocal_3802 = 0;
	int iLocal_3803 = 0;
	int iLocal_3804 = 0;
	int iLocal_3805 = 0;
	int iLocal_3806 = 0;
	int iLocal_3807 = 0;
	int iLocal_3808 = 0;
	int iLocal_3809[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_3821 = 8;
	var uLocal_3822 = 0;
	var uLocal_3823 = 0;
	var uLocal_3824 = 0;
	var uLocal_3825 = 0;
	var uLocal_3826 = 0;
	var uLocal_3827 = 0;
	var uLocal_3828 = 0;
	var uLocal_3829 = 0;
	var uLocal_3830 = 6;
	var uLocal_3831 = 0;
	var uLocal_3832 = 0;
	var uLocal_3833 = 0;
	var uLocal_3834 = 0;
	var uLocal_3835 = 0;
	var uLocal_3836 = 0;
	var uLocal_3837 = 1;
	var uLocal_3838 = 0;
	var uLocal_3839[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_3848[8];
	struct<3> Local_3873[2];
	struct<22> Local_3880[2];
	struct<18> Local_3925[2];
	struct<18> Local_3962[2];
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
	bLocal_50 = true;
	bLocal_57 = true;
	bLocal_79 = true;
	fLocal_1200 = 120f;
	fLocal_1201 = 0f;
	fLocal_1203 = 1f;
	fLocal_1204 = 0f;
	fLocal_1205 = 1f;
	fLocal_1206 = 30f;
	fLocal_1208 = 1f;
	fLocal_1209 = 5f;
	fLocal_1210 = 1f;
	fLocal_1211 = 1f;
	fLocal_1212 = 100f;
	fLocal_1213 = 100f;
	fLocal_1214 = 0f;
	fLocal_1215 = 7000f;
	fLocal_1216 = 0f;
	fLocal_1217 = 0f;
	fLocal_1218 = 0.3f;
	fLocal_1219 = 0.5f;
	fLocal_1220 = 50f;
	iLocal_1806 = -1;
	iLocal_1814 = -1;
	iLocal_1815 = -1;
	sLocal_3041 = "ropeFamily3";
	Local_3042 = { -813.8f, 179.23f, 71.16f };
	Local_3045 = { 40f, 40f, 40f };
	Local_3048 = { -991.65f, 645.38f, 138.64f };
	Local_3051 = { -822.26f, 182.9f, 70.9f };
	Local_3054 = { -977.222f, 634.37f, 156f };
	Local_3057 = { -1015.8f, 656.4f, 149.2f };
	sLocal_3060 = "famthree";
	Local_3061 = { -0.875f, -1.75f, -0.475f };
	Local_3064 = { 0.875f, -1.75f, -0.475f };
	Local_3067 = { 0f, 0f, 0f };
	Local_3070 = { 0f, -2.6f, 0.2f };
	StringCopy(&Local_3073, "FAM3_GIT", 16);
	StringCopy(&Local_3077, "FAM3_DCAN", 16);
	StringCopy(&Local_3081, "FAM3_DHOUSE", 16);
	StringCopy(&Local_3085, "FAM3_GBIT", 16);
	StringCopy(&cLocal_3089, "CMN_FLEAVE", 16);
	StringCopy(&cLocal_3093, "CMN_MLEAVE", 16);
	StringCopy(&Local_3097, "LOSE_WANTED", 16);
	StringCopy(&Local_3710, "", 24);
	StringCopy(&Local_3716, "", 24);
	fLocal_3740 = 0.65f;
	iLocal_3783 = -1;
	iLocal_3784 = -1;
	iLocal_3785 = -1;
	iLocal_3786 = -1;
	iLocal_3791 = 250;
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GlobalFunc_10632();
		func_846(1, 1);
		func_843();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (GlobalFunc_199())
	{
		func_840(&iLocal_3101, GlobalFunc_198());
		iLocal_3640 = 1;
		if (Global_84544 == 1)
		{
			iLocal_3101 = func_839(iLocal_3101);
		}
	}
	else
	{
		GlobalFunc_11043(0, "CAR CHASE", 0, 0, 0, 1);
	}
	if (GlobalFunc_2(0))
	{
		if (!GlobalFunc_199())
		{
			iLocal_3101 = 0;
			iLocal_3640 = 1;
		}
	}
	while (true)
	{
		func_802(0);
		if (iLocal_3641 == 1)
		{
			func_798(&iLocal_3101, &uLocal_3102);
		}
		if (iLocal_3352 == 1)
		{
			func_763();
		}
		RECORDING::_0x208784099002BC30("M_MarriageCounselling", 0);
		if (iLocal_3808 > MISC::GET_GAME_TIMER())
		{
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
		}
		switch (iLocal_3101)
		{
			case 0:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_727(iLocal_3101, &iLocal_3637, &iLocal_3641, &uLocal_3639, &iLocal_3640))
				{
					if (func_712(&iLocal_3638))
					{
						func_711();
						iLocal_3101 = 1;
					}
				}
				break;
			
			case 1:
				func_710();
				if (func_727(iLocal_3101, &iLocal_3637, &iLocal_3641, &uLocal_3639, &iLocal_3640))
				{
					if (func_364(&iLocal_3638))
					{
						func_711();
						iLocal_3101 = 2;
					}
				}
				break;
			
			case 2:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_727(iLocal_3101, &iLocal_3637, &iLocal_3641, &uLocal_3639, &iLocal_3640))
				{
					if (func_363(&iLocal_3638))
					{
						func_711();
						iLocal_3101 = 3;
					}
				}
				break;
			
			case 3:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_727(iLocal_3101, &iLocal_3637, &iLocal_3641, &uLocal_3639, &iLocal_3640))
				{
					if (func_345(&iLocal_3638))
					{
						func_711();
						iLocal_3101 = 4;
					}
				}
				break;
			
			case 4:
				if (iLocal_3754 == 0)
				{
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.4f);
				}
				if (func_727(iLocal_3101, &iLocal_3637, &iLocal_3641, &uLocal_3639, &iLocal_3640))
				{
					if (func_200(&iLocal_3638))
					{
						func_711();
						iLocal_3101 = 5;
					}
				}
				break;
			
			case 5:
				if (func_727(iLocal_3101, &iLocal_3637, &iLocal_3641, &uLocal_3639, &iLocal_3640))
				{
					if (func_106(&iLocal_3638))
					{
						func_711();
						if (!GlobalFunc_2(0))
						{
							iLocal_3101 = 6;
						}
						else
						{
							iLocal_3101 = 7;
						}
					}
				}
				break;
			
			case 6:
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				if (func_727(iLocal_3101, &iLocal_3637, &iLocal_3641, &uLocal_3639, &iLocal_3640))
				{
					if (func_23(&iLocal_3638))
					{
						func_711();
						iLocal_3101 = 7;
					}
				}
				break;
			
			case 7:
				GlobalFunc_5103(0, 0);
				func_843();
				SCRIPT::TERMINATE_THIS_THREAD();
				break;
			
			case 8:
				func_4(&uLocal_3102);
				HUD::CLEAR_HELP(1);
				HUD::CLEAR_PRINTS();
				GlobalFunc_4935();
				AUDIO::TRIGGER_MUSIC_EVENT("FAM3_MISSION_FAIL");
				while (!GlobalFunc_145())
				{
					SYSTEM::WAIT(0);
				}
				func_846(1, 0);
				func_843();
				SCRIPT::TERMINATE_THIS_THREAD();
				break;
		}
		SYSTEM::WAIT(0);
	}
}




void func_4(var uParam0)//Position - 0x574
{
	switch (*uParam0)
	{
		case 1:
			GlobalFunc_10835("FAM3_TDEST");
			break;
		
		case 2:
			GlobalFunc_10835("FAM3_TUND");
			break;
		
		case 3:
			GlobalFunc_10835("CMN_MDIED");
			break;
		
		case 4:
			GlobalFunc_10835("CMN_MLEFT");
			break;
		
		case 5:
			GlobalFunc_10835("CMN_FDIED");
			break;
		
		case 6:
			GlobalFunc_10835("CMN_FLEFT");
			break;
		
		case 7:
			GlobalFunc_10835("FAM3_CDEAD");
			break;
		
		case 8:
			GlobalFunc_10835("FAM3_CATTA");
			break;
		
		case 9:
			GlobalFunc_10835("FAM3_CSPOOK");
			break;
		
		case 0:
		case 10:
			GlobalFunc_10835("FAM3_FAIL");
			break;
	}
}



















int func_23(int iParam0)//Position - 0x1727
{
	struct<6> Var0;
	struct<6> Var6;
	struct<21> Var12;
	struct<20> Var34;
	
	switch (*iParam0)
	{
		case 0:
			GlobalFunc_2901(PLAYER::PLAYER_PED_ID(), Local_3124.f_2, Local_3124.f_5, 0, 1, 0);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
				PED::CLEAR_PED_DECORATIONS(PLAYER::PLAYER_PED_ID());
				PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
				PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
				GlobalFunc_7932(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
				MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1000f, 1, 0, 0, 0);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1000f);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1000f);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID()));
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			MISC::SET_WEATHER_TYPE_NOW("CLOUDS");
			CLOCK::ADVANCE_CLOCK_TIME_TO(11, 0, 0);
			iLocal_3794 = MISC::GET_GAME_TIMER();
			*iParam0++;
			break;
		
		case 1:
			if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				STREAMING::NEW_LOAD_SCENE_START(-97.12f, -410.58f, 35.89f, 0.31f, -0.9f, 0.5f, 500f, 0);
				iLocal_3794 = MISC::GET_GAME_TIMER();
			}
			if (STREAMING::IS_NEW_LOAD_SCENE_LOADED() || GlobalFunc_2521(10000, iLocal_3794))
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
				iLocal_3787 = 0;
				*iParam0++;
			}
			break;
		
		case 2:
			STREAMING::REQUEST_MODEL(Local_3304.f_7);
			STREAMING::REQUEST_ANIM_DICT("switch@michael@bench");
			if (STREAMING::HAS_MODEL_LOADED(Local_3304.f_7) && STREAMING::HAS_ANIM_DICT_LOADED("switch@michael@bench"))
			{
				if (Global_68505 == 0)
				{
					if (iLocal_3787 == 0)
					{
						iLocal_3787 = MISC::GET_GAME_TIMER();
					}
					if (iLocal_3787 != 0 && GlobalFunc_2521(1000, iLocal_3787))
					{
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3783))
						{
							iLocal_3783 = PED::CREATE_SYNCHRONIZED_SCENE(-95.55f, -415.1f, 35.675f, 0f, 0f, 133f, 2);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_3783, 1);
							if (func_95(&Local_3304, 0))
							{
								OBJECT::_SET_OBJECT_TEXTURE_VARIATION(Local_3304, GlobalFunc_2899(GlobalFunc_8315()));
								ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_3304, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_3783, "switch@michael@bench", "bench_on_phone_idle_listen", 1000f, -1.5f, 1, 0, 1148846080, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3304.f_7);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
							HUD::DISPLAY_HUD(0);
							HUD::DISPLAY_RADAR(0);
							GlobalFunc_7632(1);
							CAM::DESTROY_ALL_CAMS(0);
							uLocal_3679 = CAM::CREATE_CAMERA(26379945, 1);
							CAM::SET_CAM_PARAMS(uLocal_3679, -90.22699f, -417.3332f, 45.11008f, 37.58002f, -0.04153f, -165.6635f, 50f, 0, 1, 1, 2);
							CAM::SHAKE_CAM(uLocal_3679, "HAND_SHAKE", 0.15f);
							CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
							*iParam0++;
						}
					}
				}
			}
			break;
		
		case 3:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3783))
			{
				CAM::SET_CAM_PARAMS(uLocal_3679, -90.22699f, -417.3332f, 45.11008f, 37.58002f, -0.04153f, -165.6635f, 50f, 0, 1, 1, 2);
				SCRIPT::SET_NO_LOADING_SCREEN(0);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(2500);
				}
				if (!func_88("FAM3_LOUT_1"))
				{
					if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_LOUT", 7, 0, 0, 0))
					{
						func_84("FAM3_LOUT_1", 1);
						iLocal_3792 = MISC::GET_GAME_TIMER();
						iLocal_3793 = 0;
						*iParam0++;
					}
				}
			}
			break;
		
		case 4:
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			CAM::_0x59424BD75174C9B1();
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3783))
			{
				switch (iLocal_3793)
				{
					case 0:
						if ((MISC::GET_GAME_TIMER() - iLocal_3792) > 250)
						{
							CAM::SET_CAM_PARAMS(uLocal_3679, -90.22699f, -417.3332f, 45.11008f, 37.58002f, -0.04153f, -165.6635f, 50f, 0, 1, 1, 2);
							CAM::SET_CAM_PARAMS(uLocal_3679, -93.94202f, -413.061f, 36.34718f, 7.278719f, 0f, 134.3314f, 50f, 14000, 1, 1, 2);
							iLocal_3792 = MISC::GET_GAME_TIMER();
							iLocal_3793 = 1;
						}
						break;
					
					case 1:
						if ((MISC::GET_GAME_TIMER() - iLocal_3792) > 14000)
						{
							CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
							CAM::DESTROY_CAM(uLocal_3679, 0);
							iLocal_3783 = PED::CREATE_SYNCHRONIZED_SCENE(-95.55f, -415.1f, 35.675f, 0f, 0f, 133f, 2);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_3783, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_3783, "switch@michael@bench", "exit_forward", 1.5f, -4f, 7, 0, 1148846080, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
							*iParam0++;
						}
						break;
					}
			}
			break;
		
		case 5:
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			CAM::_0x59424BD75174C9B1();
			PAD::DISABLE_CONTROL_ACTION(1, 0, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 36, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 265, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 51, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 28, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 19, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3783))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3783) > 0.99f)
					{
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
						{
							iLocal_3803 = 1;
						}
						else
						{
							HUD::DISPLAY_HUD(1);
							HUD::DISPLAY_RADAR(1);
						}
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "switch@michael@bench", "cellphone_call_listen_base", 1000f, -1.5f, -1, 49, 0, 0, 0, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
						*iParam0++;
					}
					else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3783) > 0.9f)
					{
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
						{
							if (iLocal_3805 == 0)
							{
								GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
								iLocal_3805 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 6:
			if (iLocal_3803 == 1)
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					HUD::DISPLAY_HUD(1);
					HUD::DISPLAY_RADAR(1);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					iLocal_3803 = 0;
				}
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "switch@michael@bench", "cellphone_call_listen_base", 3))
				{
					PAD::DISABLE_CONTROL_ACTION(0, 36, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 265, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 51, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 28, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 19, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					if (iLocal_3795 == 0)
					{
						if (func_88("FAM3_LOUT_1"))
						{
							if (GlobalFunc_111())
							{
								Var0 = { GlobalFunc_560() };
								Var6 = { GlobalFunc_2209() };
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0) && !MISC::IS_STRING_NULL_OR_EMPTY(&Var6))
								{
									if (MISC::ARE_STRINGS_EQUAL(&Var0, "FAM3_LOUT") && MISC::ARE_STRINGS_EQUAL(&Var6, "FAM3_LOUT_17"))
									{
										GlobalFunc_4935();
										GlobalFunc_5105();
										iLocal_3795 = 1;
									}
								}
							}
						}
					}
					if (func_88("FAM3_LOUT_1"))
					{
						if (!GlobalFunc_111())
						{
							Var12.f_4 = 1065353216;
							Var12.f_5 = 1065353216;
							Var12.f_9 = 1065353216;
							Var12.f_10 = 1065353216;
							Var12.f_14 = 1065353216;
							Var12.f_15 = 1065353216;
							Var12.f_17 = 1040187392;
							Var12.f_18 = 1040187392;
							Var12.f_19 = -1;
							Var34.f_4 = 1065353216;
							Var34.f_5 = 1065353216;
							Var34.f_9 = 1065353216;
							Var34.f_10 = 1065353216;
							Var34.f_14 = 1065353216;
							Var34.f_15 = 1065353216;
							Var34.f_17 = 1040187392;
							Var34.f_18 = 1040187392;
							Var34.f_19 = -1;
							Var12 = 1;
							Var12.f_1 = "switch@michael@bench";
							Var12.f_2 = "cellphone_call_out";
							Var12.f_20 = 32;
							Var12.f_17 = 1.5f;
							Var12.f_18 = -1.5f;
							Var12.f_16 = MISC::GET_HASH_KEY("bonemask_head_neck_and_r_arm");
							TASK::TASK_SCRIPTED_ANIMATION(PLAYER::PLAYER_PED_ID(), &Var12, &Var34, &Var34, 0.25f, 0.25f);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
							*iParam0++;
						}
					}
				}
			}
			break;
		
		case 7:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "switch@michael@bench", "cellphone_call_out", 3))
				{
					PAD::DISABLE_CONTROL_ACTION(0, 36, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 265, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 51, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 28, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 19, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					if (!func_88("FAM3_LOUT_2"))
					{
						if (GlobalFunc_10626(&uLocal_3471, "FAM3AUD", "FAM3_LOUT", "FAM3_LOUT_19", 7, 0, 0))
						{
							func_84("FAM3_LOUT_2", 1);
						}
					}
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "switch@michael@bench", "cellphone_call_out") > 0.3f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_3304))
						{
							if (ENTITY::IS_ENTITY_ATTACHED(Local_3304))
							{
								ENTITY::DETACH_ENTITY(Local_3304, 0, 1);
							}
							OBJECT::DELETE_OBJECT(&Local_3304);
						}
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						*iParam0++;
					}
				}
			}
			break;
		
		case 8:
			if (!GlobalFunc_111())
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_3178))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_3178))
					{
						func_24(Local_3178, Local_3178.f_2, Local_3178.f_5, 24, 0);
					}
				}
				HUD::DISPLAY_HUD(1);
				HUD::DISPLAY_RADAR(1);
				GlobalFunc_7632(0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				STREAMING::REMOVE_ANIM_DICT("switch@michael@bench");
				return 1;
			}
			break;
	}
	return 0;
}

void func_24(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)//Position - 0x2106
{
	struct<54> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_67138.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_67138.f_484[25], 0))
			{
				if (Global_67138.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((VEHICLE::IS_BIG_VEHICLE(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bus")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		GlobalFunc_8627(iParam5);
		Var0.f_9 = 25;
		Var0.f_35 = 2;
		GlobalFunc_4932(iParam0, &Var0);
		if (GlobalFunc_100(Param1, 0f, 0f, 0f))
		{
			Param1 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			fParam4 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
		if (iParam5 == 24)
		{
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
			{
				Global_68102 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
			}
		}
		func_56(iParam5, Var0, Param1, fParam4, GlobalFunc_99(iParam0));
		func_25(iParam5, iParam0, 0);
	}
}

void func_25(int iParam0, int iParam1, int iParam2)//Position - 0x2231
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!GlobalFunc_7217(&(Global_67138.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Global_67138.f_555[0 /*21*/].f_9, 12) && !MISC::IS_BIT_SET(Global_67138.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_67138.f_555[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_68045 != -1 && Global_68045 != iParam0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4249 = GlobalFunc_7626();
			}
			if (iParam1 != Global_67138.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = GlobalFunc_104(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)) && iParam1 != iVar0)
					{
						GlobalFunc_8626(iVar0, 145);
					}
				}
				Global_68044 = iParam1;
				Global_68045 = iParam0;
				Global_68046 = iParam2;
			}
		}
	}
}































void func_56(int iParam0, struct<54> Param1, struct<3> Param55, var uParam58, int iParam59)//Position - 0x4A48
{
	if (GlobalFunc_7217(&(Global_67138.f_555[0 /*21*/]), iParam0))
	{
		if (MISC::IS_BIT_SET(Global_67138.f_555[0 /*21*/].f_9, 10))
		{
			GlobalFunc_8037(iParam0);
			GlobalFunc_98(Param1, &(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[Global_67138.f_555[0 /*21*/].f_14 /*54*/]));
			if (MISC::IS_BIT_SET(Global_67138.f_555[0 /*21*/].f_9, 11))
			{
				Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1312[Global_67138.f_555[0 /*21*/].f_14 /*3*/] = { Param55 };
				Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1382[Global_67138.f_555[0 /*21*/].f_14] = uParam58;
			}
			else
			{
				Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1312[Global_67138.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1382[Global_67138.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1406[Global_67138.f_555[0 /*21*/].f_14] = iParam59 + 1;
			GlobalFunc_4927(iParam0, 1);
		}
	}
}




























void func_84(char* sParam0, bool bParam1)//Position - 0x59D2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (bParam1)
	{
		if (!func_88(sParam0))
		{
			iVar1 = iLocal_3645;
			if (iLocal_3676 < iVar1)
			{
				iLocal_3645[iLocal_3676] = iVar0;
				iLocal_3676++;
			}
		}
	}
	else
	{
		iVar2 = func_86(iVar0);
		if (iVar2 != -1)
		{
			iLocal_3645[iVar2] = 0;
			func_85();
			iLocal_3676 = (iLocal_3676 - 1);
		}
	}
}

void func_85()//Position - 0x5A35
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_3645;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		if (iLocal_3645[iVar1] == 0)
		{
			if (iLocal_3645[iVar1 + 1] != 0)
			{
				iLocal_3645[iVar1] = iLocal_3645[iVar1 + 1];
				iLocal_3645[iVar1 + 1] = 0;
			}
		}
		iVar1++;
	}
}

int func_86(int iParam0)//Position - 0x5A8C
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_3676)
	{
		if (iLocal_3645[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}


int func_88(char* sParam0)//Position - 0x5B0B
{
	int iVar0;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (func_86(iVar0) != -1)
	{
		return 1;
	}
	return 0;
}







int func_95(int iParam0, int iParam1)//Position - 0x5E6A
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		STREAMING::REQUEST_MODEL(iParam0->f_7);
		if (STREAMING::HAS_MODEL_LOADED(iParam0->f_7))
		{
			*iParam0 = OBJECT::CREATE_OBJECT(iParam0->f_7, iParam0->f_1, 1, 1, 0);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*iParam0, iParam0->f_1, 0, 0, 1);
			ENTITY::SET_ENTITY_ROTATION(*iParam0, iParam0->f_4, 2, 1);
			ENTITY::FREEZE_ENTITY_POSITION(*iParam0, iParam1);
			ENTITY::SET_ENTITY_INVINCIBLE(*iParam0, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_7);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 1;
	}
	return 0;
}











int func_106(int iParam0)//Position - 0x954E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (*iParam0)
	{
		case 0:
			if (GlobalFunc_5927("family_3_ext", 1))
			{
				switch (GlobalFunc_8315())
				{
					case 0:
						if (!PED::IS_PED_INJURED(func_196(1)))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_196(1), "Franklin", 0, GlobalFunc_4917(1), 0);
						}
						break;
					
					case 1:
						if (!PED::IS_PED_INJURED(func_196(0)))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_196(0), "Michael", 0, GlobalFunc_4917(0), 0);
						}
						break;
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_3266))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_3266))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(Local_3266, 1);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3266, "Madrazos_Car", 1, joaat("baller"), 0);
					}
				}
				GlobalFunc_8380(1, 1, 1, 0);
				if (!PED::IS_PED_INJURED(func_196(0)))
				{
					PED::REMOVE_PED_HELMET(func_196(0), 1);
				}
				if (!PED::IS_PED_INJURED(func_196(1)))
				{
					PED::REMOVE_PED_HELMET(func_196(1), 1);
				}
				HUD::CLEAR_HELP(1);
				HUD::CLEAR_PRINTS();
				if (GlobalFunc_111())
				{
					GlobalFunc_4956();
				}
				AUDIO::STOP_AUDIO_SCENES();
				AUDIO::TRIGGER_MUSIC_EVENT("FAM3_END");
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 1, 0);
				*iParam0++;
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				if (!PED::IS_PED_INJURED(func_196(0)))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", func_196(0), 0);
				}
				if (!PED::IS_PED_INJURED(func_196(1)))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", func_196(1), 0);
				}
				iLocal_3733 = 1;
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iVar0, -846.193f, 159.1412f, 66.49907f, 10f, 4f, 4f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -835.5897f, 158.5361f, 65.89433f, -827.6454f, 177.585f, 73.08789f, 8f, 0, 1, 0))
						{
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
							}
							GlobalFunc_2882(iVar0);
							if (GlobalFunc_5599(24) && ENTITY::DOES_ENTITY_EXIST(GlobalFunc_104(24)))
							{
								ENTITY::SET_ENTITY_COORDS(iVar0, -821.2841f, 157.5416f, 69.2754f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iVar0, 95.1204f);
							}
							else
							{
								ENTITY::SET_ENTITY_COORDS(iVar0, -867.9103f, 158.2215f, 63.9014f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iVar0, 174.2918f);
							}
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, 1);
							VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, 0, 1);
						}
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_3051, ENTITY::GET_ENTITY_COORDS(iVar0, 1), 1) < 15f)
						{
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
							}
							GlobalFunc_2882(iVar0);
							ENTITY::SET_ENTITY_COORDS(iVar0, Local_3200.f_2, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iVar0, GlobalFunc_512(bLocal_3771, 126.8534f, Local_3200.f_5));
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, 1);
							VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, 0, 1);
							ENTITY::SET_ENTITY_LOD_DIST(iVar0, 50);
							VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iVar0, 2f);
							if (GlobalFunc_4966(iVar0, -824.8156f, 185.3785f, 69.95421f, -820.6133f, 179.7895f, 73.63923f, 7.5f))
							{
								if (GlobalFunc_5599(24) && ENTITY::DOES_ENTITY_EXIST(GlobalFunc_104(24)))
								{
									ENTITY::SET_ENTITY_COORDS(iVar0, -821.2841f, 157.5416f, 69.2754f, 1, 0, 0, 1);
									ENTITY::SET_ENTITY_HEADING(iVar0, 95.1204f);
								}
								else
								{
									ENTITY::SET_ENTITY_COORDS(iVar0, -867.9103f, 158.2215f, 63.9014f, 1, 0, 0, 1);
									ENTITY::SET_ENTITY_HEADING(iVar0, 174.2918f);
								}
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
								VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, 1);
								VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, 0, 1);
							}
						}
					}
					if (iVar0 != Local_3200)
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_3200);
					}
				}
				if (!PED::IS_PED_INJURED(func_196(0)))
				{
					PED::CLEAR_PED_BLOOD_DAMAGE(func_196(0));
					PED::RESET_PED_VISIBLE_DAMAGE(func_196(0));
				}
				if (!PED::IS_PED_INJURED(func_196(1)))
				{
					PED::CLEAR_PED_BLOOD_DAMAGE(func_196(1));
					PED::RESET_PED_VISIBLE_DAMAGE(func_196(1));
				}
				MISC::CLEAR_AREA_OF_PEDS(Local_3051, 1000f, 0);
				MISC::CLEAR_AREA_OF_COPS(Local_3051, 1000f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_3051, 1000f, 0, 0, 0, 0, 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(Local_3051, 1000f, 1);
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2097039789))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2097039789, 0f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2097039789, 3, 0, 1);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2127416656))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2127416656, 0f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2127416656, 3, 0, 1);
				}
				SCRIPT::SET_NO_LOADING_SCREEN(1);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*iParam0++;
			}
			break;
		
		case 2:
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar1);
				}
			}
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				switch (iLocal_3788)
				{
					case 0:
						if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 14500f)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3266, 0))
							{
								VEHICLE::SET_VEHICLE_ENGINE_ON(Local_3266, 1, 1);
								VEHICLE::SET_VEHICLE_LIGHTS(Local_3266, 3);
								iLocal_3788++;
							}
						}
						break;
					
					case 1:
						if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 19200f)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3266, 0))
							{
								VEHICLE::SET_VEHICLE_ENGINE_ON(Local_3266, 0, 0);
								VEHICLE::SET_VEHICLE_LIGHTS(Local_3266, 4);
								iLocal_3788++;
							}
						}
						break;
					
					case 2:
						if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 127760f)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3266, 0))
							{
								VEHICLE::SET_VEHICLE_ENGINE_ON(Local_3266, 1, 1);
								VEHICLE::SET_VEHICLE_LIGHTS(Local_3266, 3);
								iLocal_3788++;
							}
						}
						break;
					
					case 3:
						if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 131850f)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3266, 0))
							{
								VEHICLE::SET_VEHICLE_LIGHTS(Local_3266, 4);
								iLocal_3788++;
							}
						}
						break;
					}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (GlobalFunc_8315() != 0)
				{
					if (GlobalFunc_9019(&iLocal_3356, 0))
					{
						GlobalFunc_10993(&iLocal_3356, 1, 1, 0);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Madrazos_Car", 0))
			{
				func_111(&Local_3266, 1, 1);
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				RECORDING::_0x81CBAE94390F9F89();
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1986583853))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1986583853, 0f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1986583853, 0, 0, 1);
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				GlobalFunc_8380(0, 1, 1, 0);
				if (GlobalFunc_2780() == 1)
				{
					iVar2 = GlobalFunc_104(24);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iVar2))
						{
							GlobalFunc_7976(func_196(1), iVar2, &(Global_89503[1 /*74*/]), &(Global_89734[1 /*3*/]), &(Global_89744[1]), &(Global_89726[1]), &(Global_2544853[1]), 0);
							func_24(iVar2, -25.02f, -1467.714f, 29.7815f, 275.6534f, 24, 0);
							MISC::CLEAR_AREA(-867.91f, 158.22f, 63.9f, 5f, 1, 0, 0, 0);
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(func_196(1)))
				{
					Local_3106 = func_196(1);
					iLocal_3356[1] = Local_3106;
					PED::DELETE_PED(&Local_3106);
				}
				func_111(&Local_3266, 1, 1);
				*iParam0++;
			}
			break;
		
		case 3:
			GlobalFunc_45(1, 1);
			*iParam0++;
			break;
		
		case 4:
			if (Global_68505 == 1)
			{
				*iParam0++;
			}
			break;
		
		case 5:
			if (!GlobalFunc_2(0))
			{
				return 1;
			}
			else if (Global_68505 == 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}





void func_111(int iParam0, int iParam1, int iParam2)//Position - 0xA276
{
	if (iParam1 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (iParam2 == 1)
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0) || ENTITY::IS_ENTITY_DEAD(*iParam0))
				{
					VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*iParam0);
					VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*iParam0);
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*iParam0, 0);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
				}
				if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
				{
					HUD::REMOVE_BLIP(&(iParam0->f_1));
				}
			}
			else if (iParam2 == 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
				{
					VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*iParam0);
					VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*iParam0);
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*iParam0, 0);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
				}
				if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
				{
					HUD::REMOVE_BLIP(&(iParam0->f_1));
				}
			}
		}
	}
	else if (iParam1 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
			{
				if (ENTITY::IS_ENTITY_DEAD(*iParam0) || !ENTITY::IS_ENTITY_DEAD(*iParam0))
				{
					VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*iParam0);
					VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*iParam0);
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*iParam0, 0);
					VEHICLE::DELETE_VEHICLE(iParam0);
				}
			}
		}
		if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
		{
			HUD::REMOVE_BLIP(&(iParam0->f_1));
		}
		iParam0->f_7 = 0;
		iParam0->f_11 = 0;
		iParam0->f_12 = 0;
		iParam0->f_13 = 0;
		iParam0->f_17 = { 0f, 0f, 0f };
		iParam0->f_20 = 0f;
		iParam0->f_21 = 0f;
	}
}





















































































int func_196(int iParam0)//Position - 0x123FA
{
	if (GlobalFunc_8315() == iParam0)
	{
		return PLAYER::PLAYER_PED_ID();
	}
	return iLocal_3356[GlobalFunc_237(iParam0)];
}




int func_200(int iParam0)//Position - 0x124A7
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	MISC::SET_BIT(&(Local_3434.f_13), 20);
	GlobalFunc_688();
	func_343();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	}
	func_291(&iLocal_3750);
	if (iLocal_3352 == 1)
	{
		if (iLocal_3754 == 1)
		{
			if (!GlobalFunc_579())
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_3352 = 0;
				}
				else if (GlobalFunc_2522(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
				{
					if (GlobalFunc_1533(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), -1))
					{
						iLocal_3352 = 0;
					}
				}
			}
		}
		if (iLocal_3353 == 0)
		{
			GlobalFunc_2904(&iLocal_3356, 1, 1);
			iLocal_3353 = 1;
		}
		if (iLocal_3354 == 0)
		{
			if (!func_88("FAM3_HSWITCH2"))
			{
				if (iLocal_3355 == 0)
				{
					iLocal_3355 = MISC::GET_GAME_TIMER();
				}
				else if (GlobalFunc_2521(30000, iLocal_3355))
				{
					GlobalFunc_159("FAM3_HSWITCH", 12500);
					func_84("FAM3_HSWITCH2", 1);
				}
			}
		}
	}
	func_279(&iLocal_3699);
	func_278(&Local_3081);
	func_278(&Local_3085);
	func_278(&cLocal_3089);
	func_278(&cLocal_3093);
	func_278(&Local_3097);
	if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3698))
	{
		STREAMING::REQUEST_PTFX_ASSET();
		if (STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			uLocal_3698 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("ent_ray_fam3_dust_settle", -1016f, 642f, 141f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
		}
	}
	switch (GlobalFunc_8315())
	{
		case 0:
			func_267(func_196(1), &Local_3106, PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), iLocal_3753);
			if (!HUD::DOES_BLIP_EXIST(Local_3434.f_5) && !HUD::DOES_BLIP_EXIST(Local_3434.f_1[0]))
			{
				if (Local_3106.f_15 > 50f)
				{
					if (!HUD::DOES_BLIP_EXIST(Local_3106.f_1))
					{
						Local_3106.f_1 = GlobalFunc_5098(func_196(1), 1, 0);
					}
					if (!func_88(&cLocal_3089))
					{
						func_264(&cLocal_3089, 7500, 1);
					}
				}
				if (HUD::DOES_BLIP_EXIST(Local_3106.f_1))
				{
					if (Local_3106.f_15 <= (50f / 3f))
					{
						if (GlobalFunc_663(&cLocal_3089, 0, 0))
						{
							HUD::CLEAR_PRINTS();
						}
						HUD::REMOVE_BLIP(&(Local_3106.f_1));
					}
				}
			}
			if (iLocal_3753 == 1)
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_ESCAPE_AS_MICHAEL"))
				{
					AUDIO::START_AUDIO_SCENE("FAMILY_3_ESCAPE_AS_MICHAEL");
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_ESCAPE_AS_FRANKLIN"))
				{
					AUDIO::STOP_AUDIO_SCENE("FAMILY_3_ESCAPE_AS_FRANKLIN");
				}
			}
			break;
		
		case 1:
			func_267(func_196(0), &Local_3106, PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), iLocal_3753);
			if (HUD::DOES_BLIP_EXIST(Local_3434.f_5) && !HUD::DOES_BLIP_EXIST(Local_3434.f_1[0]))
			{
				if (Local_3106.f_15 > 50f)
				{
					if (!HUD::DOES_BLIP_EXIST(Local_3124.f_1))
					{
						Local_3124.f_1 = GlobalFunc_5098(func_196(0), 1, 0);
					}
					if (!func_88(&cLocal_3093))
					{
						func_264(&cLocal_3093, 7500, 1);
					}
				}
				if (HUD::DOES_BLIP_EXIST(Local_3124.f_1))
				{
					if (Local_3124.f_15 <= (50f / 3f))
					{
						if (GlobalFunc_663(&cLocal_3093, 0, 0))
						{
							HUD::CLEAR_PRINTS();
						}
						HUD::REMOVE_BLIP(&(Local_3124.f_1));
					}
				}
			}
			if (iLocal_3753 == 1)
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_ESCAPE_AS_FRANKLIN"))
				{
					AUDIO::START_AUDIO_SCENE("FAMILY_3_ESCAPE_AS_FRANKLIN");
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_ESCAPE_AS_MICHAEL"))
				{
					AUDIO::STOP_AUDIO_SCENE("FAMILY_3_ESCAPE_AS_MICHAEL");
				}
			}
			break;
	}
	if (iLocal_3754 == 1)
	{
		if (GlobalFunc_331() || GlobalFunc_2233())
		{
			if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("family_3_ext") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_3051, 1) < 100f)
		{
			STREAMING::REQUEST_MODEL(joaat("baller"));
			CUTSCENE::REQUEST_CUTSCENE("family_3_ext", 8);
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				if (!PED::IS_PED_INJURED(func_196(0)))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", func_196(0), 0);
				}
				if (!PED::IS_PED_INJURED(func_196(1)))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", func_196(1), 0);
				}
				iLocal_3733 = 1;
			}
		}
		else if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("family_3_ext") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::REMOVE_CUTSCENE();
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("baller"));
			iLocal_3733 = 0;
		}
	}
	switch (*iParam0)
	{
		case 0:
			if (iLocal_3753 == 0)
			{
				if (iLocal_3707 == 1)
				{
					if (iLocal_3754 == 0)
					{
						if (func_260(&Local_3434, Local_3051, -824.81f, 185.38f, 69.95f, -820.61f, 179.79f, 73.64f, 8.5f, 1, func_196(1), &Local_3081, &cLocal_3089, 0, 1, 1, -1))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
								{
									GlobalFunc_4935();
									GlobalFunc_5105();
									iLocal_3736 = 1;
									SYSTEM::SETTIMERA(0);
									iLocal_3754 = 1;
									*iParam0++;
								}
							}
							else
							{
								GlobalFunc_4935();
								GlobalFunc_5105();
								iLocal_3736 = 1;
								SYSTEM::SETTIMERA(0);
								iLocal_3754 = 1;
								*iParam0++;
							}
						}
					}
					else
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_ESCAPE_AS_MICHAEL"))
						{
							AUDIO::STOP_AUDIO_SCENE("FAMILY_3_ESCAPE_AS_MICHAEL");
						}
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_ESCAPE_AS_FRANKLIN"))
						{
							AUDIO::STOP_AUDIO_SCENE("FAMILY_3_ESCAPE_AS_FRANKLIN");
						}
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_DRIVE_HOME"))
						{
							if (HUD::DOES_BLIP_EXIST(Local_3434.f_5))
							{
								AUDIO::START_AUDIO_SCENE("FAMILY_3_DRIVE_HOME");
							}
						}
						if (HUD::DOES_BLIP_EXIST(Local_3106.f_1))
						{
							HUD::REMOVE_BLIP(&(Local_3106.f_1));
						}
						if (HUD::DOES_BLIP_EXIST(Local_3124.f_1))
						{
							HUD::REMOVE_BLIP(&(Local_3124.f_1));
						}
						if (GlobalFunc_74("FAM3_HSWITCH"))
						{
							HUD::CLEAR_HELP(1);
						}
						if (!func_88("FAM3_HSTAT1"))
						{
							if (func_88("FAM3_STATA") || func_88("FAM3_STATB"))
							{
								if (iLocal_3737 == 1)
								{
									if (HUD::DOES_BLIP_EXIST(Local_3434.f_5))
									{
										GlobalFunc_159("FAM3_HSTAT1", 12500);
										func_84("FAM3_HSTAT1", 1);
									}
								}
							}
						}
						else if (!func_88("FAM3_HSTAT2"))
						{
							if (HUD::DOES_BLIP_EXIST(Local_3434.f_5))
							{
								if (!GlobalFunc_74("FAM3_HSTAT1"))
								{
									GlobalFunc_159("FAM3_HSTAT2", 12500);
									func_84("FAM3_HSTAT2", 1);
								}
							}
						}
						switch (GlobalFunc_8315())
						{
							case 0:
								func_217(&Local_3434, Local_3051, GlobalFunc_716(), 1, func_196(1), &Local_3081, &cLocal_3089, 0, 1, !iLocal_3758, -1);
								break;
							
							case 1:
								func_217(&Local_3434, Local_3051, GlobalFunc_716(), 1, func_196(0), &Local_3081, &cLocal_3093, 0, 1, !iLocal_3758, -1);
								break;
						}
						if (iLocal_3758 == 0)
						{
							if (!HUD::DOES_BLIP_EXIST(Local_3434.f_5))
							{
								if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
								{
									if (func_88(&Local_3097))
									{
										iLocal_3758 = 1;
									}
								}
							}
						}
						else if (HUD::DOES_BLIP_EXIST(Local_3434.f_5))
						{
							if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
							{
								StringCopy(&Local_3097, "LOSE_WANTED", 16);
								iLocal_3758 = 0;
							}
						}
						if (HUD::DOES_BLIP_EXIST(Local_3434.f_5))
						{
							if (GlobalFunc_1976(func_196(0), func_196(1)))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_196(0), -824.81f, 185.38f, 69.95f, -820.61f, 179.79f, 73.64f, 8.5f, 0, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_196(1), -824.81f, 185.38f, 69.95f, -820.61f, 179.79f, 73.64f, 8.5f, 0, 1, 0))
								{
									if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
									{
										GlobalFunc_7139(&Local_3434, 0);
										GlobalFunc_4935();
										GlobalFunc_5105();
										iLocal_3736 = 1;
										SYSTEM::SETTIMERA(0);
										*iParam0++;
									}
								}
							}
							else if (ENTITY::IS_ENTITY_AT_COORD(func_196(0), -823.28f, 180.69f, 71.63f, 8f, 8f, 3f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_COORD(func_196(1), -823.28f, 180.69f, 71.63f, 8f, 8f, 3f, 0, 1, 0))
							{
								if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
								{
									if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
									{
										GlobalFunc_7139(&Local_3434, 0);
										GlobalFunc_4935();
										GlobalFunc_5105();
										iLocal_3736 = 1;
										SYSTEM::SETTIMERA(0);
										*iParam0++;
									}
								}
								else
								{
									GlobalFunc_7139(&Local_3434, 0);
									GlobalFunc_4935();
									GlobalFunc_5105();
									iLocal_3736 = 1;
									SYSTEM::SETTIMERA(0);
									*iParam0++;
								}
							}
						}
					}
				}
			}
			else
			{
				if (iLocal_3707 == 1)
				{
					GlobalFunc_7139(&Local_3434, 0);
					PED::SET_PED_CONFIG_FLAG(func_196(0), 32, 0);
					PED::SET_PED_CONFIG_FLAG(func_196(1), 32, 0);
					iLocal_3707 = 0;
				}
				if (iLocal_3757 == 0)
				{
					if (GlobalFunc_1976(func_196(0), func_196(1)))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
						{
							if (GlobalFunc_2234(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())) != -1)
							{
								if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
								{
									iLocal_3757 = 1;
								}
							}
						}
					}
				}
				if (iLocal_3756 == 0)
				{
					if (iLocal_3752 == 0)
					{
						if (((func_208(PLAYER::PLAYER_PED_ID(), Local_3925[0 /*18*/], 1, 1089470464) || func_208(PLAYER::PLAYER_PED_ID(), Local_3925[1 /*18*/], 1, 1089470464)) || func_208(PLAYER::PLAYER_PED_ID(), Local_3925[0 /*18*/], 1, 1089470464)) || func_208(PLAYER::PLAYER_PED_ID(), Local_3962[1 /*18*/], 1, 1089470464))
						{
							iLocal_3752 = 1;
						}
					}
					if ((func_88("FAM3_GCSGS") || func_88("FAM3_GCSGT")) || iLocal_3752 == 1)
					{
						iLocal_3756 = 1;
					}
				}
				if (!func_88("FAM3_LGOONS"))
				{
					if (func_88("FAM3_GCSFA") || func_88("FAM3_GCSFB"))
					{
						if (!GlobalFunc_5172(&Local_3434, 1))
						{
							func_264("FAM3_LGOONS", 7500, 1);
						}
					}
				}
				else if (iLocal_3756 == 1)
				{
					iLocal_3352 = 1;
					if (PED::IS_PED_IN_ANY_VEHICLE(func_196(0), 0))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_IN(func_196(0), 1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar0))
						{
							if ((!VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar0)) && !VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0))) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iVar0)))
							{
								iLocal_3352 = 0;
							}
						}
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(func_196(1), 0))
					{
						iVar1 = PED::GET_VEHICLE_PED_IS_IN(func_196(1), 1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar1))
						{
							if ((!VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar1)) && !VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar1))) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iVar1)))
							{
								iLocal_3352 = 0;
							}
						}
					}
					if (!func_88("FAM3_HSWITCH"))
					{
						if (iLocal_3352 == 1)
						{
							GlobalFunc_159("FAM3_HSWITCH", 12500);
							func_84("FAM3_HSWITCH", 1);
						}
					}
					else
					{
						if (GlobalFunc_74("FAM3_HSWITCH"))
						{
							if ((GlobalFunc_579() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) || iLocal_3354 == 1)
							{
								HUD::CLEAR_HELP(1);
							}
						}
						if (!func_88("FAM3_HPASS1"))
						{
							if (GlobalFunc_1976(func_196(0), func_196(1)))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
								{
									if (GlobalFunc_2234(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())) != -1)
									{
										if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
										{
											GlobalFunc_159("FAM3_HPASS1", 12500);
											func_84("FAM3_HPASS1", 1);
										}
									}
								}
							}
						}
						else if (!func_88("FAM3_HPASS2"))
						{
							if (GlobalFunc_1976(func_196(0), func_196(1)))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
								{
									if (GlobalFunc_2234(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())) != -1)
									{
										if (iLocal_3757 == 1)
										{
											if ((((((((WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_microsmg"), 0) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_sawnoffshotgun"), 0)) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_combatpistol"), 0)) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_appistol"), 0)) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stungun"), 0)) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_grenade"), 0)) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_smokegrenade"), 0)) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stickybomb"), 0)) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_molotov"), 0))
											{
												if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
												{
													GlobalFunc_159(GlobalFunc_1078(PAD::_IS_USING_KEYBOARD(0), "FAM3_HPASS3", "FAM3_HPASS2"), 12500);
													func_84("FAM3_HPASS2", 1);
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
			break;
		
		case 1:
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (bLocal_3771 == 0)
				{
					if (func_203(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
					{
						bLocal_3771 = true;
					}
				}
				if (GlobalFunc_530(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 2f, 1, 1056964608, 0, 1))
				{
					if ((!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() || !GlobalFunc_111()) || SYSTEM::TIMERA() > 5000)
					{
						func_201();
						TASK::CLEAR_SEQUENCE_TASK(&uVar2);
						TASK::OPEN_SEQUENCE_TASK(&uVar2);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, iLocal_3790, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -819.05f, 177.24f, 70.83f, 1f, 60000, 1048576000, 0, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(uVar2);
						TASK::TASK_PERFORM_SEQUENCE(func_196(0), uVar2);
						TASK::CLEAR_SEQUENCE_TASK(&uVar2);
						TASK::CLEAR_SEQUENCE_TASK(&uVar2);
						TASK::OPEN_SEQUENCE_TASK(&uVar2);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, iLocal_3791, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -819.05f, 177.24f, 70.83f, 1f, 60000, 1048576000, 0, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(uVar2);
						TASK::TASK_PERFORM_SEQUENCE(func_196(1), uVar2);
						TASK::CLEAR_SEQUENCE_TASK(&uVar2);
						iLocal_3798 = 1;
						*iParam0++;
					}
				}
			}
			else if ((!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() || !GlobalFunc_111()) || SYSTEM::TIMERA() > 5000)
			{
				*iParam0++;
			}
			break;
		
		case 2:
			if (!PED::IS_PED_IN_ANY_VEHICLE(func_196(0), 0) && !PED::IS_PED_IN_ANY_VEHICLE(func_196(1), 0))
			{
				if ((!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() || !GlobalFunc_111()) || SYSTEM::TIMERA() > 5000)
				{
					if (iLocal_3733 == 1)
					{
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(func_196(0), 0);
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(func_196(1), 0);
						AUDIO::STOP_AUDIO_SCENE("FAMILY_3_DRIVE_HOME");
						if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3698))
						{
							GRAPHICS::REMOVE_PARTICLE_FX(uLocal_3698, 0);
						}
						STREAMING::REMOVE_PTFX_ASSET();
						return 1;
					}
				}
			}
			else if (iLocal_3798 == 0)
			{
				func_201();
				if (PED::IS_PED_IN_ANY_VEHICLE(func_196(0), 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(func_196(0), 242628503) != 1)
					{
						TASK::CLEAR_SEQUENCE_TASK(&uVar3);
						TASK::OPEN_SEQUENCE_TASK(&uVar3);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, iLocal_3790, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -819.05f, 177.24f, 70.83f, 1f, 60000, 1048576000, 0, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(uVar3);
						TASK::TASK_PERFORM_SEQUENCE(func_196(0), uVar3);
						TASK::CLEAR_SEQUENCE_TASK(&uVar3);
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(func_196(0), 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(func_196(0), 242628503) != 1)
					{
						TASK::CLEAR_SEQUENCE_TASK(&uVar3);
						TASK::OPEN_SEQUENCE_TASK(&uVar3);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, iLocal_3791, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -819.05f, 177.24f, 70.83f, 1f, 60000, 1048576000, 0, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(uVar3);
						TASK::TASK_PERFORM_SEQUENCE(func_196(1), uVar3);
						TASK::CLEAR_SEQUENCE_TASK(&uVar3);
					}
				}
				iLocal_3798 = 1;
			}
			break;
	}
	return 0;
}

void func_201()//Position - 0x1333A
{
	int iVar0;
	
	iLocal_3790 = 0;
	iLocal_3791 = 250;
	if ((!PED::IS_PED_INJURED(func_196(0)) && !PED::IS_PED_INJURED(func_196(1))) && GlobalFunc_1976(func_196(0), func_196(1)))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(func_196(0));
		if (GlobalFunc_2522(func_196(0), iVar0) && GlobalFunc_2522(func_196(1), iVar0))
		{
			switch (GlobalFunc_2234(func_196(0), iVar0))
			{
				case -1:
					switch (GlobalFunc_2234(func_196(1), iVar0))
					{
						case 1:
							iLocal_3790 = 1250;
							iLocal_3791 = 0;
							break;
						
						default:
							iLocal_3790 = 0;
							iLocal_3791 = 250;
							break;
					}
					break;
				
				case 1:
					switch (GlobalFunc_2234(func_196(1), iVar0))
					{
						case -1:
							iLocal_3790 = 0;
							iLocal_3791 = 1250;
							break;
						
						default:
							iLocal_3790 = 0;
							iLocal_3791 = 250;
							break;
					}
					break;
				
				default:
					iLocal_3790 = 0;
					iLocal_3791 = 250;
					break;
				}
			}
	}
}


int func_203(int iParam0)//Position - 0x135B1
{
	struct<3> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(iParam0, 1) };
			if (Var0.f_1 < -1f)
			{
				return 1;
			}
		}
	}
	return 0;
}





int func_208(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x1368E
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (iParam2 == 1)
			{
				if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam1, 1), fParam3, iParam2))
				{
					return 1;
				}
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, iParam0, 0))
			{
				if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 2))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}









int func_217(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, char* sParam9, char* sParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14)//Position - 0x13A5B
{
	return func_218(uParam0, Param1, Param4, iParam7, iParam8, 0, 0, sParam9, sParam10, sParam10, sParam10, sParam10, bParam11, bParam12, bParam13, iParam14);
}

int func_218(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, var uParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, bool bParam16, bool bParam17, bool bParam18, int iParam19)//Position - 0x13A89
{
	return func_219(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 1, uParam8, iParam9, iParam10, 0, sParam11, sParam12, sParam13, sParam14, sParam15, GlobalFunc_648(), bParam16, bParam17, GlobalFunc_648(), 0, 0, bParam18, iParam19, 0, 0, 0, 1, 1065353216);
}

int func_219(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, int iParam13, int iParam14, var uParam15, int iParam16, int iParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, int iParam32, int iParam33, int iParam34, bool bParam35, float fParam36)//Position - 0x13AD6
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Var3 = { Param1 + Vector(1f, 0f, 0f) };
	uParam0->f_17[0] = uParam15;
	uParam0->f_17[1] = iParam16;
	uParam0->f_17[2] = iParam17;
	uParam0->f_16 = uParam15;
	GlobalFunc_647(uParam0);
	GlobalFunc_646(uParam0);
	GlobalFunc_502();
	if (GlobalFunc_7931(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, uParam0->f_8, bParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, bParam26))
	{
		GlobalFunc_635(sParam20);
		GlobalFunc_635(sParam21);
		GlobalFunc_635(sParam22);
		GlobalFunc_635(sParam23);
		if (CAM::IS_SCREEN_FADED_IN())
		{
			bVar1 = false;
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam18, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam18, 0))
				{
					MISC::SET_BIT(&(uParam0->f_13), 3);
					if (!MISC::IS_BIT_SET(uParam0->f_13, 9))
					{
						MISC::CLEAR_BIT(&(uParam0->f_13), 4);
					}
					if (MISC::IS_BIT_SET(uParam0->f_13, 23))
					{
						MISC::CLEAR_BIT(&(uParam0->f_13), 23);
					}
					MISC::SET_BIT(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (GlobalFunc_5146(uParam0, iParam29))
				{
					MISC::SET_BIT(&(uParam0->f_13), 3);
					if (!MISC::IS_BIT_SET(uParam0->f_13, 9))
					{
						MISC::CLEAR_BIT(&(uParam0->f_13), 4);
					}
					MISC::SET_BIT(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				GlobalFunc_635(sParam24);
				GlobalFunc_635(sParam27);
				GlobalFunc_635("MORE_SEATS");
				if (bParam26 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
					{
						HUD::REMOVE_BLIP(&(uParam0->f_5));
						GlobalFunc_635(sParam19);
					}
					if (HUD::DOES_BLIP_EXIST(*uParam0))
					{
						HUD::REMOVE_BLIP(uParam0);
					}
					if ((!GlobalFunc_5172(uParam0, 1) && !GlobalFunc_633(uParam0)) && !MISC::IS_BIT_SET(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							GlobalFunc_5145(uParam0, "LOSE_WANTED", 0);
							if (!PED::IS_PED_INJURED(uParam0->f_17[0]))
							{
								GlobalFunc_5130(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						MISC::SET_BIT(&(uParam0->f_13), 0);
						MISC::CLEAR_BIT(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (MISC::IS_BIT_SET(uParam0->f_13, 0))
					{
						GlobalFunc_635("LOSE_WANTED");
						MISC::CLEAR_BIT(&(uParam0->f_13), 0);
						MISC::SET_BIT(&(uParam0->f_13), 1);
					}
					if (MISC::IS_BIT_SET(uParam0->f_13, 1))
					{
						if (!GlobalFunc_5172(uParam0, 1))
						{
							if (!PED::IS_PED_INJURED(uParam0->f_17[0]))
							{
								GlobalFunc_5130(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							MISC::CLEAR_BIT(&(uParam0->f_13), 1);
						}
					}
					if (!HUD::DOES_BLIP_EXIST(uParam0->f_5))
					{
						if (HUD::DOES_BLIP_EXIST(*uParam0))
						{
							HUD::REMOVE_BLIP(uParam0);
						}
						uParam0->f_5 = GlobalFunc_5104(Var3, 0);
						if (!iParam31 == -1)
						{
							HUD::SET_BLIP_SPRITE(uParam0->f_5, iParam31);
						}
						if (bParam35)
						{
							GlobalFunc_714(uParam0->f_5, uParam0);
						}
					}
					else if (!GlobalFunc_537(Var3, HUD::GET_BLIP_COORDS(uParam0->f_5), 0.1f))
					{
						HUD::SET_BLIP_COORDS(uParam0->f_5, Var3);
						if (bParam35)
						{
							GlobalFunc_714(uParam0->f_5, uParam0);
						}
					}
					if (!GlobalFunc_5172(uParam0, 2))
					{
						if (!MISC::IS_BIT_SET(uParam0->f_13, 2))
						{
							GlobalFunc_5145(uParam0, sParam19, 0);
							MISC::SET_BIT(&(uParam0->f_13), 2);
						}
					}
					if (iParam14 == 4 || iParam14 == 5)
					{
						if (MISC::IS_BIT_SET(uParam0->f_13, 13))
						{
							iParam13 = 0;
						}
					}
					bVar1 = false;
					iVar6 = 0;
					iVar7 = 0;
					if ((iParam14 == 1 || iParam14 == 3) || iParam14 == 5)
					{
						iVar6 = 1;
					}
					if (iParam14 == 2 || iParam14 == 3)
					{
						iVar7 = 1;
					}
					else if (iParam14 == 4 || iParam14 == 5)
					{
						iVar7 = 2;
					}
					if (bParam28)
					{
						ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, Param4, iParam13, iVar6, iVar7);
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Param7, Param10, fParam36, 0, iVar6, iVar7))
						{
							bVar1 = true;
						}
					}
					else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, Param4, iParam13, iVar6, iVar7))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!PED::IS_PED_INJURED(uParam0->f_17[iVar2]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
									if (!PED::IS_PED_IN_VEHICLE(uParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam18 != 0)
								{
									if (!PED::IS_PED_IN_VEHICLE(uParam0->f_17[iVar2], iParam18, 0))
									{
										bVar1 = false;
									}
								}
								else if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar2], GlobalFunc_468()) || !GlobalFunc_5144(uParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (GlobalFunc_5143(uParam0))
							{
								GlobalFunc_635(sParam19);
								GlobalFunc_635(sParam24);
								GlobalFunc_635(sParam20);
								GlobalFunc_635(sParam21);
								GlobalFunc_635(sParam22);
								GlobalFunc_635(sParam23);
								GlobalFunc_635("LOSE_WANTED");
								GlobalFunc_635("MORE_SEATS");
								GlobalFunc_635(sParam27);
								GlobalFunc_5652(uParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam18))
			{
				if ((bParam26 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && (!MISC::IS_BIT_SET(uParam0->f_13, 9) && !MISC::IS_BIT_SET(uParam0->f_13, 22)))
				{
					GlobalFunc_635(sParam24);
					GlobalFunc_635(sParam27);
					if (HUD::DOES_BLIP_EXIST(uParam0->f_5) || HUD::DOES_BLIP_EXIST(*uParam0))
					{
						HUD::REMOVE_BLIP(&(uParam0->f_5));
						HUD::REMOVE_BLIP(uParam0);
						GlobalFunc_635(sParam19);
					}
					if ((!GlobalFunc_5172(uParam0, 1) && !GlobalFunc_633(uParam0)) && !MISC::IS_BIT_SET(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							GlobalFunc_5145(uParam0, "LOSE_WANTED", 0);
							if (!PED::IS_PED_INJURED(uParam0->f_17[0]))
							{
								GlobalFunc_5130(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						MISC::SET_BIT(&(uParam0->f_13), 0);
						MISC::CLEAR_BIT(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (MISC::IS_BIT_SET(uParam0->f_13, 0))
					{
						GlobalFunc_635("LOSE_WANTED");
						MISC::CLEAR_BIT(&(uParam0->f_13), 0);
						MISC::SET_BIT(&(uParam0->f_13), 1);
					}
					if (MISC::IS_BIT_SET(uParam0->f_13, 1))
					{
						if (!GlobalFunc_5172(uParam0, 1))
						{
							if (!PED::IS_PED_INJURED(uParam0->f_17[0]))
							{
								GlobalFunc_5130(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							MISC::CLEAR_BIT(&(uParam0->f_13), 1);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam18, 0))
					{
						if (!HUD::DOES_BLIP_EXIST(*uParam0))
						{
							if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
							{
								HUD::REMOVE_BLIP(&(uParam0->f_5));
								GlobalFunc_635(sParam19);
							}
							*uParam0 = GlobalFunc_6783(iParam18, 0, 0);
							HUD::SET_BLIP_DISPLAY(*uParam0, 2);
							if (!MISC::IS_BIT_SET(uParam0->f_13, 4))
							{
								GlobalFunc_714(*uParam0, uParam0);
							}
						}
						if (!GlobalFunc_5172(uParam0, 2))
						{
							if (!MISC::IS_BIT_SET(uParam0->f_13, 3))
							{
								GlobalFunc_5145(uParam0, sParam24, 0);
								MISC::SET_BIT(&(uParam0->f_13), 3);
								MISC::CLEAR_BIT(&(uParam0->f_13), 4);
							}
							else if (MISC::IS_BIT_SET(uParam0->f_13, 9))
							{
								if (!MISC::IS_STRING_NULL(sParam27))
								{
									if (!MISC::IS_BIT_SET(uParam0->f_13, 4))
									{
										GlobalFunc_5145(uParam0, sParam27, 0);
										MISC::SET_BIT(&(uParam0->f_13), 4);
									}
								}
								else if (!MISC::IS_BIT_SET(uParam0->f_13, 4))
								{
									GlobalFunc_5145(uParam0, sParam24, 0);
									MISC::SET_BIT(&(uParam0->f_13), 4);
								}
								if (!MISC::IS_BIT_SET(uParam0->f_13, 23))
								{
									if (!PED::IS_PED_INJURED(uParam0->f_17[0]))
									{
										GlobalFunc_5130(uParam0->f_17[0], "GET_IN_CAR", 3);
									}
									MISC::SET_BIT(&(uParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_5));
					GlobalFunc_635(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!GlobalFunc_5172(uParam0, 2))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (!MISC::IS_BIT_SET(uParam0->f_13, 13))
								{
									iVar8 = 0;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!PED::IS_PED_INJURED(uParam0->f_17[iVar2]))
										{
											iVar8++;
										}
										iVar2++;
									}
									iVar9 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar8);
									if (!PED::IS_PED_INJURED(uParam0->f_17[iVar9]))
									{
										GlobalFunc_5130(uParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									GlobalFunc_5145(uParam0, "MORE_SEATS", 0);
									MISC::SET_BIT(&(uParam0->f_13), 13);
								}
							}
							else if (!MISC::IS_BIT_SET(uParam0->f_13, 3))
							{
								GlobalFunc_5145(uParam0, sParam24, 0);
								MISC::SET_BIT(&(uParam0->f_13), 3);
								MISC::CLEAR_BIT(&(uParam0->f_13), 4);
							}
							else if (!MISC::IS_BIT_SET(uParam0->f_13, 4))
							{
								if (MISC::IS_BIT_SET(uParam0->f_13, 9))
								{
									GlobalFunc_5145(uParam0, sParam27, 0);
									MISC::SET_BIT(&(uParam0->f_13), 4);
								}
							}
						}
					}
					else if (!GlobalFunc_5172(uParam0, 2))
					{
						if (!MISC::IS_BIT_SET(uParam0->f_13, 3))
						{
							GlobalFunc_5145(uParam0, sParam24, 0);
							MISC::SET_BIT(&(uParam0->f_13), 3);
							MISC::CLEAR_BIT(&(uParam0->f_13), 4);
						}
						else if (MISC::IS_BIT_SET(uParam0->f_13, 9))
						{
							if (!MISC::IS_STRING_NULL(sParam27))
							{
								if (!MISC::IS_BIT_SET(uParam0->f_13, 4))
								{
									GlobalFunc_5145(uParam0, sParam27, 0);
									MISC::SET_BIT(&(uParam0->f_13), 4);
								}
							}
							else if (!MISC::IS_BIT_SET(uParam0->f_13, 4))
							{
								GlobalFunc_5145(uParam0, sParam24, 0);
								MISC::SET_BIT(&(uParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (MISC::IS_BIT_SET(uParam0->f_13, 0))
		{
			MISC::CLEAR_BIT(&(uParam0->f_13), 0);
		}
		GlobalFunc_635(sParam19);
		GlobalFunc_635(sParam24);
		GlobalFunc_635(sParam27);
		GlobalFunc_635(sParam24);
		GlobalFunc_635("LOSE_WANTED");
		if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_5));
		}
		if (HUD::DOES_BLIP_EXIST(*uParam0))
		{
			HUD::REMOVE_BLIP(uParam0);
		}
	}
	MISC::CLEAR_BIT(&(uParam0->f_13), 11);
	MISC::CLEAR_BIT(&(uParam0->f_13), 12);
	return 0;
}









































bool func_260(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, float fParam10, int iParam11, int iParam12, char* sParam13, char* sParam14, bool bParam15, bool bParam16, bool bParam17, int iParam18)//Position - 0x16279
{
	return func_219(uParam0, Param1, GlobalFunc_716(), Param4, Param7, iParam11, 1, iParam12, 0, 0, 0, sParam13, sParam14, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), bParam15, bParam16, GlobalFunc_648(), 1, 0, bParam17, iParam18, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), 1, fParam10);
}




void func_264(char* sParam0, int iParam1, bool bParam2)//Position - 0x1630B
{
	if (!func_88(sParam0))
	{
		GlobalFunc_2523(sParam0, iParam1, 1);
		func_84(sParam0, bParam2);
	}
}



void func_267(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x163EB
{
	float fVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	struct<3> Var8;
	float fVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2) && !ENTITY::IS_ENTITY_DEAD(iParam2))
		{
			iParam1->f_15 = GlobalFunc_156(iParam0, iParam2, 1);
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), Local_3051, 1);
			PED::SET_PED_RESET_FLAG(iParam0, 64, 1);
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0, 0);
			PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iParam0, 0);
			if (iParam4 == 1)
			{
				if (iLocal_3756 == 1)
				{
					if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, joaat("weapon_pistol")) < WEAPON::GET_MAX_AMMO_IN_CLIP(iParam0, joaat("weapon_pistol"), 1))
					{
						WEAPON::ADD_AMMO_TO_PED(iParam0, joaat("weapon_pistol"), WEAPON::GET_MAX_AMMO_IN_CLIP(iParam0, joaat("weapon_pistol"), 1));
					}
				}
			}
			switch (iParam1->f_16)
			{
				case 0:
					if (iParam1->f_13 == 0)
					{
						WEAPON::SET_PED_INFINITE_AMMO(iParam0, 0, 0);
						WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("weapon_pistol"), WEAPON::GET_MAX_AMMO_IN_CLIP(iParam0, joaat("weapon_pistol"), 1) * 6, 0, 1);
						WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_pistol"), 0);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 1);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 16);
						PED::SET_PED_SUFFERS_CRITICAL_HITS(iParam0, 0);
						GlobalFunc_2903(iParam0, 400);
						if (!PED::IS_PED_GROUP_MEMBER(iParam0, GlobalFunc_468()))
						{
							PED::SET_PED_AS_GROUP_MEMBER(iParam0, GlobalFunc_468());
							PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iParam0, 0);
							PED::SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(iParam0, GlobalFunc_468(), 1);
							PED::SET_PED_CONFIG_FLAG(iParam0, 268, 0);
						}
						PED::SET_PED_CONFIG_FLAG(iParam0, 188, 1);
						PED::SET_PED_CONFIG_FLAG(iParam0, 229, 1);
						PED::SET_PED_CONFIG_FLAG(iParam0, 174, 1);
						PED::SET_COMBAT_FLOAT(iParam0, 12, 1f);
						PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 54, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 46, 1);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam0, "FAMILY_3_BUDDY_GROUP", 0);
						iParam1->f_13 = 1;
					}
					func_275(iParam1, 13);
					break;
				
				case 13:
					if (iParam1->f_13 == 0)
					{
						if (!PED::IS_PED_GROUP_MEMBER(iParam0, GlobalFunc_468()))
						{
							PED::SET_PED_AS_GROUP_MEMBER(iParam0, GlobalFunc_468());
						}
						PED::SET_GROUP_SEPARATION_RANGE(GlobalFunc_468(), 50f);
						PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iParam0, 0);
						PED::SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(iParam0, GlobalFunc_468(), 1);
						PED::SET_PED_ACCURACY(iParam0, 20);
						PED::SET_PED_SHOOT_RATE(iParam0, 115);
						PED::SET_PED_HIGHLY_PERCEPTIVE(iParam0, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 0, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 2, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 1, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, 0);
						PED::SET_COMBAT_FLOAT(iParam0, 5, 0.9f);
						PED::SET_COMBAT_FLOAT(iParam0, 8, 0f);
						PED::SET_PED_COMBAT_MOVEMENT(iParam0, 1);
						PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(iParam0, iParam2, 0f, 0f, 0f, 5f, 0);
						PED::SET_PED_CAN_RAGDOLL(iParam0, 1);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 128);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 1);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 16);
						PED::SET_PED_SUFFERS_CRITICAL_HITS(iParam0, 0);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iParam0, 0);
						PED::SET_PED_CONFIG_FLAG(iParam0, 188, 1);
						PED::SET_PED_CONFIG_FLAG(iParam0, 268, 0);
						PED::SET_PED_CONFIG_FLAG(iParam0, 281, 1);
						PED::SET_PED_CONFIG_FLAG(iParam0, 174, 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 0);
						if (iLocal_3775 == 1)
						{
							PLAYER::SET_MAX_WANTED_LEVEL(5);
							PED::SET_CREATE_RANDOM_COPS(1);
							PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
							iLocal_3775 = 0;
						}
						iParam1->f_13 = 1;
					}
					if (iParam1->f_13 == 1)
					{
						if (iParam4 == 1)
						{
							if (iLocal_3756 == 0)
							{
								if (GlobalFunc_1461(iParam0, iParam3, 0))
								{
									if (GlobalFunc_2522(iParam0, iParam3))
									{
										if (Local_3880[0 /*22*/].f_12 == 1 || Local_3880[1 /*22*/].f_12 == 1)
										{
											func_275(iParam1, 6);
										}
									}
								}
							}
						}
						if (iParam1->f_15 > 50f || !PED::IS_PED_GROUP_MEMBER(*iParam1, GlobalFunc_468()))
						{
							func_275(iParam1, 14);
						}
					}
					if (iLocal_3774 == 0)
					{
						if (iLocal_3754 == 1 && iLocal_3753 == 0)
						{
							if ((PED::IS_PED_IN_COVER(iParam0, 0) || PED::IS_PED_GOING_INTO_COVER(iParam0)) || PED::IS_PED_IN_COMBAT(iParam0, 0))
							{
								TASK::CLEAR_PED_TASKS(iParam0);
							}
							iLocal_3774 = 1;
						}
					}
					break;
				
				case 14:
					if (iParam1->f_13 == 0)
					{
						PED::SET_PED_COMBAT_MOVEMENT(iParam0, 1);
						PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(iParam0, iParam2, 0f, 0f, 0f, 7.5f, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 0);
						iParam1->f_13 = 1;
					}
					if (iParam1->f_13 == 1)
					{
						if (iParam1->f_15 <= (50f / 3f))
						{
							func_275(iParam1, 13);
						}
					}
					break;
				
				case 4:
					if (iParam1->f_13 == 0)
					{
						if (GlobalFunc_2522(iParam0, iParam3))
						{
							TASK::CLEAR_PED_TASKS(iParam0);
							TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iParam0, iParam3, ENTITY::GET_ENTITY_COORDS(iParam3, 1), 5, 2.5f, 786469, 5f, 5f, 1);
						}
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
						iParam1->f_13 = 1;
					}
					if (GlobalFunc_2522(iParam2, iParam3))
					{
						if (iParam4 == 1)
						{
							func_275(iParam1, 10);
						}
						else
						{
							func_275(iParam1, 12);
						}
					}
					else
					{
						TASK::CLEAR_PED_TASKS(iParam0);
						func_275(iParam1, 13);
					}
					break;
				
				case 6:
					if (iParam1->f_13 == 0)
					{
						if (!func_273(iParam0))
						{
							if (GlobalFunc_2522(iParam0, iParam3))
							{
								STREAMING::REQUEST_ANIM_DICT("missfam3");
								if (STREAMING::HAS_ANIM_DICT_LOADED("missfam3"))
								{
									func_272(iParam0, GlobalFunc_2234(iParam0, iParam3), 6000, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
								}
							}
						}
						else
						{
							iParam1->f_7 = MISC::GET_GAME_TIMER();
							iParam1->f_13 = 1;
						}
					}
					if (func_273(iParam0))
					{
						if (GlobalFunc_2521(2000, iParam1->f_7))
						{
							if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
							{
								TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
							}
							iVar1 = func_271(iParam0, 100f, joaat("baller"));
							if (ENTITY::DOES_ENTITY_EXIST(iParam3) && ENTITY::DOES_ENTITY_EXIST(iVar1))
							{
								Var5 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iVar1) };
								Var2 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) };
								fVar11 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var2.x, Var2.f_1, Var5.x, Var5.f_1);
								Var8 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar1, ENTITY::GET_ENTITY_COORDS(iParam0, 0)) };
								if (Var8.f_1 < 0f || fVar11 > 100f)
								{
									TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
								}
							}
						}
					}
					if (iLocal_3756 == 1)
					{
						TASK::CLEAR_PED_TASKS(iParam0);
						TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
						STREAMING::REMOVE_ANIM_DICT("missfam3");
						func_275(iParam1, 13);
					}
					break;
				
				case 10:
					if (iParam1->f_13 == 0)
					{
						func_270(&Local_3925, &iVar12);
						func_270(&Local_3962, &iVar13);
						if (iVar12 != -1 && iVar13 != -1)
						{
							if (Local_3925[iVar12 /*18*/].f_15 <= Local_3962[iVar13 /*18*/].f_15)
							{
								iVar14 = Local_3925[iVar12 /*18*/];
							}
							else
							{
								iVar14 = Local_3962[iVar13 /*18*/];
							}
						}
						else if (iVar12 != -1)
						{
							iVar14 = Local_3925[iVar12 /*18*/];
						}
						else if (iVar13 != -1)
						{
							iVar14 = Local_3962[iVar13 /*18*/];
						}
						if (!ENTITY::IS_ENTITY_AT_COORD(iParam0, -804.86f, 166.51f, 70.56f, 36f, 24f, 12f, 0, 1, 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iVar14))
							{
								TASK::CLEAR_PED_TASKS(iParam0);
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iParam0, iParam3, ENTITY::GET_ENTITY_COORDS(iVar14, 0), 8, 25f, 1074266172, 500f, 10f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
								iParam1->f_7 = MISC::GET_GAME_TIMER();
							}
							else
							{
								TASK::CLEAR_PED_TASKS(iParam0);
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iParam0, iParam3, ENTITY::GET_ENTITY_COORDS(iParam3, 1), 8, 26f, 1074266172, 500f, 10f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
								iParam1->f_7 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							TASK::CLEAR_PED_TASKS(iParam0);
							func_275(iParam1, 7);
						}
						iParam1->f_13 = 1;
					}
					if (iParam4 == 0)
					{
						if (iLocal_3767 == 0)
						{
							func_275(iParam1, 10);
							iLocal_3767 = 1;
						}
						if (iLocal_3766 == 0)
						{
							iLocal_3766 = MISC::GET_GAME_TIMER();
						}
						if (((iLocal_3766 != 0 && GlobalFunc_2521(12500, iLocal_3766)) || func_88("FAM3_GCEM")) || func_88("FAM3_GCEF"))
						{
							func_275(iParam1, 12);
						}
					}
					else
					{
						switch (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1273030092))
						{
							case 1:
								if (GlobalFunc_2521(5000, iParam1->f_7))
								{
									func_275(iParam1, 10);
								}
								break;
							
							case 7:
								func_275(iParam1, 10);
								break;
							}
					}
					if (!GlobalFunc_1461(iParam2, iParam3, 0))
					{
						func_275(iParam1, 4);
					}
					if (GlobalFunc_1461(iParam0, iParam3, 0) && GlobalFunc_1461(iParam2, iParam3, 0))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam0, -804.86f, 166.51f, 70.56f, 36f, 24f, 12f, 0, 1, 0))
						{
							TASK::CLEAR_PED_TASKS(iParam0);
							func_275(iParam1, 7);
						}
					}
					break;
				
				case 11:
					if (iParam1->f_13 == 0)
					{
						TASK::CLEAR_PED_TASKS(iParam0);
						iVar15 = GlobalFunc_2524(iParam0, joaat("COP"), 0, 0, 28);
						if (ENTITY::DOES_ENTITY_EXIST(iVar15))
						{
							TASK::TASK_VEHICLE_MISSION_PED_TARGET(iParam0, iParam3, iVar15, 8, 30f, 1074266172, 400f, 100f, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
							iParam1->f_7 = MISC::GET_GAME_TIMER();
						}
						else
						{
							TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iParam0, iParam3, ENTITY::GET_ENTITY_COORDS(iParam3, 1), 8, 25f, 1074266172, 400f, 100f, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
							iParam1->f_7 = MISC::GET_GAME_TIMER();
						}
						iParam1->f_13 = 1;
					}
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
						{
							func_275(iParam1, 12);
						}
						else
						{
							switch (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1273030092))
							{
								case 1:
									if (GlobalFunc_2521(5000, iParam1->f_7))
									{
										func_275(iParam1, 11);
									}
									break;
								
								case 7:
									func_275(iParam1, 11);
									break;
								}
							}
					}
					if (!GlobalFunc_1461(iParam2, iParam3, 0))
					{
						func_275(iParam1, 4);
					}
					break;
				
				case 12:
					if (iParam1->f_13 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iParam3))
						{
							func_268(ENTITY::GET_ENTITY_COORDS(iParam3, 1));
							PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(fLocal_3778, fLocal_3779, fLocal_3780, fLocal_3781);
							if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fLocal_3778, fLocal_3779, fLocal_3780, fLocal_3781))
							{
								TASK::CLEAR_PED_TASKS(iParam0);
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iParam0, iParam3, Local_3051, 4, 20f, 1074266251, 1f, 2f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
								iParam1->f_13 = 1;
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iParam3))
					{
						func_268(ENTITY::GET_ENTITY_COORDS(iParam3, 1));
						PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(fLocal_3778, fLocal_3779, fLocal_3780, fLocal_3781);
					}
					if (iParam4 == 1)
					{
						if (fVar0 < 125f)
						{
							func_275(iParam1, 10);
						}
					}
					if (GlobalFunc_2522(iParam0, iParam3))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam3, -847.36f, 159.09f, 66.32f, 8f, 3.5f, 3f, 0, 1, 0))
						{
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(iParam0, 10f);
							if (iLocal_3775 == 0)
							{
								if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
								{
									if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
									{
										PLAYER::SET_MAX_WANTED_LEVEL(0);
										PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
										PED::SET_CREATE_RANDOM_COPS(0);
										iLocal_3775 = 1;
									}
								}
							}
						}
					}
					if (!GlobalFunc_1461(iParam2, iParam3, 0))
					{
						func_275(iParam1, 4);
					}
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
						{
							func_275(iParam1, 11);
						}
					}
					break;
				
				case 2:
					if (iParam1->f_13 == 0)
					{
						if (!PED::IS_PED_GROUP_MEMBER(iParam0, GlobalFunc_468()))
						{
							PED::SET_PED_AS_GROUP_MEMBER(iParam0, GlobalFunc_468());
							PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iParam0, 0);
							PED::SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(iParam0, GlobalFunc_468(), 1);
							PED::SET_PED_CONFIG_FLAG(iParam0, 268, 1);
						}
						TASK::TASK_ENTER_VEHICLE(iParam0, iParam3, 20000, -2, 2f, 1, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
						iParam1->f_13 = 1;
					}
					if (GlobalFunc_2522(iParam0, iParam3))
					{
						func_275(iParam1, 13);
					}
					break;
				
				case 7:
					if (iParam1->f_13 == 0)
					{
						TASK::CLEAR_PED_TASKS(iParam0);
						if (PED::IS_PED_GROUP_MEMBER(iParam0, GlobalFunc_468()))
						{
							PED::REMOVE_PED_FROM_GROUP(iParam0);
						}
						PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 1, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, 1);
						PED::SET_COMBAT_FLOAT(iParam0, 5, 0.9f);
						PED::SET_COMBAT_FLOAT(iParam0, 8, 0f);
						PED::SET_PED_COMBAT_MOVEMENT(iParam0, 1);
						PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(iParam0, iParam2, 0f, 0f, 0f, 5f, 0);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iParam0, 250f, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 0);
						iParam1->f_13 = 1;
					}
					if (iParam4 == 0)
					{
						TASK::CLEAR_PED_TASKS(iParam0);
						func_275(iParam1, 13);
					}
					if (!PED::IS_PED_IN_ANY_VEHICLE(iParam2, 0))
					{
						func_275(iParam1, 13);
					}
					break;
				
				case 15:
					if (iParam1->f_13 == 0)
					{
						if (iLocal_3775 == 1)
						{
							PLAYER::SET_MAX_WANTED_LEVEL(5);
							PED::SET_CREATE_RANDOM_COPS(1);
							PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
							iLocal_3775 = 0;
						}
						iParam1->f_13 = 1;
					}
					if (GlobalFunc_1461(iParam0, iParam3, 0))
					{
						if (GlobalFunc_2522(iParam0, iParam3))
						{
							switch (GlobalFunc_2234(iParam0, iParam3))
							{
								case -1:
									if (iParam4 == 1)
									{
										func_275(iParam1, 10);
									}
									else
									{
										func_275(iParam1, 12);
									}
									break;
								
								default:
									func_275(iParam1, 13);
									break;
								}
						}
					}
					else
					{
						func_275(iParam1, 13);
					}
					break;
				}
			}
	}
}

void func_268(struct<2> Param0, Vector3 vParam2)//Position - 0x16FAF
{
	if (Param0 < Local_3051.x)
	{
		fLocal_3778 = (Param0 - 25f);
		fLocal_3780 = (Local_3051.x + 25f);
	}
	else if (Param0 > Local_3051.x)
	{
		fLocal_3778 = (Local_3051.x - 25f);
		fLocal_3780 = (Param0 + 25f);
	}
	if (Param0.f_1 < Local_3051.f_1)
	{
		fLocal_3779 = (Param0.f_1 - 25f);
		fLocal_3781 = (Local_3051.f_1 + 25f);
	}
	else if (Param0.f_1 > Local_3051.f_1)
	{
		fLocal_3779 = (Local_3051.f_1 - 25f);
		fLocal_3781 = (Param0.f_1 + 25f);
	}
}


int func_270(var uParam0, var uParam1)//Position - 0x17154
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = 0;
	iVar1 = -1;
	fVar2 = 0f;
	fVar3 = 500f;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0 /*18*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD((*uParam0)[iVar0 /*18*/]))
			{
				fVar2 = (uParam0[iVar0 /*18*/])->f_15;
				if (fVar2 < fVar3)
				{
					fVar3 = fVar2;
					iVar1 = iVar0;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 == -1)
	{
		*uParam1 = iVar1;
		return 0;
	}
	*uParam1 = iVar1;
	return (*uParam0)[iVar1 /*18*/];
}

var func_271(int iParam0, float fParam1, int iParam2)//Position - 0x171D4
{
	var uVar0;
	struct<3> Var1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
		uVar0 = VEHICLE::GET_CLOSEST_VEHICLE(Var1, fParam1, iParam2, 2146);
	}
	return uVar0;
}

void func_272(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x17203
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	var uVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			switch (iParam1)
			{
				case -1:
				case 1:
					sVar0 = "incar_lookbehind_enter_driver";
					sVar1 = "incar_lookbehind_idle_driver";
					sVar2 = "incar_lookbehind_exit_driver";
					break;
				
				case 0:
				case 2:
					sVar0 = "incar_lookbehind_enter_passenger";
					sVar1 = "incar_lookbehind_idle_passenger";
					sVar2 = "incar_lookbehind_exit_passenger";
					break;
			}
			TASK::CLEAR_SEQUENCE_TASK(&uVar3);
			TASK::OPEN_SEQUENCE_TASK(&uVar3);
			TASK::TASK_PLAY_ANIM(0, "missfam3", sVar0, 4f, -8f, -1, 16 | iParam3, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "missfam3", sVar1, 8f, -8f, iParam2, 16 | iParam3 | 1, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "missfam3", sVar2, 8f, -4f, -1, 16 | iParam3, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uVar3);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar3);
			TASK::CLEAR_SEQUENCE_TASK(&uVar3);
		}
	}
}

int func_273(int iParam0)//Position - 0x172E3
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (((((ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "missfam3", "incar_lookbehind_enter_driver", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "missfam3", "incar_lookbehind_idle_driver", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "missfam3", "incar_lookbehind_exit_driver", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "missfam3", "incar_lookbehind_enter_passenger", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "missfam3", "incar_lookbehind_idle_passenger", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "missfam3", "incar_lookbehind_exit_passenger", 3))
			{
				return 1;
			}
		}
	}
	return 0;
}


void func_275(int iParam0, int iParam1)//Position - 0x173C2
{
	iParam0->f_13 = 0;
	iParam0->f_16 = iParam1;
}



void func_278(char* sParam0)//Position - 0x1749D
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (!func_88(sParam0))
		{
			if (GlobalFunc_663(sParam0, 0, 0))
			{
				func_84(sParam0, 1);
			}
		}
		else if (!GlobalFunc_663(sParam0, 0, 0))
		{
			StringCopy(sParam0, "", 16);
		}
	}
}

void func_279(int iParam0)//Position - 0x174E1
{
	int iVar0;
	struct<6> Var1;
	struct<6> Var7;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	
	if (iLocal_3707 == 1)
	{
		if (HUD::DOES_BLIP_EXIST(Local_3434.f_5))
		{
			if (GlobalFunc_111())
			{
				if (GlobalFunc_620())
				{
					GlobalFunc_619(0);
				}
			}
		}
		else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			if (iLocal_3722 == 0)
			{
				if (GlobalFunc_111())
				{
					Local_3716 = { GlobalFunc_560() };
					Local_3710 = { GlobalFunc_514() };
					GlobalFunc_4956();
				}
				if (!GlobalFunc_5172(&Local_3434, 1))
				{
					if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_WNTD2", 7, 0, 0, 0))
					{
						iLocal_3722 = 1;
					}
				}
			}
		}
		else if (iLocal_3735 == 0)
		{
			if (GlobalFunc_111())
			{
				if (!GlobalFunc_620())
				{
					GlobalFunc_619(1);
				}
			}
		}
	}
	switch (*iParam0)
	{
		case 0:
			if (GlobalFunc_111())
			{
				Var7 = { GlobalFunc_2209() };
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var7))
				{
					if (MISC::ARE_STRINGS_EQUAL(&Var7, "FAM3_DOWN_10") || MISC::ARE_STRINGS_EQUAL(&Var7, "FAM3_DOWNA_17"))
					{
						GlobalFunc_4935();
						GlobalFunc_5105();
						GlobalFunc_619(0);
					}
				}
			}
			else
			{
				iLocal_3707 = 1;
				SYSTEM::SETTIMERA(0);
				*iParam0++;
			}
			break;
		
		case 1:
			if (HUD::DOES_BLIP_EXIST(Local_3434.f_5))
			{
				if (SYSTEM::TIMERA() > 6000)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(Local_3106))
					{
						if (GlobalFunc_10664(&uLocal_3471, 25, "FAM3AUD", "FAM3_TCPC", 7, 0, 0, 1))
						{
							RECORDING::_0x293220DA1B46CEBC(3f, 10f, 4);
							func_84("FAM3_TCPC", 1);
							iLocal_3704 = 0;
							iLocal_3735 = 1;
							*iParam0++;
						}
					}
				}
			}
			break;
		
		case 2:
			if (func_88("FAM3_TCPC"))
			{
				if (!GlobalFunc_5672("FAM3_TCPC"))
				{
					*iParam0++;
				}
				if (GlobalFunc_781())
				{
					iLocal_3704 = 1;
				}
			}
			break;
		
		case 3:
			if (!func_88("FAM3_MAD"))
			{
				if (!GlobalFunc_111())
				{
					if (iLocal_3704 == 0)
					{
						if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_MAD", 7, 0, 0, 0))
						{
							RECORDING::_0x293220DA1B46CEBC(4f, 10f, 4);
							func_84("FAM3_MAD", 1);
						}
					}
					else
					{
						iLocal_3709 = 1;
						iLocal_3707 = 1;
						*iParam0++;
					}
				}
			}
			else if (!GlobalFunc_5672("FAM3_MAD"))
			{
				iLocal_3709 = 1;
				iLocal_3707 = 1;
				*iParam0++;
			}
			else
			{
				if (!GlobalFunc_620())
				{
					if (HUD::DOES_BLIP_EXIST(Local_3434.f_1[0]))
					{
						GlobalFunc_619(1);
					}
				}
				else if (!HUD::DOES_BLIP_EXIST(Local_3434.f_1[0]))
				{
					GlobalFunc_619(0);
				}
				if (iLocal_3753 == 1)
				{
					*iParam0++;
				}
			}
			break;
		
		case 4:
			if (iLocal_3753 == 0)
			{
				if (iLocal_3754 == 1)
				{
					if (!func_88("FAM3_GCEK") && !func_88("FAM3_GCEL"))
					{
						iVar0 = 0;
						while (iVar0 <= 1)
						{
							if (Local_3925[iVar0 /*18*/].f_14 == 0)
							{
								if (Local_3925[iVar0 /*18*/].f_17 != 0)
								{
									switch (Local_3925[iVar0 /*18*/].f_17)
									{
										case 2:
										case 3:
										case 5:
										case 6:
										case 4:
											if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_GCEK", 7, 0, 0, 0))
											{
												Local_3925[iVar0 /*18*/].f_14 = 1;
												func_84("FAM3_GCEK", 1);
											}
											break;
										
										case 1:
											if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_GCEL", 7, 0, 0, 0))
											{
												Local_3925[iVar0 /*18*/].f_14 = 1;
												func_84("FAM3_GCEL", 1);
											}
											break;
										}
									}
							}
							if (Local_3962[iVar0 /*18*/].f_14 == 0)
							{
								if (Local_3962[iVar0 /*18*/].f_17 != 0)
								{
									switch (Local_3962[iVar0 /*18*/].f_17)
									{
										case 2:
										case 3:
										case 5:
										case 6:
										case 4:
											if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_GCEK", 7, 0, 0, 0))
											{
												Local_3962[iVar0 /*18*/].f_14 = 1;
												func_84("FAM3_GCEK", 1);
											}
											break;
										
										case 1:
											if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_GCEL", 7, 0, 0, 0))
											{
												Local_3962[iVar0 /*18*/].f_14 = 1;
												func_84("FAM3_GCEL", 1);
											}
											break;
										}
									}
							}
							iVar0++;
						}
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_3434, 0))
							{
								if (((Local_3925[0 /*18*/].f_14 == 1 && Local_3925[1 /*18*/].f_14 == 1) && Local_3962[0 /*18*/].f_14 == 1) && Local_3962[1 /*18*/].f_14 == 1)
								{
									if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_GCEL", 7, 0, 0, 0))
									{
										func_84("FAM3_GCEL", 1);
									}
								}
							}
						}
					}
					else
					{
						if (!func_88("FAM3_GCEM") && !func_88("FAM3_GCEH"))
						{
							if (HUD::DOES_BLIP_EXIST(Local_3434.f_5))
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_3434, 1))
									{
										if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -768.7635f, 167.9453f, 58.47437f, -848.0483f, 171.8887f, 77.93412f, 50f, 0, 1, 0))
										{
											if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_GCEH", 7, 0, 0, 0))
											{
												func_84("FAM3_GCEH", 1);
											}
										}
										else if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_GCEM", 7, 0, 0, 0))
										{
											func_84("FAM3_GCEM", 1);
										}
									}
								}
							}
						}
						if (!func_88("FAM3_STATA") && !func_88("FAM3_STATB"))
						{
							if (HUD::DOES_BLIP_EXIST(Local_3434.f_5))
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_3434, 1))
									{
										if ((iLocal_3762 + iLocal_3764) > 0)
										{
											if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_STATA", 7, 0, 0, 0))
											{
												iLocal_3735 = 0;
												func_84("FAM3_STATA", 1);
												iLocal_3735 = 1;
												iLocal_3722 = 0;
											}
										}
										else if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_STATB", 7, 0, 0, 0))
										{
											iLocal_3735 = 0;
											func_84("FAM3_STATB", 1);
											iLocal_3735 = 1;
											iLocal_3722 = 0;
										}
									}
								}
							}
						}
						else if (!GlobalFunc_5672("FAM3_STATA") && !GlobalFunc_5672("FAM3_STATB"))
						{
							iLocal_3737 = 1;
						}
						if (!func_88("FAM3_DBHA"))
						{
							if (HUD::DOES_BLIP_EXIST(Local_3434.f_5))
							{
								if (GlobalFunc_1976(func_196(0), func_196(1)))
								{
									if (!GlobalFunc_5172(&Local_3434, 1))
									{
										if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_DBHA", 7, 0, 0, 0))
										{
											iLocal_3735 = 1;
											iLocal_3722 = 0;
											func_84("FAM3_DBHA", 1);
										}
									}
								}
							}
						}
						else if (iLocal_3722 == 1)
						{
							if (HUD::DOES_BLIP_EXIST(Local_3434.f_5))
							{
								if (MISC::ARE_STRINGS_EQUAL(&Local_3716, "FAM3_DBHA"))
								{
									if (!GlobalFunc_111())
									{
										if (GlobalFunc_10626(&uLocal_3471, "FAM3AUD", "FAM3_DBHA", &Local_3710, 7, 0, 0))
										{
											iLocal_3735 = 1;
											iLocal_3722 = 0;
										}
									}
								}
							}
						}
						else if (GlobalFunc_111())
						{
							Var1 = { GlobalFunc_560() };
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
							{
								if (MISC::ARE_STRINGS_EQUAL(&Var1, "FAM3_DBHA"))
								{
									if (Local_3106.f_15 > (50f / 2f))
									{
										GlobalFunc_5105();
									}
								}
							}
						}
						if (!func_88("FAM3_DBHB"))
						{
							if (HUD::DOES_BLIP_EXIST(Local_3434.f_5))
							{
								if (GlobalFunc_1976(func_196(0), func_196(1)))
								{
									if (!GlobalFunc_5172(&Local_3434, 1))
									{
										if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_DBHB", 7, 0, 0, 0))
										{
											iLocal_3735 = 1;
											iLocal_3722 = 0;
											func_84("FAM3_DBHB", 1);
										}
									}
								}
							}
						}
						else if (iLocal_3722 == 1)
						{
							if (HUD::DOES_BLIP_EXIST(Local_3434.f_5))
							{
								if (MISC::ARE_STRINGS_EQUAL(&Local_3716, "FAM3_DBHB"))
								{
									if (!GlobalFunc_111())
									{
										if (GlobalFunc_10626(&uLocal_3471, "FAM3AUD", "FAM3_DBHB", &Local_3710, 7, 0, 0))
										{
											iLocal_3735 = 1;
											iLocal_3722 = 0;
										}
									}
								}
							}
						}
						else if (GlobalFunc_111())
						{
							Var1 = { GlobalFunc_560() };
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
							{
								if (MISC::ARE_STRINGS_EQUAL(&Var1, "FAM3_DBHB"))
								{
									if (Local_3106.f_15 > (50f / 2f))
									{
										GlobalFunc_5105();
									}
								}
							}
						}
					}
				}
				else if (!func_88("FAM3_DBHC"))
				{
					if (HUD::DOES_BLIP_EXIST(Local_3434.f_5))
					{
						if (func_88(&Local_3081) || MISC::IS_STRING_NULL_OR_EMPTY(&Local_3081))
						{
							if (GlobalFunc_1976(func_196(0), func_196(1)))
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_3434, 0))
									{
										if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_DBHC", 7, 0, 0, 0))
										{
											func_84("FAM3_DBHC", 1);
										}
									}
								}
							}
						}
					}
				}
				else if (GlobalFunc_111())
				{
					Var1 = { GlobalFunc_560() };
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
					{
						if (MISC::ARE_STRINGS_EQUAL(&Var1, "FAM3_DBHC"))
						{
							if (Local_3106.f_15 > (50f / 2f))
							{
								GlobalFunc_5105();
							}
						}
					}
				}
			}
			else
			{
				if (!func_88("FAM3_GCFSG"))
				{
					if (((Local_3880[0 /*22*/].f_12 == 1 || Local_3880[1 /*22*/].f_12 == 1) || (ENTITY::DOES_ENTITY_EXIST(func_270(&Local_3925, &iVar13)) && Local_3925[iVar13 /*18*/].f_15 < 10f)) || (ENTITY::DOES_ENTITY_EXIST(func_270(&Local_3962, &iVar14)) && Local_3962[iVar14 /*18*/].f_15 < 10f))
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_GCFSG", 7, 0, 0, 0))
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE(func_196(1), 0))
								{
									iVar15 = func_271(func_196(1), 100f, joaat("baller"));
									if (ENTITY::DOES_ENTITY_EXIST(iVar15))
									{
										if (!ENTITY::IS_ENTITY_DEAD(iVar15))
										{
											TASK::OPEN_SEQUENCE_TASK(&uVar16);
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iVar15, 0);
											TASK::TASK_LOOK_AT_ENTITY(0, iVar15, 3000, 0, 2);
											TASK::CLOSE_SEQUENCE_TASK(uVar16);
											TASK::TASK_PERFORM_SEQUENCE(func_196(1), uVar16);
											TASK::CLEAR_SEQUENCE_TASK(&uVar16);
										}
									}
								}
								RECORDING::_0x293220DA1B46CEBC(3f, 3f, 3);
								func_84("FAM3_GCFSG", 1);
							}
						}
						else
						{
							GlobalFunc_5105();
						}
					}
				}
				else if (!func_88("FAM3_GCSM"))
				{
					if (!GlobalFunc_111())
					{
						if (!GlobalFunc_5172(&Local_3434, 1))
						{
							if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_GCSM", 7, 0, 0, 0))
							{
								func_84("FAM3_GCSM", 1);
							}
						}
					}
				}
				else
				{
					if (!func_88("FAM3_GCSFA") && !func_88("FAM3_GCSFB"))
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_3434, 1))
							{
								if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(func_196(0)) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(func_196(1)))
								{
									if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_GCSFA", 7, 0, 0, 0))
									{
										iLocal_3765 = MISC::GET_GAME_TIMER();
										func_84("FAM3_GCSFA", 1);
									}
								}
								else if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_GCSFB", 7, 0, 0, 0))
								{
									iLocal_3765 = MISC::GET_GAME_TIMER();
									func_84("FAM3_GCSFB", 1);
								}
							}
						}
					}
					if (!func_88("FAM3_GCSGS") && !func_88("FAM3_GCSPS"))
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_3434, 1))
							{
								if (iLocal_3752 == 1)
								{
									if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_GCSPS", 7, 0, 0, 0))
									{
										func_84("FAM3_GCSPS", 1);
									}
								}
								if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(func_196(0), 0), 7.5f, 0) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(func_196(1), 0), 7.5f, 0))
								{
									if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_GCSGS", 7, 0, 0, 0))
									{
										func_84("FAM3_GCSGS", 1);
									}
								}
								if (GlobalFunc_2521(12500, iLocal_3765))
								{
									if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_GCSGS", 7, 0, 0, 0))
									{
										func_84("FAM3_GCSGS", 1);
									}
								}
							}
							else if (GlobalFunc_663("FAM3_LGOONS", 0, 0))
							{
								if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(func_196(0), 0), 7.5f, 0) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(func_196(1), 0), 7.5f, 0))
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(func_196(0)))
									{
										GlobalFunc_5653(func_196(0), "FAM3_DDAA", "MICHAEL", 6);
										func_84("FAM3_GCSGS", 1);
									}
								}
							}
						}
					}
					else if (iLocal_3742 == 0)
					{
						Local_3124.f_9 = MISC::GET_GAME_TIMER();
						Local_3106.f_9 = MISC::GET_GAME_TIMER();
						iLocal_3765 = MISC::GET_GAME_TIMER();
						iLocal_3742 = 1;
					}
				}
				iVar0 = 0;
				while (iVar0 <= 1)
				{
					if (Local_3925[iVar0 /*18*/].f_14 == 0)
					{
						if (Local_3925[iVar0 /*18*/].f_17 != 0)
						{
							if (!GlobalFunc_111() && !GlobalFunc_5172(&Local_3434, 1))
							{
								switch (Local_3925[iVar0 /*18*/].f_17)
								{
									case 1:
										break;
									
									case 2:
									case 5:
										if (!func_88("FAM3_GCMKG_2"))
										{
											if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_GCMKG", 7, 0, 0, 0))
											{
												iLocal_3801++;
												Local_3925[iVar0 /*18*/].f_14 = 1;
												Local_3124.f_9 = MISC::GET_GAME_TIMER();
												Local_3106.f_9 = MISC::GET_GAME_TIMER();
												if (iLocal_3801 >= 2)
												{
													func_84("FAM3_GCMKG_2", 1);
												}
											}
										}
										else
										{
											Local_3925[iVar0 /*18*/].f_14 = 1;
											Local_3124.f_9 = MISC::GET_GAME_TIMER();
											Local_3106.f_9 = MISC::GET_GAME_TIMER();
										}
										break;
									
									case 3:
									case 6:
										if (!func_88("FAM3_GCFKG_3"))
										{
											if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_GCFKG", 7, 0, 0, 0))
											{
												iLocal_3802++;
												Local_3925[iVar0 /*18*/].f_14 = 1;
												Local_3124.f_9 = MISC::GET_GAME_TIMER();
												Local_3106.f_9 = MISC::GET_GAME_TIMER();
												if (iLocal_3802 >= 3)
												{
													func_84("FAM3_GCFKG_3", 1);
												}
											}
										}
										else
										{
											Local_3925[iVar0 /*18*/].f_14 = 1;
											Local_3124.f_9 = MISC::GET_GAME_TIMER();
											Local_3106.f_9 = MISC::GET_GAME_TIMER();
										}
										break;
								}
							}
							else if (Local_3925[iVar0 /*18*/].f_9 == 0)
							{
								Local_3925[iVar0 /*18*/].f_9 = MISC::GET_GAME_TIMER();
							}
							else if (GlobalFunc_2521(3000, Local_3925[iVar0 /*18*/].f_9))
							{
								Local_3925[iVar0 /*18*/].f_14 = 1;
							}
						}
					}
					if (Local_3962[iVar0 /*18*/].f_14 == 0)
					{
						if (Local_3962[iVar0 /*18*/].f_17 != 0)
						{
							if (!GlobalFunc_111() && !GlobalFunc_5172(&Local_3434, 1))
							{
								switch (Local_3962[iVar0 /*18*/].f_17)
								{
									case 1:
										break;
									
									case 2:
									case 5:
										if (!func_88("FAM3_GCMKG_2"))
										{
											if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_GCMKG", 7, 0, 0, 0))
											{
												iLocal_3801++;
												Local_3962[iVar0 /*18*/].f_14 = 1;
												Local_3124.f_9 = MISC::GET_GAME_TIMER();
												Local_3106.f_9 = MISC::GET_GAME_TIMER();
												if (iLocal_3801 >= 2)
												{
													func_84("FAM3_GCMKG_2", 1);
												}
											}
										}
										else
										{
											Local_3962[iVar0 /*18*/].f_14 = 1;
											Local_3124.f_9 = MISC::GET_GAME_TIMER();
											Local_3106.f_9 = MISC::GET_GAME_TIMER();
										}
										break;
									
									case 3:
									case 6:
										if (!func_88("FAM3_GCFKG_3"))
										{
											if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_GCFKG", 7, 0, 0, 0))
											{
												iLocal_3802++;
												Local_3962[iVar0 /*18*/].f_14 = 1;
												Local_3124.f_9 = MISC::GET_GAME_TIMER();
												Local_3106.f_9 = MISC::GET_GAME_TIMER();
												if (iLocal_3802 >= 3)
												{
													func_84("FAM3_GCFKG_3", 1);
												}
											}
										}
										else
										{
											Local_3962[iVar0 /*18*/].f_14 = 1;
											Local_3124.f_9 = MISC::GET_GAME_TIMER();
											Local_3106.f_9 = MISC::GET_GAME_TIMER();
										}
										break;
								}
							}
							else if (Local_3962[iVar0 /*18*/].f_9 == 0)
							{
								Local_3962[iVar0 /*18*/].f_9 = MISC::GET_GAME_TIMER();
							}
							else if (GlobalFunc_2521(3000, Local_3962[iVar0 /*18*/].f_9))
							{
								Local_3962[iVar0 /*18*/].f_14 = 1;
							}
						}
					}
					iVar0++;
				}
				if (iLocal_3742 == 1)
				{
					if (GlobalFunc_2521(10000, Local_3124.f_9))
					{
						if (GlobalFunc_1976(func_196(0), func_196(1)))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_3434, 1))
								{
									if (GlobalFunc_2522(func_196(0), PED::GET_VEHICLE_PED_IS_USING(func_196(0))))
									{
										if (GlobalFunc_2234(func_196(0), PED::GET_VEHICLE_PED_IS_USING(func_196(0))) == -1)
										{
											if (func_280(&Local_3925, &Local_3962) < 30f)
											{
												if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_GCMEF", 7, 0, 0, 0))
												{
													Local_3124.f_9 = MISC::GET_GAME_TIMER();
												}
											}
											else if (Local_3124.f_10 < 4)
											{
												if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_GCMAF", 7, 0, 0, 0))
												{
													Local_3124.f_9 = MISC::GET_GAME_TIMER();
													Local_3124.f_10++;
												}
											}
											else
											{
												Local_3124.f_9 = MISC::GET_GAME_TIMER();
											}
										}
										else
										{
											switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
											{
												case 0:
													if (func_280(&Local_3925, &Local_3962) < 20f)
													{
														if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_GCMAG", 7, 0, 0, 0))
														{
															Local_3124.f_9 = MISC::GET_GAME_TIMER();
														}
													}
													break;
												
												case 1:
													if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_GCMDF", 7, 0, 0, 0))
													{
														Local_3124.f_9 = MISC::GET_GAME_TIMER();
													}
													break;
												}
											}
										}
									}
							}
						}
						else if (!PED::IS_PED_IN_ANY_VEHICLE(func_196(0), 0) && !PED::IS_PED_IN_ANY_VEHICLE(func_196(1), 0))
						{
							if (Local_3106.f_15 < 50f)
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_3434, 1))
									{
										switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
										{
											case 0:
												if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_GCMAG", 7, 0, 0, 0))
												{
													Local_3124.f_9 = MISC::GET_GAME_TIMER();
												}
												break;
											
											case 1:
												if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_GCMEF", 7, 0, 0, 0))
												{
													Local_3124.f_9 = MISC::GET_GAME_TIMER();
												}
												break;
											}
										}
								}
							}
							else
							{
								Local_3124.f_9 = MISC::GET_GAME_TIMER();
							}
						}
					}
					if (GlobalFunc_2521(8000, Local_3106.f_9))
					{
						if (GlobalFunc_1976(func_196(0), func_196(1)))
						{
							if (GlobalFunc_2522(func_196(1), PED::GET_VEHICLE_PED_IS_USING(func_196(1))))
							{
								if (GlobalFunc_2234(func_196(1), PED::GET_VEHICLE_PED_IS_USING(func_196(1))) == -1)
								{
									if (func_280(&Local_3925, &Local_3962) < 30f)
									{
										if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_GCFEM", 7, 0, 0, 0))
										{
											Local_3106.f_9 = MISC::GET_GAME_TIMER();
										}
									}
									else if (Local_3106.f_10 < 4)
									{
										if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_GCFAM", 7, 0, 0, 0))
										{
											Local_3106.f_9 = MISC::GET_GAME_TIMER();
											Local_3106.f_10++;
										}
									}
									else
									{
										Local_3106.f_9 = MISC::GET_GAME_TIMER();
									}
								}
								else
								{
									switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
									{
										case 0:
											if (func_280(&Local_3925, &Local_3962) < 20f)
											{
												if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_GCFAG", 7, 0, 0, 0))
												{
													Local_3106.f_9 = MISC::GET_GAME_TIMER();
												}
											}
											break;
										
										case 1:
											if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_GCFDF", 7, 0, 0, 0))
											{
												Local_3106.f_9 = MISC::GET_GAME_TIMER();
											}
											break;
										}
									}
							}
						}
						else if (!PED::IS_PED_IN_ANY_VEHICLE(func_196(0), 0) && !PED::IS_PED_IN_ANY_VEHICLE(func_196(1), 0))
						{
							if (Local_3106.f_15 < 50f)
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_3434, 1))
									{
										switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
										{
											case 0:
												if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_GCFAG", 7, 0, 0, 0))
												{
													Local_3106.f_9 = MISC::GET_GAME_TIMER();
												}
												break;
											
											case 1:
												if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_GCFEM", 7, 0, 0, 0))
												{
													Local_3106.f_9 = MISC::GET_GAME_TIMER();
												}
												break;
											}
										}
								}
							}
							else
							{
								Local_3106.f_9 = MISC::GET_GAME_TIMER();
							}
						}
					}
					if (!PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && !(GlobalFunc_2522(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())) && GlobalFunc_2234(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())) == -1))
					{
						if (GlobalFunc_2521(10000, iLocal_3765))
						{
							if (Local_3106.f_15 < 50f)
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_3434, 1))
									{
										switch (GlobalFunc_8315())
										{
											case 0:
												if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_GCMNS", 7, 0, 0, 0))
												{
													Local_3124.f_9 = MISC::GET_GAME_TIMER();
													Local_3106.f_9 = MISC::GET_GAME_TIMER();
													iLocal_3765 = MISC::GET_GAME_TIMER();
												}
												break;
											
											case 1:
												if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_GCFNS", 7, 0, 0, 0))
												{
													Local_3124.f_9 = MISC::GET_GAME_TIMER();
													Local_3106.f_9 = MISC::GET_GAME_TIMER();
													iLocal_3765 = MISC::GET_GAME_TIMER();
												}
												break;
											}
										}
								}
							}
							else
							{
								iLocal_3765 = MISC::GET_GAME_TIMER();
							}
						}
					}
					else
					{
						iLocal_3765 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
	}
	if (!func_88("FAM3_GCCVTM") && !func_88("FAM3_GCCVTF"))
	{
		if (iLocal_3702 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())) && PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) != Local_3200)
			{
				iLocal_3702 = MISC::GET_GAME_TIMER();
			}
		}
		else if (GlobalFunc_2521(7500, iLocal_3702))
		{
			func_84("FAM3_GCCVTM", 1);
			func_84("FAM3_GCCVTF", 1);
		}
		else if (!GlobalFunc_111())
		{
			if (!GlobalFunc_5172(&Local_3434, 1))
			{
				if (Local_3106.f_15 <= (50f / 2f))
				{
					if (iLocal_3736 == 0)
					{
						switch (GlobalFunc_8315())
						{
							case 0:
								if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_GCCVTM", 7, 0, 0, 0))
								{
									func_84("FAM3_GCCVTM", 1);
								}
								break;
							
							case 1:
								if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_GCCVTF", 7, 0, 0, 0))
								{
									func_84("FAM3_GCCVTF", 1);
								}
								break;
							}
						}
					}
				}
			}
	}
}

float func_280(var uParam0, var uParam1)//Position - 0x18974
{
	int iVar0;
	int iVar1;
	
	func_270(uParam0, &iVar0);
	func_270(uParam1, &iVar1);
	if (iVar0 != -1 && iVar1 != -1)
	{
		if ((uParam0[iVar0 /*18*/])->f_15 <= (uParam1[iVar1 /*18*/])->f_15)
		{
			return (uParam0[iVar0 /*18*/])->f_15;
		}
		else
		{
			return (uParam1[iVar1 /*18*/])->f_15;
		}
	}
	else if (iVar0 != -1)
	{
		return (uParam0[iVar0 /*18*/])->f_15;
	}
	else if (iVar1 != -1)
	{
		return (uParam1[iVar1 /*18*/])->f_15;
	}
	return -1f;
}











void func_291(int iParam0)//Position - 0x18C0B
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	int iVar14;
	
	if (iLocal_3751 == 0)
	{
		if ((((((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1184.89f, 709.6f, 132.38f, -1133.41f, 679.84f, 161.1f, 36f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1062.28f, 662.22f, 125.02f, -1138.02f, 681.84f, 161.37f, 36f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1065.68f, 661.26f, 121.1f, -976.84f, 641.13f, 153.91f, 36f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -894.49f, 655.77f, 113.47f, -985.13f, 640.53f, 154.35f, 36f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -898.85f, 657.44f, 113.6f, -823.46f, 645.49f, 144.01f, 36f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -770.93f, 551.06f, 101.91f, -827.24f, 649.55f, 144.36f, 36f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -770.974f, 557.36f, 102.67f, -700.16f, 501.75f, 124.6f, 36f, 0, 1, 0))
		{
			if (iLocal_3701 == 0)
			{
				if (iLocal_3709 == 1)
				{
					iLocal_3701 = MISC::GET_GAME_TIMER();
				}
			}
			else if (GlobalFunc_2521(10000, iLocal_3701))
			{
				iLocal_3751 = 1;
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_3051, 1) < 100f)
			{
				iLocal_3751 = 1;
			}
		}
	}
	switch (*iParam0)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("baller"));
			STREAMING::REQUEST_MODEL(joaat("g_m_y_pologoon_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("baller")) && STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_pologoon_01")))
			{
				Local_3873[0 /*3*/] = { -2.15f, -3f, 0f };
				Local_3873[1 /*3*/] = { 2.15f, 3f, 0f };
				*iParam0++;
			}
			break;
		
		case 1:
			if (iLocal_3751 == 1)
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -857.8738f, 220.1788f, 73.88277f, 20f, 28f, 8f, 0, 1, 0))
				{
					if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(Var0, &Var3, 0, 1077936128, 0))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, 1) < 7f)
						{
							if (func_342(PLAYER::PLAYER_PED_ID(), &Local_3744, &fLocal_3743, 18, GlobalFunc_512(PAD::IS_CONTROL_PRESSED(0, 26), 10f, 100f), GlobalFunc_512(PAD::IS_CONTROL_PRESSED(0, 26), 60f, 180f), 0))
							{
								if (!CAM::IS_SPHERE_VISIBLE(Local_3744, 3f))
								{
									fVar8 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
									fVar7 = MISC::ABSF((fVar8 - fLocal_3743));
									if (fVar7 > 180f)
									{
										fVar7 = MISC::ABSF((fVar7 - 360f));
									}
									if (fVar7 < 90f)
									{
										fVar9 = fLocal_3743;
									}
									else
									{
										fVar9 = (fLocal_3743 + 180f);
									}
									iVar6 = 0;
									while (iVar6 < Local_3880)
									{
										Local_3880[iVar6 /*22*/].f_6 = joaat("baller");
										Local_3880[iVar6 /*22*/].f_2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_3744, fLocal_3743, Local_3873[iVar6 /*3*/]) };
										Local_3880[iVar6 /*22*/].f_5 = fVar9;
										Local_3880[iVar6 /*22*/].f_12 = 0;
										MISC::CLEAR_AREA_OF_VEHICLES(Local_3880[iVar6 /*22*/].f_2, 3f, 0, 0, 0, 0, 0);
										iVar6++;
									}
									*iParam0++;
								}
							}
						}
					}
				}
				else if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(Var0, &Var3, 0, 1077936128, 0))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, 1) < 5f)
					{
						if (func_342(PLAYER::PLAYER_PED_ID(), &Local_3744, &fLocal_3743, 18, GlobalFunc_512(PAD::IS_CONTROL_PRESSED(0, 26), 15f, 125f), GlobalFunc_512(PAD::IS_CONTROL_PRESSED(0, 26), 60f, 180f), 0))
						{
							if (!CAM::IS_SPHERE_VISIBLE(Local_3744, 3f))
							{
								fVar12 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
								fVar11 = MISC::ABSF((fVar12 - fLocal_3743));
								if (fVar11 > 180f)
								{
									fVar11 = MISC::ABSF((fVar11 - 360f));
								}
								if (fVar11 < 90f)
								{
									fVar13 = fLocal_3743;
								}
								else
								{
									fVar13 = (fLocal_3743 + 180f);
								}
								iVar10 = 0;
								while (iVar10 < Local_3880)
								{
									Local_3880[iVar10 /*22*/].f_6 = joaat("baller");
									Local_3880[iVar10 /*22*/].f_2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_3744, fLocal_3743, Local_3873[iVar10 /*3*/]) };
									Local_3880[iVar10 /*22*/].f_5 = fVar13;
									Local_3880[iVar10 /*22*/].f_12 = 0;
									MISC::CLEAR_AREA_OF_VEHICLES(Local_3880[iVar10 /*22*/].f_2, 3f, 0, 0, 0, 0, 0);
									iVar10++;
								}
								*iParam0++;
							}
						}
					}
				}
			}
			break;
		
		case 2:
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
			if (func_322(&(Local_3880[0 /*22*/]), 0, 0, 145, 0, -1, 0, 0, 3, 0) && func_322(&(Local_3880[1 /*22*/]), 0, 0, 145, 0, -1, 0, 0, 3, 0))
			{
				Local_3925[0 /*18*/] = func_321(Local_3880[0 /*22*/], joaat("g_m_y_pologoon_01"), -1, 200, joaat("weapon_pistol"));
				Local_3925[1 /*18*/] = func_321(Local_3880[0 /*22*/], joaat("g_m_y_pologoon_01"), 0, 200, joaat("weapon_pistol"));
				Local_3962[0 /*18*/] = func_321(Local_3880[1 /*22*/], joaat("g_m_y_pologoon_01"), -1, 200, joaat("weapon_pistol"));
				Local_3962[1 /*18*/] = func_321(Local_3880[1 /*22*/], joaat("g_m_y_pologoon_01"), 0, 200, joaat("weapon_pistol"));
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3880[0 /*22*/], 0))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_3880[0 /*22*/], 1000);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_3880[0 /*22*/], 1000f);
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_3880[0 /*22*/], 1000f);
					VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_3880[0 /*22*/]);
					VEHICLE::ADD_VEHICLE_STUCK_CHECK_WITH_WARP(Local_3880[0 /*22*/], 10f, 1000, 0, 0, 0, -1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3880[0 /*22*/]);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_3880[0 /*22*/], 5f);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_3880[0 /*22*/], "FAMILY_3_ENEMY_CARS_GROUP", 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3880[1 /*22*/], 0))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_3880[1 /*22*/], 1000);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_3880[1 /*22*/], 1000f);
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_3880[1 /*22*/], 1000f);
					VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_3880[1 /*22*/]);
					VEHICLE::ADD_VEHICLE_STUCK_CHECK_WITH_WARP(Local_3880[1 /*22*/], 10f, 1000, 0, 0, 0, -1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3880[1 /*22*/]);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_3880[1 /*22*/], 5f);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_3880[1 /*22*/], "FAMILY_3_ENEMY_CARS_GROUP", 0);
				}
				Local_3925[0 /*18*/].f_9 = 0;
				Local_3925[1 /*18*/].f_9 = 0;
				Local_3962[0 /*18*/].f_9 = 0;
				Local_3962[1 /*18*/].f_9 = 0;
				func_275(&(Local_3925[0 /*18*/]), 0);
				func_275(&(Local_3925[1 /*18*/]), 0);
				func_275(&(Local_3962[0 /*18*/]), 0);
				func_275(&(Local_3962[1 /*18*/]), 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("baller"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_pologoon_01"));
				GlobalFunc_593(Local_3925[0 /*18*/], 0);
				GlobalFunc_593(Local_3925[1 /*18*/], 0);
				GlobalFunc_593(Local_3962[0 /*18*/], 0);
				GlobalFunc_593(Local_3962[1 /*18*/], 0);
				GlobalFunc_574(221, 0);
				Local_3880[0 /*22*/].f_14 = { -2.15f, -3f, 0f };
				Local_3880[1 /*22*/].f_14 = { 2.15f, 3f, 0f };
				Local_3880[0 /*22*/].f_21 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_3880[0 /*22*/], 1), 1);
				Local_3880[1 /*22*/].f_21 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_3880[1 /*22*/], 1), 1);
				GlobalFunc_2525(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &(Local_3880[0 /*22*/].f_17), &(Local_3880[0 /*22*/].f_20));
				GlobalFunc_2525(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &(Local_3880[1 /*22*/].f_17), &(Local_3880[1 /*22*/].f_20));
				AUDIO::TRIGGER_MUSIC_EVENT("FAM3_MEX_CHASE");
				WEAPON::ADD_AMMO_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), WEAPON::GET_MAX_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 1) * 2);
				iLocal_3753 = 1;
				iLocal_3759 = MISC::GET_GAME_TIMER();
				bLocal_3760 = false;
				*iParam0++;
			}
			break;
		
		case 3:
			if (bLocal_3760 == 0)
			{
				if (GlobalFunc_2521(10000, iLocal_3759))
				{
					bLocal_3760 = true;
				}
			}
			func_316(&Local_3925, &(Local_3880[0 /*22*/]));
			func_316(&Local_3962, &(Local_3880[1 /*22*/]));
			func_312(&Local_3925, &(Local_3880[0 /*22*/]), 300f, GlobalFunc_512(bLocal_3760, 150f, 200f));
			func_312(&Local_3962, &(Local_3880[1 /*22*/]), 300f, GlobalFunc_512(bLocal_3760, 150f, 200f));
			func_309(&(Local_3925[0 /*18*/]), &(Local_3880[0 /*22*/]), PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &iLocal_3755);
			func_309(&(Local_3925[1 /*18*/]), &(Local_3880[0 /*22*/]), PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &iLocal_3755);
			func_309(&(Local_3962[0 /*18*/]), &(Local_3880[1 /*22*/]), PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &iLocal_3755);
			func_309(&(Local_3962[1 /*18*/]), &(Local_3880[1 /*22*/]), PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &iLocal_3755);
			if (Local_3880[0 /*22*/].f_12 == 0 && Local_3880[1 /*22*/].f_12 == 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_3880[0 /*22*/]))
				{
					Local_3880[0 /*22*/].f_12 = ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_3880[0 /*22*/], func_196(1), 17);
					Local_3880[0 /*22*/].f_12 = ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_3880[0 /*22*/], func_196(0), 17);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_3880[1 /*22*/]))
				{
					Local_3880[1 /*22*/].f_12 = ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_3880[1 /*22*/], func_196(1), 17);
					Local_3880[1 /*22*/].f_12 = ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_3880[1 /*22*/], func_196(0), 17);
				}
			}
			iVar14 = 0;
			while (iVar14 <= 1)
			{
				func_308(Local_3880[iVar14 /*22*/], 200);
				func_307(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), Local_3880[iVar14 /*22*/]);
				func_302(Local_3880[iVar14 /*22*/], PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &(Local_3880[iVar14 /*22*/].f_2), &(Local_3880[iVar14 /*22*/].f_5), &(Local_3880[iVar14 /*22*/].f_17), &(Local_3880[iVar14 /*22*/].f_20), &(Local_3880[iVar14 /*22*/].f_13), Local_3880[iVar14 /*22*/].f_14, 3500, 45f, &(Local_3880[iVar14 /*22*/].f_21));
				iVar14++;
			}
			if (((((!ENTITY::DOES_ENTITY_EXIST(Local_3880[0 /*22*/]) && !ENTITY::DOES_ENTITY_EXIST(Local_3880[1 /*22*/])) && !ENTITY::DOES_ENTITY_EXIST(Local_3925[0 /*18*/])) && !ENTITY::DOES_ENTITY_EXIST(Local_3925[1 /*18*/])) && !ENTITY::DOES_ENTITY_EXIST(Local_3962[0 /*18*/])) && !ENTITY::DOES_ENTITY_EXIST(Local_3962[1 /*18*/]))
			{
				GlobalFunc_571(0, -1);
				iLocal_3754 = 1;
				iLocal_3753 = 0;
				iLocal_3707 = 1;
				PLAYER::SET_MAX_WANTED_LEVEL(5);
				PED::SET_CREATE_RANDOM_COPS(1);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				GlobalFunc_695(1);
				GlobalFunc_9132(0);
				GlobalFunc_699();
				STREAMING::REMOVE_ANIM_DICT("missfam3");
				AUDIO::TRIGGER_MUSIC_EVENT("FAM3_MEX_LOST");
				*iParam0++;
			}
			break;
	}
}











void func_302(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<3> Param7, int iParam10, float fParam11, var uParam12)//Position - 0x19BF2
{
	int iVar0;
	struct<3> Var1;
	
	func_305(&Local_3848, &uLocal_3839);
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (((((((((ENTITY::DOES_ENTITY_EXIST(iParam1) && iParam0 != iParam1) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam1))) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam1)) && !VEHICLE::IS_VEHICLE_STOPPED(iParam1)) && GlobalFunc_2905(iParam0)) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1), 1) > *uParam12)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, 1), *uParam4, 1) > 20f)
			{
				*uParam2 = { *uParam4 };
				*uParam3 = *uParam5;
				*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam2, *uParam3, Param7) };
				GlobalFunc_2525(iParam1, uParam4, uParam5);
			}
			if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				*uParam6 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - *uParam6) > iParam10)
			{
				if (GlobalFunc_156(iParam0, iParam1, 1) > fParam11 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, 1), *uParam2, 1) > 25f)
				{
					if (!GlobalFunc_105(*uParam2))
					{
						if (!CAM::IS_SPHERE_VISIBLE(*uParam2, 3f))
						{
							MISC::CLEAR_AREA_OF_PEDS(*uParam2, 1.5f, 0);
							MISC::CLEAR_AREA_OF_VEHICLES(*uParam2, 3f, 0, 0, 0, 0, 0);
							ENTITY::SET_ENTITY_COORDS(iParam0, *uParam2, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iParam0, *uParam3);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, 10f);
							VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, 1, 1);
							*uParam6 = MISC::GET_GAME_TIMER();
							*uParam12 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1), 1);
							iLocal_3808 = MISC::GET_GAME_TIMER() + 1000;
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < Local_3848.x)
							{
								Var1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_3848[iVar0 /*3*/], uLocal_3839[iVar0], Param7) };
								if (!GlobalFunc_105(Var1))
								{
									if (!CAM::IS_SPHERE_VISIBLE(Var1, 2f))
									{
										MISC::CLEAR_AREA_OF_PEDS(Var1, 1.5f, 0);
										MISC::CLEAR_AREA_OF_VEHICLES(Var1, 3f, 0, 0, 0, 0, 0);
										ENTITY::SET_ENTITY_COORDS(iParam0, Var1, 1, 0, 0, 1);
										ENTITY::SET_ENTITY_HEADING(iParam0, uLocal_3839[iVar0]);
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0);
										VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, 10f);
										VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, 1, 1);
										*uParam6 = MISC::GET_GAME_TIMER();
										*uParam12 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1), 1);
										return;
										iLocal_3808 = MISC::GET_GAME_TIMER() + 1000;
									}
								}
								iVar0++;
							}
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = MISC::GET_GAME_TIMER();
		}
	}
}



void func_305(var uParam0, var uParam1)//Position - 0x19F08
{
	int iVar0;
	
	if (GlobalFunc_105(*(uParam0[0 /*3*/])))
	{
		GlobalFunc_2525(PLAYER::PLAYER_PED_ID(), uParam0[0 /*3*/], uParam1[0]);
	}
	else
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), *(uParam0[0 /*3*/]), 1) > 30f)
		{
			func_306(uParam0, uParam1);
		}
		iVar0 = 0;
		while (iVar0 <= (*uParam0 - 1))
		{
			iVar0++;
		}
	}
}

void func_306(var uParam0, var uParam1)//Position - 0x19F6F
{
	int iVar0;
	
	iVar0 = (*uParam0 - 1);
	while (iVar0 >= 1)
	{
		*(uParam0[iVar0 /*3*/]) = { *(uParam0[(iVar0 - 1) /*3*/]) };
		(*uParam1)[iVar0] = (*uParam1)[(iVar0 - 1)];
		iVar0 = (iVar0 + -1);
	}
	GlobalFunc_2525(PLAYER::PLAYER_PED_ID(), uParam0[0 /*3*/], uParam1[0]);
}

void func_307(int iParam0, int iParam1)//Position - 0x19FBF
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iParam1))
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_3703) > 0)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam1, iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, -1f, -1.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, -6f, 3f), 4f, 0, 1, 0))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY3_REAR_END_MASTER", iParam0, 0, 0, 0);
								}
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
								iLocal_3703 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 5000));
							}
						}
					}
				}
			}
		}
	}
}

void func_308(int iParam0, int iParam1)//Position - 0x1A06D
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (ENTITY::GET_ENTITY_HEALTH(iParam0) < iParam1)
			{
				ENTITY::SET_ENTITY_HEALTH(iParam0, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 0f);
			}
		}
	}
}

void func_309(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1A0A1
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!PED::IS_PED_INJURED(*iParam0) && !PED::IS_PED_INJURED(iParam2))
	{
		iParam0->f_15 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*iParam0, 1), ENTITY::GET_ENTITY_COORDS(iParam2, 1), 1);
		if (*iParam4 == 0)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, iParam2, 1))
			{
				if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(*iParam0, 0, 2))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*iParam0);
					*iParam4 = 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam1, iParam2, 1))
					{
						if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(*iParam1, 0, 2))
						{
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*iParam1);
							*iParam4 = 1;
						}
					}
				}
			}
			if (iParam0->f_8 != 0)
			{
				if (GlobalFunc_2521(10000, iParam0->f_8))
				{
					*iParam4 = 1;
				}
			}
		}
		if (iParam0->f_16 != 7)
		{
			if (PED::IS_PED_FLEEING(*iParam0) || PED::IS_PED_BEING_JACKED(*iParam0))
			{
				func_275(iParam0, 7);
			}
		}
		switch (iParam0->f_16)
		{
			case 0:
				func_275(iParam0, 9);
				break;
			
			case 7:
				if (iParam0->f_13 == 0)
				{
					PED::SET_PED_COMBAT_RANGE(*iParam0, 0);
					PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 2);
					PED::SET_PED_COMBAT_ABILITY(*iParam0, 2);
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 42, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 50, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 13, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 1, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 3, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 21, 1);
					PED::SET_COMBAT_FLOAT(*iParam0, 8, 0.1f);
					PED::SET_PED_ACCURACY(*iParam0, 6);
					PED::SET_PED_SHOOT_RATE(*iParam0, 125);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam0, 200f, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
					iParam0->f_13 = 1;
				}
				if (func_311(iParam2, iParam3))
				{
					if (iParam0->f_15 > 20f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
						{
							if (((((VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, 0) && ENTITY::GET_ENTITY_HEALTH(*iParam1) > 0) && VEHICLE::GET_VEHICLE_ENGINE_HEALTH(*iParam1) > 0f) && !VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(*iParam1)) && !GlobalFunc_2226(iParam1)) && !ENTITY::IS_ENTITY_UPSIDEDOWN(*iParam1))
							{
								if (!PED::IS_PED_IN_VEHICLE(*iParam0, *iParam1, 0))
								{
									if (VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam1, -1) || VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam1, 0))
									{
										func_275(iParam0, 2);
									}
								}
								else if (PED::IS_PED_SITTING_IN_VEHICLE(*iParam0, *iParam1))
								{
									if (*iParam4 == 1)
									{
										func_275(iParam0, 9);
									}
									else
									{
										func_275(iParam0, 8);
									}
								}
							}
						}
					}
				}
				break;
			
			case 8:
				if (iParam0->f_13 == 0)
				{
					if (GlobalFunc_1533(*iParam0, *iParam1, -1))
					{
						if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam1, 0))
						{
							iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam1, 0);
							if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
							{
								PED::SET_PED_CONFIG_FLAG(*iParam0, 115, 1);
							}
							else
							{
								PED::SET_PED_CONFIG_FLAG(*iParam0, 115, 0);
							}
						}
						else
						{
							PED::SET_PED_CONFIG_FLAG(*iParam0, 115, 0);
						}
					}
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 3, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 1, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 2, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam0, 200f, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
					iParam0->f_8 = MISC::GET_GAME_TIMER();
					iParam0->f_13 = 1;
				}
				PED::SET_PED_RESET_FLAG(*iParam0, 128, 1);
				if (*iParam4 == 1)
				{
					func_275(iParam0, 9);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, 0))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(*iParam0, *iParam1))
					{
						if (iParam0->f_15 < 17.5f)
						{
							if (!func_311(iParam2, iParam3))
							{
								func_275(iParam0, 7);
							}
						}
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam1, -1))
						{
							func_275(iParam0, 5);
						}
					}
				}
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, 0))
				{
					func_275(iParam0, 7);
				}
				else if (VEHICLE::IS_VEHICLE_STOPPED(*iParam1))
				{
					if ((VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(*iParam1) || ENTITY::IS_ENTITY_UPSIDEDOWN(*iParam1)) || !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(*iParam1))
					{
						if (PED::IS_PED_IN_VEHICLE(*iParam0, *iParam1, 0))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(*iParam0, 0, 256);
						}
						func_275(iParam0, 7);
					}
				}
				break;
			
			case 9:
				if (iParam0->f_13 == 0)
				{
					if (GlobalFunc_1533(*iParam0, *iParam1, -1))
					{
						if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam1, 0))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam1, 0);
							if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1))
							{
								PED::SET_PED_CONFIG_FLAG(*iParam0, 115, 1);
							}
							else
							{
								PED::SET_PED_CONFIG_FLAG(*iParam0, 115, 0);
							}
						}
						else
						{
							PED::SET_PED_CONFIG_FLAG(*iParam0, 115, 0);
						}
					}
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 3, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 1, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 2, 1);
					PED::SET_PED_ACCURACY(*iParam0, 3);
					PED::SET_PED_SHOOT_RATE(*iParam0, 80);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam0, 200f, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
					iParam0->f_13 = 1;
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, 0))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(*iParam0, *iParam1))
					{
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam1, -1))
						{
							func_275(iParam0, 5);
						}
						if (iParam0->f_15 < 17.5f)
						{
							if (!func_311(iParam2, iParam3))
							{
								func_275(iParam0, 7);
							}
						}
					}
				}
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, 0))
				{
					func_275(iParam0, 7);
				}
				else if (VEHICLE::IS_VEHICLE_STOPPED(*iParam1))
				{
					if ((VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(*iParam1) || ENTITY::IS_ENTITY_UPSIDEDOWN(*iParam1)) || !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(*iParam1))
					{
						if (PED::IS_PED_IN_VEHICLE(*iParam0, *iParam1, 0))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(*iParam0, 0, 256);
						}
						func_275(iParam0, 7);
					}
				}
				break;
			
			case 5:
				if (iParam0->f_13 == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, 0))
					{
						TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(*iParam0, *iParam1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 1);
					}
					iParam0->f_13 = 1;
				}
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, 0))
				{
					func_275(iParam0, 7);
				}
				else if (PED::IS_PED_SITTING_IN_VEHICLE(*iParam0, *iParam1))
				{
					if (GlobalFunc_1533(*iParam0, *iParam1, -1))
					{
						if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam1, 0))
						{
							iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam1, 0);
							if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
							{
								PED::SET_PED_CONFIG_FLAG(*iParam0, 115, 1);
							}
							else
							{
								PED::SET_PED_CONFIG_FLAG(*iParam0, 115, 0);
							}
						}
						else
						{
							PED::SET_PED_CONFIG_FLAG(*iParam0, 115, 0);
						}
						if (*iParam4 == 1)
						{
							func_275(iParam0, 9);
						}
						else
						{
							func_275(iParam0, 8);
						}
					}
					else if (iParam0->f_15 < 17.5f)
					{
						if (!func_311(iParam2, iParam3))
						{
							func_275(iParam0, 7);
						}
					}
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, 0))
				{
					if (!func_311(iParam2, iParam3))
					{
						if (iParam0->f_15 < 17.5f)
						{
							func_275(iParam0, 7);
						}
					}
					else
					{
						func_275(iParam0, 2);
					}
				}
				break;
			
			case 2:
				if (iParam0->f_13 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, 0))
						{
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 3, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 1, 1);
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam1, -1))
							{
								TASK::TASK_ENTER_VEHICLE(*iParam0, *iParam1, 20000, -1, 2f, 9, 0);
							}
							else if (VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam1, 0))
							{
								TASK::TASK_ENTER_VEHICLE(*iParam0, *iParam1, 20000, 0, 2f, 9, 0);
							}
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 1);
							iParam0->f_7 = MISC::GET_GAME_TIMER();
						}
					}
					iParam0->f_13 = 1;
				}
				if (((ENTITY::DOES_ENTITY_EXIST(*iParam1) && VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, 0)) && ENTITY::GET_ENTITY_HEALTH(*iParam1) > 0) && VEHICLE::GET_VEHICLE_ENGINE_HEALTH(*iParam1) > 0f)
				{
					if (PED::IS_PED_IN_VEHICLE(*iParam0, *iParam1, 0))
					{
						if (*iParam4 == 1)
						{
							func_275(iParam0, 9);
						}
						else
						{
							func_275(iParam0, 8);
						}
					}
					else
					{
						if (iParam0->f_13 == 1)
						{
							if (GlobalFunc_2521(5000, iParam0->f_7))
							{
								if (iParam0->f_15 > 25f && GlobalFunc_156(*iParam0, *iParam1, 1) < 10f)
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(*iParam0) && !ENTITY::IS_ENTITY_ON_SCREEN(*iParam1))
									{
										if (VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam1, -1))
										{
											PED::SET_PED_INTO_VEHICLE(*iParam0, *iParam1, -1);
										}
										else if (VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam1, 0))
										{
											PED::SET_PED_INTO_VEHICLE(*iParam0, *iParam1, 0);
										}
									}
								}
								else
								{
									func_275(iParam0, 7);
								}
							}
						}
						if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, -1794415470) == 1)
						{
							if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(*iParam0))
							{
								if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam1, -1) || !VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam1, 0))
								{
									func_275(iParam0, 2);
								}
								if (iParam0->f_15 < 17.5f)
								{
									if (!func_311(iParam2, iParam3))
									{
										func_275(iParam0, 7);
									}
								}
							}
						}
					}
				}
				else
				{
					func_275(iParam0, 7);
				}
				break;
			}
	}
}


int func_311(int iParam0, int iParam1)//Position - 0x1A929
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
			{
				if (!VEHICLE::IS_VEHICLE_STOPPED(iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_312(var uParam0, int iParam1, float fParam2, float fParam3)//Position - 0x1A975
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0 /*18*/]))
		{
			if (PED::IS_PED_INJURED((*uParam0)[iVar0 /*18*/]))
			{
				if ((uParam0[iVar0 /*18*/])->f_17 == 0)
				{
					(uParam0[iVar0 /*18*/])->f_17 = func_315(uParam0[iVar0 /*18*/]);
					func_313((uParam0[iVar0 /*18*/])->f_17, &iLocal_3761, &iLocal_3762, &iLocal_3763, &iLocal_3764);
					if (HUD::DOES_BLIP_EXIST((uParam0[iVar0 /*18*/])->f_1))
					{
						HUD::REMOVE_BLIP(&((uParam0[iVar0 /*18*/])->f_1));
					}
				}
				else
				{
					RECORDING::_0x293220DA1B46CEBC(3f, 0f, 3);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0[iVar0 /*18*/]);
				}
			}
			else
			{
				iVar1 = 1;
				if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[iVar0 /*18*/], 0))
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), (*uParam0)[iVar0 /*18*/], 1) > fParam3)
					{
						(uParam0[iVar0 /*18*/])->f_17 = 1;
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0[iVar0 /*18*/]);
						if (HUD::DOES_BLIP_EXIST((uParam0[iVar0 /*18*/])->f_1))
						{
							HUD::REMOVE_BLIP(&((uParam0[iVar0 /*18*/])->f_1));
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, 0))
					{
						if (PED::IS_PED_IN_VEHICLE((*uParam0)[iVar0 /*18*/], *uParam1, 0))
						{
							iVar2 = 1;
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), (*uParam0)[iVar0 /*18*/], 1) > fParam2)
							{
								(uParam0[iVar0 /*18*/])->f_17 = 1;
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0[iVar0 /*18*/]);
								if (HUD::DOES_BLIP_EXIST((uParam0[iVar0 /*18*/])->f_1))
								{
									HUD::REMOVE_BLIP(&((uParam0[iVar0 /*18*/])->f_1));
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, 0))
		{
			if (iVar1 == 1 || iVar2 == 1)
			{
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), *uParam1, 1) > fParam2)
				{
					VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*uParam1);
					VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*uParam1);
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*uParam1, 0);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam1);
					if (HUD::DOES_BLIP_EXIST(iParam1->f_1))
					{
						HUD::REMOVE_BLIP(&(iParam1->f_1));
					}
				}
			}
			else
			{
				VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*iParam1);
				VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*iParam1);
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*iParam1, 0);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam1);
				if (HUD::DOES_BLIP_EXIST(iParam1->f_1))
				{
					HUD::REMOVE_BLIP(&(iParam1->f_1));
				}
			}
		}
		else
		{
			VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*iParam1);
			VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*iParam1);
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*iParam1, 0);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam1);
			if (HUD::DOES_BLIP_EXIST(iParam1->f_1))
			{
				HUD::REMOVE_BLIP(&(iParam1->f_1));
			}
		}
	}
}

void func_313(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1ABA4
{
	switch (iParam0)
	{
		case 5:
			*iParam1++;
			GlobalFunc_565(224, 1, 0);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				GlobalFunc_565(227, 1, 0);
			}
			break;
		
		case 6:
			*iParam2++;
			GlobalFunc_565(224, 1, 0);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				GlobalFunc_565(227, 1, 0);
			}
			break;
		
		case 2:
			*iParam3++;
			break;
		
		case 3:
			*iParam4++;
			break;
	}
}


int func_315(var uParam0)//Position - 0x1ACD9
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
			iVar0 = PED::GET_PED_SOURCE_OF_DEATH(*uParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar0))
				{
					iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					if (iVar1 == func_196(1))
					{
						switch (GlobalFunc_8315())
						{
							case 0:
								return 3;
								break;
							
							case 1:
								return 6;
								break;
						}
					}
					else if (iVar1 == func_196(0))
					{
						switch (GlobalFunc_8315())
						{
							case 0:
								return 5;
								break;
							
							case 1:
								return 2;
								break;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
				{
					return 4;
				}
				else
				{
					return 1;
				}
			}
			else
			{
				uParam0->f_12++;
				if (uParam0->f_12 == 10)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_316(var uParam0, var uParam1)//Position - 0x1ADAE
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, 0))
		{
			iVar0 = 0;
			while (iVar0 <= (*uParam0 - 1))
			{
				if (!PED::IS_PED_INJURED((*uParam0)[iVar0 /*18*/]))
				{
					if (PED::IS_PED_IN_VEHICLE((*uParam0)[iVar0 /*18*/], *uParam1, 0))
					{
						if (HUD::DOES_BLIP_EXIST((uParam0[iVar0 /*18*/])->f_1))
						{
							HUD::REMOVE_BLIP(&((uParam0[iVar0 /*18*/])->f_1));
						}
						iVar1 = 1;
					}
					else if (!HUD::DOES_BLIP_EXIST((uParam0[iVar0 /*18*/])->f_1))
					{
						(uParam0[iVar0 /*18*/])->f_1 = GlobalFunc_6797((*uParam0)[iVar0 /*18*/], 1, 145);
					}
				}
				iVar0++;
			}
			if (!HUD::DOES_BLIP_EXIST(uParam1->f_1))
			{
				if (iVar1 == 1)
				{
					uParam1->f_1 = GlobalFunc_5104(ENTITY::GET_ENTITY_COORDS(*uParam1, 1), 0);
					HUD::SET_BLIP_COLOUR(uParam1->f_1, 1);
					HUD::SET_BLIP_PRIORITY(uParam1->f_1, 9);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam1->f_1, "BLIP_VEH");
				}
			}
			else
			{
				Var2 = { HUD::GET_BLIP_COORDS(uParam1->f_1) };
				Var5 = { ENTITY::GET_ENTITY_COORDS(*uParam1, 1) };
				Var2.x = (Var2.x + (((Var5.x - Var2.x) / 1.1f) * SYSTEM::TIMESTEP()));
				Var2.f_1 = (Var2.f_1 + (((Var5.f_1 - Var2.f_1) / 1.1f) * SYSTEM::TIMESTEP()));
				Var2.f_2 = (Var2.f_2 + (((Var5.f_2 - Var2.f_2) / 1.1f) * SYSTEM::TIMESTEP()));
				HUD::SET_BLIP_COORDS(uParam1->f_1, Var2);
				if (iVar1 == 0)
				{
					HUD::REMOVE_BLIP(&(uParam1->f_1));
				}
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
			{
				HUD::REMOVE_BLIP(&(uParam1->f_1));
			}
			iVar0 = 0;
			while (iVar0 <= (*uParam0 - 1))
			{
				if (!PED::IS_PED_INJURED((*uParam0)[iVar0 /*18*/]))
				{
					if (!HUD::DOES_BLIP_EXIST((uParam0[iVar0 /*18*/])->f_1))
					{
						(uParam0[iVar0 /*18*/])->f_1 = GlobalFunc_6797((*uParam0)[iVar0 /*18*/], 1, 145);
					}
				}
				iVar0++;
			}
		}
	}
}





int func_321(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1B0D1
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam0, 26, iParam1, iParam2, 1, 1);
		PED::SET_PED_MAX_HEALTH(iVar0, iParam3);
		ENTITY::SET_ENTITY_HEALTH(iVar0, iParam3);
		PED::SET_PED_DIES_WHEN_INJURED(iVar0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(iVar0, iParam4, -1, 0, 1);
		WEAPON::SET_PED_INFINITE_AMMO(iVar0, 1, iParam4);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iLocal_3104);
		PED::SET_PED_AS_ENEMY(iVar0, 1);
		PED::SET_PED_TARGET_LOSS_RESPONSE(iVar0, 1);
		PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 512, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 17, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 5, 1);
		PED::SET_PED_CONFIG_FLAG(iVar0, 188, 1);
		PED::SET_PED_CONFIG_FLAG(iVar0, 118, 0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 132, 1);
		PED::SET_PED_CONFIG_FLAG(iVar0, 214, 1);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar0, 1, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 1);
		return iVar0;
	}
	return 0;
}

int func_322(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x1B189
{
	if (iParam1 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			STREAMING::REQUEST_MODEL(iParam0->f_6);
			if (STREAMING::HAS_MODEL_LOADED(iParam0->f_6))
			{
				if (iParam2 == 1)
				{
					*iParam0 = func_341(iParam0->f_6, iParam0->f_2, iParam0->f_5);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
				}
				else if (iParam3 == 145)
				{
					*iParam0 = VEHICLE::CREATE_VEHICLE(iParam0->f_6, iParam0->f_2, iParam0->f_5, 1, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
				}
				else if (func_337(iParam0, iParam3, iParam0->f_2, iParam0->f_5, 1, 0))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
				{
					if (iParam6 != -1 && iParam7 != -1)
					{
						VEHICLE::SET_VEHICLE_COLOURS(*iParam0, iParam6, iParam7);
					}
					if (iParam5 != -1)
					{
						VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*iParam0, iParam5);
					}
					VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, iParam8, iParam9);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, bParam4);
					VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(*iParam0, !bParam4);
					VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(*iParam0, !bParam4);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(*iParam0, !bParam4, 0);
					if (VEHICLE::IS_THIS_MODEL_A_CAR(iParam0->f_6))
					{
						VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(*iParam0, 0, !bParam4);
						VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(*iParam0, 1, !bParam4);
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, !bParam4);
					}
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				}
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if (iParam1 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (func_323(iParam0, iParam3, iParam0->f_2, iParam0->f_5, 1, 0))
			{
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, bParam4);
				VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(*iParam0, !bParam4);
				VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(*iParam0, !bParam4);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(*iParam0, !bParam4, 0);
				if (VEHICLE::IS_THIS_MODEL_A_CAR(iParam0->f_6))
				{
					VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(*iParam0, 0, !bParam4);
					VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(*iParam0, 1, !bParam4);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, !bParam4);
				}
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

int func_323(int iParam0, int iParam1, struct<3> Param2, int iParam5, bool bParam6, int iParam7)//Position - 0x1B355
{
	var uVar0;
	var uVar1;
	struct<73> Var5;
	int iVar79;
	int iVar80;
	bool bVar81;
	char cVar82[16];
	int iVar86;
	
	if (GlobalFunc_42(iParam1))
	{
		Var5.f_11 = 12;
		Var5.f_31 = 25;
		Var5.f_57 = 2;
		GlobalFunc_97(iParam1, &Var5, iParam7);
		if (Var5 == 0)
		{
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) != Var5)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3208) && Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[131])
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/] = 0;
		}
		if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/] == Var5)
		{
			STREAMING::REQUEST_MODEL(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/], Param2, uParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var5.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_5, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_7, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var5.f_2);
				iVar79 = 0;
				while (iVar79 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar79 + 1, !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_11[iVar79]);
					iVar79++;
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_24);
				}
				if (GlobalFunc_197(&uVar1, &uVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_27));
					if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_26 >= 0 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_60, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_62);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_64);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_63);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_69, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_70, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_71);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_65 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_65);
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_66 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_66 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_66);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_66);
						}
					}
				}
				GlobalFunc_5811(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_5120(iParam0);
					}
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/]);
				}
				GlobalFunc_531(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/] == Var5)
		{
			STREAMING::REQUEST_MODEL(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/], Param2, iParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var5.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_5, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_7, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var5.f_2);
				iVar80 = 0;
				while (iVar80 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar80 + 1, !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_11[iVar80]);
					iVar80++;
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_24);
				}
				if (GlobalFunc_197(&uVar1, &uVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_27));
					if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_26 >= 0 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_60, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_62);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_64);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_63);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_69, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_70, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_71);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_65 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_65);
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_66 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_66 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_66);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_66);
						}
					}
				}
				GlobalFunc_5811(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_5120(iParam0);
					}
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/]);
				}
				GlobalFunc_531(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var5);
			if (STREAMING::HAS_MODEL_LOADED(Var5))
			{
				bVar81 = true;
				*iParam0 = VEHICLE::CREATE_VEHICLE(Var5, Param2, iParam5, 1, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				StringCopy(&cVar82, VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0), 16);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var5.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Var5.f_5, Var5.f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Var5.f_7, Var5.f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var5.f_2);
				iVar86 = 0;
				while (iVar86 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar86 + 1, !Var5.f_11[iVar86]);
					iVar86++;
				}
				if (Var5.f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Var5.f_24);
				}
				if (GlobalFunc_197(&uVar1, &uVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Var5.f_27));
					if (Var5.f_26 >= 0 && Var5.f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Var5.f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Var5.f_60, Var5.f_61, Var5.f_62);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Var5.f_64);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Var5.f_63);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Var5.f_69, Var5.f_70, Var5.f_71);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Var5.f_68, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Var5.f_68, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Var5.f_68, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Var5.f_68, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Var5.f_65 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Var5.f_65);
				}
				if (Var5.f_66 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Var5.f_66 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var5.f_66);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var5.f_66);
						}
					}
				}
				GlobalFunc_5811(iParam0, &(Var5.f_31), &(Var5.f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 1)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bagger") && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[118])
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &cVar82);
						bVar81 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_5120(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3208) && Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[131]) && ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("tailgater"))
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 6, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 14, 7, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 11, 2, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 2, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 7, 5, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 0, 0, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 3, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 13, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 4, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 12, 2, false);
					VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, 22, true);
					VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, 2);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 23, 11, false);
					VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, 2);
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3208 = 1;
					func_324(iParam1, iParam0, 0, 1);
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var5);
				}
				if (bVar81)
				{
					GlobalFunc_531(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_324(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1C13C
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((GlobalFunc_42(iParam0) && ENTITY::DOES_ENTITY_EXIST(*iParam1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, 0))
	{
		if (iParam2 > Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			GlobalFunc_8626(*iParam1, iParam0);
		}
		if (VEHICLE::GET_NUM_MOD_KITS(*iParam1) != 0)
		{
			VEHICLE::SET_VEHICLE_MOD_KIT(*iParam1, 0);
		}
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/] = ENTITY::GET_ENTITY_MODEL(*iParam1);
		if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(*iParam1, &iVar1))
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_1 = ENTITY::GET_ENTITY_MODEL(iVar1);
		}
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_2 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(*iParam1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_3 = ENTITY::GET_ENTITY_HEALTH(*iParam1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[0] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[1] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 2);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[2] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 3);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[3] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 4);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[4] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 5);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[5] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 6);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[6] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 7);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[7] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 8);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[8] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 9);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[9] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 10);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[10] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 11);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[11] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 12);
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*iParam1, 0))
		{
			iVar2 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_24 = 1;
			}
			else
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_24 = 0;
			}
		}
		else
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_24 = 0;
		}
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_25 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
		StringCopy(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_27), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam1), 16);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_26 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam1);
		VEHICLE::GET_VEHICLE_COLOURS(*iParam1, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_5), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(*iParam1, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_7), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(*iParam1, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_60), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_61), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_62));
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_64 = VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(*iParam1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_63 = VEHICLE::GET_VEHICLE_WINDOW_TINT(*iParam1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_65 = VEHICLE::GET_VEHICLE_LIVERY(*iParam1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_66 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(*iParam1);
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam1, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_69), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_70), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_71));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 2))
		{
			MISC::SET_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 28);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 3))
		{
			MISC::SET_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 29);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 0))
		{
			MISC::SET_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 30);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 1))
		{
			MISC::SET_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 31);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 31);
		}
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3209[iParam0] = 10;
		if ((VEHICLE::GET_VEHICLE_MOD_KIT(*iParam1) >= 0 && VEHICLE::GET_VEHICLE_MOD_KIT(*iParam1) < 255) && GlobalFunc_6706(*iParam1, 0, &uVar0))
		{
			GlobalFunc_102(iParam1, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_57));
			if (bParam3)
			{
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_40 = 1;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/] = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_3 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_63;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_4 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_60;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_5 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_61;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_6 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_62;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_10 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_66;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_16 = !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_64;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_19 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_27 };
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_23 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_26;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_7 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[11];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_8 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[12];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_9 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[23];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_11 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[4];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_12 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[15];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_13 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[16];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_14 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[14];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_15 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[22];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_18 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[20];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_17 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[18];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_24 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 11) + 1;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_25 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 12) + 1;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_26 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 4) + 1;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_27 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 23) + 1;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_28 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 14) + 1;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_29 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 16) + 1;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_30 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 15) + 1;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_32 = VEHICLE::_0xEEBFC7A7EFDC35B4(*iParam1);
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_33[0] = AUDIO::GET_VEHICLE_DEFAULT_HORN(*iParam1);
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_33[1] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 0);
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_33[2] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 1);
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_33[3] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 2);
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_33[4] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 3);
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_39 = VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(*iParam1);
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_31 = func_327(*iParam1);
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_33[0] = AUDIO::GET_VEHICLE_DEFAULT_HORN_IGNORE_MODS(*iParam1);
				VEHICLE::GET_VEHICLE_MOD_COLOR_1(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				GlobalFunc_4968(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_5, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_7, iVar3, 1, &(Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_1));
				VEHICLE::GET_VEHICLE_MOD_COLOR_2(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				GlobalFunc_4968(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_6, -1, iVar3, 0, &(Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_2));
			}
		}
	}
}



float func_327(int iParam0)//Position - 0x1E280
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	iVar0 = 100000;
	iVar1 = 65000/*func_148*/;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;
	if (((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::GET_VEHICLE_MOD_KIT(iParam0) >= 0) && VEHICLE::GET_VEHICLE_MOD_KIT(iParam0) < 255)
	{
		if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 0)
		{
			if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
	return fVar6;
}










int func_337(var uParam0, int iParam1, struct<3> Param2, int iParam5, bool bParam6, int iParam7)//Position - 0x1EAAE
{
	struct<74> Var0;
	int iVar74;
	int iVar75;
	
	if (!GlobalFunc_42(iParam1))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 25;
		Var0.f_57 = 2;
		GlobalFunc_549(iParam1, &Var0, iParam7);
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*uParam0) != Var0)
			{
			}
			return 1;
		}
		if ((iParam1 == 17 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][0 /*74*/] == Var0) || (iParam1 == 15 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][1 /*74*/] == Var0))
		{
			if (iParam1 == 17)
			{
				iVar74 = 0;
			}
			else if (iParam1 == 15)
			{
				iVar74 = 1;
			}
			STREAMING::REQUEST_MODEL(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/]))
			{
				*uParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/], Param2, uParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0);
				VEHICLE::_0xAB04325045427AAE(*uParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*uParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, true);
				ENTITY::SET_ENTITY_HEALTH(*uParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*uParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*uParam0, 1250f);
				Var0.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_5, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_7, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*uParam0, Var0.f_2);
				iVar75 = 0;
				while (iVar75 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*uParam0, iVar75 + 1, !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_11[iVar75]);
					iVar75++;
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_24)
				{
					if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*uParam0, 0))
					{
						if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_24)
						{
							VEHICLE::RAISE_CONVERTIBLE_ROOF(*uParam0, 1);
						}
						else
						{
							VEHICLE::LOWER_CONVERTIBLE_ROOF(*uParam0, 1);
						}
					}
				}
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_27));
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_26 >= 0 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_26);
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_60, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_62);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_64);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_63);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_69, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_70, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_71);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*uParam0, 2, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_68, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*uParam0, 3, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_68, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*uParam0, 0, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_68, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*uParam0, 1, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_68, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*uParam0) > 1 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_65 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_65);
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_66 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
						{
							if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_66 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_66);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_66);
						}
					}
				}
				GlobalFunc_5811(uParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*uParam0, Var0.f_72);
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/]);
				}
				GlobalFunc_2526(*uParam0);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var0);
			if (STREAMING::HAS_MODEL_LOADED(Var0))
			{
				*uParam0 = VEHICLE::CREATE_VEHICLE(Var0, Param2, iParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0);
				VEHICLE::_0xAB04325045427AAE(*uParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*uParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, true);
				GlobalFunc_7141(uParam0, Var0);
				if (iParam1 == 17 || iParam1 == 15)
				{
					GlobalFunc_2526(*uParam0);
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var0);
				}
				return 1;
			}
		}
	}
	return 0;
}




int func_341(int iParam0, struct<3> Param1, int iParam4)//Position - 0x1F6A9
{
	int iVar0;
	
	if (iParam0 == joaat("monroe"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, uParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 89, 89);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 88, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, " FA5T66 ");
	}
	else if (iParam0 == joaat("cheetah"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, iParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 62, 62);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 68, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, " SDTM1YP");
	}
	else if (iParam0 == joaat("stinger"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, iParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 27, 27);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 36, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, "ALPHADOG");
		VEHICLE::SET_VEHICLE_EXTRA(iVar0, 1, true);
	}
	else if (iParam0 == joaat("jb700"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, iParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 3, 3);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 3, 3);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, "  4G3NT");
	}
	else if (iParam0 == joaat("entityxf"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, iParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 38, 38);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 37, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, " MKB652 ");
	}
	else if (iParam0 == joaat("ztype"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, iParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 0, 0);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 10, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, " V1NTAG3");
	}
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(iVar0, 0f);
		VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iVar0, false, 0);
		VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar0, 0);
	}
	return iVar0;
}

int func_342(int iParam0, var uParam1, float fParam2, int iParam3, float fParam4, float fParam5, int iParam6)//Position - 0x1F82C
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	var uVar12;
	float fVar13;
	var uVar14;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			Var3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
			if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Var0, iParam3, &Var9, &uVar12, &uVar14, iParam6, 1077936128, 0))
			{
				Var6 = { Var9 - Var0 };
				fVar13 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var6.x, Var6.f_1, Var3.x, Var3.f_1);
				if (fVar13 > fParam4 && fVar13 < fParam5)
				{
					if (!GlobalFunc_100(*uParam1, Var9))
					{
						*uParam1 = { Var9 };
						*fParam2 = uVar12;
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_343()//Position - 0x1F8CA
{
	CAM::_0x59424BD75174C9B1();
	if (GlobalFunc_2522(PLAYER::PLAYER_PED_ID(), Local_3200))
	{
		if (func_273(PLAYER::PLAYER_PED_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(1, 0, 1);
			if (iLocal_3803 == 1)
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				}
				iLocal_3803 = 0;
			}
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
			{
				if (iLocal_3805 == 0)
				{
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
					CAM::_0x59424BD75174C9B1();
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfam3", "incar_lookbehind_exit_driver", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "missfam3", "incar_lookbehind_exit_driver") >= 0.5f)
						{
							if (iLocal_3807 == 0)
							{
								GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
								iLocal_3807 = MISC::GET_GAME_TIMER();
							}
							else if (GlobalFunc_2521(300, iLocal_3807))
							{
								iLocal_3803 = 1;
								iLocal_3805 = 1;
							}
						}
					}
				}
			}
		}
	}
}


int func_345(int iParam0)//Position - 0x1F9A8
{
	MISC::SET_BIT(&(Local_3434.f_13), 20);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAMILY3_1", 0);
	func_362();
	func_361(Local_3106, Local_3200, &Local_3106, iLocal_3684);
	func_360(&iLocal_3686, &bLocal_3690, &iLocal_3691, &uLocal_3689, &uLocal_3692, &fLocal_3688);
	func_359(iLocal_3742, iLocal_3684, iLocal_3687, &iLocal_3700, &(Local_3106.f_9));
	func_343();
	if (GlobalFunc_2522(PLAYER::PLAYER_PED_ID(), Local_3200))
	{
		GlobalFunc_187();
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 100, 1);
	}
	if (iLocal_3768 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_3200))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_3200))
			{
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(Local_3200, 5, 0, 1f);
			}
		}
	}
	switch (*iParam0)
	{
		case 0:
			if (!PED::IS_PED_INJURED(Local_3106) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3200, 0))
			{
				if (!PED::IS_PED_IN_VEHICLE(Local_3106, Local_3200, 0))
				{
					TASK::TASK_ENTER_VEHICLE(Local_3106, Local_3200, 20000, 0, 1f, 1, 0);
				}
			}
			if (iLocal_3683 == 0)
			{
				if (!PHYSICS::DOES_ROPE_EXIST(&uLocal_3682))
				{
					PHYSICS::ROPE_LOAD_TEXTURES();
					if (PHYSICS::ROPE_ARE_TEXTURES_LOADED())
					{
						uLocal_3682 = PHYSICS::ADD_ROPE(-1017.985f, 660.4285f, 147.4662f, 0f, 0f, 0f, 28f, 1, -1f, 0.5f, 0.5f, 0, 1, 1, 1065353216, 0, 0);
						PHYSICS::LOAD_ROPE_DATA(uLocal_3682, sLocal_3041);
					}
				}
				if ((ENTITY::DOES_ENTITY_EXIST(Local_3320) && ENTITY::DOES_ENTITY_EXIST(Local_3328)) && PHYSICS::DOES_ROPE_EXIST(&uLocal_3682))
				{
					if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_3320))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3200, 0))
						{
							PHYSICS::ATTACH_ENTITIES_TO_ROPE(uLocal_3682, Local_3320, Local_3200, Local_3320.f_1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_3200, 0f, -2.1f, 0.6f), 35f, 0, 0, 0, 0);
							iLocal_3683 = 1;
						}
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3336))
			{
				if (func_95(&Local_3336, 1))
				{
					ENTITY::SET_ENTITY_COLLISION(Local_3336, 1, 0);
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_3336, Local_3200, 0);
				}
			}
			*iParam0++;
			break;
		
		case 1:
			CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			if ((!PED::IS_PED_INJURED(Local_3106) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3200, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3200, 1))
				{
					CAM::SET_GAMEPLAY_COORD_HINT(Local_3057, -1, 8000, 2000, -1123838900);
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3200, 0))
				{
					if (HUD::DOES_BLIP_EXIST(Local_3200.f_1))
					{
						HUD::REMOVE_BLIP(&(Local_3200.f_1));
						HUD::CLEAR_PRINTS();
					}
				}
				else
				{
					if (!HUD::DOES_BLIP_EXIST(Local_3200.f_1))
					{
						Local_3200.f_1 = GlobalFunc_6783(Local_3200, 0, 0);
					}
					if (!func_88(&Local_3073) || !MISC::IS_STRING_NULL_OR_EMPTY(&Local_3073))
					{
						if (HUD::DOES_BLIP_EXIST(Local_3200.f_1))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_3434, 0))
								{
									func_264(&Local_3073, 7500, 1);
								}
							}
						}
					}
				}
				if (PED::IS_PED_SITTING_IN_VEHICLE(Local_3106, Local_3200) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3200))
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
					if (ENTITY::DOES_ENTITY_EXIST(Local_3312))
					{
						OBJECT::DELETE_OBJECT(&Local_3312);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_3336))
					{
						OBJECT::DELETE_OBJECT(&Local_3336);
					}
					VEHICLE::SET_VEHICLE_BURNOUT(Local_3200, 1);
					MISC::CLEAR_AREA_OF_PEDS(Local_3124.f_2, 100f, 0);
					MISC::CLEAR_AREA_OF_VEHICLES(Local_3124.f_2, 100f, 0, 0, 0, 0, 0);
					AUDIO::START_AUDIO_SCENE("FAMILY_3_PULL_DOWN_HOUSE_SCENE");
					*iParam0++;
				}
			}
			break;
		
		case 2:
			if (iLocal_3732 == 0)
			{
				func_356(&iLocal_3678);
				func_355(&(Local_3200.f_7));
			}
			STREAMING::REQUEST_PTFX_ASSET();
			STREAMING::REQUEST_ANIM_DICT("missfam3");
			if (func_346(&iLocal_3687))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3200, 0))
				{
					AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_3200, 1);
					VEHICLE::SET_VEHICLE_BURNOUT(Local_3200, 0);
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_3200, 0);
				}
				AUDIO::STOP_AUDIO_SCENE("FAMILY_3_RAYFIRE");
				AUDIO::STOP_AUDIO_SCENE("FAMILY_3_PULL_DOWN_HOUSE_SCENE");
				CAM::STOP_GAMEPLAY_HINT(0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_346(int iParam0)//Position - 0x1FDA9
{
	if (iLocal_3685 == 0)
	{
		func_354(Local_3200);
	}
	RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	switch (*iParam0)
	{
		case 0:
			iLocal_3742 = 1;
			AUDIO::LOAD_STREAM("FAMILY3_DECK_PULL_01_MASTER", 0);
			VEHICLE::SET_VEHICLE_BURNOUT(Local_3200, 1);
			Local_3747 = { Local_3200.f_2 };
			if (func_350(&iLocal_3684, 3500f, Local_3747, 0.75f) && AUDIO::LOAD_STREAM("FAMILY3_DECK_PULL_01_MASTER", 0))
			{
				if (iLocal_3686 == 1)
				{
					HUD::CLEAR_HELP(1);
					AUDIO::START_AUDIO_SCENE("FAMILY_3_RAYFIRE");
					AUDIO::PLAY_STREAM_FROM_POSITION(-1020.98f, 657.72f, 154.51f);
					CAM::SHAKE_GAMEPLAY_CAM("SMALL_EXPLOSION_SHAKE", 0.25f);
					func_84("FAM3_HPULL", 0);
					RECORDING::_0x48621C9FCA3EBD28(4);
					bLocal_3690 = true;
					*iParam0++;
				}
			}
			break;
		
		case 1:
			if (bLocal_3690)
			{
				if (iLocal_3691 == 0)
				{
					iLocal_3742 = 0;
					VEHICLE::SET_VEHICLE_BURNOUT(Local_3200, 1);
					Local_3747 = { ENTITY::GET_ENTITY_COORDS(Local_3200, 1) };
				}
				else if (iLocal_3691 == 1)
				{
					iLocal_3742 = 1;
					AUDIO::LOAD_STREAM("FAMILY3_DECK_PULL_02_MASTER", 0);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_RAYFIRE"))
					{
						AUDIO::STOP_AUDIO_SCENE("FAMILY_3_RAYFIRE");
					}
					VEHICLE::SET_VEHICLE_BURNOUT(Local_3200, 1);
					if (func_350(&iLocal_3684, 4000f, Local_3747, 0.75f) && AUDIO::LOAD_STREAM("FAMILY3_DECK_PULL_02_MASTER", 0))
					{
						HUD::CLEAR_HELP(1);
						AUDIO::START_AUDIO_SCENE("FAMILY_3_RAYFIRE");
						AUDIO::PLAY_STREAM_FROM_POSITION(-1020.98f, 657.72f, 154.51f);
						CAM::SHAKE_GAMEPLAY_CAM("MEDIUM_EXPLOSION_SHAKE", 0.15f);
						func_84("FAM3_HPULL", 0);
						iLocal_3691 = 0;
						*iParam0++;
					}
				}
			}
			break;
		
		case 2:
			if (bLocal_3690)
			{
				if (iLocal_3691 == 0)
				{
					iLocal_3742 = 0;
					VEHICLE::SET_VEHICLE_BURNOUT(Local_3200, 1);
					Local_3747 = { ENTITY::GET_ENTITY_COORDS(Local_3200, 1) };
				}
				else if (iLocal_3691 == 1)
				{
					VEHICLE::SET_VEHICLE_BURNOUT(Local_3200, 1);
					iLocal_3742 = 1;
					AUDIO::LOAD_STREAM("FAMILY3_DECK_PULL_03_MASTER", 0);
					AUDIO::PREPARE_MUSIC_EVENT("FAM3_HOUSE_COLLAPSE");
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_RAYFIRE"))
					{
						AUDIO::STOP_AUDIO_SCENE("FAMILY_3_RAYFIRE");
					}
					if ((func_350(&iLocal_3684, 4500f, Local_3747, 0.75f) && AUDIO::LOAD_STREAM("FAMILY3_DECK_PULL_03_MASTER", 0)) && AUDIO::PREPARE_MUSIC_EVENT("FAM3_HOUSE_COLLAPSE"))
					{
						GlobalFunc_702(1, 0, 1);
						HUD::CLEAR_HELP(1);
						AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_3200, 0);
						AUDIO::START_AUDIO_SCENE("FAMILY_3_RAYFIRE");
						AUDIO::TRIGGER_MUSIC_EVENT("FAM3_HOUSE_COLLAPSE");
						AUDIO::PLAY_STREAM_FROM_POSITION(-1020.98f, 657.72f, 154.51f);
						CAM::SHAKE_GAMEPLAY_CAM("MEDIUM_EXPLOSION_SHAKE", 0.25f);
						RECORDING::_0x293220DA1B46CEBC(3f, 0f, 3);
						iLocal_3691 = 0;
						iLocal_3684 = 0;
						iLocal_3685 = 1;
						*iParam0++;
					}
				}
			}
			break;
		
		case 3:
			if (bLocal_3690)
			{
				if (iLocal_3691 == 0)
				{
					iLocal_3742 = 0;
					if (iLocal_3686 == 8)
					{
						iLocal_3742 = 1;
						if (!CAM::DOES_CAM_EXIST(uLocal_3679))
						{
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_RAYFIRE"))
							{
								AUDIO::STOP_AUDIO_SCENE("FAMILY_3_RAYFIRE");
							}
							if (iLocal_3732 == 1)
							{
								GlobalFunc_575(800);
							}
							GlobalFunc_702(0, 0, 1);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
							RECORDING::_0x81CBAE94390F9F89();
							return 1;
						}
					}
					else if (iLocal_3732 == 0)
					{
						if (CAM::DOES_CAM_EXIST(uLocal_3679))
						{
							if (GlobalFunc_75())
							{
								GlobalFunc_570(800);
								if (iLocal_3686 < 6)
								{
									iLocal_3686 = 6;
								}
								if (PHYSICS::DOES_ROPE_EXIST(&uLocal_3682) && ENTITY::DOES_ENTITY_EXIST(Local_3320))
								{
									PHYSICS::DETACH_ROPE_FROM_ENTITY(uLocal_3682, Local_3320);
									PHYSICS::DETACH_ROPE_FROM_ENTITY(uLocal_3682, Local_3200);
									OBJECT::DELETE_OBJECT(&Local_3320);
									PHYSICS::DELETE_ROPE(&uLocal_3682);
									PHYSICS::ROPE_UNLOAD_TEXTURES();
									iLocal_3683 = 0;
								}
								if (ENTITY::DOES_ENTITY_EXIST(Local_3328))
								{
									OBJECT::DELETE_OBJECT(&Local_3328);
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3200, 0))
								{
									iLocal_3768 = 1;
									VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_3200, 1);
									ENTITY::SET_ENTITY_COORDS(Local_3200, -994.4631f, 643.6545f, 138.8214f, 1, 0, 0, 1);
									ENTITY::SET_ENTITY_HEADING(Local_3200, 277.058f);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3200);
								}
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
								}
								if (!PED::IS_PED_INJURED(Local_3106))
								{
									TASK::CLEAR_PED_TASKS(Local_3106);
								}
								GlobalFunc_702(0, 0, 1);
								if (CAM::DOES_CAM_EXIST(uLocal_3679))
								{
									CAM::STOP_GAMEPLAY_HINT(1);
									CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
									CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
									CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
									CAM::DESTROY_CAM(uLocal_3679, 0);
									CAM::DESTROY_ALL_CAMS(0);
									HUD::DISPLAY_HUD(1);
									HUD::DISPLAY_RADAR(1);
								}
								AUDIO::STOP_STREAM();
								iLocal_3732 = 1;
							}
						}
					}
				}
			}
			break;
	}
	return 0;
}




int func_350(int iParam0, float fParam1, struct<2> Param2, var uParam4, float fParam5)//Position - 0x20260
{
	struct<3> Var0;
	int iVar3;
	float fVar4;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(Local_3200, 1) };
	iVar3 = SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(0, 71) * 255f));
	fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param2, Param2.f_1, Var0.f_2, Var0, 1);
	if ((PAD::IS_DISABLED_CONTROL_PRESSED(0, 72) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 76)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 73))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
		iVar3 = 0;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3200, 0))
	{
		if ((PAD::IS_CONTROL_PRESSED(0, 71) && iVar3 != 0) || iVar3 >= 250)
		{
			if (GlobalFunc_74("FAM3_HPULL"))
			{
				HUD::CLEAR_HELP(1);
			}
			if (*iParam0 == 0)
			{
				SYSTEM::SETTIMERA(0);
				CAM::SHAKE_GAMEPLAY_CAM("SKY_DIVING_SHAKE", 0f);
				*iParam0 = 1;
			}
		}
		else
		{
			if (!func_88("FAM3_HPULL"))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					GlobalFunc_1("FAM3_HPULL");
					func_84("FAM3_HPULL", 1);
				}
			}
			if (*iParam0 == 1)
			{
				*iParam0 = 0;
				if (iLocal_3695 == 1)
				{
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3696))
					{
						GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uLocal_3696, "wheelspin", fLocal_3694, 0);
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_3696, 0);
					}
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3697))
					{
						GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uLocal_3697, "wheelspin", fLocal_3694, 0);
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_3697, 0);
					}
					iLocal_3695 = 0;
				}
				CAM::STOP_GAMEPLAY_CAM_SHAKING(0);
			}
		}
		if (*iParam0 == 1)
		{
			PAD::SET_PAD_SHAKE(0, 100, func_352(SYSTEM::FLOOR((SYSTEM::TO_FLOAT(SYSTEM::TIMERA()) / 12.5f)), 255));
			if (iLocal_3695 == 0)
			{
				if (STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3696) && !GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3697))
					{
						uLocal_3696 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_fam3_wheelspin_dirt", Local_3200, Local_3061, Local_3067, 1065353216, 0, 0, 0);
						uLocal_3697 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_fam3_wheelspin_dirt", Local_3200, Local_3064, Local_3067, 1065353216, 0, 0, 0);
						iLocal_3695 = 1;
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY3_CABLE_STRAIN_MASTER", Local_3200, 0, 0, 0);
					}
				}
			}
			else if (iLocal_3695 == 1)
			{
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3696) && GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3697))
				{
					GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uLocal_3696, "wheelspin", fLocal_3694, 0);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uLocal_3697, "wheelspin", fLocal_3694, 0);
				}
			}
		}
		if (*iParam0 == 1)
		{
			if (IntToFloat(SYSTEM::TIMERA()) > fParam1)
			{
				VEHICLE::SET_VEHICLE_BURNOUT(Local_3200, 0);
			}
			if (((IntToFloat(SYSTEM::TIMERA()) > fParam1 && fVar4 > fParam5) || fVar4 > (fParam5 * 2f)) || IntToFloat(SYSTEM::TIMERA()) > (fParam1 + 1500f))
			{
				VEHICLE::SET_VEHICLE_BURNOUT(Local_3200, 0);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_3200, 2f);
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3696) && GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3697))
				{
					fLocal_3694 = 0f;
					GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uLocal_3696, "wheelspin", fLocal_3694, 0);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uLocal_3697, "wheelspin", fLocal_3694, 0);
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_3696, 0);
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_3697, 0);
					iLocal_3695 = 0;
				}
				*iParam0 = 0;
				return 1;
			}
		}
		if (*iParam0 == 1)
		{
			fLocal_3693 = GlobalFunc_253((fLocal_3693 + (0.2f * SYSTEM::TIMESTEP())), 0f, 0.3f);
			fLocal_3694 = GlobalFunc_253((fLocal_3694 + (0.25f * SYSTEM::TIMESTEP())), 0f, 1f);
		}
		else if (*iParam0 == 0)
		{
			fLocal_3693 = GlobalFunc_253((fLocal_3693 - (0.4f * SYSTEM::TIMESTEP())), 0f, 0.3f);
			fLocal_3694 = 0f;
		}
		AUDIO::SET_AUDIO_SCENE_VARIABLE("FAMILY_3_PULL_DOWN_HOUSE_SCENE", "apply", fLocal_3694);
	}
	return 0;
}


int func_352(int iParam0, int iParam1)//Position - 0x205CC
{
	if (iParam0 == iParam1)
	{
		return iParam0;
	}
	else if (iParam0 > iParam1)
	{
		return iParam1;
	}
	else if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam0;
}


void func_354(int iParam0)//Position - 0x20616
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (ENTITY::IS_ENTITY_UPRIGHT(iParam0, 1119092736) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0))
			{
				fVar3 = (0f + ((0.5f * 30f) * SYSTEM::TIMESTEP()));
				iVar4 = SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(0, 59) * 255f));
				iVar5 = SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(0, 71) * 255f));
				if ((PAD::IS_DISABLED_CONTROL_PRESSED(0, 72) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 76)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 73))
				{
					PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
					iVar5 = 0;
				}
				if (iVar5 >= 250)
				{
					if (ENTITY::GET_ENTITY_HEADING(iParam0) >= 287f)
					{
						Var0 = { -MISC::ABSF((130f * fVar3)), 0f, 0f };
						ENTITY::APPLY_FORCE_TO_ENTITY(iParam0, 1, Var0, Local_3070, 0, 1, 1, 0, 0, 1);
						iLocal_3777 = 0;
					}
					if (iVar4 >= 225)
					{
						if (ENTITY::GET_ENTITY_HEADING(iParam0) > 265f)
						{
							Var0 = { -MISC::ABSF((130f * fVar3)), 0f, 0f };
							ENTITY::APPLY_FORCE_TO_ENTITY(iParam0, 1, Var0, Local_3070, 0, 1, 1, 0, 0, 1);
							iLocal_3777 = 0;
						}
					}
					else if (iVar4 <= -225)
					{
						if (ENTITY::GET_ENTITY_HEADING(iParam0) < 285f)
						{
							Var0 = { MISC::ABSF((130f * fVar3)), 0f, 0f };
							ENTITY::APPLY_FORCE_TO_ENTITY(iParam0, 1, Var0, Local_3070, 0, 1, 1, 0, 0, 1);
							iLocal_3777 = 0;
						}
					}
					if (iVar4 == 0)
					{
						if (iLocal_3777 == 0)
						{
							iLocal_3777 = MISC::GET_GAME_TIMER();
							switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
							{
								case 0:
									iLocal_3776 = 1;
									break;
								
								case 1:
									iLocal_3776 = -1;
									break;
							}
						}
						else if ((MISC::GET_GAME_TIMER() - iLocal_3777) < 1000)
						{
							Var0 = { (MISC::ABSF((130f * fVar3)) * IntToFloat(iLocal_3776)), 0f, 0f };
							ENTITY::APPLY_FORCE_TO_ENTITY(iParam0, 1, Var0, Local_3070, 0, 1, 1, 0, 0, 1);
							iLocal_3777 = 0;
						}
					}
					Var0 = { 0f, 0f, -MISC::ABSF((450f * fVar3)) };
					ENTITY::APPLY_FORCE_TO_ENTITY(iParam0, 1, Var0, Local_3070, 0, 1, 1, 0, 0, 1);
				}
				else
				{
					iLocal_3777 = 0;
				}
			}
		}
	}
}

void func_355(var uParam0)//Position - 0x2082A
{
	switch (*uParam0)
	{
		case 0:
			if (iLocal_3685 == 1)
			{
				GlobalFunc_530(Local_3200, 3f, 3, 1056964608, 0, 1);
				if (iLocal_3686 == 8)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3200, 0))
					{
						func_272(PLAYER::PLAYER_PED_ID(), -1, 5000, 0);
						func_272(Local_3106, 0, 6000, 0);
						*uParam0++;
					}
				}
			}
			break;
	}
}

void func_356(int iParam0)//Position - 0x2088F
{
	switch (*iParam0)
	{
		case 0:
			if (iLocal_3685 == 1)
			{
				if (fLocal_3688 >= 0.56f)
				{
					if (!CAM::DOES_CAM_EXIST(uLocal_3679))
					{
						uLocal_3679 = CAM::CREATE_CAMERA(26379945, 1);
						CAM::SET_CAM_PARAMS(uLocal_3679, -1009.953f, 633.5962f, 140.4834f, 22.946f, -0.125925f, 21.44852f, 43.51022f, 0, 1, 1, 2);
						CAM::SET_CAM_PARAMS(uLocal_3679, -1010.459f, 633.9232f, 140.5982f, 13.29827f, -0.125925f, 21.36455f, 43.51022f, 5000, 0, 0, 2);
						CAM::SHAKE_CAM(uLocal_3679, "MEDIUM_EXPLOSION_SHAKE", 0.1f);
						CAM::STOP_GAMEPLAY_HINT(1);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						HUD::DISPLAY_HUD(0);
						HUD::DISPLAY_RADAR(0);
						CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
						*iParam0++;
					}
				}
			}
			break;
		
		case 1:
			if (PHYSICS::DOES_ROPE_EXIST(&uLocal_3682) && ENTITY::DOES_ENTITY_EXIST(Local_3320))
			{
				PHYSICS::DETACH_ROPE_FROM_ENTITY(uLocal_3682, Local_3320);
				PHYSICS::DETACH_ROPE_FROM_ENTITY(uLocal_3682, Local_3200);
				OBJECT::DELETE_OBJECT(&Local_3320);
				PHYSICS::DELETE_ROPE(&uLocal_3682);
				PHYSICS::ROPE_UNLOAD_TEXTURES();
				iLocal_3683 = 0;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_3328))
			{
				OBJECT::DELETE_OBJECT(&Local_3328);
			}
			if (fLocal_3688 >= 0.683f)
			{
				if (CAM::DOES_CAM_EXIST(uLocal_3679))
				{
					CAM::SET_CAM_PARAMS(uLocal_3679, -1009.381f, 658.4453f, 152.8209f, -39.49625f, -0.125924f, 138.3634f, 43.51022f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(uLocal_3679, -1010.492f, 655.0285f, 150.7794f, -30.66858f, -0.125923f, 143.7998f, 43.51022f, 4000, 0, 0, 2);
					CAM::SHAKE_CAM(uLocal_3679, "HAND_SHAKE", 0.25f);
					CAM::STOP_GAMEPLAY_HINT(1);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					*iParam0++;
				}
			}
			break;
		
		case 2:
			if (fLocal_3688 >= 0.73f)
			{
				if (CAM::DOES_CAM_EXIST(uLocal_3679))
				{
					CAM::SET_CAM_PARAMS(uLocal_3679, -1029.067f, 622.2623f, 125.4774f, 45.37811f, -0.125924f, 1.607233f, 50.25604f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(uLocal_3679, -1029.405f, 621.6323f, 126.4555f, 40.44935f, -0.078049f, 1.812782f, 50.25604f, 5000, 0, 0, 2);
					CAM::SHAKE_CAM(uLocal_3679, "HAND_SHAKE", 0.25f);
					CAM::STOP_GAMEPLAY_HINT(1);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					*iParam0++;
				}
			}
			break;
		
		case 3:
			if (iLocal_3686 == 8)
			{
				CAM::SET_CAM_PARAMS(uLocal_3679, -1013.91f, 632.1597f, 140.1316f, 22.28829f, -0.125923f, 0.95958f, 50.25604f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(uLocal_3679, -1014.135f, 633.3419f, 140.9774f, 20.5643f, -0.125923f, 1.779718f, 50.25604f, 9000, 0, 0, 2);
				CAM::SHAKE_CAM(uLocal_3679, "HAND_SHAKE", 0.25f);
				CAM::STOP_GAMEPLAY_HINT(1);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				Local_3124.f_7 = MISC::GET_GAME_TIMER();
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3200, 0))
				{
					iLocal_3768 = 1;
					VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_3200, 1);
					ENTITY::SET_ENTITY_COORDS(Local_3200, -994.4631f, 643.6545f, 138.8214f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_3200, 277.058f);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3200);
				}
				*iParam0++;
			}
			break;
		
		case 4:
			if (GlobalFunc_2521(5500, Local_3124.f_7))
			{
				if (CAM::DOES_CAM_EXIST(uLocal_3679))
				{
					CAM::SET_CAM_PARAMS(uLocal_3679, -991.0989f, 642.2662f, 140.0028f, 15.86285f, 0f, 67.17722f, 50f, 0, 1, 1, 2);
					CAM::SHAKE_CAM(uLocal_3679, "HAND_SHAKE", 0.25f);
					CAM::STOP_GAMEPLAY_HINT(1);
					Local_3124.f_7 = MISC::GET_GAME_TIMER();
					*iParam0++;
				}
			}
			break;
		
		case 5:
			if (GlobalFunc_2521(500, Local_3124.f_7))
			{
				if (CAM::DOES_CAM_EXIST(uLocal_3679))
				{
					HUD::DISPLAY_HUD(1);
					HUD::DISPLAY_RADAR(1);
					CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
					CAM::_0x59424BD75174C9B1();
					CAM::DESTROY_CAM(uLocal_3679, 0);
					CAM::DESTROY_ALL_CAMS(0);
				}
				*iParam0++;
			}
			break;
	}
}



void func_359(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)//Position - 0x20CDF
{
	if (!func_88("FAM3_PULLS"))
	{
		if (GlobalFunc_2522(PLAYER::PLAYER_PED_ID(), Local_3200) && GlobalFunc_2522(Local_3106, Local_3200))
		{
			if (!GlobalFunc_111())
			{
				if (!GlobalFunc_5172(&Local_3434, 1))
				{
					if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_PULLS", 7, 0, 0, 0))
					{
						func_84("FAM3_PULLS", 1);
					}
				}
			}
		}
	}
	if (iParam0 == 1)
	{
		switch (iParam2)
		{
			case 1:
				if (iLocal_3691 == 1)
				{
					if (!func_88("FAM3_PULLC1"))
					{
						if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_PULLC1", 7, 0, 0, 0))
						{
							func_84("FAM3_PULLC1", 1);
							*iParam3 = MISC::GET_GAME_TIMER();
							*uParam4 = MISC::GET_GAME_TIMER();
						}
					}
				}
				break;
			
			case 2:
				if (iLocal_3691 == 1)
				{
					if (!func_88("FAM3_PULLC2"))
					{
						if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_PULLC2", 7, 0, 0, 0))
						{
							func_84("FAM3_PULLC2", 1);
							*iParam3 = MISC::GET_GAME_TIMER();
							*uParam4 = MISC::GET_GAME_TIMER();
						}
					}
				}
				break;
		}
		if (iParam1 == 0)
		{
			if (GlobalFunc_2521(8000, *iParam3))
			{
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_5172(&Local_3434, 1))
					{
						if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_PULLI", 7, 0, 0, 0))
						{
							*iParam3 = MISC::GET_GAME_TIMER();
						}
					}
				}
				else if (GlobalFunc_5672("FAM3_PULLS"))
				{
					*iParam3 = MISC::GET_GAME_TIMER();
				}
			}
			*uParam4 = MISC::GET_GAME_TIMER();
		}
		else
		{
			*iParam3 = MISC::GET_GAME_TIMER();
			if (GlobalFunc_2521(3000, *uParam4))
			{
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_5172(&Local_3434, 1))
					{
						if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_PULLE", 7, 0, 0, 0))
						{
							*uParam4 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
	}
	else
	{
		*iParam3 = MISC::GET_GAME_TIMER();
		*uParam4 = MISC::GET_GAME_TIMER();
	}
	if (iLocal_3685 == 1)
	{
		if (!func_88("FAM3_PULLC3"))
		{
			if (!GlobalFunc_111())
			{
				if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_PULLC3", 7, 0, 0, 0))
				{
					func_84("FAM3_PULLC3", 1);
				}
			}
		}
		if (iParam0 == 1)
		{
			if (!func_88("FAM3_DOWN") && !func_88("FAM3_DOWNA"))
			{
				if (!GlobalFunc_111())
				{
					if (iLocal_3686 == 8)
					{
						switch (GlobalFunc_2780())
						{
							case 0:
								if (GlobalFunc_10626(&uLocal_3471, "FAM3AUD", "FAM3_DOWN", "FAM3_DOWN_1", 7, 0, 0))
								{
									func_84("FAM3_DOWN", 1);
								}
								break;
							
							case 1:
								if (GlobalFunc_10626(&uLocal_3471, "FAM3AUD", "FAM3_DOWNA", "FAM3_DOWNA_1", 7, 0, 0))
								{
									func_84("FAM3_DOWNA", 1);
								}
								break;
							}
						}
					}
				}
			}
	}
}

void func_360(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, float fParam5)//Position - 0x20F64
{
	if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_3680))
	{
		if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_3680) == 7)
		{
			*fParam5 = OBJECT::GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(uLocal_3680);
		}
	}
	switch (*iParam0)
	{
		case 0:
			uLocal_3680 = OBJECT::GET_RAYFIRE_MAP_OBJECT(-1020.5f, 663.41f, 154.75f, 50f, "DES_StiltHouse");
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_3680))
			{
				if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_3680) != 5)
				{
					if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_3680) != 4)
					{
						OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_3680, 4);
					}
				}
				else if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_3680) == 5)
				{
					*uParam3 = 1;
					*iParam0++;
				}
			}
			break;
		
		case 1:
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_3680))
			{
				if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_3680) == 5)
				{
					if (*iParam1 == 1)
					{
						OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_3680, 6);
						*iParam0++;
					}
				}
			}
			break;
		
		case 2:
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_3680))
			{
				if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_3680) == 7)
				{
					if (*iParam2 == 0)
					{
						if (OBJECT::GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(uLocal_3680) > 0.1475f)
						{
							OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_3680, 12);
							*iParam2 = 1;
							SYSTEM::SETTIMERB(0);
							*iParam0++;
						}
					}
				}
			}
			break;
		
		case 3:
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_3680))
			{
				if (*iParam2 == 0)
				{
					if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_3680) == 12)
					{
						OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_3680, 13);
						*iParam0++;
					}
				}
			}
			break;
		
		case 4:
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_3680))
			{
				if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_3680) == 7)
				{
					if (*iParam2 == 0)
					{
						if (OBJECT::GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(uLocal_3680) >= 0.433f)
						{
							OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_3680, 12);
							*iParam2 = 1;
							SYSTEM::SETTIMERB(0);
							*iParam0++;
						}
					}
				}
			}
			break;
		
		case 5:
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_3680))
			{
				if (*iParam2 == 0)
				{
					if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_3680) == 12)
					{
						OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_3680, 13);
						*iParam0++;
					}
				}
			}
			break;
		
		case 6:
			STREAMING::REQUEST_PTFX_ASSET();
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_3680))
			{
				if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_3680) == 7)
				{
					if (OBJECT::GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(uLocal_3680) > 0.875f || iLocal_3732 == 1)
					{
						if (iLocal_3732 == 1)
						{
							OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_3680, 9);
						}
						if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3698))
						{
							if (STREAMING::HAS_PTFX_ASSET_LOADED())
							{
								uLocal_3698 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("ent_ray_fam3_dust_settle", -1016f, 642f, 141f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
							}
						}
						*iParam0++;
					}
				}
			}
			break;
		
		case 7:
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_3680))
			{
				if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_3680) == 10)
				{
					*uParam4 = 1;
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "FAMILY3_POST_DEBRIS_MASTER", -1016f, 642f, 141f, 0, 0, 0, 0);
					*iParam0++;
				}
			}
			break;
		
		case 8:
			break;
	}
}

void func_361(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2121B
{
	var uVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			switch (iParam2->f_11)
			{
				case 0:
					if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam1, 0))
					{
						STREAMING::REQUEST_ANIM_DICT("missfam3");
						if (STREAMING::HAS_ANIM_DICT_LOADED("missfam3"))
						{
							TASK::OPEN_SEQUENCE_TASK(&uVar0);
							TASK::TASK_PLAY_ANIM(0, "missfam3", "react_incar_brace_enter_f", 4f, -1000f, -1, 16, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(0, "missfam3", "react_incar_brace_loop_f", 1000f, -4f, -1, 17, 0, 0, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uVar0);
							TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar0);
							TASK::CLEAR_SEQUENCE_TASK(&uVar0);
							iParam2->f_13 = 0;
							iParam2->f_11 = 1;
						}
					}
					break;
				
				case 1:
					if (iParam2->f_13 == 0)
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "missfam3", "react_incar_brace_loop_f", 3) && TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) != 1)
						{
							TASK::TASK_PLAY_ANIM(iParam0, "missfam3", "react_incar_brace_loop_f", 4f, -4f, -1, 17, 0, 0, 0, 0);
						}
						iParam2->f_13 = 1;
					}
					if (iParam3 == 1)
					{
						iParam2->f_13 = 0;
						iParam2->f_11 = 2;
					}
					else if (iLocal_3687 >= 3)
					{
						iParam2->f_13 = 0;
						iParam2->f_11 = 4;
					}
					break;
				
				case 2:
					if (iParam2->f_13 == 0)
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "missfam3", "react_incar_bumps_loop_f", 3))
						{
							TASK::TASK_PLAY_ANIM(iParam0, "missfam3", "react_incar_bumps_loop_f", 4f, -4f, -1, 17, 0, 0, 0, 0);
						}
						iParam2->f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(2000, 3000));
						iParam2->f_13 = 1;
					}
					if (iParam3 == 1)
					{
						if ((MISC::GET_GAME_TIMER() - iParam2->f_7) > 0)
						{
							iParam2->f_13 = 0;
							iParam2->f_11 = 3;
						}
					}
					else
					{
						iParam2->f_13 = 0;
						iParam2->f_11 = 1;
					}
					break;
				
				case 3:
					if (iParam2->f_13 == 0)
					{
						TASK::TASK_PLAY_ANIM(iParam0, "missfam3", "incar_lookbehind_idle_passenger", 4f, -4f, -1, 17, 0, 0, 0, 0);
						iParam2->f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 1750));
						iParam2->f_13 = 1;
					}
					if (iParam2->f_13 == 1)
					{
						if ((MISC::GET_GAME_TIMER() - iParam2->f_7) > 0)
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "missfam3", "incar_lookbehind_idle_passenger", 3))
							{
								if (iParam3 == 1)
								{
									iParam2->f_13 = 0;
									iParam2->f_11 = 2;
								}
								else
								{
									iParam2->f_13 = 0;
									iParam2->f_11 = 1;
								}
							}
						}
					}
					break;
				
				case 4:
					if (iParam2->f_13 == 0)
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "missfam3", "react_incar_brace_exit_f", 3))
						{
							TASK::TASK_PLAY_ANIM(iParam0, "missfam3", "react_incar_brace_exit_f", 4f, -4f, -1, 16, 0, 0, 0, 0);
						}
						iParam2->f_13 = 1;
					}
					if (iLocal_3685 == 1)
					{
						iParam2->f_13 = 0;
						iParam2->f_11++;
					}
					break;
				
				case 5:
					if (iParam2->f_13 == 0)
					{
						func_272(PLAYER::PLAYER_PED_ID(), -1, 10000, 0);
						func_272(Local_3106, 0, 10500, 0);
						iParam2->f_13 = 1;
					}
					break;
				}
			}
	}
}

void func_362()//Position - 0x214F6
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_3142))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_3142))
		{
			switch (Local_3142.f_11)
			{
				case 0:
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3142, "missfam3", "coach_idle", 3))
					{
						TASK::TASK_PLAY_ANIM(Local_3142, "missfam3", "coach_idle", 1000f, -1000f, -1, 1, 0, 0, 0, 0);
					}
					Local_3142.f_11++;
					break;
				
				case 1:
					if (bLocal_3690 == 1)
					{
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3677))
						{
							TASK::CLEAR_PED_TASKS(Local_3142);
							iLocal_3677 = PED::CREATE_SYNCHRONIZED_SCENE(-1014.525f, 654.25f, 156.175f, 0f, 0f, -103.32f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_3142, iLocal_3677, "missfam3", "argument_outro_coach", 1000f, -1000f, 0, 0, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_3677, 0.6125f);
						}
						Local_3142.f_11++;
					}
					break;
				
				case 2:
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3677))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3677) > 0.95f)
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_3142, -1000f, 1);
							TASK::CLEAR_PED_TASKS(Local_3142);
							GlobalFunc_2901(Local_3142, -1021.589f, 663.7698f, 155.2747f, 178.532f, 0, 0, 0);
							Local_3142.f_11++;
						}
					}
					break;
				
				case 3:
					if (iLocal_3687 >= 2)
					{
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3677))
						{
							TASK::CLEAR_PED_TASKS(Local_3142);
							iLocal_3677 = PED::CREATE_SYNCHRONIZED_SCENE(-1034f, 662.1f, 156.1f, 0f, 0f, -165.96f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_3142, iLocal_3677, "missfam3", "argument_outro_coach", 1000f, -1000f, 0, 0, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_3677, 0.83f);
							Local_3142.f_11++;
						}
					}
					break;
				
				case 4:
					if (!PED::IS_PED_INJURED(Local_3142))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3677))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3677) > 0.98f)
							{
								ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_3142, -1000f, 1);
								TASK::CLEAR_PED_TASKS(Local_3142);
								PED::DELETE_PED(&Local_3142);
								Local_3142.f_11++;
							}
						}
					}
					break;
				}
			}
	}
}

int func_363(int iParam0)//Position - 0x21715
{
	switch (*iParam0)
	{
		case 0:
			if (GlobalFunc_5927("fam_3_mcs_1", 1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3200, 0))
				{
					if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_3200, 0))
					{
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(Local_3200, 0, 0, 0f);
					}
					if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_3200, 1))
					{
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(Local_3200, 1, 0, 0f);
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3200, "Fam3_tow_truck", 0, joaat("bison2"), 0);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_3200, 1, 1);
				}
				if (!PED::IS_PED_INJURED(Local_3106))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3106, "Franklin", 0, GlobalFunc_4917(1), 0);
				}
				if (!PED::IS_PED_INJURED(Local_3142))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3142, "TennisCoach", 0, joaat("cs_tenniscoach"), 0);
				}
				GlobalFunc_8380(1, 1, 1, 0);
				HUD::CLEAR_HELP(1);
				HUD::CLEAR_PRINTS();
				CUTSCENE::START_CUTSCENE(2048);
				RECORDING::_0x48621C9FCA3EBD28(4);
				*iParam0++;
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", PLAYER::PLAYER_PED_ID(), 0);
				}
				if (!PED::IS_PED_INJURED(Local_3106))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", Local_3106, 0);
				}
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("TennisCoach", 3, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("TennisCoach", 4, 1, 0, 0);
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FAM3_ARRIVE_HOUSE");
				CAM::STOP_GAMEPLAY_HINT(1);
				MISC::CLEAR_AREA(Local_3124.f_2, 100f, 1, 0, 0, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_3124.f_2, 100f, 0, 0, 0, 0, 0);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*iParam0++;
			}
			break;
		
		case 2:
			PHYSICS::ROPE_LOAD_TEXTURES();
			STREAMING::REQUEST_ANIM_DICT("missfam3");
			STREAMING::REQUEST_MODEL(Local_3328.f_7);
			STREAMING::REQUEST_MODEL(Local_3312.f_7);
			STREAMING::REQUEST_MODEL(Local_3336.f_7);
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				CAM::STOP_GAMEPLAY_HINT(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (iLocal_3732 == 0)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (STREAMING::HAS_ANIM_DICT_LOADED("missfam3"))
						{
							TASK::TASK_PLAY_ANIM_ADVANCED(PLAYER::PLAYER_PED_ID(), "missfam3", "argument_outro_michael", -993.2f, 646.188f, 139.52f, 0f, 0f, -93.24f, 1000f, -4f, -1, 299010, 0, 2, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				if (iLocal_3732 == 0)
				{
					if (!PED::IS_PED_INJURED(Local_3106))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3200, 0))
						{
							PED::SET_PED_INTO_VEHICLE(Local_3106, Local_3200, 0);
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Fam3_tow_truck", 0))
			{
				if (iLocal_3732 == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3200, 0))
					{
						VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_3200, 5, 0, 1);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("TennisCoach", 0))
			{
				if (!PED::IS_PED_INJURED(Local_3142))
				{
					TASK::TASK_PLAY_ANIM(Local_3142, "missfam3", "coach_idle", 4f, -4f, -1, 1, 0, 0, 0, 0);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3312))
			{
				if (func_95(&Local_3312, 1))
				{
					ENTITY::SET_ENTITY_COLLISION(Local_3312, 1, 0);
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_3312, PLAYER::PLAYER_PED_ID(), 0);
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_3200, Local_3312, 0);
					ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_3312, 0);
					ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(Local_3312, 0);
				}
			}
			if (iLocal_3770 == 0)
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() > 39500)
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("FAM3_HOOKED_UP"))
					{
						iLocal_3770 = 1;
					}
				}
			}
			if (iLocal_3683 == 0)
			{
				if (iLocal_3732 == 0)
				{
					if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 58000f)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_3328))
						{
							if (func_95(&Local_3328, 1))
							{
								ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_3328, 0);
								ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(Local_3328, 0);
							}
						}
						if (!PHYSICS::DOES_ROPE_EXIST(&uLocal_3682))
						{
							PHYSICS::ROPE_LOAD_TEXTURES();
							if (PHYSICS::ROPE_ARE_TEXTURES_LOADED())
							{
								uLocal_3682 = PHYSICS::ADD_ROPE(-1017.985f, 660.4285f, 147.4662f, 0f, 0f, 0f, 28f, 1, -1f, 0.5f, 0.5f, 0, 1, 1, 1065353216, 0, 0);
								PHYSICS::LOAD_ROPE_DATA(uLocal_3682, sLocal_3041);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_3320) && PHYSICS::DOES_ROPE_EXIST(&uLocal_3682))
						{
							if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_3320))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3200, 0))
								{
									VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_3200, 1);
									PHYSICS::ATTACH_ENTITIES_TO_ROPE(uLocal_3682, Local_3320, Local_3200, Local_3320.f_1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_3200, 0f, -2.1f, 0.6f), 35f, 0, 0, 0, 0);
									iLocal_3683 = 1;
								}
							}
						}
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				GlobalFunc_8380(0, 1, 1, 0);
				if (iLocal_3732 == 1)
				{
					if ((PHYSICS::ROPE_ARE_TEXTURES_LOADED() && STREAMING::HAS_ANIM_DICT_LOADED("missfam3")) && STREAMING::HAS_MODEL_LOADED(Local_3312.f_7))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3200, 0))
						{
							VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_3200, 1);
							VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_3200, 5, 0, 0);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3200);
						}
						if (iLocal_3683 == 0)
						{
							if (!ENTITY::DOES_ENTITY_EXIST(Local_3328))
							{
								if (func_95(&Local_3328, 1))
								{
									ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_3328, 0);
									ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(Local_3328, 0);
								}
							}
							if (!PHYSICS::DOES_ROPE_EXIST(&uLocal_3682))
							{
								if (PHYSICS::ROPE_ARE_TEXTURES_LOADED())
								{
									uLocal_3682 = PHYSICS::ADD_ROPE(-1017.985f, 660.4285f, 147.4662f, 0f, 0f, 0f, 28f, 1, -1f, 0.5f, 0.5f, 0, 1, 1, 1065353216, 0, 0);
									PHYSICS::LOAD_ROPE_DATA(uLocal_3682, sLocal_3041);
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_3320) && PHYSICS::DOES_ROPE_EXIST(&uLocal_3682))
							{
								if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_3320))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3200, 0))
									{
										PHYSICS::ATTACH_ENTITIES_TO_ROPE(uLocal_3682, Local_3320, Local_3200, Local_3320.f_1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_3200, 0f, -2.1f, 0.6f), 35f, 0, 0, 0, 0);
										iLocal_3683 = 1;
									}
								}
							}
						}
						if (!ENTITY::DOES_ENTITY_EXIST(Local_3312))
						{
							if (func_95(&Local_3312, 1))
							{
								ENTITY::SET_ENTITY_COLLISION(Local_3312, 1, 0);
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_3312, PLAYER::PLAYER_PED_ID(), 0);
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_3200, Local_3312, 0);
								ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_3312, 0);
								ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(Local_3312, 0);
							}
						}
						SYSTEM::WAIT(1000);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (STREAMING::HAS_ANIM_DICT_LOADED("missfam3"))
							{
								TASK::TASK_PLAY_ANIM_ADVANCED(PLAYER::PLAYER_PED_ID(), "missfam3", "argument_outro_michael", -993.2f, 646.188f, 139.52f, 0f, 0f, -93.24f, 1000f, -4f, -1, 299010, 0, 2, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
							}
						}
						if (!PED::IS_PED_INJURED(Local_3106))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3200, 0))
							{
								if (!PED::IS_PED_IN_VEHICLE(Local_3106, Local_3200, 0))
								{
									PED::SET_PED_INTO_VEHICLE(Local_3106, Local_3200, 0);
								}
							}
						}
						CAM::STOP_GAMEPLAY_HINT(1);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							CAM::DO_SCREEN_FADE_IN(800);
						}
						*iParam0++;
					}
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfam3", "argument_outro_michael", 3))
				{
					*iParam0++;
				}
			}
			else if (iLocal_3732 == 0)
			{
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
					iLocal_3732 = 1;
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfam3", "argument_outro_michael", 3))
				{
					CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
					PAD::DISABLE_CONTROL_ACTION(1, 0, 1);
					if (!func_88("FAM3_HKD"))
					{
						if (GlobalFunc_10626(&uLocal_3471, "FAM3AUD", "FAM3_HKD", "FAM3_HKD_3", 7, 0, 0))
						{
							func_84("FAM3_HKD", 1);
						}
					}
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "missfam3", "argument_outro_michael") >= 0.95f)
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
						PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
						PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 500, 0, 1, 0);
					}
					else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "missfam3", "argument_outro_michael") >= 0.9f)
					{
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
						{
							if (iLocal_3805 == 0)
							{
								GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
								iLocal_3805 = 1;
							}
						}
					}
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_3312))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_3312))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3200, 0))
							{
								ENTITY::SET_ENTITY_COLLISION(Local_3312, 1, 0);
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_3312, PLAYER::PLAYER_PED_ID(), 1);
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_3200, Local_3312, 0);
							}
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_3336))
					{
						if (func_95(&Local_3336, 1))
						{
							ENTITY::SET_ENTITY_COLLISION(Local_3336, 1, 0);
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_3336, Local_3200, 0);
						}
					}
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 247.8959f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-15f, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3312.f_7);
					AUDIO::TRIGGER_MUSIC_EVENT("FAM3_TRUCK_PULL");
					RECORDING::_0x81CBAE94390F9F89();
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_364(int iParam0)//Position - 0x21F74
{
	MISC::SET_BIT(&(Local_3434.f_13), 20);
	fLocal_3739 = GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_3142, 1);
	func_445(&(Local_3244.f_7));
	func_395(&(Local_3142.f_11));
	func_394(Local_3200, Local_3222, &iLocal_3727, &(Local_3142.f_7), 1000);
	GlobalFunc_2216(Local_3222.f_1, Local_3222, 250f, 0.7f, iLocal_3726);
	switch (GlobalFunc_2780())
	{
		case 0:
			func_389("FAM3_MST1");
			break;
		
		case 1:
			func_389("FAM3_FST1");
			break;
	}
	func_278(&Local_3077);
	func_278(&Local_3085);
	if (iLocal_3706 == 0)
	{
		if (iLocal_3705 == 0)
		{
			if (HUD::DOES_BLIP_EXIST(Local_3434.f_5))
			{
				PATHFIND::SET_GPS_DISABLED_ZONE((-742.6803f - 48f), (539.21f - 48f), (115.3406f - 18f), (-742.6803f + 48f), (539.21f + 48f), (115.3406f + 18f));
				iLocal_3705 = 1;
			}
		}
		else
		{
			if (!HUD::DOES_BLIP_EXIST(Local_3434.f_5))
			{
				PATHFIND::SET_GPS_DISABLED_ZONE(0f, 0f, 0f, 0f, 0f, 0f);
				iLocal_3705 = 0;
			}
			if (HUD::DOES_BLIP_EXIST(Local_3434.f_5))
			{
				if (((((((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -742.6803f, 539.21f, 115.3406f, 48f, 48f, 18f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1184.89f, 709.6f, 132.38f, -1133.41f, 679.84f, 161.1f, 36f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1062.28f, 662.22f, 125.02f, -1138.02f, 681.84f, 161.37f, 36f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1065.68f, 661.26f, 121.1f, -976.84f, 641.13f, 153.91f, 36f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -894.49f, 655.77f, 113.47f, -985.13f, 640.53f, 154.35f, 36f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -898.85f, 657.44f, 113.6f, -823.46f, 645.49f, 144.01f, 36f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -770.93f, 551.06f, 101.91f, -827.24f, 649.55f, 144.36f, 36f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -770.974f, 557.36f, 102.67f, -700.16f, 501.75f, 124.6f, 36f, 0, 1, 0))
				{
					PATHFIND::SET_GPS_DISABLED_ZONE(0f, 0f, 0f, 0f, 0f, 0f);
					iLocal_3706 = 1;
				}
			}
		}
	}
	switch (*iParam0)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3200, 0))
			{
				if (!PED::IS_PED_INJURED(Local_3106))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_3106, Local_3200, 0) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_3106))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_3106, -1794415470) != 1)
						{
							TASK::TASK_ENTER_VEHICLE(Local_3106, Local_3200, 20000, 0, 2f, 262145, 0);
						}
					}
					PED::SET_PED_CONFIG_FLAG(Local_3106, 29, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3106, 1);
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3200, 0) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) != 1)
						{
							GlobalFunc_2901(PLAYER::PLAYER_PED_ID(), Local_3124.f_2, Local_3124.f_5, 0, 0, 0);
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -530524, 0, 0, 0);
							TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3200, 20000, -1, 2f, 131073, 0);
						}
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3106, 1);
				}
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				SYSTEM::WAIT(150);
				CAM::DO_SCREEN_FADE_IN(800);
			}
			RECORDING::_0x293220DA1B46CEBC(0f, 7f, 4);
			*iParam0++;
			break;
		
		case 1:
			GlobalFunc_502();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3200, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3200, 0))
				{
					if (HUD::DOES_BLIP_EXIST(Local_3200.f_1))
					{
						if (GlobalFunc_663("FAM3_GIT", 0, 0) || GlobalFunc_663("FAM3_GBIT", 0, 0))
						{
							HUD::CLEAR_PRINTS();
						}
						HUD::REMOVE_BLIP(&(Local_3200.f_1));
					}
					if (iLocal_3773 == 0)
					{
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_FOLLOW_THE_COACH"))
						{
							AUDIO::START_AUDIO_SCENE("FAMILY_3_FOLLOW_THE_COACH");
						}
						iLocal_3773 = 1;
					}
					if (iLocal_3726 == 0)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3222, 0))
						{
							if (!HUD::DOES_BLIP_EXIST(Local_3222.f_1))
							{
								Local_3222.f_1 = GlobalFunc_6783(Local_3222, 1, 0);
							}
							if (HUD::DOES_BLIP_EXIST(Local_3222.f_1))
							{
								if (!func_88("FAM3_FTC"))
								{
									HUD::CLEAR_PRINTS();
									func_264("FAM3_FTC", 7500, 1);
								}
							}
						}
					}
				}
				else
				{
					if (!HUD::DOES_BLIP_EXIST(Local_3200.f_1))
					{
						Local_3200.f_1 = GlobalFunc_6783(Local_3200, 0, 0);
					}
					if (HUD::DOES_BLIP_EXIST(Local_3200.f_1))
					{
						if (!func_88(&Local_3073))
						{
							if (iLocal_3773 == 0)
							{
								HUD::CLEAR_PRINTS();
								func_264(&Local_3073, 7500, 1);
							}
						}
						else if (!func_88("FAM3_GBIT"))
						{
							if (iLocal_3773 == 1)
							{
								HUD::CLEAR_PRINTS();
								func_264("FAM3_GBIT", 7500, 1);
							}
						}
					}
					if (HUD::DOES_BLIP_EXIST(Local_3222.f_1))
					{
						HUD::REMOVE_BLIP(&(Local_3222.f_1));
					}
				}
			}
			if (iLocal_3725 == 1)
			{
				if (iLocal_3772 == 0)
				{
					if (fLocal_3741 >= 7500f)
					{
						iLocal_3772 = 1;
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3200, 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3200, 0))
					{
						if (iLocal_3772 == 1)
						{
							GlobalFunc_10692(&uLocal_3459, Local_3222, GlobalFunc_1078(GlobalFunc_6696(0), "FAM3_HCAM", ""), 0, 1, 1, 1);
						}
						if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
						{
							if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_FOCUS_ON_COACH"))
							{
								AUDIO::START_AUDIO_SCENE("FAMILY_3_FOCUS_ON_COACH");
							}
						}
						else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_FOCUS_ON_COACH"))
						{
							AUDIO::STOP_AUDIO_SCENE("FAMILY_3_FOCUS_ON_COACH");
						}
					}
					else if (func_88("FAM3_HCAM"))
					{
						if (GlobalFunc_74("FAM3_HCAM"))
						{
							HUD::CLEAR_HELP(1);
						}
					}
				}
				if (iLocal_3726 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_3244))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_3244))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(Local_3200, Local_3244, Local_3045, 0, 1, 0))
							{
								GlobalFunc_4948(&uLocal_3459, 0, 0);
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_FOCUS_ON_COACH"))
								{
									AUDIO::STOP_AUDIO_SCENE("FAMILY_3_FOCUS_ON_COACH");
								}
								iLocal_3725 = 0;
								iLocal_3726 = 1;
								iLocal_3103 = 1;
								if (GlobalFunc_663("FAM3_FTC", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
							}
						}
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_3200, -1381.268f, 474.7865f, 103.0548f, -1390.82f, 457.3811f, 110.4862f, 8f, 0, 1, 0))
					{
						GlobalFunc_4948(&uLocal_3459, 0, 0);
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_FOCUS_ON_COACH"))
						{
							AUDIO::STOP_AUDIO_SCENE("FAMILY_3_FOCUS_ON_COACH");
						}
						iLocal_3725 = 0;
						iLocal_3726 = 1;
						iLocal_3103 = 1;
						if (GlobalFunc_663("FAM3_FTC", 0, 0))
						{
							HUD::CLEAR_PRINTS();
						}
						if (GlobalFunc_116(0))
						{
							GlobalFunc_6685(1);
						}
					}
					if (fLocal_3739 > 250f)
					{
						if (HUD::DOES_BLIP_EXIST(Local_3222.f_1))
						{
							HUD::REMOVE_BLIP(&(Local_3222.f_1));
						}
						GlobalFunc_4948(&uLocal_3459, 0, 0);
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_FOCUS_ON_COACH"))
						{
							AUDIO::STOP_AUDIO_SCENE("FAMILY_3_FOCUS_ON_COACH");
						}
						iLocal_3725 = 0;
						iLocal_3726 = 1;
						iLocal_3103 = 0;
						if (GlobalFunc_663("FAM3_FTC", 0, 0))
						{
							HUD::CLEAR_PRINTS();
						}
					}
				}
			}
			else if (iLocal_3726 == 1)
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_FOLLOW_THE_COACH"))
				{
					AUDIO::STOP_AUDIO_SCENE("FAMILY_3_FOLLOW_THE_COACH");
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_FIND_THE_COACH"))
				{
					AUDIO::START_AUDIO_SCENE("FAMILY_3_FIND_THE_COACH");
				}
				switch (iLocal_3103)
				{
					case 1:
						break;
					
					case 0:
						break;
				}
				if (func_88("FAM3_LOST"))
				{
					if (HUD::DOES_BLIP_EXIST(Local_3222.f_1))
					{
						HUD::REMOVE_BLIP(&(Local_3222.f_1));
					}
					if (GlobalFunc_5672("FAM3_LOST"))
					{
						iLocal_3723 = 1;
						if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() == 1)
						{
							if (!HUD::DOES_BLIP_EXIST(Local_3434.f_5))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3200, 0))
								{
									if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3200))
									{
										if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
										{
											iLocal_3708 = 1;
										}
									}
								}
							}
						}
					}
					else if (iLocal_3723 == 1)
					{
						*iParam0++;
					}
				}
			}
			if (iLocal_3708 == 1)
			{
				func_366(&Local_3434, Local_3048, 4f, 8f, 2f, 1, Local_3106, Local_3200, &Local_3077, "CMN_FLEAVE", "", &Local_3085, 0, 1, 1, -1);
			}
			break;
		
		case 2:
			STREAMING::REQUEST_ANIM_DICT("missfam3");
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfam3", "shout_out_window_michael", 3) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1273030092) == 1)
				{
					PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
				}
			}
			if (iLocal_3728 == 0)
			{
				if (((HUD::DOES_BLIP_EXIST(Local_3434.f_5) && GlobalFunc_2522(PLAYER::PLAYER_PED_ID(), Local_3200)) && GlobalFunc_2522(Local_3106, Local_3200)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_3200, -1116.003f, 693.0043f, 140.4966f, -1040.929f, 667.3976f, 157.2546f, 36f, 0, 1, 0))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(Local_3200, -1054.042f, 681.1791f, 152.7736f, 20f, 16f, 12f, 0, 1, 0))
					{
						GlobalFunc_7632(1);
						SYSTEM::SETTIMERA(0);
						CAM::SET_GAMEPLAY_COORD_HINT(Local_3054, -1, 9500, 2000, -87780624);
						TASK::TASK_VEHICLE_MISSION_COORS_TARGET(PLAYER::PLAYER_PED_ID(), Local_3200, -991.6547f, 645.3821f, 140.6425f, 4, 6f, 8, 1f, 2f, 0);
					}
					AUDIO::TRIGGER_MUSIC_EVENT("FAM3_BALCONY");
					iLocal_3728 = 1;
				}
				else if ((((!HUD::DOES_BLIP_EXIST(Local_3434.f_5) && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && GlobalFunc_2522(PLAYER::PLAYER_PED_ID(), Local_3200)) && GlobalFunc_2522(Local_3106, Local_3200)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_3200, -1116.003f, 693.0043f, 140.4966f, -1040.929f, 667.3976f, 157.2546f, 36f, 0, 1, 0))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FAM3_BALCONY");
					iLocal_3728 = 1;
				}
			}
			else if (iLocal_3728 == 1)
			{
				if (iLocal_3729 == 0)
				{
					if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					}
					if ((HUD::DOES_BLIP_EXIST(Local_3434.f_5) && GlobalFunc_2522(PLAYER::PLAYER_PED_ID(), Local_3200)) && GlobalFunc_2522(Local_3106, Local_3200))
					{
						if (func_88("FAM3_SPOT"))
						{
							if (iLocal_3730 == 1)
							{
								VEHICLE::REMOVE_VEHICLE_WINDOW(Local_3200, 0);
								TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfam3", "shout_out_window_michael", 4f, -4f, -1, 48, 0, 0, 0, 0);
								TASK::TASK_PLAY_ANIM(Local_3106, "missfam3", "shout_out_window_franklin", 4f, -1.5f, -1, 48, 0, 0, 0, 0);
								TASK::TASK_PLAY_ANIM_ADVANCED(Local_3142, "missfam3", "shout_out_window_coach", -1034.63f, 654.114f, 156.08f, 0f, 0f, 85f, 4f, -4f, -1, 5128, 0, 2, 0);
								TASK::TASK_LOOK_AT_ENTITY(Local_3142, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								RECORDING::_0x293220DA1B46CEBC(7f, 7f, 4);
								iLocal_3729 = 1;
							}
						}
					}
				}
				else if (iLocal_3729 == 1)
				{
					if (func_88("FAM3_BALC"))
					{
						if (iLocal_3731 == 0)
						{
							if (GlobalFunc_5672("FAM3_BALC"))
							{
								if (HUD::DOES_BLIP_EXIST(Local_3434.f_5) && ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfam3", "shout_out_window_michael", 3))
								{
									if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >= 0 || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_3200, -1116.163f, 681.8411f, 135.5691f, -1066.323f, 665.0233f, 149.0627f, 24f, 0, 1, 0))
									{
										if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_FIND_THE_COACH"))
										{
											AUDIO::STOP_AUDIO_SCENE("FAMILY_3_FIND_THE_COACH");
										}
										if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_ARRIVE_AT_HOUSE"))
										{
											AUDIO::START_AUDIO_SCENE("FAMILY_3_ARRIVE_AT_HOUSE");
										}
										iLocal_3731 = 1;
									}
								}
							}
						}
					}
					if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
						{
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
						}
						if (((SYSTEM::TIMERA() > 9500 || (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3142, "missfam3", "shout_out_window_coach", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_3142, "missfam3", "shout_out_window_coach") > 0.8f)) || (func_88("FAM3_BALC") && !GlobalFunc_111())) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_3200, -1056.989f, 652.4657f, 140.0272f, -1047.219f, 668.4141f, 153.1514f, 16f, 0, 1, 0))
						{
							GlobalFunc_7632(0);
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfam3", "shout_out_window_michael", 3))
								{
									TASK::CLEAR_PED_SECONDARY_TASK(PLAYER::PLAYER_PED_ID());
								}
							}
							if (!PED::IS_PED_INJURED(Local_3106))
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3106, "missfam3", "shout_out_window_franklin", 3))
								{
									TASK::CLEAR_PED_SECONDARY_TASK(Local_3106);
								}
							}
							CAM::STOP_GAMEPLAY_HINT(0);
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_ARRIVE_AT_HOUSE"))
							{
								AUDIO::STOP_AUDIO_SCENE("FAMILY_3_ARRIVE_AT_HOUSE");
							}
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_FIND_THE_COACH"))
							{
								AUDIO::STOP_AUDIO_SCENE("FAMILY_3_FIND_THE_COACH");
							}
							if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_DRIVE_IN_TO_POSITION"))
							{
								AUDIO::START_AUDIO_SCENE("FAMILY_3_DRIVE_IN_TO_POSITION");
							}
						}
					}
				}
			}
			if (HUD::DOES_BLIP_EXIST(Local_3200.f_1))
			{
				if (HUD::GET_BLIP_FROM_ENTITY(Local_3200) == Local_3200.f_1)
				{
					HUD::REMOVE_BLIP(&(Local_3200.f_1));
				}
			}
			if (func_366(&Local_3434, Local_3048, 4f, 8f, 2f, 1, Local_3106, Local_3200, &Local_3077, "CMN_FLEAVE", "", &Local_3085, 0, 1, 1, -1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3200, 0))
				{
					if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_3200))
					{
						if (CAM::DOES_CAM_EXIST(uLocal_3679))
						{
							CAM::SET_CAM_ACTIVE(uLocal_3679, 0);
							CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
							CAM::DESTROY_CAM(uLocal_3679, 0);
						}
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfam3", "shout_out_window_michael", 3))
							{
								TASK::CLEAR_PED_SECONDARY_TASK(PLAYER::PLAYER_PED_ID());
							}
						}
						if (!PED::IS_PED_INJURED(Local_3106))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3106, "missfam3", "shout_out_window_franklin", 3))
							{
								TASK::CLEAR_PED_SECONDARY_TASK(Local_3106);
							}
						}
						if (!PED::IS_PED_INJURED(Local_3142))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3142, "missfam3", "shout_out_window_coach", 3))
							{
								TASK::CLEAR_PED_TASKS(Local_3142);
							}
							TASK::TASK_CLEAR_LOOK_AT(Local_3142);
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_3288))
						{
							OBJECT::DELETE_OBJECT(&Local_3288);
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_3296))
						{
							OBJECT::DELETE_OBJECT(&Local_3296);
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_3344))
						{
							OBJECT::DELETE_OBJECT(&Local_3344);
						}
						func_111(&Local_3222, 1, 1);
						GlobalFunc_4935();
						GlobalFunc_5105();
						SYSTEM::SETTIMERA(0);
						*iParam0++;
					}
				}
			}
			if (GlobalFunc_331() || GlobalFunc_2233())
			{
				if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("fam_3_mcs_1") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					CUTSCENE::REMOVE_CUTSCENE();
				}
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_3048, 1) < 100f)
			{
				CUTSCENE::REQUEST_CUTSCENE("fam_3_mcs_1", 8);
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", PLAYER::PLAYER_PED_ID(), 0);
					}
					if (!PED::IS_PED_INJURED(Local_3106))
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", Local_3106, 0);
					}
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("TennisCoach", 3, 1, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("TennisCoach", 4, 1, 0, 0);
				}
			}
			else if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("fam_3_mcs_1") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1036.48f, 671.6424f, 155.4577f, 4f, 7f, 4.5f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1006.947f, 667.2821f, 154.9174f, 5f, 8f, 4.5f, 0, 1, 0))
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
			}
			break;
		
		case 3:
			if (GlobalFunc_530(Local_3200, 3f, 1, 1056964608, 0, 1))
			{
				if ((!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() || !GlobalFunc_111()) || SYSTEM::TIMERA() > 5000)
				{
					func_365(&Local_3160, 1, 1, 1);
					func_111(&Local_3244, 1, 1);
					VEHICLE::REMOVE_VEHICLE_RECORDING(Local_3244.f_9, sLocal_3060);
					AUDIO::STOP_AUDIO_SCENE("FAMILY_3_FIND_THE_COACH");
					AUDIO::STOP_AUDIO_SCENE("FAMILY_3_ARRIVE_AT_HOUSE");
					AUDIO::STOP_AUDIO_SCENE("FAMILY_3_DRIVE_IN_TO_POSITION");
					CAM::STOP_GAMEPLAY_HINT(0);
					RECORDING::_0x293220DA1B46CEBC(7f, 0f, 4);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_365(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x22F48
{
	if (iParam1 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (iParam2 == 1)
			{
				if (PED::IS_PED_INJURED(*iParam0))
				{
					if (ENTITY::IS_ENTITY_DEAD(*iParam0))
					{
						PED::REMOVE_PED_DEFENSIVE_AREA(*iParam0, 0);
					}
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
					if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
					{
						HUD::REMOVE_BLIP(&(iParam0->f_1));
					}
				}
			}
			else if (iParam2 == 0)
			{
				if (!PED::IS_PED_INJURED(*iParam0))
				{
					if (!PED::IS_PED_INJURED(*iParam0))
					{
						if (PED::IS_PED_GROUP_MEMBER(*iParam0, GlobalFunc_468()))
						{
							PED::REMOVE_PED_FROM_GROUP(*iParam0);
						}
					}
					PED::SET_PED_KEEP_TASK(*iParam0, iParam3);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
					if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
					{
						HUD::REMOVE_BLIP(&(iParam0->f_1));
					}
				}
			}
		}
	}
	else if (iParam1 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (!PED::IS_PED_INJURED(*iParam0))
			{
				if (PED::IS_PED_GROUP_MEMBER(*iParam0, GlobalFunc_468()))
				{
					PED::REMOVE_PED_FROM_GROUP(*iParam0);
				}
			}
			if (!PED::IS_PED_INJURED(*iParam0))
			{
				PED::REMOVE_PED_DEFENSIVE_AREA(*iParam0, 0);
			}
			PED::DELETE_PED(iParam0);
		}
		if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
		{
			HUD::REMOVE_BLIP(&(iParam0->f_1));
		}
		iParam0->f_7 = 0;
		iParam0->f_9 = 0;
		iParam0->f_10 = 0;
		iParam0->f_8 = 0;
		iParam0->f_11 = 0;
		iParam0->f_12 = 0;
		iParam0->f_15 = 0f;
		iParam0->f_13 = 0;
		iParam0->f_14 = 0;
		iParam0->f_17 = 0;
	}
}

bool func_366(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, int iParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)//Position - 0x23082
{
	return func_367(uParam0, Param1, Param4, iParam7, iParam8, 0, 0, iParam9, sParam10, sParam11, sParam11, sParam11, sParam11, sParam12, sParam13, bParam14, bParam15, bParam16, iParam17);
}

int func_367(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, char* sParam17, char* sParam18, bool bParam19, bool bParam20, bool bParam21, int iParam22)//Position - 0x230B6
{
	return func_219(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 5, uParam8, iParam9, iParam10, iParam11, sParam12, sParam13, sParam14, sParam15, sParam16, sParam17, bParam19, bParam20, sParam18, 0, 0, bParam21, iParam22, 0, 0, 0, 1, 1065353216);
}






















void func_389(char* sParam0)//Position - 0x23F7E
{
	if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(Local_3106)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3200, 0))
	{
		if (iLocal_3725 == 1)
		{
			if (iLocal_3742 == 0)
			{
				if (func_392(fLocal_3739, 175f))
				{
					if (iLocal_3722 == 0)
					{
						if (GlobalFunc_111())
						{
							Local_3710 = { GlobalFunc_514() };
							GlobalFunc_4956();
						}
						if (!GlobalFunc_5172(&Local_3434, 0))
						{
							if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_WARN", 9, 0, 0, 0))
							{
								iLocal_3722 = 1;
							}
						}
					}
				}
				else if (!func_88(sParam0))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(Local_3106, Local_3200) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3200))
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_3434, 1))
							{
								if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", sParam0, 7, 0, 0, 0))
								{
									iLocal_3735 = 0;
									func_84(sParam0, 1);
								}
							}
						}
					}
				}
				else if (iLocal_3722 == 1)
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10626(&uLocal_3471, "FAM3AUD", sParam0, &Local_3710, 7, 0, 0))
						{
							iLocal_3722 = 0;
						}
					}
				}
				else if (iLocal_3722 == 0)
				{
					if (!GlobalFunc_111())
					{
						Local_3106.f_9 = MISC::GET_GAME_TIMER();
						iLocal_3742 = 1;
					}
				}
			}
			else
			{
				if (!func_88("FAM3_LEFT") && !func_88("FAM3_RIGHT"))
				{
					if (fLocal_3741 > 30725f && fLocal_3741 < 33500f)
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(Local_3106, Local_3200) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3200))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_3434, 1))
								{
									if (iLocal_3727 == 1)
									{
										if (fLocal_3739 < 75f)
										{
											if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_3200, -1076.606f, 431.1891f, 63.72191f, -1077.557f, 345.4051f, 78.3798f, 24f, 0, 1, 0))
											{
												if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_LEFT", 7, 0, 0, 0))
												{
													func_84("FAM3_LEFT", 1);
													Local_3106.f_9 = MISC::GET_GAME_TIMER();
												}
											}
											else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_3200, -1019.407f, 397.1515f, 62.30875f, -1064.46f, 394.3105f, 79.96735f, 24f, 0, 1, 0))
											{
												if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_RIGHT", 7, 0, 0, 0))
												{
													func_84("FAM3_RIGHT", 1);
													Local_3106.f_9 = MISC::GET_GAME_TIMER();
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (iLocal_3799 == 0)
				{
					if (GlobalFunc_2522(PLAYER::PLAYER_PED_ID(), Local_3200))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1288.666f, 459.2319f, 94.68425f, -1392.72f, 466.8967f, 113.1189f, 32f, 0, 1, 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_3244) && !ENTITY::IS_ENTITY_DEAD(Local_3244))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3244) && !VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(Local_3244))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3244) < 8350f)
									{
										GlobalFunc_5105();
										iLocal_3799 = 1;
									}
								}
							}
						}
					}
				}
				if (iLocal_3799 == 0)
				{
					if (!GlobalFunc_111())
					{
						if (!GlobalFunc_5172(&Local_3434, 1))
						{
							if (GlobalFunc_2521(10000, Local_3106.f_9))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(Local_3106, Local_3200) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3200))
								{
									if (fLocal_3739 > 185f)
									{
										if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_WARN", 7, 0, 0, 0))
										{
											Local_3106.f_9 = MISC::GET_GAME_TIMER();
										}
									}
									else if (fLocal_3739 > 150f)
									{
										if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_LOSE", 7, 0, 0, 0))
										{
											Local_3106.f_9 = MISC::GET_GAME_TIMER();
										}
									}
									else if (fLocal_3739 < 75f)
									{
										if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_SEE", 7, 0, 0, 0))
										{
											Local_3106.f_9 = MISC::GET_GAME_TIMER();
										}
									}
									else if (iLocal_3727 == 1)
									{
										if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_AHEAD", 7, 0, 0, 0))
										{
											Local_3106.f_9 = MISC::GET_GAME_TIMER();
										}
									}
									else if (iLocal_3727 == 0)
									{
										if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_LOSE", 7, 0, 0, 0))
										{
											Local_3106.f_9 = MISC::GET_GAME_TIMER();
										}
									}
								}
							}
						}
					}
				}
				if (iLocal_3799 == 1)
				{
					if (iLocal_3800 == 0)
					{
						if (!GlobalFunc_111())
						{
							GlobalFunc_10691(&uLocal_3471, "FAM3AUD", "FAM3_VAN", 7, 0, 0, 0, 0);
							iLocal_3800 = 1;
						}
					}
				}
			}
		}
		else if (iLocal_3726 == 1)
		{
			if (iLocal_3103 == 1)
			{
				if (!func_88("FAM3_VAN") && !func_88("FAM3_LOST"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_3244))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_3244))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(Local_3200, Local_3244, Local_3045, 0, 1, 0))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3244) && !VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(Local_3244))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3244) < 8350f)
									{
										if (PED::IS_PED_SITTING_IN_VEHICLE(Local_3106, Local_3200) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3200))
										{
											if (iLocal_3800 == 0)
											{
												if (!GlobalFunc_111())
												{
													if (!GlobalFunc_5172(&Local_3434, 1))
													{
														if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_VAN", 7, 0, 0, 0))
														{
															iLocal_3742 = 0;
															func_84("FAM3_VAN", 1);
														}
													}
												}
												else
												{
													GlobalFunc_4956();
												}
											}
											else
											{
												GlobalFunc_2207();
												iLocal_3742 = 0;
												func_84("FAM3_VAN", 1);
											}
										}
									}
								}
							}
						}
					}
				}
			}
			if (iLocal_3103 == 1)
			{
				if (!func_88("FAM3_VANM2") && !func_88("FAM3_LOST"))
				{
					if (iLocal_3724 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_3244) && ENTITY::DOES_ENTITY_EXIST(Local_3160))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3244, 0) && !PED::IS_PED_INJURED(Local_3160))
							{
								if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_3244, Local_3200))
								{
									if (GlobalFunc_116(0))
									{
										GlobalFunc_6685(1);
									}
									if (iLocal_3738 == 0)
									{
										if (!PED::IS_PED_INJURED(Local_3160))
										{
											GlobalFunc_5130(Local_3160, "GENERIC_CURSE_HIGH", 3);
											VEHICLE::START_VEHICLE_HORN(Local_3244, 5000, 0, 0);
											iLocal_3738 = 1;
										}
									}
									if (iLocal_3722 == 0)
									{
										if (GlobalFunc_111())
										{
											GlobalFunc_4956();
											iLocal_3735 = 0;
										}
										if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_VANM2", 8, 0, 0, 0))
										{
											iLocal_3724 = 1;
											func_84("FAM3_VANM2", 1);
										}
									}
								}
							}
						}
					}
				}
			}
			if (!func_88("FAM3_LOST"))
			{
				if (iLocal_3800 == 1)
				{
					if (!func_88("FAM3_VAN"))
					{
						GlobalFunc_5105();
					}
				}
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_5172(&Local_3434, 1))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(Local_3106, Local_3200) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3200))
						{
							if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_LOST", 9, 0, 0, 0))
							{
								RECORDING::_0x293220DA1B46CEBC(3f, 3f, 3);
								func_84("FAM3_LOST", 1);
								Local_3106.f_9 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
			}
			else
			{
				if (!func_88("FAM3_TURN"))
				{
					if (HUD::DOES_BLIP_EXIST(Local_3434.f_5))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(Local_3200, -1195.873f, 706.98f, 149.7481f, 34f, 34f, 7f, 0, 1, 0))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_3434, 1))
								{
									if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_TURN", 7, 0, 0, 0))
									{
										func_84("FAM3_LOOK", 1);
										func_84("FAM3_TURN", 1);
									}
								}
							}
							else
							{
								GlobalFunc_5105();
							}
						}
					}
				}
				if (!func_88("FAM3_FIND"))
				{
					if (HUD::DOES_BLIP_EXIST(Local_3434.f_5))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(Local_3200, -1183.073f, 704.4132f, 150.8057f, 16f, 16f, 7f, 0, 1, 0))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_3434, 1))
								{
									if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_FIND", 7, 0, 0, 0))
									{
										func_84("FAM3_LOOK", 1);
										func_84("FAM3_TURN", 1);
										func_84("FAM3_FIND", 1);
									}
								}
							}
							else
							{
								GlobalFunc_5105();
							}
						}
					}
				}
				if (!func_88("FAM3_CAR"))
				{
					if (func_88("FAM3_FIND"))
					{
						if (HUD::DOES_BLIP_EXIST(Local_3434.f_5))
						{
							if (iLocal_3727 == 1)
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_3434, 1))
									{
										if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_CAR", 7, 0, 0, 0))
										{
											func_84("FAM3_CAR", 1);
										}
									}
								}
								else
								{
									GlobalFunc_5105();
								}
							}
						}
					}
				}
				if (!func_88("FAM3_LOOK"))
				{
					if (iLocal_3103 == 1)
					{
						if (HUD::DOES_BLIP_EXIST(Local_3434.f_5))
						{
							if (func_88(&Local_3077) || MISC::IS_STRING_NULL_OR_EMPTY(&Local_3077))
							{
								if (GlobalFunc_2521(8000, Local_3106.f_9))
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_3048, 1) < 425f)
									{
										if (!VEHICLE::IS_VEHICLE_STOPPED(Local_3200))
										{
											if (!GlobalFunc_111())
											{
												if (!GlobalFunc_5172(&Local_3434, 1))
												{
													if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_LOOK", 7, 0, 0, 0))
													{
														iLocal_3636++;
														Local_3106.f_9 = MISC::GET_GAME_TIMER();
													}
													if (iLocal_3636 == 1)
													{
														func_84("FAM3_LOOK", 1);
													}
												}
												else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
												{
													GlobalFunc_5653(PLAYER::PLAYER_PED_ID(), "FAM3_AIAA", "MICHAEL", 6);
													func_84("FAM3_LOOK", 1);
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (!func_88("FAM3_SPOT"))
				{
					if (HUD::DOES_BLIP_EXIST(Local_3434.f_5))
					{
						if (iLocal_3728 == 1)
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_3434, 1))
								{
									if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_SPOT", 7, 0, 0, 0))
									{
										func_84("FAM3_SPOT", 1);
									}
								}
							}
							else
							{
								GlobalFunc_5105();
							}
						}
						else if (iLocal_3729 == 1)
						{
							func_84("FAM3_SPOT", 1);
						}
					}
				}
				else if (!GlobalFunc_111())
				{
					iLocal_3730 = 1;
				}
				if (!func_88("FAM3_BALC"))
				{
					if (HUD::DOES_BLIP_EXIST(Local_3434.f_5))
					{
						if (iLocal_3729 == 1)
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfam3", "shout_out_window_michael", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "missfam3", "shout_out_window_michael") > 0.05f)
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_3434, 1))
									{
										if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_BALC", 7, 0, 0, 0))
										{
											func_84("FAM3_BALC", 1);
										}
									}
								}
							}
						}
					}
				}
				if (!func_88("FAM3_BALCR"))
				{
					if (func_88("FAM3_BALC"))
					{
						if (HUD::DOES_BLIP_EXIST(Local_3434.f_5))
						{
							if (iLocal_3729 == 1 && iLocal_3731 == 1)
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfam3", "shout_out_window_michael", 3))
								{
									if (!GlobalFunc_111())
									{
										if (!GlobalFunc_5172(&Local_3434, 1))
										{
											if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_BALCR", 7, 0, 0, 0))
											{
												func_84("FAM3_BALCR", 1);
											}
										}
									}
								}
							}
						}
					}
				}
				if (iLocal_3103 == 0)
				{
					if (func_88(sParam0))
					{
						if (!func_88("FAM3_MST2") && !func_88("FAM3_FST2"))
						{
							if (HUD::DOES_BLIP_EXIST(Local_3434.f_5))
							{
								if (!GlobalFunc_5172(&Local_3434, 1))
								{
									if (MISC::ARE_STRINGS_EQUAL(sParam0, "FAM3_MST1"))
									{
										if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_MST2", 7, 0, 0, 0))
										{
											func_84("FAM3_MST2", 1);
										}
									}
									if (MISC::ARE_STRINGS_EQUAL(sParam0, "FAM3_FST1"))
									{
										if (GlobalFunc_10618(&uLocal_3471, "FAM3AUD", "FAM3_FST2", 7, 0, 0, 0))
										{
											func_84("FAM3_FST2", 1);
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



int func_392(float fParam0, float fParam1)//Position - 0x24AD7
{
	if (fParam0 > fParam1)
	{
		return 1;
	}
	return 0;
}


void func_394(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)//Position - 0x24C45
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (GlobalFunc_2521(iParam4, *uParam3))
			{
				*iParam2 = ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iParam1, 17);
				*uParam3 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			*iParam2 = 0;
		}
	}
	else
	{
		*iParam2 = 0;
	}
}

void func_395(var uParam0)//Position - 0x24CA5
{
	var uVar0;
	
	switch (*uParam0)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3222, 0))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3222))
				{
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_3222, 1);
					if (!PED::IS_PED_INJURED(Local_3142))
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_3142, 1);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_3142, 1);
						PED::SET_PED_CONFIG_FLAG(Local_3142, 32, 0);
						PED::SET_PED_CONFIG_FLAG(Local_3142, 116, 0);
						PED::SET_PED_CONFIG_FLAG(Local_3142, 29, 0);
					}
					func_444(sLocal_3060, Local_3222.f_9, 1, 1);
					func_443();
					func_442();
					fLocal_1212 = 200f;
					iLocal_66 = 1;
					func_440(Local_3222, sLocal_3060, fLocal_3740, 0, 1500f, 0, 0, 1);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_3222, 1);
					func_414(Local_3222, 1f);
				}
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_3222, "FAMILY_3_TENNIS_COACH_GROUP", 0);
			}
			AUDIO::TRIGGER_MUSIC_EVENT("FAM3_CHASE_START");
			iLocal_3725 = 1;
			*uParam0++;
			break;
		
		case 1:
			if (iLocal_3725 == 1)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3200, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3222, 0))
				{
					func_412(Local_3222, Local_3200, &fLocal_3740, &fLocal_3741);
					func_442();
					func_414(Local_3222, fLocal_3740);
					iLocal_76 = 1;
				}
			}
			else
			{
				func_396(0, 1);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3222, 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3222))
					{
						VEHICLE::SET_PLAYBACK_SPEED(Local_3222, 1.4f);
					}
					ENTITY::SET_ENTITY_INVINCIBLE(Local_3222, 1);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_3222, 1);
					ENTITY::SET_ENTITY_COLLISION(Local_3222, 0, 0);
				}
				if (!PED::IS_PED_INJURED(Local_3142))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Local_3142, 1);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_3142, 1);
				}
				*uParam0++;
			}
			break;
		
		case 2:
			if (iLocal_3726 == 1)
			{
				if (!HUD::DOES_BLIP_EXIST(Local_3222.f_1))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3222, 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3222))
						{
							VEHICLE::SET_PLAYBACK_SPEED(Local_3222, 2f);
							ENTITY::SET_ENTITY_INVINCIBLE(Local_3222, 1);
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_3222, 1);
							ENTITY::SET_ENTITY_COLLISION(Local_3222, 0, 0);
						}
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_3222, 0);
					}
					if (!PED::IS_PED_INJURED(Local_3142))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(Local_3142, 1);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_3142, 1);
					}
					STREAMING::REQUEST_IPL("DES_StiltHouse_imapstart");
					*uParam0++;
				}
			}
			break;
		
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3222, 0))
			{
				STREAMING::REQUEST_ANIM_DICT("missfam3");
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3222))
				{
					if (STREAMING::IS_IPL_ACTIVE("DES_StiltHouse_imapstart"))
					{
						if (!PED::IS_PED_INJURED(Local_3142))
						{
							GlobalFunc_2901(Local_3142, -1034.608f, 653.9794f, 155.0754f, 90.0561f, 0, 0, 0);
							ENTITY::SET_ENTITY_VISIBLE(Local_3142, 1);
							ENTITY::SET_ENTITY_INVINCIBLE(Local_3142, 0);
							ENTITY::SET_ENTITY_COLLISION(Local_3142, 1, 0);
							TASK::CLEAR_PED_TASKS(Local_3142);
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_3142, 1);
							PED::SET_PED_LOD_MULTIPLIER(Local_3142, 5f);
							PED::SET_PED_COMPONENT_VARIATION(Local_3142, 3, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_3142, 4, 1, 0, 0);
							if (STREAMING::HAS_ANIM_DICT_LOADED("missfam3"))
							{
								TASK::TASK_PLAY_ANIM_ADVANCED(Local_3142, "missfam3", "coach_idle", -1034.63f, 654.114f, 156.08f, 0f, 0f, 85f, 1000f, -4f, -1, 5121, 0, 2, 0);
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3222, 0))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(Local_3222, 0);
							ENTITY::SET_ENTITY_COLLISION(Local_3222, 1, 0);
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_3222, 0, 1);
							VEHICLE::SET_VEHICLE_LIGHTS(Local_3222, 2);
							ENTITY::SET_ENTITY_COORDS(Local_3222, -1069.157f, 672.9374f, 141.3214f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(Local_3222, 275.767f);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3222);
							VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_3222, 0, 0, 1);
							VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_3222, 0, 1, 0);
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_3222, 0);
						}
						iLocal_3809[7] = 1;
						iLocal_3809[8] = 1;
						iLocal_3809[9] = 1;
						*uParam0++;
					}
				}
			}
			break;
		
		case 4:
			if (iLocal_3728 == 1)
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED("missfam3"))
				{
					if (!PED::IS_PED_INJURED(Local_3142))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_3142, 0);
						TASK::TASK_PLAY_ANIM(Local_3142, "missfam3", "coach_idle", 4f, -8f, -1, 1, 0, 0, 0, 0);
						*uParam0++;
					}
				}
			}
			break;
		
		case 5:
			if (iLocal_3728 == 1)
			{
				if (iLocal_3729 == 1)
				{
					if (!PED::IS_PED_INJURED(Local_3142))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3142, "missfam3", "shout_out_window_coach", 3))
						{
							TASK::OPEN_SEQUENCE_TASK(&uVar0);
							TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1026.916f, 653.8083f, 155.0754f, 1f, -1, 196.607f, 1056964608);
							TASK::TASK_PLAY_ANIM(0, "missfam3", "coach_idle", 8f, -8f, -1, 1, 0, 0, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uVar0);
							TASK::TASK_PERFORM_SEQUENCE(Local_3142, uVar0);
							TASK::CLEAR_SEQUENCE_TASK(&uVar0);
							*uParam0++;
						}
					}
				}
			}
			break;
	}
}

void func_396(bool bParam0, bool bParam1)//Position - 0x25114
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_2525))
	{
		iLocal_63 = 0;
		GlobalFunc_2214();
		PED::REMOVE_RELATIONSHIP_GROUP(uLocal_2541);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
			PED::SET_CREATE_RANDOM_COPS(1);
		}
		if (bLocal_79)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_410());
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2213());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2212());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2211());
		if (!CAM::IS_SCREEN_FADED_OUT() && !bParam0)
		{
			func_406();
			func_405();
			func_402();
		}
		else
		{
			func_398();
			func_397();
		}
		if (bParam1)
		{
			GlobalFunc_9132(0);
		}
	}
}

void func_397()//Position - 0x251D0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 150)
	{
		iLocal_2773[iVar0] = 0;
		Local_1820[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_81[iVar0] = 0f;
		fLocal_232[iVar0] = 0f;
		fLocal_383[iVar0] = 0f;
		fLocal_534[iVar0] = 0f;
		iLocal_1221[iVar0] = 0;
		fLocal_685[iVar0] = 0f;
		iLocal_1372[iVar0] = 0;
		iLocal_2542[iVar0] = 0;
		iLocal_1523[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		iLocal_2924[iVar0] = 0;
		iVar0++;
	}
	iLocal_1803 = 0;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iLocal_2939[iVar0] = 0;
		Local_2271[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_996[iVar0] = 0f;
		fLocal_1047[iVar0] = 0f;
		fLocal_1098[iVar0] = 0f;
		fLocal_1149[iVar0] = 0f;
		iLocal_1752[iVar0] = 0;
		iLocal_2693[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iLocal_3016[iVar0] = 0;
		iVar0++;
	}
	iLocal_1805 = 0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		iLocal_2990[iVar0] = 0;
		Local_2422[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_840[iVar0] = 0f;
		fLocal_866[iVar0] = 0f;
		fLocal_892[iVar0] = 0f;
		fLocal_918[iVar0] = 0f;
		iLocal_1674[iVar0] = 0;
		fLocal_944[iVar0] = 0f;
		iLocal_1700[iVar0] = 0;
		iLocal_2744[iVar0] = 0;
		iLocal_1726[iVar0] = 0;
		iVar0++;
	}
	iLocal_1804 = 0;
	iLocal_1807 = 0;
	iLocal_1810 = 0;
	iLocal_1811 = 0;
	iLocal_1812 = 0;
}

void func_398()//Position - 0x2535C
{
	func_401();
	func_400();
	func_399();
}

void func_399()//Position - 0x25370
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2990[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2990[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2990[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2990[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2990[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_2990[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_2990[iVar0]));
			}
		}
		iLocal_1700[iVar0] = 0;
		if (!bLocal_59 && !bLocal_72)
		{
			if (iLocal_1674[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1674[iVar0], &cLocal_2525);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (!iLocal_2744[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2744[iVar0]);
		}
		iVar0++;
	}
}

void func_400()//Position - 0x25466
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2939[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_2939[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_2939[iVar0]));
			}
		}
		iLocal_1752[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (!iLocal_2693[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2693[iVar0]);
		}
		iVar0++;
	}
	iLocal_1808 = 0;
	iLocal_1805 = 0;
}

void func_401()//Position - 0x254E3
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2773[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2773[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2773[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2773[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2773[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_2773[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_2773[iVar0]));
			}
		}
		if (!bLocal_59 && !bLocal_72)
		{
			if (iLocal_1221[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1221[iVar0], &cLocal_2525);
			}
		}
		iLocal_1372[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (!iLocal_2542[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2542[iVar0]);
		}
		iVar0++;
	}
	iLocal_1807 = 0;
	iLocal_1803 = 0;
}

void func_402()//Position - 0x255E1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2990[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2990[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2990[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2990[iVar0]);
				}
			}
			func_404(iLocal_2990[iVar0]);
			GlobalFunc_2210(iLocal_2990[iVar0]);
		}
		iLocal_1700[iVar0] = 0;
		iLocal_1726[iVar0] = 0;
		if (!bLocal_59 && !bLocal_72)
		{
			if (iLocal_1674[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1674[iVar0], &cLocal_2525);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (!iLocal_2744[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2744[iVar0]);
		}
		iVar0++;
	}
	iLocal_1809 = 0;
}


void func_404(int iParam0)//Position - 0x256C5
{
	float fVar0;
	int iVar1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (!iVar1 == PLAYER::PLAYER_PED_ID())
			{
				fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
				if (fVar0 < 8f)
				{
					fVar0 = 8f;
				}
				if (fVar0 > 62.9f)
				{
					fVar0 = 62.9f;
				}
				TASK::TASK_VEHICLE_MISSION(iVar1, iParam0, 0, 1, fVar0, 786603, 5f, 5f, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 8192, 1);
				if (bLocal_80)
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 65536, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, 0);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 6, 0);
			}
		}
	}
}

void func_405()//Position - 0x2575E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2939[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2939[iVar0]))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_2939[iVar0], 1, 0);
			}
			GlobalFunc_2210(iLocal_2939[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (!iLocal_2693[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2693[iVar0]);
		}
		iVar0++;
	}
	iLocal_1808 = 0;
	iLocal_1805 = 0;
}

void func_406()//Position - 0x257E1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2773[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2773[iVar0]))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_2773[iVar0], 1, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2773[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2773[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2773[iVar0]);
				}
			}
			func_404(iLocal_2773[iVar0]);
			GlobalFunc_2210(iLocal_2773[iVar0]);
		}
		iLocal_1372[iVar0] = 0;
		iLocal_1523[iVar0] = 0;
		if (!bLocal_59 && !bLocal_72)
		{
			if (iLocal_1221[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1221[iVar0], &cLocal_2525);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (!iLocal_2542[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2542[iVar0]);
		}
		iVar0++;
	}
	iLocal_1807 = 0;
	iLocal_1803 = 0;
}




int func_410()//Position - 0x258F5
{
	if (iLocal_2770 == 0)
	{
		return joaat("a_m_y_business_01");
	}
	return iLocal_2770;
}


void func_412(int iParam0, int iParam1, float fParam2, float fParam3)//Position - 0x2593C
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	struct<3> Var13;
	float fVar16;
	float fVar17;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
		fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, 1);
		fVar7 = 15f;
		fVar8 = 30f;
		fVar9 = 45f;
		fVar10 = 75f;
		fVar11 = 1f;
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			fVar12 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
			*fParam3 = fVar12;
		}
		Var13 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, Var3) };
		if (Var13.f_1 > 1f)
		{
			if (fVar6 > fVar10)
			{
				fVar11 = 5f;
			}
			else if (fVar6 > fVar9)
			{
				fVar11 = 4f;
			}
			else if (fVar6 > fVar8)
			{
				fVar11 = 3f;
			}
			else
			{
				fVar11 = 2.5f;
			}
		}
		else if (fVar6 > fVar10)
		{
			fVar11 = 0.6f;
		}
		else if (fVar6 > fVar9)
		{
			fVar11 = 1.05f;
		}
		else if (fVar6 > fVar8)
		{
			fVar11 = 1.225f;
		}
		else if (fVar6 > fVar7)
		{
			fVar11 = 1.385f;
		}
		else
		{
			fVar11 = 1.45f;
		}
		if (fVar12 < 26000f)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, -948.42f, 399.24f, 76.69f, 118f, 112f, 16f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, -1002.7f, 306.26f, 65.3f, -886.05f, 263.07f, 89.96f, 32f, 0, 1, 0))
			{
				fVar16 = (ENTITY::GET_ENTITY_SPEED(iParam0) - ENTITY::GET_ENTITY_SPEED(iParam1));
				if (fVar16 < 0f)
				{
					fVar17 = 0.125f;
				}
				fVar11 = (1.275f + fVar17);
			}
			else if (fVar12 > 19000f)
			{
				fVar11 = (fVar11 + 0.3f);
			}
		}
		if (fVar12 > 27000f)
		{
			fVar11 = (fVar11 + 0.35f);
		}
		GlobalFunc_2906(fParam2, fVar11, 0.01f, 1);
	}
}


void func_414(int iParam0, float fParam1)//Position - 0x25B78
{
	float fVar0;
	struct<3> Var1;
	int iVar4;
	
	fVar0 = MISC::GET_FRAME_TIME();
	fVar0 = (fVar0 * 1000f);
	bLocal_78 = false;
	if (!bLocal_60)
	{
		if (bLocal_59)
		{
			GlobalFunc_2512();
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				MISC::CLEAR_AREA(Var1, 1000f, 1, 0, 0, 0);
			}
			bLocal_60 = true;
		}
	}
	else if (!bLocal_59)
	{
		GlobalFunc_2214();
		bLocal_60 = false;
	}
	if (bLocal_59)
	{
		fParam1 = 1f;
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (!bLocal_53)
	{
		if (iLocal_48)
		{
			fLocal_1205 = 0f;
		}
		else
		{
			fLocal_1205 = 1f;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (GlobalFunc_5657(PLAYER::PLAYER_PED_ID(), iParam0))
					{
						iLocal_58 = 1;
					}
					else
					{
						iLocal_58 = 0;
					}
				}
				fLocal_1202 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
				VEHICLE::SET_PLAYBACK_SPEED(iParam0, ((fParam1 * fLocal_1203) * fLocal_1205));
				if (bLocal_57)
				{
					func_437(iParam0, fLocal_1202);
					func_436(iParam0, fLocal_1212);
					if (fLocal_1207 > 1000f)
					{
						if (iLocal_1819 == 0)
						{
							func_435(iParam0, fLocal_1212);
						}
						fVar0 = ((fLocal_1202 + 4000f) + (SYSTEM::TO_FLOAT(iLocal_1819) * 2000f));
						func_434(iParam0, fVar0, fLocal_1206);
						iLocal_1819++;
						if (iLocal_1819 > 2)
						{
							fLocal_1207 = 0f;
						}
					}
					else
					{
						iLocal_1819 = 0;
						fLocal_1207 = (fLocal_1207 + (MISC::GET_FRAME_TIME() * 1000f));
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
		if (fLocal_1202 == 0f || CAM::IS_SCREEN_FADED_OUT())
		{
			iVar4 = 1;
		}
		if (iVar4 && !bLocal_65)
		{
			if (!iLocal_47)
			{
				func_431(iParam0, ((fParam1 * fLocal_1203) * fLocal_1205), 0);
				if (!iLocal_68)
				{
				}
				iLocal_68 = 0;
			}
			if (bLocal_50)
			{
				func_430(iParam0);
			}
			if (!iLocal_47)
			{
				func_417(iParam0, ((fParam1 * fLocal_1203) * fLocal_1205), 0);
			}
		}
		if (iLocal_55)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_3023 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					Local_2498 = { ENTITY::GET_ENTITY_COORDS(iLocal_3023, 1) };
					ENTITY::GET_ENTITY_QUATERNION(iLocal_3023, &uLocal_836, &uLocal_837, &uLocal_838, &uLocal_839);
				}
			}
			iLocal_55 = 0;
		}
		if (iLocal_54)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3023))
			{
				GlobalFunc_2210(iLocal_3024);
				iLocal_3024 = iLocal_3023;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3024, 0))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_3024, Local_2498, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_3024, uLocal_836, uLocal_837, uLocal_838, uLocal_839);
			}
			fLocal_1201 = fLocal_1204;
			iLocal_47 = 1;
			iLocal_54 = 0;
		}
		if (iLocal_47)
		{
			while (!func_415(&iParam0, fLocal_1201))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_48 = 1;
		}
		if (iLocal_61)
		{
			iLocal_61 = 0;
		}
	}
}

int func_415(int iParam0, float fParam1)//Position - 0x25E13
{
	if (!iLocal_62)
	{
		iLocal_47 = 1;
		func_398();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
				VEHICLE::SET_VEHICLE_FIXED(*iParam0);
			}
			if (!iLocal_1806 == -1)
			{
				while (!func_416(iParam0, iLocal_1806, fParam1, 1, 0, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!bLocal_52)
				{
					iLocal_48 = 1;
					fLocal_1205 = 0f;
					iLocal_1807 = 0;
					iLocal_1809 = 0;
					iLocal_1808 = 0;
					iLocal_1803 = 0;
					iLocal_1804 = 0;
					iLocal_1805 = 0;
					iLocal_1810 = 0;
					iLocal_1811 = 0;
					iLocal_1812 = 0;
				}
			}
		}
		iLocal_62 = 1;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(*iParam0, ((1f * fLocal_1203) * fLocal_1205));
				func_416(iParam0, iLocal_1806, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_1202 = fParam1;
		iLocal_1813 = 0;
		iLocal_1816 = 0;
		fLocal_1217 = 0f;
		fLocal_1216 = 0f;
		func_417(*iParam0, ((1f * fLocal_1203) * fLocal_1205), 1);
		func_431(*iParam0, ((1f * fLocal_1203) * fLocal_1205), 1);
		func_430(*iParam0);
		if ((iLocal_1810 == 0 && iLocal_1811 == 0) && iLocal_1812 == 0)
		{
			iLocal_48 = 0;
			iLocal_47 = 0;
			iLocal_62 = 0;
			return 1;
		}
	}
	return 0;
}

int func_416(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x25F45
{
	float fVar0;
	
	if (iParam1 > 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_2525);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, &cLocal_2525))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 0);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_2525, 1092616192, 786603);
					}
					else
					{
						if (iParam1 != iLocal_1814 && iParam1 != iLocal_1815)
						{
							if (bParam7)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_2525, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_2525, 1 | 4, 0, 786603);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_2525, 1);
							}
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_2525, 1);
						}
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, fParam2);
						if (bParam5)
						{
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, 1);
						}
						return 1;
					}
				}
				else if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(*uParam0) == VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, &cLocal_2525))
				{
					fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(*uParam0);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*uParam0);
						VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_2525);
					}
					if (bParam5)
					{
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, 1);
					}
					return 1;
				}
				else
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*uParam0);
					ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 0);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_2525, 1092616192, 786603);
					}
					else if (iParam1 != iLocal_1814 && iParam1 != iLocal_1815)
					{
						if (bParam7)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_2525, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_2525, 1 | 4, 0, 786603);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_2525, 1);
						}
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_2525, 1);
					}
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, fParam2);
					if (bParam5)
					{
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, 1);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_417(int iParam0, float fParam1, bool bParam2)//Position - 0x2612B
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
		iVar0 = iLocal_1809;
		while (iVar0 < 25)
		{
			if (iLocal_1700[iVar0] != 99)
			{
				if (iLocal_1700[iVar0] == 0)
				{
					if (iLocal_1674[iVar0] > 0)
					{
						if (!iLocal_47)
						{
							if (fLocal_1202 > (fLocal_944[iVar0] - (7000f * fParam1)))
							{
								if (GlobalFunc_2222(iLocal_2744[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_1726[iVar0]), 0);
								}
								else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2744[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_1726[iVar0]), 2);
								}
								MISC::CLEAR_BIT(&(iLocal_1726[iVar0]), 1);
								iLocal_1700[iVar0]++;
								iLocal_1811++;
							}
						}
						else
						{
							fVar12 = (fLocal_1202 - fLocal_944[iVar0]);
							fVar12 = (fVar12 * fLocal_970[iVar0]);
							if (fVar12 >= 0f)
							{
								if (fVar12 < func_428(iLocal_1674[iVar0]))
								{
									if (GlobalFunc_2222(iLocal_2744[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1726[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2744[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1726[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_1726[iVar0]), 1);
									iLocal_1700[iVar0]++;
									iLocal_1811++;
								}
								else
								{
									iLocal_1700[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_1700[iVar0] = 99;
					}
				}
				else if (iLocal_1700[iVar0] == 1)
				{
					bVar14 = false;
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1674[iVar0], &cLocal_2525);
					if (MISC::IS_BIT_SET(iLocal_1726[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2211());
						bVar14 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
					}
					else if (!bLocal_74 && ((!MISC::IS_BIT_SET(iLocal_1726[iVar0], 2) && uVar16) || (MISC::IS_BIT_SET(iLocal_1726[iVar0], 2) && uVar17)))
					{
						bVar14 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_410());
						bVar14 = STREAMING::HAS_MODEL_LOADED(func_410());
					}
					if (bVar14)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2990[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_2744[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_2744[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1674[iVar0], &cLocal_2525))
							{
								if (fLocal_1202 >= (fLocal_944[iVar0] - (fLocal_1215 * fParam1)))
								{
									if ((iLocal_61 || bParam2) || (!bLocal_78 && !func_427(Local_2422[iVar0 /*3*/], Var9, 5f, fLocal_1213)))
									{
										if (bLocal_57)
										{
											func_426(Local_2422[iVar0 /*3*/], Var9, fLocal_1206);
										}
										iLocal_2990[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_2744[iVar0], Local_2422[iVar0 /*3*/], 0, 0, 0);
										if (iLocal_2744[iVar0] == joaat("polmav"))
										{
											VEHICLE::SET_VEHICLE_LIVERY(iLocal_2990[iVar0], 0);
										}
										if (uLocal_70 && !MISC::IS_BIT_SET(iLocal_1726[iVar0], 0))
										{
											func_425(iLocal_2990[iVar0]);
										}
										if (MISC::IS_BIT_SET(iLocal_1726[iVar0], 3))
										{
											ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_2990[iVar0], 1);
										}
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_2990[iVar0], Local_2422[iVar0 /*3*/], 0, 0, 1);
										ENTITY::SET_ENTITY_QUATERNION(iLocal_2990[iVar0], fLocal_840[iVar0], fLocal_866[iVar0], fLocal_892[iVar0], fLocal_918[iVar0]);
										if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_2744[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2744[iVar0]))
										{
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2990[iVar0]);
										}
										if (!MISC::IS_BIT_SET(iLocal_1726[iVar0], 0))
										{
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2990[iVar0], 1, 1);
											if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
											{
												VEHICLE::SET_VEHICLE_LIGHTS(iLocal_2990[iVar0], 3);
											}
										}
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_2990[iVar0], 1);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2744[iVar0]);
										iLocal_1811 = (iLocal_1811 - 1);
										iLocal_1700[iVar0]++;
										bLocal_78 = true;
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_2990[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2990[iVar0], 0))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_2990[iVar0], Local_2422[iVar0 /*3*/], 0, 0, 1);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_2990[iVar0], fLocal_840[iVar0], fLocal_866[iVar0], fLocal_892[iVar0], fLocal_918[iVar0]);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_2744[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2744[iVar0]))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2990[iVar0]);
							}
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_2990[iVar0], 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2744[iVar0]);
							iLocal_1811 = (iLocal_1811 - 1);
							iLocal_1700[iVar0]++;
						}
					}
				}
				else if (iLocal_1700[iVar0] == 2)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1674[iVar0], &cLocal_2525);
					if (!MISC::IS_BIT_SET(iLocal_1726[iVar0], 1))
					{
						bVar14 = false;
						if (MISC::IS_BIT_SET(iLocal_1726[iVar0], 0))
						{
							STREAMING::REQUEST_MODEL(GlobalFunc_2211());
							bVar14 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
							iVar19 = 2;
						}
						else if (!bLocal_74 && ((!MISC::IS_BIT_SET(iLocal_1726[iVar0], 2) && uVar16) || (MISC::IS_BIT_SET(iLocal_1726[iVar0], 2) && uVar17)))
						{
							bVar14 = true;
							iVar19 = 1;
						}
						else
						{
							STREAMING::REQUEST_MODEL(func_410());
							bVar14 = STREAMING::HAS_MODEL_LOADED(func_410());
							iVar19 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_2990[iVar0]))
						{
							if (!bLocal_78 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2990[iVar0], -1))
							{
								if (bVar14)
								{
									if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_2990[iVar0], 1), Var9) < 10000f || bParam2) || iLocal_61)
									{
										func_423(&(iLocal_2990[iVar0]), iVar19, 1);
										MISC::SET_BIT(&(iLocal_1726[iVar0]), 1);
									}
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2990[iVar0], 0))
					{
						if (fLocal_1202 >= fLocal_944[iVar0])
						{
							if (21 > iLocal_1804)
							{
								fVar12 = (fLocal_1202 - fLocal_944[iVar0]);
								fVar12 = (fVar12 * fLocal_970[iVar0]);
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1674[iVar0], &cLocal_2525))
								{
									if (fVar12 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1674[iVar0], &cLocal_2525))
									{
										Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_2990[iVar0], 1) };
										Var6 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_1674[iVar0], fVar12, &cLocal_2525) };
										if (((!func_427(Var3, Var9, 5f, fLocal_1213) && func_427(Var6, Var9, 5f, fLocal_1213)) && !iLocal_61) && !bParam2)
										{
											if (!MISC::IS_BIT_SET(iLocal_1726[iVar0], 1))
											{
												func_423(&(iLocal_2990[iVar0]), iVar19, 1);
											}
											iLocal_1804++;
											iLocal_1700[iVar0]++;
										}
										else if (((!bLocal_78 || MISC::IS_BIT_SET(iLocal_1726[iVar0], 1)) || iLocal_61) || bParam2)
										{
											if (func_416(&(iLocal_2990[iVar0]), iLocal_1674[iVar0], fVar12, 1, 0, 0, iLocal_76, bLocal_75))
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_2990[iVar0], (fParam1 * fLocal_970[iVar0]));
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2990[iVar0], 0))
												{
													if (MISC::IS_BIT_SET(iLocal_1726[iVar0], 0))
													{
														VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2990[iVar0], 1, 1);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_2990[iVar0], 1);
														VEHICLE::SET_VEHICLE_LIGHTS(iLocal_2990[iVar0], 2);
														if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2744[iVar0]))
														{
															AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_2990[iVar0], 1);
														}
													}
												}
												if (!MISC::IS_BIT_SET(iLocal_1726[iVar0], 1))
												{
													func_423(&(iLocal_2990[iVar0]), iVar19, 1);
												}
												iLocal_1804++;
												iLocal_1700[iVar0]++;
											}
										}
									}
									else
									{
										if (!MISC::IS_BIT_SET(iLocal_1726[iVar0], 1))
										{
											func_423(&(iLocal_2990[iVar0]), iVar19, 1);
										}
										iLocal_1804++;
										iLocal_1700[iVar0]++;
									}
								}
							}
							else
							{
								if (!MISC::IS_BIT_SET(iLocal_1726[iVar0], 1))
								{
									func_423(&(iLocal_2990[iVar0]), iVar19, 1);
								}
								iLocal_1804++;
								iLocal_1700[iVar0]++;
							}
						}
					}
					else
					{
						if (!MISC::IS_BIT_SET(iLocal_1726[iVar0], 1))
						{
							func_423(&(iLocal_2990[iVar0]), iVar19, 1);
						}
						iLocal_1804++;
						iLocal_1700[iVar0]++;
					}
				}
				else if (iLocal_1700[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2990[iVar0], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2990[iVar0]))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2990[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (bVar15)
								{
									if (((!bLocal_51 && !iLocal_48) && !bLocal_67) && (((!iLocal_76 && !bLocal_75) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_2990[iVar0])) || func_422(iLocal_2990[iVar0])))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar2))
										{
											bVar14 = false;
											if (bLocal_69)
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
												else if (MISC::ABSF((fVar13 - ENTITY::GET_ENTITY_SPEED(iLocal_2990[iVar0]))) > 15f)
												{
													bVar14 = true;
												}
												else if (!GlobalFunc_5655(iLocal_2990[iVar0], iVar2, 45f))
												{
													bVar14 = true;
												}
												else if (GlobalFunc_5654(iVar2, iLocal_2990[iVar0], 0))
												{
													bVar14 = true;
												}
											}
											if (bVar14)
											{
												func_418(iLocal_2990[iVar0]);
												iLocal_1700[iVar0]++;
											}
										}
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_2990[iVar0], (fParam1 * fLocal_970[iVar0]));
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2990[iVar0]);
							}
						}
						else
						{
							iLocal_1700[iVar0]++;
						}
					}
					else
					{
						iLocal_1700[iVar0]++;
					}
				}
				else if (iLocal_1700[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2990[iVar0], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2990[iVar0]))
						{
							iLocal_1700[iVar0]++;
						}
						else
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2990[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_2990[iVar0], (fParam1 * fLocal_970[iVar0]));
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2990[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1674[iVar0], &cLocal_2525))
							{
								if (fLocal_1202 > (fLocal_944[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1674[iVar0], &cLocal_2525)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2990[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2990[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1700[iVar0]++;
					}
				}
				else if (iLocal_1700[iVar0] == 5)
				{
					if (!iLocal_2990[iVar0] == iLocal_3025)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2990[iVar0], 0))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2990[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								iVar20 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, 242628503);
								if (iVar20 == 7)
								{
									fVar13 = ENTITY::GET_ENTITY_SPEED(iLocal_2990[iVar0]);
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
						if (!bLocal_59 && !bLocal_72)
						{
							if (iLocal_1674[iVar0] > 0)
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1674[iVar0], &cLocal_2525);
							}
						}
						if (!bLocal_49)
						{
							if (!bLocal_77)
							{
								GlobalFunc_2210(iLocal_2990[iVar0]);
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_2990[iVar0]))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_2990[iVar0]));
						}
					}
					iLocal_1804 = (iLocal_1804 - 1);
					iLocal_1700[iVar0] = 99;
				}
				if (!bVar18)
				{
					iLocal_1809 = iVar0;
					bVar18 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_402();
	}
}

void func_418(int iParam0)//Position - 0x26D29
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_404(iParam0);
		VEHICLE::SET_PLAYBACK_TO_USE_AI(iParam0, 786603);
	}
}




int func_422(int iParam0)//Position - 0x26E8C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bLocal_73)
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

int func_423(var uParam0, int iParam1, bool bParam2)//Position - 0x26EE9
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, -1))
		{
			if (iParam1 == 2)
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, GlobalFunc_2211(), -1, 0, 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, uLocal_2541);
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
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 4, func_410(), -1, 0, 0);
				if (bLocal_79)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_410());
				}
			}
			if (bParam2)
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar0, 1);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iVar0, 0);
				PED::SET_PED_CONFIG_FLAG(iVar0, 32, 0);
			}
			if (bLocal_80)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(*uParam0, 1);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 1);
			GlobalFunc_2221(iVar0);
			bLocal_78 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}


void func_425(int iParam0)//Position - 0x26FF5
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iLocal_2771 >= -1 && iLocal_2772 >= -1)
	{
		while (iVar0 == iLocal_2771 || iVar0 == iLocal_2772)
		{
			iVar0++;
		}
	}
	else if (iLocal_2771 >= -1)
	{
		if (iVar0 == iLocal_2771)
		{
			iVar0++;
		}
	}
	iVar1 = iVar0;
	switch (iVar1)
	{
		case 0:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 0, 0);
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

void func_426(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x2716E
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (!bLocal_60)
	{
		if (!func_427(Param0, Param3, fParam6, 200f))
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

int func_427(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7)//Position - 0x271DE
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!bLocal_60)
		{
			if (!iLocal_47)
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

float func_428(int iParam0)//Position - 0x27225
{
	var uVar0;
	
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, &cLocal_2525);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, &cLocal_2525))
	{
		SYSTEM::WAIT(0);
	}
	uVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam0, &cLocal_2525);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, &cLocal_2525);
	return uVar0;
}


void func_430(int iParam0)//Position - 0x272DB
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
		iVar0 = iLocal_1808;
		while (iVar0 < 50)
		{
			switch (iLocal_1752[iVar0])
			{
				case 0:
					if (!iLocal_2693[iVar0] == 0)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Local_2271[iVar0 /*3*/], fLocal_1200, fLocal_1200, fLocal_1200, 0, 1, 0))
						{
							iLocal_1810++;
							iLocal_1752[iVar0]++;
						}
					}
					else
					{
						iLocal_1752[iVar0] = 99;
					}
					break;
				
				case 1:
					if (6 > iLocal_1805)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2939[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_2693[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_2693[iVar0]))
							{
								if ((iLocal_47 || iLocal_61) || (!bLocal_78 && !func_427(Local_2271[iVar0 /*3*/], Var1, 5f, fLocal_1213)))
								{
									if (bLocal_57)
									{
										func_426(Local_2271[iVar0 /*3*/], Var1, fLocal_1206);
									}
									iLocal_2939[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_2693[iVar0], Local_2271[iVar0 /*3*/], 0, 0, 0);
									if (iLocal_2693[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_2939[iVar0], 0);
									}
									ENTITY::SET_ENTITY_QUATERNION(iLocal_2939[iVar0], fLocal_996[iVar0], fLocal_1047[iVar0], fLocal_1098[iVar0], fLocal_1149[iVar0]);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2693[iVar0]);
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_2939[iVar0], GlobalFunc_2212()))
									{
										VEHICLE::SET_VEHICLE_SIREN(iLocal_2939[iVar0], 1);
										if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2693[iVar0]))
										{
											AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_2939[iVar0], 1);
										}
									}
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_2939[iVar0], GlobalFunc_2213()))
									{
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_2939[iVar0], 0, 0);
									}
									ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_2939[iVar0], 1);
									iLocal_1810 = (iLocal_1810 - 1);
									iLocal_1805++;
									iLocal_1752[iVar0]++;
									bLocal_78 = true;
								}
							}
						}
						else
						{
							iLocal_1810 = (iLocal_1810 - 1);
							iLocal_1805++;
							iLocal_1752[iVar0]++;
						}
					}
					break;
				
				case 2:
					if (!bVar7)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2939[iVar0], 0))
						{
							Var4 = { ENTITY::GET_ENTITY_COORDS(iLocal_2939[iVar0], 1) };
						}
						if (fLocal_1214 == 0f || SYSTEM::VDIST2(Var1, Var4) < (fLocal_1214 * fLocal_1214))
						{
							if (!GlobalFunc_5654(iLocal_2939[iVar0], iParam0, 0))
							{
								if (!bLocal_49)
								{
									GlobalFunc_2210(iLocal_2939[iVar0]);
								}
								else
								{
									VEHICLE::DELETE_VEHICLE(&(iLocal_2939[iVar0]));
								}
								iLocal_1805 = (iLocal_1805 - 1);
								iLocal_1752[iVar0] = 99;
								bVar7 = true;
							}
						}
					}
					break;
			}
			if (iLocal_1752[iVar0] != 99)
			{
				if (!bVar8)
				{
					iLocal_1808 = iVar0;
					bVar8 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_405();
	}
}

void func_431(int iParam0, float fParam1, int iParam2)//Position - 0x275D1
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
			fLocal_1202 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
		}
		iVar22 = -1;
		bVar23 = false;
		bVar24 = false;
		iVar0 = iLocal_1807;
		while (iVar0 < 150 && !bVar23)
		{
			if (iLocal_1372[iVar0] != 99)
			{
				if (iLocal_1372[iVar0] == 0)
				{
					if (iLocal_1221[iVar0] > 0 && iLocal_2542[iVar0] != 0)
					{
						if (!iLocal_47)
						{
							if (fLocal_1202 < (fLocal_685[iVar0] + 20000f))
							{
								if (fLocal_1202 >= (fLocal_685[iVar0] - (7000f * fParam1)))
								{
									if (GlobalFunc_2222(iLocal_2542[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1523[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2542[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1523[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_1523[iVar0]), 1);
									iLocal_1812++;
									iLocal_1372[iVar0]++;
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
								func_433(iVar0, 1090519040);
							}
						}
						else
						{
							fVar15 = (fLocal_1202 - fLocal_685[iVar0]);
							if (fVar15 >= 0f)
							{
								if (fVar15 < func_428(iLocal_1221[iVar0]))
								{
									if (GlobalFunc_2222(iLocal_2542[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1523[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2542[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1523[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_1523[iVar0]), 1);
									iLocal_1812++;
									iLocal_1372[iVar0]++;
								}
								else
								{
									func_433(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_433(iVar0, 1090519040);
					}
				}
				else if (iLocal_1372[iVar0] == 1)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1221[iVar0], &cLocal_2525);
					bVar17 = false;
					if (MISC::IS_BIT_SET(iLocal_1523[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2211());
						if (STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211()))
						{
							bVar17 = true;
						}
					}
					else if (!bLocal_74 && ((!MISC::IS_BIT_SET(iLocal_1523[iVar0], 2) && uVar19) || (MISC::IS_BIT_SET(iLocal_1523[iVar0], 2) && uVar20)))
					{
						bVar17 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_410());
						bVar17 = STREAMING::HAS_MODEL_LOADED(func_410());
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2773[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_2542[iVar0]);
						if ((STREAMING::HAS_MODEL_LOADED(iLocal_2542[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1221[iVar0], &cLocal_2525)) && bVar17)
						{
							if (fLocal_1202 >= (fLocal_685[iVar0] - (fLocal_1215 * fParam1)))
							{
								if ((iLocal_61 || iParam2) || (!bLocal_78 && !func_427(Local_1820[iVar0 /*3*/], Var12, 5f, fLocal_1213)))
								{
									if (bLocal_57)
									{
										func_426(Local_1820[iVar0 /*3*/], Var12, fLocal_1206);
									}
									iLocal_2773[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_2542[iVar0], Local_1820[iVar0 /*3*/], 0, 0, 0);
									if (iLocal_2542[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_2773[iVar0], 0);
									}
									if (uLocal_70 && !MISC::IS_BIT_SET(iLocal_1523[iVar0], 0))
									{
										func_425(iLocal_2773[iVar0]);
									}
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_2773[iVar0], Local_1820[iVar0 /*3*/], 0, 0, 1);
									ENTITY::SET_ENTITY_QUATERNION(iLocal_2773[iVar0], fLocal_81[iVar0], fLocal_232[iVar0], fLocal_383[iVar0], fLocal_534[iVar0]);
									if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_2542[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2542[iVar0]))
									{
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2773[iVar0]);
									}
									if (MISC::IS_BIT_SET(iLocal_1523[iVar0], 3))
									{
										ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_2773[iVar0], 1);
									}
									if (!MISC::IS_BIT_SET(iLocal_1523[iVar0], 0))
									{
										VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2773[iVar0], 1, 1);
										if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
										{
											VEHICLE::SET_VEHICLE_LIGHTS(iLocal_2773[iVar0], 3);
										}
									}
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_2773[iVar0], 1);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_2773[iVar0], 1);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2542[iVar0]);
									iLocal_1812 = (iLocal_1812 - 1);
									iLocal_1372[iVar0]++;
									bLocal_78 = true;
								}
								else if (fLocal_1202 > fLocal_685[iVar0])
								{
									iLocal_1812 = (iLocal_1812 - 1);
									func_433(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_1372[iVar0] == 2)
				{
					bVar17 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_1818 || iLocal_1818 == 0)) || iLocal_61) || iParam2)
					{
						if (!MISC::IS_BIT_SET(iLocal_1523[iVar0], 1))
						{
							if (MISC::IS_BIT_SET(iLocal_1523[iVar0], 0))
							{
								STREAMING::REQUEST_MODEL(GlobalFunc_2211());
								bVar17 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
								iVar21 = 2;
							}
							else if (!bLocal_74 && ((!MISC::IS_BIT_SET(iLocal_1523[iVar0], 2) && uVar19) || (MISC::IS_BIT_SET(iLocal_1523[iVar0], 2) && uVar20)))
							{
								bVar17 = true;
								iVar21 = 1;
							}
							else
							{
								STREAMING::REQUEST_MODEL(func_410());
								bVar17 = STREAMING::HAS_MODEL_LOADED(func_410());
								iVar21 = 0;
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_2773[iVar0]))
							{
								if (!bLocal_78 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2773[iVar0], -1))
								{
									if (bVar17)
									{
										if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_2773[iVar0], 1), Var12) < 10000f || iParam2) || iLocal_61)
										{
											func_423(&(iLocal_2773[iVar0]), iVar21, 0);
											MISC::SET_BIT(&(iLocal_1523[iVar0]), 1);
										}
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2773[iVar0], 0))
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1221[iVar0], &cLocal_2525);
							if (fLocal_1202 >= fLocal_685[iVar0])
							{
								if (14 > iLocal_1803)
								{
									fVar15 = (fLocal_1202 - fLocal_685[iVar0]);
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1221[iVar0], &cLocal_2525))
									{
										if (fVar15 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1221[iVar0], &cLocal_2525))
										{
											Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_2773[iVar0], 1) };
											Var9 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_1221[iVar0], fVar15, &cLocal_2525) };
											if (!func_427(Var6, Var12, 5f, fLocal_1213) && func_427(Var9, Var12, 5f, fLocal_1213))
											{
												if (!MISC::IS_BIT_SET(iLocal_1523[iVar0], 1))
												{
													func_423(&(iLocal_2773[iVar0]), iVar21, 0);
												}
												func_433(iVar0, 1090519040);
											}
											else if (((!bLocal_78 || MISC::IS_BIT_SET(iLocal_1523[iVar0], 1)) || iLocal_61) || iParam2)
											{
												if (func_416(&(iLocal_2773[iVar0]), iLocal_1221[iVar0], fVar15, 1, 0, 0, 1, bLocal_75))
												{
													if (!MISC::IS_BIT_SET(iLocal_1523[iVar0], 1))
													{
														func_423(&(iLocal_2773[iVar0]), iVar21, 0);
													}
													ENTITY::SET_ENTITY_COLLISION(iLocal_2773[iVar0], 1, 0);
													VEHICLE::SET_PLAYBACK_SPEED(iLocal_2773[iVar0], fParam1);
													iLocal_1803++;
													iLocal_1372[iVar0]++;
												}
											}
										}
										else
										{
											if (!MISC::IS_BIT_SET(iLocal_1523[iVar0], 1))
											{
												func_423(&(iLocal_2773[iVar0]), iVar21, 0);
											}
											func_433(iVar0, 1090519040);
										}
									}
									else if (fVar15 > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1221[iVar0], &cLocal_2525))
									{
										if (!MISC::IS_BIT_SET(iLocal_1523[iVar0], 1))
										{
											func_423(&(iLocal_2773[iVar0]), iVar21, 0);
										}
										func_433(iVar0, 1090519040);
									}
								}
								else
								{
									if (!MISC::IS_BIT_SET(iLocal_1523[iVar0], 1))
									{
										func_423(&(iLocal_2773[iVar0]), iVar21, 0);
									}
									func_433(iVar0, 1090519040);
								}
							}
							else if (iLocal_58 && !iLocal_66)
							{
								if (!MISC::IS_BIT_SET(iLocal_1523[iVar0], 1))
								{
									func_423(&(iLocal_2773[iVar0]), iVar21, 0);
								}
								func_433(iVar0, 1090519040);
							}
						}
						else
						{
							if (!MISC::IS_BIT_SET(iLocal_1523[iVar0], 1))
							{
								func_423(&(iLocal_2773[iVar0]), iVar21, 0);
							}
							func_433(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_1818 = iVar0;
					}
				}
				else if (iLocal_1372[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2773[iVar0], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2773[iVar0]))
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2773[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								if (bVar18)
								{
									bVar24 = false;
									if (!bLocal_56)
									{
										if ((!bLocal_51 && !iLocal_48) && func_422(iLocal_2773[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_1817 || iLocal_1817 == 0))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iVar5))
												{
													bVar17 = false;
													if (!GlobalFunc_5656(iLocal_2773[iVar0], iVar5) || GlobalFunc_5654(iVar5, iLocal_2773[iVar0], 0))
													{
														bVar24 = true;
													}
												}
												iLocal_1817 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_71 && !MISC::IS_BIT_SET(iLocal_1523[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_1817 || iLocal_1817 == 0))
										{
											Var25 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iLocal_2773[iVar0], 1)) };
											if (Var25.f_1 < 0f)
											{
												if (MISC::ABSF(Var25.f_1) > MISC::ABSF(Var25.x))
												{
													bVar24 = true;
												}
											}
											iVar2++;
											iLocal_1817 = iVar0;
										}
									}
									if (bVar24)
									{
										func_418(iLocal_2773[iVar0]);
										iLocal_1372[iVar0]++;
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_2773[iVar0], fParam1);
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2773[iVar0]);
							}
						}
						else
						{
							iLocal_1372[iVar0]++;
						}
					}
					else
					{
						iLocal_1372[iVar0]++;
					}
				}
				else if (iLocal_1372[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2773[iVar0], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2773[iVar0]))
						{
							iLocal_1372[iVar0]++;
						}
						else
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2773[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_2773[iVar0], fParam1);
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2773[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1221[iVar0], &cLocal_2525))
							{
								if (fLocal_1202 > (fLocal_685[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1221[iVar0], &cLocal_2525)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2773[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2773[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1372[iVar0]++;
					}
				}
				else if (iLocal_1372[iVar0] == 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2773[iVar0]))
					{
						fVar16 = ENTITY::GET_ENTITY_SPEED(iLocal_2773[iVar0]);
					}
					iLocal_1803 = (iLocal_1803 - 1);
					func_433(iVar0, fVar16);
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
			iLocal_1807 = iVar22;
		}
		if (iVar2 < 3)
		{
			iLocal_1817 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_1818 = 0;
		}
	}
	else
	{
		func_406();
	}
}


void func_433(int iParam0, float fParam1)//Position - 0x2819C
{
	int iVar0;
	
	if (!iLocal_2542[iParam0] == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2542[iParam0]);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_2773[iParam0]))
	{
		ENTITY::SET_ENTITY_COLLISION(iLocal_2773[iParam0], 1, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_2773[iParam0], 0);
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2773[iParam0], -1);
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
			TASK::TASK_VEHICLE_MISSION(iVar0, iLocal_2773[iParam0], 0, 1, fParam1, 786603, 5f, 5f, 1);
			PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
			if (bLocal_80)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, 0);
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar0, fParam1);
		}
	}
	if (!bLocal_49)
	{
		if (!bLocal_77)
		{
			GlobalFunc_2221(iVar0);
			GlobalFunc_2210(iLocal_2773[iParam0]);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::DELETE_PED(&iVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2773[iParam0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_2773[iParam0]));
		}
	}
	if (!bLocal_59 && !bLocal_72)
	{
		if (iLocal_1221[iParam0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1221[iParam0], &cLocal_2525);
		}
	}
	iLocal_1372[iParam0] = 99;
}

void func_434(int iParam0, float fParam1, float fParam2)//Position - 0x282F5
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
			func_426(Var1, Var10, fVar13);
		}
	}
}

void func_435(int iParam0, float fParam1)//Position - 0x28378
{
	if (!bLocal_60)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > (fParam1 * fParam1))
				{
					STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
				}
				else
				{
					STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
				}
			}
		}
	}
}

void func_436(int iParam0, float fParam1)//Position - 0x283C5
{
	if (!bLocal_60)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > (fParam1 * fParam1))
				{
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
				}
				else
				{
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				}
			}
		}
	}
}

void func_437(int iParam0, float fParam1)//Position - 0x28412
{
	var uVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
	{
		fVar1 = (fLocal_1216 + 2000f);
		fVar2 = (fLocal_1217 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			uVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (fVar1 <= VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(uVar0))
			{
				if (iLocal_1813 == 0)
				{
					Local_2513 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fLocal_1216) };
					iLocal_1813++;
				}
				else if (iLocal_1813 == 1)
				{
					Local_2516 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fVar1) };
					iLocal_1813++;
				}
				else if (!bLocal_78)
				{
					if (Local_2513.x > Local_2516.x)
					{
						fVar3 = Local_2513.x;
						Local_2513.x = Local_2516.x;
						Local_2516.x = fVar3;
					}
					if (Local_2513.f_1 > Local_2516.f_1)
					{
						fVar3 = Local_2513.f_1;
						Local_2513.f_1 = Local_2516.f_1;
						Local_2516.f_1 = fVar3;
					}
					if (Local_2513.f_2 > Local_2516.f_2)
					{
						fVar3 = Local_2513.f_2;
						Local_2513.f_2 = Local_2516.f_2;
						Local_2516.f_2 = fVar3;
					}
					Local_2513 = { Local_2513 - Vector(fLocal_1220, fLocal_1220, fLocal_1220) };
					Local_2516 = { Local_2516 + Vector(fLocal_1220, fLocal_1220, fLocal_1220) };
					PATHFIND::SET_ROADS_IN_AREA(Local_2513, Local_2516, 0, 0);
					fLocal_1216 = fVar1;
					iLocal_1813 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			uVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (iLocal_1816 == 0)
			{
				Local_2519 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fLocal_1217) };
				iLocal_1816++;
			}
			else if (iLocal_1816 == 1)
			{
				Local_2522 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fVar2) };
				iLocal_1816++;
			}
			else if (!bLocal_78 && !bVar4)
			{
				if (Local_2519.x > Local_2522.x)
				{
					fVar3 = Local_2519.x;
					Local_2519.x = Local_2522.x;
					Local_2522.x = fVar3;
				}
				if (Local_2519.f_1 > Local_2522.f_1)
				{
					fVar3 = Local_2519.f_1;
					Local_2519.f_1 = Local_2522.f_1;
					Local_2522.f_1 = fVar3;
				}
				if (Local_2519.f_2 > Local_2522.f_2)
				{
					fVar3 = Local_2519.f_2;
					Local_2519.f_2 = Local_2522.f_2;
					Local_2522.f_2 = fVar3;
				}
				Local_2519 = { Local_2519 - Vector(fLocal_1220, fLocal_1220, fLocal_1220) };
				Local_2522 = { Local_2522 + Vector(fLocal_1220, fLocal_1220, fLocal_1220) };
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_2519, Local_2522, 1);
				fLocal_1217 = fVar2;
				iLocal_1816 = 0;
			}
		}
	}
}



void func_440(struct<10> Param0, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, char* sParam22, float fParam23, int iParam24, float fParam25, int iParam26, int iParam27, int iParam28)//Position - 0x2874A
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Param0, 0))
	{
		if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Param0))
		{
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Param0.f_9, sParam22))
			{
				if (iParam27 == 0)
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Param0, Param0.f_9, sParam22, 1);
				}
				else if (iParam27 == 1)
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Param0, Param0.f_9, sParam22, iParam28, 0, 786603);
				}
				if (fParam25 > 0f)
				{
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Param0, fParam25);
				}
				else if (iParam26 == 1)
				{
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Param0, func_441(ENTITY::GET_ENTITY_COORDS(Param0, 1), Param0.f_9, sParam22, 16));
				}
				VEHICLE::SET_PLAYBACK_SPEED(Param0, fParam23);
				if (iParam24 == 1)
				{
					VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(Param0);
				}
			}
		}
	}
}

float func_441(struct<3> Param0, int iParam3, char* sParam4, int iParam5)//Position - 0x287E7
{
	var uVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	
	uVar0 = VEHICLE::GET_VEHICLE_RECORDING_ID(uParam3, sParam4);
	fVar1 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(uVar0);
	fVar2 = (fVar1 / 2f);
	fVar3 = (fVar1 / 2f);
	iVar4 = 0;
	while (iVar4 <= iParam5)
	{
		if (SYSTEM::VDIST2(Param0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, GlobalFunc_253((fVar2 - fVar3), 0f, fVar1))) < SYSTEM::VDIST2(Param0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, GlobalFunc_253((fVar2 + fVar3), 0f, fVar1))))
		{
			fVar3 = (fVar3 / 2f);
			fVar2 = (fVar2 - fVar3);
		}
		if (SYSTEM::VDIST2(Param0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, GlobalFunc_253((fVar2 - fVar3), 0f, fVar1))) > SYSTEM::VDIST2(Param0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, GlobalFunc_253((fVar2 + fVar3), 0f, fVar1))))
		{
			fVar3 = (fVar3 / 2f);
			fVar2 = (fVar2 + fVar3);
		}
		iVar4++;
	}
	return fVar2;
}

void func_442()//Position - 0x288AC
{
	iLocal_61 = 1;
}

void func_443()//Position - 0x288B7
{
	Local_1820[0 /*3*/] = { -867.2245f, 209.0847f, 73.3253f };
	fLocal_81[0] = 0.0774f;
	fLocal_232[0] = 0.0159f;
	fLocal_383[0] = 0.8993f;
	fLocal_534[0] = -0.4302f;
	iLocal_1221[0] = 4;
	fLocal_685[0] = 2600f;
	iLocal_2542[0] = joaat("dilettante");
	Local_1820[1 /*3*/] = { -785.084f, 220.7164f, 75.9672f };
	fLocal_81[1] = 0.0123f;
	fLocal_232[1] = 0.0143f;
	fLocal_383[1] = 0.733f;
	fLocal_534[1] = 0.6799f;
	iLocal_1221[1] = 76;
	fLocal_685[1] = 6170f;
	iLocal_2542[1] = joaat("baller");
	Local_1820[2 /*3*/] = { -992.311f, 217.7745f, 67.0249f };
	fLocal_81[2] = 0.0234f;
	fLocal_232[2] = 0.0272f;
	fLocal_383[2] = -0.1712f;
	fLocal_534[2] = 0.9846f;
	iLocal_1221[2] = 10;
	fLocal_685[2] = 10475f;
	iLocal_2542[2] = joaat("jackal");
	Local_1820[3 /*3*/] = { -967.032f, 362.0272f, 71.8551f };
	fLocal_81[3] = -0.0168f;
	fLocal_232[3] = -0.0225f;
	fLocal_383[3] = 0.7457f;
	fLocal_534[3] = -0.6657f;
	iLocal_1221[3] = 1;
	fLocal_685[3] = 11425f;
	iLocal_2542[3] = joaat("voltic");
	Local_1820[4 /*3*/] = { -991.3395f, 258.1681f, 67.7794f };
	fLocal_81[4] = -0.0273f;
	fLocal_232[4] = 0.0303f;
	fLocal_383[4] = 0.7281f;
	fLocal_534[4] = -0.6843f;
	iLocal_1221[4] = 71;
	fLocal_685[4] = 12480f;
	iLocal_2542[4] = joaat("baller");
	Local_1820[5 /*3*/] = { -1069.235f, 209.9156f, 61.2541f };
	fLocal_81[5] = 0.0255f;
	fLocal_232[5] = 0.0146f;
	fLocal_383[5] = 0.178f;
	fLocal_534[5] = 0.9836f;
	iLocal_1221[5] = 7;
	fLocal_685[5] = 13475f;
	iLocal_2542[5] = joaat("rapidgt");
	Local_1820[6 /*3*/] = { -1007.483f, 269.8612f, 66.4751f };
	fLocal_81[6] = -0.0376f;
	fLocal_232[6] = -0.0134f;
	fLocal_383[6] = 0.717f;
	fLocal_534[6] = 0.6959f;
	iLocal_1221[6] = 15;
	fLocal_685[6] = 15000f;
	iLocal_2542[6] = joaat("rocoto");
	Local_1820[7 /*3*/] = { -1078.197f, 278.499f, 63.8791f };
	fLocal_81[7] = 0.0064f;
	fLocal_232[7] = -0.0266f;
	fLocal_383[7] = 0.3714f;
	fLocal_534[7] = 0.9281f;
	iLocal_1221[7] = 16;
	fLocal_685[7] = 16225f;
	iLocal_2542[7] = joaat("baller");
	Local_1820[8 /*3*/] = { -1064.993f, 270.3903f, 63.4535f };
	fLocal_81[8] = -0.0069f;
	fLocal_232[8] = -0.0066f;
	fLocal_383[8] = 0.6859f;
	fLocal_534[8] = 0.7276f;
	iLocal_1221[8] = 18;
	fLocal_685[8] = 17396f;
	iLocal_2542[8] = joaat("blista");
	Local_1820[9 /*3*/] = { -1084.025f, 290.5645f, 63.6725f };
	fLocal_81[9] = -0.0006f;
	fLocal_232[9] = -0.0104f;
	fLocal_383[9] = 0.9994f;
	fLocal_534[9] = 0.034f;
	iLocal_1221[9] = 19;
	fLocal_685[9] = 18189f;
	iLocal_2542[9] = joaat("felon2");
	Local_1820[10 /*3*/] = { -1104.453f, 262.3094f, 64.0965f };
	fLocal_81[10] = -0.0328f;
	fLocal_232[10] = 0.0305f;
	fLocal_383[10] = -0.7028f;
	fLocal_534[10] = 0.7099f;
	iLocal_1221[10] = 20;
	fLocal_685[10] = 18960f;
	iLocal_2542[10] = joaat("rocoto");
	Local_1820[11 /*3*/] = { -1105.797f, 267.6655f, 63.9132f };
	fLocal_81[11] = -0.0315f;
	fLocal_232[11] = 0.0297f;
	fLocal_383[11] = -0.689f;
	fLocal_534[11] = 0.7234f;
	iLocal_1221[11] = 21;
	fLocal_685[11] = 18990f;
	iLocal_2542[11] = joaat("prairie");
	Local_1820[12 /*3*/] = { -1118.203f, 260.7814f, 64.8678f };
	fLocal_81[12] = -0.0372f;
	fLocal_232[12] = 0.0464f;
	fLocal_383[12] = -0.6148f;
	fLocal_534[12] = 0.7865f;
	iLocal_1221[12] = 22;
	fLocal_685[12] = 19500f;
	iLocal_2542[12] = joaat("serrano");
	Local_1820[13 /*3*/] = { -1074.349f, 351.9871f, 67.1602f };
	fLocal_81[13] = 0.0396f;
	fLocal_232[13] = -0.0133f;
	fLocal_383[13] = 0.0033f;
	fLocal_534[13] = 0.9991f;
	iLocal_1221[13] = 23;
	fLocal_685[13] = 20950f;
	iLocal_2542[13] = joaat("dilettante");
	Local_1820[14 /*3*/] = { -1064.639f, 341.6877f, 67.0819f };
	fLocal_81[14] = 0.0006f;
	fLocal_232[14] = -0.0231f;
	fLocal_383[14] = 0.685f;
	fLocal_534[14] = 0.7282f;
	iLocal_1221[14] = 24;
	fLocal_685[14] = 22890f;
	iLocal_2542[14] = joaat("rocoto");
	Local_1820[15 /*3*/] = { -1114.752f, 483.8648f, 82.1372f };
	fLocal_81[15] = -0.0001f;
	fLocal_232[15] = -0.0011f;
	fLocal_383[15] = 0.9945f;
	fLocal_534[15] = 0.1048f;
	iLocal_1221[15] = 73;
	fLocal_685[15] = 33000f;
	iLocal_2542[15] = joaat("baller");
	Local_1820[16 /*3*/] = { -1300.973f, 457.5321f, 97.5162f };
	fLocal_81[16] = -0.0343f;
	fLocal_232[16] = 0.0347f;
	fLocal_383[16] = -0.6816f;
	fLocal_534[16] = 0.7301f;
	iLocal_1221[16] = 28;
	fLocal_685[16] = 39850f;
	iLocal_2542[16] = joaat("felon");
	Local_1820[17 /*3*/] = { -1360.645f, 458.8226f, 102.7037f };
	fLocal_81[17] = 0.0295f;
	fLocal_232[17] = -0.0343f;
	fLocal_383[17] = 0.753f;
	fLocal_534[17] = -0.6565f;
	iLocal_1221[17] = 29;
	fLocal_685[17] = 40850f;
	iLocal_2542[17] = joaat("cogcabrio");
	Local_2422[0 /*3*/] = { -947.3407f, 422.2456f, 78.9748f };
	fLocal_840[0] = -0.0513f;
	fLocal_866[0] = -0.0036f;
	fLocal_892[0] = 0.8378f;
	fLocal_918[0] = 0.5436f;
	iLocal_1674[0] = 2;
	fLocal_944[0] = 15000f;
	fLocal_970[0] = 0.8f;
	iLocal_2744[0] = joaat("benson");
	Local_2422[1 /*3*/] = { -1062.919f, 452.6988f, 74.4478f };
	fLocal_840[1] = 0.0294f;
	fLocal_866[1] = -0.041f;
	fLocal_892[1] = 0.8439f;
	fLocal_918[1] = 0.5341f;
	iLocal_1674[1] = 70;
	fLocal_944[1] = 28912f;
	fLocal_970[1] = 1f;
	iLocal_2744[1] = joaat("cogcabrio");
}

void func_444(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x29083
{
	struct<3> Var0;
	
	StringCopy(&cLocal_2525, sParam0, 64);
	bLocal_57 = true;
	iLocal_62 = 0;
	iLocal_1803 = 0;
	iLocal_1804 = 0;
	iLocal_1805 = 0;
	iLocal_1806 = iParam1;
	iLocal_1807 = 0;
	iLocal_1808 = 0;
	iLocal_1809 = 0;
	iLocal_1813 = 0;
	iLocal_1816 = 0;
	iLocal_1814 = -1;
	iLocal_1815 = -1;
	iLocal_1817 = 0;
	iLocal_1818 = 0;
	fLocal_1216 = 0f;
	fLocal_1217 = 0f;
	fLocal_1202 = 0f;
	iLocal_63 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		Local_2501.x = (Var0.x - 100f);
		Local_2501.f_1 = (Var0.f_1 - 100f);
		Local_2501.f_2 = (Var0.f_2 - 100f);
		Local_2504.x = (Var0.x + 100f);
		Local_2504.f_1 = (Var0.f_1 + 100f);
		Local_2504.f_2 = (Var0.f_2 + 100f);
		PATHFIND::SET_ROADS_IN_AREA(Local_2501, Local_2504, 0, 0);
		if (bParam2)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(Var0, 500f, 0, 0, 0, 0, 0);
		}
	}
	PED::ADD_RELATIONSHIP_GROUP("rgh_traffic", &iLocal_2541);
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
	func_397();
}

void func_445(var uParam0)//Position - 0x291A4
{
	float fVar0;
	var uVar1;
	
	if (iLocal_3738 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_3244) && ENTITY::DOES_ENTITY_EXIST(Local_3160))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3244, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3200, 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3244) || VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(Local_3244))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(Local_3200, Local_3244, Local_3045, 0, 1, 0))
					{
						if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						{
							if (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()))
							{
								if (!PED::IS_PED_INJURED(Local_3160))
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_3160))
									{
										GlobalFunc_5130(Local_3160, "GENERIC_INSULT_HIGH", 3);
									}
									VEHICLE::START_VEHICLE_HORN(Local_3244, 3000, 0, 0);
									iLocal_3738 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (iLocal_3725 == 1)
			{
				STREAMING::REQUEST_MODEL(Local_3244.f_6);
				STREAMING::REQUEST_MODEL(Local_3160.f_6);
				VEHICLE::REQUEST_VEHICLE_RECORDING(Local_3244.f_9, sLocal_3060);
				if ((STREAMING::HAS_MODEL_LOADED(Local_3244.f_6) && STREAMING::HAS_MODEL_LOADED(Local_3160.f_6)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_3244.f_9, sLocal_3060))
				{
					if (func_322(&Local_3244, 0, 0, 145, 0, -1, 62, 131, 0, 0))
					{
						if (func_447(&Local_3160, 0, iLocal_3104, 0, 145, 1, 1, 0, Local_3244, -1, 0))
						{
							if (!PED::IS_PED_INJURED(Local_3160))
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_3160, 20, 1);
							}
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3244.f_6);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3160.f_6);
							*uParam0++;
						}
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_3725 == 1)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(Local_3200, -1355.509f, 469.1981f, 102.2932f, 200f, 200f, 200f, 0, 1, 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3222, 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3222))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3222) >= 45750f)
							{
								if (!PED::IS_PED_INJURED(Local_3160) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3244, 0))
								{
									func_440(Local_3244, sLocal_3060, 1.1f, 0, 800f, 0, 1, 1);
									AUDIO::START_AUDIO_SCENE("FAMILY_3_RV_BLOCKS_ROAD");
									AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_3244, "FAMILY_3_RV", 0);
									Local_3160.f_11 = 0;
									*uParam0++;
								}
							}
						}
					}
				}
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_3160))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_3160);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_3244))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_3244);
				}
				*uParam0++;
			}
			break;
		
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3244, 0) && !PED::IS_PED_INJURED(Local_3160))
			{
				switch (Local_3160.f_11)
				{
					case 0:
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3244))
						{
							fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3244);
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_3244, Local_3200))
							{
								RECORDING::_0x293220DA1B46CEBC(3f, 0f, 3);
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3244);
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(Local_3244, Local_3244.f_9, sLocal_3060, 5f, 786603);
								Local_3160.f_11 = 1;
							}
							if (fVar0 < 8510f)
							{
								func_446(Local_3200, Local_3244, &uVar1, 50f, 1.05f, 1.55f);
							}
							if (fVar0 > 10085f)
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3244);
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(Local_3244, Local_3244.f_9, sLocal_3060, 5f, 786469);
								Local_3160.f_11 = 1;
							}
						}
						break;
					
					case 1:
						if (!VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(Local_3244))
						{
							TASK::TASK_VEHICLE_DRIVE_WANDER(Local_3160, Local_3244, 15f, 786469);
							Local_3160.f_11 = 2;
						}
						break;
					
					case 2:
						if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_3244, Local_3045, 0, 1, 0))
						{
							AUDIO::STOP_AUDIO_SCENE("FAMILY_3_RV_BLOCKS_ROAD");
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3244, 0))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_3244);
							}
							if (!PED::IS_PED_INJURED(Local_3160))
							{
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_3160);
							}
							VEHICLE::REMOVE_VEHICLE_RECORDING(Local_3244.f_9, sLocal_3060);
						}
						break;
					}
			}
			break;
	}
}

void func_446(int iParam0, int iParam1, var uParam2, float fParam3, float fParam4, float fParam5)//Position - 0x29549
{
	float fVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam1))
		{
			fVar0 = (fParam3 / GlobalFunc_156(iParam0, iParam1, 1));
			if (fVar0 >= fParam5)
			{
				fVar0 = fParam5;
			}
			if (fVar0 < fParam4)
			{
				fVar0 = fParam4;
			}
			VEHICLE::SET_PLAYBACK_SPEED(iParam1, fVar0);
			*uParam2 = fVar0;
		}
	}
}

int func_447(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x295A3
{
	if (iParam1 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			STREAMING::REQUEST_MODEL(iParam0->f_6);
			if (STREAMING::HAS_MODEL_LOADED(iParam0->f_6))
			{
				if (iParam8 == 0)
				{
					if (iParam4 == 145)
					{
						*iParam0 = PED::CREATE_PED(26, iParam0->f_6, iParam0->f_2, iParam0->f_5, 1, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
					}
					else if (GlobalFunc_6705(iParam0, iParam4, iParam0->f_2, iParam0->f_5, 1))
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
					}
					if (!PED::IS_PED_INJURED(*iParam0))
					{
						func_708(*iParam0, iParam2, iParam5, iParam10, iParam6, iParam7);
						if (iParam3 == 1)
						{
							iParam0->f_1 = GlobalFunc_6783(*iParam0, 0, 0);
						}
					}
					return 1;
				}
				else if (iParam8 != 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam8, 0))
					{
						if (iParam4 == 145)
						{
							*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam8, 26, iParam0->f_6, iParam9, 1, 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
						}
						else if (GlobalFunc_7140(iParam0, iParam4, iParam8, iParam9, 1))
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
						}
						if (!PED::IS_PED_INJURED(*iParam0))
						{
							func_708(*iParam0, iParam2, iParam5, iParam10, iParam6, iParam7);
							if (iParam3 == 1)
							{
								iParam0->f_1 = GlobalFunc_6783(*iParam0, 0, 0);
							}
						}
						return 1;
					}
				}
			}
		}
		else
		{
			return 1;
		}
	}
	else if (iParam1 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (iParam8 == 0)
			{
				if (func_704(iParam0, iParam4, iParam0->f_2, iParam0->f_5, 1, 0, 0))
				{
					func_708(*iParam0, iParam2, iParam5, iParam10, iParam6, iParam7);
					if (iParam3 == 1)
					{
						iParam0->f_1 = GlobalFunc_6783(*iParam0, 0, 0);
					}
					return 1;
				}
			}
			else if (iParam8 != 0)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam8, 0))
				{
					if (func_448(iParam0, iParam4, iParam8, iParam9, 1, 0, 0))
					{
						func_708(*iParam0, iParam2, iParam5, iParam10, iParam6, iParam7);
						if (iParam3 == 1)
						{
							iParam0->f_1 = GlobalFunc_6783(*iParam0, 0, 0);
						}
						return 1;
					}
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_448(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x2978A
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
				*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, uParam3, 1, 1);
				GlobalFunc_8364(*iParam0, iParam1, bParam5);
				PED::_0xE861D0B05C7662B8(*iParam0, 0, 0);
				func_696(*iParam0);
				GlobalFunc_7933(*iParam0, 1, 0);
				GlobalFunc_7693(*iParam0);
				GlobalFunc_7932(*iParam0);
				func_450(*iParam0, bParam6);
				GlobalFunc_516(*iParam0);
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


int func_450(int iParam0, bool bParam1)//Position - 0x298B5
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_5101(iVar0))
	{
		GlobalFunc_5100(iVar0, 0);
		func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		func_540(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (GlobalFunc_7685(iParam0))
		{
			GlobalFunc_5100(iVar0, 0);
			func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			func_540(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[120] && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122])
			{
				func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (GlobalFunc_10984(iParam0, 3, 169))
					{
						func_674(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						return 1;
					}
				}
			}
			if (GlobalFunc_10984(iParam0, 12, 6))
			{
				func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10984(iParam0, 12, 17))
			{
				if (!GlobalFunc_10986(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10984(iParam0, 12, 20))
			{
				if (!GlobalFunc_10986(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10984(iParam0, 12, 21))
			{
				if (!GlobalFunc_10986(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10984(iParam0, 12, 22))
			{
				if (!GlobalFunc_10986(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10984(iParam0, 12, 11))
			{
				func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10984(iParam0, 12, 10))
			{
				func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10984(iParam0, 12, 50))
			{
				func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10984(iParam0, 14, 59))
			{
				func_674(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10984(iParam0, 8, 22))
			{
				func_674(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10984(iParam0, 12, 14))
			{
				func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_10984(iParam0, 12, 13))
			{
				if (!GlobalFunc_10986(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10984(iParam0, 12, 14))
			{
				if (!GlobalFunc_10986(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10984(iParam0, 12, 15))
			{
				if (!GlobalFunc_10986(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10984(iParam0, 12, 4))
			{
				func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10984(iParam0, 12, 3))
			{
				func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10984(iParam0, 14, 82))
			{
				func_674(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10984(iParam0, 8, 76))
			{
				func_674(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10984(iParam0, 12, 1))
			{
				func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 2:
			if (GlobalFunc_10984(iParam0, 12, 12))
			{
				func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10984(iParam0, 12, 15))
			{
				func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (GlobalFunc_10984(iParam0, 3, 71))
				{
					func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10984(iParam0, 12, 17))
			{
				if (!GlobalFunc_10986(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10984(iParam0, 12, 18))
			{
				if (!GlobalFunc_10986(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10984(iParam0, 12, 19))
			{
				if (!GlobalFunc_10986(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10984(iParam0, 12, 7))
			{
				func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10984(iParam0, 12, 6))
			{
				func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10984(iParam0, 14, 88))
			{
				func_674(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10984(iParam0, 8, 17))
			{
				func_674(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10984(iParam0, 12, 11))
			{
				func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
	}
	return 0;
}


























































































void func_540(int iParam0, int iParam1)//Position - 0x4340E
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
				iVar1 = GlobalFunc_11101(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					GlobalFunc_521(iVar0);
					func_542(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
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


void func_542(int iParam0, var uParam1, bool bParam2)//Position - 0x43686
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
			if (GlobalFunc_11103(iParam0, iVar1, &iVar2, 0))
			{
				func_674(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (GlobalFunc_11099(iParam0, iVar1, &iVar2))
			{
				func_674(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_6784(741, uParam1->f_60, Global_68104, 1);
			GlobalFunc_6784(742, uParam1->f_61, Global_68104, 1);
			iVar4 = GlobalFunc_4915(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			func_545(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			if (!bParam2)
			{
				iVar5 = GlobalFunc_4915(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_545(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
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



int func_545(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x4391D
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
		Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		GlobalFunc_10983(iVar5, iParam1, iParam2, 1);
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
					Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, 10, 0) };
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
						GlobalFunc_10983(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, iVar0, uVar15[iVar0]) };
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
								Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, 14, uVar31[iVar1]) };
								GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
								if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
								{
									GlobalFunc_10983(iVar5, iVar0, uVar15[iVar0], 1);
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
								GlobalFunc_10983(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, iVar0, GlobalFunc_11098(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					uVar41 = { GlobalFunc_7617(iVar5, 0) };
					func_545(iParam0, iVar0, uVar41[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
			}
			iVar0++;
		}
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0)
		{
			iVar57 = GlobalFunc_9234();
			if (iVar57 != -1)
			{
				GlobalFunc_9233(iVar57, 0, Global_68104);
			}
			func_625(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar58 = { GlobalFunc_7616(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, 14, uVar58[iVar1]) };
			GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
			{
				GlobalFunc_10983(iVar5, 14, uVar58[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_68105 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = GlobalFunc_11097(iParam0, iVar5, 14, uVar58[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_545(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
			iVar3 = GlobalFunc_11097(iParam0, iVar5, 1, iVar69, 14, Global_68106[1 /*14*/].f_12);
			if (iVar3 != -99 && iVar3 != iParam2)
			{
				iVar7 = GlobalFunc_5013(iVar5, 1, -1);
			}
		}
		GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
		{
			GlobalFunc_10983(iVar5, iParam1, iParam2, 1);
		}
		if (iParam5 == 0)
		{
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11097(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_545(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						iVar73 = GlobalFunc_11097(iParam0, iVar5, 11, iVar70, 3, 0);
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
							func_545(iParam0, 8, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, iParam1, iParam2) };
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
								func_545(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, iParam1, iParam2) };
								iVar9 = -99;
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									func_545(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								}
								Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, iParam1, iParam2) };
							}
						}
					}
					else
					{
						Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, 11, iVar70) };
						iVar79 = Global_68106[1 /*14*/].f_3;
						Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, 11, iParam2) };
						iVar80 = Global_68106[1 /*14*/].f_3;
						if (iVar79 != iVar80)
						{
							Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, 8, iVar71) };
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
										Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, 11, iVar82) };
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
								func_545(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_545(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, iParam1, iParam2) };
						}
					}
				}
				else
				{
					GlobalFunc_10719(iVar5, iParam2);
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_625(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, GlobalFunc_11098(iParam0, 8, -1), iParam2);
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
				func_589(iParam0, iParam2, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			func_625(iParam0, iParam1, iParam2, iParam6, 0);
			iVar84 = GlobalFunc_6669(iParam0, 11);
			if (GlobalFunc_6737(iVar5, iVar84))
			{
				iVar85 = GlobalFunc_6736(iVar5, iParam2, Global_68106[1 /*14*/].f_4);
				GlobalFunc_10719(iVar5, iVar85);
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
						iVar3 = GlobalFunc_11097(iParam0, iVar5, iParam1, iVar94, 14, iVar95);
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
					iVar3 = GlobalFunc_11097(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_545(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						if (!GlobalFunc_10981(iParam0, 9, iVar97))
						{
							func_545(iParam0, 9, iVar97, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						func_545(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_545(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
					iVar99 = GlobalFunc_11098(iParam0, 4, -1);
					iVar100 = iParam2;
				}
				else
				{
					iVar99 = iParam2;
					iVar100 = GlobalFunc_11098(iParam0, 11, -1);
				}
				if (GlobalFunc_6729(iVar5, 11, iVar100))
				{
					if (!GlobalFunc_6728(iVar5, 4, iVar99))
					{
						if (GlobalFunc_6727(iVar5, 4, iVar99, &uVar101))
						{
							func_545(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
				}
				else if (GlobalFunc_6728(iVar5, 4, iVar99))
				{
					if (GlobalFunc_6726(iVar5, 4, iVar99, &uVar101))
					{
						func_545(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
					iVar3 = GlobalFunc_11097(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_545(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar3 = GlobalFunc_11097(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_545(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (GlobalFunc_11190(iParam0, &uVar4))
		{
			func_545(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	if (iVar6 != -99)
	{
		func_545(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar9 != -99)
	{
		func_545(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar7 != -99)
	{
		func_545(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				func_545(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}












































void func_589(int iParam0, int iParam1, bool bParam2)//Position - 0x49CA2
{
	int iVar0;
	int iVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	func_608(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = GlobalFunc_6735(iVar0, iParam1);
	if (iVar1 != -1)
	{
		GlobalFunc_9233(iVar1, 1, Global_68104);
	}
	func_590(iParam0, bParam2, 0);
}

void func_590(int iParam0, bool bParam1, bool bParam2)//Position - 0x49CE4
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
		bVar15 = GlobalFunc_11192(iParam0);
		bVar16 = GlobalFunc_5010(iParam0);
		bVar17 = GlobalFunc_11191(iParam0);
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
			if (GlobalFunc_8609(iVar18, iVar0))
			{
				if (GlobalFunc_5658(&Var1, iVar18, iVar14, iParam0, -1))
				{
					if (GlobalFunc_9230(&Var1, Var1.f_8, bVar15, bVar16, bParam1, bVar17))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar18++;
		}
		if (GlobalFunc_8609(123, iVar0))
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
					if (GlobalFunc_8609(iVar36, iVar0))
					{
						if (GlobalFunc_9230(&(Var21.f_7), Var21.f_6, bVar15, bVar16, bParam1, bVar17))
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


















void func_608(int iParam0, int iParam1)//Position - 0x4D68A
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
					GlobalFunc_9233(13, 0, Global_68104);
					GlobalFunc_9233(14, 0, Global_68104);
					GlobalFunc_9233(15, 0, Global_68104);
					GlobalFunc_9233(16, 0, Global_68104);
					GlobalFunc_9233(71, 0, Global_68104);
					GlobalFunc_9233(72, 0, Global_68104);
					return;
				}
				else if (iParam0 == 277073536)
				{
					if (iVar13 == 3)
					{
						GlobalFunc_9233(73, 0, Global_68104);
						GlobalFunc_9233(74, 0, Global_68104);
						GlobalFunc_9233(75, 0, Global_68104);
						GlobalFunc_9233(76, 0, Global_68104);
						GlobalFunc_9233(77, 0, Global_68104);
						GlobalFunc_9233(78, 0, Global_68104);
						GlobalFunc_9233(79, 0, Global_68104);
						GlobalFunc_9233(80, 0, Global_68104);
						GlobalFunc_9233(81, 0, Global_68104);
						GlobalFunc_9233(82, 0, Global_68104);
						GlobalFunc_9233(83, 0, Global_68104);
						GlobalFunc_9233(84, 0, Global_68104);
						GlobalFunc_9233(85, 0, Global_68104);
						GlobalFunc_9233(86, 0, Global_68104);
						GlobalFunc_9233(90, 0, Global_68104);
						GlobalFunc_9233(91, 0, Global_68104);
						GlobalFunc_9233(124, 0, Global_68104);
						GlobalFunc_9233(125, 0, Global_68104);
						GlobalFunc_9233(87, 0, Global_68104);
						GlobalFunc_9233(88, 0, Global_68104);
						GlobalFunc_9233(89, 0, Global_68104);
						iVar15 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(3);
						iVar14 = 0;
						while (iVar14 < iVar15)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(3, iVar14, &Var16))
							{
								if (Var16.f_6 == 277073536)
								{
									GlobalFunc_9233((129 + iVar14), 0, Global_68104);
								}
							}
							iVar14++;
						}
					}
					else
					{
						GlobalFunc_9233(73, 0, Global_68104);
						GlobalFunc_9233(74, 0, Global_68104);
						GlobalFunc_9233(75, 0, Global_68104);
						GlobalFunc_9233(76, 0, Global_68104);
						GlobalFunc_9233(77, 0, Global_68104);
						GlobalFunc_9233(78, 0, Global_68104);
						GlobalFunc_9233(79, 0, Global_68104);
						GlobalFunc_9233(80, 0, Global_68104);
						GlobalFunc_9233(81, 0, Global_68104);
						GlobalFunc_9233(82, 0, Global_68104);
						GlobalFunc_9233(83, 0, Global_68104);
						GlobalFunc_9233(84, 0, Global_68104);
						GlobalFunc_9233(85, 0, Global_68104);
						GlobalFunc_9233(92, 0, Global_68104);
						GlobalFunc_9233(87, 0, Global_68104);
						GlobalFunc_9233(88, 0, Global_68104);
						GlobalFunc_9233(89, 0, Global_68104);
						iVar32 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(4);
						iVar31 = 0;
						while (iVar31 < iVar32)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(4, iVar31, &Var33))
							{
								if (Var33.f_6 == 277073536)
								{
									GlobalFunc_9233((129 + iVar31), 0, Global_68104);
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
						GlobalFunc_9233(93, 0, Global_68104);
						GlobalFunc_9233(94, 0, Global_68104);
						GlobalFunc_9233(95, 0, Global_68104);
						GlobalFunc_9233(96, 0, Global_68104);
						GlobalFunc_9233(97, 0, Global_68104);
						GlobalFunc_9233(98, 0, Global_68104);
						GlobalFunc_9233(99, 0, Global_68104);
						GlobalFunc_9233(100, 0, Global_68104);
						GlobalFunc_9233(101, 0, Global_68104);
						GlobalFunc_9233(102, 0, Global_68104);
						GlobalFunc_9233(103, 0, Global_68104);
						GlobalFunc_9233(104, 0, Global_68104);
						GlobalFunc_9233(105, 0, Global_68104);
						GlobalFunc_9233(106, 0, Global_68104);
						GlobalFunc_9233(107, 0, Global_68104);
						GlobalFunc_9233(108, 0, Global_68104);
						GlobalFunc_9233(109, 0, Global_68104);
						GlobalFunc_9233(110, 0, Global_68104);
						GlobalFunc_9233(111, 0, Global_68104);
						GlobalFunc_9233(112, 0, Global_68104);
						GlobalFunc_9233(113, 0, Global_68104);
						GlobalFunc_9233(114, 0, Global_68104);
						GlobalFunc_9233(115, 0, Global_68104);
						GlobalFunc_9233(116, 0, Global_68104);
						GlobalFunc_9233(117, 0, Global_68104);
						GlobalFunc_9233(123, 0, Global_68104);
						iVar49 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(3);
						iVar48 = 0;
						while (iVar48 < iVar49)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(3, iVar48, &Var50))
							{
								if (Var50.f_6 == 2140335355)
								{
									GlobalFunc_9233((129 + iVar48), 0, Global_68104);
								}
							}
							iVar48++;
						}
					}
					else
					{
						GlobalFunc_9233(93, 0, Global_68104);
						GlobalFunc_9233(94, 0, Global_68104);
						GlobalFunc_9233(95, 0, Global_68104);
						GlobalFunc_9233(96, 0, Global_68104);
						GlobalFunc_9233(97, 0, Global_68104);
						GlobalFunc_9233(98, 0, Global_68104);
						GlobalFunc_9233(99, 0, Global_68104);
						GlobalFunc_9233(100, 0, Global_68104);
						GlobalFunc_9233(101, 0, Global_68104);
						GlobalFunc_9233(102, 0, Global_68104);
						GlobalFunc_9233(103, 0, Global_68104);
						GlobalFunc_9233(104, 0, Global_68104);
						GlobalFunc_9233(105, 0, Global_68104);
						GlobalFunc_9233(106, 0, Global_68104);
						GlobalFunc_9233(107, 0, Global_68104);
						GlobalFunc_9233(108, 0, Global_68104);
						GlobalFunc_9233(109, 0, Global_68104);
						GlobalFunc_9233(110, 0, Global_68104);
						GlobalFunc_9233(111, 0, Global_68104);
						GlobalFunc_9233(112, 0, Global_68104);
						GlobalFunc_9233(113, 0, Global_68104);
						GlobalFunc_9233(114, 0, Global_68104);
						GlobalFunc_9233(115, 0, Global_68104);
						GlobalFunc_9233(116, 0, Global_68104);
						GlobalFunc_9233(117, 0, Global_68104);
						GlobalFunc_9233(118, 0, Global_68104);
						GlobalFunc_9233(119, 0, Global_68104);
						GlobalFunc_9233(120, 0, Global_68104);
						GlobalFunc_9233(121, 0, Global_68104);
						GlobalFunc_9233(122, 0, Global_68104);
						GlobalFunc_9233(123, 0, Global_68104);
						iVar66 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(4);
						iVar65 = 0;
						while (iVar65 < iVar66)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(4, iVar65, &Var67))
							{
								if (Var67.f_6 == 2140335355)
								{
									GlobalFunc_9233((129 + iVar65), 0, Global_68104);
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
				if (GlobalFunc_5658(&Var0, iVar82, iVar13, iParam1, -1))
				{
					if (Var0.f_8 == iParam0)
					{
						GlobalFunc_9233(Var0.f_11, 0, Global_68104);
					}
				}
				iVar82++;
			}
		}
	}
}

















void func_625(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x52F17
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
			func_608(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!GlobalFunc_10242(iVar0, iParam2, 13) && !GlobalFunc_10242(iVar0, iParam2, 14)) && !GlobalFunc_10242(iVar0, iParam2, 15)) && !GlobalFunc_10242(iVar0, iParam2, 16)) && !GlobalFunc_10242(iVar0, iParam2, 71)) && !GlobalFunc_10242(iVar0, iParam2, 72))
				{
					func_608(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = GlobalFunc_9231(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					func_626(iParam0, iVar2);
				}
				else
				{
					GlobalFunc_9233(iVar2, 1, Global_68104);
				}
			}
		}
	}
}

void func_626(int iParam0, int iParam1)//Position - 0x5303B
{
	int iVar0;
	struct<6> Var1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 != -1)
		{
			iVar0 = GlobalFunc_303(iParam0);
			if (!GlobalFunc_8609(iParam1, -1))
			{
				if (GlobalFunc_5658(&Var1, iParam1, iVar0, iParam0, -1))
				{
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					GlobalFunc_294(iParam0, Var1.f_4, Var1.f_5);
				}
			}
		}
	}
}
















































int func_674(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x6B37C
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
		Global_68106[1 /*14*/] = { GlobalFunc_10878(iVar10, iParam1, iParam2) };
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
				Global_68106[1 /*14*/] = { GlobalFunc_10878(iVar10, iVar0, uVar11[iVar0]) };
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
							Global_68106[1 /*14*/] = { GlobalFunc_10878(iVar10, 14, uVar27[iVar1]) };
							GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8613(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = GlobalFunc_11238(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_674(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
								iVar3 = GlobalFunc_11238(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_674(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10878(iVar10, iVar0, GlobalFunc_11101(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (GlobalFunc_11103(iParam0, iVar10, &iVar4, 1))
							{
								func_674(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_674(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var53 = { GlobalFunc_10878(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 8, iVar5, &uVar11, &Var53))
				{
					func_674(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10878(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_674(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10878(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_674(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10878(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_674(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10878(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_674(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
			Global_68106[1 /*14*/] = { GlobalFunc_10878(iVar10, 14, uVar67[iVar1]) };
			GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8613(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11238(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_674(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = GlobalFunc_11238(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_674(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = GlobalFunc_11238(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_674(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			GlobalFunc_11100(iVar10, iParam1, iParam2);
		}
	}
	if (Global_68105 == 1)
	{
		if (GlobalFunc_11103(iParam0, iVar10, &iVar4, 0))
		{
			func_674(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (GlobalFunc_11099(iParam0, iVar10, &iVar4))
		{
			func_674(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}






















void func_696(int iParam0)//Position - 0x6E2A5
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
		func_542(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
		if (!Global_89948[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!GlobalFunc_526(49))
				{
					iVar1 = GlobalFunc_11101(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					GlobalFunc_11194(GlobalFunc_4917(0), 12, 16, 0, 0, 0, 0);
				}
				if (!GlobalFunc_526(44))
				{
					iVar1 = GlobalFunc_11101(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = GlobalFunc_11101(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					GlobalFunc_11194(GlobalFunc_4917(0), 3, 70, 1, 0, 0, 0);
					GlobalFunc_11194(GlobalFunc_4917(0), 3, 71, 1, 0, 0, 0);
					GlobalFunc_11194(GlobalFunc_4917(0), 3, 72, 1, 0, 0, 0);
					GlobalFunc_11194(GlobalFunc_4917(0), 3, 73, 1, 0, 0, 0);
					GlobalFunc_11194(GlobalFunc_4917(0), 3, 74, 1, 0, 0, 0);
					GlobalFunc_11194(GlobalFunc_4917(0), 3, 75, 1, 0, 0, 0);
					GlobalFunc_11194(GlobalFunc_4917(0), 4, 41, 1, 0, 0, 0);
					GlobalFunc_11194(GlobalFunc_4917(0), 4, 42, 1, 0, 0, 0);
					GlobalFunc_11194(GlobalFunc_4917(0), 4, 43, 1, 0, 0, 0);
					GlobalFunc_11194(GlobalFunc_4917(0), 4, 44, 1, 0, 0, 0);
					GlobalFunc_11194(GlobalFunc_4917(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = GlobalFunc_11101(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				GlobalFunc_521(iVar0);
				func_542(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
			}
		}
		Global_89948[iVar0] = 1;
	}
}








int func_704(int iParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x6ECB3
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
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, uParam5, 0, 0);
			GlobalFunc_8364(*iParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*iParam0, 0, 0);
			func_696(*iParam0);
			GlobalFunc_7933(*iParam0, 1, 0);
			GlobalFunc_7693(*iParam0);
			GlobalFunc_7932(*iParam0);
			func_450(*iParam0, bParam8);
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




void func_708(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x6EE43
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, 0, 0);
			PED::SET_PED_AS_ENEMY(iParam0, iParam5);
			PED::SET_PED_CAN_BE_TARGETTED(iParam0, iParam4);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iParam1);
			PED::SET_PED_CONFIG_FLAG(iParam0, 32, iParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 132, iParam3);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
		}
	}
}


void func_710()//Position - 0x6EF27
{
	if (iLocal_3804 == 0)
	{
		if (((CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 1 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 0) || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 1) || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 2)
		{
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				if (!GlobalFunc_2522(PLAYER::PLAYER_PED_ID(), Local_3200))
				{
					CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else
				{
					iLocal_3804 = 1;
				}
			}
			else
			{
				iLocal_3804 = 1;
			}
		}
		else if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
		{
			if (!GlobalFunc_1461(PLAYER::PLAYER_PED_ID(), Local_3200, 1))
			{
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			else
			{
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
				if (iLocal_3805 == 0)
				{
					if (iLocal_3807 == 0)
					{
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
						{
							GRAPHICS::ANIMPOSTFX_PLAY(GlobalFunc_1078(iLocal_3806, "CamPushInMichael", "CamPushInNeutral"), 0, 0);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							iLocal_3807 = MISC::GET_GAME_TIMER();
						}
						else
						{
							CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
							if (GlobalFunc_2522(PLAYER::PLAYER_PED_ID(), Local_3200))
							{
								GRAPHICS::ANIMPOSTFX_PLAY(GlobalFunc_1078(iLocal_3806, "CamPushInMichael", "CamPushInNeutral"), 0, 0);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
								iLocal_3807 = MISC::GET_GAME_TIMER();
							}
						}
					}
					else
					{
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
						{
							CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
						}
						if (GlobalFunc_2521(300, iLocal_3807))
						{
							iLocal_3805 = 1;
						}
					}
				}
				else
				{
					iLocal_3804 = 1;
				}
			}
		}
	}
}

void func_711()//Position - 0x6F062
{
	iLocal_3637 = 1;
	iLocal_3638 = 0;
	Local_3106.f_7 = 0;
	Local_3106.f_9 = 0;
	Local_3106.f_10 = 0;
	Local_3124.f_9 = 0;
	Local_3124.f_10 = 0;
	iLocal_3636 = 0;
	Local_3106.f_11 = 0;
	Local_3106.f_13 = 0;
	Local_3106.f_16 = 0;
	Local_3142.f_11 = 0;
	Local_3244.f_7 = 0;
	Local_3200.f_7 = 0;
	Local_3200.f_11 = 0;
	iLocal_3742 = 0;
	iLocal_3704 = 0;
	iLocal_3705 = 0;
	iLocal_3706 = 0;
	iLocal_3707 = 0;
	iLocal_3708 = 0;
	fLocal_3740 = 0.65f;
	fLocal_3741 = 0f;
	iLocal_3725 = 0;
	iLocal_3726 = 0;
	iLocal_3727 = 0;
	iLocal_3728 = 0;
	iLocal_3729 = 0;
	iLocal_3730 = 0;
	iLocal_3731 = 0;
	iLocal_3677 = 0;
	iLocal_3678 = 0;
	iLocal_3686 = 0;
	iLocal_3687 = 0;
	fLocal_3688 = 0f;
	bLocal_3690 = false;
	iLocal_3691 = 0;
	iLocal_3695 = 0;
	fLocal_3694 = 0f;
	fLocal_3693 = 0f;
	iLocal_3722 = 0;
	iLocal_3724 = 0;
	iLocal_3723 = 0;
	iLocal_3732 = 0;
	iLocal_3733 = 0;
	iLocal_3735 = 0;
	iLocal_3736 = 0;
	iLocal_3737 = 0;
	iLocal_3738 = 0;
	iLocal_3684 = 0;
	iLocal_3685 = 0;
	iLocal_3702 = 0;
	iLocal_3701 = 0;
	iLocal_3699 = 0;
	iLocal_3700 = 0;
	iLocal_3703 = 0;
	iLocal_3750 = 0;
	iLocal_3751 = 0;
	iLocal_3752 = 0;
	iLocal_3753 = 0;
	iLocal_3754 = 0;
	iLocal_3755 = 0;
	iLocal_3756 = 0;
	iLocal_3757 = 0;
	iLocal_3758 = 0;
	iLocal_3734 = 0;
	iLocal_3709 = 0;
	iLocal_3765 = 0;
	StringCopy(&Local_3077, "FAM3_DCAN", 16);
	StringCopy(&Local_3081, "FAM3_DHOUSE", 16);
	StringCopy(&Local_3085, "FAM3_GBIT", 16);
	StringCopy(&cLocal_3089, "CMN_FLEAVE", 16);
	StringCopy(&cLocal_3093, "CMN_MLEAVE", 16);
	StringCopy(&Local_3097, "LOSE_WANTED", 16);
	iLocal_3103 = 0;
	iLocal_3770 = 0;
	iLocal_3769 = 0;
	iLocal_3772 = 0;
	iLocal_3773 = 0;
	iLocal_3776 = 1;
	iLocal_3777 = 0;
	iLocal_3352 = 0;
	iLocal_3353 = 0;
	iLocal_3354 = 0;
	iLocal_3355 = 0;
	iLocal_3782 = 0;
	iLocal_3766 = 0;
	iLocal_3767 = 0;
	iLocal_3774 = 0;
	iLocal_3775 = 0;
	iLocal_3759 = 0;
	bLocal_3760 = false;
	iLocal_3768 = 0;
	iLocal_3787 = 0;
	iLocal_3788 = 0;
	iLocal_3792 = 0;
	iLocal_3793 = 0;
	iLocal_3794 = 0;
	iLocal_3795 = 0;
	iLocal_3796 = 0;
	iLocal_3798 = 0;
	iLocal_3799 = 0;
	iLocal_3800 = 0;
	iLocal_3801 = 0;
	iLocal_3802 = 0;
	iLocal_3803 = 0;
	iLocal_3804 = 0;
	iLocal_3797 = 0;
	iLocal_3805 = 0;
	iLocal_3807 = 0;
}

int func_712(var uParam0)//Position - 0x6F256
{
	int iVar0;
	
	switch (*uParam0)
	{
		case 0:
			if (GlobalFunc_8315() == 0)
			{
				if (GlobalFunc_5927("family_3_int", 1))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3106, "Franklin", 2, GlobalFunc_4917(1), 0);
					if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Global_86864.f_28[0]))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_28[0], 1, 1);
							Local_3288 = Global_86864.f_28[0];
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3288, "Racket_1", 0, Local_3288.f_7, 0);
						}
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3288, "Racket_1", 2, Local_3288.f_7, 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[1]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Global_86864.f_28[1]))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_28[1], 1, 1);
							Local_3296 = Global_86864.f_28[1];
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3296, "Racket_2", 0, Local_3296.f_7, 0);
						}
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3296, "Racket_2", 2, Local_3296.f_7, 0);
					}
					GlobalFunc_8380(1, 1, 1, 0);
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
					}
					HUD::CLEAR_HELP(1);
					HUD::CLEAR_PRINTS();
					CUTSCENE::START_CUTSCENE(2048);
					RECORDING::_0x48621C9FCA3EBD28(4);
					*uParam0++;
				}
				else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", PLAYER::PLAYER_PED_ID(), 0);
					}
					func_726("Franklin", joaat("player_one"), 17);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 2, 1, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 3, 2, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 4, 2, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 10, 1, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("TennisCoach", 3, 1, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("TennisCoach", 4, 1, 0, 0);
				}
			}
			else if (GlobalFunc_8315() == 1)
			{
				if (GlobalFunc_5927("family_3_int", 24))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3124, "Michael", 2, GlobalFunc_4917(0), 0);
					if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Global_86864.f_28[0]))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_28[0], 1, 1);
							Local_3288 = Global_86864.f_28[0];
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3288, "Racket_1", 0, Local_3288.f_7, 0);
						}
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3288, "Racket_1", 2, Local_3288.f_7, 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[1]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Global_86864.f_28[1]))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_28[1], 1, 1);
							Local_3296 = Global_86864.f_28[1];
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3296, "Racket_2", 0, Local_3296.f_7, 0);
						}
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3296, "Racket_2", 2, Local_3296.f_7, 0);
					}
					GlobalFunc_8380(1, 1, 1, 0);
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
					}
					HUD::CLEAR_HELP(1);
					HUD::CLEAR_PRINTS();
					CUTSCENE::START_CUTSCENE(2048);
					*uParam0++;
				}
				else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", PLAYER::PLAYER_PED_ID(), 0);
					}
					func_726("Michael", joaat("player_zero"), 35);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 2, 1, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 3, 2, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 4, 2, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 10, 1, 0, 0);
				}
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				func_723(24);
				if (func_721() && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
				{
					if (GlobalFunc_2251() == PLAYER::GET_PLAYERS_LAST_VEHICLE())
					{
						if (((!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1)) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE())))
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), -867.9103f, 158.2215f, 63.9014f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 174.2918f);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PLAYER::GET_PLAYERS_LAST_VEHICLE());
							VEHICLE::SET_VEHICLE_ENGINE_ON(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, 1);
							func_718(-867.9103f, 158.2215f, 63.9014f, 174.2918f, 0, 145);
							GlobalFunc_76(24);
						}
					}
				}
				MISC::CLEAR_AREA(Local_3124.f_2, 5000f, 1, 0, 0, 0);
				GlobalFunc_2790(4, 1, 1);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				iLocal_3806 = 0;
				iLocal_3734 = 0;
				*uParam0++;
			}
			break;
		
		case 2:
			func_710();
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 40000f)
				{
					if (iLocal_3769 == 0)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("FAM3_MISSION_START"))
						{
							iLocal_3769 = 1;
						}
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3344))
			{
				if (GlobalFunc_8315() == 0)
				{
					STREAMING::REQUEST_MODEL(Local_3344.f_7);
					if (STREAMING::HAS_MODEL_LOADED(Local_3344.f_7))
					{
						if (CUTSCENE::GET_CUTSCENE_TIME() > 54000)
						{
							if (func_95(&Local_3344, 1))
							{
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3344.f_7);
							}
						}
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3288))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Racket_1", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Racket_1", 0)))
					{
						Local_3288 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Racket_1", 0));
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3296))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Racket_2", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Racket_2", 0)))
					{
						Local_3296 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Racket_2", 0));
					}
				}
			}
			if (GlobalFunc_8315() == 0)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_3106))
				{
					if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Franklin", 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Franklin", 0)))
						{
							Local_3106 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Franklin", 0));
							func_708(Local_3106, 1862763509, 0, 1, 0, 0);
							iLocal_3356[1] = Local_3106;
							PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_3106, 16);
						}
					}
				}
			}
			if (GlobalFunc_8315() == 1)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_3124))
				{
					if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Michael", 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Michael", 0)))
						{
							Local_3124 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Michael", 0));
							func_708(Local_3124, 1862763509, 0, 1, 0, 0);
							iLocal_3356[0] = Local_3124;
						}
					}
				}
			}
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_3200))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_86864[0]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[0], 1))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[0], 1, 1);
							Local_3200 = Global_86864[0];
							func_715(&Local_3200, 1, -1, 132, 0, 0, 0);
							if (GlobalFunc_8315() == 0)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_3200) && !ENTITY::IS_ENTITY_DEAD(Local_3200))
								{
									ENTITY::SET_ENTITY_HEALTH(Local_3200, ENTITY::GET_ENTITY_HEALTH(Local_3200) + 1000);
									VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_3200, (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_3200) + 1000f));
									VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_3200, (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_3200) + 1000f));
									FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(Local_3200, 1), 2.5f);
									if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_3200, 0, 0))
									{
										VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_3200, 0);
									}
									if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_3200, 1, 0))
									{
										VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_3200, 1);
									}
									if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_3200, 4, 0))
									{
										VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_3200, 4);
									}
									if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_3200, 5, 0))
									{
										VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_3200, 5);
									}
									if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(Local_3200, 5))
									{
										VEHICLE::SET_VEHICLE_EXTRA(Local_3200, 5, false);
									}
									ENTITY::SET_ENTITY_COORDS(Local_3200, Local_3200.f_2, 1, 0, 0, 1);
									ENTITY::SET_ENTITY_HEADING(Local_3200, Local_3200.f_5);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3200);
									iLocal_3734 = 1;
								}
							}
						}
						else
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[0], 1, 1);
							VEHICLE::DELETE_VEHICLE(&(Global_86864[0]));
							MISC::CLEAR_AREA(Local_3200.f_2, 5f, 1, 0, 0, 0);
						}
					}
					else if (CUTSCENE::GET_CUTSCENE_TIME() > 8000)
					{
						if (func_322(&Local_3200, 0, 0, 145, 1, -1, 132, 0, 0, 0))
						{
							VEHICLE::SET_VEHICLE_EXTRA(Local_3200, 5, false);
						}
					}
				}
				else
				{
					if (iLocal_3734 == 0)
					{
						if (GlobalFunc_8315() == 1)
						{
							if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 60500f)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_3200) && !ENTITY::IS_ENTITY_DEAD(Local_3200))
								{
									ENTITY::SET_ENTITY_HEALTH(Local_3200, ENTITY::GET_ENTITY_HEALTH(Local_3200) + 1000);
									VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_3200, (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_3200) + 1000f));
									VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_3200, (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_3200) + 1000f));
									FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(Local_3200, 1), 2.5f);
									if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_3200, 0, 0))
									{
										VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_3200, 0);
									}
									if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_3200, 1, 0))
									{
										VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_3200, 1);
									}
									if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_3200, 4, 0))
									{
										VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_3200, 4);
									}
									if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_3200, 5, 0))
									{
										VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_3200, 5);
									}
									if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(Local_3200, 5))
									{
										VEHICLE::SET_VEHICLE_EXTRA(Local_3200, 5, false);
									}
									ENTITY::SET_ENTITY_COORDS(Local_3200, Local_3200.f_2, 1, 0, 0, 1);
									ENTITY::SET_ENTITY_HEADING(Local_3200, Local_3200.f_5);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3200);
									iLocal_3734 = 1;
								}
							}
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_3200))
					{
						VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Local_3200);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_3222))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_86864[1]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[1], 0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[1], 1, 1);
							VEHICLE::SET_VEHICLE_FIXED(Global_86864[1]);
							Local_3222 = Global_86864[1];
							func_715(&Local_3222, 1, -1, 43, 43, 0, 0);
							ENTITY::SET_ENTITY_COORDS(Local_3222, Local_3222.f_2, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(Local_3222, Local_3222.f_5);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3222);
						}
						else
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[1], 1, 1);
							VEHICLE::DELETE_VEHICLE(&(Global_86864[1]));
							MISC::CLEAR_AREA(Local_3222.f_2, 5f, 1, 0, 0, 0);
						}
					}
					else if (CUTSCENE::GET_CUTSCENE_TIME() > 8000)
					{
						func_322(&Local_3222, 0, 0, 145, 1, -1, 43, 43, 0, 0);
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3142))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[0], 1, 1);
					Local_3142 = Global_86864.f_9[0];
					func_708(Local_3142, iLocal_3105, 0, 1, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(Local_3222))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_3222))
						{
							TASK::CLEAR_PED_TASKS(Local_3142);
							ENTITY::SET_ENTITY_VISIBLE(Local_3142, 1);
							if (!PED::IS_PED_IN_VEHICLE(Local_3142, Local_3222, 0))
							{
								PED::SET_PED_INTO_VEHICLE(Local_3142, Local_3222, -1);
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(Local_3222))
				{
					if (func_447(&Local_3142, 0, iLocal_3105, 0, 145, 0, 0, 0, Local_3222, -1, 1))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3142, 1);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (GlobalFunc_8315() != 0)
				{
					if (GlobalFunc_9019(&iLocal_3356, 0))
					{
						GlobalFunc_10993(&iLocal_3356, 1, 1, 0);
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
						{
							iLocal_3806 = 1;
						}
						else
						{
							GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneMichael", 0, 0);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", 1);
						}
						if (ENTITY::DOES_ENTITY_EXIST(func_196(1)))
						{
							Local_3106 = func_196(1);
							func_708(Local_3106, 1862763509, 0, 1, 0, 0);
							iLocal_3356[1] = Local_3106;
						}
					}
				}
				if (iLocal_3732 == 0)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
						GlobalFunc_2901(PLAYER::PLAYER_PED_ID(), -824.3681f, 176.9837f, 70.1645f, 135.3757f, 0, 0, 0);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3200, 0))
						{
							TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3200, 20000, -1, 2f, 131073, 0);
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -530524, 0, 1, 0);
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				RECORDING::_0x81CBAE94390F9F89();
				if (iLocal_3732 == 0)
				{
					if (!PED::IS_PED_INJURED(Local_3106))
					{
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_3106, 16);
						PED::SET_PED_STEALTH_MOVEMENT(Local_3106, 0, 0);
						GlobalFunc_2901(Local_3106, -828.5035f, 177.0551f, 69.9812f, 159.28f, 0, 0, 0);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3200, 0))
						{
							TASK::TASK_ENTER_VEHICLE(Local_3106, Local_3200, 20000, 0, 2f, 262145, 0);
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Racket_1", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_3288))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_3288))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_3288, Local_3288.f_1, 0, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(Local_3288, Local_3288.f_4, 2, 1);
						ENTITY::FREEZE_ENTITY_POSITION(Local_3288, 1);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Racket_2", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_3296))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_3296))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_3296, Local_3296.f_1, 0, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(Local_3296, Local_3296.f_4, 2, 1);
						ENTITY::FREEZE_ENTITY_POSITION(Local_3296, 1);
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				if ((((((func_322(&Local_3200, 0, 0, 145, 1, -1, 132, 0, 0, 0) && func_322(&Local_3222, 0, 0, 145, 1, -1, 43, 43, 0, 0)) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(Local_3200.f_6)) && ENTITY::DOES_ENTITY_EXIST(Local_3142)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_3222.f_9, sLocal_3060)) && ENTITY::DOES_ENTITY_EXIST(func_196(1))) && GlobalFunc_8315() == 0)
				{
					if (iLocal_3732 == 1)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
							GlobalFunc_2901(PLAYER::PLAYER_PED_ID(), -824.3681f, 176.9837f, 70.1645f, 135.3757f, 0, 0, 0);
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3200, 0))
							{
								TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3200, 20000, -1, 2f, 131073, 0);
								PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -530524, 0, 0, 0);
							}
						}
						if (!PED::IS_PED_INJURED(Local_3106))
						{
							PED::SET_PED_STEALTH_MOVEMENT(Local_3106, 0, 0);
							GlobalFunc_2901(Local_3106, -828.5035f, 177.0551f, 69.9812f, 159.28f, 0, 0, 0);
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3200, 0))
							{
								TASK::TASK_ENTER_VEHICLE(Local_3106, Local_3200, 20000, 0, 2f, 262145, 0);
							}
						}
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						SYSTEM::WAIT(150);
						func_710();
					}
					if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2097039789))
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2097039789, 0f, 0, 0);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2097039789, 3, 0, 1);
					}
					if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2127416656))
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2127416656, 0f, 0, 0);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2127416656, 3, 0, 1);
					}
					iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-818.88f, 177.91f, 76.63f, 0.75f, joaat("prop_windowbox_b"), 0, 0, 1);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iVar0))
						{
							ENTITY::SET_ENTITY_VISIBLE(iVar0, 0);
							ENTITY::SET_ENTITY_COLLISION(iVar0, 0, 0);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3222, 0))
					{
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_3222, 1);
					}
					if (!PED::IS_PED_INJURED(Local_3142))
					{
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_3142, 1);
						PED::SET_PED_CONFIG_FLAG(Local_3142, 32, 0);
						PED::SET_PED_CONFIG_FLAG(Local_3142, 116, 0);
						PED::SET_PED_CONFIG_FLAG(Local_3142, 29, 0);
					}
					func_444(sLocal_3060, Local_3222.f_9, 1, 1);
					func_443();
					func_442();
					fLocal_1212 = 200f;
					iLocal_66 = 1;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3222, 0))
					{
						func_440(Local_3222, sLocal_3060, fLocal_3740, 0, 1500f, 0, 0, 1);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_3222, 1);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3200, 0))
					{
						VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Local_3200, 0);
						if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(Local_3200, 5))
						{
							VEHICLE::SET_VEHICLE_EXTRA(Local_3200, 5, false);
						}
					}
					GlobalFunc_534(Local_3200, 0);
					func_414(Local_3222, 1f);
					if (INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_AT_COORDS(Local_3042)))
					{
						INTERIOR::UNPIN_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Local_3042));
					}
					GlobalFunc_8380(0, 1, 1, 0);
					if (iLocal_3769 == 0)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("FAM3_MISSION_START"))
						{
							iLocal_3769 = 1;
						}
					}
					func_540(PLAYER::PLAYER_PED_ID(), 1);
					func_540(Local_3106, 1);
					GlobalFunc_562(19);
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					return 1;
				}
				else
				{
					switch (GlobalFunc_8315())
					{
						case 0:
							if (!ENTITY::DOES_ENTITY_EXIST(func_196(1)))
							{
								if (func_447(&Local_3106, 1, 1862763509, 0, 1, 0, 0, 0, 0, -1, 1))
								{
									func_708(Local_3106, 1862763509, 0, 1, 0, 0);
									iLocal_3356[1] = Local_3106;
								}
							}
							break;
						
						case 1:
							if (!ENTITY::DOES_ENTITY_EXIST(func_196(0)))
							{
								if (func_447(&Local_3124, 1, 1862763509, 0, 0, 0, 0, 0, 0, -1, 1))
								{
									func_708(Local_3124, 1862763509, 0, 1, 0, 0);
									iLocal_3356[0] = Local_3124;
								}
							}
							break;
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_3142))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_3222))
						{
							if (func_447(&Local_3142, 0, iLocal_3105, 0, 145, 0, 0, 0, Local_3222, -1, 1))
							{
								PED::SET_PED_COMPONENT_VARIATION(Local_3142, 3, 1, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_3142, 4, 1, 0, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3142, 1);
							}
						}
					}
				}
			}
			else if (iLocal_3732 == 0)
			{
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
					iLocal_3732 = 1;
				}
			}
			VEHICLE::REQUEST_VEHICLE_ASSET(Local_3200.f_6, 2);
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_3222.f_9, sLocal_3060);
			break;
	}
	return 0;
}



void func_715(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x70306
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(*iParam0, 1);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, bParam1);
			VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(*iParam0, !bParam1);
			VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(*iParam0, !bParam1);
			VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(*iParam0, !bParam1, 0);
			if (VEHICLE::IS_THIS_MODEL_A_CAR(iParam0->f_6))
			{
				VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(*iParam0, 0, !bParam1);
				VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(*iParam0, 1, !bParam1);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, !bParam1);
			}
			if (iParam3 != -1 && iParam4 != -1)
			{
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, iParam3, iParam4);
			}
			if (iParam2 != -1)
			{
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*iParam0, iParam2);
			}
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, iParam5, iParam6);
		}
	}
}



void func_718(struct<3> Param0, float fParam3, int iParam4, int iParam5)//Position - 0x70489
{
	struct<3> Var0;
	var uVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_91351.f_4))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_91351.f_4, 0))
		{
			if (GlobalFunc_104(24) != Global_91351.f_4)
			{
				if (iParam4 == 1)
				{
					if (GlobalFunc_6683(ENTITY::GET_ENTITY_COORDS(Global_91351.f_4, 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_24(Global_91351.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}



int func_721()//Position - 0x70628
{
	return func_722(&(Global_91351.f_2167));
}

int func_722(var uParam0)//Position - 0x7063B
{
	if (uParam0->f_12.f_42 == 0)
	{
		return 0;
	}
	if (!GlobalFunc_5650(uParam0->f_12.f_42))
	{
		return 0;
	}
	return 1;
}

void func_723(int iParam0)//Position - 0x70664
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (GlobalFunc_7217(&(Global_67138.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_67138.f_139[iParam0]))
		{
			bVar0 = true;
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_67138.f_139[iParam0], 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_67138.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_67138.f_139[iParam0], 1, 1);
				VEHICLE::DELETE_VEHICLE(&(Global_67138.f_139[iParam0]));
			}
		}
		Global_67138[iParam0] = 1;
		if (MISC::IS_BIT_SET(Global_67138.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && GlobalFunc_78(iParam0, 0)) && Global_68047.f_42 == 0) && Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1406[Global_67138.f_555[0 /*21*/].f_14] != 0) && Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1406[Global_67138.f_555[0 /*21*/].f_14] > 3) && (!func_724(0, Global_67138.f_555[0 /*21*/].f_12) || !func_724(1, Global_67138.f_555[0 /*21*/].f_12)))
			{
				GlobalFunc_98(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[Global_67138.f_555[0 /*21*/].f_14 /*54*/], &Global_68047);
				Global_68101 = Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4799;
			}
			GlobalFunc_4927(iParam0, 0);
		}
	}
}

int func_724(int iParam0, int iParam1)//Position - 0x707D9
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= GlobalFunc_535(&(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar0 /*109*/])))
	{
		return 0;
	}
	return GlobalFunc_5650(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar0 /*109*/][iParam0 /*54*/].f_42);
}


void func_726(char* sParam0, int iParam1, int iParam2)//Position - 0x70855
{
	int iVar0;
	struct<14> Var1;
	var uVar15;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	var uVar30;
	int iVar46;
	
	uVar15 = 9;
	uVar30 = { GlobalFunc_7617(iParam1, iParam2) };
	iVar46 = 0;
	if (uVar30[2] == -99 && uVar30[0] == -99)
	{
		iVar46 = 1;
	}
	iVar28 = 0;
	while (iVar28 <= 14)
	{
		iVar0 = iVar28;
		if (iVar0 != 12 && iVar0 != 14)
		{
			if (iVar0 == 13)
			{
				uVar15 = { GlobalFunc_7616(iParam1, uVar30[iVar28]) };
				iVar29 = 0;
				while (iVar29 <= 8)
				{
					iVar25 = iVar29;
					iVar26 = GlobalFunc_40(iVar25);
					iVar27 = GlobalFunc_29(iVar26);
					if (uVar15[iVar29] != iVar27)
					{
						Var1 = { GlobalFunc_10878(iParam1, 14, uVar15[iVar29]) };
						CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, Var1.f_12, Var1.f_3, 0, iParam1);
					}
					iVar29++;
				}
			}
			else
			{
				Var1 = { GlobalFunc_10878(iParam1, iVar0, uVar30[iVar28]) };
				if (((iVar28 == 2 || iVar28 == 0) && iVar46) || uVar30[iVar28] == -99)
				{
					Var1.f_3 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[Var1.f_5 /*65*/].f_13[iVar28];
					Var1.f_4 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[Var1.f_5 /*65*/][iVar28];
				}
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam0, GlobalFunc_33(iVar0), Var1.f_3, Var1.f_4, iParam1);
			}
		}
		iVar28++;
	}
}

int func_727(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)//Position - 0x709B2
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (*iParam1 == 0)
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(1);
		HUD::REQUEST_ADDITIONAL_TEXT("FAM3", 0);
		HUD::REQUEST_ADDITIONAL_TEXT("FAM3AUD", 6);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
		{
			SYSTEM::WAIT(0);
		}
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tailgater"), 1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bison2"), 1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bison"), 1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bison3"), 1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("sadler"), 1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("blista"), 1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("baller"), 1);
		PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("g_m_y_pologoon_01"), 1);
		GlobalFunc_2224(1);
		func_723(0);
		PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_3104);
		PED::ADD_RELATIONSHIP_GROUP("TENNISCOACH", &iLocal_3105);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_3104);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_3104, 1862763509);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, 1862763509);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_3104, iLocal_3104);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
		}
		iLocal_3789 = AUDIO::GET_SOUND_ID();
		GlobalFunc_52(0, 1);
		GlobalFunc_5168(1, 0, 1);
		*iParam1++;
	}
	if (*iParam1 == 1)
	{
		*iParam2 = 0;
		func_759(iParam0);
		GlobalFunc_2535(&uLocal_3821, &uLocal_3642);
		GlobalFunc_2534(&uLocal_3837, &uLocal_3644);
		GlobalFunc_2910(sLocal_3060, &uLocal_3830, &uLocal_3643);
		func_755();
		*iParam1++;
	}
	if (*iParam1 == 2)
	{
		if (*uParam3 == 1 || *iParam4 == 1)
		{
			switch (GlobalFunc_8315())
			{
				case 0:
					GlobalFunc_2901(PLAYER::PLAYER_PED_ID(), Local_3124.f_2, Local_3124.f_5, 0, 1, 0);
					break;
				
				case 1:
					GlobalFunc_2901(PLAYER::PLAYER_PED_ID(), Local_3106.f_2, Local_3106.f_5, 0, 1, 0);
					break;
			}
			if (iParam0 == 0)
			{
				while (!INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_AT_COORDS(Local_3042)))
				{
					INTERIOR::PIN_INTERIOR_IN_MEMORY(INTERIOR::GET_INTERIOR_AT_COORDS(Local_3042));
					SYSTEM::WAIT(0);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
				PED::CLEAR_PED_DECORATIONS(PLAYER::PLAYER_PED_ID());
				PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
				PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
				GlobalFunc_7932(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
				MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1000f, 1, 0, 0, 0);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1000f);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1000f);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID()));
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			}
			bLocal_3771 = false;
		}
		if (*iParam4 == 1)
		{
			if (GlobalFunc_8315() == 0)
			{
				GlobalFunc_5812(Local_3124.f_2, Local_3124.f_5, 1, 0);
			}
			else if (GlobalFunc_8315() == 1)
			{
				GlobalFunc_5812(Local_3106.f_2, Local_3106.f_5, 1, 0);
			}
		}
		func_749(iParam0);
		*iParam1++;
	}
	if (*iParam1 == 3)
	{
		if (GlobalFunc_2531(&uLocal_3821, &uLocal_3642))
		{
			if (GlobalFunc_2530(&uLocal_3837, &uLocal_3644))
			{
				if (GlobalFunc_2907(sLocal_3060, &uLocal_3830, &uLocal_3643))
				{
					*iParam1++;
				}
			}
		}
	}
	if (*iParam1 == 4)
	{
		if (*uParam3 == 1 || *iParam4 == 1)
		{
			uVar0 = OBJECT::GET_RAYFIRE_MAP_OBJECT(-1020.5f, 663.41f, 154.75f, 50f, "DES_StiltHouse");
			if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uVar0))
			{
				switch (iParam0)
				{
					case 0:
					case 1:
					case 2:
					case 3:
						GlobalFunc_7621(2, 0, 0, 1, 0);
						break;
					
					case 4:
					case 5:
					case 6:
						GlobalFunc_7621(2, 1, 0, 1, 0);
						break;
				}
				*iParam1++;
			}
			else
			{
				switch (iParam0)
				{
					case 2:
					case 3:
						if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar0) != 3)
						{
							if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar0) != 2 && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar0) != 1)
							{
								OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar0, 2);
							}
						}
						else if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar0) == 3)
						{
							*iParam1++;
						}
						break;
					
					case 4:
						if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar0) != 10)
						{
							if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar0) != 9 && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar0) != 8)
							{
								OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar0, 9);
							}
						}
						else if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar0) == 10)
						{
							*iParam1++;
						}
						break;
					}
			}
		}
		else
		{
			*iParam1++;
		}
	}
	if (*iParam1 == 5)
	{
		func_740(0);
		switch (iParam0)
		{
			case 0:
				if (GlobalFunc_2(0))
				{
					if (func_322(&Local_3200, 0, 0, 145, 1, -1, 132, 0, 0, 0))
					{
						if (func_322(&Local_3222, 0, 0, 145, 1, -1, 43, 43, 0, 0))
						{
							GlobalFunc_534(Local_3200, 0);
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3200, 0))
							{
								if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(Local_3200, 5))
								{
									VEHICLE::SET_VEHICLE_EXTRA(Local_3200, 5, false);
								}
								VEHICLE::SET_VEHICLE_STRONG(Local_3200, 1);
								VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Local_3200, 0);
							}
							*iParam1++;
						}
					}
				}
				else
				{
					*iParam1++;
				}
				break;
			
			case 1:
				iLocal_3809[2] = 1;
				iLocal_3809[1] = 1;
				iLocal_3809[7] = 1;
				iLocal_3809[8] = 1;
				iLocal_3809[5] = 1;
				iLocal_3809[6] = 1;
				if (func_95(&Local_3288, 1) && func_95(&Local_3296, 1))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_3344))
					{
						if (GlobalFunc_2780() == 0)
						{
							if (func_95(&Local_3344, 1))
							{
							}
						}
					}
					uLocal_3681 = OBJECT::GET_RAYFIRE_MAP_OBJECT(-817.1669f, 178.0146f, 75.7095f, 3f, "des_frenchdoor");
					if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_3681))
					{
						OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_3681, 2);
					}
					if (func_322(&Local_3200, 0, 0, 145, 1, -1, 132, 0, 0, 0))
					{
						GlobalFunc_534(Local_3200, 0);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3200, 0))
						{
							if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(Local_3200, 5))
							{
								VEHICLE::SET_VEHICLE_EXTRA(Local_3200, 5, false);
							}
							VEHICLE::SET_VEHICLE_STRONG(Local_3200, 1);
							VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Local_3200, 0);
						}
						if (func_322(&Local_3222, 0, 0, 145, 1, -1, 43, 43, 0, 0))
						{
							if (func_447(&Local_3142, 0, iLocal_3105, 0, 145, 0, 0, 0, Local_3222, -1, 1))
							{
								if (!PED::IS_PED_INJURED(Local_3142))
								{
									PED::SET_PED_COMPONENT_VARIATION(Local_3142, 3, 1, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(Local_3142, 4, 1, 0, 0);
								}
								iVar1 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-818.88f, 177.91f, 76.63f, 0.75f, joaat("prop_windowbox_b"), 0, 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(iVar1))
								{
									if (!ENTITY::IS_ENTITY_DEAD(iVar1))
									{
										ENTITY::SET_ENTITY_VISIBLE(iVar1, 0);
										ENTITY::SET_ENTITY_COLLISION(iVar1, 0, 0);
									}
								}
								GlobalFunc_503(Local_3200, -1);
								GlobalFunc_504(Local_3200, -1);
								switch (GlobalFunc_8315())
								{
									case 0:
										if (func_447(&Local_3106, 1, 1862763509, 0, 1, 0, 0, 0, 0, -1, 1))
										{
											if (!PED::IS_PED_INJURED(Local_3106) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_3106))
											{
												iLocal_3356[1] = Local_3106;
												*iParam1++;
											}
										}
										break;
									
									case 1:
										if (func_447(&Local_3124, 1, 1862763509, 0, 0, 0, 0, 0, 0, -1, 1))
										{
											if (!PED::IS_PED_INJURED(Local_3124) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_3124))
											{
												iLocal_3356[0] = Local_3124;
												*iParam1++;
											}
										}
										break;
									}
								}
							}
						}
				}
				break;
			
			case 2:
				iLocal_3809[2] = 1;
				iLocal_3809[1] = 1;
				iLocal_3809[7] = 1;
				iLocal_3809[9] = 1;
				iLocal_3809[8] = 1;
				iLocal_3809[5] = 1;
				iLocal_3809[6] = 1;
				if (func_322(&Local_3200, 0, 0, 145, 1, -1, 132, 0, 0, 0))
				{
					GlobalFunc_534(Local_3200, 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3200, 0))
					{
						if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(Local_3200, 5))
						{
							VEHICLE::SET_VEHICLE_EXTRA(Local_3200, 5, false);
						}
						VEHICLE::SET_VEHICLE_STRONG(Local_3200, 1);
						VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Local_3200, 0);
					}
					if (func_447(&Local_3142, 0, iLocal_3105, 0, 25, 0, 0, 0, 0, -1, 1))
					{
						if (func_95(&Local_3320, 1))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_3320))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_3320))
								{
									ENTITY::SET_ENTITY_VISIBLE(Local_3320, 0);
								}
							}
							GlobalFunc_503(Local_3200, -1);
							GlobalFunc_504(0, -1);
							if (!PED::IS_PED_INJURED(Local_3142))
							{
								PED::SET_PED_COMPONENT_VARIATION(Local_3142, 3, 1, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_3142, 4, 1, 0, 0);
							}
							switch (GlobalFunc_8315())
							{
								case 0:
									if (func_447(&Local_3106, 1, 1862763509, 0, 1, 0, 0, 0, Local_3200, 0, 1))
									{
										if (!PED::IS_PED_INJURED(Local_3106) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_3106))
										{
											iLocal_3356[1] = Local_3106;
											*iParam1++;
										}
									}
									break;
								
								case 1:
									if (func_447(&Local_3124, 1, 1862763509, 0, 0, 0, 0, 0, Local_3200, -1, 1))
									{
										if (!PED::IS_PED_INJURED(Local_3124) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_3124))
										{
											iLocal_3356[0] = Local_3124;
											if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3200, 0))
											{
												PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3200, 0);
											}
											*iParam1++;
										}
									}
									break;
								}
							}
						}
				}
				break;
			
			case 3:
				iLocal_3809[2] = 0;
				iLocal_3809[1] = 1;
				iLocal_3809[7] = 1;
				iLocal_3809[9] = 1;
				iLocal_3809[8] = 1;
				iLocal_3809[5] = 1;
				iLocal_3809[6] = 1;
				if (func_322(&Local_3200, 0, 0, 145, 1, -1, 132, 0, 0, 0))
				{
					GlobalFunc_534(Local_3200, 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3200, 0))
					{
						if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(Local_3200, 5))
						{
							VEHICLE::SET_VEHICLE_EXTRA(Local_3200, 5, false);
						}
						VEHICLE::SET_VEHICLE_STRONG(Local_3200, 1);
						VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Local_3200, 0);
					}
					if (func_447(&Local_3142, 0, iLocal_3105, 0, 25, 0, 0, 0, 0, -1, 1))
					{
						if ((func_95(&Local_3320, 1) && func_95(&Local_3312, 1)) && func_95(&Local_3328, 1))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_3320))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_3320))
								{
									ENTITY::SET_ENTITY_VISIBLE(Local_3320, 0);
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_3312))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_3312))
								{
									ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_3312, Local_3200, 0);
									ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_3312, 0);
									ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(Local_3312, 0);
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_3328))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_3328))
								{
									ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_3328, 0);
									ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(Local_3328, 0);
								}
							}
							GlobalFunc_503(Local_3200, -1);
							if (!PED::IS_PED_INJURED(Local_3142))
							{
								PED::SET_PED_COMPONENT_VARIATION(Local_3142, 3, 1, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_3142, 4, 1, 0, 0);
							}
							switch (GlobalFunc_8315())
							{
								case 0:
									if (func_447(&Local_3106, 1, 1862763509, 0, 1, 0, 0, 0, Local_3200, 0, 1))
									{
										if (!PED::IS_PED_INJURED(Local_3106) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_3106))
										{
											iLocal_3356[1] = Local_3106;
											*iParam1++;
										}
									}
									break;
								
								case 1:
									if (func_447(&Local_3124, 1, 1862763509, 0, 0, 0, 0, 0, 0, -1, 1))
									{
										if (!PED::IS_PED_INJURED(Local_3124) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_3124))
										{
											iLocal_3356[0] = Local_3124;
											if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3200, 0))
											{
												PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3200, 0);
											}
											*iParam1++;
										}
									}
									break;
								}
							}
						}
				}
				break;
			
			case 4:
				iLocal_3809[3] = 1;
				iLocal_3809[5] = 1;
				iLocal_3809[4] = 1;
				iLocal_3809[6] = 1;
				if (func_322(&Local_3200, 0, 0, 145, 1, -1, 132, 0, 0, 0))
				{
					GlobalFunc_534(Local_3200, 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3200, 0))
					{
						VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Local_3200);
						if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(Local_3200, 5))
						{
							VEHICLE::SET_VEHICLE_EXTRA(Local_3200, 5, false);
						}
						VEHICLE::SET_VEHICLE_STRONG(Local_3200, 0);
						VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Local_3200, 0);
					}
					STREAMING::REQUEST_PTFX_ASSET();
					iLocal_3761 = 0;
					iLocal_3762 = 0;
					iLocal_3763 = 0;
					iLocal_3764 = 0;
					bLocal_3771 = false;
					GlobalFunc_503(Local_3200, -1);
					switch (GlobalFunc_8315())
					{
						case 0:
							if (func_447(&Local_3106, 1, 1862763509, 0, 1, 0, 0, 0, Local_3200, 0, 1))
							{
								if (!PED::IS_PED_INJURED(Local_3106) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_3106))
								{
									iLocal_3356[1] = Local_3106;
									*iParam1++;
								}
							}
							break;
						
						case 1:
							if (func_447(&Local_3124, 1, 1862763509, 0, 0, 0, 0, 0, Local_3200, -1, 1))
							{
								if (!PED::IS_PED_INJURED(Local_3124) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_3124))
								{
									iLocal_3356[0] = Local_3124;
									if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3200, 0))
									{
										PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3200, 0);
									}
									*iParam1++;
								}
							}
							break;
						}
				}
				break;
			
			case 5:
				if (func_322(&Local_3200, 0, 0, 145, 1, -1, 132, 0, 0, 0) && func_322(&Local_3266, 0, 0, 145, 1, -1, 0, 0, 3, 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3266, 0))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(Local_3266, 1);
					}
					GlobalFunc_534(Local_3200, 0);
					GlobalFunc_503(Local_3200, -1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3200, 0))
					{
						if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(Local_3200, 5))
						{
							VEHICLE::SET_VEHICLE_EXTRA(Local_3200, 5, false);
						}
						VEHICLE::SET_VEHICLE_STRONG(Local_3200, 0);
						VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Local_3200, 0);
					}
					switch (GlobalFunc_8315())
					{
						case 0:
							if (func_447(&Local_3106, 1, 1862763509, 0, 1, 0, 0, 0, Local_3200, 0, 1))
							{
								if (!PED::IS_PED_INJURED(Local_3106) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_3106))
								{
									iLocal_3356[1] = Local_3106;
									*iParam1++;
								}
							}
							break;
						
						case 1:
							if (func_447(&Local_3124, 1, 1862763509, 0, 0, 0, 0, 0, Local_3200, -1, 1))
							{
								if (!PED::IS_PED_INJURED(Local_3124) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_3124))
								{
									iLocal_3356[0] = Local_3124;
									*iParam1++;
								}
							}
							break;
						}
				}
				break;
			
			case 6:
				if (!ENTITY::DOES_ENTITY_EXIST(Local_3178))
				{
					if (((GlobalFunc_5599(24) && ENTITY::DOES_ENTITY_EXIST(GlobalFunc_104(24))) && VEHICLE::IS_VEHICLE_DRIVEABLE(GlobalFunc_104(24), 0)) && GlobalFunc_2780() == 0)
					{
						iVar2 = GlobalFunc_104(24);
						if (ENTITY::DOES_ENTITY_EXIST(iVar2))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iVar2))
							{
								if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar2) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar2, 1))
								{
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, 1, 1);
								}
								Local_3178 = iVar2;
								ENTITY::SET_ENTITY_COORDS(Local_3178, Local_3178.f_2, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(Local_3178, Local_3178.f_5);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3178);
							}
						}
					}
					else
					{
						GlobalFunc_6791(0, 0);
						if (func_322(&Local_3178, 1, 0, 0, 1, -1, -1, -1, 0, 0))
						{
						}
					}
				}
				else
				{
					switch (GlobalFunc_8315())
					{
						case 0:
							*iParam1++;
							break;
						
						case 1:
							if (func_447(&Local_3124, 1, 1862763509, 0, 0, 0, 0, 0, Local_3200, -1, 1))
							{
								if (!PED::IS_PED_INJURED(Local_3124) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_3124))
								{
									iLocal_3356[0] = Local_3124;
									*iParam1++;
								}
							}
							break;
						}
				}
				break;
			
			default:
				*iParam1++;
				break;
			}
	}
	if (*iParam1 == 6)
	{
		if (*uParam3 == 1 || *iParam4 == 1)
		{
			switch (iParam0)
			{
				case 0:
					break;
				
				case 1:
				case 2:
				case 3:
				case 4:
				case 6:
					if (GlobalFunc_9019(&iLocal_3356, 0))
					{
						GlobalFunc_10993(&iLocal_3356, 1, 0, 0);
						Local_3106 = iLocal_3356[1];
					}
					break;
				
				case 5:
					break;
				}
		}
		GlobalFunc_2790(4, 0, 1);
		switch (iParam0)
		{
			case 0:
			case 4:
			case 5:
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1986583853))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1986583853, 0f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1986583853, 1, 0, 1);
				}
				break;
			
			case 1:
				GlobalFunc_2790(4, 1, 1);
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1986583853))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1986583853, 0f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1986583853, 0, 0, 1);
				}
				break;
			
			default:
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1986583853))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1986583853, 0f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1986583853, 0, 0, 1);
				}
				break;
		}
		*iParam1++;
	}
	if (*iParam1 == 7)
	{
		GlobalFunc_200(&uLocal_3471, 0);
		GlobalFunc_200(&uLocal_3471, 1);
		GlobalFunc_200(&uLocal_3471, 3);
		GlobalFunc_200(&uLocal_3471, 4);
		GlobalFunc_200(&uLocal_3471, 5);
		GlobalFunc_200(&uLocal_3471, 6);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_173(&uLocal_3471, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		}
		switch (iParam0)
		{
			case 1:
				if (!PED::IS_PED_INJURED(Local_3106))
				{
					GlobalFunc_173(&uLocal_3471, 1, Local_3106, "FRANKLIN", 0, 1);
				}
				if (!PED::IS_PED_INJURED(Local_3142))
				{
					GlobalFunc_173(&uLocal_3471, 3, Local_3142, "TENNISCOACH", 0, 1);
				}
				GlobalFunc_7632(0);
				GlobalFunc_563(1);
				GlobalFunc_696();
				break;
			
			case 2:
			case 3:
				if (!PED::IS_PED_INJURED(Local_3106))
				{
					GlobalFunc_173(&uLocal_3471, 1, Local_3106, "FRANKLIN", 0, 1);
				}
				if (!PED::IS_PED_INJURED(Local_3142))
				{
					GlobalFunc_173(&uLocal_3471, 3, Local_3142, "TENNISCOACH", 0, 1);
				}
				GlobalFunc_7632(1);
				GlobalFunc_563(1);
				GlobalFunc_696();
				break;
			
			case 4:
				if (!PED::IS_PED_INJURED(Local_3106))
				{
					GlobalFunc_173(&uLocal_3471, 1, Local_3106, "FRANKLIN", 0, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_3142))
				{
					if (!PED::IS_PED_INJURED(Local_3142))
					{
						GlobalFunc_173(&uLocal_3471, 3, Local_3142, "TENNISCOACH", 0, 1);
					}
				}
				else
				{
					GlobalFunc_173(&uLocal_3471, 3, 0, "TENNISCOACH", 0, 1);
				}
				GlobalFunc_173(&uLocal_3471, 4, 0, "NATHALIA", 0, 1);
				GlobalFunc_7632(0);
				GlobalFunc_563(1);
				GlobalFunc_696();
				break;
			
			case 5:
				GlobalFunc_7632(0);
				GlobalFunc_563(0);
				GlobalFunc_699();
				break;
			
			case 6:
				GlobalFunc_173(&uLocal_3471, 6, 0, "LESTER", 0, 1);
				GlobalFunc_7632(0);
				GlobalFunc_563(0);
				GlobalFunc_699();
				break;
		}
		*iParam1++;
	}
	if (*iParam1 == 8)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		PED::SET_CREATE_RANDOM_COPS(1);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		MISC::ENABLE_DISPATCH_SERVICE(3, 1);
		MISC::ENABLE_DISPATCH_SERVICE(5, 1);
		GlobalFunc_9132(0);
		MISC::SET_INSTANCE_PRIORITY_HINT(0);
		func_732();
		switch (iParam0)
		{
			case 0:
				STREAMING::SET_PED_POPULATION_BUDGET(0);
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
				GlobalFunc_695(1);
				break;
			
			case 1:
				STREAMING::SET_PED_POPULATION_BUDGET(3);
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
				GlobalFunc_695(1);
				GlobalFunc_9132(1);
				MISC::SET_INSTANCE_PRIORITY_HINT(2);
				break;
			
			case 2:
			case 3:
				STREAMING::SET_PED_POPULATION_BUDGET(0);
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				PED::SET_CREATE_RANDOM_COPS(0);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				MISC::ENABLE_DISPATCH_SERVICE(3, 0);
				MISC::ENABLE_DISPATCH_SERVICE(5, 0);
				GlobalFunc_695(1);
				break;
			
			case 4:
				STREAMING::SET_PED_POPULATION_BUDGET(3);
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				PED::SET_CREATE_RANDOM_COPS(0);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				GlobalFunc_695(0);
				GlobalFunc_9132(1);
				MISC::SET_INSTANCE_PRIORITY_HINT(2);
				func_731();
				break;
			
			case 5:
			case 6:
				STREAMING::SET_PED_POPULATION_BUDGET(3);
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				}
				GlobalFunc_695(1);
				break;
		}
		*iParam1++;
	}
	if (*iParam1 == 9)
	{
		if (*uParam3 == 1 || *iParam4 == 1)
		{
			switch (iParam0)
			{
				case 1:
					VEHICLE::REQUEST_VEHICLE_ASSET(Local_3200.f_6, 2);
					if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(Local_3200.f_6))
					{
						*iParam1++;
					}
					break;
				
				case 3:
					if (iLocal_3683 == 0)
					{
						if (!PHYSICS::DOES_ROPE_EXIST(&uLocal_3682))
						{
							PHYSICS::ROPE_LOAD_TEXTURES();
							if (PHYSICS::ROPE_ARE_TEXTURES_LOADED())
							{
								uLocal_3682 = PHYSICS::ADD_ROPE(-1017.985f, 660.4285f, 147.4662f, 0f, 0f, 0f, 28f, 1, -1f, 0.5f, 0.5f, 0, 1, 1, 1065353216, 0, 0);
								PHYSICS::LOAD_ROPE_DATA(uLocal_3682, sLocal_3041);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_3320) && PHYSICS::DOES_ROPE_EXIST(&uLocal_3682))
						{
							if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_3320))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3200, 0))
								{
									PHYSICS::ATTACH_ENTITIES_TO_ROPE(uLocal_3682, Local_3320, Local_3200, Local_3320.f_1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_3200, 0f, -2.1f, 0.6f), 35f, 0, 0, 0, 0);
									iLocal_3683 = 1;
								}
							}
						}
					}
					else
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3200, 0))
						{
							VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_3200, 5, 0, 1);
						}
						*iParam1++;
					}
					break;
				
				default:
					*iParam1++;
					break;
			}
		}
		else
		{
			*iParam1++;
		}
	}
	if (*iParam1 == 10)
	{
		if (*uParam3 == 1 || *iParam4 == 1)
		{
			if (*iParam4 == 1)
			{
				GlobalFunc_5108(0, -1, 0);
			}
			else
			{
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 100f, 0);
				iVar3 = MISC::GET_GAME_TIMER() + 15000;
				while ((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !STREAMING::IS_NEW_LOAD_SCENE_LOADED()) && MISC::GET_GAME_TIMER() < iVar3)
				{
					SYSTEM::WAIT(0);
				}
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
			StringCopy(&Local_3073, "FAM3_GIT", 16);
			switch (iParam0)
			{
				case 2:
				case 4:
				case 5:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3200, 0))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3200, -1);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3200);
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_3200, 1, 1);
						}
					}
					break;
			}
			if (iParam0 == 1 || iParam0 == 3)
			{
				SYSTEM::WAIT(500);
				if (iParam0 == 1)
				{
					func_710();
				}
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			switch (iParam0)
			{
				case 1:
					AUDIO::TRIGGER_MUSIC_EVENT("FAM3_CHASE_RESTART");
					break;
				
				case 2:
					AUDIO::TRIGGER_MUSIC_EVENT("FAM3_HOUSE_RESTART");
					break;
				
				case 3:
					AUDIO::TRIGGER_MUSIC_EVENT("FAM3_PULL_RESTART");
					break;
				
				case 4:
					AUDIO::TRIGGER_MUSIC_EVENT("FAM3_MEX_RESTART");
					break;
			}
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
				case 5:
				case 6:
					break;
				
				default:
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						GlobalFunc_575(800);
					}
					break;
				}
		}
		*iParam1++;
	}
	if (*iParam1 == 11)
	{
		switch (iParam0)
		{
			case 1:
				GlobalFunc_11043(0, "CAR CHASE", 0, 0, 0, 1);
				break;
			
			case 3:
				GlobalFunc_11043(1, "PULL HOUSE DOWN", 0, 0, 0, 1);
				break;
			
			case 4:
				GlobalFunc_11043(2, "ESCAPE GOONS", 1, 0, 0, 1);
				break;
		}
		*iParam1++;
	}
	if (*iParam1 == 12)
	{
		*iParam2 = 1;
		*iParam4 = 0;
		*uParam3 = 0;
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		*iParam1++;
	}
	if (*iParam1 == 13)
	{
		return 1;
	}
	return 0;
}




void func_731()//Position - 0x720DE
{
	if (iLocal_3784 == -1)
	{
		iLocal_3784 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1018.043f, 642.159f, 140.444f, 18f, 10f, 4f, ((-6.12f / 360f) * 6.28f), 0, 7);
	}
	if (iLocal_3785 == -1)
	{
		iLocal_3785 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1032.143f, 646.559f, 140.444f, 15f, 9f, 4f, ((-27f / 360f) * 6.28f), 0, 7);
	}
	if (iLocal_3786 == -1)
	{
		iLocal_3786 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1008.675f, 641.048f, 140f, 5f, 5f, 4f, ((-26.28f / 360f) * 6.28f), 0, 7);
	}
}

void func_732()//Position - 0x7218F
{
	if (iLocal_3784 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_3784);
		iLocal_3784 = -1;
	}
	if (iLocal_3785 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_3785);
		iLocal_3785 = -1;
	}
	if (iLocal_3786 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_3786);
		iLocal_3786 = -1;
	}
}








void func_740(int iParam0)//Position - 0x723E4
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_3809 - 1))
	{
		iLocal_3809[iVar0] = iParam0;
		iVar0++;
	}
}









void func_749(int iParam0)//Position - 0x76861
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3200))
			{
				GlobalFunc_2532(Local_3200.f_6, &uLocal_3821, 8, &uLocal_3642);
			}
			if (GlobalFunc_8315() == 0)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_3106))
				{
					GlobalFunc_2532(Local_3106.f_6, &uLocal_3821, 8, &uLocal_3642);
				}
			}
			else if (GlobalFunc_8315() == 1)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_3124))
				{
					GlobalFunc_2532(Local_3124.f_6, &uLocal_3821, 8, &uLocal_3642);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3222))
			{
				GlobalFunc_2532(Local_3222.f_6, &uLocal_3821, 8, &uLocal_3642);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3142))
			{
				GlobalFunc_2532(Local_3142.f_6, &uLocal_3821, 8, &uLocal_3642);
			}
			GlobalFunc_2909(Local_3222.f_9, sLocal_3060, &uLocal_3830, 6, &uLocal_3643);
			break;
		
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3200))
			{
				GlobalFunc_2532(Local_3200.f_6, &uLocal_3821, 8, &uLocal_3642);
			}
			if (GlobalFunc_8315() == 0)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_3106))
				{
					GlobalFunc_2532(Local_3106.f_6, &uLocal_3821, 8, &uLocal_3642);
				}
			}
			else if (GlobalFunc_8315() == 1)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_3124))
				{
					GlobalFunc_2532(Local_3124.f_6, &uLocal_3821, 8, &uLocal_3642);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3142))
			{
				GlobalFunc_2532(Local_3142.f_6, &uLocal_3821, 8, &uLocal_3642);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3320))
			{
				GlobalFunc_2532(Local_3320.f_7, &uLocal_3821, 8, &uLocal_3642);
			}
			GlobalFunc_5928("missfam3", &uLocal_3837, 1, &uLocal_3644);
			break;
		
		case 3:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3200))
			{
				GlobalFunc_2532(Local_3200.f_6, &uLocal_3821, 8, &uLocal_3642);
			}
			if (GlobalFunc_8315() == 0)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_3106))
				{
					GlobalFunc_2532(Local_3106.f_6, &uLocal_3821, 8, &uLocal_3642);
				}
			}
			else if (GlobalFunc_8315() == 1)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_3124))
				{
					GlobalFunc_2532(Local_3124.f_6, &uLocal_3821, 8, &uLocal_3642);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3142))
			{
				GlobalFunc_2532(Local_3142.f_6, &uLocal_3821, 8, &uLocal_3642);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3320))
			{
				GlobalFunc_2532(Local_3320.f_7, &uLocal_3821, 8, &uLocal_3642);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3328))
			{
				GlobalFunc_2532(Local_3328.f_7, &uLocal_3821, 8, &uLocal_3642);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3336))
			{
				GlobalFunc_2532(Local_3336.f_7, &uLocal_3821, 8, &uLocal_3642);
			}
			GlobalFunc_5928("missfam3", &uLocal_3837, 1, &uLocal_3644);
			break;
		
		case 5:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3200))
			{
				GlobalFunc_2532(Local_3200.f_6, &uLocal_3821, 8, &uLocal_3642);
			}
			if (GlobalFunc_8315() == 0)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_3106))
				{
					GlobalFunc_2532(Local_3106.f_6, &uLocal_3821, 8, &uLocal_3642);
				}
			}
			else if (GlobalFunc_8315() == 1)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_3124))
				{
					GlobalFunc_2532(Local_3124.f_6, &uLocal_3821, 8, &uLocal_3642);
				}
			}
			break;
		
		case 6:
			break;
	}
}






void func_755()//Position - 0x76D44
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_3645;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iLocal_3645[iVar1] = 0;
		iVar1++;
	}
	iLocal_3676 = 0;
}




void func_759(int iParam0)//Position - 0x76E49
{
	switch (iParam0)
	{
		case 0:
			Local_3124.f_2 = { -813.8015f, 179.2288f, 71.1592f };
			Local_3124.f_5 = 294.8454f;
			Local_3124.f_6 = GlobalFunc_4917(0);
			Local_3200.f_2 = { -827.1151f, 176.437f, 69.9585f };
			Local_3200.f_5 = 148.725f;
			Local_3200.f_6 = joaat("bison2");
			Local_3106.f_2 = { -813.8015f, 179.2288f, 71.1592f };
			Local_3106.f_5 = 294.8454f;
			Local_3106.f_6 = GlobalFunc_4917(1);
			Local_3222.f_2 = { -826.2942f, 158.1811f, 68.3918f };
			Local_3222.f_5 = 84.0848f;
			Local_3222.f_6 = joaat("blista");
			Local_3222.f_9 = 53;
			Local_3142.f_2 = { -856.054f, 149.5746f, 62.2112f };
			Local_3142.f_5 = 3.163f;
			Local_3142.f_6 = GlobalFunc_4946(25);
			Local_3288.f_1 = { -818.038f, 179.26f, 71.252f };
			Local_3288.f_4 = { -20.52f, -74.02f, 14.3f };
			Local_3288.f_7 = joaat("prop_tennis_rack_01");
			Local_3296.f_1 = { -818.128f, 179.1527f, 71.262f };
			Local_3296.f_4 = { -39.24f, -75.96f, 16.2f };
			Local_3296.f_7 = joaat("prop_tennis_rack_01b");
			Local_3344.f_1 = { -819.6521f, 176.6348f, 70.76f };
			Local_3344.f_4 = { 6.12f, 0f, -68.4f };
			Local_3344.f_7 = joaat("prop_windowbox_broken");
			break;
		
		case 1:
			Local_3124.f_2 = { -824.3681f, 176.9837f, 70.1645f };
			Local_3124.f_5 = 135.3757f;
			Local_3124.f_6 = GlobalFunc_4917(0);
			Local_3200.f_2 = { -827.1151f, 176.437f, 69.9585f };
			Local_3200.f_5 = 148.725f;
			Local_3200.f_6 = joaat("bison2");
			Local_3106.f_2 = { -828.5035f, 177.0551f, 69.9812f };
			Local_3106.f_5 = 159.28f;
			Local_3106.f_6 = GlobalFunc_4917(1);
			Local_3222.f_2 = { -826.2942f, 158.1811f, 68.3918f };
			Local_3222.f_5 = 84.0848f;
			Local_3222.f_6 = joaat("blista");
			Local_3222.f_9 = 53;
			Local_3142.f_2 = { -856.054f, 149.5746f, 62.2112f };
			Local_3142.f_5 = 3.163f;
			Local_3142.f_6 = GlobalFunc_4946(25);
			Local_3244.f_2 = { -1386.945f, 456.5691f, 104.2549f };
			Local_3244.f_5 = 28.1851f;
			Local_3244.f_6 = joaat("journey");
			Local_3244.f_9 = 51;
			Local_3160.f_6 = joaat("a_m_m_bevhills_01");
			Local_3288.f_1 = { -818.038f, 179.26f, 71.252f };
			Local_3288.f_4 = { -20.52f, -74.02f, 14.3f };
			Local_3288.f_7 = joaat("prop_tennis_rack_01");
			Local_3296.f_1 = { -818.128f, 179.1527f, 71.262f };
			Local_3296.f_4 = { -39.24f, -75.96f, 16.2f };
			Local_3296.f_7 = joaat("prop_tennis_rack_01");
			Local_3344.f_1 = { -819.6521f, 176.6348f, 70.76f };
			Local_3344.f_4 = { 6.12f, 0f, -68.4f };
			Local_3344.f_7 = joaat("prop_windowbox_broken");
			break;
		
		case 2:
			Local_3124.f_2 = { -993.486f, 647.2808f, 138.8108f };
			Local_3124.f_5 = 274.614f;
			Local_3124.f_6 = GlobalFunc_4917(0);
			Local_3200.f_2 = { -992.1501f, 645.7378f, 138.7702f };
			Local_3200.f_5 = 282.199f;
			Local_3200.f_6 = joaat("bison2");
			Local_3106.f_2 = { -991.849f, 643.7483f, 138.6733f };
			Local_3106.f_5 = 332.4843f;
			Local_3106.f_6 = GlobalFunc_4917(1);
			Local_3222.f_2 = { -1007.241f, 708.9224f, 161.0334f };
			Local_3222.f_5 = 358.5527f;
			Local_3222.f_6 = joaat("blista");
			Local_3142.f_2 = { -1026.916f, 653.8083f, 155.0754f };
			Local_3142.f_5 = 196.6071f;
			Local_3142.f_6 = GlobalFunc_4946(25);
			Local_3320.f_1 = { -1017.832f, 660.562f, 147.147f };
			Local_3320.f_4 = { 15f, 15f, 0f };
			Local_3320.f_7 = joaat("prop_ld_rope_t");
			Local_3312.f_1 = { -1006.08f, 652.88f, 143.62f };
			Local_3312.f_4 = { 0f, 15.01f, -32.4f };
			Local_3312.f_7 = joaat("prop_ld_dummy_rope");
			Local_3328.f_1 = { -1018.26f, 660.649f, 147.2f };
			Local_3328.f_4 = { 0f, 5f, -25.56f };
			Local_3328.f_7 = joaat("prop_rope_family_3");
			Local_3336.f_1 = { -995.2775f, 645.0095f, 139.65f };
			Local_3336.f_4 = { -90f, 0f, 102f };
			Local_3336.f_7 = joaat("prop_tail_gate_col");
			break;
		
		case 3:
			Local_3124.f_2 = { -993.4773f, 647.6854f, 138.7637f };
			Local_3124.f_5 = 255.1397f;
			Local_3124.f_6 = GlobalFunc_4917(0);
			Local_3200.f_2 = { -992.1501f, 645.7378f, 138.7702f };
			Local_3200.f_5 = 282.199f;
			Local_3200.f_6 = joaat("bison2");
			Local_3106.f_2 = { -992.5433f, 643.7088f, 138.7174f };
			Local_3106.f_5 = 86.0291f;
			Local_3106.f_6 = GlobalFunc_4917(1);
			Local_3222.f_2 = { -1007.241f, 708.9224f, 161.0334f };
			Local_3222.f_5 = 358.5527f;
			Local_3222.f_6 = joaat("blista");
			Local_3142.f_2 = { -1014.668f, 654.422f, 155.3056f };
			Local_3142.f_5 = 252.4493f;
			Local_3142.f_6 = GlobalFunc_4946(25);
			Local_3320.f_1 = { -1017.832f, 660.562f, 147.147f };
			Local_3320.f_4 = { 15f, 15f, 0f };
			Local_3320.f_7 = joaat("prop_ld_rope_t");
			Local_3312.f_1 = { -1006.08f, 652.88f, 143.62f };
			Local_3312.f_4 = { 0f, 15.01f, -32.4f };
			Local_3312.f_7 = joaat("prop_ld_dummy_rope");
			Local_3328.f_1 = { -1018.26f, 660.649f, 147.2f };
			Local_3328.f_4 = { 0f, 5f, -25.56f };
			Local_3328.f_7 = joaat("prop_rope_family_3");
			Local_3336.f_1 = { -995.2775f, 645.0095f, 139.65f };
			Local_3336.f_4 = { -90f, 0f, 102f };
			Local_3336.f_7 = joaat("prop_tail_gate_col");
			break;
		
		case 4:
			Local_3124.f_2 = { -993.4773f, 647.6854f, 138.7637f };
			Local_3124.f_5 = 255.1397f;
			Local_3124.f_6 = GlobalFunc_4917(0);
			Local_3200.f_2 = { -977.7563f, 646.6259f, 137.9191f };
			Local_3200.f_5 = 280.3406f;
			Local_3200.f_6 = joaat("bison2");
			Local_3106.f_2 = { -992.5433f, 643.7088f, 138.7174f };
			Local_3106.f_5 = 86.0291f;
			Local_3106.f_6 = GlobalFunc_4917(1);
			Local_3222.f_2 = { -1008.706f, 710.1682f, 161.5234f };
			Local_3222.f_5 = 347.3929f;
			Local_3222.f_6 = joaat("blista");
			Local_3142.f_2 = { -1020.19f, 698.98f, 160.9f };
			Local_3142.f_5 = 76.31f;
			Local_3142.f_6 = GlobalFunc_4946(25);
			break;
		
		case 5:
			Local_3124.f_2 = { -816.3374f, 160.827f, 70.0828f };
			Local_3124.f_5 = 293.3672f;
			Local_3124.f_6 = GlobalFunc_4917(0);
			Local_3200.f_2 = { -822.9047f, 182.45f, 70.8286f };
			Local_3200.f_5 = 305.1158f;
			Local_3200.f_6 = joaat("bison2");
			Local_3106.f_2 = { -815.2599f, 157.9198f, 70.0847f };
			Local_3106.f_5 = 300.3756f;
			Local_3106.f_6 = GlobalFunc_4917(1);
			Local_3266.f_2 = { -777.6288f, 161.9553f, 66.4745f };
			Local_3266.f_5 = 359.0025f;
			Local_3266.f_6 = joaat("baller");
			break;
		
		case 6:
			Local_3124.f_2 = { -95.55f, -415.1f, 35.675f };
			Local_3124.f_5 = 133f;
			Local_3124.f_6 = GlobalFunc_4917(0);
			Local_3178.f_2 = { -155.8183f, -423.4282f, 32.8517f };
			Local_3178.f_5 = 342.5681f;
			Local_3178.f_6 = GlobalFunc_4931(0, 0);
			Local_3304.f_1 = { -95.55f, -415.1f, 35.675f };
			Local_3304.f_4 = { 0f, 0f, 0f };
			Local_3304.f_7 = joaat("prop_phone_ing");
			break;
	}
}




void func_763()//Position - 0x77743
{
	if (!Local_3400.f_20)
	{
		if (GlobalFunc_9810(&iLocal_3356, 1, 1))
		{
			if (!GlobalFunc_751(&iLocal_3356, 3))
			{
				if (AUDIO::HAS_SOUND_FINISHED(iLocal_3789))
				{
					AUDIO::PLAY_SOUND_FRONTEND(iLocal_3789, "All", "SHORT_PLAYER_SWITCH_SOUND_SET", 1);
				}
				if (iLocal_3796 == 0)
				{
					WEAPON::ADD_AMMO_TO_PED(func_196(1), joaat("weapon_pistol"), WEAPON::GET_MAX_AMMO_IN_CLIP(func_196(1), joaat("weapon_pistol"), 1) * 5);
					iLocal_3796 = 1;
				}
				Local_3400.f_12 = iLocal_3356[iLocal_3356.f_7];
				Local_3400.f_20 = 1;
				iLocal_3797 = 0;
				if (!PED::IS_PED_INJURED(func_196(0)) && !PED::IS_PED_INJURED(func_196(1)))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(func_196(0), 0) || PED::IS_PED_IN_ANY_VEHICLE(func_196(1), 0))
					{
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
						{
							iLocal_3797 = 1;
						}
					}
				}
			}
		}
	}
	else if (func_765(&Local_3400, iLocal_3797))
	{
		if (!Local_3400.f_19)
		{
			if (GlobalFunc_10993(&iLocal_3356, 1, 1, 0))
			{
				GlobalFunc_7139(&Local_3434, 0);
				switch (GlobalFunc_8315())
				{
					case 0:
						if (HUD::DOES_BLIP_EXIST(Local_3124.f_1))
						{
							HUD::REMOVE_BLIP(&(Local_3124.f_1));
						}
						func_764(&Local_3106, iLocal_3356[iLocal_3356.f_5], 0, 1862763509);
						iLocal_3809[3] = 0;
						iLocal_3809[4] = 0;
						iLocal_3809[5] = 1;
						iLocal_3809[6] = 1;
						func_275(&Local_3106, 15);
						if (iLocal_3797 == 1)
						{
							GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneMichael", 0, 0);
						}
						break;
					
					case 1:
						if (HUD::DOES_BLIP_EXIST(Local_3106.f_1))
						{
							HUD::REMOVE_BLIP(&(Local_3106.f_1));
						}
						func_764(&Local_3124, iLocal_3356[iLocal_3356.f_5], 0, 1862763509);
						iLocal_3809[3] = 1;
						iLocal_3809[4] = 1;
						iLocal_3809[5] = 0;
						iLocal_3809[6] = 0;
						func_275(&Local_3106, 15);
						if (iLocal_3797 == 1)
						{
							GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneFranklin", 0, 0);
						}
						break;
				}
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3789))
				{
					AUDIO::STOP_SOUND(iLocal_3789);
				}
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(PLAYER::PLAYER_PED_ID(), 0);
				GlobalFunc_5125(4, PLAYER::PLAYER_PED_ID());
				GlobalFunc_565(222, 1, 0);
				GlobalFunc_2904(&iLocal_3356, 0, 0);
				GlobalFunc_2904(&iLocal_3356, 1, 0);
				iLocal_3765 = MISC::GET_GAME_TIMER();
				iLocal_3354 = 1;
				Local_3400.f_19 = 1;
				if (iLocal_3797 == 1)
				{
					Local_3400.f_20 = 0;
					Local_3400.f_19 = 0;
				}
			}
		}
	}
}

void func_764(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x77982
{
	if (!PED::IS_PED_INJURED(iParam1))
	{
		*iParam0 = iParam1;
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, 1);
		PED::SET_PED_CAN_BE_TARGETTED(iParam1, 0);
		PED::SET_PED_AS_ENEMY(iParam1, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, iParam3);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam1, 1);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam1, 16);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(iParam1, 0);
		PED::SET_PED_HIGHLY_PERCEPTIVE(iParam1, 1);
		PED::SET_PED_CONFIG_FLAG(iParam1, 188, 1);
		PED::SET_PED_CONFIG_FLAG(iParam1, 229, 1);
		PED::SET_PED_CONFIG_FLAG(iParam1, 32, 0);
		PED::SET_PED_CONFIG_FLAG(iParam1, 174, 1);
		PED::SET_COMBAT_FLOAT(iParam1, 12, 1f);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 54, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 46, 1);
		GlobalFunc_2903(iParam1, 400);
		if (WEAPON::GET_BEST_PED_WEAPON(iParam1, 0) == joaat("weapon_unarmed"))
		{
			WEAPON::GIVE_WEAPON_TO_PED(iParam1, joaat("weapon_pistol"), WEAPON::GET_MAX_AMMO_IN_CLIP(iParam1, joaat("weapon_pistol"), 1) * 2, 0, 0);
		}
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam1, "FAMILY_3_BUDDY_GROUP", 0);
		if (iParam2 == 1)
		{
			if (!HUD::DOES_BLIP_EXIST(iParam0->f_1))
			{
				iParam0->f_1 = GlobalFunc_6783(iParam1, 0, 0);
			}
		}
	}
}

int func_765(var uParam0, int iParam1)//Position - 0x77A6E
{
	if (iParam1 == 0)
	{
		if (func_766(uParam0, 0, 1148829696, 1148829696))
		{
			if (uParam0->f_18 == 1)
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_766(var uParam0, int iParam1, float fParam2, float fParam3)//Position - 0x77AA4
{
	return func_767(uParam0, 0, 3, iParam1, fParam2, fParam3, 0, 0, 0, 6, 0, 0, 0);
	return 1;
}

int func_767(var uParam0, int iParam1, int iParam2, var uParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, int iParam12)//Position - 0x77AC5
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
				if (CAM::DOES_CAM_EXIST(iParam1) || !MISC::IS_STRING_NULL_OR_EMPTY(iParam8))
				{
					iVar0 |= 2;
				}
				if (GlobalFunc_268())
				{
					iVar0 |= 1;
				}
				if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					STREAMING::START_PLAYER_SWITCH(uParam0->f_13, uParam0->f_12, iVar0, iParam2);
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
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam8))
				{
					STREAMING::SET_PLAYER_SWITCH_ESTABLISHING_SHOT(iParam8);
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
						GlobalFunc_7850(0, 1);
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
						GlobalFunc_7850(0, 1);
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
				GlobalFunc_7850(0, 1);
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































void func_798(int iParam0, var uParam1)//Position - 0x79912
{
	if (*iParam0 != 7 && *iParam0 != 8)
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_3200))
			{
				if (iLocal_3809[2] == 1)
				{
					if (GlobalFunc_2226(&Local_3200))
					{
						*uParam1 = 2;
						*iParam0 = 8;
					}
				}
				if (iLocal_3809[1] == 1)
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3200, 1) || (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_3200, PLAYER::PLAYER_PED_ID(), 1) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_3200, joaat("weapon_molotov"), 0)))
					{
						*uParam1 = 1;
						*iParam0 = 8;
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(func_196(1)))
			{
				if (iLocal_3809[5] == 1)
				{
					if (PED::IS_PED_INJURED(func_196(1)))
					{
						*uParam1 = 5;
						*iParam0 = 8;
					}
				}
				if (iLocal_3809[6] == 1)
				{
					if (!PED::IS_PED_INJURED(func_196(1)))
					{
						if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), func_196(1)) > 100f)
						{
							*uParam1 = 6;
							*iParam0 = 8;
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(func_196(0)))
			{
				if (iLocal_3809[3] == 1)
				{
					if (PED::IS_PED_INJURED(func_196(0)))
					{
						*uParam1 = 3;
						*iParam0 = 8;
					}
				}
				if (iLocal_3809[4] == 1)
				{
					if (!PED::IS_PED_INJURED(func_196(0)))
					{
						if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), func_196(0)) > 100f)
						{
							*uParam1 = 4;
							*iParam0 = 8;
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_3142))
			{
				if (iLocal_3809[7] == 1)
				{
					if (PED::IS_PED_INJURED(Local_3142))
					{
						*uParam1 = 7;
						*iParam0 = 8;
					}
				}
				if (iLocal_3809[8] == 1)
				{
					if (!PED::IS_PED_INJURED(Local_3142))
					{
						if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_3142, PLAYER::PLAYER_PED_ID(), 1) || (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3200, 0) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_3142, Local_3200, 1))) || func_800(PLAYER::PLAYER_PED_ID(), Local_3142, 3f))
						{
							func_799(Local_3142, PLAYER::PLAYER_PED_ID(), 300f, -1);
							*uParam1 = 8;
							*iParam0 = 8;
						}
					}
				}
				if (iLocal_3809[9] == 1)
				{
					if (!PED::IS_PED_INJURED(Local_3142))
					{
						if (((((ENTITY::IS_ENTITY_AT_COORD(Local_3142, -1024.92f, 661.2921f, 159.5753f, 10.25f, 8f, 4.75f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1024.92f, 661.2921f, 159.5753f, 10.25f, 8f, 4.75f, 0, 1, 0)) || PED::HAS_PED_RECEIVED_EVENT(Local_3142, 132)) || PED::HAS_PED_RECEIVED_EVENT(Local_3142, 22)) || PED::HAS_PED_RECEIVED_EVENT(Local_3142, 86)) || func_208(PLAYER::PLAYER_PED_ID(), Local_3142, 1, 5f))
						{
							func_799(Local_3142, PLAYER::PLAYER_PED_ID(), 300f, -1);
							*uParam1 = 9;
							*iParam0 = 8;
						}
					}
				}
			}
		}
	}
}

void func_799(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0x79BC2
{
	if (!PED::IS_PED_INJURED(iParam1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				TASK::CLEAR_PED_TASKS(iParam0);
				PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 4, 1);
				TASK::TASK_SMART_FLEE_PED(iParam0, iParam1, fParam2, iParam3, 0, 0);
				PED::SET_PED_KEEP_TASK(iParam0, 1);
			}
		}
	}
}

int func_800(int iParam0, int iParam1, float fParam2)//Position - 0x79C0A
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam1))
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_petrolcan"))
					{
						Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
						if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, &uVar4))
						{
							Var1.f_2 = uVar4;
						}
						if (PED::IS_PED_SHOOTING(iParam0) && GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(Var1, fParam2))
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


void func_802(int iParam0)//Position - 0x79C91
{
	if (iParam0 == -1)
	{
		return;
	}
	Global_67138[iParam0] = 1;
}





































int func_839(int iParam0)//Position - 0x7E484
{
	var uVar0;
	var uVar1;
	
	if (iParam0 == 5)
	{
		return 5;
	}
	uVar1 = iParam0 + 1;
	uVar0 = uVar1;
	return uVar0;
}

void func_840(var uParam0, int iParam1)//Position - 0x7E4A2
{
	if (iParam1 == 0)
	{
		*uParam0 = 1;
	}
	else if (iParam1 == 1)
	{
		*uParam0 = 3;
	}
	else if (iParam1 == 2)
	{
		*uParam0 = 4;
	}
}



void func_843()//Position - 0x7E51C
{
	if (GlobalFunc_111())
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			GlobalFunc_4956();
		}
		else
		{
			GlobalFunc_5105();
		}
		GlobalFunc_4935();
	}
	if (GlobalFunc_5172(&Local_3434, 1))
	{
		HUD::CLEAR_PRINTS();
	}
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(1);
	}
	GlobalFunc_2535(&uLocal_3821, &uLocal_3642);
	GlobalFunc_2910(sLocal_3060, &uLocal_3830, &uLocal_3643);
	GlobalFunc_2534(&uLocal_3837, &uLocal_3644);
	GlobalFunc_7139(&Local_3434, 0);
	func_396(0, 1);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 1);
	}
	switch (GlobalFunc_8315())
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(Local_3106))
			{
				if (!PED::IS_PED_INJURED(Local_3106))
				{
					if (PED::IS_PED_IN_COMBAT(Local_3106, 0))
					{
						PED::SET_PED_KEEP_TASK(Local_3106, 1);
					}
					else
					{
						TASK::CLEAR_PED_TASKS(Local_3106);
					}
					if (PED::IS_PED_GROUP_MEMBER(Local_3106, GlobalFunc_468()))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_3106);
					}
				}
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_3106);
				}
				else
				{
					PED::DELETE_PED(&Local_3106);
				}
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(Local_3124))
			{
				if (!PED::IS_PED_INJURED(Local_3124))
				{
					if (PED::IS_PED_IN_COMBAT(Local_3124, 0))
					{
						PED::SET_PED_KEEP_TASK(Local_3124, 1);
					}
					else
					{
						TASK::CLEAR_PED_TASKS(Local_3124);
					}
					if (PED::IS_PED_GROUP_MEMBER(Local_3124, GlobalFunc_468()))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_3124);
					}
				}
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_3124);
				}
				else
				{
					PED::DELETE_PED(&Local_3124);
				}
			}
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_3142))
	{
		if (!PED::IS_PED_INJURED(Local_3142))
		{
			TASK::CLEAR_PED_TASKS(Local_3142);
		}
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_3142);
		}
		else
		{
			PED::DELETE_PED(&Local_3142);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_3160))
	{
		if (!PED::IS_PED_INJURED(Local_3160))
		{
			TASK::CLEAR_PED_TASKS(Local_3160);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_3160);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_3200))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3200, 0))
		{
			VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_3200, true, 0);
			VEHICLE::SET_VEHICLE_STRONG(Local_3200, 0);
			VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Local_3200, 1);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_3200);
		}
	}
	func_111(&Local_3244, 0, 0);
	func_111(&Local_3222, 0, 0);
	func_111(&Local_3266, 0, 0);
	if (HUD::DOES_BLIP_EXIST(Local_3200.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_3200.f_1));
	}
	if (HUD::DOES_BLIP_EXIST(Local_3222.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_3222.f_1));
	}
	func_845(&Local_3925, 0, 0, 1);
	func_845(&Local_3962, 0, 0, 1);
	func_844(&Local_3880, 0, 0);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_3104);
	if (PHYSICS::DOES_ROPE_EXIST(&uLocal_3682) && ENTITY::DOES_ENTITY_EXIST(Local_3320))
	{
		PHYSICS::DETACH_ROPE_FROM_ENTITY(uLocal_3682, Local_3320);
		PHYSICS::DELETE_ROPE(&uLocal_3682);
		OBJECT::DELETE_OBJECT(&Local_3320);
		PHYSICS::ROPE_UNLOAD_TEXTURES();
		iLocal_3683 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_3312))
	{
		OBJECT::DELETE_OBJECT(&Local_3312);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_3328))
	{
		OBJECT::DELETE_OBJECT(&Local_3328);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_3336))
	{
		OBJECT::DELETE_OBJECT(&Local_3336);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_3304))
	{
		OBJECT::DELETE_OBJECT(&Local_3304);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_3344))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&Local_3344);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3696))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(uLocal_3696, 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3697))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(uLocal_3697, 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3698))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(uLocal_3698, 0);
	}
	STREAMING::REMOVE_PTFX_ASSET();
	STREAMING::REMOVE_ANIM_DICT("missfam3");
	STREAMING::REMOVE_ANIM_DICT("switch@michael@bench");
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tailgater"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bison2"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bison"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bison3"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("sadler"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("blista"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("baller"), 0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("g_m_y_pologoon_01"), 0);
	VEHICLE::REMOVE_VEHICLE_ASSET(joaat("bison2"));
	GlobalFunc_2224(0);
	GlobalFunc_4927(0, 1);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PED::SET_CREATE_RANDOM_COPS(1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	PATHFIND::SET_GPS_DISABLED_ZONE(0f, 0f, 0f, 0f, 0f, 0f);
	GlobalFunc_7632(0);
	GlobalFunc_563(0);
	MISC::ENABLE_DISPATCH_SERVICE(3, 1);
	MISC::ENABLE_DISPATCH_SERVICE(5, 1);
	CAM::STOP_GAMEPLAY_CAM_SHAKING(0);
	AUDIO::STOP_STREAM();
	AUDIO::STOP_AUDIO_SCENES();
	AUDIO::CANCEL_MUSIC_EVENT("FAM3_HOUSE_COLLAPSE");
	AUDIO::TRIGGER_MUSIC_EVENT("FAM3_MISSION_FAIL");
	GlobalFunc_695(1);
	GlobalFunc_52(1, 1);
	GlobalFunc_5168(1, 0, 0);
	GlobalFunc_699();
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1986583853))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1986583853, 0f, 0, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1986583853, 0, 0, 1);
	}
	GlobalFunc_2790(4, 0, 1);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	CAM::STOP_GAMEPLAY_HINT(0);
	GlobalFunc_4948(&uLocal_3459, 0, 0);
	func_732();
	SCRIPT::SET_NO_LOADING_SCREEN(0);
}

void func_844(var uParam0, int iParam1, int iParam2)//Position - 0x7E969
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		func_111(uParam0[iVar0 /*22*/], iParam1, iParam2);
		iVar0++;
	}
}

void func_845(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x7E998
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		func_365(uParam0[iVar0 /*18*/], iParam1, iParam2, iParam3);
		iVar0++;
	}
}

void func_846(int iParam0, int iParam1)//Position - 0x7E9C9
{
	if (iParam0 == 1)
	{
		GlobalFunc_7621(2, 0, iParam1, 1, 0);
	}
	else
	{
		GlobalFunc_7621(2, 1, iParam1, 1, 0);
	}
}



