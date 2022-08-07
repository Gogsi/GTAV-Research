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
	float fLocal_50 = 0f;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	bool bLocal_53 = 0;
	bool bLocal_54 = 0;
	bool bLocal_55 = 0;
	bool bLocal_56 = 0;
	bool bLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	bool bLocal_60 = 0;
	bool bLocal_61 = 0;
	int iLocal_62 = 0;
	bool bLocal_63 = 0;
	bool bLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	bool bLocal_69 = 0;
	bool bLocal_70 = 0;
	bool bLocal_71 = 0;
	int iLocal_72 = 0;
	bool bLocal_73 = 0;
	var uLocal_74 = 0;
	bool bLocal_75 = 0;
	bool bLocal_76 = 0;
	bool bLocal_77 = 0;
	bool bLocal_78 = 0;
	bool bLocal_79 = 0;
	bool bLocal_80 = 0;
	bool bLocal_81 = 0;
	bool bLocal_82 = 0;
	bool bLocal_83 = 0;
	bool bLocal_84 = 0;
	float fLocal_85[150] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_236[150] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_387[150] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_538[150] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_689[150] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	float fLocal_844[40] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_885[40] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_926[40] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_967[40] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1008[40] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1049[40] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1090[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1116[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1142[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1168[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1194 = 0f;
	float fLocal_1195 = 0f;
	float fLocal_1196 = 0f;
	float fLocal_1197 = 0f;
	float fLocal_1198 = 0f;
	float fLocal_1199 = 0f;
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
	int iLocal_1215[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1366[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1517[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1668[40] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1709[40] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1750[40] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1791[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1817 = 0;
	int iLocal_1818 = 0;
	int iLocal_1819 = 0;
	int iLocal_1820 = 0;
	int iLocal_1821 = 0;
	int iLocal_1822 = 0;
	int iLocal_1823 = 0;
	int iLocal_1824 = 0;
	int iLocal_1825 = 0;
	int iLocal_1826 = 0;
	int iLocal_1827 = 0;
	int iLocal_1828 = 0;
	int iLocal_1829 = 0;
	int iLocal_1830 = 0;
	int iLocal_1831 = 0;
	int iLocal_1832 = 0;
	int iLocal_1833 = 0;
	struct<3> Local_1834[150];
	struct<3> Local_2285[25];
	struct<3> Local_2361[40];
	struct<3> Local_2482 = { 0, 0, 0 } ;
	struct<3> Local_2485 = { 0, 0, 0 } ;
	struct<3> Local_2488 = { 0, 0, 0 } ;
	struct<3> Local_2491 = { 0, 0, 0 } ;
	struct<3> Local_2494 = { 0, 0, 0 } ;
	struct<3> Local_2497 = { 0, 0, 0 } ;
	struct<3> Local_2500 = { 0, 0, 0 } ;
	struct<3> Local_2503 = { 0, 0, 0 } ;
	struct<3> Local_2506 = { 0, 0, 0 } ;
	char cLocal_2509[64] = "";
	var uLocal_2517 = 0;
	var uLocal_2518 = 0;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
	int iLocal_2525 = 0;
	int iLocal_2526[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2677[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2703[40] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2744 = 0;
	int iLocal_2745 = 0;
	int iLocal_2746 = 0;
	int iLocal_2747[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2898[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2910[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2936[40] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2977[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2988 = 0;
	int iLocal_2989 = 0;
	int iLocal_2990 = 0;
	var uLocal_2991 = 11;
	var uLocal_2992 = 0;
	var uLocal_2993 = 0;
	var uLocal_2994 = 0;
	var uLocal_2995 = 0;
	var uLocal_2996 = 0;
	var uLocal_2997 = 0;
	var uLocal_2998 = 0;
	var uLocal_2999 = 0;
	var uLocal_3000 = 0;
	var uLocal_3001 = 0;
	var uLocal_3002 = 0;
	struct<3> Local_3003 = { 0, 0, 0 } ;
	float fLocal_3006 = 0f;
	struct<3> Local_3007 = { 0, 0, 0 } ;
	float fLocal_3010 = 0f;
	struct<3> Local_3011 = { 0, 0, 0 } ;
	struct<3> Local_3014 = { 0, 0, 0 } ;
	struct<3> Local_3017 = { 0, 0, 0 } ;
	bool bLocal_3020 = 0;
	var uLocal_3021 = 0;
	var uLocal_3022 = -1;
	var uLocal_3023 = 0;
	var uLocal_3024 = 0;
	var uLocal_3025 = 0;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = 1000;
	var uLocal_3030 = 1000;
	var uLocal_3031 = 0;
	struct<2> Local_3032[9];
	struct<4> Local_3051[11];
	var uLocal_3096 = 16;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	var uLocal_3104 = 0;
	var uLocal_3105 = 0;
	var uLocal_3106 = 0;
	var uLocal_3107 = 0;
	var uLocal_3108 = 0;
	var uLocal_3109 = 0;
	var uLocal_3110 = 0;
	var uLocal_3111 = 0;
	var uLocal_3112 = 0;
	var uLocal_3113 = 0;
	var uLocal_3114 = 0;
	var uLocal_3115 = 0;
	var uLocal_3116 = 0;
	var uLocal_3117 = 0;
	var uLocal_3118 = 0;
	var uLocal_3119 = 0;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 0;
	var uLocal_3127 = 0;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	var uLocal_3136 = 0;
	var uLocal_3137 = 0;
	var uLocal_3138 = 0;
	var uLocal_3139 = 0;
	var uLocal_3140 = 0;
	var uLocal_3141 = 0;
	var uLocal_3142 = 0;
	var uLocal_3143 = 0;
	var uLocal_3144 = 0;
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = 0;
	var uLocal_3149 = 0;
	var uLocal_3150 = 0;
	var uLocal_3151 = 0;
	var uLocal_3152 = 0;
	var uLocal_3153 = 0;
	var uLocal_3154 = 0;
	var uLocal_3155 = 0;
	var uLocal_3156 = 0;
	var uLocal_3157 = 0;
	var uLocal_3158 = 0;
	var uLocal_3159 = 0;
	var uLocal_3160 = 0;
	var uLocal_3161 = 0;
	var uLocal_3162 = 0;
	var uLocal_3163 = 0;
	var uLocal_3164 = 0;
	var uLocal_3165 = 0;
	var uLocal_3166 = 0;
	var uLocal_3167 = 0;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
	var uLocal_3170 = 0;
	var uLocal_3171 = 0;
	var uLocal_3172 = 0;
	var uLocal_3173 = 0;
	var uLocal_3174 = 0;
	var uLocal_3175 = 0;
	var uLocal_3176 = 0;
	var uLocal_3177 = 0;
	var uLocal_3178 = 0;
	var uLocal_3179 = 0;
	var uLocal_3180 = 0;
	var uLocal_3181 = 0;
	var uLocal_3182 = 0;
	var uLocal_3183 = 0;
	var uLocal_3184 = 0;
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
	var uLocal_3200 = 0;
	var uLocal_3201 = 0;
	var uLocal_3202 = 0;
	var uLocal_3203 = 0;
	var uLocal_3204 = 0;
	var uLocal_3205 = 0;
	var uLocal_3206 = 0;
	var uLocal_3207 = 0;
	var uLocal_3208 = 0;
	var uLocal_3209 = 0;
	var uLocal_3210 = 0;
	var uLocal_3211 = 0;
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
	var uLocal_3222 = 0;
	var uLocal_3223 = 0;
	var uLocal_3224 = 0;
	var uLocal_3225 = 0;
	var uLocal_3226 = 0;
	var uLocal_3227 = 0;
	var uLocal_3228 = 0;
	var uLocal_3229 = 0;
	var uLocal_3230 = 0;
	var uLocal_3231 = 0;
	var uLocal_3232 = 0;
	var uLocal_3233 = 0;
	var uLocal_3234 = 0;
	var uLocal_3235 = 0;
	var uLocal_3236 = 0;
	var uLocal_3237 = 0;
	var uLocal_3238 = 0;
	var uLocal_3239 = 0;
	var uLocal_3240 = 0;
	var uLocal_3241 = 0;
	var uLocal_3242 = 0;
	var uLocal_3243 = 0;
	var uLocal_3244 = 0;
	var uLocal_3245 = 0;
	var uLocal_3246 = 0;
	var uLocal_3247 = 0;
	var uLocal_3248 = 0;
	var uLocal_3249 = 0;
	var uLocal_3250 = 0;
	var uLocal_3251 = 0;
	var uLocal_3252 = 0;
	var uLocal_3253 = 0;
	var uLocal_3254 = 0;
	var uLocal_3255 = 0;
	var uLocal_3256 = 0;
	var uLocal_3257 = 0;
	var uLocal_3258 = 0;
	var uLocal_3259 = 0;
	var uLocal_3260 = 0;
	struct<6> Local_3261 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_3267 = 0;
	var uLocal_3268 = 1092616192;
	var uLocal_3269 = 1101004800;
	var uLocal_3270 = 0;
	var uLocal_3271 = 0;
	var uLocal_3272 = 0;
	var uLocal_3273 = 0;
	var uLocal_3274 = 0;
	var uLocal_3275 = 0;
	var uLocal_3276 = 0;
	var uLocal_3277 = 0;
	var uLocal_3278 = 3;
	var uLocal_3279 = 0;
	var uLocal_3280 = 0;
	var uLocal_3281 = 0;
	var uLocal_3282 = 0;
	var uLocal_3283 = 0;
	var uLocal_3284 = 0;
	var uLocal_3285 = 0;
	var uLocal_3286 = 0;
	var uLocal_3287 = 0;
	var uLocal_3288 = 0;
	var uLocal_3289 = 0;
	var uLocal_3290 = 0;
	var uLocal_3291 = 0;
	int iLocal_3292 = 0;
	int iLocal_3293 = 0;
	int iLocal_3294 = 0;
	int iLocal_3295 = 0;
	int iLocal_3296 = 0;
	int iLocal_3297 = 0;
	int iLocal_3298 = 0;
	int iLocal_3299 = 0;
	var uLocal_3300 = 0;
	var uLocal_3301 = 0;
	var uLocal_3302 = 0;
	var uLocal_3303 = 0;
	var uLocal_3304 = 0;
	var uLocal_3305 = 0;
	var uLocal_3306 = 0;
	var uLocal_3307 = 21;
	var uLocal_3308 = 6;
	var uLocal_3309 = 0;
	var uLocal_3310 = 0;
	var uLocal_3311 = 0;
	var uLocal_3312 = 4;
	var uLocal_3313 = 0;
	var uLocal_3314 = 0;
	var uLocal_3315 = 0;
	var uLocal_3316 = 0;
	var uLocal_3317 = 0;
	var uLocal_3318 = 0;
	var uLocal_3319 = 0;
	var uLocal_3320 = 4;
	var uLocal_3321 = 0;
	var uLocal_3322 = 0;
	var uLocal_3323 = 0;
	var uLocal_3324 = 0;
	var uLocal_3325 = 4;
	var uLocal_3326 = 0;
	var uLocal_3327 = 0;
	var uLocal_3328 = 0;
	var uLocal_3329 = 0;
	var uLocal_3330 = 4;
	var uLocal_3331 = 0;
	var uLocal_3332 = 0;
	var uLocal_3333 = 0;
	var uLocal_3334 = 0;
	var uLocal_3335 = 0;
	var uLocal_3336 = 4;
	var uLocal_3337 = 0;
	var uLocal_3338 = 0;
	var uLocal_3339 = 0;
	var uLocal_3340 = 0;
	var uLocal_3341 = 4;
	var uLocal_3342 = 0;
	var uLocal_3343 = 0;
	var uLocal_3344 = 0;
	var uLocal_3345 = 0;
	var uLocal_3346 = 4;
	var uLocal_3347 = 0;
	var uLocal_3348 = 0;
	var uLocal_3349 = 0;
	var uLocal_3350 = 0;
	var uLocal_3351 = 0;
	var uLocal_3352 = 0;
	var uLocal_3353 = 0;
	var uLocal_3354 = 0;
	var uLocal_3355 = 0;
	struct<21> Local_3356 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3377 = 0;
	var uLocal_3378 = 0;
	var uLocal_3379 = 0;
	var uLocal_3380 = 0;
	var uLocal_3381 = 0;
	var uLocal_3382 = 0;
	var uLocal_3383 = 0;
	var uLocal_3384 = 0;
	var uLocal_3385 = 0;
	var uLocal_3386 = 0;
	var uLocal_3387 = 0;
	var uLocal_3388 = 0;
	var uLocal_3389 = 0;
	int iLocal_3390 = 0;
	int iLocal_3391 = 0;
	int iLocal_3392 = 0;
	float fLocal_3393 = 0f;
	bool bLocal_3394 = 0;
	int iLocal_3395 = 0;
	int iLocal_3396 = 0;
	int iLocal_3397 = 0;
	int iLocal_3398 = 0;
	int iLocal_3399 = 0;
	int iLocal_3400 = 0;
	int iLocal_3401 = 0;
	int iLocal_3402 = 0;
	bool bLocal_3403 = 0;
	int iLocal_3404 = 0;
	int iLocal_3405 = 0;
	int iLocal_3406 = 0;
	int iLocal_3407 = 0;
	int iLocal_3408 = 0;
	bool bLocal_3409 = 0;
	int iLocal_3410 = 0;
	var uLocal_3411 = 0;
	var uLocal_3412 = 0;
	var uLocal_3413 = 0;
	var uLocal_3414 = 0;
	var uLocal_3415 = 0;
	var uLocal_3416 = 0;
	var uLocal_3417 = 0;
	var uLocal_3418 = 0;
	int iLocal_3419 = 0;
	int iLocal_3420 = 0;
	int iLocal_3421 = 0;
	int iLocal_3422 = 0;
	int iLocal_3423 = 0;
	int iLocal_3424 = 0;
	int iLocal_3425 = 0;
	int iLocal_3426 = 0;
	int iLocal_3427 = 0;
	float fLocal_3428 = 0f;
	float fLocal_3429 = 0f;
	bool bLocal_3430 = 0;
	int iLocal_3431 = 0;
	int iLocal_3432 = 0;
	int iLocal_3433 = 0;
	float fLocal_3434 = 0f;
	int iLocal_3435 = 0;
	int iLocal_3436 = 0;
	int iLocal_3437 = 0;
	int iLocal_3438 = 0;
	int iLocal_3439 = 0;
	var uLocal_3440 = 0;
	var uLocal_3441 = 0;
	var uLocal_3442 = -1;
	var uLocal_3443 = 0;
	var uLocal_3444 = 0;
	var uLocal_3445 = 0;
	var uLocal_3446 = 0;
	var uLocal_3447 = 0;
	var uLocal_3448 = 0;
	var uLocal_3449 = 1000;
	var uLocal_3450 = 1000;
	var uLocal_3451 = 0;
	int iLocal_3452 = 0;
	var uLocal_3453 = 0;
	int iLocal_3454 = 0;
	int iLocal_3455 = 0;
	int iLocal_3456 = 0;
	int iLocal_3457 = 0;
	int iLocal_3458 = 0;
	int iLocal_3459 = 0;
	float fLocal_3460 = 0f;
	int iLocal_3461 = 0;
	int iLocal_3462 = 0;
	int iLocal_3463 = 0;
	int iLocal_3464 = 0;
	int iLocal_3465 = 0;
	int iLocal_3466 = 0;
	int iLocal_3467 = 0;
	int iLocal_3468 = 0;
	int iLocal_3469 = 0;
	int iLocal_3470 = 0;
	int iLocal_3471 = 0;
	int iLocal_3472 = 0;
	int iLocal_3473 = 0;
	int iLocal_3474 = 0;
	int iLocal_3475 = 0;
	int iLocal_3476 = 0;
	int iLocal_3477 = 0;
	int iLocal_3478 = 0;
	int iLocal_3479 = 0;
	char cLocal_3480[24] = "";
	var uLocal_3483 = 0;
	var uLocal_3484 = 0;
	var uLocal_3485 = 0;
	char cLocal_3486[24] = "";
	var uLocal_3489 = 0;
	var uLocal_3490 = 0;
	var uLocal_3491 = 0;
	int iLocal_3492 = 0;
	char cLocal_3493[24] = "";
	var uLocal_3496 = 0;
	var uLocal_3497 = 0;
	var uLocal_3498 = 0;
	char cLocal_3499[24] = "";
	var uLocal_3502 = 0;
	var uLocal_3503 = 0;
	var uLocal_3504 = 0;
	int iLocal_3505 = 0;
	struct<6> Local_3506 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_3512 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_3518 = 0;
	int iLocal_3519 = 0;
	int iLocal_3520 = 0;
	int iLocal_3521 = 0;
	int iLocal_3522 = 0;
	int iLocal_3523 = 0;
	int iLocal_3524 = 0;
	int iLocal_3525 = 0;
	bool bLocal_3526 = 0;
	int iLocal_3527 = 0;
	int iLocal_3528 = 0;
	int iLocal_3529 = 0;
	int iLocal_3530 = 0;
	bool bLocal_3531 = 0;
	int iLocal_3532 = 0;
	int iLocal_3533 = 0;
	int iLocal_3534 = 0;
	int iLocal_3535 = 0;
	int iLocal_3536 = 0;
	int iLocal_3537 = 0;
	int iLocal_3538 = 0;
	bool bLocal_3539 = 0;
	int iLocal_3540 = 0;
	bool bLocal_3541 = 0;
	bool bLocal_3542 = 0;
	var uLocal_3543 = 0;
	int iLocal_3544 = 0;
	float fLocal_3545 = 0f;
	float fLocal_3546 = 0f;
	var uLocal_3547 = 30;
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
	var uLocal_3636 = 0;
	var uLocal_3637 = 0;
	var uLocal_3638 = 0;
	var uLocal_3639 = 0;
	var uLocal_3640 = 0;
	var uLocal_3641 = 0;
	var uLocal_3642 = 0;
	var uLocal_3643 = 0;
	var uLocal_3644 = 0;
	var uLocal_3645 = 0;
	var uLocal_3646 = 0;
	var uLocal_3647 = 0;
	var uLocal_3648 = 0;
	var uLocal_3649 = 0;
	var uLocal_3650 = 0;
	var uLocal_3651 = 0;
	var uLocal_3652 = 0;
	var uLocal_3653 = 0;
	var uLocal_3654 = 0;
	var uLocal_3655 = 0;
	var uLocal_3656 = 0;
	var uLocal_3657 = 0;
	var uLocal_3658 = 0;
	var uLocal_3659 = 0;
	var uLocal_3660 = 0;
	var uLocal_3661 = 0;
	var uLocal_3662 = 0;
	var uLocal_3663 = 0;
	var uLocal_3664 = 0;
	var uLocal_3665 = 0;
	var uLocal_3666 = 0;
	var uLocal_3667 = 0;
	var uLocal_3668 = 0;
	var uLocal_3669 = 0;
	var uLocal_3670 = 0;
	var uLocal_3671 = 0;
	var uLocal_3672 = 0;
	var uLocal_3673 = 0;
	var uLocal_3674 = 0;
	var uLocal_3675 = 0;
	var uLocal_3676 = 0;
	var uLocal_3677 = 0;
	var uLocal_3678 = 0;
	var uLocal_3679 = 0;
	var uLocal_3680 = 0;
	var uLocal_3681 = 0;
	var uLocal_3682 = 0;
	var uLocal_3683 = 0;
	var uLocal_3684 = 0;
	var uLocal_3685 = 0;
	var uLocal_3686 = 0;
	var uLocal_3687 = 0;
	var uLocal_3688 = 0;
	var uLocal_3689 = 0;
	var uLocal_3690 = 0;
	var uLocal_3691 = 0;
	var uLocal_3692 = 0;
	var uLocal_3693 = 0;
	var uLocal_3694 = 0;
	var uLocal_3695 = 0;
	var uLocal_3696 = 0;
	var uLocal_3697 = 0;
	var uLocal_3698 = 10;
	var uLocal_3699 = 0;
	var uLocal_3700 = 0;
	var uLocal_3701 = 0;
	var uLocal_3702 = 0;
	var uLocal_3703 = 0;
	var uLocal_3704 = 0;
	var uLocal_3705 = 0;
	var uLocal_3706 = 0;
	var uLocal_3707 = 0;
	var uLocal_3708 = 0;
	var uLocal_3709 = 0;
	var uLocal_3710 = 0;
	var uLocal_3711 = 0;
	var uLocal_3712 = 0;
	var uLocal_3713 = 0;
	var uLocal_3714 = 0;
	var uLocal_3715 = 0;
	var uLocal_3716 = 0;
	var uLocal_3717 = 0;
	var uLocal_3718 = 0;
	var uLocal_3719 = 0;
	var uLocal_3720 = 0;
	var uLocal_3721 = 0;
	var uLocal_3722 = 0;
	var uLocal_3723 = 0;
	var uLocal_3724 = 0;
	var uLocal_3725 = 0;
	var uLocal_3726 = 0;
	var uLocal_3727 = 0;
	var uLocal_3728 = 0;
	var uLocal_3729 = 0;
	var uLocal_3730 = 0;
	var uLocal_3731 = 0;
	var uLocal_3732 = 0;
	var uLocal_3733 = 0;
	var uLocal_3734 = 0;
	var uLocal_3735 = 0;
	var uLocal_3736 = 0;
	var uLocal_3737 = 0;
	var uLocal_3738 = 0;
	var uLocal_3739 = 0;
	var uLocal_3740 = 0;
	var uLocal_3741 = 0;
	var uLocal_3742 = 0;
	var uLocal_3743 = 0;
	var uLocal_3744 = 0;
	var uLocal_3745 = 0;
	var uLocal_3746 = 0;
	var uLocal_3747 = 0;
	var uLocal_3748 = 0;
	var uLocal_3749 = 10;
	var uLocal_3750 = 0;
	var uLocal_3751 = 0;
	var uLocal_3752 = 0;
	var uLocal_3753 = 0;
	var uLocal_3754 = 0;
	var uLocal_3755 = 0;
	var uLocal_3756 = 0;
	var uLocal_3757 = 0;
	var uLocal_3758 = 0;
	var uLocal_3759 = 0;
	var uLocal_3760 = 0;
	var uLocal_3761 = 0;
	var uLocal_3762 = 0;
	var uLocal_3763 = 0;
	var uLocal_3764 = 0;
	var uLocal_3765 = 0;
	var uLocal_3766 = 0;
	var uLocal_3767 = 0;
	var uLocal_3768 = 0;
	var uLocal_3769 = 0;
	var uLocal_3770 = 0;
	var uLocal_3771 = 0;
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
	var uLocal_3793 = 0;
	var uLocal_3794 = 0;
	var uLocal_3795 = 0;
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
	var uLocal_3817 = 0;
	var uLocal_3818 = 0;
	var uLocal_3819 = 0;
	var uLocal_3820 = 20;
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
	var uLocal_3841 = 0;
	var uLocal_3842 = 0;
	var uLocal_3843 = 0;
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
	var uLocal_3865 = 0;
	var uLocal_3866 = 0;
	var uLocal_3867 = 0;
	var uLocal_3868 = 0;
	var uLocal_3869 = 0;
	var uLocal_3870 = 0;
	var uLocal_3871 = 0;
	var uLocal_3872 = 0;
	var uLocal_3873 = 0;
	var uLocal_3874 = 0;
	var uLocal_3875 = 0;
	var uLocal_3876 = 0;
	var uLocal_3877 = 0;
	var uLocal_3878 = 0;
	var uLocal_3879 = 0;
	var uLocal_3880 = 0;
	var uLocal_3881 = 0;
	var uLocal_3882 = 0;
	var uLocal_3883 = 0;
	var uLocal_3884 = 0;
	var uLocal_3885 = 0;
	var uLocal_3886 = 0;
	var uLocal_3887 = 0;
	var uLocal_3888 = 0;
	var uLocal_3889 = 0;
	var uLocal_3890 = 0;
	var uLocal_3891 = 0;
	var uLocal_3892 = 0;
	var uLocal_3893 = 0;
	var uLocal_3894 = 0;
	var uLocal_3895 = 0;
	var uLocal_3896 = 0;
	var uLocal_3897 = 0;
	var uLocal_3898 = 0;
	var uLocal_3899 = 0;
	var uLocal_3900 = 0;
	var uLocal_3901 = 0;
	var uLocal_3902 = 0;
	var uLocal_3903 = 0;
	var uLocal_3904 = 0;
	var uLocal_3905 = 0;
	var uLocal_3906 = 0;
	var uLocal_3907 = 0;
	var uLocal_3908 = 0;
	var uLocal_3909 = 0;
	var uLocal_3910 = 0;
	var uLocal_3911 = 0;
	var uLocal_3912 = 0;
	var uLocal_3913 = 0;
	var uLocal_3914 = 0;
	var uLocal_3915 = 0;
	var uLocal_3916 = 0;
	var uLocal_3917 = 0;
	var uLocal_3918 = 0;
	var uLocal_3919 = 0;
	var uLocal_3920 = 0;
	var uLocal_3921 = 20;
	var uLocal_3922 = 0;
	var uLocal_3923 = 0;
	var uLocal_3924 = 0;
	var uLocal_3925 = 0;
	var uLocal_3926 = 0;
	var uLocal_3927 = 0;
	var uLocal_3928 = 0;
	var uLocal_3929 = 0;
	var uLocal_3930 = 0;
	var uLocal_3931 = 0;
	var uLocal_3932 = 0;
	var uLocal_3933 = 0;
	var uLocal_3934 = 0;
	var uLocal_3935 = 0;
	var uLocal_3936 = 0;
	var uLocal_3937 = 0;
	var uLocal_3938 = 0;
	var uLocal_3939 = 0;
	var uLocal_3940 = 0;
	var uLocal_3941 = 0;
	var uLocal_3942 = 0;
	var uLocal_3943 = 0;
	var uLocal_3944 = 0;
	var uLocal_3945 = 0;
	var uLocal_3946 = 0;
	var uLocal_3947 = 0;
	var uLocal_3948 = 0;
	var uLocal_3949 = 0;
	var uLocal_3950 = 0;
	var uLocal_3951 = 0;
	var uLocal_3952 = 0;
	var uLocal_3953 = 0;
	var uLocal_3954 = 0;
	var uLocal_3955 = 0;
	var uLocal_3956 = 0;
	var uLocal_3957 = 0;
	var uLocal_3958 = 0;
	var uLocal_3959 = 0;
	var uLocal_3960 = 0;
	var uLocal_3961 = 0;
	var uLocal_3962 = 0;
	var uLocal_3963 = 0;
	var uLocal_3964 = 0;
	var uLocal_3965 = 0;
	var uLocal_3966 = 0;
	var uLocal_3967 = 0;
	var uLocal_3968 = 0;
	var uLocal_3969 = 0;
	var uLocal_3970 = 0;
	var uLocal_3971 = 0;
	var uLocal_3972 = 0;
	var uLocal_3973 = 0;
	var uLocal_3974 = 0;
	var uLocal_3975 = 0;
	var uLocal_3976 = 0;
	var uLocal_3977 = 0;
	var uLocal_3978 = 0;
	var uLocal_3979 = 0;
	var uLocal_3980 = 0;
	var uLocal_3981 = 0;
	var uLocal_3982 = 0;
	var uLocal_3983 = 0;
	var uLocal_3984 = 0;
	var uLocal_3985 = 0;
	var uLocal_3986 = 0;
	var uLocal_3987 = 0;
	var uLocal_3988 = 0;
	var uLocal_3989 = 0;
	var uLocal_3990 = 0;
	var uLocal_3991 = 0;
	var uLocal_3992 = 0;
	var uLocal_3993 = 0;
	var uLocal_3994 = 0;
	var uLocal_3995 = 0;
	var uLocal_3996 = 0;
	var uLocal_3997 = 0;
	var uLocal_3998 = 0;
	var uLocal_3999 = 0;
	var uLocal_4000 = 0;
	var uLocal_4001 = 0;
	var uLocal_4002 = 0;
	var uLocal_4003 = 0;
	var uLocal_4004 = 0;
	var uLocal_4005 = 0;
	var uLocal_4006 = 0;
	var uLocal_4007 = 0;
	var uLocal_4008 = 0;
	var uLocal_4009 = 0;
	var uLocal_4010 = 0;
	var uLocal_4011 = 0;
	var uLocal_4012 = 0;
	var uLocal_4013 = 0;
	var uLocal_4014 = 0;
	var uLocal_4015 = 0;
	var uLocal_4016 = 0;
	var uLocal_4017 = 0;
	var uLocal_4018 = 0;
	var uLocal_4019 = 0;
	var uLocal_4020 = 0;
	var uLocal_4021 = 0;
	var uLocal_4022 = 30;
	var uLocal_4023 = 0;
	var uLocal_4024 = 0;
	var uLocal_4025 = 0;
	var uLocal_4026 = 0;
	var uLocal_4027 = 0;
	var uLocal_4028 = 0;
	var uLocal_4029 = 0;
	var uLocal_4030 = 0;
	var uLocal_4031 = 0;
	var uLocal_4032 = 0;
	var uLocal_4033 = 0;
	var uLocal_4034 = 0;
	var uLocal_4035 = 0;
	var uLocal_4036 = 0;
	var uLocal_4037 = 0;
	var uLocal_4038 = 0;
	var uLocal_4039 = 0;
	var uLocal_4040 = 0;
	var uLocal_4041 = 0;
	var uLocal_4042 = 0;
	var uLocal_4043 = 0;
	var uLocal_4044 = 0;
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
	var uLocal_4203 = 5;
	var uLocal_4204 = 0;
	var uLocal_4205 = 0;
	var uLocal_4206 = 0;
	var uLocal_4207 = 0;
	var uLocal_4208 = 0;
	var uLocal_4209 = 0;
	var uLocal_4210 = 0;
	var uLocal_4211 = 0;
	var uLocal_4212 = 0;
	var uLocal_4213 = 0;
	var uLocal_4214 = 0;
	var uLocal_4215 = 0;
	var uLocal_4216 = 0;
	var uLocal_4217 = 0;
	var uLocal_4218 = 0;
	var uLocal_4219 = 0;
	var uLocal_4220 = 0;
	var uLocal_4221 = 0;
	var uLocal_4222 = 0;
	var uLocal_4223 = 0;
	var uLocal_4224 = 0;
	var uLocal_4225 = 0;
	var uLocal_4226 = 0;
	var uLocal_4227 = 0;
	var uLocal_4228 = 0;
	var uLocal_4229 = 0;
	var uLocal_4230 = 0;
	var uLocal_4231 = 0;
	var uLocal_4232 = 0;
	var uLocal_4233 = 0;
	var uLocal_4234 = 7;
	var uLocal_4235 = 0;
	var uLocal_4236 = 0;
	var uLocal_4237 = 0;
	var uLocal_4238 = 0;
	var uLocal_4239 = 0;
	var uLocal_4240 = 0;
	var uLocal_4241 = 0;
	var uLocal_4242 = 0;
	var uLocal_4243 = 0;
	var uLocal_4244 = 0;
	var uLocal_4245 = 0;
	var uLocal_4246 = 0;
	var uLocal_4247 = 0;
	var uLocal_4248 = 0;
	var uLocal_4249 = 0;
	var uLocal_4250 = 0;
	var uLocal_4251 = 0;
	var uLocal_4252 = 0;
	var uLocal_4253 = 0;
	var uLocal_4254 = 0;
	var uLocal_4255 = 0;
	var uLocal_4256 = 0;
	var uLocal_4257 = 0;
	var uLocal_4258 = 0;
	var uLocal_4259 = 0;
	var uLocal_4260 = 0;
	var uLocal_4261 = 0;
	var uLocal_4262 = 0;
	var uLocal_4263 = 0;
	var uLocal_4264 = 0;
	var uLocal_4265 = 0;
	var uLocal_4266 = 0;
	var uLocal_4267 = 0;
	var uLocal_4268 = 0;
	var uLocal_4269 = 0;
	var uLocal_4270 = 0;
	var uLocal_4271 = 0;
	var uLocal_4272 = 0;
	var uLocal_4273 = 0;
	var uLocal_4274 = 0;
	var uLocal_4275 = 0;
	var uLocal_4276 = 0;
	var uLocal_4277 = 0;
	var uLocal_4278 = 0;
	var uLocal_4279 = 0;
	var uLocal_4280 = 0;
	var uLocal_4281 = 0;
	var uLocal_4282 = 0;
	var uLocal_4283 = 0;
	var uLocal_4284 = 5;
	var uLocal_4285 = 0;
	var uLocal_4286 = 0;
	var uLocal_4287 = 0;
	var uLocal_4288 = 0;
	var uLocal_4289 = 0;
	var uLocal_4290 = 0;
	var uLocal_4291 = 0;
	var uLocal_4292 = 0;
	var uLocal_4293 = 0;
	var uLocal_4294 = 0;
	var uLocal_4295 = 0;
	var uLocal_4296 = 0;
	var uLocal_4297 = 0;
	var uLocal_4298 = 0;
	var uLocal_4299 = 0;
	var uLocal_4300 = 0;
	var uLocal_4301 = 0;
	var uLocal_4302 = 0;
	var uLocal_4303 = 0;
	var uLocal_4304 = 0;
	var uLocal_4305 = 0;
	var uLocal_4306 = 0;
	var uLocal_4307 = 0;
	var uLocal_4308 = 0;
	var uLocal_4309 = 0;
	var uLocal_4310 = 3;
	var uLocal_4311 = 0;
	var uLocal_4312 = 0;
	var uLocal_4313 = 0;
	var uLocal_4314 = 0;
	var uLocal_4315 = 0;
	var uLocal_4316 = 0;
	var uLocal_4317 = 0;
	var uLocal_4318 = 0;
	var uLocal_4319 = 0;
	var uLocal_4320 = 0;
	var uLocal_4321 = 0;
	var uLocal_4322 = 0;
	var uLocal_4323 = 0;
	var uLocal_4324 = 0;
	var uLocal_4325 = 0;
	var uLocal_4326 = 15;
	var uLocal_4327 = 0;
	var uLocal_4328 = 0;
	var uLocal_4329 = 0;
	var uLocal_4330 = 0;
	var uLocal_4331 = 0;
	var uLocal_4332 = 0;
	var uLocal_4333 = 0;
	var uLocal_4334 = 0;
	var uLocal_4335 = 0;
	var uLocal_4336 = 0;
	var uLocal_4337 = 0;
	var uLocal_4338 = 0;
	var uLocal_4339 = 0;
	var uLocal_4340 = 0;
	var uLocal_4341 = 0;
	var uLocal_4342 = 0;
	var uLocal_4343 = 0;
	var uLocal_4344 = 0;
	var uLocal_4345 = 0;
	var uLocal_4346 = 0;
	var uLocal_4347 = 0;
	var uLocal_4348 = 0;
	var uLocal_4349 = 0;
	var uLocal_4350 = 0;
	var uLocal_4351 = 0;
	var uLocal_4352 = 0;
	var uLocal_4353 = 0;
	var uLocal_4354 = 0;
	var uLocal_4355 = 0;
	var uLocal_4356 = 0;
	var uLocal_4357 = 0;
	var uLocal_4358 = 0;
	var uLocal_4359 = 0;
	var uLocal_4360 = 0;
	var uLocal_4361 = 0;
	var uLocal_4362 = 0;
	var uLocal_4363 = 0;
	var uLocal_4364 = 0;
	var uLocal_4365 = 0;
	var uLocal_4366 = 0;
	var uLocal_4367 = 0;
	var uLocal_4368 = 0;
	var uLocal_4369 = 0;
	var uLocal_4370 = 0;
	var uLocal_4371 = 0;
	var uLocal_4372 = 0;
	var uLocal_4373 = 0;
	var uLocal_4374 = 0;
	var uLocal_4375 = 0;
	var uLocal_4376 = 0;
	var uLocal_4377 = 0;
	var uLocal_4378 = 0;
	var uLocal_4379 = 0;
	var uLocal_4380 = 0;
	var uLocal_4381 = 0;
	var uLocal_4382 = 0;
	var uLocal_4383 = 0;
	var uLocal_4384 = 0;
	var uLocal_4385 = 0;
	var uLocal_4386 = 0;
	var uLocal_4387 = 0;
	var uLocal_4388 = 0;
	var uLocal_4389 = 0;
	var uLocal_4390 = 0;
	var uLocal_4391 = 0;
	var uLocal_4392 = 0;
	var uLocal_4393 = 0;
	var uLocal_4394 = 0;
	var uLocal_4395 = 0;
	var uLocal_4396 = 0;
	var uLocal_4397 = 0;
	var uLocal_4398 = 0;
	var uLocal_4399 = 0;
	var uLocal_4400 = 0;
	var uLocal_4401 = 0;
	var uLocal_4402 = 0;
	var uLocal_4403 = 0;
	var uLocal_4404 = 0;
	var uLocal_4405 = 0;
	var uLocal_4406 = 0;
	var uLocal_4407 = 0;
	var uLocal_4408 = 0;
	var uLocal_4409 = 0;
	var uLocal_4410 = 0;
	var uLocal_4411 = 0;
	var uLocal_4412 = 0;
	var uLocal_4413 = 0;
	var uLocal_4414 = 0;
	var uLocal_4415 = 0;
	var uLocal_4416 = 0;
	var uLocal_4417 = 0;
	var uLocal_4418 = 0;
	var uLocal_4419 = 0;
	var uLocal_4420 = 0;
	var uLocal_4421 = 10;
	var uLocal_4422 = 0;
	var uLocal_4423 = 0;
	var uLocal_4424 = 0;
	var uLocal_4425 = 0;
	var uLocal_4426 = 0;
	var uLocal_4427 = 0;
	var uLocal_4428 = 0;
	var uLocal_4429 = 0;
	var uLocal_4430 = 0;
	var uLocal_4431 = 0;
	var uLocal_4432 = 0;
	var uLocal_4433 = 0;
	var uLocal_4434 = 0;
	var uLocal_4435 = 0;
	var uLocal_4436 = 0;
	var uLocal_4437 = 0;
	var uLocal_4438 = 0;
	var uLocal_4439 = 0;
	var uLocal_4440 = 0;
	var uLocal_4441 = 0;
	var uLocal_4442 = 0;
	var uLocal_4443 = 0;
	var uLocal_4444 = 0;
	var uLocal_4445 = 0;
	var uLocal_4446 = 0;
	var uLocal_4447 = 0;
	var uLocal_4448 = 0;
	var uLocal_4449 = 0;
	var uLocal_4450 = 0;
	var uLocal_4451 = 0;
	var uLocal_4452 = 0;
	var uLocal_4453 = 0;
	var uLocal_4454 = 0;
	var uLocal_4455 = 0;
	var uLocal_4456 = 0;
	var uLocal_4457 = 0;
	var uLocal_4458 = 0;
	var uLocal_4459 = 0;
	var uLocal_4460 = 0;
	var uLocal_4461 = 0;
	var uLocal_4462 = 0;
	var uLocal_4463 = 0;
	var uLocal_4464 = 0;
	var uLocal_4465 = 0;
	var uLocal_4466 = 0;
	var uLocal_4467 = 0;
	var uLocal_4468 = 0;
	var uLocal_4469 = 0;
	var uLocal_4470 = 0;
	var uLocal_4471 = 0;
	var uLocal_4472 = 5;
	var uLocal_4473 = 0;
	var uLocal_4474 = 0;
	var uLocal_4475 = 0;
	var uLocal_4476 = 0;
	var uLocal_4477 = 0;
	var uLocal_4478 = 0;
	var uLocal_4479 = 0;
	var uLocal_4480 = 0;
	var uLocal_4481 = 0;
	var uLocal_4482 = 0;
	var uLocal_4483 = 0;
	var uLocal_4484 = 0;
	var uLocal_4485 = 0;
	var uLocal_4486 = 0;
	var uLocal_4487 = 0;
	var uLocal_4488 = 0;
	var uLocal_4489 = 0;
	var uLocal_4490 = 0;
	var uLocal_4491 = 0;
	var uLocal_4492 = 0;
	var uLocal_4493 = 0;
	var uLocal_4494 = 0;
	var uLocal_4495 = 0;
	var uLocal_4496 = 0;
	var uLocal_4497 = 0;
	var uLocal_4498 = 5;
	var uLocal_4499 = 0;
	var uLocal_4500 = 0;
	var uLocal_4501 = 0;
	var uLocal_4502 = 0;
	var uLocal_4503 = 0;
	var uLocal_4504 = 0;
	var uLocal_4505 = 0;
	var uLocal_4506 = 0;
	var uLocal_4507 = 0;
	var uLocal_4508 = 0;
	var uLocal_4509 = 0;
	var uLocal_4510 = 0;
	var uLocal_4511 = 0;
	var uLocal_4512 = 0;
	var uLocal_4513 = 0;
	var uLocal_4514 = 0;
	var uLocal_4515 = 0;
	var uLocal_4516 = 0;
	var uLocal_4517 = 0;
	var uLocal_4518 = 0;
	var uLocal_4519 = 0;
	var uLocal_4520 = 0;
	var uLocal_4521 = 0;
	var uLocal_4522 = 0;
	var uLocal_4523 = 0;
	var uLocal_4524 = 0;
	var uLocal_4525 = 0;
	var uLocal_4526 = 0;
	var uLocal_4527 = 11;
	var uLocal_4528 = 0;
	var uLocal_4529 = 0;
	var uLocal_4530 = 0;
	var uLocal_4531 = 0;
	var uLocal_4532 = 0;
	var uLocal_4533 = 0;
	var uLocal_4534 = 0;
	var uLocal_4535 = 0;
	var uLocal_4536 = 0;
	var uLocal_4537 = 0;
	var uLocal_4538 = 0;
	var uLocal_4539 = 0;
	var uLocal_4540 = 0;
	var uLocal_4541 = 0;
	var uLocal_4542 = 0;
	var uLocal_4543 = 0;
	var uLocal_4544 = 0;
	var uLocal_4545 = 12;
	var uLocal_4546 = 0;
	var uLocal_4547 = 0;
	var uLocal_4548 = 0;
	var uLocal_4549 = 0;
	var uLocal_4550 = 0;
	var uLocal_4551 = 0;
	var uLocal_4552 = 0;
	var uLocal_4553 = 0;
	var uLocal_4554 = 0;
	var uLocal_4555 = 0;
	var uLocal_4556 = 0;
	var uLocal_4557 = 0;
	var uLocal_4558 = 12;
	var uLocal_4559 = 0;
	var uLocal_4560 = 0;
	var uLocal_4561 = 0;
	var uLocal_4562 = 0;
	var uLocal_4563 = 0;
	var uLocal_4564 = 0;
	var uLocal_4565 = 0;
	var uLocal_4566 = 0;
	var uLocal_4567 = 0;
	var uLocal_4568 = 0;
	var uLocal_4569 = 0;
	var uLocal_4570 = 0;
	var uLocal_4571 = 12;
	var uLocal_4572 = 0;
	var uLocal_4573 = 0;
	var uLocal_4574 = 0;
	var uLocal_4575 = 0;
	var uLocal_4576 = 0;
	var uLocal_4577 = 0;
	var uLocal_4578 = 0;
	var uLocal_4579 = 0;
	var uLocal_4580 = 0;
	var uLocal_4581 = 0;
	var uLocal_4582 = 0;
	var uLocal_4583 = 0;
	var uLocal_4584 = 9;
	var uLocal_4585 = 0;
	var uLocal_4586 = 0;
	var uLocal_4587 = 0;
	var uLocal_4588 = 0;
	var uLocal_4589 = 0;
	var uLocal_4590 = 0;
	var uLocal_4591 = 0;
	var uLocal_4592 = 0;
	var uLocal_4593 = 0;
	var uLocal_4594 = 9;
	var uLocal_4595 = 0;
	var uLocal_4596 = 0;
	var uLocal_4597 = 0;
	var uLocal_4598 = 0;
	var uLocal_4599 = 0;
	var uLocal_4600 = 0;
	var uLocal_4601 = 0;
	var uLocal_4602 = 0;
	var uLocal_4603 = 0;
	var uLocal_4604 = 0;
	var uLocal_4605 = 0;
	var uLocal_4606 = 0;
	var uLocal_4607 = 0;
	var uLocal_4608 = 0;
	var uLocal_4609 = 0;
	var uLocal_4610 = 0;
	var uLocal_4611 = 0;
	var uLocal_4612 = 0;
	var uLocal_4613 = 0;
	var uLocal_4614 = 0;
	var uLocal_4615 = 0;
	var uLocal_4616 = 0;
	var uLocal_4617 = 0;
	var uLocal_4618 = 0;
	var uLocal_4619 = 0;
	var uLocal_4620 = 0;
	var uLocal_4621 = 0;
	var uLocal_4622 = 0;
	var uLocal_4623 = 0;
	var uLocal_4624 = 0;
	var uLocal_4625 = 0;
	var uLocal_4626 = 0;
	var uLocal_4627 = 12;
	var uLocal_4628 = 0;
	var uLocal_4629 = 0;
	var uLocal_4630 = 0;
	var uLocal_4631 = 0;
	var uLocal_4632 = 0;
	var uLocal_4633 = 0;
	var uLocal_4634 = 0;
	var uLocal_4635 = 0;
	var uLocal_4636 = 0;
	var uLocal_4637 = 0;
	var uLocal_4638 = 0;
	var uLocal_4639 = 0;
	var uLocal_4640 = 12;
	var uLocal_4641 = 0;
	var uLocal_4642 = 0;
	var uLocal_4643 = 0;
	var uLocal_4644 = 0;
	var uLocal_4645 = 0;
	var uLocal_4646 = 0;
	var uLocal_4647 = 0;
	var uLocal_4648 = 0;
	var uLocal_4649 = 0;
	var uLocal_4650 = 0;
	var uLocal_4651 = 0;
	var uLocal_4652 = 0;
	var uLocal_4653 = 12;
	var uLocal_4654 = 0;
	var uLocal_4655 = 0;
	var uLocal_4656 = 0;
	var uLocal_4657 = 0;
	var uLocal_4658 = 0;
	var uLocal_4659 = 0;
	var uLocal_4660 = 0;
	var uLocal_4661 = 0;
	var uLocal_4662 = 0;
	var uLocal_4663 = 0;
	var uLocal_4664 = 0;
	var uLocal_4665 = 0;
	var uLocal_4666 = 9;
	var uLocal_4667 = 0;
	var uLocal_4668 = 0;
	var uLocal_4669 = 0;
	var uLocal_4670 = 0;
	var uLocal_4671 = 0;
	var uLocal_4672 = 0;
	var uLocal_4673 = 0;
	var uLocal_4674 = 0;
	var uLocal_4675 = 0;
	var uLocal_4676 = 9;
	var uLocal_4677 = 0;
	var uLocal_4678 = 0;
	var uLocal_4679 = 0;
	var uLocal_4680 = 0;
	var uLocal_4681 = 0;
	var uLocal_4682 = 0;
	var uLocal_4683 = 0;
	var uLocal_4684 = 0;
	var uLocal_4685 = 0;
	var uLocal_4686 = 0;
	var uLocal_4687 = 0;
	var uLocal_4688 = 0;
	var uLocal_4689 = 0;
	var uLocal_4690 = 0;
	var uLocal_4691 = 0;
	var uLocal_4692 = 0;
	var uLocal_4693 = 0;
	var uLocal_4694 = 0;
	var uLocal_4695 = 0;
	var uLocal_4696 = 0;
	var uLocal_4697 = 0;
	var uLocal_4698 = 0;
	var uLocal_4699 = 0;
	var uLocal_4700 = 0;
	var uLocal_4701 = 0;
	var uLocal_4702 = 0;
	var uLocal_4703 = 0;
	var uLocal_4704 = 0;
	var uLocal_4705 = 0;
	var uLocal_4706 = 0;
	var uLocal_4707 = 0;
	var uLocal_4708 = 0;
	var uLocal_4709 = 12;
	var uLocal_4710 = 0;
	var uLocal_4711 = 0;
	var uLocal_4712 = 0;
	var uLocal_4713 = 0;
	var uLocal_4714 = 0;
	var uLocal_4715 = 0;
	var uLocal_4716 = 0;
	var uLocal_4717 = 0;
	var uLocal_4718 = 0;
	var uLocal_4719 = 0;
	var uLocal_4720 = 0;
	var uLocal_4721 = 0;
	var uLocal_4722 = 12;
	var uLocal_4723 = 0;
	var uLocal_4724 = 0;
	var uLocal_4725 = 0;
	var uLocal_4726 = 0;
	var uLocal_4727 = 0;
	var uLocal_4728 = 0;
	var uLocal_4729 = 0;
	var uLocal_4730 = 0;
	var uLocal_4731 = 0;
	var uLocal_4732 = 0;
	var uLocal_4733 = 0;
	var uLocal_4734 = 0;
	var uLocal_4735 = 12;
	var uLocal_4736 = 0;
	var uLocal_4737 = 0;
	var uLocal_4738 = 0;
	var uLocal_4739 = 0;
	var uLocal_4740 = 0;
	var uLocal_4741 = 0;
	var uLocal_4742 = 0;
	var uLocal_4743 = 0;
	var uLocal_4744 = 0;
	var uLocal_4745 = 0;
	var uLocal_4746 = 0;
	var uLocal_4747 = 0;
	var uLocal_4748 = 9;
	var uLocal_4749 = 0;
	var uLocal_4750 = 0;
	var uLocal_4751 = 0;
	var uLocal_4752 = 0;
	var uLocal_4753 = 0;
	var uLocal_4754 = 0;
	var uLocal_4755 = 0;
	var uLocal_4756 = 0;
	var uLocal_4757 = 0;
	var uLocal_4758 = 9;
	var uLocal_4759 = 0;
	var uLocal_4760 = 0;
	var uLocal_4761 = 0;
	var uLocal_4762 = 0;
	var uLocal_4763 = 0;
	var uLocal_4764 = 0;
	var uLocal_4765 = 0;
	var uLocal_4766 = 0;
	var uLocal_4767 = 0;
	var uLocal_4768 = 0;
	var uLocal_4769 = 0;
	var uLocal_4770 = 0;
	var uLocal_4771 = 0;
	var uLocal_4772 = 0;
	var uLocal_4773 = 0;
	var uLocal_4774 = 0;
	var uLocal_4775 = 0;
	var uLocal_4776 = 0;
	var uLocal_4777 = 0;
	var uLocal_4778 = 0;
	var uLocal_4779 = 0;
	var uLocal_4780 = 0;
	var uLocal_4781 = 0;
	var uLocal_4782 = 0;
	var uLocal_4783 = 0;
	var uLocal_4784 = 0;
	var uLocal_4785 = 0;
	var uLocal_4786 = 0;
	var uLocal_4787 = 0;
	var uLocal_4788 = 0;
	var uLocal_4789 = 0;
	var uLocal_4790 = 0;
	var uLocal_4791 = 12;
	var uLocal_4792 = 0;
	var uLocal_4793 = 0;
	var uLocal_4794 = 0;
	var uLocal_4795 = 0;
	var uLocal_4796 = 0;
	var uLocal_4797 = 0;
	var uLocal_4798 = 0;
	var uLocal_4799 = 0;
	var uLocal_4800 = 0;
	var uLocal_4801 = 0;
	var uLocal_4802 = 0;
	var uLocal_4803 = 0;
	var uLocal_4804 = 12;
	var uLocal_4805 = 0;
	var uLocal_4806 = 0;
	var uLocal_4807 = 0;
	var uLocal_4808 = 0;
	var uLocal_4809 = 0;
	var uLocal_4810 = 0;
	var uLocal_4811 = 0;
	var uLocal_4812 = 0;
	var uLocal_4813 = 0;
	var uLocal_4814 = 0;
	var uLocal_4815 = 0;
	var uLocal_4816 = 0;
	var uLocal_4817 = 12;
	var uLocal_4818 = 0;
	var uLocal_4819 = 0;
	var uLocal_4820 = 0;
	var uLocal_4821 = 0;
	var uLocal_4822 = 0;
	var uLocal_4823 = 0;
	var uLocal_4824 = 0;
	var uLocal_4825 = 0;
	var uLocal_4826 = 0;
	var uLocal_4827 = 0;
	var uLocal_4828 = 0;
	var uLocal_4829 = 0;
	var uLocal_4830 = 9;
	var uLocal_4831 = 0;
	var uLocal_4832 = 0;
	var uLocal_4833 = 0;
	var uLocal_4834 = 0;
	var uLocal_4835 = 0;
	var uLocal_4836 = 0;
	var uLocal_4837 = 0;
	var uLocal_4838 = 0;
	var uLocal_4839 = 0;
	var uLocal_4840 = 9;
	var uLocal_4841 = 0;
	var uLocal_4842 = 0;
	var uLocal_4843 = 0;
	var uLocal_4844 = 0;
	var uLocal_4845 = 0;
	var uLocal_4846 = 0;
	var uLocal_4847 = 0;
	var uLocal_4848 = 0;
	var uLocal_4849 = 0;
	var uLocal_4850 = 0;
	var uLocal_4851 = 0;
	var uLocal_4852 = 0;
	var uLocal_4853 = 0;
	var uLocal_4854 = 0;
	var uLocal_4855 = 0;
	var uLocal_4856 = 0;
	var uLocal_4857 = 0;
	var uLocal_4858 = 0;
	var uLocal_4859 = 0;
	var uLocal_4860 = 0;
	var uLocal_4861 = 0;
	var uLocal_4862 = 0;
	var uLocal_4863 = 0;
	var uLocal_4864 = 0;
	var uLocal_4865 = 0;
	var uLocal_4866 = 0;
	var uLocal_4867 = 0;
	var uLocal_4868 = 0;
	var uLocal_4869 = 0;
	var uLocal_4870 = 0;
	var uLocal_4871 = 0;
	var uLocal_4872 = 0;
	var uLocal_4873 = 12;
	var uLocal_4874 = 0;
	var uLocal_4875 = 0;
	var uLocal_4876 = 0;
	var uLocal_4877 = 0;
	var uLocal_4878 = 0;
	var uLocal_4879 = 0;
	var uLocal_4880 = 0;
	var uLocal_4881 = 0;
	var uLocal_4882 = 0;
	var uLocal_4883 = 0;
	var uLocal_4884 = 0;
	var uLocal_4885 = 0;
	var uLocal_4886 = 12;
	var uLocal_4887 = 0;
	var uLocal_4888 = 0;
	var uLocal_4889 = 0;
	var uLocal_4890 = 0;
	var uLocal_4891 = 0;
	var uLocal_4892 = 0;
	var uLocal_4893 = 0;
	var uLocal_4894 = 0;
	var uLocal_4895 = 0;
	var uLocal_4896 = 0;
	var uLocal_4897 = 0;
	var uLocal_4898 = 0;
	var uLocal_4899 = 12;
	var uLocal_4900 = 0;
	var uLocal_4901 = 0;
	var uLocal_4902 = 0;
	var uLocal_4903 = 0;
	var uLocal_4904 = 0;
	var uLocal_4905 = 0;
	var uLocal_4906 = 0;
	var uLocal_4907 = 0;
	var uLocal_4908 = 0;
	var uLocal_4909 = 0;
	var uLocal_4910 = 0;
	var uLocal_4911 = 0;
	var uLocal_4912 = 9;
	var uLocal_4913 = 0;
	var uLocal_4914 = 0;
	var uLocal_4915 = 0;
	var uLocal_4916 = 0;
	var uLocal_4917 = 0;
	var uLocal_4918 = 0;
	var uLocal_4919 = 0;
	var uLocal_4920 = 0;
	var uLocal_4921 = 0;
	var uLocal_4922 = 9;
	var uLocal_4923 = 0;
	var uLocal_4924 = 0;
	var uLocal_4925 = 0;
	var uLocal_4926 = 0;
	var uLocal_4927 = 0;
	var uLocal_4928 = 0;
	var uLocal_4929 = 0;
	var uLocal_4930 = 0;
	var uLocal_4931 = 0;
	var uLocal_4932 = 0;
	var uLocal_4933 = 0;
	var uLocal_4934 = 0;
	var uLocal_4935 = 0;
	var uLocal_4936 = 0;
	var uLocal_4937 = 0;
	var uLocal_4938 = 0;
	var uLocal_4939 = 0;
	var uLocal_4940 = 0;
	var uLocal_4941 = 0;
	var uLocal_4942 = 0;
	var uLocal_4943 = 0;
	var uLocal_4944 = 0;
	var uLocal_4945 = 0;
	var uLocal_4946 = 0;
	var uLocal_4947 = 0;
	var uLocal_4948 = 0;
	var uLocal_4949 = 0;
	var uLocal_4950 = 0;
	var uLocal_4951 = 0;
	var uLocal_4952 = 0;
	var uLocal_4953 = 0;
	var uLocal_4954 = 0;
	var uLocal_4955 = 12;
	var uLocal_4956 = 0;
	var uLocal_4957 = 0;
	var uLocal_4958 = 0;
	var uLocal_4959 = 0;
	var uLocal_4960 = 0;
	var uLocal_4961 = 0;
	var uLocal_4962 = 0;
	var uLocal_4963 = 0;
	var uLocal_4964 = 0;
	var uLocal_4965 = 0;
	var uLocal_4966 = 0;
	var uLocal_4967 = 0;
	var uLocal_4968 = 12;
	var uLocal_4969 = 0;
	var uLocal_4970 = 0;
	var uLocal_4971 = 0;
	var uLocal_4972 = 0;
	var uLocal_4973 = 0;
	var uLocal_4974 = 0;
	var uLocal_4975 = 0;
	var uLocal_4976 = 0;
	var uLocal_4977 = 0;
	var uLocal_4978 = 0;
	var uLocal_4979 = 0;
	var uLocal_4980 = 0;
	var uLocal_4981 = 12;
	var uLocal_4982 = 0;
	var uLocal_4983 = 0;
	var uLocal_4984 = 0;
	var uLocal_4985 = 0;
	var uLocal_4986 = 0;
	var uLocal_4987 = 0;
	var uLocal_4988 = 0;
	var uLocal_4989 = 0;
	var uLocal_4990 = 0;
	var uLocal_4991 = 0;
	var uLocal_4992 = 0;
	var uLocal_4993 = 0;
	var uLocal_4994 = 9;
	var uLocal_4995 = 0;
	var uLocal_4996 = 0;
	var uLocal_4997 = 0;
	var uLocal_4998 = 0;
	var uLocal_4999 = 0;
	var uLocal_5000 = 0;
	var uLocal_5001 = 0;
	var uLocal_5002 = 0;
	var uLocal_5003 = 0;
	var uLocal_5004 = 9;
	var uLocal_5005 = 0;
	var uLocal_5006 = 0;
	var uLocal_5007 = 0;
	var uLocal_5008 = 0;
	var uLocal_5009 = 0;
	var uLocal_5010 = 0;
	var uLocal_5011 = 0;
	var uLocal_5012 = 0;
	var uLocal_5013 = 0;
	var uLocal_5014 = 0;
	var uLocal_5015 = 0;
	var uLocal_5016 = 0;
	var uLocal_5017 = 0;
	var uLocal_5018 = 0;
	var uLocal_5019 = 0;
	var uLocal_5020 = 0;
	var uLocal_5021 = 0;
	var uLocal_5022 = 0;
	var uLocal_5023 = 0;
	var uLocal_5024 = 0;
	var uLocal_5025 = 0;
	var uLocal_5026 = 0;
	var uLocal_5027 = 0;
	var uLocal_5028 = 0;
	var uLocal_5029 = 0;
	var uLocal_5030 = 0;
	var uLocal_5031 = 0;
	var uLocal_5032 = 0;
	var uLocal_5033 = 0;
	var uLocal_5034 = 0;
	var uLocal_5035 = 0;
	var uLocal_5036 = 0;
	var uLocal_5037 = 12;
	var uLocal_5038 = 0;
	var uLocal_5039 = 0;
	var uLocal_5040 = 0;
	var uLocal_5041 = 0;
	var uLocal_5042 = 0;
	var uLocal_5043 = 0;
	var uLocal_5044 = 0;
	var uLocal_5045 = 0;
	var uLocal_5046 = 0;
	var uLocal_5047 = 0;
	var uLocal_5048 = 0;
	var uLocal_5049 = 0;
	var uLocal_5050 = 12;
	var uLocal_5051 = 0;
	var uLocal_5052 = 0;
	var uLocal_5053 = 0;
	var uLocal_5054 = 0;
	var uLocal_5055 = 0;
	var uLocal_5056 = 0;
	var uLocal_5057 = 0;
	var uLocal_5058 = 0;
	var uLocal_5059 = 0;
	var uLocal_5060 = 0;
	var uLocal_5061 = 0;
	var uLocal_5062 = 0;
	var uLocal_5063 = 12;
	var uLocal_5064 = 0;
	var uLocal_5065 = 0;
	var uLocal_5066 = 0;
	var uLocal_5067 = 0;
	var uLocal_5068 = 0;
	var uLocal_5069 = 0;
	var uLocal_5070 = 0;
	var uLocal_5071 = 0;
	var uLocal_5072 = 0;
	var uLocal_5073 = 0;
	var uLocal_5074 = 0;
	var uLocal_5075 = 0;
	var uLocal_5076 = 9;
	var uLocal_5077 = 0;
	var uLocal_5078 = 0;
	var uLocal_5079 = 0;
	var uLocal_5080 = 0;
	var uLocal_5081 = 0;
	var uLocal_5082 = 0;
	var uLocal_5083 = 0;
	var uLocal_5084 = 0;
	var uLocal_5085 = 0;
	var uLocal_5086 = 9;
	var uLocal_5087 = 0;
	var uLocal_5088 = 0;
	var uLocal_5089 = 0;
	var uLocal_5090 = 0;
	var uLocal_5091 = 0;
	var uLocal_5092 = 0;
	var uLocal_5093 = 0;
	var uLocal_5094 = 0;
	var uLocal_5095 = 0;
	var uLocal_5096 = 0;
	var uLocal_5097 = 0;
	var uLocal_5098 = 0;
	var uLocal_5099 = 0;
	var uLocal_5100 = 0;
	var uLocal_5101 = 0;
	var uLocal_5102 = 0;
	var uLocal_5103 = 0;
	var uLocal_5104 = 0;
	var uLocal_5105 = 0;
	var uLocal_5106 = 0;
	var uLocal_5107 = 0;
	var uLocal_5108 = 0;
	var uLocal_5109 = 0;
	var uLocal_5110 = 0;
	var uLocal_5111 = 0;
	var uLocal_5112 = 0;
	var uLocal_5113 = 0;
	var uLocal_5114 = 0;
	var uLocal_5115 = 0;
	var uLocal_5116 = 0;
	var uLocal_5117 = 0;
	var uLocal_5118 = 0;
	var uLocal_5119 = 12;
	var uLocal_5120 = 0;
	var uLocal_5121 = 0;
	var uLocal_5122 = 0;
	var uLocal_5123 = 0;
	var uLocal_5124 = 0;
	var uLocal_5125 = 0;
	var uLocal_5126 = 0;
	var uLocal_5127 = 0;
	var uLocal_5128 = 0;
	var uLocal_5129 = 0;
	var uLocal_5130 = 0;
	var uLocal_5131 = 0;
	var uLocal_5132 = 12;
	var uLocal_5133 = 0;
	var uLocal_5134 = 0;
	var uLocal_5135 = 0;
	var uLocal_5136 = 0;
	var uLocal_5137 = 0;
	var uLocal_5138 = 0;
	var uLocal_5139 = 0;
	var uLocal_5140 = 0;
	var uLocal_5141 = 0;
	var uLocal_5142 = 0;
	var uLocal_5143 = 0;
	var uLocal_5144 = 0;
	var uLocal_5145 = 12;
	var uLocal_5146 = 0;
	var uLocal_5147 = 0;
	var uLocal_5148 = 0;
	var uLocal_5149 = 0;
	var uLocal_5150 = 0;
	var uLocal_5151 = 0;
	var uLocal_5152 = 0;
	var uLocal_5153 = 0;
	var uLocal_5154 = 0;
	var uLocal_5155 = 0;
	var uLocal_5156 = 0;
	var uLocal_5157 = 0;
	var uLocal_5158 = 9;
	var uLocal_5159 = 0;
	var uLocal_5160 = 0;
	var uLocal_5161 = 0;
	var uLocal_5162 = 0;
	var uLocal_5163 = 0;
	var uLocal_5164 = 0;
	var uLocal_5165 = 0;
	var uLocal_5166 = 0;
	var uLocal_5167 = 0;
	var uLocal_5168 = 9;
	var uLocal_5169 = 0;
	var uLocal_5170 = 0;
	var uLocal_5171 = 0;
	var uLocal_5172 = 0;
	var uLocal_5173 = 0;
	var uLocal_5174 = 0;
	var uLocal_5175 = 0;
	var uLocal_5176 = 0;
	var uLocal_5177 = 0;
	var uLocal_5178 = 0;
	var uLocal_5179 = 0;
	var uLocal_5180 = 0;
	var uLocal_5181 = 0;
	var uLocal_5182 = 0;
	var uLocal_5183 = 0;
	var uLocal_5184 = 0;
	var uLocal_5185 = 0;
	var uLocal_5186 = 0;
	var uLocal_5187 = 0;
	var uLocal_5188 = 0;
	var uLocal_5189 = 0;
	var uLocal_5190 = 0;
	var uLocal_5191 = 0;
	var uLocal_5192 = 0;
	var uLocal_5193 = 0;
	var uLocal_5194 = 0;
	var uLocal_5195 = 0;
	var uLocal_5196 = 0;
	var uLocal_5197 = 0;
	var uLocal_5198 = 0;
	var uLocal_5199 = 0;
	var uLocal_5200 = 0;
	var uLocal_5201 = 12;
	var uLocal_5202 = 0;
	var uLocal_5203 = 0;
	var uLocal_5204 = 0;
	var uLocal_5205 = 0;
	var uLocal_5206 = 0;
	var uLocal_5207 = 0;
	var uLocal_5208 = 0;
	var uLocal_5209 = 0;
	var uLocal_5210 = 0;
	var uLocal_5211 = 0;
	var uLocal_5212 = 0;
	var uLocal_5213 = 0;
	var uLocal_5214 = 12;
	var uLocal_5215 = 0;
	var uLocal_5216 = 0;
	var uLocal_5217 = 0;
	var uLocal_5218 = 0;
	var uLocal_5219 = 0;
	var uLocal_5220 = 0;
	var uLocal_5221 = 0;
	var uLocal_5222 = 0;
	var uLocal_5223 = 0;
	var uLocal_5224 = 0;
	var uLocal_5225 = 0;
	var uLocal_5226 = 0;
	var uLocal_5227 = 12;
	var uLocal_5228 = 0;
	var uLocal_5229 = 0;
	var uLocal_5230 = 0;
	var uLocal_5231 = 0;
	var uLocal_5232 = 0;
	var uLocal_5233 = 0;
	var uLocal_5234 = 0;
	var uLocal_5235 = 0;
	var uLocal_5236 = 0;
	var uLocal_5237 = 0;
	var uLocal_5238 = 0;
	var uLocal_5239 = 0;
	var uLocal_5240 = 9;
	var uLocal_5241 = 0;
	var uLocal_5242 = 0;
	var uLocal_5243 = 0;
	var uLocal_5244 = 0;
	var uLocal_5245 = 0;
	var uLocal_5246 = 0;
	var uLocal_5247 = 0;
	var uLocal_5248 = 0;
	var uLocal_5249 = 0;
	var uLocal_5250 = 9;
	var uLocal_5251 = 0;
	var uLocal_5252 = 0;
	var uLocal_5253 = 0;
	var uLocal_5254 = 0;
	var uLocal_5255 = 0;
	var uLocal_5256 = 0;
	var uLocal_5257 = 0;
	var uLocal_5258 = 0;
	var uLocal_5259 = 0;
	var uLocal_5260 = 0;
	var uLocal_5261 = 0;
	var uLocal_5262 = 0;
	var uLocal_5263 = 0;
	var uLocal_5264 = 0;
	var uLocal_5265 = 0;
	var uLocal_5266 = 0;
	var uLocal_5267 = 0;
	var uLocal_5268 = 0;
	var uLocal_5269 = 0;
	var uLocal_5270 = 0;
	var uLocal_5271 = 0;
	var uLocal_5272 = 0;
	var uLocal_5273 = 0;
	var uLocal_5274 = 0;
	var uLocal_5275 = 0;
	var uLocal_5276 = 0;
	var uLocal_5277 = 0;
	var uLocal_5278 = 0;
	var uLocal_5279 = 0;
	var uLocal_5280 = 0;
	var uLocal_5281 = 0;
	var uLocal_5282 = 0;
	var uLocal_5283 = 12;
	var uLocal_5284 = 0;
	var uLocal_5285 = 0;
	var uLocal_5286 = 0;
	var uLocal_5287 = 0;
	var uLocal_5288 = 0;
	var uLocal_5289 = 0;
	var uLocal_5290 = 0;
	var uLocal_5291 = 0;
	var uLocal_5292 = 0;
	var uLocal_5293 = 0;
	var uLocal_5294 = 0;
	var uLocal_5295 = 0;
	var uLocal_5296 = 12;
	var uLocal_5297 = 0;
	var uLocal_5298 = 0;
	var uLocal_5299 = 0;
	var uLocal_5300 = 0;
	var uLocal_5301 = 0;
	var uLocal_5302 = 0;
	var uLocal_5303 = 0;
	var uLocal_5304 = 0;
	var uLocal_5305 = 0;
	var uLocal_5306 = 0;
	var uLocal_5307 = 0;
	var uLocal_5308 = 0;
	var uLocal_5309 = 12;
	var uLocal_5310 = 0;
	var uLocal_5311 = 0;
	var uLocal_5312 = 0;
	var uLocal_5313 = 0;
	var uLocal_5314 = 0;
	var uLocal_5315 = 0;
	var uLocal_5316 = 0;
	var uLocal_5317 = 0;
	var uLocal_5318 = 0;
	var uLocal_5319 = 0;
	var uLocal_5320 = 0;
	var uLocal_5321 = 0;
	var uLocal_5322 = 9;
	var uLocal_5323 = 0;
	var uLocal_5324 = 0;
	var uLocal_5325 = 0;
	var uLocal_5326 = 0;
	var uLocal_5327 = 0;
	var uLocal_5328 = 0;
	var uLocal_5329 = 0;
	var uLocal_5330 = 0;
	var uLocal_5331 = 0;
	var uLocal_5332 = 9;
	var uLocal_5333 = 0;
	var uLocal_5334 = 0;
	var uLocal_5335 = 0;
	var uLocal_5336 = 0;
	var uLocal_5337 = 0;
	var uLocal_5338 = 0;
	var uLocal_5339 = 0;
	var uLocal_5340 = 0;
	var uLocal_5341 = 0;
	var uLocal_5342 = 0;
	var uLocal_5343 = 0;
	var uLocal_5344 = 0;
	var uLocal_5345 = 0;
	var uLocal_5346 = 0;
	var uLocal_5347 = 0;
	var uLocal_5348 = 0;
	var uLocal_5349 = 0;
	var uLocal_5350 = 0;
	var uLocal_5351 = 0;
	var uLocal_5352 = 0;
	var uLocal_5353 = 0;
	var uLocal_5354 = 0;
	var uLocal_5355 = 0;
	var uLocal_5356 = 0;
	var uLocal_5357 = 0;
	var uLocal_5358 = 0;
	var uLocal_5359 = 0;
	var uLocal_5360 = 0;
	var uLocal_5361 = 0;
	var uLocal_5362 = 0;
	var uLocal_5363 = 0;
	var uLocal_5364 = 0;
	var uLocal_5365 = 12;
	var uLocal_5366 = 0;
	var uLocal_5367 = 0;
	var uLocal_5368 = 0;
	var uLocal_5369 = 0;
	var uLocal_5370 = 0;
	var uLocal_5371 = 0;
	var uLocal_5372 = 0;
	var uLocal_5373 = 0;
	var uLocal_5374 = 0;
	var uLocal_5375 = 0;
	var uLocal_5376 = 0;
	var uLocal_5377 = 0;
	var uLocal_5378 = 12;
	var uLocal_5379 = 0;
	var uLocal_5380 = 0;
	var uLocal_5381 = 0;
	var uLocal_5382 = 0;
	var uLocal_5383 = 0;
	var uLocal_5384 = 0;
	var uLocal_5385 = 0;
	var uLocal_5386 = 0;
	var uLocal_5387 = 0;
	var uLocal_5388 = 0;
	var uLocal_5389 = 0;
	var uLocal_5390 = 0;
	var uLocal_5391 = 12;
	var uLocal_5392 = 0;
	var uLocal_5393 = 0;
	var uLocal_5394 = 0;
	var uLocal_5395 = 0;
	var uLocal_5396 = 0;
	var uLocal_5397 = 0;
	var uLocal_5398 = 0;
	var uLocal_5399 = 0;
	var uLocal_5400 = 0;
	var uLocal_5401 = 0;
	var uLocal_5402 = 0;
	var uLocal_5403 = 0;
	var uLocal_5404 = 9;
	var uLocal_5405 = 0;
	var uLocal_5406 = 0;
	var uLocal_5407 = 0;
	var uLocal_5408 = 0;
	var uLocal_5409 = 0;
	var uLocal_5410 = 0;
	var uLocal_5411 = 0;
	var uLocal_5412 = 0;
	var uLocal_5413 = 0;
	var uLocal_5414 = 9;
	var uLocal_5415 = 0;
	var uLocal_5416 = 0;
	var uLocal_5417 = 0;
	var uLocal_5418 = 0;
	var uLocal_5419 = 0;
	var uLocal_5420 = 0;
	var uLocal_5421 = 0;
	var uLocal_5422 = 0;
	var uLocal_5423 = 0;
	var uLocal_5424 = 0;
	var uLocal_5425 = 0;
	var uLocal_5426 = 0;
	var uLocal_5427 = 0;
	var uLocal_5428 = 0;
	var uLocal_5429 = 0;
	int iLocal_5430 = 0;
	int iLocal_5431 = 0;
	int iLocal_5432 = 0;
	int iLocal_5433 = 0;
	int iLocal_5434 = 0;
	int iLocal_5435 = 0;
	int iLocal_5436 = 0;
	int iLocal_5437 = 0;
	int iLocal_5438 = 0;
	bool bLocal_5439 = 0;
	int iLocal_5440 = 0;
	bool bLocal_5441 = 0;
	int iLocal_5442 = 0;
	var uLocal_5443 = 0;
	var uLocal_5444 = 0;
	var uLocal_5445 = 0;
	var uLocal_5446 = 0;
	var uLocal_5447 = 2;
	var uLocal_5448 = 0;
	var uLocal_5449 = 0;
	var uLocal_5450 = 2;
	var uLocal_5451 = 0;
	var uLocal_5452 = 0;
	var uLocal_5453 = 20;
	var uLocal_5454 = 0;
	var uLocal_5455 = 0;
	var uLocal_5456 = 0;
	var uLocal_5457 = -1;
	var uLocal_5458 = 0;
	var uLocal_5459 = 0;
	var uLocal_5460 = 0;
	var uLocal_5461 = 0;
	var uLocal_5462 = 0;
	var uLocal_5463 = 0;
	var uLocal_5464 = 0;
	var uLocal_5465 = 0;
	var uLocal_5466 = 0;
	var uLocal_5467 = 0;
	var uLocal_5468 = 0;
	var uLocal_5469 = 0;
	var uLocal_5470 = 0;
	var uLocal_5471 = 0;
	var uLocal_5472 = 0;
	var uLocal_5473 = 0;
	var uLocal_5474 = 0;
	var uLocal_5475 = 0;
	var uLocal_5476 = 0;
	var uLocal_5477 = 0;
	var uLocal_5478 = 0;
	var uLocal_5479 = 0;
	var uLocal_5480 = 0;
	var uLocal_5481 = 0;
	var uLocal_5482 = 0;
	var uLocal_5483 = 0;
	var uLocal_5484 = 0;
	var uLocal_5485 = 0;
	var uLocal_5486 = 0;
	var uLocal_5487 = 1065353216;
	var uLocal_5488 = 0;
	var uLocal_5489 = 0;
	var uLocal_5490 = 0;
	var uLocal_5491 = 0;
	var uLocal_5492 = 0;
	var uLocal_5493 = 0;
	var uLocal_5494 = 0;
	var uLocal_5495 = 0;
	var uLocal_5496 = 0;
	var uLocal_5497 = 0;
	var uLocal_5498 = 0;
	var uLocal_5499 = 0;
	var uLocal_5500 = 0;
	var uLocal_5501 = 0;
	var uLocal_5502 = 0;
	var uLocal_5503 = 0;
	var uLocal_5504 = 0;
	var uLocal_5505 = 0;
	var uLocal_5506 = 0;
	var uLocal_5507 = 0;
	var uLocal_5508 = 0;
	var uLocal_5509 = 0;
	var uLocal_5510 = 0;
	var uLocal_5511 = 0;
	var uLocal_5512 = 0;
	var uLocal_5513 = 0;
	var uLocal_5514 = -1;
	var uLocal_5515 = 0;
	var uLocal_5516 = 0;
	var uLocal_5517 = 0;
	var uLocal_5518 = 0;
	var uLocal_5519 = 0;
	var uLocal_5520 = 0;
	var uLocal_5521 = 0;
	var uLocal_5522 = 0;
	var uLocal_5523 = 0;
	var uLocal_5524 = 0;
	var uLocal_5525 = 0;
	var uLocal_5526 = 0;
	var uLocal_5527 = 0;
	var uLocal_5528 = 0;
	var uLocal_5529 = 0;
	var uLocal_5530 = 0;
	var uLocal_5531 = 0;
	var uLocal_5532 = 0;
	var uLocal_5533 = 0;
	var uLocal_5534 = 0;
	var uLocal_5535 = 0;
	var uLocal_5536 = 0;
	var uLocal_5537 = 0;
	var uLocal_5538 = 0;
	var uLocal_5539 = 0;
	var uLocal_5540 = 0;
	var uLocal_5541 = 0;
	var uLocal_5542 = 0;
	var uLocal_5543 = 0;
	var uLocal_5544 = 1065353216;
	var uLocal_5545 = 0;
	var uLocal_5546 = 0;
	var uLocal_5547 = 0;
	var uLocal_5548 = 0;
	var uLocal_5549 = 0;
	var uLocal_5550 = 0;
	var uLocal_5551 = 0;
	var uLocal_5552 = 0;
	var uLocal_5553 = 0;
	var uLocal_5554 = 0;
	var uLocal_5555 = 0;
	var uLocal_5556 = 0;
	var uLocal_5557 = 0;
	var uLocal_5558 = 0;
	var uLocal_5559 = 0;
	var uLocal_5560 = 0;
	var uLocal_5561 = 0;
	var uLocal_5562 = 0;
	var uLocal_5563 = 0;
	var uLocal_5564 = 0;
	var uLocal_5565 = 0;
	var uLocal_5566 = 0;
	var uLocal_5567 = 0;
	var uLocal_5568 = 0;
	var uLocal_5569 = 0;
	var uLocal_5570 = 0;
	var uLocal_5571 = -1;
	var uLocal_5572 = 0;
	var uLocal_5573 = 0;
	var uLocal_5574 = 0;
	var uLocal_5575 = 0;
	var uLocal_5576 = 0;
	var uLocal_5577 = 0;
	var uLocal_5578 = 0;
	var uLocal_5579 = 0;
	var uLocal_5580 = 0;
	var uLocal_5581 = 0;
	var uLocal_5582 = 0;
	var uLocal_5583 = 0;
	var uLocal_5584 = 0;
	var uLocal_5585 = 0;
	var uLocal_5586 = 0;
	var uLocal_5587 = 0;
	var uLocal_5588 = 0;
	var uLocal_5589 = 0;
	var uLocal_5590 = 0;
	var uLocal_5591 = 0;
	var uLocal_5592 = 0;
	var uLocal_5593 = 0;
	var uLocal_5594 = 0;
	var uLocal_5595 = 0;
	var uLocal_5596 = 0;
	var uLocal_5597 = 0;
	var uLocal_5598 = 0;
	var uLocal_5599 = 0;
	var uLocal_5600 = 0;
	var uLocal_5601 = 1065353216;
	var uLocal_5602 = 0;
	var uLocal_5603 = 0;
	var uLocal_5604 = 0;
	var uLocal_5605 = 0;
	var uLocal_5606 = 0;
	var uLocal_5607 = 0;
	var uLocal_5608 = 0;
	var uLocal_5609 = 0;
	var uLocal_5610 = 0;
	var uLocal_5611 = 0;
	var uLocal_5612 = 0;
	var uLocal_5613 = 0;
	var uLocal_5614 = 0;
	var uLocal_5615 = 0;
	var uLocal_5616 = 0;
	var uLocal_5617 = 0;
	var uLocal_5618 = 0;
	var uLocal_5619 = 0;
	var uLocal_5620 = 0;
	var uLocal_5621 = 0;
	var uLocal_5622 = 0;
	var uLocal_5623 = 0;
	var uLocal_5624 = 0;
	var uLocal_5625 = 0;
	var uLocal_5626 = 0;
	var uLocal_5627 = 0;
	var uLocal_5628 = -1;
	var uLocal_5629 = 0;
	var uLocal_5630 = 0;
	var uLocal_5631 = 0;
	var uLocal_5632 = 0;
	var uLocal_5633 = 0;
	var uLocal_5634 = 0;
	var uLocal_5635 = 0;
	var uLocal_5636 = 0;
	var uLocal_5637 = 0;
	var uLocal_5638 = 0;
	var uLocal_5639 = 0;
	var uLocal_5640 = 0;
	var uLocal_5641 = 0;
	var uLocal_5642 = 0;
	var uLocal_5643 = 0;
	var uLocal_5644 = 0;
	var uLocal_5645 = 0;
	var uLocal_5646 = 0;
	var uLocal_5647 = 0;
	var uLocal_5648 = 0;
	var uLocal_5649 = 0;
	var uLocal_5650 = 0;
	var uLocal_5651 = 0;
	var uLocal_5652 = 0;
	var uLocal_5653 = 0;
	var uLocal_5654 = 0;
	var uLocal_5655 = 0;
	var uLocal_5656 = 0;
	var uLocal_5657 = 0;
	var uLocal_5658 = 1065353216;
	var uLocal_5659 = 0;
	var uLocal_5660 = 0;
	var uLocal_5661 = 0;
	var uLocal_5662 = 0;
	var uLocal_5663 = 0;
	var uLocal_5664 = 0;
	var uLocal_5665 = 0;
	var uLocal_5666 = 0;
	var uLocal_5667 = 0;
	var uLocal_5668 = 0;
	var uLocal_5669 = 0;
	var uLocal_5670 = 0;
	var uLocal_5671 = 0;
	var uLocal_5672 = 0;
	var uLocal_5673 = 0;
	var uLocal_5674 = 0;
	var uLocal_5675 = 0;
	var uLocal_5676 = 0;
	var uLocal_5677 = 0;
	var uLocal_5678 = 0;
	var uLocal_5679 = 0;
	var uLocal_5680 = 0;
	var uLocal_5681 = 0;
	var uLocal_5682 = 0;
	var uLocal_5683 = 0;
	var uLocal_5684 = 0;
	var uLocal_5685 = -1;
	var uLocal_5686 = 0;
	var uLocal_5687 = 0;
	var uLocal_5688 = 0;
	var uLocal_5689 = 0;
	var uLocal_5690 = 0;
	var uLocal_5691 = 0;
	var uLocal_5692 = 0;
	var uLocal_5693 = 0;
	var uLocal_5694 = 0;
	var uLocal_5695 = 0;
	var uLocal_5696 = 0;
	var uLocal_5697 = 0;
	var uLocal_5698 = 0;
	var uLocal_5699 = 0;
	var uLocal_5700 = 0;
	var uLocal_5701 = 0;
	var uLocal_5702 = 0;
	var uLocal_5703 = 0;
	var uLocal_5704 = 0;
	var uLocal_5705 = 0;
	var uLocal_5706 = 0;
	var uLocal_5707 = 0;
	var uLocal_5708 = 0;
	var uLocal_5709 = 0;
	var uLocal_5710 = 0;
	var uLocal_5711 = 0;
	var uLocal_5712 = 0;
	var uLocal_5713 = 0;
	var uLocal_5714 = 0;
	var uLocal_5715 = 1065353216;
	var uLocal_5716 = 0;
	var uLocal_5717 = 0;
	var uLocal_5718 = 0;
	var uLocal_5719 = 0;
	var uLocal_5720 = 0;
	var uLocal_5721 = 0;
	var uLocal_5722 = 0;
	var uLocal_5723 = 0;
	var uLocal_5724 = 0;
	var uLocal_5725 = 0;
	var uLocal_5726 = 0;
	var uLocal_5727 = 0;
	var uLocal_5728 = 0;
	var uLocal_5729 = 0;
	var uLocal_5730 = 0;
	var uLocal_5731 = 0;
	var uLocal_5732 = 0;
	var uLocal_5733 = 0;
	var uLocal_5734 = 0;
	var uLocal_5735 = 0;
	var uLocal_5736 = 0;
	var uLocal_5737 = 0;
	var uLocal_5738 = 0;
	var uLocal_5739 = 0;
	var uLocal_5740 = 0;
	var uLocal_5741 = 0;
	var uLocal_5742 = -1;
	var uLocal_5743 = 0;
	var uLocal_5744 = 0;
	var uLocal_5745 = 0;
	var uLocal_5746 = 0;
	var uLocal_5747 = 0;
	var uLocal_5748 = 0;
	var uLocal_5749 = 0;
	var uLocal_5750 = 0;
	var uLocal_5751 = 0;
	var uLocal_5752 = 0;
	var uLocal_5753 = 0;
	var uLocal_5754 = 0;
	var uLocal_5755 = 0;
	var uLocal_5756 = 0;
	var uLocal_5757 = 0;
	var uLocal_5758 = 0;
	var uLocal_5759 = 0;
	var uLocal_5760 = 0;
	var uLocal_5761 = 0;
	var uLocal_5762 = 0;
	var uLocal_5763 = 0;
	var uLocal_5764 = 0;
	var uLocal_5765 = 0;
	var uLocal_5766 = 0;
	var uLocal_5767 = 0;
	var uLocal_5768 = 0;
	var uLocal_5769 = 0;
	var uLocal_5770 = 0;
	var uLocal_5771 = 0;
	var uLocal_5772 = 1065353216;
	var uLocal_5773 = 0;
	var uLocal_5774 = 0;
	var uLocal_5775 = 0;
	var uLocal_5776 = 0;
	var uLocal_5777 = 0;
	var uLocal_5778 = 0;
	var uLocal_5779 = 0;
	var uLocal_5780 = 0;
	var uLocal_5781 = 0;
	var uLocal_5782 = 0;
	var uLocal_5783 = 0;
	var uLocal_5784 = 0;
	var uLocal_5785 = 0;
	var uLocal_5786 = 0;
	var uLocal_5787 = 0;
	var uLocal_5788 = 0;
	var uLocal_5789 = 0;
	var uLocal_5790 = 0;
	var uLocal_5791 = 0;
	var uLocal_5792 = 0;
	var uLocal_5793 = 0;
	var uLocal_5794 = 0;
	var uLocal_5795 = 0;
	var uLocal_5796 = 0;
	var uLocal_5797 = 0;
	var uLocal_5798 = 0;
	var uLocal_5799 = -1;
	var uLocal_5800 = 0;
	var uLocal_5801 = 0;
	var uLocal_5802 = 0;
	var uLocal_5803 = 0;
	var uLocal_5804 = 0;
	var uLocal_5805 = 0;
	var uLocal_5806 = 0;
	var uLocal_5807 = 0;
	var uLocal_5808 = 0;
	var uLocal_5809 = 0;
	var uLocal_5810 = 0;
	var uLocal_5811 = 0;
	var uLocal_5812 = 0;
	var uLocal_5813 = 0;
	var uLocal_5814 = 0;
	var uLocal_5815 = 0;
	var uLocal_5816 = 0;
	var uLocal_5817 = 0;
	var uLocal_5818 = 0;
	var uLocal_5819 = 0;
	var uLocal_5820 = 0;
	var uLocal_5821 = 0;
	var uLocal_5822 = 0;
	var uLocal_5823 = 0;
	var uLocal_5824 = 0;
	var uLocal_5825 = 0;
	var uLocal_5826 = 0;
	var uLocal_5827 = 0;
	var uLocal_5828 = 0;
	var uLocal_5829 = 1065353216;
	var uLocal_5830 = 0;
	var uLocal_5831 = 0;
	var uLocal_5832 = 0;
	var uLocal_5833 = 0;
	var uLocal_5834 = 0;
	var uLocal_5835 = 0;
	var uLocal_5836 = 0;
	var uLocal_5837 = 0;
	var uLocal_5838 = 0;
	var uLocal_5839 = 0;
	var uLocal_5840 = 0;
	var uLocal_5841 = 0;
	var uLocal_5842 = 0;
	var uLocal_5843 = 0;
	var uLocal_5844 = 0;
	var uLocal_5845 = 0;
	var uLocal_5846 = 0;
	var uLocal_5847 = 0;
	var uLocal_5848 = 0;
	var uLocal_5849 = 0;
	var uLocal_5850 = 0;
	var uLocal_5851 = 0;
	var uLocal_5852 = 0;
	var uLocal_5853 = 0;
	var uLocal_5854 = 0;
	var uLocal_5855 = 0;
	var uLocal_5856 = -1;
	var uLocal_5857 = 0;
	var uLocal_5858 = 0;
	var uLocal_5859 = 0;
	var uLocal_5860 = 0;
	var uLocal_5861 = 0;
	var uLocal_5862 = 0;
	var uLocal_5863 = 0;
	var uLocal_5864 = 0;
	var uLocal_5865 = 0;
	var uLocal_5866 = 0;
	var uLocal_5867 = 0;
	var uLocal_5868 = 0;
	var uLocal_5869 = 0;
	var uLocal_5870 = 0;
	var uLocal_5871 = 0;
	var uLocal_5872 = 0;
	var uLocal_5873 = 0;
	var uLocal_5874 = 0;
	var uLocal_5875 = 0;
	var uLocal_5876 = 0;
	var uLocal_5877 = 0;
	var uLocal_5878 = 0;
	var uLocal_5879 = 0;
	var uLocal_5880 = 0;
	var uLocal_5881 = 0;
	var uLocal_5882 = 0;
	var uLocal_5883 = 0;
	var uLocal_5884 = 0;
	var uLocal_5885 = 0;
	var uLocal_5886 = 1065353216;
	var uLocal_5887 = 0;
	var uLocal_5888 = 0;
	var uLocal_5889 = 0;
	var uLocal_5890 = 0;
	var uLocal_5891 = 0;
	var uLocal_5892 = 0;
	var uLocal_5893 = 0;
	var uLocal_5894 = 0;
	var uLocal_5895 = 0;
	var uLocal_5896 = 0;
	var uLocal_5897 = 0;
	var uLocal_5898 = 0;
	var uLocal_5899 = 0;
	var uLocal_5900 = 0;
	var uLocal_5901 = 0;
	var uLocal_5902 = 0;
	var uLocal_5903 = 0;
	var uLocal_5904 = 0;
	var uLocal_5905 = 0;
	var uLocal_5906 = 0;
	var uLocal_5907 = 0;
	var uLocal_5908 = 0;
	var uLocal_5909 = 0;
	var uLocal_5910 = 0;
	var uLocal_5911 = 0;
	var uLocal_5912 = 0;
	var uLocal_5913 = -1;
	var uLocal_5914 = 0;
	var uLocal_5915 = 0;
	var uLocal_5916 = 0;
	var uLocal_5917 = 0;
	var uLocal_5918 = 0;
	var uLocal_5919 = 0;
	var uLocal_5920 = 0;
	var uLocal_5921 = 0;
	var uLocal_5922 = 0;
	var uLocal_5923 = 0;
	var uLocal_5924 = 0;
	var uLocal_5925 = 0;
	var uLocal_5926 = 0;
	var uLocal_5927 = 0;
	var uLocal_5928 = 0;
	var uLocal_5929 = 0;
	var uLocal_5930 = 0;
	var uLocal_5931 = 0;
	var uLocal_5932 = 0;
	var uLocal_5933 = 0;
	var uLocal_5934 = 0;
	var uLocal_5935 = 0;
	var uLocal_5936 = 0;
	var uLocal_5937 = 0;
	var uLocal_5938 = 0;
	var uLocal_5939 = 0;
	var uLocal_5940 = 0;
	var uLocal_5941 = 0;
	var uLocal_5942 = 0;
	var uLocal_5943 = 1065353216;
	var uLocal_5944 = 0;
	var uLocal_5945 = 0;
	var uLocal_5946 = 0;
	var uLocal_5947 = 0;
	var uLocal_5948 = 0;
	var uLocal_5949 = 0;
	var uLocal_5950 = 0;
	var uLocal_5951 = 0;
	var uLocal_5952 = 0;
	var uLocal_5953 = 0;
	var uLocal_5954 = 0;
	var uLocal_5955 = 0;
	var uLocal_5956 = 0;
	var uLocal_5957 = 0;
	var uLocal_5958 = 0;
	var uLocal_5959 = 0;
	var uLocal_5960 = 0;
	var uLocal_5961 = 0;
	var uLocal_5962 = 0;
	var uLocal_5963 = 0;
	var uLocal_5964 = 0;
	var uLocal_5965 = 0;
	var uLocal_5966 = 0;
	var uLocal_5967 = 0;
	var uLocal_5968 = 0;
	var uLocal_5969 = 0;
	var uLocal_5970 = -1;
	var uLocal_5971 = 0;
	var uLocal_5972 = 0;
	var uLocal_5973 = 0;
	var uLocal_5974 = 0;
	var uLocal_5975 = 0;
	var uLocal_5976 = 0;
	var uLocal_5977 = 0;
	var uLocal_5978 = 0;
	var uLocal_5979 = 0;
	var uLocal_5980 = 0;
	var uLocal_5981 = 0;
	var uLocal_5982 = 0;
	var uLocal_5983 = 0;
	var uLocal_5984 = 0;
	var uLocal_5985 = 0;
	var uLocal_5986 = 0;
	var uLocal_5987 = 0;
	var uLocal_5988 = 0;
	var uLocal_5989 = 0;
	var uLocal_5990 = 0;
	var uLocal_5991 = 0;
	var uLocal_5992 = 0;
	var uLocal_5993 = 0;
	var uLocal_5994 = 0;
	var uLocal_5995 = 0;
	var uLocal_5996 = 0;
	var uLocal_5997 = 0;
	var uLocal_5998 = 0;
	var uLocal_5999 = 0;
	var uLocal_6000 = 1065353216;
	var uLocal_6001 = 0;
	var uLocal_6002 = 0;
	var uLocal_6003 = 0;
	var uLocal_6004 = 0;
	var uLocal_6005 = 0;
	var uLocal_6006 = 0;
	var uLocal_6007 = 0;
	var uLocal_6008 = 0;
	var uLocal_6009 = 0;
	var uLocal_6010 = 0;
	var uLocal_6011 = 0;
	var uLocal_6012 = 0;
	var uLocal_6013 = 0;
	var uLocal_6014 = 0;
	var uLocal_6015 = 0;
	var uLocal_6016 = 0;
	var uLocal_6017 = 0;
	var uLocal_6018 = 0;
	var uLocal_6019 = 0;
	var uLocal_6020 = 0;
	var uLocal_6021 = 0;
	var uLocal_6022 = 0;
	var uLocal_6023 = 0;
	var uLocal_6024 = 0;
	var uLocal_6025 = 0;
	var uLocal_6026 = 0;
	var uLocal_6027 = -1;
	var uLocal_6028 = 0;
	var uLocal_6029 = 0;
	var uLocal_6030 = 0;
	var uLocal_6031 = 0;
	var uLocal_6032 = 0;
	var uLocal_6033 = 0;
	var uLocal_6034 = 0;
	var uLocal_6035 = 0;
	var uLocal_6036 = 0;
	var uLocal_6037 = 0;
	var uLocal_6038 = 0;
	var uLocal_6039 = 0;
	var uLocal_6040 = 0;
	var uLocal_6041 = 0;
	var uLocal_6042 = 0;
	var uLocal_6043 = 0;
	var uLocal_6044 = 0;
	var uLocal_6045 = 0;
	var uLocal_6046 = 0;
	var uLocal_6047 = 0;
	var uLocal_6048 = 0;
	var uLocal_6049 = 0;
	var uLocal_6050 = 0;
	var uLocal_6051 = 0;
	var uLocal_6052 = 0;
	var uLocal_6053 = 0;
	var uLocal_6054 = 0;
	var uLocal_6055 = 0;
	var uLocal_6056 = 0;
	var uLocal_6057 = 1065353216;
	var uLocal_6058 = 0;
	var uLocal_6059 = 0;
	var uLocal_6060 = 0;
	var uLocal_6061 = 0;
	var uLocal_6062 = 0;
	var uLocal_6063 = 0;
	var uLocal_6064 = 0;
	var uLocal_6065 = 0;
	var uLocal_6066 = 0;
	var uLocal_6067 = 0;
	var uLocal_6068 = 0;
	var uLocal_6069 = 0;
	var uLocal_6070 = 0;
	var uLocal_6071 = 0;
	var uLocal_6072 = 0;
	var uLocal_6073 = 0;
	var uLocal_6074 = 0;
	var uLocal_6075 = 0;
	var uLocal_6076 = 0;
	var uLocal_6077 = 0;
	var uLocal_6078 = 0;
	var uLocal_6079 = 0;
	var uLocal_6080 = 0;
	var uLocal_6081 = 0;
	var uLocal_6082 = 0;
	var uLocal_6083 = 0;
	var uLocal_6084 = -1;
	var uLocal_6085 = 0;
	var uLocal_6086 = 0;
	var uLocal_6087 = 0;
	var uLocal_6088 = 0;
	var uLocal_6089 = 0;
	var uLocal_6090 = 0;
	var uLocal_6091 = 0;
	var uLocal_6092 = 0;
	var uLocal_6093 = 0;
	var uLocal_6094 = 0;
	var uLocal_6095 = 0;
	var uLocal_6096 = 0;
	var uLocal_6097 = 0;
	var uLocal_6098 = 0;
	var uLocal_6099 = 0;
	var uLocal_6100 = 0;
	var uLocal_6101 = 0;
	var uLocal_6102 = 0;
	var uLocal_6103 = 0;
	var uLocal_6104 = 0;
	var uLocal_6105 = 0;
	var uLocal_6106 = 0;
	var uLocal_6107 = 0;
	var uLocal_6108 = 0;
	var uLocal_6109 = 0;
	var uLocal_6110 = 0;
	var uLocal_6111 = 0;
	var uLocal_6112 = 0;
	var uLocal_6113 = 0;
	var uLocal_6114 = 1065353216;
	var uLocal_6115 = 0;
	var uLocal_6116 = 0;
	var uLocal_6117 = 0;
	var uLocal_6118 = 0;
	var uLocal_6119 = 0;
	var uLocal_6120 = 0;
	var uLocal_6121 = 0;
	var uLocal_6122 = 0;
	var uLocal_6123 = 0;
	var uLocal_6124 = 0;
	var uLocal_6125 = 0;
	var uLocal_6126 = 0;
	var uLocal_6127 = 0;
	var uLocal_6128 = 0;
	var uLocal_6129 = 0;
	var uLocal_6130 = 0;
	var uLocal_6131 = 0;
	var uLocal_6132 = 0;
	var uLocal_6133 = 0;
	var uLocal_6134 = 0;
	var uLocal_6135 = 0;
	var uLocal_6136 = 0;
	var uLocal_6137 = 0;
	var uLocal_6138 = 0;
	var uLocal_6139 = 0;
	var uLocal_6140 = 0;
	var uLocal_6141 = -1;
	var uLocal_6142 = 0;
	var uLocal_6143 = 0;
	var uLocal_6144 = 0;
	var uLocal_6145 = 0;
	var uLocal_6146 = 0;
	var uLocal_6147 = 0;
	var uLocal_6148 = 0;
	var uLocal_6149 = 0;
	var uLocal_6150 = 0;
	var uLocal_6151 = 0;
	var uLocal_6152 = 0;
	var uLocal_6153 = 0;
	var uLocal_6154 = 0;
	var uLocal_6155 = 0;
	var uLocal_6156 = 0;
	var uLocal_6157 = 0;
	var uLocal_6158 = 0;
	var uLocal_6159 = 0;
	var uLocal_6160 = 0;
	var uLocal_6161 = 0;
	var uLocal_6162 = 0;
	var uLocal_6163 = 0;
	var uLocal_6164 = 0;
	var uLocal_6165 = 0;
	var uLocal_6166 = 0;
	var uLocal_6167 = 0;
	var uLocal_6168 = 0;
	var uLocal_6169 = 0;
	var uLocal_6170 = 0;
	var uLocal_6171 = 1065353216;
	var uLocal_6172 = 0;
	var uLocal_6173 = 0;
	var uLocal_6174 = 0;
	var uLocal_6175 = 0;
	var uLocal_6176 = 0;
	var uLocal_6177 = 0;
	var uLocal_6178 = 0;
	var uLocal_6179 = 0;
	var uLocal_6180 = 0;
	var uLocal_6181 = 0;
	var uLocal_6182 = 0;
	var uLocal_6183 = 0;
	var uLocal_6184 = 0;
	var uLocal_6185 = 0;
	var uLocal_6186 = 0;
	var uLocal_6187 = 0;
	var uLocal_6188 = 0;
	var uLocal_6189 = 0;
	var uLocal_6190 = 0;
	var uLocal_6191 = 0;
	var uLocal_6192 = 0;
	var uLocal_6193 = 0;
	var uLocal_6194 = 0;
	var uLocal_6195 = 0;
	var uLocal_6196 = 0;
	var uLocal_6197 = 0;
	var uLocal_6198 = -1;
	var uLocal_6199 = 0;
	var uLocal_6200 = 0;
	var uLocal_6201 = 0;
	var uLocal_6202 = 0;
	var uLocal_6203 = 0;
	var uLocal_6204 = 0;
	var uLocal_6205 = 0;
	var uLocal_6206 = 0;
	var uLocal_6207 = 0;
	var uLocal_6208 = 0;
	var uLocal_6209 = 0;
	var uLocal_6210 = 0;
	var uLocal_6211 = 0;
	var uLocal_6212 = 0;
	var uLocal_6213 = 0;
	var uLocal_6214 = 0;
	var uLocal_6215 = 0;
	var uLocal_6216 = 0;
	var uLocal_6217 = 0;
	var uLocal_6218 = 0;
	var uLocal_6219 = 0;
	var uLocal_6220 = 0;
	var uLocal_6221 = 0;
	var uLocal_6222 = 0;
	var uLocal_6223 = 0;
	var uLocal_6224 = 0;
	var uLocal_6225 = 0;
	var uLocal_6226 = 0;
	var uLocal_6227 = 0;
	var uLocal_6228 = 1065353216;
	var uLocal_6229 = 0;
	var uLocal_6230 = 0;
	var uLocal_6231 = 0;
	var uLocal_6232 = 0;
	var uLocal_6233 = 0;
	var uLocal_6234 = 0;
	var uLocal_6235 = 0;
	var uLocal_6236 = 0;
	var uLocal_6237 = 0;
	var uLocal_6238 = 0;
	var uLocal_6239 = 0;
	var uLocal_6240 = 0;
	var uLocal_6241 = 0;
	var uLocal_6242 = 0;
	var uLocal_6243 = 0;
	var uLocal_6244 = 0;
	var uLocal_6245 = 0;
	var uLocal_6246 = 0;
	var uLocal_6247 = 0;
	var uLocal_6248 = 0;
	var uLocal_6249 = 0;
	var uLocal_6250 = 0;
	var uLocal_6251 = 0;
	var uLocal_6252 = 0;
	var uLocal_6253 = 0;
	var uLocal_6254 = 0;
	var uLocal_6255 = -1;
	var uLocal_6256 = 0;
	var uLocal_6257 = 0;
	var uLocal_6258 = 0;
	var uLocal_6259 = 0;
	var uLocal_6260 = 0;
	var uLocal_6261 = 0;
	var uLocal_6262 = 0;
	var uLocal_6263 = 0;
	var uLocal_6264 = 0;
	var uLocal_6265 = 0;
	var uLocal_6266 = 0;
	var uLocal_6267 = 0;
	var uLocal_6268 = 0;
	var uLocal_6269 = 0;
	var uLocal_6270 = 0;
	var uLocal_6271 = 0;
	var uLocal_6272 = 0;
	var uLocal_6273 = 0;
	var uLocal_6274 = 0;
	var uLocal_6275 = 0;
	var uLocal_6276 = 0;
	var uLocal_6277 = 0;
	var uLocal_6278 = 0;
	var uLocal_6279 = 0;
	var uLocal_6280 = 0;
	var uLocal_6281 = 0;
	var uLocal_6282 = 0;
	var uLocal_6283 = 0;
	var uLocal_6284 = 0;
	var uLocal_6285 = 1065353216;
	var uLocal_6286 = 0;
	var uLocal_6287 = 0;
	var uLocal_6288 = 0;
	var uLocal_6289 = 0;
	var uLocal_6290 = 0;
	var uLocal_6291 = 0;
	var uLocal_6292 = 0;
	var uLocal_6293 = 0;
	var uLocal_6294 = 0;
	var uLocal_6295 = 0;
	var uLocal_6296 = 0;
	var uLocal_6297 = 0;
	var uLocal_6298 = 0;
	var uLocal_6299 = 0;
	var uLocal_6300 = 0;
	var uLocal_6301 = 0;
	var uLocal_6302 = 0;
	var uLocal_6303 = 0;
	var uLocal_6304 = 0;
	var uLocal_6305 = 0;
	var uLocal_6306 = 0;
	var uLocal_6307 = 0;
	var uLocal_6308 = 0;
	var uLocal_6309 = 0;
	var uLocal_6310 = 0;
	var uLocal_6311 = 0;
	var uLocal_6312 = -1;
	var uLocal_6313 = 0;
	var uLocal_6314 = 0;
	var uLocal_6315 = 0;
	var uLocal_6316 = 0;
	var uLocal_6317 = 0;
	var uLocal_6318 = 0;
	var uLocal_6319 = 0;
	var uLocal_6320 = 0;
	var uLocal_6321 = 0;
	var uLocal_6322 = 0;
	var uLocal_6323 = 0;
	var uLocal_6324 = 0;
	var uLocal_6325 = 0;
	var uLocal_6326 = 0;
	var uLocal_6327 = 0;
	var uLocal_6328 = 0;
	var uLocal_6329 = 0;
	var uLocal_6330 = 0;
	var uLocal_6331 = 0;
	var uLocal_6332 = 0;
	var uLocal_6333 = 0;
	var uLocal_6334 = 0;
	var uLocal_6335 = 0;
	var uLocal_6336 = 0;
	var uLocal_6337 = 0;
	var uLocal_6338 = 0;
	var uLocal_6339 = 0;
	var uLocal_6340 = 0;
	var uLocal_6341 = 0;
	var uLocal_6342 = 1065353216;
	var uLocal_6343 = 0;
	var uLocal_6344 = 0;
	var uLocal_6345 = 0;
	var uLocal_6346 = 0;
	var uLocal_6347 = 0;
	var uLocal_6348 = 0;
	var uLocal_6349 = 0;
	var uLocal_6350 = 0;
	var uLocal_6351 = 0;
	var uLocal_6352 = 0;
	var uLocal_6353 = 0;
	var uLocal_6354 = 0;
	var uLocal_6355 = 0;
	var uLocal_6356 = 0;
	var uLocal_6357 = 0;
	var uLocal_6358 = 0;
	var uLocal_6359 = 0;
	var uLocal_6360 = 0;
	var uLocal_6361 = 0;
	var uLocal_6362 = 0;
	var uLocal_6363 = 0;
	var uLocal_6364 = 0;
	var uLocal_6365 = 0;
	var uLocal_6366 = 0;
	var uLocal_6367 = 0;
	var uLocal_6368 = 0;
	var uLocal_6369 = -1;
	var uLocal_6370 = 0;
	var uLocal_6371 = 0;
	var uLocal_6372 = 0;
	var uLocal_6373 = 0;
	var uLocal_6374 = 0;
	var uLocal_6375 = 0;
	var uLocal_6376 = 0;
	var uLocal_6377 = 0;
	var uLocal_6378 = 0;
	var uLocal_6379 = 0;
	var uLocal_6380 = 0;
	var uLocal_6381 = 0;
	var uLocal_6382 = 0;
	var uLocal_6383 = 0;
	var uLocal_6384 = 0;
	var uLocal_6385 = 0;
	var uLocal_6386 = 0;
	var uLocal_6387 = 0;
	var uLocal_6388 = 0;
	var uLocal_6389 = 0;
	var uLocal_6390 = 0;
	var uLocal_6391 = 0;
	var uLocal_6392 = 0;
	var uLocal_6393 = 0;
	var uLocal_6394 = 0;
	var uLocal_6395 = 0;
	var uLocal_6396 = 0;
	var uLocal_6397 = 0;
	var uLocal_6398 = 0;
	var uLocal_6399 = 1065353216;
	var uLocal_6400 = 0;
	var uLocal_6401 = 0;
	var uLocal_6402 = 0;
	var uLocal_6403 = 0;
	var uLocal_6404 = 0;
	var uLocal_6405 = 0;
	var uLocal_6406 = 0;
	var uLocal_6407 = 0;
	var uLocal_6408 = 0;
	var uLocal_6409 = 0;
	var uLocal_6410 = 0;
	var uLocal_6411 = 0;
	var uLocal_6412 = 0;
	var uLocal_6413 = 0;
	var uLocal_6414 = 0;
	var uLocal_6415 = 0;
	var uLocal_6416 = 0;
	var uLocal_6417 = 0;
	var uLocal_6418 = 0;
	var uLocal_6419 = 0;
	var uLocal_6420 = 0;
	var uLocal_6421 = 0;
	var uLocal_6422 = 0;
	var uLocal_6423 = 0;
	var uLocal_6424 = 0;
	var uLocal_6425 = 0;
	var uLocal_6426 = -1;
	var uLocal_6427 = 0;
	var uLocal_6428 = 0;
	var uLocal_6429 = 0;
	var uLocal_6430 = 0;
	var uLocal_6431 = 0;
	var uLocal_6432 = 0;
	var uLocal_6433 = 0;
	var uLocal_6434 = 0;
	var uLocal_6435 = 0;
	var uLocal_6436 = 0;
	var uLocal_6437 = 0;
	var uLocal_6438 = 0;
	var uLocal_6439 = 0;
	var uLocal_6440 = 0;
	var uLocal_6441 = 0;
	var uLocal_6442 = 0;
	var uLocal_6443 = 0;
	var uLocal_6444 = 0;
	var uLocal_6445 = 0;
	var uLocal_6446 = 0;
	var uLocal_6447 = 0;
	var uLocal_6448 = 0;
	var uLocal_6449 = 0;
	var uLocal_6450 = 0;
	var uLocal_6451 = 0;
	var uLocal_6452 = 0;
	var uLocal_6453 = 0;
	var uLocal_6454 = 0;
	var uLocal_6455 = 0;
	var uLocal_6456 = 1065353216;
	var uLocal_6457 = 0;
	var uLocal_6458 = 0;
	var uLocal_6459 = 0;
	var uLocal_6460 = 0;
	var uLocal_6461 = 0;
	var uLocal_6462 = 0;
	var uLocal_6463 = 0;
	var uLocal_6464 = 0;
	var uLocal_6465 = 0;
	var uLocal_6466 = 0;
	var uLocal_6467 = 0;
	var uLocal_6468 = 0;
	var uLocal_6469 = 0;
	var uLocal_6470 = 0;
	var uLocal_6471 = 0;
	var uLocal_6472 = 0;
	var uLocal_6473 = 0;
	var uLocal_6474 = 0;
	var uLocal_6475 = 0;
	var uLocal_6476 = 0;
	var uLocal_6477 = 0;
	var uLocal_6478 = 0;
	var uLocal_6479 = 0;
	var uLocal_6480 = 0;
	var uLocal_6481 = 0;
	var uLocal_6482 = 0;
	var uLocal_6483 = -1;
	var uLocal_6484 = 0;
	var uLocal_6485 = 0;
	var uLocal_6486 = 0;
	var uLocal_6487 = 0;
	var uLocal_6488 = 0;
	var uLocal_6489 = 0;
	var uLocal_6490 = 0;
	var uLocal_6491 = 0;
	var uLocal_6492 = 0;
	var uLocal_6493 = 0;
	var uLocal_6494 = 0;
	var uLocal_6495 = 0;
	var uLocal_6496 = 0;
	var uLocal_6497 = 0;
	var uLocal_6498 = 0;
	var uLocal_6499 = 0;
	var uLocal_6500 = 0;
	var uLocal_6501 = 0;
	var uLocal_6502 = 0;
	var uLocal_6503 = 0;
	var uLocal_6504 = 0;
	var uLocal_6505 = 0;
	var uLocal_6506 = 0;
	var uLocal_6507 = 0;
	var uLocal_6508 = 0;
	var uLocal_6509 = 0;
	var uLocal_6510 = 0;
	var uLocal_6511 = 0;
	var uLocal_6512 = 0;
	var uLocal_6513 = 1065353216;
	var uLocal_6514 = 0;
	var uLocal_6515 = 0;
	var uLocal_6516 = 0;
	var uLocal_6517 = 0;
	var uLocal_6518 = 0;
	var uLocal_6519 = 0;
	var uLocal_6520 = 0;
	var uLocal_6521 = 0;
	var uLocal_6522 = 0;
	var uLocal_6523 = 0;
	var uLocal_6524 = 0;
	var uLocal_6525 = 0;
	var uLocal_6526 = 0;
	var uLocal_6527 = 0;
	var uLocal_6528 = 0;
	var uLocal_6529 = 0;
	var uLocal_6530 = 0;
	var uLocal_6531 = 0;
	var uLocal_6532 = 0;
	var uLocal_6533 = 0;
	var uLocal_6534 = 0;
	var uLocal_6535 = 0;
	var uLocal_6536 = 0;
	var uLocal_6537 = 0;
	var uLocal_6538 = 0;
	var uLocal_6539 = 0;
	var uLocal_6540 = -1;
	var uLocal_6541 = 0;
	var uLocal_6542 = 0;
	var uLocal_6543 = 0;
	var uLocal_6544 = 0;
	var uLocal_6545 = 0;
	var uLocal_6546 = 0;
	var uLocal_6547 = 0;
	var uLocal_6548 = 0;
	var uLocal_6549 = 0;
	var uLocal_6550 = 0;
	var uLocal_6551 = 0;
	var uLocal_6552 = 0;
	var uLocal_6553 = 0;
	var uLocal_6554 = 0;
	var uLocal_6555 = 0;
	var uLocal_6556 = 0;
	var uLocal_6557 = 0;
	var uLocal_6558 = 0;
	var uLocal_6559 = 0;
	var uLocal_6560 = 0;
	var uLocal_6561 = 0;
	var uLocal_6562 = 0;
	var uLocal_6563 = 0;
	var uLocal_6564 = 0;
	var uLocal_6565 = 0;
	var uLocal_6566 = 0;
	var uLocal_6567 = 0;
	var uLocal_6568 = 0;
	var uLocal_6569 = 0;
	var uLocal_6570 = 1065353216;
	var uLocal_6571 = 0;
	var uLocal_6572 = 0;
	var uLocal_6573 = 0;
	var uLocal_6574 = 0;
	var uLocal_6575 = 0;
	var uLocal_6576 = 0;
	var uLocal_6577 = 0;
	var uLocal_6578 = 0;
	var uLocal_6579 = 0;
	var uLocal_6580 = 0;
	var uLocal_6581 = 0;
	var uLocal_6582 = 0;
	var uLocal_6583 = 0;
	var uLocal_6584 = 0;
	var uLocal_6585 = 0;
	var uLocal_6586 = 0;
	var uLocal_6587 = 0;
	var uLocal_6588 = 0;
	var uLocal_6589 = 0;
	var uLocal_6590 = 0;
	var uLocal_6591 = 0;
	var uLocal_6592 = 0;
	var uLocal_6593 = 0;
	var uLocal_6594 = 16;
	var uLocal_6595 = 0;
	var uLocal_6596 = -1082130432;
	var uLocal_6597 = 0;
	var uLocal_6598 = -1082130432;
	var uLocal_6599 = 0;
	var uLocal_6600 = -1082130432;
	var uLocal_6601 = 0;
	var uLocal_6602 = -1082130432;
	var uLocal_6603 = 0;
	var uLocal_6604 = -1082130432;
	var uLocal_6605 = 0;
	var uLocal_6606 = -1082130432;
	var uLocal_6607 = 0;
	var uLocal_6608 = -1082130432;
	var uLocal_6609 = 0;
	var uLocal_6610 = -1082130432;
	var uLocal_6611 = 0;
	var uLocal_6612 = -1082130432;
	var uLocal_6613 = 0;
	var uLocal_6614 = -1082130432;
	var uLocal_6615 = 0;
	var uLocal_6616 = -1082130432;
	var uLocal_6617 = 0;
	var uLocal_6618 = -1082130432;
	var uLocal_6619 = 0;
	var uLocal_6620 = -1082130432;
	var uLocal_6621 = 0;
	var uLocal_6622 = -1082130432;
	var uLocal_6623 = 0;
	var uLocal_6624 = -1082130432;
	var uLocal_6625 = 0;
	var uLocal_6626 = -1082130432;
	var uLocal_6627 = 16;
	var uLocal_6628 = 0;
	var uLocal_6629 = -1082130432;
	var uLocal_6630 = 0;
	var uLocal_6631 = -1082130432;
	var uLocal_6632 = 0;
	var uLocal_6633 = -1082130432;
	var uLocal_6634 = 0;
	var uLocal_6635 = -1082130432;
	var uLocal_6636 = 0;
	var uLocal_6637 = -1082130432;
	var uLocal_6638 = 0;
	var uLocal_6639 = -1082130432;
	var uLocal_6640 = 0;
	var uLocal_6641 = -1082130432;
	var uLocal_6642 = 0;
	var uLocal_6643 = -1082130432;
	var uLocal_6644 = 0;
	var uLocal_6645 = -1082130432;
	var uLocal_6646 = 0;
	var uLocal_6647 = -1082130432;
	var uLocal_6648 = 0;
	var uLocal_6649 = -1082130432;
	var uLocal_6650 = 0;
	var uLocal_6651 = -1082130432;
	var uLocal_6652 = 0;
	var uLocal_6653 = -1082130432;
	var uLocal_6654 = 0;
	var uLocal_6655 = -1082130432;
	var uLocal_6656 = 0;
	var uLocal_6657 = -1082130432;
	var uLocal_6658 = 0;
	var uLocal_6659 = -1082130432;
	var uLocal_6660 = 0;
	var uLocal_6661 = 0;
	var uLocal_6662 = 0;
	var uLocal_6663 = 0;
	var uLocal_6664 = 0;
	var uLocal_6665 = 0;
	var uLocal_6666 = 0;
	var uLocal_6667 = 0;
	var uLocal_6668 = 0;
	var uLocal_6669 = 0;
	var uLocal_6670 = 0;
	var uLocal_6671 = 0;
	var uLocal_6672 = 0;
	var uLocal_6673 = 0;
	var uLocal_6674 = 0;
	var uLocal_6675 = 0;
	var uLocal_6676 = -1082130432;
	var uLocal_6677 = -1082130432;
	var uLocal_6678 = 1;
	var uLocal_6679 = 1;
	var uLocal_6680 = 1;
	var uLocal_6681 = -1;
	var uLocal_6682 = -1;
	var uLocal_6683 = -1;
	var uLocal_6684 = 0;
	var uLocal_6685 = 0;
	var uLocal_6686 = 0;
	var uLocal_6687 = 0;
	var uLocal_6688 = 2;
	var uLocal_6689 = 0;
	var uLocal_6690 = 0;
	var uLocal_6691 = 2;
	var uLocal_6692 = 0;
	var uLocal_6693 = 0;
	var uLocal_6694 = 20;
	var uLocal_6695 = 0;
	var uLocal_6696 = 0;
	var uLocal_6697 = 0;
	var uLocal_6698 = -1;
	var uLocal_6699 = 0;
	var uLocal_6700 = 0;
	var uLocal_6701 = 0;
	var uLocal_6702 = 0;
	var uLocal_6703 = 0;
	var uLocal_6704 = 0;
	var uLocal_6705 = 0;
	var uLocal_6706 = 0;
	var uLocal_6707 = 0;
	var uLocal_6708 = 0;
	var uLocal_6709 = 0;
	var uLocal_6710 = 0;
	var uLocal_6711 = 0;
	var uLocal_6712 = 0;
	var uLocal_6713 = 0;
	var uLocal_6714 = 0;
	var uLocal_6715 = 0;
	var uLocal_6716 = 0;
	var uLocal_6717 = 0;
	var uLocal_6718 = 0;
	var uLocal_6719 = 0;
	var uLocal_6720 = 0;
	var uLocal_6721 = 0;
	var uLocal_6722 = 0;
	var uLocal_6723 = 0;
	var uLocal_6724 = 0;
	var uLocal_6725 = 0;
	var uLocal_6726 = 0;
	var uLocal_6727 = 0;
	var uLocal_6728 = 1065353216;
	var uLocal_6729 = 0;
	var uLocal_6730 = 0;
	var uLocal_6731 = 0;
	var uLocal_6732 = 0;
	var uLocal_6733 = 0;
	var uLocal_6734 = 0;
	var uLocal_6735 = 0;
	var uLocal_6736 = 0;
	var uLocal_6737 = 0;
	var uLocal_6738 = 0;
	var uLocal_6739 = 0;
	var uLocal_6740 = 0;
	var uLocal_6741 = 0;
	var uLocal_6742 = 0;
	var uLocal_6743 = 0;
	var uLocal_6744 = 0;
	var uLocal_6745 = 0;
	var uLocal_6746 = 0;
	var uLocal_6747 = 0;
	var uLocal_6748 = 0;
	var uLocal_6749 = 0;
	var uLocal_6750 = 0;
	var uLocal_6751 = 0;
	var uLocal_6752 = 0;
	var uLocal_6753 = 0;
	var uLocal_6754 = 0;
	var uLocal_6755 = -1;
	var uLocal_6756 = 0;
	var uLocal_6757 = 0;
	var uLocal_6758 = 0;
	var uLocal_6759 = 0;
	var uLocal_6760 = 0;
	var uLocal_6761 = 0;
	var uLocal_6762 = 0;
	var uLocal_6763 = 0;
	var uLocal_6764 = 0;
	var uLocal_6765 = 0;
	var uLocal_6766 = 0;
	var uLocal_6767 = 0;
	var uLocal_6768 = 0;
	var uLocal_6769 = 0;
	var uLocal_6770 = 0;
	var uLocal_6771 = 0;
	var uLocal_6772 = 0;
	var uLocal_6773 = 0;
	var uLocal_6774 = 0;
	var uLocal_6775 = 0;
	var uLocal_6776 = 0;
	var uLocal_6777 = 0;
	var uLocal_6778 = 0;
	var uLocal_6779 = 0;
	var uLocal_6780 = 0;
	var uLocal_6781 = 0;
	var uLocal_6782 = 0;
	var uLocal_6783 = 0;
	var uLocal_6784 = 0;
	var uLocal_6785 = 1065353216;
	var uLocal_6786 = 0;
	var uLocal_6787 = 0;
	var uLocal_6788 = 0;
	var uLocal_6789 = 0;
	var uLocal_6790 = 0;
	var uLocal_6791 = 0;
	var uLocal_6792 = 0;
	var uLocal_6793 = 0;
	var uLocal_6794 = 0;
	var uLocal_6795 = 0;
	var uLocal_6796 = 0;
	var uLocal_6797 = 0;
	var uLocal_6798 = 0;
	var uLocal_6799 = 0;
	var uLocal_6800 = 0;
	var uLocal_6801 = 0;
	var uLocal_6802 = 0;
	var uLocal_6803 = 0;
	var uLocal_6804 = 0;
	var uLocal_6805 = 0;
	var uLocal_6806 = 0;
	var uLocal_6807 = 0;
	var uLocal_6808 = 0;
	var uLocal_6809 = 0;
	var uLocal_6810 = 0;
	var uLocal_6811 = 0;
	var uLocal_6812 = -1;
	var uLocal_6813 = 0;
	var uLocal_6814 = 0;
	var uLocal_6815 = 0;
	var uLocal_6816 = 0;
	var uLocal_6817 = 0;
	var uLocal_6818 = 0;
	var uLocal_6819 = 0;
	var uLocal_6820 = 0;
	var uLocal_6821 = 0;
	var uLocal_6822 = 0;
	var uLocal_6823 = 0;
	var uLocal_6824 = 0;
	var uLocal_6825 = 0;
	var uLocal_6826 = 0;
	var uLocal_6827 = 0;
	var uLocal_6828 = 0;
	var uLocal_6829 = 0;
	var uLocal_6830 = 0;
	var uLocal_6831 = 0;
	var uLocal_6832 = 0;
	var uLocal_6833 = 0;
	var uLocal_6834 = 0;
	var uLocal_6835 = 0;
	var uLocal_6836 = 0;
	var uLocal_6837 = 0;
	var uLocal_6838 = 0;
	var uLocal_6839 = 0;
	var uLocal_6840 = 0;
	var uLocal_6841 = 0;
	var uLocal_6842 = 1065353216;
	var uLocal_6843 = 0;
	var uLocal_6844 = 0;
	var uLocal_6845 = 0;
	var uLocal_6846 = 0;
	var uLocal_6847 = 0;
	var uLocal_6848 = 0;
	var uLocal_6849 = 0;
	var uLocal_6850 = 0;
	var uLocal_6851 = 0;
	var uLocal_6852 = 0;
	var uLocal_6853 = 0;
	var uLocal_6854 = 0;
	var uLocal_6855 = 0;
	var uLocal_6856 = 0;
	var uLocal_6857 = 0;
	var uLocal_6858 = 0;
	var uLocal_6859 = 0;
	var uLocal_6860 = 0;
	var uLocal_6861 = 0;
	var uLocal_6862 = 0;
	var uLocal_6863 = 0;
	var uLocal_6864 = 0;
	var uLocal_6865 = 0;
	var uLocal_6866 = 0;
	var uLocal_6867 = 0;
	var uLocal_6868 = 0;
	var uLocal_6869 = -1;
	var uLocal_6870 = 0;
	var uLocal_6871 = 0;
	var uLocal_6872 = 0;
	var uLocal_6873 = 0;
	var uLocal_6874 = 0;
	var uLocal_6875 = 0;
	var uLocal_6876 = 0;
	var uLocal_6877 = 0;
	var uLocal_6878 = 0;
	var uLocal_6879 = 0;
	var uLocal_6880 = 0;
	var uLocal_6881 = 0;
	var uLocal_6882 = 0;
	var uLocal_6883 = 0;
	var uLocal_6884 = 0;
	var uLocal_6885 = 0;
	var uLocal_6886 = 0;
	var uLocal_6887 = 0;
	var uLocal_6888 = 0;
	var uLocal_6889 = 0;
	var uLocal_6890 = 0;
	var uLocal_6891 = 0;
	var uLocal_6892 = 0;
	var uLocal_6893 = 0;
	var uLocal_6894 = 0;
	var uLocal_6895 = 0;
	var uLocal_6896 = 0;
	var uLocal_6897 = 0;
	var uLocal_6898 = 0;
	var uLocal_6899 = 1065353216;
	var uLocal_6900 = 0;
	var uLocal_6901 = 0;
	var uLocal_6902 = 0;
	var uLocal_6903 = 0;
	var uLocal_6904 = 0;
	var uLocal_6905 = 0;
	var uLocal_6906 = 0;
	var uLocal_6907 = 0;
	var uLocal_6908 = 0;
	var uLocal_6909 = 0;
	var uLocal_6910 = 0;
	var uLocal_6911 = 0;
	var uLocal_6912 = 0;
	var uLocal_6913 = 0;
	var uLocal_6914 = 0;
	var uLocal_6915 = 0;
	var uLocal_6916 = 0;
	var uLocal_6917 = 0;
	var uLocal_6918 = 0;
	var uLocal_6919 = 0;
	var uLocal_6920 = 0;
	var uLocal_6921 = 0;
	var uLocal_6922 = 0;
	var uLocal_6923 = 0;
	var uLocal_6924 = 0;
	var uLocal_6925 = 0;
	var uLocal_6926 = -1;
	var uLocal_6927 = 0;
	var uLocal_6928 = 0;
	var uLocal_6929 = 0;
	var uLocal_6930 = 0;
	var uLocal_6931 = 0;
	var uLocal_6932 = 0;
	var uLocal_6933 = 0;
	var uLocal_6934 = 0;
	var uLocal_6935 = 0;
	var uLocal_6936 = 0;
	var uLocal_6937 = 0;
	var uLocal_6938 = 0;
	var uLocal_6939 = 0;
	var uLocal_6940 = 0;
	var uLocal_6941 = 0;
	var uLocal_6942 = 0;
	var uLocal_6943 = 0;
	var uLocal_6944 = 0;
	var uLocal_6945 = 0;
	var uLocal_6946 = 0;
	var uLocal_6947 = 0;
	var uLocal_6948 = 0;
	var uLocal_6949 = 0;
	var uLocal_6950 = 0;
	var uLocal_6951 = 0;
	var uLocal_6952 = 0;
	var uLocal_6953 = 0;
	var uLocal_6954 = 0;
	var uLocal_6955 = 0;
	var uLocal_6956 = 1065353216;
	var uLocal_6957 = 0;
	var uLocal_6958 = 0;
	var uLocal_6959 = 0;
	var uLocal_6960 = 0;
	var uLocal_6961 = 0;
	var uLocal_6962 = 0;
	var uLocal_6963 = 0;
	var uLocal_6964 = 0;
	var uLocal_6965 = 0;
	var uLocal_6966 = 0;
	var uLocal_6967 = 0;
	var uLocal_6968 = 0;
	var uLocal_6969 = 0;
	var uLocal_6970 = 0;
	var uLocal_6971 = 0;
	var uLocal_6972 = 0;
	var uLocal_6973 = 0;
	var uLocal_6974 = 0;
	var uLocal_6975 = 0;
	var uLocal_6976 = 0;
	var uLocal_6977 = 0;
	var uLocal_6978 = 0;
	var uLocal_6979 = 0;
	var uLocal_6980 = 0;
	var uLocal_6981 = 0;
	var uLocal_6982 = 0;
	var uLocal_6983 = -1;
	var uLocal_6984 = 0;
	var uLocal_6985 = 0;
	var uLocal_6986 = 0;
	var uLocal_6987 = 0;
	var uLocal_6988 = 0;
	var uLocal_6989 = 0;
	var uLocal_6990 = 0;
	var uLocal_6991 = 0;
	var uLocal_6992 = 0;
	var uLocal_6993 = 0;
	var uLocal_6994 = 0;
	var uLocal_6995 = 0;
	var uLocal_6996 = 0;
	var uLocal_6997 = 0;
	var uLocal_6998 = 0;
	var uLocal_6999 = 0;
	var uLocal_7000 = 0;
	var uLocal_7001 = 0;
	var uLocal_7002 = 0;
	var uLocal_7003 = 0;
	var uLocal_7004 = 0;
	var uLocal_7005 = 0;
	var uLocal_7006 = 0;
	var uLocal_7007 = 0;
	var uLocal_7008 = 0;
	var uLocal_7009 = 0;
	var uLocal_7010 = 0;
	var uLocal_7011 = 0;
	var uLocal_7012 = 0;
	var uLocal_7013 = 1065353216;
	var uLocal_7014 = 0;
	var uLocal_7015 = 0;
	var uLocal_7016 = 0;
	var uLocal_7017 = 0;
	var uLocal_7018 = 0;
	var uLocal_7019 = 0;
	var uLocal_7020 = 0;
	var uLocal_7021 = 0;
	var uLocal_7022 = 0;
	var uLocal_7023 = 0;
	var uLocal_7024 = 0;
	var uLocal_7025 = 0;
	var uLocal_7026 = 0;
	var uLocal_7027 = 0;
	var uLocal_7028 = 0;
	var uLocal_7029 = 0;
	var uLocal_7030 = 0;
	var uLocal_7031 = 0;
	var uLocal_7032 = 0;
	var uLocal_7033 = 0;
	var uLocal_7034 = 0;
	var uLocal_7035 = 0;
	var uLocal_7036 = 0;
	var uLocal_7037 = 0;
	var uLocal_7038 = 0;
	var uLocal_7039 = 0;
	var uLocal_7040 = -1;
	var uLocal_7041 = 0;
	var uLocal_7042 = 0;
	var uLocal_7043 = 0;
	var uLocal_7044 = 0;
	var uLocal_7045 = 0;
	var uLocal_7046 = 0;
	var uLocal_7047 = 0;
	var uLocal_7048 = 0;
	var uLocal_7049 = 0;
	var uLocal_7050 = 0;
	var uLocal_7051 = 0;
	var uLocal_7052 = 0;
	var uLocal_7053 = 0;
	var uLocal_7054 = 0;
	var uLocal_7055 = 0;
	var uLocal_7056 = 0;
	var uLocal_7057 = 0;
	var uLocal_7058 = 0;
	var uLocal_7059 = 0;
	var uLocal_7060 = 0;
	var uLocal_7061 = 0;
	var uLocal_7062 = 0;
	var uLocal_7063 = 0;
	var uLocal_7064 = 0;
	var uLocal_7065 = 0;
	var uLocal_7066 = 0;
	var uLocal_7067 = 0;
	var uLocal_7068 = 0;
	var uLocal_7069 = 0;
	var uLocal_7070 = 1065353216;
	var uLocal_7071 = 0;
	var uLocal_7072 = 0;
	var uLocal_7073 = 0;
	var uLocal_7074 = 0;
	var uLocal_7075 = 0;
	var uLocal_7076 = 0;
	var uLocal_7077 = 0;
	var uLocal_7078 = 0;
	var uLocal_7079 = 0;
	var uLocal_7080 = 0;
	var uLocal_7081 = 0;
	var uLocal_7082 = 0;
	var uLocal_7083 = 0;
	var uLocal_7084 = 0;
	var uLocal_7085 = 0;
	var uLocal_7086 = 0;
	var uLocal_7087 = 0;
	var uLocal_7088 = 0;
	var uLocal_7089 = 0;
	var uLocal_7090 = 0;
	var uLocal_7091 = 0;
	var uLocal_7092 = 0;
	var uLocal_7093 = 0;
	var uLocal_7094 = 0;
	var uLocal_7095 = 0;
	var uLocal_7096 = 0;
	var uLocal_7097 = -1;
	var uLocal_7098 = 0;
	var uLocal_7099 = 0;
	var uLocal_7100 = 0;
	var uLocal_7101 = 0;
	var uLocal_7102 = 0;
	var uLocal_7103 = 0;
	var uLocal_7104 = 0;
	var uLocal_7105 = 0;
	var uLocal_7106 = 0;
	var uLocal_7107 = 0;
	var uLocal_7108 = 0;
	var uLocal_7109 = 0;
	var uLocal_7110 = 0;
	var uLocal_7111 = 0;
	var uLocal_7112 = 0;
	var uLocal_7113 = 0;
	var uLocal_7114 = 0;
	var uLocal_7115 = 0;
	var uLocal_7116 = 0;
	var uLocal_7117 = 0;
	var uLocal_7118 = 0;
	var uLocal_7119 = 0;
	var uLocal_7120 = 0;
	var uLocal_7121 = 0;
	var uLocal_7122 = 0;
	var uLocal_7123 = 0;
	var uLocal_7124 = 0;
	var uLocal_7125 = 0;
	var uLocal_7126 = 0;
	var uLocal_7127 = 1065353216;
	var uLocal_7128 = 0;
	var uLocal_7129 = 0;
	var uLocal_7130 = 0;
	var uLocal_7131 = 0;
	var uLocal_7132 = 0;
	var uLocal_7133 = 0;
	var uLocal_7134 = 0;
	var uLocal_7135 = 0;
	var uLocal_7136 = 0;
	var uLocal_7137 = 0;
	var uLocal_7138 = 0;
	var uLocal_7139 = 0;
	var uLocal_7140 = 0;
	var uLocal_7141 = 0;
	var uLocal_7142 = 0;
	var uLocal_7143 = 0;
	var uLocal_7144 = 0;
	var uLocal_7145 = 0;
	var uLocal_7146 = 0;
	var uLocal_7147 = 0;
	var uLocal_7148 = 0;
	var uLocal_7149 = 0;
	var uLocal_7150 = 0;
	var uLocal_7151 = 0;
	var uLocal_7152 = 0;
	var uLocal_7153 = 0;
	var uLocal_7154 = -1;
	var uLocal_7155 = 0;
	var uLocal_7156 = 0;
	var uLocal_7157 = 0;
	var uLocal_7158 = 0;
	var uLocal_7159 = 0;
	var uLocal_7160 = 0;
	var uLocal_7161 = 0;
	var uLocal_7162 = 0;
	var uLocal_7163 = 0;
	var uLocal_7164 = 0;
	var uLocal_7165 = 0;
	var uLocal_7166 = 0;
	var uLocal_7167 = 0;
	var uLocal_7168 = 0;
	var uLocal_7169 = 0;
	var uLocal_7170 = 0;
	var uLocal_7171 = 0;
	var uLocal_7172 = 0;
	var uLocal_7173 = 0;
	var uLocal_7174 = 0;
	var uLocal_7175 = 0;
	var uLocal_7176 = 0;
	var uLocal_7177 = 0;
	var uLocal_7178 = 0;
	var uLocal_7179 = 0;
	var uLocal_7180 = 0;
	var uLocal_7181 = 0;
	var uLocal_7182 = 0;
	var uLocal_7183 = 0;
	var uLocal_7184 = 1065353216;
	var uLocal_7185 = 0;
	var uLocal_7186 = 0;
	var uLocal_7187 = 0;
	var uLocal_7188 = 0;
	var uLocal_7189 = 0;
	var uLocal_7190 = 0;
	var uLocal_7191 = 0;
	var uLocal_7192 = 0;
	var uLocal_7193 = 0;
	var uLocal_7194 = 0;
	var uLocal_7195 = 0;
	var uLocal_7196 = 0;
	var uLocal_7197 = 0;
	var uLocal_7198 = 0;
	var uLocal_7199 = 0;
	var uLocal_7200 = 0;
	var uLocal_7201 = 0;
	var uLocal_7202 = 0;
	var uLocal_7203 = 0;
	var uLocal_7204 = 0;
	var uLocal_7205 = 0;
	var uLocal_7206 = 0;
	var uLocal_7207 = 0;
	var uLocal_7208 = 0;
	var uLocal_7209 = 0;
	var uLocal_7210 = 0;
	var uLocal_7211 = -1;
	var uLocal_7212 = 0;
	var uLocal_7213 = 0;
	var uLocal_7214 = 0;
	var uLocal_7215 = 0;
	var uLocal_7216 = 0;
	var uLocal_7217 = 0;
	var uLocal_7218 = 0;
	var uLocal_7219 = 0;
	var uLocal_7220 = 0;
	var uLocal_7221 = 0;
	var uLocal_7222 = 0;
	var uLocal_7223 = 0;
	var uLocal_7224 = 0;
	var uLocal_7225 = 0;
	var uLocal_7226 = 0;
	var uLocal_7227 = 0;
	var uLocal_7228 = 0;
	var uLocal_7229 = 0;
	var uLocal_7230 = 0;
	var uLocal_7231 = 0;
	var uLocal_7232 = 0;
	var uLocal_7233 = 0;
	var uLocal_7234 = 0;
	var uLocal_7235 = 0;
	var uLocal_7236 = 0;
	var uLocal_7237 = 0;
	var uLocal_7238 = 0;
	var uLocal_7239 = 0;
	var uLocal_7240 = 0;
	var uLocal_7241 = 1065353216;
	var uLocal_7242 = 0;
	var uLocal_7243 = 0;
	var uLocal_7244 = 0;
	var uLocal_7245 = 0;
	var uLocal_7246 = 0;
	var uLocal_7247 = 0;
	var uLocal_7248 = 0;
	var uLocal_7249 = 0;
	var uLocal_7250 = 0;
	var uLocal_7251 = 0;
	var uLocal_7252 = 0;
	var uLocal_7253 = 0;
	var uLocal_7254 = 0;
	var uLocal_7255 = 0;
	var uLocal_7256 = 0;
	var uLocal_7257 = 0;
	var uLocal_7258 = 0;
	var uLocal_7259 = 0;
	var uLocal_7260 = 0;
	var uLocal_7261 = 0;
	var uLocal_7262 = 0;
	var uLocal_7263 = 0;
	var uLocal_7264 = 0;
	var uLocal_7265 = 0;
	var uLocal_7266 = 0;
	var uLocal_7267 = 0;
	var uLocal_7268 = -1;
	var uLocal_7269 = 0;
	var uLocal_7270 = 0;
	var uLocal_7271 = 0;
	var uLocal_7272 = 0;
	var uLocal_7273 = 0;
	var uLocal_7274 = 0;
	var uLocal_7275 = 0;
	var uLocal_7276 = 0;
	var uLocal_7277 = 0;
	var uLocal_7278 = 0;
	var uLocal_7279 = 0;
	var uLocal_7280 = 0;
	var uLocal_7281 = 0;
	var uLocal_7282 = 0;
	var uLocal_7283 = 0;
	var uLocal_7284 = 0;
	var uLocal_7285 = 0;
	var uLocal_7286 = 0;
	var uLocal_7287 = 0;
	var uLocal_7288 = 0;
	var uLocal_7289 = 0;
	var uLocal_7290 = 0;
	var uLocal_7291 = 0;
	var uLocal_7292 = 0;
	var uLocal_7293 = 0;
	var uLocal_7294 = 0;
	var uLocal_7295 = 0;
	var uLocal_7296 = 0;
	var uLocal_7297 = 0;
	var uLocal_7298 = 1065353216;
	var uLocal_7299 = 0;
	var uLocal_7300 = 0;
	var uLocal_7301 = 0;
	var uLocal_7302 = 0;
	var uLocal_7303 = 0;
	var uLocal_7304 = 0;
	var uLocal_7305 = 0;
	var uLocal_7306 = 0;
	var uLocal_7307 = 0;
	var uLocal_7308 = 0;
	var uLocal_7309 = 0;
	var uLocal_7310 = 0;
	var uLocal_7311 = 0;
	var uLocal_7312 = 0;
	var uLocal_7313 = 0;
	var uLocal_7314 = 0;
	var uLocal_7315 = 0;
	var uLocal_7316 = 0;
	var uLocal_7317 = 0;
	var uLocal_7318 = 0;
	var uLocal_7319 = 0;
	var uLocal_7320 = 0;
	var uLocal_7321 = 0;
	var uLocal_7322 = 0;
	var uLocal_7323 = 0;
	var uLocal_7324 = 0;
	var uLocal_7325 = -1;
	var uLocal_7326 = 0;
	var uLocal_7327 = 0;
	var uLocal_7328 = 0;
	var uLocal_7329 = 0;
	var uLocal_7330 = 0;
	var uLocal_7331 = 0;
	var uLocal_7332 = 0;
	var uLocal_7333 = 0;
	var uLocal_7334 = 0;
	var uLocal_7335 = 0;
	var uLocal_7336 = 0;
	var uLocal_7337 = 0;
	var uLocal_7338 = 0;
	var uLocal_7339 = 0;
	var uLocal_7340 = 0;
	var uLocal_7341 = 0;
	var uLocal_7342 = 0;
	var uLocal_7343 = 0;
	var uLocal_7344 = 0;
	var uLocal_7345 = 0;
	var uLocal_7346 = 0;
	var uLocal_7347 = 0;
	var uLocal_7348 = 0;
	var uLocal_7349 = 0;
	var uLocal_7350 = 0;
	var uLocal_7351 = 0;
	var uLocal_7352 = 0;
	var uLocal_7353 = 0;
	var uLocal_7354 = 0;
	var uLocal_7355 = 1065353216;
	var uLocal_7356 = 0;
	var uLocal_7357 = 0;
	var uLocal_7358 = 0;
	var uLocal_7359 = 0;
	var uLocal_7360 = 0;
	var uLocal_7361 = 0;
	var uLocal_7362 = 0;
	var uLocal_7363 = 0;
	var uLocal_7364 = 0;
	var uLocal_7365 = 0;
	var uLocal_7366 = 0;
	var uLocal_7367 = 0;
	var uLocal_7368 = 0;
	var uLocal_7369 = 0;
	var uLocal_7370 = 0;
	var uLocal_7371 = 0;
	var uLocal_7372 = 0;
	var uLocal_7373 = 0;
	var uLocal_7374 = 0;
	var uLocal_7375 = 0;
	var uLocal_7376 = 0;
	var uLocal_7377 = 0;
	var uLocal_7378 = 0;
	var uLocal_7379 = 0;
	var uLocal_7380 = 0;
	var uLocal_7381 = 0;
	var uLocal_7382 = -1;
	var uLocal_7383 = 0;
	var uLocal_7384 = 0;
	var uLocal_7385 = 0;
	var uLocal_7386 = 0;
	var uLocal_7387 = 0;
	var uLocal_7388 = 0;
	var uLocal_7389 = 0;
	var uLocal_7390 = 0;
	var uLocal_7391 = 0;
	var uLocal_7392 = 0;
	var uLocal_7393 = 0;
	var uLocal_7394 = 0;
	var uLocal_7395 = 0;
	var uLocal_7396 = 0;
	var uLocal_7397 = 0;
	var uLocal_7398 = 0;
	var uLocal_7399 = 0;
	var uLocal_7400 = 0;
	var uLocal_7401 = 0;
	var uLocal_7402 = 0;
	var uLocal_7403 = 0;
	var uLocal_7404 = 0;
	var uLocal_7405 = 0;
	var uLocal_7406 = 0;
	var uLocal_7407 = 0;
	var uLocal_7408 = 0;
	var uLocal_7409 = 0;
	var uLocal_7410 = 0;
	var uLocal_7411 = 0;
	var uLocal_7412 = 1065353216;
	var uLocal_7413 = 0;
	var uLocal_7414 = 0;
	var uLocal_7415 = 0;
	var uLocal_7416 = 0;
	var uLocal_7417 = 0;
	var uLocal_7418 = 0;
	var uLocal_7419 = 0;
	var uLocal_7420 = 0;
	var uLocal_7421 = 0;
	var uLocal_7422 = 0;
	var uLocal_7423 = 0;
	var uLocal_7424 = 0;
	var uLocal_7425 = 0;
	var uLocal_7426 = 0;
	var uLocal_7427 = 0;
	var uLocal_7428 = 0;
	var uLocal_7429 = 0;
	var uLocal_7430 = 0;
	var uLocal_7431 = 0;
	var uLocal_7432 = 0;
	var uLocal_7433 = 0;
	var uLocal_7434 = 0;
	var uLocal_7435 = 0;
	var uLocal_7436 = 0;
	var uLocal_7437 = 0;
	var uLocal_7438 = 0;
	var uLocal_7439 = -1;
	var uLocal_7440 = 0;
	var uLocal_7441 = 0;
	var uLocal_7442 = 0;
	var uLocal_7443 = 0;
	var uLocal_7444 = 0;
	var uLocal_7445 = 0;
	var uLocal_7446 = 0;
	var uLocal_7447 = 0;
	var uLocal_7448 = 0;
	var uLocal_7449 = 0;
	var uLocal_7450 = 0;
	var uLocal_7451 = 0;
	var uLocal_7452 = 0;
	var uLocal_7453 = 0;
	var uLocal_7454 = 0;
	var uLocal_7455 = 0;
	var uLocal_7456 = 0;
	var uLocal_7457 = 0;
	var uLocal_7458 = 0;
	var uLocal_7459 = 0;
	var uLocal_7460 = 0;
	var uLocal_7461 = 0;
	var uLocal_7462 = 0;
	var uLocal_7463 = 0;
	var uLocal_7464 = 0;
	var uLocal_7465 = 0;
	var uLocal_7466 = 0;
	var uLocal_7467 = 0;
	var uLocal_7468 = 0;
	var uLocal_7469 = 1065353216;
	var uLocal_7470 = 0;
	var uLocal_7471 = 0;
	var uLocal_7472 = 0;
	var uLocal_7473 = 0;
	var uLocal_7474 = 0;
	var uLocal_7475 = 0;
	var uLocal_7476 = 0;
	var uLocal_7477 = 0;
	var uLocal_7478 = 0;
	var uLocal_7479 = 0;
	var uLocal_7480 = 0;
	var uLocal_7481 = 0;
	var uLocal_7482 = 0;
	var uLocal_7483 = 0;
	var uLocal_7484 = 0;
	var uLocal_7485 = 0;
	var uLocal_7486 = 0;
	var uLocal_7487 = 0;
	var uLocal_7488 = 0;
	var uLocal_7489 = 0;
	var uLocal_7490 = 0;
	var uLocal_7491 = 0;
	var uLocal_7492 = 0;
	var uLocal_7493 = 0;
	var uLocal_7494 = 0;
	var uLocal_7495 = 0;
	var uLocal_7496 = -1;
	var uLocal_7497 = 0;
	var uLocal_7498 = 0;
	var uLocal_7499 = 0;
	var uLocal_7500 = 0;
	var uLocal_7501 = 0;
	var uLocal_7502 = 0;
	var uLocal_7503 = 0;
	var uLocal_7504 = 0;
	var uLocal_7505 = 0;
	var uLocal_7506 = 0;
	var uLocal_7507 = 0;
	var uLocal_7508 = 0;
	var uLocal_7509 = 0;
	var uLocal_7510 = 0;
	var uLocal_7511 = 0;
	var uLocal_7512 = 0;
	var uLocal_7513 = 0;
	var uLocal_7514 = 0;
	var uLocal_7515 = 0;
	var uLocal_7516 = 0;
	var uLocal_7517 = 0;
	var uLocal_7518 = 0;
	var uLocal_7519 = 0;
	var uLocal_7520 = 0;
	var uLocal_7521 = 0;
	var uLocal_7522 = 0;
	var uLocal_7523 = 0;
	var uLocal_7524 = 0;
	var uLocal_7525 = 0;
	var uLocal_7526 = 1065353216;
	var uLocal_7527 = 0;
	var uLocal_7528 = 0;
	var uLocal_7529 = 0;
	var uLocal_7530 = 0;
	var uLocal_7531 = 0;
	var uLocal_7532 = 0;
	var uLocal_7533 = 0;
	var uLocal_7534 = 0;
	var uLocal_7535 = 0;
	var uLocal_7536 = 0;
	var uLocal_7537 = 0;
	var uLocal_7538 = 0;
	var uLocal_7539 = 0;
	var uLocal_7540 = 0;
	var uLocal_7541 = 0;
	var uLocal_7542 = 0;
	var uLocal_7543 = 0;
	var uLocal_7544 = 0;
	var uLocal_7545 = 0;
	var uLocal_7546 = 0;
	var uLocal_7547 = 0;
	var uLocal_7548 = 0;
	var uLocal_7549 = 0;
	var uLocal_7550 = 0;
	var uLocal_7551 = 0;
	var uLocal_7552 = 0;
	var uLocal_7553 = -1;
	var uLocal_7554 = 0;
	var uLocal_7555 = 0;
	var uLocal_7556 = 0;
	var uLocal_7557 = 0;
	var uLocal_7558 = 0;
	var uLocal_7559 = 0;
	var uLocal_7560 = 0;
	var uLocal_7561 = 0;
	var uLocal_7562 = 0;
	var uLocal_7563 = 0;
	var uLocal_7564 = 0;
	var uLocal_7565 = 0;
	var uLocal_7566 = 0;
	var uLocal_7567 = 0;
	var uLocal_7568 = 0;
	var uLocal_7569 = 0;
	var uLocal_7570 = 0;
	var uLocal_7571 = 0;
	var uLocal_7572 = 0;
	var uLocal_7573 = 0;
	var uLocal_7574 = 0;
	var uLocal_7575 = 0;
	var uLocal_7576 = 0;
	var uLocal_7577 = 0;
	var uLocal_7578 = 0;
	var uLocal_7579 = 0;
	var uLocal_7580 = 0;
	var uLocal_7581 = 0;
	var uLocal_7582 = 0;
	var uLocal_7583 = 1065353216;
	var uLocal_7584 = 0;
	var uLocal_7585 = 0;
	var uLocal_7586 = 0;
	var uLocal_7587 = 0;
	var uLocal_7588 = 0;
	var uLocal_7589 = 0;
	var uLocal_7590 = 0;
	var uLocal_7591 = 0;
	var uLocal_7592 = 0;
	var uLocal_7593 = 0;
	var uLocal_7594 = 0;
	var uLocal_7595 = 0;
	var uLocal_7596 = 0;
	var uLocal_7597 = 0;
	var uLocal_7598 = 0;
	var uLocal_7599 = 0;
	var uLocal_7600 = 0;
	var uLocal_7601 = 0;
	var uLocal_7602 = 0;
	var uLocal_7603 = 0;
	var uLocal_7604 = 0;
	var uLocal_7605 = 0;
	var uLocal_7606 = 0;
	var uLocal_7607 = 0;
	var uLocal_7608 = 0;
	var uLocal_7609 = 0;
	var uLocal_7610 = -1;
	var uLocal_7611 = 0;
	var uLocal_7612 = 0;
	var uLocal_7613 = 0;
	var uLocal_7614 = 0;
	var uLocal_7615 = 0;
	var uLocal_7616 = 0;
	var uLocal_7617 = 0;
	var uLocal_7618 = 0;
	var uLocal_7619 = 0;
	var uLocal_7620 = 0;
	var uLocal_7621 = 0;
	var uLocal_7622 = 0;
	var uLocal_7623 = 0;
	var uLocal_7624 = 0;
	var uLocal_7625 = 0;
	var uLocal_7626 = 0;
	var uLocal_7627 = 0;
	var uLocal_7628 = 0;
	var uLocal_7629 = 0;
	var uLocal_7630 = 0;
	var uLocal_7631 = 0;
	var uLocal_7632 = 0;
	var uLocal_7633 = 0;
	var uLocal_7634 = 0;
	var uLocal_7635 = 0;
	var uLocal_7636 = 0;
	var uLocal_7637 = 0;
	var uLocal_7638 = 0;
	var uLocal_7639 = 0;
	var uLocal_7640 = 1065353216;
	var uLocal_7641 = 0;
	var uLocal_7642 = 0;
	var uLocal_7643 = 0;
	var uLocal_7644 = 0;
	var uLocal_7645 = 0;
	var uLocal_7646 = 0;
	var uLocal_7647 = 0;
	var uLocal_7648 = 0;
	var uLocal_7649 = 0;
	var uLocal_7650 = 0;
	var uLocal_7651 = 0;
	var uLocal_7652 = 0;
	var uLocal_7653 = 0;
	var uLocal_7654 = 0;
	var uLocal_7655 = 0;
	var uLocal_7656 = 0;
	var uLocal_7657 = 0;
	var uLocal_7658 = 0;
	var uLocal_7659 = 0;
	var uLocal_7660 = 0;
	var uLocal_7661 = 0;
	var uLocal_7662 = 0;
	var uLocal_7663 = 0;
	var uLocal_7664 = 0;
	var uLocal_7665 = 0;
	var uLocal_7666 = 0;
	var uLocal_7667 = -1;
	var uLocal_7668 = 0;
	var uLocal_7669 = 0;
	var uLocal_7670 = 0;
	var uLocal_7671 = 0;
	var uLocal_7672 = 0;
	var uLocal_7673 = 0;
	var uLocal_7674 = 0;
	var uLocal_7675 = 0;
	var uLocal_7676 = 0;
	var uLocal_7677 = 0;
	var uLocal_7678 = 0;
	var uLocal_7679 = 0;
	var uLocal_7680 = 0;
	var uLocal_7681 = 0;
	var uLocal_7682 = 0;
	var uLocal_7683 = 0;
	var uLocal_7684 = 0;
	var uLocal_7685 = 0;
	var uLocal_7686 = 0;
	var uLocal_7687 = 0;
	var uLocal_7688 = 0;
	var uLocal_7689 = 0;
	var uLocal_7690 = 0;
	var uLocal_7691 = 0;
	var uLocal_7692 = 0;
	var uLocal_7693 = 0;
	var uLocal_7694 = 0;
	var uLocal_7695 = 0;
	var uLocal_7696 = 0;
	var uLocal_7697 = 1065353216;
	var uLocal_7698 = 0;
	var uLocal_7699 = 0;
	var uLocal_7700 = 0;
	var uLocal_7701 = 0;
	var uLocal_7702 = 0;
	var uLocal_7703 = 0;
	var uLocal_7704 = 0;
	var uLocal_7705 = 0;
	var uLocal_7706 = 0;
	var uLocal_7707 = 0;
	var uLocal_7708 = 0;
	var uLocal_7709 = 0;
	var uLocal_7710 = 0;
	var uLocal_7711 = 0;
	var uLocal_7712 = 0;
	var uLocal_7713 = 0;
	var uLocal_7714 = 0;
	var uLocal_7715 = 0;
	var uLocal_7716 = 0;
	var uLocal_7717 = 0;
	var uLocal_7718 = 0;
	var uLocal_7719 = 0;
	var uLocal_7720 = 0;
	var uLocal_7721 = 0;
	var uLocal_7722 = 0;
	var uLocal_7723 = 0;
	var uLocal_7724 = -1;
	var uLocal_7725 = 0;
	var uLocal_7726 = 0;
	var uLocal_7727 = 0;
	var uLocal_7728 = 0;
	var uLocal_7729 = 0;
	var uLocal_7730 = 0;
	var uLocal_7731 = 0;
	var uLocal_7732 = 0;
	var uLocal_7733 = 0;
	var uLocal_7734 = 0;
	var uLocal_7735 = 0;
	var uLocal_7736 = 0;
	var uLocal_7737 = 0;
	var uLocal_7738 = 0;
	var uLocal_7739 = 0;
	var uLocal_7740 = 0;
	var uLocal_7741 = 0;
	var uLocal_7742 = 0;
	var uLocal_7743 = 0;
	var uLocal_7744 = 0;
	var uLocal_7745 = 0;
	var uLocal_7746 = 0;
	var uLocal_7747 = 0;
	var uLocal_7748 = 0;
	var uLocal_7749 = 0;
	var uLocal_7750 = 0;
	var uLocal_7751 = 0;
	var uLocal_7752 = 0;
	var uLocal_7753 = 0;
	var uLocal_7754 = 1065353216;
	var uLocal_7755 = 0;
	var uLocal_7756 = 0;
	var uLocal_7757 = 0;
	var uLocal_7758 = 0;
	var uLocal_7759 = 0;
	var uLocal_7760 = 0;
	var uLocal_7761 = 0;
	var uLocal_7762 = 0;
	var uLocal_7763 = 0;
	var uLocal_7764 = 0;
	var uLocal_7765 = 0;
	var uLocal_7766 = 0;
	var uLocal_7767 = 0;
	var uLocal_7768 = 0;
	var uLocal_7769 = 0;
	var uLocal_7770 = 0;
	var uLocal_7771 = 0;
	var uLocal_7772 = 0;
	var uLocal_7773 = 0;
	var uLocal_7774 = 0;
	var uLocal_7775 = 0;
	var uLocal_7776 = 0;
	var uLocal_7777 = 0;
	var uLocal_7778 = 0;
	var uLocal_7779 = 0;
	var uLocal_7780 = 0;
	var uLocal_7781 = -1;
	var uLocal_7782 = 0;
	var uLocal_7783 = 0;
	var uLocal_7784 = 0;
	var uLocal_7785 = 0;
	var uLocal_7786 = 0;
	var uLocal_7787 = 0;
	var uLocal_7788 = 0;
	var uLocal_7789 = 0;
	var uLocal_7790 = 0;
	var uLocal_7791 = 0;
	var uLocal_7792 = 0;
	var uLocal_7793 = 0;
	var uLocal_7794 = 0;
	var uLocal_7795 = 0;
	var uLocal_7796 = 0;
	var uLocal_7797 = 0;
	var uLocal_7798 = 0;
	var uLocal_7799 = 0;
	var uLocal_7800 = 0;
	var uLocal_7801 = 0;
	var uLocal_7802 = 0;
	var uLocal_7803 = 0;
	var uLocal_7804 = 0;
	var uLocal_7805 = 0;
	var uLocal_7806 = 0;
	var uLocal_7807 = 0;
	var uLocal_7808 = 0;
	var uLocal_7809 = 0;
	var uLocal_7810 = 0;
	var uLocal_7811 = 1065353216;
	var uLocal_7812 = 0;
	var uLocal_7813 = 0;
	var uLocal_7814 = 0;
	var uLocal_7815 = 0;
	var uLocal_7816 = 0;
	var uLocal_7817 = 0;
	var uLocal_7818 = 0;
	var uLocal_7819 = 0;
	var uLocal_7820 = 0;
	var uLocal_7821 = 0;
	var uLocal_7822 = 0;
	var uLocal_7823 = 0;
	var uLocal_7824 = 0;
	var uLocal_7825 = 0;
	var uLocal_7826 = 0;
	var uLocal_7827 = 0;
	var uLocal_7828 = 0;
	var uLocal_7829 = 0;
	var uLocal_7830 = 0;
	var uLocal_7831 = 0;
	var uLocal_7832 = 0;
	var uLocal_7833 = 0;
	var uLocal_7834 = 0;
	var uLocal_7835 = 16;
	var uLocal_7836 = 0;
	var uLocal_7837 = -1082130432;
	var uLocal_7838 = 0;
	var uLocal_7839 = -1082130432;
	var uLocal_7840 = 0;
	var uLocal_7841 = -1082130432;
	var uLocal_7842 = 0;
	var uLocal_7843 = -1082130432;
	var uLocal_7844 = 0;
	var uLocal_7845 = -1082130432;
	var uLocal_7846 = 0;
	var uLocal_7847 = -1082130432;
	var uLocal_7848 = 0;
	var uLocal_7849 = -1082130432;
	var uLocal_7850 = 0;
	var uLocal_7851 = -1082130432;
	var uLocal_7852 = 0;
	var uLocal_7853 = -1082130432;
	var uLocal_7854 = 0;
	var uLocal_7855 = -1082130432;
	var uLocal_7856 = 0;
	var uLocal_7857 = -1082130432;
	var uLocal_7858 = 0;
	var uLocal_7859 = -1082130432;
	var uLocal_7860 = 0;
	var uLocal_7861 = -1082130432;
	var uLocal_7862 = 0;
	var uLocal_7863 = -1082130432;
	var uLocal_7864 = 0;
	var uLocal_7865 = -1082130432;
	var uLocal_7866 = 0;
	var uLocal_7867 = -1082130432;
	var uLocal_7868 = 16;
	var uLocal_7869 = 0;
	var uLocal_7870 = -1082130432;
	var uLocal_7871 = 0;
	var uLocal_7872 = -1082130432;
	var uLocal_7873 = 0;
	var uLocal_7874 = -1082130432;
	var uLocal_7875 = 0;
	var uLocal_7876 = -1082130432;
	var uLocal_7877 = 0;
	var uLocal_7878 = -1082130432;
	var uLocal_7879 = 0;
	var uLocal_7880 = -1082130432;
	var uLocal_7881 = 0;
	var uLocal_7882 = -1082130432;
	var uLocal_7883 = 0;
	var uLocal_7884 = -1082130432;
	var uLocal_7885 = 0;
	var uLocal_7886 = -1082130432;
	var uLocal_7887 = 0;
	var uLocal_7888 = -1082130432;
	var uLocal_7889 = 0;
	var uLocal_7890 = -1082130432;
	var uLocal_7891 = 0;
	var uLocal_7892 = -1082130432;
	var uLocal_7893 = 0;
	var uLocal_7894 = -1082130432;
	var uLocal_7895 = 0;
	var uLocal_7896 = -1082130432;
	var uLocal_7897 = 0;
	var uLocal_7898 = -1082130432;
	var uLocal_7899 = 0;
	var uLocal_7900 = -1082130432;
	var uLocal_7901 = 0;
	var uLocal_7902 = 0;
	var uLocal_7903 = 0;
	var uLocal_7904 = 0;
	var uLocal_7905 = 0;
	var uLocal_7906 = 0;
	var uLocal_7907 = 0;
	var uLocal_7908 = 0;
	var uLocal_7909 = 0;
	var uLocal_7910 = 0;
	var uLocal_7911 = 0;
	var uLocal_7912 = 0;
	var uLocal_7913 = 0;
	var uLocal_7914 = 0;
	var uLocal_7915 = 0;
	var uLocal_7916 = 0;
	var uLocal_7917 = -1082130432;
	var uLocal_7918 = -1082130432;
	var uLocal_7919 = 1;
	var uLocal_7920 = 1;
	var uLocal_7921 = 1;
	var uLocal_7922 = -1;
	var uLocal_7923 = -1;
	var uLocal_7924 = -1;
	struct<2> Local_7925 = { 0, 0 } ;
	var uLocal_7927 = 0;
	var uLocal_7928 = 0;
	var uLocal_7929 = 2;
	var uLocal_7930 = 0;
	var uLocal_7931 = 0;
	var uLocal_7932 = 2;
	var uLocal_7933 = 0;
	var uLocal_7934 = 0;
	var uLocal_7935 = 20;
	var uLocal_7936 = 0;
	var uLocal_7937 = 0;
	var uLocal_7938 = 0;
	var uLocal_7939 = -1;
	var uLocal_7940 = 0;
	var uLocal_7941 = 0;
	var uLocal_7942 = 0;
	var uLocal_7943 = 0;
	var uLocal_7944 = 0;
	var uLocal_7945 = 0;
	var uLocal_7946 = 0;
	var uLocal_7947 = 0;
	var uLocal_7948 = 0;
	var uLocal_7949 = 0;
	var uLocal_7950 = 0;
	var uLocal_7951 = 0;
	var uLocal_7952 = 0;
	var uLocal_7953 = 0;
	var uLocal_7954 = 0;
	var uLocal_7955 = 0;
	var uLocal_7956 = 0;
	var uLocal_7957 = 0;
	var uLocal_7958 = 0;
	var uLocal_7959 = 0;
	var uLocal_7960 = 0;
	var uLocal_7961 = 0;
	var uLocal_7962 = 0;
	var uLocal_7963 = 0;
	var uLocal_7964 = 0;
	var uLocal_7965 = 0;
	var uLocal_7966 = 0;
	var uLocal_7967 = 0;
	var uLocal_7968 = 0;
	var uLocal_7969 = 1065353216;
	var uLocal_7970 = 0;
	var uLocal_7971 = 0;
	var uLocal_7972 = 0;
	var uLocal_7973 = 0;
	var uLocal_7974 = 0;
	var uLocal_7975 = 0;
	var uLocal_7976 = 0;
	var uLocal_7977 = 0;
	var uLocal_7978 = 0;
	var uLocal_7979 = 0;
	var uLocal_7980 = 0;
	var uLocal_7981 = 0;
	var uLocal_7982 = 0;
	var uLocal_7983 = 0;
	var uLocal_7984 = 0;
	var uLocal_7985 = 0;
	var uLocal_7986 = 0;
	var uLocal_7987 = 0;
	var uLocal_7988 = 0;
	var uLocal_7989 = 0;
	var uLocal_7990 = 0;
	var uLocal_7991 = 0;
	var uLocal_7992 = 0;
	var uLocal_7993 = 0;
	var uLocal_7994 = 0;
	var uLocal_7995 = 0;
	var uLocal_7996 = -1;
	var uLocal_7997 = 0;
	var uLocal_7998 = 0;
	var uLocal_7999 = 0;
	var uLocal_8000 = 0;
	var uLocal_8001 = 0;
	var uLocal_8002 = 0;
	var uLocal_8003 = 0;
	var uLocal_8004 = 0;
	var uLocal_8005 = 0;
	var uLocal_8006 = 0;
	var uLocal_8007 = 0;
	var uLocal_8008 = 0;
	var uLocal_8009 = 0;
	var uLocal_8010 = 0;
	var uLocal_8011 = 0;
	var uLocal_8012 = 0;
	var uLocal_8013 = 0;
	var uLocal_8014 = 0;
	var uLocal_8015 = 0;
	var uLocal_8016 = 0;
	var uLocal_8017 = 0;
	var uLocal_8018 = 0;
	var uLocal_8019 = 0;
	var uLocal_8020 = 0;
	var uLocal_8021 = 0;
	var uLocal_8022 = 0;
	var uLocal_8023 = 0;
	var uLocal_8024 = 0;
	var uLocal_8025 = 0;
	var uLocal_8026 = 1065353216;
	var uLocal_8027 = 0;
	var uLocal_8028 = 0;
	var uLocal_8029 = 0;
	var uLocal_8030 = 0;
	var uLocal_8031 = 0;
	var uLocal_8032 = 0;
	var uLocal_8033 = 0;
	var uLocal_8034 = 0;
	var uLocal_8035 = 0;
	var uLocal_8036 = 0;
	var uLocal_8037 = 0;
	var uLocal_8038 = 0;
	var uLocal_8039 = 0;
	var uLocal_8040 = 0;
	var uLocal_8041 = 0;
	var uLocal_8042 = 0;
	var uLocal_8043 = 0;
	var uLocal_8044 = 0;
	var uLocal_8045 = 0;
	var uLocal_8046 = 0;
	var uLocal_8047 = 0;
	var uLocal_8048 = 0;
	var uLocal_8049 = 0;
	var uLocal_8050 = 0;
	var uLocal_8051 = 0;
	var uLocal_8052 = 0;
	var uLocal_8053 = -1;
	var uLocal_8054 = 0;
	var uLocal_8055 = 0;
	var uLocal_8056 = 0;
	var uLocal_8057 = 0;
	var uLocal_8058 = 0;
	var uLocal_8059 = 0;
	var uLocal_8060 = 0;
	var uLocal_8061 = 0;
	var uLocal_8062 = 0;
	var uLocal_8063 = 0;
	var uLocal_8064 = 0;
	var uLocal_8065 = 0;
	var uLocal_8066 = 0;
	var uLocal_8067 = 0;
	var uLocal_8068 = 0;
	var uLocal_8069 = 0;
	var uLocal_8070 = 0;
	var uLocal_8071 = 0;
	var uLocal_8072 = 0;
	var uLocal_8073 = 0;
	var uLocal_8074 = 0;
	var uLocal_8075 = 0;
	var uLocal_8076 = 0;
	var uLocal_8077 = 0;
	var uLocal_8078 = 0;
	var uLocal_8079 = 0;
	var uLocal_8080 = 0;
	var uLocal_8081 = 0;
	var uLocal_8082 = 0;
	var uLocal_8083 = 1065353216;
	var uLocal_8084 = 0;
	var uLocal_8085 = 0;
	var uLocal_8086 = 0;
	var uLocal_8087 = 0;
	var uLocal_8088 = 0;
	var uLocal_8089 = 0;
	var uLocal_8090 = 0;
	var uLocal_8091 = 0;
	var uLocal_8092 = 0;
	var uLocal_8093 = 0;
	var uLocal_8094 = 0;
	var uLocal_8095 = 0;
	var uLocal_8096 = 0;
	var uLocal_8097 = 0;
	var uLocal_8098 = 0;
	var uLocal_8099 = 0;
	var uLocal_8100 = 0;
	var uLocal_8101 = 0;
	var uLocal_8102 = 0;
	var uLocal_8103 = 0;
	var uLocal_8104 = 0;
	var uLocal_8105 = 0;
	var uLocal_8106 = 0;
	var uLocal_8107 = 0;
	var uLocal_8108 = 0;
	var uLocal_8109 = 0;
	var uLocal_8110 = -1;
	var uLocal_8111 = 0;
	var uLocal_8112 = 0;
	var uLocal_8113 = 0;
	var uLocal_8114 = 0;
	var uLocal_8115 = 0;
	var uLocal_8116 = 0;
	var uLocal_8117 = 0;
	var uLocal_8118 = 0;
	var uLocal_8119 = 0;
	var uLocal_8120 = 0;
	var uLocal_8121 = 0;
	var uLocal_8122 = 0;
	var uLocal_8123 = 0;
	var uLocal_8124 = 0;
	var uLocal_8125 = 0;
	var uLocal_8126 = 0;
	var uLocal_8127 = 0;
	var uLocal_8128 = 0;
	var uLocal_8129 = 0;
	var uLocal_8130 = 0;
	var uLocal_8131 = 0;
	var uLocal_8132 = 0;
	var uLocal_8133 = 0;
	var uLocal_8134 = 0;
	var uLocal_8135 = 0;
	var uLocal_8136 = 0;
	var uLocal_8137 = 0;
	var uLocal_8138 = 0;
	var uLocal_8139 = 0;
	var uLocal_8140 = 1065353216;
	var uLocal_8141 = 0;
	var uLocal_8142 = 0;
	var uLocal_8143 = 0;
	var uLocal_8144 = 0;
	var uLocal_8145 = 0;
	var uLocal_8146 = 0;
	var uLocal_8147 = 0;
	var uLocal_8148 = 0;
	var uLocal_8149 = 0;
	var uLocal_8150 = 0;
	var uLocal_8151 = 0;
	var uLocal_8152 = 0;
	var uLocal_8153 = 0;
	var uLocal_8154 = 0;
	var uLocal_8155 = 0;
	var uLocal_8156 = 0;
	var uLocal_8157 = 0;
	var uLocal_8158 = 0;
	var uLocal_8159 = 0;
	var uLocal_8160 = 0;
	var uLocal_8161 = 0;
	var uLocal_8162 = 0;
	var uLocal_8163 = 0;
	var uLocal_8164 = 0;
	var uLocal_8165 = 0;
	var uLocal_8166 = 0;
	var uLocal_8167 = -1;
	var uLocal_8168 = 0;
	var uLocal_8169 = 0;
	var uLocal_8170 = 0;
	var uLocal_8171 = 0;
	var uLocal_8172 = 0;
	var uLocal_8173 = 0;
	var uLocal_8174 = 0;
	var uLocal_8175 = 0;
	var uLocal_8176 = 0;
	var uLocal_8177 = 0;
	var uLocal_8178 = 0;
	var uLocal_8179 = 0;
	var uLocal_8180 = 0;
	var uLocal_8181 = 0;
	var uLocal_8182 = 0;
	var uLocal_8183 = 0;
	var uLocal_8184 = 0;
	var uLocal_8185 = 0;
	var uLocal_8186 = 0;
	var uLocal_8187 = 0;
	var uLocal_8188 = 0;
	var uLocal_8189 = 0;
	var uLocal_8190 = 0;
	var uLocal_8191 = 0;
	var uLocal_8192 = 0;
	var uLocal_8193 = 0;
	var uLocal_8194 = 0;
	var uLocal_8195 = 0;
	var uLocal_8196 = 0;
	var uLocal_8197 = 1065353216;
	var uLocal_8198 = 0;
	var uLocal_8199 = 0;
	var uLocal_8200 = 0;
	var uLocal_8201 = 0;
	var uLocal_8202 = 0;
	var uLocal_8203 = 0;
	var uLocal_8204 = 0;
	var uLocal_8205 = 0;
	var uLocal_8206 = 0;
	var uLocal_8207 = 0;
	var uLocal_8208 = 0;
	var uLocal_8209 = 0;
	var uLocal_8210 = 0;
	var uLocal_8211 = 0;
	var uLocal_8212 = 0;
	var uLocal_8213 = 0;
	var uLocal_8214 = 0;
	var uLocal_8215 = 0;
	var uLocal_8216 = 0;
	var uLocal_8217 = 0;
	var uLocal_8218 = 0;
	var uLocal_8219 = 0;
	var uLocal_8220 = 0;
	var uLocal_8221 = 0;
	var uLocal_8222 = 0;
	var uLocal_8223 = 0;
	var uLocal_8224 = -1;
	var uLocal_8225 = 0;
	var uLocal_8226 = 0;
	var uLocal_8227 = 0;
	var uLocal_8228 = 0;
	var uLocal_8229 = 0;
	var uLocal_8230 = 0;
	var uLocal_8231 = 0;
	var uLocal_8232 = 0;
	var uLocal_8233 = 0;
	var uLocal_8234 = 0;
	var uLocal_8235 = 0;
	var uLocal_8236 = 0;
	var uLocal_8237 = 0;
	var uLocal_8238 = 0;
	var uLocal_8239 = 0;
	var uLocal_8240 = 0;
	var uLocal_8241 = 0;
	var uLocal_8242 = 0;
	var uLocal_8243 = 0;
	var uLocal_8244 = 0;
	var uLocal_8245 = 0;
	var uLocal_8246 = 0;
	var uLocal_8247 = 0;
	var uLocal_8248 = 0;
	var uLocal_8249 = 0;
	var uLocal_8250 = 0;
	var uLocal_8251 = 0;
	var uLocal_8252 = 0;
	var uLocal_8253 = 0;
	var uLocal_8254 = 1065353216;
	var uLocal_8255 = 0;
	var uLocal_8256 = 0;
	var uLocal_8257 = 0;
	var uLocal_8258 = 0;
	var uLocal_8259 = 0;
	var uLocal_8260 = 0;
	var uLocal_8261 = 0;
	var uLocal_8262 = 0;
	var uLocal_8263 = 0;
	var uLocal_8264 = 0;
	var uLocal_8265 = 0;
	var uLocal_8266 = 0;
	var uLocal_8267 = 0;
	var uLocal_8268 = 0;
	var uLocal_8269 = 0;
	var uLocal_8270 = 0;
	var uLocal_8271 = 0;
	var uLocal_8272 = 0;
	var uLocal_8273 = 0;
	var uLocal_8274 = 0;
	var uLocal_8275 = 0;
	var uLocal_8276 = 0;
	var uLocal_8277 = 0;
	var uLocal_8278 = 0;
	var uLocal_8279 = 0;
	var uLocal_8280 = 0;
	var uLocal_8281 = -1;
	var uLocal_8282 = 0;
	var uLocal_8283 = 0;
	var uLocal_8284 = 0;
	var uLocal_8285 = 0;
	var uLocal_8286 = 0;
	var uLocal_8287 = 0;
	var uLocal_8288 = 0;
	var uLocal_8289 = 0;
	var uLocal_8290 = 0;
	var uLocal_8291 = 0;
	var uLocal_8292 = 0;
	var uLocal_8293 = 0;
	var uLocal_8294 = 0;
	var uLocal_8295 = 0;
	var uLocal_8296 = 0;
	var uLocal_8297 = 0;
	var uLocal_8298 = 0;
	var uLocal_8299 = 0;
	var uLocal_8300 = 0;
	var uLocal_8301 = 0;
	var uLocal_8302 = 0;
	var uLocal_8303 = 0;
	var uLocal_8304 = 0;
	var uLocal_8305 = 0;
	var uLocal_8306 = 0;
	var uLocal_8307 = 0;
	var uLocal_8308 = 0;
	var uLocal_8309 = 0;
	var uLocal_8310 = 0;
	var uLocal_8311 = 1065353216;
	var uLocal_8312 = 0;
	var uLocal_8313 = 0;
	var uLocal_8314 = 0;
	var uLocal_8315 = 0;
	var uLocal_8316 = 0;
	var uLocal_8317 = 0;
	var uLocal_8318 = 0;
	var uLocal_8319 = 0;
	var uLocal_8320 = 0;
	var uLocal_8321 = 0;
	var uLocal_8322 = 0;
	var uLocal_8323 = 0;
	var uLocal_8324 = 0;
	var uLocal_8325 = 0;
	var uLocal_8326 = 0;
	var uLocal_8327 = 0;
	var uLocal_8328 = 0;
	var uLocal_8329 = 0;
	var uLocal_8330 = 0;
	var uLocal_8331 = 0;
	var uLocal_8332 = 0;
	var uLocal_8333 = 0;
	var uLocal_8334 = 0;
	var uLocal_8335 = 0;
	var uLocal_8336 = 0;
	var uLocal_8337 = 0;
	var uLocal_8338 = -1;
	var uLocal_8339 = 0;
	var uLocal_8340 = 0;
	var uLocal_8341 = 0;
	var uLocal_8342 = 0;
	var uLocal_8343 = 0;
	var uLocal_8344 = 0;
	var uLocal_8345 = 0;
	var uLocal_8346 = 0;
	var uLocal_8347 = 0;
	var uLocal_8348 = 0;
	var uLocal_8349 = 0;
	var uLocal_8350 = 0;
	var uLocal_8351 = 0;
	var uLocal_8352 = 0;
	var uLocal_8353 = 0;
	var uLocal_8354 = 0;
	var uLocal_8355 = 0;
	var uLocal_8356 = 0;
	var uLocal_8357 = 0;
	var uLocal_8358 = 0;
	var uLocal_8359 = 0;
	var uLocal_8360 = 0;
	var uLocal_8361 = 0;
	var uLocal_8362 = 0;
	var uLocal_8363 = 0;
	var uLocal_8364 = 0;
	var uLocal_8365 = 0;
	var uLocal_8366 = 0;
	var uLocal_8367 = 0;
	var uLocal_8368 = 1065353216;
	var uLocal_8369 = 0;
	var uLocal_8370 = 0;
	var uLocal_8371 = 0;
	var uLocal_8372 = 0;
	var uLocal_8373 = 0;
	var uLocal_8374 = 0;
	var uLocal_8375 = 0;
	var uLocal_8376 = 0;
	var uLocal_8377 = 0;
	var uLocal_8378 = 0;
	var uLocal_8379 = 0;
	var uLocal_8380 = 0;
	var uLocal_8381 = 0;
	var uLocal_8382 = 0;
	var uLocal_8383 = 0;
	var uLocal_8384 = 0;
	var uLocal_8385 = 0;
	var uLocal_8386 = 0;
	var uLocal_8387 = 0;
	var uLocal_8388 = 0;
	var uLocal_8389 = 0;
	var uLocal_8390 = 0;
	var uLocal_8391 = 0;
	var uLocal_8392 = 0;
	var uLocal_8393 = 0;
	var uLocal_8394 = 0;
	var uLocal_8395 = -1;
	var uLocal_8396 = 0;
	var uLocal_8397 = 0;
	var uLocal_8398 = 0;
	var uLocal_8399 = 0;
	var uLocal_8400 = 0;
	var uLocal_8401 = 0;
	var uLocal_8402 = 0;
	var uLocal_8403 = 0;
	var uLocal_8404 = 0;
	var uLocal_8405 = 0;
	var uLocal_8406 = 0;
	var uLocal_8407 = 0;
	var uLocal_8408 = 0;
	var uLocal_8409 = 0;
	var uLocal_8410 = 0;
	var uLocal_8411 = 0;
	var uLocal_8412 = 0;
	var uLocal_8413 = 0;
	var uLocal_8414 = 0;
	var uLocal_8415 = 0;
	var uLocal_8416 = 0;
	var uLocal_8417 = 0;
	var uLocal_8418 = 0;
	var uLocal_8419 = 0;
	var uLocal_8420 = 0;
	var uLocal_8421 = 0;
	var uLocal_8422 = 0;
	var uLocal_8423 = 0;
	var uLocal_8424 = 0;
	var uLocal_8425 = 1065353216;
	var uLocal_8426 = 0;
	var uLocal_8427 = 0;
	var uLocal_8428 = 0;
	var uLocal_8429 = 0;
	var uLocal_8430 = 0;
	var uLocal_8431 = 0;
	var uLocal_8432 = 0;
	var uLocal_8433 = 0;
	var uLocal_8434 = 0;
	var uLocal_8435 = 0;
	var uLocal_8436 = 0;
	var uLocal_8437 = 0;
	var uLocal_8438 = 0;
	var uLocal_8439 = 0;
	var uLocal_8440 = 0;
	var uLocal_8441 = 0;
	var uLocal_8442 = 0;
	var uLocal_8443 = 0;
	var uLocal_8444 = 0;
	var uLocal_8445 = 0;
	var uLocal_8446 = 0;
	var uLocal_8447 = 0;
	var uLocal_8448 = 0;
	var uLocal_8449 = 0;
	var uLocal_8450 = 0;
	var uLocal_8451 = 0;
	var uLocal_8452 = -1;
	var uLocal_8453 = 0;
	var uLocal_8454 = 0;
	var uLocal_8455 = 0;
	var uLocal_8456 = 0;
	var uLocal_8457 = 0;
	var uLocal_8458 = 0;
	var uLocal_8459 = 0;
	var uLocal_8460 = 0;
	var uLocal_8461 = 0;
	var uLocal_8462 = 0;
	var uLocal_8463 = 0;
	var uLocal_8464 = 0;
	var uLocal_8465 = 0;
	var uLocal_8466 = 0;
	var uLocal_8467 = 0;
	var uLocal_8468 = 0;
	var uLocal_8469 = 0;
	var uLocal_8470 = 0;
	var uLocal_8471 = 0;
	var uLocal_8472 = 0;
	var uLocal_8473 = 0;
	var uLocal_8474 = 0;
	var uLocal_8475 = 0;
	var uLocal_8476 = 0;
	var uLocal_8477 = 0;
	var uLocal_8478 = 0;
	var uLocal_8479 = 0;
	var uLocal_8480 = 0;
	var uLocal_8481 = 0;
	var uLocal_8482 = 1065353216;
	var uLocal_8483 = 0;
	var uLocal_8484 = 0;
	var uLocal_8485 = 0;
	var uLocal_8486 = 0;
	var uLocal_8487 = 0;
	var uLocal_8488 = 0;
	var uLocal_8489 = 0;
	var uLocal_8490 = 0;
	var uLocal_8491 = 0;
	var uLocal_8492 = 0;
	var uLocal_8493 = 0;
	var uLocal_8494 = 0;
	var uLocal_8495 = 0;
	var uLocal_8496 = 0;
	var uLocal_8497 = 0;
	var uLocal_8498 = 0;
	var uLocal_8499 = 0;
	var uLocal_8500 = 0;
	var uLocal_8501 = 0;
	var uLocal_8502 = 0;
	var uLocal_8503 = 0;
	var uLocal_8504 = 0;
	var uLocal_8505 = 0;
	var uLocal_8506 = 0;
	var uLocal_8507 = 0;
	var uLocal_8508 = 0;
	var uLocal_8509 = -1;
	var uLocal_8510 = 0;
	var uLocal_8511 = 0;
	var uLocal_8512 = 0;
	var uLocal_8513 = 0;
	var uLocal_8514 = 0;
	var uLocal_8515 = 0;
	var uLocal_8516 = 0;
	var uLocal_8517 = 0;
	var uLocal_8518 = 0;
	var uLocal_8519 = 0;
	var uLocal_8520 = 0;
	var uLocal_8521 = 0;
	var uLocal_8522 = 0;
	var uLocal_8523 = 0;
	var uLocal_8524 = 0;
	var uLocal_8525 = 0;
	var uLocal_8526 = 0;
	var uLocal_8527 = 0;
	var uLocal_8528 = 0;
	var uLocal_8529 = 0;
	var uLocal_8530 = 0;
	var uLocal_8531 = 0;
	var uLocal_8532 = 0;
	var uLocal_8533 = 0;
	var uLocal_8534 = 0;
	var uLocal_8535 = 0;
	var uLocal_8536 = 0;
	var uLocal_8537 = 0;
	var uLocal_8538 = 0;
	var uLocal_8539 = 1065353216;
	var uLocal_8540 = 0;
	var uLocal_8541 = 0;
	var uLocal_8542 = 0;
	var uLocal_8543 = 0;
	var uLocal_8544 = 0;
	var uLocal_8545 = 0;
	var uLocal_8546 = 0;
	var uLocal_8547 = 0;
	var uLocal_8548 = 0;
	var uLocal_8549 = 0;
	var uLocal_8550 = 0;
	var uLocal_8551 = 0;
	var uLocal_8552 = 0;
	var uLocal_8553 = 0;
	var uLocal_8554 = 0;
	var uLocal_8555 = 0;
	var uLocal_8556 = 0;
	var uLocal_8557 = 0;
	var uLocal_8558 = 0;
	var uLocal_8559 = 0;
	var uLocal_8560 = 0;
	var uLocal_8561 = 0;
	var uLocal_8562 = 0;
	var uLocal_8563 = 0;
	var uLocal_8564 = 0;
	var uLocal_8565 = 0;
	var uLocal_8566 = -1;
	var uLocal_8567 = 0;
	var uLocal_8568 = 0;
	var uLocal_8569 = 0;
	var uLocal_8570 = 0;
	var uLocal_8571 = 0;
	var uLocal_8572 = 0;
	var uLocal_8573 = 0;
	var uLocal_8574 = 0;
	var uLocal_8575 = 0;
	var uLocal_8576 = 0;
	var uLocal_8577 = 0;
	var uLocal_8578 = 0;
	var uLocal_8579 = 0;
	var uLocal_8580 = 0;
	var uLocal_8581 = 0;
	var uLocal_8582 = 0;
	var uLocal_8583 = 0;
	var uLocal_8584 = 0;
	var uLocal_8585 = 0;
	var uLocal_8586 = 0;
	var uLocal_8587 = 0;
	var uLocal_8588 = 0;
	var uLocal_8589 = 0;
	var uLocal_8590 = 0;
	var uLocal_8591 = 0;
	var uLocal_8592 = 0;
	var uLocal_8593 = 0;
	var uLocal_8594 = 0;
	var uLocal_8595 = 0;
	var uLocal_8596 = 1065353216;
	var uLocal_8597 = 0;
	var uLocal_8598 = 0;
	var uLocal_8599 = 0;
	var uLocal_8600 = 0;
	var uLocal_8601 = 0;
	var uLocal_8602 = 0;
	var uLocal_8603 = 0;
	var uLocal_8604 = 0;
	var uLocal_8605 = 0;
	var uLocal_8606 = 0;
	var uLocal_8607 = 0;
	var uLocal_8608 = 0;
	var uLocal_8609 = 0;
	var uLocal_8610 = 0;
	var uLocal_8611 = 0;
	var uLocal_8612 = 0;
	var uLocal_8613 = 0;
	var uLocal_8614 = 0;
	var uLocal_8615 = 0;
	var uLocal_8616 = 0;
	var uLocal_8617 = 0;
	var uLocal_8618 = 0;
	var uLocal_8619 = 0;
	var uLocal_8620 = 0;
	var uLocal_8621 = 0;
	var uLocal_8622 = 0;
	var uLocal_8623 = -1;
	var uLocal_8624 = 0;
	var uLocal_8625 = 0;
	var uLocal_8626 = 0;
	var uLocal_8627 = 0;
	var uLocal_8628 = 0;
	var uLocal_8629 = 0;
	var uLocal_8630 = 0;
	var uLocal_8631 = 0;
	var uLocal_8632 = 0;
	var uLocal_8633 = 0;
	var uLocal_8634 = 0;
	var uLocal_8635 = 0;
	var uLocal_8636 = 0;
	var uLocal_8637 = 0;
	var uLocal_8638 = 0;
	var uLocal_8639 = 0;
	var uLocal_8640 = 0;
	var uLocal_8641 = 0;
	var uLocal_8642 = 0;
	var uLocal_8643 = 0;
	var uLocal_8644 = 0;
	var uLocal_8645 = 0;
	var uLocal_8646 = 0;
	var uLocal_8647 = 0;
	var uLocal_8648 = 0;
	var uLocal_8649 = 0;
	var uLocal_8650 = 0;
	var uLocal_8651 = 0;
	var uLocal_8652 = 0;
	var uLocal_8653 = 1065353216;
	var uLocal_8654 = 0;
	var uLocal_8655 = 0;
	var uLocal_8656 = 0;
	var uLocal_8657 = 0;
	var uLocal_8658 = 0;
	var uLocal_8659 = 0;
	var uLocal_8660 = 0;
	var uLocal_8661 = 0;
	var uLocal_8662 = 0;
	var uLocal_8663 = 0;
	var uLocal_8664 = 0;
	var uLocal_8665 = 0;
	var uLocal_8666 = 0;
	var uLocal_8667 = 0;
	var uLocal_8668 = 0;
	var uLocal_8669 = 0;
	var uLocal_8670 = 0;
	var uLocal_8671 = 0;
	var uLocal_8672 = 0;
	var uLocal_8673 = 0;
	var uLocal_8674 = 0;
	var uLocal_8675 = 0;
	var uLocal_8676 = 0;
	var uLocal_8677 = 0;
	var uLocal_8678 = 0;
	var uLocal_8679 = 0;
	var uLocal_8680 = -1;
	var uLocal_8681 = 0;
	var uLocal_8682 = 0;
	var uLocal_8683 = 0;
	var uLocal_8684 = 0;
	var uLocal_8685 = 0;
	var uLocal_8686 = 0;
	var uLocal_8687 = 0;
	var uLocal_8688 = 0;
	var uLocal_8689 = 0;
	var uLocal_8690 = 0;
	var uLocal_8691 = 0;
	var uLocal_8692 = 0;
	var uLocal_8693 = 0;
	var uLocal_8694 = 0;
	var uLocal_8695 = 0;
	var uLocal_8696 = 0;
	var uLocal_8697 = 0;
	var uLocal_8698 = 0;
	var uLocal_8699 = 0;
	var uLocal_8700 = 0;
	var uLocal_8701 = 0;
	var uLocal_8702 = 0;
	var uLocal_8703 = 0;
	var uLocal_8704 = 0;
	var uLocal_8705 = 0;
	var uLocal_8706 = 0;
	var uLocal_8707 = 0;
	var uLocal_8708 = 0;
	var uLocal_8709 = 0;
	var uLocal_8710 = 1065353216;
	var uLocal_8711 = 0;
	var uLocal_8712 = 0;
	var uLocal_8713 = 0;
	var uLocal_8714 = 0;
	var uLocal_8715 = 0;
	var uLocal_8716 = 0;
	var uLocal_8717 = 0;
	var uLocal_8718 = 0;
	var uLocal_8719 = 0;
	var uLocal_8720 = 0;
	var uLocal_8721 = 0;
	var uLocal_8722 = 0;
	var uLocal_8723 = 0;
	var uLocal_8724 = 0;
	var uLocal_8725 = 0;
	var uLocal_8726 = 0;
	var uLocal_8727 = 0;
	var uLocal_8728 = 0;
	var uLocal_8729 = 0;
	var uLocal_8730 = 0;
	var uLocal_8731 = 0;
	var uLocal_8732 = 0;
	var uLocal_8733 = 0;
	var uLocal_8734 = 0;
	var uLocal_8735 = 0;
	var uLocal_8736 = 0;
	var uLocal_8737 = -1;
	var uLocal_8738 = 0;
	var uLocal_8739 = 0;
	var uLocal_8740 = 0;
	var uLocal_8741 = 0;
	var uLocal_8742 = 0;
	var uLocal_8743 = 0;
	var uLocal_8744 = 0;
	var uLocal_8745 = 0;
	var uLocal_8746 = 0;
	var uLocal_8747 = 0;
	var uLocal_8748 = 0;
	var uLocal_8749 = 0;
	var uLocal_8750 = 0;
	var uLocal_8751 = 0;
	var uLocal_8752 = 0;
	var uLocal_8753 = 0;
	var uLocal_8754 = 0;
	var uLocal_8755 = 0;
	var uLocal_8756 = 0;
	var uLocal_8757 = 0;
	var uLocal_8758 = 0;
	var uLocal_8759 = 0;
	var uLocal_8760 = 0;
	var uLocal_8761 = 0;
	var uLocal_8762 = 0;
	var uLocal_8763 = 0;
	var uLocal_8764 = 0;
	var uLocal_8765 = 0;
	var uLocal_8766 = 0;
	var uLocal_8767 = 1065353216;
	var uLocal_8768 = 0;
	var uLocal_8769 = 0;
	var uLocal_8770 = 0;
	var uLocal_8771 = 0;
	var uLocal_8772 = 0;
	var uLocal_8773 = 0;
	var uLocal_8774 = 0;
	var uLocal_8775 = 0;
	var uLocal_8776 = 0;
	var uLocal_8777 = 0;
	var uLocal_8778 = 0;
	var uLocal_8779 = 0;
	var uLocal_8780 = 0;
	var uLocal_8781 = 0;
	var uLocal_8782 = 0;
	var uLocal_8783 = 0;
	var uLocal_8784 = 0;
	var uLocal_8785 = 0;
	var uLocal_8786 = 0;
	var uLocal_8787 = 0;
	var uLocal_8788 = 0;
	var uLocal_8789 = 0;
	var uLocal_8790 = 0;
	var uLocal_8791 = 0;
	var uLocal_8792 = 0;
	var uLocal_8793 = 0;
	var uLocal_8794 = -1;
	var uLocal_8795 = 0;
	var uLocal_8796 = 0;
	var uLocal_8797 = 0;
	var uLocal_8798 = 0;
	var uLocal_8799 = 0;
	var uLocal_8800 = 0;
	var uLocal_8801 = 0;
	var uLocal_8802 = 0;
	var uLocal_8803 = 0;
	var uLocal_8804 = 0;
	var uLocal_8805 = 0;
	var uLocal_8806 = 0;
	var uLocal_8807 = 0;
	var uLocal_8808 = 0;
	var uLocal_8809 = 0;
	var uLocal_8810 = 0;
	var uLocal_8811 = 0;
	var uLocal_8812 = 0;
	var uLocal_8813 = 0;
	var uLocal_8814 = 0;
	var uLocal_8815 = 0;
	var uLocal_8816 = 0;
	var uLocal_8817 = 0;
	var uLocal_8818 = 0;
	var uLocal_8819 = 0;
	var uLocal_8820 = 0;
	var uLocal_8821 = 0;
	var uLocal_8822 = 0;
	var uLocal_8823 = 0;
	var uLocal_8824 = 1065353216;
	var uLocal_8825 = 0;
	var uLocal_8826 = 0;
	var uLocal_8827 = 0;
	var uLocal_8828 = 0;
	var uLocal_8829 = 0;
	var uLocal_8830 = 0;
	var uLocal_8831 = 0;
	var uLocal_8832 = 0;
	var uLocal_8833 = 0;
	var uLocal_8834 = 0;
	var uLocal_8835 = 0;
	var uLocal_8836 = 0;
	var uLocal_8837 = 0;
	var uLocal_8838 = 0;
	var uLocal_8839 = 0;
	var uLocal_8840 = 0;
	var uLocal_8841 = 0;
	var uLocal_8842 = 0;
	var uLocal_8843 = 0;
	var uLocal_8844 = 0;
	var uLocal_8845 = 0;
	var uLocal_8846 = 0;
	var uLocal_8847 = 0;
	var uLocal_8848 = 0;
	var uLocal_8849 = 0;
	var uLocal_8850 = 0;
	var uLocal_8851 = -1;
	var uLocal_8852 = 0;
	var uLocal_8853 = 0;
	var uLocal_8854 = 0;
	var uLocal_8855 = 0;
	var uLocal_8856 = 0;
	var uLocal_8857 = 0;
	var uLocal_8858 = 0;
	var uLocal_8859 = 0;
	var uLocal_8860 = 0;
	var uLocal_8861 = 0;
	var uLocal_8862 = 0;
	var uLocal_8863 = 0;
	var uLocal_8864 = 0;
	var uLocal_8865 = 0;
	var uLocal_8866 = 0;
	var uLocal_8867 = 0;
	var uLocal_8868 = 0;
	var uLocal_8869 = 0;
	var uLocal_8870 = 0;
	var uLocal_8871 = 0;
	var uLocal_8872 = 0;
	var uLocal_8873 = 0;
	var uLocal_8874 = 0;
	var uLocal_8875 = 0;
	var uLocal_8876 = 0;
	var uLocal_8877 = 0;
	var uLocal_8878 = 0;
	var uLocal_8879 = 0;
	var uLocal_8880 = 0;
	var uLocal_8881 = 1065353216;
	var uLocal_8882 = 0;
	var uLocal_8883 = 0;
	var uLocal_8884 = 0;
	var uLocal_8885 = 0;
	var uLocal_8886 = 0;
	var uLocal_8887 = 0;
	var uLocal_8888 = 0;
	var uLocal_8889 = 0;
	var uLocal_8890 = 0;
	var uLocal_8891 = 0;
	var uLocal_8892 = 0;
	var uLocal_8893 = 0;
	var uLocal_8894 = 0;
	var uLocal_8895 = 0;
	var uLocal_8896 = 0;
	var uLocal_8897 = 0;
	var uLocal_8898 = 0;
	var uLocal_8899 = 0;
	var uLocal_8900 = 0;
	var uLocal_8901 = 0;
	var uLocal_8902 = 0;
	var uLocal_8903 = 0;
	var uLocal_8904 = 0;
	var uLocal_8905 = 0;
	var uLocal_8906 = 0;
	var uLocal_8907 = 0;
	var uLocal_8908 = -1;
	var uLocal_8909 = 0;
	var uLocal_8910 = 0;
	var uLocal_8911 = 0;
	var uLocal_8912 = 0;
	var uLocal_8913 = 0;
	var uLocal_8914 = 0;
	var uLocal_8915 = 0;
	var uLocal_8916 = 0;
	var uLocal_8917 = 0;
	var uLocal_8918 = 0;
	var uLocal_8919 = 0;
	var uLocal_8920 = 0;
	var uLocal_8921 = 0;
	var uLocal_8922 = 0;
	var uLocal_8923 = 0;
	var uLocal_8924 = 0;
	var uLocal_8925 = 0;
	var uLocal_8926 = 0;
	var uLocal_8927 = 0;
	var uLocal_8928 = 0;
	var uLocal_8929 = 0;
	var uLocal_8930 = 0;
	var uLocal_8931 = 0;
	var uLocal_8932 = 0;
	var uLocal_8933 = 0;
	var uLocal_8934 = 0;
	var uLocal_8935 = 0;
	var uLocal_8936 = 0;
	var uLocal_8937 = 0;
	var uLocal_8938 = 1065353216;
	var uLocal_8939 = 0;
	var uLocal_8940 = 0;
	var uLocal_8941 = 0;
	var uLocal_8942 = 0;
	var uLocal_8943 = 0;
	var uLocal_8944 = 0;
	var uLocal_8945 = 0;
	var uLocal_8946 = 0;
	var uLocal_8947 = 0;
	var uLocal_8948 = 0;
	var uLocal_8949 = 0;
	var uLocal_8950 = 0;
	var uLocal_8951 = 0;
	var uLocal_8952 = 0;
	var uLocal_8953 = 0;
	var uLocal_8954 = 0;
	var uLocal_8955 = 0;
	var uLocal_8956 = 0;
	var uLocal_8957 = 0;
	var uLocal_8958 = 0;
	var uLocal_8959 = 0;
	var uLocal_8960 = 0;
	var uLocal_8961 = 0;
	var uLocal_8962 = 0;
	var uLocal_8963 = 0;
	var uLocal_8964 = 0;
	var uLocal_8965 = -1;
	var uLocal_8966 = 0;
	var uLocal_8967 = 0;
	var uLocal_8968 = 0;
	var uLocal_8969 = 0;
	var uLocal_8970 = 0;
	var uLocal_8971 = 0;
	var uLocal_8972 = 0;
	var uLocal_8973 = 0;
	var uLocal_8974 = 0;
	var uLocal_8975 = 0;
	var uLocal_8976 = 0;
	var uLocal_8977 = 0;
	var uLocal_8978 = 0;
	var uLocal_8979 = 0;
	var uLocal_8980 = 0;
	var uLocal_8981 = 0;
	var uLocal_8982 = 0;
	var uLocal_8983 = 0;
	var uLocal_8984 = 0;
	var uLocal_8985 = 0;
	var uLocal_8986 = 0;
	var uLocal_8987 = 0;
	var uLocal_8988 = 0;
	var uLocal_8989 = 0;
	var uLocal_8990 = 0;
	var uLocal_8991 = 0;
	var uLocal_8992 = 0;
	var uLocal_8993 = 0;
	var uLocal_8994 = 0;
	var uLocal_8995 = 1065353216;
	var uLocal_8996 = 0;
	var uLocal_8997 = 0;
	var uLocal_8998 = 0;
	var uLocal_8999 = 0;
	var uLocal_9000 = 0;
	var uLocal_9001 = 0;
	var uLocal_9002 = 0;
	var uLocal_9003 = 0;
	var uLocal_9004 = 0;
	var uLocal_9005 = 0;
	var uLocal_9006 = 0;
	var uLocal_9007 = 0;
	var uLocal_9008 = 0;
	var uLocal_9009 = 0;
	var uLocal_9010 = 0;
	var uLocal_9011 = 0;
	var uLocal_9012 = 0;
	var uLocal_9013 = 0;
	var uLocal_9014 = 0;
	var uLocal_9015 = 0;
	var uLocal_9016 = 0;
	var uLocal_9017 = 0;
	var uLocal_9018 = 0;
	var uLocal_9019 = 0;
	var uLocal_9020 = 0;
	var uLocal_9021 = 0;
	var uLocal_9022 = -1;
	var uLocal_9023 = 0;
	var uLocal_9024 = 0;
	var uLocal_9025 = 0;
	var uLocal_9026 = 0;
	var uLocal_9027 = 0;
	var uLocal_9028 = 0;
	var uLocal_9029 = 0;
	var uLocal_9030 = 0;
	var uLocal_9031 = 0;
	var uLocal_9032 = 0;
	var uLocal_9033 = 0;
	var uLocal_9034 = 0;
	var uLocal_9035 = 0;
	var uLocal_9036 = 0;
	var uLocal_9037 = 0;
	var uLocal_9038 = 0;
	var uLocal_9039 = 0;
	var uLocal_9040 = 0;
	var uLocal_9041 = 0;
	var uLocal_9042 = 0;
	var uLocal_9043 = 0;
	var uLocal_9044 = 0;
	var uLocal_9045 = 0;
	var uLocal_9046 = 0;
	var uLocal_9047 = 0;
	var uLocal_9048 = 0;
	var uLocal_9049 = 0;
	var uLocal_9050 = 0;
	var uLocal_9051 = 0;
	var uLocal_9052 = 1065353216;
	var uLocal_9053 = 0;
	var uLocal_9054 = 0;
	var uLocal_9055 = 0;
	var uLocal_9056 = 0;
	var uLocal_9057 = 0;
	var uLocal_9058 = 0;
	var uLocal_9059 = 0;
	var uLocal_9060 = 0;
	var uLocal_9061 = 0;
	var uLocal_9062 = 0;
	var uLocal_9063 = 0;
	var uLocal_9064 = 0;
	var uLocal_9065 = 0;
	var uLocal_9066 = 0;
	var uLocal_9067 = 0;
	var uLocal_9068 = 0;
	var uLocal_9069 = 0;
	var uLocal_9070 = 0;
	var uLocal_9071 = 0;
	var uLocal_9072 = 0;
	var uLocal_9073 = 0;
	var uLocal_9074 = 0;
	var uLocal_9075 = 0;
	var uLocal_9076 = 16;
	var uLocal_9077 = 0;
	var uLocal_9078 = -1082130432;
	var uLocal_9079 = 0;
	var uLocal_9080 = -1082130432;
	var uLocal_9081 = 0;
	var uLocal_9082 = -1082130432;
	var uLocal_9083 = 0;
	var uLocal_9084 = -1082130432;
	var uLocal_9085 = 0;
	var uLocal_9086 = -1082130432;
	var uLocal_9087 = 0;
	var uLocal_9088 = -1082130432;
	var uLocal_9089 = 0;
	var uLocal_9090 = -1082130432;
	var uLocal_9091 = 0;
	var uLocal_9092 = -1082130432;
	var uLocal_9093 = 0;
	var uLocal_9094 = -1082130432;
	var uLocal_9095 = 0;
	var uLocal_9096 = -1082130432;
	var uLocal_9097 = 0;
	var uLocal_9098 = -1082130432;
	var uLocal_9099 = 0;
	var uLocal_9100 = -1082130432;
	var uLocal_9101 = 0;
	var uLocal_9102 = -1082130432;
	var uLocal_9103 = 0;
	var uLocal_9104 = -1082130432;
	var uLocal_9105 = 0;
	var uLocal_9106 = -1082130432;
	var uLocal_9107 = 0;
	var uLocal_9108 = -1082130432;
	var uLocal_9109 = 16;
	var uLocal_9110 = 0;
	var uLocal_9111 = -1082130432;
	var uLocal_9112 = 0;
	var uLocal_9113 = -1082130432;
	var uLocal_9114 = 0;
	var uLocal_9115 = -1082130432;
	var uLocal_9116 = 0;
	var uLocal_9117 = -1082130432;
	var uLocal_9118 = 0;
	var uLocal_9119 = -1082130432;
	var uLocal_9120 = 0;
	var uLocal_9121 = -1082130432;
	var uLocal_9122 = 0;
	var uLocal_9123 = -1082130432;
	var uLocal_9124 = 0;
	var uLocal_9125 = -1082130432;
	var uLocal_9126 = 0;
	var uLocal_9127 = -1082130432;
	var uLocal_9128 = 0;
	var uLocal_9129 = -1082130432;
	var uLocal_9130 = 0;
	var uLocal_9131 = -1082130432;
	var uLocal_9132 = 0;
	var uLocal_9133 = -1082130432;
	var uLocal_9134 = 0;
	var uLocal_9135 = -1082130432;
	var uLocal_9136 = 0;
	var uLocal_9137 = -1082130432;
	var uLocal_9138 = 0;
	var uLocal_9139 = -1082130432;
	var uLocal_9140 = 0;
	var uLocal_9141 = -1082130432;
	var uLocal_9142 = 0;
	var uLocal_9143 = 0;
	var uLocal_9144 = 0;
	var uLocal_9145 = 0;
	var uLocal_9146 = 0;
	var uLocal_9147 = 0;
	var uLocal_9148 = 0;
	var uLocal_9149 = 0;
	var uLocal_9150 = 0;
	var uLocal_9151 = 0;
	var uLocal_9152 = 0;
	var uLocal_9153 = 0;
	var uLocal_9154 = 0;
	var uLocal_9155 = 0;
	var uLocal_9156 = 0;
	var uLocal_9157 = 0;
	var uLocal_9158 = -1082130432;
	var uLocal_9159 = -1082130432;
	var uLocal_9160 = 1;
	var uLocal_9161 = 1;
	var uLocal_9162 = 1;
	var uLocal_9163 = -1;
	var uLocal_9164 = -1;
	var uLocal_9165 = -1;
	float fLocal_9166 = 0f;
	float fLocal_9167 = 0f;
	struct<3> Local_9168 = { 0, 0, 0 } ;
	float fLocal_9171 = 0f;
	float fLocal_9172 = 0f;
	struct<3> Local_9173 = { 0, 0, 0 } ;
	float fLocal_9176 = 0f;
	int iLocal_9177 = 0;
	var uLocal_9178 = 0;
	struct<3> Local_9179 = { 0, 0, 0 } ;
	float fLocal_9182 = 0f;
	int iLocal_9183 = 0;
	int iLocal_9184 = 0;
	float fLocal_9185 = 0f;
	bool bLocal_9186 = 0;
	int iLocal_9187 = 0;
	float fLocal_9188 = 0f;
	int iLocal_9189 = 0;
	float fLocal_9190 = 0f;
	float fLocal_9191 = 0f;
	int iLocal_9192 = 0;
	int iLocal_9193 = 0;
	bool bLocal_9194 = 0;
	int iLocal_9195 = 0;
	var uLocal_9196 = 0;
	float fLocal_9197 = 0f;
	struct<3> Local_9198 = { 0, 0, 0 } ;
	struct<3> Local_9201 = { 0, 0, 0 } ;
	float fLocal_9204 = 0f;
	bool bLocal_9205 = 0;
	int iLocal_9206 = 0;
	bool bLocal_9207 = 0;
	float fLocal_9208 = 0f;
	float fLocal_9209 = 0f;
	struct<3> Local_9210 = { 0, 0, 0 } ;
	int iLocal_9213 = 0;
	int iLocal_9214 = 0;
	int iLocal_9215 = 0;
	float fLocal_9216 = 0f;
	float fLocal_9217 = 0f;
	var uLocal_9218 = 0;
	var uLocal_9219 = 0;
	int iLocal_9220 = 0;
	int iLocal_9221 = 0;
	char[] cLocal_9222[8] = 0;
	char[] cLocal_9223[8] = 0;
	char[] cLocal_9224[8] = 0;
	int iLocal_9225 = 0;
	int iLocal_9226 = 0;
	int iLocal_9227 = 0;
	int iLocal_9228 = 0;
	int iLocal_9229 = 0;
	int iLocal_9230 = 0;
	int iLocal_9231 = 0;
	int iLocal_9232 = 0;
	int iLocal_9233 = 0;
	int iLocal_9234 = 0;
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
	fLocal_50 = 1f;
	bLocal_54 = true;
	bLocal_61 = true;
	bLocal_83 = true;
	fLocal_1194 = 120f;
	fLocal_1195 = 0f;
	fLocal_1197 = 1f;
	fLocal_1198 = 0f;
	fLocal_1199 = 1f;
	fLocal_1200 = 30f;
	fLocal_1202 = 1f;
	fLocal_1203 = 5f;
	fLocal_1204 = 1f;
	fLocal_1205 = 1f;
	fLocal_1206 = 100f;
	fLocal_1207 = 100f;
	fLocal_1208 = 0f;
	fLocal_1209 = 7000f;
	fLocal_1210 = 0f;
	fLocal_1211 = 0f;
	fLocal_1212 = 0.3f;
	fLocal_1213 = 0.5f;
	fLocal_1214 = 50f;
	iLocal_1820 = -1;
	iLocal_1828 = -1;
	iLocal_1829 = -1;
	Local_3003 = { -7.8156f, -741.8263f, 43.157f };
	fLocal_3006 = 69.4048f;
	Local_3007 = { -110.6089f, -636.6243f, 35.10708f };
	fLocal_3010 = 343.3254f;
	Local_3011 = { 1768.998f, 3279.524f, 40.37643f };
	Local_3014 = { 1147.395f, -1718.47f, 34.7117f };
	Local_3017 = { 25.3048f, -635.7917f, 30.30575f };
	iLocal_3407 = 1;
	iLocal_3438 = 5;
	iLocal_3462 = -1;
	iLocal_3463 = 1;
	iLocal_3465 = AUDIO::GET_SOUND_ID();
	iLocal_3466 = AUDIO::GET_SOUND_ID();
	iLocal_3469 = 1;
	StringCopy(&cLocal_3480, "", 24);
	StringCopy(&cLocal_3486, "", 24);
	StringCopy(&cLocal_3493, "", 24);
	StringCopy(&cLocal_3499, "", 24);
	StringCopy(&Local_3506, "", 24);
	StringCopy(&Local_3512, "", 24);
	iLocal_3525 = 1;
	iLocal_3527 = 1;
	iLocal_3528 = 1;
	fLocal_9166 = 12f;
	fLocal_9167 = 3f;
	fLocal_9171 = 0f;
	fLocal_9172 = 0f;
	Local_9173 = { 1865.341f, 2265.841f, 55.65f };
	fLocal_9176 = 80f;
	iLocal_9177 = 1400;
	Local_9179 = { 1877.9f, 2257.5f, 54.6f };
	fLocal_9182 = 6f;
	fLocal_9185 = 15f;
	fLocal_9188 = 0.18f;
	fLocal_9190 = 0.055f;
	fLocal_9191 = 0.27f;
	fLocal_9197 = 0.33f;
	Local_9198 = { 0.15f, 0.17f, 0f };
	Local_9201 = { -90f, 0f, 0f };
	fLocal_9204 = 0.65f;
	bLocal_9205 = true;
	bLocal_9207 = true;
	fLocal_9208 = 0.4f;
	fLocal_9209 = 7f;
	Local_9210 = { -110.9f, -636.6f, 35.4f };
	fLocal_9216 = 0.6f;
	fLocal_9217 = 2500f;
	cLocal_9222 = "missbigscore1Switch_Trevor_Piss";
	cLocal_9223 = "missbigscore1leadinoutbss_1_mcs_2";
	cLocal_9224 = "missswitch";
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 2)
		{
			GlobalFunc_10632();
			func_844(0);
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		else if (!Local_3356.f_20)
		{
			GlobalFunc_10632();
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
			}
			func_844(0);
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	GlobalFunc_3034();
	MISC::SET_MISSION_FLAG(1);
	HUD::REQUEST_ADDITIONAL_TEXT("FINH1", 0);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
	func_825();
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_TheBigScoreSetup", 0);
		GlobalFunc_8012(&uLocal_3547);
		GlobalFunc_5195(&uLocal_4527);
		func_821();
		func_639();
		if (!bLocal_5439)
		{
			func_576();
			func_1();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x351
{
	switch (iLocal_5435)
	{
		case 0:
			func_517();
			break;
		
		case 1:
			func_503();
			break;
		
		case 2:
			func_452();
			break;
		
		case 3:
			func_445();
			break;
		
		case 4:
			func_230();
			break;
		
		case 5:
			func_202();
			break;
		
		case 6:
			func_9();
			break;
		
		case 7:
			func_2();
			break;
	}
}

void func_2()//Position - 0x3C9
{
	switch (iLocal_5436)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			iLocal_5436++;
			break;
		
		case 1:
			func_3();
			break;
	}
}

void func_3()//Position - 0x405
{
	func_8(0);
	GlobalFunc_5103(0, 0);
	func_844(1);
	BRAIN::_0x6D6840CEE8845831("chop");
	SCRIPT::TERMINATE_THIS_THREAD();
}





void func_8(int iParam0)//Position - 0x59C
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_drive_START") && iParam0 != 1)
	{
		AUDIO::STOP_AUDIO_SCENE("BS_1_drive_START");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_BANK_CHECK_OUT") && iParam0 != 2)
	{
		AUDIO::STOP_AUDIO_SCENE("BS_1_BANK_CHECK_OUT");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_BANK_HINT_CAM") && iParam0 != 3)
	{
		AUDIO::STOP_AUDIO_SCENE("BS_1_BANK_HINT_CAM");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_DRIVE_AROUND_BACK") && iParam0 != 4)
	{
		AUDIO::STOP_AUDIO_SCENE("BS_1_DRIVE_AROUND_BACK");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_SWITCH_TO_TREVOR") && iParam0 != 5)
	{
		AUDIO::STOP_AUDIO_SCENE("BS_1_SWITCH_TO_TREVOR");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_FLY_TO_TRUCKS") && iParam0 != 6)
	{
		AUDIO::STOP_AUDIO_SCENE("BS_1_FLY_TO_TRUCKS");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_TRUCKS_SPOTTED") && iParam0 != 7)
	{
		AUDIO::STOP_AUDIO_SCENE("BS_1_TRUCKS_SPOTTED");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_TRUCKS_HINT_CAM") && iParam0 != 8)
	{
		AUDIO::STOP_AUDIO_SCENE("BS_1_TRUCKS_HINT_CAM");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_TRUCKS_ENTER_TUNNEL") && iParam0 != 9)
	{
		AUDIO::STOP_AUDIO_SCENE("BS_1_TRUCKS_ENTER_TUNNEL");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_SEARCH_FOR_ENTRANCE") && iParam0 != 10)
	{
		AUDIO::STOP_AUDIO_SCENE("BS_1_SEARCH_FOR_ENTRANCE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_VIEW_RECORDING") && iParam0 != 11)
	{
		AUDIO::STOP_AUDIO_SCENE("BS_1_VIEW_RECORDING");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_HELI_RETURN_TO_AIRSTRIP") && iParam0 != 12)
	{
		AUDIO::STOP_AUDIO_SCENE("BS_1_HELI_RETURN_TO_AIRSTRIP");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_CAR_RETURN_TO_FRANKLINS") && iParam0 != 13)
	{
		AUDIO::STOP_AUDIO_SCENE("BS_1_CAR_RETURN_TO_FRANKLINS");
	}
}

void func_9()//Position - 0x706
{
	switch (iLocal_5436)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
				GlobalFunc_730(187.9638f);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_3032[2 /*2*/]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_3032[2 /*2*/], 0);
			}
			func_198(0, 1, 0, 0, 0, 0);
			iLocal_3392 = 1;
			iLocal_3478 = 2;
			iLocal_3474 = 0;
			iLocal_3479 = 0;
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3293))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(iLocal_3293))
				{
					ENTITY::DETACH_ENTITY(iLocal_3293, 1, 1);
				}
				GlobalFunc_2346(&iLocal_3293);
			}
			if (!PED::IS_PED_INJURED(func_196()))
			{
				TASK::CLEAR_PED_SECONDARY_TASK(func_196());
			}
			RECORDING::_0x293220DA1B46CEBC(0f, 10f, 3);
			GlobalFunc_Checkpoint1(6, "Stage 6: Drop off point", 1, 0, 0, 1);
			iLocal_3520 = 0;
			iLocal_5436++;
			break;
		
		case 1:
			if (!Local_3356.f_20)
			{
				if (PLAYER::PLAYER_PED_ID() == func_130())
				{
					if (STREAMING::IS_STREAMVOL_ACTIVE())
					{
						STREAMING::STREAMVOL_DELETE(uLocal_3291);
					}
					if (iLocal_3296 != 0)
					{
						INTERIOR::UNPIN_INTERIOR(iLocal_3296);
					}
					if (!PED::IS_PED_INJURED(func_129()) && !ENTITY::IS_ENTITY_DEAD(Local_3032[2 /*2*/]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(func_129(), -1273030092) != 1)
						{
							TASK::TASK_VEHICLE_MISSION_COORS_TARGET(func_129(), Local_3032[2 /*2*/], 1728.828f, 3126.128f, 106.3001f, 9, 30f, 786469, 4f, -1f, 1);
						}
					}
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_129(), 1);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_196(), 1);
					if (GlobalFunc_2773(Local_3032[2 /*2*/]))
					{
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_3032[2 /*2*/], 1);
					}
					if (GlobalFunc_2773(Local_3032[1 /*2*/]))
					{
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_3032[1 /*2*/], 1);
					}
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_130(), 0);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_127(), 0);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_3032[0 /*2*/], 0);
					func_8(13);
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_CAR_RETURN_TO_FRANKLINS"))
					{
						AUDIO::START_AUDIO_SCENE("BS_1_CAR_RETURN_TO_FRANKLINS");
					}
					if (GlobalFunc_5171())
					{
						if (iLocal_3520)
						{
							GlobalFunc_164("FH1_End2", 7500, 1);
							iLocal_3520 = 0;
						}
					}
					if (func_78(&Local_3261, 17.56f, 547.32f, 175.11f, 7f, 3f, 2f, 1, func_127(), 0, 0, Local_3032[0 /*2*/], "", "FH1_FRCAR", "", "", "", "FH1_CAR", "FH1_BKCAR", 0, 0, 1, -1))
					{
						if (GlobalFunc_644(Local_3032[0 /*2*/]))
						{
							RECORDING::_0x293220DA1B46CEBC(6f, 10f, 4);
							GlobalFunc_5168(0, 6, 0);
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1201219326, 0, 0, 1);
							PED::SET_PED_CONFIG_FLAG(func_127(), 104, 1);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_3290);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 64);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 6.4282f, 535.5682f, 175.028f, 1f, 20000, 1f, 0, 40000f);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_3290);
							TASK::TASK_PERFORM_SEQUENCE(func_127(), uLocal_3290);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_3290);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
							CAM::DESTROY_ALL_CAMS(0);
							GlobalFunc_6685(0);
							MISC::CLEAR_AREA(17.8857f, 572.9736f, 180.1063f, 50f, 1, 0, 0, 0);
							uLocal_3287 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 7.5984f, 539.8885f, 175.7547f, 7.1088f, 0f, -38.96f, 45.5983f, 0, 2);
							CAM::SET_CAM_ACTIVE(uLocal_3287, 1);
							CAM::SET_CAM_PARAMS(uLocal_3287, 7.6983f, 540.0698f, 175.7795f, 6.0492f, 0f, -38.96f, 45.5983f, 7000, 1, 1, 2);
							CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
							fLocal_3434 = 0.1f;
							CAM::SHAKE_CAM(uLocal_3287, "HAND_SHAKE", fLocal_3434);
							HUD::DISPLAY_RADAR(0);
							HUD::DISPLAY_HUD(0);
							CAM::SET_GAMEPLAY_COORD_HINT(8.17981f, 539.191f, 176.3732f, 10000, 0, 2000, 0);
							iLocal_3432 = 0;
							iLocal_3392 = 0;
							GlobalFunc_4956();
							iLocal_3478 = 3;
							iLocal_3521 = 0;
							iLocal_3427 = MISC::GET_GAME_TIMER();
							iLocal_5436++;
						}
						else
						{
							GlobalFunc_763(Local_3032[0 /*2*/], 4f, 1, 1056964608, 0, 1);
						}
					}
				}
				else if (PLAYER::PLAYER_PED_ID() == func_129())
				{
					if (!PED::IS_PED_INJURED(func_130()) && !ENTITY::IS_ENTITY_DEAD(Local_3032[0 /*2*/]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(func_130(), 567490903) != 1)
						{
							TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(func_130(), Local_3032[0 /*2*/], 11.2359f, 547.3271f, 174.8878f, 10f, 786597, 2f);
						}
					}
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_130(), 1);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_127(), 1);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_3032[0 /*2*/], 1);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_129(), 0);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_196(), 0);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_3032[2 /*2*/], 0);
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_3017, 1) > 200f)
					{
						if (STREAMING::IS_STREAMVOL_ACTIVE())
						{
							STREAMING::STREAMVOL_DELETE(uLocal_3291);
						}
						if (iLocal_3296 != 0)
						{
							INTERIOR::UNPIN_INTERIOR(iLocal_3296);
						}
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1753.278f, 3262.488f, 40.32073f, 1) < 200f)
					{
						if (!GlobalFunc_2773(Local_3032[1 /*2*/]))
						{
							GlobalFunc_9756(&(Local_3032[1 /*2*/]), 2, 1768.071f, 3293.448f, 40.2011f, 305.798f, 1, 0);
						}
						else
						{
							ENTITY::SET_ENTITY_COORDS(Local_3032[1 /*2*/], 1768.071f, 3293.448f, 40.2011f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(Local_3032[1 /*2*/], 305.798f);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3032[1 /*2*/]);
							ENTITY::FREEZE_ENTITY_POSITION(Local_3032[1 /*2*/], 0);
						}
					}
					func_8(12);
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_HELI_RETURN_TO_AIRSTRIP"))
					{
						AUDIO::START_AUDIO_SCENE("BS_1_HELI_RETURN_TO_AIRSTRIP");
					}
					if (GlobalFunc_5171() && HUD::DOES_BLIP_EXIST(Local_3261.f_5))
					{
						if (!iLocal_3520)
						{
							GlobalFunc_164("FH1_AIR2", 7500, 1);
							iLocal_3477 = 4;
							iLocal_3520 = 1;
						}
					}
					if (func_78(&Local_3261, 1754.607f, 3268.812f, 40.24541f, 15f, 15f, 2f, 1, func_196(), 0, 0, Local_3032[2 /*2*/], "", "", "", "", "", "FH1_HELI", "FH1_BKHELI", 0, 1, 1, -1) && GlobalFunc_644(Local_3032[2 /*2*/]))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						VEHICLE::BRING_VEHICLE_TO_HALT(Local_3032[2 /*2*/], 5f, 1, 0);
						if (GlobalFunc_2773(Local_3032[1 /*2*/]))
						{
							ENTITY::SET_ENTITY_COORDS(Local_3032[1 /*2*/], 1768.071f, 3293.448f, 40.2011f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(Local_3032[1 /*2*/], 305.798f);
						}
						MISC::CLEAR_AREA(1754.607f, 3268.812f, 40.24541f, 20f, 1, 0, 0, 0);
						TASK::TASK_LOOK_AT_COORD(func_129(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(func_129(), -3.3f, 3f, 0f), -1, 1040, 2);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_196());
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_196(), 0, 0);
						uLocal_3543 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_3543, Local_3032[2 /*2*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_3032[2 /*2*/], "seat_dside_r"));
						TASK::TASK_SYNCHRONIZED_SCENE(func_196(), uLocal_3543, "missheist_the_big_score_setup_1@heli_exit", "lester_exit_heli", 1000f, -1.5f, 4, 0, 1148846080, 0);
						CAM::DESTROY_ALL_CAMS(0);
						uLocal_3287 = CAM::CREATE_CAMERA(964613260, 1);
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_3287, uLocal_3543, "lester_exit_heli_CAM", "missheist_the_big_score_setup_1@heli_exit");
						CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
						RECORDING::_0x293220DA1B46CEBC(5f, 15f, 4);
						GlobalFunc_6685(0);
						HUD::DISPLAY_RADAR(0);
						HUD::DISPLAY_HUD(0);
						iLocal_3392 = 0;
						iLocal_3427 = MISC::GET_GAME_TIMER();
						GlobalFunc_4956();
						iLocal_3477 = 5;
						iLocal_3521 = 0;
						iLocal_5436++;
					}
				}
			}
			break;
		
		case 2:
			if (PLAYER::PLAYER_PED_ID() == func_129())
			{
				if (!Local_3356.f_20)
				{
					if (GlobalFunc_5171() && !iLocal_3521)
					{
						if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_FINT", 7, 0, 0, 0))
						{
							iLocal_3521 = 1;
						}
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3543) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3543) >= 1f)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_196(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(func_196(), 0f, 10f, 0f), 1f, 20000, 0.25f, 0, 40000f);
						TASK::TASK_LOOK_AT_ENTITY(func_129(), func_196(), 15000, 2064, 2);
						iLocal_3427 = MISC::GET_GAME_TIMER();
						iLocal_5436++;
					}
				}
			}
			else if (PLAYER::PLAYER_PED_ID() == func_130())
			{
				if (GlobalFunc_5171() && !iLocal_3521)
				{
					if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_FINM", 7, 0, 0, 0))
					{
						iLocal_3521 = 1;
					}
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(func_127(), 0))
				{
					PED::SET_PED_RESET_FLAG(func_127(), 60, 1);
					if ((MISC::GET_GAME_TIMER() - iLocal_3427) > 4000)
					{
						if (!iLocal_3432)
						{
							CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
							ENTITY::SET_ENTITY_COORDS(func_127(), 8.7834f, 540.8622f, 175.0277f, 1, 1, 0, 1);
							ENTITY::SET_ENTITY_HEADING(func_127(), 154.3967f);
							CAM::STOP_GAMEPLAY_HINT(0);
							iLocal_3432 = 1;
						}
						if ((MISC::GET_GAME_TIMER() - iLocal_3427) > 3500)
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						}
						if (TASK::GET_SCRIPT_TASK_STATUS(func_127(), 242628503) != 1)
						{
							PED::DELETE_PED(&(Local_3051[1 /*4*/]));
							HUD::DISPLAY_HUD(1);
							iLocal_5436++;
						}
					}
				}
				else
				{
					iLocal_3427 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		
		case 3:
			if (PLAYER::PLAYER_PED_ID() == func_130())
			{
				iLocal_5436++;
			}
			else if (PLAYER::PLAYER_PED_ID() == func_129())
			{
				if (!Local_3356.f_20)
				{
					if (!GlobalFunc_111())
					{
						iLocal_3435 = 1;
						CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
						HUD::DISPLAY_RADAR(1);
						HUD::DISPLAY_HUD(1);
						CAM::DESTROY_ALL_CAMS(0);
						if (GlobalFunc_2773(func_196()))
						{
							PED::DELETE_PED(&(Local_3051[3 /*4*/]));
						}
						iLocal_5436++;
					}
				}
			}
			break;
		
		case 4:
			if (PLAYER::PLAYER_PED_ID() == func_130())
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3032[0 /*2*/], 0))
				{
					AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_3032[0 /*2*/], 1);
				}
				GlobalFunc_5168(0, 6, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				func_3();
			}
			else if (PLAYER::PLAYER_PED_ID() == func_129())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				func_3();
			}
			break;
	}
	func_10();
}

void func_10()//Position - 0x108C
{
	if (!Local_3356.f_20)
	{
		if (PLAYER::PLAYER_PED_ID() == func_129())
		{
			switch (iLocal_3477)
			{
				case 0:
					switch (iLocal_3475)
					{
						case 0:
							if (iLocal_3505)
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && iLocal_3479 == 0)
								{
									if (GlobalFunc_10626(&uLocal_3096, "FH1AUD", &cLocal_3499, &cLocal_3493, 7, 0, 0))
									{
										iLocal_3523 = 0;
										StringCopy(&cLocal_3493, "", 24);
										StringCopy(&cLocal_3499, "", 24);
										iLocal_3505 = 0;
										iLocal_3475 = 2;
									}
								}
							}
							else if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && !func_21(12, 15))
							{
								iLocal_3523 = 0;
								iLocal_3519 = MISC::GET_GAME_TIMER();
								iLocal_3475 = 1;
							}
							break;
						
						case 1:
							if (PED::IS_PED_IN_ANY_VEHICLE(func_129(), 0))
							{
								if (PED::IS_PED_IN_VEHICLE(func_196(), PED::GET_VEHICLE_PED_IS_IN(func_129(), 0), 0))
								{
									if (((MISC::GET_GAME_TIMER() - iLocal_3519) > 3000 && GlobalFunc_5171()) && iLocal_3479 == 0)
									{
										if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_TFILL1", 7, 0, 0, 0))
										{
											iLocal_3475 = 2;
										}
									}
								}
							}
							break;
						
						case 2:
							if (iLocal_3479 == 0)
							{
								if (GlobalFunc_111())
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(func_129(), 0))
									{
										if (PED::IS_PED_IN_VEHICLE(func_196(), PED::GET_VEHICLE_PED_IS_IN(func_129(), 0), 0))
										{
											if (iLocal_3523)
											{
												GlobalFunc_619(0);
												iLocal_3523 = 0;
											}
										}
										else if (!iLocal_3523)
										{
											GlobalFunc_619(1);
											iLocal_3523 = 1;
										}
									}
									else if (!iLocal_3523)
									{
										GlobalFunc_619(1);
										iLocal_3523 = 1;
									}
								}
								else
								{
									iLocal_3475 = 3;
								}
							}
							break;
						
						case 3:
							StringCopy(&cLocal_3493, "", 24);
							StringCopy(&cLocal_3499, "", 24);
							iLocal_3505 = 0;
							iLocal_3477 = 1;
							iLocal_3475 = 0;
							iLocal_3519 = MISC::GET_GAME_TIMER();
							break;
					}
					break;
				
				case 1:
					switch (iLocal_3475)
					{
						case 0:
							if (iLocal_3505)
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && iLocal_3479 == 0)
								{
									if (GlobalFunc_10626(&uLocal_3096, "FH1AUD", &cLocal_3499, &cLocal_3493, 7, 0, 0))
									{
										iLocal_3523 = 0;
										StringCopy(&cLocal_3493, "", 24);
										StringCopy(&cLocal_3499, "", 24);
										iLocal_3505 = 0;
										iLocal_3475 = 2;
									}
								}
							}
							else if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && !GlobalFunc_111())
							{
								iLocal_3523 = 0;
								iLocal_3519 = MISC::GET_GAME_TIMER();
								iLocal_3475 = 1;
							}
							break;
						
						case 1:
							if (PED::IS_PED_IN_ANY_VEHICLE(func_129(), 0))
							{
								if (PED::IS_PED_IN_VEHICLE(func_196(), PED::GET_VEHICLE_PED_IS_IN(func_129(), 0), 0))
								{
									if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && iLocal_3479 == 0)
									{
										if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_TALK4", 7, 0, 0, 0))
										{
											iLocal_3475 = 2;
										}
									}
								}
							}
							break;
						
						case 2:
							if (iLocal_3479 == 0)
							{
								if (GlobalFunc_111())
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(func_129(), 0))
									{
										if (PED::IS_PED_IN_VEHICLE(func_196(), PED::GET_VEHICLE_PED_IS_IN(func_129(), 0), 0))
										{
											if (iLocal_3523)
											{
												GlobalFunc_619(0);
												iLocal_3523 = 0;
											}
										}
										else if (!iLocal_3523)
										{
											GlobalFunc_619(1);
											iLocal_3523 = 1;
										}
									}
									else if (!iLocal_3523)
									{
										GlobalFunc_619(1);
										iLocal_3523 = 1;
									}
								}
								else
								{
									iLocal_3475 = 3;
								}
							}
							break;
						
						case 3:
							StringCopy(&cLocal_3493, "", 24);
							StringCopy(&cLocal_3499, "", 24);
							iLocal_3505 = 0;
							iLocal_3477 = 3;
							iLocal_3475 = 0;
							iLocal_3519 = MISC::GET_GAME_TIMER();
							break;
					}
					break;
				
				case 2:
					switch (iLocal_3475)
					{
						case 0:
							if (iLocal_3505)
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && iLocal_3479 == 0)
								{
									if (GlobalFunc_10626(&uLocal_3096, "FH1AUD", &cLocal_3499, &cLocal_3493, 7, 0, 0))
									{
										iLocal_3523 = 0;
										StringCopy(&cLocal_3493, "", 24);
										StringCopy(&cLocal_3499, "", 24);
										iLocal_3505 = 0;
										iLocal_3475 = 2;
									}
								}
							}
							else if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								if (!func_21(14, 0) || Global_Mission_Fail_State.f_12[1] == 1)
								{
									iLocal_3523 = 0;
									iLocal_3519 = MISC::GET_GAME_TIMER();
									iLocal_3475 = 1;
								}
							}
							break;
						
						case 1:
							if (PED::IS_PED_IN_ANY_VEHICLE(func_129(), 0))
							{
								if (PED::IS_PED_IN_VEHICLE(func_196(), PED::GET_VEHICLE_PED_IS_IN(func_129(), 0), 0))
								{
									if (((MISC::GET_GAME_TIMER() - iLocal_3519) > 3000 && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && iLocal_3479 == 0)
									{
										if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_TALK4b", 7, 0, 0, 0))
										{
											iLocal_3475 = 2;
										}
									}
								}
							}
							break;
						
						case 2:
							if (iLocal_3479 == 0)
							{
								if (GlobalFunc_111())
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(func_129(), 0))
									{
										if (PED::IS_PED_IN_VEHICLE(func_196(), PED::GET_VEHICLE_PED_IS_IN(func_129(), 0), 0))
										{
											if (iLocal_3523)
											{
												GlobalFunc_619(0);
												iLocal_3523 = 0;
											}
										}
										else if (!iLocal_3523)
										{
											GlobalFunc_619(1);
											iLocal_3523 = 1;
										}
									}
									else if (!iLocal_3523)
									{
										GlobalFunc_619(1);
										iLocal_3523 = 1;
									}
								}
								else
								{
									iLocal_3475 = 3;
								}
							}
							break;
						
						case 3:
							StringCopy(&cLocal_3493, "", 24);
							StringCopy(&cLocal_3499, "", 24);
							iLocal_3505 = 0;
							iLocal_3477 = 3;
							iLocal_3475 = 0;
							iLocal_3519 = MISC::GET_GAME_TIMER();
							break;
					}
					break;
				
				case 3:
					switch (iLocal_3475)
					{
						case 0:
							if (iLocal_3505)
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && iLocal_3479 == 0)
								{
									if (GlobalFunc_10626(&uLocal_3096, "FH1AUD", &cLocal_3499, &cLocal_3493, 7, 0, 0))
									{
										iLocal_3523 = 0;
										StringCopy(&cLocal_3493, "", 24);
										StringCopy(&cLocal_3499, "", 24);
										iLocal_3505 = 0;
										iLocal_3475 = 2;
									}
								}
							}
							else if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								if (Global_Mission_Fail_State.f_12[1] == 1)
								{
									iLocal_3523 = 0;
									iLocal_3519 = MISC::GET_GAME_TIMER();
									iLocal_3475 = 1;
								}
							}
							break;
						
						case 1:
							if (ENTITY::DOES_ENTITY_EXIST(Local_3032[2 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(func_129(), Local_3032[2 /*2*/], 0))
								{
									if (PED::IS_PED_IN_VEHICLE(func_196(), PED::GET_VEHICLE_PED_IS_IN(func_129(), 0), 0))
									{
										if ((((MISC::GET_GAME_TIMER() - iLocal_3519) > 3000 && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && iLocal_3479 == 0) && iLocal_3470)
										{
											if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_FILL3", 7, 0, 0, 0))
											{
												iLocal_3475 = 2;
											}
										}
									}
								}
							}
							break;
						
						case 2:
							if (iLocal_3479 == 0)
							{
								if (GlobalFunc_111())
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(func_129(), 0))
									{
										if (PED::IS_PED_IN_VEHICLE(func_196(), PED::GET_VEHICLE_PED_IS_IN(func_129(), 0), 0))
										{
											if (iLocal_3523)
											{
												GlobalFunc_619(0);
												iLocal_3523 = 0;
											}
										}
										else if (!iLocal_3523)
										{
											GlobalFunc_619(1);
											iLocal_3523 = 1;
										}
									}
									else if (!iLocal_3523)
									{
										GlobalFunc_619(1);
										iLocal_3523 = 1;
									}
								}
								else
								{
									iLocal_3475 = 3;
								}
							}
							break;
						
						case 3:
							StringCopy(&cLocal_3493, "", 24);
							StringCopy(&cLocal_3499, "", 24);
							iLocal_3505 = 0;
							iLocal_3477 = 5;
							iLocal_3475 = 0;
							iLocal_3519 = MISC::GET_GAME_TIMER();
							break;
					}
					break;
				
				case 4:
					switch (iLocal_3475)
					{
						case 0:
							if (iLocal_3505)
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && iLocal_3479 == 0)
								{
									if (iLocal_3520)
									{
										if (GlobalFunc_10626(&uLocal_3096, "FH1AUD", &cLocal_3499, &cLocal_3493, 7, 0, 0))
										{
											iLocal_3523 = 0;
											StringCopy(&cLocal_3493, "", 24);
											StringCopy(&cLocal_3499, "", 24);
											iLocal_3505 = 0;
											iLocal_3475 = 2;
										}
									}
								}
							}
							else if (iLocal_5435 == 6 && iLocal_5436 >= 1)
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
								{
									iLocal_3523 = 0;
									iLocal_3519 = MISC::GET_GAME_TIMER();
									iLocal_3475 = 1;
								}
							}
							break;
						
						case 1:
							if (GlobalFunc_2773(Local_3032[2 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(func_129(), Local_3032[2 /*2*/], 0) && PED::IS_PED_IN_VEHICLE(func_196(), Local_3032[2 /*2*/], 0))
								{
									if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() && (MISC::GET_GAME_TIMER() - iLocal_3519) > 5000) && iLocal_3479 == 0)
									{
										if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_ENDT", 7, 0, 0, 0))
										{
											iLocal_3475 = 2;
										}
									}
								}
							}
							break;
						
						case 2:
							if (iLocal_3479 == 0)
							{
								if (GlobalFunc_111())
								{
									if (GlobalFunc_2773(Local_3032[2 /*2*/]))
									{
										if (PED::IS_PED_IN_VEHICLE(func_129(), Local_3032[2 /*2*/], 0) && PED::IS_PED_IN_VEHICLE(func_196(), Local_3032[2 /*2*/], 0))
										{
											if (iLocal_3523)
											{
												GlobalFunc_619(0);
												iLocal_3523 = 0;
											}
										}
										else if (!iLocal_3523)
										{
											GlobalFunc_619(1);
											iLocal_3523 = 1;
										}
									}
								}
								else
								{
									iLocal_3475 = 3;
								}
							}
							break;
						
						case 3:
							StringCopy(&cLocal_3493, "", 24);
							StringCopy(&cLocal_3499, "", 24);
							iLocal_3505 = 0;
							iLocal_3477 = 5;
							iLocal_3475 = 0;
							iLocal_3519 = MISC::GET_GAME_TIMER();
							break;
					}
					break;
				
				case 5:
					switch (iLocal_3475)
					{
						case 0:
							break;
					}
					break;
			}
		}
		else if (PLAYER::PLAYER_PED_ID() == func_130())
		{
			switch (iLocal_3478)
			{
				case 0:
					switch (iLocal_3474)
					{
						case 0:
							if (iLocal_3518)
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && iLocal_3479 == 0)
								{
									if (GlobalFunc_10626(&uLocal_3096, "FH1AUD", &Local_3512, &Local_3506, 7, 0, 0))
									{
										iLocal_3523 = 0;
										StringCopy(&Local_3506, "", 24);
										StringCopy(&Local_3512, "", 24);
										iLocal_3518 = 0;
										iLocal_3474 = 2;
									}
								}
							}
							else if ((iLocal_5435 == 0 && iLocal_5436 == 7) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								iLocal_3523 = 0;
								iLocal_3519 = MISC::GET_GAME_TIMER();
								iLocal_3474 = 1;
							}
							break;
						
						case 1:
							if (PED::IS_PED_IN_VEHICLE(func_130(), Local_3032[0 /*2*/], 0) && PED::IS_PED_IN_VEHICLE(func_127(), Local_3032[0 /*2*/], 0))
							{
								if ((((MISC::GET_GAME_TIMER() - iLocal_3519) > 4000 && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && iLocal_3479 == 0) && !CAM::DOES_CAM_EXIST(Local_7925.f_1))
								{
									if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_FILL4", 7, 0, 0, 0))
									{
										iLocal_3474 = 2;
									}
								}
							}
							break;
						
						case 2:
							if (iLocal_3479 == 0)
							{
								if (GlobalFunc_111())
								{
									if (PED::IS_PED_IN_VEHICLE(func_130(), Local_3032[0 /*2*/], 0) && PED::IS_PED_IN_VEHICLE(func_127(), Local_3032[0 /*2*/], 0))
									{
										if (iLocal_3523)
										{
											GlobalFunc_619(0);
											iLocal_3523 = 0;
										}
									}
									else if (!iLocal_3523)
									{
										GlobalFunc_619(1);
										iLocal_3523 = 1;
									}
								}
								else
								{
									iLocal_3474 = 3;
								}
							}
							break;
						
						case 3:
							StringCopy(&Local_3506, "", 24);
							StringCopy(&Local_3512, "", 24);
							iLocal_3518 = 0;
							iLocal_3478 = 1;
							iLocal_3474 = 0;
							iLocal_3519 = MISC::GET_GAME_TIMER();
							break;
					}
					break;
				
				case 1:
					switch (iLocal_3474)
					{
						case 0:
							if (iLocal_3518)
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && iLocal_3479 == 0)
								{
									if (GlobalFunc_10626(&uLocal_3096, "FH1AUD", &Local_3512, &Local_3506, 7, 0, 0))
									{
										iLocal_3523 = 0;
										StringCopy(&Local_3506, "", 24);
										StringCopy(&Local_3512, "", 24);
										iLocal_3518 = 0;
										iLocal_3474 = 2;
									}
								}
							}
							else if ((iLocal_5435 == 1 && iLocal_5436 == 4) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								iLocal_3523 = 0;
								iLocal_3519 = MISC::GET_GAME_TIMER();
								iLocal_3474 = 1;
							}
							break;
						
						case 1:
							if (PED::IS_PED_IN_VEHICLE(func_130(), Local_3032[0 /*2*/], 0) && PED::IS_PED_IN_VEHICLE(func_127(), Local_3032[0 /*2*/], 0))
							{
								if ((((MISC::GET_GAME_TIMER() - iLocal_3519) > 1000 && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && iLocal_3479 == 0) && !CAM::DOES_CAM_EXIST(Local_7925.f_1))
								{
									if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_FILL5", 7, 0, 0, 0))
									{
										iLocal_3474 = 2;
									}
								}
							}
							break;
						
						case 2:
							if (iLocal_3479 == 0)
							{
								if (GlobalFunc_111())
								{
									if (PED::IS_PED_IN_VEHICLE(func_130(), Local_3032[0 /*2*/], 0) && PED::IS_PED_IN_VEHICLE(func_127(), Local_3032[0 /*2*/], 0))
									{
										if (iLocal_3523)
										{
											GlobalFunc_619(0);
											iLocal_3523 = 0;
										}
									}
									else if (!iLocal_3523)
									{
										GlobalFunc_619(1);
										iLocal_3523 = 1;
									}
								}
								else
								{
									iLocal_3474 = 3;
								}
							}
							break;
						
						case 3:
							StringCopy(&Local_3506, "", 24);
							StringCopy(&Local_3512, "", 24);
							iLocal_3518 = 0;
							iLocal_3478 = 3;
							iLocal_3474 = 0;
							iLocal_3519 = MISC::GET_GAME_TIMER();
							break;
					}
					break;
				
				case 2:
					switch (iLocal_3474)
					{
						case 0:
							if (iLocal_3518)
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && iLocal_3479 == 0)
								{
									if (GlobalFunc_10626(&uLocal_3096, "FH1AUD", &Local_3512, &Local_3506, 7, 0, 0))
									{
										iLocal_3523 = 0;
										StringCopy(&Local_3506, "", 24);
										StringCopy(&Local_3512, "", 24);
										iLocal_3518 = 0;
										iLocal_3474 = 2;
									}
								}
							}
							else if (iLocal_5435 == 6 && iLocal_5436 >= 1)
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
								{
									iLocal_3523 = 0;
									iLocal_3519 = MISC::GET_GAME_TIMER();
									iLocal_3474 = 1;
								}
							}
							break;
						
						case 1:
							if (GlobalFunc_2773(Local_3032[0 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(func_130(), Local_3032[0 /*2*/], 0) && PED::IS_PED_IN_VEHICLE(func_127(), Local_3032[0 /*2*/], 0))
								{
									if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && iLocal_3479 == 0)
									{
										if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_ENDM", 7, 0, 0, 0))
										{
											iLocal_3474 = 2;
										}
									}
								}
							}
							break;
						
						case 2:
							if (iLocal_3479 == 0)
							{
								if (GlobalFunc_111())
								{
									if (GlobalFunc_2773(Local_3032[0 /*2*/]))
									{
										if (PED::IS_PED_IN_VEHICLE(func_130(), Local_3032[0 /*2*/], 0) && PED::IS_PED_IN_VEHICLE(func_127(), Local_3032[0 /*2*/], 0))
										{
											if (iLocal_3523)
											{
												GlobalFunc_619(0);
												iLocal_3523 = 0;
											}
										}
										else if (!iLocal_3523)
										{
											GlobalFunc_619(1);
											iLocal_3523 = 1;
										}
									}
								}
								else
								{
									iLocal_3474 = 3;
								}
							}
							break;
						
						case 3:
							StringCopy(&Local_3506, "", 24);
							StringCopy(&Local_3512, "", 24);
							iLocal_3518 = 0;
							iLocal_3478 = 3;
							iLocal_3474 = 0;
							iLocal_3519 = MISC::GET_GAME_TIMER();
							iLocal_3520 = 1;
							break;
					}
					break;
				
				case 3:
					switch (iLocal_3474)
					{
						case 0:
							break;
					}
					break;
				}
		}
		if (iLocal_5435 < 4)
		{
			switch (iLocal_3476)
			{
				case 0:
					if (iLocal_5435 == 0 && iLocal_5436 == 7)
					{
						if (iLocal_3479 == 0)
						{
							iLocal_3479 = 1;
						}
						if (iLocal_3479 == 3 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_TIMER", 7, 0, 0, 0))
							{
								func_198(0, 1, 0, 0, 0, 0);
								iLocal_3392 = 1;
								iLocal_3479 = 4;
								iLocal_3476 = 1;
							}
						}
					}
					break;
				
				case 1:
					iLocal_3476 = 2;
					break;
				
				case 2:
					if (!PED::IS_PED_INJURED(func_129()))
					{
						if (!func_21(13, 30) && func_21(13, 45))
						{
							if (iLocal_3479 == 0)
							{
								iLocal_3479 = 1;
							}
							if (iLocal_3479 == 3 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								if (PLAYER::PLAYER_PED_ID() == func_129())
								{
									if (ENTITY::DOES_ENTITY_EXIST(Local_3032[2 /*2*/]))
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3032[2 /*2*/], 0))
										{
											if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3032[2 /*2*/], 0))
											{
												if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_UPDATE_P", 7, 0, 0, 0))
												{
													iLocal_3479 = 4;
													iLocal_3476 = 3;
												}
											}
											else if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_UPDATE", 7, 0, 0, 0))
											{
												iLocal_3479 = 4;
												iLocal_3476 = 3;
											}
										}
									}
									else if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_UPDATE", 7, 0, 0, 0))
									{
										iLocal_3479 = 4;
										iLocal_3476 = 3;
									}
								}
								else if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_UPDATE_P", 7, 0, 0, 0))
								{
									iLocal_3479 = 4;
									iLocal_3476 = 3;
								}
							}
						}
					}
					break;
				
				case 3:
					iLocal_3476 = 4;
					break;
				
				case 4:
					if (!func_21(15, 0))
					{
						if (iLocal_3479 == 0)
						{
							iLocal_3479 = 1;
						}
						if (iLocal_3479 == 3 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							if (PLAYER::PLAYER_PED_ID() == func_129())
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3032[2 /*2*/], 0))
								{
									if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3032[2 /*2*/], 0))
									{
										if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_300_P", 7, 0, 0, 0))
										{
											iLocal_3479 = 4;
											iLocal_3476 = 5;
										}
									}
									else if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_300", 7, 0, 0, 0))
									{
										iLocal_3479 = 4;
										iLocal_3476 = 5;
									}
								}
								else if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_300", 7, 0, 0, 0))
								{
									iLocal_3479 = 4;
									iLocal_3476 = 5;
								}
							}
							else if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_300_P", 7, 0, 0, 0))
							{
								iLocal_3479 = 4;
								iLocal_3476 = 5;
							}
						}
					}
					break;
				}
			}
	}
	func_11();
}

void func_11()//Position - 0x2036
{
	switch (iLocal_3479)
	{
		case 0:
			break;
		
		case 1:
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				iLocal_3439 = GlobalFunc_8315();
				cLocal_3480 = { GlobalFunc_514() };
				cLocal_3486 = { GlobalFunc_560() };
				if (((!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_3480) && !MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_3486)) && !MISC::ARE_STRINGS_EQUAL(&cLocal_3480, "NULL")) && !MISC::ARE_STRINGS_EQUAL(&cLocal_3486, "NULL"))
				{
					GlobalFunc_4956();
					iLocal_3479 = 2;
				}
			}
			else
			{
				iLocal_3479 = 3;
			}
			break;
		
		case 2:
			if (GlobalFunc_5171())
			{
				iLocal_3479 = 3;
			}
			break;
		
		case 3:
			break;
		
		case 4:
			if ((iLocal_3439 == GlobalFunc_8315() && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (((!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_3480) && !MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_3486)) && !MISC::ARE_STRINGS_EQUAL(&cLocal_3480, "NULL")) && !MISC::ARE_STRINGS_EQUAL(&cLocal_3486, "NULL"))
				{
					if (GlobalFunc_5171() && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_3492) > 2000)
						{
							if (GlobalFunc_10626(&uLocal_3096, "FH1AUD", &cLocal_3486, &cLocal_3480, 7, 0, 0))
							{
								StringCopy(&cLocal_3480, "", 24);
								StringCopy(&cLocal_3486, "", 24);
								iLocal_3479 = 5;
							}
						}
					}
					else
					{
						iLocal_3492 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					StringCopy(&cLocal_3480, "", 24);
					StringCopy(&cLocal_3486, "", 24);
					iLocal_3479 = 0;
				}
			}
			else if (((MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_3480) || MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_3486)) || MISC::ARE_STRINGS_EQUAL(&cLocal_3480, "NULL")) || MISC::ARE_STRINGS_EQUAL(&cLocal_3486, "NULL"))
			{
				StringCopy(&cLocal_3480, "", 24);
				StringCopy(&cLocal_3486, "", 24);
				iLocal_3479 = 0;
			}
			break;
		
		case 5:
			if (!GlobalFunc_111())
			{
				iLocal_3479 = 0;
			}
			break;
	}
}










int func_21(int iParam0, int iParam1)//Position - 0x2476
{
	if (CLOCK::GET_CLOCK_HOURS() < iParam0)
	{
		return 1;
	}
	else if (CLOCK::GET_CLOCK_HOURS() == iParam0)
	{
		if (CLOCK::GET_CLOCK_MINUTES() < iParam1 || CLOCK::GET_CLOCK_MINUTES() == iParam1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (CLOCK::GET_CLOCK_HOURS() > iParam0)
	{
		return 0;
	}
	return 0;
}

























































bool func_78(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, char* sParam17, char* sParam18, bool bParam19, bool bParam20, bool bParam21, int iParam22)//Position - 0x7875
{
	return GlobalFunc_8572(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 5, iParam8, iParam9, iParam10, iParam11, sParam12, sParam13, sParam14, sParam15, sParam16, sParam17, bParam19, bParam20, sParam18, 0, 0, bParam21, iParam22, 0, 0, 0, 1, 1065353216);
}

















































int func_127()//Position - 0xA3EE
{
	return Local_3051[1 /*4*/];
}


int func_129()//Position - 0xA447
{
	return Local_3051[2 /*4*/];
}

int func_130()//Position - 0xA455
{
	return Local_3051[0 /*4*/];
}


































































int func_196()//Position - 0x10AF1
{
	return Local_3051[3 /*4*/];
}


void func_198(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x10B2A
{
	if (ENTITY::DOES_ENTITY_EXIST(func_130()))
	{
		uLocal_3312[0] = Local_3051[0 /*4*/];
		GlobalFunc_729(&uLocal_3312, 0, iParam0);
		GlobalFunc_2518(&uLocal_3312, 0, iParam3);
	}
	else
	{
		GlobalFunc_729(&uLocal_3312, 0, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_127()))
	{
		uLocal_3312[1] = Local_3051[1 /*4*/];
		GlobalFunc_729(&uLocal_3312, 1, iParam1);
		GlobalFunc_2518(&uLocal_3312, 1, iParam4);
	}
	else
	{
		GlobalFunc_729(&uLocal_3312, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_129()))
	{
		uLocal_3312[2] = Local_3051[2 /*4*/];
		GlobalFunc_729(&uLocal_3312, 2, iParam2);
		GlobalFunc_2518(&uLocal_3312, 2, iParam5);
	}
	else
	{
		GlobalFunc_729(&uLocal_3312, 2, 1);
	}
}




void func_202()//Position - 0x10C1E
{
	switch (iLocal_5436)
	{
		case 0:
			SYSTEM::SETTIMERA(0);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AH1_HOLE_RESTART");
				CAM::DO_SCREEN_FADE_IN(800);
			}
			CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
			GlobalFunc_4935();
			GlobalFunc_Checkpoint1(5, "Stage 5: Construction hole", 0, 0, 0, 1);
			iLocal_9234 = 0;
			iLocal_9233 = 0;
			iLocal_3521 = 0;
			iLocal_3532 = 0;
			iLocal_3533 = 0;
			iLocal_3467 = 0;
			StringCopy(&cLocal_3480, "", 24);
			StringCopy(&cLocal_3486, "", 24);
			iLocal_3479 = 0;
			uLocal_3291 = STREAMING::STREAMVOL_CREATE_SPHERE(12.29f, -638.08f, 15.09f, 20f, 12, 127);
			iLocal_3427 = MISC::GET_GAME_TIMER();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3032[2 /*2*/], 0))
			{
				VEHICLE::SET_FORCE_HD_VEHICLE(Local_3032[2 /*2*/], 1);
			}
			iLocal_3292 = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), 25.3048f, -635.7917f, 30.30575f, 1, 1, 0);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3293))
			{
				iLocal_3293 = OBJECT::CREATE_OBJECT(joaat("prop_pap_camera_01"), ENTITY::GET_ENTITY_COORDS(func_196(), 1), 1, 1, 0);
				if (GlobalFunc_2773(Local_3032[2 /*2*/]))
				{
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_3293, Local_3032[2 /*2*/], 0);
				}
				iLocal_3464 = 0;
			}
			GlobalFunc_5174(&uLocal_3547, joaat("prop_ld_test_01"));
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_3292, 1);
			PED::ADD_SCENARIO_BLOCKING_AREA(71.25517f, -613.3061f, 10.67887f, 2.50692f, -654.6599f, 39.92294f, 0, 1, 1, 1);
			MISC::CLEAR_AREA(Local_3017, 30f, 1, 0, 0, 0);
			CAM::DESTROY_ALL_CAMS(0);
			iLocal_3420 = 0;
			iLocal_3455 = 0;
			iLocal_3459 = 0;
			iLocal_3423 = 0;
			iLocal_3527 = 1;
			iLocal_3424 = 0;
			iLocal_3425 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(func_129()))
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(func_129()))
				{
					ENTITY::SET_ENTITY_VISIBLE(func_129(), 1);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(func_196()))
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(func_196()))
				{
					ENTITY::SET_ENTITY_VISIBLE(func_196(), 1);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_3032[2 /*2*/]))
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(Local_3032[2 /*2*/]))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_3032[2 /*2*/], 1);
				}
			}
			CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
			HUD::DISPLAY_RADAR(1);
			HUD::DISPLAY_HUD(1);
			AUDIO::STOP_SOUND(iLocal_3466);
			AUDIO::STOP_SOUND(iLocal_3465);
			func_8(0);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_SEARCH_FOR_ENTRANCE"))
			{
				AUDIO::START_AUDIO_SCENE("BS_1_SEARCH_FOR_ENTRANCE");
			}
			RECORDING::_0x293220DA1B46CEBC(0f, 10f, 4);
			iLocal_5436++;
			break;
		
		case 1:
			if ((MISC::GET_GAME_TIMER() - iLocal_3427) > 500)
			{
				if (!GlobalFunc_5172(&Local_3261, 1))
				{
					if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_INFO", 7, 0, 0, 0))
					{
						iLocal_3525 = 0;
						GlobalFunc_574(644, 0);
						iLocal_5436++;
					}
				}
			}
			break;
		
		case 2:
			if (!iLocal_9233)
			{
				if (!GlobalFunc_5172(&Local_3261, 2))
				{
					GlobalFunc_164("FH1_HOLE", 7500, 1);
					GlobalFunc_574(644, 0);
					iLocal_9233 = 1;
				}
			}
			else
			{
				func_224();
			}
			if (!iLocal_9234)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3032[2 /*2*/], 0))
				{
					if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_3032[2 /*2*/], 16.89025f, -659.9014f, 29.97287f, 50.35122f, -569.7599f, 87.37669f, 66.75f, 0, 1, 0) && PED::IS_PED_IN_VEHICLE(func_129(), Local_3032[2 /*2*/], 0)) && !TASK::GET_IS_TASK_ACTIVE(func_129(), 2))
					{
						GlobalFunc_164("FH1_HOVERN", 7500, 1);
						iLocal_9234 = 1;
						if (!iLocal_9233)
						{
							RECORDING::_0x293220DA1B46CEBC(4f, 6f, 4);
							GlobalFunc_574(644, 0);
							iLocal_9233 = 1;
						}
					}
				}
			}
			else if (!iLocal_3424)
			{
				if ((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_3032[2 /*2*/], 16.89025f, -659.9014f, 29.97287f, 50.35122f, -569.7599f, 87.37669f, 66.75f, 0, 1, 0) && PED::IS_PED_IN_VEHICLE(func_129(), Local_3032[2 /*2*/], 0)) && !TASK::GET_IS_TASK_ACTIVE(func_129(), 2))
				{
					GlobalFunc_159("FH1_CSHELP2", -1);
					iLocal_3424 = 1;
				}
			}
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_3032[2 /*2*/], 17.52435f, -655.9549f, 30.76982f, 34.11578f, -609.8895f, 54.92456f, 48f, 0, 1, 0) && PED::IS_PED_IN_VEHICLE(func_129(), Local_3032[2 /*2*/], 0)) && !TASK::GET_IS_TASK_ACTIVE(func_129(), 2))
			{
				GlobalFunc_571(0, -1);
				if (iLocal_3525 == 3)
				{
					func_218(6, 0);
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_3292);
					if (HUD::DOES_BLIP_EXIST(uLocal_3286))
					{
						HUD::REMOVE_BLIP(&uLocal_3286);
					}
					iLocal_3427 = MISC::GET_GAME_TIMER();
					iLocal_5436++;
				}
			}
			break;
		
		case 3:
			if (iLocal_3455 == 0)
			{
				if (iLocal_3425 == 0)
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						GlobalFunc_159("FH1_FILM", -1);
						iLocal_3425 = 1;
					}
				}
			}
			if (!GlobalFunc_111())
			{
				iLocal_3423 = 0;
				iLocal_3521 = 0;
				iLocal_3419 = MISC::GET_GAME_TIMER();
				iLocal_5436++;
			}
			else if (iLocal_3455)
			{
				if (GlobalFunc_74("FH1_FILM"))
				{
					HUD::CLEAR_HELP(1);
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				if (!PED::IS_PED_INJURED(func_129()))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(func_129(), -1273030092) != 1)
					{
						TASK::TASK_HELI_MISSION(func_129(), Local_3032[2 /*2*/], 0, 0, ENTITY::GET_ENTITY_COORDS(Local_3032[2 /*2*/], 1), 4, 0f, -1f, -1f, -1, -1, -1f, 0);
					}
				}
			}
			else
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				if (!PED::IS_PED_INJURED(func_129()))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(func_129(), -1273030092) == 1)
					{
						TASK::CLEAR_PED_TASKS(func_129());
					}
				}
			}
			break;
		
		case 4:
			if (iLocal_3455 == 0)
			{
				if (iLocal_3425 == 0)
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						GlobalFunc_159("FH1_FILM", -1);
						iLocal_3425 = 1;
					}
				}
			}
			else if (GlobalFunc_74("FH1_FILM"))
			{
				HUD::CLEAR_HELP(1);
			}
			if (func_215())
			{
				RECORDING::_0x293220DA1B46CEBC(7f, 7f, 4);
				if (iLocal_3455)
				{
					GlobalFunc_702(0, 1, 1);
				}
				iLocal_3455 = 0;
				if (!ENTITY::IS_ENTITY_DEAD(func_129()))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(func_129()))
					{
						ENTITY::SET_ENTITY_VISIBLE(func_129(), 1);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(func_196()))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(func_196()))
					{
						ENTITY::SET_ENTITY_VISIBLE(func_196(), 1);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_3032[2 /*2*/]))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(Local_3032[2 /*2*/]))
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_3032[2 /*2*/], 1);
					}
				}
				CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				HUD::DISPLAY_RADAR(1);
				HUD::DISPLAY_HUD(1);
				AUDIO::STOP_SOUND(iLocal_3466);
				AUDIO::STOP_SOUND(iLocal_3465);
				if (!PED::IS_PED_INJURED(func_129()))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(func_129(), -1273030092) == 1)
					{
						TASK::CLEAR_PED_TASKS(func_129());
					}
				}
				AUDIO::TRIGGER_MUSIC_EVENT("FH1_END");
				iLocal_5436++;
			}
			break;
		
		case 5:
			if (iLocal_3455 == 0)
			{
				if (iLocal_3425 == 0)
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						GlobalFunc_159("FH1_FILM", -1);
						iLocal_3425 = 1;
					}
				}
			}
			else if (GlobalFunc_74("FH1_FILM"))
			{
				HUD::CLEAR_HELP(1);
			}
			if (!GlobalFunc_111())
			{
				GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_3453);
				CAM::DESTROY_ALL_CAMS(0);
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
				HUD::CLEAR_HELP(0);
				AUDIO::STOP_SOUND(iLocal_3466);
				AUDIO::STOP_SOUND(iLocal_3465);
				if (GlobalFunc_2234(func_196(), Local_3032[2 /*2*/]) == 2 && !GlobalFunc_709(func_196(), 355471868, 1))
				{
					TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(func_196(), Local_3032[2 /*2*/]);
				}
				RECORDING::_0x293220DA1B46CEBC(2f, 7f, 4);
				iLocal_5436 = 0;
				func_211(6);
			}
			break;
	}
	if (iLocal_5436 < 5)
	{
		func_204();
		if (GlobalFunc_2773(func_196()))
		{
			func_203(Local_3017);
		}
	}
	if (iLocal_5436 < 4)
	{
		if (PED::IS_PED_IN_VEHICLE(func_129(), Local_3032[2 /*2*/], 0) && PED::IS_PED_IN_VEHICLE(func_196(), Local_3032[2 /*2*/], 0))
		{
			if (iLocal_3523 && GlobalFunc_111())
			{
				GlobalFunc_619(0);
				iLocal_3523 = 0;
			}
		}
		else if (!iLocal_3523)
		{
			GlobalFunc_619(1);
			iLocal_3523 = 1;
		}
	}
}

void func_203(struct<3> Param0)//Position - 0x113A6
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(func_196(), Param0) };
	switch (iLocal_3463)
	{
		case 0:
			if ((!GlobalFunc_709(func_196(), 355471868, 1) && !ENTITY::IS_ENTITY_PLAYING_ANIM(func_196(), "missheist_the_big_score_setup_1@camera@idle_a", "idle_a", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(func_196(), "missheist_the_big_score_setup_1@camera@idle_a", "idle_c", 3))
			{
				if (GlobalFunc_2234(func_196(), Local_3032[2 /*2*/]) == 1)
				{
					TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(func_196(), Local_3032[2 /*2*/]);
					iLocal_3463 = 2;
				}
				else if (GlobalFunc_2234(func_196(), Local_3032[2 /*2*/]) == 2)
				{
					TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(func_196(), Local_3032[2 /*2*/]);
					iLocal_3463 = 1;
				}
			}
			break;
		
		case 1:
			if (GlobalFunc_2234(func_196(), Local_3032[2 /*2*/]) == 1 && !GlobalFunc_709(func_196(), 355471868, 1))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(func_196(), "missheist_the_big_score_setup_1@camera@idle_a", "idle_a", 3))
				{
					TASK::TASK_PLAY_ANIM(func_196(), "missheist_the_big_score_setup_1@camera@idle_a", "idle_a", 1.5f, -1.5f, -1, 41, 0, 0, 0, 0);
				}
				if (Var0.x >= 1.2f)
				{
					TASK::CLEAR_PED_TASKS(func_196());
					iLocal_3463 = 0;
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_2234(func_196(), Local_3032[2 /*2*/]) == 2 && !GlobalFunc_709(func_196(), 355471868, 1))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(func_196(), "missheist_the_big_score_setup_1@camera@idle_a", "idle_c", 3))
				{
					TASK::TASK_PLAY_ANIM(func_196(), "missheist_the_big_score_setup_1@camera@idle_a", "idle_c", 1.5f, -1.5f, -1, 57, 0, 0, 0, 0);
				}
				if (Var0.x <= -1.2f)
				{
					TASK::CLEAR_PED_TASKS(func_196());
					iLocal_3463 = 0;
				}
			}
			break;
	}
}

void func_204()//Position - 0x11554
{
	bool bVar0;
	
	if (iLocal_5435 == 4 && iLocal_5436 > 11)
	{
		if (CAM::DOES_CAM_EXIST(uLocal_3287))
		{
			CAM::DESTROY_CAM(uLocal_3287, 0);
		}
		if (CAM::DOES_CAM_EXIST(uLocal_3288))
		{
			CAM::DESTROY_CAM(uLocal_3288, 0);
		}
		if (CAM::DOES_CAM_EXIST(uLocal_3289))
		{
			CAM::DESTROY_CAM(uLocal_3289, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(func_129()))
		{
			if (!ENTITY::IS_ENTITY_VISIBLE(func_129()))
			{
				ENTITY::SET_ENTITY_VISIBLE(func_129(), 1);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(func_196()))
		{
			if (!ENTITY::IS_ENTITY_VISIBLE(func_196()))
			{
				ENTITY::SET_ENTITY_VISIBLE(func_196(), 1);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_3032[2 /*2*/]))
		{
			if (!ENTITY::IS_ENTITY_VISIBLE(Local_3032[2 /*2*/]))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_3032[2 /*2*/], 1);
			}
		}
		CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
		HUD::DISPLAY_RADAR(1);
		HUD::DISPLAY_HUD(1);
		AUDIO::STOP_SOUND(iLocal_3466);
		AUDIO::STOP_SOUND(iLocal_3465);
	}
	else if ((iLocal_5435 == 4 && iLocal_5436 > 3) && func_210())
	{
		switch (iLocal_3457)
		{
			case 0:
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
				uLocal_3287 = CAM::CREATE_CAMERA(26379945, 0);
				CAM::ATTACH_CAM_TO_ENTITY(uLocal_3287, Local_3032[2 /*2*/], 0f, 0f, 0f, 1);
				CAM::POINT_CAM_AT_ENTITY(uLocal_3287, Local_3032[3 /*2*/], 0f, -12.5f, 0f, 1);
				CAM::SET_CAM_FOV(uLocal_3287, 35f);
				CAM::SHAKE_CAM(uLocal_3287, "hand_shake", 1f);
				CAM::SET_CAM_ACTIVE(uLocal_3287, 1);
				uLocal_3288 = CAM::CREATE_CAMERA(26379945, 0);
				CAM::ATTACH_CAM_TO_ENTITY(uLocal_3288, Local_3032[2 /*2*/], 0f, 0f, 0f, 1);
				CAM::SHAKE_CAM(uLocal_3288, "hand_shake", 1f);
				uLocal_3289 = CAM::CREATE_CAMERA(26379945, 0);
				CAM::ATTACH_CAM_TO_ENTITY(uLocal_3289, Local_3032[2 /*2*/], 0f, 0f, 0f, 1);
				CAM::SHAKE_CAM(uLocal_3289, "hand_shake", 1f);
				iLocal_3457++;
				break;
			
			case 1:
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[3 /*2*/]))
				{
					if ((((fLocal_3545 > 30000f && fLocal_3545 < 31000f) || (fLocal_3545 > 85000f && fLocal_3545 < 86000f)) || (fLocal_3545 > 133000f && fLocal_3545 < 134000f)) || (fLocal_3545 > 175000f && fLocal_3545 < 176000f))
					{
						CAM::POINT_CAM_AT_ENTITY(uLocal_3288, Local_3032[4 /*2*/], 0f, 0f, 0f, 1);
						CAM::SET_CAM_FOV(uLocal_3288, 45f);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3288, uLocal_3287, 3000, 1, 1);
						iLocal_3457++;
					}
				}
				break;
			
			case 2:
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[3 /*2*/]))
				{
					if ((((fLocal_3545 > 34000f && fLocal_3545 < 35000f) || (fLocal_3545 > 90000f && fLocal_3545 < 91000f)) || (fLocal_3545 > 138000f && fLocal_3545 < 139000f)) || (fLocal_3545 > 180000f && fLocal_3545 < 181000f))
					{
						CAM::POINT_CAM_AT_ENTITY(uLocal_3287, Local_3032[3 /*2*/], -2f, -5f, 0f, 1);
						CAM::SET_CAM_FOV(uLocal_3287, 42f);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3287, uLocal_3288, 4000, 1, 1);
						iLocal_3457++;
					}
				}
				break;
			
			case 3:
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[3 /*2*/]))
				{
					if ((((fLocal_3545 > 40000f && fLocal_3545 < 41000f) || (fLocal_3545 > 99000f && fLocal_3545 < 100000f)) || (fLocal_3545 > 144000f && fLocal_3545 < 145000f)) || (fLocal_3545 > 186000f && fLocal_3545 < 187000f))
					{
						CAM::POINT_CAM_AT_ENTITY(uLocal_3288, Local_3032[4 /*2*/], 2f, -7f, 3f, 1);
						CAM::SET_CAM_FOV(uLocal_3288, 32f);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3288, uLocal_3287, 2000, 1, 1);
						iLocal_3457++;
					}
				}
				break;
			
			case 4:
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[3 /*2*/]))
				{
					if ((((fLocal_3545 > 48000f && fLocal_3545 < 49000f) || (fLocal_3545 > 105000f && fLocal_3545 < 106000f)) || (fLocal_3545 > 148000f && fLocal_3545 < 149000f)) || (fLocal_3545 > 190000f && fLocal_3545 < 191000f))
					{
						CAM::POINT_CAM_AT_ENTITY(uLocal_3287, Local_3032[3 /*2*/], 5f, 3f, 1f, 1);
						CAM::SET_CAM_FOV(uLocal_3287, 35f);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3287, uLocal_3288, 3000, 1, 1);
						iLocal_3457++;
					}
				}
				break;
			
			case 5:
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[3 /*2*/]))
				{
					if ((((fLocal_3545 > 52000f && fLocal_3545 < 53000f) || (fLocal_3545 > 114000f && fLocal_3545 < 1150000f)) || (fLocal_3545 > 153000f && fLocal_3545 < 154000f)) || (fLocal_3545 > 194000f && fLocal_3545 < 195000f))
					{
						CAM::POINT_CAM_AT_ENTITY(uLocal_3288, Local_3032[3 /*2*/], 1f, -12.5f, 2f, 1);
						CAM::SET_CAM_FOV(uLocal_3288, 40f);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3288, uLocal_3287, 2000, 1, 1);
						iLocal_3457++;
					}
				}
				break;
			
			case 6:
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[3 /*2*/]))
				{
					if ((((fLocal_3545 > 60000f && fLocal_3545 < 61000f) || (fLocal_3545 > 122000f && fLocal_3545 < 123000f)) || (fLocal_3545 > 157000f && fLocal_3545 < 158000f)) || (fLocal_3545 > 197500f && fLocal_3545 < 199000f))
					{
						CAM::POINT_CAM_AT_ENTITY(uLocal_3287, Local_3032[3 /*2*/], -3f, -12.5f, 0f, 1);
						CAM::SET_CAM_FOV(uLocal_3287, 43f);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3287, uLocal_3288, 2000, 1, 1);
						iLocal_3457++;
					}
				}
				break;
			
			case 7:
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[3 /*2*/]))
				{
					if (((fLocal_3545 > 72000f && fLocal_3545 < 73000f) || (fLocal_3545 > 124000f && fLocal_3545 < 125000f)) || (fLocal_3545 > 160000f && fLocal_3545 < 161000f))
					{
						iLocal_3457 = 1;
					}
				}
				break;
			
			case 8:
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[3 /*2*/]))
				{
					if (fLocal_3545 > 75800f && fLocal_3545 < 80000f)
					{
						CAM::POINT_CAM_AT_COORD(uLocal_3289, 522.8374f, -1233.521f, 34.0472f);
						CAM::SET_CAM_FOV(uLocal_3289, 45f);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3289, uLocal_3287, 2000, 1, 1);
						iLocal_3457 = 9;
					}
				}
				break;
			
			case 9:
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[3 /*2*/]))
				{
					if (fLocal_3545 > 80000f && fLocal_3545 < 82000f)
					{
						CAM::POINT_CAM_AT_ENTITY(uLocal_3287, Local_3032[3 /*2*/], 0f, 0f, 0f, 1);
						CAM::SET_CAM_FOV(uLocal_3287, 40f);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3287, uLocal_3289, 2000, 1, 1);
						iLocal_3457 = 1;
					}
				}
				break;
			
			case 10:
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[3 /*2*/]))
				{
					if (fLocal_3545 > 125600f && fLocal_3545 < 127000f)
					{
						CAM::POINT_CAM_AT_COORD(uLocal_3289, 408.4599f, -985.9272f, 29.09093f);
						CAM::SET_CAM_FOV(uLocal_3289, 45f);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3289, uLocal_3287, 3000, 1, 1);
						iLocal_3457 = 11;
					}
				}
				break;
			
			case 11:
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[3 /*2*/]))
				{
					if (fLocal_3545 > 130000f && fLocal_3545 < 131000f)
					{
						CAM::POINT_CAM_AT_ENTITY(uLocal_3287, Local_3032[3 /*2*/], 0f, 0f, 0f, 1);
						CAM::SET_CAM_FOV(uLocal_3287, 35f);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3287, uLocal_3289, 3000, 1, 1);
						iLocal_3457 = 1;
					}
				}
				break;
			
			case 12:
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[3 /*2*/]))
				{
					if (fLocal_3545 > 160000f && fLocal_3545 < 162000f)
					{
						CAM::POINT_CAM_AT_COORD(uLocal_3289, 79.28018f, -559.1141f, 31.16214f);
						CAM::SET_CAM_FOV(uLocal_3289, 45f);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3289, uLocal_3287, 4000, 1, 1);
						iLocal_3457 = 13;
					}
				}
				break;
			
			case 13:
				if (!bLocal_3531)
				{
					if (CAM::IS_CAM_ACTIVE(uLocal_3289) && !CAM::IS_CAM_INTERPOLATING(uLocal_3289))
					{
						CAM::POINT_CAM_AT_ENTITY(uLocal_3287, Local_3032[3 /*2*/], 0f, 0f, 0f, 1);
						CAM::SET_CAM_FOV(uLocal_3287, 35f);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3287, uLocal_3289, 2000, 1, 1);
						iLocal_3457 = 1;
					}
				}
				break;
			}
	}
	if (iLocal_5435 == 5 && func_210())
	{
		if (iLocal_5436 < 5)
		{
			switch (iLocal_3420)
			{
				case 0:
					CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
					uLocal_3287 = CAM::CREATE_CAMERA(26379945, 0);
					CAM::ATTACH_CAM_TO_ENTITY(uLocal_3287, Local_3032[2 /*2*/], 0f, 0f, 0f, 1);
					CAM::POINT_CAM_AT_COORD(uLocal_3287, Local_3017);
					CAM::SET_CAM_FOV(uLocal_3287, 60f);
					CAM::SHAKE_CAM(uLocal_3287, "hand_shake", 1f);
					CAM::SET_CAM_ACTIVE(uLocal_3287, 1);
					uLocal_3288 = CAM::CREATE_CAMERA(26379945, 0);
					CAM::ATTACH_CAM_TO_ENTITY(uLocal_3288, Local_3032[2 /*2*/], 0f, 0f, 0f, 1);
					CAM::SHAKE_CAM(uLocal_3288, "hand_shake", 1f);
					iLocal_3456 = MISC::GET_GAME_TIMER();
					iLocal_3420++;
					break;
				
				case 1:
					if ((MISC::GET_GAME_TIMER() - iLocal_3456) > 2000)
					{
						if (CAM::DOES_CAM_EXIST(uLocal_3287) && CAM::DOES_CAM_EXIST(uLocal_3288))
						{
							CAM::POINT_CAM_AT_COORD(uLocal_3288, 24.51892f, -634.0269f, 15.08808f);
							CAM::SET_CAM_FOV(uLocal_3288, 55f);
							CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3288, uLocal_3287, 3000, 1, 1);
							iLocal_3456 = MISC::GET_GAME_TIMER();
							iLocal_3420++;
						}
					}
					break;
				
				case 2:
					if ((MISC::GET_GAME_TIMER() - iLocal_3456) > 4000)
					{
						if (CAM::DOES_CAM_EXIST(uLocal_3287) && CAM::DOES_CAM_EXIST(uLocal_3288))
						{
							CAM::POINT_CAM_AT_COORD(uLocal_3287, 15.07439f, -641.7313f, 15.08808f);
							CAM::SET_CAM_FOV(uLocal_3287, 56f);
							CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3287, uLocal_3288, 5000, 1, 1);
							iLocal_3456 = MISC::GET_GAME_TIMER();
							iLocal_3420++;
						}
					}
					break;
				
				case 3:
					if ((MISC::GET_GAME_TIMER() - iLocal_3456) > 8000)
					{
						if (CAM::DOES_CAM_EXIST(uLocal_3287) && CAM::DOES_CAM_EXIST(uLocal_3288))
						{
							CAM::POINT_CAM_AT_COORD(uLocal_3288, 17.36475f, -645.5696f, 15.08808f);
							CAM::SET_CAM_FOV(uLocal_3288, 54f);
							CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3288, uLocal_3287, 4000, 1, 1);
							iLocal_3456 = MISC::GET_GAME_TIMER();
							iLocal_3420++;
						}
					}
					break;
				
				case 4:
					if ((MISC::GET_GAME_TIMER() - iLocal_3456) > 4500)
					{
						if (CAM::DOES_CAM_EXIST(uLocal_3287) && CAM::DOES_CAM_EXIST(uLocal_3288))
						{
							CAM::POINT_CAM_AT_COORD(uLocal_3287, 17.36475f, -645.5696f, 15.08808f);
							CAM::SET_CAM_FOV(uLocal_3287, 52f);
							CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3287, uLocal_3288, 1000, 1, 1);
							iLocal_3456 = MISC::GET_GAME_TIMER();
							iLocal_3420++;
						}
					}
					break;
				
				case 5:
					if ((MISC::GET_GAME_TIMER() - iLocal_3456) > 5000)
					{
						if (CAM::DOES_CAM_EXIST(uLocal_3287) && CAM::DOES_CAM_EXIST(uLocal_3288))
						{
							CAM::POINT_CAM_AT_COORD(uLocal_3288, 19.90802f, -641.7471f, 15.08808f);
							CAM::SET_CAM_FOV(uLocal_3288, 55f);
							CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3288, uLocal_3287, 1500, 1, 1);
							iLocal_3456 = MISC::GET_GAME_TIMER();
							iLocal_3420++;
						}
					}
					break;
				
				case 6:
					if ((MISC::GET_GAME_TIMER() - iLocal_3456) > 3000)
					{
						if (CAM::DOES_CAM_EXIST(uLocal_3287) && CAM::DOES_CAM_EXIST(uLocal_3288))
						{
							CAM::POINT_CAM_AT_COORD(uLocal_3287, 17.18857f, -635.1161f, 15.08808f);
							CAM::SET_CAM_FOV(uLocal_3287, 59f);
							CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3287, uLocal_3288, 3000, 1, 1);
							iLocal_3456 = MISC::GET_GAME_TIMER();
							iLocal_3420++;
						}
					}
					break;
				
				case 7:
					if ((MISC::GET_GAME_TIMER() - iLocal_3456) > 5000)
					{
						if (CAM::DOES_CAM_EXIST(uLocal_3287) && CAM::DOES_CAM_EXIST(uLocal_3288))
						{
							CAM::POINT_CAM_AT_COORD(uLocal_3288, 21.8701f, -628.4955f, 15.08808f);
							CAM::SET_CAM_FOV(uLocal_3288, 60f);
							CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3288, uLocal_3287, 4000, 1, 1);
							iLocal_3456 = MISC::GET_GAME_TIMER();
							iLocal_3420++;
						}
					}
					break;
				
				case 8:
					if ((MISC::GET_GAME_TIMER() - iLocal_3456) > 6000)
					{
						if (CAM::DOES_CAM_EXIST(uLocal_3287) && CAM::DOES_CAM_EXIST(uLocal_3288))
						{
							CAM::POINT_CAM_AT_COORD(uLocal_3287, 24.27826f, -644.1752f, 15.08808f);
							CAM::SET_CAM_FOV(uLocal_3287, 57f);
							CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3287, uLocal_3288, 2000, 1, 1);
							iLocal_3456 = MISC::GET_GAME_TIMER();
							iLocal_3420++;
						}
					}
					break;
				
				case 9:
					if ((MISC::GET_GAME_TIMER() - iLocal_3456) > 6000)
					{
						iLocal_3456 = MISC::GET_GAME_TIMER();
						iLocal_3420 = 1;
					}
					break;
				
				case 10:
					break;
			}
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(func_129()))
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(func_129()))
				{
					ENTITY::SET_ENTITY_VISIBLE(func_129(), 1);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(func_196()))
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(func_196()))
				{
					ENTITY::SET_ENTITY_VISIBLE(func_196(), 1);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_3032[2 /*2*/]))
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(Local_3032[2 /*2*/]))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_3032[2 /*2*/], 1);
				}
			}
			CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
			HUD::DISPLAY_RADAR(1);
			HUD::DISPLAY_HUD(1);
			CAM::DESTROY_ALL_CAMS(0);
			AUDIO::STOP_SOUND(iLocal_3466);
			AUDIO::STOP_SOUND(iLocal_3465);
		}
	}
	if (iLocal_3455)
	{
		RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
		STREAMING::_0xBED8CA5FF5E04113(1.7f, 4.7f, 1f, 1.8f);
		MISC::SET_INSTANCE_PRIORITY_HINT(4);
		GlobalFunc_163();
		GlobalFunc_187();
		if (iLocal_5435 == 4 && !bLocal_3531)
		{
			func_8(8);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_TRUCKS_HINT_CAM"))
			{
				AUDIO::START_AUDIO_SCENE("BS_1_TRUCKS_HINT_CAM");
			}
		}
		else if (iLocal_5435 == 5)
		{
			func_8(11);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_VIEW_RECORDING"))
			{
				AUDIO::START_AUDIO_SCENE("BS_1_VIEW_RECORDING");
			}
		}
		if (iLocal_5435 == 4)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_3461) > 1500)
			{
				GlobalFunc_2294(Local_3032[2 /*2*/], ENTITY::GET_ENTITY_COORDS(Local_3032[3 /*2*/], 1));
			}
		}
	}
	else
	{
		iLocal_3461 = MISC::GET_GAME_TIMER();
		if (iLocal_5435 == 4 && !bLocal_3531)
		{
			func_8(7);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_TRUCKS_SPOTTED"))
			{
				AUDIO::START_AUDIO_SCENE("BS_1_TRUCKS_SPOTTED");
			}
		}
		else if (iLocal_5435 == 5)
		{
			func_8(10);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_SEARCH_FOR_ENTRANCE"))
			{
				AUDIO::START_AUDIO_SCENE("BS_1_SEARCH_FOR_ENTRANCE");
			}
		}
	}
	if (CAM::DOES_CAM_EXIST(uLocal_3287) && CAM::DOES_CAM_EXIST(uLocal_3288))
	{
		bVar0 = iLocal_3455;
		switch (iLocal_3459)
		{
			case 0:
				iLocal_3455 = 0;
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3032[2 /*2*/], 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3032[2 /*2*/], 0))
					{
						if (PAD::IS_CONTROL_PRESSED(2, 80))
						{
							iLocal_3458 = MISC::GET_GAME_TIMER();
							iLocal_3455 = 1;
							iLocal_3459 = 1;
						}
					}
				}
				if (bVar0 != iLocal_3455)
				{
					GlobalFunc_702(iLocal_3455, 1, 1);
				}
				break;
			
			case 1:
				if ((MISC::GET_GAME_TIMER() - iLocal_3458) <= 500)
				{
					if (!PAD::IS_CONTROL_PRESSED(2, 80))
					{
						iLocal_3458 = MISC::GET_GAME_TIMER();
						iLocal_3459 = 3;
					}
				}
				else
				{
					iLocal_3459 = 2;
				}
				break;
			
			case 2:
				if (!PAD::IS_CONTROL_PRESSED(2, 80))
				{
					iLocal_3459 = 0;
				}
				break;
			
			case 3:
				if ((MISC::GET_GAME_TIMER() - iLocal_3458) > 500)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3032[2 /*2*/], 0))
					{
						if (PAD::IS_CONTROL_JUST_RELEASED(2, 80) || !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3032[2 /*2*/], 0))
						{
							iLocal_3459 = 0;
						}
					}
				}
				break;
		}
		if (iLocal_3455)
		{
			if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CAM::IS_CAM_ACTIVE(uLocal_3288) || CAM::IS_CAM_ACTIVE(uLocal_3287))
				{
					ENTITY::SET_ENTITY_VISIBLE(func_129(), 0);
					ENTITY::SET_ENTITY_VISIBLE(func_196(), 0);
					ENTITY::SET_ENTITY_VISIBLE(Local_3032[2 /*2*/], 0);
					CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
					HUD::DISPLAY_RADAR(0);
					HUD::DISPLAY_HUD(0);
					if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						HUD::CLEAR_HELP(1);
					}
					func_205();
					if (CAM::DOES_CAM_EXIST(CAM::GET_RENDERING_CAM()))
					{
						if (CAM::GET_CAM_FOV(CAM::GET_RENDERING_CAM()) != fLocal_3460)
						{
							AUDIO::PLAY_SOUND_FRONTEND(iLocal_3466, "Camera_Zoom", "BIG_SCORE_SETUP_SOUNDS", 1);
						}
						else if (CAM::GET_CAM_FOV(CAM::GET_RENDERING_CAM()) == fLocal_3460)
						{
							AUDIO::STOP_SOUND(iLocal_3466);
						}
						fLocal_3460 = CAM::GET_CAM_FOV(CAM::GET_RENDERING_CAM());
					}
				}
			}
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(func_129()))
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(func_129()))
				{
					ENTITY::SET_ENTITY_VISIBLE(func_129(), 1);
					GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(func_196()))
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(func_196()))
				{
					ENTITY::SET_ENTITY_VISIBLE(func_196(), 1);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_3032[2 /*2*/]))
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(Local_3032[2 /*2*/]))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_3032[2 /*2*/], 1);
				}
			}
			CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
			HUD::DISPLAY_RADAR(1);
			HUD::DISPLAY_HUD(1);
			AUDIO::STOP_SOUND(iLocal_3466);
			AUDIO::STOP_SOUND(iLocal_3465);
		}
	}
}

void func_205()//Position - 0x12675
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_3453, "SET_TIME");
	if (CLOCK::GET_CLOCK_HOURS() >= 0 && CLOCK::GET_CLOCK_HOURS() <= 12)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(CLOCK::GET_CLOCK_HOURS());
	}
	else
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT((CLOCK::GET_CLOCK_HOURS() - 12));
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(CLOCK::GET_CLOCK_MINUTES());
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	if (CLOCK::GET_CLOCK_HOURS() >= 0 && CLOCK::GET_CLOCK_HOURS() < 12)
	{
		GlobalFunc_726("LSH_TIMEAM");
	}
	else
	{
		GlobalFunc_726("LSH_TIMEPM");
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_3453, 255, 255, 255, 0, 0);
	GRAPHICS::SET_TIMECYCLE_MODIFIER("scanline_cam_cheap");
	PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	if (AUDIO::HAS_SOUND_FINISHED(iLocal_3465))
	{
		AUDIO::PLAY_SOUND_FRONTEND(iLocal_3465, "Camera_Hum", "BIG_SCORE_SETUP_SOUNDS", 1);
	}
}





int func_210()//Position - 0x127B3
{
	switch (iLocal_3454)
	{
		case 0:
			uLocal_3453 = unk_0x67D02A194A2FC2BD("SECURITY_CAM");
			iLocal_3454++;
			break;
		
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_3453))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_3453, "SET_LAYOUT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_3453, "SET_LOCATION");
				GlobalFunc_726("FH1_REC");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				iLocal_3454++;
				return 1;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_211(int iParam0)//Position - 0x12839
{
	if (iLocal_5434 == 0)
	{
		iLocal_5437 = iParam0;
		iLocal_5434 = 1;
		return 1;
	}
	return 0;
}




int func_215()//Position - 0x1293C
{
	if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_3032[2 /*2*/], 30.8506f, -616.7436f, 30f, 19.54452f, -648.7594f, 48f, 24f, 0, 1, 0) && PED::IS_PED_IN_VEHICLE(func_129(), Local_3032[2 /*2*/], 0)) && !TASK::GET_IS_TASK_ACTIVE(func_129(), 2))
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_3286))
		{
			HUD::REMOVE_BLIP(&uLocal_3286);
		}
		iLocal_3521 = 0;
		if ((!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && (MISC::GET_GAME_TIMER() - iLocal_3419) > 3000) && func_216())
		{
			if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_HOLE2", 9, 0, 0, 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(func_129()))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(func_129()))
					{
						ENTITY::SET_ENTITY_VISIBLE(func_129(), 1);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(func_196()))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(func_196()))
					{
						ENTITY::SET_ENTITY_VISIBLE(func_196(), 1);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_3032[2 /*2*/]))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(Local_3032[2 /*2*/]))
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_3032[2 /*2*/], 1);
					}
				}
				CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
				HUD::DISPLAY_RADAR(1);
				HUD::DISPLAY_HUD(1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				AUDIO::STOP_SOUND(iLocal_3466);
				AUDIO::STOP_SOUND(iLocal_3465);
				return 1;
			}
		}
	}
	else
	{
		if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && !iLocal_3521)
		{
			if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_HOLEBK", 7, 0, 0, 0))
			{
				iLocal_3521 = 1;
			}
		}
		if (!HUD::DOES_BLIP_EXIST(uLocal_3286))
		{
			uLocal_3286 = GlobalFunc_5104(25.33051f, -637.6835f, 15.08808f, 0);
		}
		iLocal_3419 = MISC::GET_GAME_TIMER();
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		if (!PED::IS_PED_INJURED(func_129()))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(func_129(), -1273030092) == 1)
			{
				TASK::CLEAR_PED_TASKS(func_129());
			}
		}
	}
	if (iLocal_3455)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		if (!PED::IS_PED_INJURED(func_129()))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(func_129(), -1273030092) != 1)
			{
				TASK::TASK_HELI_MISSION(func_129(), Local_3032[2 /*2*/], 0, 0, ENTITY::GET_ENTITY_COORDS(Local_3032[2 /*2*/], 1), 4, 0.01f, -1f, -1f, -1, -1, -1f, 0);
			}
		}
	}
	else
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		if (!PED::IS_PED_INJURED(func_129()))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(func_129(), -1273030092) == 1)
			{
				TASK::CLEAR_PED_TASKS(func_129());
			}
		}
	}
	return 0;
}

int func_216()//Position - 0x12B94
{
	switch (iLocal_3423)
	{
		case 0:
			if (PED::IS_PED_IN_VEHICLE(func_129(), Local_3032[2 /*2*/], 0) && PED::IS_PED_IN_VEHICLE(func_196(), Local_3032[2 /*2*/], 0))
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && (MISC::GET_GAME_TIMER() - iLocal_3419) > 1000)
				{
					if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_HOLECAM", 7, 0, 0, 0))
					{
						iLocal_3419 = MISC::GET_GAME_TIMER();
						iLocal_3423++;
					}
				}
			}
			break;
		
		case 1:
			if (PED::IS_PED_IN_VEHICLE(func_129(), Local_3032[2 /*2*/], 0) && PED::IS_PED_IN_VEHICLE(func_196(), Local_3032[2 /*2*/], 0))
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && (MISC::GET_GAME_TIMER() - iLocal_3419) > 3000)
				{
					if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_HOLECAM", 7, 0, 0, 0))
					{
						iLocal_3419 = MISC::GET_GAME_TIMER();
						iLocal_3423++;
					}
				}
			}
			break;
		
		case 2:
			if (PED::IS_PED_IN_VEHICLE(func_129(), Local_3032[2 /*2*/], 0) && PED::IS_PED_IN_VEHICLE(func_196(), Local_3032[2 /*2*/], 0))
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && (MISC::GET_GAME_TIMER() - iLocal_3419) > 1000)
				{
					if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_HOLECAM", 7, 0, 0, 0))
					{
						iLocal_3419 = MISC::GET_GAME_TIMER();
						iLocal_3423++;
					}
				}
			}
			break;
		
		case 3:
			if (PED::IS_PED_IN_VEHICLE(func_129(), Local_3032[2 /*2*/], 0) && PED::IS_PED_IN_VEHICLE(func_196(), Local_3032[2 /*2*/], 0))
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && (MISC::GET_GAME_TIMER() - iLocal_3419) > 2500)
				{
					if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_HOLECAM", 7, 0, 0, 0))
					{
						iLocal_3419 = MISC::GET_GAME_TIMER();
						iLocal_3423++;
					}
				}
			}
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}


void func_218(int iParam0, bool bParam1)//Position - 0x12D79
{
	switch (iParam0)
	{
		case 0:
			GlobalFunc_718(&uLocal_3547, joaat("frogger2"));
			break;
		
		case 1:
			GlobalFunc_719(&uLocal_3547, "missbigscore1guard_wait_rifle");
			GlobalFunc_718(&uLocal_3547, joaat("frogger2"));
			GlobalFunc_746(&uLocal_3547, 1, "FH1RECMIKE");
			GlobalFunc_746(&uLocal_3547, 2, "FH1RECMIKE");
			GlobalFunc_746(&uLocal_3547, 3, "FH1REC");
			GlobalFunc_746(&uLocal_3547, 4, "FH1REC");
			GlobalFunc_719(&uLocal_3547, cLocal_9223);
			GlobalFunc_719(&uLocal_3547, cLocal_9222);
			GlobalFunc_719(&uLocal_3547, cLocal_9224);
			GlobalFunc_719(&uLocal_3547, "shake_cam_all@");
			break;
		
		case 2:
		case 3:
			if (bParam1)
			{
				GlobalFunc_718(&uLocal_3547, joaat("frogger2"));
				GlobalFunc_719(&uLocal_3547, "missbigscore1guard_wait_rifle");
				GlobalFunc_746(&uLocal_3547, 3, "FH1REC");
				GlobalFunc_746(&uLocal_3547, 4, "FH1REC");
				GlobalFunc_719(&uLocal_3547, cLocal_9223);
				GlobalFunc_719(&uLocal_3547, cLocal_9222);
				GlobalFunc_719(&uLocal_3547, cLocal_9224);
				GlobalFunc_719(&uLocal_3547, "shake_cam_all@");
			}
			CUTSCENE::REQUEST_CUTSCENE("bss_1_mcs_2", 8);
			STREAMING::_0xF8155A7F03DDFC8E(2);
			break;
		
		case 4:
			if (bParam1)
			{
				GlobalFunc_718(&uLocal_3547, joaat("frogger2"));
				GlobalFunc_719(&uLocal_3547, "missbigscore1guard_wait_rifle");
			}
			GlobalFunc_718(&uLocal_3547, joaat("s_m_m_armoured_01"));
			GlobalFunc_718(&uLocal_3547, joaat("stockade"));
			GlobalFunc_718(&uLocal_3547, joaat("prop_pap_camera_01"));
			GlobalFunc_746(&uLocal_3547, 1, "FH1UBER");
			GlobalFunc_719(&uLocal_3547, "missheist_the_big_score_setup_1@camera@idle_a");
			break;
		
		case 5:
			if (bParam1)
			{
				GlobalFunc_718(&uLocal_3547, joaat("frogger2"));
				GlobalFunc_719(&uLocal_3547, "missbigscore1guard_wait_rifle");
				GlobalFunc_719(&uLocal_3547, "missheist_the_big_score_setup_1@camera@idle_a");
				GlobalFunc_718(&uLocal_3547, joaat("prop_pap_camera_01"));
			}
			GlobalFunc_718(&uLocal_3547, joaat("prop_ld_test_01"));
			break;
		
		case 6:
			if (bParam1)
			{
				GlobalFunc_718(&uLocal_3547, joaat("frogger2"));
				GlobalFunc_719(&uLocal_3547, "missbigscore1guard_wait_rifle");
			}
			GlobalFunc_719(&uLocal_3547, "missheist_the_big_score_setup_1@heli_exit");
			GlobalFunc_746(&uLocal_3547, 5, "FH1REC");
			GlobalFunc_746(&uLocal_3547, 3, "FH1RECMIKE");
			break;
		
		case 7:
			GlobalFunc_718(&uLocal_3547, joaat("frogger2"));
			break;
	}
}






void func_224()//Position - 0x132CF
{
	switch (iLocal_3525)
	{
		case 0:
			if (GlobalFunc_5171() && PED::IS_PED_IN_VEHICLE(func_129(), Local_3032[2 /*2*/], 0))
			{
				bLocal_3526 = false;
				iLocal_3525 = 1;
			}
			break;
		
		case 1:
			if (!iLocal_3533)
			{
				if ((SYSTEM::TIMERA() > 90000 && iLocal_5436 > 0) && iLocal_5436 < 3)
				{
					if (!iLocal_3521)
					{
						if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_TIMEH", 9, 0, 0, 0))
						{
							iLocal_3521 = 1;
						}
					}
					if (!HUD::DOES_BLIP_EXIST(uLocal_3286) && !GlobalFunc_111())
					{
						uLocal_3286 = GlobalFunc_5104(Local_3017, 0);
					}
				}
				if (!iLocal_3532 && MISC::GET_DISTANCE_BETWEEN_COORDS(73.15453f, -374.8748f, 38.92091f, ENTITY::GET_ENTITY_COORDS(func_129(), 1), 1) < 130f)
				{
					if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_WRCH", 9, 0, 0, 0))
					{
						iLocal_3532 = 1;
					}
				}
				if (bLocal_3526)
				{
					iLocal_3421 = 800;
				}
				else
				{
					iLocal_3421 = 2000;
				}
				if ((GlobalFunc_742(Local_3017, 2f, 200f) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_3292)) || MISC::GET_DISTANCE_BETWEEN_COORDS(Local_3017, ENTITY::GET_ENTITY_COORDS(func_129(), 1), 1) < 50f)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_3419) > iLocal_3421)
					{
						if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_HOLE1", 9, 0, 0, 0))
						{
							iLocal_3533 = 1;
							if (!HUD::DOES_BLIP_EXIST(uLocal_3286))
							{
								uLocal_3286 = GlobalFunc_5104(Local_3017, 0);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3292))
							{
								OBJECT::DELETE_OBJECT(&iLocal_3292);
							}
							iLocal_3528 = 1;
							iLocal_3525 = 2;
						}
					}
				}
				else
				{
					iLocal_3419 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		
		case 2:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_3032[2 /*2*/], 30.8506f, -616.7436f, 30f, 19.54452f, -648.7594f, 48f, 20f, 0, 1, 0))
			{
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_FINDH", 9, 0, 0, 0))
					{
						GlobalFunc_571(0, -1);
						iLocal_3525 = 3;
					}
				}
				else
				{
					GlobalFunc_4956();
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_3422) > 30000)
			{
				if (iLocal_3528)
				{
					if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_ABOVE", 9, 0, 0, 0))
					{
						iLocal_3528 = 0;
						iLocal_3422 = MISC::GET_GAME_TIMER();
					}
				}
				else if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_HOLEV", 9, 0, 0, 0))
				{
					iLocal_3528 = 1;
					iLocal_3422 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		
		case 3:
			break;
	}
}






void func_230()//Position - 0x13675
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<3> Var9;
	float fVar12;
	float fVar13;
	float fVar14;
	struct<3> Var15;
	struct<3> Var18;
	
	switch (iLocal_5436)
	{
		case 0:
			iLocal_9227 = 0;
			iLocal_9228 = 0;
			iLocal_9229 = 0;
			iLocal_9230 = 0;
			iLocal_9231 = 0;
			GlobalFunc_Checkpoint1(4, "Stage 4: Follow truck", 0, 0, 0, 1);
			GlobalFunc_173(&uLocal_3096, 0, func_129(), "TREVOR", 0, 1);
			GlobalFunc_173(&uLocal_3096, 3, func_196(), "LESTER", 0, 1);
			GlobalFunc_5175(&uLocal_3547, "missbigscore1guard_wait_rifle");
			VEHICLE::REMOVE_VEHICLE_RECORDING(3, "FH1REC");
			VEHICLE::REMOVE_VEHICLE_RECORDING(4, "FH1REC");
			VEHICLE::REMOVE_VEHICLE_RECORDING(2, "FH1RECMIKE");
			GlobalFunc_131(&(Local_3032[1 /*2*/]));
			STREAMING::REMOVE_PTFX_ASSET();
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bodhi2"));
			func_329(0);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_3032[3 /*2*/], 1);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_3032[3 /*2*/], 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3051[6 /*4*/], 1);
			PATHFIND::SET_ROADS_IN_AREA(1184.578f, -1801.748f, 25f, 780.501f, -1454.51f, 37f, 0, 1);
			PATHFIND::SET_ROADS_IN_AREA(859.1412f, -1563.117f, 24f, 242.7897f, -829.4163f, 33f, 0, 1);
			PATHFIND::SET_ROADS_IN_AREA(535.7115f, -552.7345f, 24f, 35.41522f, -1156.012f, 33f, 0, 1);
			PATHFIND::SET_ROADS_IN_AREA(-159.2718f, -539.104f, 28f, 416.9244f, -832.9946f, 41.5f, 0, 1);
			uLocal_3411 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(824.8984f, -1748.843f, 28.48285f, 29f, 0f, 0);
			uLocal_3412 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(796.6042f, -1435.003f, 26.20493f, 23.8f, 0f, 0);
			uLocal_3413 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(541.3582f, -1431.704f, 28.34233f, 21f, 0f, 0);
			uLocal_3414 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(499.5806f, -1132.154f, 28.45514f, 18f, 0f, 0);
			uLocal_3415 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(398.2404f, -1048.069f, 28.44339f, 22f, 0f, 0);
			uLocal_3416 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(403.3734f, -955.1171f, 28.44834f, 20f, 0f, 0);
			uLocal_3417 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(406.0438f, -853.2869f, 28.33914f, 25f, 0f, 0);
			uLocal_3418 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(354.6448f, -667.0586f, 28.33901f, 27f, 0f, 0);
			iLocal_3469 = 1;
			iLocal_3407 = 0;
			fLocal_3546 = 1f;
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
			STREAMING::SET_PED_POPULATION_BUDGET(1);
			CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
			iLocal_3455 = 0;
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3293))
			{
				iLocal_3293 = OBJECT::CREATE_OBJECT(joaat("prop_pap_camera_01"), ENTITY::GET_ENTITY_COORDS(func_196(), 1), 1, 1, 0);
				if (GlobalFunc_2773(Local_3032[2 /*2*/]))
				{
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_3293, Local_3032[2 /*2*/], 0);
				}
				iLocal_3464 = 0;
			}
			if (!ENTITY::IS_ENTITY_DEAD(func_129()))
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(func_129()))
				{
					ENTITY::SET_ENTITY_VISIBLE(func_129(), 1);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(func_196()))
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(func_196()))
				{
					ENTITY::SET_ENTITY_VISIBLE(func_196(), 1);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_3032[2 /*2*/]))
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(Local_3032[2 /*2*/]))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_3032[2 /*2*/], 1);
				}
			}
			CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
			RECORDING::_0x293220DA1B46CEBC(0f, 5f, 4);
			iLocal_3454 = 0;
			iLocal_3433 = 0;
			iLocal_3459 = 0;
			iLocal_5436++;
			break;
		
		case 1:
			if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[3 /*2*/]) && GlobalFunc_2773(Local_3032[3 /*2*/])) && GlobalFunc_2773(Local_3032[4 /*2*/]))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_3032[3 /*2*/], "BS_1_TRUCKS_Group", 0);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_3032[4 /*2*/], "BS_1_TRUCKS_Group", 0);
				if (!VEHICLE::IS_VEHICLE_HIGH_DETAIL(Local_3032[3 /*2*/]) && !VEHICLE::IS_VEHICLE_HIGH_DETAIL(Local_3032[4 /*2*/]))
				{
					VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Local_3032[3 /*2*/]);
					VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Local_3032[4 /*2*/]);
				}
				GlobalFunc_5174(&uLocal_3547, joaat("stockade"));
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				}
				uLocal_3287 = CAM::CREATE_CAMERA(26379945, 0);
				CAM::ATTACH_CAM_TO_ENTITY(uLocal_3287, Local_3032[2 /*2*/], -6.32f, 15f, 6f, 0);
				CAM::POINT_CAM_AT_ENTITY(uLocal_3287, Local_3032[3 /*2*/], 0f, -15f, 0f, 1);
				CAM::SET_CAM_ACTIVE(uLocal_3287, 1);
				if (bLocal_3403)
				{
					CAM::SET_CAM_FOV(uLocal_3287, 31f);
					CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					ENTITY::SET_ENTITY_VELOCITY(Local_3032[2 /*2*/], 0f, -50f, 0f);
					TASK::TASK_HELI_CHASE(func_129(), Local_3032[3 /*2*/], 0f, 0f, 80f);
					iLocal_3408 = 4000;
				}
				else
				{
					CAM::SET_CAM_FOV(uLocal_3287, 27f);
					CAM::RENDER_SCRIPT_CAMS(true, 1, 4000, 0, 0, 0);
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_3032[3 /*2*/], 0f, 0f, 45f) };
					TASK::TASK_HELI_MISSION(func_129(), Local_3032[2 /*2*/], 0, 0, Var1, 4, 35f, -1f, -1f, -1, -1, -1f, 0);
					iLocal_3408 = 5200;
				}
				iLocal_3427 = MISC::GET_GAME_TIMER();
				HUD::DISPLAY_RADAR(0);
				HUD::DISPLAY_HUD(0);
				AUDIO::TRIGGER_MUSIC_EVENT("FH1_TRUCKS");
				iLocal_3521 = 0;
				iLocal_9189 = 0;
				iLocal_5436++;
				GlobalFunc_6685(0);
				if (GlobalFunc_111())
				{
					GlobalFunc_4935();
				}
			}
			break;
		
		case 2:
			if (!iLocal_3521 && !GlobalFunc_111())
			{
				if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_GOTCON", 6, 0, 0, 0))
				{
					func_8(0);
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_TRUCKS_SPOTTED"))
					{
						AUDIO::START_AUDIO_SCENE("BS_1_TRUCKS_SPOTTED");
					}
					iLocal_3521 = 1;
				}
			}
			if (((MISC::GET_GAME_TIMER() - iLocal_3427) > (iLocal_3408 - 300) && !iLocal_9189) && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				iLocal_9189 = 1;
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_3427) > iLocal_3408)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				TASK::CLEAR_PED_TASKS(func_129());
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::RENDER_SCRIPT_CAMS(false, 1, 4000, 0, 0, 0);
				HUD::DISPLAY_RADAR(1);
				HUD::DISPLAY_HUD(1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				iLocal_3457 = 0;
				iLocal_3427 = MISC::GET_GAME_TIMER();
				iLocal_5436++;
			}
			else
			{
				STREAMING::_0x472397322E92A856();
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(2f);
				STREAMING::_0xBED8CA5FF5E04113(1.7f, 4.7f, 1f, 1.8f);
			}
			break;
		
		case 3:
			CAM::_0x59424BD75174C9B1();
			if ((MISC::GET_GAME_TIMER() - iLocal_3427) > 4000)
			{
				if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_ROUTE", 6, 0, 0, 0))
				{
					GlobalFunc_159("FH1_FILM", -1);
					GlobalFunc_5174(&uLocal_3547, joaat("stockade"));
					GlobalFunc_718(&uLocal_3547, joaat("police3"));
					iLocal_5436++;
				}
			}
			break;
		
		case 4:
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[3 /*2*/]))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3032[3 /*2*/]) > 20500f)
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_FILL", 6, 0, 0, 0))
						{
							Local_3032[7 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("police3"), 407.8519f, -984.231f, 28.2662f, 230.4461f, 1, 1);
							Local_3032[8 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("police3"), 408.2209f, -997.6844f, 28.2664f, 229.8704f, 1, 1);
							GlobalFunc_5174(&uLocal_3547, joaat("police3"));
							iLocal_5436++;
						}
					}
					else
					{
						GlobalFunc_4935();
					}
				}
			}
			break;
		
		case 5:
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[3 /*2*/]))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3032[3 /*2*/]) > 69700f)
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_FILL2", 6, 0, 0, 0))
						{
							iLocal_3457 = 8;
							iLocal_5436++;
						}
					}
					else
					{
						GlobalFunc_4935();
					}
				}
			}
			break;
		
		case 6:
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3032[3 /*2*/]) > 118000f)
			{
				GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_CHATTER", 6, 0, 0, 0);
				iLocal_3295 = INTERIOR::GET_INTERIOR_AT_COORDS(224.4949f, -608.8183f, 27.8671f);
				if (INTERIOR::IS_VALID_INTERIOR(iLocal_3295))
				{
					INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_3295);
				}
				GlobalFunc_131(&(Local_3032[7 /*2*/]));
				GlobalFunc_131(&(Local_3032[8 /*2*/]));
				iLocal_5436++;
			}
			break;
		
		case 7:
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[3 /*2*/]))
			{
				if (fLocal_3545 > 124000f && fLocal_3545 < 125000f)
				{
					iLocal_3457 = 10;
				}
			}
			if (ENTITY::IS_ENTITY_AT_COORD(Local_3051[6 /*4*/], 292.5266f, -643.8066f, 28.3005f, 20f, 20f, 20f, 0, 1, 0))
			{
				RECORDING::_0x293220DA1B46CEBC(4f, 6f, 4);
				GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_Tunnel", 9, 0, 0, 0);
				bLocal_3531 = true;
				iLocal_3457 = 12;
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					func_328(&bLocal_3020, 0, 0);
					CAM::SET_GAMEPLAY_COORD_HINT(79.28018f, -559.1141f, 31.16214f, -1, 2000, 2000, 0);
				}
				func_8(0);
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_TRUCKS_ENTER_TUNNEL"))
				{
					AUDIO::START_AUDIO_SCENE("BS_1_TRUCKS_ENTER_TUNNEL");
				}
				ENTITY::SET_ENTITY_COORDS(Local_3032[0 /*2*/], Local_3007, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_3032[0 /*2*/], fLocal_3010);
				CUTSCENE::REMOVE_CUTSCENE();
				iLocal_5436++;
			}
			break;
		
		case 8:
			if (ENTITY::IS_ENTITY_AT_COORD(Local_3051[6 /*4*/], 89.9054f, -563.3521f, 30.6528f, 20f, 20f, 20f, 0, 1, 0))
			{
				RECORDING::_0x293220DA1B46CEBC(4f, 6f, 4);
				bLocal_3531 = false;
				CUTSCENE::REQUEST_CUTSCENE("BSS_1_MCS_3", 8);
				if (iLocal_3295 != 0)
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_3295);
				}
				iLocal_3297 = INTERIOR::GET_INTERIOR_AT_COORDS(-73.4359f, -680.0825f, 32.7495f);
				if (INTERIOR::IS_VALID_INTERIOR(iLocal_3297))
				{
					INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_3297);
				}
				func_8(0);
				if (iLocal_3455)
				{
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_TRUCKS_HINT_CAM"))
					{
						AUDIO::START_AUDIO_SCENE("BS_1_TRUCKS_HINT_CAM");
					}
				}
				else if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_TRUCKS_SPOTTED"))
				{
					AUDIO::START_AUDIO_SCENE("BS_1_TRUCKS_SPOTTED");
				}
				iLocal_3521 = 0;
				iLocal_5436++;
			}
			break;
		
		case 9:
			ENTITY::CREATE_FORCED_OBJECT(-84.3858f, -670.8411f, 35.1694f, 5f, joaat("prop_bollard_02a"), 1);
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[3 /*2*/]))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3032[3 /*2*/]) > 185500f)
				{
					if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_SECCHECK", 9, 0, 0, 0))
					{
						RECORDING::_0x293220DA1B46CEBC(4f, 6f, 4);
						iLocal_5436++;
					}
				}
			}
			break;
		
		case 10:
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[3 /*2*/]))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3032[3 /*2*/]) > 198000f)
				{
					iLocal_3455 = 0;
					TASK::CLEAR_PED_SECONDARY_TASK(func_196());
					if (!ENTITY::IS_ENTITY_DEAD(func_129()))
					{
						if (!ENTITY::IS_ENTITY_VISIBLE(func_129()))
						{
							ENTITY::SET_ENTITY_VISIBLE(func_129(), 1);
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(func_196()))
					{
						if (!ENTITY::IS_ENTITY_VISIBLE(func_196()))
						{
							ENTITY::SET_ENTITY_VISIBLE(func_196(), 1);
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_3032[2 /*2*/]))
					{
						if (!ENTITY::IS_ENTITY_VISIBLE(Local_3032[2 /*2*/]))
						{
							ENTITY::SET_ENTITY_VISIBLE(Local_3032[2 /*2*/], 1);
						}
					}
					CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
					HUD::DISPLAY_RADAR(1);
					HUD::DISPLAY_HUD(1);
					AUDIO::STOP_SOUND(iLocal_3466);
					AUDIO::STOP_SOUND(iLocal_3465);
					GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
					GlobalFunc_7934(45, 0);
					fLocal_3546 = 0.1f;
					STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
					STREAMING::SET_PED_POPULATION_BUDGET(3);
					func_322();
					GlobalFunc_718(&uLocal_3547, joaat("s_m_m_armoured_01"));
					iLocal_5436++;
				}
			}
			break;
		
		case 11:
			iVar4 = 0;
			iVar5 = 0;
			iVar6 = 0;
			iVar7 = 0;
			iVar8 = 0;
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				iVar4 = 1;
			}
			if (INTERIOR::IS_INTERIOR_READY(iLocal_3297))
			{
				iVar5 = 1;
			}
			if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_armoured_01")))
			{
				iVar6 = 1;
			}
			if (!GlobalFunc_111())
			{
				iVar7 = 1;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3032[2 /*2*/], 0))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3032[2 /*2*/]))
				{
					iVar8 = 1;
				}
			}
			if ((((iVar4 && iVar5) && iVar6) && iVar7) && iVar8)
			{
				func_218(5, 0);
				GlobalFunc_718(&uLocal_3547, joaat("s_m_m_armoured_01"));
				iVar0 = GlobalFunc_7936(Local_3051[4 /*4*/], 1, 0, 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iVar0, "security_guard_gun", 1, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3051[4 /*4*/], "security_guard", 1, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3051[6 /*4*/], "Casey", 1, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3032[3 /*2*/], "security_truck", 1, 0, 0);
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_3032[3 /*2*/], 0);
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_3032[4 /*2*/], 0);
				func_312(1);
				GlobalFunc_6685(0);
				GlobalFunc_8380(1, 1, 1, 0);
				func_305();
				GlobalFunc_4956();
				CUTSCENE::START_CUTSCENE(0);
				AUDIO::SET_FRONTEND_RADIO_ACTIVE(0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				iLocal_5436++;
			}
			break;
		
		case 12:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3032[2 /*2*/], 0))
			{
				VEHICLE::SET_FORCE_HD_VEHICLE(Local_3032[2 /*2*/], 1);
			}
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				func_8(0);
				AUDIO::TRIGGER_MUSIC_EVENT("FH1_ONION86");
				if (!PED::IS_PED_INJURED(Local_3051[6 /*4*/]))
				{
					ENTITY::SET_ENTITY_COLLISION(Local_3051[6 /*4*/], 0, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_3032[4 /*2*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_3032[4 /*2*/]));
				}
				MISC::CLEAR_AREA(-84.3858f, -670.8411f, 35.1694f, 200f, 1, 0, 0, 0);
				ENTITY::SET_ENTITY_COORDS(Local_3032[2 /*2*/], -76.4238f, -528.6735f, 87.5f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_3032[2 /*2*/], 176.7705f);
				ENTITY::FREEZE_ENTITY_POSITION(Local_3032[2 /*2*/], 1);
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_3032[2 /*2*/]);
				PED::SET_PED_INTO_VEHICLE(func_129(), Local_3032[2 /*2*/], -1);
				PED::SET_PED_INTO_VEHICLE(func_196(), Local_3032[2 /*2*/], 1);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_196(), 0, 0);
				iLocal_3296 = INTERIOR::GET_INTERIOR_AT_COORDS(12.8829f, -634.9265f, 15.0884f);
				if (INTERIOR::IS_VALID_INTERIOR(iLocal_3296))
				{
					INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_3296);
				}
				func_328(&bLocal_3020, 0, 0);
				iLocal_5436++;
			}
			break;
		
		case 13:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3032[2 /*2*/], 0))
			{
				VEHICLE::SET_FORCE_HD_VEHICLE(Local_3032[2 /*2*/], 1);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				bLocal_3539 = true;
			}
			if (bLocal_3539)
			{
				RECORDING::_0x81CBAE94390F9F89();
				GlobalFunc_8380(0, 1, 1, 0);
				PED::SET_PED_INTO_VEHICLE(func_130(), Local_3032[0 /*2*/], -1);
				PED::SET_PED_INTO_VEHICLE(func_127(), Local_3032[0 /*2*/], 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_130(), 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_127(), 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3032[0 /*2*/]);
				ENTITY::FREEZE_ENTITY_POSITION(Local_3032[2 /*2*/], 0);
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_3032[2 /*2*/]);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_3032[2 /*2*/], 1f);
				PED::SET_PED_INTO_VEHICLE(func_196(), Local_3032[2 /*2*/], 1);
				PED::SET_PED_INTO_VEHICLE(func_129(), Local_3032[2 /*2*/], -1);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_129(), 0, 0);
				func_312(0);
				GlobalFunc_730(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
				if (iLocal_3297 != 0)
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_3297);
				}
				STREAMING::NEW_LOAD_SCENE_STOP();
				AUDIO::TRIGGER_MUSIC_EVENT("FH1_TRUCKS_2");
				iLocal_5436++;
			}
			break;
		
		case 14:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3032[2 /*2*/], 0))
			{
				VEHICLE::SET_FORCE_HD_VEHICLE(Local_3032[2 /*2*/], 1);
			}
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
				GlobalFunc_5661(45, 1);
				iLocal_5436 = 0;
				func_211(5);
			}
			break;
	}
	GlobalFunc_5979(-1273030092);
	if (iLocal_5436 > 0 && iLocal_5436 < 9)
	{
		if (fLocal_3545 < 10000f)
		{
			fLocal_3546 = 0.75f;
			func_300();
		}
		else if (fLocal_3545 > 10000f && fLocal_3545 < 20000f)
		{
			fLocal_3546 = 0.85f;
		}
		else if (fLocal_3545 > 20000f && fLocal_3545 < 30000f)
		{
			fLocal_3546 = 1f;
		}
		else if (fLocal_3545 > 107000f && fLocal_3545 < 116000f)
		{
			fLocal_3546 = 1.4f;
		}
		else if (fLocal_3545 > 131500f && fLocal_3545 < 139000f)
		{
			fLocal_3546 = 1.4f;
		}
		else if (fLocal_3545 > 152000f && fLocal_3545 < 162000f)
		{
			fLocal_3546 = 0.8f;
		}
		else if (fLocal_3545 > 162000f && fLocal_3545 < 168000f)
		{
			Var9 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_3032[3 /*2*/], ENTITY::GET_ENTITY_COORDS(Local_3032[2 /*2*/], 1)) };
			if (Var9.f_1 < -1f && Var9.f_2 > 10f)
			{
				fLocal_3546 = 0.2f;
			}
			else
			{
				fLocal_3546 = 1f;
			}
		}
		else if (fLocal_3545 > 168000f)
		{
			fLocal_3546 = 1f;
		}
		else
		{
			fLocal_3546 = 1.2f;
		}
	}
	VEHICLE::SET_VEHICLE_CEILING_HEIGHT(Local_3032[2 /*2*/], 420f);
	if (iLocal_3410)
	{
		func_299(Local_3032[3 /*2*/], 165000f);
		ENTITY::SET_ENTITY_COORDS(Local_3032[2 /*2*/], 89.9054f, -563.3521f, 100.6528f, 1, 0, 0, 1);
		iLocal_3410 = 0;
		bLocal_3409 = true;
		iLocal_5436 = 8;
	}
	func_246(Local_3032[3 /*2*/], "FH1UBER");
	if (ENTITY::DOES_ENTITY_EXIST(Local_3032[3 /*2*/]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3032[3 /*2*/], 0))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_3032[3 /*2*/], 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_3032[4 /*2*/]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3032[4 /*2*/], 0))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_3032[4 /*2*/], 1);
		}
	}
	if (iLocal_5436 < 11)
	{
		if (GlobalFunc_2773(func_196()) && GlobalFunc_2773(Local_3032[3 /*2*/]))
		{
			func_203(ENTITY::GET_ENTITY_COORDS(Local_3032[3 /*2*/], 1));
		}
		func_204();
	}
	if ((((iLocal_5436 == 9 && ENTITY::IS_ENTITY_ON_SCREEN(Local_3032[4 /*2*/])) && !ENTITY::IS_ENTITY_OCCLUDED(Local_3032[4 /*2*/])) && !iLocal_3521) && fLocal_3545 > 171500f)
	{
		if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_Tunnel2", 7, 0, 0, 0))
		{
			RECORDING::_0x293220DA1B46CEBC(4f, 6f, 4);
			iLocal_3521 = 1;
		}
	}
	if ((iLocal_5436 < 11 && iLocal_5435 == 4) && ENTITY::DOES_ENTITY_EXIST(Local_3051[6 /*4*/]))
	{
		fLocal_3428 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(Local_3051[6 /*4*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
		fVar12 = 550f;
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[3 /*2*/]))
		{
			fVar13 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3032[3 /*2*/]);
			if (fVar13 <= 20000f)
			{
				fVar12 = 550f;
			}
			else if (fVar13 > 20000f && fVar13 <= 150000f)
			{
				fVar12 = 450f;
			}
			else if (fVar13 > 150000f)
			{
				fVar12 = 350f;
			}
			Var15 = { ENTITY::GET_ENTITY_COORDS(Local_3032[3 /*2*/], 1) };
			Var18 = { ENTITY::GET_ENTITY_COORDS(Local_3032[2 /*2*/], 1) };
			fVar14 = (Var15.f_2 - Var18.f_2);
			if (fVar14 < 0f)
			{
				fVar14 = (fVar14 * -1f);
			}
			if (!bLocal_3409)
			{
				if (fLocal_3428 > fVar12)
				{
					if (!iLocal_3407)
					{
						GlobalFunc_553(643);
						GlobalFunc_164("FH1_FRWARN", 7500, 1);
						iLocal_3407 = 1;
					}
					if ((MISC::GET_GAME_TIMER() - iLocal_3404) > 10500 && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(func_196()))
					{
						GlobalFunc_4956();
						GlobalFunc_5653(func_196(), "FINH1_BDAA", "Lester", 3);
						func_232(6);
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_3404) > 3000)
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(func_196()) && (MISC::GET_GAME_TIMER() - iLocal_3406) > 5000)
						{
							GlobalFunc_5653(func_196(), "FINH1_BFAA", "Lester", 3);
							iLocal_3406 = MISC::GET_GAME_TIMER();
						}
					}
				}
				else if (fLocal_3428 < 30f)
				{
					if (bLocal_3531 == 0 || fVar14 < 9f)
					{
						if ((fLocal_3545 < 162000f || fLocal_3545 > 171500f) || fVar14 < 9f)
						{
							if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(func_196()))
							{
								GlobalFunc_4956();
								GlobalFunc_5653(func_196(), "FINH1_BCAA", "Lester", 3);
								if (GlobalFunc_2773(Local_3032[3 /*2*/]))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[3 /*2*/]))
									{
										VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3032[3 /*2*/]);
									}
								}
								if (GlobalFunc_2773(Local_3032[3 /*2*/]))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[4 /*2*/]))
									{
										VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3032[4 /*2*/]);
									}
								}
								func_232(5);
							}
						}
					}
				}
				else if (fLocal_3428 < 60f)
				{
					if (bLocal_3531 == 0)
					{
						if (fLocal_3545 < 162000f || fLocal_3545 > 169000f)
						{
							if (iLocal_3469)
							{
								GlobalFunc_553(643);
								GlobalFunc_164("FH1_CLWARN", 7500, 1);
								iLocal_3404 = MISC::GET_GAME_TIMER();
								iLocal_3469 = 0;
							}
							else if ((MISC::GET_GAME_TIMER() - iLocal_3404) > 10000 && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(func_196()))
							{
								GlobalFunc_5653(func_196(), "FINH1_BEAA", "Lester", 3);
								iLocal_3404 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
				else
				{
					iLocal_3404 = MISC::GET_GAME_TIMER();
					iLocal_3407 = 0;
					iLocal_3469 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_3032[3 /*2*/]))
		{
			INTERIOR::CLEAR_ROOM_FOR_ENTITY(Local_3032[3 /*2*/]);
			ENTITY::SET_ENTITY_LOD_DIST(Local_3032[3 /*2*/], SYSTEM::ROUND(fVar12));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_3032[4 /*2*/]))
		{
			INTERIOR::CLEAR_ROOM_FOR_ENTITY(Local_3032[4 /*2*/]);
			ENTITY::SET_ENTITY_LOD_DIST(Local_3032[4 /*2*/], SYSTEM::ROUND(fVar12));
		}
	}
	if ((GlobalFunc_2773(func_129()) && GlobalFunc_2773(func_196())) && GlobalFunc_2773(Local_3032[3 /*2*/]))
	{
		if (!PED::IS_PED_HEADTRACKING_ENTITY(func_129(), Local_3032[3 /*2*/]))
		{
			TASK::TASK_LOOK_AT_ENTITY(func_129(), Local_3032[3 /*2*/], -1, 2096, 2);
		}
		if (!PED::IS_PED_HEADTRACKING_ENTITY(func_196(), Local_3032[3 /*2*/]))
		{
			TASK::TASK_LOOK_AT_ENTITY(func_196(), Local_3032[3 /*2*/], -1, 2096, 2);
		}
	}
	if (GlobalFunc_2773(Local_3032[2 /*2*/]))
	{
		switch (iLocal_3433)
		{
			case 0:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_3032[2 /*2*/], 291.6763f, -653.6782f, 28.37552f, 297.3787f, -639.3516f, 33.76371f, 10f, 0, 1, 0))
				{
					iLocal_3433++;
				}
				break;
			
			case 1:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_3032[2 /*2*/], 192.9586f, -607.2877f, 28.54596f, 202.6739f, -592.1815f, 33.89706f, 10f, 0, 1, 0))
				{
					iLocal_3433++;
				}
				break;
			
			case 2:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_3032[2 /*2*/], 124.5665f, -583.91f, 30.61664f, 130.5935f, -568.0862f, 37.65457f, 10f, 0, 1, 0))
				{
					GlobalFunc_553(646);
					iLocal_3433++;
				}
				break;
			}
	}
	func_231();
}

void func_231()//Position - 0x14C3B
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3032[2 /*2*/], 0))
	{
		if (bLocal_3542 == 0)
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3032[2 /*2*/], 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_3032[2 /*2*/], 335.0388f, -659.2297f, 40.80275f, 79.02934f, -561.3292f, 28.06918f, 34.6875f, 0, 1, 0))
			{
				fVar10 = SYSTEM::VDIST2(636.832f, -1428.867f, 8.60403f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
				if (fVar10 < 10000f)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_3032[2 /*2*/], 599.8643f, -1452.674f, 7.386136f, 688.0021f, -1451.465f, 27.68441f, 10.75f, 0, 1, 0))
					{
						iLocal_9227 = 1;
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_3032[2 /*2*/], 678.3117f, -1413.952f, 7.958761f, 589.5026f, -1416.229f, 27.58501f, 10.75f, 0, 1, 0))
					{
						iLocal_9228 = 1;
					}
				}
				fVar11 = SYSTEM::VDIST2(592.3815f, -1180.686f, 8.87134f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
				if (fVar11 < 20000f)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_3032[2 /*2*/], 491.188f, -1233.989f, 6.291784f, 687.0824f, -1250.512f, 40.41873f, 14.25f, 0, 1, 0))
					{
						iLocal_9229 = 1;
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_3032[2 /*2*/], 489.8552f, -1178.115f, 6.291779f, 696.4216f, -1149.358f, 40.81276f, 14.25f, 0, 1, 0))
					{
						iLocal_9230 = 1;
					}
				}
				if (iLocal_9227 == 1 && iLocal_9228 == 1)
				{
					bLocal_3542 = true;
				}
				if (iLocal_9229 == 1 && iLocal_9230 == 1)
				{
					bLocal_3542 = true;
				}
				if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_3032[2 /*2*/], 0f, 0f, 5f), &Var0, 1, 1077936128, 0))
				{
					Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
					fVar6 = (Var3.x + 4f);
					fVar7 = (Var3.x - 4f);
					fVar8 = (Var3.f_1 + 4f);
					fVar9 = (Var3.f_1 - 4f);
					if (Var0.f_2 > Var3.f_2)
					{
						if (((Var0.x <= fVar6 && Var0.x >= fVar7) && Var0.f_1 <= fVar8) && Var0.f_1 >= fVar9)
						{
							bLocal_3542 = true;
						}
					}
				}
			}
		}
		else if (bLocal_3542)
		{
			if (!iLocal_9231)
			{
				GlobalFunc_553(645);
				iLocal_9231 = 1;
			}
		}
	}
}

void func_232(int iParam0)//Position - 0x14E95
{
	char* sVar0;
	
	if (!Local_3356.f_20)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FH1_FAIL");
		GlobalFunc_4935();
		sVar0 = "";
		switch (iParam0)
		{
			case 0:
				sVar0 = "FH1_FAILDB";
				break;
			
			case 1:
				sVar0 = "CMN_FDIED";
				break;
			
			case 3:
				sVar0 = "FH1_FAILLD";
				break;
			
			case 6:
				sVar0 = "FH1_FAILLT";
				break;
			
			case 4:
				sVar0 = "CMN_MDIED";
				break;
			
			case 5:
				sVar0 = "FH1_FAILTC";
				break;
			
			case 2:
				sVar0 = "CMN_TDIED";
				break;
			
			case 7:
				sVar0 = "CMN_MDEST";
				break;
			
			case 8:
				sVar0 = "CMN_TDEST";
				break;
			
			case 9:
				sVar0 = "FH1_FAILHD";
				break;
			
			case 10:
				sVar0 = "FH1_FAILBK";
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
				break;
			
			case 11:
				sVar0 = "CMN_FLEFT";
				break;
			
			case 12:
				sVar0 = "FH1_FAILLES";
				break;
			
			case 14:
				sVar0 = "FH1_FAILTI";
				break;
			
			case 13:
				sVar0 = "FH1_FMIKEL";
				break;
			
			default:
				sVar0 = "FH1_FAILDF";
				break;
		}
		if (!ENTITY::IS_ENTITY_DEAD(func_129()))
		{
			if (!ENTITY::IS_ENTITY_VISIBLE(func_129()))
			{
				ENTITY::SET_ENTITY_VISIBLE(func_129(), 1);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(func_196()))
		{
			if (!ENTITY::IS_ENTITY_VISIBLE(func_196()))
			{
				ENTITY::SET_ENTITY_VISIBLE(func_196(), 1);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_3032[2 /*2*/]))
		{
			if (!ENTITY::IS_ENTITY_VISIBLE(Local_3032[2 /*2*/]))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_3032[2 /*2*/], 1);
			}
		}
		CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
		HUD::DISPLAY_RADAR(1);
		HUD::DISPLAY_HUD(1);
		AUDIO::TRIGGER_MUSIC_EVENT("FH1_FAIL");
		AUDIO::STOP_SOUND(iLocal_3466);
		AUDIO::STOP_SOUND(iLocal_3465);
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		GlobalFunc_10835(sVar0);
		while (!GlobalFunc_145())
		{
			GlobalFunc_4935();
			if (iParam0 == 15 && !iLocal_3524)
			{
				if (GlobalFunc_2773(func_196()))
				{
					GlobalFunc_173(&uLocal_3096, 3, func_196(), "Lester", 0, 1);
					if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_FAILTME", 7, 0, 0, 0))
					{
						iLocal_3524 = 1;
					}
				}
			}
			SYSTEM::WAIT(0);
		}
		GlobalFunc_5129(92.0847f, -1280.706f, 28.1447f, 73.3971f);
		func_844(0);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}














void func_246(int iParam0, char* sParam1)//Position - 0x15FCD
{
	switch (iLocal_3544)
	{
		case 0:
			func_298(sParam1, 1, 0, 1);
			func_297(1);
			func_296(1);
			func_300();
			func_295();
			bLocal_70 = true;
			fLocal_1206 = 700f;
			fLocal_1207 = 400f;
			fLocal_3545 = 0f;
			bLocal_61 = false;
			GlobalFunc_2214();
			PATHFIND::SET_ROADS_IN_AREA(1184.578f, -1801.748f, 25f, 780.501f, -1454.51f, 37f, 0, 1);
			PATHFIND::SET_ROADS_IN_AREA(859.1412f, -1563.117f, 24f, 242.7897f, -829.4163f, 33f, 0, 1);
			PATHFIND::SET_ROADS_IN_AREA(535.7115f, -552.7345f, 24f, 35.41522f, -1156.012f, 33f, 0, 1);
			PATHFIND::SET_ROADS_IN_AREA(-159.2718f, -539.104f, 28f, 416.9244f, -832.9946f, 41.5f, 0, 1);
			uLocal_3411 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(824.8984f, -1748.843f, 28.48285f, 29f, 0f, 0);
			uLocal_3412 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(796.6042f, -1435.003f, 26.20493f, 23.8f, 0f, 0);
			uLocal_3413 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(541.3582f, -1431.704f, 28.34233f, 21f, 0f, 0);
			uLocal_3414 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(499.5806f, -1132.154f, 28.45514f, 18f, 0f, 0);
			uLocal_3415 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(398.2404f, -1048.069f, 28.44339f, 22f, 0f, 0);
			uLocal_3416 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(403.3734f, -955.1171f, 28.44834f, 20f, 0f, 0);
			uLocal_3417 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(406.0438f, -853.2869f, 28.33914f, 25f, 0f, 0);
			uLocal_3418 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(354.6448f, -667.0586f, 28.33901f, 27f, 0f, 0);
			iLocal_3544 = 1;
			break;
		
		case 1:
			func_293(10000f);
			fLocal_3545 = 0f;
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(iParam0, 1, sParam1, 4, 0, 786468);
			func_299(iParam0, 7000f);
			func_300();
			iLocal_3544 = 2;
			break;
		
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
				{
					fLocal_3545 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
					if (!ENTITY::DOES_ENTITY_EXIST(Local_3032[4 /*2*/]))
					{
						Local_3032[4 /*2*/] = iLocal_2936[0];
					}
					VEHICLE::SET_PLAYBACK_SPEED(iParam0, fLocal_3546);
					func_293(5000f);
					func_267(iParam0, fLocal_3546);
				}
				else
				{
					func_247(0, 1);
					VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(uLocal_3411);
					VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(uLocal_3412);
					VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(uLocal_3413);
					VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(uLocal_3414);
					VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(uLocal_3415);
					VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(uLocal_3416);
					VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(uLocal_3417);
					VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(uLocal_3418);
				}
			}
			break;
	}
}

void func_247(bool bParam0, bool bParam1)//Position - 0x16276
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_2509))
	{
		iLocal_67 = 0;
		GlobalFunc_2214();
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_2525);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
			PED::SET_CREATE_RANDOM_COPS(1);
		}
		if (bLocal_83)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_266());
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2213());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2212());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2211());
		if (!CAM::IS_SCREEN_FADED_OUT() && !bParam0)
		{
			func_262();
			func_261();
			func_258();
		}
		else
		{
			func_254();
			func_253();
		}
		if (bParam1)
		{
			GlobalFunc_9132(0);
		}
	}
}






void func_253()//Position - 0x16487
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 150)
	{
		iLocal_2747[iVar0] = 0;
		Local_1834[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_85[iVar0] = 0f;
		fLocal_236[iVar0] = 0f;
		fLocal_387[iVar0] = 0f;
		fLocal_538[iVar0] = 0f;
		iLocal_1215[iVar0] = 0;
		fLocal_689[iVar0] = 0f;
		iLocal_1366[iVar0] = 0;
		iLocal_2526[iVar0] = 0;
		iLocal_1517[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		iLocal_2898[iVar0] = 0;
		iVar0++;
	}
	iLocal_1817 = 0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		iLocal_2910[iVar0] = 0;
		Local_2285[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_1090[iVar0] = 0f;
		fLocal_1116[iVar0] = 0f;
		fLocal_1142[iVar0] = 0f;
		fLocal_1168[iVar0] = 0f;
		iLocal_1791[iVar0] = 0;
		iLocal_2677[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_2977[iVar0] = 0;
		iVar0++;
	}
	iLocal_1819 = 0;
	iVar0 = 0;
	while (iVar0 < 40)
	{
		iLocal_2936[iVar0] = 0;
		Local_2361[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_844[iVar0] = 0f;
		fLocal_885[iVar0] = 0f;
		fLocal_926[iVar0] = 0f;
		fLocal_967[iVar0] = 0f;
		iLocal_1668[iVar0] = 0;
		fLocal_1008[iVar0] = 0f;
		iLocal_1709[iVar0] = 0;
		iLocal_2703[iVar0] = 0;
		iLocal_1750[iVar0] = 0;
		iVar0++;
	}
	iLocal_1818 = 0;
	iLocal_1821 = 0;
	iLocal_1824 = 0;
	iLocal_1825 = 0;
	iLocal_1826 = 0;
}

void func_254()//Position - 0x16614
{
	func_257();
	func_256();
	func_255();
}

void func_255()//Position - 0x16628
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2936[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2936[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2936[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2936[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2936[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_2936[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_2936[iVar0]));
			}
		}
		iLocal_1709[iVar0] = 0;
		if (!bLocal_63 && !bLocal_76)
		{
			if (iLocal_1668[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1668[iVar0], &cLocal_2509);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (!iLocal_2703[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2703[iVar0]);
		}
		iVar0++;
	}
}

void func_256()//Position - 0x1671E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2910[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_2910[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_2910[iVar0]));
			}
		}
		iLocal_1791[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (!iLocal_2677[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2677[iVar0]);
		}
		iVar0++;
	}
	iLocal_1822 = 0;
	iLocal_1819 = 0;
}

void func_257()//Position - 0x1679B
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2747[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2747[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2747[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2747[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2747[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_2747[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_2747[iVar0]));
			}
		}
		if (!bLocal_63 && !bLocal_76)
		{
			if (iLocal_1215[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1215[iVar0], &cLocal_2509);
			}
		}
		iLocal_1366[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (!iLocal_2526[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2526[iVar0]);
		}
		iVar0++;
	}
	iLocal_1821 = 0;
	iLocal_1817 = 0;
}

void func_258()//Position - 0x16899
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2936[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2936[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2936[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2936[iVar0]);
				}
			}
			func_260(iLocal_2936[iVar0]);
			GlobalFunc_2210(iLocal_2936[iVar0]);
		}
		iLocal_1709[iVar0] = 0;
		iLocal_1750[iVar0] = 0;
		if (!bLocal_63 && !bLocal_76)
		{
			if (iLocal_1668[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1668[iVar0], &cLocal_2509);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (!iLocal_2703[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2703[iVar0]);
		}
		iVar0++;
	}
	iLocal_1823 = 0;
}


void func_260(int iParam0)//Position - 0x1697D
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
				if (bLocal_84)
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 65536, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, 0);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 6, 0);
			}
		}
	}
}

void func_261()//Position - 0x16A16
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2910[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2910[iVar0]))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_2910[iVar0], 1, 0);
			}
			GlobalFunc_2210(iLocal_2910[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (!iLocal_2677[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2677[iVar0]);
		}
		iVar0++;
	}
	iLocal_1822 = 0;
	iLocal_1819 = 0;
}

void func_262()//Position - 0x16A99
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2747[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2747[iVar0]))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_2747[iVar0], 1, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2747[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2747[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2747[iVar0]);
				}
			}
			func_260(iLocal_2747[iVar0]);
			GlobalFunc_2210(iLocal_2747[iVar0]);
		}
		iLocal_1366[iVar0] = 0;
		iLocal_1517[iVar0] = 0;
		if (!bLocal_63 && !bLocal_76)
		{
			if (iLocal_1215[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1215[iVar0], &cLocal_2509);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (!iLocal_2526[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2526[iVar0]);
		}
		iVar0++;
	}
	iLocal_1821 = 0;
	iLocal_1817 = 0;
}




int func_266()//Position - 0x16BAD
{
	if (iLocal_2744 == 0)
	{
		return joaat("a_m_y_business_01");
	}
	return iLocal_2744;
}

void func_267(int iParam0, float fParam1)//Position - 0x16BCA
{
	float fVar0;
	struct<3> Var1;
	int iVar4;
	
	fVar0 = MISC::GET_FRAME_TIME();
	fVar0 = (fVar0 * 1000f);
	bLocal_82 = false;
	if (!bLocal_64)
	{
		if (bLocal_63)
		{
			GlobalFunc_2512();
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				MISC::CLEAR_AREA(Var1, 1000f, 1, 0, 0, 0);
			}
			bLocal_64 = true;
		}
	}
	else if (!bLocal_63)
	{
		GlobalFunc_2214();
		bLocal_64 = false;
	}
	if (bLocal_63)
	{
		fParam1 = 1f;
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (!bLocal_57)
	{
		if (iLocal_52)
		{
			fLocal_1199 = 0f;
		}
		else
		{
			fLocal_1199 = 1f;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (GlobalFunc_5657(PLAYER::PLAYER_PED_ID(), iParam0))
					{
						iLocal_62 = 1;
					}
					else
					{
						iLocal_62 = 0;
					}
				}
				fLocal_1196 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
				VEHICLE::SET_PLAYBACK_SPEED(iParam0, ((fParam1 * fLocal_1197) * fLocal_1199));
				if (bLocal_61)
				{
					func_290(iParam0, fLocal_1196);
					func_289(iParam0, fLocal_1206);
					if (fLocal_1201 > 1000f)
					{
						if (iLocal_1833 == 0)
						{
							func_288(iParam0, fLocal_1206);
						}
						fVar0 = ((fLocal_1196 + 4000f) + (SYSTEM::TO_FLOAT(iLocal_1833) * 2000f));
						func_287(iParam0, fVar0, fLocal_1200);
						iLocal_1833++;
						if (iLocal_1833 > 2)
						{
							fLocal_1201 = 0f;
						}
					}
					else
					{
						iLocal_1833 = 0;
						fLocal_1201 = (fLocal_1201 + (MISC::GET_FRAME_TIME() * 1000f));
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
		if (fLocal_1196 == 0f || CAM::IS_SCREEN_FADED_OUT())
		{
			iVar4 = 1;
		}
		if (iVar4 && !bLocal_69)
		{
			if (!iLocal_51)
			{
				func_284(iParam0, ((fParam1 * fLocal_1197) * fLocal_1199), 0);
				if (!iLocal_72)
				{
				}
				iLocal_72 = 0;
			}
			if (bLocal_54)
			{
				func_283(iParam0);
			}
			if (!iLocal_51)
			{
				func_270(iParam0, ((fParam1 * fLocal_1197) * fLocal_1199), 0);
			}
		}
		if (iLocal_59)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_2988 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					Local_2482 = { ENTITY::GET_ENTITY_COORDS(iLocal_2988, 1) };
					ENTITY::GET_ENTITY_QUATERNION(iLocal_2988, &uLocal_840, &uLocal_841, &uLocal_842, &uLocal_843);
				}
			}
			iLocal_59 = 0;
		}
		if (iLocal_58)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2988))
			{
				GlobalFunc_2210(iLocal_2989);
				iLocal_2989 = iLocal_2988;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2989, 0))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_2989, Local_2482, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_2989, uLocal_840, uLocal_841, uLocal_842, uLocal_843);
			}
			fLocal_1195 = fLocal_1198;
			iLocal_51 = 1;
			iLocal_58 = 0;
		}
		if (iLocal_51)
		{
			while (!func_268(&iParam0, fLocal_1195))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_52 = 1;
		}
		if (iLocal_65)
		{
			iLocal_65 = 0;
		}
	}
}

int func_268(int iParam0, float fParam1)//Position - 0x16E65
{
	if (!iLocal_66)
	{
		iLocal_51 = 1;
		func_254();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
				VEHICLE::SET_VEHICLE_FIXED(*iParam0);
			}
			if (!iLocal_1820 == -1)
			{
				while (!func_269(iParam0, iLocal_1820, fParam1, 1, 0, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!bLocal_56)
				{
					iLocal_52 = 1;
					fLocal_1199 = 0f;
					iLocal_1821 = 0;
					iLocal_1823 = 0;
					iLocal_1822 = 0;
					iLocal_1817 = 0;
					iLocal_1818 = 0;
					iLocal_1819 = 0;
					iLocal_1824 = 0;
					iLocal_1825 = 0;
					iLocal_1826 = 0;
				}
			}
		}
		iLocal_66 = 1;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(*iParam0, ((1f * fLocal_1197) * fLocal_1199));
				func_269(iParam0, iLocal_1820, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_1196 = fParam1;
		iLocal_1827 = 0;
		iLocal_1830 = 0;
		fLocal_1211 = 0f;
		fLocal_1210 = 0f;
		func_270(*iParam0, ((1f * fLocal_1197) * fLocal_1199), 1);
		func_284(*iParam0, ((1f * fLocal_1197) * fLocal_1199), 1);
		func_283(*iParam0);
		if ((iLocal_1824 == 0 && iLocal_1825 == 0) && iLocal_1826 == 0)
		{
			iLocal_52 = 0;
			iLocal_51 = 0;
			iLocal_66 = 0;
			return 1;
		}
	}
	return 0;
}

int func_269(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x16F97
{
	float fVar0;
	
	if (iParam1 > 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_2509);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, &cLocal_2509))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*iParam0, 0);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*iParam0, iParam1, &cLocal_2509, 1092616192, 786603);
					}
					else
					{
						if (iParam1 != iLocal_1828 && iParam1 != iLocal_1829)
						{
							if (bParam7)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_2509, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_2509, 1 | 4, 0, 786603);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_2509, 1);
							}
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_2509, 1);
						}
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, fParam2);
						if (bParam5)
						{
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*iParam0, 1);
						}
						return 1;
					}
				}
				else if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(*iParam0) == VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, &cLocal_2509))
				{
					fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(*iParam0);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
						VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_2509);
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
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*iParam0, iParam1, &cLocal_2509, 1092616192, 786603);
					}
					else if (iParam1 != iLocal_1828 && iParam1 != iLocal_1829)
					{
						if (bParam7)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_2509, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_2509, 1 | 4, 0, 786603);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_2509, 1);
						}
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_2509, 1);
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

void func_270(int iParam0, float fParam1, bool bParam2)//Position - 0x1717D
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
		iVar0 = iLocal_1823;
		while (iVar0 < 40)
		{
			if (iLocal_1709[iVar0] != 99)
			{
				if (iLocal_1709[iVar0] == 0)
				{
					if (iLocal_1668[iVar0] > 0)
					{
						if (!iLocal_51)
						{
							if (fLocal_1196 > (fLocal_1008[iVar0] - (7000f * fParam1)))
							{
								if (GlobalFunc_2222(iLocal_2703[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_1750[iVar0]), 0);
								}
								else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2703[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_1750[iVar0]), 2);
								}
								MISC::CLEAR_BIT(&(iLocal_1750[iVar0]), 1);
								iLocal_1709[iVar0]++;
								iLocal_1825++;
							}
						}
						else
						{
							fVar12 = (fLocal_1196 - fLocal_1008[iVar0]);
							fVar12 = (fVar12 * fLocal_1049[iVar0]);
							if (fVar12 >= 0f)
							{
								if (fVar12 < func_281(iLocal_1668[iVar0]))
								{
									if (GlobalFunc_2222(iLocal_2703[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1750[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2703[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1750[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_1750[iVar0]), 1);
									iLocal_1709[iVar0]++;
									iLocal_1825++;
								}
								else
								{
									iLocal_1709[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_1709[iVar0] = 99;
					}
				}
				else if (iLocal_1709[iVar0] == 1)
				{
					bVar14 = false;
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1668[iVar0], &cLocal_2509);
					if (MISC::IS_BIT_SET(iLocal_1750[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2211());
						bVar14 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
					}
					else if (!bLocal_78 && ((!MISC::IS_BIT_SET(iLocal_1750[iVar0], 2) && uVar16) || (MISC::IS_BIT_SET(iLocal_1750[iVar0], 2) && uVar17)))
					{
						bVar14 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_266());
						bVar14 = STREAMING::HAS_MODEL_LOADED(func_266());
					}
					if (bVar14)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2936[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_2703[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_2703[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1668[iVar0], &cLocal_2509))
							{
								if (fLocal_1196 >= (fLocal_1008[iVar0] - (fLocal_1209 * fParam1)))
								{
									if ((iLocal_65 || bParam2) || (!bLocal_82 && !func_280(Local_2361[iVar0 /*3*/], Var9, 5f, fLocal_1207)))
									{
										if (bLocal_61)
										{
											func_279(Local_2361[iVar0 /*3*/], Var9, fLocal_1200);
										}
										iLocal_2936[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_2703[iVar0], Local_2361[iVar0 /*3*/], 0f, 0, 0);
										if (iLocal_2703[iVar0] == joaat("polmav"))
										{
											VEHICLE::SET_VEHICLE_LIVERY(iLocal_2936[iVar0], 0);
										}
										if (uLocal_74 && !MISC::IS_BIT_SET(iLocal_1750[iVar0], 0))
										{
											func_278(iLocal_2936[iVar0]);
										}
										if (MISC::IS_BIT_SET(iLocal_1750[iVar0], 3))
										{
											ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_2936[iVar0], 1);
										}
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_2936[iVar0], Local_2361[iVar0 /*3*/], 0, 0, 1);
										ENTITY::SET_ENTITY_QUATERNION(iLocal_2936[iVar0], fLocal_844[iVar0], fLocal_885[iVar0], fLocal_926[iVar0], fLocal_967[iVar0]);
										if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_2703[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2703[iVar0]))
										{
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2936[iVar0]);
										}
										if (!MISC::IS_BIT_SET(iLocal_1750[iVar0], 0))
										{
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2936[iVar0], 1, 1);
											if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
											{
												VEHICLE::SET_VEHICLE_LIGHTS(iLocal_2936[iVar0], 3);
											}
										}
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_2936[iVar0], 1);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2703[iVar0]);
										iLocal_1825 = (iLocal_1825 - 1);
										iLocal_1709[iVar0]++;
										bLocal_82 = true;
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_2936[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2936[iVar0], 0))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_2936[iVar0], Local_2361[iVar0 /*3*/], 0, 0, 1);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_2936[iVar0], fLocal_844[iVar0], fLocal_885[iVar0], fLocal_926[iVar0], fLocal_967[iVar0]);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_2703[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2703[iVar0]))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2936[iVar0]);
							}
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_2936[iVar0], 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2703[iVar0]);
							iLocal_1825 = (iLocal_1825 - 1);
							iLocal_1709[iVar0]++;
						}
					}
				}
				else if (iLocal_1709[iVar0] == 2)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1668[iVar0], &cLocal_2509);
					if (!MISC::IS_BIT_SET(iLocal_1750[iVar0], 1))
					{
						bVar14 = false;
						if (MISC::IS_BIT_SET(iLocal_1750[iVar0], 0))
						{
							STREAMING::REQUEST_MODEL(GlobalFunc_2211());
							bVar14 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
							iVar19 = 2;
						}
						else if (!bLocal_78 && ((!MISC::IS_BIT_SET(iLocal_1750[iVar0], 2) && uVar16) || (MISC::IS_BIT_SET(iLocal_1750[iVar0], 2) && uVar17)))
						{
							bVar14 = true;
							iVar19 = 1;
						}
						else
						{
							STREAMING::REQUEST_MODEL(func_266());
							bVar14 = STREAMING::HAS_MODEL_LOADED(func_266());
							iVar19 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_2936[iVar0]))
						{
							if (!bLocal_82 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2936[iVar0], -1))
							{
								if (bVar14)
								{
									if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_2936[iVar0], 1), Var9) < 10000f || bParam2) || iLocal_65)
									{
										func_276(&(iLocal_2936[iVar0]), iVar19, 1);
										MISC::SET_BIT(&(iLocal_1750[iVar0]), 1);
									}
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2936[iVar0], 0))
					{
						if (fLocal_1196 >= fLocal_1008[iVar0])
						{
							if (1 > iLocal_1818)
							{
								fVar12 = (fLocal_1196 - fLocal_1008[iVar0]);
								fVar12 = (fVar12 * fLocal_1049[iVar0]);
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1668[iVar0], &cLocal_2509))
								{
									if (fVar12 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1668[iVar0], &cLocal_2509))
									{
										Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_2936[iVar0], 1) };
										Var6 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_1668[iVar0], fVar12, &cLocal_2509) };
										if (((!func_280(Var3, Var9, 5f, fLocal_1207) && func_280(Var6, Var9, 5f, fLocal_1207)) && !iLocal_65) && !bParam2)
										{
											if (!MISC::IS_BIT_SET(iLocal_1750[iVar0], 1))
											{
												func_276(&(iLocal_2936[iVar0]), iVar19, 1);
											}
											iLocal_1818++;
											iLocal_1709[iVar0]++;
										}
										else if (((!bLocal_82 || MISC::IS_BIT_SET(iLocal_1750[iVar0], 1)) || iLocal_65) || bParam2)
										{
											if (func_269(&(iLocal_2936[iVar0]), iLocal_1668[iVar0], fVar12, 1, 0, 0, bLocal_80, bLocal_79))
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_2936[iVar0], (fParam1 * fLocal_1049[iVar0]));
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2936[iVar0], 0))
												{
													if (MISC::IS_BIT_SET(iLocal_1750[iVar0], 0))
													{
														VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2936[iVar0], 1, 1);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_2936[iVar0], 1);
														VEHICLE::SET_VEHICLE_LIGHTS(iLocal_2936[iVar0], 2);
														if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2703[iVar0]))
														{
															AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_2936[iVar0], 1);
														}
													}
												}
												if (!MISC::IS_BIT_SET(iLocal_1750[iVar0], 1))
												{
													func_276(&(iLocal_2936[iVar0]), iVar19, 1);
												}
												iLocal_1818++;
												iLocal_1709[iVar0]++;
											}
										}
									}
									else
									{
										if (!MISC::IS_BIT_SET(iLocal_1750[iVar0], 1))
										{
											func_276(&(iLocal_2936[iVar0]), iVar19, 1);
										}
										iLocal_1818++;
										iLocal_1709[iVar0]++;
									}
								}
							}
							else
							{
								if (!MISC::IS_BIT_SET(iLocal_1750[iVar0], 1))
								{
									func_276(&(iLocal_2936[iVar0]), iVar19, 1);
								}
								iLocal_1818++;
								iLocal_1709[iVar0]++;
							}
						}
					}
					else
					{
						if (!MISC::IS_BIT_SET(iLocal_1750[iVar0], 1))
						{
							func_276(&(iLocal_2936[iVar0]), iVar19, 1);
						}
						iLocal_1818++;
						iLocal_1709[iVar0]++;
					}
				}
				else if (iLocal_1709[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2936[iVar0], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2936[iVar0]))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2936[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (bVar15)
								{
									if (((!bLocal_55 && !iLocal_52) && !bLocal_71) && (((!bLocal_80 && !bLocal_79) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_2936[iVar0])) || func_275(iLocal_2936[iVar0])))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar2))
										{
											bVar14 = false;
											if (bLocal_73)
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
												else if (MISC::ABSF((fVar13 - ENTITY::GET_ENTITY_SPEED(iLocal_2936[iVar0]))) > 15f)
												{
													bVar14 = true;
												}
												else if (!GlobalFunc_5655(iLocal_2936[iVar0], iVar2, 45f))
												{
													bVar14 = true;
												}
												else if (GlobalFunc_5654(iVar2, iLocal_2936[iVar0], 0))
												{
													bVar14 = true;
												}
											}
											if (bVar14)
											{
												func_271(iLocal_2936[iVar0]);
												iLocal_1709[iVar0]++;
											}
										}
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_2936[iVar0], (fParam1 * fLocal_1049[iVar0]));
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2936[iVar0]);
							}
						}
						else
						{
							iLocal_1709[iVar0]++;
						}
					}
					else
					{
						iLocal_1709[iVar0]++;
					}
				}
				else if (iLocal_1709[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2936[iVar0], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2936[iVar0]))
						{
							iLocal_1709[iVar0]++;
						}
						else
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2936[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_2936[iVar0], (fParam1 * fLocal_1049[iVar0]));
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2936[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1668[iVar0], &cLocal_2509))
							{
								if (fLocal_1196 > (fLocal_1008[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1668[iVar0], &cLocal_2509)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2936[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2936[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1709[iVar0]++;
					}
				}
				else if (iLocal_1709[iVar0] == 5)
				{
					if (!iLocal_2936[iVar0] == iLocal_2990)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2936[iVar0], 0))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2936[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								iVar20 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, 242628503);
								if (iVar20 == 7)
								{
									fVar13 = ENTITY::GET_ENTITY_SPEED(iLocal_2936[iVar0]);
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
						if (!bLocal_63 && !bLocal_76)
						{
							if (iLocal_1668[iVar0] > 0)
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1668[iVar0], &cLocal_2509);
							}
						}
						if (!bLocal_53)
						{
							if (!bLocal_81)
							{
								GlobalFunc_2210(iLocal_2936[iVar0]);
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_2936[iVar0]))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_2936[iVar0]));
						}
					}
					iLocal_1818 = (iLocal_1818 - 1);
					iLocal_1709[iVar0] = 99;
				}
				if (!bVar18)
				{
					iLocal_1823 = iVar0;
					bVar18 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_258();
	}
}

void func_271(int iParam0)//Position - 0x17D7A
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_260(iParam0);
		VEHICLE::SET_PLAYBACK_TO_USE_AI(iParam0, 786603);
	}
}




int func_275(var uParam0)//Position - 0x17EDD
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bLocal_77)
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

int func_276(var uParam0, int iParam1, bool bParam2)//Position - 0x17F3A
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, -1))
		{
			if (iParam1 == 2)
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, GlobalFunc_2211(), -1, 0, 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iLocal_2525);
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
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 4, func_266(), -1, 0, 0);
				if (bLocal_83)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_266());
				}
			}
			if (bParam2)
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar0, 1);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iVar0, 0);
				PED::SET_PED_CONFIG_FLAG(iVar0, 32, 0);
			}
			if (bLocal_84)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(*uParam0, 1);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 1);
			GlobalFunc_2221(iVar0);
			bLocal_82 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}


void func_278(var uParam0)//Position - 0x1804A
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iLocal_2745 >= -1 && iLocal_2746 >= -1)
	{
		while (iVar0 == iLocal_2745 || iVar0 == iLocal_2746)
		{
			iVar0++;
		}
	}
	else if (iLocal_2745 >= -1)
	{
		if (iVar0 == iLocal_2745)
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
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 2, 2);
			break;
		
		case 2:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 4, 4);
			break;
		
		case 3:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 27, 27);
			break;
		
		case 4:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 7, 7);
			break;
		
		case 5:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 73, 73);
			break;
		
		case 6:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 68, 68);
			break;
		
		case 7:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 62, 62);
			break;
		
		case 8:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 132, 132);
			break;
		
		case 9:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 117, 0);
			break;
		
		case 10:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 52, 52);
			break;
		
		case 11:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 88, 88);
			break;
		
		case 12:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 1, 1);
			break;
		
		case 13:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 36, 36);
			break;
		
		case 14:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 95, 95);
			break;
		
		default:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 73, 73);
			break;
	}
}

void func_279(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x181C3
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (!bLocal_64)
	{
		if (!func_280(Param0, Param3, fParam6, 200f))
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

int func_280(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7)//Position - 0x18233
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!bLocal_64)
		{
			if (!iLocal_51)
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

float func_281(int iParam0)//Position - 0x1827A
{
	var uVar0;
	
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, &cLocal_2509);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, &cLocal_2509))
	{
		SYSTEM::WAIT(0);
	}
	uVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam0, &cLocal_2509);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, &cLocal_2509);
	return uVar0;
}


void func_283(int iParam0)//Position - 0x18330
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
		iVar0 = iLocal_1822;
		while (iVar0 < 25)
		{
			switch (iLocal_1791[iVar0])
			{
				case 0:
					if (!iLocal_2677[iVar0] == 0)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Local_2285[iVar0 /*3*/], fLocal_1194, fLocal_1194, fLocal_1194, 0, 1, 0))
						{
							iLocal_1824++;
							iLocal_1791[iVar0]++;
						}
					}
					else
					{
						iLocal_1791[iVar0] = 99;
					}
					break;
				
				case 1:
					if (10 > iLocal_1819)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2910[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_2677[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_2677[iVar0]))
							{
								if ((iLocal_51 || iLocal_65) || (!bLocal_82 && !func_280(Local_2285[iVar0 /*3*/], Var1, 5f, fLocal_1207)))
								{
									if (bLocal_61)
									{
										func_279(Local_2285[iVar0 /*3*/], Var1, fLocal_1200);
									}
									iLocal_2910[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_2677[iVar0], Local_2285[iVar0 /*3*/], 0f, 0, 0);
									if (iLocal_2677[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_2910[iVar0], 0);
									}
									ENTITY::SET_ENTITY_QUATERNION(iLocal_2910[iVar0], fLocal_1090[iVar0], fLocal_1116[iVar0], fLocal_1142[iVar0], fLocal_1168[iVar0]);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2677[iVar0]);
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_2910[iVar0], GlobalFunc_2212()))
									{
										VEHICLE::SET_VEHICLE_SIREN(iLocal_2910[iVar0], 1);
										if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2677[iVar0]))
										{
											AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_2910[iVar0], 1);
										}
									}
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_2910[iVar0], GlobalFunc_2213()))
									{
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_2910[iVar0], 0, 0);
									}
									ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_2910[iVar0], 1);
									iLocal_1824 = (iLocal_1824 - 1);
									iLocal_1819++;
									iLocal_1791[iVar0]++;
									bLocal_82 = true;
								}
							}
						}
						else
						{
							iLocal_1824 = (iLocal_1824 - 1);
							iLocal_1819++;
							iLocal_1791[iVar0]++;
						}
					}
					break;
				
				case 2:
					if (!bVar7)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2910[iVar0], 0))
						{
							Var4 = { ENTITY::GET_ENTITY_COORDS(iLocal_2910[iVar0], 1) };
						}
						if (fLocal_1208 == 0f || SYSTEM::VDIST2(Var1, Var4) < (fLocal_1208 * fLocal_1208))
						{
							if (!GlobalFunc_5654(iLocal_2910[iVar0], iParam0, 0))
							{
								if (!bLocal_53)
								{
									GlobalFunc_2210(iLocal_2910[iVar0]);
								}
								else
								{
									VEHICLE::DELETE_VEHICLE(&(iLocal_2910[iVar0]));
								}
								iLocal_1819 = (iLocal_1819 - 1);
								iLocal_1791[iVar0] = 99;
								bVar7 = true;
							}
						}
					}
					break;
			}
			if (iLocal_1791[iVar0] != 99)
			{
				if (!bVar8)
				{
					iLocal_1822 = iVar0;
					bVar8 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_261();
	}
}

void func_284(int iParam0, float fParam1, int iParam2)//Position - 0x18627
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
			fLocal_1196 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
		}
		iVar22 = -1;
		bVar23 = false;
		bVar24 = false;
		iVar0 = iLocal_1821;
		while (iVar0 < 150 && !bVar23)
		{
			if (iLocal_1366[iVar0] != 99)
			{
				if (iLocal_1366[iVar0] == 0)
				{
					if (iLocal_1215[iVar0] > 0 && iLocal_2526[iVar0] != 0)
					{
						if (!iLocal_51)
						{
							if (fLocal_1196 < (fLocal_689[iVar0] + 20000f))
							{
								if (fLocal_1196 >= (fLocal_689[iVar0] - (7000f * fParam1)))
								{
									if (GlobalFunc_2222(iLocal_2526[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1517[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2526[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1517[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_1517[iVar0]), 1);
									iLocal_1826++;
									iLocal_1366[iVar0]++;
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
								func_286(iVar0, 1090519040);
							}
						}
						else
						{
							fVar15 = (fLocal_1196 - fLocal_689[iVar0]);
							if (fVar15 >= 0f)
							{
								if (fVar15 < func_281(iLocal_1215[iVar0]))
								{
									if (GlobalFunc_2222(iLocal_2526[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1517[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2526[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1517[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_1517[iVar0]), 1);
									iLocal_1826++;
									iLocal_1366[iVar0]++;
								}
								else
								{
									func_286(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_286(iVar0, 1090519040);
					}
				}
				else if (iLocal_1366[iVar0] == 1)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1215[iVar0], &cLocal_2509);
					bVar17 = false;
					if (MISC::IS_BIT_SET(iLocal_1517[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2211());
						if (STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211()))
						{
							bVar17 = true;
						}
					}
					else if (!bLocal_78 && ((!MISC::IS_BIT_SET(iLocal_1517[iVar0], 2) && uVar19) || (MISC::IS_BIT_SET(iLocal_1517[iVar0], 2) && uVar20)))
					{
						bVar17 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_266());
						bVar17 = STREAMING::HAS_MODEL_LOADED(func_266());
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2747[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_2526[iVar0]);
						if ((STREAMING::HAS_MODEL_LOADED(iLocal_2526[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1215[iVar0], &cLocal_2509)) && bVar17)
						{
							if (fLocal_1196 >= (fLocal_689[iVar0] - (fLocal_1209 * fParam1)))
							{
								if ((iLocal_65 || iParam2) || (!bLocal_82 && !func_280(Local_1834[iVar0 /*3*/], Var12, 5f, fLocal_1207)))
								{
									if (bLocal_61)
									{
										func_279(Local_1834[iVar0 /*3*/], Var12, fLocal_1200);
									}
									iLocal_2747[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_2526[iVar0], Local_1834[iVar0 /*3*/], 0f, 0, 0);
									if (iLocal_2526[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_2747[iVar0], 0);
									}
									if (uLocal_74 && !MISC::IS_BIT_SET(iLocal_1517[iVar0], 0))
									{
										func_278(iLocal_2747[iVar0]);
									}
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_2747[iVar0], Local_1834[iVar0 /*3*/], 0, 0, 1);
									ENTITY::SET_ENTITY_QUATERNION(iLocal_2747[iVar0], fLocal_85[iVar0], fLocal_236[iVar0], fLocal_387[iVar0], fLocal_538[iVar0]);
									if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_2526[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2526[iVar0]))
									{
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2747[iVar0]);
									}
									if (MISC::IS_BIT_SET(iLocal_1517[iVar0], 3))
									{
										ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_2747[iVar0], 1);
									}
									if (!MISC::IS_BIT_SET(iLocal_1517[iVar0], 0))
									{
										VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2747[iVar0], 1, 1);
										if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
										{
											VEHICLE::SET_VEHICLE_LIGHTS(iLocal_2747[iVar0], 3);
										}
									}
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_2747[iVar0], 1);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_2747[iVar0], 1);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2526[iVar0]);
									iLocal_1826 = (iLocal_1826 - 1);
									iLocal_1366[iVar0]++;
									bLocal_82 = true;
								}
								else if (fLocal_1196 > fLocal_689[iVar0])
								{
									iLocal_1826 = (iLocal_1826 - 1);
									func_286(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_1366[iVar0] == 2)
				{
					bVar17 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_1832 || iLocal_1832 == 0)) || iLocal_65) || iParam2)
					{
						if (!MISC::IS_BIT_SET(iLocal_1517[iVar0], 1))
						{
							if (MISC::IS_BIT_SET(iLocal_1517[iVar0], 0))
							{
								STREAMING::REQUEST_MODEL(GlobalFunc_2211());
								bVar17 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
								iVar21 = 2;
							}
							else if (!bLocal_78 && ((!MISC::IS_BIT_SET(iLocal_1517[iVar0], 2) && uVar19) || (MISC::IS_BIT_SET(iLocal_1517[iVar0], 2) && uVar20)))
							{
								bVar17 = true;
								iVar21 = 1;
							}
							else
							{
								STREAMING::REQUEST_MODEL(func_266());
								bVar17 = STREAMING::HAS_MODEL_LOADED(func_266());
								iVar21 = 0;
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_2747[iVar0]))
							{
								if (!bLocal_82 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2747[iVar0], -1))
								{
									if (bVar17)
									{
										if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_2747[iVar0], 1), Var12) < 10000f || iParam2) || iLocal_65)
										{
											func_276(&(iLocal_2747[iVar0]), iVar21, 0);
											MISC::SET_BIT(&(iLocal_1517[iVar0]), 1);
										}
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2747[iVar0], 0))
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1215[iVar0], &cLocal_2509);
							if (fLocal_1196 >= fLocal_689[iVar0])
							{
								if (11 > iLocal_1817)
								{
									fVar15 = (fLocal_1196 - fLocal_689[iVar0]);
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1215[iVar0], &cLocal_2509))
									{
										if (fVar15 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1215[iVar0], &cLocal_2509))
										{
											Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_2747[iVar0], 1) };
											Var9 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_1215[iVar0], fVar15, &cLocal_2509) };
											if (!func_280(Var6, Var12, 5f, fLocal_1207) && func_280(Var9, Var12, 5f, fLocal_1207))
											{
												if (!MISC::IS_BIT_SET(iLocal_1517[iVar0], 1))
												{
													func_276(&(iLocal_2747[iVar0]), iVar21, 0);
												}
												func_286(iVar0, 1090519040);
											}
											else if (((!bLocal_82 || MISC::IS_BIT_SET(iLocal_1517[iVar0], 1)) || iLocal_65) || iParam2)
											{
												if (func_269(&(iLocal_2747[iVar0]), iLocal_1215[iVar0], fVar15, 1, 0, 0, 1, bLocal_79))
												{
													if (!MISC::IS_BIT_SET(iLocal_1517[iVar0], 1))
													{
														func_276(&(iLocal_2747[iVar0]), iVar21, 0);
													}
													ENTITY::SET_ENTITY_COLLISION(iLocal_2747[iVar0], 1, 0);
													VEHICLE::SET_PLAYBACK_SPEED(iLocal_2747[iVar0], fParam1);
													iLocal_1817++;
													iLocal_1366[iVar0]++;
												}
											}
										}
										else
										{
											if (!MISC::IS_BIT_SET(iLocal_1517[iVar0], 1))
											{
												func_276(&(iLocal_2747[iVar0]), iVar21, 0);
											}
											func_286(iVar0, 1090519040);
										}
									}
									else if (fVar15 > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1215[iVar0], &cLocal_2509))
									{
										if (!MISC::IS_BIT_SET(iLocal_1517[iVar0], 1))
										{
											func_276(&(iLocal_2747[iVar0]), iVar21, 0);
										}
										func_286(iVar0, 1090519040);
									}
								}
								else
								{
									if (!MISC::IS_BIT_SET(iLocal_1517[iVar0], 1))
									{
										func_276(&(iLocal_2747[iVar0]), iVar21, 0);
									}
									func_286(iVar0, 1090519040);
								}
							}
							else if (iLocal_62 && !bLocal_70)
							{
								if (!MISC::IS_BIT_SET(iLocal_1517[iVar0], 1))
								{
									func_276(&(iLocal_2747[iVar0]), iVar21, 0);
								}
								func_286(iVar0, 1090519040);
							}
						}
						else
						{
							if (!MISC::IS_BIT_SET(iLocal_1517[iVar0], 1))
							{
								func_276(&(iLocal_2747[iVar0]), iVar21, 0);
							}
							func_286(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_1832 = iVar0;
					}
				}
				else if (iLocal_1366[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2747[iVar0], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2747[iVar0]))
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2747[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								if (bVar18)
								{
									bVar24 = false;
									if (!bLocal_60)
									{
										if ((!bLocal_55 && !iLocal_52) && func_275(iLocal_2747[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_1831 || iLocal_1831 == 0))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iVar5))
												{
													bVar17 = false;
													if (!GlobalFunc_5656(iLocal_2747[iVar0], iVar5) || GlobalFunc_5654(iVar5, iLocal_2747[iVar0], 0))
													{
														bVar24 = true;
													}
												}
												iLocal_1831 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_75 && !MISC::IS_BIT_SET(iLocal_1517[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_1831 || iLocal_1831 == 0))
										{
											Var25 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iLocal_2747[iVar0], 1)) };
											if (Var25.f_1 < 0f)
											{
												if (MISC::ABSF(Var25.f_1) > MISC::ABSF(Var25.x))
												{
													bVar24 = true;
												}
											}
											iVar2++;
											iLocal_1831 = iVar0;
										}
									}
									if (bVar24)
									{
										func_271(iLocal_2747[iVar0]);
										iLocal_1366[iVar0]++;
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_2747[iVar0], fParam1);
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2747[iVar0]);
							}
						}
						else
						{
							iLocal_1366[iVar0]++;
						}
					}
					else
					{
						iLocal_1366[iVar0]++;
					}
				}
				else if (iLocal_1366[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2747[iVar0], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2747[iVar0]))
						{
							iLocal_1366[iVar0]++;
						}
						else
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2747[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_2747[iVar0], fParam1);
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2747[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1215[iVar0], &cLocal_2509))
							{
								if (fLocal_1196 > (fLocal_689[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1215[iVar0], &cLocal_2509)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2747[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2747[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1366[iVar0]++;
					}
				}
				else if (iLocal_1366[iVar0] == 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2747[iVar0]))
					{
						fVar16 = ENTITY::GET_ENTITY_SPEED(iLocal_2747[iVar0]);
					}
					iLocal_1817 = (iLocal_1817 - 1);
					func_286(iVar0, fVar16);
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
			iLocal_1821 = iVar22;
		}
		if (iVar2 < 3)
		{
			iLocal_1831 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_1832 = 0;
		}
	}
	else
	{
		func_262();
	}
}


void func_286(int iParam0, float fParam1)//Position - 0x191F1
{
	int iVar0;
	
	if (!iLocal_2526[iParam0] == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2526[iParam0]);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_2747[iParam0]))
	{
		ENTITY::SET_ENTITY_COLLISION(iLocal_2747[iParam0], 1, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_2747[iParam0], 0);
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2747[iParam0], -1);
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
			TASK::TASK_VEHICLE_MISSION(iVar0, iLocal_2747[iParam0], 0, 1, fParam1, 786603, 5f, 5f, 1);
			PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
			if (bLocal_84)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, 0);
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar0, fParam1);
		}
	}
	if (!bLocal_53)
	{
		if (!bLocal_81)
		{
			GlobalFunc_2221(iVar0);
			GlobalFunc_2210(iLocal_2747[iParam0]);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::DELETE_PED(&iVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2747[iParam0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_2747[iParam0]));
		}
	}
	if (!bLocal_63 && !bLocal_76)
	{
		if (iLocal_1215[iParam0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1215[iParam0], &cLocal_2509);
		}
	}
	iLocal_1366[iParam0] = 99;
}

void func_287(int iParam0, float fParam1, float fParam2)//Position - 0x1934A
{
	int iVar0;
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
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			Var1 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fParam1) };
			Var4 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			Var7 = { Var4 - Var1 };
			fVar13 = SYSTEM::VMAG(Var7);
			if (fVar13 > fParam2)
			{
				fVar13 = fParam2;
			}
			func_279(Var1, Var10, fVar13);
		}
	}
}

void func_288(int iParam0, float fParam1)//Position - 0x193CD
{
	if (!bLocal_64)
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

void func_289(int iParam0, float fParam1)//Position - 0x1941A
{
	if (!bLocal_64)
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

void func_290(int iParam0, float fParam1)//Position - 0x19467
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
	{
		fVar1 = (fLocal_1210 + 2000f);
		fVar2 = (fLocal_1211 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (fVar1 <= VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(iVar0))
			{
				if (iLocal_1827 == 0)
				{
					Local_2497 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_1210) };
					iLocal_1827++;
				}
				else if (iLocal_1827 == 1)
				{
					Local_2500 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar1) };
					iLocal_1827++;
				}
				else if (!bLocal_82)
				{
					if (Local_2497.x > Local_2500.x)
					{
						fVar3 = Local_2497.x;
						Local_2497.x = Local_2500.x;
						Local_2500.x = fVar3;
					}
					if (Local_2497.f_1 > Local_2500.f_1)
					{
						fVar3 = Local_2497.f_1;
						Local_2497.f_1 = Local_2500.f_1;
						Local_2500.f_1 = fVar3;
					}
					if (Local_2497.f_2 > Local_2500.f_2)
					{
						fVar3 = Local_2497.f_2;
						Local_2497.f_2 = Local_2500.f_2;
						Local_2500.f_2 = fVar3;
					}
					Local_2497 = { Local_2497 - Vector(fLocal_1214, fLocal_1214, fLocal_1214) };
					Local_2500 = { Local_2500 + Vector(fLocal_1214, fLocal_1214, fLocal_1214) };
					PATHFIND::SET_ROADS_IN_AREA(Local_2497, Local_2500, 0, 0);
					fLocal_1210 = fVar1;
					iLocal_1827 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (iLocal_1830 == 0)
			{
				Local_2503 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_1211) };
				iLocal_1830++;
			}
			else if (iLocal_1830 == 1)
			{
				Local_2506 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar2) };
				iLocal_1830++;
			}
			else if (!bLocal_82 && !bVar4)
			{
				if (Local_2503.x > Local_2506.x)
				{
					fVar3 = Local_2503.x;
					Local_2503.x = Local_2506.x;
					Local_2506.x = fVar3;
				}
				if (Local_2503.f_1 > Local_2506.f_1)
				{
					fVar3 = Local_2503.f_1;
					Local_2503.f_1 = Local_2506.f_1;
					Local_2506.f_1 = fVar3;
				}
				if (Local_2503.f_2 > Local_2506.f_2)
				{
					fVar3 = Local_2503.f_2;
					Local_2503.f_2 = Local_2506.f_2;
					Local_2506.f_2 = fVar3;
				}
				Local_2503 = { Local_2503 - Vector(fLocal_1214, fLocal_1214, fLocal_1214) };
				Local_2506 = { Local_2506 + Vector(fLocal_1214, fLocal_1214, fLocal_1214) };
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_2503, Local_2506, 1);
				fLocal_1211 = fVar2;
				iLocal_1830 = 0;
			}
		}
	}
}



void func_293(float fParam0)//Position - 0x1979F
{
	int iVar0;
	
	if (fLocal_3545 < fParam0)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iLocal_2747)
		{
			if (iLocal_1215[iVar0] != 0)
			{
				if (fLocal_689[iVar0] < fParam0)
				{
					STREAMING::REQUEST_MODEL(iLocal_2526[iVar0]);
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1215[iVar0], "FH1UBER");
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_2936)
		{
			if (iLocal_1668[iVar0] != 0)
			{
				if (fLocal_1008[iVar0] < fParam0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2936[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_2703[iVar0]);
					}
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1668[iVar0], "FH1UBER");
				}
			}
			iVar0++;
		}
	}
}


void func_295()//Position - 0x19878
{
	Local_1834[0 /*3*/] = { 1094.902f, -1724.992f, 28.7513f };
	fLocal_85[0] = 0.0003f;
	fLocal_236[0] = -0.002f;
	fLocal_387[0] = 0.9865f;
	fLocal_538[0] = -0.1636f;
	iLocal_1215[0] = 1;
	fLocal_689[0] = 2970f;
	iLocal_2526[0] = joaat("premier");
	Local_1834[1 /*3*/] = { 1124.55f, -1741.142f, 28.9311f };
	fLocal_85[1] = 0.0008f;
	fLocal_236[1] = -0.0002f;
	fLocal_387[1] = 0.1767f;
	fLocal_538[1] = 0.9843f;
	iLocal_1215[1] = 2;
	fLocal_689[1] = 3102f;
	iLocal_2526[1] = joaat("serrano");
	Local_1834[2 /*3*/] = { 1098.379f, -1748.809f, 35.1966f };
	fLocal_85[2] = -0.0009f;
	fLocal_236[2] = 0.0009f;
	fLocal_387[2] = -0.5723f;
	fLocal_538[2] = 0.82f;
	iLocal_1215[2] = 3;
	fLocal_689[2] = 3564f;
	iLocal_2526[2] = joaat("premier");
	Local_1834[3 /*3*/] = { 1079.288f, -1712.608f, 29.0574f };
	fLocal_85[3] = 0f;
	fLocal_236[3] = -0.0001f;
	fLocal_387[3] = 0.987f;
	fLocal_538[3] = -0.1608f;
	iLocal_1215[3] = 4;
	fLocal_689[3] = 4092f;
	iLocal_2526[3] = joaat("serrano");
	Local_1834[4 /*3*/] = { 1084.335f, -1748.208f, 35.4187f };
	fLocal_85[4] = 0.0002f;
	fLocal_236[4] = -0.0001f;
	fLocal_387[4] = -0.5776f;
	fLocal_538[4] = 0.8163f;
	iLocal_1215[4] = 5;
	fLocal_689[4] = 4488f;
	iLocal_2526[4] = joaat("serrano");
	Local_1834[5 /*3*/] = { 1059.959f, -1730.447f, 35.2553f };
	fLocal_85[5] = -0.0013f;
	fLocal_236[5] = 0.0083f;
	fLocal_387[5] = 0.9843f;
	fLocal_538[5] = -0.1765f;
	iLocal_1215[5] = 6;
	fLocal_689[5] = 5610f;
	iLocal_2526[5] = joaat("serrano");
	Local_1834[6 /*3*/] = { 1057.144f, -1722.025f, 35.1296f };
	fLocal_85[6] = -0.0015f;
	fLocal_236[6] = 0.0094f;
	fLocal_387[6] = 0.9877f;
	fLocal_538[6] = -0.156f;
	iLocal_1215[6] = 7;
	fLocal_689[6] = 5742f;
	iLocal_2526[6] = joaat("serrano");
	Local_1834[7 /*3*/] = { 1066.244f, -1754.848f, 35.3732f };
	fLocal_85[7] = -0.0011f;
	fLocal_236[7] = 0.0006f;
	fLocal_387[7] = -0.5739f;
	fLocal_538[7] = 0.8189f;
	iLocal_1215[7] = 8;
	fLocal_689[7] = 5874f;
	iLocal_2526[7] = joaat("serrano");
	Local_1834[8 /*3*/] = { 1059.578f, -1759.783f, 35.0615f };
	fLocal_85[8] = 0.0005f;
	fLocal_236[8] = 0f;
	fLocal_387[8] = -0.4766f;
	fLocal_538[8] = 0.8791f;
	iLocal_1215[8] = 9;
	fLocal_689[8] = 6402f;
	iLocal_2526[8] = joaat("premier");
	Local_1834[9 /*3*/] = { 1057.03f, -1757.436f, 35.1548f };
	fLocal_85[9] = -0.0005f;
	fLocal_236[9] = 0.0007f;
	fLocal_387[9] = -0.5842f;
	fLocal_538[9] = 0.8116f;
	iLocal_1215[9] = 10;
	fLocal_689[9] = 6468f;
	iLocal_2526[9] = joaat("premier");
	Local_1834[10 /*3*/] = { 1027.852f, -1770.671f, 35.2252f };
	fLocal_85[10] = 0.0414f;
	fLocal_236[10] = -0.0311f;
	fLocal_387[10] = -0.6375f;
	fLocal_538[10] = 0.7687f;
	iLocal_1215[10] = 11;
	fLocal_689[10] = 8250f;
	iLocal_2526[10] = joaat("premier");
	Local_1834[11 /*3*/] = { 867.5558f, -1748.652f, 29.4237f };
	fLocal_85[11] = -0.0075f;
	fLocal_236[11] = -0.0064f;
	fLocal_387[11] = 0.6388f;
	fLocal_538[11] = 0.7693f;
	iLocal_1215[11] = 12;
	fLocal_689[11] = 17754f;
	iLocal_2526[11] = joaat("serrano");
	Local_1834[12 /*3*/] = { 860.624f, -1747.185f, 28.9555f };
	fLocal_85[12] = -0.0082f;
	fLocal_236[12] = -0.0064f;
	fLocal_387[12] = 0.6768f;
	fLocal_538[12] = 0.7361f;
	iLocal_1215[12] = 13;
	fLocal_689[12] = 18216f;
	iLocal_2526[12] = joaat("premier");
	Local_1834[13 /*3*/] = { 860.9755f, -1742.043f, 29.0624f };
	fLocal_85[13] = -0.0066f;
	fLocal_236[13] = -0.0052f;
	fLocal_387[13] = 0.6624f;
	fLocal_538[13] = 0.7491f;
	iLocal_1215[13] = 14;
	fLocal_689[13] = 18216f;
	iLocal_2526[13] = joaat("premier");
	Local_1834[14 /*3*/] = { 845.2426f, -1762.833f, 28.6199f };
	fLocal_85[14] = 0.0017f;
	fLocal_236[14] = -0.0013f;
	fLocal_387[14] = -0.6127f;
	fLocal_538[14] = 0.7903f;
	iLocal_1215[14] = 15;
	fLocal_689[14] = 19668f;
	iLocal_2526[14] = joaat("premier");
	Local_1834[15 /*3*/] = { 837.1574f, -1723.886f, 28.7141f };
	fLocal_85[15] = -0.0005f;
	fLocal_236[15] = 0f;
	fLocal_387[15] = -0.0404f;
	fLocal_538[15] = 0.9992f;
	iLocal_1215[15] = 16;
	fLocal_689[15] = 19932f;
	iLocal_2526[15] = joaat("premier");
	Local_1834[16 /*3*/] = { 801.6107f, -1752.743f, 28.7486f };
	fLocal_85[16] = 0.0028f;
	fLocal_236[16] = -0.0031f;
	fLocal_387[16] = 0.7449f;
	fLocal_538[16] = -0.6671f;
	iLocal_1215[16] = 17;
	fLocal_689[16] = 21780f;
	iLocal_2526[16] = joaat("premier");
	Local_1834[17 /*3*/] = { 789.3914f, -1751.373f, 28.8925f };
	fLocal_85[17] = 0.0032f;
	fLocal_236[17] = -0.0037f;
	fLocal_387[17] = 0.753f;
	fLocal_538[17] = -0.658f;
	iLocal_1215[17] = 18;
	fLocal_689[17] = 22506f;
	iLocal_2526[17] = joaat("premier");
	Local_1834[18 /*3*/] = { 768.2957f, -1744.755f, 29.0428f };
	fLocal_85[18] = 0.0008f;
	fLocal_236[18] = -0.0008f;
	fLocal_387[18] = -0.6955f;
	fLocal_538[18] = 0.7185f;
	iLocal_1215[18] = 19;
	fLocal_689[18] = 24420f;
	iLocal_2526[18] = joaat("premier");
	Local_1834[19 /*3*/] = { 848.1189f, -1592.211f, 31.3671f };
	fLocal_85[19] = -0.0098f;
	fLocal_236[19] = -0.0003f;
	fLocal_387[19] = 0.0308f;
	fLocal_538[19] = 0.9995f;
	iLocal_1215[19] = 20;
	fLocal_689[19] = 29766f;
	iLocal_2526[19] = joaat("serrano");
	Local_1834[20 /*3*/] = { 789.3643f, -1395.058f, 26.5083f };
	fLocal_85[20] = -0.0005f;
	fLocal_236[20] = 0.0083f;
	fLocal_387[20] = 0.9999f;
	fLocal_538[20] = -0.0085f;
	iLocal_1215[20] = 21;
	fLocal_689[20] = 41008f;
	iLocal_2526[20] = joaat("premier");
	Local_2285[0 /*3*/] = { 707.8363f, -1395.978f, 25.8513f };
	fLocal_1090[0] = -0.0024f;
	fLocal_1116[0] = 0.0013f;
	fLocal_1142[0] = 0.806f;
	fLocal_1168[0] = 0.5919f;
	iLocal_2677[0] = joaat("premier");
	Local_2285[1 /*3*/] = { 709.5156f, -1401.885f, 25.9322f };
	fLocal_1090[1] = -0.0006f;
	fLocal_1116[1] = -0.0007f;
	fLocal_1142[1] = 0.7992f;
	fLocal_1168[1] = 0.6011f;
	iLocal_2677[1] = joaat("premier");
	Local_1834[21 /*3*/] = { 656.9852f, -1438.735f, 30.5204f };
	fLocal_85[21] = -0.0061f;
	fLocal_236[21] = 0.0032f;
	fLocal_387[21] = 0.7272f;
	fLocal_538[21] = -0.6864f;
	iLocal_1215[21] = 22;
	fLocal_689[21] = 52624f;
	iLocal_2526[21] = joaat("serrano");
	Local_1834[22 /*3*/] = { 649.5815f, -1443.637f, 30.0296f };
	fLocal_85[22] = -0.0048f;
	fLocal_236[22] = 0.0041f;
	fLocal_387[22] = 0.7389f;
	fLocal_538[22] = -0.6738f;
	iLocal_1215[22] = 23;
	fLocal_689[22] = 53812f;
	iLocal_2526[22] = joaat("premier");
	Local_1834[23 /*3*/] = { 538.8035f, -1418.047f, 28.665f };
	fLocal_85[23] = 0.0003f;
	fLocal_236[23] = 0f;
	fLocal_387[23] = 0.0253f;
	fLocal_538[23] = 0.9997f;
	iLocal_1215[23] = 24;
	fLocal_689[23] = 59290f;
	iLocal_2526[23] = joaat("premier");
	Local_1834[24 /*3*/] = { 533.0499f, -1416.284f, 28.9904f };
	fLocal_85[24] = 0f;
	fLocal_236[24] = 0.0002f;
	fLocal_387[24] = 1f;
	fLocal_538[24] = 0.0034f;
	iLocal_1215[24] = 25;
	fLocal_689[24] = 59620f;
	iLocal_2526[24] = joaat("serrano");
	Local_1834[25 /*3*/] = { 484.86f, -1444.991f, 28.7354f };
	fLocal_85[25] = 0.0004f;
	fLocal_236[25] = 0.0002f;
	fLocal_387[25] = -0.7033f;
	fLocal_538[25] = 0.7109f;
	iLocal_1215[25] = 26;
	fLocal_689[25] = 61996f;
	iLocal_2526[25] = joaat("premier");
	Local_1834[26 /*3*/] = { 471.0496f, -1415.132f, 28.9925f };
	fLocal_85[26] = -0.0002f;
	fLocal_236[26] = -0.0002f;
	fLocal_387[26] = 0.5543f;
	fLocal_538[26] = 0.8323f;
	iLocal_1215[26] = 27;
	fLocal_689[26] = 62788f;
	iLocal_2526[26] = joaat("premier");
	Local_2285[2 /*3*/] = { 501.9684f, -1337.36f, 28.7765f };
	fLocal_1090[2] = -0.0015f;
	fLocal_1116[2] = 0.0014f;
	fLocal_1142[2] = -0.4395f;
	fLocal_1168[2] = 0.8982f;
	iLocal_2677[2] = joaat("premier");
	Local_2285[3 /*3*/] = { 503.8632f, -1340.453f, 28.8254f };
	fLocal_1090[3] = 0.0006f;
	fLocal_1116[3] = 0.0004f;
	fLocal_1142[3] = -0.3988f;
	fLocal_1168[3] = 0.917f;
	iLocal_2677[3] = joaat("premier");
	Local_1834[27 /*3*/] = { 521.3064f, -1324.276f, 28.8192f };
	fLocal_85[27] = 0.0012f;
	fLocal_236[27] = 0.0014f;
	fLocal_387[27] = 0.3395f;
	fLocal_538[27] = 0.9406f;
	iLocal_1215[27] = 28;
	fLocal_689[27] = 66154f;
	iLocal_2526[27] = joaat("premier");
	Local_1834[28 /*3*/] = { 493.0157f, -1260.196f, 28.8755f };
	fLocal_85[28] = 0.0022f;
	fLocal_236[28] = -0.0021f;
	fLocal_387[28] = 0.7097f;
	fLocal_538[28] = -0.7045f;
	iLocal_1215[28] = 29;
	fLocal_689[28] = 70444f;
	iLocal_2526[28] = joaat("premier");
	Local_1834[29 /*3*/] = { 485.2056f, -1193.514f, 41.2846f };
	fLocal_85[29] = -0.0029f;
	fLocal_236[29] = -0.0028f;
	fLocal_387[29] = 0.6941f;
	fLocal_538[29] = 0.7199f;
	iLocal_1215[29] = 30;
	fLocal_689[29] = 75130f;
	iLocal_2526[29] = joaat("premier");
	Local_1834[30 /*3*/] = { 504.7741f, -1176.611f, 28.8833f };
	fLocal_85[30] = -0.002f;
	fLocal_236[30] = 0f;
	fLocal_387[30] = 0.0099f;
	fLocal_538[30] = 0.9999f;
	iLocal_1215[30] = 31;
	fLocal_689[30] = 75526f;
	iLocal_2526[30] = joaat("premier");
	Local_1834[31 /*3*/] = { 500.8426f, -1132.735f, 29.0899f };
	fLocal_85[31] = -0.0001f;
	fLocal_236[31] = 0f;
	fLocal_387[31] = -0.3028f;
	fLocal_538[31] = 0.9531f;
	iLocal_1215[31] = 32;
	fLocal_689[31] = 78298f;
	iLocal_2526[31] = joaat("serrano");
	Local_1834[32 /*3*/] = { 481.2516f, -1134.45f, 28.9857f };
	fLocal_85[32] = -0.0001f;
	fLocal_236[32] = 0.0001f;
	fLocal_387[32] = 0.7071f;
	fLocal_538[32] = -0.7071f;
	iLocal_1215[32] = 33;
	fLocal_689[32] = 78430f;
	iLocal_2526[32] = joaat("premier");
	Local_1834[33 /*3*/] = { 492.8828f, -1128.56f, 28.9559f };
	fLocal_85[33] = 0.001f;
	fLocal_236[33] = 0.001f;
	fLocal_387[33] = 0.7238f;
	fLocal_538[33] = 0.69f;
	iLocal_1215[33] = 34;
	fLocal_689[33] = 78562f;
	iLocal_2526[33] = joaat("premier");
	Local_1834[34 /*3*/] = { 497.8196f, -1104.189f, 28.8836f };
	fLocal_85[34] = 0f;
	fLocal_236[34] = 0.0061f;
	fLocal_387[34] = 1f;
	fLocal_538[34] = -0.0014f;
	iLocal_1215[34] = 35;
	fLocal_689[34] = 80344f;
	iLocal_2526[34] = joaat("serrano");
	Local_1834[35 /*3*/] = { 470.4125f, -1032.578f, 33.3936f };
	fLocal_85[35] = -0.0252f;
	fLocal_236[35] = -0.0286f;
	fLocal_387[35] = 0.7504f;
	fLocal_538[35] = 0.6599f;
	iLocal_1215[35] = 36;
	fLocal_689[35] = 88858f;
	iLocal_2526[35] = 0;
	Local_1834[36 /*3*/] = { 380.998f, -1134.308f, 28.9309f };
	fLocal_85[36] = 0.0024f;
	fLocal_236[36] = 0.0025f;
	fLocal_387[36] = 0.7109f;
	fLocal_538[36] = -0.7032f;
	iLocal_1215[36] = 37;
	fLocal_689[36] = 90574f;
	iLocal_2526[36] = joaat("premier");
	Local_2285[6 /*3*/] = { 372.9772f, -1136.548f, 29.1298f };
	fLocal_1090[6] = -0.0186f;
	fLocal_1116[6] = -0.0177f;
	fLocal_1142[6] = 0.727f;
	fLocal_1168[6] = -0.6861f;
	iLocal_2677[6] = joaat("serrano");
	Local_1834[37 /*3*/] = { 328.8199f, -1134.483f, 28.9543f };
	fLocal_85[37] = -0.0001f;
	fLocal_236[37] = 0.0001f;
	fLocal_387[37] = -0.7043f;
	fLocal_538[37] = 0.7099f;
	iLocal_1215[37] = 38;
	fLocal_689[37] = 95194f;
	iLocal_2526[37] = joaat("premier");
	Local_1834[38 /*3*/] = { 321.5484f, -1134.559f, 29.0881f };
	fLocal_85[38] = -0.0002f;
	fLocal_236[38] = 0.0002f;
	fLocal_387[38] = -0.7034f;
	fLocal_538[38] = 0.7108f;
	iLocal_1215[38] = 39;
	fLocal_689[38] = 96052f;
	iLocal_2526[38] = 0;
	Local_1834[39 /*3*/] = { 374.7384f, -1053.848f, 28.9763f };
	fLocal_85[39] = 0.0007f;
	fLocal_236[39] = -0.0006f;
	fLocal_387[39] = -0.6988f;
	fLocal_538[39] = 0.7153f;
	iLocal_1215[39] = 40;
	fLocal_689[39] = 100936f;
	iLocal_2526[39] = joaat("premier");
	Local_1834[40 /*3*/] = { 382.6972f, -1053.636f, 28.8843f };
	fLocal_85[40] = -0.0011f;
	fLocal_236[40] = 0.001f;
	fLocal_387[40] = -0.7014f;
	fLocal_538[40] = 0.7128f;
	iLocal_1215[40] = 41;
	fLocal_689[40] = 100936f;
	iLocal_2526[40] = joaat("serrano");
	Local_1834[41 /*3*/] = { 396.9267f, -978.9899f, 29.0242f };
	fLocal_85[41] = 0f;
	fLocal_236[41] = -0.0009f;
	fLocal_387[41] = 0.9998f;
	fLocal_538[41] = 0.0211f;
	iLocal_1215[41] = 42;
	fLocal_689[41] = 111232f;
	iLocal_2526[41] = joaat("serrano");
	Local_1834[42 /*3*/] = { 387.2838f, -957.0242f, 29.0587f };
	fLocal_85[42] = 0.0002f;
	fLocal_236[42] = -0.0004f;
	fLocal_387[42] = 0.7264f;
	fLocal_538[42] = -0.6873f;
	iLocal_1215[42] = 43;
	fLocal_689[42] = 117370f;
	iLocal_2526[42] = joaat("serrano");
	Local_1834[43 /*3*/] = { 378.7138f, -956.7831f, 28.9829f };
	fLocal_85[43] = 0f;
	fLocal_236[43] = 0f;
	fLocal_387[43] = 0.7138f;
	fLocal_538[43] = -0.7004f;
	iLocal_1215[43] = 44;
	fLocal_689[43] = 117436f;
	iLocal_2526[43] = joaat("serrano");
	Local_1834[44 /*3*/] = { 400.5379f, -936.7937f, 28.9378f };
	fLocal_85[44] = 0f;
	fLocal_236[44] = -0.0006f;
	fLocal_387[44] = 0.9998f;
	fLocal_538[44] = 0.0187f;
	iLocal_1215[44] = 45;
	fLocal_689[44] = 119086f;
	iLocal_2526[44] = joaat("premier");
	Local_1834[45 /*3*/] = { 408.7719f, -877.9841f, 28.9611f };
	fLocal_85[45] = 0.0036f;
	fLocal_236[45] = -0.0001f;
	fLocal_387[45] = -0.0204f;
	fLocal_538[45] = 0.9998f;
	iLocal_1215[45] = 46;
	fLocal_689[45] = 122650f;
	iLocal_2526[45] = joaat("premier");
	Local_1834[46 /*3*/] = { 421.5898f, -849.4219f, 29.2132f };
	fLocal_85[46] = -0.0565f;
	fLocal_236[46] = -0.0543f;
	fLocal_387[46] = 0.7197f;
	fLocal_538[46] = 0.6898f;
	iLocal_1215[46] = 47;
	fLocal_689[46] = 124432f;
	iLocal_2526[46] = joaat("premier");
	Local_1834[47 /*3*/] = { 422.5729f, -821.7974f, 28.8209f };
	fLocal_85[47] = 0.0192f;
	fLocal_236[47] = 0.0192f;
	fLocal_387[47] = 0.707f;
	fLocal_538[47] = 0.7067f;
	iLocal_1215[47] = 48;
	fLocal_689[47] = 125818f;
	iLocal_2526[47] = joaat("serrano");
	Local_1834[48 /*3*/] = { 403.55f, -810.9785f, 28.8325f };
	fLocal_85[48] = 0f;
	fLocal_236[48] = 0f;
	fLocal_387[48] = 1f;
	fLocal_538[48] = 0f;
	iLocal_1215[48] = 49;
	fLocal_689[48] = 126346f;
	iLocal_2526[48] = joaat("premier");
	Local_1834[49 /*3*/] = { 408.7001f, -694.7044f, 28.9669f };
	fLocal_85[49] = 0.0076f;
	fLocal_236[49] = 0f;
	fLocal_387[49] = 0f;
	fLocal_538[49] = 1f;
	iLocal_1215[49] = 50;
	fLocal_689[49] = 144757f;
	iLocal_2526[49] = joaat("serrano");
	Local_1834[50 /*3*/] = { 399.3801f, -674.1376f, 28.8158f };
	fLocal_85[50] = 0.0007f;
	fLocal_236[50] = 0.0007f;
	fLocal_387[50] = 0.6916f;
	fLocal_538[50] = 0.7223f;
	iLocal_1215[50] = 51;
	fLocal_689[50] = 145813f;
	iLocal_2526[50] = joaat("premier");
	Local_2285[7 /*3*/] = { 409.8649f, -655.0555f, 28.0074f };
	fLocal_1090[7] = 0f;
	fLocal_1116[7] = 0f;
	fLocal_1142[7] = 0.7213f;
	fLocal_1168[7] = -0.6926f;
	iLocal_2677[7] = joaat("premier");
	Local_2285[8 /*3*/] = { 392.8911f, -643.9622f, 28.0134f };
	fLocal_1090[8] = -0.0001f;
	fLocal_1116[8] = 0f;
	fLocal_1142[8] = 0.7089f;
	fLocal_1168[8] = 0.7053f;
	iLocal_2677[8] = joaat("premier");
	Local_2285[9 /*3*/] = { 429.7155f, -638.2184f, 28.5253f };
	fLocal_1090[9] = -0.0003f;
	fLocal_1116[9] = 0f;
	fLocal_1142[9] = -0.0189f;
	fLocal_1168[9] = 0.9998f;
	iLocal_2677[9] = joaat("bus");
	Local_1834[51 /*3*/] = { 333.5482f, -662.7706f, 28.9943f };
	fLocal_85[51] = 0f;
	fLocal_236[51] = 0f;
	fLocal_387[51] = 0.7987f;
	fLocal_538[51] = -0.6017f;
	iLocal_1215[51] = 52;
	fLocal_689[51] = 152347f;
	iLocal_2526[51] = joaat("premier");
	Local_1834[52 /*3*/] = { 327.5386f, -660.2631f, 28.7691f };
	fLocal_85[52] = 0f;
	fLocal_236[52] = 0.0001f;
	fLocal_387[52] = 0.8171f;
	fLocal_538[52] = -0.5764f;
	iLocal_1215[52] = 53;
	fLocal_689[52] = 152347f;
	iLocal_2526[52] = joaat("premier");
	Local_2285[10 /*3*/] = { 257.7682f, -626.4667f, 40.9463f };
	fLocal_1090[10] = 0.0462f;
	fLocal_1116[10] = 0.0124f;
	fLocal_1142[10] = -0.1716f;
	fLocal_1168[10] = 0.984f;
	iLocal_2677[10] = joaat("serrano");
	Local_1834[53 /*3*/] = { 127.3681f, -577.9399f, 31.2777f };
	fLocal_85[53] = 0.0008f;
	fLocal_236[53] = -0.0012f;
	fLocal_387[53] = 0.831f;
	fLocal_538[53] = -0.5562f;
	iLocal_1215[53] = 54;
	fLocal_689[53] = 161917f;
	iLocal_2526[53] = joaat("premier");
	Local_1834[54 /*3*/] = { 99.9988f, -544.2546f, 33.5235f };
	fLocal_85[54] = -0.0017f;
	fLocal_236[54] = -0.0009f;
	fLocal_387[54] = 0.7134f;
	fLocal_538[54] = -0.7008f;
	iLocal_1215[54] = 55;
	fLocal_689[54] = 163699f;
	iLocal_2526[54] = joaat("premier");
	Local_1834[56 /*3*/] = { 108.3187f, -581.6124f, 31.0713f };
	fLocal_85[56] = 0.0009f;
	fLocal_236[56] = -0.0004f;
	fLocal_387[56] = -0.1665f;
	fLocal_538[56] = 0.986f;
	iLocal_1215[56] = 57;
	fLocal_689[56] = 163765f;
	iLocal_2526[56] = joaat("premier");
	Local_1834[58 /*3*/] = { -124.834f, -690.5775f, 34.6172f };
	fLocal_85[58] = -0.0011f;
	fLocal_236[58] = -0.0065f;
	fLocal_387[58] = 0.9848f;
	fLocal_538[58] = 0.1733f;
	iLocal_1215[58] = 59;
	fLocal_689[58] = 186261f;
	iLocal_2526[58] = joaat("premier");
	Local_1834[59 /*3*/] = { -112.3217f, -727.3997f, 34.2949f };
	fLocal_85[59] = 0.0026f;
	fLocal_236[59] = -0.002f;
	fLocal_387[59] = -0.5987f;
	fLocal_538[59] = 0.8009f;
	iLocal_1215[59] = 60;
	fLocal_689[59] = 188307f;
	iLocal_2526[59] = joaat("premier");
	Local_1834[60 /*3*/] = { -94.2945f, -712.0757f, 34.2515f };
	fLocal_85[60] = -0.0092f;
	fLocal_236[60] = 0.0142f;
	fLocal_387[60] = 0.5341f;
	fLocal_538[60] = 0.8453f;
	iLocal_1215[60] = 61;
	fLocal_689[60] = 188505f;
	iLocal_2526[60] = joaat("premier");
	Local_1834[61 /*3*/] = { -127.4751f, -746.0173f, 33.8412f };
	fLocal_85[61] = 0.0199f;
	fLocal_236[61] = -0.0038f;
	fLocal_387[61] = -0.187f;
	fLocal_538[61] = 0.9822f;
	iLocal_1215[61] = 62;
	fLocal_689[61] = 189957f;
	iLocal_2526[61] = joaat("premier");
	Local_1834[62 /*3*/] = { -129.9522f, -753.059f, 33.7323f };
	fLocal_85[62] = 0.0233f;
	fLocal_236[62] = -0.0065f;
	fLocal_387[62] = -0.2697f;
	fLocal_538[62] = 0.9626f;
	iLocal_1215[62] = 63;
	fLocal_689[62] = 190815f;
	iLocal_2526[62] = joaat("serrano");
	Local_1834[63 /*3*/] = { -37.9436f, -752.9625f, 32.344f };
	fLocal_85[63] = -0.0028f;
	fLocal_236[63] = -0.0054f;
	fLocal_387[63] = 0.8178f;
	fLocal_538[63] = -0.5754f;
	iLocal_1215[63] = 64;
	fLocal_689[63] = 195171f;
	iLocal_2526[63] = joaat("premier");
	Local_1834[64 /*3*/] = { -16.879f, -743.6087f, 31.9734f };
	fLocal_85[64] = 0.0066f;
	fLocal_236[64] = 0.0088f;
	fLocal_387[64] = 0.5713f;
	fLocal_538[64] = 0.8206f;
	iLocal_1215[64] = 65;
	fLocal_689[64] = 195765f;
	iLocal_2526[64] = joaat("serrano");
	Local_2285[11 /*3*/] = { 48.7516f, -687.4161f, 43.5806f };
	fLocal_1090[11] = -0.0083f;
	fLocal_1116[11] = 0.0015f;
	fLocal_1142[11] = 0.9857f;
	fLocal_1168[11] = 0.168f;
	iLocal_2677[11] = joaat("premier");
	Local_1834[65 /*3*/] = { 57.4123f, -677.5038f, 31.1767f };
	fLocal_85[65] = -0.0001f;
	fLocal_236[65] = -0.0006f;
	fLocal_387[65] = 0.9843f;
	fLocal_538[65] = 0.1765f;
	iLocal_1215[65] = 66;
	fLocal_689[65] = 203421f;
	iLocal_2526[65] = joaat("serrano");
	Local_1834[66 /*3*/] = { 69.885f, -690.3309f, 31.2761f };
	fLocal_85[66] = 0f;
	fLocal_236[66] = 0f;
	fLocal_387[66] = -0.1711f;
	fLocal_538[66] = 0.9853f;
	iLocal_1215[66] = 67;
	fLocal_689[66] = 204147f;
	iLocal_2526[66] = joaat("serrano");
	Local_2361[0 /*3*/] = { 1225.391f, -1685.31f, 39.4209f };
	fLocal_844[0] = -0.0236f;
	fLocal_885[0] = -0.0719f;
	fLocal_926[0] = 0.8377f;
	fLocal_967[0] = 0.5409f;
	iLocal_1668[0] = 101;
	fLocal_1008[0] = 0f;
	fLocal_1049[0] = 1f;
	iLocal_2703[0] = joaat("stockade");
	Local_3032[4 /*2*/] = iLocal_2936[0];
}

void func_296(bool bParam0)//Position - 0x1B53B
{
	bLocal_83 = bParam0;
}

void func_297(int iParam0)//Position - 0x1B547
{
	bLocal_78 = iParam0;
}

void func_298(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x1B553
{
	struct<3> Var0;
	
	StringCopy(&cLocal_2509, sParam0, 64);
	bLocal_61 = true;
	iLocal_66 = 0;
	iLocal_1817 = 0;
	iLocal_1818 = 0;
	iLocal_1819 = 0;
	iLocal_1820 = iParam1;
	iLocal_1821 = 0;
	iLocal_1822 = 0;
	iLocal_1823 = 0;
	iLocal_1827 = 0;
	iLocal_1830 = 0;
	iLocal_1828 = -1;
	iLocal_1829 = -1;
	iLocal_1831 = 0;
	iLocal_1832 = 0;
	fLocal_1210 = 0f;
	fLocal_1211 = 0f;
	fLocal_1196 = 0f;
	iLocal_67 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		Local_2485.x = (Var0.x - 100f);
		Local_2485.f_1 = (Var0.f_1 - 100f);
		Local_2485.f_2 = (Var0.f_2 - 100f);
		Local_2488.x = (Var0.x + 100f);
		Local_2488.f_1 = (Var0.f_1 + 100f);
		Local_2488.f_2 = (Var0.f_2 + 100f);
		PATHFIND::SET_ROADS_IN_AREA(Local_2485, Local_2488, 0, 0);
		if (bParam2)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(Var0, 500f, 0, 0, 0, 0, 0);
		}
	}
	PED::ADD_RELATIONSHIP_GROUP("rgh_traffic", &iLocal_2525);
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
	func_253();
}

void func_299(int iParam0, float fParam1)//Position - 0x1B674
{
	int iVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			func_300();
			func_269(&iParam0, iLocal_1820, fParam1, 1, 0, 1, 0, 0);
			fLocal_1196 = fParam1;
			iVar0 = 0;
			while (iVar0 < 40)
			{
				if (iLocal_1709[iVar0] > 2 && iLocal_1709[iVar0] < 6)
				{
					bVar2 = false;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2936[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_2936[iVar0]))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2936[iVar0]))
							{
								fVar1 = (fParam1 - fLocal_1008[iVar0]);
								fVar1 = (fVar1 * fLocal_1049[iVar0]);
								if (fVar1 >= 0f)
								{
									if (fVar1 < func_281(iLocal_1668[iVar0]))
									{
										func_269(&(iLocal_2936[iVar0]), iLocal_1668[iVar0], fVar1, 1, 0, 1, bLocal_80, bLocal_79);
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
						iLocal_1709[iVar0] = 99;
						iLocal_1818 = (iLocal_1818 - 1);
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 150)
			{
				if (iLocal_1366[iVar0] > 2 && iLocal_1366[iVar0] < 6)
				{
					bVar2 = false;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2747[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_2747[iVar0]))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2747[iVar0]))
							{
								fVar1 = (fParam1 - fLocal_689[iVar0]);
								if (fVar1 >= 0f)
								{
									if (fVar1 < func_281(iLocal_1215[iVar0]))
									{
										func_269(&(iLocal_2747[iVar0]), iLocal_1215[iVar0], fVar1, 1, 0, 1, 1, bLocal_79);
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
						iLocal_1366[iVar0] = 99;
						iLocal_1817 = (iLocal_1817 - 1);
					}
				}
				iVar0++;
			}
			iLocal_1821 = 0;
			iLocal_1823 = 0;
			iVar0 = 0;
			while (iVar0 < 25)
			{
				if (iLocal_1791[iVar0] > 2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2910[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_2910[iVar0]))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_2910[iVar0], 1, 0);
							iLocal_1819++;
							iLocal_1791[iVar0] = 2;
						}
					}
					else
					{
						iLocal_1791[iVar0] = 0;
					}
				}
				iVar0++;
			}
			iLocal_1822 = 0;
			iLocal_1827 = 0;
			iLocal_1830 = 0;
			fLocal_1211 = fParam1;
			fLocal_1210 = fParam1;
			Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			Local_2485 = { Var3 - Vector(100f, 100f, 100f) };
			Local_2488 = { Var3 + Vector(100f, 100f, 100f) };
			PATHFIND::SET_ROADS_IN_AREA(Local_2485, Local_2488, 0, 0);
		}
	}
}

void func_300()//Position - 0x1B920
{
	iLocal_65 = 1;
}





void func_305()//Position - 0x1BAF4
{
	if (GlobalFunc_2773(func_130()))
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", func_130(), 0);
	}
	if (GlobalFunc_2773(func_127()))
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", func_127(), 0);
	}
	if (GlobalFunc_2773(func_129()))
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", func_129(), 0);
	}
	if (GlobalFunc_2773(func_196()))
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Lester", func_196(), 0);
	}
	if (GlobalFunc_2773(Local_3051[4 /*4*/]))
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("security_guard", Local_3051[4 /*4*/], 0);
	}
}







void func_312(int iParam0)//Position - 0x1BD4A
{
	GlobalFunc_7621(180, iParam0, 0, 1, 0);
}










void func_322()//Position - 0x2003E
{
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_2491, Local_2494, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_2485, Local_2488, 1);
}






void func_328(bool bParam0, int iParam1, int iParam2)//Position - 0x20E95
{
	char* sVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_2446554.f_4397, 25))
		{
			return;
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(iParam2);
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		if (bParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", 1);
			bParam0->f_11 = 0;
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	bParam0->f_1 = 0;
	*bParam0 = 0;
	bParam0->f_2 = -1;
	bParam0->f_8 = 0;
	bParam0->f_5 = 0;
	bParam0->f_6 = 0;
	sVar0 = iParam1;
	if (MISC::IS_STRING_NULL(sVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!MISC::IS_STRING_NULL(bParam0->f_3))
	{
		if (GlobalFunc_74(bParam0->f_3))
		{
			HUD::CLEAR_HELP(1);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (GlobalFunc_74(sVar0))
		{
			HUD::CLEAR_HELP(1);
		}
	}
}

void func_329(bool bParam0)//Position - 0x20F72
{
	if (ENTITY::DOES_ENTITY_EXIST(func_130()) && !PED::IS_PED_INJURED(func_130()))
	{
		if (!bParam0)
		{
			func_420(func_130(), 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		else
		{
			func_330(func_130(), 14, 112);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_127()) && !PED::IS_PED_INJURED(func_127()))
	{
		if (!bParam0)
		{
			func_420(func_127(), 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		else
		{
			func_330(func_127(), 14, 158);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_129()) && !PED::IS_PED_INJURED(func_129()))
	{
		if (!bParam0)
		{
			func_420(func_129(), 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		else
		{
			func_330(func_129(), 14, 154);
		}
	}
}

int func_330(int iParam0, int iParam1, int iParam2)//Position - 0x21043
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar30;
	int iVar46;
	
	if (PED::IS_PED_INJURED(uParam0) || iParam2 == -99)
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar0, iParam1, iParam2) };
	if (!MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!GlobalFunc_10997(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { GlobalFunc_7617(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_330(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar20 = { GlobalFunc_7616(iVar0, iParam2) };
		iVar18 = 0;
		while (iVar18 <= 8)
		{
			if (!func_330(iParam0, 14, uVar20[iVar18]))
			{
				iVar19 = 0;
			}
			iVar18++;
		}
		return iVar19;
	}
	else if (iParam1 == 14)
	{
		PED::CLEAR_PED_PROP(iParam0, Global_68106[1 /*14*/].f_12);
	}
	else
	{
		uVar30 = { GlobalFunc_7617(iVar0, 0) };
		Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar0, iParam1, uVar30[iParam1]) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, GlobalFunc_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, 0);
		}
	}
	if (GlobalFunc_11121(iParam0, iVar0, &iVar46, 0))
	{
		func_420(iParam0, 2, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (GlobalFunc_11120(iParam0, iVar0, &iVar46))
	{
		func_420(iParam0, 1, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	return 1;
}


























































































int func_420(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x3A7AF
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
				iVar5 = GlobalFunc_7150(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = GlobalFunc_7150(iParam0, 9);
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
							GlobalFunc_309(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8357(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = GlobalFunc_11243(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_420(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
								iVar3 = GlobalFunc_11243(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_420(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iVar0, GlobalFunc_11122(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (GlobalFunc_11121(iParam0, iVar10, &iVar4, 1))
							{
								func_420(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_420(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
					func_420(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_420(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_420(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_420(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_420(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
			GlobalFunc_309(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8357(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11243(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_420(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		GlobalFunc_309(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		GlobalFunc_8357(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = GlobalFunc_11243(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_420(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = GlobalFunc_11243(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_420(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
		if (GlobalFunc_11121(iParam0, iVar10, &iVar4, 0))
		{
			func_420(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (GlobalFunc_11120(iParam0, iVar10, &iVar4))
		{
			func_420(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}

























void func_445()//Position - 0x3D318
{
	if (iLocal_3392 == 1)
	{
		if (GlobalFunc_2773(Local_3032[2 /*2*/]))
		{
			if (HUD::DOES_BLIP_EXIST(Local_3261.f_5) && MISC::GET_DISTANCE_BETWEEN_COORDS(Local_3014, ENTITY::GET_ENTITY_COORDS(Local_3032[2 /*2*/], 1), 1) < 1000f)
			{
				iLocal_3431 = 1;
			}
		}
		if (((!func_21(14, 30) && (MISC::GET_GAME_TIMER() - iLocal_3391) > 29000) && (MISC::GET_GAME_TIMER() - iLocal_3400) > 20000) || iLocal_3431)
		{
			if (!Local_3356.f_20 && PLAYER::PLAYER_PED_ID() == func_129())
			{
				if (iLocal_3479 == 0)
				{
					iLocal_3479 = 1;
				}
				if (iLocal_3479 == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3032[1 /*2*/], 0))
					{
						if (PED::IS_PED_IN_VEHICLE(func_129(), Local_3032[1 /*2*/], 0) || iLocal_9193)
						{
							Global_Mission_Fail_State.f_12[1] = 1;
							iLocal_3479 = 4;
							CUTSCENE::REMOVE_CUTSCENE();
							VEHICLE::REMOVE_VEHICLE_RECORDING(3, "FH1REC");
							VEHICLE::REMOVE_VEHICLE_RECORDING(4, "FH1REC");
							iLocal_3392 = 0;
						}
						else if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_TMBB_H", 7, 0, 0, 0))
						{
							Global_Mission_Fail_State.f_12[1] = 1;
							iLocal_3479 = 4;
							CUTSCENE::REMOVE_CUTSCENE();
							VEHICLE::REMOVE_VEHICLE_RECORDING(3, "FH1REC");
							VEHICLE::REMOVE_VEHICLE_RECORDING(4, "FH1REC");
							iLocal_3392 = 0;
						}
					}
				}
			}
		}
	}
	if ((!ENTITY::IS_ENTITY_DEAD(Local_3032[2 /*2*/]) && !PED::IS_PED_INJURED(func_129())) && !PED::IS_PED_INJURED(func_196()))
	{
		if ((GlobalFunc_5672("FH1_TALK4") && PED::IS_PED_IN_VEHICLE(func_129(), Local_3032[2 /*2*/], 0)) && PED::IS_PED_IN_VEHICLE(func_196(), Local_3032[2 /*2*/], 0))
		{
			GlobalFunc_4956();
		}
	}
	switch (iLocal_5436)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			RECORDING::_0x293220DA1B46CEBC(0f, 8f, 4);
			iLocal_5436++;
			break;
		
		case 1:
			if (!Local_3356.f_20)
			{
				if (PLAYER::PLAYER_PED_ID() == func_130())
				{
					GlobalFunc_4956();
					iLocal_5436 = 0;
					func_211(2);
				}
				else if (PLAYER::PLAYER_PED_ID() == func_129())
				{
					switch (iLocal_3294)
					{
						case 0:
							if ((!iLocal_3470 && GlobalFunc_5171()) && HUD::DOES_BLIP_EXIST(Local_3261.f_5))
							{
								GlobalFunc_164("FH1_AIR", 7500, 1);
								iLocal_3470 = 1;
							}
							if (GlobalFunc_9202(&Local_3261, Local_3011, 0.1f, 0.1f, 2f, 1, func_196(), 0, 0, "", "", "", "", "", 0, 1, 1, -1) || (HUD::DOES_BLIP_EXIST(Local_3261.f_5) && MISC::GET_DISTANCE_BETWEEN_COORDS(Local_3011, ENTITY::GET_ENTITY_COORDS(func_129(), 1), 1) < 15f))
							{
								if (PED::IS_PED_IN_VEHICLE(func_129(), Local_3032[1 /*2*/], 0))
								{
									GlobalFunc_763(Local_3032[1 /*2*/], 1093140480, 1, 1056964608, 0, 1);
								}
								RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
								GlobalFunc_5652(&Local_3261, 1, 0);
								GlobalFunc_7139(&Local_3261, 0);
								ENTITY::FREEZE_ENTITY_POSITION(Local_3032[2 /*2*/], 0);
								PLAYER::SET_MAX_WANTED_LEVEL(2);
								GlobalFunc_Checkpoint1(3, "Stage 3: Get in Position", 0, 0, 0, 1);
								iLocal_3294 = 1;
								iLocal_3470 = 0;
								iLocal_3521 = 0;
								iLocal_3522 = 0;
							}
							break;
						
						case 1:
							if (GlobalFunc_2773(Local_3032[2 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(func_129(), Local_3032[2 /*2*/], 0))
								{
									Global_Mission_Fail_State.f_12[1] = 1;
									func_8(6);
									if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_FLY_TO_TRUCKS"))
									{
										AUDIO::START_AUDIO_SCENE("BS_1_FLY_TO_TRUCKS");
										RECORDING::_0x293220DA1B46CEBC(2f, 10f, 3);
									}
								}
								if (((!iLocal_3522 && PED::IS_PED_IN_VEHICLE(func_129(), Local_3032[2 /*2*/], 0)) && PED::IS_PED_IN_VEHICLE(func_196(), Local_3032[2 /*2*/], 0)) && GlobalFunc_713(func_129(), 1692.165f, 2615.412f, 58.89342f, 1) < 400f)
								{
									if (GlobalFunc_742(1692.165f, 2615.412f, 58.89342f, 50f, 500f))
									{
										if (iLocal_3479 == 0)
										{
											iLocal_3479 = 1;
										}
										if (iLocal_3479 == 3)
										{
											if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_PRISWRN", 7, 0, 0, 0))
											{
												iLocal_3479 = 4;
												iLocal_3522 = 1;
											}
										}
									}
								}
								if ((((!iLocal_3470 && PED::IS_PED_IN_VEHICLE(func_129(), Local_3032[2 /*2*/], 1)) && PED::IS_PED_IN_VEHICLE(func_196(), Local_3032[2 /*2*/], 1)) && HUD::DOES_BLIP_EXIST(Local_3261.f_5)) && GlobalFunc_5171())
								{
									if (iLocal_3479 == 0)
									{
										iLocal_3479 = 1;
									}
									if (iLocal_3479 == 3)
									{
										GlobalFunc_164("FH1_FLY", 7500, 1);
										iLocal_3479 = 4;
										iLocal_3470 = 1;
									}
								}
								if (((((!iLocal_3521 && !PED::IS_PED_IN_VEHICLE(func_129(), Local_3032[1 /*2*/], 0)) && !PED::IS_PED_IN_VEHICLE(func_196(), Local_3032[1 /*2*/], 0)) && !PED::IS_PED_IN_VEHICLE(func_196(), Local_3032[2 /*2*/], 0)) && GlobalFunc_156(func_129(), Local_3032[2 /*2*/], 1) < GlobalFunc_156(func_129(), Local_3032[1 /*2*/], 1)) && GlobalFunc_156(func_129(), func_196(), 1) < 20f)
								{
									if (iLocal_3479 == 0)
									{
										iLocal_3479 = 1;
									}
									if (iLocal_3479 == 3)
									{
										if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_LESSLOW", 7, 0, 0, 0))
										{
											TASK::TASK_LOOK_AT_ENTITY(func_129(), func_196(), -1, 2064, 2);
											iLocal_3479 = 4;
											iLocal_3521 = 1;
										}
									}
								}
								if (!iLocal_3401 && MISC::GET_DISTANCE_BETWEEN_COORDS(Local_3014, ENTITY::GET_ENTITY_COORDS(Local_3032[2 /*2*/], 1), 1) < 1000f)
								{
									if (Global_Mission_Fail_State.f_12[1] == 1)
									{
										func_218(4, 0);
										iLocal_3401 = 1;
									}
								}
								if (func_78(&Local_3261, Local_3014, 0.1f, 0.1f, 2f, 0, 0, func_196(), 0, Local_3032[2 /*2*/], "", "", "", "", "", "FH1_HELI", "FH1_BKHELI", 0, 1, 1, -1) || (HUD::DOES_BLIP_EXIST(Local_3261.f_5) && MISC::GET_DISTANCE_BETWEEN_COORDS(Local_3014, ENTITY::GET_ENTITY_COORDS(Local_3032[2 /*2*/], 1), 1) < 380f))
								{
									if (STREAMING::HAS_MODEL_LOADED(joaat("stockade")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_armoured_01")))
									{
										Local_3032[3 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("stockade"), 1025.534f, -1756.005f, 35.2748f, 81.9993f, 1, 1);
										Local_3051[6 /*4*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_3032[3 /*2*/], 26, joaat("s_m_m_armoured_01"), -1, 1, 1);
										PED::SET_PED_COMPONENT_VARIATION(Local_3051[6 /*4*/], 0, 0, 0, 0);
										ENTITY::SET_ENTITY_LOD_DIST(Local_3032[3 /*2*/], 350);
										GlobalFunc_5652(&Local_3261, 1, 0);
										GlobalFunc_7139(&Local_3261, 0);
										bLocal_3403 = false;
										iLocal_5436 = 0;
										HUD::DISPLAY_RADAR(0);
										HUD::DISPLAY_HUD(0);
										RECORDING::_0x293220DA1B46CEBC(2f, 10f, 3);
										func_211(4);
									}
								}
							}
							break;
						}
					}
			}
			break;
	}
}







void func_452()//Position - 0x3DAE8
{
	switch (iLocal_5436)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			if (!Local_3356.f_20)
			{
				if (PLAYER::PLAYER_PED_ID() == func_129())
				{
					func_211(3);
					iLocal_5436 = 0;
				}
				else if (PLAYER::PLAYER_PED_ID() == func_130())
				{
					iLocal_3297 = INTERIOR::GET_INTERIOR_AT_COORDS(-77.30131f, -678.8849f, 33.32175f);
					if (INTERIOR::IS_VALID_INTERIOR(iLocal_3297))
					{
						INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_3297);
					}
					if (!GlobalFunc_111())
					{
						iLocal_3392 = 0;
						if (ENTITY::DOES_ENTITY_EXIST(Local_3051[4 /*4*/]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3051[4 /*4*/], 1);
						}
						GlobalFunc_8380(1, 1, 1, 0);
						iLocal_3534 = 0;
						iLocal_3536 = 0;
						iLocal_3537 = 0;
						bLocal_3539 = false;
						GlobalFunc_7934(45, 0);
						iLocal_5436++;
					}
				}
			}
			break;
		
		case 1:
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				if (iLocal_3297 == 0 || INTERIOR::IS_INTERIOR_READY(iLocal_3297))
				{
					GlobalFunc_4956();
					AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_3032[0 /*2*/], 0);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_DRIVE_AROUND_BACK"))
					{
						AUDIO::STOP_AUDIO_SCENE("BS_1_DRIVE_AROUND_BACK");
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3032[0 /*2*/], "Michaels_car", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_127(), "Franklin", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3051[4 /*4*/], "security_guard", 0, 0, 0);
					func_305();
					GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
					AUDIO::STOP_SOUND(iLocal_3466);
					AUDIO::STOP_SOUND(iLocal_3465);
					if (GlobalFunc_3000(&Local_7925))
					{
						GlobalFunc_2999(&Local_7925);
					}
					if (iLocal_3294 == 0 && Local_9168.f_1 < 2600f)
					{
						iLocal_5442 = 1;
						func_497(&uLocal_5443, 1);
					}
					CUTSCENE::START_CUTSCENE(2048);
					RECORDING::_0x48621C9FCA3EBD28(4);
					iLocal_5436++;
				}
			}
			break;
		
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				GlobalFunc_4956();
				VEHICLE::REMOVE_VEHICLE_WINDOW(Local_3032[0 /*2*/], 1);
				MISC::CLEAR_AREA(Local_3007, 500f, 1, 0, 0, 0);
				iLocal_3534 = 0;
				iLocal_3536 = 0;
				iLocal_3537 = 0;
				iLocal_3540 = 0;
				iLocal_3535 = 0;
				bLocal_3539 = false;
				iLocal_9215 = 0;
				GlobalFunc_730(238f);
				iLocal_5436++;
			}
			break;
		
		case 3:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", joaat("player_zero")))
			{
				PED::SET_PED_INTO_VEHICLE(func_130(), Local_3032[0 /*2*/], -1);
				iLocal_3534 = 1;
			}
			else
			{
				GlobalFunc_730(238f);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", joaat("player_one")))
			{
				PED::SET_PED_INTO_VEHICLE(func_127(), Local_3032[0 /*2*/], 0);
				iLocal_3537 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("security_guard", joaat("s_m_m_armoured_01")))
			{
				iLocal_3540 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michaels_car", joaat("tailgater")))
			{
				VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(Local_3032[0 /*2*/], 1, 1, 1);
				iLocal_3535 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
			}
			if (((iLocal_3534 && iLocal_3537) && iLocal_3540) && iLocal_3535)
			{
				RECORDING::_0x81CBAE94390F9F89();
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 1024);
				iLocal_3478 = 3;
				iLocal_3474 = 0;
				WEAPON::SET_CURRENT_PED_WEAPON(Local_3051[4 /*4*/], joaat("weapon_advancedrifle"), 1);
				if (iLocal_3297 != 0)
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_3297);
				}
				GlobalFunc_5661(45, 1);
				Global_Mission_Fail_State.f_12[1] = 1;
				Local_9168 = { ENTITY::GET_ENTITY_COORDS(Local_3051[2 /*4*/], 1) };
				if (iLocal_3477 == 0)
				{
					iLocal_3523 = 0;
					StringCopy(&cLocal_3493, "", 24);
					StringCopy(&cLocal_3499, "", 24);
					iLocal_3505 = 0;
					iLocal_3477 = 2;
				}
				if (iLocal_3294 == 0 && Local_9168.f_1 < 2600f)
				{
					iLocal_3397 = 1;
					iLocal_5442 = 3;
					func_497(&uLocal_5443, 1);
				}
				else if ((iLocal_3294 == 1 && PED::IS_PED_IN_VEHICLE(Local_3051[2 /*4*/], Local_3032[2 /*2*/], 0)) && iLocal_9213 == 1)
				{
					iLocal_3398 = 1;
					iLocal_5442 = 3;
					func_462(&uLocal_6684, 1);
					iLocal_9213 = 0;
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3032[0 /*2*/], 0))
				{
					AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_3032[0 /*2*/], 1);
				}
				Local_3356.f_20 = 1;
				func_453(2);
				iLocal_5436++;
			}
			break;
		
		case 4:
			if (!GlobalFunc_111())
			{
				iLocal_3534 = 0;
				iLocal_3536 = 0;
				iLocal_3537 = 0;
				iLocal_3540 = 0;
				iLocal_3535 = 0;
				bLocal_3539 = false;
				func_198(0, 1, 0, 0, 0, 0);
				iLocal_3392 = 1;
				CUTSCENE::REMOVE_CUTSCENE();
				iLocal_5436++;
			}
			break;
		
		case 5:
			if (!Local_3356.f_20)
			{
				if (PLAYER::PLAYER_PED_ID() == func_129())
				{
					GlobalFunc_702(0, 0, 1);
					iLocal_3392 = 0;
					func_211(3);
					iLocal_5436 = 0;
					if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					}
					iLocal_9226 = 0;
				}
			}
			break;
	}
}

int func_453(int iParam0)//Position - 0x3DF38
{
	if (GlobalFunc_9134(&uLocal_3312, iParam0))
	{
		Local_3356.f_12 = uLocal_3312[iParam0];
		Local_3356.f_20 = 1;
		return 1;
	}
	return 0;
}









int func_462(var uParam0, bool bParam1)//Position - 0x3E293
{
	int iVar0;
	struct<3> Var1;
	
	switch (iLocal_5442)
	{
		case 0:
			break;
		
		case 3:
			iLocal_3438 = CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE();
			if (GlobalFunc_3000(&uLocal_6684))
			{
				GlobalFunc_2999(&uLocal_6684);
			}
			if (GlobalFunc_3000(&Local_7925))
			{
				GlobalFunc_2999(&Local_7925);
			}
			TASK::TASK_PLAY_ANIM(Local_3051[1 /*4*/], cLocal_9223, "bss_1_mcs_2_leadout_fra", 1000f, -8f, -1, 8, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(Local_3051[0 /*4*/], cLocal_9223, "bss_1_mcs_2_leadout_mic", 1000f, -8f, -1, 8, 0, 0, 0, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_3051[0 /*4*/], 1, 0);
			func_496(uParam0, &(Local_3051[0 /*4*/]), &(Local_3051[2 /*4*/]));
			func_478(uParam0);
			func_254();
			CAM::SET_CAM_ACTIVE(uParam0->f_1, 1);
			CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
			VEHICLE::SET_FORCE_HD_VEHICLE(Local_3032[2 /*2*/], 1);
			HUD::DISPLAY_RADAR(0);
			HUD::DISPLAY_HUD(0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			iLocal_9225 = 0;
			STREAMING::SET_RENDER_HD_ONLY(0);
			ENTITY::FREEZE_ENTITY_POSITION(Local_3032[2 /*2*/], 0);
			uParam0->f_1232 = 0;
			iLocal_9214 = 0;
			iLocal_9189 = 0;
			Var1 = { ENTITY::GET_ENTITY_COORDS(Local_3032[2 /*2*/], 1) };
			if (Var1.f_2 < 40f)
			{
				Var1.f_2 = (Var1.f_2 + 70f);
				ENTITY::SET_ENTITY_COORDS(Local_3032[2 /*2*/], Var1, 1, 0, 0, 1);
			}
			iLocal_5442 = 4;
			break;
		
		case 4:
			iVar0 = func_465(uParam0);
			if (CAM::IS_CAM_ACTIVE(uParam0->f_1))
			{
				if (iVar0 >= uParam0->f_1218)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_9171);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_9172, 1065353216);
				}
				if (iVar0 >= uParam0->f_1218)
				{
					STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(fLocal_9216);
					if (!Local_3356.f_18)
					{
						Local_3356.f_18 = 1;
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[2 /*2*/]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3032[2 /*2*/]);
						}
						STREAMING::STREAMVOL_DELETE(uLocal_9219);
						uLocal_9218 = STREAMING::STREAMVOL_CREATE_FRUSTUM(ENTITY::GET_ENTITY_COORDS(Local_3051[2 /*4*/], 1), ENTITY::GET_ENTITY_FORWARD_VECTOR(Local_3051[2 /*4*/]), fLocal_9217, 12, 94);
						STREAMING::SET_RENDER_HD_ONLY(0);
					}
				}
				if (!iLocal_9214)
				{
					if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 2)
					{
						TASK::TASK_PLAY_ANIM(Local_3051[2 /*4*/], cLocal_9224, "mid_mission_inside_helicopter_trevor", 8f, -2f, -1, 8, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(Local_3051[3 /*4*/], cLocal_9224, "mid_mission_inside_helicopter_lester", 8f, -4f, -1, 8, 0, 0, 0, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_3051[2 /*4*/], 0, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_3051[3 /*4*/], 0, 0);
						iLocal_9214 = 1;
					}
				}
				if (!iLocal_9189)
				{
					if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= 0.7f && iLocal_3438 == 4)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_9189 = 1;
					}
				}
				if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= 1f || (STREAMING::STREAMVOL_HAS_LOADED(uLocal_9218) && CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= 0.8f))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_9171);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_9172, 1065353216);
					CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
					STREAMING::SET_RENDER_HD_ONLY(0);
					iLocal_5442 = 10;
				}
			}
			break;
		
		case 10:
			MISC::SET_TIME_SCALE(1f);
			if (CAM::DOES_CAM_EXIST(uParam0->f_1))
			{
				CAM::SET_CAM_ACTIVE(uParam0->f_1, 0);
				CAM::DESTROY_CAM(uParam0->f_1, 0);
			}
			CAM::DESTROY_ALL_CAMS(0);
			if (!iLocal_9225)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				HUD::DISPLAY_RADAR(1);
				HUD::DISPLAY_HUD(1);
				iLocal_9225 = 1;
			}
			TASK::CLEAR_PED_TASKS(Local_3051[2 /*4*/]);
			STREAMING::REMOVE_ANIM_DICT(cLocal_9224);
			STREAMING::REMOVE_ANIM_DICT(cLocal_9223);
			func_464();
			GlobalFunc_671(3, 2, 0, 0);
			VEHICLE::SET_FORCE_HD_VEHICLE(Local_3032[2 /*2*/], 0);
			SYSTEM::SETTIMERA(0);
			STREAMING::STREAMVOL_DELETE(uLocal_9218);
			iLocal_5442 = 0;
			uParam0->f_1232 = 1;
			VEHICLE::ROLL_UP_WINDOW(Local_3032[0 /*2*/], 0);
			VEHICLE::ROLL_UP_WINDOW(Local_3032[0 /*2*/], 1);
			return 1;
			break;
	}
	if (bParam1)
	{
		return 0;
	}
	return uParam0->f_1232;
}


void func_464()//Position - 0x3E668
{
	STREAMING::REMOVE_ANIM_DICT("shake_cam_all@");
}

int func_465(var uParam0)//Position - 0x3E678
{
	int iVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	bool bVar5;
	
	iVar0 = CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1);
	iVar1 = CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) + 1;
	if (iVar1 > uParam0->f_1217)
	{
		iVar1 = uParam0->f_1217;
	}
	if (iVar1 < (uParam0->f_1217 - 1))
	{
		switch (uParam0->f_10[iVar1 /*57*/].f_34)
		{
			case 0:
				fLocal_50 = GlobalFunc_551(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1));
				break;
			
			case 1:
				fLocal_50 = GlobalFunc_5161(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, GlobalFunc_253((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
			
			case 2:
				fLocal_50 = GlobalFunc_5160(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, GlobalFunc_253((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
			
			case 3:
				fLocal_50 = GlobalFunc_5159(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, GlobalFunc_253((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
		}
		MISC::SET_TIME_SCALE(fLocal_50);
	}
	else
	{
		MISC::SET_TIME_SCALE(1f);
	}
	if (uParam0->f_10[iVar0 /*57*/].f_2 == 8)
	{
		GlobalFunc_674(uParam0, iVar0, 0);
	}
	if (!uParam0->f_10[iVar1 /*57*/].f_56)
	{
		if (uParam0->f_10[iVar1 /*57*/].f_50 != 0)
		{
			if (!uParam0->f_1231 || (iVar1 > 1 && uParam0->f_10[iVar0 /*57*/].f_50 != uParam0->f_10[iVar1 /*57*/].f_50))
			{
				if (CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) >= uParam0->f_10[iVar1 /*57*/].f_52)
				{
					switch (uParam0->f_10[iVar1 /*57*/].f_50)
					{
						case 1:
							sVar2 = "switch_cam_2";
							break;
						
						case 2:
							sVar2 = "switch_cam_1";
							break;
						
						case 3:
							sVar2 = "SwitchHUDIn";
							break;
					}
					switch (uParam0->f_10[iVar1 /*57*/].f_50)
					{
						case 1:
						case 2:
							GlobalFunc_5158(uParam0, iVar1);
							if (uParam0->f_10[iVar1 /*57*/].f_51 > 0f)
							{
								GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER(sVar2, uParam0->f_10[iVar1 /*57*/].f_51);
							}
							else
							{
								GRAPHICS::SET_TIMECYCLE_MODIFIER(sVar2);
							}
							break;
						
						case 3:
							GlobalFunc_5158(uParam0, iVar1);
							GRAPHICS::ANIMPOSTFX_PLAY(sVar2, SYSTEM::FLOOR((1000f * uParam0->f_10[iVar1 /*57*/].f_51)), 0);
							break;
					}
					uParam0->f_1231 = 1;
					uParam0->f_10[iVar1 /*57*/].f_56 = 1;
				}
			}
		}
		else if (uParam0->f_1231)
		{
			if (CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) >= uParam0->f_10[iVar1 /*57*/].f_52)
			{
				if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
				{
					GRAPHICS::_0x1CBA05AE7BD7EE05(uParam0->f_10[iVar1 /*57*/].f_51);
					uParam0->f_1231 = 0;
					uParam0->f_10[iVar1 /*57*/].f_56 = 1;
				}
				else if (!MISC::ARE_STRINGS_EQUAL(GlobalFunc_673(), ""))
				{
					GlobalFunc_5158(uParam0, iVar1);
					uParam0->f_1231 = 0;
					uParam0->f_10[iVar1 /*57*/].f_56 = 1;
				}
			}
		}
	}
	if (uParam0->f_10[iVar1 /*57*/].f_36)
	{
		if (!uParam0->f_10[iVar1 /*57*/].f_44)
		{
			if (CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) >= uParam0->f_10[iVar1 /*57*/].f_38)
			{
				GlobalFunc_672(uParam0, iVar1);
				uParam0->f_10[iVar1 /*57*/].f_44 = 1;
			}
		}
	}
	if (uParam0->f_10[iVar0 /*57*/].f_36)
	{
		if (!uParam0->f_10[iVar0 /*57*/].f_44)
		{
			GlobalFunc_672(uParam0, iVar0);
			uParam0->f_10[iVar0 /*57*/].f_44 = 1;
		}
	}
	GRAPHICS::_0xE3E2C1B4C59DBC77(6);
	if (iVar1 < (uParam0->f_1217 - 1))
	{
		if (!uParam0->f_10[iVar1 /*57*/].f_55)
		{
			if (uParam0->f_10[iVar1 /*57*/].f_54)
			{
				CAM::STOP_CAM_SHAKING(uParam0->f_10[iVar1 /*57*/].f_1, 1);
			}
			if (uParam0->f_10[iVar1 /*57*/].f_53 != 0)
			{
				sVar4 = "shake_cam_all@";
				if (uParam0->f_10[iVar1 /*57*/].f_53 == 1)
				{
					sVar3 = "light";
				}
				else if (uParam0->f_10[iVar1 /*57*/].f_53 == 2)
				{
					sVar3 = "medium";
				}
				else if (uParam0->f_10[iVar1 /*57*/].f_53 == 3)
				{
					sVar3 = "heavy";
				}
				CAM::ANIMATED_SHAKE_CAM(uParam0->f_10[iVar1 /*57*/].f_1, sVar4, sVar3, "", uParam0->f_10[iVar1 /*57*/].f_23);
			}
			else
			{
				CAM::SHAKE_CAM(uParam0->f_1, "SKY_DIVING_SHAKE", uParam0->f_10[iVar1 /*57*/].f_23);
			}
			uParam0->f_10[iVar1 /*57*/].f_55 = 1;
		}
	}
	if (uParam0->f_10[iVar0 /*57*/].f_45)
	{
		GlobalFunc_671(0, 0, 1, 1);
	}
	else
	{
		GlobalFunc_671(3, 3, 0, 0);
	}
	if (CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) < uParam0->f_1217)
	{
		if (uParam0->f_10[CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) + 1 /*57*/].f_46)
		{
			bVar5 = true;
		}
	}
	if (uParam0->f_10[CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) /*57*/].f_46)
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		CAM::SET_USE_HI_DOF();
	}
	GlobalFunc_670(uParam0);
	return iVar0;
}













void func_478(var uParam0)//Position - 0x3F051
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!GlobalFunc_5163(uParam0))
	{
	}
	iVar0 = 0;
	uParam0->f_1232 = 0;
	GlobalFunc_685(uParam0);
	iVar1 = 0;
	while (iVar1 < 20)
	{
		uParam0->f_10[iVar1 /*57*/].f_44 = 0;
		iVar1++;
	}
	uParam0->f_1231 = 0;
	if (CAM::DOES_CAM_EXIST(uParam0->f_1))
	{
		CAM::DESTROY_CAM(uParam0->f_1, 0);
	}
	uParam0->f_1 = CAM::CREATE_CAMERA(1665938388, 0);
	if (CAM::DOES_CAM_EXIST(uParam0->f_1))
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_1217)
		{
			func_483(uParam0, iVar1);
			if (uParam0->f_10[iVar1 /*57*/].f_4 || uParam0->f_10[iVar1 /*57*/].f_2 == 2)
			{
				if (GlobalFunc_676(uParam0, iVar1))
				{
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_1, uParam0->f_10[iVar1 /*57*/].f_1, uParam0->f_10[iVar1 /*57*/].f_5, 2);
				}
				else
				{
					CAM::ADD_CAM_SPLINE_NODE_USING_GAMEPLAY_FRAME(uParam0->f_1, uParam0->f_10[iVar1 /*57*/].f_5, 2);
				}
			}
			else
			{
				CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_1, uParam0->f_10[iVar1 /*57*/].f_1, uParam0->f_10[iVar1 /*57*/].f_5, 2);
			}
			if (GlobalFunc_676(uParam0, iVar1))
			{
				GlobalFunc_6816(uParam0, iVar1);
			}
			if (uParam0->f_10[iVar1 /*57*/].f_28 > 0 && uParam0->f_10[iVar1 /*57*/].f_29 > 0f)
			{
				switch (uParam0->f_10[iVar1 /*57*/].f_28)
				{
					case 1:
						iVar0 = 4;
						break;
					
					case 2:
						iVar0 = 8;
						break;
					
					case 3:
						iVar0 = 16;
						break;
				}
				CAM::SET_CAM_SPLINE_NODE_EASE(uParam0->f_1, iVar1, iVar0, uParam0->f_10[iVar1 /*57*/].f_29);
			}
			iVar2 = 0;
			if (uParam0->f_10[iVar1 /*57*/].f_30)
			{
				iVar2++;
			}
			if (uParam0->f_10[iVar1 /*57*/].f_31)
			{
				iVar2 += 8;
			}
			CAM::SET_CAM_SPLINE_NODE_VELOCITY_SCALE(uParam0->f_1, iVar1, uParam0->f_10[iVar1 /*57*/].f_32);
			CAM::SET_CAM_SPLINE_NODE_EXTRA_FLAGS(uParam0->f_1, iVar1, iVar2);
			iVar1++;
		}
		if (uParam0->f_3)
		{
			if (uParam0->f_1219 >= 0)
			{
				CAM::ADD_CAM_SPLINE_NODE_USING_GAMEPLAY_FRAME(uParam0->f_1, uParam0->f_1219, 2);
			}
		}
		if (uParam0->f_2)
		{
			CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_1, 0);
		}
		iVar1 = 0;
		while (iVar1 < 16)
		{
			if (uParam0->f_1151[iVar1 /*2*/].f_1 > -1f)
			{
				CAM::OVERRIDE_CAM_SPLINE_VELOCITY(uParam0->f_1, iVar1, uParam0->f_1151[iVar1 /*2*/], uParam0->f_1151[iVar1 /*2*/].f_1);
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 16)
		{
			CAM::OVERRIDE_CAM_SPLINE_MOTION_BLUR(uParam0->f_1, iVar1, uParam0->f_1184[iVar1 /*2*/], uParam0->f_1184[iVar1 /*2*/].f_1);
			iVar1++;
		}
		CAM::_0x271017B9BA825366(uParam0->f_1, 0);
	}
}





void func_483(var uParam0, int iParam1)//Position - 0x3F45D
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	struct<3> Var16;
	struct<3> Var19;
	float fVar22;
	struct<3> Var23;
	struct<3> Var26;
	struct<3> Var29;
	struct<3> Var32;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	struct<3> Var40;
	struct<3> Var43;
	float fVar46;
	struct<3> Var47;
	var uVar50;
	
	if (GlobalFunc_676(uParam0, iParam1))
	{
		GlobalFunc_684(uParam0, iParam1);
	}
	if (uParam0->f_10[iParam1 /*57*/].f_21 == 0f)
	{
		iVar0 = CAM::GET_GAMEPLAY_CAM_FOV();
	}
	else
	{
		iVar0 = uParam0->f_10[iParam1 /*57*/].f_21;
	}
	if (GlobalFunc_683(uParam0, iParam1))
	{
		GlobalFunc_682(uParam0, iParam1);
		if (iParam1 == (uParam0->f_1217 - 1))
		{
			uParam0->f_10[iParam1 /*57*/].f_54 = 0;
		}
	}
	if (iParam1 == (uParam0->f_1217 - 1))
	{
		uParam0->f_10[iParam1 /*57*/].f_54 = 0;
	}
	if (uParam0->f_10[iParam1 /*57*/].f_2 == 4)
	{
		if (uParam0->f_10[iParam1 /*57*/].f_3 > -1)
		{
			Var1 = { GlobalFunc_681(uParam0, uParam0->f_10[iParam1 /*57*/].f_3) };
		}
		else
		{
			Var1 = { uParam0->f_10[iParam1 /*57*/].f_13 };
		}
		if ((iParam1 == 0 || (iParam1 > 0 && uParam0->f_10[(iParam1 - 1) /*57*/].f_4)) || (iParam1 > 0 && uParam0->f_10[(iParam1 - 1) /*57*/].f_2 == 2))
		{
			Var4 = { CAM::GET_GAMEPLAY_CAM_COORD() };
		}
		else
		{
			Var4 = { uParam0->f_10[(iParam1 - 1) /*57*/].f_6 };
			if (GlobalFunc_680(uParam0, (iParam1 - 1)))
			{
				ENTITY::GET_ENTITY_MATRIX(GlobalFunc_5162(uParam0, (iParam1 - 1), -1), &Var7, &Var10, &Var13, &Var16);
				if (uParam0->f_10[iParam1 /*57*/].f_20)
				{
					Var4 = { Var16 + Var7 * FtoV(uParam0->f_10[(iParam1 - 1) /*57*/].f_6.f_1) + Var10 * FtoV(uParam0->f_10[(iParam1 - 1) /*57*/].f_6) + Var13 * FtoV(uParam0->f_10[(iParam1 - 1) /*57*/].f_6.f_2) };
				}
				else
				{
					Var4 = { Var16 + uParam0->f_10[(iParam1 - 1) /*57*/].f_6 };
				}
			}
		}
		Var19 = { Var1 - Var4 };
		fVar22 = (SYSTEM::VMAG(Var19) - uParam0->f_10[iParam1 /*57*/].f_12);
		Var19 = { GlobalFunc_107(Var19) };
		Var19 = { Var19 * Vector(fVar22, fVar22, fVar22) };
		uParam0->f_10[iParam1 /*57*/].f_6 = { Var4 + Var19 };
		if (uParam0->f_10[iParam1 /*57*/].f_3 > -1)
		{
			uParam0->f_10[iParam1 /*57*/].f_13 = { Var1 };
		}
	}
	else if (uParam0->f_10[iParam1 /*57*/].f_2 == 5 || uParam0->f_10[iParam1 /*57*/].f_2 == 6)
	{
		Var23 = { 0f, 0f, 0f };
		if (ENTITY::DOES_ENTITY_EXIST(GlobalFunc_5162(uParam0, uParam0->f_1218, -1)))
		{
			if (uParam0->f_10[iParam1 /*57*/].f_3 > -1)
			{
				Var23 = { GlobalFunc_681(uParam0, uParam0->f_10[iParam1 /*57*/].f_3) };
			}
			else
			{
				Var23 = { ENTITY::GET_ENTITY_COORDS(GlobalFunc_5162(uParam0, uParam0->f_1218, -1), 1) };
			}
		}
		Var26 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
		Var29 = { CAM::GET_GAMEPLAY_CAM_COORD() };
		Var32 = { Var23 - Var29 };
		fVar35 = 0f;
		if (iParam1 < uParam0->f_1218 || uParam0->f_1218 == 0)
		{
			fVar35 = uParam0->f_10[iParam1 /*57*/].f_12;
		}
		fVar36 = (SYSTEM::VMAG(Var32) - fVar35);
		Var32 = { GlobalFunc_679(Var26) };
		Var29 = { Var29 + Var32 * Vector(fVar35, fVar35, fVar35) };
		if (iParam1 < uParam0->f_1218)
		{
			uParam0->f_10[iParam1 /*57*/].f_6 = { Var29 };
		}
		else
		{
			uParam0->f_10[iParam1 /*57*/].f_6 = { Var29 + Var32 * FtoV((fVar36 - uParam0->f_10[iParam1 /*57*/].f_12)) };
		}
		uParam0->f_10[iParam1 /*57*/].f_9 = { Var26 };
	}
	else if (uParam0->f_10[iParam1 /*57*/].f_2 == 7)
	{
		Var37 = { uParam0->f_10[iParam1 /*57*/].f_13 };
		Var40 = { ENTITY::GET_ENTITY_COORDS(GlobalFunc_5162(uParam0, iParam1, -1), 1) };
		Var43 = { Var37 - Var40 };
		fVar46 = 0f;
		fVar46 = uParam0->f_10[iParam1 /*57*/].f_12;
		Var43 = { GlobalFunc_107(Var43) };
		Var47 = { Var40 + Var43 * Vector(fVar46, fVar46, fVar46) };
		Var47.f_2 = (Var47.f_2 + uParam0->f_10[iParam1 /*57*/].f_16);
		uParam0->f_10[iParam1 /*57*/].f_6 = { Var47 };
	}
	if (uParam0->f_10[iParam1 /*57*/].f_2 == 8)
	{
		GlobalFunc_678(uParam0, iParam1);
		iVar0 = uParam0->f_10[iParam1 /*57*/].f_21;
	}
	uParam0->f_10[iParam1 /*57*/].f_1 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, uParam0->f_10[iParam1 /*57*/].f_6, uParam0->f_10[iParam1 /*57*/].f_9, iVar0, 1, 2);
	uVar50 = uParam0->f_10[iParam1 /*57*/].f_1;
	if (CAM::DOES_CAM_EXIST(uParam0->f_10[iParam1 /*57*/].f_1))
	{
		CAM::SET_CAM_MOTION_BLUR_STRENGTH(uVar50, uParam0->f_10[iParam1 /*57*/].f_22);
		if (uParam0->f_10[iParam1 /*57*/].f_2 == 4)
		{
			CAM::POINT_CAM_AT_COORD(uVar50, uParam0->f_10[iParam1 /*57*/].f_13);
		}
		if (uParam0->f_10[iParam1 /*57*/].f_2 == 3 && uParam0->f_10[iParam1 /*57*/].f_3 > -1)
		{
			CAM::POINT_CAM_AT_ENTITY(uVar50, GlobalFunc_5162(uParam0, iParam1, uParam0->f_10[iParam1 /*57*/].f_3), uParam0->f_10[iParam1 /*57*/].f_9, uParam0->f_10[iParam1 /*57*/].f_19);
		}
		if (uParam0->f_10[iParam1 /*57*/].f_2 == 6)
		{
			if (uParam0->f_10[iParam1 /*57*/].f_3 > -1)
			{
				CAM::ATTACH_CAM_TO_ENTITY(uVar50, GlobalFunc_5162(uParam0, iParam1, uParam0->f_10[iParam1 /*57*/].f_3), uParam0->f_10[iParam1 /*57*/].f_6 - GlobalFunc_681(uParam0, uParam0->f_10[iParam1 /*57*/].f_3) + uParam0->f_10[iParam1 /*57*/].f_24, 0);
			}
			else
			{
				CAM::ATTACH_CAM_TO_ENTITY(uVar50, GlobalFunc_5162(uParam0, iParam1, -1), uParam0->f_10[iParam1 /*57*/].f_9, 0);
			}
		}
		if (uParam0->f_10[iParam1 /*57*/].f_2 == 7)
		{
			if (uParam0->f_10[iParam1 /*57*/].f_17)
			{
				CAM::ATTACH_CAM_TO_ENTITY(uVar50, GlobalFunc_5162(uParam0, iParam1, -1), uParam0->f_10[iParam1 /*57*/].f_6 - ENTITY::GET_ENTITY_COORDS(GlobalFunc_5162(uParam0, iParam1, -1), 1), 0);
			}
		}
		if (GlobalFunc_680(uParam0, iParam1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(GlobalFunc_5162(uParam0, iParam1, -1)))
			{
				CAM::ATTACH_CAM_TO_ENTITY(uVar50, GlobalFunc_5162(uParam0, iParam1, -1), uParam0->f_10[iParam1 /*57*/].f_6, uParam0->f_10[iParam1 /*57*/].f_20);
				if (uParam0->f_10[iParam1 /*57*/].f_18)
				{
					if (uParam0->f_10[iParam1 /*57*/].f_3 > -1)
					{
						CAM::POINT_CAM_AT_ENTITY(uVar50, GlobalFunc_5162(uParam0, iParam1, uParam0->f_10[iParam1 /*57*/].f_3), uParam0->f_10[iParam1 /*57*/].f_9, uParam0->f_10[iParam1 /*57*/].f_19);
					}
					else
					{
						CAM::POINT_CAM_AT_ENTITY(uVar50, GlobalFunc_5162(uParam0, iParam1, -1), uParam0->f_10[iParam1 /*57*/].f_9, uParam0->f_10[iParam1 /*57*/].f_19);
					}
				}
			}
		}
		if (uParam0->f_10[iParam1 /*57*/].f_2 == 7)
		{
			CAM::POINT_CAM_AT_COORD(uVar50, uParam0->f_10[iParam1 /*57*/].f_13);
		}
		if (uParam0->f_10[iParam1 /*57*/].f_46)
		{
			GlobalFunc_677(uParam0, iParam1);
		}
	}
	uParam0->f_10[iParam1 /*57*/].f_55 = 0;
	uParam0->f_10[iParam1 /*57*/].f_56 = 0;
}













void func_496(var uParam0, var uParam1, var uParam2)//Position - 0x401F1
{
	if (!*uParam0)
	{
		uParam0->f_10[0 /*57*/].f_2 = 0;
		uParam0->f_10[0 /*57*/].f_3 = -1;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { -1.6973f, 1.5316f, 0.6956f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 0f;
		uParam0->f_10[0 /*57*/].f_16 = 0f;
		uParam0->f_10[0 /*57*/].f_17 = 0;
		uParam0->f_10[0 /*57*/].f_9 = { -3.717f, -0.0056f, -143.263f };
		uParam0->f_10[0 /*57*/].f_18 = 0;
		uParam0->f_10[0 /*57*/].f_19 = 0;
		uParam0->f_10[0 /*57*/].f_20 = 1;
		uParam0->f_10[0 /*57*/].f_21 = 30f;
		uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_27 = 0;
		uParam0->f_10[0 /*57*/].f_50 = 0;
		uParam0->f_10[0 /*57*/].f_51 = 0f;
		uParam0->f_10[0 /*57*/].f_52 = 0f;
		uParam0->f_10[0 /*57*/].f_22 = 0f;
		uParam0->f_10[0 /*57*/].f_53 = 0;
		uParam0->f_10[0 /*57*/].f_23 = 0f;
		uParam0->f_10[0 /*57*/].f_28 = 0;
		uParam0->f_10[0 /*57*/].f_29 = 0f;
		uParam0->f_10[0 /*57*/].f_32 = 0f;
		uParam0->f_10[0 /*57*/].f_30 = 1;
		uParam0->f_10[0 /*57*/].f_31 = 0;
		uParam0->f_10[0 /*57*/].f_33 = 1f;
		uParam0->f_10[0 /*57*/].f_34 = 0;
		uParam0->f_10[0 /*57*/].f_35 = 0f;
		uParam0->f_10[0 /*57*/].f_36 = 0;
		uParam0->f_10[0 /*57*/].f_37 = 0;
		uParam0->f_10[0 /*57*/].f_39 = 0f;
		uParam0->f_10[0 /*57*/].f_40 = 0f;
		uParam0->f_10[0 /*57*/].f_41 = 0;
		uParam0->f_10[0 /*57*/].f_42 = 0;
		uParam0->f_10[0 /*57*/].f_43 = 0;
		uParam0->f_10[0 /*57*/].f_38 = 0f;
		uParam0->f_10[0 /*57*/].f_45 = 1;
		uParam0->f_10[0 /*57*/].f_46 = 0;
		uParam0->f_10[0 /*57*/].f_47 = 0f;
		uParam0->f_10[0 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[0 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[1 /*57*/].f_2 = 0;
		uParam0->f_10[1 /*57*/].f_3 = -1;
		uParam0->f_10[1 /*57*/].f_4 = 0;
		uParam0->f_10[1 /*57*/].f_5 = 1500;
		uParam0->f_10[1 /*57*/].f_6 = { -1.6297f, 1.5037f, 0.6884f };
		uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_12 = 0f;
		uParam0->f_10[1 /*57*/].f_16 = 0f;
		uParam0->f_10[1 /*57*/].f_17 = 0;
		uParam0->f_10[1 /*57*/].f_9 = { -3.717f, -0.0056f, -143.263f };
		uParam0->f_10[1 /*57*/].f_18 = 0;
		uParam0->f_10[1 /*57*/].f_19 = 0;
		uParam0->f_10[1 /*57*/].f_20 = 1;
		uParam0->f_10[1 /*57*/].f_21 = 30f;
		uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_27 = 0;
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 1f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0f;
		uParam0->f_10[1 /*57*/].f_53 = 0;
		uParam0->f_10[1 /*57*/].f_23 = 0f;
		uParam0->f_10[1 /*57*/].f_28 = 2;
		uParam0->f_10[1 /*57*/].f_29 = 1f;
		uParam0->f_10[1 /*57*/].f_32 = 0f;
		uParam0->f_10[1 /*57*/].f_30 = 1;
		uParam0->f_10[1 /*57*/].f_31 = 0;
		uParam0->f_10[1 /*57*/].f_33 = 1f;
		uParam0->f_10[1 /*57*/].f_34 = 0;
		uParam0->f_10[1 /*57*/].f_35 = 0f;
		uParam0->f_10[1 /*57*/].f_36 = 1;
		uParam0->f_10[1 /*57*/].f_37 = 9;
		uParam0->f_10[1 /*57*/].f_39 = 0f;
		uParam0->f_10[1 /*57*/].f_40 = 0f;
		uParam0->f_10[1 /*57*/].f_41 = 0;
		uParam0->f_10[1 /*57*/].f_42 = 0;
		uParam0->f_10[1 /*57*/].f_43 = 0;
		uParam0->f_10[1 /*57*/].f_38 = 0.8f;
		uParam0->f_10[1 /*57*/].f_45 = 1;
		uParam0->f_10[1 /*57*/].f_46 = 0;
		uParam0->f_10[1 /*57*/].f_47 = 0f;
		uParam0->f_10[1 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[1 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[2 /*57*/].f_2 = 0;
		uParam0->f_10[2 /*57*/].f_3 = -1;
		uParam0->f_10[2 /*57*/].f_4 = 0;
		uParam0->f_10[2 /*57*/].f_5 = 600;
		uParam0->f_10[2 /*57*/].f_6 = { -0.0425f, 0.2776f, 31.0641f };
		uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_12 = 0f;
		uParam0->f_10[2 /*57*/].f_16 = 0f;
		uParam0->f_10[2 /*57*/].f_17 = 0;
		uParam0->f_10[2 /*57*/].f_9 = { -3.717f, -0.006f, -143.2626f };
		uParam0->f_10[2 /*57*/].f_18 = 0;
		uParam0->f_10[2 /*57*/].f_19 = 0;
		uParam0->f_10[2 /*57*/].f_20 = 1;
		uParam0->f_10[2 /*57*/].f_21 = 30f;
		uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_27 = 0;
		uParam0->f_10[2 /*57*/].f_50 = 0;
		uParam0->f_10[2 /*57*/].f_51 = 1f;
		uParam0->f_10[2 /*57*/].f_52 = 0f;
		uParam0->f_10[2 /*57*/].f_22 = 0.3f;
		uParam0->f_10[2 /*57*/].f_53 = 0;
		uParam0->f_10[2 /*57*/].f_23 = 0f;
		uParam0->f_10[2 /*57*/].f_28 = 1;
		uParam0->f_10[2 /*57*/].f_29 = 0.4f;
		uParam0->f_10[2 /*57*/].f_32 = 0f;
		uParam0->f_10[2 /*57*/].f_30 = 1;
		uParam0->f_10[2 /*57*/].f_31 = 0;
		uParam0->f_10[2 /*57*/].f_33 = 1f;
		uParam0->f_10[2 /*57*/].f_34 = 0;
		uParam0->f_10[2 /*57*/].f_35 = 0f;
		uParam0->f_10[2 /*57*/].f_36 = 1;
		uParam0->f_10[2 /*57*/].f_37 = 11;
		uParam0->f_10[2 /*57*/].f_39 = 0f;
		uParam0->f_10[2 /*57*/].f_40 = 0f;
		uParam0->f_10[2 /*57*/].f_41 = 0;
		uParam0->f_10[2 /*57*/].f_42 = 0;
		uParam0->f_10[2 /*57*/].f_43 = 0;
		uParam0->f_10[2 /*57*/].f_38 = 0.55f;
		uParam0->f_10[2 /*57*/].f_45 = 1;
		uParam0->f_10[2 /*57*/].f_46 = 0;
		uParam0->f_10[2 /*57*/].f_47 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[3 /*57*/].f_54 = 1;
		uParam0->f_10[4 /*57*/].f_2 = 0;
		uParam0->f_10[4 /*57*/].f_3 = -1;
		uParam0->f_10[4 /*57*/].f_4 = 0;
		uParam0->f_10[4 /*57*/].f_5 = 0;
		uParam0->f_10[4 /*57*/].f_6 = { -5.9937f, 5.3838f, -9.1104f };
		uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_12 = 0f;
		uParam0->f_10[4 /*57*/].f_16 = 0f;
		uParam0->f_10[4 /*57*/].f_17 = 0;
		uParam0->f_10[4 /*57*/].f_9 = { -0.4838f, -2.0393f, -1.6781f };
		uParam0->f_10[4 /*57*/].f_18 = 1;
		uParam0->f_10[4 /*57*/].f_19 = 1;
		uParam0->f_10[4 /*57*/].f_20 = 1;
		uParam0->f_10[4 /*57*/].f_21 = 35f;
		uParam0->f_10[4 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_27 = 0;
		uParam0->f_10[4 /*57*/].f_50 = 0;
		uParam0->f_10[4 /*57*/].f_51 = 0f;
		uParam0->f_10[4 /*57*/].f_52 = 0f;
		uParam0->f_10[4 /*57*/].f_22 = 0.3f;
		uParam0->f_10[4 /*57*/].f_53 = 0;
		uParam0->f_10[4 /*57*/].f_23 = 0f;
		uParam0->f_10[4 /*57*/].f_28 = 1;
		uParam0->f_10[4 /*57*/].f_29 = 1f;
		uParam0->f_10[4 /*57*/].f_32 = 0f;
		uParam0->f_10[4 /*57*/].f_30 = 1;
		uParam0->f_10[4 /*57*/].f_31 = 0;
		uParam0->f_10[4 /*57*/].f_33 = 1f;
		uParam0->f_10[4 /*57*/].f_34 = 0;
		uParam0->f_10[4 /*57*/].f_35 = 0f;
		uParam0->f_10[4 /*57*/].f_36 = 0;
		uParam0->f_10[4 /*57*/].f_37 = 0;
		uParam0->f_10[4 /*57*/].f_39 = 0f;
		uParam0->f_10[4 /*57*/].f_40 = 0f;
		uParam0->f_10[4 /*57*/].f_41 = 0;
		uParam0->f_10[4 /*57*/].f_42 = 0;
		uParam0->f_10[4 /*57*/].f_43 = 0;
		uParam0->f_10[4 /*57*/].f_38 = 0f;
		uParam0->f_10[4 /*57*/].f_45 = 1;
		uParam0->f_10[4 /*57*/].f_46 = 0;
		uParam0->f_10[4 /*57*/].f_47 = 0f;
		uParam0->f_10[4 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[4 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[5 /*57*/].f_2 = 1;
		uParam0->f_10[5 /*57*/].f_3 = -1;
		uParam0->f_10[5 /*57*/].f_4 = 0;
		uParam0->f_10[5 /*57*/].f_5 = 900;
		uParam0->f_10[5 /*57*/].f_6 = { -1.2508f, 1.3896f, 0.2707f };
		uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_12 = 0f;
		uParam0->f_10[5 /*57*/].f_16 = 0f;
		uParam0->f_10[5 /*57*/].f_17 = 0;
		uParam0->f_10[5 /*57*/].f_9 = { -0.0555f, 0.016f, 0.4621f };
		uParam0->f_10[5 /*57*/].f_18 = 1;
		uParam0->f_10[5 /*57*/].f_19 = 1;
		uParam0->f_10[5 /*57*/].f_20 = 1;
		uParam0->f_10[5 /*57*/].f_21 = 35f;
		uParam0->f_10[5 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_27 = 0;
		uParam0->f_10[5 /*57*/].f_50 = 0;
		uParam0->f_10[5 /*57*/].f_51 = 1f;
		uParam0->f_10[5 /*57*/].f_52 = 0f;
		uParam0->f_10[5 /*57*/].f_22 = 0f;
		uParam0->f_10[5 /*57*/].f_53 = 0;
		uParam0->f_10[5 /*57*/].f_23 = 0f;
		uParam0->f_10[5 /*57*/].f_28 = 0;
		uParam0->f_10[5 /*57*/].f_29 = 0f;
		uParam0->f_10[5 /*57*/].f_32 = 0f;
		uParam0->f_10[5 /*57*/].f_30 = 0;
		uParam0->f_10[5 /*57*/].f_31 = 0;
		uParam0->f_10[5 /*57*/].f_33 = 1f;
		uParam0->f_10[5 /*57*/].f_34 = 0;
		uParam0->f_10[5 /*57*/].f_35 = 0f;
		uParam0->f_10[5 /*57*/].f_36 = 0;
		uParam0->f_10[5 /*57*/].f_37 = 0;
		uParam0->f_10[5 /*57*/].f_39 = 0f;
		uParam0->f_10[5 /*57*/].f_40 = 0f;
		uParam0->f_10[5 /*57*/].f_41 = 0;
		uParam0->f_10[5 /*57*/].f_42 = 0;
		uParam0->f_10[5 /*57*/].f_43 = 0;
		uParam0->f_10[5 /*57*/].f_38 = 0f;
		uParam0->f_10[5 /*57*/].f_45 = 1;
		uParam0->f_10[5 /*57*/].f_46 = 0;
		uParam0->f_10[5 /*57*/].f_47 = 0f;
		uParam0->f_10[5 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[5 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[6 /*57*/].f_2 = 1;
		uParam0->f_10[6 /*57*/].f_3 = -1;
		uParam0->f_10[6 /*57*/].f_4 = 0;
		uParam0->f_10[6 /*57*/].f_5 = 4500;
		uParam0->f_10[6 /*57*/].f_6 = { -1.0556f, 1.4287f, 0.1626f };
		uParam0->f_10[6 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_12 = 0f;
		uParam0->f_10[6 /*57*/].f_16 = 0f;
		uParam0->f_10[6 /*57*/].f_17 = 0;
		uParam0->f_10[6 /*57*/].f_9 = { -0.0441f, 0.0195f, 0.3618f };
		uParam0->f_10[6 /*57*/].f_18 = 1;
		uParam0->f_10[6 /*57*/].f_19 = 1;
		uParam0->f_10[6 /*57*/].f_20 = 1;
		uParam0->f_10[6 /*57*/].f_21 = 35f;
		uParam0->f_10[6 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_27 = 0;
		uParam0->f_10[6 /*57*/].f_50 = 0;
		uParam0->f_10[6 /*57*/].f_51 = 0f;
		uParam0->f_10[6 /*57*/].f_52 = 0.98f;
		uParam0->f_10[6 /*57*/].f_22 = 0f;
		uParam0->f_10[6 /*57*/].f_53 = 0;
		uParam0->f_10[6 /*57*/].f_23 = 0f;
		uParam0->f_10[6 /*57*/].f_28 = 0;
		uParam0->f_10[6 /*57*/].f_29 = 0f;
		uParam0->f_10[6 /*57*/].f_32 = 0f;
		uParam0->f_10[6 /*57*/].f_30 = 0;
		uParam0->f_10[6 /*57*/].f_31 = 0;
		uParam0->f_10[6 /*57*/].f_33 = 1f;
		uParam0->f_10[6 /*57*/].f_34 = 0;
		uParam0->f_10[6 /*57*/].f_35 = 0f;
		uParam0->f_10[6 /*57*/].f_36 = 0;
		uParam0->f_10[6 /*57*/].f_37 = 0;
		uParam0->f_10[6 /*57*/].f_39 = 0f;
		uParam0->f_10[6 /*57*/].f_40 = 0f;
		uParam0->f_10[6 /*57*/].f_41 = 0;
		uParam0->f_10[6 /*57*/].f_42 = 0;
		uParam0->f_10[6 /*57*/].f_43 = 0;
		uParam0->f_10[6 /*57*/].f_38 = 0f;
		uParam0->f_10[6 /*57*/].f_45 = 0;
		uParam0->f_10[6 /*57*/].f_46 = 0;
		uParam0->f_10[6 /*57*/].f_47 = 0f;
		uParam0->f_10[6 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[6 /*57*/].f_47.f_2 = 0f;
		uParam0->f_1217 = 7;
		uParam0->f_1218 = 3;
		uParam0->f_1233 = 0.17f;
		uParam0->f_1234 = 0.28f;
		uParam0->f_1235 = 1;
		uParam0->f_1236 = 1;
		uParam0->f_1237 = 0;
		uParam0->f_2 = 1;
		uParam0->f_3 = 1;
		uParam0->f_1219 = 0;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_BigScore_MichaelToTrevorInHeli.txt";
		uParam0->f_1225 = "CameraInfo_BigScore_MichaelToTrevorInHeli.xml";
		*uParam0 = 1;
	}
	uParam0->f_7[0] = *uParam1;
	uParam0->f_7[1] = *uParam2;
}

int func_497(var uParam0, bool bParam1)//Position - 0x40DD8
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	switch (iLocal_5442)
	{
		case 0:
			break;
		
		case 1:
			STREAMING::NEW_LOAD_SCENE_START_SPHERE(1865.1f, 2263.8f, 56.3f, fLocal_9185, 2);
			break;
		
		case 3:
			func_500(uParam0, &(Local_3051[0 /*4*/]), &(Local_3051[2 /*4*/]));
			if (!PED::IS_PED_INJURED(Local_3051[0 /*4*/]))
			{
				TASK::TASK_PLAY_ANIM(Local_3051[0 /*4*/], cLocal_9223, "bss_1_mcs_2_leadout_mic", 1000f, -8f, -1, 2, 0, 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(Local_3051[1 /*4*/]))
			{
				TASK::TASK_PLAY_ANIM(Local_3051[1 /*4*/], cLocal_9223, "bss_1_mcs_2_leadout_fra", 1000f, -8f, -1, 2, 0, 0, 0, 0);
			}
			func_254();
			STREAMING::SET_RENDER_HD_ONLY(0);
			STREAMING::REQUEST_PTFX_ASSET();
			STREAMING::SET_PED_POPULATION_BUDGET(0);
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
			STREAMING::SET_REDUCE_PED_MODEL_BUDGET(1);
			STREAMING::SET_REDUCE_VEHICLE_MODEL_BUDGET(1);
			if (GlobalFunc_3000(uParam0))
			{
				GlobalFunc_2999(uParam0);
			}
			func_478(uParam0);
			CAM::SET_CAM_ACTIVE(uParam0->f_1, 1);
			CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
			HUD::DISPLAY_RADAR(0);
			HUD::DISPLAY_HUD(0);
			iLocal_9183 = 0;
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			iLocal_3438 = CAM::GET_FOLLOW_PED_CAM_VIEW_MODE();
			CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(0);
			iLocal_9225 = 0;
			iLocal_9195 = 0;
			bLocal_9194 = false;
			iLocal_9193 = 0;
			iLocal_9192 = 0;
			iLocal_9187 = 0;
			iLocal_9189 = 0;
			uParam0->f_1232 = 0;
			iLocal_9184 = 0;
			bLocal_9186 = false;
			if (!PED::IS_PED_INJURED(Local_3051[2 /*4*/]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_3051[2 /*4*/]);
				TASK::CLEAR_PED_SECONDARY_TASK(Local_3051[2 /*4*/]);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_3051[2 /*4*/], Local_9173, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_3051[2 /*4*/], fLocal_9176);
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_3032[1 /*2*/]))
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_3032[1 /*2*/], Local_9179, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_3032[1 /*2*/], fLocal_9182);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_3032[1 /*2*/], 1);
				STREAMING::REQUEST_COLLISION_AT_COORD(Local_9179);
				ENTITY::FREEZE_ENTITY_POSITION(Local_3032[1 /*2*/], 1);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_3032[1 /*2*/], 1);
			}
			VEHICLE::ROLL_DOWN_WINDOW(Local_3032[0 /*2*/], 0);
			VEHICLE::ROLL_DOWN_WINDOW(Local_3032[0 /*2*/], 1);
			if (!PED::IS_PED_INJURED(Local_3051[3 /*4*/]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3032[1 /*2*/], 0))
				{
					if (!GlobalFunc_1533(Local_3051[3 /*4*/], Local_3032[1 /*2*/], 0))
					{
						PED::SET_PED_INTO_VEHICLE(Local_3051[3 /*4*/], Local_3032[1 /*2*/], 0);
					}
				}
			}
			iLocal_5442 = 4;
			break;
		
		case 4:
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			iVar0 = func_465(uParam0);
			if (CAM::IS_CAM_ACTIVE(uParam0->f_1))
			{
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				if (iVar0 <= uParam0->f_1218 + 1)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_3032[1 /*2*/]))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_3032[1 /*2*/], Local_9179, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_3032[1 /*2*/], fLocal_9182);
					}
				}
				if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= fLocal_9188)
				{
					if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_9166);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_9167, 1065353216);
						if (!Local_3356.f_18)
						{
							Local_3356.f_18 = 1;
							STREAMING::SET_GAME_PAUSES_FOR_STREAMING(0);
							STREAMING::SET_VEHICLE_POPULATION_BUDGET(2);
						}
					}
				}
				if (!bLocal_9194)
				{
					if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= 0.05f)
					{
						if (!PED::IS_PED_INJURED(Local_3051[2 /*4*/]))
						{
							uLocal_9196 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE("scr_bigscore_peeing", Local_3051[2 /*4*/], Local_9198, Local_9201, 11816, 1065353216, 0, 0, 0);
							bLocal_9194 = true;
						}
					}
				}
				if (iVar0 >= (uParam0->f_1218 - 1) && iVar0 < uParam0->f_1218 + 2)
				{
					STREAMING::SET_RENDER_HD_ONLY(1);
				}
				if (iVar0 >= 0 && CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) >= 0f)
				{
					if (!iLocal_9184)
					{
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(1865.1f, 2263.8f, 56.3f, fLocal_9185, 3);
						iLocal_9184 = 1;
					}
				}
				if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= fLocal_9188)
				{
					if (GlobalFunc_8315() == 2)
					{
						if (!bLocal_9186)
						{
							if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
							{
								if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_9178))
								{
									if (!PED::IS_PED_INJURED(Local_3051[2 /*4*/]))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_3051[2 /*4*/]);
										TASK::CLEAR_PED_SECONDARY_TASK(Local_3051[2 /*4*/]);
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
										ENTITY::FREEZE_ENTITY_POSITION(Local_3051[2 /*4*/], 0);
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3032[1 /*2*/], 0))
										{
											ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_3032[1 /*2*/], 1877.9f, 2257.49f, 54.5f, 0, 0, 1);
											ENTITY::SET_ENTITY_HEADING(Local_3032[1 /*2*/], 6.9f);
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_3032[1 /*2*/], 1);
											STREAMING::REQUEST_COLLISION_AT_COORD(1877.59f, 2256.8f, 53.51f);
											ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_3032[1 /*2*/], 0);
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3032[1 /*2*/]);
											ENTITY::FREEZE_ENTITY_POSITION(Local_3032[1 /*2*/], 0);
										}
										if (!PED::IS_PED_INJURED(Local_3051[3 /*4*/]))
										{
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3032[1 /*2*/], 0))
											{
												if (!GlobalFunc_1533(Local_3051[3 /*4*/], Local_3032[1 /*2*/], 0))
												{
													PED::SET_PED_INTO_VEHICLE(Local_3051[3 /*4*/], Local_3032[1 /*2*/], 0);
												}
											}
										}
										TASK::OPEN_SEQUENCE_TASK(&uVar1);
										TASK::TASK_PLAY_ANIM(0, cLocal_9222, "PISS_LOOP", 1000f, -8f, iLocal_9177, 1, 0, 0, 0, 0);
										TASK::TASK_PLAY_ANIM(0, cLocal_9222, "PISS_OUTRO", 8f, -1.5f, -1, 32768, 0, 0, 0, 0);
										TASK::CLOSE_SEQUENCE_TASK(uVar1);
										TASK::TASK_PERFORM_SEQUENCE(Local_3051[2 /*4*/], uVar1);
										bLocal_9186 = true;
									}
								}
								STREAMING::NEW_LOAD_SCENE_STOP();
								STREAMING::NEW_LOAD_SCENE_START_SPHERE(1905.9f, 2226.5f, 71.1f, 150f, 0);
							}
						}
					}
				}
				if (!iLocal_9187)
				{
					if (bLocal_9186)
					{
						if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= fLocal_9204)
						{
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
							PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 500, 0, 1, 0);
							TASK::CLEAR_PED_TASKS(Local_3051[2 /*4*/]);
							iLocal_9187 = 1;
						}
					}
				}
				if (bLocal_9194)
				{
					if (!iLocal_9195)
					{
						if (bLocal_9186)
						{
							if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= fLocal_9197)
							{
								GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_9196, 0);
								iLocal_9195 = 1;
							}
						}
					}
				}
				if (!iLocal_9183)
				{
					if (iVar0 >= uParam0->f_1218 + 2)
					{
						STREAMING::SET_PED_POPULATION_BUDGET(3);
						STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
						STREAMING::SET_REDUCE_PED_MODEL_BUDGET(0);
						STREAMING::SET_REDUCE_VEHICLE_MODEL_BUDGET(0);
						ENTITY::FREEZE_ENTITY_POSITION(Local_3051[2 /*4*/], 0);
						iLocal_9183 = 1;
					}
				}
				if (!iLocal_9192)
				{
					if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) > fLocal_9190)
					{
						GlobalFunc_173(&uLocal_3096, 1, Local_3051[0 /*4*/], "MICHAEL", 1, 1);
						GlobalFunc_10630(&uLocal_3096, "FH1AUD", "FH1_MCS2_LO", "FH1_MCS2_LO_1", 8, 0, 0);
						iLocal_9192 = 1;
					}
				}
				if (!iLocal_9193)
				{
					if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) > fLocal_9191)
					{
						GlobalFunc_10626(&uLocal_3096, "FH1AUD", "FH1_TMBB", "FH1_TMBB_2", 8, 0, 0);
						iLocal_9193 = 1;
					}
				}
				if (CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) >= (uParam0->f_1217 - 3) && iLocal_3438 != 4)
				{
					STREAMING::SET_RENDER_HD_ONLY(0);
					if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						GlobalFunc_612(&iVar2, &iVar3, &iVar4, &iVar5, 0);
						if (((((iVar2 != 0 || iVar3 != 0) || iVar4 != 0) || iVar5 != 0) || PAD::IS_CONTROL_JUST_PRESSED(0, 25)) || PAD::IS_CONTROL_JUST_PRESSED(0, 24))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
							TASK::CLEAR_PED_TASKS(Local_3051[2 /*4*/]);
							CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(iLocal_3438);
							CAM::RENDER_SCRIPT_CAMS(false, 1, 1500, 1, 0, 0);
							iLocal_5442 = 10;
						}
					}
				}
				if (!iLocal_9189)
				{
					if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= 0.55f && iLocal_3438 == 4)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_9189 = 1;
					}
				}
				if ((CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= 1f && iLocal_3438 != 4) || (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= 0.57f && iLocal_3438 == 4))
				{
					if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_9166);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_9167, 1065353216);
					}
					CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(iLocal_3438);
					if (iLocal_3438 != 4)
					{
						CAM::RENDER_SCRIPT_CAMS(false, 1, 2000, 1, 0, 0);
					}
					else
					{
						CAM::RENDER_SCRIPT_CAMS(false, 1, 0, 1, 0, 0);
					}
					iLocal_5442 = 10;
				}
			}
			break;
		
		case 10:
			MISC::SET_TIME_SCALE(1f);
			if (CAM::DOES_CAM_EXIST(uParam0->f_1))
			{
				CAM::SET_CAM_ACTIVE(uParam0->f_1, 0);
			}
			if (!PED::IS_PED_INJURED(Local_3051[3 /*4*/]))
			{
				TASK::TASK_LOOK_AT_ENTITY(Local_3051[3 /*4*/], PLAYER::PLAYER_PED_ID(), -1, 2048, 3);
			}
			if (GlobalFunc_3000(uParam0))
			{
				GlobalFunc_2999(uParam0);
			}
			SYSTEM::SETTIMERB(0);
			if (!iLocal_9225)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				HUD::DISPLAY_RADAR(1);
				HUD::DISPLAY_HUD(1);
				iLocal_9225 = 1;
			}
			SYSTEM::SETTIMERA(0);
			STREAMING::REMOVE_ANIM_DICT(cLocal_9222);
			STREAMING::REMOVE_ANIM_DICT(cLocal_9223);
			STREAMING::REMOVE_ANIM_DICT("shake_cam_all@");
			if (!ENTITY::IS_ENTITY_DEAD(Local_3032[0 /*2*/]))
			{
				VEHICLE::ROLL_UP_WINDOW(Local_3032[0 /*2*/], 0);
				VEHICLE::ROLL_UP_WINDOW(Local_3032[0 /*2*/], 1);
			}
			uParam0->f_1232 = 1;
			Local_3356.f_20 = 0;
			STREAMING::SET_RENDER_HD_ONLY(0);
			STREAMING::NEW_LOAD_SCENE_STOP();
			STREAMING::SET_GAME_PAUSES_FOR_STREAMING(1);
			iLocal_5442 = 0;
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			return 1;
			break;
	}
	if (bParam1)
	{
		return 0;
	}
	return uParam0->f_1232;
}



void func_500(var uParam0, var uParam1, var uParam2)//Position - 0x41718
{
	if (!*uParam0)
	{
		uParam0->f_10[0 /*57*/].f_2 = 0;
		uParam0->f_10[0 /*57*/].f_3 = -1;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { -2.3136f, 2.2717f, 0.7501f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 0f;
		uParam0->f_10[0 /*57*/].f_16 = 0f;
		uParam0->f_10[0 /*57*/].f_17 = 0;
		uParam0->f_10[0 /*57*/].f_9 = { -3.717f, -0.0056f, -143.263f };
		uParam0->f_10[0 /*57*/].f_18 = 0;
		uParam0->f_10[0 /*57*/].f_19 = 0;
		uParam0->f_10[0 /*57*/].f_20 = 1;
		uParam0->f_10[0 /*57*/].f_21 = 30f;
		uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_27 = 0;
		uParam0->f_10[0 /*57*/].f_50 = 0;
		uParam0->f_10[0 /*57*/].f_51 = 0f;
		uParam0->f_10[0 /*57*/].f_52 = 0f;
		uParam0->f_10[0 /*57*/].f_22 = 0f;
		uParam0->f_10[0 /*57*/].f_53 = 2;
		uParam0->f_10[0 /*57*/].f_23 = 0.3f;
		uParam0->f_10[0 /*57*/].f_28 = 1;
		uParam0->f_10[0 /*57*/].f_29 = 0f;
		uParam0->f_10[0 /*57*/].f_32 = 0f;
		uParam0->f_10[0 /*57*/].f_30 = 1;
		uParam0->f_10[0 /*57*/].f_31 = 0;
		uParam0->f_10[0 /*57*/].f_33 = 1f;
		uParam0->f_10[0 /*57*/].f_34 = 0;
		uParam0->f_10[0 /*57*/].f_35 = 0f;
		uParam0->f_10[0 /*57*/].f_36 = 0;
		uParam0->f_10[0 /*57*/].f_37 = 0;
		uParam0->f_10[0 /*57*/].f_39 = 0f;
		uParam0->f_10[0 /*57*/].f_40 = 0f;
		uParam0->f_10[0 /*57*/].f_41 = 0;
		uParam0->f_10[0 /*57*/].f_42 = 0;
		uParam0->f_10[0 /*57*/].f_43 = 0;
		uParam0->f_10[0 /*57*/].f_38 = 0f;
		uParam0->f_10[0 /*57*/].f_45 = 1;
		uParam0->f_10[0 /*57*/].f_46 = 0;
		uParam0->f_10[0 /*57*/].f_47 = 0f;
		uParam0->f_10[0 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[0 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[1 /*57*/].f_2 = 0;
		uParam0->f_10[1 /*57*/].f_3 = -1;
		uParam0->f_10[1 /*57*/].f_4 = 0;
		uParam0->f_10[1 /*57*/].f_5 = 3500;
		uParam0->f_10[1 /*57*/].f_6 = { -1.6297f, 1.5037f, 0.6884f };
		uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_12 = 0f;
		uParam0->f_10[1 /*57*/].f_16 = 0f;
		uParam0->f_10[1 /*57*/].f_17 = 0;
		uParam0->f_10[1 /*57*/].f_9 = { -3.717f, -0.0056f, -143.263f };
		uParam0->f_10[1 /*57*/].f_18 = 0;
		uParam0->f_10[1 /*57*/].f_19 = 0;
		uParam0->f_10[1 /*57*/].f_20 = 1;
		uParam0->f_10[1 /*57*/].f_21 = 30f;
		uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_27 = 0;
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 1f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0f;
		uParam0->f_10[1 /*57*/].f_53 = 2;
		uParam0->f_10[1 /*57*/].f_23 = 0.3f;
		uParam0->f_10[1 /*57*/].f_28 = 2;
		uParam0->f_10[1 /*57*/].f_29 = 0.6f;
		uParam0->f_10[1 /*57*/].f_32 = 0f;
		uParam0->f_10[1 /*57*/].f_30 = 1;
		uParam0->f_10[1 /*57*/].f_31 = 0;
		uParam0->f_10[1 /*57*/].f_33 = 1f;
		uParam0->f_10[1 /*57*/].f_34 = 0;
		uParam0->f_10[1 /*57*/].f_35 = 0f;
		uParam0->f_10[1 /*57*/].f_36 = 1;
		uParam0->f_10[1 /*57*/].f_37 = 9;
		uParam0->f_10[1 /*57*/].f_39 = 0f;
		uParam0->f_10[1 /*57*/].f_40 = 0f;
		uParam0->f_10[1 /*57*/].f_41 = 0;
		uParam0->f_10[1 /*57*/].f_42 = 0;
		uParam0->f_10[1 /*57*/].f_43 = 0;
		uParam0->f_10[1 /*57*/].f_38 = 1f;
		uParam0->f_10[1 /*57*/].f_45 = 1;
		uParam0->f_10[1 /*57*/].f_46 = 0;
		uParam0->f_10[1 /*57*/].f_47 = 0f;
		uParam0->f_10[1 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[1 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[2 /*57*/].f_2 = 0;
		uParam0->f_10[2 /*57*/].f_3 = -1;
		uParam0->f_10[2 /*57*/].f_4 = 0;
		uParam0->f_10[2 /*57*/].f_5 = 600;
		uParam0->f_10[2 /*57*/].f_6 = { -4.6983f, -2.6296f, 0.6944f };
		uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_12 = 0f;
		uParam0->f_10[2 /*57*/].f_16 = 0f;
		uParam0->f_10[2 /*57*/].f_17 = 0;
		uParam0->f_10[2 /*57*/].f_9 = { -3.717f, -0.0056f, -143.263f };
		uParam0->f_10[2 /*57*/].f_18 = 0;
		uParam0->f_10[2 /*57*/].f_19 = 0;
		uParam0->f_10[2 /*57*/].f_20 = 1;
		uParam0->f_10[2 /*57*/].f_21 = 30f;
		uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_27 = 0;
		uParam0->f_10[2 /*57*/].f_50 = 0;
		uParam0->f_10[2 /*57*/].f_51 = 1f;
		uParam0->f_10[2 /*57*/].f_52 = 0f;
		uParam0->f_10[2 /*57*/].f_22 = 0.419f;
		uParam0->f_10[2 /*57*/].f_53 = 2;
		uParam0->f_10[2 /*57*/].f_23 = 0.1f;
		uParam0->f_10[2 /*57*/].f_28 = 0;
		uParam0->f_10[2 /*57*/].f_29 = 1f;
		uParam0->f_10[2 /*57*/].f_32 = 0f;
		uParam0->f_10[2 /*57*/].f_30 = 1;
		uParam0->f_10[2 /*57*/].f_31 = 0;
		uParam0->f_10[2 /*57*/].f_33 = 1f;
		uParam0->f_10[2 /*57*/].f_34 = 0;
		uParam0->f_10[2 /*57*/].f_35 = 0f;
		uParam0->f_10[2 /*57*/].f_36 = 1;
		uParam0->f_10[2 /*57*/].f_37 = 11;
		uParam0->f_10[2 /*57*/].f_39 = 0f;
		uParam0->f_10[2 /*57*/].f_40 = 0f;
		uParam0->f_10[2 /*57*/].f_41 = 0;
		uParam0->f_10[2 /*57*/].f_42 = 0;
		uParam0->f_10[2 /*57*/].f_43 = 0;
		uParam0->f_10[2 /*57*/].f_38 = 0.2f;
		uParam0->f_10[2 /*57*/].f_45 = 1;
		uParam0->f_10[2 /*57*/].f_46 = 0;
		uParam0->f_10[2 /*57*/].f_47 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[3 /*57*/].f_54 = 1;
		uParam0->f_10[4 /*57*/].f_2 = 3;
		uParam0->f_10[4 /*57*/].f_3 = -1;
		uParam0->f_10[4 /*57*/].f_4 = 0;
		uParam0->f_10[4 /*57*/].f_5 = 0;
		uParam0->f_10[4 /*57*/].f_6 = { 1866.378f, 2262.277f, 55.9814f };
		uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_12 = 0f;
		uParam0->f_10[4 /*57*/].f_16 = 0f;
		uParam0->f_10[4 /*57*/].f_17 = 0;
		uParam0->f_10[4 /*57*/].f_9 = { -6.0926f, 0.0006f, 57.3604f };
		uParam0->f_10[4 /*57*/].f_18 = 0;
		uParam0->f_10[4 /*57*/].f_19 = 0;
		uParam0->f_10[4 /*57*/].f_20 = 0;
		uParam0->f_10[4 /*57*/].f_21 = 40f;
		uParam0->f_10[4 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_27 = 0;
		uParam0->f_10[4 /*57*/].f_50 = 0;
		uParam0->f_10[4 /*57*/].f_51 = 1f;
		uParam0->f_10[4 /*57*/].f_52 = 0f;
		uParam0->f_10[4 /*57*/].f_22 = 0.3f;
		uParam0->f_10[4 /*57*/].f_53 = 2;
		uParam0->f_10[4 /*57*/].f_23 = 0.2f;
		uParam0->f_10[4 /*57*/].f_28 = 1;
		uParam0->f_10[4 /*57*/].f_29 = 0.3f;
		uParam0->f_10[4 /*57*/].f_32 = 0f;
		uParam0->f_10[4 /*57*/].f_30 = 1;
		uParam0->f_10[4 /*57*/].f_31 = 0;
		uParam0->f_10[4 /*57*/].f_33 = 1f;
		uParam0->f_10[4 /*57*/].f_34 = 0;
		uParam0->f_10[4 /*57*/].f_35 = 0f;
		uParam0->f_10[4 /*57*/].f_36 = 0;
		uParam0->f_10[4 /*57*/].f_37 = 0;
		uParam0->f_10[4 /*57*/].f_39 = 0f;
		uParam0->f_10[4 /*57*/].f_40 = 0f;
		uParam0->f_10[4 /*57*/].f_41 = 0;
		uParam0->f_10[4 /*57*/].f_42 = 0;
		uParam0->f_10[4 /*57*/].f_43 = 0;
		uParam0->f_10[4 /*57*/].f_38 = 0f;
		uParam0->f_10[4 /*57*/].f_45 = 1;
		uParam0->f_10[4 /*57*/].f_46 = 0;
		uParam0->f_10[4 /*57*/].f_47 = 0f;
		uParam0->f_10[4 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[4 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[5 /*57*/].f_2 = 3;
		uParam0->f_10[5 /*57*/].f_3 = -1;
		uParam0->f_10[5 /*57*/].f_4 = 0;
		uParam0->f_10[5 /*57*/].f_5 = 600;
		uParam0->f_10[5 /*57*/].f_6 = { 1867.244f, 2263.741f, 55.9814f };
		uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_12 = 0f;
		uParam0->f_10[5 /*57*/].f_16 = 0f;
		uParam0->f_10[5 /*57*/].f_17 = 0;
		uParam0->f_10[5 /*57*/].f_9 = { -6.0926f, 0.0006f, 57.3604f };
		uParam0->f_10[5 /*57*/].f_18 = 0;
		uParam0->f_10[5 /*57*/].f_19 = 0;
		uParam0->f_10[5 /*57*/].f_20 = 0;
		uParam0->f_10[5 /*57*/].f_21 = 40f;
		uParam0->f_10[5 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_27 = 0;
		uParam0->f_10[5 /*57*/].f_50 = 0;
		uParam0->f_10[5 /*57*/].f_51 = 0f;
		uParam0->f_10[5 /*57*/].f_52 = 0f;
		uParam0->f_10[5 /*57*/].f_22 = 0.331f;
		uParam0->f_10[5 /*57*/].f_53 = 2;
		uParam0->f_10[5 /*57*/].f_23 = 0.2f;
		uParam0->f_10[5 /*57*/].f_28 = 0;
		uParam0->f_10[5 /*57*/].f_29 = 0f;
		uParam0->f_10[5 /*57*/].f_32 = 0f;
		uParam0->f_10[5 /*57*/].f_30 = 1;
		uParam0->f_10[5 /*57*/].f_31 = 0;
		uParam0->f_10[5 /*57*/].f_33 = 1f;
		uParam0->f_10[5 /*57*/].f_34 = 0;
		uParam0->f_10[5 /*57*/].f_35 = 0f;
		uParam0->f_10[5 /*57*/].f_36 = 0;
		uParam0->f_10[5 /*57*/].f_37 = 0;
		uParam0->f_10[5 /*57*/].f_39 = 0f;
		uParam0->f_10[5 /*57*/].f_40 = 0f;
		uParam0->f_10[5 /*57*/].f_41 = 0;
		uParam0->f_10[5 /*57*/].f_42 = 0;
		uParam0->f_10[5 /*57*/].f_43 = 0;
		uParam0->f_10[5 /*57*/].f_38 = 0f;
		uParam0->f_10[5 /*57*/].f_45 = 1;
		uParam0->f_10[5 /*57*/].f_46 = 0;
		uParam0->f_10[5 /*57*/].f_47 = 0f;
		uParam0->f_10[5 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[5 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[6 /*57*/].f_2 = 3;
		uParam0->f_10[6 /*57*/].f_3 = -1;
		uParam0->f_10[6 /*57*/].f_4 = 0;
		uParam0->f_10[6 /*57*/].f_5 = 5000;
		uParam0->f_10[6 /*57*/].f_6 = { 1867.443f, 2263.941f, 55.9814f };
		uParam0->f_10[6 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_12 = 0f;
		uParam0->f_10[6 /*57*/].f_16 = 0f;
		uParam0->f_10[6 /*57*/].f_17 = 0;
		uParam0->f_10[6 /*57*/].f_9 = { -6.0926f, 0.0006f, 57.3604f };
		uParam0->f_10[6 /*57*/].f_18 = 0;
		uParam0->f_10[6 /*57*/].f_19 = 0;
		uParam0->f_10[6 /*57*/].f_20 = 0;
		uParam0->f_10[6 /*57*/].f_21 = 40f;
		uParam0->f_10[6 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_27 = 0;
		uParam0->f_10[6 /*57*/].f_50 = 0;
		uParam0->f_10[6 /*57*/].f_51 = 0f;
		uParam0->f_10[6 /*57*/].f_52 = 0f;
		uParam0->f_10[6 /*57*/].f_22 = 0f;
		uParam0->f_10[6 /*57*/].f_53 = 2;
		uParam0->f_10[6 /*57*/].f_23 = 0.2f;
		uParam0->f_10[6 /*57*/].f_28 = 0;
		uParam0->f_10[6 /*57*/].f_29 = 0f;
		uParam0->f_10[6 /*57*/].f_32 = 0f;
		uParam0->f_10[6 /*57*/].f_30 = 1;
		uParam0->f_10[6 /*57*/].f_31 = 0;
		uParam0->f_10[6 /*57*/].f_33 = 1f;
		uParam0->f_10[6 /*57*/].f_34 = 0;
		uParam0->f_10[6 /*57*/].f_35 = 0f;
		uParam0->f_10[6 /*57*/].f_36 = 0;
		uParam0->f_10[6 /*57*/].f_37 = 0;
		uParam0->f_10[6 /*57*/].f_39 = 0f;
		uParam0->f_10[6 /*57*/].f_40 = 0f;
		uParam0->f_10[6 /*57*/].f_41 = 0;
		uParam0->f_10[6 /*57*/].f_42 = 0;
		uParam0->f_10[6 /*57*/].f_43 = 0;
		uParam0->f_10[6 /*57*/].f_38 = 0f;
		uParam0->f_10[6 /*57*/].f_45 = 1;
		uParam0->f_10[6 /*57*/].f_46 = 0;
		uParam0->f_10[6 /*57*/].f_47 = 0f;
		uParam0->f_10[6 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[6 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[7 /*57*/].f_2 = 0;
		uParam0->f_10[7 /*57*/].f_3 = -1;
		uParam0->f_10[7 /*57*/].f_4 = 0;
		uParam0->f_10[7 /*57*/].f_5 = 1400;
		uParam0->f_10[7 /*57*/].f_6 = { 1.3125f, -2.2925f, 0.5904f };
		uParam0->f_10[7 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[7 /*57*/].f_12 = 0f;
		uParam0->f_10[7 /*57*/].f_16 = 0f;
		uParam0->f_10[7 /*57*/].f_17 = 0;
		uParam0->f_10[7 /*57*/].f_9 = { -8.1857f, 0f, 23.3637f };
		uParam0->f_10[7 /*57*/].f_18 = 0;
		uParam0->f_10[7 /*57*/].f_19 = 0;
		uParam0->f_10[7 /*57*/].f_20 = 0;
		uParam0->f_10[7 /*57*/].f_21 = 40f;
		uParam0->f_10[7 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[7 /*57*/].f_27 = 0;
		uParam0->f_10[7 /*57*/].f_50 = 0;
		uParam0->f_10[7 /*57*/].f_51 = 0f;
		uParam0->f_10[7 /*57*/].f_52 = 0f;
		uParam0->f_10[7 /*57*/].f_22 = 0f;
		uParam0->f_10[7 /*57*/].f_53 = 2;
		uParam0->f_10[7 /*57*/].f_23 = 0.2f;
		uParam0->f_10[7 /*57*/].f_28 = 0;
		uParam0->f_10[7 /*57*/].f_29 = 0f;
		uParam0->f_10[7 /*57*/].f_32 = 0f;
		uParam0->f_10[7 /*57*/].f_30 = 1;
		uParam0->f_10[7 /*57*/].f_31 = 0;
		uParam0->f_10[7 /*57*/].f_33 = 1f;
		uParam0->f_10[7 /*57*/].f_34 = 0;
		uParam0->f_10[7 /*57*/].f_35 = 0f;
		uParam0->f_10[7 /*57*/].f_36 = 0;
		uParam0->f_10[7 /*57*/].f_37 = 0;
		uParam0->f_10[7 /*57*/].f_39 = 0f;
		uParam0->f_10[7 /*57*/].f_40 = 0f;
		uParam0->f_10[7 /*57*/].f_41 = 0;
		uParam0->f_10[7 /*57*/].f_42 = 0;
		uParam0->f_10[7 /*57*/].f_43 = 0;
		uParam0->f_10[7 /*57*/].f_38 = 0f;
		uParam0->f_10[7 /*57*/].f_45 = 1;
		uParam0->f_10[7 /*57*/].f_46 = 0;
		uParam0->f_10[7 /*57*/].f_47 = 0f;
		uParam0->f_10[7 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[7 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[8 /*57*/].f_54 = 1;
		uParam0->f_10[9 /*57*/].f_2 = 2;
		uParam0->f_10[9 /*57*/].f_3 = -1;
		uParam0->f_10[9 /*57*/].f_4 = 1;
		uParam0->f_10[9 /*57*/].f_5 = 0;
		uParam0->f_10[9 /*57*/].f_6 = { -1.6713f, 0.3223f, 0.3105f };
		uParam0->f_10[9 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[9 /*57*/].f_12 = 0f;
		uParam0->f_10[9 /*57*/].f_16 = 0f;
		uParam0->f_10[9 /*57*/].f_17 = 0;
		uParam0->f_10[9 /*57*/].f_9 = { 0.8921f, 0f, -112.2359f };
		uParam0->f_10[9 /*57*/].f_18 = 0;
		uParam0->f_10[9 /*57*/].f_19 = 0;
		uParam0->f_10[9 /*57*/].f_20 = 0;
		uParam0->f_10[9 /*57*/].f_21 = 50f;
		uParam0->f_10[9 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[9 /*57*/].f_27 = 0;
		uParam0->f_10[9 /*57*/].f_50 = 0;
		uParam0->f_10[9 /*57*/].f_51 = 0f;
		uParam0->f_10[9 /*57*/].f_52 = 0f;
		uParam0->f_10[9 /*57*/].f_22 = 0f;
		uParam0->f_10[9 /*57*/].f_53 = 0;
		uParam0->f_10[9 /*57*/].f_23 = 0f;
		uParam0->f_10[9 /*57*/].f_28 = 0;
		uParam0->f_10[9 /*57*/].f_29 = 0f;
		uParam0->f_10[9 /*57*/].f_32 = 0f;
		uParam0->f_10[9 /*57*/].f_30 = 0;
		uParam0->f_10[9 /*57*/].f_31 = 0;
		uParam0->f_10[9 /*57*/].f_33 = 1f;
		uParam0->f_10[9 /*57*/].f_34 = 0;
		uParam0->f_10[9 /*57*/].f_35 = 0f;
		uParam0->f_10[9 /*57*/].f_36 = 0;
		uParam0->f_10[9 /*57*/].f_37 = 0;
		uParam0->f_10[9 /*57*/].f_39 = 0f;
		uParam0->f_10[9 /*57*/].f_40 = 0f;
		uParam0->f_10[9 /*57*/].f_41 = 0;
		uParam0->f_10[9 /*57*/].f_42 = 0;
		uParam0->f_10[9 /*57*/].f_43 = 0;
		uParam0->f_10[9 /*57*/].f_38 = 0f;
		uParam0->f_10[9 /*57*/].f_45 = 0;
		uParam0->f_10[9 /*57*/].f_46 = 0;
		uParam0->f_10[9 /*57*/].f_47 = 0f;
		uParam0->f_10[9 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[9 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[10 /*57*/].f_2 = 2;
		uParam0->f_10[10 /*57*/].f_3 = -1;
		uParam0->f_10[10 /*57*/].f_4 = 1;
		uParam0->f_10[10 /*57*/].f_5 = 4500;
		uParam0->f_10[10 /*57*/].f_6 = { -1.5291f, 0.3435f, 0.4191f };
		uParam0->f_10[10 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[10 /*57*/].f_12 = 0f;
		uParam0->f_10[10 /*57*/].f_16 = 0f;
		uParam0->f_10[10 /*57*/].f_17 = 0;
		uParam0->f_10[10 /*57*/].f_9 = { -3.1276f, -0.0015f, -106.0949f };
		uParam0->f_10[10 /*57*/].f_18 = 0;
		uParam0->f_10[10 /*57*/].f_19 = 0;
		uParam0->f_10[10 /*57*/].f_20 = 0;
		uParam0->f_10[10 /*57*/].f_21 = 50f;
		uParam0->f_10[10 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[10 /*57*/].f_27 = 0;
		uParam0->f_10[10 /*57*/].f_50 = 0;
		uParam0->f_10[10 /*57*/].f_51 = 0f;
		uParam0->f_10[10 /*57*/].f_52 = 0f;
		uParam0->f_10[10 /*57*/].f_22 = 0f;
		uParam0->f_10[10 /*57*/].f_53 = 0;
		uParam0->f_10[10 /*57*/].f_23 = 0f;
		uParam0->f_10[10 /*57*/].f_28 = 0;
		uParam0->f_10[10 /*57*/].f_29 = 0f;
		uParam0->f_10[10 /*57*/].f_32 = 0f;
		uParam0->f_10[10 /*57*/].f_30 = 0;
		uParam0->f_10[10 /*57*/].f_31 = 0;
		uParam0->f_10[10 /*57*/].f_33 = 1f;
		uParam0->f_10[10 /*57*/].f_34 = 0;
		uParam0->f_10[10 /*57*/].f_35 = 0f;
		uParam0->f_10[10 /*57*/].f_36 = 0;
		uParam0->f_10[10 /*57*/].f_37 = 0;
		uParam0->f_10[10 /*57*/].f_39 = 0f;
		uParam0->f_10[10 /*57*/].f_40 = 0f;
		uParam0->f_10[10 /*57*/].f_41 = 0;
		uParam0->f_10[10 /*57*/].f_42 = 0;
		uParam0->f_10[10 /*57*/].f_43 = 0;
		uParam0->f_10[10 /*57*/].f_38 = 0f;
		uParam0->f_10[10 /*57*/].f_45 = 0;
		uParam0->f_10[10 /*57*/].f_46 = 0;
		uParam0->f_10[10 /*57*/].f_47 = 0f;
		uParam0->f_10[10 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[10 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[11 /*57*/].f_2 = 2;
		uParam0->f_10[11 /*57*/].f_3 = -1;
		uParam0->f_10[11 /*57*/].f_4 = 1;
		uParam0->f_10[11 /*57*/].f_5 = 5100;
		uParam0->f_10[11 /*57*/].f_6 = { -1.5291f, 0.3435f, 0.4191f };
		uParam0->f_10[11 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[11 /*57*/].f_12 = 0f;
		uParam0->f_10[11 /*57*/].f_16 = 0f;
		uParam0->f_10[11 /*57*/].f_17 = 0;
		uParam0->f_10[11 /*57*/].f_9 = { -3.1276f, -0.0015f, -106.0949f };
		uParam0->f_10[11 /*57*/].f_18 = 0;
		uParam0->f_10[11 /*57*/].f_19 = 0;
		uParam0->f_10[11 /*57*/].f_20 = 0;
		uParam0->f_10[11 /*57*/].f_21 = 50f;
		uParam0->f_10[11 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[11 /*57*/].f_27 = 0;
		uParam0->f_10[11 /*57*/].f_50 = 0;
		uParam0->f_10[11 /*57*/].f_51 = 0f;
		uParam0->f_10[11 /*57*/].f_52 = 0f;
		uParam0->f_10[11 /*57*/].f_22 = 0f;
		uParam0->f_10[11 /*57*/].f_53 = 0;
		uParam0->f_10[11 /*57*/].f_23 = 0f;
		uParam0->f_10[11 /*57*/].f_28 = 0;
		uParam0->f_10[11 /*57*/].f_29 = 0f;
		uParam0->f_10[11 /*57*/].f_32 = 0f;
		uParam0->f_10[11 /*57*/].f_30 = 0;
		uParam0->f_10[11 /*57*/].f_31 = 0;
		uParam0->f_10[11 /*57*/].f_33 = 1f;
		uParam0->f_10[11 /*57*/].f_34 = 0;
		uParam0->f_10[11 /*57*/].f_35 = 0f;
		uParam0->f_10[11 /*57*/].f_36 = 0;
		uParam0->f_10[11 /*57*/].f_37 = 0;
		uParam0->f_10[11 /*57*/].f_39 = 0f;
		uParam0->f_10[11 /*57*/].f_40 = 0f;
		uParam0->f_10[11 /*57*/].f_41 = 0;
		uParam0->f_10[11 /*57*/].f_42 = 0;
		uParam0->f_10[11 /*57*/].f_43 = 0;
		uParam0->f_10[11 /*57*/].f_38 = 0f;
		uParam0->f_10[11 /*57*/].f_45 = 0;
		uParam0->f_10[11 /*57*/].f_46 = 0;
		uParam0->f_10[11 /*57*/].f_47 = 0f;
		uParam0->f_10[11 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[11 /*57*/].f_47.f_2 = 0f;
		uParam0->f_1217 = 12;
		uParam0->f_1218 = 3;
		uParam0->f_1233 = 0.17f;
		uParam0->f_1234 = 0.202f;
		uParam0->f_1235 = 1;
		uParam0->f_1236 = 1;
		uParam0->f_1237 = 0;
		uParam0->f_2 = 1;
		uParam0->f_3 = 0;
		uParam0->f_1219 = 0;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_BigScore_MichaelToTrevorInCar.txt";
		uParam0->f_1225 = "CameraInfo_BigScore_MichaelToTrevorInCar.xml";
		*uParam0 = 1;
	}
	uParam0->f_7[0] = *uParam1;
	uParam0->f_7[1] = *uParam2;
}



void func_503()//Position - 0x42BA0
{
	if (iLocal_5436 > 0)
	{
		if (PLAYER::PLAYER_PED_ID() == func_130())
		{
		}
	}
	switch (iLocal_5436)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				RECORDING::_0x293220DA1B46CEBC(0f, 10f, 4);
				CAM::DO_SCREEN_FADE_IN(800);
			}
			if (!Local_3356.f_20)
			{
				if (PLAYER::PLAYER_PED_ID() == func_129())
				{
					func_78(&Local_3261, Local_3011, 0.1f, 0.1f, 2f, 1, func_196(), 0, 0, Local_3032[1 /*2*/], "", "", "", "", "", "", "", 0, 1, 1, -1);
					if (((!iLocal_3470 && !PED::IS_PED_IN_VEHICLE(func_129(), Local_3032[2 /*2*/], 0)) && HUD::DOES_BLIP_EXIST(Local_3261.f_5)) && GlobalFunc_5171())
					{
						GlobalFunc_164("FH1_AIR", 7500, 1);
						iLocal_3470 = 1;
					}
					if ((!func_21(13, 15) && (MISC::GET_GAME_TIMER() - iLocal_3400) > 15000) && (MISC::GET_GAME_TIMER() - iLocal_3391) > 5000)
					{
						if (iLocal_3479 == 0)
						{
							iLocal_3479 = 1;
						}
						if (iLocal_3479 == 3)
						{
							if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_TRVFBE", 7, 0, 0, 0))
							{
								iLocal_3479 = 4;
								func_218(2, 0);
								Global_Mission_Fail_State.f_12[0] = 1;
								iLocal_5436 = 4;
								iLocal_3400 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
				else if (PLAYER::PLAYER_PED_ID() == func_130())
				{
					if ((((GlobalFunc_Is_Mission_Retry() && Global_Current_Checkpoint == 1) && Global_Mission_Fail_State.f_12[0] == 1) && !Global_84544) && !bLocal_5441)
					{
						iLocal_3437 = 2;
						iLocal_5436 = 3;
						VEHICLE::REMOVE_VEHICLE_RECORDING(1, "FH1RECMIKE");
					}
					else
					{
						if (!iLocal_3402)
						{
							if (GlobalFunc_713(func_130(), Local_3003, 1) < 60f)
							{
								GlobalFunc_719(&uLocal_3547, "missbigscore1_mcs1");
								iLocal_3402 = 1;
							}
						}
						else if (GlobalFunc_713(func_130(), Local_3003, 1) > 90f)
						{
							GlobalFunc_5175(&uLocal_3547, "missbigscore1_mcs1");
							iLocal_3402 = 0;
						}
						if (func_78(&Local_3261, -9.34495f, -741.3211f, 43.15848f, 0.1f, 0.1f, 2f, 1, func_127(), 0, 0, Local_3032[0 /*2*/], "FH1_BANK", "FH1_FRCAR", "", "", "", "CMN_GENGETINY", "CMN_GENGETBCKY", 0, 1, 1, -1))
						{
							GlobalFunc_7139(&Local_3261, 0);
							GlobalFunc_763(Local_3032[0 /*2*/], 1093140480, 1, 1056964608, 0, 1);
							GlobalFunc_5105();
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_drive_START"))
							{
								AUDIO::STOP_AUDIO_SCENE("BS_1_drive_START");
							}
							if (GlobalFunc_663("FH1_BANK", 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
							iLocal_3521 = 0;
							iLocal_3392 = 0;
							iLocal_5436++;
						}
						else if ((HUD::DOES_BLIP_EXIST(Local_3261.f_5) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_130(), -2.55928f, -743.9714f, 45f, -14.34047f, -739.4463f, 43.15934f, 4.46f, 0, 1, 0)) && !TASK::GET_IS_TASK_ACTIVE(func_130(), 2))
						{
							GlobalFunc_7139(&Local_3261, 0);
							GlobalFunc_763(Local_3032[0 /*2*/], 1093140480, 1, 1056964608, 0, 1);
							GlobalFunc_5105();
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_drive_START"))
							{
								AUDIO::STOP_AUDIO_SCENE("BS_1_drive_START");
							}
							if (GlobalFunc_663("FH1_BANK", 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
							iLocal_3521 = 0;
							iLocal_3392 = 0;
							iLocal_5436++;
						}
					}
				}
			}
			break;
		
		case 1:
			if (GlobalFunc_663("FH1_BANK", 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
			if (((GlobalFunc_644(Local_3032[0 /*2*/]) && PED::IS_PED_IN_VEHICLE(func_130(), Local_3032[0 /*2*/], 0)) && !TASK::GET_IS_TASK_ACTIVE(func_129(), 2)) && STREAMING::HAS_ANIM_DICT_LOADED("missbigscore1_mcs1"))
			{
				GlobalFunc_7139(&Local_3261, 0);
				if (!GlobalFunc_111())
				{
					AUDIO::START_AUDIO_SCENE("BS_1_BANK_CHECK_OUT");
					VEHICLE::REMOVE_VEHICLE_RECORDING(1, "FH1RECMIKE");
					iLocal_5436++;
				}
				else
				{
					GlobalFunc_5105();
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 1280);
			}
			else
			{
				func_78(&Local_3261, -9.34495f, -741.3211f, 43.15848f, 0.1f, 0.1f, 2f, 1, func_127(), 0, 0, Local_3032[0 /*2*/], "", "FH1_FRCAR", "", "", "", "CMN_GENGETINY", "CMN_GENGETBCKY", 0, 1, 1, -1);
				GlobalFunc_763(Local_3032[0 /*2*/], 1093140480, 1, 1056964608, 0, 1);
			}
			break;
		
		case 2:
			AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_3032[0 /*2*/], 0);
			FIRE::STOP_FIRE_IN_RANGE(Local_3003, 100f);
			PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
			iLocal_3427 = MISC::GET_GAME_TIMER();
			iLocal_3437 = 0;
			iLocal_5436++;
			break;
		
		case 3:
			if (func_504())
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_BANK_CHECK_OUT"))
				{
					AUDIO::STOP_AUDIO_SCENE("BS_1_BANK_CHECK_OUT");
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_BANK_HINT_CAM"))
				{
					AUDIO::STOP_AUDIO_SCENE("BS_1_BANK_HINT_CAM");
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				AUDIO::SET_VEH_RADIO_STATION(Local_3032[0 /*2*/], "OFF");
				AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_3032[0 /*2*/], 1);
				func_218(2, 0);
				Global_Mission_Fail_State.f_12[0] = 1;
				iLocal_3435 = 1;
				iLocal_3427 = MISC::GET_GAME_TIMER();
				func_198(0, 1, 0, 0, 0, 0);
				iLocal_3392 = 1;
				iLocal_3478 = 1;
				iLocal_3474 = 0;
				iLocal_3519 = MISC::GET_GAME_TIMER();
				iLocal_5436++;
			}
			break;
		
		case 4:
			if (!Local_3356.f_20)
			{
				if (PLAYER::PLAYER_PED_ID() == func_129())
				{
					if (iLocal_3294 == 0)
					{
						func_78(&Local_3261, Local_3011, 0.1f, 0.1f, 2f, 1, func_196(), 0, 0, Local_3032[1 /*2*/], "", "", "", "", "", "", "", 0, 1, 1, -1);
						if ((!iLocal_3470 && HUD::DOES_BLIP_EXIST(Local_3261.f_5)) && GlobalFunc_5171())
						{
							GlobalFunc_164("FH1_AIR", 7500, 1);
							iLocal_3470 = 1;
						}
					}
					else if (iLocal_3294 == 1)
					{
						func_78(&Local_3261, Local_3014, 0.1f, 0.1f, 2f, 0, 0, func_196(), 0, Local_3032[2 /*2*/], "", "", "", "", "", "FH1_HELI", "FH1_BKHELI", 0, 1, 1, -1);
					}
					if (!PED::IS_PED_INJURED(func_130()) && !ENTITY::IS_ENTITY_DEAD(Local_3032[0 /*2*/]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(func_130(), 567490903) != 1)
						{
							TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(func_130(), Local_3032[0 /*2*/], Local_3007, 8f, 786469, 2f);
						}
					}
					if ((ENTITY::IS_ENTITY_AT_COORD(func_130(), Local_3007, 3f, 3f, 2f, 0, 1, 0) || ((((!func_21(13, 45) && !ENTITY::IS_ENTITY_ON_SCREEN(Local_3032[0 /*2*/])) && ENTITY::IS_ENTITY_OCCLUDED(Local_3032[0 /*2*/])) && (MISC::GET_GAME_TIMER() - iLocal_3391) > 9000) && (MISC::GET_GAME_TIMER() - iLocal_3400) > 15000)) || ((HUD::DOES_BLIP_EXIST(Local_3261.f_5) && GlobalFunc_713(func_129(), Local_3011, 1) < 100f) && (MISC::GET_GAME_TIMER() - iLocal_3391) > 9000))
					{
						if (iLocal_3479 == 0)
						{
							iLocal_3479 = 1;
						}
						if (iLocal_3479 == 3)
						{
							if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_TRVBB", 7, 0, 0, 0))
							{
								iLocal_3479 = 4;
								if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_3032[0 /*2*/]) && ENTITY::IS_ENTITY_OCCLUDED(Local_3032[0 /*2*/]))
								{
									ENTITY::SET_ENTITY_COORDS(Local_3032[0 /*2*/], Local_3007, 1, 0, 0, 1);
									ENTITY::SET_ENTITY_HEADING(Local_3032[0 /*2*/], fLocal_3010);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3032[0 /*2*/]);
								}
								CUTSCENE::REQUEST_CUTSCENE("BSS_1_MCS_2", 8);
								STREAMING::_0xF8155A7F03DDFC8E(2);
								iLocal_5436 = 0;
								func_211(2);
								GlobalFunc_Checkpoint1(2, "Stage 2: Back of bank", 0, 0, 0, 1);
							}
						}
					}
				}
				else if (PLAYER::PLAYER_PED_ID() == func_130())
				{
					if (iLocal_3294 == 0)
					{
						if (!PED::IS_PED_INJURED(func_129()) && !ENTITY::IS_ENTITY_DEAD(Local_3032[1 /*2*/]))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(func_129(), 567490903) != 1)
							{
								TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(func_129(), Local_3032[1 /*2*/], 1799.963f, 3321.91f, 40.8868f, 70f, 786469, 5f);
							}
						}
					}
					else if (iLocal_3294 == 1)
					{
						if (!PED::IS_PED_INJURED(func_129()) && !ENTITY::IS_ENTITY_DEAD(Local_3032[2 /*2*/]))
						{
							if ((TASK::GET_SCRIPT_TASK_STATUS(func_129(), -1273030092) != 1 && PED::IS_PED_IN_VEHICLE(func_129(), Local_3032[2 /*2*/], 0)) && PED::IS_PED_IN_VEHICLE(func_196(), Local_3032[2 /*2*/], 0))
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(func_129(), Local_3032[2 /*2*/], 1527.602f, -591.3962f, 336.5655f, 9, 10f, 786469, 4f, -1f, 1);
							}
						}
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_DRIVE_AROUND_BACK"))
					{
						AUDIO::START_AUDIO_SCENE("BS_1_DRIVE_AROUND_BACK");
					}
					if (func_78(&Local_3261, Local_3007, 2.5f, 2.5f, 2f, 1, func_127(), 0, 0, Local_3032[0 /*2*/], "FH1_BENTR", "FH1_FRCAR", "", "", "", "", "FH1_BKCAR", 0, 1, 1, -1))
					{
						GlobalFunc_763(Local_3032[0 /*2*/], 1093140480, 1, 1056964608, 0, 1);
						iLocal_3392 = 0;
						iLocal_5436 = 200;
					}
				}
			}
			break;
		
		case 200:
			if (GlobalFunc_644(Local_3032[0 /*2*/]))
			{
				RECORDING::_0x293220DA1B46CEBC(5f, 2f, 4);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				iLocal_5436 = 0;
				func_211(2);
				GlobalFunc_4935();
				GlobalFunc_Checkpoint1(2, "Stage 2: Back of bank", 0, 0, 0, 1);
			}
			break;
	}
}

int func_504()//Position - 0x434B2
{
	if (iLocal_3437 > 0)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3032[0 /*2*/], 0))
		{
			if (!PED::IS_PED_IN_VEHICLE(func_130(), Local_3032[0 /*2*/], 0) || TASK::GET_IS_TASK_ACTIVE(func_130(), 2))
			{
				TASK::CLEAR_PED_SECONDARY_TASK(func_130());
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(func_130(), "missbigscore1_mcs1", "michael_bss_1_mcs_1", 3))
				{
					TASK::STOP_ANIM_TASK(func_130(), "missbigscore1_mcs1", "michael_bss_1_mcs_1", -1056964608);
				}
			}
			if (!PED::IS_PED_IN_VEHICLE(func_127(), Local_3032[0 /*2*/], 0) || TASK::GET_IS_TASK_ACTIVE(func_127(), 2))
			{
				TASK::CLEAR_PED_SECONDARY_TASK(func_127());
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(func_127(), "missbigscore1_mcs1", "franklin_bss_1_mcs_1", 3))
				{
					TASK::STOP_ANIM_TASK(func_127(), "missbigscore1_mcs1", "franklin_bss_1_mcs_1", -1056964608);
				}
			}
		}
	}
	switch (iLocal_3437)
	{
		case 0:
			if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_MCS1", 9, 0, 0, 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3032[0 /*2*/], 0))
				{
					if (PED::IS_PED_IN_VEHICLE(func_130(), Local_3032[0 /*2*/], 0))
					{
						TASK::TASK_PLAY_ANIM(func_130(), "missbigscore1_mcs1", "michael_bss_1_mcs_1", 8f, -1.5f, -1, 32, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(func_127(), "missbigscore1_mcs1", "franklin_bss_1_mcs_1", 8f, -1.5f, -1, 32, 0, 0, 0, 0);
						if (((CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 0 && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 2) && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 1) && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 4)
						{
							iLocal_3438 = CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE();
							CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(1);
						}
						else
						{
							iLocal_3438 = 5;
						}
						RECORDING::_0x293220DA1B46CEBC(0f, 12f, 4);
						uLocal_3287 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0.2f, -733.7f, 45.3f, 10.6f, 0f, -14.2f, 40f, 0, 2);
						fLocal_3434 = 0.35f;
						CAM::SHAKE_CAM(uLocal_3287, "HAND_SHAKE", fLocal_3434);
						CAM::SET_CAM_ACTIVE(uLocal_3287, 1);
						iLocal_3459 = 0;
						CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
						iLocal_3452 = 0;
						iLocal_3478 = 3;
						iLocal_3474 = 0;
						iLocal_9232 = 0;
						iLocal_3437++;
					}
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_IN_VEHICLE(func_130(), Local_3032[0 /*2*/], 0))
			{
				TASK::CLEAR_PED_SECONDARY_TASK(func_130());
				TASK::CLEAR_PED_SECONDARY_TASK(func_127());
			}
			if (!GlobalFunc_111())
			{
				TASK::CLEAR_PED_SECONDARY_TASK(func_130());
				TASK::CLEAR_PED_SECONDARY_TASK(func_127());
				CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
				HUD::CLEAR_HELP(0);
				iLocal_3437++;
			}
			else if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_3032[0 /*2*/], -2.55928f, -743.9714f, 45f, -14.34047f, -739.4463f, 43.15934f, 4.46f, 0, 1, 0) && PED::IS_PED_IN_VEHICLE(func_130(), Local_3032[0 /*2*/], 0)) && !TASK::GET_IS_TASK_ACTIVE(func_130(), 2))
			{
				if (!iLocal_3452)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_3032[0 /*2*/], -2.55928f, -743.9714f, 45f, -14.34047f, -739.4463f, 43.15934f, 4.46f, 0, 1, 0))
					{
						if (iLocal_9232 == 0)
						{
							GlobalFunc_159("FH1_FBHELP", -1);
							iLocal_9232 = 1;
						}
					}
				}
				if ((CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) != 4 && GlobalFunc_7635(&uLocal_3440, 0, 1, 0)) || (((CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4 && !iLocal_3452) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 80)) && MISC::GET_GAME_TIMER() > iLocal_3462))
				{
					MISC::CLEAR_AREA(-3.72364f, -751.4919f, 44.46628f, 5.5f, 1, 0, 0, 0);
					if (!iLocal_3452)
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_BANK_CHECK_OUT"))
						{
							AUDIO::STOP_AUDIO_SCENE("BS_1_BANK_CHECK_OUT");
						}
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_BANK_HINT_CAM"))
						{
							AUDIO::START_AUDIO_SCENE("BS_1_BANK_HINT_CAM");
						}
						iLocal_3462 = MISC::GET_GAME_TIMER() + 500;
						RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
						CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
						HUD::DISPLAY_RADAR(0);
						HUD::DISPLAY_HUD(0);
						if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_FADING_OUT())
						{
							HUD::CLEAR_HELP(0);
						}
						iLocal_3452 = 1;
					}
				}
				else if ((CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) != 4 && !GlobalFunc_7635(&uLocal_3440, 0, 1, 0)) || (((CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4 && iLocal_3452) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 80)) && MISC::GET_GAME_TIMER() > iLocal_3462))
				{
					if (iLocal_3452)
					{
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_BANK_CHECK_OUT"))
						{
							AUDIO::START_AUDIO_SCENE("BS_1_BANK_CHECK_OUT");
						}
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_BANK_HINT_CAM"))
						{
							AUDIO::STOP_AUDIO_SCENE("BS_1_BANK_HINT_CAM");
						}
						iLocal_3462 = MISC::GET_GAME_TIMER() + 500;
						CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
						HUD::DISPLAY_RADAR(1);
						HUD::DISPLAY_HUD(1);
						iLocal_3452 = 0;
					}
				}
			}
			else
			{
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_FADING_OUT())
				{
					HUD::CLEAR_HELP(0);
				}
				CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
				HUD::DISPLAY_RADAR(1);
				HUD::DISPLAY_HUD(1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			break;
		
		case 2:
			break;
	}
	if (iLocal_3437 == 2)
	{
		if (iLocal_3438 != 5)
		{
			if (!bLocal_3020 && !CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(iLocal_3438);
				iLocal_3438 = 5;
			}
		}
		CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
		HUD::DISPLAY_RADAR(1);
		HUD::DISPLAY_HUD(1);
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		GlobalFunc_5175(&uLocal_3547, "missbigscore1_mcs1");
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_3051[5 /*4*/]))
	{
		if (!PED::IS_PED_HEADTRACKING_PED(func_130(), Local_3051[5 /*4*/]))
		{
			TASK::TASK_LOOK_AT_ENTITY(func_130(), Local_3051[5 /*4*/], -1, 2064, 2);
		}
		if (!PED::IS_PED_HEADTRACKING_PED(func_127(), Local_3051[5 /*4*/]))
		{
			TASK::TASK_LOOK_AT_ENTITY(func_127(), Local_3051[5 /*4*/], -1, 2064, 2);
		}
	}
	return 0;
}













void func_517()//Position - 0x4411B
{
	switch (iLocal_5436)
	{
		case 0:
			if (GlobalFunc_Is_Mission_Retry())
			{
				iLocal_5436 = 3;
			}
			else
			{
				func_574();
				if (bLocal_3430)
				{
					iLocal_5436++;
				}
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0) && CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				CAM::STOP_GAMEPLAY_HINT(1);
				func_572(&uLocal_3300, 0, 0, 2000, 1, 0, 0, 1);
				CLOCK::SET_CLOCK_TIME(12, 0, 0);
				iLocal_3530 = 1;
				MISC::CLEAR_AREA(90.3864f, -1278.837f, 28.0896f, 200f, 1, 0, 0, 0);
				GlobalFunc_8365(90.3864f, -1278.837f, 28.0896f, 20f, 0);
				GlobalFunc_7695(8);
				GlobalFunc_7695(20);
				GlobalFunc_76(20);
				RECORDING::_0x48621C9FCA3EBD28(4);
				iLocal_5436++;
			}
			break;
		
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (!GlobalFunc_2773(Local_3032[0 /*2*/]))
				{
					GlobalFunc_9756(&(Local_3032[0 /*2*/]), 0, 90.3864f, -1278.837f, 28.0896f, 98.4832f, 1, 0);
				}
				else if (!GlobalFunc_2773(Local_3032[1 /*2*/]))
				{
					if (GlobalFunc_9756(&(Local_3032[1 /*2*/]), 2, 83.4733f, -1281.323f, 29.1518f, 96.9356f, 1, 0))
					{
						ENTITY::SET_ENTITY_COLLISION(Local_3032[1 /*2*/], 1, 0);
					}
				}
				else if (!GlobalFunc_2773(func_129()) && GlobalFunc_8315() != 2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Trevor", 0)))
					{
						Local_3051[2 /*4*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Trevor", 0));
					}
				}
				else if (!GlobalFunc_2773(func_130()) && GlobalFunc_8315() != 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Michael", 0)))
					{
						Local_3051[0 /*4*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Michael", 0));
					}
				}
				else if (!GlobalFunc_2773(func_127()) && GlobalFunc_8315() != 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Franklin", 0)))
					{
						Local_3051[1 /*4*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Franklin", 0));
					}
				}
				else if (!GlobalFunc_2773(func_196()))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", 0)))
					{
						Local_3051[3 /*4*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", 0));
					}
				}
				else
				{
					func_198(0, 1, 1, 0, 0, 0);
					iLocal_3534 = 0;
					iLocal_3536 = 0;
					iLocal_3537 = 0;
					iLocal_3538 = 0;
					bLocal_3539 = false;
					bLocal_3541 = false;
					iLocal_5436++;
				}
			}
			break;
		
		case 3:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0) || !CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				RECORDING::_0x81CBAE94390F9F89();
				if (GlobalFunc_8315() != 0)
				{
					GlobalFunc_9134(&uLocal_3312, 0);
					func_519(&uLocal_3312, 1, 1, 0);
					Local_3051[2 /*4*/] = uLocal_3312[2];
					Local_3051[1 /*4*/] = uLocal_3312[1];
					bLocal_3541 = true;
				}
				Local_3051[0 /*4*/] = PLAYER::PLAYER_PED_ID();
				ENTITY::SET_ENTITY_COORDS(func_130(), 92.8082f, -1282.64f, 28.2537f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(func_130(), 38.2535f);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 800, 38.2535f, 0, 0);
				PED::FORCE_PED_MOTION_STATE(func_130(), -668482597, 0, 1, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				iLocal_3534 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0) || !CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				PED::SET_PED_INTO_VEHICLE(func_129(), Local_3032[1 /*2*/], -1);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_129(), 0, 0);
				iLocal_3536 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0) || !CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				ENTITY::SET_ENTITY_COORDS(func_127(), 94.5331f, -1277.552f, 28.1446f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(func_127(), 15.2302f);
				TASK::TASK_ENTER_VEHICLE(func_127(), Local_3032[0 /*2*/], -1, 0, 1f, 1, 0);
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(func_127(), 1f);
				PED::FORCE_PED_MOTION_STATE(func_127(), -668482597, 0, 1, 0);
				iLocal_3537 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lester", 0) || !CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				PED::SET_PED_INTO_VEHICLE(func_196(), Local_3032[1 /*2*/], 0);
				PED::SET_PED_CONFIG_FLAG(func_196(), 206, 1);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_196(), 0, 0);
				STREAMING::REQUEST_CLIP_SET("move_lester_CaneUp");
				iLocal_3538 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0) || !CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				bLocal_3539 = true;
			}
			if ((((((iLocal_3534 && iLocal_3536) && iLocal_3537) && iLocal_3538) && bLocal_3539) || GlobalFunc_Is_Mission_Retry()) || bLocal_5441)
			{
				GlobalFunc_562(76);
				VEHICLE::REQUEST_VEHICLE_RECORDING(1, "FH1RECMIKE");
				VEHICLE::REQUEST_VEHICLE_RECORDING(4, "FH1REC");
				VEHICLE::REQUEST_VEHICLE_RECORDING(3, "FH1REC");
				MISC::CLEAR_AREA(90.3864f, -1278.837f, 28.0896f, 20f, 1, 0, 0, 0);
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
				CLOCK::PAUSE_CLOCK(0);
				HUD::DISPLAY_RADAR(1);
				HUD::DISPLAY_HUD(1);
				bLocal_5441 = false;
				iLocal_5436++;
			}
			break;
		
		case 4:
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "FH1REC"))
			{
				GlobalFunc_173(&uLocal_3096, 0, func_129(), "TREVOR", 1, 1);
				GlobalFunc_173(&uLocal_3096, 1, func_130(), "MICHAEL", 1, 1);
				GlobalFunc_173(&uLocal_3096, 2, func_127(), "FRANKLIN", 1, 1);
				GlobalFunc_173(&uLocal_3096, 3, func_196(), "LESTER", 1, 1);
				func_329(0);
				PED::SET_PED_MOVEMENT_CLIPSET(func_196(), "move_lester_CaneUp", 1048576000);
				PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(func_196(), "move_lester_CaneUp");
				PED::SET_PED_CONFIG_FLAG(func_127(), 116, 0);
				PED::SET_PED_CONFIG_FLAG(func_196(), 116, 0);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_129(), 1);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_196(), 1);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_3032[1 /*2*/], 1);
				if (ENTITY::DOES_ENTITY_EXIST(func_129()))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_129(), iLocal_3298);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_129(), 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(func_127()))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_127(), iLocal_3298);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_127(), 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(func_196()))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_196(), iLocal_3298);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_196(), 1);
				}
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.7f);
				if (bLocal_3541)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneMichael", 1000, 0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", 1);
				}
				iLocal_5436++;
			}
			break;
		
		case 5:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(func_130(), 1f);
				PED::FORCE_PED_MOTION_STATE(func_130(), -668482597, 1, 1, 0);
				CAM::DO_SCREEN_FADE_IN(800);
			}
			if (CAM::IS_SCREEN_FADED_IN())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				iLocal_3427 = MISC::GET_GAME_TIMER();
				GlobalFunc_8380(0, 1, 1, 0);
				iLocal_5436++;
			}
			break;
		
		case 6:
			func_218(1, 0);
			iLocal_3427 = MISC::GET_GAME_TIMER();
			iLocal_5436++;
			break;
		
		case 7:
			if (!Local_3356.f_20)
			{
				if (PLAYER::PLAYER_PED_ID() == func_130())
				{
					if (!PED::IS_PED_INJURED(func_129()) && !ENTITY::IS_ENTITY_DEAD(Local_3032[1 /*2*/]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(func_129(), 567490903) != 1)
						{
							TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(func_129(), Local_3032[1 /*2*/], 1799.963f, 3321.91f, 40.8868f, 55f, 1074528293, 5f);
						}
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_drive_START"))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							AUDIO::START_AUDIO_SCENE("BS_1_drive_START");
						}
					}
					if (func_78(&Local_3261, -9.34495f, -741.3211f, 43.15848f, 0.1f, 0.1f, 2f, 1, func_127(), 0, 0, Local_3032[0 /*2*/], "FH1_BANK", "FH1_FRCAR", "", "", "", "CMN_GENGETINY", "CMN_GENGETBCKY", 0, 1, 1, -1) || ((HUD::DOES_BLIP_EXIST(Local_3261.f_5) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_130(), -2.55928f, -743.9714f, 45f, -14.34047f, -739.4463f, 43.15934f, 4.46f, 0, 1, 0)) && !TASK::GET_IS_TASK_ACTIVE(func_130(), 2)))
					{
						GlobalFunc_7139(&Local_3261, 0);
						GlobalFunc_763(Local_3032[0 /*2*/], 1093140480, 1, 1056964608, 0, 1);
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_drive_START"))
						{
							AUDIO::STOP_AUDIO_SCENE("BS_1_drive_START");
						}
						iLocal_3521 = 0;
						iLocal_3392 = 0;
						if (GlobalFunc_663("FH1_BANK", 0, 0))
						{
							HUD::CLEAR_PRINTS();
						}
						iLocal_5436 = 200;
					}
				}
				else if (PLAYER::PLAYER_PED_ID() == func_129())
				{
					func_78(&Local_3261, Local_3011, 0.1f, 0.1f, 2f, 1, func_196(), 0, 0, Local_3032[1 /*2*/], "", "", "", "", "", "", "", 0, 1, 1, -1);
					if ((!iLocal_3470 && HUD::DOES_BLIP_EXIST(Local_3261.f_5)) && GlobalFunc_5171())
					{
						GlobalFunc_164("FH1_AIR", 7500, 1);
						iLocal_3470 = 1;
					}
					if (!PED::IS_PED_INJURED(func_130()) && !ENTITY::IS_ENTITY_DEAD(Local_3032[0 /*2*/]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(func_130(), 567490903) != 1)
						{
							TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(func_130(), Local_3032[0 /*2*/], Local_3003, 8f, 786469, 2f);
						}
					}
					if (ENTITY::IS_ENTITY_AT_COORD(func_130(), Local_3003, 4f, 4f, 2f, 0, 1, 0) || ((((!func_21(12, 35) && !ENTITY::IS_ENTITY_ON_SCREEN(Local_3032[0 /*2*/])) && ENTITY::IS_ENTITY_OCCLUDED(Local_3032[0 /*2*/])) && (MISC::GET_GAME_TIMER() - iLocal_3400) > 15000) && (MISC::GET_GAME_TIMER() - iLocal_3391) > 10000))
					{
						if (iLocal_3479 == 0)
						{
							iLocal_3479 = 1;
						}
						if (iLocal_3479 == 3)
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								if (GlobalFunc_10618(&uLocal_3096, "FH1AUD", "FH1_TRVFBS", 7, 0, 0, 0))
								{
									iLocal_3479 = 4;
									GlobalFunc_Checkpoint1(1, "Stage 1: Front of bank", 0, 0, 0, 1);
									iLocal_5436 = 0;
									func_211(1);
									iLocal_3400 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
				}
			}
			break;
		
		case 200:
			if (GlobalFunc_663("FH1_BANK", 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
			if ((GlobalFunc_644(Local_3032[0 /*2*/]) && PED::IS_PED_IN_VEHICLE(func_130(), Local_3032[0 /*2*/], 0)) && !TASK::GET_IS_TASK_ACTIVE(func_129(), 2))
			{
				if (GlobalFunc_663("FH1_BANK", 0, 0))
				{
					HUD::CLEAR_PRINTS();
				}
				GlobalFunc_7139(&Local_3261, 0);
				GlobalFunc_5105();
				iLocal_5436 = 0;
				func_211(1);
				GlobalFunc_Checkpoint1(1, "Stage 1: Front of bank", 0, 0, 0, 1);
			}
			else
			{
				func_78(&Local_3261, -9.34495f, -741.3211f, 43.15848f, 0.1f, 0.1f, 2f, 1, func_127(), 0, 0, Local_3032[0 /*2*/], "", "FH1_FRCAR", "", "", "", "CMN_GENGETINY", "CMN_GENGETBCKY", 0, 1, 1, -1);
				GlobalFunc_763(Local_3032[0 /*2*/], 1093140480, 1, 1056964608, 0, 1);
			}
			break;
	}
}


int func_519(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x44BB1
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
			GlobalFunc_9014(iVar0, 0);
		}
		GlobalFunc_5127(iVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, 1);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, 1);
		iVar2 = GlobalFunc_584(uParam0->f_7);
		GlobalFunc_9014((*uParam0)[uParam0->f_7], 0);
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
		GlobalFunc_8999();
		GlobalFunc_8375(iVar2);
		GlobalFunc_10840(GlobalFunc_4933(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 145, 0));
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





















































void func_572(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x4C300
{
	int iVar0;
	
	if (iParam4 == 1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()), 64);
	}
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
		}
	}
	if (!bParam1 && iParam6)
	{
		CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
	}
	else
	{
		CAM::RENDER_SCRIPT_CAMS(bParam1, iParam2, iParam3, 1, 0, 0);
	}
	if (bParam1)
	{
		HUD::CLEAR_HELP(1);
	}
	else
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_4))
		{
			if (CAM::IS_CAM_ACTIVE(uParam0->f_4))
			{
				CAM::SET_CAM_ACTIVE(uParam0->f_4, 0);
			}
			CAM::DESTROY_CAM(uParam0->f_4, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
		}
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			ENTITY::SET_ENTITY_VISIBLE(iVar0, 1);
		}
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOD_SHIFT_SCENE"))
		{
			AUDIO::STOP_SOUND(uParam0->f_10);
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
		}
	}
	GlobalFunc_8380(bParam1, 1, 0, 0);
	GlobalFunc_737();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_7, 0, 0);
		}
		else
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(250);
		}
	}
	if (!bParam1)
	{
		if (Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4249 != -15)
		{
			Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4249 = GlobalFunc_7626();
		}
	}
}


void func_574()//Position - 0x4C49D
{
	if (!bLocal_3430)
	{
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			if (GlobalFunc_8315() == 2)
			{
				CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("bs_1_int", 511, 8);
			}
			else if (GlobalFunc_8315() == 0)
			{
				CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("bs_1_int", 508, 8);
			}
			else if (GlobalFunc_8315() == 1)
			{
				CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("bs_1_int", 504, 8);
			}
			func_305();
			SYSTEM::WAIT(0);
		}
		if (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			GlobalFunc_8380(1, 1, 1, 0);
			if (GlobalFunc_8315() != 2)
			{
				if (GlobalFunc_2773(Local_3051[2 /*4*/]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3051[2 /*4*/], "Trevor", 0, 0, 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Trevor", 2, GlobalFunc_4917(2), 0);
				}
			}
			if (GlobalFunc_8315() != 0)
			{
				if (GlobalFunc_2773(Local_3051[0 /*4*/]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3051[0 /*4*/], "Michael", 0, 0, 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Michael", 2, GlobalFunc_4917(0), 0);
				}
			}
			if (GlobalFunc_8315() != 1)
			{
				if (GlobalFunc_2773(Local_3051[1 /*4*/]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3051[1 /*4*/], "Franklin", 0, 0, 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Franklin", 2, GlobalFunc_4917(1), 0);
				}
			}
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Lester", 2, GlobalFunc_4946(12), 0);
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[0]))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_86864.f_28[0]))
				{
					ENTITY::DETACH_ENTITY(Global_86864.f_28[0], 0, 1);
				}
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Global_86864.f_28[0], "BS_Beer_Bottle", 1, 0, 0);
			}
			if (GlobalFunc_8315() == 2)
			{
				CUTSCENE::START_CUTSCENE(256);
			}
			else if (GlobalFunc_8315() == 0)
			{
				CUTSCENE::START_CUTSCENE(0);
			}
			else if (GlobalFunc_8315() == 1)
			{
				CUTSCENE::START_CUTSCENE(256);
			}
			bLocal_3430 = true;
		}
	}
}


void func_576()//Position - 0x4C674
{
	if (iLocal_3530)
	{
		if (iLocal_5435 < 4)
		{
			func_10();
			func_634();
		}
	}
	if (GlobalFunc_8315() == 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_3032[2 /*2*/]) && ENTITY::DOES_ENTITY_EXIST(func_129()))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3032[2 /*2*/], 0))
			{
				if (PED::IS_PED_IN_VEHICLE(func_129(), Local_3032[2 /*2*/], 0))
				{
					GlobalFunc_504(0, 637);
					GlobalFunc_504(Local_3032[2 /*2*/], 638);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3032[1 /*2*/], 0))
				{
					if (PED::IS_PED_IN_VEHICLE(func_129(), Local_3032[1 /*2*/], 0))
					{
						GlobalFunc_504(Local_3032[1 /*2*/], 637);
					}
				}
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3032[1 /*2*/], 0))
			{
				if (PED::IS_PED_IN_VEHICLE(func_129(), Local_3032[1 /*2*/], 0))
				{
					GlobalFunc_504(Local_3032[1 /*2*/], 637);
				}
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Local_3032[0 /*2*/]) && ENTITY::DOES_ENTITY_EXIST(func_130()))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3032[0 /*2*/], 0))
		{
			if (PED::IS_PED_IN_VEHICLE(func_130(), Local_3032[0 /*2*/], 0))
			{
				GlobalFunc_504(Local_3032[0 /*2*/], 637);
			}
		}
	}
	func_589();
	func_588();
	func_586();
	func_583();
	func_581();
	func_580();
	func_578();
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if ((!PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_503(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 639);
			}
			else
			{
				GlobalFunc_503(0, 639);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_3032[2 /*2*/]) && ENTITY::DOES_ENTITY_EXIST(func_129()))
			{
				if (PED::IS_PED_IN_VEHICLE(func_129(), Local_3032[2 /*2*/], 0))
				{
					GlobalFunc_503(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 640);
				}
			}
		}
		else
		{
			GlobalFunc_503(0, -1);
		}
	}
}


void func_578()//Position - 0x4C86A
{
	if (iLocal_5435 > 4)
	{
		if (GlobalFunc_2773(PLAYER::PLAYER_PED_ID()))
		{
			if (!iLocal_3467)
			{
				if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_3017, 1) < 250f)
				{
					if (AUDIO::LOAD_STREAM("Construction_Stream", "BIG_SCORE_SETUP_SOUNDS"))
					{
						iLocal_3467 = 1;
					}
				}
			}
			else if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_3017, 1) > 250f)
			{
				AUDIO::STOP_STREAM();
				iLocal_3467 = 0;
				iLocal_3468 = 0;
			}
			else if (!iLocal_3468 && iLocal_3467)
			{
				AUDIO::PLAY_STREAM_FROM_POSITION(26f, -636f, 17f);
				iLocal_3468 = 1;
			}
			if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_3017, 1) < 300f)
			{
				if (iLocal_3527)
				{
				}
			}
			else if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_3017, 1) > 330f)
			{
				iLocal_3527 = 1;
				if (ENTITY::DOES_ENTITY_EXIST(Local_3051[7 /*4*/]))
				{
					GlobalFunc_881(&(Local_3051[7 /*4*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_3051[8 /*4*/]))
				{
					GlobalFunc_881(&(Local_3051[8 /*4*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_3051[9 /*4*/]))
				{
					GlobalFunc_881(&(Local_3051[9 /*4*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_3051[10 /*4*/]))
				{
					GlobalFunc_881(&(Local_3051[10 /*4*/]));
				}
			}
		}
	}
}


void func_580()//Position - 0x4C9E1
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3293) && GlobalFunc_2773(func_196()))
	{
		if (!iLocal_3464)
		{
			if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(iLocal_3293) && ENTITY::DOES_ENTITY_HAVE_PHYSICS(func_196()))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_3293, func_196(), PED::GET_PED_BONE_INDEX(func_196(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				if (GlobalFunc_2773(Local_3032[2 /*2*/]))
				{
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_3293, Local_3032[2 /*2*/], 0);
				}
				iLocal_3464 = 1;
			}
		}
	}
	if (GlobalFunc_2773(func_196()))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(func_196(), 1f);
	}
	if (iLocal_5435 < 4)
	{
		if ((GlobalFunc_2773(func_196()) && GlobalFunc_2773(Local_3032[2 /*2*/])) && GlobalFunc_2773(func_129()))
		{
			if (PED::IS_PED_IN_VEHICLE(func_196(), Local_3032[2 /*2*/], 0))
			{
				if (!PED::IS_PED_HEADTRACKING_ENTITY(func_196(), func_129()))
				{
					TASK::TASK_LOOK_AT_ENTITY(func_196(), func_129(), -1, 2096, 2);
				}
			}
		}
	}
}

void func_581()//Position - 0x4CAD4
{
	if (GlobalFunc_2773(Local_3032[2 /*2*/]))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_3032[2 /*2*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 200f && !iLocal_3529)
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3032[2 /*2*/]);
			ENTITY::FREEZE_ENTITY_POSITION(Local_3032[2 /*2*/], 0);
			iLocal_3529 = 1;
		}
		if (PLAYER::PLAYER_PED_ID() == func_130())
		{
			VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_3032[2 /*2*/], 0);
			if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_3032[2 /*2*/]) < 300f)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_3032[2 /*2*/], 550f);
			}
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_3032[2 /*2*/], 0);
		}
		else if (PLAYER::PLAYER_PED_ID() == func_129())
		{
			VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_3032[2 /*2*/], 0);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_3032[2 /*2*/], 1);
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(func_129()))
	{
		if (GlobalFunc_713(func_129(), Local_3011, 1) < 300f)
		{
			GlobalFunc_7695(20);
			if (STREAMING::HAS_MODEL_LOADED(joaat("frogger2")))
			{
				Local_3032[2 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("frogger2"), 1758.309f, 3284.528f, 40.7f, 133.1852f, 1, 1);
				ENTITY::SET_ENTITY_ALWAYS_PRERENDER(Local_3032[2 /*2*/], 1);
				VEHICLE::SET_VEHICLE_LIVERY(Local_3032[2 /*2*/], 1);
				ENTITY::SET_ENTITY_COLLISION(Local_3032[2 /*2*/], 1, 0);
				ENTITY::FREEZE_ENTITY_POSITION(Local_3032[2 /*2*/], 1);
				GlobalFunc_5174(&uLocal_3547, joaat("frogger2"));
			}
		}
		else if (GlobalFunc_713(func_129(), Local_3011, 1) < 350f)
		{
			GlobalFunc_718(&uLocal_3547, joaat("frogger2"));
		}
	}
	if (iLocal_5435 == 4 || iLocal_5435 == 5)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Local_3032[2 /*2*/]) && ENTITY::DOES_ENTITY_EXIST(func_129())) && !CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (!PED::IS_PED_IN_VEHICLE(func_129(), Local_3032[2 /*2*/], 0))
			{
				if (iLocal_3471 == 0)
				{
					GlobalFunc_164("FH1_BKHELI", 7500, 1);
					iLocal_3471 = 1;
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_3286))
				{
					HUD::SET_BLIP_DISPLAY(uLocal_3286, 0);
				}
				if (!HUD::DOES_BLIP_EXIST(Local_3032[2 /*2*/].f_1))
				{
					Local_3032[2 /*2*/].f_1 = GlobalFunc_6783(Local_3032[2 /*2*/], 0, 0);
				}
			}
			else
			{
				iLocal_3471 = 0;
				if (HUD::DOES_BLIP_EXIST(uLocal_3286))
				{
					HUD::SET_BLIP_DISPLAY(uLocal_3286, 2);
				}
				if (HUD::DOES_BLIP_EXIST(Local_3032[2 /*2*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_3032[2 /*2*/].f_1));
				}
			}
		}
	}
	else if (HUD::DOES_BLIP_EXIST(Local_3032[2 /*2*/].f_1))
	{
		HUD::REMOVE_BLIP(&(Local_3032[2 /*2*/].f_1));
	}
	if (PLAYER::PLAYER_PED_ID() != func_129())
	{
		if (((GlobalFunc_2773(Local_3032[1 /*2*/]) && GlobalFunc_2773(func_129())) && GlobalFunc_2773(func_196())) && iLocal_3294 == 0)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_3011, ENTITY::GET_ENTITY_COORDS(Local_3032[1 /*2*/], 1), 1) < 60f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_3032[2 /*2*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3032[2 /*2*/], 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_3032[2 /*2*/], 0);
					PED::SET_PED_INTO_VEHICLE(func_196(), Local_3032[2 /*2*/], 1);
					iLocal_3294 = 1;
				}
			}
		}
	}
}


void func_583()//Position - 0x4CDE2
{
	struct<3> Var0;
	
	iLocal_3426 = 0;
	while (iLocal_3426 <= (11 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_3051[iLocal_3426 /*4*/]))
		{
			if (PED::IS_PED_INJURED(Local_3051[iLocal_3426 /*4*/]))
			{
				if (Local_3051[iLocal_3426 /*4*/] == func_130())
				{
					func_232(4);
				}
				else if (Local_3051[iLocal_3426 /*4*/] == func_129())
				{
					func_232(2);
				}
				else if (Local_3051[iLocal_3426 /*4*/] == func_127())
				{
					func_232(1);
				}
				else if (Local_3051[iLocal_3426 /*4*/] == func_196())
				{
					func_232(3);
				}
				else if ((((Local_3051[iLocal_3426 /*4*/] == Local_3051[4 /*4*/] || Local_3051[iLocal_3426 /*4*/] == Local_3051[5 /*4*/]) || Local_3051[iLocal_3426 /*4*/] == Local_3051[7 /*4*/]) || Local_3051[iLocal_3426 /*4*/] == Local_3051[8 /*4*/]) || Local_3051[iLocal_3426 /*4*/] == Local_3051[9 /*4*/])
				{
					func_232(10);
				}
				GlobalFunc_132(&(Local_3051[iLocal_3426 /*4*/]), 1, 0, 1);
			}
		}
		iLocal_3426++;
	}
	iLocal_3426 = 0;
	while (iLocal_3426 <= (9 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_3032[iLocal_3426 /*2*/]))
		{
			if (Local_3032[iLocal_3426 /*2*/] == Local_3032[0 /*2*/] && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3032[iLocal_3426 /*2*/], 0))
			{
				if (FIRE::IS_ENTITY_ON_FIRE(Local_3032[0 /*2*/]))
				{
					func_232(7);
				}
				if (VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(Local_3032[0 /*2*/]))
				{
					if (VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(Local_3032[0 /*2*/]))
					{
						if (PLAYER::PLAYER_PED_ID() == func_130())
						{
							func_232(7);
						}
					}
				}
				else
				{
					VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_3032[0 /*2*/]);
				}
			}
			if (Local_3032[iLocal_3426 /*2*/] == Local_3032[1 /*2*/] && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3032[iLocal_3426 /*2*/], 0))
			{
				if (FIRE::IS_ENTITY_ON_FIRE(Local_3032[1 /*2*/]))
				{
					func_232(8);
				}
				if (VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(Local_3032[1 /*2*/]))
				{
					if (VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(Local_3032[1 /*2*/]))
					{
						if (PLAYER::PLAYER_PED_ID() == func_129())
						{
							func_232(8);
						}
					}
				}
				else
				{
					VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_3032[1 /*2*/]);
				}
			}
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3032[iLocal_3426 /*2*/], 0))
			{
				if (Local_3032[iLocal_3426 /*2*/] == Local_3032[0 /*2*/])
				{
					func_232(7);
				}
				if (Local_3032[iLocal_3426 /*2*/] == Local_3032[1 /*2*/])
				{
					func_232(8);
				}
				if (Local_3032[iLocal_3426 /*2*/] == Local_3032[2 /*2*/])
				{
					func_232(9);
				}
				GlobalFunc_131(&(Local_3032[iLocal_3426 /*2*/]));
			}
			else if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (Local_3032[iLocal_3426 /*2*/] == Local_3032[2 /*2*/])
				{
					if (ENTITY::IS_ENTITY_IN_AIR(Local_3032[2 /*2*/]) && !PED::IS_PED_IN_VEHICLE(func_129(), Local_3032[2 /*2*/], 0))
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(Local_3032[2 /*2*/], 1) };
						if (Var0.f_2 > 200f)
						{
							func_232(12);
							GlobalFunc_131(&(Local_3032[iLocal_3426 /*2*/]));
						}
					}
				}
			}
		}
		iLocal_3426++;
	}
	if (iLocal_3530)
	{
		if (!func_21(15, 24) && iLocal_5435 < 4)
		{
			func_584();
		}
		if (!func_21(15, 30) && iLocal_5435 < 4)
		{
			GlobalFunc_4956();
			func_232(14);
		}
		if (iLocal_5435 < 6)
		{
			if (GlobalFunc_2773(func_130()))
			{
				if (GlobalFunc_713(func_130(), 7.03093f, -710.3717f, 45.0146f, 1) > 2000f && PLAYER::PLAYER_PED_ID() == func_130())
				{
					func_232(13);
				}
				else if (GlobalFunc_713(func_130(), 7.03093f, -710.3717f, 45.0146f, 1) > 1900f && PLAYER::PLAYER_PED_ID() == func_130())
				{
					if (GlobalFunc_5171() && !iLocal_3473)
					{
						GlobalFunc_164("FH1_MIKERT", 7500, 1);
						iLocal_3473 = 1;
					}
				}
				else
				{
					iLocal_3473 = 0;
				}
			}
		}
		else if (iLocal_5435 == 6)
		{
			if (GlobalFunc_2773(func_130()))
			{
				if (GlobalFunc_713(func_130(), 1743.807f, 3270.319f, 40.20966f, 1) < 600f && PLAYER::PLAYER_PED_ID() == func_130())
				{
					func_232(13);
				}
				else if (GlobalFunc_713(func_130(), 1743.807f, 3270.319f, 40.20966f, 1) < 700f && PLAYER::PLAYER_PED_ID() == func_130())
				{
					if (GlobalFunc_5171() && !iLocal_3473)
					{
						GlobalFunc_164("FH1_MISSRT", 7500, 1);
						iLocal_3473 = 1;
					}
				}
				else
				{
					iLocal_3473 = 0;
				}
			}
		}
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (PLAYER::PLAYER_PED_ID() == func_130())
			{
				if (GlobalFunc_2773(func_127()))
				{
					fLocal_3428 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(func_130(), 1), ENTITY::GET_ENTITY_COORDS(func_127(), 1));
					if (fLocal_3428 > 90f)
					{
						if (!iLocal_3472)
						{
							GlobalFunc_164("FH1_HEADBKF", 7500, 1);
							iLocal_3472 = 1;
						}
						if (fLocal_3428 > 120f)
						{
							func_232(11);
						}
					}
					else
					{
						iLocal_3472 = 0;
					}
				}
			}
			else if (PLAYER::PLAYER_PED_ID() == func_129())
			{
				if (GlobalFunc_2773(func_196()))
				{
					if (GlobalFunc_156(func_129(), func_196(), 1) > 90f && iLocal_5442 == 0)
					{
						if (!iLocal_3472)
						{
							GlobalFunc_164("FH1_HEADBKL", 7500, 1);
							iLocal_3472 = 1;
						}
						if (GlobalFunc_156(func_129(), func_196(), 1) > 120f)
						{
							func_232(12);
						}
					}
					else
					{
						iLocal_3472 = 0;
					}
				}
			}
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 4.5757f, -707.3064f, 46.2527f, 150f, 150f, 60f, 0, 1, 0))
		{
			if (fLocal_3429 < 1f)
			{
				fLocal_3429 = 1f;
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(fLocal_3429);
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || FIRE::IS_EXPLOSION_IN_AREA(-1, -51.41013f, -753.0048f, 28.25766f, 80.25236f, -683.1798f, 100.0685f))
			{
				func_232(10);
			}
		}
		else if (fLocal_3429 > 0f)
		{
			fLocal_3429 = 0f;
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(fLocal_3429);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_3051[5 /*4*/]))
		{
			if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_3051[5 /*4*/], PLAYER::PLAYER_PED_ID(), 1) || PED::IS_PED_IN_COMBAT(Local_3051[5 /*4*/], PLAYER::PLAYER_PED_ID())) || PED::IS_PED_BEING_STEALTH_KILLED(Local_3051[5 /*4*/])) || MISC::IS_PROJECTILE_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_3051[5 /*4*/], 1) - Vector(5f, 15f, 15f), ENTITY::GET_ENTITY_COORDS(Local_3051[5 /*4*/], 1) + Vector(5f, 15f, 15f), 1))
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_3051[5 /*4*/], 1630799643) != 1)
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(Local_3051[5 /*4*/], PLAYER::PLAYER_PED_ID(), -1, 0);
				}
				func_232(10);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_3051[4 /*4*/]))
		{
			if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_3051[4 /*4*/], PLAYER::PLAYER_PED_ID(), 1) || PED::IS_PED_IN_COMBAT(Local_3051[4 /*4*/], PLAYER::PLAYER_PED_ID())) || MISC::IS_PROJECTILE_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_3051[4 /*4*/], 1) - Vector(5f, 15f, 15f), ENTITY::GET_ENTITY_COORDS(Local_3051[4 /*4*/], 1) + Vector(5f, 15f, 15f), 1))
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_3051[4 /*4*/], 1630799643) != 1)
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(Local_3051[4 /*4*/], PLAYER::PLAYER_PED_ID(), -1, 0);
				}
				func_232(10);
			}
		}
		if (GlobalFunc_2773(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -98.69806f, -671.9003f, 34.46694f, -85.72156f, -676.6857f, 40.92188f, 25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 4.47685f, -705.701f, 58.89827f, 17.18902f, -732.9049f, 43.216f, 47f, 0, 1, 0))
					{
						if (GlobalFunc_2773(Local_3051[4 /*4*/]))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_3051[4 /*4*/], 1630799643) != 1)
							{
								TASK::TASK_AIM_GUN_AT_ENTITY(Local_3051[4 /*4*/], PLAYER::PLAYER_PED_ID(), -1, 0);
							}
						}
						if (GlobalFunc_2773(Local_3051[5 /*4*/]))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_3051[5 /*4*/], 1630799643) != 1)
							{
								TASK::TASK_AIM_GUN_AT_ENTITY(Local_3051[5 /*4*/], PLAYER::PLAYER_PED_ID(), -1, 0);
							}
						}
						func_232(10);
					}
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 8.12f, -713.66f, 44.57f, 12f, 12f, 5f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 30.8506f, -616.7436f, 15f, 19.54452f, -648.7594f, 29f, 20f, 0, 1, 0))
				{
					if (GlobalFunc_2773(Local_3051[4 /*4*/]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_3051[4 /*4*/], 1630799643) != 1)
						{
							TASK::TASK_AIM_GUN_AT_ENTITY(Local_3051[4 /*4*/], PLAYER::PLAYER_PED_ID(), -1, 0);
						}
					}
					if (GlobalFunc_2773(Local_3051[5 /*4*/]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_3051[5 /*4*/], 1630799643) != 1)
						{
							TASK::TASK_AIM_GUN_AT_ENTITY(Local_3051[5 /*4*/], PLAYER::PLAYER_PED_ID(), -1, 0);
						}
					}
					func_232(10);
				}
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -83.04369f, -678.8572f, 38f, -69.75829f, -683.5911f, 32.18783f, 14f, 0, 1, 0))
			{
				if (GlobalFunc_2773(Local_3051[4 /*4*/]))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_3051[4 /*4*/], 1630799643) != 1)
					{
						TASK::TASK_AIM_GUN_AT_ENTITY(Local_3051[4 /*4*/], PLAYER::PLAYER_PED_ID(), -1, 0);
					}
				}
				func_232(10);
			}
		}
	}
}

void func_584()//Position - 0x4D72E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_SECONDS();
	if (iLocal_3405 == 0)
	{
		if (iVar1 == 25 && iVar2 >= 30)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_3405++;
		}
	}
	else if (iLocal_3405 == 1)
	{
		if (iVar1 == 26 && iVar2 >= 0)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_3405++;
		}
	}
	else if (iLocal_3405 == 2)
	{
		if (iVar1 == 26 && iVar2 >= 30)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_3405++;
		}
	}
	else if (iLocal_3405 == 3)
	{
		if (iVar1 == 27 && iVar2 >= 0)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_3405++;
		}
	}
	else if (iLocal_3405 == 4)
	{
		if (iVar1 == 27 && iVar2 >= 30)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_3405++;
		}
	}
	else if (iLocal_3405 == 5)
	{
		if (iVar1 == 28 && iVar2 >= 0)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_3405++;
		}
	}
	else if (iLocal_3405 == 6)
	{
		if (iVar1 == 28 && iVar2 >= 15)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_3405++;
		}
	}
	else if (iLocal_3405 == 7)
	{
		if (iVar1 == 28 && iVar2 >= 30)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_3405++;
		}
	}
	else if (iLocal_3405 == 8)
	{
		if (iVar1 == 28 && iVar2 >= 45)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_3405++;
		}
	}
	else if (iLocal_3405 == 9)
	{
		if (iVar1 == 29 && iVar2 >= 0)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_3405++;
		}
	}
	else if (iLocal_3405 == 10)
	{
		if (iVar1 == 29 && iVar2 >= 15)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_3405++;
		}
	}
	else if (iLocal_3405 == 11)
	{
		if (iVar1 == 29 && iVar2 >= 30)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_3405++;
		}
	}
	else if (iLocal_3405 == 12)
	{
		if (iVar1 == 29 && iVar2 >= 45)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_3405++;
		}
	}
	else if (iLocal_3405 == 13)
	{
		if (iVar1 >= 30 && iVar0 == 15)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_3405++;
		}
	}
}


void func_586()//Position - 0x4DA6E
{
	if (!iLocal_5432)
	{
		if ((GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_3003, 1) < 200f || GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_3007, 1) < 200f) || (iLocal_5435 == 4 && iLocal_5436 > 10))
		{
			STREAMING::REQUEST_MODEL(joaat("s_m_m_armoured_01"));
			STREAMING::REQUEST_ANIM_DICT("missbigscore1guard_wait_rifle");
			iLocal_5432 = 1;
			iLocal_5433 = 1;
		}
	}
	else if ((GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_3003, 1) < 200f || GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_3007, 1) < 200f) || (iLocal_5435 == 4 && iLocal_5436 > 10))
	{
		if ((STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_armoured_01")) && STREAMING::HAS_ANIM_DICT_LOADED("missbigscore1guard_wait_rifle")) && iLocal_5433)
		{
			if (!GlobalFunc_2773(Local_3051[4 /*4*/]))
			{
				func_587(4, -77.96f, -677.87f, 33.47f, 64.7755f);
			}
			if (!GlobalFunc_2773(Local_3051[5 /*4*/]))
			{
				func_587(5, 9.47284f, -710.345f, 45.0146f, 209.3389f);
				MISC::CLEAR_AREA(3.41664f, -710.2043f, 44.97406f, 4f, 1, 0, 0, 0);
			}
			iLocal_5433 = 0;
		}
	}
	else if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_3003, 1) > 230f && GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_3007, 1) > 230f)
	{
		if (iLocal_5435 != 4)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_armoured_01"));
		}
		GlobalFunc_132(&(Local_3051[4 /*4*/]), 1, 0, 1);
		GlobalFunc_132(&(Local_3051[5 /*4*/]), 1, 0, 1);
		STREAMING::REMOVE_ANIM_DICT("missbigscore1guard_wait_rifle");
		iLocal_5432 = 0;
	}
	if (iLocal_5435 >= 4)
	{
		if (!iLocal_5430)
		{
			if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_3017, 1) < 300f)
			{
				STREAMING::REQUEST_MODEL(joaat("bulldozer"));
				iLocal_5430 = 1;
				iLocal_5431 = 1;
			}
		}
		else if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_3017, 1) < 300f)
		{
			if (STREAMING::HAS_MODEL_LOADED(joaat("bulldozer")) && iLocal_5431)
			{
				if (!GlobalFunc_2773(Local_3032[5 /*2*/]))
				{
					Local_3032[5 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("bulldozer"), 26.76431f, -609.3245f, 30.62795f, 252.2286f, 1, 1);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_3032[5 /*2*/], 0);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3032[5 /*2*/]);
				}
				if (!GlobalFunc_2773(Local_3032[6 /*2*/]))
				{
					Local_3032[6 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("bulldozer"), 36.85886f, -648.699f, 30.62794f, 140.3838f, 1, 1);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_3032[6 /*2*/], 0);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3032[6 /*2*/]);
				}
				iLocal_5431 = 0;
			}
		}
		else if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_3017, 1) > 330f)
		{
			GlobalFunc_131(&(Local_3032[5 /*2*/]));
			GlobalFunc_131(&(Local_3032[5 /*2*/]));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bulldozer"));
			iLocal_5430 = 0;
		}
	}
}

void func_587(int iParam0, struct<3> Param1, float fParam4)//Position - 0x4DD50
{
	Local_3051[iParam0 /*4*/] = PED::CREATE_PED(26, joaat("s_m_m_armoured_01"), Param1, fParam4, 1, 1);
	if (iParam0 == 4)
	{
		PED::SET_PED_COMPONENT_VARIATION(Local_3051[iParam0 /*4*/], 0, 0, 1, 0);
		PED::SET_PED_PROP_INDEX(Local_3051[iParam0 /*4*/], 0, 1, 0, false);
	}
	else
	{
		PED::SET_PED_COMPONENT_VARIATION(Local_3051[iParam0 /*4*/], 0, 2, 0, 0);
	}
	PED::SET_PED_CONFIG_FLAG(Local_3051[iParam0 /*4*/], 118, 0);
	PED::SET_PED_HIGHLY_PERCEPTIVE(Local_3051[iParam0 /*4*/], 1);
	WEAPON::GIVE_WEAPON_TO_PED(Local_3051[iParam0 /*4*/], joaat("weapon_advancedrifle"), -1, 1, 1);
	WEAPON::SET_CURRENT_PED_WEAPON(Local_3051[iParam0 /*4*/], joaat("weapon_advancedrifle"), 1);
	PED::SET_PED_LEG_IK_MODE(Local_3051[iParam0 /*4*/], 1);
	TASK::OPEN_SEQUENCE_TASK(&(Local_3051[iParam0 /*4*/].f_2));
	if (iParam0 == 4)
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -77.96f, -677.87f, 33.47f, 1f, -1, 0.25f, 0, 90f);
	}
	else
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 9.47284f, -710.345f, 45.0146f, 1f, -1, 0.25f, 0, 189.8286f);
	}
	TASK::TASK_PLAY_ANIM(0, "missbigscore1guard_wait_rifle", "wait_base", 4f, -1000f, -1, 0, 0, 0, 0, 0);
	TASK::TASK_PLAY_ANIM(0, "missbigscore1guard_wait_rifle", "wait_a", 1000f, -1000f, -1, 0, 0, 0, 0, 0);
	TASK::TASK_PLAY_ANIM(0, "missbigscore1guard_wait_rifle", "wait_b", 1000f, -1000f, -1, 0, 0, 0, 0, 0);
	TASK::TASK_PLAY_ANIM(0, "missbigscore1guard_wait_rifle", "wait_c", 1000f, -4f, -1, 0, 0, 0, 0, 0);
	TASK::SET_SEQUENCE_TO_REPEAT(Local_3051[iParam0 /*4*/].f_2, 1);
	TASK::CLOSE_SEQUENCE_TASK(Local_3051[iParam0 /*4*/].f_2);
	TASK::TASK_PERFORM_SEQUENCE(Local_3051[iParam0 /*4*/], Local_3051[iParam0 /*4*/].f_2);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_3051[iParam0 /*4*/], iLocal_3299);
	if (iParam0 == 5)
	{
		Local_3051[iParam0 /*4*/].f_3 = PED::ADD_SCENARIO_BLOCKING_AREA(-3.84928f, -728.367f, 44.09243f, 5.56493f, -705.1938f, 47.59827f, 0, 1, 1, 1);
	}
	else
	{
		Local_3051[iParam0 /*4*/].f_3 = PED::ADD_SCENARIO_BLOCKING_AREA(-93.01785f, -670.3105f, 34.46116f, -65.7259f, -686.6242f, 31.73092f, 0, 1, 1, 1);
	}
	MISC::CLEAR_AREA_OF_PEDS(Param1, 100f, 0);
}

void func_588()//Position - 0x4DF70
{
	if (iLocal_3435)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_3436) > 250)
		{
			fLocal_3434 = (fLocal_3434 - 0.05f);
			iLocal_3436 = MISC::GET_GAME_TIMER();
		}
		if (fLocal_3434 > 1f)
		{
			fLocal_3434 = 1f;
		}
		if (fLocal_3434 <= 0f)
		{
			fLocal_3434 = 0f;
			iLocal_3435 = 0;
		}
		CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(fLocal_3434);
	}
}

void func_589()//Position - 0x4DFC1
{
	struct<3> Var0;
	int iVar3;
	struct<3> Var4;
	
	if (iLocal_3392)
	{
		if (PLAYER::PLAYER_PED_ID() == func_130())
		{
			GlobalFunc_2518(&uLocal_3312, 2, 0);
			GlobalFunc_2511(&uLocal_3312, 2, 0, 1);
		}
		else if (PLAYER::PLAYER_PED_ID() == func_129())
		{
			GlobalFunc_2518(&uLocal_3312, 0, 0);
			GlobalFunc_2511(&uLocal_3312, 0, 2, 1);
		}
		else if (PLAYER::PLAYER_PED_ID() == func_127())
		{
			GlobalFunc_2518(&uLocal_3312, 0, 0);
			GlobalFunc_2511(&uLocal_3312, 0, 2, 1);
		}
		if (!Local_3356.f_20 && !iLocal_9215)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (func_616())
				{
					GlobalFunc_565(642, 1, 0);
					if (HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						HUD::CLEAR_PRINTS();
					}
					if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						HUD::CLEAR_HELP(1);
					}
					GlobalFunc_5652(&Local_3261, 1, 0);
					GlobalFunc_7139(&Local_3261, 0);
					CLOCK::PAUSE_CLOCK(1);
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_130(), 1), ENTITY::GET_ENTITY_COORDS(func_129(), 1), 1) > 70f && !ENTITY::IS_ENTITY_ON_SCREEN(Local_3356.f_12))
					{
						bLocal_3394 = true;
					}
					else
					{
						bLocal_3394 = false;
					}
					iLocal_3390 = 0;
					if (GlobalFunc_2773(func_130()))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(func_130(), 1);
					}
					if (GlobalFunc_2773(func_196()))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(func_196(), 1);
					}
					if (GlobalFunc_2773(func_129()))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(func_129(), 1);
					}
					if (GlobalFunc_2773(func_127()))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(func_127(), 1);
					}
					if (GlobalFunc_2773(Local_3032[2 /*2*/]))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(Local_3032[2 /*2*/], 1);
					}
					if (GlobalFunc_2773(Local_3032[1 /*2*/]))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(Local_3032[1 /*2*/], 1);
					}
					if (GlobalFunc_2773(Local_3032[0 /*2*/]))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(Local_3032[0 /*2*/], 1);
					}
					if (uLocal_3312.f_7 == 0)
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(func_130(), 1) };
						if ((iLocal_3475 == 2 && iLocal_3479 == 0) && GlobalFunc_111())
						{
							if ((iLocal_3477 == 0 || iLocal_3477 == 1) || iLocal_3477 == 4)
							{
								cLocal_3493 = { GlobalFunc_514() };
								cLocal_3499 = { GlobalFunc_560() };
								iLocal_3505 = 1;
								GlobalFunc_4956();
							}
						}
						if (iLocal_5435 == 0)
						{
							if (bLocal_3394)
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[0 /*2*/]))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3032[0 /*2*/]);
								}
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3032[0 /*2*/], 1, "FH1RECMIKE", 1);
								fLocal_3393 = func_614(Var0, 1, "FH1RECMIKE", 20);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_3032[0 /*2*/], fLocal_3393);
								VEHICLE::SET_PLAYBACK_SPEED(Local_3032[0 /*2*/], 0f);
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_3032[0 /*2*/], 1);
								ENTITY::SET_ENTITY_COORDS(func_130(), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(1, "FH1RECMIKE"), fLocal_3393), 1, 0, 0, 1);
								if (!PED::IS_PED_IN_VEHICLE(func_130(), Local_3032[0 /*2*/], 0))
								{
									PED::SET_PED_INTO_VEHICLE(func_130(), Local_3032[0 /*2*/], -1);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_130(), 0, 0);
								}
								if (!PED::IS_PED_IN_VEHICLE(func_127(), Local_3032[0 /*2*/], 0))
								{
									PED::SET_PED_INTO_VEHICLE(func_127(), Local_3032[0 /*2*/], 0);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_127(), 0, 0);
								}
								Local_3356.f_10 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(1, "FH1RECMIKE"), fLocal_3393) + Vector(30f, 0f, 0f), ENTITY::GET_ENTITY_ROTATION(Local_3356.f_12, 2), 1115815936, 0, 2);
							}
						}
						if (iLocal_5435 == 1)
						{
							if (iLocal_5436 == 0)
							{
								if (bLocal_3394)
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[0 /*2*/]))
									{
										VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3032[0 /*2*/]);
									}
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3032[0 /*2*/], 1, "FH1RECMIKE", 1);
									fLocal_3393 = (func_614(Local_3003, 1, "FH1RECMIKE", 20) - 10000f);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_3032[0 /*2*/], fLocal_3393);
									VEHICLE::SET_PLAYBACK_SPEED(Local_3032[0 /*2*/], 0f);
									VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_3032[0 /*2*/], 1);
									ENTITY::SET_ENTITY_COORDS(func_130(), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(1, "FH1RECMIKE"), fLocal_3393), 1, 0, 0, 1);
									if (!PED::IS_PED_IN_VEHICLE(func_130(), Local_3032[0 /*2*/], 0))
									{
										PED::SET_PED_INTO_VEHICLE(func_130(), Local_3032[0 /*2*/], -1);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_130(), 0, 0);
									}
									if (!PED::IS_PED_IN_VEHICLE(func_127(), Local_3032[0 /*2*/], 0))
									{
										PED::SET_PED_INTO_VEHICLE(func_127(), Local_3032[0 /*2*/], 0);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_127(), 0, 0);
									}
									Local_3356.f_10 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(1, "FH1RECMIKE"), fLocal_3393) + Vector(30f, 0f, 0f), ENTITY::GET_ENTITY_ROTATION(Local_3356.f_12, 2), 1115815936, 0, 2);
								}
							}
							else if (bLocal_3394)
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[0 /*2*/]))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3032[0 /*2*/]);
								}
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3032[0 /*2*/], 2, "FH1RECMIKE", 1);
								fLocal_3393 = func_614(Var0, 2, "FH1RECMIKE", 10);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_3032[0 /*2*/], fLocal_3393);
								VEHICLE::SET_PLAYBACK_SPEED(Local_3032[0 /*2*/], 0f);
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_3032[0 /*2*/], 1);
								ENTITY::SET_ENTITY_COORDS(func_130(), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(2, "FH1RECMIKE"), fLocal_3393), 1, 0, 0, 1);
								if (!PED::IS_PED_IN_VEHICLE(func_130(), Local_3032[0 /*2*/], 0))
								{
									PED::SET_PED_INTO_VEHICLE(func_130(), Local_3032[0 /*2*/], -1);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_130(), 0, 0);
								}
								if (!PED::IS_PED_IN_VEHICLE(func_127(), Local_3032[0 /*2*/], 0))
								{
									PED::SET_PED_INTO_VEHICLE(func_127(), Local_3032[0 /*2*/], 0);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_127(), 0, 0);
								}
								Local_3356.f_10 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(2, "FH1RECMIKE"), fLocal_3393) + Vector(30f, 0f, 0f), ENTITY::GET_ENTITY_ROTATION(Local_3356.f_12, 2), 1115815936, 0, 2);
							}
						}
						else if (iLocal_5435 == 2 || iLocal_5435 == 3)
						{
							if (iLocal_5436 == 0)
							{
								CUTSCENE::REQUEST_CUTSCENE("BSS_1_MCS_2", 8);
								STREAMING::_0xF8155A7F03DDFC8E(2);
								StringCopy(&Local_3506, "", 24);
								StringCopy(&Local_3512, "", 24);
								iLocal_3518 = 0;
								iLocal_3478 = 3;
								if (bLocal_3394)
								{
									if (ENTITY::DOES_ENTITY_EXIST(Local_3032[0 /*2*/]))
									{
										ENTITY::SET_ENTITY_COORDS(Local_3032[0 /*2*/], Local_3007, 1, 0, 0, 1);
										ENTITY::SET_ENTITY_HEADING(Local_3032[0 /*2*/], fLocal_3010);
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3032[0 /*2*/]);
										MISC::CLEAR_AREA(-114.0502f, -652.3067f, 34.9012f, 40f, 1, 0, 0, 0);
									}
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_3032[2 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_3051[2 /*4*/], Local_3032[2 /*2*/], 0))
								{
									iLocal_5442 = 1;
									func_612(&Local_7925, 1);
									iLocal_3399 = 1;
									iLocal_5442 = 3;
								}
							}
						}
						else if (iLocal_5435 == 6)
						{
							if (bLocal_3394)
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[0 /*2*/]))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3032[0 /*2*/]);
								}
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3032[0 /*2*/], 3, "FH1RECMIKE", 1);
								fLocal_3393 = func_614(Var0, 3, "FH1RECMIKE", 10);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_3032[0 /*2*/], fLocal_3393);
								VEHICLE::SET_PLAYBACK_SPEED(Local_3032[0 /*2*/], 0f);
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_3032[0 /*2*/], 1);
								ENTITY::SET_ENTITY_COORDS(func_130(), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(3, "FH1RECMIKE"), fLocal_3393), 1, 0, 0, 1);
								if (!PED::IS_PED_IN_VEHICLE(func_130(), Local_3032[0 /*2*/], 0))
								{
									PED::SET_PED_INTO_VEHICLE(func_130(), Local_3032[0 /*2*/], -1);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_130(), 0, 0);
								}
								if (!PED::IS_PED_IN_VEHICLE(func_127(), Local_3032[0 /*2*/], 0))
								{
									PED::SET_PED_INTO_VEHICLE(func_127(), Local_3032[0 /*2*/], 0);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_127(), 0, 0);
								}
								Local_3356.f_10 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(3, "FH1RECMIKE"), fLocal_3393) + Vector(30f, 0f, 0f), ENTITY::GET_ENTITY_ROTATION(Local_3356.f_12, 2), 1115815936, 0, 2);
							}
						}
						if (GlobalFunc_2773(Local_3032[0 /*2*/]))
						{
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_3032[0 /*2*/], 1);
						}
						if (GlobalFunc_2773(func_129()))
						{
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_129(), 1);
						}
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_196(), 1);
						if (GlobalFunc_2773(Local_3032[2 /*2*/]))
						{
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_3032[2 /*2*/], 1);
						}
						if (GlobalFunc_2773(Local_3032[1 /*2*/]))
						{
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_3032[1 /*2*/], 1);
						}
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_130(), 0);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_127(), 0);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_3032[0 /*2*/], 0);
					}
					else if (uLocal_3312.f_7 == 2)
					{
						if ((iLocal_3474 == 2 && iLocal_3479 == 0) && GlobalFunc_111())
						{
							if ((iLocal_3478 == 0 || iLocal_3478 == 1) || iLocal_3478 == 2)
							{
								Local_3506 = { GlobalFunc_514() };
								Local_3512 = { GlobalFunc_560() };
								iLocal_3518 = 1;
								GlobalFunc_4956();
							}
						}
						if (bLocal_3394)
						{
							Var0 = { ENTITY::GET_ENTITY_COORDS(func_129(), 1) };
							if (iLocal_5435 < 4)
							{
								if (iLocal_3294 == 0)
								{
									if (GlobalFunc_2773(Local_3032[1 /*2*/]))
									{
										if (func_21(14, 45) && iLocal_3397)
										{
											iLocal_5442 = 3;
											if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[1 /*2*/]))
											{
												VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3032[1 /*2*/]);
											}
										}
										else
										{
											if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[1 /*2*/]))
											{
												VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3032[1 /*2*/]);
											}
											VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3032[1 /*2*/], 3, "FH1REC", 1);
											fLocal_3393 = func_614(Var0, 3, "FH1REC", 10);
											if (fLocal_3393 <= 10000f)
											{
												fLocal_3393 = 10000f;
											}
											VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_3032[1 /*2*/], fLocal_3393);
											VEHICLE::SET_PLAYBACK_SPEED(Local_3032[1 /*2*/], 0f);
											VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_3032[1 /*2*/], 1);
											ENTITY::SET_ENTITY_COORDS(func_129(), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(3, "FH1REC"), fLocal_3393), 1, 0, 0, 1);
											if (!PED::IS_PED_IN_VEHICLE(func_129(), Local_3032[1 /*2*/], 0))
											{
												PED::SET_PED_INTO_VEHICLE(func_129(), Local_3032[1 /*2*/], -1);
												PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_129(), 0, 0);
											}
											if (!PED::IS_PED_IN_VEHICLE(func_196(), Local_3032[1 /*2*/], 0))
											{
												PED::SET_PED_INTO_VEHICLE(func_196(), Local_3032[1 /*2*/], 0);
												PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_196(), 0, 0);
											}
										}
										Local_3356.f_10 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(3, "FH1REC"), fLocal_3393) + Vector(30f, 0f, 0f), ENTITY::GET_ENTITY_ROTATION(Local_3356.f_12, 2), 1115815936, 0, 2);
									}
								}
								else if (iLocal_3294 == 1 && PED::IS_PED_IN_VEHICLE(Local_3051[2 /*4*/], Local_3032[2 /*2*/], 0))
								{
									if (GlobalFunc_2773(Local_3032[2 /*2*/]))
									{
										if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[2 /*2*/]))
										{
											VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3032[2 /*2*/]);
										}
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3032[2 /*2*/], 4, "FH1REC", 1);
										fLocal_3393 = func_614(Var0, 4, "FH1REC", 10);
										VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_3032[2 /*2*/], fLocal_3393);
										VEHICLE::SET_PLAYBACK_SPEED(Local_3032[2 /*2*/], 0f);
										VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_3032[2 /*2*/], 1);
										ENTITY::SET_ENTITY_COORDS(func_129(), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(4, "FH1REC"), fLocal_3393), 1, 0, 0, 1);
										if (!PED::IS_PED_IN_VEHICLE(func_129(), Local_3032[2 /*2*/], 0))
										{
											PED::SET_PED_INTO_VEHICLE(func_129(), Local_3032[2 /*2*/], -1);
											PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_129(), 0, 0);
										}
										if (!PED::IS_PED_IN_VEHICLE(func_196(), Local_3032[2 /*2*/], 0))
										{
											PED::SET_PED_INTO_VEHICLE(func_196(), Local_3032[2 /*2*/], 1);
											PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_196(), 0, 0);
										}
										iLocal_3398 = 1;
										iLocal_5442 = 3;
									}
								}
							}
							if (iLocal_5435 == 6)
							{
								if (GlobalFunc_2773(Local_3032[2 /*2*/]))
								{
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3032[2 /*2*/], 5, "FH1REC", 1);
									fLocal_3393 = func_614(Var0, 5, "FH1REC", 10);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_3032[2 /*2*/], fLocal_3393);
									VEHICLE::SET_PLAYBACK_SPEED(Local_3032[2 /*2*/], 0f);
									VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_3032[2 /*2*/], 1);
									ENTITY::SET_ENTITY_COORDS(func_129(), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(5, "FH1REC"), fLocal_3393), 1, 0, 0, 1);
									if (!PED::IS_PED_IN_VEHICLE(func_129(), Local_3032[2 /*2*/], 0))
									{
										PED::SET_PED_INTO_VEHICLE(func_129(), Local_3032[2 /*2*/], -1);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_129(), 0, 0);
									}
									if (!PED::IS_PED_IN_VEHICLE(func_196(), Local_3032[2 /*2*/], 0))
									{
										PED::SET_PED_INTO_VEHICLE(func_196(), Local_3032[2 /*2*/], 1);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_196(), 0, 0);
									}
									Local_3356.f_10 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(5, "FH1REC"), fLocal_3393) + Vector(30f, 0f, 0f), ENTITY::GET_ENTITY_ROTATION(Local_3356.f_12, 2), 1115815936, 0, 2);
								}
							}
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(func_129(), 0))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(func_129(), 0), 0))
							{
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(PED::GET_VEHICLE_PED_IS_IN(func_129(), 0), 1);
							}
						}
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_129(), 0);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_196(), 0);
						if (GlobalFunc_2773(Local_3032[2 /*2*/]))
						{
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_3032[2 /*2*/], 0);
						}
						if (GlobalFunc_2773(Local_3032[1 /*2*/]))
						{
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_3032[1 /*2*/], 0);
						}
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_130(), 1);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_127(), 1);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_3032[0 /*2*/], 1);
					}
					iLocal_3396 = 0;
					Local_3356.f_20 = 1;
					Local_3356.f_19 = 0;
				}
			}
		}
		iVar3 = func_592();
		if (iVar3 == 2)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3032[0 /*2*/], 0))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_3032[0 /*2*/], 1);
			}
			if (Local_3356.f_18)
			{
				if (!Local_3356.f_19)
				{
					if (func_519(&uLocal_3312, 1, 1, iLocal_9221))
					{
						MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(Local_3356.f_12, 1), 10f, 1, 0, 0, 0);
						Local_3356.f_19 = 1;
						if (ENTITY::DOES_ENTITY_EXIST(func_129()))
						{
							if (uLocal_3312[2] == 0)
							{
								Local_3051[2 /*4*/] = PLAYER::PLAYER_PED_ID();
								iLocal_3395 = MISC::GET_GAME_TIMER();
								if (PED::IS_PED_IN_ANY_VEHICLE(func_129(), 0))
								{
									ENTITY::FREEZE_ENTITY_POSITION(PED::GET_VEHICLE_PED_IS_IN(func_129(), 0), 0);
								}
							}
							else
							{
								Local_3051[2 /*4*/] = uLocal_3312[2];
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_129(), iLocal_3298);
							}
							if (!PED::IS_PED_INJURED(func_129()))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_129(), 1);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(func_130()))
						{
							if (uLocal_3312[0] == 0)
							{
								Local_3051[0 /*4*/] = PLAYER::PLAYER_PED_ID();
								iLocal_3395 = MISC::GET_GAME_TIMER();
								ENTITY::FREEZE_ENTITY_POSITION(Local_3032[0 /*2*/], 0);
							}
							else
							{
								Local_3051[0 /*4*/] = uLocal_3312[0];
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_130(), iLocal_3298);
							}
							if (!PED::IS_PED_INJURED(func_130()))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_130(), 1);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(func_127()))
						{
							if (uLocal_3312[1] == 0)
							{
								Local_3051[1 /*4*/] = PLAYER::PLAYER_PED_ID();
								iLocal_3395 = MISC::GET_GAME_TIMER();
							}
							else
							{
								Local_3051[1 /*4*/] = uLocal_3312[1];
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_127(), iLocal_3298);
							}
							if (!PED::IS_PED_INJURED(func_127()))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_127(), 1);
							}
						}
					}
				}
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_3395) > 2000 && bLocal_3394)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_3356.f_12, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(PED::GET_VEHICLE_PED_IS_IN(Local_3356.f_12, 0), 0);
				}
			}
			if (iLocal_5435 == 0)
			{
				if (!iLocal_3397)
				{
					if (iLocal_3294 == 0)
					{
						if (!PED::IS_PED_INJURED(func_129()) && !ENTITY::IS_ENTITY_DEAD(Local_3032[1 /*2*/]))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(func_129(), 567490903) != 1)
							{
								TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(func_129(), Local_3032[1 /*2*/], Local_3011, 50f, 1074528293, 5f);
							}
						}
					}
					else if (iLocal_3294 == 1)
					{
						if (!PED::IS_PED_INJURED(func_129()) && !ENTITY::IS_ENTITY_DEAD(Local_3032[2 /*2*/]))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(func_129(), -1273030092) != 1)
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(func_129(), Local_3032[2 /*2*/], 1527.602f, -591.3962f, 336.5655f, 9, 10f, 786469, 4f, -1f, 1);
							}
						}
					}
				}
				if (!PED::IS_PED_INJURED(func_130()) && !ENTITY::IS_ENTITY_DEAD(Local_3032[0 /*2*/]))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(func_130(), 567490903) != 1)
					{
						TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(func_130(), Local_3032[0 /*2*/], Local_3003, 15f, 1074528293, 5f);
					}
				}
			}
			else if (iLocal_5435 == 1)
			{
				if (!iLocal_3397)
				{
					if (iLocal_3294 == 0)
					{
						if (!PED::IS_PED_INJURED(func_129()) && !ENTITY::IS_ENTITY_DEAD(Local_3032[1 /*2*/]))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(func_129(), 567490903) != 1)
							{
								TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(func_129(), Local_3032[1 /*2*/], Local_3011, 50f, 1074528293, 5f);
							}
						}
					}
					else if (iLocal_3294 == 1)
					{
						if (!PED::IS_PED_INJURED(func_129()) && !ENTITY::IS_ENTITY_DEAD(Local_3032[2 /*2*/]))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(func_129(), -1273030092) != 1)
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(func_129(), Local_3032[2 /*2*/], 1527.602f, -591.3962f, 336.5655f, 9, 10f, 786469, 4f, -1f, 1);
							}
						}
					}
				}
				if (iLocal_5436 == 0)
				{
					if (Local_3356.f_12 == func_130())
					{
						if (!PED::IS_PED_INJURED(func_130()) && !ENTITY::IS_ENTITY_DEAD(Local_3032[0 /*2*/]))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(func_130(), 567490903) != 1)
							{
								TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(func_130(), Local_3032[0 /*2*/], Local_3003, 10f, 786469, 6f);
							}
						}
					}
				}
				else if (iLocal_5436 > 0)
				{
					if (!PED::IS_PED_INJURED(func_130()) && !ENTITY::IS_ENTITY_DEAD(Local_3032[0 /*2*/]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(func_130(), 567490903) != 1)
						{
							TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(func_130(), Local_3032[0 /*2*/], Local_3007, 13f, 1074528293, 3f);
						}
					}
				}
			}
			else if (iLocal_5435 == 2)
			{
				if (!iLocal_3397)
				{
					if (iLocal_3294 == 0)
					{
						if (!PED::IS_PED_INJURED(func_129()) && !ENTITY::IS_ENTITY_DEAD(Local_3032[1 /*2*/]))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(func_129(), 567490903) != 1)
							{
								TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(func_129(), Local_3032[1 /*2*/], 1799.963f, 3321.91f, 40.8868f, 50f, 1074528293, 5f);
							}
						}
					}
					else if (iLocal_3294 == 1)
					{
						if (!PED::IS_PED_INJURED(func_129()) && !ENTITY::IS_ENTITY_DEAD(Local_3032[2 /*2*/]))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(func_129(), -1273030092) != 1)
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(func_129(), Local_3032[2 /*2*/], 1527.602f, -591.3962f, 336.5655f, 9, 10f, 786469, 4f, -1f, 1);
							}
						}
					}
				}
				if (iLocal_5436 == 0)
				{
					if (bLocal_3394)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_3032[0 /*2*/]))
						{
							ENTITY::SET_ENTITY_COORDS(Local_3032[0 /*2*/], Local_3007, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(Local_3032[0 /*2*/], fLocal_3010);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3032[0 /*2*/]);
						}
					}
				}
			}
			else if (iLocal_5435 == 6)
			{
				if (!PED::IS_PED_INJURED(func_129()) && !ENTITY::IS_ENTITY_DEAD(Local_3032[2 /*2*/]))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(func_129(), -1273030092) != 1)
					{
						TASK::TASK_VEHICLE_MISSION_COORS_TARGET(func_129(), Local_3032[2 /*2*/], 1728.828f, 3126.128f, 106.3001f, 9, 10f, 786469, 4f, -1f, 1);
					}
				}
				if (!PED::IS_PED_INJURED(func_130()) && !ENTITY::IS_ENTITY_DEAD(Local_3032[0 /*2*/]))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(func_130(), 567490903) != 1)
					{
						TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(func_130(), Local_3032[0 /*2*/], 11.2359f, 547.3271f, 174.8878f, 10f, 1074528293, 3f);
					}
				}
			}
			if ((!iLocal_3397 && !iLocal_3398) && !iLocal_3399)
			{
				if (bLocal_3394)
				{
					if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 1 || STREAMING::GET_PLAYER_SWITCH_TYPE() == 2)
					{
						if (STREAMING::GET_PLAYER_SWITCH_STATE() == 8)
						{
							if (STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() > 0)
							{
								MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(Local_3356.f_12, 1), 100f, 0, 0, 0, 0, 0);
								if (Local_3356.f_12 == func_130())
								{
									VEHICLE::_0x88BC673CA9E0AE99(Local_3032[0 /*2*/], 1);
									VEHICLE::_0xBE5C1255A1830FF5(Local_3032[0 /*2*/], 1);
								}
								else if (Local_3356.f_12 == func_129())
								{
									if (GlobalFunc_2773(Local_3032[1 /*2*/]))
									{
										VEHICLE::_0x88BC673CA9E0AE99(Local_3032[1 /*2*/], 1);
										VEHICLE::_0xBE5C1255A1830FF5(Local_3032[1 /*2*/], 1);
									}
								}
							}
							switch (iLocal_3396)
							{
								case 0:
									if (STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() == 1)
									{
										if (Local_3356.f_12 == func_130())
										{
											if (GlobalFunc_2773(Local_3032[0 /*2*/]) && PED::IS_PED_IN_VEHICLE(Local_3356.f_12, Local_3032[0 /*2*/], 0))
											{
												if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[0 /*2*/]))
												{
													VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_3032[0 /*2*/], ((fLocal_3393 - 5000f) - VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3032[0 /*2*/])));
												}
												else
												{
													if (iLocal_5435 == 0)
													{
														VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3032[0 /*2*/], 1, "FH1RECMIKE", 1);
													}
													else if (iLocal_5435 == 1)
													{
														if (iLocal_5436 == 0)
														{
															VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3032[0 /*2*/], 1, "FH1RECMIKE", 1);
														}
														else
														{
															VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3032[0 /*2*/], 2, "FH1RECMIKE", 1);
														}
													}
													else if (iLocal_5435 == 6)
													{
														VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3032[0 /*2*/], 3, "FH1RECMIKE", 1);
													}
													if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[0 /*2*/]))
													{
														VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_3032[0 /*2*/], (fLocal_3393 - 5000f));
													}
												}
												if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[0 /*2*/]))
												{
													VEHICLE::SET_PLAYBACK_SPEED(Local_3032[0 /*2*/], 0.5f);
													VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_3032[0 /*2*/], 1);
												}
											}
										}
										else if (Local_3356.f_12 == func_129())
										{
											if (GlobalFunc_2773(Local_3032[1 /*2*/]) && PED::IS_PED_IN_VEHICLE(Local_3356.f_12, Local_3032[1 /*2*/], 0))
											{
												if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[1 /*2*/]))
												{
													VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_3032[1 /*2*/], ((fLocal_3393 - 5000f) - VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3032[1 /*2*/])));
												}
												else
												{
													VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3032[1 /*2*/], 3, "FH1REC", 1);
													VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_3032[1 /*2*/], (fLocal_3393 - 5000f));
												}
												VEHICLE::SET_PLAYBACK_SPEED(Local_3032[1 /*2*/], 0.5f);
												VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_3032[1 /*2*/], 1);
											}
											if (GlobalFunc_2773(Local_3032[2 /*2*/]) && PED::IS_PED_IN_VEHICLE(Local_3356.f_12, Local_3032[2 /*2*/], 0))
											{
												if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[2 /*2*/]))
												{
													VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_3032[2 /*2*/], ((fLocal_3393 - 5000f) - VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3032[2 /*2*/])));
												}
												else
												{
													if (iLocal_5435 == 6)
													{
														VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3032[2 /*2*/], 5, "FH1REC", 1);
													}
													else
													{
														VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3032[2 /*2*/], 4, "FH1REC", 1);
													}
													VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_3032[2 /*2*/], (fLocal_3393 - 5000f));
												}
												VEHICLE::SET_PLAYBACK_SPEED(Local_3032[2 /*2*/], 0.5f);
												VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_3032[2 /*2*/], 1);
											}
										}
										iLocal_3396++;
									}
									else if (STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() == 0)
									{
										iLocal_3396++;
									}
									break;
								
								case 1:
									if (STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() == 0)
									{
										if (Local_3356.f_12 == func_130())
										{
											if (GlobalFunc_2773(Local_3032[0 /*2*/]) && PED::IS_PED_IN_VEHICLE(Local_3356.f_12, Local_3032[0 /*2*/], 0))
											{
												if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[0 /*2*/]))
												{
													VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_3032[0 /*2*/], (fLocal_3393 - VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3032[0 /*2*/])));
												}
												else
												{
													if (iLocal_5435 == 0)
													{
														VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3032[0 /*2*/], 1, "FH1RECMIKE", 1);
													}
													else if (iLocal_5435 == 1)
													{
														if (iLocal_5436 == 0)
														{
															VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3032[0 /*2*/], 1, "FH1RECMIKE", 1);
														}
														else
														{
															VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3032[0 /*2*/], 2, "FH1RECMIKE", 1);
														}
													}
													else if (iLocal_5435 == 6)
													{
														VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3032[0 /*2*/], 3, "FH1RECMIKE", 1);
													}
													if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[0 /*2*/]))
													{
														VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_3032[0 /*2*/], fLocal_3393);
													}
												}
												if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[0 /*2*/]))
												{
													VEHICLE::SET_PLAYBACK_SPEED(Local_3032[0 /*2*/], 1.2f);
													VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_3032[0 /*2*/], 1);
												}
											}
										}
										else if (Local_3356.f_12 == func_129())
										{
											if (GlobalFunc_2773(Local_3032[1 /*2*/]) && PED::IS_PED_IN_VEHICLE(Local_3356.f_12, Local_3032[1 /*2*/], 0))
											{
												if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[1 /*2*/]))
												{
													VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_3032[1 /*2*/], (fLocal_3393 - VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3032[1 /*2*/])));
												}
												else
												{
													VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3032[1 /*2*/], 3, "FH1REC", 1);
													VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_3032[1 /*2*/], fLocal_3393);
												}
												VEHICLE::SET_PLAYBACK_SPEED(Local_3032[1 /*2*/], 0.5f);
												VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_3032[1 /*2*/], 1);
											}
											if (GlobalFunc_2773(Local_3032[2 /*2*/]) && PED::IS_PED_IN_VEHICLE(Local_3356.f_12, Local_3032[2 /*2*/], 0))
											{
												if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[2 /*2*/]))
												{
													VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_3032[2 /*2*/], (fLocal_3393 - VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3032[2 /*2*/])));
												}
												else
												{
													if (iLocal_5435 == 6)
													{
														VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3032[2 /*2*/], 5, "FH1REC", 1);
													}
													else
													{
														VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3032[2 /*2*/], 4, "FH1REC", 1);
													}
													VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_3032[2 /*2*/], fLocal_3393);
												}
												VEHICLE::SET_PLAYBACK_SPEED(Local_3032[2 /*2*/], 0.5f);
												VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_3032[2 /*2*/], 1);
											}
										}
										iLocal_3396++;
									}
									break;
								
								case 2:
									if (STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() != 0)
									{
										if (Local_3356.f_12 == func_130())
										{
											if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[0 /*2*/]))
											{
												VEHICLE::SET_PLAYBACK_SPEED(Local_3032[0 /*2*/], 1f);
											}
										}
										else if (Local_3356.f_12 == func_129())
										{
											if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[2 /*2*/]))
											{
												VEHICLE::SET_PLAYBACK_SPEED(Local_3032[2 /*2*/], 1f);
											}
											else if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[1 /*2*/]))
											{
												VEHICLE::SET_PLAYBACK_SPEED(Local_3032[1 /*2*/], 1f);
											}
										}
									}
									break;
								}
							}
					}
				}
				else if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 1 || STREAMING::GET_PLAYER_SWITCH_TYPE() == 2)
				{
					if ((((STREAMING::GET_PLAYER_SWITCH_STATE() == 8 || STREAMING::GET_PLAYER_SWITCH_STATE() == 9) || STREAMING::GET_PLAYER_SWITCH_STATE() == 10) || STREAMING::GET_PLAYER_SWITCH_STATE() == 9) || STREAMING::GET_PLAYER_SWITCH_STATE() == 12)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_3356.f_12, 0))
						{
							ENTITY::FREEZE_ENTITY_POSITION(PED::GET_VEHICLE_PED_IS_IN(Local_3356.f_12, 0), 0);
							if (!PED::IS_PED_IN_FLYING_VEHICLE(Local_3356.f_12))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PED::GET_VEHICLE_PED_IS_IN(Local_3356.f_12, 0));
							}
						}
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(Local_3356.f_12, 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(PED::GET_VEHICLE_PED_IS_IN(Local_3356.f_12, 0), 1);
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_3032[2 /*2*/]))
			{
				if (VEHICLE::IS_HELI_PART_BROKEN(Local_3032[2 /*2*/], 1, 1, 1))
				{
					VEHICLE::SET_VEHICLE_FIXED(Local_3032[2 /*2*/]);
				}
			}
		}
		if (iVar3 == 1)
		{
			if (GlobalFunc_2773(Local_3032[1 /*2*/]))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[1 /*2*/]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3032[1 /*2*/]);
				}
			}
			if (GlobalFunc_2773(Local_3032[2 /*2*/]))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[2 /*2*/]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3032[2 /*2*/]);
				}
			}
			if (GlobalFunc_2773(Local_3032[0 /*2*/]))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3032[0 /*2*/]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3032[0 /*2*/]);
				}
			}
			if ((!iLocal_3397 && !iLocal_3398) && !iLocal_3399)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			else if (CAM::DOES_CAM_EXIST(Local_7925.f_1))
			{
				if (!CAM::IS_CAM_ACTIVE(Local_7925.f_1))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					iLocal_9215 = 0;
				}
			}
			iLocal_3397 = 0;
			iLocal_3398 = 0;
			iLocal_3399 = 0;
			if (CAM::DOES_CAM_EXIST(Local_7925.f_1))
			{
				if (!CAM::IS_CAM_ACTIVE(Local_7925.f_1))
				{
					CAM::RENDER_SCRIPT_CAMS(false, 1, 3000, 1, 0, 0);
				}
			}
			else
			{
				CAM::RENDER_SCRIPT_CAMS(false, 1, 3000, 1, 0, 0);
			}
			AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
			iLocal_3391 = MISC::GET_GAME_TIMER();
			CLOCK::PAUSE_CLOCK(0);
			GlobalFunc_5652(&Local_3261, 1, 0);
			GlobalFunc_7139(&Local_3261, 0);
			GlobalFunc_5883(&Local_3356);
			func_8(0);
			if (PLAYER::PLAYER_PED_ID() == func_129())
			{
				if (iLocal_5435 < 4)
				{
					if (iLocal_3294 == 0)
					{
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_SWITCH_TO_TREVOR"))
						{
							AUDIO::START_AUDIO_SCENE("BS_1_SWITCH_TO_TREVOR");
						}
					}
					else if (iLocal_3294 == 1)
					{
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_FLY_TO_TRUCKS"))
						{
							AUDIO::START_AUDIO_SCENE("BS_1_FLY_TO_TRUCKS");
						}
					}
				}
				if (GlobalFunc_2773(Local_3032[2 /*2*/]))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Local_3032[2 /*2*/], 0);
				}
			}
			else if ((GlobalFunc_2773(Local_3032[2 /*2*/]) && GlobalFunc_2773(func_129())) && GlobalFunc_2773(func_196()))
			{
				if (ENTITY::GET_ENTITY_HEALTH(Local_3032[2 /*2*/]) < 700)
				{
					ENTITY::SET_ENTITY_HEALTH(Local_3032[2 /*2*/], 700);
				}
				if (VEHICLE::IS_HELI_PART_BROKEN(Local_3032[2 /*2*/], 1, 1, 1))
				{
					VEHICLE::SET_VEHICLE_FIXED(Local_3032[2 /*2*/]);
				}
				if (PED::IS_PED_IN_VEHICLE(func_129(), Local_3032[2 /*2*/], 0) && PED::IS_PED_IN_VEHICLE(func_196(), Local_3032[2 /*2*/], 0))
				{
					Var4 = { ENTITY::GET_ENTITY_COORDS(Local_3032[2 /*2*/], 1) };
					if ((ENTITY::IS_ENTITY_OCCLUDED(Local_3032[2 /*2*/]) && !ENTITY::IS_ENTITY_ON_SCREEN(Local_3032[2 /*2*/])) && Var4.f_2 < 300f)
					{
						ENTITY::SET_ENTITY_COORDS(Local_3032[2 /*2*/], Var4 + Vector(200f, 0f, 0f), 1, 1, 0, 1);
						VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_3032[2 /*2*/]);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_3032[2 /*2*/], 1, 1);
					}
				}
				ENTITY::SET_ENTITY_INVINCIBLE(Local_3032[2 /*2*/], 1);
			}
			if (GlobalFunc_2773(func_130()))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(func_130(), 0);
			}
			if (GlobalFunc_2773(func_196()))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(func_196(), 0);
			}
			if (GlobalFunc_2773(func_129()))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(func_129(), 0);
			}
			if (GlobalFunc_2773(func_127()))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(func_127(), 0);
			}
			if (GlobalFunc_2773(Local_3032[2 /*2*/]))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(Local_3032[2 /*2*/], 0);
			}
			if (GlobalFunc_2773(Local_3032[1 /*2*/]))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(Local_3032[1 /*2*/], 0);
			}
			if (GlobalFunc_2773(Local_3032[0 /*2*/]))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(Local_3032[0 /*2*/], 0);
			}
		}
	}
}



int func_592()//Position - 0x4FC9F
{
	int iVar0;
	
	if (!Local_3356.f_20)
	{
		return 0;
	}
	else if (Local_3356.f_20)
	{
		if (iLocal_3399)
		{
			if (func_612(&Local_7925, 1))
			{
				Local_3356.f_20 = 0;
				return 1;
			}
			else
			{
				return 2;
			}
		}
		else if (iLocal_3398)
		{
			if (func_462(&uLocal_6684, 1))
			{
				Local_3356.f_20 = 0;
				return 1;
			}
			else
			{
				return 2;
			}
		}
		else if (iLocal_3397)
		{
			if (func_497(&uLocal_5443, 1))
			{
				Local_3356.f_20 = 0;
				return 1;
			}
			else
			{
				return 2;
			}
		}
		else
		{
			iVar0 = 0;
			if (bLocal_3394 && CAM::DOES_CAM_EXIST(Local_3356.f_10))
			{
				if (func_611(&Local_3356, Local_3356.f_10, 0, iVar0, 1148829696, 1148829696, 0, 0, 0, 2))
				{
					return 2;
				}
				else
				{
					Local_3356.f_20 = 0;
					return 1;
				}
			}
			else
			{
				switch (iLocal_3390)
				{
					case 0:
						if (GlobalFunc_156(func_129(), func_130(), 1) < 100f)
						{
							iLocal_3390 = 1;
						}
						else
						{
							iLocal_3390 = 2;
						}
						break;
					
					case 1:
						if (func_593(&Local_3356, 3, iVar0, 1148829696, 1148829696, 0, 0, 0, 0, 0))
						{
							return 2;
						}
						else
						{
							Local_3356.f_20 = 0;
							iLocal_3390 = 0;
							return 1;
						}
						break;
					
					case 2:
						if (func_593(&Local_3356, 0, iVar0, 1148829696, 1148829696, 0, 0, 0, 0, 0))
						{
							return 2;
						}
						else
						{
							Local_3356.f_20 = 0;
							iLocal_3390 = 0;
							return 1;
						}
						break;
					}
				}
			}
	}
	return 0;
}

int func_593(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, int iParam9)//Position - 0x4FE20
{
	return GlobalFunc_9227(uParam0, 0, iParam1, iParam2, fParam3, fParam4, bParam5, bParam6, iParam7, 2, 0, bParam8, iParam9);
	return 1;
}


















int func_611(var uParam0, var uParam1, int iParam2, int iParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x50765
{
	return GlobalFunc_9227(uParam0, uParam1, iParam2, iParam3, fParam4, fParam5, bParam6, bParam7, iParam8, iParam9, 0, 0, 0);
	return 1;
}

int func_612(var uParam0, bool bParam1)//Position - 0x5078C
{
	int iVar0;
	
	switch (iLocal_5442)
	{
		case 0:
			break;
		
		case 1:
			STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_9210, fLocal_9209, 0);
			break;
		
		case 3:
			CAM::DESTROY_ALL_CAMS(0);
			func_613(uParam0, &(Local_3051[2 /*4*/]), &(Local_3051[0 /*4*/]));
			STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_9210, fLocal_9209, 2);
			TASK::TASK_PLAY_ANIM(Local_3051[2 /*4*/], cLocal_9224, "mid_mission_inside_helicopter_trevor", 1000f, -2f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(Local_3051[3 /*4*/], cLocal_9224, "mid_mission_inside_helicopter_lester", 1000f, -2f, -1, 0, 0, 0, 0, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_3051[3 /*4*/], 0, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_3051[2 /*4*/], 0, 0);
			VEHICLE::ROLL_DOWN_WINDOW(Local_3032[0 /*2*/], 0);
			VEHICLE::ROLL_DOWN_WINDOW(Local_3032[0 /*2*/], 1);
			ENTITY::SET_ENTITY_COORDS(Local_3032[2 /*2*/], ENTITY::GET_ENTITY_COORDS(Local_3032[2 /*2*/], 1) + Vector(10f, 0f, 0f), 1, 0, 0, 1);
			VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_3032[2 /*2*/]);
			func_478(uParam0);
			CAM::SET_CAM_ACTIVE(uParam0->f_1, 1);
			CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
			HUD::DISPLAY_RADAR(0);
			HUD::DISPLAY_HUD(0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			iLocal_9225 = 0;
			iLocal_9206 = 0;
			uParam0->f_1232 = 0;
			iLocal_9220 = 0;
			iLocal_9215 = 1;
			ENTITY::SET_ENTITY_COORDS(Local_3032[0 /*2*/], Local_3007, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(Local_3032[0 /*2*/], fLocal_3010);
			STREAMING::SET_GAME_PAUSES_FOR_STREAMING(0);
			VEHICLE::SET_FORCE_HD_VEHICLE(Local_3032[2 /*2*/], 1);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_3032[0 /*2*/], 0);
			iLocal_5442 = 4;
			break;
		
		case 4:
			iVar0 = func_465(uParam0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3032[0 /*2*/], 0))
			{
				ENTITY::SET_ENTITY_COORDS(Local_3032[0 /*2*/], Local_3007, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_3032[0 /*2*/], fLocal_3010);
			}
			if (CAM::IS_CAM_ACTIVE(uParam0->f_1))
			{
				if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) < fLocal_9208)
				{
					STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(0.2f);
				}
				if (!iLocal_9206)
				{
					if (bLocal_9205)
					{
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_9210, fLocal_9209, 2);
						iLocal_9206 = 1;
					}
				}
				if (bLocal_9207)
				{
					if (!Local_3356.f_18)
					{
						if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= fLocal_9208)
						{
							Local_3356.f_18 = 1;
							ENTITY::FREEZE_ENTITY_POSITION(Local_3032[2 /*2*/], 1);
							iLocal_9221 = 1;
						}
					}
				}
				if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 0)
				{
					if (iLocal_9221 == 1)
					{
						iLocal_9221 = 0;
					}
				}
				if (iVar0 >= (uParam0->f_1218 - 1))
				{
					if (!PED::IS_PED_INJURED(Local_3051[1 /*4*/]))
					{
						if (!GlobalFunc_709(Local_3051[1 /*4*/], -2017877118, 1))
						{
							TASK::TASK_PLAY_ANIM(Local_3051[1 /*4*/], cLocal_9223, "bss_1_mcs_2_leadin_fra", 1000f, -8f, -1, 1, 0, 0, 0, 0);
						}
					}
					if (!PED::IS_PED_INJURED(Local_3051[0 /*4*/]))
					{
						if (!GlobalFunc_709(Local_3051[0 /*4*/], -2017877118, 1))
						{
							TASK::TASK_PLAY_ANIM(Local_3051[0 /*4*/], cLocal_9223, "bss_1_mcs_2_leadin_mic", 1000f, -8f, -1, 1, 0, 0, 0, 0);
						}
					}
				}
				if (!iLocal_9220)
				{
					if (iVar0 >= uParam0->f_1218)
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
						SYSTEM::WAIT(0);
						uLocal_9219 = STREAMING::STREAMVOL_CREATE_FRUSTUM(-111.2f, -638.1f, 36.5f, 0.9f, -1.6f, 0f, 350f, 12, 127);
						STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3032[2 /*2*/], 0))
						{
							VEHICLE::SET_FORCE_HD_VEHICLE(Local_3032[2 /*2*/], 0);
						}
						iLocal_9220 = 1;
					}
				}
				if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= 1f)
				{
					iLocal_5442 = 10;
				}
			}
			break;
		
		case 10:
			MISC::SET_TIME_SCALE(1f);
			SYSTEM::SETTIMERA(0);
			STREAMING::STREAMVOL_DELETE(uLocal_9219);
			ENTITY::FREEZE_ENTITY_POSITION(Local_3032[2 /*2*/], 0);
			iLocal_5442 = 0;
			uParam0->f_1232 = 1;
			Local_3356.f_20 = 0;
			STREAMING::SET_RENDER_HD_ONLY(0);
			STREAMING::SET_GAME_PAUSES_FOR_STREAMING(1);
			GlobalFunc_671(3, 3, 0, 0);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_3032[0 /*2*/], 1);
			GlobalFunc_4935();
			iLocal_9221 = 0;
			if (!CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
				if (GlobalFunc_3000(uParam0))
				{
					GlobalFunc_2999(uParam0);
					STREAMING::REMOVE_ANIM_DICT(cLocal_9224);
					STREAMING::REMOVE_ANIM_DICT(cLocal_9223);
					func_464();
				}
			}
			iLocal_9213 = 1;
			return 1;
			break;
	}
	if (bParam1)
	{
		return 0;
	}
	return uParam0->f_1232;
}

void func_613(var uParam0, var uParam1, var uParam2)//Position - 0x50B89
{
	if (!*uParam0)
	{
		uParam0->f_10[0 /*57*/].f_2 = 0;
		uParam0->f_10[0 /*57*/].f_3 = -1;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { -1.3574f, 1.8668f, -0.2382f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 0f;
		uParam0->f_10[0 /*57*/].f_16 = 0f;
		uParam0->f_10[0 /*57*/].f_17 = 0;
		uParam0->f_10[0 /*57*/].f_9 = { 0.0874f, 0.1445f, 0.2509f };
		uParam0->f_10[0 /*57*/].f_18 = 1;
		uParam0->f_10[0 /*57*/].f_19 = 1;
		uParam0->f_10[0 /*57*/].f_20 = 1;
		uParam0->f_10[0 /*57*/].f_21 = 30f;
		uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_27 = 0;
		uParam0->f_10[0 /*57*/].f_50 = 0;
		uParam0->f_10[0 /*57*/].f_51 = 0f;
		uParam0->f_10[0 /*57*/].f_52 = 0f;
		uParam0->f_10[0 /*57*/].f_22 = 0f;
		uParam0->f_10[0 /*57*/].f_53 = 0;
		uParam0->f_10[0 /*57*/].f_23 = 0f;
		uParam0->f_10[0 /*57*/].f_28 = 0;
		uParam0->f_10[0 /*57*/].f_29 = 0f;
		uParam0->f_10[0 /*57*/].f_32 = 0f;
		uParam0->f_10[0 /*57*/].f_30 = 1;
		uParam0->f_10[0 /*57*/].f_31 = 0;
		uParam0->f_10[0 /*57*/].f_33 = 1f;
		uParam0->f_10[0 /*57*/].f_34 = 0;
		uParam0->f_10[0 /*57*/].f_35 = 0f;
		uParam0->f_10[0 /*57*/].f_36 = 0;
		uParam0->f_10[0 /*57*/].f_37 = 0;
		uParam0->f_10[0 /*57*/].f_39 = 0f;
		uParam0->f_10[0 /*57*/].f_40 = 0f;
		uParam0->f_10[0 /*57*/].f_41 = 0;
		uParam0->f_10[0 /*57*/].f_42 = 0;
		uParam0->f_10[0 /*57*/].f_43 = 0;
		uParam0->f_10[0 /*57*/].f_38 = 0f;
		uParam0->f_10[0 /*57*/].f_45 = 1;
		uParam0->f_10[0 /*57*/].f_46 = 1;
		uParam0->f_10[0 /*57*/].f_47 = 0.06f;
		uParam0->f_10[0 /*57*/].f_47.f_1 = 10f;
		uParam0->f_10[0 /*57*/].f_47.f_2 = 1f;
		uParam0->f_10[1 /*57*/].f_2 = 0;
		uParam0->f_10[1 /*57*/].f_3 = -1;
		uParam0->f_10[1 /*57*/].f_4 = 0;
		uParam0->f_10[1 /*57*/].f_5 = 1500;
		uParam0->f_10[1 /*57*/].f_6 = { -1.413f, 1.5631f, 0.1155f };
		uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_12 = 0f;
		uParam0->f_10[1 /*57*/].f_16 = 0f;
		uParam0->f_10[1 /*57*/].f_17 = 0;
		uParam0->f_10[1 /*57*/].f_9 = { -0.0956f, 0.0073f, 0.4327f };
		uParam0->f_10[1 /*57*/].f_18 = 1;
		uParam0->f_10[1 /*57*/].f_19 = 1;
		uParam0->f_10[1 /*57*/].f_20 = 1;
		uParam0->f_10[1 /*57*/].f_21 = 30f;
		uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_27 = 0;
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 1f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0f;
		uParam0->f_10[1 /*57*/].f_53 = 0;
		uParam0->f_10[1 /*57*/].f_23 = 0f;
		uParam0->f_10[1 /*57*/].f_28 = 2;
		uParam0->f_10[1 /*57*/].f_29 = 1f;
		uParam0->f_10[1 /*57*/].f_32 = 0f;
		uParam0->f_10[1 /*57*/].f_30 = 1;
		uParam0->f_10[1 /*57*/].f_31 = 0;
		uParam0->f_10[1 /*57*/].f_33 = 1f;
		uParam0->f_10[1 /*57*/].f_34 = 0;
		uParam0->f_10[1 /*57*/].f_35 = 0f;
		uParam0->f_10[1 /*57*/].f_36 = 1;
		uParam0->f_10[1 /*57*/].f_37 = 14;
		uParam0->f_10[1 /*57*/].f_39 = 0f;
		uParam0->f_10[1 /*57*/].f_40 = 0f;
		uParam0->f_10[1 /*57*/].f_41 = 0;
		uParam0->f_10[1 /*57*/].f_42 = 0;
		uParam0->f_10[1 /*57*/].f_43 = 0;
		uParam0->f_10[1 /*57*/].f_38 = 0.99f;
		uParam0->f_10[1 /*57*/].f_45 = 1;
		uParam0->f_10[1 /*57*/].f_46 = 1;
		uParam0->f_10[1 /*57*/].f_47 = 0.1f;
		uParam0->f_10[1 /*57*/].f_47.f_1 = 16f;
		uParam0->f_10[1 /*57*/].f_47.f_2 = 1f;
		uParam0->f_10[2 /*57*/].f_2 = 0;
		uParam0->f_10[2 /*57*/].f_3 = -1;
		uParam0->f_10[2 /*57*/].f_4 = 0;
		uParam0->f_10[2 /*57*/].f_5 = 600;
		uParam0->f_10[2 /*57*/].f_6 = { -1.7076f, 2.1871f, 2.7493f };
		uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_12 = 0f;
		uParam0->f_10[2 /*57*/].f_16 = 0f;
		uParam0->f_10[2 /*57*/].f_17 = 0;
		uParam0->f_10[2 /*57*/].f_9 = { -0.4081f, 0.4474f, 3.163f };
		uParam0->f_10[2 /*57*/].f_18 = 1;
		uParam0->f_10[2 /*57*/].f_19 = 1;
		uParam0->f_10[2 /*57*/].f_20 = 1;
		uParam0->f_10[2 /*57*/].f_21 = 30f;
		uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_27 = 0;
		uParam0->f_10[2 /*57*/].f_50 = 0;
		uParam0->f_10[2 /*57*/].f_51 = 1f;
		uParam0->f_10[2 /*57*/].f_52 = 0f;
		uParam0->f_10[2 /*57*/].f_22 = 0.3f;
		uParam0->f_10[2 /*57*/].f_53 = 0;
		uParam0->f_10[2 /*57*/].f_23 = 0f;
		uParam0->f_10[2 /*57*/].f_28 = 1;
		uParam0->f_10[2 /*57*/].f_29 = 0.5f;
		uParam0->f_10[2 /*57*/].f_32 = 0f;
		uParam0->f_10[2 /*57*/].f_30 = 1;
		uParam0->f_10[2 /*57*/].f_31 = 0;
		uParam0->f_10[2 /*57*/].f_33 = 1f;
		uParam0->f_10[2 /*57*/].f_34 = 0;
		uParam0->f_10[2 /*57*/].f_35 = 0f;
		uParam0->f_10[2 /*57*/].f_36 = 1;
		uParam0->f_10[2 /*57*/].f_37 = 8;
		uParam0->f_10[2 /*57*/].f_39 = 0f;
		uParam0->f_10[2 /*57*/].f_40 = 0f;
		uParam0->f_10[2 /*57*/].f_41 = 0;
		uParam0->f_10[2 /*57*/].f_42 = 0;
		uParam0->f_10[2 /*57*/].f_43 = 0;
		uParam0->f_10[2 /*57*/].f_38 = 0.4f;
		uParam0->f_10[2 /*57*/].f_45 = 1;
		uParam0->f_10[2 /*57*/].f_46 = 1;
		uParam0->f_10[2 /*57*/].f_47 = 0.17f;
		uParam0->f_10[2 /*57*/].f_47.f_1 = 20f;
		uParam0->f_10[2 /*57*/].f_47.f_2 = 1f;
		uParam0->f_10[3 /*57*/].f_54 = 1;
		uParam0->f_10[4 /*57*/].f_2 = 0;
		uParam0->f_10[4 /*57*/].f_3 = -1;
		uParam0->f_10[4 /*57*/].f_4 = 0;
		uParam0->f_10[4 /*57*/].f_5 = 0;
		uParam0->f_10[4 /*57*/].f_6 = { 2.6577f, 0.8505f, -0.003f };
		uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_12 = 0f;
		uParam0->f_10[4 /*57*/].f_16 = 0f;
		uParam0->f_10[4 /*57*/].f_17 = 0;
		uParam0->f_10[4 /*57*/].f_9 = { -4.2795f, 0f, 113.5217f };
		uParam0->f_10[4 /*57*/].f_18 = 0;
		uParam0->f_10[4 /*57*/].f_19 = 0;
		uParam0->f_10[4 /*57*/].f_20 = 0;
		uParam0->f_10[4 /*57*/].f_21 = 40f;
		uParam0->f_10[4 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_27 = 0;
		uParam0->f_10[4 /*57*/].f_50 = 0;
		uParam0->f_10[4 /*57*/].f_51 = 1f;
		uParam0->f_10[4 /*57*/].f_52 = 0f;
		uParam0->f_10[4 /*57*/].f_22 = 0.3f;
		uParam0->f_10[4 /*57*/].f_53 = 2;
		uParam0->f_10[4 /*57*/].f_23 = 0.15f;
		uParam0->f_10[4 /*57*/].f_28 = 1;
		uParam0->f_10[4 /*57*/].f_29 = 1f;
		uParam0->f_10[4 /*57*/].f_32 = 0f;
		uParam0->f_10[4 /*57*/].f_30 = 1;
		uParam0->f_10[4 /*57*/].f_31 = 0;
		uParam0->f_10[4 /*57*/].f_33 = 1f;
		uParam0->f_10[4 /*57*/].f_34 = 0;
		uParam0->f_10[4 /*57*/].f_35 = 0f;
		uParam0->f_10[4 /*57*/].f_36 = 0;
		uParam0->f_10[4 /*57*/].f_37 = 0;
		uParam0->f_10[4 /*57*/].f_39 = 0f;
		uParam0->f_10[4 /*57*/].f_40 = 0f;
		uParam0->f_10[4 /*57*/].f_41 = 0;
		uParam0->f_10[4 /*57*/].f_42 = 0;
		uParam0->f_10[4 /*57*/].f_43 = 0;
		uParam0->f_10[4 /*57*/].f_38 = 0f;
		uParam0->f_10[4 /*57*/].f_45 = 1;
		uParam0->f_10[4 /*57*/].f_46 = 0;
		uParam0->f_10[4 /*57*/].f_47 = 0f;
		uParam0->f_10[4 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[4 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[5 /*57*/].f_2 = 0;
		uParam0->f_10[5 /*57*/].f_3 = -1;
		uParam0->f_10[5 /*57*/].f_4 = 0;
		uParam0->f_10[5 /*57*/].f_5 = 500;
		uParam0->f_10[5 /*57*/].f_6 = { 2.6138f, 0.8314f, 0.6365f };
		uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_12 = 0f;
		uParam0->f_10[5 /*57*/].f_16 = 0f;
		uParam0->f_10[5 /*57*/].f_17 = 0;
		uParam0->f_10[5 /*57*/].f_9 = { -4.2795f, 0f, 113.5217f };
		uParam0->f_10[5 /*57*/].f_18 = 0;
		uParam0->f_10[5 /*57*/].f_19 = 0;
		uParam0->f_10[5 /*57*/].f_20 = 0;
		uParam0->f_10[5 /*57*/].f_21 = 40f;
		uParam0->f_10[5 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_27 = 0;
		uParam0->f_10[5 /*57*/].f_50 = 0;
		uParam0->f_10[5 /*57*/].f_51 = 0f;
		uParam0->f_10[5 /*57*/].f_52 = 0f;
		uParam0->f_10[5 /*57*/].f_22 = 0f;
		uParam0->f_10[5 /*57*/].f_53 = 2;
		uParam0->f_10[5 /*57*/].f_23 = 0.15f;
		uParam0->f_10[5 /*57*/].f_28 = 1;
		uParam0->f_10[5 /*57*/].f_29 = 0.9f;
		uParam0->f_10[5 /*57*/].f_32 = 0f;
		uParam0->f_10[5 /*57*/].f_30 = 1;
		uParam0->f_10[5 /*57*/].f_31 = 0;
		uParam0->f_10[5 /*57*/].f_33 = 1f;
		uParam0->f_10[5 /*57*/].f_34 = 0;
		uParam0->f_10[5 /*57*/].f_35 = 0f;
		uParam0->f_10[5 /*57*/].f_36 = 0;
		uParam0->f_10[5 /*57*/].f_37 = 0;
		uParam0->f_10[5 /*57*/].f_39 = 0f;
		uParam0->f_10[5 /*57*/].f_40 = 0f;
		uParam0->f_10[5 /*57*/].f_41 = 0;
		uParam0->f_10[5 /*57*/].f_42 = 0;
		uParam0->f_10[5 /*57*/].f_43 = 0;
		uParam0->f_10[5 /*57*/].f_38 = 0f;
		uParam0->f_10[5 /*57*/].f_45 = 1;
		uParam0->f_10[5 /*57*/].f_46 = 0;
		uParam0->f_10[5 /*57*/].f_47 = 0f;
		uParam0->f_10[5 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[5 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[6 /*57*/].f_2 = 0;
		uParam0->f_10[6 /*57*/].f_3 = -1;
		uParam0->f_10[6 /*57*/].f_4 = 0;
		uParam0->f_10[6 /*57*/].f_5 = 1000;
		uParam0->f_10[6 /*57*/].f_6 = { 2.5496f, 0.8035f, 0.6313f };
		uParam0->f_10[6 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_12 = 0f;
		uParam0->f_10[6 /*57*/].f_16 = 0f;
		uParam0->f_10[6 /*57*/].f_17 = 0;
		uParam0->f_10[6 /*57*/].f_9 = { -4.2795f, 0f, 113.5214f };
		uParam0->f_10[6 /*57*/].f_18 = 0;
		uParam0->f_10[6 /*57*/].f_19 = 0;
		uParam0->f_10[6 /*57*/].f_20 = 0;
		uParam0->f_10[6 /*57*/].f_21 = 40f;
		uParam0->f_10[6 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_27 = 0;
		uParam0->f_10[6 /*57*/].f_50 = 0;
		uParam0->f_10[6 /*57*/].f_51 = 0f;
		uParam0->f_10[6 /*57*/].f_52 = 0f;
		uParam0->f_10[6 /*57*/].f_22 = 0f;
		uParam0->f_10[6 /*57*/].f_53 = 2;
		uParam0->f_10[6 /*57*/].f_23 = 0.2f;
		uParam0->f_10[6 /*57*/].f_28 = 0;
		uParam0->f_10[6 /*57*/].f_29 = 0f;
		uParam0->f_10[6 /*57*/].f_32 = 0f;
		uParam0->f_10[6 /*57*/].f_30 = 1;
		uParam0->f_10[6 /*57*/].f_31 = 0;
		uParam0->f_10[6 /*57*/].f_33 = 1f;
		uParam0->f_10[6 /*57*/].f_34 = 0;
		uParam0->f_10[6 /*57*/].f_35 = 0f;
		uParam0->f_10[6 /*57*/].f_36 = 0;
		uParam0->f_10[6 /*57*/].f_37 = 0;
		uParam0->f_10[6 /*57*/].f_39 = 0f;
		uParam0->f_10[6 /*57*/].f_40 = 0f;
		uParam0->f_10[6 /*57*/].f_41 = 0;
		uParam0->f_10[6 /*57*/].f_42 = 0;
		uParam0->f_10[6 /*57*/].f_43 = 0;
		uParam0->f_10[6 /*57*/].f_38 = 0f;
		uParam0->f_10[6 /*57*/].f_45 = 0;
		uParam0->f_10[6 /*57*/].f_46 = 0;
		uParam0->f_10[6 /*57*/].f_47 = 0f;
		uParam0->f_10[6 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[6 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[7 /*57*/].f_2 = 0;
		uParam0->f_10[7 /*57*/].f_3 = -1;
		uParam0->f_10[7 /*57*/].f_4 = 0;
		uParam0->f_10[7 /*57*/].f_5 = 0;
		uParam0->f_10[7 /*57*/].f_6 = { 3.6208f, 1.1263f, 0.6699f };
		uParam0->f_10[7 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[7 /*57*/].f_12 = 0f;
		uParam0->f_10[7 /*57*/].f_16 = 0f;
		uParam0->f_10[7 /*57*/].f_17 = 0;
		uParam0->f_10[7 /*57*/].f_9 = { -10.0052f, 0f, 104.9732f };
		uParam0->f_10[7 /*57*/].f_18 = 0;
		uParam0->f_10[7 /*57*/].f_19 = 0;
		uParam0->f_10[7 /*57*/].f_20 = 0;
		uParam0->f_10[7 /*57*/].f_21 = 50f;
		uParam0->f_10[7 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[7 /*57*/].f_27 = 0;
		uParam0->f_10[7 /*57*/].f_50 = 0;
		uParam0->f_10[7 /*57*/].f_51 = 0f;
		uParam0->f_10[7 /*57*/].f_52 = 0f;
		uParam0->f_10[7 /*57*/].f_22 = 0f;
		uParam0->f_10[7 /*57*/].f_53 = 2;
		uParam0->f_10[7 /*57*/].f_23 = 0.15f;
		uParam0->f_10[7 /*57*/].f_28 = 0;
		uParam0->f_10[7 /*57*/].f_29 = 0f;
		uParam0->f_10[7 /*57*/].f_32 = 0f;
		uParam0->f_10[7 /*57*/].f_30 = 0;
		uParam0->f_10[7 /*57*/].f_31 = 0;
		uParam0->f_10[7 /*57*/].f_33 = 1f;
		uParam0->f_10[7 /*57*/].f_34 = 0;
		uParam0->f_10[7 /*57*/].f_35 = 0f;
		uParam0->f_10[7 /*57*/].f_36 = 0;
		uParam0->f_10[7 /*57*/].f_37 = 0;
		uParam0->f_10[7 /*57*/].f_39 = 0f;
		uParam0->f_10[7 /*57*/].f_40 = 0f;
		uParam0->f_10[7 /*57*/].f_41 = 0;
		uParam0->f_10[7 /*57*/].f_42 = 0;
		uParam0->f_10[7 /*57*/].f_43 = 0;
		uParam0->f_10[7 /*57*/].f_38 = 0f;
		uParam0->f_10[7 /*57*/].f_45 = 0;
		uParam0->f_10[7 /*57*/].f_46 = 0;
		uParam0->f_10[7 /*57*/].f_47 = 0f;
		uParam0->f_10[7 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[7 /*57*/].f_47.f_2 = 0f;
		uParam0->f_1217 = 8;
		uParam0->f_1218 = 4;
		uParam0->f_1233 = 0.52f;
		uParam0->f_1234 = 0.66f;
		uParam0->f_1235 = 1;
		uParam0->f_1236 = 1;
		uParam0->f_1237 = 0;
		uParam0->f_2 = 1;
		uParam0->f_3 = 0;
		uParam0->f_1219 = 2000;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_BigScore_TrevorInHeliToMichael.txt";
		uParam0->f_1225 = "CameraInfo_BigScore_TrevorInHeliToMichael.xml";
		*uParam0 = 1;
	}
	uParam0->f_7[0] = *uParam1;
	uParam0->f_7[1] = *uParam2;
}

float func_614(struct<3> Param0, int iParam3, char* sParam4, int iParam5)//Position - 0x51969
{
	var uVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	
	uVar0 = VEHICLE::GET_VEHICLE_RECORDING_ID(iParam3, sParam4);
	fVar1 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(uVar0);
	fVar2 = (fVar1 / 2f);
	fVar3 = (fVar1 / 2f);
	iVar4 = 0;
	while (iVar4 <= iParam5)
	{
		if (SYSTEM::VDIST2(Param0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, GlobalFunc_253((fVar2 - fVar3), 0f, fVar1))) < SYSTEM::VDIST2(Param0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, GlobalFunc_253((fVar2 + fVar3), 0f, fVar1))))
		{
			fVar3 = (fVar3 / 2f);
			fVar2 = (fVar2 - fVar3);
		}
		if (SYSTEM::VDIST2(Param0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, GlobalFunc_253((fVar2 - fVar3), 0f, fVar1))) > SYSTEM::VDIST2(Param0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, GlobalFunc_253((fVar2 + fVar3), 0f, fVar1))))
		{
			fVar3 = (fVar3 / 2f);
			fVar2 = (fVar2 + fVar3);
		}
		iVar4++;
	}
	return fVar2;
}


int func_616()//Position - 0x51AD8
{
	if (iLocal_9226)
	{
		if (GlobalFunc_10061(&uLocal_3312, 0, 1))
		{
			if (!GlobalFunc_751(&uLocal_3312, 3))
			{
				Local_3356.f_12 = uLocal_3312[uLocal_3312.f_7];
				return 1;
			}
		}
	}
	else if (GlobalFunc_10061(&uLocal_3312, 1, 1))
	{
		if (!GlobalFunc_751(&uLocal_3312, 3))
		{
			Local_3356.f_12 = uLocal_3312[uLocal_3312.f_7];
			return 1;
		}
	}
	return 0;
}


















void func_634()//Position - 0x53154
{
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		func_635("FH1_TIME", 1, 14, 45, 0, 1);
	}
}

void func_635(char* sParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x53173
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = (iVar0 * 60 + iVar1);
	if (bParam1)
	{
		if (iVar2 >= (iParam2 * 60 + iParam3))
		{
			iParam5 = 6;
		}
	}
	if (!CUTSCENE::IS_CUTSCENE_PLAYING() && !GlobalFunc_116(0))
	{
		func_636(iVar2 * 1000, sParam0, 0, iParam4, -1, 0, 2, 0, iParam5, 0, 0, 0, 0, 0);
	}
}

void func_636(var uParam0, char* sParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x531D0
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (iVar0 == -1)
		{
			if (GlobalFunc_659(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1328872.f_1 = 1;
		GlobalFunc_658(7, iVar0);
		Global_1328872.f_3132[iVar0] = uParam0;
		StringCopy(&(Global_1328872.f_3132.f_9[iVar0 /*16*/]), sParam1, 64);
		Global_1328872.f_3132.f_138[iVar0] = iParam2;
		Global_1328872.f_3132.f_174[iVar0] = uParam3;
		Global_1328872.f_3132.f_147[iVar0] = iParam4;
		Global_1328872.f_3132.f_156[iVar0] = iParam5;
		Global_1328872.f_3132.f_201[iVar0] = iParam6;
		Global_1328872.f_3132.f_210[iVar0] = iParam7;
		Global_1328872.f_3132.f_165[iVar0] = iParam8;
		Global_1328872.f_3132.f_254[iVar0] = iParam9;
		Global_1328872.f_3132.f_263[iVar0] = iParam10;
		Global_1328872.f_3132.f_289[iVar0] = iParam11;
		Global_1328872.f_3132.f_192[iVar0] = iParam12;
		Global_1328872.f_3132.f_219[iVar0] = iParam13;
	}
}



void func_639()//Position - 0x5331C
{
	struct<3> Var0;
	var uVar3;
	
	if (bLocal_5439 == 1)
	{
		if (iLocal_5434 == 0)
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
				}
			}
			else
			{
				func_211(iLocal_5440);
			}
		}
		else if (iLocal_5434 == 3)
		{
			CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			func_819();
			GlobalFunc_762(&uLocal_3547);
			GlobalFunc_7695(20);
			GlobalFunc_76(20);
			if (!GlobalFunc_188())
			{
				func_816(iLocal_5440, &Var0, &uVar3, Global_Mission_Fail_State.f_12[2]);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uVar3);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
				GlobalFunc_5184(&uLocal_3547, Var0, 25f, 0);
			}
			func_218(iLocal_5435, 1);
			while (!GlobalFunc_7725(&uLocal_3547))
			{
				SYSTEM::WAIT(0);
			}
			switch (iLocal_5435)
			{
				case 0:
					func_810();
					break;
				
				case 1:
					func_809();
					break;
				
				case 2:
					func_807();
					break;
				
				case 3:
					func_806();
					break;
				
				case 4:
					func_805();
					break;
				
				case 5:
					func_804();
					break;
				
				case 6:
					func_801();
					break;
				
				case 7:
					func_641();
					break;
			}
			func_640();
			bLocal_5439 = false;
			if (!GlobalFunc_188())
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
		}
	}
}

void func_640()//Position - 0x5347B
{
	PLAYER::SET_MAX_WANTED_LEVEL(2);
	if (ENTITY::DOES_ENTITY_EXIST(func_129()))
	{
		if (PLAYER::PLAYER_PED_ID() != func_129())
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_129(), iLocal_3298);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_130()))
	{
		if (PLAYER::PLAYER_PED_ID() != func_130())
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_130(), iLocal_3298);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_127()))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_127(), iLocal_3298);
	}
	if (GlobalFunc_2773(func_196()))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_196(), iLocal_3298);
		PED::SET_PED_MOVEMENT_CLIPSET(func_196(), "move_lester_CaneUp", 1048576000);
		PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(func_196(), "move_lester_CaneUp");
	}
	if (GlobalFunc_2773(Local_3032[0 /*2*/]))
	{
		ENTITY::SET_ENTITY_COLLISION(Local_3032[0 /*2*/], 1, 0);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_3032[0 /*2*/], 1);
	}
	if (GlobalFunc_2773(Local_3032[1 /*2*/]))
	{
		ENTITY::SET_ENTITY_COLLISION(Local_3032[1 /*2*/], 1, 0);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_3032[1 /*2*/], 1);
	}
	if (PLAYER::PLAYER_PED_ID() == func_130())
	{
		if (GlobalFunc_2773(func_129()))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_129(), 1);
		}
		if (GlobalFunc_2773(func_196()))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_196(), 1);
		}
		if (GlobalFunc_2773(Local_3032[2 /*2*/]))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_3032[2 /*2*/], 1);
		}
		if (GlobalFunc_2773(Local_3032[1 /*2*/]))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_3032[1 /*2*/], 1);
		}
		if (GlobalFunc_2773(func_130()))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_130(), 0);
		}
		if (GlobalFunc_2773(func_127()))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_127(), 0);
		}
		if (GlobalFunc_2773(Local_3032[0 /*2*/]))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_3032[0 /*2*/], 0);
		}
	}
	else if (PLAYER::PLAYER_PED_ID() == func_129())
	{
		if (GlobalFunc_2773(func_129()))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_129(), 0);
		}
		if (GlobalFunc_2773(func_196()))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_196(), 0);
		}
		if (GlobalFunc_2773(Local_3032[2 /*2*/]))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_3032[2 /*2*/], 0);
		}
		if (GlobalFunc_2773(Local_3032[1 /*2*/]))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_3032[1 /*2*/], 0);
		}
		if (GlobalFunc_2773(func_130()))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_130(), 1);
		}
		if (GlobalFunc_2773(func_127()))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_127(), 1);
		}
		if (GlobalFunc_2773(Local_3032[0 /*2*/]))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_3032[0 /*2*/], 1);
		}
	}
	iLocal_3530 = 1;
}

void func_641()//Position - 0x536AA
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (Global_Mission_Fail_State.f_12[2] == 1)
		{
			while (!GlobalFunc_9756(&(Local_3032[1 /*2*/]), 2, 1759.54f, 3290.233f, 40.1387f, 259.1121f, 1, 0))
			{
				SYSTEM::WAIT(0);
			}
			Local_3032[2 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("frogger2"), 1744.394f, 3269.296f, 40.2207f, 359.9513f, 1, 1);
			GlobalFunc_5174(&uLocal_3547, joaat("frogger2"));
			VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_3032[2 /*2*/], 0);
			ENTITY::SET_ENTITY_ALWAYS_PRERENDER(Local_3032[2 /*2*/], 1);
			VEHICLE::SET_VEHICLE_LIVERY(Local_3032[2 /*2*/], 1);
			if (GlobalFunc_188())
			{
				GlobalFunc_4967(Local_3032[2 /*2*/], -1, 1);
			}
			else
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
				PED::SET_PED_INTO_VEHICLE(func_129(), Local_3032[2 /*2*/], -1);
			}
		}
		else
		{
			func_642(1, 1, 1);
			Local_3051[1 /*4*/] = PLAYER::PLAYER_PED_ID();
			if (GlobalFunc_188())
			{
				GlobalFunc_4967(0, -1, 1);
			}
			else
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
	}
	func_3();
}

int func_642(int iParam0, bool bParam1, bool bParam2)//Position - 0x537AA
{
	if (bParam1)
	{
		while (!func_643(iParam0, bParam2))
		{
			SYSTEM::WAIT(0);
		}
	}
	else if (!func_643(iParam0, bParam2))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			Local_3051[0 /*4*/] = PLAYER::PLAYER_PED_ID();
			GlobalFunc_173(&uLocal_3096, 1, func_130(), "MICHAEL", 0, 1);
			break;
		
		case 1:
			Local_3051[1 /*4*/] = PLAYER::PLAYER_PED_ID();
			GlobalFunc_173(&uLocal_3096, 2, func_127(), "FRANKLIN", 0, 1);
			break;
		
		case 2:
			Local_3051[2 /*4*/] = PLAYER::PLAYER_PED_ID();
			GlobalFunc_173(&uLocal_3096, 0, func_129(), "TREVOR", 0, 1);
			break;
	}
	return 1;
}

int func_643(int iParam0, bool bParam1)//Position - 0x53857
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
		func_798(&(Global_17052[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2));
		func_646(&(Global_17052[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_17052.f_7 = iParam0;
	Global_17052.f_39 = 1;
	func_519(&Global_17052, 0, 0, 0);
	GlobalFunc_5124(iParam0);
	return 1;
}



int func_646(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x53A0F
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
			func_790(*uParam0);
			GlobalFunc_7694(*uParam0, 1, 0);
			GlobalFunc_7693(*uParam0);
			GlobalFunc_7707(*uParam0);
			func_648(*uParam0, bParam8);
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


int func_648(int iParam0, bool bParam1)//Position - 0x53B27
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_5101(iVar0))
	{
		GlobalFunc_5100(iVar0, 0);
		func_420(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		func_652(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (GlobalFunc_7997(iParam0))
		{
			GlobalFunc_5100(iVar0, 0);
			func_420(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			func_652(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[120] && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122])
			{
				func_420(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (GlobalFunc_10997(iParam0, 3, 169))
					{
						func_420(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						return 1;
					}
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 6))
			{
				func_420(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_420(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 20))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_420(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 21))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_420(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 22))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_420(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 11))
			{
				func_420(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 10))
			{
				func_420(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 50))
			{
				func_420(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 14, 59))
			{
				func_420(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10997(iParam0, 8, 22))
			{
				func_420(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 14))
			{
				func_420(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_10997(iParam0, 12, 13))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_420(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 14))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_420(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 15))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_420(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 4))
			{
				func_420(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 3))
			{
				func_420(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 14, 82))
			{
				func_420(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10997(iParam0, 8, 76))
			{
				func_420(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 1))
			{
				func_420(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 2:
			if (GlobalFunc_10997(iParam0, 12, 12))
			{
				func_420(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 15))
			{
				func_420(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (GlobalFunc_10997(iParam0, 3, 71))
				{
					func_420(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_420(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 18))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_420(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 19))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_420(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10997(iParam0, 12, 7))
			{
				func_420(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 6))
			{
				func_420(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 14, 88))
			{
				func_420(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10997(iParam0, 8, 17))
			{
				func_420(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10997(iParam0, 12, 11))
			{
				func_420(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
	}
	return 0;
}




void func_652(int iParam0, int iParam1)//Position - 0x54279
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
				iVar1 = GlobalFunc_11122(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					GlobalFunc_521(iVar0);
					func_654(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
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
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[iVar67 /*4*/][iVar0] = GlobalFunc_7150(iParam0, GlobalFunc_33(iVar67));
						iVar67++;
					}
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[iVar67 /*4*/][iVar0] = GlobalFunc_7150(iParam0, GlobalFunc_33(iVar67));
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


void func_654(int iParam0, var uParam1, bool bParam2)//Position - 0x544F1
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
			if (GlobalFunc_11121(iParam0, iVar1, &iVar2, 0))
			{
				func_420(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (GlobalFunc_11120(iParam0, iVar1, &iVar2))
			{
				func_420(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_6784(741, uParam1->f_60, Global_68104, 1);
			GlobalFunc_6784(742, uParam1->f_61, Global_68104, 1);
			iVar4 = GlobalFunc_5668(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			func_657(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			if (!bParam2)
			{
				iVar5 = GlobalFunc_5668(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_657(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
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



int func_657(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x54788
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
								GlobalFunc_309(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
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
				Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iVar0, GlobalFunc_11124(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					uVar41 = { GlobalFunc_7617(iVar5, 0) };
					func_657(iParam0, iVar0, uVar41[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
			GlobalFunc_10761(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar58 = { GlobalFunc_7616(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 14, uVar58[iVar1]) };
			GlobalFunc_309(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
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
						iVar3 = GlobalFunc_11123(iParam0, iVar5, 14, uVar58[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_657(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
			iVar69 = GlobalFunc_7150(iParam0, 1);
			iVar3 = GlobalFunc_11123(iParam0, iVar5, 1, iVar69, 14, Global_68106[1 /*14*/].f_12);
			if (iVar3 != -99 && iVar3 != iParam2)
			{
				iVar7 = GlobalFunc_5013(iVar5, 1, -1);
			}
		}
		GlobalFunc_309(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
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
					iVar3 = GlobalFunc_11123(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_657(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar70 = GlobalFunc_7150(iParam0, 11);
				iVar71 = GlobalFunc_7150(iParam0, 8);
				iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
				{
					iVar9 = GlobalFunc_7150(iParam0, 8);
				}
				iVar72 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar72, joaat("GLOVES"), 3))
				{
					iVar73 = GlobalFunc_6739(iVar5, iVar71, iVar70);
					if (iVar73 == -99)
					{
						iVar73 = GlobalFunc_11123(iParam0, iVar5, 11, iVar70, 3, 0);
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
					iVar70 = GlobalFunc_7150(iParam0, 11);
					if (iVar70 >= 256)
					{
						iVar76 = GlobalFunc_4913(iVar5, iVar70, 11, 4);
					}
					if (iVar70 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("VEST_SHIRT"), 0))
					{
						iVar77 = GlobalFunc_6738(iVar5, iVar70, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar77 != -99)
						{
							func_657(iParam0, 8, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
								func_657(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
									func_657(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
								func_657(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_657(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
			GlobalFunc_10761(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, GlobalFunc_11124(iParam0, 8, -1), iParam2);
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
				GlobalFunc_11275(iParam0, iParam2, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			GlobalFunc_10761(iParam0, iParam1, iParam2, iParam6, 0);
			iVar84 = GlobalFunc_7150(iParam0, 11);
			if (GlobalFunc_6737(iVar5, iVar84))
			{
				iVar85 = GlobalFunc_6736(iVar5, iParam2, Global_68106[1 /*14*/].f_4);
				GlobalFunc_10622(iVar5, iVar85);
			}
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, iParam2, GlobalFunc_7150(iParam0, 11));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar86 = GlobalFunc_7150(iParam0, 7);
				if (!GlobalFunc_8583(iVar5, iVar86, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99))
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
					iVar94 = GlobalFunc_7150(iParam0, 1);
					iVar95 = 0;
					while (iVar95 < 9)
					{
						iVar3 = GlobalFunc_11123(iParam0, iVar5, iParam1, iVar94, 14, iVar95);
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
					iVar3 = GlobalFunc_11123(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_657(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				if (GlobalFunc_7998(iParam0))
				{
					iVar97 = -99;
					iVar97 = GlobalFunc_6730(iVar5, iParam2);
					if (iVar97 > 0)
					{
						iVar97 = (iVar97 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!GlobalFunc_10998(iParam0, 9, iVar97))
						{
							func_657(iParam0, 9, iVar97, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						func_657(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_657(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
					iVar99 = GlobalFunc_11124(iParam0, 4, -1);
					iVar100 = iParam2;
				}
				else
				{
					iVar99 = iParam2;
					iVar100 = GlobalFunc_11124(iParam0, 11, -1);
				}
				if (GlobalFunc_6729(iVar5, 11, iVar100))
				{
					if (!GlobalFunc_6728(iVar5, 4, iVar99))
					{
						if (GlobalFunc_6727(iVar5, 4, iVar99, &uVar101))
						{
							func_657(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
				}
				else if (GlobalFunc_6728(iVar5, 4, iVar99))
				{
					if (GlobalFunc_6726(iVar5, 4, iVar99, &uVar101))
					{
						func_657(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
					iVar3 = GlobalFunc_11123(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_657(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar3 = GlobalFunc_11123(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_657(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (GlobalFunc_11202(iParam0, &uVar4))
		{
			func_657(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	if (iVar6 != -99)
	{
		func_657(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar9 != -99)
	{
		func_657(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar7 != -99)
	{
		func_657(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				func_657(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}





































































































































void func_790(int iParam0)//Position - 0x7FC5C
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
		func_654(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
		if (!Global_89948[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!GlobalFunc_526(49))
				{
					iVar1 = GlobalFunc_11122(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					GlobalFunc_11162(GlobalFunc_4917(0), 12, 16, 0, 0, 0, 0);
				}
				if (!GlobalFunc_526(44))
				{
					iVar1 = GlobalFunc_11122(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = GlobalFunc_11122(iParam0, 4, -1);
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
				iVar1 = GlobalFunc_11122(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				GlobalFunc_521(iVar0);
				func_654(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
			}
		}
		Global_89948[iVar0] = 1;
	}
}








int func_798(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x8066A
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
				func_790(*uParam0);
				GlobalFunc_7694(*uParam0, 1, 0);
				GlobalFunc_7693(*uParam0);
				GlobalFunc_7707(*uParam0);
				func_648(*uParam0, bParam6);
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



void func_801()//Position - 0x80809
{
	func_642(2, 1, 1);
	Local_3051[2 /*4*/] = PLAYER::PLAYER_PED_ID();
	iLocal_3296 = INTERIOR::GET_INTERIOR_AT_COORDS(12.8829f, -634.9265f, 15.0884f);
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_3296))
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_3296);
	}
	Local_3032[2 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("frogger2"), 7.0467f, -614.5734f, 61.0681f, 187.9638f, 1, 1);
	GlobalFunc_5174(&uLocal_3547, joaat("frogger2"));
	VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_3032[2 /*2*/], 0);
	ENTITY::SET_ENTITY_ALWAYS_PRERENDER(Local_3032[2 /*2*/], 1);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_3032[2 /*2*/], 1, 1);
	VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_3032[2 /*2*/]);
	VEHICLE::SET_VEHICLE_LIVERY(Local_3032[2 /*2*/], 1);
	ENTITY::FREEZE_ENTITY_POSITION(Local_3032[2 /*2*/], 1);
	while (!GlobalFunc_7061(&(Local_3051[3 /*4*/]), 12, Local_3032[2 /*2*/], 1, 1))
	{
		SYSTEM::WAIT(0);
	}
	PED::SET_PED_PROP_INDEX(Local_3051[3 /*4*/], 1, 0, 0, false);
	while (!GlobalFunc_9756(&(Local_3032[0 /*2*/]), 0, Local_3007, fLocal_3010, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_798(&(Local_3051[0 /*4*/]), 0, Local_3032[0 /*2*/], -1, 1, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_798(&(Local_3051[1 /*4*/]), 1, Local_3032[0 /*2*/], 0, 1, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	STREAMING::REQUEST_CLIP_SET("move_lester_CaneUp");
	while (!STREAMING::HAS_CLIP_SET_LOADED("move_lester_CaneUp"))
	{
		SYSTEM::WAIT(0);
	}
	if (GlobalFunc_188())
	{
		GlobalFunc_4967(Local_3032[2 /*2*/], -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3032[2 /*2*/], 0))
		{
			PED::SET_PED_INTO_VEHICLE(func_129(), Local_3032[2 /*2*/], -1);
		}
	}
	iLocal_3477 = 4;
	iLocal_3478 = 2;
	func_329(0);
	GlobalFunc_173(&uLocal_3096, 0, func_129(), "TREVOR", 1, 1);
	GlobalFunc_173(&uLocal_3096, 1, func_130(), "MICHAEL", 1, 1);
	GlobalFunc_173(&uLocal_3096, 2, func_127(), "FRANKLIN", 1, 1);
	GlobalFunc_173(&uLocal_3096, 3, func_196(), "LESTER", 1, 1);
	ENTITY::FREEZE_ENTITY_POSITION(Local_3032[2 /*2*/], 0);
	MISC::CLEAR_AREA(59.2427f, -572.2118f, 72.9076f, 300f, 1, 0, 0, 0);
	GlobalFunc_730(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
}



void func_804()//Position - 0x80AF8
{
	func_642(2, 1, 1);
	Local_3051[2 /*4*/] = PLAYER::PLAYER_PED_ID();
	Local_3032[2 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("frogger2"), -76.4238f, -528.6735f, 87.5f, 176.7705f, 1, 1);
	GlobalFunc_5174(&uLocal_3547, joaat("frogger2"));
	VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_3032[2 /*2*/], 0);
	ENTITY::SET_ENTITY_ALWAYS_PRERENDER(Local_3032[2 /*2*/], 1);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_3032[2 /*2*/], 1, 1);
	VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_3032[2 /*2*/]);
	VEHICLE::SET_VEHICLE_LIVERY(Local_3032[2 /*2*/], 1);
	ENTITY::FREEZE_ENTITY_POSITION(Local_3032[2 /*2*/], 1);
	iLocal_3296 = INTERIOR::GET_INTERIOR_AT_COORDS(12.8829f, -634.9265f, 15.0884f);
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_3296))
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_3296);
	}
	while (!INTERIOR::IS_INTERIOR_READY(iLocal_3296))
	{
		SYSTEM::WAIT(0);
	}
	while (!GlobalFunc_7061(&(Local_3051[3 /*4*/]), 12, Local_3032[2 /*2*/], 1, 1))
	{
		SYSTEM::WAIT(0);
	}
	PED::SET_PED_PROP_INDEX(Local_3051[3 /*4*/], 1, 0, 0, false);
	while (!GlobalFunc_9756(&(Local_3032[0 /*2*/]), 0, Local_3007, fLocal_3010, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_798(&(Local_3051[0 /*4*/]), 0, Local_3032[0 /*2*/], -1, 1, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_798(&(Local_3051[1 /*4*/]), 1, Local_3032[0 /*2*/], 0, 1, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	STREAMING::REQUEST_CLIP_SET("move_lester_CaneUp");
	while (!STREAMING::HAS_CLIP_SET_LOADED("move_lester_CaneUp"))
	{
		SYSTEM::WAIT(0);
	}
	if (GlobalFunc_188())
	{
		GlobalFunc_4967(Local_3032[2 /*2*/], -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
		PED::SET_PED_INTO_VEHICLE(func_129(), Local_3032[2 /*2*/], -1);
	}
	ENTITY::FREEZE_ENTITY_POSITION(Local_3032[2 /*2*/], 0);
	func_329(0);
	GlobalFunc_173(&uLocal_3096, 0, func_129(), "TREVOR", 1, 1);
	GlobalFunc_173(&uLocal_3096, 1, func_130(), "MICHAEL", 1, 1);
	GlobalFunc_173(&uLocal_3096, 2, func_127(), "FRANKLIN", 1, 1);
	GlobalFunc_173(&uLocal_3096, 3, func_196(), "LESTER", 1, 1);
	iLocal_3454 = 0;
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	MISC::CLEAR_AREA(-77.3855f, -591.1019f, 94.5943f, 300f, 1, 0, 0, 0);
}

void func_805()//Position - 0x80D25
{
	func_642(2, 1, 1);
	Local_3051[2 /*4*/] = PLAYER::PLAYER_PED_ID();
	Local_3032[2 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("frogger2"), 1095.789f, -1421.151f, 102.4156f, 183.9259f, 1, 1);
	GlobalFunc_5174(&uLocal_3547, joaat("frogger2"));
	VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_3032[2 /*2*/], 0);
	ENTITY::SET_ENTITY_ALWAYS_PRERENDER(Local_3032[2 /*2*/], 1);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_3032[2 /*2*/], 1, 1);
	VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_3032[2 /*2*/]);
	VEHICLE::SET_VEHICLE_LIVERY(Local_3032[2 /*2*/], 1);
	ENTITY::FREEZE_ENTITY_POSITION(Local_3032[2 /*2*/], 1);
	STREAMING::NEW_LOAD_SCENE_START_SPHERE(1079.271f, -1998.505f, 46.6193f, 100f, 0);
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			SYSTEM::WAIT(0);
		}
	}
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "FH1UBER");
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "FH1UBER"))
	{
		SYSTEM::WAIT(0);
	}
	Local_3032[3 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("stockade"), 1025.534f, -1756.005f, 35.2748f, 81.9993f, 1, 1);
	Local_3051[6 /*4*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_3032[3 /*2*/], 26, joaat("s_m_m_armoured_01"), -1, 1, 1);
	PED::SET_PED_COMPONENT_VARIATION(Local_3051[6 /*4*/], 0, 0, 0, 0);
	while (!GlobalFunc_7061(&(Local_3051[3 /*4*/]), 12, Local_3032[2 /*2*/], 1, 1))
	{
		SYSTEM::WAIT(0);
	}
	PED::SET_PED_PROP_INDEX(Local_3051[3 /*4*/], 1, 0, 0, false);
	while (!GlobalFunc_9756(&(Local_3032[0 /*2*/]), 0, Local_3007, fLocal_3010, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_798(&(Local_3051[0 /*4*/]), 0, Local_3032[0 /*2*/], -1, 1, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_798(&(Local_3051[1 /*4*/]), 1, Local_3032[0 /*2*/], 0, 1, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	STREAMING::REQUEST_CLIP_SET("move_lester_CaneUp");
	while (!STREAMING::HAS_CLIP_SET_LOADED("move_lester_CaneUp"))
	{
		SYSTEM::WAIT(0);
	}
	if (GlobalFunc_188())
	{
		GlobalFunc_4967(Local_3032[2 /*2*/], -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
		PED::SET_PED_INTO_VEHICLE(func_129(), Local_3032[2 /*2*/], -1);
	}
	ENTITY::FREEZE_ENTITY_POSITION(Local_3032[2 /*2*/], 0);
	iLocal_3544 = 0;
	bLocal_3403 = true;
	func_329(0);
	GlobalFunc_164("FH1_TRUCK", 7500, 1);
	GlobalFunc_173(&uLocal_3096, 0, func_129(), "TREVOR", 1, 1);
	GlobalFunc_173(&uLocal_3096, 1, func_130(), "MICHAEL", 1, 1);
	GlobalFunc_173(&uLocal_3096, 2, func_127(), "FRANKLIN", 1, 1);
	GlobalFunc_173(&uLocal_3096, 3, func_196(), "LESTER", 1, 1);
	MISC::CLEAR_AREA(1041.849f, -1773.01f, 110.6172f, 300f, 1, 0, 0, 0);
}

void func_806()//Position - 0x80FB6
{
	CLOCK::SET_CLOCK_TIME(14, 0, 0);
	Local_3032[2 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("frogger2"), 1758.309f, 3284.528f, 40.7f, 133.1852f, 1, 1);
	VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_3032[2 /*2*/], 0);
	ENTITY::SET_ENTITY_ALWAYS_PRERENDER(Local_3032[2 /*2*/], 1);
	VEHICLE::SET_VEHICLE_LIVERY(Local_3032[2 /*2*/], 1);
	ENTITY::SET_ENTITY_COLLISION(Local_3032[2 /*2*/], 1, 0);
	ENTITY::FREEZE_ENTITY_POSITION(Local_3032[2 /*2*/], 1);
	GlobalFunc_5174(&uLocal_3547, joaat("frogger2"));
	iLocal_9193 = 1;
	while (!GlobalFunc_9756(&(Local_3032[0 /*2*/]), 0, Local_3007, fLocal_3010, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_798(&(Local_3051[1 /*4*/]), 1, Local_3032[0 /*2*/], 0, 1, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!GlobalFunc_9756(&(Local_3032[1 /*2*/]), 2, 1768.071f, 3293.448f, 40.2011f, 305.798f, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	STREAMING::REQUEST_CLIP_SET("move_lester_CaneUp");
	while (!STREAMING::HAS_CLIP_SET_LOADED("move_lester_CaneUp"))
	{
		SYSTEM::WAIT(0);
	}
	if (Global_Mission_Fail_State.f_12[2] == 0)
	{
		func_642(0, 1, 1);
		Local_3051[0 /*4*/] = PLAYER::PLAYER_PED_ID();
		while (!func_798(&(Local_3051[2 /*4*/]), 2, Local_3032[2 /*2*/], -1, 1, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
		while (!GlobalFunc_7061(&(Local_3051[3 /*4*/]), 12, Local_3032[2 /*2*/], 1, 1))
		{
			SYSTEM::WAIT(0);
		}
		PED::SET_PED_PROP_INDEX(Local_3051[3 /*4*/], 1, 0, 0, false);
		if (GlobalFunc_2773(Local_3032[0 /*2*/]) && GlobalFunc_2773(func_130()))
		{
			if (GlobalFunc_188())
			{
				GlobalFunc_4967(Local_3032[0 /*2*/], -1, 1);
			}
			else
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
				PED::SET_PED_INTO_VEHICLE(func_130(), Local_3032[0 /*2*/], -1);
			}
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
		func_198(0, 1, 0, 0, 0, 0);
		iLocal_3392 = 0;
	}
	else if (Global_Mission_Fail_State.f_12[2] == 1)
	{
		func_642(2, 1, 1);
		Local_3051[2 /*4*/] = PLAYER::PLAYER_PED_ID();
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_FLY_TO_TRUCKS"))
		{
			AUDIO::START_AUDIO_SCENE("BS_1_FLY_TO_TRUCKS");
		}
		while (!func_798(&(Local_3051[0 /*4*/]), 0, Local_3032[0 /*2*/], -1, 1, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
		while (!GlobalFunc_7061(&(Local_3051[3 /*4*/]), 12, Local_3032[2 /*2*/], 1, 1))
		{
			SYSTEM::WAIT(0);
		}
		PED::SET_PED_PROP_INDEX(Local_3051[3 /*4*/], 1, 0, 0, false);
		if (GlobalFunc_2773(Local_3032[2 /*2*/]) && GlobalFunc_2773(func_129()))
		{
			if (GlobalFunc_188())
			{
				GlobalFunc_4967(Local_3032[2 /*2*/], -1, 1);
			}
			else
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
				PED::SET_PED_INTO_VEHICLE(func_129(), Local_3032[2 /*2*/], -1);
			}
		}
		func_198(0, 1, 0, 0, 0, 0);
		iLocal_3392 = 1;
	}
	if (Global_Mission_Fail_State.f_12[1] == 1)
	{
		if ((GlobalFunc_Is_Mission_Retry() && Global_84544) && (Global_Current_Checkpoint == 3 || Global_Current_Checkpoint == 2))
		{
			Global_Mission_Fail_State.f_12[2] = 1;
			iLocal_3392 = 0;
		}
		CLOCK::SET_CLOCK_TIME(14, 15, 0);
		iLocal_3477 = 3;
		iLocal_3431 = 1;
		iLocal_3476 = 3;
	}
	else
	{
		CLOCK::SET_CLOCK_TIME(14, 0, 0);
		iLocal_3477 = 2;
		iLocal_3476 = 2;
	}
	iLocal_3530 = 1;
	func_329(0);
	GlobalFunc_173(&uLocal_3096, 0, func_129(), "TREVOR", 1, 1);
	GlobalFunc_173(&uLocal_3096, 1, func_130(), "MICHAEL", 1, 1);
	GlobalFunc_173(&uLocal_3096, 2, func_127(), "FRANKLIN", 1, 1);
	GlobalFunc_173(&uLocal_3096, 3, func_196(), "LESTER", 1, 1);
	iLocal_3294 = 1;
	iLocal_3478 = 1;
	iLocal_3476 = 3;
	MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 1, 0, 0, 0);
	ENTITY::FREEZE_ENTITY_POSITION(Local_3032[2 /*2*/], 0);
	GlobalFunc_730(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
	GlobalFunc_Checkpoint1(3, "Stage 3: Get in Position", 0, 0, 0, 1);
}

void func_807()//Position - 0x8136D
{
	GlobalFunc_8032(20, 1702.948f, 3272.022f, 40.1539f, 247.3247f);
	GlobalFunc_7695(20);
	GlobalFunc_76(20);
	Local_3032[2 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("frogger2"), 1758.309f, 3284.528f, 40.7f, 133.1852f, 1, 1);
	VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_3032[2 /*2*/], 0);
	ENTITY::SET_ENTITY_ALWAYS_PRERENDER(Local_3032[2 /*2*/], 1);
	VEHICLE::SET_VEHICLE_LIVERY(Local_3032[2 /*2*/], 1);
	ENTITY::SET_ENTITY_COLLISION(Local_3032[2 /*2*/], 1, 0);
	ENTITY::FREEZE_ENTITY_POSITION(Local_3032[2 /*2*/], 1);
	GlobalFunc_5174(&uLocal_3547, joaat("frogger2"));
	while (!GlobalFunc_9756(&(Local_3032[0 /*2*/]), 0, Local_3007, fLocal_3010, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_798(&(Local_3051[1 /*4*/]), 1, Local_3032[0 /*2*/], 0, 1, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!GlobalFunc_9756(&(Local_3032[1 /*2*/]), 2, 1993.624f, 2541.784f, 53.6037f, 318.9926f, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	STREAMING::REQUEST_CLIP_SET("move_lester_CaneUp");
	while (!STREAMING::HAS_CLIP_SET_LOADED("move_lester_CaneUp"))
	{
		SYSTEM::WAIT(0);
	}
	if (Global_Mission_Fail_State.f_12[2] == 0)
	{
		func_642(0, 1, 1);
		Local_3051[0 /*4*/] = PLAYER::PLAYER_PED_ID();
		while (!func_798(&(Local_3051[2 /*4*/]), 2, Local_3032[1 /*2*/], -1, 1, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
		while (!GlobalFunc_7061(&(Local_3051[3 /*4*/]), 12, Local_3032[1 /*2*/], 0, 1))
		{
			SYSTEM::WAIT(0);
		}
		PED::SET_PED_PROP_INDEX(Local_3051[3 /*4*/], 1, 0, 0, false);
		if (GlobalFunc_2773(Local_3032[0 /*2*/]) && GlobalFunc_2773(func_130()))
		{
			if (GlobalFunc_188())
			{
				GlobalFunc_4967(Local_3032[0 /*2*/], -1, 1);
			}
			else
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
				PED::SET_PED_INTO_VEHICLE(func_130(), Local_3032[0 /*2*/], -1);
			}
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
		func_198(0, 1, 0, 0, 0, 0);
		iLocal_3392 = 0;
	}
	else if (Global_Mission_Fail_State.f_12[2] == 1)
	{
		func_642(2, 1, 1);
		Local_3051[2 /*4*/] = PLAYER::PLAYER_PED_ID();
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_SWITCH_TO_TREVOR"))
		{
			AUDIO::START_AUDIO_SCENE("BS_1_SWITCH_TO_TREVOR");
		}
		while (!func_798(&(Local_3051[0 /*4*/]), 0, Local_3032[0 /*2*/], -1, 1, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
		while (!GlobalFunc_7061(&(Local_3051[3 /*4*/]), 12, Local_3032[1 /*2*/], 0, 1))
		{
			SYSTEM::WAIT(0);
		}
		PED::SET_PED_PROP_INDEX(Local_3051[3 /*4*/], 1, 0, 0, false);
		if (GlobalFunc_2773(Local_3032[1 /*2*/]) && GlobalFunc_2773(func_129()))
		{
			if (GlobalFunc_188())
			{
				GlobalFunc_4967(Local_3032[1 /*2*/], -1, 1);
			}
			else
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
				PED::SET_PED_INTO_VEHICLE(func_129(), Local_3032[1 /*2*/], -1);
			}
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_3032[1 /*2*/], 25f);
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_3032[1 /*2*/], 1, 1);
		}
		func_198(0, 1, 0, 0, 0, 0);
		iLocal_3392 = 1;
	}
	if (Global_Mission_Fail_State.f_12[1] == 1)
	{
		if ((GlobalFunc_Is_Mission_Retry() && Global_84544) && (Global_Current_Checkpoint == 3 || Global_Current_Checkpoint == 2))
		{
			Global_Mission_Fail_State.f_12[2] = 1;
			iLocal_3392 = 0;
		}
		CLOCK::SET_CLOCK_TIME(14, 0, 0);
		iLocal_3431 = 1;
		iLocal_3476 = 3;
	}
	else
	{
		iLocal_3476 = 2;
		CLOCK::SET_CLOCK_TIME(13, 45, 0);
	}
	iLocal_3530 = 1;
	func_329(0);
	GlobalFunc_173(&uLocal_3096, 0, func_129(), "TREVOR", 1, 1);
	GlobalFunc_173(&uLocal_3096, 1, func_130(), "MICHAEL", 1, 1);
	GlobalFunc_173(&uLocal_3096, 2, func_127(), "FRANKLIN", 1, 1);
	GlobalFunc_173(&uLocal_3096, 3, func_196(), "LESTER", 1, 1);
	iLocal_3294 = 0;
	iLocal_3477 = 3;
	iLocal_3478 = 1;
	MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 1, 0, 0, 0);
	GlobalFunc_730(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
	GlobalFunc_Checkpoint1(2, "Stage 2: Back of bank", 0, 0, 0, 1);
}


void func_809()//Position - 0x817B1
{
	while (!GlobalFunc_9756(&(Local_3032[0 /*2*/]), 0, Local_3003, fLocal_3006, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_798(&(Local_3051[1 /*4*/]), 1, Local_3032[0 /*2*/], 0, 1, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!GlobalFunc_9756(&(Local_3032[1 /*2*/]), 2, 1681.295f, 1320.678f, 86.0397f, 346.5002f, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!GlobalFunc_7061(&(Local_3051[3 /*4*/]), 12, Local_3032[1 /*2*/], 0, 1))
	{
		SYSTEM::WAIT(0);
	}
	PED::SET_PED_PROP_INDEX(Local_3051[3 /*4*/], 1, 0, 0, false);
	STREAMING::REQUEST_CLIP_SET("move_lester_CaneUp");
	while (!STREAMING::HAS_CLIP_SET_LOADED("move_lester_CaneUp"))
	{
		SYSTEM::WAIT(0);
	}
	if (Global_Mission_Fail_State.f_12[2] == 0)
	{
		func_642(0, 1, 1);
		Local_3051[0 /*4*/] = PLAYER::PLAYER_PED_ID();
		while (!func_798(&(Local_3051[2 /*4*/]), 2, Local_3032[1 /*2*/], -1, 1, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
		if (GlobalFunc_2773(func_130()) && GlobalFunc_2773(Local_3032[0 /*2*/]))
		{
			if (GlobalFunc_188())
			{
				GlobalFunc_4967(Local_3032[0 /*2*/], -1, 1);
			}
			else
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
				PED::SET_PED_INTO_VEHICLE(func_130(), Local_3032[0 /*2*/], -1);
			}
		}
	}
	else if (Global_Mission_Fail_State.f_12[2] == 1)
	{
		func_642(2, 1, 1);
		Local_3051[2 /*4*/] = PLAYER::PLAYER_PED_ID();
		while (!func_798(&(Local_3051[0 /*4*/]), 0, Local_3032[0 /*2*/], -1, 1, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
		if (GlobalFunc_2773(func_129()) && GlobalFunc_2773(Local_3032[1 /*2*/]))
		{
			if (GlobalFunc_188())
			{
				GlobalFunc_4967(Local_3032[1 /*2*/], -1, 1);
			}
			else
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
				PED::SET_PED_INTO_VEHICLE(func_129(), Local_3032[1 /*2*/], -1);
			}
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3032[1 /*2*/]);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_3032[1 /*2*/], 25f);
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_3032[1 /*2*/], 1, 1);
		}
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_SWITCH_TO_TREVOR"))
		{
			AUDIO::START_AUDIO_SCENE("BS_1_SWITCH_TO_TREVOR");
		}
	}
	GlobalFunc_173(&uLocal_3096, 0, func_129(), "TREVOR", 1, 1);
	GlobalFunc_173(&uLocal_3096, 1, func_130(), "MICHAEL", 1, 1);
	GlobalFunc_173(&uLocal_3096, 2, func_127(), "FRANKLIN", 1, 1);
	GlobalFunc_173(&uLocal_3096, 3, func_196(), "LESTER", 1, 1);
	Local_3032[2 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("frogger2"), 1758.309f, 3284.528f, 40.7f, 133.1852f, 1, 1);
	VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_3032[2 /*2*/], 0);
	ENTITY::SET_ENTITY_ALWAYS_PRERENDER(Local_3032[2 /*2*/], 1);
	VEHICLE::SET_VEHICLE_LIVERY(Local_3032[2 /*2*/], 1);
	ENTITY::SET_ENTITY_COLLISION(Local_3032[2 /*2*/], 1, 0);
	ENTITY::FREEZE_ENTITY_POSITION(Local_3032[2 /*2*/], 1);
	VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_3032[2 /*2*/], 0);
	GlobalFunc_5174(&uLocal_3547, joaat("frogger2"));
	func_329(0);
	if ((((GlobalFunc_Is_Mission_Retry() && Global_Current_Checkpoint == 1) && Global_Mission_Fail_State.f_12[0] == 1) && !Global_84544) && !bLocal_5441)
	{
		CLOCK::SET_CLOCK_TIME(13, 15, 0);
	}
	else
	{
		CLOCK::SET_CLOCK_TIME(12, 45, 0);
	}
	iLocal_3530 = 1;
	func_198(0, 1, 0, 0, 0, 0);
	iLocal_3392 = 1;
	iLocal_3294 = 0;
	iLocal_3477 = 0;
	iLocal_3478 = 1;
	iLocal_3476 = 1;
	MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 1, 0, 0, 0);
	GlobalFunc_730(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
	GlobalFunc_Checkpoint1(1, "Stage 1: Front of bank", 0, 0, 0, 1);
}

void func_810()//Position - 0x81B1D
{
	CLOCK::SET_CLOCK_TIME(12, 0, 0);
	func_642(0, 1, 1);
	Local_3051[0 /*4*/] = PLAYER::PLAYER_PED_ID();
	STREAMING::REQUEST_CLIP_SET("move_lester_CaneUp");
	while (!STREAMING::HAS_CLIP_SET_LOADED("move_lester_CaneUp"))
	{
		SYSTEM::WAIT(0);
	}
	while (!GlobalFunc_9756(&(Local_3032[0 /*2*/]), 0, 90.3864f, -1278.837f, 28.0896f, 98.4832f, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_646(&(Local_3051[1 /*4*/]), 1, 94.5331f, -1277.552f, 28.1446f, 15.2302f, 1, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!GlobalFunc_9756(&(Local_3032[1 /*2*/]), 2, 83.4733f, -1281.323f, 29.1518f, 96.9356f, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	ENTITY::SET_ENTITY_COLLISION(Local_3032[1 /*2*/], 1, 0);
	while (!func_798(&(Local_3051[2 /*4*/]), 2, Local_3032[1 /*2*/], -1, 1, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!GlobalFunc_7061(&(Local_3051[3 /*4*/]), 12, Local_3032[1 /*2*/], 0, 1))
	{
		SYSTEM::WAIT(0);
	}
	PED::SET_PED_PROP_INDEX(Local_3051[3 /*4*/], 1, 0, 0, false);
	if (GlobalFunc_188())
	{
		GlobalFunc_4967(0, -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
	}
	iLocal_3530 = 1;
	iLocal_3294 = 0;
	iLocal_3477 = 0;
	iLocal_3478 = 0;
	iLocal_3476 = 0;
	MISC::CLEAR_AREA_OF_PEDS(97.6772f, -1290.739f, 28.2688f, 300f, 0);
	GlobalFunc_730(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
}






void func_816(int iParam0, var uParam1, var uParam2, int iParam3)//Position - 0x82777
{
	if (iParam3 == 0)
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { 92.0847f, -1280.706f, 28.1447f };
				*uParam2 = 73.3971f;
				break;
			
			case 1:
				*uParam1 = { Local_3003 };
				*uParam2 = fLocal_3006;
				break;
			
			case 2:
				*uParam1 = { Local_3007 };
				*uParam2 = fLocal_3010;
				break;
			
			case 3:
				*uParam1 = { Local_3007 };
				*uParam2 = fLocal_3010;
				break;
			
			case 4:
				*uParam1 = { 1095.789f, -1421.151f, 37.5f };
				*uParam2 = -168f;
				break;
			
			case 5:
				*uParam1 = { -76.4238f, -528.6735f, 80f };
				*uParam2 = 176.7705f;
				break;
			
			case 6:
				*uParam1 = { 7.0467f, -614.5734f, 61.0681f };
				*uParam2 = 187.9638f;
				break;
			
			case 7:
				*uParam1 = { 19.2811f, 534.3147f, 173.6274f };
				*uParam2 = 189.0861f;
				break;
		}
	}
	else if (iParam3 == 1)
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { 92.0847f, -1280.706f, 28.1447f };
				*uParam2 = 73.3971f;
				break;
			
			case 1:
				*uParam1 = { 1681.295f, 1320.678f, 86.0397f };
				*uParam2 = 346.5002f;
				break;
			
			case 2:
				*uParam1 = { 1993.624f, 2541.784f, 53.6037f };
				*uParam2 = 318.9926f;
				break;
			
			case 3:
				*uParam1 = { 1758.309f, 3284.528f, 40.7f };
				*uParam2 = 133.1852f;
				break;
			
			case 4:
				*uParam1 = { 1095.789f, -1421.151f, 37.5f };
				*uParam2 = -168f;
				break;
			
			case 5:
				*uParam1 = { -76.4238f, -528.6735f, 80f };
				*uParam2 = 176.7705f;
				break;
			
			case 6:
				*uParam1 = { 7.0467f, -614.5734f, 61.0681f };
				*uParam2 = 187.9638f;
				break;
			
			case 7:
				*uParam1 = { 1759.54f, 3290.233f, 40.1387f };
				*uParam2 = 259.1121f;
				break;
			}
	}
}



void func_819()//Position - 0x82C24
{
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			SYSTEM::WAIT(0);
		}
	}
	if (!GlobalFunc_188())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
		STREAMING::CLEAR_FOCUS();
		if (STREAMING::STREAMVOL_IS_VALID(uLocal_3291))
		{
			STREAMING::STREAMVOL_DELETE(uLocal_3291);
		}
	}
	iLocal_3426 = 0;
	while (iLocal_3426 <= (11 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_3051[iLocal_3426 /*4*/]) && !PED::IS_PED_INJURED(Local_3051[iLocal_3426 /*4*/]))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(Local_3051[iLocal_3426 /*4*/], 0))
			{
				PED::SET_PED_COORDS_NO_GANG(Local_3051[iLocal_3426 /*4*/], ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(Local_3051[iLocal_3426 /*4*/], 0), 1) + Vector(0f, -2f, 0f));
			}
			if (Local_3051[iLocal_3426 /*4*/] != PLAYER::PLAYER_PED_ID())
			{
				PED::DELETE_PED(&(Local_3051[iLocal_3426 /*4*/]));
			}
		}
		iLocal_3426++;
	}
	iLocal_3426 = 0;
	while (iLocal_3426 <= (9 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_3032[iLocal_3426 /*2*/]))
		{
			VEHICLE::DELETE_VEHICLE(&(Local_3032[iLocal_3426 /*2*/]));
		}
		iLocal_3426++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3293))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iLocal_3293))
		{
			ENTITY::DETACH_ENTITY(iLocal_3293, 1, 1);
		}
		GlobalFunc_2346(&iLocal_3293);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3292))
	{
		OBJECT::DELETE_OBJECT(&iLocal_3292);
	}
	func_247(0, 1);
	func_322();
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	iLocal_3544 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.8f);
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	HUD::DISPLAY_HUD(1);
	HUD::DISPLAY_RADAR(1);
	CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_3290);
	TASK::CLEAR_SEQUENCE_TASK(&(Local_3051[4 /*4*/].f_2));
	TASK::CLEAR_SEQUENCE_TASK(&(Local_3051[5 /*4*/].f_2));
	iLocal_3419 = MISC::GET_GAME_TIMER();
	iLocal_3391 = MISC::GET_GAME_TIMER();
	func_328(&bLocal_3020, 0, 0);
	CAM::STOP_GAMEPLAY_HINT(1);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	iLocal_3392 = 0;
	iLocal_3397 = 0;
	iLocal_3398 = 0;
	iLocal_3399 = 0;
	iLocal_3472 = 0;
	iLocal_3471 = 0;
	iLocal_3473 = 0;
	bLocal_3403 = false;
	iLocal_3529 = 0;
	iLocal_3530 = 0;
	iLocal_3469 = 1;
	iLocal_3407 = 1;
	iLocal_3431 = 0;
	iLocal_3470 = 0;
	iLocal_3401 = 0;
	iLocal_3402 = 0;
	iLocal_3467 = 0;
	iLocal_3468 = 0;
	bLocal_3430 = false;
	iLocal_9226 = 0;
	GlobalFunc_5883(&Local_3356);
	iLocal_3474 = 0;
	iLocal_3475 = 0;
	iLocal_3479 = 0;
	iLocal_3519 = MISC::GET_GAME_TIMER();
	iLocal_3521 = 0;
	iLocal_3524 = 0;
	iLocal_3522 = 0;
	StringCopy(&cLocal_3480, "", 24);
	StringCopy(&cLocal_3486, "", 24);
	StringCopy(&Local_3506, "", 24);
	StringCopy(&Local_3512, "", 24);
	iLocal_3518 = 0;
	StringCopy(&cLocal_3493, "", 24);
	StringCopy(&cLocal_3499, "", 24);
	iLocal_3505 = 0;
	iLocal_3534 = 0;
	iLocal_3536 = 0;
	iLocal_3537 = 0;
	iLocal_3538 = 0;
	iLocal_3540 = 0;
	iLocal_3535 = 0;
	bLocal_3539 = false;
	bLocal_3541 = false;
	iLocal_5430 = 0;
	iLocal_5431 = 0;
	iLocal_5432 = 0;
	iLocal_5433 = 0;
	iLocal_3454 = 0;
	AUDIO::TRIGGER_MUSIC_EVENT("FH1_FAIL");
	func_8(0);
	AUDIO::STOP_SOUND(iLocal_3466);
	AUDIO::STOP_SOUND(iLocal_3465);
	CAM::DESTROY_ALL_CAMS(0);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_3453);
	HUD::CLEAR_PRINTS();
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	if (iLocal_3296 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_3296);
	}
	if (iLocal_3295 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_3295);
	}
	if (iLocal_3297 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_3297);
	}
	GlobalFunc_4935();
	GlobalFunc_5652(&Local_3261, 1, 0);
	GlobalFunc_7139(&Local_3261, 0);
	if (HUD::DOES_BLIP_EXIST(uLocal_3286))
	{
		HUD::REMOVE_BLIP(&uLocal_3286);
	}
	GlobalFunc_200(&uLocal_3096, 0);
	GlobalFunc_200(&uLocal_3096, 1);
	GlobalFunc_200(&uLocal_3096, 2);
	GlobalFunc_200(&uLocal_3096, 3);
}


void func_821()//Position - 0x82FA2
{
	switch (iLocal_5434)
	{
		case 1:
			iLocal_5434 = 2;
			iLocal_5436 = -1;
			break;
		
		case 2:
			iLocal_5434 = 3;
			iLocal_5436 = 0;
			iLocal_5435 = iLocal_5437;
			break;
		
		case 3:
			iLocal_5437 = -1;
			iLocal_5434 = 0;
			break;
		
		case 0:
			if ((MISC::GET_GAME_TIMER() - iLocal_5438) > 2500)
			{
				iLocal_5438 = MISC::GET_GAME_TIMER();
			}
			break;
	}
}




void func_825()//Position - 0x831E4
{
	struct<3> Var0;
	var uVar3;
	
	iLocal_3392 = 0;
	iLocal_3465 = AUDIO::GET_SOUND_ID();
	iLocal_3466 = AUDIO::GET_SOUND_ID();
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_3298);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_3299);
	PED::ADD_RELATIONSHIP_GROUP("BUDDY", &iLocal_3298);
	PED::ADD_RELATIONSHIP_GROUP("GUARD", &iLocal_3299);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_3298, iLocal_3298);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_3298);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_3298, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_3299, iLocal_3299);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, 1862763509, iLocal_3299);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_3299, 1862763509);
	MISC::ENABLE_DISPATCH_SERVICE(1, 0);
	MISC::ENABLE_DISPATCH_SERVICE(10, 0);
	MISC::ENABLE_DISPATCH_SERVICE(9, 0);
	GlobalFunc_4927(20, 0);
	GlobalFunc_7621(97, 1, 0, 1, 0);
	GlobalFunc_7621(90, 1, 0, 1, 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tailgater"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bodhi2"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bus"), 1);
	GlobalFunc_563(1);
	PLAYER::SET_MAX_WANTED_LEVEL(2);
	MISC::SET_WEATHER_TYPE_PERSIST("EXTRASUNNY");
	GlobalFunc_7621(180, 0, 0, 1, 0);
	GlobalFunc_10606(78.4684f, -1295.328f, 28.169f, 29.1546f, 0, 145);
	GlobalFunc_9628(77.12664f, -1261.754f, 28.25048f, 104.4054f, -1305.117f, 39.38937f, 40f, 78.4684f, -1295.328f, 28.169f, 29.1546f, 1, 1, 1, 0, 0);
	GlobalFunc_6791(2, 0);
	iLocal_3530 = 0;
	if (GlobalFunc_Is_Mission_Retry() || GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		if (GlobalFunc_Is_Mission_Retry())
		{
			iLocal_5440 = GlobalFunc_Get_Mission_Fail_Checkpoint();
			if (Global_84544)
			{
				iLocal_5440++;
				if (iLocal_5440 >= 7)
				{
					iLocal_5440 = 7;
				}
			}
			bLocal_5441 = false;
		}
		else if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
		{
			iLocal_5440 = 0;
		}
		if (GlobalFunc_Is_Mission_Retry())
		{
			func_816(iLocal_5440, &Var0, &uVar3, Global_Mission_Fail_State.f_12[2]);
			GlobalFunc_5196(Var0, uVar3, 1, 0);
		}
		bLocal_5439 = true;
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_3051[2 /*4*/]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[0], 1, 1);
				Local_3051[2 /*4*/] = Global_86864.f_9[0];
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_3051[0 /*4*/]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[1], 1, 1);
				Local_3051[0 /*4*/] = Global_86864.f_9[1];
			}
		}
		GlobalFunc_Checkpoint1(0, "Stage 0: Strip club", 0, 0, 0, 1);
		iLocal_5435 = 0;
		func_218(0, 0);
		Global_Mission_Fail_State.f_12[0] = 0;
		Global_Mission_Fail_State.f_12[1] = 0;
		Global_Mission_Fail_State.f_12[2] = 0;
	}
	iLocal_5436 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
}



















void func_844(int iParam0)//Position - 0x843DB
{
	if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 0)
	{
		Global_Mission_Fail_State.f_12[2] = 0;
	}
	else if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 2)
	{
		Global_Mission_Fail_State.f_12[2] = 1;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3032[0 /*2*/], 0))
	{
		AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_3032[0 /*2*/], 1);
	}
	GlobalFunc_8032(20, 0f, 0f, 0f, 0f);
	GlobalFunc_7621(97, 0, 0, 1, 0);
	GlobalFunc_7621(90, 0, 0, 1, 0);
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
		CUTSCENE::REMOVE_CUTSCENE();
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_129()) && !ENTITY::IS_ENTITY_DEAD(func_129()))
	{
		if (!ENTITY::IS_ENTITY_VISIBLE(func_129()))
		{
			ENTITY::SET_ENTITY_VISIBLE(func_129(), 1);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(func_196()))
	{
		if (!ENTITY::IS_ENTITY_VISIBLE(func_196()))
		{
			ENTITY::SET_ENTITY_VISIBLE(func_196(), 1);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_3032[2 /*2*/]))
	{
		if (!ENTITY::IS_ENTITY_VISIBLE(Local_3032[2 /*2*/]))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_3032[2 /*2*/], 1);
		}
	}
	GlobalFunc_4927(20, 1);
	CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	AUDIO::STOP_SOUND(iLocal_3466);
	AUDIO::STOP_SOUND(iLocal_3465);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	iLocal_3426 = 0;
	while (iLocal_3426 <= (11 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_3051[iLocal_3426 /*4*/]) && !PED::IS_PED_INJURED(Local_3051[iLocal_3426 /*4*/]))
		{
			if (Local_3051[iLocal_3426 /*4*/] != PLAYER::PLAYER_PED_ID())
			{
				if (((Local_3051[iLocal_3426 /*4*/] == Local_3051[1 /*4*/] || Local_3051[iLocal_3426 /*4*/] == Local_3051[3 /*4*/]) || Local_3051[iLocal_3426 /*4*/] == Local_3051[0 /*4*/]) || Local_3051[iLocal_3426 /*4*/] == Local_3051[2 /*4*/])
				{
					GlobalFunc_881(&(Local_3051[iLocal_3426 /*4*/]));
				}
				else
				{
					GlobalFunc_132(&(Local_3051[iLocal_3426 /*4*/]), 1, 0, 1);
				}
			}
			if (HUD::DOES_BLIP_EXIST(Local_3051[iLocal_3426 /*4*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_3051[iLocal_3426 /*4*/].f_1));
			}
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Local_3051[iLocal_3426 /*4*/].f_3, 0);
		}
		iLocal_3426++;
	}
	iLocal_3426 = 0;
	while (iLocal_3426 <= (9 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_3032[iLocal_3426 /*2*/]))
		{
			GlobalFunc_131(&(Local_3032[iLocal_3426 /*2*/]));
		}
		iLocal_3426++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3292))
	{
		OBJECT::DELETE_OBJECT(&iLocal_3292);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3293))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iLocal_3293))
		{
			ENTITY::DETACH_ENTITY(iLocal_3293, 1, 1);
		}
		GlobalFunc_2346(&iLocal_3293);
	}
	func_329(1);
	CAM::DESTROY_ALL_CAMS(0);
	STREAMING::CLEAR_FOCUS();
	GlobalFunc_5883(&Local_3356);
	AUDIO::TRIGGER_MUSIC_EVENT("FH1_FAIL");
	func_8(0);
	HUD::CLEAR_PRINTS();
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(1);
	}
	CUTSCENE::REMOVE_CUTSCENE();
	STREAMING::STREAMVOL_DELETE(uLocal_3291);
	STREAMING::NEW_LOAD_SCENE_STOP();
	AUDIO::RELEASE_SOUND_ID(iLocal_3466);
	AUDIO::RELEASE_SOUND_ID(iLocal_3465);
	if (iLocal_3297 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_3297);
	}
	if (iLocal_3295 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_3295);
	}
	if (iLocal_3296 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_3296);
	}
	GlobalFunc_4935();
	GlobalFunc_5652(&Local_3261, 1, 0);
	GlobalFunc_7139(&Local_3261, 0);
	if (HUD::DOES_BLIP_EXIST(uLocal_3286))
	{
		HUD::REMOVE_BLIP(&uLocal_3286);
	}
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_3453);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_armoured_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bulldozer"));
	STREAMING::REMOVE_ANIM_DICT("missbigscore1guard_wait_rifle");
	if (CAM::IS_SCREEN_FADED_OUT() && iParam0)
	{
		CAM::DO_SCREEN_FADE_IN(2000);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	HUD::DISPLAY_HUD(1);
	HUD::DISPLAY_RADAR(1);
	CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
	func_328(&bLocal_3020, 0, 0);
	CAM::STOP_GAMEPLAY_HINT(1);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	func_247(0, 1);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	iLocal_3544 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_3290);
	TASK::CLEAR_SEQUENCE_TASK(&(Local_3051[4 /*4*/].f_2));
	TASK::CLEAR_SEQUENCE_TASK(&(Local_3051[5 /*4*/].f_2));
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tailgater"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bodhi2"), 0);
	MISC::ENABLE_DISPATCH_SERVICE(1, 1);
	MISC::ENABLE_DISPATCH_SERVICE(10, 1);
	MISC::ENABLE_DISPATCH_SERVICE(9, 1);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(534.7286f, -1144.51f, 8.0146f, 243.1961f, -560.9398f, 65.814f, 1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	GlobalFunc_3035();
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	GlobalFunc_563(0);
}




