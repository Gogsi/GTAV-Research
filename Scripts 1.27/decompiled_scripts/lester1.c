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
	struct<4> Local_36[10];
	bool bLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	char cLocal_82[24] = "";
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	char cLocal_88[24] = "";
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	char cLocal_94[24] = "";
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	char cLocal_100[64] = "";
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	char cLocal_116[24] = "";
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	char cLocal_122[24] = "";
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	char cLocal_128[24] = "";
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	char cLocal_134[24] = "";
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	char cLocal_140[24] = "";
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	char cLocal_146[24] = "";
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	char cLocal_152[24] = "";
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	char cLocal_158[24] = "";
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	char cLocal_164[24] = "";
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	char cLocal_170[48] = "";
	char cLocal_176[24] = "";
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	char cLocal_182[24] = "";
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	char cLocal_188[24] = "";
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	char cLocal_194[32] = "";
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	char cLocal_202[16] = "";
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	char cLocal_206[16] = "";
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	char cLocal_217[16] = "";
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	char cLocal_221[32] = "";
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	struct<3> Local_229 = { 0, 0, 0 } ;
	struct<3> Local_232 = { 0, 0, 0 } ;
	struct<3> Local_235 = { 0, 0, 0 } ;
	struct<3> Local_238 = { 0, 0, 0 } ;
	struct<3> Local_241 = { 0, 0, 0 } ;
	struct<3> Local_244 = { 0, 0, 0 } ;
	struct<3> Local_247 = { 0, 0, 0 } ;
	struct<3> Local_250[4];
	struct<3> Local_263[4];
	struct<3> Local_276 = { 0, 0, 0 } ;
	struct<3> Local_279 = { 0, 0, 0 } ;
	struct<3> Local_282 = { 0, 0, 0 } ;
	struct<3> Local_285 = { 0, 0, 0 } ;
	struct<3> Local_288 = { 0, 0, 0 } ;
	struct<3> Local_291 = { 0, 0, 0 } ;
	struct<3> Local_294 = { 0, 0, 0 } ;
	struct<3> Local_297 = { 0, 0, 0 } ;
	struct<3> Local_300 = { 0, 0, 0 } ;
	struct<3> Local_303 = { 0, 0, 0 } ;
	struct<3> Local_306 = { 0, 0, 0 } ;
	float fLocal_309 = 0f;
	struct<3> Local_310 = { 0, 0, 0 } ;
	struct<3> Local_313 = { 0, 0, 0 } ;
	struct<3> Local_316 = { 0, 0, 0 } ;
	struct<3> Local_319 = { 0, 0, 0 } ;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	struct<7> Local_325[4];
	int iLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	struct<14> Local_360 = { 0, 3, 0, 0, 0, 0, 0, 1092616192, 1101004800, 0, 0, 0, 0, 0 } ;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 3;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 16;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	struct<3> Local_550 = { 0, 0, 0 } ;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	char cLocal_556[24] = "";
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	int iLocal_563 = 0;
	int iLocal_564 = 0;
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	bool bLocal_567 = 0;
	int iLocal_568 = 0;
	int iLocal_569 = 0;
	int iLocal_570 = 0;
	int iLocal_571 = 0;
	var uLocal_572 = 0;
	int iLocal_573 = 0;
	int iLocal_574 = 0;
	int iLocal_575 = 0;
	bool bLocal_576 = 0;
	bool bLocal_577 = 0;
	int iLocal_578 = 0;
	int iLocal_579 = 0;
	int iLocal_580 = 0;
	int iLocal_581 = 0;
	int iLocal_582 = 0;
	int iLocal_583 = 0;
	int iLocal_584 = 0;
	int iLocal_585 = 0;
	int iLocal_586 = 0;
	int iLocal_587 = 0;
	int iLocal_588 = 0;
	int iLocal_589 = 0;
	int iLocal_590 = 0;
	int iLocal_591 = 0;
	int iLocal_592 = 0;
	char* sLocal_593 = NULL;
	int iLocal_594 = 0;
	int iLocal_595 = 0;
	int iLocal_596 = 0;
	int iLocal_597 = 0;
	int iLocal_598 = 0;
	int iLocal_599 = 0;
	int iLocal_600 = 0;
	int iLocal_601 = 0;
	int iLocal_602 = 0;
	int iLocal_603 = 0;
	int iLocal_604 = 0;
	int iLocal_605 = 0;
	int iLocal_606 = 0;
	int iLocal_607 = 0;
	char* sLocal_608 = NULL;
	bool bLocal_609 = 0;
	bool bLocal_610 = 0;
	int iLocal_611 = 0;
	int iLocal_612[3] = { 0, 0, 0 };
	int iLocal_616 = 0;
	int iLocal_617 = 0;
	int iLocal_618[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_628[28] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<10> Local_657[32];
	struct<8> Local_978[13];
	var uLocal_1083 = 30;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 10;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 10;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 20;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 20;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 30;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 5;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 7;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
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
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
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
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 5;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
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
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 3;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
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
	var uLocal_1862 = 15;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
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
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
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
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
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
	var uLocal_1957 = 10;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
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
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 5;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 5;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
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
	var uLocal_2063 = 10;
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
	var uLocal_2081 = 12;
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
	var uLocal_2094 = 12;
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
	var uLocal_2107 = 12;
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
	var uLocal_2120 = 9;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 9;
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
	var uLocal_2163 = 12;
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
	var uLocal_2176 = 12;
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
	var uLocal_2189 = 12;
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
	var uLocal_2200 = 0;
	var uLocal_2201 = 0;
	var uLocal_2202 = 9;
	var uLocal_2203 = 0;
	var uLocal_2204 = 0;
	var uLocal_2205 = 0;
	var uLocal_2206 = 0;
	var uLocal_2207 = 0;
	var uLocal_2208 = 0;
	var uLocal_2209 = 0;
	var uLocal_2210 = 0;
	var uLocal_2211 = 0;
	var uLocal_2212 = 9;
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
	var uLocal_2245 = 12;
	var uLocal_2246 = 0;
	var uLocal_2247 = 0;
	var uLocal_2248 = 0;
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
	var uLocal_2251 = 0;
	var uLocal_2252 = 0;
	var uLocal_2253 = 0;
	var uLocal_2254 = 0;
	var uLocal_2255 = 0;
	var uLocal_2256 = 0;
	var uLocal_2257 = 0;
	var uLocal_2258 = 12;
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
	var uLocal_2271 = 12;
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
	var uLocal_2284 = 9;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
	var uLocal_2293 = 0;
	var uLocal_2294 = 9;
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
	var uLocal_2322 = 0;
	var uLocal_2323 = 0;
	var uLocal_2324 = 0;
	var uLocal_2325 = 0;
	var uLocal_2326 = 0;
	var uLocal_2327 = 12;
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
	var uLocal_2340 = 12;
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
	var uLocal_2353 = 12;
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
	var uLocal_2366 = 9;
	var uLocal_2367 = 0;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = 0;
	var uLocal_2376 = 9;
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
	var uLocal_2409 = 12;
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
	var uLocal_2422 = 12;
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
	var uLocal_2435 = 12;
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
	var uLocal_2448 = 9;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 9;
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
	var uLocal_2491 = 12;
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
	var uLocal_2504 = 12;
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
	var uLocal_2517 = 12;
	var uLocal_2518 = 0;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	var uLocal_2530 = 9;
	var uLocal_2531 = 0;
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 9;
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
	var uLocal_2573 = 12;
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
	var uLocal_2586 = 12;
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
	var uLocal_2599 = 12;
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
	var uLocal_2612 = 9;
	var uLocal_2613 = 0;
	var uLocal_2614 = 0;
	var uLocal_2615 = 0;
	var uLocal_2616 = 0;
	var uLocal_2617 = 0;
	var uLocal_2618 = 0;
	var uLocal_2619 = 0;
	var uLocal_2620 = 0;
	var uLocal_2621 = 0;
	var uLocal_2622 = 9;
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
	var uLocal_2655 = 12;
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
	var uLocal_2668 = 12;
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
	var uLocal_2681 = 12;
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
	var uLocal_2694 = 9;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 0;
	var uLocal_2698 = 0;
	var uLocal_2699 = 0;
	var uLocal_2700 = 0;
	var uLocal_2701 = 0;
	var uLocal_2702 = 0;
	var uLocal_2703 = 0;
	var uLocal_2704 = 9;
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
	var uLocal_2737 = 12;
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
	var uLocal_2750 = 12;
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
	var uLocal_2763 = 12;
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
	var uLocal_2776 = 9;
	var uLocal_2777 = 0;
	var uLocal_2778 = 0;
	var uLocal_2779 = 0;
	var uLocal_2780 = 0;
	var uLocal_2781 = 0;
	var uLocal_2782 = 0;
	var uLocal_2783 = 0;
	var uLocal_2784 = 0;
	var uLocal_2785 = 0;
	var uLocal_2786 = 9;
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
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 0;
	var uLocal_2818 = 0;
	var uLocal_2819 = 12;
	var uLocal_2820 = 0;
	var uLocal_2821 = 0;
	var uLocal_2822 = 0;
	var uLocal_2823 = 0;
	var uLocal_2824 = 0;
	var uLocal_2825 = 0;
	var uLocal_2826 = 0;
	var uLocal_2827 = 0;
	var uLocal_2828 = 0;
	var uLocal_2829 = 0;
	var uLocal_2830 = 0;
	var uLocal_2831 = 0;
	var uLocal_2832 = 12;
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
	var uLocal_2845 = 12;
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
	var uLocal_2858 = 9;
	var uLocal_2859 = 0;
	var uLocal_2860 = 0;
	var uLocal_2861 = 0;
	var uLocal_2862 = 0;
	var uLocal_2863 = 0;
	var uLocal_2864 = 0;
	var uLocal_2865 = 0;
	var uLocal_2866 = 0;
	var uLocal_2867 = 0;
	var uLocal_2868 = 9;
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
	int iLocal_2897 = 0;
	int iLocal_2898 = 0;
	struct<6> Local_2899[12];
	int iLocal_2972[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_2979 = 0;
	int iLocal_2980 = 0;
	int iLocal_2981 = 0;
	int iLocal_2982 = 0;
	bool bLocal_2983 = 0;
	int iLocal_2984 = 0;
	int iLocal_2985 = 0;
	int iLocal_2986 = 0;
	int iLocal_2987 = 0;
	int iLocal_2988 = 0;
	int iLocal_2989 = 0;
	int iLocal_2990 = 0;
	float fLocal_2991 = 0f;
	int iLocal_2992 = 0;
	int iLocal_2993 = 0;
	float fLocal_2994 = 0f;
	float fLocal_2995 = 0f;
	int iLocal_2996 = 0;
	int iLocal_2997 = 0;
	int iLocal_2998 = 0;
	int iLocal_2999 = 0;
	int iLocal_3000 = 0;
	int iLocal_3001 = 0;
	int iLocal_3002 = 0;
	bool bLocal_3003 = 0;
	var uLocal_3004 = 0;
	int iLocal_3005 = 0;
	int iLocal_3006 = 0;
	int iLocal_3007 = 0;
	int iLocal_3008 = 0;
	int iLocal_3009 = 0;
	int iLocal_3010 = 0;
	bool bLocal_3011 = 0;
	int iLocal_3012 = 0;
	int iLocal_3013 = 0;
	bool bLocal_3014 = 0;
	int iLocal_3015 = 0;
	var uLocal_3016 = 0;
	int iLocal_3017 = 0;
	int iLocal_3018 = 0;
	int iLocal_3019 = 0;
	bool bLocal_3020 = 0;
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
	iLocal_81 = 1;
	StringCopy(&cLocal_82, "lester1a_follow_e", 24);
	StringCopy(&cLocal_88, "LS1AAUD", 24);
	StringCopy(&cLocal_94, "misslester1aig_1", 24);
	StringCopy(&cLocal_100, "amb@world_human_drinking@coffee@male@idle_a", 64);
	StringCopy(&cLocal_116, "misslester1aig_2main", 24);
	StringCopy(&cLocal_122, "misslester1aig_2exit", 24);
	StringCopy(&cLocal_128, "misslester1aig_7main", 24);
	StringCopy(&cLocal_134, "misslester1aig_7exit", 24);
	StringCopy(&cLocal_140, "misslester1aig_3main", 24);
	StringCopy(&cLocal_146, "misslester1aig_3exit", 24);
	StringCopy(&cLocal_152, "misslester1aig_4main", 24);
	StringCopy(&cLocal_158, "misslester1aig_4exit", 24);
	StringCopy(&cLocal_164, "misslester1aig_5intro", 24);
	StringCopy(&cLocal_170, "misslester1aig_5main", 24);
	StringCopy(&cLocal_176, "misslester1aig_5exit", 24);
	StringCopy(&cLocal_182, "misslester1aig_6", 24);
	StringCopy(&cLocal_188, "misslester1aig_9", 24);
	StringCopy(&cLocal_194, "FAKE_INTERIOR_OCCLUSION_SCENE", 32);
	StringCopy(&cLocal_202, "life_up", 16);
	StringCopy(&cLocal_206, "invad_exit", 16);
	iLocal_210 = joaat("ig_lifeinvad_01");
	iLocal_211 = joaat("a_m_y_hipster_01");
	iLocal_212 = joaat("a_f_y_hipster_01");
	iLocal_213 = joaat("a_f_y_hipster_04");
	iLocal_214 = joaat("prop_off_chair_01");
	iLocal_215 = joaat("prop_cs_paper_cup");
	iLocal_216 = joaat("prop_cs_milk_01");
	StringCopy(&cLocal_217, "breaking_news", 16);
	StringCopy(&cLocal_221, "misslester1b", 32);
	Local_229 = { -803.9083f, 171.848f, 72.8347f };
	Local_232 = { 0f, 0f, 297.2519f };
	Local_235 = { -802.4717f, 175.982f, 71.8348f };
	Local_238 = { -800.158f, 173.603f, 74.38f };
	Local_241 = { 0f, 0f, 69.13f };
	Local_244 = { 1f, 1f, 1f };
	Local_247 = { 3.163f, 1.783f, 1f };
	Local_276 = { 1283.785f, -1728.948f, 51.8119f };
	Local_279 = { 127.6313f, -209.8459f, 53.5463f };
	Local_282 = { -1054.357f, -240.242f, 43.217f };
	Local_285 = { 0f, 0f, 27.5f };
	Local_288 = { -1059.61f, -244.62f, 43.92f };
	Local_291 = { -1066.571f, -244.5061f, 39.7332f };
	Local_294 = { 0f, 0f, 85.0757f };
	Local_297 = { -1067.689f, -243.949f, 39.7332f };
	Local_300 = { 0f, 0f, -117.5f };
	Local_303 = { -1049.633f, -220.7515f, 36.9051f };
	Local_306 = { -1044.357f, -229.9086f, 38.0141f };
	fLocal_309 = 246.7054f;
	Local_310 = { -1053.15f, -230.89f, 43.92f };
	Local_313 = { 90f, -58f, 0f };
	Local_316 = { -1044.425f, -235.0814f, 43.021f };
	Local_319 = { 0f, 0f, 118.8f };
	iLocal_354 = -1;
	sLocal_593 = "";
	iLocal_2982 = -1;
	fLocal_2991 = 0f;
	fLocal_2994 = 0.5f;
	fLocal_2995 = 0.5f;
	iLocal_2998 = -1;
	iLocal_3000 = 1;
	iLocal_3001 = -1;
	iLocal_3007 = -1;
	iLocal_3015 = 3;
	iLocal_3017 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_769(10);
	}
	func_768();
	func_750();
	while (true)
	{
		SYSTEM::WAIT(0);
		GlobalFunc_8012(&uLocal_1083);
		GlobalFunc_5195(&uLocal_2063);
		func_745();
		func_707();
		func_706();
		func_521();
		func_517();
		func_1();
	}
}

void func_1()//Position - 0x32E
{
	int iVar0;
	
	iVar0 = iLocal_2887;
	switch (iVar0)
	{
		case 0:
			func_487();
			break;
		
		case 1:
			func_429();
			break;
		
		case 2:
			func_419();
			break;
		
		case 3:
			func_416();
			break;
		
		case 4:
			func_294();
			break;
		
		case 5:
			func_291();
			break;
		
		case 6:
			func_286();
			break;
		
		case 7:
			func_195();
			break;
		
		case 8:
			func_119();
			break;
		
		case 9:
			func_108();
			break;
		
		case 10:
			func_2();
			break;
	}
	RECORDING::_0x208784099002BC30("M_FriendRequest", 0);
}

void func_2()//Position - 0x3DA
{
	bool bVar0;
	
	func_106();
	func_82(0);
	switch (iLocal_2888)
	{
		case 0:
			GlobalFunc_495(129, 0);
			if (bLocal_3003)
			{
				if (!GlobalFunc_6964(PLAYER::PLAYER_PED_ID(), -2017877118) || (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(15), 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(15)) > 0.64f))
				{
					GlobalFunc_2991(4);
					if (bLocal_3020)
					{
						CAM::_0x2A2173E46DAECD12(0, 4);
					}
					if (CAM::DOES_CAM_EXIST(uLocal_3016))
					{
						CAM::DESTROY_CAM(uLocal_3016, 0);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::RENDER_SCRIPT_CAMS(0, 1, 3000, 1, 0, 0);
					bLocal_609 = false;
					iLocal_2894 = MISC::GET_GAME_TIMER();
					iLocal_2888++;
				}
			}
			else
			{
				ENTITY::REMOVE_MODEL_HIDE(-804.4475f, 172.7937f, 72.34801f, 0.5f, joaat("prop_cs_remote_01"), 1);
				func_769(5);
			}
			break;
		
		case 1:
			if (!bLocal_609)
			{
				if (GlobalFunc_6964(PLAYER::PLAYER_PED_ID(), -2017877118))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -352013938))
					{
						bLocal_609 = true;
					}
				}
			}
			if (bLocal_609)
			{
				if (PAD::GET_CONTROL_NORMAL(0, 31) != 0f || PAD::GET_CONTROL_NORMAL(0, 30) != 0f)
				{
					bVar0 = true;
				}
			}
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4 || (MISC::GET_GAME_TIMER() - iLocal_2894) >= 4000)
			{
				if (!GlobalFunc_6964(PLAYER::PLAYER_PED_ID(), -2017877118) || (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(15), 1) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(15)) >= 0.831f))
				{
					AUDIO::SET_STATIC_EMITTER_ENABLED("SE_MICHAELS_HOUSE_RADIO", 1);
					ENTITY::REMOVE_MODEL_HIDE(-804.4475f, 172.7937f, 72.34801f, 0.5f, joaat("prop_cs_remote_01"), 1);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_3();
				}
				else if (bVar0)
				{
					AUDIO::SET_STATIC_EMITTER_ENABLED("SE_MICHAELS_HOUSE_RADIO", 1);
					ENTITY::REMOVE_MODEL_HIDE(-804.4475f, 172.7937f, 72.34801f, 0.5f, joaat("prop_cs_remote_01"), 1);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_3();
				}
			}
			break;
	}
}

void func_3()//Position - 0x606
{
	HUD::CLEAR_PRINTS();
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	func_8();
	GlobalFunc_5103(0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}





void func_8()//Position - 0x79C
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	GlobalFunc_4935();
	HUD::CLEAR_PRINTS();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, 0);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2884))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2884, 0))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_2884);
		}
		else
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_2884);
		}
	}
	iVar0 = 0;
	while (iVar0 <= (32 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_657[iVar0 /*10*/]))
		{
			func_72(&(Local_657[iVar0 /*10*/]), -1000f);
			if (ENTITY::IS_ENTITY_ATTACHED(Local_657[iVar0 /*10*/]))
			{
				ENTITY::DETACH_ENTITY(Local_657[iVar0 /*10*/], 1, 1);
			}
			if (Local_657[iVar0 /*10*/].f_1)
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(Local_657[iVar0 /*10*/], 1) };
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_657[iVar0 /*10*/]));
				MISC::CLEAR_AREA(Var1, 0.5f, 1, 1, 0, 0);
				Local_657[iVar0 /*10*/].f_1 = 0;
			}
			else
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(Local_657[iVar0 /*10*/], 1) };
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_657[iVar0 /*10*/]));
				if (!Local_657[iVar0 /*10*/].f_7)
				{
					MISC::CLEAR_AREA(Var1, 0.5f, 1, 1, 0, 0);
				}
			}
		}
		iVar0++;
	}
	iVar0 = 1 + 1;
	while (iVar0 <= (28 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_628[iVar0]) && !PED::IS_PED_INJURED(iLocal_628[iVar0]))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_628[iVar0], 1785177548) == 1)
			{
				TASK::CLEAR_PED_TASKS(iLocal_628[iVar0]);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_628[iVar0]));
		}
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 < Local_325)
	{
		if (Local_325[iVar4 /*7*/] != -1 && OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Local_325[iVar4 /*7*/]))
		{
			OBJECT::REMOVE_DOOR_FROM_SYSTEM(Local_325[iVar4 /*7*/]);
		}
		iVar4++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_2885))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_2885);
	}
	AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
	AUDIO::RELEASE_SOUND_ID(iLocal_2987);
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	GlobalFunc_695(1);
	func_70(16, 0);
	GlobalFunc_8380(0, 1, 1, 0);
	GlobalFunc_10617(75, 1);
	GlobalFunc_846(&(iLocal_612[0]));
	GlobalFunc_846(&(iLocal_612[1]));
	GlobalFunc_846(&(iLocal_612[2]));
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&cLocal_194))
	{
		AUDIO::STOP_AUDIO_SCENE(&cLocal_194);
	}
	PAD::_RESET_INPUT_MAPPING_SCHEME();
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	func_33();
	GlobalFunc_52(1, 1);
	GlobalFunc_7632(0);
	Global_67064 = 0;
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
	GlobalFunc_8634(16, 0);
	GlobalFunc_495(129, 0);
	GlobalFunc_6685(0);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_LESTERS_DOGS", 1, 1);
	GRAPHICS::ENABLE_MOVIE_SUBTITLES(1);
	GlobalFunc_7621(101, 0, 1, 1, 0);
}

























void func_33()//Position - 0x5417
{
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(1368.169f, -1686.164f, 68.78043f, 1189.981f, -1764.964f, 31.71125f, 91.5f, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(48.29568f, -238.2421f, -1057.518f) - Vector(11.8125f, 29f, 43f), Vector(48.29568f, -238.2421f, -1057.518f) + Vector(11.8125f, 29f, 43f), 1, 1);
	PATHFIND::SET_PED_PATHS_IN_AREA(Vector(48.29568f, -238.2421f, -1057.518f) - Vector(11.8125f, 29f, 43f), Vector(48.29568f, -238.2421f, -1057.518f) + Vector(11.8125f, 29f, 43f), 1, 0);
	PED::CLEAR_PED_NON_CREATION_AREA();
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_562, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
}





































void func_70(int iParam0, bool bParam1)//Position - 0x9AB0
{
	if (bParam1)
	{
		if (!GlobalFunc_7702(iParam0, 8, 1))
		{
			GlobalFunc_7930(iParam0, 8, 1);
		}
	}
	else if (GlobalFunc_7702(iParam0, 8, 1))
	{
		GlobalFunc_7929(iParam0, 8, 1);
	}
}


void func_72(var uParam0, float fParam1)//Position - 0x9AF9
{
	if (uParam0->f_2)
	{
		if (*uParam0 == 0)
		{
			if (!GlobalFunc_105(uParam0->f_4) && uParam0->f_3 != 0)
			{
				ENTITY::STOP_SYNCHRONIZED_MAP_ENTITY_ANIM(uParam0->f_4, 1f, uParam0->f_3, fParam1);
			}
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_8) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_9))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_8, uParam0->f_9, 3))
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*uParam0, fParam1, 1);
			}
		}
		uParam0->f_3 = 0;
		uParam0->f_8 = "";
		uParam0->f_9 = "";
		uParam0->f_2 = 0;
	}
}





char* func_77(int iParam0)//Position - 0x9C68
{
	switch (iParam0)
	{
		case 1:
			return "michael_tv_remote_idle";
			break;
		
		case 2:
			return "michael_tv_remote_fidget";
			break;
		
		case 3:
			return "michael_tv_remote_button_press_faster";
		
		case 4:
			return "michael_tv_remote_volume_into";
			break;
		
		case 5:
			return "michael_tv_remote_volume";
			break;
		
		case 6:
			return "michael_tv_remote_volume_outro";
			break;
		
		case 7:
			return "michael_phone_into";
			break;
		
		case 8:
			return "michael_phone_menu_exit";
			break;
		
		case 9:
			return "michael_phone_idle";
			break;
		
		case 10:
			return "michael_phone_single_screen_scroll";
			break;
		
		case 11:
			return "michael_phone_single_screen_press";
			break;
		
		case 12:
			return "michael_phone_detonate_to_wait_idle";
			break;
		
		case 13:
			return "michael_wait_idle";
			break;
		
		case 14:
			return "michael_explosion_reaction_to_wait_idle";
			break;
		
		case 15:
			return "michael_wait_idle_to_standing_idle_leadout";
			break;
	}
	return "NONE";
}





void func_82(int iParam0)//Position - 0x9E1E
{
	if (((iLocal_3006 == 12 || iLocal_3006 == 13) || iLocal_3006 == 14) || iLocal_3006 == 15)
	{
		func_105(0, 0);
	}
	else
	{
		func_105(0, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 28, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 29, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 171, 1);
	if (iParam0 && ((((((((((iLocal_3006 == 1 || iLocal_3006 == 2) || iLocal_3006 == 9) || iLocal_3006 == 8) || iLocal_3006 == 12) || iLocal_3006 == 14) || iLocal_3006 == 13) || iLocal_3006 == 7) || iLocal_3006 == 15) || iLocal_3006 == 11) || iLocal_3006 == 10))
	{
		if (GlobalFunc_701())
		{
			GlobalFunc_7632(0);
		}
	}
	else if (!GlobalFunc_701())
	{
		GlobalFunc_7632(1);
	}
	if (iLocal_3006 == 1 || iLocal_3006 == 2)
	{
		if (GlobalFunc_116(0))
		{
			func_103(7, 8f, -8f, 2562, 0);
		}
		else if (GlobalFunc_4533(1) && !iLocal_3009)
		{
			if (GlobalFunc_115(Local_657[30 /*10*/]))
			{
			}
			func_103(3, 8f, -8f, 2562, 0);
		}
		else if (func_101())
		{
			func_103(4, 8f, -8f, 2562, 0);
		}
	}
	switch (iLocal_3006)
	{
		case 1:
			if (iLocal_3008)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_3007) >= 8000)
				{
					iLocal_3008 = 0;
					func_103(2, 8f, -8f, 2562, 0);
				}
			}
			break;
		
		case 2:
			if (func_100())
			{
				iLocal_3008 = 1;
				iLocal_3007 = MISC::GET_GAME_TIMER();
				func_103(1, 1000f, -8f, 2561, 0);
			}
			break;
		
		case 3:
			if (func_100())
			{
				func_103(1, 1000f, -8f, 2561, 0);
			}
			else if (GlobalFunc_4533(1))
			{
				if (GlobalFunc_115(Local_657[30 /*10*/]))
				{
				}
				func_103(3, 8f, -8f, 2562, 0);
			}
			break;
		
		case 4:
			if (func_100())
			{
				func_103(5, 1000f, -8f, 2561, 0);
			}
			break;
		
		case 5:
			if (!func_101())
			{
				func_103(6, 8f, -8f, 2562, 0);
			}
			break;
		
		case 6:
			if (func_100())
			{
				func_103(1, 1000f, -8f, 2561, 0);
			}
			break;
		
		case 7:
			if (func_99(129) && iParam0)
			{
				func_103(12, 8f, -8f, 2562, 0);
			}
			else if (func_100())
			{
				func_103(9, 1000f, -8f, 2561, 0);
				Global_1578 = 145;
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(7), 3))
			{
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(7)) > 0.376f)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_657[31 /*10*/]))
					{
						Local_657[31 /*10*/] = OBJECT::CREATE_OBJECT(joaat("prop_phone_ing"), PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 28422, 0f, 0f, 0f), 1, 1, 0);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_657[31 /*10*/], PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
					}
				}
			}
			break;
		
		case 9:
			if (!iLocal_3010)
			{
				if (func_99(129) && iParam0)
				{
					func_103(12, 8f, -8f, 2562, 0);
				}
				else if (!GlobalFunc_116(1))
				{
					func_103(8, 8f, -8f, 2562, 0);
				}
				else if (func_98())
				{
					func_103(10, 8f, -8f, 2562, 0);
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(0, 176) && !GlobalFunc_666())
				{
					func_103(11, 8f, -8f, 2562, 0);
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(0, 177))
				{
					func_103(11, 8f, -8f, 2562, 0);
				}
			}
			break;
		
		case 8:
			if (func_100())
			{
				func_103(1, 8f, -8f, 2561, 0);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(8), 3))
			{
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(8)) > 0.376f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_657[31 /*10*/]))
					{
						OBJECT::DELETE_OBJECT(&(Local_657[31 /*10*/]));
					}
				}
			}
			break;
		
		case 10:
			if (func_99(129) && iParam0)
			{
				func_103(12, 8f, -8f, 2562, 0);
			}
			else if (func_99(129) && iParam0)
			{
				func_103(12, 8f, -8f, 2562, 0);
			}
			else if (func_100())
			{
				func_103(9, 1000f, -8f, 2561, 0);
			}
			break;
		
		case 11:
			if (func_99(129) && iParam0)
			{
				func_103(12, 8f, -8f, 2562, 0);
			}
			else if (func_100())
			{
				func_103(9, 1000f, -8f, 2561, 0);
			}
			break;
		
		case 12:
			if (!iLocal_3010)
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(12), 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(12)) > 0.305f)
					{
						GRAPHICS::SET_TV_CHANNEL(3);
						SYSTEM::SETTIMERA(0);
						GlobalFunc_7632(1);
						iLocal_3010 = 1;
						iLocal_2999 = MISC::GET_GAME_TIMER();
						RECORDING::_0x48621C9FCA3EBD28(3);
						iLocal_611 = 1;
					}
					else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(12)) > 0.2f)
					{
						if (!bLocal_3014)
						{
							bLocal_3014 = GlobalFunc_10618(&uLocal_385, &cLocal_88, "LS1B_TV", 7, 0, 0, 0);
						}
					}
				}
			}
			else if (func_100())
			{
				func_103(13, 1000f, -8f, 2561, 0);
			}
			break;
		
		case 13:
			if (!GlobalFunc_5170())
			{
				GRAPHICS::ENABLE_MOVIE_SUBTITLES(0);
				GlobalFunc_5105();
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_2999) > 6500)
			{
				if (GlobalFunc_10618(&uLocal_385, &cLocal_88, "LS1B_REACT", 8, 0, 0, 0))
				{
					func_103(14, 8f, -8f, 2562, 0);
				}
			}
			break;
		
		case 14:
			if (func_100())
			{
				func_103(15, 1000f, -1.5f, 2562, 0);
			}
			break;
		
		case 15:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(15), 3))
			{
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(15)) > 0.321f)
				{
					GlobalFunc_130(&(Local_657[30 /*10*/]));
					GlobalFunc_130(&(Local_657[31 /*10*/]));
					if (iLocal_611)
					{
						RECORDING::_0x81CBAE94390F9F89();
						iLocal_611 = 0;
					}
				}
			}
			break;
	}
}
















int func_98()//Position - 0xABC8
{
	if (((PAD::IS_CONTROL_JUST_PRESSED(0, 172) || PAD::IS_CONTROL_JUST_PRESSED(0, 173)) || PAD::IS_CONTROL_JUST_PRESSED(0, 174)) || PAD::IS_CONTROL_JUST_PRESSED(0, 175))
	{
		return 1;
	}
	return 0;
}

int func_99(int iParam0)//Position - 0xAC06
{
	if (Global_97[iParam0 /*10*/].f_8 != 138)
	{
		if (Global_1578 == iParam0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_100()//Position - 0xAC33
{
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(1), 3))
	{
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(1)) >= 1f)
		{
			return 1;
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(2), 3))
	{
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(2)) >= 1f)
		{
			return 1;
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(3), 3))
	{
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(3)) >= 1f)
		{
			return 1;
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(4), 3))
	{
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(4)) >= 1f)
		{
			return 1;
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(5), 3))
	{
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(5)) > 0.9f)
		{
			return 1;
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(6), 3))
	{
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(6)) >= 1f)
		{
			return 1;
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(7), 3))
	{
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(7)) >= 1f)
		{
			return 1;
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(8), 3))
	{
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(8)) >= 1f)
		{
			return 1;
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(9), 3))
	{
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(9)) > 0.9f)
		{
			return 1;
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(10), 3))
	{
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(10)) >= 1f)
		{
			return 1;
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(11), 3))
	{
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(11)) >= 1f)
		{
			return 1;
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(12), 3))
	{
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(12)) >= 1f)
		{
			return 1;
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(13), 3))
	{
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(13)) > 0.9f)
		{
			return 1;
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(14), 3))
	{
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(14)) >= 1f)
		{
			return 1;
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(15), 3))
	{
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(15)) > 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_101()//Position - 0xAF07
{
	int iVar0;
	int iVar1;
	
	iVar1 = 32;
	iVar0 = (PAD::GET_CONTROL_VALUE(2, 196) - 127);
	if (iVar0 > (0 + iVar1) || iVar0 < (0 - iVar1))
	{
		return 1;
	}
	return 0;
}


void func_103(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)//Position - 0xAF87
{
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(iParam0), 3))
	{
		TASK::TASK_PLAY_ANIM_ADVANCED(PLAYER::PLAYER_PED_ID(), &cLocal_221, func_77(iParam0), Local_229, Local_232, fParam1, fParam2, -1, iParam3, 0f, 2, 1);
		if (bParam4)
		{
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
		}
		iLocal_3006 = iParam0;
	}
}


void func_105(bool bParam0, bool bParam1)//Position - 0xAFF3
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 64;
	if (bParam0)
	{
		if (GlobalFunc_4533(0))
		{
			if (!iLocal_78)
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, 1);
				}
				if (GRAPHICS::GET_TV_CHANNEL() == 0)
				{
					GRAPHICS::SET_TV_CHANNEL(1);
				}
				else
				{
					GRAPHICS::SET_TV_CHANNEL(0);
				}
				iLocal_78 = 1;
			}
		}
		else if (iLocal_78)
		{
			iLocal_78 = 0;
		}
	}
	if (bParam1)
	{
		iVar1 = (PAD::GET_CONTROL_VALUE(2, 219) - 127);
		if (!iLocal_79)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = GRAPHICS::GET_TV_VOLUME();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				GRAPHICS::SET_TV_VOLUME(fVar2);
				iLocal_80 = MISC::GET_GAME_TIMER();
				iLocal_79 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = GRAPHICS::GET_TV_VOLUME();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				GRAPHICS::SET_TV_VOLUME(fVar2);
				iLocal_80 = MISC::GET_GAME_TIMER();
				iLocal_79 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_81 = 1;
			}
			else if (iLocal_81)
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, 1);
					}
					iLocal_81 = 0;
				}
			}
		}
		if (iLocal_79)
		{
			if (iVar1 == 0 || MISC::GET_GAME_TIMER() > iLocal_80 + 24)
			{
				iLocal_79 = 0;
			}
		}
	}
}

void func_106()//Position - 0xB13C
{
	if (INTERIOR::IS_INTERIOR_SCENE() && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_324)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
		{
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), -1, 0, 1);
		}
		GlobalFunc_187();
	}
}


void func_108()//Position - 0xB192
{
	func_106();
	func_82(0);
	func_118();
	func_117();
	switch (iLocal_2888)
	{
		case 0:
			SYSTEM::SETTIMERA(0);
			GlobalFunc_733(&uLocal_1083, &cLocal_217, &uLocal_3004, 0);
			bLocal_3003 = true;
			iLocal_2888++;
			break;
		
		case 1:
			if (SYSTEM::TIMERA() > 11950 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_3004))
			{
				GlobalFunc_5068();
				GRAPHICS::SET_TV_CHANNEL(0);
				GlobalFunc_2798(4);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_3004, "SHOW_STATIC");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				SYSTEM::SETTIMERA(0);
				iLocal_2888++;
			}
			break;
		
		case 2:
			if (SYSTEM::TIMERA() < 7000)
			{
				if (!iLocal_3013)
				{
					GlobalFunc_5068();
					GRAPHICS::SET_TV_CHANNEL(-1);
					GRAPHICS::CLEAR_TV_CHANNEL_PLAYLIST(3);
					iLocal_3013 = 1;
				}
				AUDIO::SET_STATIC_EMITTER_ENABLED("SE_MICHAELS_HOUSE_RADIO", 0);
				GRAPHICS::DRAW_SCALEFORM_MOVIE_3D_SOLID(uLocal_3004, Local_238, Local_241, Local_244, Local_247, 2);
			}
			else
			{
				if (iLocal_3015 != 3)
				{
					func_111(3, 2000);
				}
				AUDIO::SET_STATIC_EMITTER_ENABLED("SE_MICHAELS_HOUSE_RADIO", 1);
				GlobalFunc_571(0, -1);
				iLocal_2888++;
			}
			break;
		
		case 3:
			AUDIO::START_AUDIO_SCENE("LESTER_1A_AFTER_EXPLOSION");
			func_103(15, 8f, -1.5f, 512, 0);
			func_109(10);
			break;
	}
}

int func_109(int iParam0)//Position - 0xB2CE
{
	if (iLocal_2886 == 0)
	{
		iLocal_2889 = iParam0;
		iLocal_2886 = 1;
		return 1;
	}
	return 0;
}


void func_111(int iParam0, int iParam1)//Position - 0xB388
{
	var uVar0;
	
	uVar0 = CAM::GET_CAM_FOV(uLocal_3016);
	CAM::SET_CAM_PARAMS(uLocal_3016, Local_250[iParam0 /*3*/], Local_263[iParam0 /*3*/], uVar0, iParam1, 1, 1, 2);
	iLocal_3015 = iParam0;
}






void func_117()//Position - 0xB611
{
	switch (iLocal_3000)
	{
		case 1:
			if (iLocal_3010)
			{
				if (iLocal_3001 == -1)
				{
					iLocal_3001 = AUDIO::GET_SOUND_ID();
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_657[31 /*10*/]))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_3001, "Remote_Ring", Local_657[31 /*10*/], "Phone_SoundSet_Michael", 0, 0);
					iLocal_3002 = MISC::GET_GAME_TIMER();
					iLocal_3000 = 3;
				}
			}
			break;
		
		case 3:
			if (iLocal_3001 == -1)
			{
				iLocal_3001 = AUDIO::GET_SOUND_ID();
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_3002) > 5000)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3001))
				{
					AUDIO::STOP_SOUND(iLocal_3001);
				}
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_3001, "Answer_Phone", Local_657[31 /*10*/], "Lester1B_Sounds", 0, 0);
				iLocal_3002 = MISC::GET_GAME_TIMER();
				iLocal_3000 = 5;
			}
			break;
	}
}

void func_118()//Position - 0xB6C9
{
	if (CAM::DOES_CAM_EXIST(uLocal_3016))
	{
		if (CAM::IS_CAM_ACTIVE(uLocal_3016))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 0))
			{
				if (MISC::IS_XBOX360_VERSION())
				{
					switch (iLocal_3015)
					{
						case 1:
							func_111(2, 0);
							break;
						
						case 2:
							func_111(3, 0);
							break;
						
						case 3:
							func_111(1, 0);
							break;
					}
				}
				else
				{
					switch (iLocal_3015)
					{
						case 0:
							func_111(1, 0);
							break;
						
						case 1:
							func_111(2, 0);
							break;
						
						case 2:
							func_111(3, 0);
							break;
						
						case 3:
							func_111(0, 0);
							break;
						}
					}
				}
			}
	}
}

void func_119()//Position - 0xB778
{
	bool bVar0;
	bool bVar1;
	
	func_106();
	func_118();
	if (iLocal_2998 != -1)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_2998) > 77083)
		{
			bVar0 = true;
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_2998) > 170000)
		{
			bVar1 = true;
		}
	}
	if (bVar0 && !bVar1)
	{
		func_82(1);
	}
	else
	{
		func_82(0);
	}
	func_117();
	switch (iLocal_2888)
	{
		case 0:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0) || !CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (!CAM::DOES_CAM_EXIST(uLocal_3016))
				{
					uLocal_3016 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_250[3 /*3*/], Local_263[3 /*3*/], 40f, 1, 2);
					CAM::SHAKE_CAM(uLocal_3016, "HAND_SHAKE", 0.3f);
				}
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					bLocal_3020 = true;
					CAM::_0x2A2173E46DAECD12(0, 1);
				}
				GRAPHICS::ENABLE_MOVIE_SUBTITLES(1);
				CAM::SET_CAM_ACTIVE(uLocal_3016, 1);
				HUD::DISPLAY_RADAR(0);
				HUD::DISPLAY_HUD(0);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Tracey", 0))
			{
				GlobalFunc_881(&(iLocal_628[27]));
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0) || !CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				RECORDING::_0x81CBAE94390F9F89();
				if (CAM::DOES_CAM_EXIST(uLocal_3016))
				{
					if (CAM::IS_CAM_ACTIVE(uLocal_3016))
					{
						CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
					}
				}
				if (!GlobalFunc_709(PLAYER::PLAYER_PED_ID(), -2017877118, 1))
				{
					func_103(1, 1000f, -8f, 2561, 1);
				}
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, 1);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, 1);
				if (!ENTITY::DOES_ENTITY_EXIST(Local_657[30 /*10*/]))
				{
					func_192(&(Local_657[30 /*10*/]), joaat("prop_cs_remote_01"), PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 60309, 0f, 0f, 0f), 0);
					GlobalFunc_5174(&uLocal_1083, joaat("prop_cs_remote_01"));
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_657[30 /*10*/], PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
				}
				iLocal_3006 = 1;
				iLocal_3007 = MISC::GET_GAME_TIMER();
				iLocal_3008 = 1;
				GlobalFunc_7632(1);
			}
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				GlobalFunc_9621(129, 0, 0);
				func_187(1);
				GRAPHICS::SET_TV_CHANNEL_PLAYLIST(3, GlobalFunc_432(9), 0);
				GlobalFunc_11067(7, "8. Start TV", 1, 0, 0, 1);
				GlobalFunc_8380(0, 1, 1, 0);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				HUD::CLEAR_HELP(1);
				GlobalFunc_1("TV_HLP_LEST1B_1");
				GlobalFunc_657();
				iLocal_2888++;
			}
			break;
		
		case 1:
			if (GlobalFunc_4533(1))
			{
				func_127(4, 1, 8, 1);
				HUD::CLEAR_HELP(1);
				if (GlobalFunc_663("FIND_NEWS", 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("FIND_NEWS");
				}
				GlobalFunc_574(391, 0);
				iLocal_3009 = 1;
				iLocal_2998 = MISC::GET_GAME_TIMER();
				iLocal_2888++;
			}
			else if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				if (!iLocal_3012)
				{
					GlobalFunc_164("FIND_NEWS", 7500, 0);
					iLocal_3012 = 1;
				}
			}
			break;
		
		case 2:
			if ((MISC::GET_GAME_TIMER() - iLocal_2998) > 5000)
			{
				GlobalFunc_159("WAIT_TO_DETONATE", 23000);
				iLocal_2888++;
			}
			break;
		
		case 3:
			if (bVar0)
			{
				Global_86795 = 10049;
				iLocal_2888++;
			}
			break;
		
		case 4:
			if (GlobalFunc_116(0))
			{
				GlobalFunc_163();
				GlobalFunc_440();
				GlobalFunc_2775(129);
			}
			if (iLocal_3010)
			{
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(1);
				func_109(9);
			}
			else if (bVar1)
			{
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(1);
				iLocal_3010 = 0;
				func_109(10);
			}
			break;
	}
}








void func_127(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xBB8A
{
	if (iParam0 != -1)
	{
		if (!GlobalFunc_2203(iParam0))
		{
			return;
		}
		GRAPHICS::SET_TV_CHANNEL_PLAYLIST(iParam1, GlobalFunc_432(iParam2), iParam3);
		GRAPHICS::SET_TV_CHANNEL(iParam1);
		Global_24504[iParam0 /*11*/] = iParam1;
		Global_24504[iParam0 /*11*/].f_1 = iParam2;
	}
}




























































void func_187(bool bParam0)//Position - 0x12678
{
	if (bParam0)
	{
		MISC::SET_BIT(&Global_2264, 19);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2264, 19);
	}
}





void func_192(var uParam0, int iParam1, struct<3> Param2, float fParam5)//Position - 0x12945
{
	*uParam0 = OBJECT::CREATE_OBJECT(iParam1, Param2, 1, 1, 0);
	uParam0->f_1 = 1;
	if (fParam5 != 0f)
	{
		ENTITY::SET_ENTITY_HEADING(*uParam0, fParam5);
	}
}



void func_195()//Position - 0x129F7
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	func_106();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(iLocal_628[7]))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_628[7], 5f, 5f, 5f, 0, 1, 0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
		}
	}
	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_324)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!GlobalFunc_709(PLAYER::PLAYER_PED_ID(), -828834893, 1))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
		}
		PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
	}
	switch (iLocal_2888)
	{
		case 0:
			GlobalFunc_11067(6, "7. Go home", 0, 0, 0, 1);
			func_285(1, 0);
			GlobalFunc_695(1);
			func_70(16, 0);
			func_285(12, 0);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
			iLocal_3005 = 0;
			iLocal_3013 = 0;
			iLocal_2888++;
			break;
		
		case 1:
			if (func_241(&Local_360, Local_235, -805.3523f, 177.565f, 71.84848f, -801.7042f, 168.1626f, 74.97459f, 9.0375f, 1, "WATCH_KEYNOTE", 1, 1, -1, 1))
			{
				if (CUTSCENE::HAS_CUTSCENE_LOADED() && iLocal_3005)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_628[7]))
					{
						PED::DELETE_PED(&(iLocal_628[7]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_657[23 /*10*/]))
					{
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_657[23 /*10*/]));
					}
					GlobalFunc_5175(&uLocal_1083, "AMB@PROP_HUMAN_SEAT_COMPUTER@MALE@IDLE_B");
					GlobalFunc_5652(&Local_360, 1, 0);
					GlobalFunc_8380(1, 1, 1, 0);
					if (!PED::IS_PED_INJURED(iLocal_628[27]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_628[27], "Tracy", 1, 0, 0);
					}
					CUTSCENE::START_CUTSCENE(2048);
					RECORDING::_0x293220DA1B46CEBC(5f, 0f, 3);
					RECORDING::_0x48621C9FCA3EBD28(4);
					func_232(12);
					GlobalFunc_2885();
					GlobalFunc_719(&uLocal_1083, &cLocal_221);
					GlobalFunc_724(&uLocal_1083, "Lester1B");
					GlobalFunc_724(&uLocal_1083, "SAFEHOUSE_MICHAEL_SIT_SOFA");
					GRAPHICS::ENABLE_MOVIE_SUBTITLES(0);
					iLocal_2888++;
				}
				else
				{
					if (!CUTSCENE::HAS_CUTSCENE_LOADED())
					{
						GRAPHICS::DRAW_DEBUG_TEXT_2D("WAITING FOR: cutscene", 0.5f, 0.5f, 0f, 255, 0, 0, 255);
					}
					if (!iLocal_3005)
					{
						GRAPHICS::DRAW_DEBUG_TEXT_2D("WAITING FOR: bTVTurnedOn", 0.5f, 0.55f, 0f, 255, 0, 0, 255);
					}
				}
			}
			else if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_324 && GlobalFunc_5170())
			{
				GRAPHICS::ENABLE_MOVIE_SUBTITLES(1);
			}
			else
			{
				GRAPHICS::ENABLE_MOVIE_SUBTITLES(0);
			}
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_628[27]) && GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_235, 1) < 100f)
				{
					CUTSCENE::REQUEST_CUTSCENE("LES_1B_MCS_1", 8);
					GlobalFunc_9024(&uLocal_2063, PLAYER::PLAYER_PED_ID(), "Michael", 0);
					GlobalFunc_9024(&uLocal_2063, iLocal_628[27], "Tracy", 0);
				}
			}
			else if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_235, 1) > 120f || GlobalFunc_2233())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
			if (!iLocal_3005)
			{
				if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_235, 1) < 100f)
				{
					if (GlobalFunc_2920(4))
					{
						GlobalFunc_5068();
						GlobalFunc_5649(4, 1, 11, 0, 1);
						iLocal_3005 = 1;
					}
				}
			}
			else if (iLocal_3005)
			{
				if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_235, 1) > 120f)
				{
					if (GlobalFunc_2920(4))
					{
						GlobalFunc_7063(1, 4);
					}
					iLocal_3005 = 0;
				}
			}
			if (iLocal_570)
			{
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_322)
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1563127729, 0, 1, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(759145763, 0, 1, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-84399179, 0, 1, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-461898059, 0, 1, 0);
				}
				else
				{
					bVar0 = true;
					if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-84399179) != 1 || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-461898059) != 1)
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1081.791f, -260.7063f, 36.80381f, -1082.801f, -258.8138f, 39.82576f, 3.25f, 0, 1, 0))
						{
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-84399179, 1, 1, 0);
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-461898059, 1, 1, 0);
						}
						else
						{
							bVar0 = false;
						}
					}
					if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-1563127729) != 1 || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(759145763) != 1)
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1044.871f, -230.1839f, 38.01416f, -1046.881f, -231.2255f, 41.07418f, 3.25f, 0, 1, 0))
						{
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1563127729, 1, 1, 0);
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(759145763, 1, 1, 0);
						}
						else
						{
							bVar0 = false;
						}
					}
					if (bVar0)
					{
						if (((((((OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-1563127729) == 1 && MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(-1563127729)) <= 0.1f) && OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(759145763) == 1) && MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(759145763)) <= 0.1f) && OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-84399179) == 1) && MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(-84399179)) <= 0.1f) && OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-461898059) == 1) && MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(-461898059)) <= 0.1f)
						{
							func_232(4);
							func_232(5);
							func_232(6);
							func_232(8);
							func_232(7);
							func_232(11);
							func_232(10);
							func_219(&uLocal_1083, iLocal_322);
							GlobalFunc_5174(&uLocal_1083, iLocal_212);
							GlobalFunc_5174(&uLocal_1083, iLocal_213);
							GlobalFunc_5174(&uLocal_1083, iLocal_210);
							GlobalFunc_5174(&uLocal_1083, iLocal_211);
							GlobalFunc_5174(&uLocal_1083, iLocal_214);
							GlobalFunc_5174(&uLocal_1083, joaat("ig_jay_norris"));
							GlobalFunc_5174(&uLocal_1083, joaat("prop_paper_ball"));
							GlobalFunc_5174(&uLocal_1083, joaat("prop_hacky_sack_01"));
							GlobalFunc_5174(&uLocal_1083, joaat("p_michael_backpack_s"));
							GlobalFunc_5175(&uLocal_1083, &cLocal_140);
							GlobalFunc_5175(&uLocal_1083, &cLocal_146);
							GlobalFunc_5175(&uLocal_1083, &cLocal_152);
							GlobalFunc_5175(&uLocal_1083, &cLocal_158);
							GlobalFunc_5175(&uLocal_1083, &cLocal_170);
							GlobalFunc_5175(&uLocal_1083, &cLocal_164);
							GlobalFunc_5175(&uLocal_1083, &cLocal_170);
							GlobalFunc_5175(&uLocal_1083, &cLocal_176);
							GlobalFunc_5175(&uLocal_1083, &cLocal_100);
							GlobalFunc_5175(&uLocal_1083, &cLocal_188);
							GlobalFunc_5175(&uLocal_1083, &cLocal_116);
							GlobalFunc_5175(&uLocal_1083, &cLocal_122);
							GlobalFunc_5175(&uLocal_1083, &cLocal_128);
							GlobalFunc_5175(&uLocal_1083, &cLocal_134);
							GlobalFunc_5175(&uLocal_1083, &cLocal_94);
							GlobalFunc_5175(&uLocal_1083, &cLocal_182);
							GlobalFunc_5175(&uLocal_1083, "amb@prop_human_seat_computer@male@base");
							GlobalFunc_5177(&uLocal_1083, "Lester1A_Qub3d");
							GlobalFunc_5177(&uLocal_1083, "Lester1A");
							GlobalFunc_5177(&uLocal_1083, "COMPUTERS");
							iVar1 = 3;
							while (iVar1 <= 26)
							{
								if (iVar1 != 7)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_628[iVar1]))
									{
										PED::DELETE_PED(&(iLocal_628[iVar1]));
									}
								}
								iVar1++;
							}
							iVar2 = 1;
							while (iVar2 <= 29)
							{
								if (iVar2 != 23)
								{
									if (ENTITY::DOES_ENTITY_EXIST(Local_657[iVar2 /*10*/]))
									{
										ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_657[iVar2 /*10*/]));
									}
								}
								iVar2++;
							}
							iLocal_570 = 0;
						}
					}
				}
			}
			if (func_202())
			{
				if (GlobalFunc_4924(iLocal_628[27]))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_628[27], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_628[27], 1);
					func_769(7);
				}
				else
				{
					func_769(6);
				}
			}
			break;
		
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				GlobalFunc_9807(-805.3523f, 177.565f, 71.84848f, -801.7042f, 168.1626f, 74.97459f, 9.0375f, -828.2097f, 179.0565f, 70.2544f, 154.3327f, 1, 0, 1, 0, 0);
				PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
				GlobalFunc_130(&(Local_657[30 /*10*/]));
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(1);
				iLocal_2888++;
			}
			break;
		
		case 3:
			if (CUTSCENE::IS_CUTSCENE_ACTIVE() && CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				GRAPHICS::ENABLE_MOVIE_SUBTITLES(1);
				iLocal_2998 = -1;
				func_109(8);
			}
			break;
	}
}







int func_202()//Position - 0x139F5
{
	if (((ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && ENTITY::DOES_ENTITY_EXIST(iLocal_628[27])) && !PED::IS_PED_INJURED(iLocal_628[27]))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_628[27], PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
		if (GlobalFunc_8324(iLocal_628[27], 1, 0, 0, 0))
		{
			return 1;
		}
		if (func_203())
		{
			return 1;
		}
	}
	return 0;
}

int func_203()//Position - 0x13A70
{
	if (((ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && ENTITY::DOES_ENTITY_EXIST(iLocal_628[27])) && !PED::IS_PED_INJURED(iLocal_628[27]))
	{
		if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_628[27]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_628[27]))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -804.2131f, 182.8889f, 75.42337f, -796.6697f, 186.3141f, 71.60547f, 10.69f, 0, 1, 0))
			{
				if (func_204(iLocal_628[27], 1126825984))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_204(int iParam0, float fParam1)//Position - 0x13B22
{
	return func_205(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_205(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x13B3A
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_212(iParam0, iParam1);
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
		iVar4 = func_208();
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



int func_208()//Position - 0x13DEC
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




int func_212(int iParam0, int iParam1)//Position - 0x13F03
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







void func_219(var uParam0, int iParam1)//Position - 0x1432E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_763)
	{
		if (uParam0->f_763[iVar0 /*5*/])
		{
			if (uParam0->f_763[iVar0 /*5*/].f_4 == iParam1)
			{
				if (uParam0->f_763[iVar0 /*5*/].f_1)
				{
					INTERIOR::UNPIN_INTERIOR(iParam1);
					GlobalFunc_700(&(uParam0->f_763[iVar0 /*5*/]));
					return;
				}
				else
				{
					uParam0->f_763[iVar0 /*5*/].f_2 = 1;
					uParam0->f_977 = 1;
					return;
				}
			}
		}
		iVar0++;
	}
}













void func_232(int iParam0)//Position - 0x14A0D
{
	if (func_234(iParam0) && !func_233(iParam0))
	{
		Local_978[iParam0 /*8*/].f_4 = 1;
	}
}

bool func_233(int iParam0)//Position - 0x14A34
{
	return Local_978[iParam0 /*8*/].f_4;
}

bool func_234(int iParam0)//Position - 0x14A45
{
	return Local_978[iParam0 /*8*/].f_3;
}







bool func_241(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, float fParam10, int iParam11, char* sParam12, bool bParam13, bool bParam14, int iParam15, bool bParam16)//Position - 0x14D46
{
	return func_242(uParam0, Param1, GlobalFunc_716(), Param4, Param7, iParam11, 3, 0, 0, 0, 0, sParam12, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), 0, bParam13, GlobalFunc_648(), 1, 0, bParam14, iParam15, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), bParam16, fParam10);
}

int func_242(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, char* sParam32, char* sParam33, char* sParam34, bool bParam35, float fParam36)//Position - 0x14D9E
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
	if (GlobalFunc_7931(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, uParam0->f_8, bParam25, iParam18, 0, 0, sParam32, sParam33, sParam34, iParam14, bParam26))
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











































int func_285(int iParam0, int iParam1)//Position - 0x1765C
{
	if (Local_978[iParam0 /*8*/].f_3 == 1 || Local_978[iParam0 /*8*/].f_4 == 1)
	{
		return 0;
	}
	Local_978[iParam0 /*8*/].f_3 = 1;
	Local_978[iParam0 /*8*/].f_4 = 0;
	Local_978[iParam0 /*8*/] = MISC::GET_GAME_TIMER();
	Local_978[iParam0 /*8*/].f_2 = iParam1;
	Local_978[iParam0 /*8*/].f_1 = 1;
	return 1;
}

void func_286()//Position - 0x176BF
{
	switch (iLocal_2888)
	{
		case 0:
			GlobalFunc_11067(5, "6. Leave the building", 0, 0, 0, 1);
			GlobalFunc_719(&uLocal_1083, "AMB@PROP_HUMAN_SEAT_COMPUTER@MALE@IDLE_B");
			func_290(&uLocal_1083, &cLocal_206);
			func_285(4, 0);
			GlobalFunc_10617(128, 0);
			GlobalFunc_10617(129, 0);
			GlobalFunc_164("LES1A_7", 7500, 1);
			iLocal_581 = 0;
			iLocal_2888++;
			break;
		
		case 1:
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != iLocal_322)
			{
				iLocal_571 = 1;
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LESTER_1A_LEAVE_OFFICE"))
				{
					AUDIO::STOP_AUDIO_SCENE("LESTER_1A_LEAVE_OFFICE");
				}
				func_109(7);
			}
			break;
	}
	switch (iLocal_581)
	{
		case 0:
			if ((!PED::IS_PED_INJURED(iLocal_628[3]) && OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1060.18f, -245.31f, 43.02f, 0.5f, joaat("prop_off_chair_01"), 0)) && STREAMING::HAS_ANIM_DICT_LOADED("amb@prop_human_seat_computer@male@base"))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_657[1 /*10*/]))
				{
					Local_657[1 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1060.18f, -245.31f, 43.02f, 0.5f, joaat("prop_off_chair_01"), 1, 0, 1);
				}
				ENTITY::SET_ENTITY_COORDS(Local_657[1 /*10*/], -1060.36f, -244.97f, 43.02f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_657[1 /*10*/], 117.4563f);
				ENTITY::FREEZE_ENTITY_POSITION(Local_657[1 /*10*/], 1);
				TASK::CLEAR_PED_TASKS(iLocal_628[3]);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_628[3], 16);
				TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_628[3], "amb@prop_human_seat_computer@male@base", "base", -1060.36f, -244.96f, 43.52f, 0f, 0f, -62.4524f, 1000f, -8f, -1, 1025, 0, 2, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[3], 0, 0);
				if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_628[3]))
				{
					AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_628[3]);
				}
				iLocal_581++;
			}
			break;
		
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1058.017f, -237.5871f, 43.02128f, -1053.271f, -246.441f, 48.72255f, 3.8125f, 0, 1, 0))
			{
				iLocal_581++;
			}
			break;
		
		case 2:
			if (!GlobalFunc_5170())
			{
				if (GlobalFunc_111())
				{
					GlobalFunc_4956();
				}
				GlobalFunc_173(&uLocal_385, 3, iLocal_628[3], "LIEngineer", 0, 1);
			}
			else if (STREAMING::HAS_ANIM_DICT_LOADED("AMB@PROP_HUMAN_SEAT_COMPUTER@MALE@IDLE_B"))
			{
				if (GlobalFunc_10618(&uLocal_385, &cLocal_88, "LS1A_BYE", 8, 0, 0, 0))
				{
					RECORDING::_0x293220DA1B46CEBC(2f, 5f, 3);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_355);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, "AMB@PROP_HUMAN_SEAT_COMPUTER@MALE@IDLE_B", "IDLE_E", -1060.36f, -244.96f, 43.52f, 0f, 0f, -62.4524f, 1000f, -8f, -1, 1024, 0, 2, 0);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, "amb@prop_human_seat_computer@male@base", "base", -1060.36f, -244.96f, 43.52f, 0f, 0f, -62.4524f, 1000f, -8f, -1, 1025, 0, 2, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_355);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_628[3], uLocal_355);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_355);
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_628[3], 5000, 2048, 4);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_628[3], PLAYER::PLAYER_PED_ID(), 4000, 2048, 4);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[3], 0, 0);
					iLocal_589 = MISC::GET_GAME_TIMER();
					iLocal_581++;
				}
			}
			break;
		
		case 3:
			if (!GlobalFunc_111() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_5130(PLAYER::PLAYER_PED_ID(), "GENERIC_BYE", 3);
				iLocal_581++;
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(iLocal_628[3]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_628[3], 1)) < 7.5625f)
			{
				if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_589) > 8000)
				{
					if (GlobalFunc_10618(&uLocal_385, &cLocal_88, "LS1A_HANG", 8, 0, 0, 0))
					{
						iLocal_589 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
	}
}




int func_290(var uParam0, char* sParam1)//Position - 0x17B69
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_874)
	{
		if (uParam0->f_874[iVar0 /*5*/])
		{
			if (MISC::ARE_STRINGS_EQUAL(uParam0->f_874[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_874[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_874[iVar0 /*5*/].f_1)
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
		TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE(sParam1);
		uParam0->f_874[iVar1 /*5*/] = 1;
		uParam0->f_874[iVar1 /*5*/].f_3 = MISC::GET_GAME_TIMER();
		uParam0->f_874[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_977 = 1;
		return 1;
	}
	return 0;
}

void func_291()//Position - 0x17C30
{
	struct<3> Var0;
	
	switch (iLocal_2888)
	{
		case 0:
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1053.66f, -231.77f, 43.99f, 0.5f, joaat("prop_security_case_01"), 0))
			{
				Local_657[4 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1053.66f, -231.77f, 43.99f, 0.5f, joaat("prop_security_case_01"), 1, 0, 1);
				GlobalFunc_11067(4, "5. Plant the bomb", 0, 0, 0, 1);
				GlobalFunc_4935();
				GlobalFunc_164("LES1A_6", 7500, 1);
				uLocal_356 = GlobalFunc_6799(Local_657[4 /*10*/]);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_356, "PROTOTYPE");
				bLocal_576 = false;
				iLocal_2888++;
			}
			break;
		
		case 1:
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REQUEST_CUTSCENE("LES_1A_MCS_4", 8);
				iLocal_568 = 0;
				iLocal_2888++;
			}
			break;
		
		case 2:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1053.825f, -234.7007f, 43.02116f, -1057.149f, -234.3535f, 46.20567f, 1f, 0, 1, 0) && CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				GlobalFunc_4956();
				GlobalFunc_8380(1, 1, 0, 0);
				CUTSCENE::START_CUTSCENE(0);
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LESTER_1A_RIG_EXPLOSIVE"))
				{
					AUDIO::STOP_AUDIO_SCENE("LESTER_1A_RIG_EXPLOSIVE");
				}
				GlobalFunc_719(&uLocal_1083, &cLocal_152);
				GlobalFunc_719(&uLocal_1083, &cLocal_128);
				GlobalFunc_719(&uLocal_1083, "amb@prop_human_seat_computer@male@base");
				GlobalFunc_718(&uLocal_1083, joaat("p_michael_backpack_s"));
				func_232(10);
				PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
				GlobalFunc_846(&uLocal_356);
				RECORDING::_0x293220DA1B46CEBC(6f, 0f, 3);
				RECORDING::_0x48621C9FCA3EBD28(4);
				iLocal_2888++;
			}
			break;
		
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(Local_657[1 /*10*/]))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(Local_657[1 /*10*/], 1) };
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_657[1 /*10*/]));
				MISC::CLEAR_AREA(Var0, 1f, 1, 1, 0, 0);
			}
			if (!bLocal_576)
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
				{
					RECORDING::_0x81CBAE94390F9F89();
					RECORDING::_0x293220DA1B46CEBC(0f, 8f, 3);
					bLocal_576 = true;
				}
			}
			if (bLocal_576)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				GlobalFunc_8380(0, 1, 0, 0);
				if (!ENTITY::DOES_ENTITY_EXIST(Local_657[29 /*10*/]) && STREAMING::HAS_MODEL_LOADED(joaat("p_michael_backpack_s")))
				{
					func_192(&(Local_657[29 /*10*/]), joaat("p_michael_backpack_s"), Local_310, 0);
					ENTITY::SET_ENTITY_COLLISION(Local_657[29 /*10*/], 0, 0);
					ENTITY::SET_ENTITY_COORDS(Local_657[29 /*10*/], Local_310, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_ROTATION(Local_657[29 /*10*/], Local_313, 2, 1);
					ENTITY::FREEZE_ENTITY_POSITION(Local_657[29 /*10*/], 1);
				}
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 0);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1000, 0, 1, 0);
				AUDIO::START_AUDIO_SCENE("LESTER_1A_LEAVE_OFFICE");
				iLocal_2888++;
			}
			break;
		
		case 4:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1772472848))
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1772472848, 0f, 1, 0);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1772472848, 4, 1, 1);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1772472848, 3, 1, 1);
					}
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
			else if (CAM::IS_SCREEN_FADED_IN())
			{
				func_109(6);
			}
			break;
		
		case -1:
			break;
	}
	if (!iLocal_568)
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", PLAYER::PLAYER_PED_ID(), 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 9, 9, 0, 0);
			iLocal_568 = 1;
		}
	}
}



void func_294()//Position - 0x1803D
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<3> Var11;
	int iVar14;
	char* sVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	bool bVar19;
	
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	PAD::_0x7F4724035FDCA1DD(2);
	if (iLocal_2888 >= 1 && iLocal_2888 < 5)
	{
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			if (iLocal_3017 == 1)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_357, "SET_SNAP_SPEED");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				iLocal_3017 = 0;
			}
		}
		else if (iLocal_3017 == 0)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_357, "SET_SNAP_SPEED");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(500f);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iLocal_3017 = 1;
		}
		if (PAD::_IS_USING_KEYBOARD_2(2))
		{
			fVar2 = PAD::GET_CONTROL_UNBOUND_NORMAL(2, 239);
			fVar3 = PAD::GET_CONTROL_UNBOUND_NORMAL(2, 240);
			if (fLocal_2994 != fVar2 || fLocal_2995 != fVar3)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_357, "SET_CURSOR");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar2);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar3);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				fLocal_2991 = (fLocal_2991 + SYSTEM::TIMESTEP());
			}
			fLocal_2994 = fVar2;
			fLocal_2995 = fVar3;
		}
		else
		{
			GlobalFunc_255(&iVar4, &iVar5, &uVar6, &uVar7, 0, 0);
			if (iVar4 != 0 || iVar5 != 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_357, "MOVE_CURSOR");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(((SYSTEM::TO_FLOAT(iVar4) * 5f) * SYSTEM::TIMESTEP()));
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(((SYSTEM::TO_FLOAT(iVar5) * 5f) * SYSTEM::TIMESTEP()));
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				fLocal_2991 = (fLocal_2991 + SYSTEM::TIMESTEP());
			}
		}
		if (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_358))
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_357, "SET_INPUT_EVENT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
				uLocal_358 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			}
		}
		else
		{
			iVar1 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_358);
			if (iLocal_2979 == 0 && fLocal_2991 >= 0.25f)
			{
				HUD::CLEAR_HELP(1);
				iLocal_2979 = 1;
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, "COMPUTERS_MOUSE_CLICK", 0, 1);
			GlobalFunc_565(389, 1, 0);
		}
		if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_359))
		{
			iVar8 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_359);
			if (iVar8 != -1)
			{
				iLocal_2982 = iVar8;
				Local_2899[iVar8 /*6*/].f_1 = 1;
				if (Local_2899[iVar8 /*6*/].f_4 && Local_2899[iVar8 /*6*/].f_5 != -1)
				{
					AUDIO::STOP_SOUND(Local_2899[iVar8 /*6*/].f_5);
					Local_2899[iVar8 /*6*/].f_4 = 0;
					iLocal_2981 = (iLocal_2981 - 1);
				}
				if (iLocal_2979 < 2)
				{
					if (Local_2899[0 /*6*/].f_1)
					{
						HUD::CLEAR_HELP(1);
						if (func_413() == 0)
						{
							iLocal_2979 = 3;
						}
						else
						{
							iLocal_2979 = 2;
						}
					}
				}
				AUDIO::PLAY_SOUND_FRONTEND(-1, "CLOSE_WINDOW", "LESTER1A_SOUNDS", 1);
				GlobalFunc_565(390, 1, 0);
			}
		}
	}
	if (iLocal_2888 >= 1)
	{
		if (!iLocal_578 && STREAMING::HAS_MODEL_LOADED(joaat("prop_monitor_01c")))
		{
			if (bLocal_577)
			{
				ENTITY::CREATE_MODEL_SWAP(Local_288, 1f, joaat("prop_monitor_01d"), joaat("prop_monitor_01c"), 1);
			}
			else
			{
				ENTITY::CREATE_MODEL_SWAP(Local_288, 1f, joaat("prop_monitor_li"), joaat("prop_monitor_01c"), 1);
			}
			GlobalFunc_5174(&uLocal_1083, joaat("prop_monitor_01c"));
			iLocal_578 = 1;
		}
	}
	switch (iLocal_2888)
	{
		case 0:
			if (!iLocal_588 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_357))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_357, "ADD_PROGRAM");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_2972[0]);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				GlobalFunc_726("LES1A_ANTVI");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_357, "ADD_PROGRAM");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_2972[1]);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				GlobalFunc_726("LES1A_MYCOM");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_357, "ADD_PROGRAM");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_2972[2]);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(7);
				GlobalFunc_726("LES1A_EXT");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_357, "ADD_PROGRAM");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_2972[3]);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
				GlobalFunc_726("LES1A_FOLD");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_357, "ADD_PROGRAM");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_2972[4]);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
				GlobalFunc_726("LES1A_PRINT");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_357, "ADD_PROGRAM");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_2972[5]);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
				GlobalFunc_726("LES1A_TRASH");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				iVar0 = 0;
				while (iVar0 <= 11)
				{
					if (Local_2899[iVar0 /*6*/] != -1)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_357, "SET_DATA_SLOT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Local_2899[iVar0 /*6*/]);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Local_2899[iVar0 /*6*/].f_2);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Local_2899[iVar0 /*6*/].f_3);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					}
					else
					{
						Local_2899[iVar0 /*6*/].f_1 = 1;
					}
					iVar0++;
				}
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_357, "RUN_PROGRAM");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				iLocal_588 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				RECORDING::_0x81CBAE94390F9F89();
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("LifeInvad_Chair", 0))
			{
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0) || CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				ENTITY::SET_ENTITY_COORDS(Local_657[1 /*10*/], -1060.36f, -244.97f, 43.02f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_657[1 /*10*/], 117.4563f);
				if (!GlobalFunc_709(PLAYER::PLAYER_PED_ID(), 1647992574, 1))
				{
					if (TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_657[1 /*10*/], 1), "PROP_HUMAN_SEAT_COMPUTER", 1.5f, 0))
					{
						TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_657[1 /*10*/], 1), 1.5f, -1);
					}
				}
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_357))
				{
					if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						GlobalFunc_4935();
					}
					sLocal_593 = "LS1A_LOOK";
					GlobalFunc_8380(0, 1, 1, 0);
					CUTSCENE::REMOVE_CUTSCENE();
					HUD::DISPLAY_RADAR(0);
					HUD::DISPLAY_HUD(0);
					HUD::CLEAR_PRINTS();
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
					GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_357, 255, 255, 255, 0, 0);
					GlobalFunc_702(1, 1, 1);
					func_411(8);
					func_411(6);
					func_411(7);
					iVar9 = 13;
					while (iVar9 <= 19)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_628[iVar9]))
						{
							PED::DELETE_PED(&(iLocal_628[iVar9]));
						}
						iVar9++;
					}
					iVar9 = 20;
					while (iVar9 <= 26)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_628[iVar9]))
						{
							PED::DELETE_PED(&(iLocal_628[iVar9]));
						}
						iVar9++;
					}
					func_72(&(Local_657[6 /*10*/]), -1000f);
					func_72(&(Local_657[7 /*10*/]), -1000f);
					func_72(&(Local_657[9 /*10*/]), -1000f);
					GlobalFunc_5174(&uLocal_1083, iLocal_211);
					GlobalFunc_5174(&uLocal_1083, iLocal_212);
					GlobalFunc_5174(&uLocal_1083, iLocal_213);
					GlobalFunc_5174(&uLocal_1083, joaat("prop_paper_ball"));
					GlobalFunc_5175(&uLocal_1083, &cLocal_170);
					GlobalFunc_5175(&uLocal_1083, &cLocal_164);
					GlobalFunc_5175(&uLocal_1083, &cLocal_182);
					GlobalFunc_5175(&uLocal_1083, &cLocal_140);
					GlobalFunc_5175(&uLocal_1083, &cLocal_146);
					GlobalFunc_5175(&uLocal_1083, &cLocal_152);
					GlobalFunc_5175(&uLocal_1083, &cLocal_158);
					GlobalFunc_718(&uLocal_1083, joaat("prop_monitor_01c"));
					iLocal_578 = 0;
					iVar10 = 16;
					while (iVar10 <= 21)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_657[iVar10 /*10*/]))
						{
							Var11 = { ENTITY::GET_ENTITY_COORDS(Local_657[iVar10 /*10*/], 1) };
							ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_657[iVar10 /*10*/]));
							MISC::CLEAR_AREA(Var11, 1f, 1, 1, 0, 0);
						}
						iVar10++;
					}
					GlobalFunc_574(385, 0);
					PAD::_SWITCH_TO_INPUT_MAPPING_SCHEME("Lester1A_PopUpMinigame");
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LESTER_1A_POPUP_MINIGAME"))
					{
						AUDIO::START_AUDIO_SCENE("LESTER_1A_POPUP_MINIGAME");
					}
					iVar0 = 0;
					while (iVar0 <= (iLocal_2993 - 1))
					{
						if ((Local_2899[iVar0 /*6*/] != -1 && Local_2899[iVar0 /*6*/].f_5 != -1) && Local_2899[iVar0 /*6*/].f_4)
						{
							AUDIO::SET_VARIABLE_ON_SOUND(Local_2899[iVar0 /*6*/].f_5, "State", 2f);
						}
						iVar0++;
					}
					iLocal_2980 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 4000));
					iLocal_2992 = 0;
					iLocal_594 = 0;
					iLocal_2888++;
				}
			}
			break;
		
		case 1:
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REQUEST_CUTSCENE("LES_1A_MCS_3", 8);
				iLocal_568 = 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_657[1 /*10*/]))
			{
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1060.174f, -245.2477f, 43.6942f, 1f, joaat("prop_off_chair_01"), 0))
				{
					Local_657[1 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1060.174f, -245.2477f, 43.6942f, 1f, joaat("prop_off_chair_01"), 1, 0, 1);
				}
			}
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if (iLocal_2979 == 0)
				{
					if (PAD::_IS_USING_KEYBOARD(0))
					{
						GlobalFunc_1("LES1A_16_KM");
					}
					else
					{
						GlobalFunc_1("LES1A_16");
					}
				}
				else if (iLocal_2979 == 1)
				{
					GlobalFunc_1("LES1A_161");
				}
				else if (iLocal_2979 == 2)
				{
					GlobalFunc_1("LES1A_162");
				}
				else if (iLocal_2979 == 3)
				{
					GlobalFunc_1("LES1A_17");
				}
				else if (iLocal_2979 == 4)
				{
					GlobalFunc_1("LES1A_18");
				}
			}
			if (func_413() == 0)
			{
				if (iLocal_2979 < 3)
				{
					HUD::CLEAR_HELP(1);
					iLocal_2979 = 3;
					sLocal_593 = "LS1A_SOFT";
					GlobalFunc_5105();
				}
			}
			if (MISC::GET_GAME_TIMER() > iLocal_2980)
			{
				iLocal_2980 = MISC::GET_GAME_TIMER();
				if (iLocal_2988 != 0)
				{
					iLocal_2980 = (iLocal_2980 + MISC::GET_RANDOM_INT_IN_RANGE(100, 250));
				}
				else
				{
					switch (iLocal_2992)
					{
						case 0:
							iLocal_2980 = (iLocal_2980 + MISC::GET_RANDOM_INT_IN_RANGE(3000, 4000));
							break;
						
						case 1:
							iLocal_2980 = (iLocal_2980 + MISC::GET_RANDOM_INT_IN_RANGE(500, 1000));
							break;
						
						case 2:
						case 3:
							iLocal_2980 = (iLocal_2980 + MISC::GET_RANDOM_INT_IN_RANGE(6000, 7000));
							break;
						
						default:
							if (func_413() == 0)
							{
								iLocal_2980 += 10000;
							}
							else
							{
								iLocal_2980 = (iLocal_2980 + MISC::GET_RANDOM_INT_IN_RANGE(7000, 10000));
							}
							break;
						}
				}
				if (func_413() < (iLocal_2993 - 1))
				{
					iLocal_2992++;
					iVar14 = -1;
					while ((iVar14 == -1 || iVar14 == iLocal_2982) || !Local_2899[iVar14 /*6*/].f_1)
					{
						iVar14 = MISC::GET_RANDOM_INT_IN_RANGE(0, iLocal_2993);
					}
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_357, "OPEN_POPUP");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar14);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					AUDIO::PLAY_SOUND_FRONTEND(-1, "OPEN_WINDOW", "LESTER1A_SOUNDS", 1);
					Local_2899[iVar14 /*6*/].f_1 = 0;
					if (Local_2899[iVar14 /*6*/].f_4 == 0 && Local_2899[iVar14 /*6*/].f_5 != -1)
					{
						if (iLocal_2981 < 6)
						{
							switch (iLocal_2981)
							{
								case 0:
									sVar15 = "POPUP_MUSIC_01";
									break;
								
								case 1:
									sVar15 = "POPUP_MUSIC_02";
									break;
								
								case 2:
									sVar15 = "POPUP_MUSIC_03";
									break;
								
								case 3:
									sVar15 = "POPUP_MUSIC_04";
									break;
								
								case 4:
									sVar15 = "POPUP_MUSIC_05";
									break;
								
								case 5:
									sVar15 = "POPUP_MUSIC_06";
									break;
								
								default:
									sVar15 = "POPUP_MUSIC_RND";
									break;
							}
						}
						else
						{
							sVar15 = "POPUP_MUSIC_RND";
						}
						AUDIO::PLAY_SOUND_FROM_COORD(Local_2899[iVar14 /*6*/].f_5, sVar15, -1059.63f, -244.61f, 43.92f, "LESTER1A_SOUNDS", 0, 0, 0);
						AUDIO::SET_VARIABLE_ON_SOUND(Local_2899[iVar14 /*6*/].f_5, "State", 2f);
						Local_2899[iVar14 /*6*/].f_4 = 1;
						iLocal_2981++;
					}
				}
			}
			switch (iVar1)
			{
				case 2:
					if (!bLocal_2983)
					{
						if (func_413() > 0)
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_357, "OPEN_ANTIVIRUS");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
							GlobalFunc_726("LES1A_AV2");
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							if (!iLocal_594)
							{
								sLocal_593 = "LS1A_CLICK";
								iLocal_594 = 1;
							}
							GlobalFunc_5105();
						}
						else
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_357, "OPEN_ANTIVIRUS");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
							GlobalFunc_726("LES1A_AV1");
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							bLocal_2983 = true;
							if (iLocal_2979 != 4)
							{
								HUD::CLEAR_HELP(1);
								iLocal_2979 = 4;
								sLocal_593 = "LS1A_SCAN";
								GlobalFunc_5105();
							}
						}
					}
					break;
				
				case 60:
					if (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_359))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_357, "LAST_POPUP_CLOSED");
						uLocal_359 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
					}
					break;
				
				case 50:
					if (bLocal_2983)
					{
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_2987, "FINDING_VIRUS", "LESTER1A_SOUNDS", 1);
						if (iLocal_2979 != 5)
						{
							HUD::CLEAR_HELP(1);
							iLocal_2979 = 5;
							sLocal_593 = "LS1A_SCAN2";
							GlobalFunc_5105();
						}
						iLocal_2988 = MISC::GET_GAME_TIMER();
						iLocal_2980 = iLocal_2988 + 100;
					}
					break;
				
				case 51:
					if (bLocal_2983)
					{
						HUD::CLEAR_HELP(1);
						GlobalFunc_5105();
						GlobalFunc_571(0, -1);
						iLocal_2989 = 0;
						sLocal_593 = "LS1A_DALEK";
						iLocal_2888++;
					}
					break;
			}
			if (iLocal_2988 != 0)
			{
				iVar16 = (MISC::GET_GAME_TIMER() - iLocal_2988);
				switch (iLocal_2986)
				{
					case 0:
						if (iVar16 >= 1000)
						{
							AUDIO::STOP_SOUND(iLocal_2987);
							iLocal_2986++;
						}
						else
						{
							iLocal_2984 = iVar17;
							iVar17 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar16) / 1000f) * 85f));
						}
						break;
					
					case 1:
						if (iVar16 >= 3000)
						{
							AUDIO::PLAY_SOUND_FRONTEND(iLocal_2987, "FINDING_VIRUS", "LESTER1A_SOUNDS", 1);
							iLocal_2986++;
						}
						else if (!iLocal_2985)
						{
							iLocal_2985 = 1;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_357, "PLAY_SCAN_ANIM");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
						break;
					
					case 2:
						if (iVar16 >= 3250)
						{
							AUDIO::STOP_SOUND(iLocal_2987);
							iLocal_2986++;
						}
						else
						{
							if (iLocal_2985)
							{
								iLocal_2985 = 0;
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_357, "PLAY_SCAN_ANIM");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							iLocal_2984 = iVar17;
							iVar17 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT((iVar16 - 3000)) / 250f) * 1f)) + 85;
						}
						break;
					
					case 3:
						if (iVar16 >= 3750)
						{
							AUDIO::PLAY_SOUND_FRONTEND(iLocal_2987, "FINDING_VIRUS", "LESTER1A_SOUNDS", 1);
							iLocal_2986++;
						}
						else if (!iLocal_2985)
						{
							iLocal_2985 = 1;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_357, "PLAY_SCAN_ANIM");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
						break;
					
					case 4:
						if (iVar16 >= 4500)
						{
							AUDIO::STOP_SOUND(iLocal_2987);
							iLocal_2986++;
						}
						else
						{
							if (iLocal_2985)
							{
								iLocal_2985 = 0;
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_357, "PLAY_SCAN_ANIM");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							iLocal_2984 = iVar17;
							iVar17 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT((iVar16 - 3750)) / 750f) * 3f)) + 86;
						}
						break;
					
					case 5:
						if (iVar16 >= 4650)
						{
							AUDIO::PLAY_SOUND_FRONTEND(iLocal_2987, "FINDING_VIRUS", "LESTER1A_SOUNDS", 1);
							iLocal_2986++;
						}
						else if (!iLocal_2985)
						{
							iLocal_2985 = 1;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_357, "PLAY_SCAN_ANIM");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
						break;
					
					case 6:
						if (iVar16 >= 5000)
						{
							AUDIO::STOP_SOUND(iLocal_2987);
							iLocal_2986++;
						}
						else
						{
							if (iLocal_2985)
							{
								iLocal_2985 = 0;
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_357, "PLAY_SCAN_ANIM");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							iLocal_2984 = iVar17;
							iVar17 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT((iVar16 - 4650)) / 350f) * 3f)) + 89;
						}
						break;
					
					case 7:
						if (iVar16 >= 6500)
						{
							AUDIO::PLAY_SOUND_FRONTEND(iLocal_2987, "FINDING_VIRUS", "LESTER1A_SOUNDS", 1);
							iLocal_2986++;
						}
						else if (!iLocal_2985)
						{
							iLocal_2985 = 1;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_357, "PLAY_SCAN_ANIM");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
						break;
					
					case 8:
						if (iVar16 >= 6850)
						{
							AUDIO::STOP_SOUND(iLocal_2987);
							iLocal_2986++;
						}
						else
						{
							if (iLocal_2985)
							{
								iLocal_2985 = 0;
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_357, "PLAY_SCAN_ANIM");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							iLocal_2984 = iVar17;
							iVar17 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT((iVar16 - 6500)) / 350f) * 2f)) + 92;
						}
						break;
					
					case 9:
						if (iVar16 >= 7350)
						{
							AUDIO::PLAY_SOUND_FRONTEND(iLocal_2987, "FINDING_VIRUS", "LESTER1A_SOUNDS", 1);
							iLocal_2986++;
						}
						else if (!iLocal_2985)
						{
							iLocal_2985 = 1;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_357, "PLAY_SCAN_ANIM");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
						break;
					
					case 10:
						if (iVar16 >= 8600)
						{
							AUDIO::STOP_SOUND(iLocal_2987);
							iLocal_2986++;
						}
						else
						{
							if (iLocal_2985)
							{
								iLocal_2985 = 0;
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_357, "PLAY_SCAN_ANIM");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							iLocal_2984 = iVar17;
							iVar17 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT((iVar16 - 7350)) / 1250f) * 6f)) + 94;
						}
						break;
					
					case 11:
						AUDIO::STOP_SOUND(iLocal_2987);
						AUDIO::PLAY_SOUND(-1, "Virus_Eradicated", "LESTER1A_SOUNDS", 0, 0, 1);
						iLocal_2984 = iVar17;
						iVar17 = 100;
						iLocal_2988 = 0;
						break;
				}
				if (iLocal_2984 != iVar17)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_357, "SET_SCAN_BAR");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar17);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar18 = 0;
			while (iVar18 < Local_2899)
			{
				if (Local_2899[iVar18 /*6*/].f_4 && Local_2899[iVar18 /*6*/].f_5 != -1)
				{
					AUDIO::SET_VARIABLE_ON_SOUND(Local_2899[iVar18 /*6*/].f_5, "TracksPlaying", SYSTEM::TO_FLOAT(GlobalFunc_254(iLocal_2981, 1, 12)));
				}
				iVar18++;
			}
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_357, 255, 255, 255, 0, 0);
			break;
		
		case 2:
			if ((MISC::GET_GAME_TIMER() - iLocal_2990) >= 100)
			{
				while (!bVar19)
				{
					if (iLocal_2989 >= iLocal_2993)
					{
						SYSTEM::SETTIMERA(0);
						bVar19 = true;
						iLocal_2888++;
					}
					else if (!Local_2899[iLocal_2989 /*6*/].f_1 && Local_2899[iLocal_2989 /*6*/] != -1)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_357, "CLOSE_POPUP");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_2989);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						if (Local_2899[iLocal_2989 /*6*/].f_4 && Local_2899[iLocal_2989 /*6*/].f_5 != -1)
						{
							AUDIO::STOP_SOUND(Local_2899[iLocal_2989 /*6*/].f_5);
							Local_2899[iLocal_2989 /*6*/].f_4 = 0;
						}
						AUDIO::PLAY_SOUND_FRONTEND(-1, "CLOSE_WINDOW", "LESTER1A_SOUNDS", 1);
						Local_2899[iLocal_2989 /*6*/].f_1 = 1;
						iLocal_2990 = MISC::GET_GAME_TIMER();
						bVar19 = true;
					}
					else
					{
						bVar19 = false;
					}
					iLocal_2989++;
				}
			}
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_357, 255, 255, 255, 0, 0);
			break;
		
		case 3:
			sLocal_593 = "DONTPLAY";
			if (GlobalFunc_5170())
			{
				if (GlobalFunc_10618(&uLocal_385, &cLocal_88, "LS1A_PASS", 8, 0, 0, 0))
				{
					iLocal_2888++;
				}
			}
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_357, 255, 255, 255, 0, 0);
			break;
		
		case 4:
			if (!GlobalFunc_111())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				GlobalFunc_571(0, -1);
				iLocal_2888++;
			}
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_357, 255, 255, 255, 0, 0);
			break;
		
		case 5:
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_357, 255, 255, 255, 0, 0);
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				GlobalFunc_8380(1, 1, 1, 0);
				if (!PED::IS_PED_INJURED(iLocal_628[3]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_628[3], "Life_invader_Engineer", 0, 0, 0);
				}
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_657[1 /*10*/], "LifeInvad_Chair", 0, joaat("prop_off_chair_01"), 0);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LESTER_1A_POPUP_MINIGAME"))
				{
					AUDIO::STOP_AUDIO_SCENE("LESTER_1A_POPUP_MINIGAME");
				}
				GlobalFunc_718(&uLocal_1083, joaat("ig_jay_norris"));
				GlobalFunc_718(&uLocal_1083, iLocal_211);
				GlobalFunc_718(&uLocal_1083, iLocal_212);
				GlobalFunc_718(&uLocal_1083, iLocal_213);
				GlobalFunc_718(&uLocal_1083, joaat("prop_paper_ball"));
				GlobalFunc_718(&uLocal_1083, joaat("prop_off_chair_01"));
				GlobalFunc_719(&uLocal_1083, &cLocal_146);
				GlobalFunc_719(&uLocal_1083, &cLocal_122);
				GlobalFunc_719(&uLocal_1083, &cLocal_182);
				GlobalFunc_719(&uLocal_1083, &cLocal_170);
				GlobalFunc_719(&uLocal_1083, &cLocal_164);
				GlobalFunc_719(&uLocal_1083, &cLocal_188);
				GlobalFunc_719(&uLocal_1083, "MOVE_P_M_ZERO_RUCKSACK");
				func_285(9, 0);
				func_285(6, 0);
				func_285(5, 0);
				func_285(8, 0);
				func_285(7, 0);
				HUD::DISPLAY_RADAR(1);
				HUD::DISPLAY_HUD(1);
				PAD::_RESET_INPUT_MAPPING_SCHEME();
				iLocal_2888++;
			}
			break;
		
		case 6:
			GlobalFunc_5178(&uLocal_1083, &uLocal_357);
			iLocal_606 = 0;
			iLocal_607 = 0;
			iLocal_2888++;
			break;
		
		case 7:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("LifeInvad_Chair", 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_657[1 /*10*/], 1);
				iLocal_606 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MICHAEL", 0))
			{
				RECORDING::_0x81CBAE94390F9F89();
				RECORDING::_0x293220DA1B46CEBC(0f, 6f, 3);
				func_377(PLAYER::PLAYER_PED_ID(), 9, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "MOVE_P_M_ZERO_RUCKSACK");
				AUDIO::START_AUDIO_SCENE("LESTER_1A_RIG_EXPLOSIVE");
				func_285(10, 0);
				iLocal_607 = 1;
			}
			if (iLocal_607 && iLocal_606)
			{
				GlobalFunc_8380(0, 1, 1, 0);
				func_109(5);
			}
			break;
		
		case -1:
			HUD::DISPLAY_RADAR(1);
			HUD::DISPLAY_HUD(1);
			break;
	}
	if (iLocal_2888 == 1)
	{
		if (!GlobalFunc_111())
		{
			if (iLocal_595 == -1)
			{
				iLocal_595 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			iLocal_595 = -1;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_593))
		{
			if (GlobalFunc_5170())
			{
				if (GlobalFunc_10618(&uLocal_385, &cLocal_88, sLocal_593, 8, 0, 0, 0))
				{
					if (MISC::ARE_STRINGS_EQUAL(sLocal_593, "LS1A_LOOK"))
					{
						sLocal_593 = "LS1A_PCCHT";
					}
					else
					{
						sLocal_593 = "";
					}
					iLocal_595 = -1;
					iLocal_596 = 0;
				}
			}
		}
		else if (!MISC::ARE_STRINGS_EQUAL(sLocal_593, "DONTPLAY"))
		{
			if ((iLocal_595 != -1 && (MISC::GET_GAME_TIMER() - iLocal_595) > 3500) || iLocal_596)
			{
				if (GlobalFunc_5170())
				{
					if (!iLocal_596)
					{
						if (GlobalFunc_10618(&uLocal_385, &cLocal_88, "LS1A_ENCOUR", 8, 0, 0, 0))
						{
							iLocal_596 = 1;
						}
					}
					else if (GlobalFunc_10618(&uLocal_385, &cLocal_88, "LS1A_DEAL", 8, 0, 0, 0))
					{
						iLocal_596 = 0;
					}
				}
			}
		}
	}
	if (!iLocal_568)
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			GlobalFunc_11106("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
			func_295(PLAYER::PLAYER_PED_ID(), 9, 15);
			iLocal_568 = 1;
		}
	}
}

void func_295(int iParam0, int iParam1, int iParam2)//Position - 0x1947F
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


















































































int func_377(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x2F983
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
		GlobalFunc_8357(iParam1);
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
			iVar7 = GlobalFunc_7980(iParam0, 1);
			if (!GlobalFunc_6667(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = GlobalFunc_7980(iParam0, 0);
			if (!GlobalFunc_6666(iVar10, 14, iVar8) && !GlobalFunc_6665(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = GlobalFunc_7980(iParam0, 2);
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
							GlobalFunc_8357(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = GlobalFunc_11231(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_377(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
								iVar3 = GlobalFunc_11231(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_377(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, iVar0, func_386(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (GlobalFunc_11071(iParam0, iVar10, &iVar4, 1))
							{
								func_377(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_377(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
					func_377(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_377(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_377(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_377(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_377(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
			GlobalFunc_8357(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11231(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_377(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = GlobalFunc_11231(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_377(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
					func_377(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
			func_377(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (GlobalFunc_11070(iParam0, iVar10, &iVar4))
		{
			func_377(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}









int func_386(int iParam0, int iParam1, int iParam2)//Position - 0x30D11
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
				if (GlobalFunc_10958(iParam0, iParam1, iVar0))
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
				if (GlobalFunc_10958(iParam0, iParam1, iVar1))
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
				return GlobalFunc_7980(iParam0, iParam2);
			}
		}
		else
		{
			return GlobalFunc_6669(iParam0, iParam1);
		}
	}
	return -99;
}

























void func_411(int iParam0)//Position - 0x359F0
{
	Local_978[iParam0 /*8*/].f_3 = 0;
	Local_978[iParam0 /*8*/].f_4 = 0;
	Local_978[iParam0 /*8*/] = 0;
	Local_978[iParam0 /*8*/].f_2 = 0;
	Local_978[iParam0 /*8*/].f_1 = 1;
	Local_978[iParam0 /*8*/].f_5 = 0;
	Local_978[iParam0 /*8*/].f_6 = 0;
	Local_978[iParam0 /*8*/].f_7 = 0;
}


int func_413()//Position - 0x35A58
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 11)
	{
		if (!Local_2899[iVar1 /*6*/].f_1)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}



void func_416()//Position - 0x35C36
{
	int iVar0;
	
	switch (iLocal_2888)
	{
		case 0:
			GlobalFunc_11067(3, "3. Follow Programmer", 0, 0, 0, 1);
			CUTSCENE::REQUEST_CUTSCENE("LES_1A_MCS_2", 8);
			GlobalFunc_9024(&uLocal_2063, PLAYER::PLAYER_PED_ID(), "Michael", 0);
			iLocal_568 = 0;
			GlobalFunc_718(&uLocal_1083, iLocal_211);
			GlobalFunc_718(&uLocal_1083, iLocal_212);
			GlobalFunc_718(&uLocal_1083, iLocal_213);
			GlobalFunc_718(&uLocal_1083, joaat("ig_jay_norris"));
			GlobalFunc_718(&uLocal_1083, joaat("prop_paper_ball"));
			GlobalFunc_718(&uLocal_1083, joaat("prop_off_chair_01"));
			GlobalFunc_718(&uLocal_1083, joaat("prop_monitor_01d"));
			GlobalFunc_724(&uLocal_1083, "COMPUTERS");
			GlobalFunc_724(&uLocal_1083, "Lester1A_01");
			GlobalFunc_719(&uLocal_1083, &cLocal_182);
			GlobalFunc_719(&uLocal_1083, &cLocal_170);
			GlobalFunc_719(&uLocal_1083, &cLocal_164);
			GlobalFunc_719(&uLocal_1083, &cLocal_116);
			GlobalFunc_719(&uLocal_1083, &cLocal_140);
			GlobalFunc_719(&uLocal_1083, &cLocal_146);
			func_290(&uLocal_1083, &cLocal_202);
			GlobalFunc_724(&uLocal_1083, "Lester1A_Qub3d");
			GlobalFunc_733(&uLocal_1083, "desktop_pc", &uLocal_357, 0);
			func_232(2);
			if (!PED::IS_PED_INJURED(iLocal_628[3]))
			{
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_628[3], 0);
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			}
			GlobalFunc_10617(111, 0);
			GlobalFunc_164("LES1A_5", 7500, 1);
			uLocal_356 = GlobalFunc_6797(iLocal_628[3], 0, 145);
			iLocal_590 = 1;
			RECORDING::_0x293220DA1B46CEBC(0f, 6f, 3);
			iLocal_2888++;
			break;
		
		case 1:
			func_285(5, 0);
			func_285(6, 0);
			func_285(8, 0);
			func_285(7, 0);
			func_285(11, 0);
			if (!ENTITY::DOES_ENTITY_EXIST(Local_657[1 /*10*/]))
			{
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1060.174f, -245.2477f, 43.6942f, 1f, joaat("prop_off_chair_01"), 0))
				{
					Local_657[1 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1060.174f, -245.2477f, 43.6942f, 1f, joaat("prop_off_chair_01"), 1, 0, 1);
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_628[3]))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1064.363f, -240.8858f, 43.04153f, -1062.237f, -245.068f, 44.89628f, 1.5f, 0, 1, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_628[3]) && CUTSCENE::HAS_CUTSCENE_LOADED())
					{
						GlobalFunc_4956();
						HUD::REMOVE_BLIP(&uLocal_356);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
						GlobalFunc_8380(1, 1, 1, 0);
						func_232(3);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_628[3], "Life_invader_Engineer", 0, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_657[1 /*10*/], "LifeInvad_Chair", 0, joaat("prop_off_chair_01"), 0);
						CUTSCENE::START_CUTSCENE(0);
						RECORDING::_0x293220DA1B46CEBC(6f, 0f, 3);
						RECORDING::_0x48621C9FCA3EBD28(4);
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LESTER_1A_FOLLOW_PROGRAMMER"))
						{
							AUDIO::STOP_AUDIO_SCENE("LESTER_1A_FOLLOW_PROGRAMMER");
						}
						iVar0 = 0;
						while (iVar0 <= (iLocal_2993 - 1))
						{
							if ((Local_2899[iVar0 /*6*/] != -1 && Local_2899[iVar0 /*6*/].f_5 != -1) && Local_2899[iVar0 /*6*/].f_4)
							{
								AUDIO::SET_VARIABLE_ON_SOUND(Local_2899[iVar0 /*6*/].f_5, "State", 1f);
							}
							iVar0++;
						}
						func_411(5);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_628[8]))
						{
							PED::DELETE_PED(&(iLocal_628[8]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_628[10]))
						{
							PED::DELETE_PED(&(iLocal_628[10]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_628[11]))
						{
							PED::DELETE_PED(&(iLocal_628[11]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_628[9]))
						{
							PED::DELETE_PED(&(iLocal_628[9]));
						}
						GlobalFunc_5174(&uLocal_1083, joaat("ig_jay_norris"));
						GlobalFunc_5174(&uLocal_1083, joaat("prop_off_chair_01"));
						GlobalFunc_5175(&uLocal_1083, "MOVE_P_M_ZERO_RUCKSACK");
						func_417(&uLocal_1083, &cLocal_202);
						GlobalFunc_5175(&uLocal_1083, "AMB@WORLD_HUMAN_STAND_IMPATIENT@MALE@No_Sign@base");
						GlobalFunc_5175(&uLocal_1083, "AMB@WORLD_HUMAN_STAND_IMPATIENT@MALE@No_Sign@idle_a");
						iLocal_588 = 0;
						func_109(4);
					}
				}
			}
			break;
	}
	if (!iLocal_568)
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", PLAYER::PLAYER_PED_ID(), 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 9, 0, 0, 0);
			iLocal_568 = 1;
		}
	}
}

void func_417(var uParam0, char* sParam1)//Position - 0x3601B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_874)
	{
		if (uParam0->f_874[iVar0 /*5*/])
		{
			if (MISC::ARE_STRINGS_EQUAL(uParam0->f_874[iVar0 /*5*/].f_4, sParam1))
			{
				if (uParam0->f_874[iVar0 /*5*/].f_1)
				{
					TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE(sParam1);
					GlobalFunc_700(&(uParam0->f_874[iVar0 /*5*/]));
					return;
				}
				else
				{
					uParam0->f_874[iVar0 /*5*/].f_2 = 1;
					uParam0->f_977 = 1;
					return;
				}
			}
		}
		iVar0++;
	}
}


void func_419()//Position - 0x360E7
{
	struct<3> Var0;
	struct<2> Var3;
	int iVar7;
	int iVar8;
	struct<3> Var9;
	
	Var0 = { -1057.939f, -224.8114f, 37.1567f };
	if (!INTERIOR::IS_INTERIOR_SCENE())
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LESTER_1A_BUY_CLOTHES"))
		{
			AUDIO::STOP_AUDIO_SCENE("LESTER_1A_BUY_CLOTHES");
		}
	}
	switch (iLocal_2888)
	{
		case 0:
			GlobalFunc_11067(2, "2. Goto Lifeinvader offices", 0, 0, 0, 1);
			func_285(0, 0);
			iLocal_602 = 0;
			iLocal_606 = 0;
			iLocal_607 = 0;
			iLocal_605 = 0;
			iLocal_2888++;
			break;
		
		case 1:
			switch (iLocal_605)
			{
				case 0:
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_608))
					{
						if (GlobalFunc_5170())
						{
							if (GlobalFunc_10618(&uLocal_385, &cLocal_88, sLocal_608, 8, 0, 0, 0))
							{
								sLocal_608 = "";
								iLocal_605++;
							}
						}
					}
					else
					{
						iLocal_605++;
					}
					break;
				
				case 1:
					if (GlobalFunc_8372(16))
					{
						if (GlobalFunc_5170())
						{
							if (GlobalFunc_10618(&uLocal_385, &cLocal_88, "LES1A_LUCK", 8, 0, 0, 0))
							{
								iLocal_605++;
							}
						}
					}
					else
					{
						iLocal_605 = 3;
					}
					break;
				
				case 2:
					if (GlobalFunc_8372(16))
					{
						if (GlobalFunc_8372(16))
						{
							if (GlobalFunc_5170() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
							{
								GlobalFunc_5130(PLAYER::PLAYER_PED_ID(), "GENERIC_BYE", 3);
								iLocal_605++;
							}
						}
					}
					else
					{
						iLocal_605 = 3;
					}
					break;
				
				case 3:
					if (HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON() && GlobalFunc_5171())
					{
						MISC::CLEAR_BIT(&(Local_360.f_13), 2);
						iLocal_605++;
					}
					break;
			}
			if (iLocal_605 > 2 || (!HUD::IS_MESSAGE_BEING_DISPLAYED() && !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()))
			{
				if (!bLocal_567)
				{
					StringCopy(&Var3, "LES1A_3", 16);
				}
				else
				{
					StringCopy(&Var3, "LES1A_4", 16);
				}
			}
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_306, 1) < 100f)
				{
					CUTSCENE::REQUEST_CUTSCENE("LES_1A_MCS_1", 8);
					GlobalFunc_9024(&uLocal_2063, PLAYER::PLAYER_PED_ID(), "Michael", 0);
					GlobalFunc_711(&uLocal_2063, "Michael", 9, 9, 0, 0);
					GlobalFunc_718(&uLocal_1083, iLocal_210);
					GlobalFunc_710(&uLocal_1083, iLocal_322);
					GlobalFunc_727(&uLocal_1083, &cLocal_82);
				}
			}
			else if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_306, 1) > 120f)
			{
				CUTSCENE::REMOVE_CUTSCENE();
				GlobalFunc_5174(&uLocal_1083, iLocal_210);
				func_219(&uLocal_1083, iLocal_322);
				GlobalFunc_5186(&uLocal_1083, &cLocal_82);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !bLocal_567)
			{
				if (func_424(&Local_360, Var0, -1046.287f, -219.5155f, 36.80881f, -1068.808f, -231.2342f, 38.17336f, 5.3125f, 1, &Var3, "", 1, 0, 1, -1))
				{
					MISC::CLEAR_BIT(&(Local_360.f_13), 2);
					bLocal_567 = true;
					iLocal_602 = 1;
				}
				else if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LESTER_1A_DRIVE_TO_LIFEINVADER"))
				{
					AUDIO::START_AUDIO_SCENE("LESTER_1A_DRIVE_TO_LIFEINVADER");
				}
			}
			else if (func_241(&Local_360, Local_306, -1043.332f, -231.8096f, 37.76416f, -1045.452f, -224.9536f, 40.95203f, 4.625f, 0, &Var3, 1, 1, -1, 0))
			{
				RECORDING::_0x293220DA1B46CEBC(5f, 0f, 3);
				iLocal_2888++;
			}
			else if (!bLocal_567 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_306) <= 900f)
			{
				MISC::CLEAR_BIT(&(Local_360.f_13), 2);
				bLocal_567 = true;
			}
			if (iLocal_602)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (GlobalFunc_530(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 4f, 1, 0f, 0, 1))
					{
						iLocal_602 = 0;
					}
				}
				else
				{
					iLocal_602 = 0;
				}
			}
			if (bLocal_567)
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LESTER_1A_DRIVE_TO_LIFEINVADER"))
				{
					AUDIO::STOP_AUDIO_SCENE("LESTER_1A_DRIVE_TO_LIFEINVADER");
				}
			}
			break;
		
		case 2:
			if (CUTSCENE::HAS_CUTSCENE_LOADED() && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cLocal_82))
			{
				func_232(0);
				GlobalFunc_719(&uLocal_1083, "MOVE_P_M_ZERO_RUCKSACK");
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Life_invader_Engineer", 2, iLocal_210, 0);
				CUTSCENE::START_CUTSCENE(0);
				GlobalFunc_8380(1, 1, 0, 0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				iLocal_2888++;
			}
			break;
		
		case 3:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				iVar7 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar7) && func_421(iVar7, GlobalFunc_625()))
				{
					GlobalFunc_9805(-1048.718f, -212.8369f, 36.70083f, -1027.84f, -233.548f, 39.98368f, 22.75f, -1053.51f, -222.5092f, 37.0833f, 241.3186f, GlobalFunc_625(), 1, 1, 1, 0, 0);
				}
				else
				{
					GlobalFunc_9807(-1043.131f, -221.3606f, 36.80114f, -1034.72f, -237.2896f, 42.92085f, 16.8125f, -1053.51f, -222.5092f, 37.0833f, 241.3186f, 1, 1, 1, 0, 0);
				}
				MISC::CLEAR_AREA_OF_PROJECTILES(Local_306, 20f, 0);
				MISC::CLEAR_AREA_OF_PEDS(Local_306, 20f, 0);
				PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
				PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
				iLocal_2888++;
			}
			break;
		
		case 4:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_628[3]))
			{
				iVar8 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Life_invader_Engineer", iLocal_210);
				if (ENTITY::DOES_ENTITY_EXIST(iVar8))
				{
					iLocal_628[3] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar8);
					iLocal_2888++;
				}
			}
			break;
		
		case 5:
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_322)
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LESTER_1A_FOLLOW_PROGRAMMER"))
				{
					AUDIO::START_AUDIO_SCENE("LESTER_1A_FOLLOW_PROGRAMMER");
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				RECORDING::_0x81CBAE94390F9F89();
				iLocal_606 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Life_invader_Engineer", 0))
			{
				TASK::WAYPOINT_RECORDING_GET_COORD(&cLocal_82, 2, &Var9);
				ENTITY::SET_ENTITY_COORDS(iLocal_628[3], Var9, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_628[3], 113.2956f);
				GlobalFunc_173(&uLocal_385, 3, iLocal_628[3], "LIEngineer", 0, 1);
				func_285(3, 0);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "MOVE_P_M_ZERO_RUCKSACK");
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 0);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 0);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 4000, 115.2213f, 0, 0);
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED() && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1046.603f, -232.4546f, 38.014f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 117.5673f);
				}
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(-1047.58f, -230.8085f, 39.8967f, 10f);
				iLocal_607 = 1;
				iLocal_570 = 1;
				GlobalFunc_8380(0, 1, 0, 0);
			}
			if (iLocal_607 && !iLocal_606)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((115.2213f - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())));
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
			if (iLocal_606 && iLocal_607)
			{
				iLocal_2888++;
			}
			break;
		
		case 6:
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				CUTSCENE::REMOVE_CUTSCENE();
				func_109(3);
			}
			break;
	}
}


int func_421(int iParam0, struct<3> Param1)//Position - 0x367D8
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if (!GlobalFunc_105(Param1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			MISC::GET_MODEL_DIMENSIONS(iVar0, &Var1, &Var4);
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar0))
			{
				Param1.x = (Param1.x + 3f);
				Param1.f_1 = (Param1.f_1 + 3f);
			}
			if ((Var4.x - Var1.x) > Param1.x)
			{
				return 1;
			}
			else if ((Var4.f_1 - Var1.f_1) > Param1.f_1)
			{
				return 1;
			}
			else if ((Var4.f_2 - Var1.f_2) > Param1.f_2)
			{
				return 1;
			}
		}
	}
	return 0;
}



bool func_424(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, float fParam10, int iParam11, char* sParam12, char* sParam13, bool bParam14, int iParam15, bool bParam16, int iParam17)//Position - 0x369FC
{
	return func_242(uParam0, Param1, GlobalFunc_716(), Param4, Param7, iParam11, 5, 0, 0, 0, 0, sParam12, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), sParam13, 0, bParam14, GlobalFunc_648(), 1, iParam15, bParam16, iParam17, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), 1, fParam10);
}





void func_429()//Position - 0x36C87
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	
	Var0 = { 126.87f, -218.96f, 53.56f };
	Var3 = { 130.71f, -217.81f, 53.56f };
	if (iLocal_2888 <= 7 && iLocal_2888 != -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_628[1]))
		{
			if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_279, 1) < 100f)
			{
				if (PED::GET_CLOSEST_PED(127.11f, -224.48f, 53.56f, 2f, 0, 1, &(iLocal_628[1]), 0, 1, -1))
				{
					GlobalFunc_173(&uLocal_385, 8, iLocal_628[1], "SHOPASSISTANT", 0, 1);
				}
			}
		}
		else if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_279, 1) > 120f)
		{
			iLocal_628[1] = 0;
		}
	}
	if (iLocal_2888 < 6 && iLocal_2888 != -1)
	{
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_279, 1) < 100f && ENTITY::DOES_ENTITY_EXIST(iLocal_628[1]))
			{
				CUTSCENE::REQUEST_CUTSCENE("LES_1A_MCS_0", 8);
				GlobalFunc_9024(&uLocal_2063, PLAYER::PLAYER_PED_ID(), "Michael", 0);
				GlobalFunc_711(&uLocal_2063, "Michael", 9, 9, 0, 0);
				GlobalFunc_712(&uLocal_2063, "Michael", 0, -1, 0, 0);
				GlobalFunc_9024(&uLocal_2063, iLocal_628[1], "Shop_Assistant", 0);
				GlobalFunc_5798(16);
			}
		}
		else if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_279, 1) > 120f || GlobalFunc_2233())
		{
			GlobalFunc_705(&uLocal_2063);
			CUTSCENE::REMOVE_CUTSCENE();
			GlobalFunc_5782(16);
		}
	}
	if (((iLocal_2888 > 3 || GlobalFunc_8372(16)) && iLocal_2888 < 6) && iLocal_2888 != -1)
	{
		if (!bLocal_610)
		{
			GlobalFunc_2571(1);
			bLocal_610 = true;
		}
		GlobalFunc_2536(1, 0);
	}
	else if (bLocal_610)
	{
		GlobalFunc_689();
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		bLocal_610 = false;
	}
	switch (iLocal_2888)
	{
		case 0:
			iLocal_598 = 0;
			if (GlobalFunc_8371(16))
			{
				func_285(9, 0);
				bLocal_567 = false;
				iLocal_579 = 0;
				GlobalFunc_10617(130, 1);
				GlobalFunc_10617(131, 1);
				MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 120f);
				GlobalFunc_11067(1, "1. Get clothes", 0, 0, 0, 1);
				GlobalFunc_8634(16, 1);
				func_70(16, 1);
				func_285(2, 0);
				bLocal_610 = false;
				iLocal_2888++;
			}
			break;
		
		case 1:
			if (func_480(&Local_360, Local_279, 128.4846f, -207.428f, 53.57613f, 127.0864f, -211.5256f, 56.73823f, 4.9375f, 1, "LES1A_1", 1, 1, -1) || (GlobalFunc_8372(16) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)))
			{
				GlobalFunc_5652(&Local_360, 1, 0);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LESTER_1A_DRIVE_TO_STORE"))
				{
					AUDIO::STOP_AUDIO_SCENE("LESTER_1A_DRIVE_TO_STORE");
				}
				AUDIO::START_AUDIO_SCENE("LESTER_1A_BUY_CLOTHES");
				if (GlobalFunc_469(GlobalFunc_8315()) < iLocal_599)
				{
					iVar6 = GlobalFunc_254((200 - GlobalFunc_469(GlobalFunc_8315())), 100, 200);
					func_468(12, "LES1A_TXT1", 1, 1, 0, 0, 0, 1, 0, 1);
					GlobalFunc_10829(GlobalFunc_8315(), 32, iVar6, 0, 0);
				}
				iLocal_2888++;
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LESTER_1A_DRIVE_TO_STORE"))
				{
					AUDIO::START_AUDIO_SCENE("LESTER_1A_DRIVE_TO_STORE");
				}
			}
			break;
		
		case 2:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (GlobalFunc_530(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 2f, 1, 1056964608, 0, 1))
				{
					iLocal_2888++;
				}
			}
			else
			{
				iLocal_2888++;
			}
			break;
		
		case 3:
			if (func_441(&Local_360, 126.0279f, -222.9916f, 53.5578f, 8f, 9f, 2f, 0, "", 1, 1, -1, 1))
			{
				GlobalFunc_5652(&Local_360, 1, 0);
				HUD::CLEAR_PRINTS();
				if ((!CAM::IS_GAMEPLAY_HINT_ACTIVE() && ENTITY::DOES_ENTITY_EXIST(iLocal_628[1])) && !PED::IS_PED_INJURED(iLocal_628[1]))
				{
					CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_628[1], 0f, 0f, 0f, 1, -1, 2000, 2000, 0);
					CAM::SET_GAMEPLAY_HINT_FOV(30f);
					CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.7f);
					CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(0f);
					CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(-0.02f);
					CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(0.1f);
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), 125.9931f, -221.0858f, 53.5578f, 1f, -1, 0.25f, 0, 193.8799f);
				iLocal_2888++;
			}
			break;
		
		case 4:
			if (GlobalFunc_10618(&uLocal_385, &cLocal_88, "LES1A_MCS0LI", 8, 0, 0, 0))
			{
				iLocal_2888++;
			}
			break;
		
		case 5:
			if (((CUTSCENE::IS_CUTSCENE_ACTIVE() && CUTSCENE::HAS_CUTSCENE_LOADED()) && !PED::IS_PED_INJURED(iLocal_628[1])) && !GlobalFunc_111())
			{
				RECORDING::_0x293220DA1B46CEBC(7f, 0f, 3);
				RECORDING::_0x48621C9FCA3EBD28(4);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_628[1], "Shop_Assistant", 0, 0, 0);
				CUTSCENE::START_CUTSCENE(0);
				func_70(16, 1);
				GlobalFunc_8380(1, 1, 0, 0);
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
				sLocal_608 = "";
				iLocal_2888++;
			}
			break;
		
		case 6:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::STOP_GAMEPLAY_HINT(1);
				}
				if (bLocal_610)
				{
					GlobalFunc_689();
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				}
				if (CUTSCENE::_HAS_CUTSCENE_CUT_THIS_FRAME())
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 4000 && CUTSCENE::GET_CUTSCENE_TIME() < 5000)
					{
						if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							HUD::CLEAR_HELP(1);
						}
						sLocal_608 = "LS1_SHOPHLP_1";
					}
					else if (CUTSCENE::GET_CUTSCENE_TIME() > 7500 && CUTSCENE::GET_CUTSCENE_TIME() < 13000)
					{
						if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							HUD::CLEAR_HELP(1);
						}
						sLocal_608 = "";
					}
					else if (CUTSCENE::GET_CUTSCENE_TIME() > 13000 && CUTSCENE::GET_CUTSCENE_TIME() < 15000)
					{
						if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							HUD::CLEAR_HELP(1);
						}
						sLocal_608 = "LS1_SHOPHLP_2";
					}
					else if (CUTSCENE::GET_CUTSCENE_TIME() > 18000 && CUTSCENE::GET_CUTSCENE_TIME() < 20000)
					{
						if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							HUD::CLEAR_HELP(1);
						}
						sLocal_608 = "LS1_SHOPHLP_3";
					}
					else if (CUTSCENE::GET_CUTSCENE_TIME() > 22000)
					{
						if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							HUD::CLEAR_HELP(1);
						}
						sLocal_608 = "";
					}
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_608))
				{
					GlobalFunc_5801(16, sLocal_608);
				}
				else if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::CLEAR_HELP(1);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				RECORDING::_0x81CBAE94390F9F89();
				RECORDING::_0x293220DA1B46CEBC(0f, 6f, 3);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				GlobalFunc_164("LES1A_2", 7500, 1);
				func_435(&(iLocal_612[0]), Var0, 0);
				func_435(&(iLocal_612[1]), Var3, 0);
				GlobalFunc_8380(0, 1, 0, 0);
				GlobalFunc_5782(16);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 0);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1000, 0, 1, 0);
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						HUD::CLEAR_HELP(1);
					}
				}
				iLocal_598 = 1;
				iLocal_604 = MISC::GET_GAME_TIMER() + 3000;
				sLocal_608 = "";
				iLocal_2888++;
			}
			break;
		
		case 7:
			if (GlobalFunc_8372(16))
			{
				if (MISC::GET_GAME_TIMER() > iLocal_604)
				{
					func_70(16, 0);
				}
				if (iLocal_583)
				{
					iVar11 = func_386(PLAYER::PLAYER_PED_ID(), 3, -1);
					iVar12 = func_386(PLAYER::PLAYER_PED_ID(), 4, -1);
					func_434(0, &iVar13, &uVar14);
					if (iLocal_616 != iVar11)
					{
						iVar9 = 1;
					}
					if (iLocal_617 != iVar12)
					{
						iVar10 = 1;
					}
					if (((((iVar11 == 70 || iVar11 == 71) || iVar11 == 72) || iVar11 == 73) || iVar11 == 74) || iVar11 == 75)
					{
						GlobalFunc_846(&(iLocal_612[0]));
						iVar7 = 1;
					}
					else if (!HUD::DOES_BLIP_EXIST(iLocal_612[0]))
					{
						func_435(&(iLocal_612[0]), Var0, 0);
					}
					if ((((((((((((((((((((((((((((((((((((iVar12 == 41 || iVar12 == 42) || iVar12 == 43) || iVar12 == 44) || iVar12 == 45) || iVar12 == 96) || iVar12 == 97) || iVar12 == 98) || iVar12 == 99) || iVar12 == 100) || iVar12 == 101) || iVar12 == 102) || iVar12 == 103) || iVar12 == 104) || iVar12 == 105) || iVar12 == 106) || iVar12 == 107) || iVar12 == 108) || iVar12 == 109) || iVar12 == 110) || iVar12 == 111) || iVar12 == 55) || iVar12 == 56) || iVar12 == 57) || iVar12 == 58) || iVar12 == 59) || iVar12 == 60) || iVar12 == 61) || iVar12 == 62) || iVar12 == 63) || iVar12 == 64) || iVar12 == 65) || iVar12 == 66) || iVar12 == 67) || iVar12 == 68) || iVar12 == 69) || iVar12 == 70)
					{
						GlobalFunc_846(&(iLocal_612[1]));
						iVar8 = 1;
					}
					else if (!HUD::DOES_BLIP_EXIST(iLocal_612[1]))
					{
						func_435(&(iLocal_612[1]), Var3, 0);
					}
					if ((!HUD::DOES_BLIP_EXIST(iLocal_612[0]) && !HUD::DOES_BLIP_EXIST(iLocal_612[1])) && ((iVar9 && iVar13 == 3) || (iVar10 && iVar13 == 4)))
					{
						if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_608))
						{
							sLocal_608 = "LES1A_FULL";
						}
					}
					else if (iVar9 && iVar13 == 3)
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_612[0]))
						{
							if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_608))
							{
								sLocal_608 = "LES1A_UP_N";
							}
						}
						else if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_608))
						{
							sLocal_608 = "LES1A_UP_Y";
						}
					}
					else if (iVar10 && iVar13 == 4)
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_612[1]))
						{
							if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_608))
							{
								sLocal_608 = "LES1A_LOW_N";
							}
						}
						else if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_608))
						{
							sLocal_608 = "LES1A_LOW_Y";
						}
					}
					if (((iVar9 && HUD::DOES_BLIP_EXIST(iLocal_612[0])) && iVar13 == 3) || ((iVar10 && HUD::DOES_BLIP_EXIST(iLocal_612[1])) && iVar13 == 4))
					{
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							GlobalFunc_159("LES1A_H2", 3000);
						}
					}
				}
				else if (!GlobalFunc_8388(16))
				{
					iLocal_616 = func_386(PLAYER::PLAYER_PED_ID(), 3, -1);
					iLocal_617 = func_386(PLAYER::PLAYER_PED_ID(), 4, -1);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_608))
					{
						if (GlobalFunc_5170())
						{
							if (GlobalFunc_10618(&uLocal_385, &cLocal_88, sLocal_608, 8, 0, 0, 0))
							{
								sLocal_608 = "";
							}
						}
					}
				}
				if (!GlobalFunc_8388(16))
				{
					iLocal_583 = 0;
				}
				else
				{
					iLocal_583 = 1;
				}
				if ((!GlobalFunc_8388(16) && iVar7) && iVar8)
				{
					GlobalFunc_695(0);
					func_70(16, 1);
					iLocal_566 = 1;
					GlobalFunc_7139(&Local_360, 0);
					Global_89962.f_12[0] = iVar11;
					Global_89962.f_12[1] = iVar12;
					HUD::CLEAR_HELP(1);
					func_109(2);
				}
			}
			break;
		
		case -1:
			break;
	}
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_323))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != iLocal_323)
		{
			if (!iLocal_579)
			{
				if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-565026078) == 1)
				{
					if (MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(-565026078)) < 0.1f)
					{
						Global_2268 = 0;
						iLocal_579 = 1;
					}
				}
				else
				{
					GlobalFunc_10617(75, 1);
				}
			}
		}
		else
		{
			func_431();
			PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
			if (!PED::IS_PED_INJURED(iLocal_628[2]))
			{
				if (iLocal_586 < 2 && MISC::GET_GAME_TIMER() > iLocal_587)
				{
					GlobalFunc_173(&uLocal_385, 8, iLocal_628[2], "Lester", 0, 1);
					AUDIO::PLAY_PAIN(iLocal_628[2], 19, 0, 0);
					iLocal_587 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 5000));
					iLocal_586++;
				}
				else if (GlobalFunc_5170() && MISC::GET_GAME_TIMER() > iLocal_587)
				{
					if (GlobalFunc_10618(&uLocal_385, &cLocal_88, "LES1A_LEAVE", 8, 0, 0, 0))
					{
						iLocal_587 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(12000, 15000));
					}
				}
			}
			GlobalFunc_10617(75, 0);
			iLocal_579 = 0;
			Global_2268 = 1;
		}
	}
	if ((ENTITY::DOES_ENTITY_EXIST(iLocal_628[2]) && !PED::IS_PED_INJURED(iLocal_628[2])) && (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_628[2], 1)) > 900f || iLocal_579))
	{
		GlobalFunc_5175(&uLocal_1083, "MissLester1ALeadInOut");
		if (ENTITY::IS_ENTITY_ATTACHED(Local_657[0 /*10*/]))
		{
			ENTITY::DETACH_ENTITY(Local_657[0 /*10*/], 1, 1);
		}
		OBJECT::DELETE_OBJECT(&(Local_657[0 /*10*/]));
		PED::DELETE_PED(&(iLocal_628[2]));
		GlobalFunc_562(44);
	}
}


void func_431()//Position - 0x379CF
{
	int iVar0;
	
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
	if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
	{
		if (!(iVar0 == joaat("weapon_unarmed") || iVar0 == joaat("object")))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
		}
	}
}



bool func_434(int iParam0, var uParam1, var uParam2)//Position - 0x37A7E
{
	*uParam1 = 12;
	*uParam2 = -99;
	if (GlobalFunc_42(iParam0))
	{
		*uParam1 = Global_90014.f_373[iParam0];
		*uParam2 = Global_90014.f_369[iParam0];
	}
	return *uParam2 != -99;
}

void func_435(var uParam0, struct<3> Param1, int iParam4)//Position - 0x37ABD
{
	GlobalFunc_846(uParam0);
	*uParam0 = GlobalFunc_5104(Param1, iParam4);
}






bool func_441(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, char* sParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x381FA
{
	return func_242(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 3, 0, 0, 0, 0, sParam8, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), 0, bParam9, GlobalFunc_648(), 0, 0, bParam10, iParam11, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), bParam12, 1065353216);
}



























int func_468(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x38FDF
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
	if (func_469(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
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

int func_469(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x39077
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
			func_470(1);
			GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14373), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_470(int iParam0)//Position - 0x39535
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
	
	Global_16760 = 0;
	Global_2868 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2832[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (GlobalFunc_39(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2270[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2270[iVar1 /*15*/].f_4)
					{
						if (Global_2832[iVar0] == 0)
						{
							Global_2796[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_2264, 3))
								{
									iVar2 = 42;
									Global_14555 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14555 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2270[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								GlobalFunc_726(&(Global_2270[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							Global_2832[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2270[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2270[iVar1 /*15*/].f_4)
					{
						if (Global_2832[iVar0] == 0)
						{
							Global_2796[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar3 /*104*/].f_99[Global_14393] == 1)
											{
												Global_16760++;
											}
										}
									}
									iVar3++;
								}
								func_471(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2270[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16760), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_68245)
								{
									iVar4 = 0;
									iVar5 = 0;
									while (iVar4 < 12)
									{
										if (Global_2543383[iVar4 /*104*/].f_24 != 0)
										{
											if (Global_2543383[iVar4 /*104*/].f_28 == 0)
											{
												if (Global_2543383[iVar4 /*104*/].f_99[Global_14393] == 1)
												{
													iVar5++;
												}
											}
										}
										iVar4++;
									}
									func_471(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2270[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar5), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14393)
									{
										case 0:
											iVar6 = Global_35962;
											break;
										
										case 1:
											iVar6 = Global_35963;
											break;
										
										case 2:
											iVar6 = Global_35964;
											break;
										
										default:
											break;
									}
									func_471(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2270[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_471(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2270[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16755), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2270[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								GlobalFunc_726(&(Global_2270[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2269);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (MISC::IS_BIT_SET(Global_2264, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2270[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								GlobalFunc_726(&(Global_2270[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_2264, 3))
								{
									iVar8 = 42;
									Global_14555 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14555 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2270[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								GlobalFunc_726(&(Global_2270[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2270[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								GlobalFunc_726(&(Global_2270[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else
							{
								func_471(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2270[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2832[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_471(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x399CB
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam7))
	{
		GlobalFunc_726(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam8))
	{
		GlobalFunc_726(iParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam9))
	{
		GlobalFunc_726(iParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam10))
	{
		GlobalFunc_726(iParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam11))
	{
		GlobalFunc_726(iParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}









int func_480(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, float fParam10, int iParam11, char* sParam12, bool bParam13, bool bParam14, int iParam15)//Position - 0x39F03
{
	return func_242(uParam0, Param1, GlobalFunc_716(), Param4, Param7, iParam11, 1, 0, 0, 0, 0, sParam12, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), 0, bParam13, GlobalFunc_648(), 1, 0, bParam14, iParam15, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), 1, fParam10);
}







void func_487()//Position - 0x3A1FC
{
	struct<3> Var0;
	
	Var0 = { 1273.729f, -1712.067f, 53.7715f };
	switch (iLocal_2888)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_628[2]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
				{
					iLocal_628[2] = Global_86864.f_9[0];
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_628[2], 1, 1);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_628[2], iLocal_564);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_657[0 /*10*/]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[0]))
				{
					Local_657[0 /*10*/] = Global_86864.f_28[0];
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_657[0 /*10*/], 1, 1);
				}
			}
			if ((ENTITY::DOES_ENTITY_EXIST(iLocal_628[2]) && ENTITY::DOES_ENTITY_EXIST(Local_657[0 /*10*/])) && !PED::IS_PED_INJURED(iLocal_628[2]))
			{
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(1368.169f, -1686.164f, 68.78043f, 1189.981f, -1764.964f, 31.71125f, 91.5f, 0, 0, 1);
				iLocal_563 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(1279.403f, -1730.471f, 51.56739f, 20.3125f, 0f, 0);
				AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_LESTERS_DOGS", 0, 1);
				GlobalFunc_719(&uLocal_1083, "MissLester1ALeadInOut");
				GlobalFunc_10617(75, 0);
				iLocal_3019 = -99;
				iLocal_2888++;
			}
			break;
		
		case 1:
			if ((CUTSCENE::HAS_CUTSCENE_LOADED() && !PED::IS_PED_INJURED(iLocal_628[2])) && ENTITY::DOES_ENTITY_EXIST(Local_657[0 /*10*/]))
			{
				GlobalFunc_8380(1, 1, 1, 0);
				HUD::CLEAR_HELP(1);
				HUD::CLEAR_PRINTS();
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_628[2], "Lester", 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_657[0 /*10*/], "Wheelchair_Lester", 0, 0, 0);
				GlobalFunc_719(&uLocal_1083, "MOVE_P_M_ZERO_RUCKSACK");
				func_295(PLAYER::PLAYER_PED_ID(), 9, 15);
				iLocal_3019 = GlobalFunc_7138(PLAYER::PLAYER_PED_ID(), PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0), PED::GET_PED_PROP_TEXTURE_INDEX(PLAYER::PLAYER_PED_ID(), 0), 0);
				if (iLocal_3019 != 0)
				{
					func_295(PLAYER::PLAYER_PED_ID(), 14, iLocal_3019);
				}
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				iLocal_575 = 0;
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
				iLocal_2888++;
			}
			break;
		
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				GlobalFunc_9807(1275.839f, -1719.561f, 53.53926f, 1270.735f, -1708.343f, 56.78841f, 9.6875f, Local_276, 115.1431f, 1, 1, 1, 0, 0);
				GlobalFunc_10606(Local_276, 115.1431f, 0, 145);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
				PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 1);
				PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
				PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
				MISC::CLEAR_AREA_OF_PEDS(1272.146f, -1716.186f, 55.14111f, 23.75f, 0);
				MISC::CLEAR_AREA_OF_PEDS(1283.72f, -1751.16f, 51.03f, 12.688f, 0);
				CLOCK::SET_CLOCK_TIME(7, 0, 0);
				iLocal_2888++;
			}
			break;
		
		case 3:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				func_377(PLAYER::PLAYER_PED_ID(), 9, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				func_377(PLAYER::PLAYER_PED_ID(), 14, iLocal_3019, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "MOVE_P_M_ZERO_RUCKSACK");
				PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 202.4595f);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 0);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1000, 0, 1, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				RECORDING::_0x81CBAE94390F9F89();
				RECORDING::_0x293220DA1B46CEBC(0f, 6f, 3);
				iLocal_575 = 1;
			}
			if ((iLocal_575 && STREAMING::HAS_ANIM_DICT_LOADED("MissLester1ALeadInOut")) && STREAMING::HAS_ANIM_DICT_LOADED("MOVE_P_M_ZERO_RUCKSACK"))
			{
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(1368.169f, -1686.164f, 68.78043f, 1189.981f, -1764.964f, 31.71125f, 91.5f, 1);
				if (iLocal_563 != -1)
				{
					VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(iLocal_563);
					iLocal_563 = -1;
				}
				if (!PED::IS_PED_INJURED(iLocal_628[2]))
				{
					iLocal_618[0] = PED::CREATE_SYNCHRONIZED_SCENE(1277.661f, -1713.688f, 54.41f, 0f, 0f, -151.56f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[2], iLocal_618[0], "MissLester1ALeadInOut", "Lester_1_INT_LeadIn_loop_Lester", 1000f, -8f, 1, 144, 1148846080, 0);
					func_488(&(Local_657[0 /*10*/]), iLocal_618[0], "Lester_1_INT_LeadIn_loop_wChair", "MissLester1ALeadInOut", 1000f, -8f, 1);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_618[0], 1);
				}
				AUDIO::PLAY_PAIN(iLocal_628[2], 19, 0, 0);
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
				iLocal_575 = 0;
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				PLAYER::SET_MAX_WANTED_LEVEL(5);
				iLocal_2888++;
			}
			break;
		
		case 4:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			func_109(1);
			break;
		
		case -1:
			GlobalFunc_8380(0, 1, 1, 0);
			break;
	}
}

void func_488(var uParam0, var uParam1, char* sParam2, char[4] cParam3, float fParam4, float fParam5, int iParam6)//Position - 0x3A70E
{
	uParam0->f_4 = { 0f, 0f, 0f };
	uParam0->f_3 = 0;
	uParam0->f_2 = 1;
	uParam0->f_8 = cParam3;
	uParam0->f_9 = sParam2;
	ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(*uParam0, uParam1, sParam2, cParam3, fParam4, fParam5, iParam6, 1148846080);
}





























void func_517()//Position - 0x3CF05
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (Local_325[iVar0 /*7*/] != 0 && Local_325[iVar0 /*7*/].f_1)
		{
			bVar1 = false;
			fVar2 = 0f;
			func_519(iVar0, &bVar1, &fVar2);
			if (bVar1 != Local_325[iVar0 /*7*/].f_4 || fVar2 != Local_325[iVar0 /*7*/].f_2)
			{
				if (Local_325[iVar0 /*7*/].f_5 > 0 && Local_325[iVar0 /*7*/].f_6 > 0)
				{
					fVar3 = GlobalFunc_253((IntToFloat((MISC::GET_GAME_TIMER() - Local_325[iVar0 /*7*/].f_6)) / SYSTEM::TO_FLOAT(Local_325[iVar0 /*7*/].f_5)), 0f, 1f);
					if (fVar3 != 1f)
					{
						fVar2 = (Local_325[iVar0 /*7*/].f_3 + (fVar3 * (Local_325[iVar0 /*7*/].f_2 - Local_325[iVar0 /*7*/].f_3)));
						bVar1 = true;
					}
					else
					{
						bVar1 = Local_325[iVar0 /*7*/].f_4;
						fVar2 = Local_325[iVar0 /*7*/].f_2;
						Local_325[iVar0 /*7*/].f_1 = 0;
						Local_325[iVar0 /*7*/].f_5 = 0;
						Local_325[iVar0 /*7*/].f_6 = 0;
						Local_325[iVar0 /*7*/].f_1 = 0;
					}
				}
				else
				{
					if (Local_325[iVar0 /*7*/].f_4)
					{
						bVar1 = true;
					}
					else
					{
						bVar1 = false;
					}
					fVar2 = Local_325[iVar0 /*7*/].f_2;
					Local_325[iVar0 /*7*/].f_5 = 0;
					Local_325[iVar0 /*7*/].f_6 = 0;
					Local_325[iVar0 /*7*/].f_1 = 0;
				}
				if (fVar2 != 100f)
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Local_325[iVar0 /*7*/], fVar2, 0, 1);
				}
				if (bVar1)
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_325[iVar0 /*7*/], 1, 0, 1);
				}
				else
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_325[iVar0 /*7*/], 0, 0, 1);
				}
			}
			else
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Local_325[iVar0 /*7*/], fVar2, 0, 1);
				if (bVar1)
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_325[iVar0 /*7*/], 1, 0, 1);
				}
				else
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_325[iVar0 /*7*/], 0, 0, 1);
				}
				Local_325[iVar0 /*7*/].f_5 = 0;
				Local_325[iVar0 /*7*/].f_6 = 0;
				Local_325[iVar0 /*7*/].f_1 = 0;
			}
		}
		iVar0++;
	}
}


void func_519(int iParam0, int iParam1, float fParam2)//Position - 0x3D116
{
	int iVar0;
	
	if (Local_325[iParam0 /*7*/] != 0)
	{
		*fParam2 = OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(Local_325[iParam0 /*7*/]);
		iVar0 = OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(Local_325[iParam0 /*7*/]);
		*iParam1 = GlobalFunc_725(iVar0);
	}
}


void func_521()//Position - 0x3D178
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	bool bVar7;
	int iVar8;
	char* sVar9;
	
	if (iLocal_2892 == 1)
	{
		if (iLocal_2886 == 0)
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(250);
				}
			}
			else
			{
				func_109(iLocal_2893);
			}
		}
		else if (iLocal_2886 == 3)
		{
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			func_699();
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
			GlobalFunc_173(&uLocal_385, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			GlobalFunc_762(&uLocal_1083);
			if (GlobalFunc_7698())
			{
				GlobalFunc_8368();
			}
			if (!GlobalFunc_188())
			{
				func_693(iLocal_2893, &Var3, &fVar6);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var3, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fVar6);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
				GlobalFunc_5184(&uLocal_1083, Var3, 50f, 0);
			}
			switch (iLocal_2887)
			{
				case 0:
					CUTSCENE::REQUEST_CUTSCENE("lester_1_int", 8);
					GlobalFunc_712(&uLocal_2063, "Lester", 1, 0, 0, 0);
					GlobalFunc_718(&uLocal_1083, joaat("ig_lestercrest"));
					GlobalFunc_718(&uLocal_1083, joaat("prop_wheelchair_01_s"));
					break;
				
				case 1:
					GlobalFunc_719(&uLocal_1083, "MOVE_P_M_ZERO_RUCKSACK");
					break;
				
				case 2:
					GlobalFunc_719(&uLocal_1083, "MOVE_P_M_ZERO_RUCKSACK");
					break;
				
				case 3:
					GlobalFunc_718(&uLocal_1083, iLocal_210);
					GlobalFunc_718(&uLocal_1083, iLocal_211);
					GlobalFunc_718(&uLocal_1083, iLocal_212);
					GlobalFunc_718(&uLocal_1083, iLocal_213);
					GlobalFunc_727(&uLocal_1083, &cLocal_82);
					GlobalFunc_719(&uLocal_1083, "MOVE_P_M_ZERO_RUCKSACK");
					break;
				
				case 4:
					GlobalFunc_724(&uLocal_1083, "COMPUTERS");
					GlobalFunc_724(&uLocal_1083, "Lester1A_01");
					GlobalFunc_724(&uLocal_1083, "Lester1A_Qub3d");
					GlobalFunc_718(&uLocal_1083, iLocal_210);
					GlobalFunc_733(&uLocal_1083, "desktop_pc", &uLocal_357, 0);
					GlobalFunc_719(&uLocal_1083, "MOVE_P_M_ZERO_RUCKSACK");
					break;
				
				case 5:
					GlobalFunc_718(&uLocal_1083, joaat("ig_jay_norris"));
					GlobalFunc_718(&uLocal_1083, iLocal_210);
					GlobalFunc_718(&uLocal_1083, iLocal_211);
					GlobalFunc_718(&uLocal_1083, iLocal_212);
					GlobalFunc_718(&uLocal_1083, iLocal_213);
					GlobalFunc_718(&uLocal_1083, joaat("prop_paper_ball"));
					GlobalFunc_718(&uLocal_1083, joaat("prop_monitor_01c"));
					GlobalFunc_719(&uLocal_1083, "MOVE_P_M_ZERO_RUCKSACK");
					GlobalFunc_719(&uLocal_1083, &cLocal_170);
					GlobalFunc_719(&uLocal_1083, &cLocal_164);
					GlobalFunc_719(&uLocal_1083, &cLocal_182);
					GlobalFunc_719(&uLocal_1083, &cLocal_122);
					GlobalFunc_719(&uLocal_1083, &cLocal_146);
					GlobalFunc_719(&uLocal_1083, &cLocal_188);
					GlobalFunc_718(&uLocal_1083, joaat("prop_off_chair_01"));
					GlobalFunc_724(&uLocal_1083, "Lester1A_01");
					GlobalFunc_724(&uLocal_1083, "Lester1A_Qub3d");
					break;
				
				case 6:
					GlobalFunc_718(&uLocal_1083, joaat("ig_jay_norris"));
					GlobalFunc_718(&uLocal_1083, joaat("prop_off_chair_01"));
					GlobalFunc_718(&uLocal_1083, iLocal_210);
					GlobalFunc_718(&uLocal_1083, iLocal_211);
					GlobalFunc_718(&uLocal_1083, iLocal_212);
					GlobalFunc_718(&uLocal_1083, iLocal_213);
					GlobalFunc_718(&uLocal_1083, joaat("prop_paper_ball"));
					GlobalFunc_718(&uLocal_1083, joaat("prop_hacky_sack_01"));
					GlobalFunc_718(&uLocal_1083, joaat("prop_monitor_01c"));
					GlobalFunc_718(&uLocal_1083, joaat("p_michael_backpack_s"));
					GlobalFunc_719(&uLocal_1083, &cLocal_182);
					GlobalFunc_719(&uLocal_1083, &cLocal_128);
					GlobalFunc_719(&uLocal_1083, &cLocal_170);
					GlobalFunc_719(&uLocal_1083, &cLocal_164);
					GlobalFunc_719(&uLocal_1083, &cLocal_152);
					GlobalFunc_724(&uLocal_1083, "Lester1A_01");
					GlobalFunc_724(&uLocal_1083, "Lester1A_Qub3d");
					GlobalFunc_719(&uLocal_1083, "amb@prop_human_seat_computer@male@base");
					break;
				
				case 7:
					GlobalFunc_718(&uLocal_1083, iLocal_212);
					break;
				
				case 8:
					GlobalFunc_718(&uLocal_1083, GlobalFunc_4946(15));
					GlobalFunc_718(&uLocal_1083, joaat("prop_cs_remote_01"));
					GlobalFunc_718(&uLocal_1083, joaat("prop_phone_ing"));
					GlobalFunc_719(&uLocal_1083, &cLocal_221);
					GlobalFunc_724(&uLocal_1083, "Lester1B");
					GlobalFunc_724(&uLocal_1083, "SAFEHOUSE_MICHAEL_SIT_SOFA");
					break;
				
				case 9:
					GlobalFunc_718(&uLocal_1083, GlobalFunc_4946(15));
					GlobalFunc_718(&uLocal_1083, joaat("prop_cs_remote_01"));
					GlobalFunc_718(&uLocal_1083, joaat("prop_phone_ing"));
					GlobalFunc_719(&uLocal_1083, &cLocal_221);
					GlobalFunc_724(&uLocal_1083, "Lester1B");
					GlobalFunc_724(&uLocal_1083, "SAFEHOUSE_MICHAEL_SIT_SOFA");
					break;
				
				case 10:
					GlobalFunc_5184(&uLocal_1083, -803.3376f, 172.338f, 71.8447f, 10f, 0);
					break;
			}
			while (!GlobalFunc_7725(&uLocal_1083))
			{
				SYSTEM::WAIT(0);
			}
			if (GlobalFunc_7698())
			{
				GlobalFunc_8368();
				while (!GlobalFunc_8367())
				{
					SYSTEM::WAIT(0);
				}
			}
			if (iLocal_569)
			{
				while (!PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID()))
				{
					SYSTEM::WAIT(0);
				}
				iLocal_569 = 1;
			}
			switch (iLocal_2887)
			{
				case 0:
					Global_2268 = 1;
					Global_86864.f_9[0] = PED::CREATE_PED(26, joaat("ig_lestercrest"), 1275.365f, -1710.774f, 53.7715f, 333.7887f, 1, 1);
					Global_86864.f_28[0] = OBJECT::CREATE_OBJECT(joaat("prop_wheelchair_01_s"), 1275.365f, -1710.774f, 53.7715f, 1, 1, 0);
					GlobalFunc_695(1);
					GlobalFunc_8625(16, 0);
					func_686();
					func_684(0, 1);
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(0, -1, 1);
					}
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					bVar7 = true;
					break;
				
				case 1:
					CLOCK::SET_CLOCK_TIME(7, 0, 0);
					Global_89962.f_12[0] = -1;
					Global_89962.f_12[1] = -1;
					Global_89962.f_12[2] = -1;
					func_545();
					if (GlobalFunc_7698())
					{
						iLocal_2884 = func_527(Local_276, 115.1431f);
					}
					func_285(2, 0);
					GlobalFunc_695(1);
					func_70(16, 0);
					func_377(PLAYER::PLAYER_PED_ID(), 9, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "MOVE_P_M_ZERO_RUCKSACK");
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 0);
					func_686();
					if (GlobalFunc_188())
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_2884))
						{
							GlobalFunc_5108(iLocal_2884, -1, 1);
						}
						else
						{
							GlobalFunc_5108(0, -1, 1);
						}
					}
					func_684(0, 1);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					break;
				
				case 2:
					GlobalFunc_8625(16, 1);
					MISC::CLEAR_AREA(Local_279, 25f, 1, 0, 0, 0);
					if (GlobalFunc_7698())
					{
						iLocal_2884 = func_527(127.5399f, -197.6886f, 53.4039f, 251.4021f);
					}
					GlobalFunc_695(0);
					func_70(16, 1);
					func_523();
					func_377(PLAYER::PLAYER_PED_ID(), 9, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "MOVE_P_M_ZERO_RUCKSACK");
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 0);
					func_285(9, 0);
					func_285(2, 0);
					func_686();
					iLocal_566 = 1;
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(0, -1, 1);
					}
					func_684(0, 0);
					GlobalFunc_10617(GlobalFunc_2508(16, 0), 0);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 3000, 0, 1, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					break;
				
				case 3:
					GlobalFunc_8625(16, 1);
					TASK::WAYPOINT_RECORDING_GET_COORD(&cLocal_82, 1, &Var0);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 124.0412f);
					if (GlobalFunc_7698())
					{
						iLocal_2884 = func_527(Local_303, fLocal_309);
					}
					GlobalFunc_695(0);
					func_70(16, 1);
					func_523();
					func_377(PLAYER::PLAYER_PED_ID(), 9, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "MOVE_P_M_ZERO_RUCKSACK");
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 0);
					TASK::WAYPOINT_RECORDING_GET_COORD(&cLocal_82, 2, &Var0);
					iLocal_628[3] = PED::CREATE_PED(26, iLocal_210, Var0, 118.9741f, 1, 1);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_628[3], 0);
					GlobalFunc_173(&uLocal_385, 3, iLocal_628[3], "LIEngineer", 0, 1);
					func_285(9, 0);
					Local_978[3 /*8*/].f_7 = 0;
					func_285(3, 0);
					func_686();
					iLocal_566 = 1;
					iLocal_570 = 1;
					GlobalFunc_10617(128, 0);
					GlobalFunc_10617(129, 0);
					AUDIO::START_AUDIO_SCENE("LESTER_1A_FOLLOW_PROGRAMMER");
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(0, -1, 1);
					}
					func_684(1, 0);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 0);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 117.8704f, 0, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					break;
				
				case 4:
					GlobalFunc_8625(16, 1);
					if (GlobalFunc_7698())
					{
						iLocal_2884 = func_527(Local_303, fLocal_309);
					}
					GlobalFunc_695(0);
					func_70(16, 1);
					func_523();
					func_377(PLAYER::PLAYER_PED_ID(), 9, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "MOVE_P_M_ZERO_RUCKSACK");
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 0);
					iLocal_628[3] = PED::CREATE_PED(26, iLocal_210, -1063.458f, -243.7453f, 43.0347f, 260.8757f, 1, 1);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_628[3], 0);
					GlobalFunc_173(&uLocal_385, 3, iLocal_628[3], "LIEngineer", 0, 1);
					func_686();
					iLocal_566 = 1;
					iLocal_570 = 1;
					GlobalFunc_10617(111, 0);
					GlobalFunc_10617(128, 0);
					GlobalFunc_10617(129, 0);
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(0, -1, 1);
					}
					func_684(0, 0);
					iVar8 = 0;
					while (iVar8 <= (iLocal_2993 - 1))
					{
						if ((Local_2899[iVar8 /*6*/] != -1 && Local_2899[iVar8 /*6*/].f_5 != -1) && Local_2899[iVar8 /*6*/].f_4 == 0)
						{
							if (iLocal_2981 < 6)
							{
								switch (iLocal_2981)
								{
									case 0:
										sVar9 = "POPUP_MUSIC_01";
										break;
									
									case 1:
										sVar9 = "POPUP_MUSIC_02";
										break;
									
									case 2:
										sVar9 = "POPUP_MUSIC_03";
										break;
									
									case 3:
										sVar9 = "POPUP_MUSIC_04";
										break;
									
									case 4:
										sVar9 = "POPUP_MUSIC_05";
										break;
									
									case 5:
										sVar9 = "POPUP_MUSIC_06";
										break;
									
									default:
										sVar9 = "POPUP_MUSIC_RND";
										break;
								}
							}
							else
							{
								sVar9 = "POPUP_MUSIC_RND";
							}
							AUDIO::PLAY_SOUND_FROM_COORD(Local_2899[iVar8 /*6*/].f_5, sVar9, -1059.63f, -244.61f, 43.92f, "LESTER1A_SOUNDS", 0, 0, 0);
							AUDIO::SET_VARIABLE_ON_SOUND(Local_2899[iVar8 /*6*/].f_5, "State", 2f);
							Local_2899[iVar8 /*6*/].f_4 = 1;
							iLocal_2981++;
						}
						iVar8++;
					}
					iVar8 = 0;
					while (iVar8 < Local_2899)
					{
						if (Local_2899[iVar8 /*6*/].f_4 && Local_2899[iVar8 /*6*/].f_5 != -1)
						{
							AUDIO::SET_VARIABLE_ON_SOUND(Local_2899[iVar8 /*6*/].f_5, "TracksPlaying", SYSTEM::TO_FLOAT(GlobalFunc_254(iLocal_2981, 1, 12)));
						}
						iVar8++;
					}
					while (!OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1060.174f, -245.2477f, 43.6942f, 1f, joaat("prop_off_chair_01"), 0))
					{
						SYSTEM::WAIT(0);
					}
					Local_657[1 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1060.174f, -245.2477f, 43.6942f, 1f, joaat("prop_off_chair_01"), 1, 0, 1);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					break;
				
				case 5:
					GlobalFunc_8625(16, 1);
					if (GlobalFunc_7698())
					{
						iLocal_2884 = func_527(Local_303, fLocal_309);
					}
					GlobalFunc_695(0);
					func_70(16, 1);
					func_523();
					func_377(PLAYER::PLAYER_PED_ID(), 9, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "MOVE_P_M_ZERO_RUCKSACK");
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 0);
					iLocal_628[3] = PED::CREATE_PED(26, iLocal_210, -1063.458f, -243.7453f, 43.0347f, 260.8757f, 1, 1);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_628[3], 0);
					GlobalFunc_173(&uLocal_385, 3, iLocal_628[3], "LIEngineer", 0, 1);
					func_285(9, 0);
					func_285(6, 0);
					func_285(5, 0);
					func_285(8, 0);
					func_285(7, 0);
					func_285(10, 0);
					func_285(11, 0);
					func_686();
					iLocal_566 = 1;
					iLocal_570 = 1;
					GlobalFunc_10617(111, 0);
					GlobalFunc_10617(128, 0);
					GlobalFunc_10617(129, 0);
					AUDIO::START_AUDIO_SCENE("LESTER_1A_RIG_EXPLOSIVE");
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(0, -1, 1);
					}
					func_684(1, 0);
					while (!OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1060.174f, -245.2477f, 43.6942f, 1f, joaat("prop_off_chair_01"), 0))
					{
						SYSTEM::WAIT(0);
					}
					Local_657[1 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1060.174f, -245.2477f, 43.6942f, 1f, joaat("prop_off_chair_01"), 1, 0, 1);
					if (!iLocal_578)
					{
						if (bLocal_577)
						{
							ENTITY::CREATE_MODEL_SWAP(Local_288, 1f, joaat("prop_monitor_01d"), joaat("prop_monitor_01c"), 1);
						}
						else
						{
							ENTITY::CREATE_MODEL_SWAP(Local_288, 1f, joaat("prop_monitor_li"), joaat("prop_monitor_01c"), 1);
						}
						GlobalFunc_5174(&uLocal_1083, joaat("prop_monitor_01c"));
						iLocal_578 = 1;
					}
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1871534317, 0, 1, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					break;
				
				case 6:
					GlobalFunc_8625(16, 1);
					GlobalFunc_10617(111, 0);
					if (GlobalFunc_7698())
					{
						iLocal_2884 = func_527(Local_303, fLocal_309);
					}
					GlobalFunc_695(0);
					func_70(16, 1);
					func_523();
					iLocal_628[3] = PED::CREATE_PED(26, iLocal_210, -1062.227f, -243.147f, 43.0212f, 293.0184f, 1, 1);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_628[3], 0);
					GlobalFunc_173(&uLocal_385, 3, iLocal_628[3], "LIEngineer", 0, 1);
					func_285(6, 0);
					func_285(5, 0);
					func_285(8, 0);
					func_285(7, 0);
					func_285(9, 0);
					func_285(11, 0);
					func_686();
					iLocal_566 = 1;
					iLocal_570 = 1;
					func_192(&(Local_657[29 /*10*/]), joaat("p_michael_backpack_s"), Local_310, 0);
					ENTITY::SET_ENTITY_COLLISION(Local_657[29 /*10*/], 0, 0);
					ENTITY::SET_ENTITY_COORDS(Local_657[29 /*10*/], Local_310, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_ROTATION(Local_657[29 /*10*/], Local_313, 2, 1);
					ENTITY::FREEZE_ENTITY_POSITION(Local_657[29 /*10*/], 1);
					GlobalFunc_10617(128, 0);
					GlobalFunc_10617(129, 0);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1772472848, 0f, 1, 1);
					AUDIO::START_AUDIO_SCENE("LESTER_1A_LEAVE_OFFICE");
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(0, -1, 1);
					}
					func_684(1, 0);
					while (!OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1060.174f, -245.2477f, 43.6942f, 1f, joaat("prop_off_chair_01"), 0))
					{
						SYSTEM::WAIT(0);
					}
					Local_657[1 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1060.174f, -245.2477f, 43.6942f, 1f, joaat("prop_off_chair_01"), 1, 0, 1);
					if (!iLocal_578)
					{
						if (bLocal_577)
						{
							ENTITY::CREATE_MODEL_SWAP(Local_288, 1f, joaat("prop_monitor_01d"), joaat("prop_monitor_01c"), 1);
						}
						else
						{
							ENTITY::CREATE_MODEL_SWAP(Local_288, 1f, joaat("prop_monitor_li"), joaat("prop_monitor_01c"), 1);
						}
						GlobalFunc_5174(&uLocal_1083, joaat("prop_monitor_01c"));
						iLocal_578 = 1;
					}
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					break;
				
				case 7:
					GlobalFunc_8625(16, 1);
					GlobalFunc_695(1);
					func_70(16, 0);
					func_523();
					iLocal_566 = 1;
					GlobalFunc_10617(111, 1);
					GlobalFunc_10617(128, 1);
					GlobalFunc_10617(129, 1);
					GlobalFunc_10617(130, 1);
					GlobalFunc_10617(131, 1);
					func_285(9, 0);
					func_285(12, 0);
					iLocal_570 = 0;
					iLocal_571 = 1;
					if (GlobalFunc_7698())
					{
						iLocal_2884 = func_527(Local_303, fLocal_309);
					}
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(0, -1, 1);
					}
					func_684(0, 1);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					break;
				
				case 8:
					GlobalFunc_8625(16, 1);
					GlobalFunc_695(1);
					func_70(16, 0);
					func_523();
					iLocal_566 = 1;
					iLocal_570 = 0;
					iLocal_571 = 1;
					if (GlobalFunc_7698())
					{
						iLocal_2884 = func_527(-827.0287f, 175.9394f, 69.8927f, 331.2491f);
					}
					GlobalFunc_10617(111, 1);
					GlobalFunc_10617(128, 1);
					GlobalFunc_10617(129, 1);
					GlobalFunc_10617(130, 1);
					GlobalFunc_10617(131, 1);
					func_192(&(Local_657[30 /*10*/]), joaat("prop_cs_remote_01"), PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 60309, 0f, 0f, 0f), 0);
					GlobalFunc_5174(&uLocal_1083, joaat("prop_cs_remote_01"));
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_657[30 /*10*/], PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(0, -1, 1);
					}
					uLocal_3016 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_250[3 /*3*/], Local_263[3 /*3*/], 40f, 1, 2);
					CAM::SHAKE_CAM(uLocal_3016, "HAND_SHAKE", 0.3f);
					CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
					HUD::DISPLAY_RADAR(0);
					HUD::DISPLAY_HUD(0);
					func_103(1, 1000f, -8f, 2563, 1);
					while (!GlobalFunc_2920(4))
					{
						SYSTEM::WAIT(0);
					}
					GlobalFunc_5649(4, 0, 1, 0, 0);
					func_127(4, 1, 11, 1);
					iLocal_3005 = 1;
					func_684(0, 1);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					break;
				
				case 9:
					GlobalFunc_8625(16, 1);
					GlobalFunc_695(1);
					func_70(16, 0);
					func_523();
					iLocal_566 = 1;
					GlobalFunc_10617(111, 1);
					GlobalFunc_10617(128, 1);
					GlobalFunc_10617(129, 1);
					GlobalFunc_10617(130, 1);
					GlobalFunc_10617(131, 1);
					func_192(&(Local_657[30 /*10*/]), joaat("prop_cs_remote_01"), PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 60309, 0f, 0f, 0f), 0);
					GlobalFunc_5174(&uLocal_1083, joaat("prop_cs_remote_01"));
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_657[30 /*10*/], PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
					iLocal_570 = 0;
					iLocal_571 = 1;
					bLocal_3003 = true;
					if (GlobalFunc_7698())
					{
						iLocal_2884 = func_527(-827.0287f, 175.9394f, 69.8927f, 331.2491f);
					}
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(0, -1, 1);
					}
					uLocal_3016 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_250[3 /*3*/], Local_263[3 /*3*/], 40f, 1, 2);
					CAM::SHAKE_CAM(uLocal_3016, "HAND_SHAKE", 0.3f);
					CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
					HUD::DISPLAY_RADAR(0);
					HUD::DISPLAY_HUD(0);
					func_103(1, 1000f, -8f, 2563, 1);
					func_684(0, 1);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					break;
				
				case 10:
					GlobalFunc_8625(16, 1);
					GlobalFunc_695(1);
					func_70(16, 0);
					func_523();
					iLocal_566 = 1;
					GlobalFunc_10617(111, 1);
					GlobalFunc_10617(128, 1);
					GlobalFunc_10617(129, 1);
					GlobalFunc_10617(130, 1);
					GlobalFunc_10617(131, 1);
					iLocal_570 = 0;
					iLocal_571 = 1;
					bLocal_3003 = true;
					if (GlobalFunc_7698())
					{
						while (!GlobalFunc_8367())
						{
							SYSTEM::WAIT(0);
						}
						iLocal_2884 = func_527(-827.0287f, 175.9394f, 69.8927f, 331.2491f);
					}
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(0, -1, 1);
					}
					func_684(0, 1);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					break;
			}
			if ((CAM::IS_SCREEN_FADED_OUT() || !CAM::IS_SCREEN_FADING_IN()) && !bVar7)
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			iLocal_2892 = 0;
		}
	}
}


void func_523()//Position - 0x3E8EE
{
	if (Global_89962.f_12[0] == -1)
	{
		GlobalFunc_11088(GlobalFunc_4917(0), 3, 70, 1, 1);
		func_377(PLAYER::PLAYER_PED_ID(), 3, 70, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	else
	{
		GlobalFunc_11088(GlobalFunc_4917(0), 3, Global_89962.f_12[0], 1, 1);
		func_377(PLAYER::PLAYER_PED_ID(), 3, Global_89962.f_12[0], 1, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (Global_89962.f_12[1] == -1)
	{
		GlobalFunc_11088(GlobalFunc_4917(0), 4, 41, 1, 1);
		func_377(PLAYER::PLAYER_PED_ID(), 4, 41, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	else
	{
		GlobalFunc_11088(GlobalFunc_4917(0), 4, Global_89962.f_12[1], 1, 1);
		func_377(PLAYER::PLAYER_PED_ID(), 4, Global_89962.f_12[1], 1, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	GlobalFunc_5128(0);
}




int func_527(struct<3> Param0, float fParam3)//Position - 0x3EE70
{
	return func_528(&(Global_93588.f_2167), Param0, fParam3, 0);
}

int func_528(var uParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x3EE8A
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
				func_537(iVar0, &(uParam0->f_12), 0, 1);
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
				if (((Global_89962 != 13 && Global_89962 != 10) && Global_89962 != 11) && Global_89962 != 12)
				{
					if (MISC::GET_HASH_KEY(&(Global_89962.f_3)) == Global_68102)
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









void func_537(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x3F772
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
		if (((MISC::IS_BIT_SET(uParam1->f_53, 15) || GlobalFunc_539(iParam0)) || (((uParam1->f_38 == 0 && uParam1->f_39 == 0) && uParam1->f_40 == 0) && uParam1->f_9[20] > 0)) && GlobalFunc_321())
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








void func_545()//Position - 0x3FE7C
{
	if (!GlobalFunc_10909(GlobalFunc_4917(0), 3, 70))
	{
		GlobalFunc_11088(GlobalFunc_4917(0), 3, 70, 0, 1);
	}
	if (!GlobalFunc_10909(GlobalFunc_4917(0), 3, 71))
	{
		GlobalFunc_11088(GlobalFunc_4917(0), 3, 71, 0, 1);
	}
	if (!GlobalFunc_10909(GlobalFunc_4917(0), 3, 72))
	{
		GlobalFunc_11088(GlobalFunc_4917(0), 3, 72, 0, 1);
	}
	if (!GlobalFunc_10909(GlobalFunc_4917(0), 3, 73))
	{
		GlobalFunc_11088(GlobalFunc_4917(0), 3, 73, 0, 1);
	}
	if (!GlobalFunc_10909(GlobalFunc_4917(0), 3, 74))
	{
		GlobalFunc_11088(GlobalFunc_4917(0), 3, 74, 0, 1);
	}
	if (!GlobalFunc_10909(GlobalFunc_4917(0), 3, 75))
	{
		GlobalFunc_11088(GlobalFunc_4917(0), 3, 75, 0, 1);
	}
	if (!GlobalFunc_10909(GlobalFunc_4917(0), 4, 41))
	{
		GlobalFunc_11088(GlobalFunc_4917(0), 4, 41, 0, 1);
	}
	if (!GlobalFunc_10909(GlobalFunc_4917(0), 4, 42))
	{
		GlobalFunc_11088(GlobalFunc_4917(0), 4, 42, 0, 1);
	}
	if (!GlobalFunc_10909(GlobalFunc_4917(0), 4, 43))
	{
		GlobalFunc_11088(GlobalFunc_4917(0), 4, 43, 0, 1);
	}
	if (!GlobalFunc_10909(GlobalFunc_4917(0), 4, 44))
	{
		GlobalFunc_11088(GlobalFunc_4917(0), 4, 44, 0, 1);
	}
	if (!GlobalFunc_10909(GlobalFunc_4917(0), 4, 45))
	{
		GlobalFunc_11088(GlobalFunc_4917(0), 4, 45, 0, 1);
	}
	func_546(PLAYER::PLAYER_PED_ID());
}

void func_546(int iParam0)//Position - 0x3FFE1
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
		func_551(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
		if (!Global_89948[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!GlobalFunc_526(49))
				{
					iVar1 = func_386(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					GlobalFunc_11185(GlobalFunc_4917(0), 12, 16, 0, 0, 0, 0);
				}
				if (!GlobalFunc_526(44))
				{
					iVar1 = func_386(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_386(iParam0, 4, -1);
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
				iVar1 = func_386(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				GlobalFunc_521(iVar0);
				func_551(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
			}
		}
		Global_89948[iVar0] = 1;
	}
}





void func_551(int iParam0, var uParam1, bool bParam2)//Position - 0x40418
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
				func_377(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (GlobalFunc_11070(iParam0, iVar1, &iVar2))
			{
				func_377(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_6784(741, uParam1->f_60, Global_68104, 1);
			GlobalFunc_6784(742, uParam1->f_61, Global_68104, 1);
			iVar4 = GlobalFunc_4915(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			func_554(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			if (!bParam2)
			{
				iVar5 = GlobalFunc_4915(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_554(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
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



int func_554(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x406AF
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
		GlobalFunc_10957(iVar5, iParam1, iParam2, 1);
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
						GlobalFunc_10957(iVar5, 10, 0, 1);
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
									GlobalFunc_10957(iVar5, iVar0, uVar15[iVar0], 1);
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
								GlobalFunc_10957(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, iVar0, GlobalFunc_11117(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					uVar41 = { GlobalFunc_7617(iVar5, 0) };
					func_554(iParam0, iVar0, uVar41[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
			GlobalFunc_10637(iParam0, 11, uVar15[11], iParam6, 0);
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
				GlobalFunc_10957(iVar5, 14, uVar58[iVar1], 1);
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
							func_554(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
			GlobalFunc_10957(iVar5, iParam1, iParam2, 1);
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
						func_554(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
							func_554(iParam0, 8, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
								func_554(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
									func_554(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
								func_554(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_554(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, iParam1, iParam2) };
						}
					}
				}
				else
				{
					GlobalFunc_10622(iVar5, iParam2);
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			GlobalFunc_10637(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, GlobalFunc_11117(iParam0, 8, -1), iParam2);
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
				func_597(iParam0, iParam2, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			GlobalFunc_10637(iParam0, iParam1, iParam2, iParam6, 0);
			iVar84 = GlobalFunc_6669(iParam0, 11);
			if (GlobalFunc_6737(iVar5, iVar84))
			{
				iVar85 = GlobalFunc_6736(iVar5, iParam2, Global_68106[1 /*14*/].f_4);
				GlobalFunc_10622(iVar5, iVar85);
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
						iVar96 = GlobalFunc_7980(iParam0, iVar95);
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
						func_554(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
							func_554(iParam0, 9, iVar97, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						func_554(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_554(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
					iVar99 = GlobalFunc_11117(iParam0, 4, -1);
					iVar100 = iParam2;
				}
				else
				{
					iVar99 = iParam2;
					iVar100 = GlobalFunc_11117(iParam0, 11, -1);
				}
				if (GlobalFunc_6729(iVar5, 11, iVar100))
				{
					if (!GlobalFunc_6728(iVar5, 4, iVar99))
					{
						if (GlobalFunc_6727(iVar5, 4, iVar99, &uVar101))
						{
							func_554(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
				}
				else if (GlobalFunc_6728(iVar5, 4, iVar99))
				{
					if (GlobalFunc_6726(iVar5, 4, iVar99, &uVar101))
					{
						func_554(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
						func_554(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar3 = GlobalFunc_11068(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_554(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (GlobalFunc_11199(iParam0, &uVar4))
		{
			func_554(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	if (iVar6 != -99)
	{
		func_554(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar9 != -99)
	{
		func_554(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar7 != -99)
	{
		func_554(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				func_554(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}











































void func_597(int iParam0, int iParam1, bool bParam2)//Position - 0x467CE
{
	int iVar0;
	int iVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	GlobalFunc_9803(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = GlobalFunc_6735(iVar0, iParam1);
	if (iVar1 != -1)
	{
		GlobalFunc_9004(iVar1, 1, Global_68104);
	}
	GlobalFunc_11242(iParam0, bParam2, 0);
}























































































void func_684(bool bParam0, bool bParam1)//Position - 0x6B499
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = true;
	while (bVar0)
	{
		bVar1 = true;
		if (bParam0)
		{
			func_707();
		}
		if (func_234(6))
		{
			if (!Local_978[6 /*8*/].f_7)
			{
				bVar1 = false;
			}
		}
		if (func_234(3))
		{
			if (!Local_978[3 /*8*/].f_7)
			{
				bVar1 = false;
			}
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
			{
				bVar1 = false;
			}
		}
		if (bParam1)
		{
			if (!GlobalFunc_8371(16))
			{
				bVar1 = false;
			}
		}
		if (bVar1)
		{
			bVar0 = false;
		}
		else
		{
			SYSTEM::WAIT(0);
		}
	}
	if (!GlobalFunc_188())
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
		GlobalFunc_5181(&uLocal_1083);
	}
}


void func_686()//Position - 0x6B557
{
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(1368.169f, -1686.164f, 68.78043f, 1189.981f, -1764.964f, 31.71125f, 91.5f, 0, 0, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(55.31769f, -199.9486f, 130.6353f) - Vector(2.125f, 14.375f, 12.1875f), Vector(55.31769f, -199.9486f, 130.6353f) + Vector(2.125f, 14.375f, 12.1875f), 0, 1);
	VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Vector(55.31769f, -199.9486f, 130.6353f) - Vector(2.125f, 14.375f, 12.1875f), Vector(55.31769f, -199.9486f, 130.6353f) + Vector(2.125f, 14.375f, 12.1875f));
	MISC::CLEAR_AREA_OF_VEHICLES(128.87f, -205.99f, 53.52f, 30f, 0, 0, 0, 0, 0);
	uLocal_562 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(48.29568f, -238.2421f, -1057.518f) - Vector(11.8125f, 29f, 43f), Vector(48.29568f, -238.2421f, -1057.518f) + Vector(11.8125f, 29f, 43f), 1, 1, 1, 1);
	PATHFIND::SET_PED_PATHS_IN_AREA(Vector(48.29568f, -238.2421f, -1057.518f) - Vector(11.8125f, 29f, 43f), Vector(48.29568f, -238.2421f, -1057.518f) + Vector(11.8125f, 29f, 43f), 0, 0);
	PED::SET_PED_NON_CREATION_AREA(Vector(48.29568f, -238.2421f, -1057.518f) - Vector(11.8125f, 29f, 43f), Vector(48.29568f, -238.2421f, -1057.518f) + Vector(11.8125f, 29f, 43f));
	MISC::CLEAR_AREA_OF_PEDS(-1057.518f, -238.2421f, 48.29568f, 266.25f, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(48.29568f, -238.2421f, -1057.518f) - Vector(11.8125f, 29f, 43f), Vector(48.29568f, -238.2421f, -1057.518f) + Vector(11.8125f, 29f, 43f), 0, 1);
}







void func_693(int iParam0, var uParam1, var uParam2)//Position - 0x6C26F
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1274.323f, -1710.75f, 53.7715f };
			*uParam2 = 0f;
			break;
		
		case 1:
			*uParam1 = { 1279.15f, -1729.922f, 51.5473f };
			*uParam2 = 202.8531f;
			break;
		
		case 2:
			*uParam1 = { 126.6064f, -212.3286f, 53.5578f };
			*uParam2 = 341.1025f;
			break;
		
		case 3:
			*uParam1 = { -1047.914f, -233.2071f, 38.0145f };
			*uParam2 = 124.0412f;
			break;
		
		case 4:
			*uParam1 = { -1060.975f, -244.5783f, 43.0211f };
			*uParam2 = 21.504f;
			break;
		
		case 5:
			*uParam1 = { -1060.975f, -244.5783f, 43.0211f };
			*uParam2 = 21.504f;
			break;
		
		case 6:
			*uParam1 = { -1055.052f, -231.8623f, 43.0211f };
			*uParam2 = 203.6044f;
			break;
		
		case 7:
			*uParam1 = { -1080.334f, -263.5708f, 36.7904f };
			*uParam2 = 286.3264f;
			break;
		
		case 8:
			*uParam1 = { -803.3376f, 172.338f, 71.8447f };
			*uParam2 = 284.537f;
			break;
		
		case 9:
			*uParam1 = { -803.3376f, 172.338f, 71.8447f };
			*uParam2 = 284.537f;
			break;
		
		case 10:
			*uParam1 = { -803.3376f, 172.338f, 71.8447f };
			*uParam2 = 284.537f;
			break;
	}
}






void func_699()//Position - 0x6C6B6
{
	int iVar0;
	struct<3> Var1;
	
	GlobalFunc_5905(0, uLocal_572);
	func_546(PLAYER::PLAYER_PED_ID());
	func_545();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, 0);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, 0);
	}
	GlobalFunc_695(1);
	func_70(16, 0);
	GlobalFunc_8380(0, 1, 1, 0);
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::STOP_CUTSCENE(0);
		CUTSCENE::REMOVE_CUTSCENE();
		GlobalFunc_8380(0, 1, 1, 0);
	}
	func_704();
	GlobalFunc_5652(&Local_360, 1, 0);
	GlobalFunc_4956();
	GlobalFunc_4935();
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	CAM::DESTROY_ALL_CAMS(0);
	GlobalFunc_10617(75, 1);
	GlobalFunc_200(&uLocal_385, 0);
	GlobalFunc_200(&uLocal_385, 3);
	GlobalFunc_200(&uLocal_385, 4);
	GlobalFunc_200(&uLocal_385, 5);
	GlobalFunc_200(&uLocal_385, 6);
	GlobalFunc_200(&uLocal_385, 7);
	iVar0 = 0;
	while (iVar0 <= (32 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_657[iVar0 /*10*/]))
		{
			if (Local_657[iVar0 /*10*/].f_1)
			{
				OBJECT::DELETE_OBJECT(&(Local_657[iVar0 /*10*/]));
				Local_657[iVar0 /*10*/].f_1 = 0;
			}
			else
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(Local_657[iVar0 /*10*/], 1) };
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_657[iVar0 /*10*/]));
				MISC::CLEAR_AREA(Var1, 1f, 1, 1, 0, 0);
			}
		}
		Local_657[iVar0 /*10*/].f_2 = 0;
		Local_657[iVar0 /*10*/].f_4 = { 0f, 0f, 0f };
		Local_657[iVar0 /*10*/].f_1 = 0;
		Local_657[iVar0 /*10*/].f_8 = "";
		Local_657[iVar0 /*10*/].f_9 = "";
		Local_657[iVar0 /*10*/].f_3 = 0;
		Local_657[iVar0 /*10*/].f_7 = 0;
		iVar0++;
	}
	iVar0 = 1 + 1;
	while (iVar0 <= (28 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_628[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_628[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2885))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_2885);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2884))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2884, 0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		}
		VEHICLE::DELETE_VEHICLE(&iLocal_2884);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_356))
	{
		HUD::REMOVE_BLIP(&uLocal_356);
	}
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (Local_2899[iVar0 /*6*/] != -1)
		{
			if (Local_2899[iVar0 /*6*/].f_5 != -1)
			{
				AUDIO::STOP_SOUND(Local_2899[iVar0 /*6*/].f_5);
			}
			Local_2899[iVar0 /*6*/].f_1 = 0;
			Local_2899[iVar0 /*6*/].f_4 = 0;
		}
		else
		{
			Local_2899[iVar0 /*6*/].f_1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_618)
	{
		iLocal_618[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_612)
	{
		GlobalFunc_846(&(iLocal_612[iVar0]));
		iVar0++;
	}
	if (iLocal_611)
	{
		RECORDING::_0x13B350B8AD0EEE10();
	}
	iLocal_611 = 0;
	iLocal_2996 = 0;
	iLocal_2988 = 0;
	iLocal_2984 = 0;
	iLocal_2986 = 0;
	iLocal_566 = 0;
	iLocal_2979 = 0;
	bLocal_2983 = false;
	iLocal_2989 = 0;
	iLocal_2990 = 0;
	fLocal_2991 = 0f;
	bLocal_567 = false;
	iLocal_571 = 0;
	iLocal_570 = 0;
	iLocal_571 = 0;
	iLocal_588 = 0;
	Global_2268 = 0;
	iLocal_3013 = 0;
	iLocal_3005 = 0;
	func_33();
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
	MISC::CLEAR_AREA_OF_PEDS(-1061.677f, -242.1771f, 43.0213f, 50f, 0);
	GlobalFunc_9755("LES1A_TXT1");
	GlobalFunc_9755("LES1A_TXT2");
	GlobalFunc_4456(0);
	GlobalFunc_495(129, 0);
	GlobalFunc_7632(0);
	AUDIO::STOP_AUDIO_SCENES();
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_LESTERS_DOGS", 1, 1);
	GRAPHICS::ENABLE_MOVIE_SUBTITLES(1);
	GlobalFunc_562(44);
}





void func_704()//Position - 0x6CB8C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (13 - 1))
	{
		if (func_234(iVar0))
		{
			func_411(iVar0);
		}
		iVar0++;
	}
}


void func_706()//Position - 0x6CBE0
{
	switch (iLocal_2886)
	{
		case 1:
			iLocal_2886 = 2;
			iLocal_2888 = -1;
			break;
		
		case 2:
			iLocal_2886 = 3;
			iLocal_2888 = 0;
			iLocal_2887 = iLocal_2889;
			iLocal_2890 = MISC::GET_GAME_TIMER();
			break;
		
		case 3:
			iLocal_2889 = -1;
			iLocal_2886 = 0;
			break;
		
		case 0:
			if ((MISC::GET_GAME_TIMER() - iLocal_2891) > 2500)
			{
				iLocal_2891 = MISC::GET_GAME_TIMER();
			}
			break;
	}
}

void func_707()//Position - 0x6CC4E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= (13 - 1))
	{
		if (Local_978[iVar0 /*8*/].f_3 == 1 && Local_978[iVar0 /*8*/].f_4 != 1)
		{
			iVar1 = (MISC::GET_GAME_TIMER() - Local_978[iVar0 /*8*/]);
			if (iVar1 > Local_978[iVar0 /*8*/].f_2)
			{
				switch (iVar0)
				{
					case 0:
						func_742();
						break;
					
					case 1:
						func_739();
						break;
					
					case 2:
						func_737();
						break;
					
					case 3:
						func_733();
						break;
					
					case 4:
						func_731();
						break;
					
					case 5:
						func_729();
						break;
					
					case 8:
						func_727();
						break;
					
					case 6:
						func_726();
						break;
					
					case 7:
						func_724();
						break;
					
					case 9:
						func_723();
						break;
					
					case 10:
						func_720();
						break;
					
					case 11:
						func_718();
						break;
					
					case 12:
						func_708();
						break;
					}
				}
		}
		iVar0++;
	}
}

void func_708()//Position - 0x6CD55
{
	if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_235, 200f))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2885))
		{
			func_712(&iLocal_2885, 15, -813.3314f, 159.8796f, 70.328f, 112.3623f, 1, 0);
		}
	}
	else if (!GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_235, 230f))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2885))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_2885);
		}
	}
	if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_235, 100f))
	{
		if (!bLocal_3011)
		{
			GlobalFunc_710(&uLocal_1083, iLocal_324);
			GlobalFunc_718(&uLocal_1083, GlobalFunc_4946(15));
			GlobalFunc_718(&uLocal_1083, joaat("prop_cs_remote_01"));
			GlobalFunc_718(&uLocal_1083, joaat("prop_phone_ing"));
			GlobalFunc_719(&uLocal_1083, "misslester1b");
			bLocal_3011 = true;
		}
	}
	else if (!GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_235, 110f))
	{
		if (bLocal_3011)
		{
			func_219(&uLocal_1083, iLocal_324);
			GlobalFunc_5174(&uLocal_1083, GlobalFunc_4946(15));
			GlobalFunc_5174(&uLocal_1083, joaat("prop_cs_remote_01"));
			GlobalFunc_5174(&uLocal_1083, joaat("prop_phone_ing"));
			GlobalFunc_5175(&uLocal_1083, "misslester1b");
			bLocal_3011 = false;
		}
	}
	if (bLocal_3011)
	{
		if (((!ENTITY::DOES_ENTITY_EXIST(iLocal_628[27]) && STREAMING::HAS_MODEL_LOADED(GlobalFunc_4946(15))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_remote_01"))) && STREAMING::HAS_ANIM_DICT_LOADED("misslester1b"))
		{
			if (GlobalFunc_6808(&(iLocal_628[27]), 15, -803.0255f, 172.6011f, 71.8348f, 129.7437f, 1))
			{
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_628[27], 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_628[27], iLocal_565);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_628[27], 1);
				if (!ENTITY::DOES_ENTITY_EXIST(Local_657[30 /*10*/]))
				{
					func_192(&(Local_657[30 /*10*/]), joaat("prop_cs_remote_01"), PED::GET_PED_BONE_COORDS(iLocal_628[27], 60309, 0f, 0f, 0f), 0);
					GlobalFunc_5174(&uLocal_1083, joaat("prop_cs_remote_01"));
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_657[30 /*10*/], iLocal_628[27], PED::GET_PED_BONE_INDEX(iLocal_628[27], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
				}
				func_709();
				iLocal_618[8] = PED::CREATE_SYNCHRONIZED_SCENE(-803.51f, 171.95f, 71.84f, 0f, 0f, 120.32f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[27], iLocal_618[8], "misslester1b", "watchtv", 1000f, -1.5f, 0, 0, 1148846080, 0);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_618[8], 1);
				AUDIO::SET_STATIC_EMITTER_ENABLED("SE_MICHAELS_HOUSE_RADIO", 0);
				ENTITY::CREATE_MODEL_HIDE(-804.4475f, 172.7937f, 72.34801f, 0.5f, joaat("prop_cs_remote_01"), 0);
				GlobalFunc_5174(&uLocal_1083, GlobalFunc_4946(15));
			}
		}
	}
	else
	{
		ENTITY::REMOVE_MODEL_HIDE(-804.4475f, 172.7937f, 72.34801f, 0.5f, joaat("prop_cs_remote_01"), 0);
		if (ENTITY::DOES_ENTITY_EXIST(Local_657[30 /*10*/]))
		{
			OBJECT::DELETE_OBJECT(&(Local_657[30 /*10*/]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_628[27]))
		{
			PED::DELETE_PED(&(iLocal_628[27]));
		}
	}
}

void func_709()//Position - 0x6D05A
{
	PED::SET_PED_COMPONENT_VARIATION(iLocal_628[27], 3, 1, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_628[27], 4, 5, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_628[27], 6, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_628[27], 8, 1, 0, 0);
}



int func_712(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)//Position - 0x6D173
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
				*uParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/], Param2, fParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0);
				VEHICLE::_0xAB04325045427AAE(*uParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*uParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, 1);
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
				GlobalFunc_5018(uParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_57));
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
				*uParam0 = VEHICLE::CREATE_VEHICLE(Var0, Param2, fParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0);
				VEHICLE::_0xAB04325045427AAE(*uParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*uParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, 1);
				func_713(uParam0, Var0);
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

void func_713(var uParam0, struct<74> Param1)//Position - 0x6D73C
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (Param1.f_9)
	{
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*uParam0, Param1.f_4);
	}
	else
	{
		VEHICLE::SET_VEHICLE_COLOURS(*uParam0, Param1.f_5, Param1.f_6);
	}
	if (Param1.f_10)
	{
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*uParam0, Param1.f_7, Param1.f_8);
	}
	VEHICLE::SET_VEHICLE_DIRT_LEVEL(*uParam0, Param1.f_2);
	ENTITY::SET_ENTITY_HEALTH(*uParam0, Param1.f_3);
	iVar0 = 0;
	while (iVar0 < 12)
	{
		VEHICLE::SET_VEHICLE_EXTRA(*uParam0, iVar0 + 1, !Param1.f_11[iVar0]);
		iVar0++;
	}
	if (Param1.f_24)
	{
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*uParam0, 0))
		{
			VEHICLE::RAISE_CONVERTIBLE_ROOF(*uParam0, 1);
		}
	}
	if (GlobalFunc_197(&uVar2, &uVar1) && Param1.f_73)
	{
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0, &uVar2);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*uParam0, uVar1);
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Param1.f_27)))
	{
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0, &(Param1.f_27));
		if (Param1.f_26 >= 0 && Param1.f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
		{
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*uParam0, Param1.f_26);
		}
	}
	VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*uParam0, Param1.f_60, Param1.f_61, Param1.f_62);
	VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*uParam0, Param1.f_64);
	VEHICLE::SET_VEHICLE_WINDOW_TINT(*uParam0, Param1.f_63);
	VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*uParam0, Param1.f_69, Param1.f_70, Param1.f_71);
	VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*uParam0, 2, MISC::IS_BIT_SET(Param1.f_68, 28));
	VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*uParam0, 3, MISC::IS_BIT_SET(Param1.f_68, 29));
	VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*uParam0, 0, MISC::IS_BIT_SET(Param1.f_68, 30));
	VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*uParam0, 1, MISC::IS_BIT_SET(Param1.f_68, 31));
	if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*uParam0) > 1 && Param1.f_65 >= 0)
	{
		VEHICLE::SET_VEHICLE_LIVERY(*uParam0, Param1.f_65);
	}
	if (Param1.f_66 > -1)
	{
		if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
		{
			if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
			{
				if (Param1.f_66 == 6)
				{
					VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, Param1.f_66);
				}
			}
			else
			{
				VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, Param1.f_66);
			}
		}
	}
	GlobalFunc_5018(uParam0, &(Param1.f_31), &(Param1.f_57));
	VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*uParam0, Param1.f_72);
}





void func_718()//Position - 0x6DDD3
{
	switch (Local_978[11 /*8*/].f_1)
	{
		case 1:
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1067.39f, -247.8769f, 43.02128f, -1051.01f, -239.4557f, 46.95878f, 10f, 0, 1, 0) && (MISC::GET_GAME_TIMER() - iLocal_2895) >= iLocal_2896) && !CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if ((((iLocal_2887 != 5 && (!func_234(10) || func_233(10))) && !PED::IS_PED_INJURED(iLocal_628[19])) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_628[19])) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1063.654f, -246.7293f, 43.02128f) < 10.5625f)
				{
					switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
					{
						case 0:
							GlobalFunc_5117(iLocal_628[19], "LES1A_AUAA", "LIFEINVADERM1", 3);
							break;
						
						case 1:
							GlobalFunc_5117(iLocal_628[19], "LES1A_AVAA", "LIFEINVADERM1", 3);
							break;
					}
					Local_978[11 /*8*/].f_1++;
				}
				else if ((!PED::IS_PED_INJURED(iLocal_628[18]) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_628[18])) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1058.56f, -242.61f, 43.02f) < 10.5625f)
				{
					if (iLocal_2887 >= 5 && !iLocal_2898)
					{
						GlobalFunc_5117(iLocal_628[18], "LES1A_AXAA", "LIFEINVADERM1", 3);
						iLocal_2898 = 1;
					}
					else
					{
						GlobalFunc_5117(iLocal_628[18], "LES1A_AWAA", "LIFEINVADERM1", 3);
					}
					Local_978[11 /*8*/].f_1++;
				}
			}
			break;
		
		case 2:
			iLocal_2895 = MISC::GET_GAME_TIMER();
			iLocal_2896 = MISC::GET_RANDOM_INT_IN_RANGE(7000, 12000);
			Local_978[11 /*8*/].f_1 = (Local_978[11 /*8*/].f_1 - 1);
			break;
	}
}


void func_720()//Position - 0x6DFF0
{
	switch (Local_978[10 /*8*/].f_1)
	{
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_628[3]) && !PED::IS_PED_INJURED(iLocal_628[19]))
			{
				switch (iLocal_2887)
				{
					case 5:
						if (STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_188) && ENTITY::DOES_ENTITY_EXIST(Local_657[9 /*10*/]))
						{
							func_72(&(Local_657[9 /*10*/]), -1000f);
							ENTITY::FREEZE_ENTITY_POSITION(Local_657[9 /*10*/], 0);
							ENTITY::SET_ENTITY_COORDS(Local_657[9 /*10*/], -1063.916f, -246.8907f, 43.0306f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(Local_657[9 /*10*/], 121.36f);
							ENTITY::FREEZE_ENTITY_POSITION(Local_657[9 /*10*/], 1);
							iLocal_2997 = 0;
							iLocal_580 = 0;
							Local_978[10 /*8*/].f_1 = 2;
						}
						break;
					}
			}
			break;
		
		case 2:
			if (func_722(iLocal_628[3]) && func_722(iLocal_628[19]))
			{
				if (!iLocal_580)
				{
					if (GlobalFunc_5170() && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1065.366f, -241.4076f, 43.02811f, -1063.175f, -245.6033f, 45.29254f, 3.5f, 0, 1, 0))
					{
						if (GlobalFunc_10618(&uLocal_385, &cLocal_88, "LS1A_WTF", 8, 0, 0, 0))
						{
							iLocal_580 = 1;
						}
					}
				}
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_618[7]) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_618[7]) == 1f)
				{
					if (iLocal_580 || iLocal_2997 > 10)
					{
						iLocal_618[7] = PED::CREATE_SYNCHRONIZED_SCENE(-1063.542f, -245.794f, 43.032f, 0f, 0f, 27.8f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[3], iLocal_618[7], &cLocal_188, "idle_to_sit_pedb", 1000f, -8f, 5, 16, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[19], iLocal_618[7], &cLocal_188, "idle_to_sit_peda", 1000f, -8f, 5, 16, 1148846080, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[3], 0, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[19], 0, 0);
						if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_628[19]))
						{
							AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_628[19]);
						}
						if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_628[3]))
						{
							AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_628[3]);
						}
						Local_978[10 /*8*/].f_1++;
					}
					else
					{
						iLocal_618[7] = PED::CREATE_SYNCHRONIZED_SCENE(-1063.542f, -245.794f, 43.032f, 0f, 0f, 27.8f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[3], iLocal_618[7], &cLocal_188, "idle_standing_pedb", 1000f, -8f, 5, 16, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[19], iLocal_618[7], &cLocal_188, "idle_standing_peda", 1000f, -8f, 5, 16, 1148846080, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[3], 0, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[19], 0, 0);
						iLocal_2997++;
					}
				}
				else if (!iLocal_580)
				{
					if (!PED::IS_PED_INJURED(iLocal_628[3]))
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_628[3]))
						{
							GlobalFunc_5117(iLocal_628[3], "GUITAR", "LIEngineer", 3);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_628[19]))
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_628[19]))
						{
							GlobalFunc_5117(iLocal_628[19], "PIANO", "AIRPIANIST", 3);
						}
					}
				}
			}
			break;
		
		case 3:
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_618[7]) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_618[7]) == 1f)
			{
				if (func_722(iLocal_628[19]) && func_722(iLocal_628[3]))
				{
					iLocal_618[7] = PED::CREATE_SYNCHRONIZED_SCENE(-1063.542f, -245.794f, 43.032f, 0f, 0f, 27.8f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[3], iLocal_618[7], &cLocal_188, "idle_sitting_pedb", 1000f, -8f, 5, 16, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[19], iLocal_618[7], &cLocal_188, "idle_sitting_peda", 1000f, -8f, 5, 16, 1148846080, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_618[7], 1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[3], 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[19], 0, 0);
					Local_978[10 /*8*/].f_1++;
				}
			}
		
		case 4:
			if (iLocal_580)
			{
				if (GlobalFunc_5170())
				{
					if (GlobalFunc_10618(&uLocal_385, &cLocal_88, "LS1A_EXPLAIN", 8, 0, 0, 0))
					{
						if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_628[19]))
						{
							AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_628[19]);
						}
						if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_628[3]))
						{
							AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_628[3]);
						}
						iLocal_580 = 0;
					}
				}
			}
			else if (Local_978[10 /*8*/].f_1 == 4)
			{
				Local_978[10 /*8*/].f_1++;
			}
			break;
		
		case 5:
			if (!GlobalFunc_111())
			{
				func_721(10, 5000);
				Local_978[10 /*8*/].f_1++;
			}
			break;
		
		case 6:
			if (GlobalFunc_5170())
			{
				if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -1063.45f, -245.74f, 43.14f, 1) <= 2.75f)
				{
					if (GlobalFunc_10618(&uLocal_385, &cLocal_88, "LS1A_RETURN", 8, 0, 0, 0))
					{
						Local_978[10 /*8*/].f_1 = (Local_978[10 /*8*/].f_1 - 1);
					}
				}
			}
			break;
	}
}

void func_721(int iParam0, int iParam1)//Position - 0x6E54C
{
	Local_978[iParam0 /*8*/] = MISC::GET_GAME_TIMER();
	Local_978[iParam0 /*8*/].f_2 = iParam1;
}

int func_722(int iParam0)//Position - 0x6E56A
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		switch (ENTITY::GET_ENTITY_TYPE(iParam0))
		{
			case 1:
				if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iParam0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), 0) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iParam0))
				{
					return 1;
				}
				break;
			
			case 3:
				if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iParam0))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_723()//Position - 0x6E5E9
{
	if (iLocal_2887 < 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_628[7]))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1088.11f, -262.09f, 36.79f, 1) < 30f)
			{
				GlobalFunc_718(&uLocal_1083, iLocal_212);
				if (STREAMING::HAS_MODEL_LOADED(iLocal_212))
				{
					MISC::CLEAR_AREA_OF_PEDS(-1084.356f, -246.5053f, 36.7634f, 5f, 0);
					GlobalFunc_10617(130, 1);
					GlobalFunc_10617(131, 1);
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(-1083.76f, -246.05f, 37.41f, 2f, 0) && OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1083.87f, -246.33f, 36.76f, 0.5f, joaat("prop_off_chair_01"), 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_657[23 /*10*/]))
						{
							Local_657[23 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1083.87f, -246.33f, 36.76f, 0.5f, joaat("prop_off_chair_01"), 1, 0, 1);
							Local_657[23 /*10*/].f_7 = 1;
							ENTITY::FREEZE_ENTITY_POSITION(Local_657[23 /*10*/], 1);
						}
						iLocal_628[7] = PED::CREATE_PED(26, iLocal_212, -1085.393f, -248.0326f, 36.7632f, 187.3241f, 1, 1);
						ENTITY::SET_ENTITY_COLLISION(iLocal_628[7], 0, 0);
						TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_628[7], -1083.76f, -246.05f, 37.41f, 2f, 0);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_628[7], 1);
						PED::SET_PED_KEEP_TASK(iLocal_628[7], 1);
					}
				}
			}
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1083.87f, -246.33f, 36.76f, 1) > 35f)
		{
			PED::DELETE_PED(&(iLocal_628[7]));
			GlobalFunc_5174(&uLocal_1083, iLocal_212);
		}
	}
	else
	{
		switch (Local_978[9 /*8*/].f_1)
		{
			case 1:
				iLocal_573 = 0;
				iLocal_584 = 0;
				Local_978[9 /*8*/].f_1++;
				break;
			
			case 2:
				if (STREAMING::HAS_MODEL_LOADED(iLocal_212))
				{
					MISC::CLEAR_AREA_OF_PEDS(-1084.356f, -246.5053f, 36.7634f, 5f, 0);
					GlobalFunc_10617(130, 1);
					GlobalFunc_10617(131, 1);
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(-1083.76f, -246.05f, 37.41f, 2f, 0) && OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1083.87f, -246.33f, 36.76f, 0.5f, joaat("prop_off_chair_01"), 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_657[23 /*10*/]))
						{
							Local_657[23 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1083.87f, -246.33f, 36.76f, 0.5f, joaat("prop_off_chair_01"), 1, 0, 1);
							Local_657[23 /*10*/].f_7 = 1;
							ENTITY::FREEZE_ENTITY_POSITION(Local_657[23 /*10*/], 1);
						}
						iLocal_628[7] = PED::CREATE_PED(26, iLocal_212, -1085.393f, -248.0326f, 36.7632f, 187.3241f, 1, 1);
						ENTITY::SET_ENTITY_COLLISION(iLocal_628[7], 0, 0);
						TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_628[7], -1083.76f, -246.05f, 37.41f, 2f, 0);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_628[7], 1);
						PED::SET_PED_KEEP_TASK(iLocal_628[7], 1);
						Local_978[9 /*8*/].f_1++;
					}
				}
				break;
			
			case 3:
				if (INTERIOR::IS_INTERIOR_SCENE())
				{
					switch (iLocal_2887)
					{
						case 3:
						case 4:
						case 5:
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1083.435f, -245.204f, 36.76327f) < 34.4569f)
							{
								GlobalFunc_173(&uLocal_385, 4, iLocal_628[7], "LIReceptionist", 0, 1);
								if (!GlobalFunc_5170())
								{
									GlobalFunc_5105();
								}
								else if (iLocal_584 < 3)
								{
									if (GlobalFunc_10618(&uLocal_385, &cLocal_88, "LS1A_REC2", 8, 0, 0, 0))
									{
										Local_978[9 /*8*/].f_1 = -301;
										iLocal_584++;
									}
								}
								else if (iLocal_584 < 7)
								{
									if (GlobalFunc_10618(&uLocal_385, &cLocal_88, "LS1A_REC3", 8, 0, 0, 0))
									{
										Local_978[9 /*8*/].f_1 = -301;
										iLocal_584++;
									}
								}
							}
							break;
						
						case 6:
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1084.704f, -253.4043f, 36.51329f, -1081.726f, -259.2211f, 39.75972f, 10.75f, 0, 1, 0))
							{
								GlobalFunc_173(&uLocal_385, 4, iLocal_628[7], "LIReceptionist", 0, 1);
								if (GlobalFunc_5170())
								{
									if (GlobalFunc_10618(&uLocal_385, "LS1AAUD", "LS1A_REC", 9, 0, 0, 0))
									{
										func_721(9, 2000);
										Local_978[9 /*8*/].f_1++;
									}
								}
							}
							break;
						}
				}
				break;
			
			case -301:
				if (!GlobalFunc_111())
				{
					Local_978[9 /*8*/].f_1 = 3;
					func_721(9, MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
				}
				break;
			
			case 4:
				AUDIO::PLAY_SOUND_FROM_COORD(-1, "UNLOCK_DOOR", -1080.4f, -257.84f, 37.92f, "LESTER1A_SOUNDS", 0, 0, 0);
				GlobalFunc_10617(130, 0);
				GlobalFunc_10617(131, 0);
				Local_978[9 /*8*/].f_1++;
				break;
			
			case 5:
				if (!INTERIOR::IS_INTERIOR_SCENE() && !GlobalFunc_111())
				{
					Local_978[9 /*8*/].f_4 = 1;
				}
				break;
		}
		if (!PED::IS_PED_INJURED(iLocal_628[7]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			switch (iLocal_2887)
			{
				case 3:
				case 4:
				case 5:
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1083.435f, -245.204f, 36.76327f) < 34.4569f)
					{
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_628[7], -1, 0, 2);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_628[7], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					}
					else
					{
						TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
						TASK::TASK_CLEAR_LOOK_AT(iLocal_628[7]);
					}
					break;
				
				case 6:
					if (Local_978[9 /*8*/].f_1 > 3)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1088.851f, -254.1814f, 39.25839f, -1074.995f, -246.9062f, 36.51326f, 11.625f, 0, 1, 0))
						{
							if (!iLocal_573)
							{
								TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_628[7], -1, 0, 2);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_628[7], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								iLocal_573 = 1;
							}
						}
						else if (iLocal_573)
						{
							TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
							TASK::TASK_CLEAR_LOOK_AT(iLocal_628[7]);
							iLocal_573 = 0;
						}
					}
					break;
				}
			}
	}
}

void func_724()//Position - 0x6EC13
{
	float fVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	
	if (Local_978[7 /*8*/].f_1 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_657[11 /*10*/]) && OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1054.16f, -241.7358f, 43.6537f, 1f, joaat("prop_off_chair_01"), 0))
		{
			Local_657[11 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1054.16f, -241.7358f, 43.6537f, 1f, joaat("prop_off_chair_01"), 1, 0, 1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_657[10 /*10*/]) && OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1053.235f, -245.2269f, 43.6272f, 1f, joaat("prop_off_chair_01"), 0))
		{
			Local_657[10 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1053.235f, -245.2269f, 43.6272f, 1f, joaat("prop_off_chair_01"), 1, 0, 1);
		}
		if ((((((STREAMING::HAS_MODEL_LOADED(iLocal_211) && STREAMING::HAS_MODEL_LOADED(iLocal_212)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_paper_ball"))) && STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_182)) && ENTITY::DOES_ENTITY_EXIST(Local_657[11 /*10*/])) && ENTITY::DOES_ENTITY_EXIST(Local_657[10 /*10*/])) && (!CUTSCENE::IS_CUTSCENE_PLAYING() || CUTSCENE::GET_CUTSCENE_TIME() > 3700))
		{
			iLocal_628[14] = PED::CREATE_PED(26, iLocal_212, -1054.905f, -241.1034f, 43.0211f, 297.0785f, 1, 1);
			iLocal_628[13] = PED::CREATE_PED(26, iLocal_211, -1053.469f, -243.68f, 43.0211f, 118.6611f, 1, 1);
			func_725(14);
			func_725(13);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_657[11 /*10*/], iLocal_628[14], 0);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_657[10 /*10*/], iLocal_628[13], 0);
			iLocal_2996 = 1;
			iLocal_582 = 1;
			iLocal_597 = 0;
			Local_978[7 /*8*/].f_1++;
		}
	}
	if (Local_978[7 /*8*/].f_1 > 1)
	{
		switch (Local_978[7 /*8*/].f_1)
		{
			case 2:
				if (((func_722(iLocal_628[14]) && func_722(iLocal_628[13])) && func_722(Local_657[11 /*10*/])) && func_722(Local_657[10 /*10*/]))
				{
					fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
					if ((((((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_618[4]) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_618[4]) == 1f) && (fVar0 <= 0.6f || iLocal_582)) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_628[14])) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_628[13])) && !iLocal_597) && ((iLocal_582 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1060.481f, -240.9797f, 43.02112f, -1053.233f, -237.1684f, 45.77112f, 3.75f, 0, 1, 0)) || !iLocal_582))
					{
						switch (iLocal_2996)
						{
							case 0:
								sVar1 = "paper_throw_01_f";
								sVar2 = "paper_throw_01_m";
								sVar3 = "paper_throw_01_f_chair";
								sVar4 = "paper_throw_01_m_chair";
								sVar5 = "paper_throw_01_paper_ball";
								break;
							
							case 1:
								sVar1 = "paper_throw_03_f";
								sVar2 = "paper_throw_03_m";
								sVar3 = "paper_throw_03_f_chair";
								sVar4 = "paper_throw_03_m_chair";
								sVar5 = "paper_throw_03_paper_ball";
								break;
							
							case 2:
								sVar1 = "paper_throw_06_f";
								sVar2 = "paper_throw_06_m";
								sVar3 = "paper_throw_06_f_chair";
								sVar4 = "paper_throw_06_m_chair";
								sVar5 = "paper_throw_06_paper_ball";
								break;
						}
						func_192(&(Local_657[2 /*10*/]), joaat("prop_paper_ball"), -1052.78f, -245.6611f, 43.0211f, 0);
						ENTITY::SET_ENTITY_COLLISION(Local_657[2 /*10*/], 0, 0);
						iLocal_618[4] = PED::CREATE_SYNCHRONIZED_SCENE(Local_282, Local_285, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[14], iLocal_618[4], &cLocal_182, sVar1, 4f, -8f, 4, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[13], iLocal_618[4], &cLocal_182, sVar2, 4f, -8f, 4, 0, 1148846080, 0);
						func_488(&(Local_657[11 /*10*/]), iLocal_618[4], sVar3, &cLocal_182, 8f, -8f, 4);
						func_488(&(Local_657[10 /*10*/]), iLocal_618[4], sVar4, &cLocal_182, 8f, -8f, 4);
						func_488(&(Local_657[2 /*10*/]), iLocal_618[4], sVar5, &cLocal_182, 8f, -8f, 4);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[13], 0, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[14], 0, 0);
						iLocal_582 = 0;
						iLocal_597 = 1;
						iLocal_2996++;
						if (iLocal_2996 > 2)
						{
							iLocal_2996 = 0;
						}
						Local_978[7 /*8*/].f_1++;
					}
					else if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_618[4]) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_618[4]) == 1f)
					{
						iLocal_618[4] = PED::CREATE_SYNCHRONIZED_SCENE(Local_282, Local_285, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[14], iLocal_618[4], &cLocal_182, "paper_throw_base_f", 8f, -4f, 4, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[13], iLocal_618[4], &cLocal_182, "paper_throw_base_m", 8f, -4f, 4, 0, 1148846080, 0);
						func_488(&(Local_657[11 /*10*/]), iLocal_618[4], "paper_throw_base_f_chair", &cLocal_182, 8f, -8f, 4);
						func_488(&(Local_657[10 /*10*/]), iLocal_618[4], "paper_throw_base_m_chair", &cLocal_182, 8f, -8f, 4);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[13], 0, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[14], 0, 0);
						iLocal_597 = 0;
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1053.111f, -242.0294f, 43.02128f) < 24.3838f)
						{
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0 && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_628[14]))
							{
								switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
								{
									case 0:
										GlobalFunc_5117(iLocal_628[14], "LES1A_BEAA", "LIFEINVADERF3", 3);
										break;
									
									case 1:
										GlobalFunc_5117(iLocal_628[14], "LES1A_BFAA", "LIFEINVADERF3", 3);
										break;
								}
							}
							else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_628[13]))
							{
								switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
								{
									case 0:
										GlobalFunc_5117(iLocal_628[13], "LES1A_AYAA", "LIFEINVADERM3", 3);
										break;
									
									case 1:
										GlobalFunc_5117(iLocal_628[13], "LES1A_AZAA", "LIFEINVADERM3", 3);
										break;
									}
								}
							}
						}
				}
				break;
			
			case 3:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_657[2 /*10*/], -1054.526f, -240.2988f, 43.02112f, -1054.169f, -240.1971f, 43.12112f, 0.5f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_657[2 /*10*/], -1053.178f, -241.0982f, 43.02112f, -1053.063f, -241.3932f, 43.12112f, 0.5f, 0, 1, 0))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_657[2 /*10*/]))
					{
						ENTITY::DETACH_ENTITY(Local_657[2 /*10*/], 1, 1);
					}
					else
					{
						func_72(&(Local_657[2 /*10*/]), -8f);
					}
					ENTITY::FREEZE_ENTITY_POSITION(Local_657[2 /*10*/], 1);
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_657[2 /*10*/]));
					Local_978[7 /*8*/].f_1 = 2;
				}
				break;
			}
	}
}

void func_725(int iParam0)//Position - 0x6F31C
{
	var uVar0;
	int iVar65;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_628[iParam0]) && !PED::IS_PED_INJURED(iLocal_628[iParam0]))
	{
		uVar0 = 12;
		uVar0.f_13 = 12;
		uVar0.f_26 = 12;
		uVar0.f_39 = 9;
		uVar0.f_49 = 9;
		iVar65 = 0;
		while (iVar65 < 12)
		{
			uVar0.f_13[iVar65] = -1;
			uVar0[iVar65] = -1;
			iVar65++;
		}
		switch (iParam0)
		{
			case 20:
				uVar0.f_13[0] = 0;
				uVar0[0] = 0;
				uVar0.f_13[2] = 0;
				uVar0[2] = 0;
				break;
			
			case 12:
				uVar0.f_13[0] = 1;
				uVar0[0] = 0;
				uVar0.f_13[2] = 1;
				uVar0[2] = 0;
				uVar0.f_13[3] = 0;
				uVar0[3] = 3;
				uVar0.f_13[4] = 0;
				uVar0[4] = 2;
				uVar0.f_13[8] = 0;
				uVar0[8] = 0;
				break;
			
			case 10:
				uVar0.f_13[0] = 0;
				uVar0[0] = 1;
				uVar0.f_13[2] = 0;
				uVar0[2] = 1;
				uVar0.f_13[3] = 1;
				uVar0[3] = 0;
				uVar0.f_13[4] = 1;
				uVar0[4] = 1;
				uVar0.f_13[8] = 1;
				uVar0[8] = 0;
				break;
			
			case 11:
				uVar0.f_13[0] = 1;
				uVar0[0] = 1;
				uVar0.f_13[2] = 1;
				uVar0[2] = 1;
				uVar0.f_13[3] = 1;
				uVar0[3] = 0;
				uVar0.f_13[4] = 0;
				uVar0[4] = 1;
				uVar0.f_13[5] = 0;
				uVar0[5] = 0;
				break;
			
			case 9:
			case 5:
				uVar0.f_13[0] = 1;
				uVar0[0] = 2;
				uVar0.f_13[2] = 2;
				uVar0[2] = 0;
				uVar0.f_13[3] = 0;
				uVar0[3] = 4;
				uVar0.f_13[4] = 1;
				uVar0[4] = 2;
				uVar0.f_13[8] = 1;
				uVar0[8] = 0;
				break;
			
			case 4:
			case 8:
				uVar0.f_13[0] = 1;
				uVar0[0] = 0;
				uVar0.f_13[2] = 0;
				uVar0[2] = 0;
				uVar0.f_13[3] = 0;
				uVar0[3] = 2;
				uVar0.f_13[4] = 0;
				uVar0[4] = 2;
				uVar0.f_13[5] = 0;
				uVar0[5] = 0;
				break;
			
			case 6:
				uVar0.f_13[0] = 0;
				uVar0[0] = 0;
				uVar0.f_13[2] = 1;
				uVar0[2] = 0;
				uVar0.f_13[3] = 0;
				uVar0[3] = 1;
				uVar0.f_13[4] = 0;
				uVar0[4] = 1;
				uVar0.f_13[8] = 1;
				uVar0[8] = 0;
				break;
			
			case 16:
				uVar0.f_13[0] = 0;
				uVar0[0] = 2;
				uVar0.f_13[2] = 2;
				uVar0[2] = 0;
				uVar0.f_13[3] = 0;
				uVar0[3] = 2;
				uVar0.f_13[4] = 0;
				uVar0[4] = 2;
				uVar0.f_13[8] = 0;
				uVar0[8] = 0;
				break;
			
			case 17:
				uVar0.f_13[0] = 1;
				uVar0[0] = 0;
				uVar0.f_13[2] = 1;
				uVar0[2] = 0;
				uVar0.f_13[3] = 1;
				uVar0[3] = 2;
				uVar0.f_13[4] = 1;
				uVar0[4] = 0;
				uVar0.f_13[8] = 1;
				uVar0[8] = 0;
				break;
			
			case 18:
				uVar0.f_13[0] = 1;
				uVar0[0] = 0;
				uVar0.f_13[2] = 1;
				uVar0[2] = 0;
				uVar0.f_13[3] = 1;
				uVar0[3] = 0;
				uVar0.f_13[4] = 1;
				uVar0[4] = 1;
				uVar0.f_13[8] = 1;
				uVar0[8] = 0;
				break;
			
			case 19:
				uVar0.f_13[0] = 0;
				uVar0[0] = 1;
				uVar0.f_13[2] = 0;
				uVar0[2] = 1;
				uVar0.f_13[3] = 1;
				uVar0[3] = 1;
				uVar0.f_13[4] = 0;
				uVar0[4] = 1;
				uVar0.f_13[8] = 1;
				uVar0[8] = 0;
				break;
			
			case 15:
				uVar0.f_13[0] = 0;
				uVar0[0] = 2;
				uVar0.f_13[2] = 0;
				uVar0[2] = 1;
				uVar0.f_13[3] = 0;
				uVar0[3] = 0;
				uVar0.f_13[4] = 0;
				uVar0[4] = 0;
				uVar0.f_13[8] = 0;
				uVar0[8] = 2;
				break;
			
			case 14:
				uVar0.f_13[0] = 1;
				uVar0[0] = 0;
				uVar0.f_13[2] = 1;
				uVar0[2] = 2;
				uVar0.f_13[3] = 1;
				uVar0[3] = 0;
				uVar0.f_13[4] = 1;
				uVar0[4] = 0;
				uVar0.f_13[5] = 0;
				uVar0[5] = 0;
				break;
			
			case 13:
				uVar0.f_13[0] = 0;
				uVar0[0] = 2;
				uVar0.f_13[2] = 0;
				uVar0[2] = 0;
				uVar0.f_13[3] = 0;
				uVar0[3] = 1;
				uVar0.f_13[4] = 0;
				uVar0[4] = 2;
				uVar0.f_13[8] = 1;
				uVar0[8] = 0;
				break;
			
			case 21:
				uVar0.f_13[0] = 1;
				uVar0[0] = 2;
				uVar0.f_13[2] = 1;
				uVar0[2] = 0;
				uVar0.f_13[3] = 1;
				uVar0[3] = 1;
				uVar0.f_13[4] = 0;
				uVar0[4] = 0;
				uVar0.f_13[8] = 1;
				uVar0[8] = 0;
				break;
			
			case 22:
				uVar0.f_13[0] = 1;
				uVar0[0] = 1;
				uVar0.f_13[2] = 1;
				uVar0[2] = 0;
				uVar0.f_13[3] = 0;
				uVar0[3] = 5;
				uVar0.f_13[4] = 1;
				uVar0[4] = 0;
				uVar0.f_13[8] = 1;
				uVar0[8] = 0;
				break;
			
			case 23:
				uVar0.f_13[0] = 0;
				uVar0[0] = 0;
				uVar0.f_13[2] = 0;
				uVar0[2] = 0;
				uVar0.f_13[3] = 1;
				uVar0[3] = 2;
				uVar0.f_13[4] = 1;
				uVar0[4] = 2;
				uVar0.f_13[8] = 1;
				uVar0[8] = 0;
				break;
			
			case 24:
				uVar0.f_13[0] = 0;
				uVar0[0] = 1;
				uVar0.f_13[2] = 0;
				uVar0[2] = 1;
				uVar0.f_13[3] = 0;
				uVar0[3] = 1;
				uVar0.f_13[4] = 0;
				uVar0[4] = 1;
				uVar0.f_13[8] = 1;
				uVar0[8] = 0;
				break;
			
			case 25:
				uVar0.f_13[0] = 0;
				uVar0[0] = 1;
				uVar0.f_13[2] = 0;
				uVar0[2] = 0;
				uVar0.f_13[3] = 0;
				uVar0[3] = 1;
				uVar0.f_13[4] = 0;
				uVar0[4] = 2;
				uVar0.f_13[5] = 0;
				uVar0[5] = 0;
				break;
			
			case 26:
				uVar0.f_13[0] = 1;
				uVar0[0] = 0;
				uVar0.f_13[2] = 1;
				uVar0[2] = 1;
				uVar0.f_13[3] = 1;
				uVar0[3] = 2;
				uVar0.f_13[4] = 1;
				uVar0[4] = 0;
				uVar0.f_13[5] = 0;
				uVar0[5] = 0;
				break;
			
			default:
				break;
		}
		iVar65 = 0;
		while (iVar65 < 12)
		{
			if (uVar0.f_13[iVar65] != -1 || uVar0[iVar65] != -1)
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_628[iParam0], iVar65, uVar0.f_13[iVar65], uVar0[iVar65], 0);
			}
			iVar65++;
		}
	}
}

void func_726()//Position - 0x6FA08
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_618[3]))
	{
		fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_618[3]);
	}
	else
	{
		fVar0 = 1f;
	}
	switch (Local_978[6 /*8*/].f_1)
	{
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(iLocal_211))
			{
				switch (iLocal_2887)
				{
					case 3:
						if ((STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_140) && STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_146)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_monitor_01d")))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1082.85f, -244.7975f, 42.79504f, -1073.899f, -248.9113f, 45.52112f, 1f, 0, 1, 0))
							{
								if (!bLocal_577)
								{
									ENTITY::CREATE_MODEL_SWAP(Local_288, 1f, joaat("prop_monitor_li"), joaat("prop_monitor_01d"), 1);
									GlobalFunc_5174(&uLocal_1083, joaat("prop_monitor_01d"));
									bLocal_577 = true;
								}
								iVar1 = 1;
								iVar2 = 1;
								Local_978[6 /*8*/].f_1 = 101;
							}
						}
						break;
					
					case 4:
					case 5:
						if (STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_146))
						{
							iVar1 = 1;
							iVar2 = 1;
							Local_978[6 /*8*/].f_1 = 3;
						}
						break;
					
					case 6:
						if (STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_152))
						{
							iVar1 = 1;
							iVar2 = 1;
							Local_978[6 /*8*/].f_1 = 5;
						}
						break;
				}
				if (iVar2 && iVar1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_628[15]))
					{
						PED::DELETE_PED(&(iLocal_628[15]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_628[16]))
					{
						PED::DELETE_PED(&(iLocal_628[16]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_628[17]))
					{
						PED::DELETE_PED(&(iLocal_628[17]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_628[18]))
					{
						PED::DELETE_PED(&(iLocal_628[18]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_628[19]))
					{
						PED::DELETE_PED(&(iLocal_628[19]));
					}
					iLocal_628[15] = PED::CREATE_PED(26, iLocal_211, -1064.749f, -238.4493f, 43.0211f, 54.0951f, 1, 1);
					iLocal_628[16] = PED::CREATE_PED(26, iLocal_211, -1064.749f, -238.4493f, 43.0211f, 54.0951f, 1, 1);
					iLocal_628[17] = PED::CREATE_PED(26, iLocal_211, -1064.749f, -238.4493f, 43.0211f, 54.0951f, 1, 1);
					iLocal_628[18] = PED::CREATE_PED(26, iLocal_211, -1064.749f, -238.4493f, 43.0211f, 54.0951f, 1, 1);
					iLocal_628[19] = PED::CREATE_PED(26, iLocal_211, -1063.572f, -246.7145f, 44.0194f, -22.918f, 1, 1);
					PED::SET_PED_NAME_DEBUG(iLocal_628[15], "OFFICE_boss");
					PED::SET_PED_NAME_DEBUG(iLocal_628[16], "OFFICE_a");
					PED::SET_PED_NAME_DEBUG(iLocal_628[17], "OFFICE_b");
					PED::SET_PED_NAME_DEBUG(iLocal_628[18], "OFFICE_c");
					PED::SET_PED_NAME_DEBUG(iLocal_628[19], "OFFICE_d");
					func_725(15);
					func_725(16);
					func_725(17);
					func_725(18);
					func_725(19);
					if (!ENTITY::DOES_ENTITY_EXIST(Local_657[5 /*10*/]))
					{
						Local_657[5 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1068.078f, -238.9636f, 43.0229f, 1f, iLocal_214, 1, 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_657[5 /*10*/]))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_657[5 /*10*/], -1068.078f, -238.9636f, 43.0229f, 0, 0, 1);
							ENTITY::SET_ENTITY_ROTATION(Local_657[5 /*10*/], 0f, 0f, 52.5f, 2, 1);
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_657[5 /*10*/], iLocal_628[15], 0);
							ENTITY::FREEZE_ENTITY_POSITION(Local_657[5 /*10*/], 1);
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_657[6 /*10*/]))
					{
						Local_657[6 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1066.25f, -238.04f, 43.02f, 1f, iLocal_214, 1, 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_657[6 /*10*/]))
						{
							if (Local_978[6 /*8*/].f_1 == 3 || Local_978[6 /*8*/].f_1 == 4)
							{
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_657[6 /*10*/], -1065.527f, -237.9645f, 43.0258f, 0, 0, 1);
								ENTITY::SET_ENTITY_ROTATION(Local_657[6 /*10*/], -0.1264f, 0.0338f, -88.9461f, 2, 1);
							}
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_657[6 /*10*/], iLocal_628[16], 0);
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_657[7 /*10*/]))
					{
						Local_657[7 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1065.51f, -239.51f, 43.02f, 1f, iLocal_214, 1, 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_657[7 /*10*/]))
						{
							if (Local_978[6 /*8*/].f_1 == 3 || Local_978[6 /*8*/].f_1 == 4)
							{
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_657[7 /*10*/], -1064.897f, -240.5339f, 43.0251f, 0, 0, 1);
								ENTITY::SET_ENTITY_ROTATION(Local_657[7 /*10*/], 0f, -0.0005f, 167.7005f, 2, 1);
							}
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_657[7 /*10*/], iLocal_628[17], 0);
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_657[8 /*10*/]))
					{
						Local_657[8 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1057.86f, -243.51f, 43.02f, 1f, iLocal_214, 1, 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_657[8 /*10*/]))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_657[8 /*10*/], -1058.191f, -243.0693f, 43.0229f, 0, 0, 1);
							ENTITY::SET_ENTITY_ROTATION(Local_657[8 /*10*/], 0f, 0f, -134.5749f, 2, 1);
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_657[8 /*10*/], iLocal_628[18], 0);
							ENTITY::FREEZE_ENTITY_POSITION(Local_657[8 /*10*/], 1);
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_657[9 /*10*/]))
					{
						Local_657[9 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1063.61f, -246.65f, 43.02f, 1f, iLocal_214, 1, 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_657[9 /*10*/]))
						{
							if (iLocal_2887 < 4)
							{
								ENTITY::SET_ENTITY_COORDS(Local_657[9 /*10*/], -1063.832f, -246.746f, 43.023f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_ROTATION(Local_657[9 /*10*/], -0.04f, 0.04f, 159.275f, 2, 1);
							}
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_657[9 /*10*/], iLocal_628[19], 0);
						}
					}
				}
			}
			break;
		
		case 101:
			if ((func_722(iLocal_628[18]) && func_722(iLocal_628[19])) && func_722(Local_657[9 /*10*/]))
			{
				iLocal_618[3] = PED::CREATE_SYNCHRONIZED_SCENE(-1067.002f, -239.245f, 43.021f, 0f, 0f, 27.75f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[18], iLocal_618[3], &cLocal_146, "air_guitar_01_exitloop_c", 1000f, -8f, 0, 0, 1148846080, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[19], iLocal_618[3], &cLocal_146, "air_guitar_01_exitloop_d", 1000f, -8f, 0, 0, 1148846080, 0);
				func_488(&(Local_657[9 /*10*/]), iLocal_618[3], "air_guitar_01_exitloop_chair_d", &cLocal_146, 8f, -8f, 0);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_618[3], 1);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[18], 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[19], 0, 0);
				Local_978[6 /*8*/].f_1++;
			}
			break;
		
		case 102:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1068.843f, -246.0792f, 42.77128f, -1067.172f, -249.2509f, 46.78306f, 5.75f, 0, 1, 0) && AUDIO::REQUEST_MISSION_AUDIO_BANK("Lester1A_01", 0))
			{
				GlobalFunc_173(&uLocal_385, 7, iLocal_628[15], "LIOffice1", 0, 1);
				GlobalFunc_173(&uLocal_385, 8, iLocal_628[16], "LIOffice2", 0, 1);
				GlobalFunc_173(&uLocal_385, 6, iLocal_628[17], "LIOfficeGroup", 0, 1);
				iVar3 = 0;
				while (iVar3 <= (iLocal_2993 - 1))
				{
					if ((Local_2899[iVar3 /*6*/] != -1 && Local_2899[iVar3 /*6*/].f_5 != -1) && Local_2899[iVar3 /*6*/].f_4 == 0)
					{
						if (iLocal_2981 < 6)
						{
							switch (iLocal_2981)
							{
								case 0:
									sVar4 = "POPUP_MUSIC_01";
									break;
								
								case 1:
									sVar4 = "POPUP_MUSIC_02";
									break;
								
								case 2:
									sVar4 = "POPUP_MUSIC_03";
									break;
								
								case 3:
									sVar4 = "POPUP_MUSIC_04";
									break;
								
								case 4:
									sVar4 = "POPUP_MUSIC_05";
									break;
								
								case 5:
									sVar4 = "POPUP_MUSIC_06";
									break;
								
								default:
									sVar4 = "POPUP_MUSIC_RND";
									break;
							}
						}
						else
						{
							sVar4 = "POPUP_MUSIC_RND";
						}
						AUDIO::PLAY_SOUND_FROM_COORD(Local_2899[iVar3 /*6*/].f_5, sVar4, -1059.63f, -244.61f, 43.92f, "LESTER1A_SOUNDS", 0, 0, 0);
						AUDIO::SET_VARIABLE_ON_SOUND(Local_2899[iVar3 /*6*/].f_5, "State", 0f);
						Local_2899[iVar3 /*6*/].f_4 = 1;
						iLocal_2981++;
					}
					iVar3++;
				}
				iVar3 = 0;
				while (iVar3 < Local_2899)
				{
					if (Local_2899[iVar3 /*6*/].f_4 && Local_2899[iVar3 /*6*/].f_5 != -1)
					{
						AUDIO::SET_VARIABLE_ON_SOUND(Local_2899[iVar3 /*6*/].f_5, "TracksPlaying", SYSTEM::TO_FLOAT(GlobalFunc_254(iLocal_2981, 1, 12)));
					}
					iVar3++;
				}
				Local_978[6 /*8*/].f_1 = 2;
			}
			break;
		
		case 2:
			if (((((((func_722(iLocal_628[16]) && func_722(iLocal_628[17])) && func_722(iLocal_628[18])) && func_722(iLocal_628[19])) && func_722(iLocal_628[15])) && func_722(Local_657[6 /*10*/])) && func_722(Local_657[7 /*10*/])) && func_722(Local_657[9 /*10*/]))
			{
				if ((GlobalFunc_5170() && GlobalFunc_10618(&uLocal_385, &cLocal_88, "LES_1A_IG_3", 8, 1, 0, 0)) || GlobalFunc_111())
				{
					iLocal_618[3] = PED::CREATE_SYNCHRONIZED_SCENE(-1067.002f, -239.245f, 43.021f, 0f, 0f, 27.75f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[15], iLocal_618[3], &cLocal_140, "air_guitar_01_boss", 1000f, -8f, 0, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[16], iLocal_618[3], &cLocal_140, "air_guitar_01_a", 1000f, -8f, 0, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[17], iLocal_618[3], &cLocal_140, "air_guitar_01_b", 1000f, -8f, 0, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[18], iLocal_618[3], &cLocal_140, "air_guitar_01_c", 1000f, -8f, 0, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[19], iLocal_618[3], &cLocal_140, "air_guitar_01_d", 1000f, -8f, 0, 0, 1148846080, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[15], 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[16], 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[17], 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[18], 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[19], 0, 0);
					func_488(&(Local_657[5 /*10*/]), iLocal_618[3], "air_guitar_01_chair_boss", &cLocal_140, 8f, -8f, 0);
					func_488(&(Local_657[6 /*10*/]), iLocal_618[3], "air_guitar_01_chair_a", &cLocal_140, 8f, -8f, 0);
					func_488(&(Local_657[7 /*10*/]), iLocal_618[3], "air_guitar_01_chair_b", &cLocal_140, 8f, -8f, 0);
					func_488(&(Local_657[9 /*10*/]), iLocal_618[3], "air_guitar_01_chair_d", &cLocal_140, 8f, -8f, 0);
					Local_978[6 /*8*/].f_7 = 1;
					Local_978[6 /*8*/].f_1++;
				}
			}
			break;
		
		case 3:
			if (fVar0 == 1f || ((CUTSCENE::IS_CUTSCENE_PLAYING() && iLocal_2887 == 4) && iLocal_2888 > 5))
			{
				if (((((((func_722(iLocal_628[16]) && func_722(iLocal_628[17])) && func_722(iLocal_628[18])) && func_722(iLocal_628[19])) && func_722(iLocal_628[15])) && func_722(Local_657[6 /*10*/])) && func_722(Local_657[7 /*10*/])) && func_722(Local_657[9 /*10*/]))
				{
					iLocal_618[3] = PED::CREATE_SYNCHRONIZED_SCENE(-1067.002f, -239.245f, 43.021f, 0f, 0f, 27.75f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[15], iLocal_618[3], &cLocal_146, "air_guitar_01_exitloop_boss", 1000f, -8f, 0, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[16], iLocal_618[3], &cLocal_146, "air_guitar_01_exitloop_a", 1000f, -8f, 0, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[17], iLocal_618[3], &cLocal_146, "air_guitar_01_exitloop_b", 1000f, -8f, 0, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[18], iLocal_618[3], &cLocal_146, "air_guitar_01_exitloop_c", 1000f, -8f, 0, 0, 1148846080, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[15], 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[16], 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[17], 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[18], 0, 0);
					func_488(&(Local_657[5 /*10*/]), iLocal_618[3], "air_guitar_01_exitloop_chair_boss", &cLocal_146, 8f, -8f, 0);
					func_488(&(Local_657[6 /*10*/]), iLocal_618[3], "air_guitar_01_exitloop_chair_a", &cLocal_146, 1000f, -8f, 0);
					func_488(&(Local_657[7 /*10*/]), iLocal_618[3], "air_guitar_01_exitloop_chair_b", &cLocal_146, 1000f, -8f, 0);
					if (iLocal_2887 < 4)
					{
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[19], iLocal_618[3], &cLocal_146, "air_guitar_01_exitloop_d", 1000f, -8f, 0, 0, 1148846080, 0);
						func_488(&(Local_657[9 /*10*/]), iLocal_618[3], "air_guitar_01_exitloop_chair_d", &cLocal_146, 1000f, -8f, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[19], 0, 0);
					}
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_618[3], 1);
					GlobalFunc_5175(&uLocal_1083, &cLocal_140);
					Local_978[6 /*8*/].f_7 = 1;
					Local_978[6 /*8*/].f_6 = 0;
					Local_978[6 /*8*/].f_1++;
				}
			}
			else
			{
				if (GlobalFunc_111())
				{
					if (!PED::IS_PED_INJURED(iLocal_628[15]))
					{
						if (AUDIO::IS_PED_IN_CURRENT_CONVERSATION(iLocal_628[15]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1066.78f, -239.63f, 43.86f) > 225f)
						{
							GlobalFunc_5105();
						}
					}
				}
				if (Local_978[6 /*8*/].f_6 == 0 && fVar0 > 0.8f)
				{
					GlobalFunc_719(&uLocal_1083, &cLocal_146);
					Local_978[6 /*8*/].f_6 = 1;
				}
				if (!PED::IS_PED_INJURED(iLocal_628[15]))
				{
					if (fVar0 > 0.745f && fVar0 < 0.93f)
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_628[15]))
						{
							GlobalFunc_5117(iLocal_628[15], "AIRROCKING", "LIENGINEER2", 3);
						}
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_628[19]))
				{
					if (fVar0 > 0.745f && fVar0 < 0.93f)
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_628[19]))
						{
							GlobalFunc_5117(iLocal_628[19], "DRUMMING", "AIRDRUMMER", 3);
						}
					}
					else if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_628[19]))
					{
						AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_628[19]);
					}
				}
			}
			break;
		
		case 4:
			if (iLocal_2887 >= 6)
			{
				Local_978[6 /*8*/].f_1++;
			}
			break;
		
		case 5:
			if (((((((func_722(iLocal_628[16]) && func_722(iLocal_628[17])) && func_722(iLocal_628[18])) && func_722(iLocal_628[19])) && func_722(iLocal_628[15])) && func_722(Local_657[6 /*10*/])) && func_722(Local_657[7 /*10*/])) && func_722(Local_657[9 /*10*/]))
			{
				TASK::CLEAR_PED_TASKS(iLocal_628[15]);
				TASK::CLEAR_PED_TASKS(iLocal_628[16]);
				TASK::CLEAR_PED_TASKS(iLocal_628[17]);
				TASK::CLEAR_PED_TASKS(iLocal_628[18]);
				TASK::CLEAR_PED_TASKS(iLocal_628[19]);
				func_72(&(Local_657[6 /*10*/]), -1000f);
				func_72(&(Local_657[7 /*10*/]), -1000f);
				func_72(&(Local_657[9 /*10*/]), -1000f);
				iLocal_618[3] = PED::CREATE_SYNCHRONIZED_SCENE(-1067.002f, -239.245f, 43.021f, 0f, 0f, 27.75f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[15], iLocal_618[3], &cLocal_152, "air_guitar_02_boss", 1000f, -8f, 0, 0, 1148846080, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[16], iLocal_618[3], &cLocal_152, "air_guitar_02_a", 1000f, -8f, 0, 0, 1148846080, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[17], iLocal_618[3], &cLocal_152, "air_guitar_02_b", 1000f, -8f, 0, 0, 1148846080, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[18], iLocal_618[3], &cLocal_152, "air_guitar_02_c", 1000f, -8f, 0, 0, 1148846080, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[19], iLocal_618[3], &cLocal_152, "air_guitar_02_d", 1000f, -8f, 0, 0, 1148846080, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[15], 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[16], 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[17], 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[18], 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[19], 0, 0);
				func_488(&(Local_657[6 /*10*/]), iLocal_618[3], "air_guitar_02_chair_a", &cLocal_152, 1000f, -8f, 0);
				func_488(&(Local_657[7 /*10*/]), iLocal_618[3], "air_guitar_02_chair_b", &cLocal_152, 1000f, -8f, 0);
				func_488(&(Local_657[9 /*10*/]), iLocal_618[3], "air_guitar_02_chair_d", &cLocal_152, 1000f, -8f, 0);
				GlobalFunc_5175(&uLocal_1083, &cLocal_146);
				Local_978[6 /*8*/].f_7 = 1;
				Local_978[6 /*8*/].f_1++;
			}
			break;
		
		case 6:
			if (fVar0 == 1f)
			{
				if (((((((func_722(iLocal_628[16]) && func_722(iLocal_628[17])) && func_722(iLocal_628[18])) && func_722(iLocal_628[19])) && func_722(iLocal_628[15])) && func_722(Local_657[6 /*10*/])) && func_722(Local_657[7 /*10*/])) && func_722(Local_657[9 /*10*/]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_628[15]);
					TASK::CLEAR_PED_TASKS(iLocal_628[16]);
					TASK::CLEAR_PED_TASKS(iLocal_628[17]);
					TASK::CLEAR_PED_TASKS(iLocal_628[18]);
					TASK::CLEAR_PED_TASKS(iLocal_628[19]);
					func_72(&(Local_657[6 /*10*/]), -1000f);
					func_72(&(Local_657[7 /*10*/]), -1000f);
					func_72(&(Local_657[9 /*10*/]), -1000f);
					iLocal_618[3] = PED::CREATE_SYNCHRONIZED_SCENE(-1067.002f, -239.245f, 43.021f, 0f, 0f, 27.75f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[15], iLocal_618[3], &cLocal_158, "air_guitar_02_exit_boss", 1000f, -8f, 0, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[16], iLocal_618[3], &cLocal_158, "air_guitar_02_exit_a", 1000f, -8f, 0, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[17], iLocal_618[3], &cLocal_158, "air_guitar_02_exit_b", 1000f, -8f, 0, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[18], iLocal_618[3], &cLocal_158, "air_guitar_02_exit_c", 1000f, -8f, 0, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[19], iLocal_618[3], &cLocal_158, "air_guitar_02_exit_d", 1000f, -8f, 0, 0, 1148846080, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[15], 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[16], 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[17], 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[18], 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[19], 0, 0);
					func_488(&(Local_657[6 /*10*/]), iLocal_618[3], "air_guitar_02_exit_chair_a", &cLocal_158, 1000f, -8f, 0);
					func_488(&(Local_657[7 /*10*/]), iLocal_618[3], "air_guitar_02_exit_chair_b", &cLocal_158, 1000f, -8f, 0);
					func_488(&(Local_657[9 /*10*/]), iLocal_618[3], "air_guitar_02_exit_chair_d", &cLocal_158, 1000f, -8f, 0);
					if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_628[19]))
					{
						AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_628[19]);
					}
					GlobalFunc_5175(&uLocal_1083, &cLocal_152);
					Local_978[6 /*8*/].f_1++;
				}
			}
			else
			{
				if (GlobalFunc_111())
				{
					if (!PED::IS_PED_INJURED(iLocal_628[15]))
					{
						if (AUDIO::IS_PED_IN_CURRENT_CONVERSATION(iLocal_628[15]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1066.78f, -239.63f, 43.86f) > 225f)
						{
							GlobalFunc_5105();
						}
					}
				}
				if (Local_978[6 /*8*/].f_6 == 0 && fVar0 > 0.8f)
				{
					GlobalFunc_719(&uLocal_1083, &cLocal_158);
					Local_978[6 /*8*/].f_6 = 1;
				}
				if (!PED::IS_PED_INJURED(iLocal_628[19]))
				{
					if (((fVar0 > 0.135f && fVar0 < 0.216f) || (fVar0 > 0.329f && fVar0 < 0.419f)) || (fVar0 > 0.824f && fVar0 < 0.99f))
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_628[19]))
						{
							GlobalFunc_5117(iLocal_628[19], "DRUMMING", "AIRDRUMMER", 3);
						}
					}
					else if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_628[19]))
					{
						AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_628[19]);
					}
				}
			}
			break;
		
		case 7:
			if (fVar0 >= 1f)
			{
				if (((((((func_722(iLocal_628[16]) && func_722(iLocal_628[17])) && func_722(iLocal_628[18])) && func_722(iLocal_628[19])) && func_722(iLocal_628[15])) && func_722(Local_657[6 /*10*/])) && func_722(Local_657[7 /*10*/])) && func_722(Local_657[9 /*10*/]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_628[15]);
					TASK::CLEAR_PED_TASKS(iLocal_628[16]);
					TASK::CLEAR_PED_TASKS(iLocal_628[17]);
					TASK::CLEAR_PED_TASKS(iLocal_628[18]);
					TASK::CLEAR_PED_TASKS(iLocal_628[19]);
					func_72(&(Local_657[5 /*10*/]), -1000f);
					func_72(&(Local_657[6 /*10*/]), -1000f);
					func_72(&(Local_657[7 /*10*/]), -1000f);
					func_72(&(Local_657[9 /*10*/]), -1000f);
					iLocal_618[3] = PED::CREATE_SYNCHRONIZED_SCENE(-1067.002f, -239.245f, 43.021f, 0f, 0f, 27.75f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[15], iLocal_618[3], &cLocal_158, "air_guitar_01_exitloop_boss", 1000f, -8f, 0, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[16], iLocal_618[3], &cLocal_158, "air_guitar_01_exitloop_a", 1000f, -8f, 0, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[17], iLocal_618[3], &cLocal_158, "air_guitar_01_exitloop_b", 1000f, -8f, 0, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[18], iLocal_618[3], &cLocal_158, "air_guitar_01_exitloop_c", 1000f, -8f, 0, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[19], iLocal_618[3], &cLocal_158, "air_guitar_01_exitloop_d", 1000f, -8f, 0, 0, 1148846080, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[15], 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[16], 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[17], 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[18], 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[19], 0, 0);
					func_488(&(Local_657[5 /*10*/]), iLocal_618[3], "air_guitar_01_exitloop_chair_boss", &cLocal_158, 8f, -8f, 0);
					func_488(&(Local_657[6 /*10*/]), iLocal_618[3], "air_guitar_01_exitloop_chair_a", &cLocal_158, 1000f, -8f, 0);
					func_488(&(Local_657[9 /*10*/]), iLocal_618[3], "air_guitar_01_exitloop_chair_d", &cLocal_158, 1000f, -8f, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_618[3], 1);
					if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_628[19]))
					{
						AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_628[19]);
					}
					Local_978[6 /*8*/].f_1++;
				}
			}
			break;
	}
}

void func_727()//Position - 0x7128B
{
	float fVar0;
	float fVar1;
	bool bVar2;
	char cVar3[32];
	struct<8> Var11[5];
	struct<8> Var52[5];
	
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_618[5]))
	{
		fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_618[5]);
	}
	else
	{
		fVar0 = 1f;
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_618[6]))
	{
		fVar1 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_618[6]);
	}
	else
	{
		fVar1 = 1f;
	}
	if (Local_978[8 /*8*/].f_1 == 1)
	{
		if (((STREAMING::HAS_MODEL_LOADED(joaat("ig_jay_norris")) && STREAMING::HAS_MODEL_LOADED(iLocal_211)) && STREAMING::HAS_MODEL_LOADED(iLocal_212)) && (!CUTSCENE::IS_CUTSCENE_PLAYING() || CUTSCENE::GET_CUTSCENE_TIME() > 3700))
		{
			switch (iLocal_2887)
			{
				case 3:
					if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1082.85f, -244.7975f, 42.79504f, -1073.899f, -248.9113f, 45.52112f, 1f, 0, 1, 0) && STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_170)) && STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_164))
					{
						bVar2 = true;
						Local_978[8 /*8*/].f_1++;
					}
					break;
				
				case 4:
				case 5:
					if (STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_170) && STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_164))
					{
						bVar2 = true;
						Local_978[8 /*8*/].f_1++;
					}
					break;
				
				case 6:
					if (STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_170) && STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_164))
					{
						bVar2 = true;
						Local_978[8 /*8*/].f_1++;
					}
					break;
			}
			if (bVar2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_628[20]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_628[20]);
				}
				else
				{
					iLocal_628[20] = PED::CREATE_PED(26, joaat("ig_jay_norris"), -1045.5f, -229f, 43.41f, 0f, 1, 1);
					PED::SET_PED_NAME_DEBUG(iLocal_628[20], "JayNorris");
					func_725(20);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_628[25]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_628[25]);
				}
				else
				{
					iLocal_628[25] = PED::CREATE_PED(26, iLocal_212, -1045.07f, -229.78f, 43.41f, 0f, 1, 1);
					PED::SET_PED_NAME_DEBUG(iLocal_628[25], "BoardFemaleB");
					func_725(25);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_628[26]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_628[26]);
				}
				else
				{
					iLocal_628[26] = PED::CREATE_PED(26, iLocal_212, -1045.07f, -229.78f, 43.41f, 0f, 1, 1);
					PED::SET_PED_NAME_DEBUG(iLocal_628[26], "BoardFemaleC");
					func_725(26);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_628[21]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_628[21]);
				}
				else
				{
					iLocal_628[21] = PED::CREATE_PED(26, iLocal_211, -1045.07f, -229.78f, 43.41f, 0f, 1, 1);
					PED::SET_PED_NAME_DEBUG(iLocal_628[21], "BoardMaleA");
					func_725(21);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_628[22]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_628[22]);
				}
				else
				{
					iLocal_628[22] = PED::CREATE_PED(26, iLocal_211, -1045.07f, -229.78f, 43.41f, 0f, 1, 1);
					PED::SET_PED_NAME_DEBUG(iLocal_628[22], "BoardMaleB");
					func_725(22);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_628[23]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_628[23]);
				}
				else
				{
					iLocal_628[23] = PED::CREATE_PED(26, iLocal_211, -1045.07f, -229.78f, 43.41f, 0f, 1, 1);
					PED::SET_PED_NAME_DEBUG(iLocal_628[23], "BoardMaleE");
					func_725(23);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_628[24]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_628[24]);
				}
				else
				{
					iLocal_628[24] = PED::CREATE_PED(26, iLocal_211, -1045.07f, -229.78f, 43.41f, 0f, 1, 1);
					PED::SET_PED_NAME_DEBUG(iLocal_628[24], "BoardMaleF");
					func_725(24);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_657[22 /*10*/]))
				{
					func_192(&(Local_657[22 /*10*/]), joaat("prop_off_chair_01"), -1045.07f, -229.78f, 43.41f, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_657[22 /*10*/]))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_657[22 /*10*/], iLocal_628[20]))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(Local_657[22 /*10*/]))
						{
							ENTITY::DETACH_ENTITY(Local_657[22 /*10*/], 0, 1);
						}
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_657[22 /*10*/], iLocal_628[20], PED::GET_PED_BONE_INDEX(iLocal_628[20], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					}
				}
			}
		}
	}
	if (Local_978[8 /*8*/].f_1 > 1)
	{
		switch (Local_978[8 /*8*/].f_1)
		{
			case 2:
				if (func_728())
				{
					iLocal_603 = 0;
					Local_978[8 /*8*/].f_1++;
				}
				break;
			
			case 3:
				if ((((((func_722(iLocal_628[20]) && func_722(iLocal_628[25])) && func_722(iLocal_628[26])) && func_722(iLocal_628[21])) && func_722(iLocal_628[22])) && func_722(iLocal_628[23])) && func_722(iLocal_628[24]))
				{
					iLocal_618[5] = PED::CREATE_SYNCHRONIZED_SCENE(Local_316, Local_319, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[20], iLocal_618[5], &cLocal_164, "boardroom_intro_jaynorris", 1000f, -8f, 0, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[21], iLocal_618[5], &cLocal_164, "boardroom_intro_m_a", 1000f, -8f, 0, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[22], iLocal_618[5], &cLocal_164, "boardroom_intro_m_b", 1000f, -8f, 0, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[24], iLocal_618[5], &cLocal_164, "boardroom_intro_m_f", 1000f, -8f, 0, 0, 1148846080, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_618[5], 1);
					iLocal_618[6] = PED::CREATE_SYNCHRONIZED_SCENE(Local_316, Local_319, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[25], iLocal_618[6], &cLocal_164, "boardroom_intro_f_b", 1000f, -8f, 0, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[26], iLocal_618[6], &cLocal_164, "boardroom_intro_f_c", 1000f, -8f, 0, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[23], iLocal_618[6], &cLocal_164, "boardroom_intro_m_e", 1000f, -8f, 0, 0, 1148846080, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_618[6], 1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[20], 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[21], 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[22], 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[24], 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[25], 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[26], 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[23], 0, 0);
					GlobalFunc_719(&uLocal_1083, &cLocal_170);
					Local_978[8 /*8*/].f_1++;
				}
				break;
			
			case 4:
			case 6:
			case 8:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1047.747f, -238.0576f, 43.02124f, -1050.871f, -239.6625f, 45.92112f, 10f, 0, 1, 0))
				{
					if (!GlobalFunc_5170())
					{
						GlobalFunc_5105();
					}
					else if (((((((STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_170) && func_722(iLocal_628[20])) && func_722(iLocal_628[25])) && func_722(iLocal_628[26])) && func_722(iLocal_628[21])) && func_722(iLocal_628[22])) && func_722(iLocal_628[23])) && func_722(iLocal_628[24]))
					{
						switch (Local_978[8 /*8*/].f_1)
						{
							case 4:
								GlobalFunc_173(&uLocal_385, 5, iLocal_628[20], "JAYNORRIS", 0, 1);
								GlobalFunc_173(&uLocal_385, 6, iLocal_628[21], "LIBoard3", 0, 1);
								GlobalFunc_173(&uLocal_385, 7, iLocal_628[24], "LIBoard1", 0, 1);
								StringCopy(&cVar3, "LES_1A_IG_5a", 32);
								MemCopy(&(Var11[0 /*8*/]), {cLocal_170}, 8);
								StringCopy(&(Var52[0 /*8*/]), "LES_1A_IG_5a_jayNorris", 32);
								MemCopy(&(Var11[1 /*8*/]), {cLocal_170}, 8);
								StringCopy(&(Var52[1 /*8*/]), "LES_1A_IG_5a_jNor_chair", 32);
								MemCopy(&(Var11[2 /*8*/]), {cLocal_170}, 8);
								StringCopy(&(Var52[2 /*8*/]), "LES_1A_IG_5a_m_a", 32);
								MemCopy(&(Var11[3 /*8*/]), {cLocal_170}, 8);
								StringCopy(&(Var52[3 /*8*/]), "LES_1A_IG_5a_m_b", 32);
								MemCopy(&(Var11[4 /*8*/]), {cLocal_170}, 8);
								StringCopy(&(Var52[4 /*8*/]), "LES_1A_IG_5a_m_f", 32);
								break;
							
							case 6:
								GlobalFunc_173(&uLocal_385, 5, iLocal_628[20], "JAYNORRIS", 0, 1);
								GlobalFunc_173(&uLocal_385, 8, iLocal_628[21], "LIBoard2", 0, 1);
								StringCopy(&cVar3, "LES_1A_IG_5b", 32);
								MemCopy(&(Var11[0 /*8*/]), {cLocal_170}, 8);
								StringCopy(&(Var52[0 /*8*/]), "LES_1A_IG_5b_jayNorris", 32);
								MemCopy(&(Var11[1 /*8*/]), {cLocal_170}, 8);
								StringCopy(&(Var52[1 /*8*/]), "LES_1A_IG_5b_jNor_chair", 32);
								MemCopy(&(Var11[2 /*8*/]), {cLocal_170}, 8);
								StringCopy(&(Var52[2 /*8*/]), "LES_1A_IG_5b_m_a", 32);
								MemCopy(&(Var11[3 /*8*/]), {cLocal_170}, 8);
								StringCopy(&(Var52[3 /*8*/]), "LES_1A_IG_5b_m_b", 32);
								MemCopy(&(Var11[4 /*8*/]), {cLocal_170}, 8);
								StringCopy(&(Var52[4 /*8*/]), "LES_1A_IG_5b_m_f", 32);
								break;
							
							case 8:
								GlobalFunc_173(&uLocal_385, 5, iLocal_628[20], "JAYNORRIS", 0, 1);
								GlobalFunc_173(&uLocal_385, 6, iLocal_628[21], "LIBoard3", 0, 1);
								StringCopy(&cVar3, "LES_1A_IG_5c", 32);
								MemCopy(&(Var11[0 /*8*/]), {cLocal_170}, 8);
								StringCopy(&(Var52[0 /*8*/]), "LES_1A_IG_5c_jayNorris", 32);
								MemCopy(&(Var11[1 /*8*/]), {cLocal_170}, 8);
								StringCopy(&(Var52[1 /*8*/]), "LES_1A_IG_5c_jNor_chair", 32);
								MemCopy(&(Var11[2 /*8*/]), {cLocal_170}, 8);
								StringCopy(&(Var52[2 /*8*/]), "LES_1A_IG_5c_m_a", 32);
								MemCopy(&(Var11[3 /*8*/]), {cLocal_170}, 8);
								StringCopy(&(Var52[3 /*8*/]), "LES_1A_IG_5c_m_b", 32);
								MemCopy(&(Var11[4 /*8*/]), {cLocal_170}, 8);
								StringCopy(&(Var52[4 /*8*/]), "LES_1A_IG_5c_m_f", 32);
								break;
						}
						if (GlobalFunc_10618(&uLocal_385, &cLocal_88, &cVar3, 8, 1, 0, 0))
						{
							iLocal_618[5] = PED::CREATE_SYNCHRONIZED_SCENE(Local_316, Local_319, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[20], iLocal_618[5], &(Var11[0 /*8*/]), &(Var52[0 /*8*/]), 8f, -8f, 0, 0, 1148846080, 0);
							if (ENTITY::IS_ENTITY_ATTACHED(Local_657[22 /*10*/]))
							{
								ENTITY::DETACH_ENTITY(Local_657[22 /*10*/], 1, 1);
							}
							func_488(&(Local_657[22 /*10*/]), iLocal_618[5], &(Var52[1 /*8*/]), &(Var11[1 /*8*/]), 8f, -8f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[21], iLocal_618[5], &(Var11[2 /*8*/]), &(Var52[2 /*8*/]), 8f, -8f, 0, 0, 1148846080, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[22], iLocal_618[5], &(Var11[3 /*8*/]), &(Var52[3 /*8*/]), 8f, -8f, 0, 0, 1148846080, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[24], iLocal_618[5], &(Var11[4 /*8*/]), &(Var52[4 /*8*/]), 8f, -8f, 0, 0, 1148846080, 0);
							if (Local_978[8 /*8*/].f_1 == 4)
							{
								iLocal_618[6] = PED::CREATE_SYNCHRONIZED_SCENE(Local_316, Local_319, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[23], iLocal_618[6], &cLocal_170, "boardroom_react_m_e", 8f, -8f, 0, 0, 1148846080, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[25], iLocal_618[6], &cLocal_170, "boardroom_react_f_b", 8f, -8f, 0, 0, 1148846080, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[26], iLocal_618[6], &cLocal_170, "boardroom_react_f_c", 8f, -8f, 0, 0, 1148846080, 0);
							}
							GlobalFunc_5175(&uLocal_1083, &cLocal_164);
							Local_978[8 /*8*/].f_1++;
						}
					}
				}
				break;
			
			case 5:
			case 7:
				if (fVar0 == 1f)
				{
					if (((((((STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_170) && func_722(iLocal_628[20])) && func_722(iLocal_628[25])) && func_722(iLocal_628[26])) && func_722(iLocal_628[21])) && func_722(iLocal_628[22])) && func_722(iLocal_628[23])) && func_722(iLocal_628[24]))
					{
						switch (Local_978[8 /*8*/].f_1)
						{
							case 5:
								MemCopy(&(Var11[0 /*8*/]), {cLocal_170}, 8);
								StringCopy(&(Var52[0 /*8*/]), "idle_01_jayNorris", 32);
								MemCopy(&(Var11[1 /*8*/]), {cLocal_170}, 8);
								StringCopy(&(Var52[1 /*8*/]), "idle_01_jNor_chair", 32);
								MemCopy(&(Var11[2 /*8*/]), {cLocal_170}, 8);
								StringCopy(&(Var52[2 /*8*/]), "idle_01_m_a", 32);
								MemCopy(&(Var11[3 /*8*/]), {cLocal_170}, 8);
								StringCopy(&(Var52[3 /*8*/]), "idle_01_m_b", 32);
								MemCopy(&(Var11[4 /*8*/]), {cLocal_170}, 8);
								StringCopy(&(Var52[4 /*8*/]), "idle_01_m_f", 32);
								break;
							
							case 7:
								MemCopy(&(Var11[0 /*8*/]), {cLocal_170}, 8);
								StringCopy(&(Var52[0 /*8*/]), "idle_02_jayNorris", 32);
								MemCopy(&(Var11[1 /*8*/]), {cLocal_170}, 8);
								StringCopy(&(Var52[1 /*8*/]), "idle_02_jNor_chair", 32);
								MemCopy(&(Var11[2 /*8*/]), {cLocal_170}, 8);
								StringCopy(&(Var52[2 /*8*/]), "idle_01_m_a", 32);
								MemCopy(&(Var11[3 /*8*/]), {cLocal_170}, 8);
								StringCopy(&(Var52[3 /*8*/]), "idle_01_m_b", 32);
								MemCopy(&(Var11[4 /*8*/]), {cLocal_170}, 8);
								StringCopy(&(Var52[4 /*8*/]), "idle_01_m_f", 32);
								break;
						}
						iLocal_618[5] = PED::CREATE_SYNCHRONIZED_SCENE(Local_316, Local_319, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[20], iLocal_618[5], &(Var11[0 /*8*/]), &(Var52[0 /*8*/]), 8f, -8f, 0, 0, 1148846080, 0);
						if (ENTITY::IS_ENTITY_ATTACHED(Local_657[22 /*10*/]))
						{
							ENTITY::DETACH_ENTITY(Local_657[22 /*10*/], 1, 1);
						}
						func_488(&(Local_657[22 /*10*/]), iLocal_618[5], &(Var52[1 /*8*/]), &(Var11[1 /*8*/]), 8f, -8f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[21], iLocal_618[5], &(Var11[2 /*8*/]), &(Var52[2 /*8*/]), 8f, -8f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[22], iLocal_618[5], &(Var11[3 /*8*/]), &(Var52[3 /*8*/]), 8f, -8f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[24], iLocal_618[5], &(Var11[4 /*8*/]), &(Var52[4 /*8*/]), 8f, -8f, 0, 0, 1148846080, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_618[5], 1);
						func_721(8, 3500);
						Local_978[8 /*8*/].f_1++;
					}
				}
				break;
			
			case 9:
				if (fVar0 == 1f)
				{
					if ((((((func_722(iLocal_628[20]) && func_722(iLocal_628[25])) && func_722(iLocal_628[26])) && func_722(iLocal_628[21])) && func_722(iLocal_628[22])) && func_722(iLocal_628[23])) && func_722(iLocal_628[24]))
					{
						iLocal_618[5] = PED::CREATE_SYNCHRONIZED_SCENE(Local_316, Local_319, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[20], iLocal_618[5], &cLocal_176, "boardroom_into_exit_jaynorris", 8f, -8f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[21], iLocal_618[5], &cLocal_176, "boardroom_into_exit_m_a", 8f, -8f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[22], iLocal_618[5], &cLocal_176, "boardroom_into_exit_m_b", 8f, -8f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[24], iLocal_618[5], &cLocal_176, "boardroom_into_exit_m_f", 8f, -8f, 0, 0, 1148846080, 0);
						iLocal_618[6] = PED::CREATE_SYNCHRONIZED_SCENE(Local_316, Local_319, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[25], iLocal_618[6], &cLocal_176, "boardroom_into_exit_f_b", 8f, -8f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[26], iLocal_618[6], &cLocal_176, "boardroom_into_exit_f_c", 8f, -8f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[23], iLocal_618[6], &cLocal_176, "boardroom_into_exit_m_e", 8f, -8f, 0, 0, 1148846080, 0);
						GlobalFunc_5175(&uLocal_1083, &cLocal_170);
						Local_978[8 /*8*/].f_1++;
					}
				}
				else if (Local_978[8 /*8*/].f_6 == 0 && fVar0 > 0.8f)
				{
					GlobalFunc_719(&uLocal_1083, &cLocal_176);
					Local_978[8 /*8*/].f_6 = 1;
				}
				break;
			
			case 10:
				if (fVar0 == 1f && STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_176))
				{
					if ((((((func_722(iLocal_628[20]) && func_722(iLocal_628[25])) && func_722(iLocal_628[26])) && func_722(iLocal_628[21])) && func_722(iLocal_628[22])) && func_722(iLocal_628[23])) && func_722(iLocal_628[24]))
					{
						iLocal_618[5] = PED::CREATE_SYNCHRONIZED_SCENE(Local_316, Local_319, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[20], iLocal_618[5], &cLocal_176, "boardroom_exitloop_jaynorris", 8f, -8f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[21], iLocal_618[5], &cLocal_176, "boardroom_exitloop_m_a", 8f, -8f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[22], iLocal_618[5], &cLocal_176, "boardroom_exitloop_m_b", 8f, -8f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[24], iLocal_618[5], &cLocal_176, "boardroom_exitloop_m_f", 8f, -8f, 0, 0, 1148846080, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_618[5], 1);
						iLocal_618[6] = PED::CREATE_SYNCHRONIZED_SCENE(Local_316, Local_319, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[25], iLocal_618[6], &cLocal_176, "boardroom_exitloop_f_b", 8f, -8f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[26], iLocal_618[6], &cLocal_176, "boardroom_exitloop_f_c", 8f, -8f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[23], iLocal_618[6], &cLocal_176, "boardroom_exitloop_m_e", 8f, -8f, 0, 0, 1148846080, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_618[6], 1);
						Local_978[8 /*8*/].f_1++;
					}
				}
				break;
		}
		if (Local_978[8 /*8*/].f_1 > 4)
		{
			if (!iLocal_603)
			{
				if (fVar1 == 1f)
				{
					if ((func_722(iLocal_628[25]) && func_722(iLocal_628[26])) && func_722(iLocal_628[23]))
					{
						TASK::CLEAR_PED_TASKS(iLocal_628[25]);
						TASK::CLEAR_PED_TASKS(iLocal_628[26]);
						TASK::CLEAR_PED_TASKS(iLocal_628[23]);
						iLocal_618[6] = PED::CREATE_SYNCHRONIZED_SCENE(Local_316, Local_319, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[25], iLocal_618[6], &cLocal_170, "boardroom_listen_loop_f_b", 8f, -8f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[26], iLocal_618[6], &cLocal_170, "boardroom_listen_loop_f_c", 8f, -8f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[23], iLocal_618[6], &cLocal_170, "boardroom_listen_loop_m_e", 8f, -8f, 0, 0, 1148846080, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_618[6], 1);
						iLocal_603 = 1;
					}
				}
			}
		}
	}
}

int func_728()//Position - 0x7267F
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_657[12 /*10*/]))
	{
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1043.98f, -238.39f, 43.02f, 0.5f, joaat("prop_off_chair_01"), 0))
		{
			Local_657[12 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1043.98f, -238.39f, 43.02f, 0.5f, joaat("prop_off_chair_01"), 1, 0, 1);
			ENTITY::SET_ENTITY_COORDS(Local_657[12 /*10*/], -1043.74f, -238.72f, 43.02f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_ROTATION(Local_657[12 /*10*/], 0f, 0f, 152.5f, 2, 1);
			ENTITY::FREEZE_ENTITY_POSITION(Local_657[12 /*10*/], 1);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_657[13 /*10*/]))
	{
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1046.38f, -233.24f, 43.02f, 0.5f, joaat("prop_off_chair_01"), 0))
		{
			Local_657[13 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1046.38f, -233.24f, 43.02f, 0.5f, joaat("prop_off_chair_01"), 1, 0, 1);
			ENTITY::SET_ENTITY_COORDS(Local_657[13 /*10*/], -1046.89f, -232.61f, 43.02f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_ROTATION(Local_657[13 /*10*/], 0f, 0f, 63.15f, 2, 1);
			ENTITY::FREEZE_ENTITY_POSITION(Local_657[13 /*10*/], 1);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_657[14 /*10*/]))
	{
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1044.53f, -232.09f, 43.02f, 0.5f, joaat("prop_off_chair_01"), 0))
		{
			Local_657[14 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1044.53f, -232.09f, 43.02f, 0.5f, joaat("prop_off_chair_01"), 1, 0, 1);
			ENTITY::SET_ENTITY_COORDS(Local_657[14 /*10*/], -1044.78f, -231.92f, 43.02f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_ROTATION(Local_657[14 /*10*/], 0f, 0f, -27.5f, 2, 1);
			ENTITY::FREEZE_ENTITY_POSITION(Local_657[14 /*10*/], 1);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_657[15 /*10*/]))
	{
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1042.13f, -237.24f, 43.02f, 0.5f, joaat("prop_off_chair_01"), 0))
		{
			Local_657[15 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1042.13f, -237.24f, 43.02f, 0.5f, joaat("prop_off_chair_01"), 1, 0, 1);
			ENTITY::SET_ENTITY_COORDS(Local_657[15 /*10*/], -1041.9f, -237.63f, 43.02f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_ROTATION(Local_657[15 /*10*/], 0f, 0f, -92.5f, 2, 1);
			ENTITY::FREEZE_ENTITY_POSITION(Local_657[15 /*10*/], 1);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_657[16 /*10*/]))
	{
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1043.03f, -235.22f, 43.02f, 0.5f, joaat("prop_off_chair_01"), 0) && !PED::IS_PED_INJURED(iLocal_628[21]))
		{
			Local_657[16 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1043.03f, -235.22f, 43.02f, 0.5f, joaat("prop_off_chair_01"), 1, 0, 1);
			ENTITY::SET_ENTITY_COORDS(Local_657[16 /*10*/], -1042.833f, -235.5175f, 43.03f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_ROTATION(Local_657[16 /*10*/], 0f, -0.04f, -72.11f, 2, 1);
			ENTITY::FREEZE_ENTITY_POSITION(Local_657[16 /*10*/], 1);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_657[16 /*10*/], iLocal_628[21], 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_657[17 /*10*/]))
	{
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1045.9f, -234.22f, 43.02f, 0.5f, joaat("prop_off_chair_01"), 0) && !PED::IS_PED_INJURED(iLocal_628[22]))
		{
			Local_657[17 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1045.9f, -234.22f, 43.02f, 0.5f, joaat("prop_off_chair_01"), 1, 0, 1);
			ENTITY::SET_ENTITY_COORDS(Local_657[17 /*10*/], -1046.376f, -234.1675f, 43.03f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_ROTATION(Local_657[17 /*10*/], -0.03f, -0.03f, 88.64f, 2, 1);
			ENTITY::FREEZE_ENTITY_POSITION(Local_657[17 /*10*/], 1);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_657[17 /*10*/], iLocal_628[22], 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_657[18 /*10*/]))
	{
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1043.49f, -234.33f, 43.02f, 0.5f, joaat("prop_off_chair_01"), 0) && !PED::IS_PED_INJURED(iLocal_628[23]))
		{
			Local_657[18 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1043.49f, -234.33f, 43.02f, 0.5f, joaat("prop_off_chair_01"), 1, 0, 1);
			ENTITY::SET_ENTITY_COORDS(Local_657[18 /*10*/], -1043.34f, -234.2f, 43.03f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_ROTATION(Local_657[18 /*10*/], -0.03f, -0.03f, -61.92f, 2, 1);
			ENTITY::FREEZE_ENTITY_POSITION(Local_657[18 /*10*/], 1);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_657[18 /*10*/], iLocal_628[23], 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_657[19 /*10*/]))
	{
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1045.02f, -236.15f, 43.02f, 0.5f, joaat("prop_off_chair_01"), 0) && !PED::IS_PED_INJURED(iLocal_628[24]))
		{
			Local_657[19 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1045.02f, -236.15f, 43.02f, 0.5f, joaat("prop_off_chair_01"), 1, 0, 1);
			ENTITY::SET_ENTITY_COORDS(Local_657[19 /*10*/], -1044.995f, -236.94f, 43.0225f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_ROTATION(Local_657[19 /*10*/], 0f, 0.07f, 121.765f, 2, 1);
			ENTITY::FREEZE_ENTITY_POSITION(Local_657[19 /*10*/], 1);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_657[19 /*10*/], iLocal_628[24], 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_657[20 /*10*/]))
	{
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1045.48f, -235.26f, 43.02f, 0.5f, joaat("prop_off_chair_01"), 0) && !PED::IS_PED_INJURED(iLocal_628[25]))
		{
			Local_657[20 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1045.48f, -235.26f, 43.02f, 0.5f, joaat("prop_off_chair_01"), 1, 0, 1);
			ENTITY::SET_ENTITY_COORDS(Local_657[20 /*10*/], -1045.671f, -235.5025f, 43.03f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_ROTATION(Local_657[20 /*10*/], 0.02f, 0.02f, 120.59f, 2, 1);
			ENTITY::FREEZE_ENTITY_POSITION(Local_657[20 /*10*/], 1);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_657[20 /*10*/], iLocal_628[25], 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_657[21 /*10*/]))
	{
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1044.45f, -237.14f, 43.02f, 0.5f, joaat("prop_off_chair_01"), 0) && !PED::IS_PED_INJURED(iLocal_628[26]))
		{
			Local_657[21 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1044.45f, -237.14f, 43.02f, 0.5f, joaat("prop_off_chair_01"), 1, 0, 1);
			ENTITY::SET_ENTITY_COORDS(Local_657[21 /*10*/], -1044.251f, -237.905f, 43.03f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_ROTATION(Local_657[21 /*10*/], 0f, 0f, 129.24f, 2, 1);
			ENTITY::FREEZE_ENTITY_POSITION(Local_657[21 /*10*/], 1);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_657[21 /*10*/], iLocal_628[26], 0);
		}
	}
	if (((((ENTITY::DOES_ENTITY_EXIST(Local_657[20 /*10*/]) && ENTITY::DOES_ENTITY_EXIST(Local_657[21 /*10*/])) && ENTITY::DOES_ENTITY_EXIST(Local_657[16 /*10*/])) && ENTITY::DOES_ENTITY_EXIST(Local_657[17 /*10*/])) && ENTITY::DOES_ENTITY_EXIST(Local_657[18 /*10*/])) && ENTITY::DOES_ENTITY_EXIST(Local_657[19 /*10*/]))
	{
		return 1;
	}
	return 0;
}

void func_729()//Position - 0x72DB7
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { -1080.48f, -244.68f, 43.96f };
	Var3 = { 0f, 0f, 27.5f };
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_618[2]))
	{
		fVar6 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_618[2]);
	}
	else
	{
		fVar6 = 1f;
	}
	switch (Local_978[5 /*8*/].f_1)
	{
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_628[11]))
			{
				PED::DELETE_PED(&(iLocal_628[11]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_628[10]))
			{
				PED::DELETE_PED(&(iLocal_628[10]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_628[12]))
			{
				PED::DELETE_PED(&(iLocal_628[12]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_628[8]))
			{
				PED::DELETE_PED(&(iLocal_628[8]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_628[9]))
			{
				PED::DELETE_PED(&(iLocal_628[9]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_657[3 /*10*/]))
			{
				OBJECT::DELETE_OBJECT(&(Local_657[3 /*10*/]));
			}
			switch (iLocal_2887)
			{
				case 3:
					if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1070.654f, -243.5916f, 40.61122f, -1072.526f, -240.037f, 44.76282f, 3.25f, 0, 1, 0) && STREAMING::HAS_MODEL_LOADED(iLocal_211)) && STREAMING::HAS_MODEL_LOADED(iLocal_213)) && STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_116))
					{
						iLocal_628[8] = PED::CREATE_PED(26, iLocal_213, -1076.32f, -246.03f, 44.04f, 93.97f, 1, 1);
						iLocal_628[9] = PED::CREATE_PED(26, iLocal_211, -1078.228f, -246.6952f, 43.0211f, 184.1198f, 1, 1);
						iLocal_628[10] = PED::CREATE_PED(26, iLocal_211, -1076.414f, -248.0054f, 43.0211f, 295.9542f, 1, 1);
						func_725(8);
						func_725(9);
						func_725(10);
						GlobalFunc_4956();
						Local_978[5 /*8*/].f_1++;
					}
					else if (!iLocal_2897 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1068.452f, -243.9645f, 38.73318f, -1063.518f, -241.4176f, 42.01213f, 8.375f, 0, 1, 0))
					{
						GlobalFunc_5105();
						iLocal_2897 = 1;
					}
					break;
				
				case 4:
				case 5:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_211) && STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_122))
					{
						iLocal_628[9] = PED::CREATE_PED(26, iLocal_211, -1078.228f, -246.6952f, 43.0211f, 184.1198f, 1, 1);
						iLocal_628[10] = PED::CREATE_PED(26, iLocal_211, -1076.414f, -248.0054f, 43.0211f, 295.9542f, 1, 1);
						func_725(9);
						func_725(10);
						Local_978[5 /*8*/].f_1 = 4;
					}
					break;
				
				case 6:
					if (((STREAMING::HAS_MODEL_LOADED(iLocal_211) && STREAMING::HAS_MODEL_LOADED(iLocal_213)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_hacky_sack_01"))) && STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_128))
					{
						Local_978[5 /*8*/].f_1 = 5;
					}
					break;
			}
			iLocal_3018 = 0;
			break;
		
		case 2:
			if ((func_722(iLocal_628[9]) && func_722(iLocal_628[8])) && func_722(iLocal_628[10]))
			{
				GlobalFunc_200(&uLocal_385, 4);
				GlobalFunc_200(&uLocal_385, 5);
				GlobalFunc_173(&uLocal_385, 4, iLocal_628[8], "LIHRLady", 0, 1);
				GlobalFunc_173(&uLocal_385, 5, iLocal_628[10], "LIInterviewee", 0, 1);
				TASK::CLEAR_PED_TASKS(iLocal_628[9]);
				TASK::CLEAR_PED_TASKS(iLocal_628[10]);
				iLocal_618[2] = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var3, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[9], iLocal_618[2], &cLocal_116, "hr_greet_gamer", 1000f, -8f, 1, 16, 1148846080, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[10], iLocal_618[2], &cLocal_116, "hr_greet_m", 1000f, -8f, 1, 16, 1148846080, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[8], iLocal_618[2], &cLocal_116, "hr_greet_f", 1000f, -1.5f, 3, 16, 1148846080, 0);
				Local_978[5 /*8*/].f_1++;
			}
			break;
		
		case 3:
			if (GlobalFunc_5170())
			{
				if (GlobalFunc_10618(&uLocal_385, &cLocal_88, "LES_1A_IG_2", 8, 1, 0, 0))
				{
					Local_978[5 /*8*/].f_1++;
				}
			}
			else if (GlobalFunc_111())
			{
				GlobalFunc_4956();
			}
			break;
		
		case 4:
			if (fVar6 == 1f)
			{
				if ((STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_122) && func_722(iLocal_628[9])) && func_722(iLocal_628[10]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_628[9]);
					TASK::CLEAR_PED_TASKS(iLocal_628[10]);
					TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_628[9], &cLocal_122, "hr_greet_exitloop_gamer", Var0, Var3, 1000f, -8f, -1, 790537, 0f, 2, 1);
					TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_628[10], &cLocal_122, "hr_greet_exitloop_m", Var0, Var3, 1000f, -8f, -1, 790537, 0f, 2, 1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[9], 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_628[10], 0, 0);
					if (!PED::IS_PED_INJURED(iLocal_628[8]))
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_628[8]));
					}
					GlobalFunc_5175(&uLocal_1083, &cLocal_116);
					Local_978[5 /*8*/].f_6 = 0;
					Local_978[5 /*8*/].f_1++;
				}
			}
			else
			{
				PED::SET_PED_RESET_FLAG(iLocal_628[10], 129, 1);
				if (GlobalFunc_111())
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1072.958f, -250.4955f, 43.02128f, -1069.43f, -248.6602f, 45.83378f, 3.75f, 0, 1, 0))
					{
						if (AUDIO::IS_PED_IN_CURRENT_CONVERSATION(iLocal_628[8]))
						{
							GlobalFunc_5105();
						}
					}
				}
				if (func_722(iLocal_628[8]))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_628[8], 1785177548) == 1 && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_628[8], MISC::GET_HASH_KEY("ENDS_IN_RUN")))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_355);
						TASK::TASK_FORCE_MOTION_STATE(0, -668482597, 0);
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1071.804f, -241.9532f, 41.2713f, 1f, 20000, 1193033728, 1056964608);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1065.561f, -241.8892f, 38.7332f, 1f, 20000, 0.25f, 1, 37.5678f);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_355);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_628[8], uLocal_355);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_355);
					}
				}
				if (Local_978[5 /*8*/].f_6 == 0 && fVar6 > 0.8f)
				{
					GlobalFunc_719(&uLocal_1083, &cLocal_122);
					GlobalFunc_718(&uLocal_1083, joaat("prop_hacky_sack_01"));
					Local_978[5 /*8*/].f_6 = 1;
				}
			}
			break;
		
		case 5:
			if (iLocal_2887 >= 6)
			{
				GlobalFunc_719(&uLocal_1083, &cLocal_128);
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1068.497f, -248.0662f, 43.02124f, -1069.54f, -248.6312f, 45.52124f, 4f, 0, 1, 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_628[9]))
					{
						PED::DELETE_PED(&(iLocal_628[9]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_628[8]))
					{
						PED::DELETE_PED(&(iLocal_628[8]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_628[10]))
					{
						if (!PED::IS_PED_INJURED(iLocal_628[10]))
						{
							TASK::CLEAR_PED_TASKS(iLocal_628[10]);
						}
					}
					else
					{
						iLocal_628[10] = PED::CREATE_PED(26, iLocal_211, -1076.414f, -248.0054f, 43.0211f, 295.9542f, 1, 1);
						func_725(10);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_628[11]))
					{
						iLocal_628[11] = PED::CREATE_PED(26, iLocal_213, -1082.278f, -247.6897f, 43.0211f, 0f, 1, 1);
						func_725(11);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_628[12]))
					{
						iLocal_628[12] = PED::CREATE_PED(26, iLocal_211, -1080.564f, -246.6328f, 43.0211f, 0f, 1, 1);
						func_725(12);
					}
					func_192(&(Local_657[3 /*10*/]), joaat("prop_hacky_sack_01"), -1081.564f, -246.6328f, 43.0211f, 0);
					GlobalFunc_5174(&uLocal_1083, joaat("prop_hacky_sack_01"));
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_657[3 /*10*/], iLocal_628[12], PED::GET_PED_BONE_INDEX(iLocal_628[12], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
					GlobalFunc_5175(&uLocal_1083, &cLocal_122);
					Local_978[5 /*8*/].f_1++;
				}
			}
			break;
		
		case 6:
			if ((func_722(iLocal_628[12]) && func_722(iLocal_628[11])) && func_722(iLocal_628[10]))
			{
				TASK::CLEAR_PED_TASKS(iLocal_628[12]);
				TASK::CLEAR_PED_TASKS(iLocal_628[10]);
				TASK::CLEAR_PED_TASKS(iLocal_628[11]);
				GlobalFunc_4956();
				GlobalFunc_173(&uLocal_385, 4, iLocal_628[12], "LIInterviewer", 0, 1);
				GlobalFunc_173(&uLocal_385, 5, iLocal_628[10], "LIInterviewee", 0, 1);
				Local_978[5 /*8*/].f_1++;
			}
			break;
		
		case 7:
			if ((func_722(iLocal_628[12]) && func_722(iLocal_628[11])) && func_722(iLocal_628[10]))
			{
				if (GlobalFunc_10618(&uLocal_385, "LS1AAUD", "LES_1A_IG_7", 8, 1, 0, 0))
				{
					iLocal_618[2] = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var3, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[11], iLocal_618[2], &cLocal_128, "interview_f", 1000f, -8f, 1, 16, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[10], iLocal_618[2], &cLocal_128, "interview_m", 1000f, -1.5f, 3, 16, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[12], iLocal_618[2], &cLocal_128, "interview_boss", 1000f, -1.5f, 3, 16, 1148846080, 0);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_618[2], 0.1f);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_618[2], 0);
					GlobalFunc_719(&uLocal_1083, &cLocal_134);
					Local_978[5 /*8*/].f_1++;
				}
			}
			break;
		
		case 8:
			if ((func_722(iLocal_628[12]) && func_722(iLocal_628[11])) && func_722(iLocal_628[10]))
			{
				if ((ENTITY::DOES_ENTITY_EXIST(Local_657[3 /*10*/]) && ENTITY::IS_ENTITY_ATTACHED(Local_657[3 /*10*/])) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_657[3 /*10*/], -1082.668f, -247.4929f, 43.02112f, -1082.26f, -247.4884f, 43.12112f, 0.35f, 0, 1, 0))
				{
					ENTITY::DETACH_ENTITY(Local_657[3 /*10*/], 1, 1);
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_657[3 /*10*/]));
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_628[12], 1785177548) == 1)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_628[12], MISC::GET_HASH_KEY("ENDS_IN_WALK")))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_355);
						TASK::TASK_FORCE_MOTION_STATE(0, -668482597, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1048.624f, -238.3391f, 43.0213f, 1f, 20000, 0.25f, 0, 288.1765f);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_355);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_628[12], uLocal_355);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_355);
					}
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_628[10], 1785177548) == 1)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_628[10], MISC::GET_HASH_KEY("ENDS_IN_WALK")))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_355);
						TASK::TASK_FORCE_MOTION_STATE(0, -668482597, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1051.151f, -236.258f, 43.0213f, 1f, 20000, 0.25f, 0, 237.9632f);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_355);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_628[10], uLocal_355);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_355);
					}
				}
				if (STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_134))
				{
					if (fVar6 == 1f)
					{
						TASK::CLEAR_PED_TASKS(iLocal_628[11]);
						iLocal_618[2] = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var3, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[11], iLocal_618[2], &cLocal_134, "interview_exitloop_f", 1000f, -8f, 1, 16, 1148846080, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_618[2], 1);
						GlobalFunc_5175(&uLocal_1083, &cLocal_128);
						Local_978[5 /*8*/].f_6 = 0;
						Local_978[5 /*8*/].f_1++;
					}
				}
			}
			break;
		
		case 9:
			Local_978[5 /*8*/].f_1++;
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_628[11]) && !PED::IS_PED_INJURED(iLocal_628[11]))
	{
		if (!iLocal_3018 && Local_978[5 /*8*/].f_1 > 8)
		{
			if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_628[11], 1) < 3f)
			{
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_628[11]))
				{
					GlobalFunc_5130(iLocal_628[11], "GENERIC_HI", 3);
					iLocal_3018 = 1;
				}
			}
		}
	}
}


void func_731()//Position - 0x73AC7
{
	float fVar0;
	struct<3> Var1;
	
	switch (Local_978[4 /*8*/].f_1)
	{
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1075.435f, -244.6753f, 43.02124f, -1076.746f, -242.2333f, 47.44516f, 1.5f, 0, 1, 0))
			{
				GlobalFunc_719(&uLocal_1083, &cLocal_94);
				GlobalFunc_719(&uLocal_1083, &cLocal_100);
				GlobalFunc_718(&uLocal_1083, iLocal_215);
				GlobalFunc_718(&uLocal_1083, iLocal_216);
				Local_978[4 /*8*/].f_1++;
			}
			break;
		
		case 2:
			if ((((STREAMING::HAS_MODEL_LOADED(iLocal_212) && STREAMING::HAS_MODEL_LOADED(iLocal_211)) && STREAMING::HAS_MODEL_LOADED(iLocal_215)) && STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_94)) && STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_100))
			{
				iLocal_628[4] = PED::CREATE_PED(26, iLocal_212, -1066.251f, -241.2682f, 38.7331f, 68.4967f, 1, 1);
				func_725(4);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_628[4], 1);
				iLocal_628[5] = PED::CREATE_PED(26, iLocal_211, Local_291, Local_294.f_2, 1, 1);
				func_725(5);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_628[5], 1);
				iLocal_628[6] = PED::CREATE_PED(26, iLocal_211, Local_297, Local_300.f_2, 1, 1);
				func_725(6);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_628[6], 1);
				func_192(&(Local_657[24 /*10*/]), iLocal_216, PED::GET_PED_BONE_COORDS(iLocal_628[4], 28422, 0f, 0f, 0f), 0);
				GlobalFunc_5174(&uLocal_1083, iLocal_216);
				func_192(&(Local_657[25 /*10*/]), iLocal_215, -1066.806f, -241.0743f, 39.7336f, 0);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_657[25 /*10*/], -1066.806f, -241.0743f, 39.7336f, 0, 0, 1);
				ENTITY::FREEZE_ENTITY_POSITION(Local_657[25 /*10*/], 1);
				func_192(&(Local_657[26 /*10*/]), iLocal_215, PED::GET_PED_BONE_COORDS(iLocal_628[5], 28422, 0f, 0f, 0f), 0);
				func_192(&(Local_657[27 /*10*/]), iLocal_215, PED::GET_PED_BONE_COORDS(iLocal_628[6], 28422, 0f, 0f, 0f), 0);
				GlobalFunc_5174(&uLocal_1083, iLocal_215);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_657[26 /*10*/], iLocal_628[5], PED::GET_PED_BONE_INDEX(iLocal_628[5], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_657[27 /*10*/], iLocal_628[6], PED::GET_PED_BONE_INDEX(iLocal_628[6], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
				iLocal_591 = 0;
				iLocal_592 = 0;
				Local_978[4 /*8*/].f_1++;
			}
			break;
		
		case 3:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1068.971f, -246.414f, 38.73314f, -1070.091f, -244.4268f, 42.95113f, 4f, 0, 1, 0))
			{
				GlobalFunc_4956();
				GlobalFunc_200(&uLocal_385, 4);
				GlobalFunc_173(&uLocal_385, 4, iLocal_628[4], "Woman", 0, 1);
				Local_978[4 /*8*/].f_1++;
			}
			break;
		
		case 4:
			if (GlobalFunc_5170() && func_722(iLocal_628[4]))
			{
				if (GlobalFunc_10618(&uLocal_385, "LS1AAUD", "LES_1A_IG_1", 8, 1, 0, 0))
				{
					iLocal_618[1] = PED::CREATE_SYNCHRONIZED_SCENE(-1065.19f, -240f, 39.65f, 0f, 0f, 27.5f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[4], iLocal_618[1], &cLocal_94, "milkLady_f", 1000f, -8f, 261, 16, 1148846080, 0);
					func_732(&(Local_657[28 /*10*/]), -1065.91f, -240.78f, 39.17f, joaat("prop_cub_door_lifeblurb"), iLocal_618[1], &cLocal_94, "milklady_cupboard", 1000f);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_618[1], 0.2f);
					Local_978[4 /*8*/].f_1++;
				}
			}
			break;
		
		case 5:
			if (func_722(iLocal_628[4]))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_618[1]))
				{
					fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_618[1]);
				}
				else
				{
					fVar0 = 1f;
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_628[4], 1785177548) != 1)
				{
					GlobalFunc_4956();
					if (ENTITY::DOES_ENTITY_EXIST(Local_657[25 /*10*/]))
					{
						ENTITY::DETACH_ENTITY(Local_657[25 /*10*/], 1, 1);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_657[24 /*10*/]))
					{
						ENTITY::DETACH_ENTITY(Local_657[24 /*10*/], 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&uLocal_355);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 1024, 2);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_355);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_628[4], uLocal_355);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_355);
					Local_978[4 /*8*/].f_1++;
				}
				else if (fVar0 == 1f || GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_628[4], 1) > 8.5f)
				{
					iLocal_618[1] = PED::CREATE_SYNCHRONIZED_SCENE(-1065.19f, -240f, 39.65f, 0f, 0f, 27.5f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_628[4], iLocal_618[1], &cLocal_94, "milkLady_exitLoop_f", 8f, -8f, 257, 16, 1148846080, 0);
					func_732(&(Local_657[28 /*10*/]), -1065.91f, -240.78f, 39.17f, joaat("prop_cub_door_lifeblurb"), iLocal_618[1], &cLocal_94, "milklady_exitloop_cupboard", 8f);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_618[1], 1);
					GlobalFunc_5105();
					if (ENTITY::DOES_ENTITY_EXIST(Local_657[24 /*10*/]))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(Local_657[24 /*10*/]))
						{
							ENTITY::DETACH_ENTITY(Local_657[24 /*10*/], 1, 1);
						}
						OBJECT::DELETE_OBJECT(&(Local_657[24 /*10*/]));
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(Local_657[25 /*10*/]))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_657[25 /*10*/], iLocal_628[4], PED::GET_PED_BONE_INDEX(iLocal_628[4], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
					}
					Local_978[4 /*8*/].f_1++;
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_657[24 /*10*/]))
					{
						if (!ENTITY::IS_ENTITY_ATTACHED(Local_657[24 /*10*/]))
						{
							if (fVar0 >= 0.119f)
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_657[24 /*10*/], iLocal_628[4], PED::GET_PED_BONE_INDEX(iLocal_628[4], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
							}
						}
						else if (fVar0 >= 0.386f)
						{
							ENTITY::DETACH_ENTITY(Local_657[24 /*10*/], 0, 1);
							ENTITY::FREEZE_ENTITY_POSITION(Local_657[24 /*10*/], 1);
							OBJECT::DELETE_OBJECT(&(Local_657[24 /*10*/]));
						}
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(Local_657[25 /*10*/]))
					{
						if (fVar0 >= 0.755f)
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_657[25 /*10*/], 0);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_657[25 /*10*/], iLocal_628[4], PED::GET_PED_BONE_INDEX(iLocal_628[4], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
							Var1 = { PED::GET_PED_BONE_COORDS(iLocal_628[4], 28422, 0f, 0f, 0f) };
						}
					}
				}
			}
			break;
	}
	if (!Local_978[4 /*8*/].f_4)
	{
		if (Local_978[4 /*8*/].f_1 > 4)
		{
			if (func_722(iLocal_628[5]))
			{
				if (!GlobalFunc_709(iLocal_628[5], 242628503, 1))
				{
					if (!iLocal_591)
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_355);
						TASK::TASK_PLAY_ANIM_ADVANCED(0, &cLocal_100, "idle_a", Local_291, Local_294, 8f, -8f, -1, 0, 0, 2, 0);
						TASK::TASK_PLAY_ANIM_ADVANCED(0, &cLocal_100, "idle_b", Local_291, Local_294, 8f, -8f, -1, 0, 0, 2, 0);
						TASK::TASK_PLAY_ANIM_ADVANCED(0, &cLocal_100, "idle_b", Local_291, Local_294, 8f, -8f, -1, 0, 0, 2, 0);
						TASK::TASK_PLAY_ANIM_ADVANCED(0, &cLocal_100, "idle_a", Local_291, Local_294, 8f, -8f, -1, 0, 0, 2, 0);
						TASK::TASK_PLAY_ANIM_ADVANCED(0, &cLocal_100, "idle_b", Local_291, Local_294, 8f, -8f, -1, 0, 0, 2, 0);
						TASK::SET_SEQUENCE_TO_REPEAT(uLocal_355, 1);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_355);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_628[5], uLocal_355);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_355);
						iLocal_591 = 1;
					}
					else
					{
						if (ENTITY::IS_ENTITY_ATTACHED(Local_657[26 /*10*/]))
						{
							ENTITY::DETACH_ENTITY(Local_657[26 /*10*/], 1, 1);
						}
						PED::SET_PED_KEEP_TASK(iLocal_628[5], 1);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_355);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::TASK_STAND_STILL(0, 3000);
						TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_355);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_628[5], uLocal_355);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_355);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_628[5], PLAYER::PLAYER_PED_ID(), 5000, 2048, 4);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_628[5]));
					}
				}
			}
			if (func_722(iLocal_628[6]))
			{
				if (!GlobalFunc_709(iLocal_628[6], 242628503, 1))
				{
					if (!iLocal_592)
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_355);
						TASK::TASK_PLAY_ANIM_ADVANCED(0, &cLocal_100, "idle_b", Local_297, Local_300, 8f, -8f, -1, 0, 0, 2, 0);
						TASK::TASK_PLAY_ANIM_ADVANCED(0, &cLocal_100, "idle_c", Local_297, Local_300, 8f, -8f, -1, 0, 0, 2, 0);
						TASK::TASK_PLAY_ANIM_ADVANCED(0, &cLocal_100, "idle_b", Local_297, Local_300, 8f, -8f, -1, 0, 0, 2, 0);
						TASK::TASK_PLAY_ANIM_ADVANCED(0, &cLocal_100, "idle_a", Local_297, Local_300, 8f, -8f, -1, 0, 0, 2, 0);
						TASK::TASK_PLAY_ANIM_ADVANCED(0, &cLocal_100, "idle_b", Local_297, Local_300, 8f, -8f, -1, 0, 0, 2, 0);
						TASK::SET_SEQUENCE_TO_REPEAT(uLocal_355, 1);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_355);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_628[6], uLocal_355);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_355);
						iLocal_592 = 1;
					}
					else
					{
						if (ENTITY::IS_ENTITY_ATTACHED(Local_657[27 /*10*/]))
						{
							ENTITY::DETACH_ENTITY(Local_657[27 /*10*/], 1, 1);
						}
						PED::SET_PED_KEEP_TASK(iLocal_628[6], 1);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_355);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::TASK_STAND_STILL(0, 3000);
						TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_355);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_628[6], uLocal_355);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_355);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_628[6], PLAYER::PLAYER_PED_ID(), 5000, 2048, 4);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_628[6]));
					}
				}
			}
		}
	}
}

void func_732(var uParam0, struct<3> Param1, int iParam4, var uParam5, char[4] cParam6, char* sParam7, float fParam8)//Position - 0x744A6
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_4 = { Param1 };
	uParam0->f_3 = iParam4;
	uParam0->f_2 = 1;
	ENTITY::PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(Param1, 1f, iParam4, uParam5, sParam7, cParam6, fParam8, -1056964608, 0, 1148846080);
}

void func_733()//Position - 0x744EB
{
	float fVar0;
	bool bVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_628[3]) && !PED::IS_PED_INJURED(iLocal_628[3]))
	{
		if (1 == Local_978[3 /*8*/].f_1)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_628[3], 1);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_355);
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, &cLocal_82, 3, 256, -1);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			TASK::TASK_ACHIEVE_HEADING(0, 160f, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_355);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_628[3], uLocal_355);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_355);
			PED::FORCE_PED_MOTION_STATE(iLocal_628[3], -668482597, 0, 1, 0);
			GlobalFunc_719(&uLocal_1083, "AMB@WORLD_HUMAN_STAND_IMPATIENT@MALE@No_Sign@base");
			GlobalFunc_719(&uLocal_1083, "AMB@WORLD_HUMAN_STAND_IMPATIENT@MALE@No_Sign@idle_a");
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
			{
				case 0:
					StringCopy(&Local_550, "LS1A_WLKCT2", 24);
					break;
				
				case 1:
					StringCopy(&Local_550, "LS1A_WLKCT3", 24);
					break;
			}
			StringCopy(&cLocal_556, "", 24);
			iLocal_585 = 0;
			iLocal_590 = 0;
			iLocal_2897 = 0;
			Local_978[3 /*8*/].f_7 = 1;
			Local_978[3 /*8*/] = 0;
			Local_978[3 /*8*/].f_1 = 2;
		}
		else
		{
			fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_628[3], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			if (fVar0 < 36f)
			{
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_628[3], -1, 0, 4);
			}
			else if (fVar0 >= 100f)
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			}
			if (SYSTEM::VDIST2(-1063.57f, -241.33f, 39.91f, ENTITY::GET_ENTITY_COORDS(iLocal_628[3], 1)) < 25f)
			{
				PED::SET_PED_RESET_FLAG(iLocal_628[3], 60, 1);
				PED::SET_PED_CONFIG_FLAG(iLocal_628[3], 104, 1);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_628[3], 104, 0);
			}
			switch (iLocal_585)
			{
				case 0:
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_628[3], -1061.159f, -240.2305f, 38.73318f, -1066.04f, -242.6611f, 41.85818f, 2.9375f, 0, 1, 0))
					{
						bVar1 = true;
					}
					break;
				
				case 1:
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_628[3], -1066.658f, -247.5835f, 38.73318f, -1070.309f, -243.8517f, 43.31267f, 2.9375f, 0, 1, 0))
					{
						bVar1 = true;
					}
					break;
				
				case 2:
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_628[3], -1074.717f, -242.9096f, 42.68964f, -1079.152f, -245.2583f, 46.14628f, 7.0625f, 0, 1, 0))
					{
						bVar1 = true;
					}
					break;
				
				case 3:
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_628[3], -1075.363f, -248.9354f, 43.02128f, -1070.266f, -250.3711f, 46.14628f, 7.0625f, 0, 1, 0))
					{
						bVar1 = true;
					}
					break;
			}
			switch (Local_978[3 /*8*/].f_1)
			{
				case 2:
					if (!GlobalFunc_709(iLocal_628[3], 242628503, 1))
					{
						Local_978[3 /*8*/].f_1 = 5;
					}
					else if (bVar1)
					{
						if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_322 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_628[3], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 25f)
						{
							iLocal_585++;
						}
						else
						{
							TASK::WAYPOINT_PLAYBACK_PAUSE(iLocal_628[3], 1, 0);
							if (!iLocal_2897)
							{
								if (GlobalFunc_111())
								{
									if (AUDIO::IS_PED_IN_CURRENT_CONVERSATION(iLocal_628[3]))
									{
										Local_550 = { GlobalFunc_560() };
										cLocal_556 = { GlobalFunc_514() };
									}
									GlobalFunc_5105();
								}
							}
							Local_978[3 /*8*/].f_1 = 3;
						}
					}
					break;
				
				case 3:
				case 4:
					if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_628[3]))
					{
						if (bVar1)
						{
							if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_322 && fVar0 < 25f)
							{
								TASK::WAYPOINT_PLAYBACK_RESUME(iLocal_628[3], 0, -1, 0);
								if (!iLocal_2897)
								{
									if (GlobalFunc_111())
									{
										GlobalFunc_5105();
									}
								}
								Local_978[3 /*8*/].f_1 = 2;
								iLocal_585++;
							}
						}
					}
					break;
				
				case 5:
					if (!GlobalFunc_709(iLocal_628[3], 242628503, 1) && !GlobalFunc_709(iLocal_628[3], -2017877118, 1))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_355);
						TASK::TASK_PLAY_ANIM(0, "AMB@WORLD_HUMAN_STAND_IMPATIENT@MALE@No_Sign@base", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, "AMB@WORLD_HUMAN_STAND_IMPATIENT@MALE@No_Sign@idle_a", "idle_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, "AMB@WORLD_HUMAN_STAND_IMPATIENT@MALE@No_Sign@base", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, "AMB@WORLD_HUMAN_STAND_IMPATIENT@MALE@No_Sign@idle_a", "idle_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, "AMB@WORLD_HUMAN_STAND_IMPATIENT@MALE@No_Sign@base", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, "AMB@WORLD_HUMAN_STAND_IMPATIENT@MALE@No_Sign@idle_a", "idle_c", 8f, -8f, -1, 0, 0, 0, 0, 0);
						TASK::SET_SEQUENCE_TO_REPEAT(uLocal_355, 1);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_355);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_628[3], uLocal_355);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_355);
					}
					break;
			}
			if (!iLocal_2897)
			{
				switch (Local_978[3 /*8*/].f_1)
				{
					case 2:
						if (iLocal_585 == 4)
						{
							if (GlobalFunc_5170())
							{
								if (GlobalFunc_10618(&uLocal_385, "LS1AAUD", "LS1A_POINT", 8, 0, 0, 0))
								{
									StringCopy(&Local_550, "", 24);
									StringCopy(&cLocal_556, "", 24);
									iLocal_585++;
								}
							}
							else if (GlobalFunc_111())
							{
								GlobalFunc_5105();
							}
						}
						else if (iLocal_590 && !MISC::IS_STRING_NULL_OR_EMPTY(&Local_550))
						{
							if (GlobalFunc_5170())
							{
								if (MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_556))
								{
									if (GlobalFunc_10618(&uLocal_385, "LS1AAUD", &Local_550, 8, 0, 0, 0))
									{
										StringCopy(&Local_550, "", 24);
									}
								}
								else if (GlobalFunc_10626(&uLocal_385, "LS1AAUD", &Local_550, &cLocal_556, 8, 0, 0))
								{
									StringCopy(&Local_550, "", 24);
									StringCopy(&cLocal_556, "", 24);
								}
							}
						}
						break;
					
					case 3:
					case 4:
						if (fVar0 <= 25f || (fVar0 < 144f && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_322))
						{
							if ((MISC::GET_GAME_TIMER() - Local_978[3 /*8*/]) >= 7000)
							{
								if (!iLocal_2897)
								{
									if (GlobalFunc_5170())
									{
										if (Local_978[3 /*8*/].f_1 == 3)
										{
											if (GlobalFunc_10618(&uLocal_385, "LS1AAUD", "LS1A_LFTB", 8, 0, 0, 0))
											{
												Local_978[3 /*8*/] = MISC::GET_GAME_TIMER();
												Local_978[3 /*8*/].f_1 = 4;
											}
										}
										else if (GlobalFunc_10618(&uLocal_385, "LS1AAUD", "LS1A_COMON", 8, 0, 0, 0))
										{
											Local_978[3 /*8*/] = MISC::GET_GAME_TIMER();
										}
									}
								}
								else
								{
									Local_978[3 /*8*/] = MISC::GET_GAME_TIMER();
								}
							}
						}
						else if (!iLocal_2897)
						{
							if (GlobalFunc_111())
							{
								GlobalFunc_5105();
							}
						}
						break;
					}
				}
		}
	}
	else
	{
		func_232(3);
	}
}




void func_737()//Position - 0x74CB6
{
	int iVar0;
	
	switch (Local_978[2 /*8*/].f_1)
	{
		case 1:
			if (PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 9) == 9)
			{
				func_295(PLAYER::PLAYER_PED_ID(), 9, 0);
				Local_978[2 /*8*/].f_1 = 2;
			}
			else
			{
				func_295(PLAYER::PLAYER_PED_ID(), 9, 15);
				Local_978[2 /*8*/].f_1 = 3;
			}
			break;
		
		case 2:
			if (PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 9) != 9 || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || ((GlobalFunc_331() && !GlobalFunc_8388(16)) && !CAM::IS_GAMEPLAY_CAM_RENDERING())))
			{
				func_377(PLAYER::PLAYER_PED_ID(), 9, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
				func_295(PLAYER::PLAYER_PED_ID(), 9, 15);
				if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					Local_978[2 /*8*/].f_1 = 4;
				}
				else
				{
					Local_978[2 /*8*/].f_1++;
				}
			}
			break;
		
		case 3:
			if (PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 9) == 9 || (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !GlobalFunc_331()))
			{
				func_377(PLAYER::PLAYER_PED_ID(), 9, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
				func_295(PLAYER::PLAYER_PED_ID(), 9, 0);
				Local_978[2 /*8*/].f_1 = (Local_978[2 /*8*/].f_1 - 1);
			}
			break;
		
		case 4:
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				Local_978[2 /*8*/].f_1 = 2;
			}
			break;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
	if (PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 9) == 9 && iVar0 == joaat("weapon_unarmed"))
	{
		if (STREAMING::HAS_ANIM_DICT_LOADED("MOVE_P_M_ZERO_RUCKSACK"))
		{
			PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "MOVE_P_M_ZERO_RUCKSACK");
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 0);
		}
	}
	else
	{
		PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
	}
}


void func_739()//Position - 0x74EA0
{
	switch (Local_978[1 /*8*/].f_1)
	{
		case 1:
			if ((((((((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != iLocal_322 && OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-1563127729) == 1) && MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(-1563127729)) <= 0.1f) && OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(759145763) == 1) && MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(759145763)) <= 0.1f) && OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-84399179) == 1) && MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(-84399179)) <= 0.1f) && OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-461898059) == 1) && MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(-461898059)) <= 0.1f)
			{
				iLocal_574 = MISC::GET_GAME_TIMER() + 5000;
				Local_978[1 /*8*/].f_1++;
			}
			break;
		
		case 2:
			if (MISC::GET_GAME_TIMER() > iLocal_574 || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				GlobalFunc_200(&uLocal_385, 8);
				GlobalFunc_173(&uLocal_385, 8, 0, "LESTER", 0, 1);
				Local_978[1 /*8*/].f_1++;
			}
			break;
		
		case 3:
			if (!GlobalFunc_111())
			{
				if (GlobalFunc_10638(&uLocal_385, 12, &cLocal_88, "LES1A_01", 12, 1, 0, 0, 0))
				{
					Local_978[1 /*8*/].f_1++;
				}
			}
			break;
		
		case 4:
			if (GlobalFunc_617())
			{
				Local_978[1 /*8*/].f_1++;
			}
			break;
		
		case 5:
			if (!GlobalFunc_617())
			{
				GlobalFunc_200(&uLocal_385, 8);
				func_232(1);
			}
			break;
	}
}



void func_742()//Position - 0x750DD
{
	switch (Local_978[0 /*8*/].f_1)
	{
		case 1:
			iLocal_574 = 0;
			Local_978[0 /*8*/].f_1++;
			break;
		
		case 2:
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_574 = MISC::GET_GAME_TIMER() + 5000;
				Local_978[0 /*8*/].f_1 = 4;
			}
			else if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 127.7614f, -209.5459f, 53.55f, 1) >= 30f)
			{
				iLocal_574 = MISC::GET_GAME_TIMER() + 15000;
				Local_978[0 /*8*/].f_1 = 3;
			}
			break;
		
		case 3:
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				Local_978[0 /*8*/].f_1 = (Local_978[0 /*8*/].f_1 - 1);
			}
		
		case 4:
			if (MISC::GET_GAME_TIMER() > iLocal_574)
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					Local_978[0 /*8*/].f_1 = 7;
				}
				else
				{
					GlobalFunc_200(&uLocal_385, 8);
					GlobalFunc_173(&uLocal_385, 8, 0, "LESTER", 0, 1);
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10638(&uLocal_385, 12, &cLocal_88, "LES_1A_CALL", 8, 1, 0, 0, 0))
						{
							Local_978[0 /*8*/].f_1 = 5;
						}
					}
				}
			}
			break;
		
		case 5:
			if (GlobalFunc_617())
			{
				Local_978[0 /*8*/].f_1++;
			}
			break;
		
		case 6:
			if (!GlobalFunc_617())
			{
				if (GlobalFunc_781() || GlobalFunc_890())
				{
					func_721(0, 10000);
					Local_978[0 /*8*/].f_1++;
				}
				else
				{
					GlobalFunc_200(&uLocal_385, 8);
					func_232(0);
				}
			}
			break;
		
		case 7:
			func_468(12, "LES1A_TXT2", 1, 1, 0, 0, 0, 1, 0, 1);
			func_232(0);
			break;
	}
}



void func_745()//Position - 0x752CB
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	if (iLocal_2887 == 0)
	{
		return;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			GlobalFunc_504(iVar1, -1);
			GlobalFunc_503(iVar1, -1);
		}
		else
		{
			GlobalFunc_504(0, -1);
			GlobalFunc_503(0, -1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_628[2]))
	{
		if (PED::IS_PED_INJURED(iLocal_628[2]) || FIRE::IS_ENTITY_ON_FIRE(iLocal_628[2]))
		{
			func_769(0);
		}
	}
	if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1010.514f, -215.7469f, 36.9178f, -1136.745f, -279.6932f, 66.87083f, 88.4375f, 0, 1, 0) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) || MISC::IS_BULLET_IN_BOX(-1109.98f, -263.37f, 37.73f, -1008.46f, -216.71f, 56.92f, 1)) || MISC::IS_PROJECTILE_IN_AREA(-1109.98f, -263.37f, 37.73f, -1008.46f, -216.71f, 56.92f, 1))
	{
		func_769(1);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_322)
	{
		func_769(1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_628[3]) && PED::IS_PED_INJURED(iLocal_628[3]))
	{
		func_769(1);
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1010.514f, -215.7469f, 36.9178f, -1136.745f, -279.6932f, 66.87083f, 88.4375f, 0, 1, 0) && ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && (((PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) || VEHICLE::IS_VEHICLE_SIREN_ON(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != -1))
	{
		func_769(1);
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1043.09f, -228.1496f, 38.01339f, -1047.866f, -230.5969f, 48.13947f, 7.875f, 0, 1, 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		func_769(1);
	}
	if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(-1045.634f, -230.6155f, 38.09341f, 2f) && VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(-1082.184f, -259.8893f, 36.81472f, 2f))
	{
		func_769(1);
	}
	if ((iLocal_2887 == 1 && iLocal_598) && !GlobalFunc_331())
	{
		if (((((GlobalFunc_10909(GlobalFunc_4917(0), 3, 70) || GlobalFunc_10909(GlobalFunc_4917(0), 3, 71)) || GlobalFunc_10909(GlobalFunc_4917(0), 3, 72)) || GlobalFunc_10909(GlobalFunc_4917(0), 3, 73)) || GlobalFunc_10909(GlobalFunc_4917(0), 3, 74)) || GlobalFunc_10909(GlobalFunc_4917(0), 3, 75))
		{
			bVar2 = true;
		}
		if (((((((((((((((((((((((((((((((((((((GlobalFunc_10909(GlobalFunc_4917(0), 4, 41) || GlobalFunc_10909(GlobalFunc_4917(0), 4, 42)) || GlobalFunc_10909(GlobalFunc_4917(0), 4, 43)) || GlobalFunc_10909(GlobalFunc_4917(0), 4, 44)) || GlobalFunc_10909(GlobalFunc_4917(0), 4, 45)) || GlobalFunc_10909(GlobalFunc_4917(0), 4, 45)) || GlobalFunc_10909(GlobalFunc_4917(0), 4, 96)) || GlobalFunc_10909(GlobalFunc_4917(0), 4, 97)) || GlobalFunc_10909(GlobalFunc_4917(0), 4, 98)) || GlobalFunc_10909(GlobalFunc_4917(0), 4, 99)) || GlobalFunc_10909(GlobalFunc_4917(0), 4, 100)) || GlobalFunc_10909(GlobalFunc_4917(0), 4, 101)) || GlobalFunc_10909(GlobalFunc_4917(0), 4, 102)) || GlobalFunc_10909(GlobalFunc_4917(0), 4, 103)) || GlobalFunc_10909(GlobalFunc_4917(0), 4, 104)) || GlobalFunc_10909(GlobalFunc_4917(0), 4, 105)) || GlobalFunc_10909(GlobalFunc_4917(0), 4, 106)) || GlobalFunc_10909(GlobalFunc_4917(0), 4, 107)) || GlobalFunc_10909(GlobalFunc_4917(0), 4, 108)) || GlobalFunc_10909(GlobalFunc_4917(0), 4, 109)) || GlobalFunc_10909(GlobalFunc_4917(0), 4, 110)) || GlobalFunc_10909(GlobalFunc_4917(0), 4, 111)) || GlobalFunc_10909(GlobalFunc_4917(0), 4, 55)) || GlobalFunc_10909(GlobalFunc_4917(0), 4, 56)) || GlobalFunc_10909(GlobalFunc_4917(0), 4, 57)) || GlobalFunc_10909(GlobalFunc_4917(0), 4, 58)) || GlobalFunc_10909(GlobalFunc_4917(0), 4, 59)) || GlobalFunc_10909(GlobalFunc_4917(0), 4, 60)) || GlobalFunc_10909(GlobalFunc_4917(0), 4, 61)) || GlobalFunc_10909(GlobalFunc_4917(0), 4, 62)) || GlobalFunc_10909(GlobalFunc_4917(0), 4, 63)) || GlobalFunc_10909(GlobalFunc_4917(0), 4, 64)) || GlobalFunc_10909(GlobalFunc_4917(0), 4, 65)) || GlobalFunc_10909(GlobalFunc_4917(0), 4, 66)) || GlobalFunc_10909(GlobalFunc_4917(0), 4, 67)) || GlobalFunc_10909(GlobalFunc_4917(0), 4, 68)) || GlobalFunc_10909(GlobalFunc_4917(0), 4, 69)) || GlobalFunc_10909(GlobalFunc_4917(0), 4, 70))
		{
			bVar3 = true;
		}
		if (!bVar2 && !bVar3)
		{
			if (GlobalFunc_469(GlobalFunc_8315()) < iLocal_599)
			{
				func_769(4);
			}
		}
		else if (!bVar2)
		{
			if (GlobalFunc_469(GlobalFunc_8315()) < iLocal_600)
			{
				func_769(4);
			}
		}
		else if (!bVar3)
		{
			if (GlobalFunc_469(GlobalFunc_8315()) < iLocal_601)
			{
				func_769(4);
			}
		}
	}
	if (iLocal_2887 <= 2)
	{
		if ((iLocal_2887 > 0 && !GlobalFunc_8371(16)) && iLocal_566 == 0)
		{
			func_769(3);
		}
		if (iLocal_2888 < 4 && iLocal_2888 != -1)
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_322)
			{
				func_769(1);
			}
		}
	}
	if (iLocal_2887 >= 2)
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_322)
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(&cLocal_194))
			{
				AUDIO::START_AUDIO_SCENE(&cLocal_194);
			}
		}
		else if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&cLocal_194))
		{
			AUDIO::STOP_AUDIO_SCENE(&cLocal_194);
		}
	}
	if (iLocal_2887 >= 3)
	{
		iVar0 = 3;
		while (iVar0 <= 26)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_628[iVar0]))
			{
				if (PED::IS_PED_INJURED(iLocal_628[iVar0]))
				{
					func_769(1);
				}
			}
			iVar0++;
		}
		if (iLocal_2887 <= 5)
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != iLocal_322)
			{
				if (iLocal_354 < 0)
				{
					iLocal_354 = MISC::GET_GAME_TIMER();
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_354) > 3000)
				{
					if (iLocal_2887 == 3)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_2890) > 5000)
						{
							func_769(2);
						}
					}
					else
					{
						func_769(2);
					}
				}
			}
			else
			{
				iLocal_354 = -1;
			}
		}
		if (iLocal_2887 <= 6)
		{
			if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
			{
				func_769(1);
			}
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				func_769(1);
			}
			if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0))
			{
				func_769(1);
			}
		}
	}
	if (iLocal_2887 >= 7)
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_324)
		{
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				func_769(8);
			}
		}
	}
	if (iLocal_570)
	{
		func_431();
	}
	if (iLocal_570)
	{
		if (!iLocal_571)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
		}
		PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 36, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, 1);
		if (!GlobalFunc_701())
		{
			GlobalFunc_7632(1);
		}
	}
	else if (iLocal_2887 < 8)
	{
		if (GlobalFunc_701())
		{
			GlobalFunc_7632(0);
		}
	}
	iVar4 = iLocal_2887;
	if (((((iVar4 == 3 || iVar4 == 4) || iVar4 == 5) || iVar4 == 6) || iVar4 == 8) || iVar4 == 9)
	{
		RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	}
}





void func_750()//Position - 0x75CFD
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	struct<14> Var5;
	int iVar19;
	
	MISC::SET_MISSION_FLAG(1);
	if (GlobalFunc_199() || GlobalFunc_2(0))
	{
		if (GlobalFunc_2(0))
		{
			GlobalFunc_7934(6, 0);
		}
		if (GlobalFunc_199())
		{
			iLocal_2893 = GlobalFunc_198();
			if (Global_84544)
			{
				iLocal_2893++;
			}
		}
		else if (GlobalFunc_2(0))
		{
			Global_89962.f_12[0] = -1;
			Global_89962.f_12[1] = -1;
			Global_89962.f_12[2] = -1;
			iLocal_2893 = 0;
		}
		switch (iLocal_2893)
		{
			case 0:
				iLocal_2893 = 0;
				break;
			
			case 1:
				iLocal_2893 = 1;
				break;
			
			case 2:
				iLocal_2893 = 2;
				break;
			
			case 3:
				iLocal_2893 = 3;
				break;
			
			case 4:
				iLocal_2893 = 5;
				break;
			
			case 5:
				iLocal_2893 = 6;
				break;
			
			case 6:
				iLocal_2893 = 7;
				break;
			
			case 7:
				iLocal_2893 = 8;
				break;
			
			case 8:
				iLocal_2893 = 10;
				break;
		}
		if (GlobalFunc_199())
		{
			func_693(iLocal_2893, &Var0, &uVar3);
			GlobalFunc_5812(Var0, uVar3, 1, 0);
		}
		iLocal_2892 = 1;
	}
	else
	{
		Global_89962.f_12[0] = -1;
		Global_89962.f_12[1] = -1;
		Global_89962.f_12[2] = -1;
	}
	GlobalFunc_7621(101, 1, 0, 1, 0);
	HUD::REQUEST_ADDITIONAL_TEXT("LEST1", 0);
	func_546(PLAYER::PLAYER_PED_ID());
	func_545();
	iLocal_628[0] = PLAYER::PLAYER_PED_ID();
	GlobalFunc_8522(16);
	GlobalFunc_9131(16, 1, 0);
	iLocal_2972[0] = 8;
	iLocal_2972[1] = 2;
	iLocal_2972[2] = 14;
	iLocal_2972[3] = 5;
	iLocal_2972[4] = 11;
	iLocal_2972[5] = 17;
	if (GRAPHICS::GET_IS_WIDESCREEN())
	{
		Local_2899[0 /*6*/] = 2;
		Local_2899[1 /*6*/] = 0;
		Local_2899[2 /*6*/] = 5;
		Local_2899[3 /*6*/] = 7;
		Local_2899[4 /*6*/] = 1;
		Local_2899[5 /*6*/] = 3;
		Local_2899[6 /*6*/] = 4;
		Local_2899[7 /*6*/] = 11;
		Local_2899[8 /*6*/] = 8;
		Local_2899[9 /*6*/] = 9;
		Local_2899[10 /*6*/] = 10;
		Local_2899[11 /*6*/] = 6;
		Local_2899[0 /*6*/].f_2 = 0.1f;
		Local_2899[0 /*6*/].f_3 = 0.2083333f;
		Local_2899[1 /*6*/].f_2 = 0.1367188f;
		Local_2899[1 /*6*/].f_3 = 0.06944445f;
		Local_2899[2 /*6*/].f_2 = 0.078125f;
		Local_2899[2 /*6*/].f_3 = 0.1388889f;
		Local_2899[3 /*6*/].f_2 = 0.3125f;
		Local_2899[3 /*6*/].f_3 = 0.05f;
		Local_2899[4 /*6*/].f_2 = 0.5f;
		Local_2899[4 /*6*/].f_3 = 0.05f;
		Local_2899[5 /*6*/].f_2 = 0.4296875f;
		Local_2899[5 /*6*/].f_3 = 0.4f;
		Local_2899[6 /*6*/].f_2 = 0.1171875f;
		Local_2899[6 /*6*/].f_3 = 0.4444444f;
		Local_2899[7 /*6*/].f_2 = 0.390625f;
		Local_2899[7 /*6*/].f_3 = 0f;
		Local_2899[8 /*6*/].f_2 = 0.5078125f;
		Local_2899[8 /*6*/].f_3 = 0.4166667f;
		Local_2899[9 /*6*/].f_2 = 0.025f;
		Local_2899[9 /*6*/].f_3 = 0.45f;
		Local_2899[10 /*6*/].f_2 = 0.3125f;
		Local_2899[10 /*6*/].f_3 = 0.2083333f;
		Local_2899[11 /*6*/].f_2 = 0.3515625f;
		Local_2899[11 /*6*/].f_3 = 0.2777778f;
	}
	else
	{
		Local_2899[0 /*6*/] = 2;
		Local_2899[1 /*6*/] = 5;
		Local_2899[2 /*6*/] = 3;
		Local_2899[3 /*6*/] = 4;
		Local_2899[4 /*6*/] = 8;
		Local_2899[5 /*6*/] = 9;
		Local_2899[6 /*6*/] = 10;
		Local_2899[7 /*6*/] = 6;
		Local_2899[0 /*6*/].f_2 = 0.0390625f;
		Local_2899[0 /*6*/].f_3 = 0.2083f;
		Local_2899[1 /*6*/].f_2 = 0.078125f;
		Local_2899[1 /*6*/].f_3 = 0.1388f;
		Local_2899[2 /*6*/].f_2 = 0.4296875f;
		Local_2899[2 /*6*/].f_3 = 0.5f;
		Local_2899[3 /*6*/].f_2 = 0.1171875f;
		Local_2899[3 /*6*/].f_3 = 0.4444f;
		Local_2899[4 /*6*/].f_2 = 0.35f;
		Local_2899[4 /*6*/].f_3 = 0.4166f;
		Local_2899[5 /*6*/].f_2 = 0.05859375f;
		Local_2899[5 /*6*/].f_3 = 0.4861f;
		Local_2899[6 /*6*/].f_2 = 0.3125f;
		Local_2899[6 /*6*/].f_3 = 0.2083f;
		Local_2899[7 /*6*/].f_2 = 0.3515625f;
		Local_2899[7 /*6*/].f_3 = 0.2777f;
	}
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	iLocal_2993 = 0;
	iVar4 = 0;
	while (iVar4 <= 11)
	{
		if (Local_2899[iVar4 /*6*/] != -1)
		{
			Local_2899[iVar4 /*6*/].f_1 = 0;
			Local_2899[iVar4 /*6*/].f_5 = AUDIO::GET_SOUND_ID();
			Local_2899[iVar4 /*6*/].f_4 = 0;
			iLocal_2993++;
		}
		else
		{
			Local_2899[iVar4 /*6*/].f_1 = 1;
		}
		iVar4++;
	}
	iLocal_2987 = AUDIO::GET_SOUND_ID();
	iLocal_323 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1273.729f, -1712.067f, 53.7715f, "v_lesters");
	iLocal_322 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1047.6f, -232.3503f, 38.0135f, "v_faceoffice");
	iLocal_324 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-803.1297f, 171.9331f, 71.8348f, "v_michael");
	uLocal_572 = GlobalFunc_5101(0);
	func_754(0, -1048.28f, -236.82f, 44.17f, joaat("v_ilev_fib_door2"), 0);
	func_754(1, -1047.08f, -239.12f, 44.17f, joaat("v_ilev_fib_door2"), 0);
	func_754(2, -1063.84f, -240.65f, 43.02f, joaat("v_ilev_fb_sl_door01"), 0);
	func_754(3, -1057.77f, -237.48f, 43.02f, joaat("v_ilev_fb_sl_door01"), 0);
	func_753(2, 1, 0f, 0);
	func_753(3, 1, 0f, 0);
	func_753(0, 1, 0f, 0);
	func_753(1, 1, 0f, 0);
	GlobalFunc_10617(128, 1);
	GlobalFunc_10617(129, 1);
	GlobalFunc_10617(130, 1);
	GlobalFunc_10617(131, 1);
	func_686();
	iVar4 = 0;
	while (iVar4 < iLocal_618)
	{
		iLocal_618[iVar4] = -1;
		iVar4++;
	}
	if (GlobalFunc_2(0))
	{
		GlobalFunc_52(1, 1);
	}
	else
	{
		GlobalFunc_52(0, 1);
	}
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_210, 1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("cs_lifeinvad_01"), 1);
	PED::ADD_RELATIONSHIP_GROUP("REL_FREIND", &iLocal_564);
	PED::ADD_RELATIONSHIP_GROUP("Family", &iLocal_565);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_564);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_565);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_564, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_564, iLocal_565);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_565);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_565, iLocal_564);
	Global_67064 = 1;
	iVar19 = 70;
	while (iVar19 <= 75)
	{
		Var5 = { func_752(iVar19) };
		if (Var5.f_7 > iLocal_600)
		{
			iLocal_600 = Var5.f_7;
		}
		iVar19++;
	}
	iVar19 = 41;
	while (iVar19 <= 45)
	{
		Var5 = { func_751(iVar19) };
		if (Var5.f_7 > iLocal_601)
		{
			iLocal_601 = Var5.f_7;
		}
		iVar19++;
	}
	iLocal_599 = (iLocal_600 + iLocal_601);
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	Local_250[0 /*3*/] = { -802.2527f, 173.0374f, 74.35708f };
	Local_263[0 /*3*/] = { 0.914659f, 0f, -69.59251f };
	Local_250[1 /*3*/] = { -804.1746f, 172.3621f, 74.32456f };
	Local_263[1 /*3*/] = { 0.914659f, 0f, -71.18903f };
	Local_250[2 /*3*/] = { -804.1575f, 170.5305f, 73.04112f };
	Local_263[2 /*3*/] = { 14.62919f, 0f, -54.17662f };
	Local_250[3 /*3*/] = { -805.6417f, 171.1509f, 73.2577f };
	Local_263[3 /*3*/] = { 2.1993f, 0f, -68.9021f };
	GlobalFunc_173(&uLocal_385, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
}

struct<14> func_751(int iParam0)//Position - 0x76489
{
	GlobalFunc_41();
	GlobalFunc_9616(iParam0);
	return Global_68106[0 /*14*/];
}

struct<14> func_752(int iParam0)//Position - 0x764A5
{
	GlobalFunc_41();
	GlobalFunc_9617(iParam0);
	return Global_68106[0 /*14*/];
}

void func_753(int iParam0, bool bParam1, float fParam2, int iParam3)//Position - 0x764C1
{
	if (Local_325[iParam0 /*7*/] != 0)
	{
		if (iParam3 <= 0)
		{
			if (fParam2 != 100f)
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Local_325[iParam0 /*7*/], fParam2, 0, 1);
			}
			if (bParam1)
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_325[iParam0 /*7*/], 1, 0, 1);
			}
			else
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_325[iParam0 /*7*/], 0, 0, 1);
			}
			Local_325[iParam0 /*7*/].f_6 = 0;
			Local_325[iParam0 /*7*/].f_5 = 0;
		}
		else if (fParam2 != 100f)
		{
			Local_325[iParam0 /*7*/].f_1 = 1;
			Local_325[iParam0 /*7*/].f_4 = bParam1;
			Local_325[iParam0 /*7*/].f_2 = fParam2;
			Local_325[iParam0 /*7*/].f_6 = MISC::GET_GAME_TIMER();
			Local_325[iParam0 /*7*/].f_5 = iParam3;
			Local_325[iParam0 /*7*/].f_3 = OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(Local_325[iParam0 /*7*/]);
		}
	}
}

void func_754(int iParam0, struct<3> Param1, int iParam4, bool bParam5)//Position - 0x76589
{
	char cVar0[24];
	
	StringCopy(&cVar0, "LESTER1A_DOOR_", 24);
	StringIntConCat(&cVar0, iParam0, 24);
	Local_325[iParam0 /*7*/] = MISC::GET_HASH_KEY(&cVar0);
	OBJECT::ADD_DOOR_TO_SYSTEM(Local_325[iParam0 /*7*/], iParam4, Param1, 0, 1, 0);
	if (bParam5)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Local_325[iParam0 /*7*/], 1f, 1, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_325[iParam0 /*7*/], 6, 1, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_325[iParam0 /*7*/], 4, 1, 0);
	}
}














void func_768()//Position - 0x776DB
{
	int iVar0;
	
	iVar0 = MISC::GET_GAME_TIMER();
	if (iVar0 > (Global_51924 + 120000) || Global_51924 == -1)
	{
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			Global_54736 = 1;
			return;
		}
		if (!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			Global_54736 = 1;
			return;
		}
		if (!Global_51923)
		{
			if (STATS::_0x5A556B229A169402())
			{
				Global_51924 = iVar0;
				Global_51923 = 1;
			}
		}
	}
}

void func_769(int iParam0)//Position - 0x77737
{
	char* sVar0;
	
	if (iParam0 == 10)
	{
		GlobalFunc_10632();
		func_8();
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				sVar0 = "LES1A_F1";
				break;
			
			case 2:
				sVar0 = "LES1A_F2";
				break;
			
			case 3:
				sVar0 = "LES1A_F3";
				break;
			
			case 4:
				sVar0 = "LES1A_F5";
				break;
			
			case 0:
				sVar0 = "LES1A_F4";
				break;
			
			case 5:
				sVar0 = "F_DETONATE";
				break;
			
			case 6:
				sVar0 = "F_TRACY_DEAD";
				break;
			
			case 7:
				sVar0 = "F_TRACEY_FLED";
				break;
			
			case 8:
				sVar0 = "F_WANT_HOME";
				break;
			
			case 9:
				sVar0 = "LES1A_FF";
				break;
			
			case 10:
			default:
				sVar0 = "LES1A_DF";
				break;
		}
		GlobalFunc_10835(sVar0);
		while (!GlobalFunc_145())
		{
			SYSTEM::WAIT(0);
		}
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_322)
		{
			GlobalFunc_5129(-1048.484f, -219.1426f, 36.8756f, 234.6454f);
			GlobalFunc_5166(Local_303, fLocal_309);
		}
		else if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_323)
		{
			GlobalFunc_5129(1282.117f, -1736.884f, 51.2234f, 22.2041f);
		}
		else if ((iLocal_2887 == 8 || iLocal_2887 == 9) || iLocal_2887 == 10)
		{
			GlobalFunc_5129(-802.86f, 172.6933f, 71.8447f, 286.1387f);
		}
		GlobalFunc_9131(16, 0, 0);
		if (iParam0 == 9)
		{
			func_699();
		}
		func_770();
		func_8();
		GlobalFunc_5068();
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_770()//Position - 0x778D8
{
	GlobalFunc_2000(&Global_91351);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_551(PLAYER::PLAYER_PED_ID(), &(Global_89752[GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) /*65*/]), 0);
	}
}

















