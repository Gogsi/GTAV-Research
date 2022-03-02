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
	float fLocal_47 = 0f;
	int iLocal_48[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	struct<22> Local_85 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	struct<22> Local_110 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	struct<25> Local_135[3];
	struct<25> Local_211[31];
	struct<25> Local_987[7];
	struct<25> Local_1163[17];
	struct<21> Local_1589 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	struct<25> Local_1614[4];
	struct<25> Local_1715[2];
	struct<13> Local_1766 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	struct<13> Local_1790 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	struct<13> Local_1814 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	struct<13> Local_1838 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	struct<13> Local_1862 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<13> Local_1886 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<13> Local_1910 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	struct<13> Local_1934 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	struct<13> Local_1958 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	struct<19> Local_1982 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	struct<19> Local_2006 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	struct<19> Local_2030 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	struct<24> Local_2054[4];
	struct<19> Local_2151 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2170 = 0;
	var uLocal_2171 = 0;
	var uLocal_2172 = 0;
	var uLocal_2173 = 0;
	var uLocal_2174 = 0;
	struct<3> Local_2175 = { 0, 0, 0 } ;
	var uLocal_2178 = 0;
	var uLocal_2179 = 0;
	var uLocal_2180 = 0;
	var uLocal_2181 = 0;
	var uLocal_2182 = 0;
	var uLocal_2183 = 0;
	var uLocal_2184 = 0;
	var uLocal_2185 = 0;
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 0;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = 0;
	var uLocal_2196 = 0;
	var uLocal_2197 = 0;
	var uLocal_2198 = 0;
	struct<3> Local_2199 = { 0, 0, 0 } ;
	var uLocal_2202 = 0;
	var uLocal_2203 = 0;
	var uLocal_2204 = 0;
	var uLocal_2205 = 0;
	var uLocal_2206 = 0;
	var uLocal_2207 = 0;
	var uLocal_2208 = 0;
	var uLocal_2209 = 0;
	var uLocal_2210 = 0;
	var uLocal_2211 = 0;
	var uLocal_2212 = 0;
	var uLocal_2213 = 0;
	var uLocal_2214 = 0;
	var uLocal_2215 = 0;
	var uLocal_2216 = 0;
	var uLocal_2217 = 0;
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 0;
	var uLocal_2222 = 0;
	struct<3> Local_2223 = { 0, 0, 0 } ;
	var uLocal_2226 = 0;
	var uLocal_2227 = 0;
	var uLocal_2228 = 0;
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = 0;
	var uLocal_2232 = 0;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
	var uLocal_2237 = 0;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	var uLocal_2246 = 0;
	struct<3> Local_2247 = { 0, 0, 0 } ;
	var uLocal_2250 = 0;
	var uLocal_2251 = 0;
	var uLocal_2252 = 0;
	var uLocal_2253 = 0;
	var uLocal_2254 = 0;
	var uLocal_2255 = 0;
	var uLocal_2256 = 0;
	var uLocal_2257 = 0;
	var uLocal_2258 = 0;
	var uLocal_2259 = 0;
	var uLocal_2260 = 0;
	var uLocal_2261 = 0;
	var uLocal_2262 = 0;
	var uLocal_2263 = 0;
	var uLocal_2264 = 0;
	var uLocal_2265 = 0;
	var uLocal_2266 = 0;
	var uLocal_2267 = 0;
	var uLocal_2268 = 0;
	var uLocal_2269 = 0;
	var uLocal_2270 = 0;
	struct<24> Local_2271[3];
	struct<4> Local_2344 = { 0, 0, 0, 0 } ;
	var uLocal_2348 = 0;
	var uLocal_2349 = 0;
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = 0;
	struct<4> Local_2368 = { 0, 0, 0, 0 } ;
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
	struct<4> Local_2392 = { 0, 0, 0, 0 } ;
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
	struct<4> Local_2416 = { 0, 0, 0, 0 } ;
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
	struct<19> Local_2440 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	struct<15> Local_2464[3];
	struct<14> Local_2510 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2524 = 0;
	struct<14> Local_2525 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2539 = 0;
	struct<14> Local_2540 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2554 = 0;
	struct<14> Local_2555 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2569 = 0;
	struct<3> Local_2570 = { 0, 0, 0 } ;
	var uLocal_2573 = 0;
	var uLocal_2574 = 0;
	var uLocal_2575 = 0;
	var uLocal_2576 = 0;
	var uLocal_2577 = 0;
	var uLocal_2578 = 0;
	var uLocal_2579 = 0;
	var uLocal_2580 = 0;
	var uLocal_2581 = 0;
	var uLocal_2582 = 0;
	var uLocal_2583 = 0;
	var uLocal_2584 = 0;
	struct<3> Local_2585 = { 0, 0, 0 } ;
	var uLocal_2588 = 0;
	var uLocal_2589 = 0;
	var uLocal_2590 = 0;
	var uLocal_2591 = 0;
	var uLocal_2592 = 0;
	var uLocal_2593 = 0;
	var uLocal_2594 = 0;
	var uLocal_2595 = 0;
	var uLocal_2596 = 0;
	var uLocal_2597 = 0;
	var uLocal_2598 = 0;
	var uLocal_2599 = 0;
	struct<17> Local_2600 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<33> Local_2617[6];
	struct<29> Local_2816[7];
	struct<3> Local_3020[2];
	struct<7> Local_3027[3];
	struct<6> Local_3049 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_3055 = 0;
	var uLocal_3056 = 1092616192;
	var uLocal_3057 = 1101004800;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	var uLocal_3060 = 0;
	var uLocal_3061 = 0;
	var uLocal_3062 = 0;
	var uLocal_3063 = 0;
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
	var uLocal_3066 = 3;
	var uLocal_3067 = 0;
	var uLocal_3068 = 0;
	var uLocal_3069 = 0;
	var uLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 0;
	var uLocal_3073 = 0;
	struct<18> Local_3074 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	int iLocal_3095 = 0;
	bool bLocal_3096 = 0;
	int iLocal_3097 = 0;
	bool bLocal_3098 = 0;
	int iLocal_3099 = 0;
	int iLocal_3100 = 0;
	bool bLocal_3101 = 0;
	int iLocal_3102 = 0;
	int iLocal_3103 = 0;
	int iLocal_3104 = 0;
	int iLocal_3105 = 0;
	int iLocal_3106 = 0;
	int iLocal_3107[3] = { 0, 0, 0 };
	int iLocal_3111[3] = { 0, 0, 0 };
	int iLocal_3115 = 0;
	bool bLocal_3116 = 0;
	int iLocal_3117 = 0;
	int iLocal_3118 = 0;
	int iLocal_3119 = 0;
	int iLocal_3120 = 0;
	int iLocal_3121 = 0;
	int iLocal_3122 = 0;
	int iLocal_3123 = 0;
	int iLocal_3124 = 0;
	int iLocal_3125 = 0;
	int iLocal_3126 = 0;
	int iLocal_3127 = 0;
	int iLocal_3128 = 0;
	bool bLocal_3129 = 0;
	int iLocal_3130 = 0;
	int iLocal_3131 = 0;
	int iLocal_3132 = 0;
	int iLocal_3133 = 0;
	int iLocal_3134 = 0;
	bool bLocal_3135 = 0;
	int iLocal_3136 = 0;
	int iLocal_3137 = 0;
	int iLocal_3138 = 0;
	int iLocal_3139 = 0;
	int iLocal_3140 = 0;
	int iLocal_3141 = 0;
	int iLocal_3142 = 0;
	int iLocal_3143 = 0;
	int iLocal_3144 = 0;
	int iLocal_3145[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3196 = 0;
	int iLocal_3197 = 0;
	int iLocal_3198 = 0;
	int iLocal_3199 = 0;
	int iLocal_3200 = 0;
	int iLocal_3201 = 0;
	int iLocal_3202 = 0;
	int iLocal_3203 = 0;
	int iLocal_3204[2] = { 0, 0 };
	int iLocal_3207 = 0;
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
	int iLocal_3232 = 0;
	int iLocal_3233 = 0;
	int iLocal_3234 = 0;
	int iLocal_3235 = 0;
	int iLocal_3236 = 0;
	int iLocal_3237 = 0;
	int iLocal_3238 = 0;
	int iLocal_3239 = 0;
	int iLocal_3240 = 0;
	int iLocal_3241 = 0;
	int iLocal_3242 = 0;
	int iLocal_3243 = 0;
	int iLocal_3244 = 0;
	int iLocal_3245 = 0;
	int iLocal_3246 = 0;
	int iLocal_3247 = 0;
	int iLocal_3248 = 0;
	int iLocal_3249 = 0;
	int iLocal_3250 = 0;
	int iLocal_3251 = 0;
	int iLocal_3252 = 0;
	int iLocal_3253 = 0;
	int iLocal_3254 = 0;
	int iLocal_3255[2] = { 0, 0 };
	int iLocal_3258 = 0;
	int iLocal_3259 = 0;
	int iLocal_3260 = 0;
	int iLocal_3261 = 0;
	int iLocal_3262[17] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3280 = 0;
	int iLocal_3281 = 0;
	int iLocal_3282 = 0;
	int iLocal_3283 = 0;
	int iLocal_3284 = 0;
	int iLocal_3285 = 0;
	int iLocal_3286 = 0;
	int iLocal_3287 = 0;
	int iLocal_3288 = 0;
	int iLocal_3289 = 0;
	int iLocal_3290 = 0;
	int iLocal_3291 = 0;
	int iLocal_3292[27] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3320 = 0;
	int iLocal_3321 = 0;
	int iLocal_3322 = 0;
	int iLocal_3323 = 0;
	int iLocal_3324[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3332 = 0;
	int iLocal_3333 = 0;
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
	int iLocal_3344 = 0;
	int iLocal_3345 = 0;
	int iLocal_3346 = 0;
	int iLocal_3347 = 0;
	int iLocal_3348[2] = { 0, 0 };
	int iLocal_3351 = 0;
	int iLocal_3352[2] = { 0, 0 };
	int iLocal_3355 = 0;
	int iLocal_3356 = 0;
	float fLocal_3357 = 0f;
	float fLocal_3358 = 0f;
	float fLocal_3359 = 0f;
	float fLocal_3360 = 0f;
	float fLocal_3361 = 0f;
	float fLocal_3362 = 0f;
	float fLocal_3363 = 0f;
	struct<3> Local_3364 = { 0, 0, 0 } ;
	var uLocal_3367 = 0;
	var uLocal_3368 = 0;
	var uLocal_3369 = 0;
	var uLocal_3370 = 0;
	var uLocal_3371 = 0;
	var uLocal_3372 = 0;
	struct<3> Local_3373 = { 0, 0, 0 } ;
	struct<3> Local_3376 = { 0, 0, 0 } ;
	struct<3> Local_3379 = { 0, 0, 0 } ;
	struct<3> Local_3382 = { 0, 0, 0 } ;
	struct<3> Local_3385 = { 0, 0, 0 } ;
	struct<3> Local_3388 = { 0, 0, 0 } ;
	struct<3> Local_3391 = { 0, 0, 0 } ;
	struct<3> Local_3394 = { 0, 0, 0 } ;
	struct<3> Local_3397 = { 0, 0, 0 } ;
	struct<3> Local_3400 = { 0, 0, 0 } ;
	struct<3> Local_3403[26];
	struct<3> Local_3482 = { 0, 0, 0 } ;
	struct<3> Local_3485 = { 0, 0, 0 } ;
	struct<3> Local_3488 = { 0, 0, 0 } ;
	struct<3> Local_3491 = { 0, 0, 0 } ;
	struct<3> Local_3494 = { 0, 0, 0 } ;
	struct<3> Local_3497 = { 0, 0, 0 } ;
	struct<3> Local_3500 = { 0, 0, 0 } ;
	struct<3> Local_3503 = { 0, 0, 0 } ;
	struct<3> Local_3506 = { 0, 0, 0 } ;
	struct<3> Local_3509 = { 0, 0, 0 } ;
	struct<3> Local_3512 = { 0, 0, 0 } ;
	struct<3> Local_3515 = { 0, 0, 0 } ;
	char* sLocal_3518 = NULL;
	char* sLocal_3519 = NULL;
	int iLocal_3520 = 0;
	int iLocal_3521 = 0;
	int iLocal_3522 = 0;
	int iLocal_3523 = 0;
	int iLocal_3524[40] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3565 = 0;
	int iLocal_3566 = 0;
	int iLocal_3567[4] = { 0, 0, 0, 0 };
	int iLocal_3572[26] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3599 = 0;
	int iLocal_3600 = 0;
	var uLocal_3601 = 0;
	int iLocal_3602 = 0;
	int iLocal_3603 = 0;
	int iLocal_3604 = 0;
	var uLocal_3605 = 0;
	var uLocal_3606 = 0;
	var uLocal_3607 = 0;
	var uLocal_3608 = 0;
	var uLocal_3609 = 0;
	var uLocal_3610 = 0;
	var uLocal_3611 = 0;
	int iLocal_3612 = 0;
	int iLocal_3613[5] = { 0, 0, 0, 0, 0 };
	int iLocal_3619 = 0;
	int iLocal_3620 = 0;
	int iLocal_3621 = 0;
	int iLocal_3622 = 0;
	int iLocal_3623 = 0;
	int iLocal_3624 = 0;
	int iLocal_3625 = 0;
	int iLocal_3626[38] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_3665 = 0;
	int iLocal_3666[4] = { 0, 0, 0, 0 };
	struct<3> Local_3671[4];
	int iLocal_3684 = 0;
	var uLocal_3685 = 0;
	struct<6> Local_3686 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_3692 = { 0, 0, 0, 0, 0, 0 } ;
	struct<11> Local_3698 = { 0, 0, 0, 0, 0, 0, 0, 21, 6, 0, 0 } ;
	var uLocal_3709 = 0;
	var uLocal_3710 = 4;
	var uLocal_3711 = 0;
	var uLocal_3712 = 0;
	var uLocal_3713 = 0;
	var uLocal_3714 = 0;
	var uLocal_3715 = 0;
	var uLocal_3716 = 0;
	var uLocal_3717 = 0;
	var uLocal_3718 = 4;
	var uLocal_3719 = 0;
	var uLocal_3720 = 0;
	var uLocal_3721 = 0;
	var uLocal_3722 = 0;
	var uLocal_3723 = 4;
	var uLocal_3724 = 0;
	var uLocal_3725 = 0;
	var uLocal_3726 = 0;
	var uLocal_3727 = 0;
	var uLocal_3728 = 4;
	var uLocal_3729 = 0;
	var uLocal_3730 = 0;
	var uLocal_3731 = 0;
	var uLocal_3732 = 0;
	var uLocal_3733 = 0;
	var uLocal_3734 = 4;
	var uLocal_3735 = 0;
	var uLocal_3736 = 0;
	var uLocal_3737 = 0;
	var uLocal_3738 = 0;
	var uLocal_3739 = 4;
	var uLocal_3740 = 0;
	var uLocal_3741 = 0;
	var uLocal_3742 = 0;
	var uLocal_3743 = 0;
	var uLocal_3744 = 4;
	var uLocal_3745 = 0;
	var uLocal_3746 = 0;
	var uLocal_3747 = 0;
	var uLocal_3748 = 0;
	var uLocal_3749 = 0;
	var uLocal_3750 = 0;
	var uLocal_3751 = 0;
	var uLocal_3752 = 0;
	var uLocal_3753 = 0;
	struct<21> Local_3754 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_3788 = 16;
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
	var uLocal_3953[3] = { 0, 0, 0 };
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
	int iLocal_3975 = 0;
	int iLocal_3976 = 0;
	struct<1219> Local_3977 = { 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 20, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 16, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, 0 } ;
	var uLocal_5196 = 0;
	var uLocal_5197 = 0;
	var uLocal_5198 = 0;
	var uLocal_5199 = 0;
	var uLocal_5200 = 0;
	var uLocal_5201 = 0;
	var uLocal_5202 = 0;
	var uLocal_5203 = 0;
	var uLocal_5204 = 0;
	var uLocal_5205 = 0;
	var uLocal_5206 = 0;
	var uLocal_5207 = 0;
	var uLocal_5208 = 0;
	var uLocal_5209 = 0;
	var uLocal_5210 = -1082130432;
	var uLocal_5211 = -1082130432;
	var uLocal_5212 = 1;
	var uLocal_5213 = 1;
	var uLocal_5214 = 1;
	var uLocal_5215 = -1;
	var uLocal_5216 = -1;
	var uLocal_5217 = -1;
	var uLocal_5218 = 0;
	var uLocal_5219 = 0;
	var uLocal_5220 = 0;
	var uLocal_5221 = 0;
	var uLocal_5222 = 2;
	var uLocal_5223 = 0;
	var uLocal_5224 = 0;
	var uLocal_5225 = 2;
	var uLocal_5226 = 0;
	var uLocal_5227 = 0;
	var uLocal_5228 = 20;
	var uLocal_5229 = 0;
	var uLocal_5230 = 0;
	var uLocal_5231 = 0;
	var uLocal_5232 = -1;
	var uLocal_5233 = 0;
	var uLocal_5234 = 0;
	var uLocal_5235 = 0;
	var uLocal_5236 = 0;
	var uLocal_5237 = 0;
	var uLocal_5238 = 0;
	var uLocal_5239 = 0;
	var uLocal_5240 = 0;
	var uLocal_5241 = 0;
	var uLocal_5242 = 0;
	var uLocal_5243 = 0;
	var uLocal_5244 = 0;
	var uLocal_5245 = 0;
	var uLocal_5246 = 0;
	var uLocal_5247 = 0;
	var uLocal_5248 = 0;
	var uLocal_5249 = 0;
	var uLocal_5250 = 0;
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
	var uLocal_5262 = 1065353216;
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
	var uLocal_5283 = 0;
	var uLocal_5284 = 0;
	var uLocal_5285 = 0;
	var uLocal_5286 = 0;
	var uLocal_5287 = 0;
	var uLocal_5288 = 0;
	var uLocal_5289 = -1;
	var uLocal_5290 = 0;
	var uLocal_5291 = 0;
	var uLocal_5292 = 0;
	var uLocal_5293 = 0;
	var uLocal_5294 = 0;
	var uLocal_5295 = 0;
	var uLocal_5296 = 0;
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
	var uLocal_5309 = 0;
	var uLocal_5310 = 0;
	var uLocal_5311 = 0;
	var uLocal_5312 = 0;
	var uLocal_5313 = 0;
	var uLocal_5314 = 0;
	var uLocal_5315 = 0;
	var uLocal_5316 = 0;
	var uLocal_5317 = 0;
	var uLocal_5318 = 0;
	var uLocal_5319 = 1065353216;
	var uLocal_5320 = 0;
	var uLocal_5321 = 0;
	var uLocal_5322 = 0;
	var uLocal_5323 = 0;
	var uLocal_5324 = 0;
	var uLocal_5325 = 0;
	var uLocal_5326 = 0;
	var uLocal_5327 = 0;
	var uLocal_5328 = 0;
	var uLocal_5329 = 0;
	var uLocal_5330 = 0;
	var uLocal_5331 = 0;
	var uLocal_5332 = 0;
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
	var uLocal_5346 = -1;
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
	var uLocal_5365 = 0;
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
	var uLocal_5376 = 1065353216;
	var uLocal_5377 = 0;
	var uLocal_5378 = 0;
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
	var uLocal_5391 = 0;
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
	var uLocal_5403 = -1;
	var uLocal_5404 = 0;
	var uLocal_5405 = 0;
	var uLocal_5406 = 0;
	var uLocal_5407 = 0;
	var uLocal_5408 = 0;
	var uLocal_5409 = 0;
	var uLocal_5410 = 0;
	var uLocal_5411 = 0;
	var uLocal_5412 = 0;
	var uLocal_5413 = 0;
	var uLocal_5414 = 0;
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
	var uLocal_5430 = 0;
	var uLocal_5431 = 0;
	var uLocal_5432 = 0;
	var uLocal_5433 = 1065353216;
	var uLocal_5434 = 0;
	var uLocal_5435 = 0;
	var uLocal_5436 = 0;
	var uLocal_5437 = 0;
	var uLocal_5438 = 0;
	var uLocal_5439 = 0;
	var uLocal_5440 = 0;
	var uLocal_5441 = 0;
	var uLocal_5442 = 0;
	var uLocal_5443 = 0;
	var uLocal_5444 = 0;
	var uLocal_5445 = 0;
	var uLocal_5446 = 0;
	var uLocal_5447 = 0;
	var uLocal_5448 = 0;
	var uLocal_5449 = 0;
	var uLocal_5450 = 0;
	var uLocal_5451 = 0;
	var uLocal_5452 = 0;
	var uLocal_5453 = 0;
	var uLocal_5454 = 0;
	var uLocal_5455 = 0;
	var uLocal_5456 = 0;
	var uLocal_5457 = 0;
	var uLocal_5458 = 0;
	var uLocal_5459 = 0;
	var uLocal_5460 = -1;
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
	var uLocal_5487 = 0;
	var uLocal_5488 = 0;
	var uLocal_5489 = 0;
	var uLocal_5490 = 1065353216;
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
	var uLocal_5514 = 0;
	var uLocal_5515 = 0;
	var uLocal_5516 = 0;
	var uLocal_5517 = -1;
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
	var uLocal_5544 = 0;
	var uLocal_5545 = 0;
	var uLocal_5546 = 0;
	var uLocal_5547 = 1065353216;
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
	var uLocal_5571 = 0;
	var uLocal_5572 = 0;
	var uLocal_5573 = 0;
	var uLocal_5574 = -1;
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
	var uLocal_5601 = 0;
	var uLocal_5602 = 0;
	var uLocal_5603 = 0;
	var uLocal_5604 = 1065353216;
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
	var uLocal_5628 = 0;
	var uLocal_5629 = 0;
	var uLocal_5630 = 0;
	var uLocal_5631 = -1;
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
	var uLocal_5658 = 0;
	var uLocal_5659 = 0;
	var uLocal_5660 = 0;
	var uLocal_5661 = 1065353216;
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
	var uLocal_5685 = 0;
	var uLocal_5686 = 0;
	var uLocal_5687 = 0;
	var uLocal_5688 = -1;
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
	var uLocal_5715 = 0;
	var uLocal_5716 = 0;
	var uLocal_5717 = 0;
	var uLocal_5718 = 1065353216;
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
	var uLocal_5742 = 0;
	var uLocal_5743 = 0;
	var uLocal_5744 = 0;
	var uLocal_5745 = -1;
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
	var uLocal_5772 = 0;
	var uLocal_5773 = 0;
	var uLocal_5774 = 0;
	var uLocal_5775 = 1065353216;
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
	var uLocal_5799 = 0;
	var uLocal_5800 = 0;
	var uLocal_5801 = 0;
	var uLocal_5802 = -1;
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
	var uLocal_5829 = 0;
	var uLocal_5830 = 0;
	var uLocal_5831 = 0;
	var uLocal_5832 = 1065353216;
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
	var uLocal_5856 = 0;
	var uLocal_5857 = 0;
	var uLocal_5858 = 0;
	var uLocal_5859 = -1;
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
	var uLocal_5886 = 0;
	var uLocal_5887 = 0;
	var uLocal_5888 = 0;
	var uLocal_5889 = 1065353216;
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
	var uLocal_5913 = 0;
	var uLocal_5914 = 0;
	var uLocal_5915 = 0;
	var uLocal_5916 = -1;
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
	var uLocal_5943 = 0;
	var uLocal_5944 = 0;
	var uLocal_5945 = 0;
	var uLocal_5946 = 1065353216;
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
	var uLocal_5970 = 0;
	var uLocal_5971 = 0;
	var uLocal_5972 = 0;
	var uLocal_5973 = -1;
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
	var uLocal_6000 = 0;
	var uLocal_6001 = 0;
	var uLocal_6002 = 0;
	var uLocal_6003 = 1065353216;
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
	var uLocal_6027 = 0;
	var uLocal_6028 = 0;
	var uLocal_6029 = 0;
	var uLocal_6030 = -1;
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
	var uLocal_6057 = 0;
	var uLocal_6058 = 0;
	var uLocal_6059 = 0;
	var uLocal_6060 = 1065353216;
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
	var uLocal_6084 = 0;
	var uLocal_6085 = 0;
	var uLocal_6086 = 0;
	var uLocal_6087 = -1;
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
	var uLocal_6114 = 0;
	var uLocal_6115 = 0;
	var uLocal_6116 = 0;
	var uLocal_6117 = 1065353216;
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
	var uLocal_6141 = 0;
	var uLocal_6142 = 0;
	var uLocal_6143 = 0;
	var uLocal_6144 = -1;
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
	var uLocal_6171 = 0;
	var uLocal_6172 = 0;
	var uLocal_6173 = 0;
	var uLocal_6174 = 1065353216;
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
	var uLocal_6198 = 0;
	var uLocal_6199 = 0;
	var uLocal_6200 = 0;
	var uLocal_6201 = -1;
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
	var uLocal_6228 = 0;
	var uLocal_6229 = 0;
	var uLocal_6230 = 0;
	var uLocal_6231 = 1065353216;
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
	var uLocal_6255 = 0;
	var uLocal_6256 = 0;
	var uLocal_6257 = 0;
	var uLocal_6258 = -1;
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
	var uLocal_6285 = 0;
	var uLocal_6286 = 0;
	var uLocal_6287 = 0;
	var uLocal_6288 = 1065353216;
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
	var uLocal_6312 = 0;
	var uLocal_6313 = 0;
	var uLocal_6314 = 0;
	var uLocal_6315 = -1;
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
	var uLocal_6342 = 0;
	var uLocal_6343 = 0;
	var uLocal_6344 = 0;
	var uLocal_6345 = 1065353216;
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
	var uLocal_6369 = 16;
	var uLocal_6370 = 0;
	var uLocal_6371 = -1082130432;
	var uLocal_6372 = 0;
	var uLocal_6373 = -1082130432;
	var uLocal_6374 = 0;
	var uLocal_6375 = -1082130432;
	var uLocal_6376 = 0;
	var uLocal_6377 = -1082130432;
	var uLocal_6378 = 0;
	var uLocal_6379 = -1082130432;
	var uLocal_6380 = 0;
	var uLocal_6381 = -1082130432;
	var uLocal_6382 = 0;
	var uLocal_6383 = -1082130432;
	var uLocal_6384 = 0;
	var uLocal_6385 = -1082130432;
	var uLocal_6386 = 0;
	var uLocal_6387 = -1082130432;
	var uLocal_6388 = 0;
	var uLocal_6389 = -1082130432;
	var uLocal_6390 = 0;
	var uLocal_6391 = -1082130432;
	var uLocal_6392 = 0;
	var uLocal_6393 = -1082130432;
	var uLocal_6394 = 0;
	var uLocal_6395 = -1082130432;
	var uLocal_6396 = 0;
	var uLocal_6397 = -1082130432;
	var uLocal_6398 = 0;
	var uLocal_6399 = -1082130432;
	var uLocal_6400 = 0;
	var uLocal_6401 = -1082130432;
	var uLocal_6402 = 16;
	var uLocal_6403 = 0;
	var uLocal_6404 = -1082130432;
	var uLocal_6405 = 0;
	var uLocal_6406 = -1082130432;
	var uLocal_6407 = 0;
	var uLocal_6408 = -1082130432;
	var uLocal_6409 = 0;
	var uLocal_6410 = -1082130432;
	var uLocal_6411 = 0;
	var uLocal_6412 = -1082130432;
	var uLocal_6413 = 0;
	var uLocal_6414 = -1082130432;
	var uLocal_6415 = 0;
	var uLocal_6416 = -1082130432;
	var uLocal_6417 = 0;
	var uLocal_6418 = -1082130432;
	var uLocal_6419 = 0;
	var uLocal_6420 = -1082130432;
	var uLocal_6421 = 0;
	var uLocal_6422 = -1082130432;
	var uLocal_6423 = 0;
	var uLocal_6424 = -1082130432;
	var uLocal_6425 = 0;
	var uLocal_6426 = -1082130432;
	var uLocal_6427 = 0;
	var uLocal_6428 = -1082130432;
	var uLocal_6429 = 0;
	var uLocal_6430 = -1082130432;
	var uLocal_6431 = 0;
	var uLocal_6432 = -1082130432;
	var uLocal_6433 = 0;
	var uLocal_6434 = -1082130432;
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
	var uLocal_6451 = -1082130432;
	var uLocal_6452 = -1082130432;
	var uLocal_6453 = 1;
	var uLocal_6454 = 1;
	var uLocal_6455 = 1;
	var uLocal_6456 = -1;
	var uLocal_6457 = -1;
	var uLocal_6458 = -1;
	var uLocal_6459 = 0;
	var uLocal_6460 = 0;
	var uLocal_6461 = 0;
	var uLocal_6462 = 0;
	var uLocal_6463 = 2;
	var uLocal_6464 = 0;
	var uLocal_6465 = 0;
	var uLocal_6466 = 2;
	var uLocal_6467 = 0;
	var uLocal_6468 = 0;
	var uLocal_6469 = 20;
	var uLocal_6470 = 0;
	var uLocal_6471 = 0;
	var uLocal_6472 = 0;
	var uLocal_6473 = -1;
	var uLocal_6474 = 0;
	var uLocal_6475 = 0;
	var uLocal_6476 = 0;
	var uLocal_6477 = 0;
	var uLocal_6478 = 0;
	var uLocal_6479 = 0;
	var uLocal_6480 = 0;
	var uLocal_6481 = 0;
	var uLocal_6482 = 0;
	var uLocal_6483 = 0;
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
	var uLocal_6503 = 1065353216;
	var uLocal_6504 = 0;
	var uLocal_6505 = 0;
	var uLocal_6506 = 0;
	var uLocal_6507 = 0;
	var uLocal_6508 = 0;
	var uLocal_6509 = 0;
	var uLocal_6510 = 0;
	var uLocal_6511 = 0;
	var uLocal_6512 = 0;
	var uLocal_6513 = 0;
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
	var uLocal_6530 = -1;
	var uLocal_6531 = 0;
	var uLocal_6532 = 0;
	var uLocal_6533 = 0;
	var uLocal_6534 = 0;
	var uLocal_6535 = 0;
	var uLocal_6536 = 0;
	var uLocal_6537 = 0;
	var uLocal_6538 = 0;
	var uLocal_6539 = 0;
	var uLocal_6540 = 0;
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
	var uLocal_6560 = 1065353216;
	var uLocal_6561 = 0;
	var uLocal_6562 = 0;
	var uLocal_6563 = 0;
	var uLocal_6564 = 0;
	var uLocal_6565 = 0;
	var uLocal_6566 = 0;
	var uLocal_6567 = 0;
	var uLocal_6568 = 0;
	var uLocal_6569 = 0;
	var uLocal_6570 = 0;
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
	var uLocal_6587 = -1;
	var uLocal_6588 = 0;
	var uLocal_6589 = 0;
	var uLocal_6590 = 0;
	var uLocal_6591 = 0;
	var uLocal_6592 = 0;
	var uLocal_6593 = 0;
	var uLocal_6594 = 0;
	var uLocal_6595 = 0;
	var uLocal_6596 = 0;
	var uLocal_6597 = 0;
	var uLocal_6598 = 0;
	var uLocal_6599 = 0;
	var uLocal_6600 = 0;
	var uLocal_6601 = 0;
	var uLocal_6602 = 0;
	var uLocal_6603 = 0;
	var uLocal_6604 = 0;
	var uLocal_6605 = 0;
	var uLocal_6606 = 0;
	var uLocal_6607 = 0;
	var uLocal_6608 = 0;
	var uLocal_6609 = 0;
	var uLocal_6610 = 0;
	var uLocal_6611 = 0;
	var uLocal_6612 = 0;
	var uLocal_6613 = 0;
	var uLocal_6614 = 0;
	var uLocal_6615 = 0;
	var uLocal_6616 = 0;
	var uLocal_6617 = 1065353216;
	var uLocal_6618 = 0;
	var uLocal_6619 = 0;
	var uLocal_6620 = 0;
	var uLocal_6621 = 0;
	var uLocal_6622 = 0;
	var uLocal_6623 = 0;
	var uLocal_6624 = 0;
	var uLocal_6625 = 0;
	var uLocal_6626 = 0;
	var uLocal_6627 = 0;
	var uLocal_6628 = 0;
	var uLocal_6629 = 0;
	var uLocal_6630 = 0;
	var uLocal_6631 = 0;
	var uLocal_6632 = 0;
	var uLocal_6633 = 0;
	var uLocal_6634 = 0;
	var uLocal_6635 = 0;
	var uLocal_6636 = 0;
	var uLocal_6637 = 0;
	var uLocal_6638 = 0;
	var uLocal_6639 = 0;
	var uLocal_6640 = 0;
	var uLocal_6641 = 0;
	var uLocal_6642 = 0;
	var uLocal_6643 = 0;
	var uLocal_6644 = -1;
	var uLocal_6645 = 0;
	var uLocal_6646 = 0;
	var uLocal_6647 = 0;
	var uLocal_6648 = 0;
	var uLocal_6649 = 0;
	var uLocal_6650 = 0;
	var uLocal_6651 = 0;
	var uLocal_6652 = 0;
	var uLocal_6653 = 0;
	var uLocal_6654 = 0;
	var uLocal_6655 = 0;
	var uLocal_6656 = 0;
	var uLocal_6657 = 0;
	var uLocal_6658 = 0;
	var uLocal_6659 = 0;
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
	var uLocal_6674 = 1065353216;
	var uLocal_6675 = 0;
	var uLocal_6676 = 0;
	var uLocal_6677 = 0;
	var uLocal_6678 = 0;
	var uLocal_6679 = 0;
	var uLocal_6680 = 0;
	var uLocal_6681 = 0;
	var uLocal_6682 = 0;
	var uLocal_6683 = 0;
	var uLocal_6684 = 0;
	var uLocal_6685 = 0;
	var uLocal_6686 = 0;
	var uLocal_6687 = 0;
	var uLocal_6688 = 0;
	var uLocal_6689 = 0;
	var uLocal_6690 = 0;
	var uLocal_6691 = 0;
	var uLocal_6692 = 0;
	var uLocal_6693 = 0;
	var uLocal_6694 = 0;
	var uLocal_6695 = 0;
	var uLocal_6696 = 0;
	var uLocal_6697 = 0;
	var uLocal_6698 = 0;
	var uLocal_6699 = 0;
	var uLocal_6700 = 0;
	var uLocal_6701 = -1;
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
	var uLocal_6728 = 0;
	var uLocal_6729 = 0;
	var uLocal_6730 = 0;
	var uLocal_6731 = 1065353216;
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
	var uLocal_6755 = 0;
	var uLocal_6756 = 0;
	var uLocal_6757 = 0;
	var uLocal_6758 = -1;
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
	var uLocal_6785 = 0;
	var uLocal_6786 = 0;
	var uLocal_6787 = 0;
	var uLocal_6788 = 1065353216;
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
	var uLocal_6812 = 0;
	var uLocal_6813 = 0;
	var uLocal_6814 = 0;
	var uLocal_6815 = -1;
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
	var uLocal_6842 = 0;
	var uLocal_6843 = 0;
	var uLocal_6844 = 0;
	var uLocal_6845 = 1065353216;
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
	var uLocal_6869 = 0;
	var uLocal_6870 = 0;
	var uLocal_6871 = 0;
	var uLocal_6872 = -1;
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
	var uLocal_6899 = 0;
	var uLocal_6900 = 0;
	var uLocal_6901 = 0;
	var uLocal_6902 = 1065353216;
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
	var uLocal_6926 = 0;
	var uLocal_6927 = 0;
	var uLocal_6928 = 0;
	var uLocal_6929 = -1;
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
	var uLocal_6956 = 0;
	var uLocal_6957 = 0;
	var uLocal_6958 = 0;
	var uLocal_6959 = 1065353216;
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
	var uLocal_6983 = 0;
	var uLocal_6984 = 0;
	var uLocal_6985 = 0;
	var uLocal_6986 = -1;
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
	var uLocal_7013 = 0;
	var uLocal_7014 = 0;
	var uLocal_7015 = 0;
	var uLocal_7016 = 1065353216;
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
	var uLocal_7040 = 0;
	var uLocal_7041 = 0;
	var uLocal_7042 = 0;
	var uLocal_7043 = -1;
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
	var uLocal_7070 = 0;
	var uLocal_7071 = 0;
	var uLocal_7072 = 0;
	var uLocal_7073 = 1065353216;
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
	var uLocal_7097 = 0;
	var uLocal_7098 = 0;
	var uLocal_7099 = 0;
	var uLocal_7100 = -1;
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
	var uLocal_7127 = 0;
	var uLocal_7128 = 0;
	var uLocal_7129 = 0;
	var uLocal_7130 = 1065353216;
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
	var uLocal_7154 = 0;
	var uLocal_7155 = 0;
	var uLocal_7156 = 0;
	var uLocal_7157 = -1;
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
	var uLocal_7184 = 0;
	var uLocal_7185 = 0;
	var uLocal_7186 = 0;
	var uLocal_7187 = 1065353216;
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
	var uLocal_7211 = 0;
	var uLocal_7212 = 0;
	var uLocal_7213 = 0;
	var uLocal_7214 = -1;
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
	var uLocal_7241 = 0;
	var uLocal_7242 = 0;
	var uLocal_7243 = 0;
	var uLocal_7244 = 1065353216;
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
	var uLocal_7268 = 0;
	var uLocal_7269 = 0;
	var uLocal_7270 = 0;
	var uLocal_7271 = -1;
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
	var uLocal_7298 = 0;
	var uLocal_7299 = 0;
	var uLocal_7300 = 0;
	var uLocal_7301 = 1065353216;
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
	var uLocal_7325 = 0;
	var uLocal_7326 = 0;
	var uLocal_7327 = 0;
	var uLocal_7328 = -1;
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
	var uLocal_7355 = 0;
	var uLocal_7356 = 0;
	var uLocal_7357 = 0;
	var uLocal_7358 = 1065353216;
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
	var uLocal_7382 = 0;
	var uLocal_7383 = 0;
	var uLocal_7384 = 0;
	var uLocal_7385 = -1;
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
	var uLocal_7412 = 0;
	var uLocal_7413 = 0;
	var uLocal_7414 = 0;
	var uLocal_7415 = 1065353216;
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
	var uLocal_7439 = 0;
	var uLocal_7440 = 0;
	var uLocal_7441 = 0;
	var uLocal_7442 = -1;
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
	var uLocal_7469 = 0;
	var uLocal_7470 = 0;
	var uLocal_7471 = 0;
	var uLocal_7472 = 1065353216;
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
	var uLocal_7496 = 0;
	var uLocal_7497 = 0;
	var uLocal_7498 = 0;
	var uLocal_7499 = -1;
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
	var uLocal_7526 = 0;
	var uLocal_7527 = 0;
	var uLocal_7528 = 0;
	var uLocal_7529 = 1065353216;
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
	var uLocal_7553 = 0;
	var uLocal_7554 = 0;
	var uLocal_7555 = 0;
	var uLocal_7556 = -1;
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
	var uLocal_7583 = 0;
	var uLocal_7584 = 0;
	var uLocal_7585 = 0;
	var uLocal_7586 = 1065353216;
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
	var uLocal_7610 = 16;
	var uLocal_7611 = 0;
	var uLocal_7612 = -1082130432;
	var uLocal_7613 = 0;
	var uLocal_7614 = -1082130432;
	var uLocal_7615 = 0;
	var uLocal_7616 = -1082130432;
	var uLocal_7617 = 0;
	var uLocal_7618 = -1082130432;
	var uLocal_7619 = 0;
	var uLocal_7620 = -1082130432;
	var uLocal_7621 = 0;
	var uLocal_7622 = -1082130432;
	var uLocal_7623 = 0;
	var uLocal_7624 = -1082130432;
	var uLocal_7625 = 0;
	var uLocal_7626 = -1082130432;
	var uLocal_7627 = 0;
	var uLocal_7628 = -1082130432;
	var uLocal_7629 = 0;
	var uLocal_7630 = -1082130432;
	var uLocal_7631 = 0;
	var uLocal_7632 = -1082130432;
	var uLocal_7633 = 0;
	var uLocal_7634 = -1082130432;
	var uLocal_7635 = 0;
	var uLocal_7636 = -1082130432;
	var uLocal_7637 = 0;
	var uLocal_7638 = -1082130432;
	var uLocal_7639 = 0;
	var uLocal_7640 = -1082130432;
	var uLocal_7641 = 0;
	var uLocal_7642 = -1082130432;
	var uLocal_7643 = 16;
	var uLocal_7644 = 0;
	var uLocal_7645 = -1082130432;
	var uLocal_7646 = 0;
	var uLocal_7647 = -1082130432;
	var uLocal_7648 = 0;
	var uLocal_7649 = -1082130432;
	var uLocal_7650 = 0;
	var uLocal_7651 = -1082130432;
	var uLocal_7652 = 0;
	var uLocal_7653 = -1082130432;
	var uLocal_7654 = 0;
	var uLocal_7655 = -1082130432;
	var uLocal_7656 = 0;
	var uLocal_7657 = -1082130432;
	var uLocal_7658 = 0;
	var uLocal_7659 = -1082130432;
	var uLocal_7660 = 0;
	var uLocal_7661 = -1082130432;
	var uLocal_7662 = 0;
	var uLocal_7663 = -1082130432;
	var uLocal_7664 = 0;
	var uLocal_7665 = -1082130432;
	var uLocal_7666 = 0;
	var uLocal_7667 = -1082130432;
	var uLocal_7668 = 0;
	var uLocal_7669 = -1082130432;
	var uLocal_7670 = 0;
	var uLocal_7671 = -1082130432;
	var uLocal_7672 = 0;
	var uLocal_7673 = -1082130432;
	var uLocal_7674 = 0;
	var uLocal_7675 = -1082130432;
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
	var uLocal_7692 = -1082130432;
	var uLocal_7693 = -1082130432;
	var uLocal_7694 = 1;
	var uLocal_7695 = 1;
	var uLocal_7696 = 1;
	var uLocal_7697 = -1;
	var uLocal_7698 = -1;
	var uLocal_7699 = -1;
	int iLocal_7700 = 0;
	int iLocal_7701 = 0;
	int iLocal_7702 = 0;
	float fLocal_7703 = 0f;
	float fLocal_7704 = 0f;
	float fLocal_7705 = 0f;
	float fLocal_7706 = 0f;
	int iLocal_7707 = 0;
	float fLocal_7708 = 0f;
	int iLocal_7709 = 0;
	float fLocal_7710 = 0f;
	float fLocal_7711 = 0f;
	float fLocal_7712 = 0f;
	struct<3> Local_7713 = { 0, 0, 0 } ;
	struct<3> Local_7716 = { 0, 0, 0 } ;
	float fLocal_7719 = 0f;
	int iLocal_7720 = 0;
	var uLocal_7721 = 0;
	int iLocal_7722 = 0;
	struct<3> Local_7723 = { 0, 0, 0 } ;
	float fLocal_7726 = 0f;
	struct<3> Local_7727 = { 0, 0, 0 } ;
	struct<3> Local_7730 = { 0, 0, 0 } ;
	float fLocal_7733 = 0f;
	bool bLocal_7734 = 0;
	float fLocal_7735 = 0f;
	float fLocal_7736 = 0f;
	int iLocal_7737 = 0;
	int iLocal_7738 = 0;
	float fLocal_7739 = 0f;
	int iLocal_7740 = 0;
	int iLocal_7741 = 0;
	int iLocal_7742 = 0;
	int iLocal_7743 = 0;
	int iLocal_7744 = 0;
	var uLocal_7745 = 0;
	int iLocal_7746 = 0;
	int iLocal_7747 = 0;
	int iLocal_7748 = 0;
	struct<3> Local_7749 = { 0, 0, 0 } ;
	var uLocal_7752 = 0;
	var uLocal_7753 = 0;
	var uLocal_7754 = 0;
	var uLocal_7755 = 0;
	float fLocal_7756 = 0f;
	int iLocal_7757 = 0;
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
	fLocal_47 = 1f;
	bLocal_3096 = true;
	iLocal_3127 = 1;
	iLocal_3196 = AUDIO::GET_SOUND_ID();
	iLocal_3197 = AUDIO::GET_SOUND_ID();
	iLocal_3198 = AUDIO::GET_SOUND_ID();
	iLocal_3199 = AUDIO::GET_SOUND_ID();
	iLocal_3200 = AUDIO::GET_SOUND_ID();
	iLocal_3201 = AUDIO::GET_SOUND_ID();
	uLocal_3202 = AUDIO::GET_SOUND_ID();
	iLocal_3203 = AUDIO::GET_SOUND_ID();
	iLocal_3207 = AUDIO::GET_SOUND_ID();
	iLocal_3208 = AUDIO::GET_SOUND_ID();
	iLocal_3209 = AUDIO::GET_SOUND_ID();
	iLocal_3251 = -1;
	fLocal_3357 = 0f;
	fLocal_3360 = 0f;
	fLocal_3361 = 0f;
	fLocal_3362 = 0f;
	fLocal_3363 = -6f;
	Local_3364 = { fLocal_3361, fLocal_3362, fLocal_3363 };
	Local_3373 = { 3947.838f, 3862.782f, 0.5207f };
	Local_3376 = { 3833.911f, 3667.394f, -24.9f };
	Local_3379 = { 3530.091f, 3705.839f, 19.9916f };
	Local_3382 = { 3629f, 3766.44f, 27.535f };
	Local_3385 = { 3853.46f, 4455.427f, -0.2f };
	Local_3388 = { 3832.85f, 3665.67f, -23f };
	Local_3391 = { 3832.8f, 3665.63f, -24.14f };
	Local_3394 = { 0f, 0f, 150f };
	Local_3488 = { 3835.93f, 3668.514f, -22.05699f };
	Local_3491 = { -6.091456f, -6.360575f, 137.0745f };
	Local_3494 = { 3833.959f, 3669.755f, -22.2303f };
	Local_3497 = { -1.278f, -6.645f, 160.2272f };
	Local_3500 = { 3835.936f, 3668.66f, -23.0126f };
	Local_3503 = { -6.0978f, -6.3602f, 140.4624f };
	Local_3506 = { 3834.256f, 3669.67f, -23.4697f };
	Local_3509 = { -1.278f, -6.645f, 160.2272f };
	sLocal_3518 = "chem_heist2_swim";
	iLocal_3623 = GlobalFunc_4917(2);
	iLocal_3624 = GlobalFunc_4917(0);
	iLocal_3625 = joaat("prop_cs_gascutter_1");
	fLocal_7703 = 0f;
	fLocal_7704 = 0f;
	fLocal_7705 = 0.82f;
	fLocal_7706 = 0.733f;
	fLocal_7708 = 0.02f;
	fLocal_7710 = 0.32f;
	fLocal_7711 = 7000f;
	fLocal_7712 = 2500f;
	Local_7713 = { 3144f, 3535.7f, 136f };
	Local_7716 = { -1.8f, -2.6f, -0.04f };
	fLocal_7719 = 1f;
	iLocal_7720 = 3;
	Local_7723 = { 3638.2f, 3769.3f, 28.5f };
	fLocal_7726 = 65f;
	Local_7727 = { 3133f, 3531f, 140f };
	Local_7730 = { 3615f, 3791f, 250f };
	fLocal_7733 = 10f;
	fLocal_7735 = 0f;
	fLocal_7736 = 0f;
	iLocal_7737 = 1400;
	fLocal_7739 = 0.1f;
	fLocal_7756 = 0f;
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GlobalFunc_5695(PLAYER::PLAYER_PED_ID(), GlobalFunc_8315());
		GlobalFunc_10632();
		func_977();
	}
	func_927();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!iLocal_3097)
		{
			if (func_922())
			{
				func_912();
			}
		}
		GlobalFunc_587();
		func_908();
		RECORDING::_0x208784099002BC30("M_MonkeyBusiness", 0);
		func_906();
		switch (iLocal_82)
		{
			case 0:
				func_863();
				break;
			
			case 1:
				func_857();
				break;
			
			case 2:
				func_854();
				break;
			
			case 3:
				func_848();
				break;
			
			case 4:
				func_845();
				break;
			
			case 5:
				func_841();
				break;
			
			case 6:
				func_840();
				break;
			
			case 7:
				func_827();
				break;
			
			case 8:
				func_822();
				break;
			
			case 9:
				func_806();
				break;
			
			case 10:
				func_805();
				break;
			
			case 11:
				func_777();
				break;
			
			case 12:
				func_775();
				break;
			
			case 13:
				func_749();
				break;
			
			case 14:
				func_742();
				break;
			
			case 15:
				break;
			
			case 16:
				break;
			
			case 17:
				func_735();
				break;
			
			case 19:
				func_728();
				break;
			
			case 20:
				func_721();
				break;
			
			case 21:
				func_676();
				break;
			
			case 22:
				func_675();
				break;
			
			case 23:
				func_594();
				break;
			
			case 24:
				func_458();
				break;
			
			case 25:
				func_342();
				break;
			
			case 26:
				func_341();
				break;
			
			case 27:
				func_326();
				break;
			
			case 28:
				func_296();
				break;
			
			case 29:
				func_295();
				break;
			
			case 30:
				func_294();
				break;
			
			case 31:
				func_6();
				break;
			
			case 32:
				GlobalFunc_587();
				break;
			
			case 33:
				GlobalFunc_587();
				break;
		}
		if (iLocal_3092)
		{
			func_1();
		}
	}
	func_977();
}

void func_1()//Position - 0x531
{
	func_3();
	if (iLocal_84 == 1)
	{
		if (iLocal_82 >= iLocal_83)
		{
			iLocal_3092 = 0;
			func_2(0);
		}
		else
		{
			iLocal_84 = 3;
		}
	}
	else if (iLocal_84 == 3)
	{
		iLocal_84 = 1;
	}
}

void func_2(int iParam0)//Position - 0x565
{
	if (!iLocal_3092 || iParam0)
	{
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
	}
}

void func_3()//Position - 0x58B
{
	switch (iLocal_82)
	{
		case 5:
			break;
		
		case 7:
			AUDIO::CANCEL_MUSIC_EVENT("FBI5A_CUT_PIPE_END");
			AUDIO::CANCEL_MUSIC_EVENT("FBI5A_CUT_SWIM_UP");
			break;
		
		case 12:
			AUDIO::CANCEL_MUSIC_EVENT("FBI5A_LIFT_EXIT");
			break;
	}
}



void func_6()//Position - 0x5DD
{
	if (GlobalFunc_588(&iLocal_3242, 2000))
	{
		if (GlobalFunc_145())
		{
			GlobalFunc_11325(PLAYER::PLAYER_PED_ID());
			GlobalFunc_5129(3826.01f, 4461.632f, 2.1847f, 275.4845f);
			func_7();
		}
	}
}

void func_7()//Position - 0x61D
{
	func_8();
	func_977();
}

void func_8()//Position - 0x62D
{
	int iVar0;
	
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	GlobalFunc_4935();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	CAM::SET_WIDESCREEN_BORDERS(0, 0);
	GlobalFunc_7632(0);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), 0);
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
		WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 0);
		PED::SET_PED_MAX_TIME_UNDERWATER(PLAYER::PLAYER_PED_ID(), -1f);
		PED::SET_PED_DIES_IN_WATER(PLAYER::PLAYER_PED_ID(), 1);
		PED::CLEAR_PED_SCUBA_GEAR_VARIATION(PLAYER::PLAYER_PED_ID());
	}
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_3684))
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_3684);
	}
	func_20(&iLocal_3666, &uLocal_3093, &uLocal_3094);
	iVar0 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(Local_85))
	{
		PED::DELETE_PED(&Local_85);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_110))
	{
		PED::DELETE_PED(&Local_110);
	}
	iVar0 = 0;
	while (iVar0 <= (Local_135 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_135[iVar0 /*25*/]))
		{
			PED::DELETE_PED(&(Local_135[iVar0 /*25*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_211 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_211[iVar0 /*25*/]))
		{
			PED::DELETE_PED(&(Local_211[iVar0 /*25*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_987 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_987[iVar0 /*25*/]))
		{
			PED::DELETE_PED(&(Local_987[iVar0 /*25*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_3626)
	{
		TASK::REMOVE_COVER_POINT(iLocal_3626[iVar0]);
		iVar0++;
	}
	func_19(1);
	func_18();
	func_15(1);
	func_13(1);
	func_11(1);
	func_10();
	func_9(1);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1773088812, 0f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1773088812, 4, 0, 1);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1332101528, 0f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1332101528, 4, 0, 1);
	STREAMING::REMOVE_PTFX_ASSET();
	CAM::DESTROY_ALL_CAMS(0);
	PED::REMOVE_GROUP(uLocal_3665);
	AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
}

void func_9(bool bParam0)//Position - 0x821
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_3027 - 1))
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_3027[iVar0 /*7*/].f_5))
		{
			GRAPHICS::REMOVE_PARTICLE_FX(Local_3027[iVar0 /*7*/].f_5, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_3524 - 1))
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3524[iVar0]))
		{
			GRAPHICS::REMOVE_PARTICLE_FX(iLocal_3524[iVar0], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_3572 - 1))
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3572[iVar0]))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3572[iVar0], 0);
		}
		iVar0++;
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3521))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(iLocal_3521, 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3522))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(iLocal_3522, 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3523))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(iLocal_3523, 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3566))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3566, 0);
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_3567 - 1))
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3567[iVar0]))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3567[iVar0], 0);
		}
		iVar0++;
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3565))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3565, 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3599))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3599, 0);
	}
	if (bParam0)
	{
		STREAMING::REMOVE_PTFX_ASSET();
	}
}

void func_10()//Position - 0x965
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BIOTECH_HEIST_GASMASK_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("BIOTECH_HEIST_GASMASK_SCENE");
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3196))
	{
		AUDIO::STOP_SOUND(iLocal_3196);
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3197))
	{
		AUDIO::STOP_SOUND(iLocal_3197);
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3198))
	{
		AUDIO::STOP_SOUND(iLocal_3198);
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3200))
	{
		AUDIO::STOP_SOUND(iLocal_3200);
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3199))
	{
		AUDIO::STOP_SOUND(iLocal_3199);
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3201))
	{
		AUDIO::STOP_SOUND(iLocal_3201);
	}
	if (!AUDIO::HAS_SOUND_FINISHED(uLocal_3202))
	{
		AUDIO::STOP_SOUND(iLocal_3202);
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3208))
	{
		AUDIO::STOP_SOUND(iLocal_3208);
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3207))
	{
		AUDIO::STOP_SOUND(iLocal_3207);
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3204[0]))
	{
		AUDIO::STOP_SOUND(iLocal_3204[0]);
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3204[1]))
	{
		AUDIO::STOP_SOUND(iLocal_3204[1]);
	}
	AUDIO::STOP_STREAM();
	AUDIO::STOP_ALARM("FIB_05_BIOTECH_LAB_ALARMS", 1);
}

void func_11(bool bParam0)//Position - 0xA5C
{
	int iVar0;
	
	GlobalFunc_2873(&Local_2570, bParam0);
	GlobalFunc_2873(&Local_2510, bParam0);
	GlobalFunc_2873(&Local_2525, bParam0);
	GlobalFunc_2873(&Local_2585, bParam0);
	iVar0 = 0;
	while (iVar0 <= (Local_2464 - 1))
	{
		GlobalFunc_2873(&(Local_2464[iVar0 /*15*/]), bParam0);
		iVar0++;
	}
	GlobalFunc_2873(&Local_2555, bParam0);
	GlobalFunc_2873(&Local_2540, bParam0);
}


void func_13(bool bParam0)//Position - 0xB58
{
	int iVar0;
	
	func_14(&Local_85, bParam0);
	func_14(&Local_110, bParam0);
	func_14(&(uLocal_3710[0]), bParam0);
	func_14(&(uLocal_3710[1]), bParam0);
	func_14(&(uLocal_3710[2]), bParam0);
	iVar0 = 0;
	while (iVar0 <= (Local_987 - 1))
	{
		func_14(&(Local_987[iVar0 /*25*/]), 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_135 - 1))
	{
		func_14(&(Local_135[iVar0 /*25*/]), 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_211 - 1))
	{
		func_14(&(Local_211[iVar0 /*25*/]), 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_1163 - 1))
	{
		func_14(&(Local_1163[iVar0 /*25*/]), 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1163[iVar0 /*25*/].f_1);
		iVar0++;
	}
	func_14(&Local_1589, bParam0);
	iVar0 = 0;
	while (iVar0 <= (Local_1715 - 1))
	{
		func_14(&(Local_1715[iVar0 /*25*/]), 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1715[iVar0 /*25*/].f_1);
		iVar0++;
	}
}

void func_14(int iParam0, bool bParam1)//Position - 0xC5D
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, 0))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
				{
					ENTITY::DETACH_ENTITY(*iParam0, 1, 1);
				}
			}
		}
		if (bParam1)
		{
			PED::DELETE_PED(iParam0);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_15(bool bParam0)//Position - 0xCAD
{
	int iVar0;
	
	GlobalFunc_2206(&Local_2030, bParam0);
	GlobalFunc_2206(&Local_1982, bParam0);
	GlobalFunc_2206(&Local_2006, bParam0);
	GlobalFunc_2206(&(Local_2600.f_16), 1);
	GlobalFunc_2206(&Local_2151, bParam0);
	GlobalFunc_2206(&(Local_2054[0 /*24*/]), 1);
	GlobalFunc_2206(&(Local_2054[1 /*24*/]), 1);
	GlobalFunc_2206(&Local_1958, 1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_3027)
	{
		GlobalFunc_2206(&(Local_3027[iVar0 /*7*/]), 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_3020.x)
	{
		GlobalFunc_2206(&(Local_3020[iVar0 /*3*/]), bParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_3613)
	{
		GlobalFunc_2206(&(iLocal_3613[iVar0]), bParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_2271 - 1))
	{
		GlobalFunc_2206(&(Local_2271[iVar0 /*24*/]), 1);
		iVar0++;
	}
	GlobalFunc_2206(&iLocal_3619, 1);
	GlobalFunc_2206(&Local_2392, 1);
	GlobalFunc_2206(&Local_2416, 1);
	func_16();
	GlobalFunc_2206(&Local_2440, 1);
}

void func_16()//Position - 0xDAC
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_1766))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1766.f_2);
		OBJECT::DELETE_OBJECT(&Local_1766);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1790))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1790.f_2);
		OBJECT::DELETE_OBJECT(&Local_1790);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1814))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1814.f_2);
		OBJECT::DELETE_OBJECT(&Local_1814);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1838))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1838.f_2);
		OBJECT::DELETE_OBJECT(&Local_1838);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1862))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1862.f_2);
		OBJECT::DELETE_OBJECT(&Local_1862);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1886))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1886.f_2);
		OBJECT::DELETE_OBJECT(&Local_1886);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1910))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1910.f_2);
		OBJECT::DELETE_OBJECT(&Local_1910);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1934))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1934.f_2);
		OBJECT::DELETE_OBJECT(&Local_1934);
	}
}


void func_18()//Position - 0xEBD
{
	if (CAM::DOES_CAM_EXIST(uLocal_3600))
	{
		CAM::DESTROY_CAM(uLocal_3600, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_3601))
	{
		CAM::DESTROY_CAM(uLocal_3601, 0);
	}
	CAM::DESTROY_ALL_CAMS(0);
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
}

void func_19(bool bParam0)//Position - 0xEFA
{
	int iVar0;
	
	if (bParam0)
	{
		if (HUD::DOES_BLIP_EXIST(Local_85.f_2))
		{
			HUD::REMOVE_BLIP(&(Local_85.f_2));
		}
		if (HUD::DOES_BLIP_EXIST(Local_110.f_2))
		{
			HUD::REMOVE_BLIP(&(Local_110.f_2));
		}
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_3605))
	{
		HUD::REMOVE_BLIP(&uLocal_3605);
	}
	if (HUD::DOES_BLIP_EXIST(Local_2570.f_2))
	{
		HUD::REMOVE_BLIP(&(Local_2570.f_2));
	}
	if (HUD::DOES_BLIP_EXIST(Local_2510.f_2))
	{
		HUD::REMOVE_BLIP(&(Local_2510.f_2));
	}
	if (HUD::DOES_BLIP_EXIST(Local_1982.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_1982.f_1));
	}
	if (HUD::DOES_BLIP_EXIST(Local_2006.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_2006.f_1));
	}
	if (HUD::DOES_BLIP_EXIST(Local_2585.f_2))
	{
		HUD::REMOVE_BLIP(&(Local_2585.f_2));
	}
	if (HUD::DOES_BLIP_EXIST(Local_2151.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_2151.f_1));
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_3606))
	{
		HUD::REMOVE_BLIP(&uLocal_3606);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_3607))
	{
		HUD::REMOVE_BLIP(&uLocal_3607);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_3609))
	{
		HUD::REMOVE_BLIP(&uLocal_3609);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_3610))
	{
		HUD::REMOVE_BLIP(&uLocal_3610);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_3608))
	{
		HUD::REMOVE_BLIP(&uLocal_3608);
	}
	iVar0 = 0;
	while (iVar0 <= (Local_211 - 1))
	{
		if (HUD::DOES_BLIP_EXIST(Local_211[iVar0 /*25*/].f_2))
		{
			HUD::REMOVE_BLIP(&(Local_211[iVar0 /*25*/].f_2));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_987 - 1))
	{
		if (HUD::DOES_BLIP_EXIST(Local_987[iVar0 /*25*/].f_2))
		{
			HUD::REMOVE_BLIP(&(Local_987[iVar0 /*25*/].f_2));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_135 - 1))
	{
		if (HUD::DOES_BLIP_EXIST(Local_135[iVar0 /*25*/].f_2))
		{
			HUD::REMOVE_BLIP(&(Local_135[iVar0 /*25*/].f_2));
		}
		iVar0++;
	}
}

void func_20(int iParam0, var uParam1, var uParam2)//Position - 0x10A4
{
	int iVar0;
	
	if (*uParam1)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			PHYSICS::DELETE_ROPE(iParam0[iVar0]);
			iVar0++;
		}
	}
	*uParam1 = 0;
	*uParam2 = 0;
}


















































































































































































































































































void func_294()//Position - 0x4870C
{
	if (GlobalFunc_588(&iLocal_3242, 2000))
	{
		if (GlobalFunc_145())
		{
			GlobalFunc_11325(PLAYER::PLAYER_PED_ID());
			GlobalFunc_5129(3826.01f, 4461.632f, 2.1847f, 275.4845f);
			func_7();
		}
	}
}

void func_295()//Position - 0x4874C
{
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 197, 1);
	if (GlobalFunc_588(&iLocal_3242, 2000))
	{
		if (GlobalFunc_145())
		{
			GlobalFunc_11325(PLAYER::PLAYER_PED_ID());
			GlobalFunc_5129(3826.01f, 4461.632f, 2.1847f, 275.4845f);
			func_7();
		}
	}
}

void func_296()//Position - 0x48797
{
	func_321(&Local_2600);
	func_319();
	func_297();
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 197, 1);
	if (GlobalFunc_588(&iLocal_3242, 2000))
	{
		if (GlobalFunc_145())
		{
			GlobalFunc_5129(3826.01f, 4461.632f, 2.1847f, 275.4845f);
			func_7();
		}
	}
}

void func_297()//Position - 0x487EA
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0f;
	fVar1 = 0f;
	fVar0 = ((25f * 0.95f) * 4.5f);
	fVar1 = ((fVar0 - fLocal_3360) / fVar0);
	if (fVar1 < 0f)
	{
		iLocal_3099 = 1;
		fVar1 = 0f;
	}
	GlobalFunc_6813(SYSTEM::ROUND((fVar0 - fLocal_3360)), SYSTEM::ROUND(fVar0), "GAS_METER", 6, 0, 1);
	if (fVar1 < 0.2f)
	{
		if (!func_314("fbi5a_runout"))
		{
			if (!GlobalFunc_5172(&Local_3049, 0))
			{
				if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_runout", 7, 0, 0, 0))
				{
					func_298("fbi5a_runout", 1);
				}
			}
		}
	}
}

void func_298(char* sParam0, bool bParam1)//Position - 0x48886
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
		while (!bVar2 && iVar1 < iLocal_3145)
		{
			if (iLocal_3145[iVar1] == iVar0)
			{
				bVar2 = true;
			}
			else if (iLocal_3145[iVar1] == 0)
			{
				iLocal_3145[iVar1] = iVar0;
				bVar2 = true;
			}
			iVar1++;
		}
	}
	else
	{
		iVar3 = func_300(iVar0);
		if (iVar3 != -1)
		{
			iLocal_3145[iVar3] = 0;
			func_299();
		}
	}
}

void func_299()//Position - 0x48901
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iLocal_3145 - 1))
	{
		if (iLocal_3145[iVar0] == 0)
		{
			if (iLocal_3145[iVar0 + 1] != 0)
			{
				iLocal_3145[iVar0] = iLocal_3145[iVar0 + 1];
				iLocal_3145[iVar0 + 1] = 0;
			}
		}
		iVar0++;
	}
}

int func_300(int iParam0)//Position - 0x48954
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_3145)
	{
		if (iLocal_3145[iVar0] == 0)
		{
			return -1;
		}
		else if (iLocal_3145[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}














bool func_314(char* sParam0)//Position - 0x4904F
{
	return func_300(MISC::GET_HASH_KEY(sParam0)) != -1;
}





void func_319()//Position - 0x491EB
{
	if (!CAM::DOES_CAM_EXIST(uLocal_3602))
	{
		if (bLocal_3098)
		{
			if (CAM::DOES_CAM_EXIST(uLocal_3600))
			{
				CAM::DESTROY_CAM(uLocal_3600, 0);
			}
			uLocal_3602 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", Local_3488, Local_3491, 18.7067f, 0, 2);
			func_320();
			CAM::SET_CAM_ACTIVE(uLocal_3602, 1);
		}
	}
	else
	{
		func_320();
		if ((fLocal_3358 > 0.631791f && fLocal_3358 < 0.8251f) && (fLocal_3359 > 0.9222f && fLocal_3359 < 1f))
		{
			if (!CAM::DOES_CAM_EXIST(uLocal_3603))
			{
			}
		}
		else if (CAM::DOES_CAM_EXIST(uLocal_3603))
		{
			CAM::DESTROY_CAM(uLocal_3603, 0);
		}
		if (!CAM::IS_CAM_SHAKING(uLocal_3602))
		{
			CAM::SHAKE_CAM(uLocal_3602, "HAND_SHAKE", 1f);
		}
	}
}

void func_320()//Position - 0x492B0
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	
	Var0 = { Local_3488 + Local_3494 - Local_3488 * Vector(fLocal_3358, fLocal_3358, fLocal_3358) };
	Var3 = { Local_3491 + Local_3497 - Local_3491 * Vector(fLocal_3358, fLocal_3358, fLocal_3358) };
	Var6 = { Local_3500 + Local_3506 - Local_3500 * Vector(fLocal_3358, fLocal_3358, fLocal_3358) };
	Var9 = { Local_3503 + Local_3509 - Local_3503 * Vector(fLocal_3358, fLocal_3358, fLocal_3358) };
	Var12 = { Var6 + Var0 - Var6 * Vector(fLocal_3359, fLocal_3359, fLocal_3359) };
	Var15 = { Var9 + Var3 - Var9 * Vector(fLocal_3359, fLocal_3359, fLocal_3359) };
	CAM::SET_CAM_COORD(uLocal_3602, Var12);
	CAM::SET_CAM_ROT(uLocal_3602, Var15, 2);
	CAM::SET_CAM_FOV(uLocal_3602, 18.7067f);
}

int func_321(var uParam0)//Position - 0x49371
{
	float fVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<3> Var8;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	struct<3> Var19;
	float fVar22;
	float fVar23;
	float fVar24;
	float fVar25;
	struct<3> Var26;
	struct<3> Var29;
	struct<3> Var32;
	
	fVar0 = 0.553f;
	fVar1 = 0.1f;
	bVar2 = false;
	bVar3 = false;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = -1;
	iVar7 = -1;
	PAD::_0x7F4724035FDCA1DD(2);
	if (!iLocal_3099)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 229))
		{
			if (AUDIO::HAS_SOUND_FINISHED(iLocal_3199))
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_3199, "Torch", PLAYER::PLAYER_PED_ID(), "FBI_05_SOUNDS", 0, 0);
			}
			Var8 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_3020[1 /*3*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3619, -0.344f, 0f, 0.093f)) };
			fLocal_3360 = (fLocal_3360 + MISC::GET_FRAME_TIME());
			iVar4 = 0;
			while (iVar4 < 6)
			{
				if (MISC::ABSF((Var8.x - Local_2617[iVar4 /*33*/][0 /*4*/])) < 0.03f)
				{
					bVar2 = true;
					iVar5 = 0;
					while (iVar5 < 8)
					{
						if (!Local_2617[iVar4 /*33*/][iVar5 /*4*/].f_3)
						{
							if (MISC::ABSF((Var8.f_2 - (Local_2617[iVar4 /*33*/][iVar5 /*4*/].f_1 + 0.1f))) < 0.06f)
							{
								Local_2617[iVar4 /*33*/][iVar5 /*4*/].f_2 = (Local_2617[iVar4 /*33*/][iVar5 /*4*/].f_2 + MISC::GET_FRAME_TIME());
								if (Local_2617[iVar4 /*33*/][iVar5 /*4*/].f_2 >= 0.95f)
								{
									Local_2617[iVar4 /*33*/][iVar5 /*4*/].f_3 = 1;
									iVar6 = iVar4;
									iVar7 = iVar5;
									if (iVar5 == iLocal_3140 || iVar5 == iLocal_3141)
									{
										AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Bar_Cut", PLAYER::PLAYER_PED_ID(), "FBI_05_SOUNDS", 0, 0);
									}
								}
							}
						}
						iVar5++;
					}
				}
				iVar4++;
			}
			iVar4 = 0;
			while (iVar4 < 7)
			{
				if (MISC::ABSF((Var8.f_2 - (Local_2816[iVar4 /*29*/][0 /*4*/].f_1 + 0.08f))) < 0.02f)
				{
					bVar2 = true;
					bVar3 = true;
					iVar5 = 0;
					while (iVar5 < 7)
					{
						if (!Local_2816[iVar4 /*29*/][iVar5 /*4*/].f_3)
						{
							if (MISC::ABSF((Var8.x - Local_2816[iVar4 /*29*/][iVar5 /*4*/])) < 0.06f)
							{
								Local_2816[iVar4 /*29*/][iVar5 /*4*/].f_2 = (Local_2816[iVar4 /*29*/][iVar5 /*4*/].f_2 + MISC::GET_FRAME_TIME());
								if (Local_2816[iVar4 /*29*/][iVar5 /*4*/].f_2 >= 0.95f)
								{
									Local_2816[iVar4 /*29*/][iVar5 /*4*/].f_3 = 1;
									iVar6 = iVar4;
									iVar7 = iVar5;
									if (iVar5 == iLocal_3142 || iVar5 == iLocal_3143)
									{
										AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Bar_Cut", PLAYER::PLAYER_PED_ID(), "FBI_05_SOUNDS", 0, 0);
									}
								}
							}
						}
						iVar5++;
					}
				}
				iVar4++;
			}
		}
		else if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3199))
		{
			AUDIO::STOP_SOUND(iLocal_3199);
		}
	}
	else if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3199))
	{
		AUDIO::STOP_SOUND(iLocal_3199);
	}
	GlobalFunc_255(&iVar11, &iVar12, &iVar13, &iVar14, 0, 0);
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		if (MISC::ABSI(iVar13) > 28 || MISC::ABSI(iVar14) > 28)
		{
			fVar15 = (((IntToFloat(iVar13) / 128f) * fVar0) * MISC::GET_FRAME_TIME());
			fVar16 = (((IntToFloat(-iVar14) / 128f) * fVar0) * MISC::GET_FRAME_TIME());
		}
		else if (MISC::ABSI(iVar11) > 28 || MISC::ABSI(iVar12) > 28)
		{
			fVar15 = (((IntToFloat(iVar11) / 128f) * fVar0) * MISC::GET_FRAME_TIME());
			fVar16 = (((IntToFloat(-iVar12) / 128f) * fVar0) * MISC::GET_FRAME_TIME());
		}
	}
	else if (MISC::ABSI(iVar11) > 28 || MISC::ABSI(iVar12) > 28)
	{
		fVar15 = (((IntToFloat(iVar11) / 128f) * fVar0) * MISC::GET_FRAME_TIME());
		fVar16 = (((IntToFloat(-iVar12) / 128f) * fVar0) * MISC::GET_FRAME_TIME());
	}
	else
	{
		fVar17 = PAD::GET_CONTROL_NORMAL(2, 290);
		fVar18 = PAD::GET_CONTROL_NORMAL(2, 291);
		fVar15 = (fVar17 * fVar1);
		fVar16 = (-fVar18 * fVar1);
		fVar15 = GlobalFunc_253(fVar15, -0.02f, 0.02f);
		fVar16 = GlobalFunc_253(fVar16, -0.02f, 0.02f);
	}
	uParam0->f_6 = GlobalFunc_253((uParam0->f_6 + fVar15), uParam0->f_11, uParam0->f_12);
	uParam0->f_6.f_1 = GlobalFunc_253((uParam0->f_6.f_1 + fVar16), uParam0->f_13, uParam0->f_14);
	Var19 = { func_323(uParam0, uParam0->f_6, uParam0->f_6.f_1) };
	switch (iLocal_3240)
	{
		case 0:
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(PLAYER::PLAYER_PED_ID()))
			{
				if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(PLAYER::PLAYER_PED_ID()))
				{
					if (TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(PLAYER::PLAYER_PED_ID(), "Cutting"))
					{
						iLocal_3240++;
					}
				}
			}
			break;
		
		case 1:
			if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(PLAYER::PLAYER_PED_ID()))
			{
				bLocal_3098 = true;
				fVar22 = (0.777f + 0.783f);
				fVar24 = (uParam0->f_6 + 0.777f);
				fLocal_3358 = (fVar24 / fVar22);
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(PLAYER::PLAYER_PED_ID(), "x_axis", fLocal_3358);
				fVar23 = (0.98f + 0.825f);
				fVar25 = (uParam0->f_6.f_1 + 0.98f);
				fLocal_3359 = (fVar25 / fVar23);
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(PLAYER::PLAYER_PED_ID(), "y_axis", fLocal_3359);
			}
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_16))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_16, Var19, 0, 0, 1);
		ENTITY::SET_ENTITY_ROTATION(uParam0->f_16, Local_3394, 2, 1);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_16, 1);
	}
	if (!iLocal_3099)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 229))
		{
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3566))
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3566, 0);
			}
			if (bVar2)
			{
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3522))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3522, 0);
				}
				if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3521))
				{
					iLocal_3521 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_bio_grille_cutting", iLocal_3619, -0.344f, 0f, 0.093f, 0f, 0f, Local_2600.f_3.f_2, 1f, 0, 0, 0);
				}
				else
				{
					if (fVar16 != 0f || fVar15 != 0f)
					{
						Local_2600.f_15 = (90f + MISC::ATAN2(-fVar16, fVar15));
					}
					if (AUDIO::HAS_SOUND_FINISHED(iLocal_3200))
					{
						AUDIO::PLAY_SOUND_FROM_COORD(iLocal_3200, "Torch_Cut", Var19, "FBI_05_SOUNDS", 0, 0, 0);
					}
					GRAPHICS::SET_PARTICLE_FX_LOOPED_OFFSETS(iLocal_3521, -0.344f, 0f, 0.093f, 0f, Local_2600.f_15, Local_2600.f_3.f_2);
				}
			}
			else
			{
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3521))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3521, 0);
				}
				if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3522))
				{
					iLocal_3522 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_bio_cutter_nozzle", iLocal_3619, -0.344f, 0f, 0.093f, 0f, 0f, Local_2600.f_3.f_2, 1f, 0, 0, 0);
				}
				else
				{
					GRAPHICS::SET_PARTICLE_FX_LOOPED_OFFSETS(iLocal_3522, -0.344f, 0f, 0.093f, 0f, 0f, Local_2600.f_3.f_2);
				}
			}
		}
		else
		{
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3521))
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3521, 0);
			}
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3522))
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3522, 0);
			}
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3566))
			{
				iLocal_3566 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_bio_cutter_flame", iLocal_3619, -0.344f, 0f, 0.093f, 0f, 0f, Local_2600.f_3.f_2, 1f, 0, 0, 0);
			}
			else
			{
				if (fVar16 != 0f || fVar15 != 0f)
				{
					Local_2600.f_15 = (90f + MISC::ATAN2(-fVar16, fVar15));
				}
				GRAPHICS::SET_PARTICLE_FX_LOOPED_OFFSETS(iLocal_3566, -0.344f, 0f, 0.093f, 0f, Local_2600.f_15, Local_2600.f_3.f_2);
			}
		}
	}
	else
	{
		if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3200))
		{
			AUDIO::STOP_SOUND(iLocal_3200);
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3566))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3566, 0);
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3522))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3522, 0);
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3521))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3521, 0);
		}
	}
	if (!iLocal_3099)
	{
		if (bVar2)
		{
			Var26 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3619, -0.344f, 0f, 0.093f) };
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3523))
			{
				if (bVar3)
				{
					iLocal_3523 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_bio_grille_singed", Var26, 0f, 0f, Local_2600.f_3.f_2, 1f, 0, 0, 0, 0);
				}
				else
				{
					iLocal_3523 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_bio_grille_singed", Var26, 0f, 0f, Local_2600.f_3.f_2, 1f, 0, 0, 0, 0);
				}
			}
			else if (bVar3)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_OFFSETS(iLocal_3523, Var26, 0f, 0f, Local_2600.f_3.f_2);
			}
			else
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_OFFSETS(iLocal_3523, Var26, 0f, 0f, Local_2600.f_3.f_2);
			}
			if (iVar6 != -1)
			{
				if (bVar3)
				{
					if (iVar7 == iLocal_3142 || iVar7 == iLocal_3143)
					{
						if (iLocal_3144 < iLocal_3524)
						{
							Var29 = { Local_2816[iVar6 /*29*/][iVar7 /*4*/], -0.05f, (Local_2816[iVar6 /*29*/][iVar7 /*4*/].f_1 + 0.08f) };
							iLocal_3524[iLocal_3144] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_bio_grille_break", Local_3020[1 /*3*/], Var29, 0f, 0f, 0f, 1065353216, 0, 0, 0);
							iLocal_3144++;
						}
					}
				}
				else if (iVar7 == iLocal_3140 || iVar7 == iLocal_3141)
				{
					if (iLocal_3144 < iLocal_3524)
					{
						Var32 = { Local_2617[iVar6 /*33*/][iVar7 /*4*/], 0f, (Local_2617[iVar6 /*33*/][iVar7 /*4*/].f_1 + 0.08f) };
						iLocal_3524[iLocal_3144] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_bio_grille_break", Local_3020[1 /*3*/], Var32, 0f, 90f, 0f, 1065353216, 0, 0, 0);
						iLocal_3144++;
					}
				}
			}
		}
		else
		{
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3523))
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3523, 0);
			}
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3200))
			{
				AUDIO::STOP_SOUND(iLocal_3200);
			}
		}
		iLocal_3323 = 0;
		iVar4 = 0;
		while (iVar4 < 6)
		{
			if (!Local_2617[iVar4 /*33*/][iLocal_3140 /*4*/].f_3)
			{
				iLocal_3323++;
			}
			if (!Local_2617[iVar4 /*33*/][iLocal_3141 /*4*/].f_3)
			{
				iLocal_3323++;
			}
			func_322(uParam0, &(Local_2617[iVar4 /*33*/][iLocal_3140 /*4*/]), 0);
			func_322(uParam0, &(Local_2617[iVar4 /*33*/][iLocal_3141 /*4*/]), 0);
			iVar4++;
		}
		iVar4 = 0;
		while (iVar4 < 7)
		{
			if (!Local_2816[iVar4 /*29*/][iLocal_3142 /*4*/].f_3)
			{
				iLocal_3323++;
			}
			if (!Local_2816[iVar4 /*29*/][iLocal_3143 /*4*/].f_3)
			{
				iLocal_3323++;
			}
			func_322(uParam0, &(Local_2816[iVar4 /*29*/][iLocal_3142 /*4*/]), 1);
			func_322(uParam0, &(Local_2816[iVar4 /*29*/][iLocal_3143 /*4*/]), 1);
			iVar4++;
		}
		if (iLocal_3323 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_322(var uParam0, var uParam1, bool bParam2)//Position - 0x49D35
{
	struct<3> Var0;
	
	Var0 = { func_323(uParam0, *uParam1, uParam1->f_1) };
	if (!bParam2)
	{
		Var0 = { (Var0.x + (0.05f * -uParam0->f_8)), (Var0.f_1 + (0.05f * uParam0->f_9)), Var0.f_2 };
	}
	if (!uParam1->f_3)
	{
		GRAPHICS::DRAW_LIGHT_WITH_RANGE(Var0, 0, 255, 0, 0.03f, 100f);
	}
}

Vector3 func_323(var uParam0, float fParam1, float fParam2)//Position - 0x49D97
{
	struct<3> Var0;
	float fVar3;
	
	fVar3 = (fParam2 * uParam0->f_10);
	Var0.f_2 = (uParam0->f_2 + fParam2);
	Var0.x = ((*uParam0 + (fParam1 * uParam0->f_9)) + (fVar3 * -uParam0->f_8));
	Var0.f_1 = ((uParam0->f_1 + (fParam1 * uParam0->f_8)) + (fVar3 * uParam0->f_9));
	return Var0;
}



void func_326()//Position - 0x49F10
{
	if (iLocal_84 == 0)
	{
		iLocal_84 = 1;
	}
	func_339();
	func_328();
	func_327();
	VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_2585.x);
}

void func_327()//Position - 0x49F34
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = 0.07f;
	fVar1 = 0.375f;
	switch (iLocal_3239)
	{
		case 0:
			Local_3512 = { ENTITY::GET_ENTITY_COORDS(Local_2585.x, 1) };
			iLocal_3280 = MISC::GET_GAME_TIMER();
			iLocal_3239++;
			break;
		
		case 1:
			Var2.f_2 = (fVar1 * SYSTEM::SIN((IntToFloat((MISC::GET_GAME_TIMER() - iLocal_3280)) * fVar0)));
			Var2 = { Var2 + Local_3512 };
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2585.x, Var2, 0, 0, 1);
			break;
	}
}

void func_328()//Position - 0x49FB3
{
	if (func_314("fbi5a_dia29"))
	{
		if (iLocal_3344 == 0)
		{
			iLocal_3344 = MISC::GET_GAME_TIMER();
		}
		else if (GlobalFunc_588(&iLocal_3344, 2500))
		{
			PED::SET_PED_RESET_FLAG(Local_110, 258, 1);
		}
	}
	switch (iLocal_3243)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("missfbi5ig_23");
			if (PED::IS_PED_INJURED(Local_987[4 /*25*/]) && PED::IS_PED_INJURED(Local_987[5 /*25*/]))
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_23"))
				{
					iLocal_3120 = 0;
					Local_110.f_9 = { 3567.418f, 3683.911f, 27.1238f };
					PED::SET_PED_ACCURACY(Local_110, 5);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_110, 1);
					Local_3397 = { 3558.898f, 3677.85f, 27.125f };
					Local_3400 = { 0f, 0f, 170f };
					Local_110.f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_110, Local_110.f_15, "missfbi5ig_23", "run_through_door_steve", 8f, -8f, 5, 0, 8f, 0);
					iLocal_3243 = 3;
				}
			}
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_110.f_15))
			{
				func_338(&Local_110, &(Local_110.f_15), &iLocal_3248, 3567.914f, 3683.623f, 27.523f, 1f, 0f, 1, 1, iLocal_3626[15]);
				if (func_337(Local_110, Local_110.f_9, 1.5f, 0) || iLocal_3120)
				{
					iLocal_3120 = 1;
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_110.f_15))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_110, -8f, 1);
						Local_110.f_15 = -1;
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_110, 0);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_110, 3564.676f, 3684.3f, 27.1219f, 1f, 0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_110, 200f, 0);
					iLocal_3243++;
				}
			}
			else if (Local_211[0 /*25*/].f_18)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_110, 0);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_110, 3567.914f, 3683.623f, 27.523f, 1f, 0, 0);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_110, 200f, 0);
				iLocal_3243++;
			}
			break;
		
		case 4:
			if (Local_211[0 /*25*/].f_18)
			{
				if (PED::IS_PED_INJURED(Local_211[0 /*25*/]) && PED::IS_PED_INJURED(Local_211[1 /*25*/]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_110, 1);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 3564.671f, 3691.803f, 27.123f, 3568.74f, 3694.13f, 28.91f, 2f, 0, 0.5f, 4f, 1, 0, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, 3568.74f, 3694.13f, 28.91f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					iLocal_3243++;
				}
			}
			break;
		
		case 5:
			if (!func_314("fbi5a_dia37"))
			{
				if (!GlobalFunc_5172(&Local_3049, 0))
				{
					if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia37", 7, 0, 0, 0))
					{
						func_298("fbi5a_dia37", 1);
					}
				}
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(Local_110, 3564.671f, 3691.803f, 27.123f, 1.5f, 1.5f, 2f, 0, 1, 0))
			{
				if (func_336(Local_110, 242628503, -2, 1))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 3564.671f, 3691.803f, 27.123f, 3568.74f, 3694.13f, 28.91f, 2f, 0, 0.5f, 4f, 1, 0, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, 3568.74f, 3694.13f, 28.91f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
				}
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3564.229f, 3695.411f, 26.127f, 3568.856f, 3694.587f, 30.127f, 5f, 0, 1, 0))
			{
				if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3568.282f, 3692.812f, 27.1216f, 1.5f, 1.5f, 2f, 0, 1, 0))
					{
						if (Local_211[2 /*25*/].f_18)
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_110, 0);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_110, 3568.899f, 3696.591f, 27.1216f, 2f, 0, 0);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_110, 200f, 0);
							iLocal_3243++;
						}
					}
					else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3568.899f, 3696.591f, 27.1216f, 1.5f, 1.5f, 2f, 0, 1, 0))
					{
						if (Local_211[2 /*25*/].f_18)
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_110, 0);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_110, 3568.282f, 3692.812f, 27.1216f, 2f, 0, 0);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_110, 200f, 0);
							iLocal_3243++;
						}
					}
				}
			}
			if (Local_211[2 /*25*/].f_18)
			{
				if ((((PED::IS_PED_INJURED(Local_211[2 /*25*/]) && PED::IS_PED_INJURED(Local_211[3 /*25*/])) && PED::IS_PED_INJURED(Local_211[4 /*25*/])) && PED::IS_PED_INJURED(Local_211[5 /*25*/])) && PED::IS_PED_INJURED(Local_211[6 /*25*/]))
				{
					iLocal_3243++;
				}
			}
			break;
		
		case 6:
			if (Local_211[2 /*25*/].f_18)
			{
				if ((((PED::IS_PED_INJURED(Local_211[2 /*25*/]) && PED::IS_PED_INJURED(Local_211[3 /*25*/])) && PED::IS_PED_INJURED(Local_211[4 /*25*/])) && PED::IS_PED_INJURED(Local_211[5 /*25*/])) && PED::IS_PED_INJURED(Local_211[6 /*25*/]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_110, 1);
					TASK::CLEAR_PED_TASKS(Local_110);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 3581.771f, 3694.163f, 26.1239f, 3592.74f, 3679.13f, 28.91f, 2f, 0, 0.5f, 4f, 1, 0, 0, -957453492);
					TASK::TASK_SEEK_COVER_TO_COVER_POINT(0, iLocal_3626[16], 3594.77f, 3676.27f, 28.55f, -1, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					iLocal_3243++;
				}
			}
			break;
		
		case 7:
			if (!PED::IS_PED_IN_COVER(Local_110, 0))
			{
				if (func_336(Local_110, 242628503, -2, 1))
				{
					TASK::CLEAR_PED_TASKS(Local_110);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_SEEK_COVER_TO_COVER_POINT(0, iLocal_3626[16], 3594.77f, 3676.27f, 28.55f, -1, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
				}
			}
			if (Local_211[7 /*25*/].f_18)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_110, 0);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_110, 3585.951f, 3690.735f, 26.1239f, 3f, 0, 0);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_110, 200f, 0);
				iLocal_3243++;
			}
			break;
		
		case 8:
			if (PED::IS_PED_INJURED(Local_211[7 /*25*/]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_110, 1);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 3587.516f, 3682.903f, 26.6235f, 3596.63f, 3688.09f, 29.44f, 2f, 0, 0.5f, 4f, 1, 0, 0, -957453492);
				TASK::TASK_AIM_GUN_AT_COORD(0, 3587.516f, 3682.903f, 26.6235f, -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
				TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
				iLocal_3243++;
			}
			else if (!func_314("fbi5a_dia38"))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(Local_211[7 /*25*/], Local_211[7 /*25*/].f_9, 3f, 3f, 2f, 0, 1, 0))
				{
					if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia38", 7, 0, 0, 0))
					{
						func_298("fbi5a_dia38", 1);
					}
				}
			}
			break;
		
		case 9:
			if (!ENTITY::IS_ENTITY_AT_COORD(Local_110, 3587.516f, 3682.903f, 26.6235f, 1.5f, 1.5f, 2f, 0, 1, 0))
			{
				if (func_336(Local_110, 242628503, -2, 1))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_110, 1);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 3587.516f, 3682.903f, 26.6235f, 3596.63f, 3688.09f, 29.44f, 2f, 0, 0.5f, 4f, 1, 0, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, 3587.516f, 3682.903f, 26.6235f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
				}
			}
			else
			{
				iLocal_3243++;
			}
			break;
		
		case 10:
			if (PED::IS_PED_INJURED(Local_211[7 /*25*/]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_110, 1);
				GlobalFunc_4956();
				GlobalFunc_5157(&uLocal_3788, "fbi5aAU", "fbi5a_dia39", 7, 0, 0);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 3595.519f, 3684.045f, 26.6235f, 3596.63f, 3688.09f, 29.44f, 2f, 0, 0.5f, 4f, 1, 0, 0, -957453492);
				TASK::TASK_AIM_GUN_AT_COORD(0, 3596.63f, 3688.09f, 29.44f, -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
				TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
				iLocal_3243++;
			}
			break;
		
		case 11:
			if (!ENTITY::IS_ENTITY_AT_COORD(Local_110, 3595.519f, 3684.045f, 26.6235f, 1.5f, 1.5f, 2f, 0, 1, 0))
			{
				if (func_336(Local_110, 242628503, -2, 1))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 3595.519f, 3684.045f, 26.6235f, 3596.63f, 3688.09f, 29.44f, 2f, 0, 0.5f, 4f, 1, 0, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, 3596.63f, 3688.09f, 29.44f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
				}
			}
			else if (func_336(Local_110, 242628503, -2, 1))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
				TASK::TASK_AIM_GUN_AT_COORD(0, 3596.63f, 3688.09f, 29.44f, 7000, 0, 0);
				TASK::TASK_AIM_GUN_AT_COORD(0, 3587.516f, 3682.903f, 26.6215f, 7000, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
				TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
			}
			if (Local_211[9 /*25*/].f_18)
			{
				if (PED::IS_PED_INJURED(Local_211[9 /*25*/]))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 3590.458f, 3693.081f, 27.8234f, 3584.84f, 3697.54f, 29.74f, 2f, 0, 0.5f, 4f, 1, 0, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, 3584.84f, 3697.54f, 29.74f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					iLocal_3243++;
				}
			}
			break;
		
		case 12:
			if (!ENTITY::IS_ENTITY_AT_COORD(Local_110, 3590.458f, 3693.081f, 27.8234f, 1.5f, 1.5f, 2f, 0, 1, 0))
			{
				if (func_336(Local_110, 242628503, -2, 1))
				{
					TASK::CLEAR_PED_TASKS(Local_110);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_110, 1);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 3590.458f, 3693.081f, 27.8234f, 3584.84f, 3697.54f, 29.74f, 2f, 0, 0.5f, 4f, 1, 0, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, 3584.84f, 3697.54f, 29.74f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
				}
			}
			if ((((PED::IS_PED_INJURED(Local_211[10 /*25*/]) && PED::IS_PED_INJURED(Local_211[11 /*25*/])) && PED::IS_PED_INJURED(Local_211[12 /*25*/])) && PED::IS_PED_INJURED(Local_211[13 /*25*/])) && PED::IS_PED_INJURED(Local_211[14 /*25*/]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_110, 1);
				TASK::CLEAR_PED_TASKS(Local_110);
				iLocal_3120 = 0;
				Local_110.f_9 = { 3595.463f, 3718.758f, 28.6907f };
				TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_110.f_9, 2f, -1, 0.25f, 0, 1193033728);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_110.f_9, -1, 0, 0.5f, 1, 1, iLocal_3626[22], 1);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
				TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
				iLocal_3243++;
			}
			break;
		
		case 13:
			if (Local_211[15 /*25*/].f_18)
			{
				iLocal_3243++;
			}
			break;
		
		case 14:
			if (!PED::IS_PED_INJURED(Local_211[15 /*25*/]) || !PED::IS_PED_INJURED(Local_211[16 /*25*/]))
			{
				if (!iLocal_3119)
				{
					if (func_337(Local_110, Local_110.f_9, 2.5f, 0))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_110.f_15))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_110, -8f, 1);
							Local_110.f_15 = -1;
						}
						TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 3595.5f, 3716.6f, 29.7f, 3596.2f, 3725.1f, 29.8f, 2f, 0, 0.5f, 0.5f, 1, 512, 0, -957453492);
						TASK::TASK_AIM_GUN_AT_COORD(0, 3596.2f, 3725.1f, 29.8f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
						TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
						iLocal_3119 = 1;
					}
				}
				else if (!ENTITY::IS_ENTITY_AT_COORD(Local_110, 3595.5f, 3716.6f, 29.7f, 1f, 1f, 2f, 0, 1, 0))
				{
					if (func_336(Local_110, 242628503, 1, 1))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 3595.5f, 3716.6f, 29.7f, 3596.2f, 3725.1f, 29.8f, 2f, 0, 0.5f, 0.5f, 1, 512, 0, -957453492);
						TASK::TASK_AIM_GUN_AT_COORD(0, 3596.2f, 3725.1f, 29.8f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
						TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					}
				}
			}
			STREAMING::REQUEST_ANIM_DICT("missfbi5ig_30");
			if (PED::IS_PED_INJURED(Local_211[15 /*25*/]) && PED::IS_PED_INJURED(Local_211[16 /*25*/]))
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_110, Local_110.f_9, 0.5f, 0.5f, 1.6f, 0, 1, 0))
				{
					if (func_336(Local_110, 242628503, 1, 1))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_110, 1);
						TASK::CLEAR_PED_TASKS(Local_110);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_110.f_9, 2f, -1, 0.2f, 512, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
						TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					}
				}
				else if (func_332(&iLocal_80, &Local_110, &iLocal_3248, Local_110.f_9, iLocal_3626[22], 3594.6f, 3725.2f, 31.3f, 1056964608) && STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_30"))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_110, 1);
					iLocal_3120 = 0;
					Local_110.f_9 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_30", "run_through_hallways_steve", 3603.881f, 3719.827f, 28.692f, 0f, 0f, -125f, 1f, 2) };
					PED::SET_PED_CONFIG_FLAG(Local_110, 185, 1);
					PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_110, 16);
					switch (iLocal_80)
					{
						case 0:
							Local_3397 = { 3603.881f, 3719.827f, 28.692f };
							Local_3400 = { 0f, 0f, -125f };
							Local_110.f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_110, Local_110.f_15, "missfbi5ig_30", "run_through_hallways_steve", 8f, -8f, 5, 0, 8f, 0);
							break;
						
						case 1:
							TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_110.f_9, 3601.3f, 3719.5f, 30.7f, 2f, 0, 0.2f, 0.2f, 1, 512, 0, -957453492);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
							TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
							break;
					}
					iLocal_3119 = 0;
					iLocal_3243++;
				}
			}
			break;
		
		case 15:
			if (!func_314("fbi5a_dia44"))
			{
				if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia44", 7, 0, 0, 0))
				{
					func_298("fbi5a_dia44", 1);
				}
			}
			STREAMING::REQUEST_ANIM_DICT("missfbi5ig_31");
			func_331(&Local_110, &(Local_110.f_15), Local_110.f_9, 3601f, 3718.7f, 29.9f, 0, 1065353216, 1);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_110.f_15))
			{
				if (!func_314("fbi5a_monk0"))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_110.f_15) > 0.525f)
					{
						if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_monk0", 7, 0, 0, 0))
						{
							func_298("fbi5a_monk0", 1);
						}
					}
				}
				iLocal_3237 = MISC::GET_GAME_TIMER();
			}
			else if ((((STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_31") && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3604.85f, 3719.574f, 28.69f, 3600.483f, 3722.665f, 31.69f, 7.2f, 0, 1, 0)) && ENTITY::IS_ENTITY_AT_COORD(Local_110, PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_30", "run_through_hallways_steve", 3603.881f, 3719.827f, 28.692f, 0f, 0f, -125f, 1f, 2), 1f, 1f, 1.6f, 0, 1, 0)) && (ENTITY::IS_ENTITY_AT_COORD(Local_85, PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_30", "run_through_hallways_dave", 3603.881f, 3719.827f, 28.692f, 0f, 0f, -125f, 1f, 2), 1f, 1f, 1.6f, 0, 1, 0) || (iLocal_3118 && ENTITY::IS_ENTITY_AT_COORD(Local_85, 3604.569f, 3721.459f, 28.6896f, 1f, 1f, 2f, 0, 1, 0)))) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_85.f_15))
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3603.904f, 3718.038f, 28.694f, 3599.703f, 3721.102f, 31.494f, 2.6f, 0, 1, 0))
				{
					if (!GlobalFunc_111())
					{
						HUD::CLEAR_PRINTS();
						GlobalFunc_4956();
						GlobalFunc_5157(&uLocal_3788, "fbi5aAU", "fbi5a_dia45", 7, 0, 0);
						PED::SET_PED_CAPSULE(Local_110, 0.4f);
						Local_3397 = { 3603.881f, 3719.827f, 28.692f };
						Local_3400 = { 0f, 0f, -125f };
						Local_110.f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_110, Local_110.f_15, "missfbi5ig_31", "down_hallway_cover_steve", 8f, -8f, 5, 0, 8f, 0);
						Local_110.f_9 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_31", "down_hallway_cover_steve", 3603.881f, 3719.827f, 28.692f, 0f, 0f, -125f, 1f, 2) };
						PED::SET_PED_CONFIG_FLAG(Local_110, 185, 0);
						AUDIO::START_AUDIO_SCENE("FBI_5_MILITARY_SHOOTOUT");
						iLocal_3243++;
					}
				}
				else if (!func_314("fbi5a_door0"))
				{
					if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_door0", 7, 0, 0, 0))
					{
						func_298("fbi5a_door0", 1);
					}
				}
				else if (!func_314("door_0"))
				{
					if (!GlobalFunc_5172(&Local_3049, 0))
					{
						GlobalFunc_164("door_0", 7500, 1);
						func_298("door0", 1);
					}
				}
			}
			else if (GlobalFunc_588(&iLocal_3237, 5000))
			{
				if (!func_314("fbi5a_dia44b"))
				{
					if ((STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_31") && (ENTITY::IS_ENTITY_AT_COORD(Local_85, PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_30", "run_through_hallways_dave", 3603.881f, 3719.827f, 28.692f, 0f, 0f, -125f, 1f, 2), 1f, 1f, 1.6f, 0, 1, 0) || (iLocal_3118 && ENTITY::IS_ENTITY_AT_COORD(Local_85, 3604.569f, 3721.459f, 28.6896f, 1f, 1f, 2f, 0, 1, 0)))) && ENTITY::IS_ENTITY_AT_COORD(Local_110, PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_30", "run_through_hallways_steve", 3603.881f, 3719.827f, 28.692f, 0f, 0f, -125f, 1f, 2), 1f, 1f, 1.6f, 0, 1, 0))
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3604.618f, 3718.985f, 28.695f, 3600.785f, 3721.701f, 30.7f, 8f, 0, 1, 0))
						{
							if (!GlobalFunc_5172(&Local_3049, 0))
							{
								if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia44b", 6, 0, 0, 0))
								{
									func_298("fbi5a_dia44b", 1);
								}
							}
						}
					}
				}
			}
			break;
		
		case 16:
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_110.f_15) > 0.02f)
			{
				PED::SET_PED_SHOOTS_AT_COORD(Local_110, 3601f, 3718.7f, 29.9f, 1);
				AUDIO::PLAY_SOUND_FROM_COORD(-1, "Shoot_Door", 3601f, 3718.7f, 29.9f, "FBI_05_SOUNDS", 0, 0, 0);
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("bul_carmetal", 3601f, 3718.7f, 29.9f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("muz_assault_rifle", 3601f, 3718.7f, 29.9f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				iLocal_3243++;
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_110.f_15) < 0.15f)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3603.904f, 3718.038f, 28.694f, 3599.703f, 3721.102f, 31.494f, 2.6f, 0, 1, 0))
				{
					PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 30, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 31, 1);
				}
			}
			break;
		
		case 17:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_110.f_15))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_110.f_15) > 0.12f)
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[24], 0f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[24], 3, 0, 1);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[25], 0f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[25], 3, 0, 1);
					iLocal_3243++;
				}
			}
			break;
		
		case 18:
			STREAMING::REQUEST_ANIM_DICT("missfbi5ig_32");
			if (func_337(Local_110, Local_110.f_9, 2f, 0))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_110.f_15))
				{
					TASK::CLEAR_PED_TASKS(Local_110);
					Local_110.f_15 = -1;
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_110, 0);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_110, 3614.003f, 3719.859f, 28.6893f, 2f, 0, 0);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_110, 100f, 0);
				iLocal_3243 = 20;
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_110.f_15))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_110.f_15) >= 1f && STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_32"))
				{
					PED::SET_PED_CAPSULE(Local_110, 0f);
					iLocal_3120 = 0;
					Local_110.f_9 = { 3614.003f, 3719.859f, 28.6893f };
					Local_3397 = { 3613.697f, 3728.311f, 27.69f };
					Local_3400 = { 0f, 0f, -125f };
					Local_110.f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_110, Local_110.f_15, "missfbi5ig_32", "run_hall_cover_steve", 8f, -8f, 5, 0, 8f, 0);
					iLocal_3243++;
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_110.f_15) < 0.15f)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3603.904f, 3718.038f, 28.694f, 3599.703f, 3721.102f, 31.494f, 2.6f, 0, 1, 0))
					{
						PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 30, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 31, 1);
					}
				}
			}
			break;
		
		case 19:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_110.f_15))
			{
				if (func_329(&Local_110, &(Local_110.f_15), &iLocal_3248, Local_110.f_9, 3614.003f, 3719.859f, 28.6893f, 2f, 1065353216, 1056964608, 0, 0, 0))
				{
					iLocal_3243 = 20;
				}
				if (func_337(Local_110, Local_110.f_9, 2f, 1))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_110.f_15))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_110, -8f, 1);
						Local_110.f_15 = -1;
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_110, 0);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_110, 3610.223f, 3722.531f, 28.6896f, 2f, 0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_110, 100f, 0);
					iLocal_3243 = 20;
				}
			}
			if (HUD::DOES_BLIP_EXIST(Local_1982.f_1))
			{
				iLocal_3243 = 20;
			}
			break;
		
		case 20:
			if (HUD::DOES_BLIP_EXIST(Local_1982.f_1))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_110, 1);
				TASK::CLEAR_PED_TASKS(Local_110);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 3619.311f, 3734.525f, 27.6895f, 3630.2f, 3751.8f, 30.3f, 2f, 0, 0.5f, 0.5f, 1, 0, 0, -957453492);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
				TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
				iLocal_3243++;
			}
			break;
		
		case 21:
			if (!ENTITY::IS_ENTITY_AT_COORD(Local_110, 3619.311f, 3734.525f, 27.6895f, 1f, 1f, 2f, 0, 1, 0))
			{
				if (func_336(Local_110, 242628503, -2, 1))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 3619.311f, 3734.525f, 27.6895f, 3630.2f, 3751.8f, 30.3f, 2f, 0, 0.5f, 0.5f, 1, 0, 0, -957453492);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
				}
			}
			else if (func_336(Local_110, 242628503, -2, 1))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
				TASK::TASK_AIM_GUN_AT_COORD(0, 3630.2f, 3751.8f, 30.3f, 7000, 0, 0);
				TASK::TASK_AIM_GUN_AT_COORD(0, 3611.6f, 3720.7f, 30.3f, 7000, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
				TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
			}
			break;
		
		case 101:
			TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_2585.x, -1, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
			TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
			iLocal_3243++;
			break;
		
		case 102:
			if (!ENTITY::IS_ENTITY_AT_COORD(Local_110, 3629.755f, 3746.942f, 27.6062f, 1f, 1f, 1.6f, 0, 1, 0))
			{
				if (func_336(Local_110, 242628503, 1, 1))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 3629.755f, 3746.942f, 27.6062f, -1f, 20000, 0.25f, 0, 1193033728);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_2585.x, -1, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
				}
			}
			break;
	}
}

int func_329(int iParam0, var uParam1, int iParam2, struct<3> Param3, struct<3> Param6, float fParam9, float fParam10, float fParam11, bool bParam12, int iParam13, int iParam14)//Position - 0x4B90C
{
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam1))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(*uParam1) >= fParam10)
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*iParam0, -8f, 1);
				*uParam1 = -1;
				TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Param3, 1000, 0, fParam11, bParam12, iParam13, iParam14, 0);
				TASK::TASK_SET_SPHERE_DEFENSIVE_AREA(0, Param6, fParam9);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
				TASK::TASK_PERFORM_SEQUENCE(*iParam0, uLocal_3685);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
				if (bParam12)
				{
					PED::SET_PED_CONFIG_FLAG(*iParam0, 131, 1);
				}
				*iParam2 = MISC::GET_GAME_TIMER();
			}
		}
		else if ((MISC::GET_GAME_TIMER() - *iParam2) > 1500)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(*iParam0, Param6, fParam9, 0, 0);
			if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, -1442466670) != 1)
			{
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam0, 100f, 0);
			}
			return 1;
		}
	}
	return 0;
}


void func_331(int iParam0, var uParam1, struct<3> Param2, struct<3> Param5, int iParam8, float fParam9, int iParam10)//Position - 0x4BA12
{
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam1))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(*uParam1) >= fParam9)
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*iParam0, -8f, 1);
				*uParam1 = -1;
				if (ENTITY::DOES_ENTITY_EXIST(iParam8))
				{
					if (!PED::IS_PED_INJURED(iParam8))
					{
						TASK::TASK_AIM_GUN_AT_ENTITY(*iParam0, iParam8, -1, iParam10);
					}
				}
				else
				{
					TASK::TASK_AIM_GUN_AT_COORD(*iParam0, Param5, -1, iParam10, 0);
				}
				PED::FORCE_PED_MOTION_STATE(*iParam0, 1063765679, 0, 0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 1);
			}
		}
		else
		{
			Param2 = { Param2 };
			if (!ENTITY::IS_ENTITY_AT_COORD(*iParam0, Param2, 0.5f, 0.5f, 1.6f, 0, 1, 0))
			{
				if (func_336(*iParam0, 242628503, 1, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iParam8))
					{
						if (!PED::IS_PED_INJURED(iParam8))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Param2, 1f, -1, 0.05f, 512, 1193033728);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, iParam8, -1, iParam10);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
							TASK::TASK_PERFORM_SEQUENCE(*iParam0, uLocal_3685);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
						}
						else
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Param2, 1f, -1, 0.05f, 512, 1193033728);
							TASK::TASK_AIM_GUN_AT_COORD(0, Param5, -1, iParam10, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
							TASK::TASK_PERFORM_SEQUENCE(*iParam0, uLocal_3685);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
						}
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Param2, 1f, -1, 0.05f, 512, 1193033728);
						TASK::TASK_AIM_GUN_AT_COORD(0, Param5, -1, iParam10, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
						TASK::TASK_PERFORM_SEQUENCE(*iParam0, uLocal_3685);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					}
				}
			}
		}
	}
}

int func_332(int iParam0, int iParam1, int iParam2, struct<3> Param3, int iParam6, struct<3> Param7, float fParam10)//Position - 0x4BBB6
{
	if (!PED::IS_PED_INJURED(*iParam1))
	{
		if (!PED::IS_PED_IN_COVER(*iParam1, 1) || !ENTITY::IS_ENTITY_AT_COORD(*iParam1, Param3, 1.5f, 1.5f, 2f, 0, 1, 0))
		{
			uParam6 = uParam6;
			Param7 = { Param7 };
			*iParam2 = 0;
			if (func_337(*iParam1, Param3, 2f, 0))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, 1);
				*iParam0 = 1;
				return 1;
			}
			if (ENTITY::IS_ENTITY_AT_COORD(*iParam1, Param3, 1.5f, 1.5f, 2f, 0, 1, 0))
			{
				if ((((!PED::IS_PED_IN_COVER(*iParam1, 0) && !PED::IS_PED_GOING_INTO_COVER(*iParam1)) && TASK::GET_SCRIPT_TASK_STATUS(*iParam1, -1959848946) != 1) && TASK::GET_SCRIPT_TASK_STATUS(*iParam1, -1716541277) != 1) && TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 1812035420) != 1)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, 1);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(*iParam1, Param3, -1, 0, fParam10, false, 0, uParam6, 1);
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 713668775) != 1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, 1);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam1, Param3, 2f, -1, 0.2f, 0, 1193033728);
			}
		}
		else if (*iParam2 == 0)
		{
			*iParam2 = MISC::GET_GAME_TIMER();
		}
		else if ((MISC::GET_GAME_TIMER() - *iParam2) > 1000)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, 1);
			*iParam0 = 0;
			return 1;
		}
	}
	return 0;
}




int func_336(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x4BD81
{
	int iVar0;
	
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1);
	if (bParam3)
	{
		if ((iVar0 == 7 || iVar0 == 2) || TASK::GET_SEQUENCE_PROGRESS(iParam0) == iParam2)
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

int func_337(int iParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x4BDD5
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
		fVar6 = SYSTEM::VDIST(Var3, Param1);
		fVar7 = SYSTEM::VDIST(Var0, Param1);
		if (fVar6 < fParam4)
		{
			if (fVar7 < fVar6 && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, 2.5f, 2.5f, 2f, 0, 1, 0))
			{
				if (bParam5)
				{
					if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_338(int iParam0, var uParam1, int iParam2, struct<3> Param3, float fParam6, float fParam7, bool bParam8, int iParam9, int iParam10)//Position - 0x4BE67
{
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam1))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(*uParam1) >= fParam6)
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*iParam0, -8f, 1);
				*uParam1 = -1;
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 1);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(*iParam0, Param3, -1, 0, fParam7, iParam8, iParam9, iParam10, 0);
				*iParam2 = MISC::GET_GAME_TIMER();
			}
		}
		else if (GlobalFunc_588(iParam2, 1500))
		{
			return 1;
		}
	}
	return 0;
}

void func_339()//Position - 0x4BEDC
{
	if (func_314("fbi5a_dia29"))
	{
		PED::SET_PED_RESET_FLAG(Local_85, 258, 1);
	}
	switch (iLocal_3244)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("missfbi5ig_23");
			if (PED::IS_PED_INJURED(Local_987[4 /*25*/]) && PED::IS_PED_INJURED(Local_987[5 /*25*/]))
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_23"))
				{
					PED::SET_PED_ACCURACY(Local_85, 5);
					Local_3397 = { 3558.898f, 3677.85f, 27.125f };
					Local_3400 = { 0f, 0f, 170f };
					Local_85.f_9 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_23", "run_through_door_dave", Local_3397, Local_3400, 1f, 2) };
					Local_85.f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_85, Local_85.f_15, "missfbi5ig_23", "run_through_door_dave", 1000f, -8f, 5, 0, 8f, 0);
					iLocal_3244 = 2;
				}
			}
			break;
		
		case 1:
			break;
		
		case 2:
			func_331(&Local_85, &(Local_85.f_15), Local_85.f_9, 3567.5f, 3686.6f, 28.123f, 0, 1065353216, 1);
			if (Local_211[0 /*25*/].f_18)
			{
				if (PED::IS_PED_INJURED(Local_211[0 /*25*/]) && PED::IS_PED_INJURED(Local_211[1 /*25*/]))
				{
					GlobalFunc_4935();
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_85, 1);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 3566.532f, 3697.667f, 27.123f, 3568.74f, 3694.13f, 28.91f, 2f, 0, 0.5f, 1f, 1, 0, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, 3568.74f, 3694.13f, 28.91f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					iLocal_3244++;
				}
			}
			break;
		
		case 3:
			if (!ENTITY::IS_ENTITY_AT_COORD(Local_85, 3566.532f, 3697.667f, 27.123f, 1.5f, 1.5f, 2f, 0, 1, 0))
			{
				if (func_336(Local_85, 242628503, 1, 1))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_85, 1);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 3566.532f, 3697.667f, 27.123f, 3568.74f, 3694.13f, 28.91f, 2f, 0, 0.5f, 1f, 1, 0, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, 3568.74f, 3694.13f, 28.91f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
				}
			}
			else if (Local_211[2 /*25*/].f_18)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_85, 0);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_85, 3566.532f, 3697.667f, 27.123f, 1f, 0, 0);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_85, 200f, 0);
				iLocal_3244++;
			}
			break;
		
		case 4:
			if (Local_211[2 /*25*/].f_18)
			{
				if ((((PED::IS_PED_INJURED(Local_211[2 /*25*/]) && PED::IS_PED_INJURED(Local_211[3 /*25*/])) && PED::IS_PED_INJURED(Local_211[4 /*25*/])) && PED::IS_PED_INJURED(Local_211[5 /*25*/])) && PED::IS_PED_INJURED(Local_211[6 /*25*/]))
				{
					GlobalFunc_4935();
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_85, 1);
					TASK::CLEAR_PED_TASKS(Local_85);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 3583.783f, 3688.108f, 26.1239f, 3593.15f, 3684.12f, 28.59f, 2f, 0, 0.5f, 4f, 1, 0, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, 3593.15f, 3684.12f, 28.59f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					iLocal_3244++;
				}
			}
			break;
		
		case 5:
			if (!func_314("fbi5a_dia41"))
			{
				if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia41", 7, 0, 0, 0))
				{
					func_298("fbi5a_dia41", 1);
				}
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(Local_85, 3583.783f, 3688.108f, 26.1239f, 1.5f, 1.5f, 2f, 0, 1, 0))
			{
				if (func_336(Local_85, 242628503, -2, 1))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 3583.783f, 3688.108f, 26.1239f, 3593.15f, 3684.12f, 28.59f, 2f, 0, 0.5f, 4f, 1, 0, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, 3593.15f, 3684.12f, 28.59f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
				}
			}
			if (Local_211[7 /*25*/].f_18)
			{
				func_298("fbi5a_dia41", 0);
				GlobalFunc_4935();
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_85, 0);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_85, 3583.783f, 3688.108f, 26.1239f, 2f, 0, 0);
				if (!PED::IS_PED_INJURED(Local_211[7 /*25*/]))
				{
					TASK::TASK_COMBAT_PED(Local_85, Local_211[7 /*25*/], 0, 16);
				}
				iLocal_3244++;
			}
			break;
		
		case 6:
			if (PED::IS_PED_INJURED(Local_211[7 /*25*/]))
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_85, 3590.964f, 3682.581f, 26.6235f, 2f, 0, 0);
				iLocal_3244++;
			}
			break;
		
		case 7:
			if (PED::IS_PED_INJURED(Local_211[7 /*25*/]))
			{
				GlobalFunc_4935();
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_85, 1);
				Local_85.f_9 = { 3596.95f, 3685.77f, 26.62f };
				iLocal_3244++;
			}
			break;
		
		case 8:
			STREAMING::REQUEST_ANIM_DICT("missfbi5ig_27");
			if (PED::IS_PED_INJURED(Local_211[8 /*25*/]))
			{
				if (func_332(&iLocal_81, &Local_85, &iLocal_3249, Local_85.f_9, iLocal_3626[32], 3598.7f, 3694f, 29.8f, 1056964608) && STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_27"))
				{
					Local_85.f_9 = { 3592.66f, 3695.31f, 27.82f };
					switch (iLocal_81)
					{
						case 0:
							Local_3397 = { 3584.103f, 3700.864f, 27.823f };
							Local_3400 = { 0f, 0f, -34.94f };
							Local_85.f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_85, Local_85.f_15, "missfbi5ig_27", "run_stairs_door_dave", 8f, -8f, 5, 0, 8f, 0);
							break;
						
						case 1:
							TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_85.f_9, 3589f, 3695.6f, 29.5f, 2f, 0, 1.5f, 1.5f, 1, 0, 0, -957453492);
							TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_85.f_9, -1, 0, 0.5f, true, 1, iLocal_3626[33], 1);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
							TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
							break;
					}
					iLocal_3244++;
				}
			}
			break;
		
		case 9:
			if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia41b", 7, 0, 0, 0))
			{
				func_298("fbi5a_dia41b", 1);
				iLocal_3244++;
			}
			else
			{
				GlobalFunc_4935();
			}
			break;
		
		case 10:
			STREAMING::REQUEST_ANIM_DICT("missfbi5ig_28");
			switch (iLocal_81)
			{
				case 0:
					if (func_338(&Local_85, &(Local_85.f_15), &iLocal_3249, Local_85.f_9, 1f, 8f, 1, 1, iLocal_3626[33]))
					{
						iLocal_3118 = 0;
						iLocal_3244 = 11;
					}
					break;
				
				case 1:
					if (PED::IS_PED_IN_COVER(Local_85, 0))
					{
						iLocal_3118 = 0;
						iLocal_3244 = 11;
					}
					break;
			}
			if (func_337(Local_85, Local_85.f_9, 3f, 0))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_85.f_15))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_85, -8f, 1);
					Local_110.f_15 = -1;
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_85, 0);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_85, Local_85.f_9, 4f, 0, 0);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_85, 100f, 0);
				iLocal_3118 = 1;
				iLocal_3244 = 11;
			}
			break;
		
		case 11:
			if (Local_211[9 /*25*/].f_18)
			{
				if (!PED::IS_PED_INJURED(Local_211[9 /*25*/]))
				{
					if (!iLocal_3118)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_85, 0);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_85, Local_85.f_9, 2f, 0, 0);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_85, 50f, 0);
						iLocal_3118 = 1;
					}
				}
				else
				{
					iLocal_3118 = 0;
					iLocal_3244++;
				}
			}
			break;
		
		case 12:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_85.f_15))
			{
				func_338(&Local_85, &(Local_85.f_15), &iLocal_3249, Local_85.f_9, 1065353216, 1056964608, 0, 0, 0);
			}
			else if (func_332(&iLocal_81, &Local_85, &iLocal_3249, Local_85.f_9, iLocal_3626[33], 3583.2f, 3698.6f, 29.2f, 1056964608) && STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_28"))
			{
				Local_85.f_9 = { 3583.87f, 3700.7f, 27.82f };
				GlobalFunc_4935();
				switch (iLocal_81)
				{
					case 0:
						Local_3397 = { 3584.103f, 3700.864f, 27.823f };
						Local_3400 = { 0f, 0f, -34.94f };
						Local_85.f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_85, Local_85.f_15, "missfbi5ig_28", "run_to_door_dave", 8f, -8f, 5, 0, 8f, 0);
						break;
					
					case 1:
						TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_85.f_9, 2f, -1, 0.5f, 0, 1193033728);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_85.f_9, -1, 0, 0.5f, true, 0, iLocal_3626[19], 1);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
						TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
						break;
				}
				iLocal_3244++;
			}
			break;
		
		case 13:
			switch (iLocal_81)
			{
				case 0:
					if (func_329(&Local_85, &(Local_85.f_15), &iLocal_3249, Local_85.f_9, Local_85.f_9 + Vector(0.5f, 0f, 0f), 1f, 1f, 0f, 0, 0, iLocal_3626[19]))
					{
						iLocal_3244 = 14;
					}
					if (((PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_85.f_15) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_85.f_15) > 0.37f) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3582.915f, 3701.415f, 27.822f, 3587.949f, 3697.797f, 30.822f, 1.5f, 0, 1, 0)) && PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_85.f_15))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_85, -8f, 1);
							Local_110.f_15 = -1;
						}
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_85.f_9, 1f, 1f, 2f, 0, 1, 0))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_85, 0);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_85, 3586.439f, 3698.897f, 27.8217f, 1f, 0, 0);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_85, 100f, 0);
						}
						else
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_85, 0);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_85, Local_85.f_9, 1f, 0, 0);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_85, 100f, 0);
						}
						iLocal_3244 = 14;
					}
					break;
				
				case 1:
					if (PED::IS_PED_IN_COVER(Local_85, 0))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_85, 0);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_85, Local_85.f_9, 1f, 0, 0);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_85, 100f, 0);
						iLocal_3244 = 14;
					}
					else if (func_336(Local_85, 242628503, -2, 1))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_85.f_9, 2f, -1, 0.5f, 0, 1193033728);
						TASK::TASK_SEEK_COVER_TO_COVER_POINT(0, iLocal_3626[19], 3583.2f, 3698.6f, 29.2f, -1, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
						TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					}
					break;
			}
			if (func_337(Local_85, Local_85.f_9, 4f, 1))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_85.f_15))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_85, -8f, 1);
					Local_110.f_15 = -1;
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_85, 0);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_85, 3586.439f, 3698.897f, 27.8217f, 1f, 0, 0);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_85, 100f, 0);
				iLocal_3244 = 14;
			}
			if (!func_314("fbi5a_dia41"))
			{
				if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia41", 7, 0, 0, 0))
				{
					func_298("fbi5a_dia41", 1);
				}
			}
			break;
		
		case 14:
			if ((((PED::IS_PED_INJURED(Local_211[10 /*25*/]) && PED::IS_PED_INJURED(Local_211[11 /*25*/])) && PED::IS_PED_INJURED(Local_211[12 /*25*/])) && PED::IS_PED_INJURED(Local_211[13 /*25*/])) && PED::IS_PED_INJURED(Local_211[14 /*25*/]))
			{
				func_298("fbi5a_dia41", 0);
				iLocal_3118 = 0;
				GlobalFunc_4935();
				Local_85.f_9 = { 3591.202f, 3719.508f, 28.6907f };
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_85, 1);
				TASK::CLEAR_PED_TASKS(Local_85);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_85.f_9, 3594.6f, 3725.2f, 31.3f, 2f, 0, 0.5f, 0.5f, 1, 4096, 0, -957453492);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_85.f_9, -1, 0, 0.5f, false, 0, iLocal_3626[23], 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
				TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
				iLocal_3244++;
			}
			break;
		
		case 15:
			if (!func_314("fbi5a_dia41"))
			{
				if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia41", 7, 0, 0, 0))
				{
					func_298("fbi5a_dia41", 1);
				}
			}
			if (Local_211[15 /*25*/].f_18)
			{
				iLocal_3118 = 0;
				GlobalFunc_4935();
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_85, 0);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_85, Local_85.f_9 + Vector(0.5f, 0f, 0f), 1f, 0, 0);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_85, 200f, 0);
				iLocal_3244++;
			}
			break;
		
		case 16:
			if (!iLocal_3118)
			{
				if (func_337(Local_85, Local_85.f_9, 2f, 0))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_85.f_15))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_85, -8f, 1);
						Local_110.f_15 = -1;
					}
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 3590.491f, 3716.441f, 28.6896f, 3596.2f, 3724.7f, 30.6f, 2f, 1, 0.5f, 4f, 1, 0, 0, -957453492);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					TASK::TASK_SET_SPHERE_DEFENSIVE_AREA(0, 3590.491f, 3716.441f, 28.6896f, 1f);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 50f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					iLocal_3118 = 1;
				}
			}
			if (!func_314("fbi5a_dia43"))
			{
				if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia43", 7, 0, 0, 0))
				{
					func_298("fbi5a_dia43", 1);
				}
			}
			STREAMING::REQUEST_ANIM_DICT("missfbi5ig_30");
			if (PED::IS_PED_INJURED(Local_211[15 /*25*/]) && PED::IS_PED_INJURED(Local_211[16 /*25*/]))
			{
				if (func_332(&iLocal_81, &Local_85, &iLocal_3249, Local_85.f_9, iLocal_3626[23], 3594.6f, 3725.2f, 31.3f, 1056964608) && STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_30"))
				{
					func_298("fbi5a_dia41", 0);
					iLocal_3118 = 0;
					Local_85.f_9 = { 3604.313f, 3719.85f, 28.6907f };
					GlobalFunc_4935();
					switch (iLocal_81)
					{
						case 0:
							Local_3397 = { 3603.881f, 3719.827f, 28.692f };
							Local_3400 = { 0f, 0f, -125f };
							Local_85.f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_85, Local_85.f_15, "missfbi5ig_30", "run_through_hallways_dave", 8f, -8f, 5, 0, 8f, 0);
							break;
						
						case 1:
							TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_85.f_9, 3601.43f, 3719.85f, 30.07f, 2f, 0, 0.5f, 0.5f, 1, 0, 0, -957453492);
							TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_85.f_9, -1, 0, 0.5f, false, 0, iLocal_3626[25], 1);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
							TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
							break;
					}
					iLocal_3244++;
				}
			}
			break;
		
		case 17:
			if (!func_314("fbi5a_dia41"))
			{
				if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia41", 7, 0, 0, 0))
				{
					func_298("fbi5a_dia41", 1);
				}
			}
			STREAMING::REQUEST_ANIM_DICT("missfbi5ig_31");
			switch (iLocal_81)
			{
				case 0:
					func_338(&Local_85, &(Local_85.f_15), &iLocal_3249, Local_85.f_9, 1f, 0.5f, 0, 0, iLocal_3626[25]);
					break;
				
				case 1:
					break;
			}
			if (!iLocal_3118)
			{
				if (func_337(Local_85, Local_85.f_9, 3f, 1))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 3604.569f, 3721.459f, 28.6896f, 3601.8f, 3719.5f, 30.7f, 2f, 0, 0.5f, 0.5f, 0, 0, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, 3601.8f, 3719.5f, 30.7f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					iLocal_3118 = 1;
				}
			}
			else if (!ENTITY::IS_ENTITY_AT_COORD(Local_85, 3604.569f, 3721.459f, 28.6896f, 1f, 1f, 2f, 0, 1, 0))
			{
				if (func_336(Local_85, 242628503, 1, 1))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 3604.569f, 3721.459f, 28.6896f, 3601.8f, 3719.5f, 30.7f, 2f, 0, 0.5f, 0.5f, 0, 0, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, 3601.8f, 3719.5f, 30.7f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
				}
			}
			if (ENTITY::IS_ENTITY_AT_COORD(Local_85, PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_30", "run_through_hallways_dave", 3603.881f, 3719.827f, 28.692f, 0f, 0f, -125f, 1f, 2), 1f, 1f, 1.6f, 0, 1, 0) || (iLocal_3118 && ENTITY::IS_ENTITY_AT_COORD(Local_85, 3604.569f, 3721.459f, 28.6896f, 1f, 1f, 2f, 0, 1, 0)))
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_31") && ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_110.f_15) && ENTITY::IS_ENTITY_PLAYING_ANIM(Local_110, "missfbi5ig_31", "down_hallway_cover_steve", 3)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_110.f_15) > 0.15f))
				{
					iLocal_3244 = 118;
				}
			}
			break;
		
		case 118:
			if (func_332(&iLocal_81, &Local_85, &iLocal_3249, Local_85.f_9, iLocal_3626[25], 3598.4f, 3712.8f, 30.4f, 8f))
			{
				switch (iLocal_81)
				{
					case 0:
						GlobalFunc_4935();
						Local_3397 = { 3603.881f, 3719.827f, 28.692f };
						Local_3400 = { 0f, 0f, -125f };
						Local_85.f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_85, Local_85.f_15, "missfbi5ig_31", "down_hallway_cover_dave", 8f, -8f, 5, 0, 8f, 0);
						Local_85.f_9 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_31", "down_hallway_cover_dave", 3603.881f, 3719.827f, 28.692f, 0f, 0f, -125f, 1f, 2) };
						break;
					
					case 1:
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_85, 1);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 3599.36f, 3702.75f, 28.6908f, 3603.07f, 3697.65f, 30.28f, 2f, 0, 0.5f, 0.5f, 1, 1, 0, -957453492);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 3610.094f, 3713.658f, 28.6896f, 3614.91f, 3725.84f, 30.41f, 2f, 0, 0.5f, 0.5f, 1, 0, 0, -957453492);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
						TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
						Local_85.f_9 = { 3610.094f, 3713.658f, 28.6896f };
						break;
				}
				iLocal_3244 = 18;
			}
			break;
		
		case 18:
			if (!func_314("fbi5a_dia46"))
			{
				if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia46", 8, 0, 0, 0))
				{
					func_298("fbi5a_dia46", 1);
				}
			}
			if (!func_314("fbi5a_dia47"))
			{
				if (func_314("fbi5a_dia46"))
				{
					if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia47", 8, 0, 0, 0))
					{
						func_298("fbi5a_dia47", 1);
					}
				}
			}
			switch (iLocal_81)
			{
				case 0:
					if (func_329(&Local_85, &(Local_85.f_15), &iLocal_3249, Local_85.f_9, Local_85.f_9, 2f, 1f, 0f, 0, 0, iLocal_3626[35]))
					{
						iLocal_3244 = 19;
					}
					break;
				
				case 1:
					if (ENTITY::IS_ENTITY_AT_COORD(Local_85, Local_85.f_9, 1.5f, 1.5f, 2f, 0, 1, 0))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_85, 0);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_85, Local_85.f_9, 3f, 0, 0);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_85, 200f, 0);
						iLocal_3244 = 19;
					}
					break;
			}
			if (func_337(Local_85, Local_85.f_9, 3f, 1))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_85, 0);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_85, Local_85.f_9, 4f, 0, 0);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_85, 200f, 0);
				iLocal_3244 = 19;
			}
			break;
		
		case 19:
			if (func_340(&Local_211, 24))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_85, 1);
				TASK::CLEAR_PED_TASKS(Local_85);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 3610.781f, 3729.353f, 28.6908f, 3621.96f, 3750.96f, 30.27f, 2f, 0, 0.5f, 4f, 1, 0, 0, -957453492);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, 3610.864f, 3729.176f, 28.68974f, 1000, 0, 0.5f, true, 1, iLocal_3626[27], 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
				TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
				iLocal_3244++;
			}
			break;
		
		case 20:
			if (!func_314("fbi5a_dcome"))
			{
				if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dcome", 8, 0, 0, 0))
				{
					func_298("fbi5a_dcome", 1);
				}
			}
			if (func_336(Local_85, 242628503, -2, 1))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_85, 0);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_85, 3610.781f, 3729.353f, 28.6908f, 1f, 0, 0);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_85, 200f, 0);
				iLocal_3244++;
			}
			if (HUD::DOES_BLIP_EXIST(Local_1982.f_1))
			{
				iLocal_3244++;
			}
			break;
		
		case 21:
			if (HUD::DOES_BLIP_EXIST(Local_1982.f_1))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_85, 1);
				TASK::CLEAR_PED_TASKS(Local_85);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 3626.235f, 3762.163f, 27.6171f, 3609.5f, 3800.3f, 30.9f, 2f, 0, 0.5f, 0.5f, 1, 0, 0, -957453492);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
				TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
				iLocal_3244++;
			}
			break;
		
		case 22:
			if (!ENTITY::IS_ENTITY_AT_COORD(Local_85, 3626.235f, 3762.163f, 27.6171f, 1.5f, 1.5f, 2f, 0, 1, 0))
			{
				if (func_336(Local_85, 242628503, -2, 1))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 3626.235f, 3762.163f, 27.6171f, 3609.5f, 3800.3f, 30.9f, 2f, 0, 0.5f, 0.5f, 1, 0, 0, -957453492);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
				}
			}
			else if (func_336(Local_85, 242628503, -2, 1))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
				TASK::TASK_AIM_GUN_AT_COORD(0, 3610.1f, 3765.7f, 29.8f, 5000, 0, 0);
				TASK::TASK_AIM_GUN_AT_COORD(0, 3609.2f, 3801.2f, 29.8f, 5000, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
				TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
			}
			break;
		
		case 50:
			TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_2585.x, -1, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
			TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
			iLocal_3244++;
			break;
		
		case 51:
			STREAMING::REQUEST_ANIM_DICT("missfbi5ig_34");
			if (!ENTITY::IS_ENTITY_AT_COORD(Local_85, 3626.235f, 3762.163f, 27.6171f, 1.5f, 1.5f, 2f, 0, 1, 0))
			{
				if (func_336(Local_85, 242628503, 1, 1))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 3626.235f, 3762.163f, 27.6171f, 2f, -1, 0.25f, 0, 1193033728);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_2585.x, -1, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
				}
			}
			if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_34"))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(3626.235f, 3762.163f, 27.6171f, ENTITY::GET_ENTITY_COORDS(Local_2585.x, 1), 1) < 40f)
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, "missfbi5ig_34", "direct_heli_a_dave", ENTITY::GET_ENTITY_COORDS(Local_85, 1), ENTITY::GET_ENTITY_ROTATION(Local_85, 2), 4f, -1056964608, -1, 0, 0, 2, 0);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 3626.916f, 3749.378f, 27.571f, Local_2585.x, 2f, 0, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_2585.x, -1, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					iLocal_3244++;
				}
			}
			break;
		
		case 52:
			if (!ENTITY::IS_ENTITY_AT_COORD(Local_85, 3626.916f, 3749.378f, 27.571f, 1.5f, 1.5f, 2f, 0, 1, 0))
			{
				if (func_336(Local_85, 242628503, 1, 1))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 3626.916f, 3749.378f, 27.571f, Local_2585.x, 2f, 0, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_2585.x, -1, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
				}
			}
			if (!HUD::DOES_BLIP_EXIST(uLocal_3605))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 3618.872f, 3774.863f, 27.5867f, 3555.7f, 3783.3f, 31.6f, 2f, 0, 0.5f, 1f, 1, 0, 0, -957453492);
				TASK::TASK_AIM_GUN_AT_COORD(0, 3555.7f, 3783.3f, 31.6f, -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
				TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
				iLocal_3244++;
			}
			break;
		
		case 53:
			if (!ENTITY::IS_ENTITY_AT_COORD(Local_85, 3618.872f, 3774.863f, 27.58f, 1.5f, 1.5f, 2f, 0, 1, 0))
			{
				if (func_336(Local_85, 242628503, 1, 1))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 3618.872f, 3774.863f, 27.5867f, 3555.7f, 3783.3f, 31.6f, 2f, 0, 0.5f, 1f, 1, 0, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, 3555.7f, 3783.3f, 31.6f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
				}
			}
			break;
	}
}

int func_340(int iParam0, int iParam1)//Position - 0x4D93E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= (*iParam0 - 1))
	{
		if ((iParam0[iVar1 /*25*/])->f_18)
		{
			if (PED::IS_PED_INJURED((*iParam0)[iVar1 /*25*/]))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	if (iVar0 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_341()//Position - 0x4D989
{
	func_339();
	func_328();
	func_327();
	VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_2585.x);
}

void func_342()//Position - 0x4D9A4
{
	func_454(&Local_2585, &Local_2006, &iLocal_3666, &uLocal_3093, &uLocal_3094, 0, 1, 0);
	if (iLocal_84 == 0)
	{
		GlobalFunc_2518(&uLocal_3710, 0, 1);
		GlobalFunc_2511(&uLocal_3710, 2, 0, 4);
		Local_3515 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2006, 0f, 0f, 7.3f) };
		GlobalFunc_164("H2PART3_help1", 7500, 1);
		ENTITY::SET_ENTITY_COLLISION(Local_1982, 1, 0);
		iLocal_84 = 1;
		Local_3671[0 /*3*/] = { PHYSICS::GET_ROPE_VERTEX_COORD(iLocal_3666[0], 0) };
		Local_3671[1 /*3*/] = { PHYSICS::GET_ROPE_VERTEX_COORD(iLocal_3666[1], 0) };
		Local_3671[2 /*3*/] = { PHYSICS::GET_ROPE_VERTEX_COORD(iLocal_3666[2], 0) };
		Local_3671[3 /*3*/] = { PHYSICS::GET_ROPE_VERTEX_COORD(iLocal_3666[3], 0) };
		PHYSICS::_0xBC0CE682D4D05650(iLocal_3666[0], 0, Local_3671[0 /*3*/], Local_3671[1 /*3*/], Local_3671[2 /*3*/], Local_3671[3 /*3*/]);
		PHYSICS::_0xBC0CE682D4D05650(iLocal_3666[1], 0, Local_3671[0 /*3*/], Local_3671[1 /*3*/], Local_3671[2 /*3*/], Local_3671[3 /*3*/]);
		PHYSICS::_0xBC0CE682D4D05650(iLocal_3666[2], 0, Local_3671[0 /*3*/], Local_3671[1 /*3*/], Local_3671[2 /*3*/], Local_3671[3 /*3*/]);
		PHYSICS::_0xBC0CE682D4D05650(iLocal_3666[3], 0, Local_3671[0 /*3*/], Local_3671[1 /*3*/], Local_3671[2 /*3*/], Local_3671[3 /*3*/]);
	}
	if (iLocal_84 == 1)
	{
		switch (iLocal_3238)
		{
			case 0:
				if (GlobalFunc_10061(&uLocal_3710, 1, 1))
				{
					if (GlobalFunc_751(&uLocal_3710, 0))
					{
						if (func_434())
						{
							iLocal_3238++;
						}
					}
				}
				break;
			
			case 1:
				if (func_419(&Local_3754, 0, 0, 0, -1, 0, 800))
				{
					if (Local_3754.f_18)
					{
						if (!Local_3754.f_19)
						{
							if (GlobalFunc_10991(&uLocal_3710, 1, 0, 0))
							{
								Local_3754.f_19 = 1;
							}
						}
					}
				}
				else
				{
					CAM::DESTROY_ALL_CAMS(0);
					AUDIO::TRIGGER_MUSIC_EVENT("FBI5A_LOAD_CRATE_MA");
					iLocal_82 = 26;
					iLocal_84 = 0;
				}
				break;
			
			case 2:
				break;
			}
	}
	if (iLocal_84 == 3)
	{
		switch (iLocal_3238)
		{
			case 0:
				GlobalFunc_9134(&uLocal_3710, 0);
				Local_3754.f_12 = uLocal_3710[uLocal_3710.f_7];
				Local_3754.f_19 = 0;
				iLocal_3238++;
				break;
			
			case 1:
				if (func_419(&Local_3754, 0, 0, 0, -1, 0, 800))
				{
					if (Local_3754.f_18)
					{
						if (!Local_3754.f_19)
						{
							if (GlobalFunc_10991(&uLocal_3710, 1, 0, 0))
							{
								Local_3754.f_19 = 1;
							}
						}
					}
				}
				else
				{
					iLocal_82 = 26;
					iLocal_84 = 0;
				}
				break;
			}
	}
	func_339();
	func_328();
	if (!iLocal_3100)
	{
		if (func_343(Local_2585.x, 2000, Local_3515, 0f, 0f, ENTITY::GET_ENTITY_HEADING(Local_2585.x), 0))
		{
			iLocal_3100 = 1;
		}
	}
	else
	{
		func_327();
	}
	VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_2585.x);
}

int func_343(int iParam0, int iParam1, struct<3> Param2, struct<3> Param5, float fParam8)//Position - 0x4DC60
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<4> Var15;
	float fVar19;
	struct<3> Var20;
	struct<3> Var23;
	
	if (!iLocal_7747)
	{
		iLocal_7748 = iParam1;
		iLocal_7747 = 1;
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			Local_7749 = { ENTITY::GET_ENTITY_SPEED_VECTOR(iParam0, 0) };
		}
	}
	if (iLocal_7748 <= 0)
	{
		iLocal_7747 = 0;
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		fVar19 = MISC::GET_FRAME_TIME();
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
		Var3.x = ENTITY::GET_ENTITY_PITCH(iParam0);
		Var3.f_1 = ENTITY::GET_ENTITY_ROLL(iParam0);
		Var3.f_2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		Var12 = { Vector(0f, 0f, 0f) - Local_7749 };
		Var12 = { Var12 / FtoV(((SYSTEM::TO_FLOAT(iLocal_7748) / 1000f) / fVar19)) };
		Local_7749 = { Local_7749 + Var12 };
		Var0 = { Var0 + Local_7749 * Vector(fVar19, fVar19, fVar19) };
		Var6 = { Param2 - Var0 };
		Var9 = { Param5 - Var3 };
		if (Var9.f_2 < 0f)
		{
			Var9.f_2 = (Var9.f_2 + 360f);
		}
		if (Var9.f_2 > (Param5.f_2 + 180f))
		{
			Var9.f_2 = (Var9.f_2 - 360f);
		}
		Var20 = { GlobalFunc_107(Var9) };
		Var23 = { GlobalFunc_107(Var6) };
		Var23 = { Var23 * FtoV(((SYSTEM::VMAG(Var6) / SYSTEM::TO_FLOAT(iLocal_7748)) * (fVar19 * 1000f))) };
		Var20 = { Var20 * FtoV(((SYSTEM::VMAG(Var9) / SYSTEM::TO_FLOAT(iLocal_7748)) * (fVar19 * 1000f))) };
		Var0 = { Var0 + Var23 };
		Var3 = { Var3 + Var20 };
		Var15 = { func_344(Var3.x, Var3.f_1, Var3.f_2) };
		Var0.f_2 = (Var0.f_2 + fParam8);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, Var0, 0, 0, 1);
		ENTITY::SET_ENTITY_QUATERNION(iParam0, Var15, Var15.f_1, Var15.f_2, Var15.f_3);
		iLocal_7748 = (iLocal_7748 - SYSTEM::ROUND((fVar19 * 1000f)));
	}
	return 0;
}

struct<4> func_344(float fParam0, float fParam1, float fParam2)//Position - 0x4DE37
{
	struct<4> Var0;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	
	fVar4 = (fParam0 * 0.5f);
	fVar5 = (fParam1 * 0.5f);
	fVar6 = (fParam2 * 0.5f);
	fVar7 = SYSTEM::COS(fVar5);
	fVar8 = SYSTEM::SIN(fVar5);
	fVar9 = SYSTEM::COS(fVar4);
	fVar10 = SYSTEM::SIN(fVar4);
	fVar11 = SYSTEM::COS(fVar6);
	fVar12 = SYSTEM::SIN(fVar6);
	Var0 = (((fVar11 * fVar10) * fVar7) + ((fVar12 * fVar9) * fVar8));
	Var0.f_1 = (((fVar11 * fVar9) * fVar8) - ((fVar12 * fVar10) * fVar7));
	Var0.f_1 = (Var0.f_1 * -1f);
	Var0.f_2 = (((fVar12 * fVar9) * fVar7) - ((fVar11 * fVar10) * fVar8));
	Var0.f_3 = (((fVar11 * fVar9) * fVar7) + ((fVar12 * fVar10) * fVar8));
	return Var0;
}











































































int func_419(var uParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x55B92
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	struct<3> Var10;
	struct<3> Var13;
	struct<3> Var16;
	struct<3> Var19;
	struct<3> Var22;
	float fVar25;
	float fVar26;
	bool bVar27;
	float fVar28;
	int iVar29;
	struct<3> Var30;
	struct<3> Var33;
	
	if (!uParam0->f_15)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(uParam0->f_12))
		{
			uParam0->f_27 = 0;
			Var19 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_12, 1) };
			Var22 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			fVar25 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var22, Var19, 0);
			fVar26 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var22, Var19, 1);
			if (iParam3 == 0)
			{
				if (fVar26 < 8f)
				{
					uParam0->f_14 = 1;
				}
				else if (fVar25 < 30f)
				{
					uParam0->f_14 = 2;
				}
				else
				{
					uParam0->f_14 = 3;
				}
			}
			else
			{
				uParam0->f_14 = iParam3;
			}
			if (!CAM::DOES_CAM_EXIST(uParam0->f_9))
			{
				uParam0->f_9 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
			}
			iVar1 = 0;
			while (iVar1 <= 7)
			{
				if (CAM::DOES_CAM_EXIST((*uParam0)[iVar1]))
				{
					CAM::DESTROY_CAM((*uParam0)[iVar1], 0);
				}
				iVar1++;
			}
			switch (uParam0->f_14)
			{
				case 1:
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iVar8 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						bVar6 = true;
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_12, 0))
					{
						iVar9 = PED::GET_VEHICLE_PED_IS_USING(uParam0->f_12);
						bVar7 = true;
						fVar5 = ENTITY::GET_ENTITY_HEADING(iVar9);
						if (fVar5 > 180f)
						{
							fVar5 = (fVar5 - 360f);
						}
					}
					else
					{
						fVar5 = ENTITY::GET_ENTITY_HEADING(uParam0->f_12);
						if (fVar5 > 180f)
						{
							fVar5 = (fVar5 - 360f);
						}
					}
					Var10 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
					uParam0->f_24 = 0;
					CAM::SET_CAM_FOV(uParam0->f_9, CAM::GET_FINAL_RENDERED_CAM_FOV());
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar6)
					{
						Var13 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar8, CAM::GET_FINAL_RENDERED_CAM_COORD()) };
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar8, Var13, 1);
					}
					else
					{
						Var13 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), CAM::GET_FINAL_RENDERED_CAM_COORD()) };
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], PLAYER::PLAYER_PED_ID(), Var13, 1);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], Var10, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 0, 1);
					uParam0->f_24++;
					uParam0->f_27 = uParam0->f_27;
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar7)
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar9, GlobalFunc_2777(uParam0->f_12), 1);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], uParam0->f_12, GlobalFunc_2777(uParam0->f_12), 1);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -0.951428f, 0f, fVar5, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], iParam6, 1);
					uParam0->f_24++;
					uParam0->f_27 = (uParam0->f_27 + iParam6);
					uParam0->f_15 = 1;
					break;
				
				case 2:
					if (Var22.f_2 > Var19.f_2)
					{
						fVar4 = GlobalFunc_567((Var22.f_2 + 5f), (Var19.f_2 + fVar25));
					}
					else
					{
						fVar4 = GlobalFunc_567((Var19.f_2 + 5f), (Var22.f_2 + fVar25));
					}
					fVar3 = 10f;
					Var16 = { Var19 - Var22 };
					Var16.f_2 = 0f;
					Var16 = { GlobalFunc_903(Var16, GlobalFunc_2776((fVar4 * MISC::TAN(fVar3)), (fVar25 / 3f))) };
					iVar2 = SYSTEM::ROUND(((fVar26 / ((30f - 7.5f) / (800f - 200f))) + 500f));
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iVar8 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						bVar6 = true;
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_12, 0))
					{
						iVar9 = PED::GET_VEHICLE_PED_IS_USING(uParam0->f_12);
						bVar7 = true;
						fVar5 = ENTITY::GET_ENTITY_HEADING(iVar9);
						if (fVar5 > 180f)
						{
							fVar5 = (fVar5 - 360f);
						}
					}
					else
					{
						fVar5 = ENTITY::GET_ENTITY_HEADING(uParam0->f_12);
						if (fVar5 > 180f)
						{
							fVar5 = (fVar5 - 360f);
						}
					}
					Var10 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
					uParam0->f_24 = 0;
					CAM::SET_CAM_FOV(uParam0->f_9, CAM::GET_FINAL_RENDERED_CAM_FOV());
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar6)
					{
						Var13 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar8, CAM::GET_FINAL_RENDERED_CAM_COORD()) };
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar8, Var13, 1);
					}
					else
					{
						Var13 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), CAM::GET_FINAL_RENDERED_CAM_COORD()) };
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], PLAYER::PLAYER_PED_ID(), Var13, 1);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], Var10, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 0, 1);
					uParam0->f_24++;
					uParam0->f_27 = uParam0->f_27;
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar6)
					{
						Var13 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar8, CAM::GET_FINAL_RENDERED_CAM_COORD()) };
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar8, Var13 + Vector(15f, 0f, 0f), 1);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], PLAYER::PLAYER_PED_ID(), 0f, 0f, 5f, 0);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -87.5f, 0f, Var10.f_2, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 400, 1);
					uParam0->f_24++;
					uParam0->f_27 += 400;
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar6)
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar8, Vector(fVar4, 0f, 0f) + Var16, 0);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], PLAYER::PLAYER_PED_ID(), Vector(fVar4, 0f, 0f) + Var16, 0);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -87.5f, 0f, Var10.f_2, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 400, 1);
					uParam0->f_24++;
					uParam0->f_27 += 400;
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar7)
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar9, Vector(fVar4, 0f, 0f) - Var16, 0);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], uParam0->f_12, Vector(fVar4, 0f, 0f) - Var16, 0);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -87.5f, 0f, fVar5, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], iVar2, 1);
					uParam0->f_24++;
					uParam0->f_27 = (uParam0->f_27 + iVar2);
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar7)
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar9, 0f, 0f, 15f, 0);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], uParam0->f_12, 0f, 0f, 5f, 0);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -87.5f, 0f, fVar5, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 400, 1);
					uParam0->f_24++;
					uParam0->f_27 += 400;
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar7)
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar9, GlobalFunc_2777(uParam0->f_12), 1);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], uParam0->f_12, GlobalFunc_2777(uParam0->f_12), 1);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -0.951428f, 0f, fVar5, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 400, 1);
					uParam0->f_24++;
					uParam0->f_27 += 400;
					uParam0->f_15 = 1;
					break;
				
				case 3:
					fVar4 = 450f;
					if (Var22.f_2 > Var19.f_2)
					{
						fVar4 = GlobalFunc_567(fVar4, (Var22.f_2 + 25f));
					}
					else
					{
						fVar4 = GlobalFunc_567(fVar4, (Var19.f_2 + 25f));
					}
					fVar3 = 20f;
					Var16 = { Var19 - Var22 };
					Var16.f_2 = 0f;
					Var16 = { GlobalFunc_903(Var16, GlobalFunc_2776((fVar4 * MISC::TAN(fVar3)), (fVar25 / 3f))) };
					fVar26 = GlobalFunc_253(fVar26, 50f, 4000f);
					iVar2 = SYSTEM::ROUND(((fVar26 / ((4000f - 50f) / (2000f - 1000f))) + 1000f));
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iVar8 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						bVar6 = true;
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_12, 0))
					{
						iVar9 = PED::GET_VEHICLE_PED_IS_USING(uParam0->f_12);
						bVar7 = true;
						fVar5 = ENTITY::GET_ENTITY_HEADING(iVar9);
						if (fVar5 > 180f)
						{
							fVar5 = (fVar5 - 360f);
						}
					}
					else
					{
						fVar5 = ENTITY::GET_ENTITY_HEADING(uParam0->f_12);
						if (fVar5 > 180f)
						{
							fVar5 = (fVar5 - 360f);
						}
					}
					Var10 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
					uParam0->f_24 = 0;
					CAM::SET_CAM_FOV(uParam0->f_9, CAM::GET_FINAL_RENDERED_CAM_FOV());
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar6)
					{
						Var13 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar8, CAM::GET_FINAL_RENDERED_CAM_COORD()) };
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar8, Var13, 1);
					}
					else
					{
						Var13 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), CAM::GET_FINAL_RENDERED_CAM_COORD()) };
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], PLAYER::PLAYER_PED_ID(), Var13, 1);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], Var10, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 0, 1);
					uParam0->f_24++;
					uParam0->f_27 = uParam0->f_27;
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar6)
					{
						Var13 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar8, CAM::GET_FINAL_RENDERED_CAM_COORD()) };
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar8, Var13 + Vector(15f, 0f, 0f), 1);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], PLAYER::PLAYER_PED_ID(), 0f, 0f, 5f, 0);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -87.5f, 0f, Var10.f_2, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 400, 1);
					uParam0->f_24++;
					uParam0->f_27 += 400;
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar6)
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar8, Vector(fVar4, 0f, 0f) + Var16, 0);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], PLAYER::PLAYER_PED_ID(), Vector(fVar4, 0f, 0f) + Var16, 0);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -87.5f, 0f, Var10.f_2, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 800, 1);
					uParam0->f_24++;
					uParam0->f_27 += 800;
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar7)
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar9, Vector(fVar4, 0f, 0f) - Var16, 0);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], uParam0->f_12, Vector(fVar4, 0f, 0f) - Var16, 0);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -87.5f, 0f, fVar5, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], iVar2, 1);
					uParam0->f_24++;
					uParam0->f_27 = (uParam0->f_27 + iVar2);
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar7)
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar9, 0f, 0f, 15f, 0);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], uParam0->f_12, 0f, 0f, 5f, 0);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -87.5f, 0f, fVar5, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 800, 1);
					uParam0->f_24++;
					uParam0->f_27 += 800;
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar7)
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar9, GlobalFunc_2777(uParam0->f_12), 1);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], uParam0->f_12, GlobalFunc_2777(uParam0->f_12), 1);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -0.951428f, 0f, fVar5, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 400, 1);
					uParam0->f_24++;
					uParam0->f_27 += 400;
					uParam0->f_15 = 1;
					break;
			}
		}
		else
		{
			if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
			}
			else if (PED::IS_PED_INJURED(uParam0->f_12))
			{
			}
			uParam0->f_17 = 1;
		}
	}
	if (uParam0->f_15 && !uParam0->f_16)
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_9))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(uParam0->f_12))
			{
				uParam0->f_13 = PLAYER::PLAYER_PED_ID();
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_13, 1);
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_12, 1);
				uParam0->f_21 = GlobalFunc_701();
				GlobalFunc_7632(1);
				if (uParam0->f_24 > 0)
				{
					iVar1 = 0;
					while (iVar1 <= (uParam0->f_24 - 1))
					{
						CAM::SET_CAM_ACTIVE((*uParam0)[iVar1], 1);
						iVar1++;
					}
				}
				GlobalFunc_7981(0, 1);
				CAM::SET_CAM_ACTIVE(uParam0->f_9, 1);
				if (iParam5 == 0)
				{
					CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				}
				else if (iParam5 > 0)
				{
					CAM::RENDER_SCRIPT_CAMS(1, 1, iParam5, 1, 0, 0);
				}
				if (!Global_17098.f_111)
				{
					if (uParam0->f_14 == 3)
					{
						AUDIO::PLAY_SOUND(-1, "CHARACTER_CHANGE_UP_MASTER", 0, 0, 0, 1);
						if (Global_17098.f_109 == -1)
						{
							Global_17098.f_109 = AUDIO::GET_SOUND_ID();
							Global_17098.f_110 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
						}
						AUDIO::PLAY_SOUND(Global_17098.f_109, "CHARACTER_CHANGE_SKY_MASTER", 0, 0, 0, 1);
						AUDIO::START_AUDIO_SCENE("CHARACTER_CHANGE_IN_SKY_SCENE");
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHARACTER_CHANGE_IN_SKY_SCENE"))
						{
						}
					}
					else if (uParam0->f_14 == 2)
					{
						if (Global_17098.f_109 == -1)
						{
							Global_17098.f_109 = AUDIO::GET_SOUND_ID();
							Global_17098.f_110 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
						}
						AUDIO::PLAY_SOUND(Global_17098.f_109, "All", "SHORT_PLAYER_SWITCH_SOUND_SET", 0, 0, 1);
					}
				}
				uParam0->f_28 = GlobalFunc_2349(uParam0->f_9);
				uParam0->f_25 = MISC::GET_GAME_TIMER();
				uParam0->f_16 = 1;
				GlobalFunc_748(1);
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
		if (CAM::DOES_CAM_EXIST(uParam0->f_9))
		{
			GRAPHICS::SET_PLAYER_TCMODIFIER_TRANSITION(CAM::GET_CAM_SPLINE_PHASE(uParam0->f_9));
			bVar27 = true;
			if (uParam0->f_24 > 0)
			{
				iVar1 = 0;
				while (iVar1 <= (uParam0->f_24 - 1))
				{
					if (!CAM::DOES_CAM_EXIST((*uParam0)[iVar1]))
					{
						bVar27 = false;
					}
					iVar1++;
				}
			}
			if (bVar27)
			{
				if (CAM::IS_CAM_INTERPOLATING(uParam0->f_9))
				{
					if (!Global_17098.f_111)
					{
						if (uParam0->f_14 == 3)
						{
							fVar28 = GlobalFunc_2349(uParam0->f_9);
							if (fVar28 > uParam0->f_28)
							{
								uParam0->f_28 = fVar28;
							}
							else if (uParam0->f_28 > (fVar28 + 1f))
							{
								if (Global_17098.f_107 == -1)
								{
									Global_17098.f_107 = AUDIO::GET_SOUND_ID();
									Global_17098.f_108 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
									AUDIO::PLAY_SOUND(Global_17098.f_107, "CHARACTER_CHANGE_DOWN_MASTER", 0, 0, 0, 1);
								}
								if (Global_17098.f_109 != -1 && Global_17098.f_110 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
								{
									AUDIO::STOP_SOUND(Global_17098.f_109);
									AUDIO::RELEASE_SOUND_ID(Global_17098.f_109);
									Global_17098.f_109 = -1;
									Global_17098.f_110 = 0;
									AUDIO::STOP_AUDIO_SCENE("CHARACTER_CHANGE_IN_SKY_SCENE");
								}
							}
						}
					}
					if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_9) > 0.5f && CAM::IS_CAM_RENDERING(uParam0->f_9))
					{
						uParam0->f_18 = 1;
					}
					if (uParam0->f_18)
					{
						if (PLAYER::PLAYER_PED_ID() == uParam0->f_12)
						{
							if (!PED::IS_PED_INJURED(uParam0->f_12))
							{
								if (uParam0->f_24 >= 1)
								{
									if (CAM::DOES_CAM_EXIST((*uParam0)[(uParam0->f_24 - 1)]))
									{
										if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_12, 0))
										{
											iVar29 = PED::GET_VEHICLE_PED_IS_USING(uParam0->f_12);
											Var30 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar29, CAM::GET_GAMEPLAY_CAM_COORD()) };
											CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[(uParam0->f_24 - 1)], iVar29, Var30, 1);
										}
										else
										{
											Var33 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_12, CAM::GET_GAMEPLAY_CAM_COORD()) };
											CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[(uParam0->f_24 - 1)], uParam0->f_12, Var33, 1);
										}
										CAM::SET_CAM_ROT((*uParam0)[(uParam0->f_24 - 1)], CAM::GET_GAMEPLAY_CAM_ROT(2), 2);
										CAM::SET_CAM_FOV((*uParam0)[(uParam0->f_24 - 1)], CAM::GET_GAMEPLAY_CAM_FOV());
										bVar0 = true;
									}
								}
							}
						}
					}
				}
				else if (!uParam0->f_18)
				{
					uParam0->f_18 = 1;
				}
				else
				{
					uParam0->f_17 = 1;
				}
			}
		}
		else
		{
			uParam0->f_17 = 1;
		}
	}
	if (uParam0->f_17)
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_9))
		{
			CAM::DESTROY_CAM(uParam0->f_9, 0);
		}
		if (uParam0->f_24 > 0)
		{
			iVar1 = 0;
			while (iVar1 <= (uParam0->f_24 - 1))
			{
				if (CAM::DOES_CAM_EXIST((*uParam0)[iVar1]))
				{
					CAM::DESTROY_CAM((*uParam0)[iVar1], 0);
				}
				iVar1++;
			}
		}
		GlobalFunc_7632(uParam0->f_21);
		uParam0->f_15 = 0;
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
		if (Global_17098.f_107 != -1 && Global_17098.f_108 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
			AUDIO::STOP_SOUND(Global_17098.f_107);
			AUDIO::RELEASE_SOUND_ID(Global_17098.f_107);
			Global_17098.f_107 = -1;
			Global_17098.f_108 = 0;
		}
		if (fParam2 <= 360f && fParam2 >= -360f)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam2);
		}
		if (fParam1 <= 360f && fParam1 >= -360f)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam1, 1065353216);
		}
		if (!Global_35923)
		{
			CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
			CAM::_0x487A82C650EB7799(0f);
			CAM::_0x0225778816FDC28C(0f);
		}
		if (iParam4 == -1)
		{
			if (bVar0)
			{
				CAM::RENDER_SCRIPT_CAMS(0, 1, 100, 1, 0, 0);
			}
			else
			{
				CAM::RENDER_SCRIPT_CAMS(0, 1, 1000, 1, 0, 0);
			}
		}
		else if (iParam4 == 0)
		{
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		}
		else
		{
			CAM::RENDER_SCRIPT_CAMS(0, 1, iParam4, 1, 0, 0);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
			PED::SET_PED_CAN_BE_TARGETTED(PLAYER::PLAYER_PED_ID(), 1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), 1, 0);
			}
		}
		GlobalFunc_749(0);
		if (!PED::IS_PED_INJURED(uParam0->f_13))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_13, 0);
		}
		if (!PED::IS_PED_INJURED(uParam0->f_12))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_12, 0);
		}
		GRAPHICS::SET_CURRENT_PLAYER_TCMODIFIER(GlobalFunc_707(GlobalFunc_8315()));
		GlobalFunc_748(0);
		return 0;
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	return 1;
}















int func_434()//Position - 0x57265
{
	if (!Local_3754.f_15)
	{
		GlobalFunc_2785(&uLocal_3710);
		HUD::CLEAR_HELP(1);
		HUD::CLEAR_PRINTS();
		if (!CAM::DOES_CAM_EXIST(Local_3754.f_9))
		{
			Local_3754.f_9 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
		}
		CAM::ADD_CAM_SPLINE_NODE(Local_3754.f_9, CAM::GET_GAMEPLAY_CAM_COORD(), CAM::GET_GAMEPLAY_CAM_ROT(2), 0, 3, 2);
		CAM::ADD_CAM_SPLINE_NODE(Local_3754.f_9, 3623.298f, 3754.481f, 30.22356f, -2.431579f, 0f, -27.47959f, 1200, 3, 2);
		CAM::ADD_CAM_SPLINE_NODE(Local_3754.f_9, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_3710[0], 0.263986f, -2.75f, 0.8f), ENTITY::GET_ENTITY_ROTATION(uLocal_3710[0], 2), 1700, 3, 2);
		Local_3754.f_15 = 1;
		Local_3754.f_14 = 1;
		Local_3754.f_12 = uLocal_3710[0];
		return 1;
	}
	return 0;
}




















void func_454(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, int iParam7)//Position - 0x5890E
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if (!*uParam3)
	{
		func_457(iParam0, iParam2, uParam3, bParam6);
	}
	if (*uParam3)
	{
		if (!*uParam4)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0) && ENTITY::DOES_ENTITY_EXIST(*iParam1))
			{
				if ((ENTITY::DOES_ENTITY_HAVE_PHYSICS(*iParam1) || bParam5) || iParam7)
				{
					ENTITY::DETACH_ENTITY(*iParam1, 0, 0);
					iVar0 = 0;
					while (iVar0 < 4)
					{
						Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*iParam0, func_456(iVar0)) };
						Var4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*iParam1, func_455(iVar0)) };
						if (bParam5)
						{
							PHYSICS::PIN_ROPE_VERTEX((*iParam2)[iVar0], 0, Var1);
							PHYSICS::PIN_ROPE_VERTEX((*iParam2)[iVar0], (PHYSICS::GET_ROPE_VERTEX_COUNT((*iParam2)[iVar0]) - 1), Var4);
						}
						else
						{
							PHYSICS::UNPIN_ROPE_VERTEX((*iParam2)[iVar0], 0);
							PHYSICS::UNPIN_ROPE_VERTEX((*iParam2)[iVar0], (PHYSICS::GET_ROPE_VERTEX_COUNT((*iParam2)[iVar0]) - 1));
							PHYSICS::ATTACH_ENTITIES_TO_ROPE((*iParam2)[iVar0], *iParam1, *iParam0, Var4, Var1, 6f, 0, 0, 0, 0);
						}
						iVar0++;
					}
					if (!bParam5)
					{
						OBJECT::SET_OBJECT_PHYSICS_PARAMS(*iParam1, 1000f, 1f, 0.02f, 0.02f, 0.003f, 0.02f, 0.4f, 0.4f, -1082130432, -1082130432, -1082130432);
						ENTITY::SET_ENTITY_DYNAMIC(*iParam1, 1);
					}
					*uParam4 = 1;
				}
			}
		}
	}
}

Vector3 func_455(int iParam0)//Position - 0x58A5F
{
	switch (iParam0)
	{
		case 0:
			return -1.2f, -1.7f, 1.4f;
			break;
		
		case 1:
			return 1.2f, -1.7f, 1.4f;
			break;
		
		case 2:
			return -1.2f, 1.7f, 1.4f;
			break;
		
		case 3:
			return 1.2f, 1.7f, 1.4f;
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_456(int iParam0)//Position - 0x58ADD
{
	switch (iParam0)
	{
		case 0:
			return 0.7f, 0.7f, -0.85f;
			break;
		
		case 1:
			return -0.7f, 0.7f, -0.85f;
			break;
		
		case 2:
			return 0.7f, -0.7f, -0.85f;
			break;
		
		case 3:
			return -0.7f, -0.7f, -0.85f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_457(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x58B5B
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	if (!*uParam2)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam0, func_456(iVar0)) };
				if (bParam3)
				{
					iVar4 = 0;
				}
				else
				{
					iVar4 = 0;
				}
				(*uParam1)[iVar0] = PHYSICS::ADD_ROPE(Var1, 0f, 0f, 0f, 6f, iVar4, -1082130432, 1056964608, 1056964608, 0, 0, 1, 1065353216, 0, 0);
				iVar0++;
			}
			*uParam2 = 1;
		}
	}
}

void func_458()//Position - 0x58BD7
{
	if (iLocal_84 == 0)
	{
		GlobalFunc_11046(7, "drive with patricia", 1, 0, 0, 1);
		iLocal_3237 = MISC::GET_GAME_TIMER();
		iLocal_84 = 1;
	}
	if (iLocal_3287 < 2)
	{
		func_540();
	}
	if (iLocal_84 == 1)
	{
		switch (iLocal_3287)
		{
			case 0:
				func_529();
				GlobalFunc_650(1369.798f, 1148.16f, 113.2f, 100f, 120f, "FBI_5_EXT");
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("trevor", PLAYER::PLAYER_PED_ID(), 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("patricia", Local_1589, 0);
				}
				if (GlobalFunc_10157(&Local_3049, 1362.918f, 1156.911f, 112.759f, 2.5f, 2.5f, 2.5f, 1, Local_1589, Local_2540, "fbi5a_god_21", "fbi5a_god_23", "", "fbi5a_god_22", 0, 1, 1, -1))
				{
					GlobalFunc_763(Local_2540, 1093140480, 1, 1056964608, 0, 1);
					iLocal_3287++;
				}
				break;
			
			case 1:
				GlobalFunc_650(1369.798f, 1148.16f, 113.2f, 100f, 120f, "FBI_5_EXT");
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("trevor", PLAYER::PLAYER_PED_ID(), 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("patricia", Local_1589, 0);
				}
				if (GlobalFunc_763(Local_2540, 1093140480, 1, 1056964608, 0, 1))
				{
					if (CUTSCENE::HAS_CUTSCENE_LOADED())
					{
						if (func_485(1, 1, 1, 0))
						{
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_5_TAKE_PATRICIA_HOME"))
							{
								AUDIO::STOP_AUDIO_SCENE("FBI_5_TAKE_PATRICIA_HOME");
							}
							GlobalFunc_5652(&Local_3049, 1, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1589, "patricia", 0, Local_1589.f_1, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_2540, "trevors_car", 0, Local_2540.f_1, 0);
							GlobalFunc_2875(&Local_2540);
							RECORDING::_0x293220DA1B46CEBC(10f, 0f, 3);
							RECORDING::_0x48621C9FCA3EBD28(4);
							if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
							{
								CUTSCENE::_0x7F96F23FA9B73327(Local_2540.f_1);
							}
							CUTSCENE::START_CUTSCENE(0);
							iLocal_3287++;
						}
					}
				}
				break;
			
			case 2:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					MISC::CLEAR_AREA(1369.798f, 1148.16f, 112.7589f, 1000f, 1, 0, 0, 0);
					iLocal_3287++;
				}
				break;
			
			case 3:
				if (CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					if (!CUTSCENE::WAS_CUTSCENE_SKIPPED())
					{
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("trevor", GlobalFunc_4917(2)))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2540, -1);
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("patricia", Local_1589.f_1))
						{
							PED::DELETE_PED(&Local_1589);
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(1))
						{
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						}
					}
					else
					{
						CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 1, 0);
						iLocal_3287++;
					}
				}
				else
				{
					GlobalFunc_5917(&Local_2540);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_2540, 1);
					func_473(1, 1, 0, 0, 0, 3000, 1, 1, 1, 1, 1);
					RECORDING::_0x81CBAE94390F9F89();
					func_468();
				}
				break;
			
			case 4:
				if (CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("trevor", GlobalFunc_4917(2)))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2540, -1);
					}
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_1589))
					{
						PED::DELETE_PED(&Local_1589);
					}
					GlobalFunc_5917(&Local_2540);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_2540, 1);
					func_459(1, 0, 0, 1, 800);
					RECORDING::_0x81CBAE94390F9F89();
					func_468();
				}
				break;
			}
	}
	if (iLocal_84 == 3)
	{
		switch (iLocal_3287)
		{
			case 0:
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2540, -1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_1589);
				PED::SET_PED_INTO_VEHICLE(Local_1589, Local_2540, 0);
				ENTITY::SET_ENTITY_COORDS(Local_2540, 1369.798f, 1148.16f, 112.7589f, 1, 0, 0, 1);
				iLocal_3287++;
				break;
			
			case 1:
				break;
			}
	}
	if (iLocal_84 == 2)
	{
	}
}

void func_459(bool bParam0, float fParam1, float fParam2, bool bParam3, int iParam4)//Position - 0x58F61
{
	GlobalFunc_8380(0, 1, 1, 0);
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	GlobalFunc_4956();
	HUD::DISPLAY_HUD(1);
	HUD::DISPLAY_RADAR(1);
	CAM::SET_WIDESCREEN_BORDERS(0, 500);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam1);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam2, 1065353216);
		if (bParam0)
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
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
	CAM::DO_SCREEN_FADE_IN(iParam4);
}









void func_468()//Position - 0x59220
{
	GlobalFunc_5103(0, 0);
	GlobalFunc_5128(0);
	func_977();
}





void func_473(bool bParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)//Position - 0x593A7
{
	GlobalFunc_657();
	GlobalFunc_8380(0, 1, 1, 0);
	if (bParam7)
	{
		HUD::CLEAR_PRINTS();
	}
	HUD::CLEAR_HELP(1);
	if (bParam8)
	{
		GlobalFunc_5105();
	}
	if (bParam10)
	{
		HUD::DISPLAY_HUD(1);
		HUD::DISPLAY_RADAR(1);
		CAM::SET_WIDESCREEN_BORDERS(0, 500);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (bParam9)
		{
			CAM::DESTROY_ALL_CAMS(0);
		}
		if (bParam1)
		{
			if (bParam2)
			{
				CAM::RENDER_SCRIPT_CAMS(0, 1, iParam5, 1, 0, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam3);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam4, 1065353216);
			}
			else
			{
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
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
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
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












int func_485(bool bParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x59842
{
	if (GlobalFunc_552(1, 0, 1) || iParam3)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
		GlobalFunc_8380(1, 1, 1, 0);
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
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 4);
		}
		else
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
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












































void func_529()//Position - 0x5C38D
{
	switch (iLocal_3288)
	{
		case 0:
			if (GlobalFunc_588(&iLocal_3237, iLocal_7737))
			{
				if (!GlobalFunc_5172(&Local_3049, 1))
				{
					if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_TNP", 6, 0, 0, 0))
					{
						iLocal_3288++;
					}
				}
			}
			break;
		
		case 1:
			if (GlobalFunc_588(&iLocal_3237, 10000))
			{
				if (!func_314("fbi5a_mess"))
				{
					if (!func_537(Local_3049.f_5, Local_1589, 0))
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							func_534();
							if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_mess", 7, 0, 0, 0))
							{
								iLocal_3237 = MISC::GET_GAME_TIMER();
								func_298("fbi5a_mess", 1);
							}
							else
							{
								GlobalFunc_4935();
							}
						}
					}
				}
			}
			if (func_530(Local_3049.f_5, Local_1589, 0, 0))
			{
				PED::RESET_PED_IN_VEHICLE_CONTEXT(PLAYER::PLAYER_PED_ID());
				iLocal_3288++;
			}
			break;
		
		case 2:
			break;
		
		case 22:
			break;
	}
}

int func_530(var uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x5C486
{
	if (func_537(uParam0, iParam1, iParam2))
	{
		if (GlobalFunc_620())
		{
			GlobalFunc_619(0);
		}
		if (iLocal_3123)
		{
			if (!GlobalFunc_5172(&Local_3049, 0))
			{
				if (GlobalFunc_10626(&uLocal_3788, "fbi5aAU", &Local_3686, &Local_3692, 6, 0, 0))
				{
					iLocal_3123 = 0;
				}
			}
		}
		if (!GlobalFunc_5172(&Local_3049, 0) && !iLocal_3123)
		{
			return 1;
		}
	}
	else if (GlobalFunc_111())
	{
		if (bParam3)
		{
			if (!GlobalFunc_620())
			{
				GlobalFunc_619(1);
				if (GlobalFunc_617())
				{
					func_534();
				}
			}
		}
	}
	return 0;
}




void func_534()//Position - 0x5C5A0
{
	if (GlobalFunc_111())
	{
		if (!iLocal_3123)
		{
			Local_3686 = { GlobalFunc_560() };
			Local_3692 = { GlobalFunc_514() };
			if (!MISC::ARE_STRINGS_EQUAL(&Local_3686, "null") && !MISC::ARE_STRINGS_EQUAL(&Local_3692, "null"))
			{
				iLocal_3123 = 1;
			}
		}
	}
}



int func_537(var uParam0, int iParam1, int iParam2)//Position - 0x5C6C1
{
	if (HUD::DOES_BLIP_EXIST(uParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			if (!PED::IS_PED_INJURED(iParam1) && !PED::IS_PED_INJURED(iParam2))
			{
				if ((func_538(&iParam1) && func_538(&iParam2)) || ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_ON_FOOT(iParam1)) && (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_ON_FOOT(iParam2))))
				{
					if (!GlobalFunc_617())
					{
						return 1;
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (!PED::IS_PED_INJURED(iParam1))
			{
				if (func_538(&iParam1) || (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_ON_FOOT(iParam1)))
				{
					if (!GlobalFunc_617())
					{
						return 1;
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			if (!PED::IS_PED_INJURED(iParam2))
			{
				if (func_538(&iParam2) || (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_ON_FOOT(iParam2)))
				{
					if (!GlobalFunc_617())
					{
						return 1;
					}
				}
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			return 1;
		}
	}
	return 0;
}

int func_538(int iParam0)//Position - 0x5C7EA
{
	int iVar0;
	
	if (GlobalFunc_2881(&iVar0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(*iParam0, iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}


void func_540()//Position - 0x5C84B
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_1715 - 1))
	{
		if (!PED::IS_PED_INJURED(Local_1715[iVar0 /*25*/]))
		{
			if (iLocal_3348[iVar0] != 23)
			{
				if ((func_547(&(Local_1715[iVar0 /*25*/]), &(Local_1715[iVar0 /*25*/].f_13)) || GlobalFunc_592(&(Local_1715[iVar0 /*25*/]), 30f, 1)) || PED::IS_PED_RAGDOLL(Local_1715[iVar0 /*25*/]))
				{
					iLocal_3348[0] = 22;
					iLocal_3348[1] = 22;
					bLocal_3129 = true;
				}
			}
			switch (iLocal_3348[iVar0])
			{
				case 0:
					break;
				
				case 1:
					break;
				
				case 22:
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1715[iVar0 /*25*/], 0);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1715[iVar0 /*25*/], Local_1715[iVar0 /*25*/].f_9, 2f, 0, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1715[iVar0 /*25*/], 51, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1715[iVar0 /*25*/], 50, 1);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1715[iVar0 /*25*/], 200f, 0);
					iLocal_3348[iVar0] = 23;
					break;
				
				case 23:
					break;
			}
		}
		else if (!Local_1715[iVar0 /*25*/].f_18)
		{
			STREAMING::REQUEST_MODEL(Local_1715[iVar0 /*25*/].f_1);
			STREAMING::REQUEST_ANIM_DICT("mini@strip_club@idles@bouncer@idle_a");
			STREAMING::REQUEST_ANIM_DICT("mini@strip_club@idles@bouncer@idle_c");
			if ((STREAMING::HAS_MODEL_LOADED(Local_1715[iVar0 /*25*/].f_1) && STREAMING::HAS_ANIM_DICT_LOADED("mini@strip_club@idles@bouncer@idle_a")) && STREAMING::HAS_ANIM_DICT_LOADED("mini@strip_club@idles@bouncer@idle_c"))
			{
				func_541(&(Local_1715[iVar0 /*25*/]), 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_1715[iVar0 /*25*/], 3, iVar0, 0, 0);
				HUD::REMOVE_BLIP(&(Local_1715[iVar0 /*25*/].f_2));
				TASK::TASK_LOOK_AT_ENTITY(Local_1715[iVar0 /*25*/], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				switch (iVar0)
				{
					case 0:
						TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
						TASK::TASK_PLAY_ANIM(0, "mini@strip_club@idles@bouncer@idle_a", "idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
						TASK::TASK_PERFORM_SEQUENCE(Local_1715[iVar0 /*25*/], uLocal_3685);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
						break;
					
					case 1:
						TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
						TASK::TASK_PLAY_ANIM(0, "mini@strip_club@idles@bouncer@idle_c", "idle_c", 8f, -8f, -1, 1, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
						TASK::TASK_PERFORM_SEQUENCE(Local_1715[iVar0 /*25*/], uLocal_3685);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
						break;
					}
			}
		}
		else
		{
			bLocal_3129 = true;
		}
		iVar0++;
	}
}

void func_541(var uParam0, bool bParam1)//Position - 0x5CAA1
{
	MISC::CLEAR_AREA(uParam0->f_3, 2f, 1, 0, 0, 0);
	*uParam0 = PED::CREATE_PED(26, uParam0->f_1, uParam0->f_3, uParam0->f_12, 1, 1);
	PED::SET_PED_RANDOM_COMPONENT_VARIATION(*uParam0, 0);
	PED::SET_PED_RANDOM_PROPS(*uParam0);
	if (uParam0->f_1 == joaat("s_m_y_marine_03"))
	{
		if (PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 2) == 3 || PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 2) == 2)
		{
			ENTITY::SET_ENTITY_PROOFS(*uParam0, 0, 0, 0, 0, 0, 0, 0, 1);
		}
	}
	PED::SET_PED_DIES_WHEN_INJURED(*uParam0, 1);
	PED::SET_PED_AS_ENEMY(*uParam0, 1);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam0, 1, 0);
	PED::SET_PED_KEEP_TASK(*uParam0, 1);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 132, 1);
	PED::SET_PED_MONEY(*uParam0, 0);
	WEAPON::GIVE_WEAPON_TO_PED(*uParam0, uParam0->f_20, -1, 1, 1);
	ENTITY::SET_ENTITY_HEALTH(*uParam0, uParam0->f_13);
	PED::SET_PED_MAX_HEALTH(*uParam0, uParam0->f_13);
	if (uParam0->f_16)
	{
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*uParam0, 1);
	}
	if (uParam0->f_17)
	{
		PED::ADD_ARMOUR_TO_PED(*uParam0, 100);
	}
	PED::SET_PED_NAME_DEBUG(*uParam0, &(uParam0->f_21));
	PED::SET_PED_SEEING_RANGE(*uParam0, 250f);
	PED::SET_PED_HEARING_RANGE(*uParam0, 250f);
	PED::SET_PED_ID_RANGE(*uParam0, 250f);
	uParam0->f_2 = GlobalFunc_6797(*uParam0, 1, 145);
	HUD::SET_BLIP_DISPLAY(uParam0->f_2, 2);
	PED::SET_PED_CAN_EVASIVE_DIVE(*uParam0, 1);
	func_544(uParam0, 1);
	PED::SET_PED_ACCURACY(*uParam0, uParam0->f_14);
	if (bParam1)
	{
		PED::SET_PED_LOD_MULTIPLIER(*uParam0, 3f);
	}
	GlobalFunc_722(*uParam0, 327);
	GlobalFunc_593(*uParam0, 0);
	uParam0->f_18 = 1;
}



void func_544(var uParam0, bool bParam1)//Position - 0x5CD03
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_7743, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_7743);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_7744);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_7743, iLocal_7744);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_7744, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_7744, iLocal_7743);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!PED::IS_PED_INJURED(*uParam0))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iLocal_7744);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 1, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 29, 1);
			PED::SET_PED_TARGET_LOSS_RESPONSE(*uParam0, 1);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam0, 1, 0);
			if (bParam1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
			}
			else
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 0);
			}
		}
	}
}



int func_547(var uParam0, var uParam1)//Position - 0x5CEBC
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!PED::IS_PED_INJURED(*uParam0))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(*uParam0);
			if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), 1) || iVar0 < *uParam1) || PED::IS_PED_RESPONDING_TO_EVENT(*uParam0, 17))
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















































void func_594()//Position - 0x623C0
{
	CAM::STOP_CUTSCENE_CAM_SHAKING();
	if (iLocal_84 == 0)
	{
		STREAMING::REQUEST_MODEL(iLocal_3623);
		STREAMING::REQUEST_MODEL(Local_2540.f_1);
		STREAMING::REQUEST_MODEL(Local_1589.f_1);
		STREAMING::REQUEST_CLIP_SET("clipset@missfbi5_trevor_driving");
		VEHICLE::REQUEST_VEHICLE_RECORDING(Local_2540.f_13, "lkfbi5a");
		if ((((STREAMING::HAS_MODEL_LOADED(iLocal_3623) && STREAMING::HAS_MODEL_LOADED(Local_2540.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_1589.f_1)) && STREAMING::HAS_CLIP_SET_LOADED("clipset@missfbi5_trevor_driving")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_2540.f_13, "lkfbi5a"))
		{
			MISC::CLEAR_AREA(Local_2540.f_3, 22f, 1, 0, 0, 0);
			GlobalFunc_9756(&Local_2540, 2, Local_2540.f_3, Local_2540.f_6, 0, 0);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2540, Local_2540.f_13, "lkfbi5a", 1);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_2540, 5000f);
			VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2540, 1);
			VEHICLE::SET_PLAYBACK_SPEED(Local_2540, 0f);
			if (VEHICLE::GET_VEHICLE_MOD_KIT(Local_2540) >= 0 && VEHICLE::GET_VEHICLE_MOD_KIT(Local_2540) < 255)
			{
				if (VEHICLE::GET_VEHICLE_MOD(Local_2540, 10) >= 0)
				{
					VEHICLE::REMOVE_VEHICLE_MOD(Local_2540, 10);
				}
			}
			PED::SET_PED_INTO_VEHICLE(uLocal_3710[2], Local_2540, -1);
			GlobalFunc_11267(uLocal_3710[2], 12, 21, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			GlobalFunc_173(&uLocal_3788, 2, uLocal_3710[2], "trevor", 0, 1);
			func_647(&Local_1589, 40, Local_2540, 0, 1);
			func_646(&Local_1589);
			func_645(&Local_1589, 1);
			PED::SET_PED_LOD_MULTIPLIER(Local_1589, 2f);
			GlobalFunc_173(&uLocal_3788, 7, Local_1589, "patricia", 0, 1);
			GlobalFunc_9134(&uLocal_3710, 2);
			Local_3754.f_12 = uLocal_3710[2];
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(2);
			AUDIO::START_AUDIO_SCENE("FBI_5_TAKE_PATRICIA_HOME");
			if (iLocal_3976 == 0)
			{
				iLocal_3976 = 2;
			}
			iLocal_84 = 1;
		}
	}
	if (iLocal_84 == 1)
	{
		if (GlobalFunc_8315() == 2)
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 309, 1);
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 287, 1);
			PED::SET_PED_RESET_FLAG(Local_1589, 309, 1);
			PED::SET_PED_RESET_FLAG(Local_1589, 287, 1);
		}
		if (!func_596(&uLocal_5218, &uLocal_6459))
		{
			func_529();
			if (Local_3754.f_18)
			{
				if (!Local_3754.f_19)
				{
					if (GlobalFunc_10991(&uLocal_3710, 0, 0, 0))
					{
						MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 300f, 1, 0, 0, 0);
						RECORDING::_0x293220DA1B46CEBC(0f, 15f, 3);
						AUDIO::PREPARE_MUSIC_EVENT("FBI5A_TREV_RADIO_FRTA");
						AUDIO::SET_INITIAL_PLAYER_STATION("RADIO_01_CLASS_ROCK");
						Local_3754.f_19 = 1;
					}
				}
			}
		}
		else
		{
			iLocal_3237 = MISC::GET_GAME_TIMER();
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2540))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2540);
			}
			PED::SET_PED_IN_VEHICLE_CONTEXT(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("MISSFBI5_TREVOR_DRIVING"));
			GlobalFunc_565(333, 1, 0);
			iLocal_82 = 24;
			iLocal_84 = 0;
		}
	}
	if (iLocal_84 == 3)
	{
		switch (iLocal_3286)
		{
			case 0:
				GlobalFunc_9134(&uLocal_3710, 2);
				Local_3754.f_12 = uLocal_3710[2];
				HUD::CLEAR_THIS_PRINT("H2PART3_help0");
				iLocal_3286++;
				break;
			}
	}
	if (iLocal_84 == 2)
	{
	}
}


int func_596(var uParam0, var uParam1)//Position - 0x62744
{
	switch (iLocal_3976)
	{
		case 0:
			break;
		
		case 1:
			STREAMING::REQUEST_MODEL(joaat("fib_5_mcs_10_lightrig"));
			STREAMING::REQUEST_MODEL(Local_2540.f_1);
			STREAMING::REQUEST_MODEL(Local_1589.f_1);
			STREAMING::REQUEST_CLIP_SET("clipset@missfbi5_trevor_driving");
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_2540.f_13, "lkfbi5a");
			break;
		
		case 2:
			iLocal_7700 = PLAYER::PLAYER_PED_ID();
			func_644(uParam0, &iLocal_7700);
			CAM::DESTROY_ALL_CAMS(0);
			GlobalFunc_7718(uParam0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			iLocal_7702 = 0;
			iLocal_7741 = 0;
			iLocal_7742 = 0;
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_7701))
			{
			}
			GRAPHICS::_ANIMPOSTFX_STOP_AND_DO_UNK("SwitchOpenMichaelIn");
			GRAPHICS::ANIMPOSTFX_PLAY("SwitchOpenNeutralFIB5", 0, 0);
			GRAPHICS::ANIMPOSTFX_PLAY("SwitchOpenMichaelMid", 0, 0);
			CAM::SET_CAM_ACTIVE(uParam0->f_1, 1);
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			HUD::DISPLAY_RADAR(0);
			HUD::DISPLAY_HUD(0);
			SYSTEM::SETTIMERB(0);
			iLocal_3288 = -1;
			iLocal_7740 = 0;
			iLocal_3976 = 3;
		
		case 3:
			if (CAM::IS_CAM_ACTIVE(uParam0->f_1))
			{
				HUD::DISPLAY_RADAR(0);
				HUD::DISPLAY_HUD(0);
				func_615(uParam0);
				if (!iLocal_7742)
				{
					iLocal_7742 = 1;
				}
				if (!iLocal_7740)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_2540))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2540))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2540);
						}
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2540))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2540, Local_2540.f_13, "lkfbi5a", 1);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_2540, 6500f);
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2540, 1);
							VEHICLE::SET_PLAYBACK_SPEED(Local_2540, 0f);
							iLocal_7740 = 1;
						}
					}
				}
				if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= 1f && !CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					iLocal_3976 = 5;
				}
				else
				{
					return 0;
				}
			}
			break;
		
		case 5:
			if (GlobalFunc_10239(&Local_3754, 0, 387, 1148829696, 1148829696, 0, 0, 0, 0, 0))
			{
				GRAPHICS::_ANIMPOSTFX_STOP_AND_DO_UNK("SwitchOpenMichaelIn");
				if (STREAMING::GET_PLAYER_SWITCH_STATE() < 3)
				{
					GRAPHICS::_ANIMPOSTFX_STOP_AND_DO_UNK("SwitchOpenNeutral");
				}
				if (!iLocal_3138)
				{
					if (STREAMING::GET_PLAYER_SWITCH_STATE() >= 8 || !CUTSCENE::IS_CUTSCENE_ACTIVE())
					{
						func_606();
						iLocal_3138 = 1;
					}
				}
				if (STREAMING::GET_PLAYER_SWITCH_STATE() >= 9)
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2540))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2540);
					}
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2540))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_2540))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2540, Local_2540.f_13, "lkfbi5a", 1);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_2540, 6500f);
							VEHICLE::SET_PLAYBACK_SPEED(Local_2540, 1f);
							SYSTEM::WAIT(0);
							Local_3754.f_17 = 1;
							GlobalFunc_10239(&Local_3754, 0, 259, 1148829696, 1148829696, 0, 0, 0, 0, 0);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
							iLocal_3976 = 6;
						}
					}
				}
				else
				{
					STREAMING::ALLOW_PLAYER_SWITCH_ASCENT();
					MISC::CLEAR_AREA_OF_VEHICLES(217.5f, 3269.8f, 42.9f, 230f, 0, 0, 0, 0, 0);
					if (!iLocal_7741)
					{
						if (STREAMING::GET_PLAYER_SWITCH_STATE() == 8)
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2540))
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2540);
							}
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2540))
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2540, Local_2540.f_13, "lkfbi5a", 1);
								VEHICLE::SET_PLAYBACK_SPEED(Local_2540, 0.42f);
								iLocal_7741 = 1;
							}
						}
					}
					return 0;
				}
			}
			else
			{
				return 0;
			}
		
		case 6:
			func_605(uParam1, &Local_2540);
			GlobalFunc_7718(uParam1);
			GlobalFunc_748(0);
			CAM::SET_CAM_ACTIVE(uParam1->f_1, 1);
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			iLocal_7738 = 0;
			MISC::CLEAR_AREA_OF_VEHICLES(217.5f, 3269.8f, 42.9f, 230f, 0, 0, 0, 0, 0);
			iLocal_3237 = MISC::GET_GAME_TIMER();
			iLocal_3288 = 0;
			SYSTEM::SETTIMERB(0);
			OBJECT::DELETE_OBJECT(&iLocal_7701);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("fib_5_mcs_10_lightrig"));
			iLocal_3976 = 7;
		
		case 7:
			func_615(uParam1);
			MISC::CLEAR_AREA_OF_VEHICLES(217.5f, 3269.8f, 42.9f, 230f, 0, 0, 0, 0, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_7735);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_7736, 1065353216);
			if (!iLocal_7738)
			{
				if (CAM::GET_CAM_SPLINE_NODE_PHASE(uParam1->f_1) > fLocal_7739)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FBI5A_TREV_RADIO_FRTA");
					iLocal_7738 = 1;
				}
			}
			if (CAM::IS_CAM_ACTIVE(uParam1->f_1))
			{
				if (CAM::GET_CAM_SPLINE_PHASE(uParam1->f_1) >= 1f)
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
					{
						GlobalFunc_669(&uLocal_3957, Local_2540, 2, 0.75f, 1000, 1000, 700, 700, 1045220557);
						GlobalFunc_668(&uLocal_3957, 0f, 0f, -18f);
						func_599(&uLocal_3957, 1, 1, 1, 0, 0, 0);
					}
					MISC::SET_TIME_SCALE(1f);
					iLocal_3976 = 9;
				}
			}
			break;
		
		case 9:
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
			{
				if (func_599(&uLocal_3957, 1, 1, 1, 0, 0, 0))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_7735);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_7736, 1065353216);
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					CAM::SET_CAM_ACTIVE(uParam1->f_1, 0);
					if (GlobalFunc_3000(&uLocal_5218))
					{
						GlobalFunc_2999(&uLocal_5218);
					}
					if (GlobalFunc_3000(&uLocal_6459))
					{
						GlobalFunc_2999(&uLocal_6459);
					}
					if (!iLocal_7702)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
						HUD::DISPLAY_RADAR(1);
						HUD::DISPLAY_HUD(1);
						iLocal_7702 = 1;
					}
					SYSTEM::SETTIMERA(0);
					iLocal_3976 = 0;
					return 1;
				}
			}
			else
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_7735);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_7736, 1065353216);
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				CAM::SET_CAM_ACTIVE(uParam1->f_1, 0);
				if (GlobalFunc_3000(&uLocal_5218))
				{
					GlobalFunc_2999(&uLocal_5218);
				}
				if (GlobalFunc_3000(&uLocal_6459))
				{
					GlobalFunc_2999(&uLocal_6459);
				}
				if (!iLocal_7702)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					HUD::DISPLAY_RADAR(1);
					HUD::DISPLAY_HUD(1);
					iLocal_7702 = 1;
				}
				SYSTEM::SETTIMERA(0);
				iLocal_3976 = 0;
				return 1;
			}
			break;
	}
	return 0;
}



int func_599(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x62D1C
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18;
	float fVar21;
	
	switch (*uParam0)
	{
		case 0:
			GlobalFunc_5077();
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5))
			{
				GlobalFunc_667(uParam0);
				Var0 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
				if (bParam1)
				{
					Var0 = { Var0 + ENTITY::GET_ENTITY_VELOCITY(uParam0->f_5) * FtoV(MISC::GET_FRAME_TIME()) };
				}
				Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_5, Var0) };
				Var6 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
				Var9 = { Var6 + uParam0->f_9 };
				Var12 = { Var9 - ENTITY::GET_ENTITY_ROTATION(uParam0->f_5, 2) };
				Var15 = { (-SYSTEM::SIN(Var9.f_2) * SYSTEM::COS(Var9.x)), (SYSTEM::COS(Var9.f_2) * SYSTEM::COS(Var9.x)), SYSTEM::SIN(Var9.x) };
				Var18 = { (-SYSTEM::SIN(Var12.f_2) * SYSTEM::COS(Var12.x)), (SYSTEM::COS(Var12.f_2) * SYSTEM::COS(Var12.x)), SYSTEM::SIN(Var12.x) };
				fVar21 = CAM::GET_FINAL_RENDERED_CAM_FOV();
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					uParam0->f_3 = CAM::CREATE_CAMERA(1775630800, 0);
				}
				uParam0->f_1 = CAM::CREATE_CAMERA(26379945, 1);
				if (bParam1)
				{
					CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_1, uParam0->f_5, Var3, 1);
				}
				else
				{
					CAM::SET_CAM_COORD(uParam0->f_1, Var0);
				}
				CAM::SET_CAM_ROT(uParam0->f_1, Var6, 2);
				CAM::SET_CAM_FOV(uParam0->f_1, fVar21);
				uParam0->f_2 = CAM::CREATE_CAMERA(26379945, 1);
				if (bParam1 && !bParam4)
				{
					CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_2, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12), 1);
				}
				else
				{
					CAM::SET_CAM_COORD(uParam0->f_2, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12));
				}
				CAM::SET_CAM_ROT(uParam0->f_2, Var6, 2);
				CAM::SET_CAM_FOV(uParam0->f_2, fVar21);
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = CAM::CREATE_CAMERA(26379945, 1);
					if (bParam1 && !bParam4)
					{
						CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_4, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13), 1);
					}
					else
					{
						CAM::SET_CAM_COORD(uParam0->f_4, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13));
					}
					CAM::SET_CAM_ROT(uParam0->f_4, Var6, 2);
					CAM::SET_CAM_FOV(uParam0->f_4, fVar21);
				}
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_3, uParam0->f_1, 0, 2);
					if (iParam6 == 0)
					{
						CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
					}
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_3, uParam0->f_2, (uParam0->f_14 - uParam0->f_17), 2);
					CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_3, iParam6);
					CAM::SET_CAM_ACTIVE(uParam0->f_3, 1);
				}
				else
				{
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				uParam0->f_7 = MISC::GET_GAME_TIMER();
				uParam0->f_8 = 0;
				*uParam0 = 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1:
			GlobalFunc_5077();
			if (bParam3)
			{
				if (!uParam0->f_8)
				{
					if (MISC::GET_GAME_TIMER() >= (uParam0->f_7 + uParam0->f_16))
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									GRAPHICS::ANIMPOSTFX_PLAY("CamPushInFranklin", 0, 0);
									break;
								
								case 0:
									GRAPHICS::ANIMPOSTFX_PLAY("CamPushInMichael", 0, 0);
									break;
								
								case 2:
									GRAPHICS::ANIMPOSTFX_PLAY("CamPushInTrevor", 0, 0);
									break;
							}
						}
						else
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
						}
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						uParam0->f_8 = 1;
					}
				}
			}
			if (MISC::GET_GAME_TIMER() >= (uParam0->f_7 + uParam0->f_15))
			{
				if (bParam2)
				{
					GlobalFunc_667(uParam0);
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				}
				return 1;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}






void func_605(var uParam0, int iParam1)//Position - 0x63184
{
	if (!*uParam0)
	{
		uParam0->f_10[0 /*57*/].f_2 = 0;
		uParam0->f_10[0 /*57*/].f_3 = -1;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { -1.0331f, 1.8431f, 0.6208f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 0f;
		uParam0->f_10[0 /*57*/].f_16 = 0f;
		uParam0->f_10[0 /*57*/].f_17 = 0;
		uParam0->f_10[0 /*57*/].f_9 = { 0.6586f, -0.6345f, 0.6419f };
		uParam0->f_10[0 /*57*/].f_18 = 1;
		uParam0->f_10[0 /*57*/].f_19 = 1;
		uParam0->f_10[0 /*57*/].f_20 = 1;
		uParam0->f_10[0 /*57*/].f_21 = 50f;
		uParam0->f_10[0 /*57*/].f_50 = 0;
		uParam0->f_10[0 /*57*/].f_51 = 0f;
		uParam0->f_10[0 /*57*/].f_52 = 0f;
		uParam0->f_10[0 /*57*/].f_22 = 0f;
		uParam0->f_10[0 /*57*/].f_53 = 0;
		uParam0->f_10[0 /*57*/].f_23 = 0f;
		uParam0->f_10[0 /*57*/].f_28 = 0;
		uParam0->f_10[0 /*57*/].f_29 = 0f;
		uParam0->f_10[0 /*57*/].f_32 = 0f;
		uParam0->f_10[0 /*57*/].f_30 = 0;
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
		uParam0->f_10[0 /*57*/].f_45 = 0;
		uParam0->f_10[0 /*57*/].f_46 = 0;
		uParam0->f_10[0 /*57*/].f_47 = 0f;
		uParam0->f_10[0 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[0 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[1 /*57*/].f_2 = 0;
		uParam0->f_10[1 /*57*/].f_3 = -1;
		uParam0->f_10[1 /*57*/].f_4 = 0;
		uParam0->f_10[1 /*57*/].f_5 = 3500;
		uParam0->f_10[1 /*57*/].f_6 = { -0.7088f, 1.7689f, 0.6181f };
		uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_12 = 0f;
		uParam0->f_10[1 /*57*/].f_16 = 0f;
		uParam0->f_10[1 /*57*/].f_17 = 0;
		uParam0->f_10[1 /*57*/].f_9 = { 0.6635f, -0.8934f, 0.7898f };
		uParam0->f_10[1 /*57*/].f_18 = 1;
		uParam0->f_10[1 /*57*/].f_19 = 1;
		uParam0->f_10[1 /*57*/].f_20 = 1;
		uParam0->f_10[1 /*57*/].f_21 = 50f;
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 0f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0.2f;
		uParam0->f_10[1 /*57*/].f_53 = 0;
		uParam0->f_10[1 /*57*/].f_23 = 0f;
		uParam0->f_10[1 /*57*/].f_28 = 0;
		uParam0->f_10[1 /*57*/].f_29 = 0f;
		uParam0->f_10[1 /*57*/].f_32 = -0.652f;
		uParam0->f_10[1 /*57*/].f_30 = 0;
		uParam0->f_10[1 /*57*/].f_31 = 0;
		uParam0->f_10[1 /*57*/].f_33 = 1f;
		uParam0->f_10[1 /*57*/].f_34 = 0;
		uParam0->f_10[1 /*57*/].f_35 = 0f;
		uParam0->f_10[1 /*57*/].f_36 = 0;
		uParam0->f_10[1 /*57*/].f_37 = 0;
		uParam0->f_10[1 /*57*/].f_39 = 0f;
		uParam0->f_10[1 /*57*/].f_40 = 0f;
		uParam0->f_10[1 /*57*/].f_41 = 0;
		uParam0->f_10[1 /*57*/].f_42 = 0;
		uParam0->f_10[1 /*57*/].f_43 = 0;
		uParam0->f_10[1 /*57*/].f_38 = 0f;
		uParam0->f_10[1 /*57*/].f_45 = 0;
		uParam0->f_10[1 /*57*/].f_46 = 0;
		uParam0->f_10[1 /*57*/].f_47 = 0f;
		uParam0->f_10[1 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[1 /*57*/].f_47.f_2 = 0f;
		uParam0->f_1217 = 2;
		uParam0->f_1218 = 0;
		uParam0->f_2 = 1;
		uParam0->f_3 = 0;
		uParam0->f_1219 = 0;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_FIB5_MikeToTrevAndPat_outro.txt";
		uParam0->f_1225 = "CameraInfo_FIB5_MikeToTrevAndPat_outro.xml";
		*uParam0 = 1;
	}
	uParam0->f_4[0] = *iParam1;
}

void func_606()//Position - 0x63571
{
	int iVar0;
	
	STREAMING::REMOVE_ANIM_DICT("missfbi5ig_34");
	PED::DELETE_PED(&Local_85);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_85.f_1);
	PED::DELETE_PED(&(uLocal_3710[1]));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4917(1));
	iVar0 = 0;
	while (iVar0 <= (iLocal_3666 - 1))
	{
		PHYSICS::DELETE_ROPE(&(iLocal_3666[iVar0]));
		iVar0++;
	}
	OBJECT::DELETE_OBJECT(&Local_2344);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2344.f_2);
	OBJECT::DELETE_OBJECT(&Local_2368);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2368.f_2);
	OBJECT::DELETE_OBJECT(&Local_2006);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2006.f_2);
	VEHICLE::DELETE_VEHICLE(&Local_2585);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2585.f_1);
	VEHICLE::DELETE_VEHICLE(&Local_2510);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2510.f_1);
	VEHICLE::DELETE_VEHICLE(&Local_2525);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2525.f_1);
}









int func_615(var uParam0)//Position - 0x63DA3
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
				fLocal_47 = GlobalFunc_551(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1));
				break;
			
			case 1:
				fLocal_47 = GlobalFunc_5161(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, GlobalFunc_253((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
			
			case 2:
				fLocal_47 = GlobalFunc_5160(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, GlobalFunc_253((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
			
			case 3:
				fLocal_47 = GlobalFunc_5159(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, GlobalFunc_253((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
		}
		MISC::SET_TIME_SCALE(fLocal_47);
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





























void func_644(var uParam0, int iParam1)//Position - 0x658D9
{
	if (!*uParam0)
	{
		uParam0->f_10[0 /*57*/].f_2 = 3;
		uParam0->f_10[0 /*57*/].f_3 = -1;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { 1734.593f, 3299.893f, 89.06471f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 0f;
		uParam0->f_10[0 /*57*/].f_16 = 0f;
		uParam0->f_10[0 /*57*/].f_17 = 0;
		uParam0->f_10[0 /*57*/].f_9 = { -89.5011f, 0f, 172.6499f };
		uParam0->f_10[0 /*57*/].f_18 = 0;
		uParam0->f_10[0 /*57*/].f_19 = 0;
		uParam0->f_10[0 /*57*/].f_20 = 0;
		uParam0->f_10[0 /*57*/].f_21 = 40.5f;
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
		uParam0->f_10[0 /*57*/].f_30 = 0;
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
		uParam0->f_10[0 /*57*/].f_45 = 0;
		uParam0->f_10[0 /*57*/].f_46 = 0;
		uParam0->f_10[0 /*57*/].f_47 = 0f;
		uParam0->f_10[0 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[0 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[1 /*57*/].f_2 = 3;
		uParam0->f_10[1 /*57*/].f_3 = -1;
		uParam0->f_10[1 /*57*/].f_4 = 0;
		uParam0->f_10[1 /*57*/].f_5 = 50;
		uParam0->f_10[1 /*57*/].f_6 = { 1734.593f, 3299.893f, 89.06471f };
		uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_12 = 0f;
		uParam0->f_10[1 /*57*/].f_16 = 0f;
		uParam0->f_10[1 /*57*/].f_17 = 0;
		uParam0->f_10[1 /*57*/].f_9 = { -89.5011f, 0f, 172.6499f };
		uParam0->f_10[1 /*57*/].f_18 = 0;
		uParam0->f_10[1 /*57*/].f_19 = 0;
		uParam0->f_10[1 /*57*/].f_20 = 0;
		uParam0->f_10[1 /*57*/].f_21 = 40.5f;
		uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_27 = 0;
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 2f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0.1f;
		uParam0->f_10[1 /*57*/].f_53 = 0;
		uParam0->f_10[1 /*57*/].f_23 = 0f;
		uParam0->f_10[1 /*57*/].f_28 = 0;
		uParam0->f_10[1 /*57*/].f_29 = 0f;
		uParam0->f_10[1 /*57*/].f_32 = -0.152f;
		uParam0->f_10[1 /*57*/].f_30 = 0;
		uParam0->f_10[1 /*57*/].f_31 = 0;
		uParam0->f_10[1 /*57*/].f_33 = 1f;
		uParam0->f_10[1 /*57*/].f_34 = 0;
		uParam0->f_10[1 /*57*/].f_35 = 0f;
		uParam0->f_10[1 /*57*/].f_36 = 0;
		uParam0->f_10[1 /*57*/].f_37 = 0;
		uParam0->f_10[1 /*57*/].f_39 = 0f;
		uParam0->f_10[1 /*57*/].f_40 = 0f;
		uParam0->f_10[1 /*57*/].f_41 = 0;
		uParam0->f_10[1 /*57*/].f_42 = 0;
		uParam0->f_10[1 /*57*/].f_43 = 0;
		uParam0->f_10[1 /*57*/].f_38 = 0f;
		uParam0->f_10[1 /*57*/].f_45 = 0;
		uParam0->f_10[1 /*57*/].f_46 = 0;
		uParam0->f_10[1 /*57*/].f_47 = 0f;
		uParam0->f_10[1 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[1 /*57*/].f_47.f_2 = 0f;
		uParam0->f_1217 = 2;
		uParam0->f_1218 = 0;
		uParam0->f_1233 = 0f;
		uParam0->f_1234 = 0.9f;
		uParam0->f_1235 = 1;
		uParam0->f_1236 = 0;
		uParam0->f_1237 = 0;
		uParam0->f_2 = 1;
		uParam0->f_3 = 0;
		uParam0->f_1219 = 0;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_FIB5_MikeToTrevAndPat_intro.txt";
		uParam0->f_1225 = "CameraInfo_FIB5_MikeToTrevAndPat_intro.xml";
		*uParam0 = 1;
	}
	uParam0->f_7[0] = *iParam1;
}

void func_645(int iParam0, bool bParam1)//Position - 0x65D0F
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_7743, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_7743);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_7744);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_7743, iLocal_7744);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_7744, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_7744, iLocal_7743);
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam0, iLocal_7743);
			PED::SET_PED_TARGET_LOSS_RESPONSE(*iParam0, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 35, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 36, 1);
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

void func_646(int iParam0)//Position - 0x65DB4
{
	ENTITY::SET_ENTITY_HEALTH(*iParam0, iParam0->f_13);
	PED::SET_PED_DIES_WHEN_INJURED(*iParam0, 0);
	PED::SET_PED_CAN_BE_TARGETTED(*iParam0, 0);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(*iParam0, 0);
	PED::SET_PED_CAN_EVASIVE_DIVE(*iParam0, 0);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*iParam0, 0, 0);
	PED::SET_PED_KEEP_TASK(*iParam0, 1);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 132, 1);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 32, 0);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 118, 0);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 151, 1);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 208, 1);
	PED::SET_PED_CAN_RAGDOLL(*iParam0, 0);
	PED::_0xE861D0B05C7662B8(*iParam0, 0, 0);
	PED::SET_PED_NAME_DEBUG(*iParam0, &(iParam0->f_21));
	WEAPON::GIVE_WEAPON_TO_PED(*iParam0, iParam0->f_20, -1, 0, 1);
	PED::SET_PED_SEEING_RANGE(*iParam0, 250f);
	PED::SET_PED_HEARING_RANGE(*iParam0, 250f);
	PED::SET_PED_ID_RANGE(*iParam0, 250f);
}

int func_647(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x65E78
{
	int iVar0;
	
	if (!GlobalFunc_42(iParam1))
	{
		iVar0 = GlobalFunc_4946(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				PED::DELETE_PED(uParam0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0))
			{
				*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, iParam3, 0, 0);
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam0);
				GlobalFunc_189(*iParam0, iParam1);
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




























void func_675()//Position - 0x6A073
{
	if (iLocal_84 == 0)
	{
		iLocal_84 = 1;
	}
	if (iLocal_84 == 1)
	{
		switch (iLocal_3334)
		{
			case 0:
				GlobalFunc_5652(&Local_3049, 1, 0);
				AUDIO::TRIGGER_MUSIC_EVENT("FBI5A_STOP_TRACK");
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_5_FLY_TO_AIRSTRIP"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_5_FLY_TO_AIRSTRIP");
				}
				ENTITY::DETACH_ENTITY(Local_2006, 1, 1);
				ENTITY::DETACH_ENTITY(Local_2344, 1, 1);
				ENTITY::DETACH_ENTITY(Local_2368, 1, 1);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_85, "Dave_FBI", 0, Local_85.f_1, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_3710[0], "Michael", 0, GlobalFunc_4917(0), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_3710[1], "franklin", 1, GlobalFunc_4917(1), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_2585.x, "FBI_5_heli", 0, Local_2585.f_1, 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2510, 0))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_2510, "FBI_5_Lorry", 0, Local_2510.f_1, 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2525, 0))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_2525, "FBI_5_trailer", 0, Local_2525.f_1, 0);
				}
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_2006, "fbi_5_container", 0, Local_2006.f_2, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_2344, "left_container_door", 0, Local_2344.f_2, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_2368, "right_container_door", 0, Local_2368.f_2, 0);
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3207))
				{
					AUDIO::STOP_SOUND(iLocal_3207);
				}
				MISC::ENABLE_DISPATCH_SERVICE(11, 0);
				GlobalFunc_9134(&uLocal_3710, 0);
				GlobalFunc_10991(&uLocal_3710, 1, 0, 0);
				CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(uLocal_3710[2]);
				CUTSCENE::START_CUTSCENE(2048);
				RECORDING::_0x293220DA1B46CEBC(10f, 0f, 3);
				RECORDING::_0x48621C9FCA3EBD28(4);
				iLocal_3976 = 1;
				func_596(&uLocal_5218, &uLocal_6459);
				iLocal_3334++;
				break;
			
			case 1:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					MISC::CLEAR_AREA(1739.6f, 3276.8f, 41.1f, 1000f, 1, 0, 0, 0);
					iLocal_3334++;
				}
				break;
			
			case 2:
				if (CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					if (!CUTSCENE::WAS_CUTSCENE_SKIPPED())
					{
						if (CUTSCENE::GET_CUTSCENE_SECTION_PLAYING() >= 13)
						{
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_7701))
							{
								iLocal_7701 = OBJECT::CREATE_OBJECT(joaat("fib_5_mcs_10_lightrig"), 1733.742f, 3297.112f, 0f, 1, 1, 0);
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("michael", GlobalFunc_4917(0)) || CUTSCENE::GET_CUTSCENE_TIME() >= 99950)
						{
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0) || CUTSCENE::GET_CUTSCENE_TIME() >= 99950)
						{
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
							iLocal_3976 = 2;
							func_596(&uLocal_5218, &uLocal_6459);
							CAM::STOP_CUTSCENE_CAM_SHAKING();
						}
						if (CUTSCENE::GET_CUTSCENE_TIME() >= 99950)
						{
							RECORDING::_0x81CBAE94390F9F89();
							iLocal_82 = 23;
							iLocal_84 = 0;
						}
						if (!iLocal_3137)
						{
							if (CUTSCENE::GET_CUTSCENE_TIME() >= 98133)
							{
								GRAPHICS::ANIMPOSTFX_PLAY("SwitchOpenMichaelIn", 0, 0);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
								iLocal_3137 = 1;
							}
						}
					}
					else
					{
						CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 1, 0);
						iLocal_84 = 2;
					}
				}
				else
				{
					RECORDING::_0x81CBAE94390F9F89();
				}
				break;
			}
	}
	if (iLocal_84 == 3)
	{
		RECORDING::_0x13B350B8AD0EEE10();
		switch (iLocal_3334)
		{
			case 1:
			case 2:
				if (CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					CUTSCENE::STOP_CUTSCENE(0);
				}
				break;
			}
	}
	if (iLocal_84 == 2)
	{
		if (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("michael", GlobalFunc_4917(0)))
			{
			}
		}
		else
		{
			RECORDING::_0x81CBAE94390F9F89();
			func_606();
			iLocal_3138 = 1;
			iLocal_3976 = 2;
			func_596(&uLocal_5218, &uLocal_6459);
			iLocal_82 = 23;
			iLocal_84 = 0;
			func_459(1, 0, 0, 1, 800);
		}
	}
}

void func_676()//Position - 0x6A3B2
{
	RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	GlobalFunc_7695(14);
	func_712();
	if (iLocal_84 == 0)
	{
		if (CAM::IS_SCREEN_FADED_IN())
		{
			GlobalFunc_11046(6, "fly to airport", 0, 0, 0, 1);
			AUDIO::START_AUDIO_SCENE("FBI_5_FLY_TO_AIRSTRIP");
			func_710();
			iLocal_84 = 1;
		}
	}
	if (iLocal_84 == 1)
	{
		if (iLocal_3285 == 0)
		{
			VEHICLE::STABILISE_ENTITY_ATTACHED_TO_HELI(Local_2585.x, Local_2006, fLocal_3363);
			PHYSICS::ACTIVATE_PHYSICS(Local_2006);
		}
		if (!iLocal_3128)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_2525))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_2525, 1), 1) < 100f)
				{
					VEHICLE::_0xE5810AC70602F2F5(Local_2585.x, 0f);
					iLocal_3128 = 1;
				}
			}
		}
		func_708();
		func_707();
		func_706();
		func_685();
		func_684();
		if (func_677())
		{
			iLocal_82 = 22;
		}
		func_710();
	}
	if (iLocal_84 == 3)
	{
		switch (iLocal_3285)
		{
			case 0:
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2585.x))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2585.x);
				}
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2585.x, -1);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2585.x, 1790.554f, 3265.838f, 68f, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_2585.x, 17.4409f);
				ENTITY::SET_ENTITY_COORDS(Local_2006, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2585.x, Local_3364), 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_2006, (ENTITY::GET_ENTITY_HEADING(Local_2585.x) + 180f));
				break;
			}
	}
	if (iLocal_84 == 2)
	{
	}
}

int func_677()//Position - 0x6A506
{
	struct<3> Var0;
	
	switch (iLocal_3285)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(Local_2510))
			{
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2510, 0f, -2f, 1f) };
			}
			else
			{
				Var0 = { 1757.354f, 3269.75f, 41.76557f };
			}
			GlobalFunc_9194(&Local_3049, Var0, 0.01f, 0.01f, 2f, 0, Local_2585.x, "fbi5a_god_20", "GOBACK_CHOPPER", 0, 0, 0, 1, -1);
			if (HUD::DOES_BLIP_EXIST(Local_3049.f_5))
			{
				if (!func_314("fbi5a_god_25"))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0, 1) < 250f)
					{
						if (!GlobalFunc_5172(&Local_3049, 0))
						{
							GlobalFunc_164("fbi5a_god_25", 7500, 1);
							func_298("fbi5a_god_25", 1);
						}
					}
				}
				if (func_679())
				{
					RECORDING::_0x293220DA1B46CEBC(10f, 0f, 3);
					func_485(0, 1, 1, 1);
					GlobalFunc_5652(&Local_3049, 0, 0);
					func_678();
					iLocal_3285++;
				}
			}
			break;
		
		case 1:
			if (func_678())
			{
				iLocal_3285++;
			}
			break;
		
		case 2:
			GlobalFunc_9194(&Local_3049, 1730.13f, 3275.489f, 40.124f, 0.01f, 0.01f, 2f, 0, Local_2585.x, "fbi5a_god_26", "", "GOBACK_CHOPPER", 0, 0, 1, -1);
			if (HUD::DOES_BLIP_EXIST(Local_3049.f_5))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1730.13f, 3275.489f, 40.124f, 25f, 25f, 2f, 1, 1, 0))
				{
					if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_2585.x) && ENTITY::GET_ENTITY_SPEED(Local_2585.x) < 0.2f)
					{
						if (CUTSCENE::HAS_CUTSCENE_LOADED())
						{
							if (func_485(1, 1, 1, 0))
							{
								return 1;
							}
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_678()//Position - 0x6A6C3
{
	int iVar0;
	
	switch (iLocal_3333)
	{
		case 0:
			VEHICLE::DELETE_VEHICLE(&Local_2510);
			VEHICLE::DELETE_VEHICLE(&Local_2525);
			VEHICLE::STABILISE_ENTITY_ATTACHED_TO_HELI(Local_2585.x, 0, 0f);
			iVar0 = 0;
			while (iVar0 <= (iLocal_3666 - 1))
			{
				PHYSICS::DETACH_ROPE_FROM_ENTITY(iLocal_3666[iVar0], Local_2585.x);
				PHYSICS::DETACH_ROPE_FROM_ENTITY(iLocal_3666[iVar0], Local_2006);
				PHYSICS::DELETE_ROPE(&(iLocal_3666[iVar0]));
				iVar0++;
			}
			Local_2510 = VEHICLE::CREATE_VEHICLE(Local_2510.f_1, Local_2510.f_3, Local_2510.f_6, 1, 1);
			VEHICLE::SET_VEHICLE_STRONG(Local_2510, 1);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_2510, 1);
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_2510, 1, 1);
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_2510, 0);
			VEHICLE::SET_VEHICLE_COLOURS(Local_2510, 0, 0);
			ENTITY::SET_ENTITY_HEALTH(Local_2510, 1500);
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_2510, 1500f);
			VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_2510, 1500f);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2510, Local_2510.f_13, "lkfbi5a", 1);
			VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2510, 1);
			Local_2525 = VEHICLE::CREATE_VEHICLE(Local_2525.f_1, Local_2525.f_3, Local_2525.f_6, 1, 1);
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_2525, 0);
			VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_2510, Local_2525, 1065353216);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2525, Local_2525.f_13, "lkfbi5a", 1);
			VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2525, 1);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2585.x, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2525, 0f, -2.5f, 15f), 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(Local_2585.x, ENTITY::GET_ENTITY_HEADING(Local_2525));
			OBJECT::DELETE_OBJECT(&Local_2344);
			OBJECT::DELETE_OBJECT(&Local_2368);
			OBJECT::DELETE_OBJECT(&Local_2006);
			Local_2555 = VEHICLE::CREATE_VEHICLE(Local_2555.f_1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2525, 0f, -2.5f, 20f), 0f, 1, 1);
			ENTITY::SET_ENTITY_COLLISION(Local_2555, 0, 0);
			ENTITY::SET_ENTITY_VISIBLE(Local_2555, 0);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2555, Local_2555.f_13, "lkfbi5a", 1);
			VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2555, 1);
			Local_2006 = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_2006.f_2, ENTITY::GET_ENTITY_COORDS(Local_2555, 1), 1, 1, 0);
			ENTITY::SET_ENTITY_ROTATION(Local_2006, ENTITY::GET_ENTITY_ROTATION(Local_2555, 2), 2, 1);
			OBJECT::_0xEB6F1A9B5510A5D2(Local_2006, 1);
			ENTITY::SET_ENTITY_PROOFS(Local_2006, 1, 1, 1, 1, 1, 0, 0, 0);
			Local_2344 = OBJECT::CREATE_OBJECT(Local_2344.f_2, Local_2344.f_3, 1, 1, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2344, Local_2006, 0, -1.3f, -1.8f, 0f, 0f, 0f, 0f, 0, 0, 1, 0, 2, 1);
			Local_2368 = OBJECT::CREATE_OBJECT(Local_2368.f_2, Local_2368.f_3, 1, 1, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2368, Local_2006, 0, 1.3f, -1.8f, 0f, 0f, 0f, 0f, 0, 0, 1, 0, 2, 1);
			PHYSICS::ACTIVATE_PHYSICS(Local_2006);
			func_327();
			uLocal_3603 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 1759.407f, 3274.47f, 42.13839f, 39.76651f, 5E-06f, 174.9449f, 41.6585f, 0, 2);
			uLocal_3604 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 1759.407f, 3274.47f, 42.13839f, 8.238567f, 5E-06f, 174.9449f, 41.6585f, 0, 2);
			CAM::SET_CAM_ACTIVE(uLocal_3603, 1);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3604, uLocal_3603, 1200, 2, 2);
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			RECORDING::_0x48621C9FCA3EBD28(4);
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Release_Crate", Local_2006, "FBI_05_SOUNDS", 0, 0);
			iLocal_3223 = MISC::GET_GAME_TIMER();
			iLocal_3333++;
			break;
		
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(Local_2555))
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2006, ENTITY::GET_ENTITY_COORDS(Local_2555, 1), 0, 0, 1);
				ENTITY::SET_ENTITY_ROTATION(Local_2006, ENTITY::GET_ENTITY_ROTATION(Local_2555, 2), 2, 1);
			}
			func_327();
			Local_2006.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_2006, 1) };
			if (Local_2006.f_3.f_2 < 43.3f || !CAM::IS_CAM_INTERPOLATING(uLocal_3604))
			{
				CAM::SHAKE_CAM(uLocal_3603, "small_EXPLOSION_SHAKE", 0.05f);
				CAM::SHAKE_CAM(uLocal_3604, "small_EXPLOSION_SHAKE", 0.05f);
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Crate_Land", Local_2006, "FBI_05_SOUNDS", 0, 0);
				iLocal_3223 = MISC::GET_GAME_TIMER();
				iLocal_3333++;
			}
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(Local_2555))
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2006, ENTITY::GET_ENTITY_COORDS(Local_2555, 1), 0, 0, 1);
				ENTITY::SET_ENTITY_ROTATION(Local_2006, ENTITY::GET_ENTITY_ROTATION(Local_2555, 2), 2, 1);
			}
			func_327();
			if (GlobalFunc_588(&iLocal_3223, 750))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2510))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2510);
				}
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2525))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2525);
				}
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2555))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2555);
				}
				VEHICLE::DELETE_VEHICLE(&Local_2555);
				Local_2006.f_3 = 0f;
				Local_2006.f_3.f_1 = -2.37f;
				Local_2006.f_3.f_2 = 1.81f;
				Local_2006.f_12 = { 0f, 0f, 0f };
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2006, Local_2525, 0, Local_2006.f_3, Local_2006.f_12, 0, 0, 0, 0, 2, 1);
				func_473(1, 1, 0, 0, 0, 3000, 1, 1, 1, 1, 1);
				RECORDING::_0x81CBAE94390F9F89();
				return 1;
			}
			break;
	}
	return 0;
}

int func_679()//Position - 0x6AB77
{
	struct<3> Var0[4];
	struct<3> Var13;
	struct<3> Var16;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_2510))
	{
		Var0[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2006, -1.3f, 1.8f, -1.4f) };
		Var0[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2006, 1.3f, -1.8f, -1.4f) };
		Var0[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2006, -1.3f, 1.8f, 1.4f) };
		Var0[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2006, 1.3f, -1.8f, 1.4f) };
		Var13 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2525, -6f, -0.5f, 0f) };
		Var16 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2525, 6f, -0.52f, 13f) };
		if ((((OBJECT::IS_POINT_IN_ANGLED_AREA(Var0[0 /*3*/], Var13, Var16, 15.3f, 0, 1) && OBJECT::IS_POINT_IN_ANGLED_AREA(Var0[1 /*3*/], Var13, Var16, 15.3f, 0, 1)) && OBJECT::IS_POINT_IN_ANGLED_AREA(Var0[2 /*3*/], Var13, Var16, 15.3f, 0, 1)) && OBJECT::IS_POINT_IN_ANGLED_AREA(Var0[3 /*3*/], Var13, Var16, 15.3f, 0, 1)) && ENTITY::GET_ENTITY_SPEED(Local_2585.x) < 15f)
		{
			if (!GlobalFunc_74("fbi5a_help_4"))
			{
				GlobalFunc_159("fbi5a_help_4", -1);
			}
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 103))
			{
				return 1;
			}
		}
		else if (GlobalFunc_74("fbi5a_help_4"))
		{
			HUD::CLEAR_HELP(1);
		}
	}
	return 0;
}





void func_684()//Position - 0x6AD7A
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3710[1]))
	{
		switch (iLocal_3342)
		{
			case 0:
				STREAMING::REQUEST_ANIM_DICT("missfbi5ig_34");
				if (!ENTITY::IS_ENTITY_AT_COORD(uLocal_3710[1], 1740.163f, 3279.473f, 40.0934f, 1.5f, 1.5f, 2f, 0, 1, 0))
				{
					if (func_336(uLocal_3710[1], 242628503, -2, 1))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1740.163f, 3279.473f, 40.0934f, 2f, -1, 0.25f, 0, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
						TASK::TASK_PERFORM_SEQUENCE(uLocal_3710[1], uLocal_3685);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					}
				}
				if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_34"))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(1757.354f, 3269.75f, 41.76557f, ENTITY::GET_ENTITY_COORDS(Local_2585.x, 1), 1) < 40f)
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
						TASK::TASK_PLAY_ANIM(0, "missfbi5ig_34", "direct_heli_a_dave", 4f, -8f, -1, 0, 0, 0, 0, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1741.138f, 3289.123f, 40.1094f, 2f, -1, 0.25f, 0, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
						TASK::TASK_PERFORM_SEQUENCE(uLocal_3710[1], uLocal_3685);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
						iLocal_3342++;
					}
				}
				break;
			
			case 1:
				if (!ENTITY::IS_ENTITY_AT_COORD(uLocal_3710[1], 1741.138f, 3289.123f, 40.1094f, 1.5f, 1.5f, 2f, 0, 1, 0))
				{
					if (func_336(uLocal_3710[1], 242628503, 1, 1))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1741.138f, 3289.123f, 40.1094f, 2f, -1, 0.25f, 0, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
						TASK::TASK_PERFORM_SEQUENCE(uLocal_3710[1], uLocal_3685);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					}
				}
				else if (!PED::IS_PED_FACING_PED(uLocal_3710[1], PLAYER::PLAYER_PED_ID(), 40f))
				{
					if (func_336(uLocal_3710[1], 242628503, -2, 1))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
						TASK::TASK_PERFORM_SEQUENCE(uLocal_3710[1], uLocal_3685);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					}
				}
				else if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2585.x))
				{
					if (GlobalFunc_588(&iLocal_3223, 7000))
					{
						if (!PED::IS_PED_RAGDOLL(uLocal_3710[1]))
						{
							if (func_336(uLocal_3710[1], -2017877118, -2, 0))
							{
								TASK::TASK_PLAY_ANIM(uLocal_3710[1], "missfbi5ig_34", "direct_heli_a_dave", 4f, -8f, -1, 0, 0, 0, 0, 0);
								iLocal_3223 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
				break;
			
			case 2:
				break;
			}
	}
}

void func_685()//Position - 0x6B01D
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_2510))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 3638.326f, 3771.813f, 35.93f, 1) > 220f)
		{
			STREAMING::REQUEST_MODEL(Local_2510.f_1);
			STREAMING::REQUEST_MODEL(Local_2525.f_1);
			STREAMING::REQUEST_MODEL(GlobalFunc_4917(1));
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_2510.f_13, "lkfbi5a");
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_2525.f_13, "lkfbi5a");
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_2555.f_13, "lkfbi5a");
			if (((((STREAMING::HAS_MODEL_LOADED(Local_2510.f_1) && STREAMING::HAS_MODEL_LOADED(Local_2525.f_1)) && STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(1))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_2510.f_13, "lkfbi5a")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_2525.f_13, "lkfbi5a")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_2555.f_13, "lkfbi5a"))
			{
				MISC::CLEAR_AREA(Local_2510.f_3, 70f, 1, 0, 0, 0);
				func_687(&(uLocal_3710[1]), 1, 1741.138f, 3289.123f, 40.1094f, 217.4986f, 1, 0, 0);
				func_686(uLocal_3710[1], 0);
				PED::SET_PED_CAN_RAGDOLL(uLocal_3710[1], 1);
				func_645(&(uLocal_3710[1]), 1);
				GlobalFunc_173(&uLocal_3788, 1, uLocal_3710[1], "franklin", 0, 1);
				TASK::TASK_LOOK_AT_ENTITY(uLocal_3710[1], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				Local_2510 = VEHICLE::CREATE_VEHICLE(Local_2510.f_1, Local_2510.f_3, Local_2510.f_6, 1, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_2510);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2510, 3);
				Local_2525 = VEHICLE::CREATE_VEHICLE(Local_2525.f_1, Local_2510.f_3, Local_2510.f_6, 1, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_2510);
				VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_2510, Local_2525, 1065353216);
			}
		}
	}
}

void func_686(int iParam0, bool bParam1)//Position - 0x6B1D7
{
	PED::SET_PED_DIES_WHEN_INJURED(iParam0, 0);
	PED::SET_PED_CAN_BE_TARGETTED(iParam0, 0);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(iParam0, 0);
	PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, 0);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iParam0, 0, 0);
	PED::SET_PED_CAN_RAGDOLL(iParam0, 0);
	PED::SET_PED_SEEING_RANGE(iParam0, 250f);
	PED::SET_PED_HEARING_RANGE(iParam0, 250f);
	PED::SET_PED_ID_RANGE(iParam0, 250f);
	PED::SET_PED_CONFIG_FLAG(iParam0, 132, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 32, 0);
	PED::SET_PED_CONFIG_FLAG(iParam0, 118, 0);
	PED::SET_PED_CONFIG_FLAG(iParam0, 208, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 188, 1);
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 174, 1);
		PED::SET_PED_CONFIG_FLAG(iParam0, 169, 1);
	}
}

int func_687(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x6B26F
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
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam5, 0, 0);
			GlobalFunc_8386(*iParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*iParam0, 0, 0);
			GlobalFunc_11325(*iParam0);
			GlobalFunc_7694(*iParam0, 1, 0);
			GlobalFunc_7693(*iParam0);
			GlobalFunc_7714(*iParam0);
			GlobalFunc_11336(*iParam0, bParam8);
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



















void func_706()//Position - 0x6C894
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_2464[0 /*15*/]))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 3638.326f, 3771.813f, 35.93f, 1) > 200f)
		{
			iVar0 = 0;
			while (iVar0 <= (Local_1614 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1614[iVar0 /*25*/]))
				{
					PED::DELETE_PED(&(Local_1614[iVar0 /*25*/]));
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1614[iVar0 /*25*/].f_1);
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= (Local_2464 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2464[iVar0 /*15*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_2464[iVar0 /*15*/]));
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2464[iVar0 /*15*/].f_1);
				iVar0++;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_2392))
			{
				OBJECT::DELETE_OBJECT(&Local_2392);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2392.f_2);
			if (ENTITY::DOES_ENTITY_EXIST(Local_110))
			{
				PED::DELETE_PED(&Local_110);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_110.f_1);
			iVar0 = 0;
			while (iVar0 <= (Local_2054 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2054[iVar0 /*24*/]))
				{
					OBJECT::DELETE_OBJECT(&(Local_2054[iVar0 /*24*/]));
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2054[iVar0 /*24*/].f_2);
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= (iLocal_3613 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3613[iVar0]))
				{
					OBJECT::DELETE_OBJECT(&(iLocal_3613[iVar0]));
				}
				iVar0++;
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_boxpile_02b"));
			STREAMING::REMOVE_ANIM_DICT("MISSFBI5IG_0");
			VEHICLE::REMOVE_VEHICLE_RECORDING(1, "lkfbi5a");
			VEHICLE::REMOVE_VEHICLE_RECORDING(2, "lkfbi5a");
			VEHICLE::REMOVE_VEHICLE_RECORDING(3, "lkfbi5a");
			STREAMING::REMOVE_PTFX_ASSET();
			AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
		}
	}
}

void func_707()//Position - 0x6CA1B
{
	GlobalFunc_650(1739.6f, 3276.8f, 41.1f, 125f, 200f, "fbi_5a_mcs_10");
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("franklin", uLocal_3710[1], 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("trevor", PLAYER::PLAYER_PED_ID(), 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("michael", uLocal_3710[0], 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Dave_FBI", Local_85, 0);
}

void func_708()//Position - 0x6CA7F
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2585.x))
	{
		iVar4 = 28;
		GlobalFunc_612(&iVar0, &iVar1, &uVar2, &iVar3, 0);
		if (!PAD::IS_LOOK_INVERTED())
		{
			iVar3 = (iVar3 * -1);
		}
		if (((((((iVar0 > iVar4 || iVar0 < (iVar4 * -1)) || iVar1 > iVar4) || iVar1 < (iVar4 * -1)) || PAD::IS_CONTROL_PRESSED(0, 71)) || PAD::IS_CONTROL_PRESSED(0, 72)) || PAD::IS_CONTROL_PRESSED(0, 89)) || PAD::IS_CONTROL_PRESSED(0, 90))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2585.x);
		}
	}
}


void func_710()//Position - 0x6CBED
{
	switch (iLocal_3320)
	{
		case 0:
			if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_pullup", 7, 0, 0, 0))
			{
				iLocal_3320++;
			}
			break;
		
		case 1:
			if (func_530(Local_3049.f_5, Local_85, uLocal_3710[0], 1))
			{
				if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_chat", 7, 0, 0, 0))
				{
					RECORDING::_0x293220DA1B46CEBC(0f, 10f, 4);
					iLocal_3320++;
				}
			}
			break;
		
		case 2:
			if (func_530(Local_3049.f_5, Local_85, uLocal_3710[0], 1))
			{
				iLocal_3320++;
			}
			break;
		
		case 3:
			if (GlobalFunc_588(&iLocal_3237, 7000))
			{
				if (func_530(Local_3049.f_5, Local_85, uLocal_3710[0], 1))
				{
					if (func_711())
					{
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 1))
						{
							case 0:
								if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_hit", 7, 0, 0, 0))
								{
									iLocal_3237 = MISC::GET_GAME_TIMER();
								}
								break;
							
							case 1:
								if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_hit2", 7, 0, 0, 0))
								{
									iLocal_3237 = MISC::GET_GAME_TIMER();
								}
								break;
							}
						}
					}
			}
			break;
	}
}

int func_711()//Position - 0x6CD22
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_ENTITY_ROTATION(Local_2585.x, 2) };
	Local_2006.f_12 = { ENTITY::GET_ENTITY_ROTATION(Local_2006, 2) };
	if (((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_2585.x, PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_2006, PLAYER::PLAYER_PED_ID(), 1)) || MISC::ABSF(Var0.x) > 29f) || MISC::ABSF(Var0.f_1) > 29f) || MISC::ABSF(Local_2006.f_12) > 29f) || MISC::ABSF(Local_2006.f_12.f_1) > 29f)
	{
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_2585.x);
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_2006);
		return 1;
	}
	return 0;
}

void func_712()//Position - 0x6CDCB
{
	PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 101, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 103, 1);
}









int func_721()//Position - 0x6E857
{
	func_712();
	if (iLocal_84 == 0)
	{
		Local_3515 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2006, 0f, 0f, 7.3f) };
		iLocal_84 = 1;
	}
	if (iLocal_84 == 1)
	{
		switch (iLocal_3284)
		{
			case 0:
				PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
				if (func_485(0, 1, 1, 0))
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_5_FLY_TO_CONTAINER"))
					{
						AUDIO::STOP_AUDIO_SCENE("FBI_5_FLY_TO_CONTAINER");
					}
					if (!PED::IS_PED_INJURED(uLocal_3710[0]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_3710[0], "Michael", 0, GlobalFunc_4917(0), 0);
					}
					if (!PED::IS_PED_INJURED(Local_85))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_85, "Dave_FBI", 0, Local_85.f_1, 0);
					}
					if (!PED::IS_PED_INJURED(Local_110))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_110, "Steve_FBI", 0, Local_110.f_1, 0);
					}
					iLocal_3620 = GlobalFunc_6830(Local_85, joaat("weapon_carbinerifle"), 1, 0, 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3620, "daves_Weapon", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_2006, "fbi_5_container", 0, 0, 0);
					ENTITY::SET_ENTITY_PROOFS(Local_1982, 1, 1, 1, 1, 1, 0, 0, 0);
					ENTITY::DETACH_ENTITY(Local_1982, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1982, "Biotech_prop", 0, 0, 0);
					ENTITY::DETACH_ENTITY(Local_2030, 0, 0);
					Local_2344 = OBJECT::CREATE_OBJECT(Local_2344.f_2, Local_2344.f_3, 1, 1, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_2344, "left_container_door", 0, 0, 0);
					Local_2368 = OBJECT::CREATE_OBJECT(Local_2368.f_2, Local_2368.f_3, 1, 1, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_2368, "right_container_door", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_2585.x, "fbi_5_heli", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "dreyfuss", 2, Local_1614[0 /*25*/].f_1, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "marine_on_ramp", 2, Local_1614[1 /*25*/].f_1, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "back_marine", 2, Local_1614[2 /*25*/].f_1, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "outside_marine", 2, Local_1614[3 /*25*/].f_1, 0);
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
					{
						CUTSCENE::_0x7F96F23FA9B73327(Local_2585.f_1);
					}
					CUTSCENE::START_CUTSCENE(0);
					RECORDING::_0x48621C9FCA3EBD28(4);
					AUDIO::TRIGGER_MUSIC_EVENT("FBI5A_CONTAINER");
					iLocal_3284++;
				}
				break;
			
			case 1:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2585.x, -1);
					AUDIO::SET_VEH_RADIO_STATION(Local_2585.x, "OFF");
					MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1000f, 1, 0, 0, 0);
					iLocal_3284++;
				}
				break;
			
			case 2:
				func_726();
				if (!CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					if (CUTSCENE::IS_CUTSCENE_ACTIVE())
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_7757))
						{
							if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("steve_fbi", joaat("cs_stevehains"))))
							{
								iLocal_7757 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("steve_fbi", joaat("cs_stevehains")));
							}
						}
						else if (!PED::IS_PED_INJURED(iLocal_7757))
						{
							if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_7757, MISC::GET_HASH_KEY("leg_shotwound")))
							{
							}
							if (!iLocal_3126)
							{
								if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_7757, MISC::GET_HASH_KEY("leg_shotwound")) || CUTSCENE::GET_CUTSCENE_TIME() >= 24328)
								{
									PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_7757, 4, 0.72f, 0.664f, 0f, 1f, 1, 0f, "ShotgunSmallMonolithic");
									Local_3074 = GRAPHICS::ADD_DECAL(Local_3074.f_1, Local_3074.f_2, Local_3074.f_5, Local_3074.f_8, Local_3074.f_11, Local_3074.f_12, 0.196f, 0f, 0f, Local_3074.f_13, Local_3074.f_14, 0, 0, 0);
									iLocal_3126 = 1;
								}
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("dreyfuss", Local_1614[0 /*25*/].f_1)))
						{
							Local_1614[0 /*25*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("dreyfuss", Local_1614[0 /*25*/].f_1));
						}
						if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("marine_on_ramp", Local_1614[1 /*25*/].f_1)))
						{
							Local_1614[1 /*25*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("marine_on_ramp", Local_1614[1 /*25*/].f_1));
						}
						if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("back_marine", Local_1614[2 /*25*/].f_1)))
						{
							Local_1614[2 /*25*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("back_marine", Local_1614[2 /*25*/].f_1));
						}
						if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("outside_marine", Local_1614[3 /*25*/].f_1)))
						{
							Local_1614[3 /*25*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("outside_marine", Local_1614[3 /*25*/].f_1));
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", GlobalFunc_4917(0)))
						{
							PED::SET_PED_INTO_VEHICLE(uLocal_3710[0], Local_2585.x, 0);
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Dave_FBI", Local_85.f_1))
						{
							PED::SET_PED_INTO_VEHICLE(Local_85, Local_2585.x, 1);
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("daves_Weapon", 0))
						{
							WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_3620, Local_85);
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("fbi_5_heli", 0))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2585.x, 3633.923f, 3766.17f, 40.3f, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(Local_2585.x, 163.1875f);
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2585.x, 6, "lkfbi5a", 1);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_2585.x, 3500f);
							VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_2585.x, 1);
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2585.x, 1);
							ENTITY::FREEZE_ENTITY_POSITION(Local_2006, 0);
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2006, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2585.x, Local_3364), 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(Local_2006, (ENTITY::GET_ENTITY_HEADING(Local_2585.x) + 180f));
							func_454(&Local_2585, &Local_2006, &iLocal_3666, &uLocal_3093, &uLocal_3094, 0, 0, 1);
							VEHICLE::STABILISE_ENTITY_ATTACHED_TO_HELI(Local_2585.x, Local_2006, fLocal_3363);
							ENTITY::SET_ENTITY_PROOFS(Local_2006, 0, 0, 0, 0, 0, 0, 0, 0);
							PHYSICS::ROPE_SET_UPDATE_PINVERTS(iLocal_3666[0]);
							PHYSICS::ROPE_SET_UPDATE_PINVERTS(iLocal_3666[1]);
							PHYSICS::ROPE_SET_UPDATE_PINVERTS(iLocal_3666[2]);
							PHYSICS::ROPE_SET_UPDATE_PINVERTS(iLocal_3666[3]);
							AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_3207, "Cable_Strain", Local_2006, "FBI_05_SOUNDS", 0, 0);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2344, Local_2006, 0, -1.3f, -1.8f, 0f, 0f, 0f, 0f, 0, 0, 1, 0, 2, 1);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2368, Local_2006, 0, 1.3f, -1.8f, 0f, 0f, 0f, 0f, 0, 0, 1, 0, 2, 1);
						}
					}
					else if (func_725())
					{
						func_722(0);
						RECORDING::_0x81CBAE94390F9F89();
						iLocal_82 = 21;
						iLocal_84 = 0;
						return 1;
					}
				}
				else
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 1, 0);
					iLocal_84 = 2;
				}
				break;
			}
	}
	if (iLocal_84 == 3)
	{
		if (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			RECORDING::_0x13B350B8AD0EEE10();
			CUTSCENE::STOP_CUTSCENE(0);
		}
	}
	if (iLocal_84 == 2)
	{
		func_726();
		if (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("dreyfuss", Local_1614[0 /*25*/].f_1)))
			{
				Local_1614[0 /*25*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("dreyfuss", Local_1614[0 /*25*/].f_1));
			}
			if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("marine_on_ramp", Local_1614[1 /*25*/].f_1)))
			{
				Local_1614[1 /*25*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("marine_on_ramp", Local_1614[1 /*25*/].f_1));
			}
			if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("back_marine", Local_1614[2 /*25*/].f_1)))
			{
				Local_1614[2 /*25*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("back_marine", Local_1614[2 /*25*/].f_1));
			}
			if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("outside_marine", Local_1614[3 /*25*/].f_1)))
			{
				Local_1614[3 /*25*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("outside_marine", Local_1614[3 /*25*/].f_1));
			}
		}
		else if (func_725())
		{
			PED::SET_PED_INTO_VEHICLE(uLocal_3710[0], Local_2585.x, 0);
			PED::SET_PED_INTO_VEHICLE(Local_85, Local_2585.x, 1);
			Local_2392 = OBJECT::CREATE_OBJECT(Local_2392.f_2, Local_2392.f_3, 1, 1, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2392, Local_110, PED::GET_PED_BONE_INDEX(Local_110, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
			func_722(1);
			RECORDING::_0x81CBAE94390F9F89();
			iLocal_82 = 21;
			iLocal_84 = 0;
			return 1;
		}
	}
	if (iLocal_3284 < 1)
	{
		func_339();
		func_328();
	}
	VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_2585.x);
	return 0;
}

void func_722(bool bParam0)//Position - 0x6EF8D
{
	int iVar0;
	
	func_19(1);
	OBJECT::DELETE_OBJECT(&Local_1982);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1982.f_2);
	OBJECT::DELETE_OBJECT(&Local_2030);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2030.f_2);
	if (ENTITY::DOES_ENTITY_EXIST(Local_2175.x))
	{
		OBJECT::DELETE_OBJECT(&Local_2175);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2175.f_2);
	if (ENTITY::DOES_ENTITY_EXIST(Local_2199.x))
	{
		OBJECT::DELETE_OBJECT(&Local_2199);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2199.f_2);
	if (ENTITY::DOES_ENTITY_EXIST(Local_2440))
	{
		OBJECT::DELETE_OBJECT(&Local_2440);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2440.f_2);
	STREAMING::REMOVE_ANIM_DICT("missfbi5ig_34");
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_3684))
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_3684);
	}
	MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 200f, 1, 0, 0, 0);
	if (bParam0)
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2585.x, 3633.923f, 3766.17f, 40.3f, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(Local_2585.x, 163.1875f);
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2585.x, 6, "lkfbi5a", 1);
		VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_2585.x, 3500f);
		VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_2585.x, 1);
		VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2585.x, 1);
		ENTITY::FREEZE_ENTITY_POSITION(Local_2006, 0);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2006, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2585.x, Local_3364), 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(Local_2006, (ENTITY::GET_ENTITY_HEADING(Local_2585.x) + 180f));
		func_454(&Local_2585, &Local_2006, &iLocal_3666, &uLocal_3093, &uLocal_3094, 0, 0, 1);
		VEHICLE::STABILISE_ENTITY_ATTACHED_TO_HELI(Local_2585.x, Local_2006, fLocal_3363);
		ENTITY::SET_ENTITY_PROOFS(Local_2006, 0, 0, 0, 0, 0, 0, 0, 0);
		PHYSICS::ROPE_SET_UPDATE_PINVERTS(iLocal_3666[0]);
		PHYSICS::ROPE_SET_UPDATE_PINVERTS(iLocal_3666[1]);
		PHYSICS::ROPE_SET_UPDATE_PINVERTS(iLocal_3666[2]);
		PHYSICS::ROPE_SET_UPDATE_PINVERTS(iLocal_3666[3]);
		AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_3207, "Cable_Strain", Local_2006, "FBI_05_SOUNDS", 0, 0);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2344, Local_2006, 0, -1.3f, -1.8f, 0f, 0f, 0f, 0f, 0, 0, 1, 0, 2, 1);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2368, Local_2006, 0, 1.3f, -1.8f, 0f, 0f, 0f, 0f, 0, 0, 1, 0, 2, 1);
	}
	PED::CLEAR_ALL_PED_PROPS(Local_110);
	ENTITY::SET_ENTITY_COORDS(Local_110, 3622.69f, 3749.85f, 27.69f, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(Local_110, 75.5f);
	WEAPON::SET_CURRENT_PED_WEAPON(Local_110, joaat("weapon_unarmed"), 1);
	ENTITY::SET_ENTITY_PROOFS(Local_110, 0, 0, 0, 0, 0, 0, 0, 0);
	TASK::TASK_PLAY_ANIM(Local_110, "MISSFBI5IG_0", "LyingInPain_Loop_Steve", 1000f, -8f, -1, 139265, 0, 0, 0, 0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_110, 0, 0);
	Local_2392 = OBJECT::CREATE_OBJECT(Local_2392.f_2, Local_2392.f_3, 1, 1, 0);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2392, Local_110, PED::GET_PED_BONE_INDEX(Local_110, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
	iVar0 = 0;
	while (iVar0 <= (Local_1614 - 1))
	{
		if (!PED::IS_PED_INJURED(Local_1614[iVar0 /*25*/]))
		{
			func_724(&(Local_1614[iVar0 /*25*/]));
			func_723(Local_1614[iVar0 /*25*/]);
			HUD::REMOVE_BLIP(&(Local_1614[iVar0 /*25*/].f_2));
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1614[iVar0 /*25*/], 200f, 0);
		}
		iVar0++;
	}
	iLocal_3223 = MISC::GET_GAME_TIMER();
	iLocal_3239 = 0;
	AUDIO::TRIGGER_MUSIC_EVENT("FBI5A_TO_AIRPORT");
	if (CAM::IS_SCREEN_FADED_IN())
	{
		func_473(1, 1, 0, 0, 0, 3000, 1, 1, 1, 1, 1);
	}
	else
	{
		func_459(1, 0, 0, 1, 800);
	}
}

void func_723(int iParam0)//Position - 0x6F2A3
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_7746, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_7746);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iLocal_7746);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 1, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 29, 1);
			PED::SET_PED_TARGET_LOSS_RESPONSE(iParam0, 1);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iParam0, 1, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 0);
		}
	}
}

void func_724(var uParam0)//Position - 0x6F308
{
	PED::SET_PED_DIES_WHEN_INJURED(*uParam0, 1);
	PED::SET_PED_AS_ENEMY(*uParam0, 1);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam0, 1, 0);
	PED::SET_PED_KEEP_TASK(*uParam0, 1);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 132, 1);
	PED::SET_PED_MONEY(*uParam0, 0);
	uParam0->f_2 = GlobalFunc_6797(*uParam0, 1, 145);
	WEAPON::GIVE_WEAPON_TO_PED(*uParam0, uParam0->f_20, -1, 1, 1);
	ENTITY::SET_ENTITY_HEALTH(*uParam0, uParam0->f_13);
	PED::SET_PED_MAX_HEALTH(*uParam0, uParam0->f_13);
	if (uParam0->f_16)
	{
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*uParam0, 1);
	}
	if (uParam0->f_17)
	{
		PED::ADD_ARMOUR_TO_PED(*uParam0, 100);
	}
	PED::SET_PED_NAME_DEBUG(*uParam0, &(uParam0->f_21));
	PED::SET_PED_SEEING_RANGE(*uParam0, 250f);
	PED::SET_PED_HEARING_RANGE(*uParam0, 250f);
	PED::SET_PED_ID_RANGE(*uParam0, 250f);
	PED::SET_PED_CAN_EVASIVE_DIVE(*uParam0, 1);
	PED::SET_PED_ACCURACY(*uParam0, uParam0->f_14);
	GlobalFunc_722(*uParam0, 327);
	GlobalFunc_593(*uParam0, 0);
}

int func_725()//Position - 0x6F3E8
{
	if (STREAMING::HAS_MODEL_LOADED(Local_2392.f_2) && STREAMING::HAS_ANIM_DICT_LOADED("MISSFBI5IG_0"))
	{
		return 1;
	}
	return 0;
}

void func_726()//Position - 0x6F40F
{
	STREAMING::REQUEST_MODEL(Local_2392.f_2);
	STREAMING::REQUEST_ANIM_DICT("MISSFBI5IG_0");
}


void func_728()//Position - 0x6F537
{
	RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	func_712();
	if (iLocal_84 == 0)
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BIOTECH_HEIST_GASMASK_SCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("BIOTECH_HEIST_GASMASK_SCENE");
		}
		if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3201))
		{
			AUDIO::STOP_SOUND(iLocal_3201);
		}
		iLocal_84 = 1;
		iLocal_3210 = 0;
	}
	func_734();
	if (iLocal_84 == 1)
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2585.x))
		{
			if (iLocal_3976 == 0)
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2585.x))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2585.x);
				}
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2006, -3.5f, 0f, 2.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2006, 3.5f, 0f, 12f), 7.8f, 0, 1, 0))
			{
				if ((((CUTSCENE::HAS_CUTSCENE_LOADED() && STREAMING::HAS_MODEL_LOADED(Local_2344.f_2)) && STREAMING::HAS_MODEL_LOADED(Local_2368.f_2)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(6, "lkfbi5a")) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FBI_05_METAL_STRAIN", 0))
				{
					PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
					func_19(0);
					iLocal_82 = 20;
					iLocal_84 = 0;
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(uLocal_3605))
			{
				if (GlobalFunc_663("GOBACK_CHOPPER", 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("GOBACK_CHOPPER");
				}
				func_19(0);
				uLocal_3605 = HUD::ADD_BLIP_FOR_COORD(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2006, 0f, 0f, 2f));
				HUD::SET_BLIP_COLOUR(uLocal_3605, 2);
			}
			func_731();
		}
		else if (!HUD::DOES_BLIP_EXIST(Local_2585.f_2))
		{
			func_19(0);
			Local_2585.f_2 = GlobalFunc_6783(Local_2585.x, 0, 0);
			if (!func_314("GOBACK_CHOPPER"))
			{
				GlobalFunc_164("GOBACK_CHOPPER", 7500, 0);
				func_298("GOBACK_CHOPPER", 1);
			}
		}
		func_729();
		func_339();
		func_328();
	}
	if (iLocal_84 == 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_2585.x))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2585.x, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2006, 0f, -1.6f, 7f), 0, 0, 1);
			iLocal_84 = 1;
		}
	}
	if (iLocal_84 == 2)
	{
		func_19(0);
		iLocal_82 = 20;
		iLocal_84 = 0;
	}
}

void func_729()//Position - 0x6F70B
{
	if (!ENTITY::IS_ENTITY_AT_COORD(uLocal_3710[0], 3625.945f, 3757.519f, 27.5157f, 1.5f, 1.5f, 1.6f, 0, 1, 0))
	{
		if (func_336(uLocal_3710[0], 242628503, 1, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 3625.945f, 3757.519f, 27.5157f, Local_2585.x, 1f, 0, 0.5f, 0.5f, 1, 0, 0, -957453492, 20000);
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_2585.x, -1, 1);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_3710[0], uLocal_3685);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
		}
	}
}


void func_731()//Position - 0x6F7C3
{
	switch (iLocal_3246)
	{
		case 0:
			if (GlobalFunc_10630(&uLocal_3788, "fbi5aAU", "fbi5a_switch", "fbi5a_switch_1", 8, 0, 0))
			{
				RECORDING::_0x293220DA1B46CEBC(1f, 10f, 4);
				iLocal_3246++;
			}
			break;
		
		case 1:
			if (HUD::DOES_BLIP_EXIST(uLocal_3605))
			{
				if (!GlobalFunc_5172(&Local_3049, 0))
				{
					GlobalFunc_164("DROP_CRATE", 7500, 0);
					iLocal_3246++;
				}
			}
			break;
		
		case 2:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_2585.x, 1), ENTITY::GET_ENTITY_COORDS(Local_2006, 1), 1) < 45f)
			{
				if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_crate3", 7, 0, 0, 0))
				{
					iLocal_3246++;
				}
			}
			break;
		
		case 3:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_2585.x, 1), ENTITY::GET_ENTITY_COORDS(Local_2006, 1), 1) < 20f)
			{
				if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_crate4", 7, 0, 0, 0))
				{
					iLocal_3246++;
				}
			}
			break;
	}
}



void func_734()//Position - 0x6F940
{
	GlobalFunc_650(Local_2006.f_3, 130f, 160f, "FBI_5B_MCS_1");
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("trevor", PLAYER::PLAYER_PED_ID(), 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("michael", uLocal_3710[0], 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Dave_FBI", Local_85, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Steve_FBI", Local_110, 0);
	}
	STREAMING::REQUEST_MODEL(Local_2344.f_2);
	STREAMING::REQUEST_MODEL(Local_2368.f_2);
	VEHICLE::REQUEST_VEHICLE_RECORDING(6, "lkfbi5a");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FBI_05_METAL_STRAIN", 0);
}

void func_735()//Position - 0x6F9C6
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	
	func_712();
	if (iLocal_84 == 0)
	{
		STREAMING::REQUEST_MODEL(Local_2585.f_1);
		STREAMING::REQUEST_MODEL(iLocal_3623);
		STREAMING::REQUEST_MODEL(Local_2054[0 /*24*/].f_2);
		VEHICLE::REQUEST_VEHICLE_RECORDING(7, "lkfbi5a");
		STREAMING::REQUEST_PTFX_ASSET();
		if ((((STREAMING::HAS_MODEL_LOADED(Local_2585.f_1) && STREAMING::HAS_MODEL_LOADED(iLocal_3623)) && STREAMING::HAS_MODEL_LOADED(Local_2054[0 /*24*/].f_2)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(7, "lkfbi5a")) && STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			STREAMING::REMOVE_ANIM_DICT("missfbi5ig_31");
			STREAMING::REMOVE_ANIM_DICT("missfbi5ig_32");
			STREAMING::REMOVE_ANIM_DICT("missfbi5ig_33");
			if (!ENTITY::DOES_ENTITY_EXIST(Local_2585.x))
			{
				Var0 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(7, 100f, "lkfbi5a") };
				fVar3 = 301.8604f;
				Local_2585.x = VEHICLE::CREATE_VEHICLE(Local_2585.f_1, Var0, fVar3, 1, 1);
				GlobalFunc_743(Local_2585.x, 0);
			}
			VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_2585.x, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2585.f_1);
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_2585.x, 1, 1);
			VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_2585.x);
			AUDIO::SET_VEH_RADIO_STATION(Local_2585.x, "OFF");
			VEHICLE::REMOVE_PICK_UP_ROPE_FOR_CARGOBOB(Local_2585.x);
			if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2585.x))
			{
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2585.x, 7, "lkfbi5a", 1);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2585.x, 1);
				VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(Local_2585.x);
			}
			func_740(&(uLocal_3710[2]), 2, Local_2585.x, -1, 1, 0, 0);
			GlobalFunc_2518(&uLocal_3710, 2, 1);
			GlobalFunc_2511(&uLocal_3710, 0, 2, 4);
			GlobalFunc_173(&uLocal_3788, 2, uLocal_3710[2], "trevor", 0, 1);
			AUDIO::TRIGGER_MUSIC_EVENT("FBI5A_SWITCH_HELI_MA");
			iLocal_3210 = 0;
			iLocal_84 = 1;
		}
	}
	if (iLocal_84 == 1)
	{
		if (iLocal_3210 == 0)
		{
			GlobalFunc_2785(&uLocal_3710);
			iVar4 = 0;
			while (iVar4 <= (Local_1163 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1163[iVar4 /*25*/]))
				{
					PED::DELETE_PED(&(Local_1163[iVar4 /*25*/]));
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1163[0 /*25*/].f_1);
				iVar4++;
			}
			AUDIO::CLEAR_AMBIENT_ZONE_LIST_STATE("FBI_05_MONKEYS", 0);
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3204[0]))
			{
				AUDIO::STOP_SOUND(iLocal_3204[0]);
			}
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3204[1]))
			{
				AUDIO::STOP_SOUND(iLocal_3204[1]);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_2416))
			{
				OBJECT::DELETE_OBJECT(&Local_2416);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2416.f_2);
			STREAMING::REMOVE_ANIM_DICT("missfbi5ig_30Monkeys");
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_5_LOAD_UP_SYNC_SCENE"))
			{
				AUDIO::STOP_AUDIO_SCENE("FBI_5_LOAD_UP_SYNC_SCENE");
			}
			AUDIO::START_AUDIO_SCENE("FBI_5_FLY_TO_CONTAINER");
			HUD::CLEAR_PRINTS();
			if (HUD::DOES_BLIP_EXIST(Local_110.f_2))
			{
				HUD::REMOVE_BLIP(&(Local_110.f_2));
			}
			Local_3754.f_15 = 1;
			Local_3754.f_14 = 1;
			Local_3754.f_12 = uLocal_3710[2];
			VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Local_2585.x);
			VEHICLE::SET_PLAYBACK_SPEED(Local_2585.x, 1f);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_2585.x, 1);
			iLocal_3210++;
		}
		else if (iLocal_3210 == 1)
		{
			if (!func_737(&Local_3977, 1))
			{
				CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(Local_3754.f_12);
				if (!func_314("FBI5A_HELI_OS"))
				{
					if (AUDIO::PREPARE_MUSIC_EVENT("FBI5A_HELI_OS"))
					{
						if (CAM::GET_CAM_SPLINE_PHASE(Local_3977.f_1) > 0.93f)
						{
							AUDIO::TRIGGER_MUSIC_EVENT("FBI5A_HELI_OS");
							func_298("FBI5A_HELI_OS", 1);
						}
					}
				}
				if (Local_3754.f_18)
				{
					if (!Local_3754.f_19)
					{
						if (CAM::GET_CAM_SPLINE_NODE_INDEX(Local_3977.f_1) >= Local_3977.f_1218)
						{
							if (GlobalFunc_9134(&uLocal_3710, 2))
							{
								if (GlobalFunc_10991(&uLocal_3710, 1, 0, 0))
								{
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_3623);
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2585.x, 0))
									{
										ENTITY::FREEZE_ENTITY_POSITION(Local_2585.x, 0);
										ENTITY::FREEZE_ENTITY_POSITION(Local_2006, 0);
									}
									func_645(&(uLocal_3710[0]), 1);
								}
								func_645(&(uLocal_3710[0]), 1);
								Local_3754.f_19 = 1;
							}
						}
					}
				}
			}
			else
			{
				Local_3754.f_18 = 0;
				Local_3754.f_19 = 0;
				if (HUD::DOES_BLIP_EXIST(Local_85.f_2))
				{
					HUD::REMOVE_BLIP(&(Local_85.f_2));
				}
				if (HUD::DOES_BLIP_EXIST(Local_110.f_2))
				{
					HUD::REMOVE_BLIP(&(Local_110.f_2));
				}
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2585.x);
				PED::CLEAR_ALL_PED_PROPS(Local_85);
				ENTITY::SET_ENTITY_PROOFS(Local_85, 0, 0, 0, 0, 0, 0, 0, 0);
				PED::CLEAR_ALL_PED_PROPS(Local_110);
				ENTITY::SET_ENTITY_PROOFS(Local_110, 0, 0, 0, 0, 0, 0, 0, 0);
				func_736(uLocal_3710[0], 1, 1, 1);
				ENTITY::SET_ENTITY_PROOFS(uLocal_3710[0], 0, 0, 0, 0, 0, 0, 0, 0);
				GlobalFunc_565(333, 1, 0);
				iLocal_84 = 2;
			}
		}
		if (GlobalFunc_8315() == 2)
		{
			if (!ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(Local_2585.x))
			{
				if (fLocal_7756 < 1.2f)
				{
					fLocal_7756 = (fLocal_7756 + 0.05f);
					if (fLocal_7756 >= 1.2f)
					{
						fLocal_7756 = 1.2f;
					}
				}
			}
		}
		func_339();
		func_328();
	}
	if (iLocal_84 == 2)
	{
		Local_2054[0 /*24*/] = OBJECT::CREATE_OBJECT(Local_2054[0 /*24*/].f_2, Local_3382, 1, 1, 0);
		ENTITY::SET_ENTITY_ROTATION(Local_2054[0 /*24*/], 0f, 0f, 0f, 2, 1);
		iLocal_3567[0] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_fbi5a_flare", Local_2054[0 /*24*/], 0f, 0f, 0.11f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
		GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(iLocal_3567[0], 1f, 0.84f, 0f, 0);
		MISC::CLEAR_AREA(3617.38f, 3746.431f, 27.6917f, 100f, 1, 0, 0, 0);
		if (!PED::IS_PED_INJURED(uLocal_3710[0]))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_3710[0]);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_85);
		ENTITY::SET_ENTITY_COORDS(Local_85, 3626.235f, 3762.163f, 27.6171f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(Local_85, 33.6764f);
		iLocal_3244 = 50;
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_110);
		ENTITY::SET_ENTITY_COORDS(Local_110, 3629.755f, 3746.942f, 27.6062f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(Local_110, 7f);
		iLocal_3243 = 101;
		GlobalFunc_11046(5, "land crate with helicopter", 0, 0, 0, 1);
		iLocal_82 = 19;
		iLocal_84 = 0;
	}
	if (iLocal_84 == 3)
	{
		if (iLocal_3210 == 0)
		{
			if (HUD::DOES_BLIP_EXIST(Local_110.f_2))
			{
				HUD::REMOVE_BLIP(&(Local_110.f_2));
			}
			HUD::CLEAR_HELP(1);
			GlobalFunc_9134(&uLocal_3710, 2);
			Local_3754.f_12 = uLocal_3710[2];
			Local_3754.f_19 = 0;
			iLocal_3210 = 1;
		}
	}
}

void func_736(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x6FF5A
{
	if (bParam1)
	{
		GlobalFunc_11267(iParam0, 14, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (bParam2)
	{
		GlobalFunc_11267(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (bParam3)
	{
		GlobalFunc_11267(iParam0, 14, 2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
}

int func_737(var uParam0, bool bParam1)//Position - 0x6FFAA
{
	int iVar0;
	float fVar1;
	
	switch (iLocal_3976)
	{
		case 0:
			break;
		
		case 1:
			GlobalFunc_173(&uLocal_3788, 2, 0, "trevor", 0, 1);
			if (!STREAMING::STREAMVOL_IS_VALID(uLocal_7721))
			{
				uLocal_7721 = STREAMING::STREAMVOL_CREATE_FRUSTUM(Local_7713, Local_7716, fLocal_7712, 12, 94);
			}
			STREAMING::REQUEST_ANIM_DICT("MISSFBI5IG_33");
			STREAMING::REQUEST_ANIM_DICT("missswitch");
			break;
		
		case 2:
			STREAMING::REQUEST_MODEL(Local_2585.f_1);
			STREAMING::REQUEST_MODEL(iLocal_3623);
			STREAMING::REQUEST_MODEL(Local_2054[0 /*24*/].f_2);
			VEHICLE::REQUEST_VEHICLE_RECORDING(7, "lkfbi5a");
			STREAMING::REQUEST_ANIM_DICT("MISSFBI5IG_33");
			STREAMING::REQUEST_ANIM_DICT("missswitch");
			STREAMING::REQUEST_PTFX_ASSET();
			iLocal_7700 = PLAYER::PLAYER_PED_ID();
			HUD::DISPLAY_RADAR(0);
			HUD::DISPLAY_HUD(0);
			if ((((((STREAMING::HAS_MODEL_LOADED(Local_2585.f_1) && STREAMING::HAS_MODEL_LOADED(iLocal_3623)) && STREAMING::HAS_MODEL_LOADED(Local_2054[0 /*24*/].f_2)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(7, "lkfbi5a")) && STREAMING::HAS_ANIM_DICT_LOADED("MISSFBI5IG_33")) && STREAMING::HAS_ANIM_DICT_LOADED("missswitch")) && STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_2585.x))
				{
					Local_2585.x = VEHICLE::CREATE_VEHICLE(Local_2585.f_1, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(7, 100f, "lkfbi5a"), 301.8604f, 1, 1);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2585.x, 7, "lkfbi5a", 1);
				}
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2585.x))
				{
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_2585.x, fLocal_7711);
					VEHICLE::SET_PLAYBACK_SPEED(Local_2585.x, 0.1f);
					SYSTEM::WAIT(0);
				}
				func_739(uParam0, iLocal_7700, Local_2585.x);
				CAM::DESTROY_ALL_CAMS(0);
				GlobalFunc_7718(uParam0);
				CAM::SET_CAM_ACTIVE(uParam0->f_1, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				SYSTEM::SETTIMERB(0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				STREAMING::SET_GAME_PAUSES_FOR_STREAMING(0);
				Local_3754.f_19 = 0;
				iLocal_7702 = 0;
				Local_3754.f_18 = 1;
				iLocal_7722 = 0;
				bLocal_7734 = false;
				iLocal_7707 = 0;
				iLocal_7709 = 0;
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_7700, Local_7723, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_7700, fLocal_7726);
				TASK::TASK_PLAY_ANIM(iLocal_7700, "MISSFBI5IG_33", "mid_mission_switch_separate_player0", 1000f, -8f, -1, 10, 0, 0, 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_7700, 0, 0);
				iLocal_3976 = 3;
			}
			break;
		
		case 3:
			iVar0 = func_615(uParam0);
			fVar1 = CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1);
			STREAMING::SET_FOCUS_POS_AND_VEL(CAM::GET_FINAL_RENDERED_CAM_COORD(), 0f, 0f, 0f);
			if (!STREAMING::STREAMVOL_IS_VALID(uLocal_7721))
			{
				uLocal_7721 = STREAMING::STREAMVOL_CREATE_FRUSTUM(Local_7713, Local_7716, fLocal_7712, 12, 127);
			}
			if (CAM::IS_CAM_ACTIVE(uParam0->f_1))
			{
				if (iVar0 >= uParam0->f_1218)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_7703);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_7704, 1065353216);
				}
				if (!iLocal_7707)
				{
					if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= fLocal_7708)
					{
						GlobalFunc_173(&uLocal_3788, 0, PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
						GlobalFunc_173(&uLocal_3788, 2, uLocal_3710[2], "trevor", 0, 1);
						if (GlobalFunc_10630(&uLocal_3788, "fbi5aAU", "fbi5a_switch", "fbi5a_switch_3", 8, 0, 0))
						{
							iLocal_3246 = 1;
							iLocal_7707 = 1;
						}
					}
				}
				if (!iLocal_7709)
				{
					if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= fLocal_7710)
					{
						GlobalFunc_173(&uLocal_3788, 0, uLocal_3710[0], "michael", 0, 1);
						GlobalFunc_173(&uLocal_3788, 2, PLAYER::PLAYER_PED_ID(), "trevor", 0, 1);
						if (GlobalFunc_10626(&uLocal_3788, "fbi5aAU", "fbi5a_switch", "fbi5a_switch_5", 8, 0, 0))
						{
							iLocal_3246 = 1;
							iLocal_7709 = 1;
						}
					}
				}
				if (fLocal_7719 > 0f)
				{
					STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(fLocal_7719);
				}
				if (iVar0 >= iLocal_7720)
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2585.x))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2585.x);
						ENTITY::SET_ENTITY_COORDS(Local_2585.x, Local_7727, 1, 1, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(Local_2585.x, 0f, 0f, -63.5f, 2, 1);
					}
				}
				if (!iLocal_7722)
				{
					if (Local_3754.f_19)
					{
						TASK::TASK_HELI_MISSION(PLAYER::PLAYER_PED_ID(), Local_2585.x, 0, 0, Local_7730, 4, fLocal_7733, 3f, -1f, 20, -1, -1082130432, 0);
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missswitch", "mid_mission_inside_helicopter_trevor", 8f, -8f, -1, 32, 0, 0, 0, 0);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_7700, 1);
						ENTITY::SET_ENTITY_VELOCITY(Local_2585.x, 7.895117f, 4.266795f, 1.696478f);
						iLocal_7722 = 1;
					}
				}
				if (!iLocal_3133)
				{
					if (fVar1 >= 0.286f)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_3355 = MISC::GET_GAME_TIMER();
						iLocal_3133 = 1;
					}
				}
				else if (!iLocal_3134)
				{
					if (GlobalFunc_588(&iLocal_3355, 200))
					{
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_3209, "Short_Transition_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_3134 = 1;
					}
				}
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
				{
					if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= 0.8f)
					{
						GlobalFunc_669(&uLocal_3957, Local_2585.x, 2, 0.75f, 1000, 1000, 700, 700, 1045220557);
						GlobalFunc_668(&uLocal_3957, 10f, 0f, 0f);
						func_599(&uLocal_3957, 1, 1, 1, 0, 0, 0);
						iLocal_3976 = 9;
					}
				}
				else if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= 1f)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_7703);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_7704, 1065353216);
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					iLocal_3976 = 9;
				}
			}
			break;
		
		case 9:
			MISC::SET_TIME_SCALE(1f);
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
			{
				if (func_599(&uLocal_3957, 1, 1, 1, 0, 0, 0))
				{
					func_738(uParam0);
					return 1;
				}
			}
			else
			{
				func_738(uParam0);
				return 1;
			}
			break;
	}
	if (bParam1)
	{
		return 0;
	}
	return uParam0->f_1232;
}

void func_738(var uParam0)//Position - 0x704F9
{
	if (!bLocal_7734)
	{
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		if (CAM::DOES_CAM_EXIST(uParam0->f_1))
		{
			CAM::SET_CAM_ACTIVE(uParam0->f_1, 0);
			CAM::DESTROY_CAM(uParam0->f_1, 0);
		}
	}
	if (GlobalFunc_3000(uParam0))
	{
		GlobalFunc_2999(uParam0);
	}
	if (!iLocal_7702)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		HUD::DISPLAY_RADAR(1);
		HUD::DISPLAY_HUD(1);
		iLocal_7702 = 1;
	}
	SYSTEM::SETTIMERA(0);
	uParam0->f_1232 = 1;
	Local_3754.f_20 = 0;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	STREAMING::SET_GAME_PAUSES_FOR_STREAMING(1);
	STREAMING::STREAMVOL_DELETE(uLocal_7721);
	iLocal_3976 = 0;
	STREAMING::CLEAR_FOCUS();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2585.x, 0))
	{
		ENTITY::SET_ENTITY_VELOCITY(Local_2585.x, ENTITY::GET_ENTITY_VELOCITY(Local_2585.x) * Vector(0.3f, 0.3f, 0.3f));
	}
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_7700, 0);
	STREAMING::REMOVE_ANIM_DICT("MISSFBI5IG_33");
	STREAMING::REMOVE_ANIM_DICT("missswitch");
}

void func_739(var uParam0, int iParam1, int iParam2)//Position - 0x705D0
{
	if (!*uParam0)
	{
		uParam0->f_10[0 /*57*/].f_2 = 0;
		uParam0->f_10[0 /*57*/].f_3 = -1;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { 0.5813f, -1.5117f, 0.2259f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 0f;
		uParam0->f_10[0 /*57*/].f_16 = 0f;
		uParam0->f_10[0 /*57*/].f_17 = 0;
		uParam0->f_10[0 /*57*/].f_9 = { 8.1669f, -0.0057f, 88.7337f };
		uParam0->f_10[0 /*57*/].f_18 = 0;
		uParam0->f_10[0 /*57*/].f_19 = 0;
		uParam0->f_10[0 /*57*/].f_20 = 1;
		uParam0->f_10[0 /*57*/].f_21 = 35f;
		uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_27 = 0;
		uParam0->f_10[0 /*57*/].f_50 = 0;
		uParam0->f_10[0 /*57*/].f_51 = 0f;
		uParam0->f_10[0 /*57*/].f_52 = 0f;
		uParam0->f_10[0 /*57*/].f_22 = 0f;
		uParam0->f_10[0 /*57*/].f_53 = 0;
		uParam0->f_10[0 /*57*/].f_23 = 0.2f;
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
		uParam0->f_10[0 /*57*/].f_45 = 0;
		uParam0->f_10[0 /*57*/].f_46 = 0;
		uParam0->f_10[0 /*57*/].f_47 = 0f;
		uParam0->f_10[0 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[0 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[1 /*57*/].f_2 = 0;
		uParam0->f_10[1 /*57*/].f_3 = -1;
		uParam0->f_10[1 /*57*/].f_4 = 0;
		uParam0->f_10[1 /*57*/].f_5 = 3000;
		uParam0->f_10[1 /*57*/].f_6 = { 0.4612f, -1.1291f, 0.2359f };
		uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_12 = 0f;
		uParam0->f_10[1 /*57*/].f_16 = 0f;
		uParam0->f_10[1 /*57*/].f_17 = 0;
		uParam0->f_10[1 /*57*/].f_9 = { 12.7694f, -0.0056f, 87.5351f };
		uParam0->f_10[1 /*57*/].f_18 = 0;
		uParam0->f_10[1 /*57*/].f_19 = 0;
		uParam0->f_10[1 /*57*/].f_20 = 1;
		uParam0->f_10[1 /*57*/].f_21 = 35f;
		uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_27 = 0;
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 0f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0f;
		uParam0->f_10[1 /*57*/].f_53 = 0;
		uParam0->f_10[1 /*57*/].f_23 = 0f;
		uParam0->f_10[1 /*57*/].f_28 = 2;
		uParam0->f_10[1 /*57*/].f_29 = 0.8f;
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
		uParam0->f_10[1 /*57*/].f_38 = 0.98f;
		uParam0->f_10[1 /*57*/].f_45 = 0;
		uParam0->f_10[1 /*57*/].f_46 = 0;
		uParam0->f_10[1 /*57*/].f_47 = 0f;
		uParam0->f_10[1 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[1 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[2 /*57*/].f_2 = 0;
		uParam0->f_10[2 /*57*/].f_3 = -1;
		uParam0->f_10[2 /*57*/].f_4 = 0;
		uParam0->f_10[2 /*57*/].f_5 = 600;
		uParam0->f_10[2 /*57*/].f_6 = { 1.0248f, -2.1924f, 5.3185f };
		uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_12 = 0f;
		uParam0->f_10[2 /*57*/].f_16 = 0f;
		uParam0->f_10[2 /*57*/].f_17 = 0;
		uParam0->f_10[2 /*57*/].f_9 = { 12.7693f, -0.0056f, 87.5347f };
		uParam0->f_10[2 /*57*/].f_18 = 0;
		uParam0->f_10[2 /*57*/].f_19 = 0;
		uParam0->f_10[2 /*57*/].f_20 = 1;
		uParam0->f_10[2 /*57*/].f_21 = 35f;
		uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_27 = 0;
		uParam0->f_10[2 /*57*/].f_50 = 0;
		uParam0->f_10[2 /*57*/].f_51 = 0f;
		uParam0->f_10[2 /*57*/].f_52 = 0f;
		uParam0->f_10[2 /*57*/].f_22 = 1f;
		uParam0->f_10[2 /*57*/].f_53 = 0;
		uParam0->f_10[2 /*57*/].f_23 = 0f;
		uParam0->f_10[2 /*57*/].f_28 = 0;
		uParam0->f_10[2 /*57*/].f_29 = 0f;
		uParam0->f_10[2 /*57*/].f_32 = 0f;
		uParam0->f_10[2 /*57*/].f_30 = 1;
		uParam0->f_10[2 /*57*/].f_31 = 0;
		uParam0->f_10[2 /*57*/].f_33 = 1f;
		uParam0->f_10[2 /*57*/].f_34 = 0;
		uParam0->f_10[2 /*57*/].f_35 = 0f;
		uParam0->f_10[2 /*57*/].f_36 = 1;
		uParam0->f_10[2 /*57*/].f_37 = 11;
		uParam0->f_10[2 /*57*/].f_39 = 200f;
		uParam0->f_10[2 /*57*/].f_40 = 200f;
		uParam0->f_10[2 /*57*/].f_41 = 50;
		uParam0->f_10[2 /*57*/].f_42 = 50;
		uParam0->f_10[2 /*57*/].f_43 = 100;
		uParam0->f_10[2 /*57*/].f_38 = 0.3f;
		uParam0->f_10[2 /*57*/].f_45 = 0;
		uParam0->f_10[2 /*57*/].f_46 = 0;
		uParam0->f_10[2 /*57*/].f_47 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[3 /*57*/].f_54 = 1;
		uParam0->f_10[4 /*57*/].f_2 = 3;
		uParam0->f_10[4 /*57*/].f_3 = -1;
		uParam0->f_10[4 /*57*/].f_4 = 0;
		uParam0->f_10[4 /*57*/].f_5 = 0;
		uParam0->f_10[4 /*57*/].f_6 = { 3144.268f, 3543.224f, 130.6581f };
		uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_12 = 0f;
		uParam0->f_10[4 /*57*/].f_16 = 0f;
		uParam0->f_10[4 /*57*/].f_17 = 0;
		uParam0->f_10[4 /*57*/].f_9 = { -0.0635f, 0.0025f, 144.5912f };
		uParam0->f_10[4 /*57*/].f_18 = 0;
		uParam0->f_10[4 /*57*/].f_19 = 0;
		uParam0->f_10[4 /*57*/].f_20 = 0;
		uParam0->f_10[4 /*57*/].f_21 = 40f;
		uParam0->f_10[4 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_27 = 0;
		uParam0->f_10[4 /*57*/].f_50 = 0;
		uParam0->f_10[4 /*57*/].f_51 = 1f;
		uParam0->f_10[4 /*57*/].f_52 = 0f;
		uParam0->f_10[4 /*57*/].f_22 = 1f;
		uParam0->f_10[4 /*57*/].f_53 = 0;
		uParam0->f_10[4 /*57*/].f_23 = 0.2f;
		uParam0->f_10[4 /*57*/].f_28 = 1;
		uParam0->f_10[4 /*57*/].f_29 = 1f;
		uParam0->f_10[4 /*57*/].f_32 = 0f;
		uParam0->f_10[4 /*57*/].f_30 = 0;
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
		uParam0->f_10[4 /*57*/].f_45 = 0;
		uParam0->f_10[4 /*57*/].f_46 = 0;
		uParam0->f_10[4 /*57*/].f_47 = 0f;
		uParam0->f_10[4 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[4 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[5 /*57*/].f_2 = 1;
		uParam0->f_10[5 /*57*/].f_3 = -1;
		uParam0->f_10[5 /*57*/].f_4 = 0;
		uParam0->f_10[5 /*57*/].f_5 = 600;
		uParam0->f_10[5 /*57*/].f_6 = { -1.8852f, 8.0075f, 0.819f };
		uParam0->f_10[5 /*57*/].f_13 = { 3266.872f, 3652.523f, 128.6665f };
		uParam0->f_10[5 /*57*/].f_12 = 0f;
		uParam0->f_10[5 /*57*/].f_16 = 0f;
		uParam0->f_10[5 /*57*/].f_17 = 0;
		uParam0->f_10[5 /*57*/].f_9 = { 1.8536f, 0.9823f, 0.7829f };
		uParam0->f_10[5 /*57*/].f_18 = 1;
		uParam0->f_10[5 /*57*/].f_19 = 1;
		uParam0->f_10[5 /*57*/].f_20 = 1;
		uParam0->f_10[5 /*57*/].f_21 = 40f;
		uParam0->f_10[5 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_27 = 0;
		uParam0->f_10[5 /*57*/].f_50 = 0;
		uParam0->f_10[5 /*57*/].f_51 = 0f;
		uParam0->f_10[5 /*57*/].f_52 = 0f;
		uParam0->f_10[5 /*57*/].f_22 = 1f;
		uParam0->f_10[5 /*57*/].f_53 = 0;
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
		uParam0->f_10[5 /*57*/].f_45 = 0;
		uParam0->f_10[5 /*57*/].f_46 = 0;
		uParam0->f_10[5 /*57*/].f_47 = 0f;
		uParam0->f_10[5 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[5 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[6 /*57*/].f_2 = 1;
		uParam0->f_10[6 /*57*/].f_3 = -1;
		uParam0->f_10[6 /*57*/].f_4 = 0;
		uParam0->f_10[6 /*57*/].f_5 = 5400;
		uParam0->f_10[6 /*57*/].f_6 = { -2.1424f, 6.7358f, 0.9655f };
		uParam0->f_10[6 /*57*/].f_13 = { 3309.913f, 3688.825f, 130.9899f };
		uParam0->f_10[6 /*57*/].f_12 = 0f;
		uParam0->f_10[6 /*57*/].f_16 = 0f;
		uParam0->f_10[6 /*57*/].f_17 = 0;
		uParam0->f_10[6 /*57*/].f_9 = { 2.2436f, 4.5885f, -0.0129f };
		uParam0->f_10[6 /*57*/].f_18 = 1;
		uParam0->f_10[6 /*57*/].f_19 = 1;
		uParam0->f_10[6 /*57*/].f_20 = 1;
		uParam0->f_10[6 /*57*/].f_21 = 40f;
		uParam0->f_10[6 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_27 = 0;
		uParam0->f_10[6 /*57*/].f_50 = 0;
		uParam0->f_10[6 /*57*/].f_51 = 0f;
		uParam0->f_10[6 /*57*/].f_52 = 0f;
		uParam0->f_10[6 /*57*/].f_22 = 0f;
		uParam0->f_10[6 /*57*/].f_53 = 0;
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
		uParam0->f_10[7 /*57*/].f_54 = 1;
		uParam0->f_10[8 /*57*/].f_2 = 0;
		uParam0->f_10[8 /*57*/].f_3 = -1;
		uParam0->f_10[8 /*57*/].f_4 = 0;
		uParam0->f_10[8 /*57*/].f_5 = 0;
		uParam0->f_10[8 /*57*/].f_6 = { -2.0911f, -15.2659f, 5.0184f };
		uParam0->f_10[8 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[8 /*57*/].f_12 = 0f;
		uParam0->f_10[8 /*57*/].f_16 = 0f;
		uParam0->f_10[8 /*57*/].f_17 = 0;
		uParam0->f_10[8 /*57*/].f_9 = { -1.6486f, 0.0799f, 0.1005f };
		uParam0->f_10[8 /*57*/].f_18 = 1;
		uParam0->f_10[8 /*57*/].f_19 = 1;
		uParam0->f_10[8 /*57*/].f_20 = 1;
		uParam0->f_10[8 /*57*/].f_21 = 50f;
		uParam0->f_10[8 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[8 /*57*/].f_27 = 0;
		uParam0->f_10[8 /*57*/].f_50 = 0;
		uParam0->f_10[8 /*57*/].f_51 = 0f;
		uParam0->f_10[8 /*57*/].f_52 = 0f;
		uParam0->f_10[8 /*57*/].f_22 = 0f;
		uParam0->f_10[8 /*57*/].f_53 = 0;
		uParam0->f_10[8 /*57*/].f_23 = 0.2f;
		uParam0->f_10[8 /*57*/].f_28 = 0;
		uParam0->f_10[8 /*57*/].f_29 = 0f;
		uParam0->f_10[8 /*57*/].f_32 = 0f;
		uParam0->f_10[8 /*57*/].f_30 = 0;
		uParam0->f_10[8 /*57*/].f_31 = 0;
		uParam0->f_10[8 /*57*/].f_33 = 1f;
		uParam0->f_10[8 /*57*/].f_34 = 0;
		uParam0->f_10[8 /*57*/].f_35 = 0f;
		uParam0->f_10[8 /*57*/].f_36 = 0;
		uParam0->f_10[8 /*57*/].f_37 = 0;
		uParam0->f_10[8 /*57*/].f_39 = 0f;
		uParam0->f_10[8 /*57*/].f_40 = 0f;
		uParam0->f_10[8 /*57*/].f_41 = 0;
		uParam0->f_10[8 /*57*/].f_42 = 0;
		uParam0->f_10[8 /*57*/].f_43 = 0;
		uParam0->f_10[8 /*57*/].f_38 = 0f;
		uParam0->f_10[8 /*57*/].f_45 = 0;
		uParam0->f_10[8 /*57*/].f_46 = 0;
		uParam0->f_10[8 /*57*/].f_47 = 0f;
		uParam0->f_10[8 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[8 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[9 /*57*/].f_2 = 0;
		uParam0->f_10[9 /*57*/].f_3 = -1;
		uParam0->f_10[9 /*57*/].f_4 = 1;
		uParam0->f_10[9 /*57*/].f_5 = 1000;
		uParam0->f_10[9 /*57*/].f_6 = { -3.3166f, -22.2314f, -0.3705f };
		uParam0->f_10[9 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[9 /*57*/].f_12 = 0f;
		uParam0->f_10[9 /*57*/].f_16 = 0f;
		uParam0->f_10[9 /*57*/].f_17 = 0;
		uParam0->f_10[9 /*57*/].f_9 = { 0f, 0f, 0f };
		uParam0->f_10[9 /*57*/].f_18 = 1;
		uParam0->f_10[9 /*57*/].f_19 = 1;
		uParam0->f_10[9 /*57*/].f_20 = 1;
		uParam0->f_10[9 /*57*/].f_21 = 40f;
		uParam0->f_10[9 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[9 /*57*/].f_27 = 0;
		uParam0->f_10[9 /*57*/].f_50 = 0;
		uParam0->f_10[9 /*57*/].f_51 = 0f;
		uParam0->f_10[9 /*57*/].f_52 = 0f;
		uParam0->f_10[9 /*57*/].f_22 = 0f;
		uParam0->f_10[9 /*57*/].f_53 = 0;
		uParam0->f_10[9 /*57*/].f_23 = 0.2f;
		uParam0->f_10[9 /*57*/].f_28 = 0;
		uParam0->f_10[9 /*57*/].f_29 = 1f;
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
		uParam0->f_1217 = 10;
		uParam0->f_1218 = 3;
		uParam0->f_1233 = -1f;
		uParam0->f_1234 = -1f;
		uParam0->f_1235 = 1;
		uParam0->f_1236 = 1;
		uParam0->f_1237 = 1;
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
		uParam0->f_1219 = 0;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_FIB5_MichaelToTrevorInHeli.txt";
		uParam0->f_1225 = "CameraInfo_FIB5_MichaelToTrevorInHeli.xml";
		*uParam0 = 1;
	}
	uParam0->f_7[0] = iParam1;
	uParam0->f_4[1] = iParam2;
}

int func_740(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x715EF
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
				*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, iParam3, 1, 1);
				GlobalFunc_8386(*iParam0, iParam1, bParam5);
				PED::_0xE861D0B05C7662B8(*iParam0, 0, 0);
				GlobalFunc_11325(*iParam0);
				GlobalFunc_7694(*iParam0, 1, 0);
				GlobalFunc_7693(*iParam0);
				GlobalFunc_7714(*iParam0);
				GlobalFunc_11336(*iParam0, bParam6);
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


void func_742()//Position - 0x716B5
{
	RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	if (iLocal_84 == 0)
	{
		STREAMING::REQUEST_MODEL(iLocal_3623);
		STREAMING::REQUEST_MODEL(Local_2585.f_1);
		STREAMING::REQUEST_MODEL(Local_2054[0 /*24*/].f_2);
		STREAMING::REQUEST_MODEL(Local_2199.f_2);
		STREAMING::REQUEST_MODEL(Local_2175.f_2);
		STREAMING::REQUEST_ANIM_DICT("missfbi5ig_33");
		VEHICLE::REQUEST_VEHICLE_RECORDING(7, "lkfbi5a");
		AUDIO::LOAD_STREAM_WITH_START_OFFSET("STASH_TOXIN_STREAM", 2400, "FBI_05_SOUNDS");
		if (((((((STREAMING::HAS_MODEL_LOADED(iLocal_3623) && STREAMING::HAS_MODEL_LOADED(Local_2585.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_2054[0 /*24*/].f_2)) && STREAMING::HAS_MODEL_LOADED(Local_2199.f_2)) && STREAMING::HAS_MODEL_LOADED(Local_2175.f_2)) && STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_33")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(7, "lkfbi5a")) && AUDIO::LOAD_STREAM_WITH_START_OFFSET("STASH_TOXIN_STREAM", 2400, "FBI_05_SOUNDS"))
		{
			ENTITY::SET_ENTITY_PROOFS(Local_85, 0, 0, 0, 0, 0, 1, 0, 0);
			ENTITY::SET_ENTITY_PROOFS(Local_110, 0, 0, 0, 0, 0, 1, 0, 0);
			AUDIO::TRIGGER_MUSIC_EVENT("FBI5A_FIGHT_END_MA");
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_5_SHOOTOUT_START"))
			{
				AUDIO::STOP_AUDIO_SCENE("FBI_5_SHOOTOUT_START");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_5_SHOOTOUT_ANIMAL_LAB"))
			{
				AUDIO::STOP_AUDIO_SCENE("FBI_5_SHOOTOUT_ANIMAL_LAB");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_5_MILITARY_SHOOTOUT"))
			{
				AUDIO::STOP_AUDIO_SCENE("FBI_5_MILITARY_SHOOTOUT");
			}
			AUDIO::START_AUDIO_SCENE("FBI_5_GO_TO_CONTAINER");
			Local_1982.f_1 = GlobalFunc_6799(Local_1982);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_1982.f_1, "fbi5a_god_24");
			HUD::SET_BLIP_SCALE(Local_1982.f_1, 1f);
			iLocal_84 = 1;
		}
	}
	if (iLocal_84 == 1)
	{
		if (iLocal_3253 > 0)
		{
			if (GlobalFunc_4926(1000))
			{
				if (iLocal_3253 > 0)
				{
					RECORDING::_0x13B350B8AD0EEE10();
				}
				iLocal_3253 = 22;
			}
		}
		switch (iLocal_3253)
		{
			case 0:
				if (!func_314("fbi5a_dia50b"))
				{
					if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia50b", 7, 0, 0, 0))
					{
						func_298("fbi5a_dia50b", 1);
					}
				}
				if (!func_314("CHEM_FRDIGE"))
				{
					if (func_314("fbi5a_dia50b"))
					{
						if (!GlobalFunc_5172(&Local_3049, 0))
						{
							GlobalFunc_164("CHEM_FRDIGE", 7500, 1);
							func_298("CHEM_FRDIGE", 1);
						}
					}
				}
				if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2006, -2.1f, -3f, -1.4f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2006, 2.1f, -3f, 1.6f), 2.3f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2006, -0.75f, -1.5f, -1.4f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2006, 0.75f, -1.5f, 1.6f), 2.3f, 0, 1, 0))
					{
						if (func_485(1, 1, 1, 0))
						{
							RECORDING::_0x48621C9FCA3EBD28(4);
							if (HUD::DOES_BLIP_EXIST(Local_1982.f_1))
							{
								HUD::REMOVE_BLIP(&(Local_1982.f_1));
							}
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_5_GO_TO_CONTAINER"))
							{
								AUDIO::STOP_AUDIO_SCENE("FBI_5_GO_TO_CONTAINER");
							}
							AUDIO::START_AUDIO_SCENE("FBI_5_LOAD_UP_SYNC_SCENE");
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							MISC::CLEAR_AREA(3638.322f, 3771.815f, 28.525f, 100f, 1, 0, 0, 0);
							Local_3397 = { ENTITY::GET_ENTITY_COORDS(Local_1982, 1) };
							Local_3400 = { ENTITY::GET_ENTITY_ROTATION(Local_1982, 2) };
							iLocal_3251 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_3251, "missfbi5ig_33", "mid_mission_switch_player0", 1000f, -8f, 1, 0, 1000f, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
							uLocal_3603 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
							CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_3603, iLocal_3251, "mid_mission_switch_cam", "missfbi5ig_33");
							CAM::SET_CAM_ACTIVE(uLocal_3603, 1);
							CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
							Local_2175.x = OBJECT::CREATE_OBJECT(Local_2175.f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 0f, 1.5f), 1, 1, 0);
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_2175.x, iLocal_3251, "mid_mission_switch_tube", "missfbi5ig_33", 1000f, 8f, 0, 1148846080);
							ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_2175.x);
							Local_2199.x = OBJECT::CREATE_OBJECT(Local_2199.f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 0f, 1.5f), 1, 1, 0);
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_2199.x, iLocal_3251, "mid_mission_switch_vial", "missfbi5ig_33", 1000f, 8f, 0, 1148846080);
							ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_2199.x);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_3251, 0.08f);
							AUDIO::PLAY_STREAM_FRONTEND();
							WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
							iLocal_3976 = 1;
							func_737(&Local_3977, 1);
							iLocal_3253++;
						}
					}
				}
				break;
			
			case 1:
				if (!func_314("fbi5a_inst2"))
				{
					if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_inst2", 7, 0, 0, 0))
					{
						func_298("fbi5a_inst2", 1);
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3251))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3251) > 0.31f)
					{
						iLocal_3599 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_fbi5_dry_ice", 3638.42f, 3772f, 28.6f, 0f, 0f, 0f, 1f, 0, 0, 0, 0);
						iLocal_3253++;
					}
				}
				break;
			
			case 2:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3251))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3251) >= 0.7f)
					{
						if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3599))
						{
							GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3599, 0);
						}
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3251) >= fLocal_7706)
					{
						if (iLocal_3246 < 1)
						{
							func_731();
						}
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3251) >= fLocal_7705)
					{
						iLocal_84 = 2;
					}
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
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_3251, fLocal_7705);
					iLocal_84 = 2;
				}
				break;
		}
		func_339();
		func_328();
		func_745();
	}
	if (iLocal_84 == 2)
	{
		func_744();
		AUDIO::STOP_STREAM();
		RECORDING::_0x81CBAE94390F9F89();
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3251))
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_2199.x, -1000f, 1);
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3599))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3599, 0);
		}
		OBJECT::DELETE_OBJECT(&Local_2175);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2175.f_2);
		if (ENTITY::DOES_ENTITY_EXIST(Local_2199.x))
		{
			OBJECT::DELETE_OBJECT(&Local_2199);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2199.f_2);
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			func_473(0, 0, 0, 0f, 0f, 3000, 0, 0, 0, 1, 1);
			CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
		}
		else
		{
			func_459(0, 0f, 0f, 0, 800);
		}
		iLocal_3976 = 2;
		func_737(&Local_3977, 1);
		iLocal_82 = 17;
		iLocal_84 = 0;
	}
	if (iLocal_84 == 3)
	{
		if (iLocal_3253 == 0)
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2006, 0f, -4f, -1f), 1, 1, 1, 1);
		}
		else
		{
			GlobalFunc_2879();
			iLocal_84 = 2;
		}
	}
}


void func_744()//Position - 0x71D36
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_3145)
	{
		iLocal_3145[iVar0] = 0;
		iVar0++;
	}
}

void func_745()//Position - 0x71D5D
{
	if (!PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BIOTECH_HEIST_GASMASK_SCENE"))
		{
			AUDIO::START_AUDIO_SCENE("BIOTECH_HEIST_GASMASK_SCENE");
		}
		if (AUDIO::HAS_SOUND_FINISHED(iLocal_3201))
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_3201, "Gasmask", PLAYER::PLAYER_PED_ID(), "FBI_05_SOUNDS", 0, 0);
		}
	}
	else
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BIOTECH_HEIST_GASMASK_SCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("BIOTECH_HEIST_GASMASK_SCENE");
		}
		if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3201))
		{
			AUDIO::STOP_SOUND(iLocal_3201);
		}
	}
}




void func_749()//Position - 0x71E57
{
	int iVar0;
	
	RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	func_774();
	if (iLocal_84 == 0)
	{
		AUDIO::STOP_PED_SPEAKING(Local_85, 0);
		AUDIO::STOP_PED_SPEAKING(Local_110, 0);
		AUDIO::TRIGGER_MUSIC_EVENT("FBI5A_CHEM_START");
		MISC::SET_INSTANCE_PRIORITY_HINT(1);
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\FBI_05_GRAB_TOXIN");
		iLocal_84 = 1;
	}
	if (iLocal_84 == 1)
	{
		if (func_770())
		{
			iLocal_84 = 2;
		}
		func_774();
		func_768();
		func_339();
		func_328();
		func_765();
		func_762();
		func_761();
		func_760(&Local_987, 1, 1);
		func_759();
		func_757();
		func_754();
		func_752();
		func_751();
		func_745();
		func_750();
	}
	if (iLocal_84 == 2)
	{
		func_751();
		iLocal_82 = 14;
		iLocal_84 = 0;
	}
	if (iLocal_84 == 3)
	{
		GlobalFunc_4935();
		iVar0 = 0;
		while (iVar0 <= (Local_135 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_135[iVar0 /*25*/]))
			{
				PED::DELETE_PED(&(Local_135[iVar0 /*25*/]));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_135[iVar0 /*25*/].f_1);
			}
			if (HUD::DOES_BLIP_EXIST(Local_135[iVar0 /*25*/].f_2))
			{
				HUD::REMOVE_BLIP(&(Local_135[iVar0 /*25*/].f_2));
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (Local_211 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_211[iVar0 /*25*/]))
			{
				PED::DELETE_PED(&(Local_211[iVar0 /*25*/]));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_211[iVar0 /*25*/].f_1);
			}
			if (HUD::DOES_BLIP_EXIST(Local_211[iVar0 /*25*/].f_2))
			{
				HUD::REMOVE_BLIP(&(Local_211[iVar0 /*25*/].f_2));
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (Local_987 - 1))
		{
			if (!PED::IS_PED_INJURED(Local_987[iVar0 /*25*/]))
			{
				PED::DELETE_PED(&(Local_987[iVar0 /*25*/]));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_987[iVar0 /*25*/].f_1);
			}
			if (HUD::DOES_BLIP_EXIST(Local_987[iVar0 /*25*/].f_2))
			{
				HUD::REMOVE_BLIP(&(Local_987[iVar0 /*25*/].f_2));
			}
			iVar0++;
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 3613.408f, 3739.449f, 27.6921f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 144.6041f);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_85);
		ENTITY::SET_ENTITY_COORDS(Local_85, 3606.507f, 3729.573f, 28.6912f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(Local_85, 322.8864f);
		iLocal_3226 = 37;
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_110);
		ENTITY::SET_ENTITY_COORDS(Local_110, 3614.35f, 3722.539f, 28.6912f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(Local_110, 342.22f);
		iLocal_3227 = 28;
		func_298("fbi5asteve0", 1);
		iLocal_84 = 2;
	}
}

void func_750()//Position - 0x7209E
{
	switch (iLocal_3341)
	{
		case 0:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3596.862f, 3691.483f, 27.829f, 3599.352f, 3689.805f, 30.827f, 2.1f, 0, 1, 0))
			{
				AUDIO::START_AUDIO_SCENE("FBI_5_SHOOTOUT_GUARD_RUNS_OUT");
				iLocal_3341++;
			}
			break;
		
		case 1:
			if (Local_211[9 /*25*/].f_18)
			{
				if (PED::IS_PED_INJURED(Local_211[9 /*25*/]))
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_5_SHOOTOUT_GUARD_RUNS_OUT"))
					{
						AUDIO::STOP_AUDIO_SCENE("FBI_5_SHOOTOUT_GUARD_RUNS_OUT");
					}
					AUDIO::START_AUDIO_SCENE("FBI_5_SHOOTOUT_ANIMAL_LAB");
					iLocal_3341++;
				}
			}
			break;
		
		case 2:
			break;
	}
}

void func_751()//Position - 0x7214B
{
	switch (iLocal_3259)
	{
		case 0:
			if (AUDIO::IS_ALARM_PLAYING("FIB_05_BIOTECH_LAB_ALARMS"))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FBI5A_ALARM_MA");
				iLocal_3259++;
			}
			break;
		
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3570.549f, 3695.681f, 26.326f, 3570.039f, 3693.03f, 29.126f, 1.5f, 0, 1, 0))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FBI5A_FIGHT_START_MA");
				iLocal_3259++;
			}
			break;
		
		case 2:
			if (AUDIO::PREPARE_MUSIC_EVENT("FBI5A_BLUE_DOOR"))
			{
				if (Local_211[15 /*25*/].f_18)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FBI5A_BLUE_DOOR");
					iLocal_3259++;
				}
			}
			break;
		
		case 3:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3599.956f, 3705.828f, 28.694f, 3604.13f, 3703.076f, 31.994f, 1.5f, 0, 1, 0))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FBI5A_FIGHT_RAMP_UP_MA");
				iLocal_3259++;
			}
			break;
		
		case 4:
			break;
	}
}

void func_752()//Position - 0x72253
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Local_1163 - 1))
	{
		if (!PED::IS_PED_INJURED(Local_1163[iVar0 /*25*/]))
		{
			if (!PED::IS_PED_RAGDOLL(Local_1163[iVar0 /*25*/]))
			{
				switch (iLocal_3262[iVar0])
				{
					case 0:
						switch (iVar0)
						{
							case 0:
							case 4:
							case 6:
							case 9:
							case 11:
							case 13:
								TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
								TASK::TASK_PLAY_ANIM(0, "missfbi5ig_30monkeys", "monkey_a_idle", 8f, -8f, -1, 1, 0, 0, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
								TASK::TASK_PERFORM_SEQUENCE(Local_1163[iVar0 /*25*/], uLocal_3685);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
								break;
							
							case 1:
							case 3:
							case 5:
							case 8:
							case 12:
							case 14:
							case 16:
								TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
								TASK::TASK_PLAY_ANIM(0, "missfbi5ig_30monkeys", "monkey_b_idle", 8f, -8f, -1, 1, 0, 0, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
								TASK::TASK_PERFORM_SEQUENCE(Local_1163[iVar0 /*25*/], uLocal_3685);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
								break;
							
							case 2:
							case 7:
							case 10:
							case 15:
								TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
								TASK::TASK_PLAY_ANIM(0, "missfbi5ig_30monkeys", "monkey_c_idle", 8f, -8f, -1, 1, 0, 0, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
								TASK::TASK_PERFORM_SEQUENCE(Local_1163[iVar0 /*25*/], uLocal_3685);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
								break;
						}
						iLocal_3262[iVar0]++;
						break;
					
					case 1:
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 3592.418f, 3714.697f, 28.6893f, 1) < 22f)
						{
							if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_1163[iVar0 /*25*/], 1), 4f, 1) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
							{
								switch (iVar0)
								{
									case 0:
									case 4:
									case 6:
									case 9:
									case 11:
									case 13:
										TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
										TASK::TASK_PLAY_ANIM(0, "missfbi5ig_30monkeys", "monkey_a_freakout_in", 8f, -8f, -1, 0, 0, 0, 0, 0);
										TASK::TASK_PLAY_ANIM(0, "missfbi5ig_30monkeys", "monkey_a_freakout_loop", 1000f, -8f, -1, 1, 0, 0, 0, 0);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
										TASK::TASK_PERFORM_SEQUENCE(Local_1163[iVar0 /*25*/], uLocal_3685);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
										break;
									
									case 1:
									case 3:
									case 5:
									case 8:
									case 12:
									case 14:
									case 16:
										TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
										TASK::TASK_PLAY_ANIM(0, "missfbi5ig_30monkeys", "monkey_b_freakout_in", 8f, -8f, -1, 0, 0, 0, 0, 0);
										TASK::TASK_PLAY_ANIM(0, "missfbi5ig_30monkeys", "monkey_b_freakout_loop", 1000f, -8f, -1, 1, 0, 0, 0, 0);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
										TASK::TASK_PERFORM_SEQUENCE(Local_1163[iVar0 /*25*/], uLocal_3685);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
										break;
									
									case 2:
									case 7:
									case 10:
									case 15:
										TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
										TASK::TASK_PLAY_ANIM(0, "missfbi5ig_30monkeys", "monkey_c_freakout_in", 8f, -8f, -1, 0, 0, 0, 0, 0);
										TASK::TASK_PLAY_ANIM(0, "missfbi5ig_30monkeys", "monkey_c_freakout_loop", 1000f, -8f, -1, 1, 0, 0, 0, 0);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
										TASK::TASK_PERFORM_SEQUENCE(Local_1163[iVar0 /*25*/], uLocal_3685);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
										break;
								}
								iLocal_3262[iVar0]++;
							}
						}
						break;
					
					case 2:
						if (func_753(&(Local_1163[iVar0 /*25*/])))
						{
							switch (iVar0)
							{
								case 0:
								case 4:
								case 6:
								case 9:
								case 11:
								case 13:
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1163[iVar0 /*25*/], "missfbi5ig_30monkeys", "monkey_a_freakout_loop", 3))
									{
										if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_1163[iVar0 /*25*/], "missfbi5ig_30monkeys", "monkey_a_freakout_loop") > 0.99f)
										{
											TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
											TASK::TASK_PLAY_ANIM(0, "missfbi5ig_30monkeys", "monkey_a_freakout_out", 8f, -8f, -1, 0, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, "missfbi5ig_30monkeys", "monkey_a_idle", 8f, -8f, -1, 1, 0, 0, 0, 0);
											TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
											TASK::TASK_PERFORM_SEQUENCE(Local_1163[iVar0 /*25*/], uLocal_3685);
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
											iLocal_3262[iVar0] = 1;
										}
									}
									break;
								
								case 1:
								case 3:
								case 5:
								case 8:
								case 12:
								case 14:
								case 16:
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1163[iVar0 /*25*/], "missfbi5ig_30monkeys", "monkey_b_freakout_loop", 3))
									{
										if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_1163[iVar0 /*25*/], "missfbi5ig_30monkeys", "monkey_b_freakout_loop") > 0.99f)
										{
											TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
											TASK::TASK_PLAY_ANIM(0, "missfbi5ig_30monkeys", "monkey_b_freakout_out", 8f, -8f, -1, 0, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, "missfbi5ig_30monkeys", "monkey_b_idle", 8f, -8f, -1, 1, 0, 0, 0, 0);
											TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
											TASK::TASK_PERFORM_SEQUENCE(Local_1163[iVar0 /*25*/], uLocal_3685);
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
											iLocal_3262[iVar0] = 1;
										}
									}
									break;
								
								case 2:
								case 7:
								case 10:
								case 15:
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1163[iVar0 /*25*/], "missfbi5ig_30monkeys", "monkey_c_freakout_loop", 3))
									{
										if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_1163[iVar0 /*25*/], "missfbi5ig_30monkeys", "monkey_c_freakout_loop") > 0.99f)
										{
											TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
											TASK::TASK_PLAY_ANIM(0, "missfbi5ig_30monkeys", "monkey_c_freakout_out", 8f, -8f, -1, 0, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, "missfbi5ig_30monkeys", "monkey_c_idle", 8f, -8f, -1, 1, 0, 0, 0, 0);
											TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
											TASK::TASK_PERFORM_SEQUENCE(Local_1163[iVar0 /*25*/], uLocal_3685);
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
											iLocal_3262[iVar0] = 1;
										}
									}
									break;
								}
						}
						break;
					}
			}
		}
		else if (!Local_1163[iVar0 /*25*/].f_18)
		{
			STREAMING::REQUEST_MODEL(Local_1163[iVar0 /*25*/].f_1);
			STREAMING::REQUEST_ANIM_DICT("missfbi5ig_30Monkeys");
			if (STREAMING::HAS_MODEL_LOADED(Local_1163[iVar0 /*25*/].f_1) && STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_30Monkeys"))
			{
				Local_1163[iVar0 /*25*/] = PED::CREATE_PED(26, Local_1163[iVar0 /*25*/].f_1, Local_1163[iVar0 /*25*/].f_3, Local_1163[iVar0 /*25*/].f_12, 1, 1);
				func_646(&(Local_1163[iVar0 /*25*/]));
				PED::SET_PED_CAN_RAGDOLL(Local_1163[iVar0 /*25*/], 1);
				Local_1163[iVar0 /*25*/].f_18 = 1;
				PED::SET_PED_CONFIG_FLAG(Local_1163[iVar0 /*25*/], 246, 1);
				PED::SET_PED_DIES_WHEN_INJURED(Local_1163[iVar0 /*25*/], 1);
				PED::SET_PED_NAME_DEBUG(Local_1163[iVar0 /*25*/], &(Local_1163[iVar0 /*25*/].f_21));
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1163[iVar0 /*25*/], 1);
			}
		}
		iVar0++;
	}
}

int func_753(var uParam0)//Position - 0x72923
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 3592.418f, 3714.697f, 28.6893f, 1) < 22f)
	{
		if (!PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	else if (!MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 4f, 1))
	{
		return 1;
	}
	return 0;
}

void func_754()//Position - 0x7297B
{
	int iVar0;
	
	switch (iLocal_3254)
	{
		case 0:
			STREAMING::REQUEST_MODEL(Local_2416.f_2);
			if (((AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\FBI_05_MONKEYS", 0) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FBI_05_MONKEY_SCREAMS_01", 0)) && AUDIO::LOAD_STREAM("Monkey_Stream", "FBI_05_SOUNDS")) && STREAMING::HAS_MODEL_LOADED(Local_2416.f_2))
			{
				Local_2416 = OBJECT::CREATE_OBJECT(Local_2416.f_2, Local_2416.f_3, 1, 1, 0);
				ENTITY::SET_ENTITY_VISIBLE(Local_2416, 0);
				ENTITY::SET_ENTITY_COLLISION(Local_2416, 0, 0);
				ENTITY::FREEZE_ENTITY_POSITION(Local_2416, 1);
				ENTITY::SET_ENTITY_PROOFS(Local_2416, 1, 1, 1, 1, 1, 0, 0, 0);
				iLocal_3254++;
			}
			break;
		
		case 1:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 3592.418f, 3714.697f, 28.6893f, 1) < 22f)
			{
				AUDIO::SET_AMBIENT_ZONE_LIST_STATE("FBI_05_MONKEYS", 1, 0);
				AUDIO::PLAY_STREAM_FROM_OBJECT(Local_2416);
				iLocal_3254++;
			}
			break;
		
		case 2:
			if (AUDIO::HAS_SOUND_FINISHED(iLocal_3204[0]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 3592.418f, 3714.697f, 28.6893f, 1) < 22f)
				{
					if ((GlobalFunc_588(&(iLocal_3255[0]), 7000) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) || MISC::IS_BULLET_IN_AREA(3592.418f, 3714.697f, 28.6893f, 10f, 0))
					{
						AUDIO::PLAY_SOUND_FROM_COORD(iLocal_3204[0], "Monkey_Yell", Local_1163[MISC::GET_RANDOM_INT_IN_RANGE(0, Local_1163) /*25*/].f_3, "FBI_05_SOUNDS", 0, 0, 0);
						iLocal_3255[0] = MISC::GET_GAME_TIMER();
					}
				}
			}
			iVar0 = (17 - func_756(&Local_1163));
			if (iVar0 > 0)
			{
				AUDIO::SET_VARIABLE_ON_STREAM("Monkey_Stream", SYSTEM::TO_FLOAT(((iVar0 - 0) / 17)));
			}
			func_755();
			if (func_340(&Local_1163, (Local_1163 - 1)))
			{
				AUDIO::CLEAR_AMBIENT_ZONE_LIST_STATE("FBI_05_MONKEYS", 0);
				AUDIO::STOP_STREAM();
				AUDIO::STOP_SOUND(iLocal_3204[0]);
				AUDIO::STOP_SOUND(iLocal_3204[1]);
				iLocal_3254++;
			}
			break;
		
		case 3:
			break;
	}
}

void func_755()//Position - 0x72B80
{
	int iVar0;
	var uVar1[17];
	int iVar19;
	int iVar20;
	
	if (GlobalFunc_588(&(iLocal_3255[1]), 5000))
	{
		iVar0 = (17 - func_756(&Local_1163));
		if (iVar0 > 0)
		{
			iVar19 = 0;
			iVar20 = 0;
			iVar20 = 0;
			while (iVar20 <= (Local_1163 - 1))
			{
				if (!PED::IS_PED_INJURED(Local_1163[iVar20 /*25*/]))
				{
					uVar1[iVar19] = Local_1163[iVar20 /*25*/];
					iVar19++;
				}
				iVar20++;
			}
			AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_3204[1], "Monkey_Scream", uVar1[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0)], "FBI_05_SOUNDS", 0, 0);
			iLocal_3255[1] = MISC::GET_GAME_TIMER();
		}
	}
}

int func_756(int iParam0)//Position - 0x72C19
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= (*iParam0 - 1))
	{
		if ((iParam0[iVar1 /*25*/])->f_18)
		{
			if (PED::IS_PED_INJURED((*iParam0)[iVar1 /*25*/]))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_757()//Position - 0x72C5A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Local_211 - 1))
	{
		if (!PED::IS_PED_INJURED(Local_211[iVar0 /*25*/]))
		{
			if (!Local_211[iVar0 /*25*/].f_19)
			{
				if (func_758(Local_211[iVar0 /*25*/], PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_CONFIG_FLAG(Local_211[iVar0 /*25*/], 153, 1);
					ENTITY::SET_ENTITY_HEALTH(Local_211[iVar0 /*25*/], 2);
					GlobalFunc_565(326, 1, 0);
					Local_211[iVar0 /*25*/].f_19 = 1;
				}
			}
		}
		iVar0++;
	}
}

int func_758(int iParam0, int iParam1)//Position - 0x72CCC
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(iParam1, &iVar0, 1))
			{
				if (iVar0 == joaat("weapon_stungun"))
				{
					if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0, joaat("weapon_stungun"), 0) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_759()//Position - 0x72D20
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Local_211 - 1))
	{
		if (!PED::IS_PED_INJURED(Local_211[iVar0 /*25*/]))
		{
			switch (iLocal_48[iVar0])
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							PED::SET_PED_RESET_FLAG(Local_211[iVar0 /*25*/], 282, 1);
							STREAMING::REQUEST_ANIM_DICT("missfbi5misc");
							if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi5misc"))
							{
								if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3566.335f, 3684.536f, 27.127f, 3565.776f, 3681.081f, 30.227f, 3.9f, 0, 1, 0) && CAM::IS_SPHERE_VISIBLE(3567.2f, 3696f, 28.4f, 2f)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3564.522f, 3685.62f, 27.122f, 3568.162f, 3684.958f, 29.722f, 1.4f, 0, 1, 0))
								{
									Local_3397 = { 3563.842f, 3694.651f, 28.101f };
									Local_3400 = { 0f, 0f, -178f };
									TASK::TASK_PLAY_ANIM_ADVANCED(Local_211[iVar0 /*25*/], "missfbi5misc", "plyr_roll_left", Local_3397, Local_3400, 1000f, -4f, -1, 1024, 0f, 2, 1);
									iLocal_48[iVar0] = 2;
								}
							}
							break;
						
						case 2:
						case 3:
						case 7:
						case 15:
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_211[iVar0 /*25*/], 0);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_211[iVar0 /*25*/], Local_211[iVar0 /*25*/].f_9, 1f, 0, 0);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_211[iVar0 /*25*/], 200f, 0);
							iLocal_48[iVar0] = 2;
							break;
						
						case 16:
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_211[iVar0 /*25*/], 57, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_211[iVar0 /*25*/], 0);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_211[iVar0 /*25*/], Local_211[iVar0 /*25*/].f_9, 1f, 0, 0);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_211[iVar0 /*25*/], 200f, 0);
							iLocal_48[iVar0] = 2;
							break;
						
						case 4:
						case 5:
						case 10:
						case 13:
						case 24:
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_211[iVar0 /*25*/], 0);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_211[iVar0 /*25*/], Local_211[iVar0 /*25*/].f_3, 2f, 0, 0);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_211[iVar0 /*25*/], 200f, 0);
							iLocal_48[iVar0] = 1;
							break;
						
						case 8:
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_211[iVar0 /*25*/], 0);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_211[iVar0 /*25*/], Local_211[iVar0 /*25*/].f_9, 1f, 0, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_211[iVar0 /*25*/], 51, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_211[iVar0 /*25*/], 50, 1);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_211[iVar0 /*25*/], 200f, 0);
							iLocal_48[iVar0] = 7;
							break;
						
						case 1:
						case 17:
						case 18:
						case 21:
						case 22:
						case 32:
						case 33:
							if (iVar0 == 1)
							{
								PED::SET_PED_RESET_FLAG(Local_211[iVar0 /*25*/], 282, 1);
							}
							TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_211[iVar0 /*25*/].f_9, PLAYER::PLAYER_PED_ID(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
							TASK::TASK_PERFORM_SEQUENCE(Local_211[iVar0 /*25*/], uLocal_3685);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
							iLocal_48[iVar0] = 2;
							break;
						
						case 6:
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3568.042f, 3692.851f, 27.129f, 3568.892f, 3696.966f, 30.126f, 1.5f, 0, 1, 0))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
								TASK::TASK_PAUSE(0, 2500);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_211[iVar0 /*25*/].f_9, PLAYER::PLAYER_PED_ID(), 1.5f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
								TASK::TASK_PERFORM_SEQUENCE(Local_211[iVar0 /*25*/], uLocal_3685);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
								iLocal_48[iVar0] = 2;
							}
							break;
						
						case 9:
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3595.197f, 3692.011f, 27.828f, 3597.873f, 3695.875f, 30.828f, 2.1f, 0, 1, 0))
							{
								PED::SET_COMBAT_FLOAT(Local_211[iVar0 /*25*/], 5, 1f);
								PED::SET_COMBAT_FLOAT(Local_211[iVar0 /*25*/], 8, 0f);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_211[iVar0 /*25*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_211[iVar0 /*25*/], Local_211[iVar0 /*25*/].f_9, 1f, 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_211[iVar0 /*25*/], 200f, 0);
								iLocal_48[iVar0] = 2;
							}
							break;
						
						case 11:
						case 12:
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3583.195f, 3699.724f, 27.828f, 3586.471f, 3697.429f, 30.828f, 5.8f, 0, 1, 0))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
								TASK::TASK_PAUSE(0, 500);
								TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
								TASK::TASK_SET_SPHERE_DEFENSIVE_AREA(0, Local_211[iVar0 /*25*/].f_9, 2f);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
								TASK::TASK_PERFORM_SEQUENCE(Local_211[iVar0 /*25*/], uLocal_3685);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
								iLocal_48[iVar0] = 2;
							}
							break;
						
						case 14:
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3583.195f, 3699.724f, 27.828f, 3586.471f, 3697.429f, 30.828f, 5.8f, 0, 1, 0))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
								TASK::TASK_PAUSE(0, 500);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_211[iVar0 /*25*/].f_9, PLAYER::PLAYER_PED_ID(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
								TASK::TASK_PERFORM_SEQUENCE(Local_211[iVar0 /*25*/], uLocal_3685);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
								iLocal_48[iVar0] = 2;
							}
							break;
						
						case 19:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2464[0 /*15*/], 0))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2464[0 /*15*/]))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2464[0 /*15*/]) + 500f) > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(Local_2464[0 /*15*/].f_13, "lkfbi5a")
									{
										VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2464[0 /*15*/]);
										VEHICLE::SET_VEHICLE_ENGINE_ON(Local_2464[0 /*15*/], 0, 0);
										TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
										TASK::TASK_LEAVE_VEHICLE(0, Local_2464[0 /*15*/], 256);
										TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_211[iVar0 /*25*/].f_9, PLAYER::PLAYER_PED_ID(), 2f, 1, 0.5f, 0.8f, 1, 0, 0, -957453492, 20000);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
										TASK::TASK_PERFORM_SEQUENCE(Local_211[iVar0 /*25*/], uLocal_3685);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
										iLocal_48[iVar0] = 2;
									}
								}
							}
							else
							{
								iLocal_48[iVar0] = 2;
							}
							break;
						
						case 20:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2464[0 /*15*/], 0))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2464[0 /*15*/]))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
									TASK::TASK_PAUSE(0, 300);
									TASK::TASK_LEAVE_VEHICLE(0, Local_2464[0 /*15*/], 256);
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_211[iVar0 /*25*/].f_9, PLAYER::PLAYER_PED_ID(), 2f, 1, 0.5f, 0.8f, 1, 0, 0, -957453492, 20000);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
									TASK::TASK_PERFORM_SEQUENCE(Local_211[iVar0 /*25*/], uLocal_3685);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
									iLocal_48[iVar0] = 2;
								}
							}
							else
							{
								iLocal_48[iVar0] = 2;
							}
							break;
						
						case 23:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2464[0 /*15*/], 0))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2464[0 /*15*/]))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_211[iVar0 /*25*/], 0);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_211[iVar0 /*25*/], Local_211[iVar0 /*25*/].f_9, 2f, 0, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_211[iVar0 /*25*/], 51, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_211[iVar0 /*25*/], 50, 1);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_211[iVar0 /*25*/], 200f, 0);
									iLocal_48[iVar0] = 7;
								}
							}
							else
							{
								iLocal_48[iVar0] = 2;
							}
							break;
						
						case 25:
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_211[iVar0 /*25*/], 0);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_211[iVar0 /*25*/], Local_211[iVar0 /*25*/].f_3, 2f, 0, 0);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_211[iVar0 /*25*/], 3623.87f, 3731.537f, 27.6895f, 2f, 0, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_211[iVar0 /*25*/], 51, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_211[iVar0 /*25*/], 50, 1);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_211[iVar0 /*25*/], 200f, 0);
							iLocal_48[iVar0] = 1;
							break;
						
						case 26:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2464[1 /*15*/], 0))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2464[1 /*15*/]))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
									TASK::TASK_PAUSE(0, 550);
									TASK::TASK_LEAVE_VEHICLE(0, Local_2464[1 /*15*/], 256);
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_211[iVar0 /*25*/].f_9, PLAYER::PLAYER_PED_ID(), 2f, 1, 0.5f, 0.8f, 1, 0, 0, -957453492, 20000);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
									TASK::TASK_PERFORM_SEQUENCE(Local_211[iVar0 /*25*/], uLocal_3685);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
									iLocal_48[iVar0] = 2;
								}
							}
							else
							{
								iLocal_48[iVar0] = 2;
							}
							break;
						
						case 27:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2464[1 /*15*/], 0))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2464[1 /*15*/]))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
									TASK::TASK_PAUSE(0, 750);
									TASK::TASK_LEAVE_VEHICLE(0, Local_2464[1 /*15*/], 256);
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_211[iVar0 /*25*/].f_9, PLAYER::PLAYER_PED_ID(), 2f, 1, 0.5f, 0.8f, 1, 0, 0, -957453492, 20000);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
									TASK::TASK_PERFORM_SEQUENCE(Local_211[iVar0 /*25*/], uLocal_3685);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
									iLocal_48[iVar0] = 2;
								}
							}
							else
							{
								iLocal_48[iVar0] = 2;
							}
							break;
						
						case 28:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2464[2 /*15*/], 0))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2464[2 /*15*/]))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2464[2 /*15*/]) + 500f) > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(Local_2464[2 /*15*/].f_13, "lkfbi5a")
									{
										VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2464[2 /*15*/]);
										TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
										TASK::TASK_LEAVE_VEHICLE(0, Local_2464[2 /*15*/], 256);
										TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_211[iVar0 /*25*/].f_9, PLAYER::PLAYER_PED_ID(), 2f, 1, 0.5f, 0.8f, 1, 0, 0, -957453492, 20000);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
										TASK::TASK_PERFORM_SEQUENCE(Local_211[iVar0 /*25*/], uLocal_3685);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
										iLocal_48[iVar0] = 2;
									}
								}
							}
							else
							{
								iLocal_48[iVar0] = 2;
							}
							break;
						
						case 29:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2464[2 /*15*/], 0))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2464[2 /*15*/]))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
									TASK::TASK_PAUSE(0, 300);
									TASK::TASK_LEAVE_VEHICLE(0, Local_2464[2 /*15*/], 256);
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_211[iVar0 /*25*/].f_9, PLAYER::PLAYER_PED_ID(), 2f, 1, 0.5f, 0.8f, 1, 0, 0, -957453492, 20000);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
									TASK::TASK_PERFORM_SEQUENCE(Local_211[iVar0 /*25*/], uLocal_3685);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
									iLocal_48[iVar0] = 2;
								}
							}
							else
							{
								iLocal_48[iVar0] = 2;
							}
							break;
						
						case 30:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2464[2 /*15*/], 0))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2464[2 /*15*/]))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
									TASK::TASK_PAUSE(0, 550);
									TASK::TASK_LEAVE_VEHICLE(0, Local_2464[2 /*15*/], 256);
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_211[iVar0 /*25*/].f_9, PLAYER::PLAYER_PED_ID(), 2f, 1, 0.5f, 0.8f, 1, 0, 0, -957453492, 20000);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
									TASK::TASK_PERFORM_SEQUENCE(Local_211[iVar0 /*25*/], uLocal_3685);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
									iLocal_48[iVar0] = 2;
								}
							}
							else
							{
								iLocal_48[iVar0] = 2;
							}
							break;
						
						case 31:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2464[2 /*15*/], 0))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2464[2 /*15*/]))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
									TASK::TASK_PAUSE(0, 750);
									TASK::TASK_LEAVE_VEHICLE(0, Local_2464[2 /*15*/], 256);
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_211[iVar0 /*25*/].f_9, PLAYER::PLAYER_PED_ID(), 2f, 1, 0.5f, 0.8f, 1, 0, 0, -957453492, 20000);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
									TASK::TASK_PERFORM_SEQUENCE(Local_211[iVar0 /*25*/], uLocal_3685);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
									iLocal_48[iVar0] = 2;
								}
							}
							else
							{
								iLocal_48[iVar0] = 2;
							}
							break;
					}
					break;
				
				case 2:
					switch (iVar0)
					{
						case 0:
							PED::SET_PED_RESET_FLAG(Local_211[iVar0 /*25*/], 282, 1);
							if ((ENTITY::IS_ENTITY_PLAYING_ANIM(Local_211[0 /*25*/], "missfbi5misc", "plyr_roll_left", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_211[0 /*25*/], "missfbi5misc", "plyr_roll_left") > 0.99f) || !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_211[0 /*25*/], "missfbi5misc", "plyr_roll_left", 3))
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_211[0 /*25*/], "missfbi5misc", "plyr_roll_left", 3))
								{
									PED::SET_PED_RESET_FLAG(Local_211[0 /*25*/], 156, 1);
								}
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_211[iVar0 /*25*/], 3565.837f, 3691.859f, 27.1217f, 1f, 0, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_211[iVar0 /*25*/], 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_211[iVar0 /*25*/], 51, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_211[iVar0 /*25*/], 50, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_211[iVar0 /*25*/], 200f, 0);
								iLocal_48[iVar0] = 7;
							}
							break;
						
						case 2:
						case 3:
						case 7:
						case 9:
						case 15:
						case 16:
							if (ENTITY::IS_ENTITY_AT_COORD(Local_211[iVar0 /*25*/], Local_211[iVar0 /*25*/].f_9, 1.5f, 1.5f, 2f, 0, 1, 0))
							{
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_211[iVar0 /*25*/], Local_211[iVar0 /*25*/].f_9, 10f, 0, 0);
								PED::SET_PED_COMBAT_MOVEMENT(Local_211[iVar0 /*25*/], 2);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_211[iVar0 /*25*/], 50, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_211[iVar0 /*25*/], 200f, 0);
								iLocal_48[iVar0] = 7;
							}
							break;
						
						case 1:
						case 6:
						case 12:
						case 17:
						case 18:
						case 23:
						case 24:
						case 25:
						case 26:
						case 27:
						case 28:
						case 29:
						case 30:
						case 31:
						case 32:
						case 33:
							if (!ENTITY::IS_ENTITY_AT_COORD(Local_211[iVar0 /*25*/], Local_211[iVar0 /*25*/].f_9, 1.5f, 1.5f, 2f, 0, 1, 0))
							{
								if (func_336(Local_211[iVar0 /*25*/], 242628503, -2, 1))
								{
									TASK::CLEAR_PED_TASKS(Local_211[iVar0 /*25*/]);
									TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_211[iVar0 /*25*/].f_9, PLAYER::PLAYER_PED_ID(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
									TASK::TASK_PERFORM_SEQUENCE(Local_211[iVar0 /*25*/], uLocal_3685);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
								}
							}
							else
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_211[iVar0 /*25*/], 0);
								switch (iVar0)
								{
									case 1:
										PED::SET_PED_RESET_FLAG(Local_211[iVar0 /*25*/], 282, 1);
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_211[iVar0 /*25*/], Local_211[iVar0 /*25*/].f_9, 1.5f, 0, 0);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_211[iVar0 /*25*/], 51, 1);
										break;
									
									case 3:
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_211[iVar0 /*25*/], Local_211[iVar0 /*25*/].f_9, 2f, 0, 0);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_211[iVar0 /*25*/], 37, 1);
										break;
									
									case 6:
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_211[iVar0 /*25*/], Local_211[iVar0 /*25*/].f_9, 10f, 0, 0);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_211[iVar0 /*25*/], 51, 1);
										break;
									
									default:
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_211[iVar0 /*25*/], Local_211[iVar0 /*25*/].f_9, 2f, 0, 0);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_211[iVar0 /*25*/], 51, 1);
										break;
								}
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_211[iVar0 /*25*/], 50, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_211[iVar0 /*25*/], 200f, 0);
								iLocal_48[iVar0] = 7;
							}
							break;
						
						case 11:
							if (ENTITY::IS_ENTITY_AT_COORD(Local_211[iVar0 /*25*/], Local_211[iVar0 /*25*/].f_9, 1.5f, 1.5f, 2f, 0, 1, 0))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_211[iVar0 /*25*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_211[iVar0 /*25*/], Local_211[iVar0 /*25*/].f_9, 10f, 0, 0);
								PED::SET_PED_COMBAT_MOVEMENT(Local_211[iVar0 /*25*/], 2);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_211[iVar0 /*25*/], 50, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_211[iVar0 /*25*/], 200f, 0);
								iLocal_48[iVar0] = 1;
							}
							break;
						
						case 14:
						case 19:
						case 20:
						case 21:
						case 22:
							if (!ENTITY::IS_ENTITY_AT_COORD(Local_211[iVar0 /*25*/], Local_211[iVar0 /*25*/].f_9, 1.5f, 1.5f, 2f, 0, 1, 0))
							{
								if (func_336(Local_211[iVar0 /*25*/], 242628503, -2, 1))
								{
									TASK::CLEAR_PED_TASKS(Local_211[iVar0 /*25*/]);
									TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_211[iVar0 /*25*/].f_9, PLAYER::PLAYER_PED_ID(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
									TASK::TASK_PERFORM_SEQUENCE(Local_211[iVar0 /*25*/], uLocal_3685);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
								}
							}
							else
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_211[iVar0 /*25*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_211[iVar0 /*25*/], Local_211[iVar0 /*25*/].f_9, 2f, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_211[iVar0 /*25*/], 51, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_211[iVar0 /*25*/], 50, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_211[iVar0 /*25*/], 200f, 0);
								iLocal_48[iVar0] = 1;
							}
							break;
					}
					break;
				
				case 1:
					switch (iVar0)
					{
						case 4:
							if (PED::IS_PED_INJURED(Local_211[2 /*25*/]))
							{
								Local_211[iVar0 /*25*/].f_9 = { Local_211[2 /*25*/].f_3 };
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_211[iVar0 /*25*/], 0);
								PED::SET_COMBAT_FLOAT(Local_211[iVar0 /*25*/], 5, 1f);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_211[iVar0 /*25*/], Local_211[iVar0 /*25*/].f_9, 2f, 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_211[iVar0 /*25*/], 200f, 0);
								iLocal_48[iVar0] = 3;
							}
							else if (PED::IS_PED_INJURED(Local_211[3 /*25*/]))
							{
								Local_211[iVar0 /*25*/].f_9 = { Local_211[3 /*25*/].f_9 };
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_211[iVar0 /*25*/], 0);
								PED::SET_COMBAT_FLOAT(Local_211[iVar0 /*25*/], 5, 1f);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_211[iVar0 /*25*/], Local_211[iVar0 /*25*/].f_9, 2f, 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_211[iVar0 /*25*/], 200f, 0);
								iLocal_48[iVar0] = 3;
							}
							break;
						
						case 5:
							if ((PED::IS_PED_INJURED(Local_211[2 /*25*/]) && PED::IS_PED_INJURED(Local_211[3 /*25*/])) || PED::IS_PED_INJURED(Local_211[4 /*25*/]))
							{
								Local_211[iVar0 /*25*/].f_9 = { 3580.17f, 3692.23f, 26.12f };
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_211[iVar0 /*25*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_211[iVar0 /*25*/], Local_211[iVar0 /*25*/].f_9, 2f, 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_211[iVar0 /*25*/], 200f, 0);
								iLocal_48[iVar0] = 3;
							}
							break;
						
						case 10:
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3583.195f, 3699.724f, 27.828f, 3586.471f, 3697.429f, 30.828f, 5.8f, 0, 1, 0))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_211[iVar0 /*25*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_211[iVar0 /*25*/], Local_211[iVar0 /*25*/].f_9, 10f, 0, 0);
								PED::SET_PED_COMBAT_MOVEMENT(Local_211[iVar0 /*25*/], 2);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_211[iVar0 /*25*/], 50, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_211[iVar0 /*25*/], 200f, 0);
								iLocal_48[iVar0] = 7;
							}
							break;
						
						case 11:
							if (PED::IS_PED_INJURED(Local_211[10 /*25*/]))
							{
								Local_211[iVar0 /*25*/].f_9 = { 3592.334f, 3706.515f, 28.6908f };
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_211[iVar0 /*25*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_211[iVar0 /*25*/], Local_211[iVar0 /*25*/].f_9, 1f, 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_211[iVar0 /*25*/], 200f, 0);
								iLocal_48[iVar0] = 3;
							}
							break;
						
						case 13:
							if (PED::IS_PED_INJURED(Local_211[11 /*25*/]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_211[iVar0 /*25*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_211[iVar0 /*25*/], Local_211[iVar0 /*25*/].f_9, 2f, 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_211[iVar0 /*25*/], 200f, 0);
								iLocal_48[iVar0] = 3;
							}
							break;
						
						case 14:
							if (PED::IS_PED_INJURED(Local_211[10 /*25*/]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_211[iVar0 /*25*/], 1);
								TASK::CLEAR_PED_TASKS(Local_211[iVar0 /*25*/]);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_211[iVar0 /*25*/].f_9, PLAYER::PLAYER_PED_ID(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
								TASK::TASK_PERFORM_SEQUENCE(Local_211[iVar0 /*25*/], uLocal_3685);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
								iLocal_48[iVar0] = 3;
							}
							break;
						
						case 19:
							if (PED::IS_PED_INJURED(Local_211[17 /*25*/]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_211[iVar0 /*25*/], 1);
								TASK::CLEAR_PED_TASKS(Local_211[iVar0 /*25*/]);
								Local_211[iVar0 /*25*/].f_9 = { Local_211[17 /*25*/].f_9 };
								TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_211[iVar0 /*25*/].f_9, PLAYER::PLAYER_PED_ID(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
								TASK::TASK_PERFORM_SEQUENCE(Local_211[iVar0 /*25*/], uLocal_3685);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
								iLocal_48[iVar0] = 3;
							}
							break;
						
						case 20:
							if (PED::IS_PED_INJURED(Local_211[23 /*25*/]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_211[iVar0 /*25*/], 1);
								TASK::CLEAR_PED_TASKS(Local_211[iVar0 /*25*/]);
								Local_211[iVar0 /*25*/].f_9 = { Local_211[23 /*25*/].f_9 };
								TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_211[iVar0 /*25*/].f_9, PLAYER::PLAYER_PED_ID(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
								TASK::TASK_PERFORM_SEQUENCE(Local_211[iVar0 /*25*/], uLocal_3685);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
								iLocal_48[iVar0] = 3;
							}
							break;
						
						case 21:
							if (PED::IS_PED_INJURED(Local_211[18 /*25*/]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_211[iVar0 /*25*/], 1);
								TASK::CLEAR_PED_TASKS(Local_211[iVar0 /*25*/]);
								Local_211[iVar0 /*25*/].f_9 = { Local_211[18 /*25*/].f_9 };
								TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_211[iVar0 /*25*/].f_9, PLAYER::PLAYER_PED_ID(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
								TASK::TASK_PERFORM_SEQUENCE(Local_211[iVar0 /*25*/], uLocal_3685);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
								iLocal_48[iVar0] = 3;
							}
							break;
						
						case 22:
							if (PED::IS_PED_INJURED(Local_211[20 /*25*/]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_211[iVar0 /*25*/], 1);
								TASK::CLEAR_PED_TASKS(Local_211[iVar0 /*25*/]);
								Local_211[iVar0 /*25*/].f_9 = { 3623.7f, 3739.14f, 27.6917f };
								TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_211[iVar0 /*25*/].f_9, PLAYER::PLAYER_PED_ID(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
								TASK::TASK_PERFORM_SEQUENCE(Local_211[iVar0 /*25*/], uLocal_3685);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
								iLocal_48[iVar0] = 3;
							}
							break;
						
						case 24:
							break;
						
						case 25:
							break;
					}
					break;
				
				case 3:
					switch (iVar0)
					{
						case 4:
						case 11:
							if (ENTITY::IS_ENTITY_AT_COORD(Local_211[iVar0 /*25*/], Local_211[iVar0 /*25*/].f_9, 1.5f, 1.5f, 2f, 0, 1, 0))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_211[iVar0 /*25*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_211[iVar0 /*25*/], Local_211[iVar0 /*25*/].f_9, 10f, 0, 0);
								PED::SET_PED_COMBAT_MOVEMENT(Local_211[iVar0 /*25*/], 2);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_211[iVar0 /*25*/], 50, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_211[iVar0 /*25*/], 200f, 0);
								iLocal_48[iVar0] = 7;
							}
							break;
						
						case 5:
							if (ENTITY::IS_ENTITY_AT_COORD(Local_211[iVar0 /*25*/], Local_211[iVar0 /*25*/].f_9, 1.5f, 1.5f, 1.5f, 0, 1, 0))
							{
								if (PED::IS_PED_INJURED(Local_211[2 /*25*/]) && PED::IS_PED_INJURED(Local_211[3 /*25*/]))
								{
									if (GlobalFunc_100(Local_211[4 /*25*/].f_9, Local_211[3 /*25*/].f_9))
									{
										Local_211[iVar0 /*25*/].f_9 = { Local_211[2 /*25*/].f_9 };
									}
									else
									{
										Local_211[iVar0 /*25*/].f_9 = { Local_211[3 /*25*/].f_9 };
									}
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_211[iVar0 /*25*/], 0);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_211[iVar0 /*25*/], Local_211[iVar0 /*25*/].f_9, 2f, 0, 0);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_211[iVar0 /*25*/], 200f, 0);
									iLocal_48[iVar0] = 4;
								}
								else
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_211[iVar0 /*25*/], 0);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_211[iVar0 /*25*/], Local_211[iVar0 /*25*/].f_9, 2f, 0, 0);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_211[iVar0 /*25*/], 200f, 0);
									if (PED::IS_PED_INJURED(Local_211[2 /*25*/]))
									{
										Local_211[iVar0 /*25*/].f_9 = { Local_211[2 /*25*/].f_9 };
									}
									else
									{
										Local_211[iVar0 /*25*/].f_9 = { Local_211[3 /*25*/].f_9 };
									}
									iLocal_48[iVar0] = 4;
								}
							}
							break;
						
						case 13:
							if (ENTITY::IS_ENTITY_AT_COORD(Local_211[iVar0 /*25*/], Local_211[iVar0 /*25*/].f_9, 1.5f, 1.5f, 2f, 0, 1, 0))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_211[iVar0 /*25*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_211[iVar0 /*25*/], Local_211[iVar0 /*25*/].f_9, 10f, 0, 0);
								PED::SET_PED_COMBAT_MOVEMENT(Local_211[iVar0 /*25*/], 2);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_211[iVar0 /*25*/], 50, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_211[iVar0 /*25*/], 200f, 0);
								iLocal_48[iVar0] = 7;
							}
							break;
						
						case 14:
						case 19:
						case 20:
						case 21:
						case 22:
							if (!ENTITY::IS_ENTITY_AT_COORD(Local_211[iVar0 /*25*/], Local_211[iVar0 /*25*/].f_9, 1.5f, 1.5f, 2f, 0, 1, 0))
							{
								if (func_336(Local_211[iVar0 /*25*/], 242628503, -2, 1))
								{
									TASK::CLEAR_PED_TASKS(Local_211[iVar0 /*25*/]);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_211[iVar0 /*25*/], 1);
									TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_211[iVar0 /*25*/].f_9, PLAYER::PLAYER_PED_ID(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
									TASK::TASK_PERFORM_SEQUENCE(Local_211[iVar0 /*25*/], uLocal_3685);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
								}
							}
							else
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_211[iVar0 /*25*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_211[iVar0 /*25*/], Local_211[iVar0 /*25*/].f_9, 2f, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_211[iVar0 /*25*/], 51, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_211[iVar0 /*25*/], 50, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_211[iVar0 /*25*/], 200f, 0);
								iLocal_48[iVar0] = 7;
							}
							break;
					}
					break;
				
				case 4:
					switch (iVar0)
					{
						case 5:
							if (ENTITY::IS_ENTITY_AT_COORD(Local_211[iVar0 /*25*/], Local_211[iVar0 /*25*/].f_9, 1.5f, 1.5f, 2f, 0, 1, 0))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_211[iVar0 /*25*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_211[iVar0 /*25*/], Local_211[iVar0 /*25*/].f_9, 10f, 0, 0);
								PED::SET_PED_COMBAT_MOVEMENT(Local_211[iVar0 /*25*/], 2);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_211[iVar0 /*25*/], 50, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_211[iVar0 /*25*/], 200f, 0);
								iLocal_48[iVar0] = 7;
							}
							break;
					}
					break;
				
				case 7:
					break;
				}
		}
		iVar0++;
	}
}

int func_760(int iParam0, bool bParam1, bool bParam2)//Position - 0x74748
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= (*iParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar1 /*25*/]))
		{
			if (PED::IS_PED_INJURED((*iParam0)[iVar1 /*25*/]))
			{
				if (bParam1)
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0[iVar1 /*25*/]);
				}
				if (bParam2)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((iParam0[iVar1 /*25*/])->f_1);
				}
				if (HUD::DOES_BLIP_EXIST((iParam0[iVar1 /*25*/])->f_2))
				{
					HUD::REMOVE_BLIP(&((iParam0[iVar1 /*25*/])->f_2));
				}
				iVar0++;
			}
		}
		else if ((iParam0[iVar1 /*25*/])->f_18)
		{
			iVar0++;
		}
		iVar1++;
	}
	if (iVar0 == *iParam0)
	{
		return 1;
	}
	return 0;
}

void func_761()//Position - 0x747E2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Local_987 - 1))
	{
		if (!PED::IS_PED_INJURED(Local_987[iVar0 /*25*/]))
		{
			if (!Local_987[iVar0 /*25*/].f_19)
			{
				if (func_758(Local_987[iVar0 /*25*/], PLAYER::PLAYER_PED_ID()))
				{
					switch (iVar0)
					{
						case 0:
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_987[iVar0 /*25*/], Local_110, 0);
							break;
					}
					PED::SET_PED_CONFIG_FLAG(Local_987[iVar0 /*25*/], 153, 1);
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_987[iVar0 /*25*/].f_15))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_987[iVar0 /*25*/], 8f, 1);
					}
					ENTITY::SET_ENTITY_HEALTH(Local_987[iVar0 /*25*/], 1);
					GlobalFunc_565(326, 1, 0);
					Local_987[iVar0 /*25*/].f_19 = 1;
				}
			}
		}
		iVar0++;
	}
}

void func_762()//Position - 0x7489B
{
	if (!PED::IS_PED_INJURED(Local_987[5 /*25*/]))
	{
		if (iLocal_3235 != 4)
		{
			if (PED::IS_PED_RAGDOLL(Local_987[5 /*25*/]))
			{
				func_764();
				iLocal_3235 = 4;
			}
		}
		switch (iLocal_3235)
		{
			case 0:
				STREAMING::REQUEST_ANIM_DICT("missfbi5ig_21");
				if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_21"))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_110.f_15))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_110, "missfbi5ig_21", "holdup_hallway_steve", 3) || iLocal_3227 >= 12)
						{
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Scientist_Approaching", Local_987[5 /*25*/], "FBI_05_SOUNDS", 0, 0);
							Local_3397 = { 3558.898f, 3677.85f, 27.125f };
							Local_3400 = { 0f, 0f, 170f };
							Local_987[5 /*25*/].f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_987[5 /*25*/], Local_987[5 /*25*/].f_15, "missfbi5ig_21", "holdup_hallway_scientist", 8f, -8f, 5, 0, 1000f, 0);
							OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[16], 0f, 0, 0);
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[16], 0, 0, 1);
							OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[17], 0f, 0, 0);
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[17], 0, 0, 1);
							iLocal_3235++;
						}
					}
				}
				break;
			
			case 1:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_987[5 /*25*/].f_15))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_987[5 /*25*/].f_15) > 0.5f)
					{
						func_763(iLocal_3292[16], iLocal_3292[17], 0, 0.7f);
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_987[5 /*25*/].f_15) > 0.85f)
					{
						Local_987[5 /*25*/].f_2 = GlobalFunc_6797(Local_987[5 /*25*/], 1, 145);
						ENTITY::SET_ENTITY_PROOFS(Local_987[5 /*25*/], 0, 0, 0, 0, 0, 0, 0, 0);
						iLocal_3235++;
					}
				}
				break;
			
			case 2:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_987[5 /*25*/].f_15))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_987[5 /*25*/].f_15) >= 1f)
					{
						Local_3397 = { 3558.898f, 3677.85f, 27.125f };
						Local_3400 = { 0f, 0f, 170f };
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3554.461f, 3680.366f, 27.122f, 3558.623f, 3679.67f, 30.122f, 3.3f, 0, 1, 0))
						{
							Local_987[5 /*25*/].f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_987[5 /*25*/], Local_987[5 /*25*/].f_15, "missfbi5ig_21", "holdup_hallway_saw_player_scientist", 8f, -8f, 1, 0, 8f, 0);
						}
						else
						{
							Local_987[5 /*25*/].f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_987[5 /*25*/], Local_987[5 /*25*/].f_15, "missfbi5ig_21", "holdup_hallway_saw_steve_scientist", 8f, -8f, 1, 0, 8f, 0);
						}
						iLocal_3235++;
					}
				}
				break;
			
			case 3:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_987[5 /*25*/].f_15))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_987[5 /*25*/].f_15) >= 1f)
					{
						Local_3397 = { 3558.898f, 3677.85f, 27.125f };
						Local_3400 = { 0f, 0f, 170f };
						Local_987[5 /*25*/].f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_987[5 /*25*/], Local_987[5 /*25*/].f_15, "missfbi5ig_21", "hands_up_anxious_scientist", 8f, -8f, 1, 0, 8f, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_987[5 /*25*/].f_15, 1);
						iLocal_3235++;
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_2223.x))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_987[5 /*25*/], "missfbi5ig_21", "holdup_hallway_saw_player_scientist", 3))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_987[5 /*25*/].f_15) >= 0.05f)
							{
								func_764();
							}
						}
						else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_987[5 /*25*/], "missfbi5ig_21", "holdup_hallway_saw_steve_scientist", 3))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_987[5 /*25*/].f_15) >= 0.125f)
							{
								func_764();
							}
						}
					}
				}
				else
				{
					iLocal_3235 = 4;
					func_764();
					func_764();
				}
				break;
			
			case 4:
				if (!PED::IS_PED_RAGDOLL(Local_987[5 /*25*/]) && !PED::IS_PED_DEAD_OR_DYING(Local_987[5 /*25*/], 1))
				{
					Local_3397 = { 3558.898f, 3677.85f, 27.125f };
					Local_3400 = { 0f, 0f, 170f };
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_987[5 /*25*/].f_15))
					{
						Local_987[5 /*25*/].f_9 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_21", "hands_up_anxious_scientist", Local_3397, Local_3400, 1f, 2) };
						Local_987[5 /*25*/].f_6 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missfbi5ig_21", "hands_up_anxious_scientist", Local_3397, Local_3400, 1f, 2) };
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_987[5 /*25*/], "missfbi5ig_21", "hands_up_anxious_scientist", 3))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_987[5 /*25*/], "ped", "handsup_base", 3))
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_987[5 /*25*/], "ped", "handsup", 3))
								{
									TASK::TASK_PLAY_ANIM(Local_987[5 /*25*/], "ped", "handsup", 8f, -8f, -1, 49, 0, 0, 0, 0);
								}
								else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_987[5 /*25*/], "ped", "handsup") > 0.99f)
								{
									TASK::TASK_PLAY_ANIM(Local_987[5 /*25*/], "ped", "handsup_base", 1000f, -8f, -1, 49, 0, 0, 0, 0);
								}
							}
						}
						else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_987[5 /*25*/], "missfbi5ig_21", "hands_up_anxious_scientist") > 0.1f)
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_987[5 /*25*/], "ped", "handsup", 3))
							{
								TASK::STOP_ANIM_TASK(Local_987[5 /*25*/], "ped", "handsup", -1056964608);
							}
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_987[5 /*25*/], "ped", "handsup_base", 3))
							{
								TASK::STOP_ANIM_TASK(Local_987[5 /*25*/], "ped", "handsup_base", -1056964608);
							}
						}
						if (!ENTITY::IS_ENTITY_AT_COORD(Local_987[5 /*25*/], Local_987[5 /*25*/].f_9, 0.5f, 0.5f, 2f, 0, 1, 0) || !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_987[5 /*25*/], "missfbi5ig_21", "hands_up_anxious_scientist", 3))
						{
							if (func_336(Local_987[5 /*25*/], 242628503, 1, 1))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_987[5 /*25*/].f_9, 1f, -1, 0.1f, 0, Local_987[5 /*25*/].f_6.f_2);
								TASK::TASK_PLAY_ANIM_ADVANCED(0, "missfbi5ig_21", "hands_up_anxious_scientist", Local_987[5 /*25*/].f_9, Local_987[5 /*25*/].f_6, 8f, -8f, -1, 8193, 0, 2, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
								TASK::TASK_PERFORM_SEQUENCE(Local_987[5 /*25*/], uLocal_3685);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
							}
						}
					}
					if (!iLocal_3124)
					{
						if (PED::IS_PED_INJURED(Local_987[4 /*25*/]))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(Local_987[5 /*25*/], PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_21", "hands_up_shocked_scientist", Local_3397, Local_3400, 1f, 2), 0.5f, 0.5f, 2f, 0, 1, 0))
							{
								Local_987[5 /*25*/].f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_987[5 /*25*/], Local_987[5 /*25*/].f_15, "missfbi5ig_21", "hands_up_shocked_scientist", 4f, -8f, 1, 0, 4f, 0);
							}
							iLocal_3124 = 1;
						}
					}
					else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_987[5 /*25*/].f_15))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_987[5 /*25*/].f_15) >= 1f)
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_987[5 /*25*/], "missfbi5ig_21", "hands_up_shocked_scientist", 3))
							{
								Local_987[5 /*25*/].f_9 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_21", "hands_up_anxious_scientist", Local_3397, Local_3400, 1f, 2) };
								Local_987[5 /*25*/].f_6 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missfbi5ig_21", "hands_up_anxious_scientist", Local_3397, Local_3400, 1f, 2) };
								TASK::TASK_PLAY_ANIM_ADVANCED(Local_987[5 /*25*/], "missfbi5ig_21", "hands_up_anxious_scientist", Local_987[5 /*25*/].f_9, Local_987[5 /*25*/].f_6, 8f, -8f, -1, 8193, 0, 2, 0);
							}
						}
					}
					switch (iLocal_82)
					{
						case 11:
							if (func_314("GET_CHEMS"))
							{
								if (!GlobalFunc_5172(&Local_3049, 0))
								{
									if (GlobalFunc_588(&(iLocal_3324[5]), 30000))
									{
										if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_cower1", 7, 0, 0, 0))
										{
											iLocal_3324[5] = MISC::GET_GAME_TIMER();
										}
									}
								}
							}
							break;
						
						case 13:
							break;
						}
				}
				break;
		}
		if (PED::IS_PED_RAGDOLL(Local_987[5 /*25*/]))
		{
		}
		if (func_758(Local_987[5 /*25*/], Local_110))
		{
			ENTITY::SET_ENTITY_HEALTH(Local_987[5 /*25*/], 2);
		}
	}
	else if (Local_987[5 /*25*/].f_18)
	{
		func_764();
	}
}

int func_763(int iParam0, int iParam1, bool bParam2, float fParam3)//Position - 0x7511A
{
	float fVar0;
	float fVar1;
	
	if (OBJECT::DOOR_SYSTEM_GET_IS_PHYSICS_LOADED(iParam0) && OBJECT::DOOR_SYSTEM_GET_IS_PHYSICS_LOADED(iParam1))
	{
		fVar0 = OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iParam0);
		fVar1 = OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iParam1);
		if (bParam2)
		{
			fVar0 = (fVar0 - (MISC::GET_FRAME_TIME() * fParam3));
			if (fVar0 <= -1f)
			{
				fVar0 = -1f;
			}
			fVar1 = (fVar1 + (MISC::GET_FRAME_TIME() * fParam3));
			if (fVar1 >= 1f)
			{
				fVar1 = 1f;
			}
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fVar0, 0, 0);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 4, 0, 1);
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam1, fVar1, 0, 0);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam1, 4, 0, 1);
			if (fVar0 == -1f && fVar1 == 1f)
			{
				return 1;
			}
		}
		else
		{
			fVar0 = (fVar0 + (MISC::GET_FRAME_TIME() * fParam3));
			if (fVar0 >= 0f)
			{
				fVar0 = 0f;
			}
			fVar1 = (fVar1 - (MISC::GET_FRAME_TIME() * fParam3));
			if (fVar1 <= 0f)
			{
				fVar1 = 0f;
			}
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fVar0, 0, 0);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 4, 0, 1);
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam1, fVar1, 0, 0);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam1, 4, 0, 1);
			if (fVar0 == 0f && fVar1 == 0f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_764()//Position - 0x7521B
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_2223.x))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(Local_2223.x))
		{
			ENTITY::DETACH_ENTITY(Local_2223.x, 1, 1);
		}
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&Local_2223);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2223.f_2);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_2247.x))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(Local_2247.x))
		{
			ENTITY::DETACH_ENTITY(Local_2247.x, 1, 1);
		}
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&Local_2247);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2247.f_2);
	}
}

void func_765()//Position - 0x7527D
{
	if (!PED::IS_PED_INJURED(Local_987[4 /*25*/]))
	{
		switch (iLocal_3234)
		{
			case 0:
				STREAMING::REQUEST_ANIM_DICT("missfbi5ig_20b");
				if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_20b"))
				{
					Local_3397 = { 3558.88f, 3677.87f, 27.125f };
					Local_3400 = { 0f, 0f, 170f };
					Local_987[4 /*25*/].f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_987[4 /*25*/], Local_987[4 /*25*/].f_15, "missfbi5ig_20b", "do_experiment_idle_scientist", 1000f, -8f, 1, 0, 8f, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_987[4 /*25*/].f_15, 1);
					iLocal_3234++;
				}
				break;
			
			case 1:
				if (iLocal_3250 > 22)
				{
					Local_3397 = { 3558.88f, 3677.87f, 27.125f };
					Local_3400 = { 0f, 0f, 170f };
					Local_987[4 /*25*/].f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_987[4 /*25*/], Local_987[4 /*25*/].f_15, "missfbi5ig_20b", "ask_open_door_scientist", 8f, -8f, 1, 0, 8f, 0);
					iLocal_3234++;
				}
				break;
			
			case 2:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_987[4 /*25*/].f_15))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_987[4 /*25*/].f_15) >= 1f)
					{
						Local_3397 = { 3558.898f, 3677.85f, 27.125f };
						Local_3400 = { 0f, 0f, 170f };
						Local_987[4 /*25*/].f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_987[4 /*25*/], Local_987[4 /*25*/].f_15, "missfbi5ig_20b", "hands_up_scientist", 8f, -8f, 1, 0, 8f, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_987[4 /*25*/].f_15, 1);
						iLocal_3234++;
					}
				}
				break;
			
			case 3:
				STREAMING::REQUEST_ANIM_DICT("missfbi5ig_22");
				if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_22"))
				{
					if (func_314("fbi5a_dia21") || func_314("fbi5a_dia21b"))
					{
						Local_3397 = { 3558.898f, 3677.85f, 27.125f };
						Local_3400 = { 0f, 0f, 170f };
						Local_987[4 /*25*/].f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_987[4 /*25*/], Local_987[4 /*25*/].f_15, "missfbi5ig_22", "aim_scientist_walkout_scientist", 8f, -8f, 1, 0, 8f, 0);
						iLocal_3234++;
					}
				}
				break;
			
			case 4:
				if (!func_314("fbi5a_jab"))
				{
					if (func_314("fbi5a_dia21") || func_314("fbi5a_dia21b"))
					{
						if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_jab", 7, 0, 0, 0))
						{
							func_298("fbi5a_jab", 1);
						}
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_987[4 /*25*/].f_15))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_987[4 /*25*/].f_15) > 0.4f)
					{
						func_767(joaat("v_ilev_bl_doorsl_r"), 3557.6f, 3669.2f, 27.1f, 1, 1, 1065353216);
						Local_2151.f_1 = GlobalFunc_6799(Local_2151);
						HUD::SET_BLIP_SCALE(Local_2151.f_1, 1f);
						ENTITY::SET_ENTITY_PROOFS(Local_987[4 /*25*/], 0, 0, 0, 0, 0, 0, 0, 0);
						iLocal_3234++;
					}
				}
				break;
			
			case 5:
				if (func_766(iLocal_3292[13], 1, 1065353216))
				{
					iLocal_3234++;
				}
				break;
			
			case 6:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_987[4 /*25*/].f_15))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_987[4 /*25*/].f_15) >= 1f)
					{
						Local_3397 = { 3558.898f, 3677.85f, 27.125f };
						Local_3400 = { 0f, 0f, 170f };
						Local_987[4 /*25*/].f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_987[4 /*25*/], Local_987[4 /*25*/].f_15, "missfbi5ig_22", "hands_up_anxious_scientist", 1000f, -8f, 1, 0, 1000f, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_987[4 /*25*/].f_15, 1);
						iLocal_3234++;
					}
				}
				break;
			
			case 7:
				if (!PED::IS_PED_RAGDOLL(Local_987[4 /*25*/]) && !PED::IS_PED_DEAD_OR_DYING(Local_987[4 /*25*/], 1))
				{
					Local_3397 = { 3558.898f, 3677.85f, 27.125f };
					Local_3400 = { 0f, 0f, 170f };
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_987[4 /*25*/].f_15))
					{
						Local_987[4 /*25*/].f_9 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_22", "hands_up_anxious_scientist", Local_3397, Local_3400, 1f, 2) };
						Local_987[4 /*25*/].f_6 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missfbi5ig_22", "hands_up_anxious_scientist", Local_3397, Local_3400, 1f, 2) };
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_987[4 /*25*/], "missfbi5ig_22", "hands_up_anxious_scientist", 3))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_987[4 /*25*/], "ped", "handsup_base", 3))
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_987[4 /*25*/], "ped", "handsup", 3))
								{
									TASK::TASK_PLAY_ANIM(Local_987[4 /*25*/], "ped", "handsup", 8f, -8f, -1, 49, 0, 0, 0, 0);
								}
								else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_987[4 /*25*/], "ped", "handsup") > 0.99f)
								{
									TASK::TASK_PLAY_ANIM(Local_987[4 /*25*/], "ped", "handsup_base", 1000f, -8f, -1, 49, 0, 0, 0, 0);
								}
							}
						}
						else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_987[4 /*25*/], "missfbi5ig_22", "hands_up_anxious_scientist") > 0.1f)
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_987[4 /*25*/], "ped", "handsup", 3))
							{
								TASK::STOP_ANIM_TASK(Local_987[4 /*25*/], "ped", "handsup", -1056964608);
							}
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_987[4 /*25*/], "ped", "handsup_base", 3))
							{
								TASK::STOP_ANIM_TASK(Local_987[4 /*25*/], "ped", "handsup_base", -1056964608);
							}
						}
						if (!ENTITY::IS_ENTITY_AT_COORD(Local_987[4 /*25*/], Local_987[4 /*25*/].f_9, 0.5f, 0.5f, 2f, 0, 1, 0) || !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_987[4 /*25*/], "missfbi5ig_22", "hands_up_anxious_scientist", 3))
						{
							if (func_336(Local_987[4 /*25*/], 242628503, 1, 1))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_987[4 /*25*/].f_9, 1f, -1, 0.1f, 0, Local_987[4 /*25*/].f_6.f_2);
								TASK::TASK_PLAY_ANIM_ADVANCED(0, "missfbi5ig_22", "hands_up_anxious_scientist", Local_987[4 /*25*/].f_9, Local_987[4 /*25*/].f_6, 8f, -8f, -1, 8193, 0, 2, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
								TASK::TASK_PERFORM_SEQUENCE(Local_987[4 /*25*/], uLocal_3685);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
							}
						}
					}
					if (!iLocal_3125)
					{
						if (PED::IS_PED_INJURED(Local_987[5 /*25*/]))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(Local_987[4 /*25*/], PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_22", "hands_up_shocked_scientist", Local_3397, Local_3400, 1f, 2), 0.5f, 0.5f, 2f, 0, 1, 0))
							{
								Local_987[4 /*25*/].f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_987[4 /*25*/], Local_987[4 /*25*/].f_15, "missfbi5ig_22", "hands_up_shocked_scientist", 4f, -8f, 1, 0, 4f, 0);
								iLocal_3234++;
							}
							iLocal_3125 = 1;
						}
					}
				}
				switch (iLocal_82)
				{
					case 11:
						if (func_314("GET_CHEMS"))
						{
							if (!GlobalFunc_5172(&Local_3049, 0))
							{
								if (GlobalFunc_588(&(iLocal_3324[4]), 15000))
								{
									if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_cower6", 7, 0, 0, 0))
									{
										iLocal_3324[4] = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
						break;
					
					case 13:
						break;
				}
				break;
			
			case 8:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_987[4 /*25*/].f_15))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_987[4 /*25*/].f_15) >= 1f)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_987[4 /*25*/], "missfbi5ig_22", "hands_up_shocked_scientist", 3))
						{
							Local_987[4 /*25*/].f_9 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_22", "hands_up_anxious_scientist", Local_3397, Local_3400, 1f, 2) };
							Local_987[4 /*25*/].f_6 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missfbi5ig_22", "hands_up_anxious_scientist", Local_3397, Local_3400, 1f, 2) };
							TASK::TASK_PLAY_ANIM_ADVANCED(Local_987[4 /*25*/], "missfbi5ig_22", "hands_up_anxious_scientist", Local_987[4 /*25*/].f_9, Local_987[4 /*25*/].f_6, 8f, -8f, -1, 8193, 0, 2, 0);
							iLocal_3234 = 7;
						}
					}
				}
				else
				{
					iLocal_3234 = 7;
				}
				break;
		}
		if (PED::IS_PED_RAGDOLL(Local_987[4 /*25*/]))
		{
		}
		if (func_758(Local_987[4 /*25*/], Local_85))
		{
			ENTITY::SET_ENTITY_HEALTH(Local_987[4 /*25*/], 2);
		}
	}
	else if (Local_987[4 /*25*/].f_18)
	{
		if (iLocal_82 == 11)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_2151))
			{
				if (func_766(iLocal_3292[13], 1, 1065353216))
				{
					if (!HUD::DOES_BLIP_EXIST(Local_2151.f_1))
					{
						Local_2151.f_1 = GlobalFunc_6799(Local_2151);
						HUD::SET_BLIP_SCALE(Local_2151.f_1, 1f);
					}
				}
			}
		}
	}
}

int func_766(int iParam0, bool bParam1, float fParam2)//Position - 0x75B6C
{
	float fVar0;
	
	if (OBJECT::DOOR_SYSTEM_GET_IS_PHYSICS_LOADED(iParam0))
	{
		fVar0 = OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iParam0);
		if (bParam1)
		{
			fVar0 = (fVar0 + (MISC::GET_FRAME_TIME() * fParam2));
			if (fVar0 >= 1f)
			{
				fVar0 = 1f;
			}
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fVar0, 0, 0);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 4, 0, 1);
			if (fVar0 == 1f)
			{
				return 1;
			}
		}
		else
		{
			fVar0 = (fVar0 - (MISC::GET_FRAME_TIME() * fParam2));
			if (fVar0 <= 0f)
			{
				fVar0 = 0f;
			}
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fVar0, 0, 0);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 4, 0, 1);
			if (fVar0 == 0f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_767(int iParam0, struct<3> Param1, bool bParam4, bool bParam5, float fParam6)//Position - 0x75BF6
{
	var uVar0;
	float fVar1;
	
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Param1, 1f, iParam0, 1))
	{
		OBJECT::GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(iParam0, Param1, &uVar0, &fVar1);
		if (bParam4)
		{
			if (bParam5)
			{
				fVar1 = (fVar1 + (MISC::GET_FRAME_TIME() * fParam6));
				if (fVar1 >= 1f)
				{
					fVar1 = 1f;
				}
			}
			else
			{
				fVar1 = (fVar1 - (MISC::GET_FRAME_TIME() * fParam6));
				if (fVar1 <= -1f)
				{
					fVar1 = -1f;
				}
			}
		}
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(iParam0, Param1, 1, fVar1, 0);
		if (bParam5)
		{
			if (fVar1 >= 1f)
			{
				return 1;
			}
		}
		else if (fVar1 <= -1f)
		{
			return 1;
		}
	}
	return 0;
}

void func_768()//Position - 0x75C81
{
	switch (iLocal_3245)
	{
		case 0:
			iLocal_3245++;
			break;
		
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3556.582f, 3668.987f, 27.128f, 3556.929f, 3670.957f, 30.128f, 1.5f, 0, 1, 0))
			{
				iLocal_3245++;
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(Local_987[4 /*25*/]) && !PED::IS_PED_INJURED(Local_987[5 /*25*/]))
			{
				if (!func_314("fbi5a_dia25c"))
				{
					if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia25b", 7, 0, 0, 0))
					{
						func_298("fbi5a_dia25b", 1);
						iLocal_3237 = MISC::GET_GAME_TIMER();
						iLocal_3245++;
					}
				}
			}
			if ((PED::IS_PED_INJURED(Local_987[4 /*25*/]) && !PED::IS_PED_INJURED(Local_987[5 /*25*/])) || (PED::IS_PED_INJURED(Local_987[5 /*25*/]) && !PED::IS_PED_INJURED(Local_987[4 /*25*/])))
			{
				if (!func_314("fbi5a_dia25c"))
				{
					if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia25c", 7, 0, 0, 0))
					{
						RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
						func_298("fbi5a_dia25c", 1);
						iLocal_3237 = MISC::GET_GAME_TIMER();
						iLocal_3245++;
					}
				}
			}
			if (PED::IS_PED_INJURED(Local_987[4 /*25*/]) && PED::IS_PED_INJURED(Local_987[5 /*25*/]))
			{
				iLocal_3245++;
			}
			else if (GlobalFunc_588(&iLocal_3237, 7000))
			{
				if (!GlobalFunc_5172(&Local_3049, 0))
				{
					switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
					{
						case 0:
							if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dcome", 7, 0, 0, 0))
							{
								iLocal_3237 = MISC::GET_GAME_TIMER();
							}
							break;
						
						case 1:
							if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_scome", 7, 0, 0, 0))
							{
								iLocal_3237 = MISC::GET_GAME_TIMER();
							}
							break;
						}
					}
			}
			break;
		
		case 3:
			if (PED::IS_PED_INJURED(Local_987[4 /*25*/]) && PED::IS_PED_INJURED(Local_987[5 /*25*/]))
			{
				if (!GlobalFunc_5172(&Local_3049, 0))
				{
					if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia27", 7, 0, 0, 0))
					{
						iLocal_3245++;
					}
				}
			}
			break;
		
		case 4:
			if (!GlobalFunc_5172(&Local_3049, 0))
			{
				if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "FBI5A_al", 7, 0, 0, 0))
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_5_GET_TO_NERVE_TOXIN"))
					{
						AUDIO::STOP_AUDIO_SCENE("FBI_5_GET_TO_NERVE_TOXIN");
					}
					AUDIO::START_AUDIO_SCENE("FBI_5_SHOOTOUT_START");
					iLocal_3245++;
				}
			}
			break;
		
		case 5:
			if (!GlobalFunc_5172(&Local_3049, 0))
			{
				if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia29", 7, 0, 0, 0))
				{
					AUDIO::START_ALARM("FIB_05_BIOTECH_LAB_ALARMS", 0);
					func_298("fbi5a_dia29", 1);
					iLocal_3237 = MISC::GET_GAME_TIMER();
					iLocal_3245++;
				}
			}
			break;
		
		case 6:
			if (!Global_86823)
			{
				if (GlobalFunc_588(&iLocal_3237, 1500))
				{
					if (PAD::_IS_USING_KEYBOARD(0))
					{
						GlobalFunc_159("fbi5a_help_3_KM", -1);
					}
					else
					{
						GlobalFunc_159("fbi5a_help_3", -1);
					}
					Global_86823 = 1;
				}
			}
			if (Local_211[0 /*25*/].f_18)
			{
				if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia28", 8, 0, 0, 0))
				{
					iLocal_3245++;
				}
			}
			break;
		
		case 7:
			if (!GlobalFunc_5172(&Local_3049, 0))
			{
				GlobalFunc_164("FHT_SEC1", 5000, 1);
				iLocal_3245 = 22;
			}
			break;
		
		case 8:
			break;
		
		case 9:
			break;
		
		case 22:
			break;
	}
	if (Local_211[0 /*25*/].f_18)
	{
		if (!GlobalFunc_5172(&Local_3049, 0))
		{
			if (GlobalFunc_588(&iLocal_3237, 10000))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					if (!func_769())
					{
						if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia34", 6, 0, 0, 0))
						{
							iLocal_3237 = MISC::GET_GAME_TIMER();
						}
					}
				}
				else if (PED::IS_PED_SHOOTING(Local_85))
				{
					if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia33", 6, 0, 0, 0))
					{
						iLocal_3237 = MISC::GET_GAME_TIMER();
					}
				}
				else if (PED::IS_PED_SHOOTING(Local_110))
				{
					if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia32", 6, 0, 0, 0))
					{
						iLocal_3237 = MISC::GET_GAME_TIMER();
					}
				}
			}
		}
	}
}

int func_769()//Position - 0x760B3
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_1163 - 1))
	{
		if (!PED::IS_PED_INJURED(Local_1163[iVar0 /*25*/]))
		{
			if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_1163[iVar0 /*25*/], 1), 2f, 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_770()//Position - 0x760FD
{
	int iVar0;
	
	switch (iLocal_3231)
	{
		case 0:
			func_760(&Local_987, 1, 1);
			STREAMING::REQUEST_ANIM_DICT("missfbi5misc");
			if (PED::IS_PED_INJURED(Local_987[4 /*25*/]) && PED::IS_PED_INJURED(Local_987[5 /*25*/]))
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[16], 0f, 0, 0);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[16], 0, 0, 1);
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[17], 0f, 0, 0);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[17], 0, 0, 1);
				GlobalFunc_200(&uLocal_3788, 5);
				GlobalFunc_200(&uLocal_3788, 6);
				iLocal_3223 = MISC::GET_GAME_TIMER();
				iLocal_3231++;
			}
			break;
		
		case 1:
			iLocal_3231++;
			break;
		
		case 2:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3564.598f, 3684.717f, 27.122f, 3563.824f, 3680.284f, 30.122f, 7.7f, 0, 1, 0))
			{
				func_541(&(Local_211[0 /*25*/]), 0);
				func_541(&(Local_211[1 /*25*/]), 0);
				iLocal_3231++;
			}
			break;
		
		case 3:
			func_760(&Local_211, 1, 0);
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3562.023f, 3693.149f, 27.134f, 3569.504f, 3691.803f, 30.128f, 2.5f, 0, 1, 0))
			{
				iVar0 = 2;
				while (iVar0 <= 5)
				{
					func_541(&(Local_211[iVar0 /*25*/]), 0);
					iVar0++;
				}
				Local_211[6 /*25*/].f_18 = 1;
				iLocal_3231++;
			}
			break;
		
		case 4:
			func_760(&Local_211, 1, 0);
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3581.554f, 3695.001f, 26.17f, 3578.904f, 3688.198f, 30.167f, 1.5f, 0, 1, 0))
			{
				iVar0 = 7;
				while (iVar0 <= 7)
				{
					func_541(&(Local_211[iVar0 /*25*/]), 0);
					iVar0++;
				}
				Local_211[8 /*25*/].f_18 = 1;
				iLocal_3231++;
			}
			break;
		
		case 5:
			func_760(&Local_211, 1, 0);
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3596.862f, 3691.483f, 27.829f, 3599.352f, 3689.805f, 30.827f, 2.1f, 0, 1, 0))
			{
				iVar0 = 0;
				while (iVar0 <= (Local_987 - 1))
				{
					PED::DELETE_PED(&(Local_987[iVar0 /*25*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_987[iVar0 /*25*/].f_1);
					iVar0++;
				}
				iVar0 = 9;
				while (iVar0 <= 14)
				{
					if (iVar0 != 12 && iVar0 != 14)
					{
						func_541(&(Local_211[iVar0 /*25*/]), 0);
					}
					else
					{
						Local_211[iVar0 /*25*/].f_18 = 1;
					}
					iVar0++;
				}
				iLocal_3231++;
			}
			break;
		
		case 6:
			func_760(&Local_211, 1, 0);
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3587.558f, 3714.437f, 28.697f, 3597.201f, 3712.683f, 32.094f, 2f, 0, 1, 0))
			{
				iVar0 = 15;
				while (iVar0 <= 16)
				{
					func_541(&(Local_211[iVar0 /*25*/]), 0);
					iVar0++;
				}
				iLocal_3231++;
			}
			break;
		
		case 7:
			func_760(&Local_211, 1, 0);
			STREAMING::REQUEST_MODEL(Local_211[19 /*25*/].f_1);
			STREAMING::REQUEST_MODEL(Local_2464[0 /*15*/].f_1);
			if ((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3604.85f, 3719.574f, 28.69f, 3600.483f, 3722.665f, 31.69f, 7.2f, 0, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_85, 3604.618f, 3718.985f, 28.695f, 3600.785f, 3721.701f, 30.7f, 8f, 0, 1, 0)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_110, 3604.618f, 3718.985f, 28.695f, 3600.785f, 3721.701f, 30.7f, 8f, 0, 1, 0)) && STREAMING::HAS_MODEL_LOADED(Local_211[19 /*25*/].f_1)) && STREAMING::HAS_MODEL_LOADED(Local_2464[0 /*15*/].f_1))
			{
				if (func_340(&Local_211, 16))
				{
					iLocal_3613[1] = OBJECT::CREATE_OBJECT(joaat("prop_boxpile_02b"), 3623.334f, 3738.386f, 27.6897f, 1, 1, 0);
					ENTITY::SET_ENTITY_HEADING(iLocal_3613[1], 150.2056f);
					iLocal_3231++;
				}
			}
			break;
		
		case 8:
			func_760(&Local_211, 1, 0);
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3600.638f, 3705.292f, 28.695f, 3597.794f, 3701.179f, 32.295f, 2.6f, 0, 1, 0))
			{
				if (func_772())
				{
					Local_211[17 /*25*/].f_1 = Local_211[22 /*25*/].f_1;
					Local_211[18 /*25*/].f_1 = Local_211[22 /*25*/].f_1;
				}
				func_541(&(Local_211[17 /*25*/]), 1);
				func_541(&(Local_211[18 /*25*/]), 1);
				Local_2464[0 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_2464[0 /*15*/].f_1, Local_2464[0 /*15*/].f_3, Local_2464[0 /*15*/].f_6, 1, 1);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2464[0 /*15*/], 3);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_2464[0 /*15*/], 0);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_2464[0 /*15*/], 0);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2464[0 /*15*/], Local_2464[0 /*15*/].f_13, "lkfbi5a", 1);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_2464[0 /*15*/], (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(Local_2464[0 /*15*/].f_13, "lkfbi5a") - 2000f));
				func_771(&(Local_211[19 /*25*/]), &(Local_2464[0 /*15*/]), -1, 1);
				func_771(&(Local_211[20 /*25*/]), &(Local_2464[0 /*15*/]), 0, 1);
				func_771(&(Local_211[23 /*25*/]), &(Local_2464[0 /*15*/]), 8, 1);
				func_541(&(Local_211[21 /*25*/]), 1);
				func_541(&(Local_211[22 /*25*/]), 1);
				func_541(&(Local_211[24 /*25*/]), 1);
				func_541(&(Local_211[25 /*25*/]), 1);
				Local_211[26 /*25*/].f_18 = 1;
				Local_211[27 /*25*/].f_18 = 1;
				iLocal_3231++;
			}
			break;
		
		case 9:
			func_760(&Local_211, 1, 0);
			if (func_340(&Local_211, 26))
			{
				RECORDING::_0x293220DA1B46CEBC(5f, 2f, 3);
				Local_211[28 /*25*/].f_18 = 1;
				Local_211[29 /*25*/].f_18 = 1;
				Local_211[30 /*25*/].f_18 = 1;
				iLocal_3245 = 8;
				iLocal_3231++;
			}
			break;
		
		case 10:
			if (func_760(&Local_211, 1, 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2151))
				{
					OBJECT::DELETE_OBJECT(&Local_2151);
				}
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&Local_2151);
				iVar0 = 0;
				while (iVar0 <= (Local_135 - 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_135[iVar0 /*25*/]))
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_135[iVar0 /*25*/]));
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_135[iVar0 /*25*/].f_1);
					iVar0++;
				}
				STREAMING::REMOVE_ANIM_DICT("missfbi5ig_20b");
				STREAMING::REMOVE_ANIM_DICT("missfbi5ig_21");
				STREAMING::REMOVE_ANIM_DICT("missfbi5ig_22");
				STREAMING::REMOVE_ANIM_DICT("missfbi5ig_23");
				STREAMING::REMOVE_ANIM_DICT("missfbi5ig_27");
				STREAMING::REMOVE_ANIM_DICT("missfbi5ig_28");
				STREAMING::REMOVE_ANIM_DICT("missfbi5ig_30");
				STREAMING::REMOVE_ANIM_DICT("missfbi5misc");
				AUDIO::STOP_STREAM();
				return 1;
			}
			break;
		
		case 11:
			if (func_760(&Local_211, 1, 0))
			{
				MISC::SET_INSTANCE_PRIORITY_HINT(0);
				return 1;
			}
			break;
	}
	return 0;
}

void func_771(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x767C1
{
	*uParam0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam1, 26, uParam0->f_1, iParam2, 1, 1);
	PED::SET_PED_RANDOM_COMPONENT_VARIATION(*uParam0, 0);
	PED::SET_PED_DIES_WHEN_INJURED(*uParam0, 1);
	PED::SET_PED_AS_ENEMY(*uParam0, 1);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam0, 1, 0);
	PED::SET_PED_KEEP_TASK(*uParam0, 1);
	PED::SET_PED_MONEY(*uParam0, 0);
	WEAPON::GIVE_WEAPON_TO_PED(*uParam0, uParam0->f_20, -1, 1, 1);
	WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, uParam0->f_20, 1);
	ENTITY::SET_ENTITY_HEALTH(*uParam0, uParam0->f_13);
	PED::SET_PED_MAX_HEALTH(*uParam0, uParam0->f_13);
	if (uParam0->f_1 == joaat("s_m_y_marine_03"))
	{
		if (PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 2) == 3 || PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 2) == 2)
		{
			ENTITY::SET_ENTITY_PROOFS(*uParam0, 0, 0, 0, 0, 0, 0, 0, 1);
		}
	}
	if (uParam0->f_16)
	{
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*uParam0, 1);
	}
	if (uParam0->f_17)
	{
		PED::ADD_ARMOUR_TO_PED(*uParam0, 100);
	}
	uParam0->f_18 = 1;
	PED::SET_PED_NAME_DEBUG(*uParam0, &(uParam0->f_21));
	PED::SET_PED_HEARING_RANGE(*uParam0, 250f);
	uParam0->f_2 = GlobalFunc_6797(*uParam0, 1, 145);
	HUD::SET_BLIP_DISPLAY(uParam0->f_2, 2);
	PED::SET_PED_CAN_EVASIVE_DIVE(*uParam0, 1);
	func_544(uParam0, 1);
	PED::SET_PED_ACCURACY(*uParam0, uParam0->f_14);
	if (bParam3)
	{
		PED::SET_PED_LOD_MULTIPLIER(*uParam0, 2f);
	}
}

int func_772()//Position - 0x768EF
{
	int iVar0;
	
	if (iLocal_3127)
	{
		if (!iLocal_3095)
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
				{
					if (iVar0 != joaat("weapon_stungun"))
					{
						iLocal_3095 = 1;
						return 1;
					}
				}
			}
		}
		else
		{
			if (!func_314("fbi5a_usegun"))
			{
				if (!GlobalFunc_5172(&Local_3049, 0))
				{
					if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_usegun", 7, 0, 0, 0))
					{
						func_298("fbi5a_usegun", 1);
					}
				}
			}
			return 1;
		}
	}
	return 0;
}


void func_774()//Position - 0x7698F
{
	PED::SET_PED_RESET_FLAG(Local_85, 227, 1);
	PED::SET_PED_RESET_FLAG(Local_110, 227, 1);
}

void func_775()//Position - 0x769A9
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	
	RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	if (iLocal_84 == 0)
	{
		STREAMING::REQUEST_ANIM_DICT("missfbi5ig_21");
		STREAMING::REQUEST_ANIM_DICT("missfbi5ig_22");
		STREAMING::REQUEST_ANIM_DICT("missfbi5ig_23");
		if ((STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_21") && STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_22")) && STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_23"))
		{
			iLocal_84 = 1;
		}
	}
	if (iLocal_84 == 1)
	{
		if (GlobalFunc_4926(1000))
		{
			RECORDING::_0x13B350B8AD0EEE10();
			iLocal_3221 = 22;
		}
		switch (iLocal_3221)
		{
			case 0:
				if (func_485(0, 1, 1, 0))
				{
					func_744();
					MISC::CLEAR_AREA(3551.58f, 3658.52f, 27.125f, 100f, 1, 0, 0, 0);
					if (HUD::DOES_BLIP_EXIST(Local_2151.f_1))
					{
						HUD::REMOVE_BLIP(&(Local_2151.f_1));
					}
					func_298("fbi5achem0", 1);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					Local_3397 = { 3558.898f, 3677.85f, 27.125f };
					Local_3400 = { 0f, 0f, 170f };
					iLocal_3251 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_3251, "missfbi5ig_22", "take_chemical_player0", 1000f, -8f, 1, 0, 1000f, 2);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_2151, iLocal_3251, "take_chemical_vial", "missfbi5ig_22", 1000f, -8f, 0, 1148846080);
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_2151);
					ENTITY::DETACH_ENTITY(Local_2175.x, 1, 1);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_2175.x, iLocal_3251, "take_chemical_tube", "missfbi5ig_22", 1000f, -8f, 0, 1148846080);
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_2175.x);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_85);
					Local_85.f_3 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_23", "run_through_door_dave", 3558.898f, 3677.85f, 27.125f, 0f, 0f, 170f, 0f, 2) };
					Local_85.f_3.f_2 = 27.12f;
					ENTITY::SET_ENTITY_COORDS(Local_85, Local_85.f_3, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_85, 86.1642f);
					WEAPON::SET_CURRENT_PED_WEAPON(Local_85, Local_85.f_20, 0);
					if (!PED::IS_PED_INJURED(Local_987[4 /*25*/]))
					{
						TASK::TASK_AIM_GUN_AT_ENTITY(Local_85, Local_987[4 /*25*/], -1, 1);
					}
					else if (!PED::IS_PED_INJURED(Local_987[5 /*25*/]))
					{
						TASK::TASK_AIM_GUN_AT_ENTITY(Local_85, Local_987[5 /*25*/], -1, 1);
					}
					else
					{
						TASK::TASK_AIM_GUN_AT_COORD(Local_85, 3553.9f, 3668.7f, 28.8f, -1, 1, 0);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_85, 1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_85, 0, 0);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_110);
					Local_110.f_3 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_23", "run_through_door_steve", 3558.898f, 3677.85f, 27.125f, 0f, 0f, 170f, 0f, 2) };
					Local_110.f_3.f_2 = 27.12f;
					ENTITY::SET_ENTITY_COORDS(Local_110, Local_110.f_3, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_110, 86.1642f);
					if (!PED::IS_PED_INJURED(Local_987[5 /*25*/]))
					{
						TASK::TASK_AIM_GUN_AT_ENTITY(Local_110, Local_987[5 /*25*/], -1, 1);
					}
					else if (!PED::IS_PED_INJURED(Local_987[4 /*25*/]))
					{
						TASK::TASK_AIM_GUN_AT_ENTITY(Local_110, Local_987[4 /*25*/], -1, 1);
					}
					else
					{
						TASK::TASK_AIM_GUN_AT_COORD(Local_110, 3553.9f, 3668.7f, 28.8f, -1, 1, 0);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_110, 1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_110, 0, 0);
					if (!PED::IS_PED_INJURED(Local_987[4 /*25*/]))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_987[4 /*25*/]);
						Local_3397 = { 3559.398f, 3676.75f, 27.125f };
						Local_3400 = { 0f, 0f, 174f };
						Local_987[4 /*25*/].f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_987[4 /*25*/], Local_987[4 /*25*/].f_15, "missfbi5ig_22", "hands_up_anxious_scientist", 1000f, -8f, 1, 0, 8f, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_987[4 /*25*/].f_15, 1);
						iLocal_3234 = 7;
					}
					if (!PED::IS_PED_INJURED(Local_987[5 /*25*/]))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_987[5 /*25*/]);
						Local_3397 = { 3558.898f, 3677.85f, 27.125f };
						Local_3400 = { 0f, 0f, 170f };
						Local_987[5 /*25*/].f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_987[5 /*25*/], Local_987[5 /*25*/].f_15, "missfbi5ig_21", "hands_up_anxious_scientist", 1000f, -8f, 1, 0, 8f, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_987[5 /*25*/].f_15, 1);
						iLocal_3235 = 3;
					}
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[14], -1f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[14], 4, 0, 1);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[15], 1f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[15], 4, 0, 1);
					Local_3397 = { 3558.898f, 3677.85f, 27.125f };
					Local_3400 = { 0f, 0f, 170f };
					uLocal_3603 = CAM::CREATE_CAMERA(964613260, 1);
					CAM::PLAY_CAM_ANIM(uLocal_3603, "take_chemical_cam", "missfbi5ig_22", Local_3397, Local_3400, 0, 2);
					CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
					RECORDING::_0x48621C9FCA3EBD28(4);
					func_776();
					GlobalFunc_11046(3, "start of shootout", 0, 0, 0, 1);
					iLocal_3221++;
				}
				break;
			
			case 1:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3251))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3251) > 0.15f)
					{
						GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia25", 7, 0, 0, 0);
						iLocal_3221++;
					}
				}
				break;
			
			case 2:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3251))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3251) >= 1f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_2151))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_2151, -1000f, 1);
							ENTITY::PLAY_ENTITY_ANIM(Local_2151, "take_chemical_vial", "missfbi5ig_22", 1000f, 0, 1, 0, 1f, 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_2175.x))
						{
							OBJECT::DELETE_OBJECT(&Local_2175);
						}
						func_473(1, 0, 1, 0f, 0f, 0, 0, 0, 1, 1, 1);
						CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
						PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -633298724, 0, 0, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
						RECORDING::_0x81CBAE94390F9F89();
						iLocal_82 = 13;
						iLocal_84 = 0;
					}
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
					Var3 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missfbi5ig_22", "take_chemical_player0", 3558.898f, 3677.85f, 27.125f, 0f, 0f, 170f, 1f, 2) };
					Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_22", "take_chemical_player0", 3558.898f, 3677.85f, 27.125f, 0f, 0f, 170f, 1f, 2) };
					Var0.f_2 = (Var0.f_2 - 1f);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Var3.f_2);
					PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -633298724, 0, 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(Local_2151))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_2151, -1000f, 1);
						ENTITY::PLAY_ENTITY_ANIM(Local_2151, "take_chemical_vial", "missfbi5ig_22", 1000f, 0, 1, 0, 1f, 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_2175.x))
					{
						OBJECT::DELETE_OBJECT(&Local_2175);
					}
					func_459(0, 0, 0, 1, 800);
					RECORDING::_0x81CBAE94390F9F89();
					iLocal_82 = 13;
					iLocal_84 = 0;
				}
				break;
			}
	}
	if (iLocal_84 == 2)
	{
		RECORDING::_0x81CBAE94390F9F89();
		iLocal_82 = 13;
		iLocal_84 = 0;
	}
	if (iLocal_84 == 3)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(800);
			}
		}
		else
		{
			RECORDING::_0x13B350B8AD0EEE10();
			Var9 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missfbi5ig_22", "take_chemical_player0", 3558.898f, 3677.85f, 27.125f, 0f, 0f, 170f, 1f, 2) };
			Var6 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_22", "take_chemical_player0", 3558.898f, 3677.85f, 27.125f, 0f, 0f, 170f, 1f, 2) };
			Var6.f_2 = (Var6.f_2 - 1f);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var6, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Var9.f_2);
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -633298724, 0, 0, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_2151))
			{
				OBJECT::DELETE_OBJECT(&Local_2151);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_2175.x))
			{
				OBJECT::DELETE_OBJECT(&Local_2175);
			}
			func_459(1, 0f, 0f, 0, 800);
			iLocal_84 = 2;
		}
	}
}

void func_776()//Position - 0x771B0
{
	if (!PED::IS_PED_INJURED(Local_987[4 /*25*/]))
	{
		Global_86821 = 1;
	}
	else
	{
		Global_86821 = 0;
	}
	if (!PED::IS_PED_INJURED(Local_987[5 /*25*/]))
	{
		Global_86822 = 1;
	}
	else
	{
		Global_86822 = 0;
	}
}

void func_777()//Position - 0x771EE
{
	int iVar0;
	
	RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	func_774();
	if (iLocal_84 == 0)
	{
		func_804();
		if (((((((((((((((((STREAMING::HAS_MODEL_LOADED(Local_2223.f_2) && STREAMING::HAS_MODEL_LOADED(Local_2247.f_2)) && STREAMING::HAS_MODEL_LOADED(Local_2151.f_2)) && STREAMING::HAS_MODEL_LOADED(Local_2175.f_2)) && STREAMING::HAS_MODEL_LOADED(Local_1958.f_2)) && STREAMING::HAS_MODEL_LOADED(Local_2006.f_2)) && STREAMING::HAS_MODEL_LOADED(Local_2030.f_2)) && STREAMING::HAS_MODEL_LOADED(Local_1982.f_2)) && STREAMING::HAS_COLLISION_FOR_MODEL_LOADED(Local_1982.f_2)) && STREAMING::HAS_MODEL_LOADED(Local_2440.f_2)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_boxpile_02b"))) && STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_15")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_2464[0 /*15*/].f_13, "lkfbi5a")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_2464[1 /*15*/].f_13, "lkfbi5a")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_2464[2 /*15*/].f_13, "lkfbi5a")) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\FBI_05_GRAB_TOXIN", 0)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("fbi5_dave_1")) && AUDIO::PREPARE_MUSIC_EVENT("FBI5A_LIFT_EXIT"))
		{
			func_744();
			MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1000f, 1, 0, 0, 0);
			GRAPHICS::REMOVE_DECALS_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1000f);
			AUDIO::STOP_PED_SPEAKING(Local_85, 1);
			AUDIO::STOP_PED_SPEAKING(Local_110, 1);
			PED::SET_PED_ACCURACY(Local_85, 100);
			PED::SET_PED_ACCURACY(Local_110, 100);
			GlobalFunc_200(&uLocal_3788, 5);
			GlobalFunc_200(&uLocal_3788, 6);
			GlobalFunc_173(&uLocal_3788, GlobalFunc_2020("E"), 0, "SECURITYTANNOY", 0, 1);
			func_541(&(Local_987[2 /*25*/]), 0);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_987[2 /*25*/], 18);
			HUD::REMOVE_BLIP(&(Local_987[2 /*25*/].f_2));
			PED::SET_PED_MONEY(Local_987[2 /*25*/], 0);
			GlobalFunc_173(&uLocal_3788, 8, Local_987[2 /*25*/], "scientist3", 0, 1);
			func_541(&(Local_987[3 /*25*/]), 0);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_987[3 /*25*/], 18);
			HUD::REMOVE_BLIP(&(Local_987[3 /*25*/].f_2));
			PED::SET_PED_MONEY(Local_987[3 /*25*/], 0);
			GlobalFunc_173(&uLocal_3788, GlobalFunc_2020("A"), Local_987[3 /*25*/], "scientist4", 0, 1);
			Local_2006 = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_2006.f_2, Local_2006.f_3, 1, 1, 0);
			ENTITY::SET_ENTITY_HEADING(Local_2006, Local_2006.f_18);
			ENTITY::FREEZE_ENTITY_POSITION(Local_2006, 1);
			OBJECT::_0xEB6F1A9B5510A5D2(Local_2006, 1);
			ENTITY::SET_ENTITY_PROOFS(Local_2006, 1, 1, 1, 1, 1, 0, 0, 0);
			Local_2030 = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_2030.f_2, Local_2030.f_3, 1, 1, 0);
			ENTITY::SET_ENTITY_HEADING(Local_2030, Local_2030.f_18);
			ENTITY::SET_ENTITY_PROOFS(Local_2030, 1, 1, 1, 1, 1, 0, 0, 0);
			Local_1982 = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_1982.f_2, Local_1982.f_3, 1, 1, 0);
			ENTITY::SET_ENTITY_HEADING(Local_1982, Local_1982.f_18);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_1982, Local_2030, 0, 0f, 0f, 0.86f, 0f, 0f, 180f, 0, 0, 1, 0, 2, 1);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2030, Local_2006, 0, 0f, 0f, -1.21f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			Local_2440 = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_2440.f_2, Local_2440.f_3, 1, 1, 0);
			ENTITY::SET_ENTITY_HEADING(Local_2440, Local_2440.f_18);
			ENTITY::SET_ENTITY_PROOFS(Local_2440, 1, 1, 1, 1, 1, 0, 0, 0);
			Local_2151 = OBJECT::CREATE_OBJECT(Local_2151.f_2, Local_2151.f_3, 1, 1, 0);
			ENTITY::FREEZE_ENTITY_POSITION(Local_2151, 1);
			ENTITY::SET_ENTITY_HEADING(Local_2151, Local_2151.f_18);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2151.f_2);
			Local_2175.x = OBJECT::CREATE_OBJECT(Local_2175.f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2151, 0f, 0f, 1.5f), 1, 1, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2175.x, Local_2151, 0, -0.054f, -0.032f, -0.23f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			iLocal_84 = 1;
		}
	}
	if (iLocal_84 == 1)
	{
		if (func_801())
		{
			iLocal_84 = 2;
		}
		func_799();
		func_796();
		func_795();
		func_793();
		func_792();
		func_791();
		func_784();
		func_765();
		func_762();
		func_761();
		func_760(&Local_987, 0, 0);
		func_783();
		func_781();
		func_780();
		func_760(&Local_135, 1, 0);
		func_779();
		func_778();
		func_745();
		func_772();
	}
	if (iLocal_84 == 2)
	{
		iLocal_82 = 12;
		iLocal_84 = 0;
	}
	if (iLocal_84 == 3)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[7], 0f, 0, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[7], 3, 0, 1);
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[8], 0f, 0, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[8], 3, 0, 1);
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[15], 0f, 0, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[15], 3, 0, 1);
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[16], 0f, 0, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[16], 3, 0, 1);
		GlobalFunc_4935();
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (!PED::IS_PED_INJURED(Local_987[iVar0 /*25*/]))
			{
				PED::DELETE_PED(&(Local_987[iVar0 /*25*/]));
			}
			if (HUD::DOES_BLIP_EXIST(Local_987[iVar0 /*25*/].f_2))
			{
				HUD::REMOVE_BLIP(&(Local_987[iVar0 /*25*/].f_2));
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (Local_135 - 1))
		{
			if (!PED::IS_PED_INJURED(Local_135[iVar0 /*25*/]))
			{
				PED::DELETE_PED(&(Local_135[iVar0 /*25*/]));
			}
			if (HUD::DOES_BLIP_EXIST(Local_135[iVar0 /*25*/].f_2))
			{
				HUD::REMOVE_BLIP(&(Local_135[iVar0 /*25*/].f_2));
			}
			iVar0++;
		}
		Local_987[4 /*25*/].f_3 = { 3553.947f, 3669.152f, 27.123f };
		Local_987[4 /*25*/].f_12 = 144.8027f;
		if (!ENTITY::DOES_ENTITY_EXIST(Local_987[4 /*25*/]))
		{
			func_541(&(Local_987[4 /*25*/]), 0);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_987[4 /*25*/], 54);
			GlobalFunc_173(&uLocal_3788, GlobalFunc_2020("B"), Local_987[4 /*25*/], "scientist5", 0, 1);
		}
		else if (!PED::IS_PED_INJURED(Local_987[4 /*25*/]))
		{
			ENTITY::SET_ENTITY_COORDS(Local_987[4 /*25*/], Local_987[4 /*25*/].f_3, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(Local_987[4 /*25*/], Local_987[4 /*25*/].f_12);
		}
		Local_987[5 /*25*/].f_3 = { 3553.947f, 3669.152f, 27.123f };
		Local_987[5 /*25*/].f_12 = 144.8027f;
		if (!ENTITY::DOES_ENTITY_EXIST(Local_987[5 /*25*/]))
		{
			func_541(&(Local_987[5 /*25*/]), 0);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_987[5 /*25*/], 8246);
			GlobalFunc_173(&uLocal_3788, 8, Local_987[5 /*25*/], "scientist3", 0, 1);
		}
		else if (!PED::IS_PED_INJURED(Local_987[5 /*25*/]))
		{
			ENTITY::SET_ENTITY_COORDS(Local_987[5 /*25*/], Local_987[5 /*25*/].f_3, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(Local_987[5 /*25*/], Local_987[5 /*25*/].f_12);
		}
		PED::SET_PED_COMBAT_MOVEMENT(Local_85, 1);
		ENTITY::SET_ENTITY_COORDS(Local_85, 3556.114f, 3672.068f, 27.123f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(Local_85, 144.8027f);
		ENTITY::SET_ENTITY_COORDS(Local_110, 3555.731f, 3676.535f, 27.123f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(Local_110, 170.5338f);
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 3560.269f, 3671.919f, 27.1234f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 353.1301f);
		iLocal_84 = 2;
	}
}

void func_778()//Position - 0x778C8
{
	float fVar0;
	float fVar1;
	var uVar2;
	var uVar3;
	
	switch (iLocal_3291)
	{
		case 0:
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(3538.8f, 3673.7f, 27.1f, 1f, joaat("v_ilev_bl_doorel_l"), 1) && OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(3541.7f, 3673.2f, 27.1f, 1f, joaat("v_ilev_bl_doorel_r"), 1))
			{
				OBJECT::GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_bl_doorel_l"), 3538.8f, 3673.7f, 27.1f, &uVar2, &fVar0);
				OBJECT::GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_bl_doorel_r"), 3541.7f, 3673.2f, 27.1f, &uVar3, &fVar1);
				if (fVar0 < -0.6f && fVar1 > 0.6f)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FBI5A_LIFT_EXIT");
					iLocal_3291++;
				}
			}
			break;
		
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3558.113f, 3668.658f, 27.127f, 3558.45f, 3670.629f, 29.527f, 1.1f, 0, 1, 0))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FBI5A_GET_CHEMICALS_MA");
				iLocal_3291++;
			}
			break;
	}
}

void func_779()//Position - 0x779C9
{
	switch (iLocal_3321)
	{
		case 0:
			if (Local_987[5 /*25*/].f_18)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_987[5 /*25*/].f_15))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_987[5 /*25*/].f_15) > 0.85f)
					{
						func_763(iLocal_3292[14], iLocal_3292[15], 1, 0.7f);
						iLocal_3321++;
					}
				}
			}
			break;
		
		case 1:
			if (func_763(iLocal_3292[14], iLocal_3292[15], 1, 0.7f))
			{
				iLocal_3321++;
			}
			break;
		
		case 2:
			break;
	}
}

void func_780()//Position - 0x77A67
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Local_135 - 1))
	{
		if (!PED::IS_PED_INJURED(Local_135[iVar0 /*25*/]))
		{
			if (!Local_135[iVar0 /*25*/].f_19)
			{
				if (func_758(Local_135[iVar0 /*25*/], PLAYER::PLAYER_PED_ID()))
				{
					WEAPON::SET_PED_DROPS_WEAPON(Local_135[iVar0 /*25*/]);
					PED::SET_PED_CONFIG_FLAG(Local_135[iVar0 /*25*/], 153, 1);
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_135[iVar0 /*25*/].f_15))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_135[iVar0 /*25*/], 8f, 1);
					}
					ENTITY::SET_ENTITY_HEALTH(Local_135[iVar0 /*25*/], 5);
					GlobalFunc_565(326, 1, 0);
					Local_135[iVar0 /*25*/].f_19 = 1;
				}
			}
			else if (PED::IS_PED_RAGDOLL(Local_135[iVar0 /*25*/]))
			{
				ENTITY::SET_ENTITY_HEALTH(Local_135[iVar0 /*25*/], 5);
			}
		}
		iVar0++;
	}
}

void func_781()//Position - 0x77B1E
{
	struct<3> Var0;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(Local_135[2 /*25*/]))
	{
		switch (iLocal_3233)
		{
			case 0:
				TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
				TASK::TASK_PAUSE(0, 700);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 3545.908f, 3645.109f, 27.1217f, 1f, -1, 0.25f, 0, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 3534.848f, 3647.27f, 26.5223f, 1f, -1, 0.25f, 0, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_135[2 /*25*/].f_9, 1f, -1, 0.25f, 0, 1193033728);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
				TASK::TASK_PERFORM_SEQUENCE(Local_135[2 /*25*/], uLocal_3685);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
				iLocal_3233++;
				break;
			
			case 1:
				PED::SET_PED_RESET_FLAG(Local_135[2 /*25*/], 60, 1);
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_135[2 /*25*/], Local_135[2 /*25*/].f_9, 1.5f, 1.5f, 2f, 0, 1, 0))
				{
					if (func_336(Local_135[2 /*25*/], 242628503, -2, 1))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_135[2 /*25*/].f_9, 1f, -1, 0.25f, 0, 1193033728);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
						TASK::TASK_PERFORM_SEQUENCE(Local_135[2 /*25*/], uLocal_3685);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					}
				}
				else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_135[2 /*25*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 15f)
				{
					iLocal_3233 = 2;
				}
				if (func_547(&(Local_135[1 /*25*/]), &(Local_135[1 /*25*/].f_13)) || func_547(&(Local_135[2 /*25*/]), &(Local_135[2 /*25*/].f_13)))
				{
					iLocal_3233 = 2;
				}
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_135[2 /*25*/], 3546.03f, 3651.371f, 27.122f, 3551.035f, 3650.498f, 30.122f, 15.7f, 0, 1, 0))
				{
					if (FIRE::GET_CLOSEST_FIRE_POS(&Var0, ENTITY::GET_ENTITY_COORDS(Local_135[2 /*25*/], 1)))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, ENTITY::GET_ENTITY_COORDS(Local_135[2 /*25*/], 1), 1) < 10f)
						{
							iLocal_3232 = 2;
						}
					}
					if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Local_135[2 /*25*/], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_3233 = 2;
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_135[2 /*25*/], 1), 1) < 13f)
					{
						if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
						{
							if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar3, 1))
							{
								if (iVar3 != joaat("weapon_stungun"))
								{
									iLocal_3233 = 2;
								}
							}
						}
					}
					if (MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_135[2 /*25*/], -2f, 2.4f, -1f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_135[2 /*25*/], 2f, 2.4f, 1.6f), 5f, joaat("weapon_stickybomb"), 0) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_135[2 /*25*/], -2f, 2.4f, -1f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_135[2 /*25*/], 2f, 2.4f, 1.6f), 5f, joaat("weapon_proxmine"), 0))
					{
						iLocal_3232 = 2;
					}
				}
				func_782();
				break;
			
			case 2:
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_135[2 /*25*/], 0);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_135[2 /*25*/], 3539.563f, 3643.418f, 27.122f, 1f, 0, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_135[2 /*25*/], 51, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_135[2 /*25*/], 50, 1);
				TASK::TASK_COMBAT_PED(Local_135[2 /*25*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				iLocal_3233++;
				if (!iLocal_3232 > 2)
				{
					iLocal_3232 = 2;
				}
				break;
			
			case 3:
				break;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_135[2 /*25*/]))
		{
			if (func_758(Local_135[2 /*25*/], Local_85) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_135[2 /*25*/], 0, 2))
			{
				ENTITY::SET_ENTITY_HEALTH(Local_135[2 /*25*/], 2);
			}
		}
	}
}

int func_782()//Position - 0x77EA8
{
	if (((((!PED::IS_PED_INJURED(Local_135[1 /*25*/]) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_135[1 /*25*/], 3537.418f, 3648.729f, 26.528f, 3536.256f, 3642.13f, 30.128f, 18f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_135[1 /*25*/], 3545.659f, 3650.203f, 27.127f, 3550.288f, 3649.387f, 30.127f, 18f, 0, 1, 0)) && !PED::IS_PED_INJURED(Local_135[2 /*25*/])) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_135[2 /*25*/], 3537.418f, 3648.729f, 26.528f, 3536.256f, 3642.13f, 30.128f, 18f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_135[2 /*25*/], 3545.659f, 3650.203f, 27.127f, 3550.288f, 3649.387f, 30.127f, 18f, 0, 1, 0))
	{
		if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3543.768f, 3640.804f, 27.127f, 3544.861f, 3647.008f, 30.127f, 10.7f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3546.138f, 3651.365f, 27.121f, 3555.296f, 3649.75f, 30.121f, 16f, 0, 1, 0)) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_135[1 /*25*/], 1), 1) > 40f)
		{
			PED::DELETE_PED(&(Local_135[1 /*25*/]));
			if (HUD::DOES_BLIP_EXIST(Local_135[1 /*25*/].f_2))
			{
				HUD::REMOVE_BLIP(&(Local_135[1 /*25*/].f_2));
			}
			PED::DELETE_PED(&(Local_135[2 /*25*/]));
			if (HUD::DOES_BLIP_EXIST(Local_135[2 /*25*/].f_2))
			{
				HUD::REMOVE_BLIP(&(Local_135[2 /*25*/].f_2));
			}
			return 1;
		}
	}
	return 0;
}

void func_783()//Position - 0x78073
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	if (!PED::IS_PED_INJURED(Local_135[1 /*25*/]))
	{
		switch (iLocal_3232)
		{
			case 0:
				TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
				TASK::TASK_PAUSE(0, 500);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 3545.908f, 3645.109f, 27.1217f, 1f, -1, 0.25f, 0, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 3534.848f, 3647.27f, 26.5223f, 1f, -1, 0.25f, 1, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_135[1 /*25*/].f_9, 1f, -1, 0.25f, 0, 1193033728);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
				TASK::TASK_PERFORM_SEQUENCE(Local_135[1 /*25*/], uLocal_3685);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
				iLocal_3232++;
				break;
			
			case 1:
				PED::SET_PED_RESET_FLAG(Local_135[1 /*25*/], 60, 1);
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_135[1 /*25*/], Local_135[1 /*25*/].f_9, 1.5f, 1.5f, 2f, 0, 1, 0))
				{
					if (func_336(Local_135[1 /*25*/], 242628503, -2, 1))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_135[1 /*25*/].f_9, 1f, -1, 0.25f, 0, 1193033728);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
						TASK::TASK_PERFORM_SEQUENCE(Local_135[1 /*25*/], uLocal_3685);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					}
				}
				else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_135[1 /*25*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 15f)
				{
					iLocal_3232 = 2;
				}
				if (func_547(&(Local_135[1 /*25*/]), &(Local_135[1 /*25*/].f_13)) || func_547(&(Local_135[2 /*25*/]), &(Local_135[2 /*25*/].f_13)))
				{
					iLocal_3232 = 2;
				}
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_135[1 /*25*/], 3546.03f, 3651.371f, 27.122f, 3551.035f, 3650.498f, 30.122f, 15.7f, 0, 1, 0))
				{
					if (FIRE::GET_CLOSEST_FIRE_POS(&Var0, ENTITY::GET_ENTITY_COORDS(Local_135[1 /*25*/], 1)))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, ENTITY::GET_ENTITY_COORDS(Local_135[1 /*25*/], 1), 1) < 10f)
						{
							iLocal_3232 = 2;
						}
					}
					if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Local_135[1 /*25*/], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_3232 = 2;
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_135[1 /*25*/], 1), 1) < 13f)
					{
						if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
						{
							if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar3, 1))
							{
								if (iVar3 != joaat("weapon_stungun"))
								{
									iLocal_3232 = 2;
								}
							}
						}
					}
					if (MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_135[1 /*25*/], -2f, 2.4f, -1f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_135[1 /*25*/], 2f, 2.4f, 1.6f), 5f, joaat("weapon_stickybomb"), 0) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_135[1 /*25*/], -2f, 2.4f, -1f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_135[1 /*25*/], 2f, 2.4f, 1.6f), 5f, joaat("weapon_proxmine"), 0))
					{
						iLocal_3232 = 2;
					}
				}
				else
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3546.03f, 3651.371f, 27.122f, 3551.035f, 3650.498f, 30.122f, 15.7f, 0, 1, 0))
					{
						iLocal_3232 = 2;
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_135[1 /*25*/], 1), 1) < 13f)
					{
						if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
						{
							if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar4, 1))
							{
								if (iVar4 != joaat("weapon_stungun"))
								{
									iLocal_3232 = 2;
								}
							}
						}
					}
				}
				func_782();
				break;
			
			case 2:
				func_298("fbi5a_chat1", 1);
				func_298("fbi5a_chat2", 1);
				GlobalFunc_4935();
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_135[1 /*25*/], 0);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_135[1 /*25*/], 3541.051f, 3646.434f, 27.122f, 1f, 0, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_135[1 /*25*/], 51, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_135[1 /*25*/], 50, 1);
				TASK::TASK_COMBAT_PED(Local_135[1 /*25*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				iLocal_3232++;
				if (!iLocal_3233 > 2)
				{
					iLocal_3233 = 2;
				}
				break;
			
			case 3:
				break;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_135[1 /*25*/]))
		{
			if (func_758(Local_135[1 /*25*/], Local_85) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_135[1 /*25*/], 0, 2))
			{
				ENTITY::SET_ENTITY_HEALTH(Local_135[1 /*25*/], 2);
			}
		}
	}
}

void func_784()//Position - 0x78495
{
	if (!PED::IS_PED_INJURED(Local_987[3 /*25*/]))
	{
		if (iLocal_3230 != 5)
		{
			if (PED::IS_PED_RAGDOLL(Local_987[3 /*25*/]))
			{
				func_790();
				func_789();
				iLocal_3230 = 5;
			}
		}
		switch (iLocal_3230)
		{
			case 0:
				STREAMING::REQUEST_ANIM_DICT("missfbi5ig_15");
				STREAMING::REQUEST_MODEL(Local_2223.f_2);
				STREAMING::REQUEST_MODEL(Local_2247.f_2);
				if ((STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_15") && STREAMING::HAS_MODEL_LOADED(Local_2223.f_2)) && STREAMING::HAS_MODEL_LOADED(Local_2247.f_2))
				{
					STREAMING::REQUEST_ANIM_DICT("missfbi5ig_17");
					Local_2223.x = OBJECT::CREATE_OBJECT(Local_2223.f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_987[3 /*25*/], 0f, 0f, 1f), 1, 1, 0);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2223.x, Local_987[3 /*25*/], PED::GET_PED_BONE_INDEX(Local_987[3 /*25*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					Local_2247.x = OBJECT::CREATE_OBJECT(Local_2247.f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_987[3 /*25*/], 0f, 0f, 1f), 1, 1, 0);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2247.x, Local_987[3 /*25*/], PED::GET_PED_BONE_INDEX(Local_987[3 /*25*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					Local_3397 = { 3533.92f, 3662.75f, 28.118f };
					Local_3400 = { 0f, 0f, 169.92f };
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, "missfbi5ig_15", "look_into_microscope_a_scientista", Local_3397, Local_3400, 8f, -8f, -1, 267272, -1f, 2, 0);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, "missfbi5ig_15", "look_into_microscope_b_scientista", Local_3397, Local_3400, 8f, -8f, -1, 267272, -1f, 2, 0);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, "missfbi5ig_15", "look_into_microscope_c_scientista", Local_3397, Local_3400, 8f, -8f, -1, 267272, -1f, 2, 0);
					TASK::SET_SEQUENCE_TO_REPEAT(uLocal_3685, 1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_987[3 /*25*/], uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					iLocal_3230++;
				}
				break;
			
			case 1:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3532.584f, 3664.33f, 27.127f, 3528.744f, 3665.008f, 30.127f, 12.5f, 0, 1, 0))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_987[3 /*25*/], "missfbi5ig_15", "look_into_microscope_base_scientista", 3))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
						TASK::TASK_PLAY_ANIM_ADVANCED(0, "missfbi5ig_15", "look_into_microscope_base_scientista", Local_3397, Local_3400, 8f, -8f, -1, 267273, -1f, 2, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
						TASK::TASK_PERFORM_SEQUENCE(Local_987[3 /*25*/], uLocal_3685);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					}
				}
				else if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_987[3 /*25*/], "missfbi5ig_15", "look_into_microscope_a_scientista", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_987[3 /*25*/], "missfbi5ig_15", "look_into_microscope_b_scientista", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_987[3 /*25*/], "missfbi5ig_15", "look_into_microscope_c_scientista", 3))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, "missfbi5ig_15", "look_into_microscope_a_scientista", Local_3397, Local_3400, 8f, -8f, -1, 267272, -1f, 2, 0);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, "missfbi5ig_15", "look_into_microscope_b_scientista", Local_3397, Local_3400, 8f, -8f, -1, 267272, -1f, 2, 0);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, "missfbi5ig_15", "look_into_microscope_c_scientista", Local_3397, Local_3400, 8f, -8f, -1, 267272, -1f, 2, 0);
					TASK::SET_SEQUENCE_TO_REPEAT(uLocal_3685, 1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_987[3 /*25*/], uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
				}
				if (func_788())
				{
					func_789();
					STREAMING::REMOVE_ANIM_DICT("missfbi5ig_15");
					iLocal_3230++;
				}
				break;
			
			case 2:
				if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_17"))
				{
					Local_3397 = { 3533.92f, 3662.75f, 28.118f };
					Local_3400 = { 0f, 0f, 169.92f };
					Local_987[3 /*25*/].f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_987[3 /*25*/], Local_987[3 /*25*/].f_15, "missfbi5ig_17", "walk_in_aim_scientista", 8f, -8f, 1, 0, 1000f, 0);
					iLocal_3230++;
				}
				break;
			
			case 3:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_987[3 /*25*/].f_15))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_987[3 /*25*/], MISC::GET_HASH_KEY("Prop_Detach")))
					{
						func_790();
						iLocal_3230++;
					}
				}
				break;
			
			case 4:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_987[3 /*25*/].f_15))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_987[3 /*25*/].f_15) >= 1f)
					{
						Local_3397 = { 3533.92f, 3662.75f, 28.118f };
						Local_3400 = { 0f, 0f, 169.92f };
						Local_987[3 /*25*/].f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_987[3 /*25*/], Local_987[3 /*25*/].f_15, "missfbi5ig_17", "walk_in_aim_loop_scientista", 8f, -8f, 1, 0, 1000f, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_987[3 /*25*/].f_15, 1);
					}
				}
				break;
			
			case 5:
				func_787(&(Local_987[3 /*25*/]), 3538.74f, 3664.09f, 27.12f);
				break;
		}
		if (iLocal_3230 > 3)
		{
			if (!func_314("fbi5a_cower7"))
			{
				if (!GlobalFunc_5172(&Local_3049, 0))
				{
					if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_cower7", 7, 0, 0, 0))
					{
						func_298("fbi5a_cower7", 1);
					}
				}
			}
			else if (!func_314("fbi5a_dia5h"))
			{
				if (!GlobalFunc_5172(&Local_3049, 0))
				{
					if (PED::IS_PED_INJURED(Local_987[2 /*25*/]))
					{
						if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia5h", 7, 0, 0, 0))
						{
							func_298("fbi5a_dia5h", 1);
						}
					}
				}
			}
		}
		if (func_758(Local_987[3 /*25*/], Local_85))
		{
			func_786(&(Local_987[3 /*25*/]));
		}
		func_785(&(Local_987[3 /*25*/]));
	}
	else
	{
		func_789();
		if (Local_987[3 /*25*/].f_18)
		{
			func_789();
			if (!Local_987[5 /*25*/].f_18)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2223.x))
				{
					ENTITY::DETACH_ENTITY(Local_2223.x, 1, 1);
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&Local_2223);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_2247.x))
				{
					ENTITY::DETACH_ENTITY(Local_2247.x, 1, 1);
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&Local_2247);
				}
			}
		}
	}
}

void func_785(int iParam0)//Position - 0x78ABB
{
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		if (((WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(*iParam0, joaat("weapon_grenade"), 0) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(*iParam0, joaat("weapon_grenadelauncher"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(*iParam0, joaat("weapon_stickybomb"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(*iParam0, joaat("weapon_rpg"), 0))
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iParam0->f_15))
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*iParam0, -8f, 1);
			}
			PED::SET_PED_CAN_RAGDOLL(*iParam0, 1);
			ENTITY::SET_ENTITY_HEALTH(*iParam0, 1);
		}
	}
}

void func_786(var uParam0)//Position - 0x78B40
{
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		PED::SET_PED_CONFIG_FLAG(*uParam0, 153, 1);
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_15))
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*uParam0, 8f, 1);
		}
		ENTITY::SET_ENTITY_HEALTH(*uParam0, 1);
		uParam0->f_19 = 1;
	}
}

void func_787(var uParam0, struct<3> Param1)//Position - 0x78B83
{
	if (!PED::IS_PED_RAGDOLL(*uParam0) && !PED::IS_PED_DEAD_OR_DYING(*uParam0, 1))
	{
		if ((!ENTITY::IS_ENTITY_AT_COORD(*uParam0, Param1, 1f, 1f, 1.6f, 0, 1, 0) || !PED::IS_PED_FACING_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 50f)) || !ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "ped", "handsup_base", 3))
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "ped", "handsup_base", 3))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "ped", "handsup", 3))
				{
					TASK::TASK_PLAY_ANIM(*uParam0, "ped", "handsup", 8f, -8f, -1, 49, 0, 0, 0, 0);
				}
				else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "ped", "handsup") > 0.99f)
				{
					TASK::TASK_PLAY_ANIM(*uParam0, "ped", "handsup_base", 1000f, -8f, -1, 49, 0, 0, 0, 0);
				}
			}
			if (func_336(*uParam0, 242628503, -2, 1))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Param1, 1f, -1, 0.25f, 0, 1193033728);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
				TASK::TASK_PERFORM_SEQUENCE(*uParam0, uLocal_3685);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
			}
		}
	}
	else
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "ped", "handsup", 3))
		{
			TASK::STOP_ANIM_TASK(*uParam0, "ped", "handsup", -1056964608);
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "ped", "handsup_base", 3))
		{
			TASK::STOP_ANIM_TASK(*uParam0, "ped", "handsup_base", -1056964608);
		}
	}
}

int func_788()//Position - 0x78D25
{
	if (((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3532.774f, 3666.266f, 27.127f, 3532.26f, 3663.208f, 30.127f, 2.2f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3537.917f, 3669.565f, 27.122f, 3536.163f, 3659.72f, 29.722f, 8.6f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_85, 3537.917f, 3669.565f, 27.122f, 3536.163f, 3659.72f, 29.722f, 8.6f, 0, 1, 0)) || func_547(&(Local_987[2 /*25*/]), &(Local_987[2 /*25*/].f_13))) || func_547(&(Local_987[3 /*25*/]), &(Local_987[3 /*25*/].f_13))) || (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 3537f, 3664.4f, 28.6f, 1) < 30f))
	{
		return 1;
	}
	return 0;
}

void func_789()//Position - 0x78E2F
{
	if (!iLocal_3106)
	{
		iLocal_3282 = MISC::GET_GAME_TIMER();
		iLocal_3106 = 1;
	}
}

void func_790()//Position - 0x78E49
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_2223.x))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(Local_2223.x))
		{
			ENTITY::DETACH_ENTITY(Local_2223.x, 1, 1);
		}
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&Local_2223);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_2247.x))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(Local_2247.x))
		{
			ENTITY::DETACH_ENTITY(Local_2247.x, 1, 1);
		}
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&Local_2247);
	}
}

void func_791()//Position - 0x78E99
{
	if (!PED::IS_PED_INJURED(Local_987[2 /*25*/]))
	{
		if (iLocal_3229 != 4)
		{
			if (PED::IS_PED_RAGDOLL(Local_987[2 /*25*/]))
			{
				func_789();
				iLocal_3229 = 4;
			}
		}
		switch (iLocal_3229)
		{
			case 0:
				STREAMING::REQUEST_ANIM_DICT("missfbi5ig_15");
				if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_15"))
				{
					STREAMING::REQUEST_ANIM_DICT("missfbi5ig_17");
					Local_3397 = { 3533.92f, 3662.75f, 28.118f };
					Local_3400 = { 0f, 0f, 169.92f };
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, "missfbi5ig_15", "look_into_microscope_a_scientistb", Local_3397, Local_3400, 8f, -8f, -1, 267272, -1f, 2, 0);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, "missfbi5ig_15", "look_into_microscope_b_scientistb", Local_3397, Local_3400, 8f, -8f, -1, 267272, -1f, 2, 0);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, "missfbi5ig_15", "look_into_microscope_c_scientistb", Local_3397, Local_3400, 8f, -8f, -1, 267272, -1f, 2, 0);
					TASK::SET_SEQUENCE_TO_REPEAT(uLocal_3685, 1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_987[2 /*25*/], uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					iLocal_3229++;
				}
				break;
			
			case 1:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3532.584f, 3664.33f, 27.127f, 3528.744f, 3665.008f, 30.127f, 12.5f, 0, 1, 0))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_987[2 /*25*/], "missfbi5ig_15", "look_into_microscope_base_scientistb", 3))
					{
						Local_3397 = { 3533.92f, 3662.75f, 28.118f };
						Local_3400 = { 0f, 0f, 169.92f };
						TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
						TASK::TASK_PLAY_ANIM_ADVANCED(0, "missfbi5ig_15", "look_into_microscope_base_scientistb", Local_3397, Local_3400, 8f, -8f, -1, 267273, -1f, 2, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
						TASK::TASK_PERFORM_SEQUENCE(Local_987[2 /*25*/], uLocal_3685);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					}
				}
				else if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_987[2 /*25*/], "missfbi5ig_15", "look_into_microscope_a_scientistb", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_987[2 /*25*/], "missfbi5ig_15", "look_into_microscope_b_scientistb", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_987[2 /*25*/], "missfbi5ig_15", "look_into_microscope_c_scientistb", 3))
				{
					Local_3397 = { 3533.92f, 3662.75f, 28.118f };
					Local_3400 = { 0f, 0f, 169.92f };
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, "missfbi5ig_15", "look_into_microscope_a_scientistb", Local_3397, Local_3400, 8f, -8f, -1, 267272, -1f, 2, 0);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, "missfbi5ig_15", "look_into_microscope_b_scientistb", Local_3397, Local_3400, 8f, -8f, -1, 267272, -1f, 2, 0);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, "missfbi5ig_15", "look_into_microscope_c_scientistb", Local_3397, Local_3400, 8f, -8f, -1, 267272, -1f, 2, 0);
					TASK::SET_SEQUENCE_TO_REPEAT(uLocal_3685, 1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_987[2 /*25*/], uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
				}
				if (func_788())
				{
					func_789();
					STREAMING::REMOVE_ANIM_DICT("missfbi5ig_15");
					iLocal_3229++;
				}
				break;
			
			case 2:
				if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_17"))
				{
					Local_3397 = { 3533.92f, 3662.75f, 28.118f };
					Local_3400 = { 0f, 0f, 169.92f };
					Local_987[2 /*25*/].f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_987[2 /*25*/], Local_987[2 /*25*/].f_15, "missfbi5ig_17", "walk_in_aim_scientistb", 8f, -8f, 1, 0, 1000f, 0);
					iLocal_3229++;
				}
				break;
			
			case 3:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_987[2 /*25*/].f_15))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_987[2 /*25*/].f_15) >= 1f)
					{
						Local_3397 = { 3533.92f, 3662.75f, 28.118f };
						Local_3400 = { 0f, 0f, 169.92f };
						Local_987[2 /*25*/].f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_987[2 /*25*/], Local_987[2 /*25*/].f_15, "missfbi5ig_17", "walk_in_aim_loop_scientistb", 8f, -8f, 1, 0, 1000f, 0);
					}
				}
				break;
			
			case 4:
				func_787(&(Local_987[2 /*25*/]), 3536.89f, 3662.69f, 27.12f);
				break;
		}
		if (func_758(Local_987[2 /*25*/], Local_85))
		{
			func_786(&(Local_987[2 /*25*/]));
		}
		if (iLocal_3229 > 2)
		{
			if (!func_314("fbi5a_cower1"))
			{
				if (!GlobalFunc_5172(&Local_3049, 0))
				{
					if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_cower1", 7, 0, 0, 0))
					{
						func_298("fbi5a_cower1", 1);
					}
				}
			}
			else if (!func_314("fbi5a_dia5f"))
			{
				if (!GlobalFunc_5172(&Local_3049, 0))
				{
					if (PED::IS_PED_INJURED(Local_987[3 /*25*/]))
					{
						if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia5f", 7, 0, 0, 0))
						{
							func_298("fbi5a_dia5f", 1);
						}
					}
				}
			}
		}
		func_785(&(Local_987[2 /*25*/]));
	}
	else
	{
		func_789();
	}
}

void func_792()//Position - 0x793B2
{
	float fVar0;
	float fVar1;
	var uVar2;
	var uVar3;
	
	switch (iLocal_3227)
	{
		case 0:
			iLocal_3120 = 0;
			Local_110.f_9 = { 3533.59f, 3671.1f, 27.12f };
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(3538.8f, 3673.7f, 27.1f, 1f, joaat("v_ilev_bl_doorel_l"), 1) && OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(3541.7f, 3673.2f, 27.1f, 1f, joaat("v_ilev_bl_doorel_r"), 1))
			{
				OBJECT::GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_bl_doorel_l"), 3538.8f, 3673.7f, 27.1f, &uVar2, &fVar0);
				OBJECT::GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_bl_doorel_r"), 3541.7f, 3673.2f, 27.1f, &uVar3, &fVar1);
				if (fVar0 < -0.6f && fVar1 > 0.6f)
				{
					Local_3397 = { 3538.663f, 3673.165f, 27.126f };
					Local_3400 = { 0f, 0f, 80.4f };
					Local_110.f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_110, Local_110.f_15, "missfbi5ig_12", "moveto_hall_cover_steve", 8f, -8f, 5, 0, 1000f, 0);
					iLocal_3227++;
				}
			}
			break;
		
		case 1:
			func_338(&Local_110, &(Local_110.f_15), &iLocal_3248, Local_110.f_9, 1f, 0f, 0, 0, iLocal_3626[6]);
			if (func_337(Local_110, Local_110.f_9, 2f, 0) || iLocal_3120)
			{
				iLocal_3120 = 1;
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_110.f_15))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_110, -8f, 1);
					Local_110.f_15 = -1;
				}
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_110, 3531.968f, 3673.769f, 27.1211f, 0.5f, 0.5f, 2f, 0, 1, 0))
				{
					if (func_336(Local_110, 242628503, 1, 1))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 3531.968f, 3673.769f, 27.1211f, 3530.1f, 3662.7f, 28.6f, 1f, 0, 0.2f, 0.2f, 1, 512, 0, -957453492);
						TASK::TASK_AIM_GUN_AT_COORD(0, 3530.1f, 3662.7f, 28.6f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
						TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					}
				}
			}
			STREAMING::REQUEST_ANIM_DICT("missfbi5ig_14");
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3532.819f, 3667.771f, 27.129f, 3529.369f, 3668.37f, 29.927f, 2f, 0, 1, 0))
			{
				iLocal_3227++;
			}
			break;
		
		case 2:
			STREAMING::REQUEST_ANIM_DICT("missfbi5ig_14");
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_110.f_15))
			{
				func_338(&Local_110, &(Local_110.f_15), &iLocal_3248, Local_110.f_9, 1f, 0f, 0, 0, iLocal_3626[6]);
			}
			else if (func_332(&iLocal_80, &Local_110, &iLocal_3248, Local_110.f_9, iLocal_3626[6], 3529.9f, 3662.6f, 28.7f, 1056964608) && STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_14"))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_110, 1);
				iLocal_3122 = 0;
				iLocal_3120 = 0;
				Local_110.f_9 = { 3528.183f, 3660.253f, 27.12186f };
				iLocal_3248 = 0;
				switch (iLocal_80)
				{
					case 0:
						Local_3397 = { 3533.92f, 3662.75f, 28.118f };
						Local_3400 = { 0f, 0f, 169.92f };
						Local_110.f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_110, Local_110.f_15, "missfbi5ig_14", "run_down_hallway_steve", 8f, -8f, 5, 0, 8f, 0);
						break;
					
					case 1:
						TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_110.f_9, 2f, -1, 1f, 0, 1193033728);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_110.f_9, -1, 0, 8f, false, 1, iLocal_3626[8], 1);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
						TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
						break;
				}
				iLocal_3227++;
			}
			break;
		
		case 3:
			func_338(&Local_110, &(Local_110.f_15), &iLocal_3248, Local_110.f_9, 1f, 8f, 1, 1, iLocal_3626[8]);
			if (func_337(Local_110, Local_110.f_9, 2f, 1) || iLocal_3120)
			{
				iLocal_3120 = 1;
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_110.f_15))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_110, -8f, 1);
					Local_110.f_15 = -1;
				}
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_110, 3528.656f, 3661.377f, 27.1219f, 0.5f, 0.5f, 2f, 0, 1, 0))
				{
					if (func_336(Local_110, 242628503, 1, 1) || iLocal_3122)
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 3528.656f, 3661.377f, 27.1219f, 3532.4f, 3664.6f, 28.9f, 1f, 0, 0.2f, 0.2f, 1, 512, 0, -957453492);
						TASK::TASK_AIM_GUN_AT_COORD(0, 3532.4f, 3664.6f, 28.9f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
						TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
						iLocal_3122 = 0;
					}
				}
			}
			STREAMING::REQUEST_ANIM_DICT("missfbi5ig_18_p1");
			if (PED::IS_PED_INJURED(Local_987[2 /*25*/]) && PED::IS_PED_INJURED(Local_987[3 /*25*/]))
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3537.933f, 3674.032f, 27.127f, 3535.935f, 3662.807f, 30.227f, 15.8f, 0, 1, 0))
				{
					iLocal_3227++;
				}
			}
			break;
		
		case 4:
			if (!func_314("fbi5a_dia37"))
			{
				if (!GlobalFunc_5172(&Local_3049, 0))
				{
					if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia37", 7, 0, 0, 0))
					{
						func_298("fbi5a_dia37", 1);
					}
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_110.f_15))
			{
				func_338(&Local_110, &(Local_110.f_15), &iLocal_3248, Local_110.f_9, 1065353216, 1056964608, 0, 0, 0);
			}
			else if (func_332(&iLocal_80, &Local_110, &iLocal_3248, Local_110.f_9, iLocal_3626[8], 3535.8f, 3646.9f, 28.4f, 1056964608) && STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_18_p1"))
			{
				func_298("fbi5a_dia37", 0);
				iLocal_3120 = 0;
				switch (iLocal_80)
				{
					case 0:
						Local_110.f_9 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_18_p1", "through_hallway_steve", Local_3397, Local_3400, 1f, 2) };
						Local_3397 = { 3533.916f, 3645.635f, 26.527f };
						Local_3400 = { 0f, 0f, 169.92f };
						Local_110.f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_110, Local_110.f_15, "missfbi5ig_18_p1", "through_hallway_steve", 8f, -8f, 5, 0, 8f, 0);
						iLocal_3227 = 5;
						break;
					
					case 1:
						STREAMING::REQUEST_ANIM_DICT("missfbi5ig_18_p2");
						if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_18_p2"))
						{
							Local_110.f_9 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_18_p2", "continue_down_to_hallway_steve", Local_3397, Local_3400, 1f, 2) };
							TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_110.f_9, 3540.4f, 3645.6f, 28.7f, 2f, 0, 0.5f, 0.5f, 1, 0, 0, -957453492);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
							TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
							iLocal_3227 = 6;
						}
						break;
					}
			}
			break;
		
		case 5:
			STREAMING::REQUEST_ANIM_DICT("missfbi5ig_18_p2");
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_110.f_15))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_110.f_15) >= 1f && STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_18_p2"))
				{
					Local_3397 = { 3533.916f, 3645.635f, 26.527f };
					Local_3400 = { 0f, 0f, 169.92f };
					Local_110.f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_110, Local_110.f_15, "missfbi5ig_18_p2", "continue_down_to_hallway_steve", 8f, -8f, 5, 0, 8f, 0);
					Local_110.f_9 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_18_p2", "continue_down_to_hallway_steve", Local_3397, Local_3400, 1f, 2) };
					iLocal_3227 = 6;
				}
			}
			if (func_337(Local_110, Local_110.f_9, 2f, 1))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_110.f_15))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_110, -8f, 1);
					Local_110.f_15 = -1;
				}
				Local_110.f_9 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_18_p2", "continue_down_to_hallway_steve", Local_3397, Local_3400, 1f, 2) };
				TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_110.f_9, 3540.4f, 3645.6f, 28.7f, 2f, 0, 0.5f, 0.5f, 1, 0, 0, -957453492);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
				TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
				iLocal_3227 = 6;
			}
			break;
		
		case 6:
			func_331(&Local_110, &(Local_110.f_15), Local_110.f_9, 3540.4f, 3645.6f, 28.7f, 0, 1065353216, 1);
			if (ENTITY::DOES_ENTITY_EXIST(Local_135[1 /*25*/]))
			{
				if (!PED::IS_PED_INJURED(Local_135[1 /*25*/]))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_135[1 /*25*/], 3545.832f, 3643.64f, 27.128f, 3546.306f, 3646.501f, 30.128f, 1.5f, 0, 1, 0))
					{
						iLocal_3227++;
					}
				}
				else
				{
					iLocal_3227++;
				}
			}
			break;
		
		case 7:
			STREAMING::REQUEST_ANIM_DICT("missfbi5ig_20a");
			if (iLocal_3232 > 2 || iLocal_3233 > 2)
			{
				if (PED::IS_PED_INJURED(Local_135[1 /*25*/]))
				{
					if (!PED::IS_PED_INJURED(Local_135[2 /*25*/]))
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_135[2 /*25*/], 3545.086f, 3646.993f, 27.122f, 3544.545f, 3643.939f, 30.122f, 1.2f, 0, 1, 0))
						{
							if (func_336(Local_110, 167901368, -2, 1))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
								TASK::TASK_SHOOT_AT_ENTITY(0, Local_135[2 /*25*/], 3000, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
								TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
							}
						}
					}
				}
				else if (PED::IS_PED_INJURED(Local_135[2 /*25*/]))
				{
					if (!PED::IS_PED_INJURED(Local_135[1 /*25*/]))
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_135[1 /*25*/], 3545.086f, 3646.993f, 27.122f, 3544.545f, 3643.939f, 30.122f, 1.2f, 0, 1, 0))
						{
							if (func_336(Local_110, 167901368, -2, 1))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
								TASK::TASK_SHOOT_AT_ENTITY(0, Local_135[1 /*25*/], 3000, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
								TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
							}
						}
					}
				}
				else if (!PED::IS_PED_INJURED(Local_135[1 /*25*/]))
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_135[1 /*25*/], 3545.086f, 3646.993f, 27.122f, 3544.545f, 3643.939f, 30.122f, 1.2f, 0, 1, 0))
					{
						if (func_336(Local_110, 167901368, -2, 1))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
							TASK::TASK_SHOOT_AT_ENTITY(0, Local_135[1 /*25*/], 3000, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
							TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
						}
					}
				}
				else if (!PED::IS_PED_INJURED(Local_135[2 /*25*/]))
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_135[2 /*25*/], 3545.086f, 3646.993f, 27.122f, 3544.545f, 3643.939f, 30.122f, 1.2f, 0, 1, 0))
					{
						if (func_336(Local_110, 167901368, -2, 1))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
							TASK::TASK_SHOOT_AT_ENTITY(0, Local_135[2 /*25*/], 3000, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
							TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
						}
					}
				}
			}
			if (Local_135[1 /*25*/].f_18 && Local_135[2 /*25*/].f_18)
			{
				if (PED::IS_PED_INJURED(Local_135[1 /*25*/]) && PED::IS_PED_INJURED(Local_135[2 /*25*/]))
				{
					iLocal_3227 = 8;
				}
			}
			break;
		
		case 8:
			STREAMING::REQUEST_ANIM_DICT("missfbi5ig_20a");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_20a"))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_110, 1);
				TASK::CLEAR_PED_TASKS(Local_110);
				iLocal_3120 = 0;
				Local_110.f_9 = { 3552.435f, 3664.796f, 27.1101f };
				Local_3397 = { 3551.58f, 3658.52f, 27.125f };
				Local_3400 = { 0f, 0f, 170f };
				Local_110.f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_110, Local_110.f_15, "missfbi5ig_20a", "run_through_door_steve", 2f, -8f, 5, 0, 2f, 0);
				iLocal_3227++;
			}
			break;
		
		case 9:
			STREAMING::REQUEST_ANIM_DICT("missfbi5ig_20b");
			func_338(&Local_110, &(Local_110.f_15), &iLocal_3248, Local_110.f_9, 1065353216, 1056964608, 0, 0, 0);
			if (func_337(Local_110, Local_110.f_9, 2f, 1) || iLocal_3120)
			{
				iLocal_3120 = 1;
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_110.f_15))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_110, -8f, 1);
					Local_110.f_15 = -1;
				}
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_110, 3551.909f, 3663.259f, 27.1219f, 0.5f, 0.5f, 2f, 0, 1, 0))
				{
					if (func_336(Local_110, 242628503, 1, 1))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 3551.909f, 3663.259f, 27.1219f, 3532.4f, 3664.6f, 28.9f, 1f, 0, 0.2f, 0.2f, 1, 512, 0, -957453492);
						TASK::TASK_AIM_GUN_AT_COORD(0, 3553.9f, 3664.8f, 28.9f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
						TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					}
				}
			}
			if (iLocal_3250 > 22)
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_20b"))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_110.f_15))
					{
						iLocal_3120 = 0;
						Local_110.f_9 = { 3557.29f, 3667.28f, 27.12f };
						PED::SET_SYNCHRONIZED_SCENE_RATE(Local_110.f_15, 1f);
						iLocal_3227++;
					}
				}
			}
			break;
		
		case 10:
			func_338(&Local_110, &(Local_110.f_15), &iLocal_3248, Local_110.f_9, 1f, 0.5f, 0, 0, iLocal_3626[11]);
			STREAMING::REQUEST_ANIM_DICT("missfbi5ig_21");
			if (ENTITY::DOES_ENTITY_EXIST(Local_987[5 /*25*/]))
			{
				iLocal_3227++;
			}
			break;
		
		case 11:
			STREAMING::REQUEST_ANIM_DICT("missfbi5ig_21");
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_110.f_15))
			{
				func_338(&Local_110, &(Local_110.f_15), &iLocal_3248, Local_110.f_9, 1065353216, 1056964608, 0, 0, 0);
			}
			else
			{
				if (func_314("fbi5a_dia19b"))
				{
					if (!func_314("fbi5a_dia19c"))
					{
						if (!GlobalFunc_5172(&Local_3049, 0))
						{
							if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia19c", 7, 0, 0, 0))
							{
								func_298("fbi5a_dia19c", 1);
							}
						}
					}
				}
				if (((STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_21") && func_332(&iLocal_80, &Local_110, &iLocal_3248, Local_110.f_9, iLocal_3626[11], 3561.9f, 3681.9f, 28.5f, 1056964608)) && func_314("fbi5a_dia19c")) && !PED::IS_PED_INJURED(Local_987[5 /*25*/]))
				{
					Local_3397 = { 3558.898f, 3677.85f, 27.125f };
					Local_3400 = { 0f, 0f, 170f };
					Local_110.f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_110, Local_110.f_15, "missfbi5ig_21", "holdup_hallway_steve", 8f, -4f, 5, 0, 8f, 0);
					iLocal_3120 = 0;
					Local_110.f_9 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_21", "holdup_hallway_steve", Local_3397, Local_3400, 1f, 2) };
					iLocal_3227++;
				}
			}
			break;
		
		case 12:
			if (!PED::IS_PED_INJURED(Local_987[5 /*25*/]))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_110.f_15))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_110.f_15) >= 1f)
					{
						Local_3397 = { 3558.898f, 3677.85f, 27.125f };
						Local_3400 = { 0f, 0f, 170f };
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3554.461f, 3680.366f, 27.122f, 3558.623f, 3679.67f, 30.122f, 3.3f, 0, 1, 0) || PED::IS_PED_RAGDOLL(Local_987[5 /*25*/]))
						{
							Local_110.f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_110, Local_110.f_15, "missfbi5ig_21", "holdup_hallway_saw_player_steve", 8f, -4f, 5, 0, 8f, 0);
							iLocal_3120 = 0;
							Local_110.f_9 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_21", "holdup_hallway_saw_player_steve", Local_3397, Local_3400, 1f, 2) };
						}
						else
						{
							Local_110.f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_110, Local_110.f_15, "missfbi5ig_21", "holdup_hallway_saw_steve_steve", 8f, -4f, 5, 0, 8f, 0);
							iLocal_3120 = 0;
							Local_110.f_9 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_21", "holdup_hallway_saw_steve_steve", Local_3397, Local_3400, 1f, 2) };
						}
						iLocal_3227++;
					}
				}
			}
			else
			{
				iLocal_3227 = 14;
			}
			break;
		
		case 13:
			func_331(&Local_110, &(Local_110.f_15), Local_110.f_9, 3554f, 3664.2f, 28.7f, Local_987[5 /*25*/], 1065353216, 1);
			if (!PED::IS_PED_INJURED(Local_987[5 /*25*/]))
			{
				if (!func_314("fbi5a_dia20"))
				{
					if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia20", 7, 0, 0, 0))
					{
						func_298("fbi5a_dia20", 1);
					}
				}
				if (!func_314("fbi5a_dia22"))
				{
					if (func_314("fbi5a_dia20"))
					{
						if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia22", 7, 0, 0, 0))
						{
							func_298("fbi5a_dia22", 1);
						}
					}
				}
			}
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_110.f_15) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_110.f_15) >= 1f) || PED::IS_PED_INJURED(Local_987[5 /*25*/]))
			{
				iLocal_3227++;
			}
			break;
		
		case 14:
			if (!PED::IS_PED_INJURED(Local_987[5 /*25*/]))
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_110, PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_21", "holdup_hallway_saw_steve_steve", 3558.898f, 3677.85f, 27.125f, 0f, 0f, 170f, 1f, 2), 0.5f, 0.5f, 1.5f, 0, 1, 0))
				{
					if (func_336(Local_110, 242628503, 1, 1) || !iLocal_3107[0])
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_21", "holdup_hallway_saw_steve_steve", 3558.898f, 3677.85f, 27.125f, 0f, 0f, 170f, 1f, 2), Local_987[5 /*25*/], 1f, 0, 0.2f, 0.2f, 1, 0, 0, -957453492, 20000);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_987[5 /*25*/], -1, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
						TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
						iLocal_3107[0] = 1;
					}
				}
				else if (func_336(Local_110, 242628503, -2, 1) || !iLocal_3107[0])
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_987[5 /*25*/], -1, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					iLocal_3107[0] = 1;
				}
			}
			else if (!PED::IS_PED_INJURED(Local_987[4 /*25*/]))
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_110, PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_21", "holdup_hallway_saw_steve_steve", 3558.898f, 3677.85f, 27.125f, 0f, 0f, 170f, 1f, 2), 0.5f, 0.5f, 1.5f, 0, 1, 0))
				{
					if (func_336(Local_110, 242628503, 1, 1) || !iLocal_3107[1])
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_21", "holdup_hallway_saw_steve_steve", 3558.898f, 3677.85f, 27.125f, 0f, 0f, 170f, 1f, 2), Local_987[4 /*25*/], 1f, 0, 0.2f, 0.2f, 1, 0, 0, -957453492, 20000);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_987[4 /*25*/], -1, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
						TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
						iLocal_3107[1] = 1;
					}
				}
				else if (func_336(Local_110, 242628503, -2, 1) || !iLocal_3107[1])
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_987[4 /*25*/], -1, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					iLocal_3107[1] = 1;
				}
			}
			else if (func_336(Local_110, 242628503, 1, 1) || !iLocal_3107[2])
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_110, PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_21", "holdup_hallway_saw_steve_steve", 3558.898f, 3677.85f, 27.125f, 0f, 0f, 170f, 1f, 2), 0.5f, 0.5f, 1.5f, 0, 1, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_21", "holdup_hallway_saw_steve_steve", 3558.898f, 3677.85f, 27.125f, 0f, 0f, 170f, 1f, 2), 3557.1f, 3690.4f, 28.8f, 1f, 0, 0.2f, 0.2f, 1, 0, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, 3557.1f, 3690.4f, 28.8f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					iLocal_3107[2] = 1;
				}
				else if (func_336(Local_110, 242628503, -2, 1) || !iLocal_3107[2])
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_AIM_GUN_AT_COORD(0, 3553.9f, 3668.7f, 28.8f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					iLocal_3107[2] = 1;
				}
			}
			break;
	}
}

void func_793()//Position - 0x7A8D6
{
	float fVar0;
	float fVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	
	switch (iLocal_3226)
	{
		case 0:
			iLocal_3121 = 0;
			Local_85.f_9 = { 3532.22f, 3666.64f, 27.1238f };
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(3538.8f, 3673.7f, 27.1f, 1f, joaat("v_ilev_bl_doorel_l"), 1) && OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(3541.7f, 3673.2f, 27.1f, 1f, joaat("v_ilev_bl_doorel_r"), 1))
			{
				OBJECT::GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_bl_doorel_l"), 3538.8f, 3673.7f, 27.1f, &uVar2, &fVar0);
				OBJECT::GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_bl_doorel_r"), 3541.7f, 3673.2f, 27.1f, &uVar3, &fVar1);
				if (fVar0 < -0.6f && fVar1 > 0.6f)
				{
					Local_3397 = { 3538.663f, 3673.165f, 27.126f };
					Local_3400 = { 0f, 0f, 80.4f };
					Local_85.f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_85, Local_85.f_15, "missfbi5ig_12", "moveto_hall_cover_dave", 8f, -1000f, 5, 0, 1000f, 0);
					iLocal_3226++;
				}
			}
			break;
		
		case 1:
			func_338(&Local_85, &(Local_85.f_15), &iLocal_3249, Local_85.f_9, 1f, 0.5f, 1, 0, iLocal_3626[7]);
			if (func_337(Local_85, Local_85.f_9, 2f, 0) || iLocal_3121)
			{
				iLocal_3121 = 1;
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_85.f_15))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_85, -8f, 1);
					Local_85.f_15 = -1;
				}
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_85, 3531.119f, 3667.406f, 27.1217f, 0.5f, 0.5f, 2f, 0, 1, 0))
				{
					if (func_336(Local_85, 242628503, 1, 1))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 3531.119f, 3667.406f, 27.1217f, 3535.4f, 3664f, 28.5f, 1f, 0, 0.2f, 0.2f, 1, 512, 0, -957453492);
						TASK::TASK_AIM_GUN_AT_COORD(0, 3535.4f, 3664f, 28.5f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
						TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					}
				}
			}
			STREAMING::REQUEST_ANIM_DICT("missfbi5ig_17_b");
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3532.774f, 3666.266f, 27.127f, 3532.26f, 3663.208f, 30.127f, 2.2f, 0, 1, 0))
			{
				iLocal_3226++;
			}
			if (PED::IS_PED_INJURED(Local_987[1 /*25*/]) && PED::IS_PED_INJURED(Local_987[2 /*25*/]))
			{
				iLocal_3226 = 5;
			}
			break;
		
		case 2:
			STREAMING::REQUEST_ANIM_DICT("missfbi5ig_17_b");
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_85.f_15))
			{
				func_338(&Local_85, &(Local_85.f_15), &iLocal_3249, Local_85.f_9, 1065353216, 1056964608, 0, 0, 0);
				if (func_337(Local_85, Local_85.f_9, 2f, 0) || iLocal_3121)
				{
					iLocal_3121 = 1;
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_85.f_15))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_85, -8f, 1);
						Local_85.f_15 = -1;
						TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 3531.119f, 3667.406f, 27.1217f, 3535.4f, 3664f, 28.5f, 1f, 0, 0.2f, 0.2f, 1, 512, 0, -957453492);
						TASK::TASK_AIM_GUN_AT_COORD(0, 3535.4f, 3664f, 28.5f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
						TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					}
				}
			}
			else if (func_332(&iLocal_81, &Local_85, &iLocal_3249, Local_85.f_9, iLocal_3626[7], 3538.6f, 3660.3f, 29.2f, 1056964608) && STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_17_b"))
			{
				Local_85.f_9 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_17_b", "run_in_aim_dave", Local_3397, Local_3400, 1f, 2) };
				switch (iLocal_81)
				{
					case 0:
						Local_3397 = { 3533.92f, 3662.75f, 28.118f };
						Local_3400 = { 0f, 0f, 169.92f };
						Local_85.f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_85, Local_85.f_15, "missfbi5ig_17_b", "run_in_aim_dave", 8f, -8f, 5, 0, 8f, 0);
						break;
					
					case 1:
						TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_85.f_9, 3537.3f, 3663.4f, 29f, 1f, 0, 0.2f, 0.2f, 1, 512, 0, -957453492);
						TASK::TASK_AIM_GUN_AT_COORD(0, 3537.3f, 3663.4f, 29f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
						TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
						break;
				}
				iLocal_3226++;
			}
			break;
		
		case 3:
			func_331(&Local_85, &(Local_85.f_15), Local_85.f_9, 3537.3f, 3663.4f, 29f, 0, 1065353216, 1);
			if (PED::IS_PED_INJURED(Local_987[2 /*25*/]) && PED::IS_PED_INJURED(Local_987[3 /*25*/]))
			{
				iLocal_3226 = 5;
			}
			break;
		
		case 4:
			if (PED::IS_PED_INJURED(Local_987[2 /*25*/]) && PED::IS_PED_INJURED(Local_987[3 /*25*/]))
			{
				iLocal_3226 = 5;
			}
			break;
		
		case 5:
			Local_85.f_9 = { 3547.15f, 3642.328f, 27.1219f };
			TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
			TASK::TASK_AIM_GUN_AT_COORD(0, 3536f, 3662f, 29f, 500, 0, 0);
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "fbi5_dave_1", 0, 44, -1);
			TASK::TASK_AIM_GUN_AT_COORD(0, 3540.94f, 3645.2f, 28.72f, -1, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
			TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
			iLocal_3226++;
			break;
		
		case 6:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_85))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_85, 2f, 0);
				if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("fbi5_dave_1", ENTITY::GET_ENTITY_COORDS(Local_85, 1), &iVar4))
				{
					if (iVar4 > 2)
					{
						if (iVar4 < 14)
						{
							TASK::WAYPOINT_PLAYBACK_START_AIMING_AT_COORD(Local_85, 3535.4f, 3646.4f, 28.3f, 0);
						}
						else
						{
							TASK::WAYPOINT_PLAYBACK_START_AIMING_AT_COORD(Local_85, 3541.9f, 3645.2f, 28.9f, 0);
						}
					}
				}
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(Local_85, Local_85.f_9, 0.5f, 0.5f, 2f, 0, 1, 0))
			{
				if (func_336(Local_85, 242628503, -2, 1))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_85.f_9, 3548.18f, 3646.84f, 28.92f, 2f, 0, 0.2f, 0.2f, 1, 512, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, 3540.94f, 3645.2f, 28.72f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_135[1 /*25*/]))
			{
				if (!PED::IS_PED_INJURED(Local_135[1 /*25*/]))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_135[1 /*25*/], 3545.832f, 3643.64f, 27.128f, 3546.306f, 3646.501f, 30.128f, 1.5f, 0, 1, 0))
					{
						iLocal_3226++;
					}
				}
				else
				{
					iLocal_3226++;
				}
			}
			else if (Local_135[1 /*25*/].f_18)
			{
				if (PED::IS_PED_INJURED(Local_135[1 /*25*/]))
				{
					iLocal_3226++;
				}
			}
			break;
		
		case 7:
			if (!ENTITY::IS_ENTITY_AT_COORD(Local_85, Local_85.f_9, 0.1f, 0.1f, 2f, 0, 1, 0))
			{
				if (func_336(Local_85, 242628503, -2, 1))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_85.f_9, 3548.18f, 3646.84f, 28.92f, 2f, 0, 0.2f, 0.2f, 1, 512, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, 3540.94f, 3645.2f, 28.72f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
				}
			}
			if (iLocal_3232 > 2 || iLocal_3233 > 2)
			{
				PED::SET_PED_COMBAT_MOVEMENT(Local_85, 0);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_85, Local_85.f_9, 0.8f, 0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_85, 0);
				iLocal_3226 = 8;
			}
			if (PED::IS_PED_INJURED(Local_135[1 /*25*/]) && PED::IS_PED_INJURED(Local_135[2 /*25*/]))
			{
				PED::SET_PED_COMBAT_MOVEMENT(Local_85, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_85, 1);
				TASK::CLEAR_PED_TASKS(Local_85);
				iLocal_3226 = 9;
			}
			break;
		
		case 8:
			if (iLocal_3232 > 2 || iLocal_3233 > 2)
			{
				PED::SET_PED_COMBAT_MOVEMENT(Local_85, 0);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_85, Local_85.f_9, 0.8f, 0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_85, 0);
			}
			if (PED::IS_PED_INJURED(Local_135[1 /*25*/]) && PED::IS_PED_INJURED(Local_135[2 /*25*/]))
			{
				PED::SET_PED_COMBAT_MOVEMENT(Local_85, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_85, 1);
				TASK::CLEAR_PED_TASKS(Local_85);
				iLocal_3226 = 9;
			}
			break;
		
		case 9:
			STREAMING::REQUEST_ANIM_DICT("missfbi5ig_20a");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_20a"))
			{
				Local_3397 = { 3551.58f, 3658.52f, 27.125f };
				Local_3400 = { 0f, 0f, 170f };
				Local_85.f_9 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_20a", "run_through_door_dave", Local_3397, Local_3400, 0f, 2) };
				Local_85.f_6 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_20a", "run_through_door_dave", Local_3397, Local_3400, 0f, 2) };
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_85, Local_85.f_9, 0.1f, 0.1f, 2f, 0, 1, 0))
				{
					if (func_336(Local_85, 713668775, -2, 0))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_85, 1);
						TASK::CLEAR_PED_TASKS(Local_85);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_85, Local_85.f_9, 1f, -1, 0.05f, 512, Local_85.f_6.f_2);
					}
				}
				else
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_85, 1);
					Local_85.f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_85, Local_85.f_15, "missfbi5ig_20a", "run_through_door_dave", 4f, -8f, 5, 0, 4f, 0);
					Local_85.f_9 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_20a", "run_through_door_dave", Local_3397, Local_3400, 1f, 2) };
					iLocal_3322 = 0;
					iLocal_3226++;
				}
			}
			break;
		
		case 10:
			func_331(&Local_85, &(Local_85.f_15), Local_85.f_9, 3555f, 3664.8f, 28.8f, 0, 1065353216, 1);
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_85.f_15))
			{
				if (iLocal_3322 == 0)
				{
					iLocal_3322 = MISC::GET_GAME_TIMER();
				}
				if (GlobalFunc_588(&iLocal_3322, 7000))
				{
					if (func_794(PLAYER::PLAYER_PED_ID(), 3551.589f, 3662.301f, 27.1218f, "Lab_hazmat1"))
					{
						if (!GlobalFunc_5172(&Local_3049, 0))
						{
							if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dcome", 7, 0, 0, 0))
							{
								iLocal_3322 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
			}
			STREAMING::REQUEST_ANIM_DICT("missfbi5ig_20b");
			if (iLocal_3250 > 22)
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_20b"))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_85.f_15))
					{
						Local_85.f_9 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_20b", "ask_open_door_dave", 3558.88f, 3677.87f, 27.125f, 0f, 0f, 170f, 1f, 2) };
						PED::SET_SYNCHRONIZED_SCENE_RATE(Local_85.f_15, 1f);
						PED::SET_PED_CONFIG_FLAG(Local_85, 185, 1);
						GlobalFunc_4956();
						GlobalFunc_5157(&uLocal_3788, "fbi5aAU", "fbi5a_dia16b", 7, 0, 0);
						RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
						iLocal_3226++;
					}
				}
			}
			break;
		
		case 11:
			func_331(&Local_85, &(Local_85.f_15), Local_85.f_9, Local_987[4 /*25*/].f_3, Local_987[4 /*25*/], 1065353216, 1);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_85.f_15))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_85.f_15) > 0.55f)
				{
					if (!func_314("fbi5a_dia17"))
					{
						if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia17", 7, 0, 0, 0))
						{
							func_298("fbi5a_dia17", 1);
						}
					}
				}
			}
			else if (func_314("fbi5a_dia19b"))
			{
				Local_987[5 /*25*/].f_18 = 1;
				iLocal_3226++;
			}
			if (!func_314("fbi5a_outno"))
			{
				if (func_314("fbi5a_dia17"))
				{
					if (!GlobalFunc_5172(&Local_3049, 0))
					{
						if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_outno", 7, 0, 0, 0))
						{
							func_298("fbi5a_outno", 1);
						}
					}
				}
			}
			if (!func_314("fbi5a_dia18"))
			{
				if (func_314("fbi5a_outno"))
				{
					if (!GlobalFunc_5172(&Local_3049, 0))
					{
						if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia18", 7, 0, 0, 0))
						{
							func_298("fbi5a_dia18", 1);
						}
					}
				}
			}
			if (!func_314("fbi5a_dia19b"))
			{
				if (func_314("fbi5a_dia18"))
				{
					if (!GlobalFunc_5172(&Local_3049, 0))
					{
						if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia19b", 7, 0, 0, 0))
						{
							func_298("fbi5a_dia19b", 1);
						}
					}
				}
			}
			break;
		
		case 12:
			func_331(&Local_85, &(Local_85.f_15), Local_85.f_9, Local_987[4 /*25*/].f_3, Local_987[4 /*25*/], 1065353216, 1);
			if (!PED::IS_PED_INJURED(Local_987[5 /*25*/]))
			{
				if (func_314("fbi5a_dia20"))
				{
					if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia21", 7, 0, 0, 0))
					{
						func_298("fbi5a_dia21", 1);
						iLocal_3226++;
					}
				}
			}
			else if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia21b", 7, 0, 0, 0))
			{
				func_298("fbi5a_dia21b", 1);
				iLocal_3226++;
			}
			else
			{
				GlobalFunc_4935();
			}
			break;
		
		case 13:
			func_331(&Local_85, &(Local_85.f_15), Local_85.f_9, Local_987[4 /*25*/].f_3, Local_987[4 /*25*/], 1065353216, 1);
			STREAMING::REQUEST_ANIM_DICT("missfbi5ig_22");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_22"))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(Local_85, Local_85.f_9, 0.5f, 0.5f, 2f, 0, 1, 0))
				{
					Local_3397 = { 3558.898f, 3677.85f, 27.125f };
					Local_3400 = { 0f, 0f, 170f };
					Local_85.f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_85, Local_85.f_15, "missfbi5ig_22", "aim_scientist_walkout_dave", 4f, -8f, 5, 0, 4f, 0);
					iLocal_3226++;
				}
			}
			break;
		
		case 14:
			if (PED::IS_PED_INJURED(Local_987[4 /*25*/]) || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_85.f_15) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_85.f_15) >= 1f))
			{
				PED::SET_PED_CONFIG_FLAG(Local_85, 185, 0);
				GlobalFunc_4935();
				iLocal_3226++;
			}
			if (!func_314("fbi5a_dia23"))
			{
				if (!GlobalFunc_5172(&Local_3049, 0))
				{
					if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia23", 7, 0, 0, 0))
					{
						func_298("fbi5a_dia23", 1);
					}
				}
			}
			break;
		
		case 15:
			if (!func_314("fbi5a_dia23"))
			{
				if (!GlobalFunc_5172(&Local_3049, 0))
				{
					if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia23", 7, 0, 0, 0))
					{
						func_298("fbi5a_dia23", 1);
						iLocal_3226++;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Local_2151))
			{
				if (!func_314("GET_CHEMS"))
				{
					if (!GlobalFunc_5172(&Local_3049, 0))
					{
						func_298("GET_CHEMS", 1);
						GlobalFunc_164("GET_CHEMS", 7500, 1);
					}
				}
			}
			if (!PED::IS_PED_INJURED(Local_987[4 /*25*/]))
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_85, PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_22", "aim_scientist_walkout_dave", 3558.898f, 3677.85f, 27.125f, 0f, 0f, 170f, 1f, 2), 0.5f, 0.5f, 1.5f, 0, 1, 0))
				{
					if (func_336(Local_85, 242628503, 1, 1) || !iLocal_3111[0])
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_22", "aim_scientist_walkout_dave", 3558.898f, 3677.85f, 27.125f, 0f, 0f, 170f, 1f, 2), Local_987[4 /*25*/], 1f, 0, 0.2f, 0.2f, 1, 512, 0, -957453492, 20000);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_987[4 /*25*/], -1, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
						TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
						iLocal_3111[0] = 1;
					}
				}
				else if (func_336(Local_85, 242628503, -2, 1) || !iLocal_3111[0])
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_987[4 /*25*/], -1, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					PED::FORCE_PED_MOTION_STATE(Local_85, 1063765679, 0, 0, 0);
					iLocal_3111[0] = 1;
				}
			}
			else if (!PED::IS_PED_INJURED(Local_987[5 /*25*/]))
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_85, PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_22", "aim_scientist_walkout_dave", 3558.898f, 3677.85f, 27.125f, 0f, 0f, 170f, 1f, 2), 0.5f, 0.5f, 1.5f, 0, 1, 0))
				{
					if (func_336(Local_85, 242628503, 1, 1) || !iLocal_3111[1])
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_22", "aim_scientist_walkout_dave", 3558.898f, 3677.85f, 27.125f, 0f, 0f, 170f, 1f, 2), Local_987[5 /*25*/], 1f, 0, 0.2f, 0.2f, 1, 0, 0, -957453492, 20000);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_987[5 /*25*/], -1, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
						TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
						iLocal_3111[1] = 1;
					}
				}
				else if (func_336(Local_85, 242628503, -2, 1) || !iLocal_3111[1])
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_987[5 /*25*/], -1, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					iLocal_3111[1] = 1;
				}
			}
			else if (func_336(Local_85, 242628503, 1, 1) || !iLocal_3111[2])
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_85, PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_22", "aim_scientist_walkout_dave", 3558.898f, 3677.85f, 27.125f, 0f, 0f, 170f, 1f, 2), 0.5f, 0.5f, 1.5f, 0, 1, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_22", "aim_scientist_walkout_dave", 3558.898f, 3677.85f, 27.125f, 0f, 0f, 170f, 1f, 2), 3557.1f, 3690.4f, 28.8f, 1f, 0, 0.2f, 0.2f, 1, 0, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, 3557.1f, 3690.4f, 28.8f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					iLocal_3111[2] = 1;
				}
				else if (func_336(Local_85, 242628503, -2, 1) || !iLocal_3107[2])
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_AIM_GUN_AT_COORD(0, 3553.9f, 3668.7f, 28.8f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					iLocal_3111[2] = 1;
				}
			}
			break;
	}
}

int func_794(int iParam0, struct<3> Param1, char* sParam4)//Position - 0x7BB95
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
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

void func_795()//Position - 0x7BBE9
{
	switch (iLocal_3225)
	{
		case 0:
			AUDIO::PLAY_SOUND_FROM_COORD(iLocal_3203, "LIFTS_TONE", 3538.8f, 3673.7f, 27.1f, 0, 0, 0, 0);
			iLocal_3225++;
			break;
		
		case 1:
			if (AUDIO::HAS_SOUND_FINISHED(iLocal_3203))
			{
				AUDIO::PLAY_SOUND_FROM_COORD(iLocal_3203, "LIFT_POSH_DOOR_OPEN", 3538.8f, 3673.7f, 27.1f, 0, 0, 0, 0);
				func_763(iLocal_3292[3], iLocal_3292[4], 1, 1065353216);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_5_LIFT_SCENE"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_5_LIFT_SCENE");
				}
				AUDIO::START_AUDIO_SCENE("FBI_5_GET_TO_NERVE_TOXIN");
				iLocal_3225++;
			}
			break;
		
		case 2:
			if (func_763(iLocal_3292[3], iLocal_3292[4], 1, 1065353216))
			{
				AUDIO::STOP_SOUND(iLocal_3203);
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\LIFTS");
				iLocal_3225++;
			}
			break;
		
		case 3:
			break;
	}
}

void func_796()//Position - 0x7BCDC
{
	switch (iLocal_3228)
	{
		case 0:
			if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia0", 6, 0, 0, 0))
			{
				iLocal_3228++;
			}
			break;
		
		case 1:
			if (!GlobalFunc_5172(&Local_3049, 0))
			{
				if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia1", 6, 0, 0, 0))
				{
					iLocal_3228++;
				}
			}
			break;
		
		case 2:
			if (!GlobalFunc_5172(&Local_3049, 0))
			{
				if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia2", 6, 0, 0, 0))
				{
					iLocal_3228++;
				}
			}
			break;
		
		case 3:
			if (!GlobalFunc_5172(&Local_3049, 0))
			{
				if (!func_314("TAZ_LAB"))
				{
					GlobalFunc_164("TAZ_LAB", 7500, 1);
					func_298("TAZ_LAB", 1);
				}
				iLocal_3228++;
			}
			break;
		
		case 4:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3532.774f, 3666.266f, 27.127f, 3532.26f, 3663.208f, 30.127f, 2.2f, 0, 1, 0))
			{
				iLocal_3228++;
			}
			break;
		
		case 5:
			if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_holdup", 7, 0, 0, 0))
			{
				iLocal_3228++;
			}
			break;
		
		case 6:
			if (!func_314("fbi5a_dia5b"))
			{
				if (!PED::IS_PED_INJURED(Local_987[2 /*25*/]) && !PED::IS_PED_INJURED(Local_987[3 /*25*/]))
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia5b", 7, 0, 0, 0))
						{
							func_298("fbi5a_dia5b", 1);
						}
					}
				}
			}
			if (!func_314("fbi5a_dia5c"))
			{
				if ((PED::IS_PED_INJURED(Local_987[2 /*25*/]) && !PED::IS_PED_INJURED(Local_987[3 /*25*/])) || (PED::IS_PED_INJURED(Local_987[3 /*25*/]) && !PED::IS_PED_INJURED(Local_987[2 /*25*/])))
				{
					if (GlobalFunc_588(&iLocal_3282, 10000))
					{
						if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia5c", 7, 0, 0, 0))
						{
							func_298("fbi5a_dia5c", 1);
						}
					}
				}
			}
			if (!func_314("fbi5a_dia5d"))
			{
				if (iLocal_3106 && GlobalFunc_588(&iLocal_3282, 30000))
				{
					func_298("fbi5a_dia5d", 1);
					func_298("fbi5a_dia5c", 1);
				}
			}
			if (func_314("fbi5a_dia5d"))
			{
				if (!GlobalFunc_111())
				{
					iLocal_3282 = MISC::GET_GAME_TIMER();
					iLocal_3105 = 1;
				}
			}
			if (PED::IS_PED_INJURED(Local_987[2 /*25*/]) && PED::IS_PED_INJURED(Local_987[3 /*25*/]))
			{
				iLocal_3228++;
			}
			break;
		
		case 7:
			if (PED::IS_PED_INJURED(Local_987[2 /*25*/]) && PED::IS_PED_INJURED(Local_987[3 /*25*/]))
			{
				if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia6", 7, 0, 0, 0))
				{
					iLocal_3228++;
				}
			}
			break;
		
		case 8:
			if (!GlobalFunc_5172(&Local_3049, 0))
			{
				if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia7", 7, 0, 0, 0))
				{
					iLocal_3228++;
				}
			}
			break;
		
		case 9:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3541.838f, 3645.78f, 27.137f, 3538.978f, 3646.279f, 30.135f, 3.4f, 0, 1, 0))
			{
				if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia10", 7, 0, 0, 0))
				{
					iLocal_3228++;
				}
			}
			break;
		
		case 10:
			if (!PED::IS_PED_INJURED(Local_135[1 /*25*/]))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_135[1 /*25*/], 3545.832f, 3643.64f, 27.128f, 3546.306f, 3646.501f, 30.128f, 1.5f, 0, 1, 0))
				{
					if (iLocal_3232 < 2 && iLocal_3233 < 2)
					{
						if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia15", 7, 0, 0, 0))
						{
							iLocal_3228++;
						}
					}
					else
					{
						iLocal_3228++;
					}
				}
			}
			break;
		
		case 11:
			if (!GlobalFunc_5172(&Local_3049, 0))
			{
				iLocal_3228++;
			}
			break;
		
		case 12:
			switch (GlobalFunc_7050())
			{
				case 0:
					if (!GlobalFunc_111())
					{
						if (!func_314("fbi5a_chat1"))
						{
							if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_chat1", 6, 1, 1, 0))
							{
								iLocal_3228++;
							}
						}
						else
						{
							iLocal_3228++;
						}
					}
					break;
				
				case 1:
					if (!GlobalFunc_111())
					{
						if (!func_314("fbi5a_chat2"))
						{
							if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_chat2", 6, 1, 1, 0))
							{
								iLocal_3228++;
							}
						}
						else
						{
							iLocal_3228++;
						}
					}
					break;
				
				default:
					if (!GlobalFunc_111())
					{
						if (!func_314("fbi5a_chat2"))
						{
							if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_chat2", 6, 1, 1, 0))
							{
								iLocal_3228++;
							}
						}
						else
						{
							iLocal_3228++;
						}
					}
					break;
			}
			break;
		
		case 13:
			if (PED::IS_PED_INJURED(Local_135[1 /*25*/]) && PED::IS_PED_INJURED(Local_135[2 /*25*/]))
			{
				iLocal_3228++;
			}
			break;
		
		case 14:
			if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia16", 7, 0, 0, 0))
			{
				iLocal_3228++;
			}
			break;
		
		case 15:
			if (!GlobalFunc_5172(&Local_3049, 0))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3549.414f, 3662.368f, 27.12f, 3559.35f, 3660.562f, 29.722f, 8f, 0, 1, 0))
				{
					iLocal_3228++;
				}
			}
			break;
		
		case 16:
			if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_swipe", 7, 0, 0, 0))
			{
				iLocal_3228++;
			}
			break;
		
		case 17:
			break;
	}
	if (iLocal_3228 < 4)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3532.774f, 3666.266f, 27.127f, 3532.26f, 3663.208f, 30.127f, 2.2f, 0, 1, 0))
		{
			iLocal_3228 = 4;
		}
	}
	if (iLocal_3228 < 7)
	{
		if (PED::IS_PED_INJURED(Local_987[2 /*25*/]) && PED::IS_PED_INJURED(Local_987[3 /*25*/]))
		{
			iLocal_3228 = 7;
		}
	}
	if (iLocal_3228 < 14)
	{
		if (Local_135[1 /*25*/].f_18)
		{
			if (PED::IS_PED_INJURED(Local_135[1 /*25*/]) && PED::IS_PED_INJURED(Local_135[2 /*25*/]))
			{
				iLocal_3228 = 14;
			}
		}
	}
}



int func_799()//Position - 0x7C394
{
	func_800();
	switch (iLocal_3250)
	{
		case 0:
			if (func_794(PLAYER::PLAYER_PED_ID(), 3552.663f, 3662.503f, 27.1217f, "lab_hazmat1"))
			{
				STREAMING::REQUEST_ANIM_DICT("missfbi5ig_20b");
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\FBI_05_GRAB_TOXIN", 0);
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3553.929f, 3664.253f, 27.127f, 3555.701f, 3663.94f, 29.127f, 3f, 0, 1, 0) && STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_20b")) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\FBI_05_GRAB_TOXIN", 0))
				{
					if (func_485(1, 1, 0, 0))
					{
						iLocal_3127 = 0;
						MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 100f, 1, 0, 0, 0);
						STREAMING::REMOVE_ANIM_DICT("missfbi5ig_12");
						STREAMING::REMOVE_ANIM_DICT("missfbi5ig_14");
						STREAMING::REMOVE_ANIM_DICT("missfbi5ig_17");
						STREAMING::REMOVE_ANIM_DICT("missfbi5ig_17_b");
						STREAMING::REMOVE_ANIM_DICT("missfbi5ig_18_p1");
						STREAMING::REMOVE_ANIM_DICT("missfbi5ig_18_p2");
						STREAMING::REMOVE_ANIM_DICT("missfbi5ig_20a");
						if (ENTITY::DOES_ENTITY_EXIST(Local_2223.x))
						{
							OBJECT::DELETE_OBJECT(&Local_2223);
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_2247.x))
						{
							OBJECT::DELETE_OBJECT(&Local_2247);
						}
						if (HUD::DOES_BLIP_EXIST(uLocal_3611))
						{
							HUD::REMOVE_BLIP(&uLocal_3611);
						}
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						Local_3397 = { 3558.88f, 3677.87f, 27.125f };
						Local_3400 = { 0f, 0f, 170f };
						iLocal_3251 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_3251, "missfbi5ig_20b", "press_open_door_player0", 1000f, -4f, 1, 0, 1000f, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
						Local_1958 = OBJECT::CREATE_OBJECT(Local_1958.f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 0f, 1f), 1, 1, 0);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_1958, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_1958);
						uLocal_3603 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_3603, iLocal_3251, "press_open_door_cam", "missfbi5ig_20b");
						CAM::SET_CAM_ACTIVE(uLocal_3603, 1);
						CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_3251, 0.25f);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_85);
						Local_3397 = { 3558.88f, 3677.87f, 27.125f };
						Local_3400 = { 0f, 0f, 170f };
						Local_85.f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_85, Local_85.f_15, "missfbi5ig_20b", "ask_open_door_dave", 1000f, -8f, 5, 0, 1000f, 0);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_85.f_15, 0.22f);
						PED::SET_SYNCHRONIZED_SCENE_RATE(Local_85.f_15, 0f);
						ENTITY::SET_ENTITY_VISIBLE(Local_85, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_85, 0, 0);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_110);
						Local_3397 = { 3558.88f, 3677.87f, 27.125f };
						Local_3400 = { 0f, 0f, 170f };
						Local_110.f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_110, Local_110.f_15, "missfbi5ig_20b", "ask_open_door_steve", 1000f, -8f, 5, 0, 1000f, 0);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_110.f_15, 0.01f);
						PED::SET_SYNCHRONIZED_SCENE_RATE(Local_110.f_15, 0f);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_110, 0, 0);
						iLocal_3120 = 0;
						iLocal_3250++;
					}
				}
			}
			break;
		
		case 1:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3251))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3251) >= 0.8f)
				{
					OBJECT::DELETE_OBJECT(&Local_1958);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1958.f_2);
					ENTITY::SET_ENTITY_VISIBLE(Local_85, 1);
					Local_987[4 /*25*/].f_2 = GlobalFunc_6797(Local_987[4 /*25*/], 1, 145);
					iLocal_3127 = 1;
					func_473(1, 0, 0, 0f, 0f, 3000, 0, 1, 1, 1, 1);
					PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -633298724, 0, 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
					CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
					iLocal_3250 = 23;
				}
			}
			break;
		
		case 22:
			iLocal_3250 = 23;
			break;
	}
	return 0;
}

void func_800()//Position - 0x7C768
{
	switch (iLocal_3252)
	{
		case 0:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3251))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3251) > 0.6f)
				{
					func_763(iLocal_3292[11], iLocal_3292[12], 1, 1065353216);
					iLocal_3252++;
				}
			}
			break;
		
		case 1:
			if (func_763(iLocal_3292[11], iLocal_3292[12], 1, 1065353216))
			{
				iLocal_3252++;
			}
			break;
	}
}

int func_801()//Position - 0x7C7E8
{
	int iVar0;
	
	switch (iLocal_3222)
	{
		case 0:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_85, 3539.414f, 3673.118f, 27.127f, 3538.843f, 3669.665f, 30.127f, 2.6f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3539.414f, 3673.118f, 27.127f, 3538.843f, 3669.665f, 30.127f, 2.6f, 0, 1, 0))
			{
				iVar0 = 2;
				while (iVar0 <= 3)
				{
					if (!PED::IS_PED_INJURED(Local_987[iVar0 /*25*/]))
					{
						Local_987[iVar0 /*25*/].f_2 = GlobalFunc_6797(Local_987[iVar0 /*25*/], 1, 145);
					}
					iVar0++;
				}
				iLocal_3223 = MISC::GET_GAME_TIMER();
				iLocal_3222++;
			}
			break;
		
		case 1:
			func_760(&Local_987, 1, 0);
			if (PED::IS_PED_INJURED(Local_987[2 /*25*/]) && PED::IS_PED_INJURED(Local_987[3 /*25*/]))
			{
				HUD::CLEAR_PRINTS();
				iLocal_3222++;
			}
			break;
		
		case 2:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3544.821f, 3647.11f, 27.127f, 3543.693f, 3640.708f, 30.135f, 10.9f, 0, 1, 0))
			{
				uLocal_3610 = GlobalFunc_5104(3545.004f, 3643.062f, 27.123f, 0);
				iLocal_3222++;
				iLocal_3223 = MISC::GET_GAME_TIMER();
			}
			break;
		
		case 3:
			func_802();
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3544.821f, 3647.11f, 27.127f, 3543.693f, 3640.708f, 30.135f, 10.9f, 0, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_85, 3544.821f, 3647.11f, 27.127f, 3543.693f, 3640.708f, 30.135f, 10.9f, 0, 1, 0)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_110, 3544.821f, 3647.11f, 27.127f, 3543.693f, 3640.708f, 30.135f, 10.9f, 0, 1, 0))
			{
				func_541(&(Local_135[1 /*25*/]), 0);
				PED::SET_PED_CONFIG_FLAG(Local_135[1 /*25*/], 104, 1);
				PED::SET_PED_COMPONENT_VARIATION(Local_135[1 /*25*/], 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_135[1 /*25*/], 1, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_135[1 /*25*/], 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_135[1 /*25*/], 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_135[1 /*25*/], 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_135[1 /*25*/], 5, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_135[1 /*25*/], 6, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_135[1 /*25*/], 7, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_135[1 /*25*/], 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_135[1 /*25*/], 9, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_135[1 /*25*/], 10, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_135[1 /*25*/], 11, 0, 0, 0);
				GlobalFunc_173(&uLocal_3788, GlobalFunc_2020("C"), Local_135[1 /*25*/], "SECURITY2", 0, 1);
				HUD::SET_BLIP_DISPLAY(Local_135[1 /*25*/].f_2, 2);
				func_541(&(Local_135[2 /*25*/]), 0);
				PED::SET_PED_CONFIG_FLAG(Local_135[2 /*25*/], 104, 1);
				PED::SET_PED_COMPONENT_VARIATION(Local_135[2 /*25*/], 0, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_135[2 /*25*/], 1, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_135[2 /*25*/], 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_135[2 /*25*/], 3, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_135[2 /*25*/], 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_135[2 /*25*/], 5, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_135[2 /*25*/], 6, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_135[2 /*25*/], 7, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_135[2 /*25*/], 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_135[2 /*25*/], 9, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_135[2 /*25*/], 10, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_135[2 /*25*/], 11, 0, 0, 0);
				GlobalFunc_173(&uLocal_3788, GlobalFunc_2020("D"), Local_135[2 /*25*/], "SECURITY3", 0, 1);
				HUD::SET_BLIP_DISPLAY(Local_135[2 /*25*/].f_2, 2);
				AUDIO::START_AUDIO_SCENE("FBI_5_HIDE_FROM_SECURITY");
				iLocal_3223 = MISC::GET_GAME_TIMER();
				iLocal_3222++;
			}
			break;
		
		case 4:
			func_802();
			if (!PED::IS_PED_INJURED(Local_135[1 /*25*/]))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_135[1 /*25*/], 3545.832f, 3643.64f, 27.128f, 3546.306f, 3646.501f, 30.128f, 1f, 0, 1, 0) || iLocal_3232 >= 2)
				{
					HUD::CLEAR_PRINTS();
					if (HUD::DOES_BLIP_EXIST(uLocal_3610))
					{
						HUD::REMOVE_BLIP(&uLocal_3610);
					}
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[7], 0f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[7], 3, 0, 1);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[8], 0f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[8], 3, 0, 1);
					iLocal_3222++;
				}
			}
			break;
		
		case 5:
			func_760(&Local_135, 1, 0);
			if (PED::IS_PED_INJURED(Local_135[1 /*25*/]) && PED::IS_PED_INJURED(Local_135[2 /*25*/]))
			{
				uLocal_3611 = GlobalFunc_5104(3555.047f, 3664.259f, 27.1217f, 0);
				iVar0 = 1;
				while (iVar0 <= 2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_135[iVar0 /*25*/]))
					{
						PED::DELETE_PED(&(Local_135[iVar0 /*25*/]));
						if (HUD::DOES_BLIP_EXIST(Local_135[iVar0 /*25*/].f_2))
						{
							HUD::REMOVE_BLIP(&(Local_135[iVar0 /*25*/].f_2));
						}
					}
					iVar0++;
				}
				GlobalFunc_200(&uLocal_3788, 5);
				GlobalFunc_200(&uLocal_3788, 6);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_5_HIDE_FROM_SECURITY"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_5_HIDE_FROM_SECURITY");
				}
				func_541(&(Local_987[4 /*25*/]), 0);
				HUD::REMOVE_BLIP(&(Local_987[4 /*25*/].f_2));
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_987[4 /*25*/], 55);
				PED::SET_PED_CONFIG_FLAG(Local_987[4 /*25*/], 208, 1);
				ENTITY::SET_ENTITY_PROOFS(Local_987[4 /*25*/], 1, 1, 1, 1, 1, 1, 0, 1);
				PED::SET_PED_MONEY(Local_987[4 /*25*/], 0);
				GlobalFunc_173(&uLocal_3788, GlobalFunc_2020("B"), Local_987[4 /*25*/], "scientist5", 0, 1);
				iLocal_3222++;
			}
			break;
		
		case 6:
			if (func_763(iLocal_3292[9], iLocal_3292[10], 1, 1065353216))
			{
				iLocal_3222++;
			}
			break;
		
		case 7:
			if (Local_987[5 /*25*/].f_18)
			{
				func_541(&(Local_987[5 /*25*/]), 0);
				HUD::REMOVE_BLIP(&(Local_987[5 /*25*/].f_2));
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_987[5 /*25*/], 54);
				PED::SET_PED_CONFIG_FLAG(Local_987[5 /*25*/], 118, 0);
				ENTITY::SET_ENTITY_PROOFS(Local_987[5 /*25*/], 0, 0, 1, 0, 0, 0, 0, 0);
				PED::SET_PED_MONEY(Local_987[5 /*25*/], 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_987[5 /*25*/], 8, 1, 0, 0);
				GlobalFunc_173(&uLocal_3788, 8, Local_987[5 /*25*/], "scientist3", 0, 1);
				Local_2223.x = OBJECT::CREATE_OBJECT(Local_2223.f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_987[5 /*25*/], 0f, 0f, 1f), 1, 1, 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2223.x, Local_987[5 /*25*/], PED::GET_PED_BONE_INDEX(Local_987[5 /*25*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				Local_2247.x = OBJECT::CREATE_OBJECT(Local_2247.f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_987[5 /*25*/], 0f, 0f, 1f), 1, 1, 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2247.x, Local_987[5 /*25*/], PED::GET_PED_BONE_INDEX(Local_987[5 /*25*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				iLocal_3222++;
			}
			break;
		
		case 8:
			STREAMING::REQUEST_ANIM_DICT("missfbi5ig_23");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_23"))
			{
				if ((ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_2151) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_2151)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3558.15f, 3671.999f, 27.122f, 3562.286f, 3671.269f, 29.722f, 2f, 0, 1, 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_802()//Position - 0x7CF2B
{
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3545.004f, 3643.062f, 27.123f, 1f, 1f, 1.5f, 0, 1, 0))
	{
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_3610))
			{
				HUD::CLEAR_PRINTS();
				func_298("COV_SEC1", 1);
				HUD::REMOVE_BLIP(&uLocal_3610);
			}
		}
	}
	else if (!HUD::DOES_BLIP_EXIST(uLocal_3610))
	{
		uLocal_3610 = GlobalFunc_5104(3545.004f, 3643.062f, 27.123f, 0);
	}
	if (!GlobalFunc_5172(&Local_3049, 0))
	{
		if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3545.004f, 3643.062f, 27.123f, 1f, 1f, 1.5f, 0, 1, 0) && !PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0)) || !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3545.004f, 3643.062f, 27.123f, 1f, 1f, 1.5f, 0, 1, 0))
		{
			GlobalFunc_164("COV_SEC1", 7500, 1);
			func_298("COV_SEC1", 1);
		}
	}
}


void func_804()//Position - 0x7D2E7
{
	STREAMING::REQUEST_MODEL(Local_2223.f_2);
	STREAMING::REQUEST_MODEL(Local_2247.f_2);
	STREAMING::REQUEST_MODEL(Local_2151.f_2);
	STREAMING::REQUEST_MODEL(Local_2175.f_2);
	STREAMING::REQUEST_MODEL(Local_1958.f_2);
	STREAMING::REQUEST_MODEL(Local_2006.f_2);
	STREAMING::REQUEST_MODEL(Local_2030.f_2);
	STREAMING::REQUEST_MODEL(Local_1982.f_2);
	STREAMING::REQUEST_COLLISION_FOR_MODEL(Local_1982.f_2);
	STREAMING::REQUEST_MODEL(Local_2440.f_2);
	STREAMING::REQUEST_MODEL(joaat("prop_boxpile_02b"));
	STREAMING::REQUEST_ANIM_DICT("missfbi5ig_15");
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_2464[0 /*15*/].f_13, "lkfbi5a");
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_2464[1 /*15*/].f_13, "lkfbi5a");
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_2464[2 /*15*/].f_13, "lkfbi5a");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\FBI_05_GRAB_TOXIN", 0);
	TASK::REQUEST_WAYPOINT_RECORDING("fbi5_dave_1");
	AUDIO::PREPARE_MUSIC_EVENT("FBI5A_LIFT_EXIT");
}

void func_805()//Position - 0x7D3AA
{
	int iVar0;
	
	RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	if (iLocal_84 != 0)
	{
		CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	}
	if (iLocal_84 == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1958.f_2);
		iVar0 = 0;
		while (iVar0 <= (Local_2271 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_2271[iVar0 /*24*/]))
			{
				OBJECT::DELETE_OBJECT(&(Local_2271[iVar0 /*24*/]));
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2271[iVar0 /*24*/].f_2);
			iVar0++;
		}
		STREAMING::REMOVE_ANIM_DICT("missfbi5ig_2");
		STREAMING::REMOVE_ANIM_DICT("missfbi5ig_5");
		STREAMING::REMOVE_ANIM_DICT("missfbi5ig_8");
		STREAMING::REMOVE_ANIM_DICT("missfbi5ig_10");
		STREAMING::REMOVE_ANIM_DICT("missfbi5ig_11");
		STREAMING::REQUEST_ANIM_DICT("missfbi5ig_12");
		if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_12"))
		{
			if (func_485(0, 0, 1, 0))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_5_GET_TO_LIFT"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_5_GET_TO_LIFT");
				}
				AUDIO::START_AUDIO_SCENE("FBI_5_LIFT_SCENE");
				func_804();
				MISC::CLEAR_AREA(3540.834f, 3676.759f, 27.1233f, 1000f, 1, 0, 0, 0);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(3540.834f, 3676.759f, 27.1233f, 1000f);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Local_987[1 /*25*/].f_3, 3542.13f, 3675.186f, 19f, 3539.177f, 3675.717f, 22.597f, 4f, 0, 1))
				{
					func_541(&(Local_987[6 /*25*/]), 0);
					PED::CLEAR_ALL_PED_PROPS(Local_987[6 /*25*/]);
					AUDIO::DISABLE_PED_PAIN_AUDIO(Local_987[6 /*25*/], 1);
					PED::_0x733C87D4CE22BEA2(Local_987[6 /*25*/]);
					HUD::REMOVE_BLIP(&(Local_987[6 /*25*/].f_2));
					PED::SET_PED_MONEY(Local_987[6 /*25*/], 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_987[6 /*25*/], 0, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_987[6 /*25*/], 1, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_987[6 /*25*/], 2, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_987[6 /*25*/], 3, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_987[6 /*25*/], 4, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_987[6 /*25*/], 5, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_987[6 /*25*/], 6, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_987[6 /*25*/], 7, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_987[6 /*25*/], 8, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_987[6 /*25*/], 9, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_987[6 /*25*/], 10, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_987[6 /*25*/], 11, 0, 0, 0);
					Local_3397 = { 3540.98f, 3676.299f, 28.2f };
					Local_3400 = { 0f, 0f, 62f };
					TASK::TASK_PLAY_ANIM_ADVANCED(Local_987[6 /*25*/], "missfbi5ig_12", "dead_c", Local_3397, Local_3400, 1000f, -8f, -1, 2102280, 0.99f, 2, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_987[6 /*25*/], 0, 0);
				}
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 3540.78f, 3675.01f, 27.1233f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 169.2532f);
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -633298724, 0, 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				if (!ENTITY::IS_ENTITY_DEAD(Local_85))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_85);
					Local_3397 = { 3538.663f, 3673.165f, 27.126f };
					Local_3400 = { 0f, 0f, 80.4f };
					Local_85.f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_85, Local_85.f_15, "missfbi5ig_12", "inlift_loop_dave", 1000f, -8f, 16389, 0, 1000f, 8);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_85.f_15, 1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_85, 0, 0);
					ENTITY::PROCESS_ENTITY_ATTACHMENTS(Local_85);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3622))
					{
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_110))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_110);
					Local_3397 = { 3538.663f, 3673.165f, 27.126f };
					Local_3400 = { 0f, 0f, 80.4f };
					Local_110.f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_110, Local_110.f_15, "missfbi5ig_12", "inlift_loop_steve", 1000f, -8f, 5, 0, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_110.f_15, 1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_110, 0, 0);
				}
				uLocal_3600 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 3539.484f, 3674.813f, 28.54791f, 0.216973f, -0.12816f, -107.8661f, 32.13216f, 1, 2);
				CAM::SET_CAM_PARAMS(uLocal_3600, 3539.611f, 3675.167f, 28.5471f, 0.216973f, -0.12816f, -116.0074f, 32.13216f, 2500, 0, 0, 2);
				CAM::SHAKE_CAM(uLocal_3600, "hand_shake", 0.2f);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				SYSTEM::WAIT(0);
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
				INTERIOR::_0xAF348AFCB575A441("Lab_waste_elev");
				SYSTEM::SETTIMERA(0);
				AUDIO::STOP_SOUND(iLocal_3203);
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_3203, "LIFT_POSH_MOVE", PLAYER::PLAYER_PED_ID(), 0, 0, 0);
				GlobalFunc_5157(&uLocal_3788, "fbi5aAU", "fbi5a_elcut0", 7, 0, 0);
				RECORDING::_0x293220DA1B46CEBC(5f, 0f, 4);
				RECORDING::_0x48621C9FCA3EBD28(4);
				iLocal_84 = 1;
			}
		}
	}
	if (iLocal_84 == 1)
	{
		switch (iLocal_3332)
		{
			case 0:
				if (!CAM::IS_CAM_INTERPOLATING(uLocal_3600))
				{
					CAM::DESTROY_CAM(uLocal_3600, 0);
					uLocal_3600 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 3540.599f, 3675.688f, 28.72902f, -10.44138f, -0.12816f, 178.5901f, 49.96735f, 1, 2);
					CAM::SET_CAM_PARAMS(uLocal_3600, 3540.73f, 3676.014f, 28.78911f, -10.44138f, -0.12816f, 170.6386f, 49.96735f, 2000, 0, 0, 2);
					CAM::SHAKE_CAM(uLocal_3600, "hand_shake", 0.2f);
					iLocal_3223 = MISC::GET_GAME_TIMER();
					iLocal_3332++;
				}
				break;
			
			case 1:
				if (GlobalFunc_588(&iLocal_3223, 500))
				{
					AUDIO::STOP_SOUND(iLocal_3203);
					iLocal_3332++;
				}
				break;
			
			case 2:
				if (!GlobalFunc_5172(&Local_3049, 0))
				{
					iLocal_84 = 2;
				}
				break;
		}
		if (GlobalFunc_4926(1000))
		{
			iLocal_84 = 3;
		}
	}
	if (iLocal_84 == 2)
	{
		RECORDING::_0x81CBAE94390F9F89();
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3622))
		{
			OBJECT::REMOVE_OBJECT_HIGH_DETAIL_MODEL(iLocal_3622);
		}
		if (CAM::IS_SCREEN_FADED_IN())
		{
			func_473(0, 0, 0, 0f, 0f, 3000, 0, 1, 1, 1, 1);
			CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
		}
		else
		{
			func_459(0, 0f, 0f, 0, 800);
		}
		iLocal_84 = 0;
		iLocal_82 = 11;
	}
	if (iLocal_84 == 3)
	{
		RECORDING::_0x13B350B8AD0EEE10();
		GlobalFunc_2879();
		AUDIO::STOP_SOUND(iLocal_3203);
		iLocal_84 = 2;
	}
}

void func_806()//Position - 0x7D9BA
{
	func_774();
	RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	if (iLocal_84 == 0)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PED::SET_CREATE_RANDOM_COPS(0);
		AUDIO::TRIGGER_MUSIC_EVENT("FBI5A_ENTER_LAB_STEALTH_ST");
		AUDIO::START_AUDIO_SCENE("FBI_5_GET_TO_LIFT");
		iLocal_84 = 1;
	}
	if (iLocal_84 == 1)
	{
		if (func_821())
		{
			iLocal_84 = 2;
		}
		func_772();
		func_820();
		func_819();
		func_818();
		func_817();
		func_816();
		func_811();
		func_761();
		func_760(&Local_987, 0, 0);
		func_808();
		func_780();
		func_760(&Local_135, 1, 0);
		func_745();
		func_807();
	}
	if (iLocal_84 == 2)
	{
		func_16();
		func_19(0);
		iLocal_82 = 10;
		iLocal_84 = 0;
	}
	if (iLocal_84 == 3)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_3607))
		{
			HUD::REMOVE_BLIP(&uLocal_3607);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 3541.552f, 3671.928f, 27.1223f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 89.0802f);
		if (!ENTITY::IS_ENTITY_DEAD(Local_85))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_85);
			ENTITY::SET_ENTITY_COORDS(Local_85, 3541.207f, 3670.71f, 27.1223f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(Local_85, 80.1433f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_110))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_110);
			ENTITY::SET_ENTITY_COORDS(Local_110, 3539.62f, 3670.67f, 27.1223f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(Local_110, 89.2698f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_987[0 /*25*/]))
		{
			PED::DELETE_PED(&(Local_987[0 /*25*/]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_987[1 /*25*/]))
		{
			PED::DELETE_PED(&(Local_987[1 /*25*/]));
		}
		iLocal_84 = 2;
	}
}

void func_807()//Position - 0x7DB3B
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3516.791f, 3718.336f, 0.992f, 3533.594f, 3715.161f, 23.492f, 16.3f, 0, 1, 0))
	{
		INTERIOR::FORCE_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID(), INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(3528f, 3716.9f, 19.22f, "v_lab"), MISC::GET_HASH_KEY("lab_poolroom"));
	}
}

void func_808()//Position - 0x7DB9D
{
	if (!PED::IS_PED_INJURED(Local_135[0 /*25*/]))
	{
		switch (iLocal_3217)
		{
			case 0:
				STREAMING::REQUEST_ANIM_DICT("missfbi5ig_5");
				if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_5"))
				{
					iLocal_3289 = MISC::GET_GAME_TIMER();
					iLocal_3217++;
				}
				break;
			
			case 1:
				if (GlobalFunc_588(&iLocal_3289, 250))
				{
					Local_3397 = { 3538.97f, 3673.487f, 19.992f };
					Local_3400 = { 0f, 0f, -9.4f };
					Local_135[0 /*25*/].f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_135[0 /*25*/], Local_135[0 /*25*/].f_15, "missfbi5ig_5", "holdup_sec_labped", 8f, -4f, 17, 0, 8f, 0);
					iLocal_3217++;
				}
				break;
			
			case 2:
				func_810();
				if (PED::IS_PED_RAGDOLL(Local_135[0 /*25*/]) || PED::IS_PED_PERFORMING_MELEE_ACTION(Local_135[0 /*25*/]))
				{
					WEAPON::SET_PED_DROPS_WEAPON(Local_135[0 /*25*/]);
					iLocal_3217 = 3;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_135[0 /*25*/], 1), 1) < 2f)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_135[0 /*25*/].f_15) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_135[0 /*25*/].f_15) < 0.6f)
					{
						TASK::CLEAR_PED_TASKS(Local_135[0 /*25*/]);
						iLocal_3217 = 3;
					}
				}
				break;
			
			case 3:
				if (((!PED::IS_PED_RAGDOLL(Local_135[0 /*25*/]) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_135[0 /*25*/].f_15)) && !PED::IS_PED_DEAD_OR_DYING(Local_135[0 /*25*/], 1)) && !PED::IS_PED_PERFORMING_MELEE_ACTION(Local_135[0 /*25*/]))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_135[0 /*25*/], "missfbi5ig_5", "holdup_sec_loop_labped", 3))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_135[0 /*25*/], "ped", "handsup_base", 3))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_135[0 /*25*/], "ped", "handsup", 3))
							{
								TASK::TASK_PLAY_ANIM(Local_135[0 /*25*/], "ped", "handsup", 8f, -8f, -1, 49, 0, 0, 0, 0);
							}
							else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_135[0 /*25*/], "ped", "handsup") > 0.99f)
							{
								TASK::TASK_PLAY_ANIM(Local_135[0 /*25*/], "ped", "handsup_base", 1000f, -8f, -1, 49, 0, 0, 0, 0);
							}
						}
					}
					else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_135[0 /*25*/], "missfbi5ig_5", "holdup_sec_loop_labped") > 0.1f)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_135[0 /*25*/], "ped", "handsup", 3))
						{
							TASK::STOP_ANIM_TASK(Local_135[0 /*25*/], "ped", "handsup", -1056964608);
						}
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_135[0 /*25*/], "ped", "handsup_base", 3))
						{
							TASK::STOP_ANIM_TASK(Local_135[0 /*25*/], "ped", "handsup_base", -1056964608);
						}
					}
					Local_135[0 /*25*/].f_3 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_5", "holdup_sec_loop_labped", 3538.97f, 3673.487f, 20f, 0f, 0f, -9.4f, 0f, 2) };
					Local_135[0 /*25*/].f_6 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missfbi5ig_5", "holdup_sec_loop_labped", 3538.97f, 3673.487f, 20f, 0f, 0f, -9.4f, 0f, 2) };
					if (!ENTITY::IS_ENTITY_AT_COORD(Local_135[0 /*25*/], Local_135[0 /*25*/].f_3, 0.5f, 0.5f, 1.6f, 0, 1, 0) || !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_135[0 /*25*/], "missfbi5ig_5", "holdup_sec_loop_labped", 3))
					{
						if (func_336(Local_135[0 /*25*/], 242628503, 1, 1))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_135[0 /*25*/].f_3, 1f, 20000, 0.05f, 512, Local_135[0 /*25*/].f_6.f_2);
							TASK::TASK_PLAY_ANIM_ADVANCED(0, "missfbi5ig_5", "holdup_sec_loop_labped", Local_135[0 /*25*/].f_3, Local_135[0 /*25*/].f_6, 8f, -8f, -1, 8193, 0, 2, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
							TASK::TASK_PERFORM_SEQUENCE(Local_135[0 /*25*/], uLocal_3685);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
						}
					}
				}
				break;
			
			case 4:
				break;
		}
		func_809();
		if (!HUD::DOES_BLIP_EXIST(Local_135[0 /*25*/].f_2))
		{
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_135[0 /*25*/].f_15) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_135[0 /*25*/].f_15) > 0.75f) || (iLocal_3217 > 1 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_135[0 /*25*/].f_15)))
			{
				Local_135[0 /*25*/].f_2 = GlobalFunc_6797(Local_135[0 /*25*/], 1, 145);
			}
		}
		if (PED::IS_PED_RAGDOLL(Local_135[0 /*25*/]))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_135[0 /*25*/], "ped", "handsup", 3))
			{
				TASK::STOP_ANIM_TASK(Local_135[0 /*25*/], "ped", "handsup", -1056964608);
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_135[0 /*25*/], "ped", "handsup_base", 3))
			{
				TASK::STOP_ANIM_TASK(Local_135[0 /*25*/], "ped", "handsup_base", -1056964608);
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_135[0 /*25*/], "missfbi5ig_5", "holdup_sec_loop_labped", 1))
			{
				TASK::STOP_ANIM_TASK(Local_135[0 /*25*/], "missfbi5ig_5", "holdup_sec_loop_labped", -1056964608);
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_135[0 /*25*/], "missfbi5ig_5", "holdup_sec_loop_labped", 2))
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_135[0 /*25*/], -8f, 1);
			}
		}
	}
}

int func_809()//Position - 0x7E0B6
{
	if (!iLocal_3104)
	{
		if (func_314("fbi5a_secur0"))
		{
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Local_3686 = { GlobalFunc_560() };
				if (!MISC::ARE_STRINGS_EQUAL(&Local_3686, "fbi5a_secur0"))
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_135[0 /*25*/].f_15))
					{
						WEAPON::SET_PED_DROPS_WEAPON(Local_135[0 /*25*/]);
						iLocal_3104 = 1;
					}
					return 1;
				}
			}
			else if (!GlobalFunc_5172(&Local_3049, 0))
			{
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_135[0 /*25*/].f_15))
				{
					WEAPON::SET_PED_DROPS_WEAPON(Local_135[0 /*25*/]);
					iLocal_3104 = 1;
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_810()//Position - 0x7E141
{
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_135[0 /*25*/].f_15))
	{
		switch (iLocal_3351)
		{
			case 0:
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_135[0 /*25*/].f_15) >= 1f)
				{
					Local_3397 = { 3538.97f, 3673.487f, 19.992f };
					Local_3400 = { 0f, 0f, -9.4f };
					Local_135[0 /*25*/].f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_135[0 /*25*/], Local_135[0 /*25*/].f_15, "missfbi5ig_5", "holdup_sec_loop_withgun_labped", 1000f, -4f, 17, 0, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_135[0 /*25*/].f_15, 1);
					iLocal_3351++;
				}
				break;
			
			case 1:
				if (func_809())
				{
					Local_3397 = { 3538.97f, 3673.487f, 19.992f };
					Local_3400 = { 0f, 0f, -9.4f };
					Local_135[0 /*25*/].f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_135[0 /*25*/], Local_135[0 /*25*/].f_15, "missfbi5ig_5", "holdup_sec_drop_gun_labped", 8f, -4f, 17, 0, 8f, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_135[0 /*25*/].f_15, 1);
					iLocal_3351++;
				}
				break;
			
			case 2:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_135[0 /*25*/], MISC::GET_HASH_KEY("Detach")))
				{
					WEAPON::SET_PED_DROPS_WEAPON(Local_135[0 /*25*/]);
					iLocal_3104 = 1;
					iLocal_3351++;
				}
				break;
			
			case 3:
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_135[0 /*25*/].f_15) >= 1f)
				{
					Local_3397 = { 3538.97f, 3673.487f, 19.992f };
					Local_3400 = { 0f, 0f, -9.4f };
					Local_135[0 /*25*/].f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_135[0 /*25*/], Local_135[0 /*25*/].f_15, "missfbi5ig_5", "holdup_sec_loop_labped", 8f, -4f, 17, 0, 8f, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_135[0 /*25*/].f_15, 1);
					iLocal_3351++;
					iLocal_3217 = 3;
				}
				break;
			
			case 4:
				break;
		}
	}
	else
	{
		iLocal_3217 = 3;
	}
}

void func_811()//Position - 0x7E34D
{
	bool bVar0;
	
	bVar0 = func_814();
	if (!PED::IS_PED_INJURED(Local_987[1 /*25*/]))
	{
		if (iLocal_3216 != 3)
		{
			if (iLocal_3216 > 0)
			{
				if (PED::IS_PED_RAGDOLL(Local_987[1 /*25*/]))
				{
					iLocal_3216 = 3;
				}
			}
		}
		switch (iLocal_3216)
		{
			case 0:
				if (bVar0)
				{
				}
				if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_10") && iLocal_3224 > 1)
				{
					Local_3397 = { 3538.97f, 3673.487f, 19.992f };
					Local_3400 = { 0f, 0f, -9.4f };
					Local_987[1 /*25*/].f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_987[1 /*25*/], Local_987[1 /*25*/].f_15, "missfbi5ig_10", "lift_holdup_labped", 8f, -8f, 257, 0, 1000f, 0);
					ENTITY::SET_ENTITY_PROOFS(Local_987[1 /*25*/], 0, 0, 0, 0, 0, 0, 0, 0);
					iLocal_3216++;
				}
				break;
			
			case 1:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_987[1 /*25*/].f_15))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_987[1 /*25*/].f_15) > 0.5f)
					{
						if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbia5a_card2", 7, 0, 0, 0))
						{
							iLocal_3216++;
						}
					}
				}
				break;
			
			case 2:
				if (!GlobalFunc_111())
				{
					func_812();
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_987[1 /*25*/].f_15))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_987[1 /*25*/].f_15) >= 1f)
					{
						Local_3397 = { 3538.97f, 3673.487f, 19.992f };
						Local_3400 = { 0f, 0f, -9.4f };
						Local_987[1 /*25*/].f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_987[1 /*25*/], Local_987[1 /*25*/].f_15, "missfbi5ig_10", "lift_holdup_loop_labped", 8f, -8f, 1, 0, 1000f, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_987[1 /*25*/].f_15, 1);
						iLocal_3216++;
					}
				}
				break;
			
			case 3:
				func_812();
				if (!PED::IS_PED_RAGDOLL(Local_987[1 /*25*/]) && !PED::IS_PED_DEAD_OR_DYING(Local_987[1 /*25*/], 1))
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_987[1 /*25*/].f_15))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_987[1 /*25*/], "ped", "handsup_base", 3))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_987[1 /*25*/], "ped", "handsup", 3))
							{
								TASK::TASK_PLAY_ANIM(Local_987[1 /*25*/], "ped", "handsup", 8f, -8f, -1, 8241, 0, 0, 0, 0);
							}
							else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_987[1 /*25*/], "ped", "handsup") >= 0.99f)
							{
								TASK::STOP_ANIM_TASK(Local_987[1 /*25*/], "ped", "handsup", -1056964608);
								TASK::TASK_PLAY_ANIM(Local_987[1 /*25*/], "ped", "handsup_base", 1000f, -8f, -1, 8241, 0, 0, 0, 0);
							}
						}
						Local_3397 = { 3538.97f, 3673.487f, 19.992f };
						Local_3400 = { 0f, 0f, -9.4f };
						Local_987[1 /*25*/].f_3 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_10", "lift_holdup_loop_labped", Local_3397, Local_3400, 1f, 2) };
						if (!ENTITY::IS_ENTITY_AT_COORD(Local_987[1 /*25*/], Local_987[1 /*25*/].f_3, 0.75f, 0.75f, 1.6f, 0, 1, 0))
						{
							if (func_336(Local_987[1 /*25*/], 242628503, -2, 1))
							{
								TASK::TASK_LOOK_AT_ENTITY(Local_987[1 /*25*/], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_987[1 /*25*/].f_3, 1f, 20000, 0.25f, 0, 1193033728);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
								TASK::TASK_PERFORM_SEQUENCE(Local_987[1 /*25*/], uLocal_3685);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
							}
						}
						else if (!PED::IS_PED_FACING_PED(Local_987[1 /*25*/], PLAYER::PLAYER_PED_ID(), 50f))
						{
							if (func_336(Local_987[1 /*25*/], 242628503, -2, 1))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
								TASK::TASK_PERFORM_SEQUENCE(Local_987[1 /*25*/], uLocal_3685);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
							}
						}
					}
					else
					{
						PED::SET_PED_CAPSULE(Local_987[1 /*25*/], 0.2f);
					}
					if (func_314("GET_SCARD"))
					{
						if (!GlobalFunc_5172(&Local_3049, 0))
						{
							if (!func_314("fbi5a_cower2"))
							{
								if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_cower2", 7, 0, 0, 0))
								{
									func_298("fbi5a_cower2", 1);
								}
							}
						}
					}
				}
				break;
			
			case 4:
				break;
		}
		if (PED::IS_PED_RAGDOLL(Local_987[1 /*25*/]))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_987[1 /*25*/], "ped", "handsup", 3))
			{
				TASK::STOP_ANIM_TASK(Local_987[1 /*25*/], "ped", "handsup", -1056964608);
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_987[1 /*25*/], "ped", "handsup_base", 3))
			{
				TASK::STOP_ANIM_TASK(Local_987[1 /*25*/], "ped", "handsup_base", -1056964608);
			}
		}
	}
	else if (Local_987[1 /*25*/].f_18)
	{
		func_812();
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3612))
		{
			Local_987[1 /*25*/].f_3 = { ENTITY::GET_ENTITY_COORDS(iLocal_3612, 0) };
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_987[1 /*25*/]))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1958))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_987[1 /*25*/]));
			}
		}
	}
}

void func_812()//Position - 0x7E882
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	struct<3> Var8;
	struct<3> Var11;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_1958))
	{
		switch (iLocal_3281)
		{
			case 0:
				if (ENTITY::IS_ENTITY_ATTACHED(Local_1958))
				{
					ENTITY::DETACH_ENTITY(Local_1958, 0, 1);
				}
				Local_3482 = { ENTITY::GET_ENTITY_COORDS(Local_1958, 1) };
				Local_3482.f_2 = 20f;
				Local_3485 = { ENTITY::GET_ENTITY_ROTATION(Local_1958, 2) };
				Local_1958.f_12 = { ENTITY::GET_ENTITY_ROTATION(Local_1958, 2) };
				Var0 = { ENTITY::GET_ENTITY_ROTATION(Local_1958, 2) };
				Var0.x = 273.2776f;
				Var3 = { ENTITY::GET_ENTITY_ROTATION(Local_1958, 2) };
				Var3.x = -86.7224f;
				fVar6 = (Var0.x - Local_1958.f_12);
				fVar7 = (Var3.x - Local_1958.f_12);
				if (MISC::ABSF(fVar6) < MISC::ABSF(fVar7))
				{
					Local_3485.x = Var0.x;
				}
				else
				{
					Local_3485.x = Var3.x;
				}
				Local_1958.f_1 = GlobalFunc_6799(Local_1958);
				iLocal_3281++;
				break;
			
			case 1:
				Local_1958.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_1958, 1) };
				Var8 = { GlobalFunc_107(Local_3482 - Local_1958.f_3) };
				if (func_813(Local_1958.f_3, Local_3482, Var8 * FtoV(MISC::GET_FRAME_TIME()) * Vector(0.1f, 0.1f, 0.1f)))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1958, Local_3482, 0, 0, 1);
					ENTITY::SET_ENTITY_COLLISION(Local_1958, 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(Local_1958, 1);
				}
				else
				{
					Local_1958.f_3 = { Local_1958.f_3 - Var8 * FtoV(MISC::GET_FRAME_TIME()) * Vector(0.1f, 0.1f, 0.1f) };
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1958, Local_1958.f_3, 0, 0, 1);
				}
				Var11 = { GlobalFunc_107(Local_3485 - Local_1958.f_12) };
				if (func_813(Local_1958.f_12, Local_3485, Var11 * FtoV(MISC::GET_FRAME_TIME()) * Vector(1000f, 1000f, 1000f)))
				{
					Local_1958.f_12 = { Local_3485 };
					ENTITY::SET_ENTITY_ROTATION(Local_1958, Local_1958.f_12, 2, 1);
				}
				else
				{
					Local_1958.f_12 = { Local_1958.f_12 + Var11 * FtoV(MISC::GET_FRAME_TIME()) * Vector(1000f, 1000f, 1000f) };
					ENTITY::SET_ENTITY_ROTATION(Local_1958, Local_1958.f_12, 2, 1);
				}
				break;
			
			case 2:
				break;
		}
		if (!func_314("fbia5a_card3"))
		{
			if (!ENTITY::IS_ENTITY_ATTACHED(Local_1958))
			{
				if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(Local_1958) < 0.2f)
				{
					if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbia5a_card3", 7, 0, 0, 0))
					{
						func_298("fbia5a_card3", 1);
					}
					else
					{
						GlobalFunc_4935();
					}
				}
			}
		}
		if (!func_314("GET_SCARD"))
		{
			if (func_314("fbia5a_card3"))
			{
				if (!GlobalFunc_5172(&Local_3049, 0))
				{
					GlobalFunc_164("GET_SCARD", 7500, 1);
					func_298("GET_SCARD", 1);
				}
			}
		}
	}
}

int func_813(struct<3> Param0, struct<3> Param3, struct<3> Param6)//Position - 0x7EB19
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { Param3 - Param0 };
	Var3 = { Param3 - Param0 + Param6 };
	if (SYSTEM::VMAG(Var0) < 0.2f)
	{
		return 1;
	}
	Var3 = { Param3 - Param0 + Param6 };
	if (SYSTEM::VMAG(Var0) < 20f)
	{
		if (SYSTEM::VMAG(Var3) > SYSTEM::VMAG(Var0))
		{
			return 1;
		}
	}
	return 0;
}

int func_814()//Position - 0x7EB91
{
	switch (iLocal_3224)
	{
		case 0:
			Local_2271[0 /*24*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_2271[0 /*24*/].f_2, Local_2271[0 /*24*/].f_3, 1, 1, 0);
			ENTITY::SET_ENTITY_ROTATION(Local_2271[0 /*24*/], Local_2271[0 /*24*/].f_12, 2, 1);
			ENTITY::FREEZE_ENTITY_POSITION(Local_2271[0 /*24*/], 1);
			iLocal_3224++;
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(Local_987[1 /*25*/]) && (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_85.f_15) && ENTITY::IS_ENTITY_PLAYING_ANIM(Local_85, "missfbi5ig_10", "lift_holdup_dave", 3)))
			{
				AUDIO::PLAY_SOUND_FROM_COORD(iLocal_3203, "Move_Fade_In", 3539f, 3673.7f, 20f, "LIFT_POSH_SOUNDSET", 0, 0, 0);
				iLocal_3223 = MISC::GET_GAME_TIMER();
				iLocal_3224++;
			}
			break;
		
		case 2:
			if (GlobalFunc_588(&iLocal_3223, 1500))
			{
				OBJECT::DELETE_OBJECT(&(Local_2271[0 /*24*/]));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2271[0 /*24*/].f_2);
				Local_2271[1 /*24*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_2271[1 /*24*/].f_2, Local_2271[1 /*24*/].f_3, 1, 1, 0);
				ENTITY::SET_ENTITY_ROTATION(Local_2271[1 /*24*/], Local_2271[1 /*24*/].f_12, 2, 1);
				ENTITY::FREEZE_ENTITY_POSITION(Local_2271[1 /*24*/], 1);
				iLocal_3224++;
			}
			break;
		
		case 3:
			if (GlobalFunc_588(&iLocal_3223, 3000))
			{
				if (!PED::IS_PED_INJURED(Local_987[1 /*25*/]))
				{
					Local_987[1 /*25*/].f_2 = GlobalFunc_6797(Local_987[1 /*25*/], 1, 145);
				}
				OBJECT::DELETE_OBJECT(&(Local_2271[1 /*24*/]));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2271[1 /*24*/].f_2);
				Local_2271[2 /*24*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_2271[2 /*24*/].f_2, Local_2271[2 /*24*/].f_3, 1, 1, 0);
				ENTITY::SET_ENTITY_ROTATION(Local_2271[2 /*24*/], Local_2271[2 /*24*/].f_12, 2, 1);
				ENTITY::FREEZE_ENTITY_POSITION(Local_2271[2 /*24*/], 1);
				AUDIO::STOP_SOUND(iLocal_3203);
				AUDIO::PLAY_SOUND_FROM_COORD(iLocal_3203, "LIFTS_TONE", 3539f, 3673.7f, 20f, 0, 0, 0, 0);
				iLocal_3224++;
			}
			break;
		
		case 4:
			if (AUDIO::HAS_SOUND_FINISHED(iLocal_3203))
			{
				AUDIO::PLAY_SOUND_FROM_COORD(iLocal_3203, "LIFT_POSH_DOOR_OPEN", 3539f, 3673.7f, 20f, 0, 0, 0, 0);
				func_815(joaat("v_ilev_bl_doorel_l"), 3539f, 3673.7f, 20f, joaat("v_ilev_bl_doorel_r"), 3541.6f, 3673.2f, 20f, 1, 1065353216);
				iLocal_3224++;
			}
			break;
		
		case 5:
			if (func_763(iLocal_3292[1], iLocal_3292[2], 1, 1065353216))
			{
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3203))
				{
					AUDIO::STOP_SOUND(iLocal_3203);
				}
				return 1;
				iLocal_3224++;
			}
			break;
		
		case 6:
			return 1;
			break;
	}
	return 0;
}

int func_815(int iParam0, struct<3> Param1, int iParam4, struct<3> Param5, bool bParam8, float fParam9)//Position - 0x7EE49
{
	float fVar0;
	float fVar1;
	var uVar2;
	var uVar3;
	
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Param1, 1f, iParam0, 1) && OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Param5, 1f, iParam4, 1))
	{
		OBJECT::GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(iParam0, Param1, &uVar2, &fVar0);
		OBJECT::GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(iParam4, Param5, &uVar3, &fVar1);
		if (bParam8)
		{
			fVar0 = (fVar0 - (MISC::GET_FRAME_TIME() * fParam9));
			if (fVar0 <= -1f)
			{
				fVar0 = -1f;
			}
			fVar1 = (fVar1 + (MISC::GET_FRAME_TIME() * fParam9));
			if (fVar1 >= 1f)
			{
				fVar1 = 1f;
			}
			if (fVar0 == -1f && fVar1 == 1f)
			{
				return 1;
			}
		}
		else
		{
			fVar0 = (fVar0 + (MISC::GET_FRAME_TIME() * fParam9));
			if (fVar0 >= 0f)
			{
				fVar0 = 0f;
			}
			fVar1 = (fVar1 - (MISC::GET_FRAME_TIME() * fParam9));
			if (fVar1 <= 0f)
			{
				fVar1 = 0f;
			}
			if (fVar0 == 0f && fVar1 == 0f)
			{
				return 1;
			}
		}
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(iParam0, Param1, 1, fVar0, 0);
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(iParam4, Param5, 1, fVar1, 0);
	}
	return 0;
}

void func_816()//Position - 0x7EF32
{
	if (!PED::IS_PED_INJURED(Local_987[0 /*25*/]))
	{
		switch (iLocal_3215)
		{
			case 0:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3531.971f, 3708.092f, 19.997f, 3519.421f, 3710.035f, 22.997f, 2.5f, 0, 1, 0))
				{
					Local_3397 = { 3538.97f, 3673.487f, 19.992f };
					Local_3400 = { 0f, 0f, -9.4f };
					Local_987[0 /*25*/].f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_987[0 /*25*/], Local_987[0 /*25*/].f_15, "missfbi5ig_2", "holdup_scient_labped", 8f, -8f, 1, 0, 8f, 0);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(Local_987[0 /*25*/].f_15, 1);
					iLocal_3215++;
				}
				break;
			
			case 1:
				if (!HUD::DOES_BLIP_EXIST(Local_987[0 /*25*/].f_2))
				{
					Local_987[0 /*25*/].f_2 = GlobalFunc_6783(Local_987[0 /*25*/], 1, 0);
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_987[0 /*25*/].f_15))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_987[0 /*25*/].f_15) >= 1f)
					{
						Local_3397 = { 3538.97f, 3673.487f, 19.992f };
						Local_3400 = { 0f, 0f, -9.4f };
						Local_987[0 /*25*/].f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_987[0 /*25*/], Local_987[0 /*25*/].f_15, "missfbi5ig_2", "holdup_scient_loop_labped", 1000f, -8f, 1, 0, 1000f, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_987[0 /*25*/].f_15, 1);
						iLocal_3215++;
					}
				}
				else
				{
					iLocal_3215++;
				}
				break;
			
			case 2:
				if (!PED::IS_PED_RAGDOLL(Local_987[0 /*25*/]) && !PED::IS_PED_DEAD_OR_DYING(Local_987[0 /*25*/], 1))
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_987[0 /*25*/].f_15))
					{
						Local_987[0 /*25*/].f_9 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_2", "holdup_scient_loop_labped", 3538.97f, 3673.487f, 19.992f, 0f, 0f, -9.4f, 1f, 2) };
						Local_987[0 /*25*/].f_6 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missfbi5ig_2", "holdup_scient_loop_labped", 3538.97f, 3673.487f, 19.992f, 0f, 0f, -9.4f, 1f, 2) };
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_987[0 /*25*/], "missfbi5ig_2", "holdup_scient_loop_labped", 3))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_987[0 /*25*/], "ped", "handsup_base", 3))
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_987[0 /*25*/], "ped", "handsup", 3))
								{
									TASK::TASK_PLAY_ANIM(Local_987[0 /*25*/], "ped", "handsup", 8f, -8f, -1, 49, 0, 0, 0, 0);
								}
								else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_987[0 /*25*/], "ped", "handsup") > 0.99f)
								{
									TASK::TASK_PLAY_ANIM(Local_987[0 /*25*/], "ped", "handsup_base", 1000f, -8f, -1, 49, 0, 0, 0, 0);
								}
							}
						}
						else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_987[0 /*25*/], "missfbi5ig_2", "holdup_scient_loop_labped") > 0.1f)
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_987[0 /*25*/], "ped", "handsup", 3))
							{
								TASK::STOP_ANIM_TASK(Local_987[0 /*25*/], "ped", "handsup", -1056964608);
							}
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_987[0 /*25*/], "ped", "handsup_base", 3))
							{
								TASK::STOP_ANIM_TASK(Local_987[0 /*25*/], "ped", "handsup_base", -1056964608);
							}
						}
						if (!ENTITY::IS_ENTITY_AT_COORD(Local_987[0 /*25*/], Local_987[0 /*25*/].f_9, 0.5f, 0.5f, 1.6f, 0, 1, 0) || !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_987[0 /*25*/], "missfbi5ig_2", "holdup_scient_loop_labped", 3))
						{
							if (func_336(Local_987[0 /*25*/], 242628503, 1, 1))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_987[0 /*25*/].f_9, 1f, -1, 0.05f, 4608, Local_987[0 /*25*/].f_6.f_2);
								TASK::TASK_PLAY_ANIM_ADVANCED(0, "missfbi5ig_2", "holdup_scient_loop_labped", Local_987[0 /*25*/].f_9, Local_987[0 /*25*/].f_6, 1f, -8f, -1, 8193, 0, 2, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
								TASK::TASK_PERFORM_SEQUENCE(Local_987[0 /*25*/], uLocal_3685);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
							}
						}
					}
				}
				else
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_987[0 /*25*/], "ped", "handsup", 3))
					{
						TASK::STOP_ANIM_TASK(Local_987[0 /*25*/], "ped", "handsup", -4f);
					}
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_987[0 /*25*/], "ped", "handsup_base", 3))
					{
						TASK::STOP_ANIM_TASK(Local_987[0 /*25*/], "ped", "handsup_base", -4f);
					}
				}
				break;
		}
		if (func_758(Local_987[0 /*25*/], Local_110))
		{
			func_786(&(Local_987[0 /*25*/]));
		}
	}
	else if (Local_987[0 /*25*/].f_18)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_987[0 /*25*/]))
		{
			if (!HUD::DOES_BLIP_EXIST(Local_987[0 /*25*/].f_2))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_987[0 /*25*/]));
			}
		}
	}
}

void func_817()//Position - 0x7F427
{
	switch (iLocal_3213)
	{
		case 0:
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_110, 3524.182f, 3703.002f, 19.9918f, -1, 0, 0f, true, 1, iLocal_3626[0], 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_110, 0, 0);
			iLocal_3213++;
			break;
		
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3527.343f, 3698.451f, 20.199f, 3523.396f, 3699.103f, 22.799f, 3f, 0, 1, 0) || PED::IS_PED_INJURED(Local_987[0 /*25*/]))
			{
				Local_3397 = { 3538.97f, 3673.487f, 19.992f };
				Local_3400 = { 0f, 0f, -9.4f };
				Local_110.f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_110, Local_110.f_15, "missfbi5ig_2", "holdup_scient_steve", 8f, -8f, 5, 0, 8f, 0);
				iLocal_3120 = 0;
				Local_110.f_9 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_2", "holdup_scient_steve", Local_3397, Local_3400, 1f, 2) };
				iLocal_3213++;
			}
			break;
		
		case 2:
			STREAMING::REQUEST_ANIM_DICT("missfbi5ig_5");
			func_331(&Local_110, &(Local_110.f_15), Local_110.f_9, 3523.1f, 36.94f, 21.6f, Local_987[0 /*25*/], 1065353216, 1);
			if (PED::IS_PED_INJURED(Local_987[0 /*25*/]))
			{
				if ((!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_110.f_15) && STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_5")) && func_336(Local_110, 242628503, 1, 1))
				{
					Local_3397 = { 3538.97f, 3673.487f, 19.992f };
					Local_3400 = { 0f, 0f, -9.4f };
					Local_110.f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_110, Local_110.f_15, "missfbi5ig_5", "holdup_sec_steve", 4f, -8f, 5, 0, 8f, 0);
					iLocal_3120 = 0;
					Local_110.f_9 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_5", "holdup_sec_steve", Local_3397, Local_3400, 1f, 2) };
					iLocal_3213++;
				}
			}
			else if (Local_135[0 /*25*/].f_18)
			{
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_110.f_15))
				{
					if (func_336(Local_110, 242628503, -2, 1))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
						TASK::TASK_SHOOT_AT_ENTITY(0, Local_987[0 /*25*/], 1500, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
						TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					}
				}
			}
			break;
		
		case 3:
			STREAMING::REQUEST_ANIM_DICT("missfbi5ig_8");
			func_331(&Local_110, &(Local_110.f_15), Local_110.f_9, 3521.4f, 3676.9f, 21.6f, Local_135[0 /*25*/], 1f, 1);
			if (PED::IS_PED_INJURED(Local_987[0 /*25*/]) && PED::IS_PED_INJURED(Local_135[0 /*25*/]))
			{
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_110.f_15) && STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_8"))
				{
					Local_110.f_9 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_8", "runto_lift_steve", 3538.97f, 3673.487f, 19.992f, 0f, 0f, -9.4f, 1f, 2) };
					Local_3397 = { 3538.97f, 3673.487f, 19.992f };
					Local_3400 = { 0f, 0f, -9.4f };
					Local_110.f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_110, Local_110.f_15, "missfbi5ig_8", "runto_lift_steve", 8f, -8f, 5, 0, 8f, 0);
					iLocal_3213++;
				}
			}
			break;
		
		case 4:
			STREAMING::REQUEST_ANIM_DICT("missfbi5ig_10");
			func_331(&Local_110, &(Local_110.f_15), Local_110.f_9, 3540f, 3673.2f, 21.6f, 0, 1065353216, 1);
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_110.f_15))
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_10") && iLocal_3224 > 1)
				{
					Local_3397 = { 3538.97f, 3673.487f, 19.992f };
					Local_3400 = { 0f, 0f, -9.4f };
					Local_110.f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_110, Local_110.f_15, "missfbi5ig_10", "lift_holdup_steve", 8f, -8f, 5, 0, 8f, 0);
					PED::SET_PED_RESET_FLAG(Local_110, 339, 1);
					iLocal_3213++;
				}
			}
			break;
		
		case 5:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_110.f_15))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_110.f_15) < 0.1f)
				{
					PED::SET_PED_RESET_FLAG(Local_110, 339, 1);
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_110.f_15) >= 1f || PED::IS_PED_INJURED(Local_987[1 /*25*/]))
				{
					Local_3397 = { 3538.97f, 3673.487f, 19.992f };
					Local_3400 = { 0f, 0f, -9.4f };
					Local_110.f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_110, Local_110.f_15, "missfbi5ig_10", "lift_holdup_loop_steve", 8f, -8f, 5, 0, 8f, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_110.f_15, 1);
					iLocal_3213 = 6;
				}
			}
			break;
		
		case 6:
			STREAMING::REQUEST_ANIM_DICT("missfbi5ig_11");
			if ((PED::IS_PED_INJURED(Local_987[1 /*25*/]) && Local_987[1 /*25*/].f_18) && !ENTITY::DOES_ENTITY_EXIST(Local_1958))
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_11"))
				{
					Local_3397 = { 3538.97f, 3673.487f, 19.992f };
					Local_3400 = { 0f, 0f, -9.4f };
					Local_110.f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_110, Local_110.f_15, "missfbi5ig_11", "enter_lift_steve", 8f, -8f, 5, 0, 8f, 0);
					iLocal_3213++;
				}
			}
			break;
		
		case 7:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_110.f_15))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_110.f_15) >= 1f)
				{
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(Local_110.f_15, 0);
				}
			}
			break;
	}
}

void func_818()//Position - 0x7F9CC
{
	switch (iLocal_3214)
	{
		case 0:
			TASK::TASK_AIM_GUN_AT_COORD(Local_85, 3525.2f, 3703f, 21.5f, -1, 1, 0);
			PED::FORCE_PED_MOTION_STATE(Local_85, 1063765679, 0, 0, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_85, 0, 0);
			iLocal_3214++;
			break;
		
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3531.971f, 3708.092f, 19.997f, 3519.421f, 3710.035f, 22.997f, 2.5f, 0, 1, 0))
			{
				GlobalFunc_4935();
				Local_3397 = { 3538.97f, 3673.487f, 19.992f };
				Local_3400 = { 0f, 0f, -9.4f };
				Local_85.f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_85, Local_85.f_15, "missfbi5ig_2", "holdup_scient_dave", 4f, -4f, 5, 0, 4f, 0);
				Local_85.f_9 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_2", "holdup_scient_dave", Local_3397, Local_3400, 1f, 2) };
				iLocal_3249 = 0;
				iLocal_3214 = 2;
			}
			if (PED::IS_PED_INJURED(Local_987[0 /*25*/]))
			{
				iLocal_3214 = 2;
			}
			break;
		
		case 2:
			func_331(&Local_85, &(Local_85.f_15), Local_85.f_9, 3523.1f, 3693.6f, 21.6f, Local_987[0 /*25*/], 1065353216, 1);
			STREAMING::REQUEST_ANIM_DICT("missfbi5ig_5");
			if (PED::IS_PED_INJURED(Local_987[0 /*25*/]) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3525.81f, 3687.614f, 19.995f, 3521.676f, 3688.336f, 23f, 2f, 0, 1, 0))
			{
				iLocal_3214++;
			}
			break;
		
		case 3:
			STREAMING::REQUEST_ANIM_DICT("missfbi5ig_5");
			func_331(&Local_85, &(Local_85.f_15), Local_85.f_9, 3523.1f, 3693.6f, 21.6f, Local_987[0 /*25*/], 1065353216, 1);
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_85.f_15) && STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_5"))
			{
				Local_3397 = { 3538.97f, 3673.487f, 19.992f };
				Local_3400 = { 0f, 0f, -9.4f };
				Local_85.f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_85, Local_85.f_15, "missfbi5ig_5", "holdup_sec_dave", 8f, -8f, 5, 0, 8f, 0);
				Local_85.f_9 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_5", "holdup_sec_dave", Local_3397, Local_3400, 1f, 2) };
				iLocal_3214++;
			}
			break;
		
		case 4:
			STREAMING::REQUEST_ANIM_DICT("missfbi5ig_8");
			func_331(&Local_85, &(Local_85.f_15), Local_85.f_9, 3521.4f, 3676.9f, 21.6f, Local_135[0 /*25*/], 1065353216, 1);
			if (PED::IS_PED_INJURED(Local_987[0 /*25*/]) && PED::IS_PED_INJURED(Local_135[0 /*25*/]))
			{
				iLocal_3214++;
			}
			break;
		
		case 5:
			STREAMING::REQUEST_ANIM_DICT("missfbi5ig_8");
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_85.f_15))
			{
				func_331(&Local_85, &(Local_85.f_15), Local_85.f_9, 3521.4f, 3676.9f, 21.6f, Local_135[0 /*25*/], 1065353216, 1);
			}
			else if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_8"))
			{
				Local_3397 = { 3538.97f, 3673.487f, 19.992f };
				Local_3400 = { 0f, 0f, -9.4f };
				Local_85.f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_85, Local_85.f_15, "missfbi5ig_8", "runto_lift_dave", 8f, -8f, 5, 0, 8f, 0);
				Local_85.f_9 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_8", "runto_lift_dave", Local_3397, Local_3400, 1f, 2) };
				iLocal_3214++;
			}
			break;
		
		case 6:
			STREAMING::REQUEST_ANIM_DICT("missfbi5ig_10");
			func_331(&Local_85, &(Local_85.f_15), Local_85.f_9, 3539.9f, 3672.8f, 21.6f, 0, 1065353216, 1);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_85.f_15))
			{
			}
			else
			{
				if (((STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_10") && ENTITY::DOES_ENTITY_EXIST(Local_987[1 /*25*/])) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3540.059f, 3673.385f, 19.999f, 3539.403f, 3669.642f, 22.999f, 12f, 0, 1, 0)) && ENTITY::IS_ENTITY_AT_COORD(Local_85, PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_10", "lift_holdup_dave", 3538.97f, 3673.487f, 19.992f, 0f, 0f, -9.4f, 0f, 2), 1f, 1f, 1.6f, 0, 1, 0))
				{
					Local_3397 = { 3538.97f, 3673.487f, 19.992f };
					Local_3400 = { 0f, 0f, -9.4f };
					Local_85.f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_85, Local_85.f_15, "missfbi5ig_10", "lift_holdup_dave", 4f, -4f, 5, 0, 8f, 0);
					iLocal_3214++;
				}
				if (Local_987[1 /*25*/].f_18)
				{
					if (PED::IS_PED_INJURED(Local_987[1 /*25*/]))
					{
						iLocal_3214++;
					}
				}
			}
			break;
		
		case 7:
			STREAMING::REQUEST_ANIM_DICT("missfbi5ig_11");
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_85.f_15))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_85.f_15) >= 1f)
				{
					Local_3397 = { 3538.97f, 3673.487f, 19.992f };
					Local_3400 = { 0f, 0f, -9.4f };
					Local_85.f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_85, Local_85.f_15, "missfbi5ig_10", "lift_holdup_loop_dave", 8f, -8f, 5, 0, 8f, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_85.f_15, 1);
					iLocal_3214++;
				}
				if (PED::IS_PED_INJURED(Local_987[1 /*25*/]))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_85.f_15) < 0.588f)
					{
						iLocal_3214 = 20;
					}
				}
			}
			break;
		
		case 8:
			STREAMING::REQUEST_ANIM_DICT("missfbi5ig_11");
			if ((PED::IS_PED_INJURED(Local_987[1 /*25*/]) && !ENTITY::DOES_ENTITY_EXIST(Local_1958)) && STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_11"))
			{
				Local_3397 = { 3538.97f, 3673.487f, 19.992f };
				Local_3400 = { 0f, 0f, -9.4f };
				Local_85.f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_85, Local_85.f_15, "missfbi5ig_11", "enter_lift_dave", 8f, -4f, 5, 0, 8f, 0);
				iLocal_3214++;
			}
			break;
		
		case 9:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_85.f_15))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_85.f_15) >= 1f)
				{
					TASK::CLEAR_PED_TASKS(Local_85);
				}
			}
			break;
		
		case 20:
			STREAMING::REQUEST_ANIM_DICT("missfbi5ig_11");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_11"))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_85, 3539.104f, 3675.681f, 19.68602f, 3542.165f, 3675.201f, 22.62273f, 4.25f, 0, 1, 0))
				{
					Local_85.f_6 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missfbi5ig_11", "enter_lift_dave", 3538.97f, 3673.487f, 19.992f, 0f, 0f, -9.4f, 1f, 2) };
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_11", "enter_lift_dave", 3538.97f, 3673.487f, 19.992f, 0f, 0f, -9.4f, 1f, 2), 1f, -1, 0.1f, 0, Local_85.f_6.f_2);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					iLocal_3214 = 22;
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_10", "lift_holdup_dave", 3538.97f, 3673.487f, 19.992f, 0f, 0f, -9.4f, 1f, 2), 3540.4f, 3673.4f, 21.2f, 1f, 0, 0.1f, 0.1f, 1, 0, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, 3540.4f, 3673.4f, 21.2f, -1, 1, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					iLocal_3214 = 21;
				}
			}
			break;
		
		case 21:
			STREAMING::REQUEST_ANIM_DICT("missfbi5ig_11");
			if (!ENTITY::IS_ENTITY_AT_COORD(Local_85, PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_10", "lift_holdup_dave", 3538.97f, 3673.487f, 19.992f, 0f, 0f, -9.4f, 1f, 2), 0.5f, 0.5f, 1.6f, 0, 1, 0))
			{
				if (func_336(Local_85, 242628503, 1, 1))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_10", "lift_holdup_dave", 3538.97f, 3673.487f, 19.992f, 0f, 0f, -9.4f, 1f, 2), 3540.4f, 3673.4f, 21.2f, 1f, 0, 0.1f, 0.1f, 1, 0, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, 3540.4f, 3673.4f, 21.2f, -1, 1, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
				}
			}
			else if ((HUD::DOES_BLIP_EXIST(uLocal_3607) || (!HUD::DOES_BLIP_EXIST(uLocal_3607) && iLocal_3218 >= 5)) && STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_11"))
			{
				Local_3397 = { 3538.97f, 3673.487f, 19.992f };
				Local_3400 = { 0f, 0f, -9.4f };
				Local_85.f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_85, Local_85.f_15, "missfbi5ig_11", "enter_lift_dave", 4f, -8f, 5, 0, 4f, 0);
				iLocal_3214++;
			}
			break;
		
		case 22:
			if (!ENTITY::IS_ENTITY_AT_COORD(Local_85, PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_11", "enter_lift_dave", 3538.97f, 3673.487f, 19.992f, 0f, 0f, -9.4f, 1f, 2), 0.5f, 0.5f, 1.6f, 0, 1, 0))
			{
				if (func_336(Local_85, 242628503, 1, 1))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_11", "enter_lift_dave", 3538.97f, 3673.487f, 19.992f, 0f, 0f, -9.4f, 1f, 2), 3540.4f, 3673.4f, 21.2f, 1f, 0, 0.1f, 0.1f, 1, 0, 0, -957453492);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
				}
			}
			break;
	}
}

void func_819()//Position - 0x803D7
{
	switch (iLocal_3236)
	{
		case 0:
			iLocal_3236++;
			break;
		
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3531.971f, 3708.092f, 19.997f, 3519.421f, 3710.035f, 22.997f, 2.5f, 0, 1, 0))
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[0], 3, 0, 1);
				iLocal_3236++;
			}
			break;
		
		case 2:
			if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_3292[0]) > 0.5f)
			{
				if (func_766(iLocal_3292[0], 1, 0.7f))
				{
					iLocal_3236++;
				}
			}
			break;
	}
}

void func_820()//Position - 0x8047E
{
	switch (iLocal_3212)
	{
		case 0:
			iLocal_3237 = 0;
			if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_zapper", 6, 0, 0, 0))
			{
				iLocal_3212++;
			}
			break;
		
		case 1:
			if (!func_314("fbi5a_surf4"))
			{
				if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_surf4", 6, 0, 0, 0))
				{
					RECORDING::_0x293220DA1B46CEBC(4f, 8f, 4);
					func_298("fbi5a_surf4", 1);
				}
			}
			else if (!func_314("FOL_CREW"))
			{
				if (!GlobalFunc_5172(&Local_3049, 0))
				{
					GlobalFunc_164("FOL_CREW", 7500, 1);
					func_298("FOL_CREW", 1);
				}
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3522.246f, 3701.509f, 19.798f, 3527.063f, 3700.612f, 22.998f, 2.6f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_85, 3522.246f, 3701.509f, 19.798f, 3527.063f, 3700.612f, 22.998f, 2.6f, 0, 1, 0))
			{
				iLocal_3212 = 2;
			}
			break;
		
		case 2:
			if (HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_THIS_PRINT("FOL_CREW");
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_85.f_15))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_85.f_15) < 0.46f)
				{
					if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_up0a", 7, 0, 0, 0))
					{
						iLocal_3212++;
					}
				}
				else
				{
					iLocal_3212++;
				}
			}
			break;
		
		case 3:
			if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_up0c", 7, 0, 0, 0))
			{
				func_298("fbi5a_up0c", 1);
				iLocal_3212++;
			}
			break;
		
		case 4:
			if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_up0b", 7, 0, 0, 0))
			{
				iLocal_3212++;
			}
			break;
		
		case 5:
			if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_shock0", 7, 0, 0, 0))
			{
				iLocal_3212++;
			}
			break;
		
		case 6:
			if (!GlobalFunc_5172(&Local_3049, 0))
			{
				iLocal_3237 = MISC::GET_GAME_TIMER();
				iLocal_3212++;
			}
			break;
		
		case 7:
			if (PED::IS_PED_INJURED(Local_987[0 /*25*/]))
			{
				if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia41", 7, 0, 0, 0))
				{
					iLocal_3212++;
				}
			}
			else if (!GlobalFunc_5172(&Local_3049, 0))
			{
				if (GlobalFunc_588(&iLocal_3237, 7000))
				{
					switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
					{
						case 0:
							if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_shock0", 7, 0, 0, 0))
							{
								iLocal_3237 = MISC::GET_GAME_TIMER();
							}
							break;
						
						case 1:
							if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_shock0", 7, 0, 0, 0))
							{
								iLocal_3237 = MISC::GET_GAME_TIMER();
							}
							break;
						
						case 2:
							if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_cower1", 7, 0, 0, 0))
							{
								iLocal_3237 = MISC::GET_GAME_TIMER();
							}
							break;
						}
					}
			}
			break;
		
		case 8:
			if (!func_314("fbi5a_secur0"))
			{
				if (!PED::IS_PED_INJURED(Local_135[0 /*25*/]))
				{
					if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_135[0 /*25*/].f_15) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_135[0 /*25*/].f_15) > 0.75f) || (iLocal_3217 > 0 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_135[0 /*25*/].f_15)))
					{
						if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_secur0", 7, 0, 0, 0))
						{
							func_298("fbi5a_secur0", 1);
							iLocal_3212++;
						}
					}
				}
				else if (Local_135[0 /*25*/].f_18)
				{
					iLocal_3212 = 11;
				}
			}
			break;
		
		case 9:
			if (!GlobalFunc_5172(&Local_3049, 0))
			{
				if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_secur1", 7, 0, 0, 0))
				{
					iLocal_3212++;
				}
			}
			break;
		
		case 10:
			if (!GlobalFunc_5172(&Local_3049, 0))
			{
				if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_stun0", 7, 0, 0, 0))
				{
					iLocal_3237 = MISC::GET_GAME_TIMER();
					iLocal_3212++;
				}
			}
			break;
		
		case 11:
			if (PED::IS_PED_INJURED(Local_135[0 /*25*/]))
			{
				GlobalFunc_4935();
				iLocal_3212++;
			}
			else if (GlobalFunc_588(&iLocal_3237, 7000))
			{
				if (!GlobalFunc_5172(&Local_3049, 0))
				{
					switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
					{
						case 0:
							if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_shock0", 7, 0, 0, 0))
							{
								iLocal_3237 = MISC::GET_GAME_TIMER();
							}
							break;
						
						case 1:
							if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_stun0", 7, 0, 0, 0))
							{
								iLocal_3237 = MISC::GET_GAME_TIMER();
							}
							break;
						
						case 2:
							break;
						}
					}
			}
			break;
		
		case 12:
			if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_stun1", 7, 0, 0, 0))
			{
				iLocal_3212++;
			}
			break;
		
		case 13:
			if (!GlobalFunc_5172(&Local_3049, 0))
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3540.059f, 3673.385f, 19.999f, 3539.403f, 3669.642f, 22.999f, 12f, 0, 1, 0))
				{
					iLocal_3237 = MISC::GET_GAME_TIMER();
					GlobalFunc_164("GET_LFT", 5000, 1);
				}
				iLocal_3212++;
			}
			break;
		
		case 14:
			if (!func_314("fbi5a_dia7c"))
			{
				if (GlobalFunc_588(&iLocal_3237, 4000))
				{
					if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dia7c", 6, 0, 0, 0))
					{
						func_298("fbi5a_dia7c", 1);
					}
				}
			}
			if (((ENTITY::DOES_ENTITY_EXIST(Local_987[1 /*25*/]) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3540.059f, 3673.385f, 19.999f, 3539.403f, 3669.642f, 22.999f, 12f, 0, 1, 0)) && (STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_10") && ENTITY::IS_ENTITY_AT_COORD(Local_85, PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_10", "lift_holdup_dave", 3538.97f, 3673.487f, 19.992f, 0f, 0f, -9.4f, 0f, 2), 1f, 1f, 1.6f, 0, 1, 0))) && (STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_10") && ENTITY::IS_ENTITY_AT_COORD(Local_110, PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_10", "lift_holdup_steve", 3538.97f, 3673.487f, 19.992f, 0f, 0f, -9.4f, 0f, 2), 1f, 1f, 1.6f, 0, 1, 0)))
			{
				iLocal_3212++;
			}
			break;
		
		case 15:
			if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbia5a_elv1", 7, 0, 0, 0))
			{
				iLocal_3212++;
			}
			break;
		
		case 16:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_987[1 /*25*/].f_15))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_987[1 /*25*/].f_15) > 0.3f)
				{
					iLocal_3212++;
				}
			}
			break;
		
		case 17:
			if (!GlobalFunc_5172(&Local_3049, 0))
			{
				if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbia5a_card0", 7, 0, 0, 0))
				{
					iLocal_3212++;
				}
			}
			break;
		
		case 18:
			if (HUD::DOES_BLIP_EXIST(uLocal_3607))
			{
				if (!func_314("fbia5a_card4"))
				{
					if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbia5a_card4", 7, 0, 0, 0))
					{
						func_298("fbia5a_card4", 1);
						iLocal_3212++;
					}
				}
				else
				{
					iLocal_3212++;
				}
			}
			break;
		
		case 19:
			if (!GlobalFunc_5172(&Local_3049, 0))
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3539.104f, 3675.681f, 19.68602f, 3542.165f, 3675.201f, 22.62273f, 4.25f, 0, 1, 0))
				{
					if (!func_314("GET_LFT2"))
					{
						HUD::CLEAR_PRINTS();
						GlobalFunc_164("GET_LFT2", 7500, 1);
						func_298("fbi5a_lift0", 1);
						iLocal_3212++;
					}
				}
			}
			break;
		
		case 20:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3539.104f, 3675.681f, 19.68602f, 3542.165f, 3675.201f, 22.62273f, 4.25f, 0, 1, 0))
			{
				HUD::CLEAR_THIS_PRINT("GET_LFT2");
			}
			break;
	}
	if (iLocal_3212 < 7)
	{
		if (PED::IS_PED_INJURED(Local_987[0 /*25*/]) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3525.81f, 3687.614f, 19.995f, 3521.676f, 3688.336f, 23f, 2f, 0, 1, 0))
		{
			HUD::CLEAR_PRINTS();
			GlobalFunc_4935();
			iLocal_3212 = 7;
		}
	}
	if (iLocal_3212 < 8)
	{
		if (!PED::IS_PED_INJURED(Local_135[0 /*25*/]))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(Local_135[0 /*25*/], Local_135[0 /*25*/].f_9, 1.5f, 1.5f, 2f, 0, 1, 0))
			{
				HUD::CLEAR_PRINTS();
				GlobalFunc_4935();
				iLocal_3212 = 8;
			}
		}
	}
	if (iLocal_3212 < 12)
	{
		if (Local_135[0 /*25*/].f_18)
		{
			if (PED::IS_PED_INJURED(Local_135[0 /*25*/]))
			{
				HUD::CLEAR_PRINTS();
				GlobalFunc_4935();
				iLocal_3212 = 12;
			}
		}
	}
}

int func_821()//Position - 0x80D34
{
	switch (iLocal_3218)
	{
		case 0:
			if (PED::IS_PED_INJURED(Local_987[0 /*25*/]) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3525.81f, 3687.614f, 19.995f, 3521.676f, 3688.336f, 23f, 2f, 0, 1, 0))
			{
				func_541(&(Local_135[0 /*25*/]), 0);
				PED::STOP_PED_WEAPON_FIRING_WHEN_DROPPED(Local_135[0 /*25*/]);
				AUDIO::STOP_PED_SPEAKING(Local_135[0 /*25*/], 1);
				HUD::REMOVE_BLIP(&(Local_135[0 /*25*/].f_2));
				GlobalFunc_173(&uLocal_3788, 7, Local_135[0 /*25*/], "security1", 0, 1);
				iLocal_3218++;
			}
			break;
		
		case 1:
			if (PED::IS_PED_INJURED(Local_987[0 /*25*/]) && PED::IS_PED_INJURED(Local_135[0 /*25*/]))
			{
				uLocal_3609 = GlobalFunc_5104(3539.678f, 3671.218f, 19.9944f, 0);
				iLocal_3218++;
			}
			break;
		
		case 2:
			STREAMING::REQUEST_ANIM_DICT("missfbi1");
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3540.059f, 3673.385f, 19.999f, 3539.403f, 3669.642f, 22.999f, 12f, 0, 1, 0))
			{
				func_541(&(Local_987[1 /*25*/]), 0);
				PED::CLEAR_ALL_PED_PROPS(Local_987[1 /*25*/]);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_987[1 /*25*/], 55);
				HUD::REMOVE_BLIP(&(Local_987[1 /*25*/].f_2));
				PED::SET_PED_MONEY(Local_987[1 /*25*/], 0);
				ENTITY::SET_ENTITY_PROOFS(Local_987[1 /*25*/], 0, 1, 1, 0, 0, 0, 0, 1);
				PED::SET_PED_COMPONENT_VARIATION(Local_987[1 /*25*/], 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_987[1 /*25*/], 1, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_987[1 /*25*/], 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_987[1 /*25*/], 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_987[1 /*25*/], 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_987[1 /*25*/], 5, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_987[1 /*25*/], 6, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_987[1 /*25*/], 7, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_987[1 /*25*/], 8, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_987[1 /*25*/], 9, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_987[1 /*25*/], 10, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_987[1 /*25*/], 11, 0, 0, 0);
				GlobalFunc_173(&uLocal_3788, 6, Local_987[1 /*25*/], "scientist1", 0, 1);
				STREAMING::REQUEST_ANIM_DICT("missfbi5ig_10");
				iLocal_3612 = Local_987[1 /*25*/];
				Local_1958 = OBJECT::CREATE_OBJECT(Local_1958.f_2, Local_1958.f_3, 1, 1, 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_1958, Local_987[1 /*25*/], PED::GET_PED_BONE_INDEX(Local_987[1 /*25*/], 28422), 0f, 0f, 0f, 0f, 0f, 180f, 1, 0, 0, 0, 2, 1);
				if (HUD::DOES_BLIP_EXIST(uLocal_3609))
				{
					HUD::REMOVE_BLIP(&uLocal_3609);
				}
				if (GlobalFunc_663("GET_LFT", 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("GET_LFT");
				}
				iLocal_3237 = MISC::GET_GAME_TIMER();
				iLocal_3218++;
			}
			break;
		
		case 3:
			if (HUD::DOES_BLIP_EXIST(Local_1958.f_1))
			{
				if (GlobalFunc_588(&iLocal_3223, 2500))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_1958, 1), 0.5f, 0.5f, 1.5f, 0, 1, 0))
					{
						HUD::REMOVE_BLIP(&(Local_1958.f_1));
						OBJECT::DELETE_OBJECT(&Local_1958);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "PICK_UP", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						HUD::CLEAR_PRINTS();
						if (!PED::IS_PED_INJURED(Local_987[1 /*25*/]))
						{
							GlobalFunc_164("TAZ_SCI", 7500, 1);
						}
						iLocal_3218++;
					}
				}
			}
			break;
		
		case 4:
			if (PED::IS_PED_INJURED(Local_987[1 /*25*/]))
			{
				RECORDING::_0x293220DA1B46CEBC(2f, 2f, 3);
				if (GlobalFunc_663("TAZ_SCI", 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("TAZ_SCI");
				}
				uLocal_3607 = GlobalFunc_5104(3540.537f, 3675.759f, 19.9944f, 0);
				iLocal_3218++;
			}
			break;
		
		case 5:
			if (HUD::DOES_BLIP_EXIST(uLocal_3607))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3539.104f, 3675.681f, 19.68602f, 3542.165f, 3675.201f, 22.62273f, 4.25f, 0, 1, 0))
				{
					HUD::REMOVE_BLIP(&uLocal_3607);
				}
			}
			else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3539.104f, 3675.681f, 19.68602f, 3542.165f, 3675.201f, 22.62273f, 4.75f, 0, 1, 0))
			{
				uLocal_3607 = GlobalFunc_5104(3540.537f, 3675.759f, 19.9944f, 0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3622))
			{
				iLocal_3622 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_85));
				WEAPON::REQUEST_WEAPON_HIGH_DETAIL_MODEL(iLocal_3622);
			}
			if ((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3539.104f, 3675.681f, 19.68602f, 3542.165f, 3675.201f, 22.62273f, 4.25f, 0, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_85, 3539.104f, 3675.681f, 19.68602f, 3542.165f, 3675.201f, 22.62273f, 4.25f, 0, 1, 0)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_110, 3539.104f, 3675.681f, 19.68602f, 3542.165f, 3675.201f, 22.62273f, 4.25f, 0, 1, 0)) && ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_85.f_15) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_85.f_15) > 0.32f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_85.f_15))) && ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_110.f_15) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_110.f_15) > 0.32f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_110.f_15)))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_822()//Position - 0x81279
{
	int iVar0;
	
	if (iLocal_84 == 0)
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 197, 1);
		CUTSCENE::REQUEST_CUTSCENE("FBI_5a_MCS_1", 8);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("michael", PLAYER::PLAYER_PED_ID(), 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("dave", Local_85, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("steve", Local_110, 0);
		if (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			AUDIO::TRIGGER_MUSIC_EVENT("FBI5A_ENTER_LAB_STOP_TRACK");
			if (!PED::IS_PED_INJURED(Local_85))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_85, "Dave_FBI", 0, Local_85.f_1, 0);
			}
			if (!PED::IS_PED_INJURED(Local_110))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_110, "Steve_FBI", 0, Local_110.f_1, 16);
			}
			iLocal_3620 = GlobalFunc_6830(Local_85, joaat("weapon_carbinerifle"), 1, 0, 0, 0, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3620, "daves_Weapon", 0, 0, 0);
			iLocal_3621 = GlobalFunc_6830(Local_110, joaat("weapon_carbinerifle"), 1, 0, 0, 0, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3621, "steves_gun", 0, 0, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "steves_mask", 2, Local_1766.f_2, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "scuba_mike", 2, Local_1790.f_2, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "scuba_dave", 2, Local_1814.f_2, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "OxyTank_1", 2, Local_1838.f_2, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "OxyTank_2", 2, Local_1862.f_2, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "oxytank_3", 2, Local_1886.f_2, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "scuba_steve", 2, Local_1910.f_2, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "swag_bag", 2, Local_1934.f_2, 0);
			STREAMING::REMOVE_ANIM_DICT("mini@biotech@blowtorch_str");
			STREAMING::REMOVE_ANIM_DICT("mini@biotech@blowtorch_def");
			STREAMING::REMOVE_ANIM_DICT("SWIMMING@swim");
			STREAMING::REMOVE_ANIM_DICT("swimming@scuba");
			STREAMING::REMOVE_ANIM_DICT("missheistchem2");
			GlobalFunc_8380(1, 1, 1, 0);
			RECORDING::_0x293220DA1B46CEBC(5f, 0f, 3);
			RECORDING::_0x48621C9FCA3EBD28(4);
			CUTSCENE::START_CUTSCENE(0);
			func_826();
			iLocal_84 = 1;
		}
	}
	if (iLocal_84 == 1)
	{
		func_825();
		switch (iLocal_3343)
		{
			case 0:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 100f, 1, 0, 0, 0);
					iVar0 = 0;
					while (iVar0 <= (Local_2054 - 1))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_2054[iVar0 /*24*/]))
						{
							if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3567[iVar0]))
							{
								GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3567[iVar0], 0);
							}
							OBJECT::DELETE_OBJECT(&(Local_2054[iVar0 /*24*/]));
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2054[iVar0 /*24*/].f_2);
						}
						iVar0++;
					}
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3208))
					{
						AUDIO::STOP_SOUND(iLocal_3208);
					}
					iLocal_3343++;
				}
				break;
			
			case 1:
				if (CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					if (!CUTSCENE::WAS_CUTSCENE_SKIPPED())
					{
						func_824();
					}
					else
					{
						CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 1, 0);
						iLocal_84 = 2;
					}
				}
				else if (func_825())
				{
					func_823();
					RECORDING::_0x81CBAE94390F9F89();
					iLocal_84 = 0;
					iLocal_82 = 9;
				}
				else
				{
					CAM::DO_SCREEN_FADE_OUT(500);
					while (!CAM::IS_SCREEN_FADED_OUT() || !func_825())
					{
						SYSTEM::WAIT(0);
					}
					func_823();
					iLocal_84 = 0;
					iLocal_82 = 9;
				}
				break;
			}
	}
	if (iLocal_84 == 2)
	{
		if (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			func_824();
		}
		else
		{
			if (!PED::IS_PED_INJURED(Local_110))
			{
				Local_110.f_3 = { 3524.19f, 3702.99f, 19.9928f };
				Local_110.f_12 = -110f;
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_110);
				ENTITY::SET_ENTITY_COORDS(Local_110, Local_110.f_3, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_110, Local_110.f_12);
				iLocal_3213 = 0;
				func_817();
			}
			RECORDING::_0x81CBAE94390F9F89();
			func_823();
			iLocal_84 = 0;
			iLocal_82 = 9;
		}
	}
	if (iLocal_84 == 3)
	{
		iLocal_3343 = 1;
		if (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::STOP_CUTSCENE(0);
		}
	}
}

void func_823()//Position - 0x815C9
{
	GlobalFunc_7632(0);
	func_744();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_3518))
	{
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_3518);
	}
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("fbi5_steve_swim_lab"))
	{
		TASK::REMOVE_WAYPOINT_RECORDING("fbi5_steve_swim_lab");
	}
	MISC::CLEAR_AREA(3526.249f, 3711.001f, 19.9928f, 1000f, 1, 0, 0, 0);
	GRAPHICS::REMOVE_DECALS_IN_RANGE(3526.249f, 3711.001f, 19.9928f, 1000f);
	func_541(&(Local_987[0 /*25*/]), 1);
	HUD::REMOVE_BLIP(&(Local_987[0 /*25*/].f_2));
	PED::SET_PED_MONEY(Local_987[0 /*25*/], 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_987[0 /*25*/], 8, 1, 0, 0);
	GlobalFunc_173(&uLocal_3788, 5, Local_987[0 /*25*/], "scientist0", 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3620))
	{
		OBJECT::DELETE_OBJECT(&iLocal_3620);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3621))
	{
		OBJECT::DELETE_OBJECT(&iLocal_3621);
	}
	if (CAM::IS_SCREEN_FADED_IN())
	{
		func_473(0, 1, 0, 0f, 0f, 0, 0, 1, 1, 1, 1);
	}
	else
	{
		func_459(0, 0f, 0f, 0, 800);
	}
	GlobalFunc_11046(2, "get to lift", 0, 0, 0, 1);
	iLocal_3223 = MISC::GET_GAME_TIMER();
}

void func_824()//Position - 0x816DA
{
	if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("steves_mask", Local_1766.f_2)))
	{
		Local_1766 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("steves_mask", Local_1766.f_2));
	}
	if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("scuba_mike", Local_1790.f_2)))
	{
		Local_1790 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("scuba_mike", Local_1790.f_2));
	}
	if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("scuba_dave", Local_1814.f_2)))
	{
		Local_1814 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("scuba_dave", Local_1814.f_2));
	}
	if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("OxyTank_1", Local_1838.f_2)))
	{
		Local_1838 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("OxyTank_1", Local_1838.f_2));
	}
	if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("OxyTank_2", Local_1862.f_2)))
	{
		Local_1862 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("OxyTank_2", Local_1862.f_2));
	}
	if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("OxyTank_3", Local_1886.f_2)))
	{
		Local_1886 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("OxyTank_3", Local_1886.f_2));
	}
	if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("scuba_steve", Local_1910.f_2)))
	{
		Local_1910 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("scuba_steve", Local_1910.f_2));
	}
	if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("swag_bag", Local_1934.f_2)))
	{
		Local_1934 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("swag_bag", Local_1934.f_2));
	}
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("steves_mask", Local_1766.f_2))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1766, Local_1766.f_3, 0, 0, 1);
		ENTITY::SET_ENTITY_ROTATION(Local_1766, Local_1766.f_12, 2, 1);
	}
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("scuba_mike", Local_1790.f_2))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1790, Local_1790.f_3, 0, 0, 1);
		ENTITY::SET_ENTITY_ROTATION(Local_1790, Local_1790.f_12, 2, 1);
	}
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("scuba_dave", Local_1814.f_2))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1814, Local_1814.f_3, 0, 0, 1);
		ENTITY::SET_ENTITY_ROTATION(Local_1814, Local_1814.f_12, 2, 1);
	}
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("OxyTank_1", Local_1838.f_2))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1838, Local_1838.f_3, 0, 0, 1);
		ENTITY::SET_ENTITY_ROTATION(Local_1838, Local_1838.f_12, 2, 1);
	}
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("OxyTank_2", Local_1862.f_2))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1862, Local_1862.f_3, 0, 0, 1);
		ENTITY::SET_ENTITY_ROTATION(Local_1862, Local_1862.f_12, 2, 1);
	}
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("OxyTank_3", Local_1886.f_2))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1886, Local_1886.f_3, 0, 0, 1);
		ENTITY::SET_ENTITY_ROTATION(Local_1886, Local_1886.f_12, 2, 1);
	}
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("scuba_steve", Local_1910.f_2))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1910, Local_1910.f_3, 0, 0, 1);
		ENTITY::SET_ENTITY_ROTATION(Local_1910, Local_1910.f_12, 2, 1);
	}
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("swag_bag", Local_1934.f_2))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1934, Local_1934.f_3, 0, 0, 1);
		ENTITY::SET_ENTITY_ROTATION(Local_1934, Local_1934.f_12, 2, 1);
	}
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("michael", GlobalFunc_4917(0)))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 3526.249f, 3711.001f, 19.9928f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 172.3092f);
		GlobalFunc_11267(PLAYER::PLAYER_PED_ID(), 12, 11, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		PED::SET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 1, 2, 0, false);
		PED::SET_PED_DIES_IN_WATER(PLAYER::PLAYER_PED_ID(), 1);
		PED::SET_PED_MAX_TIME_UNDERWATER(PLAYER::PLAYER_PED_ID(), -1f);
		PED::SET_ENABLE_SCUBA(PLAYER::PLAYER_PED_ID(), 0);
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_carbinerifle"), 400, 0, 1);
		WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_carbinerifle"), joaat("component_at_ar_supp"));
		WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_grenade"), 2, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_stungun"), 50, 1, 1);
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, "MP_FEMALE_ACTION");
		PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -633298724, 0, 0, 0);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("dave_fbi", GlobalFunc_4946(30)))
	{
		if (!PED::IS_PED_INJURED(Local_85))
		{
			PED::SET_PED_MAX_TIME_UNDERWATER(Local_85, -1f);
			PED::SET_PED_DIES_IN_WATER(Local_85, 1);
			WEAPON::SET_CURRENT_PED_WEAPON(Local_85, Local_85.f_20, 1);
			ENTITY::SET_ENTITY_PROOFS(Local_85, 0, 1, 0, 0, 0, 1, 0, 1);
			PED::SET_PED_COMPONENT_VARIATION(Local_85, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_85, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_85, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_85, 3, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_85, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_85, 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_85, 6, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_85, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_85, 8, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_85, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_85, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_85, 11, 3, 0, 0);
			PED::SET_PED_PROP_INDEX(Local_85, 1, 2, 0, false);
			PED::SET_FORCE_FOOTSTEP_UPDATE(Local_85, 1);
			PED::SET_PED_CONFIG_FLAG(Local_85, 116, 1);
			PED::SET_PED_CAN_RAGDOLL(Local_85, 0);
			func_818();
		}
	}
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("daves_Weapon", 0))
	{
		WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_3620, Local_85);
	}
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("steve_fbi", GlobalFunc_4946(23)))
	{
		if (!PED::IS_PED_INJURED(Local_110))
		{
			Local_110.f_3 = { 3524.22f, 3703.04f, 19.9928f };
			Local_110.f_12 = -110f;
			ENTITY::SET_ENTITY_COORDS(Local_110, Local_110.f_3, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(Local_110, Local_110.f_12);
			PED::SET_PED_CAN_RAGDOLL(Local_110, 0);
			PED::SET_PED_MAX_TIME_UNDERWATER(Local_110, -1f);
			PED::SET_PED_DIES_IN_WATER(Local_110, 1);
			WEAPON::SET_CURRENT_PED_WEAPON(Local_110, Local_110.f_20, 1);
			ENTITY::SET_ENTITY_PROOFS(Local_110, 0, 1, 0, 0, 0, 1, 0, 1);
			PED::SET_PED_COMPONENT_VARIATION(Local_110, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_110, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_110, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_110, 3, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_110, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_110, 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_110, 6, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_110, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_110, 8, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_110, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_110, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_110, 11, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(Local_110, 1, 2, 0, false);
			PED::SET_FORCE_FOOTSTEP_UPDATE(Local_110, 1);
			PED::SET_PED_CAN_RAGDOLL(Local_110, 0);
			PED::SET_PED_CONFIG_FLAG(Local_110, 116, 1);
			ENTITY::SET_ENTITY_PROOFS(Local_110, 0, 1, 0, 0, 0, 1, 0, 1);
			func_817();
		}
	}
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("steves_gun", 0))
	{
		WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_3621, Local_110);
	}
}

int func_825()//Position - 0x81D02
{
	if (!STREAMING::HAS_MODEL_LOADED(Local_987[0 /*25*/].f_1))
	{
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_211[0 /*25*/].f_1))
	{
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_1958.f_2))
	{
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_2271[0 /*24*/].f_2))
	{
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_2271[1 /*24*/].f_2))
	{
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_2271[2 /*24*/].f_2))
	{
	}
	if (!WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_stungun")))
	{
	}
	if (!WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_carbinerifle")))
	{
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_2"))
	{
	}
	if (!INTERIOR::IS_INTERIOR_READY(iLocal_3684))
	{
	}
	if (((((((((((((((STREAMING::HAS_MODEL_LOADED(Local_987[0 /*25*/].f_1) && STREAMING::HAS_MODEL_LOADED(Local_211[0 /*25*/].f_1)) && STREAMING::HAS_MODEL_LOADED(Local_1958.f_2)) && STREAMING::HAS_MODEL_LOADED(Local_2271[0 /*24*/].f_2)) && STREAMING::HAS_MODEL_LOADED(Local_2271[1 /*24*/].f_2)) && STREAMING::HAS_MODEL_LOADED(Local_2271[2 /*24*/].f_2)) && STREAMING::HAS_MODEL_LOADED(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_carbinerifle")))) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_carbinerifle"))) && STREAMING::HAS_MODEL_LOADED(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_stungun")))) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_stungun"))) && STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_2")) && PED::HAS_ACTION_MODE_ASSET_LOADED("MICHAEL_ACTION")) && PED::HAS_ACTION_MODE_ASSET_LOADED("MP_FEMALE_ACTION")) && INTERIOR::IS_INTERIOR_READY(iLocal_3684)) && AUDIO::PREPARE_ALARM("FIB_05_BIOTECH_LAB_ALARMS")) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\LIFTS", 0))
	{
		return 1;
	}
	return 0;
}

void func_826()//Position - 0x81E8E
{
	iLocal_3684 = INTERIOR::GET_INTERIOR_AT_COORDS(Local_3379);
	STREAMING::REQUEST_MODEL(Local_987[0 /*25*/].f_1);
	STREAMING::REQUEST_MODEL(Local_211[0 /*25*/].f_1);
	STREAMING::REQUEST_MODEL(Local_1958.f_2);
	STREAMING::REQUEST_MODEL(Local_2271[0 /*24*/].f_2);
	STREAMING::REQUEST_MODEL(Local_2271[1 /*24*/].f_2);
	STREAMING::REQUEST_MODEL(Local_2271[2 /*24*/].f_2);
	STREAMING::REQUEST_MODEL(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_carbinerifle")));
	WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_carbinerifle"), 31, 0);
	STREAMING::REQUEST_MODEL(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_stungun")));
	WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_stungun"), 31, 0);
	AUDIO::PREPARE_ALARM("FIB_05_BIOTECH_LAB_ALARMS");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\LIFTS", 0);
	STREAMING::REQUEST_ANIM_DICT("missfbi5ig_2");
	PED::REQUEST_ACTION_MODE_ASSET("MICHAEL_ACTION");
	PED::REQUEST_ACTION_MODE_ASSET("MP_FEMALE_ACTION");
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 0, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 3, 4, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 4, 4, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 6, 4, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 8, 4, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 10, 0, 0);
	INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_3684);
}

void func_827()//Position - 0x81F97
{
	var uVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!iLocal_3130)
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 197, 1);
	}
	PED::SET_PED_CAN_LEG_IK(PLAYER::PLAYER_PED_ID(), 0);
	if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 2f);
	}
	if (iLocal_84 == 0)
	{
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\FBI_05_Chemical_Factory_01");
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\FBI_05A_GRILL_CUTTING");
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_5_CUT_THROUGH_GRATE"))
		{
			AUDIO::STOP_AUDIO_SCENE("FBI_5_CUT_THROUGH_GRATE");
		}
		AUDIO::START_AUDIO_SCENE("FBI_5_SWIM_TO_TUNNEL_EXIT");
		ENTITY::SET_ENTITY_COLLISION(Local_3020[0 /*3*/], 1, 0);
		func_2(0);
		iLocal_3565 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_tunnel_vent_bubbles", 3790.888f, 3658.558f, -19.0412f, 0f, 0f, 0f, 1f, 0, 0, 0, 0);
		if (!HUD::DOES_BLIP_EXIST(uLocal_3605))
		{
			uLocal_3605 = HUD::ADD_BLIP_FOR_COORD(Local_3379);
		}
		RECORDING::_0x293220DA1B46CEBC(3f, 7f, 4);
		iLocal_84 = 1;
	}
	if (iLocal_84 == 1)
	{
		GlobalFunc_650(3530.672f, 3708.669f, 20.0419f, 100f, 120f, "FBI_5a_MCS_1");
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("michael", PLAYER::PLAYER_PED_ID(), 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("dave", Local_85, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("steve", Local_110, 0);
		}
		if (!iLocal_3130)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3531.911f, 3706.334f, 19.992f, 3528.027f, 3706.687f, 22.992f, 3.7f, 0, 1, 0))
			{
				PED::SET_PED_DIES_IN_WATER(PLAYER::PLAYER_PED_ID(), 1);
				PED::SET_PED_MAX_TIME_UNDERWATER(PLAYER::PLAYER_PED_ID(), -1f);
				iLocal_3130 = 1;
			}
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_3605))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3531.911f, 3706.334f, 19.992f, 3528.027f, 3706.687f, 22.992f, 1f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3528.667f, 3707.503f, 19.992f, 3525.471f, 3707.759f, 22.992f, 4.8f, 0, 1, 0))
			{
				if (GlobalFunc_109())
				{
					if (func_485(0, 1, 1, 0))
					{
						iLocal_84 = 2;
					}
				}
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_85, 1), 1) > 70f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_110, 1), 1) > 70f)
			{
				HUD::REMOVE_BLIP(&uLocal_3605);
				if (!func_314("fbi5a_god_27"))
				{
					GlobalFunc_164("fbi5a_god_27", 7500, 1);
					func_298("fbi5a_god_27", 1);
				}
			}
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_85, 1), 1) < 50f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_110, 1), 1) < 50f)
		{
			if (GlobalFunc_663("fbi5a_god_27", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("fbi5a_god_27");
			}
			if (!HUD::DOES_BLIP_EXIST(uLocal_3605))
			{
				uLocal_3605 = HUD::ADD_BLIP_FOR_COORD(Local_3379);
			}
		}
		if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 242628503) == 1)
		{
			iVar4 = 28;
			GlobalFunc_612(&uVar0, &iVar1, &uVar2, &iVar3, 0);
			if (!PAD::IS_LOOK_INVERTED())
			{
				iVar3 = (iVar3 * -1);
			}
			if ((iVar1 > iVar4 || iVar1 < (iVar4 * -1)) || PAD::IS_CONTROL_PRESSED(0, 21))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
		}
		func_838();
		func_837();
		func_835();
		func_832();
		func_831();
		func_830();
		func_828();
		func_807();
		if (ENTITY::DOES_ENTITY_EXIST(Local_2054[1 /*24*/]))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_2054[1 /*24*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 30f)
			{
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3567[1]))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3567[1], 0);
				}
				OBJECT::DELETE_OBJECT(&(Local_2054[1 /*24*/]));
			}
		}
	}
	if (iLocal_84 == 2)
	{
		HUD::CLEAR_PRINTS();
		func_19(0);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_3020[0 /*3*/]));
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_3020[1 /*3*/]));
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_2570);
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3565))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3565, 0);
		}
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < Local_3027)
		{
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_3027[iVar5 /*7*/].f_5))
			{
				GRAPHICS::REMOVE_PARTICLE_FX(Local_3027[iVar5 /*7*/].f_5, 0);
			}
			iVar5++;
		}
		func_9(0);
		iVar5 = 0;
		while (iVar5 <= (Local_3027 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_3027[iVar5 /*7*/]))
			{
				OBJECT::DELETE_OBJECT(&(Local_3027[iVar5 /*7*/]));
			}
			iVar5++;
		}
		if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3196))
		{
			AUDIO::STOP_SOUND(iLocal_3196);
		}
		if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3197))
		{
			AUDIO::STOP_SOUND(iLocal_3197);
		}
		if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3198))
		{
			AUDIO::STOP_SOUND(iLocal_3198);
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_5_SWIM_TO_TUNNEL_EXIT"))
		{
			AUDIO::STOP_AUDIO_SCENE("FBI_5_SWIM_TO_TUNNEL_EXIT");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_5_GET_TO_SURFACE"))
		{
			AUDIO::STOP_AUDIO_SCENE("FBI_5_GET_TO_SURFACE");
		}
		iLocal_82 = 8;
		iLocal_84 = 0;
	}
	if (iLocal_84 == 3)
	{
		iLocal_3684 = INTERIOR::GET_INTERIOR_AT_COORDS(Local_3379);
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_3684);
		while (!INTERIOR::IS_INTERIOR_READY(iLocal_3684))
		{
			SYSTEM::WAIT(0);
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(PLAYER::PLAYER_PED_ID(), 3528.808f, 3716.467f, 17.5f, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 165.0344f);
		INTERIOR::FORCE_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID(), INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(3532.107f, 3721.177f, 15f, "v_lab"), MISC::GET_HASH_KEY("lab_poolroom"));
		if (!PED::IS_PED_INJURED(Local_85))
		{
			ENTITY::SET_ENTITY_COORDS(Local_85, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), -1f, 0f, 0f), 1, 0, 0, 1);
		}
		if (!PED::IS_PED_INJURED(Local_110))
		{
			ENTITY::SET_ENTITY_COORDS(Local_110, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 1f, 0f, 0f), 1, 0, 0, 1);
		}
	}
}

void func_828()//Position - 0x824EB
{
	if (GlobalFunc_660(Local_85, 3532.107f, 3721.177f, 15f, "v_lab"))
	{
		INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_85, INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(3532.107f, 3721.177f, 15f, "v_lab"), MISC::GET_HASH_KEY("lab_poolroom"));
	}
	if (GlobalFunc_660(Local_110, 3532.107f, 3721.177f, 15f, "v_lab"))
	{
		INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_110, INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(3532.107f, 3721.177f, 15f, "v_lab"), MISC::GET_HASH_KEY("lab_poolroom"));
	}
}


void func_830()//Position - 0x825AB
{
	switch (iLocal_3258)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3521.689f, 3725.642f, -10.03302f, 1.5f, 1.75f, 2f, 0, 1, 0))
			{
				iLocal_3258++;
			}
			break;
		
		case 1:
			if (AUDIO::PREPARE_MUSIC_EVENT("FBI5A_SWIM_UP"))
			{
				if (!GlobalFunc_111())
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FBI5A_SWIM_UP");
					iLocal_3258++;
				}
			}
			break;
	}
}

void func_831()//Position - 0x82623
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3831.922f, 3672.879f, -25.393f, 3838.767f, 3668.936f, -20.793f, 2.5f, 0, 1, 0))
	{
		bLocal_3101 = false;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3831.749f, 3667.262f, -24.591f, 3834.689f, 3665.554f, -21.091f, 6.4f, 0, 1, 0))
	{
		bLocal_3101 = true;
	}
	if (bLocal_3101)
	{
		HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(-1594035265, 3650f, 3700f, 0, 0);
	}
}

void func_832()//Position - 0x826B0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	int iVar9;
	struct<3> Var10;
	char* sVar13;
	
	PED::SET_PED_RESET_FLAG(Local_85, 151, 1);
	PED::SET_PED_RESET_FLAG(Local_110, 151, 1);
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_3518, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &iVar1);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (iVar0 == 0)
		{
			iVar5 = Local_85;
			sVar13 = sLocal_3518;
			iVar9 = 363;
		}
		else if (iVar0 == 1)
		{
			iVar5 = Local_110;
			sVar13 = "fbi5_steve_swim_lab";
			iVar9 = 363;
		}
		if (!PED::IS_PED_INJURED(iVar5))
		{
			switch (iLocal_3352[iVar0])
			{
				case 0:
					TASK::WAYPOINT_RECORDING_GET_COORD(sVar13, iVar9, &Var10);
					if (!ENTITY::IS_ENTITY_AT_COORD(iVar5, Var10, 2f, 2f, 1.6f, 0, 1, 0) && !(TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iVar5) && TASK::GET_PED_WAYPOINT_PROGRESS(iVar5) > iVar9))
					{
						TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sVar13, ENTITY::GET_ENTITY_COORDS(iVar5, 1), &iVar2);
						iVar3 = (iVar1 - iVar2);
						if (iVar3 >= -10)
						{
							iLocal_3102 = 1;
							iLocal_3103 = 1;
						}
						if (iVar3 > 12)
						{
							if (!ENTITY::IS_ENTITY_ON_SCREEN(iVar5))
							{
								iVar4 = ((iVar1 - iVar0 * 2) - 4);
								TASK::WAYPOINT_RECORDING_GET_COORD(sVar13, iVar4, &Var6);
								if (!func_834(Var6))
								{
									if (!CAM::IS_SPHERE_VISIBLE(Var6, 3f))
									{
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar5, Var6, 0, 0, 1);
										ENTITY::SET_ENTITY_HEADING(iVar5, 180f);
										TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iVar5, sVar13, iVar4 + 1, 808, -1);
									}
								}
							}
						}
						else if (iVar3 >= -10)
						{
						}
						else if (iVar3 < -20)
						{
							if (iVar5 == Local_85)
							{
								if (iVar3 < -24)
								{
									if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iVar5))
									{
										if (!func_833(&iVar5))
										{
											if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iVar5))
											{
												TASK::WAYPOINT_PLAYBACK_PAUSE(iVar5, 0, 0);
												if (!GlobalFunc_5172(&Local_3049, 0))
												{
													GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_stop1", 7, 0, 0, 0);
												}
											}
										}
									}
								}
							}
							if (iVar5 == Local_110)
							{
								if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iVar5))
								{
									if (!func_833(&iVar5))
									{
										if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iVar5))
										{
											TASK::WAYPOINT_PLAYBACK_PAUSE(iVar5, 0, 0);
											if (!GlobalFunc_5172(&Local_3049, 0))
											{
												GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_stop2", 7, 0, 0, 0);
											}
										}
									}
								}
							}
						}
						if (iVar5 == Local_85)
						{
							if (iLocal_3102 == 1)
							{
								if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iVar5))
								{
									if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iVar5))
									{
										TASK::WAYPOINT_PLAYBACK_RESUME(iVar5, 0, -1, 0);
									}
								}
								iLocal_3102 = 0;
							}
						}
						if (iVar5 == Local_110)
						{
							if (iLocal_3103 == 1)
							{
								if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iVar5))
								{
									if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iVar5))
									{
										TASK::WAYPOINT_PLAYBACK_RESUME(iVar5, 0, -1, 0);
									}
								}
								iLocal_3103 = 0;
							}
						}
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iVar5))
						{
							if (iVar5 == Local_85)
							{
								if (iVar3 >= -2)
								{
									TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iVar5, 2f, 0);
									bLocal_3116 = false;
								}
								else if (iVar3 <= -7)
								{
									TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iVar5, 1f, 0);
									bLocal_3116 = true;
								}
								else if (!bLocal_3116)
								{
									TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iVar5, 2f, 0);
								}
								else
								{
									TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iVar5, 1f, 0);
								}
							}
							if (iVar5 == Local_110)
							{
								if (iVar3 >= -2)
								{
									TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iVar5, 2f, 0);
									iLocal_3117 = 0;
								}
								else
								{
									iLocal_3117 = iLocal_3117;
									if (iVar3 <= -7)
									{
										TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iVar5, 1f, 0);
									}
								}
							}
						}
					}
					else
					{
						if (iVar5 == Local_85)
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
							TASK::TASK_GO_STRAIGHT_TO_COORD(0, 3531.2f, 3717.17f, 19f, 2f, -1, 1193033728, 1056964608);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
							TASK::TASK_PERFORM_SEQUENCE(iVar5, uLocal_3685);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
							iLocal_3352[iVar0] = 1;
						}
						if (iVar5 == Local_110)
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
							TASK::TASK_GO_STRAIGHT_TO_COORD(0, 3528.4f, 3715.4f, 19f, 2f, -1, 1193033728, 1056964608);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
							TASK::TASK_PERFORM_SEQUENCE(iVar5, uLocal_3685);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
							iLocal_3352[iVar0] = 1;
						}
					}
					break;
				
				case 1:
					switch (iVar0)
					{
						case 0:
							if (!ENTITY::IS_ENTITY_AT_COORD(iVar5, 3531.2f, 3717.17f, 19f, 2f, 2f, 2.6f, 0, 1, 0))
							{
								if (func_336(iVar5, 242628503, -2, 1))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
									TASK::TASK_GO_STRAIGHT_TO_COORD(0, 3531.2f, 3717.17f, 19f, 2f, -1, 1193033728, 1056964608);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
									TASK::TASK_PERFORM_SEQUENCE(iVar5, uLocal_3685);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
								}
							}
							else if (!PED::IS_PED_FACING_PED(iVar5, PLAYER::PLAYER_PED_ID(), 40f))
							{
								if (func_336(iVar5, 242628503, -2, 1))
								{
									if (func_336(iVar5, -875674219, -2, 0))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar5, PLAYER::PLAYER_PED_ID(), 0);
									}
								}
							}
							break;
						
						case 1:
							if (!ENTITY::IS_ENTITY_AT_COORD(iVar5, 3528.4f, 3715.4f, 19f, 2f, 2f, 2.6f, 0, 1, 0))
							{
								if (func_336(iVar5, 242628503, -2, 1))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
									TASK::TASK_GO_STRAIGHT_TO_COORD(0, 3528.4f, 3715.4f, 19f, 2f, -1, 1193033728, 1056964608);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
									TASK::TASK_PERFORM_SEQUENCE(iVar5, uLocal_3685);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
								}
							}
							else if (!PED::IS_PED_FACING_PED(iVar5, PLAYER::PLAYER_PED_ID(), 40f))
							{
								if (func_336(iVar5, 242628503, -2, 1))
								{
									if (func_336(iVar5, -875674219, -2, 0))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar5, PLAYER::PLAYER_PED_ID(), 0);
									}
								}
							}
							break;
					}
					break;
				}
		}
		iVar0++;
	}
}

int func_833(int iParam0)//Position - 0x82BD6
{
	if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(*iParam0, 3733.507f, 3700.567f, -18.574f, 3736.335f, 3702.797f, -15.476f, 4f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(*iParam0, 3686.204f, 3724.993f, -18.441f, 3686.704f, 3728.562f, -15.445f, 4f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(*iParam0, 3536.661f, 3738.657f, -11.658f, 3536.597f, 3741.957f, -8.45f, 4f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_834(struct<3> Param0)//Position - 0x82C6D
{
	if ((OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 3733.507f, 3700.567f, -18.574f, 3736.335f, 3702.797f, -15.476f, 4f, 0, 1) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 3686.204f, 3724.993f, -18.441f, 3686.704f, 3728.562f, -15.445f, 4f, 0, 1)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 3536.661f, 3738.657f, -11.658f, 3536.597f, 3741.957f, -8.45f, 4f, 0, 1))
	{
		return 1;
	}
	return 0;
}

void func_835()//Position - 0x82D04
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	struct<3> Var14;
	struct<3> Var17;
	float fVar20;
	
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3790.575f, 3657.134f, -19.3016f, 3790.886f, 3659.818f, -16.31483f, 1.5f, 0, 1, 0))
	{
		fVar6 = 0.5f;
		Var3 = { ENTITY::GET_ENTITY_ROTATION(PLAYER::PLAYER_PED_ID(), 2) };
		Var0 = { GlobalFunc_107(func_836(0f, 0f, 1f, (Var3.x * -1f))) };
		ENTITY::APPLY_FORCE_TO_ENTITY(PLAYER::PLAYER_PED_ID(), 1, Vector(fVar6, fVar6, fVar6) * Var0, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
	}
	if (!PED::IS_PED_INJURED(Local_85))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_85, 3790.575f, 3657.134f, -19.3016f, 3790.886f, 3659.818f, -16.31483f, 1.5f, 0, 1, 0))
		{
			fVar13 = 0.5f;
			Var10 = { ENTITY::GET_ENTITY_ROTATION(Local_85, 2) };
			Var7 = { GlobalFunc_107(func_836(0f, 0f, 1f, (Var10.x * -1f))) };
			ENTITY::APPLY_FORCE_TO_ENTITY(Local_85, 1, Vector(fVar13, fVar13, fVar13) * Var7, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
		}
	}
	if (!PED::IS_PED_INJURED(Local_110))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_110, 3790.575f, 3657.134f, -19.3016f, 3790.886f, 3659.818f, -16.31483f, 1.5f, 0, 1, 0))
		{
			fVar20 = 0.5f;
			Var17 = { ENTITY::GET_ENTITY_ROTATION(Local_110, 2) };
			Var14 = { GlobalFunc_107(func_836(0f, 0f, 1f, (Var17.x * -1f))) };
			ENTITY::APPLY_FORCE_TO_ENTITY(Local_110, 1, Vector(fVar20, fVar20, fVar20) * Var14, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
		}
	}
}

Vector3 func_836(struct<3> Param0, float fParam3)//Position - 0x82E6A
{
	struct<3> Var0;
	
	Var0.f_2 = ((Param0.f_2 * SYSTEM::COS(fParam3)) + (Param0.f_1 * SYSTEM::SIN(fParam3)));
	Var0.f_1 = ((Param0.f_1 * SYSTEM::COS(fParam3)) - (Param0.f_2 * SYSTEM::SIN(fParam3)));
	Var0.x = Param0.x;
	return Var0;
}

void func_837()//Position - 0x82EB0
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(Local_3027[0 /*7*/]))
	{
		STREAMING::REQUEST_PTFX_ASSET();
		if (STREAMING::HAS_PTFX_ASSET_LOADED())
		{
		}
	}
	else
	{
		iVar1 = joaat("prop_ld_fan_01");
		STREAMING::REQUEST_MODEL(iVar1);
		if (STREAMING::HAS_MODEL_LOADED(iVar1))
		{
			Local_3027[0 /*7*/].f_1 = { 0f, 0f, 37.5f };
			Local_3027[0 /*7*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar1, 3735.1f, 3701.5f, -17.2f, 1, 1, 0);
			Local_3027[1 /*7*/].f_1 = { 0f, 0f, 82.5f };
			Local_3027[1 /*7*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar1, 3686.6f, 3726.7f, -17.2f, 1, 1, 0);
			Local_3027[2 /*7*/].f_1 = { 0f, 0f, 90f };
			Local_3027[2 /*7*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar1, 3537.1f, 3740.5f, -10.1f, 1, 1, 0);
			iVar0 = 0;
			while (iVar0 < Local_3027)
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_3027[iVar0 /*7*/], 1);
				ENTITY::SET_ENTITY_ROTATION(Local_3027[iVar0 /*7*/], Local_3027[iVar0 /*7*/].f_1, 2, 1);
				Local_3027[iVar0 /*7*/].f_5 = 0;
				iVar0++;
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
		}
	}
}

void func_838()//Position - 0x82FC1
{
	switch (iLocal_3211)
	{
		case 0:
			if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_tunl4b", 6, 0, 0, 0))
			{
				iLocal_3211++;
			}
			break;
		
		case 1:
			if (!GlobalFunc_5172(&Local_3049, 0))
			{
				GlobalFunc_164("SWIM_PIPE", 7500, 1);
				iLocal_3211++;
			}
			break;
		
		case 2:
			if (func_530(uLocal_3605, Local_85, Local_110, 1))
			{
				if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_bant3a", 6, 0, 0, 0))
				{
					iLocal_3211++;
				}
			}
			break;
		
		case 3:
			if (func_530(uLocal_3605, Local_85, Local_110, 1))
			{
				if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_bant4a", 6, 0, 0, 0))
				{
					iLocal_3211++;
				}
			}
			break;
		
		case 4:
			if (func_530(uLocal_3605, Local_85, Local_110, 1))
			{
				if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_bant5a", 6, 0, 0, 0))
				{
					iLocal_3211++;
				}
			}
			break;
		
		case 5:
			if (func_530(uLocal_3605, Local_85, Local_110, 1))
			{
				if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_bant6a", 6, 0, 0, 0))
				{
					iLocal_3211++;
				}
			}
			break;
		
		case 6:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3539.008f, 3738.964f, -11.785f, 3539.034f, 3741.972f, -8.693f, 2f, 0, 1, 0))
			{
				iLocal_3211++;
			}
			break;
		
		case 7:
			if (func_530(uLocal_3605, Local_85, Local_110, 1))
			{
				if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_tunl3", 7, 0, 0, 0))
				{
					iLocal_3211++;
				}
			}
			break;
		
		case 8:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3523.324f, 3726.412f, -11.181f, 3520.638f, 3726.727f, -8.085f, 1f, 0, 1, 0))
			{
				AUDIO::START_AUDIO_SCENE("FBI_5_GET_TO_SURFACE");
				iLocal_3211++;
			}
			break;
		
		case 9:
			if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_dsurf", 7, 0, 0, 0))
			{
				iLocal_3211++;
			}
			break;
		
		case 10:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_3379, 1) < 20f)
			{
				if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_ladder", 7, 0, 0, 0))
				{
					iLocal_3211++;
				}
			}
			break;
		
		case 11:
			break;
	}
	if (iLocal_3211 < 7)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3539.008f, 3738.964f, -11.785f, 3539.034f, 3741.972f, -8.693f, 2f, 0, 1, 0))
		{
			iLocal_3211++;
		}
	}
}


void func_840()//Position - 0x83298
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	PED::SET_PED_CAN_LEG_IK(PLAYER::PLAYER_PED_ID(), 0);
	if (iLocal_84 == 0)
	{
		if (AUDIO::PREPARE_MUSIC_EVENT("FBI5A_CUT_PIPE_END") && ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_3020[1 /*3*/]))
		{
			PED::SET_PED_CAN_HEAD_IK(PLAYER::PLAYER_PED_ID(), 1);
			iVar0 = 0;
			while (iVar0 <= (iLocal_3572 - 1))
			{
				iLocal_3572[iVar0] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_bio_grille_break", Local_3020[0 /*3*/], Local_3403[iVar0 /*3*/], 0f, 90f, 0f, 1065353216, 0, 0, 0);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_3572[iVar0], "open", 1f, 0);
				iVar0++;
			}
			Local_3397 = { Local_3391 };
			Local_3400 = { 0f, 0f, 150f };
			iLocal_3251 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_3251, "mini@biotech@blowtorch_str", "blowtorch_success_outro", 1000f, -1000f, 1, 0, 1000f, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
			ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_3020[1 /*3*/], iLocal_3251, "prop_grill_BLOWTORCH_SUCCESS_OUTRO", "mini@biotech@blowtorch_str", 1000f, -1000f, 0, 1148846080);
			ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_3020[1 /*3*/]);
			Local_2054[1 /*24*/] = OBJECT::CREATE_OBJECT(Local_2054[1 /*24*/].f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 0f, 1f), 1, 1, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2054[1 /*24*/], PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			if (CAM::DOES_CAM_EXIST(uLocal_3600))
			{
				CAM::DESTROY_CAM(iLocal_3600, 0);
			}
			if (CAM::DOES_CAM_EXIST(uLocal_3602))
			{
				CAM::DESTROY_CAM(iLocal_3602, 0);
			}
			iLocal_3600 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
			CAM::PLAY_CAM_ANIM(iLocal_3600, "cam_blowtorch_success_outro", "mini@biotech@blowtorch_str", Local_3391, 0f, 0f, 150f, 0, 2);
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			HUD::DISPLAY_RADAR(0);
			HUD::DISPLAY_HUD(0);
			CAM::SET_WIDESCREEN_BORDERS(1, 0);
			GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fia5a_weld3", 7, 0, 0, 0);
			RECORDING::_0x293220DA1B46CEBC(5f, 0f, 4);
			PAD::_RESET_INPUT_MAPPING_SCHEME();
			RECORDING::_0x48621C9FCA3EBD28(4);
			iLocal_84 = 1;
		}
	}
	if (iLocal_84 == 1)
	{
		switch (iLocal_3139)
		{
			case 0:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3251))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3251) > 0.29f)
					{
						AUDIO::TRIGGER_MUSIC_EVENT("FBI5A_CUT_PIPE_END");
						ENTITY::SET_ENTITY_COLLISION(Local_3020[0 /*3*/], 0, 0);
						ENTITY::FREEZE_ENTITY_POSITION(Local_3020[1 /*3*/], 0);
						OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_3020[1 /*3*/], 1000f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1082130432, -1082130432, -1082130432);
						ENTITY::APPLY_FORCE_TO_ENTITY(Local_3020[1 /*3*/], 0, 0f, -0.5f, 0f, 0f, 0f, -0.5f, 0, 0, 1, 1, 0, 1);
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Grate_Release", PLAYER::PLAYER_PED_ID(), "FBI_05_SOUNDS", 0, 0);
						iVar0 = 0;
						while (iVar0 < iLocal_3524)
						{
							if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3524[iVar0]))
							{
								GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_3524[iVar0], "open", 1f, 0);
							}
							iVar0++;
						}
						iLocal_3139++;
					}
				}
				break;
			
			case 1:
				iLocal_3139++;
				break;
			
			case 2:
				if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3567[1]))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("FlareActivate")))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_3208, "Flare", Local_2054[1 /*24*/], "FBI_05_SOUNDS", 0, 0);
						iLocal_3567[1] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_bio_flare", Local_2054[1 /*24*/], 0f, 0f, 0.11f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
						iLocal_3139++;
					}
				}
				break;
			
			case 3:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3251))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3251) > 0.76f)
					{
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("ped_talk_water", PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1f, 0, 0, 0);
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Speech_Bubble", PLAYER::PLAYER_PED_ID(), "FBI_05_SOUNDS", 0, 0);
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3198))
						{
							AUDIO::STOP_SOUND(iLocal_3198);
						}
						SYSTEM::SETTIMERB(0);
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						}
						iLocal_3139++;
					}
				}
				break;
			
			case 4:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3251))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3251) > 0.83f)
					{
						ENTITY::DETACH_ENTITY(Local_2054[1 /*24*/], 1, 1);
						iLocal_3223 = MISC::GET_GAME_TIMER();
						GlobalFunc_2206(&iLocal_3619, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_3625);
						if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3566))
						{
							GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3566, 0);
						}
						if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3522))
						{
							GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3522, 0);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
						TASK::TASK_PLAY_ANIM(0, "swimming@scuba", "dive_run", 1000f, -1.5f, 1000, 131081, 0, 0, 0, 0);
						TASK::TASK_FORCE_MOTION_STATE(0, -1855028596, 0);
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_3518, 5, 512, 20);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
						TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_3685);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
						SYSTEM::SETTIMERB(0);
						if (!PED::IS_PED_INJURED(Local_85))
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_85, 0);
							PED::SET_PED_CAN_RAGDOLL(Local_85, 0);
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_85, 3828.9f, 3659.2f, -22.75f, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(Local_85, 147f);
							TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_3518, ENTITY::GET_ENTITY_COORDS(Local_85, 1), &iVar1);
							iVar1++;
							TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
							TASK::TASK_FORCE_MOTION_STATE(0, -1855028596, 0);
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_3518, iVar1, 808, -1);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
							TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_85, 0, 0);
						}
						if (!PED::IS_PED_INJURED(Local_110))
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_110, 0);
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_110, 3831.3f, 3662.3f, -22.75f, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(Local_110, 147f);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
							TASK::TASK_FORCE_MOTION_STATE(0, -1855028596, 0);
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "fbi5_steve_swim_lab", 0, 808, -1);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
							TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_110, 0, 0);
						}
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_3020[1 /*3*/], -1000f, 1);
						OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_3020[1 /*3*/], 1000f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1082130432, -1082130432, -1082130432);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_3020[1 /*3*/], 3831.37f, 3663f, -24.3083f, 0, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(Local_3020[1 /*3*/], 86.173f, -15.3571f, 149.922f, 2, 1);
						ENTITY::FREEZE_ENTITY_POSITION(Local_3020[1 /*3*/], 1);
						Local_2054[0 /*24*/] = OBJECT::CREATE_OBJECT(Local_2054[0 /*24*/].f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 0f, 1f), 1, 1, 0);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2054[0 /*24*/], PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 24818), -0.06f, -0.12f, -0.165f, 0f, 90f, 345f, 0, 0, 0, 0, 2, 1);
						iLocal_3567[0] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_bio_flare", Local_2054[0 /*24*/], 0f, 0f, 0.11f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
						{
							CAM::SET_CAM_ACTIVE(iLocal_3600, 0);
							CAM::DESTROY_CAM(iLocal_3600, 0);
							uLocal_3603 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 3833.168f, 3667.15f, -22.68036f, -15.67588f, 3.090937f, 165.0562f, 45.0126f, 0, 2);
							CAM::SET_CAM_ACTIVE(uLocal_3603, 1);
							SYSTEM::WAIT(0);
						}
						iLocal_84 = 2;
					}
				}
				break;
		}
		if (GlobalFunc_4926(1000))
		{
			RECORDING::_0x13B350B8AD0EEE10();
			iLocal_84 = 3;
		}
	}
	if (iLocal_84 == 3)
	{
		GlobalFunc_2879();
		GlobalFunc_2206(&iLocal_3619, 1);
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3566))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3566, 0);
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3522))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3522, 0);
		}
		CAM::DESTROY_ALL_CAMS(0);
		ENTITY::SET_ENTITY_COLLISION(Local_3020[0 /*3*/], 0, 0);
		OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_3020[1 /*3*/], 1000f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1082130432, -1082130432, -1082130432);
		ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_3020[1 /*3*/], -1000f, 1);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_3020[1 /*3*/], 3831.37f, 3663f, -24.3083f, 0, 0, 1);
		ENTITY::SET_ENTITY_ROTATION(Local_3020[1 /*3*/], 86.173f, -15.3571f, 149.922f, 2, 1);
		ENTITY::FREEZE_ENTITY_POSITION(Local_3020[1 /*3*/], 1);
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
		TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
		TASK::TASK_PLAY_ANIM(0, "swimming@scuba", "dive_run", 1000f, -1.5f, 1000, 131081, 0, 0, 0, 0);
		TASK::TASK_FORCE_MOTION_STATE(0, -1855028596, 0);
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_3518, 5, 512, 20);
		TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
		TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_3685);
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
		if (!PED::IS_PED_INJURED(Local_85))
		{
			ENTITY::FREEZE_ENTITY_POSITION(Local_85, 0);
			PED::SET_PED_CAN_RAGDOLL(Local_85, 0);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_85, 3828.9f, 3659.2f, -22.75f, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(Local_85, 147f);
			TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_3518, ENTITY::GET_ENTITY_COORDS(Local_85, 1), &iVar2);
			iVar2++;
			TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
			TASK::TASK_FORCE_MOTION_STATE(0, -1855028596, 0);
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_3518, iVar2, 808, -1);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
			TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_85, 0, 0);
		}
		if (!PED::IS_PED_INJURED(Local_110))
		{
			ENTITY::FREEZE_ENTITY_POSITION(Local_110, 0);
			PED::SET_PED_CAN_RAGDOLL(Local_110, 0);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_110, 3831.3f, 3662.3f, -22.75f, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(Local_110, 147f);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
			TASK::TASK_FORCE_MOTION_STATE(0, -1855028596, 0);
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "fbi5_steve_swim_lab", 0, 808, -1);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
			TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_110, 0, 0);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_3524)
		{
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3524[iVar0]))
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_3524[iVar0], "open", 1f, 0);
			}
			iVar0++;
		}
		iLocal_3223 = MISC::GET_GAME_TIMER();
		if (STREAMING::HAS_ANIM_DICT_LOADED("missheistchem2"))
		{
			STREAMING::REMOVE_ANIM_DICT("missheistchem2");
		}
		if (STREAMING::HAS_ANIM_DICT_LOADED("swimming@swim"))
		{
			STREAMING::REMOVE_ANIM_DICT("swimming@swim");
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_2054[0 /*24*/]))
		{
			Local_2054[0 /*24*/] = OBJECT::CREATE_OBJECT(Local_2054[0 /*24*/].f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 0f, 1f), 1, 1, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2054[0 /*24*/], PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 24818), -0.06f, -0.12f, -0.165f, 0f, 90f, 345f, 0, 0, 0, 0, 2, 1);
			iLocal_3567[0] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_bio_flare", Local_2054[0 /*24*/], 0f, 0f, 0.11f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_2054[1 /*24*/]))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(Local_2054[1 /*24*/]))
			{
				ENTITY::DETACH_ENTITY(Local_2054[1 /*24*/], 1, 1);
			}
			ENTITY::SET_ENTITY_COORDS(Local_2054[1 /*24*/], 3833.43f, 3667.793f, -24.6687f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_DYNAMIC(Local_2054[1 /*24*/], 1);
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3567[1]))
			{
				iLocal_3567[1] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_bio_flare", Local_2054[1 /*24*/], 0f, 0f, 0.11f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
			}
		}
		else
		{
			Local_2054[1 /*24*/] = OBJECT::CREATE_OBJECT(Local_2054[1 /*24*/].f_2, 3833.43f, 3667.793f, -24.6687f, 1, 1, 0);
			iLocal_3567[1] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_bio_flare", Local_2054[1 /*24*/], 0f, 0f, 0.11f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
			AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_3208, "Flare", Local_2054[1 /*24*/], "FBI_05_SOUNDS", 0, 0);
		}
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
		{
			iLocal_3603 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 3833.168f, 3667.15f, -22.68036f, -15.67588f, 3.090937f, 165.0562f, 45.0126f, 0, 2);
			CAM::SET_CAM_ACTIVE(iLocal_3603, 1);
			SYSTEM::WAIT(0);
			func_473(0, 1, 1, 0f, 0f, 2000, 0, 1, 1, 1, 1);
		}
		else
		{
			func_473(0, 1, 0, 0f, 0f, 2000, 0, 1, 1, 1, 1);
		}
		RECORDING::_0x81CBAE94390F9F89();
		GlobalFunc_11046(1, "swim through tunnel", 0, 0, 0, 1);
		SYSTEM::SETTIMERB(0);
		iLocal_3139 = 0;
		iLocal_82 = 7;
		iLocal_84 = 0;
	}
	if (iLocal_84 == 2)
	{
		RECORDING::_0x81CBAE94390F9F89();
		if (STREAMING::HAS_ANIM_DICT_LOADED("missheistchem2"))
		{
			STREAMING::REMOVE_ANIM_DICT("missheistchem2");
		}
		if (STREAMING::HAS_ANIM_DICT_LOADED("swimming@swim"))
		{
			STREAMING::REMOVE_ANIM_DICT("swimming@swim");
		}
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
		{
			func_473(0, 1, 0, 0f, 0f, 2000, 0, 1, 1, 1, 1);
		}
		else
		{
			func_473(0, 1, 1, 0f, 0f, 2000, 0, 1, 1, 1, 1);
		}
		GlobalFunc_11046(1, "swim through tunnel", 0, 0, 0, 1);
		SYSTEM::SETTIMERB(0);
		iLocal_3139 = 0;
		iLocal_82 = 7;
		iLocal_84 = 0;
	}
}

void func_841()//Position - 0x83F04
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	iVar0 = 0;
	iVar1 = 0;
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 197, 1);
	PED::SET_PED_CAN_LEG_IK(PLAYER::PLAYER_PED_ID(), 0);
	if (iLocal_84 == 0)
	{
		switch (iLocal_3219)
		{
			case 0:
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(PLAYER::PLAYER_PED_ID()))
					{
						func_321(&Local_2600);
						if (iLocal_3240 > 0)
						{
							iLocal_3219++;
						}
					}
				}
				else
				{
					GlobalFunc_574(332, 0);
					iLocal_84 = 1;
				}
				break;
			
			case 1:
				if (TASK::GET_TASK_MOVE_NETWORK_EVENT(PLAYER::PLAYER_PED_ID(), "readyforfadein"))
				{
					CAM::DO_SCREEN_FADE_IN(1000);
					GlobalFunc_574(332, 0);
					iLocal_84 = 1;
				}
				break;
			}
	}
	if (iLocal_84 == 1)
	{
		if (!func_314("CUT_HELP"))
		{
			GlobalFunc_159("CUT_HELP", -1);
			func_298("CUT_HELP", 1);
			GlobalFunc_702(0, 0, 1);
		}
		if (func_321(&Local_2600))
		{
			iLocal_84 = 2;
		}
		func_319();
		func_297();
		func_843();
	}
	if (iLocal_84 == 2)
	{
		HUD::CLEAR_HELP(1);
		HUD::CLEAR_PRINTS();
		GlobalFunc_4956();
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_5_ENTER_TUNNEL_SYNC_SCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("FBI_5_ENTER_TUNNEL_SYNC_SCENE");
		}
		AUDIO::START_AUDIO_SCENE("FBI_5_CUT_THROUGH_GRATE");
		if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3200))
		{
			AUDIO::STOP_SOUND(iLocal_3200);
		}
		if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3199))
		{
			AUDIO::STOP_SOUND(iLocal_3199);
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3521))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3521, 0);
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3523))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3523, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_2600.f_16))
		{
			OBJECT::DELETE_OBJECT(&(Local_2600.f_16));
		}
		GlobalFunc_571(0, -1);
		iLocal_82 = 6;
		iLocal_84 = 0;
	}
	if (iLocal_84 == 3)
	{
		iVar0 = 0;
		while (iVar0 <= 6)
		{
			iVar1 = 0;
			while (iVar1 <= 6)
			{
				Local_2816[iVar0 /*29*/][iVar1 /*4*/].f_3 = 1;
				iVar1++;
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			iVar1 = 0;
			while (iVar1 <= 7)
			{
				Local_2617[iVar0 /*33*/][iVar1 /*4*/].f_3 = 1;
				iVar1++;
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 6)
		{
			if (iVar0 == 0 || iVar0 == iLocal_3143)
			{
				iVar1 = 0;
				while (iVar1 <= iLocal_3143)
				{
					if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3524[iLocal_3144]))
					{
						Var2 = { Local_2816[iVar0 /*29*/][iVar1 /*4*/], -0.05f, (Local_2816[iVar0 /*29*/][iVar1 /*4*/].f_1 + 0.08f) };
						iLocal_3524[iLocal_3144] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_bio_grille_break", Local_3020[1 /*3*/], Var2, 0f, 0f, 0f, 1065353216, 0, 0, 0);
						iLocal_3144++;
					}
					iVar1++;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (iVar0 == 0 || iVar0 == 5)
			{
				iVar1 = 0;
				while (iVar1 <= 5)
				{
					if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3524[iLocal_3144]))
					{
						Var5 = { Local_2617[iVar0 /*33*/][iVar1 /*4*/], -0.05f, (Local_2617[iVar0 /*33*/][iVar1 /*4*/].f_1 + 0.08f) };
						iLocal_3524[iLocal_3144] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_bio_grille_break", Local_3020[1 /*3*/], Var5, 0f, 0f, 0f, 1065353216, 0, 0, 0);
						iLocal_3144++;
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}


void func_843()//Position - 0x842C2
{
	switch (iLocal_3261)
	{
		case 0:
			if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_weld1", 7, 0, 0, 0))
			{
				iLocal_3261++;
			}
			break;
		
		case 1:
			if (!GlobalFunc_5172(&Local_3049, 0))
			{
				if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_gas", 7, 0, 0, 0))
				{
					iLocal_3223 = MISC::GET_GAME_TIMER();
					iLocal_3261++;
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_588(&iLocal_3223, 20000))
			{
				if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_weld1b", 7, 0, 0, 0))
				{
					iLocal_3261++;
				}
			}
			break;
		
		case 3:
			if (!GlobalFunc_5172(&Local_3049, 0))
			{
				iLocal_3223 = MISC::GET_GAME_TIMER();
			}
			break;
		
		case 4:
			if (GlobalFunc_588(&iLocal_3223, 25000))
			{
				if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_weld1c", 7, 0, 0, 0))
				{
					iLocal_3261++;
				}
			}
			break;
		
		case 5:
			break;
	}
	if (!PAD::IS_CONTROL_PRESSED(2, 229))
	{
		if (!GlobalFunc_5172(&Local_3049, 0))
		{
			if (iLocal_3261 > 1)
			{
				if (GlobalFunc_588(&iLocal_3237, 10000))
				{
					if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_stop", 7, 0, 0, 0))
					{
						iLocal_3237 = MISC::GET_GAME_TIMER();
					}
				}
			}
		}
	}
	else
	{
		iLocal_3237 = MISC::GET_GAME_TIMER();
	}
}


void func_845()//Position - 0x84466
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	int iVar8;
	
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 197, 1);
	PED::SET_PED_CAN_LEG_IK(PLAYER::PLAYER_PED_ID(), 0);
	Var0 = { 3833.164f, 3666.934f, -22.9334f };
	Var3 = { 3832.9f, 3665.74f, -22.92f };
	fVar6 = 150f;
	fVar7 = 0f;
	if (iLocal_84 == 0)
	{
		PED::SET_PED_CAN_HEAD_IK(PLAYER::PLAYER_PED_ID(), 0);
		iVar8 = joaat("prop_pool_ball_01");
		STREAMING::REQUEST_ANIM_DICT("mini@biotech@blowtorch_str");
		STREAMING::REQUEST_ANIM_DICT("mini@biotech@blowtorch_def");
		STREAMING::REQUEST_ANIM_DICT("missheistchem2");
		STREAMING::REQUEST_ANIM_DICT("SWIMMING@swim");
		STREAMING::REQUEST_PTFX_ASSET();
		STREAMING::REQUEST_MODEL(iVar8);
		STREAMING::REQUEST_MODEL(iLocal_3625);
		STREAMING::REQUEST_MODEL(Local_2054[0 /*24*/].f_2);
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_3518);
		TASK::REQUEST_WAYPOINT_RECORDING("fbi5_steve_swim_lab");
		AUDIO::PREPARE_MUSIC_EVENT("FBI5A_CUT_PIPE_START");
		func_847();
		if (((((((((((STREAMING::HAS_ANIM_DICT_LOADED("mini@biotech@blowtorch_str") && STREAMING::HAS_ANIM_DICT_LOADED("mini@biotech@blowtorch_def")) && STREAMING::HAS_ANIM_DICT_LOADED("SWIMMING@swim")) && STREAMING::HAS_ANIM_DICT_LOADED("missheistchem2")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_3518)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("fbi5_steve_swim_lab")) && STREAMING::HAS_MODEL_LOADED(iVar8)) && STREAMING::HAS_MODEL_LOADED(iLocal_3625)) && STREAMING::HAS_MODEL_LOADED(Local_2054[0 /*24*/].f_2)) && ENTITY::DOES_ENTITY_EXIST(Local_3020[0 /*3*/])) && STREAMING::HAS_PTFX_ASSET_LOADED()) && AUDIO::PREPARE_MUSIC_EVENT("FBI5A_CUT_PIPE_START"))
		{
			MISC::CLEAR_AREA(3832.896f, 3665.742f, -23.9975f, 100f, 1, 0, 0, 0);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME(PLAYER::PLAYER_PED_ID(), "minigame_BLOWTORCH", 3832.896f, 3665.742f, -23.9975f, 0f, 0f, fVar6, 2, 0, 0, 0, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
			iLocal_3619 = OBJECT::CREATE_OBJECT(iLocal_3625, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 1, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_3619, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			func_846(&Local_2600, Var3, fVar6, fVar7);
			Local_2600.f_16 = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar8, Var0, 1, 1, 0);
			ENTITY::SET_ENTITY_HEADING(Local_2600.f_16, Local_2600.f_3.f_2);
			ENTITY::SET_ENTITY_VISIBLE(Local_2600.f_16, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar8);
			if (!PED::IS_PED_INJURED(Local_85))
			{
				if (PED::IS_PED_IN_GROUP(Local_85))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_85);
				}
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_85);
				ENTITY::SET_ENTITY_COORDS(Local_85, 3836.017f, 3674.119f, -22.73055f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_85, (fVar6 - 25f));
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_85, 1);
				ENTITY::FREEZE_ENTITY_POSITION(Local_85, 1);
				PED::SET_PED_DIES_IN_WATER(Local_85, 0);
				TASK::TASK_PLAY_ANIM(Local_85, "SWIMMING@swim", "dive_idle", 1000f, -8f, -1, 9, 0, 0, 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_85, 0, 0);
			}
			if (!PED::IS_PED_INJURED(Local_110))
			{
				if (PED::IS_PED_IN_GROUP(Local_110))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_110);
				}
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_110);
				ENTITY::SET_ENTITY_COORDS(Local_110, 3837.998f, 3673.545f, -23.10251f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_110, (fVar6 + 25f));
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_110, 1);
				ENTITY::FREEZE_ENTITY_POSITION(Local_110, 1);
				PED::SET_PED_DIES_IN_WATER(Local_110, 0);
				TASK::TASK_PLAY_ANIM(Local_110, "SWIMMING@swim", "dive_idle", 1000f, -8f, -1, 9, 0, 0, 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_110, 0, 0);
			}
			iLocal_3600 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_ANIMATED_CAMERA", 3830.341f, 3662.525f, -23.24597f, 1.871778f, 3.380538f, -36.63038f, 40.07372f, 1, 2);
			CAM::PLAY_CAM_ANIM(iLocal_3600, "cam_blowtorch_intro", "mini@biotech@blowtorch_def", Local_3391, 0f, 0f, fVar6, 0, 2);
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			HUD::DISPLAY_RADAR(0);
			HUD::DISPLAY_HUD(0);
			CAM::SET_WIDESCREEN_BORDERS(1, 0);
			SYSTEM::SETTIMERB(0);
			RECORDING::_0x48621C9FCA3EBD28(4);
			iLocal_3223 = MISC::GET_GAME_TIMER();
			GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_weld", 7, 0, 0, 0);
			iLocal_84 = 1;
		}
	}
	if (iLocal_84 == 1)
	{
		if (GlobalFunc_4926(1000))
		{
			iLocal_84 = 3;
		}
		if (!func_314("FBI5A_CUT_PIPE_START"))
		{
			if (GlobalFunc_588(&iLocal_3223, 4196))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FBI5A_CUT_PIPE_START");
				func_298("FBI5A_CUT_PIPE_START", 1);
			}
		}
		if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(PLAYER::PLAYER_PED_ID()))
		{
			if (TASK::GET_TASK_MOVE_NETWORK_EVENT(PLAYER::PLAYER_PED_ID(), "IntroFinished"))
			{
				iLocal_84 = 2;
			}
		}
	}
	if (iLocal_84 == 3)
	{
		RECORDING::_0x13B350B8AD0EEE10();
		GlobalFunc_2879();
		if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(PLAYER::PLAYER_PED_ID()))
		{
			if (!TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(PLAYER::PLAYER_PED_ID()))
			{
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(PLAYER::PLAYER_PED_ID(), "introphase", 0.99f);
			}
		}
		AUDIO::CANCEL_MUSIC_EVENT("FBI5A_CUT_PIPE_START");
		AUDIO::TRIGGER_MUSIC_EVENT("debug_stop_oneshot");
		iLocal_84 = 2;
	}
	if (iLocal_84 == 2)
	{
		RECORDING::_0x81CBAE94390F9F89();
		if (!PED::IS_PED_INJURED(Local_85))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_85, 3834.434f, 3671.477f, -22.62436f, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(Local_85, 159.8643f);
		}
		if (!PED::IS_PED_INJURED(Local_110))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_110, 3835.859f, 3673.411f, -21.81704f, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(Local_110, 153.5416f);
		}
		iLocal_3237 = MISC::GET_GAME_TIMER();
		iLocal_3139 = 0;
		iLocal_82 = 5;
		iLocal_84 = 0;
	}
}

void func_846(var uParam0, struct<3> Param1, float fParam4, float fParam5)//Position - 0x84959
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	
	fVar0 = -0.77f;
	fVar1 = (-0.98f + (0.257f / 2f));
	fVar2 = (-0.77f + (0.257f / 2f));
	fVar3 = -0.98f;
	uParam0->f_3 = fParam5;
	uParam0->f_3.f_2 = fParam4;
	uParam0->f_8 = SYSTEM::SIN(fParam4);
	uParam0->f_9 = SYSTEM::COS(fParam4);
	uParam0->f_10 = SYSTEM::SIN(fParam5);
	*uParam0 = { Param1 };
	iVar4 = 0;
	iVar5 = 0;
	iVar4 = 0;
	while (iVar4 < 6)
	{
		iVar5 = 0;
		while (iVar5 < 8)
		{
			Local_2617[iVar4 /*33*/][iVar5 /*4*/] = (fVar2 + (0.257f * IntToFloat(iVar4)));
			Local_2617[iVar4 /*33*/][iVar5 /*4*/].f_1 = (fVar3 + (0.257f * IntToFloat(iVar5)));
			Local_2617[iVar4 /*33*/][iVar5 /*4*/].f_3 = 0;
			iVar5++;
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 7)
	{
		iVar5 = 0;
		while (iVar5 < 7)
		{
			Local_2816[iVar4 /*29*/][iVar5 /*4*/] = (fVar0 + (0.257f * IntToFloat(iVar5)));
			Local_2816[iVar4 /*29*/][iVar5 /*4*/].f_1 = (fVar1 + (0.257f * IntToFloat(iVar4)));
			Local_2816[iVar4 /*29*/][iVar5 /*4*/].f_3 = 0;
			iVar5++;
		}
		iVar4++;
	}
	uParam0->f_11 = fVar0;
	uParam0->f_12 = (fVar0 + (0.257f * 6f));
	uParam0->f_13 = fVar3;
	uParam0->f_14 = (fVar3 + (0.257f * 7f));
	if (bLocal_3096)
	{
		uParam0->f_6 = -0.59604f;
		uParam0->f_6.f_1 = 0.718505f;
	}
	else
	{
		uParam0->f_6 = uParam0->f_11;
		uParam0->f_6.f_1 = uParam0->f_14;
	}
	iLocal_3140 = 0;
	iLocal_3141 = 7;
	iLocal_3142 = 0;
	iLocal_3143 = 6;
}

void func_847()//Position - 0x84AF3
{
	Local_3020[0 /*3*/].f_2 = joaat("prop_chem_grill");
	Local_3020[1 /*3*/].f_2 = joaat("prop_chem_grill_bit");
	if (!ENTITY::DOES_ENTITY_EXIST(Local_3020[0 /*3*/]))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_3388, 1) < 40000f)
		{
			STREAMING::REQUEST_MODEL(Local_3020[0 /*3*/].f_2);
			STREAMING::REQUEST_MODEL(Local_3020[1 /*3*/].f_2);
			if (STREAMING::HAS_MODEL_LOADED(Local_3020[0 /*3*/].f_2) && STREAMING::HAS_MODEL_LOADED(Local_3020[1 /*3*/].f_2))
			{
				Local_3020[0 /*3*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_3020[0 /*3*/].f_2, Local_3388, 1, 1, 0);
				Local_3020[1 /*3*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_3020[1 /*3*/].f_2, Local_3388, 1, 1, 0);
				ENTITY::SET_ENTITY_ROTATION(Local_3020[0 /*3*/], Local_3394, 2, 1);
				ENTITY::SET_ENTITY_ROTATION(Local_3020[1 /*3*/], Local_3394, 2, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3020[0 /*3*/].f_2);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3020[1 /*3*/].f_2);
				ENTITY::FREEZE_ENTITY_POSITION(Local_3020[0 /*3*/], 1);
				ENTITY::FREEZE_ENTITY_POSITION(Local_3020[1 /*3*/], 1);
			}
		}
	}
}

void func_848()//Position - 0x84BFB
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 197, 1);
	if (iLocal_84 == 0)
	{
		func_2(0);
		iVar0 = joaat("prop_pool_ball_01");
		STREAMING::REQUEST_ANIM_DICT("mini@biotech@blowtorch_str");
		STREAMING::REQUEST_ANIM_DICT("mini@biotech@blowtorch_def");
		STREAMING::REQUEST_ANIM_DICT("missheistchem2");
		STREAMING::REQUEST_ANIM_DICT("SWIMMING@swim");
		STREAMING::REQUEST_PTFX_ASSET();
		STREAMING::REQUEST_MODEL(iVar0);
		STREAMING::REQUEST_MODEL(iLocal_3625);
		STREAMING::REQUEST_MODEL(Local_2054[0 /*24*/].f_2);
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_3518);
		TASK::REQUEST_WAYPOINT_RECORDING("fbi5_steve_swim_lab");
		AUDIO::PREPARE_MUSIC_EVENT("FBI5A_CUT_PIPE_START");
		iLocal_84 = 1;
	}
	if (iLocal_84 == 1)
	{
		func_853();
		func_847();
		func_852();
		if (func_850(&Local_3049, Local_3376, 3836.541f, 3668.579f, -24.876f, 3833.517f, 3670.342f, -21.276f, 2.5f, 1, "", 0, 1, -1, 1))
		{
			iLocal_84 = 2;
		}
		if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 242628503) == 1)
		{
			iVar5 = 28;
			GlobalFunc_612(&uVar1, &iVar2, &uVar3, &iVar4, 0);
			if (!PAD::IS_LOOK_INVERTED())
			{
				iVar4 = (iVar4 * -1);
			}
			if ((iVar2 > iVar5 || iVar2 < (iVar5 * -1)) || PAD::IS_CONTROL_PRESSED(0, 21))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
		}
		PED::SET_PED_RESET_FLAG(Local_85, 151, 1);
		PED::SET_PED_RESET_FLAG(Local_110, 151, 1);
		if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2570.x, 0) && MISC::ABSF(ENTITY::GET_ENTITY_SPEED(Local_2570.x)) < 2f) || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!PED::IS_PED_INJURED(Local_85))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_85))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_85, 3f, 0);
				}
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_85, Local_85.f_9, 1f, 1f, 2f, 0, 1, 0))
				{
					if (func_336(Local_85, 242628503, -2, 1))
					{
						TASK::CLEAR_PED_TASKS(Local_85);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_85, 1);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_85.f_9, 2f, -1, 146.4602f, 1056964608);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
						TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					}
				}
				else if (!GlobalFunc_662(Local_85, 146.4602f, 20f))
				{
					if (func_336(Local_85, 242628503, -2, 1))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
						TASK::TASK_ACHIEVE_HEADING(0, 146.4602f, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
						TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					}
				}
			}
			if (!PED::IS_PED_INJURED(Local_110))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_110))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_110, 3f, 0);
				}
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_110, Local_110.f_9, 1f, 1f, 2f, 0, 1, 0))
				{
					if (func_336(Local_110, 242628503, -2, 1))
					{
						TASK::CLEAR_PED_TASKS(Local_110);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_110, 1);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_110.f_9, 2f, -1, 146.4602f, 1056964608);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
						TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					}
				}
				else if (!GlobalFunc_662(Local_110, 146.4602f, 20f))
				{
					if (func_336(Local_110, 242628503, -2, 1))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
						TASK::TASK_ACHIEVE_HEADING(0, 146.4602f, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
						TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					}
				}
			}
		}
	}
	if (iLocal_84 == 2)
	{
		if (func_485(1, 1, 1, 0))
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_5_SWIM_TO_TUNNEL_ENTRANCE"))
			{
				AUDIO::STOP_AUDIO_SCENE("FBI_5_SWIM_TO_TUNNEL_ENTRANCE");
			}
			AUDIO::START_AUDIO_SCENE("FBI_5_ENTER_TUNNEL_SYNC_SCENE");
			if (ENTITY::DOES_ENTITY_EXIST(Local_2054[0 /*24*/]))
			{
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3567[0]))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3567[0], 0);
				}
				OBJECT::DELETE_OBJECT(&(Local_2054[0 /*24*/]));
			}
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			iLocal_82 = 4;
			iLocal_84 = 0;
		}
	}
	if (iLocal_84 == 3)
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 3834.7f, 3668.7f, -23.6f, 1, 0, 0, 1);
		if (!PED::IS_PED_INJURED(Local_85))
		{
			ENTITY::SET_ENTITY_COORDS(Local_85, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), -1f, 0f, 0f), 1, 0, 0, 1);
		}
		if (!PED::IS_PED_INJURED(Local_110))
		{
			ENTITY::SET_ENTITY_COORDS(Local_110, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 1f, 0f, 0f), 1, 0, 0, 1);
		}
	}
}


bool func_850(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, float fParam10, int iParam11, char* sParam12, bool bParam13, bool bParam14, int iParam15, bool bParam16)//Position - 0x85030
{
	return GlobalFunc_8566(uParam0, Param1, GlobalFunc_716(), Param4, Param7, iParam11, 3, 0, 0, 0, 0, sParam12, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), 0, bParam13, GlobalFunc_648(), 1, 0, bParam14, iParam15, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), bParam16, fParam10);
}


void func_852()//Position - 0x85093
{
	switch (iLocal_3345)
	{
		case 0:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_3376, 1) < 100f)
			{
				if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_grate", 7, 0, 0, 0))
				{
					iLocal_3345++;
				}
			}
			break;
		
		case 1:
			break;
	}
}

void func_853()//Position - 0x850F1
{
	switch (iLocal_3347)
	{
		case 0:
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_3346 = MISC::GET_GAME_TIMER();
				iLocal_3347++;
			}
			break;
		
		case 1:
			if (!PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				if (GlobalFunc_588(&iLocal_3346, 15000))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
						if (!PAD::_IS_USING_KEYBOARD(0))
						{
							if (PAD::IS_LOOK_INVERTED())
							{
								GlobalFunc_159("fbi5a_help_7", -1);
							}
							else
							{
								GlobalFunc_159("fbi5a_help_6", -1);
							}
						}
						else
						{
							GlobalFunc_159("fbi5a_help_6", -1);
						}
					}
					else
					{
						GlobalFunc_159("fbi5a_help_5", -1);
					}
					iLocal_3347++;
				}
			}
			else
			{
				iLocal_3346 = MISC::GET_GAME_TIMER();
			}
			break;
		
		case 2:
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				if (GlobalFunc_74("fbi5a_help_5") || GlobalFunc_74("fbi5a_help_6"))
				{
					HUD::CLEAR_HELP(1);
				}
				iLocal_3347++;
			}
			break;
		
		case 3:
			break;
	}
}

void func_854()//Position - 0x851E7
{
	struct<3> Var0;
	float fVar3;
	
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 197, 1);
	if (iLocal_84 == 0)
	{
		GlobalFunc_563(1);
		GlobalFunc_7632(1);
		Var0 = { Local_3373 };
		fVar3 = 140f;
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2570.x, 0))
		{
			STREAMING::REQUEST_MODEL(Local_2054[0 /*24*/].f_2);
			STREAMING::REQUEST_ANIM_DICT("missheistchem2");
			STREAMING::REQUEST_ANIM_DICT("swimming@scuba");
			AUDIO::PREPARE_MUSIC_EVENT("FBI5A_DIVE_OUT_MA");
			STREAMING::REQUEST_PTFX_ASSET();
			if ((((STREAMING::HAS_MODEL_LOADED(Local_2054[0 /*24*/].f_2) && STREAMING::HAS_ANIM_DICT_LOADED("missheistchem2")) && STREAMING::HAS_ANIM_DICT_LOADED("swimming@scuba")) && STREAMING::HAS_PTFX_ASSET_LOADED()) && GlobalFunc_552(1, 0, 1))
			{
				GlobalFunc_5652(&Local_3049, 1, 0);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_5_DINGHY_TO_DIVE_POINT"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_5_DINGHY_TO_DIVE_POINT");
				}
				Local_85.f_2 = GlobalFunc_6797(Local_85, 0, 145);
				PED::SET_PED_COMPONENT_VARIATION(Local_85, 8, 1, 0, 0);
				Local_110.f_2 = GlobalFunc_6797(Local_110, 0, 145);
				PED::SET_PED_PROP_INDEX(Local_110, 1, 1, 0, false);
				GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "Fbi5a_b_cut1", 7, 0, 0, 0);
				ENTITY::SET_ENTITY_COORDS(Local_2570.x, Var0, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_2570.x, fVar3);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_2570.x);
				VEHICLE::SET_BOAT_ANCHOR(Local_2570.x, 1);
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_2570.x, 0, 0);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				Local_3397 = { 0f, 0f, 0f };
				Local_3400 = { 0f, 0f, 0f };
				iLocal_3251 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_3251, "missheistchem2", "Boat_Dive_Enter_Player", 1000f, -8f, 4, 0, 1000f, 0);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_3251, Local_2570.x, 0);
				GlobalFunc_11267(PLAYER::PLAYER_PED_ID(), 12, 10, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				GlobalFunc_11267(PLAYER::PLAYER_PED_ID(), 8, 22, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				iLocal_3603 = CAM::CREATE_CAM("default_scripted_camera", 0);
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_3603, Local_2570.x, -2.16f, -4.19f, 2.55f, 1);
				CAM::POINT_CAM_AT_ENTITY(iLocal_3603, Local_2570.x, 17.4f, 26.1f, -1.5f, 1);
				CAM::SET_CAM_FOV(iLocal_3603, 45f);
				uLocal_3604 = CAM::CREATE_CAM("default_scripted_camera", 0);
				CAM::ATTACH_CAM_TO_ENTITY(uLocal_3604, Local_2570.x, -2.16f, -4.19f, 1.66f, 1);
				CAM::POINT_CAM_AT_ENTITY(iLocal_3604, Local_2570.x, 17.4f, 26.1f, -1.5f, 1);
				CAM::SET_CAM_FOV(iLocal_3604, 45f);
				CAM::SET_CAM_ACTIVE(iLocal_3603, 1);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_3604, iLocal_3603, 5000, 3, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				CAM::_0x661B5C8654ADD825(iLocal_3604, 1);
				RECORDING::_0x48621C9FCA3EBD28(4);
				iLocal_84 = 1;
			}
		}
	}
	if (iLocal_84 == 1)
	{
		func_847();
		if (func_855())
		{
			iLocal_84 = 2;
		}
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_85.f_15))
		{
			if (!iLocal_3131)
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_85.f_15) > 0.64f)
				{
					GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_fbi5_ped_water_splash", Local_85, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
					iLocal_3131 = 1;
				}
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_85.f_15) >= 0.5f)
			{
				if (((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3251) && ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missheistchem2", "Boat_Dive_Exit_Player", 3)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3251) >= 0.2f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3251))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_85);
					ENTITY::SET_ENTITY_COORDS(Local_85, 3945.5f, 3850.4f, -3f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_85, 142.7378f);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_FORCE_MOTION_STATE(0, -1855028596, 0);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, 3844.3f, 3679.2f, -21f, 3f, -1, 40000f, 3f);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					Local_2054[2 /*24*/] = OBJECT::CREATE_OBJECT(Local_2054[2 /*24*/].f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_85, 0f, 0f, 1f), 1, 1, 0);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2054[2 /*24*/], Local_85, PED::GET_PED_BONE_INDEX(Local_85, 24818), -0.06f, -0.12f, -0.165f, 0f, 90f, 345f, 0, 0, 0, 0, 2, 1);
					iLocal_3567[2] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_bio_flare", Local_2054[2 /*24*/], 0f, 0f, 0.11f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_85, 0, 0);
				}
			}
		}
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_110.f_15))
		{
			if (!iLocal_3132)
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_110.f_15) > 0.68f)
				{
					GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_fbi5_ped_water_splash", Local_110, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
					iLocal_3132 = 1;
				}
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_110.f_15) >= 0.5f)
			{
				if (((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3251) && ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missheistchem2", "Boat_Dive_Exit_Player", 3)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3251) >= 0.35f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3251))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_110);
					ENTITY::SET_ENTITY_COORDS(Local_110, 3946.3f, 3864.1f, -3f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_110, 142.7378f);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_FORCE_MOTION_STATE(0, -1855028596, 0);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_110.f_9, 3f, -1, 40000f, 5f);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					Local_2054[3 /*24*/] = OBJECT::CREATE_OBJECT(Local_2054[3 /*24*/].f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_110, 0f, 0f, 1f), 1, 1, 0);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2054[3 /*24*/], Local_110, PED::GET_PED_BONE_INDEX(Local_110, 10706), -0.06f, -0.12f, -0.165f, 0f, 90f, 345f, 0, 0, 0, 0, 2, 1);
					iLocal_3567[3] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_bio_flare", Local_2054[3 /*24*/], 0f, 0f, 0.11f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_110, 0, 0);
				}
			}
		}
		else if (((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3251) && ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missheistchem2", "Boat_Dive_Exit_Player", 3)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3251) >= 0.7f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3251))
		{
			if (func_336(Local_110, 242628503, -2, 1))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
				TASK::TASK_FORCE_MOTION_STATE(0, -1855028596, 0);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_110.f_9, 3f, -1, 1193033728, 1056964608);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
				TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
			}
		}
	}
	if (iLocal_84 == 2)
	{
		RECORDING::_0x81CBAE94390F9F89();
		HUD::CLEAR_PRINTS();
		STREAMING::REMOVE_ANIM_DICT("missheistchem2");
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		ENTITY::FREEZE_ENTITY_POSITION(Local_2570.x, 0);
		VEHICLE::SET_BOAT_ANCHOR(Local_2570.x, 0);
		func_473(0, 0, 1, 0f, 0f, 2500, 0, 1, 1, 1, 1);
		SYSTEM::SETTIMERB(0);
		iLocal_3139 = 0;
		iLocal_82 = 3;
		iLocal_84 = 0;
	}
	if (iLocal_84 == 3)
	{
		GlobalFunc_2879();
		HUD::CLEAR_PRINTS();
		STREAMING::REMOVE_ANIM_DICT("missheistchem2");
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2570.x, 0))
		{
			ENTITY::FREEZE_ENTITY_POSITION(Local_2570.x, 0);
			VEHICLE::SET_BOAT_ANCHOR(Local_2570.x, 0);
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
			}
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(PLAYER::PLAYER_PED_ID(), 3889.213f, 3730.998f, -4f, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 135.25f);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
			TASK::TASK_PLAY_ANIM(0, "SWIMMING@scuba", "dive_run", 1000f, -1.5f, 1000, 131081, 0, 0, 0, 0);
			TASK::TASK_FORCE_MOTION_STATE(0, -1855028596, 0);
			TASK::TASK_GO_STRAIGHT_TO_COORD(0, 3874.75f, 3717.235f, -6.5f, 2f, -1, 1193033728, 1056964608);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
			TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_3685);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
			if (!PED::IS_PED_INJURED(Local_85))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(Local_85, 0))
				{
					if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_85))
					{
						if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(Local_85))
						{
							ENTITY::DETACH_ENTITY(Local_85, 1, 1);
						}
					}
				}
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_85);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_85, 3879.16f, 3724.64f, -11.5f, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_85, 140.22f);
				PED::SET_PED_CAN_RAGDOLL(Local_85, 0);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
				TASK::TASK_PLAY_ANIM(0, "SWIMMING@scuba", "dive_run", 1000f, -8f, 1500, 1, 0, 0, 0, 0);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_85.f_9, 3f, -1, 1193033728, 1056964608);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
				TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
				Local_2054[2 /*24*/] = OBJECT::CREATE_OBJECT(Local_2054[2 /*24*/].f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_85, 0f, 0f, 1f), 1, 1, 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2054[2 /*24*/], Local_85, PED::GET_PED_BONE_INDEX(Local_85, 24818), -0.06f, -0.12f, -0.165f, 0f, 90f, 345f, 0, 0, 0, 0, 2, 1);
				iLocal_3567[2] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_bio_flare", Local_2054[2 /*24*/], 0f, 0f, 0.11f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_85, 0, 0);
			}
			if (!PED::IS_PED_INJURED(Local_110))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(Local_110, 0))
				{
					if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_110))
					{
						if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(Local_110))
						{
							ENTITY::DETACH_ENTITY(Local_110, 1, 1);
						}
					}
				}
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_110);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_110, 3876.22f, 3717.27f, -11.2f, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_110, 149.77f);
				PED::SET_PED_CAN_RAGDOLL(Local_110, 0);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
				TASK::TASK_PLAY_ANIM(0, "SWIMMING@scuba", "dive_run", 1000f, -8f, 2000, 1, 0, 0, 0, 0);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_110.f_9, 3f, -1, 1193033728, 1056964608);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
				TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
				Local_2054[3 /*24*/] = OBJECT::CREATE_OBJECT(Local_2054[3 /*24*/].f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_110, 0f, 0f, 1f), 1, 1, 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2054[3 /*24*/], Local_110, PED::GET_PED_BONE_INDEX(Local_110, 10706), 0.2f, -0.09f, -0.01f, -10f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				iLocal_3567[3] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_bio_flare", Local_2054[3 /*24*/], 0f, 0f, 0.11f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_110, 0, 0);
			}
			iLocal_3139 = 0;
			iLocal_82 = 3;
			iLocal_84 = 0;
			func_459(0, 0f, 0f, 0, 800);
		}
	}
}

int func_855()//Position - 0x85BE5
{
	switch (iLocal_3290)
	{
		case 0:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3251))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3251) >= 1f)
				{
					Local_3397 = { 0f, 0f, 0f };
					Local_3400 = { 0f, 0f, 0f };
					iLocal_3251 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_3251, "missheistchem2", "Boat_Dive_Idle_Player", 8f, -8f, 4, 0, 8f, 1024);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_3251, Local_2570.x, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_3251, 1);
					iLocal_3290++;
				}
			}
			break;
		
		case 1:
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_3604))
			{
				GlobalFunc_159("fbi5a_help_2", -1);
				AUDIO::START_AUDIO_SCENE("FBI_5_DIVE_IN_SYNC_SCENE");
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(65f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::RENDER_SCRIPT_CAMS(0, 1, 2000, 1, 0, 0);
				CAM::DESTROY_ALL_CAMS(0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				iLocal_3290++;
			}
			break;
		
		case 2:
			CAM::_0xDD79DF9F4D26E1C9();
			if (!CAM::_0x3044240D2E0FA842())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3251))
			{
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 75))
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_5_DIVE_IN_SYNC_SCENE"))
					{
						AUDIO::STOP_AUDIO_SCENE("FBI_5_DIVE_IN_SYNC_SCENE");
					}
					AUDIO::START_AUDIO_SCENE("FBI_5_SWIM_TO_TUNNEL_ENTRANCE");
					RECORDING::_0x293220DA1B46CEBC(3f, 10f, 4);
					HUD::CLEAR_HELP(1);
					Local_3397 = { 0f, 0f, 0f };
					Local_3400 = { 0f, 0f, 0f };
					iLocal_3251 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_3251, "missheistchem2", "Boat_Dive_Exit_Player", 8f, -8f, 4, 0, 8f, 0);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_3251, Local_2570.x, 0);
					iLocal_3290++;
				}
			}
			break;
		
		case 3:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3251))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3251) > 0.147f)
				{
					GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_fbi5_ped_water_splash", PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
					iLocal_3290++;
				}
			}
			break;
		
		case 4:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3251))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3251) > 0.48f)
				{
					GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("water_splash_ped_bubbles", PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
					iLocal_3290++;
				}
			}
			break;
		
		case 5:
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3567[0]))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("FlareActivate")))
				{
					Local_2054[0 /*24*/] = OBJECT::CREATE_OBJECT(Local_2054[0 /*24*/].f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 0f, 1f), 1, 1, 0);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2054[0 /*24*/], PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					iLocal_3567[0] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_bio_flare", Local_2054[0 /*24*/], 0f, 0f, 0.11f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
					iLocal_3139++;
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3251))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3251) >= 0.95f)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FBI5A_DIVE_OUT_MA");
					ENTITY::DETACH_ENTITY(Local_2054[0 /*24*/], 1, 1);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
					TASK::TASK_PLAY_ANIM(0, "SWIMMING@scuba", "dive_run", 4f, -1.5f, 1000, 131081, 0, 0, 0, 0);
					TASK::TASK_FORCE_MOTION_STATE(0, -1855028596, 0);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, 3923f, 3834.8f, -7.5f, 2f, -1, 1193033728, 1056964608);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
					TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_3685);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
					return 1;
				}
			}
			break;
	}
	return 0;
}


void func_857()//Position - 0x85F92
{
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 197, 1);
	if (iLocal_84 == 0)
	{
		AUDIO::START_AUDIO_SCENE("FBI_5_DINGHY_TO_DIVE_POINT");
		AUDIO::TRIGGER_MUSIC_EVENT("FBI5A_MISSION_START_ST");
		SYSTEM::SETTIMERA(0);
		iLocal_3139 = 0;
		iLocal_3356 = MISC::GET_GAME_TIMER();
		func_862();
		iLocal_84 = 1;
	}
	if (iLocal_84 == 1)
	{
		switch (iLocal_3247)
		{
			case 0:
				func_861();
				func_860();
				func_859();
				if (CAM::DOES_CAM_EXIST(iLocal_3604))
				{
					if ((!CAM::IS_CAM_INTERPOLATING(iLocal_3604) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2570.x)) && CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
					{
						CAM::_SET_GAMEPLAY_CAM_VEHICLE_CAMERA("DINGHY");
						CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
						func_473(0, 0, 0, 0f, 0f, 0, 0, 1, 1, 1, 1);
					}
					else if (!iLocal_3136)
					{
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
						{
							if (GlobalFunc_588(&iLocal_3356, 2900))
							{
								if (bLocal_3135)
								{
									GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
								}
								else
								{
									GRAPHICS::ANIMPOSTFX_PLAY("CamPushInMichael", 0, 0);
								}
								AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
								iLocal_3136 = 1;
							}
						}
					}
				}
				if (((PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2570.x) && PED::IS_PED_SITTING_IN_VEHICLE(Local_85, Local_2570.x)) && PED::IS_PED_SITTING_IN_VEHICLE(Local_110, Local_2570.x)) && !CAM::DOES_CAM_EXIST(iLocal_3604))
				{
					func_858(PLAYER::PLAYER_PED_ID(), 12, 10);
					func_858(PLAYER::PLAYER_PED_ID(), 8, 22);
					PED::SET_PED_PRELOAD_VARIATION_DATA(Local_85, 8, 1, 0);
					PED::SET_PED_PRELOAD_PROP_DATA(Local_110, 1, 1, 0);
					STREAMING::REMOVE_ANIM_DICT("missfbi5leadinoutfbi_5a_mcs_leadout");
					iLocal_3247++;
				}
				break;
			
			case 1:
				func_847();
				STREAMING::REQUEST_ANIM_DICT("missheistchem2");
				if (GlobalFunc_9199(&Local_3049, Local_3373, 20f, 20f, 2.5f, 1, Local_85, Local_110, 0, Local_2570.x, "GOTO_PIPE", "FBI5A_GOD_1", "FBI5A_GOD_2", "FBI5A_GOD_3", "FBI5A_GOD_0", "", "GOBACK_BOAT", 0, 1, 1, -1))
				{
					if (GlobalFunc_552(1, 0, 1) && STREAMING::HAS_ANIM_DICT_LOADED("missheistchem2"))
					{
						GlobalFunc_4935();
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
						GlobalFunc_5652(&Local_3049, 1, 0);
						iLocal_3220 = 22;
						iLocal_3247++;
					}
				}
				func_862();
				break;
			
			case 2:
				if (!func_314("fbi5a_b_cut0"))
				{
					if (!GlobalFunc_5172(&Local_3049, 0))
					{
						if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_b_cut0", 7, 0, 0, 0))
						{
							func_298("fbi5a_b_cut0", 1);
						}
					}
				}
				else if (!GlobalFunc_5172(&Local_3049, 0))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_85);
					PED::SET_PED_DIES_IN_WATER(Local_85, 0);
					Local_3397 = { 0f, 0f, 0f };
					Local_3400 = { 0f, 0f, 0f };
					Local_85.f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_85, Local_85.f_15, "missheistchem2", "Boat_Dive_Exit_Front_Right", 1000f, -8f, 4, 0, 1000f, 0);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(Local_85.f_15, Local_2570.x, 0);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_110);
					PED::SET_PED_DIES_IN_WATER(Local_110, 0);
					Local_3397 = { 0f, 0f, 0f };
					Local_3400 = { 0f, 0f, 0f };
					Local_110.f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_110, Local_110.f_15, "missheistchem2", "Boat_Dive_Exit_Rear_Left", 1000f, -8f, 4, 0, 1000f, 0);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(Local_110.f_15, Local_2570.x, 0);
					iLocal_84 = 2;
				}
				break;
			}
	}
	if (iLocal_84 == 2)
	{
		HUD::CLEAR_PRINTS();
		iLocal_82 = 2;
		iLocal_84 = 0;
	}
	if (iLocal_84 == 3)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2570.x, 0))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2570.x, 0))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2570.x, -1);
			}
			PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3373);
			GlobalFunc_4935();
			HUD::CLEAR_PRINTS();
			func_298("fbi5a_b_cut0", 1);
			iLocal_3247 = 1;
			GlobalFunc_5652(&Local_3049, 1, 0);
		}
	}
}

void func_858(int iParam0, int iParam1, int iParam2)//Position - 0x86335
{
	struct<14> Var0;
	
	if (iParam1 == 12 || iParam1 == 13)
	{
		return;
	}
	Var0 = { GlobalFunc_10828(ENTITY::GET_ENTITY_MODEL(iParam0), iParam1, iParam2) };
	if (iParam1 == 14)
	{
		if (Var0.f_3 != -1 && Var0.f_3 != 255)
		{
			PED::SET_PED_PRELOAD_PROP_DATA(iParam0, Var0.f_12, Var0.f_3, Var0.f_4);
		}
	}
	else if (Var0.f_3 != -1 && Var0.f_4 != -1)
	{
		PED::SET_PED_PRELOAD_VARIATION_DATA(iParam0, GlobalFunc_33(iParam1), Var0.f_3, Var0.f_4);
	}
}

void func_859()//Position - 0x863C1
{
	switch (iLocal_3337)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("missfbi5leadinoutfbi_5a_mcs_leadout");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi5leadinoutfbi_5a_mcs_leadout"))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_110, Local_2570.x, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_2570.x, "seat_dside_r"), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				TASK::TASK_PLAY_ANIM(Local_110, "missfbi5leadinoutfbi_5a_mcs_leadout", "fbi_5a_mcs_leadout_steve", 1000f, -8f, -1, 2, 0, 0, 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_110, 0, 0);
				iLocal_3337++;
			}
			break;
		
		case 1:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_110, "missfbi5leadinoutfbi_5a_mcs_leadout", "fbi_5a_mcs_leadout_steve", 3))
			{
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_110, "missfbi5leadinoutfbi_5a_mcs_leadout", "fbi_5a_mcs_leadout_steve") >= 1f)
				{
					TASK::CLEAR_PED_TASKS(Local_110);
					PED::SET_PED_COMPONENT_VARIATION(Local_110, 6, 1, 0, 0);
					PED::SET_PED_INTO_VEHICLE(Local_110, Local_2570.x, 1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_110, 0, 0);
					iLocal_3337++;
				}
			}
			break;
		
		case 2:
			break;
	}
}

void func_860()//Position - 0x864A5
{
	switch (iLocal_3336)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("missfbi5leadinoutfbi_5a_mcs_leadout");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi5leadinoutfbi_5a_mcs_leadout"))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_85, Local_2570.x, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_2570.x, "seat_pside_f"), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				TASK::TASK_PLAY_ANIM(Local_85, "missfbi5leadinoutfbi_5a_mcs_leadout", "fbi_5a_mcs_leadout_dave", 1000f, -8f, -1, 2, 0, 0, 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_85, 0, 0);
				iLocal_3336++;
			}
			break;
		
		case 1:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_85, "missfbi5leadinoutfbi_5a_mcs_leadout", "fbi_5a_mcs_leadout_dave", 3))
			{
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_85, "missfbi5leadinoutfbi_5a_mcs_leadout", "fbi_5a_mcs_leadout_dave") >= 1f)
				{
					TASK::CLEAR_PED_TASKS(Local_85);
					PED::SET_PED_COMPONENT_VARIATION(Local_85, 6, 1, 0, 0);
					PED::SET_PED_INTO_VEHICLE(Local_85, Local_2570.x, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_85, 0, 0);
					iLocal_3336++;
				}
			}
			break;
		
		case 2:
			break;
	}
}

void func_861()//Position - 0x86589
{
	switch (iLocal_3335)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("missfbi5leadinoutfbi_5a_mcs_leadout");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi5leadinoutfbi_5a_mcs_leadout"))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Local_2570.x, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_2570.x, "seat_dside_f"), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi5leadinoutfbi_5a_mcs_leadout", "fbi_5a_mcs_leadout_mic", 1000f, -8f, -1, 2, 0, 0, 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				iLocal_3335++;
			}
			break;
		
		case 1:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi5leadinoutfbi_5a_mcs_leadout", "fbi_5a_mcs_leadout_mic", 3))
			{
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "missfbi5leadinoutfbi_5a_mcs_leadout", "fbi_5a_mcs_leadout_mic") >= 1f)
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 6, 3, 0, 0);
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2570.x, -1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
					iLocal_3335++;
				}
			}
			break;
		
		case 2:
			break;
	}
}

void func_862()//Position - 0x8667F
{
	switch (iLocal_3220)
	{
		case 0:
			if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_go_0", 7, 0, 0, 0))
			{
				iLocal_3220++;
			}
			break;
		
		case 1:
			if (HUD::DOES_BLIP_EXIST(Local_3049.f_5))
			{
				if (!GlobalFunc_5172(&Local_3049, 1))
				{
					switch (GlobalFunc_7050())
					{
						case 0:
							if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_bant1a", 7, 0, 0, 0))
							{
								iLocal_3220++;
							}
							break;
						
						case 1:
							if (GlobalFunc_10618(&uLocal_3788, "fbi5aAU", "fbi5a_ban1v1", 7, 0, 0, 0))
							{
								iLocal_3220++;
							}
							break;
						}
					}
			}
			break;
		
		case 2:
			if (func_530(Local_3049.f_5, Local_85, Local_110, 1))
			{
				iLocal_3220++;
			}
			break;
		
		case 3:
			break;
	}
}

void func_863()//Position - 0x8675F
{
	if (iLocal_84 == 0)
	{
		switch (GlobalFunc_8315())
		{
			case 0:
				CUTSCENE::REQUEST_CUTSCENE("fbi_5_int", 8);
				if (CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_86864[0]))
					{
						Local_2570.x = Global_86864[0];
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_2570.x, 1, 1);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_2570.x, "fbi_5_michaels_boat", 0, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "dave_fbi", 2, Local_85.f_1, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "steve_fbi", 2, Local_110.f_1, 0);
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", PLAYER::PLAYER_PED_ID(), 0);
						func_904(1, "franklin", 2);
						func_904(2, "trevor", 2);
						GlobalFunc_8380(1, 1, 1, 0);
						CUTSCENE::START_CUTSCENE(2048);
						RECORDING::_0x48621C9FCA3EBD28(4);
						bLocal_3135 = true;
						iLocal_84 = 1;
					}
				}
				break;
			
			case 1:
				CUTSCENE::REQUEST_CUTSCENE("fbi_5_int", 8);
				if (CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]) && ENTITY::DOES_ENTITY_EXIST(Global_86864[0]))
					{
						bLocal_3135 = false;
						uLocal_3710[0] = Global_86864.f_9[0];
						Local_2570.x = Global_86864[0];
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_3710[0], 1, 1);
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_2570.x, 1, 1);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_3710[0], "michael", 0, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_2570.x, "fbi_5_michaels_boat", 0, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "dave_fbi", 2, Local_85.f_1, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "steve_fbi", 2, Local_110.f_1, 0);
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("franklin", PLAYER::PLAYER_PED_ID(), 0);
						func_904(0, "michael", 2);
						func_904(2, "trevor", 2);
						GlobalFunc_8380(1, 1, 1, 0);
						CUTSCENE::START_CUTSCENE(2048);
						RECORDING::_0x48621C9FCA3EBD28(4);
						iLocal_84 = 1;
					}
				}
				break;
			
			case 2:
				if (CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					if ((ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]) && ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1])) && ENTITY::DOES_ENTITY_EXIST(Global_86864[0]))
					{
						bLocal_3135 = false;
						uLocal_3710[0] = Global_86864.f_9[0];
						uLocal_3710[1] = Global_86864.f_9[1];
						Local_2570.x = Global_86864[0];
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_3710[0], 1, 1);
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_3710[1], 1, 1);
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_2570.x, 1, 1);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_3710[0], "michael", 0, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_3710[1], "franklin", 1, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_2570.x, "fbi_5_michaels_boat", 0, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "dave_fbi", 2, Local_85.f_1, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "steve_fbi", 2, Local_110.f_1, 0);
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("trevor", PLAYER::PLAYER_PED_ID(), 0);
						func_904(0, "michael", 2);
						func_904(1, "franklin", 2);
						GlobalFunc_8380(1, 1, 1, 0);
						CUTSCENE::START_CUTSCENE(2048);
						RECORDING::_0x48621C9FCA3EBD28(4);
						iLocal_84 = 1;
					}
				}
				break;
			}
	}
	if (iLocal_84 == 1)
	{
		switch (iLocal_3260)
		{
			case 0:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					GlobalFunc_562(39);
					MISC::CLEAR_AREA(3801.2f, 4468.4f, 5.8f, 1000f, 1, 0, 0, 0);
					GlobalFunc_9805(3826.161f, 4438.815f, -1.834f, 3826.161f, 4490.416f, 13.166f, 84.3f, 3767.161f, 4472.034f, 6.4168f, 283.2421f, 15f, 15f, 15f, 0, 1, 1, 0, 0);
					func_890(3767.161f, 4472.034f, 6.4168f, 283.2421f);
					func_889();
					iLocal_3260++;
				}
				break;
			
			case 1:
				if (CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					if (!Global_86824)
					{
						if (!CUTSCENE::WAS_CUTSCENE_SKIPPED())
						{
							func_889();
							func_885();
						}
						else
						{
							CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 1, 0);
							iLocal_84 = 2;
						}
					}
					else if (!CUTSCENE::WAS_CUTSCENE_SKIPPED())
					{
						func_889();
						func_885();
						func_866();
					}
					else
					{
						CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 1, 0);
						iLocal_84 = 2;
					}
				}
				else
				{
					func_865();
					RECORDING::_0x293220DA1B46CEBC(0f, 10f, 4);
					RECORDING::_0x81CBAE94390F9F89();
					iLocal_84 = 0;
					iLocal_82 = 1;
				}
				break;
			}
	}
	if (iLocal_84 == 3)
	{
		RECORDING::_0x13B350B8AD0EEE10();
		if (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::STOP_CUTSCENE(0);
		}
	}
	if (iLocal_84 == 2)
	{
		if (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			func_889();
			func_885();
		}
		else if (func_864())
		{
			func_865();
			if (Global_86824)
			{
				if (iLocal_3338 < 2)
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOD_SHIFT_SCENE"))
					{
						AUDIO::STOP_SOUND(Local_3698.f_10);
						AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
						AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
					}
					GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.6f);
					GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(0);
					GRAPHICS::_0x0AE73D8DF3A762B2(0);
					AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
					if (Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4249 != -15)
					{
						Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4249 = GlobalFunc_7719();
					}
					CLOCK::SET_CLOCK_TIME(21, 0, 0);
				}
			}
			CAM::DO_SCREEN_FADE_IN(800);
			RECORDING::_0x81CBAE94390F9F89();
			RECORDING::_0x293220DA1B46CEBC(0f, 10f, 4);
			iLocal_84 = 0;
			iLocal_82 = 1;
		}
	}
}

int func_864()//Position - 0x86C1D
{
	if ((((((((STREAMING::HAS_MODEL_LOADED(Local_2570.f_1) && STREAMING::HAS_MODEL_LOADED(Local_85.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_110.f_1)) && STREAMING::HAS_MODEL_LOADED(iLocal_3624)) && PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID())) && STREAMING::HAS_ANIM_DICT_LOADED("missfbi5leadinoutfbi_5a_mcs_leadout")) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\FBI_05_Chemical_Factory_01", 0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\FBI_05A_GRILL_CUTTING", 0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\Underwater", 0))
	{
		return 1;
	}
	return 0;
}

void func_865()//Position - 0x86CA4
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2570.f_1);
	iLocal_3241 = MISC::GET_GAME_TIMER();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3520))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3520);
	}
	if (!bLocal_3135)
	{
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) != 4)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneMichael", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", 1);
		}
	}
}

int func_866()//Position - 0x86CF8
{
	float fVar0;
	
	switch (iLocal_3338)
	{
		case 0:
			if (CUTSCENE::_0x583DF8E3D4AFBD98() + 1 >= 7)
			{
				iLocal_3339 = MISC::GET_GAME_TIMER();
				iLocal_3340 = iLocal_3339 + 4000;
				iLocal_3338++;
			}
			break;
		
		case 1:
			fVar0 = ((SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) - SYSTEM::TO_FLOAT(iLocal_3339)) / (SYSTEM::TO_FLOAT(iLocal_3340) - SYSTEM::TO_FLOAT(iLocal_3339)));
			if (fVar0 > 1f)
			{
				fVar0 = 1f;
			}
			if (GlobalFunc_9141(21, 0, "", "", &Local_3698, fVar0, 0, 1, 1065353216))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOD_SHIFT_SCENE"))
				{
					AUDIO::STOP_SOUND(Local_3698.f_10);
					AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
					AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
				}
				GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.6f);
				GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(0);
				GRAPHICS::_0x0AE73D8DF3A762B2(0);
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
				if (Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4249 != -15)
				{
					Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4249 = GlobalFunc_7719();
				}
				iLocal_3338++;
				return 1;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}



















void func_885()//Position - 0x8788C
{
	if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("dave_fbi", Local_85.f_1)))
	{
		Local_85 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("dave_fbi", Local_85.f_1));
	}
	if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("steve_fbi", Local_110.f_1)))
	{
		Local_110 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("steve_fbi", Local_110.f_1));
	}
	switch (GlobalFunc_8315())
	{
		case 0:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("michael", GlobalFunc_4917(0)))
			{
				func_888();
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("dave_fbi", Local_85.f_1))
			{
				func_887();
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("steve_fbi", Local_110.f_1))
			{
				func_886();
			}
			break;
		
		case 1:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("michael", GlobalFunc_4917(0)))
			{
				GlobalFunc_9134(&uLocal_3710, 0);
				GlobalFunc_10991(&uLocal_3710, 0, 0, 0);
				func_888();
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("dave_fbi", Local_85.f_1))
			{
				func_887();
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("steve_fbi", Local_110.f_1))
			{
				func_886();
			}
			break;
		
		case 2:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("michael", GlobalFunc_4917(0)))
			{
				GlobalFunc_9134(&uLocal_3710, 0);
				GlobalFunc_10991(&uLocal_3710, 0, 0, 0);
				func_888();
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("dave_fbi", Local_85.f_1))
			{
				func_887();
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("steve_fbi", Local_110.f_1))
			{
				func_886();
			}
			break;
	}
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("fbi_5_michaels_boat", Local_2570.f_1))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_2570.x);
	}
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
	{
		iLocal_3603 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 3848.034f, 4455.514f, 1.249479f, 5.454695f, 0.002196f, -91.2916f, 50.01903f, 0, 2);
		iLocal_3604 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 3847.411f, 4455.533f, 1.201062f, 5.525096f, 0.002196f, -90.66479f, 50.01903f, 0, 2);
		CAM::SET_CAM_ACTIVE(iLocal_3603, 1);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_3604, iLocal_3603, 3000, 3, 1);
		CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
		CAM::_0x661B5C8654ADD825(iLocal_3604, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_2570.x);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_2570.x);
	}
}

void func_886()//Position - 0x87AA2
{
	func_859();
	func_646(&Local_110);
	func_645(&Local_110, 1);
	PED::SET_PED_CONFIG_FLAG(Local_110, 116, 0);
	PED::SET_PED_CAN_RAGDOLL(Local_110, 1);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_110, 49);
	PED::SET_PED_MAX_TIME_UNDERWATER(Local_110, 1E+07f);
	PED::SET_PED_DIES_IN_WATER(Local_110, 0);
	PED::SET_ENABLE_SCUBA(Local_110, 1);
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_110, joaat("weapon_carbinerifle"), joaat("component_at_ar_supp"));
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_110, joaat("weapon_carbinerifle"), joaat("component_at_ar_flsh"));
	WEAPON::GIVE_WEAPON_TO_PED(Local_110, joaat("weapon_stungun"), -1, 0, 1);
	GlobalFunc_173(&uLocal_3788, 4, Local_110, "steve", 0, 1);
}

void func_887()//Position - 0x87B2B
{
	func_860();
	func_646(&Local_85);
	func_645(&Local_85, 1);
	PED::SET_PED_CONFIG_FLAG(Local_85, 116, 0);
	PED::SET_PED_CAN_RAGDOLL(Local_85, 1);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_85, 49);
	PED::SET_PED_MAX_TIME_UNDERWATER(Local_85, 1E+07f);
	PED::SET_PED_DIES_IN_WATER(Local_85, 0);
	PED::SET_ENABLE_SCUBA(Local_85, 1);
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_85, joaat("weapon_carbinerifle"), joaat("component_at_ar_supp"));
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_85, joaat("weapon_carbinerifle"), joaat("component_at_ar_flsh"));
	WEAPON::GIVE_WEAPON_TO_PED(Local_85, joaat("weapon_stungun"), -1, 0, 1);
	GlobalFunc_173(&uLocal_3788, 3, Local_85, "dave", 0, 1);
}

void func_888()//Position - 0x87BB4
{
	AUDIO::SET_VEH_RADIO_STATION(Local_2570.x, "OFF");
	func_861();
	PED::SET_PED_MAX_TIME_UNDERWATER(PLAYER::PLAYER_PED_ID(), 1E+08f);
	PED::SET_PED_DIES_IN_WATER(PLAYER::PLAYER_PED_ID(), 0);
	PED::SET_ENABLE_SCUBA(PLAYER::PLAYER_PED_ID(), 1);
	GlobalFunc_173(&uLocal_3788, 0, PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
}

void func_889()//Position - 0x87BFE
{
	STREAMING::REQUEST_MODEL(Local_2570.f_1);
	STREAMING::REQUEST_MODEL(Local_85.f_1);
	STREAMING::REQUEST_MODEL(Local_110.f_1);
	STREAMING::REQUEST_MODEL(iLocal_3624);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 6, 3, 0);
	STREAMING::REQUEST_ANIM_DICT("missfbi5leadinoutfbi_5a_mcs_leadout");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\FBI_05_Chemical_Factory_01", 0);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\FBI_05A_GRILL_CUTTING", 0);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\Underwater", 0);
}

void func_890(struct<3> Param0, float fParam3)//Position - 0x87C5C
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			GlobalFunc_10013(iVar0, Param0, fParam3, 24, 0);
		}
	}
}














void func_904(int iParam0, char* sParam1, int iParam2)//Position - 0x88900
{
	struct<50> Var0;
	struct<50> Var65;
	int iVar130;
	int iVar131;
	int iVar132;
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
			if (GlobalFunc_4911(iVar147, GlobalFunc_33(iVar131), Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[iVar131 /*4*/][iParam0], &iVar132))
			{
				Var133 = { GlobalFunc_10828(iVar147, 2, Var65.f_59) };
				Var65.f_13[2] = Var133.f_3;
				Var65[2] = Var133.f_4;
				iVar148 = 1;
			}
			if (GlobalFunc_4912(iVar147, GlobalFunc_33(iVar131), Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[iVar131 /*4*/][iParam0], &iVar132))
			{
				Var133 = { GlobalFunc_10828(iVar147, 1, Var65.f_62) };
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
			if (GlobalFunc_4911(iVar147, 14, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_253[iVar131 /*4*/][iParam0], &iVar132))
			{
				Var133 = { GlobalFunc_10828(iVar147, 2, Var65.f_59) };
				Var65.f_13[2] = Var133.f_3;
				Var65[2] = Var133.f_4;
				iVar148 = 1;
			}
			if (GlobalFunc_4912(iVar147, 14, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_253[iVar131 /*4*/][iParam0], &iVar132))
			{
				Var133 = { GlobalFunc_10828(iVar147, 1, Var65.f_62) };
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
			Var133 = { GlobalFunc_10828(iVar147, 0, iVar152) };
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
	func_905(sParam1, iParam0);
}

int func_905(char* sParam0, int iParam1)//Position - 0x88C64
{
	var uVar0;
	struct<14> Var16;
	int iVar30;
	int iVar31;
	var uVar32;
	struct<14> Var48;
	int iVar62;
	int iVar63;
	var uVar64;
	var uVar80;
	struct<14> Var96;
	struct<14> Var110;
	int iVar124;
	int iVar125;
	
	if (GlobalFunc_5101(iParam1))
	{
		uVar0 = 15;
		uVar0 = { GlobalFunc_7617(GlobalFunc_4917(iParam1), 0) };
		iVar30 = 0;
		while (iVar30 < 15)
		{
			if (uVar0[iVar30] != -99)
			{
				Var16 = { GlobalFunc_10828(GlobalFunc_4917(iParam1), iVar30, uVar0[iVar30]) };
				if (iVar30 == 14)
				{
					iVar31 = 0;
					while (iVar31 < 9)
					{
						CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(uParam0, iVar31, -1, 0, GlobalFunc_4917(iParam1));
						iVar31++;
					}
				}
				else if (iVar30 != 12 && iVar30 != 13)
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam0, GlobalFunc_33(iVar30), Var16.f_3, Var16.f_4, GlobalFunc_4917(iParam1));
				}
			}
			iVar30++;
		}
		GlobalFunc_5100(iParam1, 0);
		return 1;
	}
	switch (iParam1)
	{
		case 0:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[120] && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122])
			{
				uVar32 = 15;
				uVar32 = { GlobalFunc_7617(GlobalFunc_4917(iParam1), 0) };
				iVar62 = 0;
				while (iVar62 < 15)
				{
					if (uVar32[iVar62] != -99)
					{
						Var48 = { GlobalFunc_10828(GlobalFunc_4917(iParam1), iVar62, uVar32[iVar62]) };
						if (iVar62 == 14)
						{
							iVar63 = 0;
							while (iVar63 < 9)
							{
								CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar63, -1, 0, GlobalFunc_4917(iParam1));
								iVar63++;
							}
						}
						else if (iVar62 != 12 && iVar62 != 13)
						{
							CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam0, GlobalFunc_33(iVar62), Var48.f_3, Var48.f_4, GlobalFunc_4917(iParam1));
						}
					}
					iVar62++;
				}
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[121] = 1;
			}
			break;
		
		case 2:
			uVar64 = 15;
			uVar80 = 15;
			Var96 = { GlobalFunc_10828(GlobalFunc_4917(iParam1), 3, 71) };
			if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iParam1 /*65*/].f_13[3] == Var96.f_3)
			{
			}
			else
			{
				uVar64 = { GlobalFunc_7617(GlobalFunc_4917(iParam1), 10) };
				uVar80 = { GlobalFunc_7617(GlobalFunc_4917(iParam1), 0) };
				iVar124 = 0;
				while (iVar124 < 15)
				{
					if (uVar64[iVar124] != -99)
					{
						if (iVar124 == 14)
						{
							iVar125 = 0;
							while (iVar125 < 9)
							{
								CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar125, -1, 0, GlobalFunc_4917(iParam1));
								iVar125++;
							}
						}
						else if (iVar124 != 12 && iVar124 != 13)
						{
							if (iVar124 == 3 || iVar124 == 4)
							{
								Var96 = { GlobalFunc_10828(GlobalFunc_4917(iParam1), iVar124, uVar64[iVar124]) };
								if (Var96.f_3 == Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iParam1 /*65*/].f_13[iVar124] && Var96.f_4 == Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iParam1 /*65*/][iVar124])
								{
									Var110 = { GlobalFunc_10828(GlobalFunc_4917(iParam1), iVar124, uVar80[iVar124]) };
									Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iParam1 /*65*/].f_13[iVar124] = Var110.f_3;
									Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iParam1 /*65*/][iVar124] = Var110.f_4;
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam0, GlobalFunc_33(iVar124), Var110.f_3, Var110.f_4, GlobalFunc_4917(iParam1));
									if (iVar124 == 4)
									{
										Var110 = { GlobalFunc_10828(GlobalFunc_4917(iParam1), 6, uVar80[6]) };
										Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iParam1 /*65*/].f_13[6] = Var110.f_3;
										Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iParam1 /*65*/][6] = Var110.f_4;
										CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam0, GlobalFunc_33(6), Var110.f_3, Var110.f_4, GlobalFunc_4917(iParam1));
									}
								}
							}
						}
					}
					iVar124++;
				}
			}
			break;
	}
	return 0;
}

void func_906()//Position - 0x88FFC
{
	struct<3> Var0;
	float fVar3;
	
	if (iLocal_82 < 9)
	{
		Var0 = { CAM::GET_GAMEPLAY_CAM_COORD() };
		if ((PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()) || ((((Var0.f_1 < 3726f && Var0.f_1 > 3709f) && Var0.x > 3509f) && Var0.x < 3541f) && Var0.f_2 < 17.5f)) && !iLocal_3130)
		{
			GlobalFunc_163();
			if (bLocal_3101)
			{
				AUDIO::SET_VARIABLE_ON_UNDER_WATER_STREAM("inTunnel", 1f);
			}
			else
			{
				AUDIO::SET_VARIABLE_ON_UNDER_WATER_STREAM("inTunnel", 0f);
			}
			if (AUDIO::HAS_SOUND_FINISHED(iLocal_3196))
			{
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_3196, "UW_Ambience", 0, 1);
			}
			fVar3 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
			if (fVar3 > 1f)
			{
				if (AUDIO::HAS_SOUND_FINISHED(iLocal_3202))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_3202, "Foot_Swish", PLAYER::PLAYER_PED_ID(), "FBI_05_SOUNDS", 0, 0);
					AUDIO::SET_VARIABLE_ON_SOUND(iLocal_3202, "SwimSpeed", ((fVar3 - 1f) / 4f));
				}
				else
				{
					AUDIO::SET_VARIABLE_ON_SOUND(iLocal_3202, "SwimSpeed", ((fVar3 - 1f) / 4f));
				}
			}
			else if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3202))
			{
				AUDIO::STOP_SOUND(iLocal_3202);
			}
		}
		else
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3196))
			{
				AUDIO::STOP_SOUND(iLocal_3196);
			}
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3197))
			{
				AUDIO::STOP_SOUND(iLocal_3197);
			}
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3202))
			{
				AUDIO::STOP_SOUND(iLocal_3202);
			}
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3198))
			{
				AUDIO::STOP_SOUND(iLocal_3198);
			}
		}
	}
	if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
	{
	}
}


void func_908()//Position - 0x8917C
{
	GlobalFunc_504(PLAYER::PLAYER_PED_ID(), 329);
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_504(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 334);
		GlobalFunc_503(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -1);
	}
	else
	{
		GlobalFunc_504(0, 334);
		GlobalFunc_503(0, -1);
	}
}




void func_912()//Position - 0x8924E
{
	func_19(1);
	iLocal_3242 = MISC::GET_GAME_TIMER();
	iLocal_3097 = 1;
	AUDIO::TRIGGER_MUSIC_EVENT("FBI5A_MISSION_FAIL");
	GlobalFunc_10835(sLocal_3519);
}










int func_922()//Position - 0x8A09F
{
	struct<3> Var0;
	
	switch (iLocal_82)
	{
		case 0:
			if (GlobalFunc_694(&Local_85))
			{
			}
			if (GlobalFunc_694(&Local_110))
			{
			}
			if (GlobalFunc_693(&Local_2570))
			{
			}
			break;
		
		case 1:
		case 2:
			if (GlobalFunc_694(&Local_85))
			{
				sLocal_3519 = "FAIL_CREW5";
				iLocal_82 = 29;
				return 1;
			}
			if (GlobalFunc_694(&Local_110))
			{
				sLocal_3519 = "FAIL_CREW6";
				iLocal_82 = 29;
				return 1;
			}
			if (GlobalFunc_693(&Local_2570))
			{
				sLocal_3519 = "FAIL_BOAT";
				iLocal_82 = 29;
				return 1;
			}
			if (GlobalFunc_692(&Local_2570) || func_923(Local_2570.x, &iLocal_3241))
			{
				sLocal_3519 = "STUCK_BOAT";
				iLocal_82 = 29;
				return 1;
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_3373, 1) > 1200f)
			{
				sLocal_3519 = "fbi5a_FAIL_14";
				iLocal_82 = 29;
				return 1;
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_85, 1), 1) > 200f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_110, 1), 1) > 200f)
			{
				sLocal_3519 = "FAIL_CREW3";
				iLocal_82 = 29;
				return 1;
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_85, 1), 1) > 200f)
			{
				sLocal_3519 = "fbi5a_FAIL_18";
				iLocal_82 = 29;
				return 1;
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_110, 1), 1) > 200f)
			{
				sLocal_3519 = "fbi5a_FAIL_19";
				iLocal_82 = 29;
				return 1;
			}
			if (!ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
			{
				if (!GlobalFunc_660(PLAYER::PLAYER_PED_ID(), Local_3379, "v_lab"))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_85, 1), 1) > 100f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_110, 1), 1) > 100f)
					{
						sLocal_3519 = "FAIL_CREW3";
						iLocal_82 = 29;
						return 1;
					}
				}
			}
			break;
		
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			if (GlobalFunc_694(&Local_85))
			{
				sLocal_3519 = "FAIL_CREW5";
				iLocal_82 = 29;
				return 1;
			}
			if (GlobalFunc_694(&Local_110))
			{
				sLocal_3519 = "FAIL_CREW6";
				iLocal_82 = 29;
				return 1;
			}
			if (iLocal_82 != 8)
			{
				if (iLocal_82 == 3)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_85, 1), 1) > 250f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_110, 1), 1) > 250f)
					{
						sLocal_3519 = "FAIL_CREW3";
						iLocal_82 = 29;
						return 1;
					}
				}
				else if (iLocal_82 == 7)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_85, 1), 1) > 130f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_110, 1), 1) > 130f)
					{
						sLocal_3519 = "FAIL_CREW3";
						iLocal_82 = 29;
						return 1;
					}
				}
				else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_85, 1), 1) > 150f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_110, 1), 1) > 150f)
				{
					sLocal_3519 = "FAIL_CREW3";
					iLocal_82 = 29;
					return 1;
				}
				if (!ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
				{
					if (!GlobalFunc_660(PLAYER::PLAYER_PED_ID(), Local_3379, "v_lab"))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_85, 1), 1) > 100f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_110, 1), 1) > 100f)
						{
							sLocal_3519 = "FAIL_CREW3";
							iLocal_82 = 29;
							return 1;
						}
					}
				}
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					sLocal_3519 = "FAIL_CREW9";
					iLocal_82 = 29;
					return 1;
				}
			}
			if (iLocal_3099)
			{
				sLocal_3519 = "FAIL_CREW4";
				iLocal_82 = 28;
				return 1;
			}
			break;
		
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
			func_785(&Local_85);
			func_785(&Local_110);
			if (GlobalFunc_694(&Local_85))
			{
				sLocal_3519 = "FAIL_CREW5";
				iLocal_82 = 30;
				return 1;
			}
			if (GlobalFunc_694(&Local_110))
			{
				sLocal_3519 = "FAIL_CREW6";
				iLocal_82 = 30;
				return 1;
			}
			if (GlobalFunc_693(&Local_2510))
			{
				sLocal_3519 = "FAIL_FORK";
				iLocal_82 = 30;
				return 1;
			}
			if (iLocal_82 == 11)
			{
				if (iLocal_3105)
				{
					AUDIO::START_ALARM("FIB_05_BIOTECH_LAB_ALARMS", 0);
					sLocal_3519 = "FAIL_CREW9";
					iLocal_82 = 30;
					return 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_85))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_85, 1), 1) > 200f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_110, 1), 1) > 200f)
				{
					sLocal_3519 = "FAIL_CREW3";
					iLocal_82 = 30;
					return 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_1982))
			{
				if (ENTITY::GET_ENTITY_HEALTH(Local_1982) < 700)
				{
					sLocal_3519 = "fbi5a_FAIL_21";
					iLocal_82 = 30;
					return 1;
				}
			}
			break;
		
		case 14:
		case 15:
		case 16:
			if (GlobalFunc_694(&Local_85))
			{
				sLocal_3519 = "FAIL_CREW5";
				iLocal_82 = 30;
				return 1;
			}
			if (GlobalFunc_694(&Local_110))
			{
				sLocal_3519 = "FAIL_CREW6";
				iLocal_82 = 30;
				return 1;
			}
			if (GlobalFunc_693(&Local_2510))
			{
				sLocal_3519 = "FAIL_FORK";
				iLocal_82 = 30;
				return 1;
			}
			if (GlobalFunc_692(&Local_2510))
			{
				sLocal_3519 = "FAIL_FORK2";
				iLocal_82 = 30;
				return 1;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_1982))
			{
				if (ENTITY::GET_ENTITY_HEALTH(Local_1982) < 700)
				{
					sLocal_3519 = "fbi5a_FAIL_21";
					iLocal_82 = 30;
					return 1;
				}
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_85, 1), 1) > 200f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_110, 1), 1) > 200f)
			{
				sLocal_3519 = "FAIL_CREW3";
				iLocal_82 = 30;
				return 1;
			}
			break;
		
		case 17:
		case 25:
		case 26:
		case 27:
		case 19:
		case 20:
			if (GlobalFunc_694(&Local_85))
			{
				sLocal_3519 = "FAIL_CREW5";
				iLocal_82 = 30;
				return 1;
			}
			if (GlobalFunc_694(&Local_110))
			{
				sLocal_3519 = "FAIL_CREW6";
				iLocal_82 = 30;
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_3710[0])))
			{
				sLocal_3519 = "FAIL_CREW7";
				iLocal_82 = 30;
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_3710[2])))
			{
				sLocal_3519 = "FAIL_CREW8";
				iLocal_82 = 30;
				return 1;
			}
			if (GlobalFunc_693(&Local_2510))
			{
				sLocal_3519 = "FAIL_FORK";
				iLocal_82 = 30;
				return 1;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_1982))
			{
				if (ENTITY::GET_ENTITY_HEALTH(Local_1982) < 700)
				{
					sLocal_3519 = "fbi5a_FAIL_21";
					iLocal_82 = 30;
					return 1;
				}
			}
			if (GlobalFunc_693(&Local_2585))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_2585.x))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_2585.x, 0);
				}
				sLocal_3519 = "FAIL_CHOPPER";
				iLocal_82 = 30;
				return 1;
			}
			if (iLocal_82 != 20 && !CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (GlobalFunc_8315() == 2)
				{
					if (GlobalFunc_692(&Local_2585))
					{
						sLocal_3519 = "FAIL_CHOPPER2";
						iLocal_82 = 30;
						return 1;
					}
					if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2585.x))
					{
						if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(Local_2585.x) > 15f)
						{
							sLocal_3519 = "FAIL_CHOPPER3";
							iLocal_82 = 31;
							return 1;
						}
					}
				}
			}
			break;
		
		case 21:
			if (GlobalFunc_694(&Local_85))
			{
				sLocal_3519 = "FAIL_CREW5";
				iLocal_82 = 30;
				return 1;
			}
			if (GlobalFunc_694(&Local_110))
			{
				sLocal_3519 = "FAIL_CREW6";
				iLocal_82 = 30;
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_3710[0])))
			{
				sLocal_3519 = "FAIL_CREW7";
				iLocal_82 = 30;
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_3710[2])))
			{
				sLocal_3519 = "FAIL_CREW8";
				iLocal_82 = 30;
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_3710[1])))
			{
				sLocal_3519 = "fbi5a_FAIL_17";
				iLocal_82 = 30;
				return 1;
			}
			if (GlobalFunc_693(&Local_2585))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_2585.x))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_2585.x, 0);
				}
				sLocal_3519 = "FAIL_CHOPPER";
				iLocal_82 = 30;
				return 1;
			}
			if (GlobalFunc_693(&Local_2585) || GlobalFunc_693(&Local_2525))
			{
				sLocal_3519 = "fbi5a_FAIL_16";
				iLocal_82 = 30;
				return 1;
			}
			if (iLocal_3285 == 0)
			{
				if (GlobalFunc_8315() == 2)
				{
					if (GlobalFunc_692(&Local_2585))
					{
						sLocal_3519 = "FAIL_CHOPPER2";
						iLocal_82 = 30;
						return 1;
					}
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2585.x, 0))
					{
						if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(Local_2585.x) > 15f)
						{
							sLocal_3519 = "FAIL_CHOPPER3";
							iLocal_82 = 31;
							return 1;
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_2006))
				{
					if (ENTITY::GET_ENTITY_HEALTH(Local_2006) < 300)
					{
						sLocal_3519 = "fbi5a_FAIL_15";
						iLocal_82 = 30;
						return 1;
					}
				}
			}
			if (iLocal_3285 == 2)
			{
				Var0 = { ENTITY::GET_ENTITY_ROTATION(Local_2525, 2) };
				if (MISC::ABSF(Var0.x) > 72f || MISC::ABSF(Var0.f_1) > 72f)
				{
					sLocal_3519 = "fbi5a_FAIL_15";
					iLocal_82 = 30;
					return 1;
				}
			}
			if (GlobalFunc_693(&Local_2510))
			{
				sLocal_3519 = "fbi5a_FAIL_16";
				iLocal_82 = 30;
				return 1;
			}
			if (GlobalFunc_693(&Local_2525))
			{
				sLocal_3519 = "fbi5a_FAIL_16";
				iLocal_82 = 30;
				return 1;
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1739.6f, 3276.8f, 41.1f, 1) > 3200f)
			{
				sLocal_3519 = "fbi5a_FAIL_14";
				iLocal_82 = 30;
				return 1;
			}
			break;
		
		case 22:
			if (GlobalFunc_694(&Local_85))
			{
				sLocal_3519 = "FAIL_CREW5";
				iLocal_82 = 30;
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_3710[0])))
			{
				sLocal_3519 = "FAIL_CREW7";
				iLocal_82 = 30;
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_3710[1])))
			{
				sLocal_3519 = "fbi5a_FAIL_17";
				iLocal_82 = 30;
				return 1;
			}
			if (GlobalFunc_693(&Local_2585))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_2585.x))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_2585.x, 0);
				}
				sLocal_3519 = "FAIL_CHOPPER";
				iLocal_82 = 30;
				return 1;
			}
			if (GlobalFunc_693(&Local_2585) || GlobalFunc_693(&Local_2525))
			{
				sLocal_3519 = "fbi5a_FAIL_16";
				iLocal_82 = 30;
				return 1;
			}
			break;
		
		case 23:
			if (GlobalFunc_694(&(uLocal_3710[2])))
			{
				sLocal_3519 = "FAIL_CREW8";
				iLocal_82 = 30;
				return 1;
			}
			if (GlobalFunc_694(&Local_1589))
			{
				sLocal_3519 = "fbi5a_FAIL_11";
				iLocal_82 = 30;
				return 1;
			}
			if (GlobalFunc_693(&Local_2540))
			{
				sLocal_3519 = "fbi5a_FAIL_10";
				iLocal_82 = 30;
				return 1;
			}
			break;
		
		case 24:
			if (GlobalFunc_693(&Local_2540))
			{
				sLocal_3519 = "fbi5a_FAIL_10";
				iLocal_82 = 30;
				return 1;
			}
			if (GlobalFunc_692(&Local_2540))
			{
				sLocal_3519 = "fbi5a_FAIL_13";
				iLocal_82 = 30;
				return 1;
			}
			if (GlobalFunc_694(&Local_1589))
			{
				sLocal_3519 = "fbi5a_FAIL_11";
				iLocal_82 = 30;
				return 1;
			}
			if (iLocal_3287 <= 1)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1589, 1), 1) > 200f)
				{
					sLocal_3519 = "fbi5a_FAIL_12";
					iLocal_82 = 30;
					return 1;
				}
			}
			if (bLocal_3129)
			{
				sLocal_3519 = "fbi5a_FAIL_20";
				iLocal_82 = 30;
				return 1;
			}
			break;
	}
	return 0;
}

int func_923(int iParam0, int iParam1)//Position - 0x8ABDD
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (!ENTITY::IS_ENTITY_IN_WATER(iParam0))
			{
				if (GlobalFunc_588(iParam1, 10000))
				{
					return 1;
				}
			}
			else
			{
				*iParam1 = MISC::GET_GAME_TIMER();
			}
		}
	}
	return 0;
}




void func_927()//Position - 0x8ACC1
{
	int iVar0;
	int iVar1;
	
	GlobalFunc_7934(17, 0);
	GlobalFunc_7621(83, 1, 0, 1, 0);
	GlobalFunc_2427(5, 1);
	GlobalFunc_8523(39, 1);
	GlobalFunc_8523(40, 1);
	GlobalFunc_8523(41, 1);
	GlobalFunc_8523(42, 1);
	GlobalFunc_8523(43, 1);
	GlobalFunc_696();
	GlobalFunc_563(1);
	GlobalFunc_52(0, 1);
	PAD::_SWITCH_TO_INPUT_MAPPING_SCHEME("FBI5A_Cutting_Torch");
	GlobalFunc_1998(1);
	func_957();
	uLocal_3665 = PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID());
	PED::SET_GROUP_SEPARATION_RANGE(uLocal_3665, 50f);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
	STREAMING::SET_PED_POPULATION_BUDGET(1);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
	}
	PED::ADD_SCENARIO_BLOCKING_AREA(3773.4f, 4393.7f, 50f, 3891.2f, 4555.1f, -50f, 0, 1, 1, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(3699.4f, 3885.9f, 100f, 3313.5f, 3602.2f, -100f, 0, 1, 1, 1);
	PATHFIND::SET_PED_PATHS_IN_AREA(3699.4f, 3885.9f, 100f, 3313.5f, 3602.2f, -100f, 0, 0);
	PED::SET_PED_NON_CREATION_AREA(3837.9f, 3651.6f, -18.8f, 3833.5f, 3686.9f, -15f);
	PED::ADD_SCENARIO_BLOCKING_AREA(1589f, 3390f, 39f, 1849f, 3210f, 52f, 0, 1, 1, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(1540f, 1244f, 150f, 1275.8f, 1061f, 0f, 0, 1, 1, 1);
	TASK::SET_SCENARIO_GROUP_ENABLED("ALAMO_PLANES", 0);
	TASK::SET_SCENARIO_GROUP_ENABLED("LOST_BIKERS", 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1773088812, 1f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1773088812, 4, 0, 1);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1332101528, 1f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1332101528, 4, 0, 1);
	HUD::CLEAR_HELP(1);
	HUD::CLEAR_PRINTS();
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	AUDIO::OVERRIDE_UNDERWATER_STREAM("FBI_05_UNDERWATER_MASTER", 1);
	HUD::REQUEST_ADDITIONAL_TEXT("H2PART3", 0);
	HUD::REQUEST_ADDITIONAL_TEXT("fbi5aAU", 6);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
	{
		SYSTEM::WAIT(0);
	}
	iVar0 = 0;
	while (iVar0 <= (Local_3027 - 1))
	{
		Local_3027[iVar0 /*7*/].f_6 = AUDIO::GET_SOUND_ID();
		iVar0++;
	}
	func_956();
	func_955();
	func_954();
	func_953();
	TASK::ADD_COVER_BLOCKING_AREA(3556.929f, 3668.026f, 30.12188f, 3558.235f, 3666.841f, 26.5f, 0, 0, 0, 1);
	TASK::ADD_COVER_BLOCKING_AREA(3566.59f, 3685.24f, 30f, 3569.2f, 3681.5f, 26.5f, 0, 0, 0, 1);
	if (GlobalFunc_199())
	{
		iLocal_3975 = 1;
		if (!Global_84544)
		{
			switch (GlobalFunc_198())
			{
				case 0:
					func_949();
					break;
				
				case 1:
					func_948();
					break;
				
				case 2:
					func_947();
					break;
				
				case 3:
					func_946();
					break;
				
				case 4:
					func_945();
					break;
				
				case 5:
					func_944();
					break;
				
				case 6:
					func_941();
					break;
				
				case 7:
					func_939();
					break;
			}
		}
		else
		{
			iVar1 = GlobalFunc_198() + 1;
			switch (iVar1)
			{
				case 1:
					func_948();
					break;
				
				case 2:
					func_947();
					break;
				
				case 3:
					func_946();
					break;
				
				case 4:
					func_945();
					break;
				
				case 5:
					func_944();
					break;
				
				case 6:
					func_941();
					break;
				
				case 7:
					func_939();
					break;
				
				case 8:
					func_934();
					break;
				}
		}
		iLocal_3975 = 0;
	}
	else
	{
		Global_86821 = 1;
		Global_86822 = 1;
		if (!GlobalFunc_2(0))
		{
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				if (!CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
			GlobalFunc_11046(0, "start of mission", 0, 0, 0, 1);
		}
		else
		{
			func_928();
		}
	}
}

void func_928()//Position - 0x8B095
{
	STREAMING::REQUEST_MODEL(Local_2570.f_1);
	STREAMING::REQUEST_MODEL(iLocal_3624);
	while (!STREAMING::HAS_MODEL_LOADED(Local_2570.f_1) || !STREAMING::HAS_MODEL_LOADED(iLocal_3624))
	{
		SYSTEM::WAIT(0);
	}
	MISC::CLEAR_AREA(3801.2f, 4468.4f, 5.8f, 1000f, 1, 0, 0, 0);
	Local_2570.x = VEHICLE::CREATE_VEHICLE(Local_2570.f_1, Local_3385, 266.1028f, 1, 1);
	VEHICLE::SET_VEHICLE_COLOURS(Local_2570.x, 0, 0);
	VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_2570.x, 5f);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_2570.x);
	AUDIO::SET_VEH_RADIO_STATION(Local_2570.x, "OFF");
	VEHICLE::SET_VEHICLE_EXTRA(Local_2570.x, 3, false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2570.f_1);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	func_931(0, 0);
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 3818.61f, 4463.606f, 2.7104f, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 269.9429f);
	CUTSCENE::REQUEST_CUTSCENE("fbi_5_int", 8);
	while (!CUTSCENE::HAS_CUTSCENE_LOADED())
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", PLAYER::PLAYER_PED_ID(), 0);
		func_904(1, "franklin", 2);
		func_904(2, "trevor", 2);
		SYSTEM::WAIT(0);
	}
	STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
	STREAMING::NEW_LOAD_SCENE_START(3818.61f, 4463.606f, 2.7104f, GlobalFunc_590(0f, 0f, 269.9429f), 100f, 0);
	while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
	{
		SYSTEM::WAIT(0);
	}
	STREAMING::NEW_LOAD_SCENE_STOP();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2570.x, 0))
	{
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_2570.x, "fbi_5_michaels_boat", 0, 0, 0);
	}
	CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "dave_fbi", 2, Local_85.f_1, 0);
	CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "steve_fbi", 2, Local_110.f_1, 0);
	GlobalFunc_8380(1, 1, 1, 0);
	CUTSCENE::START_CUTSCENE(0);
	while (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		SYSTEM::WAIT(0);
	}
	GlobalFunc_562(39);
	MISC::CLEAR_AREA(3801.2f, 4468.4f, 5.8f, 1000f, 1, 0, 0, 0);
	func_929(&iLocal_3520, 3801.2f, 4468.4f, 5.8f, 50f, 50f, 50f, 3767.161f, 4472.034f, 6.4168f, 283.2421f);
	func_889();
	iLocal_3260 = 1;
	iLocal_84 = 1;
	iLocal_82 = 0;
	CAM::DO_SCREEN_FADE_IN(800);
}

void func_929(int iParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, float fParam10)//Position - 0x8B2BE
{
	*iParam0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (!VEHICLE::IS_BIG_VEHICLE(*iParam0))
			{
				if (!ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("taxi"))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(*iParam0, Param1, Param4, 0, 1, 0))
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, 1, 0);
						}
						if (!GlobalFunc_4929(*iParam0, GlobalFunc_8315(), 0))
						{
							MISC::CLEAR_AREA(Param7, 10f, 1, 0, 0, 0);
							ENTITY::SET_ENTITY_COORDS(*iParam0, Param7, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(*iParam0, fParam10);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
						}
					}
				}
			}
		}
	}
}


int func_931(int iParam0, bool bParam1)//Position - 0x8B395
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
		func_740(&(Global_17052[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2));
		func_687(&(Global_17052[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_17052.f_7 = iParam0;
	Global_17052.f_39 = 1;
	GlobalFunc_10991(&Global_17052, 0, 0, 0);
	GlobalFunc_5124(iParam0);
	return 1;
}



void func_934()//Position - 0x8B54D
{
	if (iLocal_3975)
	{
		GlobalFunc_5116(1362.918f, 1156.911f, 112.759f, 0f, 0, 0);
	}
	STREAMING::REQUEST_MODEL(iLocal_3623);
	STREAMING::REQUEST_MODEL(Local_2540.f_1);
	STREAMING::REQUEST_MODEL(Local_1589.f_1);
	if (iLocal_3975)
	{
		GlobalFunc_5108(0, -1, 1);
	}
	if ((STREAMING::HAS_MODEL_LOADED(iLocal_3623) && STREAMING::HAS_MODEL_LOADED(Local_2540.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_1589.f_1))
	{
		MISC::CLEAR_AREA(1362.918f, 1156.911f, 112.759f, 1000f, 1, 0, 0, 0);
		GlobalFunc_9756(&Local_2540, 2, 1362.918f, 1156.911f, 112.759f, 0f, 0, 0);
		if (VEHICLE::GET_VEHICLE_MOD_KIT(Local_2540) >= 0 && VEHICLE::GET_VEHICLE_MOD_KIT(Local_2540) < 255)
		{
			if (VEHICLE::GET_VEHICLE_MOD(Local_2540, 10) >= 0)
			{
				VEHICLE::REMOVE_VEHICLE_MOD(Local_2540, 10);
			}
		}
		func_931(2, 0);
		PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2540, -1);
		GlobalFunc_173(&uLocal_3788, 2, PLAYER::PLAYER_PED_ID(), "trevor", 0, 1);
		func_647(&Local_1589, 40, Local_2540, 0, 1);
		func_646(&Local_1589);
		func_645(&Local_1589, 1);
		PED::SET_PED_LOD_MULTIPLIER(Local_1589, 2f);
		GlobalFunc_173(&uLocal_3788, 7, Local_1589, "patricia", 0, 1);
		CUTSCENE::REQUEST_CUTSCENE("FBI_5_EXT", 8);
		while (!CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("trevor", PLAYER::PLAYER_PED_ID(), 0);
			if (!PED::IS_PED_INJURED(Local_1589))
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("patricia", Local_1589, 0);
			}
			SYSTEM::WAIT(0);
		}
		func_485(1, 1, 1, 0);
		if (!iLocal_3975)
		{
			STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
		}
		if (!PED::IS_PED_INJURED(Local_1589))
		{
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1589, "patricia", 0, Local_1589.f_1, 0);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2540, 0))
		{
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_2540, "trevors_car", 0, Local_2540.f_1, 0);
		}
		GlobalFunc_2875(&Local_2540);
		CUTSCENE::START_CUTSCENE(0);
		RECORDING::_0x293220DA1B46CEBC(5f, 0f, 4);
		while (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			SYSTEM::WAIT(0);
		}
		iLocal_3287 = 2;
		iLocal_82 = 24;
		iLocal_84 = 1;
		CAM::DO_SCREEN_FADE_IN(800);
	}
}





void func_939()//Position - 0x8B8E8
{
	if (iLocal_3975)
	{
		GlobalFunc_5116(218.0823f, 3269.533f, 40.5141f, 170.5753f, 0, 0);
	}
	STREAMING::REQUEST_MODEL(iLocal_3623);
	STREAMING::REQUEST_MODEL(Local_2540.f_1);
	STREAMING::REQUEST_MODEL(Local_1589.f_1);
	STREAMING::REQUEST_MODEL(Local_1715[0 /*25*/].f_1);
	STREAMING::REQUEST_CLIP_SET("clipset@missfbi5_trevor_driving");
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_2540.f_13, "lkfbi5a");
	AUDIO::PREPARE_MUSIC_EVENT("FBI5A_TREV_RADIO_FRTA");
	if (iLocal_3975)
	{
		GlobalFunc_5108(0, -1, 1);
	}
	while ((((((!STREAMING::HAS_MODEL_LOADED(iLocal_3623) || !STREAMING::HAS_MODEL_LOADED(Local_2540.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1589.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1715[0 /*25*/].f_1)) || !STREAMING::HAS_CLIP_SET_LOADED("clipset@missfbi5_trevor_driving")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_2540.f_13, "lkfbi5a")) || !AUDIO::PREPARE_MUSIC_EVENT("FBI5A_TREV_RADIO_FRTA"))
	{
		SYSTEM::WAIT(0);
	}
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(2);
	MISC::ENABLE_DISPATCH_SERVICE(11, 0);
	MISC::CLEAR_AREA(Local_2540.f_3, 1000f, 1, 0, 0, 0);
	GlobalFunc_9756(&Local_2540, 2, Local_2540.f_3, Local_2540.f_6, 0, 0);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2540, Local_2540.f_13, "lkfbi5a", 1);
	VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_2540, 5000f);
	VEHICLE::SET_PLAYBACK_SPEED(Local_2540, 0f);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2540, 1);
	AUDIO::SET_INITIAL_PLAYER_STATION("RADIO_01_CLASS_ROCK");
	if (VEHICLE::GET_VEHICLE_MOD_KIT(Local_2540) >= 0 && VEHICLE::GET_VEHICLE_MOD_KIT(Local_2540) < 255)
	{
		if (VEHICLE::GET_VEHICLE_MOD(Local_2540, 10) >= 0)
		{
			VEHICLE::REMOVE_VEHICLE_MOD(Local_2540, 10);
		}
	}
	func_931(2, 0);
	PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2540, -1);
	PED::SET_PED_IN_VEHICLE_CONTEXT(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("MISSFBI5_TREVOR_DRIVING"));
	GlobalFunc_173(&uLocal_3788, 2, PLAYER::PLAYER_PED_ID(), "trevor", 0, 1);
	func_647(&Local_1589, 40, Local_2540, 0, 1);
	func_646(&Local_1589);
	func_645(&Local_1589, 1);
	PED::SET_PED_LOD_MULTIPLIER(Local_1589, 2f);
	GlobalFunc_173(&uLocal_3788, 7, Local_1589, "patricia", 0, 1);
	func_540();
	SYSTEM::WAIT(0);
	if (!iLocal_3975)
	{
		STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2540, 0))
	{
		VEHICLE::SET_PLAYBACK_SPEED(Local_2540, 1f);
	}
	while (!GlobalFunc_591(PLAYER::PLAYER_PED_ID()) || !GlobalFunc_591(Local_1589))
	{
		SYSTEM::WAIT(0);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2540, 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2540))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2540);
		}
	}
	AUDIO::TRIGGER_MUSIC_EVENT("FBI5A_TREV_RADIO_FRTA");
	iLocal_84 = 0;
	iLocal_82 = 24;
	GlobalFunc_11046(7, "drive with patricia", 1, 0, 0, 1);
	func_459(1, 0, 0, 1, 800);
}


void func_941()//Position - 0x8BBAD
{
	int iVar0;
	
	GlobalFunc_563(1);
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	PED::SET_CREATE_RANDOM_COPS(0);
	if (iLocal_3975)
	{
		GlobalFunc_5116(3614.464f, 3773.997f, 29.0181f, 143.9524f, 0, 0);
	}
	STREAMING::REQUEST_MODEL(iLocal_3624);
	STREAMING::REQUEST_MODEL(iLocal_3623);
	STREAMING::REQUEST_MODEL(Local_85.f_1);
	STREAMING::REQUEST_MODEL(Local_110.f_1);
	STREAMING::REQUEST_MODEL(Local_1614[0 /*25*/].f_1);
	STREAMING::REQUEST_MODEL(Local_1614[1 /*25*/].f_1);
	STREAMING::REQUEST_MODEL(Local_2464[0 /*15*/].f_1);
	STREAMING::REQUEST_MODEL(Local_2585.f_1);
	STREAMING::REQUEST_MODEL(Local_2006.f_2);
	STREAMING::REQUEST_MODEL(joaat("prop_boxpile_02b"));
	STREAMING::REQUEST_MODEL(Local_2054[0 /*24*/].f_2);
	VEHICLE::REQUEST_VEHICLE_RECORDING(4, "lkfbi5a");
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_2464[0 /*15*/].f_13, "lkfbi5a");
	VEHICLE::REQUEST_VEHICLE_RECORDING(6, "lkfbi5a");
	STREAMING::REQUEST_MODEL(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_carbinerifle")));
	WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_carbinerifle"), 31, 0);
	STREAMING::REQUEST_MODEL(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_stungun")));
	WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_stungun"), 31, 0);
	STREAMING::REQUEST_ANIM_DICT("MISSFBI5IG_0");
	AUDIO::PREPARE_ALARM("FIB_05_BIOTECH_LAB_ALARMS");
	STREAMING::REQUEST_PTFX_ASSET();
	iLocal_3684 = INTERIOR::GET_INTERIOR_AT_COORDS(Local_3379);
	INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_3684);
	if (iLocal_3975)
	{
		GlobalFunc_5108(0, -1, 1);
	}
	while (((((((((((((((((((((!STREAMING::HAS_MODEL_LOADED(iLocal_3624) || !STREAMING::HAS_MODEL_LOADED(iLocal_3623)) || !STREAMING::HAS_MODEL_LOADED(Local_85.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_110.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1614[0 /*25*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1614[1 /*25*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_2464[0 /*15*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_2585.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_2006.f_2)) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_boxpile_02b"))) || !STREAMING::HAS_MODEL_LOADED(Local_2054[0 /*24*/].f_2)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "lkfbi5a")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_2464[0 /*15*/].f_13, "lkfbi5a")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(6, "lkfbi5a")) || !STREAMING::HAS_MODEL_LOADED(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_carbinerifle")))) || !WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_carbinerifle"))) || !STREAMING::HAS_MODEL_LOADED(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_stungun")))) || !WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_stungun"))) || !STREAMING::HAS_ANIM_DICT_LOADED("MISSFBI5IG_0")) || !AUDIO::PREPARE_ALARM("FIB_05_BIOTECH_LAB_ALARMS")) || !STREAMING::HAS_PTFX_ASSET_LOADED()) || !INTERIOR::IS_INTERIOR_READY(iLocal_3684))
	{
		SYSTEM::WAIT(0);
	}
	MISC::CLEAR_AREA(3633.923f, 3766.17f, 40.3f, 10000f, 1, 0, 0, 0);
	func_931(2, 0);
	Local_2585.x = VEHICLE::CREATE_VEHICLE(Local_2585.f_1, 3633.923f, 3766.17f, 40.3f, 163.1875f, 1, 1);
	GlobalFunc_743(Local_2585.x, 0);
	VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_2585.x, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2585.f_1);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_2585.x, 1, 1);
	VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_2585.x);
	AUDIO::SET_VEH_RADIO_STATION(Local_2585.x, "OFF");
	VEHICLE::REMOVE_PICK_UP_ROPE_FOR_CARGOBOB(Local_2585.x);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2585.x, 6, "lkfbi5a", 1);
	VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_2585.x, 3500f);
	VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_2585.x, 1);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2585.x, 1);
	Local_2006 = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_2006.f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2585.x, Local_3364), 1, 1, 0);
	ENTITY::SET_ENTITY_HEADING(Local_2006, (ENTITY::GET_ENTITY_HEADING(Local_2585.x) + 180f));
	OBJECT::_0xEB6F1A9B5510A5D2(Local_2006, 1);
	Local_2344 = OBJECT::CREATE_OBJECT(Local_2344.f_2, Local_2344.f_3, 1, 1, 0);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2344, Local_2006, 0, -1.3f, -1.8f, 0f, 0f, 0f, 0f, 0, 0, 1, 0, 2, 1);
	Local_2368 = OBJECT::CREATE_OBJECT(Local_2368.f_2, Local_2368.f_3, 1, 1, 0);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2368, Local_2006, 0, 1.3f, -1.8f, 0f, 0f, 0f, 0f, 0, 0, 1, 0, 2, 1);
	func_454(&Local_2585, &Local_2006, &iLocal_3666, &uLocal_3093, &uLocal_3094, 0, 0, 0);
	VEHICLE::STABILISE_ENTITY_ATTACHED_TO_HELI(Local_2585.x, Local_2006, fLocal_3363);
	PHYSICS::ROPE_SET_UPDATE_PINVERTS(iLocal_3666[0]);
	PHYSICS::ROPE_SET_UPDATE_PINVERTS(iLocal_3666[1]);
	PHYSICS::ROPE_SET_UPDATE_PINVERTS(iLocal_3666[2]);
	PHYSICS::ROPE_SET_UPDATE_PINVERTS(iLocal_3666[3]);
	AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_3207, "Cable_Strain", Local_2006, "FBI_05_SOUNDS", 0, 0);
	Local_2054[0 /*24*/] = OBJECT::CREATE_OBJECT(Local_2054[0 /*24*/].f_2, Local_3382, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(Local_2054[0 /*24*/], 0f, 0f, 0f, 2, 1);
	iLocal_3567[0] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_fbi5a_flare", Local_2054[0 /*24*/], 0f, 0f, 0.11f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
	GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(iLocal_3567[0], 1f, 0.84f, 0f, 0);
	if (!GlobalFunc_8315() == 2)
	{
		func_931(2, 0);
	}
	GlobalFunc_173(&uLocal_3788, 2, PLAYER::PLAYER_PED_ID(), "trevor", 0, 1);
	PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2585.x, -1);
	func_740(&(uLocal_3710[0]), 0, Local_2585.x, 0, 0, 0, 0);
	GlobalFunc_11267(uLocal_3710[0], 12, 11, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	GlobalFunc_11267(uLocal_3710[0], 14, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	PED::SET_PED_MAX_TIME_UNDERWATER(uLocal_3710[0], -1f);
	GlobalFunc_173(&uLocal_3788, 0, uLocal_3710[0], "michael", 0, 1);
	PED::SET_PED_USING_ACTION_MODE(uLocal_3710[0], 1, -1, 0);
	WEAPON::GIVE_WEAPON_TO_PED(uLocal_3710[0], joaat("weapon_carbinerifle"), 400, 0, 1);
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(uLocal_3710[0], joaat("weapon_carbinerifle"), joaat("component_at_ar_supp"));
	WEAPON::GIVE_WEAPON_TO_PED(uLocal_3710[0], joaat("weapon_grenade"), 2, 0, 1);
	WEAPON::GIVE_WEAPON_TO_PED(uLocal_3710[0], joaat("weapon_stungun"), 50, 1, 1);
	func_645(&(uLocal_3710[0]), 1);
	func_943(&Local_85, &Local_2585, 1);
	GlobalFunc_173(&uLocal_3788, 3, Local_85, "dave", 0, 1);
	PED::SET_PED_MAX_TIME_UNDERWATER(Local_85, 1E+07f);
	PED::SET_PED_DIES_IN_WATER(Local_85, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 3, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 4, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 6, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 8, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 11, 3, 0, 0);
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_85, joaat("weapon_carbinerifle"), joaat("component_at_ar_supp"));
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_85, joaat("weapon_carbinerifle"), joaat("component_at_ar_flsh"));
	WEAPON::GIVE_WEAPON_TO_PED(Local_85, joaat("weapon_stungun"), -1, 0, 1);
	WEAPON::SET_CURRENT_PED_WEAPON(Local_85, Local_85.f_20, 1);
	Local_110.f_3 = { 3622.69f, 3749.85f, 27.69f };
	Local_110.f_12 = 75.5f;
	func_942(&Local_110);
	GlobalFunc_173(&uLocal_3788, 4, Local_110, "steve", 0, 1);
	PED::SET_PED_MAX_TIME_UNDERWATER(Local_110, 1E+07f);
	PED::SET_PED_DIES_IN_WATER(Local_110, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 3, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 4, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 6, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 8, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 11, 0, 0, 0);
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_110, joaat("weapon_carbinerifle"), joaat("component_at_ar_supp"));
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_110, joaat("weapon_carbinerifle"), joaat("component_at_ar_flsh"));
	WEAPON::GIVE_WEAPON_TO_PED(Local_110, joaat("weapon_stungun"), -1, 0, 1);
	TASK::TASK_PLAY_ANIM(Local_110, "MISSFBI5IG_0", "LyingInPain_Loop_Steve", 1000f, -8f, -1, 139265, 0, 0, 0, 0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_110, 0, 0);
	Local_2392 = OBJECT::CREATE_OBJECT(Local_2392.f_2, Local_2392.f_3, 1, 1, 0);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2392, Local_110, PED::GET_PED_BONE_INDEX(Local_110, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
	iLocal_3613[1] = OBJECT::CREATE_OBJECT(joaat("prop_boxpile_02b"), 3623.334f, 3738.386f, 27.6897f, 1, 1, 0);
	ENTITY::SET_ENTITY_HEADING(iLocal_3613[1], 150.2056f);
	Local_2464[0 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_2464[0 /*15*/].f_1, Local_2464[0 /*15*/].f_3, Local_2464[0 /*15*/].f_6, 1, 1);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2464[0 /*15*/], 3);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_2464[0 /*15*/], 0);
	AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_2464[0 /*15*/], 0);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_2464[0 /*15*/], 0, 1);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2464[0 /*15*/], Local_2464[0 /*15*/].f_13, "lkfbi5a", 1);
	VEHICLE::SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(Local_2464[0 /*15*/]);
	iVar0 = 0;
	while (iVar0 <= (Local_1614 - 1))
	{
		func_541(&(Local_1614[iVar0 /*25*/]), 0);
		HUD::REMOVE_BLIP(&(Local_1614[iVar0 /*25*/].f_2));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_1614 - 1))
	{
		func_723(Local_1614[iVar0 /*25*/]);
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1614[iVar0 /*25*/], 200f, 0);
		iVar0++;
	}
	AUDIO::TRIGGER_MUSIC_EVENT("FBI5A_FLY_RESTART");
	AUDIO::START_ALARM("FIB_05_BIOTECH_LAB_ALARMS", 1);
	if (!iLocal_3975)
	{
		STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
	}
	func_459(1, 0, 0, 1, 800);
	INTERIOR::UNPIN_INTERIOR(iLocal_3684);
	GlobalFunc_11046(6, "fly to airport", 0, 0, 0, 1);
	iLocal_84 = 0;
	iLocal_82 = 21;
}

void func_942(var uParam0)//Position - 0x8C4D9
{
	MISC::CLEAR_AREA(uParam0->f_3, 4f, 1, 0, 0, 0);
	*uParam0 = PED::CREATE_PED(26, uParam0->f_1, uParam0->f_3, uParam0->f_12, 1, 1);
	ENTITY::SET_ENTITY_HEALTH(*uParam0, uParam0->f_13);
	PED::SET_PED_DIES_WHEN_INJURED(*uParam0, 0);
	PED::SET_PED_CAN_BE_TARGETTED(*uParam0, 0);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(*uParam0, 0);
	PED::SET_PED_CAN_EVASIVE_DIVE(*uParam0, 0);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam0, 0, 0);
	PED::SET_PED_CAN_RAGDOLL(*uParam0, 0);
	PED::SET_PED_KEEP_TASK(*uParam0, 1);
	PED::SET_PED_MONEY(*uParam0, 0);
	AUDIO::STOP_PED_SPEAKING(*uParam0, 1);
	PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 132, 1);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 118, 0);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 208, 1);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 32, 0);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 188, 1);
	PED::SET_PED_ENABLE_WEAPON_BLOCKING(*uParam0, 1);
	WEAPON::GIVE_WEAPON_TO_PED(*uParam0, uParam0->f_20, -1, 0, 1);
	PED::SET_PED_SEEING_RANGE(*uParam0, 250f);
	PED::SET_PED_HEARING_RANGE(*uParam0, 250f);
	PED::SET_PED_ID_RANGE(*uParam0, 250f);
	func_645(uParam0, 1);
	PED::SET_PED_NAME_DEBUG(*uParam0, &(uParam0->f_21));
}

void func_943(var uParam0, int iParam1, int iParam2)//Position - 0x8C5E4
{
	MISC::CLEAR_AREA(uParam0->f_3, 4f, 1, 0, 0, 0);
	*uParam0 = PED::CREATE_PED_INSIDE_VEHICLE(*iParam1, 26, uParam0->f_1, iParam2, 1, 1);
	ENTITY::SET_ENTITY_HEALTH(*uParam0, uParam0->f_13);
	PED::SET_PED_DIES_WHEN_INJURED(*uParam0, 0);
	PED::SET_PED_CAN_BE_TARGETTED(*uParam0, 0);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(*uParam0, 0);
	PED::SET_PED_CAN_EVASIVE_DIVE(*uParam0, 0);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam0, 0, 0);
	PED::SET_PED_CAN_RAGDOLL(*uParam0, 0);
	PED::SET_PED_KEEP_TASK(*uParam0, 1);
	PED::SET_PED_MONEY(*uParam0, 0);
	AUDIO::STOP_PED_SPEAKING(*uParam0, 1);
	PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 132, 1);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 118, 0);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 208, 1);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 188, 1);
	WEAPON::GIVE_WEAPON_TO_PED(*uParam0, uParam0->f_20, -1, 0, 0);
	PED::SET_PED_ENABLE_WEAPON_BLOCKING(*uParam0, 1);
	PED::SET_PED_SEEING_RANGE(*uParam0, 250f);
	PED::SET_PED_HEARING_RANGE(*uParam0, 250f);
	PED::SET_PED_ID_RANGE(*uParam0, 250f);
	func_645(uParam0, 1);
	PED::SET_PED_NAME_DEBUG(*uParam0, &(uParam0->f_21));
}

void func_944()//Position - 0x8C6E0
{
	struct<3> Var0;
	float fVar3;
	
	GlobalFunc_563(1);
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	PED::SET_CREATE_RANDOM_COPS(0);
	if (iLocal_3975)
	{
		GlobalFunc_5116(3166.78f, 3497.231f, 71.4959f, 300.0811f, 0, 0);
	}
	STREAMING::REQUEST_MODEL(iLocal_3624);
	STREAMING::REQUEST_MODEL(iLocal_3623);
	STREAMING::REQUEST_MODEL(Local_85.f_1);
	STREAMING::REQUEST_MODEL(Local_110.f_1);
	STREAMING::REQUEST_MODEL(Local_2464[0 /*15*/].f_1);
	STREAMING::REQUEST_MODEL(Local_2585.f_1);
	STREAMING::REQUEST_MODEL(Local_2030.f_2);
	STREAMING::REQUEST_MODEL(Local_1982.f_2);
	STREAMING::REQUEST_MODEL(Local_2440.f_2);
	STREAMING::REQUEST_MODEL(Local_2006.f_2);
	STREAMING::REQUEST_MODEL(joaat("prop_boxpile_02b"));
	STREAMING::REQUEST_MODEL(Local_2054[0 /*24*/].f_2);
	VEHICLE::REQUEST_VEHICLE_RECORDING(4, "lkfbi5a");
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_2464[0 /*15*/].f_13, "lkfbi5a");
	STREAMING::REQUEST_MODEL(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_carbinerifle")));
	WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_carbinerifle"), 31, 0);
	STREAMING::REQUEST_MODEL(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_stungun")));
	WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_stungun"), 31, 0);
	STREAMING::REQUEST_ANIM_DICT("missfbi5ig_33");
	AUDIO::PREPARE_ALARM("FIB_05_BIOTECH_LAB_ALARMS");
	STREAMING::REQUEST_PTFX_ASSET();
	iLocal_3684 = INTERIOR::GET_INTERIOR_AT_COORDS(Local_3379);
	INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_3684);
	if (iLocal_3975)
	{
		GlobalFunc_5108(0, -1, 1);
	}
	while (((((((((((((((((((((!STREAMING::HAS_MODEL_LOADED(iLocal_3624) || !STREAMING::HAS_MODEL_LOADED(iLocal_3623)) || !STREAMING::HAS_MODEL_LOADED(Local_85.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_110.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_2464[0 /*15*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_2585.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_2030.f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_1982.f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_2440.f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_2006.f_2)) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_boxpile_02b"))) || !STREAMING::HAS_MODEL_LOADED(Local_2054[0 /*24*/].f_2)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "lkfbi5a")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_2464[0 /*15*/].f_13, "lkfbi5a")) || !STREAMING::HAS_MODEL_LOADED(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_carbinerifle")))) || !WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_carbinerifle"))) || !STREAMING::HAS_MODEL_LOADED(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_stungun")))) || !WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_stungun"))) || !STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_33")) || !AUDIO::PREPARE_ALARM("FIB_05_BIOTECH_LAB_ALARMS")) || !STREAMING::HAS_PTFX_ASSET_LOADED()) || !INTERIOR::IS_INTERIOR_READY(iLocal_3684))
	{
		SYSTEM::WAIT(0);
	}
	MISC::CLEAR_AREA(3613.408f, 3739.449f, 27.6921f, 10000f, 1, 0, 0, 0);
	Var0 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(4, (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(4, "lkfbi5a") - 1000f), "lkfbi5a") };
	fVar3 = 301.8604f;
	Local_2585.x = VEHICLE::CREATE_VEHICLE(Local_2585.f_1, Var0, fVar3, 1, 1);
	GlobalFunc_743(Local_2585.x, 0);
	VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_2585.x, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2585.f_1);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_2585.x, 1, 1);
	VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_2585.x);
	AUDIO::SET_VEH_RADIO_STATION(Local_2585.x, "OFF");
	VEHICLE::REMOVE_PICK_UP_ROPE_FOR_CARGOBOB(Local_2585.x);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2585.x, 4, "lkfbi5a", 1);
	VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_2585.x, (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(4, "lkfbi5a") - 1000f));
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2585.x, 1);
	Local_2006 = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_2006.f_2, Local_2006.f_3, 1, 1, 0);
	ENTITY::SET_ENTITY_HEADING(Local_2006, Local_2006.f_18);
	ENTITY::FREEZE_ENTITY_POSITION(Local_2006, 1);
	OBJECT::_0xEB6F1A9B5510A5D2(Local_2006, 1);
	ENTITY::SET_ENTITY_PROOFS(Local_2006, 1, 1, 1, 1, 1, 0, 0, 0);
	Local_2030 = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_2030.f_2, Local_2030.f_3, 1, 1, 0);
	ENTITY::SET_ENTITY_HEADING(Local_2030, Local_2030.f_18);
	ENTITY::SET_ENTITY_PROOFS(Local_2030, 1, 1, 1, 1, 1, 0, 0, 0);
	Local_1982 = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_1982.f_2, Local_1982.f_3, 1, 1, 0);
	ENTITY::SET_ENTITY_HEADING(Local_1982, Local_1982.f_18);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_1982, Local_2030, 0, 0f, 0f, 0.86f, 0f, 0f, 180f, 0, 0, 1, 0, 2, 1);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2030, Local_2006, 0, 0f, 0f, -1.21f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	Local_2440 = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_2440.f_2, Local_2440.f_3, 1, 1, 0);
	ENTITY::SET_ENTITY_HEADING(Local_2440, Local_2440.f_18);
	ENTITY::SET_ENTITY_PROOFS(Local_2440, 1, 1, 1, 1, 1, 0, 0, 0);
	Local_2054[0 /*24*/] = OBJECT::CREATE_OBJECT(Local_2054[0 /*24*/].f_2, Local_3382, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(Local_2054[0 /*24*/], 0f, 0f, 0f, 2, 1);
	iLocal_3567[0] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_fbi5a_flare", Local_2054[0 /*24*/], 0f, 0f, 0.11f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
	GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(iLocal_3567[0], 1f, 0.84f, 0f, 0);
	if (!GlobalFunc_8315() == 2)
	{
		func_931(2, 0);
	}
	GlobalFunc_173(&uLocal_3788, 2, PLAYER::PLAYER_PED_ID(), "trevor", 0, 1);
	PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2585.x, -1);
	func_687(&(uLocal_3710[0]), 0, 3622.353f, 3754.143f, 27.5154f, 344.6723f, 0, 0, 0);
	GlobalFunc_11267(uLocal_3710[0], 12, 11, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	GlobalFunc_11267(uLocal_3710[0], 14, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	PED::SET_PED_COMPONENT_VARIATION(uLocal_3710[0], 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uLocal_3710[0], 3, 4, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uLocal_3710[0], 4, 4, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uLocal_3710[0], 6, 4, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uLocal_3710[0], 8, 4, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uLocal_3710[0], 10, 0, 0, 0);
	PED::SET_PED_PROP_INDEX(uLocal_3710[0], 1, 2, 0, false);
	PED::SET_PED_MAX_TIME_UNDERWATER(uLocal_3710[0], -1f);
	GlobalFunc_173(&uLocal_3788, 0, uLocal_3710[0], "michael", 0, 1);
	PED::SET_PED_USING_ACTION_MODE(uLocal_3710[0], 1, -1, 0);
	WEAPON::GIVE_WEAPON_TO_PED(uLocal_3710[0], joaat("weapon_carbinerifle"), 400, 0, 1);
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(uLocal_3710[0], joaat("weapon_carbinerifle"), joaat("component_at_ar_supp"));
	WEAPON::GIVE_WEAPON_TO_PED(uLocal_3710[0], joaat("weapon_grenade"), 2, 0, 1);
	WEAPON::GIVE_WEAPON_TO_PED(uLocal_3710[0], joaat("weapon_stungun"), 50, 1, 1);
	func_645(&(uLocal_3710[0]), 1);
	Local_85.f_3 = { 3626.235f, 3762.163f, 27.6171f };
	Local_85.f_12 = 33.6764f;
	func_942(&Local_85);
	GlobalFunc_173(&uLocal_3788, 3, Local_85, "dave", 0, 1);
	PED::SET_PED_MAX_TIME_UNDERWATER(Local_85, 1E+07f);
	PED::SET_PED_DIES_IN_WATER(Local_85, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 3, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 4, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 6, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 8, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 11, 3, 0, 0);
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_85, joaat("weapon_carbinerifle"), joaat("component_at_ar_supp"));
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_85, joaat("weapon_carbinerifle"), joaat("component_at_ar_flsh"));
	WEAPON::GIVE_WEAPON_TO_PED(Local_85, joaat("weapon_stungun"), -1, 0, 1);
	WEAPON::SET_CURRENT_PED_WEAPON(Local_85, Local_85.f_20, 1);
	iLocal_3244 = 50;
	Local_110.f_3 = { 3629.755f, 3746.942f, 27.6062f };
	Local_110.f_12 = 7f;
	func_942(&Local_110);
	GlobalFunc_173(&uLocal_3788, 4, Local_110, "steve", 0, 1);
	PED::SET_PED_MAX_TIME_UNDERWATER(Local_110, 1E+07f);
	PED::SET_PED_DIES_IN_WATER(Local_110, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 3, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 4, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 6, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 8, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 11, 0, 0, 0);
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_110, joaat("weapon_carbinerifle"), joaat("component_at_ar_supp"));
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_110, joaat("weapon_carbinerifle"), joaat("component_at_ar_flsh"));
	WEAPON::GIVE_WEAPON_TO_PED(Local_110, joaat("weapon_stungun"), -1, 0, 1);
	WEAPON::SET_CURRENT_PED_WEAPON(Local_110, Local_110.f_20, 1);
	iLocal_3243 = 101;
	iLocal_3613[1] = OBJECT::CREATE_OBJECT(joaat("prop_boxpile_02b"), 3623.334f, 3738.386f, 27.6897f, 1, 1, 0);
	ENTITY::SET_ENTITY_HEADING(iLocal_3613[1], 150.2056f);
	Local_2464[0 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_2464[0 /*15*/].f_1, Local_2464[0 /*15*/].f_3, Local_2464[0 /*15*/].f_6, 1, 1);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2464[0 /*15*/], 3);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_2464[0 /*15*/], 0);
	AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_2464[0 /*15*/], 0);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_2464[0 /*15*/], 0, 1);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2464[0 /*15*/], Local_2464[0 /*15*/].f_13, "lkfbi5a", 1);
	VEHICLE::SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(Local_2464[0 /*15*/]);
	if (!iLocal_3975)
	{
		STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
	}
	AUDIO::TRIGGER_MUSIC_EVENT("FBI5A_HELI_RESTART");
	AUDIO::START_AUDIO_SCENE("FBI_5_FLY_TO_CONTAINER");
	AUDIO::START_ALARM("FIB_05_BIOTECH_LAB_ALARMS", 1);
	GlobalFunc_11046(5, "land crate with helicopter", 0, 0, 0, 1);
	iLocal_82 = 19;
	iLocal_84 = 0;
	iLocal_3223 = MISC::GET_GAME_TIMER();
	func_459(0, 0f, 0f, 0, 800);
}

void func_945()//Position - 0x8CFF5
{
	GlobalFunc_563(1);
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	PED::SET_CREATE_RANDOM_COPS(0);
	if (iLocal_3975)
	{
		GlobalFunc_5116(3623.57f, 3753.486f, 27.5156f, 318.49f, 0, 0);
	}
	STREAMING::REQUEST_MODEL(iLocal_3624);
	STREAMING::REQUEST_MODEL(Local_85.f_1);
	STREAMING::REQUEST_MODEL(Local_110.f_1);
	STREAMING::REQUEST_MODEL(Local_2030.f_2);
	STREAMING::REQUEST_MODEL(Local_1982.f_2);
	STREAMING::REQUEST_MODEL(Local_2440.f_2);
	STREAMING::REQUEST_MODEL(Local_2006.f_2);
	STREAMING::REQUEST_MODEL(Local_2440.f_2);
	STREAMING::REQUEST_MODEL(Local_2175.f_2);
	STREAMING::REQUEST_MODEL(Local_2199.f_2);
	STREAMING::REQUEST_MODEL(Local_2151.f_2);
	STREAMING::REQUEST_MODEL(Local_2464[0 /*15*/].f_1);
	STREAMING::REQUEST_MODEL(joaat("prop_boxpile_02b"));
	STREAMING::REQUEST_MODEL(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_carbinerifle")));
	WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_carbinerifle"), 31, 0);
	STREAMING::REQUEST_MODEL(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_stungun")));
	WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_stungun"), 31, 0);
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_2464[0 /*15*/].f_13, "lkfbi5a");
	STREAMING::REQUEST_ANIM_DICT("missfbi5ig_33");
	AUDIO::PREPARE_ALARM("FIB_05_BIOTECH_LAB_ALARMS");
	iLocal_3684 = INTERIOR::GET_INTERIOR_AT_COORDS(Local_3379);
	INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_3684);
	STREAMING::REQUEST_PTFX_ASSET();
	if (iLocal_3975)
	{
		GlobalFunc_5108(0, -1, 1);
	}
	while (((((((((((((((((((((!STREAMING::HAS_MODEL_LOADED(iLocal_3624) || !STREAMING::HAS_MODEL_LOADED(Local_85.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_110.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_2030.f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_1982.f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_2440.f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_2006.f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_2175.f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_2199.f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_2151.f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_2464[0 /*15*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_boxpile_02b"))) || !STREAMING::HAS_MODEL_LOADED(Local_2440.f_2)) || !STREAMING::HAS_MODEL_LOADED(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_carbinerifle")))) || !WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_carbinerifle"))) || !STREAMING::HAS_MODEL_LOADED(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_stungun")))) || !WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_stungun"))) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_2464[0 /*15*/].f_13, "lkfbi5a")) || !STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_33")) || !AUDIO::PREPARE_ALARM("FIB_05_BIOTECH_LAB_ALARMS")) || !INTERIOR::IS_INTERIOR_READY(iLocal_3684)) || !STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		SYSTEM::WAIT(0);
	}
	MISC::CLEAR_AREA(3613.408f, 3739.449f, 27.6921f, 10000f, 1, 0, 0, 0);
	GRAPHICS::REMOVE_DECALS_IN_RANGE(3526.249f, 3711.001f, 19.9928f, 1000f);
	if (!GlobalFunc_8315() == 0)
	{
		func_931(0, 0);
	}
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 3623.57f, 3753.486f, 27.5156f, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 318.4949f);
	GlobalFunc_11267(PLAYER::PLAYER_PED_ID(), 12, 11, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	PED::SET_PED_MAX_TIME_UNDERWATER(PLAYER::PLAYER_PED_ID(), -1f);
	GlobalFunc_173(&uLocal_3788, 0, PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
	PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
	WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_carbinerifle"), 400, 0, 1);
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_carbinerifle"), joaat("component_at_ar_supp"));
	WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_grenade"), 2, 0, 1);
	WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_stungun"), 50, 1, 1);
	ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 1);
	Local_85.f_3 = { 3626.235f, 3762.163f, 27.5157f };
	Local_85.f_12 = 90.9578f;
	iLocal_3244 = 22;
	func_942(&Local_85);
	Local_85.f_2 = GlobalFunc_6797(Local_85, 0, 145);
	PED::SET_PED_CAN_RAGDOLL(Local_85, 0);
	PED::SET_PED_MAX_TIME_UNDERWATER(Local_85, -1f);
	PED::SET_PED_DIES_IN_WATER(Local_85, 1);
	ENTITY::SET_ENTITY_PROOFS(Local_85, 0, 1, 0, 0, 0, 1, 0, 1);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 3, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 4, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 6, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 8, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 11, 3, 0, 0);
	PED::SET_PED_PROP_INDEX(Local_85, 1, 2, 0, false);
	WEAPON::GIVE_WEAPON_TO_PED(Local_85, joaat("weapon_stungun"), -1, 0, 1);
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_85, joaat("weapon_carbinerifle"), joaat("component_at_ar_supp"));
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_85, joaat("weapon_carbinerifle"), joaat("component_at_ar_flsh"));
	WEAPON::SET_CURRENT_PED_WEAPON(Local_85, Local_85.f_20, 1);
	GlobalFunc_173(&uLocal_3788, 3, Local_85, "dave", 0, 1);
	func_339();
	PED::FORCE_PED_MOTION_STATE(Local_85, 1063765679, 0, 0, 0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_85, 0, 0);
	Local_110.f_3 = { 3619.311f, 3734.525f, 27.6895f };
	Local_110.f_12 = 323.7317f;
	iLocal_3243 = 21;
	func_942(&Local_110);
	Local_110.f_2 = GlobalFunc_6797(Local_110, 0, 145);
	PED::SET_PED_CAN_RAGDOLL(Local_110, 0);
	PED::SET_PED_MAX_TIME_UNDERWATER(Local_110, -1f);
	PED::SET_PED_DIES_IN_WATER(Local_110, 1);
	ENTITY::SET_ENTITY_PROOFS(Local_110, 0, 1, 0, 0, 0, 1, 0, 1);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 3, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 4, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 6, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 8, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 11, 0, 0, 0);
	PED::SET_PED_PROP_INDEX(Local_110, 1, 2, 0, false);
	WEAPON::GIVE_WEAPON_TO_PED(Local_110, joaat("weapon_stungun"), -1, 0, 1);
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_110, joaat("weapon_carbinerifle"), joaat("component_at_ar_supp"));
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_110, joaat("weapon_carbinerifle"), joaat("component_at_ar_flsh"));
	WEAPON::SET_CURRENT_PED_WEAPON(Local_110, Local_110.f_20, 1);
	GlobalFunc_173(&uLocal_3788, 4, Local_110, "steve", 0, 1);
	func_328();
	PED::FORCE_PED_MOTION_STATE(Local_110, 1063765679, 0, 0, 0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_110, 0, 0);
	Local_2006 = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_2006.f_2, Local_2006.f_3, 1, 1, 0);
	ENTITY::SET_ENTITY_HEADING(Local_2006, Local_2006.f_18);
	ENTITY::FREEZE_ENTITY_POSITION(Local_2006, 1);
	OBJECT::_0xEB6F1A9B5510A5D2(Local_2006, 1);
	ENTITY::SET_ENTITY_PROOFS(Local_2006, 1, 1, 1, 1, 1, 0, 0, 0);
	Local_2030 = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_2030.f_2, Local_2030.f_3, 1, 1, 0);
	ENTITY::SET_ENTITY_HEADING(Local_2030, Local_2030.f_18);
	ENTITY::SET_ENTITY_PROOFS(Local_2030, 1, 1, 1, 1, 1, 0, 0, 0);
	Local_1982 = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_1982.f_2, Local_1982.f_3, 1, 1, 0);
	ENTITY::SET_ENTITY_HEADING(Local_1982, Local_1982.f_18);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_1982, Local_2030, 0, 0f, 0f, 0.86f, 0f, 0f, 180f, 0, 0, 1, 0, 2, 1);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2030, Local_2006, 0, 0f, 0f, -1.21f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	Local_2440 = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_2440.f_2, Local_2440.f_3, 1, 1, 0);
	ENTITY::SET_ENTITY_HEADING(Local_2440, Local_2440.f_18);
	ENTITY::SET_ENTITY_PROOFS(Local_2440, 1, 1, 1, 1, 1, 0, 0, 0);
	iLocal_3613[1] = OBJECT::CREATE_OBJECT(joaat("prop_boxpile_02b"), 3623.334f, 3738.386f, 27.6897f, 1, 1, 0);
	ENTITY::SET_ENTITY_HEADING(iLocal_3613[1], 150.2056f);
	Local_2464[0 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_2464[0 /*15*/].f_1, 3635.952f, 3754.514f, 27.5157f, 149.2777f, 1, 1);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2464[0 /*15*/], 3);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_2464[0 /*15*/], 0);
	AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_2464[0 /*15*/], 0);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_2464[0 /*15*/], 0, 1);
	if (!iLocal_3975)
	{
		STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
	}
	AUDIO::TRIGGER_MUSIC_EVENT("FBI5A_FORKLIFT_RESTART");
	AUDIO::START_ALARM("FIB_05_BIOTECH_LAB_ALARMS", 1);
	GlobalFunc_11046(4, "load chemicals into container", 0, 0, 0, 1);
	iLocal_84 = 0;
	iLocal_82 = 14;
	func_459(0, 0f, 0f, 0, 800);
}

void func_946()//Position - 0x8D7D3
{
	struct<3> Var0;
	struct<3> Var3;
	
	GlobalFunc_563(1);
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	PED::SET_CREATE_RANDOM_COPS(0);
	if (iLocal_3975)
	{
		GlobalFunc_5116(3560.249f, 3671.931f, 27.1219f, 338.4696f, 0, 0);
	}
	STREAMING::REQUEST_MODEL(iLocal_3624);
	STREAMING::REQUEST_MODEL(Local_85.f_1);
	STREAMING::REQUEST_MODEL(Local_110.f_1);
	STREAMING::REQUEST_MODEL(Local_987[0 /*25*/].f_1);
	STREAMING::REQUEST_MODEL(Local_1163[0 /*25*/].f_1);
	STREAMING::REQUEST_MODEL(Local_2151.f_2);
	STREAMING::REQUEST_MODEL(Local_2030.f_2);
	STREAMING::REQUEST_MODEL(Local_1982.f_2);
	STREAMING::REQUEST_MODEL(Local_2440.f_2);
	STREAMING::REQUEST_MODEL(Local_2006.f_2);
	STREAMING::REQUEST_MODEL(Local_211[0 /*25*/].f_1);
	STREAMING::REQUEST_MODEL(joaat("prop_boxpile_02b"));
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_2464[0 /*15*/].f_13, "lkfbi5a");
	STREAMING::REQUEST_ANIM_DICT("missfbi5ig_21");
	STREAMING::REQUEST_ANIM_DICT("missfbi5ig_22");
	STREAMING::REQUEST_ANIM_DICT("missfbi5ig_23");
	AUDIO::PREPARE_ALARM("FIB_05_BIOTECH_LAB_ALARMS");
	iLocal_3684 = INTERIOR::GET_INTERIOR_AT_COORDS(3558.898f, 3677.85f, 27.125f);
	INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_3684);
	STREAMING::REQUEST_MODEL(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_carbinerifle")));
	WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_carbinerifle"), 31, 0);
	STREAMING::REQUEST_MODEL(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_stungun")));
	WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_stungun"), 31, 0);
	STREAMING::REQUEST_PTFX_ASSET();
	if (iLocal_3975)
	{
		GlobalFunc_5108(0, -1, 1);
	}
	while ((((((((((((((((((((((!STREAMING::HAS_MODEL_LOADED(iLocal_3624) || !STREAMING::HAS_MODEL_LOADED(Local_85.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_110.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_987[0 /*25*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1163[0 /*25*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_2151.f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_2030.f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_1982.f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_2440.f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_2006.f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_211[0 /*25*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_boxpile_02b"))) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_2464[0 /*15*/].f_13, "lkfbi5a")) || !STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_21")) || !STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_22")) || !STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_23")) || !AUDIO::PREPARE_ALARM("FIB_05_BIOTECH_LAB_ALARMS")) || !INTERIOR::IS_INTERIOR_READY(iLocal_3684)) || !STREAMING::HAS_MODEL_LOADED(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_carbinerifle")))) || !WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_carbinerifle"))) || !STREAMING::HAS_MODEL_LOADED(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_stungun")))) || !WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_stungun"))) || !STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		SYSTEM::WAIT(0);
	}
	MISC::CLEAR_AREA(3551.58f, 3658.52f, 27.125f, 1000f, 1, 0, 0, 0);
	if (!GlobalFunc_8315() == 0)
	{
		func_931(0, 0);
	}
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_22", "take_chemical_player0", 3558.898f, 3677.85f, 27.125f, 0f, 0f, 170f, 1f, 2) };
	Var0.f_2 = 27.1217f;
	Var3 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missfbi5ig_22", "take_chemical_player0", 3558.898f, 3677.85f, 27.125f, 0f, 0f, 170f, 1f, 2) };
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Var3.f_2);
	GlobalFunc_11267(PLAYER::PLAYER_PED_ID(), 12, 11, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	PED::SET_PED_MAX_TIME_UNDERWATER(PLAYER::PLAYER_PED_ID(), -1f);
	PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
	GlobalFunc_173(&uLocal_3788, 0, PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
	ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 1);
	WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_carbinerifle"), 400, 0, 1);
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_carbinerifle"), joaat("component_at_ar_supp"));
	WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_grenade"), 2, 0, 1);
	WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_stungun"), 50, 1, 1);
	Local_3397 = { 3559.398f, 3676.75f, 27.125f };
	Local_3400 = { 0f, 0f, 174f };
	Local_987[4 /*25*/].f_3 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_21", "hand_up_scientist", Local_3397, Local_3400, 1f, 2) };
	Local_987[4 /*25*/].f_6 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missfbi5ig_21", "hand_up_scientist", Local_3397, Local_3400, 1f, 2) };
	if (Global_86821)
	{
		func_541(&(Local_987[4 /*25*/]), 0);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_987[4 /*25*/], 55);
		PED::SET_PED_MONEY(Local_987[4 /*25*/], 0);
		GlobalFunc_173(&uLocal_3788, GlobalFunc_2020("B"), Local_987[4 /*25*/], "scientist5", 0, 1);
		Local_987[4 /*25*/].f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(Local_987[4 /*25*/], Local_987[4 /*25*/].f_15, "missfbi5ig_22", "hands_up_anxious_scientist", 1000f, -8f, 1, 0, 8f, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_987[4 /*25*/].f_15, 1);
		iLocal_3234 = 7;
	}
	if (Global_86822)
	{
		Local_987[5 /*25*/].f_3 = { 3553.633f, 3672.71f, 27.1219f };
		func_541(&(Local_987[5 /*25*/]), 0);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_987[5 /*25*/], 54);
		PED::SET_PED_MONEY(Local_987[5 /*25*/], 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_987[5 /*25*/], 8, 1, 0, 0);
		GlobalFunc_173(&uLocal_3788, 8, Local_987[5 /*25*/], "scientist3", 0, 1);
		Local_3397 = { 3558.898f, 3677.85f, 27.125f };
		Local_3400 = { 0f, 0f, 170f };
		Local_987[5 /*25*/].f_15 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3397, Local_3400, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(Local_987[5 /*25*/], Local_987[5 /*25*/].f_15, "missfbi5ig_21", "hand_up_scientist", 1000f, -8f, 1, 0, 8f, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_987[5 /*25*/].f_15, 1);
		iLocal_3235 = 3;
	}
	Local_85.f_3 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_23", "run_through_door_dave", 3558.898f, 3677.85f, 27.125f, 0f, 0f, 170f, 0f, 2) };
	Local_85.f_3.f_2 = 27.1217f;
	Local_85.f_12 = 86.1642f;
	func_942(&Local_85);
	Local_85.f_2 = GlobalFunc_6797(Local_85, 0, 145);
	func_645(&Local_85, 1);
	PED::SET_PED_CAN_RAGDOLL(Local_85, 0);
	PED::SET_PED_MAX_TIME_UNDERWATER(Local_85, -1f);
	PED::SET_PED_DIES_IN_WATER(Local_85, 1);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 3, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 4, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 6, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 8, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 11, 3, 0, 0);
	PED::SET_PED_PROP_INDEX(Local_85, 1, 2, 0, false);
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_85, joaat("weapon_carbinerifle"), joaat("component_at_ar_supp"));
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_85, joaat("weapon_carbinerifle"), joaat("component_at_ar_flsh"));
	WEAPON::SET_CURRENT_PED_WEAPON(Local_85, Local_85.f_20, 1);
	PED::SET_PED_ACCURACY(Local_85, 100);
	PED::SET_FORCE_FOOTSTEP_UPDATE(Local_85, 1);
	ENTITY::SET_ENTITY_PROOFS(Local_85, 0, 1, 0, 0, 0, 1, 0, 1);
	GlobalFunc_173(&uLocal_3788, 3, Local_85, "dave", 0, 1);
	if (!PED::IS_PED_INJURED(Local_987[4 /*25*/]))
	{
		TASK::TASK_AIM_GUN_AT_ENTITY(Local_85, Local_987[4 /*25*/], -1, 1);
	}
	else if (!PED::IS_PED_INJURED(Local_987[5 /*25*/]))
	{
		TASK::TASK_AIM_GUN_AT_ENTITY(Local_85, Local_987[5 /*25*/], -1, 1);
	}
	else
	{
		TASK::TASK_AIM_GUN_AT_COORD(Local_85, 3553.9f, 3668.7f, 28.8f, -1, 1, 0);
	}
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_85, 0, 0);
	Local_110.f_3 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_23", "run_through_door_steve", 3558.898f, 3677.85f, 27.125f, 0f, 0f, 170f, 0f, 2) };
	Local_110.f_3.f_2 = 27.1217f;
	Local_110.f_12 = 86.1642f;
	func_942(&Local_110);
	Local_110.f_2 = GlobalFunc_6797(Local_110, 0, 145);
	PED::SET_PED_CAN_RAGDOLL(Local_110, 0);
	PED::SET_PED_MAX_TIME_UNDERWATER(Local_110, -1f);
	PED::SET_PED_DIES_IN_WATER(Local_110, 1);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 3, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 4, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 6, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 8, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 11, 0, 0, 0);
	PED::SET_PED_PROP_INDEX(Local_110, 1, 2, 0, false);
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_110, joaat("weapon_carbinerifle"), joaat("component_at_ar_supp"));
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_110, joaat("weapon_carbinerifle"), joaat("component_at_ar_flsh"));
	WEAPON::SET_CURRENT_PED_WEAPON(Local_110, Local_110.f_20, 1);
	PED::SET_PED_ACCURACY(Local_110, 100);
	PED::SET_FORCE_FOOTSTEP_UPDATE(Local_110, 1);
	ENTITY::SET_ENTITY_PROOFS(Local_110, 0, 1, 0, 0, 0, 1, 0, 1);
	GlobalFunc_173(&uLocal_3788, 4, Local_110, "steve", 0, 1);
	if (!PED::IS_PED_INJURED(Local_987[5 /*25*/]))
	{
		TASK::TASK_AIM_GUN_AT_ENTITY(Local_110, Local_987[5 /*25*/], -1, 1);
	}
	else if (!PED::IS_PED_INJURED(Local_987[4 /*25*/]))
	{
		TASK::TASK_AIM_GUN_AT_ENTITY(Local_110, Local_987[4 /*25*/], -1, 1);
	}
	else
	{
		TASK::TASK_AIM_GUN_AT_COORD(Local_110, 3553.9f, 3668.7f, 28.8f, -1, 1, 0);
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_110, 1);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_110, 0, 0);
	Local_2151 = OBJECT::CREATE_OBJECT(Local_2151.f_2, Local_2151.f_3, 1, 1, 0);
	ENTITY::FREEZE_ENTITY_POSITION(Local_2151, 1);
	ENTITY::SET_ENTITY_HEADING(Local_2151, Local_2151.f_18);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2151.f_2);
	Local_2006 = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_2006.f_2, Local_2006.f_3, 1, 1, 0);
	ENTITY::SET_ENTITY_HEADING(Local_2006, Local_2006.f_18);
	ENTITY::FREEZE_ENTITY_POSITION(Local_2006, 1);
	OBJECT::_0xEB6F1A9B5510A5D2(Local_2006, 1);
	ENTITY::SET_ENTITY_PROOFS(Local_2006, 1, 1, 1, 1, 1, 0, 0, 0);
	Local_2030 = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_2030.f_2, Local_2030.f_3, 1, 1, 0);
	ENTITY::SET_ENTITY_HEADING(Local_2030, Local_2030.f_18);
	ENTITY::SET_ENTITY_PROOFS(Local_2030, 1, 1, 1, 1, 1, 0, 0, 0);
	Local_1982 = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_1982.f_2, Local_1982.f_3, 1, 1, 0);
	ENTITY::SET_ENTITY_HEADING(Local_1982, Local_1982.f_18);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_1982, Local_2030, 0, 0f, 0f, 0.86f, 0f, 0f, 180f, 0, 0, 1, 0, 2, 1);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2030, Local_2006, 0, 0f, 0f, -1.21f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	Local_2440 = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_2440.f_2, Local_2440.f_3, 1, 1, 0);
	ENTITY::SET_ENTITY_HEADING(Local_2440, Local_2440.f_18);
	ENTITY::SET_ENTITY_PROOFS(Local_2440, 1, 1, 1, 1, 1, 0, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[13], 1f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[13], 4, 0, 1);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[14], -1f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[14], 4, 0, 1);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[15], 1f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[15], 4, 0, 1);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[16], 0f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[16], 4, 0, 1);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[17], 0f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[17], 4, 0, 1);
	GlobalFunc_173(&uLocal_3788, GlobalFunc_2020("E"), 0, "SECURITYTANNOY", 0, 1);
	if (!iLocal_3975)
	{
		STREAMING::NEW_LOAD_SCENE_START(Var0, GlobalFunc_590(0f, 0f, Var3.f_2), 10f, 0);
		while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			SYSTEM::WAIT(0);
		}
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	GlobalFunc_11046(3, "start of shootout", 0, 0, 0, 1);
	AUDIO::TRIGGER_MUSIC_EVENT("FBI5A_FIGHT_RESTART");
	AUDIO::START_AUDIO_SCENE("FBI_5_GET_TO_NERVE_TOXIN");
	func_459(0, 0f, 0f, 0, 800);
	iLocal_84 = 1;
	iLocal_82 = 13;
}

void func_947()//Position - 0x8E344
{
	GlobalFunc_563(1);
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	PED::SET_CREATE_RANDOM_COPS(0);
	if (iLocal_3975)
	{
		GlobalFunc_5116(3526.249f, 3711.001f, 19.9928f, 172.3f, 0, 0);
	}
	STREAMING::REQUEST_MODEL(iLocal_3624);
	STREAMING::REQUEST_MODEL(Local_85.f_1);
	STREAMING::REQUEST_MODEL(Local_110.f_1);
	STREAMING::REQUEST_MODEL(Local_987[0 /*25*/].f_1);
	STREAMING::REQUEST_MODEL(Local_211[0 /*25*/].f_1);
	STREAMING::REQUEST_MODEL(Local_1958.f_2);
	STREAMING::REQUEST_MODEL(Local_2271[0 /*24*/].f_2);
	STREAMING::REQUEST_MODEL(Local_2271[1 /*24*/].f_2);
	STREAMING::REQUEST_MODEL(Local_2271[2 /*24*/].f_2);
	STREAMING::REQUEST_MODEL(Local_1766.f_2);
	STREAMING::REQUEST_MODEL(Local_1790.f_2);
	STREAMING::REQUEST_MODEL(Local_1814.f_2);
	STREAMING::REQUEST_MODEL(Local_1838.f_2);
	STREAMING::REQUEST_MODEL(Local_1862.f_2);
	STREAMING::REQUEST_MODEL(Local_1886.f_2);
	STREAMING::REQUEST_MODEL(Local_1910.f_2);
	STREAMING::REQUEST_MODEL(Local_1934.f_2);
	STREAMING::REQUEST_MODEL(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_carbinerifle")));
	WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_carbinerifle"), 31, 0);
	STREAMING::REQUEST_MODEL(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_stungun")));
	WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_stungun"), 31, 0);
	STREAMING::REQUEST_ANIM_DICT("missfbi5ig_2");
	PED::REQUEST_ACTION_MODE_ASSET("MICHAEL_ACTION");
	PED::REQUEST_ACTION_MODE_ASSET("MP_FEMALE_ACTION");
	AUDIO::PREPARE_ALARM("FIB_05_BIOTECH_LAB_ALARMS");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\LIFTS", 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 0, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 3, 4, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 4, 4, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 6, 4, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 8, 4, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 10, 0, 0);
	iLocal_3684 = INTERIOR::GET_INTERIOR_AT_COORDS(Local_3379);
	INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_3684);
	STREAMING::REQUEST_PTFX_ASSET();
	if (iLocal_3975)
	{
		GlobalFunc_5108(0, -1, 1);
	}
	while (((((((((((((((((((((((((((!STREAMING::HAS_MODEL_LOADED(iLocal_3624) || !STREAMING::HAS_MODEL_LOADED(Local_85.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_110.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_987[0 /*25*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_211[0 /*25*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1958.f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_2271[0 /*24*/].f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_2271[1 /*24*/].f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_2271[2 /*24*/].f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_1766.f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_1790.f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_1814.f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_1838.f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_1862.f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_1886.f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_1910.f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_1934.f_2)) || !STREAMING::HAS_MODEL_LOADED(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_carbinerifle")))) || !WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_carbinerifle"))) || !STREAMING::HAS_MODEL_LOADED(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_stungun")))) || !WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_stungun"))) || !STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_2")) || !PED::HAS_ACTION_MODE_ASSET_LOADED("MICHAEL_ACTION")) || !PED::HAS_ACTION_MODE_ASSET_LOADED("MP_FEMALE_ACTION")) || !AUDIO::PREPARE_ALARM("FIB_05_BIOTECH_LAB_ALARMS")) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\LIFTS", 0)) || !PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID())) || !INTERIOR::IS_INTERIOR_READY(iLocal_3684))
	{
		SYSTEM::WAIT(0);
	}
	MISC::CLEAR_AREA(3526.249f, 3711.001f, 19.9928f, 10000f, 1, 0, 0, 0);
	GRAPHICS::REMOVE_DECALS_IN_RANGE(3526.249f, 3711.001f, 19.9928f, 1000f);
	if (!GlobalFunc_8315() == 0)
	{
		func_931(0, 0);
	}
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 3526.249f, 3711.001f, 19.9928f, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 172.3092f);
	GlobalFunc_11267(PLAYER::PLAYER_PED_ID(), 12, 11, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	PED::SET_PED_MAX_TIME_UNDERWATER(PLAYER::PLAYER_PED_ID(), -1f);
	INTERIOR::FORCE_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID(), INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(3526.249f, 3711.001f, 21f, "v_lab"), MISC::GET_HASH_KEY("Lab_poolroom"));
	INTERIOR::FORCE_ROOM_FOR_GAME_VIEWPORT(INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(3526.249f, 3711.001f, 21f, "v_lab"), MISC::GET_HASH_KEY("Lab_poolroom"));
	WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_carbinerifle"), 400, 0, 1);
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_carbinerifle"), joaat("component_at_ar_supp"));
	WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_grenade"), 2, 0, 1);
	WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_stungun"), 50, 1, 1);
	GlobalFunc_173(&uLocal_3788, 0, PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
	ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 1);
	PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
	PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, "MP_FEMALE_ACTION");
	if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
	{
		PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -633298724, 0, 0, 0);
	}
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
	func_942(&Local_85);
	Local_85.f_2 = GlobalFunc_6797(Local_85, 0, 145);
	PED::SET_PED_MAX_TIME_UNDERWATER(Local_85, -1f);
	PED::SET_PED_DIES_IN_WATER(Local_85, 1);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 3, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 4, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 6, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 8, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 11, 3, 0, 0);
	PED::SET_PED_PROP_INDEX(Local_85, 1, 2, 0, false);
	WEAPON::GIVE_WEAPON_TO_PED(Local_85, joaat("weapon_stungun"), -1, 0, 1);
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_85, joaat("weapon_carbinerifle"), joaat("component_at_ar_supp"));
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_85, joaat("weapon_carbinerifle"), joaat("component_at_ar_flsh"));
	WEAPON::SET_CURRENT_PED_WEAPON(Local_85, Local_85.f_20, 1);
	PED::SET_PED_ACCURACY(Local_85, 100);
	PED::SET_FORCE_FOOTSTEP_UPDATE(Local_85, 1);
	ENTITY::SET_ENTITY_PROOFS(Local_85, 0, 1, 0, 0, 0, 1, 0, 1);
	GlobalFunc_173(&uLocal_3788, 3, Local_85, "dave", 0, 1);
	func_818();
	Local_110.f_3 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi5ig_2", "holdup_scient_steve", 3538.97f, 3673.487f, 19.992f, 0f, 0f, -9.4f, 0f, 2) };
	Local_110.f_6 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missfbi5ig_2", "holdup_scient_steve", 3538.97f, 3673.487f, 19.992f, 0f, 0f, -9.4f, 0f, 2) };
	Local_110.f_3.f_2 = 19.9928f;
	Local_110.f_12 = -110f;
	func_942(&Local_110);
	Local_110.f_2 = GlobalFunc_6797(Local_110, 0, 145);
	PED::SET_PED_MAX_TIME_UNDERWATER(Local_110, -1f);
	PED::SET_PED_DIES_IN_WATER(Local_110, 1);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 3, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 4, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 6, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 8, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 11, 0, 0, 0);
	PED::SET_PED_PROP_INDEX(Local_110, 1, 2, 0, false);
	WEAPON::GIVE_WEAPON_TO_PED(Local_110, joaat("weapon_stungun"), -1, 0, 1);
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_110, joaat("weapon_carbinerifle"), joaat("component_at_ar_supp"));
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_110, joaat("weapon_carbinerifle"), joaat("component_at_ar_flsh"));
	WEAPON::SET_CURRENT_PED_WEAPON(Local_110, Local_110.f_20, 1);
	PED::SET_PED_ACCURACY(Local_110, 100);
	PED::SET_FORCE_FOOTSTEP_UPDATE(Local_110, 1);
	ENTITY::SET_ENTITY_PROOFS(Local_110, 0, 1, 0, 0, 0, 1, 0, 1);
	GlobalFunc_173(&uLocal_3788, 4, Local_110, "steve", 0, 1);
	func_817();
	func_541(&(Local_987[0 /*25*/]), 1);
	HUD::REMOVE_BLIP(&(Local_987[0 /*25*/].f_2));
	PED::SET_PED_MONEY(Local_987[0 /*25*/], 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_987[0 /*25*/], 8, 1, 0, 0);
	GlobalFunc_173(&uLocal_3788, 5, Local_987[0 /*25*/], "scientist0", 0, 1);
	Local_1766 = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_1766.f_2, Local_1766.f_3, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(Local_1766, Local_1766.f_12, 2, 1);
	Local_1790 = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_1790.f_2, Local_1790.f_3, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(Local_1790, Local_1790.f_12, 2, 1);
	Local_1814 = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_1814.f_2, Local_1814.f_3, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(Local_1814, Local_1814.f_12, 2, 1);
	Local_1838 = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_1838.f_2, Local_1838.f_3, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(Local_1838, Local_1838.f_12, 2, 1);
	Local_1862 = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_1862.f_2, Local_1862.f_3, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(Local_1862, Local_1862.f_12, 2, 1);
	Local_1886 = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_1886.f_2, Local_1886.f_3, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(Local_1886, Local_1886.f_12, 2, 1);
	Local_1910 = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_1910.f_2, Local_1910.f_3, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(Local_1910, Local_1910.f_12, 2, 1);
	Local_1934 = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_1934.f_2, Local_1934.f_3, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(Local_1934, Local_1934.f_12, 2, 1);
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("OxyTank_1", Local_1838.f_2))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1838, Local_1838.f_3, 0, 0, 1);
		ENTITY::SET_ENTITY_ROTATION(Local_1838, Local_1838.f_12, 2, 1);
	}
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("OxyTank_2", Local_1862.f_2))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1862, Local_1862.f_3, 0, 0, 1);
		ENTITY::SET_ENTITY_ROTATION(Local_1862, Local_1862.f_12, 2, 1);
	}
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("OxyTank_3", Local_1886.f_2))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1886, Local_1886.f_3, 0, 0, 1);
		ENTITY::SET_ENTITY_ROTATION(Local_1886, Local_1886.f_12, 2, 1);
	}
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("scuba_steve", Local_1910.f_2))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1910, Local_1910.f_3, 0, 0, 1);
		ENTITY::SET_ENTITY_ROTATION(Local_1910, Local_1910.f_12, 2, 1);
	}
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("swag_bag", Local_1934.f_2))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1934, Local_1934.f_3, 0, 0, 1);
		ENTITY::SET_ENTITY_ROTATION(Local_1934, Local_1934.f_12, 2, 1);
	}
	if (!iLocal_3975)
	{
		STREAMING::NEW_LOAD_SCENE_START(3526.249f, 3711.001f, 19.9928f, GlobalFunc_590(0f, 0f, 172.3092f), 10f, 0);
		while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			SYSTEM::WAIT(0);
		}
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	while ((!GlobalFunc_591(PLAYER::PLAYER_PED_ID()) || !GlobalFunc_591(Local_85)) || !GlobalFunc_591(Local_110))
	{
		SYSTEM::WAIT(0);
	}
	PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
	if (!PED::IS_PED_INJURED(Local_85))
	{
		PED::RELEASE_PED_PRELOAD_VARIATION_DATA(Local_85);
	}
	if (!PED::IS_PED_INJURED(Local_110))
	{
		PED::RELEASE_PED_PRELOAD_VARIATION_DATA(Local_110);
	}
	AUDIO::TRIGGER_MUSIC_EVENT("FBI5A_LIFT_RESTART");
	AUDIO::START_AUDIO_SCENE("FBI_5_GET_TO_LIFT");
	GlobalFunc_11046(2, "get to lift", 0, 0, 0, 1);
	MISC::CLEAR_AREA(3526.249f, 3711.001f, 19.9928f, 10000f, 1, 0, 0, 0);
	func_459(0, 0f, 0f, 0, 800);
	iLocal_84 = 1;
	iLocal_82 = 9;
}

void func_948()//Position - 0x8EE24
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	GlobalFunc_563(1);
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	PED::SET_CREATE_RANDOM_COPS(0);
	Local_3020[0 /*3*/].f_2 = joaat("prop_chem_grill");
	Local_3020[1 /*3*/].f_2 = joaat("prop_chem_grill_bit");
	if (iLocal_3975)
	{
		GlobalFunc_5116(3832.896f, 3665.742f, -23.5f, 150f, 0, 0);
	}
	STREAMING::REQUEST_MODEL(iLocal_3624);
	STREAMING::REQUEST_MODEL(Local_85.f_1);
	STREAMING::REQUEST_MODEL(Local_110.f_1);
	STREAMING::REQUEST_MODEL(Local_3020[0 /*3*/].f_2);
	STREAMING::REQUEST_MODEL(Local_3020[1 /*3*/].f_2);
	STREAMING::REQUEST_MODEL(Local_2054[0 /*24*/].f_2);
	STREAMING::REQUEST_ANIM_DICT("swimming@scuba");
	STREAMING::REQUEST_PTFX_ASSET();
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_3518);
	TASK::REQUEST_WAYPOINT_RECORDING("fbi5_steve_swim_lab");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\Underwater", 0);
	func_858(PLAYER::PLAYER_PED_ID(), 12, 10);
	func_858(PLAYER::PLAYER_PED_ID(), 8, 22);
	if (iLocal_3975)
	{
		GlobalFunc_5108(0, -1, 1);
	}
	while (((((((((((!STREAMING::HAS_MODEL_LOADED(iLocal_3624) || !STREAMING::HAS_MODEL_LOADED(Local_85.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_110.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_3020[0 /*3*/].f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_3020[1 /*3*/].f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_2054[0 /*24*/].f_2)) || !STREAMING::HAS_ANIM_DICT_LOADED("swimming@scuba")) || !STREAMING::HAS_PTFX_ASSET_LOADED()) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_3518)) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("fbi5_steve_swim_lab")) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\Underwater", 0)) || !PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID()))
	{
		SYSTEM::WAIT(0);
	}
	MISC::CLEAR_AREA(Local_3385, 10000f, 1, 0, 0, 0);
	if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
	{
		iLocal_3603 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 3833.168f, 3667.15f, -22.68036f, -15.67588f, 3.090937f, 165.0562f, 45.0126f, 0, 2);
		CAM::SET_CAM_ACTIVE(iLocal_3603, 1);
		CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
		SYSTEM::WAIT(0);
	}
	Local_3020[0 /*3*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_3020[0 /*3*/].f_2, Local_3388, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(Local_3020[0 /*3*/], Local_3394, 2, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3020[0 /*3*/].f_2);
	ENTITY::FREEZE_ENTITY_POSITION(Local_3020[0 /*3*/], 1);
	Local_3020[1 /*3*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_3020[1 /*3*/].f_2, 3831.37f, 3663f, -24.3083f, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(Local_3020[1 /*3*/], 86.173f, -15.3571f, 149.922f, 2, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3020[1 /*3*/].f_2);
	iVar0 = 0;
	while (iVar0 <= (iLocal_3572 - 1))
	{
		iLocal_3572[iVar0] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_bio_grille_break", Local_3020[0 /*3*/], Local_3403[iVar0 /*3*/], 0f, 90f, 0f, 1065353216, 0, 0, 0);
		GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_3572[iVar0], "open", 1f, 0);
		iVar0++;
	}
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(PLAYER::PLAYER_PED_ID(), 3832.896f, 3665.742f, -23.5f, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 150f);
	func_931(0, 0);
	PED::SET_PED_MAX_TIME_UNDERWATER(PLAYER::PLAYER_PED_ID(), 1E+08f);
	PED::SET_PED_DIES_IN_WATER(PLAYER::PLAYER_PED_ID(), 0);
	PED::SET_ENABLE_SCUBA(PLAYER::PLAYER_PED_ID(), 1);
	GlobalFunc_173(&uLocal_3788, 0, PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
	GlobalFunc_11267(PLAYER::PLAYER_PED_ID(), 12, 10, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	GlobalFunc_11267(PLAYER::PLAYER_PED_ID(), 8, 22, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
	Local_2054[0 /*24*/] = OBJECT::CREATE_OBJECT(Local_2054[0 /*24*/].f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 0f, 1f), 1, 1, 0);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2054[0 /*24*/], PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 24818), -0.06f, -0.12f, -0.165f, 0f, 90f, 345f, 0, 0, 0, 0, 2, 1);
	iLocal_3567[0] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_bio_flare", Local_2054[0 /*24*/], 0f, 0f, 0.11f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
	TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
	TASK::TASK_PLAY_ANIM(0, "swimming@scuba", "dive_run", 1000f, -1.5f, 1000, 131081, 0, 0, 0, 0);
	TASK::TASK_FORCE_MOTION_STATE(0, -1855028596, 0);
	TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_3518, 5, 512, 20);
	TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
	TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_3685);
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
	Local_85.f_3 = { 3831.3f, 3662.3f, -22.75f };
	Local_85.f_12 = 147f;
	func_942(&Local_85);
	Local_85.f_2 = GlobalFunc_6797(Local_85, 0, 145);
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_85, 3828.9f, 3659.2f, -22.75f, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(Local_85, 147f);
	PED::SET_PED_MAX_TIME_UNDERWATER(Local_85, 1E+07f);
	PED::SET_PED_DIES_IN_WATER(Local_85, 0);
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_85, joaat("weapon_carbinerifle"), joaat("component_at_ar_supp"));
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_85, joaat("weapon_carbinerifle"), joaat("component_at_ar_flsh"));
	WEAPON::GIVE_WEAPON_TO_PED(Local_85, joaat("weapon_stungun"), -1, 0, 1);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 2, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 3, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 4, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 6, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 8, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 11, 0, 0, 0);
	ENTITY::SET_ENTITY_PROOFS(Local_85, 0, 1, 0, 0, 0, 1, 0, 1);
	PED::SET_ENABLE_SCUBA(Local_85, 1);
	GlobalFunc_173(&uLocal_3788, 3, Local_85, "dave", 0, 1);
	Local_2054[2 /*24*/] = OBJECT::CREATE_OBJECT(Local_2054[2 /*24*/].f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_85, 0f, 0f, 1f), 1, 1, 0);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2054[2 /*24*/], Local_85, PED::GET_PED_BONE_INDEX(Local_85, 24818), -0.06f, -0.12f, -0.165f, 0f, 90f, 345f, 0, 0, 0, 0, 2, 1);
	iLocal_3567[2] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_bio_flare", Local_2054[2 /*24*/], 0f, 0f, 0.11f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_3518, ENTITY::GET_ENTITY_COORDS(Local_85, 1), &iVar1);
	iVar1++;
	TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
	TASK::TASK_FORCE_MOTION_STATE(0, -1855028596, 0);
	TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_3518, iVar1, 808, -1);
	TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
	TASK::TASK_PERFORM_SEQUENCE(Local_85, uLocal_3685);
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_85, 0, 0);
	Local_110.f_3 = { 3835.859f, 3673.411f, -21.81704f };
	Local_110.f_12 = 153.5416f;
	func_942(&Local_110);
	Local_110.f_2 = GlobalFunc_6797(Local_110, 0, 145);
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_110, 3831.3f, 3662.3f, -22.75f, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(Local_110, 147f);
	GlobalFunc_173(&uLocal_3788, 4, Local_110, "steve", 0, 1);
	PED::SET_PED_MAX_TIME_UNDERWATER(Local_110, 1E+07f);
	PED::SET_PED_DIES_IN_WATER(Local_110, 0);
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_110, joaat("weapon_carbinerifle"), joaat("component_at_ar_supp"));
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_110, joaat("weapon_carbinerifle"), joaat("component_at_ar_flsh"));
	WEAPON::GIVE_WEAPON_TO_PED(Local_110, joaat("weapon_stungun"), -1, 0, 1);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 2, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 3, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 4, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 6, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 8, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 11, 0, 0, 0);
	PED::SET_PED_PROP_INDEX(Local_110, 1, 1, 0, false);
	ENTITY::SET_ENTITY_PROOFS(Local_110, 0, 1, 0, 0, 0, 1, 0, 1);
	PED::SET_ENABLE_SCUBA(Local_110, 1);
	Local_2054[3 /*24*/] = OBJECT::CREATE_OBJECT(Local_2054[3 /*24*/].f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_110, 0f, 0f, 1f), 1, 1, 0);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2054[3 /*24*/], Local_110, PED::GET_PED_BONE_INDEX(Local_110, 10706), -0.06f, -0.12f, -0.165f, 0f, 90f, 345f, 0, 0, 0, 0, 2, 1);
	iLocal_3567[3] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_bio_flare", Local_2054[3 /*24*/], 0f, 0f, 0.11f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
	TASK::OPEN_SEQUENCE_TASK(&uLocal_3685);
	TASK::TASK_FORCE_MOTION_STATE(0, -1855028596, 0);
	TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_3518, 0, 808, -1);
	TASK::CLOSE_SEQUENCE_TASK(uLocal_3685);
	TASK::TASK_PERFORM_SEQUENCE(Local_110, uLocal_3685);
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_3685);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_110, 0, 0);
	iLocal_3565 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_tunnel_vent_bubbles", 3790.888f, 3658.558f, -19.0412f, 0f, 0f, 0f, 1f, 0, 0, 0, 0);
	uLocal_3605 = HUD::ADD_BLIP_FOR_COORD(Local_3379);
	iLocal_3223 = MISC::GET_GAME_TIMER();
	if (!iLocal_3975)
	{
		STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
	}
	AUDIO::TRIGGER_MUSIC_EVENT("FBI5A_CUT_PIPE_RESTART");
	CAM::DO_SCREEN_FADE_IN(1000);
	if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
	{
		func_473(0, 1, 1, 0f, 0f, 2000, 0, 1, 1, 1, 1);
	}
	else
	{
		func_473(0, 1, 0, 0f, 0f, 2000, 0, 1, 1, 1, 1);
	}
	iLocal_82 = 7;
	iLocal_84 = 0;
	GlobalFunc_11046(1, "swim through tunnel", 0, 0, 0, 1);
}

void func_949()//Position - 0x8F723
{
	if (iLocal_3975)
	{
		GlobalFunc_5116(Local_3385, 266.72f, 0, 0);
	}
	STREAMING::REQUEST_MODEL(Local_2570.f_1);
	STREAMING::REQUEST_MODEL(Local_85.f_1);
	STREAMING::REQUEST_MODEL(Local_110.f_1);
	STREAMING::REQUEST_MODEL(iLocal_3624);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\FBI_05_Chemical_Factory_01", 0);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\FBI_05A_GRILL_CUTTING", 0);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\Underwater", 0);
	if (iLocal_3975)
	{
		GlobalFunc_5108(0, -1, 1);
	}
	while ((((((!STREAMING::HAS_MODEL_LOADED(Local_2570.f_1) || !STREAMING::HAS_MODEL_LOADED(Local_85.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_110.f_1)) || !STREAMING::HAS_MODEL_LOADED(iLocal_3624)) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\FBI_05_Chemical_Factory_01", 0)) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\FBI_05A_GRILL_CUTTING", 0)) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\Underwater", 0))
	{
		SYSTEM::WAIT(0);
	}
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	func_950();
	if (!iLocal_3975)
	{
		STREAMING::NEW_LOAD_SCENE_START(Local_3385, GlobalFunc_590(0f, 0f, 266.1028f), 300f, 0);
		while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			SYSTEM::WAIT(0);
		}
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2570.x, 0))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_2570.x);
	}
	AUDIO::START_AUDIO_SCENE("FBI_5_DINGHY_TO_DIVE_POINT");
	AUDIO::TRIGGER_MUSIC_EVENT("FBI5A_MISSION_START_ST");
	GlobalFunc_11046(0, "start of mission", 0, 0, 0, 1);
	iLocal_3335 = 22;
	iLocal_3336 = 22;
	iLocal_3337 = 22;
	iLocal_84 = 1;
	iLocal_82 = 1;
	func_459(0, 0f, 0f, 0, 800);
}

void func_950()//Position - 0x8F89A
{
	MISC::CLEAR_AREA(Local_3385, 10000f, 1, 0, 0, 0);
	Local_2570.x = VEHICLE::CREATE_VEHICLE(Local_2570.f_1, Local_3385, 266.1028f, 1, 1);
	VEHICLE::SET_VEHICLE_COLOURS(Local_2570.x, 0, 0);
	VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_2570.x, 5f);
	VEHICLE::SET_VEHICLE_EXTRA(Local_2570.x, 3, true);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_2570.x);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2570.f_1);
	iLocal_3241 = MISC::GET_GAME_TIMER();
	if (!GlobalFunc_8315() == 0)
	{
		func_931(0, 0);
	}
	PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2570.x, -1);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
	AUDIO::SET_VEH_RADIO_STATION(Local_2570.x, "OFF");
	GlobalFunc_173(&uLocal_3788, 0, PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
	GlobalFunc_11267(PLAYER::PLAYER_PED_ID(), 12, 50, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	func_736(PLAYER::PLAYER_PED_ID(), 1, 1, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_3624);
	PED::SET_PED_MAX_TIME_UNDERWATER(PLAYER::PLAYER_PED_ID(), 1E+08f);
	PED::SET_PED_DIES_IN_WATER(PLAYER::PLAYER_PED_ID(), 0);
	PED::SET_ENABLE_SCUBA(PLAYER::PLAYER_PED_ID(), 1);
	func_943(&Local_85, &Local_2570, 0);
	PED::SET_PED_CONFIG_FLAG(Local_85, 116, 0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_85, 0, 0);
	GlobalFunc_173(&uLocal_3788, 3, Local_85, "dave", 0, 1);
	PED::SET_PED_MAX_TIME_UNDERWATER(Local_85, 1E+07f);
	PED::SET_PED_DIES_IN_WATER(Local_85, 0);
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_85, joaat("weapon_carbinerifle"), joaat("component_at_ar_supp"));
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_85, joaat("weapon_carbinerifle"), joaat("component_at_ar_flsh"));
	WEAPON::GIVE_WEAPON_TO_PED(Local_85, joaat("weapon_stungun"), -1, 0, 1);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 2, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 3, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 4, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 6, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 8, 3, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_85, 11, 1, 0, 0);
	PED::SET_ENABLE_SCUBA(Local_85, 1);
	func_943(&Local_110, &Local_2570, 1);
	PED::SET_PED_CONFIG_FLAG(Local_110, 116, 0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_110, 0, 0);
	GlobalFunc_173(&uLocal_3788, 4, Local_110, "steve", 0, 1);
	PED::SET_PED_MAX_TIME_UNDERWATER(Local_110, 1E+07f);
	PED::SET_PED_DIES_IN_WATER(Local_110, 0);
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_110, joaat("weapon_carbinerifle"), joaat("component_at_ar_supp"));
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_110, joaat("weapon_carbinerifle"), joaat("component_at_ar_flsh"));
	WEAPON::GIVE_WEAPON_TO_PED(Local_110, joaat("weapon_stungun"), -1, 0, 1);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 2, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 3, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 4, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 6, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 8, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110, 11, 0, 0, 0);
	PED::SET_ENABLE_SCUBA(Local_110, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3520))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3520);
	}
	SYSTEM::WAIT(0);
	while ((!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()) || (!PED::IS_PED_INJURED(Local_85) && !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_85))) || (!PED::IS_PED_INJURED(Local_110) && !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_110)))
	{
		SYSTEM::WAIT(0);
	}
	iLocal_3139 = 0;
}



void func_953()//Position - 0x8FC16
{
	uLocal_3953[0] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_health_standard"), 3595.471f, 3728.947f, 30.2494f, 0f, 0f, 55.6f, 0, -1, 2, 1, 0);
	INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(uLocal_3953[0], "Lab_an2_storage");
	uLocal_3953[1] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_health_standard"), 3609.933f, 3725.517f, 30.1894f, 0f, 0f, 145f, 0, -1, 2, 1, 0);
	INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(uLocal_3953[1], "Lab_loadingbay");
	uLocal_3953[2] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_health_standard"), 3585.431f, 3680.366f, 27.622f, 0f, 0f, 148f, 0, -1, 2, 1, 0);
	INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(uLocal_3953[2], "Lab_hallway2");
}

void func_954()//Position - 0x8FCC9
{
	TASK::ADD_COVER_POINT(3532.149f, 3650.455f, 26.52156f, 258.2819f, 0, 2, 0, 0);
	iLocal_3626[0] = TASK::ADD_COVER_POINT(3524.19f, 3702.99f, 19.9928f, 160.3315f, 1, 2, 0, 0);
	iLocal_3626[1] = TASK::ADD_COVER_POINT(3526.617f, 3703.131f, 20.0082f, 174.6343f, 0, 2, 0, 0);
	iLocal_3626[2] = TASK::ADD_COVER_POINT(3527.078f, 3692.767f, 19.9934f, 176.296f, 0, 2, 0, 0);
	iLocal_3626[3] = TASK::ADD_COVER_POINT(3522.29f, 3676.27f, 19.99f, 256.4286f, 0, 2, 0, 0);
	iLocal_3626[4] = TASK::ADD_COVER_POINT(3538.104f, 3673.057f, 19.9934f, 353.9565f, 0, 2, 0, 0);
	iLocal_3626[5] = TASK::ADD_COVER_POINT(3542.04f, 3672.22f, 19.99f, 357.22f, 1, 2, 0, 0);
	iLocal_3626[6] = TASK::ADD_COVER_POINT(3533.59f, 3671f, 27.12f, 161.92f, 0, 2, 0, 0);
	iLocal_3626[7] = TASK::ADD_COVER_POINT(3532.22f, 3666.64f, 27.1238f, 263.1106f, 0, 2, 0, 0);
	iLocal_3626[8] = TASK::ADD_COVER_POINT(3528.2f, 3660.16f, 27.12186f, 78.5709f, 2, 2, 0, 0);
	iLocal_3626[9] = TASK::ADD_COVER_POINT(3530.976f, 3652.043f, 26.5234f, 261.1276f, 0, 2, 0, 0);
	iLocal_3626[10] = TASK::ADD_COVER_POINT(3549.807f, 3645.579f, 27.1238f, 351.9942f, 1, 2, 0, 0);
	iLocal_3626[11] = TASK::ADD_COVER_POINT(3557.22f, 3667.36f, 27.12f, 348.3624f, 1, 2, 0, 0);
	iLocal_3626[12] = TASK::ADD_COVER_POINT(3552.435f, 3664.796f, 27.1101f, 349.9132f, 0, 2, 0, 0);
	iLocal_3626[14] = TASK::ADD_COVER_POINT(3564.645f, 3684.324f, 27.1191f, 347.0667f, 0, 2, 0, 1);
	iLocal_3626[15] = TASK::ADD_COVER_POINT(3567.767f, 3683.845f, 27.12186f, 351.2092f, 1, 2, 0, 0);
	iLocal_3626[16] = TASK::ADD_COVER_POINT(3582.73f, 3694.03f, 26.12f, 258.3331f, 0, 2, 0, 0);
	iLocal_3626[17] = TASK::ADD_COVER_POINT(3588.07f, 3708.66f, 28.69f, 145.0301f, 1, 2, 0, 0);
	iLocal_3626[18] = TASK::ADD_COVER_POINT(3586.975f, 3689.752f, 26.6234f, 54.4116f, 1, 2, 0, 0);
	iLocal_3626[19] = TASK::ADD_COVER_POINT(3583.87f, 3700.7f, 27.82f, 323.004f, 0, 2, 0, 0);
	iLocal_3626[20] = TASK::ADD_COVER_POINT(3586.374f, 3698.978f, 27.8228f, 322.001f, 1, 2, 0, 0);
	iLocal_3626[21] = TASK::ADD_COVER_POINT(3593.919f, 3710.64f, 28.6907f, 177.4062f, 0, 2, 0, 0);
	iLocal_3626[22] = TASK::ADD_COVER_POINT(3595.463f, 3718.758f, 28.6907f, 350.456f, 1, 2, 0, 0);
	iLocal_3626[23] = TASK::ADD_COVER_POINT(3591.202f, 3719.508f, 28.6907f, 354.7219f, 0, 2, 0, 0);
	iLocal_3626[24] = TASK::ADD_COVER_POINT(3600.923f, 3722.218f, 28.6907f, 141.8499f, 1, 2, 0, 0);
	iLocal_3626[25] = TASK::ADD_COVER_POINT(3604.313f, 3719.85f, 28.6907f, 150.6626f, 0, 2, 0, 0);
	iLocal_3626[27] = TASK::ADD_COVER_POINT(3610.864f, 3729.176f, 28.68974f, 332.1431f, 1, 2, 0, 0);
	iLocal_3626[28] = TASK::ADD_COVER_POINT(3611.965f, 3728.301f, 28.6907f, 319.0702f, 0, 2, 0, 0);
	iLocal_3626[30] = TASK::ADD_COVER_POINT(3544.97f, 3643.064f, 27.1233f, 356.8625f, 1, 2, 0, 1);
	iLocal_3626[31] = TASK::ADD_COVER_POINT(3548.15f, 3642.55f, 27.12f, 348f, 1, 2, 0, 0);
	iLocal_3626[32] = TASK::ADD_COVER_POINT(3596.95f, 3685.77f, 26.62f, 322.6418f, 1, 2, 0, 0);
	iLocal_3626[33] = TASK::ADD_COVER_POINT(3592.66f, 3695.31f, 27.82f, 52.2978f, 1, 2, 0, 0);
	iLocal_3626[34] = TASK::ADD_COVER_POINT(3597.08f, 3722.008f, 28.6896f, 151.297f, 0, 2, 0, 0);
	iLocal_3626[35] = TASK::ADD_COVER_POINT(3609.984f, 3713.818f, 28.6896f, 326.65f, 1, 0, 0, 0);
	iLocal_3626[36] = TASK::ADD_COVER_POINT(3610.158f, 3722.658f, 28.68941f, 325.8f, 0, 2, 0, 1);
	iLocal_3626[37] = TASK::ADD_COVER_POINT(3558.434f, 3667.1f, 27.12188f, 348.3624f, 1, 2, 0, 1);
}

void func_955()//Position - 0x901B2
{
	iLocal_3292[0] = MISC::GET_HASH_KEY("fbi_5_door_0");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_3292[0], joaat("v_ilev_bl_doorpool"), 3526f, 3702.2f, 21.3f, 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[0], 0f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[0], 4, 0, 1);
	iLocal_3292[1] = MISC::GET_HASH_KEY("fbi_5_door_1");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_3292[1], joaat("v_ilev_bl_doorel_l"), 3538.99f, 3673.65f, 19.99f, 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[1], 0f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[1], 4, 0, 1);
	iLocal_3292[2] = MISC::GET_HASH_KEY("fbi_5_door_2");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_3292[2], joaat("v_ilev_bl_doorel_r"), 3541.56f, 3673.2f, 19.99f, 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[2], 0f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[2], 4, 0, 1);
	iLocal_3292[3] = MISC::GET_HASH_KEY("fbi_5_door_3");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_3292[3], joaat("v_ilev_bl_doorel_l"), 3538.8f, 3673.7f, 27.1f, 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[3], 0f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[3], 4, 0, 1);
	iLocal_3292[4] = MISC::GET_HASH_KEY("fbi_5_door_4");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_3292[4], joaat("v_ilev_bl_doorel_r"), 3541.7f, 3673.2f, 27.1f, 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[4], 0f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[4], 4, 0, 1);
	iLocal_3292[7] = MISC::GET_HASH_KEY("fbi_5_door_7");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_3292[7], joaat("v_ilev_bl_door_l"), 3545.28f, 3646.557f, 28.27f, 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[7], 0f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[7], 4, 0, 1);
	iLocal_3292[8] = MISC::GET_HASH_KEY("fbi_5_door_8");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_3292[8], joaat("v_ilev_bl_door_r"), 3544.8f, 3643.99f, 28.27f, 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[8], 0f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[8], 4, 0, 1);
	iLocal_3292[9] = MISC::GET_HASH_KEY("fbi_5_door_9");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_3292[9], joaat("v_ilev_bl_doorsl_l"), 3549.01f, 3658.79f, 27.12f, 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[9], 0f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[9], 4, 0, 1);
	iLocal_3292[10] = MISC::GET_HASH_KEY("fbi_5_door_10");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_3292[10], joaat("v_ilev_bl_doorsl_r"), 3551.57f, 3658.34f, 27.12f, 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[10], 0f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[10], 4, 0, 1);
	iLocal_3292[11] = MISC::GET_HASH_KEY("fbi_5_door_11");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_3292[11], joaat("v_ilev_bl_doorsl_l"), 3552.87f, 3665.25f, 27.12f, 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[11], 0f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[11], 4, 0, 1);
	iLocal_3292[12] = MISC::GET_HASH_KEY("fbi_5_door_12");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_3292[12], joaat("v_ilev_bl_doorsl_r"), 3555.44f, 3664.8f, 27.12f, 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[12], 0f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[12], 4, 0, 1);
	iLocal_3292[13] = MISC::GET_HASH_KEY("fbi_5_door_13");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_3292[13], joaat("v_ilev_bl_doorsl_r"), 3557.6f, 3669.2f, 27.1f, 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[13], 0f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[13], 4, 0, 1);
	iLocal_3292[14] = MISC::GET_HASH_KEY("fbi_5_door_14");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_3292[14], joaat("v_ilev_bl_doorsl_l"), 3555.74f, 3681.53f, 27.12f, 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[14], 0f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[14], 4, 0, 1);
	iLocal_3292[15] = MISC::GET_HASH_KEY("fbi_5_door_15");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_3292[15], joaat("v_ilev_bl_doorsl_r"), 3558.3f, 3681.08f, 27.12f, 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[15], 0f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[15], 4, 0, 1);
	iLocal_3292[16] = MISC::GET_HASH_KEY("fbi_5_door_16");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_3292[16], joaat("v_ilev_bl_doorsl_l"), 3565.07f, 3684.73f, 27.12f, 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[16], 0f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[16], 4, 0, 1);
	iLocal_3292[17] = MISC::GET_HASH_KEY("fbi_5_door_17");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_3292[17], joaat("v_ilev_bl_doorsl_r"), 3567.63f, 3684.28f, 27.12f, 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[17], 0f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[17], 4, 0, 1);
	iLocal_3292[18] = MISC::GET_HASH_KEY("fbi_5_door_18");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_3292[18], joaat("v_ilev_bl_door_l"), 3569.16f, 3695.87f, 28.27f, 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[18], 1.1f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[18], 4, 0, 1);
	iLocal_3292[19] = MISC::GET_HASH_KEY("fbi_5_door_19");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_3292[19], joaat("v_ilev_bl_door_r"), 3568.7f, 3693.3f, 28.27f, 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[19], -1.1f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[19], 4, 0, 1);
	iLocal_3292[20] = MISC::GET_HASH_KEY("fbi_5_door_20");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_3292[20], joaat("v_ilev_bl_door_l"), 3596.38f, 3690.46f, 28.97f, 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[20], 1.1f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[20], 4, 0, 1);
	iLocal_3292[21] = MISC::GET_HASH_KEY("fbi_5_door_21");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_3292[21], joaat("v_ilev_bl_door_r"), 3598.51f, 3688.97f, 28.97f, 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[21], -1.1f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[21], 4, 0, 1);
	iLocal_3292[22] = MISC::GET_HASH_KEY("fbi_5_door_22");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_3292[22], joaat("v_ilev_bl_door_l"), 3584.15f, 3700.94f, 28.97f, 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[22], 1.1f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[22], 4, 0, 1);
	iLocal_3292[23] = MISC::GET_HASH_KEY("fbi_5_door_23");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_3292[23], joaat("v_ilev_bl_door_r"), 3586.28f, 3699.45f, 28.97f, 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[23], -1.1f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[23], 4, 0, 1);
	iLocal_3292[24] = MISC::GET_HASH_KEY("fbi_5_door_24");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_3292[24], joaat("v_ilev_bl_door_r"), 3601.99f, 3717.88f, 29.83f, 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[24], 0f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[24], 4, 0, 1);
	iLocal_3292[25] = MISC::GET_HASH_KEY("fbi_5_door_25");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_3292[25], joaat("v_ilev_bl_door_l"), 3599.86f, 3719.37f, 29.83f, 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[25], 0f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[25], 4, 0, 1);
	iLocal_3292[26] = MISC::GET_HASH_KEY("fbi_5_door_26");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_3292[26], joaat("v_ilev_bl_door_r"), 3594.63f, 3704.9f, 29.83f, 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3292[26], 0f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3292[26], 4, 0, 1);
}

void func_956()//Position - 0x90958
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iLocal_3211 = 0;
	iLocal_3218 = 0;
	iLocal_3224 = 0;
	iLocal_3225 = 0;
	iLocal_3212 = 0;
	iLocal_3228 = 0;
	iLocal_3215 = 0;
	iLocal_3216 = 0;
	iLocal_3229 = 0;
	iLocal_3230 = 0;
	iLocal_3234 = 0;
	iLocal_3235 = 0;
	iLocal_3222 = 0;
	iLocal_3231 = 0;
	iLocal_3232 = 0;
	iLocal_3233 = 0;
	iLocal_3235 = 0;
	iLocal_3236 = 0;
	iLocal_3238 = 0;
	iLocal_3238 = 0;
	iLocal_3239 = 0;
	iLocal_3240 = 0;
	iLocal_3219 = 0;
	iLocal_3220 = 0;
	iLocal_3221 = 0;
	iLocal_3214 = 0;
	iLocal_3213 = 0;
	iLocal_3226 = 0;
	iLocal_3227 = 0;
	iLocal_3243 = 0;
	iLocal_3244 = 0;
	iLocal_3245 = 0;
	iLocal_3246 = 0;
	iLocal_3247 = 0;
	iLocal_3250 = 0;
	iLocal_3252 = 0;
	iLocal_3253 = 0;
	iLocal_3254 = 0;
	iLocal_3259 = 0;
	iLocal_3260 = 0;
	iLocal_3261 = 0;
	iLocal_3280 = 0;
	iLocal_3281 = 0;
	iLocal_3282 = 0;
	iLocal_3283 = 0;
	iLocal_3284 = 0;
	iLocal_3285 = 0;
	iLocal_3286 = 0;
	iLocal_3287 = 0;
	iLocal_3288 = 0;
	iLocal_3289 = 0;
	iLocal_3217 = 0;
	iLocal_3290 = 0;
	iLocal_3291 = 0;
	iLocal_3320 = 0;
	iLocal_3321 = 0;
	iLocal_3322 = 0;
	iLocal_3323 = 0;
	iLocal_3332 = 0;
	iLocal_3333 = 0;
	iLocal_3334 = 0;
	iLocal_3335 = 0;
	iLocal_3336 = 0;
	iLocal_3337 = 0;
	iLocal_3338 = 0;
	iLocal_3339 = 0;
	iLocal_3340 = 0;
	iLocal_3341 = 0;
	iLocal_3342 = 0;
	iLocal_3343 = 0;
	iLocal_3344 = 0;
	iLocal_3345 = 0;
	iLocal_3346 = 0;
	iLocal_3347 = 0;
	iLocal_3351 = 0;
	iLocal_3355 = 0;
	iLocal_3356 = 0;
	iLocal_3241 = MISC::GET_GAME_TIMER();
	fLocal_3360 = 0f;
	iLocal_3097 = 0;
	iLocal_3095 = 0;
	bLocal_3098 = false;
	iLocal_3099 = 0;
	iLocal_3100 = 0;
	iLocal_3102 = 0;
	iLocal_3103 = 0;
	iLocal_3104 = 0;
	iLocal_3105 = 0;
	iLocal_3106 = 0;
	iLocal_3115 = 0;
	bLocal_3116 = false;
	iLocal_3117 = 0;
	iLocal_3118 = 0;
	iLocal_3119 = 0;
	iLocal_3123 = 0;
	iLocal_3126 = 0;
	iLocal_3127 = 1;
	iLocal_3128 = 0;
	bLocal_3101 = false;
	bLocal_3129 = false;
	iLocal_3130 = 0;
	iLocal_3131 = 0;
	iLocal_3132 = 0;
	iLocal_3133 = 0;
	iLocal_3134 = 0;
	bLocal_3135 = false;
	iLocal_3136 = 0;
	iLocal_3137 = 0;
	iLocal_3138 = 0;
	iLocal_3120 = 0;
	iLocal_3121 = 0;
	iLocal_3122 = 0;
	iLocal_3124 = 0;
	iLocal_3125 = 0;
	Local_3754.f_18 = 0;
	Local_3754.f_19 = 0;
	Local_2570.f_1 = joaat("dinghy");
	Local_3403[0 /*3*/] = { -0.76f, -0.04f, -0.78f };
	Local_3403[1 /*3*/] = { -0.8f, -0.04f, -0.52f };
	Local_3403[2 /*3*/] = { -0.7f, -0.04f, -0.25f };
	Local_3403[3 /*3*/] = { -0.74f, -0.04f, 0f };
	Local_3403[4 /*3*/] = { -0.74f, -0.04f, 0.26f };
	Local_3403[5 /*3*/] = { -0.78f, -0.04f, 0.54f };
	Local_3403[6 /*3*/] = { -0.76f, -0.04f, 0.78f };
	Local_3403[7 /*3*/] = { -0.64f, -0.04f, -0.86f };
	Local_3403[8 /*3*/] = { -0.64f, -0.04f, 0.94f };
	Local_3403[9 /*3*/] = { -0.39f, -0.04f, -0.86f };
	Local_3403[10 /*3*/] = { -0.64f, -0.04f, 0.94f };
	Local_3403[11 /*3*/] = { -0.12f, -0.04f, -0.92f };
	Local_3403[12 /*3*/] = { -0.12f, -0.04f, 1.02f };
	Local_3403[13 /*3*/] = { 0.1f, -0.04f, -0.88f };
	Local_3403[14 /*3*/] = { 0.1f, -0.04f, 0.95f };
	Local_3403[15 /*3*/] = { 0.37f, -0.04f, -0.92f };
	Local_3403[16 /*3*/] = { 0.37f, -0.04f, 0.95f };
	Local_3403[17 /*3*/] = { 0.64f, -0.04f, -0.92f };
	Local_3403[18 /*3*/] = { 0.64f, -0.04f, 0.94f };
	Local_3403[19 /*3*/] = { 0.77f, -0.04f, -0.77f };
	Local_3403[20 /*3*/] = { 0.73f, -0.04f, -0.5f };
	Local_3403[21 /*3*/] = { 0.85f, -0.04f, -0.23f };
	Local_3403[22 /*3*/] = { 0.85f, -0.04f, 0.03f };
	Local_3403[23 /*3*/] = { 0.77f, -0.04f, 0.29f };
	Local_3403[24 /*3*/] = { 0.81f, -0.04f, 0.5f };
	Local_3403[25 /*3*/] = { 0.79f, -0.04f, 0.77f };
	Local_2054[0 /*24*/].f_2 = joaat("prop_flare_01");
	Local_2054[1 /*24*/].f_2 = joaat("prop_flare_01");
	Local_2054[2 /*24*/].f_2 = joaat("prop_flare_01");
	Local_2054[3 /*24*/].f_2 = joaat("prop_flare_01");
	Local_1766.f_2 = joaat("p_s_scuba_mask_s");
	Local_1766.f_3 = { 3530.45f, 3705.5f, 20.08f };
	Local_1766.f_12 = { 0f, 90f, 0f };
	Local_1790.f_2 = joaat("p_michael_scuba_mask_s");
	Local_1790.f_3 = { 3530f, 3705.61f, 20.096f };
	Local_1790.f_12 = { 0f, 90f, 20f };
	Local_1814.f_2 = joaat("p_d_scuba_mask_s");
	Local_1814.f_3 = { 3531.18f, 3707.08f, 20.096f };
	Local_1814.f_12 = { 0f, 90f, 40f };
	Local_1838.f_2 = joaat("p_s_scuba_tank_s");
	Local_1838.f_3 = { 3529.81f, 3706.64f, 20.073f };
	Local_1838.f_12 = { 270f, 90f, 0f };
	Local_1862.f_2 = joaat("p_d_scuba_tank_s");
	Local_1862.f_3 = { 3530.54f, 3707.06f, 20.136f };
	Local_1862.f_12 = { 270f, 270f, 0f };
	Local_1886.f_2 = joaat("p_michael_scuba_tank_s");
	Local_1886.f_3 = { 3529.21f, 3705.48f, 20.071f };
	Local_1886.f_12 = { 270f, 2f, 200f };
	Local_1910.f_2 = joaat("p_steve_scuba_hood_s");
	Local_1910.f_3 = { 3530.35f, 3705.98f, 20.1f };
	Local_1910.f_12 = { 0f, 90f, 0f };
	Local_1934.f_2 = joaat("p_ld_heist_bag_s_1");
	Local_1934.f_3 = { 3529.52f, 3705.84f, 19.9797f };
	Local_1934.f_12 = { -16.8547f, 13.5841f, 1.81239f };
	Local_2151.f_2 = joaat("p_chem_vial_02b_s");
	Local_2151.f_3 = { 3560.53f, 3672.64f, 28.12f };
	Local_2151.f_18 = 252.8533f;
	Local_2175.f_2 = joaat("prop_cs_vial_01");
	Local_2199.f_2 = joaat("p_chem_vial_02b_s");
	Local_2223.f_2 = joaat("p_cs_clipboard");
	Local_2247.f_2 = joaat("prop_pencil_01");
	Local_2271[0 /*24*/].f_2 = joaat("v_ilev_bl_elevdis1");
	Local_2271[0 /*24*/].f_3 = { 3540.25f, 3673.25f, 22.457f };
	Local_2271[0 /*24*/].f_12 = { 0f, 0f, 351.32f };
	Local_2271[1 /*24*/].f_2 = joaat("v_ilev_bl_elevdis2");
	Local_2271[1 /*24*/].f_3 = { 3540.25f, 3673.25f, 22.457f };
	Local_2271[1 /*24*/].f_12 = { 0f, 0f, 351.32f };
	Local_2271[2 /*24*/].f_2 = joaat("v_ilev_bl_elevdis3");
	Local_2271[2 /*24*/].f_3 = { 3540.25f, 3673.25f, 22.457f };
	Local_2271[2 /*24*/].f_12 = { 0f, 0f, 351.32f };
	Local_1958.f_3 = { 3540.879f, 3674.363f, 19.9944f };
	Local_1958.f_2 = joaat("p_ld_id_card_002");
	Local_85.f_3 = { 3527.19f, 3703.39f, 19.9928f };
	Local_85.f_12 = 65f;
	Local_85.f_9 = { 3834.781f, 3673.608f, -22.03224f };
	Local_85.f_1 = GlobalFunc_4946(30);
	Local_85.f_20 = joaat("weapon_carbinerifle");
	Local_85.f_13 = 500;
	StringCopy(&(Local_85.f_21), "buddy dave", 16);
	Local_110.f_3 = { 3524.19f, 3702.99f, 19.9928f };
	Local_110.f_12 = -110f;
	Local_110.f_9 = { 3837.94f, 3670.399f, -21.24912f };
	Local_110.f_1 = GlobalFunc_4946(23);
	Local_110.f_20 = joaat("weapon_carbinerifle");
	Local_110.f_13 = 500;
	StringCopy(&(Local_110.f_21), "buddy steve", 16);
	Local_987[0 /*25*/].f_3 = { 3524.77f, 3699.09f, 19.992f };
	Local_987[0 /*25*/].f_12 = -175.8622f;
	Local_987[0 /*25*/].f_9 = { 3524.876f, 3693.872f, 19.9854f };
	Local_987[0 /*25*/].f_1 = joaat("s_m_m_scientist_01");
	Local_987[0 /*25*/].f_20 = joaat("weapon_unarmed");
	Local_987[0 /*25*/].f_13 = 120;
	StringCopy(&(Local_987[0 /*25*/].f_21), "scientist 0", 16);
	Local_987[1 /*25*/].f_3 = { 3540.537f, 3675.759f, 19.9944f };
	Local_987[1 /*25*/].f_12 = 165.822f;
	Local_987[1 /*25*/].f_9 = { 3539.827f, 3671f, 19.9944f };
	Local_987[1 /*25*/].f_1 = joaat("s_m_m_scientist_01");
	Local_987[1 /*25*/].f_20 = joaat("weapon_unarmed");
	Local_987[1 /*25*/].f_13 = 120;
	StringCopy(&(Local_987[1 /*25*/].f_21), "scientist 1", 16);
	Local_987[2 /*25*/].f_3 = { 3536.98f, 3663.102f, 27.123f };
	Local_987[2 /*25*/].f_12 = 173.1075f;
	Local_987[2 /*25*/].f_1 = joaat("s_m_m_scientist_01");
	Local_987[2 /*25*/].f_20 = joaat("weapon_unarmed");
	Local_987[2 /*25*/].f_13 = 120;
	StringCopy(&(Local_987[2 /*25*/].f_21), "scientist 2", 16);
	Local_987[3 /*25*/].f_3 = { 3538.283f, 3663.785f, 27.123f };
	Local_987[3 /*25*/].f_12 = 183f;
	Local_987[3 /*25*/].f_1 = joaat("s_m_m_scientist_01");
	Local_987[3 /*25*/].f_20 = joaat("weapon_unarmed");
	Local_987[3 /*25*/].f_13 = 120;
	StringCopy(&(Local_987[3 /*25*/].f_21), "scientist 3", 16);
	Local_987[4 /*25*/].f_3 = { 3560.043f, 3671.964f, 27.123f };
	Local_987[4 /*25*/].f_12 = 353.32f;
	Local_987[4 /*25*/].f_9 = { 3558.458f, 3669.715f, 27.123f };
	Local_987[4 /*25*/].f_1 = joaat("s_m_m_scientist_01");
	Local_987[4 /*25*/].f_20 = joaat("weapon_unarmed");
	Local_987[4 /*25*/].f_13 = 120;
	StringCopy(&(Local_987[4 /*25*/].f_21), "scientist 4", 16);
	Local_987[5 /*25*/].f_3 = { 3566.809f, 3686.501f, 27.1215f };
	Local_987[5 /*25*/].f_12 = 190f;
	Local_987[5 /*25*/].f_9 = { 3556.441f, 3679.399f, 27.123f };
	Local_987[5 /*25*/].f_1 = joaat("s_m_m_scientist_01");
	Local_987[5 /*25*/].f_20 = joaat("weapon_unarmed");
	Local_987[5 /*25*/].f_13 = 120;
	StringCopy(&(Local_987[5 /*25*/].f_21), "scientist 5", 16);
	Local_987[6 /*25*/].f_3 = { 3540.848f, 3676.446f, 27.1213f };
	Local_987[6 /*25*/].f_12 = 186.5477f;
	Local_987[6 /*25*/].f_1 = joaat("s_m_m_scientist_01");
	Local_987[6 /*25*/].f_20 = joaat("weapon_unarmed");
	Local_987[6 /*25*/].f_13 = 120;
	Local_135[0 /*25*/].f_3 = { 3529.676f, 3672.952f, 19.9944f };
	Local_135[0 /*25*/].f_12 = 73.0071f;
	Local_135[0 /*25*/].f_9 = { 3520.9f, 3674.6f, 19.9944f };
	Local_135[0 /*25*/].f_1 = joaat("s_m_m_chemsec_01");
	Local_135[0 /*25*/].f_20 = joaat("weapon_pistol");
	Local_135[0 /*25*/].f_13 = 120;
	Local_135[1 /*25*/].f_3 = { 3550.04f, 3657.014f, 27.1232f };
	Local_135[1 /*25*/].f_12 = 172.4949f;
	Local_135[1 /*25*/].f_9 = { 3527.283f, 3672.575f, 27.123f };
	Local_135[1 /*25*/].f_1 = joaat("s_m_m_chemsec_01");
	Local_135[1 /*25*/].f_20 = joaat("weapon_pistol");
	Local_135[1 /*25*/].f_13 = 110;
	StringCopy(&(Local_135[1 /*25*/].f_21), "PATROL guard 1", 16);
	Local_135[2 /*25*/].f_3 = { 3550.178f, 3658.004f, 27.1232f };
	Local_135[2 /*25*/].f_12 = 162f;
	Local_135[2 /*25*/].f_9 = { 3527.986f, 3674.28f, 27.123f };
	Local_135[2 /*25*/].f_1 = joaat("s_m_m_chemsec_01");
	Local_135[2 /*25*/].f_20 = joaat("weapon_pistol");
	Local_135[2 /*25*/].f_13 = 110;
	StringCopy(&(Local_135[2 /*25*/].f_21), "PATROL guard 2", 16);
	Local_211[0 /*25*/].f_3 = { 3562.837f, 3694.071f, 28.1215f };
	Local_211[0 /*25*/].f_12 = 160.3372f;
	Local_211[0 /*25*/].f_9 = { 3564.416f, 3693.767f, 27.123f };
	Local_211[0 /*25*/].f_1 = joaat("s_m_m_chemsec_01");
	Local_211[0 /*25*/].f_20 = joaat("weapon_pistol");
	StringCopy(&(Local_211[0 /*25*/].f_21), "guard 0", 16);
	Local_211[0 /*25*/].f_13 = 200;
	Local_211[0 /*25*/].f_14 = 10;
	Local_211[1 /*25*/].f_3 = { 3573.311f, 3693.638f, 26.1217f };
	Local_211[1 /*25*/].f_12 = 139.3572f;
	Local_211[1 /*25*/].f_9 = { 3567.279f, 3694.915f, 27.1217f };
	Local_211[1 /*25*/].f_1 = joaat("s_m_m_chemsec_01");
	Local_211[1 /*25*/].f_20 = joaat("weapon_pistol");
	StringCopy(&(Local_211[1 /*25*/].f_21), "guard 1", 16);
	Local_211[1 /*25*/].f_13 = 200;
	Local_211[1 /*25*/].f_14 = 15;
	Local_211[2 /*25*/].f_3 = { 3575.786f, 3691.334f, 26.1239f };
	Local_211[2 /*25*/].f_12 = 74.2808f;
	Local_211[2 /*25*/].f_9 = { 3575.786f, 3691.334f, 26.4239f };
	Local_211[2 /*25*/].f_1 = joaat("s_m_m_chemsec_01");
	Local_211[2 /*25*/].f_20 = joaat("weapon_pistol");
	StringCopy(&(Local_211[2 /*25*/].f_21), "guard 2", 16);
	Local_211[2 /*25*/].f_13 = 200;
	Local_211[2 /*25*/].f_14 = 10;
	Local_211[3 /*25*/].f_3 = { 3580.684f, 3688.403f, 26.1239f };
	Local_211[3 /*25*/].f_12 = 79.1393f;
	Local_211[3 /*25*/].f_9 = { 3576.522f, 3695.225f, 26.1239f };
	Local_211[3 /*25*/].f_1 = joaat("s_m_m_chemsec_01");
	Local_211[3 /*25*/].f_20 = joaat("weapon_pistol");
	StringCopy(&(Local_211[3 /*25*/].f_21), "guard 3", 16);
	Local_211[3 /*25*/].f_13 = 200;
	Local_211[3 /*25*/].f_14 = 15;
	Local_211[4 /*25*/].f_3 = { 3585.76f, 3683.365f, 26.6235f };
	Local_211[4 /*25*/].f_12 = 54.8469f;
	Local_211[4 /*25*/].f_9 = { 3581.751f, 3692.383f, 26.1239f };
	Local_211[4 /*25*/].f_1 = joaat("s_m_m_chemsec_01");
	Local_211[4 /*25*/].f_20 = joaat("weapon_pistol");
	StringCopy(&(Local_211[4 /*25*/].f_21), "guard 4", 16);
	Local_211[4 /*25*/].f_13 = 200;
	Local_211[4 /*25*/].f_14 = 10;
	Local_211[5 /*25*/].f_3 = { 3584.763f, 3686.653f, 26.6235f };
	Local_211[5 /*25*/].f_12 = 347.9796f;
	Local_211[5 /*25*/].f_9 = { 3584.763f, 3686.653f, 26.6235f };
	Local_211[5 /*25*/].f_1 = joaat("s_m_m_chemsec_01");
	Local_211[5 /*25*/].f_20 = joaat("weapon_pistol");
	StringCopy(&(Local_211[5 /*25*/].f_21), "guard 5", 16);
	Local_211[5 /*25*/].f_13 = 200;
	Local_211[5 /*25*/].f_14 = 15;
	Local_211[6 /*25*/].f_3 = { 3576.482f, 3689.436f, 26.1239f };
	Local_211[6 /*25*/].f_12 = 77.319f;
	Local_211[6 /*25*/].f_9 = { 3582.467f, 3694.631f, 26.1239f };
	Local_211[6 /*25*/].f_1 = joaat("s_m_m_chemsec_01");
	Local_211[6 /*25*/].f_20 = joaat("weapon_pistol");
	StringCopy(&(Local_211[6 /*25*/].f_21), "guard 6", 16);
	Local_211[6 /*25*/].f_13 = 200;
	Local_211[6 /*25*/].f_14 = 10;
	Local_211[7 /*25*/].f_3 = { 3593.628f, 3686.565f, 26.6235f };
	Local_211[7 /*25*/].f_12 = 63f;
	Local_211[7 /*25*/].f_9 = { 3590.65f, 3682.963f, 26.6235f };
	Local_211[7 /*25*/].f_1 = joaat("s_m_m_chemsec_01");
	Local_211[7 /*25*/].f_20 = joaat("weapon_pistol");
	StringCopy(&(Local_211[7 /*25*/].f_21), "guard 7", 16);
	Local_211[7 /*25*/].f_13 = 200;
	Local_211[7 /*25*/].f_14 = 15;
	Local_211[8 /*25*/].f_3 = { 3597.529f, 3688.286f, 27.8234f };
	Local_211[8 /*25*/].f_12 = 144.6111f;
	Local_211[8 /*25*/].f_9 = { 3597.529f, 3688.286f, 27.8234f };
	Local_211[8 /*25*/].f_1 = joaat("s_m_m_chemsec_01");
	Local_211[8 /*25*/].f_20 = joaat("weapon_pistol");
	StringCopy(&(Local_211[8 /*25*/].f_21), "guard 8", 16);
	Local_211[8 /*25*/].f_13 = 200;
	Local_211[8 /*25*/].f_14 = 10;
	Local_211[9 /*25*/].f_3 = { 3586.517f, 3702.842f, 27.9924f };
	Local_211[9 /*25*/].f_12 = 167.7553f;
	Local_211[9 /*25*/].f_9 = { 3586.554f, 3694.601f, 27.8234f };
	Local_211[9 /*25*/].f_1 = joaat("s_m_m_chemsec_01");
	Local_211[9 /*25*/].f_20 = joaat("weapon_pistol");
	StringCopy(&(Local_211[9 /*25*/].f_21), "guard 9", 16);
	Local_211[9 /*25*/].f_13 = 200;
	Local_211[9 /*25*/].f_14 = 15;
	Local_211[10 /*25*/].f_3 = { 3587.951f, 3708.925f, 28.6908f };
	Local_211[10 /*25*/].f_12 = 229.3332f;
	Local_211[10 /*25*/].f_9 = { 3587.951f, 3708.925f, 28.6908f };
	Local_211[10 /*25*/].f_1 = joaat("s_m_m_chemsec_01");
	Local_211[10 /*25*/].f_20 = joaat("weapon_pistol");
	StringCopy(&(Local_211[10 /*25*/].f_21), "guard 10", 16);
	Local_211[10 /*25*/].f_13 = 200;
	Local_211[10 /*25*/].f_14 = 10;
	Local_211[11 /*25*/].f_3 = { 3589.877f, 3714.461f, 28.6897f };
	Local_211[11 /*25*/].f_12 = 208.1707f;
	Local_211[11 /*25*/].f_9 = { 3594.064f, 3711.192f, 28.6897f };
	Local_211[11 /*25*/].f_1 = joaat("s_m_m_chemsec_01");
	Local_211[11 /*25*/].f_20 = joaat("weapon_pistol");
	StringCopy(&(Local_211[11 /*25*/].f_21), "guard 11", 16);
	Local_211[11 /*25*/].f_13 = 200;
	Local_211[11 /*25*/].f_14 = 15;
	Local_211[12 /*25*/].f_3 = { 3597.924f, 3722.387f, 28.6908f };
	Local_211[12 /*25*/].f_12 = 159.0877f;
	Local_211[12 /*25*/].f_9 = { 3593.349f, 3713.994f, 28.6908f };
	Local_211[12 /*25*/].f_1 = joaat("s_m_m_chemsec_01");
	Local_211[12 /*25*/].f_20 = joaat("weapon_pistol");
	StringCopy(&(Local_211[12 /*25*/].f_21), "guard 12", 16);
	Local_211[12 /*25*/].f_13 = 200;
	Local_211[12 /*25*/].f_14 = 10;
	Local_211[13 /*25*/].f_3 = { 3599.498f, 3724.417f, 28.6908f };
	Local_211[13 /*25*/].f_12 = 147.112f;
	Local_211[13 /*25*/].f_9 = { 3594.23f, 3711.489f, 28.6908f };
	Local_211[13 /*25*/].f_1 = joaat("s_m_m_chemsec_01");
	Local_211[13 /*25*/].f_20 = joaat("weapon_pistol");
	StringCopy(&(Local_211[13 /*25*/].f_21), "guard 13", 16);
	Local_211[13 /*25*/].f_13 = 200;
	Local_211[13 /*25*/].f_14 = 15;
	Local_211[14 /*25*/].f_3 = { 3589.734f, 3718.83f, 28.6908f };
	Local_211[14 /*25*/].f_12 = 167.9553f;
	Local_211[14 /*25*/].f_9 = { 3594.073f, 3710.587f, 28.6908f };
	Local_211[14 /*25*/].f_1 = joaat("s_m_m_chemsec_01");
	Local_211[14 /*25*/].f_20 = joaat("weapon_pistol");
	StringCopy(&(Local_211[14 /*25*/].f_21), "guard 14", 16);
	Local_211[14 /*25*/].f_13 = 200;
	Local_211[14 /*25*/].f_14 = 10;
	Local_211[15 /*25*/].f_3 = { 3600.805f, 3723.75f, 28.6908f };
	Local_211[15 /*25*/].f_12 = 129.4799f;
	Local_211[15 /*25*/].f_9 = { 3593.574f, 3724.559f, 28.6908f };
	Local_211[15 /*25*/].f_1 = joaat("s_m_m_chemsec_01");
	Local_211[15 /*25*/].f_20 = joaat("weapon_pistol");
	StringCopy(&(Local_211[15 /*25*/].f_21), "guard 15", 16);
	Local_211[15 /*25*/].f_13 = 200;
	Local_211[15 /*25*/].f_14 = 15;
	Local_211[16 /*25*/].f_3 = { 3604.444f, 3721.488f, 28.6908f };
	Local_211[16 /*25*/].f_12 = 158.22f;
	Local_211[16 /*25*/].f_9 = { 3597.08f, 3722.008f, 28.6896f };
	Local_211[16 /*25*/].f_1 = joaat("s_m_m_chemsec_01");
	Local_211[16 /*25*/].f_20 = joaat("weapon_pistol");
	StringCopy(&(Local_211[16 /*25*/].f_21), "guard 16", 16);
	Local_211[16 /*25*/].f_13 = 200;
	Local_211[16 /*25*/].f_14 = 10;
	Local_211[17 /*25*/].f_3 = { 3611.249f, 3732.336f, 27.6901f };
	Local_211[17 /*25*/].f_12 = 175.1256f;
	Local_211[17 /*25*/].f_9 = { 3619.81f, 3728.497f, 27.6917f };
	Local_211[17 /*25*/].f_1 = joaat("s_m_m_chemsec_01");
	Local_211[17 /*25*/].f_20 = joaat("weapon_pumpshotgun");
	StringCopy(&(Local_211[17 /*25*/].f_21), "guard 17", 16);
	Local_211[17 /*25*/].f_13 = 200;
	Local_211[17 /*25*/].f_14 = 15;
	Local_211[18 /*25*/].f_3 = { 3610.924f, 3726.029f, 28.6908f };
	Local_211[18 /*25*/].f_12 = 150.771f;
	Local_211[18 /*25*/].f_9 = { 3613.85f, 3733.41f, 27.6917f };
	Local_211[18 /*25*/].f_1 = joaat("s_m_m_chemsec_01");
	Local_211[18 /*25*/].f_20 = joaat("weapon_pumpshotgun");
	StringCopy(&(Local_211[18 /*25*/].f_21), "guard 18", 16);
	Local_211[18 /*25*/].f_13 = 200;
	Local_211[18 /*25*/].f_14 = 10;
	Local_211[19 /*25*/].f_3 = { 3624.344f, 3734.199f, 27.6917f };
	Local_211[19 /*25*/].f_12 = 150.771f;
	Local_211[19 /*25*/].f_9 = { 3624.344f, 3734.199f, 27.6917f };
	Local_211[19 /*25*/].f_1 = joaat("s_m_y_marine_03");
	Local_211[19 /*25*/].f_20 = joaat("weapon_carbinerifle");
	StringCopy(&(Local_211[19 /*25*/].f_21), "guard 19", 16);
	Local_211[19 /*25*/].f_13 = 200;
	Local_211[19 /*25*/].f_14 = 15;
	Local_211[20 /*25*/].f_3 = { 3612.845f, 3730.443f, 27.6917f };
	Local_211[20 /*25*/].f_12 = 150.771f;
	Local_211[20 /*25*/].f_9 = { 3623.7f, 3739.14f, 27.6917f };
	Local_211[20 /*25*/].f_1 = joaat("s_m_y_marine_03");
	Local_211[20 /*25*/].f_20 = joaat("weapon_pistol");
	StringCopy(&(Local_211[20 /*25*/].f_21), "guard 20", 16);
	Local_211[20 /*25*/].f_13 = 200;
	Local_211[20 /*25*/].f_14 = 10;
	Local_211[21 /*25*/].f_3 = { 3619.819f, 3761.079f, 27.5154f };
	Local_211[21 /*25*/].f_12 = 175.1773f;
	Local_211[21 /*25*/].f_9 = { 3619.806f, 3745.139f, 27.6921f };
	Local_211[21 /*25*/].f_1 = joaat("s_m_y_marine_03");
	Local_211[21 /*25*/].f_20 = joaat("weapon_carbinerifle");
	StringCopy(&(Local_211[21 /*25*/].f_21), "guard 21", 16);
	Local_211[21 /*25*/].f_13 = 200;
	Local_211[21 /*25*/].f_14 = 15;
	Local_211[22 /*25*/].f_3 = { 3621.57f, 3766.405f, 27.5154f };
	Local_211[22 /*25*/].f_12 = 174.0157f;
	Local_211[22 /*25*/].f_9 = { 3609f, 3739.27f, 27.69f };
	Local_211[22 /*25*/].f_1 = joaat("s_m_y_marine_03");
	Local_211[22 /*25*/].f_20 = joaat("weapon_pistol");
	StringCopy(&(Local_211[22 /*25*/].f_21), "guard 22", 16);
	Local_211[22 /*25*/].f_13 = 200;
	Local_211[22 /*25*/].f_14 = 10;
	Local_211[23 /*25*/].f_3 = { 3636.931f, 3761.547f, 27.5154f };
	Local_211[23 /*25*/].f_12 = 145.2723f;
	Local_211[23 /*25*/].f_9 = { 3613.933f, 3726.198f, 27.6917f };
	Local_211[23 /*25*/].f_1 = joaat("s_m_y_marine_03");
	Local_211[23 /*25*/].f_20 = joaat("weapon_carbinerifle");
	StringCopy(&(Local_211[23 /*25*/].f_21), "guard 23", 16);
	Local_211[23 /*25*/].f_13 = 200;
	Local_211[23 /*25*/].f_14 = 15;
	Local_211[24 /*25*/].f_3 = { 3613.225f, 3748.592f, 27.6895f };
	Local_211[24 /*25*/].f_12 = 188.1327f;
	Local_211[24 /*25*/].f_9 = { 3615.666f, 3744.987f, 27.6917f };
	Local_211[24 /*25*/].f_1 = joaat("s_m_y_marine_03");
	Local_211[24 /*25*/].f_20 = joaat("weapon_carbinerifle");
	StringCopy(&(Local_211[24 /*25*/].f_21), "guard 24", 16);
	Local_211[24 /*25*/].f_13 = 200;
	Local_211[24 /*25*/].f_14 = 10;
	Local_211[25 /*25*/].f_3 = { 3622.603f, 3744.032f, 27.6895f };
	Local_211[25 /*25*/].f_12 = 144.8152f;
	Local_211[25 /*25*/].f_9 = { 3613.389f, 3734.783f, 27.6917f };
	Local_211[25 /*25*/].f_1 = joaat("s_m_y_marine_03");
	Local_211[25 /*25*/].f_20 = joaat("weapon_pistol");
	StringCopy(&(Local_211[25 /*25*/].f_21), "guard 25", 16);
	Local_211[25 /*25*/].f_13 = 200;
	Local_211[25 /*25*/].f_14 = 15;
	Local_211[26 /*25*/].f_3 = { 3613.752f, 3728.867f, 27.6917f };
	Local_211[26 /*25*/].f_12 = 151.6589f;
	Local_211[26 /*25*/].f_9 = { 3627.78f, 3738.47f, 27.69f };
	Local_211[26 /*25*/].f_1 = joaat("s_m_y_marine_03");
	Local_211[26 /*25*/].f_20 = joaat("weapon_carbinerifle");
	StringCopy(&(Local_211[26 /*25*/].f_21), "guard 26", 16);
	Local_211[26 /*25*/].f_13 = 200;
	Local_211[26 /*25*/].f_14 = 10;
	Local_211[27 /*25*/].f_3 = { 3611.393f, 3725.018f, 28.6908f };
	Local_211[27 /*25*/].f_12 = 151.6589f;
	Local_211[27 /*25*/].f_9 = { 3611.393f, 3725.018f, 28.6908f };
	Local_211[27 /*25*/].f_1 = joaat("s_m_y_marine_03");
	Local_211[27 /*25*/].f_20 = joaat("weapon_carbinerifle");
	StringCopy(&(Local_211[27 /*25*/].f_21), "guard 27", 16);
	Local_211[27 /*25*/].f_13 = 200;
	Local_211[27 /*25*/].f_14 = 15;
	Local_211[27 /*25*/].f_16 = 1;
	Local_211[28 /*25*/].f_3 = { 3619.672f, 3728.579f, 27.6917f };
	Local_211[28 /*25*/].f_12 = 151.6589f;
	Local_211[28 /*25*/].f_9 = { 3619.672f, 3728.579f, 27.6917f };
	Local_211[28 /*25*/].f_1 = joaat("s_m_y_marine_03");
	Local_211[28 /*25*/].f_20 = joaat("weapon_pistol");
	StringCopy(&(Local_211[28 /*25*/].f_21), "guard 28", 16);
	Local_211[28 /*25*/].f_13 = 200;
	Local_211[28 /*25*/].f_14 = 10;
	Local_211[29 /*25*/].f_3 = { 3617.954f, 3737.765f, 27.6917f };
	Local_211[29 /*25*/].f_12 = 151.6589f;
	Local_211[29 /*25*/].f_9 = { 3617.954f, 3737.765f, 27.6917f };
	Local_211[29 /*25*/].f_1 = joaat("s_m_y_marine_03");
	Local_211[29 /*25*/].f_20 = joaat("weapon_carbinerifle");
	StringCopy(&(Local_211[29 /*25*/].f_21), "guard 29", 16);
	Local_211[29 /*25*/].f_13 = 200;
	Local_211[29 /*25*/].f_14 = 15;
	Local_211[30 /*25*/].f_3 = { 3618.331f, 3727.078f, 27.6917f };
	Local_211[30 /*25*/].f_12 = 151.6589f;
	Local_211[30 /*25*/].f_9 = { 3618.331f, 3727.078f, 27.6917f };
	Local_211[30 /*25*/].f_1 = joaat("s_m_y_marine_03");
	Local_211[30 /*25*/].f_20 = joaat("weapon_carbinerifle");
	StringCopy(&(Local_211[30 /*25*/].f_21), "guard 30", 16);
	Local_211[30 /*25*/].f_13 = 200;
	Local_211[30 /*25*/].f_14 = 10;
	Local_1614[0 /*25*/].f_1 = joaat("cs_paper");
	Local_1614[0 /*25*/].f_3 = { 3620.25f, 3750.694f, 27.6897f };
	Local_1614[0 /*25*/].f_12 = 332.3232f;
	Local_1614[0 /*25*/].f_9 = { 3620.25f, 3750.694f, 27.6897f };
	Local_1614[0 /*25*/].f_1 = joaat("s_m_y_marine_03");
	Local_1614[0 /*25*/].f_20 = joaat("weapon_pistol");
	StringCopy(&(Local_1614[0 /*25*/].f_21), "guard2 - 0", 16);
	Local_1614[0 /*25*/].f_13 = 200;
	Local_1614[0 /*25*/].f_14 = 10;
	Local_1614[1 /*25*/].f_1 = joaat("s_m_y_marine_02");
	Local_1614[1 /*25*/].f_3 = { 3622.858f, 3753.479f, 27.5157f };
	Local_1614[1 /*25*/].f_12 = 331.1759f;
	Local_1614[1 /*25*/].f_9 = { 3622.858f, 3753.479f, 27.5157f };
	Local_1614[1 /*25*/].f_1 = joaat("s_m_y_marine_03");
	Local_1614[1 /*25*/].f_20 = joaat("weapon_assaultrifle");
	StringCopy(&(Local_1614[1 /*25*/].f_21), "guard2 1", 16);
	Local_1614[1 /*25*/].f_13 = 200;
	Local_1614[1 /*25*/].f_14 = 10;
	Local_1614[2 /*25*/].f_1 = joaat("s_m_y_marine_02");
	Local_1614[2 /*25*/].f_3 = { 3625.547f, 3752.973f, 27.5157f };
	Local_1614[2 /*25*/].f_12 = 351.0864f;
	Local_1614[2 /*25*/].f_9 = { 3625.547f, 3752.973f, 27.5157f };
	Local_1614[2 /*25*/].f_1 = joaat("s_m_y_marine_03");
	Local_1614[2 /*25*/].f_20 = joaat("weapon_pistol");
	StringCopy(&(Local_1614[2 /*25*/].f_21), "guard2 2", 16);
	Local_1614[2 /*25*/].f_13 = 200;
	Local_1614[2 /*25*/].f_14 = 10;
	Local_1614[3 /*25*/].f_1 = joaat("s_m_y_marine_02");
	Local_1614[3 /*25*/].f_3 = { 3628.538f, 3750.787f, 27.5157f };
	Local_1614[3 /*25*/].f_12 = 344.9522f;
	Local_1614[3 /*25*/].f_9 = { 3628.538f, 3750.787f, 27.5157f };
	Local_1614[3 /*25*/].f_1 = joaat("s_m_y_marine_03");
	Local_1614[3 /*25*/].f_20 = joaat("weapon_carbinerifle");
	StringCopy(&(Local_1614[3 /*25*/].f_21), "guard2 3", 16);
	Local_1614[3 /*25*/].f_13 = 200;
	Local_1614[3 /*25*/].f_14 = 10;
	Local_2464[0 /*15*/].f_1 = joaat("barracks");
	Local_2464[0 /*15*/].f_3 = { 3615.032f, 3799.156f, 28.5405f };
	Local_2464[0 /*15*/].f_6 = 212.1782f;
	Local_2464[0 /*15*/].f_13 = 1;
	Local_2464[1 /*15*/].f_1 = joaat("crusader");
	Local_2464[1 /*15*/].f_3 = { 3600.77f, 3803.582f, 28.7849f };
	Local_2464[1 /*15*/].f_6 = 247.7738f;
	Local_2464[1 /*15*/].f_13 = 2;
	Local_2464[2 /*15*/].f_1 = joaat("crusader");
	Local_2464[2 /*15*/].f_3 = { 3587.535f, 3809.01f, 29.0764f };
	Local_2464[2 /*15*/].f_6 = 250.22f;
	Local_2464[2 /*15*/].f_13 = 3;
	Local_2510.f_3 = { 1756.732f, 3271.893f, 40.2172f };
	Local_2510.f_6 = 16.1635f;
	Local_2510.f_1 = joaat("hauler");
	Local_2510.f_13 = 10;
	Local_2525.f_3 = { 1756.732f, 3271.893f, 45.2172f };
	Local_2525.f_6 = 16.1635f;
	Local_2525.f_1 = joaat("trflat");
	Local_2525.f_13 = 11;
	Local_2555.f_1 = joaat("hauler");
	Local_2555.f_13 = 12;
	Local_2030.f_2 = joaat("p_pallet_02a_s");
	Local_2030.f_3 = { 3638.326f, 3771.813f, 38.93f };
	Local_2030.f_18 = 0f;
	Local_1982.f_2 = joaat("prop_biotech_store");
	Local_1982.f_3 = { 3638.326f, 3771.813f, 35.93f };
	Local_1982.f_18 = 340f;
	Local_2585.f_1 = joaat("cargobob2");
	Local_2006.f_2 = joaat("prop_ld_container");
	Local_2006.f_3 = { 3638.326f, 3771.813f, 28.93f };
	Local_2006.f_18 = 340f;
	Local_2440.f_2 = joaat("prop_ld_cont_light_01");
	Local_2440.f_3 = { 3638.326f, 3771.813f, 28.93f };
	Local_2440.f_18 = 340f;
	Local_2416.f_3 = { 3592.6f, 3714f, 31.8f };
	Local_2416.f_2 = joaat("prop_ld_test_01");
	Local_1163[0 /*25*/].f_3 = { 3588.2f, 3715.077f, 28.98f };
	Local_1163[0 /*25*/].f_12 = -97.68f;
	Local_1163[0 /*25*/].f_1 = joaat("a_c_rhesus");
	Local_1163[0 /*25*/].f_20 = joaat("weapon_animal");
	Local_1163[0 /*25*/].f_13 = 110;
	StringCopy(&(Local_1163[0 /*25*/].f_21), "monkey 0", 16);
	Local_1163[1 /*25*/].f_3 = { 3588.2f, 3715.077f, 30.495f };
	Local_1163[1 /*25*/].f_12 = -85.68f;
	Local_1163[1 /*25*/].f_1 = joaat("a_c_rhesus");
	Local_1163[1 /*25*/].f_20 = joaat("weapon_animal");
	Local_1163[1 /*25*/].f_13 = 110;
	StringCopy(&(Local_1163[1 /*25*/].f_21), "monkey 1", 16);
	Local_1163[2 /*25*/].f_3 = { 3588.15f, 3713.727f, 30.495f };
	Local_1163[2 /*25*/].f_12 = -97.68f;
	Local_1163[2 /*25*/].f_1 = joaat("a_c_rhesus");
	Local_1163[2 /*25*/].f_20 = joaat("weapon_animal");
	Local_1163[2 /*25*/].f_13 = 110;
	StringCopy(&(Local_1163[2 /*25*/].f_21), "monkey 2", 16);
	Local_1163[3 /*25*/].f_3 = { 3587.9f, 3713.727f, 28.98f };
	Local_1163[3 /*25*/].f_12 = -97.68f;
	Local_1163[3 /*25*/].f_1 = joaat("a_c_rhesus");
	Local_1163[3 /*25*/].f_20 = joaat("weapon_animal");
	Local_1163[3 /*25*/].f_13 = 110;
	StringCopy(&(Local_1163[3 /*25*/].f_21), "monkey 3", 16);
	Local_1163[4 /*25*/].f_3 = { 3596.01f, 3710.63f, 28.98f };
	Local_1163[4 /*25*/].f_12 = 97.68f;
	Local_1163[4 /*25*/].f_1 = joaat("a_c_rhesus");
	Local_1163[4 /*25*/].f_20 = joaat("weapon_animal");
	Local_1163[4 /*25*/].f_13 = 110;
	StringCopy(&(Local_1163[4 /*25*/].f_21), "monkey 4", 16);
	Local_1163[5 /*25*/].f_3 = { 3595.91f, 3710.58f, 30.495f };
	Local_1163[5 /*25*/].f_12 = 85.68f;
	Local_1163[5 /*25*/].f_1 = joaat("a_c_rhesus");
	Local_1163[5 /*25*/].f_20 = joaat("weapon_animal");
	Local_1163[5 /*25*/].f_13 = 110;
	StringCopy(&(Local_1163[5 /*25*/].f_21), "monkey 5", 16);
	Local_1163[6 /*25*/].f_3 = { 3597.26f, 3716.73f, 30.495f };
	Local_1163[6 /*25*/].f_12 = 97.68f;
	Local_1163[6 /*25*/].f_1 = joaat("a_c_rhesus");
	Local_1163[6 /*25*/].f_20 = joaat("weapon_animal");
	Local_1163[6 /*25*/].f_13 = 110;
	StringCopy(&(Local_1163[6 /*25*/].f_21), "monkey 6", 16);
	Local_1163[7 /*25*/].f_3 = { 3597.26f, 3716.73f, 28.98f };
	Local_1163[7 /*25*/].f_12 = 85.68f;
	Local_1163[7 /*25*/].f_1 = joaat("a_c_rhesus");
	Local_1163[7 /*25*/].f_20 = joaat("weapon_animal");
	Local_1163[7 /*25*/].f_13 = 110;
	StringCopy(&(Local_1163[7 /*25*/].f_21), "monkey 7", 16);
	Local_1163[8 /*25*/].f_3 = { 3588.78f, 3717.47f, 28.98f };
	Local_1163[8 /*25*/].f_12 = -97.68f;
	Local_1163[8 /*25*/].f_1 = joaat("a_c_rhesus");
	Local_1163[8 /*25*/].f_20 = joaat("weapon_animal");
	Local_1163[8 /*25*/].f_13 = 110;
	StringCopy(&(Local_1163[8 /*25*/].f_21), "monkey 8", 16);
	Local_1163[9 /*25*/].f_3 = { 3591.45f, 3725.02f, 28.98f };
	Local_1163[9 /*25*/].f_12 = -109f;
	Local_1163[9 /*25*/].f_1 = joaat("a_c_rhesus");
	Local_1163[9 /*25*/].f_20 = joaat("weapon_animal");
	Local_1163[9 /*25*/].f_13 = 110;
	StringCopy(&(Local_1163[9 /*25*/].f_21), "monkey 9", 16);
	Local_1163[10 /*25*/].f_3 = { 3593f, 3727.17f, 28.98f };
	Local_1163[10 /*25*/].f_12 = -133f;
	Local_1163[10 /*25*/].f_1 = joaat("a_c_rhesus");
	Local_1163[10 /*25*/].f_20 = joaat("weapon_animal");
	Local_1163[10 /*25*/].f_13 = 110;
	StringCopy(&(Local_1163[10 /*25*/].f_21), "monkey 10", 16);
	Local_1163[11 /*25*/].f_3 = { 3593f, 3727.17f, 30.53f };
	Local_1163[11 /*25*/].f_12 = -133f;
	Local_1163[11 /*25*/].f_1 = joaat("a_c_rhesus");
	Local_1163[11 /*25*/].f_20 = joaat("weapon_animal");
	Local_1163[11 /*25*/].f_13 = 110;
	StringCopy(&(Local_1163[11 /*25*/].f_21), "monkey 11", 16);
	Local_1163[12 /*25*/].f_3 = { 3593.7f, 3728.22f, 28.98f };
	Local_1163[12 /*25*/].f_12 = -133f;
	Local_1163[12 /*25*/].f_1 = joaat("a_c_rhesus");
	Local_1163[12 /*25*/].f_20 = joaat("weapon_animal");
	Local_1163[12 /*25*/].f_13 = 110;
	StringCopy(&(Local_1163[12 /*25*/].f_21), "monkey 12", 16);
	Local_1163[13 /*25*/].f_3 = { 3596.72f, 3721.04f, 28.98f };
	Local_1163[13 /*25*/].f_12 = -41f;
	Local_1163[13 /*25*/].f_1 = joaat("a_c_rhesus");
	Local_1163[13 /*25*/].f_20 = joaat("weapon_animal");
	Local_1163[13 /*25*/].f_13 = 110;
	StringCopy(&(Local_1163[13 /*25*/].f_21), "monkey 13", 16);
	Local_1163[14 /*25*/].f_3 = { 3596.82f, 3721.09f, 30.495f };
	Local_1163[14 /*25*/].f_12 = -41f;
	Local_1163[14 /*25*/].f_1 = joaat("a_c_rhesus");
	Local_1163[14 /*25*/].f_20 = joaat("weapon_animal");
	Local_1163[14 /*25*/].f_13 = 110;
	StringCopy(&(Local_1163[14 /*25*/].f_21), "monkey 14", 16);
	Local_1163[15 /*25*/].f_3 = { 3597.77f, 3720.19f, 28.98f };
	Local_1163[15 /*25*/].f_12 = -18f;
	Local_1163[15 /*25*/].f_1 = joaat("a_c_rhesus");
	Local_1163[15 /*25*/].f_20 = joaat("weapon_animal");
	Local_1163[15 /*25*/].f_13 = 110;
	StringCopy(&(Local_1163[15 /*25*/].f_21), "monkey 15", 16);
	Local_1163[16 /*25*/].f_3 = { 3588.23f, 3710.2f, 28.98f };
	Local_1163[16 /*25*/].f_12 = -96f;
	Local_1163[16 /*25*/].f_1 = joaat("a_c_rhesus");
	Local_1163[16 /*25*/].f_20 = joaat("weapon_animal");
	Local_1163[16 /*25*/].f_13 = 110;
	StringCopy(&(Local_1163[16 /*25*/].f_21), "monkey 16", 16);
	Local_2344.f_3 = { 3602f, 3768.5f, 33f };
	Local_2344.f_2 = joaat("prop_ld_contain_dl2");
	Local_2368.f_3 = { 3602f, 3768.5f, 35f };
	Local_2368.f_2 = joaat("prop_ld_contain_dr2");
	Local_2392.f_2 = joaat("prop_fib_badge");
	Local_2392.f_3 = { 3622.69f, 3749.85f, 37f };
	Local_3074.f_1 = 1015;
	Local_3074.f_2 = { 3622.203f, 3749.215f, 27.6901f };
	Local_3074.f_5 = { 0f, 0f, -1f };
	Local_3074.f_8 = { GlobalFunc_107(0f, 1f, 0f) };
	Local_3074.f_11 = 0.3f;
	Local_3074.f_12 = 0.3f;
	Local_3074.f_13 = 1f;
	Local_3074.f_14 = -1f;
	Local_3074.f_15 = 0.3f;
	Local_3074.f_17 = 0;
	Local_2540.f_1 = GlobalFunc_4931(2, 0);
	Local_2540.f_3 = { 233.0237f, 3324.817f, 39.9775f };
	Local_2540.f_6 = 159.5922f;
	Local_2540.f_13 = 5;
	Local_1715[0 /*25*/].f_1 = joaat("g_m_y_pologoon_01");
	Local_1715[0 /*25*/].f_3 = { 1382.682f, 1142.086f, 113.3342f };
	Local_1715[0 /*25*/].f_12 = 74.6425f;
	Local_1715[0 /*25*/].f_13 = 200;
	Local_1715[0 /*25*/].f_20 = joaat("weapon_pistol");
	StringCopy(&(Local_1715[0 /*25*/].f_21), "mad guard 0", 16);
	Local_1715[1 /*25*/].f_1 = joaat("g_m_y_pologoon_01");
	Local_1715[1 /*25*/].f_3 = { 1384.978f, 1153.278f, 113.3342f };
	Local_1715[1 /*25*/].f_12 = 104.882f;
	Local_1715[1 /*25*/].f_13 = 200;
	Local_1715[1 /*25*/].f_20 = joaat("weapon_pistol");
	StringCopy(&(Local_1715[1 /*25*/].f_21), "mad guard 1", 16);
	Local_1589.f_1 = GlobalFunc_4946(40);
	Local_1589.f_13 = 200;
	Local_1589.f_20 = joaat("weapon_unarmed");
	iVar0 = 0;
	while (iVar0 <= (iLocal_3352 - 1))
	{
		iLocal_3352[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_211 - 1))
	{
		iLocal_48[iVar0] = 0;
		Local_211[iVar0 /*25*/].f_18 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 7)
		{
			Local_2617[iVar0 /*33*/][iVar1 /*4*/].f_2 = 0f;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		iVar1 = 0;
		while (iVar1 <= 6)
		{
			Local_2816[iVar0 /*29*/][iVar1 /*4*/].f_2 = 0f;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_987 - 1))
	{
		Local_987[iVar0 /*25*/].f_19 = 0;
		Local_987[iVar0 /*25*/].f_18 = 0;
		iLocal_3324[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_135 - 1))
	{
		Local_135[iVar0 /*25*/].f_19 = 0;
		Local_135[iVar0 /*25*/].f_18 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_1163 - 1))
	{
		iLocal_3262[iVar0] = 0;
		Local_1163[iVar0 /*25*/].f_18 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_3111 - 1))
	{
		iLocal_3111[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_3107 - 1))
	{
		iLocal_3107[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_3204 - 1))
	{
		iLocal_3204[iVar0] = AUDIO::GET_SOUND_ID();
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_1715 - 1))
	{
		iLocal_3348[iVar0] = 0;
		Local_1715[iVar0 /*25*/].f_18 = 0;
		iVar0++;
	}
}

void func_957()//Position - 0x93169
{
	PED::ADD_RELATIONSHIP_GROUP("players group", &iLocal_7743);
	PED::ADD_RELATIONSHIP_GROUP("enemy group", &iLocal_7744);
	PED::ADD_RELATIONSHIP_GROUP("scientist_group", &uLocal_7745);
	PED::ADD_RELATIONSHIP_GROUP("security_guard_2", &iLocal_7746);
}




















void func_977()//Position - 0x987BF
{
	int iVar0;
	
	HUD::CLEAR_HELP(1);
	GlobalFunc_4935();
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	CAM::SET_WIDESCREEN_BORDERS(0, 0);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	PAD::_RESET_INPUT_MAPPING_SCHEME();
	GlobalFunc_7632(0);
	GlobalFunc_1998(0);
	GlobalFunc_563(0);
	GlobalFunc_699();
	GlobalFunc_7621(83, 0, 0, 1, 0);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	GlobalFunc_5661(17, 1);
	TASK::SET_SCENARIO_GROUP_ENABLED("ALAMO_PLANES", 1);
	TASK::SET_SCENARIO_GROUP_ENABLED("LOST_BIKERS", 1);
	Global_86824 = 0;
	MISC::SET_FAKE_WANTED_LEVEL(0);
	PLAYER::SET_MAX_WANTED_LEVEL(6);
	PED::SET_CREATE_RANDOM_COPS(1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), 0);
		if (!ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
		}
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
		PED::SET_PED_MAX_TIME_UNDERWATER(PLAYER::PLAYER_PED_ID(), -1f);
		PED::SET_PED_DIES_IN_WATER(PLAYER::PLAYER_PED_ID(), 1);
		PED::SET_ENABLE_SCUBA(PLAYER::PLAYER_PED_ID(), 0);
		PED::SET_PED_CAN_HEAD_IK(PLAYER::PLAYER_PED_ID(), 1);
		PED::RESET_PED_IN_VEHICLE_CONTEXT(PLAYER::PLAYER_PED_ID());
	}
	if (iLocal_3684 != 0)
	{
		if (INTERIOR::IS_INTERIOR_READY(iLocal_3684))
		{
			INTERIOR::UNPIN_INTERIOR(iLocal_3684);
			iLocal_3684 = 0;
		}
	}
	GlobalFunc_5652(&Local_3049, 1, 0);
	AUDIO::SET_AUDIO_SCRIPT_CLEANUP_TIME(5000);
	iVar0 = 0;
	while (iVar0 <= (Local_2054 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_2054[iVar0 /*24*/]))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(Local_2054[iVar0 /*24*/]))
			{
				ENTITY::DETACH_ENTITY(Local_2054[iVar0 /*24*/], 1, 1);
			}
		}
		iVar0++;
	}
	func_10();
	func_979();
	AUDIO::TRIGGER_MUSIC_EVENT("FBI5A_MISSION_FAIL");
	AUDIO::STOP_STREAM();
	AUDIO::STOP_ALARM("FIB_05_BIOTECH_LAB_ALARMS", 0);
	AUDIO::RELEASE_MISSION_AUDIO_BANK();
	AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	func_978();
	iVar0 = 0;
	while (iVar0 < iLocal_3626)
	{
		TASK::REMOVE_COVER_POINT(iLocal_3626[iVar0]);
		iVar0++;
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_978()//Position - 0x98994
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_3292 - 1))
	{
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_3292[iVar0]))
		{
			OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_3292[iVar0]);
		}
		iVar0++;
	}
}

void func_979()//Position - 0x989CB
{
	AUDIO::CANCEL_MUSIC_EVENT("CUT_PIPE_START");
	AUDIO::CANCEL_MUSIC_EVENT("CUT_PIPE_END");
	AUDIO::CANCEL_MUSIC_EVENT("SWIM_UP");
	AUDIO::CANCEL_MUSIC_EVENT("LIFT_EXIT");
	AUDIO::CANCEL_MUSIC_EVENT("BLUE_DOOR");
	AUDIO::CANCEL_MUSIC_EVENT("HELI_OS");
	AUDIO::TRIGGER_MUSIC_EVENT("debug_stop_oneshot");
}








