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
	struct<3> Local_21 = { 0, 0, 0 } ;
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
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	struct<4> Local_36[10];
	bool bLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	bool bLocal_80 = 0;
	bool bLocal_81 = 0;
	bool bLocal_82 = 0;
	bool bLocal_83 = 0;
	bool bLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	bool bLocal_87 = 0;
	bool bLocal_88 = 0;
	int iLocal_89 = 0;
	bool bLocal_90 = 0;
	bool bLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	var uLocal_95 = 0;
	bool bLocal_96 = 0;
	bool bLocal_97 = 0;
	bool bLocal_98 = 0;
	int iLocal_99 = 0;
	bool bLocal_100 = 0;
	var uLocal_101 = 0;
	bool bLocal_102 = 0;
	bool bLocal_103 = 0;
	bool bLocal_104 = 0;
	bool bLocal_105 = 0;
	bool bLocal_106 = 0;
	bool bLocal_107 = 0;
	bool bLocal_108 = 0;
	bool bLocal_109 = 0;
	bool bLocal_110 = 0;
	bool bLocal_111 = 0;
	float fLocal_112[150] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_263[150] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_414[150] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_565[150] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_716[150] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	float fLocal_871[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_897[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_923[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_949[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_975[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1001[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1027[50] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1078[50] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1129[50] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1180[50] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1231 = 0f;
	float fLocal_1232 = 0f;
	float fLocal_1233 = 0f;
	float fLocal_1234 = 0f;
	float fLocal_1235 = 0f;
	float fLocal_1236 = 0f;
	float fLocal_1237 = 0f;
	float fLocal_1238 = 0f;
	float fLocal_1239 = 0f;
	float fLocal_1240 = 0f;
	float fLocal_1241 = 0f;
	float fLocal_1242 = 0f;
	float fLocal_1243 = 0f;
	float fLocal_1244 = 0f;
	float fLocal_1245 = 0f;
	float fLocal_1246 = 0f;
	float fLocal_1247 = 0f;
	float fLocal_1248 = 0f;
	float fLocal_1249 = 0f;
	float fLocal_1250 = 0f;
	float fLocal_1251 = 0f;
	int iLocal_1252[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1403[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1554[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1705[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1731[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1757[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1783[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1834 = 0;
	int iLocal_1835 = 0;
	int iLocal_1836 = 0;
	int iLocal_1837 = 0;
	int iLocal_1838 = 0;
	int iLocal_1839 = 0;
	int iLocal_1840 = 0;
	int iLocal_1841 = 0;
	int iLocal_1842 = 0;
	int iLocal_1843 = 0;
	int iLocal_1844 = 0;
	int iLocal_1845 = 0;
	int iLocal_1846 = 0;
	int iLocal_1847 = 0;
	int iLocal_1848 = 0;
	int iLocal_1849 = 0;
	int iLocal_1850 = 0;
	struct<3> Local_1851[150];
	struct<3> Local_2302[50];
	struct<3> Local_2453[25];
	struct<3> Local_2529 = { 0, 0, 0 } ;
	struct<3> Local_2532 = { 0, 0, 0 } ;
	struct<3> Local_2535 = { 0, 0, 0 } ;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	var uLocal_2542 = 0;
	var uLocal_2543 = 0;
	struct<3> Local_2544 = { 0, 0, 0 } ;
	struct<3> Local_2547 = { 0, 0, 0 } ;
	struct<3> Local_2550 = { 0, 0, 0 } ;
	struct<3> Local_2553 = { 0, 0, 0 } ;
	char cLocal_2556[64] = "";
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 0;
	var uLocal_2567 = 0;
	var uLocal_2568 = 0;
	var uLocal_2569 = 0;
	var uLocal_2570 = 0;
	var uLocal_2571 = 0;
	int iLocal_2572 = 0;
	int iLocal_2573[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2724[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2775[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2801 = 0;
	int iLocal_2802 = 0;
	int iLocal_2803 = 0;
	int iLocal_2804[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2955[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2964[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3015[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3041[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_3048 = 0;
	int iLocal_3049 = 0;
	int iLocal_3050 = 0;
	var uLocal_3051 = 8;
	var uLocal_3052 = 0;
	var uLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	int iLocal_3060 = 0;
	var uLocal_3061 = 0;
	int iLocal_3062 = 0;
	var uLocal_3063 = 0;
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
	var uLocal_3066 = 0;
	int iLocal_3067 = 0;
	int iLocal_3068 = 0;
	int iLocal_3069 = 0;
	int iLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 0;
	var uLocal_3073 = 0;
	var uLocal_3074 = 0;
	var uLocal_3075 = 0;
	struct<61> Local_3076 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_3137 = 0;
	int iLocal_3138 = 0;
	int iLocal_3139 = 0;
	int iLocal_3140 = 0;
	int iLocal_3141 = 0;
	struct<3> Local_3142 = { 0, 0, 0 } ;
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = 0;
	var uLocal_3149 = 0;
	var uLocal_3150 = 0;
	var uLocal_3151[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_3162[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_3173 = 10;
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
	int iLocal_3185 = 0;
	int iLocal_3186 = 0;
	int iLocal_3187 = 0;
	int iLocal_3188 = 0;
	var uLocal_3189 = 0;
	int iLocal_3190 = 0;
	int iLocal_3191 = 0;
	int iLocal_3192 = 0;
	int iLocal_3193 = 0;
	int iLocal_3194 = 0;
	int iLocal_3195 = 0;
	int iLocal_3196 = 0;
	int iLocal_3197 = 0;
	int iLocal_3198 = 0;
	int iLocal_3199 = 0;
	int iLocal_3200 = 0;
	int iLocal_3201 = 0;
	struct<3> Local_3202 = { 0, 0, 0 } ;
	var uLocal_3205 = 0;
	var uLocal_3206 = 0;
	var uLocal_3207 = 0;
	int iLocal_3208 = 0;
	int iLocal_3209 = 0;
	int iLocal_3210 = 0;
	int iLocal_3211 = 0;
	int iLocal_3212 = 0;
	int iLocal_3213 = 0;
	int iLocal_3214 = 0;
	int iLocal_3215 = 0;
	int iLocal_3216 = 0;
	int iLocal_3217 = 0;
	int iLocal_3218 = 0;
	int iLocal_3219 = 0;
	int iLocal_3220 = 0;
	int iLocal_3221 = 0;
	int iLocal_3222 = 0;
	int iLocal_3223 = 0;
	int iLocal_3224 = 0;
	int iLocal_3225 = 0;
	int iLocal_3226 = 0;
	int iLocal_3227 = 0;
	int iLocal_3228 = 0;
	int iLocal_3229 = 0;
	int iLocal_3230 = 0;
	int iLocal_3231 = 0;
	bool bLocal_3232 = 0;
	int iLocal_3233 = 0;
	int iLocal_3234 = 0;
	int iLocal_3235 = 0;
	int iLocal_3236 = 0;
	int iLocal_3237 = 0;
	int iLocal_3238 = 0;
	int iLocal_3239 = 0;
	struct<3> Local_3240 = { 0, 0, 0 } ;
	struct<3> Local_3243 = { 0, 0, 0 } ;
	struct<3> Local_3246 = { 0, 0, 0 } ;
	struct<3> Local_3249 = { 0, 0, 0 } ;
	int iLocal_3252 = 0;
	int iLocal_3253 = 0;
	int iLocal_3254 = 0;
	int iLocal_3255 = 0;
	float fLocal_3256 = 0f;
	float fLocal_3257 = 0f;
	float fLocal_3258 = 0f;
	float fLocal_3259 = 0f;
	float fLocal_3260 = 0f;
	int iLocal_3261 = 0;
	int iLocal_3262 = 0;
	int iLocal_3263 = 0;
	int iLocal_3264 = 0;
	var uLocal_3265 = 0;
	int iLocal_3266 = 0;
	int iLocal_3267[4] = { 0, 0, 0, 0 };
	var uLocal_3272 = 6;
	var uLocal_3273 = 0;
	var uLocal_3274 = 0;
	var uLocal_3275 = 0;
	var uLocal_3276 = 0;
	var uLocal_3277 = 0;
	var uLocal_3278 = 0;
	int iLocal_3279 = 0;
	int iLocal_3280 = 0;
	int iLocal_3281 = 0;
	int iLocal_3282 = 0;
	var uLocal_3283 = 0;
	struct<6> Local_3284[3];
	struct<6> Local_3303 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_3309[10];
	struct<9> Local_3370[4];
	struct<6> Local_3407 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3413 = 0;
	var uLocal_3414 = 0;
	var uLocal_3415 = 0;
	struct<9> Local_3416[6];
	struct<6> Local_3471[10];
	int iLocal_3532 = 0;
	int iLocal_3533 = 0;
	int iLocal_3534 = 0;
	bool bLocal_3535 = 0;
	bool bLocal_3536 = 0;
	int iLocal_3537 = 0;
	int iLocal_3538 = 0;
	int iLocal_3539 = 0;
	bool bLocal_3540 = 0;
	int iLocal_3541 = 0;
	bool bLocal_3542 = 0;
	int iLocal_3543 = 0;
	int iLocal_3544 = 0;
	int iLocal_3545 = 0;
	float fLocal_3546 = 0f;
	float fLocal_3547 = 0f;
	float fLocal_3548 = 0f;
	float fLocal_3549 = 0f;
	struct<3> Local_3550 = { 0, 0, 0 } ;
	struct<3> Local_3553 = { 0, 0, 0 } ;
	struct<3> Local_3556 = { 0, 0, 0 } ;
	var uLocal_3559 = 15;
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
	int iLocal_3611 = 0;
	var uLocal_3612 = 16;
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
	var uLocal_3742 = 0;
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
	var uLocal_3779 = -1;
	var uLocal_3780 = 0;
	var uLocal_3781 = 0;
	var uLocal_3782 = 0;
	var uLocal_3783 = 0;
	var uLocal_3784 = 0;
	var uLocal_3785 = 0;
	var uLocal_3786 = 1000;
	var uLocal_3787 = 1000;
	var uLocal_3788 = 0;
	int iLocal_3789 = 0;
	int iLocal_3790 = 0;
	int iLocal_3791 = 0;
	int iLocal_3792 = 0;
	int iLocal_3793 = 0;
	struct<61> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	sLocal_17 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	bLocal_81 = true;
	bLocal_88 = true;
	bLocal_110 = true;
	fLocal_1231 = 120f;
	fLocal_1232 = 0f;
	fLocal_1234 = 1f;
	fLocal_1235 = 0f;
	fLocal_1236 = 1f;
	fLocal_1237 = 30f;
	fLocal_1239 = 1f;
	fLocal_1240 = 5f;
	fLocal_1241 = 1f;
	fLocal_1242 = 1f;
	fLocal_1243 = 100f;
	fLocal_1244 = 100f;
	fLocal_1245 = 0f;
	fLocal_1246 = 7000f;
	fLocal_1247 = 0f;
	fLocal_1248 = 0f;
	fLocal_1249 = 0.3f;
	fLocal_1250 = 0.5f;
	fLocal_1251 = 50f;
	iLocal_1837 = -1;
	iLocal_1845 = -1;
	iLocal_1846 = -1;
	uLocal_3061 = GlobalFunc_4946(50);
	iLocal_3062 = joaat("pcj");
	iLocal_3067 = 1;
	iLocal_3068 = 65;
	iLocal_3069 = 49;
	iLocal_3070 = 64;
	uLocal_3074 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_3075 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	fLocal_3259 = 1f;
	fLocal_3547 = 0f;
	fLocal_3548 = 0f;
	fLocal_3549 = 0f;
	Local_3550 = { 695.8621f, 12.6177f, 83.1933f };
	Local_3553 = { 341.917f, -409.2796f, 44.1959f };
	Local_3556 = { 345.3037f, -406.1878f, 44.1304f };
	Local_3076 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_3076);
	GlobalFunc_9161();
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		GlobalFunc_10580(1);
		func_574(1);
	}
	if (GlobalFunc_Is_Mission_Retry())
	{
		Global_68490 = 1;
		iLocal_3060 = 0;
		while (!func_570(&Local_3076))
		{
			SYSTEM::WAIT(0);
		}
		Global_68490 = 0;
	}
	func_561();
	if (GlobalFunc_Is_Mission_Retry())
	{
		iLocal_3223 = 1;
		func_508(&iLocal_3137, 429.1563f, 126.8527f, 99.4028f, 70.3603f, 0, 0, 1, 1, 1, joaat("carbonizzare"), 1, 145);
		if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3137)))
		{
			iLocal_3224 = 1;
		}
		else
		{
			iLocal_3224 = 0;
		}
		iVar0 = GlobalFunc_Get_Mission_Fail_Checkpoint();
		if (Global_84544 == 1)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				GlobalFunc_5116(375.0581f, 162.2386f, 102.0736f, 342.4705f, 1, 0);
				func_505();
				break;
			
			case 1:
				GlobalFunc_5116(336.4843f, 132.4985f, 102.0139f, 249.9272f, 1, 0);
				func_504();
				break;
			
			case 2:
				GlobalFunc_5116(366.9862f, -404.5475f, 44.8031f, 105f, 0, 0);
				func_503();
				break;
			
			case 3:
				GlobalFunc_5116(366.9862f, -404.5475f, 44.8031f, 105f, 1, 0);
				func_498();
				break;
			}
	}
	GlobalFunc_2795(1);
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::_0x208784099002BC30("SF_TM", 0);
		func_481(Local_3076.f_9, 0, 0, 0, 0, 0);
		if (iLocal_3252 == 0)
		{
			if (GlobalFunc_115(Local_3284[0 /*6*/]))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3284[0 /*6*/]))
				{
					VEHICLE::_0x796A877E459B99EA(Local_3284[0 /*6*/], 0f, 0f, 0.12f);
					ENTITY::FREEZE_ENTITY_POSITION(Local_3284[0 /*6*/], 0);
				}
				else
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_3284[0 /*6*/], 1);
				}
			}
			if (GlobalFunc_115(Local_3284[1 /*6*/]))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3284[1 /*6*/]))
				{
					VEHICLE::_0x796A877E459B99EA(Local_3284[1 /*6*/], 0f, 0f, 0.12f);
				}
			}
			if (GlobalFunc_115(Local_3284[2 /*6*/]))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3284[2 /*6*/]))
				{
					VEHICLE::_0x796A877E459B99EA(Local_3284[2 /*6*/], 0f, 0f, 0.12f);
					ENTITY::FREEZE_ENTITY_POSITION(Local_3284[2 /*6*/], 0);
				}
				else
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_3284[2 /*6*/], 1);
				}
			}
		}
		if (iLocal_3253 && MISC::GET_GAME_TIMER() > iLocal_3187 + 4000)
		{
			if (GlobalFunc_115(Local_3284[2 /*6*/]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_3284[2 /*6*/], 0);
				VEHICLE::SET_VEHICLE_SIREN(Local_3284[2 /*6*/], 0);
			}
		}
		if (((GlobalFunc_IsPedNotInjuredOrDead(iLocal_3140) && GlobalFunc_115(Local_3407)) && GlobalFunc_115(iLocal_3139)) && PED::IS_PED_IN_VEHICLE(iLocal_3140, iLocal_3139, 0))
		{
			if (TASK::CONTROL_MOUNTED_WEAPON(iLocal_3140))
			{
				TASK::SET_MOUNTED_WEAPON_TARGET(iLocal_3140, Local_3407, 0, 0f, 0f, 0f);
			}
		}
		if (iLocal_3216)
		{
			if (GlobalFunc_115(Local_3303))
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_3303, 51f);
			}
		}
		if (iLocal_3261 == 6)
		{
			func_473();
		}
		else if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			switch (iLocal_3261)
			{
				case 0:
					func_470();
					break;
				
				case 1:
					func_469();
					break;
				
				case 2:
					func_403();
					break;
				
				case 3:
					func_402();
					break;
				
				case 4:
					func_324();
					break;
				
				case 5:
					func_3();
					break;
			}
		}
		else
		{
			func_1(0);
		}
	}
}

void func_1(int iParam0)//Position - 0x4BB
{
	iLocal_3611 = iParam0;
	func_2(6);
}

void func_2(int iParam0)//Position - 0x4CD
{
	iLocal_3532 = 0;
	iLocal_3261 = iParam0;
	iLocal_3262 = 0;
}

void func_3()//Position - 0x4E2
{
	struct<6> Var0;
	
	if (bLocal_3540)
	{
		if (GlobalFunc_115(Local_3284[0 /*6*/]))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_3284[0 /*6*/]))
			{
				if (iLocal_3194 < 30)
				{
					iLocal_3194 = 30;
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3189) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3189) > 0.92f)
				{
					if (GlobalFunc_IsPedNotInjuredOrDead(Local_3407) && !PED::IS_PED_IN_VEHICLE(Local_3407, Local_3284[0 /*6*/], 0))
					{
						PED::SET_PED_INTO_VEHICLE(Local_3407, Local_3284[0 /*6*/], 1);
					}
				}
			}
		}
		iLocal_3194++;
		if (ENTITY::IS_ENTITY_DEAD(Local_3407) || PED::IS_PED_INJURED(Local_3407))
		{
			func_1(3);
			return;
		}
		else if (iLocal_3194 > 30)
		{
			func_1(5);
			return;
		}
	}
	Var0 = { GlobalFunc_2209() };
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_3370[1 /*9*/]))
	{
		if (GlobalFunc_4947(Local_3284[0 /*6*/]))
		{
			if (!GlobalFunc_1533(Local_3370[1 /*9*/], Local_3284[0 /*6*/], 0))
			{
				PED::SET_PED_INTO_VEHICLE(Local_3370[1 /*9*/], Local_3284[0 /*6*/], 0);
			}
		}
	}
	switch (iLocal_3262)
	{
		case 0:
			iLocal_3539 = 0;
			iLocal_3185 = MISC::GET_GAME_TIMER();
			iLocal_3214 = 0;
			iLocal_3218 = 0;
			GlobalFunc_79(800, 0);
			iLocal_3262 = 1;
			break;
		
		case 1:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3189) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3189) > 0.85f)
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_3140) && GlobalFunc_115(iLocal_3139))
				{
					TASK::TASK_HELI_MISSION(iLocal_3140, iLocal_3139, 0, 0, 123.3842f, -883.9507f, 200f, 4, 200f, -1f, -1f, -1, 100, -1082130432, 0);
					VEHICLE::SET_VEHICLE_SEARCHLIGHT(iLocal_3139, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_3140, 1);
					GlobalFunc_2297(&iLocal_3140, 1, 0, 1);
					GlobalFunc_190(&iLocal_3139);
				}
			}
			func_309(0);
			func_302();
			func_270();
			func_247();
			if (iLocal_3236 == 1)
			{
				if (!GlobalFunc_116(0) && !GlobalFunc_111())
				{
					GlobalFunc_173(&uLocal_3612, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					if (GlobalFunc_10630(&uLocal_3612, "PAP3AAU", "PAP3A_FRANK", "PAP3A_FRANK_6", 7, 0, 0))
					{
						iLocal_3236 = 2;
					}
				}
			}
			if (iLocal_3253 == 0)
			{
				if (iLocal_3229 == 0)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_3185 + 3000)
					{
						if (func_231(50, "PAP3A_TXT6", 1, 0, 0, 0, 0, 1, 0, 1))
						{
							iLocal_3229 = 1;
						}
					}
				}
				else if (iLocal_3214 == 0)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_3185 + 4000)
					{
						iLocal_3214 = 1;
					}
				}
			}
			if (iLocal_3281 > 0 && iLocal_3252 == 1)
			{
				func_270();
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_3A_PHOTO_SCENE"))
				{
					if (!GlobalFunc_111())
					{
						AUDIO::STOP_AUDIO_SCENE("PAPARAZZO_3A_PHOTO_SCENE");
					}
				}
			}
			if (iLocal_3211 == 0)
			{
				if ((GlobalFunc_IsPedNotInjuredOrDead(Local_3370[0 /*9*/]) && GlobalFunc_IsPedNotInjuredOrDead(Local_3407)) && GlobalFunc_4947(Local_3284[0 /*6*/]))
				{
					if (!GlobalFunc_155(Local_3407, PLAYER::PLAYER_PED_ID(), 100f))
					{
						if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_3407) && !ENTITY::IS_ENTITY_ON_SCREEN(Local_3370[0 /*9*/]))
						{
							GlobalFunc_2297(&iLocal_3140, 1, 0, 1);
							GlobalFunc_190(&iLocal_3139);
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3189))
							{
								ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_3284[0 /*6*/], -1f, 0);
							}
							ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_3284[0 /*6*/]);
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_3407);
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_3370[0 /*9*/]);
							if (!PED::IS_PED_IN_VEHICLE(Local_3370[0 /*9*/], Local_3284[0 /*6*/], 0))
							{
								PED::SET_PED_INTO_VEHICLE(Local_3370[0 /*9*/], Local_3284[0 /*6*/], -1);
							}
							if (!PED::IS_PED_IN_VEHICLE(Local_3407, Local_3284[0 /*6*/], 0))
							{
								PED::SET_PED_INTO_VEHICLE(Local_3407, Local_3284[0 /*6*/], 1);
							}
							VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(Local_3284[0 /*6*/], 1);
							VEHICLE::SET_VEHICLE_SIREN(Local_3284[0 /*6*/], 0);
							PED::SET_PED_KEEP_TASK(Local_3370[0 /*9*/], 1);
							iLocal_3187 = MISC::GET_GAME_TIMER();
							PATHFIND::SET_ROADS_IN_AREA(318.94f, -411.6963f, 38.0267f, 421.5246f, -363.0107f, 52.0853f, 1, 1);
							PATHFIND::SET_ROADS_IN_AREA(796.4662f, -68.4078f, 79.522f, 974.3044f, -152.9081f, 72.6015f, 1, 1);
							PATHFIND::SET_ROADS_IN_AREA(683.3696f, 38.3284f, 83.277f, 707.9796f, -22.9872f, 82.654f, 1, 1);
							PATHFIND::SET_ROADS_IN_AREA(812.2689f, -40.7279f, 79.4878f, 858.4236f, -119.0339f, 78.3599f, 1, 1);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_3370[0 /*9*/], Local_3284[0 /*6*/], 231.64f, -347.1846f, 43.2866f, 30f, 0, 0, 786469, 20f, 150f);
							iLocal_3253 = 1;
							VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_3284[0 /*6*/], 1);
							TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
							iLocal_3211 = 1;
							iLocal_3281 = 5;
							iLocal_3267[0] = 7;
							iLocal_3264 = 6;
						}
					}
				}
			}
			if (iLocal_3267[0] == 7)
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_3187 + 4000)
				{
					if (!GlobalFunc_111())
					{
						if (!iLocal_3539)
						{
							iLocal_3218 = 1;
							iLocal_3539 = 1;
						}
						else if (!GlobalFunc_111())
						{
							if (GlobalFunc_1993())
							{
								if (iLocal_3194 == 0)
								{
									iLocal_3262 = 2;
								}
							}
						}
					}
				}
			}
			else if (bLocal_3540 == 1)
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_3187 + 10000)
				{
					if (!GlobalFunc_111())
					{
						if (!iLocal_3539)
						{
							iLocal_3218 = 1;
							iLocal_3539 = 1;
						}
						else if (!GlobalFunc_111())
						{
							if (GlobalFunc_1993())
							{
								if (iLocal_3194 == 0)
								{
									iLocal_3262 = 2;
								}
							}
						}
					}
				}
			}
			if (iLocal_3252 == 1 && !GlobalFunc_663("PAP3_POP", 0, 0))
			{
				if (iLocal_3193 == 0)
				{
					if (GlobalFunc_111())
					{
						if (MISC::ARE_STRINGS_EQUAL(&Var0, "PAP3A_ARREST_8"))
						{
							GlobalFunc_5105();
							iLocal_3193 = 1;
						}
					}
				}
				else if (iLocal_3193 == 1)
				{
					if (!GlobalFunc_111())
					{
						if (!bLocal_3536)
						{
							if (iLocal_3231 == 0)
							{
								GlobalFunc_164("PAP3_POP", 7500, 1);
								iLocal_3231 = 1;
							}
						}
						iLocal_3193 = 2;
					}
				}
				else if (iLocal_3193 == 2)
				{
					if (!GlobalFunc_663("PAP3_POP", 0, 0))
					{
						if (!iLocal_3230)
						{
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_3407, 1) <= 50f)
							{
								if (GlobalFunc_10626(&uLocal_3612, "PAP3AAU", "PAP3A_ARREST", "PAP3A_ARREST_10", 8, 0, 0))
								{
									iLocal_3230 = 1;
									iLocal_3193 = 3;
									iLocal_3197 = 0;
									iLocal_3198 = 1;
								}
							}
							else if (GlobalFunc_10626(&uLocal_3612, "PAP3AAU", "PAP3A_ARREST", "PAP3A_ARREST_10", 8, 1, 0))
							{
								iLocal_3230 = 1;
								iLocal_3193 = 3;
								iLocal_3197 = 1;
								iLocal_3198 = 1;
							}
						}
					}
				}
			}
			if (HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON() && !GlobalFunc_663("PAP3_POP", 0, 0))
			{
				if (iLocal_3193 == 0 || iLocal_3193 == 3)
				{
					func_210();
				}
			}
			break;
		
		case 2:
			if (iLocal_3218 == 1)
			{
				GlobalFunc_173(&uLocal_3612, 3, 0, "BEVERLY", 0, 1);
				GlobalFunc_173(&uLocal_3612, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
				GlobalFunc_6831(707131591, 0, 2, 50, 3, 6000, 10000, -1, -1, 0, -1, 0);
			}
			iLocal_3532 = 0;
			func_4();
			break;
	}
}

void func_4()//Position - 0xB71
{
	if (iLocal_3223 == 0)
	{
		if (iLocal_3221 == 1)
		{
			GlobalFunc_553(803);
		}
	}
	if (iLocal_3222 == 1 || iLocal_3223 == 1)
	{
		GlobalFunc_553(802);
	}
	func_202(1);
	GlobalFunc_11330(104, 1);
	func_574(1);
}






































































































































































































void func_202(int iParam0)//Position - 0x252F5
{
	int iVar0;
	
	GlobalFunc_846(&uLocal_3283);
	GlobalFunc_846(&uLocal_3149);
	GlobalFunc_846(&uLocal_3150);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (GlobalFunc_115(Local_3370[iVar0 /*9*/]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3370[iVar0 /*9*/], 0);
			PED::SET_PED_AS_COP(Local_3370[iVar0 /*9*/], 1);
		}
		iVar0++;
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_3407))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3407, 0);
	}
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), 0);
	}
	GlobalFunc_2793(0);
	GlobalFunc_2792(0);
	if (iParam0 == 1)
	{
		HUD::CLEAR_PRINTS();
	}
	HUD::CLEAR_HELP(1);
}








void func_210()//Position - 0x2570D
{
	struct<6> Var0;
	struct<6> Var6;
	
	Var0 = { GlobalFunc_560() };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		if (MISC::ARE_STRINGS_EQUAL(&Var0, "PAP3A_ARREST") && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() > 0)
		{
			if (iLocal_3197 == 0)
			{
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_3407, 1) > 50f)
				{
					iLocal_3199 = 1;
					iLocal_3197 = 1;
					iLocal_3198 = 1;
				}
			}
			else if (iLocal_3197 == 1)
			{
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_3407, 1) <= 50f)
				{
					iLocal_3199 = 0;
					iLocal_3197 = 0;
					iLocal_3198 = 1;
				}
			}
		}
	}
	if (iLocal_3198 == 1)
	{
		Var6 = { GlobalFunc_2209() };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var6))
		{
			if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3A_ARREST_1"))
			{
				StringCopy(&Local_3202, "PAP3A_ARREST_2", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3A_ARREST_2"))
			{
				StringCopy(&Local_3202, "PAP3A_ARREST_4", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3A_ARREST_3"))
			{
				StringCopy(&Local_3202, "PAP3A_ARREST_4", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3A_ARREST_4"))
			{
				StringCopy(&Local_3202, "PAP3A_ARREST_6", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3A_ARREST_5"))
			{
				StringCopy(&Local_3202, "PAP3A_ARREST_6", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3A_ARREST_6"))
			{
				StringCopy(&Local_3202, "PAP3A_ARREST_8", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3A_ARREST_7"))
			{
				StringCopy(&Local_3202, "PAP3A_ARREST_8", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3A_ARREST_8"))
			{
				StringCopy(&Local_3202, "PAP3A_ARREST_10", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3A_ARREST_9"))
			{
				StringCopy(&Local_3202, "PAP3A_ARREST_10", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3A_ARREST_10"))
			{
				StringCopy(&Local_3202, "PAP3A_ARREST_11", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3A_ARREST_11"))
			{
				StringCopy(&Local_3202, "PAP3A_ARREST_13", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3A_ARREST_12"))
			{
				StringCopy(&Local_3202, "PAP3A_ARREST_13", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3A_ARREST_13"))
			{
				StringCopy(&Local_3202, "PAP3A_ARREST_15", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3A_ARREST_14"))
			{
				StringCopy(&Local_3202, "PAP3A_ARREST_15", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3A_ARREST_15"))
			{
				StringCopy(&Local_3202, "PAP3A_ARREST_17", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3A_ARREST_16"))
			{
				StringCopy(&Local_3202, "PAP3A_ARREST_17", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3A_ARREST_17"))
			{
				StringCopy(&Local_3202, "PAP3A_ARREST_19", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3A_ARREST_18"))
			{
				StringCopy(&Local_3202, "PAP3A_ARREST_19", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3A_ARREST_19"))
			{
				StringCopy(&Local_3202, "PAP3A_ARREST_21", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3A_ARREST_20"))
			{
				StringCopy(&Local_3202, "PAP3A_ARREST_21", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3A_ARREST_21"))
			{
				iLocal_3198 = 4;
			}
			GlobalFunc_5105();
			iLocal_3198 = 2;
		}
	}
	else if (iLocal_3198 == 2)
	{
		if (!GlobalFunc_111())
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_3202))
			{
				if (GlobalFunc_10626(&uLocal_3612, "PAP3AAU", "PAP3A_ARREST", &Local_3202, 8, iLocal_3199, 0))
				{
					iLocal_3198 = 3;
				}
			}
			else
			{
				iLocal_3198 = 3;
			}
		}
	}
}





















int func_231(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x261B6
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	MISC::CLEAR_BIT(&Global_2263, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_232(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_2970 = iParam6;
			Global_2873[3 /*6*/] = { Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_3 };
			Global_2950 = iParam0;
			MISC::SET_BIT(&Global_2263, 1);
			MISC::SET_BIT(&Global_2263, 7);
		}
		return 1;
	}
	return 0;
}

int func_232(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x2624E
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	GlobalFunc_8951();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14393 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14393 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14393 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (GlobalFunc_5406() == 0)
	{
		GlobalFunc_5405();
		return 0;
	}
	GlobalFunc_2246(Global_16759);
	StringCopy(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/]), sParam1, 64);
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_24 = iParam2;
	}
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_25 = iParam7;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_26 = uParam8;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_29 = uParam9;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_30 = uParam12;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_31 = uParam11;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_28 = 0;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_33), sParam4, 64);
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_50), sParam5, 64);
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_83), sParam15, 64);
	if (MISC::IS_BIT_SET(Global_2263, 10))
	{
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[0] = 1;
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[1] = 1;
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[2] = 1;
		Global_2969 = 4;
		GlobalFunc_1494(0);
		GlobalFunc_1494(2);
		GlobalFunc_1494(1);
	}
	else
	{
		GlobalFunc_8951();
		switch (iParam16)
		{
			case 3:
				Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[Global_14393] = 1;
				break;
			
			case 0:
				Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14393)
			{
				case 0:
					GlobalFunc_1494(0);
					Global_2969 = 0;
					break;
				
				case 1:
					GlobalFunc_1494(1);
					Global_2969 = 1;
					break;
				
				case 2:
					GlobalFunc_1494(2);
					Global_2969 = 2;
					break;
				
				case 3:
					GlobalFunc_1494(3);
					Global_2969 = 3;
					break;
				
				default:
					Global_2969 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (MISC::IS_BIT_SET(Global_2263, 10))
		{
			Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[0 /*20*/].f_17 = 1;
			Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[1 /*20*/].f_17 = 1;
			Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16761[Global_16759] = 0;
	if (bParam10)
	{
		GlobalFunc_8951();
		if (Global_14336)
		{
			StringCopy(&Global_14382, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14393)
			{
				case 0:
					StringCopy(&Global_14382, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14382, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14382, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14382, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!GlobalFunc_268())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_14382, 1);
			}
		}
	}
	if (!Global_14552)
	{
		if (Global_14393.f_1 == 6)
		{
			GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			GlobalFunc_7199(1);
			GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14373), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}















void func_247()//Position - 0x271F8
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	
	fVar3 = 6f;
	if (iLocal_3537)
	{
		fVar3 = 4.5f;
	}
	iVar4 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (iLocal_3253 == 0)
	{
		if (GlobalFunc_4947(Local_3284[0 /*6*/]))
		{
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_3370[0 /*9*/]))
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_3407))
				{
					if (((GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_3370[0 /*9*/], 9f) || GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_3407, 9f)) || GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_3284[0 /*6*/], 9f)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 343.1912f, -402.2201f, 44.2223f, 9f, 9f, 9f, 0, 1, 0))
					{
						if (!iLocal_3543)
						{
							iLocal_3543 = 1;
						}
					}
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3189) || PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3189) >= 0.514839f)
					{
						if (func_251(Local_3407, 1, 1116471296, 1126825984, 0, 0, 0, 0))
						{
							func_248();
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iVar4) && !ENTITY::IS_ENTITY_DEAD(iVar4))
					{
						if (((GlobalFunc_155(iVar4, Local_3370[0 /*9*/], fVar3) || GlobalFunc_155(iVar4, Local_3407, fVar3)) || GlobalFunc_155(iVar4, Local_3284[0 /*6*/], fVar3)) || ENTITY::IS_ENTITY_AT_COORD(iVar4, 343.1912f, -402.2201f, 44.2223f, (fVar3 - 1.5f), (fVar3 - 1.5f), (fVar3 - 1.5f), 0, 1, 0))
						{
							func_248();
						}
					}
					if (((((GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_3370[0 /*9*/], fVar3) || GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_3407, fVar3)) || GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_3284[0 /*6*/], fVar3)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 343.1912f, -402.2201f, 44.2223f, (fVar3 - 1.5f), (fVar3 - 1.5f), (fVar3 - 1.5f), 0, 1, 0)) || func_251(Local_3370[0 /*9*/], 1, 1116471296, 1126825984, 0, 0, 0, 0)) || func_251(Local_3370[1 /*9*/], 1, 1116471296, 1126825984, 0, 0, 0, 0))
					{
						func_248();
					}
					if (iLocal_3281 > 0 && iLocal_3252 == 1)
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3189) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3189) < 0.9f)
						{
							if (iLocal_3233 == 0)
							{
								if ((GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_3370[0 /*9*/], 11f) || GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_3407, 11f)) || GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_3284[0 /*6*/], 11f))
								{
									if (!AUDIO::IS_ANY_SPEECH_PLAYING(Local_3370[1 /*9*/]))
									{
										AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_3370[1 /*9*/], "PAP3A_APAA", "Paparazzo3ACop3", "SPEECH_PARAMS_FORCE", 0);
									}
									else
									{
										iLocal_3233 = 1;
									}
								}
							}
							else if ((!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_3370[0 /*9*/], 14f) && !GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_3407, 14f)) && !GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_3284[0 /*6*/], 14f))
							{
								if (!PED::IS_PED_IN_VEHICLE(Local_3370[1 /*9*/], Local_3284[0 /*6*/], 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_3370[1 /*9*/], -1794415470) != 1)
									{
										TASK::TASK_ENTER_VEHICLE(Local_3370[1 /*9*/], Local_3284[0 /*6*/], -1, 0, 1073741824, 1, 0);
									}
								}
							}
						}
						else if (!PED::IS_PED_IN_VEHICLE(Local_3370[1 /*9*/], Local_3284[0 /*6*/], 0))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_3370[1 /*9*/], -1794415470) != 1)
							{
								TASK::TASK_ENTER_VEHICLE(Local_3370[1 /*9*/], Local_3284[0 /*6*/], -1, 0, 1073741824, 1, 0);
							}
						}
						if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_3370[0 /*9*/], 15f) || GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_3407, 15f))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 14f)
								{
									if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), Local_3370[0 /*9*/], 10f) || PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), Local_3407, 10f))
									{
										func_248();
									}
								}
							}
						}
					}
				}
			}
			if (iLocal_3252 == 1)
			{
				if (iLocal_3281 < 4)
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(Local_3284[0 /*6*/], 1) };
					if (((Var0.x < (Local_3243.x - 0.2f) || Var0.x > (Local_3243.x + 0.2f)) || Var0.f_1 < (Local_3243.f_1 - 0.2f)) || Var0.f_1 > (Local_3243.f_1 + 0.2f))
					{
						func_248();
					}
				}
			}
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			func_248();
		}
	}
}

void func_248()//Position - 0x276A1
{
	int iVar0;
	
	if (bLocal_3540 == 0)
	{
		if (GlobalFunc_115(Local_3284[0 /*6*/]))
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3189) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3189) > 0.92f)
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_3407) && !PED::IS_PED_IN_VEHICLE(Local_3407, Local_3284[0 /*6*/], 0))
				{
					PED::SET_PED_INTO_VEHICLE(Local_3407, Local_3284[0 /*6*/], 1);
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3189) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3189) > 0.975f)
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_3370[0 /*9*/]) && !PED::IS_PED_IN_VEHICLE(Local_3370[0 /*9*/], Local_3284[0 /*6*/], 0))
				{
					PED::SET_PED_INTO_VEHICLE(Local_3370[0 /*9*/], Local_3284[0 /*6*/], -1);
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3189))
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_3284[0 /*6*/], -1000f, 0);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_3284[0 /*6*/]);
			}
		}
		if (GlobalFunc_111())
		{
			GlobalFunc_4956();
		}
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (GlobalFunc_115(Local_3370[iVar0 /*9*/]))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(Local_3370[iVar0 /*9*/], 0))
				{
					TASK::TASK_COMBAT_PED(Local_3370[iVar0 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
					iLocal_3267[iVar0] = 9;
				}
			}
			iVar0++;
		}
		if (iLocal_3264 != 6)
		{
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_3407))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3189))
				{
					fLocal_3256 = PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3189);
					if (fLocal_3256 < 0.514839f)
					{
						TASK::TASK_SYNCHRONIZED_SCENE(Local_3407, uLocal_3189, "rcmpaparazzo_3", "poppy_arrest_popm", 1000f, -1.5f, 1, 0, 1148846080, 0);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_3189, fLocal_3256);
						TASK::TASK_LOOK_AT_ENTITY(Local_3407, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					}
					if (fLocal_3256 >= 0.514839f && fLocal_3256 < 0.667789f)
					{
						TASK::TASK_SMART_FLEE_PED(Local_3407, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					}
					if (fLocal_3256 >= 0.667789f && fLocal_3256 < 0.823092f)
					{
						TASK::TASK_PLAY_ANIM(Local_3407, "rcmpaparazzo_3", "poppy_arrest_popm", 8f, -1.5f, -1, 48, 0.615948f, 1, 0, 0);
						TASK::TASK_LOOK_AT_ENTITY(Local_3407, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_3407, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 80f, 0f), 1.5f, -1, 1048576000, 0, 1193033728);
					}
				}
			}
		}
		PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, 0);
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_3370[0 /*9*/]))
		{
			if (GlobalFunc_155(Local_3370[0 /*9*/], PLAYER::PLAYER_PED_ID(), 100f))
			{
				if (!PED::IS_PED_IN_COMBAT(Local_3370[0 /*9*/], PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS(Local_3370[0 /*9*/]);
					TASK::TASK_COMBAT_PED(Local_3370[0 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
		}
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_3370[2 /*9*/]))
		{
			if (GlobalFunc_155(Local_3370[2 /*9*/], PLAYER::PLAYER_PED_ID(), 100f))
			{
				if (!PED::IS_PED_IN_COMBAT(Local_3370[2 /*9*/], PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS(Local_3370[2 /*9*/]);
					TASK::TASK_COMBAT_PED(Local_3370[2 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
		}
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_3370[3 /*9*/]))
		{
			if (GlobalFunc_155(Local_3370[3 /*9*/], PLAYER::PLAYER_PED_ID(), 100f))
			{
				if (!PED::IS_PED_IN_COMBAT(Local_3370[3 /*9*/], PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS(Local_3370[3 /*9*/]);
					TASK::TASK_COMBAT_PED(Local_3370[3 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
		}
		bLocal_3540 = true;
	}
}



int func_251(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x27A0D
{
	struct<3> Var0;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iParam0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
		if (GlobalFunc_8324(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
				if ((((Var0.x * Var0.x) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return GlobalFunc_171(PLAYER::PLAYER_PED_ID(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_252(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_252(int iParam0, float fParam1)//Position - 0x27AC8
{
	float fVar0;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iParam0))
	{
		if (GlobalFunc_170(iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_253(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_253(int iParam0, float fParam1)//Position - 0x27B3E
{
	return func_254(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_254(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x27B56
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_262(iParam0, iParam1);
	if (!GlobalFunc_115(iParam0) || !GlobalFunc_115(iParam1))
	{
		if (iVar4 != -1)
		{
			GlobalFunc_169(&(Local_36[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!GlobalFunc_4958(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_257();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_36[iVar4 /*4*/].f_1 = iParam0;
		Local_36[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = GlobalFunc_4957(&(Local_36[iVar4 /*4*/]), Var1, iParam1, &(Local_36[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_36[iVar4 /*4*/].f_3) < iParam4);
}



int func_257()//Position - 0x27E08
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_36)
	{
		if ((Local_36[iVar0 /*4*/] == 0 && Local_36[iVar0 /*4*/].f_1 == 0) && Local_36[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}





int func_262(int iParam0, int iParam1)//Position - 0x27F5E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_36)
	{
		if (Local_36[iVar0 /*4*/].f_1 == iParam0 && Local_36[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}








void func_270()//Position - 0x28381
{
	if (iLocal_3533 == 0)
	{
		if (func_301(0))
		{
			func_300(&Local_3303, 1);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_3303, 2);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_3303.f_5, 1);
			VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(Local_3303, 2.5f);
			VEHICLE::SET_VEHICLE_MOD_KIT(Local_3303, 0);
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_3303, "P0PPYM15");
			VEHICLE::LOWER_CONVERTIBLE_ROOF(Local_3303, 1);
			VEHICLE::SET_VEHICLE_COLOURS(Local_3303, 137, 137);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_3303, 0, 0);
			VEHICLE::SET_VEHICLE_MOD(Local_3303, 11, 2, false);
			VEHICLE::SET_VEHICLE_MOD(Local_3303, 12, 0, false);
			VEHICLE::SET_VEHICLE_MOD(Local_3303, 14, 3, false);
			VEHICLE::SET_VEHICLE_MOD(Local_3303, 23, 6, false);
			VEHICLE::TOGGLE_VEHICLE_MOD(Local_3303, 18, true);
			func_300(&(Local_3284[0 /*6*/]), 0);
			func_300(&(Local_3284[1 /*6*/]), 0);
			func_300(&(Local_3284[2 /*6*/]), 0);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_3284[0 /*6*/], 1);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_3284[1 /*6*/], 1);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_3284[2 /*6*/], 1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_3284[0 /*6*/].f_5, 1);
			func_299(&(Local_3370[0 /*9*/]), &(Local_3284[0 /*6*/]), 6, 0, -1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3370[0 /*9*/], 1);
			func_299(&(Local_3370[1 /*9*/]), &(Local_3284[0 /*6*/]), 6, 0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3370[1 /*9*/], 1);
			func_299(&(Local_3370[2 /*9*/]), &(Local_3284[1 /*6*/]), 6, 0, -1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3370[2 /*9*/], 1);
			func_299(&(Local_3370[3 /*9*/]), &(Local_3284[2 /*6*/]), 6, 0, -1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3370[3 /*9*/], 1);
			func_299(&Local_3407, &Local_3303, 26, 0, -1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_3407, iLocal_3790);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3407, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_3407, uLocal_3789);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_3790, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_3790);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_3407, 1);
			PED::SET_PED_MODEL_IS_SUPPRESSED(Local_3407.f_5, 1);
			PED::SET_PED_COMPONENT_VARIATION(Local_3407, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_3407, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_3407, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_3407, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_3407, 8, 0, 0, 0);
			iLocal_3533 = 1;
		}
	}
	else
	{
		func_271();
	}
}

void func_271()//Position - 0x28582
{
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		func_248();
	}
	if (MISC::GET_GAME_TIMER() > iLocal_3196)
	{
		if (GlobalFunc_115(Local_3303))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_3303, PLAYER::PLAYER_PED_ID(), 1))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_3303);
				iLocal_3195++;
				iLocal_3196 = MISC::GET_GAME_TIMER() + 2000;
			}
		}
		if (GlobalFunc_115(Local_3284[0 /*6*/]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_3284[0 /*6*/], PLAYER::PLAYER_PED_ID(), 1))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_3284[0 /*6*/]);
				iLocal_3195++;
				iLocal_3196 = MISC::GET_GAME_TIMER() + 2000;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), Local_3284[0 /*6*/], 1))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0));
					iLocal_3195++;
					iLocal_3196 = MISC::GET_GAME_TIMER() + 2000;
				}
			}
		}
		if (!bLocal_3535)
		{
			if (GlobalFunc_115(Local_3284[1 /*6*/]))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_3284[1 /*6*/], PLAYER::PLAYER_PED_ID(), 1))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_3284[1 /*6*/]);
					iLocal_3195++;
					iLocal_3196 = MISC::GET_GAME_TIMER() + 2000;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), Local_3284[1 /*6*/], 1))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0));
						iLocal_3195++;
						iLocal_3196 = MISC::GET_GAME_TIMER() + 2000;
					}
				}
			}
		}
		if (GlobalFunc_115(Local_3284[2 /*6*/]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_3284[2 /*6*/], PLAYER::PLAYER_PED_ID(), 1))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_3284[2 /*6*/]);
				iLocal_3195++;
				iLocal_3196 = MISC::GET_GAME_TIMER() + 2000;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), Local_3284[2 /*6*/], 1))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0));
					iLocal_3195++;
					iLocal_3196 = MISC::GET_GAME_TIMER() + 2000;
				}
			}
		}
	}
	if (iLocal_3195 >= 5)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
		{
			GlobalFunc_6685(0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_3407))
	{
		if (GlobalFunc_115(Local_3407))
		{
			if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_3407, PLAYER::PLAYER_PED_ID(), 1))
			{
				func_272();
				if (iLocal_3538 == 0)
				{
					if (iLocal_3264 == 1)
					{
						if (GlobalFunc_4947(Local_3303))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3303) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3303) > 15000f)
							{
								if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_3407, 220f, 220f, 220f, 0, 1, 0))
								{
									func_1(4);
								}
							}
						}
					}
				}
				else if (iLocal_3264 != 6)
				{
					if (bLocal_3536 == 0)
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_3407, 220f, 220f, 220f, 0, 1, 0))
						{
							func_1(1);
						}
					}
				}
			}
			else
			{
				func_1(2);
			}
		}
		else
		{
			func_1(3);
		}
	}
}

void func_272()//Position - 0x28855
{
	switch (iLocal_3264)
	{
		case 0:
			break;
		
		case 1:
			if (GlobalFunc_4947(Local_3303))
			{
				GlobalFunc_10629(&uLocal_3777, Local_3303, 0, 0, 1, 1, 1);
			}
			if (iLocal_3261 == 4)
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_3370[0 /*9*/]))
				{
					GlobalFunc_173(&uLocal_3612, 4, Local_3370[0 /*9*/], "Paparazzo3ACop1", 0, 1);
				}
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_3407, PLAYER::PLAYER_PED_ID(), 0))
			{
				if (GlobalFunc_4947(Local_3303))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3303))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3303);
					}
				}
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_3407);
				func_1(2);
			}
			break;
		
		case 2:
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_3407))
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_3370[0 /*9*/]))
				{
					GlobalFunc_173(&uLocal_3612, 4, Local_3370[0 /*9*/], "Paparazzo3ACop1", 0, 1);
				}
				GlobalFunc_173(&uLocal_3612, 6, Local_3407, "POPPY", 0, 1);
				iLocal_3264 = 3;
			}
			break;
		
		case 3:
			if (ENTITY::IS_ENTITY_AT_COORD(Local_3407, Local_3556, 1.5f, 1.5f, 1.5f, 0, 1, 0))
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_3370[3 /*9*/]))
				{
					GlobalFunc_173(&uLocal_3612, 5, Local_3370[3 /*9*/], "Paparazzo3ACop2", 0, 1);
				}
				iLocal_3264 = 4;
			}
			break;
		
		case 4:
			if (iLocal_3267[1] == 4)
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_3370[0 /*9*/]))
				{
					GlobalFunc_173(&uLocal_3612, 4, Local_3370[0 /*9*/], "Paparazzo3ACop1", 0, 1);
				}
				GlobalFunc_173(&uLocal_3612, 6, Local_3407, "POPPY", 0, 1);
			}
			break;
		
		case 5:
			break;
		
		case 6:
			break;
		
		case 7:
			break;
	}
}



























void func_299(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2999F
{
	if (STREAMING::HAS_MODEL_LOADED(uParam0->f_5))
	{
		*uParam0 = PED::CREATE_PED_INSIDE_VEHICLE(*iParam1, iParam2, uParam0->f_5, iParam4, 1, 1);
		if (iParam3 == 1)
		{
		}
	}
}

void func_300(var uParam0, int iParam1)//Position - 0x299CC
{
	if (STREAMING::HAS_MODEL_LOADED(uParam0->f_5))
	{
		*uParam0 = VEHICLE::CREATE_VEHICLE(uParam0->f_5, uParam0->f_1, uParam0->f_4, 1, 1);
	}
	if (iParam1 == 1)
	{
	}
}

int func_301(int iParam0)//Position - 0x299FC
{
	int iVar0;
	
	STREAMING::REQUEST_MODEL(Local_3284[0 /*6*/].f_5);
	STREAMING::REQUEST_MODEL(Local_3303.f_5);
	STREAMING::REQUEST_MODEL(Local_3370[0 /*9*/].f_5);
	STREAMING::REQUEST_MODEL(Local_3407.f_5);
	if (iParam0 == 0)
	{
		if (((!STREAMING::HAS_MODEL_LOADED(Local_3284[0 /*6*/].f_5) || !STREAMING::HAS_MODEL_LOADED(Local_3370[0 /*9*/].f_5)) || !STREAMING::HAS_MODEL_LOADED(Local_3303.f_5)) || !STREAMING::HAS_MODEL_LOADED(Local_3407.f_5))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 == 0)
		{
			SYSTEM::WAIT(0);
			iVar0 = 1;
			if (((!STREAMING::HAS_MODEL_LOADED(Local_3284[0 /*6*/].f_5) || !STREAMING::HAS_MODEL_LOADED(Local_3370[0 /*9*/].f_5)) || !STREAMING::HAS_MODEL_LOADED(Local_3303.f_5)) || !STREAMING::HAS_MODEL_LOADED(Local_3407.f_5))
			{
				iVar0 = 0;
			}
		}
	}
	return 1;
}

void func_302()//Position - 0x29AD9
{
	if (iLocal_3252 == 1)
	{
		if (GlobalFunc_115(Local_3284[0 /*6*/]) && GlobalFunc_115(Local_3303))
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3189))
			{
				if (iLocal_3281 == 0)
				{
					HUD::CLEAR_PRINTS();
					HUD::CLEAR_HELP(1);
					if (GlobalFunc_IsPedNotInjuredOrDead(Local_3407))
					{
						if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_3407))
						{
							if (GlobalFunc_IsPedNotInjuredOrDead(Local_3370[0 /*9*/]))
							{
								GlobalFunc_173(&uLocal_3612, 4, Local_3370[0 /*9*/], "Paparazzo3ACop1", 0, 1);
							}
							GlobalFunc_173(&uLocal_3612, 6, Local_3407, "POPPY", 0, 1);
							if (GlobalFunc_10618(&uLocal_3612, "PAP3AAU", "PAP3A_ARREST", 7, 0, 0, 0))
							{
								iLocal_3264 = 3;
							}
						}
					}
					if (GlobalFunc_115(iLocal_3139))
					{
						VEHICLE::SET_VEHICLE_SEARCHLIGHT(iLocal_3139, 1, 1);
						TASK::TASK_HELI_MISSION(iLocal_3140, iLocal_3139, 0, Local_3407, 0f, 50f, 60f, 16, 0.1f, 60f, -1f, 60, 55, -1082130432, 0);
					}
					while (MISC::GET_GAME_TIMER() <= iLocal_3282 + 8500 && !GlobalFunc_4926(1500))
					{
						if (MISC::GET_GAME_TIMER() <= iLocal_3282 + 500)
						{
							if (bLocal_3232)
							{
								if (GlobalFunc_Is_Mission_Retry())
								{
									if (CAM::IS_SCREEN_FADED_OUT())
									{
										GlobalFunc_79(800, 0);
									}
								}
							}
						}
						if (!iLocal_3545)
						{
							if (GlobalFunc_1720())
							{
								if (MISC::GET_GAME_TIMER() >= iLocal_3282 + 8200)
								{
									GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
									AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
									iLocal_3545 = 1;
								}
							}
						}
						GlobalFunc_7629();
						if (GlobalFunc_115(Local_3284[0 /*6*/]) && GlobalFunc_115(Local_3303))
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_3303, 0);
							if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_3303, 0) < 0.8f)
							{
								fLocal_3549 = (fLocal_3549 + 0.03f);
								VEHICLE::SET_VEHICLE_DOOR_CONTROL(Local_3303, 0, 0, fLocal_3549);
							}
						}
						if ((GlobalFunc_IsPedNotInjuredOrDead(iLocal_3140) && GlobalFunc_115(Local_3407)) && GlobalFunc_115(iLocal_3139))
						{
							if (TASK::CONTROL_MOUNTED_WEAPON(iLocal_3140))
							{
								TASK::SET_MOUNTED_WEAPON_TARGET(iLocal_3140, Local_3407, 0, 0f, 0f, 0f);
							}
						}
						SYSTEM::WAIT(0);
					}
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						GlobalFunc_79(800, 0);
					}
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					HUD::DISPLAY_HUD(1);
					HUD::DISPLAY_RADAR(1);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_3407, -1, 0, 2);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 128);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					if (GlobalFunc_115(iLocal_3139))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_3139, 0);
					}
					if (iLocal_3231 == 0)
					{
						if (!HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
						{
							GlobalFunc_164("PAP3_POP", 7500, 1);
							iLocal_3231 = 1;
						}
					}
					if (!HUD::DOES_BLIP_EXIST(uLocal_3149))
					{
						uLocal_3149 = GlobalFunc_4955(Local_3407, 1, 1, 5);
					}
					iLocal_3281 = 4;
				}
				else if (iLocal_3281 == 1)
				{
					if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_3303, 0) < 0.9f)
					{
						fLocal_3549 = (fLocal_3549 + 0.04f);
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(Local_3303, 0, 0, fLocal_3549);
					}
					if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_3284[0 /*6*/], 0) < 0.8f)
					{
						fLocal_3547 = (fLocal_3547 + 0.14f);
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(Local_3284[0 /*6*/], 0, 0, fLocal_3547);
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3189) >= 0.810415f)
					{
						if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_3284[0 /*6*/], 2) < 0.8f && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3189) < 0.823092f)
						{
							fLocal_3548 = (fLocal_3548 + 0.025f);
							VEHICLE::SET_VEHICLE_DOOR_CONTROL(Local_3284[0 /*6*/], 2, 0, fLocal_3549);
						}
						else
						{
							VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_3284[0 /*6*/], 2, 0, 0);
							iLocal_3281 = 2;
						}
					}
				}
				else if (iLocal_3281 == 2)
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3189) >= 0.918249f)
					{
						if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_3284[0 /*6*/], 2) > 0.1f && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3189) < 0.930077f)
						{
							fLocal_3548 = (fLocal_3548 - 0.05f);
							VEHICLE::SET_VEHICLE_DOOR_CONTROL(Local_3284[0 /*6*/], 2, 0, fLocal_3548);
						}
						else
						{
							VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_3284[0 /*6*/], 2, 1);
							if (GlobalFunc_IsPedNotInjuredOrDead(Local_3407))
							{
								if (!PED::IS_PED_IN_VEHICLE(Local_3407, Local_3284[0 /*6*/], 0))
								{
									PED::SET_PED_INTO_VEHICLE(Local_3407, Local_3284[0 /*6*/], 1);
								}
							}
							iLocal_3281 = 3;
						}
					}
				}
				else if (iLocal_3281 == 3)
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3189) >= 0.970048f)
					{
						if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_3284[0 /*6*/], 0) > 0.1f && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3189) < 0.991134f)
						{
							fLocal_3547 = (fLocal_3547 - 0.056f);
							VEHICLE::SET_VEHICLE_DOOR_CONTROL(Local_3284[0 /*6*/], 0, 0, fLocal_3547);
						}
						else
						{
							VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_3284[0 /*6*/], 0, 1);
							if (GlobalFunc_IsPedNotInjuredOrDead(Local_3370[0 /*9*/]))
							{
								if (!PED::IS_PED_IN_VEHICLE(Local_3370[0 /*9*/], Local_3284[0 /*6*/], 0))
								{
									PED::SET_PED_INTO_VEHICLE(Local_3370[0 /*9*/], Local_3284[0 /*6*/], -1);
								}
							}
							iLocal_3281 = 4;
						}
					}
				}
			}
		}
	}
}







void func_309(int iParam0)//Position - 0x2A0C5
{
	struct<3> Var0;
	
	Var0 = { -0.428284f, 0.205746f, -0.156812f };
	switch (iLocal_3267[iParam0])
	{
		case 0:
			if (iLocal_3261 == 4 || iLocal_3261 == 3)
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_3370[0 /*9*/]))
				{
					if (iParam0 == 0)
					{
						if (iLocal_3261 == 4 && GlobalFunc_7961(0, 1093140480, 0))
						{
							if (((GlobalFunc_115(Local_3284[0 /*6*/]) && GlobalFunc_115(Local_3303)) && GlobalFunc_IsPedNotInjuredOrDead(Local_3407)) && iLocal_3252 == 0)
							{
								HUD::CLEAR_PRINTS();
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_3A_POLICE_CHASE"))
								{
									AUDIO::STOP_AUDIO_SCENE("PAPARAZZO_3A_POLICE_CHASE");
								}
								if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_3A_PHOTO_SCENE"))
								{
									AUDIO::START_AUDIO_SCENE("PAPARAZZO_3A_PHOTO_SCENE");
								}
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3284[0 /*6*/]))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3284[0 /*6*/]);
								}
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3303))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3303);
								}
								GlobalFunc_69(&(Local_3370[0 /*9*/]));
								GlobalFunc_69(&(Local_3370[1 /*9*/]));
								GlobalFunc_6692(&(Local_3284[0 /*6*/]));
								Var0.x = (Var0.x * -1f);
								Var0.f_1 = (Var0.f_1 * -1f);
								Var0.f_2 = (Var0.f_2 * -1f);
								Local_3243 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(349.478f, -401.681f, 44.7238f, 106.1413f, Var0.x, Var0.f_1, Var0.f_2) };
								Local_3284[0 /*6*/] = VEHICLE::CREATE_VEHICLE(Local_3284[0 /*6*/].f_5, Local_3243.x, Local_3243.f_1, 44.3462f, 106.1413f, 1, 1);
								Local_3370[0 /*9*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_3284[0 /*6*/], 6, joaat("s_m_y_cop_01"), -1, 1, 1);
								Local_3370[1 /*9*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_3284[0 /*6*/], 6, joaat("s_m_y_cop_01"), 0, 1, 1);
								WEAPON::GIVE_WEAPON_TO_PED(Local_3370[0 /*9*/], joaat("weapon_pistol"), -1, 0, 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3370[0 /*9*/], 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_3370[0 /*9*/], iLocal_3789);
								WEAPON::GIVE_WEAPON_TO_PED(Local_3370[1 /*9*/], joaat("weapon_pistol"), -1, 0, 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_3370[1 /*9*/], iLocal_3789);
								PED::SET_PED_CONFIG_FLAG(Local_3370[1 /*9*/], 184, 1);
								TASK::TASK_LOOK_AT_ENTITY(Local_3370[1 /*9*/], Local_3407, -1, 0, 2);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3284[0 /*6*/]);
								VEHICLE::SET_VEHICLE_SIREN(Local_3284[0 /*6*/], 1);
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_3146);
									TASK::TASK_LOOK_AT_ENTITY(0, Local_3407, -1, 0, 2);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_3146);
								}
								else
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_3146);
									TASK::TASK_LOOK_AT_ENTITY(0, Local_3407, -1, 0, 2);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_3407, -1);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_3146);
								}
								TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_3146);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_3146);
								ENTITY::SET_ENTITY_COORDS(Local_3303, 341.2203f, -410.2295f, 44.63539f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(Local_3303, 109.616f);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3303);
								if (!ENTITY::IS_ENTITY_DEAD(Local_3284[2 /*6*/]))
								{
									ENTITY::SET_ENTITY_COORDS(Local_3284[2 /*6*/], 328.8692f, -399.05f, 44.81538f, 1, 0, 0, 1);
									ENTITY::SET_ENTITY_HEADING(Local_3284[2 /*6*/], -57.30972f);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3284[2 /*6*/]);
									VEHICLE::SET_VEHICLE_SIREN(Local_3284[2 /*6*/], 1);
								}
								if (GlobalFunc_IsPedNotInjuredOrDead(Local_3370[3 /*9*/]))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3370[3 /*9*/], 1);
									TASK::CLEAR_PED_TASKS(Local_3370[3 /*9*/]);
									if (!PED::IS_PED_IN_VEHICLE(Local_3370[3 /*9*/], Local_3284[2 /*6*/], 0))
									{
										PED::SET_PED_INTO_VEHICLE(Local_3370[3 /*9*/], Local_3284[2 /*6*/], -1);
									}
									TASK::TASK_LOOK_AT_ENTITY(Local_3370[3 /*9*/], Local_3407, -1, 0, 2);
								}
								ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_3303);
								TASK::CLEAR_PED_TASKS(Local_3407);
								Local_3240 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_3407, 0f, 0f, 0f) };
								ENTITY::SET_ENTITY_COORDS(Local_3407, Local_3240.x, Local_3240.f_1, (Local_3240.f_2 - 1f), 1, 0, 0, 1);
								uLocal_3189 = PED::CREATE_SYNCHRONIZED_SCENE(339.0846f, -411.1358f, 44.0895f, 0f, 0f, 0f, 2);
								PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_3189, 0);
								iLocal_3264 = 2;
								TASK::CLEAR_PED_TASKS(Local_3370[0 /*9*/]);
								Local_3142 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_3370[0 /*9*/], 0f, 0f, 0f) };
								ENTITY::SET_ENTITY_COORDS(Local_3370[0 /*9*/], Local_3142.x, Local_3142.f_1, (Local_3142.f_2 - 1f), 1, 0, 0, 1);
								iLocal_3267[0] = 1;
								uLocal_3147 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
								CAM::SET_CAM_COORD(uLocal_3147, 338.4f, -413.7f, 45.1f);
								CAM::SET_CAM_ROT(uLocal_3147, -0.4f, 0.2f, -43.5f, 2);
								CAM::SET_CAM_FOV(uLocal_3147, 49.8293f);
								uLocal_3148 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
								CAM::SET_CAM_COORD(uLocal_3148, 337.8593f, -413.8199f, 46.2603f);
								CAM::SET_CAM_ROT(uLocal_3148, -19.1264f, 0.093f, -40.2055f, 2);
								CAM::SET_CAM_FOV(uLocal_3148, 50.8293f);
								CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3148, uLocal_3147, 10000, 1, 1);
								CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
								HUD::DISPLAY_HUD(0);
								HUD::DISPLAY_RADAR(0);
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 128);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_3407, uLocal_3189, "rcmpaparazzo_3", "poppy_arrest_popm", 1000f, -1.5f, 0, 0, 1148846080, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_3370[0 /*9*/], uLocal_3189, "rcmpaparazzo_3", "poppy_arrest_cop", 1000f, -1.5f, 0, 0, 1148846080, 0);
								ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_3284[0 /*6*/], uLocal_3189, "poppy_arrest_car", "rcmpaparazzo_3", 1000f, -1f, 0, 1148846080);
								WEAPON::SET_CURRENT_PED_WEAPON(Local_3370[0 /*9*/], joaat("weapon_pistol"), 1);
								if (CAM::DOES_CAM_EXIST(uLocal_3148))
								{
									CAM::SHAKE_CAM(uLocal_3148, "HAND_SHAKE", 1f);
								}
								if (CAM::DOES_CAM_EXIST(uLocal_3147))
								{
									CAM::SHAKE_CAM(uLocal_3147, "HAND_SHAKE", 1f);
								}
								iLocal_3282 = MISC::GET_GAME_TIMER();
								fLocal_3547 = 0f;
								fLocal_3548 = 0f;
								fLocal_3549 = 0f;
								iLocal_3281 = 0;
								PATHFIND::SET_ROADS_IN_AREA(318.94f, -411.6963f, 38.0267f, 421.5246f, -363.0107f, 52.0853f, 0, 1);
								iLocal_3252 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!func_251(Local_3370[iParam0 /*9*/], 1, 1116471296, 1126825984, 0, 0, 0, 0))
			{
				if (iParam0 != 0)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_3370[iParam0 /*9*/], 0))
					{
						if (GlobalFunc_IsPedNotInjuredOrDead(Local_3370[iParam0 /*9*/]))
						{
							TASK::TASK_AIM_GUN_AT_ENTITY(Local_3370[iParam0 /*9*/], Local_3407, -1, 0);
							iLocal_3267[iParam0] = 2;
						}
					}
				}
				if (iLocal_3281 == 4)
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3189) || PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3189) == 1f)
					{
						if ((GlobalFunc_IsPedNotInjuredOrDead(Local_3370[0 /*9*/]) && GlobalFunc_IsPedNotInjuredOrDead(Local_3407)) && GlobalFunc_4947(Local_3284[0 /*6*/]))
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_3370[0 /*9*/], Local_3284[0 /*6*/], 0))
							{
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_3370[0 /*9*/], 0, 0);
								PED::SET_PED_INTO_VEHICLE(Local_3370[0 /*9*/], Local_3284[0 /*6*/], -1);
							}
							if (!PED::IS_PED_IN_VEHICLE(Local_3407, Local_3284[0 /*6*/], 0))
							{
								PED::SET_PED_INTO_VEHICLE(Local_3407, Local_3284[0 /*6*/], 1);
							}
							iLocal_3281 = 5;
							iLocal_3267[iParam0] = 5;
							iLocal_3264 = 6;
						}
					}
				}
			}
			break;
		
		case 2:
			if (!func_251(Local_3370[iParam0 /*9*/], 1, 1116471296, 1126825984, 0, 0, 0, 0))
			{
				if (iLocal_3264 == 3)
				{
					if (iParam0 == 0)
					{
					}
					else if (iParam0 == 1)
					{
						if (GlobalFunc_IsPedNotInjuredOrDead(Local_3370[iParam0 /*9*/]))
						{
							TASK::CLEAR_PED_TASKS(Local_3370[iParam0 /*9*/]);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_3145);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 351.0502f, -394.4243f, 44.2688f, Local_3407, 1.6f, 0, 2f, 0f, 1, 0, 0, -957453492, 20000);
							TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Local_3407, Local_3407, 1.2f, 0, 0f, 4f, 1, 0, -957453492);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_3145);
							TASK::TASK_PERFORM_SEQUENCE(Local_3370[iParam0 /*9*/], uLocal_3145);
							iLocal_3267[iParam0] = 3;
						}
					}
					else if (iParam0 == 3)
					{
						if (GlobalFunc_IsPedNotInjuredOrDead(Local_3370[iParam0 /*9*/]))
						{
							TASK::CLEAR_PED_TASKS(Local_3370[iParam0 /*9*/]);
							TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(Local_3370[iParam0 /*9*/], Local_3407, Local_3407, 1.5f, 0, 0f, 6f, 1, 0, -957453492);
							iLocal_3267[iParam0] = 3;
						}
					}
				}
			}
			break;
		
		case 3:
			if (!func_251(Local_3370[iParam0 /*9*/], 1, 1116471296, 1126825984, 0, 0, 0, 0))
			{
				if (iParam0 == 0)
				{
				}
				else if (iParam0 == 1)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(Local_3370[iParam0 /*9*/], Local_3407, 3f, 3f, 3f, 0, 1, 0))
					{
						if (GlobalFunc_IsPedNotInjuredOrDead(Local_3370[iParam0 /*9*/]))
						{
							TASK::CLEAR_PED_TASKS(Local_3370[iParam0 /*9*/]);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Local_3370[iParam0 /*9*/], 346.3328f, -395.9672f, 44.2922f, Local_3407, 1f, 0, 0f, 0f, 1, 0, 0, -957453492, 20000);
							iLocal_3267[iParam0] = 4;
						}
					}
				}
				else if (iParam0 == 3)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(Local_3370[iParam0 /*9*/], Local_3407, 10f, 10f, 10f, 0, 1, 0))
					{
						if (GlobalFunc_IsPedNotInjuredOrDead(Local_3370[iParam0 /*9*/]))
						{
							TASK::CLEAR_PED_TASKS(Local_3370[iParam0 /*9*/]);
							TASK::TASK_AIM_GUN_AT_ENTITY(Local_3370[iParam0 /*9*/], Local_3407, -1, 0);
							iLocal_3267[iParam0] = 4;
						}
					}
				}
				if (iLocal_3281 == 4)
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3189) || PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3189) == 1f)
					{
						if ((GlobalFunc_IsPedNotInjuredOrDead(Local_3370[0 /*9*/]) && GlobalFunc_IsPedNotInjuredOrDead(Local_3407)) && GlobalFunc_4947(Local_3284[0 /*6*/]))
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_3370[0 /*9*/], Local_3284[0 /*6*/], 0))
							{
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_3370[0 /*9*/], 0, 0);
								PED::SET_PED_INTO_VEHICLE(Local_3370[0 /*9*/], Local_3284[0 /*6*/], -1);
							}
							if (!PED::IS_PED_IN_VEHICLE(Local_3407, Local_3284[0 /*6*/], 0))
							{
								PED::SET_PED_INTO_VEHICLE(Local_3407, Local_3284[0 /*6*/], 1);
							}
							iLocal_3281 = 5;
							iLocal_3267[iParam0] = 5;
							iLocal_3264 = 6;
						}
					}
				}
			}
			break;
		
		case 4:
			if (!func_251(Local_3370[iParam0 /*9*/], 1, 1116471296, 1126825984, 0, 0, 0, 0))
			{
				if (iLocal_3264 == 6)
				{
					if (iParam0 == 0)
					{
					}
					else if (iParam0 == 1)
					{
						if (GlobalFunc_IsPedNotInjuredOrDead(Local_3370[iParam0 /*9*/]))
						{
							TASK::CLEAR_PED_TASKS(Local_3370[iParam0 /*9*/]);
							if (GlobalFunc_4947(Local_3284[0 /*6*/]))
							{
								TASK::TASK_ENTER_VEHICLE(Local_3370[iParam0 /*9*/], Local_3284[0 /*6*/], -1, 0, 1073741824, 1, 0);
								iLocal_3267[iParam0] = 5;
							}
						}
					}
					else if (iParam0 == 3)
					{
						if (GlobalFunc_IsPedNotInjuredOrDead(Local_3370[iParam0 /*9*/]))
						{
							TASK::CLEAR_PED_TASKS(Local_3370[iParam0 /*9*/]);
							if (GlobalFunc_4947(Local_3303))
							{
								TASK::TASK_GO_TO_ENTITY(Local_3370[iParam0 /*9*/], Local_3303, -1, 2.5f, 1f, 1073741824, 0);
								iLocal_3267[iParam0] = 6;
							}
						}
					}
				}
				if (iLocal_3281 == 4)
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3189) || PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3189) == 1f)
					{
						if ((GlobalFunc_IsPedNotInjuredOrDead(Local_3370[0 /*9*/]) && GlobalFunc_IsPedNotInjuredOrDead(Local_3407)) && GlobalFunc_4947(Local_3284[0 /*6*/]))
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_3370[0 /*9*/], Local_3284[0 /*6*/], 0))
							{
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_3370[0 /*9*/], 0, 0);
								PED::SET_PED_INTO_VEHICLE(Local_3370[0 /*9*/], Local_3284[0 /*6*/], -1);
							}
							if (!PED::IS_PED_IN_VEHICLE(Local_3407, Local_3284[0 /*6*/], 0))
							{
								PED::SET_PED_INTO_VEHICLE(Local_3407, Local_3284[0 /*6*/], 1);
							}
							iLocal_3281 = 5;
							iLocal_3267[iParam0] = 5;
							iLocal_3264 = 6;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!func_251(Local_3370[iParam0 /*9*/], 1, 1116471296, 1126825984, 0, 0, 0, 0))
			{
				if (GlobalFunc_4947(Local_3284[0 /*6*/]))
				{
					if (GlobalFunc_115(Local_3370[0 /*9*/]) && GlobalFunc_115(Local_3370[1 /*9*/]))
					{
						if (PED::IS_PED_IN_VEHICLE(Local_3370[0 /*9*/], Local_3284[0 /*6*/], 0))
						{
							if (GlobalFunc_IsPedNotInjuredOrDead(Local_3370[iParam0 /*9*/]))
							{
								if (bLocal_3536 == 0)
								{
									iLocal_3253 = 1;
									iLocal_3267[0] = 7;
									iLocal_3267[iParam0] = 7;
									iLocal_3187 = MISC::GET_GAME_TIMER();
									return;
								}
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3189))
								{
									ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_3284[0 /*6*/], -1f, 0);
								}
								ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_3284[0 /*6*/]);
								VEHICLE::SET_VEHICLE_SIREN(Local_3284[0 /*6*/], 0);
								PED::SET_PED_KEEP_TASK(Local_3370[0 /*9*/], 1);
								iLocal_3187 = MISC::GET_GAME_TIMER();
								if (GlobalFunc_4947(Local_3303))
								{
									ENTITY::FREEZE_ENTITY_POSITION(Local_3303, 0);
								}
								PATHFIND::SET_ROADS_IN_AREA(318.94f, -411.6963f, 38.0267f, 421.5246f, -363.0107f, 52.0853f, 1, 1);
								PATHFIND::SET_ROADS_IN_AREA(796.4662f, -68.4078f, 79.522f, 974.3044f, -152.9081f, 72.6015f, 1, 1);
								PATHFIND::SET_ROADS_IN_AREA(683.3696f, 38.3284f, 83.277f, 707.9796f, -22.9872f, 82.654f, 1, 1);
								PATHFIND::SET_ROADS_IN_AREA(812.2689f, -40.7279f, 79.4878f, 858.4236f, -119.0339f, 78.3599f, 1, 1);
								VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(Local_3284[0 /*6*/], 1);
								TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_3370[0 /*9*/], Local_3284[0 /*6*/], 231.64f, -347.1846f, 43.2866f, 30f, 0, 0, 786469, 20f, 150f);
								VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_3284[0 /*6*/], 1);
								iLocal_3253 = 1;
								TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
								iLocal_3267[0] = 7;
								iLocal_3267[iParam0] = 7;
							}
						}
					}
				}
			}
			break;
		
		case 6:
			if (func_251(Local_3370[iParam0 /*9*/], 1, 1116471296, 1126825984, 0, 0, 0, 0))
			{
			}
			break;
		
		case 7:
			break;
		
		case 8:
			if (MISC::GET_GAME_TIMER() >= iLocal_3186 + 5000)
			{
				if (GlobalFunc_115(Local_3407))
				{
					if (GlobalFunc_IsPedNotInjuredOrDead(Local_3370[iParam0 /*9*/]))
					{
						iLocal_3267[iParam0] = 3;
					}
				}
			}
			break;
		
		case 9:
			break;
	}
}















void func_324()//Position - 0x2B32C
{
	struct<6> Var0;
	
	if (bLocal_3540)
	{
		if (GlobalFunc_115(Local_3284[0 /*6*/]) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_3284[0 /*6*/]))
		{
			if (iLocal_3194 < 30)
			{
				iLocal_3194 = 30;
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3189) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3189) > 0.92f)
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_3407) && !PED::IS_PED_IN_VEHICLE(Local_3407, Local_3284[0 /*6*/], 0))
				{
					PED::SET_PED_INTO_VEHICLE(Local_3407, Local_3284[0 /*6*/], 1);
				}
			}
		}
		iLocal_3194++;
		if (ENTITY::IS_ENTITY_DEAD(Local_3407) || PED::IS_PED_INJURED(Local_3407))
		{
			func_1(3);
			return;
		}
		else if (iLocal_3194 > 30)
		{
			func_1(5);
			return;
		}
	}
	Var0 = { GlobalFunc_2209() };
	switch (iLocal_3262)
	{
		case 0:
			GlobalFunc_Checkpoint8(2, "Arrived at crash scene", 1, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_AREA(318.94f, -411.6963f, 38.0267f, 421.5246f, -363.0107f, 52.0853f, 0, 1);
			GlobalFunc_846(&uLocal_3150);
			GlobalFunc_200(&uLocal_3612, 1);
			STREAMING::REQUEST_ANIM_DICT("rcmpaparazzo_3");
			GlobalFunc_4948(&uLocal_3777, 0, 0);
			func_341();
			GlobalFunc_4948(&uLocal_3777, 0, 0);
			GlobalFunc_2794(50);
			GlobalFunc_9132(0);
			iLocal_3221 = 0;
			bLocal_3536 = false;
			iLocal_3225 = 0;
			iLocal_3227 = 0;
			iLocal_3228 = 0;
			iLocal_3229 = 0;
			iLocal_3231 = 0;
			iLocal_3190 = 0;
			iLocal_3193 = 0;
			iLocal_3236 = 0;
			iLocal_3191 = 0;
			iLocal_3235 = 0;
			iLocal_3233 = 0;
			iLocal_3230 = 0;
			iLocal_3545 = 0;
			if (!bLocal_3232)
			{
				GlobalFunc_79(800, 0);
			}
			if (GlobalFunc_115(Local_3303))
			{
				VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Local_3303);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_3303, 1);
			}
			if (GlobalFunc_115(iLocal_3137))
			{
				VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_3137);
			}
			if (iLocal_3252 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					func_333();
				}
			}
			iLocal_3262 = 1;
			break;
		
		case 1:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3189))
			{
				if (bLocal_3536 == 0)
				{
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_3189, 1);
				}
				else
				{
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_3189, 0);
				}
			}
			if (GlobalFunc_1536())
			{
				GlobalFunc_1100(1);
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3189) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3189) > 0.85f)
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_3140) && GlobalFunc_115(iLocal_3139))
				{
					TASK::TASK_HELI_MISSION(iLocal_3140, iLocal_3139, 0, 0, 123.3842f, -883.9507f, 200f, 4, 200f, -1f, -1f, -1, 100, -1082130432, 0);
					VEHICLE::SET_VEHICLE_SEARCHLIGHT(iLocal_3139, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_3140, 1);
					GlobalFunc_2297(&iLocal_3140, 1, 0, 1);
					GlobalFunc_190(&iLocal_3139);
				}
			}
			if (iLocal_3253 == 0)
			{
				if (iLocal_3281 > 0)
				{
					func_330();
				}
				if (iLocal_3252 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						func_333();
					}
				}
				if (STREAMING::HAS_ANIM_DICT_LOADED("rcmpaparazzo_3"))
				{
					if (GlobalFunc_115(Local_3303))
					{
						if (VEHICLE::IS_VEHICLE_STOPPED(Local_3303))
						{
							func_309(0);
							func_302();
						}
					}
				}
				if (iLocal_3252 == 1)
				{
					if (GlobalFunc_Is_Mission_Retry())
					{
						if ((GlobalFunc_IsPedNotInjuredOrDead(Local_3407) && GlobalFunc_IsPedNotInjuredOrDead(iLocal_3140)) && GlobalFunc_115(iLocal_3139))
						{
							if (!iLocal_3235)
							{
								TASK::TASK_HELI_MISSION(iLocal_3140, iLocal_3139, 0, Local_3407, 0f, 50f, 60f, 16, 0.1f, 60f, -1f, 60, 55, -1082130432, 0);
								iLocal_3235 = 1;
							}
						}
					}
					if (iLocal_3193 == 0)
					{
						if (GlobalFunc_111())
						{
							if (MISC::ARE_STRINGS_EQUAL(&Var0, "PAP3A_ARREST_8"))
							{
								GlobalFunc_5105();
								iLocal_3193 = 1;
							}
						}
					}
					else if (iLocal_3193 == 1)
					{
						if (!GlobalFunc_111())
						{
							if (!bLocal_3536)
							{
								if (iLocal_3231 == 0)
								{
									GlobalFunc_164("PAP3_POP", 7500, 1);
									iLocal_3231 = 1;
								}
							}
							iLocal_3193 = 2;
						}
					}
					else if (iLocal_3193 == 2)
					{
						if (!GlobalFunc_663("PAP3_POP", 0, 0))
						{
							if (!iLocal_3230)
							{
								if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_3407, 1) <= 50f)
								{
									if (GlobalFunc_10626(&uLocal_3612, "PAP3AAU", "PAP3A_ARREST", "PAP3A_ARREST_10", 8, 0, 0))
									{
										iLocal_3230 = 1;
										iLocal_3193 = 3;
										iLocal_3197 = 0;
										iLocal_3198 = 1;
									}
								}
								else if (GlobalFunc_10626(&uLocal_3612, "PAP3AAU", "PAP3A_ARREST", "PAP3A_ARREST_10", 8, 1, 0))
								{
									iLocal_3230 = 1;
									iLocal_3193 = 3;
									iLocal_3197 = 1;
									iLocal_3198 = 1;
								}
							}
						}
					}
				}
				if (HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON() && !GlobalFunc_663("PAP3_POP", 0, 0))
				{
					if (iLocal_3193 == 0 || iLocal_3193 == 3)
					{
						func_210();
					}
				}
				if ((iLocal_3281 > 0 && iLocal_3252 == 1) && iLocal_3230 == 1)
				{
					func_270();
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_3A_PHOTO_SCENE"))
					{
						if (!GlobalFunc_111())
						{
							AUDIO::STOP_AUDIO_SCENE("PAPARAZZO_3A_PHOTO_SCENE");
						}
					}
				}
				func_247();
				if (bLocal_3536 == 1)
				{
					if (iLocal_3537 == 0)
					{
						if (GlobalFunc_2791(50))
						{
							if (GlobalFunc_111() || GlobalFunc_663("PAP3_POP", 0, 0))
							{
								AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(PLAYER::PLAYER_PED_ID(), "PAP3A_AOAF", "FRANKLIN", "SPEECH_PARAMS_STANDARD", 0);
							}
							else
							{
								iLocal_3236 = 1;
							}
							GlobalFunc_6685(0);
							GlobalFunc_2793(0);
							GlobalFunc_2792(0);
							iLocal_3262 = 2;
							iLocal_3537 = 1;
						}
						else if (iLocal_3227 == 1)
						{
							if (iLocal_3225 == 0)
							{
								if (GlobalFunc_4455())
								{
									GlobalFunc_159("PAP3_HELP7", -1);
									iLocal_3225 = 1;
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_3227 == 1)
					{
						if (GlobalFunc_2791(50))
						{
							if (iLocal_3228 == 0)
							{
								iLocal_3186 = MISC::GET_GAME_TIMER();
								iLocal_3228 = 1;
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_3186 + 4000)
							{
								if (iLocal_3226 == 0)
								{
									if (iLocal_3190 == 0)
									{
										if (func_231(50, "PAP3A_TXTB1", 1, 0, 0, 0, 0, 1, 0, 1))
										{
											GlobalFunc_2794(50);
											iLocal_3227 = 0;
											iLocal_3190 = 1;
										}
									}
									else if (iLocal_3190 == 1)
									{
										if (func_231(50, "PAP3A_TXTB3", 1, 0, 0, 0, 0, 1, 0, 1))
										{
											GlobalFunc_2794(50);
											iLocal_3227 = 0;
											iLocal_3190 = 2;
										}
									}
									else if (iLocal_3190 == 2)
									{
										if (func_231(50, "PAP3A_TXTB2", 1, 0, 0, 0, 0, 1, 0, 1))
										{
											GlobalFunc_2794(50);
											iLocal_3227 = 0;
											iLocal_3190 = 3;
										}
									}
									else if (iLocal_3190 == 3)
									{
										if (func_231(50, "PAP3A_TXTB4", 1, 0, 0, 0, 0, 1, 0, 1))
										{
											GlobalFunc_2794(50);
											iLocal_3227 = 0;
											iLocal_3190 = 4;
										}
									}
								}
								else
								{
									if (iLocal_3191 == 0)
									{
										if (func_231(50, "PAP3A_TXT8", 1, 0, 0, 0, 0, 1, 0, 1))
										{
											GlobalFunc_2794(50);
											iLocal_3227 = 0;
											iLocal_3191 = 1;
										}
									}
									else if (iLocal_3191 == 1)
									{
										if (func_231(50, "PAP3A_TXT7", 1, 0, 0, 0, 0, 1, 0, 1))
										{
											GlobalFunc_2794(50);
											iLocal_3227 = 0;
											iLocal_3191 = 2;
										}
									}
									iLocal_3226 = 0;
								}
							}
						}
					}
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
					{
						if (GlobalFunc_2796())
						{
							GlobalFunc_2794(50);
							iLocal_3227 = 1;
							iLocal_3228 = 0;
							if (func_325() == 0)
							{
								if (iLocal_3200 < 20)
								{
									GlobalFunc_2793(1);
									GlobalFunc_2792(1);
									iLocal_3186 = MISC::GET_GAME_TIMER();
								}
							}
							else
							{
								GlobalFunc_2793(1);
								GlobalFunc_2792(1);
								GlobalFunc_846(&uLocal_3149);
								TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
								iLocal_3186 = MISC::GET_GAME_TIMER();
								bLocal_3536 = true;
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3189))
								{
									fLocal_3256 = PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3189);
									if (fLocal_3256 >= 0.638f)
									{
										iLocal_3221 = 1;
									}
								}
							}
						}
						else
						{
							iLocal_3201 = 0;
							iLocal_3200 = 0;
						}
					}
				}
			}
			else if (bLocal_3536 == 0)
			{
				iLocal_3262 = 2;
			}
			else if (iLocal_3537 == 0)
			{
				if (GlobalFunc_2791(50))
				{
					if (GlobalFunc_111() || GlobalFunc_663("PAP3_POP", 0, 0))
					{
						AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(PLAYER::PLAYER_PED_ID(), "PAP3A_AOAF", "FRANKLIN", "SPEECH_PARAMS_STANDARD", 0);
					}
					else
					{
						iLocal_3236 = 1;
					}
					GlobalFunc_6685(0);
					GlobalFunc_2793(0);
					GlobalFunc_2792(0);
					iLocal_3262 = 2;
					iLocal_3185 = MISC::GET_GAME_TIMER();
					iLocal_3537 = 1;
				}
				else if (MISC::GET_GAME_TIMER() > iLocal_3187 + 10000)
				{
					iLocal_3262 = 2;
				}
			}
			break;
		
		case 2:
			RECORDING::_0x293220DA1B46CEBC(10f, 6f, 1);
			iLocal_3532 = 0;
			iLocal_3539 = 0;
			if (iLocal_3537 == 1)
			{
				func_2(5);
			}
			else
			{
				func_1(1);
			}
			break;
	}
}

int func_325()//Position - 0x2BAD6
{
	if (iLocal_3200 < 20)
	{
		if (func_326(Local_3407))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(Local_3407) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_3407, 1), 1f))
			{
				if (!ENTITY::IS_ENTITY_OCCLUDED(Local_3407))
				{
					if (CAM::GET_FOCUS_PED_ON_SCREEN(100f, 31086, 0.42f, 0.26f, 0.01f, 50f, 0.2f, 31086, 24818) == Local_3407 || CAM::GET_FOCUS_PED_ON_SCREEN(100f, 31086, 0.42f, 0.26f, 0.01f, 50f, 0.2f, 31086, 24818) == Local_3370[0 /*9*/])
					{
						if (!GlobalFunc_155(Local_3407, PLAYER::PLAYER_PED_ID(), 50f))
						{
							iLocal_3226 = 1;
						}
						else
						{
							iLocal_3201++;
						}
					}
				}
			}
		}
		iLocal_3200++;
	}
	if (iLocal_3201 > 5)
	{
		return 1;
	}
	return 0;
}

int func_326(int iParam0)//Position - 0x2BBBB
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	struct<3> Var5;
	
	fVar0 = 0.2f;
	fVar1 = 0.8f;
	if (GlobalFunc_IsPedNotInjuredOrDead(iParam0))
	{
		iVar2 = PED::GET_PED_BONE_INDEX(iParam0, 23553);
		if (iVar2 != -1)
		{
			Var5 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, iVar2) };
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var5, &fVar3, &fVar4);
			if (((fVar3 > fVar0 && fVar3 < fVar1) && fVar4 > fVar0) && fVar4 < fVar1)
			{
				return 1;
			}
		}
	}
	return 0;
}




void func_330()//Position - 0x2BC97
{
	if (iLocal_3541 == 0)
	{
		switch (iLocal_3279)
		{
			case 0:
				iLocal_3209 = 0;
				iLocal_3210 = 0;
				if (!GlobalFunc_116(0))
				{
					if (!GlobalFunc_74("PAP3_HELP1"))
					{
						if (iLocal_3208 == 0)
						{
							GlobalFunc_159("PAP3_HELP1", -1);
							iLocal_3208 = 1;
						}
					}
				}
				else
				{
					iLocal_3208 = 0;
					iLocal_3279++;
				}
				break;
			
			case 1:
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) == 0)
				{
					if (!GlobalFunc_74("PAP3_HELP2"))
					{
						if (iLocal_3209 == 0)
						{
							GlobalFunc_159("PAP3_HELP2", -1);
							iLocal_3209 = 1;
						}
					}
				}
				else
				{
					if (GlobalFunc_74("PAP3_HELP2"))
					{
						HUD::CLEAR_HELP(1);
					}
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
					{
						iLocal_3279++;
					}
				}
				if (!GlobalFunc_116(0))
				{
					iLocal_3279 = 0;
				}
				break;
			
			case 2:
				if (bLocal_3536 == 1)
				{
					iLocal_3279++;
				}
				else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) == 0)
				{
					iLocal_3209 = 0;
					iLocal_3210 = 0;
					iLocal_3279 = 1;
				}
				else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
				{
					if (iLocal_3210 == 0)
					{
						iLocal_3210 = 1;
					}
				}
				else if (!GlobalFunc_116(0))
				{
					iLocal_3279 = 0;
				}
				break;
			
			case 3:
				break;
		}
	}
	else
	{
		if (bLocal_3536 == 0)
		{
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) == 0)
			{
				if (!GlobalFunc_74("PAP3_HELP6"))
				{
					if (iLocal_3219 == 0)
					{
						GlobalFunc_159("PAP3_HELP6", -1);
						iLocal_3219 = 1;
					}
				}
			}
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
		{
			if (GlobalFunc_74("PAP3_HELP6"))
			{
				HUD::CLEAR_HELP(1);
			}
		}
	}
}



void func_333()//Position - 0x2BE49
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) >= 28f)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_3553, 47f, 47f, 47f, 0, 1, 0))
			{
				if (iLocal_3217 == 0)
				{
					GlobalFunc_530(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 37f, 1, 1056964608, 0, 1);
					iLocal_3217 = 1;
				}
				else if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) < 0.1f)
				{
					iLocal_3234 = 1;
				}
			}
		}
		else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_3553, 40f, 40f, 40f, 0, 1, 0))
		{
			if (iLocal_3217 == 0)
			{
				GlobalFunc_530(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 30f, 1, 1056964608, 0, 1);
				iLocal_3217 = 1;
			}
			else if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) < 0.1f)
			{
				iLocal_3234 = 1;
			}
		}
	}
}








void func_341()//Position - 0x2C3A0
{
	PATHFIND::SET_ROADS_IN_AREA(318.94f, -411.6963f, 38.0267f, 421.5246f, -363.0107f, 52.0853f, 0, 1);
	PATHFIND::SET_ROADS_IN_AREA(796.4662f, -68.4078f, 79.522f, 974.3044f, -152.9081f, 72.6015f, 0, 1);
	PATHFIND::SET_ROADS_IN_AREA(683.3696f, 38.3284f, 83.277f, 707.9796f, -22.9872f, 82.654f, 0, 1);
	PATHFIND::SET_ROADS_IN_AREA(812.2689f, -40.7279f, 79.4878f, 858.4236f, -119.0339f, 78.3599f, 0, 1);
}





























































void func_402()//Position - 0x315D3
{
	if (bLocal_3540)
	{
		iLocal_3194++;
		if (ENTITY::IS_ENTITY_DEAD(Local_3407) || PED::IS_PED_INJURED(Local_3407))
		{
			func_1(3);
			return;
		}
		else if (iLocal_3194 > 30)
		{
			func_1(5);
			return;
		}
	}
	switch (iLocal_3262)
	{
		case 0:
			PATHFIND::SET_ROADS_IN_AREA(318.94f, -411.6963f, 38.0267f, 421.5246f, -363.0107f, 52.0853f, 0, 1);
			if (iLocal_3532 == 0)
			{
				if (!GlobalFunc_Is_Mission_Retry())
				{
				}
				else if (GlobalFunc_Get_Mission_Fail_Checkpoint() < 2)
				{
				}
				iLocal_3532 = 1;
			}
			func_341();
			iLocal_3262 = 1;
			break;
		
		case 1:
			func_270();
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				func_333();
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_3553, 47f, 47f, 47f, 0, 1, 0))
			{
				RECORDING::_0x293220DA1B46CEBC(4f, 5f, 0);
				iLocal_3262 = 2;
			}
			break;
		
		case 2:
			HUD::CLEAR_PRINTS();
			STREAMING::REQUEST_ANIM_DICT("rcmpaparazzo_3");
			GlobalFunc_846(&uLocal_3150);
			iLocal_3532 = 0;
			func_2(4);
			break;
	}
}

void func_403()//Position - 0x316E5
{
	if (bLocal_3540)
	{
		iLocal_3194++;
		if (ENTITY::IS_ENTITY_DEAD(Local_3407) || PED::IS_PED_INJURED(Local_3407))
		{
			func_1(3);
			return;
		}
		else if (iLocal_3194 > 30)
		{
			func_1(5);
			return;
		}
	}
	switch (iLocal_3262)
	{
		case 0:
			iLocal_3237 = 0;
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("PAP3_START");
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("PAP3_START_FORA");
				iLocal_3237 = 1;
				iLocal_3238 = MISC::GET_GAME_TIMER();
			}
			if (iLocal_3532 == 0)
			{
				if (!GlobalFunc_Is_Mission_Retry())
				{
					if (GlobalFunc_1993())
					{
						GlobalFunc_164("PAP3_03", 7500, 1);
						iLocal_3532 = 1;
					}
				}
				else if (GlobalFunc_Get_Mission_Fail_Checkpoint() < 1)
				{
					if (GlobalFunc_1993())
					{
						GlobalFunc_164("PAP3_03", 7500, 1);
						iLocal_3532 = 1;
					}
				}
			}
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
			iLocal_3222 = 0;
			iLocal_3220 = 0;
			func_435();
			GlobalFunc_79(800, 0);
			STREAMING::REQUEST_MODEL(joaat("polmav"));
			iLocal_3255 = 0;
			iLocal_3212 = 0;
			iLocal_3239 = 0;
			iLocal_3192 = 0;
			fLocal_3259 = 1f;
			iLocal_3188 = 0;
			uLocal_3184 = uLocal_3184;
			iLocal_3262 = 1;
			break;
		
		case 1:
			if (GlobalFunc_115(Local_3303))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3303))
				{
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_3A_POLICE_CHASE"))
					{
						AUDIO::START_AUDIO_SCENE("PAPARAZZO_3A_POLICE_CHASE");
					}
					fLocal_3257 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3303);
					func_434();
					if (fLocal_3257 > 15000f)
					{
						if (!iLocal_3222)
						{
							if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_3303, 100f))
							{
								iLocal_3222 = 1;
							}
						}
					}
					if (GlobalFunc_115(Local_3284[1 /*6*/]))
					{
						if (iLocal_3239 == 0)
						{
							if (fLocal_3257 >= 48408.34f)
							{
								ENTITY::SET_ENTITY_INVINCIBLE(Local_3284[1 /*6*/], 0);
								VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_3284[1 /*6*/], 5f);
								AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "POLICE_CRASH", Local_3284[1 /*6*/], "PAPARAZZO_03A", 0, 0);
								RECORDING::_0x48621C9FCA3EBD28(0);
								iLocal_3239 = 1;
							}
						}
						else if (iLocal_3239 == 1)
						{
							if (fLocal_3257 >= 49675.33f)
							{
								VEHICLE::SET_VEHICLE_DAMAGE(Local_3284[1 /*6*/], ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_3284[1 /*6*/], 21), 100f, 600f, 0);
								VEHICLE::SMASH_VEHICLE_WINDOW(Local_3284[1 /*6*/], 0);
								VEHICLE::SMASH_VEHICLE_WINDOW(Local_3284[1 /*6*/], 1);
								VEHICLE::SET_VEHICLE_SIREN(Local_3284[1 /*6*/], 0);
								iLocal_3239 = 2;
							}
						}
						else if (iLocal_3239 == 2)
						{
							if (fLocal_3257 >= 51333.24f)
							{
								VEHICLE::SET_VEHICLE_DAMAGE(Local_3284[1 /*6*/], ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_3284[1 /*6*/], 73), 100f, 200f, 0);
								RECORDING::_0x81CBAE94390F9F89();
								iLocal_3239 = 3;
							}
						}
					}
				}
			}
			if (iLocal_3237 == 1 && MISC::GET_GAME_TIMER() > iLocal_3238 + 6000)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("PAP3_START");
				iLocal_3237 = 0;
			}
			if (iLocal_3532 == 0)
			{
				if (!GlobalFunc_Is_Mission_Retry())
				{
					if (GlobalFunc_1993())
					{
						GlobalFunc_164("PAP3_03", 7500, 1);
						iLocal_3532 = 1;
					}
				}
				else if (GlobalFunc_Get_Mission_Fail_Checkpoint() < 1)
				{
					if (GlobalFunc_1993())
					{
						GlobalFunc_164("PAP3_03", 7500, 1);
						iLocal_3532 = 1;
					}
				}
			}
			func_433();
			if (HUD::DOES_BLIP_EXIST(uLocal_3150))
			{
				GlobalFunc_2216(uLocal_3150, Local_3303, 220f, 0.95f, 0);
			}
			if (iLocal_3791 == 1)
			{
				func_430();
			}
			if (GlobalFunc_Is_Mission_Retry())
			{
				if (GlobalFunc_Get_Mission_Fail_Checkpoint() > 0)
				{
					if (iLocal_3255 == 0)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_3254 + 2000)
						{
							func_421(0, 1, 1);
							iLocal_3255 = 1;
						}
					}
				}
			}
			if (iLocal_3212 == 0)
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_3407))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(Local_3407, Local_3550, 220f, 220f, 220f, 0, 1, 0))
					{
						if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_3407, 100f))
						{
							iLocal_3212 = 1;
						}
					}
				}
			}
			func_420();
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				func_333();
			}
			func_435();
			func_270();
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_3370[0 /*9*/]))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_3370[0 /*9*/], 1);
			}
			if (!iLocal_3220)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					iLocal_3220 = 1;
				}
			}
			break;
		
		case 2:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iLocal_3137 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::MODIFY_VEHICLE_TOP_SPEED(iLocal_3137, 0f);
			}
			GlobalFunc_190(&(Local_3284[1 /*6*/]));
			GlobalFunc_2297(&(Local_3370[2 /*9*/]), 1, 0, 1);
			HUD::CLEAR_PRINTS();
			STREAMING::REQUEST_ANIM_DICT("rcmpaparazzo_3");
			iLocal_3532 = 0;
			func_404(0, 1);
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_3553, 47f, 47f, 47f, 0, 1, 0))
			{
				func_2(3);
			}
			else
			{
				func_2(4);
			}
			break;
	}
}

void func_404(bool bParam0, bool bParam1)//Position - 0x31B36
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_2556))
	{
		iLocal_94 = 0;
		GlobalFunc_2214();
		PED::REMOVE_RELATIONSHIP_GROUP(uLocal_2572);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
			PED::SET_CREATE_RANDOM_COPS(1);
		}
		if (bLocal_110)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_418());
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2213());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2212());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2211());
		if (!CAM::IS_SCREEN_FADED_OUT() && !bParam0)
		{
			func_414();
			func_413();
			func_410();
		}
		else
		{
			func_406();
			func_405();
		}
		if (bParam1)
		{
			GlobalFunc_9132(0);
		}
	}
}

void func_405()//Position - 0x31BF2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 150)
	{
		iLocal_2804[iVar0] = 0;
		Local_1851[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_112[iVar0] = 0f;
		fLocal_263[iVar0] = 0f;
		fLocal_414[iVar0] = 0f;
		fLocal_565[iVar0] = 0f;
		iLocal_1252[iVar0] = 0;
		fLocal_716[iVar0] = 0f;
		iLocal_1403[iVar0] = 0;
		iLocal_2573[iVar0] = 0;
		iLocal_1554[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iLocal_2955[iVar0] = 0;
		iVar0++;
	}
	iLocal_1834 = 0;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iLocal_2964[iVar0] = 0;
		Local_2302[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_1027[iVar0] = 0f;
		fLocal_1078[iVar0] = 0f;
		fLocal_1129[iVar0] = 0f;
		fLocal_1180[iVar0] = 0f;
		iLocal_1783[iVar0] = 0;
		iLocal_2724[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iLocal_3041[iVar0] = 0;
		iVar0++;
	}
	iLocal_1836 = 0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		iLocal_3015[iVar0] = 0;
		Local_2453[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_871[iVar0] = 0f;
		fLocal_897[iVar0] = 0f;
		fLocal_923[iVar0] = 0f;
		fLocal_949[iVar0] = 0f;
		iLocal_1705[iVar0] = 0;
		fLocal_975[iVar0] = 0f;
		iLocal_1731[iVar0] = 0;
		iLocal_2775[iVar0] = 0;
		iLocal_1757[iVar0] = 0;
		iVar0++;
	}
	iLocal_1835 = 0;
	iLocal_1838 = 0;
	iLocal_1841 = 0;
	iLocal_1842 = 0;
	iLocal_1843 = 0;
}

void func_406()//Position - 0x31D7F
{
	func_409();
	func_408();
	func_407();
}

void func_407()//Position - 0x31D93
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3015[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3015[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3015[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3015[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_3015[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_3015[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_3015[iVar0]));
			}
		}
		iLocal_1731[iVar0] = 0;
		if (!bLocal_90 && !bLocal_103)
		{
			if (iLocal_1705[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1705[iVar0], &cLocal_2556);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (!iLocal_2775[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2775[iVar0]);
		}
		iVar0++;
	}
}

void func_408()//Position - 0x31E89
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2964[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_2964[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_2964[iVar0]));
			}
		}
		iLocal_1783[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (!iLocal_2724[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2724[iVar0]);
		}
		iVar0++;
	}
	iLocal_1839 = 0;
	iLocal_1836 = 0;
}

void func_409()//Position - 0x31F06
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2804[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2804[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2804[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2804[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2804[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_2804[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_2804[iVar0]));
			}
		}
		if (!bLocal_90 && !bLocal_103)
		{
			if (iLocal_1252[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1252[iVar0], &cLocal_2556);
			}
		}
		iLocal_1403[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (!iLocal_2573[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2573[iVar0]);
		}
		iVar0++;
	}
	iLocal_1838 = 0;
	iLocal_1834 = 0;
}

void func_410()//Position - 0x32004
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3015[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3015[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3015[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3015[iVar0]);
				}
			}
			func_412(iLocal_3015[iVar0]);
			GlobalFunc_2210(iLocal_3015[iVar0]);
		}
		iLocal_1731[iVar0] = 0;
		iLocal_1757[iVar0] = 0;
		if (!bLocal_90 && !bLocal_103)
		{
			if (iLocal_1705[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1705[iVar0], &cLocal_2556);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (!iLocal_2775[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2775[iVar0]);
		}
		iVar0++;
	}
	iLocal_1840 = 0;
}


void func_412(int iParam0)//Position - 0x320E8
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
				if (bLocal_111)
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 65536, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, 0);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 6, 0);
			}
		}
	}
}

void func_413()//Position - 0x32181
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2964[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2964[iVar0]))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_2964[iVar0], 1, 0);
			}
			GlobalFunc_2210(iLocal_2964[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (!iLocal_2724[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2724[iVar0]);
		}
		iVar0++;
	}
	iLocal_1839 = 0;
	iLocal_1836 = 0;
}

void func_414()//Position - 0x32204
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2804[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2804[iVar0]))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_2804[iVar0], 1, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2804[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2804[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2804[iVar0]);
				}
			}
			func_412(iLocal_2804[iVar0]);
			GlobalFunc_2210(iLocal_2804[iVar0]);
		}
		iLocal_1403[iVar0] = 0;
		iLocal_1554[iVar0] = 0;
		if (!bLocal_90 && !bLocal_103)
		{
			if (iLocal_1252[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1252[iVar0], &cLocal_2556);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (!iLocal_2573[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2573[iVar0]);
		}
		iVar0++;
	}
	iLocal_1838 = 0;
	iLocal_1834 = 0;
}




int func_418()//Position - 0x32318
{
	if (iLocal_2801 == 0)
	{
		return joaat("a_m_y_business_01");
	}
	return iLocal_2801;
}


void func_420()//Position - 0x3235F
{
	switch (iLocal_3280)
	{
		case 0:
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_3407))
			{
				if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_3407, 150f) && !ENTITY::IS_ENTITY_OCCLUDED(Local_3407))
				{
					GlobalFunc_173(&uLocal_3612, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					if (!GlobalFunc_663("PAP3_03", 0, 0))
					{
						if (GlobalFunc_10630(&uLocal_3612, "PAP3AAU", "PAP3A_FRANK", "PAP3A_FRANK_1", 7, 0, 0))
						{
							GlobalFunc_Checkpoint8(1, "At Poppy location", 0, 0, 0, 1);
							RECORDING::_0x293220DA1B46CEBC(2f, 4f, 0);
							iLocal_3280++;
						}
					}
					else if (GlobalFunc_10630(&uLocal_3612, "PAP3AAU", "PAP3A_FRANK", "PAP3A_FRANK_1", 7, 1, 0))
					{
						GlobalFunc_Checkpoint8(1, "At Poppy location", 0, 0, 0, 1);
						RECORDING::_0x293220DA1B46CEBC(2f, 4f, 0);
						iLocal_3280++;
					}
				}
				else if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3303))
				{
					if (fLocal_3257 > 30000f)
					{
						GlobalFunc_Checkpoint8(1, "At Poppy location", 0, 0, 0, 1);
						iLocal_3280++;
					}
				}
			}
			break;
		
		case 1:
			iLocal_3280++;
			break;
		
		case 2:
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_3407))
			{
				if (fLocal_3257 >= 83760.77f)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_3407, 70f, 70f, 70f, 0, 1, 0))
					{
						GlobalFunc_173(&uLocal_3612, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
						if (!GlobalFunc_663("PAP3_03", 0, 0))
						{
							if (GlobalFunc_10630(&uLocal_3612, "PAP3AAU", "PAP3A_FRANK", "PAP3A_FRANK_3", 7, 0, 0))
							{
								iLocal_3280++;
							}
						}
						else if (GlobalFunc_10630(&uLocal_3612, "PAP3AAU", "PAP3A_FRANK", "PAP3A_FRANK_3", 7, 1, 0))
						{
							iLocal_3280++;
						}
					}
					else
					{
						iLocal_3280++;
					}
				}
			}
			break;
		
		case 3:
			if (ENTITY::IS_ENTITY_AT_COORD(Local_3407, 512.8621f, -187.7797f, 52.1896f, 30f, 30f, 30f, 0, 1, 0))
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_3370[0 /*9*/]))
				{
					GlobalFunc_173(&uLocal_3612, 7, Local_3370[0 /*9*/], "Paparazzo3ACop3", 0, 1);
					if (!GlobalFunc_663("PAP3_03", 0, 0))
					{
						if (GlobalFunc_10618(&uLocal_3612, "PAP3AAU", "PAP3A_COP7", 8, 0, 0, 0))
						{
							iLocal_3280++;
						}
					}
					else if (GlobalFunc_10618(&uLocal_3612, "PAP3AAU", "PAP3A_COP7", 8, 1, 0, 0))
					{
						iLocal_3280++;
					}
				}
			}
			break;
		
		case 4:
			if (!GlobalFunc_111())
			{
				GlobalFunc_200(&uLocal_3612, 7);
			}
			break;
	}
}

void func_421(int iParam0, int iParam1, int iParam2)//Position - 0x325CE
{
	func_422(0, 0, iParam2, 1);
	if (iParam0 == 1)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (iParam1 == 1)
	{
		GlobalFunc_79(500, 0);
	}
}

void func_422(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x32602
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
		if ((iLocal_35 != 0 && iLocal_35 != joaat("object")) && iLocal_35 != joaat("gadget_parachute"))
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_35, 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_35, 0);
				}
			}
		}
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}








void func_430()//Position - 0x328AC
{
	if (iLocal_3792 == 0)
	{
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Pap3aRoll"))
		{
			if (GlobalFunc_4947(iLocal_3137))
			{
				if (iLocal_3793 == -1)
				{
					if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3137))
					{
						MISC::CLEAR_AREA(377.516f, 169.3637f, 102.069f, 70f, 1, 0, 0, 0);
						if (iLocal_3224 == 0)
						{
							GlobalFunc_5705(iLocal_3137, 364.0056f, 129.8543f, 102.1026f, 341.4834f, 0, 1);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3137);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_3137, 21.84f);
							TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(PLAYER::PLAYER_PED_ID(), iLocal_3137, "Pap3aRoll", 262144, 0, 28, -1, -1082130432, 0, 1073741824);
						}
						else
						{
							GlobalFunc_5705(iLocal_3137, 373.0085f, 169.6102f, 122.1141f, 341.0669f, 0, 1);
							VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_3137);
						}
					}
					iLocal_3793 = MISC::GET_GAME_TIMER();
				}
				else if ((((((!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3137) || PAD::IS_CONTROL_JUST_PRESSED(0, 71)) || PAD::IS_CONTROL_JUST_PRESSED(0, 72)) || PAD::IS_CONTROL_JUST_PRESSED(0, 278)) || PAD::IS_CONTROL_JUST_PRESSED(0, 279)) || VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_3137, -1)) || (MISC::GET_GAME_TIMER() - iLocal_3793) > 3000)
				{
					if (iLocal_3224 == 0)
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					}
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_3137);
					iLocal_3792 = 1;
				}
			}
		}
		else
		{
			TASK::REQUEST_WAYPOINT_RECORDING("Pap3aRoll");
		}
	}
}



void func_433()//Position - 0x32BCE
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3139))
	{
		if (!STREAMING::HAS_MODEL_LOADED(joaat("polmav")))
		{
			STREAMING::REQUEST_MODEL(joaat("polmav"));
		}
		else
		{
			iLocal_3139 = VEHICLE::CREATE_VEHICLE(joaat("polmav"), 351.3166f, -589.8016f, 73.1664f, 336.3177f, 1, 1);
			iLocal_3140 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3139, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
			VEHICLE::SET_VEHICLE_LIVERY(iLocal_3139, 0);
			VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_3139);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3139, 1, 1);
			VEHICLE::SET_VEHICLE_SEARCHLIGHT(iLocal_3139, 1, 0);
			VEHICLE::SET_HELI_TURBULENCE_SCALAR(iLocal_3139, 0.2f);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_3139, 1);
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_3407))
			{
				TASK::TASK_HELI_MISSION(iLocal_3140, iLocal_3139, 0, Local_3407, 0f, 50f, 60f, 16, 30f, 60f, -1f, 60, 55, -1082130432, 0);
			}
		}
	}
}

void func_434()//Position - 0x32C9D
{
	switch (iLocal_3192)
	{
		case 0:
			if (fLocal_3257 > 60000f)
			{
				STREAMING::REQUEST_MODEL(joaat("stretch"));
				STREAMING::REQUEST_MODEL(joaat("s_m_y_valet_01"));
				iLocal_3192 = 1;
			}
			break;
		
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(joaat("stretch")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_valet_01")))
			{
				iLocal_3138 = VEHICLE::CREATE_VEHICLE(joaat("stretch"), 922.4766f, 45.2672f, 79.7644f, 329.2225f, 1, 1);
				iLocal_3141 = PED::CREATE_PED(26, joaat("s_m_y_valet_01"), 929.0692f, 51.5874f, 79.9063f, 57.966f, 1, 1);
				iLocal_3192 = 2;
			}
			break;
		
		case 2:
			if (GlobalFunc_115(iLocal_3141))
			{
				if (GlobalFunc_115(Local_3407))
				{
					if (GlobalFunc_155(iLocal_3141, Local_3407, 100f))
					{
						uLocal_3184 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(96, Local_3407, -1082130432);
						PED::SET_PED_CAN_EVASIVE_DIVE(iLocal_3141, 1);
						RECORDING::_0x293220DA1B46CEBC(3f, 4f, 0);
						iLocal_3192 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (GlobalFunc_115(iLocal_3141))
			{
				if (GlobalFunc_115(Local_3407))
				{
					if (GlobalFunc_155(iLocal_3141, Local_3407, 30f))
					{
						TASK::TASK_SHOCKING_EVENT_REACT(iLocal_3141, uLocal_3184);
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_3141, "GENERIC_SHOCKED_HIGH", "SPEECH_PARAMS_STANDARD", 1);
						iLocal_3192 = 4;
					}
				}
			}
			break;
		
		case 4:
			if (GlobalFunc_115(iLocal_3141))
			{
				if (GlobalFunc_115(Local_3407))
				{
					if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_3141))
					{
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_3141, "GENERIC_SHOCKED_HIGH", "SPEECH_PARAMS_STANDARD", 1);
					}
					if (fLocal_3257 > 90000f)
					{
						iLocal_3192 = 5;
					}
				}
			}
			break;
		
		case 5:
			GlobalFunc_2297(&iLocal_3141, 1, 0, 1);
			GlobalFunc_190(&iLocal_3138);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("stretch"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_valet_01"));
			break;
	}
}

void func_435()//Position - 0x32E59
{
	switch (iLocal_3263)
	{
		case 0:
			fLocal_3258 = 0.3f;
			func_468("PAP3A2", 300, 0, 1);
			func_467();
			func_466();
			iLocal_3263 = 1;
			break;
		
		case 1:
			if (GlobalFunc_4947(Local_3303))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3303))
				{
					iLocal_3264 = 1;
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3303, 300, "PAP3A2", 1);
					if (iLocal_3544 == 0)
					{
						if (!GlobalFunc_Is_Mission_Retry())
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 350.428f, 143.8326f, 100.8552f, 271.7272f, 172.9995f, 117.8835f, 52.5f, 0, 1, 0))
								{
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_3303, 5000f);
								}
								else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 186.1659f, 299.0473f, 86.18623f, 653.0208f, 137.6192f, 179.5612f, 133.5f, 0, 1, 0) && GlobalFunc_1575(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 339.0575f, 90f))
								{
									if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_3246, 1) < GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_3249, 1))
									{
										VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_3303, 11000f);
									}
									else
									{
										VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_3303, 8000f);
									}
								}
								else
								{
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_3303, 7000f);
								}
							}
							else
							{
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_3303, 2000f);
							}
						}
						else
						{
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_3303, 4000f);
						}
					}
					else
					{
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_3303, 7600f);
					}
					ENTITY::SET_ENTITY_INVINCIBLE(Local_3303, 1);
				}
				else if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3303) < 115000f)
				{
					if (iLocal_3538 == 0)
					{
					}
					func_461();
					if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3303) >= 2000f)
						{
							fLocal_1244 = 300f;
							fLocal_1243 = 50f;
						}
					}
					bLocal_97 = false;
					bLocal_98 = true;
					func_466();
					func_436(Local_3303, fLocal_3546);
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3303) >= 113369f)
					{
						if (iLocal_3216 == 0)
						{
							ENTITY::SET_ENTITY_INVINCIBLE(Local_3303, 0);
							VEHICLE::SET_VEHICLE_DAMAGE(Local_3303, 0f, 2f, 0f, 400f, 200f, 1);
							RECORDING::_0x293220DA1B46CEBC(3f, 2f, 0);
							iLocal_3216 = 1;
						}
						if (iLocal_3215 == 0)
						{
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "CRASH", Local_3303, "PAPARAZZO_03A", 0, 0);
							iLocal_3215 = 1;
						}
						if (iLocal_3234)
						{
							if (AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING())
							{
								AUDIO::TRIGGER_MUSIC_EVENT("PAP3_STOP");
							}
							iLocal_3263 = 2;
						}
					}
				}
				else
				{
					if (AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING())
					{
						AUDIO::TRIGGER_MUSIC_EVENT("PAP3_STOP");
					}
					iLocal_3263 = 2;
				}
			}
			break;
		
		case 2:
			iLocal_3538 = 1;
			if (GlobalFunc_115(Local_3303))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(Local_3303, 10f, -1, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_3303, 301f);
				iLocal_3262 = 2;
			}
			break;
	}
}

void func_436(int iParam0, float fParam1)//Position - 0x33109
{
	float fVar0;
	struct<3> Var1;
	int iVar4;
	
	fVar0 = MISC::GET_FRAME_TIME();
	fVar0 = (fVar0 * 1000f);
	bLocal_109 = false;
	if (!bLocal_91)
	{
		if (bLocal_90)
		{
			GlobalFunc_2512();
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				MISC::CLEAR_AREA(Var1, 1000f, 1, 0, 0, 0);
			}
			bLocal_91 = true;
		}
	}
	else if (!bLocal_90)
	{
		GlobalFunc_2214();
		bLocal_91 = false;
	}
	if (bLocal_90)
	{
		fParam1 = 1f;
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (!bLocal_84)
	{
		if (iLocal_79)
		{
			fLocal_1236 = 0f;
		}
		else
		{
			fLocal_1236 = 1f;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (GlobalFunc_5657(PLAYER::PLAYER_PED_ID(), iParam0))
					{
						iLocal_89 = 1;
					}
					else
					{
						iLocal_89 = 0;
					}
				}
				fLocal_1233 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
				VEHICLE::SET_PLAYBACK_SPEED(iParam0, ((fParam1 * fLocal_1234) * fLocal_1236));
				if (bLocal_88)
				{
					func_458(iParam0, fLocal_1233);
					func_457(iParam0, fLocal_1243);
					if (fLocal_1238 > 1000f)
					{
						if (iLocal_1850 == 0)
						{
							func_456(iParam0, fLocal_1243);
						}
						fVar0 = ((fLocal_1233 + 4000f) + (SYSTEM::TO_FLOAT(iLocal_1850) * 2000f));
						func_455(iParam0, fVar0, fLocal_1237);
						iLocal_1850++;
						if (iLocal_1850 > 2)
						{
							fLocal_1238 = 0f;
						}
					}
					else
					{
						iLocal_1850 = 0;
						fLocal_1238 = (fLocal_1238 + (MISC::GET_FRAME_TIME() * 1000f));
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
		if (fLocal_1233 == 0f || CAM::IS_SCREEN_FADED_OUT())
		{
			iVar4 = 1;
		}
		if (iVar4 && !bLocal_96)
		{
			if (!iLocal_78)
			{
				func_452(iParam0, ((fParam1 * fLocal_1234) * fLocal_1236), 0);
				if (!iLocal_99)
				{
				}
				iLocal_99 = 0;
			}
			if (bLocal_81)
			{
				func_451(iParam0);
			}
			if (!iLocal_78)
			{
				func_439(iParam0, ((fParam1 * fLocal_1234) * fLocal_1236), 0);
			}
		}
		if (iLocal_86)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_3048 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					Local_2529 = { ENTITY::GET_ENTITY_COORDS(iLocal_3048, 1) };
					ENTITY::GET_ENTITY_QUATERNION(iLocal_3048, &uLocal_867, &uLocal_868, &uLocal_869, &uLocal_870);
				}
			}
			iLocal_86 = 0;
		}
		if (iLocal_85)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3048))
			{
				GlobalFunc_2210(iLocal_3049);
				iLocal_3049 = iLocal_3048;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3049, 0))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_3049, Local_2529, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_3049, uLocal_867, uLocal_868, uLocal_869, uLocal_870);
			}
			fLocal_1232 = fLocal_1235;
			iLocal_78 = 1;
			iLocal_85 = 0;
		}
		if (iLocal_78)
		{
			while (!func_437(&iParam0, fLocal_1232))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_79 = 1;
		}
		if (iLocal_92)
		{
			iLocal_92 = 0;
		}
	}
}

int func_437(int iParam0, float fParam1)//Position - 0x333A4
{
	if (!iLocal_93)
	{
		iLocal_78 = 1;
		func_406();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
				VEHICLE::SET_VEHICLE_FIXED(*iParam0);
			}
			if (!iLocal_1837 == -1)
			{
				while (!func_438(iParam0, iLocal_1837, fParam1, 1, 0, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!bLocal_83)
				{
					iLocal_79 = 1;
					fLocal_1236 = 0f;
					iLocal_1838 = 0;
					iLocal_1840 = 0;
					iLocal_1839 = 0;
					iLocal_1834 = 0;
					iLocal_1835 = 0;
					iLocal_1836 = 0;
					iLocal_1841 = 0;
					iLocal_1842 = 0;
					iLocal_1843 = 0;
				}
			}
		}
		iLocal_93 = 1;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(*iParam0, ((1f * fLocal_1234) * fLocal_1236));
				func_438(iParam0, iLocal_1837, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_1233 = fParam1;
		iLocal_1844 = 0;
		iLocal_1847 = 0;
		fLocal_1248 = 0f;
		fLocal_1247 = 0f;
		func_439(*iParam0, ((1f * fLocal_1234) * fLocal_1236), 1);
		func_452(*iParam0, ((1f * fLocal_1234) * fLocal_1236), 1);
		func_451(*iParam0);
		if ((iLocal_1841 == 0 && iLocal_1842 == 0) && iLocal_1843 == 0)
		{
			iLocal_79 = 0;
			iLocal_78 = 0;
			iLocal_93 = 0;
			return 1;
		}
	}
	return 0;
}

int func_438(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x334D6
{
	float fVar0;
	
	if (iParam1 > 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_2556);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, &cLocal_2556))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 0);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_2556, 1092616192, 786603);
					}
					else
					{
						if (iParam1 != iLocal_1845 && iParam1 != iLocal_1846)
						{
							if (bParam7)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_2556, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_2556, 1 | 4, 0, 786603);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_2556, 1);
							}
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_2556, 1);
						}
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, fParam2);
						if (bParam5)
						{
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, 1);
						}
						return 1;
					}
				}
				else if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(*uParam0) == VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, &cLocal_2556))
				{
					fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(*uParam0);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*uParam0);
						VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_2556);
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
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_2556, 1092616192, 786603);
					}
					else if (iParam1 != iLocal_1845 && iParam1 != iLocal_1846)
					{
						if (bParam7)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_2556, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_2556, 1 | 4, 0, 786603);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_2556, 1);
						}
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_2556, 1);
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

void func_439(int iParam0, float fParam1, bool bParam2)//Position - 0x336BC
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
		iVar0 = iLocal_1840;
		while (iVar0 < 25)
		{
			if (iLocal_1731[iVar0] != 99)
			{
				if (iLocal_1731[iVar0] == 0)
				{
					if (iLocal_1705[iVar0] > 0)
					{
						if (!iLocal_78)
						{
							if (fLocal_1233 > (fLocal_975[iVar0] - (7000f * fParam1)))
							{
								if (GlobalFunc_2222(iLocal_2775[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_1757[iVar0]), 0);
								}
								else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2775[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_1757[iVar0]), 2);
								}
								MISC::CLEAR_BIT(&(iLocal_1757[iVar0]), 1);
								iLocal_1731[iVar0]++;
								iLocal_1842++;
							}
						}
						else
						{
							fVar12 = (fLocal_1233 - fLocal_975[iVar0]);
							fVar12 = (fVar12 * fLocal_1001[iVar0]);
							if (fVar12 >= 0f)
							{
								if (fVar12 < func_449(iLocal_1705[iVar0]))
								{
									if (GlobalFunc_2222(iLocal_2775[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1757[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2775[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1757[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_1757[iVar0]), 1);
									iLocal_1731[iVar0]++;
									iLocal_1842++;
								}
								else
								{
									iLocal_1731[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_1731[iVar0] = 99;
					}
				}
				else if (iLocal_1731[iVar0] == 1)
				{
					bVar14 = false;
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1705[iVar0], &cLocal_2556);
					if (MISC::IS_BIT_SET(iLocal_1757[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2211());
						bVar14 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
					}
					else if (!bLocal_105 && ((!MISC::IS_BIT_SET(iLocal_1757[iVar0], 2) && uVar16) || (MISC::IS_BIT_SET(iLocal_1757[iVar0], 2) && uVar17)))
					{
						bVar14 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_418());
						bVar14 = STREAMING::HAS_MODEL_LOADED(func_418());
					}
					if (bVar14)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3015[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_2775[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_2775[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1705[iVar0], &cLocal_2556))
							{
								if (fLocal_1233 >= (fLocal_975[iVar0] - (fLocal_1246 * fParam1)))
								{
									if ((iLocal_92 || bParam2) || (!bLocal_109 && !func_448(Local_2453[iVar0 /*3*/], Var9, 5f, fLocal_1244)))
									{
										if (bLocal_88)
										{
											func_447(Local_2453[iVar0 /*3*/], Var9, fLocal_1237);
										}
										iLocal_3015[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_2775[iVar0], Local_2453[iVar0 /*3*/], 0f, 0, 0);
										if (iLocal_2775[iVar0] == joaat("polmav"))
										{
											VEHICLE::SET_VEHICLE_LIVERY(iLocal_3015[iVar0], 0);
										}
										if (uLocal_101 && !MISC::IS_BIT_SET(iLocal_1757[iVar0], 0))
										{
											func_446(iLocal_3015[iVar0]);
										}
										if (MISC::IS_BIT_SET(iLocal_1757[iVar0], 3))
										{
											ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_3015[iVar0], 1);
										}
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_3015[iVar0], Local_2453[iVar0 /*3*/], 0, 0, 1);
										ENTITY::SET_ENTITY_QUATERNION(iLocal_3015[iVar0], fLocal_871[iVar0], fLocal_897[iVar0], fLocal_923[iVar0], fLocal_949[iVar0]);
										if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_2775[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2775[iVar0]))
										{
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3015[iVar0]);
										}
										if (!MISC::IS_BIT_SET(iLocal_1757[iVar0], 0))
										{
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3015[iVar0], 1, 1);
											if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
											{
												VEHICLE::SET_VEHICLE_LIGHTS(iLocal_3015[iVar0], 3);
											}
										}
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_3015[iVar0], 1);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2775[iVar0]);
										iLocal_1842 = (iLocal_1842 - 1);
										iLocal_1731[iVar0]++;
										bLocal_109 = true;
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_3015[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3015[iVar0], 0))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_3015[iVar0], Local_2453[iVar0 /*3*/], 0, 0, 1);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_3015[iVar0], fLocal_871[iVar0], fLocal_897[iVar0], fLocal_923[iVar0], fLocal_949[iVar0]);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_2775[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2775[iVar0]))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3015[iVar0]);
							}
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_3015[iVar0], 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2775[iVar0]);
							iLocal_1842 = (iLocal_1842 - 1);
							iLocal_1731[iVar0]++;
						}
					}
				}
				else if (iLocal_1731[iVar0] == 2)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1705[iVar0], &cLocal_2556);
					if (!MISC::IS_BIT_SET(iLocal_1757[iVar0], 1))
					{
						bVar14 = false;
						if (MISC::IS_BIT_SET(iLocal_1757[iVar0], 0))
						{
							STREAMING::REQUEST_MODEL(GlobalFunc_2211());
							bVar14 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
							iVar19 = 2;
						}
						else if (!bLocal_105 && ((!MISC::IS_BIT_SET(iLocal_1757[iVar0], 2) && uVar16) || (MISC::IS_BIT_SET(iLocal_1757[iVar0], 2) && uVar17)))
						{
							bVar14 = true;
							iVar19 = 1;
						}
						else
						{
							STREAMING::REQUEST_MODEL(func_418());
							bVar14 = STREAMING::HAS_MODEL_LOADED(func_418());
							iVar19 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_3015[iVar0]))
						{
							if (!bLocal_109 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_3015[iVar0], -1))
							{
								if (bVar14)
								{
									if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_3015[iVar0], 1), Var9) < 10000f || bParam2) || iLocal_92)
									{
										func_444(&(iLocal_3015[iVar0]), iVar19, 1);
										MISC::SET_BIT(&(iLocal_1757[iVar0]), 1);
									}
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3015[iVar0], 0))
					{
						if (fLocal_1233 >= fLocal_975[iVar0])
						{
							if (4 > iLocal_1835)
							{
								fVar12 = (fLocal_1233 - fLocal_975[iVar0]);
								fVar12 = (fVar12 * fLocal_1001[iVar0]);
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1705[iVar0], &cLocal_2556))
								{
									if (fVar12 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1705[iVar0], &cLocal_2556))
									{
										Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_3015[iVar0], 1) };
										Var6 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_1705[iVar0], fVar12, &cLocal_2556) };
										if (((!func_448(Var3, Var9, 5f, fLocal_1244) && func_448(Var6, Var9, 5f, fLocal_1244)) && !iLocal_92) && !bParam2)
										{
											if (!MISC::IS_BIT_SET(iLocal_1757[iVar0], 1))
											{
												func_444(&(iLocal_3015[iVar0]), iVar19, 1);
											}
											iLocal_1835++;
											iLocal_1731[iVar0]++;
										}
										else if (((!bLocal_109 || MISC::IS_BIT_SET(iLocal_1757[iVar0], 1)) || iLocal_92) || bParam2)
										{
											if (func_438(&(iLocal_3015[iVar0]), iLocal_1705[iVar0], fVar12, 1, 0, 0, bLocal_107, bLocal_106))
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_3015[iVar0], (fParam1 * fLocal_1001[iVar0]));
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3015[iVar0], 0))
												{
													if (MISC::IS_BIT_SET(iLocal_1757[iVar0], 0))
													{
														VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3015[iVar0], 1, 1);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_3015[iVar0], 1);
														VEHICLE::SET_VEHICLE_LIGHTS(iLocal_3015[iVar0], 2);
														if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2775[iVar0]))
														{
															AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_3015[iVar0], 1);
														}
													}
												}
												if (!MISC::IS_BIT_SET(iLocal_1757[iVar0], 1))
												{
													func_444(&(iLocal_3015[iVar0]), iVar19, 1);
												}
												iLocal_1835++;
												iLocal_1731[iVar0]++;
											}
										}
									}
									else
									{
										if (!MISC::IS_BIT_SET(iLocal_1757[iVar0], 1))
										{
											func_444(&(iLocal_3015[iVar0]), iVar19, 1);
										}
										iLocal_1835++;
										iLocal_1731[iVar0]++;
									}
								}
							}
							else
							{
								if (!MISC::IS_BIT_SET(iLocal_1757[iVar0], 1))
								{
									func_444(&(iLocal_3015[iVar0]), iVar19, 1);
								}
								iLocal_1835++;
								iLocal_1731[iVar0]++;
							}
						}
					}
					else
					{
						if (!MISC::IS_BIT_SET(iLocal_1757[iVar0], 1))
						{
							func_444(&(iLocal_3015[iVar0]), iVar19, 1);
						}
						iLocal_1835++;
						iLocal_1731[iVar0]++;
					}
				}
				else if (iLocal_1731[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3015[iVar0], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3015[iVar0]))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_3015[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (bVar15)
								{
									if (((!bLocal_82 && !iLocal_79) && !bLocal_98) && (((!bLocal_107 && !bLocal_106) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_3015[iVar0])) || func_443(iLocal_3015[iVar0])))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar2))
										{
											bVar14 = false;
											if (bLocal_100)
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
												else if (MISC::ABSF((fVar13 - ENTITY::GET_ENTITY_SPEED(iLocal_3015[iVar0]))) > 15f)
												{
													bVar14 = true;
												}
												else if (!GlobalFunc_5655(iLocal_3015[iVar0], iVar2, 45f))
												{
													bVar14 = true;
												}
												else if (GlobalFunc_5654(iVar2, iLocal_3015[iVar0], 0))
												{
													bVar14 = true;
												}
											}
											if (bVar14)
											{
												func_440(iLocal_3015[iVar0]);
												iLocal_1731[iVar0]++;
											}
										}
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_3015[iVar0], (fParam1 * fLocal_1001[iVar0]));
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3015[iVar0]);
							}
						}
						else
						{
							iLocal_1731[iVar0]++;
						}
					}
					else
					{
						iLocal_1731[iVar0]++;
					}
				}
				else if (iLocal_1731[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3015[iVar0], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3015[iVar0]))
						{
							iLocal_1731[iVar0]++;
						}
						else
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_3015[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_3015[iVar0], (fParam1 * fLocal_1001[iVar0]));
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3015[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1705[iVar0], &cLocal_2556))
							{
								if (fLocal_1233 > (fLocal_975[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1705[iVar0], &cLocal_2556)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3015[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3015[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1731[iVar0]++;
					}
				}
				else if (iLocal_1731[iVar0] == 5)
				{
					if (!iLocal_3015[iVar0] == iLocal_3050)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3015[iVar0], 0))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_3015[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								iVar20 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, 242628503);
								if (iVar20 == 7)
								{
									fVar13 = ENTITY::GET_ENTITY_SPEED(iLocal_3015[iVar0]);
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
						if (!bLocal_90 && !bLocal_103)
						{
							if (iLocal_1705[iVar0] > 0)
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1705[iVar0], &cLocal_2556);
							}
						}
						if (!bLocal_80)
						{
							if (!bLocal_108)
							{
								GlobalFunc_2210(iLocal_3015[iVar0]);
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3015[iVar0]))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_3015[iVar0]));
						}
					}
					iLocal_1835 = (iLocal_1835 - 1);
					iLocal_1731[iVar0] = 99;
				}
				if (!bVar18)
				{
					iLocal_1840 = iVar0;
					bVar18 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_410();
	}
}

void func_440(int iParam0)//Position - 0x342BA
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_412(iParam0);
		VEHICLE::SET_PLAYBACK_TO_USE_AI(iParam0, 786603);
	}
}



int func_443(var uParam0)//Position - 0x343FC
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bLocal_104)
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

int func_444(var uParam0, int iParam1, bool bParam2)//Position - 0x34459
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, -1))
		{
			if (iParam1 == 2)
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, GlobalFunc_2211(), -1, 0, 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iLocal_2572);
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
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 4, func_418(), -1, 0, 0);
				if (bLocal_110)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_418());
				}
			}
			if (bParam2)
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar0, 1);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iVar0, 0);
				PED::SET_PED_CONFIG_FLAG(iVar0, 32, 0);
			}
			if (bLocal_111)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(*uParam0, 1);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 1);
			GlobalFunc_2221(iVar0);
			bLocal_109 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}


void func_446(int iParam0)//Position - 0x34565
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iLocal_2802 >= -1 && iLocal_2803 >= -1)
	{
		while (iVar0 == iLocal_2802 || iVar0 == iLocal_2803)
		{
			iVar0++;
		}
	}
	else if (iLocal_2802 >= -1)
	{
		if (iVar0 == iLocal_2802)
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

void func_447(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x346DE
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (!bLocal_91)
	{
		if (!func_448(Param0, Param3, fParam6, 200f))
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

int func_448(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7)//Position - 0x3474E
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!bLocal_91)
		{
			if (!iLocal_78)
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

float func_449(int iParam0)//Position - 0x34795
{
	var uVar0;
	
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, &cLocal_2556);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, &cLocal_2556))
	{
		SYSTEM::WAIT(0);
	}
	uVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam0, &cLocal_2556);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, &cLocal_2556);
	return uVar0;
}


void func_451(int iParam0)//Position - 0x3484B
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
		iVar0 = iLocal_1839;
		while (iVar0 < 50)
		{
			switch (iLocal_1783[iVar0])
			{
				case 0:
					if (!iLocal_2724[iVar0] == 0)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Local_2302[iVar0 /*3*/], fLocal_1231, fLocal_1231, fLocal_1231, 0, 1, 0))
						{
							iLocal_1841++;
							iLocal_1783[iVar0]++;
						}
					}
					else
					{
						iLocal_1783[iVar0] = 99;
					}
					break;
				
				case 1:
					if (6 > iLocal_1836)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2964[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_2724[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_2724[iVar0]))
							{
								if ((iLocal_78 || iLocal_92) || (!bLocal_109 && !func_448(Local_2302[iVar0 /*3*/], Var1, 5f, fLocal_1244)))
								{
									if (bLocal_88)
									{
										func_447(Local_2302[iVar0 /*3*/], Var1, fLocal_1237);
									}
									iLocal_2964[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_2724[iVar0], Local_2302[iVar0 /*3*/], 0f, 0, 0);
									if (iLocal_2724[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_2964[iVar0], 0);
									}
									ENTITY::SET_ENTITY_QUATERNION(iLocal_2964[iVar0], fLocal_1027[iVar0], fLocal_1078[iVar0], fLocal_1129[iVar0], fLocal_1180[iVar0]);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2724[iVar0]);
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_2964[iVar0], GlobalFunc_2212()))
									{
										VEHICLE::SET_VEHICLE_SIREN(iLocal_2964[iVar0], 1);
										if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2724[iVar0]))
										{
											AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_2964[iVar0], 1);
										}
									}
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_2964[iVar0], GlobalFunc_2213()))
									{
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_2964[iVar0], 0, 0);
									}
									ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_2964[iVar0], 1);
									iLocal_1841 = (iLocal_1841 - 1);
									iLocal_1836++;
									iLocal_1783[iVar0]++;
									bLocal_109 = true;
								}
							}
						}
						else
						{
							iLocal_1841 = (iLocal_1841 - 1);
							iLocal_1836++;
							iLocal_1783[iVar0]++;
						}
					}
					break;
				
				case 2:
					if (!bVar7)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2964[iVar0], 0))
						{
							Var4 = { ENTITY::GET_ENTITY_COORDS(iLocal_2964[iVar0], 1) };
						}
						if (fLocal_1245 == 0f || SYSTEM::VDIST2(Var1, Var4) < (fLocal_1245 * fLocal_1245))
						{
							if (!GlobalFunc_5654(iLocal_2964[iVar0], iParam0, 0))
							{
								if (!bLocal_80)
								{
									GlobalFunc_2210(iLocal_2964[iVar0]);
								}
								else
								{
									VEHICLE::DELETE_VEHICLE(&(iLocal_2964[iVar0]));
								}
								iLocal_1836 = (iLocal_1836 - 1);
								iLocal_1783[iVar0] = 99;
								bVar7 = true;
							}
						}
					}
					break;
			}
			if (iLocal_1783[iVar0] != 99)
			{
				if (!bVar8)
				{
					iLocal_1839 = iVar0;
					bVar8 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_413();
	}
}

void func_452(int iParam0, float fParam1, int iParam2)//Position - 0x34B41
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
			fLocal_1233 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
		}
		iVar22 = -1;
		bVar23 = false;
		bVar24 = false;
		iVar0 = iLocal_1838;
		while (iVar0 < 150 && !bVar23)
		{
			if (iLocal_1403[iVar0] != 99)
			{
				if (iLocal_1403[iVar0] == 0)
				{
					if (iLocal_1252[iVar0] > 0 && iLocal_2573[iVar0] != 0)
					{
						if (!iLocal_78)
						{
							if (fLocal_1233 < (fLocal_716[iVar0] + 20000f))
							{
								if (fLocal_1233 >= (fLocal_716[iVar0] - (7000f * fParam1)))
								{
									if (GlobalFunc_2222(iLocal_2573[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1554[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2573[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1554[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_1554[iVar0]), 1);
									iLocal_1843++;
									iLocal_1403[iVar0]++;
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
								func_454(iVar0, 1090519040);
							}
						}
						else
						{
							fVar15 = (fLocal_1233 - fLocal_716[iVar0]);
							if (fVar15 >= 0f)
							{
								if (fVar15 < func_449(iLocal_1252[iVar0]))
								{
									if (GlobalFunc_2222(iLocal_2573[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1554[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2573[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1554[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_1554[iVar0]), 1);
									iLocal_1843++;
									iLocal_1403[iVar0]++;
								}
								else
								{
									func_454(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_454(iVar0, 1090519040);
					}
				}
				else if (iLocal_1403[iVar0] == 1)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1252[iVar0], &cLocal_2556);
					bVar17 = false;
					if (MISC::IS_BIT_SET(iLocal_1554[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2211());
						if (STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211()))
						{
							bVar17 = true;
						}
					}
					else if (!bLocal_105 && ((!MISC::IS_BIT_SET(iLocal_1554[iVar0], 2) && uVar19) || (MISC::IS_BIT_SET(iLocal_1554[iVar0], 2) && uVar20)))
					{
						bVar17 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_418());
						bVar17 = STREAMING::HAS_MODEL_LOADED(func_418());
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2804[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_2573[iVar0]);
						if ((STREAMING::HAS_MODEL_LOADED(iLocal_2573[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1252[iVar0], &cLocal_2556)) && bVar17)
						{
							if (fLocal_1233 >= (fLocal_716[iVar0] - (fLocal_1246 * fParam1)))
							{
								if ((iLocal_92 || iParam2) || (!bLocal_109 && !func_448(Local_1851[iVar0 /*3*/], Var12, 5f, fLocal_1244)))
								{
									if (bLocal_88)
									{
										func_447(Local_1851[iVar0 /*3*/], Var12, fLocal_1237);
									}
									iLocal_2804[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_2573[iVar0], Local_1851[iVar0 /*3*/], 0f, 0, 0);
									if (iLocal_2573[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_2804[iVar0], 0);
									}
									if (uLocal_101 && !MISC::IS_BIT_SET(iLocal_1554[iVar0], 0))
									{
										func_446(iLocal_2804[iVar0]);
									}
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_2804[iVar0], Local_1851[iVar0 /*3*/], 0, 0, 1);
									ENTITY::SET_ENTITY_QUATERNION(iLocal_2804[iVar0], fLocal_112[iVar0], fLocal_263[iVar0], fLocal_414[iVar0], fLocal_565[iVar0]);
									if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_2573[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2573[iVar0]))
									{
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2804[iVar0]);
									}
									if (MISC::IS_BIT_SET(iLocal_1554[iVar0], 3))
									{
										ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_2804[iVar0], 1);
									}
									if (!MISC::IS_BIT_SET(iLocal_1554[iVar0], 0))
									{
										VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2804[iVar0], 1, 1);
										if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
										{
											VEHICLE::SET_VEHICLE_LIGHTS(iLocal_2804[iVar0], 3);
										}
									}
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_2804[iVar0], 1);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_2804[iVar0], 1);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2573[iVar0]);
									iLocal_1843 = (iLocal_1843 - 1);
									iLocal_1403[iVar0]++;
									bLocal_109 = true;
								}
								else if (fLocal_1233 > fLocal_716[iVar0])
								{
									iLocal_1843 = (iLocal_1843 - 1);
									func_454(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_1403[iVar0] == 2)
				{
					bVar17 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_1849 || iLocal_1849 == 0)) || iLocal_92) || iParam2)
					{
						if (!MISC::IS_BIT_SET(iLocal_1554[iVar0], 1))
						{
							if (MISC::IS_BIT_SET(iLocal_1554[iVar0], 0))
							{
								STREAMING::REQUEST_MODEL(GlobalFunc_2211());
								bVar17 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
								iVar21 = 2;
							}
							else if (!bLocal_105 && ((!MISC::IS_BIT_SET(iLocal_1554[iVar0], 2) && uVar19) || (MISC::IS_BIT_SET(iLocal_1554[iVar0], 2) && uVar20)))
							{
								bVar17 = true;
								iVar21 = 1;
							}
							else
							{
								STREAMING::REQUEST_MODEL(func_418());
								bVar17 = STREAMING::HAS_MODEL_LOADED(func_418());
								iVar21 = 0;
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_2804[iVar0]))
							{
								if (!bLocal_109 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2804[iVar0], -1))
								{
									if (bVar17)
									{
										if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_2804[iVar0], 1), Var12) < 10000f || iParam2) || iLocal_92)
										{
											func_444(&(iLocal_2804[iVar0]), iVar21, 0);
											MISC::SET_BIT(&(iLocal_1554[iVar0]), 1);
										}
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2804[iVar0], 0))
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1252[iVar0], &cLocal_2556);
							if (fLocal_1233 >= fLocal_716[iVar0])
							{
								if (8 > iLocal_1834)
								{
									fVar15 = (fLocal_1233 - fLocal_716[iVar0]);
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1252[iVar0], &cLocal_2556))
									{
										if (fVar15 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1252[iVar0], &cLocal_2556))
										{
											Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_2804[iVar0], 1) };
											Var9 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_1252[iVar0], fVar15, &cLocal_2556) };
											if (!func_448(Var6, Var12, 5f, fLocal_1244) && func_448(Var9, Var12, 5f, fLocal_1244))
											{
												if (!MISC::IS_BIT_SET(iLocal_1554[iVar0], 1))
												{
													func_444(&(iLocal_2804[iVar0]), iVar21, 0);
												}
												func_454(iVar0, 1090519040);
											}
											else if (((!bLocal_109 || MISC::IS_BIT_SET(iLocal_1554[iVar0], 1)) || iLocal_92) || iParam2)
											{
												if (func_438(&(iLocal_2804[iVar0]), iLocal_1252[iVar0], fVar15, 1, 0, 0, 1, bLocal_106))
												{
													if (!MISC::IS_BIT_SET(iLocal_1554[iVar0], 1))
													{
														func_444(&(iLocal_2804[iVar0]), iVar21, 0);
													}
													ENTITY::SET_ENTITY_COLLISION(iLocal_2804[iVar0], 1, 0);
													VEHICLE::SET_PLAYBACK_SPEED(iLocal_2804[iVar0], fParam1);
													iLocal_1834++;
													iLocal_1403[iVar0]++;
												}
											}
										}
										else
										{
											if (!MISC::IS_BIT_SET(iLocal_1554[iVar0], 1))
											{
												func_444(&(iLocal_2804[iVar0]), iVar21, 0);
											}
											func_454(iVar0, 1090519040);
										}
									}
									else if (fVar15 > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1252[iVar0], &cLocal_2556))
									{
										if (!MISC::IS_BIT_SET(iLocal_1554[iVar0], 1))
										{
											func_444(&(iLocal_2804[iVar0]), iVar21, 0);
										}
										func_454(iVar0, 1090519040);
									}
								}
								else
								{
									if (!MISC::IS_BIT_SET(iLocal_1554[iVar0], 1))
									{
										func_444(&(iLocal_2804[iVar0]), iVar21, 0);
									}
									func_454(iVar0, 1090519040);
								}
							}
							else if (iLocal_89 && !bLocal_97)
							{
								if (!MISC::IS_BIT_SET(iLocal_1554[iVar0], 1))
								{
									func_444(&(iLocal_2804[iVar0]), iVar21, 0);
								}
								func_454(iVar0, 1090519040);
							}
						}
						else
						{
							if (!MISC::IS_BIT_SET(iLocal_1554[iVar0], 1))
							{
								func_444(&(iLocal_2804[iVar0]), iVar21, 0);
							}
							func_454(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_1849 = iVar0;
					}
				}
				else if (iLocal_1403[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2804[iVar0], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2804[iVar0]))
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2804[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								if (bVar18)
								{
									bVar24 = false;
									if (!bLocal_87)
									{
										if ((!bLocal_82 && !iLocal_79) && func_443(iLocal_2804[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_1848 || iLocal_1848 == 0))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iVar5))
												{
													bVar17 = false;
													if (!GlobalFunc_5656(iLocal_2804[iVar0], iVar5) || GlobalFunc_5654(iVar5, iLocal_2804[iVar0], 0))
													{
														bVar24 = true;
													}
												}
												iLocal_1848 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_102 && !MISC::IS_BIT_SET(iLocal_1554[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_1848 || iLocal_1848 == 0))
										{
											Var25 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iLocal_2804[iVar0], 1)) };
											if (Var25.f_1 < 0f)
											{
												if (MISC::ABSF(Var25.f_1) > MISC::ABSF(Var25.x))
												{
													bVar24 = true;
												}
											}
											iVar2++;
											iLocal_1848 = iVar0;
										}
									}
									if (bVar24)
									{
										func_440(iLocal_2804[iVar0]);
										iLocal_1403[iVar0]++;
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_2804[iVar0], fParam1);
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2804[iVar0]);
							}
						}
						else
						{
							iLocal_1403[iVar0]++;
						}
					}
					else
					{
						iLocal_1403[iVar0]++;
					}
				}
				else if (iLocal_1403[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2804[iVar0], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2804[iVar0]))
						{
							iLocal_1403[iVar0]++;
						}
						else
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2804[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_2804[iVar0], fParam1);
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2804[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1252[iVar0], &cLocal_2556))
							{
								if (fLocal_1233 > (fLocal_716[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1252[iVar0], &cLocal_2556)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2804[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2804[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1403[iVar0]++;
					}
				}
				else if (iLocal_1403[iVar0] == 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2804[iVar0]))
					{
						fVar16 = ENTITY::GET_ENTITY_SPEED(iLocal_2804[iVar0]);
					}
					iLocal_1834 = (iLocal_1834 - 1);
					func_454(iVar0, fVar16);
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
			iLocal_1838 = iVar22;
		}
		if (iVar2 < 3)
		{
			iLocal_1848 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_1849 = 0;
		}
	}
	else
	{
		func_414();
	}
}


void func_454(int iParam0, float fParam1)//Position - 0x3570C
{
	int iVar0;
	
	if (!iLocal_2573[iParam0] == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2573[iParam0]);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_2804[iParam0]))
	{
		ENTITY::SET_ENTITY_COLLISION(iLocal_2804[iParam0], 1, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_2804[iParam0], 0);
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2804[iParam0], -1);
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
			TASK::TASK_VEHICLE_MISSION(iVar0, iLocal_2804[iParam0], 0, 1, fParam1, 786603, 5f, 5f, 1);
			PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
			if (bLocal_111)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, 0);
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar0, fParam1);
		}
	}
	if (!bLocal_80)
	{
		if (!bLocal_108)
		{
			GlobalFunc_2221(iVar0);
			GlobalFunc_2210(iLocal_2804[iParam0]);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::DELETE_PED(&iVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2804[iParam0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_2804[iParam0]));
		}
	}
	if (!bLocal_90 && !bLocal_103)
	{
		if (iLocal_1252[iParam0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1252[iParam0], &cLocal_2556);
		}
	}
	iLocal_1403[iParam0] = 99;
}

void func_455(int iParam0, float fParam1, float fParam2)//Position - 0x35865
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
			func_447(Var1, Var10, fVar13);
		}
	}
}

void func_456(int iParam0, float fParam1)//Position - 0x358E8
{
	if (!bLocal_91)
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

void func_457(int iParam0, float fParam1)//Position - 0x35935
{
	if (!bLocal_91)
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

void func_458(int iParam0, float fParam1)//Position - 0x35982
{
	var uVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
	{
		fVar1 = (fLocal_1247 + 2000f);
		fVar2 = (fLocal_1248 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			uVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (fVar1 <= VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(uVar0))
			{
				if (iLocal_1844 == 0)
				{
					Local_2544 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fLocal_1247) };
					iLocal_1844++;
				}
				else if (iLocal_1844 == 1)
				{
					Local_2547 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fVar1) };
					iLocal_1844++;
				}
				else if (!bLocal_109)
				{
					if (Local_2544.x > Local_2547.x)
					{
						fVar3 = Local_2544.x;
						Local_2544.x = Local_2547.x;
						Local_2547.x = fVar3;
					}
					if (Local_2544.f_1 > Local_2547.f_1)
					{
						fVar3 = Local_2544.f_1;
						Local_2544.f_1 = Local_2547.f_1;
						Local_2547.f_1 = fVar3;
					}
					if (Local_2544.f_2 > Local_2547.f_2)
					{
						fVar3 = Local_2544.f_2;
						Local_2544.f_2 = Local_2547.f_2;
						Local_2547.f_2 = fVar3;
					}
					Local_2544 = { Local_2544 - Vector(fLocal_1251, fLocal_1251, fLocal_1251) };
					Local_2547 = { Local_2547 + Vector(fLocal_1251, fLocal_1251, fLocal_1251) };
					PATHFIND::SET_ROADS_IN_AREA(Local_2544, Local_2547, 0, 0);
					fLocal_1247 = fVar1;
					iLocal_1844 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			uVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (iLocal_1847 == 0)
			{
				Local_2550 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fLocal_1248) };
				iLocal_1847++;
			}
			else if (iLocal_1847 == 1)
			{
				Local_2553 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fVar2) };
				iLocal_1847++;
			}
			else if (!bLocal_109 && !bVar4)
			{
				if (Local_2550.x > Local_2553.x)
				{
					fVar3 = Local_2550.x;
					Local_2550.x = Local_2553.x;
					Local_2553.x = fVar3;
				}
				if (Local_2550.f_1 > Local_2553.f_1)
				{
					fVar3 = Local_2550.f_1;
					Local_2550.f_1 = Local_2553.f_1;
					Local_2553.f_1 = fVar3;
				}
				if (Local_2550.f_2 > Local_2553.f_2)
				{
					fVar3 = Local_2550.f_2;
					Local_2550.f_2 = Local_2553.f_2;
					Local_2553.f_2 = fVar3;
				}
				Local_2550 = { Local_2550 - Vector(fLocal_1251, fLocal_1251, fLocal_1251) };
				Local_2553 = { Local_2553 + Vector(fLocal_1251, fLocal_1251, fLocal_1251) };
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_2550, Local_2553, 1);
				fLocal_1248 = fVar2;
				iLocal_1847 = 0;
			}
		}
	}
}



void func_461()//Position - 0x35CBA
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	
	fVar0 = 0f;
	if (iLocal_3213 == 0)
	{
		if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_3249, 1) < GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_3246, 1))
		{
			fLocal_3546 = (300f - GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_3249, 1));
			fLocal_3546 = (fLocal_3546 / 300f);
			if (fLocal_3546 < fLocal_3258)
			{
				fLocal_3546 = fLocal_3258;
			}
			if (fLocal_3546 > 1f)
			{
				fLocal_3546 = 1f;
			}
			if (fLocal_3257 > 10260.81f)
			{
				iLocal_3213 = 1;
			}
		}
		else
		{
			fLocal_3546 = (250f - GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_3246, 1));
			fLocal_3546 = (fLocal_3546 / 220f);
			if (fLocal_3546 < fLocal_3258)
			{
				fLocal_3546 = fLocal_3258;
			}
			if (fLocal_3546 > 1f)
			{
				fLocal_3546 = 1f;
			}
			if (fLocal_3257 > 15158.11f)
			{
				iLocal_3213 = 1;
			}
		}
		if (!HUD::DOES_BLIP_EXIST(uLocal_3150))
		{
			uLocal_3150 = GlobalFunc_5743(Local_3303, 1, 5);
		}
	}
	else
	{
		bVar1 = false;
		bVar2 = false;
		if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
		{
			bVar1 = true;
			fVar0 = -30f;
		}
		if (fLocal_3257 >= 23715.68f && fLocal_3257 < 28477.68f)
		{
			bVar1 = true;
		}
		if (fLocal_3257 >= 58550.06f && fLocal_3257 < 63927.9f)
		{
			bVar1 = true;
		}
		if (fLocal_3257 >= 70515.73f && fLocal_3257 < 76783.73f)
		{
			bVar1 = true;
		}
		if (fLocal_3257 > 20000f)
		{
			if (func_462())
			{
				bVar2 = true;
				bVar1 = true;
			}
		}
		if (bVar1)
		{
			fLocal_3259 = (fLocal_3259 + 0.025f);
			if (fLocal_3259 > 1.25f)
			{
				fLocal_3259 = 1.25f;
			}
		}
		else
		{
			if (fLocal_3259 > 1f)
			{
				fLocal_3259 = (fLocal_3259 - 0.025f);
			}
			if (fLocal_3259 < 1f)
			{
				fLocal_3259 = 1f;
			}
		}
		fVar3 = GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_3303, 1);
		if (bVar2)
		{
			fLocal_3260 = (fLocal_3260 + 0.025f);
			if (fLocal_3260 > 180f)
			{
				fLocal_3260 = 180f;
			}
			if (fVar3 > 5f)
			{
				fVar3 = 5f;
			}
		}
		else
		{
			fLocal_3260 = (fLocal_3260 - 0.025f);
			if (fLocal_3260 < 170f)
			{
				fLocal_3260 = 170f;
			}
		}
		fLocal_3546 = (fLocal_3260 - fVar3);
		fLocal_3546 = (fLocal_3546 / 130f);
		if (fLocal_3546 < fLocal_3258)
		{
			fLocal_3546 = fLocal_3258;
		}
		if (fLocal_3546 > fLocal_3259)
		{
			fLocal_3546 = fLocal_3259;
		}
	}
	if (fLocal_3258 < 0.7f)
	{
		if (fLocal_3546 > fLocal_3258)
		{
			fLocal_3258 = fLocal_3546;
		}
		if (fLocal_3257 > 12000f)
		{
			fLocal_3258 = (fLocal_3258 + 0.001f);
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iLocal_3137 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		VEHICLE::MODIFY_VEHICLE_TOP_SPEED(iLocal_3137, fVar0);
	}
}

int func_462()//Position - 0x35F64
{
	if (GlobalFunc_5657(PLAYER::PLAYER_PED_ID(), Local_3303))
	{
		return 1;
	}
	return 0;
}




void func_466()//Position - 0x36062
{
	VEHICLE::REQUEST_VEHICLE_RECORDING(300, "PAP3A2");
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(300, "PAP3A2"))
	{
		SYSTEM::WAIT(0);
	}
}

void func_467()//Position - 0x3608C
{
	Local_1851[0 /*3*/] = { 511.206f, 261.3451f, 102.3948f };
	fLocal_112[0] = -0.0108f;
	fLocal_263[0] = -0.0073f;
	fLocal_414[0] = 0.8187f;
	fLocal_565[0] = -0.574f;
	iLocal_1252[0] = 1;
	fLocal_716[0] = 4830f;
	iLocal_2573[0] = 0;
	Local_1851[1 /*3*/] = { 439.2651f, 292.9166f, 102.4979f };
	fLocal_112[1] = -0.0095f;
	fLocal_263[1] = 0.0129f;
	fLocal_414[1] = 0.5734f;
	fLocal_565[1] = 0.8191f;
	iLocal_1252[1] = 2;
	fLocal_716[1] = 7272f;
	iLocal_2573[1] = joaat("washington");
	Local_1851[2 /*3*/] = { 402.5407f, 299.8293f, 102.4301f };
	fLocal_112[2] = -0.0149f;
	fLocal_263[2] = -0.009f;
	fLocal_414[2] = 0.817f;
	fLocal_565[2] = -0.5764f;
	iLocal_1252[2] = 3;
	fLocal_716[2] = 8262f;
	iLocal_2573[2] = joaat("sentinel");
	Local_1851[3 /*3*/] = { 366.4927f, 309.5941f, 103.0008f };
	fLocal_112[3] = -0.007f;
	fLocal_263[3] = -0.0165f;
	fLocal_414[3] = 0.7886f;
	fLocal_565[3] = -0.6146f;
	iLocal_1252[3] = 4;
	fLocal_716[3] = 9318f;
	if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_2573[3] = 0;
	}
	else
	{
		iLocal_2573[3] = joaat("asterope");
	}
	Local_1851[4 /*3*/] = { 216.6715f, 353.7352f, 105.7779f };
	fLocal_112[4] = -0.02f;
	fLocal_263[4] = -0.0268f;
	fLocal_414[4] = 0.8125f;
	fLocal_565[4] = -0.582f;
	iLocal_1252[4] = 5;
	fLocal_716[4] = 13542f;
	iLocal_2573[4] = joaat("baller");
	Local_1851[5 /*3*/] = { 277.4835f, 419.0747f, 118.9695f };
	fLocal_112[5] = -0.0142f;
	fLocal_263[5] = -0.0284f;
	fLocal_414[5] = 0.8705f;
	fLocal_565[5] = -0.4911f;
	iLocal_1252[5] = 6;
	fLocal_716[5] = 15984f;
	iLocal_2573[5] = joaat("asterope");
	Local_1851[6 /*3*/] = { 237.4069f, 472.6873f, 124.6924f };
	fLocal_112[6] = -0.0221f;
	fLocal_263[6] = -0.079f;
	fLocal_414[6] = 0.9966f;
	fLocal_565[6] = -0.0111f;
	iLocal_1252[6] = 7;
	fLocal_716[6] = 17370f;
	iLocal_2573[6] = joaat("bullet");
	Local_1851[7 /*3*/] = { 256.0805f, 540.5441f, 140.1842f };
	fLocal_112[7] = -0.0117f;
	fLocal_263[7] = -0.0054f;
	fLocal_414[7] = 0.8057f;
	fLocal_565[7] = 0.5922f;
	iLocal_1252[7] = 8;
	fLocal_716[7] = 20208f;
	iLocal_2573[7] = joaat("taxi");
	Local_1851[8 /*3*/] = { 282.645f, 612.2068f, 154.1533f };
	fLocal_112[8] = 0.0177f;
	fLocal_263[8] = -0.0114f;
	fLocal_414[8] = 0.4243f;
	fLocal_565[8] = 0.9053f;
	iLocal_1252[8] = 9;
	fLocal_716[8] = 23177f;
	iLocal_2573[8] = joaat("asterope");
	Local_1851[9 /*3*/] = { 273.0108f, 629.6464f, 155.7711f };
	fLocal_112[9] = -0.0256f;
	fLocal_263[9] = -0.0694f;
	fLocal_414[9] = 0.9907f;
	fLocal_565[9] = 0.1141f;
	iLocal_1252[9] = 10;
	fLocal_716[9] = 23639f;
	iLocal_2573[9] = joaat("baller");
	Local_1851[10 /*3*/] = { 283.0059f, 647.7762f, 158.7737f };
	fLocal_112[10] = 0.1093f;
	fLocal_263[10] = -0.0014f;
	fLocal_414[10] = -0.1659f;
	fLocal_565[10] = 0.9801f;
	iLocal_1252[10] = 11;
	fLocal_716[10] = 24629f;
	iLocal_2573[10] = joaat("buccaneer");
	Local_1851[11 /*3*/] = { 279.8875f, 654.1951f, 160.2324f };
	fLocal_112[11] = -0.0411f;
	fLocal_263[11] = -0.1096f;
	fLocal_414[11] = 0.9777f;
	fLocal_565[11] = 0.1744f;
	iLocal_1252[11] = 12;
	fLocal_716[11] = 24893f;
	iLocal_2573[11] = joaat("feltzer2");
	Local_1851[12 /*3*/] = { 339.0951f, 462.1592f, 148.3102f };
	fLocal_112[12] = 0.0028f;
	fLocal_263[12] = -0.0627f;
	fLocal_414[12] = 0.9664f;
	fLocal_565[12] = -0.2492f;
	iLocal_1252[12] = 13;
	fLocal_716[12] = 30523f;
	iLocal_2573[12] = joaat("baller2");
	Local_1851[13 /*3*/] = { 472.2878f, 393.8821f, 138.2691f };
	fLocal_112[13] = 0.0207f;
	fLocal_263[13] = 0.0216f;
	fLocal_414[13] = 0.2261f;
	fLocal_565[13] = 0.9736f;
	iLocal_1252[13] = 14;
	fLocal_716[13] = 37056f;
	iLocal_2573[13] = joaat("feltzer2");
	Local_1851[14 /*3*/] = { 511.7101f, 333.8549f, 131.9026f };
	fLocal_112[14] = 0.0424f;
	fLocal_263[14] = 0.043f;
	fLocal_414[14] = 0.6257f;
	fLocal_565[14] = 0.7777f;
	iLocal_1252[14] = 15;
	fLocal_716[14] = 38508f;
	iLocal_2573[14] = joaat("sentinel");
	Local_1851[15 /*3*/] = { 602.7618f, 355.3197f, 118.527f };
	fLocal_112[15] = -0.0574f;
	fLocal_263[15] = 0.044f;
	fLocal_414[15] = -0.5245f;
	fLocal_565[15] = 0.8483f;
	iLocal_1252[15] = 16;
	fLocal_716[15] = 44316f;
	iLocal_2573[15] = joaat("asterope");
	Local_1851[16 /*3*/] = { 785.3267f, 340.3435f, 115.391f };
	fLocal_112[16] = -0.0268f;
	fLocal_263[16] = -0.0051f;
	fLocal_414[16] = 0.7557f;
	fLocal_565[16] = 0.6544f;
	iLocal_1252[16] = 17;
	fLocal_716[16] = 49794f;
	iLocal_2573[16] = 0;
	Local_1851[17 /*3*/] = { 845.4529f, 360.061f, 117.3146f };
	fLocal_112[17] = 0.0148f;
	fLocal_263[17] = 0.0047f;
	fLocal_414[17] = -0.4289f;
	fLocal_565[17] = 0.9032f;
	iLocal_1252[17] = 18;
	fLocal_716[17] = 51642f;
	iLocal_2573[17] = joaat("buccaneer");
	Local_1851[18 /*3*/] = { 880.3807f, 403.1809f, 118.6872f };
	fLocal_112[18] = -0.0194f;
	fLocal_263[18] = -0.0024f;
	fLocal_414[18] = 0.9411f;
	fLocal_565[18] = 0.3375f;
	iLocal_1252[18] = 19;
	fLocal_716[18] = 53292f;
	iLocal_2573[18] = joaat("baller2");
	Local_1851[19 /*3*/] = { 911.8809f, 467.8841f, 120.2237f };
	fLocal_112[19] = -0.0008f;
	fLocal_263[19] = -0.0055f;
	fLocal_414[19] = 0.999f;
	fLocal_565[19] = 0.0435f;
	iLocal_1252[19] = 20;
	fLocal_716[19] = 55536f;
	iLocal_2573[19] = joaat("coquette");
	Local_1851[20 /*3*/] = { 916.1319f, 504.171f, 119.8686f };
	fLocal_112[20] = -0.0102f;
	fLocal_263[20] = 0.0531f;
	fLocal_414[20] = 0.0939f;
	fLocal_565[20] = 0.9941f;
	iLocal_1252[20] = 21;
	fLocal_716[20] = 56657f;
	iLocal_2573[20] = joaat("sentinel");
	Local_1851[21 /*3*/] = { 1072.157f, 441.7333f, 91.5848f };
	fLocal_112[21] = 0.0051f;
	fLocal_263[21] = -0.0205f;
	fLocal_414[21] = 0.9189f;
	fLocal_565[21] = -0.394f;
	iLocal_1252[21] = 22;
	fLocal_716[21] = 65264f;
	iLocal_2573[21] = joaat("feltzer2");
	Local_1851[22 /*3*/] = { 1109.026f, 416.9391f, 83.1078f };
	fLocal_112[22] = 0.0054f;
	fLocal_263[22] = -0.0016f;
	fLocal_414[22] = 0.9268f;
	fLocal_565[22] = 0.3756f;
	iLocal_1252[22] = 23;
	fLocal_716[22] = 66584f;
	iLocal_2573[22] = joaat("sentinel");
	Local_1851[23 /*3*/] = { 1120.355f, 421.655f, 82.8984f };
	fLocal_112[23] = 0.0164f;
	fLocal_263[23] = 0.0015f;
	fLocal_414[23] = 0.9267f;
	fLocal_565[23] = 0.3754f;
	iLocal_1252[23] = 24;
	fLocal_716[23] = 66980f;
	iLocal_2573[23] = joaat("coquette");
	Local_1851[24 /*3*/] = { 1119.266f, 402.3738f, 83.0242f };
	fLocal_112[24] = -0.002f;
	fLocal_263[24] = -0.0141f;
	fLocal_414[24] = -0.3897f;
	fLocal_565[24] = 0.9208f;
	iLocal_1252[24] = 25;
	fLocal_716[24] = 67046f;
	iLocal_2573[24] = joaat("sentinel");
	Local_1851[25 /*3*/] = { 1154.82f, 355.7718f, 90.8335f };
	fLocal_112[25] = -0.0158f;
	fLocal_263[25] = 0.006f;
	fLocal_414[25] = 0.9599f;
	fLocal_565[25] = -0.2799f;
	iLocal_1252[25] = 26;
	fLocal_716[25] = 68564f;
	iLocal_2573[25] = joaat("coquette");
	Local_1851[26 /*3*/] = { 983.0621f, 173.4691f, 80.5089f };
	fLocal_112[26] = -0.0049f;
	fLocal_263[26] = 0.0019f;
	fLocal_414[26] = 0.9411f;
	fLocal_565[26] = 0.338f;
	iLocal_1252[26] = 27;
	fLocal_716[26] = 77247f;
	iLocal_2573[26] = joaat("feltzer2");
	Local_2302[0 /*3*/] = { 852.1576f, -124.6406f, 78.5719f };
	fLocal_1027[0] = -0.0278f;
	fLocal_1078[0] = -0.0124f;
	fLocal_1129[0] = 0.9574f;
	fLocal_1180[0] = 0.2872f;
	iLocal_2724[0] = joaat("sentinel");
	Local_1851[27 /*3*/] = { 812.6069f, -185.2938f, 72.7078f };
	fLocal_112[27] = -0.0002f;
	fLocal_263[27] = 0.0004f;
	fLocal_414[27] = 0.482f;
	fLocal_565[27] = 0.8762f;
	iLocal_1252[27] = 28;
	fLocal_716[27] = 89655f;
	iLocal_2573[27] = joaat("bjxl");
	Local_1851[28 /*3*/] = { 718.7026f, -136.8279f, 74.7098f };
	fLocal_112[28] = -0.0057f;
	fLocal_263[28] = -0.0031f;
	fLocal_414[28] = 0.8765f;
	fLocal_565[28] = -0.4813f;
	iLocal_1252[28] = 29;
	fLocal_716[28] = 93417f;
	if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_2573[28] = 0;
	}
	else
	{
		iLocal_2573[28] = joaat("bus");
	}
	Local_1851[29 /*3*/] = { 708.8309f, -123.9532f, 74.4544f };
	fLocal_112[29] = -0.0127f;
	fLocal_263[29] = 0.023f;
	fLocal_414[29] = 0.482f;
	fLocal_565[29] = 0.8758f;
	iLocal_1252[29] = 30;
	fLocal_716[29] = 93945f;
	iLocal_2573[29] = joaat("baller2");
	Local_1851[30 /*3*/] = { 686.3724f, -110.2447f, 74.0336f };
	fLocal_112[30] = -0.0118f;
	fLocal_263[30] = 0.016f;
	fLocal_414[30] = 0.4839f;
	fLocal_565[30] = 0.8749f;
	iLocal_1252[30] = 31;
	fLocal_716[30] = 94869f;
	iLocal_2573[30] = joaat("asterope");
	Local_1851[31 /*3*/] = { 612.1208f, -67.3511f, 73.16f };
	fLocal_112[31] = 0.0707f;
	fLocal_263[31] = 0.0064f;
	fLocal_414[31] = -0.5441f;
	fLocal_565[31] = 0.836f;
	iLocal_1252[31] = 32;
	fLocal_716[31] = 97311f;
	iLocal_2573[31] = 0;
	Local_1851[32 /*3*/] = { 605.6122f, -70.8522f, 72.6917f };
	fLocal_112[32] = 0.0678f;
	fLocal_263[32] = 0.0099f;
	fLocal_414[32] = -0.5536f;
	fLocal_565[32] = 0.83f;
	iLocal_1252[32] = 33;
	fLocal_716[32] = 97443f;
	iLocal_2573[32] = 0;
	Local_1851[33 /*3*/] = { 523.7166f, -108.7238f, 63.2222f };
	fLocal_112[33] = 0.0044f;
	fLocal_263[33] = -0.0835f;
	fLocal_414[33] = 0.9375f;
	fLocal_565[33] = 0.3377f;
	iLocal_1252[33] = 34;
	fLocal_716[33] = 100809f;
	iLocal_2573[33] = joaat("baller");
	Local_1851[34 /*3*/] = { 505.7021f, -127.9252f, 59.7848f };
	fLocal_112[34] = -0.0227f;
	fLocal_263[34] = -0.0599f;
	fLocal_414[34] = 0.9805f;
	fLocal_565[34] = 0.1858f;
	iLocal_1252[34] = 35;
	fLocal_716[34] = 100941f;
	iLocal_2573[34] = joaat("bjxl");
	Local_1851[35 /*3*/] = { 510.6351f, -130.4515f, 59.3621f };
	fLocal_112[35] = 0.0002f;
	fLocal_263[35] = -0.062f;
	fLocal_414[35] = 0.9802f;
	fLocal_565[35] = 0.1878f;
	iLocal_1252[35] = 36;
	fLocal_716[35] = 101139f;
	iLocal_2573[35] = joaat("banshee");
	Local_1851[36 /*3*/] = { 513.6044f, -124.3921f, 60.1873f };
	fLocal_112[36] = 0.0026f;
	fLocal_263[36] = -0.067f;
	fLocal_414[36] = 0.9725f;
	fLocal_565[36] = 0.223f;
	iLocal_1252[36] = 37;
	fLocal_716[36] = 101337f;
	iLocal_2573[36] = joaat("asterope");
	Local_1851[37 /*3*/] = { 484.3174f, -155.8481f, 56.6016f };
	fLocal_112[37] = 0.0008f;
	fLocal_263[37] = -0.1155f;
	fLocal_414[37] = 0.7595f;
	fLocal_565[37] = -0.6402f;
	iLocal_1252[37] = 38;
	fLocal_716[37] = 101865f;
	iLocal_2573[37] = joaat("baller");
	Local_1851[38 /*3*/] = { 515.339f, -244.6399f, 48.6464f };
	fLocal_112[38] = -0.0232f;
	fLocal_263[38] = -0.0304f;
	fLocal_414[38] = 0.9764f;
	fLocal_565[38] = 0.2127f;
	iLocal_1252[38] = 39;
	fLocal_716[38] = 103845f;
	iLocal_2573[38] = joaat("baller");
	Local_1851[39 /*3*/] = { 508.6511f, -280.4524f, 46.7813f };
	fLocal_112[39] = 0.0219f;
	fLocal_263[39] = 0.013f;
	fLocal_414[39] = -0.2077f;
	fLocal_565[39] = 0.9779f;
	iLocal_1252[39] = 40;
	fLocal_716[39] = 105165f;
	iLocal_2573[39] = joaat("bus");
	Local_1851[40 /*3*/] = { 496.9088f, -318.2034f, 44.9216f };
	fLocal_112[40] = 0.0249f;
	fLocal_263[40] = 0.0114f;
	fLocal_414[40] = 0.5613f;
	fLocal_565[40] = 0.8271f;
	iLocal_1252[40] = 41;
	fLocal_716[40] = 105957f;
	iLocal_2573[40] = joaat("asterope");
	Local_1851[41 /*3*/] = { 482.1582f, -326.7783f, 45.4484f };
	fLocal_112[41] = 0.0144f;
	fLocal_263[41] = -0.029f;
	fLocal_414[41] = 0.8114f;
	fLocal_565[41] = -0.5836f;
	iLocal_1252[41] = 42;
	fLocal_716[41] = 106287f;
	iLocal_2573[41] = joaat("asterope");
	Local_1851[42 /*3*/] = { 464.0194f, -319.4027f, 47.2238f };
	fLocal_112[42] = 0.0314f;
	fLocal_263[42] = -0.0059f;
	fLocal_414[42] = 0.9494f;
	fLocal_565[42] = 0.3125f;
	iLocal_1252[42] = 43;
	fLocal_716[42] = 106353f;
	iLocal_2573[42] = joaat("baller");
	Local_1851[43 /*3*/] = { 459.4142f, -337.1878f, 47.1687f };
	fLocal_112[43] = 0.0061f;
	fLocal_263[43] = 0.076f;
	fLocal_414[43] = -0.2966f;
	fLocal_565[43] = 0.952f;
	iLocal_1252[43] = 44;
	fLocal_716[43] = 106815f;
	iLocal_2573[43] = joaat("baller2");
	Local_1851[44 /*3*/] = { 386.0724f, -405.9861f, 46.3795f };
	fLocal_112[44] = 0.0131f;
	fLocal_263[44] = -0.0083f;
	fLocal_414[44] = -0.592f;
	fLocal_565[44] = 0.8058f;
	iLocal_1252[44] = 45;
	fLocal_716[44] = 109389f;
	iLocal_2573[44] = 0;
	Local_1851[45 /*3*/] = { 344.1942f, -423.8685f, 44.294f };
	fLocal_112[45] = 0.0281f;
	fLocal_263[45] = -0.0016f;
	fLocal_414[45] = -0.3989f;
	fLocal_565[45] = 0.9166f;
	iLocal_1252[45] = 46;
	fLocal_716[45] = 110643f;
	iLocal_2573[45] = 0;
	Local_1851[46 /*3*/] = { 295.9982f, -449.7546f, 42.994f };
	fLocal_112[46] = -0.0033f;
	fLocal_263[46] = -0.0207f;
	fLocal_414[46] = 0.9991f;
	fLocal_565[46] = 0.038f;
	iLocal_1252[46] = 47;
	fLocal_716[46] = 113019f;
	iLocal_2573[46] = 0;
	Local_2453[0 /*3*/] = { 636.0844f, 221.427f, 98.7137f };
	fLocal_871[0] = 0.0558f;
	fLocal_897[0] = 0.0284f;
	fLocal_923[0] = 0.6062f;
	fLocal_949[0] = 0.7928f;
	iLocal_1705[0] = 499;
	fLocal_975[0] = 900f;
	fLocal_1001[0] = 1f;
	iLocal_2775[0] = joaat("police3");
	iLocal_3015[0] = Local_3284[1 /*6*/];
	Local_2453[1 /*3*/] = { 891.8881f, 426.6213f, 119.3326f };
	fLocal_871[1] = -0.0052f;
	fLocal_897[1] = -0.017f;
	fLocal_923[1] = 0.9645f;
	fLocal_949[1] = 0.2634f;
	iLocal_1705[1] = 600;
	fLocal_975[1] = 35000f;
	fLocal_1001[1] = 1f;
	iLocal_2775[1] = joaat("pounder");
	Local_2453[2 /*3*/] = { 545.7987f, 195.0462f, 100.8242f };
	fLocal_871[2] = 0.0227f;
	fLocal_897[2] = -0.0209f;
	fLocal_923[2] = -0.2162f;
	fLocal_949[2] = 0.9759f;
	iLocal_1705[2] = 500;
	fLocal_975[2] = 40200f;
	fLocal_1001[2] = 1f;
	iLocal_2775[2] = joaat("police3");
	iLocal_3015[2] = Local_3284[0 /*6*/];
	Local_2453[3 /*3*/] = { 1151.959f, 370.9727f, 91.3383f };
	fLocal_871[3] = -0.0041f;
	fLocal_897[3] = -0.0063f;
	fLocal_923[3] = 0.3161f;
	fLocal_949[3] = 0.9487f;
	iLocal_1705[3] = 601;
	fLocal_975[3] = 57000f;
	fLocal_1001[3] = 1f;
	iLocal_2775[3] = joaat("scrap");
	Local_2453[4 /*3*/] = { 649.6518f, -14.6478f, 82.1775f };
	fLocal_871[4] = -0.0505f;
	fLocal_897[4] = -0.0332f;
	fLocal_923[4] = 0.9261f;
	fLocal_949[4] = -0.3725f;
	iLocal_1705[4] = 602;
	fLocal_975[4] = 92000f;
	fLocal_1001[4] = 1f;
	iLocal_2775[4] = joaat("surfer");
	Local_2453[5 /*3*/] = { 187.4046f, -359.7074f, 43.5742f };
	fLocal_871[5] = 0.0259f;
	fLocal_897[5] = 0.0031f;
	fLocal_923[5] = -0.3841f;
	fLocal_949[5] = 0.9229f;
	iLocal_1705[5] = 501;
	fLocal_975[5] = 104000f;
	fLocal_1001[5] = 1f;
	iLocal_2775[5] = joaat("police3");
	iLocal_3015[5] = Local_3284[2 /*6*/];
}

void func_468(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x37635
{
	struct<3> Var0;
	
	StringCopy(&cLocal_2556, sParam0, 64);
	bLocal_88 = true;
	iLocal_93 = 0;
	iLocal_1834 = 0;
	iLocal_1835 = 0;
	iLocal_1836 = 0;
	iLocal_1837 = iParam1;
	iLocal_1838 = 0;
	iLocal_1839 = 0;
	iLocal_1840 = 0;
	iLocal_1844 = 0;
	iLocal_1847 = 0;
	iLocal_1845 = -1;
	iLocal_1846 = -1;
	iLocal_1848 = 0;
	iLocal_1849 = 0;
	fLocal_1247 = 0f;
	fLocal_1248 = 0f;
	fLocal_1233 = 0f;
	iLocal_94 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		Local_2532.x = (Var0.x - 100f);
		Local_2532.f_1 = (Var0.f_1 - 100f);
		Local_2532.f_2 = (Var0.f_2 - 100f);
		Local_2535.x = (Var0.x + 100f);
		Local_2535.f_1 = (Var0.f_1 + 100f);
		Local_2535.f_2 = (Var0.f_2 + 100f);
		PATHFIND::SET_ROADS_IN_AREA(Local_2532, Local_2535, 0, 0);
		if (bParam2)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(Var0, 500f, 0, 0, 0, 0, 0);
		}
	}
	PED::ADD_RELATIONSHIP_GROUP("rgh_traffic", &iLocal_2572);
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
	func_405();
}

void func_469()//Position - 0x37756
{
	switch (iLocal_3262)
	{
		case 0:
			iLocal_3262 = 1;
			break;
		
		case 1:
			func_270();
			if (GlobalFunc_4947(Local_3303))
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_3150))
				{
					if (iLocal_3532 == 0)
					{
						iLocal_3532 = 1;
					}
				}
			}
			if (iLocal_3533 == 1)
			{
				if (GlobalFunc_4947(Local_3303))
				{
					iLocal_3262 = 2;
				}
			}
			break;
		
		case 2:
			iLocal_3532 = 0;
			func_2(2);
			break;
	}
}

void func_470()//Position - 0x377C7
{
	struct<6> Var0;
	
	Var0 = { GlobalFunc_2209() };
	switch (iLocal_3262)
	{
		case 0:
			GlobalFunc_173(&uLocal_3612, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			GlobalFunc_173(&uLocal_3612, 3, 0, "BEVERLY", 0, 1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(691.2697f, 10.5739f, 83.1879f, 100f, 0, 1, 0, 0, 0);
			if (iLocal_3266 == 1)
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					if (!CAM::IS_SCREEN_FADING_IN())
					{
						GlobalFunc_79(500, 0);
					}
				}
			}
			iLocal_3539 = 0;
			GlobalFunc_846(&uLocal_3283);
			GlobalFunc_9132(1);
			GlobalFunc_563(1);
			iLocal_3262 = 1;
			break;
		
		case 1:
			if (!iLocal_3539)
			{
				if (GlobalFunc_10638(&uLocal_3612, 50, "PAP3AAU", "PAP3A_INTRO", 9, 1, 0, 0, 0))
				{
					RECORDING::_0x293220DA1B46CEBC(1f, 10f, 0);
					iLocal_3539 = 1;
				}
			}
			else
			{
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_1993())
					{
						iLocal_3262 = 2;
					}
				}
				if (MISC::ARE_STRINGS_EQUAL(&Var0, "PAP3A_INTRO_3"))
				{
					iLocal_3262 = 2;
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 186.1659f, 299.0473f, 86.18623f, 653.0208f, 137.6192f, 179.5612f, 133.5f, 0, 1, 0) && GlobalFunc_1575(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 339.0575f, 90f))
				{
					iLocal_3262 = 2;
				}
			}
			func_270();
			if (GlobalFunc_4947(Local_3303))
			{
				if (GlobalFunc_155(Local_3303, PLAYER::PLAYER_PED_ID(), 200f))
				{
					iLocal_3262 = 2;
				}
			}
			break;
		
		case 2:
			iLocal_3532 = 0;
			func_2(1);
			break;
	}
}



void func_473()//Position - 0x379D5
{
	char* sVar0;
	
	switch (iLocal_3262)
	{
		case 0:
			if (GlobalFunc_115(Local_3284[0 /*6*/]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_3284[0 /*6*/], 0);
			}
			if (GlobalFunc_115(Local_3284[2 /*6*/]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_3284[2 /*6*/], 0);
			}
			if (GlobalFunc_115(Local_3303))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_3303, 0);
			}
			if (iLocal_3611 == 5)
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_3370[0 /*9*/]))
				{
					if (GlobalFunc_155(Local_3370[0 /*9*/], PLAYER::PLAYER_PED_ID(), 100f))
					{
						if (!PED::IS_PED_IN_COMBAT(Local_3370[0 /*9*/], PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_COMBAT_PED(Local_3370[0 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						}
					}
				}
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_3370[2 /*9*/]))
				{
					if (GlobalFunc_155(Local_3370[2 /*9*/], PLAYER::PLAYER_PED_ID(), 100f))
					{
						if (!PED::IS_PED_IN_COMBAT(Local_3370[2 /*9*/], PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_COMBAT_PED(Local_3370[2 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						}
					}
				}
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_3370[3 /*9*/]))
				{
					if (GlobalFunc_155(Local_3370[3 /*9*/], PLAYER::PLAYER_PED_ID(), 100f))
					{
						if (!PED::IS_PED_IN_COMBAT(Local_3370[3 /*9*/], PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_COMBAT_PED(Local_3370[3 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						}
					}
				}
			}
			HUD::CLEAR_PRINTS();
			if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_HELP(1);
			}
			AUDIO::TRIGGER_MUSIC_EVENT("PAP3_FAIL");
			GlobalFunc_846(&uLocal_3283);
			switch (iLocal_3611)
			{
				case 0:
					break;
				
				case 1:
					sVar0 = "PAP3_08";
					break;
				
				case 4:
					sVar0 = "PAP3_LOSTP";
					break;
				
				case 5:
					sVar0 = "PAP3_POLIC";
					break;
				
				case 2:
					sVar0 = "PAP3_INJUR";
					break;
				
				case 3:
					sVar0 = "PAP3_KILL2";
					break;
			}
			if (iLocal_3611 == 0)
			{
				GlobalFunc_10580(1);
			}
			else
			{
				GlobalFunc_10820(sVar0, 1);
			}
			iLocal_3262 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				func_474();
				func_202(1);
				if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					GlobalFunc_4935();
				}
				func_574(0);
			}
			else if (!bLocal_3542)
			{
				if (iLocal_3538 == 1)
				{
					if (iLocal_3611 == 5)
					{
						GlobalFunc_173(&uLocal_3612, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
						bLocal_3542 = GlobalFunc_10630(&uLocal_3612, "PAP3AAU", "PAP3A_FRANK", "PAP3A_FRANK_7", 7, 1, 0);
					}
				}
			}
			break;
	}
}

void func_474()//Position - 0x37C08
{
	int iVar0;
	
	func_404(0, 1);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_3789);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_3790);
	GlobalFunc_69(&Local_3407);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		GlobalFunc_69(&(Local_3370[iVar0 /*9*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		GlobalFunc_6692(&(Local_3284[iVar0 /*6*/]));
		iVar0++;
	}
	GlobalFunc_6692(&Local_3303);
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		GlobalFunc_6692(&(Local_3309[iVar0 /*6*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		GlobalFunc_130(&(Local_3471[iVar0 /*6*/]));
		iVar0++;
	}
	ENTITY::REMOVE_FORCED_OBJECT(634.4785f, -68.8406f, 74.2911f, 5f, joaat("prop_barrier_work04a"));
	ENTITY::REMOVE_FORCED_OBJECT(627.1672f, -73.8742f, 73.3072f, 5f, joaat("prop_barrier_work04a"));
	ENTITY::REMOVE_FORCED_OBJECT(653.2055f, -96.2269f, 73.4953f, 5f, joaat("prop_barrier_work04a"));
	ENTITY::REMOVE_FORCED_OBJECT(657.0881f, -91.6722f, 73.5133f, 5f, joaat("prop_barrier_work04a"));
	GlobalFunc_846(&uLocal_3283);
	GlobalFunc_69(&(uLocal_3162[0]));
	GlobalFunc_69(&(uLocal_3162[1]));
	GlobalFunc_69(&(uLocal_3162[2]));
	GlobalFunc_69(&(uLocal_3162[3]));
	GlobalFunc_69(&(uLocal_3162[4]));
	GlobalFunc_69(&(uLocal_3162[5]));
	GlobalFunc_69(&(uLocal_3162[6]));
	GlobalFunc_69(&(uLocal_3162[7]));
	GlobalFunc_69(&(uLocal_3162[8]));
	GlobalFunc_69(&(uLocal_3162[9]));
	GlobalFunc_6692(&(uLocal_3151[0]));
	GlobalFunc_6692(&(uLocal_3151[1]));
	GlobalFunc_6692(&(uLocal_3151[2]));
	GlobalFunc_6692(&(uLocal_3151[3]));
	GlobalFunc_6692(&(uLocal_3151[4]));
	GlobalFunc_6692(&(uLocal_3151[5]));
	GlobalFunc_6692(&(uLocal_3151[6]));
	GlobalFunc_6692(&(uLocal_3151[7]));
	GlobalFunc_6692(&(uLocal_3151[8]));
	GlobalFunc_6692(&(uLocal_3151[9]));
	GlobalFunc_69(&iLocal_3140);
	GlobalFunc_6692(&iLocal_3139);
}







void func_481(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x37ED8
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	
	if (Global_68499 != 6)
	{
		if (Global_68501 == -1)
		{
			if (GlobalFunc_7630(1, Param0))
			{
				if (Global_68502 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_20 > fVar0)
				{
					Global_68501 = MISC::GET_GAME_TIMER();
					Local_21 = { HUD::GET_HUD_COMPONENT_POSITION(15) };
					fLocal_20 = 0f;
				}
				else
				{
					fLocal_20 = (fLocal_20 + MISC::GET_FRAME_TIME());
				}
			}
			else
			{
				fLocal_20 = 0f;
			}
		}
		else
		{
			if (!GlobalFunc_7630(0, Param0))
			{
				Global_68501 = (MISC::GET_GAME_TIMER() - 9000);
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			iVar1 = (MISC::GET_GAME_TIMER() - Global_68501);
			if (iVar1 < 9000 && !CAM::IS_SCREEN_FADED_OUT())
			{
				iVar2 = 255;
				if (iVar1 < 1000)
				{
					iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar1) / 1000f) * 255f));
				}
				else
				{
					iVar3 = (9000 - iVar1);
					if (iVar3 < 1000)
					{
						iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar3) / 1000f) * 255f));
					}
				}
				switch (Global_68499)
				{
					case 3:
					case 5:
						if (iParam6 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.07f;
						}
						else if (iParam7 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.077f;
						}
						else if (iParam8 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.05f;
						}
						else if (iParam9 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.035f;
						}
						else
						{
							fVar6 = 0f;
							fVar7 = -0.014f;
						}
						break;
					
					default:
						fVar6 = 0f;
						fVar7 = -0.014f;
						break;
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
				HUD::SET_TEXT_FONT(1);
				HUD::SET_TEXT_JUSTIFICATION(2);
				iVar12 = GlobalFunc_8315();
				if (Global_68502 == 1 && Global_68500 == 62)
				{
					iVar12 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3214;
				}
				switch (iVar12)
				{
					case 0:
						HUD::GET_HUD_COLOUR(143, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 1:
						HUD::GET_HUD_COLOUR(144, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 2:
						HUD::GET_HUD_COLOUR(145, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					default:
						iVar8 = 240;
						iVar9 = 200;
						iVar10 = 80;
				}
				HUD::SET_TEXT_COLOUR(iVar8, iVar9, iVar10, iVar2);
				HUD::SET_TEXT_DROP_SHADOW();
				Var4 = { GlobalFunc_6686(Global_68500, Global_68502, iParam10) };
				if (fVar7 == -0.014f)
				{
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fVar6, fVar7, 0f, 0.01f);
				HUD::SET_TEXT_SCALE(0.67f, 0.67f);
				if (!GRAPHICS::GET_IS_WIDESCREEN() && !GRAPHICS::GET_IS_HIDEF())
				{
					fLocal_25 = 0.14f;
				}
				else
				{
					fLocal_25 = 0.17f;
				}
				if (fVar7 == -0.014f)
				{
					if (GlobalFunc_117(&Var4) > fLocal_25)
					{
						if (HUD::IS_HUD_COMPONENT_ACTIVE(15))
						{
							HUD::SET_HUD_COMPONENT_POSITION(15, Local_21.x, (Local_21.f_1 + fLocal_24));
							Global_68504 = 1;
						}
					}
				}
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&Var4);
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar6, fVar7, 0);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
				if (Global_68503 == 1)
				{
					GlobalFunc_53();
					fLocal_20 = 0f;
				}
			}
			else
			{
				GlobalFunc_53();
				fLocal_20 = 0f;
			}
		}
	}
}

















void func_498()//Position - 0x38916
{
	GlobalFunc_2350(0, 0);
	GlobalFunc_737();
	STREAMING::REQUEST_ANIM_DICT("rcmpaparazzo_3");
	while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmpaparazzo_3"))
	{
		SYSTEM::WAIT(0);
	}
	if (func_301(1))
	{
		func_270();
		if (iLocal_3533 == 1)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (GlobalFunc_4947(iLocal_3137))
				{
					if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3137)))
					{
						iLocal_3224 = 1;
					}
					else
					{
						iLocal_3224 = 0;
					}
					ENTITY::SET_ENTITY_COORDS(iLocal_3137, 366.9862f, -404.5475f, 44.8031f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_3137, 105f);
				}
				else
				{
					func_508(&iLocal_3137, 429.1563f, 126.8527f, 99.4028f, 70.3603f, 0, 0, 1, 1, 1, joaat("carbonizzare"), 1, 145);
					if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3137)))
					{
						iLocal_3224 = 1;
					}
					else
					{
						iLocal_3224 = 0;
					}
					ENTITY::SET_ENTITY_COORDS(iLocal_3137, 366.9862f, -404.5475f, 44.8031f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_3137, 105f);
				}
			}
			else
			{
				iLocal_3137 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				ENTITY::SET_ENTITY_COORDS(iLocal_3137, 366.9862f, -404.5475f, 44.8031f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_3137, 105f);
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_3303))
	{
		ENTITY::SET_ENTITY_COORDS(Local_3303, 341.2146f, -410.2309f, 44.1722f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(Local_3303, 111.4817f);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3303);
		if (iLocal_3216 == 0)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(Local_3303, 0);
			VEHICLE::SET_VEHICLE_DAMAGE(Local_3303, 0f, 2f, 0f, 400f, 200f, 1);
			iLocal_3216 = 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_3284[0 /*6*/]))
	{
		ENTITY::SET_ENTITY_COORDS(Local_3284[0 /*6*/], 349.6943f, -401.2252f, 44.3462f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(Local_3284[0 /*6*/], 100.5072f);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3284[0 /*6*/]);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_3284[2 /*6*/]))
	{
		ENTITY::SET_ENTITY_COORDS(Local_3284[2 /*6*/], 328.8692f, -399.05f, 44.81538f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(Local_3284[2 /*6*/], -57.30972f);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3284[2 /*6*/]);
	}
	bLocal_3536 = true;
	iLocal_3537 = 1;
	iLocal_3252 = 1;
	GlobalFunc_5108(iLocal_3137, -1, 1);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_3407);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_3370[0 /*9*/]);
	if (!PED::IS_PED_IN_VEHICLE(Local_3370[0 /*9*/], Local_3284[0 /*6*/], 0))
	{
		PED::SET_PED_INTO_VEHICLE(Local_3370[0 /*9*/], Local_3284[0 /*6*/], -1);
	}
	if (!PED::IS_PED_IN_VEHICLE(Local_3407, Local_3284[0 /*6*/], 0))
	{
		PED::SET_PED_INTO_VEHICLE(Local_3407, Local_3284[0 /*6*/], 1);
	}
	VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(Local_3284[0 /*6*/], 1);
	VEHICLE::SET_VEHICLE_SIREN(Local_3284[0 /*6*/], 0);
	PED::SET_PED_KEEP_TASK(Local_3370[0 /*9*/], 1);
	iLocal_3187 = MISC::GET_GAME_TIMER();
	PATHFIND::SET_ROADS_IN_AREA(318.94f, -411.6963f, 38.0267f, 421.5246f, -363.0107f, 52.0853f, 1, 1);
	PATHFIND::SET_ROADS_IN_AREA(796.4662f, -68.4078f, 79.522f, 974.3044f, -152.9081f, 72.6015f, 1, 1);
	PATHFIND::SET_ROADS_IN_AREA(683.3696f, 38.3284f, 83.277f, 707.9796f, -22.9872f, 82.654f, 1, 1);
	PATHFIND::SET_ROADS_IN_AREA(812.2689f, -40.7279f, 79.4878f, 858.4236f, -119.0339f, 78.3599f, 1, 1);
	TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_3370[0 /*9*/], Local_3284[0 /*6*/], 231.64f, -347.1846f, 43.2866f, 30f, 0, 0, 786469, 20f, 150f);
	VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_3284[0 /*6*/], 1);
	iLocal_3253 = 1;
	TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	iLocal_3211 = 1;
	iLocal_3281 = 5;
	iLocal_3267[0] = 7;
	iLocal_3264 = 6;
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	iLocal_3254 = MISC::GET_GAME_TIMER();
	iLocal_3261 = 5;
	iLocal_3262 = 0;
}





void func_503()//Position - 0x38E0D
{
	GlobalFunc_2350(0, 0);
	GlobalFunc_737();
	STREAMING::REQUEST_ANIM_DICT("rcmpaparazzo_3");
	STREAMING::REQUEST_MODEL(joaat("polmav"));
	while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmpaparazzo_3") || !STREAMING::HAS_MODEL_LOADED(joaat("polmav")))
	{
		SYSTEM::WAIT(0);
	}
	if (func_301(1))
	{
		func_270();
		if (iLocal_3533 == 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_3303))
			{
				VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Local_3303);
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (GlobalFunc_4947(iLocal_3137))
				{
					if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3137)))
					{
						iLocal_3224 = 1;
					}
					else
					{
						iLocal_3224 = 0;
					}
					ENTITY::SET_ENTITY_COORDS(iLocal_3137, 366.9862f, -404.5475f, 44.8031f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_3137, 105f);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3137, 1, 1);
				}
				else
				{
					func_508(&iLocal_3137, 429.1563f, 126.8527f, 99.4028f, 70.3603f, 0, 0, 1, 1, 1, joaat("carbonizzare"), 1, 145);
					if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3137)))
					{
						iLocal_3224 = 1;
					}
					else
					{
						iLocal_3224 = 0;
					}
					ENTITY::SET_ENTITY_COORDS(iLocal_3137, 366.9862f, -404.5475f, 44.8031f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_3137, 105f);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3137, 1, 1);
				}
			}
			else
			{
				iLocal_3137 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				ENTITY::SET_ENTITY_COORDS(iLocal_3137, 366.9862f, -404.5475f, 44.8031f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_3137, 105f);
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_3303))
	{
		ENTITY::SET_ENTITY_COORDS(Local_3303, 341.2146f, -410.2309f, 44.1722f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(Local_3303, 111.4817f);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3303);
		ENTITY::FREEZE_ENTITY_POSITION(Local_3303, 1);
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_3303, 1, 1);
		if (iLocal_3216 == 0)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(Local_3303, 0);
			VEHICLE::SET_VEHICLE_DAMAGE(Local_3303, 0f, 2f, 0f, 400f, 200f, 1);
			iLocal_3216 = 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_3284[0 /*6*/]))
	{
		ENTITY::SET_ENTITY_COORDS(Local_3284[0 /*6*/], 349.6943f, -401.2252f, 44.3462f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(Local_3284[0 /*6*/], 100.5072f);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3284[0 /*6*/]);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_3284[2 /*6*/]))
	{
		ENTITY::SET_ENTITY_COORDS(Local_3284[2 /*6*/], 328.8692f, -399.05f, 44.81538f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(Local_3284[2 /*6*/], -57.30972f);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3284[2 /*6*/]);
	}
	if (GlobalFunc_115(iLocal_3137))
	{
		if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iLocal_3137)))
		{
			PED::GIVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 0, 4096, -1);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3139))
	{
		iLocal_3139 = VEHICLE::CREATE_VEHICLE(joaat("polmav"), 379.96f, -400.05f, 85.23f, 108.26f, 1, 1);
		iLocal_3140 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3139, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
		VEHICLE::SET_VEHICLE_LIVERY(iLocal_3139, 0);
		VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_3139);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3139, 1, 1);
		VEHICLE::SET_VEHICLE_SEARCHLIGHT(iLocal_3139, 1, 1);
		TASK::TASK_HELI_MISSION(iLocal_3140, iLocal_3139, 0, Local_3407, 0f, 50f, 60f, 16, 0.1f, 60f, -1f, 60, 55, -1082130432, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_3139, 1);
	}
	GlobalFunc_5108(iLocal_3137, -1, 1);
	if (AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING())
	{
		AUDIO::TRIGGER_MUSIC_EVENT("PAP3_STOP");
	}
	bLocal_3232 = true;
	iLocal_3254 = MISC::GET_GAME_TIMER();
	iLocal_3261 = 4;
	iLocal_3262 = 0;
}

void func_504()//Position - 0x39165
{
	GlobalFunc_2350(0, 0);
	GlobalFunc_737();
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
	TASK::REQUEST_WAYPOINT_RECORDING("Pap3aRoll");
	if (func_301(1))
	{
		func_270();
		if (iLocal_3533 == 1)
		{
			if (GlobalFunc_4947(iLocal_3137))
			{
				if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3137)))
				{
					iLocal_3224 = 1;
				}
				else
				{
					iLocal_3224 = 0;
				}
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3137, 1, 1);
			}
			else
			{
				func_508(&iLocal_3137, 429.1563f, 126.8527f, 99.4028f, 70.3603f, 0, 0, 1, 1, 1, joaat("carbonizzare"), 1, 145);
				if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3137)))
				{
					iLocal_3224 = 1;
				}
				else
				{
					iLocal_3224 = 0;
				}
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3137, 1, 1);
			}
		}
	}
	iLocal_3544 = 1;
	iLocal_3791 = 1;
	iLocal_3792 = 0;
	iLocal_3793 = -1;
	while (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Pap3aRoll"))
	{
		SYSTEM::WAIT(0);
	}
	if (GlobalFunc_115(iLocal_3137))
	{
		if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iLocal_3137)))
		{
			PED::GIVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 0, 4096, -1);
		}
	}
	GlobalFunc_5108(iLocal_3137, -1, 1);
	func_430();
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
	func_270();
	SYSTEM::WAIT(400);
	MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 200f, 0, 0, 0, 0, 0);
	iLocal_3254 = MISC::GET_GAME_TIMER();
	iLocal_3261 = 2;
	iLocal_3262 = 0;
}

void func_505()//Position - 0x392A6
{
	GlobalFunc_2350(0, 0);
	MISC::CLEAR_AREA(336.4843f, 132.4985f, 102.0139f, 30f, 1, 0, 0, 0);
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (GlobalFunc_4947(iLocal_3137))
		{
			if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3137)))
			{
				iLocal_3224 = 1;
			}
			else
			{
				iLocal_3224 = 0;
			}
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3137, 1, 1);
		}
		else
		{
			func_508(&iLocal_3137, 336.4843f, 132.4985f, 102.0139f, 249.9272f, 0, 0, 1, 1, 1, joaat("carbonizzare"), 1, 145);
			if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3137)))
			{
				iLocal_3224 = 1;
			}
			else
			{
				iLocal_3224 = 0;
			}
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3137, 1, 1);
		}
	}
	else
	{
		iLocal_3137 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))))
		{
			iLocal_3224 = 1;
		}
		else
		{
			iLocal_3224 = 0;
		}
	}
	if (GlobalFunc_115(iLocal_3137))
	{
		if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iLocal_3137)))
		{
			PED::GIVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 0, 4096, -1);
		}
	}
	GlobalFunc_5108(iLocal_3137, -1, 1);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	GlobalFunc_79(800, 0);
	iLocal_3261 = 0;
	iLocal_3262 = 0;
}



void func_508(int iParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x39490
{
	int iVar0;
	
	iVar0 = 1;
	if (!GlobalFunc_Is_Mission_Retry() || !GlobalFunc_7698())
	{
		iVar0 = 0;
	}
	if (iVar0 == 1)
	{
		if (!GlobalFunc_9009(iParam6, iParam7, iParam8))
		{
			iVar0 = 0;
		}
	}
	if (iVar0 == 1)
	{
		GlobalFunc_8368();
		while (!GlobalFunc_8367())
		{
			SYSTEM::WAIT(0);
		}
		*iParam0 = func_543(Param1, fParam4);
	}
	else if (iParam9 == 1)
	{
		if (GlobalFunc_100(Param1, 0f, 0f, 0f))
		{
			Param1 = { Global_93588.f_2167 };
			fParam4 = Global_93588.f_2167.f_6;
		}
		MISC::CLEAR_AREA(Param1, 5f, 1, 0, 0, 0);
		GlobalFunc_8365(Param1, 5f, 0);
		if (GlobalFunc_42(iParam12))
		{
			GlobalFunc_6791(iParam12, 0);
			while (!func_509(iParam0, iParam12, Param1, fParam4, 1, 0))
			{
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(iParam10);
			while (!STREAMING::HAS_MODEL_LOADED(iParam10))
			{
				SYSTEM::WAIT(0);
			}
			*iParam0 = VEHICLE::CREATE_VEHICLE(iParam10, Param1, fParam4, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam0))
			{
				if (iParam11 == 0)
				{
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*iParam0, 0);
				}
				else if (iParam11 > 0)
				{
					VEHICLE::SET_VEHICLE_COLOURS(*iParam0, iParam11, iParam11);
				}
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam10);
		}
	}
	if (iParam5 == 1)
	{
		if (((ENTITY::DOES_ENTITY_EXIST(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam0)) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, -1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
		}
	}
}

int func_509(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)//Position - 0x39618
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
				GlobalFunc_5018(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_5106(iParam0);
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
				GlobalFunc_5018(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_5106(iParam0);
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
				GlobalFunc_5018(iParam0, &(Var5.f_31), &(Var5.f_57));
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
						GlobalFunc_5106(iParam0);
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


































int func_543(struct<3> Param0, float fParam3)//Position - 0x3F17F
{
	return func_544(&(Global_93588.f_2167), Param0, fParam3, 0);
}

int func_544(var uParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x3F199
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	var uVar5;
	int iVar8;
	
	if (GlobalFunc_6794(uParam0))
	{
		if (GlobalFunc_100(Param1, 0f, 0f, 0f))
		{
			Param1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_42 == joaat("monster") || uParam0->f_12.f_42 == joaat("marshall"))
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
		if (GlobalFunc_7696(uParam0))
		{
			MISC::CLEAR_AREA(Param1, 5f, 1, 0, 0, 0);
			GlobalFunc_8365(Param1, 5f, 0);
			iVar0 = VEHICLE::CREATE_VEHICLE(uParam0->f_12.f_42, Param1, fParam4, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
				if (SYSTEM::VDIST2(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, Param1, 0, 0, 1);
				}
				func_549(iVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (VEHICLE::IS_THIS_MODEL_A_BOAT(uParam0->f_12.f_42) || VEHICLE::IS_THIS_MODEL_A_JETSKI(uParam0->f_12.f_42))
				{
					if (!WATER::TEST_PROBE_AGAINST_WATER(Param1.x, Param1.f_1, (Param1.f_2 + 30f), Param1.x, Param1.f_1, (Param1.f_2 - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							GlobalFunc_6791(uParam0->f_11, 1);
						}
						else if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							GlobalFunc_6791(uParam0->f_11, 2);
						}
					}
					VEHICLE::_0xAB04325045427AAE(iVar0, 0);
					VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar0, 0);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar0, 1);
					GlobalFunc_531(iVar0, uParam0->f_11);
				}
				else if ((!GlobalFunc_8366(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "startup_positioning"))
				{
					iVar8 = GlobalFunc_536(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						GlobalFunc_7695(iVar8);
					}
				}
				if (((Global_Mission_Fail_State != 13 && Global_Mission_Fail_State != 10) && Global_Mission_Fail_State != 11) && Global_Mission_Fail_State != 12)
				{
					if (MISC::GET_HASH_KEY(&(Global_Mission_Fail_State.Failed_Script_Name)) == Global_68102)
					{
						if (uParam0->f_12.f_42 == Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[21 /*54*/].f_42)
						{
							GlobalFunc_4927(24, 0);
							GlobalFunc_7695(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					GlobalFunc_8317(iVar0, uParam0->f_11);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12.f_42);
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}





void func_549(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x3F7B9
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (MISC::GET_HASH_KEY(&(uParam1->f_1)) != 0)
		{
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, &(uParam1->f_1));
		}
		if (*uParam1 >= 0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
		{
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0, *uParam1);
		}
		if (uParam1->f_42 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
		}
		if (MISC::IS_BIT_SET(uParam1->f_53, 13))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0);
		}
		if (MISC::IS_BIT_SET(uParam1->f_53, 12))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0);
		}
		VEHICLE::SET_VEHICLE_COLOURS(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, uParam1->f_7, uParam1->f_8);
		if (((MISC::IS_BIT_SET(uParam1->f_53, 15) || GlobalFunc_2052(iParam0)) || (((uParam1->f_38 == 0 && uParam1->f_39 == 0) && uParam1->f_40 == 0) && uParam1->f_9[20] > 0)) && GlobalFunc_321())
		{
			uParam1->f_38 = 0;
			uParam1->f_39 = 0;
			uParam1->f_40 = 0;
		}
		else if ((uParam1->f_38 == 0 && uParam1->f_39 == 0) && uParam1->f_40 == 0)
		{
			uParam1->f_38 = 255;
			uParam1->f_39 = 255;
			uParam1->f_40 = 255;
		}
		VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_38, uParam1->f_39, uParam1->f_40);
		if (uParam1->f_41 == -1 && uParam1->f_42 != joaat("granger"))
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, uParam1->f_41);
		}
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, !MISC::IS_BIT_SET(uParam1->f_53, 9));
		if (bParam2)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, uParam1->f_46);
		}
		VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, uParam1->f_50, uParam1->f_51, uParam1->f_52);
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2, MISC::IS_BIT_SET(uParam1->f_53, 28));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3, MISC::IS_BIT_SET(uParam1->f_53, 29));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0, MISC::IS_BIT_SET(uParam1->f_53, 30));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1, MISC::IS_BIT_SET(uParam1->f_53, 31));
		VEHICLE::SET_VEHICLE_IS_STOLEN(iParam0, MISC::IS_BIT_SET(uParam1->f_53, 10));
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0) > 1 && uParam1->f_43 >= 0)
		{
			VEHICLE::SET_VEHICLE_LIVERY(iParam0, uParam1->f_43);
		}
		if (uParam1->f_45 > -1 && uParam1->f_45 < 255)
		{
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					if (uParam1->f_45 == 6)
					{
						VEHICLE::SET_VEHICLE_WHEEL_TYPE(iParam0, uParam1->f_45);
					}
				}
				else
				{
					VEHICLE::SET_VEHICLE_WHEEL_TYPE(iParam0, uParam1->f_45);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			if ((uParam1->f_44 == 0 || uParam1->f_44 == 3) || uParam1->f_44 == 5)
			{
				VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, 1);
			}
			else
			{
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, 1);
			}
		}
		if (bParam3)
		{
			GlobalFunc_5018(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_42) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_42))
		{
			iVar0 = 0;
			while (iVar0 <= 11)
			{
				if (MISC::IS_BIT_SET(uParam1->f_53, GlobalFunc_101(iVar0 + 1)))
				{
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar0 + 1, false);
					}
				}
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
				{
					VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar0 + 1, true);
				}
				iVar0++;
			}
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_42))
		{
			if (!MISC::IS_BIT_SET(uParam1->f_53, 23))
			{
				if (MISC::IS_BIT_SET(uParam1->f_53, 22))
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 2);
				}
				else
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
				}
			}
			else
			{
				VEHICLE::CONTROL_LANDING_GEAR(iParam0, 4);
			}
		}
		if (MISC::IS_BIT_SET(uParam1->f_53, 27))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}












void func_561()//Position - 0x3FDF7
{
	int iVar0;
	
	Local_3246 = { 260.3616f, 339.5469f, 104.5709f };
	Local_3249 = { 421.7929f, 295.649f, 102.0579f };
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	STREAMING::REQUEST_MODEL(joaat("police3"));
	STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
	STREAMING::REQUEST_MODEL(joaat("u_f_y_poppymich"));
	STREAMING::REQUEST_MODEL(joaat("cogcabrio"));
	VEHICLE::REQUEST_VEHICLE_RECORDING(300, "PAP3A2");
	PED::ADD_RELATIONSHIP_GROUP("SecurityGroup", &iLocal_3789);
	PED::ADD_RELATIONSHIP_GROUP("PoppyGroup", &iLocal_3790);
	MISC::CLEAR_AREA_OF_VEHICLES(Local_3246, 50f, 1, 1, 0, 0, 0);
	MISC::CLEAR_AREA_OF_VEHICLES(Local_3249, 50f, 1, 1, 0, 0, 0);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(234.2141f, 350.2852f, 113.3876f, 672.3351f, 212.3607f, 90.18399f, 47.25f, 0, 0, 1);
	func_569();
	iLocal_3532 = 0;
	iLocal_3533 = 0;
	bLocal_3535 = false;
	iLocal_3538 = 0;
	bLocal_3536 = false;
	iLocal_3537 = 0;
	iLocal_3539 = 0;
	bLocal_3540 = false;
	iLocal_3534 = 0;
	iLocal_3541 = 0;
	iLocal_3791 = 0;
	iLocal_3216 = 0;
	iLocal_3217 = 0;
	iLocal_3544 = 0;
	bLocal_3540 = false;
	iLocal_3194 = 0;
	iLocal_3280 = 0;
	iLocal_3211 = 0;
	iLocal_3213 = 0;
	iLocal_3252 = 0;
	iLocal_3215 = 0;
	iLocal_3219 = 0;
	GlobalFunc_9621(50, 1, 0);
	iLocal_3263 = 0;
	iLocal_3264 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iLocal_3267[iVar0] = 0;
		iVar0++;
	}
	GlobalFunc_500(&uLocal_3559);
	GlobalFunc_499(&uLocal_3559, 820.2385f, -46.3501f, 79.5901f);
	GlobalFunc_499(&uLocal_3559, 796.7191f, -82.9061f, 79.5978f);
	GlobalFunc_499(&uLocal_3559, 802.1686f, -86.5395f, 79.5984f);
	GlobalFunc_499(&uLocal_3559, 827.0104f, -50.6043f, 79.5877f);
	GlobalFunc_498(&uLocal_3559);
	MISC::CLEAR_AREA_OF_VEHICLES(691.2697f, 10.5739f, 83.1879f, 100f, 0, 0, 0, 0, 0);
	HUD::REQUEST_ADDITIONAL_TEXT("PAP3", 0);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
	if (GlobalFunc_230(71) == 1 || GlobalFunc_794(50))
	{
		iLocal_3541 = 1;
	}
	else
	{
		iLocal_3541 = 0;
	}
	fLocal_3260 = 170f;
}








void func_569()//Position - 0x403A0
{
	Local_3303.f_1 = { 722.7029f, 65.28743f, 82.59053f };
	Local_3303.f_4 = 141f;
	Local_3303.f_5 = joaat("cogcabrio");
	Local_3309[0 /*6*/].f_1 = { 703.1887f, 230.0058f, 91.6438f };
	Local_3309[0 /*6*/].f_4 = 59.6823f;
	Local_3309[0 /*6*/].f_5 = joaat("jackal");
	Local_3309[1 /*6*/].f_1 = { 754.2217f, -163.2057f, 73.7662f };
	Local_3309[1 /*6*/].f_4 = 238f;
	Local_3309[1 /*6*/].f_5 = joaat("sentinel");
	Local_3309[6 /*6*/].f_1 = { 881.5699f, 39.6837f, 77.4769f };
	Local_3309[6 /*6*/].f_4 = 314f;
	Local_3309[6 /*6*/].f_5 = joaat("pounder");
	Local_3309[7 /*6*/].f_1 = { 806.9825f, -83.9695f, 79.5911f };
	Local_3309[7 /*6*/].f_4 = 55f;
	Local_3309[7 /*6*/].f_5 = joaat("pounder");
	Local_3309[8 /*6*/].f_1 = { 894.0145f, -38.8992f, 77.7647f };
	Local_3309[8 /*6*/].f_4 = 238f;
	Local_3309[8 /*6*/].f_5 = joaat("jackal");
	Local_3309[9 /*6*/].f_1 = { 903.1145f, -65.764f, 77.7647f };
	Local_3309[9 /*6*/].f_4 = 57f;
	Local_3309[9 /*6*/].f_5 = joaat("sentinel");
	Local_3309[2 /*6*/].f_1 = { 639.101f, -97.6283f, 73.5104f };
	Local_3309[2 /*6*/].f_4 = 230f;
	Local_3309[2 /*6*/].f_5 = joaat("tiptruck");
	Local_3309[3 /*6*/].f_1 = { 637.8901f, -75.7718f, 73.9779f };
	Local_3309[3 /*6*/].f_4 = 312f;
	Local_3309[3 /*6*/].f_5 = joaat("tiptruck");
	Local_3309[4 /*6*/].f_1 = { 813.1224f, -60.5906f, 79.6415f };
	Local_3309[4 /*6*/].f_4 = 151f;
	Local_3309[4 /*6*/].f_5 = joaat("police3");
	Local_3309[5 /*6*/].f_1 = { 806.468f, -69.288f, 79.6412f };
	Local_3309[5 /*6*/].f_4 = 325f;
	Local_3309[5 /*6*/].f_5 = joaat("police3");
	Local_3284[0 /*6*/].f_1 = { 535.095f, 181.3821f, 99.4294f };
	Local_3284[0 /*6*/].f_4 = 340.6452f;
	Local_3284[0 /*6*/].f_5 = joaat("police3");
	Local_3284[1 /*6*/].f_1 = { 699.5699f, 225.2489f, 91.5223f };
	Local_3284[1 /*6*/].f_4 = 240.1702f;
	Local_3284[1 /*6*/].f_5 = joaat("police3");
	Local_3284[2 /*6*/].f_1 = { 827.4832f, -55.2525f, 79.5899f };
	Local_3284[2 /*6*/].f_4 = 77f;
	Local_3284[2 /*6*/].f_5 = joaat("police3");
	Local_3370[0 /*9*/].f_5 = joaat("s_m_y_cop_01");
	Local_3370[1 /*9*/].f_5 = joaat("s_m_y_cop_01");
	Local_3370[2 /*9*/].f_5 = joaat("s_m_y_cop_01");
	Local_3370[3 /*9*/].f_5 = joaat("s_m_y_cop_01");
	Local_3407.f_5 = joaat("u_f_y_poppymich");
	Local_3416[0 /*9*/].f_1 = { 798.3842f, -76.0535f, 79.5907f };
	Local_3416[0 /*9*/].f_4 = 46f;
	Local_3416[0 /*9*/].f_5 = joaat("s_m_y_cop_01");
	Local_3416[1 /*9*/].f_1 = { 805.305f, -75.553f, 79.4485f };
	Local_3416[1 /*9*/].f_4 = 46f;
	Local_3416[1 /*9*/].f_5 = joaat("s_m_y_cop_01");
	Local_3416[2 /*9*/].f_1 = { 627.6722f, -84.7451f, 73.0863f };
	Local_3416[2 /*9*/].f_4 = 123f;
	Local_3416[2 /*9*/].f_5 = joaat("s_m_y_cop_01");
	Local_3416[3 /*9*/].f_1 = { 631.7634f, -77.7747f, 73.5139f };
	Local_3416[3 /*9*/].f_4 = 270f;
	Local_3416[3 /*9*/].f_5 = joaat("s_m_y_cop_01");
	Local_3416[4 /*9*/].f_1 = { 826.9551f, -57.2431f, 79.5911f };
	Local_3416[4 /*9*/].f_4 = 48f;
	Local_3416[4 /*9*/].f_5 = joaat("s_m_y_cop_01");
	Local_3416[5 /*9*/].f_1 = { 814.1181f, -64.4872f, 79.6434f };
	Local_3416[5 /*9*/].f_4 = 52f;
	Local_3416[5 /*9*/].f_5 = joaat("s_m_y_cop_01");
	Local_3471[0 /*6*/].f_1 = { 634.4785f, -68.8406f, 74.2911f };
	Local_3471[0 /*6*/].f_4 = 24f;
	Local_3471[0 /*6*/].f_5 = joaat("prop_barrier_work04a");
	Local_3471[1 /*6*/].f_1 = { 627.1672f, -73.8742f, 73.3072f };
	Local_3471[1 /*6*/].f_4 = 33f;
	Local_3471[1 /*6*/].f_5 = joaat("prop_barrier_work04a");
	Local_3471[2 /*6*/].f_1 = { 653.2055f, -96.2269f, 73.4953f };
	Local_3471[2 /*6*/].f_4 = 238f;
	Local_3471[2 /*6*/].f_5 = joaat("prop_barrier_work04a");
	Local_3471[3 /*6*/].f_1 = { 657.0881f, -91.6722f, 73.5133f };
	Local_3471[3 /*6*/].f_4 = 58f;
	Local_3471[3 /*6*/].f_5 = joaat("prop_barrier_work04a");
	Local_3471[4 /*6*/].f_1 = { 626.6002f, -89.5324f, 72.7673f };
	Local_3471[4 /*6*/].f_4 = 72f;
	Local_3471[4 /*6*/].f_5 = joaat("prop_barrel_01a");
	Local_3471[5 /*6*/].f_1 = { 624.3754f, -88.3926f, 72.4953f };
	Local_3471[5 /*6*/].f_4 = 14f;
	Local_3471[5 /*6*/].f_5 = joaat("prop_barrel_01a");
	Local_3471[6 /*6*/].f_1 = { 626.1615f, -85.4177f, 72.9135f };
	Local_3471[6 /*6*/].f_4 = 323f;
	Local_3471[6 /*6*/].f_5 = joaat("prop_barrel_01a");
	Local_3471[7 /*6*/].f_1 = { 809.2114f, -64.1885f, 79.6407f };
	Local_3471[7 /*6*/].f_4 = 236f;
	Local_3471[7 /*6*/].f_5 = joaat("prop_barrier_work06a");
	Local_3471[8 /*6*/].f_1 = { 815.4871f, -54.4268f, 79.5902f };
	Local_3471[8 /*6*/].f_4 = 233f;
	Local_3471[8 /*6*/].f_5 = joaat("prop_barrier_work06a");
	Local_3471[9 /*6*/].f_1 = { 802.5724f, -72.9779f, 79.4857f };
	Local_3471[9 /*6*/].f_4 = 232f;
	Local_3471[9 /*6*/].f_5 = joaat("prop_barrier_work06a");
}

int func_570(var uParam0)//Position - 0x409E3
{
	int iVar0[1];
	int iVar2;
	
	iVar0[0] = joaat("jackal");
	switch (iLocal_3060)
	{
		case 0:
			uParam0->f_16 = 3;
			uParam0->f_17[0 /*3*/] = { 301.85f, 138.16f, 102.84f };
			uParam0->f_15 = 90f;
			uParam0->f_27 = 1;
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar2]);
				iVar2++;
			}
			iLocal_3060 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0))
			{
				return 0;
			}
			iLocal_3060 = 2;
			break;
		
		case 2:
			GlobalFunc_8026(&(uParam0->f_35[0]), iVar0[0], 307.02f, 143.17f, 103.3f, 250.08f);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[0], 2);
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar2]);
				iVar2++;
			}
			return 1;
			break;
	}
	return 0;
}




void func_574(int iParam0)//Position - 0x40B61
{
	int iVar0;
	
	if (GlobalFunc_9162())
	{
		func_202(iParam0);
		MISC::SET_INSTANCE_PRIORITY_HINT(0);
		AUDIO::TRIGGER_MUSIC_EVENT("PAP3_FAIL");
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_3A_POLICE_CHASE"))
		{
			AUDIO::STOP_AUDIO_SCENE("PAPARAZZO_3A_POLICE_CHASE");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_3A_PHOTO_SCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("PAPARAZZO_3A_PHOTO_SCENE");
		}
		func_583();
		GlobalFunc_9132(0);
		GlobalFunc_190(&(uLocal_3151[0]));
		GlobalFunc_190(&(uLocal_3151[1]));
		GlobalFunc_190(&(uLocal_3151[2]));
		GlobalFunc_190(&(uLocal_3151[3]));
		GlobalFunc_190(&(uLocal_3151[4]));
		GlobalFunc_190(&(uLocal_3151[5]));
		GlobalFunc_190(&(uLocal_3151[6]));
		GlobalFunc_190(&(uLocal_3151[7]));
		GlobalFunc_190(&(uLocal_3151[8]));
		GlobalFunc_190(&(uLocal_3151[9]));
		GlobalFunc_2297(&(uLocal_3162[0]), 1, 0, 1);
		GlobalFunc_2297(&(uLocal_3162[1]), 1, 0, 1);
		GlobalFunc_2297(&(uLocal_3162[2]), 1, 0, 1);
		GlobalFunc_2297(&(uLocal_3162[3]), 1, 0, 1);
		GlobalFunc_2297(&(uLocal_3162[4]), 1, 0, 1);
		GlobalFunc_2297(&(uLocal_3162[5]), 1, 0, 1);
		GlobalFunc_2297(&(uLocal_3162[6]), 1, 0, 1);
		GlobalFunc_2297(&(uLocal_3162[7]), 1, 0, 1);
		GlobalFunc_2297(&(uLocal_3162[8]), 1, 0, 1);
		GlobalFunc_2297(&(uLocal_3162[9]), 1, 0, 1);
		GlobalFunc_2297(&Local_3407, 1, 0, 1);
		GlobalFunc_2297(&iLocal_3140, 1, 0, 1);
		GlobalFunc_190(&iLocal_3139);
		if (GlobalFunc_115(Local_3284[2 /*6*/]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(Local_3284[2 /*6*/], 0);
		}
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			GlobalFunc_2297(&(Local_3370[iVar0 /*9*/]), 1, 0, 1);
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			GlobalFunc_190(&(Local_3309[iVar0 /*6*/]));
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			GlobalFunc_190(&(Local_3284[iVar0 /*6*/]));
			iVar0++;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iLocal_3137 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			VEHICLE::MODIFY_VEHICLE_TOP_SPEED(iLocal_3137, 0f);
		}
		PATHFIND::SET_ROADS_IN_AREA(318.94f, -411.6963f, 38.0267f, 421.5246f, -363.0107f, 52.0853f, 1, 1);
		PATHFIND::SET_ROADS_IN_AREA(796.4662f, -68.4078f, 79.522f, 974.3044f, -152.9081f, 72.6015f, 1, 1);
		PATHFIND::SET_ROADS_IN_AREA(683.3696f, 38.3284f, 83.277f, 707.9796f, -22.9872f, 82.654f, 1, 1);
		PATHFIND::SET_ROADS_IN_AREA(812.2689f, -40.7279f, 79.4878f, 858.4236f, -119.0339f, 78.3599f, 1, 1);
		GlobalFunc_4948(&uLocal_3777, 0, 0);
		func_404(0, 1);
	}
	GlobalFunc_9251(&Local_3076, 0, 0, 0);
	if (GlobalFunc_115(Local_3303))
	{
		VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(Local_3303, 0);
		VEHICLE::SET_VEHICLE_EXTENDED_REMOVAL_RANGE(Local_3303, 100);
	}
	GlobalFunc_2795(0);
	GlobalFunc_563(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}









void func_583()//Position - 0x40F68
{
	int iVar0;
	
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3407.f_5);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3370[iVar0 /*9*/].f_5);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3309[iVar0 /*6*/].f_5);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3284[iVar0 /*6*/].f_5);
		iVar0++;
	}
}























