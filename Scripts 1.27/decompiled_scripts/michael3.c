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
	int iLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	char[] cLocal_54[8] = 0;
	var uLocal_55 = 0;
	char[] cLocal_56[8] = 0;
	char[] cLocal_57[8] = 0;
	char* sLocal_58 = NULL;
	char[] cLocal_59[8] = 0;
	char[] cLocal_60[8] = 0;
	char[] cLocal_61[8] = 0;
	char[] cLocal_62[8] = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	char cLocal_76[16] = "";
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	char cLocal_80[32] = "";
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	struct<3> Local_88 = { 0, 0, 0 } ;
	struct<3> Local_91 = { 0, 0, 0 } ;
	struct<3> Local_94 = { 0, 0, 0 } ;
	struct<3> Local_97 = { 0, 0, 0 } ;
	int iLocal_100 = 0;
	int iLocal_101[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_108 = 0;
	int iLocal_109[3] = { 0, 0, 0 };
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	var uLocal_115 = 16;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	int iLocal_280 = 0;
	var uLocal_281 = 0;
	int iLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 3;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 1092616192;
	var uLocal_291 = 1101004800;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 3;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	var uLocal_317 = 0;
	struct<25> Local_318[57];
	struct<7> Local_1744[17];
	struct<2> Local_1864[5];
	struct<10> Local_1875[3];
	var uLocal_1906[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<8> Local_1920[16];
	var uLocal_2049 = 30;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
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
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = 0;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 0;
	var uLocal_2161 = 0;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
	var uLocal_2165 = 0;
	var uLocal_2166 = 0;
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
	var uLocal_2169 = 0;
	var uLocal_2170 = 0;
	var uLocal_2171 = 0;
	var uLocal_2172 = 0;
	var uLocal_2173 = 0;
	var uLocal_2174 = 0;
	var uLocal_2175 = 0;
	var uLocal_2176 = 0;
	var uLocal_2177 = 0;
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
	var uLocal_2199 = 0;
	var uLocal_2200 = 10;
	var uLocal_2201 = 0;
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
	var uLocal_2223 = 0;
	var uLocal_2224 = 0;
	var uLocal_2225 = 0;
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
	var uLocal_2247 = 0;
	var uLocal_2248 = 0;
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
	var uLocal_2251 = 10;
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
	var uLocal_2271 = 0;
	var uLocal_2272 = 0;
	var uLocal_2273 = 0;
	var uLocal_2274 = 0;
	var uLocal_2275 = 0;
	var uLocal_2276 = 0;
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 0;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
	var uLocal_2293 = 0;
	var uLocal_2294 = 0;
	var uLocal_2295 = 0;
	var uLocal_2296 = 0;
	var uLocal_2297 = 0;
	var uLocal_2298 = 0;
	var uLocal_2299 = 0;
	var uLocal_2300 = 0;
	var uLocal_2301 = 0;
	var uLocal_2302 = 0;
	var uLocal_2303 = 0;
	var uLocal_2304 = 0;
	var uLocal_2305 = 0;
	var uLocal_2306 = 0;
	var uLocal_2307 = 0;
	var uLocal_2308 = 0;
	var uLocal_2309 = 0;
	var uLocal_2310 = 0;
	var uLocal_2311 = 0;
	var uLocal_2312 = 0;
	var uLocal_2313 = 0;
	var uLocal_2314 = 0;
	var uLocal_2315 = 0;
	var uLocal_2316 = 0;
	var uLocal_2317 = 0;
	var uLocal_2318 = 0;
	var uLocal_2319 = 0;
	var uLocal_2320 = 0;
	var uLocal_2321 = 0;
	var uLocal_2322 = 20;
	var uLocal_2323 = 0;
	var uLocal_2324 = 0;
	var uLocal_2325 = 0;
	var uLocal_2326 = 0;
	var uLocal_2327 = 0;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = 0;
	var uLocal_2331 = 0;
	var uLocal_2332 = 0;
	var uLocal_2333 = 0;
	var uLocal_2334 = 0;
	var uLocal_2335 = 0;
	var uLocal_2336 = 0;
	var uLocal_2337 = 0;
	var uLocal_2338 = 0;
	var uLocal_2339 = 0;
	var uLocal_2340 = 0;
	var uLocal_2341 = 0;
	var uLocal_2342 = 0;
	var uLocal_2343 = 0;
	var uLocal_2344 = 0;
	var uLocal_2345 = 0;
	var uLocal_2346 = 0;
	var uLocal_2347 = 0;
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
	var uLocal_2368 = 0;
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
	var uLocal_2423 = 20;
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
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	var uLocal_2467 = 0;
	var uLocal_2468 = 0;
	var uLocal_2469 = 0;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 0;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
	var uLocal_2475 = 0;
	var uLocal_2476 = 0;
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = 0;
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = 0;
	var uLocal_2498 = 0;
	var uLocal_2499 = 0;
	var uLocal_2500 = 0;
	var uLocal_2501 = 0;
	var uLocal_2502 = 0;
	var uLocal_2503 = 0;
	var uLocal_2504 = 0;
	var uLocal_2505 = 0;
	var uLocal_2506 = 0;
	var uLocal_2507 = 0;
	var uLocal_2508 = 0;
	var uLocal_2509 = 0;
	var uLocal_2510 = 0;
	var uLocal_2511 = 0;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	var uLocal_2518 = 0;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = 30;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	var uLocal_2530 = 0;
	var uLocal_2531 = 0;
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	var uLocal_2542 = 0;
	var uLocal_2543 = 0;
	var uLocal_2544 = 0;
	var uLocal_2545 = 0;
	var uLocal_2546 = 0;
	var uLocal_2547 = 0;
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	var uLocal_2550 = 0;
	var uLocal_2551 = 0;
	var uLocal_2552 = 0;
	var uLocal_2553 = 0;
	var uLocal_2554 = 0;
	var uLocal_2555 = 0;
	var uLocal_2556 = 0;
	var uLocal_2557 = 0;
	var uLocal_2558 = 0;
	var uLocal_2559 = 0;
	var uLocal_2560 = 0;
	var uLocal_2561 = 0;
	var uLocal_2562 = 0;
	var uLocal_2563 = 0;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 0;
	var uLocal_2567 = 0;
	var uLocal_2568 = 0;
	var uLocal_2569 = 0;
	var uLocal_2570 = 0;
	var uLocal_2571 = 0;
	var uLocal_2572 = 0;
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
	var uLocal_2585 = 0;
	var uLocal_2586 = 0;
	var uLocal_2587 = 0;
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
	var uLocal_2600 = 0;
	var uLocal_2601 = 0;
	var uLocal_2602 = 0;
	var uLocal_2603 = 0;
	var uLocal_2604 = 0;
	var uLocal_2605 = 0;
	var uLocal_2606 = 0;
	var uLocal_2607 = 0;
	var uLocal_2608 = 0;
	var uLocal_2609 = 0;
	var uLocal_2610 = 0;
	var uLocal_2611 = 0;
	var uLocal_2612 = 0;
	var uLocal_2613 = 0;
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
	var uLocal_2627 = 0;
	var uLocal_2628 = 0;
	var uLocal_2629 = 0;
	var uLocal_2630 = 0;
	var uLocal_2631 = 0;
	var uLocal_2632 = 0;
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
	var uLocal_2705 = 5;
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
	var uLocal_2736 = 7;
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
	var uLocal_2786 = 5;
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
	var uLocal_2797 = 0;
	var uLocal_2798 = 0;
	var uLocal_2799 = 0;
	var uLocal_2800 = 0;
	var uLocal_2801 = 0;
	var uLocal_2802 = 0;
	var uLocal_2803 = 0;
	var uLocal_2804 = 0;
	var uLocal_2805 = 0;
	var uLocal_2806 = 0;
	var uLocal_2807 = 0;
	var uLocal_2808 = 0;
	var uLocal_2809 = 0;
	var uLocal_2810 = 0;
	var uLocal_2811 = 0;
	var uLocal_2812 = 3;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 0;
	var uLocal_2818 = 0;
	var uLocal_2819 = 0;
	var uLocal_2820 = 0;
	var uLocal_2821 = 0;
	var uLocal_2822 = 0;
	var uLocal_2823 = 0;
	var uLocal_2824 = 0;
	var uLocal_2825 = 0;
	var uLocal_2826 = 0;
	var uLocal_2827 = 0;
	var uLocal_2828 = 15;
	var uLocal_2829 = 0;
	var uLocal_2830 = 0;
	var uLocal_2831 = 0;
	var uLocal_2832 = 0;
	var uLocal_2833 = 0;
	var uLocal_2834 = 0;
	var uLocal_2835 = 0;
	var uLocal_2836 = 0;
	var uLocal_2837 = 0;
	var uLocal_2838 = 0;
	var uLocal_2839 = 0;
	var uLocal_2840 = 0;
	var uLocal_2841 = 0;
	var uLocal_2842 = 0;
	var uLocal_2843 = 0;
	var uLocal_2844 = 0;
	var uLocal_2845 = 0;
	var uLocal_2846 = 0;
	var uLocal_2847 = 0;
	var uLocal_2848 = 0;
	var uLocal_2849 = 0;
	var uLocal_2850 = 0;
	var uLocal_2851 = 0;
	var uLocal_2852 = 0;
	var uLocal_2853 = 0;
	var uLocal_2854 = 0;
	var uLocal_2855 = 0;
	var uLocal_2856 = 0;
	var uLocal_2857 = 0;
	var uLocal_2858 = 0;
	var uLocal_2859 = 0;
	var uLocal_2860 = 0;
	var uLocal_2861 = 0;
	var uLocal_2862 = 0;
	var uLocal_2863 = 0;
	var uLocal_2864 = 0;
	var uLocal_2865 = 0;
	var uLocal_2866 = 0;
	var uLocal_2867 = 0;
	var uLocal_2868 = 0;
	var uLocal_2869 = 0;
	var uLocal_2870 = 0;
	var uLocal_2871 = 0;
	var uLocal_2872 = 0;
	var uLocal_2873 = 0;
	var uLocal_2874 = 0;
	var uLocal_2875 = 0;
	var uLocal_2876 = 0;
	var uLocal_2877 = 0;
	var uLocal_2878 = 0;
	var uLocal_2879 = 0;
	var uLocal_2880 = 0;
	var uLocal_2881 = 0;
	var uLocal_2882 = 0;
	var uLocal_2883 = 0;
	var uLocal_2884 = 0;
	var uLocal_2885 = 0;
	var uLocal_2886 = 0;
	var uLocal_2887 = 0;
	var uLocal_2888 = 0;
	var uLocal_2889 = 0;
	var uLocal_2890 = 0;
	var uLocal_2891 = 0;
	var uLocal_2892 = 0;
	var uLocal_2893 = 0;
	var uLocal_2894 = 0;
	var uLocal_2895 = 0;
	var uLocal_2896 = 0;
	var uLocal_2897 = 0;
	var uLocal_2898 = 0;
	var uLocal_2899 = 0;
	var uLocal_2900 = 0;
	var uLocal_2901 = 0;
	var uLocal_2902 = 0;
	var uLocal_2903 = 0;
	var uLocal_2904 = 0;
	var uLocal_2905 = 0;
	var uLocal_2906 = 0;
	var uLocal_2907 = 0;
	var uLocal_2908 = 0;
	var uLocal_2909 = 0;
	var uLocal_2910 = 0;
	var uLocal_2911 = 0;
	var uLocal_2912 = 0;
	var uLocal_2913 = 0;
	var uLocal_2914 = 0;
	var uLocal_2915 = 0;
	var uLocal_2916 = 0;
	var uLocal_2917 = 0;
	var uLocal_2918 = 0;
	var uLocal_2919 = 0;
	var uLocal_2920 = 0;
	var uLocal_2921 = 0;
	var uLocal_2922 = 0;
	var uLocal_2923 = 10;
	var uLocal_2924 = 0;
	var uLocal_2925 = 0;
	var uLocal_2926 = 0;
	var uLocal_2927 = 0;
	var uLocal_2928 = 0;
	var uLocal_2929 = 0;
	var uLocal_2930 = 0;
	var uLocal_2931 = 0;
	var uLocal_2932 = 0;
	var uLocal_2933 = 0;
	var uLocal_2934 = 0;
	var uLocal_2935 = 0;
	var uLocal_2936 = 0;
	var uLocal_2937 = 0;
	var uLocal_2938 = 0;
	var uLocal_2939 = 0;
	var uLocal_2940 = 0;
	var uLocal_2941 = 0;
	var uLocal_2942 = 0;
	var uLocal_2943 = 0;
	var uLocal_2944 = 0;
	var uLocal_2945 = 0;
	var uLocal_2946 = 0;
	var uLocal_2947 = 0;
	var uLocal_2948 = 0;
	var uLocal_2949 = 0;
	var uLocal_2950 = 0;
	var uLocal_2951 = 0;
	var uLocal_2952 = 0;
	var uLocal_2953 = 0;
	var uLocal_2954 = 0;
	var uLocal_2955 = 0;
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
	var uLocal_2966 = 0;
	var uLocal_2967 = 0;
	var uLocal_2968 = 0;
	var uLocal_2969 = 0;
	var uLocal_2970 = 0;
	var uLocal_2971 = 0;
	var uLocal_2972 = 0;
	var uLocal_2973 = 0;
	var uLocal_2974 = 5;
	var uLocal_2975 = 0;
	var uLocal_2976 = 0;
	var uLocal_2977 = 0;
	var uLocal_2978 = 0;
	var uLocal_2979 = 0;
	var uLocal_2980 = 0;
	var uLocal_2981 = 0;
	var uLocal_2982 = 0;
	var uLocal_2983 = 0;
	var uLocal_2984 = 0;
	var uLocal_2985 = 0;
	var uLocal_2986 = 0;
	var uLocal_2987 = 0;
	var uLocal_2988 = 0;
	var uLocal_2989 = 0;
	var uLocal_2990 = 0;
	var uLocal_2991 = 0;
	var uLocal_2992 = 0;
	var uLocal_2993 = 0;
	var uLocal_2994 = 0;
	var uLocal_2995 = 0;
	var uLocal_2996 = 0;
	var uLocal_2997 = 0;
	var uLocal_2998 = 0;
	var uLocal_2999 = 0;
	var uLocal_3000 = 5;
	var uLocal_3001 = 0;
	var uLocal_3002 = 0;
	var uLocal_3003 = 0;
	var uLocal_3004 = 0;
	var uLocal_3005 = 0;
	var uLocal_3006 = 0;
	var uLocal_3007 = 0;
	var uLocal_3008 = 0;
	var uLocal_3009 = 0;
	var uLocal_3010 = 0;
	var uLocal_3011 = 0;
	var uLocal_3012 = 0;
	var uLocal_3013 = 0;
	var uLocal_3014 = 0;
	var uLocal_3015 = 0;
	var uLocal_3016 = 0;
	var uLocal_3017 = 0;
	var uLocal_3018 = 0;
	var uLocal_3019 = 0;
	var uLocal_3020 = 0;
	var uLocal_3021 = 0;
	var uLocal_3022 = 0;
	var uLocal_3023 = 0;
	var uLocal_3024 = 0;
	var uLocal_3025 = 0;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	int iLocal_3029 = 0;
	int iLocal_3030 = 0;
	int iLocal_3031 = 0;
	int iLocal_3032 = 0;
	int iLocal_3033 = 0;
	bool bLocal_3034 = 0;
	var uLocal_3035 = 0;
	int iLocal_3036 = 0;
	bool bLocal_3037 = 0;
	int iLocal_3038 = 4;
	var uLocal_3039 = 0;
	var uLocal_3040 = 0;
	var uLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 4;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = 0;
	var uLocal_3050 = 0;
	var uLocal_3051 = 4;
	var uLocal_3052 = 0;
	var uLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 4;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	var uLocal_3060 = 0;
	var uLocal_3061 = 0;
	var uLocal_3062 = 4;
	var uLocal_3063 = 0;
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
	var uLocal_3066 = 0;
	var uLocal_3067 = 4;
	var uLocal_3068 = 0;
	var uLocal_3069 = 0;
	var uLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 4;
	var uLocal_3073 = 0;
	var uLocal_3074 = 0;
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
	var uLocal_3077 = 0;
	var uLocal_3078 = 0;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 0;
	struct<21> Local_3082 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	float fLocal_3118 = 0f;
	int iLocal_3119 = 0;
	int iLocal_3120 = 0;
	struct<60> Local_3121[15];
	var uLocal_4022 = 0;
	var uLocal_4023 = 0;
	var uLocal_4024 = 0;
	int iLocal_4025 = 0;
	int iLocal_4026 = 0;
	int iLocal_4027 = 0;
	int iLocal_4028 = 0;
	int iLocal_4029 = 0;
	int iLocal_4030 = 15;
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
	int iLocal_4046 = 0;
	int iLocal_4047 = 0;
	var uLocal_4048 = 0;
	var uLocal_4049 = 0;
	int iLocal_4050 = 0;
	int iLocal_4051 = 0;
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
	int iLocal_4078 = 0;
	struct<4> Local_4079[6];
	struct<4> Local_4104 = { 0, 0, 0, 0 } ;
	struct<25> Local_4108[4];
	struct<25> Local_4209[4];
	struct<25> Local_4310[2];
	struct<25> Local_4361[4];
	struct<25> Local_4462[2];
	struct<25> Local_4513[6];
	struct<25> Local_4664[3];
	struct<25> Local_4740[2];
	struct<25> Local_4791[3];
	int iLocal_4867 = 0;
	var uLocal_4868 = 0;
	var uLocal_4869 = 0;
	var uLocal_4870 = 0;
	var uLocal_4871 = 0;
	var uLocal_4872 = 0;
	var uLocal_4873 = 0;
	var uLocal_4874 = 0;
	var uLocal_4875 = 0;
	var uLocal_4876 = 0;
	var uLocal_4877 = -1;
	var uLocal_4878 = 0;
	var uLocal_4879 = 0;
	var uLocal_4880 = 0;
	var uLocal_4881 = 0;
	var uLocal_4882 = 0;
	var uLocal_4883 = 0;
	var uLocal_4884 = 0;
	var uLocal_4885 = 0;
	var uLocal_4886 = 0;
	var uLocal_4887 = 0;
	var uLocal_4888 = 0;
	var uLocal_4889 = 0;
	var uLocal_4890 = 0;
	var uLocal_4891 = -1082130432;
	struct<25> Local_4892[5];
	int iLocal_5018 = 2;
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
	var uLocal_5029 = -1;
	var uLocal_5030 = 0;
	var uLocal_5031 = 0;
	var uLocal_5032 = 0;
	var uLocal_5033 = 0;
	var uLocal_5034 = 0;
	var uLocal_5035 = 0;
	var uLocal_5036 = 0;
	var uLocal_5037 = 0;
	var uLocal_5038 = 0;
	var uLocal_5039 = 0;
	var uLocal_5040 = 0;
	var uLocal_5041 = 0;
	var uLocal_5042 = 0;
	var uLocal_5043 = -1082130432;
	var uLocal_5044 = 0;
	var uLocal_5045 = 0;
	var uLocal_5046 = 0;
	var uLocal_5047 = 0;
	var uLocal_5048 = 0;
	var uLocal_5049 = 0;
	var uLocal_5050 = 0;
	var uLocal_5051 = 0;
	var uLocal_5052 = 0;
	var uLocal_5053 = 0;
	var uLocal_5054 = -1;
	var uLocal_5055 = 0;
	var uLocal_5056 = 0;
	var uLocal_5057 = 0;
	var uLocal_5058 = 0;
	var uLocal_5059 = 0;
	var uLocal_5060 = 0;
	var uLocal_5061 = 0;
	var uLocal_5062 = 0;
	var uLocal_5063 = 0;
	var uLocal_5064 = 0;
	var uLocal_5065 = 0;
	var uLocal_5066 = 0;
	var uLocal_5067 = 0;
	var uLocal_5068 = -1082130432;
	struct<25> Local_5069[3];
	struct<25> Local_5145[2];
	struct<25> Local_5196[2];
	int iLocal_5247 = 1;
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
	var uLocal_5258 = -1;
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
	var uLocal_5272 = -1082130432;
	struct<25> Local_5273[3];
	struct<25> Local_5349[3];
	struct<25> Local_5425[3];
	struct<25> Local_5501[2];
	struct<25> Local_5552[2];
	struct<25> Local_5603[2];
	struct<25> Local_5654[2];
	struct<25> Local_5705[4];
	int iLocal_5806 = 4;
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
	var uLocal_5817 = -1;
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
	var uLocal_5831 = -1082130432;
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
	var uLocal_5842 = -1;
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
	var uLocal_5856 = -1082130432;
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
	var uLocal_5867 = -1;
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
	var uLocal_5881 = -1082130432;
	var uLocal_5882 = 0;
	var uLocal_5883 = 0;
	var uLocal_5884 = 0;
	var uLocal_5885 = 0;
	var uLocal_5886 = 0;
	var uLocal_5887 = 0;
	var uLocal_5888 = 0;
	var uLocal_5889 = 0;
	var uLocal_5890 = 0;
	var uLocal_5891 = 0;
	var uLocal_5892 = -1;
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
	var uLocal_5906 = -1082130432;
	struct<25> Local_5907[3];
	struct<25> Local_5983[1];
	struct<7> Local_6009[5];
	struct<7> Local_6045[2];
	struct<8> Local_6060 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6068 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6076 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6084 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6092 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6100 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6108 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6116 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6124 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6132 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6140 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6148 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6156 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6164 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6172 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6180 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6188 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6196 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6204 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6212 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6220 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6228 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6236 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6244 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6252 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_6260[6];
	struct<3> Local_6279[6];
	struct<3> Local_6298 = { 0, 0, 0 } ;
	struct<8> Local_6301 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_6309 = 0;
	var uLocal_6310 = 0;
	var uLocal_6311 = 0;
	var uLocal_6312 = 0;
	struct<8> Local_6313 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_6321 = 0;
	var uLocal_6322 = 0;
	var uLocal_6323 = 0;
	var uLocal_6324 = 0;
	struct<9> Local_6325 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_6334 = 0;
	var uLocal_6335 = 0;
	var uLocal_6336 = 0;
	int iLocal_6337 = 0;
	int iLocal_6338 = 0;
	int iLocal_6339 = 0;
	int iLocal_6340 = 0;
	int iLocal_6341 = 0;
	int iLocal_6342 = 0;
	int iLocal_6343 = 0;
	int iLocal_6344 = 0;
	int iLocal_6345 = 0;
	int iLocal_6346 = 0;
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
	var uLocal_6357 = -1;
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
	var uLocal_6369 = 0;
	var uLocal_6370 = 0;
	var uLocal_6371 = -1082130432;
	struct<7> Local_6372[2];
	struct<4> Local_6387 = { 0, 0, 0, 0 } ;
	var uLocal_6391 = 0;
	var uLocal_6392 = 0;
	var uLocal_6393 = 0;
	struct<7> Local_6394 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<4> Local_6401 = { 0, 0, 0, 0 } ;
	var uLocal_6405 = 0;
	var uLocal_6406 = 0;
	var uLocal_6407 = 0;
	struct<4> Local_6408 = { 0, 0, 0, 0 } ;
	var uLocal_6412 = 0;
	var uLocal_6413 = 0;
	var uLocal_6414 = 0;
	struct<4> Local_6415 = { 0, 0, 0, 0 } ;
	var uLocal_6419 = 0;
	var uLocal_6420 = 0;
	var uLocal_6421 = 0;
	struct<4> Local_6422 = { 0, 0, 0, 0 } ;
	var uLocal_6426 = 0;
	var uLocal_6427 = 0;
	var uLocal_6428 = 0;
	struct<4> Local_6429 = { 0, 0, 0, 0 } ;
	var uLocal_6433 = 0;
	var uLocal_6434 = 0;
	var uLocal_6435 = 0;
	struct<4> Local_6436 = { 0, 0, 0, 0 } ;
	var uLocal_6440 = 0;
	var uLocal_6441 = 0;
	var uLocal_6442 = 0;
	struct<4> Local_6443 = { 0, 0, 0, 0 } ;
	var uLocal_6447 = 0;
	var uLocal_6448 = 0;
	var uLocal_6449 = 0;
	struct<7> Local_6450[6];
	var uLocal_6493 = 0;
	int iLocal_6494 = 0;
	int iLocal_6495 = 0;
	int iLocal_6496 = 0;
	int iLocal_6497 = 0;
	int iLocal_6498[18] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_6517 = 0;
	int iLocal_6518 = 0;
	var uLocal_6519 = 0;
	var uLocal_6520 = 0;
	var uLocal_6521 = 0;
	int iLocal_6522 = 0;
	float fLocal_6523 = 0f;
	float fLocal_6524 = 0f;
	float fLocal_6525 = 0f;
	float fLocal_6526 = 0f;
	struct<3> Local_6527 = { 0, 0, 0 } ;
	var uLocal_6530 = 0;
	var uLocal_6531 = 0;
	var uLocal_6532 = 0;
	float fLocal_6533 = 0f;
	float fLocal_6534 = 0f;
	float fLocal_6535 = 0f;
	float fLocal_6536 = 0f;
	float fLocal_6537 = 0f;
	float fLocal_6538 = 0f;
	float fLocal_6539 = 0f;
	int iLocal_6540 = 0;
	int iLocal_6541 = 0;
	int iLocal_6542 = 0;
	int iLocal_6543 = 0;
	int iLocal_6544 = 0;
	int iLocal_6545 = 0;
	int iLocal_6546 = 0;
	bool bLocal_6547 = 0;
	int iLocal_6548 = 0;
	struct<3> Local_6549 = { 0, 0, 0 } ;
	struct<3> Local_6552 = { 0, 0, 0 } ;
	float fLocal_6555 = 0f;
	float fLocal_6556 = 0f;
	float fLocal_6557 = 0f;
	float fLocal_6558 = 0f;
	float fLocal_6559 = 0f;
	int iLocal_6560 = 0;
	int iLocal_6561 = 0;
	int iLocal_6562 = 0;
	int iLocal_6563 = 0;
	var uLocal_6564 = 0;
	var uLocal_6565 = 0;
	var uLocal_6566 = 0;
	var uLocal_6567 = 0;
	var uLocal_6568 = 0;
	var uLocal_6569 = 0;
	struct<8> Local_6570 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6578 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6586 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_6594 = 0;
	int iLocal_6595 = 0;
	int iLocal_6596 = 0;
	int iLocal_6597 = 0;
	int iLocal_6598 = 0;
	struct<8> Local_6599 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6607 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6615 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_6623 = 0;
	var uLocal_6624 = 0;
	var uLocal_6625 = 0;
	var uLocal_6626 = 0;
	var uLocal_6627 = 0;
	var uLocal_6628 = 0;
	var uLocal_6629 = 0;
	var uLocal_6630 = 0;
	var uLocal_6631 = 0;
	struct<7> Local_6632[2];
	int iLocal_6647 = 0;
	int iLocal_6648 = 0;
	var uLocal_6649 = 0;
	var uLocal_6650 = 0;
	var uLocal_6651 = 0;
	int iLocal_6652 = 0;
	int iLocal_6653 = 0;
	int iLocal_6654 = 0;
	int iLocal_6655 = 0;
	int iLocal_6656 = 0;
	int iLocal_6657 = 0;
	int iLocal_6658 = 0;
	bool bLocal_6659 = 0;
	int iLocal_6660 = 0;
	int iLocal_6661 = 0;
	int iLocal_6662 = 0;
	int iLocal_6663 = 0;
	int iLocal_6664 = 0;
	int iLocal_6665 = 0;
	var uLocal_6666 = 0;
	var uLocal_6667 = 0;
	int iLocal_6668 = 0;
	var uLocal_6669 = 0;
	var uLocal_6670 = 0;
	var uLocal_6671 = 0;
	var uLocal_6672 = 0;
	var uLocal_6673 = 0;
	var uLocal_6674 = 0;
	var uLocal_6675 = 0;
	var uLocal_6676 = 0;
	var uLocal_6677 = 0;
	var uLocal_6678 = 0;
	var uLocal_6679 = 0;
	var uLocal_6680 = 0;
	int iLocal_6681 = 0;
	int iLocal_6682 = 0;
	int iLocal_6683 = 0;
	int iLocal_6684 = 0;
	int iLocal_6685 = 0;
	int iLocal_6686 = 0;
	int iLocal_6687 = 0;
	struct<8> Local_6688 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6696 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6704 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6712 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_6720 = 0;
	var uLocal_6721 = 0;
	var uLocal_6722 = 0;
	var uLocal_6723 = 0;
	int iLocal_6724 = 0;
	int iLocal_6725 = 0;
	int iLocal_6726 = 0;
	int iLocal_6727 = 0;
	int iLocal_6728[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_6735 = 0;
	int iLocal_6736 = 0;
	int iLocal_6737 = 0;
	int iLocal_6738 = 0;
	int iLocal_6739 = 0;
	int iLocal_6740 = 0;
	int iLocal_6741 = 0;
	int iLocal_6742 = 0;
	int iLocal_6743 = 0;
	int iLocal_6744 = 0;
	int iLocal_6745 = 0;
	int iLocal_6746 = 0;
	int iLocal_6747 = 0;
	int iLocal_6748 = 0;
	var uLocal_6749 = 0;
	var uLocal_6750 = 0;
	var uLocal_6751 = 0;
	var uLocal_6752 = 0;
	var uLocal_6753 = 0;
	var uLocal_6754 = 0;
	var uLocal_6755 = 0;
	var uLocal_6756 = 0;
	var uLocal_6757 = 0;
	var uLocal_6758 = 0;
	var uLocal_6759 = 0;
	var uLocal_6760 = 0;
	var uLocal_6761 = 0;
	var uLocal_6762 = 0;
	var uLocal_6763 = 0;
	struct<8> Local_6764 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6772 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6780 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6788 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6796 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6804 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6812 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6820 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6828 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6836 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6844 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6852 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6860 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6868 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6876 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6884 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6892 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6900 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_6908 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_6916 = 0;
	int iLocal_6917 = 0;
	int iLocal_6918 = 0;
	int iLocal_6919 = 0;
	int iLocal_6920 = 0;
	int iLocal_6921 = 0;
	int iLocal_6922 = 0;
	int iLocal_6923 = 0;
	bool bLocal_6924 = 0;
	int iLocal_6925 = 0;
	int iLocal_6926 = 0;
	int iLocal_6927 = 0;
	int iLocal_6928 = 0;
	int iLocal_6929 = 0;
	int iLocal_6930 = 0;
	int iLocal_6931 = 0;
	int iLocal_6932 = 0;
	int iLocal_6933 = 0;
	var uLocal_6934 = 0;
	var uLocal_6935 = 0;
	var uLocal_6936 = 0;
	var uLocal_6937 = 0;
	var uLocal_6938 = 0;
	var uLocal_6939 = 0;
	int iLocal_6940 = 0;
	var uLocal_6941 = 0;
	var uLocal_6942 = 0;
	var uLocal_6943 = 0;
	int iLocal_6944 = 0;
	int iLocal_6945 = 0;
	int iLocal_6946 = 0;
	int iLocal_6947 = 0;
	int iLocal_6948 = 0;
	struct<7> Local_6949[2];
	struct<7> Local_6964[5];
	int iLocal_7000 = 0;
	int iLocal_7001 = 0;
	int iLocal_7002 = 0;
	bool bLocal_7003 = 0;
	int iLocal_7004 = 0;
	int iLocal_7005 = 0;
	int iLocal_7006 = 0;
	int iLocal_7007 = 0;
	int iLocal_7008 = 0;
	var uLocal_7009 = 0;
	var uLocal_7010 = 0;
	var uLocal_7011 = 0;
	var uLocal_7012 = 0;
	var uLocal_7013 = 0;
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
	int iLocal_7024 = 0;
	int iLocal_7025 = 0;
	struct<7> Local_7026 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_7033 = 0;
	struct<8> Local_7034 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_7042 = 0;
	int iLocal_7043 = 0;
	int iLocal_7044 = 0;
	int iLocal_7045 = 0;
	int iLocal_7046 = 0;
	int iLocal_7047 = 0;
	char[] cLocal_7048[8] = 0;
	char[] cLocal_7049[8] = 0;
	int iLocal_7050 = 0;
	int iLocal_7051 = 0;
	int iLocal_7052 = 0;
	int iLocal_7053 = 0;
	int iLocal_7054 = 0;
	int iLocal_7055 = 0;
	int iLocal_7056 = 0;
	char* sLocal_7057 = NULL;
	struct<7> Local_7058 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_7065 = 0;
	var uLocal_7066 = 0;
	var uLocal_7067 = 0;
	var uLocal_7068 = 0;
	int iLocal_7069 = 0;
	var uLocal_7070 = 0;
	var uLocal_7071 = 0;
	var uLocal_7072 = 0;
	int iLocal_7073 = 0;
	int iLocal_7074 = 0;
	bool bLocal_7075 = 0;
	int iLocal_7076 = 0;
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
	iLocal_30 = 3;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_41 = 1;
	iLocal_42 = 65;
	iLocal_43 = 49;
	iLocal_44 = 64;
	uLocal_48 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_49 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	StringCopy(&cLocal_54, "M3AUD", 8);
	cLocal_56 = "mic3_dave_escape";
	cLocal_57 = "mic3_otherp_escape";
	sLocal_58 = "mic_3_mcs_1_p1_a2";
	cLocal_59 = "missmic3";
	cLocal_60 = "missmic3ig_6";
	cLocal_61 = "missmic3ig_7";
	cLocal_62 = "missmic3leadinout_mcs1";
	iLocal_63 = joaat("s_m_y_blackops_01");
	iLocal_64 = joaat("s_m_y_swat_01");
	iLocal_65 = joaat("s_m_m_ciasec_01");
	iLocal_66 = joaat("ig_davenorton");
	iLocal_67 = joaat("buzzard");
	iLocal_68 = joaat("prop_wrecked_buzzard");
	iLocal_69 = joaat("frogger");
	iLocal_70 = joaat("mesa3");
	iLocal_71 = joaat("mesa3");
	iLocal_72 = joaat("weapon_pistol");
	iLocal_73 = joaat("weapon_carbinerifle");
	iLocal_74 = joaat("weapon_carbinerifle");
	iLocal_75 = joaat("weapon_carbinerifle");
	StringCopy(&cLocal_76, "michaelThree", 16);
	StringCopy(&cLocal_80, "FBI_HEIST_3B_SHOOTOUT", 32);
	Local_88 = { -2223.376f, 192.4628f, 193.6015f };
	Local_91 = { -2290.343f, 364.1428f, 173.6017f };
	Local_94 = { -2334.546f, 294.4146f, 169.3519f };
	Local_97 = { -1468.378f, -392.9619f, 37.5397f };
	iLocal_100 = 1;
	iLocal_4025 = -1;
	iLocal_4026 = -1;
	iLocal_4027 = -1;
	iLocal_4028 = -1;
	Local_6298 = { -2248.154f, 269.9111f, 173.602f };
	fLocal_6523 = 1f;
	fLocal_6524 = 2000f;
	fLocal_6525 = 0.75f;
	fLocal_6526 = 5f;
	Local_6527 = { -2196.371f, 216.705f, 186.6325f };
	fLocal_6533 = 0.05f;
	fLocal_6534 = 0f;
	fLocal_6535 = 0f;
	fLocal_6536 = 0f;
	fLocal_6537 = 0f;
	fLocal_6538 = 0f;
	fLocal_6539 = 0f;
	Local_6549 = { -2292.318f, 378.6187f, 173.467f };
	Local_6552 = { 0f, 0f, 0f };
	fLocal_6555 = 0.45f;
	fLocal_6556 = 0f;
	fLocal_6557 = 0.1f;
	fLocal_6558 = 0f;
	fLocal_6559 = 30f;
	iLocal_6562 = 20;
	cLocal_7048 = "missfbi3leadinout";
	cLocal_7049 = "missmic_3_ext@leadin@mic_3_ext";
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_866(0);
	}
	MISC::SET_MISSION_FLAG(1);
	func_838();
	while (true)
	{
		if (iLocal_6518 > MISC::GET_GAME_TIMER())
		{
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
		}
		func_837();
		GlobalFunc_8012(&uLocal_2049);
		func_835();
		func_810();
		func_806();
		func_803();
		if (!bLocal_3034)
		{
			GlobalFunc_4494(&Local_1920);
			func_1();
		}
		RECORDING::_0x208784099002BC30("M_TheWrapUp", 0);
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x27D
{
	switch (iLocal_3030)
	{
		case 0:
			func_790();
			break;
		
		case 1:
			func_765();
			break;
		
		case 2:
			func_736();
			break;
		
		case 3:
			func_723();
			break;
		
		case 4:
			func_715();
			break;
		
		case 5:
			func_673();
			break;
		
		case 6:
			func_640();
			break;
		
		case 7:
			func_593();
			break;
		
		case 8:
			func_445();
			break;
		
		case 9:
			func_47();
			break;
		
		case 10:
			func_2();
			break;
	}
}

void func_2()//Position - 0x31C
{
	switch (iLocal_3031)
	{
		case 0:
			func_3();
			break;
	}
}

void func_3()//Position - 0x339
{
	HUD::CLEAR_PRINTS();
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	GlobalFunc_5103(0, 0);
	func_4();
	Global_97297 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_4()//Position - 0x360
{
	int iVar0;
	
	GlobalFunc_4935();
	HUD::CLEAR_PRINTS();
	AUDIO::STOP_AUDIO_SCENES();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		PED::CLEAR_PED_ALTERNATE_WALK_ANIM(PLAYER::PLAYER_PED_ID(), -1056964608);
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
	}
	func_40(1);
	GlobalFunc_8380(0, 1, 1, 0);
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(0);
	}
	iVar0 = 0;
	while (iVar0 <= (57 - 1))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Local_318[iVar0 /*25*/]) && !PED::IS_PED_INJURED(Local_318[iVar0 /*25*/])) && PLAYER::PLAYER_PED_ID() != Local_318[iVar0 /*25*/])
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_318[iVar0 /*25*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (17 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1744[iVar0 /*7*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1744[iVar0 /*7*/], 0))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1744[iVar0 /*7*/]));
		}
		iVar0++;
	}
	if (GlobalFunc_234(iLocal_4050))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_4050, 0);
	}
	if (GlobalFunc_234(func_29()))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(func_29(), 0);
	}
	if (GlobalFunc_234(func_28()))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(func_28(), 0);
		PED::SET_PED_CAN_SWITCH_WEAPON(func_28(), 1);
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_6498 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_6498[iVar0]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_6498[iVar0]));
		}
		iVar0++;
	}
	if (GlobalFunc_234(func_28()))
	{
		func_27(func_28(), 0);
	}
	if (GlobalFunc_234(func_29()))
	{
		func_27(func_29(), 0);
	}
	PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(uLocal_113);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_6517))
	{
		OBJECT::DELETE_OBJECT(&iLocal_6517);
	}
	func_26(&Local_4108, 0);
	func_26(&Local_4209, 0);
	func_26(&Local_4310, 0);
	func_26(&Local_4361, 0);
	func_26(&Local_4462, 0);
	func_26(&Local_4513, 0);
	func_26(&Local_4664, 0);
	func_24(&iLocal_4867, 0);
	func_26(&Local_4740, 0);
	func_26(&Local_4791, 0);
	func_26(&Local_4892, 0);
	func_26(&iLocal_5018, 0);
	func_26(&Local_5069, 0);
	func_26(&Local_5145, 0);
	func_26(&Local_5196, 0);
	func_26(&iLocal_5247, 0);
	func_26(&Local_5273, 0);
	func_26(&Local_5349, 0);
	func_26(&Local_5425, 0);
	func_26(&Local_5501, 0);
	func_26(&Local_5552, 0);
	func_26(&Local_5603, 0);
	func_26(&Local_5654, 0);
	func_26(&Local_5705, 0);
	func_26(&iLocal_5806, 0);
	func_26(&Local_5907, 0);
	GlobalFunc_703(&uLocal_4052);
	GlobalFunc_703(&uLocal_4053);
	GlobalFunc_703(&uLocal_317);
	iVar0 = 0;
	while (iVar0 < Local_1864)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1864[iVar0 /*2*/]) && Local_1864[iVar0 /*2*/].f_1)
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_1864[iVar0 /*2*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_6372 - 1))
	{
		func_22(&(Local_6372[iVar0 /*7*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_6009 - 1))
	{
		func_22(&(Local_6009[iVar0 /*7*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_6045 - 1))
	{
		func_22(&(Local_6045[iVar0 /*7*/]));
		iVar0++;
	}
	func_22(&Local_6394);
	func_22(&Local_6408);
	func_22(&Local_6415);
	func_22(&Local_6422);
	func_22(&Local_6387);
	func_22(&Local_6429);
	func_22(&Local_6443);
	func_22(&Local_6401);
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	iVar0 = 0;
	while (iVar0 < Local_1875)
	{
		if (CAM::DOES_CAM_EXIST(Local_1875[iVar0 /*10*/]))
		{
			CAM::DESTROY_CAM(Local_1875[iVar0 /*10*/], 0);
		}
		iVar0++;
	}
	func_21();
	func_20();
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_108))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_108);
	}
	GRAPHICS::REMOVE_DECAL(uLocal_4049);
	MISC::SET_TIME_SCALE(1f);
	fLocal_3118 = 1f;
	func_19();
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PED::SET_CREATE_RANDOM_COPS(1);
	if (GlobalFunc_2567(0))
	{
		GlobalFunc_601(0, 0);
	}
	if (GlobalFunc_2567(2))
	{
		GlobalFunc_601(2, 0);
	}
	if (GlobalFunc_2567(20))
	{
		GlobalFunc_601(20, 0);
	}
	MISC::ENABLE_DISPATCH_SERVICE(5, 1);
	MISC::ENABLE_DISPATCH_SERVICE(3, 1);
	GlobalFunc_504(0, -1);
	func_15();
	GlobalFunc_563(0);
	func_13(0);
	GlobalFunc_7621(82, 0, 0, 1, 1);
}









void func_13(bool bParam0)//Position - 0x4AAD
{
	if (bParam0)
	{
		if (iLocal_309 != 0)
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_309, 0);
			iLocal_309 = 0;
		}
		if (TASK::DOES_SCENARIO_GROUP_EXIST("KORTZ_SECURITY"))
		{
			if (TASK::IS_SCENARIO_GROUP_ENABLED("KORTZ_SECURITY"))
			{
				TASK::SET_SCENARIO_GROUP_ENABLED("KORTZ_SECURITY", 0);
			}
		}
		iLocal_309 = PED::ADD_SCENARIO_BLOCKING_AREA(-2360.413f, 139.9656f, 163.4271f, -2142.358f, 438.0082f, 203.5064f, 0, 1, 1, 1);
		PATHFIND::SET_PED_PATHS_IN_AREA(-2360.413f, 139.9656f, 163.4271f, -2142.358f, 438.0082f, 203.5064f, 0, 0);
		PED::SET_PED_NON_CREATION_AREA(-2360.413f, 139.9656f, 163.4271f, -2142.358f, 438.0082f, 203.5064f);
		MISC::CLEAR_AREA_OF_PEDS(-2260.096f, 296.5317f, 171.3521f, 500f, 0);
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(-2305.77f, 271.116f, 167.6021f, -2358.835f, 392.012f, 192.7792f, 67.8125f, 0, 0, 1);
		MISC::CLEAR_AREA_OF_VEHICLES(-2331.23f, 331.1649f, 169.6021f, 103f, 0, 0, 0, 0, 0);
	}
	else
	{
		if (iLocal_309 != 0)
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_309, 0);
			iLocal_309 = 0;
		}
		if (TASK::DOES_SCENARIO_GROUP_EXIST("KORTZ_SECURITY"))
		{
			if (!TASK::IS_SCENARIO_GROUP_ENABLED("KORTZ_SECURITY"))
			{
				TASK::SET_SCENARIO_GROUP_ENABLED("KORTZ_SECURITY", 1);
			}
		}
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-2360.413f, 139.9656f, 163.4271f, -2142.358f, 438.0082f, 203.5064f, 0);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-2305.77f, 271.116f, 168.6021f, -2358.835f, 392.012f, 192.7792f, 67.8125f, 1);
		PED::CLEAR_PED_NON_CREATION_AREA();
	}
}


void func_15()//Position - 0x4C6C
{
	TASK::REMOVE_COVER_POINT(Local_6009[0 /*7*/]);
	TASK::REMOVE_COVER_POINT(Local_6009[1 /*7*/]);
	TASK::REMOVE_COVER_POINT(Local_6009[2 /*7*/]);
	TASK::REMOVE_COVER_POINT(Local_6009[3 /*7*/]);
	TASK::REMOVE_COVER_POINT(Local_6009[4 /*7*/]);
}




void func_19()//Position - 0x4D4C
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_6493))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_6493, 0);
	}
}

void func_20()//Position - 0x4D66
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_109 - 1))
	{
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_109[iVar0]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_109[iVar0]);
		}
		iVar0++;
	}
}

void func_21()//Position - 0x4D9A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_101 - 1))
	{
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_101[iVar0]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_101[iVar0]);
		}
		iVar0++;
	}
}

void func_22(var uParam0)//Position - 0x4DCE
{
	if ((TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(uParam0->f_3) && uParam0->f_1) && *uParam0 != 0)
	{
		TASK::REMOVE_COVER_POINT(*uParam0);
	}
	uParam0->f_1 = 0;
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = 0f;
}


void func_24(int iParam0, bool bParam1)//Position - 0x4E28
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (bParam1)
		{
			PED::DELETE_PED(iParam0);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
	GlobalFunc_703(&(iParam0->f_8));
	GlobalFunc_589(&(iParam0->f_13));
}


void func_26(int iParam0, bool bParam1)//Position - 0x4ECC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		func_24(iParam0[iVar0 /*25*/], bParam1);
		iVar0++;
	}
}

void func_27(int iParam0, int iParam1)//Position - 0x4EF6
{
	if (!(iParam0 == PLAYER::PLAYER_PED_ID() && iParam1 == 0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam0, iParam1);
	}
}

int func_28()//Position - 0x4F1A
{
	return Local_318[0 /*25*/];
}

int func_29()//Position - 0x4F28
{
	return Local_318[1 /*25*/];
}











void func_40(bool bParam0)//Position - 0x5189
{
	if (bParam0)
	{
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
		STREAMING::SET_PED_POPULATION_BUDGET(0);
	}
	else
	{
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
		STREAMING::SET_PED_POPULATION_BUDGET(3);
	}
}







void func_47()//Position - 0x5388
{
	int iVar0;
	int iVar1;
	
	switch (iLocal_3031)
	{
		case 0:
			bLocal_7075 = false;
			iLocal_7076 = 0;
			if (GlobalFunc_8315() == 2)
			{
				bLocal_7075 = true;
			}
			iLocal_3031++;
			break;
		
		case 1:
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				GlobalFunc_4956();
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(1);
				func_440(&Local_1920);
				iVar0 = 0;
				while (iVar0 < Local_318)
				{
					if (iVar0 > 2)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_318[iVar0 /*25*/]))
						{
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_318[iVar0 /*25*/]));
						}
					}
					iVar0++;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_4050))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_4050);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(func_29()))
				{
					func_164(&(Local_318[1 /*25*/]), 2, Local_4104, Local_4104.f_3, joaat("weapon_unarmed"), 10, 1, 1, 0, 60);
				}
				GlobalFunc_5174(&uLocal_2049, joaat("ig_davenorton"));
				GlobalFunc_5174(&uLocal_2049, iLocal_65);
				GlobalFunc_5174(&uLocal_2049, iLocal_64);
				GlobalFunc_5174(&uLocal_2049, iLocal_63);
				GlobalFunc_5174(&uLocal_2049, iLocal_69);
				GlobalFunc_5174(&uLocal_2049, iLocal_67);
				GlobalFunc_5174(&uLocal_2049, iLocal_70);
				GlobalFunc_5174(&uLocal_2049, iLocal_71);
				iVar0 = 0;
				while (iVar0 < Local_1864)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_1864[iVar0 /*2*/]))
					{
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_1864[iVar0 /*2*/]));
					}
					iVar0++;
				}
				GlobalFunc_5185(&uLocal_2049, 50, &cLocal_76);
				GlobalFunc_5185(&uLocal_2049, 4, &cLocal_76);
				GlobalFunc_5185(&uLocal_2049, 12, &cLocal_76);
				GlobalFunc_5185(&uLocal_2049, 7, &cLocal_76);
				GlobalFunc_5185(&uLocal_2049, 1, &cLocal_76);
				AUDIO::TRIGGER_MUSIC_EVENT("MIC3_STOP_TRACK");
				GlobalFunc_8380(1, 1, 1, 0);
				GlobalFunc_6685(1);
				func_40(1);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				if (bLocal_7075)
				{
					func_156(0, 1, 0, 0, 0, 0);
					GlobalFunc_2774(&iLocal_3038, 0, 0);
					GlobalFunc_10238(&iLocal_3038, 0, 0);
					GlobalFunc_9019(&iLocal_3038, 0);
					GlobalFunc_10993(&iLocal_3038, 1, 0, 0);
					CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(iLocal_3038[2]);
					func_156(1, 1, 1, 0, 0, 0);
				}
				iLocal_3031++;
			}
			break;
		
		case 2:
			if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			func_59(0);
			iLocal_3031++;
			break;
		
		case 3:
			if (CUTSCENE::IS_CUTSCENE_PLAYING() && !iLocal_7074)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1744[16 /*7*/]))
				{
					ENTITY::SET_ENTITY_COORDS(Local_1744[16 /*7*/], -1448.909f, -366.6817f, 42.5278f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_1744[16 /*7*/], 280.744f);
				}
				MISC::CLEAR_AREA_OF_PROJECTILES(Local_97, 100f, 0);
				FIRE::STOP_FIRE_IN_RANGE(Local_97, 100f);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_7069))
				{
					if (FIRE::IS_ENTITY_ON_FIRE(iLocal_7069))
					{
						FIRE::STOP_ENTITY_FIRE(iLocal_7069);
					}
				}
				GlobalFunc_9805(-1475.917f, -400.3012f, 35.69581f, -1441.554f, -374.8679f, 41.35278f, 16f, -1481.256f, -403.6215f, 36.5974f, 55.3672f, GlobalFunc_625(), 1, 1, 1, 0, 0);
				iVar1 = 0;
				while (iVar1 < Local_1744)
				{
					if (iVar1 != 16)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1744[iVar1 /*7*/]))
						{
							if (PLAYER::GET_PLAYERS_LAST_VEHICLE() != Local_1744[iVar1 /*7*/])
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1744[iVar1 /*7*/]));
							}
						}
					}
					iVar1++;
				}
				iLocal_7074 = 1;
			}
			if (bLocal_7075)
			{
				if (!iLocal_7076)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() >= 138734)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneMichael", 1000, 0);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_7076 = 1;
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 0);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				RECORDING::_0x81CBAE94390F9F89();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				func_40(0);
				GlobalFunc_8380(0, 1, 1, 0);
				func_48(10);
			}
			break;
	}
}

void func_48(int iParam0)//Position - 0x5747
{
	iLocal_3032 = iParam0;
	iLocal_3029 = 1;
}











void func_59(bool bParam0)//Position - 0x6141
{
	int iVar0;
	
	func_26(&Local_4108, 1);
	func_26(&Local_4209, 1);
	func_26(&Local_4310, 1);
	func_26(&Local_4361, 1);
	func_26(&Local_4462, 1);
	func_26(&Local_4513, 1);
	func_26(&Local_4664, 1);
	func_24(&iLocal_4867, 1);
	func_26(&Local_4740, 1);
	func_26(&Local_4791, 1);
	func_26(&Local_4892, 1);
	func_26(&iLocal_5018, 1);
	func_26(&Local_5069, 1);
	func_26(&Local_5145, 1);
	func_26(&Local_5196, 1);
	func_26(&iLocal_5247, 1);
	func_26(&Local_5273, 1);
	func_26(&Local_5349, 1);
	func_26(&Local_5425, 1);
	func_26(&Local_5501, 1);
	func_26(&Local_5552, 1);
	func_26(&Local_5603, 1);
	func_26(&Local_5654, 1);
	func_26(&Local_5705, 1);
	func_26(&iLocal_5806, 1);
	func_26(&Local_5907, 1);
	iVar0 = 0;
	while (iVar0 <= (57 - 1))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Local_318[iVar0 /*25*/]) && !PED::IS_PED_INJURED(Local_318[iVar0 /*25*/])) && PLAYER::PLAYER_PED_ID() != Local_318[iVar0 /*25*/])
		{
			PED::DELETE_PED(&(Local_318[iVar0 /*25*/]));
		}
		GlobalFunc_703(&(Local_318[iVar0 /*25*/].f_8));
		iVar0++;
	}
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 <= (17 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_1744[iVar0 /*7*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1744[iVar0 /*7*/], 0))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_1744[iVar0 /*7*/]));
			}
			GlobalFunc_703(&(Local_1744[iVar0 /*7*/].f_1));
			iVar0++;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_4050))
	{
		PED::DELETE_PED(&iLocal_4050);
	}
}

































































































void func_156(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0xF5AB
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_318[2 /*25*/]))
	{
		iLocal_3038[1] = Local_318[2 /*25*/];
		GlobalFunc_2774(&iLocal_3038, 1, iParam1);
		GlobalFunc_2904(&iLocal_3038, 1, iParam4);
	}
	else
	{
		GlobalFunc_2774(&iLocal_3038, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_318[1 /*25*/]))
	{
		iLocal_3038[2] = Local_318[1 /*25*/];
		GlobalFunc_2774(&iLocal_3038, 2, iParam2);
		GlobalFunc_2904(&iLocal_3038, 2, iParam5);
	}
	else
	{
		GlobalFunc_2774(&iLocal_3038, 2, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_318[0 /*25*/]))
	{
		iLocal_3038[0] = Local_318[0 /*25*/];
		GlobalFunc_2774(&iLocal_3038, 0, iParam0);
		GlobalFunc_2904(&iLocal_3038, 0, iParam3);
	}
	else
	{
		GlobalFunc_2774(&iLocal_3038, 0, 1);
	}
}








int func_164(var uParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11)//Position - 0xF8C3
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	int iVar7;
	
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		iVar0 = 0;
		if (iParam1 == 3)
		{
		}
		switch (iParam1)
		{
			case 0:
				iVar1 = 0;
				iVar2 = 0;
				StringCopy(&Var3, "MICHAEL", 16);
				break;
			
			case 1:
				iVar1 = 1;
				iVar2 = 1;
				StringCopy(&Var3, "FRANKLIN", 16);
				break;
			
			case 2:
				iVar1 = 2;
				iVar2 = 2;
				StringCopy(&Var3, "TREVOR", 16);
				break;
		}
		if (bParam8)
		{
			while (!func_172(uParam0, iVar1, Param2, fParam5, bParam9, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			func_172(uParam0, iVar1, Param2, fParam5, bParam9, 0, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			if (bParam10)
			{
				if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_8));
				}
				func_168(&(uParam0->f_8), *uParam0, 0);
			}
			PED::SET_PED_TO_LOAD_COVER(*uParam0, 1);
			PED::SET_PED_ACCURACY(*uParam0, iParam7);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iLocal_310);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
			PED::SET_PED_CAN_BE_TARGETTED(*uParam0, 0);
			PED::SET_PED_SUFFERS_CRITICAL_HITS(*uParam0, 0);
			ENTITY::SET_ENTITY_HEALTH(*uParam0, 800);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(*uParam0, 0);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(*uParam0, 1);
			GlobalFunc_2249(*uParam0, 200f, 200f, 180f, -180f, 180f);
			GlobalFunc_200(&uLocal_115, iVar2);
			GlobalFunc_173(&uLocal_115, iVar2, *uParam0, &Var3, 0, 1);
			if (iParam6 != 0)
			{
				if (iParam11 <= 0)
				{
					WEAPON::GIVE_WEAPON_TO_PED(*uParam0, iParam6, -1, 1, 1);
				}
				else
				{
					WEAPON::GIVE_WEAPON_TO_PED(*uParam0, iParam6, iParam11, 1, 1);
				}
			}
			else
			{
				iVar7 = WEAPON::GET_BEST_PED_WEAPON(*uParam0, 0);
				if ((((((((iVar7 != joaat("weapon_unarmed") && iVar7 != joaat("weapon_bat")) && iVar7 != joaat("weapon_crowbar")) && iVar7 != joaat("weapon_fireextinguisher")) && iVar7 != joaat("weapon_hammer")) && iVar7 != joaat("weapon_nightstick")) && iVar7 != joaat("weapon_petrolcan")) && iVar7 != joaat("weapon_stungun")) && iVar7 != joaat("weapon_bottle"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, iVar7, 1);
				}
				else
				{
					WEAPON::GIVE_WEAPON_TO_PED(*uParam0, joaat("weapon_pistol"), 60, 1, 1);
				}
			}
			if (bParam9 && iVar0 != 0)
			{
				GlobalFunc_5174(&uLocal_2049, iVar0);
			}
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}




void func_168(var uParam0, int iParam1, bool bParam2)//Position - 0xFBF5
{
	GlobalFunc_703(uParam0);
	*uParam0 = GlobalFunc_6797(iParam1, bParam2, 145);
}




int func_172(int iParam0, int iParam1, struct<3> Param2, int iParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0xFD1D
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
			func_432(*iParam0);
			GlobalFunc_7694(*iParam0, 1, 0);
			GlobalFunc_7693(*iParam0);
			GlobalFunc_7707(*iParam0);
			func_174(*iParam0, bParam8);
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


int func_174(int iParam0, bool bParam1)//Position - 0xFE35
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_5101(iVar0))
	{
		GlobalFunc_5100(iVar0, 0);
		GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		func_264(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (GlobalFunc_7685(iParam0))
		{
			GlobalFunc_5100(iVar0, 0);
			GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			func_264(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[120] && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122])
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (GlobalFunc_10915(iParam0, 3, 169))
					{
						GlobalFunc_11257(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						return 1;
					}
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 6))
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 20))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 21))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 22))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 11))
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 10))
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 50))
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 14, 59))
			{
				GlobalFunc_11257(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10915(iParam0, 8, 22))
			{
				GlobalFunc_11257(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 14))
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_10915(iParam0, 12, 13))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 14))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 15))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 4))
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 3))
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 14, 82))
			{
				GlobalFunc_11257(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10915(iParam0, 8, 76))
			{
				GlobalFunc_11257(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 1))
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 2:
			if (GlobalFunc_10915(iParam0, 12, 12))
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 15))
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (GlobalFunc_10915(iParam0, 3, 71))
				{
					GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 18))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 19))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 7))
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 6))
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 14, 88))
			{
				GlobalFunc_11257(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10915(iParam0, 8, 17))
			{
				GlobalFunc_11257(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 11))
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
	}
	return 0;
}


























































































void func_264(int iParam0, int iParam1)//Position - 0x29BCD
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
				iVar1 = GlobalFunc_11038(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					GlobalFunc_521(iVar0);
					func_266(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
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


void func_266(int iParam0, var uParam1, bool bParam2)//Position - 0x29E44
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
				PED::SET_PED_PROP_INDEX(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], 0);
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
			if (GlobalFunc_11037(iParam0, iVar1, &iVar2, 0))
			{
				GlobalFunc_11257(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (GlobalFunc_11035(iParam0, iVar1, &iVar2))
			{
				GlobalFunc_11257(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_6784(741, uParam1->f_60, Global_68104, 1);
			GlobalFunc_6784(742, uParam1->f_61, Global_68104, 1);
			iVar4 = GlobalFunc_4915(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			GlobalFunc_11288(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			if (!bParam2)
			{
				iVar5 = GlobalFunc_4915(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				GlobalFunc_11288(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
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






































































































































































void func_432(int iParam0)//Position - 0x580E0
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
		func_266(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
		if (!Global_89948[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!GlobalFunc_526(49))
				{
					iVar1 = GlobalFunc_11038(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					GlobalFunc_11162(GlobalFunc_4917(0), 12, 16, 0, 0, 0, 0);
				}
				if (!GlobalFunc_526(44))
				{
					iVar1 = GlobalFunc_11038(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = GlobalFunc_11038(iParam0, 4, -1);
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
				iVar1 = GlobalFunc_11038(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				GlobalFunc_521(iVar0);
				func_266(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
			}
		}
		Global_89948[iVar0] = 1;
	}
}








void func_440(var uParam0)//Position - 0x58AEE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		GlobalFunc_4496(uParam0[iVar0 /*8*/]);
		iVar0++;
	}
}





void func_445()//Position - 0x58B83
{
	int iVar0;
	
	if (GlobalFunc_8315() == 0)
	{
		GlobalFunc_589(&(Local_318[1 /*25*/].f_13));
		GlobalFunc_703(&(Local_318[1 /*25*/].f_8));
		GlobalFunc_703(&uLocal_4053);
	}
	else if (GlobalFunc_8315() == 2)
	{
		GlobalFunc_589(&(Local_318[0 /*25*/].f_13));
		GlobalFunc_703(&(Local_318[0 /*25*/].f_8));
		GlobalFunc_703(&uLocal_4053);
	}
	if (iLocal_7044 > 1)
	{
		func_590();
		func_588();
		func_587();
		func_584();
		func_582();
		if (iLocal_7056)
		{
			func_573();
		}
		if (iLocal_7050)
		{
			func_572();
		}
	}
	GlobalFunc_661(Local_318[46 /*25*/], &(Local_318[46 /*25*/].f_13), -1, 0, 1, 0, -1082130432, 0);
	GlobalFunc_661(Local_318[47 /*25*/], &(Local_318[47 /*25*/].f_13), -1, 0, 1, 0, -1082130432, 0);
	GlobalFunc_661(Local_318[48 /*25*/], &(Local_318[48 /*25*/].f_13), -1, 0, 1, 0, -1082130432, 0);
	GlobalFunc_661(Local_318[49 /*25*/], &(Local_318[49 /*25*/].f_13), -1, 0, 1, 0, -1082130432, 0);
	GlobalFunc_661(Local_318[50 /*25*/], &(Local_318[50 /*25*/].f_13), -1, 0, 1, 0, -1082130432, 0);
	GlobalFunc_661(Local_318[55 /*25*/], &(Local_318[55 /*25*/].f_13), -1, 0, 1, 0, -1082130432, 0);
	GlobalFunc_661(Local_318[56 /*25*/], &(Local_318[56 /*25*/].f_13), -1, 0, 1, 0, -1082130432, 0);
	if (bLocal_3037)
	{
		func_570();
	}
	if (PLAYER::PLAYER_PED_ID() == Local_318[0 /*25*/])
	{
		GlobalFunc_703(&(Local_318[1 /*25*/].f_8));
	}
	if (PLAYER::PLAYER_PED_ID() == Local_318[1 /*25*/])
	{
		GlobalFunc_703(&(Local_318[0 /*25*/].f_8));
	}
	switch (iLocal_7044)
	{
		case 0:
			GlobalFunc_718(&uLocal_2049, iLocal_63);
			GlobalFunc_718(&uLocal_2049, joaat("dominator"));
			GlobalFunc_718(&uLocal_2049, joaat("carbonizzare"));
			GlobalFunc_727(&uLocal_2049, cLocal_56);
			GlobalFunc_727(&uLocal_2049, cLocal_57);
			func_567(&uLocal_2049, 1, &cLocal_76);
			func_567(&uLocal_2049, 2, &cLocal_76);
			func_565();
			STREAMING::REQUEST_MODEL(joaat("dominator"));
			AUDIO::TRIGGER_MUSIC_EVENT("MIC3_ESCAPE");
			iLocal_7050 = 0;
			iLocal_7051 = 0;
			iLocal_7053 = 0;
			iLocal_3119 = 0;
			iLocal_7056 = 1;
			iLocal_7043 = 0;
			iLocal_7042 = 0;
			iLocal_7046 = 0;
			iLocal_7047 = 0;
			sLocal_7057 = "M3_04";
			PED::DELETE_PED(&(Local_318[54 /*25*/]));
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_318[52 /*25*/]));
			VEHICLE::DELETE_VEHICLE(&(Local_1744[4 /*7*/]));
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1744[2 /*7*/]));
			GlobalFunc_235(&uLocal_7070);
			GlobalFunc_4493(&(Local_1920[14 /*8*/]), 0, 0, 1);
			iLocal_7044 = 1;
			break;
		
		case 1:
			if ((((((STREAMING::HAS_MODEL_LOADED(iLocal_63) && STREAMING::HAS_MODEL_LOADED(joaat("dominator"))) && STREAMING::HAS_MODEL_LOADED(joaat("carbonizzare"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, &cLocal_76)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, &cLocal_76)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(cLocal_57)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(cLocal_56))
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_3_ESCAPE_IN_CAR"))
				{
					AUDIO::START_AUDIO_SCENE("MI_3_ESCAPE_IN_CAR");
				}
				GlobalFunc_703(&(Local_318[0 /*25*/].f_8));
				GlobalFunc_703(&(Local_318[1 /*25*/].f_8));
				if (GlobalFunc_234(Local_318[54 /*25*/]))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_318[54 /*25*/]));
				}
				if (GlobalFunc_234(Local_1744[4 /*7*/]))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1744[4 /*7*/]));
				}
				if (GlobalFunc_8315() == 0 && Global_89962.f_12[1] == 0)
				{
					iLocal_7050 = 1;
				}
				uLocal_3116 = uLocal_3116;
				uLocal_3117 = uLocal_3117;
				if (GlobalFunc_234(func_28()))
				{
					GlobalFunc_173(&uLocal_115, 0, func_28(), "MICHAEL", 0, 1);
				}
				if (GlobalFunc_234(func_29()))
				{
					GlobalFunc_173(&uLocal_115, 2, func_29(), "TREVOR", 0, 1);
				}
				func_562();
				GlobalFunc_563(1);
				GlobalFunc_11043(7, "VEHICLE ESCAPE", 1, 0, 0, 1);
				iLocal_7045 = 0;
				GlobalFunc_4496(&(Local_1920[1 /*8*/]));
				RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
				iLocal_7044 = 2;
			}
			break;
		
		case 2:
			if (!iLocal_7052)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -2315.252f, 277.0216f, 168.5901f) > 40000f)
				{
					GlobalFunc_5174(&uLocal_2049, joaat("carbonizzare"));
					GlobalFunc_5174(&uLocal_2049, joaat("dominator"));
					GlobalFunc_5174(&uLocal_2049, joaat("vacca"));
					GlobalFunc_5174(&uLocal_2049, joaat("ig_davenorton"));
					GlobalFunc_5174(&uLocal_2049, iLocal_65);
					GlobalFunc_5174(&uLocal_2049, iLocal_64);
					GlobalFunc_5174(&uLocal_2049, iLocal_63);
					GlobalFunc_5174(&uLocal_2049, iLocal_69);
					GlobalFunc_5174(&uLocal_2049, iLocal_70);
					GlobalFunc_5174(&uLocal_2049, iLocal_71);
					GlobalFunc_5174(&uLocal_2049, joaat("p_cs_newspaper_s"));
					GlobalFunc_5175(&uLocal_2049, cLocal_59);
					GlobalFunc_5185(&uLocal_2049, 50, &cLocal_76);
					GlobalFunc_5185(&uLocal_2049, 4, &cLocal_76);
					GlobalFunc_5185(&uLocal_2049, 12, &cLocal_76);
					GlobalFunc_5185(&uLocal_2049, 7, &cLocal_76);
					GlobalFunc_5185(&uLocal_2049, 1, &cLocal_76);
					GlobalFunc_5177(&uLocal_2049, &cLocal_80);
					OBJECT::DELETE_OBJECT(&(Local_1864[3 /*2*/]));
					PED::DELETE_PED(&(Local_318[46 /*25*/]));
					PED::DELETE_PED(&(Local_318[47 /*25*/]));
					PED::DELETE_PED(&(Local_318[48 /*25*/]));
					PED::DELETE_PED(&(Local_318[49 /*25*/]));
					PED::DELETE_PED(&(Local_318[50 /*25*/]));
					PED::DELETE_PED(&(Local_318[55 /*25*/]));
					PED::DELETE_PED(&(Local_318[56 /*25*/]));
					func_26(&Local_4108, 1);
					func_26(&Local_4209, 1);
					func_26(&Local_4310, 1);
					func_26(&Local_4361, 1);
					func_26(&Local_4462, 1);
					func_26(&Local_4513, 1);
					func_26(&Local_4664, 1);
					func_24(&iLocal_4867, 1);
					func_26(&Local_4740, 1);
					func_26(&Local_4791, 1);
					func_26(&Local_4892, 1);
					func_26(&iLocal_5018, 1);
					func_26(&Local_5069, 1);
					func_26(&Local_5145, 1);
					func_26(&Local_5196, 1);
					func_26(&iLocal_5247, 1);
					func_26(&Local_5273, 1);
					func_26(&Local_5349, 1);
					func_26(&Local_5425, 1);
					func_26(&Local_5501, 1);
					func_26(&Local_5552, 1);
					func_26(&Local_5603, 1);
					func_26(&Local_5654, 1);
					func_26(&Local_5705, 1);
					func_26(&iLocal_5806, 1);
					func_26(&Local_5907, 1);
					iVar0 = 7;
					while (iVar0 <= 50)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_318[iVar0 /*25*/]))
						{
							PED::DELETE_PED(&(Local_318[iVar0 /*25*/]));
						}
						iVar0++;
					}
					iVar0 = 55;
					while (iVar0 <= 56)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_318[iVar0 /*25*/]))
						{
							PED::DELETE_PED(&(Local_318[iVar0 /*25*/]));
						}
						iVar0++;
					}
					iVar0 = 0;
					while (iVar0 <= (iLocal_6498 - 1))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_6498[iVar0]))
						{
							OBJECT::DELETE_OBJECT(&(iLocal_6498[iVar0]));
						}
						iVar0++;
					}
					iVar0 = 0;
					while (iVar0 <= (17 - 1))
					{
						if ((((ENTITY::DOES_ENTITY_EXIST(Local_1744[iVar0 /*7*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1744[iVar0 /*7*/], 0)) && !iVar0 == 13) && !iVar0 == 15) && !iVar0 == 3)
						{
							if (!PLAYER::GET_PLAYERS_LAST_VEHICLE() == Local_1744[iVar0 /*7*/])
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1744[iVar0 /*7*/]));
							}
						}
						iVar0++;
					}
					iLocal_7052 = 1;
				}
			}
			if (iLocal_7053)
			{
				if ((func_472(&uLocal_283, Local_97, Local_7058, Local_7058.f_3, Local_7058.f_6, 1, sLocal_7057, 1, 1, -1) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1442.794f, -381.5823f, 37.32021f, -1470.93f, -363.552f, 42.36622f, 41f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1436.604f, -387.4931f, 34.62058f, -1444.665f, -376.4553f, 40.70135f, 8.75f, 0, 1, 0))
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						AUDIO::STOP_AUDIO_SCENE("MI_3_ESCAPE_IN_CAR");
						AUDIO::STOP_AUDIO_SCENE("MI_3_ESCAPE_HELICOPTER_ATTACK");
						if (GlobalFunc_234(func_28()))
						{
							if (PED::IS_PED_USING_ACTION_MODE(func_28()))
							{
								PED::SET_PED_USING_ACTION_MODE(func_28(), 0, -1, 0);
							}
						}
						if (GlobalFunc_234(func_29()))
						{
							if (PED::IS_PED_USING_ACTION_MODE(func_29()))
							{
								PED::SET_PED_USING_ACTION_MODE(func_29(), 0, -1, 0);
							}
						}
						if (func_461("M3_EXT_LI"))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								iLocal_7069 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
								iLocal_7044 = 4;
							}
							else
							{
								iLocal_7044 = 6;
							}
						}
						PLAYER::SET_MAX_WANTED_LEVEL(0);
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					}
				}
				if (iLocal_7051)
				{
					if (!GlobalFunc_111())
					{
						RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
						GlobalFunc_527("M3_05", 7500, 1);
						sLocal_7057 = "M3_04A";
						GlobalFunc_7139(&uLocal_283, 0);
						iLocal_7053 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (GlobalFunc_234(iLocal_7069))
			{
				if (GlobalFunc_530(iLocal_7069, 2f, 1, 1056964608, 0, 1))
				{
					iLocal_7044 = 5;
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
			break;
		
		case 5:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
			{
				iLocal_7044 = 6;
			}
			break;
		
		case 6:
			if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (GlobalFunc_234(Local_318[1 /*25*/]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_318[1 /*25*/], 0);
				}
				if (GlobalFunc_234(Local_318[0 /*25*/]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_318[0 /*25*/], 0);
				}
				if (GlobalFunc_234(Local_318[53 /*25*/]))
				{
					PED::DELETE_PED(&(Local_318[53 /*25*/]));
				}
				if (GlobalFunc_234(Local_1744[3 /*7*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_1744[3 /*7*/]));
				}
				OBJECT::DELETE_OBJECT(&(Local_1864[4 /*2*/]));
				GlobalFunc_504(0, -1);
				iLocal_7044 = 3;
				func_48(9);
			}
			break;
		
		case 3:
			break;
	}
	if (iLocal_7053)
	{
		if (GlobalFunc_7950(&uLocal_7070, 10f))
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			PLAYER::SET_MAX_WANTED_LEVEL(5);
		}
	}
}
















int func_461(char[4] cParam0)//Position - 0x599ED
{
	if (GlobalFunc_5170())
	{
		if (GlobalFunc_10607(&uLocal_115, &cLocal_54, cParam0, 8, 0, 0, 0))
		{
			iLocal_280 = MISC::GET_GAME_TIMER();
			return 1;
		}
	}
	return 0;
}











bool func_472(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, float fParam10, int iParam11, char* sParam12, bool bParam13, bool bParam14, int iParam15)//Position - 0x5A044
{
	return func_473(uParam0, Param1, GlobalFunc_716(), Param4, Param7, iParam11, 1, 0, 0, 0, 0, sParam12, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), 0, bParam13, GlobalFunc_648(), 1, 0, bParam14, iParam15, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), 1, fParam10);
}

int func_473(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, var uParam32, var uParam33, var uParam34, bool bParam35, float fParam36)//Position - 0x5A09B
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
	GlobalFunc_502();
	if (func_494(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, uParam0->f_8, bParam25, iParam18, 0, 0, uParam32, uParam33, uParam34, iParam14, bParam26))
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





















int func_494(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, var uParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)//Position - 0x5B114
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
						if (GlobalFunc_6810(uParam0, uParam0->f_17[iVar0], uParam8, 1))
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
							GlobalFunc_5130(uParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
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
						if (GlobalFunc_6810(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
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
								uParam0->f_1[iVar0] = GlobalFunc_6783(uParam0->f_17[iVar0], 0, 0);
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
										uParam0->f_1[iVar0] = GlobalFunc_6783(uParam0->f_17[iVar0], 0, 0);
										HUD::SET_BLIP_DISPLAY(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()))
							{
								if (GlobalFunc_6810(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
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




































































void func_562()//Position - 0x61D71
{
	if (GlobalFunc_234(iLocal_4050))
	{
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_4050, 1);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_4050, iLocal_74, -1, 1, 1);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_4050, 0);
		ENTITY::SET_ENTITY_PROOFS(iLocal_4050, 1, 1, 1, 0, 0, 0, 0, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_4050, iLocal_310);
		PED::SET_PED_KEEP_TASK(iLocal_4050, 1);
		ENTITY::SET_ENTITY_MAX_HEALTH(iLocal_4050, 200);
		ENTITY::SET_ENTITY_HEALTH(iLocal_4050, 200);
		PED::SET_PED_CONFIG_FLAG(iLocal_4050, 174, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_4050, 67, 1);
		GlobalFunc_703(&uLocal_4052);
		func_168(&uLocal_4052, iLocal_4050, 0);
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_4050, "MI_3_DAVE_GROUP", 0);
		AUDIO::STOP_PED_SPEAKING(iLocal_4050, 1);
		GlobalFunc_173(&uLocal_115, 4, iLocal_4050, "Dave", 0, 1);
	}
}



void func_565()//Position - 0x61EB4
{
	Local_7058 = { GlobalFunc_3023(-1473.44f, -397.2646f, 37.05371f, -1465.145f, -389.7755f, 40.56166f, 8.1875f) };
}


int func_567(var uParam0, int iParam1, char[4] cParam2)//Position - 0x61F13
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(cParam2) || iParam1 < 1)
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_475)
	{
		if (uParam0->f_475[iVar0 /*6*/])
		{
			if (uParam0->f_475[iVar0 /*6*/].f_5 == iParam1 && MISC::ARE_STRINGS_EQUAL(uParam0->f_475[iVar0 /*6*/].f_4, cParam2))
			{
				uParam0->f_475[iVar0 /*6*/].f_2 = 0;
				if (!uParam0->f_475[iVar0 /*6*/].f_1)
				{
					uParam0->f_977 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, cParam2);
		uParam0->f_475[iVar1 /*6*/] = 1;
		uParam0->f_475[iVar1 /*6*/].f_3 = MISC::GET_GAME_TIMER();
		uParam0->f_475[iVar1 /*6*/].f_4 = cParam2;
		uParam0->f_475[iVar1 /*6*/].f_5 = iParam1;
		uParam0->f_977 = 1;
		return 1;
	}
	return 0;
}



void func_570()//Position - 0x62176
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2195.616f, 225.7975f, 182.7953f, -2192.233f, 218.5466f, 191.0202f, 1.5f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2193.16f, 223.6073f, 183.5958f, -2191.268f, 218.9762f, 188.4952f, 4.5f, 0, 1, 0))
	{
		FIRE::START_ENTITY_FIRE(PLAYER::PLAYER_PED_ID());
		ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 0);
	}
	if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_6493))
	{
		STREAMING::REQUEST_PTFX_ASSET();
		if (STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			uLocal_6493 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_mich3_heli_fire", -2193.47f, 220.48f, 183.6f, 0f, 0f, 0f, 1f, 0, 0, 0, 0);
		}
	}
}


void func_572()//Position - 0x6234E
{
	if (GlobalFunc_234(func_29()))
	{
		switch (iLocal_7042)
		{
			case 0:
				if (GlobalFunc_234(Local_1744[16 /*7*/]))
				{
					TASK::TASK_ENTER_VEHICLE(func_29(), Local_1744[16 /*7*/], 20000, -1, 1073741824, 1, 0);
					iLocal_7042 = 1;
				}
				break;
			
			case 1:
				if (GlobalFunc_234(Local_1744[16 /*7*/]))
				{
					if (PED::IS_PED_IN_ANY_HELI(func_29()))
					{
						TASK::TASK_HELI_MISSION(func_29(), Local_1744[16 /*7*/], 0, 0, 111.969f, -1646.884f, 78.14513f, 4, 50f, 5f, -1f, 100, 30, -1082130432, 0);
						iLocal_7042 = 2;
					}
				}
				break;
			
			case 2:
				break;
		}
	}
}

void func_573()//Position - 0x62401
{
	if (GlobalFunc_234(iLocal_4051))
	{
		switch (iLocal_51)
		{
			case 0:
				if (!ENTITY::DOES_ENTITY_EXIST(Local_1744[15 /*7*/]))
				{
					Local_1744[15 /*7*/] = VEHICLE::CREATE_VEHICLE(joaat("dominator"), -2346.88f, 279.8263f, 168.7561f, 114.33f, 1, 1);
					if (GlobalFunc_234(Local_1744[15 /*7*/]))
					{
						ENTITY::SET_ENTITY_PROOFS(Local_1744[15 /*7*/], 1, 1, 1, 1, 1, 0, 0, 0);
						if (Global_89962.f_12[1] == 1)
						{
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1744[15 /*7*/], 0);
						}
					}
				}
				iLocal_51 = 1;
				break;
			
			case 1:
				func_580();
				iLocal_51 = 2;
				break;
			
			case 2:
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_4051))
				{
					if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_4051) >= 33)
					{
						if (GlobalFunc_234(Local_318[50 /*25*/]))
						{
							TASK::WAYPOINT_PLAYBACK_START_SHOOTING_AT_PED(iLocal_4051, Local_318[50 /*25*/], 0, 0);
						}
						iLocal_51 = 3;
					}
				}
				break;
			
			case 3:
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_4051))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_4051, 2f, 0);
					func_579(&iLocal_4051, &uLocal_4075, 1);
					if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_4051) >= 53 || func_578())
					{
						TASK::WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(iLocal_4051);
						iLocal_51 = 4;
					}
				}
				break;
			
			case 4:
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_4051))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_4051, 3f, 0);
					if (GlobalFunc_234(Local_1744[15 /*7*/]) && GlobalFunc_234(iLocal_4051))
					{
						if (GlobalFunc_156(iLocal_4051, Local_1744[15 /*7*/], 1) <= 15f)
						{
							TASK::CLEAR_PED_TASKS(iLocal_4051);
							TASK::TASK_ENTER_VEHICLE(iLocal_4051, Local_1744[15 /*7*/], 20000, -1, 1073741824, 1, 0);
							iLocal_51 = 5;
						}
					}
				}
				break;
			
			case 5:
				if (GlobalFunc_234(Local_1744[15 /*7*/]) && GlobalFunc_234(iLocal_4051))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_4051, Local_1744[15 /*7*/], 0))
					{
						GlobalFunc_6877(&uLocal_6530);
						iLocal_51 = 6;
					}
				}
				break;
			
			case 6:
				if ((GlobalFunc_234(Local_1744[15 /*7*/]) && GlobalFunc_234(iLocal_4051)) && GlobalFunc_5182(&uLocal_6530) >= 4f)
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1744[15 /*7*/], 2, &cLocal_76, 1);
					GlobalFunc_5185(&uLocal_2049, 2, &cLocal_76);
					VEHICLE::SET_PLAYBACK_SPEED(Local_1744[15 /*7*/], 1.15f);
					iLocal_51 = 7;
				}
				break;
			
			case 7:
				if (GlobalFunc_234(iLocal_4051))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_4051, 567490903) > 1)
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1744[15 /*7*/]))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1744[15 /*7*/]) > 16000f)
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1744[15 /*7*/]);
								TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(iLocal_4051, Local_1744[15 /*7*/], -1809.189f, 72.2607f, 70.6699f, 120f, 786468, 2f);
							}
						}
					}
					else if (GlobalFunc_713(iLocal_4051, -1809.189f, 72.2607f, 70.6699f, 1) <= 15f)
					{
						TASK::CLEAR_PED_TASKS(iLocal_4051);
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_4051, Local_1744[15 /*7*/], PLAYER::PLAYER_PED_ID(), 8, 120f, 786468, -1f, -1f, 1);
						iLocal_51 = 8;
					}
				}
				break;
			
			case 8:
				if (GlobalFunc_234(Local_1744[15 /*7*/]) && GlobalFunc_234(iLocal_4051))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_4051, 1)) > 10000f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_4051))
					{
						PED::DELETE_PED(&iLocal_4051);
						VEHICLE::DELETE_VEHICLE(&(Local_1744[15 /*7*/]));
						iLocal_51 = 9;
					}
				}
				break;
			
			case 9:
				break;
			}
	}
}





int func_578()//Position - 0x6283E
{
	if ((((ENTITY::IS_ENTITY_DEAD(Local_318[46 /*25*/]) && ENTITY::IS_ENTITY_DEAD(Local_318[47 /*25*/])) && ENTITY::IS_ENTITY_DEAD(Local_318[48 /*25*/])) && ENTITY::IS_ENTITY_DEAD(Local_318[49 /*25*/])) && ENTITY::IS_ENTITY_DEAD(Local_318[50 /*25*/]))
	{
		return 1;
	}
	return 0;
}

void func_579(int iParam0, var uParam1, bool bParam2)//Position - 0x62899
{
	int iVar0;
	
	if (GlobalFunc_234(*iParam0))
	{
		if (GlobalFunc_226(uParam1))
		{
			if (GlobalFunc_5182(uParam1) >= 2f)
			{
				if (bParam2)
				{
					iVar0 = 50;
					while (iVar0 >= 46)
					{
						if (GlobalFunc_234(Local_318[iVar0 /*25*/]))
						{
							TASK::WAYPOINT_PLAYBACK_START_SHOOTING_AT_PED(*iParam0, Local_318[iVar0 /*25*/], 0, 0);
							GlobalFunc_6877(uParam1);
						}
						iVar0 = (iVar0 + -1);
					}
				}
				else
				{
					iVar0 = 46;
					while (iVar0 <= 50)
					{
						if (GlobalFunc_234(Local_318[iVar0 /*25*/]))
						{
							TASK::WAYPOINT_PLAYBACK_START_SHOOTING_AT_PED(*iParam0, Local_318[iVar0 /*25*/], 0, 0);
							GlobalFunc_6877(uParam1);
						}
						iVar0++;
					}
				}
			}
		}
		else
		{
			GlobalFunc_6877(uParam1);
		}
	}
}

void func_580()//Position - 0x62940
{
	if (GlobalFunc_234(iLocal_4051))
	{
		if (GlobalFunc_5980(&Local_6148, iLocal_4051))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_4051);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_281);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2222.944f, 197.5196f, 193.6117f, 3f, -1, 1048576000, 0, 1193033728);
			TASK::TASK_STAND_STILL(0, -1);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_281);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_4051, uLocal_281);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_281);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_281);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
			TASK::TASK_PAUSE(0, 1000);
			if (!GlobalFunc_5980(&Local_6156, iLocal_4051))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2278.469f, 300.5403f, 183.6116f, 3f, -1, 1048576000, 0, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2275.219f, 276.015f, 173.6021f, 3f, -1, 1048576000, 0, 1193033728);
			}
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, cLocal_57, 0, 8, -1);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_281);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_4051, uLocal_281);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_281);
		}
	}
}


void func_582()//Position - 0x62A6C
{
	int iVar0;
	
	if (!iLocal_6339)
	{
		if (func_583(&iVar0))
		{
			if (GlobalFunc_234(iVar0))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0);
				PED::REMOVE_PED_DEFENSIVE_AREA(iVar0, 0);
				PED::SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(iVar0, PLAYER::PLAYER_PED_ID(), 5f, 0f, 5f, -5f, 0f, -5f, 10f, 0, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 50, 1);
				TASK::TASK_COMBAT_PED(iVar0, PLAYER::PLAYER_PED_ID(), 0, 16);
				iLocal_6339 = 1;
			}
		}
	}
}

int func_583(var uParam0)//Position - 0x62AD3
{
	int iVar0;
	
	iVar0 = 0;
	if (GlobalFunc_234(Local_318[46 /*25*/]))
	{
		*uParam0 = Local_318[46 /*25*/];
		iVar0++;
	}
	if (GlobalFunc_234(Local_318[47 /*25*/]))
	{
		*uParam0 = Local_318[47 /*25*/];
		iVar0++;
	}
	if (GlobalFunc_234(Local_318[48 /*25*/]))
	{
		*uParam0 = Local_318[48 /*25*/];
		iVar0++;
	}
	if (GlobalFunc_234(Local_318[49 /*25*/]))
	{
		*uParam0 = Local_318[49 /*25*/];
		iVar0++;
	}
	if (GlobalFunc_234(Local_318[50 /*25*/]))
	{
		*uParam0 = Local_318[50 /*25*/];
		iVar0++;
	}
	if (GlobalFunc_234(Local_318[55 /*25*/]))
	{
		*uParam0 = Local_318[55 /*25*/];
		iVar0++;
	}
	if (GlobalFunc_234(Local_318[56 /*25*/]))
	{
		*uParam0 = Local_318[56 /*25*/];
		iVar0++;
	}
	if (iVar0 == 1)
	{
		return 1;
	}
	return 0;
}

void func_584()//Position - 0x62BBB
{
	func_586();
	switch (iLocal_7046)
	{
		case 0:
			if (GlobalFunc_8315() == 2)
			{
				GlobalFunc_719(&uLocal_2049, cLocal_7048);
				GlobalFunc_718(&uLocal_2049, joaat("prop_cs_ciggy_01b"));
			}
			else if (GlobalFunc_8315() == 0)
			{
				GlobalFunc_719(&uLocal_2049, cLocal_7049);
			}
			iLocal_7046 = 1;
			break;
		
		case 1:
			if (GlobalFunc_8315() == 2)
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED(cLocal_7048) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_ciggy_01b")))
				{
					iLocal_7046 = 2;
				}
			}
			else if (GlobalFunc_8315() == 0)
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED(cLocal_7049))
				{
					iLocal_7046 = 2;
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_97, 1) <= 150f)
			{
				if (GlobalFunc_8315() == 2)
				{
					PED::DELETE_PED(&(Local_318[0 /*25*/]));
				}
				else if (GlobalFunc_8315() == 0)
				{
					PED::DELETE_PED(&(Local_318[1 /*25*/]));
				}
				GlobalFunc_5185(&uLocal_2049, 2, &cLocal_76);
				iLocal_7046 = 3;
			}
			break;
		
		case 3:
			if (GlobalFunc_8315() == 2)
			{
				if (func_164(&(Local_318[0 /*25*/]), 0, -1459.463f, -380.2411f, 37.78629f, 315.38f, joaat("weapon_unarmed"), 20, 0, 1, 0, 60))
				{
					if (GlobalFunc_234(Local_318[0 /*25*/]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_318[0 /*25*/], 1);
						iLocal_3038[2] = PLAYER::PLAYER_PED_ID();
						iLocal_3038[0] = Local_318[0 /*25*/];
						Local_1864[4 /*2*/] = OBJECT::CREATE_OBJECT(joaat("prop_cs_ciggy_01b"), PED::GET_PED_BONE_COORDS(func_28(), 28422, 0f, 0f, 0f), 1, 1, 0);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_1864[4 /*2*/], func_28(), PED::GET_PED_BONE_INDEX(func_28(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
						GlobalFunc_5174(&uLocal_2049, joaat("prop_cs_ciggy_01b"));
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_318[0 /*25*/], 1);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_281);
						TASK::TASK_PLAY_ANIM(0, cLocal_7048, "idle_a", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, cLocal_7048, "idle_b", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, cLocal_7048, "idle_c", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, cLocal_7048, "idle_b", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, cLocal_7048, "idle_a", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, cLocal_7048, "idle_c", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
						TASK::SET_SEQUENCE_TO_REPEAT(uLocal_281, 1);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_281);
						TASK::TASK_PERFORM_SEQUENCE(func_28(), uLocal_281);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_281);
						iLocal_7046 = 4;
					}
				}
			}
			else if (GlobalFunc_8315() == 0)
			{
				if (func_164(&(Local_318[1 /*25*/]), 2, -1460.957f, -380.3353f, 37.83759f, 220f, joaat("weapon_unarmed"), 20, 0, 1, 0, 60))
				{
					if (GlobalFunc_234(Local_318[1 /*25*/]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_318[1 /*25*/], 1);
						iLocal_3038[0] = PLAYER::PLAYER_PED_ID();
						iLocal_3038[2] = Local_318[1 /*25*/];
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_318[1 /*25*/], 1);
						TASK::TASK_PLAY_ANIM(Local_318[1 /*25*/], cLocal_7049, "_leadin_trevor", 8f, -8f, -1, 1, 0, 0, 0, 0);
						TASK::TASK_LOOK_AT_ENTITY(Local_318[1 /*25*/], iLocal_3038[0], -1, 2048, 4);
						iLocal_7046 = 4;
					}
				}
			}
			break;
		
		case 4:
			break;
		
		case 5:
			break;
	}
}


void func_586()//Position - 0x62FD5
{
	if (GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
	{
		switch (iLocal_7047)
		{
			case 0:
				iLocal_7047 = 1;
				break;
			
			case 1:
				if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_97, 1) <= 100f)
				{
					if (GlobalFunc_8315() == 0)
					{
						CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("MIC_3_EXT", 131069, 8);
					}
					else if (GlobalFunc_8315() == 2)
					{
						CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("MIC_3_EXT", 131070, 8);
					}
					iLocal_7047 = 2;
				}
				break;
			
			case 2:
				if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_97, 1) >= 120f)
				{
					CUTSCENE::REMOVE_CUTSCENE();
					iLocal_7047 = 1;
				}
				if (CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					iLocal_7047 = 3;
				}
				break;
			
			case 3:
				if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_97, 1) >= 120f)
				{
					CUTSCENE::REMOVE_CUTSCENE();
					iLocal_7047 = 1;
				}
				break;
			}
	}
}

void func_587()//Position - 0x630AA
{
	int iVar0;
	
	switch (iLocal_7043)
	{
		case 0:
			iLocal_7043 = 1;
			break;
		
		case 1:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (GlobalFunc_234(iVar0))
				{
					GlobalFunc_504(iVar0, -1);
				}
				iLocal_7043 = 2;
			}
			break;
		
		case 2:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				GlobalFunc_504(0, -1);
				iLocal_7043 = 1;
			}
			break;
		
		case 3:
			break;
	}
}

void func_588()//Position - 0x6311F
{
	if (GlobalFunc_234(iLocal_4050))
	{
		switch (iLocal_50)
		{
			case 0:
				if (!ENTITY::DOES_ENTITY_EXIST(Local_1744[13 /*7*/]))
				{
					Local_1744[13 /*7*/] = VEHICLE::CREATE_VEHICLE(joaat("carbonizzare"), -2336.495f, 271.2482f, 168.4672f, 203.97f, 1, 1);
					if (GlobalFunc_234(Local_1744[13 /*7*/]))
					{
						ENTITY::SET_ENTITY_PROOFS(Local_1744[13 /*7*/], 1, 1, 1, 1, 1, 0, 0, 0);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1744[13 /*7*/], 0);
					}
				}
				iLocal_50 = 1;
				break;
			
			case 1:
				func_589();
				iLocal_50 = 2;
				break;
			
			case 2:
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_4050))
				{
					if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_4050) >= 29)
					{
						TASK::WAYPOINT_PLAYBACK_START_SHOOTING_AT_PED(iLocal_4050, Local_318[46 /*25*/], 0, 0);
						iLocal_50 = 3;
					}
				}
				break;
			
			case 3:
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_4050, 2f, 0);
				func_579(&iLocal_4050, &uLocal_4072, 0);
				if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_4050) >= 53 || func_578())
				{
					TASK::WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(iLocal_4050);
					iLocal_50 = 4;
				}
				break;
			
			case 4:
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_4050, 3f, 0);
				if (GlobalFunc_234(Local_1744[13 /*7*/]) && GlobalFunc_234(iLocal_4050))
				{
					if (GlobalFunc_156(iLocal_4050, Local_1744[13 /*7*/], 1) <= 7f)
					{
						TASK::CLEAR_PED_TASKS(iLocal_4050);
						iLocal_4047 = 1;
						TASK::TASK_ENTER_VEHICLE(iLocal_4050, Local_1744[13 /*7*/], 20000, -1, 1073741824, 1, 0);
						iLocal_50 = 5;
					}
				}
				break;
			
			case 5:
				if (GlobalFunc_234(Local_1744[13 /*7*/]) && GlobalFunc_234(iLocal_4050))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_4050, Local_1744[13 /*7*/], 0))
					{
						GlobalFunc_703(&uLocal_4052);
						iLocal_50 = 6;
					}
				}
				break;
			
			case 6:
				if (GlobalFunc_234(Local_1744[13 /*7*/]) && GlobalFunc_234(iLocal_4050))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1744[13 /*7*/], 1, &cLocal_76, 1);
					GlobalFunc_5185(&uLocal_2049, 1, &cLocal_76);
					VEHICLE::SET_PLAYBACK_SPEED(Local_1744[13 /*7*/], 1.15f);
					iLocal_50 = 7;
				}
				break;
			
			case 7:
				if (GlobalFunc_234(Local_1744[13 /*7*/]) && GlobalFunc_234(iLocal_4050))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_4050, 567490903) > 1)
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1744[13 /*7*/]))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1744[13 /*7*/]) > 25000f)
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1744[13 /*7*/]);
								TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(iLocal_4050, Local_1744[13 /*7*/], -1809.189f, 72.2607f, 70.6699f, 120f, 786468, 2f);
							}
						}
					}
					else if (ENTITY::IS_ENTITY_AT_COORD(iLocal_4050, -1809.189f, 72.2607f, 70.6699f, 15f, 15f, 15f, 0, 1, 0))
					{
						TASK::CLEAR_PED_TASKS(iLocal_4050);
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_4050, Local_1744[13 /*7*/], PLAYER::PLAYER_PED_ID(), 8, 120f, 786468, -1f, -1f, 1);
						iLocal_50 = 8;
					}
				}
				break;
			
			case 8:
				if (GlobalFunc_234(Local_1744[13 /*7*/]) && GlobalFunc_234(iLocal_4050))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_4050, 1)) > 10000f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_4050))
					{
						PED::DELETE_PED(&iLocal_4050);
						VEHICLE::DELETE_VEHICLE(&(Local_1744[13 /*7*/]));
						iLocal_50 = 9;
					}
				}
				break;
			
			case 9:
				break;
			}
	}
}

void func_589()//Position - 0x63468
{
	if (GlobalFunc_234(iLocal_4050))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_4050, 1);
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_4050, cLocal_56, 0, 8, -1);
	}
}

void func_590()//Position - 0x6348F
{
	if ((iLocal_7051 && GlobalFunc_234(Local_1744[3 /*7*/])) && GlobalFunc_8315() == 0)
	{
		func_591();
	}
	if (iLocal_4047)
	{
		iLocal_4047 = 0;
		iLocal_7045 = 9;
	}
	switch (iLocal_7045)
	{
		case 0:
			if (func_461("M3_ESC1"))
			{
				iLocal_7053 = 1;
				iLocal_7045 = 20;
			}
			break;
		
		case 3:
			if (GlobalFunc_8315() == 0)
			{
				if (func_461("M3_SEECHOP"))
				{
					iLocal_7051 = 1;
					GlobalFunc_6877(&uLocal_4057);
					GlobalFunc_6877(&uLocal_7066);
					iLocal_7045 = 4;
				}
			}
			else
			{
				iLocal_7051 = 1;
				iLocal_7045 = 20;
			}
			break;
		
		case 4:
			if (iLocal_7053)
			{
				iLocal_7045 = 20;
			}
			if (GlobalFunc_5182(&uLocal_7066) >= 15f)
			{
				if (func_461("M3_TAIL"))
				{
					iLocal_7045 = 20;
				}
			}
			break;
		
		case 9:
			if (func_461("M3_GETINCAR"))
			{
				iLocal_7045 = 10;
			}
			break;
		
		case 10:
			if (func_461("M3_BYEDAVE"))
			{
				iLocal_7045 = 20;
			}
			break;
	}
}

void func_591()//Position - 0x63598
{
	if (GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
	{
		if ((GlobalFunc_5182(&uLocal_4057) >= 10f && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && !GlobalFunc_5172(&uLocal_283, 1))
		{
			if (func_592("M3_CHOPATT"))
			{
				GlobalFunc_6877(&uLocal_4057);
			}
		}
	}
}

int func_592(char[4] cParam0)//Position - 0x635E6
{
	if (GlobalFunc_5170())
	{
		if (GlobalFunc_10607(&uLocal_115, &cLocal_54, cParam0, 7, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_593()//Position - 0x6360B
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (iLocal_7024 > 1)
	{
		func_639();
		func_573();
		func_582();
		func_588();
		func_636();
		if (!GlobalFunc_4492(&(Local_1920[10 /*8*/])))
		{
			GlobalFunc_4493(&(Local_1920[10 /*8*/]), 0, 0, 1);
			GlobalFunc_4493(&(Local_1920[11 /*8*/]), 5000, 0, 1);
		}
		else
		{
			GlobalFunc_661(Local_318[46 /*25*/], &(Local_318[46 /*25*/].f_13), -1, 0, 1, 0, -1082130432, 0);
			GlobalFunc_661(Local_318[47 /*25*/], &(Local_318[47 /*25*/].f_13), -1, 0, 1, 0, -1082130432, 0);
			GlobalFunc_661(Local_318[48 /*25*/], &(Local_318[48 /*25*/].f_13), -1, 0, 1, 0, -1082130432, 0);
			GlobalFunc_661(Local_318[49 /*25*/], &(Local_318[49 /*25*/].f_13), -1, 0, 1, 0, -1082130432, 0);
			GlobalFunc_661(Local_318[50 /*25*/], &(Local_318[50 /*25*/].f_13), -1, 0, 1, 0, -1082130432, 0);
			GlobalFunc_661(Local_318[55 /*25*/], &(Local_318[55 /*25*/].f_13), -1, 0, 1, 0, -1082130432, 0);
			GlobalFunc_661(Local_318[56 /*25*/], &(Local_318[56 /*25*/].f_13), -1, 0, 1, 0, -1082130432, 0);
		}
	}
	if (bLocal_3037)
	{
		func_570();
	}
	switch (iLocal_7024)
	{
		case 0:
			GlobalFunc_718(&uLocal_2049, iLocal_64);
			GlobalFunc_718(&uLocal_2049, iLocal_65);
			GlobalFunc_718(&uLocal_2049, iLocal_63);
			GlobalFunc_718(&uLocal_2049, joaat("carbonizzare"));
			GlobalFunc_718(&uLocal_2049, joaat("dominator"));
			func_567(&uLocal_2049, 1, &cLocal_76);
			func_567(&uLocal_2049, 2, &cLocal_76);
			GlobalFunc_727(&uLocal_2049, cLocal_56);
			GlobalFunc_727(&uLocal_2049, cLocal_57);
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1744[10 /*7*/]) && STREAMING::HAS_MODEL_LOADED(joaat("carbonizzare")))
			{
				Local_1744[10 /*7*/] = VEHICLE::CREATE_VEHICLE(joaat("carbonizzare"), -2319.798f, 302.1291f, 168.4667f, 115.6683f, 1, 1);
			}
			func_634();
			iLocal_50 = 0;
			iLocal_4047 = 0;
			iLocal_7024 = 1;
			break;
		
		case 1:
			if ((((((((STREAMING::HAS_MODEL_LOADED(iLocal_64) && STREAMING::HAS_MODEL_LOADED(iLocal_65)) && STREAMING::HAS_MODEL_LOADED(iLocal_63)) && STREAMING::HAS_MODEL_LOADED(joaat("carbonizzare"))) && STREAMING::HAS_MODEL_LOADED(joaat("dominator"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, &cLocal_76)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, &cLocal_76)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(cLocal_57)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(cLocal_56))
			{
				GlobalFunc_11043(6, "ESCAPE MUSEUM", 0, 0, 0, 1);
				GlobalFunc_4493(&(Local_1920[12 /*8*/]), 0, 0, 1);
				iLocal_7025 = 0;
				GlobalFunc_563(1);
				func_13(1);
				AUDIO::STOP_AUDIO_SCENE("MI_3_SHOOTOUT_PLAYER_IS_MICHAEL");
				AUDIO::STOP_AUDIO_SCENE("MI_3_SHOOTOUT_PLAYER_IS_TREVOR");
				AUDIO::STOP_AUDIO_SCENE("MI_3_KILL_ENEMIES_IN_COURTYARD");
				AUDIO::START_AUDIO_SCENE("MI_3_ESCAPE_IN_CAR");
				iLocal_7024 = 2;
			}
			break;
		
		case 2:
			if (iLocal_6494 == 0 || iLocal_6494 == 1)
			{
				if (GlobalFunc_8315() == 2 && Global_89962.f_12[1] == 0)
				{
					iLocal_4051 = func_28();
					func_156(1, 1, 1, 0, 0, 0);
					GlobalFunc_6877(&uLocal_4069);
					iLocal_7024 = 3;
				}
				else
				{
					if (GlobalFunc_8315() == 2)
					{
						iLocal_4051 = func_28();
					}
					else if (GlobalFunc_8315() == 0)
					{
						iLocal_4051 = func_29();
					}
					iLocal_7024 = 5;
				}
			}
			else
			{
				func_615();
			}
			break;
		
		case 3:
			if (GlobalFunc_226(&uLocal_4069))
			{
				if (GlobalFunc_5182(&uLocal_4069) >= 1f)
				{
					func_156(0, 0, 0, 0, 0, 0);
					GlobalFunc_9019(&iLocal_3038, 0);
					Local_3082.f_15 = 1;
					Local_3082.f_12 = iLocal_3038[iLocal_3038.f_7];
					Local_3082.f_20 = 1;
					iLocal_7024 = 4;
				}
			}
			break;
		
		case 4:
			if (!func_596(&Local_3082, 0, 1148829696, 1148829696))
			{
				if (GlobalFunc_10993(&iLocal_3038, 1, 0, 0))
				{
					func_26(&Local_4892, 1);
					func_26(&Local_5907, 1);
					func_156(1, 1, 1, 0, 0, 0);
					GlobalFunc_703(&uLocal_4053);
					GlobalFunc_703(&(Local_318[1 /*25*/].f_8));
					GlobalFunc_703(&(Local_318[0 /*25*/].f_8));
					if (GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
						ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
					}
					if (GlobalFunc_234(func_29()))
					{
						ENTITY::SET_ENTITY_PROOFS(func_29(), 1, 1, 1, 1, 1, 0, 0, 0);
						ENTITY::SET_ENTITY_INVINCIBLE(func_29(), 1);
					}
					iLocal_7024 = 5;
				}
			}
			break;
		
		case 5:
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			if (func_595() || !GlobalFunc_7259(&Local_7034))
			{
				if (GlobalFunc_8315() == 2)
				{
					Global_89962.f_12[0] = 1;
				}
				else if (GlobalFunc_8315() == 0)
				{
					Global_89962.f_12[0] = 0;
				}
				if (GlobalFunc_5980(&Local_6060, func_29()) || GlobalFunc_156(func_29(), Local_1744[16 /*7*/], 1) <= 30f)
				{
					Global_89962.f_12[1] = 0;
				}
				else
				{
					Global_89962.f_12[1] = 1;
				}
				iLocal_7024 = 7;
			}
			break;
		
		case 7:
			PED::DELETE_PED(&(Local_318[54 /*25*/]));
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_318[52 /*25*/]));
			VEHICLE::DELETE_VEHICLE(&(Local_1744[4 /*7*/]));
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1744[2 /*7*/]));
			func_26(&Local_5907, 0);
			func_26(&Local_5501, 0);
			func_26(&Local_5349, 0);
			func_26(&Local_5273, 0);
			func_26(&Local_5425, 0);
			iLocal_7024 = 6;
			func_48(8);
			break;
		
		case 6:
			break;
	}
}


int func_595()//Position - 0x63B7F
{
	if (func_472(&uLocal_283, Local_94, Local_7026, Local_7026.f_3, Local_7026.f_6, 1, "M3_OBJPLOT", 1, 1, -1))
	{
		return 1;
	}
	return 0;
}

int func_596(var uParam0, int iParam1, float fParam2, float fParam3)//Position - 0x63BB4
{
	return func_597(uParam0, 0, 3, iParam1, fParam2, fParam3, 0, 0, 0, 6, 0, 0, 0);
	return 1;
}

int func_597(var uParam0, int iParam1, int iParam2, var uParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, int iParam12)//Position - 0x63BD5
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
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
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
						GlobalFunc_7981(0, 1);
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
						GlobalFunc_7981(0, 1);
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
				GlobalFunc_7981(0, 1);
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
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			GRAPHICS::SET_CURRENT_PLAYER_TCMODIFIER(GlobalFunc_707(GlobalFunc_8315()));
		}
		GlobalFunc_748(0);
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(0, 0);
		return 0;
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	return 1;
}


















void func_615()//Position - 0x64524
{
	PED::SET_PED_RESET_FLAG(func_28(), 283, 1);
	PED::SET_PED_RESET_FLAG(func_29(), 283, 1);
	switch (iLocal_6494)
	{
		case 0:
			GlobalFunc_2774(&iLocal_3038, 1, 1);
			GlobalFunc_2774(&iLocal_3038, 0, 0);
			GlobalFunc_2774(&iLocal_3038, 2, 0);
			iLocal_6494 = 1;
			break;
		
		case 1:
			if (GlobalFunc_10238(&iLocal_3038, PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()), 1))
			{
				if (GlobalFunc_2778(&iLocal_3038, 0) || GlobalFunc_2778(&iLocal_3038, 2))
				{
					Local_3082.f_12 = iLocal_3038[iLocal_3038.f_7];
					Local_3082.f_20 = 1;
					WEAPON::GET_CURRENT_PED_WEAPON(func_28(), &iLocal_6495, 1);
					WEAPON::GET_CURRENT_PED_WEAPON(func_29(), &iLocal_6496, 1);
					if (iLocal_6337)
					{
						if (AUDIO::PREPARE_MUSIC_EVENT("MIC3_SNIPE"))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("MIC3_SNIPE");
							GlobalFunc_2904(&iLocal_3038, 0, 0);
						}
					}
					iLocal_6494 = 2;
				}
			}
			break;
		
		case 2:
			if (func_596(&Local_3082, 0, 1148829696, 1148829696))
			{
				if (Local_3082.f_18)
				{
					if (!Local_3082.f_19)
					{
						if (GlobalFunc_10993(&iLocal_3038, 1, 1, 0))
						{
							GlobalFunc_565(437, 1, 0);
							if (iLocal_6337)
							{
								if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_6394.f_3, 2f, 2f, 2f, 0, 1, 0))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
									TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(PLAYER::PLAYER_PED_ID(), Local_6394.f_3, 5000, 1, 0f, 1, 0, Local_6394, 0);
								}
								if (iLocal_3030 == 5)
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2209.834f, 240.2652f, 183.3549f, -2228.96f, 280.9032f, 186.6041f, 13f, 0, 1, 0))
									{
										func_628(&(Local_5069[2 /*25*/]), iLocal_64, -2235.643f, 296.4889f, 183.6051f, 203f, "WKWAY_FIB2_3", iLocal_314, iLocal_74, 10, 0, 0, 0);
										PED::REMOVE_PED_DEFENSIVE_AREA(Local_5069[2 /*25*/], 0);
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_5069[2 /*25*/], -2235.643f, 296.4889f, 183.6051f, 2f, 0, 0);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_5069[2 /*25*/], 100f, 0);
									}
								}
								iLocal_6337 = 0;
							}
							if (GlobalFunc_8315() == 2)
							{
								if (iLocal_3030 == 5 || iLocal_3030 == 6)
								{
									if (GlobalFunc_5980(&Local_6060, func_29()))
									{
										CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-30f, 1065353216);
									}
								}
							}
							GlobalFunc_703(&uLocal_4053);
							GlobalFunc_703(&(Local_318[0 /*25*/].f_8));
							GlobalFunc_703(&(Local_318[1 /*25*/].f_8));
							iLocal_6494 = 3;
						}
					}
				}
			}
			break;
		
		case 3:
			if (func_627(&Local_3082, 0, 0, 1148829696, 1148829696, 0, 0, 0, 0, 0))
			{
			}
			else
			{
				GlobalFunc_2904(&iLocal_3038, 0, 0);
				GlobalFunc_703(&uLocal_4053);
				GlobalFunc_703(&(Local_318[0 /*25*/].f_8));
				GlobalFunc_703(&(Local_318[1 /*25*/].f_8));
				if (GlobalFunc_234(iLocal_3038[0]))
				{
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_3038[0], 1);
					ENTITY::SET_ENTITY_PROOFS(iLocal_3038[0], 1, 1, 1, 1, 1, 0, 0, 0);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_3038[0], 1);
				}
				if (GlobalFunc_234(iLocal_3038[2]))
				{
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_3038[2], 1);
					ENTITY::SET_ENTITY_PROOFS(iLocal_3038[2], 1, 1, 1, 1, 1, 0, 0, 0);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_3038[2], 1);
				}
				if (GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), 0);
					ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
				}
				if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == GlobalFunc_4917(2))
				{
					Local_318[0 /*25*/] = iLocal_3038[0];
					Local_318[1 /*25*/] = PLAYER::PLAYER_PED_ID();
					iLocal_4051 = func_28();
					GlobalFunc_173(&uLocal_115, 0, Local_318[0 /*25*/], "MICHAEL", 0, 1);
					GlobalFunc_173(&uLocal_115, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
					WEAPON::SET_CURRENT_PED_WEAPON(func_29(), iLocal_6496, 1);
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(PLAYER::PLAYER_PED_ID(), 0);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(func_28(), "MI_3_MICHAEL_GROUP", 0);
					AUDIO::STOP_AUDIO_SCENE("MI_3_SHOOTOUT_PLAYER_IS_MICHAEL");
					AUDIO::START_AUDIO_SCENE("MI_3_SHOOTOUT_PLAYER_IS_TREVOR");
					switch (iLocal_3030)
					{
						case 5:
							GlobalFunc_2998(&iLocal_3038, 0, 0);
							if (iLocal_6346)
							{
								func_625();
							}
							if (GlobalFunc_5980(&Local_6084, func_28()))
							{
								func_624(func_28(), -2229.825f, 278.2293f, 183.6041f, 0, 1077936128, 1);
								iLocal_52 = 2;
							}
							else if (GlobalFunc_5980(&Local_6092, func_28()))
							{
								if (GlobalFunc_234(Local_5069[2 /*25*/]))
								{
									ENTITY::SET_ENTITY_HEALTH(Local_5069[2 /*25*/], 0);
								}
								if (func_623(&Local_4740) == 0)
								{
									iLocal_6345 = 1;
								}
								iLocal_52 = 3;
							}
							else if (GlobalFunc_5980(&Local_6100, func_28()))
							{
								iLocal_52 = 5;
							}
							else if (iLocal_4046)
							{
								iLocal_52 = 6;
							}
							break;
						
						case 6:
							if (GlobalFunc_234(func_28()))
							{
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_28());
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_28(), 0);
								PED::SET_PED_COMBAT_MOVEMENT(func_28(), 1);
								func_622(func_28(), Local_6236, 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(func_28(), 250f, 0);
							}
							break;
						
						case 7:
						case 8:
							iLocal_51 = 1;
							break;
						}
				}
				if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == GlobalFunc_4917(0))
				{
					func_168(&uLocal_4053, iLocal_3038[2], 0);
					Local_318[1 /*25*/] = iLocal_3038[2];
					Local_318[0 /*25*/] = PLAYER::PLAYER_PED_ID();
					iLocal_4051 = func_29();
					GlobalFunc_173(&uLocal_115, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
					GlobalFunc_173(&uLocal_115, 2, Local_318[1 /*25*/], "TREVOR", 0, 1);
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(PLAYER::PLAYER_PED_ID(), 0);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(func_29(), "MI_3_TREVOR_GROUP", 0);
					AUDIO::START_AUDIO_SCENE("MI_3_SHOOTOUT_PLAYER_IS_MICHAEL");
					AUDIO::STOP_AUDIO_SCENE("MI_3_SHOOTOUT_PLAYER_IS_TREVOR");
					WEAPON::SET_CURRENT_PED_WEAPON(func_28(), iLocal_6495, 1);
					switch (iLocal_3030)
					{
						case 5:
							if (iLocal_6346)
							{
								func_620();
							}
							if (GlobalFunc_5980(&Local_6060, func_29()))
							{
								PED::REMOVE_PED_DEFENSIVE_AREA(func_29(), 0);
								func_622(func_29(), Local_6068, 0, 0);
							}
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_3038[2]);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_3038[2], 250f, 0);
							break;
						
						case 6:
							if (GlobalFunc_234(func_29()))
							{
								if (GlobalFunc_5980(&Local_6060, func_29()))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_29(), 0);
									func_622(func_29(), Local_6068, 0, 0);
									func_616();
								}
								else
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_29());
									PED::REMOVE_PED_DEFENSIVE_AREA(func_29(), 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_29(), 0);
									PED::SET_PED_COMBAT_MOVEMENT(func_29(), 1);
									func_622(func_29(), Local_6236, 0, 0);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(func_29(), 250f, 0);
								}
							}
							ENTITY::SET_ENTITY_INVINCIBLE(iLocal_4050, 1);
							ENTITY::SET_ENTITY_PROOFS(iLocal_4050, 1, 1, 1, 1, 1, 0, 0, 0);
							break;
						
						case 7:
						case 8:
							iLocal_51 = 1;
							break;
						}
				}
				iLocal_6494 = 0;
			}
			break;
	}
}

void func_616()//Position - 0x64BA7
{
	TASK::CLEAR_PED_TASKS(func_29());
	func_619(1);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_6443.f_3, 3f, -1, 1048576000, 0, 1193033728);
	TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_6443.f_3, -1, 1, 0.5f, 0, 1, Local_6443, 1);
	func_617(func_29(), 1);
}

void func_617(int iParam0, bool bParam1)//Position - 0x64BF7
{
	func_618();
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		TASK::CLEAR_PED_TASKS(iParam0);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, uLocal_281);
		if (bParam1)
		{
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_281);
		}
	}
}

void func_618()//Position - 0x64C27
{
	if (iLocal_282)
	{
		TASK::CLOSE_SEQUENCE_TASK(uLocal_281);
		iLocal_282 = 0;
	}
}

void func_619(bool bParam0)//Position - 0x64C40
{
	if (bParam0)
	{
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_281);
	}
	if (!iLocal_282)
	{
		TASK::OPEN_SEQUENCE_TASK(&uLocal_281);
		iLocal_282 = 1;
	}
}

void func_620()//Position - 0x64C66
{
	if (GlobalFunc_234(Local_4740[0 /*25*/]))
	{
		PED::SET_PED_ACCURACY(Local_4740[0 /*25*/], 5);
		func_621(&(Local_4740[0 /*25*/]));
		PED::REMOVE_PED_DEFENSIVE_AREA(Local_4740[0 /*25*/], 0);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_4740[0 /*25*/], -2224.532f, 302.5728f, 183.603f, 5f, 1, 0);
	}
	if (GlobalFunc_234(Local_4740[1 /*25*/]))
	{
		PED::SET_PED_ACCURACY(Local_4740[1 /*25*/], 5);
		func_621(&(Local_4740[1 /*25*/]));
		PED::REMOVE_PED_DEFENSIVE_AREA(Local_4740[1 /*25*/], 0);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_4740[1 /*25*/], -2220.867f, 295.1673f, 183.603f, 5f, 1, 0);
	}
}

void func_621(int iParam0)//Position - 0x64D00
{
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
		PED::REMOVE_PED_DEFENSIVE_AREA(*iParam0, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 51, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 37, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 50, 1);
		PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 2);
	}
}

void func_622(int iParam0, struct<7> Param1, var uParam8, int iParam9, int iParam10)//Position - 0x64D49
{
	if (GlobalFunc_234(iParam0))
	{
		PED::SET_PED_ANGLED_DEFENSIVE_AREA(iParam0, Param1, Param1.f_3, Param1.f_6, iParam9, iParam10);
	}
}

int func_623(int iParam0)//Position - 0x64D72
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= (*iParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar1 /*25*/]))
		{
			if (!PED::IS_PED_DEAD_OR_DYING((*iParam0)[iVar1 /*25*/], 1) && !PED::IS_PED_INJURED((*iParam0)[iVar1 /*25*/]))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_624(int iParam0, struct<3> Param1, bool bParam4, float fParam5, bool bParam6)//Position - 0x64DC7
{
	float fVar0;
	
	fVar0 = 2f;
	if (GlobalFunc_234(iParam0))
	{
		if (bParam6)
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
		}
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, 0);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam0, Param1, fVar0, 0, 0);
		PED::SET_PED_COMBAT_MOVEMENT(iParam0, 1);
		if (bParam4)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 0);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iParam0, 500f, 0);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
			func_619(1);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Param1, fParam5, 20000, 1048576000, 0, 1193033728);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 500f, 0);
			func_617(iParam0, 1);
		}
	}
}

void func_625()//Position - 0x64E5A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Local_4740 - 1))
	{
		if (GlobalFunc_234(Local_4740[iVar0 /*25*/]))
		{
			PED::REMOVE_PED_DEFENSIVE_AREA(Local_4740[iVar0 /*25*/], 0);
			PED::SET_PED_ANGLED_DEFENSIVE_AREA(Local_4740[iVar0 /*25*/], -2225.685f, 303.0134f, 183.353f, -2241.656f, 295.6912f, 186.6051f, 3.5f, 0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_4740[iVar0 /*25*/], 51, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_4740[iVar0 /*25*/], 37, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_4740[iVar0 /*25*/], 50, 0);
		}
		iVar0++;
	}
}


int func_627(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, int iParam9)//Position - 0x64F04
{
	return func_597(uParam0, 0, iParam1, iParam2, fParam3, fParam4, bParam5, bParam6, iParam7, 2, 0, bParam8, iParam9);
	return 1;
}

void func_628(int iParam0, int iParam1, struct<3> Param2, float fParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x64F2B
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		func_22(&(iParam0->f_1));
		if (HUD::DOES_BLIP_EXIST(iParam0->f_8))
		{
			HUD::REMOVE_BLIP(&(iParam0->f_8));
		}
	}
	*iParam0 = PED::CREATE_PED(26, iParam1, Param2, fParam5, 1, 1);
	iParam0->f_9 = 0;
	GlobalFunc_722(*iParam0, 430);
	if (iParam7 != iLocal_310)
	{
		GlobalFunc_593(*iParam0, 0);
	}
	if (iParam7 == iLocal_311 || iParam7 == iLocal_314)
	{
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 10, 0, 1, 0);
	}
	PED::SET_PED_DIES_WHEN_INJURED(*iParam0, 1);
	func_629(iParam0, sParam6, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12);
}

void func_629(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x64FCD
{
	int iVar0;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1))
	{
		PED::SET_PED_NAME_DEBUG(*uParam0, sParam1);
	}
	if (*uParam0 != PLAYER::PLAYER_PED_ID())
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iParam2);
	}
	if (iParam3 != joaat("weapon_unarmed"))
	{
		WEAPON::GIVE_WEAPON_TO_PED(*uParam0, iParam3, -1, 1, 1);
	}
	if (iParam6 == 1)
	{
		if (((((iParam2 == iLocal_311 || iParam2 == iLocal_312) || iParam2 == iLocal_313) || iParam2 == iLocal_315) || iParam2 == iLocal_314) || iParam2 == iLocal_316)
		{
			func_168(&(uParam0->f_8), *uParam0, 1);
		}
		else
		{
			func_168(&(uParam0->f_8), *uParam0, 0);
		}
	}
	if (iParam7 != 0)
	{
		PED::SET_PED_PREFERRED_COVER_SET(*uParam0, iParam7);
	}
	iVar0 = PED::GET_PED_ARMOUR(*uParam0);
	if (iVar0 != iParam5)
	{
		PED::ADD_ARMOUR_TO_PED(*uParam0, (iParam5 - iVar0));
	}
	PED::SET_PED_MONEY(*uParam0, 0);
	PED::SET_PED_ACCURACY(*uParam0, uParam4);
	PED::SET_PED_KEEP_TASK(*uParam0, 1);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 118, 0);
	TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
	PED::SET_PED_USING_ACTION_MODE(*uParam0, 1, -1, "DEFAULT_ACTION");
}





void func_634()//Position - 0x65293
{
	Local_7026 = { GlobalFunc_3023(-2314.241f, 296.6784f, 168.1301f, -2350.23f, 280.6497f, 172.5462f, 50f) };
	Local_7034 = { GlobalFunc_3023(-2183.566f, 141.5601f, 202.2996f, -2322.525f, 433.0201f, 81.8515f, 221.75f) };
}


void func_636()//Position - 0x65323
{
	func_637(&Local_4108, 1);
	func_637(&Local_4209, 1);
	func_637(&Local_4310, 1);
	func_637(&Local_4361, 1);
	func_637(&Local_4462, 1);
	func_637(&Local_4513, 1);
	func_637(&iLocal_5018, 1);
	func_637(&Local_5069, 1);
	func_637(&iLocal_5247, 1);
	func_637(&Local_4791, 1);
	func_637(&Local_5273, 1);
	func_637(&Local_5425, 1);
	func_637(&Local_5552, 1);
	func_637(&Local_5603, 1);
	func_637(&Local_5654, 1);
	func_637(&Local_5705, 1);
	func_637(&iLocal_5806, 1);
}

void func_637(int iParam0, bool bParam1)//Position - 0x653B3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		func_638(iParam0[iVar0 /*25*/], bParam1);
		iVar0++;
	}
}

void func_638(int iParam0, bool bParam1)//Position - 0x653DD
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		GlobalFunc_661(*iParam0, &(iParam0->f_13), -1, 0, 1, 0, -1082130432, 0);
		if (bParam1)
		{
			if (ENTITY::IS_ENTITY_DEAD(*iParam0))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
				GlobalFunc_703(&(iParam0->f_8));
				*iParam0 = 0;
			}
		}
	}
}

void func_639()//Position - 0x65426
{
	if (iLocal_4047)
	{
		iLocal_4047 = 0;
		iLocal_7025 = 9;
	}
	switch (iLocal_7025)
	{
		case 0:
			if (func_461("M3_EMDVGBYE"))
			{
				RECORDING::_0x293220DA1B46CEBC(3f, 10f, 4);
				iLocal_7025 = 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_5170())
			{
				GlobalFunc_629(&uLocal_283);
				iLocal_7025 = 2;
			}
			break;
		
		case 2:
			if (func_461("M3_FOLLOW1"))
			{
				iLocal_7025 = 3;
			}
			break;
		
		case 3:
			if (func_461("M3_FOLLOW2"))
			{
				iLocal_7025 = 20;
			}
			break;
		
		case 9:
			if (func_461("M3_GETINCAR"))
			{
				iLocal_7025 = 10;
			}
			break;
		
		case 10:
			if (func_461("M3_BYEDAVE"))
			{
				iLocal_7025 = 20;
			}
			break;
	}
}

void func_640()//Position - 0x654EB
{
	int iVar0;
	
	func_615();
	if (iLocal_6946 > 1)
	{
		func_671();
		if (GlobalFunc_234(iLocal_4050))
		{
			PED::SET_PED_RESET_FLAG(iLocal_4050, 64, 1);
		}
		if (GlobalFunc_226(&uLocal_7009))
		{
			if (GlobalFunc_5182(&uLocal_7009) >= 10f)
			{
				GlobalFunc_2904(&iLocal_3038, 0, 0);
				GlobalFunc_235(&uLocal_7009);
			}
		}
		if (GlobalFunc_8315() == 2)
		{
			if (GlobalFunc_234(func_28()))
			{
				PED::SET_PED_RESET_FLAG(func_28(), 64, 1);
			}
			func_668();
			func_667();
			func_666();
		}
		else if (GlobalFunc_8315() == 0)
		{
			if (GlobalFunc_234(func_29()))
			{
				PED::SET_PED_RESET_FLAG(func_29(), 64, 1);
			}
			if (!iLocal_7006)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2274.323f, 278.8213f, 183.3516f, -2268.358f, 265.3551f, 186.868f, 9f, 0, 1, 0))
				{
					func_665();
					iLocal_7006 = 1;
				}
			}
		}
		func_636();
		func_637(&Local_4892, 0);
		func_637(&Local_5501, 0);
		func_637(&Local_5907, 0);
	}
	if (bLocal_3037)
	{
		func_570();
	}
	switch (iLocal_6946)
	{
		case 0:
			GlobalFunc_718(&uLocal_2049, iLocal_64);
			GlobalFunc_718(&uLocal_2049, iLocal_65);
			GlobalFunc_718(&uLocal_2049, iLocal_63);
			GlobalFunc_718(&uLocal_2049, iLocal_67);
			iLocal_6947 = 0;
			iLocal_6945 = 0;
			iLocal_6944 = 0;
			iLocal_6948 = 0;
			iLocal_7008 = 0;
			iLocal_7007 = 0;
			iLocal_7005 = 0;
			iLocal_7006 = 0;
			iLocal_7002 = 0;
			iLocal_7000 = 0;
			iLocal_7001 = 0;
			iLocal_7004 = 0;
			iLocal_6338 = 0;
			bLocal_7003 = false;
			GlobalFunc_235(&uLocal_7009);
			iLocal_6946 = 1;
			break;
		
		case 1:
			if (((STREAMING::HAS_MODEL_LOADED(iLocal_64) && STREAMING::HAS_MODEL_LOADED(iLocal_65)) && STREAMING::HAS_MODEL_LOADED(iLocal_63)) && STREAMING::HAS_MODEL_LOADED(iLocal_67))
			{
				GlobalFunc_11043(5, "DAVE ESCAPES", 0, 0, 0, 1);
				AUDIO::START_AUDIO_SCENE("MI_3_KILL_ENEMIES_IN_COURTYARD");
				if (GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
					ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
				}
				GlobalFunc_6877(&uLocal_4057);
				GlobalFunc_587();
				func_562();
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_4050, 67, 0);
				ENTITY::SET_ENTITY_PROOFS(iLocal_4050, 1, 1, 0, 0, 0, 0, 0, 0);
				if (GlobalFunc_234(func_28()))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(func_28(), 1);
				}
				if (GlobalFunc_234(func_29()))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(func_29(), 1);
				}
				if (GlobalFunc_234(iLocal_4050))
				{
					PED::SET_PED_ACCURACY(iLocal_4050, 3);
				}
				func_622(iLocal_4050, Local_6236, 0, 0);
				GlobalFunc_2998(&iLocal_3038, 0, 0);
				func_663(&Local_5273, Local_6220);
				func_663(&Local_5425, Local_6228);
				if (GlobalFunc_8315() == 2 && Global_89962.f_12[1] == 0)
				{
					GlobalFunc_6877(&uLocal_7009);
					GlobalFunc_2904(&iLocal_3038, 0, 1);
				}
				func_658();
				iLocal_6946 = 2;
			}
			break;
		
		case 2:
			if (func_641())
			{
				if (GlobalFunc_8315() == 2)
				{
					if (GlobalFunc_5980(&Local_6148, func_29()))
					{
						Global_89962.f_12[0] = 0;
					}
					else
					{
						Global_89962.f_12[0] = 1;
					}
				}
				else if (GlobalFunc_8315() == 0)
				{
					Global_89962.f_12[0] = 0;
				}
				if (GlobalFunc_5980(&Local_6148, func_29()))
				{
					Global_89962.f_12[1] = 0;
				}
				else
				{
					Global_89962.f_12[1] = 1;
				}
				if (bLocal_7003)
				{
					iLocal_6946 = 4;
				}
				else
				{
					iLocal_6946 = 6;
				}
			}
			break;
		
		case 4:
			if (func_461("M3_TREV_TO"))
			{
				iLocal_6946 = 6;
			}
			break;
		
		case 5:
			if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				iLocal_6946 = 6;
			}
			break;
		
		case 6:
			func_20();
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_4050, 1);
			ENTITY::SET_ENTITY_PROOFS(iLocal_4050, 1, 1, 1, 1, 1, 0, 0, 0);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_4050, 1);
			ENTITY::SET_ENTITY_HEALTH(iLocal_4050, 200);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_4050, 67, 1);
			iLocal_6946 = 3;
			if (GlobalFunc_234(func_28()))
			{
				func_27(func_28(), 0);
			}
			if (GlobalFunc_234(func_29()))
			{
				func_27(func_29(), 0);
			}
			TASK::REMOVE_COVER_POINT(Local_6949[0 /*7*/]);
			TASK::REMOVE_COVER_POINT(Local_6949[1 /*7*/]);
			iVar0 = 0;
			while (iVar0 <= (Local_6964 - 1))
			{
				TASK::REMOVE_COVER_POINT(Local_6964[1 /*7*/]);
				iVar0++;
			}
			func_48(7);
			break;
		
		case 3:
			break;
	}
}

int func_641()//Position - 0x65904
{
	if (iLocal_6947 > 0)
	{
		if (!GlobalFunc_234(Local_1744[2 /*7*/]))
		{
			func_653();
		}
	}
	switch (iLocal_6947)
	{
		case 0:
			func_651();
			func_649();
			GlobalFunc_6877(&uLocal_7018);
			iLocal_6947 = 1;
			break;
		
		case 1:
			if ((func_648(&Local_5983, &Local_5273, &Local_5425) + func_623(&Local_5501)) <= 1)
			{
				iLocal_6947 = 7;
			}
			break;
		
		case 7:
			if (func_642())
			{
				iLocal_6947 = 8;
			}
			break;
		
		case 8:
			return 1;
			break;
	}
	return 0;
}

int func_642()//Position - 0x65992
{
	if (iLocal_7005)
	{
		func_647();
	}
	if (GlobalFunc_5980(&Local_6060, func_29()))
	{
		if ((iLocal_6945 != 3 && iLocal_6945 != 4) && iLocal_6945 != 7)
		{
			if (GlobalFunc_8315() == 2)
			{
				iLocal_6945 = 3;
			}
		}
		switch (iLocal_6945)
		{
			case 0:
				if (func_461("M3_TRB_TREV"))
				{
					GlobalFunc_235(&uLocal_7012);
					GlobalFunc_235(&uLocal_7015);
					GlobalFunc_6877(&uLocal_7015);
					func_616();
					iLocal_6945 = 1;
				}
				break;
			
			case 1:
				if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					GlobalFunc_2998(&iLocal_3038, 2, 1);
					GlobalFunc_6877(&uLocal_7012);
					iLocal_6945 = 2;
				}
				break;
			
			case 2:
				if ((func_623(&Local_4892) + func_623(&Local_5907)) <= 1)
				{
					GlobalFunc_2998(&iLocal_3038, 2, 0);
					iLocal_6945 = 7;
				}
				else
				{
					if (!iLocal_7000)
					{
						if (GlobalFunc_5182(&uLocal_7012) >= 12f)
						{
							if (func_461("M3_TRB_NOS"))
							{
								iLocal_7000 = 1;
							}
						}
					}
					if (!iLocal_7001)
					{
						if (GlobalFunc_5182(&uLocal_7012) >= 24f)
						{
							if (func_461("M3_TRB_URG"))
							{
								iLocal_7001 = 1;
							}
						}
					}
					if (GlobalFunc_5182(&uLocal_7012) >= 30f)
					{
						ENTITY::SET_ENTITY_HEALTH(func_29(), 0);
						GlobalFunc_2998(&iLocal_3038, 2, 0);
						iLocal_6945 = 6;
					}
				}
				break;
			
			case 3:
				if (GlobalFunc_226(&uLocal_7012))
				{
					GlobalFunc_5693(&uLocal_7012);
				}
				if (GlobalFunc_226(&uLocal_7015))
				{
					GlobalFunc_5693(&uLocal_7015);
				}
				if (!iLocal_7005)
				{
					iLocal_7005 = 1;
				}
				iLocal_6944 = 0;
				GlobalFunc_2998(&iLocal_3038, 2, 0);
				iLocal_6945 = 4;
				break;
			
			case 4:
				if ((func_623(&Local_4892) + func_623(&Local_5907)) == 0)
				{
					GlobalFunc_2998(&iLocal_3038, 2, 0);
					iLocal_6945 = 7;
				}
				if (!iLocal_7002)
				{
					if (func_644(&Local_5907) || func_644(&Local_4892))
					{
						if (func_461("M3_TREV_ATT"))
						{
							iLocal_7002 = 1;
						}
					}
				}
				if (GlobalFunc_8315() == 0)
				{
					iLocal_7005 = 0;
					iLocal_7008 = 0;
					if (GlobalFunc_226(&uLocal_7012))
					{
						GlobalFunc_6421(&uLocal_7012);
						GlobalFunc_2998(&iLocal_3038, 2, 1);
						iLocal_6945 = 2;
					}
					else
					{
						if (GlobalFunc_226(&uLocal_7015))
						{
							GlobalFunc_6421(&uLocal_7015);
						}
						iLocal_6945 = 1;
					}
				}
				break;
			
			case 6:
				break;
			
			case 7:
				bLocal_7003 = true;
				return 1;
				break;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}


int func_644(int iParam0)//Position - 0x65C1D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (func_645(PLAYER::PLAYER_PED_ID(), iParam0[iVar0 /*25*/]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_645(int iParam0, var uParam1)//Position - 0x65C51
{
	int iVar0;
	
	if (!GlobalFunc_234(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(*uParam1))
	{
		iVar0 = PED::GET_PED_SOURCE_OF_DEATH(*uParam1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar0))
			{
				if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == iParam0)
				{
					if (PED::GET_PED_TIME_OF_DEATH(*uParam1) == MISC::GET_GAME_TIMER())
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}


void func_647()//Position - 0x65CF3
{
	struct<3> Var0;
	struct<3> Var3[9];
	
	Var0 = { -2280f, 256f, 185f };
	if (iLocal_7008 >= Var3.x)
	{
		return;
	}
	Var3[0 /*3*/] = { -2269.21f, 235.8647f, 194.4402f };
	Var3[1 /*3*/] = { -2269.248f, 235.8652f, 194.2101f };
	Var3[2 /*3*/] = { -2268.524f, 235.8525f, 194.3913f };
	Var3[3 /*3*/] = { -2268.874f, 235.8587f, 194.4197f };
	Var3[4 /*3*/] = { -2269.069f, 235.8622f, 194.4272f };
	Var3[5 /*3*/] = { -2268.699f, 235.8556f, 194.4382f };
	Var3[6 /*3*/] = { -2268.991f, 235.8606f, 194.1916f };
	Var3[7 /*3*/] = { -2269.113f, 235.8629f, 194.3331f };
	Var3[8 /*3*/] = { -2269.223f, 235.865f, 194.4406f };
	if ((MISC::GET_FRAME_COUNT() % 2) == 0)
	{
		MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var0, Var3[iLocal_7008 /*3*/], 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
		iLocal_7008++;
	}
}

int func_648(int iParam0, int iParam1, int iParam2)//Position - 0x65E18
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = (iVar0 + func_623(iParam0));
	iVar0 = (iVar0 + func_623(iParam1));
	iVar0 = (iVar0 + func_623(iParam2));
	return iVar0;
}

void func_649()//Position - 0x65E46
{
	int iVar0;
	
	func_628(&(Local_5501[0 /*25*/]), iLocal_65, -2284.384f, 306.5045f, 183.6011f, 241f, "FIN_CIA_1", iLocal_316, iLocal_73, 5, 0, 0, 0);
	func_628(&(Local_5501[1 /*25*/]), iLocal_65, -2285.439f, 305.4445f, 183.6012f, 241f, "FIN_CIA_2", iLocal_316, iLocal_73, 5, 0, 0, 0);
	func_624(Local_5501[0 /*25*/], -2264.213f, 314.9825f, 183.6021f, 1, 1077936128, 1);
	func_624(Local_5501[1 /*25*/], -2263.227f, 314.9744f, 183.6021f, 1, 1077936128, 1);
	iVar0 = 0;
	while (iVar0 <= (Local_5501 - 1))
	{
		func_650(&(Local_5501[iVar0 /*25*/]));
		ENTITY::SET_ENTITY_HEALTH(Local_5501[iVar0 /*25*/], 101);
		iVar0++;
	}
}

void func_650(int iParam0)//Position - 0x65F18
{
	if (GlobalFunc_234(*iParam0))
	{
		WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(*iParam0, 0.65f, 0.65f);
	}
}

void func_651()//Position - 0x65F3B
{
	int iVar0;
	struct<3> Var1[2];
	
	func_628(&(Local_5907[0 /*25*/]), iLocal_63, -2296.493f, 278.2981f, 183.6101f, 203f, "TR_DNG_MW1", iLocal_315, iLocal_75, 10, 0, 0, 0);
	func_628(&(Local_5907[1 /*25*/]), iLocal_63, -2297.085f, 279.1036f, 183.6101f, 203f, "TR_DNG_MW2", iLocal_315, iLocal_75, 10, 0, 0, 0);
	Var1[0 /*3*/] = { -2280.819f, 256.6264f, 183.6015f };
	Var1[1 /*3*/] = { -2282.621f, 255.1989f, 183.6016f };
	func_652(&(Local_6949[0 /*7*/]), Var1[0 /*3*/], 224f, 2, 0, 1, 1);
	func_652(&(Local_6949[1 /*7*/]), Var1[1 /*3*/], 200f, 2, 0, 1, 1);
	iVar0 = 0;
	while (iVar0 <= (Local_5907 - 1))
	{
		if (GlobalFunc_234(Local_5907[iVar0 /*25*/]))
		{
			PED::SET_PED_COMBAT_RANGE(Local_5907[iVar0 /*25*/], 2);
			PED::SET_PED_COMBAT_MOVEMENT(Local_5907[iVar0 /*25*/], 1);
			PED::SET_PED_ACCURACY(Local_5907[iVar0 /*25*/], 1);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_5907[iVar0 /*25*/], Var1[iVar0 /*3*/], 2f, 1, 0);
			func_650(&(Local_5907[iVar0 /*25*/]));
			func_619(1);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var1[iVar0 /*3*/], 3f, 20000, 1048576000, 0, 1193033728);
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_6949[iVar0 /*7*/].f_3, 3000, 1, 0f, 0, 0, Local_6949[iVar0 /*7*/], 1);
			TASK::TASK_COMBAT_PED(0, func_29(), 67108864, 16);
			func_617(Local_5907[iVar0 /*25*/], 1);
		}
		iVar0++;
	}
}

void func_652(var uParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x660D1
{
	*uParam0 = TASK::ADD_COVER_POINT(Param1, fParam4, iParam5, iParam6, iParam7, 0);
	uParam0->f_3 = { Param1 };
	uParam0->f_6 = fParam4;
	uParam0->f_1 = 1;
	uParam0->f_2 = iParam8;
}

void func_653()//Position - 0x66108
{
	switch (iLocal_7007)
	{
		case 0:
			func_654();
			TASK::TASK_HELI_MISSION(Local_318[54 /*25*/], Local_1744[4 /*7*/], 0, 0, -2269.684f, 314.6657f, 200.6021f, 4, 25f, 5f, 203f, 0, 0, 20f, 0);
			iLocal_7007 = 1;
			break;
		
		case 1:
			if (GlobalFunc_234(Local_318[54 /*25*/]))
			{
				if (GlobalFunc_713(Local_318[54 /*25*/], -2269.684f, 314.6657f, 200.6021f, 1) <= 5f)
				{
					WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_318[54 /*25*/], joaat("vehicle_weapon_player_buzzard"));
					TASK::TASK_HELI_MISSION(Local_318[54 /*25*/], Local_1744[4 /*7*/], 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 6, 25f, 50f, -1f, 12, 12, 50f, 0);
					iLocal_7007 = 2;
				}
			}
			else
			{
				iLocal_7007 = 3;
			}
			break;
		
		case 2:
			if (GlobalFunc_234(Local_318[54 /*25*/]))
			{
				if (GlobalFunc_713(Local_318[54 /*25*/], -2269.684f, 314.6657f, 200.6021f, 1) >= 7.5f)
				{
					TASK::TASK_HELI_MISSION(Local_318[54 /*25*/], Local_1744[4 /*7*/], 0, 0, -2269.684f, 314.6657f, 200.6021f, 4, 25f, 5f, 203f, 0, 0, 20f, 0);
					iLocal_7007 = 1;
				}
			}
			else
			{
				iLocal_7007 = 3;
			}
			break;
	}
}

void func_654()//Position - 0x6625C
{
	Local_1744[4 /*7*/] = VEHICLE::CREATE_VEHICLE(iLocal_67, -2300.761f, 385.1004f, 190f, 203f, 1, 1);
	func_657(&(Local_318[54 /*25*/]), iLocal_63, &(Local_1744[4 /*7*/]), -1, "MW_HELI_ESCAPE", iLocal_312, joaat("weapon_unarmed"), 1, 0, 0, 0);
	func_655(&(Local_1744[4 /*7*/].f_1), Local_1744[4 /*7*/], 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_318[54 /*25*/], 1);
	PED::SET_PED_SHOOT_RATE(Local_318[54 /*25*/], 50);
	PED::SET_PED_FIRING_PATTERN(Local_318[54 /*25*/], -1857128337);
}

void func_655(var uParam0, int iParam1, bool bParam2)//Position - 0x662E7
{
	GlobalFunc_703(uParam0);
	*uParam0 = GlobalFunc_6783(iParam1, bParam2, 0);
}


void func_657(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x66314
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
		func_22(&(iParam0->f_1));
		if (HUD::DOES_BLIP_EXIST(iParam0->f_8))
		{
			HUD::REMOVE_BLIP(&(iParam0->f_8));
		}
	}
	*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam2, 26, iParam1, iParam3, 1, 1);
	func_629(iParam0, sParam4, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
}

void func_658()//Position - 0x6636D
{
	int iVar0;
	struct<3> Var1[5];
	
	iVar0 = 0;
	while (iVar0 <= (Local_5349 - 1))
	{
		GlobalFunc_589(&(Local_5349[iVar0 /*25*/].f_13));
		GlobalFunc_703(&(Local_5349[iVar0 /*25*/].f_8));
		func_619(1);
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2295.219f, 405.1003f, 173.4666f, 3f, -1, 1048576000, 0, 1193033728);
		func_617(Local_5349[iVar0 /*25*/], 1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_5349[iVar0 /*25*/]));
		iVar0++;
	}
	Var1[0 /*3*/] = { -2272.982f, 263.6024f, 183.6013f };
	Var1[1 /*3*/] = { -2274.547f, 262.6579f, 183.6011f };
	Var1[2 /*3*/] = { -2276.471f, 260.7516f, 183.6012f };
	Var1[3 /*3*/] = { -2278.46f, 258.8506f, 183.6014f };
	Var1[4 /*3*/] = { -2280.185f, 257.0559f, 183.6015f };
	func_15();
	func_652(&(Local_6964[0 /*7*/]), Var1[0 /*3*/], 211.75f, 3, 0, 1, 1);
	func_652(&(Local_6964[1 /*7*/]), Var1[1 /*3*/], 214.43f, 3, 0, 1, 1);
	func_652(&(Local_6964[2 /*7*/]), Var1[2 /*3*/], 220.73f, 3, 0, 1, 1);
	func_652(&(Local_6964[3 /*7*/]), Var1[3 /*3*/], 229.85f, 3, 0, 1, 1);
	func_652(&(Local_6964[4 /*7*/]), Var1[4 /*3*/], 221.84f, 3, 0, 1, 1);
	iVar0 = 0;
	while (iVar0 <= (Local_4892 - 1))
	{
		if (GlobalFunc_234(Local_4892[iVar0 /*25*/]))
		{
			TASK::CLEAR_PED_TASKS(Local_4892[iVar0 /*25*/]);
			PED::REMOVE_PED_DEFENSIVE_AREA(Local_4892[iVar0 /*25*/], 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_4892[iVar0 /*25*/], iLocal_315);
			PED::SET_PED_COMBAT_RANGE(Local_4892[iVar0 /*25*/], 2);
			PED::SET_PED_COMBAT_MOVEMENT(Local_4892[iVar0 /*25*/], 1);
			PED::SET_PED_ACCURACY(Local_4892[iVar0 /*25*/], 1);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_4892[iVar0 /*25*/], Var1[iVar0 /*3*/], 1f, 1, 0);
			func_619(1);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_6964[iVar0 /*7*/].f_3, 3f, 20000, 1048576000, 0, 1193033728);
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_6964[iVar0 /*7*/].f_3, 3000, 1, 0f, 0, 0, Local_6964[iVar0 /*7*/], 1);
			TASK::TASK_COMBAT_PED(0, func_29(), 67108864, 16);
			func_617(Local_4892[iVar0 /*25*/], 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_4892[iVar0 /*25*/], 1);
		}
		iVar0++;
	}
	func_662();
	func_661();
	func_660(&iLocal_4867);
	func_659(&Local_5145);
	func_659(&Local_5196);
}

void func_659(int iParam0)//Position - 0x665EC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		func_660(iParam0[iVar0 /*25*/]);
		iVar0++;
	}
}

void func_660(int iParam0)//Position - 0x66614
{
	if (GlobalFunc_234(*iParam0))
	{
		GlobalFunc_703(&(iParam0->f_8));
		GlobalFunc_589(&(iParam0->f_13));
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(*iParam0);
		func_619(1);
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2314.053f, 318.9733f, 183.6101f, 3f, -1, 1048576000, 0, 1193033728);
		func_617(*iParam0, 1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
	}
}

void func_661()//Position - 0x66677
{
	int iVar0;
	
	if (func_623(&Local_5273) == 3)
	{
		iVar0 = 0;
		while (iVar0 <= (Local_5273 - 1))
		{
			if (GlobalFunc_234(Local_5273[iVar0 /*25*/]))
			{
				GlobalFunc_589(&(Local_5273[iVar0 /*25*/].f_13));
				GlobalFunc_703(&(Local_5273[iVar0 /*25*/].f_8));
				func_619(1);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
				TASK::TASK_SMART_FLEE_PED(0, func_28(), 400f, -1, 0, 0);
				func_617(Local_5273[iVar0 /*25*/], 1);
				PED::SET_PED_KEEP_TASK(Local_5273[iVar0 /*25*/], 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_5273[iVar0 /*25*/]));
				return;
			}
			iVar0++;
		}
	}
}

void func_662()//Position - 0x6670A
{
	int iVar0;
	
	if (func_623(&Local_5425) == 3)
	{
		iVar0 = 0;
		while (iVar0 <= (Local_5425 - 1))
		{
			if (GlobalFunc_234(Local_5425[iVar0 /*25*/]))
			{
				GlobalFunc_589(&(Local_5425[iVar0 /*25*/].f_13));
				GlobalFunc_703(&(Local_5425[iVar0 /*25*/].f_8));
				func_619(1);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
				TASK::TASK_SMART_FLEE_PED(0, func_28(), 400f, -1, 0, 0);
				func_617(Local_5425[iVar0 /*25*/], 1);
				PED::SET_PED_KEEP_TASK(Local_5425[iVar0 /*25*/], 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_5425[iVar0 /*25*/]));
				return;
			}
			iVar0++;
		}
	}
}

void func_663(int iParam0, struct<8> Param1)//Position - 0x6679D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (GlobalFunc_234((*iParam0)[iVar0 /*25*/]))
		{
			PED::REMOVE_PED_DEFENSIVE_AREA((*iParam0)[iVar0 /*25*/], 1);
			func_622((*iParam0)[iVar0 /*25*/], Param1, 0, 0);
		}
		iVar0++;
	}
}


void func_665()//Position - 0x667EC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Local_4892 - 1))
	{
		if (GlobalFunc_234(Local_4892[iVar0 /*25*/]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_4892[iVar0 /*25*/], 0);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_4892[iVar0 /*25*/], 100f, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_5907 - 1))
	{
		if (GlobalFunc_234(Local_5907[iVar0 /*25*/]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_5907[iVar0 /*25*/], 0);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_5907[iVar0 /*25*/], 100f, 0);
		}
		iVar0++;
	}
}

void func_666()//Position - 0x66876
{
	int iVar0;
	float fVar1;
	
	fVar1 = 12.5f;
	if (GlobalFunc_234(func_28()) && GlobalFunc_234(iLocal_4050))
	{
		iVar0 = 0;
		while (iVar0 <= (Local_5273 - 1))
		{
			if (GlobalFunc_234(Local_5273[iVar0 /*25*/]))
			{
				if (GlobalFunc_156(func_28(), Local_5273[iVar0 /*25*/], 1) <= fVar1 || GlobalFunc_156(iLocal_4050, Local_5273[iVar0 /*25*/], 1) <= fVar1)
				{
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_5273[iVar0 /*25*/], 0);
				}
				else
				{
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_5273[iVar0 /*25*/], 1);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (Local_5425 - 1))
		{
			if (GlobalFunc_234(Local_5425[iVar0 /*25*/]))
			{
				if (GlobalFunc_156(func_28(), Local_5425[iVar0 /*25*/], 1) <= fVar1 || GlobalFunc_156(iLocal_4050, Local_5425[iVar0 /*25*/], 1) <= fVar1)
				{
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_5425[iVar0 /*25*/], 0);
				}
				else
				{
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_5425[iVar0 /*25*/], 1);
				}
			}
			iVar0++;
		}
	}
}

void func_667()//Position - 0x66976
{
	switch (iLocal_6944)
	{
		case 0:
			iLocal_6944 = 1;
			break;
		
		case 1:
			ENTITY::SET_ENTITY_INVINCIBLE(func_28(), 0);
			ENTITY::SET_ENTITY_PROOFS(func_28(), 0, 0, 0, 0, 0, 0, 0, 0);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_28(), 0);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_4050, 0);
			ENTITY::SET_ENTITY_PROOFS(iLocal_4050, 0, 0, 0, 0, 0, 0, 0, 0);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_4050, 0);
			if ((((((((func_644(&Local_4892) || func_644(&Local_5501)) || func_644(&Local_5907)) || func_644(&Local_5552)) || func_644(&Local_5603)) || func_644(&Local_5654)) || func_644(&Local_5705)) || func_644(&iLocal_5806)) || func_645(Local_318[1 /*25*/], &(Local_318[54 /*25*/])))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(func_28(), 1);
				ENTITY::SET_ENTITY_PROOFS(func_28(), 1, 1, 1, 1, 1, 0, 0, 0);
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_4050, 1);
				ENTITY::SET_ENTITY_PROOFS(iLocal_4050, 1, 1, 1, 1, 1, 0, 0, 0);
				GlobalFunc_6877(&uLocal_7021);
				iLocal_6944 = 2;
			}
			break;
		
		case 2:
			if (GlobalFunc_5182(&uLocal_7021) >= 15f)
			{
				iLocal_6944 = 0;
			}
			break;
		
		case 3:
			break;
	}
}

void func_668()//Position - 0x66ABA
{
	if (!iLocal_6340)
	{
		if (GlobalFunc_7259(&Local_6164))
		{
			func_628(&(Local_5552[0 /*25*/]), iLocal_63, -2264.408f, 222.0858f, 188.6116f, 90f, "TREV_MW1_1", iLocal_312, iLocal_72, 2, 0, 0, 0);
			func_652(&Local_6436, -2264.408f, 222.0858f, 188.6116f, 90f, 1, 1, 6, 0);
			func_670(&(Local_5552[0 /*25*/]), ENTITY::GET_ENTITY_COORDS(Local_5552[0 /*25*/], 1), 1f, 1, 1, 1, 1, 1065353216, 0, 0, 1);
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_5552[0 /*25*/], Local_6436.f_3, -1, 1, 0f, 0, 0, Local_6436, 0);
			iLocal_6340 = 1;
		}
	}
	if (!iLocal_6341)
	{
		if (GlobalFunc_7259(&Local_6172))
		{
			func_628(&(Local_5603[0 /*25*/]), iLocal_63, -2274.919f, 222.9821f, 168.602f, 180f, "TREV_MW2_1", iLocal_312, iLocal_72, 2, 0, 0, 0);
			func_670(&(Local_5603[0 /*25*/]), -2275.339f, 213.2001f, 168.6117f, 5f, 1, 1, 1, 1, 1065353216, 0, 0, 1);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_5603[0 /*25*/], 100f, 0);
			iLocal_6341 = 1;
		}
	}
	if (!iLocal_6342)
	{
		if (GlobalFunc_7259(&Local_6180))
		{
			func_628(&(Local_5654[0 /*25*/]), iLocal_63, -2270.015f, 237.2899f, 168.602f, 80f, "TREV_MW3_1", iLocal_312, iLocal_72, 2, 0, 0, 0);
			func_670(&(Local_5654[0 /*25*/]), -2276.761f, 238.5518f, 168.602f, 5f, 1, 1, 1, 1, 1065353216, 0, 0, 1);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_5654[0 /*25*/], 100f, 0);
			iLocal_6342 = 1;
		}
	}
	if (!iLocal_6343)
	{
		if (GlobalFunc_7259(&Local_6188))
		{
			func_628(&(Local_5705[2 /*25*/]), iLocal_63, -2254.776f, 204.9771f, 173.6019f, 109.1509f, "TREV_MW4_3", iLocal_312, iLocal_75, 2, 0, 0, 0);
			func_670(&(Local_5705[2 /*25*/]), -2262.413f, 202.2429f, 173.6017f, 5f, 1, 1, 1, 1, 1065353216, 0, 0, 1);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_5705[2 /*25*/], 100f, 0);
			func_628(&(Local_5705[3 /*25*/]), iLocal_63, -2253.635f, 205.1871f, 173.602f, 109.1509f, "TREV_MW4_4", iLocal_312, iLocal_75, 2, 0, 0, 0);
			func_670(&(Local_5705[3 /*25*/]), -2253.646f, 197.4216f, 173.6018f, 5f, 1, 1, 1, 1, 1065353216, 0, 0, 1);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_5705[3 /*25*/], 100f, 0);
			func_669(&Local_5705, 3);
			iLocal_6343 = 1;
		}
	}
	if (!iLocal_6344)
	{
		if (GlobalFunc_7259(&Local_6196))
		{
			iLocal_6344 = 1;
		}
	}
}

void func_669(int iParam0, int iParam1)//Position - 0x66D4C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (GlobalFunc_234((*iParam0)[iVar0 /*25*/]))
		{
			PED::SET_PED_ACCURACY((*iParam0)[iVar0 /*25*/], iParam1);
		}
		iVar0++;
	}
}

void func_670(int iParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9, float fParam10, int iParam11, int iParam12)//Position - 0x66D83
{
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		PED::SET_PED_COMBAT_MOVEMENT(*iParam0, iParam5);
		PED::SET_PED_COMBAT_RANGE(*iParam0, iParam6);
		PED::SET_PED_TARGET_LOSS_RESPONSE(*iParam0, iParam7);
		PED::SET_COMBAT_FLOAT(*iParam0, 5, fParam9);
		PED::SET_COMBAT_FLOAT(*iParam0, 8, fParam10);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(*iParam0, Param1, fParam4, iParam12, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, iParam8);
		PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 37, iParam11);
	}
}

void func_671()//Position - 0x66DEA
{
	func_672();
	switch (iLocal_6948)
	{
		case 0:
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_4050, "STAY_DOWN", "SPEECH_PARAMS_FORCE", 1);
			iLocal_6948 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_5172(&uLocal_283, 0))
			{
				GlobalFunc_164("M3_OBJCYKIL", 7500, 1);
				iLocal_6948 = 20;
			}
			break;
		
		case 2:
			if (func_461("M3_GUYRIGHT"))
			{
				iLocal_6948 = 20;
			}
			break;
		
		case 3:
			if (func_461("M3_DECLOSE"))
			{
				iLocal_6948 = 20;
			}
			break;
		
		case 4:
			if (func_461("M3_DEFINALWV"))
			{
				iLocal_6948 = 20;
			}
			break;
	}
}

void func_672()//Position - 0x66E92
{
	int iVar0;
	
	if (GlobalFunc_234(iLocal_4050) && GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
	{
		if ((GlobalFunc_5182(&uLocal_4057) >= 10f && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && !GlobalFunc_5172(&uLocal_283, 1))
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			switch (iVar0)
			{
				case 0:
					if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
					{
						if (func_592("M3_DEDVWAR"))
						{
							GlobalFunc_6877(&uLocal_4057);
						}
					}
					break;
				
				case 1:
					if (PED::IS_PED_SHOOTING(iLocal_4050))
					{
						if (func_592("M3_DEMIWAR"))
						{
							GlobalFunc_6877(&uLocal_4057);
						}
					}
					break;
				}
			}
	}
}

void func_673()//Position - 0x66F35
{
	int iVar0;
	
	if (iLocal_6735 > 1)
	{
		func_709();
		func_637(&Local_5349, 1);
		func_637(&Local_5145, 1);
		func_637(&Local_5196, 1);
		func_615();
		func_636();
		func_707();
		func_704();
		func_703();
		func_699();
		func_696();
		if (GlobalFunc_8315() == 2 || iLocal_6922)
		{
			func_692();
		}
		if (iLocal_6925)
		{
			func_688();
		}
		else if (!iLocal_6928)
		{
			if ((func_623(&Local_5273) + func_623(&Local_5425)) == 0)
			{
				func_687();
				iLocal_6928 = 1;
			}
		}
		if (!iLocal_6927)
		{
			if (GlobalFunc_5980(&Local_6908, func_28()))
			{
				iLocal_6338 = 0;
				iLocal_6927 = 1;
			}
		}
		if (iLocal_6494 == 0 || iLocal_6494 == 1)
		{
			func_683();
		}
		if (!iLocal_6921)
		{
			if (GlobalFunc_7259(&Local_6852))
			{
				func_669(&Local_5349, 1);
				func_669(&Local_5273, 1);
				func_669(&Local_5425, 1);
				Local_6313.f_7 = 1;
				Local_6301.f_7 = 1;
				Local_6325.f_7 = 1;
				Local_6325.f_8 = 10f;
				func_687();
				iLocal_6921 = 1;
				iLocal_4046 = 1;
			}
		}
	}
	if (bLocal_3037)
	{
		func_570();
	}
	switch (iLocal_6735)
	{
		case 0:
			GlobalFunc_718(&uLocal_2049, iLocal_64);
			GlobalFunc_718(&uLocal_2049, iLocal_65);
			GlobalFunc_718(&uLocal_2049, iLocal_63);
			GlobalFunc_718(&uLocal_2049, iLocal_67);
			GlobalFunc_719(&uLocal_2049, cLocal_59);
			GlobalFunc_719(&uLocal_2049, cLocal_60);
			GlobalFunc_719(&uLocal_2049, cLocal_61);
			func_567(&uLocal_2049, 4, &cLocal_76);
			iLocal_6940 = 0;
			iLocal_6738 = 0;
			iLocal_6739 = 0;
			iLocal_6740 = 0;
			iLocal_6742 = 0;
			iLocal_6743 = 0;
			iLocal_6741 = 0;
			iLocal_6925 = 0;
			iLocal_6920 = 0;
			iLocal_6337 = 1;
			bLocal_3037 = true;
			iLocal_6918 = 0;
			iLocal_6919 = 0;
			iLocal_6916 = 0;
			iLocal_6917 = 0;
			iLocal_6748 = 0;
			iLocal_6746 = 0;
			iLocal_6921 = 0;
			iLocal_6927 = 0;
			iLocal_6929 = 0;
			iLocal_6930 = 0;
			bLocal_6924 = false;
			iLocal_6926 = 0;
			iLocal_6928 = 0;
			iLocal_6340 = 0;
			iLocal_6341 = 0;
			iLocal_6342 = 0;
			iLocal_6343 = 0;
			iLocal_6344 = 0;
			iLocal_6747 = 0;
			iLocal_6346 = 0;
			iLocal_6923 = 0;
			iLocal_4046 = 0;
			iLocal_6345 = 0;
			iLocal_114 = 1;
			iLocal_114 = 0;
			iLocal_6745 = 0;
			iLocal_6494 = 0;
			func_682(1);
			iLocal_52 = 0;
			iLocal_6737 = 0;
			func_680(&Local_6301, 5, "WAR_FIB", 424575/*func_681*/, 3f, 1, -1);
			func_680(&Local_6313, 5, "WAR_CIA", 424575/*func_681*/, 3f, 1, -1);
			func_680(&Local_6325, 5, "WAR_MW", 424575/*func_681*/, 3f, 1, -1);
			GlobalFunc_235(&uLocal_4069);
			func_678();
			GlobalFunc_235(&uLocal_6941);
			iLocal_108 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-2212.839f, 240.922f, 184.717f, 6.1f, 6.1f, 3.3f, GlobalFunc_723(25f), 0, 7);
			iLocal_6735 = 1;
			break;
		
		case 1:
			if (((((((STREAMING::HAS_MODEL_LOADED(iLocal_64) && STREAMING::HAS_MODEL_LOADED(iLocal_65)) && STREAMING::HAS_MODEL_LOADED(iLocal_63)) && STREAMING::HAS_MODEL_LOADED(iLocal_67)) && STREAMING::HAS_ANIM_DICT_LOADED(cLocal_59)) && STREAMING::HAS_ANIM_DICT_LOADED(cLocal_60)) && STREAMING::HAS_ANIM_DICT_LOADED(cLocal_61)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, &cLocal_76))
			{
				GlobalFunc_6877(&uLocal_6755);
				GlobalFunc_6877(&uLocal_4057);
				if (GlobalFunc_234(func_28()))
				{
					ENTITY::SET_ENTITY_PROOFS(func_28(), 1, 1, 1, 1, 1, 0, 0, 0);
					ENTITY::SET_ENTITY_INVINCIBLE(func_28(), 1);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(func_28(), 1);
				}
				if (GlobalFunc_234(func_29()))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(func_29(), 1);
				}
				if (GlobalFunc_234(iLocal_4050))
				{
					PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_4050, 0);
					func_622(iLocal_4050, Local_6076, 0, 0);
					TASK::TASK_SEEK_COVER_TO_COVER_POINT(iLocal_4050, Local_6415, -2275.318f, 330.6714f, 174.5119f, -1, 1);
				}
				func_688();
				GlobalFunc_4493(&(Local_1920[13 /*8*/]), 0, 0, 1);
				GlobalFunc_11043(4, "DAVE BY FOUNTAIN", 0, 0, 0, 1);
				GlobalFunc_2904(&iLocal_3038, 0, 1);
				func_676();
				func_675();
				ENTITY::SET_ENTITY_PROOFS(iLocal_4050, 1, 1, 0, 1, 1, 0, 0, 0);
				iLocal_6735 = 2;
			}
			break;
		
		case 2:
			if (GlobalFunc_156(func_28(), iLocal_4050, 1) <= 4f || GlobalFunc_156(func_29(), iLocal_4050, 1) <= 4f)
			{
				if (GlobalFunc_8315() == 2)
				{
					Global_89962.f_12[0] = 1;
				}
				else if (GlobalFunc_8315() == 0)
				{
					Global_89962.f_12[0] = 0;
				}
				if (GlobalFunc_5980(&Local_6060, func_29()))
				{
					Global_89962.f_12[1] = 0;
				}
				else
				{
					Global_89962.f_12[1] = 1;
				}
				iLocal_114 = 0;
				iLocal_6735 = 3;
			}
			break;
		
		case 3:
			STREAMING::REMOVE_ANIM_DICT(cLocal_60);
			STREAMING::REMOVE_ANIM_DICT(cLocal_61);
			iVar0 = 0;
			while (iVar0 <= (Local_6045 - 1))
			{
				func_22(&(Local_6045[iVar0 /*7*/]));
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= (Local_5273 - 1))
			{
				func_674(&(Local_5273[iVar0 /*25*/]), Local_6212);
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= (Local_5425 - 1))
			{
				func_674(&(Local_5425[iVar0 /*25*/]), Local_6204);
				iVar0++;
			}
			if (GlobalFunc_8315() == 2)
			{
				if (GlobalFunc_234(func_28()))
				{
					TASK::CLEAR_PED_TASKS(func_28());
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_28(), 0);
					PED::SET_PED_COMBAT_MOVEMENT(func_28(), 1);
					func_622(func_28(), Local_6236, 0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(func_28(), 250f, 0);
				}
			}
			iLocal_6338 = 0;
			GlobalFunc_703(&uLocal_317);
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_108);
			iLocal_6735 = 4;
			func_48(6);
			break;
		
		case 4:
			break;
	}
}

void func_674(var uParam0, struct<7> Param1, var uParam8)//Position - 0x67478
{
	if (GlobalFunc_234(*uParam0))
	{
		if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(*uParam0) == iLocal_312)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iLocal_315);
		}
		else if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(*uParam0) == iLocal_311)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iLocal_314);
		}
		PED::REMOVE_PED_DEFENSIVE_AREA(*uParam0, 0);
		PED::SET_PED_ACCURACY(*uParam0, 1);
		PED::SET_PED_ANGLED_DEFENSIVE_AREA(*uParam0, Param1, Param1.f_3, Param1.f_6, 0, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 50, 1);
		PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 2);
		PED::SET_PED_COMBAT_RANGE(*uParam0, 0);
		func_650(uParam0);
		TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(*uParam0, Local_6298, 5f, 0);
	}
}

void func_675()//Position - 0x67510
{
	iLocal_109[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-2267.079f, 312.111f, 174.348f, 7.5f, 22f, 2.6f, GlobalFunc_723(24f), 0, 7);
	iLocal_109[1] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-2258.979f, 293.811f, 174.348f, 7.5f, 22f, 2.6f, GlobalFunc_723(24f), 0, 7);
	iLocal_109[2] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-2253.079f, 280.511f, 174.348f, 7.5f, 16f, 2.6f, GlobalFunc_723(24f), 0, 7);
}

void func_676()//Position - 0x675AE
{
	GlobalFunc_235(&uLocal_4060);
	GlobalFunc_235(&uLocal_4066);
	iLocal_4078 = 0;
}


void func_678()//Position - 0x675D8
{
	Local_6772 = { GlobalFunc_3023(-2229.059f, 275.2237f, 183.3541f, -2231.213f, 280.0638f, 187.8541f, 6.5f) };
	Local_6780 = { GlobalFunc_3023(-2218.376f, 252.4195f, 183.3541f, -2220.788f, 257.7459f, 188.1041f, 8f) };
	Local_6788 = { GlobalFunc_3023(-2233.646f, 299.3439f, 183.3551f, -2235.26f, 298.6351f, 189.3551f, 8f) };
	Local_6820 = { GlobalFunc_3023(-2226.07f, 269.0241f, 183.3541f, -2226.78f, 270.5404f, 189.3541f, 8f) };
	Local_6828 = { GlobalFunc_3023(-2223.428f, 301.1229f, 183.303f, -2226.299f, 306.9099f, 186.603f, 6f) };
	Local_6836 = { GlobalFunc_3023(-2250.256f, 312.1326f, 183.302f, -2257.337f, 324.8381f, 186.6013f, 8f) };
	Local_6844 = { GlobalFunc_3023(-2279.675f, 302.2139f, 183.3616f, -2278.419f, 299.516f, 189.3516f, 3.5f) };
	Local_6764 = { GlobalFunc_3023(-2248.243f, 269.7418f, 173.102f, -2249.806f, 273.1301f, 175.602f, 5f) };
	Local_6764 = { Local_6764 };
	Local_6860 = { GlobalFunc_3023(-2267.455f, 315.0457f, 183.3521f, -2286.537f, 306.7993f, 185.3512f, 11.25f) };
	Local_6852 = { GlobalFunc_3023(-2279.402f, 302.3299f, 183.3616f, -2271.739f, 286.4662f, 175.3521f, 11.25f) };
	Local_6884 = { GlobalFunc_3023(-2229.542f, 275.7177f, 183.3541f, -2231.284f, 279.6068f, 185.3541f, 5.25f) };
	Local_6892 = { GlobalFunc_3023(-2249.341f, 309.1964f, 183.352f, -2252.51f, 317.151f, 185.3513f, 11.25f) };
	Local_6868 = { GlobalFunc_3023(-2255.106f, 320.6205f, 183.1013f, -2286.249f, 306.8566f, 187.1012f, 13.75f) };
	Local_6876 = { GlobalFunc_3023(-2281.745f, 303.6456f, 173.1021f, -2269.277f, 276.1019f, 176.1021f, 27.5f) };
	Local_6900 = { GlobalFunc_3023(-2192.544f, 218.4095f, 191.0748f, -2240.757f, 325.4762f, 182.6329f, 46f) };
	Local_6908 = { GlobalFunc_3023(-2268.196f, 315.1283f, 203.6021f, -2341.797f, 281.689f, 169.4672f, 102.75f) };
	Local_6796 = { GlobalFunc_3023(-2257.981f, 319.8042f, 183.3513f, -2247.894f, 324.2568f, 186.9276f, 8.5f) };
	Local_6804 = { GlobalFunc_3023(-2278.865f, 265.3107f, 183.3513f, -2281.861f, 273.3661f, 186.7015f, 11.25f) };
	Local_6812 = { GlobalFunc_3023(-2224.927f, 303.1566f, 183.353f, -2213.797f, 308.5385f, 186.9276f, 8.5f) };
	func_679();
	func_652(&(Local_6045[0 /*7*/]), -2225.153f, 271.6437f, 183.6041f, 201.4499f, 0, 0, 3, 0);
	func_652(&(Local_6045[1 /*7*/]), -2229.241f, 269.4782f, 183.6041f, 201.4499f, 1, 1, 3, 1);
	Local_6860 = { Local_6860 };
}

void func_679()//Position - 0x6798F
{
	func_15();
	func_652(&(Local_6009[0 /*7*/]), -2274.925f, 262.4196f, 183.6011f, 236f, 2, 0, 1, 1);
	func_652(&(Local_6009[1 /*7*/]), -2277.51f, 259.8443f, 183.6013f, 236f, 2, 0, 1, 1);
	func_652(&(Local_6009[2 /*7*/]), -2275.349f, 283.5972f, 183.6015f, 310f, 0, 1, 3, 0);
	func_652(&(Local_6009[3 /*7*/]), -2271.358f, 264.4638f, 183.6016f, 220f, 2, 0, 1, 0);
	func_652(&(Local_6009[4 /*7*/]), -2271.495f, 274.4773f, 183.6016f, 310f, 0, 1, 3, 0);
}

void func_680(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x67A45
{
	*uParam0 = 0;
	uParam0->f_5 = 0;
	uParam0->f_7 = iParam1;
	uParam0->f_6 = iParam6;
	uParam0->f_4 = sParam2;
	uParam0->f_8 = iParam4;
	uParam0->f_9 = iParam5;
	uParam0->f_11 = iParam3;
	uParam0->f_10 = 1;
}

void func_681(int iParam0, struct<7> Param1, var uParam8)//Position - 0x67A7F
{
	if (GlobalFunc_234(*iParam0))
	{
		PED::SET_PED_ANGLED_DEFENSIVE_AREA(*iParam0, Param1, Param1.f_3, Param1.f_6, 0, 0);
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam0, 250f, 0);
		func_650(iParam0);
	}
}

void func_682(int iParam0)//Position - 0x67ABB
{
	Local_318[1 /*25*/].f_9 = 0;
	uLocal_4023 = iParam0;
}

void func_683()//Position - 0x67AD1
{
	if (GlobalFunc_8315() == 2)
	{
		func_668();
		func_684();
	}
}

void func_684()//Position - 0x67AE9
{
	int iVar0;
	
	switch (iLocal_52)
	{
		case 0:
			iVar0 = WEAPON::GET_BEST_PED_WEAPON(func_28(), 0);
			WEAPON::SET_CURRENT_PED_WEAPON(func_28(), iVar0, 1);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_28(), ENTITY::GET_ENTITY_COORDS(func_28(), 1), 1f, 0, 0);
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_28(), Local_6394.f_3, -1, 0, 0f, 1, 0, Local_6394, 0);
			iLocal_52 = 1;
			break;
		
		case 1:
			if (GlobalFunc_713(iLocal_4050, Local_6415.f_3, 1) <= 3f)
			{
				TASK::CLEAR_PED_TASKS(func_28());
				PED::REMOVE_PED_DEFENSIVE_AREA(func_28(), 0);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_281);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2229.825f, 278.2293f, 183.6041f, 3f, 20000, 1048576000, 0, 1193033728);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_281);
				TASK::TASK_PERFORM_SEQUENCE(func_28(), uLocal_281);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_281);
				iLocal_52 = 2;
			}
			break;
		
		case 2:
			if (GlobalFunc_5980(&Local_6884, func_28()))
			{
				iLocal_6922 = 1;
				GlobalFunc_2998(&iLocal_3038, 0, 1);
				TASK::CLEAR_PED_TASKS(func_28());
				PED::REMOVE_PED_DEFENSIVE_AREA(func_28(), 0);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_281);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
				if (GlobalFunc_234(Local_4740[0 /*25*/]))
				{
					TASK::TASK_SHOOT_AT_ENTITY(0, Local_4740[0 /*25*/], 3000, 0);
				}
				if (GlobalFunc_234(Local_4740[1 /*25*/]))
				{
					TASK::TASK_SHOOT_AT_ENTITY(0, Local_4740[1 /*25*/], 3000, 0);
				}
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_281);
				TASK::TASK_PERFORM_SEQUENCE(func_28(), uLocal_281);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_281);
				GlobalFunc_6877(&uLocal_4054);
				if (bLocal_6924)
				{
					iLocal_6736 = 4;
				}
				iLocal_52 = 3;
			}
			break;
		
		case 3:
			if (GlobalFunc_226(&uLocal_4054))
			{
				if (GlobalFunc_5182(&uLocal_4054) >= 10f)
				{
					ENTITY::SET_ENTITY_INVINCIBLE(func_28(), 0);
					ENTITY::SET_ENTITY_PROOFS(func_28(), 0, 0, 0, 0, 0, 0, 0, 0);
					GlobalFunc_235(&uLocal_4054);
				}
			}
			if (func_623(&Local_4740) == 0)
			{
				if (!iLocal_6345)
				{
					GlobalFunc_2998(&iLocal_3038, 0, 0);
					if (!iLocal_6337)
					{
						GlobalFunc_2904(&iLocal_3038, 0, 1);
					}
					iLocal_6345 = 1;
				}
				if (bLocal_6924)
				{
					iLocal_6736 = 10;
				}
				ENTITY::SET_ENTITY_INVINCIBLE(func_28(), 1);
				ENTITY::SET_ENTITY_PROOFS(func_28(), 1, 1, 1, 1, 1, 0, 0, 0);
				func_624(func_28(), -2250.495f, 311.8806f, 183.602f, 0, 2f, 1);
				iLocal_52 = 4;
			}
			break;
		
		case 4:
			if (GlobalFunc_5980(&Local_6892, func_28()))
			{
				func_686(&(Local_4791[0 /*25*/]), iLocal_63, -2276.1f, 313.3804f, 183.6021f, 293.8379f, -2259.507f, 320.3045f, 183.6021f, -2250.495f, 311.8806f, 183.602f, "MCH_WAVE3_1", 1065353216);
				func_686(&(Local_4791[1 /*25*/]), iLocal_63, -2275.433f, 311.9359f, 183.6021f, 293.8379f, -2255.679f, 320.1675f, 183.6013f, -2250.495f, 311.8806f, 183.602f, "MCH_WAVE3_2", 1065353216);
				func_686(&(Local_4791[2 /*25*/]), iLocal_63, -2272.436f, 311.4152f, 183.6021f, 293.8379f, -2252.579f, 317.3668f, 183.6013f, -2250.495f, 311.8806f, 183.602f, "MCH_WAVE3_3", 1065353216);
				func_650(&(Local_4791[0 /*25*/]));
				func_650(&(Local_4791[1 /*25*/]));
				func_650(&(Local_4791[2 /*25*/]));
				if (bLocal_6924)
				{
					iLocal_6736 = 6;
				}
				func_685(&Local_4791);
				iLocal_52 = 5;
			}
			break;
		
		case 5:
			if (func_623(&Local_4791) == 0)
			{
				iLocal_4046 = 1;
				iLocal_52 = 6;
			}
			break;
		
		case 6:
			if (GlobalFunc_234(func_28()))
			{
				func_619(1);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_4050, 1), 2f, -1, 1048576000, 0, 1193033728);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
				func_617(func_28(), 1);
				iLocal_52 = 7;
			}
			break;
		
		case 7:
			if (GlobalFunc_156(func_28(), iLocal_4050, 1) <= 4f)
			{
				if (GlobalFunc_234(func_28()))
				{
					PED::SET_PED_COMBAT_MOVEMENT(func_28(), 1);
					func_622(func_28(), Local_6076, 0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(func_28(), 250f, 0);
					iLocal_52 = 8;
				}
			}
			break;
		
		case 8:
			break;
	}
}

void func_685(int iParam0)//Position - 0x67F27
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (GlobalFunc_234((*iParam0)[iVar0 /*25*/]))
		{
			ENTITY::SET_ENTITY_HEALTH((*iParam0)[iVar0 /*25*/], 101);
		}
		iVar0++;
	}
}

void func_686(int iParam0, int iParam1, struct<3> Param2, float fParam5, struct<3> Param6, struct<3> Param9, char* sParam12, int iParam13)//Position - 0x67F5E
{
	int iVar0;
	int iVar1;
	
	switch (iParam1)
	{
		case joaat("s_m_y_swat_01"):
			iVar0 = iLocal_311;
			iVar1 = iLocal_74;
			break;
		
		case joaat("s_m_m_ciasec_01"):
			iVar0 = iLocal_313;
			iVar1 = iLocal_72;
			break;
		
		case joaat("s_m_y_blackops_01"):
			iVar0 = iLocal_312;
			iVar1 = iLocal_75;
			break;
		
		default:
			iVar0 = iLocal_313;
			iVar1 = iLocal_72;
			break;
	}
	func_628(iParam0, iParam1, Param2, fParam5, sParam12, iVar0, iVar1, 5, 0, 0, 0);
	func_670(iParam0, Param6, 0.75f, 2, 1, 1, 1, 0.5f, 0.5f, 0, 1);
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(*iParam0, 0);
	TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(*iParam0, 0);
	PED::SET_PED_DIES_WHEN_INJURED(*iParam0, 1);
	func_619(1);
	TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Param6, Param9, iParam13, 1, 1056964608, 1082130432, 1, 0, 0, -957453492);
	TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
	func_617(*iParam0, 1);
}

void func_687()//Position - 0x68038
{
	if (GlobalFunc_234(iLocal_4050))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_4050, 0);
		TASK::CLEAR_PED_TASKS(iLocal_4050);
		PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_4050, 0);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_4050, Local_6415.f_3, 2f, 1, 0);
		func_619(1);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_6415.f_3, 2f, -1, 1048576000, 0, 1193033728);
		TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_6415.f_3, -1, 1, 0f, 0, 0, Local_6415, 1);
		func_617(iLocal_4050, 1);
	}
}

void func_688()//Position - 0x680AD
{
	func_689(&Local_6301, &Local_5273, &Local_6260, iLocal_64, Local_6244, 1);
	func_689(&Local_6325, &Local_5425, &Local_6279, iLocal_63, Local_6252, 0);
}

void func_689(var uParam0, int iParam1, var uParam2, int iParam3, struct<8> Param4, bool bParam12)//Position - 0x680E1
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 > 0)
	{
		if (uParam0->f_9)
		{
			func_637(iParam1, 1);
		}
	}
	switch (*uParam0)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 <= (*iParam1 - 1))
			{
				func_691(iParam1[iVar0 /*25*/], *(uParam2[iVar0 /*3*/]), iParam3, Param4, &(uParam0->f_5), uParam0->f_7, uParam0->f_9, uParam0->f_4, uParam0->f_11);
				iVar0++;
			}
			GlobalFunc_6877(&(uParam0->f_1));
			if (bParam12)
			{
			}
			uParam0->f_10 = 1;
			*uParam0 = 1;
			break;
		
		case 1:
			if (func_690(iParam1) >= 2)
			{
				GlobalFunc_6877(&(uParam0->f_1));
				if (bParam12)
				{
				}
				*uParam0 = 2;
			}
			break;
		
		case 2:
			if (GlobalFunc_226(&(uParam0->f_1)))
			{
				if (GlobalFunc_5182(&(uParam0->f_1)) > uParam0->f_8)
				{
					if (func_690(iParam1) == 0)
					{
						if (bParam12)
						{
						}
						*uParam0 = 1;
					}
					iVar0 = 0;
					while (iVar0 <= (*iParam1 - 1))
					{
						if (ENTITY::IS_ENTITY_DEAD((*iParam1)[iVar0 /*25*/]))
						{
							iVar1 = 0;
							while (iVar1 <= (*uParam2 - 1))
							{
								if (uParam0->f_10)
								{
									if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), *(uParam2[iVar1 /*3*/]), 1) >= 15f && !CAM::IS_SPHERE_VISIBLE(*(uParam2[iVar1 /*3*/]), 0.5f))
									{
										GlobalFunc_6877(&(uParam0->f_1));
										func_691(iParam1[iVar0 /*25*/], *(uParam2[iVar1 /*3*/]), iParam3, Param4, &(uParam0->f_5), uParam0->f_7, uParam0->f_9, uParam0->f_4, uParam0->f_11);
										uParam0->f_10 = 0;
										if (uParam0->f_6 != -1)
										{
											if (uParam0->f_5 >= uParam0->f_6)
											{
												if (bParam12)
												{
												}
												*uParam0 = 3;
											}
										}
									}
								}
								iVar1++;
							}
						}
						uParam0->f_10 = 1;
						iVar0++;
					}
				}
			}
			else
			{
				GlobalFunc_6877(&(uParam0->f_1));
			}
			break;
		
		case 3:
			break;
	}
}

int func_690(var uParam0)//Position - 0x682A3
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (PED::IS_PED_INJURED((*uParam0)[iVar0 /*25*/]) || PED::IS_PED_HURT((*uParam0)[iVar0 /*25*/]))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_691(var uParam0, struct<3> Param1, int iParam4, struct<8> Param5, var uParam13, int iParam14, bool bParam15, char* sParam16, var uParam17)//Position - 0x682E6
{
	int iVar0;
	float fVar1;
	struct<2> Var2;
	int iVar6;
	
	switch (iParam4)
	{
		case joaat("s_m_y_swat_01"):
			iVar6 = iLocal_311;
			iVar0 = iLocal_74;
			fVar1 = 112.7339f;
			break;
		
		case joaat("s_m_m_ciasec_01"):
			iVar6 = iLocal_313;
			iVar0 = iLocal_72;
			fVar1 = 203.4995f;
			break;
		
		case joaat("s_m_y_blackops_01"):
			iVar6 = iLocal_312;
			iVar0 = iLocal_75;
			fVar1 = 297.6012f;
			break;
	}
	StringCopy(&Var2, sParam16, 16);
	StringIntConCat(&Var2, *uParam13, 16);
	*uParam13++;
	func_628(uParam0, iParam4, Param1, fVar1, &Var2, iVar6, iVar0, iParam14, 0, 0, 0);
	if (GlobalFunc_234(*uParam0))
	{
		if (!bParam15)
		{
			GlobalFunc_703(&(uParam0->f_8));
		}
		Stack.Push(uParam0);
		Stack.Push(Param5);
		Call_Loc(uParam17);
	}
}

void func_692()//Position - 0x68390
{
	struct<4> Var0;
	int iVar8;
	
	if (iLocal_6741 > 1)
	{
		func_637(&Local_4740, 1);
	}
	switch (iLocal_6741)
	{
		case 0:
			iLocal_6922 = 0;
			fLocal_6534 = 0f;
			fLocal_6535 = 0f;
			iLocal_6741++;
			break;
		
		case 1:
			if (iLocal_6922)
			{
				iVar8 = 0;
				while (iVar8 <= (Local_4740 - 1))
				{
					StringCopy(&Var0, "MCH_WAVE2_", 32);
					StringIntConCat(&Var0, iVar8, 32);
					func_628(&(Local_4740[iVar8 /*25*/]), iLocal_64, -2222.391f, 305.6483f, 184.926f, 0f, &Var0, iLocal_314, iLocal_74, 5, 0, 0, 0);
					func_650(&(Local_4740[iVar8 /*25*/]));
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_4740[iVar8 /*25*/], 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_4740[iVar8 /*25*/], 1);
					iVar8++;
				}
				uLocal_1906[9] = PED::CREATE_SYNCHRONIZED_SCENE(-2222.391f, 305.6483f, 184.926f, 0f, 0f, 113.91f, 2);
				if (GlobalFunc_234(Local_4740[0 /*25*/]))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_4740[0 /*25*/], uLocal_1906[9], cLocal_61, "WALKWAY_A", 8f, -1000f, 1, 0, 1148846080, 0);
				}
				if (GlobalFunc_234(Local_4740[1 /*25*/]))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_4740[1 /*25*/], uLocal_1906[9], cLocal_61, "WALKWAY_B", 8f, -1000f, 1, 0, 1148846080, 0);
				}
				iLocal_6741 = 2;
			}
			break;
		
		case 2:
			func_695();
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1906[9]))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1906[9]) >= 0.3f)
				{
					if (func_694(Local_6812, &Local_4740) == 0)
					{
						iLocal_6741 = 3;
						func_693(0);
						iLocal_6346 = 1;
					}
				}
			}
			else
			{
				if (GlobalFunc_234(Local_4740[0 /*25*/]))
				{
					func_619(1);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -2234.244f, 299.1805f, 183.6051f, func_28(), 1f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
					func_617(Local_4740[0 /*25*/], 1);
				}
				if (GlobalFunc_234(Local_4740[1 /*25*/]))
				{
					func_619(1);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -2230.757f, 300.762f, 183.6051f, func_28(), 1f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
					func_617(Local_4740[1 /*25*/], 1);
				}
				iLocal_6346 = 1;
				iLocal_6741 = 4;
			}
			break;
		
		case 3:
			if (GlobalFunc_234(Local_4740[0 /*25*/]))
			{
				PED::SET_PED_RESET_FLAG(Local_4740[0 /*25*/], 156, 1);
			}
			if (GlobalFunc_234(Local_4740[1 /*25*/]))
			{
				PED::SET_PED_RESET_FLAG(Local_4740[1 /*25*/], 156, 1);
			}
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1906[9]) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1906[9]) == 1f) || (PED::IS_PED_INJURED(Local_4740[0 /*25*/]) || PED::IS_PED_INJURED(Local_4740[1 /*25*/])))
			{
				iVar8 = 0;
				while (iVar8 <= (Local_4740 - 1))
				{
					if (GlobalFunc_234(Local_4740[iVar8 /*25*/]))
					{
						TASK::CLEAR_PED_TASKS(Local_4740[iVar8 /*25*/]);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_4740[iVar8 /*25*/], 250f, 0);
					}
					iVar8++;
				}
				iVar8 = 0;
				while (iVar8 <= (Local_4740 - 1))
				{
					if (GlobalFunc_234(Local_4740[iVar8 /*25*/]))
					{
						func_621(&(Local_4740[iVar8 /*25*/]));
						PED::SET_PED_RESET_FLAG(Local_4740[iVar8 /*25*/], 156, 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_4740[iVar8 /*25*/], 0);
					}
					iVar8++;
				}
				iLocal_6346 = 1;
				iLocal_6741 = 4;
			}
			break;
		
		case 4:
			if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(-920027322) != 0f || OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(-58432001) != 0f)
			{
				func_693(0);
			}
			else
			{
				iLocal_6741 = 5;
			}
			break;
	}
}

void func_693(bool bParam0)//Position - 0x68727
{
	int iVar0;
	
	if (bParam0)
	{
		iVar0 = 4;
	}
	else
	{
		iVar0 = 1;
	}
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-920027322, 0f, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-58432001, 0f, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-920027322, iVar0, 1, 1);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-58432001, iVar0, 1, 1);
}

int func_694(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8)//Position - 0x6876F
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam8 - 1))
	{
		if (GlobalFunc_234((*iParam8)[iVar0 /*25*/]))
		{
			if (GlobalFunc_5980(&uParam0, (*iParam8)[iVar0 /*25*/]))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_695()//Position - 0x687B4
{
	if (fLocal_6534 <= -1f && fLocal_6535 >= 1f)
	{
		return;
	}
	if (fLocal_6534 >= -1f)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-920027322, fLocal_6534, 1, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-920027322, 1, 1, 1);
		fLocal_6534 = (fLocal_6534 - fLocal_6533);
	}
	if (fLocal_6535 <= 1f)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-58432001, fLocal_6535, 1, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-58432001, 1, 1, 1);
		fLocal_6535 = (fLocal_6535 + fLocal_6533);
	}
}

void func_696()//Position - 0x68829
{
	struct<2> Var0;
	int iVar4;
	
	if (iLocal_6740 > 1)
	{
		func_637(&Local_4892, 1);
		if (!iLocal_6930)
		{
			if (GlobalFunc_234(Local_4892[1 /*25*/]))
			{
				GlobalFunc_173(&uLocal_115, 14, Local_4892[1 /*25*/], "MERRYWEATHERE", 0, 1);
				if (func_461("M3_IG8"))
				{
					iLocal_6930 = 1;
				}
			}
			else
			{
				iLocal_6930 = 1;
			}
		}
	}
	switch (iLocal_6740)
	{
		case 0:
			iLocal_6932 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-2280.597f, 265.432f, 184.9264f, 1f, joaat("prop_ch1_07_door_01l"), 0, 0, 1);
			iLocal_6933 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-2278.039f, 266.5699f, 184.9264f, 1f, joaat("prop_ch1_07_door_01r"), 0, 0, 1);
			fLocal_6538 = 0f;
			fLocal_6539 = 0f;
			GlobalFunc_6877(&uLocal_6752);
			iLocal_6740++;
			break;
		
		case 1:
			if (GlobalFunc_5182(&uLocal_6752) >= 10f)
			{
				iVar4 = 0;
				while (iVar4 <= (Local_4892 - 1))
				{
					if (iVar4 != 2 && iVar4 != 4)
					{
						StringCopy(&Var0, "MW_IG8_", 16);
						StringIntConCat(&Var0, iVar4, 16);
						func_628(&(Local_4892[iVar4 /*25*/]), iLocal_63, -2262.784f, 225.3247f, 193.651f, 0f, &Var0, iLocal_312, iLocal_75, 5, 0, 0, 0);
						func_650(&(Local_4892[iVar4 /*25*/]));
						if (GlobalFunc_234(Local_4892[iVar4 /*25*/]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_6932))
							{
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_4892[iVar4 /*25*/], iLocal_6932, 0);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_6933))
							{
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_4892[iVar4 /*25*/], iLocal_6933, 0);
							}
						}
					}
					iVar4++;
				}
				uLocal_1906[10] = PED::CREATE_SYNCHRONIZED_SCENE(-2262.784f, 225.3247f, 193.651f, 0f, 0f, 0f, 2);
				if (GlobalFunc_234(Local_4892[0 /*25*/]))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_4892[0 /*25*/], uLocal_1906[10], cLocal_59, "mw01run_into_cover", 8f, -1000f, 4, 64, 1148846080, 0);
				}
				if (GlobalFunc_234(Local_4892[1 /*25*/]))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_4892[1 /*25*/], uLocal_1906[10], cLocal_59, "mw02run_into_cover", 8f, -1000f, 4, 64, 1148846080, 0);
				}
				if (GlobalFunc_234(Local_4892[3 /*25*/]))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_4892[3 /*25*/], uLocal_1906[10], cLocal_59, "mw04run_into_cover", 8f, -1000f, 4, 64, 1148846080, 0);
				}
				if (bLocal_6924)
				{
					iLocal_6736 = 17;
				}
				iLocal_6740 = 2;
			}
			break;
		
		case 2:
			func_698();
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1906[10]))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1906[10]) >= 0.3f)
				{
					if (func_694(Local_6804, &Local_4892) == 0)
					{
						func_697(0);
						iLocal_6740 = 3;
					}
				}
			}
			else
			{
				iLocal_6740 = 3;
			}
			break;
		
		case 3:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1906[10]))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1906[10]) == 1f)
				{
					iVar4 = 0;
					while (iVar4 <= (Local_4892 - 1))
					{
						if (GlobalFunc_234(Local_4892[iVar4 /*25*/]))
						{
							func_619(1);
							TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_6009[iVar4 /*7*/].f_3, MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000), 1, 0f, 0, Local_6009[iVar4 /*7*/].f_2, Local_6009[iVar4 /*7*/], 0);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 250f, 0);
							func_617(Local_4892[iVar4 /*25*/], 1);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_4892[iVar4 /*25*/], 0, 0);
							func_621(&(Local_4892[iVar4 /*25*/]));
						}
						iVar4++;
					}
					iLocal_6740 = 4;
				}
			}
			else
			{
				iVar4 = 0;
				while (iVar4 <= (Local_4892 - 1))
				{
					if (GlobalFunc_234(Local_4892[iVar4 /*25*/]))
					{
						func_619(1);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_6009[iVar4 /*7*/].f_3, 2f, -1, 1048576000, 0, 1193033728);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_6009[iVar4 /*7*/].f_3, MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000), 1, 0f, 0, Local_6009[iVar4 /*7*/].f_2, Local_6009[iVar4 /*7*/], 0);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 250f, 0);
						func_617(Local_4892[iVar4 /*25*/], 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_4892[iVar4 /*25*/], 0, 0);
						func_621(&(Local_4892[iVar4 /*25*/]));
					}
					iVar4++;
				}
				func_697(0);
				iLocal_6740 = 4;
			}
			break;
		
		case 4:
			if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(-2007378629) != 0f || OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(-2007378629) != 0f)
			{
				func_697(0);
			}
			else
			{
				iLocal_6740 = 5;
			}
			break;
	}
}

void func_697(bool bParam0)//Position - 0x68C60
{
	int iVar0;
	
	if (bParam0)
	{
		iVar0 = 4;
	}
	else
	{
		iVar0 = 1;
	}
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2007378629, 0f, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(418772613, 0f, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2007378629, iVar0, 1, 1);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(418772613, iVar0, 1, 1);
}

void func_698()//Position - 0x68CA8
{
	if (fLocal_6538 <= -1f && fLocal_6539 >= 1f)
	{
		return;
	}
	if (fLocal_6538 >= -1f)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2007378629, fLocal_6538, 1, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2007378629, 1, 1, 1);
		fLocal_6538 = (fLocal_6538 - fLocal_6533);
	}
	if (fLocal_6539 <= 1f)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(418772613, fLocal_6539, 1, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(418772613, 1, 1, 1);
		fLocal_6539 = (fLocal_6539 + fLocal_6533);
	}
}

void func_699()//Position - 0x68D1D
{
	if (iLocal_6739 > 1)
	{
		func_638(&iLocal_4867, 1);
	}
	if (iLocal_6739 > 2)
	{
		if (!iLocal_6929)
		{
			if (GlobalFunc_234(iLocal_4867))
			{
				GlobalFunc_173(&uLocal_115, 13, iLocal_4867, "MERRYWEATHERD", 0, 1);
				if (func_461("M3_IG7"))
				{
					iLocal_6929 = 1;
				}
			}
			else
			{
				iLocal_6929 = 1;
			}
		}
	}
	switch (iLocal_6739)
	{
		case 0:
			iLocal_6739 = 1;
			fLocal_6536 = 0f;
			fLocal_6537 = 0f;
			break;
		
		case 1:
			if (GlobalFunc_7259(&Local_6788))
			{
				func_628(&iLocal_4867, iLocal_63, -2255.192f, 322.262f, 184.926f, 0f, "MW_IG7", iLocal_312, iLocal_75, 10, 0, 0, 0);
				func_650(&iLocal_4867);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_4867, 1);
				uLocal_1906[8] = PED::CREATE_SYNCHRONIZED_SCENE(-2255.192f, 322.262f, 184.926f, 0f, 0f, 113.91f, 2);
				if (GlobalFunc_234(iLocal_4867))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_4867, uLocal_1906[8], cLocal_61, "WALKWAY_B", 8f, -1000f, 1, 0, 1148846080, 0);
				}
				iLocal_6739 = 2;
			}
			break;
		
		case 2:
			if (func_702(iLocal_4867) < 1f)
			{
				if (GlobalFunc_234(iLocal_4867))
				{
					TASK::CLEAR_PED_TASKS(iLocal_4867);
					PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_4867, 1);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_4867, -2258.96f, 319.1411f, 183.6021f, 3f, 1, 0);
					func_619(1);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2258.96f, 319.1411f, 183.6021f, 2f, -1, 1048576000, 0, 1193033728);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
					func_617(iLocal_4867, 1);
					iLocal_6739 = 100;
				}
			}
			func_701();
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1906[8]))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1906[8]) >= 0.3f)
				{
					if (!GlobalFunc_5980(&Local_6796, iLocal_4867))
					{
						func_700(0);
						iLocal_6739 = 3;
					}
				}
			}
			break;
		
		case 100:
			func_700(0);
			if (ENTITY::IS_ENTITY_DEAD(iLocal_4867) || GlobalFunc_713(iLocal_4867, -2263.213f, 317.1267f, 183.6021f, 1) <= 5f)
			{
				func_621(&iLocal_4867);
				iLocal_6739 = 4;
			}
			break;
		
		case 3:
			if (func_702(iLocal_4867) == 1f)
			{
				if (GlobalFunc_234(iLocal_4867))
				{
					PED::SET_PED_RESET_FLAG(iLocal_4867, 156, 1);
				}
			}
			else
			{
				if (GlobalFunc_234(iLocal_4867))
				{
					TASK::CLEAR_PED_TASKS(iLocal_4867);
					PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_4867, 1);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_4867, -2263.213f, 317.1267f, 183.6021f, 3f, 1, 0);
					func_621(&iLocal_4867);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_4867, 100f, 0);
				}
				iLocal_6739 = 4;
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1906[8]))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1906[8]) == 1f)
				{
					if (GlobalFunc_234(iLocal_4867))
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_4867, 100f, 0);
						func_621(&iLocal_4867);
						PED::SET_PED_RESET_FLAG(iLocal_4867, 156, 1);
					}
					iLocal_6739 = 4;
				}
			}
			break;
		
		case 4:
			if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(-722798986) != 0f || OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(204301578) != 0f)
			{
				func_700(0);
			}
			else
			{
				iLocal_6739 = 5;
			}
			break;
	}
}

void func_700(bool bParam0)//Position - 0x69037
{
	int iVar0;
	
	if (bParam0)
	{
		iVar0 = 4;
	}
	else
	{
		iVar0 = 1;
	}
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-722798986, 0f, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(204301578, 0f, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-722798986, iVar0, 1, 1);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(204301578, iVar0, 1, 1);
}

void func_701()//Position - 0x6907F
{
	if (fLocal_6536 <= -1f && fLocal_6537 >= 1f)
	{
		return;
	}
	if (fLocal_6536 >= -1f)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-722798986, fLocal_6536, 1, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-722798986, 1, 1, 1);
		fLocal_6536 = (fLocal_6536 - fLocal_6533);
	}
	if (fLocal_6537 <= 1f)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(204301578, fLocal_6537, 1, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(204301578, 1, 1, 1);
		fLocal_6537 = (fLocal_6537 + fLocal_6533);
	}
}

float func_702(int iParam0)//Position - 0x690F4
{
	if (!GlobalFunc_234(iParam0))
	{
		return 0f;
	}
	return (SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(iParam0)) / SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(iParam0)));
}

void func_703()//Position - 0x6911F
{
	struct<2> Var0;
	int iVar4;
	
	if (iLocal_6738 > 1)
	{
		func_637(&Local_4664, 1);
	}
	switch (iLocal_6738)
	{
		case 0:
			GlobalFunc_6877(&uLocal_6749);
			iLocal_6738++;
			break;
		
		case 1:
			if (GlobalFunc_7259(&Local_6780))
			{
				iVar4 = 0;
				while (iVar4 <= (Local_4664 - 1))
				{
					StringCopy(&Var0, "WKWAY_FIB1_", 16);
					StringIntConCat(&Var0, iVar4, 16);
					func_628(&(Local_4664[iVar4 /*25*/]), iLocal_64, 0f, 0f, 0f, 0f, &Var0, iLocal_314, iLocal_74, 5, 0, 0, 0);
					func_650(&(Local_4664[iVar4 /*25*/]));
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_4664[iVar4 /*25*/], 1);
					iVar4++;
				}
				uLocal_1906[7] = PED::CREATE_SYNCHRONIZED_SCENE(-2225.181f, 271.275f, 183.599f, 0f, 0f, 111.5f, 2);
				if (GlobalFunc_234(Local_4664[0 /*25*/]))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_4664[0 /*25*/], uLocal_1906[7], cLocal_60, "SWAT_RUN_2_COVER_A", 8f, -1000f, 0, 0, 1148846080, 0);
				}
				if (GlobalFunc_234(Local_4664[1 /*25*/]))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_4664[1 /*25*/], uLocal_1906[7], cLocal_60, "SWAT_RUN_2_COVER_B", 8f, -1000f, 0, 0, 1148846080, 0);
				}
				if (GlobalFunc_234(Local_4664[2 /*25*/]))
				{
					ENTITY::SET_ENTITY_COORDS(Local_4664[2 /*25*/], -2225.957f, 281.2627f, 183.6041f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_4664[2 /*25*/], 203f);
					func_621(&(Local_4664[2 /*25*/]));
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_4664[2 /*25*/], -2231.04f, 279.0294f, 183.6041f, 3f, 1, 0);
					func_619(1);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -2231.04f, 279.0294f, 183.6041f, PLAYER::PLAYER_PED_ID(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					func_617(Local_4664[2 /*25*/], 1);
				}
				if (bLocal_6924)
				{
					iLocal_6736 = 9;
				}
				if (GlobalFunc_8315() == 2)
				{
					PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_1906[7], 0f);
				}
				else if (GlobalFunc_8315() == 0)
				{
					PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_1906[7], 0.2f);
				}
				iLocal_6738 = 2;
			}
			break;
		
		case 2:
			if (((((PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1906[7]) == 1f || (PED::IS_PED_INJURED(Local_4664[0 /*25*/]) || PED::IS_PED_INJURED(Local_4664[1 /*25*/]))) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_4664[0 /*25*/], 0)) < 100f) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_4664[1 /*25*/], 0)) < 100f) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_4664[0 /*25*/], PLAYER::PLAYER_PED_ID(), 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_4664[1 /*25*/], PLAYER::PLAYER_PED_ID(), 1))
			{
				if (GlobalFunc_234(Local_4664[0 /*25*/]) && !PED::IS_PED_INJURED(Local_4664[0 /*25*/]))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1906[7]) == 1f)
					{
						func_619(1);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_6045[0 /*7*/].f_3, MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000), 1, 0f, 0, Local_6045[0 /*7*/].f_2, Local_6045[0 /*7*/], 0);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 250f, 0);
						func_617(Local_4664[0 /*25*/], 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_4664[0 /*25*/], 0, 0);
					}
					else if (GlobalFunc_234(Local_4664[0 /*25*/]) && !PED::IS_PED_INJURED(Local_4664[0 /*25*/]))
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_4664[0 /*25*/], 250f, 0);
					}
				}
				if (GlobalFunc_234(Local_4664[1 /*25*/]) && !PED::IS_PED_INJURED(Local_4664[1 /*25*/]))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1906[7]) == 1f)
					{
						func_619(1);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_6045[1 /*7*/].f_3, MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000), 1, 0f, 0, Local_6045[1 /*7*/].f_2, Local_6045[1 /*7*/], 0);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 250f, 0);
						func_617(Local_4664[1 /*25*/], 1);
					}
					else if (GlobalFunc_234(Local_4664[1 /*25*/]) && !PED::IS_PED_INJURED(Local_4664[1 /*25*/]))
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_4664[1 /*25*/], 250f, 0);
					}
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_4664[1 /*25*/], 0, 0);
				}
				func_621(&(Local_4664[0 /*25*/]));
				func_621(&(Local_4664[1 /*25*/]));
				iLocal_6738 = 3;
			}
			break;
	}
}

void func_704()//Position - 0x6955E
{
	switch (iLocal_6737)
	{
		case 0:
			if (GlobalFunc_8315() == 0)
			{
				func_706();
				GlobalFunc_6877(&uLocal_6761);
				iLocal_6737 = 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_8315() == 2)
			{
				func_705();
				iLocal_6737 = 0;
			}
			if (GlobalFunc_5182(&uLocal_6761) >= 5f)
			{
				func_705();
				iLocal_6737 = 2;
			}
			break;
		
		case 2:
			if (GlobalFunc_8315() == 2)
			{
				iLocal_6737 = 0;
			}
			break;
		
		case 3:
			break;
	}
}

void func_705()//Position - 0x695D9
{
	if (iLocal_6921)
	{
		func_669(&Local_5349, 1);
		func_669(&Local_5273, 1);
		func_669(&Local_5425, 1);
	}
	else
	{
		func_669(&Local_5349, 5);
		func_669(&Local_5273, 5);
		func_669(&Local_5425, 5);
	}
	func_669(&Local_5069, 2);
	func_669(&iLocal_5018, 10);
	func_669(&Local_5145, 5);
	func_669(&Local_5196, 2);
	func_669(&Local_4664, 5);
	if (GlobalFunc_234(iLocal_4867))
	{
		PED::SET_PED_ACCURACY(iLocal_4867, 5);
	}
	func_669(&Local_4892, 5);
	func_669(&Local_4740, 5);
	func_669(&Local_4791, 5);
}

void func_706()//Position - 0x6966D
{
	func_669(&Local_5349, 0);
	func_669(&Local_5273, 0);
	func_669(&Local_5425, 0);
	func_669(&Local_5069, 0);
	func_669(&iLocal_5018, 0);
	func_669(&Local_5145, 0);
	func_669(&Local_5196, 0);
	func_669(&Local_4664, 0);
	if (GlobalFunc_234(iLocal_4867))
	{
		PED::SET_PED_ACCURACY(iLocal_4867, 0);
	}
	func_669(&Local_4892, 0);
	func_669(&Local_4740, 0);
	func_669(&Local_4791, 0);
}

void func_707()//Position - 0x696DF
{
	if (!iLocal_6917)
	{
		if (GlobalFunc_7259(&Local_6820))
		{
			func_708(&(Local_5069[0 /*25*/]), iLocal_64, -2217.399f, 288.0122f, 183.603f, 203.2528f, -2225.863f, 279.071f, 183.6041f, "WKWAY_FIB2_1", 1);
			PED::REMOVE_PED_DEFENSIVE_AREA(Local_5069[0 /*25*/], 0);
			func_619(1);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -2223.189f, 281.2049f, 183.6041f, PLAYER::PLAYER_PED_ID(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
			func_617(Local_5069[0 /*25*/], 1);
			func_650(&(Local_5069[0 /*25*/]));
			iLocal_6917 = 1;
		}
	}
	if (!iLocal_6918)
	{
		if (GlobalFunc_7259(&Local_6828))
		{
			func_628(&(Local_5145[1 /*25*/]), iLocal_63, -2254.159f, 318.9826f, 183.6013f, 203f, "WKWAY_MW2_2", iLocal_312, iLocal_75, 5, 0, 0, 0);
			func_621(&(Local_5145[1 /*25*/]));
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_5145[1 /*25*/], -2247.461f, 305.5525f, 183.602f, 2f, 1, 0);
			func_619(1);
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -2247.461f, 305.5525f, 183.602f, PLAYER::PLAYER_PED_ID(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
			func_617(Local_5145[1 /*25*/], 1);
			func_650(&(Local_5145[1 /*25*/]));
			iLocal_6736 = 5;
			iLocal_6918 = 1;
		}
	}
	if (!iLocal_6919)
	{
		if (GlobalFunc_7259(&Local_6836))
		{
			func_628(&(Local_5196[0 /*25*/]), iLocal_63, -2286.055f, 310.0887f, 183.6011f, 203.2528f, "WKWAY_MW3_1", iLocal_312, iLocal_75, 5, 0, 0, 0);
			PED::REMOVE_PED_DEFENSIVE_AREA(Local_5196[0 /*25*/], 0);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_5196[0 /*25*/], -2282.888f, 308.1736f, 183.6021f, 2.5f, 1, 0);
			PED::SET_PED_COMBAT_MOVEMENT(Local_5196[0 /*25*/], 1);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_5196[0 /*25*/], 200f, 0);
			func_650(&(Local_5196[0 /*25*/]));
			iLocal_6919 = 1;
		}
	}
	if (!iLocal_6920)
	{
		if (GlobalFunc_7259(&Local_6844))
		{
			iLocal_6920 = 1;
			iLocal_4046 = 1;
		}
	}
}

void func_708(var uParam0, int iParam1, struct<3> Param2, float fParam5, struct<3> Param6, char* sParam9, int iParam10)//Position - 0x69909
{
	int iVar0;
	int iVar1;
	
	switch (iParam1)
	{
		case joaat("s_m_y_swat_01"):
			iVar0 = iLocal_311;
			iVar1 = iLocal_74;
			break;
		
		case joaat("s_m_m_ciasec_01"):
			iVar0 = iLocal_313;
			iVar1 = iLocal_72;
			break;
		
		case joaat("s_m_y_blackops_01"):
			iVar0 = iLocal_312;
			iVar1 = iLocal_75;
			break;
		
		default:
			iVar0 = iLocal_313;
			iVar1 = iLocal_72;
			break;
	}
	func_628(uParam0, iParam1, Param2, fParam5, sParam9, iVar0, iVar1, 2, 0, 0, 0);
	func_670(uParam0, Param6, 1f, 1, 1, 1, 1, 0.5f, 0.5f, 0, 1);
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(*uParam0, 0);
	TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(*uParam0, 0);
	TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*uParam0, 100f, 0);
	PED::SET_PED_DIES_WHEN_INJURED(*uParam0, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 0, iParam10);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 0);
	func_621(uParam0);
}

void func_709()//Position - 0x699CA
{
	int iVar0;
	
	if (bLocal_6924)
	{
		func_714();
		func_713();
		func_712();
		func_711();
	}
	if (!iLocal_6923)
	{
		if (GlobalFunc_5980(&Local_6876, func_28()))
		{
			func_710(&Local_5349);
			func_710(&Local_5273);
			func_710(&Local_5425);
			iLocal_6923 = 1;
			iLocal_4046 = 1;
		}
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2298.768f, 337.793f, 182.3517f, -2275.331f, 284.9073f, 187.3518f, 9.75f, 0, 1, 0))
	{
		iLocal_6747 = 1;
	}
	if (!iLocal_6748)
	{
		if (iLocal_6747)
		{
			if (func_461("M3_DFDVWARC"))
			{
				iLocal_6747 = 0;
				iLocal_6748 = 1;
				iLocal_6925 = 0;
			}
		}
	}
	switch (iLocal_6736)
	{
		case 0:
			bLocal_6924 = false;
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			if (iVar0 == 0)
			{
				if (func_461("M3_DVTOFNT"))
				{
					iLocal_6736 = 1;
				}
			}
			else if (iVar0 == 1)
			{
				if (func_461("M3_MAKEPLAY"))
				{
					iLocal_6736 = 1;
				}
			}
			break;
		
		case 1:
			if (!GlobalFunc_5172(&uLocal_283, 0))
			{
				GlobalFunc_164("M3_02", 7500, 1);
				GlobalFunc_703(&uLocal_317);
				uLocal_317 = HUD::ADD_BLIP_FOR_COORD(-2247.732f, 268.9541f, 173.602f);
				bLocal_6924 = true;
				iLocal_114 = 1;
				iLocal_6925 = 1;
				iLocal_6736 = 20;
			}
			break;
		
		case 3:
			if (func_461("M3_ESC1"))
			{
				iLocal_6736 = 20;
			}
			break;
		
		case 4:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			if (iVar0 == 0)
			{
				if (func_461("M3_MOREFIB2"))
				{
					iLocal_6736 = 20;
				}
			}
			else if (iVar0 == 1)
			{
				if (func_461("M3_MFIBM"))
				{
					iLocal_6736 = 20;
				}
			}
			break;
		
		case 5:
			if (func_461("M3_DFMIMWRCT"))
			{
				iLocal_6736 = 20;
			}
			break;
		
		case 6:
			if (func_461("M3_DFMIMWWV3"))
			{
				iLocal_6736 = 20;
			}
			break;
		
		case 7:
			if (func_461("M3_DFMICIARC"))
			{
				iLocal_6736 = 20;
			}
			break;
		
		case 8:
			if (func_461("DFDVDWNST"))
			{
				iLocal_6736 = 20;
			}
			break;
		
		case 9:
			if (func_461("M3_MOREFIB"))
			{
				iLocal_6736 = 20;
			}
			break;
		
		case 10:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			if (iVar0 == 0)
			{
				if (func_461("M3_MOVEUP"))
				{
					iLocal_6736 = 20;
				}
			}
			else if (iVar0 == 1)
			{
				if (func_461("M3_SNIPEM"))
				{
					iLocal_6736 = 20;
				}
			}
			break;
		
		case 17:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			if (iVar0 == 0)
			{
				if (func_461("M3_GUYLEFT"))
				{
					iLocal_6736 = 20;
				}
			}
			else if (iVar0 == 1)
			{
				if (GlobalFunc_8315() == 2)
				{
					if (func_461("M3_TBUILD"))
					{
						iLocal_6736 = 20;
					}
				}
				else if (GlobalFunc_8315() == 0)
				{
					if (func_461("M3_MBUILD"))
					{
						iLocal_6736 = 20;
					}
				}
			}
			break;
		
		case 19:
			if (func_461("M3_TFIBM"))
			{
				iLocal_6736 = 20;
			}
			break;
	}
}

void func_710(int iParam0)//Position - 0x69CAF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (GlobalFunc_234((*iParam0)[iVar0 /*25*/]))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY((*iParam0)[iVar0 /*25*/]);
			TASK::TASK_COMBAT_PED((*iParam0)[iVar0 /*25*/], PLAYER::PLAYER_PED_ID(), 0, 16);
		}
		iVar0++;
	}
}

void func_711()//Position - 0x69CF5
{
	switch (iLocal_6940)
	{
		case 0:
			GlobalFunc_6877(&uLocal_6937);
			iLocal_6940 = 1;
			break;
		
		case 1:
			if (GlobalFunc_5182(&uLocal_6937) >= 19f)
			{
				if (func_461("M3_CHAT1"))
				{
					iLocal_6940 = 2;
				}
			}
			break;
		
		case 2:
			if (!GlobalFunc_5172(&uLocal_283, 1))
			{
				if (func_461("M3_CHAT2"))
				{
					GlobalFunc_6877(&uLocal_6937);
					iLocal_6940 = 3;
				}
			}
			break;
		
		case 3:
			if (GlobalFunc_5182(&uLocal_6937) >= 15f)
			{
				if (func_461("M3_CHAT3"))
				{
					GlobalFunc_6877(&uLocal_6937);
					iLocal_6940 = 4;
				}
			}
			break;
		
		case 4:
			if (GlobalFunc_5182(&uLocal_6937) >= 15f)
			{
				if (func_461("M3_CHAT4"))
				{
					iLocal_6940 = 5;
				}
			}
			break;
		
		case 5:
			if (!GlobalFunc_5172(&uLocal_283, 1))
			{
				if (func_461("M3_CHAT5"))
				{
					iLocal_6940 = 6;
				}
			}
			break;
	}
}

void func_712()//Position - 0x69DEC
{
	switch (iLocal_6743)
	{
		case 0:
			GlobalFunc_6877(&uLocal_6758);
			iLocal_6743 = 1;
			break;
		
		case 1:
			if (GlobalFunc_5182(&uLocal_6758) >= 60f)
			{
				if (GlobalFunc_7259(&Local_6900))
				{
					if (func_461("M3_REMIND"))
					{
						iLocal_6743 = 2;
					}
				}
			}
			break;
	}
}

void func_713()//Position - 0x69E43
{
	switch (iLocal_6742)
	{
		case 0:
			if (iLocal_6916)
			{
				iLocal_6742++;
			}
			break;
		
		case 1:
			if ((GlobalFunc_7259(&Local_6868) && CAM::IS_SPHERE_VISIBLE(-2275.623f, 331.0665f, 185.0653f, 1f)) && func_623(&iLocal_5018) != 0)
			{
				if (bLocal_6924)
				{
					iLocal_6736 = 7;
				}
				iLocal_6742++;
			}
			break;
	}
}

void func_714()//Position - 0x69EB6
{
	int iVar0;
	int iVar1;
	
	if (GlobalFunc_5182(&uLocal_4057) >= 15f && !GlobalFunc_5172(&uLocal_283, 1))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		switch (iVar0)
		{
			case 0:
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
				if (iVar1 == 0)
				{
					if (func_592("M3_DFMIWAR"))
					{
						GlobalFunc_6877(&uLocal_4057);
					}
				}
				else if (iVar1 == 1)
				{
					if (func_592("M3_FRAY"))
					{
						GlobalFunc_6877(&uLocal_4057);
					}
				}
				break;
			
			case 1:
				if (!iLocal_6921)
				{
					if (func_592("M3_DFDVWAR"))
					{
						GlobalFunc_6877(&uLocal_4057);
					}
				}
				else if (func_592("M3_DFDVWARCY"))
				{
					GlobalFunc_6877(&uLocal_4057);
				}
				break;
			
			case 2:
				if (func_461("M3_DFTRWAR"))
				{
					GlobalFunc_6877(&uLocal_4057);
				}
				break;
			}
	}
}

void func_715()//Position - 0x69F86
{
	int iVar0;
	
	if (iLocal_6685 > 1)
	{
		func_636();
		func_720();
		func_719();
		if (!iLocal_6726)
		{
			func_718();
		}
	}
	if (GlobalFunc_234(iLocal_4050))
	{
		PED::SET_PED_RESET_FLAG(iLocal_4050, 64, 1);
	}
	if (bLocal_3037)
	{
		func_570();
	}
	switch (iLocal_6685)
	{
		case 0:
			GlobalFunc_718(&uLocal_2049, iLocal_64);
			GlobalFunc_718(&uLocal_2049, iLocal_65);
			GlobalFunc_718(&uLocal_2049, iLocal_63);
			func_716();
			iLocal_6720 = 0;
			iLocal_6724 = 0;
			iLocal_6725 = 0;
			iLocal_6726 = 0;
			iLocal_6727 = 0;
			iLocal_6686 = 0;
			iLocal_6687 = 0;
			iLocal_6685 = 1;
			break;
		
		case 1:
			if ((STREAMING::HAS_MODEL_LOADED(iLocal_64) && STREAMING::HAS_MODEL_LOADED(iLocal_65)) && STREAMING::HAS_MODEL_LOADED(iLocal_63))
			{
				GlobalFunc_11043(3, "TREVOR SAVES DAVE", 0, 0, 0, 1);
				func_676();
				AUDIO::STOP_AUDIO_SCENE("MI_3_HELICOPTER_CRASH_SCENE");
				AUDIO::START_AUDIO_SCENE("MI_3_SHOOTOUT_PLAYER_IS_TREVOR");
				if (GlobalFunc_234(func_28()))
				{
					PED::SET_PED_COMBAT_MOVEMENT(func_28(), 1);
					ENTITY::FREEZE_ENTITY_POSITION(func_28(), 0);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_28(), Local_6394.f_3, 5f, 0, 0);
					PED::SET_PED_ACCURACY(func_28(), 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_28(), 0);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_28(), Local_6394.f_3, -1, 0, 0f, 1, 0, Local_6394, 0);
				}
				if (GlobalFunc_234(iLocal_4050))
				{
					PED::SET_PED_ACCURACY(iLocal_4050, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_4050, 0);
					PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_4050, 0);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_4050, -2219.345f, 247.316f, 173.6018f, 2f, 0, 0);
					func_619(1);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2219.345f, 247.316f, 173.6018f, 2f, -1, 1048576000, 0, 1193033728);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, -2219.345f, 247.316f, 173.6018f, -1, 1, 0f, 1, 1, 0, 1);
					func_617(iLocal_4050, 1);
				}
				if (GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
					ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
				}
				GlobalFunc_6877(&uLocal_4057);
				iLocal_6685 = 2;
			}
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			break;
		
		case 2:
			if (func_648(&Local_5983, &Local_4513, &Local_5983) == 0)
			{
				func_21();
				iLocal_6685 = 4;
			}
			if (!iLocal_6726)
			{
				if (func_648(&Local_5983, &Local_4513, &Local_5983) <= 2)
				{
					iVar0 = 0;
					while (iVar0 <= (Local_4513 - 1))
					{
						if (GlobalFunc_234(Local_4513[iVar0 /*25*/]))
						{
							PED::REMOVE_PED_DEFENSIVE_AREA(Local_4513[iVar0 /*25*/], 0);
							func_622(Local_4513[iVar0 /*25*/], Local_6704, 1, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_4513[iVar0 /*25*/], 0, 0);
						}
						iVar0++;
					}
					iLocal_6726 = 1;
				}
			}
			break;
		
		case 4:
			iVar0 = 0;
			while (iVar0 <= (Local_4513 - 1))
			{
				func_22(&(Local_4513[iVar0 /*25*/].f_1));
				if (PED::IS_PED_INJURED(Local_4513[iVar0 /*25*/]) && ENTITY::DOES_ENTITY_EXIST(Local_4513[iVar0 /*25*/]))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_4513[iVar0 /*25*/], 0);
				}
				iVar0++;
			}
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_4050, 1);
			ENTITY::SET_ENTITY_PROOFS(iLocal_4050, 1, 1, 1, 1, 1, 0, 0, 0);
			func_48(5);
			TASK::REMOVE_ALL_COVER_BLOCKING_AREAS();
			iLocal_6685 = 3;
			break;
		
		case 3:
			break;
	}
}

void func_716()//Position - 0x6A2A9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iLocal_6728[iVar0] = 0;
		iVar0++;
	}
	func_717();
	Local_6688 = { GlobalFunc_3023(-2214.085f, 241.2687f, 173.3518f, -2231.87f, 282.649f, 177.102f, 7.75f) };
	Local_6696 = { GlobalFunc_3023(-2247.552f, 268.0515f, 173.352f, -2271.443f, 322.2572f, 177.3019f, 13f) };
	Local_6704 = { GlobalFunc_3023(-2234.729f, 258.7261f, 173.352f, -2241.87f, 278.0818f, 176.352f, 20f) };
	Local_6712 = { GlobalFunc_3023(-2222.388f, 241.8016f, 173.3518f, -2223.634f, 246.7519f, 175.6018f, 4f) };
	TASK::ADD_COVER_BLOCKING_AREA(Vector(174.602f, 266.191f, -2246.652f) + Vector(1f, 2f, 2.25f), Vector(174.602f, 266.191f, -2246.652f) - Vector(1f, 2f, 2.25f), 1, 1, 1, 0);
}

void func_717()//Position - 0x6A3B5
{
	iLocal_101[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-2265.381f, 275.608f, 173.895f, 20f, 20f, 5f, GlobalFunc_723(23.956f), 0, 7);
	iLocal_101[1] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-2272.281f, 294.308f, 173.895f, 20f, 20f, 5f, GlobalFunc_723(23.956f), 0, 7);
	iLocal_101[2] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-2254.881f, 302.108f, 173.895f, 20f, 20f, 5f, GlobalFunc_723(23.956f), 0, 7);
	iLocal_101[3] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-2236.681f, 310.608f, 173.895f, 20f, 20f, 5f, GlobalFunc_723(23.956f), 0, 7);
	iLocal_101[5] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-2214.814f, 295.635f, 174.033f, 6.6f, 20f, 4f, GlobalFunc_723(25.016f), 0, 7);
}

void func_718()//Position - 0x6A4A3
{
	int iVar0;
	
	switch (iLocal_6686)
	{
		case 0:
			GlobalFunc_6877(&uLocal_6721);
			iLocal_6727 = 0;
			iLocal_6686 = 1;
			break;
		
		case 1:
			if (GlobalFunc_5182(&uLocal_6721) >= 10f)
			{
				iVar0 = 0;
				while (iVar0 <= (iLocal_6728 - 1))
				{
					if (!iLocal_6727)
					{
						if (!iLocal_6728[iVar0])
						{
							if (GlobalFunc_234(Local_4513[iVar0 /*25*/]))
							{
								iLocal_6728[iVar0] = 1;
								iLocal_6727 = 1;
								PED::REMOVE_PED_DEFENSIVE_AREA(Local_4513[iVar0 /*25*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_4513[iVar0 /*25*/], ENTITY::GET_ENTITY_COORDS(iLocal_4050, 1), 3f, 0, 0);
								PED::SET_PED_COMBAT_RANGE(Local_4513[iVar0 /*25*/], 0);
								PED::SET_PED_COMBAT_MOVEMENT(Local_4513[iVar0 /*25*/], 1);
								iLocal_6686 = 0;
							}
							else
							{
								iLocal_6728[iVar0] = 1;
							}
						}
					}
					iVar0++;
				}
			}
			break;
		
		case 2:
			break;
	}
}

void func_719()//Position - 0x6A578
{
	int iVar0;
	
	switch (iLocal_6720)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 <= (Local_4513 - 1))
			{
				if (GlobalFunc_234(Local_4513[iVar0 /*25*/]) && GlobalFunc_234(iLocal_4050))
				{
					if (GlobalFunc_156(iLocal_4050, Local_4513[iVar0 /*25*/], 1) <= 7.5f)
					{
						iLocal_6720++;
					}
				}
				iVar0++;
			}
			break;
		
		case 1:
			if (GlobalFunc_234(iLocal_4050))
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_4050, 0);
				ENTITY::SET_ENTITY_PROOFS(iLocal_4050, 0, 0, 0, 0, 0, 0, 0, 0);
				PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_4050, 0);
				func_622(iLocal_4050, Local_6712, 1, 0);
			}
			iVar0 = 0;
			while (iVar0 <= (Local_4513 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_4513[iVar0 /*25*/]))
				{
					if (!PED::IS_PED_DEAD_OR_DYING(Local_4513[iVar0 /*25*/], 1))
					{
					}
				}
				iVar0++;
			}
			iLocal_6720++;
			break;
	}
}

void func_720()//Position - 0x6A65E
{
	int iVar0;
	
	func_722();
	func_721();
	switch (iLocal_6687)
	{
		case 0:
			if (func_461("M3_TDSTART"))
			{
				iLocal_6687 = 1;
			}
			break;
		
		case 1:
			if (func_461("M3_DEBATE"))
			{
				iLocal_6687 = 2;
			}
			break;
		
		case 2:
			if (!GlobalFunc_5172(&uLocal_283, 0))
			{
				GlobalFunc_164("M3_OBJSVDV", 7500, 1);
				iLocal_6687 = 20;
			}
			break;
	}
	if (!iLocal_6724)
	{
		iVar0 = 0;
		while (iVar0 <= (Local_4513 - 1))
		{
			if (GlobalFunc_234(Local_4513[iVar0 /*25*/]))
			{
				if (GlobalFunc_5980(&Local_6688, Local_4513[iVar0 /*25*/]))
				{
					if (func_461("M3_COLUMN"))
					{
						iLocal_6724 = 1;
					}
				}
			}
			iVar0++;
		}
	}
	if (!iLocal_6725)
	{
		iVar0 = 0;
		while (iVar0 <= (Local_4513 - 1))
		{
			if (GlobalFunc_234(Local_4513[iVar0 /*25*/]))
			{
				if (GlobalFunc_5980(&Local_6696, Local_4513[iVar0 /*25*/]))
				{
					if (func_461("M3_POOL"))
					{
						iLocal_6725 = 1;
					}
				}
			}
			iVar0++;
		}
	}
}

void func_721()//Position - 0x6A767
{
	int iVar0;
	
	if ((!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && !GlobalFunc_5172(&uLocal_283, 1)) && PED::HAS_PED_RECEIVED_EVENT(func_28(), 123))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		switch (iVar0)
		{
			case 0:
				func_461("M3_TDMIRCT1");
				break;
			
			case 1:
				func_461("M3_TDMIRCT2");
				break;
			
			case 2:
				func_461("M3_TDMIRCT3");
				break;
			}
	}
}

void func_722()//Position - 0x6A7DC
{
	int iVar0;
	
	if (GlobalFunc_234(iLocal_4050))
	{
		if ((GlobalFunc_5182(&uLocal_4057) >= 10f && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && !GlobalFunc_5172(&uLocal_283, 1))
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			if (iVar0 == 0)
			{
				if (func_592("M3_TDDVPLEA"))
				{
					GlobalFunc_6877(&uLocal_4057);
				}
			}
			else if (iVar0 == 1)
			{
				if (func_592("M3_TROUBLE"))
				{
					iLocal_6687 = 20;
				}
			}
		}
	}
}

void func_723()//Position - 0x6A851
{
	if (iLocal_6653 > 1)
	{
		func_735();
		func_570();
	}
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	}
	switch (iLocal_6653)
	{
		case 0:
			iLocal_6655 = 0;
			iLocal_6661 = 0;
			iLocal_6654 = 20;
			iLocal_6683 = 0;
			iLocal_6682 = 0;
			bLocal_6659 = false;
			iLocal_6681 = 0;
			iLocal_6657 = 0;
			iLocal_6658 = 1;
			iLocal_6656 = 0;
			GlobalFunc_718(&uLocal_2049, iLocal_63);
			GlobalFunc_718(&uLocal_2049, iLocal_67);
			func_567(&uLocal_2049, 50, &cLocal_76);
			GlobalFunc_719(&uLocal_2049, cLocal_62);
			CUTSCENE::REQUEST_CUTSCENE(sLocal_58, 8);
			AUDIO::LOAD_STREAM("MIC_3_HELICOPTER_SHOT_DOWN_MASTER", 0);
			iLocal_6653 = 1;
			break;
		
		case 1:
			if (((((STREAMING::HAS_MODEL_LOADED(iLocal_67) && STREAMING::HAS_MODEL_LOADED(iLocal_63)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(50, &cLocal_76)) && STREAMING::HAS_ANIM_DICT_LOADED(cLocal_62)) && CUTSCENE::HAS_CUTSCENE_LOADED()) && AUDIO::LOAD_STREAM("MIC_3_HELICOPTER_SHOT_DOWN_MASTER", 0))
			{
				iLocal_6653 = 2;
			}
			break;
		
		case 2:
			if (func_731())
			{
				GlobalFunc_6877(&uLocal_6678);
				iLocal_6653 = 3;
			}
			break;
		
		case 3:
			PED::_0xA52D5247A4227E14(PLAYER::PLAYER_PED_ID());
			if (func_724())
			{
				iLocal_6653 = 4;
			}
			else
			{
				PAD::DISABLE_CONTROL_ACTION(0, 30, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 31, 1);
			}
			break;
		
		case 4:
			iLocal_6653 = 5;
			STREAMING::REMOVE_ANIM_DICT(cLocal_62);
			ENTITY::SET_ENTITY_INVINCIBLE(func_28(), 0);
			ENTITY::SET_ENTITY_PROOFS(func_28(), 1, 0, 0, 1, 1, 0, 0, 0);
			func_48(4);
			break;
		
		case 5:
			break;
	}
}

int func_724()//Position - 0x6A9C3
{
	switch (iLocal_6661)
	{
		case 0:
			if (GlobalFunc_234(Local_318[51 /*25*/]) && GlobalFunc_234(Local_1744[1 /*7*/]))
			{
				ENTITY::SET_ENTITY_MAX_HEALTH(Local_318[51 /*25*/], 1000);
				ENTITY::SET_ENTITY_HEALTH(Local_318[51 /*25*/], 1000);
				ENTITY::SET_ENTITY_PROOFS(Local_318[51 /*25*/], 0, 0, 0, 0, 0, 0, 0, 0);
				PED::SET_PED_SHOOT_RATE(Local_318[51 /*25*/], 100);
				PED::SET_PED_FIRING_PATTERN(Local_318[51 /*25*/], -957453492);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_318[51 /*25*/], 0);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_318[51 /*25*/], 1);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_318[51 /*25*/], 0);
				ENTITY::SET_ENTITY_PROOFS(Local_1744[1 /*7*/], 0, 1, 1, 0, 0, 0, 0, 0);
				VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_1744[1 /*7*/], 0);
				VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_1744[1 /*7*/], 0);
				VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_1744[1 /*7*/], 0);
			}
			func_156(1, 1, 1, 0, 0, 0);
			WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_318[51 /*25*/], joaat("vehicle_weapon_player_buzzard"));
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_3_TREVOR_SHOOTS_HELICOPTER"))
			{
				AUDIO::START_AUDIO_SCENE("MI_3_TREVOR_SHOOTS_HELICOPTER");
			}
			if (GlobalFunc_234(iLocal_4050))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_4050, 0);
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
			GlobalFunc_6877(&uLocal_6672);
			GlobalFunc_6877(&uLocal_6675);
			iLocal_6654 = 0;
			iLocal_6656 = 1;
			WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_318[51 /*25*/], joaat("vehicle_weapon_player_buzzard"));
			TASK::TASK_HELI_MISSION(Local_318[51 /*25*/], Local_1744[1 /*7*/], 0, func_28(), -2219.42f, 247.1141f, 183.6227f, 6, 10f, 50f, -1f, 191, 16, -1082130432, 0);
			GlobalFunc_11043(2, "TREVOR SHOOTS HELICOPTER", 0, 0, 0, 1);
			iLocal_6661 = 1;
			break;
		
		case 1:
			PAD::DISABLE_CONTROL_ACTION(0, 19, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
			if (GlobalFunc_226(&uLocal_6675) && GlobalFunc_5182(&uLocal_6675) >= 2.5f)
			{
				GlobalFunc_235(&uLocal_6675);
			}
			if (GlobalFunc_226(&uLocal_6672) && GlobalFunc_5182(&uLocal_6672) >= 20f)
			{
				WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_318[51 /*25*/], joaat("weapon_vehicle_rocket"));
				TASK::TASK_HELI_MISSION(Local_318[51 /*25*/], Local_1744[1 /*7*/], 0, func_28(), -2219.42f, 247.1141f, 183.6227f, 6, 10f, 50f, -1f, 191, 16, -1082130432, 0);
				GlobalFunc_235(&uLocal_6672);
				ENTITY::SET_ENTITY_PROOFS(func_28(), 0, 0, 0, 0, 0, 0, 0, 0);
				ENTITY::SET_ENTITY_INVINCIBLE(func_28(), 0);
				iLocal_6654 = 9;
				iLocal_6661 = 2;
			}
			if (GlobalFunc_234(Local_1744[1 /*7*/]))
			{
				if (ENTITY::GET_ENTITY_HEALTH(Local_1744[1 /*7*/]) < 1000)
				{
					ENTITY::SET_ENTITY_HEALTH(Local_1744[1 /*7*/], 1000);
				}
				if (VEHICLE::GET_VEHICLE_BODY_HEALTH(Local_1744[1 /*7*/]) < 1000f)
				{
					VEHICLE::SET_VEHICLE_BODY_HEALTH(Local_1744[1 /*7*/], 1000f);
				}
				if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_1744[1 /*7*/]) < 1000f)
				{
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_1744[1 /*7*/], 1000f);
				}
				if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_1744[1 /*7*/]) < 1000f)
				{
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_1744[1 /*7*/], 1000f);
				}
			}
			if (GlobalFunc_234(Local_318[51 /*25*/]))
			{
				if (ENTITY::GET_ENTITY_HEALTH(Local_318[51 /*25*/]) < 1000 || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Local_1744[1 /*7*/], 1), 2f))
				{
					iLocal_6662 = PED::CREATE_PED(26, iLocal_64, 0f, 0f, 0f, 0, 1, 1);
					iLocal_6663 = PED::CREATE_PED(26, iLocal_64, 0f, 0f, 0f, 0, 1, 1);
					AUDIO::STOP_AUDIO_SCENE("MI_3_TREVOR_SHOOTS_HELICOPTER");
					AUDIO::START_AUDIO_SCENE("MI_3_HELICOPTER_CRASH_SCENE");
					AUDIO::PLAY_STREAM_FRONTEND();
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_6662))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_6662, 1);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_6663))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_6663, 1);
					}
					iLocal_6656 = 0;
					iLocal_6658 = 0;
					HUD::CLEAR_PRINTS();
					HUD::CLEAR_SMALL_PRINTS();
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
					RECORDING::_0x293220DA1B46CEBC(5f, 0f, 4);
					RECORDING::_0x48621C9FCA3EBD28(4);
					iLocal_6661 = 3;
				}
				if (!iLocal_6682)
				{
					if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_318[51 /*25*/], 1), 2f, 1))
					{
						TASK::TASK_LOOK_AT_ENTITY(Local_318[51 /*25*/], PLAYER::PLAYER_PED_ID(), -1, 2, 4);
						iLocal_6682 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(func_28(), 1), 2f, 0, 1) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(func_28(), 1), 2f))
			{
				ENTITY::SET_ENTITY_HEALTH(func_28(), 0);
			}
			break;
		
		case 3:
			func_156(1, 1, 1, 0, 0, 0);
			uLocal_6667 = CAM::CREATE_CAMERA(964613260, 1);
			uLocal_1906[11] = PED::CREATE_SYNCHRONIZED_SCENE(-2216.758f, 242.446f, 174.035f, 0f, 0f, 0f, 2);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_1906[11], 0);
			if (GlobalFunc_234(iLocal_6662))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_6662, uLocal_1906[11], cLocal_62, "leadout_swat_a", 8f, -1000f, 0, 0, 1148846080, 0);
			}
			if (GlobalFunc_234(iLocal_6663))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_6663, uLocal_1906[11], cLocal_62, "leadout_swat_b", 8f, -1000f, 0, 0, 1148846080, 0);
			}
			if (GlobalFunc_234(func_28()))
			{
				WEAPON::GIVE_WEAPON_TO_PED(func_28(), iLocal_6668, 100, 1, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_28(), 1);
				ENTITY::SET_ENTITY_INVINCIBLE(func_28(), 1);
				ENTITY::SET_ENTITY_PROOFS(func_28(), 1, 1, 1, 1, 1, 0, 0, 0);
				PED::SET_PED_CAN_RAGDOLL(func_28(), 0);
				PED::SET_PED_CONFIG_FLAG(func_28(), 211, 0);
				PED::SET_PED_RESET_FLAG(func_28(), 249, 1);
				PED::SET_PED_RESET_FLAG(func_28(), 248, 1);
				TASK::TASK_SYNCHRONIZED_SCENE(func_28(), uLocal_1906[11], cLocal_62, "leadout_mic", 8f, -1000f, 4, 96, 1148846080, 0);
			}
			if (GlobalFunc_234(func_29()))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(func_29(), uLocal_1906[11], cLocal_62, "leadout_trev", 8f, -8f, 8, 0, 1148846080, 0);
				PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), 0);
				GlobalFunc_7632(0);
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 0);
				PED::FORCE_PED_MOTION_STATE(func_29(), -1871534317, 0, 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_29(), 0, 0);
			}
			if (GlobalFunc_234(Local_1744[1 /*7*/]))
			{
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_1744[1 /*7*/], uLocal_1906[11], "leadout_heli", cLocal_62, 8f, -1000f, 0, 1148846080);
			}
			if (GlobalFunc_234(Local_318[51 /*25*/]))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(Local_318[51 /*25*/], uLocal_1906[11], cLocal_62, "leadout_pilot", 8f, -1000f, 4, 1, 1148846080, 0);
			}
			CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_6667, uLocal_1906[11], "leadout_cam", cLocal_62);
			CAM::SET_CAM_ACTIVE(uLocal_6667, 1);
			uLocal_6666 = CAM::CREATE_CAMERA(964613260, 0);
			uLocal_1906[12] = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
			if (GlobalFunc_234(Local_1744[1 /*7*/]))
			{
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_1906[12], Local_1744[1 /*7*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_1744[1 /*7*/], "seat_dside_f"));
			}
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			func_729(1, 1);
			GlobalFunc_6877(&uLocal_6669);
			CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_6666, uLocal_1906[12], "Cockpit_cam", cLocal_62);
			CAM::SET_CAM_ACTIVE(uLocal_6666, 1);
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			iLocal_6660 = 1;
			iLocal_6661 = 4;
			break;
		
		case 4:
			if (iLocal_6660)
			{
				GlobalFunc_702(1, 1, 1);
				iLocal_6660 = 0;
			}
			if (GlobalFunc_4926(1000))
			{
				bLocal_6659 = true;
				RECORDING::_0x13B350B8AD0EEE10();
				CAM::DO_SCREEN_FADE_OUT(800);
				iLocal_6661 = 6;
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1906[12]) == 1f)
			{
				CAM::SET_CAM_ACTIVE(uLocal_6666, 0);
				iLocal_6661 = 5;
			}
			break;
		
		case 5:
			if (GlobalFunc_4926(1000))
			{
				RECORDING::_0x13B350B8AD0EEE10();
				bLocal_6659 = true;
				CAM::DO_SCREEN_FADE_OUT(800);
				iLocal_6661 = 6;
			}
			if (!iLocal_6681)
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1906[11]) >= 0.195425f)
				{
					if (GlobalFunc_234(Local_1744[1 /*7*/]))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("MIC3_CRASH");
						FIRE::ADD_EXPLOSION(-2236.32f, 251.2191f, 183.6265f, 32, 1.5f, 1, 0, 1065353216);
						FIRE::ADD_EXPLOSION(-2238.839f, 252.7594f, 183.562f, 32, 1.5f, 1, 0, 1065353216);
						FIRE::ADD_EXPLOSION(-2233.902f, 250.4442f, 182.3726f, 32, 1.5f, 1, 0, 1065353216);
						FIRE::ADD_EXPLOSION(-2239.599f, 250.7991f, 185.3237f, 32, 1.5f, 1, 0, 1065353216);
						FIRE::ADD_EXPLOSION(-2236.583f, 251.3551f, 185f, 32, 1.5f, 1, 0, 1065353216);
						PED::DELETE_PED(&iLocal_6662);
						PED::DELETE_PED(&iLocal_6663);
						PED::DELETE_PED(&(Local_318[51 /*25*/]));
						VEHICLE::DELETE_VEHICLE(&(Local_1744[1 /*7*/]));
						GlobalFunc_7621(82, 1, 0, 1, 1);
						FIRE::START_SCRIPT_FIRE(-2237.228f, 252.9601f, 175.6547f, 5, 0);
						FIRE::START_SCRIPT_FIRE(-2236.577f, 258.3874f, 174.614f, 5, 0);
					}
					iLocal_6681 = 1;
				}
			}
			if (!iLocal_6657)
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1906[11]) >= 0.25f)
				{
					iLocal_6654 = 14;
					iLocal_6657 = 1;
				}
			}
			if (!iLocal_6683)
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1906[11]) >= 0.82f)
				{
					func_726();
					iLocal_6683 = 1;
				}
			}
			if (GlobalFunc_234(func_28()))
			{
				if (!GlobalFunc_709(func_28(), 1785177548, 1) && !GlobalFunc_709(func_28(), -1959848946, 1))
				{
					PED::SET_PED_CAN_RAGDOLL(func_28(), 1);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_28(), -2219.298f, 247.3061f, 183.6041f, -1, 0, 0f, 0, 0, 0, 0);
				}
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1906[11]) == 1f)
			{
				PED::DELETE_PED(&iLocal_6662);
				PED::DELETE_PED(&iLocal_6663);
				iLocal_6661 = 9;
			}
			break;
		
		case 6:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				iLocal_6661 = 7;
			}
			break;
		
		case 7:
			if (!iLocal_6683)
			{
				func_726();
				iLocal_6683 = 1;
			}
			if (GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_4104, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_4104.f_3);
			}
			PED::DELETE_PED(&iLocal_6662);
			PED::DELETE_PED(&iLocal_6663);
			PED::DELETE_PED(&(Local_318[51 /*25*/]));
			VEHICLE::DELETE_VEHICLE(&(Local_1744[1 /*7*/]));
			iLocal_6661 = 9;
			break;
		
		case 9:
			func_729(0, 1);
			if (GlobalFunc_234(func_28()))
			{
				PED::SET_PED_CAN_RAGDOLL(func_28(), 1);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_28(), -2219.298f, 247.3061f, 183.6041f, -1, 0, 0f, 0, 0, 0, 0);
			}
			if (GlobalFunc_234(iLocal_4050))
			{
			}
			if (GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0.0027f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-27.1329f, 1065353216);
			AUDIO::STOP_STREAM();
			CAM::SET_CAM_ACTIVE(uLocal_6667, 0);
			CAM::SET_CAM_ACTIVE(uLocal_6666, 0);
			CAM::DESTROY_CAM(uLocal_6667, 0);
			CAM::DESTROY_CAM(uLocal_6666, 0);
			RECORDING::_0x81CBAE94390F9F89();
			if (bLocal_6659)
			{
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			}
			else
			{
				CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
			}
			PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 0);
			GlobalFunc_7632(0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			PAD::ENABLE_CONTROL_ACTION(0, 19, 1);
			PAD::ENABLE_CONTROL_ACTION(0, 37, 1);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			return 1;
			break;
	}
	return 0;
}


void func_726()//Position - 0x6B4F2
{
	int iVar0;
	
	func_652(&(Local_6450[0 /*7*/]), -2247.101f, 273.1696f, 173.602f, 210f, 2, 0, 1, 0);
	func_652(&(Local_6450[1 /*7*/]), -2251.389f, 271.2775f, 173.602f, 210f, 2, 0, 1, 1);
	func_652(&(Local_6450[2 /*7*/]), -2231.962f, 275.0015f, 173.602f, 210f, 0, 1, 3, 1);
	func_652(&(Local_6450[4 /*7*/]), -2227.241f, 264.4742f, 173.602f, 210f, 0, 1, 3, 1);
	func_652(&(Local_6450[3 /*7*/]), -2229.517f, 269.747f, 173.602f, 210f, 0, 1, 3, 1);
	func_628(&(Local_4513[0 /*25*/]), iLocal_64, Local_6450[0 /*7*/].f_3, Local_6450[0 /*7*/].f_6, "MT_FIB1", iLocal_311, iLocal_74, 1, 0, 0, 0);
	func_628(&(Local_4513[1 /*25*/]), iLocal_64, Local_6450[1 /*7*/].f_3, Local_6450[1 /*7*/].f_6, "MT_FIB2", iLocal_311, iLocal_74, 1, 0, 0, 0);
	func_628(&(Local_4513[2 /*25*/]), iLocal_64, -2223.521f, 287.886f, 173.602f, 125f, "MT_FIB3", iLocal_311, iLocal_74, 1, 0, 0, 0);
	func_628(&(Local_4513[3 /*25*/]), iLocal_64, -2223.418f, 279.7906f, 173.602f, 125f, "MT_FIB4", iLocal_311, iLocal_74, 1, 0, 0, 0);
	func_628(&(Local_4513[4 /*25*/]), iLocal_64, -2223.74f, 282.7443f, 173.602f, 125f, "MT_FIB5", iLocal_311, iLocal_74, 1, 0, 0, 0);
	func_685(&Local_4513);
	iVar0 = 0;
	while (iVar0 <= (Local_4513 - 1))
	{
		if (GlobalFunc_234(Local_4513[iVar0 /*25*/]))
		{
			PED::REGISTER_HATED_TARGETS_AROUND_PED(Local_4513[iVar0 /*25*/], 250f);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_4513[iVar0 /*25*/], 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_4513[iVar0 /*25*/], 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_4513[iVar0 /*25*/], 0, 1);
			PED::REMOVE_PED_DEFENSIVE_AREA(Local_4513[iVar0 /*25*/], 1);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_4513[iVar0 /*25*/], Local_6450[iVar0 /*7*/].f_3, 1f, 0, 0);
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_4513[iVar0 /*25*/], Local_6450[iVar0 /*7*/].f_3, -1, 1, 0f, 0, 0, 0, 0);
			func_650(&(Local_4513[iVar0 /*25*/]));
		}
		iVar0++;
	}
}



void func_729(bool bParam0, int iParam1)//Position - 0x6B7AF
{
	if (!bParam0)
	{
		func_730(0);
	}
	CAM::SET_WIDESCREEN_BORDERS(bParam0, 0);
	if (iParam1 == 1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), !bParam0, 64);
	}
	else
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), !bParam0, 0);
	}
	GlobalFunc_8380(bParam0, 1, 1, 0);
	GlobalFunc_7632(bParam0);
	HUD::DISPLAY_RADAR(!bParam0);
	HUD::DISPLAY_HUD(!bParam0);
}

void func_730(int iParam0)//Position - 0x6B808
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(iParam0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
}

int func_731()//Position - 0x6B820
{
	switch (iLocal_6655)
	{
		case 0:
			if (!GlobalFunc_234(Local_318[1 /*25*/]))
			{
				func_164(&(Local_318[1 /*25*/]), 2, -2263.672f, 234.3598f, 193.6015f, 249.1836f, joaat("weapon_sniperrifle"), 10, 1, 1, 0, 60);
			}
			iLocal_6684 = 0;
			WEAPON::GET_CURRENT_PED_WEAPON(func_28(), &iLocal_6668, 1);
			AUDIO::PREPARE_MUSIC_EVENT("MIC3_SNIPE");
			WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_sniperrifle"), 31, 0);
			iLocal_6655 = 2;
			break;
		
		case 2:
			if (WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_sniperrifle")))
			{
				iLocal_6655 = 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_234(Local_318[1 /*25*/]))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_318[1 /*25*/], "Trevor", 0, 0, 0);
				iLocal_6665 = GlobalFunc_8264(Local_318[1 /*25*/], 1, 0, 0, 0, 0);
				if (GlobalFunc_234(iLocal_6665))
				{
					WEAPON::REQUEST_WEAPON_HIGH_DETAIL_MODEL(iLocal_6665);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_6665, "Daves_rifle", 1, 0, 0);
				}
			}
			if (GlobalFunc_234(func_28()))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_28(), "Michael", 0, 0, 0);
				iLocal_6664 = GlobalFunc_8264(func_28(), 1, 0, 0, 0, 0);
				if (GlobalFunc_234(iLocal_6664))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_6664, "Michaels_weapon", 1, 0, 0);
				}
			}
			PED::DELETE_PED(&(Local_318[51 /*25*/]));
			VEHICLE::DELETE_VEHICLE(&(Local_1744[1 /*7*/]));
			Local_1744[1 /*7*/] = VEHICLE::CREATE_VEHICLE(iLocal_67, -2241.1f, 263.6f, 190.3f, 235f, 1, 1);
			VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_1744[1 /*7*/]);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_1744[1 /*7*/], 0);
			func_657(&(Local_318[51 /*25*/]), iLocal_63, &(Local_1744[1 /*7*/]), -1, "MW_HELI1_1", iLocal_312, joaat("weapon_unarmed"), 30, 0, 0, 0);
			ENTITY::SET_ENTITY_PROOFS(Local_1744[1 /*7*/], 1, 1, 1, 0, 0, 0, 0, 0);
			VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_1744[1 /*7*/], 0);
			VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_1744[1 /*7*/], 0);
			VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_1744[1 /*7*/], 0);
			if (GlobalFunc_234(Local_1744[1 /*7*/]))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1744[1 /*7*/], "MW_Chopper", 0, 0, 0);
			}
			if (GlobalFunc_234(Local_318[51 /*25*/]))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_318[51 /*25*/], "FIB_Goon_1", 0, 0, 0);
			}
			if (GlobalFunc_234(iLocal_4050))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_4050, 1);
			}
			GlobalFunc_702(1, 0, 1);
			AUDIO::TRIGGER_MUSIC_EVENT("MIC3_HELI");
			AUDIO::STOP_AUDIO_SCENE("MI_3_SHOOTOUT_START");
			AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			CUTSCENE::START_CUTSCENE(0);
			RECORDING::_0x293220DA1B46CEBC(5f, 0f, 4);
			RECORDING::_0x48621C9FCA3EBD28(4);
			iLocal_6655 = 3;
			break;
		
		case 3:
			PED::DELETE_PED(&(Local_318[16 /*25*/]));
			PED::DELETE_PED(&(Local_318[17 /*25*/]));
			PED::DELETE_PED(&(Local_318[18 /*25*/]));
			PED::DELETE_PED(&(Local_318[19 /*25*/]));
			func_26(&Local_4310, 1);
			func_26(&Local_4108, 1);
			func_26(&Local_4209, 1);
			func_26(&Local_4361, 1);
			func_26(&Local_4462, 1);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			Global_89962.f_12[2] = 1;
			iLocal_6655 = 4;
			break;
		
		case 4:
			if (!iLocal_6684)
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() >= 6634)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneTrevor", 1000, 0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_6684 = 1;
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				func_732();
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MW_Chopper", 0))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1744[1 /*7*/], 1, 1);
				ENTITY::SET_ENTITY_COORDS(Local_1744[1 /*7*/], -2241.1f, 263.6f, 190.3f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_1744[1 /*7*/], 235f);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("FIB_Goon_1", 0))
			{
				if (GlobalFunc_234(Local_318[51 /*25*/]) && GlobalFunc_234(Local_1744[1 /*7*/]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_318[51 /*25*/], 0);
					PED::SET_PED_INTO_VEHICLE(Local_318[51 /*25*/], Local_1744[1 /*7*/], -1);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				func_156(1, 1, 0, 0, 0, 0);
				GlobalFunc_9019(&iLocal_3038, 2);
				GlobalFunc_10993(&iLocal_3038, 1, 0, 0);
				WEAPON::GIVE_WEAPON_TO_PED(Local_318[1 /*25*/], joaat("weapon_sniperrifle"), 10, 1, 1);
				func_156(1, 1, 0, 0, 0, 0);
				ENTITY::SET_ENTITY_COORDS(Local_318[1 /*25*/], Local_4104, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_318[1 /*25*/], Local_4104.f_3);
				PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), 1);
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 1);
				GlobalFunc_7632(1);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), 1063765679, 0, 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
				PED::_0xA52D5247A4227E14(PLAYER::PLAYER_PED_ID());
				HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				AUDIO::START_AUDIO_SCENE("MI_3_TREVOR_SHOOTS_HELICOPTER");
				iLocal_6655 = 5;
			}
			break;
		
		case 5:
			RECORDING::_0x81CBAE94390F9F89();
			return 1;
			break;
	}
	return 0;
}

void func_732()//Position - 0x6BC9A
{
	if (GlobalFunc_234(func_28()))
	{
		ENTITY::SET_ENTITY_PROOFS(func_28(), 1, 1, 1, 1, 1, 0, 0, 0);
		ENTITY::SET_ENTITY_INVINCIBLE(func_28(), 1);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_28());
		ENTITY::SET_ENTITY_COORDS(func_28(), Local_6394.f_3, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(func_28(), Local_6394.f_6);
		PED::REMOVE_PED_DEFENSIVE_AREA(func_28(), 0);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_28(), ENTITY::GET_ENTITY_COORDS(func_28(), 1), 5f, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_28(), 1);
		TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_28(), Local_6394.f_3, -1, 0, 0f, 0, 0, Local_6394, 0);
		PED::SET_PED_CONFIG_FLAG(func_28(), 211, 1);
		ENTITY::FREEZE_ENTITY_POSITION(func_28(), 0);
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(func_28(), "MI_3_MICHAEL_GROUP", 0);
	}
}



void func_735()//Position - 0x6BE80
{
	if (iLocal_6656)
	{
		if (GlobalFunc_5182(&uLocal_6678) >= 7.5f)
		{
			if (func_592("M3_TREVHMM"))
			{
				GlobalFunc_6877(&uLocal_6678);
			}
		}
	}
	switch (iLocal_6654)
	{
		case 0:
			GlobalFunc_173(&uLocal_115, 6, Local_318[51 /*25*/], "MIC3MERRYD", 0, 1);
			if (func_461("M3_SHPILOT"))
			{
				GlobalFunc_6877(&uLocal_6678);
				iLocal_6654 = 1;
			}
			break;
		
		case 1:
			if (iLocal_6658)
			{
				if (!GlobalFunc_5172(&uLocal_283, 1))
				{
					GlobalFunc_164("M3_OBJHELI", 7500, 1);
					iLocal_6654 = 20;
				}
			}
			break;
		
		case 9:
			if (func_461("M3_SHMIDIE"))
			{
				iLocal_6654 = 20;
			}
			break;
		
		case 14:
			if (func_461("M3_MCS1_IG"))
			{
				iLocal_6654 = 20;
			}
			break;
	}
}

void func_736()//Position - 0x6BF4F
{
	int iVar0;
	
	if (iLocal_6561 > 1)
	{
		func_636();
		func_764();
		func_763();
	}
	if (iLocal_6561 >= 4)
	{
		func_761();
	}
	if (bLocal_3037)
	{
		func_570();
	}
	switch (iLocal_6561)
	{
		case 0:
			iLocal_6518 = MISC::GET_GAME_TIMER() + 2000;
			GlobalFunc_718(&uLocal_2049, iLocal_64);
			GlobalFunc_718(&uLocal_2049, iLocal_65);
			GlobalFunc_718(&uLocal_2049, iLocal_67);
			GlobalFunc_718(&uLocal_2049, iLocal_63);
			GlobalFunc_718(&uLocal_2049, joaat("ig_paper"));
			GlobalFunc_718(&uLocal_2049, joaat("p_gdoor1colobject_s"));
			GlobalFunc_718(&uLocal_2049, joaat("ig_andreas"));
			func_567(&uLocal_2049, 50, &cLocal_76);
			func_567(&uLocal_2049, 3, &cLocal_76);
			func_760(&uLocal_2049, &cLocal_80);
			iLocal_6563 = 0;
			iLocal_6562 = 20;
			func_759();
			iLocal_6597 = 0;
			bLocal_3037 = false;
			iLocal_6595 = 0;
			iLocal_6596 = 0;
			iLocal_100 = 1;
			iLocal_6522 = 0;
			iLocal_6594 = 0;
			iLocal_6598 = 0;
			iLocal_6647 = 0;
			GlobalFunc_6877(&uLocal_4057);
			iLocal_6561 = 1;
			break;
		
		case 1:
			if (((((((((STREAMING::HAS_MODEL_LOADED(iLocal_64) && STREAMING::HAS_MODEL_LOADED(iLocal_65)) && STREAMING::HAS_MODEL_LOADED(iLocal_67)) && STREAMING::HAS_MODEL_LOADED(iLocal_63)) && STREAMING::HAS_MODEL_LOADED(joaat("ig_paper"))) && STREAMING::HAS_MODEL_LOADED(joaat("p_gdoor1colobject_s"))) && STREAMING::HAS_MODEL_LOADED(joaat("ig_andreas"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(50, &cLocal_76)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, &cLocal_76)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK(&cLocal_80, 0))
			{
				AUDIO::START_AUDIO_SCENE("MI_3_SHOOTOUT_START");
				iLocal_6338 = 1;
				func_753();
				GlobalFunc_173(&uLocal_115, 3, Local_4108[0 /*25*/], "MIC3CIA3", 0, 1);
				GlobalFunc_11043(1, "FIRST AREA", 0, 0, 0, 1);
				GlobalFunc_4493(&(Local_1920[2 /*8*/]), 0, 0, 1);
				MISC::SET_INSTANCE_PRIORITY_HINT(1);
				if (GlobalFunc_234(iLocal_4050))
				{
					func_562();
					func_676();
				}
				if (GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
					ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
					PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
				}
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				GlobalFunc_6877(&uLocal_6564);
				AUDIO::TRIGGER_MUSIC_EVENT("MIC3_FIGHT_START");
				iLocal_6561 = 2;
			}
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			break;
		
		case 2:
			func_744();
			if (!iLocal_6595)
			{
				if (func_648(&Local_4108, &Local_4209, &Local_4310) <= 5)
				{
					func_742();
					iLocal_6595 = 1;
				}
			}
			if (func_741(&Local_4108, &Local_4209, &Local_4310) || GlobalFunc_7259(&Local_6578))
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_3_SHOOTOUT_START"))
				{
					AUDIO::START_AUDIO_SCENE("MI_3_SHOOTOUT_START");
				}
				GlobalFunc_6877(&uLocal_6623);
				GlobalFunc_6877(&uLocal_4057);
				GlobalFunc_6877(&uLocal_6626);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_4050, 67, 0);
				func_676();
				iLocal_6561 = 3;
			}
			break;
		
		case 3:
			if (GlobalFunc_7259(&Local_6599) || GlobalFunc_5182(&uLocal_6623) >= 10f)
			{
				func_739();
				if (GlobalFunc_234(iLocal_4050))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_4050, 0);
					PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_4050, 0);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_4050, Local_4079[1 /*4*/], 3f, 1, 0);
				}
				AUDIO::START_AUDIO_SCENE("MI_3_SHOOTOUT_ENEMIES_ON_STAIRS");
				iLocal_6561 = 4;
			}
			break;
		
		case 4:
			func_738();
			if (GlobalFunc_7259(&Local_6607))
			{
				AUDIO::STOP_STREAM();
				AUDIO::LOAD_STREAM("MIC_3_HELICOPTER_SHOT_DOWN_MASTER", 0);
				iLocal_6561 = 6;
			}
			if (!iLocal_6596)
			{
				if (func_623(&Local_4361) == 0)
				{
					iLocal_6598 = 9;
					CUTSCENE::REQUEST_CUTSCENE(sLocal_58, 8);
					PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_4050, 0);
					TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(iLocal_4050, 0);
					TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_4050, 0);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_4050, Local_6401.f_3, 2f, 1, 0);
					func_619(1);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_6401.f_3, 3f, 20000, 1048576000, 0, 1193033728);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_6401.f_3, -1, 1, 0f, 1, 1, Local_6401, 1);
					func_617(iLocal_4050, 1);
					AUDIO::STOP_AUDIO_SCENE("MI_3_SHOOTOUT_ENEMIES_ON_STAIRS");
					iLocal_6596 = 1;
				}
			}
			else
			{
				func_737();
			}
			break;
		
		case 6:
			PED::SET_PED_CAN_SWITCH_WEAPON(func_28(), 0);
			if (WEAPON::GET_CURRENT_PED_WEAPON(func_28(), &iVar0, 1))
			{
				if (iVar0 == joaat("weapon_assaultrifle"))
				{
					iLocal_6648 = 0;
					iLocal_6561 = 7;
				}
				else
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(func_28(), joaat("weapon_assaultrifle"), 0))
					{
						WEAPON::GIVE_WEAPON_TO_PED(func_28(), joaat("weapon_assaultrifle"), 100, 1, 1);
					}
					else
					{
						WEAPON::SET_CURRENT_PED_WEAPON(func_28(), joaat("weapon_assaultrifle"), 0);
						TASK::TASK_SWAP_WEAPON(func_28(), 1);
					}
					iLocal_6648 = MISC::GET_GAME_TIMER() + 1000;
					iLocal_6561 = 7;
				}
			}
			break;
		
		case 7:
			if (MISC::GET_GAME_TIMER() > iLocal_6648)
			{
				GlobalFunc_5174(&uLocal_2049, joaat("ig_andreas"));
				GlobalFunc_5174(&uLocal_2049, joaat("ig_paper"));
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_318[4 /*25*/]));
				iLocal_6561 = 8;
				TASK::REMOVE_COVER_POINT(Local_6632[0 /*7*/]);
				TASK::REMOVE_COVER_POINT(Local_6632[1 /*7*/]);
				PED::SET_PED_CAN_SWITCH_WEAPON(func_28(), 1);
				GlobalFunc_703(&uLocal_317);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_4050, 67, 1);
				func_48(3);
			}
			break;
		
		case 8:
			break;
	}
}

void func_737()//Position - 0x6C434
{
	switch (iLocal_6647)
	{
		case 0:
			if (AUDIO::LOAD_STREAM("MIC_3_DISTANT_GUNFIGHT_MASTER", 0))
			{
				iLocal_6647 = 1;
			}
			break;
		
		case 1:
			AUDIO::PLAY_STREAM_FROM_POSITION(-2245.995f, 266.0959f, 173.602f);
			iLocal_6647 = 2;
			break;
	}
}

void func_738()//Position - 0x6C47E
{
	if (!iLocal_6597)
	{
		if (GlobalFunc_7259(&Local_6615))
		{
			func_628(&(Local_4462[1 /*25*/]), iLocal_64, -2214.5f, 248.4443f, 183.6041f, 203.2991f, "HELI_STRAFE_FIB_2", iLocal_314, iLocal_74, 1, 0, 0, 0);
			func_652(&(Local_6632[1 /*7*/]), -2199.163f, 245.1086f, 183.6049f, 203.2991f, 1, 1, 4, 1);
			PED::REMOVE_PED_DEFENSIVE_AREA(Local_4462[1 /*25*/], 0);
			PED::SET_PED_ANGLED_DEFENSIVE_AREA(Local_4462[1 /*25*/], -2196.052f, 244.9246f, 183.6019f, -2198.373f, 251.0177f, 186.892f, 7f, 0, 0);
			func_619(1);
			TASK::TASK_SEEK_COVER_TO_COVER_POINT(0, Local_6632[1 /*7*/], -2190.855f, 228.723f, 183.6019f, -1, 1);
			func_617(Local_4462[1 /*25*/], 1);
			iLocal_6597 = 1;
		}
	}
}

void func_739()//Position - 0x6C54D
{
	int iVar0;
	
	func_740(&(Local_4361[0 /*25*/]), -2206.077f, 221.7853f, 178.302f, 117.8388f, -2201.553f, 228.0337f, 181.1118f, "Stair_MW1", 0);
	iVar0 = 0;
	while (iVar0 <= (Local_4361 - 1))
	{
		if (GlobalFunc_234(iLocal_4050) && GlobalFunc_234(Local_4361[iVar0 /*25*/]))
		{
			PED::REGISTER_TARGET(iLocal_4050, Local_4361[iVar0 /*25*/]);
			ENTITY::SET_ENTITY_HEALTH(Local_4361[iVar0 /*25*/], 101);
		}
		iVar0++;
	}
	GlobalFunc_6877(&uLocal_6629);
}

void func_740(var uParam0, struct<3> Param1, float fParam4, struct<3> Param5, char* sParam8, int iParam9)//Position - 0x6C5DA
{
	func_628(uParam0, iLocal_63, Param1, fParam4, sParam8, iLocal_315, iLocal_75, 5, 0, 0, 0);
	if (GlobalFunc_234(*uParam0))
	{
		func_670(uParam0, Param5, 0.75f, 1, 1, 1, 1, 0.5f, 0.5f, 0, 1);
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(*uParam0, 0);
		TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(*uParam0, 0);
		PED::SET_PED_DIES_WHEN_INJURED(*uParam0, 1);
		func_619(1);
		TASK::TASK_PAUSE(0, iParam9);
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
		func_617(*uParam0, 1);
	}
}

bool func_741(int iParam0, int iParam1, int iParam2)//Position - 0x6C65B
{
	return func_648(iParam0, iParam1, iParam2) == 0;
}

void func_742()//Position - 0x6C66F
{
	func_743(&Local_4108, 0);
	func_743(&Local_4209, 0);
	func_743(&Local_4310, 0);
	Local_6586 = { Local_6586 };
}

void func_743(int iParam0, int iParam1)//Position - 0x6C69B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (GlobalFunc_234((*iParam0)[iVar0 /*25*/]))
		{
			PED::SET_PED_COMBAT_RANGE((*iParam0)[iVar0 /*25*/], iParam1);
		}
		iVar0++;
	}
}

void func_744()//Position - 0x6C6D2
{
	func_751();
	func_748();
	func_747();
	func_745();
	switch (iLocal_6562)
	{
		case 0:
			if (func_461("M3_EXPLODE"))
			{
				iLocal_6562 = 20;
			}
			break;
		
		case 8:
			if (func_461("M3_FADVEXP"))
			{
				iLocal_6562 = 20;
			}
			break;
		
		case 9:
			if (func_461("M3_DVTHX"))
			{
				iLocal_6562 = 20;
			}
			break;
	}
}

void func_745()//Position - 0x6C740
{
	switch (iLocal_6594)
	{
		case 0:
			GlobalFunc_6877(&uLocal_6649);
			iLocal_6594++;
			break;
		
		case 1:
			if (GlobalFunc_5182(&uLocal_6649) >= 10f)
			{
				if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && !GlobalFunc_5172(&uLocal_283, 1))
				{
					iLocal_6652 = func_746(&Local_4108);
					if (GlobalFunc_234(iLocal_6652))
					{
						GlobalFunc_173(&uLocal_115, 8, iLocal_6652, "MIC3CIA1", 0, 1);
						iLocal_6594 = 2;
					}
					else
					{
						iLocal_6594 = 99;
					}
				}
			}
			break;
		
		case 2:
			if (func_461("M3_IAA1"))
			{
				iLocal_6594 = 99;
			}
			break;
	}
}

int func_746(int iParam0)//Position - 0x6C7E3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (GlobalFunc_234((*iParam0)[iVar0 /*25*/]))
		{
			return (*iParam0)[iVar0 /*25*/];
		}
		iVar0++;
	}
	return 0;
}

void func_747()//Position - 0x6C818
{
	int iVar0;
	int iVar1;
	
	if (GlobalFunc_234(iLocal_4050) && GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
	{
		if ((GlobalFunc_5182(&uLocal_4057) >= 12.5f && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && !GlobalFunc_5172(&uLocal_283, 1))
		{
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			switch (iVar1)
			{
				case 0:
					if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
					{
						iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
						if (iVar0 == 0)
						{
							if (func_592("M3_FAMIWAR"))
							{
								GlobalFunc_6877(&uLocal_4057);
							}
						}
						else if (iVar0 == 1)
						{
							if (func_592("M3_MSHOUT"))
							{
								GlobalFunc_6877(&uLocal_4057);
							}
						}
					}
					break;
				
				case 1:
					if (PED::IS_PED_SHOOTING(iLocal_4050))
					{
						if (func_592("M3_FADVWAR"))
						{
							GlobalFunc_6877(&uLocal_4057);
						}
					}
					break;
				}
			}
	}
}

void func_748()//Position - 0x6C8E5
{
	var uVar0[5];
	int iVar6;
	int iVar7;
	
	if (GlobalFunc_5182(&uLocal_6564) >= 5f)
	{
		if (GlobalFunc_745())
		{
			PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
			iVar6 = 0;
			if (ENTITY::DOES_ENTITY_EXIST(uVar0[iVar6]) && !PED::IS_PED_INJURED(uVar0[iVar6]))
			{
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uVar0[iVar6]))
				{
					iVar7 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uVar0[iVar6]);
					if (iVar7 == iLocal_313)
					{
						switch (MISC::GET_RANDOM_INT_IN_RANGE(1, 5))
						{
							case 1:
								GlobalFunc_5117(uVar0[iVar6], "MCH3_ARAA", "MIC3CIA3", 3);
								break;
							
							case 2:
								GlobalFunc_5117(uVar0[iVar6], "MCH3_AQAA", "MIC3AGEN3", 3);
								break;
							
							case 3:
								GlobalFunc_5117(uVar0[iVar6], "MCH3_APAA", "MIC3CIA2", 3);
								break;
							
							case 4:
								GlobalFunc_5117(uVar0[iVar6], "MCH3_ANAA", "MIC3CIA4", 3);
								break;
						}
					}
					else if (iVar7 == iLocal_311)
					{
						switch (MISC::GET_RANDOM_INT_IN_RANGE(1, 3))
						{
							case 1:
								GlobalFunc_5117(uVar0[iVar6], "MCH3_ASAA", "MIC3FIB1", 3);
								break;
							
							case 2:
								GlobalFunc_5117(uVar0[iVar6], "MCH3_ATAA", "MIC3FIB2", 3);
								break;
						}
					}
					else if (iVar7 == iLocal_312)
					{
					}
					GlobalFunc_6877(&uLocal_6564);
				}
			}
		}
	}
}



void func_751()//Position - 0x6CA74
{
	switch (iLocal_6563)
	{
		case 0:
			if (func_461("M3_RADIO1"))
			{
				iLocal_6563 = 1;
			}
			break;
		
		case 1:
			if (!GlobalFunc_5172(&uLocal_283, 0))
			{
				iLocal_6563 = 2;
			}
			break;
		
		case 2:
			if (bLocal_3037)
			{
				if (GlobalFunc_5172(&uLocal_283, 0))
				{
					HUD::CLEAR_PRINTS();
				}
				iLocal_6562 = 8;
				iLocal_6563 = 3;
			}
			break;
		
		case 3:
			if (!GlobalFunc_5172(&uLocal_283, 0))
			{
				GlobalFunc_703(&uLocal_317);
				func_752(&uLocal_317, -2213.086f, 240.9993f, 183.6049f, 0);
				GlobalFunc_164("M3_OBJFRSTA", 7500, 1);
				GlobalFunc_6877(&uLocal_6567);
				iLocal_6563 = 4;
			}
			break;
		
		case 4:
			if (GlobalFunc_5182(&uLocal_6567) >= 1f)
			{
				if (func_461("M3_RADIO2"))
				{
					iLocal_6563 = 20;
				}
			}
			break;
	}
}

void func_752(var uParam0, struct<3> Param1, int iParam4)//Position - 0x6CB4E
{
	GlobalFunc_703(uParam0);
	*uParam0 = GlobalFunc_5104(Param1, iParam4);
}

void func_753()//Position - 0x6CB69
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(Local_4209[0 /*25*/]))
	{
		func_628(&(Local_4209[0 /*25*/]), iLocal_64, -2161.5f, 216.9788f, 183.6019f, 19.8485f, "START_FIB_LEAD", iLocal_311, iLocal_74, 5, 0, 0, 0);
	}
	func_670(&(Local_4209[0 /*25*/]), -2162.865f, 220.1206f, 183.6019f, 2f, 1, 1, 1, 1, 0.5f, 0.5f, 0, 1);
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_4209[0 /*25*/], 0);
	TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Local_4209[0 /*25*/], 0);
	func_621(&(Local_4209[0 /*25*/]));
	if (!ENTITY::DOES_ENTITY_EXIST(Local_4209[1 /*25*/]))
	{
		func_628(&(Local_4209[1 /*25*/]), iLocal_64, -2167.18f, 216.2618f, 183.6019f, 3.3767f, "START_FIB_1", iLocal_311, iLocal_74, 5, 0, 0, 0);
	}
	func_670(&(Local_4209[1 /*25*/]), -2167.977f, 218.8635f, 183.6019f, 2f, 1, 1, 1, 1, 0.5f, 0.5f, 0, 1);
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_4209[1 /*25*/], 0);
	TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Local_4209[1 /*25*/], 0);
	func_621(&(Local_4209[1 /*25*/]));
	if (!ENTITY::DOES_ENTITY_EXIST(Local_4209[2 /*25*/]))
	{
		func_628(&(Local_4209[2 /*25*/]), iLocal_64, -2168.765f, 216.6734f, 183.602f, 56.833f, "START_FIB_2", iLocal_311, iLocal_74, 5, 0, 0, 0);
	}
	func_670(&(Local_4209[2 /*25*/]), -2169.52f, 219.4173f, 183.6019f, 2f, 1, 1, 1, 1, 0.5f, 0.5f, 0, 1);
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_4209[2 /*25*/], 0);
	TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Local_4209[2 /*25*/], 0);
	func_621(&(Local_4209[2 /*25*/]));
	if (!ENTITY::DOES_ENTITY_EXIST(Local_4209[3 /*25*/]))
	{
		func_628(&(Local_4209[3 /*25*/]), iLocal_64, -2158.456f, 220.228f, 183.6016f, 24.2844f, "START_FIB_3", iLocal_311, iLocal_74, 5, 0, 0, 0);
	}
	func_670(&(Local_4209[3 /*25*/]), -2161.161f, 221.8153f, 183.6019f, 2f, 1, 1, 1, 1, 0.5f, 0.5f, 0, 1);
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_4209[3 /*25*/], 0);
	TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Local_4209[3 /*25*/], 0);
	func_621(&(Local_4209[3 /*25*/]));
	if (!ENTITY::DOES_ENTITY_EXIST(Local_4108[0 /*25*/]))
	{
		func_628(&(Local_4108[0 /*25*/]), joaat("ig_paper"), -2170.681f, 244.1997f, 183.6019f, 203.5326f, "START_CIA_LEAD", iLocal_313, iLocal_72, 5, 0, 0, 0);
		func_758(&(Local_4108[0 /*25*/]), -2162.783f, 232.4936f, 183.6019f, 202.8664f, 0, 0, 1);
	}
	if (GlobalFunc_234(Local_4108[0 /*25*/]))
	{
		func_670(&(Local_4108[0 /*25*/]), -2162.88f, 232.5484f, 183.6019f, 2f, 1, 1, 1, 1, 0.5f, 0.5f, 0, 1);
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_4108[0 /*25*/], 0);
		TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Local_4108[0 /*25*/], 0);
		PED::SET_PED_PROP_INDEX(Local_4108[0 /*25*/], 1, 0, 0, false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_4108[1 /*25*/]))
	{
		func_628(&(Local_4108[1 /*25*/]), iLocal_65, -2167.223f, 241.2033f, 183.6019f, 294.7903f, "START_CIA_2", iLocal_313, iLocal_73, 5, 0, 0, 0);
		func_757();
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_4108[1 /*25*/], 0, 0);
	}
	func_670(&(Local_4108[1 /*25*/]), -2165.821f, 237.72f, 183.6019f, 2f, 1, 1, 1, 1, 0.5f, 0.5f, 0, 1);
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_4108[1 /*25*/], 0);
	TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Local_4108[1 /*25*/], 0);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_4108[2 /*25*/]))
	{
		func_628(&(Local_4108[2 /*25*/]), iLocal_65, -2179.182f, 236.7674f, 183.6019f, 292.3021f, "START_CIA_3", iLocal_313, iLocal_72, 5, 0, 0, 0);
		func_756();
		TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_4108[2 /*25*/], -2167.16f, 230.0707f, 183.6019f, -1, 0, 1f, 1, 0, Local_4108[2 /*25*/].f_1, 0);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_4108[2 /*25*/], 0, 0);
	}
	func_670(&(Local_4108[2 /*25*/]), -2177.976f, 233.9426f, 183.6019f, 2f, 1, 1, 1, 1, 0.5f, 0.5f, 0, 1);
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_4108[2 /*25*/], 0);
	TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Local_4108[2 /*25*/], 0);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_4108[3 /*25*/]))
	{
		func_628(&(Local_4108[3 /*25*/]), iLocal_65, -2170.812f, 241.114f, 183.6019f, 204.9214f, "START_CIA_4", iLocal_313, iLocal_72, 5, 0, 0, 0);
		func_755();
		func_652(&(Local_4108[3 /*25*/].f_1), -2181.464f, 235.5702f, 183.6019f, 288.6263f, 1, 0, 1, 1);
		TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_4108[3 /*25*/], -2181.464f, 235.5702f, 183.6019f, -1, 0, 1f, 1, 0, Local_4108[3 /*25*/].f_1, 0);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_4108[3 /*25*/], 0, 0);
	}
	func_670(&(Local_4108[3 /*25*/]), -2181.464f, 235.5702f, 183.6019f, 2f, 1, 1, 1, 1, 0.5f, 0.5f, 0, 1);
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_4108[3 /*25*/], 0);
	TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Local_4108[3 /*25*/], 0);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_4310[1 /*25*/]))
	{
		func_628(&(Local_4310[1 /*25*/]), iLocal_63, -2189.332f, 225.2645f, 183.6019f, 201.8352f, "START_MW_2", iLocal_312, iLocal_75, 5, 0, 0, 0);
		func_670(&(Local_4310[1 /*25*/]), -2189.332f, 225.2645f, 183.6019f, 5f, 1, 1, 1, 1, 0.75f, 0.5f, 0, 1);
		func_758(&(Local_4310[1 /*25*/]), -2189.332f, 225.2645f, 183.6019f, 293.9212f, 0, 0, 1);
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_4310[1 /*25*/], 0);
		TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Local_4310[1 /*25*/], 0);
	}
	iVar0 = 0;
	while (iVar0 <= (Local_4209 - 1))
	{
		if (GlobalFunc_234(Local_4209[iVar0 /*25*/]))
		{
			func_621(&(Local_4209[iVar0 /*25*/]));
			PED::REGISTER_HATED_TARGETS_AROUND_PED(Local_4209[iVar0 /*25*/], 50f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_4209[iVar0 /*25*/], 0);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_4209[iVar0 /*25*/], 100f, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_4108 - 1))
	{
		if (GlobalFunc_234(Local_4108[iVar0 /*25*/]))
		{
			func_621(&(Local_4108[iVar0 /*25*/]));
			PED::REGISTER_HATED_TARGETS_AROUND_PED(Local_4108[iVar0 /*25*/], 50f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_4108[iVar0 /*25*/], 0);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_4108[iVar0 /*25*/], 100f, 0);
		}
		iVar0++;
	}
	PED::REGISTER_HATED_TARGETS_AROUND_PED(Local_4310[1 /*25*/], 50f);
	func_621(&(Local_4310[1 /*25*/]));
	func_619(1);
	TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
	TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
	func_617(Local_4310[1 /*25*/], 1);
	func_669(&Local_4108, 1);
	func_669(&Local_4209, 1);
	func_669(&Local_4310, 1);
	if (GlobalFunc_199() && !ENTITY::DOES_ENTITY_EXIST(Local_318[4 /*25*/]))
	{
		Local_318[4 /*25*/] = PED::CREATE_PED(26, joaat("ig_andreas"), -2153.3f, 235.5f, 184.59f, 0, 1, 1);
		TASK::TASK_PLAY_ANIM_ADVANCED(Local_318[4 /*25*/], "Dead", "dead_g", -2153.3f, 235.581f, 184.623f, 0f, 0f, 41.5f, 1000f, -8f, -1, 2101256, 0.99f, 2, 0);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_318[4 /*25*/], 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_318[4 /*25*/], 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_318[4 /*25*/], 1, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_318[4 /*25*/], 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_318[4 /*25*/], 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_318[4 /*25*/], 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_318[4 /*25*/], 5, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_318[4 /*25*/], 6, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_318[4 /*25*/], 7, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_318[4 /*25*/], 8, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_318[4 /*25*/], 9, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_318[4 /*25*/], 10, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_318[4 /*25*/], 11, 0, 0, 0);
		GRAPHICS::REMOVE_DECAL(uLocal_4049);
		uLocal_4049 = GRAPHICS::ADD_DECAL(9001, -2153.7f, 236.07f, 183.6f, 0f, 0f, -1f, 0f, 1f, 0f, 0.5f, 0.5f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
	}
}


void func_755()//Position - 0x6D393
{
	PED::SET_PED_COMPONENT_VARIATION(Local_4108[3 /*25*/], 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_4108[3 /*25*/], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_4108[3 /*25*/], 3, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_4108[3 /*25*/], 4, 0, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_4108[3 /*25*/], 8, 0, 0, 0);
}

void func_756()//Position - 0x6D3E2
{
	PED::SET_PED_COMPONENT_VARIATION(Local_4108[2 /*25*/], 0, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_4108[2 /*25*/], 2, 3, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_4108[2 /*25*/], 3, 1, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_4108[2 /*25*/], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_4108[2 /*25*/], 8, 0, 0, 0);
}

void func_757()//Position - 0x6D431
{
	PED::SET_PED_COMPONENT_VARIATION(Local_4108[1 /*25*/], 0, 1, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_4108[1 /*25*/], 2, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_4108[1 /*25*/], 3, 0, 2, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_4108[1 /*25*/], 4, 0, 2, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_4108[1 /*25*/], 8, 0, 0, 0);
}

void func_758(var uParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, int iParam7)//Position - 0x6D480
{
	func_652(&(uParam0->f_1), Param1, fParam4, iParam5, iParam6, iParam7, 1);
	if (!ITEMSET::IS_ITEMSET_VALID(uParam0->f_12))
	{
		uParam0->f_12 = ITEMSET::CREATE_ITEMSET(1);
	}
	ITEMSET::ADD_TO_ITEMSET(uParam0->f_1, uParam0->f_12);
	PED::SET_PED_PREFERRED_COVER_SET(*uParam0, uParam0->f_12);
}

void func_759()//Position - 0x6D4CA
{
	Local_6570 = { Local_6570 };
	Local_6570 = { GlobalFunc_3023(-2198.196f, 221.262f, 183.3517f, -2208.155f, 216.7064f, 187.2531f, 10f) };
	Local_6578 = { GlobalFunc_3023(-2186.799f, 234.8101f, 183.5019f, -2194.095f, 231.462f, 187.4188f, 45f) };
	Local_6586 = { GlobalFunc_3023(-2160.649f, 233.6016f, 183.3519f, -2180.935f, 224.5979f, 186.8519f, 25.25f) };
	Local_6599 = { GlobalFunc_3023(-2186.799f, 234.8101f, 183.5019f, -2194.095f, 231.462f, 187.4188f, 45f) };
	Local_6607 = { GlobalFunc_3023(-2211.364f, 238.6091f, 183.5049f, -2229.538f, 280.0643f, 186.6041f, 16f) };
	Local_6615 = { GlobalFunc_3023(-2178.277f, 237.9874f, 183.3519f, -2193.523f, 231.2844f, 187.1019f, 40f) };
}

int func_760(var uParam0, char[4] cParam1)//Position - 0x6D5EC
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(cParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_737)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			if (MISC::ARE_STRINGS_EQUAL(uParam0->f_737[iVar0 /*5*/].f_4, cParam1))
			{
				uParam0->f_737[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_737[iVar0 /*5*/].f_1)
				{
					uParam0->f_977 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK(cParam1, 0);
		uParam0->f_737[iVar1 /*5*/] = 1;
		uParam0->f_737[iVar1 /*5*/].f_3 = MISC::GET_GAME_TIMER();
		uParam0->f_737[iVar1 /*5*/].f_4 = cParam1;
		uParam0->f_977 = 1;
		return 1;
	}
	return 0;
}

void func_761()//Position - 0x6D6B5
{
	switch (iLocal_6598)
	{
		case 9:
			if (GlobalFunc_663("M3_OBJHELPD", 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
			if (func_461("M3_OSDVADV"))
			{
				iLocal_6598 = 20;
			}
			break;
	}
}


void func_763()//Position - 0x6D70F
{
	switch (iLocal_6522)
	{
		case 0:
			GlobalFunc_6877(&uLocal_6519);
			iLocal_6522++;
			break;
		
		case 1:
			if (GlobalFunc_5182(&uLocal_6519) >= fLocal_6523)
			{
				iLocal_6518 = MISC::GET_GAME_TIMER() + 3000;
				Local_1744[14 /*7*/] = VEHICLE::CREATE_VEHICLE(iLocal_67, -2251.525f, 325.1674f, 191.6116f, 121f, 1, 1);
				if (GlobalFunc_234(Local_1744[14 /*7*/]))
				{
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_1744[14 /*7*/]);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1744[14 /*7*/], 3, &cLocal_76, 1);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1744[14 /*7*/], fLocal_6524);
					VEHICLE::SET_PLAYBACK_SPEED(Local_1744[14 /*7*/], fLocal_6525);
					iLocal_6522++;
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_713(Local_1744[14 /*7*/], Local_6527, 1) <= fLocal_6526)
			{
				VEHICLE::EXPLODE_VEHICLE(Local_1744[14 /*7*/], 1, 1);
				CAM::SHAKE_GAMEPLAY_CAM("SMALL_EXPLOSION_SHAKE", 0.1f);
				FIRE::ADD_EXPLOSION(Local_6527, 5, 1056964608, 1, 0, 1065353216);
				TASK::CLEAR_PED_TASKS(iLocal_4050);
				PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_4050, 0);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_4050, Local_4079[1 /*4*/], 1f, 1, 0);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_281);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
				TASK::TASK_SEEK_COVER_TO_COORDS(0, Local_4079[1 /*4*/], -2210.183f, 222.0442f, 178.612f, -1, 0);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_281);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_4050, uLocal_281);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_281);
				bLocal_3037 = true;
				iLocal_6522++;
			}
			break;
	}
}

void func_764()//Position - 0x6D88F
{
	if (iLocal_100 == 1)
	{
		Local_1744[1 /*7*/] = VEHICLE::CREATE_VEHICLE(iLocal_67, -2149.505f, 240.5233f, 187.5145f, 201.0944f, 1, 1);
		func_657(&(Local_318[51 /*25*/]), iLocal_63, &(Local_1744[1 /*7*/]), -1, "MW_HELI1_1", iLocal_312, joaat("weapon_unarmed"), 30, 0, 0, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_318[51 /*25*/], 30, 1);
		PED::SET_PED_TARGET_LOSS_RESPONSE(Local_318[51 /*25*/], 1);
		PED::SET_PED_COMBAT_RANGE(Local_318[51 /*25*/], 2);
		PED::SET_PED_SHOOT_RATE(Local_318[51 /*25*/], 100);
		PED::SET_PED_FIRING_PATTERN(Local_318[51 /*25*/], -957453492);
		PED::SET_PED_ACCURACY(Local_318[51 /*25*/], 100);
		VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_1744[1 /*7*/]);
		PED::SET_PED_CAN_BE_TARGETTED(Local_318[51 /*25*/], 0);
		ENTITY::SET_ENTITY_INVINCIBLE(Local_318[51 /*25*/], 1);
		ENTITY::SET_ENTITY_PROOFS(Local_318[51 /*25*/], 1, 1, 1, 0, 0, 0, 0, 0);
		func_655(&(Local_1744[1 /*7*/].f_1), Local_1744[1 /*7*/], 1);
		AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_1744[1 /*7*/], 0);
		ENTITY::SET_ENTITY_INVINCIBLE(Local_1744[1 /*7*/], 1);
		ENTITY::SET_ENTITY_PROOFS(Local_1744[1 /*7*/], 0, 1, 1, 0, 0, 0, 0, 0);
		VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_1744[1 /*7*/], 0);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_1744[1 /*7*/], 0);
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_1744[1 /*7*/], 0);
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1744[1 /*7*/], 50, &cLocal_76, 1);
		VEHICLE::SET_PLAYBACK_SPEED(Local_1744[1 /*7*/], 1.3f);
		Local_1744[1 /*7*/].f_4 = 1.3f;
		Local_318[51 /*25*/].f_9 = 1;
		iLocal_100++;
	}
	else if (iLocal_100 >= 1)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1744[1 /*7*/], 0))
		{
			if (!PED::IS_PED_INJURED(Local_318[51 /*25*/]))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1744[1 /*7*/]))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Local_318[51 /*25*/], 0);
					PED::SET_PED_ACCURACY(Local_318[51 /*25*/], 5);
					PED::SET_PED_FIRING_PATTERN(Local_318[51 /*25*/], -1857128337);
					TASK::TASK_HELI_MISSION(Local_318[51 /*25*/], Local_1744[1 /*7*/], 0, func_28(), 0f, 0f, 0f, 8, 10f, 48f, -1f, 200, 18, -1082130432, 0);
					iLocal_100++;
				}
			}
		}
	}
}

void func_765()//Position - 0x6DA92
{
	int iVar0;
	float fVar1;
	
	if (iLocal_3031 >= 1)
	{
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Dave_FBI", 0))
		{
			func_789(Local_4079[1 /*4*/], 0, 0);
			PED::FORCE_PED_MOTION_STATE(iLocal_4050, -1115154469, 0, 1, 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_318[4 /*25*/]))
		{
			iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Andreas_Sanchez", joaat("ig_andreas"));
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Local_318[4 /*25*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			}
		}
		else if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Andreas_Sanchez", joaat("ig_andreas")))
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(Local_318[4 /*25*/], "Dead", "dead_g", -2153.3f, 235.581f, 184.623f, 0f, 0f, 41.5f, 1000f, -8f, -1, 2101256, 0.99f, 2, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_318[4 /*25*/], 1, 0);
			uLocal_4049 = GRAPHICS::ADD_DECAL(9001, -2153.7f, 236.07f, 183.6f, 0f, 0f, -1f, 0f, 1f, 0f, 0.5f, 0.5f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_318[4 /*25*/], 0, 1, 0, 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_4108[0 /*25*/]))
		{
			iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Dreyfuss", 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Local_4108[0 /*25*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			}
		}
		else if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Dreyfuss", 0))
		{
			if (GlobalFunc_234(Local_4108[0 /*25*/]))
			{
				PED::SET_PED_NAME_DEBUG(Local_4108[0 /*25*/], "START_CIA_LEAD(CS)");
				ENTITY::SET_ENTITY_COORDS(Local_4108[0 /*25*/], -2170.681f, 244.1997f, 183.6019f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_4108[0 /*25*/], 203f);
				func_670(&(Local_4108[0 /*25*/]), -2168.56f, 239.7191f, 183.6019f, 2f, 1, 1, 1, 1, 0.5f, 0.5f, 0, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_4108[0 /*25*/], iLocal_313);
				WEAPON::GIVE_WEAPON_TO_PED(Local_4108[0 /*25*/], joaat("weapon_pistol"), 120, 1, 1);
				PED::SET_PED_PROP_INDEX(Local_4108[0 /*25*/], 1, 0, 0, false);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_4108[1 /*25*/]))
		{
			iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("CIA_Goon_1", 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Local_4108[1 /*25*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			}
		}
		else if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("CIA_Goon_1", 0))
		{
			if (GlobalFunc_234(Local_4108[1 /*25*/]))
			{
				PED::SET_PED_NAME_DEBUG(Local_4108[1 /*25*/], "START_CIA_2(CS)");
				func_670(&(Local_4108[1 /*25*/]), -2165.821f, 237.72f, 183.6019f, 2f, 1, 1, 1, 1, 0.5f, 0.5f, 0, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_4108[1 /*25*/], iLocal_313);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_4108[1 /*25*/], 1);
				WEAPON::GIVE_WEAPON_TO_PED(Local_4108[1 /*25*/], joaat("weapon_pistol"), 120, 1, 1);
				ENTITY::SET_ENTITY_COORDS(Local_4108[1 /*25*/], -2167.223f, 241.2033f, 183.6019f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_4108[1 /*25*/], 294.7903f);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_4108[1 /*25*/], 100f, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_4108[1 /*25*/], 0, 0);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_4108[2 /*25*/]))
		{
			iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("CIA_Goon_2", 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Local_4108[2 /*25*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			}
		}
		else if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("CIA_Goon_2", 0))
		{
			if (GlobalFunc_234(Local_4108[2 /*25*/]))
			{
				PED::SET_PED_NAME_DEBUG(Local_4108[2 /*25*/], "START_CIA_3(CS)");
				func_670(&(Local_4108[2 /*25*/]), -2177.976f, 233.9426f, 183.6019f, 2f, 1, 1, 1, 1, 0.5f, 0.5f, 0, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_4108[2 /*25*/], iLocal_313);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_4108[2 /*25*/], 1);
				WEAPON::GIVE_WEAPON_TO_PED(Local_4108[2 /*25*/], joaat("weapon_pistol"), 120, 1, 1);
				ENTITY::SET_ENTITY_COORDS(Local_4108[2 /*25*/], -2179.182f, 236.7674f, 183.6019f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_4108[2 /*25*/], 292.3021f);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_4108[2 /*25*/], 0, 0);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_4108[3 /*25*/]))
		{
			iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("CIA_Goon_3", 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Local_4108[3 /*25*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			}
		}
		else if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("CIA_Goon_3", 0))
		{
			if (GlobalFunc_234(Local_4108[3 /*25*/]))
			{
				PED::SET_PED_NAME_DEBUG(Local_4108[3 /*25*/], "START_CIA_4(CS)");
				func_670(&(Local_4108[3 /*25*/]), -2170.812f, 241.114f, 183.6019f, 2f, 1, 1, 1, 1, 0.5f, 0.5f, 0, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_4108[3 /*25*/], iLocal_313);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_4108[3 /*25*/], 1);
				WEAPON::GIVE_WEAPON_TO_PED(Local_4108[3 /*25*/], joaat("weapon_pistol"), 120, 1, 1);
				ENTITY::SET_ENTITY_COORDS(Local_4108[3 /*25*/], -2170.812f, 241.114f, 183.6019f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_4108[3 /*25*/], 204.9214f);
				func_652(&(Local_4108[3 /*25*/].f_1), -2170.538f, 241.2695f, 183.6019f, 204.9214f, 1, 0, 6, 1);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_4108[3 /*25*/], -2170.538f, 241.2695f, 183.6019f, -1, 0, 1f, 1, 0, Local_4108[3 /*25*/].f_1, 1);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_4108[3 /*25*/], 0, 0);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_4209[0 /*25*/]))
		{
			iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lead_FBI", 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Local_4209[0 /*25*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			}
		}
		else if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lead_FBI", 0))
		{
			if (GlobalFunc_234(Local_4209[0 /*25*/]))
			{
				PED::SET_PED_NAME_DEBUG(Local_4209[0 /*25*/], "START_FIB_LEAD(CS)");
				func_670(&(Local_4209[0 /*25*/]), -2164.594f, 223.9964f, 183.6019f, 2f, 1, 1, 1, 1, 0.5f, 0.5f, 1, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_4209[0 /*25*/], iLocal_311);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_4209[0 /*25*/], 1);
				WEAPON::GIVE_WEAPON_TO_PED(Local_4209[0 /*25*/], joaat("weapon_carbinerifle"), 120, 1, 1);
				ENTITY::SET_ENTITY_COORDS(Local_4209[0 /*25*/], -2164.594f, 223.9964f, 183.6019f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_4209[0 /*25*/], 23.3085f);
				func_652(&(Local_4209[0 /*25*/].f_1), -2164.594f, 223.9964f, 183.6019f, 23.3085f, 0, 0, 1, 1);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_4209[0 /*25*/], -2164.594f, 223.9964f, 183.6019f, -1, 1, 1f, 1, 0, Local_4209[0 /*25*/].f_1, 1);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_4209[0 /*25*/], 0, 0);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_4209[1 /*25*/]))
		{
			iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("FIB_Goon_1", 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Local_4209[1 /*25*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			}
		}
		else if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("FIB_Goon_1", 0))
		{
			if (GlobalFunc_234(Local_4209[1 /*25*/]))
			{
				PED::SET_PED_NAME_DEBUG(Local_4209[1 /*25*/], "START_FIB_1(CS)");
				func_670(&(Local_4209[1 /*25*/]), -2160.05f, 224.2791f, 183.6019f, 2f, 1, 1, 1, 1, 0.5f, 0.5f, 1, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_4209[1 /*25*/], iLocal_311);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_4209[1 /*25*/], 1);
				WEAPON::GIVE_WEAPON_TO_PED(Local_4209[1 /*25*/], joaat("weapon_carbinerifle"), 120, 1, 1);
				ENTITY::SET_ENTITY_COORDS(Local_4209[1 /*25*/], -2160.05f, 224.2791f, 183.6019f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_4209[1 /*25*/], 24.2236f);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_4209[1 /*25*/], -2160.05f, 224.2791f, 183.6019f, -1, 0, 1f, 1, 1, 0, 1);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_4209[1 /*25*/], 0, 0);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_4209[2 /*25*/]))
		{
			iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("FIB_Goon_2", 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Local_4209[2 /*25*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			}
		}
		else if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("FIB_Goon_2", 0))
		{
			if (GlobalFunc_234(Local_4209[2 /*25*/]))
			{
				PED::SET_PED_NAME_DEBUG(Local_4209[2 /*25*/], "START_FIB_2(CS)");
				func_670(&(Local_4209[2 /*25*/]), -2170.154f, 221.671f, 183.6019f, 2f, 1, 1, 1, 1, 0.5f, 0.5f, 1, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_4209[2 /*25*/], iLocal_311);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_4209[2 /*25*/], 1);
				WEAPON::GIVE_WEAPON_TO_PED(Local_4209[2 /*25*/], joaat("weapon_carbinerifle"), 120, 1, 1);
				ENTITY::SET_ENTITY_COORDS(Local_4209[2 /*25*/], -2170.154f, 221.671f, 183.6019f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_4209[2 /*25*/], 22.8487f);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_4209[2 /*25*/], -2170.154f, 221.671f, 183.6019f, -1, 0, 1f, 1, 0, 0, 1);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_4209[2 /*25*/], 0, 0);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_4209[3 /*25*/]))
		{
			iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("FIB_Goon_3", 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Local_4209[3 /*25*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			}
		}
		else if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("FIB_Goon_3", 0))
		{
			if (GlobalFunc_234(Local_4209[3 /*25*/]))
			{
				PED::SET_PED_NAME_DEBUG(Local_4209[3 /*25*/], "START_FIB_3(CS)");
				func_670(&(Local_4209[3 /*25*/]), -2167.143f, 223.9884f, 183.6019f, 2f, 1, 1, 1, 1, 0.5f, 0.5f, 1, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_4209[3 /*25*/], iLocal_311);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_4209[3 /*25*/], 1);
				WEAPON::GIVE_WEAPON_TO_PED(Local_4209[3 /*25*/], joaat("weapon_carbinerifle"), 120, 1, 1);
				ENTITY::SET_ENTITY_COORDS(Local_4209[3 /*25*/], -2167.143f, 223.9884f, 183.6019f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_4209[3 /*25*/], 50.9471f);
				TASK::TASK_AIM_GUN_AT_COORD(Local_4209[3 /*25*/], -2173.759f, 231.0308f, 184.1056f, -1, 1, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_4209[3 /*25*/], 0, 0);
			}
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Security_guard_pistol", 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_6517))
			{
				WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_6517, func_28());
			}
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(func_28(), joaat("weapon_pistol"), 1);
			fVar1 = 0.5f;
			if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				fVar1 = 0f;
				ENTITY::SET_ENTITY_COORDS(func_28(), Local_6387.f_3, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(func_28(), 21.5259f);
			}
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_28(), Local_6387.f_3, -1, 1, fVar1, 1, 0, Local_6387, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_28(), 1, 0);
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
		{
			iLocal_308 = 1;
		}
		if (iLocal_308)
		{
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				func_788(70f, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			}
			else
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(90f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			}
		}
	}
	switch (iLocal_3031)
	{
		case 0:
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				GlobalFunc_718(&uLocal_2049, iLocal_69);
				GlobalFunc_718(&uLocal_2049, iLocal_63);
				GlobalFunc_718(&uLocal_2049, iLocal_64);
				GlobalFunc_718(&uLocal_2049, iLocal_65);
				GlobalFunc_736(&uLocal_2049, joaat("weapon_pistol"), 31, 0);
				GlobalFunc_736(&uLocal_2049, iLocal_72, 31, 0);
				GlobalFunc_736(&uLocal_2049, iLocal_73, 31, 0);
				GlobalFunc_736(&uLocal_2049, iLocal_74, 31, 0);
				GlobalFunc_736(&uLocal_2049, iLocal_75, 31, 0);
				GlobalFunc_719(&uLocal_2049, "Dead");
				GlobalFunc_4956();
				AUDIO::PREPARE_MUSIC_EVENT("MIC3_MISSION_START");
				if (!WEAPON::HAS_PED_GOT_WEAPON(func_28(), joaat("weapon_pistol"), 0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(func_28(), joaat("weapon_pistol"), 120, 0, 1);
				}
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::STOP_GAMEPLAY_HINT(0);
				}
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_4050, "Dave_FBI", 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1864[0 /*2*/], "Daves_Newspaper", 1, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Andreas_Sanchez", 2, joaat("ig_andreas"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Dreyfuss", 2, joaat("ig_paper"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "CIA_Goon_1", 2, joaat("s_m_m_ciasec_01"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "CIA_Goon_2", 2, joaat("s_m_m_ciasec_01"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "CIA_Goon_3", 2, joaat("s_m_m_ciasec_01"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Lead_FBI", 2, joaat("s_m_y_swat_01"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "FIB_Goon_1", 2, joaat("s_m_y_swat_01"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "FIB_Goon_2", 2, joaat("s_m_y_swat_01"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "FIB_Goon_3", 2, joaat("s_m_y_swat_01"), 0);
				iLocal_6517 = GlobalFunc_6830(func_28(), joaat("weapon_pistol"), 1, 0, 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_6517, "Security_guard_pistol", 0, WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_pistol")), 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_6497))
				{
					GlobalFunc_9815(iLocal_6497, 0f, 0f, 0f, 0f, 24, 0);
				}
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
				iLocal_308 = 0;
				iLocal_3031 = 99;
			}
			break;
		
		case 99:
			MISC::CLEAR_AREA(-2155.383f, 237.1668f, 183.6019f, 50f, 0, 0, 0, 0);
			MISC::CLEAR_AREA(-2155.383f, 237.1668f, 183.6019f, 15f, 1, 0, 0, 0);
			MISC::CLEAR_AREA_OF_PEDS(-2155.383f, 237.1668f, 183.6019f, 50f, 0);
			MISC::CLEAR_AREA_OF_OBJECTS(-2155.383f, 237.1668f, 183.6019f, 50f, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(-2155.383f, 237.1668f, 183.6019f, 50f, 0, 0, 0, 0, 0);
			if (GlobalFunc_234(iLocal_6497))
			{
				if (GlobalFunc_713(iLocal_6497, -2156.897f, 237.0206f, 183.6019f, 1) <= 100f)
				{
					MISC::CLEAR_AREA_OF_VEHICLES(-2284.707f, 406.947f, 173.467f, 20f, 0, 0, 0, 0, 0);
					ENTITY::SET_ENTITY_COORDS(iLocal_6497, -2284.677f, 406.713f, 173.467f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_6497, 306.68f);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_6497);
				}
			}
			if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			GlobalFunc_6685(1);
			iLocal_3031 = 1;
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() >= 67500)
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("MIC3_INTRO"))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("MIC3_INTRO");
				}
				iLocal_3031++;
			}
			break;
		
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() >= 105000)
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("MIC3_MISSION_START"))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("MIC3_MISSION_START");
				}
				iLocal_3031++;
			}
			break;
		
		case 3:
			if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() >= 109000)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("MIC3_STEVE_SHOT");
				iLocal_3031++;
			}
			break;
		
		case 4:
			if (iLocal_308 && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_pistol")))
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				iLocal_3031++;
			}
			break;
		
		case 5:
			if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				RECORDING::_0x81CBAE94390F9F89();
				iLocal_308 = 0;
				func_48(2);
			}
			break;
	}
}























void func_788(float fParam0, int iParam1)//Position - 0x70EC9
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		iParam1 = PLAYER::PLAYER_PED_ID();
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((fParam0 - ENTITY::GET_ENTITY_HEADING(iParam1)));
}

void func_789(struct<3> Param0, bool bParam3, bool bParam4)//Position - 0x70EEE
{
	func_624(iLocal_4050, Param0, bParam3, 1077936128, bParam4);
}

void func_790()//Position - 0x70F0A
{
	if (!iLocal_6548)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_4050))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_4050) || !ENTITY::IS_ENTITY_DEAD(iLocal_4050))
			{
				if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(iLocal_4050, 1), 6f))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_1864[0 /*2*/]))
					{
						OBJECT::DELETE_OBJECT(&(Local_1864[0 /*2*/]));
					}
					ENTITY::SET_ENTITY_HEALTH(iLocal_4050, 0);
					iLocal_6548 = 1;
				}
			}
		}
	}
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	switch (iLocal_6540)
	{
		case 0:
			GlobalFunc_718(&uLocal_2049, GlobalFunc_4946(30));
			GlobalFunc_718(&uLocal_2049, joaat("p_cs_newspaper_s"));
			GlobalFunc_718(&uLocal_2049, joaat("frogger"));
			GlobalFunc_719(&uLocal_2049, "missmic3");
			GlobalFunc_727(&uLocal_2049, "mic3_intro_walk");
			iLocal_6540 = 1;
			break;
		
		case 1:
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("mic3_intro_walk"))
			{
				bLocal_6547 = false;
				iLocal_6546 = 0;
				iLocal_6548 = 0;
				iLocal_6542 = 0;
				iLocal_6541 = 0;
				Global_89962.f_12[1] = 0;
				Global_89962.f_12[0] = 0;
				Global_89962.f_12[2] = 0;
				GlobalFunc_10762(&uLocal_115, &cLocal_54, "M3_INTL", 8, 0, 0, 0, 0);
				iLocal_6540 = 2;
			}
			break;
		
		case 2:
			if (func_799())
			{
				iLocal_6540 = 3;
			}
			break;
		
		case 3:
			if (((STREAMING::HAS_MODEL_LOADED(GlobalFunc_4946(30)) && STREAMING::HAS_MODEL_LOADED(joaat("p_cs_newspaper_s"))) && STREAMING::HAS_MODEL_LOADED(joaat("frogger"))) && STREAMING::HAS_ANIM_DICT_LOADED("missmic3"))
			{
				if (func_795())
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					GlobalFunc_164("M3_WLKDV", 7500, 1);
					iLocal_6540 = 4;
				}
			}
			break;
		
		case 4:
			if (!PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if ((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2150.921f, 221.2203f, 183.4019f, -2161.752f, 245.5793f, 186.6019f, 4f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2156.449f, 238.0331f, 183.4019f, -2157.897f, 246.8302f, 186.6019f, 4.2f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2155.382f, 235.8839f, 183.4019f, -2149.944f, 226.9993f, 186.6019f, 4.2f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2159.87f, 227.7445f, 182.8991f, -2165.928f, 241.479f, 186.5788f, 10.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2151.657f, 223.1431f, 183.4019f, -2161.372f, 217.8074f, 186.6019f, 6f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2164.148f, 252.1446f, 183.4019f, -2157.978f, 245.1855f, 186.6019f, 6f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2170.64f, 227.8235f, 183.3519f, -2163.93f, 231.2005f, 186.6019f, 9f, 0, 1, 0))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4 || GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -2152.264f, 234.4797f, 183.6019f, 1) < 14.125f)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2159.443f, 230.0957f, 182.6685f, -2171.007f, 256.0823f, 187.73f, 27.5f, 0, 1, 0))
						{
							CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("MIC_3_INT", 131070, 8);
						}
						else
						{
							CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("MIC_3_INT", 131069, 8);
						}
						GlobalFunc_2571(1);
						GlobalFunc_6685(0);
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							iLocal_6545 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
							iLocal_6540 = 5;
						}
						else
						{
							iLocal_6540 = 7;
						}
					}
				}
			}
			break;
		
		case 5:
			if (GlobalFunc_234(iLocal_6545))
			{
				if (GlobalFunc_530(iLocal_6545, 2f, 1, 1056964608, 0, 1))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
					iLocal_6540 = 6;
				}
			}
			break;
		
		case 6:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
			{
				iLocal_6540 = 7;
			}
			break;
		
		case 7:
			if (func_791())
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
					ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
				}
				iLocal_6540 = 8;
			}
			break;
		
		case 8:
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && GlobalFunc_234(iLocal_6497))
			{
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_6497, 1) <= 350f)
				{
					if (GlobalFunc_713(iLocal_6497, -2334.781f, 293.8096f, 169.3519f, 1) <= 75f)
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_6497, -2352.754f, 294.4269f, 168.4672f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iLocal_6497, 113f);
					}
					if (GlobalFunc_713(iLocal_6497, -2303.075f, 392.8396f, 175.1015f, 1) <= 45f)
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_6497, -2284.58f, 406.7789f, 173.467f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iLocal_6497, 305.72f);
					}
				}
			}
			if (GlobalFunc_234(iLocal_4050))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_4050, 1);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_4050, 1);
				ENTITY::SET_ENTITY_PROOFS(iLocal_4050, 1, 1, 1, 1, 1, 0, 0, 0);
			}
			iLocal_6540 = 9;
			func_48(1);
			break;
		
		case 9:
			break;
	}
}

int func_791()//Position - 0x71443
{
	GlobalFunc_2536(1, 0);
	if (iLocal_6560)
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(1);
		}
		CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_4050, Local_6552, 1, -1, 2500, 2000, 0);
		CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fLocal_6558);
		CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(fLocal_6557);
		CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(fLocal_6556);
		CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_6555);
		CAM::SET_GAMEPLAY_HINT_FOV(fLocal_6559);
		iLocal_6560 = 0;
	}
	switch (iLocal_6542)
	{
		case 0:
			GlobalFunc_2207();
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_4050, -1, 2048, 2);
			uLocal_1906[1] = PED::CREATE_SYNCHRONIZED_SCENE(-2150.729f, 232.467f, 183.606f, 0f, 0f, 68.4f, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_4050, uLocal_1906[1], "missmic3", "newspaper_dialogue_idle_dave", 8f, -8f, 5, 16, 1148846080, 0);
			ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_1864[0 /*2*/], uLocal_1906[1], "newspaper_dialogue_idle_newspaper", "missmic3", 8f, 1090519040, 0, 1148846080);
			iLocal_6542 = 1;
			break;
		
		case 1:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1906[2]))
			{
				if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					iLocal_6542 = 2;
				}
				if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_4050, Local_6552, 1, -1, 2500, 2000, 0);
					CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fLocal_6558);
					CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(fLocal_6557);
					CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(fLocal_6556);
					CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_6555);
					CAM::SET_GAMEPLAY_HINT_FOV(fLocal_6559);
				}
			}
			if (!iLocal_6546)
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1906[1]) >= 1f)
				{
					uLocal_1906[2] = PED::CREATE_SYNCHRONIZED_SCENE(-2150.729f, 232.467f, 183.606f, 0f, 0f, 68.4f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_4050, uLocal_1906[2], "missmic3", "newspaper_idle_outro_dave", 8f, -8f, 5, 16, 1148846080, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_1864[0 /*2*/], uLocal_1906[2], "newspaper_idle_outro_newspaper", "missmic3", 8f, 1090519040, 0, 1148846080);
					iLocal_6546 = 1;
				}
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}




int func_795()//Position - 0x7177A
{
	if (GlobalFunc_7047(&iLocal_4050, 30, -2150.729f, 232.467f, 183.606f, 72.1521f, 1))
	{
		func_562();
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_4050, 0);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_4050, 0);
		ENTITY::SET_ENTITY_PROOFS(iLocal_4050, 0, 0, 0, 0, 0, 0, 0, 0);
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_4050, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(30));
		OBJECT::DELETE_OBJECT(&(Local_1864[0 /*2*/]));
		Local_1864[0 /*2*/] = OBJECT::CREATE_OBJECT(joaat("p_cs_newspaper_s"), -2150.729f, 232.467f, 183.606f, 1, 1, 0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_cs_newspaper_s"));
		uLocal_1906[0] = PED::CREATE_SYNCHRONIZED_SCENE(-2150.729f, 232.467f, 183.606f, 0f, 0f, 68.4f, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_4050, uLocal_1906[0], "missmic3", "newspaper_idle_loop_dave", 1000f, -8f, 21, 16, 1148846080, 0);
		ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_1864[0 /*2*/], uLocal_1906[0], "newspaper_idle_loop_newspaper", "missmic3", 1000f, 1090519040, 0, 1148846080);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_1906[0], 1);
		GlobalFunc_173(&uLocal_115, 0, PLAYER::PLAYER_PED_ID(), "Michael", 0, 1);
		GlobalFunc_173(&uLocal_115, 6, iLocal_4050, "Dave", 0, 1);
		func_796();
		return 1;
	}
	return 0;
}

void func_796()//Position - 0x718B4
{
	Local_1744[16 /*7*/] = VEHICLE::CREATE_VEHICLE(iLocal_69, Local_88, 260.0503f, 1, 1);
	if (GlobalFunc_234(Local_1744[16 /*7*/]))
	{
		VEHICLE::SET_VEHICLE_COLOURS(Local_1744[16 /*7*/], 34, 34);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_1744[16 /*7*/], 0, 0);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_1744[16 /*7*/], 1);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1744[16 /*7*/], 0);
		GlobalFunc_5174(&uLocal_2049, iLocal_69);
	}
}



int func_799()//Position - 0x719F2
{
	float fVar0;
	
	if (!GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	switch (iLocal_6541)
	{
		case 0:
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !Global_96400) && GlobalFunc_234(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				iLocal_6497 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				ENTITY::SET_ENTITY_COORDS(iLocal_6497, -2309.184f, 426.4051f, 173.4666f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_6497, 174.4698f);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_6497, 1, 1);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(PLAYER::PLAYER_PED_ID(), iLocal_6497, Local_6549, 20f, 0, ENTITY::GET_ENTITY_MODEL(iLocal_6497), 262144, 2f, 10f);
				bLocal_6547 = true;
			}
			else
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -2315.213f, 399.6279f, 173.4666f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 168.5935f);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(PLAYER::PLAYER_PED_ID(), "mic3_intro_walk", 3, 0, -1);
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0, 1, 1);
			}
			func_13(1);
			MISC::CLEAR_AREA_OF_VEHICLES(-2306.28f, 443.1111f, 173.4666f, 100f, 0, 0, 0, 0, 0);
			MISC::CLEAR_AREA_OF_PROJECTILES(-2306.28f, 443.1111f, 173.4666f, 100f, 0);
			FIRE::STOP_FIRE_IN_RANGE(-2306.28f, 443.1111f, 173.4666f, 100f);
			if (!CAM::DOES_CAM_EXIST(uLocal_6543))
			{
				iLocal_6543 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_6544))
			{
				iLocal_6544 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
			}
			CAM::SET_CAM_COORD(iLocal_6543, -2309.3f, 436.3f, 179.9f);
			CAM::SET_CAM_ROT(iLocal_6543, 2.5f, 0f, -173.8f, 2);
			CAM::SET_CAM_FOV(iLocal_6543, 50f);
			CAM::SET_CAM_COORD(iLocal_6544, -2309.5f, 432.9f, 180.1f);
			CAM::SET_CAM_ROT(iLocal_6544, 1.5f, 0f, -171.2f, 2);
			CAM::SET_CAM_FOV(iLocal_6544, 50f);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_6544, iLocal_6543, 7000, 1, 1);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			func_729(1, 1);
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			iLocal_6541 = 1;
			break;
		
		case 1:
			iLocal_6541 = 2;
			break;
		
		case 2:
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_6544))
			{
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				CAM::SET_CAM_ACTIVE(iLocal_6543, 0);
				CAM::SET_CAM_ACTIVE(iLocal_6544, 0);
				CAM::DESTROY_CAM(iLocal_6543, 0);
				CAM::DESTROY_CAM(iLocal_6544, 0);
				if (bLocal_6547)
				{
					iLocal_6541 = 3;
				}
				else
				{
					if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -2292.813f, 369.7231f, 173.6017f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 203.82f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
						PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1000, 0, 1, 0);
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 0);
						HUD::DISPLAY_RADAR(true);
						HUD::DISPLAY_HUD(true);
						CAM::SET_WIDESCREEN_BORDERS(false, 0);
					}
					iLocal_6541 = 6;
				}
			}
			break;
		
		case 3:
			if (GlobalFunc_234(iLocal_6497))
			{
				if (ENTITY::GET_ENTITY_MODEL(iLocal_6497) == joaat("bus"))
				{
					fVar0 = 6.25f;
				}
				else
				{
					fVar0 = 5f;
				}
				if (GlobalFunc_713(iLocal_6497, Local_6549, 1) <= fVar0)
				{
					iLocal_6541 = 4;
				}
			}
			break;
		
		case 4:
			if (GlobalFunc_234(iLocal_6497))
			{
				if (GlobalFunc_530(iLocal_6497, 2f, 1, 1056964608, 0, 1))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
					iLocal_6541 = 5;
				}
			}
			break;
		
		case 5:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
			{
				iLocal_6541 = 6;
			}
			break;
		
		case 6:
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			if (bLocal_6547)
			{
				HUD::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				CAM::SET_WIDESCREEN_BORDERS(false, 0);
			}
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-53446139, 0, 1, 1);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1333960556, 0, 1, 1);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-41786493, 0, 1, 1);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1750120734, 0, 1, 1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 64);
			GlobalFunc_8380(0, 1, 1, 0);
			GlobalFunc_7632(0);
			return 1;
			break;
	}
	return 0;
}




void func_803()//Position - 0x71EFC
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	
	iVar0 = 0;
	while (iVar0 < Local_1875)
	{
		if ((CAM::DOES_CAM_EXIST(Local_1875[iVar0 /*10*/]) && !CAM::IS_CAM_INTERPOLATING(Local_1875[iVar0 /*10*/])) && Local_1875[iVar0 /*10*/].f_1)
		{
			fVar1 = GlobalFunc_253((IntToFloat((MISC::GET_GAME_TIMER() - Local_1875[iVar0 /*10*/].f_8)) / SYSTEM::TO_FLOAT(Local_1875[iVar0 /*10*/].f_9)), 0f, 1f);
			Var2 = { GlobalFunc_721(Local_1875[iVar0 /*10*/].f_2, Local_1875[iVar0 /*10*/].f_5, fVar1) };
			CAM::SET_CAM_COORD(Local_1875[iVar0 /*10*/], Var2);
			if (fVar1 == 1f || GlobalFunc_100(Local_1875[iVar0 /*10*/].f_5, Var2))
			{
				Local_1875[iVar0 /*10*/].f_1 = 0;
			}
		}
		iVar0++;
	}
}



void func_806()//Position - 0x72005
{
	int iVar0;
	int iVar1;
	
	if (GlobalFunc_111())
	{
		iLocal_280 = -1;
	}
	else if (iLocal_280 == -1)
	{
		iLocal_280 = MISC::GET_GAME_TIMER();
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!iLocal_7073)
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			GlobalFunc_504(iVar1, 434);
			GlobalFunc_503(iVar1, -1);
			iLocal_7073 = 1;
		}
	}
	else if (iLocal_7073)
	{
		GlobalFunc_503(0, 434);
		GlobalFunc_504(0, -1);
		iLocal_7073 = 0;
	}
	iVar0 = 0;
	while (iVar0 < Local_318)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_318[iVar0 /*25*/]))
		{
			if (((PED::GET_PED_RELATIONSHIP_GROUP_HASH(Local_318[iVar0 /*25*/]) != iLocal_310 && Local_318[iVar0 /*25*/] != PLAYER::PLAYER_PED_ID()) && Local_318[iVar0 /*25*/] != func_28()) && Local_318[iVar0 /*25*/] != func_29())
			{
				if ((!PED::IS_PED_INJURED(Local_318[iVar0 /*25*/]) && iLocal_4028 != -1) && iLocal_4028 == Local_318[iVar0 /*25*/].f_21)
				{
					GlobalFunc_661(Local_318[iVar0 /*25*/], &(Local_318[iVar0 /*25*/].f_13), -1, 0, 1, 0, -1082130432, 0);
				}
				else
				{
					GlobalFunc_661(Local_318[iVar0 /*25*/], &(Local_318[iVar0 /*25*/].f_13), -1, 0, 0, 0, -1082130432, 0);
				}
			}
			if (PED::IS_PED_INJURED(Local_318[iVar0 /*25*/]))
			{
				if (Local_318[iVar0 /*25*/] == func_28())
				{
					func_866(2);
				}
				else if (Local_318[iVar0 /*25*/] == func_29())
				{
					func_866(3);
				}
				else
				{
					func_808(&(Local_318[iVar0 /*25*/]));
				}
			}
			else if (!PED::IS_PED_IN_ANY_VEHICLE(Local_318[iVar0 /*25*/], 0))
			{
				if (!HUD::DOES_BLIP_EXIST(Local_318[iVar0 /*25*/].f_8))
				{
					if (!iLocal_3030 == 8)
					{
						if (iVar0 == 0)
						{
							if (PLAYER::PLAYER_PED_ID() != Local_318[0 /*25*/])
							{
								func_168(&(Local_318[0 /*25*/].f_8), Local_318[0 /*25*/], 0);
							}
						}
						else if (iVar0 == 1)
						{
							if (iLocal_3119 && PLAYER::PLAYER_PED_ID() != Local_318[1 /*25*/])
							{
								func_168(&(Local_318[1 /*25*/].f_8), Local_318[1 /*25*/], 0);
							}
						}
					}
				}
			}
		}
		else
		{
			Local_318[iVar0 /*25*/].f_22 = 0;
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_4050))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_4050))
		{
			func_866(4);
		}
	}
	if (iLocal_3030 == 2 || iLocal_3030 == 5)
	{
		if (GlobalFunc_7259(&Local_6108) || GlobalFunc_7259(&Local_6116))
		{
			func_866(5);
		}
	}
	if (iLocal_3030 == 2)
	{
		if (GlobalFunc_7259(&Local_6124))
		{
			func_866(5);
		}
	}
	if (iLocal_3030 == 0)
	{
		func_807(250f, 240f);
	}
	else if (iLocal_3030 == 2)
	{
		func_807(85f, 75f);
	}
	else if ((iLocal_3030 == 5 || iLocal_3030 == 6) || iLocal_3030 == 4)
	{
		if (GlobalFunc_8315() == 2)
		{
			func_807(100f, 90f);
		}
		else if (GlobalFunc_8315() == 0)
		{
			func_807(85f, 75f);
		}
	}
	else if (iLocal_3030 == 7)
	{
		if (iLocal_50 < 6)
		{
			func_807(150f, 140f);
		}
	}
	if (iLocal_6338)
	{
		if (iLocal_6494 != 0 && iLocal_6494 != 3)
		{
			if (GlobalFunc_5980(&Local_6132, func_28()))
			{
				ENTITY::SET_ENTITY_HEALTH(func_28(), 0);
			}
		}
		if (GlobalFunc_8315() == 0)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2194.792f, 237.497f, 183.6019f, -2196.417f, 236.7847f, 186.1197f, 13.375f, 0, 1, 0))
			{
				PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < Local_1744)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Local_1744[iVar0 /*7*/]) && !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1744[iVar0 /*7*/], 0)) && ENTITY::IS_ENTITY_DEAD(Local_1744[iVar0 /*7*/]))
		{
			GlobalFunc_703(&(Local_1744[iVar0 /*7*/].f_1));
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1744[iVar0 /*7*/]));
			GlobalFunc_565(439, 1, 0);
		}
		iVar0++;
	}
}

void func_807(float fParam0, float fParam1)//Position - 0x723EF
{
	if (GlobalFunc_234(PLAYER::PLAYER_PED_ID()) && GlobalFunc_234(iLocal_4050))
	{
		if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_4050, 1) >= fParam0)
		{
			func_866(5);
		}
		if (GlobalFunc_226(&uLocal_4063))
		{
			if (GlobalFunc_5182(&uLocal_4063) >= 10f)
			{
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_4050, 1) >= fParam1)
				{
					if (!GlobalFunc_5172(&uLocal_283, 1))
					{
						GlobalFunc_6877(&uLocal_4063);
						GlobalFunc_164("M3_DVWARN", 7500, 1);
						if (iLocal_3030 == 5)
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_317))
							{
								GlobalFunc_703(&uLocal_317);
							}
						}
					}
				}
				else if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_4050, 1) <= fParam1)
				{
					if (GlobalFunc_663("M3_DVWARN", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("M3_DVWARN");
					}
					if (iLocal_114)
					{
						if (iLocal_3030 == 5)
						{
							if (!HUD::DOES_BLIP_EXIST(uLocal_317))
							{
								uLocal_317 = HUD::ADD_BLIP_FOR_COORD(-2247.732f, 268.9541f, 173.602f);
								GlobalFunc_164("M3_02", 7500, 1);
							}
						}
					}
				}
			}
			else if (GlobalFunc_663("M3_DVWARN", 0, 0))
			{
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_4050, 1) <= fParam1)
				{
					HUD::CLEAR_THIS_PRINT("M3_DVWARN");
				}
			}
		}
		else
		{
			GlobalFunc_6877(&uLocal_4063);
		}
	}
}

void func_808(int iParam0)//Position - 0x72525
{
	if (uParam0->f_10 == -1)
	{
		uParam0->f_10 = MISC::GET_GAME_TIMER();
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), 1))
		{
			uParam0->f_11 = 1;
		}
		func_22(&(uParam0->f_1));
	}
	else if ((MISC::GET_GAME_TIMER() - uParam0->f_10) >= 2000)
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
		iParam0->f_11 = 0;
	}
}


void func_810()//Position - 0x72588
{
	int iVar0;
	
	uLocal_3035 = uLocal_3035;
	if (bLocal_3034 == 1)
	{
		if (iLocal_3029 == 0)
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(SYSTEM::ROUND((800f * fLocal_3118)));
				}
			}
			else
			{
				func_48(iLocal_3036);
			}
		}
		else if (iLocal_3029 == 3)
		{
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			if (!GlobalFunc_188())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			func_830();
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
			GlobalFunc_762(&uLocal_2049);
			GlobalFunc_3005(&uLocal_2049, "MIC3", 0);
			func_59(1);
			switch (iLocal_3030)
			{
				case 0:
					if (!GlobalFunc_188())
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -2291.839f, 367.5178f, 173.6017f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 203f);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
						GlobalFunc_5184(&uLocal_2049, -2291.829f, 367.6647f, 173.6017f, 15f, 0);
					}
					GlobalFunc_718(&uLocal_2049, GlobalFunc_4946(30));
					GlobalFunc_718(&uLocal_2049, joaat("p_cs_newspaper_s"));
					GlobalFunc_718(&uLocal_2049, joaat("frogger"));
					GlobalFunc_719(&uLocal_2049, "missmic3");
					break;
				
				case 1:
					if (!GlobalFunc_188())
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -2156.922f, 234.4068f, 183.6015f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 113.7745f);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
						GlobalFunc_5184(&uLocal_2049, -2156.922f, 234.4068f, 183.6015f, 113.7745f, 0);
					}
					GlobalFunc_718(&uLocal_2049, GlobalFunc_4946(30));
					GlobalFunc_718(&uLocal_2049, joaat("p_cs_newspaper_s"));
					GlobalFunc_718(&uLocal_2049, joaat("frogger"));
					GlobalFunc_719(&uLocal_2049, "missmic3");
					break;
				
				case 2:
					if (!GlobalFunc_188())
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_6387.f_3, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 21.5258f);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
						GlobalFunc_5184(&uLocal_2049, -2156.922f, 234.4068f, 183.6015f, 15f, 0);
					}
					iVar0 = WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), 0);
					GlobalFunc_718(&uLocal_2049, iLocal_69);
					GlobalFunc_718(&uLocal_2049, iLocal_64);
					GlobalFunc_718(&uLocal_2049, iLocal_65);
					GlobalFunc_718(&uLocal_2049, iLocal_63);
					GlobalFunc_718(&uLocal_2049, iLocal_66);
					GlobalFunc_718(&uLocal_2049, iLocal_67);
					GlobalFunc_718(&uLocal_2049, joaat("ig_paper"));
					func_567(&uLocal_2049, 3, &cLocal_76);
					GlobalFunc_736(&uLocal_2049, iLocal_75, 31, 0);
					GlobalFunc_736(&uLocal_2049, iLocal_74, 31, 0);
					GlobalFunc_736(&uLocal_2049, iLocal_73, 31, 0);
					GlobalFunc_736(&uLocal_2049, iLocal_72, 31, 0);
					GlobalFunc_736(&uLocal_2049, iVar0, 31, 0);
					func_760(&uLocal_2049, &cLocal_80);
					break;
				
				case 3:
					if (!GlobalFunc_188())
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -2221.425f, 256.6886f, 183.6041f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 109.6962f);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
						GlobalFunc_5184(&uLocal_2049, -2221.425f, 256.6886f, 183.6041f, 15f, 0);
					}
					iVar0 = WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), 0);
					GlobalFunc_718(&uLocal_2049, iLocal_69);
					GlobalFunc_718(&uLocal_2049, iLocal_68);
					GlobalFunc_718(&uLocal_2049, iLocal_64);
					GlobalFunc_718(&uLocal_2049, iLocal_65);
					GlobalFunc_718(&uLocal_2049, iLocal_63);
					GlobalFunc_718(&uLocal_2049, iLocal_66);
					GlobalFunc_718(&uLocal_2049, iLocal_67);
					GlobalFunc_736(&uLocal_2049, iLocal_75, 31, 0);
					GlobalFunc_736(&uLocal_2049, iLocal_74, 31, 0);
					GlobalFunc_736(&uLocal_2049, iLocal_73, 31, 0);
					GlobalFunc_736(&uLocal_2049, iLocal_72, 31, 0);
					GlobalFunc_736(&uLocal_2049, iVar0, 31, 0);
					GlobalFunc_719(&uLocal_2049, cLocal_62);
					func_760(&uLocal_2049, &cLocal_80);
					break;
				
				case 4:
					GlobalFunc_7621(82, 1, 0, 1, 1);
					if (!GlobalFunc_188())
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -2221.425f, 256.6886f, 183.6041f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 109.6962f);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
						GlobalFunc_5184(&uLocal_2049, -2221.314f, 251.0969f, 183.6041f, 15f, 0);
					}
					iVar0 = WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), 0);
					GlobalFunc_718(&uLocal_2049, iLocal_69);
					GlobalFunc_718(&uLocal_2049, iLocal_68);
					GlobalFunc_718(&uLocal_2049, iLocal_67);
					GlobalFunc_718(&uLocal_2049, iLocal_64);
					GlobalFunc_718(&uLocal_2049, iLocal_65);
					GlobalFunc_718(&uLocal_2049, iLocal_63);
					GlobalFunc_718(&uLocal_2049, iLocal_66);
					GlobalFunc_736(&uLocal_2049, iLocal_75, 31, 0);
					GlobalFunc_736(&uLocal_2049, iLocal_74, 31, 0);
					GlobalFunc_736(&uLocal_2049, iLocal_73, 31, 0);
					GlobalFunc_736(&uLocal_2049, iLocal_72, 31, 0);
					GlobalFunc_736(&uLocal_2049, iVar0, 31, 0);
					func_760(&uLocal_2049, &cLocal_80);
					break;
				
				case 5:
					GlobalFunc_7621(82, 1, 0, 1, 1);
					if (!GlobalFunc_188())
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -2219.298f, 247.3061f, 183.6041f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 40.5077f);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
						GlobalFunc_5184(&uLocal_2049, -2231.94f, 277.473f, 183.6041f, 15f, 0);
					}
					iVar0 = WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), 0);
					GlobalFunc_718(&uLocal_2049, iLocal_69);
					GlobalFunc_718(&uLocal_2049, iLocal_68);
					GlobalFunc_718(&uLocal_2049, iLocal_64);
					GlobalFunc_718(&uLocal_2049, iLocal_65);
					GlobalFunc_718(&uLocal_2049, iLocal_63);
					GlobalFunc_718(&uLocal_2049, iLocal_66);
					GlobalFunc_718(&uLocal_2049, iLocal_67);
					GlobalFunc_736(&uLocal_2049, iLocal_75, 31, 0);
					GlobalFunc_736(&uLocal_2049, iLocal_74, 31, 0);
					GlobalFunc_736(&uLocal_2049, iLocal_73, 31, 0);
					GlobalFunc_736(&uLocal_2049, iLocal_72, 31, 0);
					GlobalFunc_736(&uLocal_2049, iVar0, 31, 0);
					GlobalFunc_719(&uLocal_2049, cLocal_59);
					GlobalFunc_719(&uLocal_2049, cLocal_60);
					GlobalFunc_719(&uLocal_2049, cLocal_61);
					func_567(&uLocal_2049, 4, &cLocal_76);
					func_760(&uLocal_2049, &cLocal_80);
					break;
				
				case 6:
					GlobalFunc_7621(82, 1, 0, 1, 1);
					if (!GlobalFunc_188())
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -2249.855f, 270.121f, 173.602f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 24.2243f);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
						GlobalFunc_5184(&uLocal_2049, -2231.94f, 277.473f, 183.6041f, 15f, 0);
					}
					iVar0 = WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), 0);
					GlobalFunc_718(&uLocal_2049, iLocal_69);
					GlobalFunc_718(&uLocal_2049, iLocal_68);
					GlobalFunc_718(&uLocal_2049, iLocal_67);
					GlobalFunc_718(&uLocal_2049, iLocal_64);
					GlobalFunc_718(&uLocal_2049, iLocal_65);
					GlobalFunc_718(&uLocal_2049, iLocal_63);
					GlobalFunc_718(&uLocal_2049, iLocal_66);
					GlobalFunc_736(&uLocal_2049, iLocal_75, 31, 0);
					GlobalFunc_736(&uLocal_2049, iLocal_74, 31, 0);
					GlobalFunc_736(&uLocal_2049, iLocal_73, 31, 0);
					GlobalFunc_736(&uLocal_2049, iLocal_72, 31, 0);
					GlobalFunc_736(&uLocal_2049, iVar0, 31, 0);
					func_760(&uLocal_2049, &cLocal_80);
					break;
				
				case 7:
					GlobalFunc_7621(82, 1, 0, 1, 1);
					if (!GlobalFunc_188())
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -2249.855f, 270.121f, 173.602f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 24.2243f);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
						GlobalFunc_5184(&uLocal_2049, -2231.94f, 277.473f, 183.6041f, 15f, 0);
					}
					iVar0 = WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), 0);
					GlobalFunc_718(&uLocal_2049, iLocal_69);
					GlobalFunc_718(&uLocal_2049, iLocal_68);
					GlobalFunc_718(&uLocal_2049, iLocal_67);
					GlobalFunc_718(&uLocal_2049, iLocal_63);
					GlobalFunc_718(&uLocal_2049, iLocal_66);
					GlobalFunc_736(&uLocal_2049, iLocal_75, 31, 0);
					GlobalFunc_718(&uLocal_2049, joaat("carbonizzare"));
					GlobalFunc_718(&uLocal_2049, joaat("dominator"));
					GlobalFunc_736(&uLocal_2049, iVar0, 31, 0);
					func_567(&uLocal_2049, 1, &cLocal_76);
					func_567(&uLocal_2049, 2, &cLocal_76);
					GlobalFunc_727(&uLocal_2049, cLocal_56);
					GlobalFunc_727(&uLocal_2049, cLocal_57);
					func_760(&uLocal_2049, &cLocal_80);
					break;
				
				case 8:
					GlobalFunc_7621(82, 1, 0, 1, 1);
					if (!GlobalFunc_188())
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -2295.547f, 264.1368f, 168.6018f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 25.3686f);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
						GlobalFunc_5184(&uLocal_2049, -2295.547f, 264.1368f, 168.6018f, 15f, 0);
					}
					iVar0 = WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), 0);
					GlobalFunc_718(&uLocal_2049, iLocal_69);
					GlobalFunc_718(&uLocal_2049, iLocal_68);
					GlobalFunc_718(&uLocal_2049, iLocal_67);
					GlobalFunc_718(&uLocal_2049, iLocal_63);
					GlobalFunc_718(&uLocal_2049, iLocal_69);
					GlobalFunc_718(&uLocal_2049, iLocal_66);
					GlobalFunc_718(&uLocal_2049, joaat("dominator"));
					GlobalFunc_718(&uLocal_2049, joaat("carbonizzare"));
					GlobalFunc_718(&uLocal_2049, joaat("vacca"));
					GlobalFunc_727(&uLocal_2049, cLocal_56);
					GlobalFunc_727(&uLocal_2049, cLocal_57);
					func_567(&uLocal_2049, 1, &cLocal_76);
					func_567(&uLocal_2049, 2, &cLocal_76);
					GlobalFunc_736(&uLocal_2049, iVar0, 31, 0);
					break;
				
				case 9:
					if (!GlobalFunc_188())
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1473.121f, -396.4522f, 37.1653f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 307.9418f);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
					}
					break;
				
				case 10:
					break;
			}
			while (!GlobalFunc_7725(&uLocal_2049))
			{
				SYSTEM::WAIT(0);
			}
			AUDIO::STOP_AUDIO_SCENES();
			GlobalFunc_4493(&(Local_1920[0 /*8*/]), 0, 0, 1);
			GlobalFunc_4493(&(Local_1920[2 /*8*/]), 0, 0, 1);
			func_819(0, 1, 1);
			MISC::SET_INSTANCE_PRIORITY_HINT(1);
			func_13(1);
			iVar0 = WEAPON::GET_BEST_PED_WEAPON(func_28(), 0);
			WEAPON::SET_CURRENT_PED_WEAPON(func_28(), iVar0, 0);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			MISC::ENABLE_DISPATCH_SERVICE(5, 0);
			MISC::ENABLE_DISPATCH_SERVICE(3, 0);
			switch (iLocal_3030)
			{
				case 0:
					iLocal_6338 = 0;
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0, 1, 1);
					PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-53446139, 0f, 1, 0);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1333960556, 0f, 1, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-53446139, 4, 1, 1);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1333960556, 4, 1, 1);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-41786493, 0f, 1, 0);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1750120734, 0f, 1, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-41786493, 4, 1, 1);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1750120734, 4, 1, 1);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-53446139, 0, 1, 1);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1333960556, 0, 1, 1);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-41786493, 0, 1, 1);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1750120734, 0, 1, 1);
					iLocal_6540 = 3;
					break;
				
				case 1:
					CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("MIC_3_INT", 131069, 8);
					while (!GlobalFunc_7047(&iLocal_4050, 30, -2163.489f, 233.8881f, 183.6019f, 115.12f, 0))
					{
						SYSTEM::WAIT(0);
					}
					Local_1864[0 /*2*/] = OBJECT::CREATE_OBJECT(joaat("p_cs_newspaper_s"), -2150.729f, 232.467f, 183.606f, 1, 1, 0);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_cs_newspaper_s"));
					break;
				
				case 2:
					func_796();
					iLocal_6338 = 1;
					WEAPON::SET_CURRENT_PED_WEAPON(func_28(), joaat("weapon_pistol"), 1);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_28(), Local_6387.f_3, -1, 1, 0f, 1, 0, Local_6387, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_28(), 0, 0);
					while (!GlobalFunc_7047(&iLocal_4050, 30, -2163.489f, 233.8881f, 183.6019f, 115.12f, 0))
					{
						SYSTEM::WAIT(0);
					}
					func_562();
					PED::FORCE_PED_MOTION_STATE(iLocal_4050, -1115154469, 0, 0, 0);
					func_619(1);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, -2205.564f, 215.193f, 183.6019f, 3f, -1, 1193033728, 1056964608);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_4079[1 /*4*/], 3f, 20000, 1048576000, 0, 1193033728);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 500f, 0);
					func_617(iLocal_4050, 1);
					SYSTEM::WAIT(2000);
					AUDIO::TRIGGER_MUSIC_EVENT("MIC3_FIGHT_RESTART");
					break;
				
				case 3:
					func_796();
					func_818();
					WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_6668, 1);
					func_164(&(Local_318[1 /*25*/]), 2, Local_4104, Local_4104.f_3, joaat("weapon_sniperrifle"), 10, 1, 1, 0, 60);
					GlobalFunc_6877(&uLocal_6678);
					Local_1744[1 /*7*/] = VEHICLE::CREATE_VEHICLE(iLocal_67, -2149.505f, 240.5233f, 187.5145f, 201.0944f, 1, 1);
					func_657(&(Local_318[51 /*25*/]), iLocal_63, &(Local_1744[1 /*7*/]), -1, "MW_HELI1_1", iLocal_312, joaat("weapon_unarmed"), 30, 0, 0, 0);
					if (GlobalFunc_234(Local_318[51 /*25*/]) && GlobalFunc_234(Local_1744[1 /*7*/]))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_318[51 /*25*/], 30, 1);
						PED::SET_PED_TARGET_LOSS_RESPONSE(Local_318[51 /*25*/], 1);
						PED::SET_PED_COMBAT_RANGE(Local_318[51 /*25*/], 2);
						PED::SET_PED_SHOOT_RATE(Local_318[51 /*25*/], 100);
						PED::SET_PED_FIRING_PATTERN(Local_318[51 /*25*/], -957453492);
						PED::SET_PED_ACCURACY(Local_318[51 /*25*/], 100);
						VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_1744[1 /*7*/]);
						PED::SET_PED_CAN_BE_TARGETTED(Local_318[51 /*25*/], 0);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_318[51 /*25*/], 1);
						func_655(&(Local_1744[1 /*7*/].f_1), Local_1744[1 /*7*/], 1);
						AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_1744[1 /*7*/], 0);
						Local_318[51 /*25*/].f_9 = 1;
						ENTITY::SET_ENTITY_PROOFS(Local_1744[1 /*7*/], 1, 1, 1, 0, 0, 0, 0, 0);
						VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_1744[1 /*7*/], 0);
						VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_1744[1 /*7*/], 0);
						VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_1744[1 /*7*/], 0);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1744[1 /*7*/], 1, 1);
						ENTITY::SET_ENTITY_COORDS(Local_1744[1 /*7*/], -2241.1f, 263.6f, 190.3f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_1744[1 /*7*/], 235f);
					}
					while (!GlobalFunc_7047(&iLocal_4050, 30, Local_4079[2 /*4*/], Local_4079[2 /*4*/].f_3, 0))
					{
						SYSTEM::WAIT(0);
					}
					if (GlobalFunc_234(iLocal_4050))
					{
						func_562();
						PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_4050, 0);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_4050, Local_4079[2 /*4*/], 2f, 1, 0);
						TASK::TASK_SEEK_COVER_TO_COORDS(iLocal_4050, Local_4079[2 /*4*/], -2231.011f, 263.6327f, 173.602f, -1, 0);
					}
					func_156(1, 1, 0, 0, 0, 0);
					func_732();
					AUDIO::TRIGGER_MUSIC_EVENT("MIC3_TREV_HELI_RESTART");
					if (Global_89962.f_12[2] == 1)
					{
						func_156(1, 1, 0, 0, 0, 0);
						GlobalFunc_9019(&iLocal_3038, 2);
						GlobalFunc_10993(&iLocal_3038, 1, 0, 0);
						func_156(1, 1, 0, 0, 0, 0);
						Local_318[0 /*25*/] = iLocal_3038[0];
						Local_318[1 /*25*/] = PLAYER::PLAYER_PED_ID();
						if (GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_4104, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_4104.f_3);
							PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), 1);
							PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 1);
							GlobalFunc_7632(1);
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), 1063765679, 0, 0, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
							PED::_0xA52D5247A4227E14(PLAYER::PLAYER_PED_ID());
							HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
							WEAPON::GIVE_WEAPON_TO_PED(Local_318[1 /*25*/], joaat("weapon_sniperrifle"), 10, 1, 1);
							AUDIO::START_AUDIO_SCENE("MI_3_TREVOR_SHOOTS_HELICOPTER");
						}
						iLocal_6653 = 3;
					}
					else
					{
						iLocal_6653 = 0;
					}
					iLocal_6338 = 1;
					bLocal_3037 = true;
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
					break;
				
				case 4:
					func_796();
					func_818();
					func_164(&(Local_318[1 /*25*/]), 2, Local_4104, Local_4104.f_3, joaat("weapon_sniperrifle"), 10, 1, 1, 0, 60);
					func_156(1, 1, 0, 0, 0, 0);
					iLocal_6338 = 1;
					func_726();
					GlobalFunc_9019(&iLocal_3038, 2);
					GlobalFunc_10993(&iLocal_3038, 1, 0, 0);
					WEAPON::GIVE_WEAPON_TO_PED(Local_318[1 /*25*/], joaat("weapon_sniperrifle"), 10, 1, 1);
					bLocal_3037 = true;
					func_156(1, 1, 0, 0, 0, 0);
					while (!GlobalFunc_7047(&iLocal_4050, 30, -2219.033f, 246.495f, 173.6018f, 20f, 0))
					{
						SYSTEM::WAIT(0);
					}
					func_562();
					AUDIO::TRIGGER_MUSIC_EVENT("MIC3_MT_FIGHT_RESTART");
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
					break;
				
				case 5:
					func_796();
					func_818();
					func_164(&(Local_318[1 /*25*/]), 2, Local_4104, Local_4104.f_3, joaat("weapon_sniperrifle"), 10, 1, 1, 0, 60);
					func_156(1, 1, 0, 0, 0, 0);
					iLocal_6338 = 1;
					GlobalFunc_9019(&iLocal_3038, 2);
					GlobalFunc_10993(&iLocal_3038, 1, 0, 0);
					WEAPON::GIVE_WEAPON_TO_PED(Local_318[1 /*25*/], joaat("weapon_sniperrifle"), 10, 1, 1);
					bLocal_3037 = true;
					func_156(1, 1, 0, 0, 0, 0);
					Local_318[0 /*25*/] = iLocal_3038[0];
					while (!GlobalFunc_7047(&iLocal_4050, 30, -2219.323f, 247.2553f, 173.6018f, 20f, 0))
					{
						SYSTEM::WAIT(0);
					}
					if (GlobalFunc_234(func_28()))
					{
						ENTITY::FREEZE_ENTITY_POSITION(func_28(), 0);
					}
					func_562();
					iLocal_6494 = 0;
					AUDIO::TRIGGER_MUSIC_EVENT("MIC3_FOUNTAIN_RESTART");
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(PLAYER::PLAYER_PED_ID(), 0);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(func_28(), "MI_3_MICHAEL_GROUP", 0);
					AUDIO::STOP_AUDIO_SCENE("MI_3_SHOOTOUT_PLAYER_IS_MICHAEL");
					AUDIO::START_AUDIO_SCENE("MI_3_SHOOTOUT_PLAYER_IS_TREVOR");
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
					break;
				
				case 6:
					func_796();
					func_818();
					bLocal_3037 = true;
					func_164(&(Local_318[1 /*25*/]), 2, Local_4104, Local_4104.f_3, joaat("weapon_sniperrifle"), 10, 1, 1, 1, 60);
					while (!GlobalFunc_7047(&iLocal_4050, 30, Local_4079[3 /*4*/], Local_4079[3 /*4*/].f_3, 0))
					{
						SYSTEM::WAIT(0);
					}
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iLocal_4050, Local_6415.f_3, -1, 1, 0f, 0, 0, Local_6415, 0);
					if (Global_89962.f_12[0] == 1)
					{
						func_156(0, 1, 0, 0, 0, 0);
						GlobalFunc_9019(&iLocal_3038, 2);
						GlobalFunc_10993(&iLocal_3038, 1, 0, 0);
						func_156(0, 1, 0, 0, 0, 0);
						Local_318[0 /*25*/] = iLocal_3038[0];
						Local_318[1 /*25*/] = PLAYER::PLAYER_PED_ID();
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(PLAYER::PLAYER_PED_ID(), 0);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(func_28(), "MI_3_MICHAEL_GROUP", 0);
						AUDIO::START_AUDIO_SCENE("MI_3_SHOOTOUT_PLAYER_IS_TREVOR");
						if (GlobalFunc_234(func_28()))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(func_28(), 1);
							ENTITY::SET_ENTITY_PROOFS(func_28(), 1, 1, 1, 1, 1, 0, 0, 0);
							func_622(func_28(), Local_6076, 0, 0);
						}
						if (Global_89962.f_12[1] == 1)
						{
							ENTITY::SET_ENTITY_COORDS(func_29(), Local_6408.f_3, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(func_29(), 113.2243f);
							TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(PLAYER::PLAYER_PED_ID(), Local_6408.f_3, -1, 0, 0f, 1, 1, Local_6408, 0);
							if (GlobalFunc_234(func_28()))
							{
								ENTITY::SET_ENTITY_COORDS(func_28(), -2246.662f, 271.642f, 173.602f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(func_28(), 24.2243f);
								TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_28(), Local_6422.f_3, -1, 1, 0f, 0, 0, Local_6422, 0);
							}
						}
						else if (Global_89962.f_12[1] == 0)
						{
							if (GlobalFunc_234(func_28()))
							{
								ENTITY::SET_ENTITY_COORDS(func_28(), Local_6408.f_3, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(func_28(), 24.2243f);
								TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_28(), Local_6408.f_3, -1, 1, 0f, 0, 0, Local_6408, 0);
							}
							func_817();
						}
					}
					else
					{
						iLocal_3038[0] = PLAYER::PLAYER_PED_ID();
						iLocal_3038[2] = Local_318[1 /*25*/];
						Local_318[0 /*25*/] = PLAYER::PLAYER_PED_ID();
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(PLAYER::PLAYER_PED_ID(), 0);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(func_29(), "MI_3_TREVOR_GROUP", 0);
						AUDIO::START_AUDIO_SCENE("MI_3_SHOOTOUT_PLAYER_IS_MICHAEL");
						if (GlobalFunc_234(iLocal_3038[0]))
						{
						}
						if (GlobalFunc_234(iLocal_3038[2]))
						{
						}
						if (GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_6408.f_3, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 113.2243f);
							TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(PLAYER::PLAYER_PED_ID(), Local_6408.f_3, -1, 1, 0f, 1, 1, Local_6408, 0);
						}
						if (Global_89962.f_12[1] == 1)
						{
							if (GlobalFunc_234(func_29()))
							{
								ENTITY::SET_ENTITY_COORDS(func_29(), Local_6422.f_3, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(func_29(), 24.2243f);
								TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_29(), Local_6422.f_3, -1, 1, 0f, 0, 0, Local_6422, 0);
							}
						}
						else
						{
							func_817();
							if (GlobalFunc_234(func_29()))
							{
								PED::SET_PED_COMBAT_MOVEMENT(func_29(), 1);
								PED::REMOVE_PED_DEFENSIVE_AREA(func_29(), 0);
								func_622(func_29(), Local_6068, 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(func_29(), 200f, 0);
							}
						}
					}
					iLocal_6338 = 0;
					iLocal_6494 = 0;
					iLocal_6337 = 0;
					func_562();
					func_679();
					func_675();
					func_680(&Local_6301, 5, "WAR_FIB", 424575/*func_681*/, 1056964608, 1, -1);
					func_680(&Local_6325, 5, "WAR_MW", 424575/*func_681*/, 1056964608, 1, -1);
					func_689(&Local_6301, &Local_5273, &Local_6260, iLocal_64, Local_6244, 1);
					func_689(&Local_6325, &Local_5425, &Local_6279, iLocal_63, Local_6252, 0);
					PED::DELETE_PED(&(Local_5273[0 /*25*/]));
					PED::DELETE_PED(&(Local_5425[0 /*25*/]));
					func_816();
					func_815(Local_4079[3 /*4*/]);
					AUDIO::TRIGGER_MUSIC_EVENT("MIC3_DAVE_ESCAPES_RESTART");
					break;
				
				case 7:
					func_164(&(Local_318[1 /*25*/]), 2, Local_4104, Local_4104.f_3, joaat("weapon_sniperrifle"), 10, 1, 1, 1, 60);
					func_796();
					func_818();
					bLocal_3037 = true;
					while (!GlobalFunc_7047(&iLocal_4050, 30, Local_4079[3 /*4*/], Local_4079[3 /*4*/].f_3, 0))
					{
						SYSTEM::WAIT(0);
					}
					if (Global_89962.f_12[0] == 1)
					{
						func_156(0, 1, 0, 0, 0, 0);
						GlobalFunc_9019(&iLocal_3038, 2);
						GlobalFunc_10993(&iLocal_3038, 1, 0, 0);
						func_156(0, 1, 0, 0, 0, 0);
						Local_318[0 /*25*/] = iLocal_3038[0];
						Local_318[1 /*25*/] = PLAYER::PLAYER_PED_ID();
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(PLAYER::PLAYER_PED_ID(), 0);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(func_28(), "MI_3_MICHAEL_GROUP", 0);
						AUDIO::START_AUDIO_SCENE("MI_3_SHOOTOUT_PLAYER_IS_TREVOR");
						if (Global_89962.f_12[1] == 1)
						{
							ENTITY::SET_ENTITY_COORDS(func_29(), -2248.998f, 268.9602f, 173.602f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(func_29(), 24.2243f);
							ENTITY::SET_ENTITY_COORDS(func_28(), -2246.662f, 271.642f, 173.602f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(func_28(), 24.2243f);
						}
						else
						{
							ENTITY::SET_ENTITY_COORDS(func_28(), -2248.998f, 268.9602f, 173.602f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(func_28(), 24.2243f);
						}
						WEAPON::GIVE_WEAPON_TO_PED(func_28(), joaat("weapon_combatmg"), 1000, 1, 1);
					}
					else
					{
						iLocal_3038[0] = PLAYER::PLAYER_PED_ID();
						iLocal_3038[2] = Local_318[1 /*25*/];
						Local_318[0 /*25*/] = PLAYER::PLAYER_PED_ID();
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(PLAYER::PLAYER_PED_ID(), 0);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(func_29(), "MI_3_TREVOR_GROUP", 0);
						AUDIO::START_AUDIO_SCENE("MI_3_SHOOTOUT_PLAYER_IS_MICHAEL");
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -2248.998f, 268.9602f, 173.602f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 24.2243f);
						if (Global_89962.f_12[1] == 1)
						{
							ENTITY::SET_ENTITY_COORDS(func_29(), -2246.662f, 271.642f, 173.602f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(func_29(), 24.2243f);
						}
					}
					iLocal_6338 = 0;
					func_562();
					func_815(Local_4079[3 /*4*/]);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
					AUDIO::TRIGGER_MUSIC_EVENT("MIC3_ESCAPE_RESTART");
					break;
				
				case 8:
					func_164(&(Local_318[1 /*25*/]), 2, Local_4104, Local_4104.f_3, joaat("weapon_sniperrifle"), 10, 1, 1, 1, 60);
					func_796();
					func_818();
					while (!GlobalFunc_7047(&iLocal_4050, 30, -2330.064f, 259.406f, 168.6018f, 300f, 0))
					{
						SYSTEM::WAIT(0);
					}
					if (Global_89962.f_12[0] == 1)
					{
						func_156(0, 1, 0, 0, 0, 0);
						GlobalFunc_9019(&iLocal_3038, 2);
						GlobalFunc_10993(&iLocal_3038, 1, 0, 0);
						func_156(0, 1, 0, 0, 0, 0);
						Local_318[0 /*25*/] = iLocal_3038[0];
						Local_318[1 /*25*/] = PLAYER::PLAYER_PED_ID();
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(PLAYER::PLAYER_PED_ID(), 0);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(func_28(), "MI_3_MICHAEL_GROUP", 0);
						AUDIO::START_AUDIO_SCENE("MI_3_SHOOTOUT_PLAYER_IS_TREVOR");
						if (Global_89962.f_12[1] == 1)
						{
							ENTITY::SET_ENTITY_COORDS(func_29(), Local_6429.f_3, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(func_29(), 112.58f);
							TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_29(), Local_6429.f_3, -1, 1, 0f, 1, 1, Local_6429, 0);
						}
						ENTITY::SET_ENTITY_COORDS(func_28(), -2289.143f, 267.7803f, 168.6018f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(func_28(), 24.2243f);
					}
					else
					{
						iLocal_3038[0] = PLAYER::PLAYER_PED_ID();
						iLocal_3038[2] = Local_318[1 /*25*/];
						Local_318[0 /*25*/] = PLAYER::PLAYER_PED_ID();
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(PLAYER::PLAYER_PED_ID(), 0);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(func_29(), "MI_3_TREVOR_GROUP", 0);
						AUDIO::START_AUDIO_SCENE("MI_3_SHOOTOUT_PLAYER_IS_MICHAEL");
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_6429.f_3, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 112.58f);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(PLAYER::PLAYER_PED_ID(), Local_6429.f_3, -1, 1, 0f, 1, 1, Local_6429, 0);
						if (Global_89962.f_12[1] == 1)
						{
							ENTITY::SET_ENTITY_COORDS(func_29(), -2289.143f, 267.7803f, 168.6018f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(func_29(), 24.2243f);
						}
					}
					iLocal_6338 = 0;
					if (GlobalFunc_234(func_28()))
					{
						PED::SET_PED_USING_ACTION_MODE(func_28(), 1, -1, 0);
					}
					if (GlobalFunc_234(func_29()))
					{
						PED::SET_PED_USING_ACTION_MODE(func_29(), 1, -1, 0);
					}
					if (GlobalFunc_8315() == 2)
					{
						iLocal_4051 = func_28();
					}
					else if (GlobalFunc_8315() == 0)
					{
						iLocal_4051 = func_29();
					}
					GlobalFunc_4493(&(Local_1920[12 /*8*/]), 0, 0, 1);
					GlobalFunc_4493(&(Local_1920[10 /*8*/]), 0, 0, 1);
					GlobalFunc_4493(&(Local_1920[11 /*8*/]), 5000, 0, 1);
					func_562();
					func_156(0, 1, 0, 0, 0, 0);
					func_814();
					AUDIO::TRIGGER_MUSIC_EVENT("MIC3_VEHICLE_ESCAPE_RESTART");
					break;
				
				case 9:
					if (Global_89962.f_12[0] == 0)
					{
						CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("MIC_3_EXT", 131069, 8);
					}
					else if (Global_89962.f_12[0] == 1)
					{
						CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("MIC_3_EXT", 131070, 8);
					}
					break;
				
				case 10:
					func_814();
					break;
			}
			GlobalFunc_4967(0, -1, 1);
			if (CAM::IS_SCREEN_FADED_OUT() || !CAM::IS_SCREEN_FADING_IN())
			{
				switch (iLocal_3030)
				{
					case 0:
						GlobalFunc_10762(&uLocal_115, &cLocal_54, "M3_INTL", 8, 0, 0, 0, 0);
						break;
					
					case 2:
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(90f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
						break;
					
					case 3:
						if (Global_89962.f_12[2] != 1)
						{
							while (!AUDIO::LOAD_STREAM("MIC_3_HELICOPTER_SHOT_DOWN_MASTER", 0))
							{
								SYSTEM::WAIT(0);
							}
						}
						else if (GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_4104, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_4104.f_3);
						}
						break;
					
					case 4:
					case 5:
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-30f, 1065353216);
						break;
					
					case 6:
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-90f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
						if (Global_89962.f_12[0] == 1 && Global_89962.f_12[1] == 0)
						{
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-30f, 1065353216);
						}
						break;
					
					case 8:
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-80f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						break;
				}
				if (GlobalFunc_234(func_28()))
				{
					ENTITY::FREEZE_ENTITY_POSITION(func_28(), 0);
				}
				if (GlobalFunc_234(func_29()))
				{
					ENTITY::FREEZE_ENTITY_POSITION(func_29(), 0);
				}
				if ((iLocal_3030 != 9 && iLocal_3030 != 1) && iLocal_3030 != 3)
				{
					func_814();
					CAM::DO_SCREEN_FADE_IN(800);
				}
				GlobalFunc_5181(&uLocal_2049);
			}
			bLocal_3034 = false;
		}
	}
}




void func_814()//Position - 0x741E1
{
	bool bVar0;
	
	bVar0 = false;
	while (!bVar0)
	{
		SYSTEM::WAIT(0);
		bVar0 = true;
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			bVar0 = false;
		}
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
			{
				bVar0 = false;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(func_29()) && !PED::IS_PED_INJURED(func_29()))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_29()))
			{
				bVar0 = false;
			}
		}
	}
	GlobalFunc_5181(&uLocal_2049);
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
}

void func_815(struct<3> Param0)//Position - 0x74277
{
	func_789(Param0, 1, 1);
}

void func_816()//Position - 0x74289
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Local_5273 - 1))
	{
		func_674(&(Local_5273[iVar0 /*25*/]), Local_6212);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_5425 - 1))
	{
		func_674(&(Local_5425[iVar0 /*25*/]), Local_6204);
		iVar0++;
	}
	if (GlobalFunc_234(Local_5273[1 /*25*/]))
	{
		ENTITY::SET_ENTITY_COORDS(Local_5273[1 /*25*/], -2228.472f, 294.5975f, 173.602f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(Local_5273[1 /*25*/], 113f);
	}
	if (GlobalFunc_234(Local_5273[2 /*25*/]))
	{
		ENTITY::SET_ENTITY_COORDS(Local_5273[2 /*25*/], -2224.648f, 285.8269f, 173.602f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(Local_5273[2 /*25*/], 113f);
	}
	if (GlobalFunc_234(Local_5425[1 /*25*/]))
	{
		ENTITY::SET_ENTITY_COORDS(Local_5425[1 /*25*/], -2271.637f, 274.9866f, 173.6021f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(Local_5425[1 /*25*/], 203f);
	}
	if (GlobalFunc_234(Local_5425[2 /*25*/]))
	{
		ENTITY::SET_ENTITY_COORDS(Local_5425[2 /*25*/], -2268.776f, 268.8912f, 173.6021f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(Local_5425[2 /*25*/], 293f);
	}
}

void func_817()//Position - 0x743C3
{
	int iVar0;
	
	func_628(&(Local_4892[0 /*25*/]), iLocal_63, -2276.927f, 262.9007f, 183.6011f, 203f, "MW_IG8_1", iLocal_315, iLocal_75, 10, 0, 0, 0);
	func_628(&(Local_4892[1 /*25*/]), iLocal_63, -2279.005f, 261.1865f, 183.6012f, 203f, "MW_IG8_2", iLocal_315, iLocal_75, 10, 0, 0, 0);
	func_628(&(Local_4892[2 /*25*/]), iLocal_63, -2282.021f, 259.2525f, 183.6013f, 203f, "MW_IG8_3", iLocal_315, iLocal_75, 10, 0, 0, 0);
	Local_6140 = { Local_6140 };
	iVar0 = 0;
	while (iVar0 <= (Local_4892 - 1))
	{
		if (GlobalFunc_234(Local_4892[iVar0 /*25*/]))
		{
			PED::SET_PED_ACCURACY(Local_4892[iVar0 /*25*/], 1);
			PED::SET_PED_COMBAT_RANGE(Local_4892[iVar0 /*25*/], 2);
			PED::SET_PED_COMBAT_MOVEMENT(Local_4892[iVar0 /*25*/], 1);
			TASK::TASK_COMBAT_PED(Local_4892[iVar0 /*25*/], func_29(), 0, 16);
		}
		iVar0++;
	}
}

void func_818()//Position - 0x744BE
{
	Local_1864[3 /*2*/] = OBJECT::CREATE_OBJECT(iLocal_68, -2197.094f, 219.5265f, 183.6019f, 1, 1, 0);
	if (GlobalFunc_234(Local_1864[3 /*2*/]))
	{
		ENTITY::SET_ENTITY_HEADING(Local_1864[3 /*2*/], 203f);
	}
	GlobalFunc_5174(&uLocal_2049, iLocal_68);
}

int func_819(int iParam0, bool bParam1, bool bParam2)//Position - 0x74509
{
	int iVar0;
	
	if (iParam0 == 3)
	{
		return 0;
	}
	if (bParam1)
	{
		while (!func_821(iParam0, bParam2))
		{
			SYSTEM::WAIT(0);
		}
	}
	else if (!func_821(iParam0, bParam2))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			Local_318[0 /*25*/] = PLAYER::PLAYER_PED_ID();
			GlobalFunc_200(&uLocal_115, 0);
			GlobalFunc_173(&uLocal_115, 0, func_28(), "MICHAEL", 0, 1);
			break;
		
		case 1:
			Local_318[2 /*25*/] = PLAYER::PLAYER_PED_ID();
			GlobalFunc_200(&uLocal_115, 1);
			GlobalFunc_173(&uLocal_115, 1, func_820(), "FRANKLIN", 0, 1);
			break;
		
		case 2:
			Local_318[1 /*25*/] = PLAYER::PLAYER_PED_ID();
			GlobalFunc_200(&uLocal_115, 2);
			GlobalFunc_173(&uLocal_115, 2, func_29(), "TREVOR", 0, 1);
			break;
	}
	if (iLocal_3038.f_5 != iParam0)
	{
		switch (iLocal_3038.f_5)
		{
			case 0:
				iVar0 = 0;
				break;
			
			case 1:
				iVar0 = 2;
				break;
			
			case 2:
				iVar0 = 1;
				break;
		}
		Local_318[iVar0 /*25*/] = 0;
		GlobalFunc_703(&(Local_318[iVar0 /*25*/].f_8));
	}
	return 1;
}

int func_820()//Position - 0x7461D
{
	return Local_318[2 /*25*/];
}

int func_821(int iParam0, bool bParam1)//Position - 0x7462B
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
		func_824(&(Global_17052[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2));
		func_172(&(Global_17052[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_17052.f_7 = iParam0;
	Global_17052.f_39 = 1;
	GlobalFunc_10993(&Global_17052, 0, 0, 0);
	GlobalFunc_5124(iParam0);
	return 1;
}



int func_824(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x747E3
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
				GlobalFunc_8364(*iParam0, iParam1, bParam5);
				PED::_0xE861D0B05C7662B8(*iParam0, 0, 0);
				func_432(*iParam0);
				GlobalFunc_7694(*iParam0, 1, 0);
				GlobalFunc_7693(*iParam0);
				GlobalFunc_7707(*iParam0);
				func_174(*iParam0, bParam6);
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






void func_830()//Position - 0x75631
{
	int iVar0;
	
	func_831(&Local_1920);
	GlobalFunc_7139(&uLocal_283, 0);
	GlobalFunc_4935();
	HUD::CLEAR_PRINTS();
	CAM::DESTROY_ALL_CAMS(0);
	MISC::SET_TIME_SCALE(1f);
	fLocal_3118 = 1f;
	GlobalFunc_200(&uLocal_115, 0);
	GlobalFunc_200(&uLocal_115, 1);
	GlobalFunc_200(&uLocal_115, 2);
	iVar0 = 0;
	while (iVar0 <= (57 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_318[iVar0 /*25*/]) && PLAYER::PLAYER_PED_ID() != Local_318[iVar0 /*25*/])
		{
			PED::DELETE_PED(&(Local_318[iVar0 /*25*/]));
		}
		func_22(&(Local_318[iVar0 /*25*/].f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_1744)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1744[iVar0 /*7*/]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1744[iVar0 /*7*/], 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1744[iVar0 /*7*/], 0))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_1744[iVar0 /*7*/], 1) + Vector(0f, 0f, -2f), 1, 0, 0, 1);
				}
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1744[iVar0 /*7*/]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1744[iVar0 /*7*/]);
				}
			}
			Local_1744[iVar0 /*7*/].f_4 = 1f;
			Local_1744[iVar0 /*7*/].f_2 = 1f;
			Local_1744[iVar0 /*7*/].f_3 = 1f;
			Local_1744[iVar0 /*7*/].f_5 = -1;
			Local_1744[iVar0 /*7*/].f_6 = 0;
			VEHICLE::DELETE_VEHICLE(&(Local_1744[iVar0 /*7*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_1864)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1864[iVar0 /*2*/]) && Local_1864[iVar0 /*2*/].f_1)
		{
			OBJECT::DELETE_OBJECT(&(Local_1864[iVar0 /*2*/]));
		}
		iVar0++;
	}
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	iVar0 = 0;
	while (iVar0 < Local_1875)
	{
		if (CAM::DOES_CAM_EXIST(Local_1875[iVar0 /*10*/]))
		{
			CAM::DESTROY_CAM(Local_1875[iVar0 /*10*/], 0);
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_6517))
	{
		OBJECT::DELETE_OBJECT(&iLocal_6517);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_317))
	{
		HUD::REMOVE_BLIP(&uLocal_317);
	}
	OBJECT::REMOVE_ALL_PICKUPS_OF_TYPE(joaat("pickup_weapon_smg"));
	OBJECT::REMOVE_ALL_PICKUPS_OF_TYPE(joaat("pickup_weapon_pumpshotgun"));
	OBJECT::REMOVE_ALL_PICKUPS_OF_TYPE(joaat("pickup_weapon_assaultsmg"));
	OBJECT::REMOVE_ALL_PICKUPS_OF_TYPE(1491498856);
	GRAPHICS::REMOVE_DECALS_IN_RANGE(-2166.537f, 232.3802f, 183.6015f, 200f);
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(-2166.537f, 232.3802f, 183.6015f, 200f);
	MISC::CLEAR_AREA_OF_PEDS(-2166.537f, 232.3802f, 183.6015f, 200f, 0);
	GlobalFunc_7621(82, 0, 0, 1, 1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	MISC::ENABLE_DISPATCH_SERVICE(5, 1);
	MISC::ENABLE_DISPATCH_SERVICE(3, 1);
	iLocal_3119 = 0;
	iLocal_4025 = -1;
	func_13(0);
}

void func_831(var uParam0)//Position - 0x758A5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_832(uParam0[iVar0 /*8*/]);
		iVar0++;
	}
}

void func_832(var uParam0)//Position - 0x758CB
{
	if (!GlobalFunc_4405(uParam0))
	{
		*uParam0 = 0;
	}
}



void func_835()//Position - 0x7590C
{
	switch (iLocal_3029)
	{
		case 1:
			iLocal_3029 = 2;
			iLocal_3031 = -1;
			break;
		
		case 2:
			iLocal_3029 = 3;
			iLocal_3031 = 0;
			iLocal_3030 = iLocal_3032;
			break;
		
		case 3:
			iLocal_3032 = -1;
			iLocal_3029 = 0;
			break;
		
		case 0:
			if ((MISC::GET_GAME_TIMER() - iLocal_3033) > 2500)
			{
				iLocal_3033 = MISC::GET_GAME_TIMER();
			}
			break;
	}
}


void func_837()//Position - 0x75982
{
	switch (iLocal_53)
	{
		case 0:
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_3_SHOOTOUT_SNIPER_SCOPE"))
			{
				AUDIO::STOP_AUDIO_SCENE("MI_3_SHOOTOUT_SNIPER_SCOPE");
			}
			iLocal_53 = 1;
			break;
		
		case 1:
			if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
			{
				AUDIO::START_AUDIO_SCENE("MI_3_SHOOTOUT_SNIPER_SCOPE");
				iLocal_53 = 2;
			}
			break;
		
		case 2:
			if (!CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
			{
				AUDIO::STOP_AUDIO_SCENE("MI_3_SHOOTOUT_SNIPER_SCOPE");
				iLocal_53 = 1;
			}
			break;
		
		case 3:
			break;
	}
}

void func_838()//Position - 0x759F5
{
	int iVar0;
	
	iLocal_3030 = 0;
	if (GlobalFunc_199())
	{
		iVar0 = GlobalFunc_198();
		if (Global_84544)
		{
			iVar0++;
		}
		iLocal_3036 = func_864(iVar0);
		switch (iLocal_3036)
		{
			case 0:
				GlobalFunc_4972(-2291.829f, 367.6647f, 173.6017f, 203.8096f, 1, 0);
				break;
			
			case 1:
				GlobalFunc_4972(-2156.922f, 234.4068f, 183.6015f, 113.7745f, 1, 0);
				break;
			
			case 2:
				GlobalFunc_4972(-2156.862f, 234.3435f, 183.6019f, 21.5258f, 1, 0);
				break;
			
			case 3:
				GlobalFunc_4972(-2262.478f, 235.2824f, 193.6113f, 320.1852f, 1, 0);
				break;
			
			case 4:
				GlobalFunc_7621(82, 1, 0, 1, 1);
				GlobalFunc_4972(-2221.314f, 251.0969f, 183.6041f, 320.185f, 1, 0);
				break;
			
			case 5:
				GlobalFunc_7621(82, 1, 0, 1, 1);
				GlobalFunc_4972(-2219.298f, 247.3061f, 183.6041f, 40.5077f, 1, 0);
				break;
			
			case 6:
				GlobalFunc_7621(82, 1, 0, 1, 1);
				GlobalFunc_4972(-2249.855f, 270.121f, 173.602f, 24.2243f, 1, 0);
				break;
			
			case 7:
				GlobalFunc_7621(82, 1, 0, 1, 1);
				GlobalFunc_4972(-2249.855f, 270.121f, 173.602f, 24.2243f, 1, 0);
				break;
			
			case 8:
				GlobalFunc_7621(82, 1, 0, 1, 1);
				GlobalFunc_4972(-2295.547f, 264.1368f, 168.6018f, 25.3686f, 1, 0);
				break;
			
			case 9:
				GlobalFunc_4972(-1473.121f, -396.4522f, 37.1653f, 307.9418f, 1, 0);
				break;
			
			case 10:
				GlobalFunc_4972(-2295.547f, 264.1368f, 168.6018f, 25.3686f, 1, 0);
				break;
		}
		bLocal_3034 = true;
	}
	uLocal_4022 = uLocal_4022;
	iLocal_4030 = { iLocal_4030 };
	GlobalFunc_3005(&uLocal_2049, "MIC3", 0);
	Local_318[0 /*25*/] = PLAYER::PLAYER_PED_ID();
	func_861(1);
	iLocal_6540 = 0;
	iLocal_6561 = 0;
	iLocal_6653 = 0;
	iLocal_6685 = 0;
	iLocal_6735 = 0;
	iLocal_7024 = 0;
	iLocal_7044 = 0;
	iLocal_6946 = 0;
	iLocal_50 = 0;
	iLocal_51 = 0;
	iLocal_100 = 1;
	iLocal_6562 = 20;
	iLocal_6598 = 0;
	iLocal_6654 = 20;
	iLocal_6687 = 0;
	iLocal_6736 = 0;
	iLocal_7025 = 0;
	iLocal_7045 = 0;
	iLocal_6948 = 0;
	iLocal_53 = 0;
	PED::ADD_RELATIONSHIP_GROUP("FRIEND", &iLocal_310);
	PED::ADD_RELATIONSHIP_GROUP("CIA", &iLocal_313);
	PED::ADD_RELATIONSHIP_GROUP("FIB", &iLocal_311);
	PED::ADD_RELATIONSHIP_GROUP("MERRYWEATHER", &iLocal_312);
	PED::ADD_RELATIONSHIP_GROUP("FIB_FINAL", &iLocal_314);
	PED::ADD_RELATIONSHIP_GROUP("MW_FINAL", &iLocal_315);
	PED::ADD_RELATIONSHIP_GROUP("CIA_FINAL", &iLocal_316);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_311, iLocal_314);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_311, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_311, iLocal_310);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_311, iLocal_312);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_311, iLocal_313);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_312, iLocal_315);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_312, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_312, iLocal_310);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_312, iLocal_311);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_312, iLocal_313);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_313, iLocal_316);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_313, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_313, iLocal_310);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_313, iLocal_311);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_313, iLocal_312);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_310, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_310, iLocal_311);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_310, iLocal_314);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_310, iLocal_312);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_310, iLocal_315);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_310, iLocal_313);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_310, iLocal_316);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_310);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_311);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_312);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_313);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_314, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_314, iLocal_310);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_314, iLocal_311);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_314, iLocal_315);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_314, iLocal_312);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_314, iLocal_313);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_314, iLocal_316);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_315, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_315, iLocal_310);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_315, iLocal_312);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_315, iLocal_311);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_315, iLocal_314);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_315, iLocal_313);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_315, iLocal_316);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_316, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_316, iLocal_310);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_316, iLocal_313);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_316, iLocal_311);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_316, iLocal_314);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_316, iLocal_312);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_316, iLocal_315);
	Local_3121[7 /*60*/] = { -2161.13f, 213.0802f, 182.6014f };
	Local_3121[7 /*60*/].f_3 = { -2179.093f, 252.9119f, 189.3517f };
	Local_3121[7 /*60*/].f_6 = 45.25f;
	Local_3121[7 /*60*/].f_7 = 6;
	Local_3121[7 /*60*/].f_8 = 8;
	Local_3121[7 /*60*/].f_9 = -1;
	Local_3121[7 /*60*/].f_57 = { -2188.706f, 223.0552f, 183.602f };
	Local_3121[7 /*60*/].f_26[0 /*3*/] = { -2178.021f, 230.5221f, 183.6019f };
	Local_3121[7 /*60*/].f_26[1 /*3*/] = { -2181.313f, 227.793f, 183.6019f };
	Local_3121[7 /*60*/].f_26[2 /*3*/] = { -2187.901f, 219.9653f, 183.6019f };
	Local_3121[7 /*60*/].f_26[3 /*3*/] = { -2198.32f, 244.6006f, 183.602f };
	Local_3121[7 /*60*/].f_10[8] = 1;
	Local_3121[7 /*60*/].f_10[6] = 1;
	Local_3121[8 /*60*/] = { -2216.373f, 240.0293f, 183.6219f };
	Local_3121[8 /*60*/].f_3 = { -2193.761f, 250.0637f, 189.0285f };
	Local_3121[8 /*60*/].f_6 = 6.875f;
	Local_3121[8 /*60*/].f_7 = 9;
	Local_3121[8 /*60*/].f_8 = -1;
	Local_3121[8 /*60*/].f_9 = 7;
	Local_3121[8 /*60*/].f_57 = { -2214.135f, 243.0489f, 183.602f };
	Local_3121[8 /*60*/].f_26[0 /*3*/] = { -2204.5f, 242.53f, 183.61f };
	Local_3121[8 /*60*/].f_26[1 /*3*/] = { -2209.78f, 240.08f, 183.61f };
	Local_3121[8 /*60*/].f_26[2 /*3*/] = { -2212.04f, 244.49f, 183.61f };
	Local_3121[8 /*60*/].f_10[9] = 1;
	Local_3121[8 /*60*/].f_10[6] = 1;
	Local_3121[9 /*60*/] = { -2212.044f, 238.4772f, 183.602f };
	Local_3121[9 /*60*/].f_3 = { -2230.36f, 280.6109f, 188.664f };
	Local_3121[9 /*60*/].f_6 = 6.8125f;
	Local_3121[9 /*60*/].f_7 = 10;
	Local_3121[9 /*60*/].f_8 = -1;
	Local_3121[9 /*60*/].f_9 = 8;
	Local_3121[9 /*60*/].f_57 = { -2227.605f, 278.726f, 183.6015f };
	Local_3121[9 /*60*/].f_26[0 /*3*/] = { -2219.28f, 248.13f, 183.62f };
	Local_3121[9 /*60*/].f_26[1 /*3*/] = { -2217.35f, 254.84f, 183.61f };
	Local_3121[9 /*60*/].f_26[2 /*3*/] = { -2223.97f, 258.68f, 183.63f };
	Local_3121[9 /*60*/].f_26[3 /*3*/] = { -2221.98f, 265.41f, 183.61f };
	Local_3121[9 /*60*/].f_26[4 /*3*/] = { -2228.68f, 269.3f, 183.6f };
	Local_3121[9 /*60*/].f_26[5 /*3*/] = { -2226.7f, 276.02f, 183.61f };
	Local_3121[9 /*60*/].f_10[10] = 1;
	Local_3121[9 /*60*/].f_10[11] = 1;
	Local_3121[10 /*60*/] = { -2218.75f, 280.4851f, 189.2808f };
	Local_3121[10 /*60*/].f_3 = { -2229.988f, 305.7912f, 183.3519f };
	Local_3121[10 /*60*/].f_6 = 14.25f;
	Local_3121[10 /*60*/].f_7 = 11;
	Local_3121[10 /*60*/].f_8 = -1;
	Local_3121[10 /*60*/].f_9 = 9;
	Local_3121[10 /*60*/].f_57 = { -2229.571f, 301.1237f, 183.6015f };
	Local_3121[10 /*60*/].f_26[0 /*3*/] = { -2227.92f, 305.66f, 183.68f };
	Local_3121[10 /*60*/].f_10[11] = 1;
	Local_3121[10 /*60*/].f_10[12] = 1;
	Local_3121[10 /*60*/].f_10[13] = 1;
	Local_3121[11 /*60*/] = { -2239.688f, 294.0257f, 183.6015f };
	Local_3121[11 /*60*/].f_3 = { -2255.514f, 330.1768f, 189.914f };
	Local_3121[11 /*60*/].f_6 = 14.3125f;
	Local_3121[11 /*60*/].f_7 = 12;
	Local_3121[11 /*60*/].f_8 = -1;
	Local_3121[11 /*60*/].f_9 = 10;
	Local_3121[11 /*60*/].f_57 = { -2257.195f, 319.2654f, 183.6015f };
	Local_3121[11 /*60*/].f_26[0 /*3*/] = { -2254.63f, 315.64f, 183.69f };
	Local_3121[11 /*60*/].f_10[12] = 1;
	Local_3121[11 /*60*/].f_10[13] = 1;
	Local_3121[12 /*60*/] = { -2258.348f, 319.3461f, 183.6013f };
	Local_3121[12 /*60*/].f_3 = { -2290.766f, 304.7914f, 189.6522f };
	Local_3121[12 /*60*/].f_6 = 11.4375f;
	Local_3121[12 /*60*/].f_7 = 13;
	Local_3121[12 /*60*/].f_8 = -1;
	Local_3121[12 /*60*/].f_9 = 11;
	Local_3121[12 /*60*/].f_26[0 /*3*/] = { -2283.55f, 303.3f, 183.61f };
	Local_3121[12 /*60*/].f_57 = { -2285.838f, 304.1011f, 183.6017f };
	Local_3121[12 /*60*/].f_10[13] = 1;
	Local_3121[13 /*60*/] = { -2282.465f, 302.2556f, 183.6013f };
	Local_3121[13 /*60*/].f_3 = { -2266.702f, 265.9282f, 188.6663f };
	Local_3121[13 /*60*/].f_6 = 11.4375f;
	Local_3121[13 /*60*/].f_7 = 14;
	Local_3121[13 /*60*/].f_8 = -1;
	Local_3121[13 /*60*/].f_9 = 12;
	Local_3121[13 /*60*/].f_26[0 /*3*/] = { -2279.45f, 294.07f, 183.61f };
	Local_3121[13 /*60*/].f_26[1 /*3*/] = { -2275.39f, 284.87f, 183.62f };
	Local_3121[13 /*60*/].f_26[2 /*3*/] = { -2271.29f, 275.81f, 183.61f };
	Local_3121[13 /*60*/].f_57 = { -2271.283f, 266.7107f, 183.6017f };
	Local_3121[13 /*60*/].f_10[14] = 1;
	Local_3121[14 /*60*/] = { -2271.872f, 263.7907f, 183.6171f };
	Local_3121[14 /*60*/].f_3 = { -2288.755f, 256.4018f, 188.6687f };
	Local_3121[14 /*60*/].f_6 = 11.4375f;
	Local_3121[14 /*60*/].f_7 = -1;
	Local_3121[14 /*60*/].f_8 = -1;
	Local_3121[14 /*60*/].f_9 = 13;
	Local_3121[14 /*60*/].f_57 = { -2287.734f, 261.9569f, 183.6017f };
	Local_3121[6 /*60*/] = { -2210.675f, 218.9953f, 173.6019f };
	Local_3121[6 /*60*/].f_3 = { -2192.229f, 227.3096f, 188.9142f };
	Local_3121[6 /*60*/].f_6 = 17.125f;
	Local_3121[6 /*60*/].f_7 = 0;
	Local_3121[6 /*60*/].f_8 = -1;
	Local_3121[6 /*60*/].f_9 = 7;
	Local_3121[6 /*60*/].f_10[0] = 1;
	Local_3121[6 /*60*/].f_26[0 /*3*/] = { -2203.486f, 217.9068f, 183.6019f };
	Local_3121[6 /*60*/].f_26[1 /*3*/] = { -2202.07f, 223.1243f, 181.3021f };
	Local_3121[6 /*60*/].f_26[2 /*3*/] = { -2206.487f, 221.1523f, 178.6019f };
	Local_3121[6 /*60*/].f_26[3 /*3*/] = { -2202.189f, 223.0681f, 176.302f };
	Local_3121[6 /*60*/].f_57 = { Local_3121[6 /*60*/].f_26[3 /*3*/] };
	Local_3121[0 /*60*/] = { -2180.863f, 223.9294f, 176.6021f };
	Local_3121[0 /*60*/].f_3 = { -2248.43f, 193.0931f, 173.602f };
	Local_3121[0 /*60*/].f_6 = 66.75f;
	Local_3121[0 /*60*/].f_7 = 1;
	Local_3121[0 /*60*/].f_8 = -1;
	Local_3121[0 /*60*/].f_9 = 6;
	Local_3121[0 /*60*/].f_10[1] = 1;
	Local_3121[0 /*60*/].f_10[8] = 1;
	Local_3121[0 /*60*/].f_26[0 /*3*/] = { -2209.003f, 238.6103f, 173.6018f };
	Local_3121[0 /*60*/].f_26[1 /*3*/] = { -2216.782f, 241.4975f, 173.6018f };
	Local_3121[0 /*60*/].f_57 = { Local_3121[0 /*60*/].f_26[1 /*3*/] };
	Local_3121[1 /*60*/] = { -2241.286f, 278.5793f, 173.6019f };
	Local_3121[1 /*60*/].f_3 = { -2224.195f, 240.8342f, 176.6019f };
	Local_3121[1 /*60*/].f_6 = 25.5f;
	Local_3121[1 /*60*/].f_7 = 2;
	Local_3121[1 /*60*/].f_8 = -1;
	Local_3121[1 /*60*/].f_9 = 0;
	Local_3121[1 /*60*/].f_10[2] = 1;
	Local_3121[1 /*60*/].f_10[3] = 1;
	Local_3121[1 /*60*/].f_10[10] = 1;
	Local_3121[1 /*60*/].f_10[11] = 1;
	Local_3121[1 /*60*/].f_10[13] = 1;
	Local_3121[1 /*60*/].f_26[0 /*3*/] = { -2219.41f, 247.1894f, 173.6018f };
	Local_3121[1 /*60*/].f_26[1 /*3*/] = { -2221.771f, 252.4771f, 173.6018f };
	Local_3121[1 /*60*/].f_26[2 /*3*/] = { -2228.569f, 245.2584f, 173.6018f };
	Local_3121[1 /*60*/].f_26[3 /*3*/] = { -2228.444f, 252.7509f, 173.6018f };
	Local_3121[1 /*60*/].f_26[4 /*3*/] = { -2223.639f, 258.7863f, 173.6017f };
	Local_3121[1 /*60*/].f_26[5 /*3*/] = { -2226.013f, 264.1177f, 173.6017f };
	Local_3121[1 /*60*/].f_26[6 /*3*/] = { -2228.381f, 269.4354f, 173.6017f };
	Local_3121[1 /*60*/].f_26[7 /*3*/] = { -2246.193f, 272.7435f, 173.6017f };
	Local_3121[1 /*60*/].f_57 = { Local_3121[1 /*60*/].f_26[7 /*3*/] };
	Local_3121[2 /*60*/] = { -2242.791f, 220.908f, 178.6017f };
	Local_3121[2 /*60*/].f_3 = { -2264.221f, 268.3535f, 173.602f };
	Local_3121[2 /*60*/].f_6 = 25f;
	Local_3121[2 /*60*/].f_7 = 3;
	Local_3121[2 /*60*/].f_8 = 4;
	Local_3121[2 /*60*/].f_9 = 1;
	Local_3121[2 /*60*/].f_10[13] = 1;
	Local_3121[2 /*60*/].f_10[14] = 1;
	Local_3121[2 /*60*/].f_10[3] = 1;
	Local_3121[2 /*60*/].f_10[4] = 1;
	Local_3121[2 /*60*/].f_26[0 /*3*/] = { -2255.851f, 255.9058f, 173.6017f };
	Local_3121[2 /*60*/].f_26[1 /*3*/] = { -2267.299f, 259.7054f, 173.6021f };
	Local_3121[2 /*60*/].f_57 = { Local_3121[2 /*60*/].f_26[1 /*3*/] };
	Local_3121[3 /*60*/] = { -2274.664f, 291.7831f, 172.352f };
	Local_3121[3 /*60*/].f_3 = { -2264.221f, 268.3535f, 178.602f };
	Local_3121[3 /*60*/].f_6 = 25f;
	Local_3121[3 /*60*/].f_7 = -1;
	Local_3121[3 /*60*/].f_8 = -1;
	Local_3121[3 /*60*/].f_9 = 2;
	Local_3121[3 /*60*/].f_26[0 /*3*/] = { -2264.801f, 278.0986f, 173.6032f };
	Local_3121[3 /*60*/].f_26[1 /*3*/] = { -2270.284f, 275.5808f, 173.6021f };
	Local_3121[3 /*60*/].f_26[2 /*3*/] = { -2274.445f, 284.8751f, 173.6021f };
	Local_3121[3 /*60*/].f_26[3 /*3*/] = { -2268.881f, 287.2551f, 173.6021f };
	Local_3121[3 /*60*/].f_26[4 /*3*/] = { -2277.798f, 277.783f, 173.6021f };
	Local_3121[3 /*60*/].f_26[5 /*3*/] = { -2275.407f, 272.4052f, 173.6021f };
	Local_3121[3 /*60*/].f_57 = { Local_3121[3 /*60*/].f_26[5 /*3*/] };
	Local_3121[4 /*60*/] = { -2285.399f, 237.3705f, 166.6022f };
	Local_3121[4 /*60*/].f_3 = { -2255.168f, 251.2272f, 173.6019f };
	Local_3121[4 /*60*/].f_6 = 38.9375f;
	Local_3121[4 /*60*/].f_7 = 5;
	Local_3121[4 /*60*/].f_8 = -1;
	Local_3121[4 /*60*/].f_9 = 2;
	Local_3121[4 /*60*/].f_10[14] = 1;
	Local_3121[4 /*60*/].f_10[5] = 1;
	Local_3121[5 /*60*/] = { -2317.222f, 244.1422f, 157.2895f };
	Local_3121[5 /*60*/].f_3 = { -2325.363f, 262.3133f, 175.1021f };
	Local_3121[5 /*60*/].f_6 = 90f;
	Local_3121[5 /*60*/].f_7 = -1;
	Local_3121[5 /*60*/].f_8 = -1;
	Local_3121[5 /*60*/].f_9 = 4;
	Local_3121[5 /*60*/].f_57 = { -2303.25f, 270.3268f, 168.6017f };
	Local_6244 = { GlobalFunc_3023(-2256.912f, 295.782f, 173.5018f, -2232.675f, 306.8226f, 176.5576f, 40f) };
	Local_6252 = { GlobalFunc_3023(-2261.984f, 293.6109f, 173.5019f, -2279.062f, 285.8461f, 176.6021f, 40f) };
	Local_6068 = { GlobalFunc_3023(-2267.473f, 231.0236f, 193.3613f, -2267.466f, 235.5437f, 196.3299f, 10f) };
	Local_6076 = { GlobalFunc_3023(-2247.692f, 267.8266f, 173.602f, -2249.233f, 271.2729f, 175.5602f, 5.5f) };
	Local_6140 = { GlobalFunc_3023(-2287.471f, 255.3195f, 183.3512f, -2274.367f, 264.8388f, 185.8514f, 9.75f) };
	Local_6060 = { GlobalFunc_3023(-2272.864f, 231.138f, 193.0979f, -2262.119f, 231.0122f, 197.7709f, 11.75f) };
	Local_6084 = { GlobalFunc_3023(-2212.655f, 239.5152f, 183.3549f, -2231.213f, 280.0638f, 187.8541f, 6.5f) };
	Local_6092 = { GlobalFunc_3023(-2222.625f, 278.76f, 187.531f, -2238.568f, 313.4406f, 181.8524f, 31f) };
	Local_6100 = { GlobalFunc_3023(-2249.865f, 322.8681f, 186.1116f, -2288.661f, 306.7536f, 176.2014f, 27.5f) };
	Local_6108 = { GlobalFunc_3023(-2199.787f, 308.829f, 168.6126f, -2176.495f, 256.9217f, 185.8513f, 12.5f) };
	Local_6116 = { GlobalFunc_3023(-2136.137f, 247.6515f, 152.7893f, -2195.889f, 234.701f, 175.8518f, 90f) };
	Local_6124 = { GlobalFunc_3023(-2214.474f, 243.6281f, 183.3549f, -2230.555f, 278.3777f, 186.6041f, 7.25f) };
	Local_6132 = { GlobalFunc_3023(-2201.046f, 181.6095f, 168.0572f, -2294.546f, 385.6551f, 175.7166f, 100f) };
	Local_6148 = { GlobalFunc_3023(-2174.45f, 193.3434f, 178.3997f, -2272.16f, 235.8909f, 215.4857f, 82.25f) };
	Local_6156 = { GlobalFunc_3023(-2204.965f, 183.0934f, 178.3518f, -2294.659f, 374.7413f, 137.6015f, 198.25f) };
	Local_6164 = { GlobalFunc_3023(-2263.993f, 226.0267f, 196.8614f, -2263.916f, 220.8796f, 193.1116f, 3f) };
	Local_6172 = { GlobalFunc_3023(-2267.551f, 194.6005f, 166.1117f, -2273.163f, 206.8301f, 171.8617f, 12.75f) };
	Local_6180 = { GlobalFunc_3023(-2275.641f, 227.1461f, 166.102f, -2276.584f, 233.5246f, 171.852f, 23.75f) };
	Local_6188 = { GlobalFunc_3023(-2272.636f, 223.8662f, 184.9848f, -2270.082f, 223.8311f, 189.0517f, 4f) };
	Local_6196 = { GlobalFunc_3023(-2241.806f, 181.1541f, 173.3518f, -2244.913f, 188.4616f, 176.3648f, 16.75f) };
	Local_6220 = { GlobalFunc_3023(-2237.575f, 261.9747f, 173.352f, -2246.958f, 281.1663f, 176.352f, 28.75f) };
	Local_6228 = { GlobalFunc_3023(-2252.554f, 258.3276f, 173.352f, -2260.778f, 276.9703f, 176.3532f, 28.75f) };
	Local_6204 = { GlobalFunc_3023(-2253.704f, 261.3861f, 173.102f, -2268.844f, 293.8057f, 176.1021f, 30f) };
	Local_6212 = { GlobalFunc_3023(-2233.56f, 265.31f, 173.102f, -2253.279f, 308.4304f, 176.102f, 40f) };
	Local_6236 = { GlobalFunc_3023(-2245.667f, 263.8048f, 173.352f, -2249.81f, 273.2847f, 176.2416f, 21.25f) };
	iLocal_114 = 0;
	iLocal_6339 = 0;
	Local_6260[0 /*3*/] = { -2213.157f, 296.4637f, 172.2146f };
	Local_6260[1 /*3*/] = { -2199.991f, 302.0235f, 168.6021f };
	Local_6260[2 /*3*/] = { -2194.555f, 296.7142f, 168.6021f };
	Local_6260[3 /*3*/] = { -2232.494f, 329.487f, 173.602f };
	Local_6260[4 /*3*/] = { -2227.028f, 339.8955f, 173.602f };
	Local_6260[5 /*3*/] = { -2247.103f, 361.4708f, 173.6017f };
	Local_6279[0 /*3*/] = { -2291.259f, 273.2478f, 168.6018f };
	Local_6279[1 /*3*/] = { -2300.879f, 272.5309f, 168.6018f };
	Local_6279[2 /*3*/] = { -2292.928f, 275.4731f, 168.6002f };
	Local_6279[3 /*3*/] = { -2286.208f, 266.1018f, 168.6018f };
	Local_6279[4 /*3*/] = { -2290.035f, 263.4608f, 168.6018f };
	Local_6279[5 /*3*/] = { -2287.389f, 262.1484f, 168.6018f };
	func_860(&(Local_4079[0 /*4*/]), -2178.505f, 229.8301f, 183.6019f, 120f);
	func_860(&(Local_4079[1 /*4*/]), -2201.846f, 224.8548f, 181.1118f, 22.63f);
	func_860(&(Local_4079[2 /*4*/]), -2214.799f, 236.5397f, 173.6018f, 30f);
	func_860(&(Local_4079[3 /*4*/]), -2248.586f, 270.7738f, 173.602f, 30f);
	func_860(&(Local_4079[4 /*4*/]), -2265.409f, 276.9197f, 173.6027f, 30f);
	func_860(&(Local_4079[5 /*4*/]), -2260.698f, 317.4653f, 173.602f, 344.7188f);
	func_860(&Local_4104, -2262.478f, 235.2824f, 193.6113f, 320.1852f);
	func_652(&(Local_6372[0 /*7*/]), -2183.288f, 243.9578f, 183.6019f, 118.93f, 1, 1, 6, 1);
	func_652(&(Local_6372[1 /*7*/]), -2183.509f, 243.2691f, 183.6019f, 22.93f, 0, 1, 5, 1);
	func_652(&Local_6394, -2218.972f, 247.2566f, 183.6041f, 23.4404f, 3, 1, 2, 0);
	func_652(&Local_6408, -2249.855f, 270.121f, 173.602f, 23f, 2, 0, 1, 1);
	func_652(&Local_6415, -2248.481f, 270.7528f, 173.602f, 23.4404f, 2, 0, 1, 1);
	func_652(&Local_6422, -2246.739f, 271.6071f, 173.602f, 23f, 2, 0, 1, 1);
	func_652(&Local_6387, -2156.883f, 234.3567f, 183.6019f, 112.6611f, 3, 0, 1, 1);
	func_652(&Local_6429, -2295.68f, 264.06f, 168.6018f, 24f, 1, 2, 6, 1);
	func_652(&Local_6443, -2268.972f, 235.2717f, 193.6114f, 357f, 1, 0, 4, 1);
	func_652(&Local_6401, -2214.799f, 236.5397f, 173.6018f, 23f, 3, 1, 4, 1);
	bLocal_3037 = false;
	iLocal_6338 = 0;
	iLocal_4047 = 0;
	Local_5983[0 /*25*/] = { Local_5983[0 /*25*/] };
	MISC::ENABLE_DISPATCH_SERVICE(5, 0);
	MISC::ENABLE_DISPATCH_SERVICE(3, 0);
	func_839();
	GlobalFunc_4493(&(Local_1920[0 /*8*/]), 0, 0, 1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	PED::SET_CREATE_RANDOM_COPS(0);
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(GlobalFunc_4931(0, 0), 1);
	GlobalFunc_601(0, 1);
	GlobalFunc_601(2, 1);
	GlobalFunc_601(20, 1);
	iLocal_113 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-2242.038f, 182.101f, 173.969f, 17.3f, 20f, 8f, GlobalFunc_723(23f), 0, 7);
	if (iLocal_3030 != 0)
	{
		func_13(1);
	}
	func_693(1);
	func_700(1);
	func_697(1);
	GlobalFunc_173(&uLocal_115, 0, func_28(), "Michael", 0, 1);
	Global_97297 = 1;
}

void func_839()//Position - 0x773BD
{
	GlobalFunc_4498(&(Local_1920[0 /*8*/]), 496607/*func_858*/, "Fake interior");
	GlobalFunc_4498(&(Local_1920[2 /*8*/]), 495150/*func_853*/, "Spatial Data");
	GlobalFunc_4498(&(Local_1920[10 /*8*/]), 492791/*func_852*/, "[SO] Parking lot");
	GlobalFunc_4498(&(Local_1920[11 /*8*/]), 492184/*func_851*/, "[VEH] Parking lot");
	GlobalFunc_4498(&(Local_1920[12 /*8*/]), 491752/*func_850*/, "Spawn esc vehs");
	GlobalFunc_4498(&(Local_1920[13 /*8*/]), 490445/*func_845*/, "[VEH] MW Heli 2");
	GlobalFunc_4498(&(Local_1920[14 /*8*/]), 488534/*func_840*/, "[VEH] MW Heli 3");
}

void func_840(var uParam0)//Position - 0x77456
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	
	func_844();
	if (iLocal_7055)
	{
		if (((!ENTITY::DOES_ENTITY_EXIST(Local_1744[3 /*7*/]) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1744[3 /*7*/], 0)) || ENTITY::IS_ENTITY_DEAD(Local_1744[3 /*7*/])) || PED::IS_PED_INJURED(Local_318[53 /*25*/]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_1744[3 /*7*/]))
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_1744[3 /*7*/], 0);
			}
			AUDIO::STOP_AUDIO_SCENE("MI_3_ESCAPE_HELICOPTER_ATTACK");
			GlobalFunc_553(440);
			GlobalFunc_565(440, 1, 0);
			uParam0->f_1 = -1;
			GlobalFunc_4496(uParam0);
		}
	}
	switch (iLocal_3120)
	{
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2337.808f, 350.5306f, 172.1479f, -2350.546f, 379.2423f, 178.5014f, 24.9375f, 0, 1, 0))
			{
				iLocal_3120++;
			}
			if (GlobalFunc_8315() == 0 || (GlobalFunc_8315() == 2 && Global_89962.f_12[1] == 1))
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2345.214f, 312.3802f, 150.102f, -2277.426f, 159.5906f, 185.9954f, 90f, 0, 1, 0))
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2345.214f, 312.3802f, 150.102f, -2277.426f, 159.5906f, 185.9954f, 90f, 0, 1, 0))
					{
						iLocal_7054 = 0;
					}
					iLocal_3120++;
				}
			}
			break;
		
		case 2:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2289.228f, 438.3548f, 173.3976f, -2323.086f, 440.3806f, 178.7062f, 27.25f, 0, 1, 0))
			{
				iLocal_3120++;
			}
			break;
	}
	switch (uParam0->f_1)
	{
		case 1:
			GlobalFunc_718(&uLocal_2049, iLocal_67);
			func_567(&uLocal_2049, 12, &cLocal_76);
			Var1 = { Vector(157.5554f, 470.2218f, -2239.66f) - Vector(27.4375f, 108.875f, 115.9375f) };
			Var4 = { Vector(157.5554f, 470.2218f, -2239.66f) + Vector(27.4375f, 108.875f, 115.9375f) };
			PATHFIND::SET_ROADS_IN_AREA(Var1, Var4, 0, 1);
			MISC::CLEAR_AREA_OF_VEHICLES(-2239.66f, 470.2218f, 157.5554f, 115f, 0, 0, 0, 0, 0);
			iLocal_7054 = 1;
			iLocal_3120 = 1;
			uParam0->f_1++;
			break;
		
		case 2:
			if ((iLocal_3120 > 1 && STREAMING::HAS_MODEL_LOADED(iLocal_67)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(12, &cLocal_76))
			{
				Local_1744[3 /*7*/] = VEHICLE::CREATE_VEHICLE(iLocal_67, -2232.103f, 418.31f, 165.3925f, 65.8194f, 1, 1);
				func_657(&(Local_318[53 /*25*/]), iLocal_63, &(Local_1744[3 /*7*/]), -1, "HELI_3_DRIVER_0", iLocal_312, joaat("weapon_unarmed"), 100, 0, 0, 0);
				iLocal_7055 = 1;
				func_655(&(Local_1744[3 /*7*/].f_1), Local_1744[3 /*7*/], 1);
				AUDIO::START_AUDIO_SCENE("MI_3_ESCAPE_HELICOPTER_ATTACK");
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_1744[3 /*7*/], "MI_3_HELICOPTER_01", 0);
				PED::SET_PED_ACCURACY(Local_318[53 /*25*/], 1);
				PED::SET_PED_SHOOT_RATE(Local_318[53 /*25*/], 50);
				PED::SET_PED_FIRING_PATTERN(Local_318[53 /*25*/], -957453492);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1744[3 /*7*/], 12, &cLocal_76, 1);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1744[3 /*7*/], 500f);
				VEHICLE::SET_PLAYBACK_SPEED(Local_1744[3 /*7*/], 1.5f);
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_1744[3 /*7*/]);
				GlobalFunc_5174(&uLocal_2049, iLocal_67);
				iLocal_7045 = 3;
				uParam0->f_1++;
			}
			break;
		
		case 3:
			if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1744[3 /*7*/]) || iLocal_3120 > 2)
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1744[3 /*7*/]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1744[3 /*7*/]);
				}
				TASK::TASK_HELI_MISSION(Local_318[53 /*25*/], Local_1744[3 /*7*/], 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 6, 50f, 30f, -1f, 5, 5, -1082130432, 0);
				uParam0->f_2 = 1000;
				uParam0->f_1++;
			}
			break;
		
		case 4:
			if (!iLocal_7054)
			{
				if (GlobalFunc_234(Local_1744[3 /*7*/]))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1744[3 /*7*/], 1)) <= 10000f)
					{
						iLocal_7054 = 1;
					}
				}
			}
			if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_97, 1) <= 450f || (iLocal_7054 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1744[3 /*7*/], 1)) >= 28900f))
			{
				uParam0->f_1++;
			}
			break;
		
		case 5:
			if (GlobalFunc_234(Local_1744[3 /*7*/]))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1744[3 /*7*/], 1)) >= 28900f)
				{
					if (GlobalFunc_234(Local_1744[3 /*7*/]) && GlobalFunc_234(Local_318[53 /*25*/]))
					{
						PED::SET_PED_KEEP_TASK(Local_318[53 /*25*/], 1);
						TASK::TASK_HELI_MISSION(Local_318[53 /*25*/], Local_1744[3 /*7*/], 0, 0, -4445.606f, -2004.295f, 157.0255f, 4, 80f, 20f, -1f, 530, 100, -1082130432, 0);
					}
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_318[53 /*25*/]));
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1744[3 /*7*/]));
					GlobalFunc_703(&(Local_1744[3 /*7*/].f_1));
					GlobalFunc_4496(uParam0);
				}
			}
			break;
	}
	if ((uParam0->f_1 > 3 && GlobalFunc_234(Local_1744[3 /*7*/])) && GlobalFunc_234(Local_318[53 /*25*/]))
	{
		if ((MISC::GET_GAME_TIMER() - uParam0->f_2) >= 1000)
		{
			fVar0 = GlobalFunc_253((ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) * 3f), 40f, 999f);
			Var7 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (GlobalFunc_234(Local_1744[3 /*7*/]) && GlobalFunc_234(Local_318[53 /*25*/]))
			{
				TASK::TASK_HELI_MISSION(Local_318[53 /*25*/], Local_1744[3 /*7*/], 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 6, fVar0, 30f, -1f, SYSTEM::ROUND(Var7.f_2) + 40, 15, -1082130432, 0);
			}
			uParam0->f_2 = MISC::GET_GAME_TIMER();
		}
	}
	if (GlobalFunc_4497(uParam0))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_318[53 /*25*/]));
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1744[3 /*7*/]));
		GlobalFunc_5174(&uLocal_2049, iLocal_67);
		GlobalFunc_5174(&uLocal_2049, iLocal_63);
		iLocal_7053 = 1;
		iLocal_7051 = 0;
		GlobalFunc_7777(&uLocal_7070);
		AUDIO::TRIGGER_MUSIC_EVENT("MIC3_MEET");
	}
}




void func_844()//Position - 0x77B2F
{
	int iVar0;
	
	if (GlobalFunc_234(PLAYER::PLAYER_PED_ID()) && GlobalFunc_234(Local_318[53 /*25*/]))
	{
		if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) <= 25f)
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Local_318[53 /*25*/], &iVar0))
			{
				if (iVar0 != joaat("vehicle_weapon_player_buzzard"))
				{
					WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_318[53 /*25*/], joaat("vehicle_weapon_player_buzzard"));
				}
			}
		}
		else if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 25f)
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Local_318[53 /*25*/], &iVar0))
			{
				if (iVar0 != joaat("vehicle_weapon_space_rocket"))
				{
					WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_318[53 /*25*/], joaat("vehicle_weapon_space_rocket"));
				}
			}
		}
	}
}

void func_845(var uParam0)//Position - 0x77BCD
{
	float fVar0;
	float fVar1;
	
	if (bLocal_6924)
	{
		if (iLocal_6926)
		{
			func_848();
		}
	}
	if (uParam0->f_1 == 1)
	{
		GlobalFunc_718(&uLocal_2049, iLocal_63);
		GlobalFunc_718(&uLocal_2049, iLocal_67);
		func_567(&uLocal_2049, 4, &cLocal_76);
		if (((STREAMING::HAS_MODEL_LOADED(iLocal_63) && STREAMING::HAS_MODEL_LOADED(iLocal_67)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, &cLocal_76)) && GlobalFunc_5980(&Local_6772, func_28()))
		{
			Local_1744[2 /*7*/] = VEHICLE::CREATE_VEHICLE(iLocal_67, -2140.153f, 57.7755f, 149.4462f, 0f, 1, 1);
			func_657(&(Local_318[52 /*25*/]), iLocal_63, &(Local_1744[2 /*7*/]), -1, "MW_HELI_2", iLocal_312, joaat("weapon_unarmed"), 5, 0, 0, 0);
			func_655(&(Local_1744[2 /*7*/].f_1), Local_1744[2 /*7*/], 1);
			PED::SET_PED_SHOOT_RATE(Local_318[52 /*25*/], 100);
			PED::SET_PED_FIRING_PATTERN(Local_318[52 /*25*/], -1857128337);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1744[2 /*7*/], 4, &cLocal_76, 1);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1744[2 /*7*/], 4000f);
			uParam0->f_1++;
		}
	}
	else if (uParam0->f_1 > 1)
	{
		if (!iLocal_6746)
		{
			if (!GlobalFunc_234(Local_1744[2 /*7*/]) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1744[2 /*7*/], 0))
			{
				GlobalFunc_6877(&uLocal_6934);
				iLocal_6745 = 4;
				iLocal_6746 = 1;
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1744[2 /*7*/], 0) && !PED::IS_PED_INJURED(Local_318[52 /*25*/]))
		{
			switch (uParam0->f_1)
			{
				case 2:
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1744[2 /*7*/]))
					{
						fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1744[2 /*7*/]);
						if (fVar0 >= 13327f)
						{
							iLocal_6926 = 1;
							uParam0->f_1++;
						}
					}
					else
					{
						uParam0->f_1++;
					}
					break;
				
				case 3:
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1744[2 /*7*/]))
					{
						fVar1 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1744[2 /*7*/]);
						if (fVar1 >= 22000f)
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1744[2 /*7*/]);
							PED::SET_PED_FIRING_PATTERN(Local_318[52 /*25*/], -1857128337);
							iLocal_6744 = MISC::GET_GAME_TIMER() + 5000;
							uParam0->f_1++;
						}
					}
					else
					{
						iLocal_6744 = MISC::GET_GAME_TIMER() + 5000;
						uParam0->f_1++;
					}
					break;
				
				case 4:
					if (!GlobalFunc_709(Local_318[52 /*25*/], -1273030092, 1) || (MISC::GET_GAME_TIMER() - Local_318[52 /*25*/].f_9) > 1000)
					{
						TASK::TASK_HELI_MISSION(Local_318[52 /*25*/], Local_1744[2 /*7*/], 0, 0, -2267.362f, 313.1219f, 197.7129f, 4, 3f, 0.1f, GlobalFunc_5821(Local_1744[2 /*7*/], func_28(), 1), 197, 10, -1082130432, 0);
						uParam0->f_1++;
					}
					break;
				
				case 5:
					if (MISC::GET_GAME_TIMER() > iLocal_6744)
					{
						if (GlobalFunc_709(Local_318[52 /*25*/], -1273030092, 1))
						{
							TASK::TASK_DRIVE_BY(Local_318[52 /*25*/], func_28(), 0, 0f, 0f, 0f, 5000f, 100, 1, -1857128337);
							Local_318[52 /*25*/].f_9 = MISC::GET_GAME_TIMER();
							uParam0->f_1 = (uParam0->f_1 - 1);
						}
					}
					break;
			}
		}
		else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1744[2 /*7*/], 0) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1744[2 /*7*/]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1744[2 /*7*/]);
		}
	}
}



void func_848()//Position - 0x77F93
{
	int iVar0;
	
	switch (iLocal_6745)
	{
		case 0:
			iLocal_6931 = func_849();
			if (GlobalFunc_234(iLocal_6931))
			{
				GlobalFunc_173(&uLocal_115, 5, iLocal_6931, "MIC3FIB4", 0, 1);
				iLocal_6745 = 1;
			}
			else
			{
				iLocal_6745 = 2;
			}
			break;
		
		case 1:
			if (GlobalFunc_234(iLocal_6931))
			{
				if (func_461("M3_HELI"))
				{
					iLocal_6745 = 2;
				}
			}
			else
			{
				iLocal_6745 = 2;
			}
			break;
		
		case 2:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			if (iVar0 == 0)
			{
				if (func_461("M3_CHOPPER"))
				{
					iLocal_6745 = 3;
				}
			}
			break;
		
		case 3:
			if (func_461("M3_TAKEOUT"))
			{
				iLocal_6745 = 20;
			}
			break;
		
		case 4:
			if (GlobalFunc_5182(&uLocal_6934) >= 2.5f)
			{
				iLocal_6745 = 20;
			}
			if (GlobalFunc_8315() == 2)
			{
				if (func_461("M3_HELI2T"))
				{
					iLocal_6745 = 20;
				}
			}
			else if (GlobalFunc_8315() == 0)
			{
				if (func_461("M3_HELI2M"))
				{
					iLocal_6745 = 20;
				}
			}
			break;
	}
}

int func_849()//Position - 0x7809A
{
	int iVar0;
	
	iVar0 = func_746(&Local_5273);
	if (GlobalFunc_234(iVar0))
	{
		return iVar0;
	}
	iVar0 = func_746(&Local_4664);
	if (GlobalFunc_234(iVar0))
	{
		return iVar0;
	}
	iVar0 = func_746(&Local_4740);
	if (GlobalFunc_234(iVar0))
	{
		return iVar0;
	}
	return 0;
}

void func_850(var uParam0)//Position - 0x780E8
{
	switch (uParam0->f_1)
	{
		case 1:
			GlobalFunc_718(&uLocal_2049, joaat("dominator"));
			GlobalFunc_718(&uLocal_2049, joaat("carbonizzare"));
			GlobalFunc_718(&uLocal_2049, joaat("vacca"));
			uParam0->f_1++;
			break;
		
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1744[8 /*7*/]) && STREAMING::HAS_MODEL_LOADED(joaat("vacca")))
			{
				Local_1744[8 /*7*/] = VEHICLE::CREATE_VEHICLE(joaat("vacca"), -2296.198f, 415.6821f, 173.4666f, 342.8948f, 1, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1744[9 /*7*/]) && STREAMING::HAS_MODEL_LOADED(joaat("dominator")))
			{
				Local_1744[9 /*7*/] = VEHICLE::CREATE_VEHICLE(joaat("dominator"), -2332.365f, 349.8775f, 171.7965f, 25.3173f, 1, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1744[10 /*7*/]) && STREAMING::HAS_MODEL_LOADED(joaat("carbonizzare")))
			{
				Local_1744[10 /*7*/] = VEHICLE::CREATE_VEHICLE(joaat("carbonizzare"), -2319.798f, 302.1291f, 168.4667f, 115.6683f, 1, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1744[11 /*7*/]) && STREAMING::HAS_MODEL_LOADED(joaat("dominator")))
			{
				Local_1744[11 /*7*/] = VEHICLE::CREATE_VEHICLE(joaat("dominator"), -2289.52f, 412.0399f, 173.467f, 324.3684f, 1, 1);
			}
			if (((ENTITY::DOES_ENTITY_EXIST(Local_1744[8 /*7*/]) && ENTITY::DOES_ENTITY_EXIST(Local_1744[9 /*7*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1744[10 /*7*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1744[11 /*7*/]))
			{
				GlobalFunc_5174(&uLocal_2049, joaat("vacca"));
				GlobalFunc_4496(uParam0);
			}
			break;
	}
}

void func_851(var uParam0)//Position - 0x78298
{
	switch (uParam0->f_1)
	{
		case 1:
			GlobalFunc_718(&uLocal_2049, iLocal_63);
			GlobalFunc_718(&uLocal_2049, iLocal_70);
			func_567(&uLocal_2049, 7, &cLocal_76);
			uParam0->f_1++;
			break;
		
		case 2:
			if ((VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(7, &cLocal_76) && STREAMING::HAS_MODEL_LOADED(iLocal_63)) && STREAMING::HAS_MODEL_LOADED(iLocal_70))
			{
				Local_1744[6 /*7*/] = VEHICLE::CREATE_VEHICLE(iLocal_70, -2327.464f, 379.8782f, 173.4668f, 115.3375f, 1, 1);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_1744[6 /*7*/], 0);
				func_657(&(Local_318[55 /*25*/]), iLocal_63, &(Local_1744[6 /*7*/]), -1, "MW_JEEP_2_0", iLocal_312, iLocal_72, 2, 0, 0, 0);
				func_657(&(Local_318[56 /*25*/]), iLocal_63, &(Local_1744[6 /*7*/]), 0, "MW_JEEP_2_1", iLocal_312, iLocal_72, 2, 0, 0, 0);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1744[6 /*7*/], 7, &cLocal_76, 1);
				func_655(&(Local_1744[6 /*7*/].f_1), Local_1744[6 /*7*/], 1);
				func_650(&(Local_318[55 /*25*/]));
				func_650(&(Local_318[56 /*25*/]));
				uParam0->f_1++;
			}
			break;
		
		case 3:
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1744[6 /*7*/]) && PED::IS_PED_INJURED(Local_318[55 /*25*/]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1744[6 /*7*/]);
			}
			if (((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1744[6 /*7*/]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1744[6 /*7*/]) > 2500f) || !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1744[6 /*7*/])) && GlobalFunc_644(Local_1744[6 /*7*/]))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1744[6 /*7*/]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1744[6 /*7*/]);
				}
				if (!PED::IS_PED_INJURED(Local_318[55 /*25*/]))
				{
					func_670(&(Local_318[55 /*25*/]), -2322.735f, 279.5136f, 168.4667f, 5f, 1, 1, 1, 1, 1f, 0f, 1, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_318[55 /*25*/], 1, 0);
					TASK::TASK_COMBAT_PED(Local_318[55 /*25*/], func_28(), 0, 16);
				}
				if (!PED::IS_PED_INJURED(Local_318[56 /*25*/]))
				{
					func_670(&(Local_318[56 /*25*/]), -2309.564f, 274.7106f, 168.583f, 5f, 1, 1, 1, 1, 1f, 0f, 1, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_318[56 /*25*/], 1, 0);
					TASK::TASK_COMBAT_PED(Local_318[56 /*25*/], func_28(), 0, 16);
				}
				GlobalFunc_703(&(Local_1744[6 /*7*/].f_1));
				uParam0->f_1++;
			}
			break;
	}
}

void func_852(var uParam0)//Position - 0x784F7
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (uParam0->f_1)
	{
		case 1:
			GlobalFunc_718(&uLocal_2049, iLocal_63);
			GlobalFunc_718(&uLocal_2049, iLocal_70);
			GlobalFunc_718(&uLocal_2049, iLocal_71);
			if ((STREAMING::HAS_MODEL_LOADED(iLocal_70) && STREAMING::HAS_MODEL_LOADED(iLocal_71)) && STREAMING::HAS_MODEL_LOADED(iLocal_63))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_1744[5 /*7*/]) && !ENTITY::DOES_ENTITY_EXIST(Local_1744[7 /*7*/]))
				{
					Local_1744[5 /*7*/] = VEHICLE::CREATE_VEHICLE(iLocal_70, -2322.515f, 277.3885f, 168.4671f, 310.9978f, 1, 1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1744[5 /*7*/]);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_1744[5 /*7*/], 0);
					Local_1744[7 /*7*/] = VEHICLE::CREATE_VEHICLE(iLocal_71, -2326.504f, 290.7654f, 168.4671f, 5.9051f, 1, 1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1744[7 /*7*/]);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_1744[7 /*7*/], 0);
					VEHICLE::SET_VEHICLE_MOD_KIT(Local_1744[7 /*7*/], 0);
					VEHICLE::SET_VEHICLE_WINDOW_TINT(Local_1744[7 /*7*/], 1);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_1744[7 /*7*/], 0);
					func_628(&(Local_318[46 /*25*/]), iLocal_63, -2323.112f, 280.3249f, 168.4671f, 225.484f, "PL_1_MW_1", iLocal_312, iLocal_72, 1, 0, 0, 0);
					func_670(&(Local_318[46 /*25*/]), -2307.387f, 269.818f, 168.6018f, 1.5f, 1, 2, 1, 1, 1f, 0f, 1, 1);
					PED::SET_PED_TO_LOAD_COVER(Local_318[46 /*25*/], 1);
					func_628(&(Local_318[47 /*25*/]), iLocal_63, -2326.368f, 293.5865f, 168.4667f, 225.8272f, "PL_VAN_MW_2", iLocal_312, iLocal_72, 1, 0, 0, 0);
					func_670(&(Local_318[47 /*25*/]), ENTITY::GET_ENTITY_COORDS(Local_1744[7 /*7*/], 1), 5f, 1, 2, 1, 1, 1f, 0f, 1, 1);
					func_628(&(Local_318[48 /*25*/]), iLocal_63, -2317.201f, 271.0336f, 168.6018f, 204.3616f, "PL_1_MW_3", iLocal_312, iLocal_72, 1, 0, 0, 0);
					func_670(&(Local_318[48 /*25*/]), -2317.201f, 271.0336f, 168.6018f, 1.5f, 1, 2, 1, 1, 1f, 0f, 1, 1);
					func_758(&(Local_318[48 /*25*/]), -2317.11f, 271.0735f, 168.6018f, 207.7751f, 3, 2, 1);
					func_628(&(Local_318[49 /*25*/]), iLocal_63, -2318.436f, 258.3358f, 174.2022f, 330f, "PL_VAN_MW_4", iLocal_312, iLocal_75, 2, 0, 0, 0);
					PED::REMOVE_PED_DEFENSIVE_AREA(Local_318[49 /*25*/], 0);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_318[49 /*25*/], -2311.74f, 253.5907f, 169.6323f, 2.5f, 1, 0);
					PED::SET_PED_COMBAT_MOVEMENT(Local_318[49 /*25*/], 1);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_318[49 /*25*/], 200f, 0);
					func_628(&(Local_318[50 /*25*/]), iLocal_63, -2304.398f, 295.1746f, 173.9057f, 203f, "PL_VAN_MW_5", iLocal_312, iLocal_75, 1, 0, 0, 0);
					func_670(&(Local_318[50 /*25*/]), -2307.196f, 290.0558f, 173.612f, 2f, 1, 2, 1, 0, 1f, 0f, 1, 1);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_318[50 /*25*/], 2.5f, 0);
					PED::SET_PED_ACCURACY(Local_318[49 /*25*/], 1);
					PED::SET_PED_ACCURACY(Local_318[50 /*25*/], 1);
					func_650(&(Local_318[46 /*25*/]));
					func_650(&(Local_318[47 /*25*/]));
					func_650(&(Local_318[48 /*25*/]));
					func_650(&(Local_318[49 /*25*/]));
					func_650(&(Local_318[50 /*25*/]));
					uParam0->f_1++;
				}
			}
			break;
		
		case 2:
			if (!GlobalFunc_709(Local_318[46 /*25*/], -1959848946, 1))
			{
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_318[46 /*25*/], -2322.218f, 279.8415f, 168.4671f, -1, 0, 0f, 1, 1, 0, 0);
			}
			if (!GlobalFunc_709(Local_318[48 /*25*/], -1959848946, 1))
			{
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_318[48 /*25*/], -2317.201f, 271.0336f, 168.6018f, -1, 0, 0f, 1, 1, Local_318[48 /*25*/].f_1, 0);
			}
			if (!GlobalFunc_709(Local_318[47 /*25*/], 1237250926, 1))
			{
				TASK::TASK_AIM_GUN_AT_COORD(Local_318[47 /*25*/], -2297.891f, 264.5915f, 170.2512f, -1, 1, 0);
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2276.974f, 274.8876f, 168.6021f, -2288.431f, 269.7639f, 177.6643f, 5f, 0, 1, 0))
			{
				iVar0 = 1;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2348.516f, 228.3532f, 166.041f, -2272.678f, 264.014f, 173.9916f, 18.3125f, 0, 1, 0))
			{
				iVar0 = 2;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2318.888f, 259.9997f, 173.6021f, -2316.013f, 253.1499f, 179.502f, 2.9375f, 0, 1, 0))
			{
				iVar0 = 3;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2314.141f, 308.1403f, 177.5393f, -2308.619f, 295.8344f, 184.464f, 4.1875f, 0, 1, 0))
			{
				iVar0 = 4;
			}
			if (iVar0 != 0)
			{
				if (iVar0 == 3 || iVar0 == 4)
				{
					GlobalFunc_4493(&(Local_1920[10 /*8*/]), 0, 0, 1);
				}
				if (iVar0 == 1 || iVar0 == 2)
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_318[46 /*25*/], -2309.932f, 273.4493f, 168.6018f, 3f, 0, 0);
					TASK::TASK_COMBAT_PED(Local_318[46 /*25*/], func_28(), 0, 16);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_318[48 /*25*/], -2304.4f, 261.1549f, 168.6018f, 3f, 0, 0);
					TASK::TASK_COMBAT_PED(Local_318[48 /*25*/], func_28(), 0, 16);
				}
				else if (iVar0 == 3)
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_318[46 /*25*/], -2322.053f, 277.2517f, 168.9323f, 5f, 0, 0);
					TASK::TASK_COMBAT_PED(Local_318[46 /*25*/], func_28(), 0, 16);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_318[48 /*25*/], -2307.808f, 271.6799f, 168.6018f, 3f, 0, 0);
					TASK::TASK_COMBAT_PED(Local_318[48 /*25*/], func_28(), 0, 16);
				}
				else if (iVar0 == 4)
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_318[46 /*25*/], -2322.053f, 277.2517f, 168.9323f, 5f, 0, 0);
					TASK::TASK_COMBAT_PED(Local_318[46 /*25*/], func_28(), 0, 16);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_318[48 /*25*/], -2309.877f, 275.9086f, 168.6018f, 5f, 0, 0);
					TASK::TASK_COMBAT_PED(Local_318[48 /*25*/], func_28(), 0, 16);
				}
				if (iVar0 == 1 || iVar0 == 2)
				{
					if (!PED::IS_PED_INJURED(Local_318[47 /*25*/]))
					{
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_318[47 /*25*/], -2317.114f, 270.7373f, 168.6018f, 3.5f, 0, 0);
						TASK::TASK_COMBAT_PED(Local_318[47 /*25*/], func_28(), 0, 16);
					}
				}
				else if (iVar0 == 3 || iVar0 == 4)
				{
					if (!PED::IS_PED_INJURED(Local_318[47 /*25*/]))
					{
						TASK::TASK_COMBAT_PED(Local_318[47 /*25*/], func_28(), 0, 16);
					}
				}
				uParam0->f_1++;
			}
			else
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2305.681f, 264.703f, 193.6012f, -2329.129f, 317.3896f, 168.4672f, 37f, 0, 1, 0))
				{
					iVar1 = 1;
				}
				if (!PED::IS_PED_INJURED(Local_318[46 /*25*/]))
				{
					if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_318[46 /*25*/], func_28(), 1) || (iVar1 && PED::HAS_PED_RECEIVED_EVENT(Local_318[46 /*25*/], 122))) || PED::HAS_PED_RECEIVED_EVENT(Local_318[46 /*25*/], 124)) || PED::HAS_PED_RECEIVED_EVENT(Local_318[46 /*25*/], 123))
					{
						iVar2 = 1;
					}
				}
				if (!PED::IS_PED_INJURED(Local_318[48 /*25*/]))
				{
					if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_318[48 /*25*/], func_28(), 1) || (iVar1 && PED::HAS_PED_RECEIVED_EVENT(Local_318[48 /*25*/], 122))) || PED::HAS_PED_RECEIVED_EVENT(Local_318[48 /*25*/], 124)) || PED::HAS_PED_RECEIVED_EVENT(Local_318[48 /*25*/], 123))
					{
						iVar2 = 1;
					}
				}
				if (!PED::IS_PED_INJURED(Local_318[47 /*25*/]))
				{
					if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_318[47 /*25*/], func_28(), 1) || (iVar1 && PED::HAS_PED_RECEIVED_EVENT(Local_318[47 /*25*/], 122))) || PED::HAS_PED_RECEIVED_EVENT(Local_318[47 /*25*/], 124)) || PED::HAS_PED_RECEIVED_EVENT(Local_318[47 /*25*/], 123))
					{
						iVar2 = 1;
					}
				}
				if (iVar2 || iLocal_3030 == 8)
				{
					if (!PED::IS_PED_INJURED(Local_318[46 /*25*/]))
					{
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_318[46 /*25*/], -2322.053f, 277.2517f, 168.9323f, 5f, 0, 0);
						TASK::TASK_COMBAT_PED(Local_318[46 /*25*/], func_28(), 0, 16);
					}
					if (!PED::IS_PED_INJURED(Local_318[48 /*25*/]))
					{
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_318[48 /*25*/], -2315.737f, 267.9261f, 167.2268f, 5f, 0, 0);
						TASK::TASK_COMBAT_PED(Local_318[48 /*25*/], func_28(), 0, 16);
					}
					if (!PED::IS_PED_INJURED(Local_318[47 /*25*/]))
					{
						TASK::TASK_COMBAT_PED(Local_318[47 /*25*/], func_28(), 0, 16);
					}
					uParam0->f_1++;
				}
			}
			break;
		
		case 3:
			if ((PED::IS_PED_INJURED(Local_318[46 /*25*/]) && PED::IS_PED_INJURED(Local_318[48 /*25*/])) && PED::IS_PED_INJURED(Local_318[47 /*25*/]))
			{
				GlobalFunc_4496(uParam0);
			}
			break;
	}
}

void func_853(var uParam0)//Position - 0x78E2E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	if (GlobalFunc_713(func_28(), Local_91, 1) > 250f)
	{
		GlobalFunc_4496(uParam0);
	}
	if (!GlobalFunc_4497(uParam0))
	{
		if (iLocal_4025 != -1)
		{
			iLocal_4026 = Local_3121[iLocal_4025 /*60*/].f_7;
			iLocal_4027 = Local_3121[iLocal_4025 /*60*/].f_9;
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_28(), Local_3121[iLocal_4025 /*60*/], Local_3121[iLocal_4025 /*60*/].f_3, Local_3121[iLocal_4025 /*60*/].f_6, 0, 1, 0))
			{
				if (iLocal_4026 != -1 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_28(), Local_3121[iLocal_4026 /*60*/], Local_3121[iLocal_4026 /*60*/].f_3, Local_3121[iLocal_4026 /*60*/].f_6, 0, 1, 0))
				{
					iLocal_4025 = iLocal_4026;
					iLocal_4026 = Local_3121[iLocal_4025 /*60*/].f_7;
					iLocal_4027 = Local_3121[iLocal_4025 /*60*/].f_9;
				}
				else if (iLocal_4027 != -1 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_28(), Local_3121[iLocal_4027 /*60*/], Local_3121[iLocal_4027 /*60*/].f_3, Local_3121[iLocal_4027 /*60*/].f_6, 0, 1, 0))
				{
					iLocal_4025 = iLocal_4027;
					iLocal_4026 = Local_3121[iLocal_4025 /*60*/].f_7;
					iLocal_4027 = Local_3121[iLocal_4025 /*60*/].f_9;
				}
				else
				{
					iVar2 = 1;
				}
				iLocal_4029 = 1;
			}
			else
			{
				iLocal_4029 = 0;
			}
		}
		iLocal_4029 = iLocal_4029;
		if (iVar2 || iLocal_4025 == -1)
		{
			iVar0 = 0;
			while (iVar0 >= 0)
			{
				if (iLocal_4025 == -1 || ((iVar0 != iLocal_4025 && iVar0 != Local_3121[iLocal_4025 /*60*/].f_7) && iVar0 != Local_3121[iLocal_4025 /*60*/].f_9))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_28(), Local_3121[iVar0 /*60*/], Local_3121[iVar0 /*60*/].f_3, Local_3121[iVar0 /*60*/].f_6, 0, 1, 0))
					{
						iLocal_4025 = iVar0;
						iLocal_4026 = Local_3121[iLocal_4025 /*60*/].f_7;
						iLocal_4027 = Local_3121[iLocal_4025 /*60*/].f_9;
						iVar0 = -1;
					}
				}
				if (iVar0 != -1)
				{
					iVar0++;
					if (iVar0 > (15 - 1))
					{
						iLocal_4025 = -1;
						iVar0 = -1;
					}
				}
			}
		}
		if (uParam0->f_1 == 0)
		{
			uParam0->f_1 = 4 + 1;
		}
		iVar3 = 0;
		bVar4 = false;
		while (!bVar4)
		{
			iVar0 = uParam0->f_1;
			if ((ENTITY::DOES_ENTITY_EXIST(Local_318[iVar0 /*25*/]) && !PED::IS_PED_INJURED(Local_318[iVar0 /*25*/])) && ((PED::GET_PED_RELATIONSHIP_GROUP_HASH(Local_318[iVar0 /*25*/]) == iLocal_312 || PED::GET_PED_RELATIONSHIP_GROUP_HASH(Local_318[iVar0 /*25*/]) == iLocal_313) || PED::GET_PED_RELATIONSHIP_GROUP_HASH(Local_318[iVar0 /*25*/]) == iLocal_311))
			{
				if (Local_318[iVar0 /*25*/].f_21 == -1 || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_318[iVar0 /*25*/], Local_3121[Local_318[iVar0 /*25*/].f_21 /*60*/], Local_3121[Local_318[iVar0 /*25*/].f_21 /*60*/].f_3, Local_3121[Local_318[iVar0 /*25*/].f_21 /*60*/].f_6, 0, 1, 0))
				{
					iVar1 = 0;
					while (iVar1 < 15)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_318[iVar0 /*25*/], Local_3121[iVar1 /*60*/], Local_3121[iVar1 /*60*/].f_3, Local_3121[iVar1 /*60*/].f_6, 0, 1, 0))
						{
							Local_318[iVar0 /*25*/].f_21 = iVar1;
							iVar1 = 15;
						}
						else
						{
							iVar1++;
							if (iVar1 >= 15)
							{
								Local_318[iVar0 /*25*/].f_21 = -1;
							}
						}
					}
				}
				else
				{
					iLocal_4030[Local_318[iVar0 /*25*/].f_21] = 1;
				}
				if (ENTITY::DOES_ENTITY_EXIST(func_28()) && !PED::IS_PED_INJURED(func_28()))
				{
					Local_318[iVar0 /*25*/].f_24 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(func_28(), 1), ENTITY::GET_ENTITY_COORDS(Local_318[iVar0 /*25*/], 1));
				}
				bVar4 = true;
			}
			else
			{
				iVar3++;
			}
			uParam0->f_1++;
			if (iVar3 > 57)
			{
				bVar4 = true;
			}
			if (uParam0->f_1 >= 57)
			{
				uParam0->f_1 = 4 + 1;
			}
		}
		func_854();
		iVar0 = 0;
		while (iVar0 < iLocal_4030)
		{
			iLocal_4030[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 57)
		{
			if ((ENTITY::DOES_ENTITY_EXIST(Local_318[iVar0 /*25*/]) && !PED::IS_PED_INJURED(Local_318[iVar0 /*25*/])) && ((PED::GET_PED_RELATIONSHIP_GROUP_HASH(Local_318[iVar0 /*25*/]) == iLocal_312 || PED::GET_PED_RELATIONSHIP_GROUP_HASH(Local_318[iVar0 /*25*/]) == iLocal_313) || PED::GET_PED_RELATIONSHIP_GROUP_HASH(Local_318[iVar0 /*25*/]) == iLocal_311))
			{
				iVar1 = 0;
				while (iVar1 < 15)
				{
					if (iVar1 == Local_318[iVar0 /*25*/].f_21)
					{
						iLocal_4030[iVar1] = 1;
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_854()//Position - 0x792A3
{
	if (GlobalFunc_234(func_29()))
	{
		func_856(&Local_5349);
		func_856(&Local_5273);
		func_856(&Local_5425);
		func_856(&iLocal_5018);
		func_856(&Local_5069);
		func_856(&Local_5501);
		func_856(&Local_5145);
		func_856(&Local_5196);
		func_856(&iLocal_5247);
		func_856(&Local_4664);
		func_855(&iLocal_4867);
		func_856(&Local_4892);
	}
}

void func_855(int iParam0)//Position - 0x7930A
{
	if (GlobalFunc_234(*iParam0) && ((PED::GET_PED_RELATIONSHIP_GROUP_HASH(*iParam0) == iLocal_312 || PED::GET_PED_RELATIONSHIP_GROUP_HASH(*iParam0) == iLocal_313) || PED::GET_PED_RELATIONSHIP_GROUP_HASH(*iParam0) == iLocal_311))
	{
		if (PED::CAN_PED_SEE_HATED_PED(func_29(), *iParam0))
		{
			iParam0->f_23 = MISC::GET_GAME_TIMER();
			iParam0->f_22 = 1;
		}
		else if ((MISC::GET_GAME_TIMER() - iParam0->f_23) > 6000)
		{
			iParam0->f_23 = MISC::GET_GAME_TIMER();
			iParam0->f_22 = 0;
		}
	}
	else
	{
		iParam0->f_22 = 0;
	}
}

void func_856(int iParam0)//Position - 0x79390
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		func_855(iParam0[iVar0 /*25*/]);
		iVar0++;
	}
}


void func_858(var uParam0)//Position - 0x793DF
{
	int iVar0;
	
	if (iLocal_3030 == 8)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			HUD::SET_RADAR_ZOOM_PRECISE(0f);
			return;
		}
	}
	if (func_859(uParam0))
	{
		iVar0 = -1;
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2217.408f, 162.6078f, 163.5629f, -2340.653f, 440.2896f, 178.9f, 197.75f, 0, 1, 0))
		{
			iVar0 = 0;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2217.408f, 162.6078f, 178.9f, -2340.653f, 440.2896f, 188.7f, 197.75f, 0, 1, 0))
		{
			iVar0 = 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2217.408f, 162.6078f, 188.7f, -2340.653f, 440.2896f, 201f, 197.75f, 0, 1, 0))
		{
			iVar0 = 2;
		}
		if (iVar0 >= 0)
		{
			HUD::SET_RADAR_ZOOM_PRECISE(60f);
			HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_FakeKortzCenter"), -2250f, 300f, 0, iVar0);
		}
	}
}

int func_859(var uParam0)//Position - 0x794DA
{
	if (GlobalFunc_4492(uParam0) && !GlobalFunc_4497(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_860(var uParam0, struct<3> Param1, float fParam4)//Position - 0x794FF
{
	*uParam0 = { Param1 };
	uParam0->f_3 = fParam4;
}

void func_861(bool bParam0)//Position - 0x79515
{
	if (bParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
		{
			iLocal_4050 = Global_86864.f_9[0];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_4050, 1, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[0]))
		{
			Local_1864[0 /*2*/] = Global_86864.f_28[0];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1864[0 /*2*/], 1, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864[0]))
		{
			Local_1744[16 /*7*/] = Global_86864[0];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1744[16 /*7*/], 1, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[1]))
		{
			Local_1864[1 /*2*/] = Global_86864.f_28[1];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1864[1 /*2*/], 1, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[2]))
		{
			Local_1864[2 /*2*/] = Global_86864.f_28[2];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1864[2 /*2*/], 1, 1);
		}
		GlobalFunc_562(48);
	}
}



int func_864(int iParam0)//Position - 0x796B0
{
	switch (iParam0)
	{
		case 0:
		case default:
			return 0;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 3;
			break;
		
		case 3:
			return 4;
			break;
		
		case 4:
			return 5;
			break;
		
		case 5:
			return 6;
			break;
		
		case 6:
			return 7;
			break;
		
		case 7:
			return 8;
			break;
		
		case 8:
			return 9;
			break;
		
		case 9:
			return 10;
			break;
	}
	return 2;
}


void func_866(int iParam0)//Position - 0x7976F
{
	char* sVar0;
	
	AUDIO::TRIGGER_MUSIC_EVENT("MIC3_MISSION_FAIL");
	if (iParam0 == 0)
	{
		GlobalFunc_10632();
		func_4();
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				sVar0 = "M3_FF";
				break;
			
			case 2:
				sVar0 = "M3_FMDEAD";
				break;
			
			case 3:
				sVar0 = "M3_FTDEAD";
				break;
			
			case 4:
				sVar0 = "M3_DVDEAD";
				break;
			
			case 5:
				sVar0 = "M3_DVABDN";
				break;
			
			default:
				sVar0 = "M3_FF";
				break;
		}
		GlobalFunc_10835(sVar0);
		while (!GlobalFunc_145())
		{
			SYSTEM::WAIT(0);
		}
		if (iParam0 == 1)
		{
			func_830();
		}
		func_4();
	}
	Global_97297 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}













