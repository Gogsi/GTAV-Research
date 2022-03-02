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
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	bool bLocal_84 = 0;
	bool bLocal_85 = 0;
	bool bLocal_86 = 0;
	bool bLocal_87 = 0;
	bool bLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	bool bLocal_91 = 0;
	bool bLocal_92 = 0;
	int iLocal_93 = 0;
	bool bLocal_94 = 0;
	bool bLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	var uLocal_99 = 0;
	bool bLocal_100 = 0;
	bool bLocal_101 = 0;
	bool bLocal_102 = 0;
	int iLocal_103 = 0;
	bool bLocal_104 = 0;
	var uLocal_105 = 0;
	bool bLocal_106 = 0;
	bool bLocal_107 = 0;
	bool bLocal_108 = 0;
	bool bLocal_109 = 0;
	bool bLocal_110 = 0;
	bool bLocal_111 = 0;
	bool bLocal_112 = 0;
	bool bLocal_113 = 0;
	bool bLocal_114 = 0;
	bool bLocal_115 = 0;
	float fLocal_116[100] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_217[100] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_318[100] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_419[100] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_520[100] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_621 = 0f;
	float fLocal_622 = 0f;
	float fLocal_623 = 0f;
	float fLocal_624 = 0f;
	float fLocal_625[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_651[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_677[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_703[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_729[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_755[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_781[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_797[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_813[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_829[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_845 = 0f;
	float fLocal_846 = 0f;
	float fLocal_847 = 0f;
	float fLocal_848 = 0f;
	float fLocal_849 = 0f;
	float fLocal_850 = 0f;
	float fLocal_851 = 0f;
	float fLocal_852 = 0f;
	float fLocal_853 = 0f;
	float fLocal_854 = 0f;
	float fLocal_855 = 0f;
	float fLocal_856 = 0f;
	float fLocal_857 = 0f;
	float fLocal_858 = 0f;
	float fLocal_859 = 0f;
	float fLocal_860 = 0f;
	float fLocal_861 = 0f;
	float fLocal_862 = 0f;
	float fLocal_863 = 0f;
	float fLocal_864 = 0f;
	float fLocal_865 = 0f;
	int iLocal_866[100] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_967[100] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1068[100] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1169[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1195[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1221[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1247[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1263 = 0;
	int iLocal_1264 = 0;
	int iLocal_1265 = 0;
	int iLocal_1266 = 0;
	int iLocal_1267 = 0;
	int iLocal_1268 = 0;
	int iLocal_1269 = 0;
	int iLocal_1270 = 0;
	int iLocal_1271 = 0;
	int iLocal_1272 = 0;
	int iLocal_1273 = 0;
	int iLocal_1274 = 0;
	int iLocal_1275 = 0;
	int iLocal_1276 = 0;
	int iLocal_1277 = 0;
	int iLocal_1278 = 0;
	int iLocal_1279 = 0;
	struct<3> Local_1280[100];
	struct<3> Local_1581[15];
	struct<3> Local_1627[25];
	struct<3> Local_1703 = { 0, 0, 0 } ;
	struct<3> Local_1706 = { 0, 0, 0 } ;
	struct<3> Local_1709 = { 0, 0, 0 } ;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	struct<3> Local_1718 = { 0, 0, 0 } ;
	struct<3> Local_1721 = { 0, 0, 0 } ;
	struct<3> Local_1724 = { 0, 0, 0 } ;
	struct<3> Local_1727 = { 0, 0, 0 } ;
	char cLocal_1730[64] = "";
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	int iLocal_1747[100] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1848[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1864[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1890 = 0;
	int iLocal_1891 = 0;
	int iLocal_1892 = 0;
	int iLocal_1893[100] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1994[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2017[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2033[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2059[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_2066 = 0;
	int iLocal_2067 = 0;
	int iLocal_2068 = 0;
	var uLocal_2069 = 22;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	int iLocal_2095 = 0;
	int iLocal_2096 = 0;
	int iLocal_2097 = 0;
	int iLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	struct<61> Local_2104 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_2165 = { 0, 0, 0 } ;
	float fLocal_2168 = 0f;
	int iLocal_2169 = 0;
	var uLocal_2170 = 0;
	int iLocal_2171 = 0;
	var uLocal_2172 = 0;
	var uLocal_2173 = 0;
	int iLocal_2174 = 0;
	int iLocal_2175 = 0;
	int iLocal_2176 = 0;
	int iLocal_2177 = 0;
	int iLocal_2178 = 0;
	var uLocal_2179 = 0;
	int iLocal_2180 = 0;
	int iLocal_2181 = 0;
	int iLocal_2182 = 0;
	int iLocal_2183 = 0;
	int iLocal_2184 = 0;
	int iLocal_2185 = 0;
	int iLocal_2186 = 0;
	int iLocal_2187 = 0;
	int iLocal_2188 = 0;
	int iLocal_2189 = 0;
	int iLocal_2190 = 0;
	int iLocal_2191 = 0;
	int iLocal_2192 = 0;
	int iLocal_2193 = 0;
	int iLocal_2194 = 0;
	int iLocal_2195 = 0;
	int iLocal_2196 = 0;
	int iLocal_2197 = 0;
	int iLocal_2198 = 0;
	int iLocal_2199 = 0;
	int iLocal_2200 = 0;
	int iLocal_2201 = 0;
	int iLocal_2202 = 0;
	int iLocal_2203 = 0;
	int iLocal_2204 = 0;
	int iLocal_2205 = 0;
	int iLocal_2206 = 0;
	int iLocal_2207 = 0;
	int iLocal_2208 = 0;
	int iLocal_2209 = 0;
	int iLocal_2210 = 0;
	int iLocal_2211 = 0;
	int iLocal_2212 = 0;
	int iLocal_2213 = 0;
	int iLocal_2214 = 0;
	int iLocal_2215 = 0;
	int iLocal_2216 = 0;
	int iLocal_2217 = 0;
	int iLocal_2218 = 0;
	int iLocal_2219 = 0;
	int iLocal_2220 = 0;
	int iLocal_2221 = 0;
	int iLocal_2222 = 0;
	int iLocal_2223 = 0;
	bool bLocal_2224 = 0;
	int iLocal_2225 = 0;
	int iLocal_2226 = 0;
	int iLocal_2227 = 0;
	int iLocal_2228 = 0;
	int iLocal_2229 = 0;
	int iLocal_2230 = 0;
	int iLocal_2231 = 0;
	int iLocal_2232 = 0;
	int iLocal_2233 = 0;
	int iLocal_2234 = 0;
	int iLocal_2235 = 0;
	bool bLocal_2236 = 0;
	int iLocal_2237 = 0;
	int iLocal_2238 = 0;
	int iLocal_2239 = 0;
	int iLocal_2240 = 0;
	int iLocal_2241 = 0;
	int iLocal_2242 = 0;
	int iLocal_2243 = 0;
	int iLocal_2244 = 0;
	int iLocal_2245 = 0;
	int iLocal_2246 = 0;
	bool bLocal_2247 = 0;
	int iLocal_2248 = 0;
	int iLocal_2249 = 0;
	int iLocal_2250 = 0;
	int iLocal_2251 = 0;
	int iLocal_2252 = 0;
	int iLocal_2253 = 0;
	int iLocal_2254 = 0;
	int iLocal_2255 = 0;
	int iLocal_2256 = 0;
	int iLocal_2257 = 0;
	int iLocal_2258 = 0;
	int iLocal_2259 = 0;
	int iLocal_2260 = 0;
	int iLocal_2261 = 0;
	bool bLocal_2262 = 0;
	bool bLocal_2263 = 0;
	bool bLocal_2264 = 0;
	int iLocal_2265 = 0;
	int iLocal_2266 = 0;
	int iLocal_2267 = 0;
	int iLocal_2268 = 0;
	int iLocal_2269 = 0;
	int iLocal_2270 = 0;
	int iLocal_2271 = 0;
	int iLocal_2272 = 0;
	int iLocal_2273 = 0;
	int iLocal_2274 = 0;
	int iLocal_2275 = 0;
	int iLocal_2276 = 0;
	int iLocal_2277 = 0;
	int iLocal_2278 = 0;
	int iLocal_2279 = 0;
	int iLocal_2280 = 0;
	int iLocal_2281 = 0;
	int iLocal_2282 = 0;
	int iLocal_2283 = 0;
	bool bLocal_2284 = 0;
	int iLocal_2285 = 0;
	int iLocal_2286 = 0;
	int iLocal_2287 = 0;
	int iLocal_2288 = 0;
	float fLocal_2289 = 0f;
	float fLocal_2290 = 0f;
	float fLocal_2291 = 0f;
	float fLocal_2292 = 0f;
	float fLocal_2293 = 0f;
	var uLocal_2294 = 0;
	float fLocal_2295 = 0f;
	float fLocal_2296 = 0f;
	int iLocal_2297 = 0;
	var uLocal_2298 = 0;
	float fLocal_2299 = 0f;
	var uLocal_2300 = 0;
	int iLocal_2301 = 0;
	int iLocal_2302 = 0;
	int iLocal_2303 = 0;
	int iLocal_2304 = 0;
	int iLocal_2305 = 0;
	var uLocal_2306 = 0;
	var uLocal_2307[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_2314[5] = { 0, 0, 0, 0, 0 };
	int iLocal_2320 = 0;
	int iLocal_2321 = 0;
	bool bLocal_2322 = 0;
	int iLocal_2323 = 0;
	int iLocal_2324 = 0;
	int iLocal_2325[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2341[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2357 = 0;
	int iLocal_2358 = 0;
	int iLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = 0;
	int iLocal_2364 = 0;
	int iLocal_2365 = 0;
	int iLocal_2366 = 0;
	int iLocal_2367 = 0;
	int iLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = 0;
	var uLocal_2376 = 0;
	var uLocal_2377 = 0;
	var uLocal_2378 = 0;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = 0;
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 0;
	var uLocal_2411 = 0;
	var uLocal_2412 = 0;
	var uLocal_2413 = 0;
	var uLocal_2414 = 0;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = 0;
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 0;
	var uLocal_2423 = 0;
	var uLocal_2424 = 0;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = 0;
	var uLocal_2447 = 0;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	int iLocal_2450 = 0;
	struct<3> Local_2451 = { 0, 0, 0 } ;
	struct<3> Local_2454 = { 0, 0, 0 } ;
	struct<3> Local_2457 = { 0, 0, 0 } ;
	struct<3> Local_2460[3];
	struct<3> Local_2470 = { 0, 0, 0 } ;
	struct<3> Local_2473 = { 0, 0, 0 } ;
	struct<3> Local_2476 = { 0, 0, 0 } ;
	struct<3> Local_2479 = { 0, 0, 0 } ;
	struct<3> Local_2482 = { 0, 0, 0 } ;
	struct<3> Local_2485[8];
	float fLocal_2510 = 0f;
	float fLocal_2511 = 0f;
	float fLocal_2512[3] = { 0f, 0f, 0f };
	var uLocal_2516 = 0;
	char* sLocal_2517 = NULL;
	struct<3> Local_2518 = { 0, 0, 255 } ;
	struct<8> Local_2521[4];
	int iLocal_2554 = 0;
	var uLocal_2555 = 0;
	var uLocal_2556 = 0;
	var uLocal_2557 = 0;
	var uLocal_2558 = 0;
	struct<5> Local_2559 = { 0, 0, 0, 0, 0 } ;
	struct<5> Local_2564 = { 0, 0, 0, 0, 0 } ;
	struct<5> Local_2569 = { 0, 0, 0, 0, 0 } ;
	struct<5> Local_2574[2];
	struct<4> Local_2585[2];
	struct<5> Local_2594[5];
	struct<3> Local_2620[3];
	int iLocal_2630 = 0;
	int iLocal_2631 = 0;
	var uLocal_2632 = 16;
	var uLocal_2633 = 0;
	var uLocal_2634 = 0;
	var uLocal_2635 = 0;
	var uLocal_2636 = 0;
	var uLocal_2637 = 0;
	var uLocal_2638 = 0;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
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
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = 0;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 0;
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	var uLocal_2684 = 0;
	var uLocal_2685 = 0;
	var uLocal_2686 = 0;
	var uLocal_2687 = 0;
	var uLocal_2688 = 0;
	var uLocal_2689 = 0;
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 0;
	var uLocal_2698 = 0;
	var uLocal_2699 = 0;
	var uLocal_2700 = 0;
	var uLocal_2701 = 0;
	var uLocal_2702 = 0;
	var uLocal_2703 = 0;
	var uLocal_2704 = 0;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 0;
	var uLocal_2708 = 0;
	var uLocal_2709 = 0;
	var uLocal_2710 = 0;
	var uLocal_2711 = 0;
	var uLocal_2712 = 0;
	var uLocal_2713 = 0;
	var uLocal_2714 = 0;
	var uLocal_2715 = 0;
	var uLocal_2716 = 0;
	var uLocal_2717 = 0;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 0;
	var uLocal_2727 = 0;
	var uLocal_2728 = 0;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = 0;
	var uLocal_2732 = 0;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
	var uLocal_2737 = 0;
	var uLocal_2738 = 0;
	var uLocal_2739 = 0;
	var uLocal_2740 = 0;
	var uLocal_2741 = 0;
	var uLocal_2742 = 0;
	var uLocal_2743 = 0;
	var uLocal_2744 = 0;
	var uLocal_2745 = 0;
	var uLocal_2746 = 0;
	var uLocal_2747 = 0;
	var uLocal_2748 = 0;
	var uLocal_2749 = 0;
	var uLocal_2750 = 0;
	var uLocal_2751 = 0;
	var uLocal_2752 = 0;
	var uLocal_2753 = 0;
	var uLocal_2754 = 0;
	var uLocal_2755 = 0;
	var uLocal_2756 = 0;
	var uLocal_2757 = 0;
	var uLocal_2758 = 0;
	var uLocal_2759 = 0;
	var uLocal_2760 = 0;
	var uLocal_2761 = 0;
	var uLocal_2762 = 0;
	var uLocal_2763 = 0;
	var uLocal_2764 = 0;
	var uLocal_2765 = 0;
	var uLocal_2766 = 0;
	var uLocal_2767 = 0;
	var uLocal_2768 = 0;
	var uLocal_2769 = 0;
	var uLocal_2770 = 0;
	var uLocal_2771 = 0;
	var uLocal_2772 = 0;
	var uLocal_2773 = 0;
	var uLocal_2774 = 0;
	var uLocal_2775 = 0;
	var uLocal_2776 = 0;
	var uLocal_2777 = 0;
	var uLocal_2778 = 0;
	var uLocal_2779 = 0;
	var uLocal_2780 = 0;
	var uLocal_2781 = 0;
	var uLocal_2782 = 0;
	var uLocal_2783 = 0;
	var uLocal_2784 = 0;
	var uLocal_2785 = 0;
	var uLocal_2786 = 0;
	var uLocal_2787 = 0;
	var uLocal_2788 = 0;
	var uLocal_2789 = 0;
	var uLocal_2790 = 0;
	var uLocal_2791 = 0;
	var uLocal_2792 = 0;
	var uLocal_2793 = 0;
	var uLocal_2794 = 0;
	var uLocal_2795 = 0;
	var uLocal_2796 = 0;
	int iLocal_2797 = 0;
	int iLocal_2798[3] = { 0, 0, 0 };
	int iLocal_2802 = 0;
	int iLocal_2803 = 0;
	int iLocal_2804 = 0;
	int iLocal_2805[2] = { 0, 0 };
	int iLocal_2808 = 0;
	int iLocal_2809 = 0;
	var uLocal_2810 = 0;
	var uLocal_2811 = 0;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	bool bLocal_2816 = 0;
	int iLocal_2817 = 0;
	int iLocal_2818 = 0;
	float fLocal_2819 = 0f;
	float fLocal_2820 = 0f;
	bool bLocal_2821 = 0;
	int iLocal_2822 = 0;
	float fLocal_2823 = 0f;
	float fLocal_2824 = 0f;
	float fLocal_2825 = 0f;
	float fLocal_2826 = 0f;
	float fLocal_2827 = 0f;
	float fLocal_2828 = 0f;
	float fLocal_2829 = 0f;
	float fLocal_2830 = 0f;
	float fLocal_2831 = 0f;
	float fLocal_2832 = 0f;
	int iLocal_2833 = 0;
	float fLocal_2834 = 0f;
	float fLocal_2835 = 0f;
	float fLocal_2836 = 0f;
	float fLocal_2837 = 0f;
	float fLocal_2838 = 0f;
	var uLocal_2839 = 0;
	int iLocal_2840 = 0;
	int iLocal_2841 = 0;
	int iLocal_2842 = 0;
	int iLocal_2843 = 0;
	int iLocal_2844 = 0;
	int iLocal_2845[2] = { 0, 0 };
	int iLocal_2848 = 0;
	int iLocal_2849 = 0;
	char* sLocal_2850 = NULL;
	int iLocal_2851 = 0;
	int iLocal_2852 = 0;
	bool bLocal_2853 = 0;
	int iLocal_2854 = 0;
	int iLocal_2855 = 0;
	int iLocal_2856 = 0;
	int iLocal_2857 = 0;
	int iLocal_2858 = 0;
	int iLocal_2859 = 0;
	bool bLocal_2860 = 0;
	bool bLocal_2861 = 0;
	bool bLocal_2862 = 0;
	int iLocal_2863 = 0;
	int iLocal_2864 = 0;
	int iLocal_2865 = 0;
	int iLocal_2866 = 0;
	int iLocal_2867 = 0;
	int iLocal_2868 = 0;
	int iLocal_2869 = 0;
	int iLocal_2870 = 0;
	int iLocal_2871 = 0;
	int iLocal_2872 = 0;
	int iLocal_2873 = 0;
	int iLocal_2874 = 0;
	int iLocal_2875 = 0;
	bool bLocal_2876 = 0;
	bool bLocal_2877 = 0;
	int iLocal_2878 = 0;
	bool bLocal_2879 = 0;
	bool bLocal_2880 = 0;
	int iLocal_2881 = 0;
	int iLocal_2882 = 0;
	int iLocal_2883 = 0;
	int iLocal_2884 = 0;
	int iLocal_2885 = 0;
	int iLocal_2886 = 0;
	int iLocal_2887 = 0;
	int iLocal_2888 = 0;
	int iLocal_2889 = 0;
	int iLocal_2890 = 0;
	int iLocal_2891 = 0;
	int iLocal_2892 = 0;
	int iLocal_2893 = 0;
	int iLocal_2894 = 0;
	int iLocal_2895 = 0;
	int iLocal_2896 = 0;
	float fLocal_2897 = 0f;
	var uLocal_2898 = 0;
	struct<4> Local_2899 = { 0, 0, 0, 0 } ;
	struct<4> Local_2903 = { 0, 0, 0, 0 } ;
	char[] cLocal_2907[8] = 0;
	char* sLocal_2908 = NULL;
	char* sLocal_2909 = NULL;
	int iLocal_2910 = 0;
	int iLocal_2911 = 0;
	int iLocal_2912 = 0;
	var uLocal_2913 = 0;
	var uLocal_2914[3] = { 0, 0, 0 };
	int iLocal_2918 = 0;
	int iLocal_2919 = 0;
	int iLocal_2920 = 0;
	int iLocal_2921 = 0;
	int iLocal_2922 = 0;
	int iLocal_2923 = 0;
	int iLocal_2924 = 0;
	int iLocal_2925 = 0;
	struct<61> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	uLocal_79 = GlobalFunc_4946(50);
	iLocal_80 = joaat("pcj");
	bLocal_85 = true;
	bLocal_92 = true;
	bLocal_114 = true;
	fLocal_845 = 120f;
	fLocal_846 = 0f;
	fLocal_848 = 1f;
	fLocal_849 = 0f;
	fLocal_850 = 1f;
	fLocal_851 = 30f;
	fLocal_853 = 1f;
	fLocal_854 = 5f;
	fLocal_855 = 1f;
	fLocal_856 = 1f;
	fLocal_857 = 100f;
	fLocal_858 = 100f;
	fLocal_859 = 0f;
	fLocal_860 = 7000f;
	fLocal_861 = 0f;
	fLocal_862 = 0f;
	fLocal_863 = 0.3f;
	fLocal_864 = 0.5f;
	fLocal_865 = 50f;
	iLocal_1266 = -1;
	iLocal_1274 = -1;
	iLocal_1275 = -1;
	iLocal_2095 = 1;
	iLocal_2096 = 65;
	iLocal_2097 = 49;
	iLocal_2098 = 64;
	uLocal_2102 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_2103 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	Local_2165 = { -70.3883f, 301.2539f, 105.8003f };
	fLocal_2168 = 66.86f;
	fLocal_2299 = 1f;
	iLocal_2364 = AUDIO::GET_SOUND_ID();
	iLocal_2365 = AUDIO::GET_SOUND_ID();
	uLocal_2366 = AUDIO::GET_SOUND_ID();
	uLocal_2367 = AUDIO::GET_SOUND_ID();
	Local_2451 = { -74.1683f, 299.9258f, 105.4432f };
	Local_2454 = { -74f, 300f, 102f };
	Local_2457 = { -78.9112f, 299.3701f, 105.4327f };
	Local_2470 = { 0f, 0f, 0f };
	Local_2473 = { 0f, -2.1f, 0.6f };
	Local_2476 = { -29.4167f, 302.7094f, 111.6957f };
	Local_2479 = { -75.1476f, 359.3089f, 111.4346f };
	Local_2482 = { 41.4266f, 312.7768f, 140.231f };
	fLocal_2510 = 235.4094f;
	fLocal_2511 = 249.8696f;
	sLocal_2517 = "PAPARAZZO_02_SOUNDSETS";
	iLocal_2630 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	iLocal_2631 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	iLocal_2797 = joaat("fq2");
	iLocal_2802 = joaat("u_m_y_justin");
	iLocal_2803 = joaat("u_f_y_poppymich");
	iLocal_2804 = joaat("s_m_m_bouncer_01");
	fLocal_2819 = 0f;
	fLocal_2820 = 0f;
	iLocal_2822 = 1;
	fLocal_2823 = 0.013f;
	fLocal_2824 = 0.013f;
	fLocal_2825 = 0.46f;
	fLocal_2826 = 0.457f;
	fLocal_2827 = 0.54f;
	fLocal_2828 = 0.457f;
	fLocal_2829 = 0.46f;
	fLocal_2830 = 0.548f;
	fLocal_2831 = 0.54f;
	fLocal_2832 = 0.548f;
	iLocal_2833 = 1500;
	fLocal_2834 = 1f;
	fLocal_2835 = 0.4f;
	fLocal_2836 = 0f;
	fLocal_2837 = 0f;
	fLocal_2838 = 0.877f;
	iLocal_2851 = joaat("sadler");
	bLocal_2862 = true;
	iLocal_2863 = 1;
	fLocal_2897 = 0.9f;
	StringCopy(&Local_2899, "pap2_Bev_routeC", 16);
	StringCopy(&Local_2903, "pap2_Bev_route9", 16);
	cLocal_2907 = "PAP2AUD";
	sLocal_2908 = "random@escape_paparazzi@standing@";
	sLocal_2909 = "random@escape_paparazzi@standing@";
	Local_2104 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_2104);
	uLocal_2362 = func_652();
	MISC::SET_MISSION_FLAG(1);
	GlobalFunc_563(1);
	STREAMING::REQUEST_ANIM_DICT("rcmpaparazzo_2");
	if (GlobalFunc_2(0))
	{
		while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmpaparazzo_2"))
		{
			SYSTEM::WAIT(0);
		}
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		func_635(1);
		func_625();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (GlobalFunc_199())
	{
		Global_68490 = 1;
		iLocal_78 = 0;
		while (!func_617(&Local_2104))
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_4923(&Local_2104, 0, 1);
		Global_68490 = 0;
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_81))
	{
		PED::_DISPOSE_SYNCHRONIZED_SCENE(uLocal_81);
	}
	iLocal_2918 = Local_2104.f_35[0];
	Local_2104.f_35[0] = 0;
	STREAMING::REQUEST_MODEL(joaat("prop_pap_camera_01"));
	STREAMING::REQUEST_CLIP_SET(sLocal_2908);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	AUDIO::SET_AMBIENT_ZONE_STATE("AZ_PAPARAZZO_02_AMBIENCE", 1, 1);
	MISC::CLEAR_AREA_OF_OBJECTS(-30.8601f, 301.192f, 112.1164f, 10f, 0);
	if (GlobalFunc_199() && iLocal_2854 == 0)
	{
		iLocal_2554 = Local_2104.f_28[0];
		Local_2104.f_28[0] = 0;
		if (GlobalFunc_4924(iLocal_2554))
		{
			PED::SET_PED_LEG_IK_MODE(iLocal_2554, 1);
		}
	}
	else if (!GlobalFunc_199())
	{
		if ((GlobalFunc_4924(Local_2104.f_28[0]) && GlobalFunc_4924(PLAYER::PLAYER_PED_ID())) && !GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_2104.f_28[0], 4f))
		{
			bLocal_2322 = true;
		}
	}
	PED::ADD_RELATIONSHIP_GROUP("POPPY_GROUP", &uLocal_2839);
	if (GlobalFunc_199())
	{
		MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
	}
	else
	{
		MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 10f);
	}
	GlobalFunc_9621(50, 1, 0);
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::_0x208784099002BC30("SF_TST", 0);
		func_610();
		if (CAM::DOES_CAM_EXIST(uLocal_2814))
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::THEFEED_HIDE_THIS_FRAME();
			GlobalFunc_7629();
			CAM::SET_USE_HI_DOF();
		}
		func_590(Local_2104.f_9, 0, 0, 0, 0, 0);
		if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
		{
			if ((iLocal_2840 != 11 && iLocal_2840 != 0) && iLocal_2840 != 1)
			{
				func_585();
			}
			switch (iLocal_2840)
			{
				case 0:
					func_566();
					break;
				
				case 1:
					func_555();
					break;
				
				case 2:
					func_494();
					break;
				
				case 3:
					func_494();
					break;
				
				case 4:
					func_494();
					break;
				
				case 5:
					func_493();
					break;
				
				case 6:
					func_480();
					break;
				
				case 7:
					func_459();
					break;
				
				case 8:
					func_326();
					break;
				
				case 9:
					func_230();
					break;
				
				case 10:
					func_27();
					break;
				
				case 11:
					func_1();
					break;
				
				case 12:
					break;
				
				case 13:
					break;
				
				case 14:
					break;
				}
		}
	}
}

void func_1()//Position - 0x59E
{
	if (iLocal_2174 != 0)
	{
		if (CAM::DOES_CAM_EXIST(uLocal_2811))
		{
			fLocal_2289 = CAM::GET_CAM_FOV(uLocal_2811);
		}
		func_14(0);
	}
	switch (iLocal_2841)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			AUDIO::TRIGGER_MUSIC_EVENT("PAP2_FAIL");
			if (iLocal_2248 == 1)
			{
				GlobalFunc_587("TK bPutCamInFranksHand = TRUE");
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2305))
				{
					GlobalFunc_587("TK CAM EXISTS");
					ENTITY::DETACH_ENTITY(iLocal_2305, 1, 1);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_2305, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
				}
			}
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_2364))
			{
				AUDIO::STOP_SOUND(iLocal_2364);
			}
			func_11();
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_2850))
			{
				func_9(sLocal_2850, 1);
			}
			else
			{
				func_635(1);
			}
			iLocal_2841 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				func_2();
				func_625();
				SCRIPT::TERMINATE_THIS_THREAD();
			}
			break;
	}
}

void func_2()//Position - 0x683
{
	int iVar0;
	
	GlobalFunc_69(&iLocal_2554);
	GlobalFunc_69(&Local_2559);
	GlobalFunc_69(&Local_2564);
	GlobalFunc_69(&Local_2569);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		GlobalFunc_69(&(Local_2574[iVar0 /*5*/]));
		iVar0++;
	}
	if (iLocal_2241 == 1)
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			GlobalFunc_6692(&(uLocal_2914[iVar0]));
			iVar0++;
		}
	}
	if (iLocal_2241 == 1)
	{
		GlobalFunc_6692(&iLocal_2918);
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		GlobalFunc_130(&(Local_2521[iVar0 /*8*/]));
		iVar0++;
	}
}







void func_9(char* sParam0, bool bParam1)//Position - 0x890
{
	GlobalFunc_509(sParam0);
	func_635(bParam1);
}


void func_11()//Position - 0x8E3
{
	GlobalFunc_146(&iLocal_2809);
	GlobalFunc_146(&iLocal_2808);
}



void func_14(bool bParam0)//Position - 0x921
{
	if ((CAM::DOES_CAM_EXIST(uLocal_2811) && GlobalFunc_115(iLocal_2918)) && GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		if (CAM::DOES_CAM_EXIST(uLocal_2812))
		{
			CAM::DESTROY_CAM(uLocal_2812, 0);
		}
		if (CAM::DOES_CAM_EXIST(uLocal_2814))
		{
			CAM::DESTROY_CAM(uLocal_2814, 0);
		}
		if (CAM::DOES_CAM_EXIST(uLocal_2815))
		{
			CAM::DESTROY_CAM(uLocal_2815, 0);
		}
		GRAPHICS::SET_TIMECYCLE_MODIFIER("player_transition_scanlines");
		GRAPHICS::SET_TIMECYCLE_MODIFIER_STRENGTH(0.15f);
		if (bParam0)
		{
			func_26();
		}
		else
		{
			func_19();
		}
		func_17();
		if (iLocal_2822 && !HUD::IS_PAUSE_MENU_ACTIVE())
		{
			func_15(Local_2559);
		}
		CAM::SET_CAM_NEAR_DOF(uLocal_2811, 2f);
		CAM::SET_CAM_FAR_DOF(uLocal_2811, 60f);
		CAM::SET_CAM_DOF_STRENGTH(uLocal_2811, 0.5f);
		CAM::SET_USE_HI_DOF();
		PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 272, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 273, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 270, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 271, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 281, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 281, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
	}
}

void func_15(int iParam0)//Position - 0xA38
{
	struct<3> Var0;
	float fVar3;
	
	fVar3 = func_16(iParam0, &Var0);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(73, 73);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::SET_DRAW_ORIGIN(Var0, 0);
	fVar3 = (fVar3 * 0.03f);
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (-fVar3 * 0.5f), -fVar3, 0.013f, 0.013f, 0f, Local_2518.x, Local_2518.f_1, Local_2518.f_2, 200, 1);
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (fVar3 * 0.5f), -fVar3, 0.013f, 0.013f, 90f, Local_2518.x, Local_2518.f_1, Local_2518.f_2, 200, 1);
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (-fVar3 * 0.5f), fVar3, 0.013f, 0.013f, 270f, Local_2518.x, Local_2518.f_1, Local_2518.f_2, 200, 1);
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (fVar3 * 0.5f), fVar3, 0.013f, 0.013f, 180f, Local_2518.x, Local_2518.f_1, Local_2518.f_2, 200, 1);
	GRAPHICS::CLEAR_DRAW_ORIGIN();
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

float func_16(int iParam0, var uParam1)//Position - 0xB45
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (GlobalFunc_4924(iParam0))
	{
		iVar0 = PED::GET_PED_BONE_INDEX(iParam0, 31086);
		if (iVar0 != -1)
		{
			*uParam1 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, iVar0) };
			if (iLocal_2840 == 5 || iLocal_2840 == 6)
			{
				*uParam1 = { *uParam1 + Vector(fLocal_2837, 0f, fLocal_2836) };
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
			{
				if (((((((PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "rcmpaparazzo_2ig_3", "pm_incar_fuckinlosers", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "rcmpaparazzo_2ig_3", "pm_incar_gimmethtcam", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "rcmpaparazzo_2ig_3", "pm_incar_ih8u", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "rcmpaparazzo_2ig_3", "pm_incar_illsueyou", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "rcmpaparazzo_2ig_3", "pm_incar_imavirgin", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "rcmpaparazzo_2ig_3", "pm_incar_itwasyoga", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "rcmpaparazzo_2ig_3", "pm_incar_notdoinanythin", 3))
				{
					ENTITY::PROCESS_ENTITY_ATTACHMENTS(iParam0);
					*uParam1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
					uParam1->f_2 = (uParam1->f_2 + 0.08f);
				}
				else
				{
					ENTITY::PROCESS_ENTITY_ATTACHMENTS(iParam0);
					*uParam1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
					uParam1->f_2 = (uParam1->f_2 + 0.08f);
				}
			}
			if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::DOES_CAM_EXIST(uLocal_2811))
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(*uParam1, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1);
					fVar2 = (IntToFloat(iLocal_2833) / (CAM::GET_CAM_FOV(uLocal_2811) * fVar1));
					if (fVar2 < fLocal_2835)
					{
						fVar2 = fLocal_2835;
					}
					if (fVar2 > fLocal_2834)
					{
						fVar2 = fLocal_2834;
					}
					return fVar2;
				}
			}
		}
	}
	return 0f;
}

void func_17()//Position - 0xCE7
{
	if (iLocal_2887 == 0)
	{
	}
	HUD::SET_TEXT_COLOUR(255, 0, 0, 255);
	GlobalFunc_2008(0.8f, 0.78f, "PAP2_REC", 0);
	HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
	iLocal_2887++;
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", fLocal_2825, fLocal_2826, fLocal_2824, fLocal_2823, 0f, 255, 255, 255, 200, 1);
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", fLocal_2827, fLocal_2828, fLocal_2824, fLocal_2823, 90f, 255, 255, 255, 200, 1);
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", fLocal_2829, fLocal_2830, fLocal_2824, fLocal_2823, 270f, 255, 255, 255, 200, 1);
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", fLocal_2831, fLocal_2832, fLocal_2824, fLocal_2823, 180f, 255, 255, 255, 200, 1);
}


void func_19()//Position - 0xDC9
{
	struct<3> Var0;
	var uVar3;
	float fVar4;
	struct<3> Var5;
	struct<3> Var8;
	float fVar11;
	float fVar12;
	struct<3> Var13;
	struct<3> Var16;
	float fVar19;
	struct<3> Var20;
	
	Var0 = { CAM::GET_CAM_ROT(uLocal_2811, 2) };
	uVar3 = CAM::GET_CAM_FOV(uLocal_2811);
	fVar4 = (ENTITY::GET_ENTITY_HEADING(iLocal_2918) - 180f);
	if (GlobalFunc_115(iLocal_2918))
	{
		Var5 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_2918) };
		ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_2918);
	}
	Var5.x = (Var5.x * -1f);
	Var5.f_1 = (Var5.f_1 * -1f);
	Var5.f_2 = (Var5.f_2 * -1f);
	Var8.f_2 = MISC::GET_HEADING_FROM_VECTOR_2D(Var5.x, Var5.f_1);
	fVar11 = (Var8.f_2 + 78f);
	fVar12 = (Var8.f_2 - 78f);
	Var13 = { func_25(Var0.f_2) };
	Var16 = { func_25(fVar4) };
	fVar19 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var13.x, Var13.f_1, Var16.x, Var16.f_1);
	if (fVar19 >= 78f)
	{
		if (iLocal_2286)
		{
			Var0.f_2 = fVar12;
		}
		else
		{
			Var0.f_2 = fVar11;
		}
	}
	else
	{
		iLocal_2286 = 0;
	}
	if (bLocal_2821)
	{
		func_22(&Var8, &uVar3, 0);
		Var8.f_2 = func_21(Var8.f_2, fVar12, fVar11);
		Var8.x = func_20(Var8.x, -1035468800, 1109393408);
		Var8.f_1 = ENTITY::GET_ENTITY_ROLL(iLocal_2918);
	}
	else
	{
		func_22(&Var0, &uVar3, 0);
		Var0.x = func_20(Var0.x, -30f, 30f);
		Var0.f_1 = ENTITY::GET_ENTITY_ROLL(iLocal_2918);
	}
	Var20 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2918, Local_2473) };
	if (bLocal_2821)
	{
		CAM::SET_CAM_PARAMS(uLocal_2811, Var20, Var8, uVar3, 0, 1, 1, 2);
	}
	else
	{
		CAM::SET_CAM_PARAMS(uLocal_2811, Var20, Var0.x, Var0.f_1, Var0.f_2, fVar3, 0, 1, 1, 2);
	}
}

float func_20(float fParam0, float fParam1, float fParam2)//Position - 0xF4E
{
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam2)
	{
		fParam0 = fParam2;
	}
	return fParam0;
}

float func_21(float fParam0, float fParam1, float fParam2)//Position - 0xF70
{
	if (fParam0 < fParam1)
	{
		GlobalFunc_587("YAW CAPPED ----------");
		fParam0 = fParam1;
	}
	if (fParam0 > fParam2)
	{
		GlobalFunc_587("YAW CAPPED ++++++++++");
		fParam0 = fParam2;
	}
	return fParam0;
}

void func_22(var uParam0, var uParam1, bool bParam2)//Position - 0xFA2
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	fVar7 = 25f;
	if (bParam2)
	{
		fVar7 = 7.5f;
	}
	if (MISC::IS_SNIPER_INVERTED())
	{
		GlobalFunc_255(&iVar1, &iVar0, &uVar2, &iVar3, 0, 0);
	}
	else
	{
		GlobalFunc_255(&uVar2, &iVar3, &iVar1, &iVar0, 0, 0);
	}
	if (!PAD::IS_LOOK_INVERTED())
	{
		iVar0 = (iVar0 * -1);
	}
	if (!bParam2)
	{
		if (CAM::IS_SPHERE_VISIBLE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2918, -2f, -2.6f, 0f), 1f))
		{
			iLocal_2286 = 1;
		}
	}
	iVar3 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 39) * 127f));
	if (iVar3 < 0 || iVar3 > 0)
	{
		*uParam1 = (*uParam1 + ((SYSTEM::TO_FLOAT(iVar3) / 5f) * SYSTEM::TIMESTEP()));
		if (*uParam1 < fVar7)
		{
			*uParam1 = fVar7;
		}
		else if (*uParam1 > 45f)
		{
			*uParam1 = 45f;
		}
	}
	fVar6 = MISC::ABSF((SYSTEM::TO_FLOAT(iVar3) / 127f));
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_2172))
	{
		fVar8 = (*uParam1 - 7.5f);
		fVar8 = (fVar8 / 37.5f);
		if (fVar8 > 0.6f)
		{
			fVar8 = 0.6f;
		}
	}
	if (fVar6 < 0f)
	{
		fVar6 = 0f;
	}
	if (fVar6 > 1f)
	{
		fVar6 = 1f;
	}
	if (fLocal_2289 > *uParam1)
	{
		if (iLocal_2191 == 1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_2364))
			{
				AUDIO::STOP_SOUND(iLocal_2364);
			}
		}
		AUDIO::SET_VARIABLE_ON_SOUND(iLocal_2364, "ZOOM_FUNCTION", 0f);
		AUDIO::SET_VARIABLE_ON_SOUND(iLocal_2364, "ZOOM_SPEED", fVar6);
		if (AUDIO::HAS_SOUND_FINISHED(iLocal_2364))
		{
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_2364, "ZOOM", "PAPARAZZO_02_SOUNDSETS", 1);
			iLocal_2191 = 0;
		}
		iLocal_2285 = 1;
	}
	else if (fLocal_2289 < *uParam1)
	{
		if (iLocal_2191 == 0)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_2364))
			{
				AUDIO::STOP_SOUND(iLocal_2364);
			}
		}
		AUDIO::SET_VARIABLE_ON_SOUND(iLocal_2364, "ZOOM_FUNCTION", 1f);
		AUDIO::SET_VARIABLE_ON_SOUND(iLocal_2364, "ZOOM_SPEED", fVar6);
		if (AUDIO::HAS_SOUND_FINISHED(iLocal_2364))
		{
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_2364, "ZOOM", "PAPARAZZO_02_SOUNDSETS", 1);
			iLocal_2191 = 1;
		}
		iLocal_2285 = 1;
	}
	else if (fLocal_2289 == *uParam1)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(iLocal_2364))
		{
			AUDIO::STOP_SOUND(iLocal_2364);
		}
		iLocal_2285 = 0;
	}
	if (iVar1 < 0 || iVar1 > 0)
	{
		if (PAD::_IS_USING_KEYBOARD(0))
		{
			fVar5 = PAD::GET_CONTROL_UNBOUND_NORMAL(0, 290);
			fVar5 = ((SYSTEM::TO_FLOAT(iVar1) * *uParam1) * 0.001f);
		}
		else
		{
			fVar5 = (((SYSTEM::TO_FLOAT(iVar1) * *uParam1) * 0.0117f) * SYSTEM::TIMESTEP());
		}
		fLocal_2819 = (fLocal_2819 + fVar5);
		fLocal_2819 = func_23(fLocal_2819);
	}
	if (iVar0 < 0 || iVar0 > 0)
	{
		if (PAD::_IS_USING_KEYBOARD(0))
		{
			fVar4 = PAD::GET_CONTROL_UNBOUND_NORMAL(0, 291);
			fVar4 = ((SYSTEM::TO_FLOAT(iVar0) * *uParam1) * 0.001f);
		}
		else
		{
			fVar4 = (((SYSTEM::TO_FLOAT(iVar0) * *uParam1) * 0.0117f) * SYSTEM::TIMESTEP());
		}
		fLocal_2820 = (fLocal_2820 + fVar4);
		fLocal_2820 = func_20(fLocal_2820, -1035468800, 1109393408);
	}
	if (iLocal_2840 == 8)
	{
		if (bLocal_2821)
		{
			*uParam0 = { *uParam0 + Vector(-fLocal_2819, 0f, fLocal_2820) };
		}
		else
		{
			*uParam0 = { *uParam0 + Vector(-fVar5, 0f, fVar4) };
		}
	}
	else
	{
		*uParam0 = { *uParam0 + Vector(-fVar5, 0f, fVar4) };
	}
}

float func_23(float fParam0)//Position - 0x12B8
{
	if (fParam0 < -78f)
	{
		fParam0 = -78f;
	}
	if (fParam0 > 78f)
	{
		fParam0 = 78f;
	}
	return fParam0;
}


Vector3 func_25(float fParam0)//Position - 0x13EA
{
	return SYSTEM::SIN(fParam0), SYSTEM::COS(fParam0), 0f;
}

void func_26()//Position - 0x13FF
{
	struct<3> Var0;
	var uVar3;
	
	ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
	Var0 = { CAM::GET_CAM_ROT(uLocal_2811, 2) };
	uVar3 = CAM::GET_CAM_FOV(uLocal_2811);
	func_22(&Var0, &uVar3, 1);
	Var0.x = func_20(Var0.x, -1035468800, 1109393408);
	CAM::SET_CAM_PARAMS(uLocal_2811, -33.4707f, 318.6031f, 113.3355f, Var0.x, ENTITY::GET_ENTITY_ROLL(PLAYER::PLAYER_PED_ID()), Var0.f_2, uVar3, 0, 1, 1, 2);
}

void func_27()//Position - 0x146A
{
	HUD::CLEAR_PRINTS();
	GlobalFunc_4935();
	GlobalFunc_146(&iLocal_2808);
	GlobalFunc_146(&iLocal_2809);
	if (bLocal_2262)
	{
	}
	if (bLocal_2263)
	{
	}
	iLocal_2190 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iLocal_2213) / 2271f) * 100f));
	if (iLocal_2190 > 100)
	{
		iLocal_2190 = 100;
	}
	GlobalFunc_565(801, iLocal_2190, 0);
	if (iLocal_2912)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), -71.0875f, -522.2567f, 39.3243f, 255.9742f, 0, 1);
			GlobalFunc_79(800, 0);
			iLocal_2912 = 0;
		}
	}
	else
	{
		func_29(103, 1);
		func_625();
		if (func_28(PLAYER::PLAYER_PED_ID(), iLocal_2918))
		{
			TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2918, 0);
		}
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

int func_28(int iParam0, int iParam1)//Position - 0x152A
{
	if (iParam1 != 0)
	{
		if (GlobalFunc_115(iParam1))
		{
			if (GlobalFunc_4924(iParam0))
			{
				if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_29(int iParam0, bool bParam1)//Position - 0x155B
{
	int iVar0;
	var uVar1;
	
	iVar0 = GlobalFunc_8537();
	if (iVar0 == -1)
	{
		return;
	}
	if (!Global_96440[iVar0 /*10*/].f_4)
	{
		return;
	}
	if (Global_96440[iVar0 /*10*/].f_5)
	{
		return;
	}
	if (Global_96440[iVar0 /*10*/].f_6)
	{
		return;
	}
	GlobalFunc_9620(iVar0, 0);
	MISC::SET_BIT(&Global_68493, 1);
	if (Global_96440[iVar0 /*10*/].f_9 == -1)
	{
	}
	else
	{
		GlobalFunc_54(&(Global_96440[iVar0 /*10*/].f_9));
	}
	if (bParam1)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	GlobalFunc_9520(iVar0, 1, 0, 0);
	GlobalFunc_45(0, 0);
	MemCopy(&uVar1, {GlobalFunc_4918(iVar0)}, 4);
	GlobalFunc_43(&uVar1, GlobalFunc_8310());
	func_56();
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.spInitBitset, 3))
	{
		GlobalFunc_18();
	}
	GlobalFunc_8306();
	if (iParam0 == 210 || iParam0 == 211)
	{
		GlobalFunc_7610(iParam0, 406.38f, -1635.86f);
	}
	else if (iParam0 == 111)
	{
		GlobalFunc_7610(iParam0, 1973.84f, 3814.89f);
	}
	else if (iParam0 != 322)
	{
		GlobalFunc_7610(iParam0, 0, 0);
	}
	GlobalFunc_4907();
}



























void func_56()//Position - 0x28D7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		iVar1 = Global_87736[iVar0];
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_INJURED(iVar1))
		{
			iVar3 = GlobalFunc_6674(iVar1);
			iVar2 = -99;
			switch (iVar3)
			{
				case 0:
					iVar2 = 112;
					break;
				
				case 1:
					iVar2 = 158;
					break;
				
				case 2:
					iVar2 = 154;
					break;
			}
			if (iVar2 != -99)
			{
				if (GlobalFunc_10910(iVar1, 14, iVar2))
				{
					func_57(iVar1, 14, iVar2);
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar3 /*65*/].f_39[2] == iVar2)
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar3 /*65*/].f_39[2] = -1;
				}
			}
		}
		iVar0++;
	}
}

int func_57(int iParam0, int iParam1, int iParam2)//Position - 0x2998
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar30;
	int iVar46;
	
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar0, iParam1, iParam2) };
	if (!MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!GlobalFunc_10910(iParam0, iParam1, iParam2))
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
				func_57(iParam0, iVar1, uVar2[iVar1]);
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
			if (!func_57(iParam0, 14, uVar20[iVar18]))
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
		Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar0, iParam1, uVar30[iParam1]) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, GlobalFunc_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, 0);
		}
	}
	if (GlobalFunc_11030(iParam0, iVar0, &iVar46, 0))
	{
		GlobalFunc_11263(iParam0, 2, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (GlobalFunc_11026(iParam0, iVar0, &iVar46))
	{
		GlobalFunc_11263(iParam0, 1, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	return 1;
}













































































































































































void func_230()//Position - 0x25F38
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::THEFEED_HIDE_THIS_FRAME();
	CAM::SET_USE_HI_DOF();
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
	}
	switch (iLocal_2169)
	{
		case 0:
			if (func_241(9, bLocal_2853))
			{
				if (GlobalFunc_109())
				{
					iLocal_2253 = 0;
					iLocal_2254 = 0;
					iLocal_2255 = 0;
					iLocal_2256 = 0;
					if (GlobalFunc_4924(iLocal_2554))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2554, "Beverly", 0, 0, 0);
					}
					if (GlobalFunc_4947(iLocal_2918))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2918, "Beverlys_Car", 0, joaat("fq2"), 0);
					}
					RECORDING::_0x293220DA1B46CEBC(10f, 0f, 0);
					RECORDING::_0x48621C9FCA3EBD28(1);
					CUTSCENE::START_CUTSCENE(0);
					SYSTEM::WAIT(0);
					if (iLocal_2301 == 1)
					{
						STREAMING::STREAMVOL_DELETE(uLocal_2300);
					}
					GlobalFunc_79(800, 0);
					iLocal_2169 = 1;
				}
			}
			break;
		
		case 1:
			if (iLocal_2256 == 0)
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
				{
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
					iLocal_2256 = 1;
				}
			}
			if (iLocal_2253 == 0)
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
				{
					RECORDING::_0x81CBAE94390F9F89();
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					iLocal_2253 = 1;
				}
			}
			if (iLocal_2255 == 0 && iLocal_2254 == 0)
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Beverly", 0) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Beverlys_Car", 0))
				{
					if (!func_28(iLocal_2554, iLocal_2918))
					{
						PED::SET_PED_INTO_VEHICLE(iLocal_2554, iLocal_2918, -1);
					}
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_2554, 0, 0);
					VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_2918, 1);
					VEHICLE::SET_VEHICLE_FIXED(iLocal_2918);
					VEHICLE::SET_VEHICLE_DOOR_LATCHED(iLocal_2918, 3, 1, 1, 1);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_2810);
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_2918, 100f, 786468);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_2810);
					PED::SET_PED_KEEP_TASK(iLocal_2554, 1);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_2554, uLocal_2810);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_2810);
					iLocal_2255 = 1;
					iLocal_2254 = 1;
				}
			}
			if (((iLocal_2255 == 1 && iLocal_2254 == 1) && iLocal_2253 == 1) && iLocal_2256 == 1)
			{
				iLocal_2169 = 2;
			}
			else
			{
				if (CAM::DOES_CAM_EXIST(uLocal_2811))
				{
					CAM::DESTROY_CAM(uLocal_2811, 0);
				}
				if (CAM::DOES_CAM_EXIST(uLocal_2813))
				{
					CAM::DESTROY_CAM(uLocal_2813, 0);
				}
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				CAM::_0x59424BD75174C9B1();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			break;
		
		case 2:
			iLocal_2840 = 10;
			func_231(1, 1, 1, 1);
			break;
	}
}

void func_231(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2616D
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
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}










int func_241(int iParam0, bool bParam1)//Position - 0x26461
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				bLocal_2853 = false;
				func_325(1, 1, 1);
			}
			else if (((func_313(26, Local_2470, 0) && func_313(9, Local_2457, fLocal_2511)) && func_313(6, Local_2470, 0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PAPARAZZO_02_INTRO", 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (bParam1)
			{
				if (((func_313(0, Local_2470, 0) && func_313(9, Local_2457, fLocal_2511)) && func_313(6, Local_2470, 0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PAPARAZZO_02_INTRO", 0))
				{
					func_312();
					if (GlobalFunc_4924(iLocal_2554))
					{
						func_311(iLocal_2554, 0);
					}
					bLocal_2853 = false;
					func_325(1, 1, 1);
				}
			}
			else if (func_313(1, Local_2165, fLocal_2168))
			{
				GlobalFunc_9628(-10.66244f, 283.0703f, 110.2373f, -76.66436f, 301.1816f, 104.5858f, 6f, -88.6147f, 303.8292f, 105.9208f, 245.3452f, 1, 1, 1, 0, 0);
				GlobalFunc_9628(-86.61621f, 297.2772f, 102.9432f, -55.1581f, 286.5398f, 109.6697f, 16.75f, -88.6147f, 303.8292f, 105.9208f, 245.3452f, 1, 1, 1, 0, 0);
				GlobalFunc_10697(0f, 0f, 0f, 0f, 1, 1);
				func_255(Local_2165, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				iLocal_2184 = MISC::GET_GAME_TIMER();
				return 1;
			}
			break;
		
		case 2:
			if (bParam1)
			{
				if (((func_313(1, Local_2165, 124f) && func_313(9, Local_2457, fLocal_2511)) && func_313(6, Local_2470, 0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PAPARAZZO_02_INTRO", 0))
				{
					func_254();
					if (!GlobalFunc_188())
					{
						GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), -72.5612f, 298.2493f, 105.2336f, 247.2199f, 0, 1);
					}
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					GlobalFunc_4935();
					func_312();
					MISC::CLEAR_AREA_OF_PEDS(-73.9858f, 299.3878f, 105.4073f, 80f, 0);
					if (GlobalFunc_4924(iLocal_2554))
					{
						func_311(iLocal_2554, 0);
						GlobalFunc_5705(iLocal_2554, -70.7533f, 299.0078f, 105.3157f, 247.7592f, 1, 1);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_2554, -60.9116f, 295.3501f, 105.0975f, 1f, 20000, 1048576000, 0, 1193033728);
					}
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), -70.9722f, 297.7738f, 105.2184f, 247.6793f, 1, 1);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -63.1068f, 294.9655f, 105.0442f, 1f, -1, 1f, 2113, 1193033728);
					bLocal_2853 = false;
					GlobalFunc_4967(0, -1, 1);
					PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
					func_325(1, 0, 1);
					iLocal_2184 = MISC::GET_GAME_TIMER();
					iLocal_2261 = 1;
				}
			}
			else if ((func_313(6, Local_2470, 0) && func_313(11, Local_2470, 0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PAPARAZZO_02_INTRO", 0))
			{
				iLocal_2184 = MISC::GET_GAME_TIMER();
				return 1;
			}
			break;
		
		case 3:
			if (bParam1)
			{
				if (((func_313(1, -13.3842f, 282.4926f, 107.2337f, 257.872f) && func_313(9, Local_2457, fLocal_2511)) && func_313(6, Local_2470, 0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PAPARAZZO_02_INTRO", 0))
				{
					func_254();
					if (!GlobalFunc_188())
					{
						GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), -14.1493f, 280.7966f, 107.2078f, 317.7051f, 0, 1);
					}
					GlobalFunc_4935();
					func_312();
					iLocal_2894 = 3;
					if (GlobalFunc_4924(iLocal_2554))
					{
						func_311(iLocal_2554, 0);
					}
					bLocal_2853 = false;
					func_325(1, 1, 1);
				}
			}
			else
			{
				iLocal_2184 = MISC::GET_GAME_TIMER();
				return 1;
			}
			break;
		
		case 4:
			if (bParam1)
			{
				if (((((func_313(1, -3.227f, 318.2857f, 109.9195f, 63.3365f) && func_313(9, Local_2457, fLocal_2511)) && func_313(6, Local_2470, 0)) && func_313(2, Local_2559.f_1, Local_2559.f_4)) && func_313(3, Local_2564.f_1, Local_2564.f_4)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PAPARAZZO_02_INTRO", 0))
				{
					func_254();
					if (!GlobalFunc_188())
					{
						GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), -2.2002f, 317.2632f, 109.9189f, 60.7242f, 0, 1);
					}
					GlobalFunc_5705(Local_2574[0 /*5*/], 11.2819f, 324.9571f, 109.9188f, 252.0409f, 0, 1);
					GlobalFunc_5705(Local_2574[1 /*5*/], 12.4255f, 323.3313f, 109.9188f, 54.7387f, 0, 1);
					GlobalFunc_4935();
					func_312();
					iLocal_2894 = 6;
					if (GlobalFunc_4924(iLocal_2554))
					{
						func_311(iLocal_2554, 0);
					}
					func_325(1, 1, 1);
					bLocal_2853 = false;
				}
			}
			else if (func_313(17, Local_2470, 0))
			{
				iLocal_2870 = 1;
				iLocal_2869 = 1;
				iLocal_2857 = 1;
				iLocal_2184 = MISC::GET_GAME_TIMER();
				return 1;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				if ((((((func_313(1, -36.7532f, 323.5341f, 111.6957f, 165.7917f) && func_313(9, Local_2457, fLocal_2511)) && func_313(2, Local_2559.f_1, Local_2559.f_4)) && func_313(3, Local_2564.f_1, Local_2564.f_4)) && func_313(10, Local_2470, 0)) && func_313(17, Local_2470, 0)) && func_313(16, Local_2470, 0))
				{
					if (iLocal_2242 == 0)
					{
						GlobalFunc_4967(0, -1, 1);
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_2172))
						{
							AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(uLocal_2172);
						}
						if (GlobalFunc_115(Local_2559))
						{
							AUDIO::_SET_SYNCHRONIZED_AUDIO_EVENT_POSITION_THIS_FRAME("PAP2_IG1_POPPYSEX", Local_2559);
						}
						GlobalFunc_587("TK************ SETTING SYNCH SCENE AUDIO POSITION THIS FRAME ************TK");
						iLocal_2242 = 1;
					}
					if (AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT("PAP2_IG1_POPPYSEX", 0))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
						if (!GlobalFunc_188())
						{
							GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), -33.681f, 320.9442f, 111.6958f, 182.6031f, 0, 1);
						}
						GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), -33.8491f, 319.335f, 111.696f, 184.4715f, 0, 1);
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "rcmpaparazzo_2", "idle_d", 1000f, -1000f, -1, 1, 0.4f, 0, 0, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
						SYSTEM::WAIT(2000);
						func_312();
						STREAMING::REQUEST_ANIM_DICT("rcmpaparazzo_2");
						STREAMING::REQUEST_CLIP_SET(sLocal_2908);
						STREAMING::REQUEST_CLIP_SET(sLocal_2909);
						iLocal_2196 = 1;
						func_251();
						func_254();
						func_249(1);
						func_248(1);
						if (CAM::DOES_CAM_EXIST(uLocal_2811))
						{
							fLocal_2289 = CAM::GET_CAM_FOV(uLocal_2811);
						}
						func_14(1);
						if (CAM::DOES_CAM_EXIST(uLocal_2811) && GlobalFunc_4924(Local_2559))
						{
							CAM::POINT_CAM_AT_ENTITY(uLocal_2811, Local_2559, Local_2470, 1);
						}
						AUDIO::TRIGGER_MUSIC_EVENT("PAP2_START");
						bLocal_2853 = false;
					}
					else
					{
						GlobalFunc_587("TK************ PREPARE_SYNCHRONIZED_AUDIO_EVENT FAILED! ************TK");
					}
				}
			}
			else if (func_313(16, Local_2470, 0) && func_313(17, Local_2470, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (bParam1)
			{
				if (((((((func_313(1, -36.7532f, 323.5341f, 111.6957f, 165.7917f) && func_313(4, Local_2569.f_1, 0)) && func_313(9, Local_2457, 0)) && func_313(2, Local_2559.f_1, Local_2559.f_4)) && func_313(3, Local_2564.f_1, Local_2564.f_4)) && func_313(10, Local_2470, 0)) && func_313(17, Local_2470, 0)) && func_313(16, Local_2470, 0))
				{
					if (iLocal_2242 == 0)
					{
						GlobalFunc_4967(0, -1, 1);
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_2172))
						{
							AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(uLocal_2172);
						}
						AUDIO::_SET_SYNCHRONIZED_AUDIO_EVENT_POSITION_THIS_FRAME("PAP2_IG1_POPPYSEX", Local_2559);
						GlobalFunc_587("TK************ SETTING SYNCH SCENE AUDIO POSITION THIS FRAME ************TK");
						iLocal_2242 = 1;
					}
					if (AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT("PAP2_IG1_POPPYSEX", 0))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
						GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), -33.8491f, 319.335f, 111.696f, 184.4715f, 0, 1);
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "rcmpaparazzo_2", "idle_d", 1000f, -1000f, -1, 1, 0.4f, 0, 0, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
						SYSTEM::WAIT(2000);
						func_312();
						func_251();
						func_254();
						func_249(1);
						func_247();
						if (CAM::DOES_CAM_EXIST(uLocal_2811))
						{
							fLocal_2289 = CAM::GET_CAM_FOV(uLocal_2811);
						}
						func_14(1);
						if (CAM::DOES_CAM_EXIST(uLocal_2811) && GlobalFunc_4924(Local_2559))
						{
							CAM::POINT_CAM_AT_ENTITY(uLocal_2811, Local_2559, Local_2470, 1);
						}
						AUDIO::TRIGGER_MUSIC_EVENT("PAP2_START");
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0);
						bLocal_2853 = false;
					}
					else
					{
						GlobalFunc_587("TK************ PREPARE_SYNCHRONIZED_AUDIO_EVENT FAILED! ************TK");
					}
				}
			}
			else if (func_313(12, Local_2470, 0))
			{
				if (GlobalFunc_115(iLocal_2918))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_2918, Local_2457, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_2918, -0.0022f, -0.0289f, 0.7901f, -0.6123f);
				}
				iLocal_2842 = 0;
				return 1;
			}
			break;
		
		case 7:
			if (bParam1)
			{
				if (((((((func_313(1, -33.2434f, 319.02f, 111.6952f, 154.2353f) && func_313(5, Local_2470, 0)) && func_313(9, Local_2457, fLocal_2511)) && func_313(2, Local_2559.f_1, Local_2559.f_4)) && func_313(3, Local_2564.f_1, Local_2564.f_4)) && func_313(12, Local_2470, 0)) && func_313(25, Local_2470, 0)) && func_313(10, Local_2470, 0))
				{
					GlobalFunc_5705(iLocal_2554, -36.5195f, 326.093f, 111.6962f, 187.1461f, 0, 1);
					PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					if (!GlobalFunc_188())
					{
						GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), -33.1227f, 318.9001f, 111.6958f, 154.1067f, 0, 1);
					}
					GlobalFunc_4967(0, -1, 1);
					GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), -33.8491f, 319.335f, 111.696f, 184.4715f, 0, 1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
					SYSTEM::WAIT(2000);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(10.7485f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-9.8457f, 1065353216);
					GlobalFunc_4935();
					func_312();
					func_251();
					func_246();
					PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_2173, fLocal_2838);
					HUD::DISPLAY_HUD(1);
					HUD::DISPLAY_RADAR(1);
					AUDIO::TRIGGER_MUSIC_EVENT("PAP2_SPOTTED_RESTART");
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "rcmpaparazzo_2", "idle_d", 1000f, -4f, -1, 0, 0.739f, 0, 0, 0);
					SYSTEM::WAIT(100);
					GlobalFunc_79(800, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(10.7485f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-9.8457f, 1065353216);
					bLocal_2853 = false;
				}
			}
			else
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_2809))
				{
					iLocal_2809 = GlobalFunc_4955(iLocal_2554, 1, 1, 5);
				}
				if (GlobalFunc_115(iLocal_2918))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_2918, 1);
					func_244(iLocal_2918);
				}
				if (((((func_313(4, Local_2470, 0) && func_313(5, Local_2470, 0)) && func_313(19, Local_2470, 0)) && func_313(18, Local_2470, 0)) && func_313(20, Local_2470, 0)) && func_313(17, Local_2470, 0))
				{
					iLocal_2184 = MISC::GET_GAME_TIMER();
					if (GlobalFunc_4924(iLocal_2554))
					{
						func_311(iLocal_2554, 0);
					}
					return 1;
				}
			}
			break;
		
		case 8:
			if (bParam1)
			{
				if ((((((((((func_313(1, Local_2165, 344.7485f) && func_313(5, Local_2470, 0)) && func_313(9, Local_2457, fLocal_2511)) && func_313(2, Local_2559.f_1, Local_2559.f_4)) && func_313(3, Local_2564.f_1, Local_2564.f_4)) && func_313(4, Local_2569.f_1, Local_2569.f_4)) && func_313(18, Local_2470, 0)) && func_313(19, Local_2470, 0)) && func_313(20, Local_2470, 0)) && func_313(17, Local_2470, 0)) && func_313(25, Local_2470, 0))
				{
					func_312();
					GlobalFunc_5705(iLocal_2554, Local_2165, 344.7485f, 0, 1);
					GlobalFunc_173(&uLocal_2632, 3, iLocal_2554, "BEVERLY", 0, 1);
					GlobalFunc_173(&uLocal_2632, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_4967(0, -1, 1);
					func_242();
					if (GlobalFunc_115(iLocal_2918))
					{
						ENTITY::SET_ENTITY_QUATERNION(iLocal_2918, -0.0022f, -0.0289f, 0.7901f, -0.6123f);
					}
					if (!func_28(iLocal_2554, iLocal_2918))
					{
						PED::SET_PED_INTO_VEHICLE(iLocal_2554, iLocal_2918, -1);
					}
					MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 200f, 1, 0, 0, 0);
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					iLocal_2180 = MISC::GET_GAME_TIMER();
					iLocal_2180 += 1000;
					iLocal_2886 = 0;
					SYSTEM::WAIT(100);
					MISC::CLEAR_AREA_OF_PEDS(-73.9858f, 299.3878f, 105.4073f, 80f, 0);
					func_325(0, 0, 1);
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					AUDIO::TRIGGER_MUSIC_EVENT("PAP2_CAR_RESTART");
					bLocal_2853 = false;
				}
			}
			else if (func_313(25, Local_2470, 0))
			{
				GlobalFunc_146(&iLocal_2808);
				iLocal_2184 = MISC::GET_GAME_TIMER();
				return 1;
			}
			break;
		
		case 9:
			if (bParam1)
			{
				if (func_313(9, -69.2061f, -523.7703f, 39.2051f, 163.9675f))
				{
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					GlobalFunc_4967(0, -1, 1);
					if (!func_28(PLAYER::PLAYER_PED_ID(), iLocal_2918))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2918, 2);
					}
					if (!func_28(iLocal_2554, iLocal_2918))
					{
						PED::SET_PED_INTO_VEHICLE(iLocal_2554, iLocal_2918, -1);
					}
					CUTSCENE::REQUEST_CUTSCENE("pap_2_mcs_1", 8);
					if (GlobalFunc_115(iLocal_2918))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_2918, -69.2061f, -523.7703f, 39.2051f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iLocal_2918, 163.9675f);
					}
					func_312();
					bLocal_2853 = false;
				}
			}
			else
			{
				iLocal_2184 = MISC::GET_GAME_TIMER();
				return 1;
			}
			break;
		
		case 12:
			if (bParam1)
			{
				if (func_313(5, Local_2470, 0) && func_313(1, Local_2165, 344.7485f))
				{
					iLocal_2886 = 0;
					func_325(1, 1, 1);
					bLocal_2853 = false;
				}
			}
			else if ((func_313(9, Local_2457, fLocal_2511) && func_313(1, Local_2165, 344.7485f)) && func_313(22, Local_2470, 0))
			{
				if (!func_28(iLocal_2554, iLocal_2918))
				{
					TASK::TASK_WARP_PED_INTO_VEHICLE(iLocal_2554, iLocal_2918, 1);
				}
				return 1;
			}
			return 0;
			break;
		
		case 13:
			if (bParam1)
			{
				if (func_313(5, Local_2470, 0) && func_313(1, Local_2165, 344.7485f))
				{
					iLocal_2886 = 0;
					func_325(1, 1, 1);
					bLocal_2853 = false;
				}
			}
			else if (((func_313(9, Local_2457, fLocal_2511) && func_313(1, Local_2454, 0)) && func_313(23, Local_2470, 0)) && func_313(18, Local_2470, 0))
			{
				if (GlobalFunc_115(iLocal_2918))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_2918, Local_2457, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_2918, -0.0022f, -0.0289f, 0.7901f, -0.6123f);
					return 1;
				}
			}
			return 0;
			break;
		
		case 14:
			if (bParam1)
			{
				GlobalFunc_587("JUMPED");
				iLocal_2886 = 0;
				func_325(1, 1, 1);
				bLocal_2853 = false;
			}
			else if (((func_313(9, Local_2457, fLocal_2511) && func_313(1, Local_2454, 0)) && func_313(18, Local_2470, 0)) && func_313(24, Local_2470, 0))
			{
				if (GlobalFunc_115(iLocal_2918))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_2918, Local_2457, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_2918, -0.0022f, -0.0289f, 0.7901f, -0.6123f);
					return 1;
				}
			}
			return 0;
			break;
	}
	return 0;
}

void func_242()//Position - 0x2751D
{
	if (iLocal_2233 == 0)
	{
		if (!func_28(PLAYER::PLAYER_PED_ID(), iLocal_2918))
		{
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2918, 1);
		}
	}
	if (GlobalFunc_4924(iLocal_2554))
	{
		if (!func_28(iLocal_2554, iLocal_2918))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_2554);
			PED::SET_PED_INTO_VEHICLE(iLocal_2554, iLocal_2918, -1);
		}
	}
	if (GlobalFunc_4924(Local_2559))
	{
		if (!func_28(Local_2559, uLocal_2914[0]))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_2559);
			PED::SET_PED_INTO_VEHICLE(Local_2559, uLocal_2914[0], -1);
		}
	}
	if (GlobalFunc_4924(Local_2564))
	{
		if (!func_28(Local_2564, uLocal_2914[1]))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_2564);
			PED::SET_PED_INTO_VEHICLE(Local_2564, uLocal_2914[1], -1);
		}
	}
	if (GlobalFunc_4924(Local_2569))
	{
		if (GlobalFunc_115(uLocal_2914[2]))
		{
			if (!func_28(Local_2569, uLocal_2914[2]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_2569);
				PED::SET_PED_INTO_VEHICLE(Local_2569, uLocal_2914[2], -1);
			}
		}
	}
}


int func_244(int iParam0)//Position - 0x276A9
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
		if (VEHICLE::IS_THIS_MODEL_A_CAR(iVar0) || VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0))
		{
			return VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0);
		}
	}
	return 0;
}


void func_246()//Position - 0x27734
{
	if (iLocal_2244 == 0)
	{
		uLocal_2173 = PED::CREATE_SYNCHRONIZED_SCENE(-30.99041f, 301.0923f, 111.6819f, 0f, 0f, 0f, 2);
		PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_2173, 0);
		if (GlobalFunc_4924(Local_2559))
		{
			if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_2559, PLAYER::PLAYER_PED_ID(), 1))
			{
				TASK::TASK_LOOK_AT_ENTITY(Local_2559, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_2559, uLocal_2173, "rcmpaparazzo_2", "shag_action_poppy", 4f, -4f, 0, 0, 1148846080, 0);
			}
			else
			{
				TASK::TASK_SMART_FLEE_PED(Local_2559, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
			}
		}
		if (GlobalFunc_4924(Local_2564))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2564, 1);
			if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_2564, PLAYER::PLAYER_PED_ID(), 1))
			{
				TASK::TASK_LOOK_AT_ENTITY(Local_2564, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_2564, uLocal_2173, "rcmpaparazzo_2", "shag_action_a", 4f, -2f, 0, 0, 1148846080, 0);
			}
			else
			{
				TASK::TASK_SMART_FLEE_PED(Local_2564, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
			}
		}
		PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_2173, 0.835512f);
		iLocal_2244 = 1;
	}
}

void func_247()//Position - 0x27837
{
	Local_2518.x = 255;
	Local_2518.f_1 = 0;
	Local_2518.f_2 = 0;
}

int func_248(bool bParam0)//Position - 0x27850
{
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		if (bParam0)
		{
			if (!CAM::DOES_CAM_EXIST(uLocal_2811))
			{
				uLocal_2811 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -33.4707f, 318.6031f, 113.3355f, -1.6576f, 0f, -170.9825f, 45f, 1, 2);
				if (iLocal_2840 != 5)
				{
					CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				if (CAM::DOES_CAM_EXIST(uLocal_2811))
				{
					GRAPHICS::CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_MODE(1);
					GRAPHICS::CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_VALUE(16f);
					return 1;
				}
			}
			else
			{
				GRAPHICS::CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_MODE(1);
				GRAPHICS::CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_VALUE(16f);
				return 1;
			}
		}
		else if (!CAM::DOES_CAM_EXIST(uLocal_2811))
		{
			if (GlobalFunc_115(iLocal_2918) && GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
			{
				uLocal_2811 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2918, Local_2473), 0f, 0f, -ENTITY::GET_ENTITY_HEADING(iLocal_2918), 50f, 1, 2);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				if (CAM::DOES_CAM_EXIST(uLocal_2811))
				{
					return 1;
				}
			}
		}
		else if (GlobalFunc_115(iLocal_2918) && GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
		{
			CAM::SET_CAM_PARAMS(uLocal_2811, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2918, Local_2473), 0f, 0f, -ENTITY::GET_ENTITY_HEADING(iLocal_2918), 50f, 0, 1, 1, 2);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			return 1;
		}
	}
	return 0;
}

void func_249(int iParam0)//Position - 0x279A1
{
	if (GlobalFunc_4924(Local_2559) && GlobalFunc_4924(Local_2564))
	{
		switch (iParam0)
		{
			case 0:
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_2170))
				{
					func_254();
					func_250();
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2564, 1);
					uLocal_2170 = PED::CREATE_SYNCHRONIZED_SCENE(-30.99041f, 301.0923f, 111.6319f, 0f, 0f, 0f, 2);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_2170, 1);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_2559, uLocal_2170, "rcmpaparazzo_2", "shag_loop_poppy", 1000f, -4f, 64, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_2564, uLocal_2170, "rcmpaparazzo_2", "shag_loop_a", 1000f, -4f, 64, 0, 1148846080, 0);
					GlobalFunc_587("TK************ SYNCH SCENE1 STARTED ************TK");
				}
				break;
			
			case 1:
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_2172))
				{
					func_254();
					func_250();
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2564, 1);
					uLocal_2172 = PED::CREATE_SYNCHRONIZED_SCENE(-30.99041f, 301.0923f, 111.6819f, 0f, 0f, 0f, 2);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_2172, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_2559, uLocal_2172, "rcmpaparazzo_2", "shag_action_poppy", 1000f, -4f, 0, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_2564, uLocal_2172, "rcmpaparazzo_2", "shag_action_a", 1000f, -2f, 0, 0, 1148846080, 0);
					AUDIO::PLAY_SYNCHRONIZED_AUDIO_EVENT(uLocal_2172);
					iLocal_2242 = 0;
					GlobalFunc_587("TK************ SYNCH SCENE2 STARTED - RESET AUDIO POSITION BOOL ************TK");
				}
				break;
			}
	}
}

void func_250()//Position - 0x27AFC
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2304))
	{
		iLocal_2304 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_npc_phone"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2559, 0f, 0f, 10f), 1, 1, 0);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_2304, 100);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2304))
	{
		if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_2304))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_2304, Local_2559, PED::GET_PED_BONE_INDEX(Local_2559, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
		}
	}
}

void func_251()//Position - 0x27B6A
{
	if (iLocal_2212 == 0)
	{
		STREAMING::REQUEST_CLIP_SET(sLocal_2909);
		STREAMING::REQUEST_MODEL(joaat("prop_pap_camera_01"));
		iLocal_2212 = 1;
	}
	else if (iLocal_2212 == 1)
	{
		if (STREAMING::HAS_CLIP_SET_LOADED(sLocal_2909) && STREAMING::HAS_MODEL_LOADED(joaat("prop_pap_camera_01")))
		{
			iLocal_2212 = 2;
		}
	}
	else if (iLocal_2212 == 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2305))
		{
			iLocal_2305 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_pap_camera_01"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 0f, 10f), 1, 1, 0);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_2305, 0);
			ENTITY::SET_ENTITY_COLLISION(iLocal_2305, 0, 0);
		}
		else
		{
			if (STREAMING::HAS_CLIP_SET_LOADED(sLocal_2909))
			{
				PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), sLocal_2909);
			}
			else
			{
				STREAMING::REQUEST_CLIP_SET(sLocal_2909);
				iLocal_2212 = 1;
			}
			if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_2305, PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(iLocal_2305))
				{
					ENTITY::DETACH_ENTITY(iLocal_2305, 1, 1);
				}
				ENTITY::SET_ENTITY_VISIBLE(iLocal_2305, 1);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_2305, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
			}
		}
	}
}



void func_254()//Position - 0x27D41
{
	STREAMING::REQUEST_MODEL(joaat("prop_table_06"));
	STREAMING::REQUEST_MODEL(joaat("prop_parasol_03"));
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2302))
	{
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-30.8601f, 301.192f, 112.1164f, 5f, joaat("prop_table_06"), 0))
		{
			iLocal_2302 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-30.8601f, 301.192f, 112.1164f, 5f, joaat("prop_table_06"), 1, 0, 1);
			ENTITY::SET_ENTITY_COORDS(iLocal_2302, -30.8601f, 301.192f, 112.0274f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_ROTATION(iLocal_2302, -0.100693f, -0.038488f, 80.43729f, 2, 1);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_2302, 1);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2303))
	{
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-30.8601f, 301.192f, 112.1164f, 5f, joaat("prop_parasol_03"), 0))
		{
			iLocal_2303 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-30.8601f, 301.192f, 112.1164f, 5f, joaat("prop_parasol_03"), 1, 0, 1);
			ENTITY::SET_ENTITY_COORDS(iLocal_2303, -30.8601f, 301.192f, 111.6803f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_ROTATION(iLocal_2303, -0.100693f, -0.038488f, 80.43729f, 2, 1);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_2303, 1);
		}
	}
}

void func_255(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x27E5D
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
			switch (GlobalFunc_8315())
			{
				case 0:
					if (GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						GlobalFunc_11263(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						GlobalFunc_11263(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 8, 1) || GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						GlobalFunc_11263(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						GlobalFunc_11263(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
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
		PLAYER::SET_PLAYER_WANTED_LEVEL(iVar0, 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(iVar0, 0);
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, 1);
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
			iLocal_35 = 0;
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_35 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam5 == 1)
		{
			GlobalFunc_79(500, 0);
		}
	}
}
























































void func_311(int iParam0, bool bParam1)//Position - 0x2BBAB
{
	if (bParam1)
	{
		PED::SET_PED_STEALTH_MOVEMENT(iParam0, 1, 0);
	}
	else
	{
		PED::SET_PED_STEALTH_MOVEMENT(iParam0, 0, 0);
	}
}

void func_312()//Position - 0x2BBCB
{
	iLocal_2855 = 0;
	iLocal_2856 = 0;
	iLocal_2857 = 0;
	iLocal_2859 = 0;
	bLocal_2860 = false;
	iLocal_2911 = 0;
	iLocal_2919 = 0;
	iLocal_2920 = 0;
	iLocal_2921 = 0;
	iLocal_2922 = 0;
	iLocal_2923 = 0;
	iLocal_2924 = 0;
	iLocal_2237 = 0;
	iLocal_2238 = 0;
	bLocal_2236 = false;
	iLocal_2241 = 0;
	iLocal_2239 = 0;
	iLocal_2240 = 0;
	iLocal_2243 = 0;
	iLocal_2244 = 0;
	iLocal_2245 = 0;
	bLocal_2247 = false;
	iLocal_2249 = 0;
	iLocal_2301 = 0;
	iLocal_2250 = 0;
	iLocal_2251 = 0;
	iLocal_2252 = 0;
	iLocal_2852 = 0;
	iLocal_2864 = 0;
	iLocal_2865 = 0;
	iLocal_2866 = 0;
	iLocal_2867 = 0;
	iLocal_2230 = 0;
	iLocal_2229 = 0;
	iLocal_2231 = 0;
	iLocal_2232 = 0;
	iLocal_2868 = 0;
	iLocal_2869 = 0;
	iLocal_2870 = 0;
	iLocal_2227 = 0;
	iLocal_2871 = 0;
	iLocal_2872 = 0;
	iLocal_2873 = 0;
	iLocal_2874 = 0;
	iLocal_2875 = 0;
	bLocal_2879 = false;
	bLocal_2880 = false;
	iLocal_2881 = 0;
	iLocal_2883 = 0;
	iLocal_2886 = 0;
	iLocal_2890 = 0;
	iLocal_2889 = 0;
	iLocal_2910 = 0;
	iLocal_2211 = 0;
	iLocal_2196 = 0;
	iLocal_2894 = 0;
	iLocal_2197 = 0;
	iLocal_2200 = 0;
	iLocal_2895 = 0;
	iLocal_2207 = 0;
	iLocal_2212 = 0;
	bLocal_2224 = false;
	iLocal_2321 = 0;
	iLocal_2320 = 0;
	iLocal_2235 = 0;
	iLocal_2257 = 0;
	iLocal_2258 = 0;
	bLocal_2284 = false;
	iLocal_2171 = 0;
	iLocal_2842 = 0;
	iLocal_2843 = 0;
	iLocal_2844 = 0;
}

int func_313(int iParam0, struct<3> Param1, float fParam4)//Position - 0x2BCF3
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			if (!CUTSCENE::HAS_THIS_CUTSCENE_LOADED("PAP_2_RCM_P2"))
			{
				GlobalFunc_9623("PAP_2_RCM_P2", 0);
				while (!CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					SYSTEM::WAIT(0);
				}
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_4924(iLocal_2554))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_2809))
				{
					iLocal_2809 = GlobalFunc_4955(iLocal_2554, 1, 1, 5);
				}
				HUD::SET_BLIP_SCALE(iLocal_2809, 0.7f);
				PED::SET_PED_CAN_ARM_IK(iLocal_2554, 1);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2554, 1);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_2554, 0);
				AUDIO::STOP_PED_SPEAKING(iLocal_2554, 1);
				AUDIO::DISABLE_PED_PAIN_AUDIO(iLocal_2554, 1);
				ENTITY::SET_ENTITY_PROOFS(iLocal_2554, 0, 0, 0, 1, 0, 0, 0, 0);
				GlobalFunc_5705(iLocal_2554, Param1, fParam4, 0, 1);
				GlobalFunc_173(&uLocal_2632, 3, iLocal_2554, "BEVERLY", 0, 1);
				GlobalFunc_173(&uLocal_2632, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
				while (!func_323(Local_2903))
				{
					SYSTEM::WAIT(0);
				}
				return 1;
			}
			return 0;
			break;
		
		case 2:
			if (func_321(&Local_2559, Param1, fParam4, iLocal_2803, 0, "POPPY"))
			{
				GlobalFunc_173(&uLocal_2632, 6, Local_2559, "POPPY", 0, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_2559, uLocal_2839);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2559, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_2559, 20, 1);
				AUDIO::STOP_PED_SPEAKING(Local_2559, 1);
				PED::SET_PED_COMPONENT_VARIATION(Local_2559, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_2559, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_2559, 3, 0, 0, 0);
				if (GlobalFunc_199() && GlobalFunc_198() >= 2)
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_2559, 4, 1, 0, 0);
				}
				else
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_2559, 4, 2, 0, 0);
				}
				PED::SET_PED_COMPONENT_VARIATION(Local_2559, 8, 0, 0, 0);
				PED::SET_PED_LOD_MULTIPLIER(Local_2559, 2f);
				return 1;
			}
			return 0;
			break;
		
		case 3:
			if (func_321(&Local_2564, Param1, fParam4, iLocal_2802, 0, "SHAGGER"))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_2564, uLocal_2839);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2564, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_2564, 20, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_2564, 0, 0);
				PED::SET_PED_CONFIG_FLAG(Local_2564, 114, 1);
				ENTITY::SET_ENTITY_PROOFS(Local_2564, 0, 0, 0, 1, 0, 0, 0, 0);
				PED::SET_PED_PROP_INDEX(Local_2564, 1, 0, 0, false);
				PED::SET_PED_COMPONENT_VARIATION(Local_2564, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_2564, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_2564, 3, 0, 0, 0);
				if (GlobalFunc_199() && GlobalFunc_198() >= 2)
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_2564, 4, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_2564, 6, 0, 0, 0);
				}
				else
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_2564, 4, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_2564, 6, 1, 0, 0);
				}
				PED::SET_PED_COMPONENT_VARIATION(Local_2564, 8, 0, 0, 0);
				GlobalFunc_173(&uLocal_2632, 7, Local_2564, "pap2lover", 0, 1);
				PED::SET_PED_LOD_MULTIPLIER(Local_2564, 2f);
				return 1;
			}
			return 0;
			break;
		
		case 4:
			if (func_321(&Local_2569, Local_2569.f_1, Local_2569.f_4, iLocal_2804, 0, "BODYGUARD "))
			{
				PED::SET_PED_SEEING_RANGE(Local_2569, 50f);
				PED::SET_PED_HEARING_RANGE(Local_2569, 15f);
				PED::SET_PED_ID_RANGE(Local_2569, 20f);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_2569, uLocal_2839);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2569, 1);
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_2569);
				PED::SET_PED_CONFIG_FLAG(Local_2569, 114, 1);
				AUDIO::STOP_PED_SPEAKING(Local_2569, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_2569, 0, 0);
				ENTITY::SET_ENTITY_PROOFS(Local_2569, 0, 0, 0, 1, 0, 0, 0, 0);
				return 1;
			}
			return 0;
			break;
		
		case 5:
			iLocal_2884 = 0;
			while (iLocal_2884 <= 2)
			{
				if (iLocal_2884 == 1)
				{
					if (func_318(&(uLocal_2914[0]), iLocal_2798[0], Local_2460[0 /*3*/], fLocal_2512[0]))
					{
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_2798[0], 1);
						if (GlobalFunc_115(uLocal_2914[0]))
						{
							VEHICLE::SET_VEHICLE_COLOURS(uLocal_2914[0], 87, 87);
							VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uLocal_2914[0], 87, 87);
							VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(uLocal_2914[0], 0);
							VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(uLocal_2914[0], 0);
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(uLocal_2914[0], 3);
							ENTITY::SET_ENTITY_PROOFS(uLocal_2914[0], 0, 0, 0, 0, 0, 0, 0, 0);
							VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(uLocal_2914[0], 0);
							VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(uLocal_2914[0], "P0PPYM14");
							iVar0++;
						}
					}
				}
				else if (iLocal_2884 == 2)
				{
					if (func_318(&(uLocal_2914[1]), iLocal_2798[1], Local_2460[1 /*3*/], fLocal_2512[1]))
					{
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_2798[1], 1);
						if (GlobalFunc_115(uLocal_2914[1]))
						{
							VEHICLE::SET_VEHICLE_COLOURS(uLocal_2914[1], 0, 0);
							VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uLocal_2914[1], 0, 0);
							VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(uLocal_2914[1], 0);
							VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(uLocal_2914[1], 0);
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(uLocal_2914[1], 3);
							ENTITY::SET_ENTITY_PROOFS(uLocal_2914[1], 0, 0, 0, 0, 0, 0, 0, 0);
							iVar0++;
						}
					}
				}
				else if (func_318(&(uLocal_2914[2]), iLocal_2798[2], Local_2460[2 /*3*/], fLocal_2512[2]))
				{
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_2798[2], 1);
					if (GlobalFunc_115(uLocal_2914[2]))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(uLocal_2914[2], 3);
						VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(uLocal_2914[2], 0);
						VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(uLocal_2914[2], 0);
						VEHICLE::SET_VEHICLE_COLOURS(uLocal_2914[2], 0, 0);
						VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uLocal_2914[2], 0, 0);
						ENTITY::SET_ENTITY_PROOFS(uLocal_2914[2], 0, 0, 0, 0, 0, 0, 0, 0);
						iVar0++;
					}
				}
				if (iVar0 == 3)
				{
					return 1;
				}
				iLocal_2884++;
			}
			return 0;
			break;
		
		case 6:
			iVar1 = 0;
			iLocal_2884 = 0;
			while (iLocal_2884 <= 1)
			{
				if (iLocal_2884 == 0)
				{
					iVar1 = iLocal_2805[0];
				}
				else
				{
					iVar1 = iLocal_2805[1];
				}
				if (iVar1 != 0)
				{
					if (func_321(&(Local_2574[iLocal_2884 /*5*/]), Local_2574[iLocal_2884 /*5*/].f_1, Local_2574[iLocal_2884 /*5*/].f_4, iVar1, iLocal_2884, "HOTEL STAFF "))
					{
						if (iLocal_2884 == 0)
						{
							TASK::TASK_USE_MOBILE_PHONE(Local_2574[0 /*5*/], 1, 1);
							GlobalFunc_173(&uLocal_2632, 4, Local_2574[iLocal_2884 /*5*/], "Pap2Maid", 0, 1);
						}
						else
						{
							GlobalFunc_173(&uLocal_2632, 5, Local_2574[iLocal_2884 /*5*/], "Pap2BusBoy", 0, 1);
						}
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_2574[iLocal_2884 /*5*/], uLocal_2839);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2574[iLocal_2884 /*5*/], 1);
						iVar0++;
						if (iVar0 >= 2)
						{
							return 1;
						}
					}
				}
				iLocal_2884++;
			}
			break;
		
		case 7:
			if (GlobalFunc_4924(Local_2574[1 /*5*/]))
			{
				if (func_317(&iLocal_2817, joaat("prop_tool_broom"), Local_2574[1 /*5*/].f_1, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2817))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_2817, Local_2574[1 /*5*/], PED::GET_PED_BONE_INDEX(Local_2574[1 /*5*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						if (ENTITY::IS_ENTITY_ATTACHED(iLocal_2817))
						{
							return 1;
						}
					}
				}
			}
			break;
		
		case 8:
			if (GlobalFunc_4924(Local_2574[0 /*5*/]))
			{
				if (func_317(&iLocal_2818, joaat("prop_rag_01"), Local_2574[0 /*5*/].f_1, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2818))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_2818, Local_2574[0 /*5*/], PED::GET_PED_BONE_INDEX(Local_2574[0 /*5*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						if (ENTITY::IS_ENTITY_ATTACHED(iLocal_2818))
						{
							return 1;
						}
					}
				}
			}
			break;
		
		case 9:
			if (func_318(&iLocal_2918, iLocal_2797, Param1, fParam4))
			{
				GlobalFunc_534(iLocal_2918, 0);
				if (GlobalFunc_115(iLocal_2918))
				{
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_2797, 1);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_2918, 7);
					VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(iLocal_2918, 0);
					VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_2918, 0);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iLocal_2918, 0);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_2918, "P4P4R4Z0");
					ENTITY::SET_ENTITY_PROOFS(iLocal_2918, 0, 0, 0, 0, 0, 0, 0, 0);
					if (iLocal_2840 != 7)
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_2918, 3);
					}
					return 1;
				}
			}
			return 0;
			break;
		
		case 10:
			STREAMING::REQUEST_ANIM_DICT("rcmpaparazzo_2");
			STREAMING::REQUEST_MODEL(joaat("prop_npc_phone"));
			if (STREAMING::HAS_ANIM_DICT_LOADED("rcmpaparazzo_2") && STREAMING::HAS_MODEL_LOADED(joaat("prop_npc_phone")))
			{
				return 1;
			}
			return 0;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			if (func_323(Local_2899))
			{
				return 1;
			}
			return 0;
			break;
		
		case 16:
			if (func_248(1))
			{
				return 1;
			}
			return 0;
			break;
		
		case 13:
			if (func_248(0))
			{
				return 1;
			}
			return 0;
			break;
		
		case 14:
			if (!CAM::DOES_CAM_EXIST(uLocal_2811))
			{
				uLocal_2811 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", Param1, 0f, 0f, fParam4, 50f, 1, 2);
				if (CAM::DOES_CAM_EXIST(uLocal_2811))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
			return 0;
			break;
		
		case 17:
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("helicopterhud", 0);
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("helicopterhud"))
			{
				return 1;
			}
			break;
		
		case 15:
			STREAMING::REQUEST_ANIM_DICT("veh@std@ds@base");
			if (STREAMING::HAS_ANIM_DICT_LOADED("veh@std@ds@base"))
			{
				return 1;
			}
			return 0;
			break;
		
		case 18:
			VEHICLE::REQUEST_VEHICLE_RECORDING(1, "PAP2UBA");
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "PAP2UBA"))
			{
				if (GlobalFunc_115(iLocal_2918))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_2918, Local_2457, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_2918, -0.0022f, -0.0289f, 0.7901f, -0.6123f);
					return 1;
				}
			}
			return 0;
			break;
		
		case 19:
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "PAP2UBA");
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "PAP2UBA"))
			{
				if (GlobalFunc_115(uLocal_2914[0]))
				{
					ENTITY::SET_ENTITY_COORDS(uLocal_2914[0], -61.579f, 337.5999f, 111.1908f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_QUATERNION(uLocal_2914[0], -0.0013f, -0.0482f, 0.9656f, 0.2557f);
					return 1;
				}
			}
			return 0;
			break;
		
		case 20:
			VEHICLE::REQUEST_VEHICLE_RECORDING(102, "PAP2UBA");
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(102, "PAP2UBA"))
			{
				if (GlobalFunc_115(uLocal_2914[1]))
				{
					ENTITY::SET_ENTITY_COORDS(uLocal_2914[1], -62.3523f, 322.6747f, 109.7139f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_QUATERNION(uLocal_2914[1], -0.023f, -0.0644f, 0.9756f, 0.2086f);
					return 1;
				}
			}
			return 0;
			break;
		
		case 21:
			VEHICLE::REQUEST_VEHICLE_RECORDING(103, "PAP2UBA");
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "PAP2UBA"))
			{
				if (GlobalFunc_115(uLocal_2914[2]))
				{
					ENTITY::SET_ENTITY_COORDS(uLocal_2914[2], -68.0034f, 309.4698f, 107.7925f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_QUATERNION(uLocal_2914[2], -0.0176f, -0.0678f, 0.9756f, 0.2082f);
					return 1;
				}
			}
			return 0;
			break;
		
		case 22:
			if (GlobalFunc_115(iLocal_2918))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2918, -1);
				if (func_28(PLAYER::PLAYER_PED_ID(), iLocal_2918))
				{
				}
			}
			return 0;
			break;
		
		case 23:
			VEHICLE::REQUEST_VEHICLE_RECORDING(1, "PAP2UBA");
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "PAP2UBA") && func_314(iLocal_2798[0], "POPPY CAR", 0))
			{
				if (func_318(&(uLocal_2914[0]), iLocal_2798[0], -61.5607f, 337.6627f, 110.5456f, 150.2983f))
				{
					if (GlobalFunc_115(uLocal_2914[0]) && GlobalFunc_115(iLocal_2918))
					{
						if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()) && GlobalFunc_4924(iLocal_2554))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_2554, iLocal_2918, -1);
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_2914[0], -1);
							if (func_28(PLAYER::PLAYER_PED_ID(), uLocal_2914[0]) && func_28(iLocal_2554, iLocal_2918))
							{
								return 1;
							}
						}
					}
				}
			}
			return 0;
			break;
		
		case 24:
			if (GlobalFunc_115(iLocal_2918))
			{
				if (GlobalFunc_4924(iLocal_2554))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_2554, iLocal_2918, -1);
					if (func_28(iLocal_2554, iLocal_2918))
					{
						return 1;
					}
				}
			}
			break;
		
		case 25:
			if (!iLocal_2368)
			{
				return 1;
			}
			if ((AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\PAPARAZZO_02_A", 0) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\PAPARAZZO_02_B", 0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\PAPARAZZO_02_C", 0))
			{
				return 1;
			}
			break;
		
		case 26:
			HUD::REQUEST_ADDITIONAL_TEXT("PAP2", 0);
			if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_314(int iParam0, char* sParam1, int iParam2)//Position - 0x2C8E7
{
	STREAMING::REQUEST_MODEL(iParam0);
	if (iParam2 == 9999)
	{
		GlobalFunc_587(sParam1, iParam2);
	}
	if (STREAMING::HAS_MODEL_LOADED(iParam0))
	{
		return 1;
	}
	return 0;
}



int func_317(var uParam0, int iParam1, struct<3> Param2, int iParam5)//Position - 0x2C92F
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (func_314(iParam1, "Loading", 0))
		{
			*uParam0 = OBJECT::CREATE_OBJECT(iParam1, Param2, 1, 1, 0);
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				ENTITY::SET_ENTITY_HEADING(*uParam0, iParam5);
				PHYSICS::ACTIVATE_PHYSICS(*uParam0);
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

int func_318(int iParam0, int iParam1, struct<3> Param2, float fParam5)//Position - 0x2C986
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (func_314(iParam1, "Loading", 0))
		{
			*iParam0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, 1, 0);
				}
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				func_319(iParam1);
				return 1;
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, 1, 0);
		return 1;
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_319(int iParam0)//Position - 0x2CA0B
{
	if (STREAMING::HAS_MODEL_LOADED(iParam0))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0);
	}
}


int func_321(var uParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, char* sParam7)//Position - 0x2CA4C
{
	char cVar0[16];
	
	if (func_322(uParam0, iParam5, Param1, fParam4))
	{
		if (GlobalFunc_4924(*uParam0))
		{
			StringCopy(&cVar0, sParam7, 16);
			StringIntConCat(&cVar0, iParam6, 16);
			PED::SET_PED_NAME_DEBUG(*uParam0, &cVar0);
			return 1;
		}
	}
	return 0;
}

int func_322(var uParam0, int iParam1, struct<3> Param2, float fParam5)//Position - 0x2CA89
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (func_314(iParam1, "Loading", 0))
		{
			*uParam0 = PED::CREATE_PED(26, iParam1, Param2, uParam5, 1, 1);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam0);
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				func_319(iParam1);
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

int func_323(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)//Position - 0x2CAE0
{
	if (!MISC::IS_STRING_NULL(&cParam0))
	{
		if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cParam0))
		{
			TASK::REQUEST_WAYPOINT_RECORDING(&cParam0);
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cParam0))
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


void func_325(int iParam0, int iParam1, int iParam2)//Position - 0x2CB2D
{
	func_231(0, 0, iParam2, 1);
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

void func_326()//Position - 0x2CB61
{
	struct<6> Var0;
	bool bVar6;
	
	PAD::_0x7F4724035FDCA1DD(2);
	Var0 = { GlobalFunc_2209() };
	if (MISC::ARE_STRINGS_EQUAL(&Var0, "PAP2_CHASE1_3"))
	{
		GlobalFunc_5105();
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_2172))
	{
		AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(uLocal_2172);
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::THEFEED_HIDE_THIS_FRAME();
	GlobalFunc_7629();
	if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), -60.2805f, -493.5712f, 39.261f, 100f))
	{
		CUTSCENE::REQUEST_CUTSCENE("pap_2_mcs_1", 8);
	}
	if (!bLocal_2879 && ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
	}
	switch (iLocal_2841)
	{
		case 0:
			if (func_241(8, bLocal_2853))
			{
				HUD::CLEAR_PRINTS();
				CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
				if (GlobalFunc_4924(iLocal_2554))
				{
					PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(iLocal_2554);
				}
				if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
				{
					PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID());
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_02_INTRO"))
				{
					AUDIO::STOP_AUDIO_SCENE("PAPARAZZO_02_INTRO");
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2305))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(iLocal_2305))
					{
						ENTITY::DETACH_ENTITY(iLocal_2305, 1, 1);
					}
					OBJECT::DELETE_OBJECT(&iLocal_2305);
				}
				MISC::SET_INSTANCE_PRIORITY_HINT(2);
				GlobalFunc_2295(&iLocal_2304, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_pap_camera_01"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_npc_phone"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_table_06"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_parasol_03"));
				STREAMING::REMOVE_CLIP_SET("move_f@sexy@a");
				STREAMING::REMOVE_CLIP_SET(sLocal_2908);
				STREAMING::REMOVE_CLIP_SET(sLocal_2909);
				STREAMING::REMOVE_ANIM_DICT("RANDOM@CAR_THIEF@waiting_ig_4");
				STREAMING::REMOVE_ANIM_DICT("cover@move@base@core");
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
				GlobalFunc_138();
				func_413(3, "CHASE", 1, 0, 0, 1);
				if (GlobalFunc_4924(Local_2559))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_2559, PLAYER::PLAYER_PED_ID(), -1, 2096, 2);
				}
				if (GlobalFunc_4947(iLocal_2918))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_2918, 1);
					VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_2918);
				}
				STREAMING::REQUEST_ANIM_DICT("rcmpaparazzo_2ig_3");
				iLocal_2843 = 0;
				iLocal_2241 = 1;
				iLocal_2841 = 1;
				iLocal_2842 = 0;
				func_412();
				iLocal_2910 = 0;
				fLocal_2836 = 0f;
				fLocal_2837 = 0f;
				iLocal_2190 = 0;
				iLocal_2193 = 0;
				iLocal_2200 = 0;
				iLocal_2888 = 0;
				iLocal_2896 = 0;
				fLocal_2291 = 0f;
				fLocal_2292 = 0f;
				fLocal_2293 = 0f;
				iLocal_2223 = 0;
				iLocal_2911 = 0;
				bLocal_2816 = false;
				iLocal_2233 = 0;
				iLocal_2301 = 0;
				iLocal_2252 = 0;
				iLocal_2260 = 0;
				iLocal_2265 = 0;
				func_247();
				func_411();
				bLocal_91 = true;
				bLocal_102 = true;
				iLocal_2266 = 0;
				iLocal_2267 = 0;
				iLocal_2268 = 0;
				iLocal_2269 = 0;
				iLocal_2270 = 0;
				iLocal_2271 = 0;
				iLocal_2272 = 0;
				iLocal_2273 = 0;
				iLocal_2274 = 0;
				iLocal_2275 = 0;
				iLocal_2276 = 0;
				iLocal_2277 = 0;
				iLocal_2278 = 0;
				iLocal_2279 = 0;
				iLocal_2280 = 0;
				iLocal_2282 = 0;
				iLocal_2218 = 0;
				iLocal_2219 = 0;
				iLocal_2220 = 0;
				iLocal_2221 = 0;
				iLocal_2287 = 0;
				func_358();
				PED::SET_PED_NON_CREATION_AREA(Vector(60.0327f, -160.2005f, 252.7712f) - Vector(50f, 100f, 100f), Vector(60.0327f, -160.2005f, 252.7712f) + Vector(50f, 100f, 100f));
			}
			break;
		
		case 1:
			if (GlobalFunc_115(iLocal_2918))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2918))
				{
					if (GlobalFunc_199())
					{
						if (!iLocal_2287)
						{
							if (fLocal_2290 < 8847.924f)
							{
							}
							else
							{
								iLocal_2287 = 1;
							}
						}
					}
					uLocal_2294 = uLocal_2294;
					if (iLocal_2220 == 0)
					{
						iLocal_2220 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(83, iLocal_2918, -1082130432);
					}
					if (fLocal_2290 > 10000f && !bLocal_2879)
					{
						iLocal_2359 = PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2918, 0f, 10f, 0f), 4f, 4f, 4f, 26);
						if ((GlobalFunc_4924(iLocal_2359) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_2359, 2112745624) != 1) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_2359, 1805844857) != 1)
						{
							TASK::CLEAR_PED_TASKS(iLocal_2359);
							PED::SET_PED_KEEP_TASK(iLocal_2359, 1);
							if (GlobalFunc_115(iLocal_2554))
							{
								if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
								{
									TASK::TASK_REACT_AND_FLEE_PED(iLocal_2359, iLocal_2554);
									GlobalFunc_587("PED REACT AND FLEE FROM BEVERLY");
								}
								else
								{
									TASK::TASK_SMART_FLEE_PED(iLocal_2359, iLocal_2554, 50f, -1, 1, 0);
									GlobalFunc_587("PED SMART FLEE FROM BEVERLY");
								}
							}
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_2359);
						}
					}
					if (GlobalFunc_115(uLocal_2914[2]))
					{
						if (iLocal_2218 == 0)
						{
							iLocal_2218 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(83, uLocal_2914[2], -1082130432);
						}
					}
					fLocal_2290 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_2918);
					if (GlobalFunc_4947(uLocal_2914[1]))
					{
						if (iLocal_2221 == 0)
						{
							iLocal_2221 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(83, uLocal_2914[1], -1082130432);
						}
						iLocal_2358 = PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_2914[1], 0f, 10f, 0f), 4f, 4f, 4f, 26);
						if ((GlobalFunc_4924(iLocal_2358) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_2358, 2112745624) != 1) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_2358, 1805844857) != 1)
						{
							TASK::CLEAR_PED_TASKS(iLocal_2358);
							PED::SET_PED_KEEP_TASK(iLocal_2358, 1);
							if (GlobalFunc_115(Local_2564))
							{
								if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
								{
									TASK::TASK_REACT_AND_FLEE_PED(iLocal_2358, Local_2564);
									GlobalFunc_587("PED REACT AND FLEE FROM JUSTIN");
								}
								else
								{
									TASK::TASK_SMART_FLEE_PED(iLocal_2358, Local_2564, 50f, -1, 1, 0);
									GlobalFunc_587("PED SMART FLEE FROM JUSTIN");
								}
							}
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_2358);
						}
						if (iLocal_2239 == 0)
						{
							if (fLocal_2290 >= 28753.05f)
							{
								VEHICLE::SET_VEHICLE_DAMAGE(uLocal_2914[1], 431.1f, 295.63f, 102.8f, 150f, 110f, 0);
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_2324))
								{
									VEHICLE::SET_VEHICLE_DAMAGE(iLocal_2324, 431.1f, 295.63f, 103f, 200f, 200f, 0);
									VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_2324, 0);
								}
								AUDIO::PLAY_SOUND_FROM_COORD(-1, "SMALL_CRASH", 431.1f, 295.63f, 102.8f, "PAPARAZZO_02_SOUNDSETS", 0, 0, 0);
								iLocal_2239 = 1;
							}
						}
					}
					if (GlobalFunc_115(uLocal_2914[0]))
					{
						if (iLocal_2219 == 0)
						{
							iLocal_2219 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(83, uLocal_2914[0], -1082130432);
						}
						if (iLocal_2240 == 0)
						{
							if (fLocal_2290 >= 49422.61f)
							{
								RECORDING::_0x293220DA1B46CEBC(5f, 5f, 1);
								VEHICLE::SET_VEHICLE_DAMAGE(uLocal_2914[0], 643.32f, 33.03f, 86f, 200f, 200f, 0);
								iLocal_2240 = 1;
							}
						}
						if (iLocal_2265 == 0)
						{
							if (AUDIO::HAS_SOUND_FINISHED(iLocal_2365))
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_2365, "LOOP_REV", uLocal_2914[0], "PAPARAZZO_02_SOUNDSETS", 0, 0);
							}
							if (iLocal_2219 == 0)
							{
								iLocal_2219 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(83, uLocal_2914[0], -1082130432);
							}
							iLocal_2357 = PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_2914[0], 0f, 10f, 0f), 4f, 4f, 4f, 26);
							if ((GlobalFunc_4924(iLocal_2357) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_2357, 2112745624) != 1) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_2357, 1805844857) != 1)
							{
								TASK::CLEAR_PED_TASKS(iLocal_2357);
								PED::SET_PED_KEEP_TASK(iLocal_2357, 1);
								if (GlobalFunc_115(Local_2559))
								{
									if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
									{
										TASK::TASK_REACT_AND_FLEE_PED(iLocal_2357, Local_2559);
										GlobalFunc_587("PED REACT AND FLEE FROM POPPY");
									}
									else
									{
										TASK::TASK_SMART_FLEE_PED(iLocal_2357, Local_2559, 50f, -1, 1, 0);
										GlobalFunc_587("PED SMART FLEE FROM POPPY");
									}
								}
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_2357);
							}
							if (fLocal_2290 >= 92227.95f)
							{
								RECORDING::_0x293220DA1B46CEBC(5f, 5f, 0);
								VEHICLE::SMASH_VEHICLE_WINDOW(uLocal_2914[0], 6);
								VEHICLE::SET_VEHICLE_DAMAGE(uLocal_2914[0], 99.92f, -396.72f, 40.74f, 200f, 200f, 0);
								VEHICLE::SET_VEHICLE_TYRE_BURST(uLocal_2914[0], 0, 0, 1148846080);
								VEHICLE::SET_VEHICLE_TYRE_BURST(uLocal_2914[0], 1, 0, 1148846080);
								AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "BUILDING_SITE_CRASH", uLocal_2914[0], "PAPARAZZO_02_SOUNDSETS", 0, 0);
								AUDIO::TRIGGER_MUSIC_EVENT("PAP2_STOP");
								if (GlobalFunc_4924(uLocal_2314[0]))
								{
									TASK::TASK_GO_TO_ENTITY(uLocal_2314[0], uLocal_2914[0], -1, 10f, 1073741824, 1073741824, 0);
								}
								if (GlobalFunc_4924(uLocal_2314[1]))
								{
									TASK::TASK_GO_TO_ENTITY(uLocal_2314[1], uLocal_2914[0], -1, 5f, 1073741824, 1073741824, 0);
								}
								if (GlobalFunc_4924(uLocal_2314[2]))
								{
									TASK::TASK_GO_TO_ENTITY(uLocal_2314[2], uLocal_2914[0], -1, 15f, 1073741824, 1073741824, 0);
								}
								if (GlobalFunc_4924(uLocal_2314[3]))
								{
									TASK::TASK_GO_TO_ENTITY(uLocal_2314[3], uLocal_2914[0], -1, 10f, 1073741824, 1073741824, 0);
								}
								if (GlobalFunc_4924(uLocal_2314[4]))
								{
									TASK::TASK_START_SCENARIO_IN_PLACE(uLocal_2314[4], "WORLD_HUMAN_MOBILE_FILM_SHOCKING", -1, 1);
								}
								iLocal_2219 = 0;
								GlobalFunc_2297(&iLocal_2357, 1, 0, 1);
								RECORDING::_0x293220DA1B46CEBC(3f, 0f, 0);
								iLocal_2265 = 1;
							}
						}
						else
						{
							if (!AUDIO::HAS_SOUND_FINISHED(iLocal_2365))
							{
								AUDIO::STOP_SOUND(iLocal_2365);
							}
							if (iLocal_2222 == 0)
							{
								iLocal_2222 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(77, uLocal_2914[0], -1082130432);
							}
						}
					}
					if (fLocal_2290 >= 40577.41f && fLocal_2290 < 42025.58f)
					{
						if (fLocal_2292 < 2.5f)
						{
							fLocal_2292 = (fLocal_2292 + 0.1f);
						}
						if (GlobalFunc_115(uLocal_2914[2]))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_2914[2]))
							{
								VEHICLE::_0x796A877E459B99EA(uLocal_2914[2], fLocal_2292, 0f, 0f);
							}
						}
					}
					else if (fLocal_2292 != 0f)
					{
						if (fLocal_2290 >= 42025.58f)
						{
							if (fLocal_2292 > 0f)
							{
								fLocal_2292 = (fLocal_2292 - 0.1f);
							}
							if (fLocal_2292 < 0f)
							{
								fLocal_2292 = 0f;
							}
							if (GlobalFunc_115(uLocal_2914[2]))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_2914[2]))
								{
									VEHICLE::_0x796A877E459B99EA(uLocal_2914[2], fLocal_2292, 0f, 0f);
								}
							}
						}
					}
					if (!iLocal_2282)
					{
						if (fLocal_2290 >= 39807.45f && fLocal_2290 < 41084.42f)
						{
							if (fLocal_2291 < 0.1f)
							{
								fLocal_2291 = (fLocal_2291 + 0.01f);
							}
							if (fLocal_2293 > -0.3f)
							{
								fLocal_2293 = (fLocal_2293 - 0.01f);
							}
							VEHICLE::_0x796A877E459B99EA(uLocal_2914[0], fLocal_2293, 0f, fLocal_2291);
						}
						else if (fLocal_2290 >= 41084.42f)
						{
							iLocal_2282 = 1;
						}
					}
					else if (fLocal_2290 >= 45980.9f && fLocal_2290 < 48093.19f)
					{
						if (fLocal_2291 < 0.1f)
						{
							fLocal_2291 = (fLocal_2291 + 0.02f);
						}
						VEHICLE::_0x796A877E459B99EA(uLocal_2914[0], fLocal_2293, 0f, fLocal_2291);
					}
					else
					{
						if (fLocal_2291 != 0f)
						{
							if (fLocal_2291 > 0f)
							{
								fLocal_2291 = (fLocal_2291 - 0.02f);
							}
							if (fLocal_2291 < 0f)
							{
								fLocal_2291 = 0f;
							}
						}
						if (fLocal_2293 != 0f)
						{
							if (fLocal_2293 < 0f)
							{
								fLocal_2293 = (fLocal_2293 + 0.01f);
							}
							if (fLocal_2293 > 0f)
							{
								fLocal_2293 = 0f;
							}
						}
						if (fLocal_2291 != 0f || fLocal_2293 != 0f)
						{
							VEHICLE::_0x796A877E459B99EA(uLocal_2914[0], fLocal_2293, 0f, fLocal_2291);
						}
					}
					if (fLocal_2290 >= 3472.198f && fLocal_2290 < 94887.29f)
					{
						iLocal_2822 = 1;
					}
					else
					{
						iLocal_2822 = 0;
					}
					if (GlobalFunc_4947(uLocal_2914[0]))
					{
						if (fLocal_2290 >= 48117.37f && fLocal_2290 < 50493.31f)
						{
							PHYSICS::ACTIVATE_PHYSICS(uLocal_2914[0]);
						}
						if (fLocal_2290 >= 87079.42f)
						{
							PHYSICS::ACTIVATE_PHYSICS(uLocal_2914[0]);
						}
					}
					if (GlobalFunc_4947(uLocal_2914[1]))
					{
						if (fLocal_2290 >= 27450.81f && fLocal_2290 < 30024.78f)
						{
							if (GlobalFunc_4947(iLocal_2324))
							{
								PHYSICS::ACTIVATE_PHYSICS(iLocal_2324);
							}
							PHYSICS::ACTIVATE_PHYSICS(uLocal_2914[1]);
						}
						if (fLocal_2290 >= 87079.42f)
						{
							PHYSICS::ACTIVATE_PHYSICS(uLocal_2914[1]);
						}
						if (iLocal_2250 == 0)
						{
							if (fLocal_2290 > 88060.51f && fLocal_2290 < 89076.59f)
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "HIGHREV", uLocal_2914[1], "PAPARAZZO_02_SOUNDSETS", 0, 0);
								GlobalFunc_587("HIGH REV SOUND");
								iLocal_2250 = 1;
							}
						}
					}
					if (GlobalFunc_4947(uLocal_2914[2]))
					{
						if (fLocal_2290 >= 52143f && fLocal_2290 < 56000f)
						{
							PHYSICS::ACTIVATE_PHYSICS(uLocal_2914[2]);
						}
						if (fLocal_2290 >= 64722.5f && fLocal_2290 < 67652.06f)
						{
							PHYSICS::ACTIVATE_PHYSICS(uLocal_2914[2]);
						}
						if (fLocal_2290 >= 87079.42f)
						{
							PHYSICS::ACTIVATE_PHYSICS(uLocal_2914[2]);
						}
					}
					if (fLocal_2290 >= 500f && iLocal_2193 != 7)
					{
						func_355();
					}
					if (iLocal_2174 == 0)
					{
						if (fLocal_2290 >= 91365.81f)
						{
							iLocal_2878 = 0;
							iLocal_2882 = 1;
						}
					}
					if (fLocal_2290 > 0f)
					{
						if (iLocal_2245 == 0)
						{
							VEHICLE::SET_VEHICLE_DOOR_BROKEN(iLocal_2918, 5, 1);
							ENTITY::SET_ENTITY_VISIBLE(iLocal_2918, 1);
							iLocal_2245 = 1;
						}
						else if (iLocal_2252 == 0)
						{
							iLocal_2252 = 1;
						}
						else if (iLocal_2260 == 0)
						{
							iLocal_2260 = 1;
						}
					}
					if (iLocal_2243 == 0)
					{
						if (fLocal_2290 >= 91715.73f)
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_10618(&uLocal_2632, cLocal_2907, "PAP2_PIPES", 8, 0, 0, 0))
								{
									iLocal_2243 = 1;
								}
							}
						}
					}
					if (iLocal_2301 == 0)
					{
						if (fLocal_2290 >= 85000f)
						{
							uLocal_2300 = STREAMING::STREAMVOL_CREATE_FRUSTUM(-71.5438f, -549.907f, 40.5579f, 2.4313f, 1.2491f, -20.7899f, 200f, 13, 127);
							STREAMING::REQUEST_MODEL(joaat("prop_pipes_02b"));
							STREAMING::REQUEST_MODEL(joaat("prop_cablespool_02"));
							STREAMING::REQUEST_MODEL(joaat("prop_barrier_wat_04c"));
							STREAMING::REQUEST_MODEL(joaat("prop_consign_01a"));
							STREAMING::REQUEST_MODEL(joaat("prop_barrier_work06a"));
							STREAMING::REQUEST_MODEL(joaat("prop_sign_road_03g"));
							STREAMING::REQUEST_MODEL(joaat("prop_sign_road_03m"));
							PED::SET_PED_NON_CREATION_AREA(Vector(38.4052f, -403.4291f, 1.9758f) - Vector(10f, 30f, 30f), Vector(38.4052f, -403.4291f, 1.9758f) + Vector(10f, 30f, 30f));
							iLocal_2301 = 1;
						}
					}
					if (fLocal_2290 >= 80000f)
					{
						func_352();
					}
					if (fLocal_2290 < 15000f)
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							if (!CAM::IS_SCREEN_FADING_IN())
							{
								GlobalFunc_79(800, 0);
							}
						}
					}
					func_351();
					if (GlobalFunc_4924(Local_2559))
					{
						PED::SET_PED_LOD_MULTIPLIER(Local_2559, 2f);
						if (fLocal_2290 >= 47849.2f && fLocal_2290 < 49546.55f)
						{
							if (!PED::IS_PED_DOING_DRIVEBY(Local_2559))
							{
								TASK::TASK_DRIVE_BY(Local_2559, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 7f, 100, 0, -753768974);
							}
						}
					}
					if (iLocal_2281 == 1)
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_2918) < 80000f)
						{
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_2918, 80000f);
						}
					}
				}
				if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_2918, 2) > 0f)
				{
					VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_2918, 2, 0, (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_2918, 2) - 0.08f));
				}
				if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_2918, 3) > 0f)
				{
					VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_2918, 3, 0, (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_2918, 3) - 0.08f));
				}
			}
			if (!iLocal_2878)
			{
				if (!iLocal_2881)
				{
					iLocal_2881 = 1;
				}
				else
				{
					if (bLocal_2880)
					{
						if (CAM::DOES_CAM_EXIST(uLocal_2811))
						{
							CAM::STOP_CAM_POINTING(uLocal_2811);
						}
						if (!bLocal_2879)
						{
							if (CAM::DOES_CAM_EXIST(uLocal_2813))
							{
								CAM::DESTROY_CAM(uLocal_2813, 0);
							}
							if (CAM::DOES_CAM_EXIST(uLocal_2811))
							{
								fLocal_2289 = CAM::GET_CAM_FOV(uLocal_2811);
							}
							if (!iLocal_2233)
							{
								func_14(0);
							}
						}
					}
					else if (iLocal_2245 == 1)
					{
						if (bLocal_2880 == 0)
						{
							if (func_313(13, Local_2470, 0))
							{
								if (CAM::DOES_CAM_EXIST(uLocal_2811))
								{
									CAM::SHAKE_CAM(uLocal_2811, "HAND_SHAKE", 0.1f);
									CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
								}
								func_14(0);
								ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
								bLocal_2880 = true;
							}
						}
					}
					func_350();
					if (bLocal_2880)
					{
						if (func_28(PLAYER::PLAYER_PED_ID(), iLocal_2918))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2918))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_2918) <= 86982.21f)
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_2918) >= 1000f)
									{
										func_345(Local_2559, &bVar6, 1);
										if (!bVar6)
										{
											if (!iLocal_2882)
											{
												func_343();
											}
										}
									}
								}
							}
						}
					}
					func_341();
				}
			}
			else
			{
				if (CAM::DOES_CAM_EXIST(uLocal_2811))
				{
					fLocal_2289 = CAM::GET_CAM_FOV(uLocal_2811);
				}
				func_14(0);
				if (func_340())
				{
					func_338(4);
				}
			}
			func_328();
			func_358();
			break;
		
		case 2:
			func_327(0);
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
			GlobalFunc_146(&iLocal_2808);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			break;
		
		case 3:
			if (func_28(PLAYER::PLAYER_PED_ID(), iLocal_2918))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2918))
				{
					VEHICLE::SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2918);
					if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2918, 2))
					{
						TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(PLAYER::PLAYER_PED_ID(), iLocal_2918);
					}
					CUTSCENE::REQUEST_CUTSCENE("pap_2_mcs_1", 8);
					iLocal_2841 = 2;
				}
			}
			break;
	}
}

void func_327(bool bParam0)//Position - 0x2DB2A
{
	iLocal_2885 = iLocal_2840;
	if (!bParam0)
	{
		iLocal_2840 = iLocal_2885 + 1;
	}
	else if (iLocal_2885 > 0)
	{
		iLocal_2840 = (iLocal_2885 - 1);
	}
	iLocal_2852 = 0;
	iLocal_2841 = 0;
}

void func_328()//Position - 0x2DB60
{
	if (!GlobalFunc_111())
	{
		if (GlobalFunc_4924(Local_2559))
		{
			if (GlobalFunc_155(Local_2559, PLAYER::PLAYER_PED_ID(), 16f))
			{
				if (GlobalFunc_4947(iLocal_2918))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2918))
					{
						if (fLocal_2290 > 50000f && fLocal_2290 < 60000f)
						{
							if (iLocal_2923 == 0)
							{
								if (GlobalFunc_10630(&uLocal_2632, cLocal_2907, "PAP2_POP", "PAP2_POP_6", 7, 0, 0))
								{
									TASK::TASK_PLAY_ANIM(Local_2559, "rcmpaparazzo_2ig_3", "pm_incar_fuckinlosers", 8f, -2f, -1, 0, 0f, 0, 0, 0);
									iLocal_2923 = 1;
									iLocal_2925 = MISC::GET_GAME_TIMER();
									return;
								}
							}
						}
						if (fLocal_2290 > 72000f && fLocal_2290 < 84000f)
						{
							if (iLocal_2922 == 0)
							{
								if (GlobalFunc_10630(&uLocal_2632, cLocal_2907, "PAP2_POP", "PAP2_POP_5", 7, 0, 0))
								{
									TASK::TASK_PLAY_ANIM(Local_2559, "rcmpaparazzo_2ig_3", "pm_incar_ih8u", 8f, -2f, -1, 0, 0f, 0, 0, 0);
									iLocal_2922 = 1;
									iLocal_2925 = MISC::GET_GAME_TIMER();
									return;
								}
							}
						}
					}
				}
			}
			if (GlobalFunc_155(Local_2559, PLAYER::PLAYER_PED_ID(), 12f))
			{
				if (iLocal_2919 == 0)
				{
					if (GlobalFunc_10630(&uLocal_2632, cLocal_2907, "PAP2_POP", "PAP2_POP_1", 7, 0, 0))
					{
						TASK::TASK_PLAY_ANIM(Local_2559, "rcmpaparazzo_2ig_3", "pm_incar_gimmethtcam", 8f, -2f, -1, 0, 0f, 0, 0, 0);
						iLocal_2919 = 1;
						iLocal_2925 = MISC::GET_GAME_TIMER();
						return;
					}
				}
				if (MISC::GET_GAME_TIMER() > iLocal_2925 + 9000)
				{
					if (iLocal_2920 == 0)
					{
						if (GlobalFunc_10630(&uLocal_2632, cLocal_2907, "PAP2_POP", "PAP2_POP_2", 7, 0, 0))
						{
							TASK::TASK_PLAY_ANIM(Local_2559, "rcmpaparazzo_2ig_3", "pm_incar_illsueyou", 8f, -2f, -1, 0, 0f, 0, 0, 0);
							iLocal_2920 = 1;
							iLocal_2925 = MISC::GET_GAME_TIMER();
							return;
						}
					}
					if (iLocal_2921 == 0)
					{
						if (GlobalFunc_10630(&uLocal_2632, cLocal_2907, "PAP2_POP", "PAP2_POP_4", 7, 0, 0))
						{
							TASK::TASK_PLAY_ANIM(Local_2559, "rcmpaparazzo_2ig_3", "pm_incar_imavirgin", 8f, -2f, -1, 0, 0f, 0, 0, 0);
							iLocal_2921 = 1;
							iLocal_2925 = MISC::GET_GAME_TIMER();
							return;
						}
					}
					if (GlobalFunc_4947(iLocal_2918))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2918))
						{
							if (fLocal_2290 > 80000f)
							{
								if (iLocal_2924 == 0)
								{
									if (GlobalFunc_10630(&uLocal_2632, cLocal_2907, "PAP2_POP", "PAP2_POP_7", 7, 0, 0))
									{
										TASK::TASK_PLAY_ANIM(Local_2559, "rcmpaparazzo_2ig_3", "pm_incar_itwasyoga", 8f, -2f, -1, 0, 0f, 0, 0, 0);
										iLocal_2924 = 1;
										iLocal_2925 = MISC::GET_GAME_TIMER();
										return;
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










void func_338(int iParam0)//Position - 0x2E3E5
{
	if (iLocal_2174 == 0)
	{
		func_339(0);
	}
	else
	{
		if (CAM::DOES_CAM_EXIST(uLocal_2811))
		{
			fLocal_2289 = CAM::GET_CAM_FOV(uLocal_2811);
		}
		func_14(0);
	}
	if (iParam0 != 4)
	{
		HUD::CLEAR_PRINTS();
		GlobalFunc_4935();
	}
	GlobalFunc_146(&iLocal_2808);
	GlobalFunc_146(&iLocal_2809);
	iLocal_2878 = 1;
	switch (iParam0)
	{
		case 2:
			sLocal_2850 = "PAP2_FAILBUD";
			break;
		
		case 1:
			sLocal_2850 = "PAP2_FAILBD";
			break;
		
		case 3:
			sLocal_2850 = "PAP2_FAILTHR";
			break;
		
		case 4:
			GlobalFunc_587("TRYING TO PULL OVER");
			sLocal_2850 = "PAP2_BADCAM";
			break;
		
		case 0:
			func_246();
			sLocal_2850 = "PAP2_FAILPAT";
			break;
		
		case 6:
			func_246();
			sLocal_2850 = "PAP2_FAILATT";
			break;
		
		case 5:
			sLocal_2850 = "PAP2_FAILATT";
			break;
		
		case 7:
			sLocal_2850 = "PAP2_FAILATT";
			break;
		
		case 8:
			if (iLocal_2840 < 5)
			{
				func_246();
			}
			sLocal_2850 = "PAP2_FAILKPOP";
			break;
		
		case 9:
			if (iLocal_2840 < 5)
			{
				func_246();
			}
			sLocal_2850 = "PAP2_FAILPOP";
			break;
		
		case 14:
			sLocal_2850 = "PAP2_FAILCAR";
			break;
		
		case 15:
			sLocal_2850 = "PAP2_FAILWANT";
			break;
		
		case 10:
			if (iLocal_2840 < 5)
			{
				func_246();
			}
			sLocal_2850 = "PAP2_FAILKLOV";
			break;
		
		case 11:
			if (iLocal_2840 < 5)
			{
				func_246();
			}
			sLocal_2850 = "PAP2_FAILHLOV";
			break;
		
		case 13:
			sLocal_2850 = "PAP2_FAILLEFT";
			break;
		
		case 16:
			sLocal_2850 = "PAP2_FAILONG";
			break;
		
		case 17:
			sLocal_2850 = "PAP2_FAILHIND";
			break;
		
		case 18:
			sLocal_2850 = "PAP2_FAILFR";
			break;
		
		case 19:
			break;
	}
	iLocal_2840 = 11;
	iLocal_2841 = 0;
}

void func_339(bool bParam0)//Position - 0x2E5AA
{
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		if (CAM::DOES_CAM_EXIST(uLocal_2811))
		{
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			CAM::DESTROY_CAM(uLocal_2811, 0);
		}
		if (!bParam0)
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
		}
		else
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
		}
	}
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	GRAPHICS::CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_VALUE(-1f);
	GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
}

int func_340()//Position - 0x2E603
{
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_2174 == 0)
		{
			iLocal_2175 = MISC::GET_GAME_TIMER();
			iLocal_2174 = 1;
		}
		else if (iLocal_2174 == 1)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_2175 + 3000)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_341()//Position - 0x2E644
{
	if (bLocal_2879)
	{
		if (GlobalFunc_115(iLocal_2918))
		{
			CAM::SET_USE_HI_DOF();
			switch (iLocal_2843)
			{
				case 0:
					iLocal_2822 = 0;
					iLocal_2878 = 0;
					iLocal_2882 = 1;
					iLocal_2233 = 1;
					if (GlobalFunc_4924(iLocal_2554))
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_2554);
					}
					iLocal_2192 = MISC::GET_GAME_TIMER();
					iLocal_2843 = 1;
					break;
				
				case 1:
					if (iLocal_2238 == 0)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_2632, cLocal_2907, "PAP2_ENDCUT", 9, 0, 0, 0))
							{
								iLocal_2238 = 1;
							}
						}
					}
					if (func_28(PLAYER::PLAYER_PED_ID(), iLocal_2918))
					{
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2918, 2))
						{
							TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(PLAYER::PLAYER_PED_ID(), iLocal_2918);
						}
					}
					if (MISC::GET_GAME_TIMER() > iLocal_2192 + 2000)
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2918) || VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_2918) > 101275.6f)
						{
							GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
							if (CAM::DOES_CAM_EXIST(uLocal_2811))
							{
								CAM::DESTROY_CAM(uLocal_2811, 0);
							}
							if (!CAM::DOES_CAM_EXIST(uLocal_2811))
							{
								uLocal_2811 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
							}
							CAM::SET_CAM_PARAMS(uLocal_2811, -66.1f, -515.3f, 42.3f, 1.3f, 0f, -27f, 22.5f, 0, 1, 1, 2);
							CAM::SET_CAM_NEAR_DOF(uLocal_2811, 0f);
							CAM::SET_CAM_FAR_DOF(uLocal_2811, 200f);
							CAM::SET_CAM_DOF_STRENGTH(uLocal_2811, 0.5f);
							AUDIO::STOP_SOUND(iLocal_2364);
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_02_CHASE"))
							{
								AUDIO::STOP_AUDIO_SCENE("PAPARAZZO_02_CHASE");
							}
							if (GlobalFunc_4947(iLocal_2918))
							{
								VEHICLE::SET_VEHICLE_FIXED(iLocal_2918);
							}
							if (CAM::DOES_CAM_EXIST(uLocal_2813))
							{
								CAM::DESTROY_CAM(uLocal_2813, 0);
							}
							if (!CAM::DOES_CAM_EXIST(uLocal_2813))
							{
								uLocal_2813 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
							}
							CAM::SET_CAM_PARAMS(uLocal_2813, -71.4f, -529f, 39.8f, 0.8f, 0f, -25.9f, 22.5f, 0, 1, 1, 2);
							CAM::SET_CAM_NEAR_DOF(uLocal_2813, 0f);
							CAM::SET_CAM_FAR_DOF(uLocal_2813, 200f);
							CAM::SET_CAM_DOF_STRENGTH(uLocal_2813, 0.5f);
							CAM::SET_CAM_ACTIVE(uLocal_2811, 1);
							CAM::SET_CAM_ACTIVE(uLocal_2813, 1);
							CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_2813, uLocal_2811, 7000, 3, 1);
							CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
							ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
							if (CAM::DOES_CAM_EXIST(uLocal_2811))
							{
								CAM::SHAKE_CAM(uLocal_2811, "HAND_SHAKE", 0.6f);
							}
							if (CAM::DOES_CAM_EXIST(uLocal_2813))
							{
								CAM::SHAKE_CAM(uLocal_2813, "HAND_SHAKE", 0.6f);
							}
							iLocal_2843 = 2;
						}
						else
						{
							if (CAM::DOES_CAM_EXIST(uLocal_2811))
							{
								CAM::STOP_CAM_POINTING(uLocal_2811);
							}
							if (CAM::DOES_CAM_EXIST(uLocal_2813))
							{
								CAM::DESTROY_CAM(uLocal_2813, 0);
							}
							if (CAM::DOES_CAM_EXIST(uLocal_2811))
							{
								fLocal_2289 = CAM::GET_CAM_FOV(uLocal_2811);
							}
							func_14(0);
						}
					}
					else
					{
						if (CAM::DOES_CAM_EXIST(uLocal_2811))
						{
							CAM::STOP_CAM_POINTING(uLocal_2811);
						}
						if (CAM::DOES_CAM_EXIST(uLocal_2813))
						{
							CAM::DESTROY_CAM(uLocal_2813, 0);
						}
						if (CAM::DOES_CAM_EXIST(uLocal_2811))
						{
							fLocal_2289 = CAM::GET_CAM_FOV(uLocal_2811);
						}
						func_14(0);
					}
					break;
				
				case 2:
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2918) || VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_2918) > 108426.4f)
					{
						while (!GlobalFunc_530(iLocal_2918, 3f, 1, 1056964608, 0, 1) && iLocal_2223 < 500)
						{
							SYSTEM::WAIT(0);
							iLocal_2223++;
							HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
							HUD::THEFEED_HIDE_THIS_FRAME();
						}
						if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_2918) && CUTSCENE::HAS_CUTSCENE_LOADED())
						{
							iLocal_2840 = 9;
							return;
						}
					}
					break;
				
				case 3:
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_2918, -25.8393f, -481.6992f, 39.416f, -58.2834f, -470.9109f, 39.416f, 5f, 0, 0, 0))
					{
						iLocal_2843 = 4;
					}
					break;
				
				case 4:
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_2918, -62.2864f, -491.9415f, 39.4151f, -30.931f, -504.4111f, 39.416f, 5f, 0, 0, 0))
					{
						iLocal_2843 = 5;
					}
					break;
				
				case 5:
					break;
				}
			}
	}
}


void func_343()//Position - 0x2EB94
{
	struct<6> Var0;
	
	if ((IntToFloat(Local_2518.x) > 200f && IntToFloat(Local_2518.f_1) < 100f) && IntToFloat(Local_2518.f_2) < 100f)
	{
		Var0 = { GlobalFunc_560() };
		if (MISC::ARE_STRINGS_EQUAL(&Var0, "PAP2_CHASE2"))
		{
			GlobalFunc_5105();
			iLocal_2911 = 0;
		}
		if (!GlobalFunc_111())
		{
			if (iLocal_2888 < 6)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_2183 + 8000)
				{
					if (GlobalFunc_10618(&uLocal_2632, cLocal_2907, "PAP2_BADCAM2", 7, 0, 0, 0))
					{
						iLocal_2888++;
						iLocal_2911 = 1;
						iLocal_2183 = MISC::GET_GAME_TIMER();
					}
				}
			}
			else if (iLocal_2888 >= 6)
			{
				if (GlobalFunc_10618(&uLocal_2632, cLocal_2907, "PAP2_FAILCAM", 7, 0, 0, 0))
				{
					if (iLocal_2888 >= 6)
					{
						iLocal_2878 = 1;
					}
				}
			}
		}
	}
}


void func_345(int iParam0, var uParam1, bool bParam2)//Position - 0x2EC7A
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0f;
	fVar1 = 0f;
	*uParam1 = func_348(iParam0, &fVar0, &fVar1);
	if (*uParam1)
	{
		if (bParam2)
		{
		}
		if (CAM::DOES_CAM_EXIST(uLocal_2811))
		{
			if (bParam2)
			{
				if (CAM::GET_CAM_FOV(uLocal_2811) < 13f)
				{
					func_347(1, 1);
					iLocal_2896 = (iLocal_2896 - 1);
					iLocal_2896 = (iLocal_2896 - 1);
				}
				else
				{
					func_347(1, 0);
					iLocal_2896 = (iLocal_2896 - 1);
				}
			}
			else if (CAM::GET_CAM_FOV(uLocal_2811) < 13f)
			{
				func_347(1, 1);
			}
			else
			{
				func_347(1, 0);
			}
		}
	}
	else if (GlobalFunc_4924(iParam0))
	{
		if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
		{
			func_347(0, 0);
			iLocal_2896 = (iLocal_2896 - 1);
		}
		else
		{
			func_346();
			iLocal_2896++;
		}
	}
	if (iLocal_2896 < 0)
	{
		iLocal_2896 = 0;
	}
	if (iLocal_2896 > 61)
	{
		iLocal_2896 = 61;
	}
}

void func_346()//Position - 0x2ED52
{
	Local_2518.f_1 = (Local_2518.f_1 - 5);
	Local_2518.f_2 = (Local_2518.f_2 - 5);
	Local_2518.x += 5;
	if (Local_2518.x >= 255)
	{
		Local_2518.x = 255;
	}
	if (Local_2518.f_1 <= 0)
	{
		Local_2518.f_1 = 0;
	}
	if (Local_2518.f_2 <= 0)
	{
		Local_2518.f_2 = 0;
	}
	iLocal_2200++;
}

void func_347(bool bParam0, bool bParam1)//Position - 0x2EDAD
{
	if (bParam0)
	{
		if (bParam1)
		{
			Local_2518.f_1 += 4;
			Local_2518.f_2 += 4;
			Local_2518.x = (Local_2518.x - 4);
		}
		else
		{
			Local_2518.f_1 += 3;
			Local_2518.f_2 += 3;
			Local_2518.x = (Local_2518.x - 3);
		}
		if (Local_2518.x <= 0)
		{
			Local_2518.x = 0;
		}
		if (Local_2518.f_1 >= 255)
		{
			Local_2518.f_1 = 255;
		}
		if (Local_2518.f_2 >= 123)
		{
			Local_2518.f_2 = 123;
		}
	}
	else
	{
		Local_2518.f_1 -= 3;
		Local_2518.f_2 -= 3;
		Local_2518.x = (Local_2518.x - -3);
		if (Local_2518.f_1 >= 255)
		{
			Local_2518.f_1 = 255;
		}
		if (Local_2518.f_2 >= 123)
		{
			Local_2518.f_2 = 123;
		}
		if (Local_2518.x <= 0)
		{
			Local_2518.x = 0;
		}
	}
	if (Local_2518.f_1 == 255)
	{
		iLocal_2213++;
	}
}

int func_348(int iParam0, float fParam1, float fParam2)//Position - 0x2EE95
{
	int iVar0;
	struct<3> Var1;
	
	if (GlobalFunc_4924(iParam0))
	{
		iVar0 = PED::GET_PED_BONE_INDEX(iParam0, 31086);
		if (iVar0 != -1)
		{
			Var1 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, iVar0) };
			if (func_349(Var1, 2f, 150))
			{
				GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var1, fParam1, fParam2);
				if (CAM::DOES_CAM_EXIST(uLocal_2811))
				{
					if (CAM::GET_CAM_FOV(uLocal_2811) < 10f && iLocal_2840 == 5)
					{
						if (((*fParam1 > 0.2f && *fParam1 < 0.8f) && *fParam2 > 0.2f) && *fParam2 < 0.8f)
						{
							return 1;
						}
					}
					else if (((*fParam1 > 0.35f && *fParam1 < 0.65f) && *fParam2 > 0.35f) && *fParam2 < 0.65f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_349(struct<3> Param0, float fParam3, int iParam4)//Position - 0x2EF7A
{
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Param0, 1) <= IntToFloat(iParam4))
		{
			if (CAM::IS_SPHERE_VISIBLE(Param0, fParam3))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_350()//Position - 0x2EFB8
{
	int iVar0;
	
	if (iLocal_2842 != 3)
	{
		iVar0 = iLocal_2842;
		switch (iLocal_2842)
		{
			case 0:
				if (GlobalFunc_10618(&uLocal_2632, cLocal_2907, "PAP2_CHASE1", 7, 0, 0, 0))
				{
					iLocal_2842 = iVar0 + 1;
				}
				break;
			
			case 1:
				if (!GlobalFunc_111())
				{
					if (fLocal_2290 > 11596f && fLocal_2290 < 14864f)
					{
						if (!iLocal_2266)
						{
							if (GlobalFunc_10630(&uLocal_2632, cLocal_2907, "PAP2_CHASE2", "PAP2_CHASE2_1", 7, 0, 0))
							{
								iLocal_2266 = 1;
							}
						}
					}
					if (fLocal_2290 > 15284.76f && fLocal_2290 < 21515f)
					{
						if (!iLocal_2267)
						{
							if (GlobalFunc_10630(&uLocal_2632, cLocal_2907, "PAP2_CHASE2", "PAP2_CHASE2_2", 7, 0, 0))
							{
								iLocal_2267 = 1;
							}
						}
					}
					if (fLocal_2290 > 21655.77f && fLocal_2290 < 25915f)
					{
						if (!iLocal_2268)
						{
							if (GlobalFunc_10630(&uLocal_2632, cLocal_2907, "PAP2_CHASE2", "PAP2_CHASE2_3", 7, 0, 0))
							{
								iLocal_2268 = 1;
							}
						}
					}
					if (fLocal_2290 > 27990.73f && fLocal_2290 < 28915f)
					{
						if (!iLocal_2269)
						{
							if (GlobalFunc_10630(&uLocal_2632, cLocal_2907, "PAP2_CHASE2", "PAP2_CHASE2_4", 7, 0, 0))
							{
								iLocal_2269 = 1;
							}
						}
					}
					if (fLocal_2290 > 31990.73f && fLocal_2290 < 32990f)
					{
						if (!iLocal_2270)
						{
							if (GlobalFunc_10630(&uLocal_2632, cLocal_2907, "PAP2_CHASE2", "PAP2_CHASE2_5", 7, 0, 0))
							{
								iLocal_2270 = 1;
							}
						}
					}
					if (fLocal_2290 > 34769.36f && fLocal_2290 < 38562.85f)
					{
						if (!iLocal_2271)
						{
							if (GlobalFunc_10630(&uLocal_2632, cLocal_2907, "PAP2_CHASE2", "PAP2_CHASE2_6", 7, 0, 0))
							{
								iLocal_2271 = 1;
							}
						}
					}
					if (fLocal_2290 > 45138.23f && fLocal_2290 < 46245.23f)
					{
						if (!iLocal_2272)
						{
							if (GlobalFunc_10630(&uLocal_2632, cLocal_2907, "PAP2_CHASE2", "PAP2_CHASE2_7", 7, 0, 0))
							{
								iLocal_2272 = 1;
							}
						}
					}
					if (fLocal_2290 > 49645.43f && fLocal_2290 < 51045.23f)
					{
						if (!iLocal_2273)
						{
							if (GlobalFunc_10630(&uLocal_2632, cLocal_2907, "PAP2_CHASE2", "PAP2_CHASE2_8", 7, 0, 0))
							{
								iLocal_2273 = 1;
							}
						}
					}
					if (fLocal_2290 > 53299.31f && fLocal_2290 < 59399.23f)
					{
						if (!iLocal_2274)
						{
							if (GlobalFunc_10630(&uLocal_2632, cLocal_2907, "PAP2_CHASE2", "PAP2_CHASE2_9", 7, 0, 0))
							{
								iLocal_2274 = 1;
							}
						}
					}
					if (fLocal_2290 > 64999.31f && fLocal_2290 < 66320.23f)
					{
						if (!iLocal_2275)
						{
							if (GlobalFunc_10630(&uLocal_2632, cLocal_2907, "PAP2_CHASE2", "PAP2_CHASE2_10", 7, 0, 0))
							{
								iLocal_2275 = 1;
							}
						}
					}
					if (fLocal_2290 > 67320.23f && fLocal_2290 < 69648.89f)
					{
						if (!iLocal_2276)
						{
							if (GlobalFunc_10630(&uLocal_2632, cLocal_2907, "PAP2_CHASE2", "PAP2_CHASE2_11", 7, 0, 0))
							{
								iLocal_2276 = 1;
							}
						}
					}
					if (fLocal_2290 > 71493.89f && fLocal_2290 < 73176.11f)
					{
						if (!iLocal_2277)
						{
							if (GlobalFunc_10630(&uLocal_2632, cLocal_2907, "PAP2_CHASE2", "PAP2_CHASE2_12", 7, 0, 0))
							{
								iLocal_2277 = 1;
							}
						}
					}
					if (fLocal_2290 > 75924.03f && fLocal_2290 < 77366.81f)
					{
						if (!iLocal_2278)
						{
							if (GlobalFunc_10630(&uLocal_2632, cLocal_2907, "PAP2_CHASE2", "PAP2_CHASE2_13", 7, 0, 0))
							{
								iLocal_2278 = 1;
							}
						}
					}
					if (fLocal_2290 > 79366.81f && fLocal_2290 < 81397.3f)
					{
						if (!iLocal_2279)
						{
							if (GlobalFunc_10630(&uLocal_2632, cLocal_2907, "PAP2_CHASE2", "PAP2_CHASE2_14", 7, 0, 0))
							{
								iLocal_2279 = 1;
							}
						}
					}
					if (fLocal_2290 > 83615.89f && fLocal_2290 < 85489.72f)
					{
						if (!iLocal_2280)
						{
							if (GlobalFunc_10630(&uLocal_2632, cLocal_2907, "PAP2_CHASE2", "PAP2_CHASE2_15", 7, 0, 0))
							{
								iLocal_2280 = 1;
								iLocal_2842 = 2;
							}
						}
					}
					if (fLocal_2290 > 90000f)
					{
						iLocal_2842 = 2;
					}
				}
				break;
			
			case 2:
				if (GlobalFunc_115(iLocal_2918))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2918))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_2918) >= 94365.81f)
						{
							if (GlobalFunc_10618(&uLocal_2632, cLocal_2907, "PAP2_CHASE3", 9, 0, 0, 0) || VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_2918) >= 100000f)
							{
								RECORDING::_0x293220DA1B46CEBC(10f, 3f, 1);
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
								bLocal_2879 = true;
								iLocal_2842 = iVar0 + 1;
							}
						}
					}
				}
				break;
			
			default:
				break;
			}
	}
}

void func_351()//Position - 0x2F439
{
	if (fLocal_2290 > 7244.102f && fLocal_2290 < 14124.62f)
	{
		if (!CAM::IS_SPHERE_VISIBLE(26.13f, 275.37f, 108.55f, 25f))
		{
			MISC::CLEAR_AREA_OF_PEDS(26.13f, 275.37f, 108.55f, 25f, 0);
		}
	}
	if (fLocal_2290 > 36326.59f && fLocal_2290 < 45647.02f)
	{
		if (!CAM::IS_SPHERE_VISIBLE(672.9f, 202.11f, 92.69f, 15f))
		{
			MISC::CLEAR_AREA_OF_PEDS(672.9f, 202.11f, 92.69f, 15f, 0);
		}
	}
	if (fLocal_2290 > 44000f && fLocal_2290 < 50000f)
	{
		if (!CAM::IS_SPHERE_VISIBLE(622.15f, 63.69f, 89.07f, 15f))
		{
			MISC::CLEAR_AREA_OF_PEDS(622.15f, 63.69f, 89.07f, 15f, 0);
		}
	}
	if (fLocal_2290 > 49000f && fLocal_2290 < 56000f)
	{
		if (!CAM::IS_SPHERE_VISIBLE(670.06f, 2.94f, 83.1f, 20f))
		{
			MISC::CLEAR_AREA_OF_PEDS(670.06f, 2.94f, 83.1f, 20f, 0);
		}
	}
	if (fLocal_2290 > 58000f && fLocal_2290 < 67694.29f)
	{
		if (!CAM::IS_SPHERE_VISIBLE(493.26f, -138.52f, 58.97f, 15f))
		{
			MISC::CLEAR_AREA_OF_PEDS(493.26f, -138.52f, 58.97f, 15f, 0);
		}
	}
	if (fLocal_2290 > 70936.15f && fLocal_2290 < 76888.99f)
	{
		if (!CAM::IS_SPHERE_VISIBLE(299.61f, -111.56f, 68.51f, 15f))
		{
			MISC::CLEAR_AREA_OF_PEDS(299.61f, -111.56f, 68.51f, 15f, 0);
		}
	}
}

void func_352()//Position - 0x2F61B
{
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_2314[0]))
	{
		STREAMING::REQUEST_MODEL(joaat("s_m_y_construct_01"));
		if (!STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_construct_01")))
		{
			return;
		}
		else
		{
			uLocal_2314[0] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 76.0832f, -346.6293f, 41.6255f, 247.2738f, 1, 1);
			uLocal_2314[1] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 94.7224f, -361.5001f, 41.5291f, 247.5127f, 1, 1);
			TASK::TASK_GO_TO_ENTITY(uLocal_2314[0], uLocal_2314[1], -1, 1f, 1f, 1073741824, 0);
			TASK::TASK_LOOK_AT_ENTITY(uLocal_2314[1], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			uLocal_2314[2] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 76.8379f, -378.1883f, 38.9214f, 124.7959f, 1, 1);
			TASK::TASK_START_SCENARIO_IN_PLACE(uLocal_2314[2], "WORLD_HUMAN_CLIPBOARD", 0, 0);
			uLocal_2314[3] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 74.4935f, -379.7711f, 38.9214f, 291.4748f, 1, 1);
			TASK::TASK_START_SCENARIO_IN_PLACE(uLocal_2314[0], "WORLD_HUMAN_STAND_MOBILE", 0, 0);
			uLocal_2314[4] = PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 68.7581f, -402.9993f, 38.9192f, 291.2518f, 1, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_construct_01"));
		}
	}
}



void func_355()//Position - 0x2F7D5
{
	if (iLocal_2193 == 0)
	{
		STREAMING::REQUEST_MODEL(joaat("taxi"));
		STREAMING::REQUEST_MODEL(joaat("bus"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("taxi")) && STREAMING::HAS_MODEL_LOADED(joaat("bus")))
		{
			iLocal_2193 = 1;
		}
	}
	else if (iLocal_2193 == 1)
	{
		iLocal_2325[0] = VEHICLE::CREATE_VEHICLE(joaat("taxi"), -61.57f, 263.696f, 102.3952f, 96.8514f, 1, 1);
		iLocal_2341[0] = PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_2325[0], 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2325[0]);
		TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_2341[0], iLocal_2325[0], -196.7214f, 263.6796f, 91.2333f, 8f, 0, joaat("taxi"), 262144, 5f, 5f);
		iLocal_2325[1] = VEHICLE::CREATE_VEHICLE(joaat("bus"), -129.3595f, 257.7685f, 94.998f, 87.635f, 1, 1);
		iLocal_2341[1] = PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_2325[1], 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2325[1]);
		TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_2341[1], iLocal_2325[1], -196.7214f, 263.6796f, 91.2333f, 8f, 0, joaat("bus"), 262144, 5f, 5f);
		iLocal_2325[3] = VEHICLE::CREATE_VEHICLE(joaat("taxi"), -189.8024f, 253.4723f, 91.4575f, 262.6279f, 1, 1);
		iLocal_2341[3] = PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_2325[3], 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2325[3]);
		TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_2341[3], iLocal_2325[3], 13.1838f, 255.6287f, 108.5748f, 8f, 0, joaat("taxi"), 262144, 5f, 5f);
		iLocal_2325[6] = VEHICLE::CREATE_VEHICLE(joaat("bus"), -175.1252f, 247.2091f, 91.991f, 265.0136f, 1, 1);
		iLocal_2341[6] = PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_2325[6], 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2325[6]);
		TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_2341[6], iLocal_2325[6], 7.4758f, 252.7416f, 108.411f, 8f, 0, joaat("bus"), 262144, 5f, 5f);
		iLocal_2325[7] = VEHICLE::CREATE_VEHICLE(joaat("taxi"), -98.9022f, 246.2435f, 97.7797f, 274.0935f, 1, 1);
		iLocal_2341[7] = PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_2325[7], 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2325[7]);
		TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_2341[7], iLocal_2325[7], 7.4758f, 252.7416f, 108.411f, 8f, 0, joaat("taxi"), 262144, 5f, 5f);
		iLocal_2193 = 2;
	}
	else if (iLocal_2193 == 2)
	{
		if (fLocal_2290 > 15815.71f)
		{
			GlobalFunc_2297(&(iLocal_2341[0]), 1, 0, 1);
			GlobalFunc_2297(&(iLocal_2341[1]), 1, 0, 1);
			GlobalFunc_2297(&(iLocal_2341[2]), 1, 0, 1);
			GlobalFunc_2297(&(iLocal_2341[3]), 1, 0, 1);
			GlobalFunc_2297(&(iLocal_2341[4]), 1, 0, 1);
			GlobalFunc_2297(&(iLocal_2341[5]), 1, 0, 1);
			GlobalFunc_2297(&(iLocal_2341[6]), 1, 0, 1);
			GlobalFunc_2297(&(iLocal_2341[7]), 1, 0, 1);
			GlobalFunc_131(&(iLocal_2325[0]));
			GlobalFunc_131(&(iLocal_2325[1]));
			GlobalFunc_131(&(iLocal_2325[2]));
			GlobalFunc_131(&(iLocal_2325[3]));
			GlobalFunc_131(&(iLocal_2325[4]));
			GlobalFunc_131(&(iLocal_2325[5]));
			GlobalFunc_131(&(iLocal_2325[6]));
			GlobalFunc_131(&(iLocal_2325[7]));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bus"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("taxi"));
			iLocal_2193 = 7;
		}
	}
	else if (iLocal_2193 == 3)
	{
		if (fLocal_2290 > 41719.38f)
		{
			iLocal_2325[8] = VEHICLE::CREATE_VEHICLE(joaat("bus"), 706.0617f, 35.9678f, 83.2352f, 146.9535f, 1, 1);
			iLocal_2341[8] = PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_2325[8], 1);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2325[8], 1, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2325[8]);
			iLocal_2325[9] = VEHICLE::CREATE_VEHICLE(joaat("blista"), 699.3248f, 35.4587f, 83.1331f, 147.9884f, 1, 1);
			iLocal_2341[9] = PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_2325[9], 1);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2325[9], 1, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2325[9]);
			iLocal_2193 = 4;
		}
	}
	else if (iLocal_2193 == 4)
	{
		if (fLocal_2290 > 58743.74f)
		{
			GlobalFunc_2297(&(iLocal_2341[8]), 1, 0, 1);
			GlobalFunc_2297(&(iLocal_2341[9]), 1, 0, 1);
			GlobalFunc_131(&(iLocal_2325[8]));
			GlobalFunc_131(&(iLocal_2325[9]));
			iLocal_2193 = 5;
		}
	}
	else if (iLocal_2193 == 5)
	{
		if (fLocal_2290 > 58743.74f)
		{
			iLocal_2325[10] = VEHICLE::CREATE_VEHICLE(joaat("taxi"), 511.5198f, -180.571f, 52.8702f, 10.063f, 1, 1);
			iLocal_2341[10] = PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_2325[10], 1);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2325[10], 1, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2325[10]);
			iLocal_2325[11] = VEHICLE::CREATE_VEHICLE(joaat("blista"), 516.6854f, -179.7204f, 53.0255f, 11.7232f, 1, 1);
			iLocal_2341[11] = PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_2325[11], 1);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2325[11], 1, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2325[11]);
			iLocal_2193 = 6;
		}
	}
	else if (iLocal_2193 == 6)
	{
		if (fLocal_2290 > 72153.65f)
		{
			GlobalFunc_2297(&(iLocal_2341[10]), 1, 0, 1);
			GlobalFunc_2297(&(iLocal_2341[11]), 1, 0, 1);
			GlobalFunc_131(&(iLocal_2325[10]));
			GlobalFunc_131(&(iLocal_2325[11]));
			iLocal_2193 = 7;
		}
	}
}



void func_358()//Position - 0x2FDD5
{
	switch (iLocal_2886)
	{
		case 0:
			func_410("PAP2UBA", 1, 1, 1);
			func_409();
			func_408();
			iLocal_2886++;
			break;
		
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2918, 0))
			{
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_2918, 1, "PAP2UBA", 1);
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_2918, fLocal_2897);
				func_407();
				iLocal_2886++;
			}
			break;
		
		case 2:
			func_242();
			if (iLocal_2840 == 13 || iLocal_2840 == 14)
			{
				func_381(iLocal_2918, fLocal_2897);
			}
			else if (!iLocal_2878)
			{
				if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2918, 0) && GlobalFunc_115(uLocal_2914[0])) && GlobalFunc_115(uLocal_2914[1]))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2918))
					{
						if (iLocal_2840 == 8)
						{
							func_381(iLocal_2918, fLocal_2897);
						}
						else if (iLocal_2840 == 13 || iLocal_2840 == 14)
						{
							func_381(iLocal_2918, fLocal_2897);
						}
					}
					else
					{
						iLocal_2841 = 2;
						func_359(1, 1);
					}
				}
			}
			else
			{
				if (GlobalFunc_115(uLocal_2914[0]) && GlobalFunc_4924(Local_2559))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_2914[0]))
					{
					}
				}
				if (GlobalFunc_115(uLocal_2914[1]) && GlobalFunc_4924(Local_2564))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_2914[1]))
					{
					}
				}
				if (GlobalFunc_115(uLocal_2914[2]) && GlobalFunc_4924(Local_2569))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_2914[2]))
					{
					}
				}
			}
			break;
	}
}

void func_359(bool bParam0, bool bParam1)//Position - 0x2FF60
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1730))
	{
		iLocal_98 = 0;
		GlobalFunc_2214();
		PED::REMOVE_RELATIONSHIP_GROUP(uLocal_1746);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
			PED::SET_CREATE_RANDOM_COPS(1);
		}
		if (bLocal_114)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_379());
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2213());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2212());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2211());
		if (!CAM::IS_SCREEN_FADED_OUT() && !bParam0)
		{
			func_375();
			func_374();
			func_371();
		}
		else
		{
			func_367();
			func_366();
		}
		if (bParam1)
		{
			GlobalFunc_9158(0);
		}
	}
}







void func_366()//Position - 0x3044F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 100)
	{
		iLocal_1893[iVar0] = 0;
		Local_1280[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_116[iVar0] = 0f;
		fLocal_217[iVar0] = 0f;
		fLocal_318[iVar0] = 0f;
		fLocal_419[iVar0] = 0f;
		iLocal_866[iVar0] = 0;
		fLocal_520[iVar0] = 0f;
		iLocal_967[iVar0] = 0;
		iLocal_1747[iVar0] = 0;
		iLocal_1068[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 22)
	{
		iLocal_1994[iVar0] = 0;
		iVar0++;
	}
	iLocal_1263 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iLocal_2017[iVar0] = 0;
		Local_1581[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_781[iVar0] = 0f;
		fLocal_797[iVar0] = 0f;
		fLocal_813[iVar0] = 0f;
		fLocal_829[iVar0] = 0f;
		iLocal_1247[iVar0] = 0;
		iLocal_1848[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iLocal_2059[iVar0] = 0;
		iVar0++;
	}
	iLocal_1265 = 0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		iLocal_2033[iVar0] = 0;
		Local_1627[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_625[iVar0] = 0f;
		fLocal_651[iVar0] = 0f;
		fLocal_677[iVar0] = 0f;
		fLocal_703[iVar0] = 0f;
		iLocal_1169[iVar0] = 0;
		fLocal_729[iVar0] = 0f;
		iLocal_1195[iVar0] = 0;
		iLocal_1864[iVar0] = 0;
		iLocal_1221[iVar0] = 0;
		iVar0++;
	}
	iLocal_1264 = 0;
	iLocal_1267 = 0;
	iLocal_1270 = 0;
	iLocal_1271 = 0;
	iLocal_1272 = 0;
}

void func_367()//Position - 0x305DB
{
	func_370();
	func_369();
	func_368();
}

void func_368()//Position - 0x305EF
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2033[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2033[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2033[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2033[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2033[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_2033[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_2033[iVar0]));
			}
		}
		iLocal_1195[iVar0] = 0;
		if (!bLocal_94 && !bLocal_107)
		{
			if (iLocal_1169[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1169[iVar0], &cLocal_1730);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (!iLocal_1864[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1864[iVar0]);
		}
		iVar0++;
	}
}

void func_369()//Position - 0x306E5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2017[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_2017[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_2017[iVar0]));
			}
		}
		iLocal_1247[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_1848[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1848[iVar0]);
		}
		iVar0++;
	}
	iLocal_1268 = 0;
	iLocal_1265 = 0;
}

void func_370()//Position - 0x30762
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 100)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1893[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1893[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1893[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1893[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1893[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_1893[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_1893[iVar0]));
			}
		}
		if (!bLocal_94 && !bLocal_107)
		{
			if (iLocal_866[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_866[iVar0], &cLocal_1730);
			}
		}
		iLocal_967[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 100)
	{
		if (!iLocal_1747[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1747[iVar0]);
		}
		iVar0++;
	}
	iLocal_1267 = 0;
	iLocal_1263 = 0;
}

void func_371()//Position - 0x30860
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2033[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2033[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2033[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2033[iVar0]);
				}
			}
			func_373(iLocal_2033[iVar0]);
			GlobalFunc_3006(iLocal_2033[iVar0]);
		}
		iLocal_1195[iVar0] = 0;
		iLocal_1221[iVar0] = 0;
		if (!bLocal_94 && !bLocal_107)
		{
			if (iLocal_1169[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1169[iVar0], &cLocal_1730);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (!iLocal_1864[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1864[iVar0]);
		}
		iVar0++;
	}
	iLocal_1269 = 0;
}


void func_373(int iParam0)//Position - 0x30944
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
				if (bLocal_115)
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 65536, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, 0);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 6, 0);
			}
		}
	}
}

void func_374()//Position - 0x309DD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2017[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2017[iVar0]))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_2017[iVar0], 1, 0);
			}
			GlobalFunc_3006(iLocal_2017[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_1848[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1848[iVar0]);
		}
		iVar0++;
	}
	iLocal_1268 = 0;
	iLocal_1265 = 0;
}

void func_375()//Position - 0x30A60
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 100)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1893[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1893[iVar0]))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_1893[iVar0], 1, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1893[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1893[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1893[iVar0]);
				}
			}
			func_373(iLocal_1893[iVar0]);
			GlobalFunc_3006(iLocal_1893[iVar0]);
		}
		iLocal_967[iVar0] = 0;
		iLocal_1068[iVar0] = 0;
		if (!bLocal_94 && !bLocal_107)
		{
			if (iLocal_866[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_866[iVar0], &cLocal_1730);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 100)
	{
		if (!iLocal_1747[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1747[iVar0]);
		}
		iVar0++;
	}
	iLocal_1267 = 0;
	iLocal_1263 = 0;
}




int func_379()//Position - 0x30B74
{
	if (iLocal_1890 == 0)
	{
		return joaat("a_m_y_business_01");
	}
	return iLocal_1890;
}


void func_381(int iParam0, float fParam1)//Position - 0x30BBB
{
	float fVar0;
	struct<3> Var1;
	int iVar4;
	
	fVar0 = MISC::GET_FRAME_TIME();
	fVar0 = (fVar0 * 1000f);
	bLocal_113 = false;
	if (!bLocal_95)
	{
		if (bLocal_94)
		{
			GlobalFunc_2512();
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				MISC::CLEAR_AREA(Var1, 1000f, 1, 0, 0, 0);
			}
			bLocal_95 = true;
		}
	}
	else if (!bLocal_94)
	{
		GlobalFunc_2214();
		bLocal_95 = false;
	}
	if (bLocal_94)
	{
		fParam1 = 1f;
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (!bLocal_88)
	{
		if (iLocal_83)
		{
			fLocal_850 = 0f;
		}
		else
		{
			fLocal_850 = 1f;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (GlobalFunc_5657(PLAYER::PLAYER_PED_ID(), iParam0))
					{
						iLocal_93 = 1;
					}
					else
					{
						iLocal_93 = 0;
					}
				}
				fLocal_847 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
				VEHICLE::SET_PLAYBACK_SPEED(iParam0, ((fParam1 * fLocal_848) * fLocal_850));
				if (bLocal_92)
				{
					func_404(iParam0, fLocal_847);
					func_403(iParam0, fLocal_857);
					if (fLocal_852 > 1000f)
					{
						if (iLocal_1279 == 0)
						{
							func_402(iParam0, fLocal_857);
						}
						fVar0 = ((fLocal_847 + 4000f) + (SYSTEM::TO_FLOAT(iLocal_1279) * 2000f));
						func_401(iParam0, fVar0, fLocal_851);
						iLocal_1279++;
						if (iLocal_1279 > 2)
						{
							fLocal_852 = 0f;
						}
					}
					else
					{
						iLocal_1279 = 0;
						fLocal_852 = (fLocal_852 + (MISC::GET_FRAME_TIME() * 1000f));
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
		if (fLocal_847 == 0f || CAM::IS_SCREEN_FADED_OUT())
		{
			iVar4 = 1;
		}
		if (iVar4 && !bLocal_100)
		{
			if (!iLocal_82)
			{
				func_398(iParam0, ((fParam1 * fLocal_848) * fLocal_850), 0);
				if (!iLocal_103)
				{
				}
				iLocal_103 = 0;
			}
			if (bLocal_85)
			{
				func_397(iParam0);
			}
			if (!iLocal_82)
			{
				func_384(iParam0, ((fParam1 * fLocal_848) * fLocal_850), 0);
			}
		}
		if (iLocal_90)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_2066 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					Local_1703 = { ENTITY::GET_ENTITY_COORDS(iLocal_2066, 1) };
					ENTITY::GET_ENTITY_QUATERNION(iLocal_2066, &fLocal_621, &fLocal_622, &fLocal_623, &fLocal_624);
				}
			}
			iLocal_90 = 0;
		}
		if (iLocal_89)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2066))
			{
				GlobalFunc_3006(iLocal_2067);
				iLocal_2067 = iLocal_2066;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2067, 0))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_2067, Local_1703, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_2067, fLocal_621, fLocal_622, fLocal_623, fLocal_624);
			}
			fLocal_846 = fLocal_849;
			iLocal_82 = 1;
			iLocal_89 = 0;
		}
		if (iLocal_82)
		{
			while (!func_382(&iParam0, fLocal_846))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_83 = 1;
		}
		if (iLocal_96)
		{
			iLocal_96 = 0;
		}
	}
}

int func_382(int iParam0, float fParam1)//Position - 0x30E56
{
	if (!iLocal_97)
	{
		iLocal_82 = 1;
		func_367();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
				VEHICLE::SET_VEHICLE_FIXED(*iParam0);
			}
			if (!iLocal_1266 == -1)
			{
				while (!func_383(iParam0, iLocal_1266, fParam1, 1, 0, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!bLocal_87)
				{
					iLocal_83 = 1;
					fLocal_850 = 0f;
					iLocal_1267 = 0;
					iLocal_1269 = 0;
					iLocal_1268 = 0;
					iLocal_1263 = 0;
					iLocal_1264 = 0;
					iLocal_1265 = 0;
					iLocal_1270 = 0;
					iLocal_1271 = 0;
					iLocal_1272 = 0;
				}
			}
		}
		iLocal_97 = 1;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(*iParam0, ((1f * fLocal_848) * fLocal_850));
				func_383(iParam0, iLocal_1266, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_847 = fParam1;
		iLocal_1273 = 0;
		iLocal_1276 = 0;
		fLocal_862 = 0f;
		fLocal_861 = 0f;
		func_384(*iParam0, ((1f * fLocal_848) * fLocal_850), 1);
		func_398(*iParam0, ((1f * fLocal_848) * fLocal_850), 1);
		func_397(*iParam0);
		if ((iLocal_1270 == 0 && iLocal_1271 == 0) && iLocal_1272 == 0)
		{
			iLocal_83 = 0;
			iLocal_82 = 0;
			iLocal_97 = 0;
			return 1;
		}
	}
	return 0;
}

int func_383(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x30F88
{
	float fVar0;
	
	if (iParam1 > 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_1730);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, &cLocal_1730))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 0);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_1730, 1092616192, 786603);
					}
					else
					{
						if (iParam1 != iLocal_1274 && iParam1 != iLocal_1275)
						{
							if (bParam7)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_1730, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_1730, 1 | 4, 0, 786603);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_1730, 1);
							}
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_1730, 1);
						}
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, fParam2);
						if (bParam5)
						{
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, 1);
						}
						return 1;
					}
				}
				else if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(*uParam0) == VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, &cLocal_1730))
				{
					fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(*uParam0);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*uParam0);
						VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_1730);
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
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_1730, 1092616192, 786603);
					}
					else if (iParam1 != iLocal_1274 && iParam1 != iLocal_1275)
					{
						if (bParam7)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_1730, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_1730, 1 | 4, 0, 786603);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_1730, 1);
						}
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_1730, 1);
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

void func_384(int iParam0, float fParam1, bool bParam2)//Position - 0x3116E
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
		iVar0 = iLocal_1269;
		while (iVar0 < 25)
		{
			if (iLocal_1195[iVar0] != 99)
			{
				if (iLocal_1195[iVar0] == 0)
				{
					if (iLocal_1169[iVar0] > 0)
					{
						if (!iLocal_82)
						{
							if (fLocal_847 > (fLocal_729[iVar0] - (7000f * fParam1)))
							{
								if (GlobalFunc_2222(iLocal_1864[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_1221[iVar0]), 0);
								}
								else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_1864[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_1221[iVar0]), 2);
								}
								MISC::CLEAR_BIT(&(iLocal_1221[iVar0]), 1);
								iLocal_1195[iVar0]++;
								iLocal_1271++;
							}
						}
						else
						{
							fVar12 = (fLocal_847 - fLocal_729[iVar0]);
							fVar12 = (fVar12 * fLocal_755[iVar0]);
							if (fVar12 >= 0f)
							{
								if (fVar12 < func_395(iLocal_1169[iVar0]))
								{
									if (GlobalFunc_2222(iLocal_1864[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1221[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_1864[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1221[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_1221[iVar0]), 1);
									iLocal_1195[iVar0]++;
									iLocal_1271++;
								}
								else
								{
									iLocal_1195[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_1195[iVar0] = 99;
					}
				}
				else if (iLocal_1195[iVar0] == 1)
				{
					bVar14 = false;
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1169[iVar0], &cLocal_1730);
					if (MISC::IS_BIT_SET(iLocal_1221[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2211());
						bVar14 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
					}
					else if (!bLocal_109 && ((!MISC::IS_BIT_SET(iLocal_1221[iVar0], 2) && uVar16) || (MISC::IS_BIT_SET(iLocal_1221[iVar0], 2) && uVar17)))
					{
						bVar14 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_379());
						bVar14 = STREAMING::HAS_MODEL_LOADED(func_379());
					}
					if (bVar14)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2033[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_1864[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_1864[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1169[iVar0], &cLocal_1730))
							{
								if (fLocal_847 >= (fLocal_729[iVar0] - (fLocal_860 * fParam1)))
								{
									if ((iLocal_96 || bParam2) || (!bLocal_113 && !func_394(Local_1627[iVar0 /*3*/], Var9, 5f, fLocal_858)))
									{
										if (bLocal_92)
										{
											func_393(Local_1627[iVar0 /*3*/], Var9, fLocal_851);
										}
										iLocal_2033[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_1864[iVar0], Local_1627[iVar0 /*3*/], 0, 0, 0);
										if (iLocal_1864[iVar0] == joaat("polmav"))
										{
											VEHICLE::SET_VEHICLE_LIVERY(iLocal_2033[iVar0], 0);
										}
										if (uLocal_105 && !MISC::IS_BIT_SET(iLocal_1221[iVar0], 0))
										{
											func_392(iLocal_2033[iVar0]);
										}
										if (MISC::IS_BIT_SET(iLocal_1221[iVar0], 3))
										{
											ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_2033[iVar0], 1);
										}
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_2033[iVar0], Local_1627[iVar0 /*3*/], 0, 0, 1);
										ENTITY::SET_ENTITY_QUATERNION(iLocal_2033[iVar0], fLocal_625[iVar0], fLocal_651[iVar0], fLocal_677[iVar0], fLocal_703[iVar0]);
										if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_1864[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_1864[iVar0]))
										{
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2033[iVar0]);
										}
										if (!MISC::IS_BIT_SET(iLocal_1221[iVar0], 0))
										{
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2033[iVar0], 1, 1);
											if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
											{
												VEHICLE::SET_VEHICLE_LIGHTS(iLocal_2033[iVar0], 3);
											}
										}
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_2033[iVar0], 1);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1864[iVar0]);
										iLocal_1271 = (iLocal_1271 - 1);
										iLocal_1195[iVar0]++;
										bLocal_113 = true;
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_2033[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2033[iVar0], 0))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_2033[iVar0], Local_1627[iVar0 /*3*/], 0, 0, 1);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_2033[iVar0], fLocal_625[iVar0], fLocal_651[iVar0], fLocal_677[iVar0], fLocal_703[iVar0]);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_1864[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_1864[iVar0]))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2033[iVar0]);
							}
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_2033[iVar0], 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1864[iVar0]);
							iLocal_1271 = (iLocal_1271 - 1);
							iLocal_1195[iVar0]++;
						}
					}
				}
				else if (iLocal_1195[iVar0] == 2)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1169[iVar0], &cLocal_1730);
					if (!MISC::IS_BIT_SET(iLocal_1221[iVar0], 1))
					{
						bVar14 = false;
						if (MISC::IS_BIT_SET(iLocal_1221[iVar0], 0))
						{
							STREAMING::REQUEST_MODEL(GlobalFunc_2211());
							bVar14 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
							iVar19 = 2;
						}
						else if (!bLocal_109 && ((!MISC::IS_BIT_SET(iLocal_1221[iVar0], 2) && uVar16) || (MISC::IS_BIT_SET(iLocal_1221[iVar0], 2) && uVar17)))
						{
							bVar14 = true;
							iVar19 = 1;
						}
						else
						{
							STREAMING::REQUEST_MODEL(func_379());
							bVar14 = STREAMING::HAS_MODEL_LOADED(func_379());
							iVar19 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_2033[iVar0]))
						{
							if (!bLocal_113 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2033[iVar0], -1))
							{
								if (bVar14)
								{
									if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_2033[iVar0], 1), Var9) < 10000f || bParam2) || iLocal_96)
									{
										func_390(&(iLocal_2033[iVar0]), iVar19, 1);
										MISC::SET_BIT(&(iLocal_1221[iVar0]), 1);
									}
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2033[iVar0], 0))
					{
						if (fLocal_847 >= fLocal_729[iVar0])
						{
							if (12 > iLocal_1264)
							{
								fVar12 = (fLocal_847 - fLocal_729[iVar0]);
								fVar12 = (fVar12 * fLocal_755[iVar0]);
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1169[iVar0], &cLocal_1730))
								{
									if (fVar12 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1169[iVar0], &cLocal_1730))
									{
										Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_2033[iVar0], 1) };
										Var6 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_1169[iVar0], fVar12, &cLocal_1730) };
										if (((!func_394(Var3, Var9, 5f, fLocal_858) && func_394(Var6, Var9, 5f, fLocal_858)) && !iLocal_96) && !bParam2)
										{
											if (!MISC::IS_BIT_SET(iLocal_1221[iVar0], 1))
											{
												func_390(&(iLocal_2033[iVar0]), iVar19, 1);
											}
											iLocal_1264++;
											iLocal_1195[iVar0]++;
										}
										else if (((!bLocal_113 || MISC::IS_BIT_SET(iLocal_1221[iVar0], 1)) || iLocal_96) || bParam2)
										{
											if (func_383(&(iLocal_2033[iVar0]), iLocal_1169[iVar0], fVar12, 1, 0, 0, bLocal_111, bLocal_110))
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_2033[iVar0], (fParam1 * fLocal_755[iVar0]));
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2033[iVar0], 0))
												{
													if (MISC::IS_BIT_SET(iLocal_1221[iVar0], 0))
													{
														VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2033[iVar0], 1, 1);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_2033[iVar0], 1);
														VEHICLE::SET_VEHICLE_LIGHTS(iLocal_2033[iVar0], 2);
														if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_1864[iVar0]))
														{
															AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_2033[iVar0], 1);
														}
													}
												}
												if (!MISC::IS_BIT_SET(iLocal_1221[iVar0], 1))
												{
													func_390(&(iLocal_2033[iVar0]), iVar19, 1);
												}
												iLocal_1264++;
												iLocal_1195[iVar0]++;
											}
										}
									}
									else
									{
										if (!MISC::IS_BIT_SET(iLocal_1221[iVar0], 1))
										{
											func_390(&(iLocal_2033[iVar0]), iVar19, 1);
										}
										iLocal_1264++;
										iLocal_1195[iVar0]++;
									}
								}
							}
							else
							{
								if (!MISC::IS_BIT_SET(iLocal_1221[iVar0], 1))
								{
									func_390(&(iLocal_2033[iVar0]), iVar19, 1);
								}
								iLocal_1264++;
								iLocal_1195[iVar0]++;
							}
						}
					}
					else
					{
						if (!MISC::IS_BIT_SET(iLocal_1221[iVar0], 1))
						{
							func_390(&(iLocal_2033[iVar0]), iVar19, 1);
						}
						iLocal_1264++;
						iLocal_1195[iVar0]++;
					}
				}
				else if (iLocal_1195[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2033[iVar0], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2033[iVar0]))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2033[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (bVar15)
								{
									if (((!bLocal_86 && !iLocal_83) && !bLocal_102) && (((!bLocal_111 && !bLocal_110) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_2033[iVar0])) || func_389(iLocal_2033[iVar0])))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar2))
										{
											bVar14 = false;
											if (bLocal_104)
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
												else if (MISC::ABSF((fVar13 - ENTITY::GET_ENTITY_SPEED(iLocal_2033[iVar0]))) > 15f)
												{
													bVar14 = true;
												}
												else if (!GlobalFunc_5655(iLocal_2033[iVar0], iVar2, 45f))
												{
													bVar14 = true;
												}
												else if (GlobalFunc_5654(iVar2, iLocal_2033[iVar0], 0))
												{
													bVar14 = true;
												}
											}
											if (bVar14)
											{
												func_385(iLocal_2033[iVar0]);
												iLocal_1195[iVar0]++;
											}
										}
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_2033[iVar0], (fParam1 * fLocal_755[iVar0]));
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2033[iVar0]);
							}
						}
						else
						{
							iLocal_1195[iVar0]++;
						}
					}
					else
					{
						iLocal_1195[iVar0]++;
					}
				}
				else if (iLocal_1195[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2033[iVar0], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2033[iVar0]))
						{
							iLocal_1195[iVar0]++;
						}
						else
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2033[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_2033[iVar0], (fParam1 * fLocal_755[iVar0]));
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2033[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1169[iVar0], &cLocal_1730))
							{
								if (fLocal_847 > (fLocal_729[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1169[iVar0], &cLocal_1730)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2033[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2033[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1195[iVar0]++;
					}
				}
				else if (iLocal_1195[iVar0] == 5)
				{
					if (!iLocal_2033[iVar0] == iLocal_2068)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2033[iVar0], 0))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2033[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								iVar20 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, 242628503);
								if (iVar20 == 7)
								{
									fVar13 = ENTITY::GET_ENTITY_SPEED(iLocal_2033[iVar0]);
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
						if (!bLocal_94 && !bLocal_107)
						{
							if (iLocal_1169[iVar0] > 0)
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1169[iVar0], &cLocal_1730);
							}
						}
						if (!bLocal_84)
						{
							if (!bLocal_112)
							{
								GlobalFunc_3006(iLocal_2033[iVar0]);
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_2033[iVar0]))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_2033[iVar0]));
						}
					}
					iLocal_1264 = (iLocal_1264 - 1);
					iLocal_1195[iVar0] = 99;
				}
				if (!bVar18)
				{
					iLocal_1269 = iVar0;
					bVar18 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_371();
	}
}

void func_385(int iParam0)//Position - 0x31D6C
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_373(iParam0);
		VEHICLE::SET_PLAYBACK_TO_USE_AI(iParam0, 786603);
	}
}




int func_389(int iParam0)//Position - 0x31ECF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bLocal_108)
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
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iParam0))
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

int func_390(var uParam0, int iParam1, bool bParam2)//Position - 0x31F2C
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, -1))
		{
			if (iParam1 == 2)
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, GlobalFunc_2211(), -1, 0, 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, uLocal_1746);
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
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 4, func_379(), -1, 0, 0);
				if (bLocal_114)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_379());
				}
			}
			if (bParam2)
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar0, 1);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iVar0, 0);
				PED::SET_PED_CONFIG_FLAG(iVar0, 32, 0);
			}
			if (bLocal_115)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(*uParam0, 1);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 1);
			GlobalFunc_2221(iVar0);
			bLocal_113 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}


void func_392(var uParam0)//Position - 0x32038
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iLocal_1891 >= -1 && iLocal_1892 >= -1)
	{
		while (iVar0 == iLocal_1891 || iVar0 == iLocal_1892)
		{
			iVar0++;
		}
	}
	else if (iLocal_1891 >= -1)
	{
		if (iVar0 == iLocal_1891)
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

void func_393(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x321B1
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (!bLocal_95)
	{
		if (!func_394(Param0, Param3, fParam6, 200f))
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

int func_394(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7)//Position - 0x32221
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!bLocal_95)
		{
			if (!iLocal_82)
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

float func_395(int iParam0)//Position - 0x32268
{
	var uVar0;
	
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, &cLocal_1730);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, &cLocal_1730))
	{
		SYSTEM::WAIT(0);
	}
	uVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam0, &cLocal_1730);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, &cLocal_1730);
	return uVar0;
}


void func_397(int iParam0)//Position - 0x3231E
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
		iVar0 = iLocal_1268;
		while (iVar0 < 15)
		{
			switch (iLocal_1247[iVar0])
			{
				case 0:
					if (!iLocal_1848[iVar0] == 0)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Local_1581[iVar0 /*3*/], fLocal_845, fLocal_845, fLocal_845, 0, 1, 0))
						{
							iLocal_1270++;
							iLocal_1247[iVar0]++;
						}
					}
					else
					{
						iLocal_1247[iVar0] = 99;
					}
					break;
				
				case 1:
					if (6 > iLocal_1265)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2017[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_1848[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_1848[iVar0]))
							{
								if ((iLocal_82 || iLocal_96) || (!bLocal_113 && !func_394(Local_1581[iVar0 /*3*/], Var1, 5f, fLocal_858)))
								{
									if (bLocal_92)
									{
										func_393(Local_1581[iVar0 /*3*/], Var1, fLocal_851);
									}
									iLocal_2017[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_1848[iVar0], Local_1581[iVar0 /*3*/], 0, 0, 0);
									if (iLocal_1848[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_2017[iVar0], 0);
									}
									ENTITY::SET_ENTITY_QUATERNION(iLocal_2017[iVar0], fLocal_781[iVar0], fLocal_797[iVar0], fLocal_813[iVar0], fLocal_829[iVar0]);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1848[iVar0]);
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_2017[iVar0], GlobalFunc_2212()))
									{
										VEHICLE::SET_VEHICLE_SIREN(iLocal_2017[iVar0], 1);
										if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_1848[iVar0]))
										{
											AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_2017[iVar0], 1);
										}
									}
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_2017[iVar0], GlobalFunc_2213()))
									{
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_2017[iVar0], 0, 0);
									}
									ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_2017[iVar0], 1);
									iLocal_1270 = (iLocal_1270 - 1);
									iLocal_1265++;
									iLocal_1247[iVar0]++;
									bLocal_113 = true;
								}
							}
						}
						else
						{
							iLocal_1270 = (iLocal_1270 - 1);
							iLocal_1265++;
							iLocal_1247[iVar0]++;
						}
					}
					break;
				
				case 2:
					if (!bVar7)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2017[iVar0], 0))
						{
							Var4 = { ENTITY::GET_ENTITY_COORDS(iLocal_2017[iVar0], 1) };
						}
						if (fLocal_859 == 0f || SYSTEM::VDIST2(Var1, Var4) < (fLocal_859 * fLocal_859))
						{
							if (!GlobalFunc_5654(iLocal_2017[iVar0], iParam0, 0))
							{
								if (!bLocal_84)
								{
									GlobalFunc_3006(iLocal_2017[iVar0]);
								}
								else
								{
									VEHICLE::DELETE_VEHICLE(&(iLocal_2017[iVar0]));
								}
								iLocal_1265 = (iLocal_1265 - 1);
								iLocal_1247[iVar0] = 99;
								bVar7 = true;
							}
						}
					}
					break;
			}
			if (iLocal_1247[iVar0] != 99)
			{
				if (!bVar8)
				{
					iLocal_1268 = iVar0;
					bVar8 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_374();
	}
}

void func_398(int iParam0, float fParam1, int iParam2)//Position - 0x32614
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
			fLocal_847 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
		}
		iVar22 = -1;
		bVar23 = false;
		bVar24 = false;
		iVar0 = iLocal_1267;
		while (iVar0 < 100 && !bVar23)
		{
			if (iLocal_967[iVar0] != 99)
			{
				if (iLocal_967[iVar0] == 0)
				{
					if (iLocal_866[iVar0] > 0 && iLocal_1747[iVar0] != 0)
					{
						if (!iLocal_82)
						{
							if (fLocal_847 < (fLocal_520[iVar0] + 20000f))
							{
								if (fLocal_847 >= (fLocal_520[iVar0] - (7000f * fParam1)))
								{
									if (GlobalFunc_2222(iLocal_1747[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1068[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_1747[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1068[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_1068[iVar0]), 1);
									iLocal_1272++;
									iLocal_967[iVar0]++;
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
								func_400(iVar0, 1090519040);
							}
						}
						else
						{
							fVar15 = (fLocal_847 - fLocal_520[iVar0]);
							if (fVar15 >= 0f)
							{
								if (fVar15 < func_395(iLocal_866[iVar0]))
								{
									if (GlobalFunc_2222(iLocal_1747[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1068[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_1747[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1068[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_1068[iVar0]), 1);
									iLocal_1272++;
									iLocal_967[iVar0]++;
								}
								else
								{
									func_400(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_400(iVar0, 1090519040);
					}
				}
				else if (iLocal_967[iVar0] == 1)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_866[iVar0], &cLocal_1730);
					bVar17 = false;
					if (MISC::IS_BIT_SET(iLocal_1068[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2211());
						if (STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211()))
						{
							bVar17 = true;
						}
					}
					else if (!bLocal_109 && ((!MISC::IS_BIT_SET(iLocal_1068[iVar0], 2) && uVar19) || (MISC::IS_BIT_SET(iLocal_1068[iVar0], 2) && uVar20)))
					{
						bVar17 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_379());
						bVar17 = STREAMING::HAS_MODEL_LOADED(func_379());
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1893[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_1747[iVar0]);
						if ((STREAMING::HAS_MODEL_LOADED(iLocal_1747[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_866[iVar0], &cLocal_1730)) && bVar17)
						{
							if (fLocal_847 >= (fLocal_520[iVar0] - (fLocal_860 * fParam1)))
							{
								if ((iLocal_96 || iParam2) || (!bLocal_113 && !func_394(Local_1280[iVar0 /*3*/], Var12, 5f, fLocal_858)))
								{
									if (bLocal_92)
									{
										func_393(Local_1280[iVar0 /*3*/], Var12, fLocal_851);
									}
									iLocal_1893[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_1747[iVar0], Local_1280[iVar0 /*3*/], 0, 0, 0);
									if (iLocal_1747[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_1893[iVar0], 0);
									}
									if (uLocal_105 && !MISC::IS_BIT_SET(iLocal_1068[iVar0], 0))
									{
										func_392(iLocal_1893[iVar0]);
									}
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_1893[iVar0], Local_1280[iVar0 /*3*/], 0, 0, 1);
									ENTITY::SET_ENTITY_QUATERNION(iLocal_1893[iVar0], fLocal_116[iVar0], fLocal_217[iVar0], fLocal_318[iVar0], fLocal_419[iVar0]);
									if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_1747[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_1747[iVar0]))
									{
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1893[iVar0]);
									}
									if (MISC::IS_BIT_SET(iLocal_1068[iVar0], 3))
									{
										ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_1893[iVar0], 1);
									}
									if (!MISC::IS_BIT_SET(iLocal_1068[iVar0], 0))
									{
										VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1893[iVar0], 1, 1);
										if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
										{
											VEHICLE::SET_VEHICLE_LIGHTS(iLocal_1893[iVar0], 3);
										}
									}
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_1893[iVar0], 1);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_1893[iVar0], 1);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1747[iVar0]);
									iLocal_1272 = (iLocal_1272 - 1);
									iLocal_967[iVar0]++;
									bLocal_113 = true;
								}
								else if (fLocal_847 > fLocal_520[iVar0])
								{
									iLocal_1272 = (iLocal_1272 - 1);
									func_400(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_967[iVar0] == 2)
				{
					bVar17 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_1278 || iLocal_1278 == 0)) || iLocal_96) || iParam2)
					{
						if (!MISC::IS_BIT_SET(iLocal_1068[iVar0], 1))
						{
							if (MISC::IS_BIT_SET(iLocal_1068[iVar0], 0))
							{
								STREAMING::REQUEST_MODEL(GlobalFunc_2211());
								bVar17 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
								iVar21 = 2;
							}
							else if (!bLocal_109 && ((!MISC::IS_BIT_SET(iLocal_1068[iVar0], 2) && uVar19) || (MISC::IS_BIT_SET(iLocal_1068[iVar0], 2) && uVar20)))
							{
								bVar17 = true;
								iVar21 = 1;
							}
							else
							{
								STREAMING::REQUEST_MODEL(func_379());
								bVar17 = STREAMING::HAS_MODEL_LOADED(func_379());
								iVar21 = 0;
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_1893[iVar0]))
							{
								if (!bLocal_113 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_1893[iVar0], -1))
								{
									if (bVar17)
									{
										if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_1893[iVar0], 1), Var12) < 10000f || iParam2) || iLocal_96)
										{
											func_390(&(iLocal_1893[iVar0]), iVar21, 0);
											MISC::SET_BIT(&(iLocal_1068[iVar0]), 1);
										}
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1893[iVar0], 0))
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_866[iVar0], &cLocal_1730);
							if (fLocal_847 >= fLocal_520[iVar0])
							{
								if (22 > iLocal_1263)
								{
									fVar15 = (fLocal_847 - fLocal_520[iVar0]);
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_866[iVar0], &cLocal_1730))
									{
										if (fVar15 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_866[iVar0], &cLocal_1730))
										{
											Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_1893[iVar0], 1) };
											Var9 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_866[iVar0], fVar15, &cLocal_1730) };
											if (!func_394(Var6, Var12, 5f, fLocal_858) && func_394(Var9, Var12, 5f, fLocal_858))
											{
												if (!MISC::IS_BIT_SET(iLocal_1068[iVar0], 1))
												{
													func_390(&(iLocal_1893[iVar0]), iVar21, 0);
												}
												func_400(iVar0, 1090519040);
											}
											else if (((!bLocal_113 || MISC::IS_BIT_SET(iLocal_1068[iVar0], 1)) || iLocal_96) || iParam2)
											{
												if (func_383(&(iLocal_1893[iVar0]), iLocal_866[iVar0], fVar15, 1, 0, 0, 1, bLocal_110))
												{
													if (!MISC::IS_BIT_SET(iLocal_1068[iVar0], 1))
													{
														func_390(&(iLocal_1893[iVar0]), iVar21, 0);
													}
													ENTITY::SET_ENTITY_COLLISION(iLocal_1893[iVar0], 1, 0);
													VEHICLE::SET_PLAYBACK_SPEED(iLocal_1893[iVar0], fParam1);
													iLocal_1263++;
													iLocal_967[iVar0]++;
												}
											}
										}
										else
										{
											if (!MISC::IS_BIT_SET(iLocal_1068[iVar0], 1))
											{
												func_390(&(iLocal_1893[iVar0]), iVar21, 0);
											}
											func_400(iVar0, 1090519040);
										}
									}
									else if (fVar15 > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_866[iVar0], &cLocal_1730))
									{
										if (!MISC::IS_BIT_SET(iLocal_1068[iVar0], 1))
										{
											func_390(&(iLocal_1893[iVar0]), iVar21, 0);
										}
										func_400(iVar0, 1090519040);
									}
								}
								else
								{
									if (!MISC::IS_BIT_SET(iLocal_1068[iVar0], 1))
									{
										func_390(&(iLocal_1893[iVar0]), iVar21, 0);
									}
									func_400(iVar0, 1090519040);
								}
							}
							else if (iLocal_93 && !bLocal_101)
							{
								if (!MISC::IS_BIT_SET(iLocal_1068[iVar0], 1))
								{
									func_390(&(iLocal_1893[iVar0]), iVar21, 0);
								}
								func_400(iVar0, 1090519040);
							}
						}
						else
						{
							if (!MISC::IS_BIT_SET(iLocal_1068[iVar0], 1))
							{
								func_390(&(iLocal_1893[iVar0]), iVar21, 0);
							}
							func_400(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_1278 = iVar0;
					}
				}
				else if (iLocal_967[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1893[iVar0], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1893[iVar0]))
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1893[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								if (bVar18)
								{
									bVar24 = false;
									if (!bLocal_91)
									{
										if ((!bLocal_86 && !iLocal_83) && func_389(iLocal_1893[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_1277 || iLocal_1277 == 0))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iVar5))
												{
													bVar17 = false;
													if (!GlobalFunc_5656(iLocal_1893[iVar0], iVar5) || GlobalFunc_5654(iVar5, iLocal_1893[iVar0], 0))
													{
														bVar24 = true;
													}
												}
												iLocal_1277 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_106 && !MISC::IS_BIT_SET(iLocal_1068[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_1277 || iLocal_1277 == 0))
										{
											Var25 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iLocal_1893[iVar0], 1)) };
											if (Var25.f_1 < 0f)
											{
												if (MISC::ABSF(Var25.f_1) > MISC::ABSF(Var25.x))
												{
													bVar24 = true;
												}
											}
											iVar2++;
											iLocal_1277 = iVar0;
										}
									}
									if (bVar24)
									{
										func_385(iLocal_1893[iVar0]);
										iLocal_967[iVar0]++;
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_1893[iVar0], fParam1);
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1893[iVar0]);
							}
						}
						else
						{
							iLocal_967[iVar0]++;
						}
					}
					else
					{
						iLocal_967[iVar0]++;
					}
				}
				else if (iLocal_967[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1893[iVar0], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1893[iVar0]))
						{
							iLocal_967[iVar0]++;
						}
						else
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1893[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_1893[iVar0], fParam1);
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1893[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_866[iVar0], &cLocal_1730))
							{
								if (fLocal_847 > (fLocal_520[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_866[iVar0], &cLocal_1730)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1893[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1893[iVar0]);
							}
						}
					}
					else
					{
						iLocal_967[iVar0]++;
					}
				}
				else if (iLocal_967[iVar0] == 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_1893[iVar0]))
					{
						fVar16 = ENTITY::GET_ENTITY_SPEED(iLocal_1893[iVar0]);
					}
					iLocal_1263 = (iLocal_1263 - 1);
					func_400(iVar0, fVar16);
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
			iLocal_1267 = iVar22;
		}
		if (iVar2 < 3)
		{
			iLocal_1277 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_1278 = 0;
		}
	}
	else
	{
		func_375();
	}
}


void func_400(int iParam0, float fParam1)//Position - 0x331DE
{
	int iVar0;
	
	if (!iLocal_1747[iParam0] == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1747[iParam0]);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_1893[iParam0]))
	{
		ENTITY::SET_ENTITY_COLLISION(iLocal_1893[iParam0], 1, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_1893[iParam0], 0);
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1893[iParam0], -1);
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
			TASK::TASK_VEHICLE_MISSION(iVar0, iLocal_1893[iParam0], 0, 1, fParam1, 786603, 5f, 5f, 1);
			PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
			if (bLocal_115)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, 0);
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar0, fParam1);
		}
	}
	if (!bLocal_84)
	{
		if (!bLocal_112)
		{
			GlobalFunc_2221(iVar0);
			GlobalFunc_3006(iLocal_1893[iParam0]);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::DELETE_PED(&iVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1893[iParam0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_1893[iParam0]));
		}
	}
	if (!bLocal_94 && !bLocal_107)
	{
		if (iLocal_866[iParam0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_866[iParam0], &cLocal_1730);
		}
	}
	iLocal_967[iParam0] = 99;
}

void func_401(int iParam0, float fParam1, float fParam2)//Position - 0x33337
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
			func_393(Var1, Var10, fVar13);
		}
	}
}

void func_402(int iParam0, float fParam1)//Position - 0x333BA
{
	if (!bLocal_95)
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

void func_403(int iParam0, float fParam1)//Position - 0x33407
{
	if (!bLocal_95)
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

void func_404(int iParam0, float fParam1)//Position - 0x33454
{
	var uVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
	{
		fVar1 = (fLocal_861 + 2000f);
		fVar2 = (fLocal_862 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			uVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (fVar1 <= VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(uVar0))
			{
				if (iLocal_1273 == 0)
				{
					Local_1718 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fLocal_861) };
					iLocal_1273++;
				}
				else if (iLocal_1273 == 1)
				{
					Local_1721 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fVar1) };
					iLocal_1273++;
				}
				else if (!bLocal_113)
				{
					if (Local_1718.x > Local_1721.x)
					{
						fVar3 = Local_1718.x;
						Local_1718.x = Local_1721.x;
						Local_1721.x = fVar3;
					}
					if (Local_1718.f_1 > Local_1721.f_1)
					{
						fVar3 = Local_1718.f_1;
						Local_1718.f_1 = Local_1721.f_1;
						Local_1721.f_1 = fVar3;
					}
					if (Local_1718.f_2 > Local_1721.f_2)
					{
						fVar3 = Local_1718.f_2;
						Local_1718.f_2 = Local_1721.f_2;
						Local_1721.f_2 = fVar3;
					}
					Local_1718 = { Local_1718 - Vector(fLocal_865, fLocal_865, fLocal_865) };
					Local_1721 = { Local_1721 + Vector(fLocal_865, fLocal_865, fLocal_865) };
					PATHFIND::SET_ROADS_IN_AREA(Local_1718, Local_1721, 0, 0);
					fLocal_861 = fVar1;
					iLocal_1273 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			uVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (iLocal_1276 == 0)
			{
				Local_1724 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fLocal_862) };
				iLocal_1276++;
			}
			else if (iLocal_1276 == 1)
			{
				Local_1727 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fVar2) };
				iLocal_1276++;
			}
			else if (!bLocal_113 && !bVar4)
			{
				if (Local_1724.x > Local_1727.x)
				{
					fVar3 = Local_1724.x;
					Local_1724.x = Local_1727.x;
					Local_1727.x = fVar3;
				}
				if (Local_1724.f_1 > Local_1727.f_1)
				{
					fVar3 = Local_1724.f_1;
					Local_1724.f_1 = Local_1727.f_1;
					Local_1727.f_1 = fVar3;
				}
				if (Local_1724.f_2 > Local_1727.f_2)
				{
					fVar3 = Local_1724.f_2;
					Local_1724.f_2 = Local_1727.f_2;
					Local_1727.f_2 = fVar3;
				}
				Local_1724 = { Local_1724 - Vector(fLocal_865, fLocal_865, fLocal_865) };
				Local_1727 = { Local_1727 + Vector(fLocal_865, fLocal_865, fLocal_865) };
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_1724, Local_1727, 1);
				fLocal_862 = fVar2;
				iLocal_1276 = 0;
			}
		}
	}
}



int func_407()//Position - 0x3378C
{
	if (GlobalFunc_115(iLocal_2918))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2918))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_2918, 0);
			if (CAM::DOES_CAM_EXIST(uLocal_2813))
			{
				CAM::DESTROY_CAM(uLocal_2813, 0);
			}
			func_248(0);
			iLocal_2822 = 0;
			if (CAM::DOES_CAM_EXIST(uLocal_2811))
			{
				CAM::SET_CAM_COORD(uLocal_2811, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2918, Local_2473));
				CAM::POINT_CAM_AT_COORD(uLocal_2811, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2918, 0f, -5f, 0.6f));
				CAM::SET_CAM_FOV(uLocal_2811, 45f);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			}
			if (GlobalFunc_4947(uLocal_2914[0]))
			{
				VEHICLE::LOWER_CONVERTIBLE_ROOF(uLocal_2914[0], 1);
			}
			func_14(0);
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
			bLocal_2880 = true;
			return 1;
			if (bLocal_2816)
			{
			}
		}
	}
	WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
	PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 272, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 273, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 270, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 271, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 281, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 281, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
	func_350();
	return 0;
}

void func_408()//Position - 0x338C0
{
	Local_1627[0 /*3*/] = { -61.5962f, 337.5525f, 111.1293f };
	fLocal_625[0] = -0.0046f;
	fLocal_651[0] = -0.0506f;
	fLocal_677[0] = 0.98f;
	fLocal_703[0] = 0.1923f;
	iLocal_1169[0] = 101;
	fLocal_729[0] = 59.4f;
	fLocal_755[0] = 1f;
	iLocal_1864[0] = joaat("rapidgt2");
	iLocal_2033[0] = uLocal_2914[0];
	Local_1627[1 /*3*/] = { -62.3594f, 322.6118f, 109.7076f };
	fLocal_625[1] = -0.0241f;
	fLocal_651[1] = -0.0644f;
	fLocal_677[1] = 0.9804f;
	fLocal_703[1] = 0.1845f;
	iLocal_1169[1] = 102;
	fLocal_729[1] = 1961.6f;
	fLocal_755[1] = 1f;
	iLocal_1864[1] = joaat("landstalker");
	iLocal_2033[1] = uLocal_2914[1];
	Local_1627[2 /*3*/] = { -68.0978f, 309.2655f, 107.7569f };
	fLocal_625[2] = -0.0147f;
	fLocal_651[2] = -0.07f;
	fLocal_677[2] = 0.9755f;
	fLocal_703[2] = 0.2082f;
	iLocal_1169[2] = 103;
	fLocal_729[2] = 5416.196f;
	fLocal_755[2] = 1f;
	iLocal_1864[2] = joaat("landstalker");
	iLocal_2033[2] = uLocal_2914[2];
	Local_1627[3 /*3*/] = { 654.7409f, 37.7855f, 85.6549f };
	fLocal_625[3] = 0.0329f;
	fLocal_651[3] = 0.0239f;
	fLocal_677[3] = 0.5549f;
	fLocal_703[3] = 0.8309f;
	iLocal_1169[3] = 125;
	fLocal_729[3] = 44719.99f;
	fLocal_755[3] = 1f;
	iLocal_1864[3] = joaat("taxi");
	Local_1627[4 /*3*/] = { 435.1409f, -57.207f, 74.137f };
	fLocal_625[4] = -0.0062f;
	fLocal_651[4] = -0.0807f;
	fLocal_677[4] = 0.956f;
	fLocal_703[4] = 0.2818f;
	iLocal_1169[4] = 150;
	fLocal_729[4] = 60000f;
	fLocal_755[4] = 1f;
	iLocal_1864[4] = joaat("taxi");
	Local_1627[5 /*3*/] = { 371.1497f, -244.7208f, 53.7699f };
	fLocal_625[5] = 0.0223f;
	fLocal_651[5] = -0.0044f;
	fLocal_677[5] = -0.1527f;
	fLocal_703[5] = 0.988f;
	iLocal_1169[5] = 151;
	fLocal_729[5] = 60000f;
	fLocal_755[5] = 1f;
	iLocal_1864[5] = joaat("fq2");
	Local_1627[6 /*3*/] = { 443.9521f, -32.4616f, 78.8341f };
	fLocal_625[6] = -0.0301f;
	fLocal_651[6] = -0.0745f;
	fLocal_677[6] = 0.9603f;
	fLocal_703[6] = 0.2672f;
	iLocal_1169[6] = 152;
	fLocal_729[6] = 60000f;
	fLocal_755[6] = 1f;
	iLocal_1864[6] = joaat("mule");
	Local_1627[7 /*3*/] = { 540.6125f, -93.1815f, 65.6238f };
	fLocal_625[7] = 0.1322f;
	fLocal_651[7] = -0.1121f;
	fLocal_677[7] = 0.8787f;
	fLocal_703[7] = 0.4447f;
	iLocal_1169[7] = 120;
	fLocal_729[7] = 60610.3f;
	fLocal_755[7] = 1f;
	iLocal_1864[7] = joaat("faggio2");
	Local_1627[8 /*3*/] = { 243.451f, -202.3356f, 53.8657f };
	fLocal_625[8] = 0.0356f;
	fLocal_651[8] = 0.0122f;
	fLocal_677[8] = -0.1815f;
	fLocal_703[8] = 0.9827f;
	iLocal_1169[8] = 130;
	fLocal_729[8] = 70000f;
	fLocal_755[8] = 1f;
	iLocal_1864[8] = joaat("surfer2");
}

void func_409()//Position - 0x33C9C
{
	Local_1280[0 /*3*/] = { 25.6387f, 266.4447f, 109.3633f };
	fLocal_116[0] = -0.0002f;
	fLocal_217[0] = -0.0004f;
	fLocal_318[0] = 0.6374f;
	fLocal_419[0] = 0.7705f;
	iLocal_866[0] = 2;
	fLocal_520[0] = 3498f;
	iLocal_1747[0] = joaat("felon");
	Local_1280[1 /*3*/] = { 53.3845f, 259.2507f, 109.0939f };
	fLocal_116[1] = 0.0028f;
	fLocal_217[1] = 0.0014f;
	fLocal_318[1] = 0.5719f;
	fLocal_419[1] = 0.8203f;
	iLocal_866[1] = 4;
	fLocal_520[1] = 5346f;
	iLocal_1747[1] = 0;
	Local_1280[2 /*3*/] = { 54.699f, 249.2125f, 109.5105f };
	fLocal_116[2] = -0.0053f;
	fLocal_217[2] = -0.0038f;
	fLocal_318[2] = 0.5759f;
	fLocal_419[2] = 0.8175f;
	iLocal_866[2] = 5;
	fLocal_520[2] = 5478f;
	iLocal_1747[2] = joaat("rocoto");
	Local_1280[3 /*3*/] = { 61.6959f, 252.0383f, 109.0729f };
	fLocal_116[3] = 0.0073f;
	fLocal_217[3] = 0.0053f;
	fLocal_318[3] = 0.577f;
	fLocal_419[3] = 0.8167f;
	iLocal_866[3] = 6;
	fLocal_520[3] = 5742f;
	iLocal_1747[3] = joaat("infernus");
	Local_1280[4 /*3*/] = { 69.9301f, 249.1113f, 108.8189f };
	fLocal_116[4] = 0.0138f;
	fLocal_217[4] = 0.0098f;
	fLocal_318[4] = 0.576f;
	fLocal_419[4] = 0.8173f;
	iLocal_866[4] = 7;
	fLocal_520[4] = 6336f;
	iLocal_1747[4] = 0;
	Local_1280[5 /*3*/] = { 69.6693f, 243.7877f, 108.6399f };
	fLocal_116[5] = 0.0136f;
	fLocal_217[5] = 0.01f;
	fLocal_318[5] = 0.5746f;
	fLocal_419[5] = 0.8183f;
	iLocal_866[5] = 8;
	fLocal_520[5] = 6402f;
	iLocal_1747[5] = joaat("taxi");
	Local_1280[6 /*3*/] = { 237.0279f, 346.2748f, 105.4462f };
	fLocal_116[6] = 0.002f;
	fLocal_217[6] = -0.0029f;
	fLocal_318[6] = 0.8184f;
	fLocal_419[6] = -0.5746f;
	iLocal_866[6] = 9;
	fLocal_520[6] = 16434f;
	iLocal_1747[6] = joaat("rocoto");
	Local_1280[7 /*3*/] = { 347.382f, 320.5341f, 103.8621f };
	fLocal_116[7] = 0.0011f;
	fLocal_217[7] = 0.0012f;
	fLocal_318[7] = 0.6188f;
	fLocal_419[7] = 0.7855f;
	iLocal_866[7] = 10;
	fLocal_520[7] = 20328f;
	iLocal_1747[7] = joaat("bus");
	Local_1280[8 /*3*/] = { 424.6772f, 305.5897f, 102.4288f };
	fLocal_116[8] = -0.0055f;
	fLocal_217[8] = 0.023f;
	fLocal_318[8] = 0.4f;
	fLocal_419[8] = 0.9162f;
	iLocal_866[8] = 11;
	fLocal_520[8] = 23958f;
	iLocal_1747[8] = joaat("penumbra");
	Local_1280[9 /*3*/] = { 423.819f, 290.4329f, 102.8873f };
	fLocal_116[9] = -0.0257f;
	fLocal_217[9] = -0.0017f;
	fLocal_318[9] = 0.805f;
	fLocal_419[9] = -0.5927f;
	iLocal_866[9] = 12;
	fLocal_520[9] = 24024f;
	iLocal_1747[9] = joaat("rocoto");
	Local_1280[10 /*3*/] = { 418.2715f, 279.2705f, 102.5196f };
	fLocal_116[10] = 0.0001f;
	fLocal_217[10] = 0f;
	fLocal_318[10] = -0.1905f;
	fLocal_419[10] = 0.9817f;
	iLocal_866[10] = 13;
	fLocal_520[10] = 24486f;
	iLocal_1747[10] = joaat("futo");
	iLocal_1893[10] = iLocal_2324;
	Local_1280[11 /*3*/] = { 436.6275f, 293.4052f, 102.9222f };
	fLocal_116[11] = 0.0057f;
	fLocal_217[11] = 0.0037f;
	fLocal_318[11] = 0.5851f;
	fLocal_419[11] = 0.8109f;
	iLocal_866[11] = 14;
	fLocal_520[11] = 24552f;
	iLocal_1747[11] = joaat("rocoto");
	Local_1280[12 /*3*/] = { 568.5327f, 245.2966f, 102.6008f };
	fLocal_116[12] = -0.0038f;
	fLocal_217[12] = 0.0103f;
	fLocal_318[12] = 0.6916f;
	fLocal_419[12] = 0.7222f;
	iLocal_866[12] = 15;
	fLocal_520[12] = 30294f;
	iLocal_1747[12] = joaat("futo");
	Local_1280[13 /*3*/] = { 563.3254f, 226.8358f, 102.5454f };
	fLocal_116[13] = 0.0315f;
	fLocal_217[13] = -0.0056f;
	fLocal_318[13] = -0.1653f;
	fLocal_419[13] = 0.9857f;
	iLocal_866[13] = 16;
	fLocal_520[13] = 30360f;
	iLocal_1747[13] = joaat("taxi");
	Local_1280[14 /*3*/] = { 585.7031f, 250.9805f, 102.9546f };
	fLocal_116[14] = 0.0005f;
	fLocal_217[14] = -0.0193f;
	fLocal_318[14] = 0.3598f;
	fLocal_419[14] = 0.9328f;
	iLocal_866[14] = 17;
	fLocal_520[14] = 30888f;
	iLocal_1747[14] = joaat("rocoto");
	Local_1280[15 /*3*/] = { 641.6404f, 224.289f, 97.99f };
	fLocal_116[15] = 0.0522f;
	fLocal_217[15] = 0.038f;
	fLocal_318[15] = 0.6146f;
	fLocal_419[15] = 0.7862f;
	iLocal_866[15] = 18;
	fLocal_520[15] = 33264f;
	iLocal_1747[15] = joaat("penumbra");
	Local_1280[16 /*3*/] = { 651.6318f, 221.3143f, 96.7827f };
	fLocal_116[16] = 0.0519f;
	fLocal_217[16] = 0.0379f;
	fLocal_318[16] = 0.5888f;
	fLocal_419[16] = 0.8057f;
	iLocal_866[16] = 19;
	fLocal_520[16] = 33726f;
	iLocal_1747[16] = joaat("taxi");
	Local_1280[17 /*3*/] = { 686.7967f, 203.5349f, 92.1762f };
	fLocal_116[17] = 0.0316f;
	fLocal_217[17] = -0.0462f;
	fLocal_318[17] = 0.8192f;
	fLocal_419[17] = -0.5708f;
	iLocal_866[17] = 20;
	fLocal_520[17] = 35244f;
	iLocal_1747[17] = joaat("bus");
	Local_1280[18 /*3*/] = { 558.3951f, 44.7597f, 94.2669f };
	fLocal_116[18] = -0.0174f;
	fLocal_217[18] = -0.0487f;
	fLocal_318[18] = 0.7204f;
	fLocal_419[18] = -0.6916f;
	iLocal_866[18] = 110;
	fLocal_520[18] = 44000f;
	iLocal_1747[18] = joaat("bus");
	Local_1280[19 /*3*/] = { 648.9051f, 39.3727f, 86.1631f };
	fLocal_116[19] = 0.0453f;
	fLocal_217[19] = 0.0236f;
	fLocal_318[19] = 0.5662f;
	fLocal_419[19] = 0.8227f;
	iLocal_866[19] = 111;
	fLocal_520[19] = 44000f;
	iLocal_1747[19] = 0;
	Local_1280[20 /*3*/] = { 657.6167f, 23.9452f, 84.8269f };
	fLocal_116[20] = 0.0184f;
	fLocal_217[20] = -0.0273f;
	fLocal_318[20] = 0.8442f;
	fLocal_419[20] = -0.5349f;
	iLocal_866[20] = 21;
	fLocal_520[20] = 46596f;
	iLocal_1747[20] = joaat("stratum");
	Local_1280[21 /*3*/] = { 702.3966f, 16.4575f, 83.7715f };
	fLocal_116[21] = 0.0095f;
	fLocal_217[21] = 0.0053f;
	fLocal_318[21] = 0.4853f;
	fLocal_419[21] = 0.8743f;
	iLocal_866[21] = 22;
	fLocal_520[21] = 50292f;
	iLocal_1747[21] = 0;
	Local_1280[22 /*3*/] = { 685.0597f, -109.3147f, 74.1404f };
	fLocal_116[22] = -0.0189f;
	fLocal_217[22] = 0.0245f;
	fLocal_318[22] = 0.4845f;
	fLocal_419[22] = 0.8742f;
	iLocal_866[22] = 114;
	fLocal_520[22] = 50610.3f;
	iLocal_1747[22] = joaat("rocoto");
	Local_1280[23 /*3*/] = { 702.9434f, 9.8203f, 83.7822f };
	fLocal_116[23] = 0.0098f;
	fLocal_217[23] = 0.0046f;
	fLocal_318[23] = 0.4938f;
	fLocal_419[23] = 0.8695f;
	iLocal_866[23] = 23;
	fLocal_520[23] = 51612f;
	iLocal_1747[23] = 0;
	Local_1280[24 /*3*/] = { 611.2632f, -68.2602f, 72.7379f };
	fLocal_116[24] = 0.0478f;
	fLocal_217[24] = -0.0234f;
	fLocal_318[24] = -0.5413f;
	fLocal_419[24] = 0.8391f;
	iLocal_866[24] = 24;
	fLocal_520[24] = 55506f;
	iLocal_1747[24] = joaat("felon");
	Local_1280[25 /*3*/] = { 558.8278f, -89.5658f, 67.1954f };
	fLocal_116[25] = 0.0763f;
	fLocal_217[25] = 0.0202f;
	fLocal_318[25] = -0.57f;
	fLocal_419[25] = 0.8179f;
	iLocal_866[25] = 112;
	fLocal_520[25] = 55610.3f;
	iLocal_1747[25] = joaat("taxi");
	Local_1280[26 /*3*/] = { 525.6269f, -124.3243f, 60.7692f };
	fLocal_116[26] = 0.0799f;
	fLocal_217[26] = 0.0173f;
	fLocal_318[26] = -0.2839f;
	fLocal_419[26] = 0.9554f;
	iLocal_866[26] = 113;
	fLocal_520[26] = 55610.3f;
	iLocal_1747[26] = joaat("bus");
	Local_1280[27 /*3*/] = { 546.617f, -83.762f, 67.0976f };
	fLocal_116[27] = 0.1902f;
	fLocal_217[27] = -0.1282f;
	fLocal_318[27] = 0.8789f;
	fLocal_419[27] = 0.4182f;
	iLocal_866[27] = 25;
	fLocal_520[27] = 58542f;
	iLocal_1747[27] = joaat("taxi");
	Local_1280[28 /*3*/] = { 512.8046f, -125.0119f, 60.1147f };
	fLocal_116[28] = 0.0016f;
	fLocal_217[28] = -0.0689f;
	fLocal_318[28] = 0.9713f;
	fLocal_419[28] = 0.2277f;
	iLocal_866[28] = 26;
	fLocal_520[28] = 60588f;
	iLocal_1747[28] = 0;
	Local_1280[29 /*3*/] = { 321.9392f, -109.2699f, 67.8426f };
	fLocal_116[29] = 0.0084f;
	fLocal_217[29] = -0.0199f;
	fLocal_318[29] = 0.8069f;
	fLocal_419[29] = -0.5903f;
	iLocal_866[29] = 27;
	fLocal_520[29] = 69234f;
	iLocal_1747[29] = joaat("carbonizzare");
	Local_1280[30 /*3*/] = { 278.0286f, -73.8002f, 69.533f };
	fLocal_116[30] = 0.0043f;
	fLocal_217[30] = 0.0017f;
	fLocal_318[30] = 0.9776f;
	fLocal_419[30] = 0.2105f;
	iLocal_866[30] = 28;
	fLocal_520[30] = 71346f;
	iLocal_1747[30] = joaat("penumbra");
	Local_1280[31 /*3*/] = { 276.3335f, -111.556f, 69.3416f };
	fLocal_116[31] = 0.023f;
	fLocal_217[31] = -0.0041f;
	fLocal_318[31] = -0.1834f;
	fLocal_419[31] = 0.9828f;
	iLocal_866[31] = 29;
	fLocal_520[31] = 71676f;
	iLocal_1747[31] = joaat("futo");
	Local_1280[32 /*3*/] = { 254.9427f, -76.6293f, 69.4554f };
	fLocal_116[32] = -0.003f;
	fLocal_217[32] = 0.0042f;
	fLocal_318[32] = 0.8139f;
	fLocal_419[32] = -0.581f;
	iLocal_866[32] = 30;
	fLocal_520[32] = 72204f;
	iLocal_1747[32] = joaat("penumbra");
	Local_1280[33 /*3*/] = { 236.3161f, -186.5169f, 54.7485f };
	fLocal_116[33] = -0.0102f;
	fLocal_217[33] = -0.0531f;
	fLocal_318[33] = 0.9836f;
	fLocal_419[33] = 0.172f;
	iLocal_866[33] = 31;
	fLocal_520[33] = 76230f;
	iLocal_1747[33] = joaat("futo");
	Local_1280[34 /*3*/] = { 229.294f, -204.6162f, 53.4777f };
	fLocal_116[34] = 0.0007f;
	fLocal_217[34] = -0.0002f;
	fLocal_318[34] = 0.9141f;
	fLocal_419[34] = 0.4055f;
	iLocal_866[34] = 32;
	fLocal_520[34] = 76230f;
	iLocal_1747[34] = joaat("penumbra");
	Local_1280[35 /*3*/] = { 234.9658f, -223.4058f, 53.6191f };
	fLocal_116[35] = 0.0056f;
	fLocal_217[35] = 0.0012f;
	fLocal_318[35] = 0.5698f;
	fLocal_419[35] = 0.8218f;
	iLocal_866[35] = 34;
	fLocal_520[35] = 77352f;
	iLocal_1747[35] = joaat("taxi");
	Local_1280[36 /*3*/] = { 221.0836f, -222.9086f, 54.1788f };
	fLocal_116[36] = -0.0031f;
	fLocal_217[36] = 0.0061f;
	fLocal_318[36] = 0.8252f;
	fLocal_419[36] = -0.5647f;
	iLocal_866[36] = 35;
	fLocal_520[36] = 77682f;
	iLocal_1747[36] = joaat("mule");
	Local_1280[37 /*3*/] = { 220.7465f, -228.1144f, 53.4656f };
	fLocal_116[37] = -0.0019f;
	fLocal_217[37] = 0.003f;
	fLocal_318[37] = 0.8178f;
	fLocal_419[37] = -0.5754f;
	iLocal_866[37] = 36;
	fLocal_520[37] = 79134f;
	iLocal_1747[37] = joaat("penumbra");
	Local_1280[38 /*3*/] = { 203.5953f, -342.6908f, 43.634f };
	fLocal_116[38] = 0.002f;
	fLocal_217[38] = 0.0006f;
	fLocal_318[38] = 0.5637f;
	fLocal_419[38] = 0.826f;
	iLocal_866[38] = 37;
	fLocal_520[38] = 82632f;
	iLocal_1747[38] = joaat("taxi");
	Local_1280[39 /*3*/] = { 176.7323f, -365.8312f, 43.0022f };
	fLocal_116[39] = 0.0245f;
	fLocal_217[39] = -0.0051f;
	fLocal_318[39] = -0.202f;
	fLocal_419[39] = 0.9791f;
	iLocal_866[39] = 38;
	fLocal_520[39] = 84018f;
	iLocal_1747[39] = joaat("dubsta");
	Local_1280[40 /*3*/] = { 168.5778f, -336.4375f, 43.5013f };
	fLocal_116[40] = -0.0022f;
	fLocal_217[40] = 0.0015f;
	fLocal_318[40] = 0.8002f;
	fLocal_419[40] = -0.5997f;
	iLocal_866[40] = 39;
	fLocal_520[40] = 84084f;
	iLocal_1747[40] = joaat("penumbra");
	Local_1280[41 /*3*/] = { 4.1466f, -372.4675f, 39.302f };
	fLocal_116[41] = 0.0469f;
	fLocal_217[41] = 0.0063f;
	fLocal_318[41] = -0.188f;
	fLocal_419[41] = 0.981f;
	iLocal_866[41] = 40;
	fLocal_520[41] = 93060f;
	iLocal_1747[41] = joaat("taxi");
	Local_1280[42 /*3*/] = { 14.6536f, -491.7607f, 33.9844f };
	fLocal_116[42] = -0.001f;
	fLocal_217[42] = -0.0049f;
	fLocal_318[42] = 0.7513f;
	fLocal_419[42] = 0.6599f;
	iLocal_866[42] = 41;
	fLocal_520[42] = 96624f;
	iLocal_1747[42] = joaat("bus");
	Local_1280[43 /*3*/] = { -10.2838f, -420.3103f, 39.1597f };
	fLocal_116[43] = -0.0141f;
	fLocal_217[43] = 0.0241f;
	fLocal_318[43] = -0.144f;
	fLocal_419[43] = 0.9892f;
	iLocal_866[43] = 42;
	fLocal_520[43] = 97350f;
	iLocal_1747[43] = joaat("tornado3");
	Local_1280[44 /*3*/] = { -14.9425f, -417.0332f, 39.2908f };
	fLocal_116[44] = -0.0119f;
	fLocal_217[44] = 0.0229f;
	fLocal_318[44] = -0.1418f;
	fLocal_419[44] = 0.9896f;
	iLocal_866[44] = 43;
	fLocal_520[44] = 97746f;
	iLocal_1747[44] = joaat("tornado3");
}

void func_410(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x34E47
{
	struct<3> Var0;
	
	StringCopy(&cLocal_1730, sParam0, 64);
	bLocal_92 = true;
	iLocal_97 = 0;
	iLocal_1263 = 0;
	iLocal_1264 = 0;
	iLocal_1265 = 0;
	iLocal_1266 = iParam1;
	iLocal_1267 = 0;
	iLocal_1268 = 0;
	iLocal_1269 = 0;
	iLocal_1273 = 0;
	iLocal_1276 = 0;
	iLocal_1274 = -1;
	iLocal_1275 = -1;
	iLocal_1277 = 0;
	iLocal_1278 = 0;
	fLocal_861 = 0f;
	fLocal_862 = 0f;
	fLocal_847 = 0f;
	iLocal_98 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		Local_1706.x = (Var0.x - 100f);
		Local_1706.f_1 = (Var0.f_1 - 100f);
		Local_1706.f_2 = (Var0.f_2 - 100f);
		Local_1709.x = (Var0.x + 100f);
		Local_1709.f_1 = (Var0.f_1 + 100f);
		Local_1709.f_2 = (Var0.f_2 + 100f);
		PATHFIND::SET_ROADS_IN_AREA(Local_1706, Local_1709, 0, 0);
		if (bParam2)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(Var0, 500f, 0, 0, 0, 0, 0);
		}
	}
	PED::ADD_RELATIONSHIP_GROUP("rgh_traffic", &uLocal_1746);
	GlobalFunc_2512();
	if (bParam3)
	{
		GlobalFunc_9158(1);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 0);
		PED::SET_CREATE_RANDOM_COPS(0);
	}
	func_366();
}

void func_411()//Position - 0x34F69
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_02_CHASE"))
	{
		if (GlobalFunc_4947(uLocal_2914[0]))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_2914[0], "PAPARAZZO_02_POPPY_CARS", 0);
		}
		if (GlobalFunc_4947(uLocal_2914[1]))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_2914[1], "PAPARAZZO_02_CHASE_JUSTIN_CAR", 0);
		}
		if (GlobalFunc_4947(uLocal_2914[2]))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_2914[2], "PAPARAZZO_02_CHASE_SECURITY_CAR", 0);
		}
		AUDIO::START_AUDIO_SCENE("PAPARAZZO_02_CHASE");
	}
}

void func_412()//Position - 0x34FDD
{
	GlobalFunc_69(&(Local_2574[0 /*5*/]));
	GlobalFunc_69(&(Local_2574[1 /*5*/]));
	GlobalFunc_69(&(uLocal_2307[0]));
	GlobalFunc_69(&(uLocal_2307[1]));
	GlobalFunc_69(&(uLocal_2307[2]));
	GlobalFunc_69(&(uLocal_2307[3]));
	GlobalFunc_69(&(uLocal_2307[4]));
	GlobalFunc_69(&(uLocal_2307[5]));
}

void func_413(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x35035
{
	int iVar0;
	int iVar1;
	int iVar2;
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
			iVar2 = GlobalFunc_5110(iVar1);
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
			STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, iVar2, Global_89999, iParam0);
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
		GlobalFunc_10953(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_89999)
	{
	}
}














































void func_459()//Position - 0x396BC
{
	int iVar0;
	
	if (bLocal_2236 == 1)
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		HUD::THEFEED_HIDE_THIS_FRAME();
		GlobalFunc_7629();
	}
	WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
	PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 157, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 158, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 159, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 160, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 161, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 162, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 163, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 164, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 165, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 14, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 15, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 263, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 264, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
	if (!CAM::IS_SPHERE_VISIBLE(-75.608f, 300.6798f, 105.5206f, 30f))
	{
		MISC::CLEAR_AREA_OF_PEDS(-75.608f, 300.6798f, 105.5206f, 30f, 0);
	}
	OBJECT::_DOOR_CONTROL(joaat("prop_ss1_14_garage_door"), -62.22f, 352.75f, 113.01f, 1, 0, 0, 0);
	GlobalFunc_661(Local_2559, &uLocal_2409, -1, 0, 1, 0, -1082130432, 0);
	GlobalFunc_661(Local_2564, &uLocal_2417, -1, 0, 0, 0, -1082130432, 0);
	GlobalFunc_661(Local_2569, &uLocal_2425, -1, 0, 0, 0, -1082130432, 0);
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_2554, 0);
	GlobalFunc_7629();
	if (iLocal_2257 == 0)
	{
		if ((PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()) || PAD::IS_CONTROL_PRESSED(0, 30)) || PAD::IS_CONTROL_PRESSED(0, 31))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			iLocal_2257 = 1;
		}
	}
	if (bLocal_2236 == 0)
	{
		func_251();
	}
	if (bLocal_2236 == 0)
	{
		PAD::ENABLE_CONTROL_ACTION(0, 44, 1);
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
	}
	else
	{
		PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		}
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_2364))
	{
		AUDIO::STOP_SOUND(iLocal_2364);
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_2839, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()), uLocal_2839);
	MISC::CLEAR_AREA_OF_PEDS(-47.8788f, 353.6657f, 112.0601f, 20f, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2304))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_2304))
		{
			ENTITY::DETACH_ENTITY(iLocal_2304, 1, 1);
		}
	}
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 223, 1);
	if (GlobalFunc_115(iLocal_2918))
	{
		VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_2918);
	}
	switch (iLocal_2841)
	{
		case 0:
			if (func_241(7, bLocal_2853))
			{
				if (GlobalFunc_4924(iLocal_2554))
				{
					if (func_478(iLocal_2554, Local_2899))
					{
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_2554))
						{
							PED::SET_PED_TO_LOAD_COVER(iLocal_2554, 0);
							PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, "DEFAULT_ACTION");
							func_413(2, "GET TO THE CAR", 0, 0, 0, 1);
							VEHICLE::REQUEST_VEHICLE_ASSET(joaat("fq2"), 3);
							ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), 0);
							HUD::DISPLAY_HUD(1);
							HUD::DISPLAY_RADAR(1);
							PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(iLocal_2554);
							GlobalFunc_2295(&iLocal_2302, 0);
							GlobalFunc_2295(&iLocal_2303, 0);
							GlobalFunc_2295(&iLocal_2304, 0);
							GlobalFunc_139();
							TASK::TASK_CLEAR_LOOK_AT(iLocal_2554);
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_2554, -1, 0, 2);
							iLocal_2198 = MISC::GET_GAME_TIMER();
							iLocal_2204 = 0;
							iLocal_2246 = 0;
							iLocal_2225 = 0;
							iLocal_2226 = 0;
							bLocal_2247 = false;
							iLocal_2200 = 0;
							iLocal_2205 = 0;
							iLocal_2203 = 0;
							MISC::CLEAR_AREA_OF_VEHICLES(-64.1056f, 325.3524f, 109.3568f, 100f, 0, 0, 0, 0, 0);
							PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
							RECORDING::_0x293220DA1B46CEBC(8f, 5f, 0);
							iLocal_2841 = 1;
						}
					}
				}
			}
			break;
		
		case 1:
			if (GlobalFunc_4947(uLocal_2914[0]))
			{
				if (!ENTITY::IS_ENTITY_AT_ENTITY(Local_2559, uLocal_2914[0], 5f, 5f, 2.5f, 0, 1, 0))
				{
					if (iLocal_2225 == 0)
					{
						if (GlobalFunc_4924(Local_2559))
						{
							if (GlobalFunc_155(Local_2559, PLAYER::PLAYER_PED_ID(), 2f))
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_2172) || PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_2173))
								{
									TASK::CLEAR_PED_TASKS(Local_2559);
								}
								ENTITY::SET_ENTITY_COLLISION(Local_2559, 1, 0);
							}
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_2172))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_2172) >= 0.99f)
								{
									iLocal_2225 = 1;
								}
							}
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_2173))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_2173) >= 0.99f)
								{
									iLocal_2225 = 1;
								}
							}
							if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_2172) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_2173))
							{
								TASK::TASK_COMBAT_PED(Local_2564, PLAYER::PLAYER_PED_ID(), 0, 16);
								iLocal_2226 = 1;
								iLocal_2225 = 1;
							}
						}
					}
					else if (!iLocal_2246)
					{
						if (GlobalFunc_4924(Local_2559))
						{
							if (!GlobalFunc_155(Local_2559, PLAYER::PLAYER_PED_ID(), 20f))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_2559, 1227113341) != 1)
								{
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_2559, "RANDOM@CAR_THIEF@waiting_ig_4", "waiting", 3))
									{
										TASK::STOP_ANIM_TASK(Local_2559, "RANDOM@CAR_THIEF@waiting_ig_4", "waiting", -4f);
									}
									TASK::TASK_GO_TO_ENTITY(Local_2559, PLAYER::PLAYER_PED_ID(), -1, 8f, 1073741824, 1073741824, 0);
								}
							}
							else
							{
								if (!PED::IS_PED_HEADTRACKING_PED(Local_2559, PLAYER::PLAYER_PED_ID()))
								{
									TASK::TASK_LOOK_AT_ENTITY(Local_2559, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								}
								if (!PED::IS_PED_FACING_PED(Local_2559, PLAYER::PLAYER_PED_ID(), 30f))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_2559, PLAYER::PLAYER_PED_ID(), 0);
								}
								else
								{
									func_476();
								}
							}
						}
					}
				}
			}
			if (iLocal_2226 == 0)
			{
				if (GlobalFunc_4924(Local_2564))
				{
					if (GlobalFunc_155(Local_2564, PLAYER::PLAYER_PED_ID(), 3f))
					{
						TASK::TASK_COMBAT_PED(Local_2564, PLAYER::PLAYER_PED_ID(), 0, 16);
						iLocal_2226 = 1;
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_2172))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_2172) >= 0.97f)
						{
							TASK::TASK_COMBAT_PED(Local_2564, PLAYER::PLAYER_PED_ID(), 0, 16);
							iLocal_2226 = 1;
						}
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_2173))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_2173) >= 0.97f)
						{
							TASK::TASK_COMBAT_PED(Local_2564, PLAYER::PLAYER_PED_ID(), 0, 16);
							iLocal_2226 = 1;
						}
					}
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_2172) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_2173))
					{
						TASK::TASK_COMBAT_PED(Local_2564, PLAYER::PLAYER_PED_ID(), 0, 16);
						iLocal_2226 = 1;
					}
				}
			}
			if (bLocal_2877)
			{
				func_475();
			}
			else
			{
				if (bLocal_2247 == 0)
				{
					func_474();
				}
				func_473();
				if (iLocal_2226 == 1)
				{
					func_472();
				}
				func_471();
				func_470();
				if (func_469())
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_2918, 4);
					iLocal_2875 = 0;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2305))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(iLocal_2305))
						{
							ENTITY::DETACH_ENTITY(iLocal_2305, 1, 1);
						}
						OBJECT::DELETE_OBJECT(&iLocal_2305);
					}
					iLocal_2841 = 2;
				}
				func_465();
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -50.61517f, 329.1848f, 111.5079f, -65.10432f, 297.9984f, 115.6734f, 11.35f, 0, 1, 0))
				{
					if (iLocal_2231 == 0)
					{
						if (GlobalFunc_10618(&uLocal_2632, cLocal_2907, "PAP2_ESCAPE", 7, 0, 0, 0))
						{
							iLocal_2231 = 1;
						}
					}
					else if (iLocal_2232 == 0)
					{
						if (GlobalFunc_10618(&uLocal_2632, cLocal_2907, "PAP2_ESCAPEA", 7, 0, 0, 0))
						{
							iLocal_2232 = 1;
							bLocal_2860 = true;
						}
					}
				}
				if (iLocal_2859 == 0)
				{
				}
				if (iLocal_2205 < 2)
				{
					func_464();
				}
				if ((!PED::IS_PED_RAGDOLL(iLocal_2554) && !TASK::IS_PED_GETTING_UP(iLocal_2554)) && !bLocal_2247)
				{
					if (iLocal_2205 > 2)
					{
						func_462();
					}
					if (iLocal_2205 < 2)
					{
						func_460();
					}
				}
			}
			if (bLocal_2247)
			{
				if (!GlobalFunc_111())
				{
					func_338(16);
				}
			}
			if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
			{
				func_338(18);
			}
			break;
		
		case 2:
			if (ENTITY::IS_ENTITY_DEAD(Local_2569))
			{
				bLocal_2263 = true;
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_2569, PLAYER::PLAYER_PED_ID(), 0))
			{
				bLocal_2263 = true;
			}
			func_327(0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			TASK::REMOVE_WAYPOINT_RECORDING(&Local_2899);
			STREAMING::REMOVE_ANIM_DICT("rcmpaparazzo_2");
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				GlobalFunc_130(&(Local_2521[iVar0 /*8*/]));
				iVar0++;
			}
			break;
		
		case 3:
			GlobalFunc_4935();
			HUD::CLEAR_PRINTS();
			func_242();
			TASK::TASK_CLEAR_LOOK_AT(iLocal_2554);
			if (func_313(14, -81.45494f, 296.8076f, 107.0281f, -49.93427f))
			{
				if (CAM::DOES_CAM_EXIST(uLocal_2811))
				{
					if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
					{
						iLocal_2180 = MISC::GET_GAME_TIMER();
					}
				}
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			RECORDING::_0x293220DA1B46CEBC(10f, 3f, 1);
			iLocal_2841 = 2;
			break;
	}
}

void func_460()//Position - 0x39EE7
{
	if (iLocal_2895 < 3)
	{
		if (!GlobalFunc_111())
		{
			if (GlobalFunc_156(iLocal_2554, iLocal_2918, 1) >= 15f)
			{
				if (GlobalFunc_10618(&uLocal_2632, cLocal_2907, "PAP2_BSH", 7, 0, 0, 0))
				{
					iLocal_2895++;
				}
			}
		}
	}
}


void func_462()//Position - 0x39F8C
{
	int iVar0;
	int iVar1;
	struct<6> Var2;
	
	if (!GlobalFunc_663("PAP2_00", 0, 0) && !GlobalFunc_663("PAP2_06", 0, 0))
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = 1;
	}
	if (iLocal_2866 == 0 && GlobalFunc_156(iLocal_2554, iLocal_2918, 1) < 4f)
	{
		iVar0 = 1;
	}
	if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2918, 1))
	{
		iVar1 = MISC::GET_GAME_TIMER();
		if (GlobalFunc_4924(iLocal_2554))
		{
			if (bLocal_2236 == 0)
			{
				if (iVar1 > iLocal_2893 + 6000)
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -50.61517f, 329.1848f, 111.5079f, -65.10432f, 297.9984f, 115.6734f, 11.35f, 0, 1, 0))
					{
						if (GlobalFunc_156(iLocal_2554, iLocal_2918, 1) < 15f)
						{
							if (GlobalFunc_111())
							{
								Var2 = { GlobalFunc_560() };
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var2))
								{
									if (MISC::ARE_STRINGS_EQUAL(&Var2, "PAP2_ESCCHAT"))
									{
										GlobalFunc_5105();
									}
								}
							}
							if (GlobalFunc_156(iLocal_2554, PLAYER::PLAYER_PED_ID(), 1) <= 60f)
							{
								if (!GlobalFunc_111())
								{
									if (GlobalFunc_10618(&uLocal_2632, cLocal_2907, "PAP2_ESCCAR", 7, iVar0, 0, 0))
									{
										iLocal_2893 = MISC::GET_GAME_TIMER();
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


void func_464()//Position - 0x3A0D6
{
	if (iLocal_2205 < 3)
	{
		if (bLocal_2860)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_2184 + 5000 && MISC::GET_GAME_TIMER() > iLocal_2185 + 5000)
			{
				if (iLocal_2910 < 3)
				{
					if (!GlobalFunc_111() && !GlobalFunc_663("PAP2_00", 0, 0))
					{
						if (GlobalFunc_10618(&uLocal_2632, cLocal_2907, "PAP2_ESCCHAT", 6, 0, 0, 0))
						{
							iLocal_2910++;
							iLocal_2185 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
	}
}

void func_465()//Position - 0x3A14E
{
	if (!iLocal_2875)
	{
		if (func_28(iLocal_2554, iLocal_2918) && !func_28(PLAYER::PLAYER_PED_ID(), iLocal_2918))
		{
			GlobalFunc_146(&iLocal_2809);
			if (!HUD::DOES_BLIP_EXIST(iLocal_2809))
			{
				iLocal_2808 = GlobalFunc_5743(iLocal_2918, 1, 7);
			}
			HUD::SET_BLIP_AS_FRIENDLY(iLocal_2808, 1);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_2554, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			if (!iLocal_2866)
			{
				GlobalFunc_164("PAP2_00", 7500, 0);
				iLocal_2866 = 1;
			}
			iLocal_2875 = 1;
			iLocal_2187 = MISC::GET_GAME_TIMER();
		}
	}
	else if (!GlobalFunc_663("PAP2_00", 0, 0))
	{
		if (MISC::GET_GAME_TIMER() > iLocal_2187 + 12000)
		{
			if (!GlobalFunc_111())
			{
				if ((func_28(iLocal_2554, iLocal_2918) && bLocal_2236 == 0) && !func_28(PLAYER::PLAYER_PED_ID(), iLocal_2918))
				{
					func_466();
				}
			}
		}
	}
}

void func_466()//Position - 0x3A225
{
	if (!iLocal_2867)
	{
		if (GlobalFunc_156(iLocal_2554, PLAYER::PLAYER_PED_ID(), 1) <= 40f && bLocal_2236 == 0)
		{
			if (!GlobalFunc_111())
			{
				if (GlobalFunc_10630(&uLocal_2632, cLocal_2907, "PAP2_GETCAR", "PAP2_GETCAR_2", 7, 0, 0))
				{
					iLocal_2867 = 1;
					if (GlobalFunc_4924(iLocal_2554))
					{
						TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_2554, iLocal_2918, 150f, 262144);
						bLocal_2247 = true;
					}
				}
			}
		}
		else if (!GlobalFunc_111())
		{
			if (bLocal_2236 == 0)
			{
				iLocal_2867 = 1;
				if (GlobalFunc_4924(iLocal_2554))
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_2554, iLocal_2918, 150f, 262144);
					bLocal_2247 = true;
				}
			}
		}
	}
}



int func_469()//Position - 0x3A31F
{
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2918, 0) && PED::IS_PED_IN_VEHICLE(iLocal_2554, iLocal_2918, 0))
	{
		return 1;
	}
	return 0;
}

void func_470()//Position - 0x3A34B
{
	if (!func_28(iLocal_2554, iLocal_2918))
	{
		if (GlobalFunc_4924(iLocal_2554) && GlobalFunc_115(iLocal_2918))
		{
			if (iLocal_2205 != 3)
			{
				PED::SET_PED_CAN_RAGDOLL(iLocal_2554, 0);
			}
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_2554))
			{
				if (iLocal_2205 == 0)
				{
					if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_2554) > 31)
					{
						iLocal_2206 = MISC::GET_GAME_TIMER();
						iLocal_2205 = 1;
					}
				}
				else if (iLocal_2205 == 1)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_2206 + 2000 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_2554, -67.82763f, 304.8669f, 104.543f, -76.68293f, 308.6061f, 115.5622f, 14.75f, 0, 1, 0))
					{
						AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 1);
						iLocal_2205 = 2;
					}
				}
				else if (iLocal_2205 == 2)
				{
					if (!PED::IS_PED_RAGDOLL(iLocal_2554))
					{
						iLocal_2205 = 3;
					}
				}
				else if (iLocal_2205 == 3)
				{
					if (TASK::IS_PED_GETTING_UP(iLocal_2554) || ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_2554))
					{
						if (iLocal_2249 == 0)
						{
							iLocal_2249 = 1;
						}
					}
				}
				if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_2554, iLocal_2918, 20f, 20f, 2f, 0, 1, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_2554, -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_2554, -1794415470) != 0)
					{
						if (!PED::IS_PED_RAGDOLL(iLocal_2554) && !TASK::IS_PED_GETTING_UP(iLocal_2554))
						{
							TASK::WAYPOINT_PLAYBACK_PAUSE(iLocal_2554, 0, 0);
							TASK::TASK_ENTER_VEHICLE(iLocal_2554, iLocal_2918, 20000, -1, 2f, 1, 0);
							AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 0);
							PED::SET_PED_CAN_RAGDOLL(iLocal_2554, 1);
							iLocal_2205 = 3;
						}
					}
				}
				else if (iLocal_2205 == 0)
				{
					if ((TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_2554) == 29 && !GlobalFunc_155(iLocal_2554, PLAYER::PLAYER_PED_ID(), 17f)) && iLocal_2204 < 150)
					{
						iLocal_2204++;
						if (GlobalFunc_4924(Local_2569))
						{
							if (GlobalFunc_155(Local_2569, iLocal_2554, 10f))
							{
								iLocal_2204 = 600;
							}
						}
						if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_2554))
						{
							TASK::WAYPOINT_PLAYBACK_PAUSE(iLocal_2554, 1, 0);
						}
					}
					else if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_2554))
					{
						TASK::WAYPOINT_PLAYBACK_RESUME(iLocal_2554, 0, 31, 0);
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_2554, 3f, 0);
					}
				}
			}
			if (MISC::GET_GAME_TIMER() > iLocal_2198 + 30000)
			{
				PED::SET_PED_CAN_RAGDOLL(iLocal_2554, 1);
				PED::SET_PED_INTO_VEHICLE(iLocal_2554, iLocal_2918, -1);
			}
		}
	}
}

void func_471()//Position - 0x3A58D
{
	if (!func_28(Local_2569, uLocal_2914[2]))
	{
		if (GlobalFunc_4924(Local_2569) && GlobalFunc_115(uLocal_2914[2]))
		{
			if (bLocal_2236)
			{
				if (bLocal_2236 && !ENTITY::IS_ENTITY_AT_COORD(Local_2569, -68.9113f, 314.4095f, 107.8141f, 7f, 7f, 7f, 0, 1, 0))
				{
					GlobalFunc_5705(Local_2569, -68.9113f, 314.4095f, 107.8141f, 0, 0, 1);
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(Local_2569, 780511057) != 1)
			{
				TASK::TASK_COMBAT_PED(Local_2569, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::TASK_LOOK_AT_ENTITY(Local_2569, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
		}
	}
}

void func_472()//Position - 0x3A636
{
	if (!func_28(Local_2564, uLocal_2914[1]))
	{
		if (GlobalFunc_4924(Local_2564) && GlobalFunc_115(uLocal_2914[1]))
		{
			if (bLocal_2236)
			{
				if (bLocal_2236 && !ENTITY::IS_ENTITY_AT_COORD(Local_2564, -63.2851f, 327.3911f, 109.581f, 7f, 7f, 7f, 0, 1, 0))
				{
					GlobalFunc_5705(Local_2564, -63.2851f, 327.3911f, 109.581f, 0, 0, 1);
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(Local_2564, 780511057) != 1)
			{
				TASK::TASK_COMBAT_PED(Local_2564, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::TASK_LOOK_AT_ENTITY(Local_2564, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
		}
	}
}

void func_473()//Position - 0x3A6DF
{
	if (!func_28(Local_2559, uLocal_2914[0]))
	{
		if (GlobalFunc_4924(Local_2559) && GlobalFunc_115(uLocal_2914[0]))
		{
			if (!iLocal_2246)
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(Local_2559, uLocal_2914[0], 5f, 5f, 2.5f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_2918, 20f, 20f, 2f, 0, 1, 0))
				{
					iLocal_2246 = 1;
				}
				if ((TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_2554) && TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_2554) > 24) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -43.12919f, 298.2647f, 111.3944f, -67.07028f, 306.1256f, 114.8987f, 9.25f, 0, 1, 0))
				{
					iLocal_2246 = 1;
				}
			}
			else
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_2559, "RANDOM@CAR_THIEF@waiting_ig_4", "waiting", 3))
				{
					TASK::STOP_ANIM_TASK(Local_2559, "RANDOM@CAR_THIEF@waiting_ig_4", "waiting", -4f);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_2559, -1794415470) != 1)
				{
					TASK::TASK_ENTER_VEHICLE(Local_2559, uLocal_2914[0], -1, -1, 2f, 1, 0);
				}
			}
		}
	}
}

void func_474()//Position - 0x3A7F7
{
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iLocal_2918))
	{
		if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_2918, 12f) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) != 1)
		{
			if (func_313(14, -81.45494f, 296.8076f, 107.0281f, -49.93427f))
			{
				if (CAM::DOES_CAM_EXIST(uLocal_2811))
				{
					if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
					{
					}
				}
			}
		}
		if ((bLocal_2236 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) != 1) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) != 0)
		{
			TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2918, 20000, 1, 2f, 1, 0);
		}
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_2918, 10f, 10f, 3f, 0, 1, 0))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) != 1)
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(0, 23))
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					HUD::THEFEED_HIDE_THIS_FRAME();
					if (iLocal_2207 != 3)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("PAP2_CAR"))
						{
							iLocal_2207 = 3;
						}
					}
					bLocal_2236 = true;
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -78.24787f, 299.3756f, 109.2612f, -81.98504f, 289.7561f, 103.6896f, 26.25f, 0, 1, 0))
					{
						if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
						{
							PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID());
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_2305))
						{
							if (ENTITY::IS_ENTITY_ATTACHED(iLocal_2305))
							{
								ENTITY::DETACH_ENTITY(iLocal_2305, 1, 1);
							}
							OBJECT::DELETE_OBJECT(&iLocal_2305);
						}
					}
					if (CAM::DOES_CAM_EXIST(uLocal_2811))
					{
						CAM::STOP_CAM_POINTING(uLocal_2811);
						if (!CAM::DOES_CAM_EXIST(uLocal_2813))
						{
							uLocal_2813 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
						}
						else
						{
							CAM::STOP_CAM_POINTING(uLocal_2813);
						}
						uLocal_2812 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
						CAM::SET_CAM_PARAMS(uLocal_2812, -74.7f, 297f, 106f, 8.7f, 0f, 52.9f, 34.5f, 0, 1, 1, 2);
						CAM::SET_CAM_PARAMS(uLocal_2813, -76.2f, 295.9f, 106.1f, 6.3f, 0f, 38.8f, 34.5f, 0, 1, 1, 2);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_2813, uLocal_2812, 8000, 0, 1);
						CAM::SET_CAM_ACTIVE(uLocal_2812, 1);
						CAM::SET_CAM_ACTIVE(uLocal_2813, 1);
						CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
						if (CAM::DOES_CAM_EXIST(uLocal_2812))
						{
							CAM::SHAKE_CAM(uLocal_2812, "HAND_SHAKE", 1f);
						}
						if (CAM::DOES_CAM_EXIST(uLocal_2813))
						{
							CAM::SHAKE_CAM(uLocal_2813, "HAND_SHAKE", 1f);
						}
						MISC::CLEAR_AREA_OF_VEHICLES(Local_2457, 200f, 0, 0, 0, 0, 0);
						MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 200f, 1, 0, 0, 0);
						iLocal_2182 = MISC::GET_GAME_TIMER();
						if (!func_28(Local_2559, uLocal_2914[0]))
						{
							GlobalFunc_5705(Local_2559, -46.3393f, 351.7322f, 112.5621f, 62.2187f, 0, 1);
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_2559, -1794415470) != 1)
							{
								TASK::TASK_ENTER_VEHICLE(Local_2559, uLocal_2914[0], -1, -1, 2f, 1, 0);
							}
						}
						TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2918, 20000, 1, 2f, 1, 0);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						RECORDING::_0x293220DA1B46CEBC(3f, 7.5f, 1);
					}
				}
			}
		}
		if (bLocal_2236 == 1)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 272, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 273, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 270, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 271, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 281, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 281, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
		}
	}
}

void func_475()//Position - 0x3AB7A
{
	if (!bLocal_2861)
	{
		bLocal_2861 = GlobalFunc_10618(&uLocal_2632, cLocal_2907, "PAP2_FLEE", 9, 0, 0, 0);
	}
	else if (!GlobalFunc_111())
	{
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			func_338(5);
		}
		else
		{
			func_338(3);
		}
	}
}

void func_476()//Position - 0x3ABC4
{
	if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_2172) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_2173))
	{
		if (iLocal_2203 == 0)
		{
			STREAMING::REQUEST_ANIM_DICT("RANDOM@CAR_THIEF@waiting_ig_4");
			iLocal_2203 = 1;
		}
		else if (iLocal_2203 == 1)
		{
			if (STREAMING::HAS_ANIM_DICT_LOADED("RANDOM@CAR_THIEF@waiting_ig_4"))
			{
				iLocal_2203 = 2;
				TASK::TASK_PLAY_ANIM(Local_2559, "RANDOM@CAR_THIEF@waiting_ig_4", "waiting", 4f, -4f, -1, 32, 0f, 0, 0, 0);
			}
		}
		else if (iLocal_2203 == 2)
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_2559, "RANDOM@CAR_THIEF@waiting_ig_4", "waiting", 3))
			{
				TASK::TASK_PLAY_ANIM(Local_2559, "RANDOM@CAR_THIEF@waiting_ig_4", "waiting", 4f, -4f, -1, 32, 0f, 0, 0, 0);
			}
		}
	}
}


int func_478(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x3AC77
{
	if (GlobalFunc_4924(iParam0))
	{
		if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam0))
		{
			if (!MISC::IS_STRING_NULL(&uParam1))
			{
				if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&uParam1))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iParam0, &uParam1, 0, 524, -1);
					return 1;
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


void func_480()//Position - 0x3ADDE
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	
	GlobalFunc_5077();
	STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1.8f);
	PAD::_0x7F4724035FDCA1DD(2);
	func_251();
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_2172))
	{
		fLocal_2295 = PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_2172);
		if (!iLocal_2297)
		{
			if (GlobalFunc_1720())
			{
				if (fLocal_2295 > 0.872f)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_2297 = 1;
				}
			}
		}
		if (fLocal_2295 > 0.835512f)
		{
			if (iLocal_2207 != 2)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("PAP2_SPOTTED");
				iLocal_2207 = 2;
			}
			iLocal_2878 = 0;
		}
		if (fLocal_2295 >= 0.97f)
		{
			if (GlobalFunc_4924(Local_2564))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_2564, 780511057) != 1)
				{
					TASK::TASK_COMBAT_PED(Local_2564, PLAYER::PLAYER_PED_ID(), 0, 16);
					TASK::TASK_LOOK_AT_ENTITY(Local_2564, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				}
			}
			iLocal_2871 = 1;
		}
		if (fLocal_2295 >= 0.97262f)
		{
			iLocal_2871 = 1;
		}
		if (fLocal_2295 > fLocal_2838)
		{
			iLocal_2841 = 2;
		}
	}
	else if (iLocal_2841 > 0)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_2184 + 6000)
		{
			GlobalFunc_587(" IS_SYNCHRONIZED_SCENE_RUNNING = FALSE! Something went wrong, probably the audio stream ");
			iLocal_2841 = 2;
		}
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_2173))
	{
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_2173) > fLocal_2838)
		{
			RECORDING::_0x293220DA1B46CEBC(8f, 3f, 1);
			iLocal_2841 = 2;
		}
	}
	func_254();
	if (iLocal_2200 > 500)
	{
		if (!GlobalFunc_111())
		{
			if (iLocal_2888 != 7)
			{
				if (GlobalFunc_10618(&uLocal_2632, cLocal_2907, "PAP2_FAILFIL", 8, 0, 0, 0))
				{
					iLocal_2248 = 1;
					iLocal_2888 = 7;
				}
			}
		}
	}
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
	if (!AUDIO::HAS_SOUND_FINISHED(uLocal_2366))
	{
		AUDIO::STOP_SOUND(iLocal_2366);
		GlobalFunc_587("TK************ STOP SEX SOUNDS ************");
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::THEFEED_HIDE_THIS_FRAME();
	GlobalFunc_7629();
	if (CAM::DOES_CAM_EXIST(uLocal_2811))
	{
		fLocal_2289 = CAM::GET_CAM_FOV(uLocal_2811);
	}
	if (iLocal_2841 != 2)
	{
		func_14(1);
	}
	switch (iLocal_2841)
	{
		case 0:
			if (func_241(6, bLocal_2853))
			{
				GlobalFunc_138();
				if (CAM::DOES_CAM_EXIST(uLocal_2811))
				{
					CAM::STOP_CAM_POINTING(uLocal_2811);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), 1);
				AUDIO::STOP_SOUND(uLocal_2367);
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				iLocal_2368 = 1;
				func_489();
				iLocal_2184 = MISC::GET_GAME_TIMER();
				iLocal_2202 = MISC::GET_GAME_TIMER();
				fLocal_2836 = -0.05f;
				fLocal_2837 = -0.03f;
				iLocal_2171 = 0;
				iLocal_2215 = 0;
				GlobalFunc_587("TK************ INIT FILM POPPY ************TK");
				iLocal_2208 = 0;
				if (GlobalFunc_4924(iLocal_2554))
				{
					GlobalFunc_5705(iLocal_2554, -37.2184f, 325.397f, 111.6958f, 242.3437f, 0, 1);
				}
				iLocal_2297 = 0;
				iLocal_2841 = 1;
			}
			break;
		
		case 1:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_2172))
			{
				if (HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
				{
					if (iLocal_2215 == 0)
					{
						if (fLocal_2295 > 0.029383f)
						{
							HUD::_0x57D760D55F54E071(1);
							GlobalFunc_164("PAP2_SEX1", 7500, 0);
							iLocal_2215++;
						}
					}
					else if (iLocal_2215 == 1)
					{
						if (fLocal_2295 > 0.051792f)
						{
							HUD::_0x57D760D55F54E071(1);
							GlobalFunc_164("PAP2_SEX2", 7500, 0);
							iLocal_2215++;
						}
					}
					else if (iLocal_2215 == 2)
					{
						if (fLocal_2295 > 0.095256f)
						{
							HUD::_0x57D760D55F54E071(1);
							GlobalFunc_164("PAP2_SEX3", 7500, 0);
							iLocal_2215++;
						}
					}
					else if (iLocal_2215 == 3)
					{
						if (fLocal_2295 > 0.111642f)
						{
							HUD::_0x57D760D55F54E071(1);
							GlobalFunc_164("PAP2_SEX4", 7500, 0);
							iLocal_2215++;
						}
					}
					else if (iLocal_2215 == 4)
					{
						if (fLocal_2295 > 0.160527f)
						{
							HUD::_0x57D760D55F54E071(1);
							GlobalFunc_164("PAP2_SEX5", 7500, 0);
							iLocal_2215++;
						}
					}
					else if (iLocal_2215 == 5)
					{
						if (fLocal_2295 > 0.250271f)
						{
							HUD::_0x57D760D55F54E071(1);
							GlobalFunc_164("PAP2_SEX6", 7500, 0);
							iLocal_2215++;
						}
					}
					else if (iLocal_2215 == 6)
					{
						if (fLocal_2295 > 0.296955f)
						{
							HUD::_0x57D760D55F54E071(1);
							GlobalFunc_164("PAP2_SEX7", 7500, 0);
							iLocal_2215++;
						}
					}
					else if (iLocal_2215 == 7)
					{
						if (fLocal_2295 > 0.320319f)
						{
							HUD::_0x57D760D55F54E071(1);
							GlobalFunc_164("PAP2_SEX8", 7500, 0);
							iLocal_2215++;
						}
					}
					else if (iLocal_2215 == 8)
					{
						if (fLocal_2295 > 0.376536f)
						{
							HUD::_0x57D760D55F54E071(1);
							GlobalFunc_164("PAP2_SEX9", 7500, 0);
							iLocal_2215++;
						}
					}
					else if (iLocal_2215 == 9)
					{
						if (fLocal_2295 > 0.397816f)
						{
							HUD::_0x57D760D55F54E071(1);
							GlobalFunc_164("PAP2_SEX10", 7500, 0);
							iLocal_2215++;
						}
					}
					else if (iLocal_2215 == 10)
					{
						if (fLocal_2295 > 0.477816f)
						{
							HUD::_0x57D760D55F54E071(1);
							GlobalFunc_164("PAP2_SEX11", 7500, 0);
							iLocal_2215++;
						}
					}
					else if (iLocal_2215 == 11)
					{
						if (fLocal_2295 > 0.549232f)
						{
							HUD::_0x57D760D55F54E071(1);
							GlobalFunc_164("PAP2_SEX12", 7500, 0);
							iLocal_2215++;
						}
					}
					else if (iLocal_2215 == 12)
					{
						if (fLocal_2295 > 0.608102f)
						{
							HUD::_0x57D760D55F54E071(1);
							GlobalFunc_164("PAP2_SEX13", 7500, 0);
							iLocal_2215++;
						}
					}
					else if (iLocal_2215 == 13)
					{
						if (fLocal_2295 > 0.650271f)
						{
							HUD::_0x57D760D55F54E071(1);
							GlobalFunc_164("PAP2_SEX14", 7500, 0);
							iLocal_2215++;
						}
					}
					else if (iLocal_2215 == 14)
					{
						if (fLocal_2295 > 0.685452f)
						{
							HUD::_0x57D760D55F54E071(1);
							GlobalFunc_164("PAP2_SEX15", 7500, 0);
							iLocal_2215++;
						}
					}
					else if (iLocal_2215 == 15)
					{
						if (fLocal_2295 > 0.707621f)
						{
							HUD::_0x57D760D55F54E071(1);
							GlobalFunc_164("PAP2_SEX16", 7500, 0);
							iLocal_2215++;
						}
					}
					else if (iLocal_2215 == 16)
					{
						if (fLocal_2295 > 0.860467f)
						{
							HUD::_0x57D760D55F54E071(1);
							GlobalFunc_164("PAP2_SEX17", 7500, 0);
							iLocal_2215++;
						}
					}
				}
				if (fLocal_2295 > 0.6f)
				{
					func_241(7, 0);
				}
			}
			if (!iLocal_2878)
			{
				if (func_488(Local_2559, 5f, 5f, 1.5f) && iLocal_2840 != 11)
				{
					func_338(0);
				}
				if (MISC::GET_GAME_TIMER() > iLocal_2202)
				{
					if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
					{
						GlobalFunc_79(800, 0);
					}
				}
				if (iLocal_2208 == 0)
				{
					GlobalFunc_159("PAP2_HELP1", -1);
					iLocal_2209 = MISC::GET_GAME_TIMER();
					iLocal_2208 = 1;
				}
				else if (iLocal_2208 == 1)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_2209 + 7000)
					{
						GlobalFunc_159("PAP2_HELP2", -1);
						iLocal_2209 = MISC::GET_GAME_TIMER();
						iLocal_2208 = 2;
					}
				}
				else if (iLocal_2208 == 2)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_2209 + 7000)
					{
						if (Local_2518.f_1 != 255)
						{
							GlobalFunc_159("PAP2_HELP3", -1);
							iLocal_2208 = 3;
						}
						else
						{
							iLocal_2208 = 3;
						}
					}
				}
				if (GlobalFunc_4924(iLocal_2554))
				{
					func_486();
					if (!PED::IS_PED_IN_COVER(iLocal_2554, 0))
					{
						if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_2554, "rcmpaparazzo_2", "idle_l_corner_a", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_2554, "rcmpaparazzo_2", "idle_l_corner_b", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_2554, "rcmpaparazzo_2", "idle_l_corner_c", 3))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_2554, -1959848946) != 1)
							{
								PED::SET_PED_TO_LOAD_COVER(iLocal_2554, 1);
								if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(-37.2396f, 325.3983f, 111.6961f))
								{
									uLocal_2516 = TASK::ADD_COVER_POINT(-37.2396f, 325.3983f, 111.6961f, 156.696f, 0, 2, 2, 0);
								}
								TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iLocal_2554, -37.2022f, 325.4253f, 111.6954f, -1, 1, 0f, 1, 1, uLocal_2516, 0);
								PED::SET_PED_CAN_PEEK_IN_COVER(iLocal_2554, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_2554, 34, 1);
							}
						}
					}
					if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -32.75797f, 319.5059f, 111.4954f, -33.26295f, 318.438f, 113.4954f, 1.5f, 0, 1, 0))
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(32.2338f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-13.3076f, 1065353216);
					}
				}
				if (!iLocal_2871)
				{
					func_345(Local_2559, &bVar0, 0);
					if (bVar0)
					{
						func_485(&bVar1);
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_2172) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_2172) > 0.85f)
						{
							func_484();
							iLocal_2871 = 1;
						}
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_2172) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_2172) > 0.82f)
						{
							fLocal_2836 = (fLocal_2836 + 0.00067f);
							if (fLocal_2836 > 0f)
							{
								fLocal_2836 = 0f;
							}
							fLocal_2837 = (fLocal_2837 + 0.00067f);
							if (fLocal_2837 > 0f)
							{
								fLocal_2837 = 0f;
							}
						}
						if (bVar1)
						{
							func_483();
						}
					}
					else
					{
						func_481();
					}
				}
				else
				{
					if (GlobalFunc_4924(iLocal_2554))
					{
						func_311(iLocal_2554, 0);
					}
					if (MISC::GET_GAME_TIMER() > iLocal_2176 + 8000)
					{
					}
					func_345(Local_2559, &uVar2, 0);
					fLocal_2836 = (fLocal_2836 + 0.00067f);
					if (fLocal_2836 > 0f)
					{
						fLocal_2836 = 0f;
					}
					fLocal_2837 = (fLocal_2837 + 0.00067f);
					if (fLocal_2837 > 0f)
					{
						fLocal_2837 = 0f;
					}
					if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() > 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_2304))
						{
							if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_2304))
							{
								ENTITY::DETACH_ENTITY(iLocal_2304, 1, 1);
							}
						}
					}
				}
			}
			else if (!GlobalFunc_111())
			{
				func_338(4);
			}
			break;
		
		case 2:
			if (GlobalFunc_4924(Local_2559))
			{
				PED::SET_PED_COMPONENT_VARIATION(Local_2559, 4, 1, 0, 0);
			}
			if (GlobalFunc_4924(Local_2564))
			{
				PED::SET_PED_COMPONENT_VARIATION(Local_2564, 4, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_2564, 6, 0, 0, 0);
			}
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
			TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "rcmpaparazzo_2", "idle_d", 1000f, -4f, -1, 0, 0.739f, 0, 0, 0);
			func_339(1);
			HUD::CLEAR_PRINTS();
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(10.7485f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-9.8457f, 1065353216);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			iLocal_2911 = 0;
			HUD::CLEAR_HELP(1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2304))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_2304))
				{
					ENTITY::DETACH_ENTITY(iLocal_2304, 1, 1);
				}
			}
			func_327(0);
			break;
		
		case 3:
			iLocal_2841 = 2;
			GlobalFunc_4935();
			func_484();
			iLocal_2871 = 1;
			break;
	}
}

void func_481()//Position - 0x3B7BC
{
	if (iLocal_2822)
	{
		if (Local_2518.f_1 < 200)
		{
			if (MISC::GET_GAME_TIMER() > (iLocal_2181 + MISC::GET_RANDOM_INT_IN_RANGE(6000, 7000)))
			{
				if (iLocal_2840 != 5)
				{
					func_482();
				}
				else
				{
					func_482();
				}
			}
		}
	}
	else if (iLocal_2889 > 20 && !GlobalFunc_111())
	{
		if (!iLocal_2865)
		{
			iLocal_2865 = 1;
		}
		if (iLocal_2888 < 7)
		{
			iLocal_2888++;
			iLocal_2181 = MISC::GET_GAME_TIMER();
		}
		func_482();
	}
	if (iLocal_2888 >= 7)
	{
		iLocal_2878 = 1;
	}
}

void func_482()//Position - 0x3B841
{
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_2172) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_2172) > 0.108f)
	{
		if (!GlobalFunc_111())
		{
			if (iLocal_2888 < 7)
			{
				if (GlobalFunc_4924(iLocal_2554))
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_2554))
					{
						if (GlobalFunc_10618(&uLocal_2632, cLocal_2907, "PAP2_NOTME", 7, 1, 0, 0))
						{
							iLocal_2888++;
							iLocal_2181 = MISC::GET_GAME_TIMER();
							iLocal_2186 = MISC::GET_GAME_TIMER();
						}
					}
					else
					{
						if (iLocal_2171 == 3)
						{
							if (GlobalFunc_10630(&uLocal_2632, cLocal_2907, "PAP2_BADCAM1", "PAP2_BADCAM1_4", 7, 1, 0))
							{
								iLocal_2171 = 4;
							}
						}
						else if (iLocal_2171 == 2)
						{
							if (GlobalFunc_10630(&uLocal_2632, cLocal_2907, "PAP2_BADCAM1", "PAP2_BADCAM1_3", 7, 1, 0))
							{
								iLocal_2171 = 3;
							}
						}
						else if (iLocal_2171 == 1)
						{
							if (GlobalFunc_10630(&uLocal_2632, cLocal_2907, "PAP2_BADCAM1", "PAP2_BADCAM1_2", 7, 1, 0))
							{
								iLocal_2171 = 2;
							}
						}
						else if (iLocal_2171 == 0)
						{
							if (GlobalFunc_10630(&uLocal_2632, cLocal_2907, "PAP2_BADCAM1", "PAP2_BADCAM1_1", 7, 1, 0))
							{
								iLocal_2171 = 1;
							}
						}
						iLocal_2888++;
						iLocal_2181 = MISC::GET_GAME_TIMER();
					}
				}
			}
		}
	}
}

void func_483()//Position - 0x3B963
{
	if (iLocal_2822)
	{
		if (Local_2518.f_1 > 200)
		{
			iLocal_2889++;
		}
	}
	else
	{
		iLocal_2889++;
	}
}

void func_484()//Position - 0x3B98E
{
	if (GlobalFunc_4924(Local_2559) && GlobalFunc_4924(Local_2564))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Local_2559, 0);
		ENTITY::FREEZE_ENTITY_POSITION(Local_2564, 0);
		iLocal_2176 = MISC::GET_GAME_TIMER();
	}
}

void func_485(var uParam0)//Position - 0x3B9C3
{
	if (CAM::DOES_CAM_EXIST(uLocal_2811))
	{
		if (CAM::GET_CAM_FOV(uLocal_2811) > 13f)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_2184 + 10000 && MISC::GET_GAME_TIMER() > iLocal_2186 + 10000)
			{
				if (GlobalFunc_10618(&uLocal_2632, cLocal_2907, "PAP2_BADCAMA", 7, 1, 0, 0))
				{
					iLocal_2186 = MISC::GET_GAME_TIMER();
				}
			}
			*uParam0 = 0;
		}
		else
		{
			*uParam0 = 1;
			iLocal_2186 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_486()//Position - 0x3BA32
{
	int iVar0;
	var uVar1;
	
	if (PED::IS_PED_IN_COVER(iLocal_2554, 0))
	{
		if (iLocal_2840 == 4 || iLocal_2840 == 3)
		{
			if (iLocal_2237 == 0)
			{
				if (!bLocal_2224)
				{
					if (GlobalFunc_10618(&uLocal_2632, cLocal_2907, "PAP2_PASS", 8, 0, 0, 0))
					{
						iLocal_2237 = 1;
					}
				}
				else
				{
					iLocal_2237 = 1;
				}
			}
			else if (!GlobalFunc_111())
			{
				if (iLocal_2251 == 0)
				{
					if (bLocal_2224 == 0)
					{
						GlobalFunc_164("PAP2_08", 7500, 0);
						iLocal_2251 = 1;
					}
				}
			}
		}
		if (iLocal_2196 == 0)
		{
			STREAMING::REQUEST_ANIM_DICT("rcmpaparazzo_2");
			STREAMING::REQUEST_CLIP_SET(sLocal_2908);
			STREAMING::REQUEST_CLIP_SET(sLocal_2909);
			iLocal_2196 = 1;
		}
		else if (iLocal_2196 == 1)
		{
			if (STREAMING::HAS_ANIM_DICT_LOADED("rcmpaparazzo_2"))
			{
				iLocal_2196 = 2;
				TASK::OPEN_SEQUENCE_TASK(&uVar1);
				TASK::TASK_PLAY_ANIM(0, "rcmpaparazzo_2", "idle_l_corner_a", 4f, -4f, -1, 0, 0f, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, "rcmpaparazzo_2", "idle_l_corner_b", 4f, -4f, -1, 0, 0f, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, "rcmpaparazzo_2", "idle_l_corner_c", 4f, -4f, -1, 0, 0f, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, "rcmpaparazzo_2", "idle_l_corner_b", 4f, -4f, -1, 0, 0f, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, "rcmpaparazzo_2", "idle_l_corner_c", 4f, -4f, -1, 0, 0f, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, "rcmpaparazzo_2", "idle_l_corner_a", 4f, -4f, -1, 0, 0f, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, "rcmpaparazzo_2", "idle_l_corner_c", 4f, -4f, -1, 0, 0f, 0, 0, 0);
				TASK::SET_SEQUENCE_TO_REPEAT(uVar1, 1);
				TASK::CLOSE_SEQUENCE_TASK(uVar1);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_2554, uVar1);
			}
		}
		else if (iLocal_2196 == 2)
		{
			if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_2554, "rcmpaparazzo_2", "idle_l_corner_a", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_2554, "rcmpaparazzo_2", "idle_l_corner_b", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_2554, "rcmpaparazzo_2", "idle_l_corner_c", 3))
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 40);
				if (iVar0 == 1)
				{
					TASK::TASK_PLAY_ANIM(iLocal_2554, "rcmpaparazzo_2", "idle_l_corner_a", 4f, -4f, -1, 0, 0f, 0, 0, 0);
				}
				if (iVar0 == 2)
				{
					TASK::TASK_PLAY_ANIM(iLocal_2554, "rcmpaparazzo_2", "idle_l_corner_b", 4f, -4f, -1, 0, 0f, 0, 0, 0);
				}
				if (iVar0 == 3)
				{
					TASK::TASK_PLAY_ANIM(iLocal_2554, "rcmpaparazzo_2", "idle_l_corner_c", 4f, -4f, -1, 0, 0f, 0, 0, 0);
				}
			}
		}
	}
}


int func_488(int iParam0, struct<3> Param1)//Position - 0x3BC82
{
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iParam0))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, Param1, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_489()//Position - 0x3BCB9
{
	GlobalFunc_2297(&(Local_2574[0 /*5*/]), 1, 0, 1);
	GlobalFunc_2297(&(Local_2574[1 /*5*/]), 1, 0, 1);
	GlobalFunc_2297(&(uLocal_2307[0]), 1, 0, 1);
	GlobalFunc_2297(&(uLocal_2307[1]), 1, 0, 1);
	GlobalFunc_2297(&(uLocal_2307[2]), 1, 0, 1);
	GlobalFunc_2297(&(uLocal_2307[3]), 1, 0, 1);
	GlobalFunc_2297(&(uLocal_2307[4]), 1, 0, 1);
	GlobalFunc_2297(&(uLocal_2307[5]), 1, 0, 1);
}




void func_493()//Position - 0x3BD60
{
	GlobalFunc_5077();
	STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1.8f);
	func_254();
	if (iLocal_2200 > 500)
	{
		if (!GlobalFunc_111())
		{
			if (iLocal_2888 != 7)
			{
				if (GlobalFunc_10618(&uLocal_2632, cLocal_2907, "PAP2_FAILFIL", 8, 1, 0, 0))
				{
					iLocal_2248 = 1;
					iLocal_2888 = 7;
				}
			}
		}
	}
	PAD::_0x7F4724035FDCA1DD(2);
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_2366))
	{
		AUDIO::STOP_SOUND(iLocal_2366);
		GlobalFunc_587("TK************ STOP SEX SOUNDS ************");
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::THEFEED_HIDE_THIS_FRAME();
	GlobalFunc_7629();
	if (iLocal_2841 > 0 && iLocal_2844 > 0)
	{
		if (CAM::DOES_CAM_EXIST(uLocal_2811))
		{
			CAM::STOP_CAM_POINTING(uLocal_2811);
		}
		if (CAM::DOES_CAM_EXIST(uLocal_2811))
		{
			fLocal_2289 = CAM::GET_CAM_FOV(uLocal_2811);
		}
		func_14(1);
	}
	switch (iLocal_2841)
	{
		case 0:
			if (func_241(5, bLocal_2853))
			{
				GlobalFunc_138();
				func_413(1, "FILM POPPY", 0, 0, 0, 1);
				HUD::CLEAR_PRINTS();
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), 1);
				if (CAM::DOES_CAM_EXIST(uLocal_2811) && GlobalFunc_4924(Local_2559))
				{
					CAM::SET_CAM_ROT(uLocal_2811, -1.6576f, 0f, -170.9825f, 2);
				}
				AUDIO::STOP_SOUND(iLocal_2367);
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				iLocal_2368 = 1;
				func_249(1);
				func_247();
				iLocal_2873 = 0;
				iLocal_2171 = 0;
				fLocal_2836 = -0.05f;
				fLocal_2837 = -0.03f;
				iLocal_2184 = MISC::GET_GAME_TIMER();
				iLocal_2202 = MISC::GET_GAME_TIMER();
				if (GlobalFunc_4924(iLocal_2554))
				{
					GlobalFunc_5705(iLocal_2554, -37.2184f, 325.397f, 111.6958f, 242.3437f, 0, 1);
				}
				iLocal_2841 = 1;
			}
			break;
		
		case 1:
			switch (iLocal_2844)
			{
				case 0:
					if (CAM::DOES_CAM_EXIST(uLocal_2811))
					{
						CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
					}
					if (GlobalFunc_4924(iLocal_2554) && GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_2554, Local_2559, -1, 0, 2);
					}
					iLocal_2852 = 0;
					iLocal_2844 = 1;
					break;
				
				case 1:
					iLocal_2844 = 2;
					break;
				
				case 2:
					iLocal_2841 = 2;
					break;
			}
			break;
		
		case 2:
			iLocal_2911 = 0;
			iLocal_2871 = 0;
			iLocal_2889 = 0;
			func_327(0);
			break;
		
		case 3:
			iLocal_2841 = 2;
			GlobalFunc_4935();
			iLocal_2871 = 1;
			break;
	}
}

void func_494()//Position - 0x3BF9E
{
	struct<6> Var0;
	struct<6> Var6;
	struct<6> Var12;
	
	GlobalFunc_5077();
	if (((GlobalFunc_199() && iLocal_2261) && MISC::GET_GAME_TIMER() > iLocal_2184 + 900) && CAM::IS_SCREEN_FADED_OUT())
	{
		GlobalFunc_79(800, 0);
	}
	if (iLocal_2207 == 0)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("PAP2_START");
		iLocal_2207 = 1;
	}
	if (iLocal_2840 == 2 && PED::IS_PED_RAGDOLL(iLocal_2554))
	{
		func_338(2);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 26.14576f, 302.1105f, 109.4635f, -51.90198f, 337.5261f, 124.3827f, 40.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -6.873048f, 293.6245f, 111.9627f, -11.44987f, 283.5945f, 107.3145f, 2f, 0, 1, 0))
		{
			func_338(5);
		}
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -6.007325f, 363.1314f, 112.0066f, -24.75968f, 322.2206f, 115.7538f, 27.5f, 0, 1, 0))
	{
		if (GlobalFunc_5805() || GlobalFunc_5805())
		{
			if (GlobalFunc_4924(uLocal_2307[5]))
			{
				PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(uLocal_2307[5]);
				TASK::TASK_REACT_AND_FLEE_PED(uLocal_2307[5], PLAYER::PLAYER_PED_ID());
			}
			func_338(5);
		}
	}
	if (iLocal_2894 < 2)
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 713668775) == 1)
		{
			if (((((((PAD::IS_CONTROL_PRESSED(0, 30) || PAD::IS_CONTROL_PRESSED(0, 31)) || PAD::IS_CONTROL_PRESSED(0, 23)) || PAD::IS_CONTROL_PRESSED(0, 21)) || PAD::IS_CONTROL_PRESSED(0, 22)) || (GlobalFunc_1720() && PAD::IS_CONTROL_PRESSED(0, 1))) || (GlobalFunc_1720() && PAD::IS_CONTROL_PRESSED(0, 2))) || (GlobalFunc_1720() && PAD::IS_CONTROL_PRESSED(0, 32)))
			{
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
		}
	}
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
	if (GlobalFunc_4924(uLocal_2307[1]))
	{
		GlobalFunc_661(uLocal_2307[1], &uLocal_2369, -1, 0, 0, 0, -1082130432, 0);
	}
	if (GlobalFunc_4924(uLocal_2307[2]))
	{
		GlobalFunc_661(uLocal_2307[2], &uLocal_2377, -1, 0, 0, 0, -1082130432, 0);
	}
	if (GlobalFunc_4924(uLocal_2307[3]))
	{
		GlobalFunc_661(uLocal_2307[3], &uLocal_2385, -1, 0, 0, 0, -1082130432, 0);
	}
	if (GlobalFunc_4924(uLocal_2307[4]))
	{
		GlobalFunc_661(uLocal_2307[4], &uLocal_2393, -1, 0, 0, 0, -1082130432, 0);
	}
	if (GlobalFunc_4924(Local_2574[0 /*5*/]))
	{
		GlobalFunc_661(Local_2574[0 /*5*/], &uLocal_2433, -1, 0, 0, 0, -1082130432, 0);
	}
	if (GlobalFunc_4924(Local_2574[1 /*5*/]))
	{
		GlobalFunc_661(Local_2574[1 /*5*/], &uLocal_2441, -1, 0, 0, 0, -1082130432, 0);
	}
	if (GlobalFunc_4924(Local_2559))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_2559, 18f, 18f, 2f, 0, 1, 0) && PED::IS_PED_FACING_PED(Local_2559, PLAYER::PLAYER_PED_ID(), 60f))
		{
			func_338(0);
		}
		else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_2559, 7f, 7f, 2f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -20.67899f, 298.9662f, 111.2627f, -35.81502f, 306.0859f, 115.4814f, 24f, 0, 1, 0))
		{
			func_338(0);
		}
		GlobalFunc_661(Local_2559, &uLocal_2409, -1, 0, 0, 0, -1082130432, 0);
	}
	if (GlobalFunc_4924(Local_2564))
	{
		GlobalFunc_661(Local_2564, &uLocal_2417, -1, 0, 0, 0, -1082130432, 0);
	}
	if (GlobalFunc_4924(Local_2569))
	{
		GlobalFunc_661(Local_2569, &uLocal_2425, -1, 0, 0, 0, -1082130432, 0);
	}
	if (GlobalFunc_4924(iLocal_2554))
	{
		PED::SET_PED_INCREASED_AVOIDANCE_RADIUS(iLocal_2554);
		PED::SET_PED_TO_LOAD_COVER(iLocal_2554, 1);
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_2554, -7.914861f, 290.7026f, 106.4252f, -13.11027f, 279.6898f, 112.5335f, 5.5f, 0, 1, 0))
		{
			Var0 = { GlobalFunc_560() };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
			{
				if (MISC::ARE_STRINGS_EQUAL(&Var0, "PAP2_WALKA"))
				{
					GlobalFunc_4935();
				}
			}
		}
		if (iLocal_2840 == 2)
		{
			if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_2554, 20f))
			{
				Var6 = { GlobalFunc_560() };
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var6))
				{
					if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP2_WALKA"))
					{
						GlobalFunc_5105();
					}
				}
			}
		}
		if (GlobalFunc_4924(Local_2574[0 /*5*/]))
		{
			Var12 = { GlobalFunc_2209() };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var12))
			{
				if (MISC::ARE_STRINGS_EQUAL(&Var12, "PAP2_STAFF_7"))
				{
					if (PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(Local_2574[0 /*5*/]))
					{
						TASK::TASK_USE_MOBILE_PHONE(Local_2574[0 /*5*/], 0, 1);
					}
				}
			}
			if ((GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_2554, 30f) && PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_2554, 70f)) && !PED::IS_PED_HEADTRACKING_PED(iLocal_2554, Local_2574[0 /*5*/]))
			{
				if (!PED::IS_PED_HEADTRACKING_PED(PLAYER::PLAYER_PED_ID(), iLocal_2554))
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_2554, -1, 0, 2);
				}
			}
			else if (PED::IS_PED_HEADTRACKING_PED(iLocal_2554, Local_2574[0 /*5*/]))
			{
				if (!PED::IS_PED_HEADTRACKING_PED(PLAYER::PLAYER_PED_ID(), Local_2574[0 /*5*/]))
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_2574[0 /*5*/], -1, 0, 2);
				}
			}
			else if (PED::IS_PED_HEADTRACKING_PED(PLAYER::PLAYER_PED_ID(), iLocal_2554))
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			}
		}
		func_486();
		if (iLocal_2235)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_2201 + 1000)
			{
				bLocal_2284 = true;
			}
		}
		if (GlobalFunc_775(iLocal_2554, -37.203f, 325.4259f, 112.31f, 2f) && bLocal_2876 == 0)
		{
			if (iLocal_2237 == 0)
			{
				if (!bLocal_2224 && !GlobalFunc_775(PLAYER::PLAYER_PED_ID(), -37.203f, 325.4259f, 112.31f, 2f))
				{
					if (GlobalFunc_10618(&uLocal_2632, cLocal_2907, "PAP2_PASS", 8, 0, 0, 0))
					{
						RECORDING::_0x293220DA1B46CEBC(9f, 4f, 1);
						iLocal_2237 = 1;
						iLocal_2216 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					iLocal_2237 = 1;
					iLocal_2216 = MISC::GET_GAME_TIMER();
				}
			}
			if (!PED::IS_PED_IN_COVER(iLocal_2554, 0))
			{
				if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_2554, "rcmpaparazzo_2", "idle_l_corner_a", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_2554, "rcmpaparazzo_2", "idle_l_corner_b", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_2554, "rcmpaparazzo_2", "idle_l_corner_c", 3))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -37.25669f, 325.4652f, 112.6963f, 0.05f, 0.05f, 0.05f, 0, 1, 0))
					{
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_2554, -1959848946) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_2554, -1959848946) != 0)
					{
						if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(-37.2396f, 325.3983f, 111.6961f))
						{
							uLocal_2516 = TASK::ADD_COVER_POINT(-37.2396f, 325.3983f, 111.6961f, 156.696f, 0, 2, 2, 0);
						}
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iLocal_2554, -37.2022f, 325.4253f, 111.6954f, -1, 1, 0f, 1, 1, uLocal_2516, 0);
						if (GlobalFunc_115(iLocal_2305))
						{
							ENTITY::DETACH_ENTITY(iLocal_2305, 1, 1);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_2305, iLocal_2554, PED::GET_PED_BONE_INDEX(iLocal_2554, 28422), 0.06f, 0f, -0.06f, 0f, 0f, 90f, 1, 1, 0, 0, 2, 1);
						}
						PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(iLocal_2554);
						iLocal_2214 = MISC::GET_GAME_TIMER();
						if (iLocal_2235 == 0)
						{
							iLocal_2201 = MISC::GET_GAME_TIMER();
						}
						iLocal_2235 = 1;
					}
					else if (MISC::GET_GAME_TIMER() > iLocal_2214 + 2000)
					{
						TASK::CLEAR_PED_TASKS(iLocal_2554);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_AT_COORD(iLocal_2554, -37.25669f, 325.4652f, 112.6963f, 0.1f, 0.1f, 0.1f, 0, 1, 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_2554, 1);
			}
		}
	}
	if (bLocal_2224 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2305))
		{
			iLocal_2305 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_pap_camera_01"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2554, 0f, 0f, 10f), 1, 1, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2305))
		{
			if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_2305, iLocal_2554))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_2305, iLocal_2554, PED::GET_PED_BONE_INDEX(iLocal_2554, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
			}
		}
	}
	func_549();
	if (iLocal_2235)
	{
		func_548();
	}
	if (bLocal_2224 == 1)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
	}
	switch (iLocal_2841)
	{
		case 0:
			iLocal_2870 = 1;
			if (func_241(iLocal_2840, bLocal_2853))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_2554, 0);
				iLocal_2841 = 1;
			}
			break;
		
		case 1:
			func_547();
			if (iLocal_2320 == 0)
			{
				func_546();
			}
			else
			{
				func_545();
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -11.12876f, 354.3175f, 109.1607f, -24.44232f, 326.8144f, 114.1618f, 18.75f, 0, 1, 0) && ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
			{
				if (!bLocal_2262)
				{
					GlobalFunc_553(800);
					bLocal_2262 = true;
				}
			}
			func_543();
			func_542();
			if (!bLocal_2876 && !bLocal_2877)
			{
				func_541();
				func_540();
				if (MISC::GET_GAME_TIMER() > iLocal_2189)
				{
					func_499(iLocal_2840);
				}
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_2554, 2f);
				func_254();
				if (!bLocal_2224)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -36.27514f, 328.5864f, 110.5839f, -37.69368f, 325.3203f, 113.7398f, 3.25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -37.62184f, 328.4344f, 109.4458f, -41.9645f, 330.4021f, 113.4458f, 5.75f, 0, 1, 0))
					{
					}
					else
					{
						PLAYER::SET_PLAYER_CAN_USE_COVER(PLAYER::PLAYER_ID(), 1);
					}
				}
				else
				{
					PLAYER::SET_PLAYER_CAN_USE_COVER(PLAYER::PLAYER_ID(), 1);
				}
			}
			else if (bLocal_2877)
			{
				if (GlobalFunc_4924(Local_2574[0 /*5*/]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2574[0 /*5*/], 0);
				}
				if (GlobalFunc_4924(Local_2574[1 /*5*/]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2574[1 /*5*/], 0);
				}
				func_475();
			}
			else if (bLocal_2876)
			{
				if (GlobalFunc_4924(Local_2574[0 /*5*/]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2574[0 /*5*/], 0);
					if (bLocal_2264)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_2574[0 /*5*/], 2112745624) != 1)
						{
							TASK::TASK_REACT_AND_FLEE_PED(Local_2574[0 /*5*/], PLAYER::PLAYER_PED_ID());
						}
					}
				}
				if (GlobalFunc_4924(Local_2574[1 /*5*/]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2574[1 /*5*/], 0);
					if (bLocal_2264)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_2574[1 /*5*/], 2112745624) != 1)
						{
							TASK::TASK_REACT_AND_FLEE_PED(Local_2574[1 /*5*/], PLAYER::PLAYER_PED_ID());
						}
					}
				}
				if (bLocal_2264)
				{
					GlobalFunc_4956();
				}
				if (!bLocal_2284)
				{
					if (!iLocal_2858)
					{
						if (GlobalFunc_156(iLocal_2554, PLAYER::PLAYER_PED_ID(), 1) < 12f)
						{
							iLocal_2858 = GlobalFunc_10618(&uLocal_2632, cLocal_2907, "PAP2_SPOT", 8, 0, 0, 0);
						}
						else
						{
							iLocal_2858 = 1;
						}
					}
					else if (!GlobalFunc_111())
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -21.922f, 295.4762f, 111.5717f, -62.67068f, 314.4955f, 113.8363f, 33.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -31.05239f, 322.6476f, 111.4022f, -53.9211f, 333.266f, 114.3775f, 17.75f, 0, 1, 0))
						{
							func_338(0);
						}
						else
						{
							func_338(5);
						}
					}
				}
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_2809))
			{
				if (GlobalFunc_663("PAP2_06", 0, 0) || !GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_2554, 70f))
				{
					HUD::SET_BLIP_FLASHES(iLocal_2809, 1);
				}
				else if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_2554, 70f))
				{
					HUD::SET_BLIP_FLASHES(iLocal_2809, 0);
				}
			}
			break;
		
		case 2:
			func_496();
			break;
		
		case 3:
			func_495(iLocal_2840);
			break;
	}
}

void func_495(int iParam0)//Position - 0x3CB1F
{
	int iVar0;
	
	switch (iParam0)
	{
		case 2:
			if (GlobalFunc_4924(iLocal_2554))
			{
				TASK::CLEAR_PED_TASKS(iLocal_2554);
			}
			iLocal_2894 = 3;
			GlobalFunc_5705(iLocal_2554, Local_2485[2 /*3*/], 338.4024f, 0, 1);
			GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), -14.1493f, 280.7966f, 107.2078f, 317.7051f, 0, 1);
			iLocal_2856 = 1;
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			iLocal_2841 = 1;
			break;
		
		case 3:
			if (GlobalFunc_4924(iLocal_2554))
			{
				TASK::CLEAR_PED_TASKS(iLocal_2554);
			}
			iVar0 = 0;
			while (iVar0 <= 1)
			{
				if (GlobalFunc_4924(Local_2574[iVar0 /*5*/]))
				{
					TASK::CLEAR_PED_TASKS(Local_2574[iVar0 /*5*/]);
				}
				iVar0++;
			}
			GlobalFunc_5705(iLocal_2554, Local_2485[5 /*3*/], 63.3365f, 0, 1);
			GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), -2.2002f, 317.2632f, 109.9189f, 60.7242f, 0, 1);
			iLocal_2894 = 6;
			iLocal_2857 = 1;
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			iLocal_2841 = 1;
			break;
		
		case 4:
			if (GlobalFunc_4924(iLocal_2554))
			{
				TASK::CLEAR_PED_TASKS(iLocal_2554);
			}
			iLocal_2870 = 1;
			func_542();
			iLocal_2894 = 7;
			GlobalFunc_5705(iLocal_2554, -36.7532f, 323.5341f, 111.6957f, 165.7917f, 0, 1);
			GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), -35.1361f, 320.0255f, 111.6955f, 199.6725f, 0, 1);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			iLocal_2841 = 1;
			break;
	}
}

void func_496()//Position - 0x3CCA5
{
	int iVar0;
	
	if (iLocal_2840 == 4)
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			GlobalFunc_69(&(Local_2574[iVar0 /*5*/]));
			iVar0++;
		}
	}
	iLocal_2855 = 0;
	iLocal_2856 = 0;
	func_327(0);
}



void func_499(int iParam0)//Position - 0x3CD0F
{
	struct<3> Var0;
	struct<3> Var3;
	struct<6> Var6;
	var uVar12;
	
	func_537();
	if (GlobalFunc_4924(Local_2574[0 /*5*/]) && GlobalFunc_4924(Local_2574[1 /*5*/]))
	{
		func_533();
		func_510();
	}
	Var6 = { GlobalFunc_560() };
	switch (iParam0)
	{
		case 2:
			if (!MISC::IS_POSITION_OCCUPIED(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2554, 0f, 3f, 0f), 0.1f, 0, 1, 0, 0, 0, 0, 0))
			{
				iLocal_2288 = 0;
				if (func_507(2, 2.5f, 2.5f, 2.5f, 0))
				{
					iLocal_2841 = 2;
				}
				if (iLocal_2230 == 0 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_2554, -70.08491f, 298.5583f, 104.7803f, -62.14436f, 295.8383f, 108.3729f, 5.5f, 0, 1, 0))
				{
					if (CAM::IS_SCREEN_FADED_IN())
					{
						if (GlobalFunc_10618(&uLocal_2632, cLocal_2907, "PAP2_WALKA", 7, 0, 0, 0))
						{
							iLocal_2230 = 1;
						}
					}
				}
				else if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_2554, 25f) && !GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_2574[0 /*5*/], 15f))
				{
					if (iLocal_2229 == 0)
					{
						iLocal_2229 = 1;
					}
					else if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_2574[0 /*5*/], 15f))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var6))
						{
							if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP2_WALKB"))
							{
								GlobalFunc_4935();
							}
						}
					}
				}
				func_504(1, 1);
			}
			else
			{
				iLocal_2288 = 1;
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_2554))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_2554, 0f, 0);
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2.997917f, 292.1497f, 109.1639f, 7.916159f, 316.1949f, 116.9194f, 40.75f, 0, 1, 0))
				{
					if (GlobalFunc_4924(Local_2574[0 /*5*/]))
					{
						TASK::TASK_LOOK_AT_ENTITY(Local_2574[0 /*5*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						TASK::TASK_USE_MOBILE_PHONE(Local_2574[0 /*5*/], 0, 1);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_2574[0 /*5*/], PLAYER::PLAYER_PED_ID(), 0);
						func_338(5);
					}
				}
			}
			break;
		
		case 3:
			if (func_507(5, 2.5f, 2.5f, 2.5f, 0))
			{
				GlobalFunc_587("CLEANUP FOLLOW BEV GUARDS");
				iLocal_2841 = 2;
			}
			func_503(&iLocal_2855, &iLocal_2857);
			func_504(0, -1);
			break;
		
		case 4:
			STREAMING::REQUEST_ANIM_DICT("cover@move@base@core");
			if (fLocal_2299 < 1f)
			{
				fLocal_2299 = 0f;
			}
			else if (fLocal_2299 < 1.8f)
			{
				fLocal_2299 = (fLocal_2299 + 0.005f);
			}
			if (fLocal_2299 > 1.8f)
			{
				fLocal_2299 = 1.8f;
			}
			STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(fLocal_2299);
			func_502();
			if (bLocal_2224 == 1)
			{
				if (func_501())
				{
					if (AUDIO::HAS_SOUND_FINISHED(iLocal_2367))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_2367, "AMBIENT_SEX", Local_2559, "PAPARAZZO_02_SOUNDSETS", 0, 0);
					}
				}
				fLocal_2296 = (fLocal_2296 + 0.005f);
				if (fLocal_2296 > 0.6f)
				{
					fLocal_2296 = 0.6f;
				}
				AUDIO::SET_VARIABLE_ON_SOUND(iLocal_2367, "ONESHOT_VOLUME", fLocal_2296);
				func_251();
				if (STREAMING::HAS_CLIP_SET_LOADED(sLocal_2909))
				{
					PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), sLocal_2909);
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -32.75797f, 319.5059f, 111.4954f, -33.26295f, 318.438f, 113.4954f, 1f, 0, 1, 0))
				{
					GlobalFunc_587("TK~~~~Player in cover spot~~~~");
					iLocal_2197++;
				}
				if (MISC::GET_GAME_TIMER() > iLocal_2177 + 200)
				{
					iLocal_2197 = iLocal_2197;
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "rcmpaparazzo_2", "idle_d", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "rcmpaparazzo_2", "idle_d") >= 0.4f)
					{
						if (iLocal_2242 == 0)
						{
							AUDIO::_SET_SYNCHRONIZED_AUDIO_EVENT_POSITION_THIS_FRAME("PAP2_IG1_POPPYSEX", Local_2559);
							GlobalFunc_587("TK************ SETTING SYNCH SCENE AUDIO POSITION THIS FRAME ************TK");
							iLocal_2242 = 1;
						}
						if (AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT("PAP2_IG1_POPPYSEX", 0) == 1)
						{
							PED::SET_PED_CAN_ARM_IK(PLAYER::PLAYER_PED_ID(), 1);
							PED::SET_PED_CAN_TORSO_IK(PLAYER::PLAYER_PED_ID(), 1);
							PED::SET_PED_CAN_TORSO_REACT_IK(PLAYER::PLAYER_PED_ID(), 1);
							iLocal_2841 = 2;
						}
					}
					if (MISC::GET_GAME_TIMER() > iLocal_2177 + 10000)
					{
						if (iLocal_2242 == 0)
						{
							AUDIO::_SET_SYNCHRONIZED_AUDIO_EVENT_POSITION_THIS_FRAME("PAP2_IG1_POPPYSEX", Local_2559);
							GlobalFunc_587("TK************ SETTING SYNCH SCENE AUDIO POSITION THIS FRAME ************TK");
							iLocal_2242 = 1;
						}
						if (AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT("PAP2_IG1_POPPYSEX", 0) == 1)
						{
							PED::SET_PED_CAN_ARM_IK(PLAYER::PLAYER_PED_ID(), 1);
							PED::SET_PED_CAN_TORSO_IK(PLAYER::PLAYER_PED_ID(), 1);
							PED::SET_PED_CAN_TORSO_REACT_IK(PLAYER::PLAYER_PED_ID(), 1);
							iLocal_2841 = 2;
						}
					}
				}
			}
			if (!bLocal_2284)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -35.76537f, 324.9915f, 111.696f, -37.2921f, 327.3263f, 113.446f, 1f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -38.16154f, 326.2457f, 111.696f, -36.30027f, 325.4161f, 113.446f, 1.25f, 0, 1, 0))
				{
					if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_2554, 2f))
					{
						TASK::TASK_STAND_STILL(iLocal_2554, -1);
						if (iLocal_2237 == 0)
						{
							if (!GlobalFunc_111())
							{
								if (!bLocal_2224)
								{
									if (GlobalFunc_10618(&uLocal_2632, cLocal_2907, "PAP2_PASS", 8, 0, 0, 0))
									{
										iLocal_2237 = 1;
									}
								}
								else
								{
									iLocal_2237 = 1;
								}
							}
						}
						iLocal_2235 = 1;
						bLocal_2284 = true;
					}
				}
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -36.52648f, 324.2847f, 111.4453f, -38.70029f, 327.4914f, 114.1953f, 3f, 0, 1, 0))
			{
				GlobalFunc_7629();
			}
			if (iLocal_2227 == 1)
			{
				if (bLocal_2284)
				{
					if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -37.84267f, 323.4267f, 100.1808f, -31.97676f, 320.6661f, 113.696f, 5.25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -35.97622f, 326.2021f, 111.1961f, -37.2049f, 325.1476f, 113.4954f, 1f, 0, 1, 0)) || GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_2554, 1.8f))
					{
						if (bLocal_2224 == 0)
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 128);
							HUD::CLEAR_PRINTS();
							PED::SET_PED_CAN_ARM_IK(PLAYER::PLAYER_PED_ID(), 0);
							PED::SET_PED_CAN_TORSO_IK(PLAYER::PLAYER_PED_ID(), 0);
							PED::SET_PED_CAN_TORSO_REACT_IK(PLAYER::PLAYER_PED_ID(), 0);
							PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
							if (STREAMING::HAS_CLIP_SET_LOADED(sLocal_2909))
							{
								PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), sLocal_2909);
							}
							else
							{
								STREAMING::REQUEST_CLIP_SET(sLocal_2909);
							}
							WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
							func_251();
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_2305))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_2305, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
							}
							if (!PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
							{
								PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 1, "DEFAULT_ACTION");
							}
							if ((((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -35.55285f, 324.4431f, 111.696f, -37.76319f, 327.7456f, 113.696f, 1f, 0, 1, 0) || TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID())) || TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
							{
								GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), -37.0561f, 326.647f, 111.696f, 203.1247f, 0, 1);
								PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 0);
							}
							Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_2554, 1) };
							Var3 = { -37.22483f, 325.5313f, 112.696f };
							if (((Var0.x < (Var3.x - 0.2f) || Var0.x > (Var3.x + 0.2f)) || Var0.f_1 < (Var3.f_1 - 0.2f)) || Var0.f_1 > (Var3.f_1 + 0.2f))
							{
								GlobalFunc_5705(iLocal_2554, -39.2954f, 328.3034f, 111.696f, 218.8305f, 0, 1);
							}
							TASK::OPEN_SEQUENCE_TASK(&uVar12);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -33.8491f, 319.335f, 111.696f, 1.4f, -1, 1f, 1024, 184.4715f);
							TASK::TASK_PLAY_ANIM(0, "rcmpaparazzo_2", "idle_d", 2f, -1000f, -1, 1, 0f, 0, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uVar12);
							TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar12);
							TASK::CLEAR_SEQUENCE_TASK(&uVar12);
							if (CAM::DOES_CAM_EXIST(uLocal_2814))
							{
								CAM::DESTROY_CAM(uLocal_2814, 0);
							}
							if (CAM::DOES_CAM_EXIST(uLocal_2815))
							{
								CAM::DESTROY_CAM(uLocal_2815, 0);
							}
							uLocal_2814 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
							uLocal_2815 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
							CAM::SET_CAM_PARAMS(uLocal_2814, -37.813f, 328.5478f, 113.3867f, -5.9528f, 0.0001f, -163.8669f, 23.8f, 0, 1, 1, 2);
							CAM::SET_CAM_PARAMS(uLocal_2815, -34.8325f, 320.8304f, 113.3748f, -6.6594f, -0.0146f, -161.67f, 34f, 0, 1, 1, 2);
							CAM::SET_CAM_NEAR_DOF(uLocal_2814, 2f);
							CAM::SET_CAM_FAR_DOF(uLocal_2814, 40f);
							CAM::SET_CAM_DOF_STRENGTH(uLocal_2814, 0.5f);
							CAM::SET_CAM_NEAR_DOF(uLocal_2815, 2f);
							CAM::SET_CAM_FAR_DOF(uLocal_2815, 40f);
							CAM::SET_CAM_DOF_STRENGTH(uLocal_2815, 0.5f);
							CAM::SET_CAM_ACTIVE(uLocal_2815, 1);
							CAM::SET_CAM_ACTIVE(uLocal_2814, 1);
							CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_2815, uLocal_2814, 7000, 1, 1);
							CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
							if (CAM::DOES_CAM_EXIST(uLocal_2814))
							{
								CAM::SHAKE_CAM(uLocal_2814, "HAND_SHAKE", 1f);
							}
							if (CAM::DOES_CAM_EXIST(uLocal_2815))
							{
								CAM::SHAKE_CAM(uLocal_2815, "HAND_SHAKE", 1f);
							}
							iLocal_2177 = MISC::GET_GAME_TIMER();
							bLocal_2224 = true;
							fLocal_2296 = 0.1f;
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "CAMERA_FOLEY", PLAYER::PLAYER_PED_ID(), "PAPARAZZO_02_SOUNDSETS", 0, 0);
							HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
							HUD::THEFEED_HIDE_THIS_FRAME();
						}
					}
				}
			}
			if (bLocal_2862)
			{
				func_500(&iLocal_2855, &iLocal_2856);
			}
			func_504(1, 6);
			break;
	}
}

void func_500(int iParam0, int iParam1)//Position - 0x3D61F
{
	struct<6> Var0;
	
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_2554))
	{
		if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_2554) >= 99)
		{
			if (!*iParam0)
			{
				*iParam0 = 1;
			}
		}
	}
	if (!*iParam0)
	{
		if (!GlobalFunc_111())
		{
			if (GlobalFunc_156(iLocal_2554, PLAYER::PLAYER_PED_ID(), 1) <= 16f && !PED::IS_PED_FACING_PED(iLocal_2554, PLAYER::PLAYER_PED_ID(), 90f))
			{
				*iParam0 = GlobalFunc_10618(&uLocal_2632, cLocal_2907, "PAP2_GO", 8, 0, 0, 0);
			}
		}
		else if (GlobalFunc_156(Local_2574[0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) >= 23f)
		{
			Var0 = { GlobalFunc_2209() };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
			{
				if (MISC::ARE_STRINGS_EQUAL(&Var0, "PAP2_STAFF"))
				{
					GlobalFunc_4956();
				}
			}
		}
	}
	else if (iLocal_2894 == 7)
	{
		if (!*iParam1)
		{
			if (!GlobalFunc_111())
			{
				*iParam1 = GlobalFunc_10618(&uLocal_2632, cLocal_2907, "PAP2_PREFILM", 9, 0, 0, 0);
			}
		}
	}
}

int func_501()//Position - 0x3D708
{
	float fVar0;
	
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_2170))
	{
		fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_2170);
		if (fVar0 >= 0.069f && fVar0 < (0.069f + 0.05f))
		{
			return 1;
		}
		if (fVar0 >= 0.249f && fVar0 < (0.249f + 0.05f))
		{
			return 1;
		}
		if (fVar0 >= 0.486f && fVar0 < (0.486f + 0.05f))
		{
			return 1;
		}
		if (fVar0 >= 0.668f && fVar0 < (0.668f + 0.05f))
		{
			return 1;
		}
		if (fVar0 >= 0.881f && fVar0 < (0.881f + 0.05f))
		{
			return 1;
		}
	}
	return 0;
}

void func_502()//Position - 0x3D7CE
{
	struct<6> Var0;
	
	if (GlobalFunc_111())
	{
		if (GlobalFunc_156(Local_2574[0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) > 28f || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -4.814245f, 316.4174f, 109.3984f, 2.642797f, 313.3375f, 113.1552f, 5.5f, 0, 1, 0))
		{
			Var0 = { GlobalFunc_560() };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
			{
				if (MISC::ARE_STRINGS_EQUAL(&Var0, "PAP2_STAFF"))
				{
					GlobalFunc_5105();
				}
			}
		}
	}
}

void func_503(int iParam0, int iParam1)//Position - 0x3D84D
{
	if (!*iParam0)
	{
		if (iLocal_2894 == 3 || GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_2574[0 /*5*/], 12f))
		{
			if (!GlobalFunc_111())
			{
				if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_2574[0 /*5*/], 12f))
				{
					if (GlobalFunc_10618(&uLocal_2632, cLocal_2907, "PAP2_STAIRS", 7, 0, 0, 0))
					{
						if (GlobalFunc_4924(Local_2574[0 /*5*/]))
						{
							iLocal_2178 = MISC::GET_GAME_TIMER();
							iLocal_2845[0] = 1;
							iLocal_2845[1] = 1;
							*iParam0 = 1;
						}
					}
				}
				else if (GlobalFunc_4924(Local_2574[0 /*5*/]))
				{
					iLocal_2178 = MISC::GET_GAME_TIMER();
					iLocal_2845[0] = 1;
					iLocal_2845[1] = 1;
					*iParam0 = 1;
				}
			}
		}
	}
	else if (!*iParam1)
	{
		if (!GlobalFunc_111())
		{
			if (GlobalFunc_156(Local_2574[0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) < 23f)
			{
				*iParam1 = GlobalFunc_10618(&uLocal_2632, cLocal_2907, "PAP2_STAFF", 7, 0, 0, 0);
			}
		}
	}
	else
	{
		func_502();
	}
}

void func_504(bool bParam0, int iParam1)//Position - 0x3D948
{
	struct<3> Var0;
	
	if ((GlobalFunc_4924(iLocal_2554) && !bLocal_2877) && !iLocal_2235)
	{
		if (iLocal_2894 < 8)
		{
			if (iLocal_2228 == 1)
			{
			}
			if (iLocal_2894 < 2)
			{
				Var0 = { 4f, 4f, 2.5f };
			}
			else
			{
				Var0 = { 2f, 2f, 2.5f };
			}
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_2554))
			{
				if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_2554) >= 105 && MISC::GET_GAME_TIMER() > iLocal_2199 + 1200)
				{
					if (iLocal_2234 == 0)
					{
					}
					if (!PED::GET_PED_STEALTH_MOVEMENT(iLocal_2554))
					{
						iLocal_2283 = 1;
						PED::SET_PED_STEALTH_MOVEMENT(iLocal_2554, 1, "DEFAULT_ACTION");
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_2554, &Local_2903, 0, 1032, -1);
						GlobalFunc_587("MAKE BEV STEALTH");
					}
					else if (iLocal_2283)
					{
						iLocal_2283 = 0;
					}
				}
				if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_2554) >= 107)
				{
				}
				if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_2554) < 100)
				{
					PED::SET_PED_RESET_FLAG(iLocal_2554, 247, 1);
				}
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_2554, Local_2485[iLocal_2894 /*3*/], Var0, 0, 1, 0))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_2554) && !TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_2554))
				{
					if (iLocal_2894 < 2)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_2554) < 41)
						{
							TASK::WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(iLocal_2554);
						}
						else if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 1.9f)
						{
							if ((!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_2554, 5f) && TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_2554) < 35) && !PED::IS_PED_FACING_PED(iLocal_2554, PLAYER::PLAYER_PED_ID(), 90f))
							{
								TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_2554, 2f, 0);
							}
							else
							{
								TASK::WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(iLocal_2554);
							}
						}
						else if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_2554) < 35)
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_2554, 1f, 0);
						}
					}
					else if (GlobalFunc_4924(Local_2574[0 /*5*/]))
					{
						if (GlobalFunc_155(iLocal_2554, Local_2574[0 /*5*/], 25f))
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_2554, Local_2574[0 /*5*/], 8000, 0, 2);
						}
						if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(&Local_2903, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &iLocal_2210))
						{
							if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_2554) < iLocal_2210 && !GlobalFunc_155(iLocal_2554, Local_2574[0 /*5*/], 8f))
							{
								TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_2554, 2f, 0);
							}
							else
							{
								TASK::WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(iLocal_2554);
							}
						}
					}
				}
				else if (GlobalFunc_155(iLocal_2554, PLAYER::PLAYER_PED_ID(), 7f))
				{
					if (STREAMING::HAS_CLIP_SET_LOADED(sLocal_2908))
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_2554, -38.226f, 320.3186f, 111.0512f, -36.41312f, 323.9704f, 113.6954f, 4.75f, 0, 1, 0))
						{
							TASK::TASK_CLEAR_LOOK_AT(iLocal_2554);
							PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(iLocal_2554, sLocal_2908);
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_2554, &Local_2903, 0, 8, -1);
							iLocal_2199 = MISC::GET_GAME_TIMER();
							iLocal_2228 = 0;
						}
					}
				}
			}
			else if (!bParam0)
			{
				if (iLocal_2894 < 8)
				{
					iLocal_2894++;
				}
			}
			else if (iParam1 > -1)
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_2554) && TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_2554) >= 112)
				{
				}
				else if (!func_488(iLocal_2554, 7f, 7f, 3.5f) || !func_506(Local_2485[iLocal_2894 /*3*/], 13f, 13f, 5f))
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -41.70227f, 336.294f, 111.172f, -17.27828f, 324.6822f, 115.1379f, 12.5f, 0, 1, 0))
					{
						if (!GlobalFunc_171(iLocal_2554, PLAYER::PLAYER_PED_ID(), 40f) && iLocal_2894 <= 6)
						{
							if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_2554))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_2554, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								TASK::WAYPOINT_PLAYBACK_PAUSE(iLocal_2554, 1, 0);
							}
							iLocal_2228 = 1;
						}
					}
					if (bLocal_2862)
					{
						iLocal_2890++;
						if (iLocal_2890 > 125)
						{
							bLocal_2862 = false;
							iLocal_2890 = 0;
						}
					}
					else if (iLocal_2863)
					{
						iLocal_2891++;
						if (iLocal_2891 > 220)
						{
							iLocal_2863 = 0;
							iLocal_2891 = 0;
						}
					}
				}
				else
				{
					iLocal_2890 = 0;
					if (iLocal_2894 < 8)
					{
						iLocal_2894++;
					}
				}
			}
		}
	}
}


int func_506(struct<3> Param0, struct<3> Param3)//Position - 0x3DD7B
{
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param0, Param3, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_507(int iParam0, struct<3> Param1, bool bParam4)//Position - 0x3DDA9
{
	if (!bParam4)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_2554, Local_2485[iParam0 /*3*/], Param1, 0, 1, 0) || func_506(Local_2485[iParam0 /*3*/], Param1))
		{
			return 1;
		}
	}
	else if (ENTITY::IS_ENTITY_AT_COORD(iLocal_2554, Local_2485[iParam0 /*3*/], 2.5f, 2.5f, 2.5f, 0, 1, 0))
	{
		if (func_488(iLocal_2554, 2.5f, 2.5f, 2.5f))
		{
			iLocal_2890 = 0;
			return 1;
		}
		else
		{
			if (bLocal_2862 && iLocal_2852)
			{
				iLocal_2890++;
				if (iLocal_2890 > 100)
				{
					bLocal_2862 = false;
					iLocal_2890 = 0;
				}
			}
			if (!iLocal_2863)
			{
				iLocal_2891++;
				if (iLocal_2891 > 175)
				{
					func_509();
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_2554, 242628503) == 7)
			{
				iLocal_2863 = 0;
				iLocal_2891 = 0;
			}
			if (bLocal_2224 == 0)
			{
				func_508("PAP2_08");
			}
		}
	}
	return 0;
}

void func_508(char* sParam0)//Position - 0x3DEA5
{
	if (!iLocal_2852)
	{
		GlobalFunc_164(sParam0, 7500, 0);
		iLocal_2852 = 1;
	}
}

void func_509()//Position - 0x3DEC2
{
	var uVar0;
	
	if (!iLocal_2863)
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_2554, 242628503) != 1 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_2554, 242628503) != 0)
		{
			TASK::OPEN_SEQUENCE_TASK(&uVar0);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			if (!func_488(iLocal_2554, 10f, 10f, 10f))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
			}
			if (iLocal_2894 == 7)
			{
				TASK::TASK_TURN_PED_TO_FACE_COORD(0, Local_2476, 0);
			}
			TASK::CLOSE_SEQUENCE_TASK(uVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_2554, uVar0);
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
		}
		iLocal_2863 = 1;
	}
}

void func_510()//Position - 0x3DF57
{
	struct<6> Var0;
	
	func_514();
	Var0 = { GlobalFunc_560() };
	switch (iLocal_2845[1])
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
			{
				func_513(Var0);
			}
			if (ENTITY::IS_ENTITY_AT_COORD(Local_2574[1 /*5*/], 15.7815f, 333.5496f, 109.919f, 4f, 4f, 2f, 0, 1, 0))
			{
			}
			break;
		
		case 3:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
			{
				func_513(Var0);
				if (!MISC::ARE_STRINGS_EQUAL(&Var0, "PAP2_"))
				{
					if (func_313(7, Local_2470, 0))
					{
						TASK::CLEAR_PED_TASKS(Local_2574[1 /*5*/]);
						func_512(Local_2620[iLocal_2631 /*3*/]);
						iLocal_2845[1] = 4;
					}
				}
			}
			break;
		
		case 4:
			switch (iLocal_2849)
			{
				case 0:
					if (ENTITY::IS_ENTITY_AT_COORD(Local_2574[1 /*5*/], Local_2620[iLocal_2631 /*3*/], 1f, 1f, 1.5f, 0, 1, 0))
					{
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(Local_2574[1 /*5*/], 713668775) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_2574[1 /*5*/], 713668775) != 0)
					{
						func_512(Local_2620[iLocal_2631 /*3*/]);
					}
					break;
				
				case 1:
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_2574[1 /*5*/], 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_2574[1 /*5*/], 242628503) != 0)
					{
						iLocal_2631 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
						func_512(Local_2620[iLocal_2631 /*3*/]);
					}
					break;
			}
			break;
		
		case 8:
			if (GlobalFunc_156(Local_2574[1 /*5*/], PLAYER::PLAYER_PED_ID(), 1) < 20f)
			{
				if (GlobalFunc_10618(&uLocal_2632, cLocal_2907, "PAP2_BSFLEEB", 9, 0, 0, 0))
				{
					iLocal_2845[0] = 4;
					iLocal_2845[1] = 4;
					bLocal_2876 = true;
				}
			}
			else
			{
				iLocal_2845[0] = 4;
				iLocal_2845[1] = 4;
				bLocal_2876 = true;
			}
			break;
		
		case 5:
			if (GlobalFunc_156(Local_2574[1 /*5*/], PLAYER::PLAYER_PED_ID(), 1) < 12f)
			{
				if (GlobalFunc_10618(&uLocal_2632, cLocal_2907, "PAP2_BSFLEE1", 9, 0, 0, 0))
				{
					func_511(Local_2574[0 /*5*/]);
					bLocal_2264 = true;
					iLocal_2845[0] = 9;
					iLocal_2845[1] = 9;
				}
			}
			else
			{
				bLocal_2264 = true;
				func_511(Local_2574[0 /*5*/]);
				iLocal_2845[0] = 9;
				iLocal_2845[1] = 9;
			}
			break;
		
		case 7:
			if (GlobalFunc_156(Local_2574[1 /*5*/], PLAYER::PLAYER_PED_ID(), 1) < 12f)
			{
				if (GlobalFunc_10618(&uLocal_2632, cLocal_2907, "PAP2_BSFLEE2", 9, 0, 0, 0))
				{
					bLocal_2264 = true;
					func_511(Local_2574[0 /*5*/]);
					iLocal_2845[0] = 9;
					iLocal_2845[1] = 9;
				}
			}
			else
			{
				bLocal_2264 = true;
				func_511(Local_2574[0 /*5*/]);
				iLocal_2845[0] = 9;
				iLocal_2845[1] = 9;
			}
			break;
		
		case 6:
			if (GlobalFunc_156(Local_2574[1 /*5*/], PLAYER::PLAYER_PED_ID(), 1) < 12f)
			{
				if (GlobalFunc_10618(&uLocal_2632, cLocal_2907, "PAP2_BSFLEE3", 9, 0, 0, 0))
				{
					bLocal_2264 = true;
					func_511(Local_2574[0 /*5*/]);
					iLocal_2845[0] = 9;
					iLocal_2845[1] = 9;
				}
			}
			else
			{
				bLocal_2264 = true;
				func_511(Local_2574[0 /*5*/]);
				iLocal_2845[0] = 9;
				iLocal_2845[1] = 9;
			}
			break;
		
		case 9:
			bLocal_2876 = true;
			break;
	}
}

void func_511(int iParam0)//Position - 0x3E2AD
{
	if (GlobalFunc_4924(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1))
		{
			if (GlobalFunc_4947(PED::GET_VEHICLE_PED_IS_IN(iParam0, 1)))
			{
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(iParam0, PED::GET_VEHICLE_PED_IS_IN(iParam0, 1), PLAYER::PLAYER_PED_ID(), 8, 100f, 786468, 100f, 100f, 1);
			}
		}
		else
		{
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 4, 1);
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1805844857) != 1)
			{
				TASK::CLEAR_PED_TASKS(iParam0);
				TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 1);
			}
		}
		PED::SET_PED_KEEP_TASK(iParam0, 1);
	}
}

void func_512(struct<3> Param0)//Position - 0x3E336
{
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_2574[1 /*5*/], Param0, 1f, -1, 1048576000, 0, 1193033728);
	iLocal_2849 = 0;
}

void func_513(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x3E35D
{
	int iVar0;
	
	if (MISC::ARE_STRINGS_EQUAL(&uParam0, "PAP2_STAFF"))
	{
		iVar0 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		if (TASK::GET_SCRIPT_TASK_STATUS(Local_2574[1 /*5*/], -2017877118) != 1)
		{
			switch (iVar0)
			{
				case 6:
					break;
				
				case 8:
					break;
				}
			}
	}
}

void func_514()//Position - 0x3E3A5
{
	if (iLocal_2845[0] <= 4 && iLocal_2845[1] <= 4)
	{
		if ((func_532(Local_2574[1 /*5*/]) || GlobalFunc_155(Local_2574[1 /*5*/], PLAYER::PLAYER_PED_ID(), 12f)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 14.25519f, 335.3912f, 109.1308f, 24.29033f, 330.667f, 113.9856f, 3.5f, 0, 1, 0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				iLocal_2845[1] = 5;
			}
			else
			{
				iLocal_2845[1] = 8;
			}
			GlobalFunc_4956();
		}
		if (func_516(Local_2574[1 /*5*/], 1, 1116471296, 1126825984, 0, 0, 0, 0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				func_511(Local_2574[1 /*5*/]);
				iLocal_2845[1] = 7;
			}
			else
			{
				func_515(Local_2574[1 /*5*/]);
				iLocal_2845[1] = 6;
			}
			GlobalFunc_4956();
		}
	}
}

void func_515(int iParam0)//Position - 0x3E492
{
	if (GlobalFunc_4924(iParam0))
	{
		TASK::CLEAR_PED_TASKS(iParam0);
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iParam0, 100f, 0);
		PED::SET_PED_KEEP_TASK(iParam0, 1);
	}
}

int func_516(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x3E4BC
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
		else if (func_517(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_517(int iParam0, float fParam1)//Position - 0x3E577
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
				if (func_518(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_518(int iParam0, float fParam1)//Position - 0x3E5ED
{
	return func_519(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_519(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x3E605
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_525(iParam0, iParam1);
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
		iVar4 = func_522();
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



int func_522()//Position - 0x3E8B7
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



int func_525(int iParam0, int iParam1)//Position - 0x3E9AD
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







int func_532(int iParam0)//Position - 0x3ED86
{
	if (GlobalFunc_4924(iParam0))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	return 0;
}

void func_533()//Position - 0x3EDA9
{
	struct<6> Var0;
	struct<6> Var6;
	var uVar12;
	
	func_536();
	Var0 = { GlobalFunc_560() };
	Var6 = { GlobalFunc_2209() };
	switch (iLocal_2845[0])
	{
		case 0:
			break;
		
		case 1:
			if (iLocal_2894 == 4 || func_506(Local_2485[3 /*3*/], 5f, 2f, 2.5f))
			{
			}
			break;
		
		case 2:
			func_535();
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
			{
				func_534(Var0);
			}
			if (ENTITY::IS_ENTITY_AT_COORD(Local_2574[0 /*5*/], 15.7815f, 333.5496f, 109.919f, 4f, 4f, 2f, 0, 1, 0))
			{
				TASK::TASK_LOOK_AT_ENTITY(Local_2574[0 /*5*/], Local_2574[1 /*5*/], -1, 0, 2);
				iLocal_2845[0] = 3;
			}
			break;
		
		case 3:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0) && !MISC::IS_STRING_NULL_OR_EMPTY(&Var6))
			{
				func_534(Var0);
				if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP2_STAFF_11") || !MISC::ARE_STRINGS_EQUAL(&Var0, "PAP2_STAFF"))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_2574[0 /*5*/], 242628503) != 1)
					{
						TASK::TASK_CLEAR_LOOK_AT(Local_2574[0 /*5*/]);
						TASK::OPEN_SEQUENCE_TASK(&uVar12);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 18.6864f, 334.4601f, 109.9186f, 1f, -1, 1f, 1, 1193033728);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 22.6585f, 333.7577f, 109.9186f, 1f, -1, 1f, 1, 1193033728);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 24.7426f, 334.8422f, 110.49f, 1f, -1, 1f, 1, 1193033728);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 31.3388f, 335.7056f, 114.3914f, 1f, -1, 1f, 1, 1193033728);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 11.6968f, 345.9524f, 114.3914f, 1f, -1, 1f, 1, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(uVar12);
						TASK::TASK_PERFORM_SEQUENCE(Local_2574[0 /*5*/], uVar12);
						TASK::CLEAR_SEQUENCE_TASK(&uVar12);
					}
				}
			}
			break;
		
		case 4:
			switch (iLocal_2848)
			{
				case 0:
					if (ENTITY::IS_ENTITY_AT_COORD(Local_2574[0 /*5*/], Local_2594[iLocal_2630 /*5*/], 1f, 1f, 1.5f, 0, 1, 0))
					{
						switch (Local_2594[iLocal_2630 /*5*/].f_4)
						{
							case 1:
								break;
							
							case 2:
								break;
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(Local_2574[0 /*5*/], 713668775) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_2574[0 /*5*/], 713668775) != 0)
					{
					}
					break;
				
				case 2:
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_2574[0 /*5*/], 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_2574[0 /*5*/], 242628503) != 0)
					{
						iLocal_2630 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
					}
					break;
				
				case 1:
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_2574[0 /*5*/], 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_2574[0 /*5*/], 242628503) != 0)
					{
						iLocal_2630 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
					}
					break;
			}
			break;
		
		case 8:
			if (GlobalFunc_156(Local_2574[0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) < 12f)
			{
				if (GlobalFunc_10618(&uLocal_2632, cLocal_2907, "PAP2_MDFLEEB", 9, 0, 0, 0))
				{
					iLocal_2845[0] = 4;
					iLocal_2845[1] = 4;
					bLocal_2876 = true;
				}
			}
			else
			{
				iLocal_2845[0] = 4;
				iLocal_2845[1] = 4;
				bLocal_2876 = true;
			}
			break;
		
		case 5:
			if (GlobalFunc_156(Local_2574[0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) < 12f)
			{
				if (GlobalFunc_10618(&uLocal_2632, cLocal_2907, "PAP2_MDFLEE1", 9, 0, 0, 0))
				{
					func_511(Local_2574[1 /*5*/]);
					iLocal_2845[0] = 9;
					iLocal_2845[1] = 9;
				}
			}
			else
			{
				func_511(Local_2574[1 /*5*/]);
				iLocal_2845[0] = 9;
				iLocal_2845[1] = 9;
			}
			break;
		
		case 7:
			if (GlobalFunc_156(Local_2574[0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) < 12f)
			{
				if (GlobalFunc_10618(&uLocal_2632, cLocal_2907, "PAP2_MDFLEE2", 9, 0, 0, 0))
				{
					func_511(Local_2574[1 /*5*/]);
					iLocal_2845[0] = 9;
					iLocal_2845[1] = 9;
				}
			}
			else
			{
				func_511(Local_2574[1 /*5*/]);
				iLocal_2845[0] = 9;
				iLocal_2845[1] = 9;
			}
			break;
		
		case 6:
			if (GlobalFunc_156(Local_2574[0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) < 12f)
			{
				if (GlobalFunc_10618(&uLocal_2632, cLocal_2907, "PAP2_MDFLEE3", 9, 0, 0, 0))
				{
					func_515(Local_2574[1 /*5*/]);
					iLocal_2845[0] = 9;
					iLocal_2845[1] = 9;
				}
			}
			else
			{
				func_515(Local_2574[1 /*5*/]);
				iLocal_2845[0] = 9;
				iLocal_2845[1] = 9;
			}
			break;
		
		case 9:
			bLocal_2876 = true;
			break;
	}
}

void func_534(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x3F22B
{
	int iVar0;
	
	if (MISC::ARE_STRINGS_EQUAL(&uParam0, "PAP2_STAFF"))
	{
		iVar0 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		if (TASK::GET_SCRIPT_TASK_STATUS(Local_2574[0 /*5*/], -2017877118) != 1)
		{
			switch (iVar0)
			{
				case 5:
					break;
				
				case 9:
					break;
				
				case 11:
					break;
				}
			}
	}
}

void func_535()//Position - 0x3F27C
{
	var uVar0;
	
	if (MISC::GET_GAME_TIMER() > iLocal_2178 + 13000 && MISC::GET_GAME_TIMER() < iLocal_2178 + 15000)
	{
		if (GlobalFunc_4924(Local_2574[0 /*5*/]))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(Local_2574[0 /*5*/], 242628503) != 1)
			{
				TASK::OPEN_SEQUENCE_TASK(&uVar0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 15.7815f, 333.5496f, 109.919f, 1.2f, 30000, 1048576000, 0, 1193033728);
				TASK::CLOSE_SEQUENCE_TASK(uVar0);
				TASK::TASK_PERFORM_SEQUENCE(Local_2574[0 /*5*/], uVar0);
				TASK::CLEAR_SEQUENCE_TASK(&uVar0);
			}
		}
	}
}

void func_536()//Position - 0x3F307
{
	if (iLocal_2845[0] <= 4 && iLocal_2845[1] <= 4)
	{
		if (func_532(Local_2574[0 /*5*/]))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				iLocal_2845[0] = 5;
			}
			else
			{
				iLocal_2845[0] = 8;
			}
			TASK::TASK_LOOK_AT_ENTITY(Local_2574[0 /*5*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			GlobalFunc_4956();
		}
		else if (PED::IS_PED_FACING_PED(Local_2574[0 /*5*/], PLAYER::PLAYER_PED_ID(), 90f) && GlobalFunc_155(Local_2574[0 /*5*/], PLAYER::PLAYER_PED_ID(), 15f))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				iLocal_2845[0] = 5;
			}
			else
			{
				iLocal_2845[0] = 8;
			}
			TASK::TASK_LOOK_AT_ENTITY(Local_2574[0 /*5*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			GlobalFunc_4956();
		}
		if (func_516(Local_2574[0 /*5*/], 1, 1116471296, 1126825984, 0, 0, 0, 0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				func_511(Local_2574[0 /*5*/]);
				iLocal_2845[0] = 7;
			}
			else
			{
				func_511(Local_2574[0 /*5*/]);
				func_515(Local_2574[1 /*5*/]);
				iLocal_2845[0] = 6;
			}
			GlobalFunc_4956();
		}
	}
}

void func_537()//Position - 0x3F426
{
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), Local_2479, Local_2482, 0, 1))
		{
			func_338(6);
		}
	}
	if (func_538(Local_2479, Local_2482))
	{
		func_338(6);
	}
}

int func_538(struct<3> Param0, struct<3> Param3)//Position - 0x3F46B
{
	if (func_28(PLAYER::PLAYER_PED_ID(), func_539(PLAYER::PLAYER_PED_ID())))
	{
		if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), Param0, Param3, 0, 1, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_539(int iParam0)//Position - 0x3F4A1
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
		if (GlobalFunc_115(iVar0))
		{
			return iVar0;
		}
	}
	return 0;
}

void func_540()//Position - 0x3F4CB
{
	if (!bLocal_2876 && !bLocal_2877)
	{
		if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_2840 != 11)
			{
				if (GlobalFunc_4924(Local_2569))
				{
					if (func_516(Local_2569, 1, 1116471296, 1126825984, 0, 0, 0, 0))
					{
						if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
						{
							TASK::TASK_SMART_FLEE_PED(Local_2569, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
						}
						else
						{
							TASK::TASK_COMBAT_PED(Local_2569, PLAYER::PLAYER_PED_ID(), 0, 16);
						}
						bLocal_2876 = true;
					}
				}
				if (GlobalFunc_4924(Local_2559))
				{
					if (GlobalFunc_4924(Local_2564))
					{
						if (func_516(Local_2559, 1, 1116471296, 1126825984, 0, 0, 0, 0))
						{
							bLocal_2876 = true;
						}
					}
				}
			}
			if (GlobalFunc_4924(Local_2559))
			{
				if ((func_488(Local_2559, 10f, 10f, 1.5f) && iLocal_2840 != 11) && !iLocal_2864)
				{
					HUD::CLEAR_PRINTS();
					iLocal_2864 = 1;
				}
			}
			if (GlobalFunc_4924(Local_2559))
			{
				if (GlobalFunc_4924(Local_2564))
				{
					if ((func_488(Local_2559, 6f, 6f, 2.5f) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -42.5662f, 301.8173f, 111.6957f, -37.569f, 313.1216f, 111.6957f, 5f, 0, 0, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -44.4977f, 296.7267f, 111.5461f, -23.9906f, 291.6258f, 111.5461f, 9.5f, 0, 0, 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_2559, 0);
						ENTITY::FREEZE_ENTITY_POSITION(Local_2564, 0);
						bLocal_2876 = true;
					}
					if (iLocal_2235 == 0 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -33.33354f, 324.2515f, 111.6747f, -36.29159f, 317.2282f, 115.4458f, 7.75f, 0, 0, 0))
					{
						bLocal_2876 = true;
					}
				}
			}
		}
		if (bLocal_2876 || bLocal_2877)
		{
			GlobalFunc_4935();
		}
	}
}

void func_541()//Position - 0x3F6AC
{
	int iVar0;
	char* sVar1;
	
	iVar0 = 12;
	sVar1 = "PAP2_INACT";
	if (iLocal_2894 == 7)
	{
		sVar1 = "PAP2_INACT2";
		iVar0 = 5;
	}
	if (!bLocal_2862)
	{
		if (GlobalFunc_156(iLocal_2554, PLAYER::PLAYER_PED_ID(), 1) < IntToFloat(iVar0))
		{
			if (!GlobalFunc_111())
			{
				if (iLocal_2894 > 3)
				{
					bLocal_2862 = GlobalFunc_10618(&uLocal_2632, cLocal_2907, sVar1, 9, 0, 0, 0);
				}
				else
				{
					bLocal_2862 = true;
				}
			}
		}
	}
}

void func_542()//Position - 0x3F714
{
	if (iLocal_2870)
	{
		if (func_313(10, Local_2470, 0))
		{
			if (func_313(2, Local_2559.f_1, Local_2559.f_4) && func_313(3, Local_2564.f_1, Local_2564.f_4))
			{
				iLocal_2870 = 0;
				iLocal_2227 = 1;
			}
		}
	}
}

void func_543()//Position - 0x3F763
{
	struct<6> Var0;
	
	if (iLocal_2320 == 1)
	{
		if (GlobalFunc_4924(Local_2574[0 /*5*/]))
		{
			Var0 = { GlobalFunc_560() };
			if (iLocal_2211 == 0)
			{
				if (GlobalFunc_4924(iLocal_2554) && !iLocal_2288)
				{
					if (GlobalFunc_155(Local_2574[0 /*5*/], iLocal_2554, 12f) || GlobalFunc_155(Local_2574[0 /*5*/], PLAYER::PLAYER_PED_ID(), 12f))
					{
						iLocal_2188 = MISC::GET_GAME_TIMER();
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_2574[0 /*5*/], 16.6655f, 332.9557f, 109.9194f, 1.3f, -1, 2f, 1024, 351.8812f);
						iLocal_2211 = 1;
					}
				}
			}
			if (iLocal_2211 == 1)
			{
				if (MISC::ARE_STRINGS_EQUAL(&Var0, "PAP2_STAFF"))
				{
					if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() > 2)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_2574[0 /*5*/], 16.6655f, 332.9557f, 109.9194f, 1.3f, -1, 2f, 1024, 351.8812f);
						iLocal_2211 = 2;
					}
				}
				if (!GlobalFunc_111())
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_2574[0 /*5*/], 16.6655f, 332.9557f, 109.9194f, 1.3f, -1, 2f, 1024, 351.8812f);
					iLocal_2211 = 2;
				}
			}
			if (iLocal_2211 == 2)
			{
				if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Pap2_Maid"))
				{
					if (!GlobalFunc_111() && MISC::GET_GAME_TIMER() > iLocal_2188 + 5000)
					{
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_2574[0 /*5*/], "Pap2_Maid", 0, 8, -1);
						iLocal_2211 = 3;
					}
				}
			}
		}
	}
}


void func_545()//Position - 0x3F932
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_2307[5]))
	{
		if (GlobalFunc_4924(uLocal_2307[5]))
		{
			GlobalFunc_661(uLocal_2307[5], &uLocal_2401, -1, 0, 0, 0, -1082130432, 0);
			if ((PED::IS_PED_RAGDOLL(uLocal_2307[5]) || func_516(uLocal_2307[5], 1, 1116471296, 1126825984, 0, 0, 0, 0)) || PED::IS_PED_FLEEING(uLocal_2307[5]))
			{
				bLocal_2264 = true;
				bLocal_2876 = true;
			}
		}
		else
		{
			bLocal_2264 = true;
			bLocal_2876 = true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_2307[1]))
	{
		if (GlobalFunc_4924(uLocal_2307[1]))
		{
			GlobalFunc_661(uLocal_2307[1], &uLocal_2369, -1, 0, 0, 0, -1082130432, 0);
			if ((PED::IS_PED_RAGDOLL(uLocal_2307[1]) || func_516(uLocal_2307[1], 1, 1116471296, 1126825984, 0, 0, 0, 0)) || PED::IS_PED_FLEEING(uLocal_2307[1]))
			{
				bLocal_2264 = true;
				bLocal_2876 = true;
			}
		}
		else
		{
			bLocal_2264 = true;
			bLocal_2876 = true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_2307[3]))
	{
		if (GlobalFunc_4924(uLocal_2307[3]))
		{
			GlobalFunc_661(uLocal_2307[3], &uLocal_2385, -1, 0, 0, 0, -1082130432, 0);
			if ((PED::IS_PED_RAGDOLL(uLocal_2307[3]) || func_516(uLocal_2307[3], 1, 1116471296, 1126825984, 0, 0, 0, 0)) || PED::IS_PED_FLEEING(uLocal_2307[3]))
			{
				bLocal_2264 = true;
				bLocal_2876 = true;
			}
		}
		else
		{
			bLocal_2264 = true;
			bLocal_2876 = true;
		}
	}
}

void func_546()//Position - 0x3FABD
{
	if (GlobalFunc_4924(Local_2574[1 /*5*/]) && GlobalFunc_4924(Local_2574[0 /*5*/]))
	{
		if (((STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_busboy_01")) && STREAMING::HAS_MODEL_LOADED(joaat("s_f_m_maid_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_m_beach_02"))) && STREAMING::HAS_CLIP_SET_LOADED("move_f@sexy@a"))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_2574[1 /*5*/], "PAPARAZZO_HECTOR", 0);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_02_INTRO"))
			{
				AUDIO::START_AUDIO_SCENE("PAPARAZZO_02_INTRO");
			}
			uLocal_2307[2] = PED::CREATE_PED(26, joaat("s_m_y_busboy_01"), 15.1052f, 336.1419f, 109.9186f, 237.5365f, 1, 1);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_2307[2], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_2307[2], 3, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_2307[2], 4, 0, 0, 0);
			TASK::TASK_START_SCENARIO_IN_PLACE(uLocal_2307[2], "WORLD_HUMAN_SMOKING", 0, 0);
			uLocal_2307[3] = PED::CREATE_PED(26, joaat("s_f_m_maid_01"), 16.38105f, 314.906f, 110.9187f, -119.9283f, 1, 1);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_2307[3], 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_2307[3], 2, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_2307[3], 3, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_2307[3], 4, 0, 2, 0);
			TASK::TASK_START_SCENARIO_IN_PLACE(uLocal_2307[3], "WORLD_HUMAN_MAID_CLEAN", 0, 0);
			uLocal_2307[4] = PED::CREATE_PED(26, joaat("a_m_m_beach_02"), 20.0922f, 336.7069f, 114.3914f, 154.9176f, 1, 1);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_2307[4], 0, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_2307[4], 3, 1, 4, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_2307[4], 4, 0, 5, 0);
			TASK::TASK_START_SCENARIO_IN_PLACE(uLocal_2307[4], "WORLD_HUMAN_AA_COFFEE", 0, 0);
			uLocal_2307[5] = PED::CREATE_PED(26, joaat("a_m_m_beach_02"), -8.6062f, 337.2177f, 112.161f, 206.6986f, 1, 1);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_2307[5], 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_2307[5], 3, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_2307[5], 4, 0, 0, 0);
			TASK::TASK_START_SCENARIO_IN_PLACE(uLocal_2307[5], "WORLD_HUMAN_DRINKING", 0, 0);
			TASK::TASK_START_SCENARIO_AT_POSITION(Local_2574[1 /*5*/], "WORLD_HUMAN_SEAT_STEPS", 16.984f, 336.9486f, 110.319f, 157.6965f, 0, 0, 1);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_2574[1 /*5*/], 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_busboy_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_f_m_maid_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_m_beach_02"));
			PED::SET_PED_MOVEMENT_CLIPSET(Local_2574[0 /*5*/], "move_f@sexy@a", 1048576000);
			iLocal_2320 = 1;
		}
	}
}

void func_547()//Position - 0x3FD34
{
	if (iLocal_2321 == 0)
	{
		STREAMING::REQUEST_MODEL(joaat("s_m_y_busboy_01"));
		STREAMING::REQUEST_MODEL(joaat("s_f_m_maid_01"));
		STREAMING::REQUEST_MODEL(joaat("a_m_m_beach_02"));
		STREAMING::REQUEST_CLIP_SET("move_f@sexy@a");
		TASK::REQUEST_WAYPOINT_RECORDING("Pap2_Maid");
		iLocal_2321 = 1;
	}
}

void func_548()//Position - 0x3FD73
{
	if (!GlobalFunc_663("PAP2_08", 0, 0) && !bLocal_2224)
	{
		if (iLocal_2217 < 4)
		{
			if (!GlobalFunc_111())
			{
				if (MISC::GET_GAME_TIMER() > iLocal_2216 + 10000)
				{
					if (GlobalFunc_156(iLocal_2554, PLAYER::PLAYER_PED_ID(), 1) < 30f)
					{
						if (GlobalFunc_10618(&uLocal_2632, cLocal_2907, "PAP2_INACT2", 7, 0, 0, 0))
						{
							iLocal_2216 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 2000));
							iLocal_2217++;
						}
					}
				}
			}
		}
		else if (!GlobalFunc_111())
		{
			if (MISC::GET_GAME_TIMER() > iLocal_2216 + 10000)
			{
				if (GlobalFunc_10618(&uLocal_2632, cLocal_2907, "PAP2_FAILCAM", 7, 0, 0, 0))
				{
				}
				func_338(4);
			}
		}
	}
}

void func_549()//Position - 0x3FE24
{
	iLocal_2195 = 2;
	if (iLocal_2227 == 1)
	{
		if (iLocal_2195 == 1)
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_2172))
			{
				AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(uLocal_2172);
				iLocal_2195 = 2;
			}
		}
		else if (iLocal_2195 == 0)
		{
			if (iLocal_2242 == 0)
			{
				AUDIO::_SET_SYNCHRONIZED_AUDIO_EVENT_POSITION_THIS_FRAME("PAP2_IG1_POPPYSEX", Local_2559);
				GlobalFunc_587("TK************ SETTING SYNCH SCENE AUDIO POSITION THIS FRAME ************TK");
				iLocal_2242 = 1;
			}
			if (AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT("PAP2_IG1_POPPYSEX", 0) == 1)
			{
				func_249(1);
				iLocal_2195 = 1;
			}
		}
		else if (iLocal_2195 == 2)
		{
			if (GlobalFunc_4924(Local_2559))
			{
				if (bLocal_2224 == 0)
				{
					func_249(0);
				}
			}
		}
	}
}






void func_555()//Position - 0x3FF5B
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	GlobalFunc_5077();
	func_563();
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::THEFEED_HIDE_THIS_FRAME();
	if (!func_562())
	{
		return;
	}
	if (!iLocal_2872)
	{
		if (func_241(1, bLocal_2853))
		{
			iLocal_2872 = 1;
		}
	}
	if ((CUTSCENE::WAS_CUTSCENE_SKIPPED() || CAM::IS_SCREEN_FADED_OUT()) || CAM::IS_SCREEN_FADING_OUT())
	{
		iLocal_2258 = 1;
	}
	switch (iLocal_2841)
	{
		case 0:
			if (GlobalFunc_552(1, 0, 1))
			{
				if (GlobalFunc_8027(1, 1093140480, 0))
				{
					if (!bLocal_2322 || MISC::GET_GAME_TIMER() > iLocal_2323 + 3000)
					{
						if (iLocal_2854 == 0)
						{
							iLocal_2554 = Local_2104.f_28[0];
							Local_2104.f_28[0] = 0;
							if (GlobalFunc_4924(iLocal_2554))
							{
								PED::SET_PED_LEG_IK_MODE(iLocal_2554, 2);
							}
						}
						iLocal_2253 = 0;
						iLocal_2254 = 0;
						iLocal_2256 = 0;
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_2554))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_2554))
							{
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2554, "Beverley", 0, 0, 0);
							}
						}
						if (!ENTITY::DOES_ENTITY_EXIST(Local_2104.f_41[0]))
						{
							Local_2104.f_41[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_pap_camera_01"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2554, 0f, 0f, 20f), 1, 1, 0);
						}
						if (ENTITY::IS_ENTITY_ATTACHED(Local_2104.f_41[0]))
						{
							ENTITY::DETACH_ENTITY(Local_2104.f_41[0], 1, 1);
						}
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_2104.f_41[0], "Beverlys_camera", 0, joaat("prop_pap_camera_01"), 0);
						GlobalFunc_9161();
						CUTSCENE::START_CUTSCENE(0);
						RECORDING::_0x48621C9FCA3EBD28(1);
						SYSTEM::WAIT(0);
						GlobalFunc_689();
						CAM::STOP_GAMEPLAY_HINT(0);
						if (GlobalFunc_115(iLocal_2918))
						{
							GlobalFunc_5705(iLocal_2918, -78.1013f, 298.9676f, 106.047f, -109.1187f, 0, 1);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2918);
						}
						iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE());
						if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
						{
							Var1 = { -201.52f, 307.55f, 96.84f };
							fVar4 = 261.18f;
						}
						else if (iVar0 == joaat("blimp") || iVar0 == joaat("blimp2"))
						{
							Var1 = { -211.02f, 474.41f, 133.36f };
							fVar4 = 281.42f;
						}
						else
						{
							Var1 = { -88.6147f, 303.8292f, 105.9208f };
							fVar4 = 245.3452f;
						}
						GlobalFunc_9628(-10.66244f, 283.0703f, 110.2373f, -76.66436f, 301.1816f, 104.5858f, 6f, Var1, fVar4, 1, 1, 1, 0, 0);
						GlobalFunc_9628(-86.61621f, 297.2772f, 102.9432f, -55.1581f, 286.5398f, 109.6697f, 16.75f, Var1, fVar4, 1, 1, 1, 0, 0);
						GlobalFunc_9628(-55.96941f, 318.224f, 109.3944f, 14.16935f, 300.1608f, 117.9981f, 41.75f, Var1, fVar4, 1, 1, 1, 0, 0);
						GlobalFunc_10697(0f, 0f, 0f, 0f, 1, 1);
						func_255(Local_2165, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
						MISC::CLEAR_AREA_OF_PEDS(-28.7403f, 303.3516f, 111.6961f, 40f, 0);
						MISC::CLEAR_AREA_OF_PEDS(-17.3155f, 340.0973f, 110.4743f, 50f, 0);
						MISC::CLEAR_AREA_OF_PEDS(12.2397f, 319.1199f, 109.8446f, 50f, 0);
						MISC::CLEAR_AREA_OF_VEHICLES(-12.2142f, 280.2522f, 107.3232f, 20f, 0, 0, 0, 0, 0);
						MISC::CLEAR_AREA_OF_VEHICLES(-48.1975f, 352.4658f, 112.0536f, 5f, 0, 0, 0, 0, 0);
						MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-55.96941f, 318.224f, 109.3944f, 14.16935f, 300.1608f, 117.9981f, 41.75f, 0, 0, 0, 0, 0);
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							if (!CAM::IS_SCREEN_FADING_IN())
							{
								GlobalFunc_79(800, 0);
							}
						}
						iLocal_2841 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_2104.f_41[0]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Beverlys_camera", 0)))
				{
					Local_2104.f_41[0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Beverlys_camera", 0));
					GlobalFunc_587("BEVERLYS CAMERA - GOT HANDLE FROM CS");
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2554))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Beverley", 0)))
				{
					iLocal_2554 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Beverley", 0));
				}
			}
			else if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Beverley", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2104.f_41[0]))
				{
					ENTITY::DETACH_ENTITY(Local_2104.f_41[0], 1, 1);
					OBJECT::DELETE_OBJECT(&(Local_2104.f_41[0]));
				}
				else if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Beverlys_camera", 0)))
				{
					Local_2104.f_41[0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Beverlys_camera", 0));
					ENTITY::DETACH_ENTITY(Local_2104.f_41[0], 1, 1);
					OBJECT::DELETE_OBJECT(&(Local_2104.f_41[0]));
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2305))
				{
					iLocal_2305 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_pap_camera_01"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2554, 0f, 0f, 20f), 1, 1, 0);
				}
				if (GlobalFunc_115(iLocal_2554))
				{
					if (GlobalFunc_115(iLocal_2305))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_2305, iLocal_2554, PED::GET_PED_BONE_INDEX(iLocal_2554, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
					}
					if (STREAMING::HAS_CLIP_SET_LOADED(sLocal_2908))
					{
						PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(iLocal_2554, sLocal_2908);
					}
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_2554, 0, 0);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_2554, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_2554, -60.9116f, 295.3501f, 105.0975f, 1f, 20000, 1048576000, 0, 1193033728);
					iLocal_2254 = 1;
				}
			}
			if (iLocal_2253 == 0)
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
				{
					RECORDING::_0x81CBAE94390F9F89();
					RECORDING::_0x293220DA1B46CEBC(0f, 10f, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(16.1556f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-6.6252f, 1065353216);
					iLocal_2253 = 1;
				}
			}
			if (iLocal_2256 == 0)
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
				{
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 0);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -63.1068f, 294.9655f, 105.0442f, 1f, -1, 1f, 2113, 1193033728);
					iLocal_2256 = 1;
				}
			}
			if (((iLocal_2253 == 1 && iLocal_2254 == 1) && iLocal_2256 == 1) && !CAM::IS_SCREEN_FADING_OUT())
			{
				iLocal_2841 = 2;
			}
			break;
		
		case 2:
			func_231(1, 1, 1, 1);
			GlobalFunc_4923(&Local_2104, 0, 1);
			iLocal_2189 = MISC::GET_GAME_TIMER();
			if (iLocal_2258 == 1)
			{
			}
			func_327(0);
			break;
		
		case 3:
			iLocal_2841 = 2;
			break;
	}
}







int func_562()//Position - 0x408A2
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_2104.f_28[0]))
	{
		return 1;
	}
	else if (GlobalFunc_4924(Local_2104.f_28[0]))
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_81))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_81) >= 0.21f && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_81) <= 0.91f)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	GlobalFunc_112();
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -69.11025f, 302.9474f, 105.3344f, -77.48595f, 306.754f, 110.557f, 7f, 0, 1, 0) || GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_2104.f_28[0], 3f))
	{
		return 1;
	}
	return 0;
}

void func_563()//Position - 0x40951
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar0 = 35f;
	fVar1 = 0.4f;
	fVar2 = 0f;
	fVar3 = 0.1f;
	fVar4 = 0.02f;
	if (((!GlobalFunc_199() && GlobalFunc_4924(Local_2104.f_28[0])) && GlobalFunc_4924(PLAYER::PLAYER_PED_ID())) && bLocal_2322 == 1)
	{
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_2104.f_28[0], -1, 0, 2);
			CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
			CAM::SET_GAMEPLAY_ENTITY_HINT(Local_2104.f_28[0], 0f, 0f, 0f, 1, 30000, 2000, 2000, 0);
			CAM::SET_GAMEPLAY_HINT_FOV(fVar0);
			CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fVar1);
			CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fVar2);
			CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(fVar3);
			CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(fVar4);
			iLocal_2323 = MISC::GET_GAME_TIMER();
			GlobalFunc_2571(1);
		}
		else
		{
			GlobalFunc_2536(1, 0);
			if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_2104.f_28[0], 3f) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -69.11025f, 302.9474f, 105.3344f, -77.48595f, 306.754f, 110.557f, 7f, 0, 1, 0))
			{
				iLocal_2323 = (iLocal_2323 - 5000);
			}
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			CAM::_0xCCD078C2665D2973(1);
		}
	}
}



void func_566()//Position - 0x40BA5
{
	func_563();
	switch (iLocal_2841)
	{
		case 0:
			func_574();
			if (func_241(0, 0))
			{
				func_573(0);
				PED::SET_PED_NON_CREATION_AREA(Local_2479, Local_2482);
				if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
				{
					PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID());
				}
				uLocal_2360 = PED::ADD_SCENARIO_BLOCKING_AREA(-66.2521f, 288f, 109f, -14.3327f, 334f, 114f, 0, 1, 1, 1);
				uLocal_2361 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(105.1975f, 297.3521f, -67.5738f) - Vector(10f, 10f, 10f), Vector(105.1975f, 297.3521f, -67.5738f) + Vector(10f, 10f, 10f), 0, 1, 1, 1);
				uLocal_2363 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(39.8813f, -391.7834f, 82.135f) - Vector(20f, 80f, 80f), Vector(39.8813f, -391.7834f, 82.135f) + Vector(20f, 80f, 80f), 0, 1, 1, 1);
				if (GlobalFunc_199())
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_2104.f_41[0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_2104.f_41[0]))
						{
							OBJECT::DELETE_OBJECT(&(Local_2104.f_41[0]));
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2305))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_2305))
						{
							OBJECT::DELETE_OBJECT(&iLocal_2305);
						}
					}
					iLocal_2194 = GlobalFunc_198();
					if (Global_84544 == 1)
					{
						iLocal_2194++;
					}
					switch (iLocal_2194)
					{
						case 0:
							GlobalFunc_10697(0f, 0f, 0f, 0f, 1, 1);
							MISC::CLEAR_AREA_OF_PEDS(-28.7403f, 303.3516f, 111.6961f, 40f, 0);
							MISC::CLEAR_AREA_OF_PEDS(-17.3155f, 340.0973f, 110.4743f, 50f, 0);
							MISC::CLEAR_AREA_OF_PEDS(12.2397f, 319.1199f, 109.8446f, 50f, 0);
							MISC::CLEAR_AREA_OF_VEHICLES(-12.2142f, 280.2522f, 107.3232f, 20f, 0, 0, 0, 0, 0);
							MISC::CLEAR_AREA_OF_VEHICLES(-48.1975f, 352.4658f, 112.0536f, 5f, 0, 0, 0, 0, 0);
							GlobalFunc_4972(-72.5612f, 298.2493f, 105.2336f, 247.2199f, 1, 0);
							func_567(2);
							break;
						
						case 1:
							iLocal_2368 = 1;
							GlobalFunc_4972(-33.681f, 320.9442f, 111.6958f, 182.6031f, 1, 0);
							func_567(5);
							break;
						
						case 2:
							iLocal_2368 = 1;
							GlobalFunc_4972(-33.1227f, 318.9001f, 111.6958f, 154.1067f, 1, 0);
							func_567(7);
							break;
						
						case 3:
							iLocal_2368 = 1;
							GlobalFunc_4972(-79.0609f, 296.3315f, 105.3698f, 69.2271f, 1, 0);
							func_567(8);
							break;
						
						case 4:
							iLocal_2368 = 1;
							GlobalFunc_4972(-69.2061f, -523.7703f, 39.2051f, 163.9675f, 1, 0);
							func_567(9);
							break;
					}
				}
				else if (func_313(0, Local_2470, 0))
				{
					iLocal_2841 = 2;
				}
			}
			break;
		
		case 2:
			func_327(0);
			break;
	}
}

void func_567(int iParam0)//Position - 0x40EA5
{
	func_570(1, 1);
	bLocal_2853 = true;
	iLocal_2840 = iParam0;
	if (iLocal_2840 == 0)
	{
		iLocal_2840 = 1;
	}
	iLocal_2195 = 0;
	iLocal_2872 = 0;
	iLocal_2852 = 0;
	iLocal_2854 = 1;
	iLocal_2841 = 0;
	iLocal_2169 = 0;
	func_568();
}

void func_568()//Position - 0x40EE3
{
	GlobalFunc_139();
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	func_412();
	if (func_28(PLAYER::PLAYER_PED_ID(), iLocal_2918))
	{
		if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iLocal_2918) == 4)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_2918, 1);
		}
		if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), Local_2451, fLocal_2510, 0, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2918))
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_2797, 0);
		GlobalFunc_6692(&iLocal_2918);
	}
	if (GlobalFunc_4924(iLocal_2554))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_2554);
	}
	GlobalFunc_69(&Local_2559);
	GlobalFunc_69(&Local_2569);
	GlobalFunc_69(&Local_2564);
	iLocal_2884 = 0;
	while (iLocal_2884 <= 1)
	{
		GlobalFunc_69(&(Local_2574[iLocal_2884 /*5*/]));
		iLocal_2884++;
	}
	if (iLocal_2241 == 0)
	{
		iLocal_2884 = 0;
		while (iLocal_2884 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_2914[iLocal_2884]))
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_2798[iLocal_2884], 0);
				if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(uLocal_2914[iLocal_2884]))
				{
					GlobalFunc_6692(&(uLocal_2914[iLocal_2884]));
				}
			}
			iLocal_2884++;
		}
	}
	else
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_2798[iLocal_2884], 0);
	}
	if (!MISC::IS_STRING_NULL(&Local_2899))
	{
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&Local_2899))
		{
			TASK::REMOVE_WAYPOINT_RECORDING(&Local_2899);
		}
	}
	if (!MISC::IS_STRING_NULL(&Local_2903))
	{
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&Local_2903))
		{
			TASK::REMOVE_WAYPOINT_RECORDING(&Local_2903);
		}
	}
	func_339(1);
	func_339(0);
	GlobalFunc_4956();
	HUD::CLEAR_PRINTS();
	GlobalFunc_200(&uLocal_2632, 0);
	GlobalFunc_200(&uLocal_2632, 1);
	GlobalFunc_200(&uLocal_2632, 2);
	GlobalFunc_200(&uLocal_2632, 3);
	GlobalFunc_200(&uLocal_2632, 4);
	GlobalFunc_146(&iLocal_2808);
	ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
	func_359(1, 1);
}


void func_570(bool bParam0, bool bParam1)//Position - 0x410A6
{
	if (bParam0)
	{
		func_571(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_255(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_571(bool bParam0, int iParam1, int iParam2)//Position - 0x410D9
{
	bool bVar0;
	
	bVar0 = true;
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		while (bVar0)
		{
			bVar0 = CUTSCENE::IS_CUTSCENE_ACTIVE();
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CUTSCENE::STOP_CUTSCENE(0);
			}
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
			if (CUTSCENE::IS_CUTSCENE_ACTIVE() && !CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				bVar0 = false;
			}
			SYSTEM::WAIT(0);
		}
		if (bParam0)
		{
			func_231(iParam1, iParam2, 1, 1);
		}
	}
}


void func_573(bool bParam0)//Position - 0x411CD
{
	MISC::ENABLE_DISPATCH_SERVICE(1, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(2, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_PAPARAZZI", bParam0);
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
	}
	else
	{
		PLAYER::SET_MAX_WANTED_LEVEL(1);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	}
}

void func_574()//Position - 0x4121F
{
	func_584();
	func_581();
	func_580();
	func_577();
	func_575();
}

void func_575()//Position - 0x4123B
{
	Local_2585[0 /*4*/] = { func_576(91798, "BUILDING_SITE_CRASH", 3) };
	Local_2585[1 /*4*/] = { func_576(92411, "BUILDING_SITE_CRASH", 0) };
}

struct<4> func_576(int iParam0, char* sParam1, int iParam2)//Position - 0x4126D
{
	struct<4> Var0;
	
	Var0 = iParam0;
	Var0.f_2 = sParam1;
	Var0.f_3 = iParam2;
	Var0.f_1 = 0;
	return Var0;
}

void func_577()//Position - 0x4128E
{
	GlobalFunc_587();
	GlobalFunc_587();
}



void func_580()//Position - 0x412AE
{
	Local_2485[0 /*3*/] = { -70.2823f, 298.6007f, 105.2842f };
	Local_2485[1 /*3*/] = { -12.8842f, 283.1092f, 107.2567f };
	Local_2485[2 /*3*/] = { -9.737f, 286.8741f, 108.4575f };
	Local_2485[3 /*3*/] = { -2.8843f, 291.4941f, 109.9209f };
	Local_2485[4 /*3*/] = { 5.6191f, 309.9637f, 109.9198f };
	Local_2485[5 /*3*/] = { -4.6429f, 318.5697f, 109.9198f };
	Local_2485[6 /*3*/] = { -34.2534f, 332.7881f, 112.1618f };
	Local_2485[7 /*3*/] = { -33.4322f, 319.0293f, 111.6957f };
}

void func_581()//Position - 0x4136E
{
	Local_2559.f_1 = { -30.5144f, 308.4476f, 111.6949f };
	Local_2559.f_4 = 50.6254f;
	Local_2564.f_1 = { -31.584f, 306.8474f, 111.6949f };
	Local_2564.f_4 = 21.4212f;
	Local_2574[0 /*5*/].f_1 = { 1.1046f, 300.3212f, 109.919f };
	Local_2574[0 /*5*/].f_4 = 335.6462f;
	Local_2574[1 /*5*/].f_1 = { 16.984f, 336.9486f, 110.319f };
	Local_2574[1 /*5*/].f_4 = 157.6965f;
	Local_2569.f_1 = { -46.9907f, 328.4976f, 111.6962f };
	Local_2569.f_4 = 303.7287f;
	iLocal_2805[0] = joaat("s_f_m_maid_01");
	iLocal_2845[0] = 0;
	iLocal_2805[1] = joaat("s_m_y_busboy_01");
	iLocal_2845[1] = 0;
	func_582();
}

void func_582()//Position - 0x4144A
{
	Local_2594[0 /*5*/] = { func_583(17.7501f, 339.8129f, 114.3926f, 157.8568f, 2) };
	Local_2594[1 /*5*/] = { func_583(21.1623f, 341.5796f, 114.3926f, 338.0048f, 1) };
	Local_2594[2 /*5*/] = { func_583(38.4316f, 340.2473f, 114.3926f, 66.9258f, 1) };
	Local_2594[3 /*5*/] = { func_583(11.1311f, 327.7826f, 109.9198f, 110.9247f, 1) };
	Local_2594[4 /*5*/] = { func_583(22.3298f, 305.797f, 109.9198f, 255.7478f, 2) };
	Local_2620[0 /*3*/] = { 1.7382f, 301.8018f, 109.9198f };
	Local_2620[1 /*3*/] = { 19.2729f, 326.7421f, 109.9198f };
	Local_2620[2 /*3*/] = { 12.4255f, 323.3313f, 109.9188f };
}

struct<5> func_583(struct<3> Param0, float fParam3, int iParam4)//Position - 0x4153C
{
	struct<5> Var0;
	
	Var0 = { Param0 };
	Var0.f_3 = fParam3;
	Var0.f_4 = iParam4;
	return Var0;
}

void func_584()//Position - 0x4155C
{
	iLocal_2798[0] = joaat("rapidgt2");
	iLocal_2798[1] = joaat("landstalker");
	iLocal_2798[2] = joaat("landstalker");
	Local_2460[0 /*3*/] = { -61.5802f, 337.5996f, 111.1479f };
	fLocal_2512[0] = 157.8698f;
	Local_2460[1 /*3*/] = { -62.3344f, 322.6908f, 109.2141f };
	fLocal_2512[1] = 155.9353f;
	Local_2460[2 /*3*/] = { -68.0634f, 309.3348f, 107.2594f };
	fLocal_2512[2] = 155.9353f;
}

void func_585()//Position - 0x415EB
{
	if (iLocal_2840 < 10)
	{
		func_587();
		func_586();
		if (!bLocal_2877)
		{
			if (func_516(iLocal_2554, 1, 1116471296, 1126825984, 0, 0, 0, 0) || (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) && iLocal_2840 < 5))
			{
				GlobalFunc_4956();
				func_511(iLocal_2554);
				func_511(Local_2574[0 /*5*/]);
				func_511(Local_2574[1 /*5*/]);
				func_511(Local_2559);
				func_511(Local_2564);
				func_511(Local_2569);
				bLocal_2877 = true;
			}
		}
	}
}

void func_586()//Position - 0x41674
{
	if (!bLocal_2853)
	{
		switch (iLocal_2840)
		{
			case 2:
				if (GlobalFunc_4924(iLocal_2554))
				{
					if (func_506(-46.2972f, 351.4437f, 112.5526f, 3f, 3f, 5f) || !GlobalFunc_155(iLocal_2554, PLAYER::PLAYER_PED_ID(), 120f))
					{
						func_338(13);
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -51.9864f, 340.5381f, 111.0746f, -62.178f, 344.6878f, 114.3459f, 20f, 0, 1, 0))
				{
					if (!iLocal_2865)
					{
						HUD::CLEAR_PRINTS();
						GlobalFunc_4935();
						GlobalFunc_164("PAP2_06", 7500, 0);
						iLocal_2865 = 1;
					}
				}
			
			case 3:
			case 4:
			case 6:
			case 7:
				if (iLocal_2840 >= 3)
				{
					if (!func_488(iLocal_2554, 25f, 25f, 40f))
					{
						if (iLocal_2892 > 300)
						{
							if (iLocal_2840 == 7)
							{
							}
							else
							{
								func_338(17);
							}
						}
						else
						{
							iLocal_2892++;
						}
						if (iLocal_2840 != 7)
						{
							if (!iLocal_2865)
							{
								GlobalFunc_164("PAP2_06", 7500, 0);
								iLocal_2865 = 1;
							}
						}
					}
					else
					{
						iLocal_2892 = 0;
					}
				}
				break;
			}
	}
}

void func_587()//Position - 0x417A8
{
	switch (iLocal_2840)
	{
		case 2:
		case 3:
		case 4:
		case 6:
		case 7:
			if (func_589(iLocal_2554))
			{
				if (ENTITY::IS_ENTITY_DEAD(iLocal_2554))
				{
					func_338(1);
				}
				else
				{
					func_511(iLocal_2554);
					func_338(2);
				}
			}
			if (func_589(Local_2559))
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_2559))
				{
					func_338(8);
					if (GlobalFunc_4924(Local_2564))
					{
						func_511(Local_2564);
					}
				}
				else
				{
					if (GlobalFunc_4924(Local_2559))
					{
						func_511(Local_2559);
					}
					if (GlobalFunc_4924(Local_2564))
					{
						func_511(Local_2564);
					}
					func_338(9);
				}
			}
			if (func_589(Local_2564))
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_2564))
				{
					func_338(10);
					if (GlobalFunc_4924(Local_2564))
					{
						func_511(Local_2564);
					}
				}
			}
			if (func_588(iLocal_2918))
			{
				func_338(14);
			}
			if ((func_588(uLocal_2914[0]) || func_588(uLocal_2914[1])) || func_588(uLocal_2914[2]))
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				func_338(15);
			}
			iLocal_2884 = 0;
			while (iLocal_2884 <= 1)
			{
				if (func_589(Local_2574[iLocal_2884 /*5*/]))
				{
					func_338(7);
					func_511(Local_2574[0 /*5*/]);
					func_511(Local_2574[1 /*5*/]);
					break;
				}
				iLocal_2884++;
			}
			break;
		
		case 8:
			if (func_589(Local_2559))
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_2559))
				{
					func_338(8);
				}
				else
				{
					func_338(9);
				}
			}
			if (func_589(Local_2564))
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_2564))
				{
					func_338(10);
				}
			}
			break;
	}
}

int func_588(int iParam0)//Position - 0x4195F
{
	if (!bLocal_2853)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_589(int iParam0)//Position - 0x41987
{
	if (!bLocal_2853)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_590(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x419B2
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




















void func_610()//Position - 0x42553
{
	if (!iLocal_2259)
	{
		uLocal_2449 = GlobalFunc_7626();
		iLocal_2450 = GlobalFunc_483(uLocal_2449);
		if (iLocal_2450 > 22 || iLocal_2450 < 5)
		{
			MISC::CLEAR_WEATHER_TYPE_PERSIST();
			MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("OVERCAST", 10f);
			iLocal_2259 = 1;
		}
	}
}







int func_617(var uParam0)//Position - 0x4290F
{
	int iVar0[3];
	int iVar4;
	bool bVar5;
	
	iVar0[0] = uLocal_79;
	iVar0[1] = joaat("fq2");
	iVar0[2] = joaat("prop_pap_camera_01");
	switch (iLocal_78)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -82.64143f, 302.7307f, 104.6349f };
			uParam0->f_17[1 /*3*/] = { -68.78405f, 296.6317f, 107.8958f };
			uParam0->f_24 = 11f;
			uParam0->f_27 = 0;
			uParam0->f_26 = 1;
			uParam0->f_25 = 1;
			StringCopy(&(uParam0->f_9), "PAP_2_RCM_P2", 24);
			iVar4 = 0;
			while (iVar4 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar4]);
				iVar4++;
			}
			STREAMING::REQUEST_ANIM_DICT("rcmpaparazzo_2");
			iLocal_78 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmpaparazzo_2"))
			{
				return 0;
			}
			iLocal_78 = 2;
			break;
		
		case 2:
			bVar5 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (GlobalFunc_8025(&(uParam0->f_28[0]), 50, -71.283f, 301.557f, 106.711f, 4.659f, "PAPARAZZO LAUNCHER RC", 1))
				{
					PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_28[0]);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 9, 1, 0, 0);
				}
				else
				{
					bVar5 = false;
				}
			}
			if (GlobalFunc_4924(uParam0->f_28[0]))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
				{
					GlobalFunc_5742(&(uParam0->f_41[0]), iVar0[2], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_28[0], 0f, 0f, 2.5f), 0f);
					if (GlobalFunc_115(uParam0->f_41[0]))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[0], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[2]);
					}
					else
					{
						bVar5 = false;
					}
				}
				else
				{
					bVar5 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				func_618(&(uParam0->f_35[0]), iVar0[1], -78.0873f, 299.0679f, 105.3972f, 249.8696f);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[0], 7);
				VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(uParam0->f_35[0], 0);
				VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(uParam0->f_35[0], 0);
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(uParam0->f_35[0], 0);
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(uParam0->f_35[0], "P4P4R4Z0");
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 3);
			}
			if (bVar5)
			{
				iLocal_78 = 3;
			}
			break;
		
		case 3:
			if (GlobalFunc_115(uParam0->f_28[0]) && GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				uLocal_81 = PED::CREATE_SYNCHRONIZED_SCENE(-71.283f, 301.557f, 106.711f, 0f, 0f, 4.659f, 2);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_81, 1);
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uLocal_81, "rcmpaparazzo_2", "pap_2_rcm_base", 2f, -4f, 1, 0, 1148846080, 0);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uParam0->f_28[0], 0);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 185, 1);
			}
			STREAMING::REMOVE_ANIM_DICT("rcmpaparazzo_2");
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_PAPARAZZI", false);
			MISC::CLEAR_AREA_OF_PEDS(-70.12f, 298.33f, 105.25f, 30f, 0);
			iVar4 = 0;
			while (iVar4 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar4]);
				iVar4++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_618(int iParam0, int iParam1, struct<3> Param2, float fParam5)//Position - 0x42C4F
{
	GlobalFunc_6692(iParam0);
	*iParam0 = VEHICLE::CREATE_VEHICLE(uParam1, Param2, fParam5, 1, 1);
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
		ENTITY::SET_ENTITY_HEALTH(*iParam0, 1000);
	}
}







void func_625()//Position - 0x42E35
{
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_2172))
	{
		AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(uLocal_2172);
	}
	PED::CLEAR_PED_NON_CREATION_AREA();
	AUDIO::TRIGGER_MUSIC_EVENT("PAP2_FAIL");
	GlobalFunc_9161();
	GlobalFunc_139();
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID());
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), 0);
	}
	if (iLocal_2301 == 1)
	{
		STREAMING::STREAMVOL_DELETE(uLocal_2300);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_02_CHASE"))
	{
		AUDIO::STOP_AUDIO_SCENE("PAPARAZZO_02_CHASE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_02_INTRO"))
	{
		AUDIO::STOP_AUDIO_SCENE("PAPARAZZO_02_INTRO");
	}
	AUDIO::SET_AMBIENT_ZONE_STATE("AZ_PAPARAZZO_02_AMBIENCE", 0, 1);
	PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
	AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_2362, 0);
	TASK::REMOVE_COVER_POINT(uLocal_2516);
	GlobalFunc_563(0);
	if (GlobalFunc_9162())
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2554))
		{
			if (GlobalFunc_4924(iLocal_2554))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_2554, 0))
				{
					TASK::TASK_WANDER_STANDARD(iLocal_2554, 1193033728, 0);
				}
				PED::SET_PED_KEEP_TASK(iLocal_2554, 1);
			}
			GlobalFunc_2297(&iLocal_2554, 1, 0, 1);
		}
		func_633();
		CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
		OBJECT::_DOOR_CONTROL(joaat("prop_ss1_14_garage_door"), -62.22f, 352.75f, 113.01f, 0, 0, 0, 0);
		AUDIO::STOP_SOUND(iLocal_2364);
		PAD::ENABLE_CONTROL_ACTION(0, 44, 1);
		GlobalFunc_130(&iLocal_2304);
		GlobalFunc_2295(&uLocal_2306, 0);
		if (ENTITY::DOES_ENTITY_EXIST(Local_2104.f_41[0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_2104.f_41[0]))
			{
				OBJECT::DELETE_OBJECT(&(Local_2104.f_41[0]));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2305))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2305))
			{
				OBJECT::DELETE_OBJECT(&iLocal_2305);
			}
		}
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_2363, 0);
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_2360, 0);
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_2361, 0);
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2918))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_2797, 0);
			GlobalFunc_131(&iLocal_2918);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_2564))
		{
			GlobalFunc_2297(&Local_2564, 1, 0, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_2559))
		{
			GlobalFunc_2297(&Local_2559, 1, 0, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_2569))
		{
			GlobalFunc_2297(&Local_2569, 1, 0, 1);
		}
		iLocal_2884 = 0;
		while (iLocal_2884 <= 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_2574[iLocal_2884 /*5*/]))
			{
				GlobalFunc_2297(&(Local_2574[iLocal_2884 /*5*/]), 1, 0, 1);
			}
			iLocal_2884++;
		}
		if (GlobalFunc_4947(uLocal_2914[0]))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(uLocal_2914[0], 1);
		}
		iLocal_2884 = 0;
		while (iLocal_2884 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_2914[iLocal_2884]))
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_2798[iLocal_2884], 0);
				if (GlobalFunc_4947(uLocal_2914[iLocal_2884]))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(uLocal_2914[iLocal_2884], 1);
				}
			}
			iLocal_2884++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2817))
		{
			GlobalFunc_2295(&iLocal_2817, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2818))
		{
			GlobalFunc_2295(&iLocal_2818, 0);
		}
		PED::REMOVE_RELATIONSHIP_GROUP(uLocal_2839);
		MISC::ENABLE_DISPATCH_SERVICE(1, true);
		MISC::ENABLE_DISPATCH_SERVICE(2, true);
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(4, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		PED::CLEAR_PED_NON_CREATION_AREA();
		func_573(1);
		func_568();
		AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	}
	else
	{
		func_626(&Local_2104, 1, 0, 0);
	}
}

void func_626(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x4312F
{
	GlobalFunc_7198(uParam0, iParam1);
	GlobalFunc_8620(uParam0, bParam2);
	func_627(uParam0, bParam3);
}

void func_627(var uParam0, bool bParam1)//Position - 0x4314F
{
	func_628(&(uParam0->f_41), bParam1);
}

void func_628(var uParam0, bool bParam1)//Position - 0x43161
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			GlobalFunc_130(uParam0[iVar0]);
		}
		else
		{
			GlobalFunc_2295(uParam0[iVar0], 0);
		}
		iVar0++;
	}
}





void func_633()//Position - 0x43241
{
	GlobalFunc_69(&(iLocal_2341[0]));
	GlobalFunc_69(&(iLocal_2341[1]));
	GlobalFunc_69(&(iLocal_2341[2]));
	GlobalFunc_69(&(iLocal_2341[3]));
	GlobalFunc_69(&(iLocal_2341[4]));
	GlobalFunc_69(&(iLocal_2341[5]));
	GlobalFunc_69(&(iLocal_2341[6]));
	GlobalFunc_69(&(iLocal_2341[7]));
	GlobalFunc_6692(&(iLocal_2325[0]));
	GlobalFunc_6692(&(iLocal_2325[1]));
	GlobalFunc_6692(&(iLocal_2325[2]));
	GlobalFunc_6692(&(iLocal_2325[3]));
	GlobalFunc_6692(&(iLocal_2325[4]));
	GlobalFunc_6692(&(iLocal_2325[5]));
	GlobalFunc_6692(&(iLocal_2325[6]));
	GlobalFunc_6692(&(iLocal_2325[7]));
}


void func_635(bool bParam0)//Position - 0x4338A
{
	int iVar0;
	
	GlobalFunc_8958();
	if (!GlobalFunc_142())
	{
		iVar0 = GlobalFunc_8537();
		if (iVar0 == -1)
		{
			return;
		}
		if (!Global_96440[iVar0 /*10*/].f_4)
		{
			return;
		}
		if (Global_96440[iVar0 /*10*/].f_5)
		{
			return;
		}
		if (Global_96440[iVar0 /*10*/].f_6)
		{
			return;
		}
		if (Global_84542 == Global_89999)
		{
			Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar0 /*6*/].f_4++;
		}
		Global_84542 = Global_89999;
		if (bParam0)
		{
			GlobalFunc_7620(iVar0, 1, 0);
			func_636(SCRIPT::GET_THIS_SCRIPT_NAME(), iVar0);
		}
		else
		{
			if (Global_96440[iVar0 /*10*/].f_9 == -1)
			{
			}
			else
			{
				GlobalFunc_54(&(Global_96440[iVar0 /*10*/].f_9));
			}
			GlobalFunc_9520(iVar0, 1, 1, 0);
		}
		Global_96440[iVar0 /*10*/].f_6 = 1;
	}
}

void func_636(char* sParam0, int iParam1)//Position - 0x4345A
{
	if (Global_89962 != 12)
	{
		if (func_637(sParam0, 6, iParam1))
		{
			Global_89962.f_1 = iParam1;
		}
	}
}

int func_637(char* sParam0, int iParam1, int iParam2)//Position - 0x43482
{
	var uVar0;
	struct<32> Var1;
	int iVar33;
	
	GlobalFunc_4909();
	GlobalFunc_141();
	Global_89962 = 0;
	StringCopy(&(Global_89962.f_3), sParam0, 32);
	Global_89962.f_11 = iParam1;
	MISC::PAUSE_DEATH_ARREST_RESTART(1);
	MISC::SET_FADE_OUT_AFTER_ARREST(0);
	MISC::SET_FADE_OUT_AFTER_DEATH(0);
	GlobalFunc_6685(1);
	GlobalFunc_7632(1);
	GlobalFunc_4944(0);
	GlobalFunc_137(1);
	MISC::CLEAR_BIT(&(Global_89962.f_20), 9);
	MISC::CLEAR_BIT(&(Global_89962.f_20), 6);
	MISC::CLEAR_BIT(&(Global_89962.f_20), 20);
	MISC::CLEAR_BIT(&(Global_89962.f_20), 21);
	MISC::CLEAR_BIT(&(Global_89962.f_20), 5);
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (ENTITY::IS_ENTITY_UPSIDEDOWN(uVar0))
				{
					MISC::SET_BIT(&(Global_89962.f_20), 5);
				}
			}
		}
	}
	HUD::CLEAR_HELP(1);
	HUD::CLEAR_PRINTS();
	GlobalFunc_136(0);
	GlobalFunc_12(1);
	Global_89962.f_2 = Global_89999;
	if (GlobalFunc_5737())
	{
		if (GlobalFunc_135())
		{
			if (Global_89999 >= GlobalFunc_7105())
			{
				if (!MISC::IS_BIT_SET(Global_81155[iParam2 /*34*/].f_15, 16))
				{
					if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iParam2 /*6*/].f_1 >= 2)
					{
						Global_84543 = 1;
					}
				}
			}
		}
		else if (Global_89962.f_11 == 6)
		{
			GlobalFunc_6675(iParam2, &Var1);
			if (Var1.f_31 == 1)
			{
				if (Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam2 /*6*/].f_4 >= 2)
				{
					Global_84543 = 1;
				}
			}
		}
		else
		{
			iVar33 = GlobalFunc_547(SCRIPT::GET_THIS_SCRIPT_NAME());
			if (iVar33 > -1)
			{
				if (Global_SAVE_DATA.BAIL_BOND_SAVED_STRUCT.f_4[iVar33] >= 2)
				{
					Global_84543 = 1;
				}
			}
		}
	}
	return 1;
}















var func_652()//Position - 0x439BA
{
	return PED::ADD_SCENARIO_BLOCKING_AREA(-74.8392f, 300.5241f, 104f, -62.467f, 318.6961f, 109f, 0, 1, 1, 1);
}




