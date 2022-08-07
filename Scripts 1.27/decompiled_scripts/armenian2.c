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
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	char* sLocal_45 = NULL;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	bool bLocal_48 = 0;
	struct<3> Local_49[20];
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	struct<6> Local_114 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_120 = { 0, 0, 0, 0, 0, 0 } ;
	char cLocal_126[24] = "";
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	struct<3> Local_132 = { 0, 0, 0 } ;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	int iLocal_138 = 0;
	struct<6> Local_139[25];
	float fLocal_290 = 0f;
	struct<4> Local_291[8];
	struct<10> Local_324[36];
	bool bLocal_685 = 0;
	int iLocal_686 = 0;
	struct<7> Local_687[49];
	int iLocal_1031 = 0;
	int iLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	int iLocal_1036[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1047 = 0;
	int iLocal_1048[4] = { 0, 0, 0, 0 };
	int iLocal_1053 = 0;
	var uLocal_1054[2] = { 0, 0 };
	int iLocal_1057 = 0;
	int iLocal_1058 = 0;
	int iLocal_1059 = 0;
	int iLocal_1060 = 0;
	int iLocal_1061 = 0;
	int iLocal_1062 = 0;
	int iLocal_1063 = 0;
	int iLocal_1064 = 0;
	bool bLocal_1065 = 0;
	int iLocal_1066 = 0;
	struct<3> Local_1067 = { 0, 0, 0 } ;
	struct<14> Local_1070[27];
	struct<2> Local_1449[10];
	int iLocal_1470 = 0;
	int iLocal_1471 = 0;
	int iLocal_1472 = 0;
	int iLocal_1473 = 0;
	int iLocal_1474 = 0;
	int iLocal_1475 = 0;
	struct<10> Local_1476[16];
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	char[] cLocal_1641[8] = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	int iLocal_1644 = 0;
	struct<12> Local_1645[5];
	var uLocal_1706 = 0;
	struct<6> Local_1707[20];
	bool bLocal_1828 = 0;
	char* sLocal_1829 = NULL;
	var uLocal_1830 = 4;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 4;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 4;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 4;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 4;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 4;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 4;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 8;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	int iLocal_1916 = 0;
	int iLocal_1917 = 0;
	int iLocal_1918 = 0;
	struct<3> Local_1919[9];
	var uLocal_1947 = 0;
	int iLocal_1948 = 0;
	int iLocal_1949 = 0;
	int iLocal_1950 = 0;
	int iLocal_1951 = 0;
	int iLocal_1952 = 0;
	int iLocal_1953 = 0;
	char* sLocal_1954 = NULL;
	struct<14> Local_1955 = { 0, 3, 0, 0, 0, 0, 0, 1092616192, 1101004800, 0, 0, 0, 0, 0 } ;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 3;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 21;
	var uLocal_1990 = 6;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2020[5] = { 0, 0, 0, 0, 0 };
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	int iLocal_2033 = 0;
	struct<3> Local_2034[10];
	int iLocal_2065 = 0;
	int iLocal_2066 = 0;
	int iLocal_2067 = 0;
	struct<7> Local_2068[3];
	struct<3> Local_2090[31];
	var uLocal_2184[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	char* sLocal_2216 = NULL;
	int iLocal_2217 = 0;
	int iLocal_2218 = 0;
	int iLocal_2219 = 0;
	int iLocal_2220 = 0;
	int iLocal_2221 = 0;
	int iLocal_2222 = 0;
	int iLocal_2223 = 0;
	int iLocal_2224 = 0;
	int iLocal_2225 = 0;
	var uLocal_2226 = 0;
	float fLocal_2227 = 0f;
	int iLocal_2228 = 0;
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = -1;
	var uLocal_2232 = 0;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
	var uLocal_2237 = 0;
	var uLocal_2238 = 1000;
	var uLocal_2239 = 1000;
	var uLocal_2240 = 0;
	struct<3> Local_2241 = { 0, 0, 0 } ;
	float fLocal_2244 = 0f;
	float fLocal_2245 = 0f;
	int iLocal_2246 = 0;
	int iLocal_2247 = 0;
	int iLocal_2248 = 0;
	char* sLocal_2249 = NULL;
	char* sLocal_2250 = NULL;
	int iLocal_2251[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	char* sLocal_2262 = NULL;
	int iLocal_2263 = 0;
	int iLocal_2264 = 0;
	int iLocal_2265 = 0;
	int iLocal_2266 = 0;
	int iLocal_2267 = 0;
	int iLocal_2268 = 0;
	var uLocal_2269 = 0;
	int iLocal_2270 = 0;
	int iLocal_2271 = 0;
	int iLocal_2272 = 0;
	int iLocal_2273 = 0;
	float fLocal_2274 = 0f;
	int iLocal_2275 = 0;
	int iLocal_2276 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	int iVar1;
	
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
	fLocal_290 = 0.45f;
	iLocal_1047 = -1;
	iLocal_1062 = 1;
	Local_1067 = { 0f, 0f, 0f };
	iLocal_1644 = -1;
	iLocal_2224 = -1;
	Local_2241 = { -1110.31f, -1603.043f, 3.6765f };
	fLocal_2244 = 95f;
	fLocal_2245 = 0.27f;
	iLocal_2267 = -1;
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GlobalFunc_10632();
		func_592(2);
	}
	MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 45f);
	iLocal_1066 = 0;
	func_589();
	func_587();
	if (GlobalFunc_Is_Mission_Retry())
	{
		iVar1 = GlobalFunc_Get_Mission_Fail_Checkpoint();
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
		if (Global_84544 == 1)
		{
			iVar1++;
		}
		switch (iVar1)
		{
			case 0:
				iLocal_1066 = 1;
				func_538(1, 1, 0);
				break;
			
			case 1:
				iLocal_1066 = 2;
				func_538(1, 1, 0);
				break;
			
			case 2:
				if (Global_84544)
				{
					bVar0 = true;
					iLocal_1066 = 6;
				}
				else
				{
					iLocal_1066 = 7;
				}
				func_538(1, 1, 0);
				break;
			
			case 3:
				iLocal_1066 = 9;
				func_538(1, 1, 0);
				break;
			
			case 4:
				if (Global_84544)
				{
					bVar0 = true;
				}
				iLocal_1066 = 11;
				func_538(1, 1, 0);
				break;
		}
	}
	else if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_1066 = 0;
		func_538(1, 0, 1);
		bVar0 = true;
	}
	else
	{
		func_535(0);
	}
	if (!bVar0)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(500);
		}
	}
	while (true)
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		if (!GlobalFunc_485(138))
		{
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				GlobalFunc_585(138, 1);
			}
		}
		func_531();
		func_528();
		func_109();
		func_35();
		func_34();
		func_24();
		func_23();
		func_22();
		RECORDING::_0x208784099002BC30("m_Repossession", 0);
		if (iLocal_1032 > MISC::GET_GAME_TIMER())
		{
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
		}
		GlobalFunc_504(PLAYER::PLAYER_PED_ID(), 17);
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			GlobalFunc_504(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 12);
			GlobalFunc_503(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 16);
		}
		else
		{
			GlobalFunc_504(0, 12);
			GlobalFunc_503(0, 16);
		}
		if (bLocal_1828)
		{
			func_1(sLocal_1829, iLocal_1061);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(char* sParam0, int iParam1)//Position - 0x27F
{
	int iVar0;
	
	while (!AUDIO::TRIGGER_MUSIC_EVENT("ARM2_MISSION_FAIL"))
	{
		func_19(21, 0);
	}
	if (MISC::IS_STRING_NULL(sParam0))
	{
		sParam0 = "ARM2_FAIL";
	}
	iVar0 = (MISC::GET_GAME_TIMER() + iParam1);
	if (iParam1 > 0)
	{
		while (MISC::GET_GAME_TIMER() < iVar0)
		{
			SYSTEM::WAIT(0);
		}
	}
	GlobalFunc_10835(sParam0);
	while (!GlobalFunc_145())
	{
		SYSTEM::WAIT(0);
	}
	func_592(1);
}


















void func_19(int iParam0, int iParam1)//Position - 0x12F7
{
	iParam0 = iParam0;
	SYSTEM::WAIT(iParam1);
}



void func_22()//Position - 0x1386
{
	if (iLocal_2246)
	{
		if (iLocal_2247)
		{
			if (AUDIO::PREPARE_MUSIC_EVENT(sLocal_2249))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT(sLocal_2249))
				{
					iLocal_2246 = 0;
					iLocal_2247 = 0;
				}
			}
		}
		else if (AUDIO::TRIGGER_MUSIC_EVENT(sLocal_2249))
		{
			iLocal_2246 = 0;
		}
	}
	else if (iLocal_2248)
	{
		if (AUDIO::PREPARE_MUSIC_EVENT(sLocal_2250))
		{
			iLocal_2248 = 0;
		}
	}
}

void func_23()//Position - 0x13DE
{
	var uVar0;
	
	switch (iLocal_2272)
	{
		case 0:
			OBJECT::ADD_DOOR_TO_SYSTEM(-913931260, joaat("prop_arm_gate_l"), -1127.1f, -1586.96f, 5.09f, 0, 1, 0);
			OBJECT::ADD_DOOR_TO_SYSTEM(-2077066915, joaat("prop_arm_gate_l"), -1131.99f, -1590.4f, 5.09f, 0, 1, 0);
			iLocal_2272 = 1;
			break;
		
		case 2:
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-913931260) && OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2077066915))
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-913931260, 0f, 0, 0);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-913931260, 4, 0, 1);
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2077066915, 0f, 0, 0);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2077066915, 4, 0, 1);
				iLocal_2272 = 1;
			}
			else
			{
				if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-913931260))
				{
					OBJECT::ADD_DOOR_TO_SYSTEM(-913931260, joaat("prop_arm_gate_l"), -1127.1f, -1586.96f, 5.09f, 0, 1, 0);
				}
				if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2077066915))
				{
					OBJECT::ADD_DOOR_TO_SYSTEM(-2077066915, joaat("prop_arm_gate_l"), -1131.99f, -1590.4f, 5.09f, 0, 1, 0);
				}
			}
			break;
		
		case 3:
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-913931260, 0, 0, 1);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2077066915, 0, 0, 1);
			iLocal_2272 = 1;
			break;
		
		case 5:
			switch (iLocal_2273)
			{
				case 0:
					fLocal_2274 = 1f;
					iLocal_2273 = 1;
					break;
				
				case 1:
					if (!PED::IS_PED_INJURED(Local_1070[4 /*14*/]))
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1070[4 /*14*/], -1133.818f, -1583.41f, 2.790712f, -1123.055f, -1598.921f, 5.836129f, 7.625f, 0, 1, 0))
						{
							iLocal_2273 = 2;
						}
					}
					break;
				
				case 2:
					fLocal_2274 = (fLocal_2274 + (-0.13f * SYSTEM::TIMESTEP()));
					if (fLocal_2274 <= 0f)
					{
						fLocal_2274 = 0f;
						iLocal_2272 = 1;
					}
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-913931260, fLocal_2274, 0, 1);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2077066915, (fLocal_2274 * -1f), 0, 1);
					break;
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(Local_1070[4 /*14*/]))
			{
				switch (iLocal_2273)
				{
					case 0:
						fLocal_2274 = 0f;
						iLocal_2273 = 1;
						break;
					
					case 1:
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1070[4 /*14*/], -1129.023f, -1590.408f, 2.9455f, -1123.055f, -1598.921f, 5.836129f, 7.625f, 0, 1, 0))
						{
							fLocal_2274 = (fLocal_2274 + (0.13f * SYSTEM::TIMESTEP()));
							if (fLocal_2274 >= 1f)
							{
								fLocal_2274 = 1f;
								iLocal_2272 = 5;
							}
							OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-913931260, fLocal_2274, 0, 1);
							OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2077066915, (fLocal_2274 * -1f), 0, 1);
						}
						break;
					}
			}
			break;
		
		case 6:
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-913931260, 0f, 0, 0);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-913931260, 0, 0, 1);
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2077066915, 0f, 0, 0);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2077066915, 0, 0, 1);
			iLocal_2272 = 1;
			break;
		
		case 7:
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-913931260, 0, 0, 1);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2077066915, 0, 0, 1);
			iLocal_2272 = 1;
			break;
		
		case 8:
		case 9:
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(Local_1070[4 /*14*/]))
			{
				if (!PED::IS_PED_INJURED(Local_1070[4 /*14*/]))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1070[4 /*14*/], -1129.023f, -1590.408f, 2.9455f, -1123.055f, -1598.921f, 5.836129f, 7.625f, 0, 1, 0))
					{
						iLocal_2272 = 4;
					}
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) > 7f)
				{
					if (iLocal_2272 != 8 && iLocal_2272 != 9)
					{
						iLocal_2272 = 8;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-913931260, 0, 0, 1);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2077066915, 0, 0, 1);
					}
				}
				else if (iLocal_2272 == 8 && iLocal_2272 != 9)
				{
					iLocal_2272 = 2;
				}
			}
			else if (iLocal_2272 == 8 && iLocal_2272 != 9)
			{
				iLocal_2272 = 2;
			}
			if ((iLocal_2272 == 8 || iLocal_2272 == 1) || iLocal_2272 == 2)
			{
				uVar0 = uVar0;
				if (MISC::GET_GAME_TIMER() > iLocal_1031)
				{
					OBJECT::GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_arm_gate_l"), -1131.99f, -1590.4f, 5.09f, &uVar0, &fLocal_2274);
					if (MISC::ABSF(fLocal_2274) > 0.02f)
					{
						iLocal_2272 = 9;
					}
					OBJECT::GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_arm_gate_l"), -1127f, -1587f, 5f, &uVar0, &fLocal_2274);
					if (MISC::ABSF(fLocal_2274) > 0.02f)
					{
						iLocal_2272 = 9;
					}
					iLocal_1031 = MISC::GET_GAME_TIMER() + 200;
				}
			}
			break;
	}
}

void func_24()//Position - 0x185C
{
	var uVar0;
	
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || GlobalFunc_7053())
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			iLocal_2271 = 0;
		}
		else if (iLocal_2271 == 0)
		{
			iLocal_2271 = MISC::GET_GAME_TIMER() + 3000;
		}
		if (GlobalFunc_74("ARM2_HLP09"))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (PAD::IS_CONTROL_PRESSED(0, 25))
					{
						HUD::CLEAR_HELP(0);
						if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
						{
							GlobalFunc_159("ARM2_HLP19", 12000);
						}
					}
				}
				else
				{
					HUD::CLEAR_HELP(1);
				}
			}
		}
		if (GlobalFunc_74("ARM2_HLP19"))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && MISC::GET_GAME_TIMER() > iLocal_2271)
			{
				WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &uVar0, 1);
				if (((PAD::IS_CONTROL_PRESSED(0, 25) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4)) && CAM::_IS_AIM_CAM_THIRD_PERSON_ACTIVE()) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1091.086f, -1671.047f, 3.0388f, -1069.428f, -1653.939f, 6.0045f, 9.625f, 0, 1, 0))
				{
					HUD::CLEAR_HELP(1);
				}
			}
		}
		if (GlobalFunc_74("ARM2_HLP16"))
		{
			if (func_25(3) || (ENTITY::IS_ENTITY_DEAD(Local_1070[13 /*14*/]) && ENTITY::IS_ENTITY_DEAD(Local_1070[14 /*14*/])))
			{
				if (MISC::GET_GAME_TIMER() > iLocal_2271)
				{
					HUD::CLEAR_HELP(1);
				}
			}
		}
		if (GlobalFunc_74("ARM2_HLP13"))
		{
			if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(-1100.541f, -1634.196f, 3.5236f, 20f) > 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1949))
				{
					OBJECT::DELETE_OBJECT(&iLocal_1949);
				}
			}
		}
	}
}

int func_25(int iParam0)//Position - 0x19E4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_1707[iVar0 /*6*/] == iParam0)
		{
			if (Local_1707[iVar0 /*6*/].f_1 == 1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}









void func_34()//Position - 0x1BC2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_1070)
	{
		if (HUD::DOES_BLIP_EXIST(Local_1070[iVar0 /*14*/].f_1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_1070[iVar0 /*14*/]))
			{
				if (PED::IS_PED_INJURED(Local_1070[iVar0 /*14*/]))
				{
					HUD::REMOVE_BLIP(&(Local_1070[iVar0 /*14*/].f_1));
				}
			}
			else
			{
				HUD::REMOVE_BLIP(&(Local_1070[iVar0 /*14*/].f_1));
			}
		}
		iVar0++;
	}
}

void func_35()//Position - 0x1C27
{
	switch (iLocal_2276)
	{
		case 0:
			if (iLocal_1066 >= 2)
			{
				GlobalFunc_Checkpoint1(1, "Follow Lemar down the alley", 0, 0, 0, 1);
				iLocal_2276++;
			}
			break;
		
		case 1:
			if (iLocal_1066 >= 7)
			{
				GlobalFunc_Checkpoint1(2, "Alleyway shootout", 0, 0, 0, 1);
				iLocal_2276++;
			}
			break;
		
		case 2:
			if (iLocal_1066 >= 9)
			{
				GlobalFunc_Checkpoint1(3, "Chase bike", 1, 0, 0, 1);
				iLocal_2276++;
			}
			break;
	}
}










































































void func_109()//Position - 0x8C7A
{
	switch (iLocal_1066)
	{
		case 0:
			if (func_523())
			{
				func_518(14);
			}
			break;
		
		case 1:
			if (func_517())
			{
				func_518(14);
			}
			break;
		
		case 2:
			if (func_516())
			{
				func_518(14);
			}
			break;
		
		case 3:
			if (func_516())
			{
				func_518(14);
			}
			break;
		
		case 4:
			if (func_516())
			{
				func_518(14);
			}
			break;
		
		case 5:
			if (func_516())
			{
				func_518(14);
			}
			break;
		
		case 6:
			if (func_512())
			{
				func_518(14);
			}
			break;
		
		case 7:
			if (func_509())
			{
				func_518(14);
			}
			break;
		
		case 8:
			if (func_509())
			{
				func_518(14);
			}
			break;
		
		case 9:
			if (func_508())
			{
				func_518(14);
			}
			break;
		
		case 10:
			if (func_245())
			{
				func_518(14);
			}
			break;
		
		case 11:
			if (func_151())
			{
				func_518(14);
			}
			break;
		
		case 12:
			func_148();
			break;
	}
	MISC::ENABLE_DISPATCH_SERVICE(3, 0);
	MISC::ENABLE_DISPATCH_SERVICE(5, 0);
	func_147();
	func_110(0);
}

void func_110(int iParam0)//Position - 0x8DB4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = 0;
	iVar2 = 19;
	if (iParam0 != 0)
	{
		iVar0 = 0;
		while (iVar0 <= 19)
		{
			if (Local_1707[iVar0 /*6*/] == iParam0)
			{
				iVar1 = iVar0;
				iVar2 = iVar0;
			}
			iVar0++;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (Local_1707[iVar0 /*6*/].f_1 == 1)
			{
				if (iLocal_1066 >= Local_1707[iVar0 /*6*/].f_5)
				{
					Local_1707[iVar0 /*6*/].f_2 = 99;
				}
				switch (Local_1707[iVar0 /*6*/])
				{
					case 1:
						switch (Local_1707[iVar0 /*6*/].f_2)
						{
							case 0:
								if (iLocal_1066 == 1)
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1139.074f, -1575.961f, 3.3289f, 1) < 200f)
									{
										func_535(2);
										Local_1707[iVar0 /*6*/].f_2++;
									}
								}
								else
								{
									if (iLocal_110 < 2)
									{
										func_535(2);
									}
									Local_1707[iVar0 /*6*/].f_2++;
								}
								break;
							
							case 1:
								if (!iLocal_111)
								{
									MISC::CLEAR_AREA(-1101.813f, -1618.129f, 3.5544f, 3f, 1, 0, 0, 0);
									func_146(3, 12, 0);
									PATHFIND::SET_PED_PATHS_IN_AREA(Vector(3.943655f, -1586.096f, -1131.871f) - Vector(1.125f, 6.6875f, 5.5625f), Vector(3.943655f, -1586.096f, -1131.871f) + Vector(1.125f, 6.6875f, 5.5625f), 0, 0);
									PATHFIND::SET_PED_PATHS_IN_AREA(Vector(4.110459f, -1656.14f, -1090.723f) - Vector(1f, 2.125f, 2.125f), Vector(4.110459f, -1656.14f, -1090.723f) + Vector(1f, 2.125f, 2.125f), 0, 0);
									if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
									{
										ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1070[2 /*14*/], 1);
									}
									PED::ADD_SCENARIO_BLOCKING_AREA(Vector(4.7285f, -1719.19f, -1078.01f) - Vector(20f, 50f, 50f), Vector(4.7285f, -1719.19f, -1078.01f) + Vector(20f, 50f, 50f), 0, 1, 1, 1);
									PED::ADD_SCENARIO_BLOCKING_AREA(Vector(4.712814f, -1595.976f, -1077.122f) - Vector(20f, 50f, 50f), Vector(4.712814f, -1595.976f, -1077.122f) + Vector(20f, 50f, 50f), 0, 1, 1, 1);
									PED::ADD_SCENARIO_BLOCKING_AREA(Vector(4.623703f, -1649.837f, -1144.853f) - Vector(20f, 50f, 50f), Vector(4.623703f, -1649.837f, -1144.853f) + Vector(20f, 50f, 50f), 0, 1, 1, 1);
									PED::ADD_SCENARIO_BLOCKING_AREA(Vector(4.776398f, -1654.28f, -1018.07f) - Vector(20f, 50f, 50f), Vector(4.776398f, -1654.28f, -1018.07f) + Vector(20f, 50f, 50f), 0, 1, 1, 1);
									PED::ADD_SCENARIO_BLOCKING_AREA(-2000f, -1846f, 68f, -1120f, -580f, 83f, 0, 1, 1, 1);
									MISC::CLEAR_AREA(-1090.982f, -1632.927f, 3.7328f, 2f, 1, 0, 0, 0);
									MISC::CLEAR_AREA(-1100.893f, -1618.562f, 3.7723f, 5f, 1, 0, 0, 0);
									if (iLocal_1066 <= 4)
									{
										func_145(1, joaat("bison"), -1090.038f, -1634.969f, 4.1764f, 125.6f, -1027080192);
										ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_1449[1 /*2*/], 1);
										VEHICLE::SET_VEHICLE_COLOURS(Local_1449[1 /*2*/], 58, 63);
										Local_1070[4 /*14*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_1449[1 /*2*/], 26, iLocal_2218, -1, 1, 1);
										Local_1070[5 /*14*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_1449[1 /*2*/], 26, iLocal_2218, 0, 1, 1);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[4 /*14*/], 3, 0);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[5 /*14*/], 3, 0);
										VEHICLE::SET_VEHICLE_LIGHTS(Local_1449[1 /*2*/], 1);
										VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1449[1 /*2*/], 0, 1);
										VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1449[1 /*2*/], 3);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[4 /*14*/], 14, 0);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[5 /*14*/], 14, 0);
									}
									OBJECT::ADD_DOOR_TO_SYSTEM(-967780114, joaat("prop_gar_door_03_ld"), -1074.65f, -1676.13f, 4.66f, 0, 1, 0);
									func_145(2, joaat("bison"), -1078.228f, -1651.632f, 4.192808f, -56.0181f, -1027080192);
									VEHICLE::SET_VEHICLE_COLOURS(Local_1449[2 /*2*/], 124, 124);
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1449[2 /*2*/], 7);
									VEHICLE::SET_VEHICLE_ALARM(Local_1449[2 /*2*/], 1);
									if (iLocal_1066 <= 8)
									{
										func_145(6, joaat("penumbra"), -1090.608f, -1631.216f, 3.7328f, 307.1f, -1027080192);
										VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Local_1449[6 /*2*/], 1);
										VEHICLE::SET_VEHICLE_COLOURS(Local_1449[6 /*2*/], 73, 73);
										VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1449[6 /*2*/], 7);
										VEHICLE::SET_VEHICLE_ALARM(Local_1449[6 /*2*/], 1);
										ENTITY::FREEZE_ENTITY_POSITION(Local_1449[6 /*2*/], 1);
									}
									uLocal_1033 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1090.411f, -1648.12f, 3.507f, 2.225f, 3.1754f, 1f, GlobalFunc_723(36f), 0, 7);
									uLocal_1034 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1095f, -1655f, 4f, 14.648f, 8.071f, 2f, GlobalFunc_723(33.48f), 0, 7);
									GlobalFunc_10617(94, 4);
									GlobalFunc_10617(95, 4);
									if (OBJECT::DOES_PICKUP_EXIST(uLocal_1035))
									{
										OBJECT::REMOVE_PICKUP(uLocal_1035);
									}
									iLocal_2222 = 0;
									MISC::SET_BIT(&iLocal_2222, 1);
									uLocal_1035 = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_armour_standard"), -1064.439f, -1664.484f, 3.6409f, -90f, 0f, 83.88f, iLocal_2222, -1, 2, 1, 0);
									Local_1707[iVar0 /*6*/].f_2++;
								}
								break;
							
							case 2:
								if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1950))
								{
									iLocal_1950 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1067f, -1665.61f, 4.79f, 1f, joaat("prop_gar_door_01"), 1, 0, 1);
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1951))
								{
									iLocal_1951 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1064.76f, -1668.76f, 4.79f, 1f, joaat("prop_gar_door_02"), 1, 0, 1);
								}
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_1950) && ENTITY::DOES_ENTITY_EXIST(iLocal_1951))
								{
									ENTITY::SET_ENTITY_INVINCIBLE(iLocal_1950, 1);
									ENTITY::SET_ENTITY_INVINCIBLE(iLocal_1951, 1);
									Local_1707[iVar0 /*6*/].f_1 = 0;
								}
								break;
						}
						break;
					
					case 2:
						iVar3 = joaat("weapon_unarmed");
						switch (Local_1707[iVar0 /*6*/].f_2)
						{
							case 0:
								Local_1707[iVar0 /*6*/].f_2++;
								break;
							
							case 1:
								WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar3, 1);
								if (iVar3 != joaat("weapon_unarmed"))
								{
									Local_1707[iVar0 /*6*/].f_2++;
								}
								break;
							
							case 2:
								if (MISC::GET_GAME_TIMER() > Local_1707[iVar0 /*6*/].f_3 + 3000 || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									if (PAD::GET_IS_USING_ALTERNATE_DRIVEBY())
									{
										GlobalFunc_159("ARM2_HLP18ALT", 12000);
									}
									else
									{
										GlobalFunc_159("ARM2_HLP18", 12000);
									}
									Local_1707[iVar0 /*6*/].f_2++;
								}
								break;
							
							case 3:
								if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_INJURED(Local_1070[8 /*14*/]))
								{
									Local_1707[iVar0 /*6*/].f_2++;
									Local_1707[iVar0 /*6*/].f_3 = MISC::GET_GAME_TIMER() + 1000;
								}
								break;
							
							case 4:
								if (MISC::GET_GAME_TIMER() > Local_1707[iVar0 /*6*/].f_3)
								{
									if (GlobalFunc_74("ARM2_HLP18") || GlobalFunc_74("ARM2_HLP18ALT"))
									{
										HUD::CLEAR_HELP(1);
									}
									Local_1707[iVar0 /*6*/].f_1 = 0;
								}
								break;
						}
						break;
					
					case 4:
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_1059))
						{
							if ((OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_1947) && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_1947) == 10) || iLocal_1066 == 9)
							{
								PHYSICS::_0xCC6E963682533882(iLocal_1059);
								Local_1707[iVar0 /*6*/].f_1 = 0;
							}
						}
						break;
					
					case 3:
						switch (Local_1707[iVar0 /*6*/].f_2)
						{
							case 0:
								if (iLocal_1066 > 1)
								{
									uLocal_1947 = OBJECT::GET_RAYFIRE_MAP_OBJECT(-1093.4f, -1653.1f, 3f, 10f, "DES_Scaffolding");
									if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_1947))
									{
										OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_1947, 2);
										GlobalFunc_7621(79, 0, 0, 1, 0);
										Local_1707[iVar0 /*6*/].f_2++;
									}
								}
								break;
							
							case 1:
								if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_1947))
								{
									if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_1947) == 3)
									{
										OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_1947, 4);
									}
								}
								if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_1947))
								{
									if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_1947) == 5)
									{
										Local_1707[iVar0 /*6*/].f_2 = 2;
									}
								}
								break;
							
							case 2:
								if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_1947))
								{
									if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_1947) == 5)
									{
										if (MISC::IS_BULLET_IN_ANGLED_AREA(-1087.801f, -1655.349f, 6.6f, -1089.401f, -1654.464f, 7.555488f, 1f, 1))
										{
											iLocal_1059 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1081.018f, -1647.606f, 4.1603f, 0.5f, joaat("prop_wallchunk_01"), 1, 0, 1);
											if (ENTITY::DOES_ENTITY_EXIST(iLocal_1059))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iLocal_1059))
												{
													PHYSICS::SET_DISABLE_BREAKING(iLocal_1059, 1);
												}
											}
											Local_1707[iVar0 /*6*/].f_3 = MISC::GET_GAME_TIMER() + 250;
											Local_1707[iVar0 /*6*/].f_2 = 3;
										}
										if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -1087.801f, -1655.349f, 6.691953f, -1089.401f, -1654.464f, 7.555488f, 1f))
										{
											if (((FIRE::IS_EXPLOSION_IN_ANGLED_AREA(0, -1087.801f, -1655.349f, 6.691953f, -1089.401f, -1654.464f, 7.555488f, 1f) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(4, -1087.801f, -1655.349f, 6.691953f, -1089.401f, -1654.464f, 7.555488f, 1f)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(1, -1087.801f, -1655.349f, 6.691953f, -1089.401f, -1654.464f, 7.555488f, 1f)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(2, -1087.801f, -1655.349f, 6.691953f, -1089.401f, -1654.464f, 7.555488f, 1f))
											{
												iLocal_1059 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1081.018f, -1647.606f, 4.1603f, 0.5f, joaat("prop_wallchunk_01"), 1, 0, 1);
												if (ENTITY::DOES_ENTITY_EXIST(iLocal_1059))
												{
													if (!ENTITY::IS_ENTITY_DEAD(iLocal_1059))
													{
														PHYSICS::SET_DISABLE_BREAKING(iLocal_1059, 1);
													}
												}
												Local_1707[iVar0 /*6*/].f_3 = MISC::GET_GAME_TIMER() + 250;
												Local_1707[iVar0 /*6*/].f_2 = 3;
											}
										}
										if (Local_1707[iVar0 /*6*/].f_2 == 3)
										{
											RECORDING::_0x48621C9FCA3EBD28(3);
										}
									}
									else
									{
										Local_1707[iVar0 /*6*/].f_2 = 0;
									}
								}
								break;
							
							case 3:
								if (MISC::GET_GAME_TIMER() > Local_1707[iVar0 /*6*/].f_3)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_1948))
									{
										if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_1948))
										{
											OBJECT::SET_OBJECT_TARGETTABLE(iLocal_1948, 0);
											OBJECT::DELETE_OBJECT(&iLocal_1948);
										}
										else
										{
											OBJECT::SET_OBJECT_TARGETTABLE(iLocal_1948, 0);
											ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_1948);
										}
									}
									func_125(101, 1);
									if (!PED::IS_PED_INJURED(Local_1070[13 /*14*/]))
									{
										func_123(33, 87, 1);
									}
									Local_1707[iVar0 /*6*/].f_2 = 4;
								}
								break;
							
							case 4:
								if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_1947))
								{
									if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_1947) == 5)
									{
										OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_1947, 6);
										AUDIO::START_AUDIO_SCENE("ARM_2_RAYFIRE");
										Local_1707[iVar0 /*6*/].f_2++;
									}
								}
								break;
							
							case 5:
								if (MISC::GET_GAME_TIMER() > Local_1707[iVar0 /*6*/].f_3)
								{
									if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
									{
										ENTITY::SET_ENTITY_PROOFS(Local_1070[2 /*14*/], 0, 1, 1, 1, 0, 0, 0, 0);
									}
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[2 /*2*/], 0))
									{
										ENTITY::SET_ENTITY_PROOFS(Local_1449[2 /*2*/], 0, 0, 1, 0, 0, 0, 0, 0);
									}
									if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -1090.74f, -1654.78f, 3.4f, 1) > 4.875f)
									{
										ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 1, 0, 0, 0, 0, 0);
									}
									FIRE::ADD_EXPLOSION(-1091.245f, -1653.531f, 7.07065f, 34, 4f, 0, 1, 1065353216);
									FIRE::ADD_EXPLOSION(-1088.896f, -1654.399f, 4.2178f, 34, 3.5f, 0, 1, 1065353216);
									AUDIO::PLAY_SOUND_FROM_COORD(-1, "Gas_Explosion", -1088.801f, -1655.546f, 7.3146f, "ARM_2_REPO_SOUNDS", 0, 0, 0);
									iLocal_1032 = MISC::GET_GAME_TIMER() + 1500;
									if (!PED::IS_PED_INJURED(Local_1070[13 /*14*/]))
									{
										if (GlobalFunc_713(Local_1070[13 /*14*/], -1091.245f, -1653.531f, 7.07065f, 1) < 4f)
										{
											PED::SET_PED_TO_RAGDOLL(Local_1070[13 /*14*/], 5000, 5000, 0, 1, 1, 0);
											ENTITY::SET_ENTITY_HEALTH(Local_1070[13 /*14*/], 0);
											FIRE::START_ENTITY_FIRE(Local_1070[13 /*14*/]);
										}
									}
									Local_1707[iVar0 /*6*/].f_3 = MISC::GET_GAME_TIMER() + 1000;
									Local_1707[iVar0 /*6*/].f_2++;
								}
								break;
							
							case 6:
								if (MISC::GET_GAME_TIMER() > Local_1707[iVar0 /*6*/].f_3)
								{
									ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[2 /*2*/], 0))
									{
										ENTITY::SET_ENTITY_PROOFS(Local_1449[2 /*2*/], 0, 0, 0, 0, 0, 0, 0, 0);
									}
									Local_1707[iVar0 /*6*/].f_1 = 0;
								}
								break;
						}
						break;
					
					case 5:
						if (iLocal_1066 >= 2)
						{
							switch (Local_1707[iVar0 /*6*/].f_2)
							{
								case 0:
									STREAMING::REQUEST_ANIM_SET("ANIM_GROUP_MOVE_LEMAR_ALLEY");
									Local_1707[iVar0 /*6*/].f_2++;
									break;
								
								case 1:
									if (STREAMING::HAS_ANIM_SET_LOADED("ANIM_GROUP_MOVE_LEMAR_ALLEY"))
									{
										if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
										{
											PED::SET_PED_MOVEMENT_CLIPSET(Local_1070[2 /*14*/], "ANIM_GROUP_MOVE_LEMAR_ALLEY", 1048576000);
											Local_1707[iVar0 /*6*/].f_1 = 0;
										}
									}
									break;
								}
						}
						break;
					
					case 6:
						if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
						{
							switch (Local_1707[iVar0 /*6*/].f_2)
							{
								case 0:
									if (CUTSCENE::IS_CUTSCENE_PLAYING())
									{
										Local_1707[iVar0 /*6*/].f_2++;
									}
									break;
								
								case 1:
									if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lamar", ENTITY::GET_ENTITY_MODEL(Local_1070[2 /*14*/])) || CUTSCENE::HAS_CUTSCENE_FINISHED())
									{
										if (CUTSCENE::HAS_CUTSCENE_FINISHED())
										{
											PED::FORCE_PED_MOTION_STATE(Local_1070[2 /*14*/], -530524, 0, 0, 0);
										}
										else
										{
											PED::FORCE_PED_MOTION_STATE(Local_1070[2 /*14*/], -530524, 0, 1, 0);
										}
										PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_1070[2 /*14*/], 2f);
										TASK::SET_PED_PATH_CLIMB_COST_MODIFIER(Local_1070[2 /*14*/], 0.1f);
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[0 /*2*/], 0))
										{
											func_121();
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1130.321f, -1589.826f, 3.3891f, 2f, 20000, 0.25f, 0, 39f);
											TASK::TASK_CLIMB(0, 1);
											func_120(Local_1070[2 /*14*/], 0);
										}
										Local_1707[iVar0 /*6*/].f_2 = 2;
										Local_1707[iVar0 /*6*/].f_3 = MISC::GET_GAME_TIMER() + 2000;
									}
									break;
								
								case 2:
									if (MISC::GET_GAME_TIMER() < Local_1707[iVar0 /*6*/].f_3)
									{
										PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_1070[2 /*14*/], 2f);
									}
									else
									{
										Local_1707[iVar0 /*6*/].f_1 = 0;
									}
									break;
								}
						}
						break;
					
					case 7:
						switch (Local_1707[iVar0 /*6*/].f_2)
						{
							case 0:
								if (CUTSCENE::IS_CUTSCENE_PLAYING())
								{
									Local_1707[iVar0 /*6*/].f_2++;
								}
								break;
							
							case 1:
								if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0) || CUTSCENE::HAS_CUTSCENE_FINISHED())
								{
									if (!CUTSCENE::IS_CUTSCENE_PLAYING())
									{
										PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -530524, 0, 0, 0);
									}
									else
									{
										PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -530524, 0, 1, 0);
									}
									PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 2f);
									Local_1707[iVar0 /*6*/].f_2 = 2;
									Local_1707[iVar0 /*6*/].f_3 = MISC::GET_GAME_TIMER() + 2000;
								}
								break;
							
							case 2:
								if (MISC::GET_GAME_TIMER() < Local_1707[iVar0 /*6*/].f_3)
								{
									PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 2f);
								}
								else
								{
									Local_1707[iVar0 /*6*/].f_1 = 0;
								}
								break;
						}
						break;
					
					case 8:
						if (ENTITY::DOES_ENTITY_EXIST(Local_1449[4 /*2*/]))
						{
							if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[4 /*2*/], 0))
							{
								func_119("ARM2_F03");
							}
							else if ((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_1449[4 /*2*/], 3, 30000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_1449[4 /*2*/], 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_1449[4 /*2*/], 0, 7000))
							{
								func_119("ARM2_F03");
							}
						}
						if (iLocal_1066 >= 2 && iLocal_1066 < 9)
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
							{
								func_119("ARM2_F04");
							}
						}
						break;
					
					case 9:
						if (Local_1707[iVar0 /*6*/].f_2 == 0)
						{
							PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(1f);
							VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
							PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(1f, 1f);
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1121.811f, -1599.719f, 1.023538f, -1066.708f, -1676.495f, 11.54423f, 34.4375f, 0, 1, 0))
							{
								Local_1707[iVar0 /*6*/].f_2 = 1;
							}
						}
						else if (Local_1707[iVar0 /*6*/].f_2 == 1)
						{
							PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
							VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
							PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
							if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1121.811f, -1599.719f, 1.023538f, -1066.708f, -1676.495f, 11.54423f, 34.4375f, 0, 1, 0))
							{
								Local_1707[iVar0 /*6*/].f_2 = 0;
							}
						}
						break;
					
					case 10:
						if (Local_1707[iVar0 /*6*/].f_2 == 0)
						{
							if (CUTSCENE::IS_CUTSCENE_PLAYING())
							{
								GlobalFunc_9805(-19.28961f, -1085.295f, 25.31096f, -35.2638f, -1079.359f, 30.06847f, 12.625f, -27.3711f, -1082.111f, 25.589f, 249.7235f, 4f, 20f, 10f, 1, 1, 1, 0, 0);
								GlobalFunc_9805(-29.77057f, -1086.7f, 24.11305f, -33.11995f, -1094.056f, 29.0473f, 6.3125f, -27.3711f, -1082.111f, 25.589f, 249.7235f, 4f, 20f, 10f, 1, 1, 1, 0, 0);
								GlobalFunc_9805(-31.77917f, -1094.77f, 25.10984f, -35.30418f, -1104.367f, 28.23484f, 5.9375f, -27.3711f, -1082.111f, 25.589f, 249.7235f, 4f, 20f, 10f, 1, 1, 1, 0, 0);
								GlobalFunc_9805(-20.76915f, -1077.899f, 24.25114f, -4.940775f, -1083.379f, 29.29708f, 5.8125f, -14.9697f, -1085.401f, 25.6721f, 238.037f, 6f, 10f, 10f, 1, 1, 1, 0, 0);
								Local_1449[0 /*2*/] = PLAYER::GET_PLAYERS_LAST_VEHICLE();
								if (ENTITY::DOES_ENTITY_EXIST(Local_1449[0 /*2*/]))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[0 /*2*/], 0))
									{
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1449[0 /*2*/], 1, 1);
										ENTITY::SET_ENTITY_HEALTH(Local_1449[0 /*2*/], 1800);
									}
								}
								MISC::CLEAR_AREA(-12.8803f, -1080.609f, 25.6721f, 20f, 1, 0, 0, 0);
								Local_1707[iVar0 /*6*/].f_1 = 0;
							}
						}
						break;
					
					case 11:
						switch (Local_1707[iVar0 /*6*/].f_2)
						{
							case 0:
								if (CUTSCENE::IS_CUTSCENE_PLAYING())
								{
									Local_1707[iVar0 /*6*/].f_2++;
								}
								break;
							
							case 1:
								if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0) || CUTSCENE::HAS_CUTSCENE_FINISHED())
								{
									if (GlobalFunc_1720())
									{
										PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), 1063765679, 1, 0, 0);
										PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
									}
									else
									{
										PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 1, 0, 0);
										PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1000, 0, 1, 0);
									}
									Local_1707[iVar0 /*6*/].f_2 = 2;
									Local_1707[iVar0 /*6*/].f_3 = MISC::GET_GAME_TIMER() + 1000;
								}
								break;
							
							case 2:
								if (MISC::GET_GAME_TIMER() < Local_1707[iVar0 /*6*/].f_3)
								{
								}
								else
								{
									Local_1707[iVar0 /*6*/].f_1 = 0;
								}
								break;
						}
						break;
					
					case 12:
						if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -39.62799f, -1099.24f, 25.25259f, 1) < 150.5f)
						{
							if (MISC::HAS_BULLET_IMPACTED_IN_AREA(-39.62799f, -1099.24f, 25.25259f, 26.5f, 1, 1))
							{
								func_119("ARM2_F07");
							}
							if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, -39.62799f, -1099.24f, 25.25259f, 26.5f))
							{
								func_119("ARM2_F07");
							}
							if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -39.62799f, -1099.24f, 25.25259f, 1) < 26.5f)
							{
								if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
								{
									iVar4 = joaat("weapon_unarmed");
									WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar4, 1);
									switch (iVar4)
									{
										case joaat("weapon_bat"):
										case joaat("weapon_crowbar"):
										case joaat("weapon_hammer"):
										case joaat("weapon_knife"):
										case joaat("weapon_nightstick"):
										case joaat("weapon_petrolcan"):
										case joaat("weapon_stickybomb"):
										case joaat("weapon_grenade"):
										case joaat("weapon_bottle"):
											break;
										
										default:
											func_119("ARM2_F07");
											break;
										}
									}
								}
						}
						break;
				}
				if (Local_1707[iVar0 /*6*/].f_2 == 99)
				{
					Local_1707[iVar0 /*6*/].f_1 = 0;
				}
			}
			iVar0++;
		}
	}
}









void func_119(char* sParam0)//Position - 0xAADB
{
	bLocal_1828 = true;
	bLocal_1828 = bLocal_1828;
	sLocal_1829 = sLocal_1829;
	sLocal_1829 = sParam0;
}

void func_120(int iParam0, bool bParam1)//Position - 0xAAF8
{
	if (bParam1)
	{
		TASK::SET_SEQUENCE_TO_REPEAT(uLocal_2269, 1);
	}
	TASK::CLOSE_SEQUENCE_TASK(uLocal_2269);
	if (!PED::IS_PED_INJURED(iParam0))
	{
		TASK::TASK_PERFORM_SEQUENCE(iParam0, uLocal_2269);
	}
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_2269);
}

void func_121()//Position - 0xAB2E
{
	TASK::OPEN_SEQUENCE_TASK(&uLocal_2269);
}


void func_123(int iParam0, int iParam1, int iParam2)//Position - 0xAB76
{
	char cVar0[64];
	
	if (Local_324[iParam0 /*10*/] == iParam1)
	{
		Local_324[iParam0 /*10*/].f_6 = iParam2;
	}
	else
	{
		StringCopy(&cVar0, "", 64);
		StringConCat(&cVar0, "SET_ACTION_FLAG() fail:", 64);
		StringConCat(&cVar0, func_124(iParam1), 64);
	}
}

char* func_124(int iParam0)//Position - 0xABB1
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "	ACT_NULL	 ";
			break;
		
		case 1:
			sVar0 = "	ACT_LAMAR_RUNS_UP_TO_CAR	 ";
			break;
		
		case 2:
			sVar0 = "	ACT_LAMAR_FOLLOWS_PLAYER	 ";
			break;
		
		case 3:
			sVar0 = "	ACT_SET_GARAGE_DOORS_LOCKED	 ";
			break;
		
		case 4:
			sVar0 = "	ACT_STOP_FOLLOWING_LAMAR_DOWN_ALLEY	 ";
			break;
		
		case 5:
			sVar0 = "	ACT_GET_PLAYER_CAR	 ";
			break;
		
		case 6:
			sVar0 = "	ACT_GPS_CUSTOM_ROUTE	 ";
			break;
		
		case 7:
			sVar0 = "	ACT_SIMEON	 ";
			break;
		
		case 8:
			sVar0 = "	ACT_SET_PLAYER_THROUGH_DRIVER_DOOR	 ";
			break;
		
		case 9:
			sVar0 = "	ACT_TURN_ON_CAR_RADIO	 ";
			break;
		
		case 10:
			sVar0 = "	ACT_LOCK_SHOWROOM_CARS	 ";
			break;
		
		case 11:
			sVar0 = "	ACT_AUDIO_SCENE_ARM_2_DRIVE_TO_ALLEY	 ";
			break;
		
		case 12:
			sVar0 = "	ACT_SET_GARAGE_VEHICLES_AS_NO_LONGER_NEEDED	 ";
			break;
		
		case 13:
			sVar0 = "	ACT_RELEASE_MISSION_TRIGGER	 ";
			break;
		
		case 14:
			sVar0 = "	ACT_SPAWN_FAIL_RESPONSE_ELSALVS	 ";
			break;
		
		case 15:
			sVar0 = "	ACT_BUDDY_HEAD_TRACKING	 ";
			break;
		
		case 16:
			sVar0 = "	ACT_LEMAR_EXITS_CAR	 ";
			break;
		
		case 17:
			sVar0 = "	action_LEMAR_APPROACHES_GATE	 ";
			break;
		
		case 18:
			sVar0 = "	action_player_exits_car	 ";
			break;
		
		case 19:
			sVar0 = "	ACTION_BUM_STAGGERS_FROM_GARAGE	 ";
			break;
		
		case 20:
			sVar0 = "	ACTION_LEMAR_WALKS_TOWARDS_BUM	 ";
			break;
		
		case 21:
			sVar0 = "	ACTION_LEMAR_INTERRACTS_WITH_BUM	 ";
			break;
		
		case 22:
			sVar0 = "	ACTION_LEMAR_IGNORES_BUM_IF_HIT	 ";
			break;
		
		case 23:
			sVar0 = "	ACTION_BUM_RETURNS_TO_GARAGE	 ";
			break;
		
		case 24:
			sVar0 = "	ACTION_WAIT_FOR_PLAYER_TO_CLIMB_GATE	 ";
			break;
		
		case 25:
			sVar0 = "	ACTION_VEHICLE_DRIVES_OFF	 ";
			break;
		
		case 26:
			sVar0 = "	ACTION_PLAYER_LOOK_ABOUT	 ";
			break;
		
		case 27:
			sVar0 = "	ACTION_LEMAR_LOOKS_AT_PASSING_CAR	 ";
			break;
		
		case 28:
			sVar0 = "	ACTION_DRUNK_GETS_UP_AFTER_LEMAR_INTERACTION	 ";
			break;
		
		case 29:
			sVar0 = "	ACTION_VEHICLE_BLOCKED_BY_PLAYER	 ";
			break;
		
		case 30:
			sVar0 = "	ACTION_VEHICLE_CONTINUES_DRIVING	 ";
			break;
		
		case 31:
			sVar0 = "	ACTION_LEMAR_REACTS_TO_PLAYER_BLOCKING_ELSAL	 ";
			break;
		
		case 32:
			sVar0 = "	ACTION_LEMAR_WAITS_FOR_PLAYER	 ";
			break;
		
		case 33:
			sVar0 = "	ACTION_LEMAR_RESUMES_WALK_DOWN_ALLEY	 ";
			break;
		
		case 34:
			sVar0 = "	ACTION_LEMAR_FOLLOWS_PLAYER_AT_GARAGES	 ";
			break;
		
		case 35:
			sVar0 = "	ACTION_PLAY_IDLES	 ";
			break;
		
		case 37:
			sVar0 = "	ACTION_LOAD_CUTSCENE	 ";
			break;
		
		case 38:
			sVar0 = "	ACTION_OPEN_GARAGE_1	 ";
			break;
		
		case 39:
			sVar0 = "	ACTION_OPEN_GARAGE_2	 ";
			break;
		
		case 40:
			sVar0 = "	ACTION_OPEN_GARAGE_3	 ";
			break;
		
		case 41:
			sVar0 = "	ACTION_LOCK_GARAGE_3	 ";
			break;
		
		case 42:
			sVar0 = "	ACTION_MUSIC_AT_BUM	 ";
			break;
		
		case 43:
			sVar0 = "	ACTION_INITIALISE_DRIVEOFF_VEHICLE	 ";
			break;
		
		case 44:
			sVar0 = "	ACT_UNFREEZE_DRIVEOFF_CAR	 ";
			break;
		
		case 45:
			sVar0 = "	ACT_LAMAR_LOOK_AT_GARAGES_ON_APPROACH	 ";
			break;
		
		case 46:
			sVar0 = "	ACT_REDUCE_PLAYER_SPEED	 ";
			break;
		
		case 47:
			sVar0 = "	ACT_ADUIO_END_ARM_2_DRIVE_TO_ALLEY	 ";
			break;
		
		case 48:
			sVar0 = "	ACTION_UPDATE_LAMAR_PROGRESS	 ";
			break;
		
		case 49:
			sVar0 = "	ACT_DRIVERS_LOOK_AT_PLAYER	 ";
			break;
		
		case 50:
			sVar0 = "	ACTION_LOCK_OPEN_GARAGE_3	 ";
			break;
		
		case 52:
			sVar0 = "	ACTION_LEMAR_EXITS_GARAGE	 ";
			break;
		
		case 53:
			sVar0 = "	ACTION_LEMAR_ADVANCES_TO_POST	 ";
			break;
		
		case 54:
			sVar0 = "	ACTION_MAKE_LAMAR_INVINCIBLE	 ";
			break;
		
		case 55:
			sVar0 = "	ACTION_LEMAR_ADVANCES_TO_PORTALOO	 ";
			break;
		
		case 56:
			sVar0 = "	ACTION_LEMAR_DIVERTS_TO_BISON	 ";
			break;
		
		case 58:
			sVar0 = "	ACTION_LEMAR_REACTS_TO_GUNFIRE	 ";
			break;
		
		case 59:
			sVar0 = "	ACTION_LEMAR_ADVANCES_AFTER_PORTALOO	 ";
			break;
		
		case 60:
			sVar0 = "	ACTION_LEMAR_MOVES_TO_COVER	 ";
			break;
		
		case 61:
			sVar0 = "	ACTION_LAMAR_SHOOTS_CAR	 ";
			break;
		
		case 62:
			sVar0 = "	acTION_lemar_RUN_TOWARDS_GATE	 ";
			break;
		
		case 63:
			sVar0 = "	ACTION_FORCE_GARAGE	 ";
			break;
		
		case 64:
			sVar0 = "	action_make_balcony_destructible	 ";
			break;
		
		case 65:
			sVar0 = "	ACTION_MAKE_CAR_TYRE_BURST	 ";
			break;
		
		case 66:
			sVar0 = "	ACTION_SET_STAGE_STUFF	 ";
			break;
		
		case 67:
			sVar0 = "	ACTION_ENEMY_BACKS_OFF	 ";
			break;
		
		case 68:
			sVar0 = "	ACTION_ENEMY_BY_BISON	 ";
			break;
		
		case 69:
			sVar0 = "	ACTION_ENEMY_FROM_LEFT	 ";
			break;
		
		case 70:
			sVar0 = "	ACTION_ENEMY_FROM_SKIP	 ";
			break;
		
		case 71:
			sVar0 = "	ACTION_ENEMY_FROM_SCAFFOLD	 ";
			break;
		
		case 72:
			sVar0 = "	ACTION_SCAFFOLD_PED_DROPS	 ";
			break;
		
		case 73:
			sVar0 = "	ACTION_ENEMY_AFTER_SCAFFOLD	 ";
			break;
		
		case 74:
			sVar0 = "	ACTION_ENEMY_ON_VERANDA	 ";
			break;
		
		case 75:
			sVar0 = "	ACTION_ENEMY_ON_BALCONY	 ";
			break;
		
		case 76:
			sVar0 = "	ACTION_ENEMY_FROM_DOOR	 ";
			break;
		
		case 77:
			sVar0 = "	ACTION_DRIVER_RUNS_TO_CAR	 ";
			break;
		
		case 78:
			sVar0 = "	ACTION_DRIVER_DRIVES_OFF	 ";
			break;
		
		case joaat("mpsv_lp0_31"):
			sVar0 = "	ACTION_FLEEING_CAR_DAMAGE	 ";
			break;
		
		case 80:
			sVar0 = "	ACTION_PETROL_TRAIL	 ";
			break;
		
		case 81:
			sVar0 = "	ACTION_EXPLODE_CAR	 ";
			break;
		
		case 82:
			sVar0 = "	ACTION_LOCK_ON_TO_GAS	 ";
			break;
		
		case 83:
			sVar0 = "	ACTION_LOCK_ON_TO_GAS_TRAIL	 ";
			break;
		
		case 84:
		case 85:
			sVar0 = "	ACTION_MUSIC_SHOOTOUT	 ";
			break;
		
		case 86:
			sVar0 = "	ACTION_UNFREEZE_FLEE_CAR_IF_ENTERED 	 ";
			break;
		
		case 87:
			sVar0 = "	ACT_STAT_PROPANE 	 ";
			break;
		
		case 91:
		case 92:
			sVar0 = "	ACTION_REMOVE_ALLEYWAY_ASSETS	 ";
			break;
		
		case 93:
			sVar0 = "	ACTION_PREP_CHASE_STAGE	 ";
			break;
		
		case 94:
			sVar0 = "	ACTION_DEAL_WITH_STUCK_BIKER	 ";
			break;
		
		case 95:
			sVar0 = "	ACTION_BIKER_FLEES	 ";
			break;
		
		case 96:
			sVar0 = "	ACTION_LEMAR_FOLLOW_PLAYER	 ";
			break;
		
		case 97:
			sVar0 = "	ACTION_BIKER_REACTS_TO_PLAYER_CLOSING_IN	 ";
			break;
		
		case 98:
			sVar0 = "	ACTION_BIKER_REACTS_TO_BEING_JACKED	 ";
			break;
		
		case 99:
			sVar0 = "	ACTION_BIKER_REACTS_TO_COMING_OFF_BIKE	 ";
			break;
		
		case 100:
			sVar0 = "	ACTION_MUSIC_CHASE	 ";
			break;
		
		case 101:
			sVar0 = "	ACTION_MUSIC_IN_CAR	 ";
			break;
		
		case 102:
			sVar0 = "	ACTION_MUSIC_BIKER_DOWN	 ";
			break;
		
		case 103:
			sVar0 = "	ACTION_ENSURE_LAMAR_CLIMBS_GATE	 ";
			break;
		
		case 104:
			sVar0 = "	ACTION_LAMAR_GETS_IN_PLAYER_CAR	 ";
			break;
		
		case 108:
			sVar0 = "	ACT_SET_LAMAR_FOR_STAGE	 ";
			break;
		
		case 109:
			sVar0 = "	ACT_LAMAR_GETS_IN_DRIVER_SEAT	 ";
			break;
		
		case 110:
			sVar0 = "	ACT_LAMAR_HEADS_BACK_HOME	 ";
			break;
		
		case 112:
			sVar0 = "	ACT_LAMAR_DRIVES_BACK_TO_HOME	 ";
			break;
		
		case 113:
			sVar0 = "	ACT_LAMAR_EXITS_UNDRIVEABLE_CAR	 ";
			break;
		
		case 114:
			sVar0 = "	ACT_LAMAR_GETS_IN_ANY_CAR	 ";
			break;
		
		case 116:
			sVar0 = "	ACT_STUCK_BIKE_CHECK	 ";
			break;
		
		case 117:
			sVar0 = "	ACT_LOAD_CUTSENE	 ";
			break;
		
		case 118:
			sVar0 = "	ACT_WARP_LAMAR_BACK	 ";
			break;
		
		case 119:
			sVar0 = "	ACT_STAT_BIKE_DAMAGE	 ";
			break;
		
		case 120:
			sVar0 = "	ACT_DO_HINT_CAM	 ";
			break;
		
		case 121:
			sVar0 = "	ACT_CUTSCENE_LEAD_IN	 ";
			break;
		
		default:
			sVar0 = " -NOT DEFINED-";
			break;
	}
	return sVar0;
}

int func_125(int iParam0, int iParam1)//Position - 0xB23A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_687)
	{
		if (iParam0 == Local_687[iVar0 /*7*/])
		{
			if (iParam1 == 1)
			{
				Local_687[iVar0 /*7*/].f_2 = 1;
			}
			else
			{
				Local_687[iVar0 /*7*/].f_2 = 0;
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}




















void func_145(int iParam0, int iParam1, struct<3> Param2, float fParam5, float fParam6)//Position - 0x1360F
{
	if (iParam0 == -1 || iParam0 >= 10)
	{
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[iParam0 /*2*/], 0))
	{
		if (ENTITY::GET_ENTITY_MODEL(Local_1449[iParam0 /*2*/]) != iParam1 && iParam1 != 0)
		{
			VEHICLE::DELETE_VEHICLE(&(Local_1449[iParam0 /*2*/]));
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1449[iParam0 /*2*/]))
	{
		Local_1449[iParam0 /*2*/] = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, 1, 1);
	}
	else if (!ENTITY::IS_ENTITY_DEAD(Local_1449[iParam0 /*2*/]))
	{
		ENTITY::SET_ENTITY_COORDS(Local_1449[iParam0 /*2*/], Param2, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(Local_1449[iParam0 /*2*/], fParam5);
	}
	else
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1449[iParam0 /*2*/]));
		Local_1449[iParam0 /*2*/] = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, 1, 1);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[iParam0 /*2*/], 0))
	{
		if (fParam6 != -100f)
		{
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_1449[iParam0 /*2*/], fParam6);
		}
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_1449[iParam0 /*2*/]))
		{
			VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_1449[iParam0 /*2*/], 0);
			VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_1449[iParam0 /*2*/], 0);
		}
	}
}

int func_146(int iParam0, int iParam1, int iParam2)//Position - 0x13723
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_1707[iVar0 /*6*/].f_1 == 1)
		{
			if (Local_1707[iVar0 /*6*/] == iParam0)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_1707[iVar0 /*6*/].f_1 == 0)
		{
			Local_1707[iVar0 /*6*/].f_1 = 1;
			Local_1707[iVar0 /*6*/] = iParam0;
			Local_1707[iVar0 /*6*/].f_2 = 0;
			Local_1707[iVar0 /*6*/].f_4 = iParam2;
			Local_1707[iVar0 /*6*/].f_5 = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_147()//Position - 0x137B3
{
	if (iLocal_2220 == 1)
	{
		GRAPHICS::DRAW_LIGHT_WITH_RANGE(-1089.766f, -1631.065f, 8.9467f, 255, 255, 200, 7f, 1f);
	}
	if (iLocal_2221 == 1)
	{
		GRAPHICS::DRAW_LIGHT_WITH_RANGE(-1085.957f, -1662.724f, 8.6111f, 255, 255, 200, 7f, 1f);
	}
}

void func_148()//Position - 0x137FB
{
	WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
	HUD::CLEAR_PRINTS();
	GlobalFunc_5103(0, 0);
	func_592(0);
}



int func_151()//Position - 0x13934
{
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.2f);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.2f);
	if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
	{
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
		iLocal_1470 = 3;
	}
	switch (iLocal_1470)
	{
		case 0:
			sLocal_1954 = "Armenian_2_mcs_6";
			func_242();
			CUTSCENE::REQUEST_CUTSCENE(sLocal_1954, 8);
			iLocal_1470 = 1;
			break;
		
		case 1:
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				func_161("Franklin", PLAYER::PLAYER_PED_ID(), 0, 2);
				if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 0, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 1, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 2, 2, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 3, 2, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 4, 3, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 5, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 7, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 8, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 9, 0, 0, 0);
				}
			}
			if (GlobalFunc_Has_Cutscene_Loaded())
			{
				func_535(11);
				GlobalFunc_8316(1, 1, 1, 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[4 /*2*/], 0))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Local_1449[4 /*2*/], 1);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1449[4 /*2*/], "Armenian_bike", 1, joaat("bagger"), 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_1070[2 /*14*/]))
				{
					if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1070[2 /*14*/], "Lamar", 1, joaat("ig_lamardavis"), 3);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1952))
				{
					OBJECT::DELETE_OBJECT(&iLocal_1952);
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_2_RIDE_BIKE_BACK"))
				{
					AUDIO::STOP_AUDIO_SCENE("ARM_2_RIDE_BIKE_BACK");
				}
				CUTSCENE::START_CUTSCENE(0);
				PED::REMOVE_SCENARIO_BLOCKING_AREAS();
				PED::ADD_SCENARIO_BLOCKING_AREA(-21.8129f, -1454.343f, 20.7942f, -17.8129f, -1450.343f, 40.7942f, 0, 1, 1, 1);
				PATHFIND::SET_PED_PATHS_IN_AREA(-21.8129f, -1454.343f, 20.7942f, -17.8129f, -1450.343f, 40.7942f, 0, 0);
				PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(-12.5851f, -1471.319f, 30.9463f, 6f, 1);
				RECORDING::_0x48621C9FCA3EBD28(4);
				iLocal_1470 = 2;
			}
			break;
		
		case 2:
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[0 /*2*/], 0))
				{
					GlobalFunc_9805(-9.370698f, -1402.745f, 26.9317f, -9.507262f, -1386.303f, 32.58361f, 270.39f, -17.2307f, -1412.02f, 28.3117f, 0f, 6f, 20f, 10f, 1, 1, 1, 0, 0);
					if (GlobalFunc_713(Local_1449[0 /*2*/], -5.3f, -1396f, 29f, 1) < 7f)
					{
						MISC::CLEAR_AREA(-17.347f, -1401.371f, 28.3343f, 3f, 1, 0, 0, 0);
						ENTITY::SET_ENTITY_COORDS(Local_1449[0 /*2*/], -17.347f, -1401.371f, 28.3343f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_1449[0 /*2*/], 270f);
					}
				}
				MISC::CLEAR_AREA(-5.3f, -1396f, 29f, 5f, 1, 0, 0, 0);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				CAM::STOP_GAMEPLAY_HINT(1);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(-17.0167f, -1456.231f, 29.6774f, 40f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(-17.0167f, -1456.231f, 29.6774f, 40f, 0, 0, 0, 0, 0);
				MISC::CLEAR_AREA_OF_PEDS(-17.0167f, -1456.231f, 29.6774f, 8f, 0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
				}
				iLocal_1470 = 3;
			}
			break;
		
		case 3:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				GlobalFunc_8316(0, 1, 1, 0);
				RECORDING::_0x81CBAE94390F9F89();
				return 1;
			}
			break;
	}
	return 0;
}










void func_161(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x13F30
{
	struct<50> Var0;
	int iVar65;
	
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_162(iParam1, &Var0, iParam3);
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

void func_162(int iParam0, var uParam1, int iParam2)//Position - 0x13FEB
{
	int iVar0;
	int iVar1;
	struct<50> Var2;
	struct<14> Var67;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	
	Var2 = 12;
	Var2.f_13 = 12;
	Var2.f_26 = 12;
	Var2.f_39 = 9;
	Var2.f_49 = 9;
	iVar81 = ENTITY::GET_ENTITY_MODEL(iParam0);
	GlobalFunc_8358(iParam0, &Var2, 0);
	GlobalFunc_8358(iParam0, uParam1, iParam2);
	iVar82 = 0;
	iVar83 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (uParam1->f_13[iVar0] != Var2.f_13[iVar0] || (*uParam1)[iVar0] != Var2[iVar0])
		{
			if (GlobalFunc_4911(iVar81, GlobalFunc_33(iVar0), GlobalFunc_5663(iParam0, Var2.f_13[iVar0], Var2[iVar0], GlobalFunc_33(iVar0)), &iVar1))
			{
				Var67 = { GlobalFunc_10828(iVar81, 2, uParam1->f_59) };
				uParam1->f_13[2] = Var67.f_3;
				(*uParam1)[2] = Var67.f_4;
				iVar82 = 1;
			}
			if (GlobalFunc_4912(iVar81, GlobalFunc_33(iVar0), GlobalFunc_5663(iParam0, Var2.f_13[iVar0], Var2[iVar0], GlobalFunc_33(iVar0)), &iVar1))
			{
				Var67 = { GlobalFunc_10828(iVar81, 1, uParam1->f_62) };
				uParam1->f_13[1] = Var67.f_3;
				(*uParam1)[1] = Var67.f_4;
				iVar83 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (uParam1->f_39[iVar0] != Var2.f_39[iVar0] || uParam1->f_49[iVar0] != Var2.f_49[iVar0])
		{
			if (GlobalFunc_4911(iVar81, 14, GlobalFunc_6668(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &iVar1))
			{
				Var67 = { GlobalFunc_10828(iVar81, 2, uParam1->f_59) };
				uParam1->f_13[2] = Var67.f_3;
				(*uParam1)[2] = Var67.f_4;
				iVar82 = 1;
			}
			if (GlobalFunc_4912(iVar81, 14, GlobalFunc_6668(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &iVar1))
			{
				Var67 = { GlobalFunc_10828(iVar81, 1, uParam1->f_62) };
				uParam1->f_13[1] = Var67.f_3;
				(*uParam1)[1] = Var67.f_4;
				iVar83 = 1;
			}
		}
		iVar0++;
	}
	if (iVar83 || iVar82)
	{
		iVar84 = GlobalFunc_5663(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
		iVar85 = GlobalFunc_5663(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
		iVar86 = GlobalFunc_24(iVar81, iVar85, iVar84);
		if (iVar86 != -99)
		{
			Var67 = { GlobalFunc_10828(iVar81, 0, iVar86) };
			uParam1->f_13[0] = Var67.f_3;
			(*uParam1)[0] = Var67.f_4;
		}
	}
}
















































































void func_242()//Position - 0x2A43D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Local_1645 - 1))
	{
		Local_1645[iVar0 /*12*/] = 0;
		Local_1645[iVar0 /*12*/].f_1 = -1;
		Local_1645[iVar0 /*12*/].f_2 = -1;
		Local_1645[iVar0 /*12*/].f_3 = 0;
		Local_1645[iVar0 /*12*/].f_5 = -1;
		Local_1645[iVar0 /*12*/].f_10 = 0;
		iVar0++;
	}
	HUD::CLEAR_HELP(1);
	GlobalFunc_5385(1);
}



int func_245()//Position - 0x2A537
{
	func_499(137, 156);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	func_426(0, 25, 2, 145, 1, 0, 1, 0);
	func_426(1, 26, 2, 145, 1, 0, 1, 0);
	func_426(2, 27, 3, 145, 1, 0, 1, 0);
	func_328(0, 108, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(1, 109, 1, 2, 139, 5, 140, 4, 144, 1, 0, 1, 0);
	func_328(2, 110, 0, 2, 143, 5, 140, 1, 0, 1, 0, 1, 0);
	func_328(3, 114, 1, 3, 141, 4, 144, 5, 140, 1, 0, 1, 0);
	func_328(14, 115, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(4, 113, 1, 2, 141, 4, 142, 5, 140, 1, 0, 1, 0);
	func_328(7, 118, 0, 2, 150, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(6, 117, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(8, 119, 0, 2, 145, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(9, 121, 0, 2, 151, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(10, 120, 0, 2, 151, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(5, 116, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(11, 92, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(12, 105, 1, 2, 153, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(13, 107, 0, 2, 145, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(15, 106, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_286(0, 69, 0, 0, 1, 0, 1, 0, 1, 0);
	func_284(1, 70, 0, 69, 2, 143, 6, 149, 1, 0, 1, 0);
	func_284(2, 71, 0, 69, 2, 152, 1, 0, 1, 0, 1, 0);
	func_286(3, 72, 2, 153, 5, 154, 5, 155, 1, 0);
	func_286(4, 73, 2, 153, 4, 155, 1, 0, 1, 0);
	func_247(7, 0, 0, 1, 0);
	func_247(9, 0, 0, 1, 0);
	if (func_246(9, 121))
	{
		return 1;
	}
	return 0;
}

int func_246(int iParam0, int iParam1)//Position - 0x2A724
{
	if (Local_324[iParam0 /*10*/] == iParam1)
	{
		if (Local_324[iParam0 /*10*/].f_3 == 1)
		{
			return 1;
		}
	}
	return 0;
}

void func_247(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2A74A
{
	if (func_278(iParam1, iParam2, iParam3, iParam4, 1, 0, 1, 0, 1, 0))
	{
		switch (iParam0)
		{
			case 1:
				if (!PED::IS_PED_INJURED(Local_1070[4 /*14*/]))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Local_1070[4 /*14*/], joaat("weapon_pistol"), -1, 1, 1);
					func_121();
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					func_120(Local_1070[4 /*14*/], 0);
				}
				if (!PED::IS_PED_INJURED(Local_1070[5 /*14*/]))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Local_1070[5 /*14*/], joaat("weapon_pistol"), -1, 1, 1);
					func_121();
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					func_120(Local_1070[5 /*14*/], 0);
				}
				func_1("ARM2_F01", 2000);
				break;
			
			case 2:
				if (!PED::IS_PED_INJURED(Local_1070[4 /*14*/]))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Local_1070[4 /*14*/], joaat("weapon_pistol"), -1, 1, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[4 /*14*/], 2, 1);
					func_121();
					if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_COORDS(Local_1070[4 /*14*/], 0, 0f, 0f, 0f), 1) > 1.4f)
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					}
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					func_120(Local_1070[4 /*14*/], 0);
				}
				if (!PED::IS_PED_INJURED(Local_1070[5 /*14*/]))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Local_1070[5 /*14*/], joaat("weapon_pistol"), -1, 1, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[5 /*14*/], 2, 1);
					func_121();
					if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_COORDS(Local_1070[5 /*14*/], 0, 0f, 0f, 0f), 1) > 1.4f)
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					}
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					func_120(Local_1070[5 /*14*/], 0);
				}
				func_1("ARM2_F01", 1500);
				break;
			
			case 14:
				func_1("ARM2_F01", 2000);
				break;
			
			case 15:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[1 /*2*/], 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1449[1 /*2*/]))
					{
						if (iLocal_2272 == 4 && fLocal_2274 == 1f)
						{
							if (!func_277(Local_1070[2 /*14*/], -1133.037f, -1583.803f, 2.556583f, -1129.521f, -1588.63f, 6.842f, 5.125f))
							{
								if (!PED::IS_PED_INJURED(Local_1070[4 /*14*/]))
								{
									WEAPON::GIVE_WEAPON_TO_PED(Local_1070[4 /*14*/], joaat("weapon_pistol"), -1, 1, 1);
									func_121();
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
									TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
									func_120(Local_1070[4 /*14*/], 0);
								}
								if (!PED::IS_PED_INJURED(Local_1070[5 /*14*/]))
								{
									WEAPON::GIVE_WEAPON_TO_PED(Local_1070[5 /*14*/], joaat("weapon_pistol"), -1, 1, 1);
									func_121();
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
									TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
									func_120(Local_1070[5 /*14*/], 0);
								}
								while (!func_261("AR2_BLOCK2", 3, Local_1070[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									SYSTEM::WAIT(0);
								}
								func_1("ARM2_F01", 2000);
							}
						}
					}
				}
				break;
			
			case 3:
				func_1("ARM2_F01", 2000);
				break;
			
			case 4:
				if (iLocal_2272 == 9)
				{
					func_259(22, -1128.141f, -1605.52f, 3.3985f, 341.9648f, joaat("weapon_pistol"), 0, 0, -1);
					func_259(23, -1127.131f, -1607.135f, 3.3985f, 2.1088f, joaat("weapon_pistol"), 0, 0, -1);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()), iLocal_1472);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1472, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
					PED::SET_PED_TARGET_LOSS_RESPONSE(Local_1070[22 /*14*/], 1);
					PED::SET_PED_TARGET_LOSS_RESPONSE(Local_1070[23 /*14*/], 1);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1070[22 /*14*/], 150f, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1070[23 /*14*/], 150f, 0);
					PED::SET_COMBAT_FLOAT(Local_1070[22 /*14*/], 2, 6f);
					PED::SET_COMBAT_FLOAT(Local_1070[22 /*14*/], 13, 5f);
					PED::SET_COMBAT_FLOAT(Local_1070[23 /*14*/], 2, 6f);
					PED::SET_COMBAT_FLOAT(Local_1070[23 /*14*/], 13, 5f);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[22 /*14*/], 50, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[23 /*14*/], 50, 1);
					GlobalFunc_6829(Local_1070[22 /*14*/], 1, 145);
					GlobalFunc_6829(Local_1070[23 /*14*/], 1, 145);
					GlobalFunc_4956();
					HUD::CLEAR_PRINTS();
					while (!func_261("ARM2_GET4", 8, Local_1070[22 /*14*/], "ARM2VAGOS4", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						SYSTEM::WAIT(0);
					}
					func_1("ARM2_F11", 2000);
				}
				break;
			
			case 6:
				if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1070[2 /*14*/], 1) > 100f && !GlobalFunc_490())
					{
						func_1("ARM2_F05", 0);
					}
					if (iLocal_1066 < 9 && iLocal_1066 >= 7)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1136.172f, -1579.05f, 2.68122f, -1129.543f, -1588.645f, 7.067074f, 56.75f, 0, 1, 0))
						{
							func_1("ARM2_F05", 0);
						}
					}
				}
				break;
			
			case 8:
				if (ENTITY::DOES_ENTITY_EXIST(Local_1449[4 /*2*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[4 /*2*/], 0))
					{
						if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1449[4 /*2*/], 1) > 500f)
						{
							func_248("ARM2_F06", "ARM2_LOSEB");
						}
					}
				}
				break;
			
			case 7:
				if (ENTITY::DOES_ENTITY_EXIST(Local_1449[4 /*2*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[4 /*2*/], 0))
					{
						if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1449[4 /*2*/], 1) > 500f)
						{
							func_1("ARM2_F09", 0);
						}
					}
				}
				break;
			
			case 5:
				func_1("ARM2_F07", 0);
				break;
			
			case 9:
				if (ENTITY::DOES_ENTITY_EXIST(Local_1070[2 /*14*/]))
				{
					if (PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
					{
						func_1("ARM2_F02", 0);
					}
				}
				break;
			
			case 10:
				if (ENTITY::DOES_ENTITY_EXIST(Local_1070[3 /*14*/]))
				{
					if (PED::IS_PED_INJURED(Local_1070[3 /*14*/]))
					{
						func_1("ARM2_F10", 0);
					}
				}
				break;
			
			case 11:
				break;
			
			case 12:
				if (iLocal_2275 > 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_1070[22 /*14*/]))
					{
						iLocal_2275 = -1;
					}
				}
				if (iLocal_2275 == 0)
				{
					iLocal_2275 = MISC::GET_GAME_TIMER() + 4000;
				}
				if (MISC::GET_GAME_TIMER() > iLocal_2275)
				{
					func_1("ARM2_F01", 0);
				}
				break;
			
			case 13:
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					func_1("ARM2_F01", 0);
				}
				break;
			}
	}
}

void func_248(char* sParam0, char* sParam1)//Position - 0x2ADA2
{
	GlobalFunc_5105();
	while (!func_261(sParam1, 0, PLAYER::PLAYER_PED_ID(), "Franklin", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
	{
		func_19(18, 0);
	}
	while (!GlobalFunc_5664(sParam1))
	{
		func_19(19, 0);
	}
	while (GlobalFunc_5664(sParam1))
	{
		func_19(20, 0);
	}
	while (!AUDIO::TRIGGER_MUSIC_EVENT("ARM2_MISSION_FAIL"))
	{
		func_19(21, 0);
	}
	GlobalFunc_10835(sParam0);
	while (!GlobalFunc_145())
	{
		SYSTEM::WAIT(0);
	}
	func_592(1);
}











int func_259(int iParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x2B047
{
	var uVar0;
	
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
	{
		uVar0 = iLocal_2218;
	}
	else
	{
		uVar0 = iLocal_2219;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1070[iParam0 /*14*/]))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1070[iParam0 /*14*/]));
	}
	if (iParam7 == 0)
	{
		Local_1070[iParam0 /*14*/] = PED::CREATE_PED(26, uVar0, Param1, fParam4, 1, 1);
	}
	else if (!ENTITY::IS_ENTITY_DEAD(iParam7))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam7, iParam8))
		{
			Local_1070[iParam0 /*14*/] = PED::CREATE_PED_INSIDE_VEHICLE(iParam7, 26, iVar0, iParam8, 1, 1);
		}
	}
	WEAPON::GIVE_WEAPON_TO_PED(Local_1070[iParam0 /*14*/], iParam5, 1000, 1, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1070[iParam0 /*14*/], iLocal_1472);
	if (iParam6 == 1)
	{
	}
	else
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[iParam0 /*14*/], 8, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[iParam0 /*14*/], 9, 0);
		PED::SET_PED_CONFIG_FLAG(Local_1070[iParam0 /*14*/], 118, 0);
	}
	PED::SET_PED_DIES_WHEN_INJURED(Local_1070[iParam0 /*14*/], 1);
	ENTITY::SET_ENTITY_HEALTH(Local_1070[iParam0 /*14*/], 130);
	PED::SET_PED_MAX_HEALTH(Local_1070[iParam0 /*14*/], 130);
	PED::REGISTER_HATED_TARGETS_AROUND_PED(Local_1070[iParam0 /*14*/], 100f);
	PED::SET_PED_TARGET_LOSS_RESPONSE(Local_1070[iParam0 /*14*/], 1);
	PED::SET_PED_ACCURACY(Local_1070[iParam0 /*14*/], 30);
	GlobalFunc_593(Local_1070[iParam0 /*14*/], 0);
	if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
	{
		PED::REGISTER_HATED_TARGETS_AROUND_PED(Local_1070[2 /*14*/], 100f);
	}
	iLocal_1032 = MISC::GET_GAME_TIMER() + 1000;
	return 1;
}


int func_261(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, char* sParam12, int iParam13)//Position - 0x2B23A
{
	if (!GlobalFunc_111())
	{
		func_275(sParam0, iParam1, iParam4, iParam7, iParam10);
		func_272(iParam1, iParam2, sParam3);
		if (iParam4 != -1)
		{
			func_272(iParam4, iParam5, sParam6);
		}
		if (iParam7 != -1)
		{
			func_272(iParam7, iParam8, sParam9);
		}
		if (iParam10 != -1)
		{
			func_272(iParam10, iParam11, sParam12);
		}
		if (HUD::IS_MESSAGE_BEING_DISPLAYED() && HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
		{
			if (GlobalFunc_10618(&Local_1476, cLocal_1641, sParam0, iParam13, 1, 0, 0))
			{
				bLocal_48 = true;
				return 1;
			}
		}
		else if (GlobalFunc_10618(&Local_1476, cLocal_1641, sParam0, iParam13, 0, 0, 0))
		{
			bLocal_48 = false;
			return 1;
		}
	}
	return 0;
}











void func_272(int iParam0, int iParam1, char* sParam2)//Position - 0x2B935
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_2251)
	{
		if (iLocal_2251[iVar0] == iParam1)
		{
			GlobalFunc_200(&Local_1476, iVar0);
			iLocal_2251[iVar0] = 0;
		}
		iVar0++;
	}
	if (iLocal_2251[iParam0] != 0)
	{
		GlobalFunc_200(&Local_1476, iParam0);
	}
	GlobalFunc_173(&Local_1476, iParam0, iParam1, sParam2, 0, 1);
	iLocal_2251[iParam0] = iParam1;
}



void func_275(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2BA52
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_2262) || !MISC::ARE_STRINGS_EQUAL(sLocal_2262, sParam0))
	{
		sLocal_2262 = sParam0;
		iVar0 = 0;
		while (iVar0 <= 15)
		{
			if (Local_1476[iVar0 /*10*/].f_7)
			{
				if (((iVar0 != iParam1 && iVar0 != iParam2) && iVar0 != iParam3) && iVar0 != iParam4)
				{
					GlobalFunc_200(&Local_1476, iVar0);
				}
			}
			iVar0++;
		}
	}
}


int func_277(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7)//Position - 0x2BAE9
{
	var uVar0[20];
	int iVar21;
	int iVar22;
	
	if (!PED::IS_PED_INJURED(uParam0))
	{
		iVar21 = PED::GET_PED_NEARBY_VEHICLES(iParam0, &uVar0);
		iVar22 = 0;
		while (iVar22 <= (iVar21 - 1))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0[iVar22], 0))
			{
				if (GlobalFunc_4966(uVar0[iVar22], Param1, Param4, fParam7))
				{
					return 0;
				}
			}
			iVar22++;
		}
	}
	return 1;
}

int func_278(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x2BB4A
{
	bLocal_685 = false;
	iLocal_686 = 0;
	if (func_279(&bLocal_685, &iLocal_686, iParam0, iParam1))
	{
		if (func_279(&bLocal_685, &iLocal_686, iParam2, iParam3))
		{
			if (func_279(&bLocal_685, &iLocal_686, iParam4, iParam5))
			{
				if (func_279(&bLocal_685, &iLocal_686, iParam6, iParam7))
				{
					if (func_279(&bLocal_685, &iLocal_686, iParam8, iParam9))
					{
					}
				}
			}
		}
	}
	if (bLocal_685)
	{
		return 1;
	}
	return 0;
}

int func_279(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2BBBA
{
	switch (iParam2)
	{
		case 0:
			*iParam0 = 1;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			if (iParam3 == 0 || (iParam3 != 0 && func_283(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 3:
			if (iParam3 == 0 || (iParam3 != 0 && func_282(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 6:
			if (iParam3 == 0 || (iParam3 != 0 && func_283(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 8:
			if (*iParam0)
			{
				return 0;
			}
			else
			{
				*iParam1 = 1;
				if (iParam3 == 0 || (iParam3 != 0 && func_283(iParam3)))
				{
					*iParam0 = 1;
				}
			}
			break;
		
		case 4:
			if (iParam3 != 0 && func_282(iParam3))
			{
				*iParam0 = 0;
			}
			break;
		
		case 5:
			if (iParam3 != 0 && func_283(iParam3))
			{
				*iParam0 = 0;
			}
			break;
		
		case 7:
			if (func_281(iParam3))
			{
				if (func_282(iParam3))
				{
					*iParam0 = 1;
				}
				else
				{
					*iParam0 = 0;
				}
			}
			else
			{
				if (func_283(iParam3))
				{
					func_280(iParam3);
				}
				*iParam0 = 0;
			}
			break;
	}
	return 1;
}

void func_280(int iParam0)//Position - 0x2BD13
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_687[0 /*7*/]);
	if (Local_687[iVar0 /*7*/] == iParam0)
	{
		Local_687[iVar0 /*7*/].f_3 = 1;
	}
}

int func_281(int iParam0)//Position - 0x2BD3F
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_687[0 /*7*/]);
	if (Local_687[iVar0 /*7*/] == iParam0)
	{
		if (Local_687[iVar0 /*7*/].f_1 && Local_687[iVar0 /*7*/].f_3)
		{
			return 1;
		}
	}
	return 0;
}

int func_282(int iParam0)//Position - 0x2BD80
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_687[0 /*7*/]);
	if (Local_687[iVar0 /*7*/] == iParam0)
	{
		if (Local_687[iVar0 /*7*/].f_1 && !Local_687[iVar0 /*7*/].f_2)
		{
			return 1;
		}
	}
	return 0;
}

int func_283(int iParam0)//Position - 0x2BDC2
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_687[0 /*7*/]);
	if (Local_687[iVar0 /*7*/] == iParam0)
	{
		if (Local_687[iVar0 /*7*/].f_1 && Local_687[iVar0 /*7*/].f_2)
		{
			return 1;
		}
	}
	return 0;
}

void func_284(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x2BE03
{
	if (!Local_139[iParam0 /*6*/].f_1)
	{
		if (func_285(iParam2, iParam3))
		{
			func_286(iParam0, iParam1, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11);
		}
	}
}

int func_285(int iParam0, int iParam1)//Position - 0x2BE3A
{
	if (Local_139[iParam0 /*6*/] == iParam1)
	{
		if (Local_139[iParam0 /*6*/].f_1)
		{
			return 1;
		}
	}
	else if (Local_139[iParam0 /*6*/] != 0)
	{
	}
	return 0;
}

void func_286(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x2BE6A
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (Local_139[iParam0 /*6*/] != iParam1)
	{
		Local_139[iParam0 /*6*/].f_1 = 0;
		Local_139[iParam0 /*6*/] = iParam1;
	}
	if (!Local_139[iParam0 /*6*/].f_1)
	{
		if (func_278(iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 1, 0) && !bLocal_1828)
		{
			if (!Local_139[iParam0 /*6*/].f_2)
			{
				Local_139[iParam0 /*6*/].f_2 = 1;
			}
			switch (Local_139[iParam0 /*6*/])
			{
				case 0:
					break;
				
				case 1:
					switch (Local_139[iParam0 /*6*/].f_3)
					{
						case 0:
							if (bLocal_48)
							{
								if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
									{
										cLocal_126 = { GlobalFunc_514() };
										if (!func_326(&cLocal_126))
										{
											Local_132 = { GlobalFunc_560() };
										}
										GlobalFunc_5105();
										Local_139[iParam0 /*6*/].f_3++;
									}
								}
							}
							break;
						
						case 1:
							if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								Local_139[iParam0 /*6*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 2:
					switch (Local_139[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_261("AR2_BU01b", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_139[iParam0 /*6*/].f_3++;
								Local_139[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 3000;
							}
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_139[iParam0 /*6*/].f_4)
							{
								if (GlobalFunc_892(6, 0))
								{
									if (GlobalFunc_892(6, 1))
									{
										iLocal_2228 = func_307(PLAYER::PLAYER_PED_ID(), 2);
										if (iLocal_2228 == 3)
										{
											if (func_261("AR2_BU27", 3, Local_1070[2 /*14*/], "Lamar", 0, Local_1070[0 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_47 = 1;
												GlobalFunc_2196(6, 0, 0);
												Local_139[iParam0 /*6*/].f_3++;
											}
										}
										if (iLocal_2228 == 1)
										{
											if (func_261("AR2_BU27b", 3, Local_1070[2 /*14*/], "Lamar", 0, Local_1070[0 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_47 = 1;
												GlobalFunc_2196(6, 0, 0);
												Local_139[iParam0 /*6*/].f_3++;
											}
										}
										if (iLocal_2228 == 2)
										{
											if (func_261("AR2_BU27", 3, Local_1070[2 /*14*/], "Lamar", 0, Local_1070[0 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_47 = 1;
												GlobalFunc_2196(6, 0, 0);
												Local_139[iParam0 /*6*/].f_3++;
											}
										}
										if (iLocal_2228 == 4)
										{
											if (func_261("AR2_BU27b", 3, Local_1070[2 /*14*/], "Lamar", 0, Local_1070[0 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_47 = 1;
												GlobalFunc_2196(6, 0, 0);
												Local_139[iParam0 /*6*/].f_3++;
											}
										}
									}
									else if (func_261("AR2_BU31", 3, Local_1070[2 /*14*/], "Lamar", 0, Local_1070[0 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, 8))
									{
										iLocal_47 = 1;
										Local_139[iParam0 /*6*/].f_3++;
									}
								}
							}
							break;
						
						case 2:
							if (!GlobalFunc_111())
							{
								Local_139[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 3000;
								Local_139[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 3:
							if (func_283(6) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								Local_139[iParam0 /*6*/].f_1 = 1;
							}
							else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[0 /*2*/], 0))
							{
								if (func_261("inCar", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
								{
									Local_139[iParam0 /*6*/].f_3++;
									Local_139[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 9000;
								}
							}
							else if (MISC::GET_GAME_TIMER() > Local_139[iParam0 /*6*/].f_4)
							{
								if (func_261("get_wheels", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
								{
									Local_139[iParam0 /*6*/].f_3++;
									Local_139[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 11000;
								}
							}
							break;
						
						case 4:
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								Local_139[iParam0 /*6*/].f_1 = 1;
							}
							else if (MISC::GET_GAME_TIMER() > Local_139[iParam0 /*6*/].f_4)
							{
								if (func_261("ARM2_NODRIVE", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
								{
									Local_139[iParam0 /*6*/].f_4 = (MISC::GET_GAME_TIMER() + 10000 + Local_139[iParam0 /*6*/].f_5 * 7000);
									Local_139[iParam0 /*6*/].f_5++;
									if (Local_139[iParam0 /*6*/].f_5 == 3)
									{
										Local_139[iParam0 /*6*/].f_1 = 1;
									}
								}
							}
							break;
					}
					break;
				
				case 10:
					switch (Local_139[iParam0 /*6*/].f_3)
					{
						case 0:
							if (!PED::IS_PED_INJURED(Local_1070[3 /*14*/]))
							{
								if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -31.3082f, -1102.691f, 25.4223f, 1) < 3.25f)
								{
									if (func_261("AR2_SIEMON", 5, Local_1070[3 /*14*/], "SIMEON", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_139[iParam0 /*6*/].f_3++;
										Local_139[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 10000;
										Local_139[iParam0 /*6*/].f_5++;
									}
								}
							}
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_139[iParam0 /*6*/].f_4)
							{
								if (Local_139[iParam0 /*6*/].f_5 == 3)
								{
									Local_139[iParam0 /*6*/].f_1 = 1;
								}
								else
								{
									Local_139[iParam0 /*6*/].f_3 = 0;
								}
							}
							break;
					}
					break;
				
				case 11:
					if (func_261("AR2_MESS", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_139[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 12:
					if (!PED::IS_PED_INJURED(Local_1070[22 /*14*/]))
					{
						HUD::CLEAR_PRINTS();
						GlobalFunc_4956();
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							if (func_261("ARM2_GET4", 8, Local_1070[22 /*14*/], "ARM2VAGOS4", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_139[iParam0 /*6*/].f_1 = 1;
							}
						}
					}
					break;
				
				case 5:
					if (Local_139[iParam0 /*6*/].f_4 < 2)
					{
						if (func_261("ARM2_WANT", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
						{
							func_125(18, 0);
							Local_139[iParam0 /*6*/].f_4++;
						}
					}
					else if (Local_139[iParam0 /*6*/].f_4 < 6)
					{
						if (func_261("ARM2_WANTb", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
						{
							func_125(18, 0);
							Local_139[iParam0 /*6*/].f_4++;
						}
					}
					break;
				
				case 6:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[0 /*2*/], 0))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(Local_1449[0 /*2*/])))
						{
							if (Local_139[iParam0 /*6*/].f_5 < 2)
							{
								if (func_261("AR2_GETON", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
								{
									func_125(15, 0);
									Local_139[iParam0 /*6*/].f_5++;
								}
							}
						}
						else if (Local_139[iParam0 /*6*/].f_4 < 5)
						{
							if (func_261("ARM2_OUTCAR", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								func_125(15, 0);
								Local_139[iParam0 /*6*/].f_4++;
							}
						}
					}
					break;
				
				case 68:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[0 /*2*/], 0))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(Local_1449[0 /*2*/])))
						{
							if (Local_139[iParam0 /*6*/].f_5 < 2)
							{
								if (func_261("AR2_GETON", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
								{
									func_125(15, 0);
									Local_139[iParam0 /*6*/].f_5++;
								}
							}
						}
						else if (Local_139[iParam0 /*6*/].f_4 < 5)
						{
							if (func_261("ARM2_BACKCH", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								func_125(15, 0);
								Local_139[iParam0 /*6*/].f_4++;
							}
						}
					}
					break;
				
				case 7:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[0 /*2*/], 0))
					{
						if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1070[2 /*14*/], 1) < 10f)
						{
							if (Local_139[iParam0 /*6*/].f_4 < 5)
							{
								if (func_261("ARM2_OUTCARB", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
								{
									func_125(17, 0);
									Local_139[iParam0 /*6*/].f_4++;
								}
							}
						}
					}
					break;
				
				case 8:
					if (Local_139[iParam0 /*6*/].f_4 < 5)
					{
						if (func_261("ARM2_BACKIN", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
						{
							func_125(16, 0);
							Local_139[iParam0 /*6*/].f_4++;
						}
					}
					break;
				
				case 64:
					if (Local_139[iParam0 /*6*/].f_4 < 5)
					{
						func_125(16, 0);
					}
					break;
				
				case 3:
					if (func_283(2) && !MISC::IS_STRING_NULL_OR_EMPTY(&Local_132))
					{
						if (func_304(&Local_132, &cLocal_126, 3, Local_1070[2 /*14*/], "Lamar", 0, Local_1070[0 /*14*/], "Franklin", -1, 0, 0, 8))
						{
							iLocal_47 = 1;
							StringCopy(&Local_132, "", 24);
							StringCopy(&cLocal_126, "", 24);
							func_125(2, 0);
						}
					}
					else if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -1134.2f, -1574.5f, 5.1f, 1) > 60f)
					{
						switch (Local_139[iParam0 /*6*/].f_3)
						{
							case 0:
								if (GlobalFunc_230(43))
								{
									if (func_261("AR2_BU02d", 3, Local_1070[2 /*14*/], "Lamar", 0, Local_1070[0 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, 8))
									{
										iLocal_47 = 1;
										Local_139[iParam0 /*6*/].f_3 = 4;
									}
								}
								else if (GlobalFunc_230(40))
								{
									if (func_261("AR2_BU02c", 3, Local_1070[2 /*14*/], "Lamar", 0, Local_1070[0 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, 8))
									{
										iLocal_47 = 1;
										Local_139[iParam0 /*6*/].f_3 = 4;
									}
								}
								else if (func_261("AR2_BU02", 3, Local_1070[2 /*14*/], "Lamar", 0, Local_1070[0 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, 8))
								{
									iLocal_47 = 1;
									Local_139[iParam0 /*6*/].f_3 = 3;
								}
								break;
							
							case 3:
								if (func_261("AR2_BU02b", 3, Local_1070[2 /*14*/], "Lamar", 0, Local_1070[0 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, 8))
								{
									iLocal_47 = 1;
									Local_139[iParam0 /*6*/].f_3++;
								}
								break;
							
							case 4:
								if (GlobalFunc_111())
								{
									Local_139[iParam0 /*6*/].f_3 = 7;
								}
								break;
							
							case 7:
								if (func_261("driveBant", 3, Local_1070[2 /*14*/], "Lamar", 0, Local_1070[0 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, 8))
								{
									iLocal_47 = 1;
									Local_139[iParam0 /*6*/].f_3++;
								}
								break;
							
							case 9:
								if (GlobalFunc_111())
								{
									GlobalFunc_5105();
									Local_139[iParam0 /*6*/].f_3++;
								}
								break;
							
							case 10:
								if (func_261("DriveApp1", 3, Local_1070[2 /*14*/], "Lamar", 0, Local_1070[0 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, 8))
								{
									iLocal_47 = 1;
									Local_139[iParam0 /*6*/].f_3++;
								}
								break;
						}
					}
					else
					{
						GlobalFunc_5105();
						iLocal_47 = 0;
						Local_139[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 14:
					if (func_261("AR2_BU04", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_139[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 13:
					switch (Local_139[iParam0 /*6*/].f_3)
					{
						case 0:
							GlobalFunc_5105();
							Local_139[iParam0 /*6*/].f_3++;
							break;
						
						case 1:
							if (func_261("AR2_BU03", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_139[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 2:
							if (!GlobalFunc_5664("AR2_BU03"))
							{
								Local_139[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 15:
					if (func_261("AR2_AN04", 3, Local_1070[2 /*14*/], "Lamar", 1, Local_1070[3 /*14*/], "Arm2bum", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_139[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 16:
					switch (Local_139[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_301("AR2_AN04b", "AR2_AN04b_1", 3, Local_1070[2 /*14*/], "Lamar", 1, Local_1070[3 /*14*/], "Arm2bum", -1, 0, 0, 8))
							{
								Local_139[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 1:
							if (func_301("AR2_AN04b", "AR2_AN04b_2", 3, Local_1070[2 /*14*/], "Lamar", 1, Local_1070[3 /*14*/], "Arm2bum", -1, 0, 0, 8))
							{
								Local_139[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 17:
					switch (Local_139[iParam0 /*6*/].f_3)
					{
						case 0:
							Local_139[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 1000;
							Local_139[iParam0 /*6*/].f_3++;
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_139[iParam0 /*6*/].f_4)
							{
								if (func_301("AR2_AN04b", "AR2_AN04b_4", 3, Local_1070[2 /*14*/], "Lamar", 1, Local_1070[3 /*14*/], "Arm2bum", -1, 0, 0, 8))
								{
									Local_139[iParam0 /*6*/].f_1 = 1;
								}
							}
							break;
						
						case 2:
							if (!GlobalFunc_5664("AR2_AN04b"))
							{
								AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_1070[3 /*14*/], "AR2_DFAH", "ARM2bum", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
								Local_139[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 18:
					switch (Local_139[iParam0 /*6*/].f_3)
					{
						case 0:
							GlobalFunc_5105();
							Local_139[iParam0 /*6*/].f_3++;
							break;
						
						case 1:
							if (func_261("AR2_AN04d", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_139[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 20:
					switch (Local_139[iParam0 /*6*/].f_3)
					{
						case 0:
							Local_139[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 1000;
							Local_139[iParam0 /*6*/].f_3++;
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_139[iParam0 /*6*/].f_4)
							{
								if (func_261("AR2_see", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
								{
									Local_139[iParam0 /*6*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				
				case 39:
					if (!func_283(64))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[1 /*2*/], 0))
						{
							if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
							{
								switch (Local_139[iParam0 /*6*/].f_3)
								{
									case 0:
										if (GlobalFunc_156(Local_1449[1 /*2*/], Local_1070[2 /*14*/], 1) < 6f)
										{
											Local_139[iParam0 /*6*/].f_3++;
										}
										break;
									
									case 1:
										if (func_261("AR2_AN05", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
										{
											Local_139[iParam0 /*6*/].f_1 = 1;
										}
										break;
									}
								}
						}
					}
					else
					{
						Local_139[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 21:
					switch (Local_139[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_261("ARM2_OUT", 4, Local_1070[4 /*14*/], "arm2VAGOSCAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_139[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 1:
							if (GlobalFunc_5664("move"))
							{
								Local_139[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 2:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[1 /*2*/], 0))
							{
								if (ENTITY::GET_ENTITY_SPEED(Local_1449[1 /*2*/]) > 1f)
								{
									if (func_261("ARM2_OUT2", 4, Local_1070[4 /*14*/], "arm2VAGOSCAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_139[iParam0 /*6*/].f_3++;
									}
								}
								else if (func_301("ARM2_OUT2", "ARM2_OUT2_2", 4, Local_1070[4 /*14*/], "arm2VAGOSCAR", -1, 0, 0, -1, 0, 0, 8))
								{
									Local_139[iParam0 /*6*/].f_3++;
								}
							}
							break;
						
						case 3:
							if (func_261("ARM2_OUT3", 4, Local_1070[4 /*14*/], "arm2VAGOSCAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_139[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 4:
							if (func_261("ARM2_OUT4", 4, Local_1070[4 /*14*/], "arm2VAGOSCAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_139[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 23:
					if (func_261("ARM2_GET4", 8, Local_1070[4 /*14*/], "arm2VAGOS4", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						if (!PED::IS_PED_INJURED(Local_1070[4 /*14*/]))
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_1070[4 /*14*/], joaat("weapon_pistol"), -1, 1, 1);
							func_121();
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							func_120(Local_1070[4 /*14*/], 0);
						}
						if (!PED::IS_PED_INJURED(Local_1070[5 /*14*/]))
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_1070[5 /*14*/], joaat("weapon_pistol"), -1, 1, 1);
							func_121();
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							func_120(Local_1070[5 /*14*/], 0);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[1 /*2*/], 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1449[1 /*2*/]))
							{
								Var0 = { ENTITY::GET_ENTITY_VELOCITY(Local_1449[1 /*2*/]) };
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1449[1 /*2*/]);
								ENTITY::SET_ENTITY_VELOCITY(Local_1449[1 /*2*/], Var0);
							}
						}
						Local_139[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 22:
					switch (Local_139[iParam0 /*6*/].f_3)
					{
						case 0:
							if (GlobalFunc_5664("ARM2_OUT"))
							{
								Local_139[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 1:
							if (func_261("move", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_139[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 24:
					if (func_261("AR2_BU12", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_139[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 25:
					if (!PED::IS_PED_INJURED(Local_1070[4 /*14*/]) && !PED::IS_PED_INJURED(Local_1070[5 /*14*/]))
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_DISABLED(Local_1070[5 /*14*/]))
						{
							AUDIO::STOP_PED_SPEAKING(Local_1070[5 /*14*/], 1);
						}
						if (!AUDIO::IS_AMBIENT_SPEECH_DISABLED(Local_1070[4 /*14*/]))
						{
							AUDIO::STOP_PED_SPEAKING(Local_1070[4 /*14*/], 1);
						}
						switch (Local_139[iParam0 /*6*/].f_3)
						{
							case 0:
								if (MISC::GET_GAME_TIMER() > Local_139[iParam0 /*6*/].f_4)
								{
									if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1070[4 /*14*/], 1) < 15f)
									{
										if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
										{
											AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_1070[4 /*14*/], "CHAT_STATE", "SPEECH_PARAMS_FORCE", 1);
											Local_139[iParam0 /*6*/].f_3 = 2;
										}
										else
										{
											AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_1070[5 /*14*/], "CHAT_STATE", "SPEECH_PARAMS_FORCE", 1);
											Local_139[iParam0 /*6*/].f_3 = 3;
										}
									}
								}
								break;
							
							case 2:
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1070[4 /*14*/]))
								{
									AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_1070[5 /*14*/], "CHAT_RESP", "SPEECH_PARAMS_FORCE", 1);
									Local_139[iParam0 /*6*/].f_3 = 4;
								}
								break;
							
							case 3:
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1070[5 /*14*/]))
								{
									AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_1070[4 /*14*/], "CHAT_RESP", "SPEECH_PARAMS_FORCE", 1);
									Local_139[iParam0 /*6*/].f_3 = 4;
								}
								break;
							
							case 4:
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1070[4 /*14*/]) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1070[5 /*14*/]))
								{
									Local_139[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 9000;
									Local_139[iParam0 /*6*/].f_3 = 0;
								}
								break;
							}
					}
					break;
				
				case 26:
					if (func_261("AR2_BU12", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_139[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 27:
					switch (Local_139[iParam0 /*6*/].f_3)
					{
						case 0:
							Local_139[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 10000;
							Local_139[iParam0 /*6*/].f_3++;
							break;
						
						case 1:
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1070[2 /*14*/], 1) < 15f)
							{
								if (func_261("AR2_BU07", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
								{
									Local_139[iParam0 /*6*/].f_1 = 1;
								}
							}
							else if (MISC::GET_GAME_TIMER() > Local_139[iParam0 /*6*/].f_4)
							{
								Local_139[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 28:
					if (func_261("ARM2_adoor", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_139[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 29:
					if (func_261("ARM2_nextone", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_139[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 30:
					if (func_261("ARM2_last", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_139[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 31:
					switch (Local_139[iParam0 /*6*/].f_3)
					{
						case 0:
							if (GlobalFunc_663("ARM2_INS07", 0, 0))
							{
								Local_139[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 1:
							if (Local_139[iParam0 /*6*/].f_4 < 3)
							{
								if (func_261("WaitAtGar", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_139[iParam0 /*6*/].f_3++;
									Local_139[iParam0 /*6*/].f_4++;
									Local_139[iParam0 /*6*/].f_3 = MISC::GET_GAME_TIMER() + 4000;
									if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
									{
										func_299(Local_1070[2 /*14*/]);
										TASK::TASK_LOOK_AT_ENTITY(Local_1070[2 /*14*/], PLAYER::PLAYER_PED_ID(), 4000, 0, 2);
									}
								}
							}
							else
							{
								Local_139[iParam0 /*6*/].f_1 = 1;
							}
							break;
						
						default:
							if (MISC::GET_GAME_TIMER() > Local_139[iParam0 /*6*/].f_3)
							{
								GlobalFunc_2232(Local_1070[2 /*14*/], 1);
								Local_139[iParam0 /*6*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 19:
					switch (Local_139[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_297(14, 32) > 0)
							{
								if (!func_283(55))
								{
									if (func_261("AR2_BU12", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
									{
										Local_139[iParam0 /*6*/].f_3 = 1;
									}
								}
								else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_1070[2 /*14*/], 1) - Vector(5f, 0f, 0f), -1065.555f, -1675.355f, 24.1932f, 150f, 0, 1, 0))
								{
									if (func_261("AR2_LEAVE2", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
									{
										Local_139[iParam0 /*6*/].f_3 = 1;
									}
								}
								else if (func_261("AR2_LEAVE1", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
								{
									Local_139[iParam0 /*6*/].f_3 = 1;
								}
							}
							break;
						
						case 1:
							if (func_297(14, 32) == 0)
							{
								Local_139[iParam0 /*6*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 33:
					if (func_261("ARM2_UPTO", 4, Local_1070[4 /*14*/], "ARM2VAGOSCAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_139[iParam0 /*6*/].f_4++;
					}
					if (Local_139[iParam0 /*6*/].f_4 >= 5)
					{
						Local_139[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 34:
					switch (Local_139[iParam0 /*6*/].f_3)
					{
						case 0:
							Local_139[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 3000;
							Local_139[iParam0 /*6*/].f_3++;
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_139[iParam0 /*6*/].f_4)
							{
								Local_139[iParam0 /*6*/].f_1 = 1;
							}
							if (func_261("frank_hit", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_139[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 36:
					switch (Local_139[iParam0 /*6*/].f_3)
					{
						case 0:
							Local_139[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 10000;
							Local_139[iParam0 /*6*/].f_3++;
							break;
						
						case 1:
							if (GlobalFunc_111())
							{
								Local_139[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 10000;
							}
							if (MISC::GET_GAME_TIMER() > Local_139[iParam0 /*6*/].f_4)
							{
								Local_139[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 2:
							if (func_296("ARM2_HURRY", 3, Local_1070[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_139[iParam0 /*6*/].f_3++;
								Local_139[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 12000;
							}
							break;
						
						case 3:
							if (GlobalFunc_111())
							{
								Local_139[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 10000;
							}
							if (MISC::GET_GAME_TIMER() > Local_139[iParam0 /*6*/].f_4)
							{
								Local_139[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 4:
							if (func_296("openit", 3, Local_1070[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_139[iParam0 /*6*/].f_3 = 1;
								Local_139[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 12000;
								Local_139[iParam0 /*6*/].f_5++;
								if (Local_139[iParam0 /*6*/].f_5 == 2)
								{
									Local_139[iParam0 /*6*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				
				case 37:
					if (Local_139[iParam0 /*6*/].f_5 < 6)
					{
						if (MISC::GET_GAME_TIMER() > Local_139[iParam0 /*6*/].f_4)
						{
							if (func_261("AR2_MESS", 3, Local_1070[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								func_125(87, 0);
								Local_139[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 5000;
								Local_139[iParam0 /*6*/].f_5++;
							}
						}
					}
					else
					{
						Local_139[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 38:
					if (Local_139[iParam0 /*6*/].f_5 < 2)
					{
						if (MISC::GET_GAME_TIMER() > Local_139[iParam0 /*6*/].f_4)
						{
							if (func_261("AR2_BLOCK", 3, Local_1070[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								func_125(86, 0);
								Local_139[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 8000;
								Local_139[iParam0 /*6*/].f_5++;
							}
						}
					}
					else
					{
						Local_139[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 40:
					if (func_261("ARM2_GET", 5, Local_1070[9 /*14*/], "ARM2VAGOS1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_139[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 41:
					switch (Local_139[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_295("ARM2_ATTACK", 3, Local_1070[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, 7))
							{
								Local_139[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 1:
							if (func_301("ARM2_COVER", "ARM2_COVER_1", 3, Local_1070[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_139[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 43:
					if (func_295("AR2_MCS_4_LO", 0, Local_1070[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, 7))
					{
						Local_139[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 42:
					if (func_261("AR2_HELP", 3, Local_1070[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_139[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 44:
					switch (Local_139[iParam0 /*6*/].f_3)
					{
						case 0:
							Local_139[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 3000;
							Local_139[iParam0 /*6*/].f_3++;
							break;
						
						case 1:
							if (!PED::IS_PED_INJURED(Local_1070[11 /*14*/]) && MISC::GET_GAME_TIMER() < Local_139[iParam0 /*6*/].f_4)
							{
								if (func_261("AR2_BU40", 3, Local_1070[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_139[iParam0 /*6*/].f_1 = 1;
								}
							}
							else
							{
								Local_139[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 45:
					switch (Local_139[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_261("ARM2_MORE", 3, Local_1070[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_139[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 1:
							if (func_261("AR2_BU18", 3, Local_1070[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								GlobalFunc_159("ARM2_HLP15", 12000);
								Local_139[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 46:
					if (func_261("AR2_BU37", 3, Local_1070[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						func_125(130, 1);
						Local_139[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 47:
					if (!PED::IS_PED_INJURED(Local_1070[13 /*14*/]))
					{
						if (func_301("AR2_BU37b", "AR2_BU37b_2", 3, Local_1070[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, 8))
						{
							func_125(130, 1);
							Local_139[iParam0 /*6*/].f_1 = 1;
						}
					}
					else
					{
						Local_139[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 48:
					switch (Local_139[iParam0 /*6*/].f_3)
					{
						case 0:
							if (!GlobalFunc_111())
							{
								Local_139[iParam0 /*6*/].f_4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 14000));
								Local_139[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_139[iParam0 /*6*/].f_4)
							{
								Local_139[iParam0 /*6*/].f_3++;
							}
							else if (GlobalFunc_111())
							{
								Local_139[iParam0 /*6*/].f_3 = 0;
							}
							break;
						
						case 2:
							iVar3 = 0;
							if (iLocal_1036[0] < 8 && iLocal_1047 != 0)
							{
								iLocal_1048[0] = 0;
								iVar3++;
							}
							if (((iLocal_1036[1] == 0 || iLocal_1036[2] == 0) || iLocal_1036[3] == 0) || iLocal_1036[4] == 0)
							{
								if (iLocal_1047 != 1)
								{
									iLocal_1048[iVar3] = 1;
									iVar3++;
								}
							}
							if (((iLocal_1036[5] < 3 || iLocal_1036[6] < 3) || iLocal_1036[7] < 3) || iLocal_1036[8] < 3)
							{
								if (iLocal_1047 != 2)
								{
									iLocal_1048[iVar3] = 2;
									iVar3++;
								}
							}
							if (iLocal_1036[9] < 8 && iLocal_1047 != 3)
							{
								iLocal_1048[iVar3] = 3;
								iVar3++;
							}
							if (iVar3 > 0)
							{
								Local_139[iParam0 /*6*/].f_4 = iLocal_1048[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar3)];
								Local_139[iParam0 /*6*/].f_3++;
							}
							else if (iLocal_1047 == -1)
							{
								Local_139[iParam0 /*6*/].f_1 = 1;
							}
							iLocal_1047 = -1;
							break;
						
						case 3:
							if (!GlobalFunc_111())
							{
								switch (Local_139[iParam0 /*6*/].f_4)
								{
									case 0:
										if (func_261("ARM2_SHOUT", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_139[iParam0 /*6*/].f_3 = 0;
											iLocal_1036[0]++;
											iLocal_1047 = 0;
										}
										break;
									
									case 1:
										iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
										while (iVar4 > 0)
										{
											switch ((iVar4 % 4))
											{
												case 0:
													if (iLocal_1036[1] == 0)
													{
														iVar5 = 0;
													}
													break;
												
												case 1:
													if (iLocal_1036[2] == 0)
													{
														iVar5 = 1;
													}
													break;
												
												case 2:
													if (iLocal_1036[3] == 0)
													{
														iVar5 = 2;
													}
													break;
												
												case 3:
													if (iLocal_1036[4] == 0)
													{
														iVar5 = 3;
													}
													break;
											}
											iVar4 = (iVar4 - 1);
										}
										Local_139[iParam0 /*6*/].f_3 = 4;
										iLocal_1047 = 1;
										Local_139[iParam0 /*6*/].f_4 = iVar5;
										break;
									
									case 2:
										iVar8 = 0;
										iVar7 = -1;
										iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
										while (iVar7 == -1)
										{
											iVar8++;
											switch (iVar6)
											{
												case 0:
													if (iLocal_1036[5] < 3)
													{
														iVar7 = 0;
													}
													else
													{
														iVar6++;
													}
													break;
												
												case 1:
													if (iLocal_1036[6] < 3)
													{
														iVar7 = 1;
													}
													else
													{
														iVar6++;
													}
													break;
												
												case 2:
													if (iLocal_1036[7] < 3)
													{
														iVar7 = 2;
													}
													else
													{
														iVar6++;
													}
													break;
												
												case 3:
													if (iLocal_1036[8] < 3)
													{
														iVar7 = 3;
													}
													else
													{
														iVar6 = 0;
													}
													break;
											}
											if (iVar8 == 5)
											{
												iVar7 = 10;
											}
										}
										if (iVar7 != 10)
										{
											Local_139[iParam0 /*6*/].f_3 = 5;
											iLocal_1047 = 2;
											Local_139[iParam0 /*6*/].f_4 = iVar7;
										}
										else
										{
											Local_139[iParam0 /*6*/].f_3 = 0;
										}
										break;
									
									case 3:
										if (func_261("AR2_tnt", 3, Local_1070[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_139[iParam0 /*6*/].f_3 = 0;
											iLocal_1036[9]++;
											iLocal_1047 = 3;
										}
										break;
								}
							}
							else
							{
								Local_139[iParam0 /*6*/].f_3 = 0;
							}
							break;
						
						case 4:
							switch (Local_139[iParam0 /*6*/].f_4)
							{
								case 0:
									if (func_261("shtchat1", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 2, Local_1070[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, 8))
									{
										Local_139[iParam0 /*6*/].f_3 = 0;
										iLocal_1036[1] = 1;
									}
									break;
								
								case 1:
									if (func_261("shtchat2", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, 8))
									{
										Local_139[iParam0 /*6*/].f_3 = 0;
										iLocal_1036[2] = 1;
									}
									break;
								
								case 2:
									if (func_261("shtchat3", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, 8))
									{
										Local_139[iParam0 /*6*/].f_3 = 0;
										iLocal_1036[3] = 1;
									}
									break;
								
								case 3:
									if (func_261("shtchat4", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, 8))
									{
										Local_139[iParam0 /*6*/].f_3 = 0;
										iLocal_1036[4] = 1;
									}
									break;
							}
							break;
						
						case 5:
							iVar9 = func_294();
							if (iVar9 != -1)
							{
								switch (Local_139[iParam0 /*6*/].f_4)
								{
									case 0:
										if (func_261("ARM2_GET", 5, Local_1070[iVar9 /*14*/], "ARM2VAGOS1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_139[iParam0 /*6*/].f_3 = 0;
											iLocal_1036[5]++;
										}
										break;
									
									case 1:
										if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
										{
											if (func_261("ARM2_GET2", 6, Local_1070[iVar9 /*14*/], "ARM2VAGOS2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_139[iParam0 /*6*/].f_3 = 0;
												iLocal_1036[6]++;
											}
										}
										else if (func_261("ARM2_NOGO", 5, Local_1070[iVar9 /*14*/], "ARM2VAGOS1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_139[iParam0 /*6*/].f_3 = 0;
											iLocal_1036[6]++;
										}
										break;
									
									case 2:
										if (func_261("ARM2_GET3", 7, Local_1070[iVar9 /*14*/], "ARM2VAGOS3", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_139[iParam0 /*6*/].f_3 = 0;
											iLocal_1036[7]++;
										}
										break;
									
									case 3:
										if (func_261("ARM2_GET4", 8, Local_1070[iVar9 /*14*/], "ARM2VAGOS4", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_139[iParam0 /*6*/].f_3 = 0;
											iLocal_1036[8]++;
										}
										break;
									}
							}
							break;
					}
					break;
				
				case 49:
					switch (Local_139[iParam0 /*6*/].f_3)
					{
						case 0:
							if (GlobalFunc_5664("AR2_BU37"))
							{
								GlobalFunc_4956();
							}
							if (func_261("AR2_BLOWUP", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_139[iParam0 /*6*/].f_1 = 1;
							}
							Local_139[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 670;
							Local_139[iParam0 /*6*/].f_3++;
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_139[iParam0 /*6*/].f_4)
							{
								Local_139[iParam0 /*6*/].f_1 = 1;
							}
							else if (func_261("AR2_BLOWUP", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_139[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 50:
					if (func_283(101))
					{
						if (func_261("AR2_godst", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
						{
							Local_139[iParam0 /*6*/].f_1 = 1;
						}
					}
					else if (func_301("AR2_godst", "AR2_godst_3", 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, 8))
					{
						Local_139[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 51:
					switch (Local_139[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_261("AR2_BU19", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_139[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 1:
							if (func_261("AR2_BU19b", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_139[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 52:
					if (ENTITY::DOES_ENTITY_EXIST(Local_1070[18 /*14*/]))
					{
						if (!PED::IS_PED_INJURED(Local_1070[18 /*14*/]))
						{
							if (func_261("ARM2_BALCON", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_139[iParam0 /*6*/].f_1 = 1;
							}
						}
						else
						{
							Local_139[iParam0 /*6*/].f_1 = 1;
						}
					}
					break;
				
				case 53:
					switch (Local_139[iParam0 /*6*/].f_3)
					{
						case 0:
							if (!GlobalFunc_111())
							{
								Local_139[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 1:
							if (ENTITY::DOES_ENTITY_EXIST(Local_1070[19 /*14*/]))
							{
								if (!PED::IS_PED_INJURED(Local_1070[19 /*14*/]))
								{
									if (func_301("AR2_BU20b", "AR2_BU20b_1", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, 8))
									{
										Local_139[iParam0 /*6*/].f_1 = 1;
									}
								}
								else
								{
									Local_139[iParam0 /*6*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				
				case 54:
					if (ENTITY::DOES_ENTITY_EXIST(Local_1070[21 /*14*/]))
					{
						if (!PED::IS_PED_INJURED(Local_1070[21 /*14*/]))
						{
							if (func_261("AR2_DOOR", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_139[iParam0 /*6*/].f_1 = 1;
							}
						}
						else
						{
							Local_139[iParam0 /*6*/].f_1 = 1;
						}
					}
					break;
				
				case 55:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[6 /*2*/], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1449[6 /*2*/]))
						{
							if (func_261("AR2_BU26", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_139[iParam0 /*6*/].f_1 = 1;
							}
						}
						else
						{
							Local_139[iParam0 /*6*/].f_1 = 1;
						}
					}
					else
					{
						Local_139[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 57:
					if (bLocal_1065)
					{
						Local_139[iParam0 /*6*/].f_1 = 1;
					}
					else if (func_261("AR2_BU36", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_139[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 56:
					switch (Local_139[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_261("ARM2_MORE2", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_139[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 1:
							if (func_261("ARM2_MORE2", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_139[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 58:
					switch (Local_139[iParam0 /*6*/].f_3)
					{
						case 0:
							Local_139[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 500;
							Local_139[iParam0 /*6*/].f_3++;
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_139[iParam0 /*6*/].f_4)
							{
								if (func_261("AR2_safe", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
								{
									Local_139[iParam0 /*6*/].f_1 = 1;
								}
							}
							if (MISC::GET_GAME_TIMER() > Local_139[iParam0 /*6*/].f_4 + 4000)
							{
								Local_139[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 59:
					switch (Local_139[iParam0 /*6*/].f_3)
					{
						case 0:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[4 /*2*/], 0))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1449[4 /*2*/], -1129.596f, -1588.691f, -0.139362f, -1141.044f, -1572.93f, 7.562129f, 25.25f, 0, 1, 0))
								{
									Local_139[iParam0 /*6*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (func_261("AR2_MCS5_LI", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 1, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_139[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 63:
					switch (Local_139[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_261("AR2_BU23", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_139[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 1:
							if (func_261("ARM2_GOBIKE", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_139[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 2:
							if (func_283(30))
							{
								if (func_282(33))
								{
									if (func_261("get_wheels", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
									{
										Local_139[iParam0 /*6*/].f_1 = 1;
									}
								}
								else
								{
									Local_139[iParam0 /*6*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				
				case 60:
					if (func_261("ARM2_burn", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_139[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 61:
					switch (Local_139[iParam0 /*6*/].f_3)
					{
						case 0:
							Local_139[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 4500;
							Local_139[iParam0 /*6*/].f_3++;
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_139[iParam0 /*6*/].f_4)
							{
								if (func_282(101) && func_282(110))
								{
									if (func_261("AR2_BU24", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_139[iParam0 /*6*/].f_1 = 1;
									}
								}
								else
								{
									Local_139[iParam0 /*6*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				
				case 62:
					if (func_261("AR2_LEAVE3", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_139[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 65:
					if (func_283(31) && !MISC::IS_STRING_NULL_OR_EMPTY(&Local_132))
					{
						if (func_304(&Local_132, &cLocal_126, 3, Local_1070[2 /*14*/], "Lamar", 0, Local_1070[0 /*14*/], "Franklin", -1, 0, 0, 8))
						{
							iLocal_47 = 1;
							StringCopy(&Local_132, "", 24);
							StringCopy(&cLocal_126, "", 24);
							func_125(31, 0);
						}
					}
					else
					{
						switch (Local_139[iParam0 /*6*/].f_3)
						{
							case 0:
								func_292(1);
								Local_139[iParam0 /*6*/].f_3++;
								break;
							
							case 1:
								func_292(0);
								break;
							}
					}
					break;
				
				case 66:
					if (!PED::IS_PED_INJURED(Local_1070[8 /*14*/]))
					{
						if (MISC::GET_GAME_TIMER() > Local_139[iParam0 /*6*/].f_4)
						{
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1070[8 /*14*/], 1) < 40f)
							{
								AUDIO::SET_AMBIENT_VOICE_NAME(Local_1070[8 /*14*/], "G_M_Y_SalvaGoon_02_SALVADORIAN_MINI_02");
								GlobalFunc_5122(Local_1070[8 /*14*/], "GENERIC_INSULT_HIGH", 10);
								Local_139[iParam0 /*6*/].f_3++;
								Local_139[iParam0 /*6*/].f_4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(2500, 4000));
							}
						}
					}
					break;
				
				case 67:
					if (func_261("ARM2_GETIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_139[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 69:
					switch (Local_139[iParam0 /*6*/].f_3)
					{
						case 0:
							GlobalFunc_4956();
							Local_139[iParam0 /*6*/].f_3 = 100;
							break;
						
						case 100:
							if (func_261("AR2_AN14", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_139[iParam0 /*6*/].f_3 = 1;
							}
							break;
						
						case 1:
							if (func_261("AR2_BU34", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_139[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 70:
					if (func_261("AR2_bye", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_139[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 71:
					if (func_261("AR2_FINDCAR", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_139[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 72:
					if (Local_139[iParam0 /*6*/].f_5 < 3)
					{
						if (MISC::GET_GAME_TIMER() > Local_139[iParam0 /*6*/].f_4)
						{
							if (func_289(6, 117) == 2)
							{
								GlobalFunc_4935();
							}
							if (func_261("AR2_BRING", 3, Local_1070[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								func_287(6, 117, 0);
								Local_139[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 8000;
								Local_139[iParam0 /*6*/].f_5++;
							}
						}
					}
					else
					{
						Local_139[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 73:
					if (Local_139[iParam0 /*6*/].f_5 < 3)
					{
						if (MISC::GET_GAME_TIMER() > Local_139[iParam0 /*6*/].f_4)
						{
							if (func_289(6, 117) == 2)
							{
								GlobalFunc_4935();
							}
							if (func_261("AR2_NOBIKE", 3, Local_1070[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								func_287(6, 117, 0);
								Local_139[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 8000;
								Local_139[iParam0 /*6*/].f_5++;
							}
						}
					}
					else
					{
						Local_139[iParam0 /*6*/].f_1 = 1;
					}
					break;
				}
			}
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		Local_114 = { GlobalFunc_560() };
	}
	else
	{
		Local_120 = { Local_114 };
		Local_120 = { Local_120 };
	}
}

void func_287(int iParam0, int iParam1, int iParam2)//Position - 0x2F035
{
	if (Local_324[iParam0 /*10*/] == iParam1)
	{
		Local_324[iParam0 /*10*/].f_8 = iParam2;
	}
}


int func_289(int iParam0, int iParam1)//Position - 0x2F067
{
	if (Local_324[iParam0 /*10*/] == iParam1)
	{
		return Local_324[iParam0 /*10*/].f_8;
	}
	return -1;
}



void func_292(int iParam0)//Position - 0x2F2BC
{
	if (iParam0 == 1)
	{
		iLocal_2265 = 1;
		iLocal_2264 = 0;
		iLocal_2263 = 1;
		iLocal_2266 = 10;
		iLocal_1060 = 0;
	}
	else if (!PED::IS_PED_INJURED(Local_1070[8 /*14*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[0 /*2*/], 0))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1449[4 /*2*/], (ENTITY::GET_ENTITY_SPEED(Local_1449[0 /*2*/]) * 3.5f), (ENTITY::GET_ENTITY_SPEED(Local_1449[0 /*2*/]) * 3.5f), 20f, 0, 1, 0))
		{
			if (iLocal_2263 == 1)
			{
				iLocal_2265 = 3;
				GlobalFunc_5105();
			}
		}
		switch (iLocal_2265)
		{
			case 2:
				if (iLocal_2267 == -1)
				{
					iLocal_2267 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
				}
				if (iLocal_2267 == 0)
				{
					if (func_261("AR2_AN09", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
					{
						iLocal_2267 = -1;
						iLocal_2265 = 4;
					}
				}
				else if (func_261("ARM2_BIKE", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
				{
					iLocal_2267 = -1;
					iLocal_2265 = 4;
				}
				break;
			
			case 4:
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_2216))
				{
					if (func_261(sLocal_2216, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
					{
						sLocal_2216 = "";
					}
				}
				else if (!GlobalFunc_111())
				{
					iLocal_2264 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 6000));
					iLocal_2265 = 5;
				}
				break;
			
			case 5:
				if (MISC::GET_GAME_TIMER() > iLocal_2264)
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1070[8 /*14*/], 1) < 50f)
					{
						iLocal_2266 = 11;
						iLocal_2265 = 4;
						sLocal_2216 = "AR2_AN13";
					}
					else if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1070[8 /*14*/], 1) > 100f)
					{
						if (iLocal_2266 == 11)
						{
							if (func_261("AR2_lost", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								iLocal_2265 = 4;
								iLocal_2266 = 10;
							}
						}
						else
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_2216))
							{
							}
							else if (func_293(&iLocal_2223, &iLocal_1060, 0, 2, 0, 0))
							{
								if (iLocal_2223 == 0)
								{
									sLocal_2216 = "AR2_AN10";
								}
								else if (iLocal_2223 == 1)
								{
									sLocal_2216 = "AR2_AN11";
								}
								else if (iLocal_2223 == 2)
								{
									sLocal_2216 = "AR2_AN12";
								}
								iLocal_2265 = 4;
							}
							iLocal_2266 = 10;
						}
					}
				}
				break;
			
			case 3:
				iLocal_2263 = 0;
				if (WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), 0) != joaat("weapon_unarmed"))
				{
					if (func_261("AR2_AN15", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
					{
						iLocal_2265 = 7;
					}
				}
				else if (func_261("AR2_AN15b", 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
				{
					iLocal_2265 = 9;
				}
				break;
			
			case 7:
				if (!GlobalFunc_111())
				{
					func_146(2, 12, 0);
					iLocal_2265 = 5;
				}
				break;
			
			case 8:
				iLocal_2265 = 5;
				break;
			
			case 9:
				if (!GlobalFunc_111())
				{
					iLocal_2265 = 5;
				}
				break;
			
			case 1:
				if (!GlobalFunc_111())
				{
					iLocal_2265 = 2;
				}
				break;
			}
	}
}

int func_293(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2F5FA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = iParam2;
	while (iVar0 <= iParam3)
	{
		if (!MISC::IS_BIT_SET(*iParam1, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
	iVar0 = iParam2;
	while (iVar0 <= iParam3)
	{
		if (!MISC::IS_BIT_SET(*iParam1, iVar0))
		{
			if (iVar2 == 0)
			{
				if (iParam4 == 1)
				{
					*iParam1 = 0;
				}
				MISC::SET_BIT(iParam1, iVar0);
				*uParam0 = iVar0;
				return 1;
			}
			else
			{
				iVar2 = (iVar2 - 1);
			}
		}
		iVar0++;
	}
	if (iParam5 == 1)
	{
		*iParam1 = 0;
		*uParam0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
		MISC::SET_BIT(iParam1, *uParam0);
		return 1;
	}
	return 0;
}

int func_294()//Position - 0x2F6A2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_1070)
	{
		if (!PED::IS_PED_INJURED(Local_1070[iVar0 /*14*/]))
		{
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(Local_1070[iVar0 /*14*/]) == iLocal_1472)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_295(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9, int iParam10)//Position - 0x2F6E4
{
	func_275(sParam0, iParam1, iParam4, iParam7, -1);
	func_272(iParam1, iParam2, sParam3);
	if (iParam4 != -1)
	{
		func_272(iParam4, iParam5, sParam6);
	}
	if (iParam7 != -1)
	{
		func_272(iParam7, iParam8, sParam9);
	}
	if (GlobalFunc_10618(&Local_1476, cLocal_1641, sParam0, iParam10, 1, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_296(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, char* sParam12, int iParam13)//Position - 0x2F73C
{
	if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		if (func_261(sParam0, iParam1, iParam2, sParam3, iParam4, iParam5, sParam6, iParam7, iParam8, sParam9, iParam10, iParam11, sParam12, iParam13))
		{
			return 1;
		}
	}
	return 0;
}

int func_297(int iParam0, int iParam1)//Position - 0x2F774
{
	if (Local_324[iParam0 /*10*/] == iParam1)
	{
		return Local_324[iParam0 /*10*/].f_6;
	}
	return -1;
}


void func_299(int iParam0)//Position - 0x2F81C
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_HEADTRACKING_ENTITY(iParam0, PLAYER::PLAYER_PED_ID()))
		{
			TASK::TASK_CLEAR_LOOK_AT(iParam0);
		}
	}
}


int func_301(char* sParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, char* sParam10, int iParam11)//Position - 0x2F85F
{
	if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		func_275(sParam0, iParam2, iParam5, iParam8, -1);
		func_272(iParam2, iParam3, sParam4);
		if (iParam5 != -1)
		{
			func_272(iParam5, iParam6, sParam7);
		}
		if (iParam8 != -1)
		{
			func_272(iParam8, iParam9, sParam10);
		}
		if (GlobalFunc_10630(&Local_1476, cLocal_1641, sParam0, sParam1, iParam11, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}



int func_304(char* sParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, char* sParam10, int iParam11)//Position - 0x2F94B
{
	if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		func_275(sParam0, iParam2, iParam5, iParam8, -1);
		func_272(iParam2, iParam3, sParam4);
		if (iParam5 != -1)
		{
			func_272(iParam5, iParam6, sParam7);
		}
		if (iParam8 != -1)
		{
			func_272(iParam8, iParam9, sParam10);
		}
		if (GlobalFunc_10626(&Local_1476, cLocal_1641, sParam0, sParam1, iParam11, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}



int func_307(int iParam0, int iParam1)//Position - 0x2FA90
{
	int iVar0;
	int iVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!func_324(iVar0, 0))
	{
		return 2;
	}
	iVar1 = func_308(iParam0, iParam1, -1);
	if (iVar1 == -99)
	{
		return 0;
	}
	Global_68106[1 /*14*/] = { GlobalFunc_10828(ENTITY::GET_ENTITY_MODEL(iParam0), iParam1, iVar1) };
	return Global_68106[1 /*14*/];
}

int func_308(int iParam0, int iParam1, int iParam2)//Position - 0x2FAE5
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
				if (func_311(iParam0, iParam1, iVar0))
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
				if (func_311(iParam0, iParam1, iVar1))
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



int func_311(int iParam0, int iParam1, int iParam2)//Position - 0x2FC2C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar21;
	int iVar31;
	var uVar32;
	
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar0, iParam1, iParam2) };
	if (!MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { GlobalFunc_7617(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_311(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar21 = { GlobalFunc_7616(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_311(iParam0, 14, uVar21[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_68106[2 /*14*/] = { GlobalFunc_10828(iVar0, 14, iVar4) };
									if (Global_68106[2 /*14*/].f_12 == iVar3)
									{
										if (func_311(iParam0, 14, iVar4))
										{
											if (!GlobalFunc_8307(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_68106[2 /*14*/])))
											{
												return 0;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = GlobalFunc_7054(iParam0, iVar2);
						Global_68106[2 /*14*/] = { GlobalFunc_10828(iVar0, iVar2, iVar1) };
						if (!GlobalFunc_8307(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_68106[2 /*14*/])))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar32 = { GlobalFunc_7616(iVar0, iParam2) };
		iVar31 = 0;
		while (iVar31 <= 8)
		{
			if (!func_311(iParam0, 14, uVar32[iVar31]))
			{
				return 0;
			}
			iVar31++;
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
	else if (Global_68106[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, GlobalFunc_33(iParam1)) && Global_68106[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, GlobalFunc_33(iParam1)))
	{
		return 1;
	}
	return 0;
}













int func_324(int iParam0, bool bParam1)//Position - 0x33A11
{
	if (bParam1)
	{
		if ((iParam0 == joaat("player_zero") || iParam0 == joaat("player_one")) || iParam0 == joaat("player_two"))
		{
			return 1;
		}
	}
	else if ((((iParam0 == joaat("player_zero") || iParam0 == joaat("player_one")) || iParam0 == joaat("player_two")) || iParam0 == joaat("mp_m_freemode_01")) || iParam0 == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}


int func_326(char* sParam0)//Position - 0x33AE1
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <= 0)
	{
		return 1;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "NULL"))
	{
		return 1;
	}
	return 0;
}


void func_328(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x33BC0
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var9;
	int iVar12;
	var uVar13;
	int iVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	struct<3> Var18;
	struct<3> Var21;
	struct<3> Var24;
	float fVar27;
	float fVar28;
	struct<3> Var29;
	struct<3> Var32;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	struct<3> Var40;
	struct<3> Var43;
	struct<3> Var46;
	bool bVar49;
	float fVar50;
	float fVar51;
	var uVar52;
	struct<3> Var53;
	struct<3> Var56;
	int iVar59;
	int iVar60;
	struct<3> Var61;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	
	if (Local_324[iParam0 /*10*/] != iParam1 || Local_324[iParam0 /*10*/].f_1 == 0)
	{
		Local_324[iParam0 /*10*/] = iParam1;
		Local_324[iParam0 /*10*/].f_1 = 1;
		Local_324[iParam0 /*10*/].f_3 = 0;
		Local_324[iParam0 /*10*/].f_6 = 0;
		Local_324[iParam0 /*10*/].f_4 = 0;
		Local_324[iParam0 /*10*/].f_7 = 0;
		Local_324[iParam0 /*10*/].f_8 = 0;
		Local_324[iParam0 /*10*/].f_9 = 0f;
	}
	if (Local_324[iParam0 /*10*/].f_2 && iParam2 == 0)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = func_278(iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12);
	}
	if (iParam2 == 1 && !bVar0)
	{
		Local_324[iParam0 /*10*/].f_2 = 0;
	}
	if (!bLocal_1828 || Local_324[iParam0 /*10*/].f_6 == 99)
	{
		if (Local_324[iParam0 /*10*/].f_3 == 0 || Local_324[iParam0 /*10*/].f_6 == 99)
		{
			if (bVar0 == 1)
			{
				if (!Local_324[iParam0 /*10*/].f_2)
				{
					Local_324[iParam0 /*10*/].f_2 = 1;
				}
				switch (Local_324[iParam0 /*10*/])
				{
					case 2:
						if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
						{
							if (!PED::IS_PED_IN_GROUP(Local_1070[2 /*14*/]))
							{
								if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1070[2 /*14*/], 1) < 50f)
								{
									PED::SET_PED_AS_GROUP_MEMBER(Local_1070[2 /*14*/], PED::GET_PED_GROUP_INDEX(PLAYER::PLAYER_PED_ID()));
									PED::SET_GROUP_SEPARATION_RANGE(PED::GET_PED_GROUP_INDEX(PLAYER::PLAYER_PED_ID()), 100f);
								}
							}
						}
						break;
					
					case 3:
						if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-967780114))
						{
							OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-967780114, 0f, 0, 1);
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-967780114, 4, 0, 1);
							Local_324[iParam0 /*10*/].f_3 = 0;
						}
						break;
					
					case 4:
						Local_324[1 /*10*/].f_2 = 0;
						if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
						{
							if (PED::IS_PED_IN_GROUP(Local_1070[2 /*14*/]))
							{
								PED::REMOVE_PED_FROM_GROUP(Local_1070[2 /*14*/]);
							}
						}
						break;
					
					case 1:
						switch (Local_324[iParam0 /*10*/].f_6)
						{
							case 0:
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[0 /*2*/], 0))
								{
									if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
									{
										TASK::TASK_ENTER_VEHICLE(Local_1070[2 /*14*/], Local_1449[0 /*2*/], 20000, -1, 1073741824, 1, 0);
										Local_324[iParam0 /*10*/].f_6++;
									}
								}
								else
								{
									Local_324[iParam0 /*10*/].f_3 = 1;
								}
								break;
							
							case 1:
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[0 /*2*/], 0) && !PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
								{
									if (PED::IS_PED_IN_VEHICLE(Local_1070[2 /*14*/], Local_1449[0 /*2*/], 0))
									{
										Local_324[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					
					case 5:
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) != Local_1449[0 /*2*/])
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_1449[0 /*2*/]))
								{
									ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1449[0 /*2*/]));
								}
								Local_1449[0 /*2*/] = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1449[0 /*2*/], 1, 1);
							}
						}
						break;
					
					case 11:
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							AUDIO::START_AUDIO_SCENE("ARM_2_DRIVE_TO_ALLEY");
							Local_324[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 12:
						iVar1 = 0;
						while (iVar1 < iLocal_2020)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_2020[iVar1]))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2020[iVar1], 0))
								{
									if (Local_1449[0 /*2*/] != iLocal_2020[iVar1])
									{
										ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_2020[iVar1]));
									}
								}
							}
							iVar1++;
						}
						VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(25.85983f, -1098.932f, -43.78194f) - Vector(2.5625f, 6.75f, 9.75f), Vector(25.85983f, -1098.932f, -43.78194f) + Vector(2.5625f, 6.75f, 9.75f), 1, 1);
						Local_324[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 13:
						GlobalFunc_562(1);
						Local_324[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 14:
						switch (Local_324[iParam0 /*10*/].f_6)
						{
							case 0:
								fVar3 = 1000f;
								iVar5 = 0;
								while (iVar5 < Local_2034.x)
								{
									if (!CAM::IS_SPHERE_VISIBLE(Local_2034[iVar5 /*3*/], 2f))
									{
										fVar2 = GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_2034[iVar5 /*3*/], 1);
										if (fVar2 < fVar3 && fVar2 > 10f)
										{
											fVar3 = fVar2;
											iVar4 = iVar5;
										}
									}
									iVar5++;
								}
								if (fVar3 != 1000f)
								{
									func_259(22, Local_2034[iVar4 /*3*/] - Vector(0f, 0.5f, 0.5f), GlobalFunc_1695(Local_2034[iVar4 /*3*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1), joaat("weapon_pistol"), 0, 0, -1);
									func_259(23, Local_2034[iVar4 /*3*/] - Vector(0f, 0.5f, 0.5f), GlobalFunc_1695(Local_2034[iVar4 /*3*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1), joaat("weapon_pistol"), 0, 0, -1);
									PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()), iLocal_1472);
									PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1472, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
									PED::SET_PED_TARGET_LOSS_RESPONSE(Local_1070[22 /*14*/], 1);
									PED::SET_PED_TARGET_LOSS_RESPONSE(Local_1070[23 /*14*/], 1);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1070[22 /*14*/], 150f, 0);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1070[23 /*14*/], 150f, 0);
									PED::SET_COMBAT_FLOAT(Local_1070[22 /*14*/], 2, 6f);
									PED::SET_COMBAT_FLOAT(Local_1070[22 /*14*/], 13, 5f);
									PED::SET_COMBAT_FLOAT(Local_1070[23 /*14*/], 2, 6f);
									PED::SET_COMBAT_FLOAT(Local_1070[23 /*14*/], 13, 5f);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[22 /*14*/], 50, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[23 /*14*/], 50, 1);
									if (HUD::DOES_BLIP_EXIST(uLocal_2028))
									{
										HUD::REMOVE_BLIP(&uLocal_2028);
									}
									Local_324[iParam0 /*10*/].f_6++;
									Local_324[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 1500;
								}
								else
								{
									Local_324[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (MISC::GET_GAME_TIMER() > Local_324[iParam0 /*10*/].f_7)
								{
									if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1070[2 /*14*/], 0);
										WEAPON::GIVE_WEAPON_TO_PED(Local_1070[2 /*14*/], joaat("weapon_microsmg"), 2000, 1, 1);
										TASK::CLEAR_PED_TASKS(Local_1070[2 /*14*/]);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1070[2 /*14*/], 150f, 0);
										Local_324[iParam0 /*10*/].f_6++;
										Local_324[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 1500;
									}
								}
								break;
							
							case 2:
								if (MISC::GET_GAME_TIMER() > Local_324[iParam0 /*10*/].f_7)
								{
									if (!PED::IS_PED_INJURED(Local_1070[22 /*14*/]))
									{
										PED::SET_COMBAT_FLOAT(Local_1070[22 /*14*/], 2, 100f);
									}
									if (!PED::IS_PED_INJURED(Local_1070[23 /*14*/]))
									{
										PED::SET_COMBAT_FLOAT(Local_1070[23 /*14*/], 2, 100f);
									}
									Local_324[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					
					case 6:
						switch (Local_324[iParam0 /*10*/].f_6)
						{
							case 0:
								if (HUD::DOES_BLIP_EXIST(uLocal_2028))
								{
									Var6 = { HUD::GET_BLIP_INFO_ID_COORD(uLocal_2028) };
									if (GlobalFunc_100(Var6, -1141.093f, -1576.759f, 3.3048f))
									{
										if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -39.15905f, -1078.176f, 23.77321f, -3.364391f, -1091.281f, 40.83922f, 23.8125f, 0, 1, 0))
										{
											HUD::START_GPS_MULTI_ROUTE(156, 1, 0);
											HUD::ADD_POINT_TO_GPS_CUSTOM_ROUTE(-13.445f, -1090.946f, 25.6721f);
											HUD::ADD_POINT_TO_GPS_CUSTOM_ROUTE(-23.5158f, -1119.839f, 25.8719f);
											HUD::ADD_POINT_TO_GPS_CUSTOM_ROUTE(-1141.093f, -1576.759f, 3.3048f);
											HUD::SET_GPS_MULTI_ROUTE_RENDER(1);
											HUD::SET_BLIP_ROUTE(uLocal_2028, 0);
											Local_324[iParam0 /*10*/].f_6++;
										}
										else
										{
											Local_324[iParam0 /*10*/].f_6++;
										}
									}
								}
								break;
							
							case 1:
								if (HUD::DOES_BLIP_EXIST(uLocal_2028))
								{
									Var9 = { HUD::GET_BLIP_INFO_ID_COORD(uLocal_2028) };
									if (!GlobalFunc_100(Var9, -1141.093f, -1576.759f, 3.3048f))
									{
										Local_324[iParam0 /*10*/].f_6 = 0;
									}
									else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -39.15905f, -1078.176f, 23.77321f, -3.364391f, -1091.281f, 40.83922f, 23.8125f, 0, 1, 0))
									{
										HUD::SET_GPS_MULTI_ROUTE_RENDER(0);
										HUD::SET_BLIP_ROUTE(uLocal_2028, 1);
										Local_324[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					
					case 7:
						switch (Local_324[iParam0 /*10*/].f_6)
						{
							case 0:
								if (func_423(17))
								{
									if (!ENTITY::DOES_ENTITY_EXIST(Local_1070[3 /*14*/]))
									{
										Local_1070[3 /*14*/] = PED::CREATE_PED(26, joaat("ig_siemonyetarian"), -31.4785f, -1107.098f, 25.4223f, 7.5788f, 1, 1);
										PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_1070[3 /*14*/]);
										PED::SET_PED_COMPONENT_VARIATION(Local_1070[3 /*14*/], 0, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(Local_1070[3 /*14*/], 3, 0, 1, 0);
										PED::SET_PED_COMPONENT_VARIATION(Local_1070[3 /*14*/], 4, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(Local_1070[3 /*14*/], 5, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(Local_1070[3 /*14*/], 7, 0, 0, 0);
									}
									if (!PED::IS_PED_INJURED(Local_1070[3 /*14*/]))
									{
										ENTITY::SET_ENTITY_COORDS(Local_1070[3 /*14*/], -31.4785f, -1107.098f, 25.4223f, 1, 0, 0, 1);
										ENTITY::SET_ENTITY_HEADING(Local_1070[3 /*14*/], 7f);
										TASK::TASK_START_SCENARIO_IN_PLACE(Local_1070[3 /*14*/], "WORLD_HUMAN_STAND_MOBILE", 0, 0);
										if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-31.72f, -1101.85f, 26.57f, 1f, joaat("v_ilev_fib_door1"), 0))
										{
											iVar12 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-31.72f, -1101.85f, 26.57f, 1f, joaat("v_ilev_fib_door1"), 0, 0, 1);
											if (iVar12 != 0)
											{
												if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar12))
												{
													ENTITY::STOP_SYNCHRONIZED_MAP_ENTITY_ANIM(-31.72f, -1101.85f, 26.57f, 1f, joaat("v_ilev_fib_door1"), -1000f);
												}
											}
										}
										Local_324[iParam0 /*10*/].f_6++;
									}
								}
								break;
							
							case 1:
								if (MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(-1831288286)) < 0.05f && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -32.47615f, -1104.299f, 25.4438f, -27.75145f, -1106f, 27.92234f, 6f, 0, 1, 0))
								{
									GlobalFunc_10617(97, 2);
									Local_324[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 2:
								if (GlobalFunc_156(Local_1070[3 /*14*/], PLAYER::PLAYER_PED_ID(), 1) > 200f)
								{
									if (ENTITY::DOES_ENTITY_EXIST(Local_1070[3 /*14*/]))
									{
										PED::DELETE_PED(&(Local_1070[3 /*14*/]));
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_siemonyetarian"));
										Local_324[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					
					case 8:
						PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 96, 1);
						if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
						{
							if (iLocal_1066 == 9)
							{
								PED::SET_PED_RESET_FLAG(Local_1070[2 /*14*/], 96, 1);
							}
						}
						break;
					
					case 9:
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[0 /*2*/], 0))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1449[0 /*2*/], 0))
							{
								AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_1449[0 /*2*/], 1);
								Local_324[iParam0 /*10*/].f_3 = 1;
							}
						}
						break;
					
					case 10:
						switch (Local_324[iParam0 /*10*/].f_6)
						{
							case 0:
								iLocal_138 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-41.3822f, -1101.637f, 26.6294f, "v_carshowroom");
								if (INTERIOR::IS_INTERIOR_READY(iLocal_138))
								{
									Local_324[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (iLocal_138 != 0)
								{
									if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_138)
									{
										if (!MISC::IS_BIT_SET(Local_324[iParam0 /*10*/].f_7, 0))
										{
											uVar13 = VEHICLE::GET_CLOSEST_VEHICLE(-36.5853f, -1101.474f, 26.3444f, 5f, joaat("bjxl"), 4);
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar13, 0))
											{
												VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar13, 10);
												VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iVar13, 0);
												MISC::SET_BIT(&(Local_324[iParam0 /*10*/].f_7), 0);
											}
										}
										if (!MISC::IS_BIT_SET(Local_324[iParam0 /*10*/].f_7, 1))
										{
											iVar13 = VEHICLE::GET_CLOSEST_VEHICLE(-46.2594f, -1097.839f, 26.3444f, 5f, joaat("bjxl"), 4);
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar13, 0))
											{
												VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar13, 10);
												VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iVar13, 0);
												MISC::SET_BIT(&(Local_324[iParam0 /*10*/].f_7), 1);
											}
										}
										if (!MISC::IS_BIT_SET(Local_324[iParam0 /*10*/].f_7, 2))
										{
											iVar13 = VEHICLE::GET_CLOSEST_VEHICLE(-50.08f, -1094.463f, 26.0671f, 5f, joaat("tailgater"), 4);
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar13, 0))
											{
												VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar13, 10);
												VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iVar13, 0);
												MISC::SET_BIT(&(Local_324[iParam0 /*10*/].f_7), 2);
											}
										}
										if (!MISC::IS_BIT_SET(Local_324[iParam0 /*10*/].f_7, 3))
										{
											iVar13 = VEHICLE::GET_CLOSEST_VEHICLE(-37.4128f, -1088.562f, 26.0671f, 5f, joaat("tailgater"), 4);
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar13, 0))
											{
												VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar13, 10);
												VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iVar13, 0);
												MISC::SET_BIT(&(Local_324[iParam0 /*10*/].f_7), 3);
											}
										}
										if (!MISC::IS_BIT_SET(Local_324[iParam0 /*10*/].f_7, 4))
										{
											iVar13 = VEHICLE::GET_CLOSEST_VEHICLE(-41.4259f, -1099.648f, 26.0534f, 5f, joaat("tailgater"), 4);
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar13, 0))
											{
												VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar13, 10);
												VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iVar13, 0);
												MISC::SET_BIT(&(Local_324[iParam0 /*10*/].f_7), 4);
											}
										}
									}
								}
								break;
						}
						break;
					
					case 15:
						func_422();
						break;
					
					case 18:
						if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						{
							func_121();
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							TASK::TASK_LOOK_AT_COORD(0, -1129.619f, -1588.344f, 4.7752f, 5000, 0, 2);
							iVar14 = PLAYER::PLAYER_PED_ID();
							func_120(iVar14, 0);
							Local_324[iParam0 /*10*/].f_3 = 1;
							RECORDING::_0x293220DA1B46CEBC(2f, 2f, 4);
						}
						break;
					
					case 16:
						TASK::TASK_LEAVE_ANY_VEHICLE(Local_1070[2 /*14*/], 0, 0);
						func_299(Local_1070[2 /*14*/]);
						Local_324[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 17:
						if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(Local_1070[2 /*14*/], 0))
							{
								if (!func_277(Local_1070[2 /*14*/], -1128.192f, -1587.6f, 3.26637f, -1128.882f, -1584.653f, 5.953067f, 1.25f))
								{
									bVar15 = true;
								}
								if (!func_277(Local_1070[2 /*14*/], -1131.293f, -1590.194f, 3.252203f, -1134.276f, -1587.549f, 5.917865f, 1.25f))
								{
									bVar16 = true;
								}
								if (bVar15 || bVar16)
								{
									func_125(86, 1);
								}
								else
								{
									func_125(86, 0);
								}
								switch (Local_324[iParam0 /*10*/].f_6)
								{
									case 0:
										if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1070[2 /*14*/], 1) > 1.5f)
										{
											if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1129.458f, -1585.963f, 3.079151f, -1125.517f, -1591.644f, 7.022579f, 3.0625f, 0, 1, 0) && !bVar15)
											{
												TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_1070[2 /*14*/], -1128.417f, -1587.442f, 3.3875f, 1f, 20000, 0.2f, 0, 221f);
												Local_324[iParam0 /*10*/].f_6 = 2;
											}
											else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1132.342f, -1587.769f, 3.071801f, -1127.968f, -1593.953f, 6.90706f, 3.0625f, 0, 1, 0) && !bVar16)
											{
												TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_1070[2 /*14*/], -1131.704f, -1589.453f, 3.3934f, 1f, 20000, 0.2f, 0, 221f);
												Local_324[iParam0 /*10*/].f_6 = 3;
											}
											else
											{
												Local_324[iParam0 /*10*/].f_6 = 5;
												TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1070[2 /*14*/], PLAYER::PLAYER_PED_ID(), -1);
											}
										}
										else if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -1131.704f, -1589.453f, 4.3934f, 1) > GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -1128.417f, -1587.442f, 3.3875f, 1))
										{
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_1070[2 /*14*/], -1131.704f, -1589.453f, 3.3934f, 1f, 20000, 0.2f, 0, 221f);
											Local_324[iParam0 /*10*/].f_6 = 3;
										}
										else
										{
											Local_324[iParam0 /*10*/].f_6 = 2;
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_1070[2 /*14*/], -1128.417f, -1587.442f, 3.3875f, 1f, 20000, 0.2f, 0, 221f);
										}
										break;
									
									case 2:
									case 3:
										if (((Local_324[iParam0 /*10*/].f_6 == 2 && !bVar15) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1129.458f, -1585.963f, 3.079151f, -1125.517f, -1591.644f, 7.022579f, 3.0625f, 0, 1, 0)) || ((Local_324[iParam0 /*10*/].f_6 == 3 && !bVar16) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1132.342f, -1587.769f, 3.071801f, -1127.968f, -1593.953f, 6.90706f, 3.0625f, 0, 1, 0)))
										{
											if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1070[2 /*14*/], -1132.485f, -1590.005f, 2.394994f, -1127.201f, -1586.46f, 6.384637f, 1.5f, 0, 1, 0))
											{
												if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1070[2 /*14*/], 1) > 1.5f)
												{
													fLocal_2227 = MISC::ABSF(GlobalFunc_2235((ENTITY::GET_ENTITY_HEADING(Local_1070[2 /*14*/]) - 221f), -1020002304, 1127481344));
													if (fLocal_2227 < 20f)
													{
														TASK::TASK_CLIMB(Local_1070[2 /*14*/], 0);
														Local_324[iParam0 /*10*/].f_6 = 4;
													}
													else
													{
														func_121();
														TASK::TASK_ACHIEVE_HEADING(0, 221f, 0);
														func_120(Local_1070[2 /*14*/], 0);
													}
												}
												else if (TASK::GET_SCRIPT_TASK_STATUS(Local_1070[2 /*14*/], 713668775) == 7)
												{
													func_125(87, 1);
													Local_324[iParam0 /*10*/].f_6 = 0;
													TASK::CLEAR_PED_TASKS(Local_1070[2 /*14*/]);
												}
											}
											else if (TASK::GET_SCRIPT_TASK_STATUS(Local_1070[2 /*14*/], 713668775) == 7)
											{
												Local_324[iParam0 /*10*/].f_6 = 0;
											}
										}
										else
										{
											Local_324[iParam0 /*10*/].f_6 = 0;
											TASK::CLEAR_PED_TASKS(Local_1070[2 /*14*/]);
										}
										break;
									
									case 4:
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_1070[2 /*14*/], -1207763510) == 2)
										{
											if (!func_283(49))
											{
												Local_324[iParam0 /*10*/].f_6 = 0;
											}
											else
											{
												Local_324[iParam0 /*10*/].f_3 = 1;
											}
										}
										else if (TASK::GET_SCRIPT_TASK_STATUS(Local_1070[2 /*14*/], -1207763510) == 7)
										{
											if (func_283(49))
											{
												RECORDING::_0x293220DA1B46CEBC(3f, 6f, 4);
												Local_324[iParam0 /*10*/].f_3 = 1;
											}
											else
											{
												Local_324[iParam0 /*10*/].f_6 = 0;
											}
										}
										break;
									
									case 5:
										if (!bVar15 || !bVar16)
										{
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_1070[2 /*14*/], -1128.417f, -1587.442f, 3.3875f, 1f, 20000, 0.2f, 0, 221f);
											Local_324[iParam0 /*10*/].f_6 = 0;
										}
										break;
									}
								}
						}
						break;
					
					case 20:
						if (!func_283(50))
						{
							if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
							{
								if (!ENTITY::IS_ENTITY_IN_AIR(Local_1070[2 /*14*/]))
								{
									func_121();
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1116.379f, -1603.855f, 4.439f, 1f, 20000, 0.25f, 1, 40000f);
									func_120(Local_1070[2 /*14*/], 0);
									Local_324[iParam0 /*10*/].f_3 = 1;
									Local_324[iParam0 /*10*/].f_6++;
								}
							}
						}
						else
						{
							Local_324[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 21:
						if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]) && !PED::IS_PED_INJURED(Local_1070[3 /*14*/]))
						{
							switch (Local_324[iParam0 /*10*/].f_6)
							{
								case 0:
									if (!ENTITY::IS_ENTITY_ATTACHED(Local_1070[2 /*14*/]) && !ENTITY::IS_ENTITY_ATTACHED(Local_1070[3 /*14*/]))
									{
										ENTITY::SET_ENTITY_HEADING(Local_1070[2 /*14*/], 220f);
										TASK::TASK_PLAY_ANIM(Local_1070[2 /*14*/], "missarmenian2", "fake_punch_walk_by_lamar", 1.5f, -1.5f, -1, 49152, 0, 0, 0, 0);
										TASK::TASK_PLAY_ANIM(Local_1070[3 /*14*/], "missarmenian2", "PUNCH_REACTION_&_FALL_DRUNK", 4f, -4f, -1, 8, 0, 0, 0, 0);
										Local_324[iParam0 /*10*/].f_6++;
									}
									break;
								
								case 1:
									PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_1070[2 /*14*/], 1f);
									if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_1070[2 /*14*/], MISC::GET_HASH_KEY("Alternate_Walk_Finished")))
									{
										bVar17 = true;
									}
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1070[2 /*14*/], "missarmenian2", "fake_punch_walk_by_lamar", 3))
									{
										bVar17 = true;
									}
									if (bVar17)
									{
										PED::FORCE_PED_MOTION_STATE(Local_1070[2 /*14*/], -668482597, 1, 0, 0);
										func_121();
										TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "arm2", 0, 8, -1);
										func_120(Local_1070[2 /*14*/], 0);
										Local_324[iParam0 /*10*/].f_3 = 1;
									}
									break;
								}
						}
						break;
					
					case 22:
						if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
						{
							TASK::CLEAR_PED_TASKS(Local_1070[2 /*14*/]);
							func_121();
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "arm2", 0, 12, -1);
							func_120(Local_1070[2 /*14*/], 0);
							Local_324[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 19:
						switch (Local_324[iParam0 /*10*/].f_6)
						{
							case 0:
								func_535(3);
								Local_324[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
								if (func_420(3))
								{
									if (STREAMING::HAS_MODEL_LOADED(iLocal_2217))
									{
									}
									func_419(3, iLocal_2217, Local_2241, fLocal_2244, 4, 0, 0);
									PED::SET_PED_CONFIG_FLAG(Local_1070[3 /*14*/], 42, 1);
									Local_324[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 2:
								RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
								if (!PED::IS_PED_INJURED(Local_1070[3 /*14*/]))
								{
									if (!PED::IS_PED_FALLING(Local_1070[3 /*14*/]))
									{
										ENTITY::SET_ENTITY_HEADING(Local_1070[3 /*14*/], fLocal_2244);
										PED::SET_PED_CAN_BE_TARGETTED(Local_1070[3 /*14*/], 1);
										PED::SET_PED_CONFIG_FLAG(Local_1070[3 /*14*/], 122, 1);
										AUDIO::STOP_PED_SPEAKING(Local_1070[3 /*14*/], 1);
										func_121();
										TASK::TASK_PLAY_ANIM(0, "missarmenian2", "exit_garage_drunk", 8f, -8f, -1, 0, 0, 0, 0, 0);
										TASK::TASK_PLAY_ANIM(0, "missarmenian2", "standing_idle_loop_drunk", 8f, -8f, -1, 1, 0, 0, 0, 0);
										func_120(Local_1070[3 /*14*/], 0);
										Local_324[iParam0 /*10*/].f_6++;
									}
								}
								break;
							
							case 3:
								if (!PED::IS_PED_INJURED(Local_1070[3 /*14*/]))
								{
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1070[3 /*14*/], "missarmenian2", "exit_garage_drunk", 3))
									{
										ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(Local_1070[3 /*14*/], "missarmenian2", "exit_garage_drunk", fLocal_2245);
										Local_324[iParam0 /*10*/].f_6++;
									}
								}
								break;
							
							case 4:
								if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]) && !PED::IS_PED_INJURED(Local_1070[3 /*14*/]))
								{
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1070[3 /*14*/], "missarmenian2", "PUNCH_REACTION_&_FALL_DRUNK", 3))
									{
										Local_324[iParam0 /*10*/].f_6++;
									}
								}
								break;
							
							case 5:
								if (!PED::IS_PED_INJURED(Local_1070[3 /*14*/]))
								{
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1070[3 /*14*/], "missarmenian2", "PUNCH_REACTION_&_FALL_DRUNK", 3))
									{
										if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_1070[3 /*14*/], "missarmenian2", "PUNCH_REACTION_&_FALL_DRUNK") > 0.155f)
										{
											TASK::CLEAR_PED_TASKS(Local_1070[3 /*14*/]);
											TASK::SET_HIGH_FALL_TASK(Local_1070[3 /*14*/], 13000, 15000, 4);
											Local_324[iParam0 /*10*/].f_3 = 1;
										}
									}
								}
								break;
						}
						break;
					
					case 23:
						if (!PED::IS_PED_INJURED(Local_1070[3 /*14*/]))
						{
							if (!PED::IS_PED_RAGDOLL(Local_1070[3 /*14*/]))
							{
								GlobalFunc_7057(Local_1070[3 /*14*/]);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1070[3 /*14*/], 1);
								func_121();
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1105.912f, -1601.903f, 3.6709f, 1f, 20000, 0.25f, 0, 40000f);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1105.28f, -1601.131f, 3.6709f, 1f, 20000, 0.25f, 0, 40000f);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1106.231f, -1601.962f, 3.6709f, 1f, 20000, 0.25f, 0, 40000f);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1108.15f, -1601.985f, 3.668f, 1f, 20000, 0.25f, 0, 40000f);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1107.381f, -1603.752f, 3.6879f, 1f, 20000, 0.25f, 0, 40000f);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1104.652f, -1601.999f, 3.6709f, 1f, 20000, 0.25f, 0, 40000f);
								func_120(Local_1070[3 /*14*/], 1);
								Local_324[iParam0 /*10*/].f_3 = 1;
							}
						}
						break;
					
					case 24:
						if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
						{
							if (GlobalFunc_5664("AR2_BU12"))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_1070[2 /*14*/], -2017877118) != 1)
								{
									TASK::TASK_PLAY_ANIM(Local_1070[2 /*14*/], "MISSARMENIAN2", "lamar_impatient_c", 8f, -8f, -1, 0, 0, 0, 0, 0);
								}
							}
							else
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1070[2 /*14*/], PLAYER::PLAYER_PED_ID(), 0);
								if (func_283(55))
								{
									if (func_283(53))
									{
										func_121();
										TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "arm2", 0, 12, -1);
										func_120(Local_1070[2 /*14*/], 0);
									}
									else
									{
										func_121();
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1117.739f, -1601.903f, 3.39776f, 1f, 20000, 0.25f, 1, 40000f);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1115.415f, -1605.237f, 3.44196f, 1f, 20000, 0.25f, 1, 40000f);
										func_120(Local_1070[2 /*14*/], 0);
									}
									Local_324[iParam0 /*10*/].f_3 = 1;
								}
							}
						}
						break;
					
					case 25:
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[1 /*2*/], 0))
						{
							switch (Local_324[iParam0 /*10*/].f_6)
							{
								case 0:
									func_535(4);
									Local_324[iParam0 /*10*/].f_6++;
									break;
								
								case 1:
									if (func_420(4))
									{
										if (!ENTITY::IS_ENTITY_DEAD(Local_1449[1 /*2*/]))
										{
											if (!PED::IS_PED_INJURED(Local_1070[4 /*14*/]) && !PED::IS_PED_INJURED(Local_1070[5 /*14*/]))
											{
												VEHICLE::SET_VEHICLE_LIGHTS(Local_1449[1 /*2*/], 2);
												VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1449[1 /*2*/], 1, 1);
												AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_1449[1 /*2*/], 1);
												AUDIO::SET_VEHICLE_RADIO_LOUD(Local_1449[1 /*2*/], 1);
												VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Local_1449[1 /*2*/]);
												if (!PED::IS_PED_INJURED(Local_1070[4 /*14*/]) && !PED::IS_PED_INJURED(Local_1070[5 /*14*/]))
												{
													TASK::TASK_PLAY_ANIM(Local_1070[4 /*14*/], "missarmenian2", "car_react_gang_ds", 1f, -8f, -1, 0, 0, 0, 0, 0);
													TASK::TASK_PLAY_ANIM(Local_1070[5 /*14*/], "missarmenian2", "car_react_gang_ps", 1f, -8f, -1, 0, 0, 0, 0, 0);
												}
												AUDIO::START_AUDIO_SCENE("ARM_2_GANG_DRIVE_PAST");
												AUDIO::SET_VEH_RADIO_STATION(Local_1449[1 /*2*/], "RADIO_03_HIPHOP_NEW");
												AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_1449[1 /*2*/], "ARM_2_GANG_CAR_GROUP", 0);
												func_413(1);
												Local_324[iParam0 /*10*/].f_6++;
											}
										}
									}
									break;
								
								case 2:
									if (func_283(86))
									{
										if (!GlobalFunc_742(-1133.978f, -1581.576f, 5.2445f, 20f, 150f))
										{
											if (Local_324[iParam0 /*10*/].f_7 == 0)
											{
												Local_324[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 7000;
											}
											else if (MISC::GET_GAME_TIMER() > Local_324[iParam0 /*10*/].f_7)
											{
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[0 /*2*/], 0))
												{
													ENTITY::SET_ENTITY_COORDS(Local_1449[0 /*2*/], -1139.01f, -1575.648f, 3.3153f, 1, 0, 0, 1);
													ENTITY::SET_ENTITY_HEADING(Local_1449[0 /*2*/], 304f);
												}
											}
										}
										else
										{
											Local_324[iParam0 /*10*/].f_7 = 0;
										}
									}
									if (!ENTITY::IS_ENTITY_DEAD(Local_1449[1 /*2*/]))
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[1 /*2*/], 0))
										{
											if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1449[1 /*2*/]))
											{
												if (!PED::IS_PED_INJURED(Local_1070[4 /*14*/]))
												{
													TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_1070[4 /*14*/], Local_1449[1 /*2*/], -1114.8f, -1567.425f, 3.3492f, 7f, 0, 0, 786469, 5f, 5f);
												}
												Local_324[iParam0 /*10*/].f_6++;
												if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_2_GANG_DRIVE_PAST"))
												{
													AUDIO::STOP_AUDIO_SCENE("ARM_2_GANG_DRIVE_PAST");
													AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_1449[1 /*2*/], 0);
												}
											}
										}
									}
									break;
								
								case 3:
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[1 /*2*/], 0))
									{
										if (!PED::IS_PED_INJURED(Local_1070[4 /*14*/]))
										{
											if (TASK::GET_SCRIPT_TASK_STATUS(Local_1070[4 /*14*/], -1817882002) != 1)
											{
												TASK::TASK_VEHICLE_DRIVE_WANDER(Local_1070[4 /*14*/], Local_1449[1 /*2*/], 15f, 786599);
												PED::SET_PED_KEEP_TASK(Local_1070[4 /*14*/], 1);
												ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1449[1 /*2*/]));
												ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1070[4 /*14*/]));
												if (!PED::IS_PED_INJURED(Local_1070[5 /*14*/]))
												{
													TASK::TASK_PAUSE(Local_1070[5 /*14*/], -1);
													PED::SET_PED_KEEP_TASK(Local_1070[5 /*14*/], 1);
													ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1070[5 /*14*/]));
												}
												Local_324[iParam0 /*10*/].f_6++;
											}
										}
									}
									break;
								}
						}
						break;
					
					case 26:
						switch (Local_324[iParam0 /*10*/].f_6)
						{
							case 0:
								if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
								{
									TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1070[2 /*14*/], 5000, 0, 2);
									Local_324[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (func_283(57))
								{
									if (!PED::IS_PED_INJURED(Local_1070[3 /*14*/]))
									{
										TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1070[3 /*14*/], 9000, 0, 2);
										Local_324[iParam0 /*10*/].f_6++;
									}
								}
								break;
							
							case 2:
								if (func_283(52))
								{
									if (!PED::IS_PED_INJURED(Local_1070[3 /*14*/]))
									{
										TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1070[3 /*14*/], 15000, 0, 2);
										Local_324[iParam0 /*10*/].f_6++;
									}
								}
								break;
							
							case 3:
								if (func_283(61))
								{
									if (!PED::IS_PED_INJURED(Local_1070[4 /*14*/]))
									{
										TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1070[4 /*14*/], 10000, 0, 2);
										Local_324[iParam0 /*10*/].f_6++;
									}
								}
								break;
						}
						break;
					
					case 27:
						if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
						{
							switch (Local_324[iParam0 /*10*/].f_6)
							{
								case 0:
									PED::SET_PED_ALTERNATE_WALK_ANIM(Local_1070[2 /*14*/], "missarmenian2", "car_react", 1f, 0);
									Local_324[iParam0 /*10*/].f_6++;
									Local_324[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 10000;
									break;
								
								case 1:
									if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_1070[2 /*14*/], MISC::GET_HASH_KEY("Alternate_Walk_Finished")))
									{
										PED::CLEAR_PED_ALTERNATE_WALK_ANIM(Local_1070[2 /*14*/], -1056964608);
									}
									break;
								}
						}
						break;
					
					case 28:
						switch (Local_324[iParam0 /*10*/].f_6)
						{
							case 0:
								if (!PED::IS_PED_INJURED(Local_1070[3 /*14*/]))
								{
									Var18 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missarmenian2", "drunk_getup", ENTITY::GET_ENTITY_COORDS(Local_1070[3 /*14*/], 1), 0f, 0f, ENTITY::GET_ENTITY_HEADING(Local_1070[3 /*14*/]), 0f, 2) };
									Var21 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missarmenian2", "drunk_getup", ENTITY::GET_ENTITY_COORDS(Local_1070[3 /*14*/], 1), 0f, 0f, ENTITY::GET_ENTITY_HEADING(Local_1070[3 /*14*/]), 0f, 2) };
									uLocal_2226 = PED::CREATE_SYNCHRONIZED_SCENE(Var18, Var21, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_1070[3 /*14*/], uLocal_2226, "missarmenian2", "drunk_getup", 4f, -4f, 1, 0, 1148846080, 0);
									Local_324[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_2226))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_2226) >= 1f)
									{
										Local_324[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					
					case 29:
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[1 /*2*/], 0))
						{
							switch (Local_324[iParam0 /*10*/].f_6)
							{
								case 0:
									Local_324[iParam0 /*10*/].f_9 = 1f;
									Local_324[iParam0 /*10*/].f_6++;
									break;
								
								case 1:
									Local_324[iParam0 /*10*/].f_9 = (Local_324[iParam0 /*10*/].f_9 - SYSTEM::TIMESTEP());
									if (Local_324[iParam0 /*10*/].f_9 < 0f)
									{
										Local_324[iParam0 /*10*/].f_9 = 0f;
										Local_324[iParam0 /*10*/].f_3 = 1;
										func_411(12, 30);
									}
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1449[1 /*2*/]))
									{
										VEHICLE::SET_PLAYBACK_SPEED(Local_1449[1 /*2*/], Local_324[iParam0 /*10*/].f_9);
									}
									break;
								}
						}
						break;
					
					case 30:
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[1 /*2*/], 0))
						{
							switch (Local_324[iParam0 /*10*/].f_6)
							{
								case 0:
									Local_324[iParam0 /*10*/].f_9 = 0f;
									Local_324[iParam0 /*10*/].f_6++;
									break;
								
								case 1:
									Local_324[iParam0 /*10*/].f_9 = (Local_324[iParam0 /*10*/].f_9 + SYSTEM::TIMESTEP());
									if (Local_324[iParam0 /*10*/].f_9 >= 1f)
									{
										Local_324[iParam0 /*10*/].f_9 = 1f;
										Local_324[iParam0 /*10*/].f_3 = 1;
										func_411(11, 29);
									}
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1449[1 /*2*/]))
									{
										VEHICLE::SET_PLAYBACK_SPEED(Local_1449[1 /*2*/], Local_324[iParam0 /*10*/].f_9);
									}
									break;
								}
						}
						break;
					
					case 31:
						if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
						{
							switch (Local_324[iParam0 /*10*/].f_6)
							{
								case 0:
									PED::CLEAR_PED_ALTERNATE_WALK_ANIM(Local_1070[2 /*14*/], -1056964608);
									func_410(9, 27, 1, 0);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1070[2 /*14*/], PLAYER::PLAYER_PED_ID(), 4000);
									if (GlobalFunc_5664("move"))
									{
										Local_324[iParam0 /*10*/].f_6++;
									}
									if (GlobalFunc_5664("AR2_BU12"))
									{
										Local_324[iParam0 /*10*/].f_6 = 3;
									}
									break;
								
								case 1:
									TASK::TASK_PLAY_ANIM(Local_1070[2 /*14*/], "MISSARMENIAN2", "lamar_impatient_c", 8f, -8f, -1, 48, 0, 0, 0, 0);
									Local_324[iParam0 /*10*/].f_6++;
									break;
								
								case 2:
									if (GlobalFunc_5664("AR2_BU12"))
									{
										TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_1070[2 /*14*/], "arm2", 0, 8, -1);
										Local_324[iParam0 /*10*/].f_3 = 1;
									}
									break;
								
								case 3:
									TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_1070[2 /*14*/], "arm2", 0, 8, -1);
									Local_324[iParam0 /*10*/].f_3 = 1;
									break;
								}
						}
						break;
					
					case 32:
						switch (Local_324[iParam0 /*10*/].f_6)
						{
							case 0:
								if ((iLocal_46 == 5 || iLocal_46 == 7) || iLocal_46 == 3)
								{
									if (func_283(71))
									{
										Local_324[iParam0 /*10*/].f_6++;
									}
								}
								break;
							
							case 1:
								if (func_283(71))
								{
									if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
									{
										if ((TASK::GET_SCRIPT_TASK_STATUS(Local_1070[2 /*14*/], -875674219) == 1 || TASK::GET_SCRIPT_TASK_STATUS(Local_1070[2 /*14*/], -875674219) == 2) || TASK::GET_SCRIPT_TASK_STATUS(Local_1070[2 /*14*/], -875674219) == 0)
										{
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1070[2 /*14*/], PLAYER::PLAYER_PED_ID(), 1000);
										}
										else
										{
											TASK::CLEAR_PED_TASKS(Local_1070[2 /*14*/]);
											PED::CLEAR_PED_ALTERNATE_WALK_ANIM(Local_1070[2 /*14*/], -1056964608);
											func_410(9, 27, 1, 0);
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1070[2 /*14*/], PLAYER::PLAYER_PED_ID(), 1000);
										}
									}
								}
								else
								{
									switch (iLocal_46)
									{
										case 3:
											Var24 = { ENTITY::GET_ENTITY_COORDS(Local_1070[2 /*14*/], 1) };
											if (Var24.f_1 < -1601.903f)
											{
												func_121();
												TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1115.415f, -1605.237f, 3.44196f, 1f, 20000, 0.25f, 1, 40000f);
												func_120(Local_1070[2 /*14*/], 0);
											}
											else
											{
												func_121();
												TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1117.739f, -1601.903f, 3.39776f, 1f, 20000, 0.25f, 1, 40000f);
												TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1115.415f, -1605.237f, 3.44196f, 1f, 20000, 0.25f, 1, 40000f);
												func_120(Local_1070[2 /*14*/], 0);
											}
											Local_324[iParam0 /*10*/].f_6 = 0;
											break;
										
										case 5:
										case 7:
											func_121();
											TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "arm2", 0, 8, -1);
											func_120(Local_1070[2 /*14*/], 0);
											Local_324[iParam0 /*10*/].f_6 = 0;
											break;
										}
								}
								break;
						}
						break;
					
					case 33:
						if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
						{
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_1070[2 /*14*/], "arm2", 0, 8, -1);
							Local_324[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 34:
						if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
						{
							switch (Local_324[iParam0 /*10*/].f_6)
							{
								case 0:
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1065.348f, -1667.966f, 2.260047f, -1074.575f, -1676.186f, 6.517583f, 11.875f, 0, 1, 0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
									{
										PED::SET_PED_AS_GROUP_MEMBER(Local_1070[2 /*14*/], PED::GET_PED_GROUP_INDEX(PLAYER::PLAYER_PED_ID()));
										Local_324[iParam0 /*10*/].f_6++;
									}
									break;
								
								case 1:
									if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1065.348f, -1667.966f, 2.260047f, -1074.575f, -1676.186f, 6.517583f, 11.875f, 0, 1, 0) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1070[2 /*14*/], PLAYER::PLAYER_PED_ID(), 3000);
										PED::REMOVE_PED_FROM_GROUP(Local_1070[2 /*14*/]);
										Local_324[iParam0 /*10*/].f_6 = 0;
									}
									break;
								}
						}
						break;
					
					case 38:
						switch (Local_324[iParam0 /*10*/].f_6)
						{
							case 99:
								break;
							
							case 0:
								STREAMING::REQUEST_MODEL(joaat("prop_gar_door_plug"));
								if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
								{
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
									Local_1070[0 /*14*/] = PLAYER::PLAYER_PED_ID();
									func_121();
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Vector(3.55f, -1665.66f, -1067.02f) + Vector(0f, -0.78f, -0.63f), 1f, 20000, 0.1f, 4608, -55f);
									TASK::TASK_SWAP_WEAPON(0, 0);
									TASK::TASK_PLAY_ANIM(0, "MISSARMENIAN2", "open_garage_franklin", 4f, 2f, -1, 0, 0, 0, 0, 0);
									func_120(Local_1070[0 /*14*/], 0);
									Local_324[iParam0 /*10*/].f_6++;
									STREAMING::REQUEST_MODEL(joaat("prop_gar_door_plug"));
									RECORDING::_0x293220DA1B46CEBC(3f, 3f, 3);
								}
								break;
							
							case 1:
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2", "open_garage_franklin", 3))
								{
									fVar27 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2", "open_garage_franklin");
									fVar27 = (fVar27 / ENTITY::GET_ENTITY_ANIM_TOTAL_TIME(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2", "open_garage_franklin"));
									if (fVar27 < 0f || fVar27 > 1f)
									{
										fVar27 = 0f;
									}
									ENTITY::PLAY_ENTITY_ANIM(iLocal_1950, "open_garage_door", "MISSARMENIAN2", 16f, 0, 1, 0, 0, 0);
									ENTITY::SET_ENTITY_COLLISION(iLocal_1950, 0, 0);
									PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
									uLocal_1054[0] = OBJECT::CREATE_OBJECT(joaat("prop_gar_door_plug"), -1066.72f, -1665.41f, 4.5f, 1, 1, 0);
									ENTITY::SET_ENTITY_ROTATION(uLocal_1054[0], -90f, 0f, -55.93f, 2, 1);
									ENTITY::SET_ENTITY_VISIBLE(uLocal_1054[0], 0);
									ENTITY::FREEZE_ENTITY_POSITION(uLocal_1054[0], 1);
									RECORDING::_0x293220DA1B46CEBC(3f, 3f, 3);
									Local_324[iParam0 /*10*/].f_6 = 2;
								}
								break;
							
							case 2:
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2", "open_garage_franklin", 3))
								{
									fVar28 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2", "open_garage_franklin");
									fVar28 = (fVar28 / ENTITY::GET_ENTITY_ANIM_TOTAL_TIME(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2", "open_garage_franklin"));
									if (fVar28 < 0f || fVar28 > 1f)
									{
										fVar28 = 0f;
									}
									if (!ENTITY::IS_ENTITY_DEAD(iLocal_1950))
									{
										if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1950, "MISSARMENIAN2", "open_garage_door", 3))
										{
											ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_1950, "MISSARMENIAN2", "open_garage_door", fVar28);
										}
									}
									Local_324[iParam0 /*10*/].f_6 = 3;
								}
								break;
							
							case 3:
								if (!ENTITY::IS_ENTITY_DEAD(uLocal_1054[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_1951))
								{
									ENTITY::SET_ENTITY_COORDS(uLocal_1054[0], ENTITY::GET_ENTITY_COORDS(iLocal_1950, 1), 1, 0, 0, 1);
									ENTITY::SET_ENTITY_ROTATION(uLocal_1054[0], ENTITY::GET_ENTITY_ROTATION(iLocal_1950, 2), 2, 1);
									Var29 = { ENTITY::GET_ENTITY_COORDS(iLocal_1950, 1) };
									Var32 = { ENTITY::GET_ENTITY_ROTATION(iLocal_1950, 2) };
								}
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2", "open_garage_franklin", 3))
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2", "open_garage_franklin") > 0.22f)
									{
										AUDIO::PLAY_SOUND_FROM_COORD(-1, "Garage_Open_01", -1066.949f, -1665.65f, 4.7981f, "ARM_2_REPO_SOUNDS", 0, 0, 0);
										Local_324[iParam0 /*10*/].f_6 = 4;
									}
								}
								break;
							
							case 4:
								if (STREAMING::HAS_MODEL_LOADED(joaat("prop_gar_door_plug")))
								{
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2", "open_garage_franklin", 3))
									{
										if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2", "open_garage_franklin") > 0.77f)
										{
											TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
											if (HUD::DOES_BLIP_EXIST(uLocal_2030))
											{
												HUD::REMOVE_BLIP(&uLocal_2030);
											}
											PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
											TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), -1064.049f, -1663.417f, 4.8837f, 3000, 0, 2);
											if (!ENTITY::IS_ENTITY_DEAD(uLocal_1054[0]))
											{
												ENTITY::SET_ENTITY_COORDS(uLocal_1054[0], -1066.72f, -1665.41f, 5.73f, 1, 0, 0, 1);
												ENTITY::SET_ENTITY_ROTATION(uLocal_1054[0], -90f, 0f, -55.93f, 2, 1);
											}
											iLocal_1053++;
											Local_324[iParam0 /*10*/].f_3 = 1;
										}
									}
								}
								break;
						}
						break;
					
					case 39:
						switch (Local_324[iParam0 /*10*/].f_6)
						{
							case 99:
								break;
							
							case 0:
								if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
								{
									STREAMING::REQUEST_MODEL(joaat("prop_gar_door_plug"));
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
									Local_1070[0 /*14*/] = PLAYER::PLAYER_PED_ID();
									func_121();
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Vector(3.55f, -1668.82f, -1064.81f) + Vector(0f, -0.78f, -0.63f), 1f, 20000, 0.1f, 4608, -55f);
									TASK::TASK_SWAP_WEAPON(0, 0);
									TASK::TASK_PLAY_ANIM(0, "MISSARMENIAN2", "open_garage_franklin", 4f, -8f, -1, 0, 0, 0, 0, 0);
									func_120(Local_1070[0 /*14*/], 0);
									RECORDING::_0x293220DA1B46CEBC(2.5f, 3.5f, 4);
									Local_324[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2", "open_garage_franklin", 3))
								{
									fVar35 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2", "open_garage_franklin");
									fVar35 = (fVar35 / ENTITY::GET_ENTITY_ANIM_TOTAL_TIME(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2", "open_garage_franklin"));
									if (fVar35 < 0f || fVar35 > 1f)
									{
										fVar35 = 0f;
									}
									ENTITY::PLAY_ENTITY_ANIM(iLocal_1951, "open_garage_door", "MISSARMENIAN2", 16f, 0, 1, 0, 0, 0);
									ENTITY::SET_ENTITY_COLLISION(iLocal_1951, 0, 0);
									PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
									Local_324[iParam0 /*10*/].f_6 = 2;
								}
								break;
							
							case 2:
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2", "open_garage_franklin", 3))
								{
									fVar36 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2", "open_garage_franklin");
									fVar36 = (fVar36 / ENTITY::GET_ENTITY_ANIM_TOTAL_TIME(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2", "open_garage_franklin"));
									if (fVar36 < 0f || fVar36 > 1f)
									{
										fVar36 = 0f;
									}
									if (!ENTITY::IS_ENTITY_DEAD(iLocal_1951))
									{
										if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1951, "MISSARMENIAN2", "open_garage_door", 3))
										{
											ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_1951, "MISSARMENIAN2", "open_garage_door", fVar36);
										}
									}
									if (STREAMING::HAS_MODEL_LOADED(joaat("prop_gar_door_plug")))
									{
										uLocal_1054[1] = OBJECT::CREATE_OBJECT(joaat("prop_gar_door_plug"), -1064.45f, -1668.56f, 4.5f, 1, 1, 0);
										ENTITY::SET_ENTITY_ROTATION(uLocal_1054[1], -90f, 0f, -55.93f, 2, 1);
										ENTITY::SET_ENTITY_VISIBLE(uLocal_1054[1], 0);
										ENTITY::FREEZE_ENTITY_POSITION(uLocal_1054[1], 1);
									}
									Local_324[iParam0 /*10*/].f_6 = 3;
								}
								break;
							
							case 3:
								if (!ENTITY::IS_ENTITY_DEAD(uLocal_1054[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_1951))
								{
									ENTITY::SET_ENTITY_COORDS(uLocal_1054[1], ENTITY::GET_ENTITY_COORDS(iLocal_1951, 1), 1, 0, 0, 1);
									ENTITY::SET_ENTITY_ROTATION(uLocal_1054[1], ENTITY::GET_ENTITY_ROTATION(iLocal_1951, 2), 2, 1);
									Var37 = { ENTITY::GET_ENTITY_COORDS(iLocal_1951, 1) };
									Var40 = { ENTITY::GET_ENTITY_ROTATION(iLocal_1951, 2) };
								}
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2", "open_garage_franklin", 3))
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2", "open_garage_franklin") > 0.25f)
									{
										AUDIO::PLAY_SOUND_FROM_COORD(-1, "Garage_Open_02", -1064.632f, -1668.981f, 4.8996f, "ARM_2_REPO_SOUNDS", 0, 0, 0);
										Local_324[iParam0 /*10*/].f_6 = 4;
									}
								}
								break;
							
							case 4:
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2", "open_garage_franklin", 3))
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2", "open_garage_franklin") > 0.77f)
									{
										TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
										if (HUD::DOES_BLIP_EXIST(uLocal_2031))
										{
											HUD::REMOVE_BLIP(&uLocal_2031);
										}
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
										iLocal_1053++;
										TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), -1063.143f, -1667.331f, 4.9339f, 3000, 0, 2);
										if (!ENTITY::IS_ENTITY_DEAD(uLocal_1054[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_1951))
										{
											ENTITY::SET_ENTITY_COORDS(uLocal_1054[1], -1064.45f, -1668.56f, 5.73f, 1, 0, 0, 1);
											ENTITY::SET_ENTITY_ROTATION(uLocal_1054[1], -90f, 0f, -55.93f, 2, 1);
										}
										Local_324[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					
					case 40:
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							Var43 = { 0f, 0f, 0f };
							if (func_408(&Var43, -1076.163f, -1673.723f, 3.61753f, -1073.07f, -1678.339f, 3.59893f, GlobalFunc_107(1.41f, -2f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)))
							{
								Local_324[iParam0 /*10*/].f_3 = 1;
							}
						}
						break;
					
					case 41:
						if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-967780114))
						{
							OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-967780114, 0f, 0, 1);
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-967780114, 4, 0, 1);
						}
						break;
					
					case 50:
						if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-967780114))
						{
							OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-967780114, 1f, 0, 1);
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-967780114, 4, 0, 1);
						}
						break;
					
					case 51:
						if (CUTSCENE::IS_CUTSCENE_PLAYING())
						{
							if (CUTSCENE::GET_CUTSCENE_TIME() > 16757)
							{
								if (!PED::IS_PED_INJURED(iLocal_1916))
								{
									PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_1916, 0, 0.875f, 0.758f, 279.331f, 1f, 6, 0f, "BulletLarge");
									Local_324[iParam0 /*10*/].f_3 = 1;
								}
							}
						}
						break;
					
					case 42:
						func_407("ARM2_MISSION_START", 0, "ARM2_FIGHT_START");
						AUDIO::START_AUDIO_SCENE("ARM_2_SEARCH_FOR_BIKE");
						Local_324[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 43:
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[1 /*2*/], 0))
						{
							switch (Local_324[iParam0 /*10*/].f_6)
							{
								case 0:
									if (func_423(9))
									{
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1449[1 /*2*/], 1, "ARM2", 1);
										Local_324[iParam0 /*10*/].f_6++;
									}
									break;
								
								case 1:
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1449[1 /*2*/]))
									{
										VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(Local_1449[1 /*2*/]);
										Local_324[iParam0 /*10*/].f_3 = 1;
									}
									break;
								}
						}
						break;
					
					case 44:
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[6 /*2*/], 0))
						{
							switch (Local_324[iParam0 /*10*/].f_6)
							{
								case 0:
									if (PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()) == Local_1449[6 /*2*/] || PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == Local_1449[6 /*2*/])
									{
										ENTITY::FREEZE_ENTITY_POSITION(Local_1449[6 /*2*/], 0);
										Local_324[iParam0 /*10*/].f_6++;
									}
									break;
								
								case 1:
									if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1449[6 /*2*/], 0))
									{
										ENTITY::FREEZE_ENTITY_POSITION(Local_1449[6 /*2*/], 1);
										Local_324[iParam0 /*10*/].f_6 = 0;
									}
									break;
								}
						}
						break;
					
					case 47:
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_2_DRIVE_TO_ALLEY"))
							{
								AUDIO::STOP_AUDIO_SCENE("ARM_2_DRIVE_TO_ALLEY");
								Local_324[iParam0 /*10*/].f_3 = 1;
							}
							else
							{
								Local_324[iParam0 /*10*/].f_3 = 1;
							}
						}
						break;
					
					case 49:
						if (MISC::GET_GAME_TIMER() > Local_324[iParam0 /*10*/].f_7)
						{
							if (!PED::IS_PED_INJURED(Local_1070[4 /*14*/]) && !PED::IS_PED_INJURED(Local_1070[5 /*14*/]))
							{
								if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1070[4 /*14*/], 1) < 15f)
								{
									TASK::TASK_LOOK_AT_ENTITY(Local_1070[4 /*14*/], PLAYER::PLAYER_PED_ID(), 15000, 0, 2);
									TASK::TASK_LOOK_AT_ENTITY(Local_1070[5 /*14*/], PLAYER::PLAYER_PED_ID(), 15000, 0, 2);
									Local_324[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 15000;
								}
							}
						}
						break;
					
					case 48:
						switch (Local_324[iParam0 /*10*/].f_6)
						{
							case 0:
								iLocal_46 = 1;
								Local_324[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (func_283(49))
								{
									iLocal_46 = 3;
									Local_324[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 2:
								Var46 = { ENTITY::GET_ENTITY_COORDS(Local_1070[2 /*14*/], 1) };
								if ((ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1070[2 /*14*/], "missarmenian2", "fake_punch_walk_by_lamar", 3) || Var46.f_1 < -1601f) || func_406(4, 17) > 0)
								{
									iLocal_46 = 4;
									Local_324[iParam0 /*10*/].f_6++;
								}
								else if (func_283(53))
								{
									Local_324[iParam0 /*10*/].f_6 = 4;
									iLocal_46 = 5;
								}
								break;
							
							case 3:
								if (func_283(53) || func_246(3, 21))
								{
									Local_324[iParam0 /*10*/].f_6 = 4;
									iLocal_46 = 5;
								}
								break;
							
							case 4:
								if (func_283(62) && !func_283(64))
								{
									Local_324[iParam0 /*10*/].f_6 = 5;
									iLocal_46 = 6;
								}
								break;
							
							case 5:
								if (func_283(64) || func_246(9, 27))
								{
									Local_324[iParam0 /*10*/].f_6 = 6;
									iLocal_46 = 7;
								}
								break;
						}
						break;
					
					case 45:
						if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
						{
							switch (Local_324[iParam0 /*10*/].f_6)
							{
								case 0:
									TASK::TASK_LOOK_AT_COORD(Local_1070[2 /*14*/], -1074.437f, -1674.698f, 5.0856f, 3000, 0, 2);
									Local_324[iParam0 /*10*/].f_6++;
									Local_324[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 3000;
									break;
								
								case 1:
									if (MISC::GET_GAME_TIMER() > 3000)
									{
										TASK::TASK_LOOK_AT_COORD(Local_1070[2 /*14*/], -1068.423f, -1665.641f, 4.9303f, 3000, 0, 2);
										Local_324[iParam0 /*10*/].f_6++;
										Local_324[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 3000;
									}
									break;
								
								case 2:
									if (MISC::GET_GAME_TIMER() > 3000)
									{
										Local_324[iParam0 /*10*/].f_3 = 1;
									}
									break;
								}
						}
						break;
					
					case 46:
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1066.288f, -1675.862f, 2.403591f, -1074.154f, -1664.753f, 8.428232f, 13.4375f, 0, 1, 0))
						{
							bVar49 = true;
							PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
						}
						if (iLocal_1066 > 1 && iLocal_1066 < 6)
						{
							if (!PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) && ((!PED::IS_PED_INJURED(Local_1070[2 /*14*/]) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_1070[2 /*14*/], 0) - Vector(2f, 0f, 0f), -1064.003f, -1679.903f, 7.516632f, 52.5f, 0, 1, 0)) || iLocal_2225))
							{
								PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
								if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
								{
									iLocal_2225 = 1;
								}
								bVar49 = true;
							}
						}
						if (iLocal_2225)
						{
							fVar50 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_1070[2 /*14*/], 1), -1064.003f, -1679.903f, 7.516632f, 0);
							fVar51 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1064.003f, -1679.903f, 7.516632f, 0);
							if (fVar51 > (fVar50 + 3f) || CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
							{
								iLocal_2225 = 0;
							}
						}
						if (!bVar49)
						{
							PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 3f);
							iLocal_2225 = 0;
						}
						break;
					
					case 35:
						Local_324[iParam0 /*10*/].f_6 = 2;
						switch (Local_324[iParam0 /*10*/].f_6)
						{
							case 0:
								if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
								{
									TASK::TASK_GO_STRAIGHT_TO_COORD(Local_1070[2 /*14*/], -1074.48f, -1673.231f, 3.4137f, 1f, 20000, 1193033728, 1056964608);
									if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
									{
										PED::SET_PED_ALTERNATE_WALK_ANIM(Local_1070[2 /*14*/], "missarmenian2", "LEMAR_INDICATE_GARAGE", 8f, 1);
									}
									if (HUD::DOES_BLIP_EXIST(uLocal_2028))
									{
										HUD::REMOVE_BLIP(&uLocal_2028);
									}
									uLocal_2028 = GlobalFunc_5104(-1073.575f, -1675.605f, 3.4401f, 0);
									Local_324[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_1070[2 /*14*/], 2106541073) == 7)
								{
									Local_324[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 2:
								if (func_423(15))
								{
									if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1070[2 /*14*/], 1) < 5f && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
									{
										if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
										{
											if (!PED::IS_PED_IN_ANY_VEHICLE(Local_1070[2 /*14*/], 0) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_1070[2 /*14*/]))
											{
												if (PED::IS_PED_STOPPED(Local_1070[2 /*14*/]))
												{
													if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1070[2 /*14*/], "missarmenian2", "GARAGE_POINT_lemar", 3))
													{
														func_404(&(Local_324[iParam0 /*10*/].f_8), &(Local_324[iParam0 /*10*/].f_7));
													}
												}
											}
										}
									}
									else if (TASK::GET_SCRIPT_TASK_STATUS(Local_1070[2 /*14*/], -2017877118) == 1)
									{
										TASK::CLEAR_PED_TASKS(Local_1070[2 /*14*/]);
									}
								}
								break;
						}
						break;
					
					case 36:
						if (func_283(13))
						{
							Local_324[iParam0 /*10*/].f_3 = 1;
						}
						else
						{
							if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
							{
								TASK::CLEAR_PED_TASKS(Local_1070[2 /*14*/]);
								if (PED::IS_PED_IN_ANY_VEHICLE(Local_1070[2 /*14*/], 0))
								{
									TASK::TASK_LEAVE_ANY_VEHICLE(Local_1070[2 /*14*/], 0, 0);
								}
							}
							MISC::CLEAR_BIT(&(Local_1955.f_13), 26);
							Local_324[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 37:
						switch (Local_324[iParam0 /*10*/].f_6)
						{
							case 0:
								func_535(5);
								CUTSCENE::REQUEST_CUTSCENE("Arm_2_mcs_4", 8);
								Local_324[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
								{
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", PLAYER::PLAYER_PED_ID(), 0);
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 0, 0, 0, 0);
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 1, 0, 0, 0);
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 2, 2, 0, 0);
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 3, 2, 0, 0);
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 4, 3, 0, 0);
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 5, 0, 0, 0);
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 6, 1, 0, 0);
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 7, 0, 0, 0);
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 8, 0, 0, 0);
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 9, 0, 0, 0);
									Local_324[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					
					case 66:
						if (!PED::IS_PED_INJURED(Local_1070[3 /*14*/]))
						{
							PED::DELETE_PED(&(Local_1070[3 /*14*/]));
						}
						if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						{
							PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
							PLAYER::SET_MAX_WANTED_LEVEL(0);
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
						}
						if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
						{
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()), iLocal_1472);
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1472, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
							PED::SET_PED_ACCURACY(Local_1070[2 /*14*/], 15);
							PED::REMOVE_PED_FROM_GROUP(Local_1070[2 /*14*/]);
						}
						if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
						{
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
							{
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1070[2 /*14*/], PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
							}
						}
						if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
						{
							if (!HUD::DOES_BLIP_EXIST(Local_1070[2 /*14*/].f_1))
							{
								Local_1070[2 /*14*/].f_1 = GlobalFunc_6829(Local_1070[2 /*14*/], 0, 145);
							}
						}
						MISC::SET_INSTANCE_PRIORITY_HINT(1);
						PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
						iLocal_2222 = 0;
						MISC::SET_BIT(&iLocal_2222, 3);
						MISC::SET_BIT(&iLocal_2222, 4);
						uLocal_1980 = OBJECT::CREATE_PICKUP(joaat("pickup_weapon_pumpshotgun"), -1082.852f, -1651.92f, 3.3987f, iLocal_2222, 40, 1, 0);
						uLocal_1910 = TASK::ADD_COVER_POINT(-1071.326f, -1663.061f, 3.4888f, 27f, 1, 0, 1, 1);
						uLocal_1911 = TASK::ADD_COVER_POINT(-1082.397f, -1649.098f, 3.5038f, 27f, 1, 0, 1, 1);
						uLocal_1912 = TASK::ADD_COVER_POINT(-1089.433f, -1639.457f, 3.4724f, 27f, 1, 0, 1, 1);
						uLocal_1914 = TASK::ADD_COVER_POINT(-1073.505f, -1657.754f, 3.394f, 226.1309f, 0, 2, 0, 1);
						uLocal_1913 = TASK::ADD_COVER_POINT(-1079.18f, -1653.95f, 3.4f, 27f, 1, 0, 1, 1);
						AUDIO::START_AUDIO_SCENE("ARM_2_SHOOTOUT");
						GlobalFunc_2232(Local_1070[2 /*14*/], 1);
						func_146(4, 12, 0);
						Local_324[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 65:
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[2 /*2*/], 0))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1449[2 /*2*/], PLAYER::PLAYER_PED_ID(), 1))
							{
								if (ENTITY::GET_ENTITY_HEALTH(Local_1449[2 /*2*/]) < 950)
								{
									VEHICLE::SET_VEHICLE_TYRE_BURST(Local_1449[2 /*2*/], 5, 0, 1148846080);
									Local_324[iParam0 /*10*/].f_3 = 1;
								}
							}
						}
						break;
					
					case 54:
						switch (Local_324[iParam0 /*10*/].f_6)
						{
							case 0:
								if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
								{
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1070[2 /*14*/], 1);
									Local_324[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 9000;
									Local_324[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (MISC::GET_GAME_TIMER() > Local_324[iParam0 /*10*/].f_7)
								{
									if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
									{
										ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1070[2 /*14*/], 0);
										Local_324[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					
					case 64:
						switch (Local_324[iParam0 /*10*/].f_6)
						{
							case 0:
								STREAMING::REQUEST_MODEL(joaat("prop_ld_balcfnc_02b"));
								Local_324[iParam0 /*10*/].f_6 = 1;
								break;
							
							case 1:
								if (STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_balcfnc_02b")))
								{
									ENTITY::CREATE_MODEL_HIDE(-1089.8f, -1637.8f, 7.3f, 1f, joaat("prop_ld_balcfnc_02a"), 1);
									uVar52 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_balcfnc_02b"), -1089.83f, -1637.81f, 7.35f, 1, 1, 0);
									ENTITY::SET_ENTITY_ROTATION(uVar52, 0f, 0f, 32.65f, 2, 1);
									Local_324[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					
					case 52:
						switch (Local_324[iParam0 /*10*/].f_6)
						{
							case 0:
								WEAPON::SET_CURRENT_PED_WEAPON(Local_1070[2 /*14*/], WEAPON::GET_BEST_PED_WEAPON(Local_1070[2 /*14*/], 0), 0);
								uLocal_1909 = TASK::ADD_COVER_POINT(Vector(3.429f, -1671.302f, -1076.674f) + Vector(0.03f, -0.29f, -0.1f), 31f, 0, 0, 1, 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1070[2 /*14*/], -1076.667f, -1671.331f, 3.4299f, 2f, 0, 0);
								func_121();
								TASK::TASK_SEEK_COVER_TO_COVER_POINT(0, uLocal_1909, -1087.844f, -1645.891f, 3.3987f, 30000, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 50f, 0);
								func_120(Local_1070[2 /*14*/], 0);
								Local_324[iParam0 /*10*/].f_3 = 1;
								break;
						}
						break;
					
					case 53:
						switch (Local_324[iParam0 /*10*/].f_6)
						{
							case 0:
								if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
								{
									TASK::REMOVE_COVER_POINT(uLocal_1909);
									uLocal_1909 = TASK::ADD_COVER_POINT(-1081.219f, -1667.344f, 3.8438f, 16f, 0, 2, 3, 0);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1070[2 /*14*/], -1082.511f, -1666.637f, 3.483845f, 2.437f, 0, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[2 /*14*/], 29, 1);
									TASK::TASK_SEEK_COVER_TO_COVER_POINT(Local_1070[2 /*14*/], uLocal_1909, -1085.314f, -1653.031f, 4.7843f, -1, 1);
									Local_324[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (GlobalFunc_713(Local_1070[2 /*14*/], -1083.49f, -1667.09f, 3.71f, 1) < 2.8f)
								{
									Local_324[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					
					case 55:
						if (func_282(110))
						{
							if (func_246(7, 53))
							{
								if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
								{
									switch (Local_324[iParam0 /*10*/].f_6)
									{
										case 0:
											TASK::REMOVE_COVER_POINT(uLocal_1909);
											uLocal_1909 = TASK::ADD_COVER_POINT(-1085.27f, -1655.59f, 3.4f, 16f, 1, 2, 4, 0);
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1070[2 /*14*/], -1084.75f, -1656.766f, 3.398659f, 6f, 0, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1070[2 /*14*/], 1);
											func_121();
											TASK::TASK_SEEK_COVER_TO_COVER_POINT(0, uLocal_1909, -1085.27f, -1655.59f, 3.4f, -1, 0);
											TASK::TASK_STAY_IN_COVER(0);
											func_120(Local_1070[2 /*14*/], 0);
											Local_324[iParam0 /*10*/].f_6++;
											break;
										
										case 1:
											if (GlobalFunc_713(Local_1070[2 /*14*/], -1084.75f, -1656.766f, 3.398659f, 1) < 3f)
											{
												if (!PED::IS_PED_INJURED(Local_1070[13 /*14*/]))
												{
													if (TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(-1085.27f, -1655.59f, 3.4f))
													{
														Local_324[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 1000;
													}
												}
												Local_324[iParam0 /*10*/].f_6++;
											}
											break;
										
										case 2:
											if (TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(-1085.27f, -1655.59f, 3.4f))
											{
												ENTITY::IS_ENTITY_DEAD(Local_1070[13 /*14*/]);
												if (((ENTITY::DOES_ENTITY_EXIST(Local_1070[13 /*14*/]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_1070[13 /*14*/])) || func_283(109)) || func_283(101))
												{
													TASK::REMOVE_COVER_POINT(uLocal_1909);
													TASK::CLEAR_PED_TASKS(Local_1070[2 /*14*/]);
													func_121();
													TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -1084.219f, -1657.146f, 3.3987f, -1088.602f, -1655.998f, 6.9797f, 1f, 0, 1056964608, 1082130432, 1, 0, 0, -957453492);
													TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
													TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
													func_120(Local_1070[2 /*14*/], 0);
													func_410(12, 58, 1, 0);
													Local_324[iParam0 /*10*/].f_3 = 1;
												}
											}
											else
											{
												PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1070[2 /*14*/], 0);
												TASK::CLEAR_PED_TASKS(Local_1070[2 /*14*/]);
												func_121();
												TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -1084.219f, -1657.146f, 3.3987f, -1088.602f, -1655.998f, 6.9797f, 1f, 0, 1056964608, 1082130432, 1, 0, 0, -957453492);
												TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
												TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
												func_120(Local_1070[2 /*14*/], 0);
												func_410(12, 58, 1, 0);
												Local_324[iParam0 /*10*/].f_3 = 1;
											}
											break;
										}
									}
							}
						}
						else
						{
							Local_324[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 56:
						TASK::CLEAR_PED_TASKS(Local_1070[2 /*14*/]);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1070[2 /*14*/], -1085.27f, -1655.59f, 3.4f, 3f, 0, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1070[2 /*14*/], 0);
						Local_324[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 57:
						switch (Local_324[iParam0 /*10*/].f_6)
						{
							case 0:
								if (GlobalFunc_713(Local_1070[2 /*14*/], -1089.2f, -1655.05f, 3.42f, 0) < 6.375f)
								{
									func_410(3, 52, 1, 0);
									func_410(7, 53, 1, 0);
									func_410(10, 55, 1, 0);
									func_410(12, 58, 1, 0);
									func_410(13, 56, 1, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1070[2 /*14*/], 1);
									TASK::TASK_PLAY_ANIM(Local_1070[2 /*14*/], "missarmenian2lamar_in_cover", "lamar_explosion_react", 8f, -1f, -1, 131080, 0, 0, 0, 0);
									RECORDING::_0x293220DA1B46CEBC(3f, 4f, 4);
									Local_324[iParam0 /*10*/].f_6++;
								}
								else
								{
									Local_324[iParam0 /*10*/].f_3 = 1;
								}
								break;
							
							case 1:
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_1070[2 /*14*/], -2017877118) == 7 || (TASK::GET_SCRIPT_TASK_STATUS(Local_1070[2 /*14*/], -2017877118) == 1 && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_1070[2 /*14*/], "missarmenian2lamar_in_cover", "lamar_explosion_react") > 0.78f))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1070[2 /*14*/], 0);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1070[2 /*14*/], 100f, 0);
									Local_324[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					
					case 58:
						if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
						{
							switch (Local_324[iParam0 /*10*/].f_6)
							{
								case 0:
									func_121();
									TASK::TASK_PLAY_ANIM(0, "missarmenian2lamar_in_cover", "lamar_cover_intro", 4f, -4f, -1, 0, 0, 0, 0, 0);
									TASK::TASK_PLAY_ANIM(0, "missarmenian2lamar_in_cover", "lamar_cover_idle_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
									TASK::TASK_PLAY_ANIM(0, "missarmenian2lamar_in_cover", "lamar_cover_loop", 4f, -4f, -1, 1, 0, 0, 0, 0);
									func_120(Local_1070[2 /*14*/], 0);
									Local_324[iParam0 /*10*/].f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(800, 2800));
									Local_324[iParam0 /*10*/].f_8 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3800, 6800));
									RECORDING::_0x293220DA1B46CEBC(3f, 1f, 4);
									PED::SET_COMBAT_FLOAT(Local_1070[2 /*14*/], 5, 1f);
									Local_324[iParam0 /*10*/].f_6++;
									break;
								
								case 1:
									if (MISC::GET_GAME_TIMER() > Local_324[iParam0 /*10*/].f_7)
									{
										if (func_246(14, 59))
										{
											Local_324[iParam0 /*10*/].f_3 = 1;
										}
										else if (func_282(102))
										{
											if (!func_403(14, 59))
											{
												if (!PED::IS_PED_IN_COVER(Local_1070[2 /*14*/], 0) || (PED::IS_PED_IN_COVER(Local_1070[2 /*14*/], 0) && GlobalFunc_713(Local_1070[2 /*14*/], -1085.27f, -1655.59f, 3.4f, 1) > 1f))
												{
													if (TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(-1085.27f, -1655.59f, 3.4f))
													{
														PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1070[2 /*14*/], 0);
														TASK::TASK_SEEK_COVER_TO_COVER_POINT(Local_1070[2 /*14*/], uLocal_1909, -1085.27f, -1655.59f, 3.4f, -1, 0);
													}
												}
											}
											Local_324[iParam0 /*10*/].f_3 = 1;
										}
									}
									if (MISC::GET_GAME_TIMER() > Local_324[iParam0 /*10*/].f_8)
									{
										if (!func_403(14, 59) && !func_246(14, 59))
										{
											func_121();
											if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
											{
												TASK::TASK_PLAY_ANIM(0, "missarmenian2lamar_in_cover", "lamar_cover_idle_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
											}
											else
											{
												TASK::TASK_PLAY_ANIM(0, "missarmenian2lamar_in_cover", "lamar_cover_idle_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
											}
											TASK::TASK_PLAY_ANIM(0, "missarmenian2lamar_in_cover", "lamar_cover_loop", 4f, -4f, -1, 1, 0, 0, 0, 0);
											func_120(Local_1070[2 /*14*/], 0);
											Local_324[iParam0 /*10*/].f_8 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3800, 6800));
										}
										else
										{
											Local_324[iParam0 /*10*/].f_3 = 1;
										}
									}
									break;
								}
						}
						break;
					
					case 59:
						if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
						{
							if (!func_403(35, 57))
							{
								func_410(3, 52, 1, 0);
								func_410(7, 53, 1, 0);
								func_410(10, 55, 1, 0);
								func_410(12, 58, 1, 0);
								func_410(13, 56, 1, 0);
								TASK::REMOVE_COVER_POINT(uLocal_1909);
								uLocal_1909 = TASK::ADD_COVER_POINT(-1086.16f, -1651.64f, 3.4f, 40f, 0, 2, 1, 0);
								PED::SET_COMBAT_FLOAT(Local_1070[2 /*14*/], 3, 0.5f);
								PED::SET_COMBAT_FLOAT(Local_1070[2 /*14*/], 4, 1000f);
								PED::SET_COMBAT_FLOAT(Local_1070[2 /*14*/], 0, 0f);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1070[2 /*14*/], -1086.11f, -1651.8f, 3.4f, 3f, 0, 0);
								func_121();
								if (ENTITY::IS_ENTITY_AT_COORD(Local_1070[2 /*14*/], -1085.515f, -1656.071f, 4.39866f, 0.75f, 0.8125f, 1f, 0, 1, 0))
								{
									TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -1084.219f, -1657.146f, 3.3987f, -1087.149f, -1646.533f, 4.662f, 1f, 0, 1056964608, 1082130432, 1, 0, 0, -957453492);
								}
								TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 50f, 0);
								func_120(Local_1070[2 /*14*/], 0);
								Local_324[iParam0 /*10*/].f_3 = 1;
							}
						}
						break;
					
					case 63:
						switch (Local_324[iParam0 /*10*/].f_6)
						{
							case 0:
								if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-967780114))
								{
									OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-967780114, 1f, 0, 1);
									OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-967780114, 4, 0, 1);
									Local_324[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-967780114))
								{
									if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(-967780114) > 0.8f)
									{
										Local_324[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					
					case 67:
						func_259(9, -1075.848f, -1663.647f, 3.3987f, 175.1524f, joaat("weapon_pistol"), 0, 0, -1);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1070[9 /*14*/], -1073.721f, -1657.576f, 3.401901f, 3f, 0, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[9 /*14*/], 11, 1);
						func_121();
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						TASK::TASK_SHOOT_AT_COORD(0, -1075.513f, -1679.814f, 4.9952f, 1500, -687903391);
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 50f, 0);
						func_120(Local_1070[9 /*14*/], 0);
						Local_324[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 68:
						switch (Local_324[iParam0 /*10*/].f_6)
						{
							case 0:
								func_259(10, -1080.693f, -1650.787f, 3.4234f, 196f, joaat("weapon_pistol"), 0, 0, -1);
								PED::SET_COMBAT_FLOAT(Local_1070[10 /*14*/], 3, 0.5f);
								PED::SET_COMBAT_FLOAT(Local_1070[10 /*14*/], 4, 1000f);
								PED::SET_COMBAT_FLOAT(Local_1070[10 /*14*/], 0, 0f);
								PED::SET_PED_CONFIG_FLAG(Local_1070[10 /*14*/], 188, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[10 /*14*/], 12, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[10 /*14*/], 8, 0);
								PED::SET_PED_PINNED_DOWN(Local_1070[10 /*14*/], 0, -1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[10 /*14*/], 34, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[10 /*14*/], 50, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1070[10 /*14*/], 50f, 0);
								Local_324[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (ENTITY::DOES_ENTITY_EXIST(Local_1070[12 /*14*/]) && PED::IS_PED_INJURED(Local_1070[12 /*14*/]))
								{
									if (!PED::IS_PED_INJURED(Local_1070[10 /*14*/]))
									{
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1070[10 /*14*/], -1084.321f, -1648.257f, 3.3987f, 2f, 0, 0);
										Local_324[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					
					case 69:
						func_259(11, -1092.917f, -1660.434f, 3.5354f, 296f, joaat("weapon_pistol"), 0, 0, -1);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1070[11 /*14*/], -1081.759f, -1657.341f, 3.398672f, 2.25f, 0, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[11 /*14*/], 50, 1);
						PED::SET_PED_COMBAT_MOVEMENT(Local_1070[11 /*14*/], 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[11 /*14*/], 51, 1);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1070[11 /*14*/], 50f, 0);
						Local_324[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 70:
						Var56 = { Vector(4.47f, -1649.87f, -1088.97f) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						Var56 = { GlobalFunc_107(Var56) };
						Var56 = { Var56 * Vector(4.48f, 4.48f, 4.48f) };
						Var53 = { Vector(3.4f, -1649.87f, -1088.97f) + Vector(0f, Var56.f_1, Var56.x) };
						uLocal_1915 = TASK::ADD_COVER_POINT(Var53, -148f, 2, 0, 0, 0);
						func_259(12, Var53, 222f, joaat("weapon_pistol"), 0, 0, -1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[12 /*14*/], 29, 1);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1070[12 /*14*/], -1085.302f, -1653.68f, 3.469686f, 2.125f, 0, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[12 /*14*/], 50, 1);
						PED::SET_PED_COMBAT_MOVEMENT(Local_1070[12 /*14*/], 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[12 /*14*/], 51, 1);
						func_121();
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, -1089.061f, -1648.209f, 3.3985f, 500, 0, -1f, 1, 0, uLocal_1915, 0);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 50f, 0);
						func_120(Local_1070[12 /*14*/], 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1070[12 /*14*/], 1, 0);
						Local_324[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 71:
						switch (Local_324[iParam0 /*10*/].f_6)
						{
							case 0:
								if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
								{
									if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_1947))
									{
										if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_1947) == 7)
										{
											func_259(13, -1104.981f, -1665.011f, 6.3488f, 307f, joaat("weapon_microsmg"), 0, 0, -1);
										}
										else
										{
											func_259(13, -1098.214f, -1660.421f, 6.2581f, 307f, joaat("weapon_microsmg"), 0, 0, -1);
										}
									}
									else
									{
										func_259(13, -1098.214f, -1660.421f, 6.2581f, 307f, joaat("weapon_microsmg"), 0, 0, -1);
									}
									PED::SET_PED_ACCURACY(Local_1070[13 /*14*/], 0);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1070[13 /*14*/], -1089.65f, -1655.94f, 6.36f, 1.875f, 0, 0);
									if (func_283(101))
									{
										func_121();
										TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1089.705f, -1656.506f, 6.3482f, 2f, 20000, 0.25f, 0, 40000f);
										TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
										TASK::TASK_SHOOT_AT_ENTITY(0, Local_1070[2 /*14*/], -1, -957453492);
										func_120(Local_1070[13 /*14*/], 0);
										Local_324[iParam0 /*10*/].f_3 = 1;
									}
									else
									{
										PED::SET_PED_ACCURACY(Local_1070[13 /*14*/], 0);
										func_121();
										TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
										TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1089.705f, -1656.506f, 6.3482f, Local_1070[2 /*14*/], 2f, 1, 0.25f, 1082130432, 1, 0, 0, -957453492, 20000);
										TASK::TASK_SHOOT_AT_ENTITY(0, Local_1070[2 /*14*/], -1, -957453492);
										func_120(Local_1070[13 /*14*/], 0);
										PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_1070[13 /*14*/], 2f);
									}
									PED::FORCE_PED_MOTION_STATE(Local_1070[13 /*14*/], -530524, 0, 0, 0);
									RECORDING::_0x293220DA1B46CEBC(1f, 3f, 3);
									Local_324[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (PED::IS_PED_INJURED(Local_1070[13 /*14*/]))
								{
									Local_324[iParam0 /*10*/].f_3 = 1;
								}
								else if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -1089.865f, -1656.486f, 6.202436f, 1) < 4.625f || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_1070[13 /*14*/]))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1070[13 /*14*/], 0);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1070[13 /*14*/], 70f, 0);
									PED::SET_PED_ACCURACY(Local_1070[13 /*14*/], 30);
									Local_324[iParam0 /*10*/].f_3 = 1;
								}
								break;
							
							case 2:
								if (PED::IS_PED_INJURED(Local_1070[13 /*14*/]))
								{
									Local_324[iParam0 /*10*/].f_3 = 1;
								}
								else if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -1089.865f, -1656.486f, 6.202436f, 1) < 4.625f || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_1070[13 /*14*/]))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1070[13 /*14*/], 0);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1070[13 /*14*/], 70f, 0);
									PED::SET_PED_ACCURACY(Local_1070[13 /*14*/], 30);
									Local_324[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					
					case 72:
						if (!PED::IS_PED_INJURED(Local_1070[13 /*14*/]))
						{
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1070[13 /*14*/], ENTITY::GET_ENTITY_COORDS(Local_1070[13 /*14*/], 1), 5.25f, 0, 0);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1070[13 /*14*/], 50f, 0);
							Local_324[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 73:
						func_259(16, -1108.89f, -1637.478f, 3.6162f, 300f, joaat("weapon_pistol"), 0, 0, -1);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1070[16 /*14*/], -1098.419f, -1629.159f, 3.3987f, 2.5f, 0, 0);
						PED::SET_PED_COMBAT_MOVEMENT(Local_1070[16 /*14*/], 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[16 /*14*/], 51, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[16 /*14*/], 50, 1);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1070[16 /*14*/], 100f, 0);
						Local_324[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 74:
						switch (Local_324[iParam0 /*10*/].f_6)
						{
							case 0:
								func_259(18, -1090.482f, -1635.052f, 6.7641f, 167f, joaat("weapon_pistol"), 0, 0, -1);
								PED::SET_COMBAT_FLOAT(Local_1070[18 /*14*/], 4, 10f);
								PED::SET_PED_TARGET_LOSS_RESPONSE(Local_1070[18 /*14*/], 1);
								PED::SET_PED_CONFIG_FLAG(Local_1070[18 /*14*/], 188, 1);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1070[18 /*14*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1070[18 /*14*/], -1090.146f, -1636.204f, 6.716715f, 2.375f, 0, 0);
								ENTITY::SET_ENTITY_HEALTH(Local_1070[18 /*14*/], 350);
								PED::SET_PED_MAX_HEALTH(Local_1070[18 /*14*/], 350);
								PED::FORCE_PED_MOTION_STATE(Local_1070[18 /*14*/], -530524, 1, 0, 0);
								PED::REGISTER_HATED_TARGETS_AROUND_PED(Local_1070[18 /*14*/], 150f);
								func_121();
								TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1090.276f, -1637.367f, 6.7641f, 2f, 20000, 0.4f, 0, 40000f);
								TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 150f, 0);
								func_120(Local_1070[18 /*14*/], 0);
								Local_324[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (!PED::IS_PED_INJURED(Local_1070[18 /*14*/]))
								{
									if (PED::IS_PED_RAGDOLL(Local_1070[18 /*14*/]))
									{
										ENTITY::SET_ENTITY_HEALTH(Local_1070[18 /*14*/], 0);
										Local_324[iParam0 /*10*/].f_3 = 1;
									}
									else if (TASK::GET_SCRIPT_TASK_STATUS(Local_1070[18 /*14*/], 1435919172) != 1)
									{
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1070[18 /*14*/], 150f, 0);
									}
								}
								else
								{
									Local_324[iParam0 /*10*/].f_3 = 1;
								}
								if (Local_324[iParam0 /*10*/].f_7 == 0)
								{
									if (func_283(97))
									{
										if (!PED::IS_PED_INJURED(Local_1070[18 /*14*/]))
										{
											PED::SET_PED_ALLOWED_TO_DUCK(Local_1070[18 /*14*/], 0);
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[18 /*14*/], 12, 0);
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[18 /*14*/], 0, 0);
										}
										Local_324[iParam0 /*10*/].f_7 = 1;
									}
								}
								else if (func_282(97))
								{
									if (!PED::IS_PED_INJURED(Local_1070[18 /*14*/]))
									{
										PED::SET_PED_ALLOWED_TO_DUCK(Local_1070[18 /*14*/], 1);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[18 /*14*/], 12, 1);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[18 /*14*/], 0, 1);
									}
									Local_324[iParam0 /*10*/].f_7 = 0;
								}
								break;
						}
						break;
					
					case 75:
						switch (Local_324[iParam0 /*10*/].f_6)
						{
							case 0:
								func_259(19, -1098.691f, -1626.716f, 9.9315f, 209.2257f, joaat("weapon_pistol"), 0, 0, -1);
								WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_1070[19 /*14*/], WEAPON::GET_BEST_PED_WEAPON(Local_1070[19 /*14*/], 0));
								PED::SET_PED_ANGLED_DEFENSIVE_AREA(Local_1070[19 /*14*/], -1095.918f, -1630.074f, 9.936975f, -1097.003f, -1630.831f, 10.91186f, 1f, 0, 0);
								PED::FORCE_PED_MOTION_STATE(Local_1070[19 /*14*/], -530524, 1, 0, 0);
								PED::SET_PED_CONFIG_FLAG(Local_1070[19 /*14*/], 188, 1);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1070[19 /*14*/], 1);
								PED::SET_PED_ALLOWED_TO_DUCK(Local_1070[19 /*14*/], 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[19 /*14*/], 12, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[19 /*14*/], 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[19 /*14*/], 29, 0);
								PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_1070[19 /*14*/], 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1070[19 /*14*/], 150f, 0);
								Local_324[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (!PED::IS_PED_INJURED(Local_1070[19 /*14*/]))
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1070[19 /*14*/], -1095.918f, -1630.074f, 9.936975f, -1097.003f, -1630.831f, 10.91186f, 1f, 0, 1, 0))
									{
										if (PED::GET_PED_COMBAT_MOVEMENT(Local_1070[19 /*14*/]) != 0)
										{
											PED::SET_PED_COMBAT_MOVEMENT(Local_1070[19 /*14*/], 0);
										}
									}
									if (PED::IS_PED_RAGDOLL(Local_1070[19 /*14*/]))
									{
										ENTITY::SET_ENTITY_HEALTH(Local_1070[19 /*14*/], 0);
										Local_324[iParam0 /*10*/].f_3 = 1;
									}
								}
								else
								{
									Local_324[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					
					case 76:
						if (ENTITY::DOES_ENTITY_EXIST(Local_1070[21 /*14*/]))
						{
							if (PED::IS_PED_INJURED(Local_1070[21 /*14*/]))
							{
								TASK::REMOVE_WAYPOINT_RECORDING("arm2_15");
								Local_324[iParam0 /*10*/].f_3 = 1;
							}
						}
						Local_324[iParam0 /*10*/].f_9 = (Local_324[iParam0 /*10*/].f_9 + (-2f * SYSTEM::TIMESTEP()));
						if (Local_324[iParam0 /*10*/].f_9 <= -1f)
						{
							Local_324[iParam0 /*10*/].f_9 = -1f;
						}
						func_402(joaat("prop_map_door_01"), -1104.657f, -1638.481f, 4.6754f, 1, Local_324[iParam0 /*10*/].f_9);
						switch (Local_324[iParam0 /*10*/].f_6)
						{
							case 99:
								break;
							
							case 0:
								TASK::REQUEST_WAYPOINT_RECORDING("arm2_15");
								Local_324[iParam0 /*10*/].f_6++;
								Local_324[iParam0 /*10*/].f_4 = 1;
								break;
							
							case 1:
								if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("arm2_15"))
								{
									func_259(21, -1106.876f, -1638.7f, 3.6407f, 288.3654f, joaat("weapon_pistol"), 0, 0, -1);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1070[21 /*14*/], -1100.477f, -1641.042f, 3.616217f, 2.75f, 0, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[21 /*14*/], 29, 0);
									PED::SET_PED_COMBAT_MOVEMENT(Local_1070[21 /*14*/], 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[21 /*14*/], 51, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[21 /*14*/], 50, 1);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1070[21 /*14*/], 100f, 0);
									AUDIO::PLAY_SOUND_FROM_COORD(-1, "ARM_2_REPO_DOOR_KICK_OPEN", -1104.359f, -1637.575f, 2.366156f, 0, 0, 0, 0);
									Local_324[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 2:
								break;
							
							case 3:
								if (!PED::IS_PED_INJURED(Local_1070[21 /*14*/]))
								{
									PED::SET_PED_CAPSULE(Local_1070[21 /*14*/], 1f);
									if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1070[21 /*14*/]))
									{
										TASK::WAYPOINT_PLAYBACK_START_AIMING_AT_PED(Local_1070[21 /*14*/], PLAYER::PLAYER_PED_ID(), 0);
										Local_324[iParam0 /*10*/].f_6++;
									}
								}
								break;
							
							case 4:
								if (!PED::IS_PED_INJURED(Local_1070[21 /*14*/]))
								{
									PED::SET_PED_CAPSULE(Local_1070[21 /*14*/], 1f);
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1070[21 /*14*/], -1104.359f, -1637.575f, 2.366156f, -1105.299f, -1638.249f, 6.828245f, 1.5625f, 0, 1, 0))
									{
										AUDIO::PLAY_SOUND_FROM_COORD(-1, "ARM_2_REPO_DOOR_KICK_OPEN", -1104.359f, -1637.575f, 2.366156f, 0, 0, 0, 0);
										Local_324[iParam0 /*10*/].f_6++;
									}
								}
								break;
							
							case 5:
								if (!PED::IS_PED_INJURED(Local_1070[21 /*14*/]))
								{
									PED::SET_PED_CAPSULE(Local_1070[21 /*14*/], 1f);
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1070[21 /*14*/], -1103.139f, -1638.565f, 2.803717f, -1104.735f, -1636.18f, 4.803716f, 1.375f, 0, 1, 0))
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1070[21 /*14*/], 0);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1070[21 /*14*/], 100f, 0);
										GlobalFunc_10617(96, 4);
										Local_324[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					
					case 60:
						if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
						{
							PED::SET_PED_ANGLED_DEFENSIVE_AREA(Local_1070[2 /*14*/], -1100.694f, -1647.66f, 2.457902f, -1092.784f, -1647.704f, 5.39866f, 2.375f, 0, 0);
							Local_324[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 77:
						switch (Local_324[iParam0 /*10*/].f_6)
						{
							case 0:
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[6 /*2*/], 0))
								{
									Local_1070[20 /*14*/] = PED::CREATE_PED(26, iLocal_2218, -1084.383f, -1633.023f, 3.7424f, 81f, 1, 1);
									PED::SET_PED_CAN_BE_TARGETTED(Local_1070[20 /*14*/], 0);
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1449[6 /*2*/], 1);
									VEHICLE::SET_VEHICLE_ALARM(Local_1449[6 /*2*/], 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1070[20 /*14*/], 1);
									TASK::TASK_ENTER_VEHICLE(Local_1070[20 /*14*/], Local_1449[6 /*2*/], 20000, -1, 2f, 262144, 0);
									ENTITY::FREEZE_ENTITY_POSITION(Local_1449[6 /*2*/], 0);
									Local_324[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[6 /*2*/], 0))
								{
									if (!PED::IS_PED_INJURED(Local_1070[20 /*14*/]))
									{
										if (PED::IS_PED_SITTING_IN_VEHICLE(Local_1070[20 /*14*/], Local_1449[6 /*2*/]))
										{
											TASK::TASK_PLAY_ANIM(Local_1070[20 /*14*/], "missarmenian2", "In_Car_Nervous", 8f, -8f, -1, 1, 0, 0, 0, 0);
											Local_324[iParam0 /*10*/].f_6++;
										}
										else if (TASK::GET_SCRIPT_TASK_STATUS(Local_1070[20 /*14*/], -1794415470) == 7)
										{
											TASK::TASK_ENTER_VEHICLE(Local_1070[20 /*14*/], Local_1449[6 /*2*/], 20000, -1, 2f, 262144, 0);
										}
									}
								}
								break;
							
							case 2:
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[6 /*2*/], 0))
								{
									if (!PED::IS_PED_INJURED(Local_1070[20 /*14*/]))
									{
										if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_1070[20 /*14*/], Local_1449[6 /*2*/]))
										{
											TASK::TASK_SMART_FLEE_PED(Local_1070[20 /*14*/], PLAYER::PLAYER_PED_ID(), 70f, -1, 0, 0);
											PED::SET_PED_KEEP_TASK(Local_1070[20 /*14*/], 1);
											ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1070[20 /*14*/]));
											Local_324[iParam0 /*10*/].f_3 = 1;
										}
									}
									else
									{
										Local_324[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					
					case 78:
						if (!PED::IS_PED_INJURED(Local_1070[20 /*14*/]))
						{
							switch (Local_324[iParam0 /*10*/].f_6)
							{
								case 0:
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[6 /*2*/], 0))
									{
										if (PED::IS_PED_SITTING_IN_VEHICLE(Local_1070[20 /*14*/], Local_1449[6 /*2*/]))
										{
											if (MISC::ABSF((ENTITY::GET_ENTITY_HEADING(Local_1449[6 /*2*/]) - 307.1f)) < 0.5f)
											{
												PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[20 /*14*/], 3, 0);
												ENTITY::SET_ENTITY_PROOFS(Local_1070[20 /*14*/], 1, 0, 0, 0, 0, 0, 0, 0);
												PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1070[20 /*14*/], iLocal_1472);
												PED::SET_PED_CONFIG_FLAG(Local_1070[20 /*14*/], 116, 0);
												ENTITY::FREEZE_ENTITY_POSITION(Local_1449[6 /*2*/], 0);
												VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1449[6 /*2*/], 6, "ARM2", 1);
												AUDIO::ENABLE_VEHICLE_EXHAUST_POPS(Local_1449[6 /*2*/], 0);
												PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1070[20 /*14*/], 1);
												AUDIO::START_AUDIO_SCENE("ARM_2_GAS_TRAIL");
												AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_1449[6 /*2*/], "ARM_2_GAS_TRAIL_CAR_GROUP", 0);
												RECORDING::_0x293220DA1B46CEBC(2f, 7f, 4);
												Local_324[iParam0 /*10*/].f_6++;
											}
											else
											{
												TASK::TASK_SMART_FLEE_PED(Local_1070[20 /*14*/], PLAYER::PLAYER_PED_ID(), 100f, 100000, 0, 0);
												PED::SET_PED_KEEP_TASK(Local_1070[20 /*14*/], 1);
												ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1070[20 /*14*/]));
												Local_324[iParam0 /*10*/].f_3 = 1;
											}
										}
										else
										{
											TASK::TASK_SMART_FLEE_PED(Local_1070[20 /*14*/], PLAYER::PLAYER_PED_ID(), 100f, 100000, 0, 0);
											PED::SET_PED_KEEP_TASK(Local_1070[20 /*14*/], 1);
											ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1070[20 /*14*/]));
											Local_324[iParam0 /*10*/].f_3 = 1;
										}
									}
									else
									{
										TASK::TASK_SMART_FLEE_PED(Local_1070[20 /*14*/], PLAYER::PLAYER_PED_ID(), 100f, 100000, 0, 0);
										PED::SET_PED_KEEP_TASK(Local_1070[20 /*14*/], 1);
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1070[20 /*14*/]));
										Local_324[iParam0 /*10*/].f_3 = 1;
									}
									break;
								
								case 1:
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[6 /*2*/], 0))
									{
										if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1449[6 /*2*/]))
										{
											ENTITY::SET_ENTITY_INVINCIBLE(Local_1070[20 /*14*/], 0);
											ENTITY::SET_ENTITY_HEALTH(Local_1070[20 /*14*/], 0);
											Local_324[iParam0 /*10*/].f_3 = 1;
										}
									}
									break;
								}
						}
						break;
					
					case joaat("mpsv_lp0_31"):
						switch (Local_324[iParam0 /*10*/].f_6)
						{
							case 0:
								Local_324[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER();
								Local_324[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[6 /*2*/], 0))
								{
									if (ENTITY::GET_ENTITY_HEALTH(Local_1449[6 /*2*/]) < 300)
									{
										ENTITY::SET_ENTITY_HEALTH(Local_1449[6 /*2*/], 300);
									}
									if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_1449[6 /*2*/]) < 200f)
									{
										VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_1449[6 /*2*/], 200f);
									}
									if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_1449[6 /*2*/]) < 150f)
									{
										VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_1449[6 /*2*/], 150f);
									}
									Local_324[iParam0 /*10*/].f_8 = (MISC::GET_GAME_TIMER() - Local_324[iParam0 /*10*/].f_7);
									iVar59 = 0;
									iVar59 = 0;
									while (iVar59 <= 8)
									{
										if (Local_324[iParam0 /*10*/].f_8 > Local_1919[iVar59 /*3*/])
										{
											if (Local_1919[iVar59 /*3*/].f_1 == 0)
											{
												Local_1919[iVar59 /*3*/].f_1 = 1;
												switch (Local_1919[iVar59 /*3*/].f_2)
												{
													case 0:
														VEHICLE::POP_OUT_VEHICLE_WINDSCREEN(Local_1449[6 /*2*/]);
														break;
													
													case 1:
														VEHICLE::SMASH_VEHICLE_WINDOW(Local_1449[6 /*2*/], 3);
														break;
													
													case 2:
														VEHICLE::SET_VEHICLE_TYRE_BURST(Local_1449[6 /*2*/], 1, 0, 1148846080);
														break;
													
													case 3:
														VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_1449[6 /*2*/], 1);
														VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_1449[6 /*2*/], 200f);
														VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_1449[6 /*2*/], 150f);
														VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1449[6 /*2*/], 2);
														break;
													
													case 4:
														VEHICLE::SMASH_VEHICLE_WINDOW(Local_1449[6 /*2*/], 1);
														break;
													
													case 5:
														VEHICLE::SET_VEHICLE_DOOR_LATCHED(Local_1449[6 /*2*/], 5, 0, 0, 1);
														VEHICLE::SET_VEHICLE_DOOR_CONTROL(Local_1449[6 /*2*/], 5, 3, 0.25f);
														break;
													
													case 7:
														VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_1449[6 /*2*/], 2, 0);
														Local_324[iParam0 /*10*/].f_3 = 1;
														break;
													
													case 6:
														VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_1449[6 /*2*/], 3, 0);
														break;
													
													case 8:
														VEHICLE::SET_VEHICLE_DAMAGE(Local_1449[6 /*2*/], 0f, -2f, 0f, 5f, 0.3f, 1);
														if (!PED::IS_PED_INJURED(Local_1070[20 /*14*/]))
														{
															PED::SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE(Local_1070[20 /*14*/], 1);
															ENTITY::SET_ENTITY_HEALTH(Local_1070[20 /*14*/], 0);
														}
														break;
													}
												}
										}
										iVar59++;
									}
								}
								break;
						}
						break;
					
					case 84:
						func_259(22, -1117.177f, -1625.52f, 3.4419f, 289.343f, joaat("weapon_pistol"), 0, 0, -1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[22 /*14*/], 29, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[22 /*14*/], 51, 1);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1070[22 /*14*/], -1105.623f, -1627.569f, 3.4014f, 3f, 0, 0);
						PED::REGISTER_HATED_TARGETS_AROUND_PED(Local_1070[22 /*14*/], 200f);
						PED::SET_PED_TARGET_LOSS_RESPONSE(Local_1070[22 /*14*/], 1);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1070[22 /*14*/], 100f, 0);
						func_259(24, -1100.041f, -1619.929f, 3.7226f, 115.4267f, joaat("weapon_pistol"), 0, 0, -1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[24 /*14*/], 29, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[24 /*14*/], 51, 1);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1070[24 /*14*/], -1107.335f, -1630.705f, 3.5958f, 3f, 0, 0);
						PED::REGISTER_HATED_TARGETS_AROUND_PED(Local_1070[24 /*14*/], 200f);
						PED::SET_PED_TARGET_LOSS_RESPONSE(Local_1070[24 /*14*/], 1);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1070[24 /*14*/], 100f, 0);
						func_535(7);
						Local_324[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 85:
						func_407("ARM2_FIGHT_START", 1, "ARM2_CAR");
						Local_324[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 86:
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[6 /*2*/], 0))
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_1449[6 /*2*/], 0);
							Local_324[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 87:
						switch (Local_324[iParam0 /*10*/].f_6)
						{
							case 0:
								break;
							
							case 1:
								if (!PED::IS_PED_INJURED(Local_1070[13 /*14*/]))
								{
									Local_324[iParam0 /*10*/].f_6++;
									Local_324[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 500;
								}
								else
								{
									Local_324[iParam0 /*10*/].f_3 = 1;
								}
								break;
							
							case 2:
								if (MISC::GET_GAME_TIMER() > Local_324[iParam0 /*10*/].f_7)
								{
									Local_324[iParam0 /*10*/].f_3 = 1;
								}
								else if (PED::IS_PED_INJURED(Local_1070[13 /*14*/]))
								{
									Local_324[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					
					case 88:
						if (ENTITY::DOES_ENTITY_EXIST(Local_1070[8 /*14*/]))
						{
							if (!PED::IS_PED_INJURED(Local_1070[8 /*14*/]))
							{
								if (!WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(Local_1070[8 /*14*/], 0, 2))
								{
									GlobalFunc_553(19);
								}
							}
							else if (PED::GET_PED_CAUSE_OF_DEATH(Local_1070[8 /*14*/]) == 0)
							{
								GlobalFunc_553(19);
							}
						}
						RECORDING::_0x293220DA1B46CEBC(3f, 5f, 4);
						Local_324[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 89:
						func_407("ARM2_GATE", 0, "ARM2_CHASE_START");
						Local_324[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 90:
						if (CAM::IS_GAMEPLAY_HINT_ACTIVE() && func_283(6))
						{
							if (Local_324[iParam0 /*10*/].f_7 == 0)
							{
								if (AUDIO::START_AUDIO_SCENE("ARM_2_FOCUS_ON_BIKE"))
								{
									Local_324[iParam0 /*10*/].f_7 = 1;
								}
							}
						}
						else if (Local_324[iParam0 /*10*/].f_7 == 1)
						{
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_2_FOCUS_ON_BIKE"))
							{
								AUDIO::STOP_AUDIO_SCENE("ARM_2_FOCUS_ON_BIKE");
							}
							Local_324[iParam0 /*10*/].f_7 = 0;
						}
						break;
					
					case 91:
						if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_1947))
						{
							if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_1947) == 10)
							{
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_2_RAYFIRE"))
								{
									AUDIO::STOP_AUDIO_SCENE("ARM_2_RAYFIRE");
								}
								else
								{
									RECORDING::_0x81CBAE94390F9F89();
									Local_324[iParam0 /*10*/].f_3 = 1;
								}
							}
						}
						break;
					
					case 80:
						switch (Local_324[iParam0 /*10*/].f_6)
						{
							case 0:
								func_400(&(Local_2068[0 /*7*/]), 0f, -1095.341f, -1643.916f, 3.4784f, -1.0505f, 2.4131f, 0f);
								func_400(&(Local_2068[1 /*7*/]), 1f, -1097.301f, -1637.029f, 3.463f, 0.0203f, 2.7398f, 0f);
								func_400(&(Local_2068[2 /*7*/]), 2f, -1104.442f, -1629.705f, 3.4128f, -4.9086f, 2.179f, 0f);
								Local_324[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (func_397(&bLocal_1065))
								{
									Local_324[iParam0 /*10*/].f_3 = 1;
								}
								if (bLocal_1065)
								{
									GlobalFunc_553(10);
									Local_324[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 2:
								if (func_397(&bLocal_1065))
								{
									Local_324[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					
					case 81:
						switch (Local_324[iParam0 /*10*/].f_6)
						{
							case 0:
								Local_324[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 2200;
								Local_324[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[6 /*2*/], 0))
								{
									if (MISC::GET_GAME_TIMER() > Local_324[iParam0 /*10*/].f_7)
									{
										if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_2_GAS_TRAIL"))
										{
											AUDIO::STOP_AUDIO_SCENE("ARM_2_GAS_TRAIL");
											AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_1449[6 /*2*/], 0);
										}
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_1449[6 /*2*/], 11, "ARM2", 16, 0, 786603);
										NETWORK::NETWORK_EXPLODE_VEHICLE(Local_1449[6 /*2*/], 1, 0, 0);
										RECORDING::_0x293220DA1B46CEBC(3f, 4f, 4);
										Local_324[iParam0 /*10*/].f_6++;
									}
								}
								break;
							
							case 2:
								func_407("ARM2_CAR", 1, "ARM2_CHASE_START");
								Local_324[iParam0 /*10*/].f_3 = 1;
								break;
						}
						break;
					
					case 61:
						func_121();
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						TASK::TASK_SHOOT_AT_ENTITY(0, Local_1449[6 /*2*/], 4000, -957453492);
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 60f, 0);
						func_120(Local_1070[2 /*14*/], 0);
						Local_324[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 62:
						func_377(iParam0);
						break;
					
					case 82:
						switch (Local_324[iParam0 /*10*/].f_6)
						{
							case 0:
								iLocal_1948 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_test_01"), -1087.825f, -1655.361f, 7.1638f, 1, 1, 0);
								ENTITY::SET_ENTITY_VISIBLE(iLocal_1948, 0);
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_1948, 1);
								ENTITY::SET_ENTITY_PROOFS(iLocal_1948, 1, 1, 1, 1, 1, 0, 0, 0);
								ENTITY::SET_ENTITY_INVINCIBLE(iLocal_1948, 1);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_1948, 1);
								ENTITY::SET_ENTITY_COLLISION(iLocal_1948, 0, 0);
								OBJECT::SET_OBJECT_TARGETTABLE(iLocal_1948, 1);
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_1948, 1, 30f);
								Local_324[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (func_283(110))
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_1948))
									{
										OBJECT::DELETE_OBJECT(&iLocal_1948);
										Local_324[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					
					case 83:
						switch (Local_324[iParam0 /*10*/].f_6)
						{
							case 0:
								iLocal_1949 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_test_01"), -1097.36f, -1636.76f, 3.4f, 1, 1, 0);
								ENTITY::SET_ENTITY_VISIBLE(iLocal_1949, 0);
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_1949, 1);
								ENTITY::SET_ENTITY_PROOFS(iLocal_1949, 1, 1, 1, 1, 1, 0, 0, 0);
								ENTITY::SET_ENTITY_INVINCIBLE(iLocal_1949, 1);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_1949, 1);
								ENTITY::SET_ENTITY_COLLISION(iLocal_1949, 0, 0);
								OBJECT::SET_OBJECT_TARGETTABLE(iLocal_1949, 1);
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_1949, 1, 30f);
								Local_324[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (func_283(121) || bLocal_1065)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_1949))
									{
										OBJECT::DELETE_OBJECT(&iLocal_1949);
										Local_324[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					
					case 92:
						if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -1106.28f, -1624.36f, 3.4f, 1) > 70f)
						{
							iVar60 = 0;
							while (iVar60 < Local_1070)
							{
								if ((iVar60 != 2 && iVar60 != 0) && iVar60 != 8)
								{
									if (ENTITY::DOES_ENTITY_EXIST(Local_1070[iVar60 /*14*/]))
									{
										if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_1070[iVar60 /*14*/], 0))
										{
											ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1070[iVar60 /*14*/]));
										}
									}
								}
								iVar60++;
							}
							iVar60 = 0;
							while (iVar60 < Local_1449)
							{
								if (iVar60 != 0 && iVar60 != 4)
								{
									if (ENTITY::DOES_ENTITY_EXIST(Local_1449[iVar60 /*2*/]))
									{
										if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_1449[iVar60 /*2*/]))
										{
											if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_1449[iVar60 /*2*/], 0))
											{
												ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1449[iVar60 /*2*/]));
											}
										}
									}
								}
								iVar60++;
							}
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_bin_07c"));
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_mexgoon_01"));
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_mexgoon_03"));
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bison"));
							Local_324[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 93:
						if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[0 /*2*/], 0))
						{
							Local_1449[7 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("bison"), -1149.332f, -1593.024f, 3.2546f, 307.5245f, 1, 1);
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1449[7 /*2*/]));
						}
						else if (GlobalFunc_713(Local_1449[0 /*2*/], -1139.456f, -1579.801f, 3.365427f, 1) > 32.8f)
						{
							if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_1449[0 /*2*/], 1))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1449[0 /*2*/], 1, 0);
								VEHICLE::DELETE_VEHICLE(&(Local_1449[0 /*2*/]));
							}
							Local_1449[7 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("bison"), -1149.332f, -1593.024f, 3.2546f, 307.5245f, 1, 1);
						}
						MISC::SET_INSTANCE_PRIORITY_HINT(2);
						WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
						if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
						{
							WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(Local_1070[2 /*14*/], 0);
						}
						PED::SET_CREATE_RANDOM_COPS(1);
						if (!ENTITY::DOES_ENTITY_EXIST(Local_1449[4 /*2*/]))
						{
							while (!func_363(&(Local_1449[4 /*2*/]), 1, -1134.078f, -1582.068f, 3.2928f, 300f, 1, 2))
							{
								func_19(2, 0);
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[4 /*2*/], 0))
						{
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1449[4 /*2*/], 1);
						}
						PATHFIND::SET_ROADS_IN_ANGLED_AREA(-966.1594f, -1187.304f, -0.770555f, -1094.655f, -964.7231f, 15.13055f, 10.3125f, 0, 0, 1);
						if (HUD::DOES_BLIP_EXIST(Local_1070[2 /*14*/].f_1))
						{
							HUD::REMOVE_BLIP(&(Local_1070[2 /*14*/].f_1));
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[4 /*2*/], 0))
						{
							Local_1449[4 /*2*/].f_1 = GlobalFunc_7055(Local_1449[4 /*2*/], 0, 0);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[4 /*2*/], 0))
						{
							AUDIO::START_AUDIO_SCENE("ARM_2_GET_TO_THE_CAR");
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_1449[4 /*2*/], "ARM_2_BAGGER_GROUP", 0);
						}
						if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1070[2 /*14*/], 1);
						}
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_2_GAS_TRAIL"))
						{
							AUDIO::STOP_AUDIO_SCENE("ARM_2_GAS_TRAIL");
							AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_1449[6 /*2*/], 0);
						}
						func_535(8);
						Local_324[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 94:
						break;
					
					case 95:
						PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(-1549f, -1712f, -950f, -100f);
						switch (Local_324[iParam0 /*10*/].f_6)
						{
							case 0:
								if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(-1549f, -1712f, -950f, -100f))
								{
									func_121();
									TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_1449[4 /*2*/], -1082.167f, -1544.527f, 3.5825f, 25f, 1, 0, 571211828, 10f, 5f);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_1449[4 /*2*/], -1068.112f, -1535.106f, 3.8693f, 25f, 1, 0, 571211828, 10f, 5f);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_1449[4 /*2*/], -1106.441f, -943.8071f, 1.5151f, 25f, 1, 0, 571211828, 10f, 5f);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_1449[4 /*2*/], -1188.955f, -728.5704f, 19.7766f, 25f, 1, 0, 571211828, 10f, 5f);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_1449[4 /*2*/], -1322.462f, -579.8076f, 28.4281f, 25f, 1, 0, 571211828, 10f, 5f);
									TASK::TASK_VEHICLE_DRIVE_WANDER(0, Local_1449[4 /*2*/], 25f, 537657381);
									func_120(Local_1070[8 /*14*/], 0);
									if (!ENTITY::IS_ENTITY_DEAD(Local_1449[4 /*2*/]))
									{
										VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_1449[4 /*2*/], false);
										VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_1449[4 /*2*/], 5f);
									}
									if (!PED::IS_PED_INJURED(Local_1070[8 /*14*/]))
									{
										ENTITY::SET_ENTITY_HEALTH(Local_1070[8 /*14*/], 100);
										PED::SET_PED_CAN_BE_TARGETTED(Local_1070[8 /*14*/], 1);
										ENTITY::SET_ENTITY_PROOFS(Local_1070[8 /*14*/], 0, 0, 0, 0, 0, 0, 0, 0);
									}
									RECORDING::_0x293220DA1B46CEBC(4f, 5f, 4);
									Local_324[iParam0 /*10*/].f_6++;
								}
								break;
						}
						break;
					
					case 96:
						if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
						{
							if (!PED::IS_PED_GROUP_MEMBER(Local_1070[2 /*14*/], PED::GET_PED_GROUP_INDEX(PLAYER::PLAYER_PED_ID())))
							{
								if (GlobalFunc_156(Local_1070[2 /*14*/], PLAYER::PLAYER_PED_ID(), 1) < 30f)
								{
									PED::SET_PED_AS_GROUP_MEMBER(Local_1070[2 /*14*/], PED::GET_PED_GROUP_INDEX(PLAYER::PLAYER_PED_ID()));
									PED::SET_GROUP_SEPARATION_RANGE(PED::GET_PED_GROUP_INDEX(PLAYER::PLAYER_PED_ID()), 45f);
									PED::SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(Local_1070[2 /*14*/], PED::GET_PED_GROUP_INDEX(PLAYER::PLAYER_PED_ID()), 1);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(Local_1070[2 /*14*/], 0);
									PED::SET_PED_CONFIG_FLAG(Local_1070[2 /*14*/], 268, 1);
								}
							}
						}
						break;
					
					case 97:
						if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(-1549f, -1712f, -950f, -100f))
						{
							if (!PED::IS_PED_INJURED(Local_1070[8 /*14*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_1070[8 /*14*/], 242628503) == 1)
								{
									func_121();
									if (TASK::GET_SEQUENCE_PROGRESS(Local_1070[8 /*14*/]) <= 0)
									{
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_1449[4 /*2*/], -1061.849f, -1530.716f, 4.0065f, 30f, 1, 0, 571211828, 5f, 5f);
									}
									if (TASK::GET_SEQUENCE_PROGRESS(Local_1070[8 /*14*/]) <= 1)
									{
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_1449[4 /*2*/], -1068.112f, -1535.106f, 3.8693f, 30f, 1, 0, 571211828, 5f, 5f);
									}
									if (TASK::GET_SEQUENCE_PROGRESS(Local_1070[8 /*14*/]) <= 2)
									{
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_1449[4 /*2*/], -1106.441f, -943.8071f, 1.5151f, 30f, 1, 0, 571211828, 5f, 5f);
									}
									if (TASK::GET_SEQUENCE_PROGRESS(Local_1070[8 /*14*/]) <= 3)
									{
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_1449[4 /*2*/], -1188.955f, -728.5704f, 19.7766f, 30f, 1, 0, 571211828, 5f, 5f);
									}
									if (TASK::GET_SEQUENCE_PROGRESS(Local_1070[8 /*14*/]) <= 4)
									{
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_1449[4 /*2*/], -1322.462f, -579.8076f, 28.4281f, 30f, 1, 0, 571211828, 5f, 5f);
									}
									TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, PED::GET_VEHICLE_PED_IS_USING(Local_1070[8 /*14*/]), PLAYER::PLAYER_PED_ID(), 8, 25f, 537657380, 10f, 15f, 1);
									func_120(Local_1070[8 /*14*/], 0);
									Local_324[iParam0 /*10*/].f_3 = 1;
								}
								else
								{
									TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_1070[8 /*14*/], PED::GET_VEHICLE_PED_IS_USING(Local_1070[8 /*14*/]), PLAYER::PLAYER_PED_ID(), 8, 25f, 571211828, 10f, 15f, 1);
									Local_324[iParam0 /*10*/].f_3 = 1;
								}
							}
						}
						break;
					
					case 98:
						if (!PED::IS_PED_INJURED(Local_1070[8 /*14*/]))
						{
							if (PED::IS_PED_BEING_JACKED(Local_1070[8 /*14*/]))
							{
								TASK::TASK_SMART_FLEE_PED(Local_1070[8 /*14*/], PLAYER::PLAYER_PED_ID(), 100f, 100000, 0, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1070[8 /*14*/], 0);
								PED::SET_PED_KEEP_TASK(Local_1070[8 /*14*/], 1);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1070[8 /*14*/]));
								PED::SET_PED_CAN_BE_TARGETTED(Local_1070[8 /*14*/], 1);
								Local_324[iParam0 /*10*/].f_3 = 1;
							}
						}
						break;
					
					case 99:
						if (!PED::IS_PED_INJURED(Local_1070[8 /*14*/]))
						{
							TASK::TASK_SMART_FLEE_PED(Local_1070[8 /*14*/], PLAYER::PLAYER_PED_ID(), 100f, 100000, 0, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1070[8 /*14*/], 0);
							PED::SET_PED_KEEP_TASK(Local_1070[8 /*14*/], 1);
							PED::SET_PED_CAN_BE_TARGETTED(Local_1070[8 /*14*/], 1);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1070[8 /*14*/]));
							Local_324[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 100:
						func_407("ARM2_CHASE_START", 0, "ARM2_CHASE_MID");
						Local_324[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 101:
						func_407("ARM2_CHASE_MID", 1, "ARM2_STOP_TRACK");
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_2_GET_TO_THE_CAR"))
						{
							AUDIO::STOP_AUDIO_SCENE("ARM_2_GET_TO_THE_CAR");
						}
						AUDIO::START_AUDIO_SCENE("ARM_2_CHASE_THE_BIKE");
						Local_324[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 102:
						if (!iLocal_2248)
						{
							func_407("ARM2_STOP_TRACK", 1, "");
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_2_CHASE_THE_BIKE"))
							{
								AUDIO::STOP_AUDIO_SCENE("ARM_2_CHASE_THE_BIKE");
							}
							Local_324[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 103:
						if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_1070[2 /*14*/], 242628503) == 7)
							{
								func_121();
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1130.321f, -1589.826f, 3.3891f, 2f, 20000, 0.25f, 0, 39f);
								TASK::TASK_CLIMB(0, 1);
								func_120(Local_1070[2 /*14*/], 0);
							}
						}
						break;
					
					case 104:
						if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
						{
							if (!PED::IS_PED_IN_GROUP(Local_1070[2 /*14*/]))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[0 /*2*/], 0))
								{
									TASK::TASK_ENTER_VEHICLE(Local_1070[2 /*14*/], Local_1449[0 /*2*/], -1, 0, 1073741824, 1, 0);
									Local_324[iParam0 /*10*/].f_3 = 1;
								}
							}
						}
						break;
					
					case 105:
						if (MISC::GET_GAME_TIMER() > Local_324[iParam0 /*10*/].f_7)
						{
							if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
							{
								TASK::TASK_LOOK_AT_ENTITY(Local_1070[2 /*14*/], PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
								Local_324[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 2500;
							}
						}
						break;
					
					case 106:
						Var61 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						if (Var61.x > -77f && Var61.f_1 > -1107.376f)
						{
							switch (Local_324[iParam0 /*10*/].f_6)
							{
								case 0:
									STREAMING::REQUEST_MODEL(joaat("prop_employee_month_02"));
									Local_324[iParam0 /*10*/].f_6++;
									break;
								
								case 1:
									if (STREAMING::HAS_MODEL_LOADED(joaat("prop_employee_month_02")))
									{
										iLocal_1057 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-29.13f, -1102.377f, 27.26f, 0.5f, joaat("prop_employee_month_01"), 1, 0, 1);
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_1057))
										{
											if (ENTITY::IS_ENTITY_VISIBLE(iLocal_1057))
											{
												ENTITY::SET_ENTITY_VISIBLE(iLocal_1057, 0);
												iLocal_1058 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_employee_month_02"), ENTITY::GET_ENTITY_COORDS(iLocal_1057, 1), 1, 1, 0);
												ENTITY::SET_ENTITY_ROTATION(iLocal_1058, 0f, 0f, -20f, 2, 1);
												Local_324[iParam0 /*10*/].f_6++;
											}
										}
									}
									break;
							}
						}
						else
						{
							switch (Local_324[iParam0 /*10*/].f_6)
							{
								case 1:
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_employee_month_02"));
									Local_324[iParam0 /*10*/].f_6 = 0;
									break;
								
								case 2:
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_1058))
									{
										OBJECT::DELETE_OBJECT(&iLocal_1058);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_employee_month_02"));
									}
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_1057))
									{
										ENTITY::SET_ENTITY_VISIBLE(iLocal_1057, 1);
										ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_1057);
									}
									Local_324[iParam0 /*10*/].f_6 = 0;
									break;
								}
						}
						break;
					
					case 107:
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
						PLAYER::SET_MAX_WANTED_LEVEL(6);
						Local_324[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 108:
						if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
						{
							if (PED::IS_PED_IN_GROUP(Local_1070[2 /*14*/]))
							{
								PED::REMOVE_PED_FROM_GROUP(Local_1070[2 /*14*/]);
								PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(Local_1070[2 /*14*/], 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1070[2 /*14*/], 1);
								Local_324[iParam0 /*10*/].f_3 = 1;
							}
						}
						break;
					
					case 109:
						switch (Local_324[iParam0 /*10*/].f_6)
						{
							case 0:
								if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(Local_1070[2 /*14*/], 0))
									{
										iVar64 = PED::GET_VEHICLE_PED_IS_USING(Local_1070[2 /*14*/]);
										if (PED::IS_PED_SITTING_IN_VEHICLE(Local_1070[2 /*14*/], iVar64))
										{
											if (GlobalFunc_2234(Local_1070[2 /*14*/], iVar64) == 0)
											{
												if (VEHICLE::IS_VEHICLE_SEAT_FREE(iVar64, -1))
												{
													Local_324[iParam0 /*10*/].f_6++;
													Local_324[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 1000;
												}
											}
										}
									}
								}
								break;
							
							case 1:
								if (MISC::GET_GAME_TIMER() > Local_324[iParam0 /*10*/].f_7)
								{
									iVar65 = PED::GET_VEHICLE_PED_IS_USING(Local_1070[2 /*14*/]);
									if (VEHICLE::IS_VEHICLE_SEAT_FREE(iVar65, -1) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
									{
										if ((!VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar65)) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar65))) && ENTITY::GET_ENTITY_MODEL(iVar65) != joaat("bus"))
										{
											if (VEHICLE::CAN_SHUFFLE_SEAT(iVar65, 0))
											{
												TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Local_1070[2 /*14*/], iVar65);
												Local_324[iParam0 /*10*/].f_3 = 1;
											}
											else
											{
												TASK::TASK_ENTER_VEHICLE(Local_1070[2 /*14*/], iVar65, 20000, -1, 1073741824, 1, 0);
												Local_324[iParam0 /*10*/].f_3 = 1;
											}
										}
										else if (!ENTITY::IS_ENTITY_IN_AIR(iVar65))
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(Local_1070[2 /*14*/], 0, 0);
											Local_324[iParam0 /*10*/].f_3 = 1;
										}
									}
								}
								break;
						}
						break;
					
					case 110:
						if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
						{
							switch (Local_324[iParam0 /*10*/].f_6)
							{
								case 0:
									if (func_283(144))
									{
										if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_1070[2 /*14*/]))
										{
											iVar66 = PED::GET_VEHICLE_PED_IS_IN(Local_1070[2 /*14*/], 0);
											Local_1449[8 /*2*/] = iVar66;
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar66, 0))
											{
												if (GlobalFunc_2234(Local_1070[2 /*14*/], iVar66) == -1)
												{
													TASK::TASK_VEHICLE_DRIVE_WANDER(Local_1070[2 /*14*/], iVar66, 10f, 786619);
													Local_324[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 5000;
													Local_324[iParam0 /*10*/].f_6++;
												}
											}
										}
									}
									break;
								
								case 1:
									if (MISC::GET_GAME_TIMER() > Local_324[iParam0 /*10*/].f_7)
									{
										if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_1070[2 /*14*/]))
										{
											iVar67 = PED::GET_VEHICLE_PED_IS_IN(Local_1070[2 /*14*/], 0);
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar67, 0))
											{
												if (GlobalFunc_2234(Local_1070[2 /*14*/], iVar67) == -1)
												{
													if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
													{
														func_121();
														TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(0, iVar67, -230.4853f, -888.2496f, 28.985f, 20f, 786484, 5f);
														TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(0, iVar67, -472.5658f, -1092.59f, 25.8562f, 20f, 786484, 5f);
														func_120(Local_1070[2 /*14*/], 1);
														Local_324[iParam0 /*10*/].f_6 = 3;
													}
													else
													{
														func_121();
														TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(0, iVar67, -230.4853f, -888.2496f, 28.985f, 12f, 786603, 5f);
														TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(0, iVar67, -472.5658f, -1092.59f, 25.8562f, 12f, 786603, 5f);
														func_120(Local_1070[2 /*14*/], 1);
														Local_324[iParam0 /*10*/].f_6++;
													}
												}
											}
										}
									}
									break;
								
								case 2:
									if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_1070[2 /*14*/]))
									{
										iVar68 = PED::GET_VEHICLE_PED_IS_IN(Local_1070[2 /*14*/], 0);
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar68, 0))
										{
											if (GlobalFunc_2234(Local_1070[2 /*14*/], iVar68) == -1)
											{
												if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
												{
													func_121();
													TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(0, iVar68, -230.4853f, -888.2496f, 28.985f, 20f, 786468, 5f);
													TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(0, iVar68, -472.5658f, -1092.59f, 25.8562f, 20f, 786468, 5f);
													func_120(Local_1070[2 /*14*/], 1);
													Local_324[iParam0 /*10*/].f_6 = 3;
												}
											}
										}
									}
									break;
								}
						}
						break;
					
					case 113:
						if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_1070[2 /*14*/], -828834893) == 7)
							{
								if (!ENTITY::IS_ENTITY_IN_AIR(Local_1070[2 /*14*/]))
								{
									TASK::TASK_LEAVE_ANY_VEHICLE(Local_1070[2 /*14*/], 0, 0);
								}
							}
						}
						break;
					
					case 116:
						Local_324[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 114:
						if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
						{
							iVar69 = func_358();
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar69, 0))
							{
								func_125(152, 1);
								VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iVar69, 0);
								TASK::TASK_ENTER_VEHICLE(Local_1070[2 /*14*/], iVar69, -1, -1, 2f, 9, 0);
								func_123(2, 110, 0);
								Local_1449[8 /*2*/] = iVar69;
							}
							else if ((TASK::GET_SCRIPT_TASK_STATUS(Local_1070[2 /*14*/], 1435919172) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_1070[2 /*14*/], 1435919172) != 0) && TASK::GET_SCRIPT_TASK_STATUS(Local_1070[2 /*14*/], 1435919172) != 2)
							{
								TASK::TASK_WANDER_STANDARD(Local_1070[2 /*14*/], 1193033728, 0);
								PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_1070[2 /*14*/], 2f);
							}
						}
						break;
					
					case 115:
						if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
						{
							switch (Local_324[iParam0 /*10*/].f_6)
							{
								case 0:
									if (PED::IS_PED_IN_COMBAT(Local_1070[2 /*14*/], 0))
									{
										Local_324[iParam0 /*10*/].f_6++;
										Local_324[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 5000;
									}
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_1070[2 /*14*/], -1794415470) == 1)
									{
										if (MISC::GET_GAME_TIMER() > Local_324[iParam0 /*10*/].f_8)
										{
											Local_324[iParam0 /*10*/].f_8 = MISC::GET_GAME_TIMER() + 5000;
											iVar70 = func_358();
											if (iVar70 != PED::GET_VEHICLE_PED_IS_ENTERING(Local_1070[2 /*14*/]))
											{
												TASK::CLEAR_PED_TASKS(Local_1070[2 /*14*/]);
											}
										}
									}
									break;
								
								case 1:
									TASK::CLEAR_PED_TASKS(Local_1070[2 /*14*/]);
									Local_324[iParam0 /*10*/].f_6 = 0;
									break;
								}
						}
						break;
					
					case 117:
						switch (Local_324[iParam0 /*10*/].f_6)
						{
							case 0:
								if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -19.0794f, -1452.704f, 29.524f, 1) < (100f + 100f))
								{
									STREAMING::REQUEST_ANIM_DICT("MISSARMENIAN2LeadInOutMCS_6");
									Local_324[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -19.0794f, -1452.704f, 29.524f, 1) < 100f && !GlobalFunc_2233())
								{
									CUTSCENE::REQUEST_CUTSCENE("Armenian_2_mcs_6", 8);
									func_535(10);
									Local_324[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 2:
								if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
								{
									func_161("Franklin", PLAYER::PLAYER_PED_ID(), 0, 2);
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 0, 0, 0, 0);
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 1, 0, 0, 0);
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 2, 2, 0, 0);
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 3, 2, 0, 0);
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 4, 3, 0, 0);
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 5, 0, 0, 0);
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 6, 1, 0, 0);
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 7, 0, 0, 0);
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 8, 0, 0, 0);
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 9, 0, 0, 0);
									Local_324[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 3:
								if (Local_324[iParam0 /*10*/].f_8 == 0)
								{
									GlobalFunc_200(&Local_1476, 1);
									func_272(1, PLAYER::PLAYER_PED_ID(), "Franklin");
									Local_324[iParam0 /*10*/].f_8 = 1;
								}
								else if (Local_324[iParam0 /*10*/].f_8 == 1)
								{
									if (GlobalFunc_10691(&Local_1476, "AR2AUD", "AR2_MCS6_LI", 7, 0, 0, 0, 0))
									{
										Local_324[iParam0 /*10*/].f_8 = 2;
									}
								}
								if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -19.0794f, -1452.704f, 29.524f, 1) > (100f + 100f) || GlobalFunc_2233())
								{
									CUTSCENE::REMOVE_CUTSCENE();
									Local_324[iParam0 /*10*/].f_6 = 1;
								}
								break;
						}
						break;
					
					case 118:
						switch (Local_324[iParam0 /*10*/].f_6)
						{
							case 0:
								if (iLocal_2224 < 0)
								{
									iLocal_2224 = MISC::GET_GAME_TIMER();
								}
								if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_1070[2 /*14*/]) && ((PED::IS_PED_IN_ANY_VEHICLE(Local_1070[2 /*14*/], 0) || MISC::GET_GAME_TIMER() >= iLocal_2224 + 15000) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -4.03f, -1401.22f, 28.28f, 200f, 200f, 200f, 0, 0, 0)))
									{
										MISC::CLEAR_AREA_OF_VEHICLES(-17.2737f, -1401.285f, 28.3354f, 5f, 0, 0, 0, 0, 0);
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[0 /*2*/], 0))
										{
											if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1449[0 /*2*/], 0))
											{
												if (GlobalFunc_6795(Local_1449[0 /*2*/], 145, 0) && ENTITY::GET_ENTITY_MODEL(Local_1449[0 /*2*/]) == GlobalFunc_4931(1, 1))
												{
													ENTITY::SET_ENTITY_COORDS(Local_1449[0 /*2*/], -17.347f, -1401.371f, 28.3343f, 1, 0, 0, 1);
													ENTITY::SET_ENTITY_HEADING(Local_1449[0 /*2*/], 270f);
													func_332(Local_1449[0 /*2*/], -17.347f, -1401.371f, 28.3343f, 270f, 24, 0);
													ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1449[0 /*2*/], 1);
													ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_1449[0 /*2*/], 1);
													VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1449[0 /*2*/], 1);
												}
												else if (PED::IS_PED_IN_ANY_VEHICLE(Local_1070[2 /*14*/], 0))
												{
													iVar71 = PED::GET_VEHICLE_PED_IS_IN(Local_1070[2 /*14*/], 0);
													if (iVar71 == Local_1449[0 /*2*/])
													{
														if (!VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(Local_1449[0 /*2*/])) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(Local_1449[0 /*2*/])))
														{
															ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1449[0 /*2*/], 1, 0);
															ENTITY::SET_ENTITY_COORDS(Local_1449[0 /*2*/], -17.347f, -1401.371f, 28.3343f, 1, 0, 0, 1);
															ENTITY::SET_ENTITY_HEADING(Local_1449[0 /*2*/], 270f);
															ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1449[0 /*2*/], 1);
															ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_1449[0 /*2*/], 1);
														}
														VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1449[0 /*2*/], 1);
														func_332(Local_1449[0 /*2*/], 0f, 0f, 0f, 0f, 24, 0);
													}
													else
													{
														if (!VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(Local_1449[0 /*2*/])) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(Local_1449[0 /*2*/])))
														{
															ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1449[0 /*2*/], 1, 0);
														}
														func_332(Local_1449[0 /*2*/], 0f, 0f, 0f, 0f, 24, 0);
														if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar71, 0))
														{
															ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar71, 1, 1);
															ENTITY::SET_ENTITY_COORDS(iVar71, -17.347f, -1401.371f, 28.3343f, 1, 0, 0, 1);
															ENTITY::SET_ENTITY_HEADING(iVar71, 270f);
															ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iVar71, 1);
															ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar71, 1);
															VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iVar71, 1);
														}
													}
												}
											}
										}
										ENTITY::SET_ENTITY_COORDS(Local_1070[2 /*14*/], -4.03f, -1401.22f, 28.28f, 1, 0, 0, 1);
										ENTITY::SET_ENTITY_HEADING(Local_1070[2 /*14*/], 77.9221f);
										func_331(0);
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_1070[2 /*14*/]);
										func_410(1, 109, 1, 0);
										func_410(2, 110, 1, 0);
										func_410(3, 112, 1, 0);
										func_410(4, 113, 1, 0);
										func_410(5, 114, 1, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1070[2 /*14*/], 1);
										func_125(140, 1);
										PED::ADD_SCENARIO_BLOCKING_AREA(Vector(28.5742f, -1391.944f, 25.3192f) - Vector(20f, 40f, 40f), Vector(28.5742f, -1391.944f, 25.3192f) + Vector(20f, 40f, 40f), 0, 1, 1, 1);
										Local_324[iParam0 /*10*/].f_6++;
									}
								}
								break;
							
							case 1:
								GlobalFunc_9805(-9.370698f, -1402.745f, 26.9317f, -9.507262f, -1386.303f, 32.58361f, 9.9375f, -17.384f, -1406.261f, 28.3184f, 0f, 6f, 20f, 10f, 1, 1, 1, 0, 0);
								STREAMING::REQUEST_MODEL(joaat("prop_npc_phone"));
								Local_324[iParam0 /*10*/].f_6++;
								break;
							
							case 2:
								if (STREAMING::HAS_MODEL_LOADED(joaat("prop_npc_phone")))
								{
									if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
									{
										iLocal_1952 = OBJECT::CREATE_OBJECT(joaat("prop_npc_phone"), -4.7755f, -1402.027f, 28.2746f, 1, 1, 0);
										ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_1952, Local_1070[2 /*14*/], PED::GET_PED_BONE_INDEX(Local_1070[2 /*14*/], 60309), Local_1067, Local_1067, 0, 0, 0, 0, 2, 1);
										TASK::TASK_PLAY_ANIM(Local_1070[2 /*14*/], "missarmenian2", "lamar_texting", 8f, -8f, -1, 262145, 0, 0, 0, 0);
									}
									Local_324[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 3:
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_1070[2 /*14*/], -2017877118) == 7 && TASK::GET_SCRIPT_TASK_STATUS(Local_1070[2 /*14*/], 242628503) == 7)
								{
									if (GlobalFunc_713(Local_1070[2 /*14*/], -4.03f, -1401.22f, 28.28f, 0) <= 0.5f)
									{
										TASK::TASK_PLAY_ANIM(Local_1070[2 /*14*/], "missarmenian2", "lamar_texting", 8f, -8f, -1, 1, 0, 0, 0, 0);
									}
								}
								if (GlobalFunc_713(Local_1070[2 /*14*/], -4.03f, -1401.22f, 28.28f, 0) > 0.5f)
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_1070[2 /*14*/], 242628503) == 7)
									{
										func_121();
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -4.03f, -1401.22f, 28.28f, 1f, 20000, 0.25f, 0, 40000f);
										TASK::TASK_ACHIEVE_HEADING(0, 77.9221f, 0);
										func_120(Local_1070[2 /*14*/], 0);
									}
								}
								break;
						}
						break;
					
					case 119:
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[4 /*2*/], 0))
						{
							Local_324[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 120:
						switch (Local_324[iParam0 /*10*/].f_6)
						{
							case 0:
								if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) != 4)
								{
									CAM::SET_GAMEPLAY_COORD_HINT(ENTITY::GET_ENTITY_COORDS(Local_1070[2 /*14*/], 1), -1, 5000, 2000, 0);
									CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.51f);
									CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(0.4f);
									CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(-0.925f);
									CAM::SET_GAMEPLAY_HINT_FOV(30f);
									Local_324[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
								{
									if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
									{
										CAM::STOP_GAMEPLAY_HINT(0);
										Local_324[iParam0 /*10*/].f_3 = 1;
									}
								}
								else
								{
									Local_324[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					
					case 121:
						switch (Local_324[iParam0 /*10*/].f_6)
						{
							case 0:
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
								if (GlobalFunc_530(Local_1449[4 /*2*/], 4f, 2, 1056964608, 0, 1))
								{
									if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
									{
										Local_324[iParam0 /*10*/].f_3 = 1;
									}
									else if (STREAMING::HAS_ANIM_DICT_LOADED("MISSARMENIAN2LeadInOutMCS_6"))
									{
										func_121();
										TASK::TASK_LOOK_AT_ENTITY(0, Local_1070[2 /*14*/], 12000, 0, 2);
										TASK::TASK_PLAY_ANIM(0, "MISSARMENIAN2LeadInOutMCS_6", "_leadin_fra", 8f, -8f, -1, 2, 0, 0, 0, 0);
										func_120(PLAYER::PLAYER_PED_ID(), 0);
										Local_324[iParam0 /*10*/].f_6 = 2;
									}
									else
									{
										STREAMING::REQUEST_ANIM_DICT("MISSARMENIAN2LeadInOutMCS_6");
										Local_324[iParam0 /*10*/].f_6++;
									}
								}
								break;
							
							case 1:
								if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
								{
									Local_324[iParam0 /*10*/].f_3 = 1;
								}
								else if (STREAMING::HAS_ANIM_DICT_LOADED("MISSARMENIAN2LeadInOutMCS_6"))
								{
									if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
									{
										Local_324[iParam0 /*10*/].f_3 = 1;
									}
									else
									{
										func_121();
										TASK::TASK_LOOK_AT_ENTITY(0, Local_1070[2 /*14*/], 12000, 0, 2);
										TASK::TASK_PLAY_ANIM(0, "MISSARMENIAN2LeadInOutMCS_6", "_leadin_fra", 8f, -8f, -1, 2, 0, 0, 0, 0);
										func_120(PLAYER::PLAYER_PED_ID(), 0);
										Local_324[iParam0 /*10*/].f_6++;
									}
								}
								break;
							
							case 2:
								GlobalFunc_2207();
								Local_324[iParam0 /*10*/].f_6++;
								break;
							
							case 3:
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2LeadInOutMCS_6", "_leadin_fra", 3))
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2LeadInOutMCS_6", "_leadin_fra") == 1f)
									{
										Local_324[iParam0 /*10*/].f_3 = 1;
									}
								}
								else
								{
									Local_324[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
				}
				if (Local_324[iParam0 /*10*/].f_6 == 99)
				{
					Local_324[iParam0 /*10*/].f_3 = 1;
					Local_324[iParam0 /*10*/].f_6 = 0;
					Local_324[iParam0 /*10*/].f_1 = 0;
				}
			}
		}
	}
}



void func_331(bool bParam0)//Position - 0x3B9FD
{
	if (!PED::IS_PED_DEAD_OR_DYING(Local_1070[2 /*14*/], 1))
	{
		PED::SET_PED_CAN_BE_TARGETTED(Local_1070[2 /*14*/], 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1070[2 /*14*/], PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[2 /*14*/], 8, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[2 /*14*/], 29, 1);
		PED::SET_COMBAT_FLOAT(Local_1070[2 /*14*/], 12, 3f);
		PED::SET_PED_COMBAT_RANGE(Local_1070[2 /*14*/], 2);
		PED::SET_PED_HEARING_RANGE(Local_1070[2 /*14*/], 50f);
		PED::SET_PED_SEEING_RANGE(Local_1070[2 /*14*/], 50f);
		PED::SET_PED_MAX_HEALTH(Local_1070[2 /*14*/], 500);
		ENTITY::SET_ENTITY_HEALTH(Local_1070[2 /*14*/], 500);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_1070[2 /*14*/], 0);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_1070[2 /*14*/], 17);
		PED::SET_PED_CONFIG_FLAG(Local_1070[2 /*14*/], 188, 1);
		PED::SET_PED_CONFIG_FLAG(Local_1070[2 /*14*/], 182, 1);
		PED::SET_PED_RESET_FLAG(Local_1070[2 /*14*/], 64, 1);
		GlobalFunc_2232(Local_1070[2 /*14*/], 1);
		if (iLocal_1066 <= 9)
		{
			func_146(5, 10, 0);
		}
		PED::SET_PED_ACCURACY(Local_1070[2 /*14*/], 15);
		if (bParam0)
		{
			if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
			{
				while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_1070[2 /*14*/]))
				{
					func_19(1, 0);
					if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
					{
					}
				}
				if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
				{
					PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_1070[2 /*14*/]);
					PED::SET_PED_COMPONENT_VARIATION(Local_1070[2 /*14*/], 0, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_1070[2 /*14*/], 1, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_1070[2 /*14*/], 2, 2, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_1070[2 /*14*/], 3, 2, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_1070[2 /*14*/], 4, 3, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_1070[2 /*14*/], 5, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_1070[2 /*14*/], 6, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_1070[2 /*14*/], 7, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_1070[2 /*14*/], 8, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_1070[2 /*14*/], 9, 0, 0, 0);
				}
			}
		}
		PED::SET_PED_CONFIG_FLAG(Local_1070[2 /*14*/], 118, 0);
		PED::SET_PED_CONFIG_FLAG(Local_1070[2 /*14*/], 32, 0);
		PED::SET_PED_CONFIG_FLAG(Local_1070[2 /*14*/], 185, 1);
		PED::SET_PED_TARGET_LOSS_RESPONSE(Local_1070[2 /*14*/], 1);
		PED::SET_PED_CONFIG_FLAG(Local_1070[2 /*14*/], 118, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[2 /*14*/], 26, 1);
		PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(Local_1070[2 /*14*/], 0);
		ENTITY::SET_ENTITY_PROOFS(Local_1070[2 /*14*/], 0, 1, 0, 0, 0, 0, 0, 0);
		PED::_0x733C87D4CE22BEA2(Local_1070[2 /*14*/]);
		PED::SET_PED_CAN_BE_TARGETTED(Local_1070[2 /*14*/], 0);
	}
}

void func_332(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)//Position - 0x3BC5D
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
		GlobalFunc_8319(iParam5);
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
		GlobalFunc_8387(iParam5, Var0, Param1, fParam4, GlobalFunc_99(iParam0));
		func_333(iParam5, iParam0, 0);
	}
}

void func_333(int iParam0, int iParam1, int iParam2)//Position - 0x3BD88
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!GlobalFunc_6682(&(Global_67138.f_555[0 /*21*/]), iParam0))
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
						func_334(iVar0, 145);
					}
				}
				Global_68044 = iParam1;
				Global_68045 = iParam0;
				Global_68046 = iParam2;
			}
		}
	}
}

void func_334(int iParam0, int iParam1)//Position - 0x3BEA5
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!GlobalFunc_7625(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
					{
						Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42 = 0;
						Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4800[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1 = (iVar1 + 1);
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4808[iVar1 /*54*/].f_42)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4808[iVar1 /*54*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4808[iVar1 /*54*/].f_1)))
				{
					Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4808[iVar1 /*54*/].f_42 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4798 = iParam1;
	Global_68043 = iParam0;
	Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4796 = 1;
	GlobalFunc_4932(iParam0, &(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4742));
}
























int func_358()//Position - 0x3E237
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	iVar2 = PED::GET_PED_NEARBY_VEHICLES(Local_1070[2 /*14*/], &uLocal_1994);
	fVar4 = 1000f;
	iVar3 = 0;
	while (iVar3 <= (iVar2 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_1994[iVar3]))
		{
			if ((VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1994[iVar3], 0) && !ENTITY::IS_ENTITY_UPSIDEDOWN(uLocal_1994[iVar3])) && !FIRE::IS_ENTITY_ON_FIRE(uLocal_1994[iVar3]))
			{
				if ((((!VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(uLocal_1994[iVar3])) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(uLocal_1994[iVar3]))) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_1994[iVar3], 1)) && !func_360(ENTITY::GET_ENTITY_MODEL(uLocal_1994[iVar3]))) && uLocal_1994[iVar3] != Local_1449[4 /*2*/])
				{
					fVar5 = GlobalFunc_156(Local_1070[2 /*14*/], uLocal_1994[iVar3], 1);
					if (GlobalFunc_367(uLocal_1994[iVar3], 0, 0, 0))
					{
						if (fVar5 < fVar4)
						{
							fVar4 = fVar5;
							iVar0 = uLocal_1994[iVar3];
						}
					}
					else if (fVar5 < fVar4)
					{
						fVar4 = fVar5;
						iVar1 = uLocal_1994[iVar3];
					}
				}
			}
		}
		iVar3++;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
	{
		return iVar0;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0))
	{
		return iVar1;
	}
	return 0;
}


int func_360(int iParam0)//Position - 0x3E437
{
	if (((((((((((((((iParam0 == joaat("police") || iParam0 == joaat("policeold1")) || iParam0 == joaat("policeold2")) || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("polmav")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("riot")) || iParam0 == joaat("sheriff")) || iParam0 == joaat("sheriff2")) || iParam0 == joaat("pranger")) || iParam0 == joaat("policet"))
	{
		return 1;
	}
	return 0;
}



int func_363(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)//Position - 0x3E5A0
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
						GlobalFunc_4970(iParam0);
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
						GlobalFunc_4970(iParam0);
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
						GlobalFunc_4970(iParam0);
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
					func_364(iParam1, iParam0, 0, 1);
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

void func_364(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x3F386
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
			func_334(*iParam1, iParam0);
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
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_31 = GlobalFunc_192(*iParam1);
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













void func_377(int iParam0)//Position - 0x41DBF
{
	switch (Local_324[iParam0 /*10*/].f_6)
	{
		case 0:
			if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1449[6 /*2*/]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1449[6 /*2*/]) > 1600f) || !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1449[6 /*2*/]))
			{
				TASK::SET_PED_PATH_AVOID_FIRE(Local_1070[2 /*14*/], 0);
				func_410(14, 59, 1, 0);
				func_410(20, 60, 1, 0);
				func_410(30, 61, 1, 0);
				if (!func_285(17, 58))
				{
					func_121();
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -1094.154f, -1640.431f, 3.3985f, -1112.198f, -1614.296f, 5.2204f, 1f, 0, 1056964608, 1082130432, 1, 0, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, -1094.154f, -1640.431f, 3.3985f, 3000, 0, 0);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -1095.362f, -1640.829f, 3.3985f, -1090.002f, -1625.818f, 5.072f, 1f, 0, 1056964608, 1082130432, 1, 0, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, -1090.002f, -1625.818f, 5.072f, 4000, 0, 0);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -1095.362f, -1640.829f, 3.3985f, -1090.002f, -1625.818f, 5.072f, 1f, 0, 1056964608, 1082130432, 1, 0, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, -1090.002f, -1625.818f, 5.072f, 3000, 0, 0);
					func_120(Local_1070[2 /*14*/], 1);
				}
				Local_324[iParam0 /*10*/].f_6++;
			}
			break;
		
		case 1:
			if (func_285(17, 58))
			{
				Local_324[iParam0 /*10*/].f_6 = 3;
				WEAPON::SET_CURRENT_PED_WEAPON(Local_1070[2 /*14*/], joaat("weapon_unarmed"), 1);
				func_121();
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "arm2_fire", 0, 0, -1);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1114.053f, -1612.679f, 3.2403f, 2f, 20000, 0.25f, 1, 40000f);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_1070[2 /*14*/], 2f);
				func_120(Local_1070[2 /*14*/], 0);
				Local_324[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 4800;
				Local_324[iParam0 /*10*/].f_8 = 0;
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
			{
				if (Local_324[iParam0 /*10*/].f_8 == 0)
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_1070[2 /*14*/], 2f);
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1070[2 /*14*/]))
					{
						if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_1070[2 /*14*/]) > 8)
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_1070[2 /*14*/], -1114.053f, -1612.679f, 3.2403f, 2f, 20000, 0.25f, 1, 40000f);
							PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_1070[2 /*14*/], 2f);
							Local_324[iParam0 /*10*/].f_8 = 1;
						}
					}
				}
				else
				{
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_1070[2 /*14*/], 2f);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_1070[2 /*14*/], 2f);
				}
			}
			if (MISC::GET_GAME_TIMER() > Local_324[iParam0 /*10*/].f_7 && STREAMING::HAS_MODEL_LOADED(joaat("bagger")))
			{
				if (func_363(&(Local_1449[4 /*2*/]), 1, -1126.017f, -1575.357f, 3.3486f, 301f, 1, 2))
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_1449[4 /*2*/], false);
					func_378(8, iLocal_2219, Local_1067, 0f, Local_1449[4 /*2*/], -1, 0, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_1070[8 /*14*/], 0, 1, 2, 0);
					PED::SET_PED_MONEY(Local_1070[8 /*14*/], 80);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1070[8 /*14*/], 1);
					Local_324[iParam0 /*10*/].f_7 = PED::CREATE_SYNCHRONIZED_SCENE(-1126.46f, -1584.626f, 3.437f, 0f, 0f, -139.68f, 2);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(Local_324[iParam0 /*10*/].f_7, 1);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_1070[8 /*14*/], Local_324[iParam0 /*10*/].f_7, "missarmenian2_mcs_5", "_rider", 1000f, -1000f, 0, 0, 1148846080, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_1449[4 /*2*/], Local_324[iParam0 /*10*/].f_7, "_bike", "missarmenian2_mcs_5", 1000f, 1090519040, 0, 1148846080);
					ENTITY::SET_ENTITY_HEALTH(Local_1070[8 /*14*/], 1000);
					PED::SET_PED_CAN_BE_TARGETTED(Local_1070[8 /*14*/], 0);
					Local_324[iParam0 /*10*/].f_6++;
				}
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[4 /*2*/], 0))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_1070[2 /*14*/], 2f);
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1449[4 /*2*/], -1129.596f, -1588.691f, -0.139362f, -1141.044f, -1572.93f, 7.562129f, 9.25f, 0, 1, 0))
				{
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_1070[2 /*14*/], 0);
					func_407("ARM2_FIGHT_END", 0, "ARM2_CHASE_START");
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_2_SHOOTOUT"))
					{
						AUDIO::STOP_AUDIO_SCENE("ARM_2_SHOOTOUT");
					}
					if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
					{
						PED::CLEAR_PED_ALTERNATE_WALK_ANIM(Local_1070[2 /*14*/], -1056964608);
						PED::RESET_PED_MOVEMENT_CLIPSET(Local_1070[2 /*14*/], 1048576000);
					}
					RECORDING::_0x293220DA1B46CEBC(2f, 7.5f, 4);
					func_121();
					TASK::TASK_PAUSE(0, 500);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000, 1028, 2);
					TASK::TASK_PLAY_ANIM(0, "reaction@points@", "loop_0", 4f, -1.5f, 3500, 49168, 0, 0, 0, 0);
					TASK::TASK_PAUSE(0, 100);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1130.321f, -1589.826f, 3.3891f, 2f, -1, 0.25f, 0, 39f);
					TASK::TASK_CLIMB(0, 1);
					func_120(Local_1070[2 /*14*/], 0);
					Local_324[iParam0 /*10*/].f_8 = 0;
					Local_324[iParam0 /*10*/].f_6++;
				}
			}
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1070[2 /*14*/], "reaction@points@", "loop_0", 3))
				{
					if (ENTITY::GET_ENTITY_HEADING(Local_1070[2 /*14*/]) < 20f || ENTITY::GET_ENTITY_HEADING(Local_1070[2 /*14*/]) > 40f)
					{
						TASK::STOP_ANIM_TASK(Local_1070[2 /*14*/], "reaction@points@", "loop_0", -16f);
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[4 /*2*/], 0))
			{
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_324[iParam0 /*10*/].f_7) || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_324[iParam0 /*10*/].f_7) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_324[iParam0 /*10*/].f_7) >= 0.811f))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_324[iParam0 /*10*/].f_7))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_1449[4 /*2*/], 1000f, 1);
					}
					if (!PED::IS_PED_INJURED(Local_1070[8 /*14*/]))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_1070[8 /*14*/]);
						PED::SET_PED_INTO_VEHICLE(Local_1070[8 /*14*/], Local_1449[4 /*2*/], -1);
						ENTITY::SET_ENTITY_HEADING(Local_1449[4 /*2*/], 302f);
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_1449[4 /*2*/], 10f);
					}
					Local_324[iParam0 /*10*/].f_3 = 1;
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[4 /*2*/], 0))
			{
				if (!PED::IS_PED_INJURED(Local_1070[8 /*14*/]))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_1070[8 /*14*/], 1))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_1070[8 /*14*/], 1785177548) != 1)
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_324[iParam0 /*10*/].f_7))
							{
								ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_1449[4 /*2*/], 2f, 1);
								Local_324[iParam0 /*10*/].f_3 = 1;
							}
						}
					}
				}
				else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_324[iParam0 /*10*/].f_7))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_1449[4 /*2*/], 2f, 1);
					Local_324[iParam0 /*10*/].f_3 = 1;
				}
			}
			if (Local_324[iParam0 /*10*/].f_8 == 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_324[iParam0 /*10*/].f_7))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_324[iParam0 /*10*/].f_7) >= fLocal_290)
					{
						AUDIO::PLAY_SOUND_FROM_COORD(-1, "Biker_Ride_Off", -1130.702f, -1584.584f, 4.1201f, "ARM_2_REPO_SOUNDS", 0, 0, 0);
						Local_324[iParam0 /*10*/].f_8 = 1;
					}
				}
			}
			break;
	}
	if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
	{
		FIRE::STOP_ENTITY_FIRE(Local_1070[2 /*14*/]);
		ENTITY::SET_ENTITY_PROOFS(Local_1070[2 /*14*/], 0, 1, 0, 0, 0, 0, 0, 0);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		FIRE::STOP_ENTITY_FIRE(PLAYER::PLAYER_PED_ID());
	}
}

void func_378(int iParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11)//Position - 0x4258E
{
	struct<3> Var0;
	
	if (iParam0 == -1 || iParam0 >= 27)
	{
	}
	if (iParam0 != 0)
	{
		if (PED::IS_PED_INJURED(Local_1070[iParam0 /*14*/]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1070[iParam0 /*14*/]));
		}
		else if (Local_1070[iParam0 /*14*/] == PLAYER::PLAYER_PED_ID())
		{
			if (ENTITY::GET_ENTITY_MODEL(Local_1070[iParam0 /*14*/]) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
			{
				Local_1070[iParam0 /*14*/] = 0;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(Local_1070[iParam0 /*14*/]) != iParam1 && iParam1 != 0)
		{
			PED::DELETE_PED(&(Local_1070[iParam0 /*14*/]));
			Local_1070[iParam0 /*14*/] = 0;
		}
	}
	iLocal_1470 = iLocal_1470;
	if (iParam6 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1070[iParam0 /*14*/]) && iParam0 != 0)
		{
			if (iParam1 == 0)
			{
				if (PED::CAN_CREATE_RANDOM_PED(0))
				{
					Local_1070[iParam0 /*14*/] = PED::CREATE_RANDOM_PED(Param2);
					ENTITY::SET_ENTITY_HEADING(Local_1070[iParam0 /*14*/], fParam5);
				}
			}
			else
			{
				Local_1070[iParam0 /*14*/] = PED::CREATE_PED(26, iParam1, Param2, fParam5, 1, 1);
				if (iParam11 == 1)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1070[iParam0 /*14*/], Param2, 0, 0, 1);
				}
			}
		}
		else if (!GlobalFunc_105(Param2))
		{
			if (iParam0 == 0)
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param2, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam5);
			}
			else if (!PED::IS_PED_INJURED(Local_1070[iParam0 /*14*/]))
			{
				if (iParam11 == 1)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1070[iParam0 /*14*/], Param2, 0, 0, 1);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(Local_1070[iParam0 /*14*/], Param2, 1, 0, 0, 1);
				}
				ENTITY::SET_ENTITY_HEADING(Local_1070[iParam0 /*14*/], fParam5);
			}
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Local_1070[iParam0 /*14*/]) && iParam0 != 0)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam6, 0))
		{
			Local_1070[iParam0 /*14*/] = PED::CREATE_PED_INSIDE_VEHICLE(iParam6, 26, iParam1, iParam7, 1, 1);
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(Local_1070[iParam0 /*14*/]))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(Local_1070[iParam0 /*14*/], 1) };
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam6, 0))
		{
			if (iParam0 == 0)
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam6, iParam7);
				}
			}
			else if (!PED::IS_PED_INJURED(Local_1070[iParam0 /*14*/]))
			{
				PED::SET_PED_INTO_VEHICLE(Local_1070[iParam0 /*14*/], iParam6, iParam7);
			}
		}
	}
	if (Local_1070[iParam0 /*14*/] != PLAYER::PLAYER_PED_ID())
	{
		if (!PED::IS_PED_INJURED(Local_1070[iParam0 /*14*/]))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1070[iParam0 /*14*/], 1);
			if (bParam10)
			{
				PED::SET_PED_RANDOM_COMPONENT_VARIATION(Local_1070[iParam0 /*14*/], 0);
			}
			else
			{
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_1070[iParam0 /*14*/]);
			}
		}
	}
	if (iParam8 != 0)
	{
		if (!PED::IS_PED_INJURED(Local_1070[iParam0 /*14*/]))
		{
			switch (iParam8)
			{
				case 1:
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1070[iParam0 /*14*/], iLocal_1472);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[iParam0 /*14*/], 13, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[iParam0 /*14*/], 12, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[iParam0 /*14*/], 14, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[iParam0 /*14*/], 3, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[iParam0 /*14*/], 0, 1);
					if (iParam9 != 0)
					{
						if (!WEAPON::HAS_PED_GOT_WEAPON(Local_1070[iParam0 /*14*/], iParam9, 0))
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_1070[iParam0 /*14*/], iParam9, 500, 1, 1);
						}
					}
					else if (!WEAPON::HAS_PED_GOT_WEAPON(Local_1070[iParam0 /*14*/], joaat("weapon_pistol"), 0))
					{
						WEAPON::GIVE_WEAPON_TO_PED(Local_1070[iParam0 /*14*/], joaat("weapon_pistol"), 500, 1, 1);
					}
					if (!HUD::DOES_BLIP_EXIST(Local_1070[iParam0 /*14*/].f_1))
					{
						Local_1070[iParam0 /*14*/].f_1 = GlobalFunc_7056(Local_1070[iParam0 /*14*/], 1, 0);
					}
					break;
				
				case 3:
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1070[iParam0 /*14*/], uLocal_1471);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[iParam0 /*14*/], 13, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[iParam0 /*14*/], 12, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[iParam0 /*14*/], 14, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[iParam0 /*14*/], 3, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[iParam0 /*14*/], 0, 1);
					PED::SET_PED_CAN_BE_TARGETTED(Local_1070[iParam0 /*14*/], 0);
					if (iParam9 != joaat("weapon_unarmed"))
					{
						if (!WEAPON::HAS_PED_GOT_WEAPON(Local_1070[iParam0 /*14*/], iParam9, 0))
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_1070[iParam0 /*14*/], iParam9, 500, 1, 1);
						}
					}
					else if (!WEAPON::HAS_PED_GOT_WEAPON(Local_1070[iParam0 /*14*/], joaat("weapon_pistol"), 0))
					{
						WEAPON::GIVE_WEAPON_TO_PED(Local_1070[iParam0 /*14*/], joaat("weapon_pistol"), 500, 1, 1);
					}
					break;
				
				case 5:
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1070[iParam0 /*14*/], iLocal_1472);
					if (iParam9 != 0)
					{
						if (!WEAPON::HAS_PED_GOT_WEAPON(Local_1070[iParam0 /*14*/], iParam9, 0))
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_1070[iParam0 /*14*/], iParam9, 500, 1, 1);
						}
					}
					else if (!WEAPON::HAS_PED_GOT_WEAPON(Local_1070[iParam0 /*14*/], joaat("weapon_pumpshotgun"), 0) && !WEAPON::HAS_PED_GOT_WEAPON(Local_1070[iParam0 /*14*/], joaat("weapon_pistol"), 0))
					{
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) == 0)
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_1070[iParam0 /*14*/], joaat("weapon_pumpshotgun"), 500, 1, 1);
						}
						else
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_1070[iParam0 /*14*/], joaat("weapon_pistol"), 500, 1, 1);
						}
					}
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[iParam0 /*14*/], 13, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[iParam0 /*14*/], 12, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[iParam0 /*14*/], 14, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[iParam0 /*14*/], 3, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[iParam0 /*14*/], 0, 1);
					if (!HUD::DOES_BLIP_EXIST(Local_1070[iParam0 /*14*/].f_1))
					{
						Local_1070[iParam0 /*14*/].f_1 = GlobalFunc_7056(Local_1070[iParam0 /*14*/], 1, 0);
					}
					break;
				
				case 6:
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1070[iParam0 /*14*/], 1);
					if (iParam9 != 0 && iParam9 != joaat("weapon_unarmed"))
					{
						if (!WEAPON::HAS_PED_GOT_WEAPON(Local_1070[iParam0 /*14*/], iParam9, 0))
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_1070[iParam0 /*14*/], iParam9, 500, 1, 1);
						}
					}
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1070[iParam0 /*14*/], uLocal_1473);
					if (!HUD::DOES_BLIP_EXIST(Local_1070[iParam0 /*14*/].f_1))
					{
						Local_1070[iParam0 /*14*/].f_1 = GlobalFunc_7056(Local_1070[iParam0 /*14*/], 1, 0);
					}
					break;
				
				case 8:
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1070[iParam0 /*14*/], 1);
					if (iParam9 != 0 && iParam9 != joaat("weapon_unarmed"))
					{
						if (!WEAPON::HAS_PED_GOT_WEAPON(Local_1070[iParam0 /*14*/], iParam9, 0))
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_1070[iParam0 /*14*/], iParam9, 500, 1, 1);
						}
					}
					PED::SET_PED_CAN_BE_TARGETTED(Local_1070[iParam0 /*14*/], 1);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1070[iParam0 /*14*/], iLocal_1473);
					break;
				
				case 4:
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1070[iParam0 /*14*/], 1);
					if (iParam9 != 0 && iParam9 != joaat("weapon_unarmed"))
					{
						if (!WEAPON::HAS_PED_GOT_WEAPON(Local_1070[iParam0 /*14*/], iParam9, 0))
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_1070[iParam0 /*14*/], iParam9, 500, 1, 1);
						}
					}
					PED::SET_PED_CAN_BE_TARGETTED(Local_1070[iParam0 /*14*/], 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1070[iParam0 /*14*/], iLocal_1473);
					break;
				
				case 2:
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1070[iParam0 /*14*/], 1);
					if (iParam9 != 0 && iParam9 != joaat("weapon_unarmed"))
					{
						if (!WEAPON::HAS_PED_GOT_WEAPON(Local_1070[iParam0 /*14*/], iParam9, 0))
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_1070[iParam0 /*14*/], iParam9, 500, 1, 1);
						}
					}
					PED::SET_PED_CAN_BE_TARGETTED(Local_1070[iParam0 /*14*/], 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[iParam0 /*14*/], 17, 1);
					break;
				
				case 7:
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1070[iParam0 /*14*/], uLocal_1474);
					break;
				}
			}
	}
	if (iLocal_1475 == 1)
	{
		if (!PED::IS_PED_INJURED(Local_1070[iParam0 /*14*/]))
		{
			if (ENTITY::GET_ENTITY_MODEL(Local_1070[iParam0 /*14*/]) == GlobalFunc_4917(1))
			{
				func_379(Local_1070[iParam0 /*14*/], 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			if (ENTITY::GET_ENTITY_MODEL(Local_1070[iParam0 /*14*/]) == GlobalFunc_4917(2))
			{
				func_379(Local_1070[iParam0 /*14*/], 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			if (ENTITY::GET_ENTITY_MODEL(Local_1070[iParam0 /*14*/]) == GlobalFunc_4917(0))
			{
				func_379(Local_1070[iParam0 /*14*/], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
}

int func_379(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x42D3D
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
		Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		GlobalFunc_8308(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = GlobalFunc_7054(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = GlobalFunc_7054(iParam0, 9);
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
							GlobalFunc_25(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8308(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_385(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_379(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						GlobalFunc_8308(iVar0);
						if (Global_68105 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_385(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_379(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, iVar0, func_308(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_384(iParam0, iVar10, &iVar4, 1))
							{
								func_379(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_379(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
					func_379(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_379(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_379(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_379(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_379(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
			GlobalFunc_25(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8308(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_385(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_379(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		GlobalFunc_25(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		GlobalFunc_8308(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_385(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_379(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = func_385(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_379(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
		if (func_384(iParam0, iVar10, &iVar4, 0))
		{
			func_379(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (func_380(iParam0, iVar10, &iVar4))
		{
			func_379(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}

int func_380(int iParam0, int iParam1, int iParam2)//Position - 0x4352A
{
	int iVar0;
	
	iVar0 = GlobalFunc_19(iParam1);
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_311(iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = -99;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}




int func_384(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x43748
{
	int iVar0;
	
	iVar0 = GlobalFunc_19(iParam1);
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_311(iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_59;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 = -99;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_385(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x437DE
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
	
	iVar0 = -99;
	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				iVar1 = GlobalFunc_7054(iParam0, 1);
				iVar0 = GlobalFunc_24(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = GlobalFunc_7054(iParam0, 2);
				iVar0 = GlobalFunc_24(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		GlobalFunc_4911(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		GlobalFunc_4912(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (GlobalFunc_23(iParam1, iParam3, &iVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("player_zero"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (iParam3)
								{
									case 36:
										iVar0 = 17;
										break;
									
									case 37:
										iVar0 = 17;
										break;
									
									case 38:
										iVar0 = 18;
										break;
									
									case 39:
										iVar0 = 18;
										break;
									
									case 40:
										iVar0 = 19;
										break;
									
									case 41:
										iVar0 = 19;
										break;
									
									case 42:
										iVar0 = 20;
										break;
									
									case 43:
										iVar0 = 20;
										break;
								}
								break;
							
							case 11:
								if (iParam3 >= 2 && iParam3 <= 7)
								{
									if (!GlobalFunc_7935(iParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!GlobalFunc_7935(iParam0, 3, 135, 150))
									{
										iVar0 = GlobalFunc_11029(iParam1, 3, 135, 150);
									}
								}
								break;
						}
						break;
					
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 63:
										iVar0 = 4;
										break;
									
									case 61:
										iVar0 = 3;
										break;
									
									case 16:
										iVar0 = 1;
										break;
									
									case 114:
										iVar0 = 15;
										break;
									
									case 115:
										iVar0 = 17;
										break;
									
									case 116:
										iVar0 = 16;
										break;
									
									case 117:
										iVar0 = 18;
										break;
									
									case 118:
										iVar0 = 20;
										break;
									
									case 119:
										iVar0 = 19;
										break;
									
									case 125:
										iVar0 = 21;
										break;
									
									case 120:
										iVar0 = 22;
										break;
									
									case 124:
										iVar0 = 23;
										break;
									
									case 126:
										iVar0 = 24;
										break;
									
									case 121:
										iVar0 = 25;
										break;
									
									case 127:
										iVar0 = 26;
										break;
									
									case 128:
										iVar0 = 27;
										break;
									
									case 85:
										iVar0 = 6;
										break;
									
									case 77:
										iVar0 = 7;
										break;
									
									case 78:
										iVar0 = 8;
										break;
									
									case joaat("mpsv_lp0_31"):
										iVar0 = 9;
										break;
									
									case 80:
										iVar0 = 10;
										break;
									
									case 81:
										iVar0 = 11;
										break;
									
									case 82:
										iVar0 = 12;
										break;
									
									case 83:
										iVar0 = 13;
										break;
									
									case 84:
										iVar0 = 14;
										break;
									
									case 21:
										iVar0 = 31;
										break;
									
									case 22:
										iVar0 = 30;
										break;
									
									case 23:
										iVar0 = 29;
										break;
									
									case 24:
										iVar0 = 28;
										break;
									
									case 25:
										iVar0 = 33;
										break;
									
									case 26:
										iVar0 = 35;
										break;
									
									case 27:
										iVar0 = 34;
										break;
									
									case 28:
										iVar0 = 32;
										break;
									
									default:
										if (iParam3 >= 17 && iParam3 <= 20)
										{
										}
										else
										{
											iVar0 = 0;
										}
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if ((iParam3 >= 44 && iParam3 <= 59) || (iParam3 >= 135 && iParam3 <= 150))
							{
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 10)
						{
							if (iParam3 >= 36 && iParam3 <= 43)
							{
								iVar0 = 0;
							}
						}
						break;
				}
				break;
			
			case joaat("player_one"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 17:
										iVar0 = 2;
										break;
									
									case 90:
										iVar0 = 1;
										break;
									
									case 268:
										iVar0 = 3;
										break;
									
									case 269:
										iVar0 = 5;
										break;
									
									case 270:
										iVar0 = 4;
										break;
									
									case 271:
										iVar0 = 6;
										break;
									
									case 272:
										iVar0 = 8;
										break;
									
									case 273:
										iVar0 = 7;
										break;
									
									case 279:
										iVar0 = 9;
										break;
									
									case 274:
										iVar0 = 10;
										break;
									
									case 278:
										iVar0 = 11;
										break;
									
									case 280:
										iVar0 = 12;
										break;
									
									case 275:
										iVar0 = 13;
										break;
									
									case 281:
										iVar0 = 14;
										break;
									
									case 282:
										iVar0 = 15;
										break;
									
									case 107:
										iVar0 = 16;
										break;
									
									case 108:
										iVar0 = 17;
										break;
									
									case 109:
										iVar0 = 18;
										break;
									
									case 110:
										iVar0 = 19;
										break;
									
									case 111:
										iVar0 = 20;
										break;
									
									case 112:
										iVar0 = 21;
										break;
									
									case 113:
										iVar0 = 22;
										break;
									
									case 114:
										iVar0 = 23;
										break;
									
									case 115:
										iVar0 = 24;
										break;
									
									case 116:
										iVar0 = 25;
										break;
									
									case 117:
										iVar0 = 52;
										break;
									
									case 118:
										iVar0 = 27;
										break;
									
									case 119:
										iVar0 = 28;
										break;
									
									case 120:
										iVar0 = 29;
										break;
									
									case 121:
										iVar0 = 30;
										break;
									
									case 122:
										iVar0 = 31;
										break;
									
									case 296:
										iVar0 = 32;
										break;
									
									case 297:
										iVar0 = 33;
										break;
									
									case 298:
										iVar0 = 34;
										break;
									
									case 299:
										iVar0 = 35;
										break;
									
									case 300:
										iVar0 = 36;
										break;
									
									case 301:
										iVar0 = 37;
										break;
									
									case 302:
										iVar0 = 38;
										break;
									
									case 309:
										iVar0 = 39;
										break;
									
									case 310:
										iVar0 = 40;
										break;
									
									case 311:
										iVar0 = 41;
										break;
									
									case 312:
										iVar0 = 42;
										break;
									
									case 313:
										iVar0 = 43;
										break;
									
									case 314:
										iVar0 = 44;
										break;
									
									case 315:
										iVar0 = 45;
										break;
									
									case 316:
										iVar0 = 46;
										break;
									
									case 317:
										iVar0 = 51;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 3:
						switch (iParam2)
						{
							case 11:
								if (iParam3 >= 47 && iParam3 <= 62)
								{
									if (!GlobalFunc_7935(iParam0, 3, 209, 222))
									{
										iVar0 = GlobalFunc_11029(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!GlobalFunc_7935(iParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = GlobalFunc_11029(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = GlobalFunc_11029(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = GlobalFunc_11029(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = GlobalFunc_11029(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!GlobalFunc_7935(iParam0, 3, 176, 191) && !GlobalFunc_7935(iParam0, 3, 227, 242))
									{
										iVar0 = GlobalFunc_11029(iParam1, 3, 176, 191);
									}
								}
								break;
						}
						break;
					
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								iVar5 = iParam3;
								iVar4 = GlobalFunc_7054(iParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = GlobalFunc_7054(iParam0, 11);
								iVar5 = GlobalFunc_11156(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = GlobalFunc_7054(iParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!GlobalFunc_22(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6))
								{
									if (iVar6 != -99)
									{
										iVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 27 && iVar3 <= 42) || (iVar3 >= 43 && iVar3 <= 58)) || (iVar3 >= 59 && iVar3 <= 74))
							{
								iVar0 = 26;
							}
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if (iParam3 >= 209 && iParam3 <= 222)
							{
							}
							else if (((iParam3 >= 176 && iParam3 <= 191) || (iParam3 >= 227 && iParam3 <= 242)) || (iParam3 >= 243 && iParam3 <= 258))
							{
								iVar7 = GlobalFunc_7054(iParam0, 8);
								iVar8 = GlobalFunc_7054(iParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = GlobalFunc_11156(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = GlobalFunc_11156(iParam1, iParam3, iVar8, 1);
								}
							}
							else if (iParam3 >= 41 && iParam3 <= 56)
							{
								iVar0 = 45;
							}
							else if (iParam3 >= 223 && iParam3 <= 226)
							{
								iVar0 = 44;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 8)
						{
							if (((iParam3 >= 27 && iParam3 <= 42) || (iParam3 >= 43 && iParam3 <= 58)) || (iParam3 >= 59 && iParam3 <= 74))
							{
								iVar9 = GlobalFunc_7054(iParam0, 11);
								iVar0 = GlobalFunc_11156(iParam1, -99, iVar9, 0);
							}
						}
						break;
				}
				break;
			
			case joaat("player_two"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 50:
										iVar0 = 3;
										break;
									
									case 81:
										iVar0 = 5;
										break;
									
									case 82:
										iVar0 = 6;
										break;
									
									case 83:
										iVar0 = 7;
										break;
									
									case 84:
										iVar0 = 10;
										break;
									
									case 85:
										iVar0 = 9;
										break;
									
									case 86:
										iVar0 = 8;
										break;
									
									case 92:
										iVar0 = 22;
										break;
									
									case 87:
										iVar0 = 23;
										break;
									
									case 91:
										iVar0 = 24;
										break;
									
									case 93:
										iVar0 = 25;
										break;
									
									case 88:
										iVar0 = 26;
										break;
									
									case 94:
										iVar0 = 27;
										break;
									
									case 120:
										iVar0 = 11;
										break;
									
									case 121:
										iVar0 = 13;
										break;
									
									case 122:
										iVar0 = 14;
										break;
									
									case 124:
										iVar0 = 12;
										break;
									
									case 126:
										iVar0 = 18;
										break;
									
									case 128:
										iVar0 = 17;
										break;
									
									case 130:
										iVar0 = 19;
										break;
									
									case 131:
										iVar0 = 16;
										break;
									
									case 134:
										iVar0 = 15;
										break;
									
									case 135:
										iVar0 = 20;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
						}
						break;
				}
				break;
			}
	}
	return iVar0;
}












int func_397(bool bParam0)//Position - 0x44E21
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	struct<3> Var4;
	float fVar7;
	var uVar8;
	
	bLocal_1065 = false;
	iVar0 = 0;
	fVar2 = 0f;
	if (iLocal_2067 == 0)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[6 /*2*/], 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1449[6 /*2*/]))
			{
				fVar7 = ((VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1449[6 /*2*/]) - 4255f) / 2300f);
				if (fVar7 < 0f)
				{
					fVar7 = 0f;
				}
				if (fVar7 > 1f)
				{
					fVar7 = 1f;
				}
				fVar7 = (fVar7 * 2f);
			}
		}
		else
		{
			fVar7 = 2f;
		}
	}
	if (fVar7 >= 1.9f || iLocal_2067 == 1)
	{
		fVar7 = 2f;
		iLocal_2067 = 1;
	}
	switch (iLocal_2067)
	{
		case 0:
		case 1:
			while (fVar2 <= 2f)
			{
				if (fVar2 < fVar7)
				{
					iVar0 = SYSTEM::FLOOR(fVar2);
					func_398(fVar2, Local_2068[GlobalFunc_254(iVar0, 0, 2) /*7*/], Local_2068[GlobalFunc_254(iVar0 + 1, 0, 2) /*7*/], &Var4);
					if (MISC::IS_BULLET_IN_AREA(Var4, 0.4f, 1))
					{
						iLocal_2066 = SYSTEM::FLOOR((fVar2 * 15f));
						iVar1 = 0;
						while (iVar1 <= 30)
						{
							Local_2090[iVar1 /*3*/].f_2 = (MISC::GET_GAME_TIMER() + (100 * MISC::ABSI((iVar1 - iLocal_2066))));
							iVar1++;
						}
						iLocal_2067 = 2;
						*bParam0 = 1;
						uVar8 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FROM_COORD(-1, "ARM_2_Repo_Ignite_Petrol", -1099.07f, -1636.112f, 3.7352f, 0, 0, 0, 0);
						AUDIO::SET_VARIABLE_ON_SOUND(uVar8, "TargetPan", GlobalFunc_1695(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1105.971f, -1628.793f, 3.8508f, 0));
						fVar2 = 5f;
					}
					fVar2 = (fVar2 + 0.1f);
				}
				else
				{
					fVar2 = 5f;
				}
			}
			break;
		
		case 2:
			*bParam0 = 1;
			iVar3 = 1;
			iVar1 = 0;
			while (iVar1 <= 30)
			{
				if (Local_2090[iVar1 /*3*/].f_1 == 0)
				{
					if (MISC::GET_GAME_TIMER() > Local_2090[iVar1 /*3*/].f_2 && (MISC::GET_GAME_TIMER() - Local_2090[iVar1 /*3*/].f_2) < 1000)
					{
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar1) / 15f));
						func_398((SYSTEM::TO_FLOAT(iVar1) / 15f), Local_2068[GlobalFunc_254(iVar0, 0, 2) /*7*/], Local_2068[GlobalFunc_254(iVar0 + 1, 0, 2) /*7*/], &Var4);
						if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_2090[iVar1 /*3*/]))
						{
							uLocal_2184[iVar1] = FIRE::START_SCRIPT_FIRE(Var4, 0, 1);
						}
						GRAPHICS::FADE_DECALS_IN_RANGE(Var4, 1f, 1f);
						Local_2090[iVar1 /*3*/].f_1 = 1;
					}
				}
				if (Local_2090[iVar1 /*3*/].f_1 == 1)
				{
					iVar3 = 0;
					iLocal_2065 = (MISC::GET_GAME_TIMER() - Local_2090[iVar1 /*3*/].f_2);
					if (iLocal_2065 > 2000)
					{
						FIRE::REMOVE_SCRIPT_FIRE(uLocal_2184[iVar1]);
						Local_2090[iVar1 /*3*/] = 0;
						Local_2090[iVar1 /*3*/].f_1 = 0;
					}
				}
				iVar1++;
			}
			if (iVar3 == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_398(float fParam0, struct<5> Param1, var uParam6, var uParam7, struct<5> Param8, var uParam13, var uParam14, var uParam15)//Position - 0x450D9
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	float fVar15;
	
	fVar15 = (fParam0 - SYSTEM::TO_FLOAT(SYSTEM::FLOOR(fParam0)));
	if (!GlobalFunc_100(Param1.f_4, Param8.f_4))
	{
		Var0 = { Param1.f_4 };
		Var3 = { Param1.f_4 + Param1.f_1 };
		Var6 = { Param8.f_4 - Param8.f_1 };
		Var9 = { Param8.f_4 };
		Var12.x = (((((((1f - fVar15) * (1f - fVar15)) * (1f - fVar15)) * Var0.x) + (((3f * ((1f - fVar15) * (1f - fVar15))) * fVar15) * Var3.x)) + (((3f * (1f - fVar15)) * (fVar15 * fVar15)) * Var6.x)) + (((fVar15 * fVar15) * fVar15) * Var9.x));
		Var12.f_1 = (((((((1f - fVar15) * (1f - fVar15)) * (1f - fVar15)) * Var0.f_1) + (((3f * ((1f - fVar15) * (1f - fVar15))) * fVar15) * Var3.f_1)) + (((3f * (1f - fVar15)) * (fVar15 * fVar15)) * Var6.f_1)) + (((fVar15 * fVar15) * fVar15) * Var9.f_1));
		Var12.f_2 = (((((((1f - fVar15) * (1f - fVar15)) * (1f - fVar15)) * Var0.f_2) + (((3f * ((1f - fVar15) * (1f - fVar15))) * fVar15) * Var3.f_2)) + (((3f * (1f - fVar15)) * (fVar15 * fVar15)) * Var6.f_2)) + (((fVar15 * fVar15) * fVar15) * Var9.f_2));
		*uParam15 = { Var12 };
	}
	else
	{
		*uParam15 = { Param1.f_4 };
	}
}


void func_400(var uParam0, float fParam1, struct<3> Param2, struct<3> Param5)//Position - 0x4524B
{
	*uParam0 = fParam1;
	uParam0->f_4 = { Param2 };
	uParam0->f_1 = { Param5 };
}


int func_402(int iParam0, struct<3> Param1, int iParam4, float fParam5)//Position - 0x452DD
{
	var uVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Param1, 5f, iParam0, 0))
	{
		if (fParam5 != -2f)
		{
			OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(iParam0, Param1, iParam4, fParam5, 0);
			OBJECT::GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(iParam0, Param1, &iVar3, &fVar2);
			if (iVar3 == iParam4 && fVar2 == fParam5)
			{
				return 1;
			}
		}
		else
		{
			OBJECT::GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(iParam0, Param1, &uVar0, &fVar1);
			OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(iParam0, Param1, iParam4, fVar1, 0);
			return 1;
		}
	}
	return 0;
}

int func_403(int iParam0, int iParam1)//Position - 0x45357
{
	if (Local_324[iParam0 /*10*/] == iParam1)
	{
		if (Local_324[iParam0 /*10*/].f_1 == 1 && Local_324[iParam0 /*10*/].f_2 == 1)
		{
			if (Local_324[iParam0 /*10*/].f_3 == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_404(var uParam0, var uParam1)//Position - 0x4539B
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
	{
		switch (iLocal_2268)
		{
			case 0:
				if (!func_293(&iVar0, uParam0, 0, 5, 0, 0))
				{
					*uParam0 = 0;
				}
				else
				{
					switch (iVar0)
					{
						case 0:
							TASK::TASK_PLAY_ANIM(Local_1070[2 /*14*/], "missarmenian2lamar_idles", "idle_look_behind_left", 4f, -4f, -1, 262144, 0, 0, 0, 0);
							iLocal_2268 = 1;
							break;
						
						case 1:
							TASK::TASK_PLAY_ANIM(Local_1070[2 /*14*/], "missarmenian2lamar_idles", "idle_look_behind_right", 4f, -4f, -1, 262144, 0, 0, 0, 0);
							iLocal_2268 = 1;
							break;
						
						case 2:
							switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
							{
								case 0:
									TASK::TASK_PLAY_ANIM(Local_1070[2 /*14*/], "missarmenian2lamar_idles", "idle_look_left", 4f, -4f, -1, 262144, 0, 0, 0, 0);
									iLocal_2268 = 1;
									break;
								
								case 1:
									TASK::TASK_PLAY_ANIM(Local_1070[2 /*14*/], "missarmenian2lamar_idles", "idle_look_right", 4f, -4f, -1, 262144, 0, 0, 0, 0);
									iLocal_2268 = 1;
									break;
							}
							break;
						
						case 3:
							TASK::TASK_PLAY_ANIM(Local_1070[2 /*14*/], "missarmenian2lamar_idles", "idle_a", 4f, -4f, -1, 262144, 0, 0, 0, 0);
							iLocal_2268 = 1;
							break;
						
						case 4:
							TASK::TASK_PLAY_ANIM(Local_1070[2 /*14*/], "missarmenian2lamar_idles", "idle_b", 4f, -4f, -1, 262144, 0, 0, 0, 0);
							iLocal_2268 = 1;
							break;
						
						case 5:
							TASK::TASK_PLAY_ANIM(Local_1070[2 /*14*/], "missarmenian2lamar_idles", "idle_c", 4f, -4f, -1, 262144, 0, 0, 0, 0);
							iLocal_2268 = 1;
							break;
						
						case 6:
							TASK::TASK_PLAY_ANIM(Local_1070[2 /*14*/], "missarmenian2lamar_idles", "idle_d", 4f, -4f, -1, 262144, 0, 0, 0, 0);
							iLocal_2268 = 1;
							break;
						
						case 7:
							TASK::TASK_PLAY_ANIM(Local_1070[2 /*14*/], "missarmenian2lamar_idles", "idle_e", 4f, -4f, -1, 262144, 0, 0, 0, 0);
							iLocal_2268 = 1;
							break;
						
						case 8:
							TASK::TASK_PLAY_ANIM(Local_1070[2 /*14*/], "missarmenian2lamar_idles", "idle_f", 4f, -4f, -1, 262144, 0, 0, 0, 0);
							iLocal_2268 = 1;
							break;
						
						case 9:
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1079.229f, -1659.552f, 1.961159f, -1103.881f, -1626.432f, 10.14866f, 11.75f, 0, 1, 0))
							{
								TASK::TASK_PLAY_ANIM(Local_1070[2 /*14*/], "missarmenian2", "arm2_lamar_idle_02", 4f, -4f, -1, 262144, 0, 0, 0, 0);
								iLocal_2268 = 1;
							}
							else
							{
								iLocal_2268 = 0;
							}
							break;
						
						case 10:
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1079.229f, -1659.552f, 1.961159f, -1103.881f, -1626.432f, 10.14866f, 11.75f, 0, 1, 0))
							{
								TASK::TASK_PLAY_ANIM(Local_1070[2 /*14*/], "missarmenian2", "arm2_lamar_idle_03", 4f, -4f, -1, 262144, 0, 0, 0, 0);
								iLocal_2268 = 1;
							}
							else
							{
								iLocal_2268 = 0;
							}
							break;
						}
				}
				break;
			
			case 1:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1070[2 /*14*/], "missarmenian2lamar_idles", "idle_a", 3))
				{
					*uParam1 = (MISC::GET_GAME_TIMER() + 500 + SYSTEM::FLOOR(ENTITY::GET_ENTITY_ANIM_TOTAL_TIME(Local_1070[2 /*14*/], "missarmenian2lamar_idles", "idle_a")));
					iLocal_2268 = 2;
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1070[2 /*14*/], "missarmenian2lamar_idles", "idle_b", 3))
				{
					*uParam1 = (MISC::GET_GAME_TIMER() + 500 + SYSTEM::FLOOR(ENTITY::GET_ENTITY_ANIM_TOTAL_TIME(Local_1070[2 /*14*/], "missarmenian2lamar_idles", "idle_b")));
					iLocal_2268 = 2;
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1070[2 /*14*/], "missarmenian2lamar_idles", "idle_c", 3))
				{
					*uParam1 = (MISC::GET_GAME_TIMER() + 500 + SYSTEM::FLOOR(ENTITY::GET_ENTITY_ANIM_TOTAL_TIME(Local_1070[2 /*14*/], "missarmenian2lamar_idles", "idle_c")));
					iLocal_2268 = 2;
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1070[2 /*14*/], "missarmenian2lamar_idles", "idle_d", 3))
				{
					*uParam1 = (MISC::GET_GAME_TIMER() + 500 + SYSTEM::FLOOR(ENTITY::GET_ENTITY_ANIM_TOTAL_TIME(Local_1070[2 /*14*/], "missarmenian2lamar_idles", "idle_d")));
					iLocal_2268 = 2;
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1070[2 /*14*/], "missarmenian2lamar_idles", "idle_e", 3))
				{
					*uParam1 = (MISC::GET_GAME_TIMER() + 500 + SYSTEM::FLOOR(ENTITY::GET_ENTITY_ANIM_TOTAL_TIME(Local_1070[2 /*14*/], "missarmenian2lamar_idles", "idle_e")));
					iLocal_2268 = 2;
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1070[2 /*14*/], "missarmenian2lamar_idles", "idle_f", 3))
				{
					*uParam1 = (MISC::GET_GAME_TIMER() + 500 + SYSTEM::FLOOR(ENTITY::GET_ENTITY_ANIM_TOTAL_TIME(Local_1070[2 /*14*/], "missarmenian2lamar_idles", "idle_f")));
					iLocal_2268 = 2;
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1070[2 /*14*/], "missarmenian2lamar_idles", "idle_look_behind_left", 3))
				{
					*uParam1 = (MISC::GET_GAME_TIMER() + 500 + SYSTEM::FLOOR(ENTITY::GET_ENTITY_ANIM_TOTAL_TIME(Local_1070[2 /*14*/], "missarmenian2lamar_idles", "idle_look_behind_left")));
					iLocal_2268 = 2;
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1070[2 /*14*/], "missarmenian2lamar_idles", "idle_look_behind_right", 3))
				{
					*uParam1 = (MISC::GET_GAME_TIMER() + 500 + SYSTEM::FLOOR(ENTITY::GET_ENTITY_ANIM_TOTAL_TIME(Local_1070[2 /*14*/], "missarmenian2lamar_idles", "idle_look_behind_right")));
					iLocal_2268 = 2;
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1070[2 /*14*/], "missarmenian2lamar_idles", "idle_look_left", 3))
				{
					*uParam1 = (MISC::GET_GAME_TIMER() + 500 + SYSTEM::FLOOR(ENTITY::GET_ENTITY_ANIM_TOTAL_TIME(Local_1070[2 /*14*/], "missarmenian2lamar_idles", "idle_look_left")));
					iLocal_2268 = 2;
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1070[2 /*14*/], "missarmenian2lamar_idles", "idle_look_right", 3))
				{
					*uParam1 = (MISC::GET_GAME_TIMER() + 500 + SYSTEM::FLOOR(ENTITY::GET_ENTITY_ANIM_TOTAL_TIME(Local_1070[2 /*14*/], "missarmenian2lamar_idles", "idle_look_right")));
					iLocal_2268 = 2;
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1070[2 /*14*/], "missarmenian2", "arm2_lamar_idle_02", 3))
				{
					*uParam1 = (MISC::GET_GAME_TIMER() + 500 + SYSTEM::FLOOR(ENTITY::GET_ENTITY_ANIM_TOTAL_TIME(Local_1070[2 /*14*/], "missarmenian2", "arm2_lamar_idle_02")));
					iLocal_2268 = 2;
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1070[2 /*14*/], "missarmenian2", "arm2_lamar_idle_03", 3))
				{
					*uParam1 = (MISC::GET_GAME_TIMER() + 500 + SYSTEM::FLOOR(ENTITY::GET_ENTITY_ANIM_TOTAL_TIME(Local_1070[2 /*14*/], "missarmenian2", "arm2_lamar_idle_03")));
					iLocal_2268 = 2;
				}
				break;
			
			case 2:
				if (MISC::GET_GAME_TIMER() > *uParam1)
				{
					iLocal_2268 = 0;
				}
				break;
			}
	}
}


int func_406(int iParam0, int iParam1)//Position - 0x459E4
{
	if (Local_139[iParam0 /*6*/] == iParam1)
	{
		return Local_139[iParam0 /*6*/].f_3;
	}
	return 0;
}

void func_407(char* sParam0, int iParam1, char* sParam2)//Position - 0x45A03
{
	iLocal_2246 = 1;
	iLocal_2247 = iParam1;
	sLocal_2249 = sParam0;
	sLocal_2250 = sParam2;
}

int func_408(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10)//Position - 0x45A1E
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	
	Var0 = { Param4 - Param1 };
	Var3 = { Param1 - Param10 };
	fVar6 = GlobalFunc_168(Param7, Var0);
	fVar7 = -func_409(Param7, Var3);
	if (MISC::ABSF(fVar6) < 1E-08f)
	{
		return 0;
	}
	fVar8 = (fVar7 / fVar6);
	*uParam0 = { Param1 + Vector(fVar8, fVar8, fVar8) * Var0 };
	if (fVar8 < 0f || fVar8 > 1f)
	{
		return 0;
	}
	return 1;
}


void func_410(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x45ABF
{
	Local_324[iParam0 /*10*/] = iParam1;
	Local_324[iParam0 /*10*/].f_1 = 1;
	Local_324[iParam0 /*10*/].f_3 = iParam2;
	Local_324[iParam0 /*10*/].f_2 = iParam3;
	Local_324[iParam0 /*10*/].f_6 = 0;
	Local_324[iParam0 /*10*/].f_4 = 0;
	Local_324[iParam0 /*10*/].f_7 = 0;
	Local_324[iParam0 /*10*/].f_8 = 0;
	Local_324[iParam0 /*10*/].f_9 = 0f;
}

void func_411(int iParam0, int iParam1)//Position - 0x45B22
{
	if (Local_324[iParam0 /*10*/] == iParam1)
	{
		if (Local_324[iParam0 /*10*/].f_1 == 1)
		{
			Local_324[iParam0 /*10*/].f_3 = 0;
			Local_324[iParam0 /*10*/].f_2 = 0;
			Local_324[iParam0 /*10*/].f_6 = 0;
			Local_324[iParam0 /*10*/].f_7 = 0;
			Local_324[iParam0 /*10*/].f_8 = 0;
			Local_324[iParam0 /*10*/].f_9 = 0f;
			Local_324[iParam0 /*10*/].f_5 = 0;
		}
	}
}


void func_413(int iParam0)//Position - 0x45BD4
{
	iLocal_2272 = iParam0;
	iLocal_2273 = 0;
}






void func_419(int iParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x45D52
{
	func_378(iParam0, iParam1, Param2, fParam5, 0, -1, iParam6, iParam7, bParam8, 0);
}

int func_420(int iParam0)//Position - 0x45D71
{
	if (!iLocal_111 && iLocal_110 == iParam0)
	{
		return 1;
	}
	return 0;
}


void func_422()//Position - 0x45DC2
{
	var uVar0;
	int iVar1;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
		{
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0);
			if (!PED::IS_PED_INJURED(iVar1))
			{
				if (iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						if (!PED::IS_PED_HEADTRACKING_ENTITY(iVar1, PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_LOOK_AT_ENTITY(iVar1, PLAYER::PLAYER_PED_ID(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

int func_423(int iParam0)//Position - 0x45E2E
{
	int iVar0;
	
	iVar0 = iParam0;
	if (Local_49[iVar0 /*3*/].f_2 == 2 || Local_49[iVar0 /*3*/].f_2 == 3)
	{
		switch (iVar0)
		{
			case 0:
				if (STREAMING::HAS_MODEL_LOADED(iLocal_2033))
				{
					return 1;
				}
				break;
			
			case 1:
				if (STREAMING::HAS_MODEL_LOADED(iLocal_2218))
				{
					return 1;
				}
				break;
			
			case 2:
				if ((WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_pistol")) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_microsmg"))) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_pumpshotgun")))
				{
					return 1;
				}
				break;
			
			case 3:
				if (STREAMING::HAS_MODEL_LOADED(iLocal_2217))
				{
					return 1;
				}
				break;
			
			case 4:
				if (STREAMING::HAS_MODEL_LOADED(joaat("bagger")))
				{
					return 1;
				}
				break;
			
			case 5:
				if (STREAMING::HAS_ANIM_DICT_LOADED("MISSARMENIAN2"))
				{
					return 1;
				}
				break;
			
			case 6:
				if (STREAMING::HAS_ANIM_DICT_LOADED("missarmenian2_mcs_5") && STREAMING::HAS_ANIM_DICT_LOADED("reaction@points@"))
				{
					return 1;
				}
				break;
			
			case 7:
				if (STREAMING::HAS_MODEL_LOADED(joaat("bison")))
				{
					return 1;
				}
				break;
			
			case 8:
				if (STREAMING::HAS_MODEL_LOADED(joaat("penumbra")))
				{
					return 1;
				}
				break;
			
			case 9:
				if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, sLocal_45))
				{
					return 1;
				}
				break;
			
			case 10:
				if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(6, sLocal_45) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(11, sLocal_45))
				{
					return 1;
				}
				break;
			
			case 11:
				if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("arm2_15"))
				{
					return 1;
				}
				break;
			
			case 12:
				if (STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_test_01")))
				{
					return 1;
				}
				break;
			
			case 13:
				if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("ARM2"))
				{
					return 1;
				}
				break;
			
			case 14:
				if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("ARM2_FIRE"))
				{
					return 1;
				}
				break;
			
			case 15:
				if (STREAMING::HAS_ANIM_DICT_LOADED("missarmenian2lamar_idles"))
				{
					return 1;
				}
				break;
			
			case 16:
				if (((AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ARM_2_REPO_01", 0) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ARM_2_GAS_EXPLOSION", 0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ARM_2_GARAGE_DOORS", 0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ARM_2_BIKER_DRIVE_OFF", 0))
				{
					return 1;
				}
				break;
			
			case 17:
				if (STREAMING::HAS_MODEL_LOADED(joaat("ig_siemonyetarian")))
				{
					return 1;
				}
				break;
			
			case 18:
				if (STREAMING::HAS_ANIM_DICT_LOADED("missarmenian2lamar_in_cover"))
				{
					return 1;
				}
				break;
			
			case 19:
				if (STREAMING::HAS_MODEL_LOADED(joaat("prop_arm_gate_l")))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}



void func_426(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x46137
{
	struct<3> Var0;
	int iVar3;
	
	if (Local_291[iParam0 /*4*/] != iParam1)
	{
		Local_291[iParam0 /*4*/].f_1 = 0;
		Local_291[iParam0 /*4*/] = iParam1;
	}
	if (!Local_291[iParam0 /*4*/].f_1)
	{
		if (func_278(iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, 1, 0, 1, 0))
		{
			switch (Local_291[iParam0 /*4*/])
			{
				case 1:
					if (HUD::DOES_BLIP_EXIST(uLocal_2028))
					{
						HUD::REMOVE_BLIP(&uLocal_2028);
					}
					switch (Local_291[iParam0 /*4*/].f_2)
					{
						case 0:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[0 /*2*/], 0))
							{
								GlobalFunc_744(&Local_1955, Local_1449[0 /*2*/]);
							}
							Local_291[iParam0 /*4*/].f_2++;
							break;
						
						case 1:
							if (func_496(&Local_1955, -1141.093f, -1576.759f, 3.3048f, Global_18, 1, Local_1070[2 /*14*/], "ARM2_INS02", "ARM2_INS18", 0, 1, 1, -1))
							{
								GlobalFunc_5652(&Local_1955, 1, 0);
								GlobalFunc_629(&Local_1955);
								Local_291[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 2:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[0 /*2*/], 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1449[0 /*2*/], 0))
							{
								if (GlobalFunc_530(Local_1449[0 /*2*/], 4f, 1, 1056964608, 0, 1))
								{
									Local_291[iParam0 /*4*/].f_1 = 1;
								}
							}
							else
							{
								Local_291[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 2:
					if (!HUD::DOES_BLIP_EXIST(uLocal_2028))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_1070[22 /*14*/]))
						{
							GlobalFunc_5652(&Local_1955, 1, 0);
							GlobalFunc_629(&Local_1955);
							if (!GlobalFunc_663("ARM2_INS18", 0, 0))
							{
								GlobalFunc_527("ARM2_INS18", 7500, 1);
							}
							uLocal_2028 = GlobalFunc_7056(Local_1070[2 /*14*/], 0, 0);
						}
					}
					break;
				
				case 5:
					switch (Local_291[iParam0 /*4*/].f_2)
					{
						case 0:
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								Local_291[iParam0 /*4*/].f_2++;
								Local_291[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 10000;
							}
							break;
						
						case 1:
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								if (MISC::GET_GAME_TIMER() > Local_291[iParam0 /*4*/].f_3)
								{
									GlobalFunc_159("ARM2_HLP29", 12000);
									Local_291[iParam0 /*4*/].f_2++;
								}
							}
							break;
						
						case 2:
							if (GlobalFunc_74("ARM2_HLP29"))
							{
								if (PAD::IS_CONTROL_JUST_PRESSED(0, 0))
								{
									HUD::CLEAR_HELP(1);
								}
							}
							else
							{
								Local_291[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 3:
					switch (Local_291[iParam0 /*4*/].f_2)
					{
						case 0:
							GlobalFunc_164("LOSE_WANTED", 7500, 1);
							if (HUD::DOES_BLIP_EXIST(uLocal_2028))
							{
								HUD::REMOVE_BLIP(&uLocal_2028);
							}
							Local_291[iParam0 /*4*/].f_2++;
							break;
						
						case 1:
							if (HUD::DOES_BLIP_EXIST(uLocal_2028))
							{
								HUD::REMOVE_BLIP(&uLocal_2028);
							}
							break;
					}
					break;
				
				case 4:
					switch (Local_291[iParam0 /*4*/].f_2)
					{
						case 0:
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								if (HUD::DOES_BLIP_EXIST(uLocal_2028))
								{
									HUD::REMOVE_BLIP(&uLocal_2028);
								}
								HUD::SET_GPS_MULTI_ROUTE_RENDER(0);
								uLocal_2028 = GlobalFunc_7056(Local_1070[2 /*14*/], 0, 0);
								GlobalFunc_527("ARM2_INS18", 7500, 1);
								Local_291[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 1:
							Var0 = { HUD::GET_BLIP_INFO_ID_COORD(uLocal_2028) };
							if (GlobalFunc_100(Var0, -1141.093f, -1576.759f, 3.3048f))
							{
								if (HUD::DOES_BLIP_EXIST(uLocal_2028))
								{
									HUD::REMOVE_BLIP(&uLocal_2028);
								}
								uLocal_2028 = GlobalFunc_7056(Local_1070[2 /*14*/], 0, 0);
							}
							break;
					}
					break;
				
				case 6:
					switch (Local_291[iParam0 /*4*/].f_2)
					{
						case 0:
							GlobalFunc_164("ARM2_INS03", 3000, 1);
							if (HUD::DOES_BLIP_EXIST(uLocal_2028))
							{
								HUD::REMOVE_BLIP(&uLocal_2028);
							}
							uLocal_2028 = GlobalFunc_7056(Local_1070[2 /*14*/], 0, 0);
							Local_291[iParam0 /*4*/].f_2++;
							break;
						
						case 1:
							if (func_283(55))
							{
								if (GlobalFunc_74("ARM2_INS05"))
								{
									HUD::CLEAR_HELP(1);
									Local_291[iParam0 /*4*/].f_1 = 1;
								}
								else
								{
									Local_291[iParam0 /*4*/].f_1 = 1;
								}
							}
							break;
						
						case 2:
							GlobalFunc_159("ARM2_HLP22", 12000);
							Local_291[iParam0 /*4*/].f_1 = 1;
							break;
					}
					break;
				
				case 7:
					switch (Local_291[iParam0 /*4*/].f_2)
					{
						case 0:
							if (!GlobalFunc_111())
							{
								GlobalFunc_164("ARM2_INS07b", 7500, 1);
								uLocal_2030 = GlobalFunc_5104(-1067.498f, -1665.769f, 3.5431f, 0);
								uLocal_2031 = GlobalFunc_5104(-1064.832f, -1669.313f, 3.5348f, 0);
								uLocal_2032 = GlobalFunc_5104(-1073.839f, -1675.472f, 3.5162f, 0);
								if (HUD::DOES_BLIP_EXIST(uLocal_2028))
								{
									HUD::REMOVE_BLIP(&uLocal_2028);
								}
								if (HUD::DOES_BLIP_EXIST(Local_1070[2 /*14*/].f_1))
								{
									HUD::REMOVE_BLIP(&(Local_1070[2 /*14*/].f_1));
								}
								Local_291[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 2000;
								Local_291[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_291[iParam0 /*4*/].f_3)
							{
								Local_291[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 8:
					if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
					{
						switch (Local_291[iParam0 /*4*/].f_2)
						{
							case 0:
								if ((GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1070[2 /*14*/], 1) > 70f || ((iLocal_1066 == 2 && func_297(14, 32) > 0) && !func_283(73))) || (iLocal_1066 >= 7 && func_283(133)))
								{
									if (!GlobalFunc_111())
									{
										Local_291[iParam0 /*4*/].f_3 = 0;
										if (HUD::DOES_BLIP_EXIST(uLocal_2030))
										{
											MISC::SET_BIT(&(Local_291[iParam0 /*4*/].f_3), 0);
											HUD::REMOVE_BLIP(&uLocal_2030);
										}
										if (HUD::DOES_BLIP_EXIST(uLocal_2031))
										{
											MISC::SET_BIT(&(Local_291[iParam0 /*4*/].f_3), 1);
											HUD::REMOVE_BLIP(&uLocal_2031);
										}
										if (HUD::DOES_BLIP_EXIST(uLocal_2032))
										{
											MISC::SET_BIT(&(Local_291[iParam0 /*4*/].f_3), 2);
											HUD::REMOVE_BLIP(&uLocal_2032);
										}
										if (Local_291[iParam0 /*4*/].f_3 != 0)
										{
											uLocal_2028 = GlobalFunc_7056(Local_1070[2 /*14*/], 0, 0);
										}
										GlobalFunc_527("CMN_LLEAVE", -1, 1);
										Local_291[iParam0 /*4*/].f_2++;
									}
								}
								break;
							
							case 1:
								if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1070[2 /*14*/], 1) < 30f)
								{
									if (((iLocal_1066 >= 2 && iLocal_1066 < 6) && func_297(14, 32) == 0) || (iLocal_1066 >= 7 && !func_283(133)))
									{
										if (MISC::IS_BIT_SET(Local_291[iParam0 /*4*/].f_3, 0))
										{
											if (HUD::DOES_BLIP_EXIST(uLocal_2028))
											{
												HUD::REMOVE_BLIP(&uLocal_2028);
											}
											uLocal_2030 = GlobalFunc_5104(-1067.498f, -1665.769f, 3.5431f, 0);
										}
										if (MISC::IS_BIT_SET(Local_291[iParam0 /*4*/].f_3, 1))
										{
											uLocal_2031 = GlobalFunc_5104(-1064.832f, -1669.313f, 3.5348f, 0);
										}
										if (MISC::IS_BIT_SET(Local_291[iParam0 /*4*/].f_3, 2))
										{
											uLocal_2032 = GlobalFunc_5104(-1073.839f, -1675.472f, 3.5162f, 0);
										}
										HUD::CLEAR_PRINTS();
										Local_291[iParam0 /*4*/].f_2 = 0;
									}
								}
								break;
							}
					}
					break;
				
				case 9:
					switch (Local_291[iParam0 /*4*/].f_2)
					{
						case 0:
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (GlobalFunc_663("ARM2_INS03", 0, 0))
								{
									Local_291[iParam0 /*4*/].f_2++;
								}
								if (func_283(59))
								{
									Local_291[iParam0 /*4*/].f_1 = 1;
								}
							}
							break;
						
						case 1:
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1126.573f, -1581.504f, 2.723826f, -1137.804f, -1589.277f, 6.146455f, 10.625f, 0, 1, 0))
							{
								GlobalFunc_159("ARM2_INS05", 12000);
								Local_291[iParam0 /*4*/].f_2++;
								Local_291[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 2000;
							}
							break;
						
						case 2:
							if (GlobalFunc_74("ARM2_INS05"))
							{
								if (func_283(55) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
								{
									if (MISC::GET_GAME_TIMER() > Local_291[iParam0 /*4*/].f_3)
									{
										HUD::CLEAR_HELP(1);
										Local_291[iParam0 /*4*/].f_1 = 1;
									}
								}
							}
							else
							{
								Local_291[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 10:
					switch (Local_291[iParam0 /*4*/].f_2)
					{
						case 0:
							if (!PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
							{
								if (!GlobalFunc_485(138))
								{
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										GlobalFunc_159("CMN_FPSHELP", 10000);
										Local_291[iParam0 /*4*/].f_2++;
									}
								}
								else
								{
									Local_291[iParam0 /*4*/].f_1 = 1;
								}
							}
							break;
						
						case 1:
							if (GlobalFunc_485(138))
							{
								if (GlobalFunc_74("CMN_FPSHELP"))
								{
									HUD::CLEAR_HELP(1);
								}
								Local_291[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 12:
					HUD::CLEAR_PRINTS();
					GlobalFunc_527("ARM2_INS09", 3000, 1);
					Local_291[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 11:
					switch (Local_291[iParam0 /*4*/].f_2)
					{
						case 0:
							if (!func_283(94))
							{
								if (GlobalFunc_5664("AR2_MCS_4_LO"))
								{
									GlobalFunc_159("ARM2_HLP06", 12000);
									GlobalFunc_527("ARM2_INS08", 7500, 1);
									Local_291[iParam0 /*4*/].f_2++;
								}
							}
							break;
						
						case 1:
							if (GlobalFunc_663("ARM2_INS08", 0, 0))
							{
								if (OBJECT::DOES_PICKUP_EXIST(uLocal_1981))
								{
									if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(uLocal_1981))
									{
										Global_86802 = 1;
										Local_291[iParam0 /*4*/].f_1 = 1;
										HUD::CLEAR_PRINTS();
										if (GlobalFunc_74("ARM2_HLP06"))
										{
											HUD::CLEAR_HELP(1);
										}
									}
								}
							}
							else
							{
								Local_291[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 13:
					if (!func_283(125))
					{
						switch (Local_291[iParam0 /*4*/].f_2)
						{
							case 0:
								Local_291[iParam0 /*4*/].f_2++;
								break;
							
							case 1:
								if (!GlobalFunc_74("PU_QS_HLP"))
								{
									if (MISC::GET_GAME_TIMER() > Local_291[iParam0 /*4*/].f_3)
									{
										HUD::CLEAR_HELP(1);
										GlobalFunc_159("ARM2_HLP07", 12000);
										Local_291[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 1500;
										Local_291[iParam0 /*4*/].f_2++;
									}
								}
								break;
							
							case 2:
								if (GlobalFunc_74("ARM2_HLP07"))
								{
									if (PAD::IS_CONTROL_PRESSED(0, 37))
									{
										Local_291[iParam0 /*4*/].f_2++;
									}
								}
								else
								{
									GlobalFunc_159("ARM2_HLP07b", 12000);
									Local_291[iParam0 /*4*/].f_2++;
								}
								break;
							
							case 3:
								if (MISC::GET_GAME_TIMER() > Local_291[iParam0 /*4*/].f_3)
								{
									HUD::CLEAR_HELP(1);
									GlobalFunc_159("ARM2_HLP07b", 12000);
									Local_291[iParam0 /*4*/].f_2++;
								}
								break;
							
							case 4:
								if (GlobalFunc_74("ARM2_HLP07b"))
								{
									if (PAD::IS_CONTROL_PRESSED(0, 37))
									{
										Local_291[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 3000;
										Local_291[iParam0 /*4*/].f_2++;
									}
								}
								else
								{
									Local_291[iParam0 /*4*/].f_1 = 1;
								}
								break;
							
							case 5:
								if (MISC::GET_GAME_TIMER() > Local_291[iParam0 /*4*/].f_3)
								{
									if (GlobalFunc_74("ARM2_HLP07b"))
									{
										HUD::CLEAR_HELP(1);
									}
									Local_291[iParam0 /*4*/].f_1 = 1;
								}
								break;
						}
					}
					else if (GlobalFunc_74("ARM2_HLP07") || GlobalFunc_74("ARM2_HLP07b"))
					{
						HUD::CLEAR_HELP(1);
						Local_291[iParam0 /*4*/].f_1 = 1;
					}
					break;
				
				case 15:
					switch (Local_291[iParam0 /*4*/].f_2)
					{
						case 0:
							if (GlobalFunc_74("ARM2_HLP08"))
							{
								HUD::CLEAR_HELP(1);
							}
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								GlobalFunc_159("ARM2_HLP14", 12000);
								Local_291[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 1:
							if (GlobalFunc_74("ARM2_HLP14"))
							{
								if (PAD::IS_CONTROL_PRESSED(0, 24) && !PAD::IS_CONTROL_PRESSED(0, 25))
								{
									HUD::CLEAR_HELP(1);
									Local_291[iParam0 /*4*/].f_1 = 1;
								}
							}
							else
							{
								Local_291[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 16:
					switch (Local_291[iParam0 /*4*/].f_2)
					{
						case 0:
							Local_291[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 1500;
							Local_291[iParam0 /*4*/].f_2++;
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_291[iParam0 /*4*/].f_3)
							{
								if (bLocal_1065)
								{
									Local_291[iParam0 /*4*/].f_1 = 1;
								}
								else
								{
									HUD::CLEAR_HELP(1);
									GlobalFunc_159("ARM2_HLP13", 12000);
								}
								Local_291[iParam0 /*4*/].f_2++;
								Local_291[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER();
							}
							else if (bLocal_1065)
							{
								Local_291[iParam0 /*4*/].f_1 = 1;
							}
							break;
						
						case 2:
							if (GlobalFunc_74("ARM2_HLP13"))
							{
								if (bLocal_1065)
								{
									if ((MISC::GET_GAME_TIMER() - Local_291[iParam0 /*4*/].f_3) > 2000)
									{
										HUD::CLEAR_HELP(1);
										Local_291[iParam0 /*4*/].f_1 = 1;
									}
								}
							}
							else
							{
								Local_291[iParam0 /*4*/].f_1 = 1;
							}
							break;
						
						case 3:
							if (GlobalFunc_74("ARM2_HLP13"))
							{
								if ((MISC::GET_GAME_TIMER() - Local_291[iParam0 /*4*/].f_3) > 2000)
								{
									HUD::CLEAR_HELP(1);
									Local_291[iParam0 /*4*/].f_1 = 1;
								}
							}
							else
							{
								Local_291[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 17:
					GlobalFunc_159("ARM2_HLP07b", 12000);
					Local_291[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 19:
					GlobalFunc_164("ARM2_INS12", 5000, 1);
					Local_291[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 20:
					switch (Local_291[iParam0 /*4*/].f_2)
					{
						case 0:
							if (Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.CHASE_HELP_TEXT_DISPLAYED_MI >= 3)
							{
								Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.CHASE_HELP_TEXT_DISPLAYED_MI = 2;
							}
							Local_291[iParam0 /*4*/].f_2++;
							break;
						
						case 1:
							if (func_283(6))
							{
								if (!PED::IS_PED_INJURED(Local_1070[8 /*14*/]))
								{
									GlobalFunc_10693(&uLocal_2229, Local_1070[8 /*14*/], 0, 0, 1, 1, 1);
								}
								else
								{
									GlobalFunc_4948(&uLocal_2229, 0, 0);
									Local_291[iParam0 /*4*/].f_1 = 1;
								}
							}
							else
							{
								GlobalFunc_4948(&uLocal_2229, 0, 0);
								Local_291[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 2:
							if (!PED::IS_PED_INJURED(Local_1070[8 /*14*/]))
							{
								if (func_283(6))
								{
									Local_291[iParam0 /*4*/].f_2 = 1;
								}
							}
							else
							{
								Local_291[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 21:
					switch (Local_291[iParam0 /*4*/].f_2)
					{
						case 0:
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								Local_291[iParam0 /*4*/].f_3 = (Local_291[iParam0 /*4*/].f_3 + SYSTEM::FLOOR((SYSTEM::TIMESTEP() * 1000f)));
								if (Local_291[iParam0 /*4*/].f_3 > 5000)
								{
									GlobalFunc_159("ARM2_HLP27", 12000);
									Local_291[iParam0 /*4*/].f_2++;
								}
							}
							else
							{
								Local_291[iParam0 /*4*/].f_3 = 0;
							}
							break;
						
						case 1:
							if (GlobalFunc_74("ARM2_HLP27"))
							{
								if (PAD::IS_CONTROL_PRESSED(0, 48))
								{
									HUD::CLEAR_HELP(1);
									Local_291[iParam0 /*4*/].f_1 = 1;
								}
							}
							else
							{
								Local_291[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 22:
					GlobalFunc_159("ARM2_HLP30", 12000);
					Local_291[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 23:
					switch (Local_291[iParam0 /*4*/].f_2)
					{
						case 0:
							if (func_283(32))
							{
								HUD::CLEAR_PRINTS();
								GlobalFunc_164("ARM2_INS22", 5000, 1);
								Local_1070[2 /*14*/].f_1 = GlobalFunc_7056(Local_1070[2 /*14*/], 0, 0);
								if (HUD::DOES_BLIP_EXIST(Local_1449[4 /*2*/].f_1))
								{
									HUD::REMOVE_BLIP(&(Local_1449[4 /*2*/].f_1));
								}
								Local_291[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 1:
							if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[4 /*2*/], 0))
							{
								if (PED::IS_PED_IN_GROUP(Local_1070[2 /*14*/]))
								{
									if (HUD::DOES_BLIP_EXIST(Local_1070[2 /*14*/].f_1))
									{
										HUD::REMOVE_BLIP(&(Local_1070[2 /*14*/].f_1));
										Local_1449[4 /*2*/].f_1 = GlobalFunc_7056(Local_1449[4 /*2*/], 0, 0);
										Local_291[iParam0 /*4*/].f_2 = 0;
									}
								}
							}
							break;
					}
					break;
				
				case 24:
					switch (Local_291[iParam0 /*4*/].f_2)
					{
						case 0:
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
								if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar3, 0))
								{
									if (PED::IS_PED_IN_VEHICLE(Local_1070[2 /*14*/], iVar3, 0))
									{
										Local_291[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 30000;
										Local_291[iParam0 /*4*/].f_2++;
									}
								}
							}
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_291[iParam0 /*4*/].f_3)
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[4 /*2*/], 0))
								{
									if (!PED::IS_PED_INJURED(Local_1070[8 /*14*/]))
									{
										if (PED::IS_PED_IN_VEHICLE(Local_1070[8 /*14*/], Local_1449[4 /*2*/], 0))
										{
											if (func_261("drive_good", 3, Local_1070[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												if (PAD::_IS_USING_KEYBOARD(0))
												{
													GlobalFunc_159("ARM2_HLP21_KM", 9500);
												}
												else
												{
													GlobalFunc_159("ARM2_HLP21", 9500);
												}
												Local_291[iParam0 /*4*/].f_1 = 1;
											}
										}
									}
								}
							}
							break;
					}
					break;
				
				case 25:
					switch (Local_291[iParam0 /*4*/].f_2)
					{
						case 0:
							Local_291[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 2000;
							Local_291[iParam0 /*4*/].f_2++;
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_291[iParam0 /*4*/].f_3)
							{
								GlobalFunc_159("ARM2_HLP24", 12000);
								Local_291[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 2:
							if (!GlobalFunc_74("ARM2_HLP24"))
							{
								Local_291[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 500;
								Local_291[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 3:
							if (MISC::GET_GAME_TIMER() > Local_291[iParam0 /*4*/].f_3)
							{
								GlobalFunc_159("ARM2_HLP25", 12000);
								Local_291[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 26:
					switch (Local_291[iParam0 /*4*/].f_2)
					{
						case 0:
							if (HUD::DOES_BLIP_EXIST(Local_1449[4 /*2*/].f_1))
							{
								HUD::REMOVE_BLIP(&(Local_1449[4 /*2*/].f_1));
							}
							AUDIO::START_AUDIO_SCENE("ARM_2_RIDE_BIKE_BACK");
							Local_291[iParam0 /*4*/].f_2++;
							break;
						
						case 1:
							func_468(&Local_1955);
							if (func_429(&Local_1955, -6.62f, -1393.36f, 28.32f, 4f, 4f, 2f, 1, Local_1449[4 /*2*/], "ARM2_INS13", "CMN_GENGETINBK", "CMN_GENGETBCKBK", 1, 0, 1, -1))
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
								Local_291[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 27:
					switch (Local_291[iParam0 /*4*/].f_2)
					{
						case 0:
							if (func_428(69))
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && !GlobalFunc_111())
								{
									GlobalFunc_164("ARM2_INS14", 5000, 1);
									Local_291[iParam0 /*4*/].f_2++;
									Local_291[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 2000;
								}
							}
							break;
						
						case 1:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[4 /*2*/], 0))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1449[4 /*2*/], 0))
								{
									if (GlobalFunc_663("ARM2_INS14", 0, 0))
									{
										if (MISC::GET_GAME_TIMER() > Local_291[iParam0 /*4*/].f_3)
										{
											HUD::CLEAR_PRINTS();
											Local_291[iParam0 /*4*/].f_1 = 1;
										}
									}
									else
									{
										Local_291[iParam0 /*4*/].f_1 = 1;
									}
								}
							}
							break;
					}
					break;
				
				case 14:
					if (!func_427(7, 17))
					{
						switch (Local_291[iParam0 /*4*/].f_2)
						{
							case 0:
								Local_291[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 1500;
								Local_291[iParam0 /*4*/].f_2++;
								break;
							
							case 1:
								if (MISC::GET_GAME_TIMER() > Local_291[iParam0 /*4*/].f_3)
								{
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										GlobalFunc_159("ARM2_HLP08", 12000);
										Local_291[iParam0 /*4*/].f_2++;
									}
								}
								break;
							
							case 2:
								if (GlobalFunc_74("ARM2_HLP08"))
								{
									if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
									{
										HUD::CLEAR_HELP(1);
									}
								}
								else
								{
									Local_291[iParam0 /*4*/].f_1 = 1;
								}
								break;
						}
					}
					else
					{
						Local_291[iParam0 /*4*/].f_1 = 1;
					}
					break;
				}
			}
	}
}

int func_427(int iParam0, int iParam1)//Position - 0x47658
{
	if (Local_291[iParam0 /*4*/] == iParam1)
	{
		if (Local_291[iParam0 /*4*/].f_1 == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_428(int iParam0)//Position - 0x4767E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_139)
	{
		if (Local_139[iVar0 /*6*/] == iParam0)
		{
			if (Local_139[iVar0 /*6*/].f_1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_429(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15)//Position - 0x476B4
{
	return func_430(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 5, 0, 0, 0, iParam8, sParam9, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), sParam10, 0, bParam12, sParam11, 0, iParam13, bParam14, iParam15, 0, 0, 0, 1, 1065353216);
}

int func_430(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, int iParam32, int iParam33, int iParam34, bool bParam35, float fParam36)//Position - 0x47703
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
	uParam0->f_17[0] = iParam15;
	uParam0->f_17[1] = iParam16;
	uParam0->f_17[2] = iParam17;
	uParam0->f_16 = iParam15;
	GlobalFunc_647(uParam0);
	GlobalFunc_646(uParam0);
	func_422();
	if (func_447(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, uParam0->f_8, bParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, bParam26))
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
								GlobalFunc_5122(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
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
								GlobalFunc_5122(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
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
								GlobalFunc_5122(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
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
								GlobalFunc_5122(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
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
							*uParam0 = GlobalFunc_7056(iParam18, 0, 0);
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
										GlobalFunc_5122(uParam0->f_17[0], "GET_IN_CAR", 3);
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
										GlobalFunc_5122(uParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
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

















int func_447(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)//Position - 0x48504
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7[3];
	bool bVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	var uVar15[3];
	var uVar19[3];
	bool bVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	struct<3> Var28;
	int iVar31;
	int iVar32;
	
	iVar4 = 0;
	uParam0->f_17[0] = uParam1;
	uParam0->f_17[1] = uParam2;
	uParam0->f_17[2] = uParam3;
	uParam0->f_16 = uParam1;
	uVar15[0] = uParam4;
	uVar15[1] = uParam5;
	uVar15[2] = uParam6;
	uVar19[0] = uParam13;
	uVar19[1] = uParam14;
	uVar19[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			if (!MISC::IS_BIT_SET(uParam0->f_13, 29) && !MISC::IS_BIT_SET(uParam0->f_13, 28))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
				{
					PED::SET_PED_USING_ACTION_MODE(uParam0->f_17[iVar0], 1, -1, 0);
				}
				if (iVar0 == 2)
				{
					MISC::SET_BIT(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!MISC::IS_BIT_SET(uParam0->f_13, 29) && MISC::IS_BIT_SET(uParam0->f_13, 28))
		{
			if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
			{
				PED::SET_PED_USING_ACTION_MODE(uParam0->f_17[iVar0], 0, -1, 0);
			}
			if (iVar0 == 2)
			{
				MISC::CLEAR_BIT(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(uParam0->f_13, 26))
	{
		bVar23 = false;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_21))
		{
			iVar25 = 64;
			iVar25 |= 65536;
			iVar25 |= 2048;
			iVar25 |= 1;
			iVar25 |= 2;
			iVar25 |= 4;
			iVar25 |= 32;
			iVar25 |= 16;
			iVar25 |= 8;
			iVar24 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 0, iVar25);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar24, 0))
			{
				uParam0->f_21 = iVar24;
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_21, 0))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_21, 1)) < 400f)
			{
				if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || !bParam17)
					{
						if (GlobalFunc_634(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
								{
									PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_17[iVar0], 1f);
									if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()))
									{
										PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
									}
									if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], -1794415470) == 7 && !GlobalFunc_645(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0]) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0]))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_17[iVar0], 1);
											TASK::TASK_ENTER_VEHICLE(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return 1;
						}
						else
						{
							bVar23 = true;
						}
					}
					else
					{
						bVar23 = true;
					}
				}
				else
				{
					bVar23 = true;
				}
			}
			else
			{
				bVar23 = true;
			}
		}
		else
		{
			bVar23 = true;
		}
		if (bVar23)
		{
			MISC::CLEAR_BIT(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
				{
					if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						TASK::CLEAR_PED_TASKS(uParam0->f_17[iVar0]);
					}
					if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()))
					{
						if (GlobalFunc_7058(uParam0, uParam0->f_17[iVar0], fParam8, 1))
						{
							PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!MISC::IS_BIT_SET(uParam0->f_13, 26))
	{
		if ((!GlobalFunc_5148(uParam0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())) && !ENTITY::DOES_ENTITY_EXIST(iParam10))
		{
			iVar13 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar13, 0))
			{
				if (!MISC::IS_BIT_SET(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!GlobalFunc_5172(uParam0, 2))
					{
						iVar26 = 0;
						iVar27 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
							{
								iVar26++;
							}
							iVar0++;
						}
						iVar27 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar26);
						if (!PED::IS_PED_INJURED(uParam0->f_17[iVar27]))
						{
							GlobalFunc_5122(uParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						GlobalFunc_5145(uParam0, "MORE_SEATS", 0);
						MISC::SET_BIT(&(uParam0->f_13), 13);
					}
				}
				bVar12 = true;
			}
		}
		else
		{
			bVar12 = false;
			MISC::CLEAR_BIT(&(uParam0->f_13), 13);
			GlobalFunc_635("MORE_SEATS");
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam10))
		{
			if ((!PED::IS_PED_INJURED(uParam0->f_17[0]) || !PED::IS_PED_INJURED(uParam0->f_17[1])) || !PED::IS_PED_INJURED(uParam0->f_17[2]))
			{
				if (!MISC::IS_BIT_SET(uParam0->f_13, 31))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && !GlobalFunc_5172(uParam0, 2))
					{
						iVar13 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						if (GlobalFunc_643(iVar13, uParam0))
						{
							GlobalFunc_5145(uParam0, "CMN_VEHSUIT", 0);
							MISC::SET_BIT(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					MISC::CLEAR_BIT(&(uParam0->f_13), 31);
					GlobalFunc_635("CMN_VEHSUIT");
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10))
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(0, 75))
				{
					MISC::SET_BIT(&(uParam0->f_13), 21);
				}
			}
			else if (MISC::IS_BIT_SET(uParam0->f_13, 21))
			{
				MISC::CLEAR_BIT(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0]))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
				{
					if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()))
					{
						PED::SET_PED_DIES_IN_WATER(uParam0->f_17[iVar0], 1);
					}
					else
					{
						PED::SET_PED_DIES_IN_WATER(uParam0->f_17[iVar0], 0);
					}
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						iVar13 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar13, 0))
						{
							if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()))
							{
								if (!GlobalFunc_5148(uParam0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
								{
									if (!GlobalFunc_642(uParam0->f_17[iVar0]))
									{
										PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar13 != iParam10 && !ENTITY::IS_ENTITY_DEAD(iVar13))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_17[iVar0], iVar13))
							{
								if (ENTITY::IS_ENTITY_IN_WATER(iVar13) && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar13))
								{
									Var28 = { ENTITY::GET_ENTITY_COORDS(iVar13, 1) };
									if (Var28.f_2 < -1f)
									{
										TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar13, 64);
									}
								}
							}
						}
					}
					bVar11 = true;
					if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()))
					{
						if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_17[iVar0]))
						{
							iVar13 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_17[iVar0], 0);
							if (!ENTITY::IS_ENTITY_DEAD(iVar13))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0))
								{
									if (iVar13 != iParam10)
									{
										if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar13))
										{
											if (ENTITY::GET_ENTITY_SPEED(iVar13) > 5f)
											{
												TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
								else
								{
									if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
									{
										iVar31 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
									}
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar31, 0))
									{
										if (iVar13 != iVar31)
										{
											if (ENTITY::GET_ENTITY_SPEED(iVar13) > 5f)
											{
												TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
							}
						}
					}
					if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()))
					{
						iVar32 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						if (ENTITY::DOES_ENTITY_EXIST(iVar32))
						{
							if (GlobalFunc_634(iVar32, uParam0, 0))
							{
								if (GlobalFunc_641(iVar0, uParam0) || !MISC::IS_BIT_SET(uParam0->f_13, 27))
								{
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], iVar0);
									GlobalFunc_627(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										MISC::SET_BIT(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!GlobalFunc_641(iVar0, uParam0))
							{
								if (ENTITY::GET_ENTITY_MODEL(iVar32) == joaat("sentinel2"))
								{
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], 4);
								}
								else
								{
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], 2);
								}
								GlobalFunc_640(iVar0, uParam0);
							}
						}
					}
					if ((!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()) && !GlobalFunc_639(uParam0->f_17[iVar0], iParam10)) && !GlobalFunc_5147(uParam0->f_17[iVar0], iParam10))
					{
						if (GlobalFunc_7058(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
						{
							if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()))
							{
								if (((!PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0]) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0])) && !PED::IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_17[iVar0]))
								{
									iVar14 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7)
									{
										TASK::CLEAR_PED_TASKS(uParam0->f_17[iVar0]);
									}
									PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468());
									bVar11 = false;
								}
							}
						}
						if (bVar11)
						{
							if (!HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = MISC::GET_GAME_TIMER();
								uParam0->f_1[iVar0] = GlobalFunc_7056(uParam0->f_17[iVar0], 0, 0);
								HUD::SET_BLIP_DISPLAY(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									GlobalFunc_714(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
					{
						if (((GlobalFunc_5144(uParam0->f_17[iVar0], 1) || GlobalFunc_639(uParam0->f_17[iVar0], iParam10)) || iParam12) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, 0)))
						{
							if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
							{
								HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
								GlobalFunc_635(uVar15[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								GlobalFunc_714(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0))
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_17[iVar0], iParam10))
						{
							if ((ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !MISC::IS_BIT_SET(uParam0->f_13, 11)) && !((bParam17 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, 0)))
							{
								if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_17[iVar0]))
								{
									if (!PED::IS_PED_IN_VEHICLE(uParam0->f_17[iVar0], iParam10, 0))
									{
										if (!GlobalFunc_5144(uParam0->f_17[iVar0], 1))
										{
											if (GlobalFunc_630(uParam0->f_17[iVar0]))
											{
												iVar14 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], 451360105);
												if (iVar14 == 7)
												{
													TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()))
									{
										if ((((!PED::IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0]) && !PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0])) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_17[iVar0])) && !FIRE::IS_ENTITY_ON_FIRE(iParam10))
										{
											PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
										}
									}
									iVar14 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7 && !GlobalFunc_645(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!PED::IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0]) && !PED::IS_PED_JUMPING_OUT_OF_VEHICLE(PLAYER::PLAYER_PED_ID())) && !GlobalFunc_638(uParam0->f_17[iVar0], 2f)) && !PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0])) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0])) && !FIRE::IS_ENTITY_ON_FIRE(iParam10))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_17[iVar0], 1);
											if (MISC::IS_BIT_SET(uParam0->f_13, 10))
											{
												PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_17[iVar0], 1f);
											}
											TASK::TASK_ENTER_VEHICLE(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 1073741824, 1, 0);
											PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_17[iVar0], 0);
										}
									}
									else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = GlobalFunc_7056(uParam0->f_17[iVar0], 0, 0);
										HUD::SET_BLIP_DISPLAY(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()))
							{
								if (GlobalFunc_7058(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
								{
									if (!PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0]) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0]))
									{
										iVar14 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], -1794415470);
										if (iVar14 == 7)
										{
											TASK::CLEAR_PED_TASKS(uParam0->f_17[iVar0]);
										}
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_17[iVar0], 0);
										PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468());
									}
								}
							}
						}
						else if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10))
						{
							if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()))
							{
								if (!MISC::IS_BIT_SET(uParam0->f_13, 21))
								{
									PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468());
								}
							}
							else if (MISC::IS_BIT_SET(uParam0->f_13, 21))
							{
								PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
								MISC::SET_BIT(&(uParam0->f_13), 21);
							}
						}
						else if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()) && !FIRE::IS_ENTITY_ON_FIRE(iParam10))
						{
							PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
					GlobalFunc_635(uVar15[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!GlobalFunc_5172(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
						{
							if (GlobalFunc_642(uParam0->f_17[iVar0]) || ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_17[iVar0], PLAYER::PLAYER_PED_ID(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_17[iVar0], PLAYER::PLAYER_PED_ID(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !GlobalFunc_642(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = MISC::GET_GAME_TIMER();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!MISC::IS_BIT_SET(uParam0->f_13, 5))
							{
								GlobalFunc_5145(uParam0, sParam7, 0);
								MISC::SET_BIT(&(uParam0->f_13), 5);
								uParam0->f_12 = iVar1;
							}
							else
							{
								uParam0->f_12 = iVar1;
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (iVar7[iVar0])
								{
									if (!GlobalFunc_637(iVar0, uParam0))
									{
										if (!MISC::IS_STRING_NULL(uVar19[iVar0]))
										{
											if (!MISC::ARE_STRINGS_EQUAL(uVar19[iVar0], ""))
											{
												GlobalFunc_5173(uParam0, uVar15[iVar0], uVar19[iVar0], 0);
												GlobalFunc_636(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!GlobalFunc_637(iVar0, uParam0))
										{
											GlobalFunc_5145(uParam0, uVar15[iVar0], 0);
											GlobalFunc_636(iVar0, uParam0);
											uParam0->f_12 = iVar1;
										}
									}
									else
									{
										uParam0->f_12 = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					uParam0->f_12 = 0;
				}
			}
		}
		MISC::CLEAR_BIT(&(uParam0->f_13), 10);
		if (iVar6 && !bVar12)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
					GlobalFunc_635(uVar15[iVar0]);
				}
				iVar0++;
			}
			GlobalFunc_635("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}





















void func_468(var uParam0)//Position - 0x49CBC
{
	MISC::SET_BIT(&(uParam0->f_13), 7);
}




























bool func_496(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, var uParam8, char* sParam9, char* sParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14)//Position - 0x4ADFC
{
	return func_497(uParam0, Param1, Param4, iParam7, uParam8, 0, 0, sParam9, sParam10, sParam10, sParam10, sParam10, bParam11, bParam12, bParam13, iParam14);
}

int func_497(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, var uParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, bool bParam16, bool bParam17, bool bParam18, int iParam19)//Position - 0x4AE2A
{
	return func_430(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 1, uParam8, iParam9, iParam10, 0, sParam11, sParam12, sParam13, sParam14, sParam15, GlobalFunc_648(), bParam16, bParam17, GlobalFunc_648(), 0, 0, bParam18, iParam19, 0, 0, 0, 1, 1065353216);
}


void func_499(int iParam0, int iParam1)//Position - 0x4AE9D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	struct<3> Var16;
	struct<3> Var19;
	int iVar22;
	struct<3> Var23;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	var uVar31;
	int iVar32;
	
	iVar0 = (iParam1 - iParam0);
	if (Local_687[0 /*7*/] != iParam0 && Local_687[iVar0 /*7*/] != iParam1)
	{
		iVar2 = 0;
		iVar1 = 0;
		while (iVar1 < Local_687)
		{
			if (iVar1 <= iVar0)
			{
				Local_687[iVar1 /*7*/] = (iParam0 + iVar2);
				Local_687[iVar1 /*7*/].f_1 = 1;
				Local_687[iVar1 /*7*/].f_2 = 0;
				Local_687[iVar1 /*7*/].f_3 = 0;
				Local_687[iVar1 /*7*/].f_4 = 0;
				Local_687[iVar1 /*7*/].f_5 = 0;
				Local_687[iVar1 /*7*/].f_6 = 0f;
				iVar2++;
			}
			else
			{
				Local_687[iVar1 /*7*/].f_1 = 0;
			}
			iVar1++;
		}
	}
	iVar3 = 0;
	while (iVar3 < Local_687)
	{
		if (Local_687[iVar3 /*7*/].f_1)
		{
			switch (Local_687[iVar3 /*7*/])
			{
				case 6:
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						Local_687[iVar3 /*7*/].f_2 = 1;
					}
					else
					{
						Local_687[iVar3 /*7*/].f_2 = 0;
					}
					break;
				
				case 8:
					Local_687[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
					{
						if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1070[2 /*14*/], 1) > 30f)
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 7:
					Local_687[iVar3 /*7*/].f_2 = 0;
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
					{
						Local_687[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 9:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[0 /*2*/], 0) && !PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
					{
						if (PED::IS_PED_IN_VEHICLE(Local_1070[2 /*14*/], Local_1449[0 /*2*/], 0) || PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_1070[2 /*14*/]))
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
						else
						{
							Local_687[iVar3 /*7*/].f_2 = 0;
						}
					}
					break;
				
				case 10:
					switch (Local_687[iVar3 /*7*/].f_4)
					{
						case 0:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[0 /*2*/], 0))
							{
								if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1449[0 /*2*/], 1) < 8f)
								{
									Local_687[iVar3 /*7*/].f_4++;
								}
							}
							break;
						
						case 1:
							Local_687[iVar3 /*7*/].f_2 = 0;
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[0 /*2*/], 0))
							{
								if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1449[0 /*2*/], 1) > 12f)
								{
									Local_687[iVar3 /*7*/].f_2 = 1;
								}
							}
							break;
					}
					break;
				
				case 11:
					Local_687[iVar3 /*7*/].f_2 = 0;
					if (func_283(6) && !func_283(9))
					{
						Local_687[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 12:
					Local_687[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_1070[2 /*14*/], 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) != PED::GET_VEHICLE_PED_IS_USING(Local_1070[2 /*14*/]))
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 13:
					Local_687[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_1070[2 /*14*/], 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == PED::GET_VEHICLE_PED_IS_USING(Local_1070[2 /*14*/]))
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 14:
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[0 /*2*/], 0))
					{
						Local_687[iVar3 /*7*/].f_2 = 1;
					}
					else
					{
						Local_687[iVar3 /*7*/].f_2 = 0;
					}
					break;
				
				case 15:
					switch (Local_687[iVar3 /*7*/].f_4)
					{
						case 0:
							if (func_283(13))
							{
								Local_687[iVar3 /*7*/].f_2 = 0;
								Local_687[iVar3 /*7*/].f_4++;
							}
							break;
						
						case 1:
							if (func_282(13))
							{
								Local_687[iVar3 /*7*/].f_4 = 0;
								Local_687[iVar3 /*7*/].f_2 = 1;
							}
							break;
					}
					break;
				
				case 16:
					switch (Local_687[iVar3 /*7*/].f_4)
					{
						case 0:
							if (func_283(13))
							{
								Local_687[iVar3 /*7*/].f_4++;
							}
							break;
						
						case 1:
							if (func_282(13))
							{
								Local_687[iVar3 /*7*/].f_4++;
								Local_687[iVar3 /*7*/].f_2 = 0;
							}
							break;
						
						case 2:
							if (func_283(13))
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
								Local_687[iVar3 /*7*/].f_4 = 1;
							}
							break;
					}
					break;
				
				case 17:
					switch (Local_687[iVar3 /*7*/].f_4)
					{
						case 0:
							if (func_283(10) || func_283(12))
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
								Local_687[iVar3 /*7*/].f_4++;
							}
							break;
						
						case 1:
							if (func_282(10) && func_282(12))
							{
								Local_687[iVar3 /*7*/].f_2 = 0;
								Local_687[iVar3 /*7*/].f_4 = 0;
							}
							break;
					}
					break;
				
				case 18:
					switch (Local_687[iVar3 /*7*/].f_4)
					{
						case 0:
							if (func_283(7))
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
								Local_687[iVar3 /*7*/].f_4++;
							}
							break;
						
						case 1:
							if (func_282(7))
							{
								Local_687[iVar3 /*7*/].f_2 = 0;
								Local_687[iVar3 /*7*/].f_4 = 0;
							}
							break;
					}
					break;
				
				case 3:
					switch (Local_687[iVar3 /*7*/].f_4)
					{
						case 0:
							if (func_282(7))
							{
								if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
								{
									if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1141.093f, -1576.759f, 3.3048f, Global_18, 1, 1, 0) && ENTITY::IS_ENTITY_AT_COORD(Local_1070[2 /*14*/], -1141.093f, -1576.759f, 3.3048f, Global_18, 0, 1, 0))
									{
										if (func_283(13))
										{
											Local_687[iVar3 /*7*/].f_4 = 1;
										}
										else
										{
											Local_687[iVar3 /*7*/].f_2 = 1;
											Local_687[iVar3 /*7*/].f_4 = 2;
										}
									}
								}
							}
							break;
						
						case 1:
							if (func_282(7))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[0 /*2*/], 0))
								{
									if (GlobalFunc_530(Local_1449[0 /*2*/], 4f, 1, 1056964608, 0, 1))
									{
										Local_687[iVar3 /*7*/].f_2 = 1;
									}
								}
							}
							else
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
								Local_687[iVar3 /*7*/].f_4 = 0;
							}
							break;
					}
					break;
				
				case 4:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -17.2f, -1083.98f, 25.66f, 1) < 6f || GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -39.38f, -1078.51f, 25.65f, 1) < 6f)
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 103:
					if (func_283(132))
					{
						Local_687[iVar3 /*7*/].f_2 = 1;
					}
					else
					{
						Local_687[iVar3 /*7*/].f_2 = 0;
					}
					break;
				
				case 19:
					Local_687[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
					{
						if (!PED::IS_PED_IN_GROUP(Local_1070[2 /*14*/]))
						{
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1070[2 /*14*/], 1) > 4f)
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 20:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -58.0408f, -1114.981f, 25.4358f, 1) > 200f)
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 21:
					Local_687[iVar3 /*7*/].f_4 = Local_687[iVar3 /*7*/].f_5;
					Local_687[iVar3 /*7*/].f_5 = 0;
					iVar4 = VEHICLE::GET_CLOSEST_VEHICLE(-36.5853f, -1101.474f, 26.3444f, 5f, joaat("bjxl"), 4);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar4, 0))
					{
						Local_687[iVar3 /*7*/].f_5 = (Local_687[iVar3 /*7*/].f_5 + ENTITY::GET_ENTITY_HEALTH(iVar4));
					}
					iVar4 = VEHICLE::GET_CLOSEST_VEHICLE(-46.2594f, -1097.839f, 26.3444f, 5f, joaat("schwarzer"), 2);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar4, 0))
					{
						Local_687[iVar3 /*7*/].f_5 = (Local_687[iVar3 /*7*/].f_5 + ENTITY::GET_ENTITY_HEALTH(iVar4));
					}
					iVar4 = VEHICLE::GET_CLOSEST_VEHICLE(-50.08f, -1094.463f, 26.0671f, 5f, joaat("tailgater"), 4);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar4, 0))
					{
						Local_687[iVar3 /*7*/].f_5 = (Local_687[iVar3 /*7*/].f_5 + ENTITY::GET_ENTITY_HEALTH(iVar4));
					}
					iVar4 = VEHICLE::GET_CLOSEST_VEHICLE(-37.4128f, -1088.562f, 26.0671f, 5f, joaat("tailgater"), 4);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar4, 0))
					{
						Local_687[iVar3 /*7*/].f_5 = (Local_687[iVar3 /*7*/].f_5 + ENTITY::GET_ENTITY_HEALTH(iVar4));
					}
					iVar4 = VEHICLE::GET_CLOSEST_VEHICLE(-41.4259f, -1099.648f, 26.0534f, 5f, joaat("baller"), 2);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar4, 0))
					{
						Local_687[iVar3 /*7*/].f_5 = (Local_687[iVar3 /*7*/].f_5 + ENTITY::GET_ENTITY_HEALTH(iVar4));
					}
					if (PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 316))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -59.3578f, -1092.62f, 24.91771f, -27.43074f, -1104.519f, 28.7117f, 16.25f, 0, 1, 0))
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_1070[3 /*14*/]))
					{
						if (!PED::IS_PED_INJURED(Local_1070[3 /*14*/]))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_1070[3 /*14*/], 993674639) == 2)
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -39.62799f, -1099.24f, 25.25259f, 1) < 150.5f)
					{
						if (MISC::HAS_BULLET_IMPACTED_IN_AREA(-39.62799f, -1099.24f, 25.25259f, 26.5f, 1, 1))
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
						if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, -39.62799f, -1099.24f, 25.25259f, 26.5f))
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
						if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -39.62799f, -1099.24f, 25.25259f, 1) < 26.5f)
						{
							if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
							{
								iVar5 = joaat("weapon_unarmed");
								WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar5, 1);
								switch (iVar5)
								{
									case joaat("weapon_bat"):
									case joaat("weapon_crowbar"):
									case joaat("weapon_hammer"):
									case joaat("weapon_knife"):
									case joaat("weapon_nightstick"):
									case joaat("weapon_petrolcan"):
									case joaat("weapon_stickybomb"):
									case joaat("weapon_grenade"):
									case joaat("weapon_bottle"):
										break;
									
									default:
										Local_687[iVar3 /*7*/].f_2 = 1;
										break;
									}
								}
							}
					}
					if (Local_687[iVar3 /*7*/].f_4 != 0)
					{
						if (MISC::ABSI((Local_687[iVar3 /*7*/].f_4 - Local_687[iVar3 /*7*/].f_5)) < 200 && MISC::ABSI((Local_687[iVar3 /*7*/].f_4 - Local_687[iVar3 /*7*/].f_5)) > 10)
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 22:
					if (func_246(0, 1))
					{
						Local_687[iVar3 /*7*/].f_2 = 0;
						if ((((func_283(12) || func_283(10)) || func_283(13)) || func_283(11)) || func_283(19))
						{
							if (func_282(23))
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 23:
					Local_687[iVar3 /*7*/].f_2 = 0;
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1073.54f, -1666.452f, 3.12654f, -1120.646f, -1599.496f, 21.71115f, 51f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1061.875f, -1671.454f, 1.990468f, -1073.057f, -1659.667f, 21.70061f, 40.0625f, 0, 1, 0))
					{
						Local_687[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 24:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						if (func_283(23))
						{
							if (Local_687[iVar3 /*7*/].f_5 == 0)
							{
								Local_687[iVar3 /*7*/].f_5 = MISC::GET_GAME_TIMER() + 4000;
							}
							else if (MISC::GET_GAME_TIMER() > Local_687[iVar3 /*7*/].f_5)
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
							}
						}
						else
						{
							Local_687[iVar3 /*7*/].f_5 = 0;
						}
					}
					break;
				
				case 26:
					if (!PED::IS_PED_INJURED(Local_1070[22 /*14*/]))
					{
						Local_687[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 25:
					iVar6 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
					if (ENTITY::DOES_ENTITY_EXIST(iVar6))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar6, 0))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar6, -1130.124f, -1589.143f, 2.21117f, -1067.226f, -1677.451f, 9.856807f, 33.0625f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar6, -1127f, -1586.847f, 2.961027f, -1132.134f, -1590.443f, 7.032865f, 1.4375f, 0, 1, 0))
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 27:
					if (func_246(12, 14))
					{
						Local_687[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 2:
					if (((func_283(15) || func_283(16)) || func_283(17)) || func_283(18))
					{
						if (iLocal_47)
						{
							if (GlobalFunc_111())
							{
								cLocal_126 = { GlobalFunc_514() };
								if (!func_326(&cLocal_126))
								{
									Local_132 = { GlobalFunc_560() };
								}
								GlobalFunc_5105();
								iLocal_47 = 1;
							}
							iLocal_47 = 0;
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
						else
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 31:
					if (((func_283(15) || func_283(16)) || func_283(17)) || func_283(18))
					{
						if (iLocal_47)
						{
							if (GlobalFunc_111())
							{
								cLocal_126 = { GlobalFunc_514() };
								if (!func_326(&cLocal_126))
								{
									Local_132 = { GlobalFunc_560() };
								}
								GlobalFunc_5105();
								iLocal_47 = 1;
							}
							iLocal_47 = 0;
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
						else
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 47:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_1070[2 /*14*/], 0))
							{
								iVar7 = PED::GET_VEHICLE_PED_IS_IN(Local_1070[2 /*14*/], 0);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar7, 0))
								{
									if (ENTITY::GET_ENTITY_SPEED(iVar7) < 1f)
									{
										Local_687[iVar3 /*7*/].f_2 = 1;
									}
								}
							}
						}
					}
					break;
				
				case 48:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1070[2 /*14*/], -1127.09f, -1586.754f, 4.648631f, -1132.246f, -1590.347f, 6.931557f, 1.875f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1129.465f, -1588.787f, 2.398673f, -1109.243f, -1619.052f, 5.773672f, 25.75f, 0, 1, 0))
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 49:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1070[2 /*14*/], -1129.465f, -1588.787f, 2.398673f, -1109.243f, -1619.052f, 5.773672f, 25.75f, 0, 1, 0))
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 50:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1070[2 /*14*/], -1112.394f, -1602.36f, 2.913989f, -1119.863f, -1607.588f, 6.320321f, 2.1875f, 0, 1, 0))
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 51:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						switch (Local_687[iVar3 /*7*/].f_4)
						{
							case 0:
								if (ENTITY::DOES_ENTITY_EXIST(Local_1070[3 /*14*/]))
								{
									if (!PED::IS_PED_INJURED(Local_1070[3 /*14*/]))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_1070[3 /*14*/], 242628503) == 1)
										{
											Local_687[iVar3 /*7*/].f_4++;
										}
									}
									else
									{
										Local_687[iVar3 /*7*/].f_2 = 1;
									}
								}
								break;
							
							case 1:
								if (!PED::IS_PED_INJURED(Local_1070[3 /*14*/]))
								{
									if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1070[3 /*14*/], PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_SCRIPT_TASK_STATUS(Local_1070[3 /*14*/], 242628503) == 2)
									{
										Local_687[iVar3 /*7*/].f_2 = 1;
									}
								}
								else
								{
									Local_687[iVar3 /*7*/].f_2 = 1;
								}
								break;
							}
					}
					break;
				
				case 53:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
						{
							if ((func_283(51) || TASK::GET_SCRIPT_TASK_STATUS(Local_1070[2 /*14*/], -2017877118) == 2) || (func_283(50) && PED::IS_PED_RAGDOLL(Local_1070[2 /*14*/])))
							{
								if (!func_246(1, 19))
								{
									Local_687[iVar3 /*7*/].f_2 = 1;
								}
							}
						}
					}
					break;
				
				case 52:
					if (func_403(3, 21))
					{
						Local_687[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 54:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1070[2 /*14*/], -1127.827f, -1584.665f, 1.898767f, -1133.975f, -1589.041f, 5.765991f, 4.25f, 0, 1, 0))
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 55:
					Local_687[iVar3 /*7*/].f_2 = 0;
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1130.124f, -1589.143f, 2.21117f, -1067.226f, -1677.451f, 9.856807f, 33.0625f, 0, 1, 0) || (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1127f, -1586.847f, 2.961027f, -1132.134f, -1590.443f, 7.032865f, 1.4375f, 0, 1, 0) && PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())))
					{
						Local_687[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 56:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						switch (Local_687[iVar3 /*7*/].f_4)
						{
							case 0:
								if (GlobalFunc_5664("AR2_BU03"))
								{
									RECORDING::_0x293220DA1B46CEBC(0.5f, 4f, 3);
									Local_687[iVar3 /*7*/].f_4++;
								}
								break;
							
							case 1:
								if (!GlobalFunc_5664("AR2_BU03"))
								{
									Local_687[iVar3 /*7*/].f_2 = 1;
								}
								break;
							}
					}
					break;
				
				case 57:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						if (GlobalFunc_5664("AR2_AN04"))
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 58:
					Local_687[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1070[2 /*14*/], -1125.593f, -1595.336f, 3.075586f, -1117.488f, -1606.94f, 7.334638f, 6.875f, 0, 1, 0))
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 59:
					Local_687[iVar3 /*7*/].f_2 = 0;
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1129.233f, -1587.624f, 4.697088f, -1128.406f, -1588.807f, 7.398672f, 6.875f, 0, 1, 0))
					{
						Local_687[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 60:
					Local_687[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
					{
						if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1070[2 /*14*/], 1) < 50f)
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 61:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1070[2 /*14*/], -1111.919f, -1608.71f, 2.749123f, -1107.077f, -1615.715f, 6.152816f, 22.4375f, 0, 1, 0))
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 62:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[1 /*2*/], 0) && !PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
						{
							if (GlobalFunc_156(Local_1449[1 /*2*/], Local_1070[2 /*14*/], 1) < 20f)
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 63:
					if (func_403(9, 27) && !func_246(9, 27))
					{
						Local_687[iVar3 /*7*/].f_2 = 1;
					}
					else
					{
						Local_687[iVar3 /*7*/].f_2 = 0;
					}
					break;
				
				case 64:
					Local_687[iVar3 /*7*/].f_2 = 0;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[1 /*2*/], 0))
					{
						switch (Local_687[iVar3 /*7*/].f_4)
						{
							case 0:
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1449[1 /*2*/]))
								{
									Local_687[iVar3 /*7*/].f_4++;
								}
								break;
							
							case 1:
								if (func_507(Local_1449[1 /*2*/], PLAYER::PLAYER_PED_ID(), &fLocal_2227, 15f, 2.4f, 0f) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1131.669f, -1587.066f, 0.197111f, -1083.117f, -1654.017f, 6.711177f, 18.4375f, 0, 1, 0))
								{
									Local_687[iVar3 /*7*/].f_2 = 1;
								}
								break;
							}
					}
					break;
				
				case 77:
					Local_687[iVar3 /*7*/].f_2 = 0;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[1 /*2*/], 0))
					{
						if (ENTITY::GET_ENTITY_SPEED(Local_1449[1 /*2*/]) < 1f)
						{
							if (GlobalFunc_156(Local_1449[1 /*2*/], PLAYER::PLAYER_PED_ID(), 1) < 3f)
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					else
					{
						Local_687[iVar3 /*7*/].f_1 = 0;
					}
					break;
				
				case 78:
					if (func_283(82))
					{
						if (!func_283(78))
						{
							fVar8 = MISC::ABSF((ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) - GlobalFunc_1695(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1067.156f, -1665.472f, 3.55f, 1)));
							if (fVar8 > 180f)
							{
								fVar8 = MISC::ABSF((fVar8 - 360f));
							}
							fVar9 = (60f - fVar8);
							if (fVar9 < 0f)
							{
								fVar9 = 0f;
							}
							fVar9 = (fVar9 * 0.0433f);
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1068.671f, -1664.627f, 3.04523f, -1066.667f, -1667.668f, 5.714818f, (1.4f + fVar9), 0, 1, 0) && fVar8 < 90f)
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case joaat("mpsv_lp0_31"):
					if (func_283(82))
					{
						if (!func_283(79))
						{
							fVar10 = MISC::ABSF((ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) - GlobalFunc_1695(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1064.92f, -1668.621f, 3.546325f, 1)));
							if (fVar10 > 180f)
							{
								fVar10 = MISC::ABSF((fVar10 - 360f));
							}
							fVar11 = (60f - fVar10);
							if (fVar11 < 0f)
							{
								fVar11 = 0f;
							}
							fVar11 = (fVar11 * 0.0433f);
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1064.56f, -1670.807f, 3.018936f, -1066.667f, -1667.668f, 5.714818f, (1.4f + fVar11), 0, 1, 0) && fVar10 < 90f)
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 80:
					Local_687[iVar3 /*7*/].f_2 = 0;
					if (func_283(72))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1071.81f, -1677.795f, 1.909934f, -1075.768f, -1672.886f, 5.900661f, 3.25f, 0, 1, 0))
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 81:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						if (func_283(61))
						{
							if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[1 /*2*/], 0))
								{
									if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1449[1 /*2*/], 1) < 5f)
									{
										Local_687[iVar3 /*7*/].f_2 = 1;
									}
								}
							}
						}
					}
					break;
				
				case 65:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						if (func_246(13, 31))
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 66:
					if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
					{
						if (func_283(53) || func_246(3, 21))
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 67:
					if (func_246(1, 19))
					{
						Local_687[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 68:
					Local_687[iVar3 /*7*/].f_2 = 0;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[1 /*2*/], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1449[1 /*2*/]))
						{
							if (func_246(11, 29))
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 84:
					switch (Local_687[iVar3 /*7*/].f_4)
					{
						case 0:
							if (GlobalFunc_5664("ARM2_OUT4") || func_428(33))
							{
								Local_687[iVar3 /*7*/].f_4++;
							}
							break;
						
						case 1:
							if (func_428(21) || func_428(33))
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
							}
							break;
					}
					break;
				
				case 69:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[6 /*2*/], 0))
					{
						if (VEHICLE::IS_VEHICLE_ALARM_ACTIVATED(Local_1449[6 /*2*/]))
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[2 /*2*/], 0))
					{
						if (VEHICLE::IS_VEHICLE_ALARM_ACTIVATED(Local_1449[2 /*2*/]))
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 70:
					switch (Local_687[iVar3 /*7*/].f_4)
					{
						case 0:
							if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1070[2 /*14*/], -1098.358f, -1632.922f, -0.601469f, -1065.555f, -1675.355f, 24.1932f, 19.75f, 0, 1, 0))
								{
									if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1070[2 /*14*/], 1) > 20f)
									{
										Local_687[iVar3 /*7*/].f_2 = 1;
										Local_687[iVar3 /*7*/].f_4++;
									}
								}
							}
							break;
						
						case 1:
							if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
							{
								if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1070[2 /*14*/], 1) < 15f)
								{
									Local_687[iVar3 /*7*/].f_2 = 0;
									Local_687[iVar3 /*7*/].f_4 = 0;
								}
							}
							break;
					}
					break;
				
				case 71:
					if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
					{
						if (!Local_687[iVar3 /*7*/].f_2)
						{
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1070[2 /*14*/], 1) > 20f)
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
							}
						}
						else if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1070[2 /*14*/], 1) < 15f)
						{
							Local_687[iVar3 /*7*/].f_2 = 0;
						}
					}
					break;
				
				case 72:
					Local_687[iVar3 /*7*/].f_2 = 0;
					if (GlobalFunc_713(Local_1070[2 /*14*/], -1071.49f, -1672.068f, 3.709275f, 1) < 48.75f)
					{
						Local_687[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 73:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
						{
							if (GlobalFunc_713(Local_1070[2 /*14*/], -1073.109f, -1670.528f, 3.468073f, 1) < 12.8125f)
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 74:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[1 /*2*/], 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1449[1 /*2*/]))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1449[1 /*2*/]) > 5000f)
								{
									Local_687[iVar3 /*7*/].f_2 = 1;
								}
							}
						}
					}
					break;
				
				case 82:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						switch (Local_687[iVar3 /*7*/].f_4)
						{
							case 0:
								if (func_283(73))
								{
									if (GlobalFunc_663("ARM2_INS07b", 0, 0))
									{
										Local_687[iVar3 /*7*/].f_5 = MISC::GET_GAME_TIMER() + 1000;
										Local_687[iVar3 /*7*/].f_4++;
									}
								}
								break;
							
							case 1:
								if (MISC::GET_GAME_TIMER() > Local_687[iVar3 /*7*/].f_5)
								{
									Local_687[iVar3 /*7*/].f_2 = 1;
								}
								break;
							}
					}
					break;
				
				case 83:
					switch (Local_687[iVar3 /*7*/].f_4)
					{
						case 0:
							if (func_283(73))
							{
								Local_687[iVar3 /*7*/].f_5 = MISC::GET_GAME_TIMER() + 12000;
								Local_687[iVar3 /*7*/].f_4++;
							}
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_687[iVar3 /*7*/].f_5)
							{
								if (!func_283(75) && !func_283(76))
								{
									Local_687[iVar3 /*7*/].f_2 = 1;
								}
								else
								{
									Local_687[iVar3 /*7*/].f_2 = 0;
								}
							}
							break;
					}
					break;
				
				case 44:
					Local_687[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_1070[2 /*14*/], 1435919172) == 7 || TASK::GET_SCRIPT_TASK_STATUS(Local_1070[2 /*14*/], 1435919172) == 3)
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 43:
					if (ENTITY::DOES_ENTITY_EXIST(Local_1449[1 /*2*/]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1070[4 /*14*/]))
						{
							if (!PED::IS_PED_INJURED(Local_1070[4 /*14*/]))
							{
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1070[4 /*14*/], PLAYER::PLAYER_PED_ID(), 1))
								{
									Local_687[iVar3 /*7*/].f_2 = 1;
								}
								if (!ENTITY::IS_ENTITY_DEAD(Local_1449[1 /*2*/]))
								{
									if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == Local_1449[1 /*2*/])
									{
										if (((VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_1449[1 /*2*/], 1) > 0f || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_1449[1 /*2*/], 0) > 0f) || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_1449[1 /*2*/], 2) > 0f) || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_1449[1 /*2*/], 3) > 0f)
										{
											Local_687[iVar3 /*7*/].f_2 = 1;
										}
									}
								}
								if (PED::IS_PED_IN_COMBAT(Local_1070[4 /*14*/], PLAYER::PLAYER_PED_ID()))
								{
									Local_687[iVar3 /*7*/].f_2 = 1;
								}
							}
							else
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
							}
						}
						if (iLocal_1066 < 7)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_1070[5 /*14*/]))
							{
								if (!PED::IS_PED_INJURED(Local_1070[5 /*14*/]))
								{
									if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1070[5 /*14*/], PLAYER::PLAYER_PED_ID(), 1))
									{
										Local_687[iVar3 /*7*/].f_2 = 1;
									}
									if (!ENTITY::IS_ENTITY_DEAD(Local_1449[1 /*2*/]))
									{
										if (!PED::IS_PED_IN_VEHICLE(Local_1070[5 /*14*/], Local_1449[1 /*2*/], 0))
										{
											if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1070[5 /*14*/], 1) < 10f)
											{
												Local_687[iVar3 /*7*/].f_2 = 1;
											}
										}
									}
									if (PED::IS_PED_IN_COMBAT(Local_1070[5 /*14*/], PLAYER::PLAYER_PED_ID()))
									{
										Local_687[iVar3 /*7*/].f_2 = 1;
									}
								}
								else
								{
									Local_687[iVar3 /*7*/].f_2 = 1;
								}
							}
						}
						if (!ENTITY::IS_ENTITY_DEAD(Local_1449[1 /*2*/]))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1449[1 /*2*/], PLAYER::PLAYER_PED_ID(), 1))
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[1 /*2*/], 0))
							{
								if (PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1449[1 /*2*/]) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1449[1 /*2*/]))
								{
									Local_687[iVar3 /*7*/].f_2 = 1;
								}
							}
						}
					}
					break;
				
				case 28:
					if (ENTITY::DOES_ENTITY_EXIST(Local_1449[1 /*2*/]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1070[4 /*14*/]))
						{
							if (!PED::IS_PED_INJURED(Local_1070[4 /*14*/]))
							{
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1070[4 /*14*/], PLAYER::PLAYER_PED_ID(), 1))
								{
									Local_687[iVar3 /*7*/].f_2 = 1;
								}
								if (!ENTITY::IS_ENTITY_DEAD(Local_1449[1 /*2*/]))
								{
									if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == Local_1449[1 /*2*/])
									{
										if (((VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_1449[1 /*2*/], 1) > 0f || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_1449[1 /*2*/], 0) > 0f) || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_1449[1 /*2*/], 2) > 0f) || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_1449[1 /*2*/], 3) > 0f)
										{
											Local_687[iVar3 /*7*/].f_2 = 1;
										}
									}
								}
								if (PED::IS_PED_IN_COMBAT(Local_1070[4 /*14*/], PLAYER::PLAYER_PED_ID()))
								{
									Local_687[iVar3 /*7*/].f_2 = 1;
								}
							}
							else
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
							}
						}
						if (iLocal_1066 < 7)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_1070[5 /*14*/]))
							{
								if (!PED::IS_PED_INJURED(Local_1070[5 /*14*/]))
								{
									if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1070[5 /*14*/], PLAYER::PLAYER_PED_ID(), 1))
									{
										Local_687[iVar3 /*7*/].f_2 = 1;
									}
									if (!ENTITY::IS_ENTITY_DEAD(Local_1449[1 /*2*/]))
									{
										if (!PED::IS_PED_IN_VEHICLE(Local_1070[5 /*14*/], Local_1449[1 /*2*/], 0))
										{
											if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1070[5 /*14*/], 1) < 10f)
											{
												Local_687[iVar3 /*7*/].f_2 = 1;
											}
										}
									}
									if (PED::IS_PED_IN_COMBAT(Local_1070[5 /*14*/], PLAYER::PLAYER_PED_ID()))
									{
										Local_687[iVar3 /*7*/].f_2 = 1;
									}
								}
								else
								{
									Local_687[iVar3 /*7*/].f_2 = 1;
								}
							}
						}
						if (!ENTITY::IS_ENTITY_DEAD(Local_1449[1 /*2*/]))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1449[1 /*2*/], PLAYER::PLAYER_PED_ID(), 1))
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[1 /*2*/], 0))
							{
								if (PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1449[1 /*2*/]))
								{
									Local_687[iVar3 /*7*/].f_2 = 1;
								}
							}
						}
					}
					break;
				
				case 85:
					if (func_283(43))
					{
						if (Local_687[iVar3 /*7*/].f_5 == 0)
						{
							Local_687[iVar3 /*7*/].f_5 = MISC::GET_GAME_TIMER() + 4000;
						}
						else if (MISC::GET_GAME_TIMER() > Local_687[iVar3 /*7*/].f_5)
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 88:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1070[2 /*14*/], -1123.673f, -1597.103f, 3.37023f, -1118.749f, -1604.27f, 6.259631f, 10.25f, 0, 1, 0))
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 46:
					iVar12 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
					if (ENTITY::DOES_ENTITY_EXIST(iVar12))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar12, 0))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar12, -1130.124f, -1589.143f, 2.21117f, -1067.226f, -1677.451f, 9.856807f, 33.0625f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar12, -1127f, -1586.847f, 2.961027f, -1132.134f, -1590.443f, 7.032865f, 1.4375f, 0, 1, 0))
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
					{
						if (func_283(55))
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
						else if (MISC::IS_BULLET_IN_ANGLED_AREA(-1067.56f, -1677.333f, 1.841916f, -1130.009f, -1588.986f, 11.97924f, 33.125f, 1))
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					iVar13 = 0;
					if (PLAYER::GET_PLAYER_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar13))
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar13))
						{
							iVar14 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar13);
							if (!PED::IS_PED_INJURED(iVar14))
							{
								if (iVar14 == Local_1070[4 /*14*/] || iVar14 == Local_1070[5 /*14*/])
								{
									if (MISC::ABSF(GlobalFunc_7059(iVar14, PLAYER::PLAYER_PED_ID())) < 70f)
									{
										if (GlobalFunc_156(iVar14, PLAYER::PLAYER_PED_ID(), 1) < 30f)
										{
											Local_687[iVar3 /*7*/].f_2 = 1;
										}
									}
								}
							}
						}
					}
					if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar13))
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar13))
						{
							iVar15 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar13);
							if (!PED::IS_PED_INJURED(iVar15))
							{
								if (iVar15 == Local_1070[4 /*14*/] || iVar15 == Local_1070[5 /*14*/])
								{
									if (MISC::ABSF(GlobalFunc_7059(iVar15, PLAYER::PLAYER_PED_ID())) < 70f)
									{
										if (GlobalFunc_156(iVar15, PLAYER::PLAYER_PED_ID(), 1) < 30f)
										{
											Local_687[iVar3 /*7*/].f_2 = 1;
										}
									}
								}
							}
						}
					}
					break;
				
				case 75:
					if (iLocal_1053 == 1)
					{
						Local_687[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 76:
					if (iLocal_1053 == 2)
					{
						Local_687[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 91:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						if (GlobalFunc_5664("ARM2_GET"))
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 92:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						switch (Local_687[iVar3 /*7*/].f_4)
						{
							case 0:
								if (GlobalFunc_5664("ARM2_ATTACK"))
								{
									Local_687[iVar3 /*7*/].f_2 = 1;
								}
								break;
							
							case 1:
								if (!GlobalFunc_5664("ARM2_ATTACK"))
								{
									Local_687[iVar3 /*7*/].f_2 = 1;
								}
								break;
							}
					}
					break;
				
				case 94:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						if (!OBJECT::DOES_PICKUP_EXIST(uLocal_1981) || func_503(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (OBJECT::DOES_PICKUP_EXIST(uLocal_1981))
							{
								HUD::REMOVE_BLIP(&uLocal_2029);
							}
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 93:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1074.78f, -1676.197f, 3.137903f, -1080.753f, -1680.328f, 5.637903f, 7f, 0, 1, 0))
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 95:
					if (!Local_687[iVar3 /*7*/].f_2 == 1)
					{
						switch (Local_687[iVar3 /*7*/].f_4)
						{
							case 0:
								if (GlobalFunc_663("ARM2_INS09", 0, 0))
								{
									Local_687[iVar3 /*7*/].f_4++;
								}
								break;
							
							case 1:
								if (!GlobalFunc_663("ARM2_INS09", 0, 0))
								{
									Local_687[iVar3 /*7*/].f_2 = 1;
								}
								break;
							}
					}
					break;
				
				case 96:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1066.281f, -1677.048f, -0.401059f, -1076.836f, -1663.628f, 5.898672f, 27.8125f, 0, 1, 0))
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 97:
					Local_687[iVar3 /*7*/].f_2 = 0;
					if (func_502() <= 1)
					{
						Local_687[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 98:
					if (!PED::IS_PED_INJURED(Local_1070[11 /*14*/]))
					{
						Local_687[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 99:
					Local_687[iVar3 /*7*/].f_2 = 0;
					if (func_502() == 0)
					{
						Local_687[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 100:
					if ((((ENTITY::DOES_ENTITY_EXIST(Local_1070[9 /*14*/]) && PED::IS_PED_INJURED(Local_1070[9 /*14*/])) && (ENTITY::DOES_ENTITY_EXIST(Local_1070[9 /*14*/]) && PED::IS_PED_INJURED(Local_1070[10 /*14*/]))) && (ENTITY::DOES_ENTITY_EXIST(Local_1070[9 /*14*/]) && PED::IS_PED_INJURED(Local_1070[11 /*14*/]))) && (ENTITY::DOES_ENTITY_EXIST(Local_1070[9 /*14*/]) && PED::IS_PED_INJURED(Local_1070[12 /*14*/])))
					{
						Local_687[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 101:
					break;
				
				case 102:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						if (!PED::IS_PED_INJURED(Local_1070[13 /*14*/]))
						{
							switch (Local_687[iVar3 /*7*/].f_4)
							{
								case 0:
									if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
									{
										if (PED::IS_PED_SHOOTING(Local_1070[13 /*14*/]))
										{
											Local_687[iVar3 /*7*/].f_2 = 1;
										}
									}
									break;
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(Local_1070[13 /*14*/]))
						{
							Local_687[iVar3 /*7*/].f_2 = 0;
						}
					}
					else if (PED::IS_PED_INJURED(Local_1070[13 /*14*/]))
					{
						Local_687[iVar3 /*7*/].f_2 = 0;
					}
					break;
				
				case 108:
					if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
					{
						if (PED::IS_PED_IN_COVER(Local_1070[2 /*14*/], 0))
						{
							if (GlobalFunc_713(Local_1070[2 /*14*/], -1085.646f, -1655.878f, 3.687f, 1) < 3f)
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 105:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1070[13 /*14*/]))
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 107:
					if (func_403(10, 55))
					{
						Local_687[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 106:
					Local_687[iVar3 /*7*/].f_2 = 0;
					if (func_283(107))
					{
						if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -1085.263f, -1656.034f, 3.3987f, 1) < 1.5f)
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 104:
					if (func_403(12, 58))
					{
						Local_687[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 109:
					if (!PED::IS_PED_INJURED(Local_1070[13 /*14*/]))
					{
						Var16 = { ENTITY::GET_ENTITY_COORDS(Local_1070[13 /*14*/], 1) };
						if (Var16.f_2 < 6.6f)
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 110:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						if (func_283(105))
						{
							if ((((PED::IS_PED_INJURED(Local_1070[13 /*14*/]) && PED::IS_PED_INJURED(Local_1070[9 /*14*/])) && PED::IS_PED_INJURED(Local_1070[10 /*14*/])) && PED::IS_PED_INJURED(Local_1070[11 /*14*/])) && PED::IS_PED_INJURED(Local_1070[12 /*14*/]))
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 111:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						Var19 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1062.196f, -1672.283f, 2.088862f, -1090.901f, -1644.2f, 17.33617f, 48.3125f, 0, 1, 0) || Var19.f_2 > 6f)
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 112:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						if (func_283(110))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_1070[16 /*14*/]))
							{
								if (PED::IS_PED_INJURED(Local_1070[16 /*14*/]))
								{
									Local_687[iVar3 /*7*/].f_2 = 1;
								}
							}
						}
					}
					break;
				
				case 113:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						if (func_283(110))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_1070[18 /*14*/]))
							{
								if (PED::IS_PED_INJURED(Local_1070[18 /*14*/]))
								{
									Local_687[iVar3 /*7*/].f_2 = 1;
								}
							}
						}
					}
					break;
				
				case 114:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						if (func_283(110))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_1070[19 /*14*/]))
							{
								if (PED::IS_PED_INJURED(Local_1070[19 /*14*/]))
								{
									Local_687[iVar3 /*7*/].f_2 = 1;
								}
							}
						}
					}
					break;
				
				case 115:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						if (((ENTITY::DOES_ENTITY_EXIST(Local_1070[21 /*14*/]) && ENTITY::DOES_ENTITY_EXIST(Local_1070[18 /*14*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1070[19 /*14*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1070[16 /*14*/]))
						{
							if (((PED::IS_PED_INJURED(Local_1070[21 /*14*/]) && PED::IS_PED_INJURED(Local_1070[18 /*14*/])) && PED::IS_PED_INJURED(Local_1070[19 /*14*/])) && PED::IS_PED_INJURED(Local_1070[16 /*14*/]))
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 121:
					if (func_283(110) && func_283(115))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1070[22 /*14*/]) && ENTITY::DOES_ENTITY_EXIST(Local_1070[24 /*14*/]))
						{
							if (PED::IS_PED_INJURED(Local_1070[22 /*14*/]) && PED::IS_PED_INJURED(Local_1070[24 /*14*/]))
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 122:
					if (ENTITY::DOES_ENTITY_EXIST(Local_1070[22 /*14*/]) && ENTITY::DOES_ENTITY_EXIST(Local_1070[24 /*14*/]))
					{
						iVar22 = Local_687[iVar3 /*7*/].f_5;
						Local_687[iVar3 /*7*/].f_5 = 0;
						if (!PED::IS_PED_INJURED(Local_1070[22 /*14*/]))
						{
							Local_687[iVar3 /*7*/].f_5++;
						}
						if (!PED::IS_PED_INJURED(Local_1070[24 /*14*/]))
						{
							Local_687[iVar3 /*7*/].f_5++;
						}
						if (Local_687[iVar3 /*7*/].f_5 < iVar22)
						{
							if (Local_687[iVar3 /*7*/].f_4 != 0)
							{
								if ((MISC::GET_GAME_TIMER() - Local_687[iVar3 /*7*/].f_4) < 400)
								{
									Local_687[iVar3 /*7*/].f_2 = 1;
								}
							}
						}
						if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, -1107.71f, -1629.62f, 3.57f, 5f))
						{
							Local_687[iVar3 /*7*/].f_4 = MISC::GET_GAME_TIMER();
						}
					}
					break;
				
				case 116:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						if (func_283(110))
						{
							if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1070[2 /*14*/], -1083.303f, -1651.25f, 1.586172f, -1086.857f, -1646.736f, 6.398672f, 5.625f, 0, 1, 0))
								{
									Local_687[iVar3 /*7*/].f_2 = 1;
								}
							}
						}
					}
					break;
				
				case 117:
					switch (Local_687[iVar3 /*7*/].f_4)
					{
						case 0:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[6 /*2*/], 0))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1449[6 /*2*/]))
								{
									Local_687[iVar3 /*7*/].f_5 = MISC::GET_GAME_TIMER() + 1000;
									Local_687[iVar3 /*7*/].f_4++;
								}
							}
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_687[iVar3 /*7*/].f_5)
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
								Local_687[iVar3 /*7*/].f_4++;
							}
							break;
					}
					break;
				
				case 118:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[6 /*2*/], 0) && !PED::IS_PED_INJURED(Local_1070[20 /*14*/]))
					{
						if (GlobalFunc_1533(Local_1070[20 /*14*/], Local_1449[6 /*2*/], -1))
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					else
					{
						Local_687[iVar3 /*7*/].f_2 = 0;
					}
					break;
				
				case 119:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						switch (Local_687[iVar3 /*7*/].f_4)
						{
							case 0:
								if (func_283(111))
								{
									Local_687[iVar3 /*7*/].f_2 = 1;
								}
								else if (func_283(115))
								{
									if (func_283(118))
									{
										if (func_283(117))
										{
											Local_687[iVar3 /*7*/].f_4++;
											Local_687[iVar3 /*7*/].f_5 = MISC::GET_GAME_TIMER() + 2000;
										}
									}
									else
									{
										Local_687[iVar3 /*7*/].f_2 = 1;
									}
								}
								break;
							
							case 1:
								if (MISC::GET_GAME_TIMER() > Local_687[iVar3 /*7*/].f_5)
								{
									Local_687[iVar3 /*7*/].f_2 = 1;
								}
								break;
							}
					}
					break;
				
				case 120:
					if (func_283(115))
					{
						if (func_428(56))
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 135:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						if (func_285(17, 58))
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 134:
				case 41:
					switch (Local_687[iVar3 /*7*/].f_4)
					{
						case 0:
							if (iLocal_1066 == 9)
							{
								Local_687[iVar3 /*7*/].f_4++;
							}
							else if (func_283(117))
							{
								Local_687[iVar3 /*7*/].f_4++;
							}
							break;
						
						case 1:
							if (bLocal_1065)
							{
								if (Local_687[iVar3 /*7*/].f_5 != 0)
								{
									if (MISC::GET_GAME_TIMER() > Local_687[iVar3 /*7*/].f_5)
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[6 /*2*/], 0))
										{
											if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1449[6 /*2*/]))
											{
												Local_687[iVar3 /*7*/].f_2 = 1;
											}
										}
									}
								}
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[6 /*2*/], 0))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1449[6 /*2*/]))
								{
									Var23 = { 0f, 0f, 0f };
									FIRE::GET_CLOSEST_FIRE_POS(&Var23, ENTITY::GET_ENTITY_COORDS(Local_1449[6 /*2*/], 1));
									if (GlobalFunc_713(Local_1449[6 /*2*/], Var23, 1) < 3f)
									{
										Local_687[iVar3 /*7*/].f_2 = 1;
									}
								}
								else if (Local_687[iVar3 /*7*/].f_5 == 0)
								{
									Local_687[iVar3 /*7*/].f_5 = MISC::GET_GAME_TIMER() + 7000;
								}
							}
							break;
					}
					break;
				
				case 123:
					Local_687[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1070[2 /*14*/], -1119.603f, -1625.578f, 3.098616f, -1101.016f, -1613.749f, 11.68734f, 7.5f, 0, 1, 0) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1105.941f, -1627.412f, 2.648617f, -1083.993f, -1658.702f, 7.711175f, 25.9375f, 0, 1, 0))
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 124:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						if (func_500(6, 46))
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 125:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						iVar26 = joaat("weapon_unarmed");
						if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar26, 1))
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 126:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 127:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[6 /*2*/], 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1449[6 /*2*/]))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1449[6 /*2*/]) > 4503f)
								{
									Local_687[iVar3 /*7*/].f_2 = 1;
								}
							}
						}
					}
					break;
				
				case 128:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[6 /*2*/], 0))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1449[6 /*2*/], 1))
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
							}
						}
						else
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 129:
					switch (Local_687[iVar3 /*7*/].f_4)
					{
						case 0:
							if (OBJECT::DOES_PICKUP_EXIST(uLocal_1980))
							{
								Local_687[iVar3 /*7*/].f_4++;
							}
							break;
						
						case 1:
							if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(uLocal_1980))
							{
								Local_687[iVar3 /*7*/].f_4++;
								Local_687[iVar3 /*7*/].f_2 = 1;
							}
							break;
					}
					break;
				
				case 131:
					Local_687[iVar3 /*7*/].f_2 = 0;
					if (OBJECT::DOES_PICKUP_EXIST(uLocal_1980))
					{
						if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), OBJECT::GET_PICKUP_COORDS(uLocal_1980), 1) < 10f)
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 132:
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1070[2 /*14*/], 1) > 40f)
					{
						Local_687[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 133:
					if (func_283(121))
					{
						Local_687[iVar3 /*7*/].f_2 = 0;
						if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1070[2 /*14*/], 1) > 17f)
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 30:
					if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1070[2 /*14*/], -1126.621f, -1585.546f, 2.137227f, -1132.657f, -1589.75f, 15.00997f, 1.625f, 0, 1, 0))
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 32:
					switch (Local_687[iVar3 /*7*/].f_4)
					{
						case 0:
							if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
							{
								if (PED::IS_PED_IN_GROUP(Local_1070[2 /*14*/]))
								{
									Local_687[iVar3 /*7*/].f_4++;
									Local_687[iVar3 /*7*/].f_2 = 0;
								}
							}
							break;
						
						case 1:
							if (!PED::IS_PED_IN_GROUP(Local_1070[2 /*14*/]))
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
								Local_687[iVar3 /*7*/].f_4 = 0;
							}
							break;
					}
					break;
				
				case 33:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[0 /*2*/], 0))
						{
							if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
							{
								if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1070[2 /*14*/], 1) < 25f)
								{
									Local_687[iVar3 /*7*/].f_2 = 1;
								}
							}
						}
					}
					break;
				
				case 34:
					Local_687[iVar3 /*7*/].f_2 = 0;
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[4 /*2*/], 0))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1449[4 /*2*/], (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) * 4.5f), (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) * 4.5f), 20f, 0, 1, 0))
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 35:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						if (!PED::IS_PED_INJURED(Local_1070[8 /*14*/]))
						{
							if (PED::IS_PED_BEING_JACKED(Local_1070[8 /*14*/]))
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 36:
					Local_687[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
					{
						if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1070[2 /*14*/], 1) > 20f)
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 38:
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1068.804f, -1672.535f, 1.794577f, -1129.459f, -1588.839f, 18.69813f, 42.9375f, 0, 1, 0))
					{
						Local_687[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 39:
					switch (Local_687[iVar3 /*7*/].f_4)
					{
						case 0:
							Local_687[iVar3 /*7*/].f_5 = MISC::GET_GAME_TIMER() + 15000;
							Local_687[iVar3 /*7*/].f_4++;
							break;
						
						case 1:
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								Local_687[iVar3 /*7*/].f_4++;
							}
							else if (MISC::GET_GAME_TIMER() > Local_687[iVar3 /*7*/].f_5)
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
							}
							break;
					}
					break;
				
				case 40:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						if (func_283(30) && func_283(38))
						{
							if (((func_283(13) || func_283(14)) || func_283(36)) || func_283(12))
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 37:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						if (!PED::IS_PED_INJURED(Local_1070[8 /*14*/]))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[4 /*2*/], 0))
							{
								if (!PED::IS_PED_IN_VEHICLE(Local_1070[8 /*14*/], Local_1449[4 /*2*/], 0))
								{
									Local_687[iVar3 /*7*/].f_2 = 1;
								}
							}
						}
						else
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 145:
					if (!Local_687[iVar3 /*7*/].f_2)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[4 /*2*/], 0))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1449[4 /*2*/], 0))
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 154:
					Local_687[iVar3 /*7*/].f_2 = 0;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[4 /*2*/], 0))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1449[4 /*2*/], 0))
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 155:
					Local_687[iVar3 /*7*/].f_2 = 0;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[4 /*2*/], 0))
					{
						if (GlobalFunc_713(Local_1449[4 /*2*/], -12.81f, -1402.07f, 28.32f, 1) > 18f)
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 138:
					Local_687[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_1070[2 /*14*/], 0))
						{
							iVar27 = PED::GET_VEHICLE_PED_IS_USING(Local_1070[2 /*14*/]);
							if (PED::IS_PED_SITTING_IN_VEHICLE(Local_1070[2 /*14*/], iVar27))
							{
								if (GlobalFunc_2234(Local_1070[2 /*14*/], iVar27) != -1)
								{
									if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar27))
									{
										if (GlobalFunc_2234(PLAYER::PLAYER_PED_ID(), iVar27) == -1)
										{
											Local_687[iVar3 /*7*/].f_2 = 1;
										}
									}
								}
							}
						}
					}
					break;
				
				case 139:
					Local_687[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_1070[2 /*14*/], 0))
						{
							iVar28 = PED::GET_VEHICLE_PED_IS_USING(Local_1070[2 /*14*/]);
							if (PED::IS_PED_SITTING_IN_VEHICLE(Local_1070[2 /*14*/], iVar28))
							{
								if (GlobalFunc_2234(Local_1070[2 /*14*/], iVar28) != -1)
								{
									if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar28, 0))
									{
										Local_687[iVar3 /*7*/].f_2 = 1;
									}
								}
							}
						}
					}
					break;
				
				case 141:
					Local_687[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_1070[2 /*14*/], 1))
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 143:
					Local_687[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_1070[2 /*14*/], 0))
						{
							iVar29 = PED::GET_VEHICLE_PED_IS_IN(Local_1070[2 /*14*/], 0);
							if (PED::IS_PED_SITTING_IN_VEHICLE(Local_1070[2 /*14*/], iVar29))
							{
								if (GlobalFunc_2234(Local_1070[2 /*14*/], iVar29) == -1)
								{
									Local_687[iVar3 /*7*/].f_2 = 1;
								}
							}
							if (Local_1449[8 /*2*/] != iVar29)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_1449[8 /*2*/]))
								{
									if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_1449[8 /*2*/]) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_1449[8 /*2*/], 0))
									{
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1449[8 /*2*/], 1, 1);
									}
									ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1449[8 /*2*/]));
								}
								Local_1449[8 /*2*/] = iVar29;
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[8 /*2*/], 0))
								{
									if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_1449[8 /*2*/]) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_1449[8 /*2*/], 0))
									{
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1449[8 /*2*/], 1, 1);
									}
									VEHICLE::_0xBE5C1255A1830FF5(Local_1449[8 /*2*/], 1);
								}
							}
						}
					}
					break;
				
				case 146:
					Local_687[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
					{
						if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_1070[2 /*14*/]))
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
						if (((TASK::GET_SCRIPT_TASK_STATUS(Local_1070[2 /*14*/], 355471868) == 1 || TASK::GET_SCRIPT_TASK_STATUS(Local_1070[2 /*14*/], 355471868) == 2) || TASK::GET_SCRIPT_TASK_STATUS(Local_1070[2 /*14*/], -1794415470) == 1) || TASK::GET_SCRIPT_TASK_STATUS(Local_1070[2 /*14*/], -1794415470) == 2)
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 144:
					Local_687[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
					{
						if ((TASK::GET_SCRIPT_TASK_STATUS(Local_1070[2 /*14*/], 1435919172) == 7 || TASK::GET_SCRIPT_TASK_STATUS(Local_1070[2 /*14*/], 1435919172) == 3) || TASK::GET_SCRIPT_TASK_STATUS(Local_1070[2 /*14*/], -1146898486) == 1)
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 142:
					Local_687[iVar3 /*7*/].f_2 = 0;
					if (ENTITY::DOES_ENTITY_EXIST(Local_1449[8 /*2*/]))
					{
						if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[8 /*2*/], 0) || func_246(7, 118))
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
						else if (ENTITY::IS_ENTITY_UPSIDEDOWN(Local_1449[8 /*2*/]))
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[8 /*2*/], 0))
						{
							iVar30 = ENTITY::GET_ENTITY_MODEL(Local_1449[8 /*2*/]);
							if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar30) || VEHICLE::IS_THIS_MODEL_A_HELI(iVar30))
							{
								Local_687[iVar3 /*7*/].f_2 = 1;
							}
						}
					}
					break;
				
				case 147:
					Local_687[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
					{
						uVar31 = PED::GET_VEHICLE_PED_IS_TRYING_TO_ENTER(Local_1070[2 /*14*/]);
					}
					iVar32 = uVar31;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar32, 0))
					{
						if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
						{
							if (Local_687[iVar3 /*7*/].f_6 == 0f)
							{
								Local_687[iVar3 /*7*/].f_6 = GlobalFunc_156(Local_1070[2 /*14*/], iVar32, 1);
							}
							else
							{
								if (GlobalFunc_156(Local_1070[2 /*14*/], iVar32, 1) > Local_687[iVar3 /*7*/].f_6)
								{
									Local_687[iVar3 /*7*/].f_5 = (Local_687[iVar3 /*7*/].f_5 + SYSTEM::FLOOR((SYSTEM::TIMESTEP() * 1000f)));
									Local_687[iVar3 /*7*/].f_6 = GlobalFunc_156(Local_1070[2 /*14*/], iVar32, 1);
								}
								else
								{
									Local_687[iVar3 /*7*/].f_6 = GlobalFunc_156(Local_1070[2 /*14*/], iVar32, 1);
									Local_687[iVar3 /*7*/].f_5 = 0;
								}
								if (Local_687[iVar3 /*7*/].f_5 > 4000)
								{
									Local_687[iVar3 /*7*/].f_2 = 1;
								}
							}
						}
					}
					else
					{
						Local_687[iVar3 /*7*/].f_6 = 0f;
						Local_687[iVar3 /*7*/].f_5 = 0;
					}
					break;
				
				case 148:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[4 /*2*/], 0))
					{
						switch (Local_687[iVar3 /*7*/].f_4)
						{
							case 0:
								VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_1449[4 /*2*/]);
								Local_687[iVar3 /*7*/].f_4++;
								break;
							
							case 1:
								if (ENTITY::IS_ENTITY_UPSIDEDOWN(Local_1449[4 /*2*/]))
								{
									Local_687[iVar3 /*7*/].f_2 = 1;
								}
								break;
							}
					}
					break;
				
				case 149:
					Local_687[iVar3 /*7*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
					{
						if (GlobalFunc_156(Local_1070[2 /*14*/], PLAYER::PLAYER_PED_ID(), 1) > 10f)
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 150:
					if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
					{
						if (GlobalFunc_156(Local_1070[2 /*14*/], PLAYER::PLAYER_PED_ID(), 1) > 100f)
						{
							Local_687[iVar3 /*7*/].f_2 = 1;
						}
					}
					break;
				
				case 151:
					if (func_427(1, 26))
					{
						Local_687[iVar3 /*7*/].f_2 = 1;
					}
					break;
				
				case 153:
					switch (Local_687[iVar3 /*7*/].f_4)
					{
						case 0:
							if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
							{
								if (GlobalFunc_713(Local_1070[2 /*14*/], -4.03f, -1401.22f, 28.28f, 1) < 5f)
								{
									Local_687[iVar3 /*7*/].f_4++;
								}
							}
							break;
						
						case 1:
							if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
							{
								Local_687[iVar3 /*7*/].f_2 = 0;
								if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1070[2 /*14*/], 1) < 8f)
								{
									Local_687[iVar3 /*7*/].f_2 = 1;
								}
							}
							break;
					}
					break;
				}
		}
		iVar3++;
	}
}

int func_500(int iParam0, int iParam1)//Position - 0x4EBB8
{
	if (Local_139[iParam0 /*6*/] == iParam1)
	{
		if (Local_139[iParam0 /*6*/].f_2 == 1)
		{
			return 1;
		}
	}
	return 0;
}


int func_502()//Position - 0x4EC17
{
	int iVar0;
	
	if (iLocal_1062)
	{
		iLocal_1062 = 0;
		iLocal_1063 = 0;
		iVar0 = 0;
		while (iVar0 < Local_1070)
		{
			if (!PED::IS_PED_INJURED(Local_1070[iVar0 /*14*/]))
			{
				if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(Local_1070[iVar0 /*14*/]) == iLocal_1472)
				{
					iLocal_1063++;
				}
			}
			iVar0++;
		}
	}
	return iLocal_1063;
}

int func_503(int iParam0, bool bParam1)//Position - 0x4EC6C
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (((((((((((((((((((((((((((((((((((func_504(iParam0, joaat("weapon_pistol")) || func_504(iParam0, joaat("weapon_combatpistol"))) || func_504(iParam0, joaat("weapon_appistol"))) || func_504(iParam0, joaat("weapon_snspistol"))) || func_504(iParam0, joaat("weapon_heavypistol"))) || func_504(iParam0, joaat("weapon_marksmanpistol"))) || func_504(iParam0, joaat("weapon_microsmg"))) || func_504(iParam0, joaat("weapon_smg"))) || func_504(iParam0, joaat("weapon_combatpdw"))) || func_504(iParam0, joaat("weapon_assaultrifle"))) || func_504(iParam0, joaat("weapon_carbinerifle"))) || func_504(iParam0, joaat("weapon_specialcarbine"))) || func_504(iParam0, joaat("weapon_advancedrifle"))) || func_504(iParam0, joaat("weapon_bullpuprifle"))) || func_504(iParam0, joaat("weapon_gusenberg"))) || func_504(iParam0, joaat("weapon_musket"))) || func_504(iParam0, joaat("weapon_mg"))) || func_504(iParam0, joaat("weapon_combatmg"))) || func_504(iParam0, joaat("weapon_pumpshotgun"))) || func_504(iParam0, joaat("weapon_sawnoffshotgun"))) || func_504(iParam0, joaat("weapon_assaultshotgun"))) || func_504(iParam0, joaat("weapon_heavyshotgun"))) || func_504(iParam0, joaat("weapon_sniperrifle"))) || func_504(iParam0, joaat("weapon_heavysniper"))) || func_504(iParam0, joaat("weapon_remotesniper"))) || func_504(iParam0, joaat("weapon_marksmanrifle"))) || func_504(iParam0, joaat("weapon_grenadelauncher"))) || func_504(iParam0, joaat("weapon_grenadelauncher_smoke"))) || func_504(iParam0, joaat("weapon_rpg"))) || func_504(iParam0, joaat("weapon_minigun"))) || func_504(iParam0, joaat("weapon_hominglauncher"))) || func_504(iParam0, joaat("weapon_stungun"))) || func_504(iParam0, joaat("weapon_petrolcan"))) || func_504(iParam0, joaat("weapon_digiscanner"))) || func_504(iParam0, joaat("weapon_firework"))) || func_504(iParam0, joaat("weapon_flaregun")))
	{
		return 1;
	}
	if (bParam1)
	{
		if ((((func_504(iParam0, joaat("weapon_grenade")) || func_504(iParam0, joaat("weapon_smokegrenade"))) || func_504(iParam0, joaat("weapon_stickybomb"))) || func_504(iParam0, joaat("weapon_molotov"))) || func_504(iParam0, joaat("weapon_proxmine")))
		{
			return 1;
		}
	}
	return 0;
}

int func_504(int iParam0, int iParam1)//Position - 0x4EF42
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (WEAPON::IS_WEAPON_VALID(iParam1))
		{
			if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iParam1, 0))
			{
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iParam1) > 0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}



int func_507(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x4EFE4
{
	struct<3> Var0;
	float fVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		Var0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
		Var0 = { GlobalFunc_107(Var0) };
		Var0 = { Var0 * Vector(fParam3, fParam3, fParam3) };
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1) + Var0, fParam4, 0, 0, 0))
		{
			fVar3 = GlobalFunc_156(iParam0, iParam1, 1);
			if ((fVar3 / ENTITY::GET_ENTITY_SPEED(iParam0)) < fParam5 || fParam5 <= 0f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_508()//Position - 0x4F06E
{
	func_499(5, 45);
	RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	func_328(0, 92, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(1, 93, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(2, 94, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(3, 95, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(4, 96, 0, 2, 40, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(5, 98, 0, 2, 35, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(6, 99, 0, 2, 37, 5, 35, 1, 0, 1, 0, 1, 0);
	func_328(7, 100, 0, 3, 37, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(8, 101, 0, 2, 6, 5, 37, 1, 0, 1, 0, 1, 0);
	func_328(9, 102, 0, 2, 37, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(10, 103, 1, 3, 30, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(11, 104, 0, 2, 30, 5, 36, 4, 33, 1, 0, 1, 0);
	func_328(12, 97, 0, 2, 34, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(13, 15, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(14, 8, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(15, 81, 0, 2, 41, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(16, 88, 0, 2, 37, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(17, 89, 0, 2, 38, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(18, 90, 0, 2, 6, 1, 0, 1, 0, 1, 0, 1, 0);
	func_426(0, 19, 0, 0, 1, 0, 1, 0);
	func_426(1, 23, 0, 0, 1, 0, 1, 0);
	func_426(2, 20, 0, 0, 1, 0, 1, 0);
	func_426(3, 21, 2, 6, 1, 0, 1, 0);
	func_426(4, 22, 3, 6, 1, 0, 1, 0);
	func_286(0, 63, 0, 0, 1, 0, 1, 0, 1, 0);
	func_286(1, 1, 0, 0, 1, 0, 1, 0, 1, 0);
	func_286(2, 68, 2, 15, 4, 31, 1, 0, 1, 0);
	func_286(3, 7, 2, 17, 6, 12, 4, 31, 1, 0);
	func_286(4, 64, 2, 16, 4, 31, 1, 0, 1, 0);
	func_286(5, 65, 2, 13, 5, 7, 1, 0, 1, 0);
	func_286(6, 66, 0, 0, 1, 0, 1, 0, 1, 0);
	func_286(7, 67, 2, 39, 1, 0, 1, 0, 1, 0);
	func_247(8, 0, 0, 1, 0);
	func_247(6, 0, 0, 1, 0);
	func_247(9, 0, 0, 1, 0);
	if (func_283(37))
	{
		func_535(9);
		GlobalFunc_4948(&uLocal_2229, 0, 0);
		return 1;
	}
	return 0;
}

int func_509()//Position - 0x4F2E0
{
	iLocal_1062 = 1;
	func_499(90, 136);
	func_328(0, 66, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(1, 65, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(2, 54, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(8, 63, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(28, 82, 0, 2, 124, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(29, 83, 0, 2, 117, 4, 120, 4, 127, 1, 0, 1, 0);
	func_328(31, 85, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(32, 86, 0, 2, 128, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(33, 87, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(34, 91, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(3, 52, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_511(7, 53, 3, 52, 2, 98, 1, 0, 1, 0);
	func_511(10, 55, 7, 53, 2, 98, 4, 99, 6, 96);
	func_328(12, 58, 0, 2, 102, 4, 108, 1, 0, 1, 0, 1, 0);
	func_328(13, 56, 0, 2, 106, 4, 107, 1, 0, 1, 0, 1, 0);
	func_328(35, 57, 0, 2, 101, 5, 110, 1, 0, 1, 0, 1, 0);
	func_328(14, 59, 0, 2, 110, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(20, 60, 0, 2, 110, 4, 113, 1, 0, 1, 0, 1, 0);
	func_328(30, 61, 0, 2, 117, 5, 121, 1, 0, 1, 0, 1, 0);
	func_328(27, 62, 0, 2, 121, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(4, 67, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(5, 68, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(6, 69, 0, 2, 92, 4, 97, 6, 96, 1, 0, 1, 0);
	func_328(9, 70, 0, 2, 98, 4, 97, 6, 96, 1, 0, 1, 0);
	func_328(11, 71, 0, 2, 98, 4, 99, 6, 96, 1, 0, 1, 0);
	func_328(15, 72, 0, 2, 109, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(16, 73, 0, 2, 110, 6, 111, 1, 0, 1, 0, 1, 0);
	func_328(17, 74, 0, 2, 110, 4, 112, 6, 111, 1, 0, 1, 0);
	func_328(18, 75, 0, 2, 110, 4, 113, 6, 111, 1, 0, 1, 0);
	func_328(19, 76, 0, 2, 110, 4, 114, 6, 111, 1, 0, 1, 0);
	func_328(21, 77, 0, 2, 110, 6, 111, 1, 0, 1, 0, 1, 0);
	func_328(22, 78, 0, 2, 110, 4, 118, 4, 115, 8, 119, 4, 118);
	func_328(23, 84, 0, 2, 119, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(24, 79, 0, 2, 117, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(25, 80, 0, 2, 118, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(26, 81, 0, 2, 134, 1, 0, 1, 0, 1, 0, 1, 0);
	func_286(2, 43, 3, 94, 1, 0, 1, 0, 1, 0);
	func_286(0, 40, 0, 0, 1, 0, 1, 0, 1, 0);
	func_286(1, 41, 2, 91, 4, 94, 1, 0, 1, 0);
	func_286(3, 42, 2, 94, 5, 93, 4, 95, 1, 0);
	func_286(4, 44, 2, 98, 1, 0, 1, 0, 1, 0);
	func_286(5, 48, 2, 92, 5, 103, 5, 121, 1, 0);
	func_286(6, 46, 2, 104, 5, 101, 5, 109, 5, 130);
	func_286(7, 47, 2, 101, 5, 109, 5, 130, 1, 0);
	func_286(8, 45, 2, 105, 5, 96, 5, 101, 5, 110);
	func_286(9, 49, 2, 101, 4, 108, 1, 0, 1, 0);
	func_286(23, 50, 2, 110, 1, 0, 1, 0, 1, 0);
	func_286(10, 51, 2, 110, 4, 116, 1, 0, 1, 0);
	func_286(11, 52, 2, 112, 5, 113, 1, 0, 1, 0);
	func_286(12, 53, 2, 113, 5, 114, 1, 0, 1, 0);
	func_286(13, 54, 2, 114, 5, 115, 1, 0, 1, 0);
	func_286(14, 55, 2, 117, 1, 0, 1, 0, 1, 0);
	func_286(15, 56, 2, 119, 1, 0, 1, 0, 1, 0);
	func_286(16, 57, 2, 127, 5, 121, 1, 0, 1, 0);
	func_286(17, 58, 2, 121, 5, 133, 1, 0, 1, 0);
	func_286(18, 60, 2, 122, 1, 0, 1, 0, 1, 0);
	func_286(19, 61, 2, 131, 4, 130, 1, 0, 1, 0);
	func_286(20, 62, 2, 132, 5, 121, 1, 0, 1, 0);
	func_286(21, 62, 2, 133, 4, 121, 5, 135, 1, 0);
	func_284(22, 59, 17, 58, 0, 0, 1, 0, 1, 0, 1, 0);
	func_426(0, 11, 0, 0, 1, 0, 1, 0);
	func_426(1, 12, 2, 92, 4, 94, 1, 0);
	func_426(2, 13, 2, 94, 1, 0, 1, 0);
	func_426(3, 15, 2, 125, 4, 126, 1, 0);
	func_426(4, 16, 2, 127, 1, 0, 1, 0);
	func_510(5, 14, 2, 13, 3, 126, 1, 0, 1, 0);
	func_426(6, 8, 3, 135, 1, 0, 1, 0);
	func_426(7, 17, 2, 129, 1, 0, 1, 0);
	func_247(6, 0, 0, 1, 0);
	func_247(9, 0, 0, 1, 0);
	if (func_246(27, 62))
	{
		return 1;
	}
	return 0;
}

void func_510(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x4F7DA
{
	if (Local_291[iParam0 /*4*/] != iParam1)
	{
		Local_291[iParam0 /*4*/] = iParam1;
		Local_291[iParam0 /*4*/].f_1 = 0;
		Local_291[iParam0 /*4*/].f_2 = 0;
		Local_291[iParam0 /*4*/].f_3 = 0;
	}
	if (Local_291[iParam0 /*4*/].f_1 == 0)
	{
		if (Local_291[iParam2 /*4*/].f_1)
		{
			iParam3 = iParam3;
			func_426(iParam0, iParam1, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9);
		}
	}
}

void func_511(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x4F846
{
	if (Local_324[iParam0 /*10*/] != iParam1 || Local_324[iParam0 /*10*/].f_1 == 0)
	{
		Local_324[iParam0 /*10*/] = iParam1;
		Local_324[iParam0 /*10*/].f_1 = 1;
		Local_324[iParam0 /*10*/].f_2 = 0;
		Local_324[iParam0 /*10*/].f_3 = 0;
		Local_324[iParam0 /*10*/].f_6 = 0;
		Local_324[iParam0 /*10*/].f_4 = 0;
		Local_324[iParam0 /*10*/].f_7 = 0;
		Local_324[iParam0 /*10*/].f_8 = 0;
		Local_324[iParam0 /*10*/].f_9 = 0f;
	}
	if (Local_324[iParam0 /*10*/].f_3 == 0)
	{
		if (Local_324[iParam2 /*10*/].f_3)
		{
			iParam3 = iParam3;
			func_328(iParam0, iParam1, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 1, 0, 1, 0);
		}
	}
}

int func_512()//Position - 0x4F8FB
{
	func_328(1, 51, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	switch (iLocal_1470)
	{
		case 0:
			func_535(6);
			PED::SET_CREATE_RANDOM_COPS(0);
			func_242();
			if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
			{
				PED::CLEAR_PED_ALTERNATE_WALK_ANIM(Local_1070[2 /*14*/], -1056964608);
			}
			if (!CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				CUTSCENE::REQUEST_CUTSCENE("Arm_2_mcs_4", 8);
			}
			iLocal_1470 = 1;
			break;
		
		case 1:
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", PLAYER::PLAYER_PED_ID(), 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 0, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 1, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 2, 2, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 3, 2, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 4, 3, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 5, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 6, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 7, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 8, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("LAMAR", 9, 0, 0, 0);
			}
			if (GlobalFunc_Has_Cutscene_Loaded())
			{
				func_407("ARM2_OPEN_DOOR", 0, "ARM2_FIGHT_START");
				iLocal_1470 = 2;
			}
			break;
		
		case 2:
			if (GlobalFunc_Has_Cutscene_Loaded())
			{
				GlobalFunc_8316(1, 1, 1, 0);
				if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
				{
				}
				if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Local_1070[2 /*14*/], joaat("weapon_microsmg"), 2000, 1, 1);
					WEAPON::SET_CURRENT_PED_WEAPON(Local_1070[2 /*14*/], joaat("weapon_microsmg"), 1);
					iLocal_1953 = GlobalFunc_7936(Local_1070[2 /*14*/], 1, 0, 0, 0, 0);
				}
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Franklins_weapon", 2, WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_pistol")), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1953, "Lamars_weapon", 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Mexgoon_1", 2, joaat("g_m_y_mexgoon_01"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1070[2 /*14*/], "Lamar", 0, 0, 0);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_2_SEARCH_FOR_BIKE"))
				{
					AUDIO::STOP_AUDIO_SCENE("ARM_2_SEARCH_FOR_BIKE");
				}
				CUTSCENE::START_CUTSCENE(16);
				iLocal_113 = joaat("weapon_unarmed");
				WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_113, 1);
				if (HUD::DOES_BLIP_EXIST(uLocal_2032))
				{
					HUD::REMOVE_BLIP(&uLocal_2032);
				}
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				iLocal_1470 = 3;
			}
			break;
		
		case 3:
		case 4:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1916))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Mexgoon_1", 0)))
				{
					iLocal_1916 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Mexgoon_1", 0));
				}
			}
			if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lamar", 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Local_1070[2 /*14*/], joaat("weapon_microsmg"), 1);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lamars_weapon", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1953))
				{
					OBJECT::DELETE_OBJECT(&iLocal_1953);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(Local_1070[2 /*14*/], WEAPON::GET_BEST_PED_WEAPON(Local_1070[2 /*14*/], 0), 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_1916))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Mexgoon_1", joaat("g_m_y_mexgoon_01")))
				{
					ENTITY::SET_ENTITY_HEALTH(iLocal_1916, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklins_weapon", 0))
			{
				iLocal_2222 = 0;
				uLocal_1981 = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_weapon_pistol"), -1075.798f, -1675.717f, 3.5903f, -90f, 0f, -15f, 0, 145, 2, 1, 0);
				if (!func_503(PLAYER::PLAYER_PED_ID(), 0))
				{
					uLocal_2029 = GlobalFunc_5666(uLocal_1981);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -1077.508f, -1677.057f, 3.5752f, 1f, 20000, 0.25f, 1, 40000f);
			}
			func_328(0, 50, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
			if (!CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
			}
			else
			{
				iLocal_1470 = 4;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				RECORDING::_0x81CBAE94390F9F89();
				if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_1070[2 /*14*/]);
				}
				GlobalFunc_8316(0, 1, 1, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(-1069.323f, -1668.118f, 3.055831f, 8.5f, 0, 0, 0, 0, 0);
				CUTSCENE::REMOVE_CUTSCENE();
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_113, 0);
				return 1;
			}
			break;
	}
	return 0;
}




int func_516()//Position - 0x4FE6C
{
	func_499(42, 89);
	if (iLocal_2275 == 0)
	{
		func_328(0, 17, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
		func_328(26, 16, 0, 2, 47, 1, 0, 1, 0, 1, 0, 1, 0);
		func_328(1, 19, 0, 2, 48, 1, 0, 1, 0, 1, 0, 1, 0);
		func_328(2, 20, 1, 2, 49, 5, 53, 1, 0, 1, 0, 1, 0);
		func_328(3, 21, 0, 2, 50, 5, 53, 5, 64, 1, 0, 1, 0);
		func_328(4, 22, 0, 2, 53, 4, 49, 1, 0, 1, 0, 1, 0);
		func_328(5, 23, 0, 2, 53, 6, 67, 1, 0, 1, 0, 1, 0);
		func_328(6, 24, 0, 2, 58, 5, 55, 5, 52, 1, 0, 1, 0);
		func_328(7, 25, 0, 2, 61, 5, 71, 1, 0, 1, 0, 1, 0);
		func_328(8, 26, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
		func_328(9, 27, 0, 2, 62, 5, 64, 1, 0, 1, 0, 1, 0);
		func_328(11, 29, 0, 2, 64, 1, 0, 1, 0, 1, 0, 1, 0);
		func_328(12, 30, 0, 2, 68, 5, 64, 1, 0, 1, 0, 1, 0);
		func_328(13, 31, 0, 2, 64, 1, 0, 1, 0, 1, 0, 1, 0);
		func_328(14, 32, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
		func_328(16, 35, 0, 2, 73, 1, 0, 1, 0, 1, 0, 1, 0);
		func_328(17, 37, 0, 2, 72, 1, 0, 1, 0, 1, 0, 1, 0);
		func_328(18, 49, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
		func_328(20, 34, 0, 2, 73, 1, 0, 1, 0, 1, 0, 1, 0);
		func_328(21, 38, 0, 2, 78, 4, 82, 1, 0, 1, 0, 1, 0);
		func_328(22, 39, 0, 2, 79, 4, 82, 1, 0, 1, 0, 1, 0);
		func_328(23, 41, 1, 3, 80, 3, 82, 1, 0, 1, 0, 1, 0);
		func_328(24, 42, 0, 2, 66, 6, 51, 1, 0, 1, 0, 1, 0);
		func_328(25, 40, 0, 2, 80, 4, 82, 1, 0, 1, 0, 1, 0);
		func_328(27, 43, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
		func_328(28, 44, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
		func_328(29, 47, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
		func_328(30, 45, 0, 2, 73, 1, 0, 1, 0, 1, 0, 1, 0);
		func_328(31, 46, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
		func_328(10, 48, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
		func_286(0, 13, 0, 0, 1, 0, 1, 0, 1, 0);
		func_284(1, 14, 0, 13, 2, 54, 5, 55, 5, 49, 5, 59);
		func_286(2, 15, 2, 48, 1, 0, 1, 0, 1, 0);
		func_286(3, 16, 2, 57, 5, 53, 4, 88, 1, 0);
		func_286(4, 17, 2, 52, 5, 53, 1, 0, 1, 0);
		func_286(5, 18, 2, 53, 5, 61, 1, 0, 1, 0);
		func_286(6, 19, 0, 0, 1, 0, 1, 0, 1, 0);
		func_286(7, 20, 2, 61, 5, 71, 5, 74, 1, 0);
		func_284(23, 39, 7, 20, 0, 0, 1, 0, 1, 0, 1, 0);
		func_286(8, 21, 2, 64, 1, 0, 1, 0, 1, 0);
		func_286(9, 22, 2, 64, 1, 0, 1, 0, 1, 0);
		func_286(10, 24, 7, 64, 1, 0, 1, 0, 1, 0);
		func_286(11, 25, 3, 61, 5, 64, 1, 0, 1, 0);
		func_286(12, 27, 2, 72, 5, 70, 5, 64, 1, 0);
		func_286(13, 28, 2, 73, 5, 71, 1, 0, 1, 0);
		func_286(14, 29, 2, 75, 1, 0, 1, 0, 1, 0);
		func_286(15, 30, 2, 76, 1, 0, 1, 0, 1, 0);
		func_286(17, 33, 2, 77, 1, 0, 1, 0, 1, 0);
		func_286(18, 34, 2, 81, 1, 0, 1, 0, 1, 0);
		func_286(20, 36, 2, 73, 1, 0, 1, 0, 1, 0);
		func_286(21, 23, 2, 43, 1, 0, 1, 0, 1, 0);
		func_286(22, 37, 2, 87, 1, 0, 1, 0, 1, 0);
		func_286(24, 38, 2, 86, 1, 0, 1, 0, 1, 0);
		func_426(0, 6, 2, 56, 1, 0, 1, 0);
		func_426(1, 7, 2, 73, 1, 0, 1, 0);
		func_426(2, 9, 0, 0, 1, 0, 1, 0);
		func_426(3, 8, 0, 0, 1, 0, 1, 0);
		func_426(4, 10, 2, 55, 5, 59, 1, 0);
	}
	else
	{
		func_328(15, 14, 0, 2, 46, 1, 0, 1, 0, 1, 0, 1, 0);
		func_286(16, 12, 2, 46, 1, 0, 1, 0, 1, 0);
	}
	func_247(1, 2, 84, 1, 0);
	func_247(3, 2, 69, 1, 0);
	func_247(4, 0, 0, 1, 0);
	func_247(6, 0, 0, 1, 0);
	func_247(2, 2, 43, 1, 0);
	func_247(9, 0, 0, 1, 0);
	func_247(12, 2, 46, 1, 0);
	func_247(15, 0, 0, 1, 0);
	if (func_246(25, 40))
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_2028))
		{
			HUD::REMOVE_BLIP(&uLocal_2028);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_2030))
		{
			HUD::REMOVE_BLIP(&uLocal_2030);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_2032))
		{
			HUD::REMOVE_BLIP(&uLocal_2032);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_2031))
		{
			HUD::REMOVE_BLIP(&uLocal_2031);
		}
		GlobalFunc_4935();
		HUD::CLEAR_PRINTS();
		func_242();
		return 1;
	}
	return 0;
}

int func_517()//Position - 0x5035B
{
	func_499(1, 29);
	func_426(0, 1, 3, 26, 1, 0, 1, 0);
	func_426(1, 5, 0, 0, 1, 0, 1, 0);
	func_328(0, 3, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(11, 4, 1, 2, 23, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(2, 5, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(3, 6, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(4, 7, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(5, 8, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(6, 9, 0, 2, 11, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(7, 10, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(8, 15, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(9, 11, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(10, 12, 0, 2, 20, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(1, 13, 0, 2, 20, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(12, 14, 0, 2, 24, 6, 25, 1, 0, 1, 0, 1, 0);
	func_328(13, 49, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(14, 35, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_328(15, 36, 0, 2, 4, 1, 0, 1, 0, 1, 0, 1, 0);
	func_286(0, 2, 0, 0, 1, 0, 1, 0, 1, 0);
	func_286(1, 1, 0, 0, 1, 0, 1, 0, 1, 0);
	func_286(2, 10, 0, 0, 1, 0, 1, 0, 1, 0);
	func_286(3, 5, 2, 18, 4, 2, 1, 0, 1, 0);
	func_286(4, 6, 2, 15, 4, 2, 1, 0, 1, 0);
	func_286(5, 7, 2, 17, 6, 12, 4, 2, 1, 0);
	func_286(6, 8, 2, 16, 4, 2, 1, 0, 1, 0);
	func_286(8, 3, 2, 13, 5, 7, 1, 0, 1, 0);
	func_286(9, 11, 2, 23, 1, 0, 1, 0, 1, 0);
	func_286(10, 12, 2, 24, 6, 25, 1, 0, 1, 0);
	func_247(6, 0, 0, 1, 0);
	func_247(5, 2, 21, 1, 0);
	func_247(9, 0, 0, 1, 0);
	func_247(10, 0, 0, 1, 0);
	func_247(14, 2, 27, 1, 0);
	func_247(12, 2, 25, 1, 0);
	func_247(2, 2, 28, 1, 0);
	if (func_427(0, 1))
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_2028))
		{
			HUD::CLEAR_GPS_MULTI_ROUTE();
			HUD::REMOVE_BLIP(&uLocal_2028);
		}
		GlobalFunc_629(&Local_1955);
		GlobalFunc_5652(&Local_1955, 1, 0);
		uLocal_2028 = GlobalFunc_7056(Local_1070[2 /*14*/], 0, 0);
		if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
		{
			PED::REMOVE_PED_FROM_GROUP(Local_1070[2 /*14*/]);
		}
		GlobalFunc_4935();
		return 1;
	}
	return 0;
}

void func_518(int iParam0)//Position - 0x505E4
{
	int iVar0;
	
	if (iLocal_1066 >= 2 && iLocal_1066 < 6)
	{
		iParam0 = 6;
	}
	else if (iLocal_1066 >= 7 && iLocal_1066 <= 8)
	{
		iParam0 = 9;
	}
	else
	{
		iVar0 = iLocal_1066;
		iVar0++;
	}
	if (iParam0 == 14)
	{
		iLocal_1066 = iVar0;
	}
	else
	{
		iLocal_1066 = iParam0;
	}
	func_522();
	func_521();
	func_520();
	func_519();
	iLocal_1470 = 0;
}

void func_519()//Position - 0x50651
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_139)
	{
		Local_139[iVar0 /*6*/] = 0;
		Local_139[iVar0 /*6*/].f_1 = 0;
		Local_139[iVar0 /*6*/].f_3 = 0;
		Local_139[iVar0 /*6*/].f_2 = 0;
		iVar0++;
	}
}

void func_520()//Position - 0x5068E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_291)
	{
		Local_291[iVar0 /*4*/] = 0;
		Local_291[iVar0 /*4*/].f_1 = 0;
		Local_291[iVar0 /*4*/].f_2 = 0;
		Local_291[iVar0 /*4*/].f_3 = 0;
		iVar0++;
	}
}

void func_521()//Position - 0x506D0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_324)
	{
		if (Local_324[iVar0 /*10*/].f_4)
		{
			Local_324[iVar0 /*10*/].f_1 = 1;
			Local_324[iVar0 /*10*/].f_6 = 99;
			func_328(iVar0, Local_324[iVar0 /*10*/], 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
		}
		Local_324[iVar0 /*10*/] = 0;
		Local_324[iVar0 /*10*/].f_1 = 0;
		Local_324[iVar0 /*10*/].f_2 = 0;
		Local_324[iVar0 /*10*/].f_3 = 0;
		Local_324[iVar0 /*10*/].f_6 = 0;
		Local_324[iVar0 /*10*/].f_4 = 0;
		Local_324[iVar0 /*10*/].f_5 = 0;
		Local_324[iVar0 /*10*/].f_7 = 0;
		iVar0++;
	}
}

void func_522()//Position - 0x50773
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_687)
	{
		Local_687[iVar0 /*7*/] = 0;
		Local_687[iVar0 /*7*/].f_1 = 0;
		Local_687[iVar0 /*7*/].f_2 = 0;
		Local_687[iVar0 /*7*/].f_3 = 0;
		Local_687[iVar0 /*7*/].f_4 = 0;
		iVar0++;
	}
}

int func_523()//Position - 0x507BF
{
	switch (iLocal_1470)
	{
		case 0:
			sLocal_1954 = "Armenian_2_int";
			func_242();
			CUTSCENE::REQUEST_CUTSCENE(sLocal_1954, 8);
			iLocal_1470 = 1002;
			break;
		
		case 1002:
			if (GlobalFunc_Has_Cutscene_Loaded())
			{
				func_146(10, 2, 0);
				func_110(10);
				func_146(11, 12, 0);
				if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
				{
					Local_1070[3 /*14*/] = Global_86864.f_9[0];
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1070[3 /*14*/], 1, 1);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1070[3 /*14*/], "Siemon", 0, joaat("ig_siemonyetarian"), 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Siemon", 2, joaat("ig_siemonyetarian"), 0);
				}
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Lamar", 2, iLocal_2033, 0);
				GlobalFunc_10617(97, 0);
				GlobalFunc_8316(1, 1, 1, 0);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				if (Global_87287)
				{
					GlobalFunc_5164();
				}
				func_535(1);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
				SYSTEM::SETTIMERB(0);
				CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(0);
				if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
				{
					if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
				}
				iLocal_1470 = 1005;
			}
			break;
		
		case 1004:
			if (func_25(10) && func_420(1))
			{
				CAM::STOP_GAMEPLAY_HINT(1);
				iLocal_1470++;
			}
			break;
		
		case 1005:
			CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(1);
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1070[2 /*14*/]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lamar", 0)))
				{
					Local_1070[2 /*14*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lamar", 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1070[3 /*14*/]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Siemon", 0)))
				{
					Local_1070[3 /*14*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Siemon", 0));
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				RECORDING::_0x81CBAE94390F9F89();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_1070[2 /*14*/]))
			{
				if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
				{
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lamar", 0))
					{
						func_524(&uLocal_1982, 0, 0, 2000, 0, 0, 0, 1);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[0 /*2*/], 0))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_1070[2 /*14*/], -25.945f, -1084.278f, 25.5736f, 1f, 20000, 0.1f, 8192, 40000f);
						}
						if (!PED::IS_PED_INJURED(Local_1070[2 /*14*/]))
						{
							PED::FORCE_PED_MOTION_STATE(Local_1070[2 /*14*/], -668482597, 0, 1, 0);
						}
						PED::SET_PED_COMPONENT_VARIATION(Local_1070[2 /*14*/], 1, 1, 0, 0);
						func_331(0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1070[2 /*14*/], 0);
						iLocal_1470++;
					}
				}
			}
			break;
		
		case 1006:
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				GlobalFunc_8316(0, 1, 1, 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[0 /*2*/], 0))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1449[0 /*2*/], 1, 1);
				}
				PED::REMOVE_SCENARIO_BLOCKING_AREAS();
				func_146(1, 9, 0);
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(25.85983f, -1098.932f, -43.78194f) - Vector(2.5625f, 6.75f, 9.75f), Vector(25.85983f, -1098.932f, -43.78194f) + Vector(2.5625f, 6.75f, 9.75f), 1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_524(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x50AD0
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
	GlobalFunc_8316(bParam1, 1, 0, 0);
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




void func_528()//Position - 0x50E0D
{
	int iVar0;
	
	if (iLocal_1066 >= 1 && iLocal_1066 <= 8)
	{
		iVar0 = 0;
		while (iVar0 < Local_1070)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_1070[iVar0 /*14*/]))
			{
				if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(Local_1070[iVar0 /*14*/]) == iLocal_1472)
				{
					if (PED::IS_PED_INJURED(Local_1070[iVar0 /*14*/]))
					{
						if (!Local_1070[iVar0 /*14*/].f_13)
						{
							Local_1070[iVar0 /*14*/].f_13 = 1;
							GlobalFunc_565(15, 1, 0);
						}
					}
					if (iLocal_1066 < 7)
					{
						GlobalFunc_661(Local_1070[iVar0 /*14*/], &(Local_1070[iVar0 /*14*/].f_5), -1, 0, 1, 0, -1082130432, 0);
					}
					else
					{
						GlobalFunc_661(Local_1070[iVar0 /*14*/], &(Local_1070[iVar0 /*14*/].f_5), -1, 0, 0, 0, -1082130432, 0);
					}
				}
			}
			iVar0++;
		}
	}
}



int func_531()//Position - 0x5109A
{
	if (iLocal_111)
	{
		if (func_532())
		{
			iLocal_111 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_532()//Position - 0x510BD
{
	int iVar0;
	
	iLocal_111 = 0;
	iVar0 = 0;
	while (iVar0 < Local_49.x)
	{
		if (Local_49[iVar0 /*3*/].f_2 == 2)
		{
			if (func_423(iVar0))
			{
				Local_49[iVar0 /*3*/].f_2 = 3;
				iLocal_112 = 0;
			}
		}
		else if (Local_49[iVar0 /*3*/].f_2 == 1 && !iLocal_112)
		{
			switch (iVar0)
			{
				case 0:
					STREAMING::REQUEST_MODEL(iLocal_2033);
					break;
				
				case 1:
					STREAMING::REQUEST_MODEL(iLocal_2218);
					STREAMING::REQUEST_MODEL(iLocal_2219);
					break;
				
				case 2:
					WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_pistol"), 31, 0);
					WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_microsmg"), 31, 0);
					WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_pumpshotgun"), 31, 0);
					break;
				
				case 3:
					STREAMING::REQUEST_MODEL(iLocal_2217);
					break;
				
				case 4:
					STREAMING::REQUEST_MODEL(joaat("bagger"));
					break;
				
				case 5:
					STREAMING::REQUEST_ANIM_DICT("MISSARMENIAN2");
					break;
				
				case 6:
					STREAMING::REQUEST_ANIM_DICT("missarmenian2_mcs_5");
					STREAMING::REQUEST_ANIM_DICT("reaction@points@");
					break;
				
				case 7:
					STREAMING::REQUEST_MODEL(joaat("bison"));
					break;
				
				case 8:
					STREAMING::REQUEST_MODEL(joaat("penumbra"));
					break;
				
				case 9:
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, sLocal_45);
					break;
				
				case 10:
					VEHICLE::REQUEST_VEHICLE_RECORDING(6, sLocal_45);
					VEHICLE::REQUEST_VEHICLE_RECORDING(11, sLocal_45);
					break;
				
				case 11:
					TASK::REQUEST_WAYPOINT_RECORDING("arm2_15");
					break;
				
				case 12:
					STREAMING::REQUEST_MODEL(joaat("prop_ld_test_01"));
					break;
				
				case 13:
					TASK::REQUEST_WAYPOINT_RECORDING("ARM2");
					break;
				
				case 14:
					TASK::REQUEST_WAYPOINT_RECORDING("ARM2_FIRE");
					break;
				
				case 15:
					STREAMING::REQUEST_ANIM_DICT("missarmenian2lamar_idles");
					break;
				
				case 16:
					break;
				
				case 17:
					STREAMING::REQUEST_MODEL(joaat("ig_siemonyetarian"));
					break;
				
				case 18:
					STREAMING::REQUEST_ANIM_DICT("missarmenian2lamar_in_cover");
					break;
				
				case 19:
					STREAMING::REQUEST_MODEL(joaat("prop_arm_gate_l"));
					break;
			}
			Local_49[iVar0 /*3*/].f_2 = 2;
			iLocal_112 = 1;
		}
		if (Local_49[iVar0 /*3*/].f_2 == 2 || Local_49[iVar0 /*3*/].f_2 == 1)
		{
			iLocal_111 = 1;
		}
		iVar0++;
	}
	if (!iLocal_111)
	{
		return 1;
	}
	return 0;
}



void func_535(int iParam0)//Position - 0x5134C
{
	iLocal_111 = 1;
	iLocal_112 = 0;
	iLocal_110 = iParam0;
	func_536(iParam0);
}

void func_536(int iParam0)//Position - 0x51364
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_49.x)
	{
		if (iParam0 >= Local_49[iVar0 /*3*/] && iParam0 < Local_49[iVar0 /*3*/].f_1)
		{
			Local_49[iVar0 /*3*/].f_2 = 1;
		}
		else if (Local_49[iVar0 /*3*/].f_2 == 2 || Local_49[iVar0 /*3*/].f_2 == 3)
		{
			switch (iVar0)
			{
				case 0:
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2033);
					break;
				
				case 1:
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2218);
					break;
				
				case 2:
					WEAPON::REMOVE_WEAPON_ASSET(joaat("weapon_pistol"));
					WEAPON::REMOVE_WEAPON_ASSET(joaat("weapon_microsmg"));
					WEAPON::REMOVE_WEAPON_ASSET(joaat("weapon_pumpshotgun"));
					break;
				
				case 3:
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2217);
					break;
				
				case 4:
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bagger"));
					break;
				
				case 5:
					STREAMING::REMOVE_ANIM_DICT("MISSARMENIAN2");
					break;
				
				case 6:
					STREAMING::REMOVE_ANIM_DICT("missarmenian2_mcs_5");
					STREAMING::REMOVE_ANIM_DICT("reaction@points@");
					break;
				
				case 7:
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bison"));
					break;
				
				case 8:
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("penumbra"));
					break;
				
				case 9:
					VEHICLE::REMOVE_VEHICLE_RECORDING(1, sLocal_45);
					break;
				
				case 10:
					VEHICLE::REMOVE_VEHICLE_RECORDING(6, sLocal_45);
					VEHICLE::REMOVE_VEHICLE_RECORDING(11, sLocal_45);
					break;
				
				case 11:
					TASK::REMOVE_WAYPOINT_RECORDING("arm2_15");
					break;
				
				case 12:
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_test_01"));
					break;
				
				case 13:
					TASK::REMOVE_WAYPOINT_RECORDING("ARM2");
					break;
				
				case 14:
					TASK::REMOVE_WAYPOINT_RECORDING("ARM2_FIRE");
					break;
				
				case 15:
					STREAMING::REMOVE_ANIM_DICT("missarmenian2lamar_idles");
					break;
				
				case 16:
					AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
					break;
				
				case 17:
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_siemonyetarian"));
					break;
				
				case 18:
					STREAMING::REMOVE_ANIM_DICT("missarmenian2lamar_in_cover");
					break;
				
				case 19:
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_arm_gate_l"));
					break;
			}
			Local_49[iVar0 /*3*/].f_2 = 0;
		}
		iVar0++;
	}
}


void func_538(int iParam0, bool bParam1, int iParam2)//Position - 0x5157B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam0 == 1)
	{
		func_579(3);
		MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
		switch (iLocal_1066)
		{
			case 0:
				MISC::CLEAR_AREA(-36.769f, -1097.209f, 25.643f, 100f, 1, 0, 0, 0);
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(25.85983f, -1098.932f, -43.78194f) - Vector(2.5625f, 6.75f, 9.75f), Vector(25.85983f, -1098.932f, -43.78194f) + Vector(2.5625f, 6.75f, 9.75f), 0, 1);
				func_578(0);
				CUTSCENE::REQUEST_CUTSCENE("Armenian_2_int", 8);
				while (!CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					func_19(57, 0);
				}
				func_413(2);
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -32.5669f, -1094.297f, 25.4223f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 141f);
				}
				if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
				{
					STREAMING::REQUEST_MODEL(joaat("baller"));
					STREAMING::REQUEST_MODEL(joaat("schwarzer"));
					STREAMING::REQUEST_MODEL(joaat("bullet"));
					STREAMING::REQUEST_MODEL(joaat("prop_employee_month_02"));
					while ((!STREAMING::HAS_MODEL_LOADED(joaat("baller")) || !STREAMING::HAS_MODEL_LOADED(joaat("schwarzer"))) || !STREAMING::HAS_MODEL_LOADED(joaat("bullet")))
					{
						func_19(65, 0);
					}
					MISC::CLEAR_AREA_OF_VEHICLES(-11.3885f, -1080.687f, 25.6721f, 8f, 0, 0, 0, 0, 0);
					iLocal_2020[0] = VEHICLE::CREATE_VEHICLE(joaat("baller"), -7.6801f, -1082.437f, 25.6721f, 159.3786f, 1, 1);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_2020[0], 3, 1);
					iLocal_2020[1] = VEHICLE::CREATE_VEHICLE(joaat("schwarzer"), -11.3885f, -1080.687f, 25.6721f, 160.6359f, 1, 1);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_2020[1], 37, 37);
					iLocal_2020[2] = VEHICLE::CREATE_VEHICLE(joaat("bullet"), -17.3168f, -1079.296f, 25.6721f, 204.3207f, 1, 1);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_2020[2], 52, 10);
					MISC::CLEAR_AREA_OF_VEHICLES(-41.4259f, -1099.648f, 26.0534f, 4f, 0, 0, 0, 0, 0);
					MISC::CLEAR_AREA_OF_VEHICLES(-46.2594f, -1097.839f, 26.3444f, 4f, 0, 0, 0, 0, 0);
					iLocal_2020[3] = VEHICLE::CREATE_VEHICLE(joaat("baller"), -41.4259f, -1099.648f, 26.0534f, 132.3786f, 1, 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_2020[3], 10);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2020[3], 0);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_2020[3], 25, 16);
					iLocal_2020[4] = VEHICLE::CREATE_VEHICLE(joaat("schwarzer"), -46.2594f, -1097.839f, 26.3444f, 113.3786f, 1, 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_2020[4], 10);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2020[4], 0);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_2020[4], 32, 17);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("baller"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("schwarzer"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bullet"));
				}
				if (iParam2 || bParam1)
				{
					iLocal_1057 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-29.13f, -1102.377f, 27.26f, 0.5f, joaat("prop_employee_month_01"), 1, 0, 1);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1057))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_1057, 0);
						iLocal_1058 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_employee_month_02"), ENTITY::GET_ENTITY_COORDS(iLocal_1057, 1), 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1058, 0f, 0f, -20f, 2, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_employee_month_02"));
					}
				}
				break;
			
			case 1:
				if (bParam1)
				{
					GlobalFunc_4972(-27.8988f, -1083.528f, 25.5772f, 284f, 1, 0);
				}
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(25.85983f, -1098.932f, -43.78194f) - Vector(2.5625f, 6.75f, 9.75f), Vector(25.85983f, -1098.932f, -43.78194f) + Vector(2.5625f, 6.75f, 9.75f), 0, 1);
				func_578(1);
				MISC::CLEAR_AREA_OF_PEDS(-11.3885f, -1080.687f, 25.6721f, 100f, 0);
				func_146(1, 9, 0);
				STREAMING::REQUEST_MODEL(joaat("baller"));
				STREAMING::REQUEST_MODEL(joaat("schwarzer"));
				STREAMING::REQUEST_MODEL(joaat("bullet"));
				STREAMING::REQUEST_MODEL(joaat("prop_employee_month_02"));
				while (((!STREAMING::HAS_MODEL_LOADED(joaat("baller")) || !STREAMING::HAS_MODEL_LOADED(joaat("schwarzer"))) || !STREAMING::HAS_MODEL_LOADED(joaat("bullet"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_employee_month_02")))
				{
					func_19(65, 0);
				}
				func_556(&(Local_1449[0 /*2*/]), -23.2436f, -1083.242f, 25.5872f, 250.0066f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[0 /*2*/], 0))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_1449[0 /*2*/], 1600);
					if (VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(Local_1449[0 /*2*/])) > 1)
					{
						while (!GlobalFunc_7061(&(Local_1070[2 /*14*/]), 19, Local_1449[0 /*2*/], 0, 1))
						{
							func_19(5, 0);
						}
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1449[0 /*2*/], -1);
					}
					else
					{
						while (!GlobalFunc_6808(&(Local_1070[2 /*14*/]), 19, -27.3368f, -1084.988f, 25.5727f, 275.7097f, 1))
						{
							func_19(6, 0);
						}
					}
				}
				else
				{
					while (!GlobalFunc_6808(&(Local_1070[2 /*14*/]), 19, -27.3368f, -1084.988f, 25.5727f, 275.7097f, 1))
					{
						func_19(6, 0);
					}
					if (!bParam1)
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -27.8988f, -1083.528f, 25.5772f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 284f);
					}
				}
				func_331(1);
				func_413(2);
				if (bParam1)
				{
					GlobalFunc_4967(0, -1, 1);
				}
				MISC::CLEAR_AREA_OF_VEHICLES(-11.3885f, -1080.687f, 25.6721f, 8f, 0, 0, 0, 0, 0);
				iVar0 = VEHICLE::CREATE_VEHICLE(joaat("baller"), -7.6801f, -1082.437f, 25.6721f, 159.3786f, 1, 1);
				VEHICLE::SET_VEHICLE_COLOURS(iVar0, 3, 1);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
				iVar0 = VEHICLE::CREATE_VEHICLE(joaat("schwarzer"), -11.3885f, -1080.687f, 25.6721f, 160.6359f, 1, 1);
				VEHICLE::SET_VEHICLE_COLOURS(iVar0, 37, 37);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
				iVar0 = VEHICLE::CREATE_VEHICLE(joaat("bullet"), -17.3168f, -1079.296f, 25.6721f, 204.3207f, 1, 1);
				VEHICLE::SET_VEHICLE_COLOURS(iVar0, 52, 10);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
				MISC::CLEAR_AREA_OF_VEHICLES(-41.4259f, -1099.648f, 26.0534f, 4f, 0, 0, 0, 0, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(-46.2594f, -1097.839f, 26.3444f, 4f, 0, 0, 0, 0, 0);
				iVar0 = VEHICLE::CREATE_VEHICLE(joaat("baller"), -41.4259f, -1099.648f, 26.0534f, 132.3786f, 1, 1);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar0, 10);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iVar0, 0);
				VEHICLE::SET_VEHICLE_COLOURS(iVar0, 25, 16);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
				iVar0 = VEHICLE::CREATE_VEHICLE(joaat("schwarzer"), -46.2594f, -1097.839f, 26.3444f, 113.3786f, 1, 1);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar0, 10);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iVar0, 0);
				VEHICLE::SET_VEHICLE_COLOURS(iVar0, 32, 17);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("baller"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("schwarzer"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bullet"));
				if (iParam2 || bParam1)
				{
					iLocal_1057 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-29.13f, -1102.377f, 27.26f, 0.5f, joaat("prop_employee_month_01"), 1, 0, 1);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1057))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_1057, 0);
						iLocal_1058 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_employee_month_02"), ENTITY::GET_ENTITY_COORDS(iLocal_1057, 1), 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1058, 0f, 0f, -20f, 2, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_employee_month_02"));
					}
				}
				break;
			
			case 2:
				if (bParam1)
				{
					GlobalFunc_4972(-1133.841f, -1578.529f, 3.4006f, 198f, 1, 0);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1133.841f, -1578.529f, 3.4006f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 198f);
					STREAMING::LOAD_SCENE(-1133.041f, -1574.603f, 3.3957f);
					SYSTEM::WAIT(10);
				}
				func_146(1, 9, 0);
				MISC::CLEAR_AREA(-1133.041f, -1574.603f, 3.3957f, 120f, 1, 0, 0, 0);
				func_578(2);
				func_545();
				ENTITY::SET_ENTITY_HEALTH(Local_1449[0 /*2*/], 1600);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[0 /*2*/], 0))
				{
					VEHICLE::REQUEST_VEHICLE_ASSET(ENTITY::GET_ENTITY_MODEL(Local_1449[0 /*2*/]), 3);
					while (!VEHICLE::HAS_VEHICLE_ASSET_LOADED(ENTITY::GET_ENTITY_MODEL(Local_1449[0 /*2*/])))
					{
						SYSTEM::WAIT(0);
					}
				}
				if (GlobalFunc_7698())
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[0 /*2*/], 0))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1449[0 /*2*/], -1);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1449[0 /*2*/], 1, 1);
						while (!GlobalFunc_7061(&(Local_1070[2 /*14*/]), 19, Local_1449[0 /*2*/], 0, 1))
						{
							func_19(7, 0);
						}
					}
				}
				else
				{
					while (!GlobalFunc_6808(&(Local_1070[2 /*14*/]), 19, -1136.033f, -1579.871f, 3.3956f, 187f, 1))
					{
						func_19(8, 0);
					}
				}
				func_331(1);
				func_299(Local_1070[2 /*14*/]);
				func_413(2);
				while (iLocal_2272 != 1)
				{
					func_23();
					func_19(9, 0);
				}
				if (bParam1)
				{
					GlobalFunc_4967(0, -1, 1);
				}
				break;
			
			case 3:
				func_146(1, 9, 0);
				func_545();
				ENTITY::SET_ENTITY_HEALTH(Local_1449[0 /*2*/], 1600);
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1125.629f, -1593.48f, 3.355f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 189f);
					MISC::CLEAR_AREA(-1125.629f, -1593.48f, 3.355f, 120f, 1, 0, 0, 0);
					SYSTEM::WAIT(1);
				}
				func_578(3);
				while (!GlobalFunc_6808(&(Local_1070[2 /*14*/]), 19, -1129.541f, -1590.574f, 3.3645f, 201f, 1))
				{
					func_19(7, 0);
				}
				func_331(1);
				if (!HUD::DOES_BLIP_EXIST(Local_1070[2 /*14*/].f_1))
				{
					Local_1070[2 /*14*/].f_1 = GlobalFunc_6829(Local_1070[2 /*14*/], 0, 145);
				}
				func_413(2);
				func_499(42, 89);
				func_125(57, 1);
				func_125(49, 1);
				func_410(0, 17, 1, 0);
				func_410(1, 19, 0, 1);
				func_410(6, 24, 1, 0);
				func_410(10, 48, 0, 1);
				func_123(10, 48, 1);
				func_542(0, 13, 1);
				func_542(1, 14, 1);
				func_542(2, 15, 1);
				func_125(57, 1);
				func_299(Local_1070[2 /*14*/]);
				break;
			
			case 4:
				func_146(1, 9, 0);
				func_578(4);
				func_545();
				ENTITY::SET_ENTITY_HEALTH(Local_1449[0 /*2*/], 1600);
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1115.074f, -1604.652f, 3.4684f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 208f);
					MISC::CLEAR_AREA(-1115.074f, -1604.652f, 3.4684f, 120f, 1, 0, 0, 0);
					STREAMING::LOAD_SCENE(-1115.074f, -1604.652f, 3.4684f);
					SYSTEM::WAIT(10);
				}
				while (!GlobalFunc_6808(&(Local_1070[2 /*14*/]), 19, -1109.832f, -1610.525f, 3.5653f, 215f, 1))
				{
					func_19(7, 0);
				}
				func_331(1);
				func_121();
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "arm2", 0, 0, -1);
				func_120(Local_1070[2 /*14*/], 0);
				if (!HUD::DOES_BLIP_EXIST(Local_1070[2 /*14*/].f_1))
				{
					Local_1070[2 /*14*/].f_1 = GlobalFunc_6829(Local_1070[2 /*14*/], 0, 145);
				}
				func_413(2);
				func_499(42, 89);
				func_125(57, 1);
				func_125(67, 1);
				func_410(0, 17, 1, 0);
				func_410(1, 19, 1, 0);
				func_410(2, 20, 1, 0);
				func_410(3, 21, 1, 0);
				func_410(4, 22, 1, 0);
				func_410(6, 24, 1, 0);
				func_410(24, 42, 1, 0);
				func_542(0, 13, 1);
				func_542(1, 14, 1);
				func_542(2, 15, 1);
				func_542(3, 16, 1);
				func_542(4, 17, 1);
				func_542(5, 18, 1);
				func_542(6, 19, 1);
				func_410(10, 48, 0, 1);
				func_123(10, 48, 4);
				iLocal_46 = 5;
				func_407("ARM2_DRIVE_RESTART", 0, "ARM2_FIGHT_START");
				func_299(Local_1070[2 /*14*/]);
				break;
			
			case 5:
				func_146(1, 9, 0);
				func_578(5);
				func_545();
				ENTITY::SET_ENTITY_HEALTH(Local_1449[0 /*2*/], 1600);
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1078.004f, -1661.689f, 3.3987f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 204.7912f);
					MISC::CLEAR_AREA(-1077.496f, -1679.384f, 3.5754f, 120f, 1, 0, 0, 0);
					STREAMING::LOAD_SCENE(-1078.004f, -1661.689f, 3.3987f);
					SYSTEM::WAIT(1);
				}
				while (!GlobalFunc_6808(&(Local_1070[2 /*14*/]), 19, -1074.568f, -1666.3f, 3.4449f, 218.3193f, 1))
				{
					func_19(7, 0);
				}
				func_331(1);
				if (!HUD::DOES_BLIP_EXIST(Local_1070[2 /*14*/].f_1))
				{
					Local_1070[2 /*14*/].f_1 = GlobalFunc_6829(Local_1070[2 /*14*/], 0, 145);
				}
				func_413(2);
				func_499(42, 89);
				func_125(57, 1);
				func_125(67, 1);
				func_410(0, 17, 1, 0);
				func_410(1, 19, 1, 0);
				func_410(2, 20, 1, 0);
				func_410(3, 21, 1, 0);
				func_410(4, 22, 1, 0);
				func_410(6, 24, 1, 0);
				func_410(7, 25, 1, 0);
				func_410(9, 27, 1, 0);
				func_410(10, 28, 1, 0);
				func_410(11, 29, 1, 0);
				func_410(12, 30, 1, 0);
				func_410(13, 31, 1, 0);
				func_410(15, 33, 1, 0);
				func_410(18, 32, 1, 0);
				func_410(19, 33, 1, 0);
				func_542(0, 13, 1);
				func_542(1, 14, 1);
				func_542(2, 15, 1);
				func_542(3, 16, 1);
				func_542(4, 17, 1);
				func_542(5, 18, 1);
				func_542(6, 19, 1);
				func_542(7, 20, 1);
				func_542(8, 21, 1);
				func_542(9, 22, 1);
				func_542(10, 24, 1);
				func_542(11, 26, 1);
				func_542(12, 27, 1);
				func_542(16, 32, 1);
				func_410(24, 42, 1, 0);
				func_410(10, 48, 0, 1);
				func_123(10, 48, 6);
				iLocal_46 = 7;
				func_407("ARM2_GARAGES_RESTART", 0, "ARM2_FIGHT_START");
				func_299(Local_1070[2 /*14*/]);
				break;
			
			case 6:
				if (bParam1)
				{
					GlobalFunc_4972(-1072.456f, -1675.523f, 3.4485f, 113f, 1, 0);
				}
				else if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1072.456f, -1675.523f, 3.4485f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 113f);
					STREAMING::LOAD_SCENE(-1072.456f, -1675.523f, 3.4485f);
					SYSTEM::WAIT(10);
				}
				MISC::CLEAR_AREA(-1077.496f, -1679.384f, 3.5754f, 120f, 1, 0, 0, 0);
				func_146(1, 9, 0);
				func_545();
				ENTITY::SET_ENTITY_HEALTH(Local_1449[0 /*2*/], 1600);
				func_578(5);
				while (!GlobalFunc_6808(&(Local_1070[2 /*14*/]), 19, -1074.48f, -1673.231f, 3.4137f, 130f, 1))
				{
					func_19(7, 0);
				}
				func_331(1);
				if (!HUD::DOES_BLIP_EXIST(Local_1070[2 /*14*/].f_1))
				{
					Local_1070[2 /*14*/].f_1 = GlobalFunc_6829(Local_1070[2 /*14*/], 0, 145);
				}
				func_413(2);
				func_407("ARM2_DOOR_RESTART", 0, "ARM2_FIGHT_START");
				func_299(Local_1070[2 /*14*/]);
				if (bParam1)
				{
					GlobalFunc_4967(0, -1, 1);
				}
				break;
			
			case 7:
				if (bParam1)
				{
					GlobalFunc_4972(-1077.851f, -1678.9f, 3.5754f, 346f, 1, 0);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1077.851f, -1678.9f, 3.5754f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 346.6853f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
					STREAMING::LOAD_SCENE(-1077.496f, -1679.384f, 3.5754f);
					SYSTEM::WAIT(10);
				}
				MISC::CLEAR_AREA_OF_PEDS(-1077.851f, -1678.9f, 3.5754f, 100f, 0);
				PED::SET_CREATE_RANDOM_COPS(0);
				func_541(1, 9, 0);
				func_545();
				if (!Global_86802)
				{
					uLocal_1981 = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_weapon_pistol"), -1075.798f, -1675.717f, 3.5903f, -90f, 0f, -15f, 0, 145, 2, 1, 0);
					if (!func_503(PLAYER::PLAYER_PED_ID(), 0))
					{
						uLocal_2029 = GlobalFunc_5666(uLocal_1981);
					}
				}
				ENTITY::SET_ENTITY_HEALTH(Local_1449[0 /*2*/], 1600);
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (Global_86802)
					{
						if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 0))
						{
							iVar1 = (75 - WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol")));
						}
						else
						{
							iVar1 = 75;
						}
						if (iVar1 > 0)
						{
							WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), iVar1, 1, 1);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 1);
					}
					MISC::CLEAR_AREA(-1077.496f, -1679.384f, 3.5754f, 120f, 1, 0, 0, 0);
				}
				func_578(6);
				while (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-967780114))
				{
					func_110(1);
					func_19(10, 0);
				}
				func_328(8, 63, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
				while (!func_246(8, 63))
				{
					func_328(8, 63, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
					func_19(11, 0);
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
				}
				STREAMING::REQUEST_ANIM_DICT("DEAD");
				while (!STREAMING::HAS_ANIM_DICT_LOADED("DEAD"))
				{
					func_19(17, 0);
				}
				iLocal_1916 = PED::CREATE_PED(26, iLocal_2218, -1070.169f, -1672.87f, 3.4807f, 121f, 1, 1);
				AUDIO::DISABLE_PED_PAIN_AUDIO(iLocal_1916, 1);
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iLocal_1916);
				TASK::TASK_PLAY_ANIM(iLocal_1916, "dead", "dead_a", 1000f, -1000f, -1, 1, 0, 0, 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_1916, 1, 0);
				func_19(12, 0);
				if (!PED::IS_PED_DEAD_OR_DYING(iLocal_1916, 1))
				{
					ENTITY::SET_ENTITY_HEALTH(iLocal_1916, 0);
				}
				STREAMING::REMOVE_ANIM_DICT("DEAD");
				while (!GlobalFunc_6808(&(Local_1070[2 /*14*/]), 19, -1077.802f, -1677.212f, 3.5754f, 312.619f, 1))
				{
					func_19(13, 0);
				}
				func_331(1);
				PED::FORCE_PED_MOTION_STATE(Local_1070[2 /*14*/], -530524, 0, 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1070[2 /*14*/], 0, 0);
				WEAPON::GIVE_WEAPON_TO_PED(Local_1070[2 /*14*/], joaat("weapon_microsmg"), 2000, 1, 1);
				if (!HUD::DOES_BLIP_EXIST(Local_1070[2 /*14*/].f_1))
				{
					Local_1070[2 /*14*/].f_1 = GlobalFunc_6829(Local_1070[2 /*14*/], 0, 145);
				}
				func_410(31, 85, 1, 0);
				if (Global_86802)
				{
					func_540(2, 13, 1);
				}
				func_407("ARM2_FIGHT_RESTART", 0, "ARM2_CAR");
				if (bParam1)
				{
					GlobalFunc_4967(0, -1, 1);
				}
				break;
			
			case 8:
				PED::SET_CREATE_RANDOM_COPS(0);
				func_146(1, 9, 0);
				func_545();
				ENTITY::SET_ENTITY_HEALTH(Local_1449[0 /*2*/], 1600);
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1085.542f, -1647.488f, 3.3985f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 51.1491f);
					MISC::CLEAR_AREA(-1077.496f, -1679.384f, 3.5754f, 120f, 1, 0, 0, 0);
					STREAMING::LOAD_SCENE(-1089.814f, -1649.056f, 3.3986f);
					SYSTEM::WAIT(10);
					if (!bParam1)
					{
						if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 0))
						{
							WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 200, 0, 1);
						}
						if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), 0))
						{
							WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), 200, 0, 1);
						}
					}
				}
				func_578(6);
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
				}
				while (!GlobalFunc_6808(&(Local_1070[2 /*14*/]), 19, -1086.467f, -1649.203f, 3.3985f, 51.1439f, 1))
				{
					func_19(7, 0);
				}
				func_331(1);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
				}
				WEAPON::GIVE_WEAPON_TO_PED(Local_1070[2 /*14*/], joaat("weapon_microsmg"), 2000, 1, 1);
				PED::SET_PED_DUCKING(Local_1070[2 /*14*/], 1);
				if (HUD::DOES_BLIP_EXIST(uLocal_2028))
				{
					HUD::REMOVE_BLIP(&uLocal_2028);
				}
				if (!HUD::DOES_BLIP_EXIST(Local_1070[2 /*14*/].f_1))
				{
					Local_1070[2 /*14*/].f_1 = GlobalFunc_6829(Local_1070[2 /*14*/], 0, 145);
				}
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 0))
				{
					iVar2 = (75 - WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol")));
				}
				else
				{
					iVar2 = 75;
				}
				if (iVar2 > 0)
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), iVar2, 1, 1);
				}
				iLocal_2220 = 1;
				func_499(90, 136);
				func_125(110, 1);
				func_125(91, 1);
				func_125(92, 1);
				func_125(93, 1);
				func_125(94, 1);
				func_125(95, 1);
				func_125(96, 1);
				func_125(98, 1);
				func_125(107, 1);
				func_125(110, 1);
				func_125(124, 1);
				func_125(125, 1);
				func_125(132, 0);
				func_410(3, 52, 1, 0);
				func_410(7, 53, 1, 0);
				func_410(10, 55, 1, 0);
				func_410(12, 58, 1, 0);
				func_410(13, 56, 1, 0);
				func_410(4, 67, 1, 0);
				func_410(5, 68, 1, 0);
				func_410(6, 69, 1, 0);
				func_410(9, 70, 1, 0);
				func_410(11, 71, 1, 0);
				func_410(15, 72, 1, 0);
				func_542(0, 40, 1);
				func_542(1, 41, 1);
				func_542(2, 43, 1);
				func_542(3, 42, 1);
				func_542(4, 44, 1);
				func_542(6, 46, 1);
				func_542(7, 47, 1);
				func_542(8, 45, 1);
				func_542(9, 49, 1);
				func_542(23, 50, 1);
				func_540(0, 11, 1);
				func_540(1, 12, 1);
				func_540(2, 13, 1);
				func_540(3, 15, 1);
				func_413(2);
				func_407("ARM2_SKIP_RESTART", 1, "ARM2_CAR");
				break;
			
			case 9:
				if (bParam1)
				{
					GlobalFunc_4972(-1118.205f, -1602.761f, 3.3986f, 30f, 1, 0);
				}
				else if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1118.205f, -1602.761f, 3.3986f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 30f);
					STREAMING::LOAD_SCENE(-1118.205f, -1602.761f, 3.3986f);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					SYSTEM::WAIT(10);
				}
				func_413(2);
				func_146(1, 10, 0);
				MISC::CLEAR_AREA(-1118.205f, -1602.761f, 3.3986f, 100f, 1, 0, 0, 0);
				func_578(7);
				func_413(2);
				func_545();
				ENTITY::SET_ENTITY_HEALTH(Local_1449[0 /*2*/], 1600);
				while (!func_363(&(Local_1449[4 /*2*/]), 1, -1126.017f, -1575.357f, 3.3486f, 301f, 1, 2))
				{
					func_19(14, 0);
				}
				STREAMING::REQUEST_MODEL(iLocal_2218);
				while (!GlobalFunc_6808(&(Local_1070[2 /*14*/]), 19, -1121.57f, -1603.136f, 3.3986f, 38f, 1))
				{
					func_19(7, 0);
				}
				func_331(1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_1070[2 /*14*/]);
				WEAPON::GIVE_WEAPON_TO_PED(Local_1070[2 /*14*/], joaat("weapon_microsmg"), 2000, 1, 1);
				func_146(6, 12, 0);
				func_146(7, 12, 0);
				func_539(6, 1);
				func_539(7, 1);
				func_110(6);
				func_110(7);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[4 /*2*/], 0))
				{
					while (!STREAMING::HAS_MODEL_LOADED(iLocal_2218))
					{
						func_19(16, 0);
					}
					func_378(8, iLocal_2219, Local_1067, 0f, Local_1449[4 /*2*/], -1, 0, 0, 0, 0);
					ENTITY::SET_ENTITY_HEALTH(Local_1070[8 /*14*/], 100);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1070[8 /*14*/], 1);
					PED::SET_PED_MONEY(Local_1070[8 /*14*/], 80);
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_1449[4 /*2*/]))
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_1449[4 /*2*/], false);
				}
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 0))
				{
					iVar3 = (75 - WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol")));
				}
				else
				{
					iVar3 = 75;
				}
				if (iVar3 > 0)
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), iVar3, 1, 1);
				}
				func_410(7, 100, 1, 0);
				func_407("ARM2_FIGHT_END_RESTART", 0, "ARM2_CHASE_START");
				if (bParam1)
				{
					GlobalFunc_4967(0, -1, 1);
				}
				else
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
				break;
			
			case 10:
				if (bParam1)
				{
					GlobalFunc_4972(-1002.029f, -1263.15f, 4.881f, 113f, 1, 0);
				}
				MISC::CLEAR_AREA(-1002.029f, -1263.15f, 4.881f, 100f, 1, 0, 0, 0);
				func_413(2);
				func_556(&(Local_1449[0 /*2*/]), -1000.029f, -1263.15f, 4.881f, 301f, 0, 0, 1, 0, 1, joaat("asterope"), 0, 145);
				ENTITY::SET_ENTITY_HEALTH(Local_1449[0 /*2*/], 1600);
				while (!func_363(&(Local_1449[4 /*2*/]), 1, -991.7125f, -1257.027f, 4.7688f, 281f, 1, 2))
				{
					SYSTEM::WAIT(0);
				}
				func_578(9);
				if (!ENTITY::IS_ENTITY_DEAD(Local_1449[4 /*2*/]))
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_1449[4 /*2*/], false);
					Local_1449[4 /*2*/].f_1 = GlobalFunc_7056(Local_1449[4 /*2*/], 0, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_1449[0 /*2*/]))
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1449[0 /*2*/], -1);
					}
					while (!GlobalFunc_7061(&(Local_1070[2 /*14*/]), 19, Local_1449[0 /*2*/], 0, 1))
					{
						func_19(7, 0);
					}
					func_331(1);
				}
				if (bParam1)
				{
					GlobalFunc_4967(0, -1, 1);
				}
				break;
			
			case 11:
				if (bParam1)
				{
					GlobalFunc_4972(-19.0893f, -1404.932f, 28.3219f, 113f, 1, 0);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -19.0893f, -1404.932f, 28.3219f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 113f);
					STREAMING::LOAD_SCENE(-17.0893f, -1404.932f, 28.3219f);
					SYSTEM::WAIT(10);
				}
				MISC::CLEAR_AREA(-19.0893f, -1404.932f, 28.3219f, 100f, 1, 0, 0, 0);
				func_413(2);
				while (!func_363(&(Local_1449[0 /*2*/]), 1, -17.0893f, -1404.932f, 28.3219f, 270f, 1, 0))
				{
					SYSTEM::WAIT(0);
				}
				while (!func_363(&(Local_1449[4 /*2*/]), 1, -5.8908f, -1391.768f, 28.3421f, 185.974f, 1, 2))
				{
					SYSTEM::WAIT(0);
				}
				func_578(10);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[0 /*2*/], 0))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_1449[0 /*2*/], 1600);
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_1449[4 /*2*/]))
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_1449[4 /*2*/], false);
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1449[4 /*2*/], -1);
					}
				}
				if (bParam1)
				{
					GlobalFunc_4967(0, -1, 1);
				}
				break;
			
			case 12:
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -19.9686f, -1454.151f, 29.5843f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 231.0765f);
				}
				while (!func_363(&(Local_1449[0 /*2*/]), 1, -17.0893f, -1404.932f, 28.3219f, 270.1911f, 1, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[0 /*2*/], 0))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_1449[0 /*2*/], 1600);
				}
				func_578(11);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1449[0 /*2*/]));
				STREAMING::LOAD_SCENE(-19.9686f, -1454.151f, 29.5843f);
				SYSTEM::WAIT(10);
				break;
		}
		MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 200f, 0);
		SYSTEM::WAIT(0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
	}
}

int func_539(int iParam0, int iParam1)//Position - 0x53124
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_1707[iVar0 /*6*/] == iParam0)
		{
			if (Local_1707[iVar0 /*6*/].f_1 == 1)
			{
				Local_1707[iVar0 /*6*/].f_2 = iParam1;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_540(int iParam0, int iParam1, int iParam2)//Position - 0x53168
{
	Local_291[iParam0 /*4*/].f_1 = iParam2;
	Local_291[iParam0 /*4*/] = iParam1;
}

void func_541(int iParam0, int iParam1, int iParam2)//Position - 0x53184
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_1707[iVar0 /*6*/] == iParam0)
		{
			Local_1707[iVar0 /*6*/].f_1 = 1;
			Local_1707[iVar0 /*6*/].f_2 = 0;
			Local_1707[iVar0 /*6*/].f_3 = 0;
			Local_1707[iVar0 /*6*/].f_4 = iParam2;
			Local_1707[iVar0 /*6*/].f_5 = iParam1;
			bVar1 = true;
		}
		iVar0++;
	}
	if (!bVar1)
	{
		func_146(iParam0, iParam1, iParam2);
	}
}

void func_542(int iParam0, int iParam1, int iParam2)//Position - 0x531F3
{
	Local_139[iParam0 /*6*/].f_1 = iParam2;
	Local_139[iParam0 /*6*/] = iParam1;
}



void func_545()//Position - 0x53249
{
	bool bVar0;
	var uVar1;
	var uVar4;
	
	if (GlobalFunc_7698())
	{
		if (!GlobalFunc_5667(GlobalFunc_622(), 13f, 30f, 20f, 1))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		func_556(&(Local_1449[0 /*2*/]), -1149.331f, -1587.637f, 3.4344f, 305f, 0, 0, 1, 0, 1, joaat("asterope"), 0, 145);
	}
	else
	{
		func_556(&(Local_1449[0 /*2*/]), -1133.479f, -1574.017f, 3.3788f, 300f, 0, 0, 1, 0, 1, joaat("asterope"), 0, 145);
	}
	VEHICLE::_GET_VEHICLE_SUSPENSION_BOUNDS(Local_1449[0 /*2*/], &uVar1, &uVar4);
}











void func_556(int iParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x535F7
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
		*iParam0 = func_562(Param1, fParam4);
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
			while (!func_363(iParam0, iParam12, Param1, fParam4, 1, 0))
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






int func_562(struct<3> Param0, float fParam3)//Position - 0x53A61
{
	return func_563(&(Global_93588.f_2167), Param0, fParam3, 0);
}

int func_563(var uParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x53A7B
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
				GlobalFunc_6793(iVar0, &(uParam0->f_12), 0, 1);
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
					func_334(iVar0, uParam0->f_11);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12.f_42);
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}















void func_578(int iParam0)//Position - 0x546E8
{
	iLocal_111 = 1;
	iLocal_112 = 0;
	iLocal_110 = iParam0;
	func_536(iParam0);
	while (iLocal_111)
	{
		func_531();
		func_19(0, 0);
	}
}

void func_579(int iParam0)//Position - 0x54713
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
	GlobalFunc_562(1);
	if (iParam0 != 0)
	{
		while (!AUDIO::TRIGGER_MUSIC_EVENT("ARM2_MISSION_FAIL"))
		{
			func_19(4, 0);
		}
	}
	func_522();
	func_521();
	func_520();
	func_519();
	while (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			CUTSCENE::STOP_CUTSCENE(1);
		}
		else
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
		func_19(3, 0);
	}
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	if (iParam0 != 3)
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bagger"), 0);
	}
	AUDIO::STOP_STREAM();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
	}
	if (iParam0 != 3)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "MISSARMENIAN2LeadInOutMCS_6", "_leadin_fra", 3))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
	}
	iLocal_2246 = 0;
	iLocal_2247 = 0;
	iLocal_2248 = 0;
	sLocal_2249 = "";
	sLocal_2250 = "";
	iLocal_46 = 0;
	if (OBJECT::DOES_PICKUP_EXIST(uLocal_1035))
	{
		OBJECT::REMOVE_PICKUP(uLocal_1035);
	}
	GlobalFunc_8316(0, 1, 1, 0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
	CAM::DESTROY_ALL_CAMS(0);
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	GlobalFunc_4956();
	GlobalFunc_4935();
	AUDIO::STOP_SCRIPTED_CONVERSATION(1);
	iLocal_47 = 0;
	bLocal_48 = false;
	iLocal_1064 = 0;
	iLocal_1064 = iLocal_1064;
	bLocal_1065 = false;
	func_242();
	HUD::CLEAR_PRINTS();
	func_584(1);
	func_110(0);
	if (iParam0 != 3)
	{
		TASK::REMOVE_ALL_COVER_BLOCKING_AREAS();
		PED::_0xF2BEBCDFAFDAA19E(1);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1950))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_1950, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1951))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_1951, 0);
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		GlobalFunc_10617(96, 6);
		func_402(joaat("prop_map_door_01"), -1104.657f, -1638.481f, 4.6754f, 1, 0f);
	}
	else
	{
		GlobalFunc_2237(0);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(uLocal_1033))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(uLocal_1033);
	}
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(uLocal_1034))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(uLocal_1034);
	}
	GlobalFunc_4948(&uLocal_2229, 0, 0);
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1449[iVar0 /*2*/]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[iVar0 /*2*/], 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_1449[iVar0 /*2*/], 0);
			}
			if (iParam0 == 3)
			{
				if (HUD::DOES_BLIP_EXIST(Local_1449[iVar0 /*2*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_1449[iVar0 /*2*/].f_1));
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1449[iVar0 /*2*/], 0))
				{
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_1449[iVar0 /*2*/], 1))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1449[iVar0 /*2*/], 1, 1);
					}
					VEHICLE::DELETE_VEHICLE(&(Local_1449[iVar0 /*2*/]));
				}
				else if (ENTITY::DOES_ENTITY_EXIST(Local_1449[iVar0 /*2*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_1449[iVar0 /*2*/]));
				}
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < iLocal_2020)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2020[iVar1]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2020[iVar1], 0))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_2020[iVar1]));
			}
		}
		iVar1++;
	}
	func_582();
	GlobalFunc_860();
	iVar0 = 0;
	while (iVar0 < Local_1919.x)
	{
		Local_1919[iVar0 /*3*/].f_1 = 0;
		iVar0++;
	}
	iVar0 = 1;
	while (iVar0 <= 26)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1070[iVar0 /*14*/]))
		{
			if (iParam0 == 2)
			{
				if (!PED::IS_PED_INJURED(Local_1070[iVar0 /*14*/]))
				{
					if (PED::IS_PED_IN_GROUP(Local_1070[iVar0 /*14*/]))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_1070[iVar0 /*14*/]);
					}
					PED::SET_PED_KEEP_TASK(Local_1070[iVar0 /*14*/], 1);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1070[iVar0 /*14*/]));
			}
			else
			{
				PED::DELETE_PED(&(Local_1070[iVar0 /*14*/]));
			}
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1916))
	{
		PED::DELETE_PED(&iLocal_1916);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1917))
	{
		PED::DELETE_PED(&iLocal_1917);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1918))
	{
		PED::DELETE_PED(&iLocal_1918);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1948))
	{
		OBJECT::SET_OBJECT_TARGETTABLE(iLocal_1948, 0);
		OBJECT::DELETE_OBJECT(&iLocal_1948);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_2029))
	{
		HUD::REMOVE_BLIP(&uLocal_2029);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_2030))
	{
		HUD::REMOVE_BLIP(&uLocal_2030);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_2031))
	{
		HUD::REMOVE_BLIP(&uLocal_2031);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_2028))
	{
		HUD::REMOVE_BLIP(&uLocal_2028);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_2032))
	{
		HUD::REMOVE_BLIP(&uLocal_2032);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1949))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1949);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_1054[0]))
	{
		OBJECT::DELETE_OBJECT(&(uLocal_1054[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_1054[1]))
	{
		OBJECT::DELETE_OBJECT(&(uLocal_1054[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1057))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_1057, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1058))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1058);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_gar_door_plug"));
	PED::SET_CREATE_RANDOM_COPS(1);
	iLocal_1060 = 0;
	iLocal_1053 = 0;
	sLocal_2216 = "";
	iLocal_2067 = 0;
	iLocal_2270 = 0;
	if (OBJECT::DOES_PICKUP_EXIST(uLocal_1981))
	{
		OBJECT::REMOVE_PICKUP(uLocal_1981);
	}
	if (OBJECT::DOES_PICKUP_EXIST(uLocal_1980))
	{
		OBJECT::REMOVE_PICKUP(uLocal_1980);
	}
	OBJECT::REMOVE_ALL_PICKUPS_OF_TYPE(joaat("pickup_weapon_pistol"));
	GlobalFunc_5652(&Local_1955, 1, 0);
	HUD::CLEAR_GPS_MULTI_ROUTE();
	if (iParam0 == 3)
	{
		GlobalFunc_10617(94, 4);
		GlobalFunc_10617(95, 4);
		GlobalFunc_10617(94, 6);
		GlobalFunc_10617(95, 6);
	}
	else if (iParam0 == 0)
	{
		GlobalFunc_10617(94, 0);
		GlobalFunc_10617(95, 0);
	}
	else
	{
		GlobalFunc_10617(94, 4);
		GlobalFunc_10617(95, 4);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-967780114))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(-967780114);
	}
	TASK::REMOVE_COVER_POINT(uLocal_1909);
	TASK::REMOVE_COVER_POINT(uLocal_2026);
	TASK::REMOVE_COVER_POINT(uLocal_2027);
	TASK::REMOVE_COVER_POINT(uLocal_1910);
	TASK::REMOVE_COVER_POINT(uLocal_1911);
	TASK::REMOVE_COVER_POINT(uLocal_1912);
	TASK::REMOVE_COVER_POINT(uLocal_1913);
	TASK::REMOVE_COVER_POINT(uLocal_1914);
	TASK::REMOVE_COVER_POINT(uLocal_1915);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_2_DRIVE_TO_ALLEY"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_2_DRIVE_TO_ALLEY");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_2_SEARCH_FOR_BIKE"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_2_SEARCH_FOR_BIKE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_2_GANG_DRIVE_PAST"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_2_GANG_DRIVE_PAST");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_2_SHOOTOUT"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_2_SHOOTOUT");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_2_RAYFIRE"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_2_RAYFIRE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_2_GAS_TRAIL"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_2_GAS_TRAIL");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_2_GET_TO_THE_CAR"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_2_GET_TO_THE_CAR");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_2_CHASE_THE_BIKE"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_2_CHASE_THE_BIKE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_2_RIDE_BIKE_BACK"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_2_RIDE_BIKE_BACK");
	}
	iVar2 = 0;
	while (iVar2 <= 30)
	{
		if (Local_2090[iVar2 /*3*/] != 0)
		{
			GRAPHICS::REMOVE_PARTICLE_FX(Local_2090[iVar2 /*3*/], 0);
		}
		Local_2090[iVar2 /*3*/].f_1 = 0;
		Local_2090[iVar2 /*3*/].f_2 = 0;
		Local_2090[iVar2 /*3*/] = 0;
		iVar2++;
	}
	iLocal_1470 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
	}
	if (iParam0 == 3)
	{
		MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1061.554f, -1683.209f, 3.436779f, -1141.414f, -1572.998f, 8.292084f, 66.75f, 0, 0, 0, 0, 0);
		MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-17.6177f, -958.4838f, 11.38287f, -90.49478f, -1259.338f, 76.55168f, 250f, 0, 0, 0, 0, 0);
		MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 100f, 0);
		MISC::CLEAR_AREA_OF_OBJECTS(-1094.151f, -1641.675f, 3.4598f, 80f, 0);
		MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 200f, 1, 0, 0, 0);
		func_413(2);
	}
	else
	{
		func_413(7);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
	}
	PAD::ENABLE_CONTROL_ACTION(0, 140, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 141, 1);
	if (iParam0 != 3)
	{
		PATHFIND::SET_ROADS_IN_AREA(12.0272f, -1443.624f, 33.436f, -58.0394f, -1501.268f, 29.8437f, 1, 1);
		PATHFIND::SET_ROADS_IN_AREA(-1159.587f, -1594.754f, 0.2391f, -1119.587f, -1554.754f, 13.2391f, 1, 1);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-966.1594f, -1187.304f, -0.770555f, -1094.655f, -964.7231f, 15.13055f, 10.3125f, 1);
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-21.8129f, -1454.343f, 20.7942f, -17.8129f, -1450.343f, 40.7942f, 0);
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(Vector(3.943655f, -1586.096f, -1131.871f) - Vector(1.125f, 6.6875f, 5.5625f), Vector(3.943655f, -1586.096f, -1131.871f) + Vector(1.125f, 6.6875f, 5.5625f), 0);
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(Vector(4.110459f, -1656.14f, -1090.723f) - Vector(1f, 2.125f, 2.125f), Vector(4.110459f, -1656.14f, -1090.723f) + Vector(1f, 2.125f, 2.125f), 0);
		PED::CLEAR_PED_NON_CREATION_AREA();
		MISC::ENABLE_DISPATCH_SERVICE(3, 1);
		MISC::ENABLE_DISPATCH_SERVICE(5, 1);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(6);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tailgater"), 0);
		ENTITY::REMOVE_MODEL_HIDE(-1089.8f, -1637.8f, 7.3f, 1f, joaat("prop_ld_balcfnc_02a"), 1);
		Global_24593 = 0;
	}
	VEHICLE::REMOVE_VEHICLE_ASSET(joaat("burrito"));
	if (iParam0 != 3)
	{
	}
	if (iParam0 == 3)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 0, 0, 1);
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1062.002f, -1662.213f, 3.562896f, -1066.942f, -1665.529f, 6.366508f, 3.3125f, 0, 1, 0))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1072.008f, -1670.024f, 3.4501f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 32.8933f);
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1065.118f, -1668.928f, 6.39261f, -1058.99f, -1664.484f, 3.43099f, 4f, 0, 1, 0))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1072.008f, -1670.024f, 3.4501f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 32.8933f);
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1104.535f, -1638.888f, 3.640529f, -1109.648f, -1642.475f, 6.45303f, 4.875f, 0, 1, 0))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1102.954f, -1636.665f, 3.5846f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 7.4969f);
		}
	}
	if (iParam0 == 1)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (GlobalFunc_2236())
			{
				if (PATHFIND::GET_SAFE_COORD_FOR_PED(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, &Var3, 0))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var3, 1, 0, 0, 1);
				}
			}
		}
	}
	TASK::SET_SCENARIO_GROUP_ENABLED("ARMENIAN_CATS", 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(25.85983f, -1098.932f, -43.78194f) - Vector(2.5625f, 6.75f, 9.75f), Vector(25.85983f, -1098.932f, -43.78194f) + Vector(2.5625f, 6.75f, 9.75f), 1, 1);
}



void func_582()//Position - 0x551EC
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_1950))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1950, "MISSARMENIAN2", "open_garage_door", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(iLocal_1950, "open_garage_door", "MISSARMENIAN2", -1f);
		}
		ENTITY::SET_ENTITY_COLLISION(iLocal_1950, 1, 0);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_1950);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_1951))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1951, "MISSARMENIAN2", "open_garage_door", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(iLocal_1951, "open_garage_door", "MISSARMENIAN2", -1f);
		}
		ENTITY::SET_ENTITY_COLLISION(iLocal_1951, 1, 0);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_1951);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1952))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1952);
	}
}


void func_584(int iParam0)//Position - 0x552AD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_1707[iVar0 /*6*/].f_1 == 1)
		{
			if (Local_1707[iVar0 /*6*/].f_4 == 0 || (Local_1707[iVar0 /*6*/].f_4 == 1 && iParam0 == 0))
			{
				Local_1707[iVar0 /*6*/].f_2 = 99;
				Local_1707[iVar0 /*6*/].f_3 = 0;
			}
		}
		iVar0++;
	}
}



int func_587()//Position - 0x55360
{
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bagger"), 1);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), 0);
	}
	PED::SET_PED_NON_CREATION_AREA(Vector(9.711103f, -1633.074f, -1099.032f) - Vector(7.8125f, 63.25f, 46.375f), Vector(9.711103f, -1633.074f, -1099.032f) + Vector(7.8125f, 63.25f, 46.375f));
	func_413(2);
	Global_SAVE_DATA.COMPONENTS_ARRAY.FRANKLIN_ORIGINAL_OUTFIT_ID = func_588(PLAYER::PLAYER_PED_ID());
	MISC::CLEAR_AREA(-60.8903f, -1111.104f, 25.4353f, 5f, 1, 1, 0, 0);
	MISC::CLEAR_AREA(-1098.662f, -1634.21f, 3.5739f, 100f, 1, 1, 0, 0);
	MISC::ENABLE_DISPATCH_SERVICE(3, 0);
	MISC::ENABLE_DISPATCH_SERVICE(5, 0);
	HUD::REQUEST_ADDITIONAL_TEXT("ARM2", 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(4.7111f, -1657.686f, -1081.547f) - Vector(4f, 10f, 11f), Vector(4.7111f, -1657.686f, -1081.547f) + Vector(4f, 10f, 11f), 0, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(3.5395f, -1615.618f, -1113.897f) - Vector(2f, 1.8f, 1.6f), Vector(3.5395f, -1615.618f, -1113.897f) + Vector(2f, 1.8f, 1.6f), 0, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(5.211141f, -1671.848f, -1070.388f) - Vector(2.125f, 8.9375f, 9.25f), Vector(5.211141f, -1671.848f, -1070.388f) + Vector(2.125f, 8.9375f, 9.25f), 0, 1);
	PATHFIND::SET_ROADS_IN_AREA(-1159.587f, -1594.754f, 0.2391f, -1119.587f, -1554.754f, 13.2391f, 0, 1);
	TASK::ADD_COVER_BLOCKING_AREA(Vector(3.4f, -1654.1f, -1079f) - Vector(1f, 1f, 1f), Vector(3.4f, -1654.1f, -1079f) + Vector(1f, 1f, 1f), 1, 1, 1, 0);
	TASK::SET_SCENARIO_GROUP_ENABLED("ARMENIAN_CATS", 1);
	Local_1919[0 /*3*/] = 1000;
	Local_1919[0 /*3*/].f_1 = 0;
	Local_1919[0 /*3*/].f_2 = 0;
	Local_1919[1 /*3*/] = 1600;
	Local_1919[1 /*3*/].f_1 = 0;
	Local_1919[1 /*3*/].f_2 = 1;
	Local_1919[2 /*3*/] = 2200;
	Local_1919[2 /*3*/].f_1 = 0;
	Local_1919[2 /*3*/].f_2 = 2;
	Local_1919[3 /*3*/] = 2700;
	Local_1919[3 /*3*/].f_1 = 0;
	Local_1919[3 /*3*/].f_2 = 3;
	Local_1919[4 /*3*/] = 3000;
	Local_1919[4 /*3*/].f_1 = 0;
	Local_1919[4 /*3*/].f_2 = 5;
	Local_1919[5 /*3*/] = 3400;
	Local_1919[5 /*3*/].f_1 = 0;
	Local_1919[5 /*3*/].f_2 = 4;
	Local_1919[6 /*3*/] = 4000;
	Local_1919[6 /*3*/].f_1 = 0;
	Local_1919[6 /*3*/].f_2 = 6;
	Local_1919[7 /*3*/] = 6500;
	Local_1919[7 /*3*/].f_1 = 0;
	Local_1919[7 /*3*/].f_2 = 7;
	Local_2034[0 /*3*/] = { -1118.997f, -1591.681f, 3.576f };
	Local_2034[1 /*3*/] = { -1128.41f, -1608.989f, 3.3985f };
	Local_2034[2 /*3*/] = { -1104.139f, -1613.417f, 3.7148f };
	Local_2034[3 /*3*/] = { -1108.571f, -1632.442f, 3.6161f };
	Local_2034[4 /*3*/] = { -1088.913f, -1632.338f, 3.7329f };
	Local_2034[5 /*3*/] = { -1095.361f, -1648.256f, 3.3985f };
	Local_2034[6 /*3*/] = { -1076.712f, -1651.317f, 3.5013f };
	Local_2034[7 /*3*/] = { -1083.716f, -1672.549f, 3.7051f };
	Local_2034[8 /*3*/] = { -1067.681f, -1662.176f, 3.6078f };
	Local_2034[9 /*3*/] = { -1067.064f, -1670.28f, 3.4729f };
	func_146(8, 12, 1);
	func_146(9, 12, 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(GlobalFunc_4931(1, 0), 1);
	return 1;
}

int func_588(int iParam0)//Position - 0x55720
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_308(iParam0, 3, -1);
	iVar1 = func_308(iParam0, 4, -1);
	return (iVar0 + iVar1 * 100);
}

void func_589()//Position - 0x55743
{
	func_591();
	sLocal_45 = "ARM2";
	cLocal_1641 = "AR2AUD";
	iLocal_2217 = joaat("u_m_o_tramp_01");
	iLocal_2218 = joaat("g_m_y_mexgoon_01");
	iLocal_2219 = joaat("g_m_y_mexgoon_03");
	iLocal_2033 = joaat("ig_lamardavis");
	Local_1070[0 /*14*/] = PLAYER::PLAYER_PED_ID();
	func_590(17, 0, 2);
	func_590(0, 0, 11);
	func_590(1, 2, 9);
	func_590(2, 2, 8);
	func_590(3, 3, 4);
	func_590(4, 7, 10);
	func_590(5, 0, 11);
	func_590(6, 7, 8);
	func_590(7, 2, 9);
	func_590(8, 2, 8);
	func_590(9, 2, 6);
	func_590(10, 6, 8);
	func_590(11, 6, 8);
	func_590(12, 2, 8);
	func_590(13, 2, 6);
	func_590(14, 6, 8);
	func_590(15, 0, 6);
	func_590(16, 4, 8);
	func_590(18, 6, 8);
	func_590(19, 2, 6);
	PED::_0xF2BEBCDFAFDAA19E(0);
}

void func_590(int iParam0, int iParam1, int iParam2)//Position - 0x55833
{
	Local_49[iParam0 /*3*/] = iParam1;
	Local_49[iParam0 /*3*/].f_1 = iParam2;
}

void func_591()//Position - 0x5584D
{
	Local_1067 = { Local_1067 };
	PED::ADD_RELATIONSHIP_GROUP("MYFRIEND", &iLocal_1471);
	PED::ADD_RELATIONSHIP_GROUP("FOE", &iLocal_1472);
	PED::ADD_RELATIONSHIP_GROUP("WARY", &iLocal_1474);
	PED::ADD_RELATIONSHIP_GROUP("IGNORE", &iLocal_1473);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1471, iLocal_1472);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1472, iLocal_1471);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_1471, iLocal_1473);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_1472, iLocal_1473);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_1472, iLocal_1474);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_1473, iLocal_1471);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_1473, iLocal_1472);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_1474, iLocal_1471);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_1474, iLocal_1473);
}

void func_592(int iParam0)//Position - 0x558F6
{
	func_579(iParam0);
	SCRIPT::TERMINATE_THIS_THREAD();
}



