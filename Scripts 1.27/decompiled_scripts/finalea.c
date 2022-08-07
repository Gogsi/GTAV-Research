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
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = 0;
	bool bLocal_51 = 0;
	bool bLocal_52 = 0;
	bool bLocal_53 = 0;
	bool bLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	bool bLocal_57 = 0;
	bool bLocal_58 = 0;
	int iLocal_59 = 0;
	bool bLocal_60 = 0;
	bool bLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	bool bLocal_66 = 0;
	bool bLocal_67 = 0;
	bool bLocal_68 = 0;
	int iLocal_69 = 0;
	bool bLocal_70 = 0;
	var uLocal_71 = 0;
	bool bLocal_72 = 0;
	bool bLocal_73 = 0;
	bool bLocal_74 = 0;
	bool bLocal_75 = 0;
	bool bLocal_76 = 0;
	bool bLocal_77 = 0;
	bool bLocal_78 = 0;
	bool bLocal_79 = 0;
	bool bLocal_80 = 0;
	bool bLocal_81 = 0;
	float fLocal_82[150] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_233[150] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_384[150] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_535[150] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_686[150] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	float fLocal_841[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_867[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_893[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_919[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_945[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	var uLocal_971[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_997[50] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1048[50] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1099[50] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1150[50] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
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
	float fLocal_1221 = 0f;
	int iLocal_1222[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1373[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1524[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1675[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1701[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1727[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1753[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	int iLocal_1820 = 0;
	struct<3> Local_1821[150];
	struct<3> Local_2272[50];
	struct<3> Local_2423[25];
	struct<3> Local_2499 = { 0, 0, 0 } ;
	struct<3> Local_2502 = { 0, 0, 0 } ;
	struct<3> Local_2505 = { 0, 0, 0 } ;
	var uLocal_2508 = 0;
	var uLocal_2509 = 0;
	var uLocal_2510 = 0;
	var uLocal_2511 = 0;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	struct<3> Local_2514 = { 0, 0, 0 } ;
	struct<3> Local_2517 = { 0, 0, 0 } ;
	struct<3> Local_2520 = { 0, 0, 0 } ;
	struct<3> Local_2523 = { 0, 0, 0 } ;
	char cLocal_2526[64] = "";
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	int iLocal_2542 = 0;
	int iLocal_2543[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2694[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2745[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2771 = 0;
	int iLocal_2772 = 0;
	int iLocal_2773 = 0;
	int iLocal_2774[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2925[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2934[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2985[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3011[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_3018 = 0;
	int iLocal_3019 = 0;
	int iLocal_3020 = 0;
	var uLocal_3021 = 8;
	var uLocal_3022 = 0;
	var uLocal_3023 = 0;
	var uLocal_3024 = 0;
	var uLocal_3025 = 0;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = 0;
	struct<3> Local_3030 = { 0, 0, 0 } ;
	float fLocal_3033 = 0f;
	int iLocal_3034 = 0;
	int iLocal_3035 = 0;
	int iLocal_3036 = 0;
	int iLocal_3037 = 0;
	int iLocal_3038 = 0;
	int iLocal_3039 = 0;
	int iLocal_3040 = 0;
	int iLocal_3041 = 0;
	int iLocal_3042 = 0;
	int iLocal_3043 = 0;
	int iLocal_3044 = 0;
	int iLocal_3045 = 0;
	int iLocal_3046 = 0;
	int iLocal_3047 = 0;
	int iLocal_3048 = 0;
	int iLocal_3049 = 0;
	int iLocal_3050 = 0;
	var uLocal_3051 = 0;
	var uLocal_3052 = 0;
	var uLocal_3053 = 0;
	int iLocal_3054 = 0;
	int iLocal_3055 = 0;
	int iLocal_3056 = 0;
	int iLocal_3057 = 0;
	int iLocal_3058 = 0;
	var uLocal_3059 = 0;
	var uLocal_3060 = 0;
	int iLocal_3061 = 0;
	int iLocal_3062 = 0;
	struct<2> Local_3063[6];
	struct<2> Local_3076[5];
	var uLocal_3087 = 0;
	var uLocal_3088 = 0;
	var uLocal_3089 = -1;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 0;
	var uLocal_3096 = 1000;
	var uLocal_3097 = 1000;
	var uLocal_3098 = 0;
	struct<3> Local_3099 = { 0, 0, 0 } ;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	var uLocal_3104 = 0;
	var uLocal_3105 = 0;
	var uLocal_3106 = 21;
	var uLocal_3107 = 6;
	var uLocal_3108 = 0;
	var uLocal_3109 = 0;
	var uLocal_3110 = 0;
	var uLocal_3111 = 0;
	var uLocal_3112 = 3;
	var uLocal_3113 = 0;
	var uLocal_3114 = 0;
	var uLocal_3115 = 0;
	var uLocal_3116 = 0;
	var uLocal_3117 = 0;
	var uLocal_3118 = 1092616192;
	var uLocal_3119 = 1101004800;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 0;
	var uLocal_3127 = 0;
	var uLocal_3128 = 3;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	var uLocal_3136 = 16;
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
	var uLocal_3261 = 0;
	var uLocal_3262 = 0;
	var uLocal_3263 = 0;
	var uLocal_3264 = 0;
	var uLocal_3265 = 0;
	var uLocal_3266 = 0;
	var uLocal_3267 = 0;
	var uLocal_3268 = 0;
	var uLocal_3269 = 0;
	var uLocal_3270 = 0;
	var uLocal_3271 = 0;
	var uLocal_3272 = 0;
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
	var uLocal_3288 = 0;
	var uLocal_3289 = 0;
	var uLocal_3290 = 0;
	var uLocal_3291 = 0;
	var uLocal_3292 = 0;
	var uLocal_3293 = 0;
	var uLocal_3294 = 0;
	var uLocal_3295 = 0;
	var uLocal_3296 = 0;
	var uLocal_3297 = 0;
	var uLocal_3298 = 0;
	var uLocal_3299 = 0;
	var uLocal_3300 = 0;
	int iLocal_3301 = 0;
	int iLocal_3302 = 0;
	var uLocal_3303 = 0;
	var uLocal_3304 = 0;
	char[] cLocal_3305[8] = 0;
	char[] cLocal_3306[8] = 0;
	char[] cLocal_3307[8] = 0;
	char* sLocal_3308 = NULL;
	char* sLocal_3309 = NULL;
	char* sLocal_3310 = NULL;
	char* sLocal_3311 = NULL;
	char* sLocal_3312 = NULL;
	char* sLocal_3313 = NULL;
	char* sLocal_3314 = NULL;
	char* sLocal_3315 = NULL;
	char* sLocal_3316 = NULL;
	char* sLocal_3317 = NULL;
	char* sLocal_3318 = NULL;
	char* sLocal_3319 = NULL;
	char* sLocal_3320 = NULL;
	char* sLocal_3321 = NULL;
	char* sLocal_3322 = NULL;
	char* sLocal_3323 = NULL;
	char* sLocal_3324 = NULL;
	char* sLocal_3325 = NULL;
	char* sLocal_3326 = NULL;
	char* sLocal_3327 = NULL;
	int iLocal_3328 = 0;
	int iLocal_3329 = 0;
	int iLocal_3330 = 0;
	int iLocal_3331 = 0;
	bool bLocal_3332 = 0;
	bool bLocal_3333 = 0;
	int iLocal_3334 = 0;
	int iLocal_3335 = 0;
	int iLocal_3336 = 0;
	int iLocal_3337 = 0;
	int iLocal_3338 = 0;
	int iLocal_3339 = 0;
	int iLocal_3340 = 0;
	int iLocal_3341 = 0;
	int iLocal_3342 = 0;
	int iLocal_3343 = 0;
	var uLocal_3344 = 0;
	var uLocal_3345 = 0;
	var uLocal_3346 = 0;
	var uLocal_3347 = 0;
	float fLocal_3348 = 0f;
	float fLocal_3349 = 0f;
	float fLocal_3350 = 0f;
	int iLocal_3351 = 0;
	int iLocal_3352 = 0;
	int iLocal_3353 = 0;
	int iLocal_3354 = 0;
	int iLocal_3355 = 0;
	int iLocal_3356 = 0;
	int iLocal_3357 = 0;
	bool bLocal_3358 = 0;
	int iLocal_3359 = 0;
	int iLocal_3360 = 0;
	int iLocal_3361 = 0;
	int iLocal_3362 = 0;
	int iLocal_3363 = 0;
	int iLocal_3364 = 0;
	bool bLocal_3365 = 0;
	int iLocal_3366 = 0;
	int iLocal_3367 = 0;
	var uLocal_3368 = 30;
	var uLocal_3369 = 0;
	var uLocal_3370 = 0;
	var uLocal_3371 = 0;
	var uLocal_3372 = 0;
	var uLocal_3373 = 0;
	var uLocal_3374 = 0;
	var uLocal_3375 = 0;
	var uLocal_3376 = 0;
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
	var uLocal_3390 = 0;
	var uLocal_3391 = 0;
	var uLocal_3392 = 0;
	var uLocal_3393 = 0;
	var uLocal_3394 = 0;
	var uLocal_3395 = 0;
	var uLocal_3396 = 0;
	var uLocal_3397 = 0;
	var uLocal_3398 = 0;
	var uLocal_3399 = 0;
	var uLocal_3400 = 0;
	var uLocal_3401 = 0;
	var uLocal_3402 = 0;
	var uLocal_3403 = 0;
	var uLocal_3404 = 0;
	var uLocal_3405 = 0;
	var uLocal_3406 = 0;
	var uLocal_3407 = 0;
	var uLocal_3408 = 0;
	var uLocal_3409 = 0;
	var uLocal_3410 = 0;
	var uLocal_3411 = 0;
	var uLocal_3412 = 0;
	var uLocal_3413 = 0;
	var uLocal_3414 = 0;
	var uLocal_3415 = 0;
	var uLocal_3416 = 0;
	var uLocal_3417 = 0;
	var uLocal_3418 = 0;
	var uLocal_3419 = 0;
	var uLocal_3420 = 0;
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
	var uLocal_3434 = 0;
	var uLocal_3435 = 0;
	var uLocal_3436 = 0;
	var uLocal_3437 = 0;
	var uLocal_3438 = 0;
	var uLocal_3439 = 0;
	var uLocal_3440 = 0;
	var uLocal_3441 = 0;
	var uLocal_3442 = 0;
	var uLocal_3443 = 0;
	var uLocal_3444 = 0;
	var uLocal_3445 = 0;
	var uLocal_3446 = 0;
	var uLocal_3447 = 0;
	var uLocal_3448 = 0;
	var uLocal_3449 = 0;
	var uLocal_3450 = 0;
	var uLocal_3451 = 0;
	var uLocal_3452 = 0;
	var uLocal_3453 = 0;
	var uLocal_3454 = 0;
	var uLocal_3455 = 0;
	var uLocal_3456 = 0;
	var uLocal_3457 = 0;
	var uLocal_3458 = 0;
	var uLocal_3459 = 0;
	var uLocal_3460 = 0;
	var uLocal_3461 = 0;
	var uLocal_3462 = 0;
	var uLocal_3463 = 0;
	var uLocal_3464 = 0;
	var uLocal_3465 = 0;
	var uLocal_3466 = 0;
	var uLocal_3467 = 0;
	var uLocal_3468 = 0;
	var uLocal_3469 = 0;
	var uLocal_3470 = 0;
	var uLocal_3471 = 0;
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
	var uLocal_3519 = 10;
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
	var uLocal_3570 = 10;
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
	var uLocal_3641 = 20;
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
	var uLocal_3698 = 0;
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
	var uLocal_3742 = 20;
	var uLocal_3743 = 0;
	var uLocal_3744 = 0;
	var uLocal_3745 = 0;
	var uLocal_3746 = 0;
	var uLocal_3747 = 0;
	var uLocal_3748 = 0;
	var uLocal_3749 = 0;
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
	var uLocal_3841 = 0;
	var uLocal_3842 = 0;
	var uLocal_3843 = 30;
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
	var uLocal_3921 = 0;
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
	var uLocal_4022 = 0;
	var uLocal_4023 = 0;
	var uLocal_4024 = 5;
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
	var uLocal_4055 = 7;
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
	var uLocal_4105 = 5;
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
	var uLocal_4131 = 3;
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
	var uLocal_4147 = 15;
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
	var uLocal_4234 = 0;
	var uLocal_4235 = 0;
	var uLocal_4236 = 0;
	var uLocal_4237 = 0;
	var uLocal_4238 = 0;
	var uLocal_4239 = 0;
	var uLocal_4240 = 0;
	var uLocal_4241 = 0;
	var uLocal_4242 = 10;
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
	var uLocal_4284 = 0;
	var uLocal_4285 = 0;
	var uLocal_4286 = 0;
	var uLocal_4287 = 0;
	var uLocal_4288 = 0;
	var uLocal_4289 = 0;
	var uLocal_4290 = 0;
	var uLocal_4291 = 0;
	var uLocal_4292 = 0;
	var uLocal_4293 = 5;
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
	var uLocal_4310 = 0;
	var uLocal_4311 = 0;
	var uLocal_4312 = 0;
	var uLocal_4313 = 0;
	var uLocal_4314 = 0;
	var uLocal_4315 = 0;
	var uLocal_4316 = 0;
	var uLocal_4317 = 0;
	var uLocal_4318 = 0;
	var uLocal_4319 = 5;
	var uLocal_4320 = 0;
	var uLocal_4321 = 0;
	var uLocal_4322 = 0;
	var uLocal_4323 = 0;
	var uLocal_4324 = 0;
	var uLocal_4325 = 0;
	var uLocal_4326 = 0;
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
	var uLocal_4348 = 5;
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
	var uLocal_4366 = 12;
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
	var uLocal_4379 = 12;
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
	var uLocal_4392 = 12;
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
	var uLocal_4405 = 9;
	var uLocal_4406 = 0;
	var uLocal_4407 = 0;
	var uLocal_4408 = 0;
	var uLocal_4409 = 0;
	var uLocal_4410 = 0;
	var uLocal_4411 = 0;
	var uLocal_4412 = 0;
	var uLocal_4413 = 0;
	var uLocal_4414 = 0;
	var uLocal_4415 = 9;
	var uLocal_4416 = 0;
	var uLocal_4417 = 0;
	var uLocal_4418 = 0;
	var uLocal_4419 = 0;
	var uLocal_4420 = 0;
	var uLocal_4421 = 0;
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
	var uLocal_4448 = 12;
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
	var uLocal_4461 = 12;
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
	var uLocal_4472 = 0;
	var uLocal_4473 = 0;
	var uLocal_4474 = 12;
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
	var uLocal_4487 = 9;
	var uLocal_4488 = 0;
	var uLocal_4489 = 0;
	var uLocal_4490 = 0;
	var uLocal_4491 = 0;
	var uLocal_4492 = 0;
	var uLocal_4493 = 0;
	var uLocal_4494 = 0;
	var uLocal_4495 = 0;
	var uLocal_4496 = 0;
	var uLocal_4497 = 9;
	var uLocal_4498 = 0;
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
	var uLocal_4527 = 0;
	var uLocal_4528 = 0;
	var uLocal_4529 = 0;
	var uLocal_4530 = 12;
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
	var uLocal_4543 = 12;
	var uLocal_4544 = 0;
	var uLocal_4545 = 0;
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
	var uLocal_4556 = 12;
	var uLocal_4557 = 0;
	var uLocal_4558 = 0;
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
	var uLocal_4569 = 9;
	var uLocal_4570 = 0;
	var uLocal_4571 = 0;
	var uLocal_4572 = 0;
	var uLocal_4573 = 0;
	var uLocal_4574 = 0;
	var uLocal_4575 = 0;
	var uLocal_4576 = 0;
	var uLocal_4577 = 0;
	var uLocal_4578 = 0;
	var uLocal_4579 = 9;
	var uLocal_4580 = 0;
	var uLocal_4581 = 0;
	var uLocal_4582 = 0;
	var uLocal_4583 = 0;
	var uLocal_4584 = 0;
	var uLocal_4585 = 0;
	var uLocal_4586 = 0;
	var uLocal_4587 = 0;
	var uLocal_4588 = 0;
	var uLocal_4589 = 0;
	var uLocal_4590 = 0;
	var uLocal_4591 = 0;
	var uLocal_4592 = 0;
	var uLocal_4593 = 0;
	var uLocal_4594 = 0;
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
	var uLocal_4612 = 12;
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
	var uLocal_4625 = 12;
	var uLocal_4626 = 0;
	var uLocal_4627 = 0;
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
	var uLocal_4638 = 12;
	var uLocal_4639 = 0;
	var uLocal_4640 = 0;
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
	var uLocal_4651 = 9;
	var uLocal_4652 = 0;
	var uLocal_4653 = 0;
	var uLocal_4654 = 0;
	var uLocal_4655 = 0;
	var uLocal_4656 = 0;
	var uLocal_4657 = 0;
	var uLocal_4658 = 0;
	var uLocal_4659 = 0;
	var uLocal_4660 = 0;
	var uLocal_4661 = 9;
	var uLocal_4662 = 0;
	var uLocal_4663 = 0;
	var uLocal_4664 = 0;
	var uLocal_4665 = 0;
	var uLocal_4666 = 0;
	var uLocal_4667 = 0;
	var uLocal_4668 = 0;
	var uLocal_4669 = 0;
	var uLocal_4670 = 0;
	var uLocal_4671 = 0;
	var uLocal_4672 = 0;
	var uLocal_4673 = 0;
	var uLocal_4674 = 0;
	var uLocal_4675 = 0;
	var uLocal_4676 = 0;
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
	var uLocal_4694 = 12;
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
	var uLocal_4707 = 12;
	var uLocal_4708 = 0;
	var uLocal_4709 = 0;
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
	var uLocal_4720 = 12;
	var uLocal_4721 = 0;
	var uLocal_4722 = 0;
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
	var uLocal_4733 = 9;
	var uLocal_4734 = 0;
	var uLocal_4735 = 0;
	var uLocal_4736 = 0;
	var uLocal_4737 = 0;
	var uLocal_4738 = 0;
	var uLocal_4739 = 0;
	var uLocal_4740 = 0;
	var uLocal_4741 = 0;
	var uLocal_4742 = 0;
	var uLocal_4743 = 9;
	var uLocal_4744 = 0;
	var uLocal_4745 = 0;
	var uLocal_4746 = 0;
	var uLocal_4747 = 0;
	var uLocal_4748 = 0;
	var uLocal_4749 = 0;
	var uLocal_4750 = 0;
	var uLocal_4751 = 0;
	var uLocal_4752 = 0;
	var uLocal_4753 = 0;
	var uLocal_4754 = 0;
	var uLocal_4755 = 0;
	var uLocal_4756 = 0;
	var uLocal_4757 = 0;
	var uLocal_4758 = 0;
	int iLocal_4759 = 0;
	int iLocal_4760 = 0;
	int iLocal_4761 = 0;
	int iLocal_4762 = 0;
	int iLocal_4763 = 0;
	int iLocal_4764 = 0;
	int iLocal_4765 = 0;
	bool bLocal_4766 = 0;
	int iLocal_4767 = 0;
	int iLocal_4768 = 0;
	var uLocal_4769 = 0;
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
	bLocal_51 = true;
	bLocal_58 = true;
	bLocal_80 = true;
	fLocal_1201 = 120f;
	fLocal_1202 = 0f;
	fLocal_1204 = 1f;
	fLocal_1205 = 0f;
	fLocal_1206 = 1f;
	fLocal_1207 = 30f;
	fLocal_1209 = 1f;
	fLocal_1210 = 5f;
	fLocal_1211 = 1f;
	fLocal_1212 = 1f;
	fLocal_1213 = 100f;
	fLocal_1214 = 100f;
	fLocal_1215 = 0f;
	fLocal_1216 = 7000f;
	fLocal_1217 = 0f;
	fLocal_1218 = 0f;
	fLocal_1219 = 0.3f;
	fLocal_1220 = 0.5f;
	fLocal_1221 = 50f;
	iLocal_1807 = -1;
	iLocal_1815 = -1;
	iLocal_1816 = -1;
	Local_3030 = { 1342.97f, -2553.833f, 46.1407f };
	fLocal_3033 = 303.0488f;
	cLocal_3305 = "missfinale_a_ig_1";
	cLocal_3306 = "missfinale_a_ig_2";
	cLocal_3307 = "missfinale_a_ig_2_alt_1";
	sLocal_3308 = "michael_base_idle_pz";
	sLocal_3309 = "michael_idle_a_pz";
	sLocal_3310 = "michael_idle_b_pz";
	sLocal_3311 = "michael_idle_c_pz";
	sLocal_3312 = "michael_base_idle_to_aim_into_pz";
	sLocal_3313 = "michael_gun_Shot_&_trevor_death_reaction_pz";
	sLocal_3314 = "michael_alternate_gun_shot_&_trevor_death_reaction";
	sLocal_3315 = "michael_trevor_death_base_idle_pz";
	sLocal_3316 = "michael_alternate_trevor_death_base_idle";
	sLocal_3317 = "michael_alternate_gas_Tanker_explosion_outro";
	sLocal_3318 = "franklin_trevor_death_reaction_po";
	sLocal_3319 = "franklin_alternate_gun_shot_&_trevor_death_reaction";
	sLocal_3320 = "franklin_trevor_death_base_idle_po";
	sLocal_3321 = "franklin_alternate_trevor_death_base_idle";
	sLocal_3322 = "franklin_alternate_gas_tanker_explosion_outro";
	sLocal_3323 = "trevor_base_idle_pt";
	sLocal_3324 = "trevor_idle_a_pt";
	sLocal_3325 = "trevor_idle_b_pt";
	sLocal_3326 = "trevor_death_reaction_pt";
	sLocal_3327 = "trevor_dead_idle_pt";
	iLocal_3334 = 1;
	fLocal_3349 = 0f;
	iLocal_4768 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GlobalFunc_10632();
		if (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
		}
		func_672();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	MISC::SET_MISSION_FLAG(1);
	AUDIO::REQUEST_MISSION_AUDIO_BANK("FINALE_A_GENERAL", 0);
	STREAMING::REQUEST_IPL("DES_tankercrash");
	HUD::REQUEST_ADDITIONAL_TEXT("FINALE1", 0);
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
	if (!GlobalFunc_Is_Mission_Retry())
	{
		func_642();
		SYSTEM::WAIT(500);
	}
	func_637();
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_KillTrevor", 0);
		GlobalFunc_8012(&uLocal_3368);
		GlobalFunc_5195(&uLocal_4348);
		func_633();
		func_398();
		if (!iLocal_4765)
		{
			func_396();
			func_1();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x25B
{
	switch (iLocal_4760)
	{
		case 0:
			func_371();
			break;
		
		case 1:
			func_281();
			break;
		
		case 2:
			func_269();
			break;
		
		case 3:
			func_150();
			break;
		
		case 4:
			func_26();
			break;
		
		case 5:
			func_2();
			break;
	}
}

void func_2()//Position - 0x2B9
{
	switch (iLocal_4761)
	{
		case 0:
			iLocal_4761++;
			break;
		
		case 1:
			func_3();
			break;
	}
}

void func_3()//Position - 0x2E7
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	Global_86811 = 0;
	func_23(2);
	GlobalFunc_553(846);
	if (iLocal_3342 == 0)
	{
		func_9(5, 0);
		iLocal_3342 = 1;
	}
	if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		Global_54752 = 1;
		GlobalFunc_45(1, 1);
	}
	GlobalFunc_5103(1, 0);
	if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		Global_54750 = 0;
	}
	func_672();
	SCRIPT::TERMINATE_THIS_THREAD();
}






int func_9(int iParam0, int iParam1)//Position - 0x509
{
	if (MISC::IS_BIT_SET(Global_Mission_Fail_State.f_20, 17))
	{
		return 0;
	}
	return GlobalFunc_8964(iParam0, iParam1);
}














void func_23(int iParam0)//Position - 0x82D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_SAVE_DATA.PROPERTIES_SAVED_DATA[iVar0 /*4*/] == iParam0)
		{
			Global_SAVE_DATA.PROPERTIES_SAVED_DATA[iVar0 /*4*/] = 145;
			GlobalFunc_5211(&(Global_SAVE_DATA.PROPERTIES_SAVED_DATA[iVar0 /*4*/].f_2), 4);
		}
		iVar0++;
	}
}



void func_26()//Position - 0x898
{
	switch (iLocal_4761)
	{
		case 0:
			iLocal_3341 = 0;
			iLocal_3342 = 0;
			if (GlobalFunc_2773(func_149()))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(func_149(), 0);
				PED::SET_FORCE_FOOTSTEP_UPDATE(func_149(), 1);
			}
			if (GlobalFunc_2773(func_147()))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(func_147(), 0);
				PED::SET_FORCE_FOOTSTEP_UPDATE(func_147(), 1);
			}
			HUD::CLEAR_HELP(1);
			GlobalFunc_8380(1, 1, 1, 0);
			GlobalFunc_Checkpoint3(4, "Stage 4: Goodbyes", 1, 0, 0, 1);
			func_69(0);
			iLocal_4761++;
			break;
		
		case 1:
			if (GlobalFunc_Has_Cutscene_Loaded())
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_149()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_149(), "Franklin", 0, ENTITY::GET_ENTITY_MODEL(func_149()), 3);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_3076[0 /*2*/]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3076[0 /*2*/], "Michael", 1, ENTITY::GET_ENTITY_MODEL(Local_3076[0 /*2*/]), 3);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_3063[0 /*2*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_3063[0 /*2*/]));
				}
				HUD::REQUEST_ADDITIONAL_TEXT("CREDIT", 0);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 40f, 1, 0, 0, 0);
				iLocal_4761++;
			}
			break;
		
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
				PED::CLEAR_PED_PROP(Local_3076[0 /*2*/], 0);
				MISC::SET_TIME_SCALE(1f);
				func_67(1, 0, 0, 3000, 0);
				GlobalFunc_6685(0);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				if (!CAM::DOES_CAM_EXIST(uLocal_3053))
				{
					uLocal_3053 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					CAM::SET_CAM_PARAMS(uLocal_3053, 1685.64f, -1750.719f, 119.8643f, -1.003233f, 0.243573f, 78.91537f, 38.86496f, 0, 1, 1, 2);
				}
				iLocal_4761++;
			}
			break;
		
		case 3:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3063[0 /*2*/]))
			{
				if (func_27(&(Local_3063[0 /*2*/]), 0, 1698.057f, -1782.475f, 110.5612f, 321.7204f, 1, 1))
				{
					VEHICLE::SET_VEHICLE_LIGHTS(Local_3063[0 /*2*/], 2);
				}
			}
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (iLocal_3341 == 0)
				{
					if (CAM::DOES_CAM_EXIST(uLocal_3053))
					{
						CAM::SET_CAM_ACTIVE(uLocal_3053, 1);
						CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
						HUD::DISPLAY_RADAR(0);
						HUD::DISPLAY_HUD(0);
						iLocal_3341 = 1;
					}
				}
				if (CUTSCENE::GET_CUTSCENE_TIME() > 99000)
				{
					PAD::DISABLE_CONTROL_ACTION(2, 18, 1);
				}
				if (Global_86810 == 0)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 99963)
					{
						PAD::DISABLE_CONTROL_ACTION(2, 18, 1);
						AUDIO::PLAY_END_CREDITS_MUSIC(1);
						AUDIO::SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(1);
						AUDIO::SET_MOBILE_PHONE_RADIO_STATE(1);
						AUDIO::SET_RADIO_TO_STATION_NAME("RADIO_01_CLASS_ROCK");
						AUDIO::SET_CUSTOM_RADIO_TRACK_LIST("RADIO_01_CLASS_ROCK", "END_CREDITS_KILL_TREVOR", 1);
						Global_86810 = 1;
					}
				}
				if (iLocal_3342 == 0)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 113300)
					{
						MISC::SET_CREDITS_ACTIVE(1);
						MISC::_0xB51B9AB9EF81868C(0);
						AUDIO::START_AUDIO_SCENE("END_CREDITS_SCENE");
						STREAMING::SET_GAME_PAUSES_FOR_STREAMING(0);
						func_9(5, 0);
						iLocal_3342 = 1;
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_3063[2 /*2*/]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3063[2 /*2*/], 0))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_3063[2 /*2*/]));
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1668.928f, -1743.757f, 111.2063f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 51.8277f);
				bLocal_3358 = true;
			}
			if (bLocal_3358)
			{
				GlobalFunc_8380(0, 1, 1, 0);
			}
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				RECORDING::_0x81CBAE94390F9F89();
				iLocal_4761++;
			}
			break;
		
		case 4:
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			CAM::SHAKE_CAM(uLocal_3053, "HAND_SHAKE", 0.1f);
			SYSTEM::SETTIMERA(0);
			iLocal_4761++;
			break;
		
		case 5:
			if (SYSTEM::TIMERA() > 45000)
			{
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(5000);
				}
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_3();
				}
			}
			break;
	}
}

int func_27(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)//Position - 0xC37
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
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/], Param2, fParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
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
				GlobalFunc_5107(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_57));
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
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/], Param2, fParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
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
				GlobalFunc_5107(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_57));
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
				*iParam0 = VEHICLE::CREATE_VEHICLE(Var5, Param2, fParam5, 1, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
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
				GlobalFunc_5107(iParam0, &(Var5.f_31), &(Var5.f_57));
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
					GlobalFunc_8962(iParam1, iParam0, 0, 1);
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








































void func_67(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4)//Position - 0x5708
{
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), bParam0, iParam4);
	CAM::RENDER_SCRIPT_CAMS(bParam1, iParam2, iParam3, 1, 0, 0);
	if (!bParam1)
	{
		CAM::DESTROY_ALL_CAMS(0);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		AUDIO::SET_VEHICLE_RADIO_ENABLED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1);
	}
	iLocal_3366 = 0;
}


void func_69(int iParam0)//Position - 0x577F
{
	bLocal_3358 = iParam0;
	iLocal_3359 = iParam0;
	iLocal_3360 = iParam0;
	iLocal_3361 = iParam0;
	iLocal_3362 = iParam0;
	iLocal_3363 = iParam0;
	iLocal_3364 = iParam0;
}














































































int func_147()//Position - 0xC2A3
{
	return Local_3076[0 /*2*/];
}


int func_149()//Position - 0xC2FC
{
	return Local_3076[2 /*2*/];
}

void func_150()//Position - 0xC30A
{
	if (ENTITY::DOES_ENTITY_EXIST(func_268()))
	{
		PED::SET_PED_WETNESS_ENABLED_THIS_FRAME(func_268());
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(func_149(), 0f);
	PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 263, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 264, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 31, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 30, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 262, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 261, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 36, 1);
	GlobalFunc_7632(1);
	if (iLocal_4761 > 0)
	{
		func_265();
	}
	switch (iLocal_4761)
	{
		case 0:
			iLocal_3055 = 0;
			iLocal_3041 = 0;
			iLocal_3043 = 0;
			iLocal_3044 = 0;
			iLocal_3049 = 0;
			iLocal_3336 = 0;
			STREAMING::REQUEST_PTFX_ASSET();
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (AUDIO::HAS_SOUND_FINISHED(uLocal_4769))
				{
					uLocal_4769 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_COORD(uLocal_4769, "FINALE_PETROL_SPILL", 1733f, -1627f, 113f, 0, 0, 0, 0);
				}
				CAM::DO_SCREEN_FADE_IN(800);
				uLocal_3344 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(func_147(), uLocal_3344, cLocal_3305, sLocal_3308, 1000f, -4f, 4, 4, 1148846080, 0);
				uLocal_3345 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(func_268(), uLocal_3345, cLocal_3305, sLocal_3323, 1000f, -4f, 4, 4, 1148846080, 0);
			}
			GlobalFunc_Checkpoint3(3, "Stage 3: Ignite Trevor", 0, 0, 0, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3076[0 /*2*/], 1);
			ENTITY::SET_ENTITY_INVINCIBLE(func_268(), 1);
			if (!HUD::DOES_BLIP_EXIST(uLocal_3303))
			{
				uLocal_3303 = GlobalFunc_6797(func_268(), 1, 145);
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_1_DESTROY_TREVOR"))
			{
				AUDIO::START_AUDIO_SCENE("FIN_1_DESTROY_TREVOR");
			}
			if (WEAPON::HAS_PED_GOT_WEAPON(func_149(), joaat("weapon_pistol"), 0))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(func_149(), joaat("weapon_pistol"), 1);
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(func_149(), joaat("weapon_pistol")) < 50)
				{
					WEAPON::ADD_AMMO_TO_PED(func_149(), joaat("weapon_pistol"), 50);
				}
			}
			else
			{
				WEAPON::GIVE_WEAPON_TO_PED(func_149(), joaat("weapon_pistol"), 50, 1, 1);
			}
			if (CAM::DOES_CAM_EXIST(uLocal_3051))
			{
				CAM::DESTROY_CAM(uLocal_3051, 0);
			}
			if (CAM::DOES_CAM_EXIST(uLocal_3052))
			{
				CAM::DESTROY_CAM(uLocal_3052, 0);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_3051))
			{
				uLocal_3051 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_3052))
			{
				uLocal_3052 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
			}
			RECORDING::_0x293220DA1B46CEBC(0f, 5f, 4);
			GlobalFunc_164("FIN1_DES", 7500, 1);
			iLocal_3329 = MISC::GET_GAME_TIMER();
			iLocal_3331 = 0;
			bLocal_3332 = false;
			bLocal_3333 = false;
			iLocal_3035 = 0;
			iLocal_4761++;
			break;
		
		case 1:
			if (iLocal_3035 == 0)
			{
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					CUTSCENE::REQUEST_CUTSCENE("fin_a_ext", 8);
					iLocal_3035 = 1;
				}
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				func_172(0);
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_3329) > 4000)
			{
				switch (iLocal_3331)
				{
					case 0:
						if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3344) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3344) >= 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3344))
						{
							GlobalFunc_173(&uLocal_3136, 2, func_147(), "MICHAEL", 0, 1);
							if (GlobalFunc_10630(&uLocal_3136, "FIN1AUD", "FIN1_COUGH", "FIN1_COUGH_1", 7, 0, 0))
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3344))
								{
									uLocal_3344 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(func_147(), uLocal_3344, cLocal_3305, sLocal_3311, 1000f, -8f, 4, 4, 1148846080, 0);
									iLocal_3329 = MISC::GET_GAME_TIMER();
									iLocal_3331++;
								}
							}
						}
						break;
					
					case 1:
						if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3345) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3345) >= 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3345))
						{
							GlobalFunc_173(&uLocal_3136, 1, func_268(), "TREVOR", 0, 1);
							if (GlobalFunc_10618(&uLocal_3136, "FIN1AUD", "FIN1_COUGH2", 7, 0, 0, 0))
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3345))
								{
									uLocal_3345 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(func_268(), uLocal_3345, cLocal_3305, sLocal_3324, 1000f, -8f, 4, 4, 1148846080, 0);
									iLocal_3329 = MISC::GET_GAME_TIMER();
									iLocal_3331 = 5;
								}
							}
						}
						break;
					
					case 2:
						if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3344) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3344) >= 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3344))
						{
							GlobalFunc_173(&uLocal_3136, 2, func_147(), "MICHAEL", 0, 1);
							if (GlobalFunc_10631(&uLocal_3136, "FIN1AUD", "FIN1_COUGH", "FIN1_COUGH_2", "FIN1_COUGH", "FIN1_COUGH_3", 7, 0, 0))
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3344))
								{
									uLocal_3344 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(func_147(), uLocal_3344, cLocal_3305, sLocal_3309, 1000f, -8f, 4, 4, 1148846080, 0);
									iLocal_3329 = MISC::GET_GAME_TIMER();
									iLocal_3331++;
								}
							}
						}
						break;
					
					case 3:
						if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3345) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3345) >= 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3345))
						{
							GlobalFunc_173(&uLocal_3136, 1, func_268(), "TREVOR", 0, 1);
							if (GlobalFunc_10618(&uLocal_3136, "FIN1AUD", "FIN1_COUGH2", 7, 0, 0, 0))
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3345))
								{
									uLocal_3345 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(func_268(), uLocal_3345, cLocal_3305, sLocal_3325, 1000f, -8f, 4, 4, 1148846080, 0);
									iLocal_3329 = MISC::GET_GAME_TIMER();
									iLocal_3331++;
								}
							}
						}
						break;
					
					case 4:
						if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3344) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3344) >= 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3344))
						{
							GlobalFunc_173(&uLocal_3136, 2, func_147(), "MICHAEL", 0, 1);
							if (GlobalFunc_10631(&uLocal_3136, "FIN1AUD", "FIN1_COUGH", "FIN1_COUGH_4", "FIN1_COUGH", "FIN1_COUGH_5", 7, 0, 0))
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3344))
								{
									uLocal_3344 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(func_147(), uLocal_3344, cLocal_3305, sLocal_3310, 1000f, -8f, 4, 4, 1148846080, 0);
									iLocal_3329 = MISC::GET_GAME_TIMER();
									iLocal_3331++;
								}
							}
						}
						break;
					
					case 5:
						if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3345) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3345) >= 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3345))
						{
							GlobalFunc_173(&uLocal_3136, 2, func_147(), "MICHAEL", 0, 1);
							if (GlobalFunc_10618(&uLocal_3136, "FIN1AUD", "FIN1_MIKE", 7, 0, 0, 0))
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3344))
								{
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
									HUD::DISPLAY_RADAR(0);
									HUD::DISPLAY_HUD(0);
									CAM::SET_CAM_ACTIVE(uLocal_3051, 1);
									uLocal_3344 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(func_147(), uLocal_3344, cLocal_3306, sLocal_3312, 1000f, -8f, 4, 4, 1148846080, 0);
									CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_3051, uLocal_3344, "cam_base_idle_to_aim_into_pz", cLocal_3306);
									CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
									bLocal_3332 = true;
									iLocal_3335 = 0;
									iLocal_3331++;
								}
							}
						}
						break;
					
					case 6:
						if (!iLocal_3335)
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3344) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3344) >= 0.5f)
							{
								WEAPON::GIVE_WEAPON_TO_PED(func_147(), joaat("weapon_pistol"), -1, 1, 1);
								WEAPON::SET_CURRENT_PED_WEAPON(func_147(), joaat("weapon_pistol"), 1);
								iLocal_3335 = 1;
							}
						}
						if (!iLocal_3336)
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3344) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3344) >= 0.95f)
							{
								GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("muz_pistol", 1729.85f, -1617.4f, 112.8f, 90f, -40f, 0f, 1065353216, 0, 0, 0);
								iLocal_3336 = 1;
							}
						}
						if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3344) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3344) >= 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3344))
						{
							CAM::SET_CAM_ACTIVE(uLocal_3052, 1);
							PED::SET_PED_SHOOTS_AT_COORD(func_147(), 1733.705f, -1624.56f, 111.4259f, 1);
							uLocal_3345 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(func_268(), uLocal_3345, cLocal_3306, sLocal_3326, 8f, -4f, 4, 4, 1148846080, 0);
							CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_3052, uLocal_3345, "cam_trevor_death_reaction_pt", cLocal_3306);
							PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(func_268(), "burning_1", 0);
							uLocal_3344 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(func_147(), uLocal_3344, cLocal_3306, sLocal_3313, 1000f, -1.5f, 4, 4, 1148846080, 0);
							CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_3051, uLocal_3344, "cam_gun_shot_&_trevor_death_reaction_pz", cLocal_3306);
							uLocal_3346 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
							CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
							if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
							{
								bLocal_3333 = true;
								TASK::TASK_SYNCHRONIZED_SCENE(func_149(), uLocal_3346, cLocal_3307, sLocal_3319, 1.5f, -4f, 4, 4, 1148846080, 0);
							}
							else
							{
								TASK::TASK_SYNCHRONIZED_SCENE(func_149(), uLocal_3346, cLocal_3306, sLocal_3318, 1000f, -4f, 4, 4, 1148846080, 0);
							}
							RECORDING::_0x293220DA1B46CEBC(4f, 2f, 4);
							iLocal_4761 = 2;
						}
						if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3345) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3345) >= 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3345))
						{
							uLocal_3345 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(func_268(), uLocal_3345, cLocal_3305, sLocal_3323, 4f, -4f, 4, 4, 1148846080, 0);
						}
						break;
				}
			}
			else
			{
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3344) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3344) >= 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3344))
				{
					uLocal_3344 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(func_147(), uLocal_3344, cLocal_3305, sLocal_3308, 1.5f, -1.5f, 4, 4, 1148846080, 0);
				}
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3345) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3345) >= 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3345))
				{
					uLocal_3345 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(func_268(), uLocal_3345, cLocal_3305, sLocal_3323, 1.5f, -1.5f, 4, 4, 1148846080, 0);
				}
			}
			if (!bLocal_3332)
			{
				if (GlobalFunc_2773(func_268()))
				{
					if ((MISC::IS_BULLET_IN_ANGLED_AREA(1733.291f, -1628.859f, 112.8326f, 1732.591f, -1621.279f, 111.4262f, 9.5f, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(func_268(), func_149(), 1)) || FIRE::IS_ENTITY_ON_FIRE(func_268()))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						HUD::DISPLAY_RADAR(0);
						HUD::DISPLAY_HUD(0);
						CAM::SET_CAM_ACTIVE(uLocal_3052, 1);
						uLocal_3345 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(func_268(), uLocal_3345, cLocal_3306, sLocal_3326, 8f, -4f, 4, 4, 1148846080, 0);
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_3052, uLocal_3345, "cam_trevor_death_reaction_pt", cLocal_3306);
						CAM::SET_CAM_ACTIVE(uLocal_3052, 1);
						PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(func_268(), "burning_1", 0);
						CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
						uLocal_3344 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(func_147(), uLocal_3344, cLocal_3307, sLocal_3314, 1000f, -1.5f, 4, 4, 1148846080, 0);
						uLocal_3346 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(func_149(), uLocal_3346, cLocal_3307, sLocal_3319, 1.5f, -1.5f, 4, 4, 1148846080, 0);
						bLocal_3333 = true;
						GlobalFunc_553(846);
						RECORDING::_0x293220DA1B46CEBC(4f, 4f, 4);
						iLocal_4761 = 2;
					}
				}
				else
				{
					CAM::SET_CAM_ACTIVE(uLocal_3052, 1);
					uLocal_3345 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(func_268(), uLocal_3345, cLocal_3306, sLocal_3326, 8f, -4f, 4, 4, 1148846080, 0);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_3052, uLocal_3345, "cam_trevor_death_reaction_pt", cLocal_3306);
					CAM::SET_CAM_ACTIVE(uLocal_3052, 1);
					PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(func_268(), "burning_1", 0);
					CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
					uLocal_3344 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(func_147(), uLocal_3344, cLocal_3307, sLocal_3314, 1000f, -1.5f, 4, 4, 1148846080, 0);
					uLocal_3346 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(func_149(), uLocal_3346, cLocal_3307, sLocal_3319, 1.5f, -1.5f, 4, 4, 1148846080, 0);
					bLocal_3333 = true;
					iLocal_4761 = 2;
				}
				if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(1733.242f, -1625.563f, 111.4323f, 4.5f) > 0)
				{
					CAM::SET_CAM_ACTIVE(uLocal_3052, 1);
					uLocal_3345 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(func_268(), uLocal_3345, cLocal_3306, sLocal_3326, 8f, -4f, 4, 4, 1148846080, 0);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_3052, uLocal_3345, "cam_trevor_death_reaction_pt", cLocal_3306);
					CAM::SET_CAM_ACTIVE(uLocal_3052, 1);
					PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(func_268(), "burning_1", 0);
					CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
					uLocal_3344 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(func_147(), uLocal_3344, cLocal_3307, sLocal_3314, 1000f, -1.5f, 4, 4, 1148846080, 0);
					uLocal_3346 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(func_149(), uLocal_3346, cLocal_3307, sLocal_3319, 1000f, -1.5f, 4, 4, 1148846080, 0);
					bLocal_3333 = true;
					iLocal_4761 = 2;
				}
				if (GlobalFunc_2773(Local_3063[0 /*2*/]))
				{
					if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(1726.745f, -1622.953f, 111.4602f, 1f) > 0)
					{
						ENTITY::SET_ENTITY_INVINCIBLE(Local_3063[0 /*2*/], 1);
					}
					if (FIRE::IS_ENTITY_ON_FIRE(Local_3063[0 /*2*/]))
					{
						FIRE::STOP_ENTITY_FIRE(Local_3063[0 /*2*/]);
					}
				}
				if (GlobalFunc_2773(iLocal_3054))
				{
					if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(1726.745f, -1622.953f, 111.4602f, 1f) > 0)
					{
						ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3054, 1);
					}
					if (FIRE::IS_ENTITY_ON_FIRE(iLocal_3054))
					{
						FIRE::STOP_ENTITY_FIRE(iLocal_3054);
					}
				}
			}
			break;
		
		case 2:
			GlobalFunc_702(1, 0, 1);
			if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(1726.745f, -1622.953f, 111.4602f, 1f) > 0)
			{
				FIRE::STOP_FIRE_IN_RANGE(1726.745f, -1622.953f, 111.4602f, 1f);
			}
			if (GlobalFunc_2773(Local_3063[0 /*2*/]))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(Local_3063[0 /*2*/], 0);
			}
			if (GlobalFunc_2773(iLocal_3054))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3054, 0);
			}
			if (iLocal_3049 == 0)
			{
				if (GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_fin_fire_petrol_trev", 1734f, -1624.4f, 111.5f, 0f, 0f, 0f, 1065353216, 0, 0, 0))
				{
					iLocal_3049 = 1;
				}
			}
			if (iLocal_3044 == 0)
			{
				if (iLocal_3043 == 1)
				{
					AUDIO::STOP_SOUND(uLocal_4769);
					AUDIO::PLAY_STREAM_FRONTEND();
					iLocal_3044 = 1;
				}
			}
			FIRE::START_SCRIPT_FIRE(1734.289f, -1623.597f, 111.4235f, 5, 1);
			FIRE::START_SCRIPT_FIRE(1733.27f, -1624.463f, 111.4264f, 5, 1);
			FIRE::START_SCRIPT_FIRE(1735.649f, -1625.712f, 111.4256f, 5, 1);
			FIRE::START_SCRIPT_FIRE(1732.421f, -1625.293f, 111.4304f, 5, 1);
			FIRE::START_SCRIPT_FIRE(1733.443f, -1625.883f, 111.4298f, 5, 1);
			FIRE::START_SCRIPT_FIRE(1732.6f, -1626.659f, 111.4341f, 5, 1);
			FIRE::START_SCRIPT_FIRE(1733.03f, -1627.777f, 111.4357f, 5, 1);
			FIRE::START_SCRIPT_FIRE(1731.666f, -1626.08f, 111.4369f, 5, 1);
			FIRE::START_SCRIPT_FIRE(1734.278f, -1623.792f, 111.4236f, 5, 1);
			if (GlobalFunc_2773(func_268()))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(func_268(), 0);
				ENTITY::SET_ENTITY_PROOFS(func_268(), 1, 0, 0, 1, 1, 0, 0, 0);
				FIRE::START_ENTITY_FIRE(func_268());
				GlobalFunc_173(&uLocal_3136, 1, func_268(), "Trevor", 0, 1);
			}
			if (GlobalFunc_2773(Local_3063[1 /*2*/]))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(Local_3063[1 /*2*/], 1);
			}
			HUD::CLEAR_PRINTS();
			if (HUD::DOES_BLIP_EXIST(uLocal_3303))
			{
				HUD::REMOVE_BLIP(&uLocal_3303);
			}
			func_152(4);
			AUDIO::STOP_AUDIO_SCENES();
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_1_TREVOR_DIES_SCENE"))
			{
				AUDIO::START_AUDIO_SCENE("FIN_1_TREVOR_DIES_SCENE");
			}
			iLocal_3354 = MISC::GET_GAME_TIMER();
			iLocal_3334 = 1;
			iLocal_3367 = MISC::GET_GAME_TIMER();
			iLocal_4761++;
			break;
		
		case 3:
			if (GlobalFunc_2773(func_268()))
			{
				ENTITY::SET_ENTITY_HEALTH(func_268(), 300);
			}
			if (iLocal_3044 == 0)
			{
				if (iLocal_3043 == 1)
				{
					AUDIO::PLAY_STREAM_FRONTEND();
					iLocal_3044 = 1;
				}
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_3354) > 2000)
			{
				if (GlobalFunc_2773(func_268()) && !FIRE::IS_ENTITY_ON_FIRE(func_268()))
				{
					FIRE::START_ENTITY_FIRE(func_268());
				}
			}
			if (iLocal_3334 && (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3346) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3346) >= 0.266f))
			{
				CAM::SET_CAM_ACTIVE(uLocal_3052, 1);
				CAM::SET_CAM_ACTIVE(uLocal_3051, 0);
				iLocal_3334 = 0;
			}
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3344) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3344) >= 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3344))
			{
				uLocal_3344 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
				if (bLocal_3332)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(func_147(), uLocal_3344, cLocal_3306, sLocal_3315, 1000f, -4f, 4, 4, 1148846080, 0);
				}
				else
				{
					TASK::TASK_SYNCHRONIZED_SCENE(func_147(), uLocal_3344, cLocal_3307, sLocal_3316, 1000f, -1.5f, 4, 4, 1148846080, 0);
				}
			}
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3346) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3346) >= 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3346))
			{
				uLocal_3346 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
				if (bLocal_3333)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(func_149(), uLocal_3346, cLocal_3307, sLocal_3321, 4f, -4f, 4, 4, 1148846080, 0);
				}
				else
				{
					TASK::TASK_SYNCHRONIZED_SCENE(func_149(), uLocal_3346, cLocal_3306, sLocal_3320, 4f, -4f, 4, 4, 1148846080, 0);
				}
			}
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3345) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3345) >= 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3345))
			{
				uLocal_3345 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(func_268(), uLocal_3345, cLocal_3306, sLocal_3327, 4f, -4f, 32, 0, 1148846080, 0);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_3345, 1);
				PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(func_268());
				ENTITY::SET_ENTITY_INVINCIBLE(func_268(), 0);
				ENTITY::SET_ENTITY_INVINCIBLE(func_149(), 1);
				ENTITY::SET_ENTITY_INVINCIBLE(func_147(), 1);
				iLocal_4761++;
			}
			break;
		
		case 4:
			GlobalFunc_173(&uLocal_3136, 2, func_147(), "Michael", 0, 1);
			GlobalFunc_173(&uLocal_3136, 0, PLAYER::PLAYER_PED_ID(), "Franklin", 0, 1);
			GlobalFunc_10618(&uLocal_3136, "FIN1AUD", "FIN1_LOVEGAS", 7, 0, 0, 0);
			uLocal_3344 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(func_147(), uLocal_3344, cLocal_3307, sLocal_3317, 4f, -4f, 4, 4, 1148846080, 0);
			uLocal_3346 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(func_149(), uLocal_3346, cLocal_3307, sLocal_3322, 4f, -4f, 4, 4, 1148846080, 0);
			if (GlobalFunc_2773(Local_3063[0 /*2*/]))
			{
				VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(Local_3063[0 /*2*/], 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_3063[0 /*2*/], 4000f);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_3063[0 /*2*/], 1);
			}
			if (GlobalFunc_2773(Local_3063[1 /*2*/]))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(Local_3063[1 /*2*/], 0);
			}
			FIRE::ADD_EXPLOSION(1732.579f, -1628.077f, 111.4391f, 7, 1056964608, 1, 0, 1065353216);
			uLocal_3304 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
			CAM::SET_CAM_ACTIVE(uLocal_3304, 1);
			CAM::PLAY_CAM_ANIM(uLocal_3304, "cam_alternate_gas_tanker_explosion_outro", cLocal_3307, 1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 0, 2);
			iLocal_3354 = MISC::GET_GAME_TIMER();
			iLocal_3340 = 0;
			iLocal_4761++;
			break;
		
		case 5:
			if (iLocal_3340 == 0)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_3354 + 1000)
				{
					GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_fin_env_trev_sky", PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 0f, 0f, 0f, 11816, 1065353216, 0, 0, 0);
					iLocal_3340 = 1;
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3344) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3344) >= 0.8f)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FINA_END");
				if (GlobalFunc_2773(func_268()))
				{
					ENTITY::SET_ENTITY_HEALTH(func_268(), 0);
				}
				iLocal_4761 = 0;
				func_151(4);
			}
			break;
	}
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		func_172(0);
	}
	if (iLocal_3043 == 0)
	{
		if (AUDIO::LOAD_STREAM("FINALE_A_KILL_TREVOR_SCENE_MASTER", 0))
		{
			iLocal_3043 = 1;
		}
	}
	if (iLocal_4761 <= 2)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_3330) > 500)
		{
			PAD::SET_PAD_SHAKE(0, 250, 80);
			iLocal_3330 = MISC::GET_GAME_TIMER();
		}
	}
	else if ((MISC::GET_GAME_TIMER() - iLocal_3367) > 1500 && PAD::IS_CONTROL_JUST_PRESSED(2, 201))
	{
		AUDIO::STOP_STREAM();
		iLocal_4764 = 4;
		iLocal_4765 = 1;
	}
}

int func_151(int iParam0)//Position - 0xD876
{
	if (iLocal_4759 == 0)
	{
		iLocal_4762 = iParam0;
		iLocal_4759 = 1;
		return 1;
	}
	return 0;
}

void func_152(int iParam0)//Position - 0xD896
{
	switch (iParam0)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT() && !GlobalFunc_Is_Mission_Retry())
			{
				STREAMING::REQUEST_IPL("DES_tankercrash");
				STREAMING::REQUEST_IPL("tankerexp_grp0");
				while (!STREAMING::IS_IPL_ACTIVE("DES_tankercrash") || !STREAMING::IS_IPL_ACTIVE("tankerexp_grp0"))
				{
					SYSTEM::WAIT(0);
				}
			}
			break;
		
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT() && !GlobalFunc_Is_Mission_Retry())
			{
				STREAMING::REQUEST_IPL("DES_tankercrash");
				STREAMING::REQUEST_IPL("tankerexp_grp0");
				while (!STREAMING::IS_IPL_ACTIVE("DES_tankercrash") || !STREAMING::IS_IPL_ACTIVE("tankerexp_grp0"))
				{
					SYSTEM::WAIT(0);
				}
			}
			GlobalFunc_746(&uLocal_3368, 0, "BB_FINALE");
			GlobalFunc_718(&uLocal_3368, joaat("scrap"));
			GlobalFunc_718(&uLocal_3368, joaat("s_m_y_xmech_02"));
			GlobalFunc_727(&uLocal_3368, "FINA_TRUCK");
			GlobalFunc_718(&uLocal_3368, joaat("sandking"));
			GlobalFunc_718(&uLocal_3368, joaat("a_m_m_salton_01"));
			GlobalFunc_727(&uLocal_3368, "FINA_SAND");
			break;
		
		case 2:
			if (CAM::IS_SCREEN_FADED_OUT() && !GlobalFunc_Is_Mission_Retry())
			{
				STREAMING::REQUEST_IPL("DES_tankercrash");
				STREAMING::REQUEST_IPL("tankerexp_grp0");
				while (!STREAMING::IS_IPL_ACTIVE("DES_tankercrash") || !STREAMING::IS_IPL_ACTIVE("tankerexp_grp0"))
				{
					SYSTEM::WAIT(0);
				}
			}
			GlobalFunc_746(&uLocal_3368, 2, "Finale1");
			GlobalFunc_746(&uLocal_3368, 3, "Finale1");
			break;
		
		case 3:
			if (CAM::IS_SCREEN_FADED_OUT() && !GlobalFunc_Is_Mission_Retry())
			{
				STREAMING::REQUEST_IPL("DES_tankerexp");
				while (!STREAMING::IS_IPL_ACTIVE("DES_tankerexp"))
				{
					SYSTEM::WAIT(0);
				}
			}
			GlobalFunc_719(&uLocal_3368, cLocal_3305);
			GlobalFunc_719(&uLocal_3368, cLocal_3306);
			GlobalFunc_719(&uLocal_3368, cLocal_3307);
			break;
		
		case 4:
			if (CAM::IS_SCREEN_FADED_OUT() && !GlobalFunc_Is_Mission_Retry())
			{
				STREAMING::REQUEST_IPL("tankerexp_grp2");
				while (!STREAMING::IS_IPL_ACTIVE("tankerexp_grp2"))
				{
					SYSTEM::WAIT(0);
				}
			}
			break;
		
		case 5:
			break;
	}
}




















void func_172(int iParam0)//Position - 0xE954
{
	if (iParam0 != func_147() || func_147() == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_147()))
		{
			if (!PED::IS_PED_INJURED(func_147()))
			{
				func_255("MICHAEL", func_147(), joaat("player_zero"), 2);
			}
		}
		else
		{
			func_173(0, "MICHAEL", 2);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 3, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 4, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 5, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 6, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 8, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 9, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 10, 0, 0, 0);
		}
	}
	if (iParam0 != func_268())
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_268()))
		{
			if (!PED::IS_PED_INJURED(func_268()))
			{
				func_255("TREVOR", func_268(), joaat("player_two"), 2);
			}
		}
		else
		{
			func_173(2, "Trevor", 2);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 3, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 4, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 5, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 6, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 8, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 9, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 10, 0, 0, 0);
		}
	}
	if (GlobalFunc_2773(func_149()) && iParam0 != func_149())
	{
		func_255("FRANKLIN", PLAYER::PLAYER_PED_ID(), joaat("player_one"), 2);
	}
	func_69(0);
}

void func_173(int iParam0, char* sParam1, int iParam2)//Position - 0xEAC3
{
	struct<50> Var0;
	struct<50> Var65;
	int iVar130;
	int iVar131;
	var uVar132;
	struct<14> Var133;
	int iVar147;
	int iVar148;
	int iVar149;
	int iVar150;
	int iVar151;
	int iVar152;
	
	if (!GlobalFunc_42(iParam0))
	{
		return;
	}
	Var0 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iParam0 /*65*/] };
	Var65 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iParam0 /*65*/] };
	iVar130 = 0;
	while (iVar130 < 12)
	{
		GlobalFunc_7687(0, iVar130, &(Var65.f_13[iVar130]), &(Var65[iVar130]), &(Var65.f_26[iVar130]), iParam2, iParam0);
		iVar130++;
	}
	iVar130 = 0;
	while (iVar130 < 9)
	{
		GlobalFunc_7686(0, iVar130, &(Var65.f_39[iVar130]), &(Var65.f_49[iVar130]), iParam2, iParam0);
		iVar130++;
	}
	iVar147 = GlobalFunc_4917(iParam0);
	iVar148 = 0;
	iVar149 = 0;
	iVar131 = 0;
	while (iVar131 < 12)
	{
		if (Var65.f_13[iVar131] != Var0.f_13[iVar131] || Var65[iVar131] != Var0[iVar131])
		{
			if (GlobalFunc_4911(iVar147, GlobalFunc_33(iVar131), Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[iVar131 /*4*/][iParam0], &uVar132))
			{
				Var133 = { GlobalFunc_10836(iVar147, 2, Var65.f_59) };
				Var65.f_13[2] = Var133.f_3;
				Var65[2] = Var133.f_4;
				iVar148 = 1;
			}
			if (GlobalFunc_4912(iVar147, GlobalFunc_33(iVar131), Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[iVar131 /*4*/][iParam0], &uVar132))
			{
				Var133 = { GlobalFunc_10836(iVar147, 1, Var65.f_62) };
				Var65.f_13[1] = Var133.f_3;
				Var65[1] = Var133.f_4;
				iVar149 = 1;
			}
		}
		iVar131++;
	}
	iVar131 = 0;
	while (iVar131 < 9)
	{
		if (Var65.f_39[iVar131] != Var0.f_39[iVar131] || Var65.f_49[iVar131] != Var0.f_49[iVar131])
		{
			if (GlobalFunc_4911(iVar147, 14, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_253[iVar131 /*4*/][iParam0], &uVar132))
			{
				Var133 = { GlobalFunc_10836(iVar147, 2, Var65.f_59) };
				Var65.f_13[2] = Var133.f_3;
				Var65[2] = Var133.f_4;
				iVar148 = 1;
			}
			if (GlobalFunc_4912(iVar147, 14, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_253[iVar131 /*4*/][iParam0], &uVar132))
			{
				Var133 = { GlobalFunc_10836(iVar147, 1, Var65.f_62) };
				Var65.f_13[1] = Var133.f_3;
				Var65[1] = Var133.f_4;
				iVar149 = 1;
			}
		}
		iVar131++;
	}
	if (iVar149 || iVar148)
	{
		iVar150 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[1 /*4*/][iParam0];
		iVar151 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[2 /*4*/][iParam0];
		iVar152 = GlobalFunc_24(iVar147, iVar151, iVar150);
		if (iVar152 != -99)
		{
			Var133 = { GlobalFunc_10836(iVar147, 0, iVar152) };
			Var65.f_13[0] = Var133.f_3;
			Var65[0] = Var133.f_4;
		}
	}
	iVar131 = 0;
	while (iVar131 < 12)
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam1, iVar131, Var65.f_13[iVar131], Var65[iVar131], GlobalFunc_4917(iParam0));
		iVar131++;
	}
	iVar131 = 0;
	while (iVar131 < 9)
	{
		if (Global_89752[iParam0 /*65*/].f_39[iVar131] == -1 || Global_89752[iParam0 /*65*/].f_39[iVar131] == 255)
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam1, iVar131, -1, 0, GlobalFunc_4917(iParam0));
		}
		else
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam1, iVar131, Var65.f_39[iVar131], Var65.f_49[iVar131], GlobalFunc_4917(iParam0));
		}
		iVar131++;
	}
	GlobalFunc_10996(sParam1, iParam0);
}


















































































void func_255(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x26F57
{
	struct<50> Var0;
	int iVar65;
	
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	GlobalFunc_10947(iParam1, &Var0, iParam3);
	iVar65 = 0;
	while (iVar65 < 12)
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam0, iVar65, Var0.f_13[iVar65], Var0[iVar65], iParam2);
		iVar65++;
	}
	iVar65 = 0;
	while (iVar65 < 9)
	{
		if (Var0.f_39[iVar65] == -1 || Var0.f_39[iVar65] == 255)
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar65, -1, 0, iParam2);
		}
		else
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar65, Var0.f_39[iVar65], Var0.f_49[iVar65], iParam2);
		}
		iVar65++;
	}
}










void func_265()//Position - 0x276EA
{
	switch (iLocal_3055)
	{
		case 0:
			uLocal_3059 = OBJECT::GET_RAYFIRE_MAP_OBJECT(1725.755f, -1636.373f, 117.9358f, 20f, "des_tankerexplosion");
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_3059))
			{
				iLocal_3055++;
			}
			break;
		
		case 1:
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_3059, 4);
			iLocal_3055++;
			break;
		
		case 2:
			if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_3059) == 5)
			{
				iLocal_3055++;
			}
			break;
		
		case 3:
			if (iLocal_4761 > 3)
			{
				OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_3059, 6);
				iLocal_3055++;
			}
			break;
		
		case 4:
			if (iLocal_4761 == 5)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3344) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3344) >= 0.16f)
				{
					OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_3059, 9);
					iLocal_3055++;
				}
			}
			break;
		
		case 5:
			if (iLocal_3041 == 0)
			{
				if (iLocal_4761 == 5)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3344) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3344) >= 0.184f)
					{
						if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_3059))
						{
							if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_3059) == 9)
							{
								OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_3059, 10);
								iLocal_3041 = 1;
							}
						}
					}
				}
			}
			break;
	}
}



int func_268()//Position - 0x278AB
{
	return Local_3076[1 /*2*/];
}

void func_269()//Position - 0x278B9
{
	PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
	switch (iLocal_4761)
	{
		case 0:
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				GlobalFunc_Checkpoint3(2, "Stage 2: Fuel Crash CutScene", 0, 0, 0, 1);
				STREAMING::REMOVE_IPL("DES_tankerexp");
				STREAMING::REMOVE_IPL("tankerexp_grp1");
				STREAMING::REMOVE_IPL("tankerexp_grp2");
				iLocal_3042 = 0;
				iLocal_3037 = 0;
				iLocal_3039 = 0;
				iLocal_3040 = 0;
				iLocal_3058 = 0;
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3063[1 /*2*/]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3063[1 /*2*/]);
				}
				AUDIO::STOP_AUDIO_SCENES();
				AUDIO::START_AUDIO_SCENE("FIN_1_TREVOR_CRASH_SCENE");
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_3063[1 /*2*/], 0);
				func_69(0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3076[1 /*2*/], "Trevor", 0, 0, 3);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Michael", 2, GlobalFunc_4917(0), 3);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Showroom_Car", 2, joaat("premier"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3063[1 /*2*/], "Trevors_car", 0, 0, 0);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				iLocal_4761++;
			}
			else if (iLocal_3047 == 1)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_3057 + 5000)
				{
					func_270(0);
				}
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				STREAMING::REQUEST_PTFX_ASSET();
				PED::REQUEST_ACTION_MODE_ASSET("FRANKLIN_ACTION");
				if (!ENTITY::IS_ENTITY_DEAD(Local_3063[1 /*2*/]))
				{
					VEHICLE::SET_VEHICLE_LIGHTS(Local_3063[1 /*2*/], 2);
				}
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Showroom_Car", 0)))
				{
					if (!ENTITY::IS_ENTITY_DEAD(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Showroom_Car", 0)))
					{
						VEHICLE::SET_VEHICLE_LIGHTS(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Showroom_Car", 0)), 2);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Michael", joaat("player_zero"))))
				{
					if (!ENTITY::IS_ENTITY_DEAD(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Michael", joaat("player_zero"))))
					{
						Local_3076[0 /*2*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Michael", joaat("player_zero")));
					}
				}
				if (iLocal_3037 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_3063[2 /*2*/]))
					{
						ENTITY::SET_ENTITY_COORDS(Local_3063[2 /*2*/], 1772.741f, -1465.817f, 111.5278f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_3063[2 /*2*/], 185.4462f);
						iLocal_3037 = 1;
					}
				}
				func_152(3);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				AUDIO::TRIGGER_MUSIC_EVENT("FINA_NITRO_CRASH");
				AUDIO::STOP_AUDIO_SCENES();
				PED::SET_PED_USING_ACTION_MODE(func_149(), 1, -1, 0);
				PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
				PED::CLEAR_PED_PROP(Local_3076[1 /*2*/], 0);
				PED::CLEAR_PED_PROP(Local_3076[0 /*2*/], 0);
				PLAYER::REMOVE_PLAYER_HELMET(PLAYER::PLAYER_ID(), 1);
				func_67(1, 0, 0, 3000, 0);
				iLocal_3337 = 0;
				iLocal_3338 = 0;
				iLocal_3339 = 0;
				iLocal_3343 = 0;
				iLocal_3037 = 0;
				iLocal_3048 = 0;
				iLocal_3050 = 0;
				iLocal_4761++;
			}
			break;
		
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (iLocal_3050 == 0)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 17814)
					{
						RECORDING::_0x293220DA1B46CEBC(12f, 0f, 3);
						iLocal_3050 = 1;
					}
				}
				if (iLocal_3048 == 0)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 8308)
					{
						if (STREAMING::HAS_PTFX_ASSET_LOADED())
						{
							if (GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_fin_trev_car_impact", 1732.5f, -1628.5f, 112.8f, 0f, 0f, 0f, 1065353216, 0, 0, 0))
							{
								iLocal_3048 = 1;
							}
						}
					}
				}
				if (iLocal_3042 == 0)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 36635 && CAM::IS_SCREEN_FADED_IN())
					{
						STREAMING::REMOVE_IPL("DES_tankercrash");
						STREAMING::REMOVE_IPL("tankercrash_grp2");
						STREAMING::REMOVE_IPL("tankerexp_grp0");
						STREAMING::REQUEST_IPL("DES_tankerexp");
						iLocal_3042 = 1;
					}
				}
				if (iLocal_3039 == 0)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 8330)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_3063[1 /*2*/]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_3063[1 /*2*/]))
							{
								VEHICLE::SET_VEHICLE_LIGHTS(Local_3063[1 /*2*/], 1);
								uLocal_4769 = AUDIO::GET_SOUND_ID();
								AUDIO::PLAY_SOUND_FROM_COORD(uLocal_4769, "FINALE_PETROL_SPILL", 1733f, -1627f, 113f, 0, 0, 0, 0);
								iLocal_3039 = 1;
							}
						}
					}
				}
				if (iLocal_3040 == 0)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 8049)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3054))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_3054))
							{
								VEHICLE::SET_VEHICLE_LIGHTS(iLocal_3054, 1);
								iLocal_3040 = 1;
							}
						}
					}
				}
				if (iLocal_3037 == 0)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 8088)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_3063[2 /*2*/]))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3063[2 /*2*/], 0))
							{
								ENTITY::SET_ENTITY_COORDS(Local_3063[2 /*2*/], 1732.613f, -1578.495f, 111.5987f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(Local_3063[2 /*2*/], 134.9147f);
								iLocal_3037 = 1;
							}
						}
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3054))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Showroom_Car", 0)))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Showroom_Car", 0), 1, 0);
						iLocal_3054 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Showroom_Car", 0));
					}
				}
				if (!iLocal_3337)
				{
					iLocal_3337 = 1;
				}
				if (!iLocal_3339)
				{
					if (ENTITY::DOES_ENTITY_EXIST(func_268()))
					{
						if (!PED::IS_PED_INJURED(func_268()))
						{
							if (ENTITY::HAS_ANIM_EVENT_FIRED(func_268(), MISC::GET_HASH_KEY("Trevor_Damage")))
							{
								PED::SET_PED_WETNESS_HEIGHT(func_268(), 1f);
								PED::SET_ENABLE_PED_ENVEFF_SCALE(func_268(), 1);
								PED::SET_PED_ENVEFF_COLOR_MODULATOR(func_268(), 73, 51, 99);
								PED::SET_PED_ENVEFF_SCALE(func_268(), 0.6f);
								PED::_0x110F526AB784111F(func_268(), 0.3f);
								PED::APPLY_PED_DAMAGE_PACK(func_268(), "BigHitByVehicle", 0f, 1f);
								iLocal_3339 = 1;
							}
						}
					}
				}
				if (!iLocal_3338)
				{
					if (ENTITY::DOES_ENTITY_EXIST(func_147()))
					{
						if (!PED::IS_PED_INJURED(func_147()))
						{
							if (ENTITY::HAS_ANIM_EVENT_FIRED(func_147(), MISC::GET_HASH_KEY("Michael_Damage")))
							{
								iLocal_3338 = 1;
							}
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				PED::SET_PED_USING_ACTION_MODE(func_149(), 1, -1, 0);
				PED::FORCE_PED_MOTION_STATE(func_149(), -633298724, 0, 1, 0);
				bLocal_3358 = true;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				uLocal_3345 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(func_268(), uLocal_3345, cLocal_3305, sLocal_3323, 1000f, -4f, 0, 0, 1148846080, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_268(), 0, 0);
				iLocal_3359 = 1;
				RECORDING::_0x81CBAE94390F9F89();
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3076[0 /*2*/], 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_3076[0 /*2*/], iLocal_3301);
				PED::SET_PED_ACCURACY(Local_3076[0 /*2*/], 100);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_3076[0 /*2*/], 27, 1);
				AUDIO::STOP_PED_SPEAKING(Local_3076[0 /*2*/], 1);
				PED::SET_PED_CONFIG_FLAG(Local_3076[0 /*2*/], 208, 1);
				uLocal_3344 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_3076[0 /*2*/], uLocal_3344, cLocal_3305, sLocal_3308, 1.5f, -4f, 0, 0, 1148846080, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_3076[0 /*2*/], 0, 0);
				iLocal_3362 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Showroom_Car", 0))
			{
				if (iLocal_3040 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3054))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_3054))
						{
							VEHICLE::SET_VEHICLE_LIGHTS(iLocal_3054, 1);
							ENTITY::SET_ENTITY_PROOFS(iLocal_3054, 0, 1, 1, 0, 0, 1, 0, 0);
							iLocal_3040 = 1;
						}
					}
				}
				iLocal_3361 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_car", 0))
			{
				if (iLocal_3039 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_3063[1 /*2*/]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_3063[1 /*2*/]))
						{
							VEHICLE::SET_VEHICLE_LIGHTS(Local_3063[1 /*2*/], 1);
							iLocal_3039 = 1;
						}
					}
				}
				iLocal_3360 = 1;
			}
			if ((((bLocal_3358 && iLocal_3360) && iLocal_3359) && iLocal_3361) && iLocal_3362)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_3063[0 /*2*/]))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Local_3063[0 /*2*/], 0);
				}
				HUD::DISPLAY_RADAR(1);
				HUD::DISPLAY_HUD(1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				iLocal_3366 = 0;
				if (iLocal_3037 == 0)
				{
					ENTITY::SET_ENTITY_COORDS(Local_3063[2 /*2*/], 1728.375f, -1610.305f, 111.4705f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_3063[2 /*2*/], 160.3058f);
					iLocal_3037 = 1;
				}
				if (GlobalFunc_2773(func_268()))
				{
					PED::SET_PED_WETNESS_HEIGHT(func_268(), 1f);
				}
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					iLocal_3058 = 1;
					while (iLocal_3058 == 1)
					{
						switch (iLocal_3056)
						{
							case 0:
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
								SYSTEM::SETTIMERB(0);
								uLocal_3060 = OBJECT::GET_RAYFIRE_MAP_OBJECT(1725.755f, -1636.373f, 117.9358f, 20f, "DES_tankercrash");
								if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_3060))
								{
									OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_3060, 9);
									iLocal_3056++;
								}
								else
								{
									iLocal_3056++;
								}
								break;
							
							case 1:
								if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_3060))
								{
									if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_3060) == 10)
									{
										iLocal_3056++;
									}
									else if (SYSTEM::TIMERB() > 10000)
									{
										iLocal_3056++;
									}
								}
								else
								{
									iLocal_3056++;
								}
								break;
							
							case 2:
								STREAMING::REMOVE_IPL("DES_tankercrash");
								STREAMING::REMOVE_IPL("tankerexp_grp0");
								STREAMING::REMOVE_IPL("tankercrash_grp1");
								STREAMING::REMOVE_IPL("tankercrash_grp2");
								STREAMING::REQUEST_IPL("DES_tankerexp");
								while (!STREAMING::IS_IPL_ACTIVE("DES_tankerexp"))
								{
									SYSTEM::WAIT(0);
								}
								iLocal_3056++;
								break;
							
							case 3:
								if (SYSTEM::TIMERB() > 5000)
								{
									iLocal_3058 = 0;
								}
								break;
						}
						SYSTEM::WAIT(0);
						if (!CAM::IS_SCREEN_FADED_OUT())
						{
							CAM::DO_SCREEN_FADE_OUT(0);
						}
						if (SYSTEM::TIMERB() > 10000)
						{
							iLocal_3058 = 0;
						}
					}
				}
				iLocal_4761 = 3;
			}
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_3063[0 /*2*/]))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Local_3063[0 /*2*/], 0);
				}
				HUD::DISPLAY_RADAR(1);
				HUD::DISPLAY_HUD(1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				iLocal_3366 = 0;
				if (iLocal_3037 == 0)
				{
					ENTITY::SET_ENTITY_COORDS(Local_3063[2 /*2*/], 1728.375f, -1610.305f, 111.4705f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_3063[2 /*2*/], 160.3058f);
					iLocal_3037 = 1;
				}
				if (GlobalFunc_2773(func_268()))
				{
					PED::SET_PED_WETNESS_HEIGHT(func_268(), 1f);
				}
				iLocal_4761 = 3;
			}
			break;
		
		case 3:
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			iLocal_3354 = MISC::GET_GAME_TIMER();
			iLocal_4761 = 0;
			func_151(3);
			break;
	}
	if (iLocal_4761 > 1)
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (CUTSCENE::GET_CUTSCENE_TIME() > 15019)
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_268()))
				{
					PED::SET_PED_WETNESS_ENABLED_THIS_FRAME(func_268());
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(func_268()))
		{
			PED::SET_PED_WETNESS_ENABLED_THIS_FRAME(func_268());
		}
	}
}

void func_270(int iParam0)//Position - 0x28252
{
	char* sVar0;
	
	AUDIO::TRIGGER_MUSIC_EVENT("FINA_FAIL");
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "FIN1_FAIL1";
			break;
		
		case 1:
			sVar0 = "FIN1_FAIL2";
			break;
		
		case 2:
			sVar0 = "CMN_MDIED";
			break;
		
		default:
			sVar0 = "FIN1_FAILDF";
			break;
	}
	GlobalFunc_10835(sVar0);
	while (!GlobalFunc_145())
	{
		if (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
		}
		SYSTEM::WAIT(0);
	}
	func_672();
	SCRIPT::TERMINATE_THIS_THREAD();
}











void func_281()//Position - 0x29122
{
	switch (iLocal_4761)
	{
		case 0:
			GlobalFunc_Checkpoint3(1, "Stage 1: Chase Trevor", 0, 0, 0, 1);
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
			AUDIO::TRIGGER_MUSIC_EVENT("FINA_CHASE");
			iLocal_3038 = 0;
			iLocal_3045 = 0;
			iLocal_3046 = 0;
			iLocal_3047 = 0;
			iLocal_3034 = 0;
			if (GlobalFunc_Is_Mission_Retry() && iLocal_4767)
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3063[1 /*2*/]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3063[1 /*2*/]);
				}
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3063[1 /*2*/]))
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(0, "BB_FINALE");
					while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(0, "BB_FINALE"))
					{
						SYSTEM::WAIT(0);
					}
					func_364("BB_FINALE", 0, 1, 1);
					SYSTEM::WAIT(0);
					func_363();
					SYSTEM::WAIT(0);
					if (ENTITY::DOES_ENTITY_EXIST(Local_3063[1 /*2*/]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3063[1 /*2*/], 0))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3063[1 /*2*/], 0, "BB_FINALE", 1);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_3063[1 /*2*/], 5000f);
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_3063[2 /*2*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3063[2 /*2*/], 0))
					{
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3063[2 /*2*/]);
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_3063[2 /*2*/], 25f);
					}
				}
				iLocal_4767 = 0;
			}
			else if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3063[1 /*2*/]))
			{
				VEHICLE::REQUEST_VEHICLE_RECORDING(0, "BB_FINALE");
				while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(0, "BB_FINALE"))
				{
					SYSTEM::WAIT(0);
				}
				func_364("BB_FINALE", 0, 1, 1);
				SYSTEM::WAIT(0);
				func_363();
				SYSTEM::WAIT(0);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3063[1 /*2*/], 0, "BB_FINALE", 1);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_3063[1 /*2*/], 5000f);
			}
			if (GlobalFunc_2773(func_268()))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(func_268(), 1);
			}
			Local_3063[1 /*2*/].f_1 = GlobalFunc_6783(Local_3063[1 /*2*/], 1, 0);
			GlobalFunc_164("FIN1_CHASE", 7500, 1);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_1_CHASE_IN_CAR"))
			{
				AUDIO::START_AUDIO_SCENE("FIN_1_CHASE_IN_CAR");
			}
			GlobalFunc_173(&uLocal_3136, 0, 0, "Michael", 0, 1);
			GlobalFunc_173(&uLocal_3136, 1, PLAYER::PLAYER_PED_ID(), "Franklin", 0, 1);
			GlobalFunc_601(20, 1);
			RECORDING::_0x293220DA1B46CEBC(0f, 10f, 4);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_3063[1 /*2*/], "FIN_1_TREVORS_TRUCK", 0);
			TASK::CLEAR_PED_TASKS(Local_3076[1 /*2*/]);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_3063[2 /*2*/], 1);
			iLocal_3357 = 0;
			iLocal_3355 = MISC::GET_GAME_TIMER();
			iLocal_4761++;
			break;
		
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
				GlobalFunc_164("FIN1_CHASE", 7000, 1);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(func_149(), 1) && (MISC::GET_GAME_TIMER() - iLocal_3355) > 500)
			{
				iLocal_3351 = 0;
				iLocal_3352 = 0;
				iLocal_3353 = 0;
				iLocal_4768 = 1;
				GlobalFunc_Checkpoint3(1, "Stage 1: Chase Trevor", 0, 0, 0, 1);
				iLocal_4761++;
			}
			break;
		
		case 2:
			if (iLocal_4768)
			{
				if (GlobalFunc_713(func_268(), 1770f, -1474.3f, 113f, 1) < 300f)
				{
					CUTSCENE::REMOVE_CUTSCENE();
					func_152(2);
					CUTSCENE::REQUEST_CUTSCENE("FIN_A_MCS_1", 8);
					STREAMING::NEW_LOAD_SCENE_START_SPHERE(1734.5f, -1635.1f, 113f, 100f, 1);
					iLocal_4768 = 0;
				}
			}
			if (!iLocal_3351)
			{
				if (GlobalFunc_713(func_268(), 1551.749f, -2200.639f, 76.5152f, 1) < 100f)
				{
					ENTITY::CREATE_FORCED_OBJECT(1551.749f, -2200.639f, 76.5152f, 10f, joaat("prop_fnclink_02p"), 1);
					iLocal_3351 = 1;
				}
			}
			if (!iLocal_3352)
			{
				if (GlobalFunc_713(func_149(), 1516.776f, -2105.474f, 75.6526f, 1) < 200f)
				{
					Local_3063[4 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("scrap"), 1519.609f, -2103.726f, 75.7564f, 278.7516f, 1, 1);
					Local_3076[3 /*2*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_3063[4 /*2*/], 26, joaat("s_m_y_xmech_02"), -1, 1, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3076[3 /*2*/], 1);
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_3076[3 /*2*/], Local_3063[4 /*2*/], "FINA_TRUCK", 262144, 0, 10, -1, -1082130432, 0, 1073741824);
					GlobalFunc_5174(&uLocal_3368, joaat("scrap"));
					GlobalFunc_5174(&uLocal_3368, joaat("s_m_y_xmech_02"));
					RECORDING::_0x293220DA1B46CEBC(5f, 5f, 3);
					iLocal_3352 = 1;
				}
			}
			if (!iLocal_3353)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(func_149(), 1742.712f, -1321.266f, 90.47571f, 25f, 25f, 20f, 0, 1, 0))
				{
					GlobalFunc_132(&(Local_3076[3 /*2*/]), 1, 0, 1);
					GlobalFunc_131(&(Local_3063[4 /*2*/]));
					Local_3063[5 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("sandking"), 1763.258f, -1437.422f, 111.4945f, 48.2981f, 1, 1);
					Local_3076[4 /*2*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_3063[5 /*2*/], 26, joaat("a_m_m_salton_01"), -1, 1, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3076[4 /*2*/], 1);
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_3076[4 /*2*/], Local_3063[5 /*2*/], "FINA_SAND", 786469, 0, 8, -1, -1082130432, 0, 1073741824);
					GlobalFunc_5174(&uLocal_3368, joaat("sandking"));
					GlobalFunc_5174(&uLocal_3368, joaat("a_m_m_salton_01"));
					RECORDING::_0x293220DA1B46CEBC(5f, 5f, 3);
					iLocal_3353 = 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_3063[1 /*2*/]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3063[1 /*2*/], 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3063[1 /*2*/]))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3063[1 /*2*/]) > 15000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3063[1 /*2*/]) < 26000f)
						{
							STREAMING::REQUEST_ADDITIONAL_COLLISION_AT_COORD(1284.9f, -2114.2f, 45.8f);
						}
					}
				}
			}
			if (iLocal_3038 == 0)
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3063[1 /*2*/]))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3063[1 /*2*/]) > 147292f)
					{
						GlobalFunc_173(&uLocal_3136, 0, 0, "Michael", 0, 1);
						GlobalFunc_173(&uLocal_3136, 1, PLAYER::PLAYER_PED_ID(), "Franklin", 0, 1);
						if (GlobalFunc_10664(&uLocal_3136, 0, "FIN1AUD", "MIKE_PHONE", 7, 0, 0, 1))
						{
							RECORDING::_0x293220DA1B46CEBC(5f, 5f, 3);
							iLocal_3038 = 1;
						}
					}
				}
			}
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3063[1 /*2*/]))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3063[1 /*2*/]) > 172930f)
				{
					GlobalFunc_132(&(Local_3076[4 /*2*/]), 1, 0, 1);
					GlobalFunc_131(&(Local_3063[5 /*2*/]));
					iLocal_4761++;
				}
			}
			break;
		
		case 3:
			if (fLocal_3350 > 250f)
			{
				func_270(0);
			}
			iLocal_4761++;
			break;
		
		case 4:
			MISC::SET_INSTANCE_PRIORITY_HINT(0);
			GlobalFunc_4948(&uLocal_3087, 0, 0);
			if (GlobalFunc_116(0))
			{
				GlobalFunc_7632(1);
			}
			if (HUD::DOES_BLIP_EXIST(Local_3063[1 /*2*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_3063[1 /*2*/].f_1));
			}
			STREAMING::NEW_LOAD_SCENE_STOP();
			if (iLocal_3047 == 0)
			{
				iLocal_3057 = MISC::GET_GAME_TIMER();
				iLocal_3047 = 1;
			}
			RECORDING::_0x293220DA1B46CEBC(5f, 5f, 3);
			iLocal_4761 = 0;
			func_151(2);
			break;
	}
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		func_172(0);
	}
	GlobalFunc_5979(-1794415470);
	if (ENTITY::DOES_ENTITY_EXIST(Local_3063[1 /*2*/]) && ENTITY::DOES_ENTITY_EXIST(Local_3063[2 /*2*/]))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3063[1 /*2*/]))
		{
			if (!PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3063[1 /*2*/]) < 25000f)
				{
					func_348(Local_3063[1 /*2*/], PLAYER::PLAYER_PED_ID(), &fLocal_3348, 1f, 25f, 35f, 100f, 1.7f, 1f, 0.7f, 0);
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3063[1 /*2*/]) > 25000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3063[1 /*2*/]) < 111000f)
				{
					func_348(Local_3063[1 /*2*/], PLAYER::PLAYER_PED_ID(), &fLocal_3348, 1.1f, 40f, 50f, 100f, 1.7f, 1f, 0.7f, 0);
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3063[1 /*2*/]) > 111000f)
				{
					func_348(Local_3063[1 /*2*/], PLAYER::PLAYER_PED_ID(), &fLocal_3348, 1.1f, 25f, 35f, 100f, 1.7f, 1f, 0.7f, 0);
				}
			}
			else
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3063[1 /*2*/]) < 25000f)
				{
					func_348(Local_3063[1 /*2*/], PLAYER::PLAYER_PED_ID(), &fLocal_3348, 1.5f, 25f, 35f, 100f, 1.7f, 1f, 0.7f, 0);
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3063[1 /*2*/]) > 25000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3063[1 /*2*/]) < 111000f)
				{
					func_348(Local_3063[1 /*2*/], PLAYER::PLAYER_PED_ID(), &fLocal_3348, 1.5f, 40f, 50f, 100f, 1.7f, 1f, 0.7f, 0);
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3063[1 /*2*/]) > 111000f)
				{
					func_348(Local_3063[1 /*2*/], PLAYER::PLAYER_PED_ID(), &fLocal_3348, 1.5f, 25f, 35f, 100f, 1.7f, 1f, 0.7f, 0);
				}
			}
			func_308(Local_3063[1 /*2*/], fLocal_3348);
			func_307();
		}
		ENTITY::SET_ENTITY_INVINCIBLE(Local_3063[1 /*2*/], 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_3063[0 /*2*/]))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3063[0 /*2*/]))
		{
			VEHICLE::SET_PLAYBACK_SPEED(Local_3063[0 /*2*/], fLocal_3348);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_149()) && ENTITY::DOES_ENTITY_EXIST(Local_3076[1 /*2*/]))
	{
		if (!PED::IS_PED_INJURED(func_149()) && !PED::IS_PED_INJURED(Local_3076[1 /*2*/]))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3063[1 /*2*/]))
			{
				fLocal_3350 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(func_149(), 1), ENTITY::GET_ENTITY_COORDS(Local_3076[1 /*2*/], 1));
				if (fLocal_3349 > 21000f && fLocal_3350 > 300f)
				{
					func_270(0);
				}
				else if (fLocal_3349 < 21000f && fLocal_3350 > 350f)
				{
					func_270(0);
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3063[1 /*2*/]) < 140000f)
				{
					if (iLocal_3357 == 0 && VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3063[1 /*2*/]) > 10000f)
					{
						GlobalFunc_173(&uLocal_3136, 0, func_149(), "FRANKLIN", 0, 1);
						GlobalFunc_173(&uLocal_3136, 1, Local_3076[1 /*2*/], "TREVOR", 0, 1);
						if (GlobalFunc_10618(&uLocal_3136, "FIN1AUD", "FIN1_CHS", 7, 0, 0, 0))
						{
							iLocal_3034 = MISC::GET_GAME_TIMER();
							iLocal_3045 = 1;
							iLocal_3357 = 1;
						}
					}
					if ((iLocal_3357 == 1 && VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3063[1 /*2*/]) > 15000f) && GlobalFunc_156(func_149(), Local_3076[1 /*2*/], 1) < 60f)
					{
						if (iLocal_3045 == 1)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_3034 + 8000)
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
								{
									if (!GlobalFunc_111() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
									{
										GlobalFunc_173(&uLocal_3136, 0, func_149(), "FRANKLIN", 0, 1);
										GlobalFunc_173(&uLocal_3136, 1, Local_3076[1 /*2*/], "TREVOR", 0, 1);
										if (GlobalFunc_10618(&uLocal_3136, "FIN1AUD", "FIN1_CALL", 7, 0, 0, 0))
										{
											iLocal_3034 = MISC::GET_GAME_TIMER();
											iLocal_3046 = 1;
											iLocal_3045 = 0;
										}
									}
								}
							}
						}
						if (iLocal_3046 == 1)
						{
							if (GlobalFunc_156(func_149(), Local_3076[1 /*2*/], 1) < 40f)
							{
								if (MISC::GET_GAME_TIMER() > iLocal_3034 + 8000)
								{
									if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
									{
										if (!GlobalFunc_111() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											GlobalFunc_173(&uLocal_3136, 0, func_149(), "FRANKLIN", 0, 1);
											GlobalFunc_173(&uLocal_3136, 1, Local_3076[1 /*2*/], "TREVOR", 0, 1);
											if (GlobalFunc_10618(&uLocal_3136, "FIN1AUD", "FIN1_CALLBCK", 7, 0, 0, 0))
											{
												iLocal_3034 = MISC::GET_GAME_TIMER();
												iLocal_3045 = 1;
												iLocal_3046 = 0;
											}
										}
									}
								}
							}
							else
							{
								iLocal_3034 = MISC::GET_GAME_TIMER();
								iLocal_3045 = 1;
								iLocal_3046 = 0;
							}
						}
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_3063[2 /*2*/]))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3063[2 /*2*/], 0))
		{
			func_270(1);
		}
	}
	GlobalFunc_10692(&uLocal_3087, Local_3063[1 /*2*/], 0, 0, 1, 1, 1);
	GlobalFunc_2216(Local_3063[1 /*2*/].f_1, Local_3063[1 /*2*/], 350f, 1061158912, 0);
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_1_FOCUS_CAM"))
		{
			AUDIO::START_AUDIO_SCENE("FIN_1_FOCUS_CAM");
		}
	}
	else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_1_FOCUS_CAM"))
	{
		AUDIO::STOP_AUDIO_SCENE("FIN_1_FOCUS_CAM");
	}
}


























void func_307()//Position - 0x2AC81
{
	iLocal_62 = 1;
}

void func_308(int iParam0, float fParam1)//Position - 0x2AC8C
{
	float fVar0;
	struct<3> Var1;
	int iVar4;
	
	fVar0 = MISC::GET_FRAME_TIME();
	fVar0 = (fVar0 * 1000f);
	bLocal_79 = false;
	if (!bLocal_61)
	{
		if (bLocal_60)
		{
			GlobalFunc_2512();
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				MISC::CLEAR_AREA(Var1, 1000f, 1, 0, 0, 0);
			}
			bLocal_61 = true;
		}
	}
	else if (!bLocal_60)
	{
		GlobalFunc_2214();
		bLocal_61 = false;
	}
	if (bLocal_60)
	{
		fParam1 = 1f;
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (!bLocal_54)
	{
		if (iLocal_49)
		{
			fLocal_1206 = 0f;
		}
		else
		{
			fLocal_1206 = 1f;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (GlobalFunc_5657(PLAYER::PLAYER_PED_ID(), iParam0))
					{
						iLocal_59 = 1;
					}
					else
					{
						iLocal_59 = 0;
					}
				}
				fLocal_1203 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
				VEHICLE::SET_PLAYBACK_SPEED(iParam0, ((fParam1 * fLocal_1204) * fLocal_1206));
				if (bLocal_58)
				{
					func_344(iParam0, fLocal_1203);
					func_343(iParam0, fLocal_1213);
					if (fLocal_1208 > 1000f)
					{
						if (iLocal_1820 == 0)
						{
							func_342(iParam0, fLocal_1213);
						}
						fVar0 = ((fLocal_1203 + 4000f) + (SYSTEM::TO_FLOAT(iLocal_1820) * 2000f));
						func_341(iParam0, fVar0, fLocal_1207);
						iLocal_1820++;
						if (iLocal_1820 > 2)
						{
							fLocal_1208 = 0f;
						}
					}
					else
					{
						iLocal_1820 = 0;
						fLocal_1208 = (fLocal_1208 + (MISC::GET_FRAME_TIME() * 1000f));
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
		if (fLocal_1203 == 0f || CAM::IS_SCREEN_FADED_OUT())
		{
			iVar4 = 1;
		}
		if (iVar4 && !bLocal_66)
		{
			if (!iLocal_48)
			{
				func_337(iParam0, ((fParam1 * fLocal_1204) * fLocal_1206), 0);
				if (!iLocal_69)
				{
				}
				iLocal_69 = 0;
			}
			if (bLocal_51)
			{
				func_333(iParam0);
			}
			if (!iLocal_48)
			{
				func_316(iParam0, ((fParam1 * fLocal_1204) * fLocal_1206), 0);
			}
		}
		if (iLocal_56)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_3018 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					Local_2499 = { ENTITY::GET_ENTITY_COORDS(iLocal_3018, 1) };
					ENTITY::GET_ENTITY_QUATERNION(iLocal_3018, &uLocal_837, &uLocal_838, &uLocal_839, &uLocal_840);
				}
			}
			iLocal_56 = 0;
		}
		if (iLocal_55)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3018))
			{
				GlobalFunc_3006(iLocal_3019);
				iLocal_3019 = iLocal_3018;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3019, 0))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_3019, Local_2499, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_3019, uLocal_837, uLocal_838, uLocal_839, uLocal_840);
			}
			fLocal_1202 = fLocal_1205;
			iLocal_48 = 1;
			iLocal_55 = 0;
		}
		if (iLocal_48)
		{
			while (!func_309(&iParam0, fLocal_1202))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_49 = 1;
		}
		if (iLocal_62)
		{
			iLocal_62 = 0;
		}
	}
}

int func_309(int iParam0, float fParam1)//Position - 0x2AF27
{
	if (!iLocal_63)
	{
		iLocal_48 = 1;
		func_311();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
				VEHICLE::SET_VEHICLE_FIXED(*iParam0);
			}
			if (!iLocal_1807 == -1)
			{
				while (!func_310(iParam0, iLocal_1807, fParam1, 1, 0, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!bLocal_53)
				{
					iLocal_49 = 1;
					fLocal_1206 = 0f;
					iLocal_1808 = 0;
					iLocal_1810 = 0;
					iLocal_1809 = 0;
					iLocal_1804 = 0;
					iLocal_1805 = 0;
					iLocal_1806 = 0;
					iLocal_1811 = 0;
					iLocal_1812 = 0;
					iLocal_1813 = 0;
				}
			}
		}
		iLocal_63 = 1;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(*iParam0, ((1f * fLocal_1204) * fLocal_1206));
				func_310(iParam0, iLocal_1807, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_1203 = fParam1;
		iLocal_1814 = 0;
		iLocal_1817 = 0;
		fLocal_1218 = 0f;
		fLocal_1217 = 0f;
		func_316(*iParam0, ((1f * fLocal_1204) * fLocal_1206), 1);
		func_337(*iParam0, ((1f * fLocal_1204) * fLocal_1206), 1);
		func_333(*iParam0);
		if ((iLocal_1811 == 0 && iLocal_1812 == 0) && iLocal_1813 == 0)
		{
			iLocal_49 = 0;
			iLocal_48 = 0;
			iLocal_63 = 0;
			return 1;
		}
	}
	return 0;
}

int func_310(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x2B059
{
	float fVar0;
	
	if (iParam1 > 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_2526);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, &cLocal_2526))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 0);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_2526, 1092616192, 786603);
					}
					else
					{
						if (iParam1 != iLocal_1815 && iParam1 != iLocal_1816)
						{
							if (bParam7)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_2526, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_2526, 1 | 4, 0, 786603);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_2526, 1);
							}
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_2526, 1);
						}
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, fParam2);
						if (bParam5)
						{
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, 1);
						}
						return 1;
					}
				}
				else if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(*uParam0) == VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, &cLocal_2526))
				{
					fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(*uParam0);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*uParam0);
						VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_2526);
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
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_2526, 1092616192, 786603);
					}
					else if (iParam1 != iLocal_1815 && iParam1 != iLocal_1816)
					{
						if (bParam7)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_2526, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_2526, 1 | 4, 0, 786603);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_2526, 1);
						}
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_2526, 1);
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

void func_311()//Position - 0x2B23F
{
	func_314();
	func_313();
	func_312();
}

void func_312()//Position - 0x2B253
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2985[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2985[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2985[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2985[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2985[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_2985[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_2985[iVar0]));
			}
		}
		iLocal_1701[iVar0] = 0;
		if (!bLocal_60 && !bLocal_73)
		{
			if (iLocal_1675[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1675[iVar0], &cLocal_2526);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (!iLocal_2745[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2745[iVar0]);
		}
		iVar0++;
	}
}

void func_313()//Position - 0x2B349
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2934[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_2934[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_2934[iVar0]));
			}
		}
		iLocal_1753[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (!iLocal_2694[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2694[iVar0]);
		}
		iVar0++;
	}
	iLocal_1809 = 0;
	iLocal_1806 = 0;
}

void func_314()//Position - 0x2B3C6
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2774[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2774[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2774[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2774[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2774[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_2774[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_2774[iVar0]));
			}
		}
		if (!bLocal_60 && !bLocal_73)
		{
			if (iLocal_1222[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1222[iVar0], &cLocal_2526);
			}
		}
		iLocal_1373[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (!iLocal_2543[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2543[iVar0]);
		}
		iVar0++;
	}
	iLocal_1808 = 0;
	iLocal_1804 = 0;
}


void func_316(int iParam0, float fParam1, bool bParam2)//Position - 0x2B4DB
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
		iVar0 = iLocal_1810;
		while (iVar0 < 25)
		{
			if (iLocal_1701[iVar0] != 99)
			{
				if (iLocal_1701[iVar0] == 0)
				{
					if (iLocal_1675[iVar0] > 0)
					{
						if (!iLocal_48)
						{
							if (fLocal_1203 > (fLocal_945[iVar0] - (7000f * fParam1)))
							{
								if (GlobalFunc_2222(iLocal_2745[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_1727[iVar0]), 0);
								}
								else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2745[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_1727[iVar0]), 2);
								}
								MISC::CLEAR_BIT(&(iLocal_1727[iVar0]), 1);
								iLocal_1701[iVar0]++;
								iLocal_1812++;
							}
						}
						else
						{
							fVar12 = (fLocal_1203 - fLocal_945[iVar0]);
							fVar12 = (fVar12 * uLocal_971[iVar0]);
							if (fVar12 >= 0f)
							{
								if (fVar12 < func_331(iLocal_1675[iVar0]))
								{
									if (GlobalFunc_2222(iLocal_2745[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1727[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2745[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1727[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_1727[iVar0]), 1);
									iLocal_1701[iVar0]++;
									iLocal_1812++;
								}
								else
								{
									iLocal_1701[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_1701[iVar0] = 99;
					}
				}
				else if (iLocal_1701[iVar0] == 1)
				{
					bVar14 = false;
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1675[iVar0], &cLocal_2526);
					if (MISC::IS_BIT_SET(iLocal_1727[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2211());
						bVar14 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
					}
					else if (!bLocal_75 && ((!MISC::IS_BIT_SET(iLocal_1727[iVar0], 2) && uVar16) || (MISC::IS_BIT_SET(iLocal_1727[iVar0], 2) && uVar17)))
					{
						bVar14 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_329());
						bVar14 = STREAMING::HAS_MODEL_LOADED(func_329());
					}
					if (bVar14)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2985[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_2745[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_2745[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1675[iVar0], &cLocal_2526))
							{
								if (fLocal_1203 >= (fLocal_945[iVar0] - (fLocal_1216 * fParam1)))
								{
									if ((iLocal_62 || bParam2) || (!bLocal_79 && !func_328(Local_2423[iVar0 /*3*/], Var9, 5f, fLocal_1214)))
									{
										if (bLocal_58)
										{
											func_327(Local_2423[iVar0 /*3*/], Var9, fLocal_1207);
										}
										iLocal_2985[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_2745[iVar0], Local_2423[iVar0 /*3*/], 0f, 0, 0);
										if (iLocal_2745[iVar0] == joaat("polmav"))
										{
											VEHICLE::SET_VEHICLE_LIVERY(iLocal_2985[iVar0], 0);
										}
										if (uLocal_71 && !MISC::IS_BIT_SET(iLocal_1727[iVar0], 0))
										{
											func_326(iLocal_2985[iVar0]);
										}
										if (MISC::IS_BIT_SET(iLocal_1727[iVar0], 3))
										{
											ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_2985[iVar0], 1);
										}
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_2985[iVar0], Local_2423[iVar0 /*3*/], 0, 0, 1);
										ENTITY::SET_ENTITY_QUATERNION(iLocal_2985[iVar0], fLocal_841[iVar0], fLocal_867[iVar0], fLocal_893[iVar0], fLocal_919[iVar0]);
										if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_2745[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2745[iVar0]))
										{
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2985[iVar0]);
										}
										if (!MISC::IS_BIT_SET(iLocal_1727[iVar0], 0))
										{
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2985[iVar0], 1, 1);
											if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
											{
												VEHICLE::SET_VEHICLE_LIGHTS(iLocal_2985[iVar0], 3);
											}
										}
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_2985[iVar0], 1);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2745[iVar0]);
										iLocal_1812 = (iLocal_1812 - 1);
										iLocal_1701[iVar0]++;
										bLocal_79 = true;
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_2985[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2985[iVar0], 0))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_2985[iVar0], Local_2423[iVar0 /*3*/], 0, 0, 1);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_2985[iVar0], fLocal_841[iVar0], fLocal_867[iVar0], fLocal_893[iVar0], fLocal_919[iVar0]);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_2745[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2745[iVar0]))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2985[iVar0]);
							}
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_2985[iVar0], 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2745[iVar0]);
							iLocal_1812 = (iLocal_1812 - 1);
							iLocal_1701[iVar0]++;
						}
					}
				}
				else if (iLocal_1701[iVar0] == 2)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1675[iVar0], &cLocal_2526);
					if (!MISC::IS_BIT_SET(iLocal_1727[iVar0], 1))
					{
						bVar14 = false;
						if (MISC::IS_BIT_SET(iLocal_1727[iVar0], 0))
						{
							STREAMING::REQUEST_MODEL(GlobalFunc_2211());
							bVar14 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
							iVar19 = 2;
						}
						else if (!bLocal_75 && ((!MISC::IS_BIT_SET(iLocal_1727[iVar0], 2) && uVar16) || (MISC::IS_BIT_SET(iLocal_1727[iVar0], 2) && uVar17)))
						{
							bVar14 = true;
							iVar19 = 1;
						}
						else
						{
							STREAMING::REQUEST_MODEL(func_329());
							bVar14 = STREAMING::HAS_MODEL_LOADED(func_329());
							iVar19 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_2985[iVar0]))
						{
							if (!bLocal_79 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2985[iVar0], -1))
							{
								if (bVar14)
								{
									if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_2985[iVar0], 1), Var9) < 10000f || bParam2) || iLocal_62)
									{
										func_324(&(iLocal_2985[iVar0]), iVar19, 1);
										MISC::SET_BIT(&(iLocal_1727[iVar0]), 1);
									}
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2985[iVar0], 0))
					{
						if (fLocal_1203 >= fLocal_945[iVar0])
						{
							if (4 > iLocal_1805)
							{
								fVar12 = (fLocal_1203 - fLocal_945[iVar0]);
								fVar12 = (fVar12 * uLocal_971[iVar0]);
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1675[iVar0], &cLocal_2526))
								{
									if (fVar12 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1675[iVar0], &cLocal_2526))
									{
										Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_2985[iVar0], 1) };
										Var6 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_1675[iVar0], fVar12, &cLocal_2526) };
										if (((!func_328(Var3, Var9, 5f, fLocal_1214) && func_328(Var6, Var9, 5f, fLocal_1214)) && !iLocal_62) && !bParam2)
										{
											if (!MISC::IS_BIT_SET(iLocal_1727[iVar0], 1))
											{
												func_324(&(iLocal_2985[iVar0]), iVar19, 1);
											}
											iLocal_1805++;
											iLocal_1701[iVar0]++;
										}
										else if (((!bLocal_79 || MISC::IS_BIT_SET(iLocal_1727[iVar0], 1)) || iLocal_62) || bParam2)
										{
											if (func_310(&(iLocal_2985[iVar0]), iLocal_1675[iVar0], fVar12, 1, 0, 0, bLocal_77, bLocal_76))
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_2985[iVar0], (fParam1 * uLocal_971[iVar0]));
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2985[iVar0], 0))
												{
													if (MISC::IS_BIT_SET(iLocal_1727[iVar0], 0))
													{
														VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2985[iVar0], 1, 1);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_2985[iVar0], 1);
														VEHICLE::SET_VEHICLE_LIGHTS(iLocal_2985[iVar0], 2);
														if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2745[iVar0]))
														{
															AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_2985[iVar0], 1);
														}
													}
												}
												if (!MISC::IS_BIT_SET(iLocal_1727[iVar0], 1))
												{
													func_324(&(iLocal_2985[iVar0]), iVar19, 1);
												}
												iLocal_1805++;
												iLocal_1701[iVar0]++;
											}
										}
									}
									else
									{
										if (!MISC::IS_BIT_SET(iLocal_1727[iVar0], 1))
										{
											func_324(&(iLocal_2985[iVar0]), iVar19, 1);
										}
										iLocal_1805++;
										iLocal_1701[iVar0]++;
									}
								}
							}
							else
							{
								if (!MISC::IS_BIT_SET(iLocal_1727[iVar0], 1))
								{
									func_324(&(iLocal_2985[iVar0]), iVar19, 1);
								}
								iLocal_1805++;
								iLocal_1701[iVar0]++;
							}
						}
					}
					else
					{
						if (!MISC::IS_BIT_SET(iLocal_1727[iVar0], 1))
						{
							func_324(&(iLocal_2985[iVar0]), iVar19, 1);
						}
						iLocal_1805++;
						iLocal_1701[iVar0]++;
					}
				}
				else if (iLocal_1701[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2985[iVar0], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2985[iVar0]))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2985[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (bVar15)
								{
									if (((!bLocal_52 && !iLocal_49) && !bLocal_68) && (((!bLocal_77 && !bLocal_76) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_2985[iVar0])) || func_323(iLocal_2985[iVar0])))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar2))
										{
											bVar14 = false;
											if (bLocal_70)
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
												else if (MISC::ABSF((fVar13 - ENTITY::GET_ENTITY_SPEED(iLocal_2985[iVar0]))) > 15f)
												{
													bVar14 = true;
												}
												else if (!GlobalFunc_5655(iLocal_2985[iVar0], iVar2, 45f))
												{
													bVar14 = true;
												}
												else if (GlobalFunc_5654(iVar2, iLocal_2985[iVar0], 0))
												{
													bVar14 = true;
												}
											}
											if (bVar14)
											{
												func_319(iLocal_2985[iVar0]);
												iLocal_1701[iVar0]++;
											}
										}
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_2985[iVar0], (fParam1 * uLocal_971[iVar0]));
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2985[iVar0]);
							}
						}
						else
						{
							iLocal_1701[iVar0]++;
						}
					}
					else
					{
						iLocal_1701[iVar0]++;
					}
				}
				else if (iLocal_1701[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2985[iVar0], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2985[iVar0]))
						{
							iLocal_1701[iVar0]++;
						}
						else
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2985[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_2985[iVar0], (fParam1 * uLocal_971[iVar0]));
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2985[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1675[iVar0], &cLocal_2526))
							{
								if (fLocal_1203 > (fLocal_945[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1675[iVar0], &cLocal_2526)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2985[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2985[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1701[iVar0]++;
					}
				}
				else if (iLocal_1701[iVar0] == 5)
				{
					if (!iLocal_2985[iVar0] == iLocal_3020)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2985[iVar0], 0))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2985[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								iVar20 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, 242628503);
								if (iVar20 == 7)
								{
									fVar13 = ENTITY::GET_ENTITY_SPEED(iLocal_2985[iVar0]);
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
						if (!bLocal_60 && !bLocal_73)
						{
							if (iLocal_1675[iVar0] > 0)
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1675[iVar0], &cLocal_2526);
							}
						}
						if (!bLocal_50)
						{
							if (!bLocal_78)
							{
								GlobalFunc_3006(iLocal_2985[iVar0]);
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_2985[iVar0]))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_2985[iVar0]));
						}
					}
					iLocal_1805 = (iLocal_1805 - 1);
					iLocal_1701[iVar0] = 99;
				}
				if (!bVar18)
				{
					iLocal_1810 = iVar0;
					bVar18 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_317();
	}
}

void func_317()//Position - 0x2C0D8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2985[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2985[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2985[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2985[iVar0]);
				}
			}
			func_318(iLocal_2985[iVar0]);
			GlobalFunc_3006(iLocal_2985[iVar0]);
		}
		iLocal_1701[iVar0] = 0;
		iLocal_1727[iVar0] = 0;
		if (!bLocal_60 && !bLocal_73)
		{
			if (iLocal_1675[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1675[iVar0], &cLocal_2526);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (!iLocal_2745[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2745[iVar0]);
		}
		iVar0++;
	}
	iLocal_1810 = 0;
}

void func_318(int iParam0)//Position - 0x2C1A5
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
				if (bLocal_81)
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 65536, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, 0);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 6, 0);
			}
		}
	}
}

void func_319(int iParam0)//Position - 0x2C23E
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_318(iParam0);
		VEHICLE::SET_PLAYBACK_TO_USE_AI(iParam0, 786603);
	}
}




int func_323(var uParam0)//Position - 0x2C3A1
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bLocal_74)
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

int func_324(var uParam0, int iParam1, bool bParam2)//Position - 0x2C3FE
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, -1))
		{
			if (iParam1 == 2)
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, GlobalFunc_2211(), -1, 0, 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iLocal_2542);
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
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 4, func_329(), -1, 0, 0);
				if (bLocal_80)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_329());
				}
			}
			if (bParam2)
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar0, 1);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iVar0, 0);
				PED::SET_PED_CONFIG_FLAG(iVar0, 32, 0);
			}
			if (bLocal_81)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(*uParam0, 1);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 1);
			GlobalFunc_2221(iVar0);
			bLocal_79 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}


void func_326(int iParam0)//Position - 0x2C50A
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iLocal_2772 >= -1 && iLocal_2773 >= -1)
	{
		while (iVar0 == iLocal_2772 || iVar0 == iLocal_2773)
		{
			iVar0++;
		}
	}
	else if (iLocal_2772 >= -1)
	{
		if (iVar0 == iLocal_2772)
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

void func_327(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x2C683
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (!bLocal_61)
	{
		if (!func_328(Param0, Param3, fParam6, 200f))
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

int func_328(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7)//Position - 0x2C6F3
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!bLocal_61)
		{
			if (!iLocal_48)
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

int func_329()//Position - 0x2C73A
{
	if (iLocal_2771 == 0)
	{
		return joaat("a_m_y_business_01");
	}
	return iLocal_2771;
}


float func_331(int iParam0)//Position - 0x2C764
{
	var uVar0;
	
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, &cLocal_2526);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, &cLocal_2526))
	{
		SYSTEM::WAIT(0);
	}
	uVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam0, &cLocal_2526);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, &cLocal_2526);
	return uVar0;
}


void func_333(int iParam0)//Position - 0x2C81A
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
		iVar0 = iLocal_1809;
		while (iVar0 < 50)
		{
			switch (iLocal_1753[iVar0])
			{
				case 0:
					if (!iLocal_2694[iVar0] == 0)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Local_2272[iVar0 /*3*/], fLocal_1201, fLocal_1201, fLocal_1201, 0, 1, 0))
						{
							iLocal_1811++;
							iLocal_1753[iVar0]++;
						}
					}
					else
					{
						iLocal_1753[iVar0] = 99;
					}
					break;
				
				case 1:
					if (6 > iLocal_1806)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2934[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_2694[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_2694[iVar0]))
							{
								if ((iLocal_48 || iLocal_62) || (!bLocal_79 && !func_328(Local_2272[iVar0 /*3*/], Var1, 5f, fLocal_1214)))
								{
									if (bLocal_58)
									{
										func_327(Local_2272[iVar0 /*3*/], Var1, fLocal_1207);
									}
									iLocal_2934[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_2694[iVar0], Local_2272[iVar0 /*3*/], 0f, 0, 0);
									if (iLocal_2694[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_2934[iVar0], 0);
									}
									ENTITY::SET_ENTITY_QUATERNION(iLocal_2934[iVar0], fLocal_997[iVar0], fLocal_1048[iVar0], fLocal_1099[iVar0], fLocal_1150[iVar0]);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2694[iVar0]);
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_2934[iVar0], GlobalFunc_2212()))
									{
										VEHICLE::SET_VEHICLE_SIREN(iLocal_2934[iVar0], 1);
										if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2694[iVar0]))
										{
											AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_2934[iVar0], 1);
										}
									}
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_2934[iVar0], GlobalFunc_2213()))
									{
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_2934[iVar0], 0, 0);
									}
									ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_2934[iVar0], 1);
									iLocal_1811 = (iLocal_1811 - 1);
									iLocal_1806++;
									iLocal_1753[iVar0]++;
									bLocal_79 = true;
								}
							}
						}
						else
						{
							iLocal_1811 = (iLocal_1811 - 1);
							iLocal_1806++;
							iLocal_1753[iVar0]++;
						}
					}
					break;
				
				case 2:
					if (!bVar7)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2934[iVar0], 0))
						{
							Var4 = { ENTITY::GET_ENTITY_COORDS(iLocal_2934[iVar0], 1) };
						}
						if (fLocal_1215 == 0f || SYSTEM::VDIST2(Var1, Var4) < (fLocal_1215 * fLocal_1215))
						{
							if (!GlobalFunc_5654(iLocal_2934[iVar0], iParam0, 0))
							{
								if (!bLocal_50)
								{
									GlobalFunc_3006(iLocal_2934[iVar0]);
								}
								else
								{
									VEHICLE::DELETE_VEHICLE(&(iLocal_2934[iVar0]));
								}
								iLocal_1806 = (iLocal_1806 - 1);
								iLocal_1753[iVar0] = 99;
								bVar7 = true;
							}
						}
					}
					break;
			}
			if (iLocal_1753[iVar0] != 99)
			{
				if (!bVar8)
				{
					iLocal_1809 = iVar0;
					bVar8 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_334();
	}
}

void func_334()//Position - 0x2CB10
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2934[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2934[iVar0]))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_2934[iVar0], 1, 0);
			}
			GlobalFunc_3006(iLocal_2934[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (!iLocal_2694[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2694[iVar0]);
		}
		iVar0++;
	}
	iLocal_1809 = 0;
	iLocal_1806 = 0;
}



void func_337(int iParam0, float fParam1, int iParam2)//Position - 0x2CBAD
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
			fLocal_1203 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
		}
		iVar22 = -1;
		bVar23 = false;
		bVar24 = false;
		iVar0 = iLocal_1808;
		while (iVar0 < 150 && !bVar23)
		{
			if (iLocal_1373[iVar0] != 99)
			{
				if (iLocal_1373[iVar0] == 0)
				{
					if (iLocal_1222[iVar0] > 0 && iLocal_2543[iVar0] != 0)
					{
						if (!iLocal_48)
						{
							if (fLocal_1203 < (fLocal_686[iVar0] + 20000f))
							{
								if (fLocal_1203 >= (fLocal_686[iVar0] - (7000f * fParam1)))
								{
									if (GlobalFunc_2222(iLocal_2543[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1524[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2543[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1524[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_1524[iVar0]), 1);
									iLocal_1813++;
									iLocal_1373[iVar0]++;
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
								func_340(iVar0, 1090519040);
							}
						}
						else
						{
							fVar15 = (fLocal_1203 - fLocal_686[iVar0]);
							if (fVar15 >= 0f)
							{
								if (fVar15 < func_331(iLocal_1222[iVar0]))
								{
									if (GlobalFunc_2222(iLocal_2543[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1524[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2543[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1524[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_1524[iVar0]), 1);
									iLocal_1813++;
									iLocal_1373[iVar0]++;
								}
								else
								{
									func_340(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_340(iVar0, 1090519040);
					}
				}
				else if (iLocal_1373[iVar0] == 1)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1222[iVar0], &cLocal_2526);
					bVar17 = false;
					if (MISC::IS_BIT_SET(iLocal_1524[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2211());
						if (STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211()))
						{
							bVar17 = true;
						}
					}
					else if (!bLocal_75 && ((!MISC::IS_BIT_SET(iLocal_1524[iVar0], 2) && uVar19) || (MISC::IS_BIT_SET(iLocal_1524[iVar0], 2) && uVar20)))
					{
						bVar17 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_329());
						bVar17 = STREAMING::HAS_MODEL_LOADED(func_329());
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2774[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_2543[iVar0]);
						if ((STREAMING::HAS_MODEL_LOADED(iLocal_2543[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1222[iVar0], &cLocal_2526)) && bVar17)
						{
							if (fLocal_1203 >= (fLocal_686[iVar0] - (fLocal_1216 * fParam1)))
							{
								if ((iLocal_62 || iParam2) || (!bLocal_79 && !func_328(Local_1821[iVar0 /*3*/], Var12, 5f, fLocal_1214)))
								{
									if (bLocal_58)
									{
										func_327(Local_1821[iVar0 /*3*/], Var12, fLocal_1207);
									}
									iLocal_2774[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_2543[iVar0], Local_1821[iVar0 /*3*/], 0f, 0, 0);
									if (iLocal_2543[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_2774[iVar0], 0);
									}
									if (uLocal_71 && !MISC::IS_BIT_SET(iLocal_1524[iVar0], 0))
									{
										func_326(iLocal_2774[iVar0]);
									}
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_2774[iVar0], Local_1821[iVar0 /*3*/], 0, 0, 1);
									ENTITY::SET_ENTITY_QUATERNION(iLocal_2774[iVar0], fLocal_82[iVar0], fLocal_233[iVar0], fLocal_384[iVar0], fLocal_535[iVar0]);
									if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_2543[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2543[iVar0]))
									{
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2774[iVar0]);
									}
									if (MISC::IS_BIT_SET(iLocal_1524[iVar0], 3))
									{
										ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_2774[iVar0], 1);
									}
									if (!MISC::IS_BIT_SET(iLocal_1524[iVar0], 0))
									{
										VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2774[iVar0], 1, 1);
										if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
										{
											VEHICLE::SET_VEHICLE_LIGHTS(iLocal_2774[iVar0], 3);
										}
									}
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_2774[iVar0], 1);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_2774[iVar0], 1);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2543[iVar0]);
									iLocal_1813 = (iLocal_1813 - 1);
									iLocal_1373[iVar0]++;
									bLocal_79 = true;
								}
								else if (fLocal_1203 > fLocal_686[iVar0])
								{
									iLocal_1813 = (iLocal_1813 - 1);
									func_340(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_1373[iVar0] == 2)
				{
					bVar17 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_1819 || iLocal_1819 == 0)) || iLocal_62) || iParam2)
					{
						if (!MISC::IS_BIT_SET(iLocal_1524[iVar0], 1))
						{
							if (MISC::IS_BIT_SET(iLocal_1524[iVar0], 0))
							{
								STREAMING::REQUEST_MODEL(GlobalFunc_2211());
								bVar17 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
								iVar21 = 2;
							}
							else if (!bLocal_75 && ((!MISC::IS_BIT_SET(iLocal_1524[iVar0], 2) && uVar19) || (MISC::IS_BIT_SET(iLocal_1524[iVar0], 2) && uVar20)))
							{
								bVar17 = true;
								iVar21 = 1;
							}
							else
							{
								STREAMING::REQUEST_MODEL(func_329());
								bVar17 = STREAMING::HAS_MODEL_LOADED(func_329());
								iVar21 = 0;
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_2774[iVar0]))
							{
								if (!bLocal_79 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2774[iVar0], -1))
								{
									if (bVar17)
									{
										if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_2774[iVar0], 1), Var12) < 10000f || iParam2) || iLocal_62)
										{
											func_324(&(iLocal_2774[iVar0]), iVar21, 0);
											MISC::SET_BIT(&(iLocal_1524[iVar0]), 1);
										}
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2774[iVar0], 0))
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1222[iVar0], &cLocal_2526);
							if (fLocal_1203 >= fLocal_686[iVar0])
							{
								if (8 > iLocal_1804)
								{
									fVar15 = (fLocal_1203 - fLocal_686[iVar0]);
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1222[iVar0], &cLocal_2526))
									{
										if (fVar15 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1222[iVar0], &cLocal_2526))
										{
											Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_2774[iVar0], 1) };
											Var9 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_1222[iVar0], fVar15, &cLocal_2526) };
											if (!func_328(Var6, Var12, 5f, fLocal_1214) && func_328(Var9, Var12, 5f, fLocal_1214))
											{
												if (!MISC::IS_BIT_SET(iLocal_1524[iVar0], 1))
												{
													func_324(&(iLocal_2774[iVar0]), iVar21, 0);
												}
												func_340(iVar0, 1090519040);
											}
											else if (((!bLocal_79 || MISC::IS_BIT_SET(iLocal_1524[iVar0], 1)) || iLocal_62) || iParam2)
											{
												if (func_310(&(iLocal_2774[iVar0]), iLocal_1222[iVar0], fVar15, 1, 0, 0, 1, bLocal_76))
												{
													if (!MISC::IS_BIT_SET(iLocal_1524[iVar0], 1))
													{
														func_324(&(iLocal_2774[iVar0]), iVar21, 0);
													}
													ENTITY::SET_ENTITY_COLLISION(iLocal_2774[iVar0], 1, 0);
													VEHICLE::SET_PLAYBACK_SPEED(iLocal_2774[iVar0], fParam1);
													iLocal_1804++;
													iLocal_1373[iVar0]++;
												}
											}
										}
										else
										{
											if (!MISC::IS_BIT_SET(iLocal_1524[iVar0], 1))
											{
												func_324(&(iLocal_2774[iVar0]), iVar21, 0);
											}
											func_340(iVar0, 1090519040);
										}
									}
									else if (fVar15 > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1222[iVar0], &cLocal_2526))
									{
										if (!MISC::IS_BIT_SET(iLocal_1524[iVar0], 1))
										{
											func_324(&(iLocal_2774[iVar0]), iVar21, 0);
										}
										func_340(iVar0, 1090519040);
									}
								}
								else
								{
									if (!MISC::IS_BIT_SET(iLocal_1524[iVar0], 1))
									{
										func_324(&(iLocal_2774[iVar0]), iVar21, 0);
									}
									func_340(iVar0, 1090519040);
								}
							}
							else if (iLocal_59 && !bLocal_67)
							{
								if (!MISC::IS_BIT_SET(iLocal_1524[iVar0], 1))
								{
									func_324(&(iLocal_2774[iVar0]), iVar21, 0);
								}
								func_340(iVar0, 1090519040);
							}
						}
						else
						{
							if (!MISC::IS_BIT_SET(iLocal_1524[iVar0], 1))
							{
								func_324(&(iLocal_2774[iVar0]), iVar21, 0);
							}
							func_340(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_1819 = iVar0;
					}
				}
				else if (iLocal_1373[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2774[iVar0], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2774[iVar0]))
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2774[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								if (bVar18)
								{
									bVar24 = false;
									if (!bLocal_57)
									{
										if ((!bLocal_52 && !iLocal_49) && func_323(iLocal_2774[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_1818 || iLocal_1818 == 0))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iVar5))
												{
													bVar17 = false;
													if (!GlobalFunc_5656(iLocal_2774[iVar0], iVar5) || GlobalFunc_5654(iVar5, iLocal_2774[iVar0], 0))
													{
														bVar24 = true;
													}
												}
												iLocal_1818 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_72 && !MISC::IS_BIT_SET(iLocal_1524[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_1818 || iLocal_1818 == 0))
										{
											Var25 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iLocal_2774[iVar0], 1)) };
											if (Var25.f_1 < 0f)
											{
												if (MISC::ABSF(Var25.f_1) > MISC::ABSF(Var25.x))
												{
													bVar24 = true;
												}
											}
											iVar2++;
											iLocal_1818 = iVar0;
										}
									}
									if (bVar24)
									{
										func_319(iLocal_2774[iVar0]);
										iLocal_1373[iVar0]++;
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_2774[iVar0], fParam1);
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2774[iVar0]);
							}
						}
						else
						{
							iLocal_1373[iVar0]++;
						}
					}
					else
					{
						iLocal_1373[iVar0]++;
					}
				}
				else if (iLocal_1373[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2774[iVar0], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2774[iVar0]))
						{
							iLocal_1373[iVar0]++;
						}
						else
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2774[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_2774[iVar0], fParam1);
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2774[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1222[iVar0], &cLocal_2526))
							{
								if (fLocal_1203 > (fLocal_686[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1222[iVar0], &cLocal_2526)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2774[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2774[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1373[iVar0]++;
					}
				}
				else if (iLocal_1373[iVar0] == 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2774[iVar0]))
					{
						fVar16 = ENTITY::GET_ENTITY_SPEED(iLocal_2774[iVar0]);
					}
					iLocal_1804 = (iLocal_1804 - 1);
					func_340(iVar0, fVar16);
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
			iLocal_1808 = iVar22;
		}
		if (iVar2 < 3)
		{
			iLocal_1818 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_1819 = 0;
		}
	}
	else
	{
		func_338();
	}
}

void func_338()//Position - 0x2D713
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2774[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2774[iVar0]))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_2774[iVar0], 1, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2774[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2774[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2774[iVar0]);
				}
			}
			func_318(iLocal_2774[iVar0]);
			GlobalFunc_3006(iLocal_2774[iVar0]);
		}
		iLocal_1373[iVar0] = 0;
		iLocal_1524[iVar0] = 0;
		if (!bLocal_60 && !bLocal_73)
		{
			if (iLocal_1222[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1222[iVar0], &cLocal_2526);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (!iLocal_2543[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2543[iVar0]);
		}
		iVar0++;
	}
	iLocal_1808 = 0;
	iLocal_1804 = 0;
}


void func_340(int iParam0, float fParam1)//Position - 0x2D864
{
	int iVar0;
	
	if (!iLocal_2543[iParam0] == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2543[iParam0]);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_2774[iParam0]))
	{
		ENTITY::SET_ENTITY_COLLISION(iLocal_2774[iParam0], 1, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_2774[iParam0], 0);
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2774[iParam0], -1);
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
			TASK::TASK_VEHICLE_MISSION(iVar0, iLocal_2774[iParam0], 0, 1, fParam1, 786603, 5f, 5f, 1);
			PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
			if (bLocal_81)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, 0);
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar0, fParam1);
		}
	}
	if (!bLocal_50)
	{
		if (!bLocal_78)
		{
			GlobalFunc_2221(iVar0);
			GlobalFunc_3006(iLocal_2774[iParam0]);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::DELETE_PED(&iVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2774[iParam0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_2774[iParam0]));
		}
	}
	if (!bLocal_60 && !bLocal_73)
	{
		if (iLocal_1222[iParam0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1222[iParam0], &cLocal_2526);
		}
	}
	iLocal_1373[iParam0] = 99;
}

void func_341(int iParam0, float fParam1, float fParam2)//Position - 0x2D9BD
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
			func_327(Var1, Var10, fVar13);
		}
	}
}

void func_342(int iParam0, float fParam1)//Position - 0x2DA40
{
	if (!bLocal_61)
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

void func_343(int iParam0, float fParam1)//Position - 0x2DA8D
{
	if (!bLocal_61)
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

void func_344(int iParam0, float fParam1)//Position - 0x2DADA
{
	var uVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
	{
		fVar1 = (fLocal_1217 + 2000f);
		fVar2 = (fLocal_1218 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			uVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (fVar1 <= VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(uVar0))
			{
				if (iLocal_1814 == 0)
				{
					Local_2514 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fLocal_1217) };
					iLocal_1814++;
				}
				else if (iLocal_1814 == 1)
				{
					Local_2517 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fVar1) };
					iLocal_1814++;
				}
				else if (!bLocal_79)
				{
					if (Local_2514.x > Local_2517.x)
					{
						fVar3 = Local_2514.x;
						Local_2514.x = Local_2517.x;
						Local_2517.x = fVar3;
					}
					if (Local_2514.f_1 > Local_2517.f_1)
					{
						fVar3 = Local_2514.f_1;
						Local_2514.f_1 = Local_2517.f_1;
						Local_2517.f_1 = fVar3;
					}
					if (Local_2514.f_2 > Local_2517.f_2)
					{
						fVar3 = Local_2514.f_2;
						Local_2514.f_2 = Local_2517.f_2;
						Local_2517.f_2 = fVar3;
					}
					Local_2514 = { Local_2514 - Vector(fLocal_1221, fLocal_1221, fLocal_1221) };
					Local_2517 = { Local_2517 + Vector(fLocal_1221, fLocal_1221, fLocal_1221) };
					PATHFIND::SET_ROADS_IN_AREA(Local_2514, Local_2517, 0, 0);
					fLocal_1217 = fVar1;
					iLocal_1814 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			uVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (iLocal_1817 == 0)
			{
				Local_2520 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fLocal_1218) };
				iLocal_1817++;
			}
			else if (iLocal_1817 == 1)
			{
				Local_2523 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fVar2) };
				iLocal_1817++;
			}
			else if (!bLocal_79 && !bVar4)
			{
				if (Local_2520.x > Local_2523.x)
				{
					fVar3 = Local_2520.x;
					Local_2520.x = Local_2523.x;
					Local_2523.x = fVar3;
				}
				if (Local_2520.f_1 > Local_2523.f_1)
				{
					fVar3 = Local_2520.f_1;
					Local_2520.f_1 = Local_2523.f_1;
					Local_2523.f_1 = fVar3;
				}
				if (Local_2520.f_2 > Local_2523.f_2)
				{
					fVar3 = Local_2520.f_2;
					Local_2520.f_2 = Local_2523.f_2;
					Local_2523.f_2 = fVar3;
				}
				Local_2520 = { Local_2520 - Vector(fLocal_1221, fLocal_1221, fLocal_1221) };
				Local_2523 = { Local_2523 + Vector(fLocal_1221, fLocal_1221, fLocal_1221) };
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_2520, Local_2523, 1);
				fLocal_1218 = fVar2;
				iLocal_1817 = 0;
			}
		}
	}
}




void func_348(int iParam0, int iParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, bool bParam10)//Position - 0x2DE3C
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
	
	if (iLocal_64 == 0)
	{
		if (*uParam2 < fParam3)
		{
			*uParam2 = fParam3;
			iLocal_64 = 1;
		}
	}
	if (fParam8 < 0f)
	{
		fParam8 = fLocal_1212;
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
				fVar1 = GlobalFunc_3022(iParam0, iParam1);
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
			iLocal_65 = 1;
		}
		else if (iLocal_65)
		{
			if (fVar2 < fVar6)
			{
				fVar4 = fParam3;
				iLocal_65 = 0;
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
		fVar8 = ((fLocal_1219 * fParam3) * fVar1);
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
		fVar8 = ((fLocal_1220 * fParam3) * fVar1);
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
							fVar1 = (fVar1 * (fLocal_1210 - fLocal_1211));
							fVar1 = (fVar1 + fLocal_1211);
							fLocal_1209 = fVar1;
							if (fLocal_1209 < fLocal_1211)
							{
								fLocal_1209 = fLocal_1211;
							}
							if (fLocal_1209 > fLocal_1210)
							{
								fLocal_1209 = fLocal_1210;
							}
							PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), fLocal_1209);
						}
					}
				}
			}
		}
	}
}















void func_363()//Position - 0x2E63C
{
	Local_1821[0 /*3*/] = { 1257.447f, -2067.272f, 44.0916f };
	fLocal_82[0] = -0.0181f;
	fLocal_233[0] = -0.0018f;
	fLocal_384[0] = 0.2169f;
	fLocal_535[0] = 0.976f;
	iLocal_1222[0] = 1;
	fLocal_686[0] = 22902f;
	iLocal_2543[0] = joaat("regina");
	Local_1821[1 /*3*/] = { 1249.359f, -2058.807f, 44.0092f };
	fLocal_82[1] = 0.0001f;
	fLocal_233[1] = -0.0007f;
	fLocal_384[1] = 0.1766f;
	fLocal_535[1] = 0.9843f;
	iLocal_1222[1] = 2;
	fLocal_686[1] = 23364f;
	iLocal_2543[1] = joaat("rancherxl");
	Local_1821[2 /*3*/] = { 1229.291f, -2034.478f, 43.9109f };
	fLocal_82[2] = -0.0083f;
	fLocal_233[2] = -0.0012f;
	fLocal_384[2] = 0.9791f;
	fLocal_535[2] = -0.2033f;
	iLocal_1222[2] = 3;
	fLocal_686[2] = 24816f;
	iLocal_2543[2] = joaat("landstalker");
	Local_1821[3 /*3*/] = { 1214.224f, -1946.9f, 39.2982f };
	fLocal_82[3] = -0.0411f;
	fLocal_233[3] = -0.0103f;
	fLocal_384[3] = 0.2382f;
	fLocal_535[3] = 0.9703f;
	iLocal_1222[3] = 4;
	fLocal_686[3] = 28644f;
	iLocal_2543[3] = joaat("phoenix");
	Local_1821[4 /*3*/] = { 1186.673f, -1905.545f, 34.6968f };
	fLocal_82[4] = -0.0471f;
	fLocal_233[4] = -0.0027f;
	fLocal_384[4] = 0.2354f;
	fLocal_535[4] = 0.9708f;
	iLocal_1222[4] = 5;
	fLocal_686[4] = 30294f;
	iLocal_2543[4] = joaat("mesa");
	Local_1821[5 /*3*/] = { 1169.161f, -1909.999f, 34.4001f };
	fLocal_82[5] = -0.0039f;
	fLocal_233[5] = 0.0462f;
	fLocal_384[5] = 0.9684f;
	fLocal_535[5] = -0.245f;
	iLocal_1222[5] = 6;
	fLocal_686[5] = 30492f;
	iLocal_2543[5] = joaat("mesa");
	Local_1821[7 /*3*/] = { 1166.343f, -1854.876f, 30.0536f };
	fLocal_82[7] = -0.0313f;
	fLocal_233[7] = 0.0024f;
	fLocal_384[7] = 0.2128f;
	fLocal_535[7] = 0.9766f;
	iLocal_1222[7] = 8;
	fLocal_686[7] = 32010f;
	iLocal_2543[7] = joaat("landstalker");
	Local_1821[10 /*3*/] = { 1146.764f, -1801.818f, 28.92f };
	fLocal_82[10] = -0.0022f;
	fLocal_233[10] = 0.004f;
	fLocal_384[10] = 0.1746f;
	fLocal_535[10] = 0.9846f;
	iLocal_1222[10] = 11;
	fLocal_686[10] = 33594f;
	iLocal_2543[10] = joaat("regina");
	Local_1821[13 /*3*/] = { 1099.192f, -1769.344f, 28.7382f };
	fLocal_82[13] = -0.0043f;
	fLocal_233[13] = -0.0008f;
	fLocal_384[13] = 0.9836f;
	fLocal_535[13] = -0.1805f;
	iLocal_1222[13] = 14;
	fLocal_686[13] = 34980f;
	iLocal_2543[13] = joaat("landstalker");
	Local_1821[14 /*3*/] = { 1114.196f, -1746.298f, 28.8014f };
	fLocal_82[14] = -0.0049f;
	fLocal_233[14] = -0.0009f;
	fLocal_384[14] = 0.1804f;
	fLocal_535[14] = 0.9836f;
	iLocal_1222[14] = 15;
	fLocal_686[14] = 35244f;
	iLocal_2543[14] = joaat("mesa");
	Local_1821[15 /*3*/] = { 1099.1f, -1736.966f, 29.1391f };
	fLocal_82[15] = -0.0082f;
	fLocal_233[15] = -0.0042f;
	fLocal_384[15] = 0.9868f;
	fLocal_535[15] = -0.1614f;
	iLocal_1222[15] = 16;
	fLocal_686[15] = 35640f;
	iLocal_2543[15] = joaat("sadler");
	Local_1821[18 /*3*/] = { 1077.494f, -1709.083f, 29.166f };
	fLocal_82[18] = 0.0002f;
	fLocal_233[18] = 0f;
	fLocal_384[18] = 0.9885f;
	fLocal_535[18] = -0.1514f;
	iLocal_1222[18] = 19;
	fLocal_686[18] = 36630f;
	iLocal_2543[18] = joaat("sadler");
	Local_1821[19 /*3*/] = { 1081.423f, -1699.446f, 29.1073f };
	fLocal_82[19] = 0.0002f;
	fLocal_233[19] = -0.0018f;
	fLocal_384[19] = 0.988f;
	fLocal_535[19] = -0.1547f;
	iLocal_1222[19] = 20;
	fLocal_686[19] = 37158f;
	iLocal_2543[19] = joaat("regina");
	Local_1821[20 /*3*/] = { 1072.881f, -1675.165f, 28.924f };
	fLocal_82[20] = -0.0029f;
	fLocal_233[20] = -0.0021f;
	fLocal_384[20] = 0.9915f;
	fLocal_535[20] = -0.1302f;
	iLocal_1222[20] = 21;
	fLocal_686[20] = 37620f;
	iLocal_2543[20] = joaat("mesa");
	Local_1821[21 /*3*/] = { 1093.008f, -1658.003f, 28.9252f };
	fLocal_82[21] = -0.001f;
	fLocal_233[21] = 0.0004f;
	fLocal_384[21] = 0.1187f;
	fLocal_535[21] = 0.9929f;
	iLocal_1222[21] = 22;
	fLocal_686[21] = 38082f;
	iLocal_2543[21] = joaat("mesa");
	Local_1821[22 /*3*/] = { 1064.468f, -1657.871f, 28.865f };
	fLocal_82[22] = -0.0043f;
	fLocal_233[22] = 0.0001f;
	fLocal_384[22] = 0.9934f;
	fLocal_535[22] = -0.1147f;
	iLocal_1222[22] = 23;
	fLocal_686[22] = 38148f;
	iLocal_2543[22] = joaat("landstalker");
	Local_1821[23 /*3*/] = { 1095.309f, -1672.214f, 29.0386f };
	fLocal_82[23] = 0.0023f;
	fLocal_233[23] = 0.0003f;
	fLocal_384[23] = 0.1384f;
	fLocal_535[23] = 0.9904f;
	iLocal_1222[23] = 24;
	fLocal_686[23] = 38346f;
	iLocal_2543[23] = joaat("rancherxl");
	Local_1821[24 /*3*/] = { 1081.674f, -1633.341f, 28.9063f };
	fLocal_82[24] = -0.0005f;
	fLocal_233[24] = 0f;
	fLocal_384[24] = 0.0996f;
	fLocal_535[24] = 0.995f;
	iLocal_1222[24] = 25;
	fLocal_686[24] = 38742f;
	iLocal_2543[24] = joaat("landstalker");
	Local_1821[25 /*3*/] = { 1064.936f, -1637.218f, 29.3989f };
	fLocal_82[25] = -0.012f;
	fLocal_233[25] = 0.0019f;
	fLocal_384[25] = 0.9947f;
	fLocal_535[25] = -0.1019f;
	iLocal_1222[25] = 26;
	fLocal_686[25] = 38742f;
	iLocal_2543[25] = joaat("scrap");
	Local_1821[26 /*3*/] = { 1091.141f, -1629.905f, 28.8929f };
	fLocal_82[26] = -0.0007f;
	fLocal_233[26] = 0.0035f;
	fLocal_384[26] = 0.1006f;
	fLocal_535[26] = 0.9949f;
	iLocal_1222[26] = 27;
	fLocal_686[26] = 38808f;
	iLocal_2543[26] = joaat("landstalker");
	Local_1821[27 /*3*/] = { 1068.237f, -1623.259f, 28.777f };
	fLocal_82[27] = -0.0133f;
	fLocal_233[27] = 0.0019f;
	fLocal_384[27] = 0.9956f;
	fLocal_535[27] = -0.093f;
	iLocal_1222[27] = 28;
	fLocal_686[27] = 39336f;
	iLocal_2543[27] = joaat("phoenix");
	Local_1821[29 /*3*/] = { 1057.116f, -1625.42f, 29.334f };
	fLocal_82[29] = -0.0015f;
	fLocal_233[29] = -0.001f;
	fLocal_384[29] = 0.9961f;
	fLocal_535[29] = -0.088f;
	iLocal_1222[29] = 30;
	fLocal_686[29] = 40194f;
	iLocal_2543[29] = joaat("biff");
	Local_1821[30 /*3*/] = { 1062.41f, -1586.434f, 28.4771f };
	fLocal_82[30] = -0.0131f;
	fLocal_233[30] = 0.0092f;
	fLocal_384[30] = 0.999f;
	fLocal_535[30] = -0.0425f;
	iLocal_1222[30] = 31;
	fLocal_686[30] = 40458f;
	iLocal_2543[30] = joaat("landstalker");
	Local_1821[31 /*3*/] = { 1050.443f, -1570.454f, 28.5423f };
	fLocal_82[31] = 0.0064f;
	fLocal_233[31] = 0.0053f;
	fLocal_384[31] = 0.9986f;
	fLocal_535[31] = -0.0523f;
	iLocal_1222[31] = 32;
	fLocal_686[31] = 40986f;
	iLocal_2543[31] = joaat("biff");
	Local_1821[33 /*3*/] = { 1054.143f, -1500.471f, 27.6671f };
	fLocal_82[33] = -0.012f;
	fLocal_233[33] = -0.0013f;
	fLocal_384[33] = 0.9999f;
	fLocal_535[33] = -0.0036f;
	iLocal_1222[33] = 34;
	fLocal_686[33] = 43362f;
	iLocal_2543[33] = joaat("bison");
	Local_1821[34 /*3*/] = { 1059.655f, -1521.08f, 27.4954f };
	fLocal_82[34] = 0.0104f;
	fLocal_233[34] = 0.0022f;
	fLocal_384[34] = 0.9999f;
	fLocal_535[34] = -0.0083f;
	iLocal_1222[34] = 35;
	fLocal_686[34] = 43560f;
	iLocal_2543[34] = joaat("mesa");
	Local_1821[35 /*3*/] = { 1040.532f, -1479.953f, 27.681f };
	fLocal_82[35] = 0.0003f;
	fLocal_233[35] = -0.0077f;
	fLocal_384[35] = 0.9991f;
	fLocal_535[35] = -0.0414f;
	iLocal_1222[35] = 36;
	fLocal_686[35] = 44022f;
	iLocal_2543[35] = joaat("buccaneer");
	Local_1821[36 /*3*/] = { 1043.968f, -1454.273f, 28.6681f };
	fLocal_82[36] = 0.0002f;
	fLocal_233[36] = -0.0082f;
	fLocal_384[36] = 0.9991f;
	fLocal_535[36] = -0.0409f;
	iLocal_1222[36] = 37;
	fLocal_686[36] = 44880f;
	iLocal_2543[36] = joaat("sadler");
	Local_1821[37 /*3*/] = { 1050.393f, -1443.643f, 36.4312f };
	fLocal_82[37] = -0.0034f;
	fLocal_233[37] = -0.0023f;
	fLocal_384[37] = 0.7072f;
	fLocal_535[37] = -0.707f;
	iLocal_1222[37] = 38;
	fLocal_686[37] = 45210f;
	iLocal_2543[37] = joaat("sadler");
	Local_1821[38 /*3*/] = { 1037.091f, -1432.83f, 28.8182f };
	fLocal_82[38] = 0.0046f;
	fLocal_233[38] = -0.007f;
	fLocal_384[38] = 0.9998f;
	fLocal_535[38] = -0.0207f;
	iLocal_1222[38] = 39;
	fLocal_686[38] = 45540f;
	iLocal_2543[38] = joaat("bison");
	Local_1821[39 /*3*/] = { 1058.962f, -1423.105f, 29.0086f };
	fLocal_82[39] = 0.0002f;
	fLocal_233[39] = -0.0091f;
	fLocal_384[39] = 0.9999f;
	fLocal_535[39] = -0.0054f;
	iLocal_1222[39] = 40;
	fLocal_686[39] = 45870f;
	iLocal_2543[39] = joaat("sadler");
	Local_1821[40 /*3*/] = { 1023.632f, -1443.61f, 35.5696f };
	fLocal_82[40] = -0.0287f;
	fLocal_233[40] = -0.0037f;
	fLocal_384[40] = 0.7069f;
	fLocal_535[40] = -0.7068f;
	iLocal_1222[40] = 41;
	fLocal_686[40] = 46332f;
	iLocal_2543[40] = joaat("landstalker");
	Local_1821[41 /*3*/] = { 1041.725f, -1405.979f, 29.616f };
	fLocal_82[41] = 0.0055f;
	fLocal_233[41] = -0.0096f;
	fLocal_384[41] = 0.9999f;
	fLocal_535[41] = -0.0078f;
	iLocal_1222[41] = 42;
	fLocal_686[41] = 46398f;
	iLocal_2543[41] = joaat("scrap");
	Local_1821[42 /*3*/] = { 1042.129f, -1387.256f, 29.8631f };
	fLocal_82[42] = 0.0003f;
	fLocal_233[42] = -0.0281f;
	fLocal_384[42] = 0.9996f;
	fLocal_535[42] = -0.0084f;
	iLocal_1222[42] = 43;
	fLocal_686[42] = 46992f;
	iLocal_2543[42] = joaat("bison");
	Local_1821[43 /*3*/] = { 1057.583f, -1388.193f, 28.9498f };
	fLocal_82[43] = -0.0066f;
	fLocal_233[43] = 0.0027f;
	fLocal_384[43] = 1f;
	fLocal_535[43] = -0.0064f;
	iLocal_1222[43] = 44;
	fLocal_686[43] = 47058f;
	iLocal_2543[43] = joaat("mesa");
	Local_1821[44 /*3*/] = { 1041.484f, -1369.806f, 31.3912f };
	fLocal_82[44] = -0.0046f;
	fLocal_233[44] = -0.0462f;
	fLocal_384[44] = 0.9988f;
	fLocal_535[44] = -0.013f;
	iLocal_1222[44] = 45;
	fLocal_686[44] = 47586f;
	iLocal_2543[44] = joaat("sadler");
	Local_1821[45 /*3*/] = { 1035.022f, -1351.277f, 32.9924f };
	fLocal_82[45] = 0.0017f;
	fLocal_233[45] = -0.0618f;
	fLocal_384[45] = 0.9978f;
	fLocal_535[45] = -0.0247f;
	iLocal_1222[45] = 46;
	fLocal_686[45] = 48246f;
	iLocal_2543[45] = joaat("buccaneer");
	Local_1821[46 /*3*/] = { 1034.524f, -1336.865f, 35.3449f };
	fLocal_82[46] = 0.0179f;
	fLocal_233[46] = -0.0542f;
	fLocal_384[46] = 0.998f;
	fLocal_535[46] = -0.028f;
	iLocal_1222[46] = 47;
	fLocal_686[46] = 48840f;
	iLocal_2543[46] = joaat("sadler");
	Local_1821[47 /*3*/] = { 1033.478f, -1319.964f, 37.1015f };
	fLocal_82[47] = 0.0181f;
	fLocal_233[47] = -0.0545f;
	fLocal_384[47] = 0.9979f;
	fLocal_535[47] = -0.0296f;
	iLocal_1222[47] = 48;
	fLocal_686[47] = 49368f;
	iLocal_2543[47] = joaat("landstalker");
	Local_1821[48 /*3*/] = { 1054.65f, -1317.969f, 27.0912f };
	fLocal_82[48] = -0.0006f;
	fLocal_233[48] = 0.0219f;
	fLocal_384[48] = 0.9994f;
	fLocal_535[48] = -0.0279f;
	iLocal_1222[48] = 49;
	fLocal_686[48] = 49566f;
	iLocal_2543[48] = joaat("sadler");
	Local_1821[49 /*3*/] = { 1032.135f, -1308.393f, 38.3468f };
	fLocal_82[49] = 0.005f;
	fLocal_233[49] = -0.0471f;
	fLocal_384[49] = 0.9985f;
	fLocal_535[49] = -0.0282f;
	iLocal_1222[49] = 50;
	fLocal_686[49] = 49764f;
	iLocal_2543[49] = joaat("bison");
	Local_1821[50 /*3*/] = { 1038.004f, -1304.095f, 38.691f };
	fLocal_82[50] = -0.0042f;
	fLocal_233[50] = -0.046f;
	fLocal_384[50] = 0.9986f;
	fLocal_535[50] = -0.0256f;
	iLocal_1222[50] = 51;
	fLocal_686[50] = 49896f;
	iLocal_2543[50] = joaat("mesa");
	Local_1821[51 /*3*/] = { 1032.886f, -1272.884f, 41.7283f };
	fLocal_82[51] = -0.0066f;
	fLocal_233[51] = -0.048f;
	fLocal_384[51] = 0.9981f;
	fLocal_535[51] = 0.0392f;
	iLocal_1222[51] = 52;
	fLocal_686[51] = 50886f;
	iLocal_2543[51] = joaat("sadler");
	Local_1821[52 /*3*/] = { 1038.037f, -1273.27f, 41.6203f };
	fLocal_82[52] = -0.0151f;
	fLocal_233[52] = -0.0521f;
	fLocal_384[52] = 0.9977f;
	fLocal_535[52] = 0.0409f;
	iLocal_1222[52] = 53;
	fLocal_686[52] = 50952f;
	iLocal_2543[52] = joaat("landstalker");
	Local_1821[53 /*3*/] = { 1040.509f, -1256.959f, 42.9299f };
	fLocal_82[53] = -0.0102f;
	fLocal_233[53] = -0.0355f;
	fLocal_384[53] = 0.9919f;
	fLocal_535[53] = 0.1214f;
	iLocal_1222[53] = 54;
	fLocal_686[53] = 51480f;
	iLocal_2543[53] = joaat("mesa");
	Local_1821[54 /*3*/] = { 1053.209f, -1226.473f, 45.371f };
	fLocal_82[54] = -0.0056f;
	fLocal_233[54] = -0.0329f;
	fLocal_384[54] = 0.9697f;
	fLocal_535[54] = 0.2421f;
	iLocal_1222[54] = 55;
	fLocal_686[54] = 52536f;
	iLocal_2543[54] = joaat("landstalker");
	Local_1821[55 /*3*/] = { 1047.165f, -1195.591f, 55.7625f };
	fLocal_82[55] = -0.0034f;
	fLocal_233[55] = 0.0059f;
	fLocal_384[55] = -0.6925f;
	fLocal_535[55] = 0.7214f;
	iLocal_1222[55] = 56;
	fLocal_686[55] = 53658f;
	iLocal_2543[55] = joaat("scrap");
	Local_1821[56 /*3*/] = { 1025.253f, -1190.302f, 55.3269f };
	fLocal_82[56] = 0.0179f;
	fLocal_233[56] = 0.0029f;
	fLocal_384[56] = -0.6945f;
	fLocal_535[56] = 0.7192f;
	iLocal_1222[56] = 57;
	fLocal_686[56] = 53988f;
	iLocal_2543[56] = joaat("landstalker");
	Local_1821[59 /*3*/] = { 1039.697f, -1166.889f, 46.7159f };
	fLocal_82[59] = 0.0047f;
	fLocal_233[59] = 0.0091f;
	fLocal_384[59] = -0.3573f;
	fLocal_535[59] = 0.9339f;
	iLocal_1222[59] = 60;
	fLocal_686[59] = 54582f;
	iLocal_2543[59] = joaat("landstalker");
	Local_1821[60 /*3*/] = { 1067.293f, -1195.449f, 47.0312f };
	fLocal_82[60] = 0.0167f;
	fLocal_233[60] = -0.0055f;
	fLocal_384[60] = 0.9319f;
	fLocal_535[60] = 0.3623f;
	iLocal_1222[60] = 61;
	fLocal_686[60] = 54714f;
	iLocal_2543[60] = joaat("sadler");
	Local_1821[61 /*3*/] = { 1089.48f, -1183.557f, 46.0068f };
	fLocal_82[61] = 0.0143f;
	fLocal_233[61] = 0.0276f;
	fLocal_384[61] = 0.8926f;
	fLocal_535[61] = 0.4497f;
	iLocal_1222[61] = 62;
	fLocal_686[61] = 54978f;
	iLocal_2543[61] = joaat("landstalker");
	Local_1821[66 /*3*/] = { 1209.688f, -1147f, 47.4201f };
	fLocal_82[66] = -0.0274f;
	fLocal_233[66] = -0.0234f;
	fLocal_384[66] = 0.7991f;
	fLocal_535[66] = 0.6002f;
	iLocal_1222[66] = 67;
	fLocal_686[66] = 59334f;
	iLocal_2543[66] = joaat("sadler");
	Local_1821[67 /*3*/] = { 1252.353f, -1147.135f, 51.1307f };
	fLocal_82[67] = -0.0036f;
	fLocal_233[67] = 0.0025f;
	fLocal_384[67] = 0.8345f;
	fLocal_535[67] = 0.5509f;
	iLocal_1222[67] = 68;
	fLocal_686[67] = 60720f;
	iLocal_2543[67] = joaat("landstalker");
	Local_1821[68 /*3*/] = { 1283.072f, -1135.693f, 51.1078f };
	fLocal_82[68] = -0.0035f;
	fLocal_233[68] = 0.0026f;
	fLocal_384[68] = 0.8366f;
	fLocal_535[68] = 0.5477f;
	iLocal_1222[68] = 69;
	fLocal_686[68] = 61776f;
	iLocal_2543[68] = joaat("mesa");
	Local_1821[69 /*3*/] = { 1316.042f, -1117.948f, 50.8728f };
	fLocal_82[69] = -0.0012f;
	fLocal_233[69] = -0.0019f;
	fLocal_384[69] = 0.8533f;
	fLocal_535[69] = 0.5214f;
	iLocal_1222[69] = 70;
	fLocal_686[69] = 63030f;
	iLocal_2543[69] = joaat("buccaneer");
	Local_1821[70 /*3*/] = { 1319.292f, -1097.971f, 51.1957f };
	fLocal_82[70] = 0.003f;
	fLocal_233[70] = -0.0108f;
	fLocal_384[70] = 0.8429f;
	fLocal_535[70] = 0.538f;
	iLocal_1222[70] = 71;
	fLocal_686[70] = 63360f;
	iLocal_2543[70] = joaat("bison");
	Local_1821[71 /*3*/] = { 1342.187f, -1117.755f, 51.875f };
	fLocal_82[71] = 0.0065f;
	fLocal_233[71] = -0.0048f;
	fLocal_384[71] = -0.5362f;
	fLocal_535[71] = 0.8441f;
	iLocal_1222[71] = 72;
	fLocal_686[71] = 63888f;
	iLocal_2543[71] = joaat("sadler");
	Local_1821[72 /*3*/] = { 1351.593f, -1099.85f, 52.0916f };
	fLocal_82[72] = -0.0082f;
	fLocal_233[72] = -0.0074f;
	fLocal_384[72] = 0.8561f;
	fLocal_535[72] = 0.5166f;
	iLocal_1222[72] = 73;
	fLocal_686[72] = 64350f;
	iLocal_2543[72] = joaat("scrap");
	Local_1821[73 /*3*/] = { 1358.173f, -1090.943f, 51.8101f };
	fLocal_82[73] = -0.0058f;
	fLocal_233[73] = -0.0096f;
	fLocal_384[73] = 0.8579f;
	fLocal_535[73] = 0.5136f;
	iLocal_1222[73] = 74;
	fLocal_686[73] = 64680f;
	iLocal_2543[73] = joaat("landstalker");
	Local_1821[74 /*3*/] = { 1362.632f, -1105.306f, 52.5445f };
	fLocal_82[74] = 0.0076f;
	fLocal_233[74] = -0.0046f;
	fLocal_384[74] = -0.5148f;
	fLocal_535[74] = 0.8573f;
	iLocal_1222[74] = 75;
	fLocal_686[74] = 64680f;
	iLocal_2543[74] = joaat("scrap");
	Local_1821[75 /*3*/] = { 1382.226f, -1083.704f, 52.4738f };
	fLocal_82[75] = -0.0107f;
	fLocal_233[75] = -0.0093f;
	fLocal_384[75] = 0.8582f;
	fLocal_535[75] = 0.5131f;
	iLocal_1222[75] = 76;
	fLocal_686[75] = 65472f;
	iLocal_2543[75] = joaat("landstalker");
	Local_1821[78 /*3*/] = { 1422.351f, -1055.396f, 54.1407f };
	fLocal_82[78] = -0.0096f;
	fLocal_233[78] = -0.0107f;
	fLocal_384[78] = 0.8592f;
	fLocal_535[78] = 0.5114f;
	iLocal_1222[78] = 79;
	fLocal_686[78] = 67056f;
	iLocal_2543[78] = joaat("sadler");
	Local_1821[79 /*3*/] = { 1437.464f, -1047.19f, 54.4153f };
	fLocal_82[79] = -0.0089f;
	fLocal_233[79] = -0.0119f;
	fLocal_384[79] = 0.8666f;
	fLocal_535[79] = 0.4987f;
	iLocal_1222[79] = 80;
	fLocal_686[79] = 67584f;
	iLocal_2543[79] = joaat("mesa");
	Local_1821[80 /*3*/] = { 1501.861f, -1018.038f, 57.1928f };
	fLocal_82[80] = -0.0105f;
	fLocal_233[80] = -0.0094f;
	fLocal_384[80] = 0.8616f;
	fLocal_535[80] = 0.5073f;
	iLocal_1222[80] = 81;
	fLocal_686[80] = 70092f;
	iLocal_2543[80] = joaat("scrap");
	Local_1821[81 /*3*/] = { 1537.751f, -1015.453f, 57.5874f };
	fLocal_82[81] = 0.0134f;
	fLocal_233[81] = -0.0039f;
	fLocal_384[81] = -0.5048f;
	fLocal_535[81] = 0.8632f;
	iLocal_1222[81] = 82;
	fLocal_686[81] = 70818f;
	iLocal_2543[81] = joaat("mesa");
	Local_1821[82 /*3*/] = { 1547.086f, -985.7202f, 58.299f };
	fLocal_82[82] = -0.0174f;
	fLocal_233[82] = -0.013f;
	fLocal_384[82] = 0.863f;
	fLocal_535[82] = 0.5047f;
	iLocal_1222[82] = 83;
	fLocal_686[82] = 71544f;
	iLocal_2543[82] = joaat("landstalker");
	Local_1821[84 /*3*/] = { 1572.372f, -988.5083f, 59.2547f };
	fLocal_82[84] = 0.0108f;
	fLocal_233[84] = -0.0245f;
	fLocal_384[84] = -0.4971f;
	fLocal_535[84] = 0.8673f;
	iLocal_1222[84] = 85;
	fLocal_686[84] = 72072f;
	iLocal_2543[84] = joaat("bison");
	Local_1821[86 /*3*/] = { 1570.782f, -973.6722f, 59.5908f };
	fLocal_82[86] = -0.0207f;
	fLocal_233[86] = -0.0139f;
	fLocal_384[86] = 0.8682f;
	fLocal_535[86] = 0.4955f;
	iLocal_1222[86] = 87;
	fLocal_686[86] = 72270f;
	iLocal_2543[86] = joaat("bison");
	Local_1821[87 /*3*/] = { 1586.495f, -987.2821f, 60.1358f };
	fLocal_82[87] = 0.024f;
	fLocal_233[87] = -0.0041f;
	fLocal_384[87] = -0.5017f;
	fLocal_535[87] = 0.8647f;
	iLocal_1222[87] = 88;
	fLocal_686[87] = 72468f;
	iLocal_2543[87] = joaat("sadler");
	Local_1821[88 /*3*/] = { 1588.432f, -962.2726f, 60.5369f };
	fLocal_82[88] = -0.027f;
	fLocal_233[88] = -0.0121f;
	fLocal_384[88] = 0.8626f;
	fLocal_535[88] = 0.5051f;
	iLocal_1222[88] = 89;
	fLocal_686[88] = 72930f;
	iLocal_2543[88] = joaat("bison");
	Local_1821[89 /*3*/] = { 1604.571f, -959.2837f, 61.373f };
	fLocal_82[89] = -0.0047f;
	fLocal_233[89] = -0.0256f;
	fLocal_384[89] = 0.8673f;
	fLocal_535[89] = 0.4972f;
	iLocal_1222[89] = 90;
	fLocal_686[89] = 73392f;
	iLocal_2543[89] = joaat("mesa");
	Local_1821[90 /*3*/] = { 1620.748f, -967.0914f, 62.3388f };
	fLocal_82[90] = 0.0268f;
	fLocal_233[90] = -0.0015f;
	fLocal_384[90] = -0.4947f;
	fLocal_535[90] = 0.8686f;
	iLocal_1222[90] = 91;
	fLocal_686[90] = 73722f;
	iLocal_2543[90] = joaat("scrap");
	Local_1821[91 /*3*/] = { 1622.042f, -959.2253f, 61.8929f };
	fLocal_82[91] = 0.0124f;
	fLocal_233[91] = -0.0272f;
	fLocal_384[91] = -0.4953f;
	fLocal_535[91] = 0.8682f;
	iLocal_1222[91] = 92;
	fLocal_686[91] = 73788f;
	iLocal_2543[91] = joaat("buccaneer");
	Local_1821[92 /*3*/] = { 1633.764f, -942.4766f, 63.573f };
	fLocal_82[92] = -0.005f;
	fLocal_233[92] = -0.0265f;
	fLocal_384[92] = 0.8694f;
	fLocal_535[92] = 0.4933f;
	iLocal_1222[92] = 93;
	fLocal_686[92] = 74316f;
	iLocal_2543[92] = joaat("scrap");
	Local_1821[93 /*3*/] = { 1654.603f, -946.085f, 63.7836f };
	fLocal_82[93] = 0.0279f;
	fLocal_233[93] = -0.0011f;
	fLocal_384[93] = -0.4872f;
	fLocal_535[93] = 0.8728f;
	iLocal_1222[93] = 94;
	fLocal_686[93] = 74844f;
	iLocal_2543[93] = joaat("buccaneer");
	Local_1821[94 /*3*/] = { 1658.274f, -938.0108f, 64.2821f };
	fLocal_82[94] = 0.0134f;
	fLocal_233[94] = -0.0275f;
	fLocal_384[94] = -0.4875f;
	fLocal_535[94] = 0.8726f;
	iLocal_1222[94] = 95;
	fLocal_686[94] = 74976f;
	iLocal_2543[94] = joaat("mesa");
	Local_1821[95 /*3*/] = { 1695.07f, -920.9435f, 66.5076f };
	fLocal_82[95] = 0.027f;
	fLocal_233[95] = -0.0047f;
	fLocal_384[95] = -0.478f;
	fLocal_535[95] = 0.8779f;
	iLocal_1222[95] = 96;
	fLocal_686[95] = 76164f;
	iLocal_2543[95] = joaat("landstalker");
	Local_1821[96 /*3*/] = { 1693.483f, -916.1393f, 66.5571f };
	fLocal_82[96] = 0.0145f;
	fLocal_233[96] = -0.0278f;
	fLocal_384[96] = -0.4795f;
	fLocal_535[96] = 0.877f;
	iLocal_1222[96] = 97;
	fLocal_686[96] = 76164f;
	iLocal_2543[96] = joaat("mesa");
	Local_1821[97 /*3*/] = { 1686.701f, -909.9734f, 66.3996f };
	fLocal_82[97] = 0.004f;
	fLocal_233[97] = -0.034f;
	fLocal_384[97] = 0.879f;
	fLocal_535[97] = 0.4755f;
	iLocal_1222[97] = 98;
	fLocal_686[97] = 76890f;
	iLocal_2543[97] = joaat("mesa");
	Local_1821[99 /*3*/] = { 1739.909f, -890.9354f, 69.736f };
	fLocal_82[99] = 0.0278f;
	fLocal_233[99] = -0.0047f;
	fLocal_384[99] = -0.4636f;
	fLocal_535[99] = 0.8856f;
	iLocal_1222[99] = 100;
	fLocal_686[99] = 78210f;
	iLocal_2543[99] = joaat("sadler");
	Local_1821[100 /*3*/] = { 1756.134f, -873.2136f, 71.2733f };
	fLocal_82[100] = 0.0162f;
	fLocal_233[100] = -0.0264f;
	fLocal_384[100] = -0.4587f;
	fLocal_535[100] = 0.888f;
	iLocal_1222[100] = 101;
	fLocal_686[100] = 78738f;
	iLocal_2543[100] = joaat("scrap");
	Local_1821[101 /*3*/] = { 1736.973f, -875.2971f, 69.8341f };
	fLocal_82[101] = -0.0037f;
	fLocal_233[101] = -0.0346f;
	fLocal_384[101] = 0.886f;
	fLocal_535[101] = 0.4624f;
	iLocal_1222[101] = 102;
	fLocal_686[101] = 78870f;
	iLocal_2543[101] = joaat("mesa");
	Local_1821[102 /*3*/] = { 1752.139f, -864.4997f, 70.8736f };
	fLocal_82[102] = -0.0029f;
	fLocal_233[102] = -0.0323f;
	fLocal_384[102] = 0.8888f;
	fLocal_535[102] = 0.4572f;
	iLocal_1222[102] = 103;
	fLocal_686[102] = 79728f;
	iLocal_2543[102] = joaat("mesa");
	Local_1821[103 /*3*/] = { 1808.107f, -842.0761f, 74.2613f };
	fLocal_82[103] = 0.0305f;
	fLocal_233[103] = -0.0055f;
	fLocal_384[103] = -0.4493f;
	fLocal_535[103] = 0.8929f;
	iLocal_1222[103] = 104;
	fLocal_686[103] = 80850f;
	iLocal_2543[103] = joaat("bison");
	Local_1821[104 /*3*/] = { 1794.461f, -851.4075f, 73.2175f };
	fLocal_82[104] = 0.0337f;
	fLocal_233[104] = -0.0008f;
	fLocal_384[104] = -0.4478f;
	fLocal_535[104] = 0.8935f;
	iLocal_1222[104] = 105;
	fLocal_686[104] = 81180f;
	iLocal_2543[104] = joaat("mesa");
	Local_1821[105 /*3*/] = { 1813.361f, -820.5766f, 75.1247f };
	fLocal_82[105] = 0.0007f;
	fLocal_233[105] = -0.0375f;
	fLocal_384[105] = 0.8942f;
	fLocal_535[105] = 0.446f;
	iLocal_1222[105] = 106;
	fLocal_686[105] = 81576f;
	iLocal_2543[105] = joaat("buccaneer");
	Local_1821[106 /*3*/] = { 1852.822f, -789.6251f, 79.0498f };
	fLocal_82[106] = -0.0088f;
	fLocal_233[106] = -0.0376f;
	fLocal_384[106] = 0.8951f;
	fLocal_535[106] = 0.4442f;
	iLocal_1222[106] = 107;
	fLocal_686[106] = 83424f;
	iLocal_2543[106] = joaat("bison");
	Local_1821[107 /*3*/] = { 1893.72f, -758.705f, 83.0709f };
	fLocal_82[107] = -0.0095f;
	fLocal_233[107] = -0.0383f;
	fLocal_384[107] = 0.8947f;
	fLocal_535[107] = 0.4449f;
	iLocal_1222[107] = 108;
	fLocal_686[107] = 85272f;
	iLocal_2543[107] = joaat("emperor");
	Local_1821[108 /*3*/] = { 1904.63f, -762.515f, 83.5621f };
	fLocal_82[108] = 0.0265f;
	fLocal_233[108] = -0.0326f;
	fLocal_384[108] = -0.4445f;
	fLocal_535[108] = 0.8948f;
	iLocal_1222[108] = 109;
	fLocal_686[108] = 85404f;
	iLocal_2543[108] = joaat("mesa");
	Local_1821[109 /*3*/] = { 1915.347f, -743.614f, 85.1017f };
	fLocal_82[109] = -0.0092f;
	fLocal_233[109] = -0.0389f;
	fLocal_384[109] = 0.8965f;
	fLocal_535[109] = 0.4411f;
	iLocal_1222[109] = 110;
	fLocal_686[109] = 86262f;
	iLocal_2543[109] = joaat("faggio2");
	Local_1821[110 /*3*/] = { 1931.051f, -749.3928f, 85.8679f };
	fLocal_82[110] = 0.0377f;
	fLocal_233[110] = -0.0082f;
	fLocal_384[110] = -0.4422f;
	fLocal_535[110] = 0.8961f;
	iLocal_1222[110] = 111;
	fLocal_686[110] = 86460f;
	iLocal_2543[110] = joaat("bison");
	Local_1821[111 /*3*/] = { 1927.438f, -726.9298f, 86.6339f };
	fLocal_82[111] = -0.0316f;
	fLocal_233[111] = -0.0247f;
	fLocal_384[111] = 0.8964f;
	fLocal_535[111] = 0.4414f;
	iLocal_1222[111] = 112;
	fLocal_686[111] = 86988f;
	iLocal_2543[111] = joaat("emperor");
	Local_1821[112 /*3*/] = { 1946.572f, -719.609f, 87.9184f };
	fLocal_82[112] = -0.0045f;
	fLocal_233[112] = -0.0353f;
	fLocal_384[112] = 0.8969f;
	fLocal_535[112] = 0.4408f;
	iLocal_1222[112] = 113;
	fLocal_686[112] = 87846f;
	iLocal_2543[112] = joaat("buccaneer");
	Local_1821[113 /*3*/] = { 1964.152f, -705.9418f, 89.6367f };
	fLocal_82[113] = -0.0064f;
	fLocal_233[113] = -0.0323f;
	fLocal_384[113] = 0.8975f;
	fLocal_535[113] = 0.4398f;
	iLocal_1222[113] = 114;
	fLocal_686[113] = 88836f;
	iLocal_2543[113] = joaat("mesa");
	Local_1821[115 /*3*/] = { 1975.171f, -689.519f, 91.3147f };
	fLocal_82[115] = -0.0255f;
	fLocal_233[115] = -0.0189f;
	fLocal_384[115] = 0.8984f;
	fLocal_535[115] = 0.4381f;
	iLocal_1222[115] = 116;
	fLocal_686[115] = 89628f;
	iLocal_2543[115] = joaat("scrap");
	Local_1821[116 /*3*/] = { 1997.502f, -697.2738f, 92.0762f };
	fLocal_82[116] = 0.0286f;
	fLocal_233[116] = -0.0053f;
	fLocal_384[116] = -0.4356f;
	fLocal_535[116] = 0.8997f;
	iLocal_1222[116] = 117;
	fLocal_686[116] = 90090f;
	iLocal_2543[116] = joaat("scrap");
	Local_1821[117 /*3*/] = { 1981.145f, -691.6869f, 91.0842f };
	fLocal_82[117] = 0.0009f;
	fLocal_233[117] = -0.0345f;
	fLocal_384[117] = 0.8992f;
	fLocal_535[117] = 0.4362f;
	iLocal_1222[117] = 118;
	fLocal_686[117] = 91080f;
	iLocal_2543[117] = joaat("bison");
	Local_1821[118 /*3*/] = { 2008.492f, -663.426f, 93.0802f };
	fLocal_82[118] = -0.0187f;
	fLocal_233[118] = -0.0146f;
	fLocal_384[118] = 0.896f;
	fLocal_535[118] = 0.4434f;
	iLocal_1222[118] = 119;
	fLocal_686[118] = 91146f;
	iLocal_2543[118] = joaat("faggio2");
	Local_1821[119 /*3*/] = { 2015.655f, -665.2861f, 93.5563f };
	fLocal_82[119] = -0.0041f;
	fLocal_233[119] = -0.0188f;
	fLocal_384[119] = 0.9003f;
	fLocal_535[119] = 0.4348f;
	iLocal_1222[119] = 120;
	fLocal_686[119] = 91410f;
	iLocal_2543[119] = joaat("sadler");
	Local_1821[120 /*3*/] = { 2036.688f, -658.4556f, 94.0461f };
	fLocal_82[120] = 0.0087f;
	fLocal_233[120] = -0.0174f;
	fLocal_384[120] = -0.4303f;
	fLocal_535[120] = 0.9025f;
	iLocal_1222[120] = 121;
	fLocal_686[120] = 92268f;
	iLocal_2543[120] = joaat("bison");
	Local_1821[121 /*3*/] = { 2057.42f, -648.5696f, 94.8897f };
	fLocal_82[121] = 0.0111f;
	fLocal_233[121] = -0.0006f;
	fLocal_384[121] = -0.4291f;
	fLocal_535[121] = 0.9032f;
	iLocal_1222[121] = 122;
	fLocal_686[121] = 93522f;
	iLocal_2543[121] = joaat("sadler");
	Local_1821[122 /*3*/] = { 2062.449f, -627.6309f, 94.8388f };
	fLocal_82[122] = 0.0086f;
	fLocal_233[122] = -0.0116f;
	fLocal_384[122] = 0.9041f;
	fLocal_535[122] = 0.427f;
	iLocal_1222[122] = 123;
	fLocal_686[122] = 93918f;
	iLocal_2543[122] = joaat("faggio2");
	Local_1821[123 /*3*/] = { 2099.812f, -614.3542f, 94.9874f };
	fLocal_82[123] = 0.0058f;
	fLocal_233[123] = 0.0122f;
	fLocal_384[123] = -0.4234f;
	fLocal_535[123] = 0.9058f;
	iLocal_1222[123] = 124;
	fLocal_686[123] = 96162f;
	iLocal_2543[123] = joaat("buccaneer");
	Local_1821[124 /*3*/] = { 2100.98f, -605.6147f, 95.4105f };
	fLocal_82[124] = -0.0035f;
	fLocal_233[124] = -0.0077f;
	fLocal_384[124] = -0.4234f;
	fLocal_535[124] = 0.9059f;
	iLocal_1222[124] = 125;
	fLocal_686[124] = 96492f;
	iLocal_2543[124] = joaat("sadler");
	Local_1821[125 /*3*/] = { 2145.736f, -555.6513f, 94.4273f };
	fLocal_82[125] = 0.013f;
	fLocal_233[125] = 0.005f;
	fLocal_384[125] = 0.9106f;
	fLocal_535[125] = 0.4131f;
	iLocal_1222[125] = 126;
	fLocal_686[125] = 99594f;
	iLocal_2543[125] = joaat("bison");
	Local_1821[126 /*3*/] = { 2164.987f, -551.8726f, 94.0056f };
	fLocal_82[126] = -0.0161f;
	fLocal_233[126] = -0.0104f;
	fLocal_384[126] = -0.4093f;
	fLocal_535[126] = 0.9122f;
	iLocal_1222[126] = 127;
	fLocal_686[126] = 100188f;
	iLocal_2543[126] = joaat("mesa");
	Local_1821[127 /*3*/] = { 2204.741f, -501.744f, 92.0787f };
	fLocal_82[127] = 0.0148f;
	fLocal_233[127] = 0.0124f;
	fLocal_384[127] = 0.919f;
	fLocal_535[127] = 0.3937f;
	iLocal_1222[127] = 128;
	fLocal_686[127] = 102960f;
	iLocal_2543[127] = joaat("mesa");
	Local_1821[128 /*3*/] = { 2203.389f, -496.8589f, 91.9812f };
	fLocal_82[128] = -0.0093f;
	fLocal_233[128] = 0.0226f;
	fLocal_384[128] = 0.9187f;
	fLocal_535[128] = 0.3941f;
	iLocal_1222[128] = 129;
	fLocal_686[128] = 103554f;
	iLocal_2543[128] = joaat("bison");
	Local_1821[129 /*3*/] = { 2252.198f, -500.7823f, 85.1706f };
	fLocal_82[129] = -0.0644f;
	fLocal_233[129] = 0.0372f;
	fLocal_384[129] = -0.4282f;
	fLocal_535[129] = 0.9006f;
	iLocal_1222[129] = 130;
	fLocal_686[129] = 105402f;
	iLocal_2543[129] = joaat("buccaneer");
	Local_1821[130 /*3*/] = { 2394.777f, -440.2159f, 71.9554f };
	fLocal_82[130] = 0.0148f;
	fLocal_233[130] = -0.0174f;
	fLocal_384[130] = 0.4138f;
	fLocal_535[130] = 0.9101f;
	iLocal_1222[130] = 131;
	fLocal_686[130] = 110616f;
	iLocal_2543[130] = joaat("bison");
	Local_1821[131 /*3*/] = { 2494.6f, -527.8857f, 68.0146f };
	fLocal_82[131] = 0.0134f;
	fLocal_233[131] = 0.0081f;
	fLocal_384[131] = 0.4058f;
	fLocal_535[131] = 0.9138f;
	iLocal_1222[131] = 132;
	fLocal_686[131] = 114840f;
	iLocal_2543[131] = joaat("faggio2");
	Local_1821[132 /*3*/] = { 2486.135f, -675.5621f, 61.6248f };
	fLocal_82[132] = -0.0054f;
	fLocal_233[132] = 0.0043f;
	fLocal_384[132] = -0.5571f;
	fLocal_535[132] = 0.8304f;
	iLocal_1222[132] = 133;
	fLocal_686[132] = 120647f;
	iLocal_2543[132] = joaat("sadler");
	Local_1821[133 /*3*/] = { 2447.942f, -684.5295f, 62.5512f };
	fLocal_82[133] = -0.0044f;
	fLocal_233[133] = 0.007f;
	fLocal_384[133] = -0.6585f;
	fLocal_535[133] = 0.7526f;
	iLocal_1222[133] = 134;
	fLocal_686[133] = 121967f;
	iLocal_2543[133] = joaat("sandking");
	Local_1821[134 /*3*/] = { 2210.577f, -748.1284f, 66.6389f };
	fLocal_82[134] = 0.0036f;
	fLocal_233[134] = 0.0236f;
	fLocal_384[134] = 0.9151f;
	fLocal_535[134] = 0.4025f;
	iLocal_1222[134] = 135;
	fLocal_686[134] = 129684f;
	iLocal_2543[134] = joaat("mesa");
	Local_1821[135 /*3*/] = { 2121.379f, -849.5552f, 78.6098f };
	fLocal_82[135] = 0.0107f;
	fLocal_233[135] = 0.0167f;
	fLocal_384[135] = 0.893f;
	fLocal_535[135] = 0.4497f;
	iLocal_1222[135] = 136;
	fLocal_686[135] = 133512f;
	iLocal_2543[135] = joaat("sadler");
	Local_1821[136 /*3*/] = { 1986.47f, -906.1359f, 78.6676f };
	fLocal_82[136] = -0.0004f;
	fLocal_233[136] = 0.0006f;
	fLocal_384[136] = 0.847f;
	fLocal_535[136] = 0.5316f;
	iLocal_1222[136] = 137;
	fLocal_686[136] = 138396f;
	iLocal_2543[136] = joaat("emperor");
	Local_1821[137 /*3*/] = { 2004.703f, -986.553f, 82.1703f };
	fLocal_82[137] = -0.0683f;
	fLocal_233[137] = 0.0124f;
	fLocal_384[137] = -0.1439f;
	fLocal_535[137] = 0.9872f;
	iLocal_1222[137] = 138;
	fLocal_686[137] = 142686f;
	iLocal_2543[137] = joaat("mesa");
}

void func_364(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x314A3
{
	struct<3> Var0;
	
	StringCopy(&cLocal_2526, sParam0, 64);
	bLocal_58 = true;
	iLocal_63 = 0;
	iLocal_1804 = 0;
	iLocal_1805 = 0;
	iLocal_1806 = 0;
	iLocal_1807 = iParam1;
	iLocal_1808 = 0;
	iLocal_1809 = 0;
	iLocal_1810 = 0;
	iLocal_1814 = 0;
	iLocal_1817 = 0;
	iLocal_1815 = -1;
	iLocal_1816 = -1;
	iLocal_1818 = 0;
	iLocal_1819 = 0;
	fLocal_1217 = 0f;
	fLocal_1218 = 0f;
	fLocal_1203 = 0f;
	iLocal_64 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		Local_2502.x = (Var0.x - 100f);
		Local_2502.f_1 = (Var0.f_1 - 100f);
		Local_2502.f_2 = (Var0.f_2 - 100f);
		Local_2505.x = (Var0.x + 100f);
		Local_2505.f_1 = (Var0.f_1 + 100f);
		Local_2505.f_2 = (Var0.f_2 + 100f);
		PATHFIND::SET_ROADS_IN_AREA(Local_2502, Local_2505, 0, 0);
		if (bParam2)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(Var0, 500f, 0, 0, 0, 0, 0);
		}
	}
	PED::ADD_RELATIONSHIP_GROUP("rgh_traffic", &iLocal_2542);
	GlobalFunc_2512();
	if (bParam3)
	{
		GlobalFunc_9191(1);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 0);
		PED::SET_CREATE_RANDOM_COPS(0);
	}
	func_365();
}

void func_365()//Position - 0x315C4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 150)
	{
		iLocal_2774[iVar0] = 0;
		Local_1821[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_82[iVar0] = 0f;
		fLocal_233[iVar0] = 0f;
		fLocal_384[iVar0] = 0f;
		fLocal_535[iVar0] = 0f;
		iLocal_1222[iVar0] = 0;
		fLocal_686[iVar0] = 0f;
		iLocal_1373[iVar0] = 0;
		iLocal_2543[iVar0] = 0;
		iLocal_1524[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iLocal_2925[iVar0] = 0;
		iVar0++;
	}
	iLocal_1804 = 0;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iLocal_2934[iVar0] = 0;
		Local_2272[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_997[iVar0] = 0f;
		fLocal_1048[iVar0] = 0f;
		fLocal_1099[iVar0] = 0f;
		fLocal_1150[iVar0] = 0f;
		iLocal_1753[iVar0] = 0;
		iLocal_2694[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iLocal_3011[iVar0] = 0;
		iVar0++;
	}
	iLocal_1806 = 0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		iLocal_2985[iVar0] = 0;
		Local_2423[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_841[iVar0] = 0f;
		fLocal_867[iVar0] = 0f;
		fLocal_893[iVar0] = 0f;
		fLocal_919[iVar0] = 0f;
		iLocal_1675[iVar0] = 0;
		fLocal_945[iVar0] = 0f;
		iLocal_1701[iVar0] = 0;
		iLocal_2745[iVar0] = 0;
		iLocal_1727[iVar0] = 0;
		iVar0++;
	}
	iLocal_1805 = 0;
	iLocal_1808 = 0;
	iLocal_1811 = 0;
	iLocal_1812 = 0;
	iLocal_1813 = 0;
}






void func_371()//Position - 0x318A5
{
	switch (iLocal_4761)
	{
		case 0:
			iLocal_3036 = 0;
			VEHICLE::REQUEST_VEHICLE_RECORDING(0, "BB_FINALE");
			STREAMING::REQUEST_PTFX_ASSET();
			if (GlobalFunc_Is_Mission_Retry() && !bLocal_4766)
			{
				MISC::CLEAR_AREA(1334.851f, -2555.594f, 45.58296f, 200f, 1, 0, 0, 0);
				iLocal_4761 = 3;
			}
			else
			{
				func_394();
				if (bLocal_3365)
				{
					iLocal_4761++;
				}
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				GlobalFunc_9025(&Local_3099, 0, 0, 2000, 1, 0, 0, 1);
				CAM::DESTROY_ALL_CAMS(0);
				MISC::CLEAR_AREA(1334.851f, -2555.594f, 45.58296f, 200f, 1, 0, 0, 0);
				FIRE::STOP_FIRE_IN_RANGE(1334.851f, -2555.594f, 45.58296f, 200f);
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Trevor", 0)) && ENTITY::DOES_ENTITY_EXIST(Local_3063[1 /*2*/]))
				{
					func_152(1);
					Local_3076[1 /*2*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Trevor", 0));
					VEHICLE::SET_VEHICLE_LIGHTS(Local_3063[1 /*2*/], 2);
					PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
					PED::CLEAR_PED_PROP(func_268(), 0);
					RECORDING::_0x48621C9FCA3EBD28(4);
					iLocal_4761++;
				}
			}
			break;
		
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_3063[2 /*2*/]))
				{
					if (GlobalFunc_7984())
					{
						Local_3063[2 /*2*/] = GlobalFunc_2251();
						if (((VEHICLE::IS_THIS_MODEL_A_CAR(GlobalFunc_2575()) || VEHICLE::IS_THIS_MODEL_A_BIKE(GlobalFunc_2575())) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(GlobalFunc_2575())) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(GlobalFunc_2575()))
						{
							if (GlobalFunc_2575() == joaat("bus"))
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_3063[2 /*2*/]))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3063[2 /*2*/], 0))
									{
										ENTITY::SET_ENTITY_COORDS(Local_3063[2 /*2*/], 1360.217f, -2531.797f, 46.8857f, 1, 0, 0, 1);
										ENTITY::SET_ENTITY_HEADING(Local_3063[2 /*2*/], 322.7698f);
									}
								}
							}
							else if (ENTITY::DOES_ENTITY_EXIST(Local_3063[2 /*2*/]))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3063[2 /*2*/], 0))
								{
									ENTITY::SET_ENTITY_COORDS(Local_3063[2 /*2*/], Local_3030, 1, 0, 0, 1);
									ENTITY::SET_ENTITY_HEADING(Local_3063[2 /*2*/], fLocal_3033);
								}
							}
							GlobalFunc_10733(0f, 0f, 0f, 0f, 1, 1);
						}
						else
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_3063[2 /*2*/], 1, 0);
							VEHICLE::DELETE_VEHICLE(&(Local_3063[2 /*2*/]));
							while (!func_27(&(Local_3063[2 /*2*/]), 1, Local_3030, fLocal_3033, 1, 1))
							{
								SYSTEM::WAIT(0);
							}
						}
					}
					else
					{
						while (!func_27(&(Local_3063[2 /*2*/]), 1, Local_3030, fLocal_3033, 1, 1))
						{
							SYSTEM::WAIT(0);
						}
					}
				}
				else
				{
					if (ENTITY::GET_ENTITY_MODEL(Local_3063[2 /*2*/]) == joaat("bus"))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3063[2 /*2*/], 0))
						{
							ENTITY::SET_ENTITY_COORDS(Local_3063[2 /*2*/], 1360.217f, -2531.797f, 46.8857f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(Local_3063[2 /*2*/], 322.7698f);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3063[2 /*2*/]);
							AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_3063[2 /*2*/], 0);
						}
					}
					else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3063[2 /*2*/], 0))
					{
						ENTITY::SET_ENTITY_COORDS(Local_3063[2 /*2*/], Local_3030, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_3063[2 /*2*/], fLocal_3033);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3063[2 /*2*/]);
						AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_3063[2 /*2*/], 0);
					}
					iLocal_4761 = 3;
				}
			}
			break;
		
		case 3:
			if (iLocal_3036 == 0)
			{
				if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(0, "BB_FINALE"))
				{
					func_364("BB_FINALE", 0, 0, 1);
					iLocal_3036 = 1;
				}
			}
			if (!iLocal_3356)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 38400)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FINA_START");
					iLocal_3356 = 1;
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				PED::SET_PED_USING_ACTION_MODE(func_149(), 1, 10000, 0);
				TASK::TASK_ENTER_VEHICLE(func_149(), Local_3063[2 /*2*/], -1, -1, 3f, 1, 0);
				PED::FORCE_PED_MOTION_STATE(func_149(), -1115154469, 0, 1, 0);
				RECORDING::_0x81CBAE94390F9F89();
				bLocal_3358 = true;
			}
			else
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				func_372();
				PED::SET_PED_INTO_VEHICLE(Local_3076[1 /*2*/], Local_3063[1 /*2*/], -1);
				VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_3063[1 /*2*/], 1);
				iLocal_3359 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_car", 0))
			{
				func_363();
				iLocal_3360 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklins_weapon", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3328))
				{
					WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_3328, func_149());
				}
				iLocal_3363 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				iLocal_3364 = 1;
			}
			if (((((bLocal_3358 && iLocal_3359) && iLocal_3360) && iLocal_3363) && iLocal_3364) || GlobalFunc_Is_Mission_Retry())
			{
				if (!iLocal_3356)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FINA_START");
					iLocal_3356 = 1;
				}
				CUTSCENE::REMOVE_CUTSCENE();
				GlobalFunc_8380(0, 1, 1, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				HUD::DISPLAY_RADAR(1);
				HUD::DISPLAY_HUD(1);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3063[1 /*2*/], 0))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3063[1 /*2*/], 0, "BB_FINALE", 1);
					VEHICLE::SET_PLAYBACK_SPEED(Local_3063[1 /*2*/], 1f);
				}
				iLocal_4761 = 0;
				func_151(1);
			}
			break;
	}
}

void func_372()//Position - 0x31D9B
{
	if (GlobalFunc_2773(func_268()))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_268(), 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_268(), uLocal_3302);
		AUDIO::STOP_PED_SPEAKING(func_268(), 1);
		PED::SET_PED_CONFIG_FLAG(func_268(), 208, 1);
	}
}






















void func_394()//Position - 0x33E86
{
	if (!bLocal_3365)
	{
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::REQUEST_CUTSCENE("FIN_A_INT", 8);
		}
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			func_172(func_147());
		}
		if (GlobalFunc_Has_Cutscene_Loaded())
		{
			GlobalFunc_8380(1, 1, 1, 0);
			while (!func_27(&(Local_3063[1 /*2*/]), 2, 1317.8f, -2560.5f, 45.1f, 0f, 1, 1))
			{
				SYSTEM::WAIT(0);
			}
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3063[1 /*2*/], "Trevors_car", 0, 0, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Trevor", 2, joaat("player_two"), 0);
			if (!WEAPON::HAS_PED_GOT_WEAPON(func_149(), joaat("weapon_pistol"), 0))
			{
				WEAPON::GIVE_WEAPON_TO_PED(func_149(), joaat("weapon_pistol"), 25, 1, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3328))
			{
				iLocal_3328 = GlobalFunc_6830(func_149(), joaat("weapon_pistol"), 1, 0, 0, 0, 0);
			}
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3328, "Franklins_weapon", 0, 0, 0);
			CUTSCENE::START_CUTSCENE(0);
			bLocal_3365 = true;
		}
	}
}


void func_396()//Position - 0x34078
{
	iLocal_3061 = 0;
	while (iLocal_3061 <= (5 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_3076[iLocal_3061 /*2*/]))
		{
			if (PED::IS_PED_INJURED(Local_3076[iLocal_3061 /*2*/]))
			{
				if (Local_3076[iLocal_3061 /*2*/] == Local_3076[0 /*2*/])
				{
					func_270(2);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_3076[iLocal_3061 /*2*/]));
			}
		}
		iLocal_3061++;
	}
	iLocal_3061 = 0;
	while (iLocal_3061 <= (6 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_3063[iLocal_3061 /*2*/]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3063[iLocal_3061 /*2*/], 0))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_3063[iLocal_3061 /*2*/]));
			}
		}
		iLocal_3061++;
	}
	func_397();
}

void func_397()//Position - 0x34120
{
	if (iLocal_3366)
	{
	}
}

void func_398()//Position - 0x3412E
{
	struct<3> Var0;
	float fVar3;
	
	if (iLocal_4765 == 1)
	{
		if (iLocal_4759 == 0)
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
				func_151(iLocal_4764);
			}
		}
		else if (iLocal_4759 == 3)
		{
			CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			func_624();
			GlobalFunc_762(&uLocal_3368);
			func_152(iLocal_4764);
			while (!GlobalFunc_7725(&uLocal_3368))
			{
				SYSTEM::WAIT(0);
			}
			if (!GlobalFunc_188())
			{
				func_618(iLocal_4764, &Var0, &fVar3);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fVar3);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
				GlobalFunc_5184(&uLocal_3368, Var0, 50f, 0);
			}
			switch (iLocal_4760)
			{
				case 0:
					func_615();
					break;
				
				case 1:
					func_614();
					break;
				
				case 2:
					func_612();
					break;
				
				case 3:
					func_611();
					break;
				
				case 4:
					func_404();
					break;
				
				case 5:
					func_401();
					break;
			}
			func_399();
			iLocal_4765 = 0;
			if (!GlobalFunc_188())
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
		}
	}
}

void func_399()//Position - 0x3425D
{
	func_372();
	func_400();
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), 1);
}

void func_400()//Position - 0x34285
{
	if (GlobalFunc_2773(func_147()))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_147(), 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_147(), iLocal_3301);
		PED::SET_PED_ACCURACY(func_147(), 100);
		PED::SET_PED_COMBAT_ATTRIBUTES(func_147(), 27, 1);
		AUDIO::STOP_PED_SPEAKING(func_147(), 1);
		PED::SET_PED_CONFIG_FLAG(func_147(), 208, 1);
	}
}

void func_401()//Position - 0x342D5
{
	if (GlobalFunc_188())
	{
		GlobalFunc_4967(0, -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
	}
}



void func_404()//Position - 0x343E4
{
	CLOCK::SET_CLOCK_TIME(20, 45, 0);
	AUDIO::CANCEL_MUSIC_EVENT("FINA_CHASE");
	Local_3076[2 /*2*/] = PLAYER::PLAYER_PED_ID();
	while (!func_591(1663.725f, -1732.354f, 111.2844f, 18.3814f))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_405(&(Local_3076[0 /*2*/]), 0, 1731.36f, -1621.64f, 111.43f, 188.9595f, 1, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	CUTSCENE::REQUEST_CUTSCENE("fin_a_ext", 8);
	func_172(0);
	if (GlobalFunc_188())
	{
		GlobalFunc_4967(0, -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
	}
}

int func_405(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x34482
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
			func_583(*uParam0);
			GlobalFunc_7694(*uParam0, 1, 0);
			GlobalFunc_7693(*uParam0);
			GlobalFunc_7707(*uParam0);
			func_407(*uParam0, bParam8);
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


int func_407(int iParam0, bool bParam1)//Position - 0x3459A
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_5101(iVar0))
	{
		GlobalFunc_5100(iVar0, 0);
		func_563(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		func_422(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (GlobalFunc_7939(iParam0))
		{
			GlobalFunc_5100(iVar0, 0);
			func_563(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			func_422(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[120] && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122])
			{
				func_563(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (GlobalFunc_10949(iParam0, 3, 169))
					{
						func_563(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						return 1;
					}
				}
			}
			if (GlobalFunc_10949(iParam0, 12, 6))
			{
				func_563(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10949(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_563(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10949(iParam0, 12, 20))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_563(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10949(iParam0, 12, 21))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_563(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10949(iParam0, 12, 22))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_563(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10949(iParam0, 12, 11))
			{
				func_563(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10949(iParam0, 12, 10))
			{
				func_563(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10949(iParam0, 12, 50))
			{
				func_563(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10949(iParam0, 14, 59))
			{
				func_563(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10949(iParam0, 8, 22))
			{
				func_563(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10949(iParam0, 12, 14))
			{
				func_563(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_10949(iParam0, 12, 13))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_563(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10949(iParam0, 12, 14))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_563(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10949(iParam0, 12, 15))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_563(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10949(iParam0, 12, 4))
			{
				func_563(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10949(iParam0, 12, 3))
			{
				func_563(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10949(iParam0, 14, 82))
			{
				func_563(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10949(iParam0, 8, 76))
			{
				func_563(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10949(iParam0, 12, 1))
			{
				func_563(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 2:
			if (GlobalFunc_10949(iParam0, 12, 12))
			{
				func_563(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10949(iParam0, 12, 15))
			{
				func_563(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (GlobalFunc_10949(iParam0, 3, 71))
				{
					func_563(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10949(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_563(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10949(iParam0, 12, 18))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_563(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10949(iParam0, 12, 19))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_563(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10949(iParam0, 12, 7))
			{
				func_563(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10949(iParam0, 12, 6))
			{
				func_563(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10949(iParam0, 14, 88))
			{
				func_563(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10949(iParam0, 8, 17))
			{
				func_563(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10949(iParam0, 12, 11))
			{
				func_563(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
	}
	return 0;
}















void func_422(int iParam0, int iParam1)//Position - 0x36AC7
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
				iVar1 = GlobalFunc_11064(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					GlobalFunc_521(iVar0);
					func_429(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
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
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[iVar67 /*4*/][iVar0] = GlobalFunc_7062(iParam0, GlobalFunc_33(iVar67));
						iVar67++;
					}
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[iVar67 /*4*/][iVar0] = GlobalFunc_7062(iParam0, GlobalFunc_33(iVar67));
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







void func_429(int iParam0, var uParam1, bool bParam2)//Position - 0x373B8
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
			if (GlobalFunc_11063(iParam0, iVar1, &iVar2, 0))
			{
				func_563(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (GlobalFunc_11062(iParam0, iVar1, &iVar2))
			{
				func_563(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_6784(741, uParam1->f_60, Global_68104, 1);
			GlobalFunc_6784(742, uParam1->f_61, Global_68104, 1);
			iVar4 = GlobalFunc_5668(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			func_432(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			if (!bParam2)
			{
				iVar5 = GlobalFunc_5668(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_432(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
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



int func_432(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x3764F
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
								GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
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
				Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iVar0, GlobalFunc_11066(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					uVar41 = { GlobalFunc_7617(iVar5, 0) };
					func_432(iParam0, iVar0, uVar41[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
			func_515(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar58 = { GlobalFunc_7616(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 14, uVar58[iVar1]) };
			GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
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
						iVar3 = GlobalFunc_11065(iParam0, iVar5, 14, uVar58[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_432(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
			iVar69 = GlobalFunc_7062(iParam0, 1);
			iVar3 = GlobalFunc_11065(iParam0, iVar5, 1, iVar69, 14, Global_68106[1 /*14*/].f_12);
			if (iVar3 != -99 && iVar3 != iParam2)
			{
				iVar7 = GlobalFunc_5013(iVar5, 1, -1);
			}
		}
		GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
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
					iVar3 = GlobalFunc_11065(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_432(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar70 = GlobalFunc_7062(iParam0, 11);
				iVar71 = GlobalFunc_7062(iParam0, 8);
				iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
				{
					iVar9 = GlobalFunc_7062(iParam0, 8);
				}
				iVar72 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar72, joaat("GLOVES"), 3))
				{
					iVar73 = GlobalFunc_6739(iVar5, iVar71, iVar70);
					if (iVar73 == -99)
					{
						iVar73 = GlobalFunc_11065(iParam0, iVar5, 11, iVar70, 3, 0);
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
					iVar70 = GlobalFunc_7062(iParam0, 11);
					if (iVar70 >= 256)
					{
						iVar76 = GlobalFunc_4913(iVar5, iVar70, 11, 4);
					}
					if (iVar70 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("VEST_SHIRT"), 0))
					{
						iVar77 = GlobalFunc_6738(iVar5, iVar70, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar77 != -99)
						{
							func_432(iParam0, 8, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
								func_432(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
									func_432(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
								func_432(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_432(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
			func_515(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, GlobalFunc_11066(iParam0, 8, -1), iParam2);
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
				func_473(iParam0, iParam2, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			func_515(iParam0, iParam1, iParam2, iParam6, 0);
			iVar84 = GlobalFunc_7062(iParam0, 11);
			if (GlobalFunc_6737(iVar5, iVar84))
			{
				iVar85 = GlobalFunc_6736(iVar5, iParam2, Global_68106[1 /*14*/].f_4);
				GlobalFunc_10622(iVar5, iVar85);
			}
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, iParam2, GlobalFunc_7062(iParam0, 11));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar86 = GlobalFunc_7062(iParam0, 7);
				if (!GlobalFunc_8525(iVar5, iVar86, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99))
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
					iVar94 = GlobalFunc_7062(iParam0, 1);
					iVar95 = 0;
					while (iVar95 < 9)
					{
						iVar3 = GlobalFunc_11065(iParam0, iVar5, iParam1, iVar94, 14, iVar95);
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
					iVar3 = GlobalFunc_11065(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_432(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				if (GlobalFunc_7940(iParam0))
				{
					iVar97 = -99;
					iVar97 = GlobalFunc_6730(iVar5, iParam2);
					if (iVar97 > 0)
					{
						iVar97 = (iVar97 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!GlobalFunc_10950(iParam0, 9, iVar97))
						{
							func_432(iParam0, 9, iVar97, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						func_432(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_432(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
					iVar99 = GlobalFunc_11066(iParam0, 4, -1);
					iVar100 = iParam2;
				}
				else
				{
					iVar99 = iParam2;
					iVar100 = GlobalFunc_11066(iParam0, 11, -1);
				}
				if (GlobalFunc_6729(iVar5, 11, iVar100))
				{
					if (!GlobalFunc_6728(iVar5, 4, iVar99))
					{
						if (GlobalFunc_6727(iVar5, 4, iVar99, &uVar101))
						{
							func_432(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
				}
				else if (GlobalFunc_6728(iVar5, 4, iVar99))
				{
					if (GlobalFunc_6726(iVar5, 4, iVar99, &uVar101))
					{
						func_432(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
					iVar3 = GlobalFunc_11065(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_432(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar3 = GlobalFunc_11065(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_432(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (GlobalFunc_11175(iParam0, &uVar4))
		{
			func_432(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	if (iVar6 != -99)
	{
		func_432(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar9 != -99)
	{
		func_432(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar7 != -99)
	{
		func_432(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				func_432(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}









































void func_473(int iParam0, int iParam1, bool bParam2)//Position - 0x3D711
{
	int iVar0;
	int iVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	GlobalFunc_9757(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = GlobalFunc_6735(iVar0, iParam1);
	if (iVar1 != -1)
	{
		GlobalFunc_9004(iVar1, 1, Global_68104);
	}
	func_474(iParam0, bParam2, 0);
}

void func_474(int iParam0, bool bParam1, bool bParam2)//Position - 0x3D753
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
		bVar15 = GlobalFunc_11177(iParam0);
		bVar16 = GlobalFunc_5010(iParam0);
		bVar17 = GlobalFunc_11176(iParam0);
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
			if (GlobalFunc_8361(iVar18, iVar0))
			{
				if (GlobalFunc_5123(&Var1, iVar18, iVar14, iParam0, -1))
				{
					if (GlobalFunc_9001(&Var1, Var1.f_8, bVar15, bVar16, bParam1, bVar17))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar18++;
		}
		if (GlobalFunc_8361(123, iVar0))
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
					if (GlobalFunc_8361(iVar36, iVar0))
					{
						if (GlobalFunc_9001(&(Var21.f_7), Var21.f_6, bVar15, bVar16, bParam1, bVar17))
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









































void func_515(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x49D8A
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
					iParam2 = GlobalFunc_7062(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = GlobalFunc_7062(iParam0, 11);
				if (!GlobalFunc_6737(iVar0, iVar1))
				{
					return;
				}
			}
			GlobalFunc_9757(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!GlobalFunc_9719(iVar0, iParam2, 13) && !GlobalFunc_9719(iVar0, iParam2, 14)) && !GlobalFunc_9719(iVar0, iParam2, 15)) && !GlobalFunc_9719(iVar0, iParam2, 16)) && !GlobalFunc_9719(iVar0, iParam2, 71)) && !GlobalFunc_9719(iVar0, iParam2, 72))
				{
					GlobalFunc_9757(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = GlobalFunc_9002(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					GlobalFunc_9013(iParam0, iVar2);
				}
				else
				{
					GlobalFunc_9004(iVar2, 1, Global_68104);
				}
			}
		}
	}
}
















































int func_563(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x6231A
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
				iVar5 = GlobalFunc_7062(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = GlobalFunc_7062(iParam0, 9);
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
							GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8357(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = GlobalFunc_11229(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_563(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
								iVar3 = GlobalFunc_11229(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_563(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iVar0, GlobalFunc_11064(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (GlobalFunc_11063(iParam0, iVar10, &iVar4, 1))
							{
								func_563(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_563(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
					func_563(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_563(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_563(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_563(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_563(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
			GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8357(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11229(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_563(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
		GlobalFunc_8357(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = GlobalFunc_11229(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_563(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = GlobalFunc_11229(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_563(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
		if (GlobalFunc_11063(iParam0, iVar10, &iVar4, 0))
		{
			func_563(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (GlobalFunc_11062(iParam0, iVar10, &iVar4))
		{
			func_563(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}




















void func_583(int iParam0)//Position - 0x64C0A
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
		func_429(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
		if (!Global_89948[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!GlobalFunc_526(49))
				{
					iVar1 = GlobalFunc_11064(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					GlobalFunc_11162(GlobalFunc_4917(0), 12, 16, 0, 0, 0, 0);
				}
				if (!GlobalFunc_526(44))
				{
					iVar1 = GlobalFunc_11064(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = GlobalFunc_11064(iParam0, 4, -1);
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
				iVar1 = GlobalFunc_11064(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				GlobalFunc_521(iVar0);
				func_429(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
			}
		}
		Global_89948[iVar0] = 1;
	}
}








int func_591(struct<3> Param0, float fParam3)//Position - 0x65618
{
	if (GlobalFunc_7698())
	{
		if (((!VEHICLE::IS_THIS_MODEL_A_BICYCLE(GlobalFunc_622()) && !VEHICLE::IS_THIS_MODEL_A_PLANE(GlobalFunc_622())) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(GlobalFunc_622())) && !VEHICLE::IS_THIS_MODEL_A_HELI(GlobalFunc_622()))
		{
			GlobalFunc_8368();
			while (!GlobalFunc_8367())
			{
				SYSTEM::WAIT(0);
			}
			Local_3063[2 /*2*/] = GlobalFunc_9749(Param0, fParam3);
			return 1;
		}
		else if (!func_27(&(Local_3063[2 /*2*/]), 1, Param0, fParam3, 1, 1))
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (!func_27(&(Local_3063[2 /*2*/]), 1, Param0, fParam3, 1, 1))
	{
		return 0;
	}
	return 1;
}




















void func_611()//Position - 0x664C2
{
	Local_3076[2 /*2*/] = PLAYER::PLAYER_PED_ID();
	while (!func_591(1728.375f, -1610.305f, 111.4705f, 160.3058f))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_405(&(Local_3076[0 /*2*/]), 0, 1731.662f, -1615.989f, 111.4371f, -162.95f, 1, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_27(&(Local_3063[0 /*2*/]), 0, 1728.206f, -1623.872f, 111.4329f, 269.6653f, 1, 1))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_405(&(Local_3076[1 /*2*/]), 2, 1731.381f, -1620.509f, 111.428f, -57f, 1, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_27(&(Local_3063[1 /*2*/]), 2, 1732.258f, -1626.391f, 111.4349f, 216.9961f, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	if (GlobalFunc_188())
	{
		GlobalFunc_4967(0, -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
	}
	AUDIO::TRIGGER_MUSIC_EVENT("FINA_KILL_RESTART");
}

void func_612()//Position - 0x665D2
{
	CUTSCENE::REMOVE_CUTSCENE();
	Local_3076[2 /*2*/] = PLAYER::PLAYER_PED_ID();
	while (!func_591(1728.375f, -1610.305f, 111.4705f, 160.3058f))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_27(&(Local_3063[1 /*2*/]), 2, 1739.823f, -1556.499f, 112.2425f, 317.3613f, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_613(&(Local_3076[1 /*2*/]), 2, Local_3063[1 /*2*/], -1, 1, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_27(&(Local_3063[0 /*2*/]), 0, 1647.745f, -1646.35f, 111.228f, 269.6557f, 1, 1))
	{
		SYSTEM::WAIT(0);
	}
	CUTSCENE::REQUEST_CUTSCENE("FIN_A_MCS_1", 8);
	func_172(0);
	if (GlobalFunc_188())
	{
		GlobalFunc_4967(Local_3063[2 /*2*/], -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
	}
	AUDIO::TRIGGER_MUSIC_EVENT("FINA_RESTART_CHASE");
}

int func_613(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x666BF
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
				func_583(*uParam0);
				GlobalFunc_7694(*uParam0, 1, 0);
				GlobalFunc_7693(*uParam0);
				GlobalFunc_7707(*uParam0);
				func_407(*uParam0, bParam6);
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

void func_614()//Position - 0x66771
{
	Local_3076[2 /*2*/] = PLAYER::PLAYER_PED_ID();
	while (!func_27(&(Local_3063[1 /*2*/]), 2, 1374.224f, -2531.855f, 48.2458f, 317.3613f, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_613(&(Local_3076[1 /*2*/]), 2, Local_3063[1 /*2*/], -1, 1, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	ENTITY::SET_ENTITY_INVINCIBLE(Local_3063[1 /*2*/], 1);
	ENTITY::SET_ENTITY_INVINCIBLE(Local_3076[1 /*2*/], 1);
	while (!func_591(1361.922f, -2538.007f, 46.9311f, 318.1483f))
	{
		SYSTEM::WAIT(0);
	}
	if (GlobalFunc_188())
	{
		GlobalFunc_4967(Local_3063[2 /*2*/], -1, 1);
	}
	else
	{
		PED::SET_PED_INTO_VEHICLE(func_149(), Local_3063[2 /*2*/], -1);
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_3063[2 /*2*/]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3063[2 /*2*/], 0))
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3063[2 /*2*/]);
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_3063[2 /*2*/], 1, 1);
		}
	}
	if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
	{
		PED::GIVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 0, 4096, -1);
	}
	iLocal_4767 = 1;
	AUDIO::TRIGGER_MUSIC_EVENT("FINA_RESTART_CHASE");
}

void func_615()//Position - 0x66891
{
	Local_3076[2 /*2*/] = PLAYER::PLAYER_PED_ID();
	if (GlobalFunc_Is_Mission_Retry())
	{
		CLOCK::SET_CLOCK_TIME(19, 45, 0);
		while (!func_27(&(Local_3063[1 /*2*/]), 2, 1374.224f, -2531.855f, 48.2458f, 317.3613f, 1, 0))
		{
			SYSTEM::WAIT(0);
		}
		while (!func_613(&(Local_3076[1 /*2*/]), 2, Local_3063[1 /*2*/], -1, 1, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
		while (!func_591(Local_3030, fLocal_3033))
		{
			SYSTEM::WAIT(0);
		}
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



void func_618(int iParam0, var uParam1, var uParam2)//Position - 0x66A13
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1337.359f, -2550.006f, 46.16376f };
			*uParam2 = -101.35f;
			break;
		
		case 1:
			*uParam1 = { 1337.359f, -2550.006f, 46.16376f };
			*uParam2 = -101.35f;
			break;
		
		case 2:
			*uParam1 = { 1739.823f, -1556.499f, 112.2425f };
			*uParam2 = 197.39f;
			break;
		
		case 3:
			*uParam1 = { 1731.577f, -1615.936f, 112.4401f };
			*uParam2 = -154.56f;
			break;
		
		case 4:
			*uParam1 = { 1731.362f, -1616.127f, 111.4371f };
			*uParam2 = -154.56f;
			break;
		
		case 5:
			*uParam1 = { 1670.572f, -1742.901f, 111.2739f };
			*uParam2 = 59.94f;
			break;
	}
}






void func_624()//Position - 0x6776B
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
	iLocal_3061 = 0;
	while (iLocal_3061 <= (5 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_3076[iLocal_3061 /*2*/]) && !PED::IS_PED_INJURED(Local_3076[iLocal_3061 /*2*/]))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(Local_3076[iLocal_3061 /*2*/], 0))
			{
				PED::SET_PED_COORDS_NO_GANG(Local_3076[iLocal_3061 /*2*/], ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(Local_3076[iLocal_3061 /*2*/], 0), 1) + Vector(0f, -2f, 0f));
			}
			if (Local_3076[iLocal_3061 /*2*/] != PLAYER::PLAYER_PED_ID())
			{
				PED::DELETE_PED(&(Local_3076[iLocal_3061 /*2*/]));
			}
		}
		iLocal_3061++;
	}
	iLocal_3061 = 0;
	while (iLocal_3061 <= (6 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_3063[iLocal_3061 /*2*/]))
		{
			VEHICLE::DELETE_VEHICLE(&(Local_3063[iLocal_3061 /*2*/]));
		}
		iLocal_3061++;
	}
	GlobalFunc_130(&iLocal_3328);
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	if (ENTITY::DOES_ENTITY_EXIST(Local_3063[0 /*2*/]))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Local_3063[0 /*2*/], 0);
	}
	MISC::SET_TIME_SCALE(1f);
	bLocal_3365 = false;
	iLocal_4767 = 0;
	iLocal_3366 = 0;
	func_69(0);
	MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 200f, 1, 0, 0, 0);
	GlobalFunc_4935();
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	GlobalFunc_4948(&uLocal_3087, 0, 0);
	if (HUD::DOES_BLIP_EXIST(uLocal_3303))
	{
		HUD::REMOVE_BLIP(&uLocal_3303);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	FIRE::STOP_FIRE_IN_RANGE(1734.43f, -1623.52f, 111.4233f, 100f);
	CAM::DESTROY_ALL_CAMS(0);
	CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	GlobalFunc_5652(&uLocal_3111, 1, 0);
	GlobalFunc_7139(&uLocal_3111, 0);
	if (!GlobalFunc_Is_Mission_Retry())
	{
		STREAMING::REMOVE_IPL("DES_tankercrash");
		STREAMING::REMOVE_IPL("tankercrash_grp1");
		STREAMING::REMOVE_IPL("tankercrash_grp2");
		STREAMING::REMOVE_IPL("DES_tankerexp");
		STREAMING::REMOVE_IPL("tankerexp_grp0");
		STREAMING::REMOVE_IPL("tankerexp_grp1");
		STREAMING::REMOVE_IPL("tankerexp_grp2");
	}
	AUDIO::STOP_AUDIO_SCENES();
}









void func_633()//Position - 0x67C34
{
	switch (iLocal_4759)
	{
		case 1:
			iLocal_4759 = 2;
			iLocal_4761 = -1;
			break;
		
		case 2:
			iLocal_4759 = 3;
			iLocal_4761 = 0;
			iLocal_4760 = iLocal_4762;
			break;
		
		case 3:
			iLocal_4762 = -1;
			iLocal_4759 = 0;
			break;
		
		case 0:
			if ((MISC::GET_GAME_TIMER() - iLocal_4763) > 2500)
			{
				iLocal_4763 = MISC::GET_GAME_TIMER();
			}
			break;
	}
}




void func_637()//Position - 0x67E7A
{
	struct<3> Var0;
	var uVar3;
	
	Local_3076[2 /*2*/] = PLAYER::PLAYER_PED_ID();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	GlobalFunc_52(0, 1);
	PED::ADD_RELATIONSHIP_GROUP("trevor_rel", &iLocal_3302);
	PED::ADD_RELATIONSHIP_GROUP("michael_rel", &iLocal_3301);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_3301, iLocal_3302);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_3302, iLocal_3301);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_3302, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_3301, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_3301);
	PATHFIND::SET_ROADS_IN_AREA(1199.4f, -2661.9f, 70f, 1597.1f, -2447.7f, -5f, 0, 1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	MISC::ENABLE_DISPATCH_SERVICE(5, 0);
	MISC::ENABLE_DISPATCH_SERVICE(3, 0);
	MISC::ENABLE_DISPATCH_SERVICE(1, 0);
	MISC::ENABLE_DISPATCH_SERVICE(10, 0);
	MISC::ENABLE_DISPATCH_SERVICE(9, 0);
	MISC::_0xE532EC1A63231B4F(1, 0);
	MISC::_0xE532EC1A63231B4F(2, 0);
	MISC::_0xE532EC1A63231B4F(8, 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tailgater"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bodhi2"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("buffalo"), 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(1740.295f, -1602.184f, 110f, 1699.404f, -1646.409f, 116.5264f, 0, 1, 1, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(1369.179f, -2546.993f, 45f, 1372.999f, -2542.333f, 48f, 0, 1, 1, 1);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(1506.587f, -2531.957f, 35f, 1463.065f, -1962.424f, 130f, 320f, 1, 0, 1);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(1467.822f, -1875.567f, 35f, 1883.591f, -1232.342f, 130f, 450f, 1, 0, 1);
	MISC::SET_WEATHER_TYPE_PERSIST("EXTRASUNNY");
	if (GlobalFunc_Is_Mission_Retry() || GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		if (GlobalFunc_Is_Mission_Retry())
		{
			iLocal_4764 = GlobalFunc_Get_Mission_Fail_Checkpoint();
			if (iLocal_4764 == 0)
			{
				iLocal_4764 = 1;
			}
			if (Global_84544)
			{
				iLocal_4764++;
			}
			if (iLocal_4764 == 1 || iLocal_4764 == 2)
			{
				STREAMING::REQUEST_IPL("DES_tankercrash");
			}
			if (iLocal_4764 == 3)
			{
				STREAMING::REMOVE_IPL("DES_tankercrash");
				STREAMING::REMOVE_IPL("tankercrash_grp1");
				STREAMING::REMOVE_IPL("tankercrash_grp2");
				STREAMING::REMOVE_IPL("tankerexp_grp0");
				STREAMING::REQUEST_IPL("DES_tankerexp");
			}
			if (iLocal_4764 == 4)
			{
				STREAMING::REMOVE_IPL("DES_tankerexp");
				STREAMING::REQUEST_IPL("tankerexp_grp2");
			}
			if (iLocal_4764 >= 5)
			{
				iLocal_4764 = 5;
			}
			bLocal_4766 = false;
		}
		else if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
		{
			STREAMING::REMOVE_IPL("DES_tankerexp");
			STREAMING::REMOVE_IPL("tankerexp_grp1");
			STREAMING::REMOVE_IPL("tankerexp_grp2");
			STREAMING::REMOVE_IPL("tankerexp_grp3");
			STREAMING::REQUEST_IPL("DES_tankercrash");
			STREAMING::REQUEST_IPL("tankerexp_grp0");
			iLocal_4764 = 0;
		}
		if (GlobalFunc_Is_Mission_Retry())
		{
			func_618(iLocal_4764, &Var0, &uVar3);
			GlobalFunc_5196(Var0, uVar3, 1, 0);
		}
		iLocal_4765 = 1;
	}
	else
	{
		bLocal_4766 = false;
		GlobalFunc_Checkpoint3(0, "Stage 0: meet", 0, 0, 0, 1);
		iLocal_4760 = 0;
		func_151(iLocal_4760);
		func_152(0);
		while (!GlobalFunc_7725(&uLocal_3368))
		{
			SYSTEM::WAIT(0);
		}
	}
	GlobalFunc_563(1);
	iLocal_4761 = 0;
}





void func_642()//Position - 0x68274
{
	Local_3099.f_1 = GlobalFunc_7719();
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (Local_3099.f_2 == 0)
	{
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			iLocal_3062 = 0;
			CUTSCENE::REQUEST_CUTSCENE("FIN_A_INT", 8);
		}
	}
	while (!func_643(24, &Local_3099, 1, 0, 0, 1, 0))
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			func_172(func_147());
		}
		HUD::DISPLAY_RADAR(0);
		HUD::DISPLAY_HUD(0);
		SYSTEM::WAIT(0);
		if (!iLocal_3062 && Local_3099.f_2 == 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1335.797f, -2550.458f, 46.1957f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 138.6753f);
				}
			}
			MISC::CLEAR_AREA(1334.851f, -2555.594f, 45.58296f, 200f, 1, 0, 0, 0);
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3063[2 /*2*/]))
			{
				if (GlobalFunc_7984())
				{
					Local_3063[2 /*2*/] = GlobalFunc_2251();
					if (((VEHICLE::IS_THIS_MODEL_A_CAR(GlobalFunc_2575()) || VEHICLE::IS_THIS_MODEL_A_BIKE(GlobalFunc_2575())) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(GlobalFunc_2575())) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(GlobalFunc_2575()))
					{
						if (GlobalFunc_2575() == joaat("bus"))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_3063[2 /*2*/]))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3063[2 /*2*/], 0))
								{
									ENTITY::SET_ENTITY_COORDS(Local_3063[2 /*2*/], 1360.217f, -2531.797f, 46.8857f, 1, 0, 0, 1);
									ENTITY::SET_ENTITY_HEADING(Local_3063[2 /*2*/], 322.7698f);
								}
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(Local_3063[2 /*2*/]))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3063[2 /*2*/], 0))
							{
								ENTITY::SET_ENTITY_COORDS(Local_3063[2 /*2*/], Local_3030, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(Local_3063[2 /*2*/], fLocal_3033);
							}
						}
						GlobalFunc_10733(0f, 0f, 0f, 0f, 1, 1);
					}
					else
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_3063[2 /*2*/], 1, 0);
						VEHICLE::DELETE_VEHICLE(&(Local_3063[2 /*2*/]));
						while (!func_27(&(Local_3063[2 /*2*/]), 1, Local_3030, fLocal_3033, 1, 1))
						{
							SYSTEM::WAIT(0);
						}
					}
				}
				else
				{
					while (!func_27(&(Local_3063[2 /*2*/]), 1, Local_3030, fLocal_3033, 1, 1))
					{
						SYSTEM::WAIT(0);
					}
				}
			}
			else if (ENTITY::GET_ENTITY_MODEL(Local_3063[2 /*2*/]) == joaat("bus"))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3063[2 /*2*/], 0))
				{
					ENTITY::SET_ENTITY_COORDS(Local_3063[2 /*2*/], 1360.217f, -2531.797f, 46.8857f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_3063[2 /*2*/], 322.7698f);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3063[2 /*2*/]);
					AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_3063[2 /*2*/], 0);
				}
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3063[2 /*2*/], 0))
			{
				ENTITY::SET_ENTITY_COORDS(Local_3063[2 /*2*/], Local_3030, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_3063[2 /*2*/], fLocal_3033);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3063[2 /*2*/]);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_3063[2 /*2*/], 0);
			}
			iLocal_3062 = 1;
			GlobalFunc_8380(1, 1, 1, 0);
		}
	}
}

bool func_643(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x6854F
{
	struct<2> Var0;
	
	GlobalFunc_9026(iParam0, &Var0);
	GlobalFunc_741(iParam0, &Var0, &(Var0.f_1));
	return func_644(uParam1, &Var0, bParam2, bParam3, bParam4, bParam5, bParam6);
}

int func_644(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x6857D
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	
	uParam0->f_7 = *uParam1;
	uParam0->f_8 = uParam1->f_1;
	if ((GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0) && !bParam2) && !bParam4)
	{
		if (uParam0->f_5)
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_7, 0, 0);
		}
		else
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_8, 0, 0);
		}
		return 1;
	}
	if (uParam0->f_2 == 0)
	{
		if (uParam0->f_7 != -1 && uParam0->f_8 != -1)
		{
			if (bParam2 || !GlobalFunc_5183(uParam0->f_8, uParam0->f_7))
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TIME_LAPSE", 0))
				{
					uParam0->f_6 = 0;
					uParam0->f_2 = 1;
				}
			}
			else
			{
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else
		{
			uParam0->f_2 = -1;
			return 1;
		}
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (uParam0->f_2 == 1)
	{
		if (bParam2)
		{
			CAM::DESTROY_CAM(uParam0->f_4, 0);
			uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
			CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0)
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
			CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
			if (!bParam6)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
				}
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
					}
					ENTITY::SET_ENTITY_VISIBLE(iVar0, 0);
				}
			}
			uVar1 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
			INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
			MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, uVar1, 0);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, uVar1);
			GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, uVar1);
			if (bParam3)
			{
				MISC::CLEAR_AREA(uParam1->f_2, 5000f, 1, 1, 0, 0);
			}
			GlobalFunc_7641(&(uParam0->f_1), 0, 0, 0, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
			GlobalFunc_9025(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else if (!GlobalFunc_5183(uParam0->f_7, uParam0->f_8))
		{
			if (uParam0->f_5)
			{
				CAM::DESTROY_CAM(uParam0->f_4, 0);
				uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				if (uParam1->f_17 < 0)
				{
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				}
				else
				{
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				}
				CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
				CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
				if (!bParam6)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
					}
					iVar2 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar2))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, 1, 0);
						}
						ENTITY::SET_ENTITY_VISIBLE(iVar2, 0);
					}
				}
				uVar3 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
				INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
				MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, uVar3, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, uVar3);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, uVar3);
				if (bParam3)
				{
					MISC::CLEAR_AREA(uParam1->f_2, 5000f, 1, 1, 0, 0);
				}
				GlobalFunc_7641(&(uParam0->f_1), 0, 0, 8, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
				GlobalFunc_9025(uParam0, 1, 0, 2000, 1, 1, 0, 1);
				uParam0->f_2 = 2;
			}
			else
			{
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else if (!uParam0->f_5)
		{
			CAM::DESTROY_CAM(uParam0->f_4, 0);
			uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
			CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0)
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
			CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_4, 3);
			CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
			if (!bParam6)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
				}
				iVar4 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar4))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar4))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar4, 1, 0);
					}
					ENTITY::SET_ENTITY_VISIBLE(iVar4, 0);
				}
			}
			uVar5 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
			INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
			MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, uVar5, 0);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, uVar5);
			GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, uVar5);
			if (bParam3)
			{
				MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
			}
			GlobalFunc_7641(&(uParam0->f_1), 0, 0, 0, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
			GlobalFunc_9025(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else
		{
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			uParam0->f_2 = -1;
			return 1;
		}
	}
	if (uParam0->f_2 == 2)
	{
		if (bParam3)
		{
			MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (!uParam0->f_5)
		{
			if (func_647(uParam0->f_8, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
			{
				if (uParam1->f_17 < 0)
				{
					uParam0->f_9 = MISC::GET_GAME_TIMER();
					uParam0->f_2 = 3;
				}
				else
				{
					uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
					CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
					CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_4, 3);
					CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
					uParam0->f_9 = MISC::GET_GAME_TIMER();
					uParam0->f_2 = 22;
				}
			}
		}
		else if (func_647(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
		{
			if (uParam1->f_17 < 0)
			{
				uParam0->f_9 = MISC::GET_GAME_TIMER();
				uParam0->f_2 = 3;
			}
			else
			{
				uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
				CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_4, 3);
				CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
				uParam0->f_9 = MISC::GET_GAME_TIMER();
				uParam0->f_2 = 22;
			}
		}
		if (!bParam5)
		{
			if (GlobalFunc_4926(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(250);
				}
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					return 0;
				}
				if (uParam0->f_3 != 0)
				{
					func_647(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, 1f, 0, 1, 1065353216);
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 22)
	{
		if (bParam3)
		{
			MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (CAM::DOES_CAM_EXIST(uParam0->f_4) && CAM::IS_CAM_INTERPOLATING(uParam0->f_4))
		{
		}
		else
		{
			uParam0->f_9 = MISC::GET_GAME_TIMER();
			uParam0->f_2 = 3;
		}
		if (!bParam5)
		{
			if (GlobalFunc_4926(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(250);
				}
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					return 0;
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 3)
	{
		if (bParam3)
		{
			MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (uParam0->f_9 + 1000 > MISC::GET_GAME_TIMER())
		{
			uParam0->f_2 = 4;
		}
	}
	if (uParam0->f_2 == 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_2 = -1;
		return 1;
	}
	if (uParam0->f_2 == -1)
	{
		return 1;
	}
	return 0;
}



int func_647(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6, bool bParam7, int iParam8)//Position - 0x68DA7
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = -1f;
	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = GlobalFunc_7719();
			iVar5 = GlobalFunc_7719();
			GlobalFunc_94(&iVar5, iParam0);
			GlobalFunc_95(&iVar5, iParam1);
			GlobalFunc_96(&iVar5, 0);
			if (GlobalFunc_7640(*uParam4, iVar5))
			{
				GlobalFunc_8385(&iVar5, 0, 0, 0, 1, 0, 0);
			}
			GlobalFunc_8384(*uParam4, iVar5, &iVar1, &iVar2, &iVar3, &uVar6, &uVar7, &uVar8);
			uParam4->f_11 = ((iVar1 + iVar2 * 60) + (iVar3 + iParam6) * 3600);
			GlobalFunc_8057((SYSTEM::TO_FLOAT(uParam4->f_11) / 3600f));
			if (bParam7)
			{
				GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.6f);
				GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(0);
				GRAPHICS::_0x0AE73D8DF3A762B2(0);
			}
			GlobalFunc_738();
			uParam4->f_10 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(uParam4->f_10, "TIME_LAPSE_MASTER", 0, 1);
			AUDIO::START_AUDIO_SCENE("TOD_SHIFT_SCENE");
			GlobalFunc_737();
			uParam4->f_3++;
			break;
		
		case 1:
		case 2:
			if ((CAM::DOES_CAM_EXIST(uParam4->f_4) && CAM::IS_CAM_INTERPOLATING(uParam4->f_4)) || !(fParam5 >= 0.99f || fParam5 == -1f))
			{
				if (CAM::DOES_CAM_EXIST(uParam4->f_4) && CAM::IS_CAM_INTERPOLATING(uParam4->f_4))
				{
					fVar0 = CAM::GET_CAM_SPLINE_PHASE(uParam4->f_4);
				}
				else if (!(fParam5 >= 0.99f || fParam5 == -1f))
				{
					fVar0 = fParam5;
				}
				else
				{
					fVar0 = -1f;
				}
				if (fVar0 >= 0.5f)
				{
					if (uParam4->f_3 == 1)
					{
						if (MISC::GET_HASH_KEY(sParam2) != 0)
						{
							MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST(sParam2, iParam8);
						}
						if (MISC::GET_HASH_KEY(sParam3) != 0)
						{
							MISC::_CLEAR_CLOUD_HAT();
							MISC::LOAD_CLOUD_HAT(sParam3, 0);
						}
						uParam4->f_3 = 2;
					}
				}
			}
			if (fVar0 >= 0.99f || fVar0 == -1f)
			{
				iVar5 = *uParam4;
				GlobalFunc_8385(&iVar5, uParam4->f_11, 0, 0, 0, 0, 0);
				CLOCK::SET_CLOCK_TIME(GlobalFunc_208(iVar5), GlobalFunc_207(iVar5), GlobalFunc_206(iVar5));
				if (bParam7)
				{
					GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
				}
				AUDIO::STOP_SOUND(uParam4->f_10);
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
				if (bParam7)
				{
					GRAPHICS::_0x0AE73D8DF3A762B2(1);
					GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(1);
				}
				return 1;
			}
			fVar11 = fVar0;
			fVar9 = 0.1f;
			fVar10 = 0.9f;
			fVar12 = GlobalFunc_253(((fVar11 - fVar9) / (fVar10 - fVar9)), 0f, 1f);
			iVar4 = SYSTEM::ROUND((IntToFloat(uParam4->f_11) * fVar12));
			iVar5 = *uParam4;
			GlobalFunc_8385(&iVar5, iVar4, 0, 0, 0, 0, 0);
			CLOCK::SET_CLOCK_TIME(GlobalFunc_208(iVar5), GlobalFunc_207(iVar5), GlobalFunc_206(iVar5));
			if (GlobalFunc_209(iVar5) != CLOCK::GET_CLOCK_DAY_OF_MONTH())
			{
				CLOCK::SET_CLOCK_DATE(GlobalFunc_209(iVar5), GlobalFunc_210(iVar5), GlobalFunc_4975(iVar5));
			}
			GlobalFunc_5077();
			GRAPHICS::_0xE3E2C1B4C59DBC77(6);
			break;
	}
	return 0;
}

























void func_672()//Position - 0x6A847
{
	AUDIO::TRIGGER_MUSIC_EVENT("FINA_FAIL");
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
		CUTSCENE::REMOVE_CUTSCENE();
	}
	STREAMING::NEW_LOAD_SCENE_STOP();
	GlobalFunc_52(1, 1);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	iLocal_3061 = 0;
	while (iLocal_3061 <= (5 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_3076[iLocal_3061 /*2*/]) && !PED::IS_PED_INJURED(Local_3076[iLocal_3061 /*2*/]))
		{
			if (Local_3076[iLocal_3061 /*2*/] != PLAYER::PLAYER_PED_ID())
			{
				GlobalFunc_132(&(Local_3076[iLocal_3061 /*2*/]), 1, 0, 1);
			}
			if (HUD::DOES_BLIP_EXIST(Local_3076[iLocal_3061 /*2*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_3076[iLocal_3061 /*2*/].f_1));
			}
		}
		iLocal_3061++;
	}
	iLocal_3061 = 0;
	while (iLocal_3061 <= (6 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_3063[iLocal_3061 /*2*/]))
		{
			GlobalFunc_131(&(Local_3063[iLocal_3061 /*2*/]));
		}
		iLocal_3061++;
	}
	GlobalFunc_130(&iLocal_3328);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	if (iLocal_3341 == 0)
	{
		HUD::DISPLAY_RADAR(1);
		HUD::DISPLAY_HUD(1);
		CAM::DESTROY_ALL_CAMS(0);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	MISC::ENABLE_DISPATCH_SERVICE(5, 1);
	MISC::ENABLE_DISPATCH_SERVICE(3, 1);
	MISC::ENABLE_DISPATCH_SERVICE(5, 1);
	MISC::ENABLE_DISPATCH_SERVICE(3, 1);
	MISC::ENABLE_DISPATCH_SERVICE(1, 1);
	MISC::ENABLE_DISPATCH_SERVICE(10, 1);
	MISC::ENABLE_DISPATCH_SERVICE(9, 1);
	MISC::_0xD9F692D349249528();
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tailgater"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bodhi2"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("buffalo"), 0);
	MISC::SET_TIME_SCALE(1f);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	if (HUD::DOES_BLIP_EXIST(uLocal_3303))
	{
		HUD::REMOVE_BLIP(&uLocal_3303);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	GlobalFunc_4935();
	GlobalFunc_4948(&uLocal_3087, 0, 0);
	GlobalFunc_5652(&uLocal_3111, 1, 0);
	GlobalFunc_7139(&uLocal_3111, 0);
	STREAMING::REMOVE_IPL("DES_tankercrash");
	GlobalFunc_563(0);
	GlobalFunc_7632(0);
	GlobalFunc_601(20, 0);
	AUDIO::RELEASE_MISSION_AUDIO_BANK();
	AUDIO::STOP_STREAM();
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(1199.4f, -2661.9f, 70f, 1597.1f, -2447.7f, -5f, 1);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
}



