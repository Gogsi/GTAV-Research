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
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = -1;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 1000;
	var uLocal_37 = 1000;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	bool bLocal_41 = 0;
	bool bLocal_42 = 0;
	bool bLocal_43 = 0;
	bool bLocal_44 = 0;
	bool bLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	bool bLocal_48 = 0;
	bool bLocal_49 = 0;
	int iLocal_50 = 0;
	bool bLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	bool bLocal_57 = 0;
	bool bLocal_58 = 0;
	bool bLocal_59 = 0;
	int iLocal_60 = 0;
	bool bLocal_61 = 0;
	var uLocal_62 = 0;
	bool bLocal_63 = 0;
	bool bLocal_64 = 0;
	bool bLocal_65 = 0;
	bool bLocal_66 = 0;
	bool bLocal_67 = 0;
	bool bLocal_68 = 0;
	bool bLocal_69 = 0;
	bool bLocal_70 = 0;
	bool bLocal_71 = 0;
	bool bLocal_72 = 0;
	float fLocal_73[51] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_125[51] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_177[51] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_229[51] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_281[51] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	float fLocal_337[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_353[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_369[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_385[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_401[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_417[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_433[1] = { 0f };
	float fLocal_435[1] = { 0f };
	float fLocal_437[1] = { 0f };
	float fLocal_439[1] = { 0f };
	float fLocal_441 = 0f;
	float fLocal_442 = 0f;
	float fLocal_443 = 0f;
	float fLocal_444 = 0f;
	float fLocal_445 = 0f;
	float fLocal_446 = 0f;
	float fLocal_447 = 0f;
	float fLocal_448 = 0f;
	float fLocal_449 = 0f;
	float fLocal_450 = 0f;
	float fLocal_451 = 0f;
	float fLocal_452 = 0f;
	float fLocal_453 = 0f;
	float fLocal_454 = 0f;
	float fLocal_455 = 0f;
	float fLocal_456 = 0f;
	float fLocal_457 = 0f;
	float fLocal_458 = 0f;
	float fLocal_459 = 0f;
	float fLocal_460 = 0f;
	float fLocal_461 = 0f;
	int iLocal_462[51] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_514[51] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_566[51] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_618[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_634[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_650[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_666[1] = { 0 };
	int iLocal_668 = 0;
	int iLocal_669 = 0;
	int iLocal_670 = 0;
	int iLocal_671 = 0;
	int iLocal_672 = 0;
	int iLocal_673 = 0;
	int iLocal_674 = 0;
	int iLocal_675 = 0;
	int iLocal_676 = 0;
	int iLocal_677 = 0;
	int iLocal_678 = 0;
	int iLocal_679 = 0;
	int iLocal_680 = 0;
	int iLocal_681 = 0;
	int iLocal_682 = 0;
	int iLocal_683 = 0;
	int iLocal_684 = 0;
	struct<3> Local_685[51];
	struct<3> Local_839[1];
	struct<3> Local_843[15];
	struct<3> Local_889 = { 0, 0, 0 } ;
	struct<3> Local_892 = { 0, 0, 0 } ;
	struct<3> Local_895 = { 0, 0, 0 } ;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	struct<3> Local_904 = { 0, 0, 0 } ;
	struct<3> Local_907 = { 0, 0, 0 } ;
	struct<3> Local_910 = { 0, 0, 0 } ;
	struct<3> Local_913 = { 0, 0, 0 } ;
	char cLocal_916[64] = "";
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	int iLocal_932 = 0;
	int iLocal_933[51] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_985[1] = { 0 };
	int iLocal_987[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1003 = 0;
	int iLocal_1004 = 0;
	int iLocal_1005 = 0;
	int iLocal_1006[51] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1058[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1067[1] = { 0 };
	int iLocal_1069[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1085[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_1092 = 0;
	int iLocal_1093 = 0;
	int iLocal_1094 = 0;
	var uLocal_1095 = 8;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	int iLocal_1104 = 0;
	int iLocal_1105 = 0;
	int iLocal_1106 = 0;
	int iLocal_1107 = 0;
	int iLocal_1108 = 0;
	int iLocal_1109 = 0;
	int iLocal_1110 = 0;
	struct<8> Local_1111 = { 4, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1119 = 4;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 4;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 4;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 4;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 4;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 4;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	int iLocal_1155 = 0;
	int iLocal_1156 = 0;
	int iLocal_1157 = 0;
	struct<12> Local_1158 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<12> Local_1170 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_1182 = 0;
	int iLocal_1183 = 0;
	struct<14> Local_1184 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0 } ;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	int iLocal_1201 = 0;
	int iLocal_1202 = 0;
	int iLocal_1203 = 0;
	struct<5> Local_1204[6];
	struct<12> Local_1235[5];
	struct<4> Local_1296[7];
	int iLocal_1325 = 0;
	int iLocal_1326 = 0;
	int iLocal_1327 = 0;
	int iLocal_1328 = 0;
	int iLocal_1329 = 0;
	int iLocal_1330 = 0;
	int iLocal_1331 = 0;
	int iLocal_1332 = 0;
	int iLocal_1333 = 0;
	int iLocal_1334 = 0;
	int iLocal_1335 = 0;
	int iLocal_1336 = 0;
	int iLocal_1337 = 0;
	int iLocal_1338 = 0;
	int iLocal_1339 = 0;
	int iLocal_1340 = 0;
	int iLocal_1341 = 0;
	int iLocal_1342 = 0;
	int iLocal_1343 = 0;
	int iLocal_1344 = 0;
	var uLocal_1345 = 0;
	int iLocal_1346 = 0;
	int iLocal_1347 = 0;
	var uLocal_1348 = 0;
	int iLocal_1349 = 0;
	int iLocal_1350 = 0;
	int iLocal_1351 = 0;
	int iLocal_1352 = 0;
	int iLocal_1353 = 0;
	int iLocal_1354 = 0;
	int iLocal_1355[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1366[2] = { 0, 0 };
	var uLocal_1369[7] = { 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1377[3] = { 0, 0, 0 };
	var uLocal_1381[2] = { 0, 0 };
	int iLocal_1384 = 0;
	int iLocal_1385 = 0;
	int iLocal_1386 = 0;
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
	int iLocal_1397[24] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1422[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1437[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_1444[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1457[1] = { 0 };
	int iLocal_1459[1] = { 0 };
	int iLocal_1461[2] = { 0, 0 };
	int iLocal_1464[4] = { 0, 0, 0, 0 };
	int iLocal_1469 = 0;
	bool bLocal_1470 = 0;
	int iLocal_1471 = 0;
	bool bLocal_1472 = 0;
	int iLocal_1473 = 0;
	bool bLocal_1474 = 0;
	int iLocal_1475 = 0;
	int iLocal_1476 = 0;
	bool bLocal_1477 = 0;
	int iLocal_1478 = 0;
	int iLocal_1479 = 0;
	int iLocal_1480 = 0;
	int iLocal_1481 = 0;
	bool bLocal_1482 = 0;
	int iLocal_1483 = 0;
	int iLocal_1484 = 0;
	int iLocal_1485 = 0;
	bool bLocal_1486 = 0;
	int iLocal_1487 = 0;
	int iLocal_1488 = 0;
	bool bLocal_1489 = 0;
	bool bLocal_1490 = 0;
	bool bLocal_1491 = 0;
	int iLocal_1492 = 0;
	int iLocal_1493 = 0;
	int iLocal_1494 = 0;
	int iLocal_1495 = 0;
	int iLocal_1496 = 0;
	int iLocal_1497 = 0;
	int iLocal_1498 = 0;
	int iLocal_1499 = 0;
	int iLocal_1500 = 0;
	int iLocal_1501 = 0;
	int iLocal_1502 = 0;
	bool bLocal_1503 = 0;
	int iLocal_1504 = 0;
	bool bLocal_1505 = 0;
	int iLocal_1506 = 0;
	bool bLocal_1507 = 0;
	int iLocal_1508 = 0;
	bool bLocal_1509 = 0;
	bool bLocal_1510 = 0;
	bool bLocal_1511 = 0;
	bool bLocal_1512 = 0;
	int iLocal_1513 = 0;
	bool bLocal_1514 = 0;
	int iLocal_1515 = 0;
	bool bLocal_1516 = 0;
	bool bLocal_1517 = 0;
	bool bLocal_1518 = 0;
	bool bLocal_1519 = 0;
	bool bLocal_1520 = 0;
	int iLocal_1521 = 0;
	int iLocal_1522 = 0;
	int iLocal_1523 = 0;
	int iLocal_1524 = 0;
	int iLocal_1525 = 0;
	int iLocal_1526[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1534[3] = { 0, 0, 0 };
	int iLocal_1538[3] = { 0, 0, 0 };
	int iLocal_1542 = 0;
	int iLocal_1543 = 0;
	int iLocal_1544 = 0;
	bool bLocal_1545 = 0;
	int iLocal_1546 = 0;
	int iLocal_1547 = 0;
	bool bLocal_1548 = 0;
	bool bLocal_1549 = 0;
	bool bLocal_1550 = 0;
	int iLocal_1551 = 0;
	int iLocal_1552 = 0;
	int iLocal_1553 = 0;
	bool bLocal_1554 = 0;
	bool bLocal_1555 = 0;
	bool bLocal_1556 = 0;
	bool bLocal_1557 = 0;
	bool bLocal_1558 = 0;
	int iLocal_1559 = 0;
	int iLocal_1560 = 0;
	int iLocal_1561 = 0;
	int iLocal_1562 = 0;
	bool bLocal_1563 = 0;
	bool bLocal_1564 = 0;
	int iLocal_1565 = 0;
	int iLocal_1566 = 0;
	int iLocal_1567 = 0;
	int iLocal_1568 = 0;
	bool bLocal_1569 = 0;
	int iLocal_1570 = 0;
	int iLocal_1571 = 0;
	bool bLocal_1572 = 0;
	bool bLocal_1573 = 0;
	bool bLocal_1574 = 0;
	bool bLocal_1575 = 0;
	int iLocal_1576 = 0;
	int iLocal_1577 = 0;
	int iLocal_1578 = 0;
	bool bLocal_1579 = 0;
	bool bLocal_1580 = 0;
	int iLocal_1581 = 0;
	int iLocal_1582 = 0;
	int iLocal_1583 = 0;
	int iLocal_1584 = 0;
	int iLocal_1585 = 0;
	bool bLocal_1586 = 0;
	bool bLocal_1587 = 0;
	int iLocal_1588 = 0;
	int iLocal_1589 = 0;
	bool bLocal_1590 = 0;
	bool bLocal_1591 = 0;
	int iLocal_1592 = 0;
	int iLocal_1593 = 0;
	int iLocal_1594 = 0;
	bool bLocal_1595 = 0;
	int iLocal_1596 = 0;
	int iLocal_1597 = 0;
	int iLocal_1598 = 0;
	int iLocal_1599 = 0;
	int iLocal_1600 = 0;
	int iLocal_1601 = 0;
	int iLocal_1602 = 0;
	bool bLocal_1603 = 0;
	bool bLocal_1604 = 0;
	int iLocal_1605 = 0;
	int iLocal_1606 = 0;
	int iLocal_1607 = 0;
	int iLocal_1608 = 0;
	int iLocal_1609 = 0;
	int iLocal_1610 = 0;
	int iLocal_1611 = 0;
	int iLocal_1612 = 0;
	int iLocal_1613 = 0;
	int iLocal_1614 = 0;
	int iLocal_1615 = 0;
	int iLocal_1616 = 0;
	bool bLocal_1617 = 0;
	bool bLocal_1618 = 0;
	int iLocal_1619 = 0;
	bool bLocal_1620 = 0;
	bool bLocal_1621 = 0;
	int iLocal_1622 = 0;
	int iLocal_1623 = 0;
	int iLocal_1624 = 0;
	int iLocal_1625 = 0;
	int iLocal_1626 = 0;
	int iLocal_1627 = 0;
	int iLocal_1628 = 0;
	int iLocal_1629 = 0;
	bool bLocal_1630 = 0;
	int iLocal_1631 = 0;
	bool bLocal_1632 = 0;
	int iLocal_1633 = 0;
	bool bLocal_1634 = 0;
	int iLocal_1635 = 0;
	int iLocal_1636 = 0;
	bool bLocal_1637 = 0;
	int iLocal_1638 = 0;
	int iLocal_1639 = 0;
	bool bLocal_1640 = 0;
	int iLocal_1641 = 0;
	bool bLocal_1642 = 0;
	int iLocal_1643 = 0;
	int iLocal_1644 = 0;
	bool bLocal_1645 = 0;
	int iLocal_1646 = 0;
	int iLocal_1647 = 0;
	bool bLocal_1648 = 0;
	int iLocal_1649 = 0;
	int iLocal_1650 = 0;
	int iLocal_1651 = 0;
	int iLocal_1652 = 0;
	int iLocal_1653 = 0;
	int iLocal_1654 = 0;
	bool bLocal_1655 = 0;
	bool bLocal_1656 = 0;
	int iLocal_1657 = 0;
	int iLocal_1658 = 0;
	bool bLocal_1659 = 0;
	int iLocal_1660 = 0;
	int iLocal_1661 = 0;
	int iLocal_1662 = 0;
	int iLocal_1663 = 0;
	int iLocal_1664 = 0;
	int iLocal_1665 = 0;
	int iLocal_1666 = 0;
	bool bLocal_1667 = 0;
	int iLocal_1668 = 0;
	int iLocal_1669 = 0;
	bool bLocal_1670 = 0;
	int iLocal_1671 = 0;
	bool bLocal_1672 = 0;
	bool bLocal_1673 = 0;
	int iLocal_1674 = 0;
	int iLocal_1675 = 0;
	int iLocal_1676 = 0;
	int iLocal_1677 = 0;
	bool bLocal_1678 = 0;
	bool bLocal_1679 = 0;
	bool bLocal_1680 = 0;
	bool bLocal_1681 = 0;
	bool bLocal_1682 = 0;
	bool bLocal_1683 = 0;
	bool bLocal_1684 = 0;
	bool bLocal_1685 = 0;
	bool bLocal_1686 = 0;
	bool bLocal_1687 = 0;
	bool bLocal_1688 = 0;
	bool bLocal_1689 = 0;
	bool bLocal_1690 = 0;
	bool bLocal_1691 = 0;
	bool bLocal_1692 = 0;
	int iLocal_1693 = 0;
	int iLocal_1694 = 0;
	int iLocal_1695 = 0;
	int iLocal_1696 = 0;
	int iLocal_1697 = 0;
	int iLocal_1698 = 0;
	int iLocal_1699 = 0;
	int iLocal_1700 = 0;
	int iLocal_1701 = 0;
	int iLocal_1702 = 0;
	struct<3> Local_1703 = { 0, 0, 0 } ;
	struct<3> Local_1706 = { 0, 0, 0 } ;
	struct<3> Local_1709 = { 0, 0, 0 } ;
	struct<3> Local_1712 = { 0, 0, 0 } ;
	struct<3> Local_1715 = { 0, 0, 0 } ;
	struct<3> Local_1718 = { 0, 0, 0 } ;
	struct<3> Local_1721 = { 0, 0, 0 } ;
	struct<3> Local_1724 = { 0, 0, 0 } ;
	struct<3> Local_1727 = { 0, 0, 0 } ;
	struct<3> Local_1730 = { 0, 0, 0 } ;
	struct<3> Local_1733 = { 0, 0, 0 } ;
	struct<3> Local_1736 = { 0, 0, 0 } ;
	struct<3> Local_1739 = { 0, 0, 0 } ;
	struct<3> Local_1742 = { 0, 0, 0 } ;
	float fLocal_1745 = 0f;
	float fLocal_1746 = 0f;
	float fLocal_1747 = 0f;
	float fLocal_1748 = 0f;
	float fLocal_1749 = 0f;
	var uLocal_1750 = 0;
	float fLocal_1751 = 0f;
	float fLocal_1752 = 0f;
	float fLocal_1753 = 0f;
	float fLocal_1754 = 0f;
	float fLocal_1755[3] = { 0f, 0f, 0f };
	int iLocal_1759 = 0;
	int iLocal_1760 = 0;
	int iLocal_1761 = 0;
	int iLocal_1762 = 0;
	int iLocal_1763 = 0;
	int iLocal_1764 = 0;
	int iLocal_1765 = 0;
	int iLocal_1766 = 0;
	int iLocal_1767 = 0;
	int iLocal_1768 = 0;
	int iLocal_1769 = 0;
	int iLocal_1770 = 0;
	int iLocal_1771 = 0;
	int iLocal_1772 = 0;
	int iLocal_1773 = 0;
	int iLocal_1774 = 0;
	int iLocal_1775 = 0;
	int iLocal_1776 = 0;
	int iLocal_1777 = 0;
	int iLocal_1778[3] = { 0, 0, 0 };
	int iLocal_1782 = 0;
	int iLocal_1783 = 0;
	int iLocal_1784 = 0;
	int iLocal_1785 = 0;
	int iLocal_1786 = 0;
	int iLocal_1787 = 0;
	int iLocal_1788 = 0;
	int iLocal_1789 = 0;
	int iLocal_1790 = 0;
	int iLocal_1791 = 0;
	int iLocal_1792 = 0;
	int iLocal_1793 = 0;
	int iLocal_1794 = 0;
	int iLocal_1795 = 0;
	var uLocal_1796 = 0;
	int iLocal_1797 = 0;
	int iLocal_1798 = 0;
	int iLocal_1799 = 0;
	int iLocal_1800 = 0;
	int iLocal_1801 = 0;
	int iLocal_1802 = 0;
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
	int iLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
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
	int iLocal_1834 = 0;
	int iLocal_1835 = 0;
	int iLocal_1836 = 0;
	int iLocal_1837 = 0;
	int iLocal_1838 = 0;
	int iLocal_1839 = 0;
	int iLocal_1840 = 0;
	int iLocal_1841 = 0;
	float fLocal_1842 = 0f;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	int iLocal_1845 = 0;
	var uLocal_1846 = 16;
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
	var uLocal_1862 = 0;
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
	var uLocal_1957 = 0;
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
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	int iLocal_2011 = 0;
	struct<6> Local_2012 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_2018 = { 0, 0, 0, 0, 0, 0 } ;
	struct<5> Local_2024 = { 0, 0, 0, 0, 0 } ;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 21;
	var uLocal_2032 = 6;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
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
	bLocal_42 = true;
	bLocal_49 = true;
	bLocal_71 = true;
	fLocal_441 = 120f;
	fLocal_442 = 0f;
	fLocal_444 = 1f;
	fLocal_445 = 0f;
	fLocal_446 = 1f;
	fLocal_447 = 30f;
	fLocal_449 = 1f;
	fLocal_450 = 5f;
	fLocal_451 = 1f;
	fLocal_452 = 1f;
	fLocal_453 = 100f;
	fLocal_454 = 100f;
	fLocal_455 = 0f;
	fLocal_456 = 7000f;
	fLocal_457 = 0f;
	fLocal_458 = 0f;
	fLocal_459 = 0.3f;
	fLocal_460 = 0.5f;
	fLocal_461 = 50f;
	iLocal_671 = -1;
	iLocal_679 = -1;
	iLocal_680 = -1;
	iLocal_1836 = AUDIO::GET_SOUND_ID();
	iLocal_2011 = 18;
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GlobalFunc_10632();
		func_954();
	}
	bLocal_1472 = bLocal_1472;
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_Chop", 0);
		if (func_898())
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				func_896(0);
				func_893();
				GlobalFunc_502();
				if (!PED::IS_PED_INJURED(iLocal_1352))
				{
					if (Local_1184 != 2)
					{
						if (!iLocal_1653)
						{
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_1352, "FRANKLIN_0_CHOP_Group", 0);
							iLocal_1653 = 1;
						}
					}
					else if (iLocal_1653)
					{
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_1352, 0);
						iLocal_1653 = 0;
					}
				}
				switch (iLocal_1106)
				{
					case 0:
						func_883();
						break;
					
					case 1:
						func_810();
						break;
					
					case 2:
						func_760();
						break;
					
					case 3:
						func_252();
						break;
					
					case 4:
						func_4();
						break;
					}
			}
		}
		else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 0, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 1, 1, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 2, 2, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 3, 2, 1, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 4, 4, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 5, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 8, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 9, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 6, 1, 0, 0);
			func_1();
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Chop", 3, 0, iLocal_1828, 0);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x228
{
	if (GlobalFunc_2577())
	{
		iLocal_1828 = GlobalFunc_2578();
	}
	else
	{
		iLocal_1828 = 4;
	}
}



void func_4()//Position - 0x272
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	bool bVar6;
	float fVar7;
	float fVar8;
	bool bVar9;
	struct<3> Var10;
	int iVar13;
	struct<3> Var14;
	float fVar17;
	struct<3> Var18;
	struct<3> Var21;
	int iVar24;
	int iVar25;
	var uVar26;
	var uVar29;
	var uVar32;
	float fVar33;
	bool bVar34;
	struct<6> Var35;
	struct<3> Var41;
	float fVar44;
	struct<3> Var45;
	
	if (!PED::IS_PED_INJURED(Local_1158))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(Local_1158, 0);
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_1158, 0);
	}
	if (!iLocal_1676)
	{
		if (MISC::GET_GAME_TIMER() >= iLocal_1767 + 5000)
		{
			func_245(1);
			iLocal_1676 = 1;
		}
	}
	if (!iLocal_1471)
	{
		if (!bLocal_1617)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0))
			{
				if (bLocal_1590)
				{
					func_243(2);
				}
				else if (iLocal_1332 == 7)
				{
					if (!PED::IS_PED_INJURED(Local_1158) && ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(Local_1158))
					{
						func_243(3);
					}
					else
					{
						func_243(1);
					}
				}
				else
				{
					func_243(3);
				}
				if (!iLocal_1616)
				{
					if (iLocal_1610)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_1809)
						{
							if (!PED::IS_PED_INJURED(Local_1158))
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1158, 1);
								iLocal_1616 = 1;
							}
						}
					}
				}
				iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
				if (iVar0 > 0)
				{
					if (!bLocal_1474)
					{
						if (bLocal_1603)
						{
							if (iLocal_1332 <= 6)
							{
								func_242("FC_LOSECOP", -1, 16000, 28000, 0);
							}
						}
					}
				}
				switch (iLocal_1332)
				{
					case 0:
						if (iVar0 == 0)
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_1366[0]))
							{
								if (!iLocal_1698)
								{
									switch (iLocal_1201)
									{
										case 2:
											sVar1 = "FKN0_VAN3";
											break;
										
										case 0:
											sVar1 = "FKN0_VAN2";
											break;
										
										case 1:
											sVar1 = "FKN0_VAN1";
											break;
									}
									if (func_239(sVar1, 0, 0, 0, 1))
									{
										iLocal_1698 = 1;
									}
								}
								else if (func_239("FKN0_GOLAM", 0, 0, 0, 1))
								{
									iLocal_1599 = 1;
									iLocal_1332 = 1;
								}
							}
						}
						func_223(1, 0, 1, 1);
						break;
					
					case 1:
						if (iVar0 == 0)
						{
							if (iLocal_1475)
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_1366[0]))
								{
									if ((iLocal_1760 % 2) == 0)
									{
										sVar2 = "FKN0_B2AV1";
									}
									else
									{
										sVar2 = "FKN0_B2AV2";
									}
									if (func_239(sVar2, 0, 0, 0, 1))
									{
										iLocal_1332 = 2;
									}
								}
							}
						}
						func_223(1, 0, 1, 1);
						break;
					
					case 2:
						if (iVar0 == 0)
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_1366[0]))
							{
								if (iLocal_1478)
								{
									if (func_221())
									{
										iLocal_1478 = 0;
									}
								}
								else
								{
									if ((iLocal_1760 % 2) == 0)
									{
										sVar3 = "FKN0_MKCALL";
									}
									else
									{
										sVar3 = "FKN0_MKCALL2";
									}
									if (func_239(sVar3, 0, 0, 0, 1))
									{
										iLocal_1332 = 3;
									}
								}
							}
						}
						func_223(1, 0, 1, 1);
						break;
					
					case 3:
						if (iVar0 == 0)
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_1366[0]) && iLocal_1326 >= 3)
							{
								if ((iLocal_1760 % 2) == 0)
								{
									sVar4 = "FKN0_LACALL";
								}
								else
								{
									sVar4 = "FKN0_LACALL2";
								}
								if (func_239(sVar4, 0, 0, 0, 1))
								{
									RECORDING::_0x293220DA1B46CEBC(1.5f, 11f, 3);
									iLocal_1332 = 4;
								}
							}
						}
						func_223(1, 0, 1, 1);
						break;
					
					case 4:
						if (iVar0 == 0)
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_1366[0]))
							{
								if ((iLocal_1760 % 2) == 0)
								{
									sVar5 = "FKN0_AFCALL";
								}
								else
								{
									sVar5 = "FKN0_AFCALL2";
								}
								if (func_239(sVar5, 0, 0, 0, 1))
								{
									iLocal_1332 = 5;
								}
							}
						}
						func_223(!iLocal_1332 == 5, 0, 1, 1);
						break;
					
					case 5:
						if (iVar0 == 0)
						{
							if (!GlobalFunc_111())
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_1366[0]))
								{
									func_219();
									iLocal_1787 = MISC::GET_GAME_TIMER();
									iLocal_1765 = MISC::GET_GAME_TIMER() + 15000;
									GlobalFunc_10691(&uLocal_1846, "FKN0AUD", "FKN0_OPEN", 7, 0, 0, 0, 0);
									iLocal_1332 = 6;
								}
							}
						}
						func_223(0, 0, 1, 1);
						break;
					
					case 6:
						bVar6 = false;
						if (!bLocal_1673)
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_1765 || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								GlobalFunc_4935();
								bLocal_1673 = true;
							}
						}
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_1366[0]))
						{
							func_242("FKN0_STOP", -1, 15000, 25000, 1);
						}
						if (iVar0 == 0)
						{
							iLocal_1819 = -1;
							if (iLocal_1641)
							{
								AUDIO::DISTANT_COP_CAR_SIRENS(0);
								iLocal_1641 = 0;
							}
							if (MISC::GET_GAME_TIMER() >= iLocal_1787 + 22000)
							{
								PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
								PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
								PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
							}
							else
							{
								MISC::GET_GROUND_Z_FOR_3D_COORD(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_1366[0], 0f, -2f, 0f), &fVar7);
								if (ENTITY::GET_ENTITY_SPEED(uLocal_1366[0]) <= 0.5f && ENTITY::IS_ENTITY_UPRIGHT(uLocal_1366[0], 1119092736))
								{
									iLocal_1833 = MISC::GET_GAME_TIMER();
									bVar9 = true;
									Var10 = { ENTITY::GET_ENTITY_COORDS(Local_1158, 1) };
									iVar13 = 1;
									while (iVar13 <= 5)
									{
										if (bVar9)
										{
											Var14 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_1366[0], 0f, (-2f - (IntToFloat(iVar13) * 0.6f)), 0f) };
											MISC::GET_GROUND_Z_FOR_3D_COORD(Var14, &fVar8);
											fVar17 = (fVar8 - fVar7);
											if (fVar17 < 0f)
											{
												fVar17 = (fVar17 * -1f);
											}
											if (fVar17 > 0.5f)
											{
												bVar9 = false;
											}
											fVar7 = fVar8;
											if (fVar7 < (Var10.f_2 - 2f))
											{
												bVar9 = false;
											}
										}
										iVar13++;
									}
									switch (iLocal_1350)
									{
										case 0:
											Var21 = { ENTITY::GET_ENTITY_COORDS(uLocal_1366[0], 1) };
											Var18 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_1366[0], 0f, -5f, 0f) };
											Var18.f_2 = Var18.f_2;
											iLocal_1696 = 1;
											uLocal_2041 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var21, Var18, 0.5f, 1, uLocal_1366[0], 4);
											iLocal_1350 = 1;
											break;
										
										case 1:
											iVar24 = SHAPETEST::GET_SHAPE_TEST_RESULT(uLocal_2041, &iVar25, &uVar26, &uVar29, &uVar32);
											if (iVar24 == 2)
											{
												if (iVar25 == 0)
												{
													iLocal_1696 = 0;
													iLocal_1350 = 0;
												}
												else
												{
													iLocal_1696 = 1;
													iLocal_1350 = 0;
												}
											}
											else if (iVar24 == 0)
											{
												iLocal_1696 = 1;
												iLocal_1350 = 0;
											}
											break;
									}
									if ((iLocal_1696 || !bVar9) || ENTITY::IS_ENTITY_IN_WATER(uLocal_1366[0]))
									{
										fLocal_1751 = (fLocal_1751 + (1f * SYSTEM::TIMESTEP()));
										if (fLocal_1751 >= 1f)
										{
											bVar6 = true;
										}
									}
									else
									{
										fLocal_1751 = 0f;
									}
									if ((((((PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_1366[0]) && iLocal_1326 >= 5) && func_203()) && ENTITY::IS_ENTITY_UPRIGHT(uLocal_1366[0], 10f)) && bVar9) && !iLocal_1696) && !ENTITY::IS_ENTITY_IN_WATER(uLocal_1366[0]))
									{
										if (!GlobalFunc_111() || !bLocal_1673)
										{
											if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
											{
												PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
												PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
											}
											iLocal_1332 = 7;
											HUD::CLEAR_HELP(1);
											iLocal_1471 = 1;
										}
									}
								}
								else
								{
									iLocal_1696 = 1;
									fLocal_1751 = 0f;
									if (!iLocal_1589)
									{
										PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
										iLocal_1787 = MISC::GET_GAME_TIMER();
										iLocal_1765 = MISC::GET_GAME_TIMER() + 11000;
										iLocal_1589 = 1;
									}
									else if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_1366[0]))
									{
										if (MISC::GET_GAME_TIMER() >= iLocal_1833 + 300)
										{
											func_201("FC_LETOUT", 1, !bLocal_1673, 100);
										}
									}
								}
							}
						}
						else
						{
							if (!iLocal_1641)
							{
								AUDIO::DISTANT_COP_CAR_SIRENS(1);
								iLocal_1641 = 1;
							}
							if (!iLocal_1700)
							{
								AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_FRANLIN_0_KIDNAP", 0f);
								iLocal_1700 = 1;
							}
							iLocal_1696 = 1;
							iLocal_1589 = 0;
							iLocal_1787 = MISC::GET_GAME_TIMER();
						}
						if (bVar6)
						{
							if (!GlobalFunc_74("FC_POSHLP"))
							{
								GlobalFunc_Display_Help_Text("FC_POSHLP");
							}
						}
						else if (GlobalFunc_74("FC_POSHLP"))
						{
							HUD::CLEAR_HELP(1);
						}
						if (!iLocal_1471)
						{
							func_223(0, 0, 1, 1);
						}
						break;
					
					case 7:
						if (!bLocal_1655)
						{
							PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_1366[0], func_198(4), "InCar_GetOutofBack_Speedo", 3))
							{
								if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_1366[0], func_198(4), "InCar_GetOutofBack_Speedo") >= 0.33f)
								{
									ENTITY::STOP_ENTITY_ANIM(uLocal_1366[0], "InCar_GetOutofBack_Speedo", func_198(4), -1000f);
									VEHICLE::SET_VEHICLE_DOOR_SHUT(uLocal_1366[0], 2, 1);
									VEHICLE::SET_VEHICLE_DOOR_SHUT(uLocal_1366[0], 3, 1);
									RECORDING::_0x293220DA1B46CEBC(8f, 8f, 4);
									bLocal_1655 = true;
								}
							}
							else
							{
								bLocal_1655 = true;
							}
						}
						if (!iLocal_1628)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_1385))
							{
								if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1385, 100f, 100f, 100f, 0, 0, 0))
								{
									ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_1385);
									func_197(20);
									iLocal_1628 = 1;
								}
							}
						}
						if (!iLocal_1629)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_1158))
							{
								if (!PED::IS_PED_INJURED(Local_1158))
								{
									if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1158, 150f, 150f, 150f, 0, 0, 0))
									{
										if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_1158))
										{
											ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_1158);
											func_197(2);
											iLocal_1629 = 1;
										}
									}
								}
							}
						}
						if (iLocal_1346 != 3)
						{
							if (iLocal_1346 > 0)
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_198(4), "Take_off_Bandana", 3))
								{
									fVar33 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), func_198(4), "Take_off_Bandana");
								}
								else if (MISC::GET_GAME_TIMER() >= iLocal_1811 + 500)
								{
									func_80(0);
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_1386))
									{
										OBJECT::DELETE_OBJECT(&iLocal_1386);
									}
									iLocal_1346 = 3;
								}
							}
							switch (iLocal_1346)
							{
								case 0:
									bVar34 = false;
									if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_1366[0]))
									{
										if (!PED::IS_PED_INJURED(Local_1158))
										{
											if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_79(4), 120f, 120f, 120f, 0, 0, 0) || !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1158, 75f, 75f, 75f, 0, 0, 0))
											{
												bVar34 = true;
											}
										}
										else
										{
											bVar34 = true;
										}
										if (bVar34)
										{
											if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 4)
											{
												TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_198(4), "Take_off_Bandana", 8f, -8f, -1, 48, 0, 0, 0, 0);
												PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
												iLocal_1386 = OBJECT::CREATE_OBJECT(func_72(21), 0f, 1f, 2f, 1, 1, 0);
												ENTITY::SET_ENTITY_VISIBLE(iLocal_1386, 0);
												ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_1386, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
												ENTITY::PLAY_ENTITY_ANIM(iLocal_1386, "take_off_bandana_bandana", func_198(4), 8f, 0, 0, 0, 0f, 0);
												iLocal_1811 = MISC::GET_GAME_TIMER();
												iLocal_1346 = 1;
											}
											else
											{
												func_80(0);
												iLocal_1346 = 3;
											}
										}
									}
									break;
								
								case 1:
									if (fVar33 >= 0.2f)
									{
										func_80(0);
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_1386))
										{
											ENTITY::SET_ENTITY_VISIBLE(iLocal_1386, 1);
										}
										iLocal_1346 = 2;
									}
									break;
								
								case 2:
									if (fVar33 >= 0.95f)
									{
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_1386))
										{
											OBJECT::DELETE_OBJECT(&iLocal_1386);
										}
										iLocal_1346 = 3;
									}
									break;
							}
						}
						else
						{
							func_71("fra_0_mcs_5_p1", func_79(4), 100f, 120f);
							if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
							{
								if (!PED::IS_PED_INJURED(iLocal_1351))
								{
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Lamar", iLocal_1351, 0);
								}
								if (!PED::IS_PED_INJURED(iLocal_1352))
								{
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Chop", iLocal_1352, 0);
								}
							}
						}
						if (!bLocal_1470)
						{
							if (iVar0 == 0 && !bLocal_1474)
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_1366[0]))
								{
									if (!bLocal_1477)
									{
										if (!iLocal_1611)
										{
											if (!PED::IS_PED_INJURED(Local_1158))
											{
												if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1158, 30f, 30f, 4f, 0, 1, 0))
												{
													iLocal_1611 = func_239("FKN0_DSHOUT", 0, 0, 0, 1);
												}
												else
												{
													iLocal_1611 = 1;
												}
											}
											else
											{
												iLocal_1611 = 1;
											}
										}
										else if (!iLocal_1613)
										{
											if (!PED::IS_PED_INJURED(Local_1158))
											{
												if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1158, 30f, 30f, 4f, 0, 1, 0))
												{
													iLocal_1613 = func_239("FKN0_FSHOUT", 0, 0, 0, 1);
												}
												else
												{
													iLocal_1613 = 1;
												}
											}
											else
											{
												iLocal_1613 = 1;
											}
										}
										else if (!iLocal_1612)
										{
											if (!PED::IS_PED_INJURED(Local_1158))
											{
												if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1158, 30f, 30f, 4f, 0, 1, 0))
												{
													iLocal_1612 = func_239("FKN0_LAMFU", 0, 0, 0, 1);
												}
												else
												{
													iLocal_1612 = 1;
												}
											}
											else
											{
												iLocal_1612 = 1;
											}
										}
										else if (!iLocal_1599)
										{
											iLocal_1599 = func_239("FKN0_GOREC", 0, 0, 0, 1);
										}
										else if (iLocal_1475)
										{
											if (!bLocal_1474)
											{
												bLocal_1477 = func_239("FKN0_B3AV1", 0, 0, 0, 1);
											}
										}
									}
									else if (!iLocal_1624)
									{
										if (iLocal_1478)
										{
											if (func_221())
											{
												iLocal_1478 = 0;
											}
										}
										if (!GlobalFunc_230(2))
										{
											if (GlobalFunc_111())
											{
												Var35 = { GlobalFunc_2209() };
												if (MISC::ARE_STRINGS_EQUAL(&Var35, "FKN0_B3AV1_12"))
												{
													GlobalFunc_4935();
													iLocal_1624 = 1;
												}
											}
										}
									}
								}
							}
						}
						if (!bLocal_1474)
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_1366[0]))
							{
								if (func_203())
								{
									if (iVar0 == 0)
									{
										if (bLocal_1655)
										{
											if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_79(4), Global_18, 1, 1, 0))
											{
												if (GlobalFunc_552(1, 0, 1))
												{
													GlobalFunc_3001();
													func_219();
													GlobalFunc_4935();
													iLocal_1763 = MISC::GET_GAME_TIMER();
													bLocal_1474 = true;
												}
											}
										}
									}
								}
							}
						}
						else
						{
							GlobalFunc_3001();
							if (GlobalFunc_530(uLocal_1366[0], 10f, 1, 1056964608, 0, 1))
							{
								if (MISC::GET_GAME_TIMER() >= iLocal_1763 + 1000)
								{
									if (!GlobalFunc_111())
									{
										if (func_203())
										{
											if (iLocal_1109 > 0)
											{
												if (GlobalFunc_Has_Cutscene_Loaded())
												{
													iLocal_1471 = 1;
												}
											}
										}
									}
								}
							}
						}
						func_64();
						if (!bLocal_1474)
						{
							func_223(1, 0, 1, 1);
						}
						break;
				}
				if (!iLocal_1601)
				{
					if (!PED::IS_PED_INJURED(Local_1158))
					{
						if (!ENTITY::IS_ENTITY_ATTACHED(Local_1158))
						{
							Var41 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_198(5), "CHOP_GROWL_TO_SIT", 0f, 0f, 0f, 0f, 0f, 0f, 0f, 2) + Vector(206f, 0f, 0f) };
							func_63(iLocal_1352, uLocal_1366[0], Var41.f_2, 0, 0, 0, 0, 0, 0);
							ENTITY::SET_ENTITY_PROOFS(iLocal_1352, 0, 1, 1, 0, 0, 0, 0, 1);
							TASK::TASK_PLAY_ANIM(iLocal_1352, func_198(5), "CHOP_GROWL_TO_SIT", 8f, -8f, -1, 4098, 0, 0, 0, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_1352, 0, 0);
							iLocal_1601 = 1;
						}
					}
				}
				else if (!iLocal_1602)
				{
					if (!PED::IS_PED_INJURED(iLocal_1352))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1352, func_198(5), "CHOP_GROWL_TO_SIT", 3))
						{
							fVar44 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_1352, func_198(5), "CHOP_GROWL_TO_SIT");
							if (fVar44 >= 0.98f)
							{
								TASK::TASK_PLAY_ANIM(iLocal_1352, func_198(5), "CHOP_SIT_LOOP", 8f, -8f, -1, 4097, 0, 0, 0, 0);
								iLocal_1602 = 1;
							}
							else if (fVar44 >= 0f)
							{
								Var45 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_198(5), "CHOP_GROWL_TO_SIT", 0f, 0f, 0f, 0f, 0f, 0f, fVar44, 2) + Vector(206f, 0f, 0f) };
								func_63(iLocal_1352, uLocal_1366[0], Var45.f_2, 0, 0, 0, 0, 0, 0);
								ENTITY::SET_ENTITY_PROOFS(iLocal_1352, 0, 1, 1, 0, 0, 0, 0, 1);
							}
						}
					}
				}
				else
				{
					func_61(iLocal_1352, uLocal_1366[0], &uLocal_1345, &uLocal_1750, &uLocal_1821, &uLocal_1822, 0);
				}
				if (!iLocal_1598)
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_79(19), 150f, 150f, 150f, 0, 0, 0))
					{
						func_60();
					}
				}
			}
		}
		else
		{
			if (!PED::IS_PED_INJURED(iLocal_1352))
			{
				PED::SET_PED_MOVE_RATE_OVERRIDE(iLocal_1352, 1f);
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_1352))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_1352, 2f, 0);
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_1351))
			{
				PED::SET_PED_MOVE_RATE_OVERRIDE(iLocal_1351, 1.15f);
			}
			if (MISC::GET_GAME_TIMER() >= iLocal_1810 + 3200)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1351))
				{
					PED::DELETE_PED(&iLocal_1351);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1352))
				{
					PED::DELETE_PED(&iLocal_1352);
				}
				func_56();
			}
		}
	}
	else if (!iLocal_1610)
	{
		func_47();
	}
	else
	{
		func_6();
	}
	if (!PED::IS_PED_INJURED(iLocal_1351) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iLocal_1326)
		{
			case 0:
				iLocal_1385 = OBJECT::CREATE_OBJECT(func_72(20), 0f, 1f, 2f, 1, 1, 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_1385, iLocal_1351, PED::GET_PED_BONE_INDEX(iLocal_1351, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1351, func_198(4), "InCar_PhoneIdle_Lem", 3))
				{
					TASK::TASK_PLAY_ANIM(iLocal_1351, func_198(4), "InCar_PhoneIdle_Lem", 8f, -8f, -1, 1, 0, 0, 0, 0);
				}
				iLocal_1326 = 1;
				break;
			
			case 1:
				GlobalFunc_556(&uLocal_1348, 0, 0);
				if (iLocal_1332 >= 3)
				{
					TASK::TASK_PLAY_ANIM(iLocal_1351, func_198(4), "Incar_Phonetalk_enter_Lem", 8f, -8f, -1, 2, 0, 0, 0, 0);
					iLocal_1326 = 2;
				}
				break;
			
			case 2:
				GlobalFunc_556(&uLocal_1348, 0, 3);
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1351, func_198(4), "Incar_Phonetalk_enter_Lem", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_1351, func_198(4), "Incar_Phonetalk_enter_Lem") >= 0.98f)
					{
						TASK::TASK_PLAY_ANIM(iLocal_1351, func_198(4), "Incar_Phonetalk_loop_Lem", 8f, -8f, -1, 1, 0, 0, 0, 0);
						iLocal_1326 = 3;
					}
				}
				break;
			
			case 3:
				GlobalFunc_556(&uLocal_1348, 0, 3);
				if (iLocal_1332 >= 5)
				{
					TASK::TASK_PLAY_ANIM(iLocal_1351, func_198(4), "Incar_Phonetalk_exit_Lem", 8f, -8f, -1, 2, 0, 0, 0, 0);
					iLocal_1326 = 4;
				}
				break;
			
			case 4:
				GlobalFunc_556(&uLocal_1348, 0, 0);
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1351, func_198(4), "Incar_Phonetalk_exit_Lem", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_1351, func_198(4), "Incar_Phonetalk_exit_Lem") >= 0.98f)
					{
						TASK::TASK_PLAY_ANIM(iLocal_1351, func_198(4), "InCar_PhoneIdle_Lem", 8f, -8f, -1, 1, 0, 0, 0, 0);
						iLocal_1326 = 5;
					}
				}
				break;
			
			case 5:
				GlobalFunc_556(&uLocal_1348, 0, 0);
				if (iLocal_1332 == 7)
				{
					if (iLocal_1644 && iLocal_1110 == 1)
					{
						TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
						TASK::TASK_PLAY_ANIM(iLocal_1351, func_198(4), "InCar_PhoneSnatch_Lem", 8f, -8f, -1, 0, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_198(4), "InCar_PhoneSnatch_Fra", 8f, -8f, -1, 32, 0, 0, 0, 0);
						iLocal_1326 = 6;
					}
				}
				break;
			
			case 6:
				GlobalFunc_556(&uLocal_1348, 0, 0);
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_198(4), "InCar_PhoneSnatch_Fra", 3))
				{
					iLocal_1326 = 7;
				}
				else if (!iLocal_1600)
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), func_198(4), "InCar_PhoneSnatch_Fra") >= 0.47f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_1385))
						{
							ENTITY::DETACH_ENTITY(iLocal_1385, 1, 1);
							ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(iLocal_1385, 1, 3f, 0.5f, 0f, 0, 1, 1, 0);
							iLocal_1600 = 1;
						}
					}
				}
				break;
			
			case 7:
				GlobalFunc_556(&uLocal_1348, 0, 0);
				break;
			}
	}
}


void func_6()//Position - 0x14C0
{
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	switch (iLocal_1110)
	{
		case 0:
			iLocal_1762 = MISC::GET_GAME_TIMER();
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Franklin", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_1351))
			{
				TASK::TASK_CLEAR_LOOK_AT(iLocal_1351);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1351, "Lamar", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_1352))
			{
				ENTITY::DETACH_ENTITY(iLocal_1352, 1, 1);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1352, "Chop", 0, 0, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_1366[0], "Kidnapping_van", 0, 0, 0);
			}
			CUTSCENE::START_CUTSCENE(0);
			RECORDING::_0x48621C9FCA3EBD28(4);
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
			iLocal_1110 = 1;
			break;
		
		case 1:
			if (!iLocal_1473)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					func_46();
					MISC::CLEAR_AREA(-214.28f, -1488.487f, 30.23007f, 8.7f, 1, 0, 0, 0);
					MISC::CLEAR_AREA_OF_PROJECTILES(-217.5089f, -1498.443f, 30.23968f, 15f, 0);
					FIRE::STOP_FIRE_IN_RANGE(-217.5089f, -1498.443f, 30.23968f, 15f);
					GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(-217.5089f, -1498.443f, 30.23968f, 15f);
					if (ENTITY::DOES_ENTITY_EXIST(Local_1158))
					{
						PED::DELETE_PED(&Local_1158);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0))
					{
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(uLocal_1366[0], 1, 0, 0f);
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(uLocal_1366[0], 3, 0, 0f);
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(uLocal_1366[0], 2, 0, 0f);
					}
					GlobalFunc_2882(uLocal_1366[0]);
					func_80(0);
					func_44(0);
					func_42(8);
					if (ENTITY::DOES_ENTITY_EXIST(Local_1158))
					{
						PED::DELETE_PED(&Local_1158);
					}
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					iLocal_1473 = 1;
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lamar", 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_1351))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_1351, -220.9665f, -1506.377f, 30.44023f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_1351, 152.7f);
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_1351, "hood9", 5, 0, -1);
					PED::FORCE_PED_MOTION_STATE(iLocal_1351, -668482597, true, 1, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Chop", 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_1352))
				{
					ENTITY::SET_ENTITY_PROOFS(iLocal_1352, 0, 0, 0, 0, 0, 0, 0, 1);
					ENTITY::SET_ENTITY_COORDS(iLocal_1352, -219.7466f, -1505.899f, 30.45473f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_1352, 144f);
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_1352, "hood10", 5, 0, -1);
					PED::FORCE_PED_MOTION_STATE(iLocal_1352, -530524, true, 1, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_1366[0], -1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Kidnapping_van", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_1366[0]);
					func_41();
				}
				iLocal_1810 = MISC::GET_GAME_TIMER();
				bLocal_1617 = true;
			}
			else if (!bLocal_1617)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0))
				{
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				RECORDING::_0x81CBAE94390F9F89();
				func_7(0, 1, -1, 1, 1, 1, 1, 1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
			}
			break;
		
		case 2:
			break;
	}
}

void func_7(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7)//Position - 0x17F8
{
	int iVar0;
	
	if (bParam4)
	{
		GlobalFunc_7206(1, 1, 1, 0);
	}
	if (bParam0)
	{
		func_23();
		GlobalFunc_8380(1, 1, iParam7, 0);
		HUD::DISPLAY_RADAR(0);
		HUD::DISPLAY_HUD(0);
		iLocal_1761 = MISC::GET_GAME_TIMER();
	}
	else
	{
		GlobalFunc_8380(0, 1, iParam7, 0);
		if (bParam1)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			HUD::DISPLAY_RADAR(1);
			HUD::DISPLAY_HUD(1);
			GlobalFunc_7632(0);
			if (iParam2 < 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			if (bParam6)
			{
				CAM::RENDER_SCRIPT_CAMS(false, iVar0, iParam2, 1, 0, 0);
			}
			if (CAM::DOES_CAM_EXIST(uLocal_1395))
			{
				CAM::DESTROY_CAM(uLocal_1395, 0);
			}
			if (CAM::DOES_CAM_EXIST(uLocal_1396))
			{
				CAM::DESTROY_CAM(uLocal_1396, 0);
			}
			GlobalFunc_2866(&uLocal_1393);
			GlobalFunc_2866(&uLocal_1394);
			if (bParam3)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
		}
		iLocal_1471 = 0;
		bLocal_1472 = false;
		iLocal_1473 = 0;
		bLocal_1474 = false;
		iLocal_1110 = 0;
		if (bParam5)
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
		}
	}
}
















void func_23()//Position - 0x1CF7
{
	GlobalFunc_7632(1);
	func_26(&Local_1184, &Local_1111, 0, 1, 1, 1, 0, 3000);
	PAD::_0xCB0360EFEFB2580D(0);
	func_42(9);
	GlobalFunc_571(0, -1);
	func_24(1);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
}

void func_24(bool bParam0)//Position - 0x1D36
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_1844))
	{
		if (bParam0)
		{
			GRAPHICS::REMOVE_PARTICLE_FX(uLocal_1844, 0);
		}
		else
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_1844, 0);
		}
	}
	if (bParam0)
	{
		GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Local_1184.f_13, 2f);
	}
}


void func_26(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7)//Position - 0x1E0B
{
	func_28(iParam0, iParam1);
	func_27(iParam0);
	if (bParam2)
	{
		iParam1->f_7 = 4;
	}
	if (bParam3)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	if (bParam4)
	{
		HUD::DISPLAY_HUD(1);
		HUD::DISPLAY_RADAR(1);
	}
	if (bParam5)
	{
		CAM::RENDER_SCRIPT_CAMS(false, bParam6, iParam7, 1, 0, 0);
		if (bParam6)
		{
			iParam0->f_5 = (MISC::GET_GAME_TIMER() + iParam7);
		}
	}
	*iParam0 = 0;
}

void func_27(int iParam0)//Position - 0x1E6E
{
	switch (iParam0->f_2)
	{
		case 1:
			if (((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1056466932) != 7 || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1689270312) != 7) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -875674219) != 7) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1227113341) != 7)
			{
				if (((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1056466932) == 0 || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1689270312) == 0) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -875674219) == 0) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1227113341) == 0)
				{
					iParam0->f_9 = 1;
				}
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			break;
	}
}

void func_28(int iParam0, var uParam1)//Position - 0x1F37
{
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChopVision"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("ChopVision");
	}
	func_31(iParam0, uParam1, 0);
	GlobalFunc_73(0);
	if (iParam0->f_12 != -1)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(iParam0->f_12))
		{
			AUDIO::STOP_SOUND(iParam0->f_12);
		}
	}
	func_30(iParam0, 0);
	PAD::_0xF239400E16C23E08(0, -1);
	if (!PED::IS_PED_INJURED(iParam0->f_3))
	{
		AUDIO::STOP_PED_SPEAKING(iParam0->f_3, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_3))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0->f_3) || !ENTITY::IS_ENTITY_DEAD(iParam0->f_3))
		{
			ENTITY::SET_ENTITY_VISIBLE(iParam0->f_3, 1);
		}
	}
	switch (iParam0->f_2)
	{
		case 1:
			GlobalFunc_2242();
			break;
	}
}


void func_30(int iParam0, bool bParam1)//Position - 0x1FF2
{
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CHOP_CAM_A_01");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CHOP_CAM_A_02");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CHOP_CAM_B_01");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CHOP_CAM_B_02");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CHOP_CAM_C_01");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CHOP_CAM_C_02");
	iParam0->f_10 = 0;
	if (bParam1)
	{
		if (iParam0->f_12 != -1)
		{
			AUDIO::RELEASE_SOUND_ID(iParam0->f_12);
			iParam0->f_12 = -1;
		}
	}
}

void func_31(int iParam0, int iParam1, bool bParam2)//Position - 0x2049
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam2)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			iVar1 = iVar0;
			if (iVar1 != iParam0->f_1)
			{
				if (GlobalFunc_6809(iVar1))
				{
					GlobalFunc_2872(iParam1, iVar1, 2);
				}
			}
			else
			{
				GlobalFunc_2872(iParam1, iVar1, 3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			iVar2 = iVar0;
			GlobalFunc_2872(iParam1, iVar2, 0);
			iVar0++;
		}
	}
	if (iParam0->f_8)
	{
		GlobalFunc_2872(iParam1, 2, 0);
	}
}










void func_41()//Position - 0x2275
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0))
	{
		VEHICLE::SET_VEHICLE_DOOR_SHUT(uLocal_1366[0], 1, 1);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(uLocal_1366[0], 0, 1);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(uLocal_1366[0], 2, 1);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(uLocal_1366[0], 3, 1);
	}
}

void func_42(int iParam0)//Position - 0x22BB
{
	AUDIO::STOP_AUDIO_SCENE(func_43(iParam0));
}

char* func_43(int iParam0)//Position - 0x22CD
{
	switch (iParam0)
	{
		case 0:
			return "FRANKLIN_0_WALK_TO_VAN";
			break;
		
		case 1:
			return "FRANKLIN_0_DRIVE_TO_VINEWOOD";
			break;
		
		case 2:
			return "FRANKLIN_0_CAR_CHASE";
			break;
		
		case 3:
			return "FRANKLIN_0_FOOT_CHASE_START";
			break;
		
		case 4:
			return "FRANKLIN_0_BREAK_THROUGH_FENCE";
			break;
		
		case 5:
			return "FRANKLIN_0_D_ESCAPES";
			break;
		
		case 6:
			return "FRANKLIN_0_SEARCH_BOXCARS";
			break;
		
		case 7:
			return "FRANKLIN_0_DRIVE_TO_LAMARS";
			break;
		
		case 8:
			return "FRANKLIN_0_TAKE_LAMAR_BACK";
			break;
		
		case 9:
			return "FRANKLIN_0_CHOP_CAM";
			break;
		
		case 10:
			return "FRANKLIN_0_FOCUS_ON_BIKER";
			break;
	}
	return "";
}

void func_44(bool bParam0)//Position - 0x2390
{
	if (!PED::IS_PED_INJURED(iLocal_1351))
	{
		if (bParam0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iLocal_1351, 8, 1, 0, 0);
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iLocal_1351, 8, 0, 0, 0);
		}
	}
}


void func_46()//Position - 0x243F
{
	GlobalFunc_7206(1, 1, 1, 0);
	func_23();
	GlobalFunc_8380(1, 1, 1, 0);
}

void func_47()//Position - 0x245B
{
	bool bVar0;
	struct<3> Var1;
	bool bVar4;
	bool bVar5;
	float fVar6;
	
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	switch (iLocal_1110)
	{
		case 0:
			if (!iLocal_1644)
			{
				GlobalFunc_7206(0, 1, 0, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				iLocal_1823 = MISC::GET_GAME_TIMER();
				iLocal_1644 = 1;
			}
			else if (!iLocal_1609)
			{
				bVar0 = false;
				if (!bLocal_1673)
				{
					if (AUDIO::GET_IS_PRELOADED_CONVERSATION_READY())
					{
						bVar0 = true;
					}
				}
				if (bVar0)
				{
					GlobalFunc_2207();
					iLocal_1823 = MISC::GET_GAME_TIMER();
					iLocal_1609 = 1;
				}
				else if (func_239("FKN0_OPEN", 0, 0, 0, 1))
				{
					iLocal_1823 = MISC::GET_GAME_TIMER();
					iLocal_1609 = 1;
				}
			}
			else
			{
				if (AUDIO::IS_SCRIPTED_CONVERSATION_LOADED())
				{
				}
				if ((MISC::GET_GAME_TIMER() >= iLocal_1823 + 1800 && AUDIO::IS_SCRIPTED_CONVERSATION_LOADED()) || MISC::GET_GAME_TIMER() >= iLocal_1823 + 5000)
				{
					func_7(1, 1, -1, 1, 0, 1, 1, 1);
					func_54();
					iLocal_1802 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0))
					{
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1802, uLocal_1366[0], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uLocal_1366[0], "seat_dside_f"));
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_1395, iLocal_1802, "incar_phonesnatch_cam", func_198(4));
					}
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_1802, 0);
					PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(PLAYER::PLAYER_PED_ID(), 0);
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_1366[0], 0f, -3.1f, -0.75f) };
					MISC::CLEAR_AREA(Var1, 2.5f, 1, 0, 0, 0);
					MISC::CLEAR_AREA_OF_PROJECTILES(Var1, 20f, 0);
					FIRE::STOP_FIRE_IN_RANGE(Var1, 8f);
					GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Var1, 8f);
					if (!PED::IS_PED_INJURED(iLocal_1351))
					{
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1351, -1, 2049, 2);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0) && !PED::IS_PED_INJURED(Local_1158))
					{
						VEHICLE::SET_VEHICLE_INTERIORLIGHT(uLocal_1366[0], 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_1366[0]);
						MISC::CLEAR_AREA(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_1366[0], 0f, 0f, -8f), 7f, 1, 0, 0, 0);
						uLocal_1796 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_1366[0], 0f, 0f, -10f), 10f, 0f, 0);
						GlobalFunc_2882(uLocal_1366[0]);
					}
					iLocal_1702 = 0;
					iLocal_1762 = MISC::GET_GAME_TIMER();
					iLocal_1110 = 1;
				}
			}
			break;
		
		case 1:
			func_243(3);
			if (!PED::IS_PED_INJURED(Local_1158) && VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0))
			{
				switch (iLocal_1156)
				{
					case 0:
						bVar4 = false;
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1802))
						{
							bVar4 = true;
						}
						else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1802) >= 0.98f)
						{
							bVar4 = true;
						}
						if (bVar4)
						{
							TASK::TASK_CLEAR_LOOK_AT(Local_1158);
							ENTITY::SET_ENTITY_COORDS(Local_1158, ENTITY::GET_ENTITY_COORDS(Local_1158, 1), 1, 0, 0, 1);
							Local_1158.f_9 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(Local_1158.f_9, uLocal_1366[0], 0);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_1158, Local_1158.f_9, func_198(4), "InCar_GetOutofBack_Ballas", 1000f, -8f, 0, 0, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(Local_1158.f_9, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1158, 0, 0);
							TASK::TASK_VEHICLE_PLAY_ANIM(uLocal_1366[0], func_198(4), "InCar_GetOutofBack_Speedo");
							ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(uLocal_1366[0]);
							iLocal_1802 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1802, uLocal_1366[0], 0);
							CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_1395, iLocal_1802, "Incar_GetOutofBack_CAM", func_198(4));
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_1802, 0);
							iLocal_1824 = MISC::GET_GAME_TIMER();
							iLocal_1156 = 1;
						}
						break;
					
					case 1:
						func_64();
						break;
					}
			}
			if (iLocal_1156 == 1)
			{
				bVar5 = false;
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1802))
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_1824 + 100)
					{
						bVar5 = true;
					}
				}
				else
				{
					fVar6 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1802);
					if (!iLocal_1702)
					{
						if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
						{
							if (fVar6 >= 0.276f)
							{
								GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
								iLocal_1702 = 1;
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0))
					{
						if (!iLocal_1646)
						{
							if (fVar6 >= 0.25f)
							{
								iLocal_1646 = 1;
							}
						}
						if (!iLocal_1647)
						{
							if (fVar6 >= 0.21f)
							{
								iLocal_1647 = 1;
							}
						}
					}
					if (fVar6 >= 0.3f)
					{
						bVar5 = true;
					}
				}
				if (bVar5)
				{
					iLocal_1110 = 2;
				}
			}
			func_50();
			break;
		
		case 2:
			func_42(7);
			func_49(8);
			func_245(0);
			VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(uLocal_1796);
			PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
			if (!PED::IS_PED_INJURED(iLocal_1351))
			{
				TASK::CLEAR_PED_TASKS(iLocal_1351);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1351, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1351, 3, 0);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0))
			{
				VEHICLE::SET_VEHICLE_INTERIORLIGHT(uLocal_1366[0], 0);
				if (!PED::IS_PED_INJURED(Local_1158))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_1158) && !PED::IS_PED_IN_ANY_VEHICLE(Local_1158, 0))
					{
						ENTITY::DETACH_ENTITY(Local_1158, 1, 1);
					}
					if (bLocal_1472)
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_1158);
						ENTITY::SET_ENTITY_COORDS(Local_1158, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_1366[0], 0f, -3.1f, -0.75f), 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_1158, (ENTITY::GET_ENTITY_HEADING(uLocal_1366[0]) - 180f));
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_1366[0], func_198(4), "InCar_GetOutofBack_Speedo", 3))
						{
							ENTITY::STOP_ENTITY_ANIM(uLocal_1366[0], "InCar_GetOutofBack_Speedo", func_198(4), -1000f);
							VEHICLE::SET_VEHICLE_DOOR_SHUT(uLocal_1366[0], 2, 1);
							VEHICLE::SET_VEHICLE_DOOR_SHUT(uLocal_1366[0], 3, 1);
						}
					}
					PED::FORCE_PED_MOTION_STATE(Local_1158, -530524, true, 1, 0);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_1158, 2f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_1158, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_1366[0], 0f, -12f, 0.4f), 2f, 20000, 0.25f, 0, 40000f);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1158, -1033021910);
					iLocal_1809 = MISC::GET_GAME_TIMER() + 6000;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1385))
			{
			}
			iLocal_1326 = 7;
			func_219();
			if (!PED::IS_PED_INJURED(Local_1158))
			{
			}
			iLocal_1475 = 0;
			iLocal_1599 = 0;
			iLocal_1764 = 2;
			iLocal_1476 = 1;
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			if (bLocal_1472)
			{
				func_7(0, 1, -1, 1, 1, 1, 1, 1);
			}
			else
			{
				func_48(0f, 3, 1);
			}
			iLocal_1610 = 1;
			iLocal_1471 = 0;
			break;
	}
}

void func_48(int iParam0, int iParam1, bool bParam2)//Position - 0x2A73
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	GlobalFunc_7632(0);
	if (bParam2)
	{
		CAM::_SET_GAMEPLAY_CAM_VEHICLE_CAMERA("SPEEDO");
		CAM::_0x59424BD75174C9B1();
	}
	CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, iParam0, iParam1, 0);
	GlobalFunc_8380(0, 1, 1, 0);
	iLocal_1471 = 0;
	bLocal_1472 = false;
	iLocal_1473 = 0;
	bLocal_1474 = false;
	iLocal_1110 = 0;
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (CAM::DOES_CAM_EXIST(uLocal_1395))
		{
			CAM::DESTROY_CAM(uLocal_1395, 0);
		}
		CAM::DO_SCREEN_FADE_IN(800);
	}
}

bool func_49(int iParam0)//Position - 0x2AEB
{
	return AUDIO::START_AUDIO_SCENE(func_43(iParam0));
}

void func_50()//Position - 0x2AFD
{
	if (GlobalFunc_75() && MISC::GET_GAME_TIMER() >= iLocal_1761 + 1000)
	{
		CAM::DO_SCREEN_FADE_OUT(800);
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_6685(0);
		GlobalFunc_4956();
		bLocal_1472 = true;
		iLocal_1110 = 2;
	}
}




void func_54()//Position - 0x2BA7
{
	if (CAM::DOES_CAM_EXIST(uLocal_1395))
	{
		CAM::DESTROY_CAM(uLocal_1395, 0);
	}
	uLocal_1395 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
}


void func_56()//Position - 0x2BE9
{
	GlobalFunc_5103(0, 0);
	func_954();
}




void func_60()//Position - 0x2D44
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iLocal_1355)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1355[iVar0]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_1355[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_1369[iVar0]))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uLocal_1369[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_1377[iVar0]))
		{
			VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&(uLocal_1377[iVar0]), 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1204[iVar0 /*5*/]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1204[iVar0 /*5*/]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1354))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_1354);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_1235[iVar0 /*12*/].f_3[iVar1 /*4*/]))
			{
				OBJECT::DELETE_OBJECT(&(Local_1235[iVar0 /*12*/].f_3[iVar1 /*4*/]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_1235[iVar0 /*12*/].f_3[iVar1 /*4*/].f_1))
			{
				OBJECT::DELETE_OBJECT(&(Local_1235[iVar0 /*12*/].f_3[iVar1 /*4*/].f_1));
			}
			iVar1++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_1235[iVar0 /*12*/]))
		{
			OBJECT::DELETE_OBJECT(&(Local_1235[iVar0 /*12*/]));
		}
		iVar0++;
	}
	iLocal_1598 = 1;
}

void func_61(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6)//Position - 0x2E9B
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	int iVar8;
	char* sVar9;
	
	if (!PED::IS_PED_INJURED(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
		Var0 = { ENTITY::GET_ENTITY_ROTATION_VELOCITY(iParam1) };
		Var3 = { ENTITY::GET_ENTITY_SPEED_VECTOR(iParam1, 1) };
		fVar6 = ENTITY::GET_ENTITY_SPEED(iParam1);
		fVar7 = (Var3.f_1 - *uParam3);
		fVar7 = (fVar7 / MISC::GET_FRAME_TIME());
		if (Var3.f_1 < 0f)
		{
			Var0.f_2 = (Var0.f_2 * -1f);
		}
		if (Var0.f_2 < -0.5f)
		{
			if (fVar6 >= 6.4f)
			{
				iVar8 = 3;
			}
		}
		else if (Var0.f_2 > 0.5f)
		{
			if (fVar6 >= 6.4f)
			{
				iVar8 = 4;
			}
		}
		else if (fVar7 > 2f)
		{
			iVar8 = 2;
		}
		else if (fVar7 < -8f)
		{
			iVar8 = 1;
		}
		else if ((iParam6 && fVar6 <= 3f) && (MISC::GET_GAME_TIMER() >= *uParam5 || *uParam2 == 5))
		{
			iVar8 = 5;
		}
		else
		{
			iVar8 = 0;
		}
		if (iVar8 != *uParam2 && MISC::GET_GAME_TIMER() >= *uParam4)
		{
			switch (iVar8)
			{
				case 0:
					sVar9 = "CHOP_SIT_LOOP";
					break;
				
				case 1:
					sVar9 = "CHOP_LEAN_FORWARDS_LOOP";
					break;
				
				case 2:
					sVar9 = "CHOP_LEAN_BACK_LOOP";
					break;
				
				case 3:
					sVar9 = "CHOP_LEAN_RIGHT_LOOP";
					break;
				
				case 4:
					sVar9 = "CHOP_LEAN_LEFT_LOOP";
					break;
				
				case 5:
					sVar9 = "CHOP_BARK";
					break;
			}
			*uParam4 = MISC::GET_GAME_TIMER() + 500;
			if (iVar8 == 5)
			{
				*uParam5 = MISC::GET_GAME_TIMER() + 3000;
			}
			TASK::TASK_PLAY_ANIM(iParam0, func_62(), sVar9, 0.8f, -0.8f, -1, 1, 0, 0, 0, 0);
			*uParam2 = iVar8;
		}
		*uParam3 = Var3.f_1;
	}
}

char* func_62()//Position - 0x303E
{
	return "MISSCHOP_VEHICLE@BACK_OF_VAN";
}

void func_63(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x304A
{
	struct<3> Var0;
	var uVar3;
	
	if (!PED::IS_PED_INJURED(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
		if (!bParam4)
		{
			if (!bParam3)
			{
				Var0 = { 0f, -0.5f, 0.3f };
			}
			else
			{
				Var0 = { 0.129f, -1.522f, 0.3f };
			}
			uVar3 = fParam2;
		}
		else
		{
			Var0 = { iParam5, iParam6, iParam7 };
			uVar3 = iParam8;
		}
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iParam0, iParam1, 0, Var0, 0f, 0f, uVar3, 0, 0, 0, 1, 2, 1);
	}
}

void func_64()//Position - 0x30C5
{
	if (!PED::IS_PED_INJURED(Local_1158) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if ((!PED::IS_PED_IN_ANY_VEHICLE(Local_1158, 0) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(Local_1158)) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_1158.f_9))
		{
			if (!iLocal_1471)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_1158, 1805844857) == 7)
				{
					TASK::TASK_SMART_FLEE_PED(Local_1158, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
				}
			}
		}
	}
}







void func_71(char* sParam0, struct<3> Param1, float fParam4, float fParam5)//Position - 0x3454
{
	switch (iLocal_1109)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, fParam4, fParam4, fParam4, 0, 1, 0))
			{
				CUTSCENE::REQUEST_CUTSCENE(sParam0, 8);
				iLocal_1109 = 1;
			}
			break;
		
		case 1:
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				iLocal_1109 = 2;
			}
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, fParam5, fParam5, fParam5, 0, 1, 0))
			{
				CUTSCENE::REMOVE_CUTSCENE();
				iLocal_1109 = 0;
			}
			break;
	}
}

int func_72(int iParam0)//Position - 0x34CF
{
	switch (iParam0)
	{
		case 0:
			return GlobalFunc_4917(1);
			break;
		
		case 1:
			return GlobalFunc_4946(19);
			break;
		
		case 2:
			return joaat("ig_ballasog");
			break;
		
		case 3:
			return GlobalFunc_2579();
			break;
		
		case 4:
			return joaat("a_c_rottweiler");
			break;
		
		case 5:
			return joaat("a_f_y_genhot_01");
			break;
		
		case 6:
			return joaat("s_m_y_construct_02");
			break;
		
		case 7:
			return GlobalFunc_5112(19, 0);
			break;
		
		case 8:
			return joaat("bati");
			break;
		
		case 9:
			return joaat("emperor");
			break;
		
		case 10:
			return joaat("bison");
			break;
		
		case 11:
			return joaat("bus");
			break;
		
		case 12:
			return joaat("trailers2");
			break;
		
		case 13:
			return joaat("freight");
			break;
		
		case 14:
			return joaat("tankercar");
			break;
		
		case 15:
			return joaat("freightcont2");
			break;
		
		case 16:
			return joaat("rubble");
			break;
		
		case 17:
			return joaat("rocoto");
			break;
		
		case 18:
			return joaat("prop_rail_boxcar5_d");
			break;
		
		case 19:
			return joaat("prop_boxcar5_handle");
			break;
		
		case 20:
			return joaat("prop_npc_phone");
			break;
		
		case 21:
			return joaat("p_cs_bandana_s");
			break;
		
		case 22:
			return joaat("prop_ld_test_01");
			break;
		
		case 23:
			return GlobalFunc_2575();
			break;
	}
	return 0;
}







Vector3 func_79(int iParam0)//Position - 0x3B24
{
	switch (iParam0)
	{
		case 0:
			return -77.8f, -1456.7f, 31.03f;
			break;
		
		case 1:
			return -15.79069f, -1451.12f, 29.55704f;
			break;
		
		case 2:
			return 363.7493f, 323.3702f, 102.71f;
			break;
		
		case 3:
			return -52.78f, -1456.56f, 31.03f;
			break;
		
		case 4:
			return -216.7787f, -1494.965f, 30.23503f;
			break;
		
		case 5:
			return 456.0452f, -691.4726f, 26.83633f;
			break;
		
		case 6:
			return 360.19f, 323.68f, 102.81f;
			break;
		
		case 8:
			return 458.02f, -691.39f, 27.43f;
			break;
		
		case 7:
			return 509.78f, -654.11f, 23.75f;
			break;
		
		case 10:
			return 387.98f, 358.86f, 101.45f;
			break;
		
		case 11:
			return 372.3202f, 353.4908f, 101.7117f;
			break;
		
		case 12:
			return -17.96112f, -1452.734f, 29.57574f;
			break;
		
		case 13:
			return 369.8667f, 350.7225f, 101.8453f;
			break;
		
		case 9:
			return 0f, 0f, -90f;
			break;
		
		case 14:
			return 460.1f, -656.61f, 26.67f;
			break;
		
		case 15:
			return -15.26298f, -1453.305f, 29.50939f;
			break;
		
		case 16:
			return 459.3754f, -679.7192f, 26.55455f;
			break;
		
		case 17:
			return 491.34f, -556.23f, 26.54f;
			break;
		
		case 18:
			return 552.57f, -561.89f, 23.8f;
			break;
		
		case 19:
			return 514.25f, -640.73f, 23.75f;
			break;
		
		case 20:
			return 556.65f, -565.12f, 23.8f;
			break;
		
		case 21:
			return 525.9822f, -679.1431f, 24.80665f;
			break;
		
		case 22:
			return 529.37f, -679.52f, 23.76f;
			break;
		
		case 23:
			return 558.0582f, -566.7988f, 23.781f;
			break;
		
		case 24:
			return 501.49f, -647.84f, 23.75f;
			break;
		
		case 25:
			return 503.14f, -648.65f, 23.75f;
			break;
		
		case 26:
			return 533.38f, -664.49f, 23.8f;
			break;
		
		case 27:
			return 531.43f, -669.4f, 23.8f;
			break;
		
		case 28:
			return 456.95f, -805.38f, 26.46f;
			break;
		
		case 29:
			return 363.46f, 322f, 102.71f;
			break;
		
		case 30:
			return -19.31f, -1457.8f, 29.47f;
			break;
		
		case 31:
			return 444.7578f, -816.0368f, 27.24718f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_80(bool bParam0)//Position - 0x3E8E
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (bParam0)
		{
			GlobalFunc_11267(PLAYER::PLAYER_PED_ID(), 8, 9, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		else
		{
			GlobalFunc_11298(PLAYER::PLAYER_PED_ID(), 8, 9);
		}
	}
}





















































































































void func_197(int iParam0)//Position - 0x2009D
{
	var uVar0;
	
	if (iLocal_1397[iParam0])
	{
		uVar0 = func_72(iParam0);
		if (STREAMING::HAS_MODEL_LOADED(uVar0))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		}
		iLocal_1397[iParam0] = 0;
	}
}

char* func_198(int iParam0)//Position - 0x200CE
{
	switch (iParam0)
	{
		case 0:
			return "missfra0_chop_shared";
			break;
		
		case 1:
			return "missfra0_chop_tovan";
			break;
		
		case 2:
			return "missfra0_chop_fchase";
			break;
		
		case 3:
			return "missfra0_chop_find";
			break;
		
		case 4:
			return "missfra0_chop_drhome";
			break;
		
		case 5:
			return func_62();
			break;
	}
	return "invalid!";
}



int func_201(char* sParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x2016A
{
	if (iParam1 || !HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		if ((bParam2 || !GlobalFunc_111()) || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
		{
			if (func_203())
			{
				GlobalFunc_2883(sParam0, iParam3, 1);
				return 1;
			}
		}
	}
	return 0;
}


int func_203()//Position - 0x201CB
{
	if (iLocal_1105 == 0 && !GlobalFunc_331())
	{
		return 1;
	}
	return 0;
}
















void func_219()//Position - 0x209BE
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(uLocal_1387))
	{
		HUD::REMOVE_BLIP(&uLocal_1387);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_1388))
	{
		HUD::REMOVE_BLIP(&uLocal_1388);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_1389))
	{
		HUD::REMOVE_BLIP(&uLocal_1389);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_1390))
	{
		HUD::REMOVE_BLIP(&uLocal_1390);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_1391))
	{
		HUD::REMOVE_BLIP(&uLocal_1391);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_1392))
	{
		HUD::REMOVE_BLIP(&uLocal_1392);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (HUD::DOES_BLIP_EXIST(Local_1235[iVar0 /*12*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_1235[iVar0 /*12*/].f_1));
		}
		iVar0++;
	}
}


int func_221()//Position - 0x20A7D
{
	if (iLocal_1478)
	{
		if (func_203())
		{
			if (GlobalFunc_10626(&uLocal_1846, "FKN0AUD", &Local_2012, &Local_2018, 8, 0, 0))
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


void func_223(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x20B09
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	struct<3> Var5;
	char* sVar8;
	
	bVar0 = true;
	bVar1 = true;
	bVar2 = true;
	bVar3 = true;
	bVar4 = false;
	if (bParam1)
	{
		if (!PED::IS_PED_INJURED(iLocal_1351))
		{
			if (!PED::IS_PED_GROUP_MEMBER(iLocal_1351, GlobalFunc_468()) && !(iLocal_1106 == 0 && iLocal_1338 < 4))
			{
				if (!bLocal_1667)
				{
					bVar2 = false;
				}
			}
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0))
	{
		if (bParam1 || !iLocal_1638)
		{
			if (!PED::IS_PED_INJURED(iLocal_1351))
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_1351, uLocal_1366[0], 0))
				{
					if (!bLocal_1667)
					{
						bVar1 = false;
					}
				}
			}
		}
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_1366[0], 0))
		{
			bVar0 = false;
		}
	}
	if (bParam2)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			bVar3 = false;
		}
	}
	if (bVar2)
	{
		if (bVar0)
		{
			if (iLocal_1764 < 2)
			{
				iLocal_1764 = 2;
			}
			if (bVar1)
			{
				iLocal_1480 = 0;
				if (bVar3)
				{
					iLocal_1605 = 0;
					if (iLocal_1106 != 4 || iLocal_1332 <= 5)
					{
						bLocal_1603 = false;
					}
					bLocal_1591 = false;
					if (iLocal_1106 == 0 || iLocal_1106 == 4)
					{
						bVar4 = true;
						iLocal_1479 = 0;
						if (!HUD::DOES_BLIP_EXIST(uLocal_1391))
						{
							if (bParam0)
							{
								GlobalFunc_7206(0, 1, 0, 0);
								func_219();
								switch (iLocal_1106)
								{
									case 0:
										Var5 = { func_79(2) };
										break;
									
									case 4:
										if (iLocal_1332 < 6)
										{
											Var5 = { func_79(3) };
										}
										else
										{
											Var5 = { func_79(4) };
										}
										break;
								}
								uLocal_1391 = func_236(Var5, 1);
							}
						}
						if (HUD::DOES_BLIP_EXIST(uLocal_1387))
						{
							HUD::REMOVE_BLIP(&uLocal_1387);
						}
						if (!iLocal_1475)
						{
							if (iLocal_1599)
							{
								switch (iLocal_1106)
								{
									case 0:
										iLocal_1475 = func_201("FC_GOVINEW", 1, 0, 7500);
										break;
									
									case 4:
										if (iLocal_1332 < 6)
										{
											iLocal_1475 = func_201("FC_GOHOUSE1", 1, 0, 7500);
										}
										else if (iLocal_1332 >= 7)
										{
											iLocal_1475 = func_201("FC_GOREC", 1, 0, 7500);
										}
										break;
									}
								}
						}
					}
					else if (!HUD::DOES_BLIP_EXIST(uLocal_1390) && !HUD::DOES_BLIP_EXIST(uLocal_1389))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[1], 0) && !PED::IS_PED_INJURED(Local_1158))
						{
							if (func_203())
							{
								GlobalFunc_7206(0, 1, 0, 0);
								func_219();
								if (PED::IS_PED_IN_ANY_VEHICLE(Local_1158, 0))
								{
									uLocal_1390 = func_234(uLocal_1366[1], 1);
								}
								else
								{
									uLocal_1389 = func_230(Local_1158, 1, 145);
								}
								if (!iLocal_1475)
								{
									iLocal_1475 = 1;
								}
							}
						}
					}
				}
				else
				{
					if (!iLocal_1605)
					{
						func_219();
						iLocal_1605 = 1;
					}
					else
					{
						func_228();
					}
					if (!bLocal_1603)
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_1366[0], 0))
						{
							if (iLocal_1479)
							{
								if (iLocal_1106 == 0)
								{
									bLocal_1603 = func_239("FC_WANTBEF", 0, 0, 0, 1);
								}
								else if (iLocal_1106 == 4 && iLocal_1332 == 6)
								{
									if (iLocal_1819 < 0)
									{
										iLocal_1819 = MISC::GET_GAME_TIMER();
									}
									else if (MISC::GET_GAME_TIMER() >= iLocal_1819 + 1500)
									{
										bLocal_1603 = func_239("FC_WANTED", 0, 0, 0, 1);
									}
								}
								else if (iLocal_1106 == 4 && iLocal_1332 <= 5)
								{
									bLocal_1603 = func_239("FC_WANTVAN", 0, 0, 0, 1);
								}
								else
								{
									bLocal_1603 = true;
								}
							}
						}
						else
						{
							bLocal_1603 = true;
						}
					}
					else if (!bLocal_1591)
					{
						bLocal_1591 = func_201("LOSE_WANTED", 1, 0, 7500);
						func_227(10000, -1, -1);
					}
				}
			}
			else
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_1388))
				{
					GlobalFunc_7206(0, 1, 0, 0);
					func_219();
					uLocal_1388 = func_230(iLocal_1351, 0, 145);
				}
				if (!bLocal_1489)
				{
					bLocal_1489 = func_201("FC_WAIT", 1, 0, 7500);
				}
			}
		}
		else
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_1387))
			{
				GlobalFunc_7206(0, 1, 0, 0);
				func_219();
				if (iLocal_1764 == 0 || iLocal_1764 == 2)
				{
					iLocal_1476 = 1;
				}
				uLocal_1387 = func_234(uLocal_1366[0], 0);
			}
			if (iLocal_1476)
			{
				if (iLocal_1480)
				{
					switch (iLocal_1764)
					{
						case 0:
							sVar8 = "FC_GOVAN1";
							break;
						
						case 2:
							sVar8 = "FC_GOVAN2";
							break;
					}
					if (func_201(sVar8, 1, 0, 7500))
					{
						iLocal_1476 = 0;
						RECORDING::_0x293220DA1B46CEBC(4f, 4f, 3);
						iLocal_1764++;
					}
				}
			}
			if (!iLocal_1480)
			{
				if (iLocal_1479)
				{
					if (iLocal_1106 == 1 && !PED::IS_PED_IN_VEHICLE(iLocal_1351, uLocal_1366[0], 0))
					{
						iLocal_1480 = func_239("FC_VANNOW", 0, 0, 0, 1);
					}
					else if (iLocal_1106 != 0 || iLocal_1493)
					{
						iLocal_1480 = func_239("FC_FGOTOUT", 0, 0, 0, 1);
					}
					else
					{
						iLocal_1480 = 1;
					}
				}
			}
		}
	}
	else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1351, 12f, 12f, 6f, 0, 1, 0))
	{
		if (bParam3)
		{
			if (iLocal_1338 == 4 || iLocal_1106 > 0)
			{
				PED::SET_PED_AS_GROUP_MEMBER(iLocal_1351, GlobalFunc_468());
			}
		}
	}
	else
	{
		if (!HUD::DOES_BLIP_EXIST(uLocal_1388))
		{
			GlobalFunc_7206(0, 1, 0, 0);
			func_219();
			uLocal_1388 = func_230(iLocal_1351, 0, 145);
		}
		if (!bLocal_1490)
		{
			bLocal_1490 = func_201("FC_LEAVE", 1, 0, 7500);
		}
	}
	if (bVar4)
	{
		if (GlobalFunc_331())
		{
			bVar4 = false;
		}
	}
	if (!bVar4)
	{
		if (!iLocal_1478)
		{
			if (func_224())
			{
				GlobalFunc_4935();
			}
			iLocal_1479 = 1;
		}
	}
}

int func_224()//Position - 0x21047
{
	struct<6> Var0;
	
	if (GlobalFunc_111())
	{
		Var0 = { GlobalFunc_560() };
		if (((((((MISC::ARE_STRINGS_EQUAL(&Var0, "FKN0_WALK") || MISC::ARE_STRINGS_EQUAL(&Var0, "FKN0_WALK2")) || MISC::ARE_STRINGS_EQUAL(&Var0, "FKN0_B1AV1")) || MISC::ARE_STRINGS_EQUAL(&Var0, "FKN0_B1AV2")) || MISC::ARE_STRINGS_EQUAL(&Var0, "FKN0_B2AV1")) || MISC::ARE_STRINGS_EQUAL(&Var0, "FKN0_B2AV2")) || MISC::ARE_STRINGS_EQUAL(&Var0, "FKN0_B3AV1")) || MISC::ARE_STRINGS_EQUAL(&Var0, "FKN0_NOARM2"))
		{
			iLocal_1478 = 1;
			Local_2012 = { Var0 };
			Local_2018 = { GlobalFunc_514() };
			return 1;
		}
	}
	return 0;
}



void func_227(int iParam0, int iParam1, int iParam2)//Position - 0x211C4
{
	int iVar0;
	int iVar1;
	
	if (iParam0 >= 0)
	{
		iLocal_1765 = (MISC::GET_GAME_TIMER() + iParam0);
	}
	else
	{
		if (iParam1 < 0)
		{
			iVar0 = 8000;
		}
		else
		{
			iVar0 = iParam1;
		}
		if (iParam2 < 0)
		{
			iVar1 = 14000;
		}
		else
		{
			iVar1 = iParam2;
		}
		iLocal_1765 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(iVar0, iVar1));
	}
}

void func_228()//Position - 0x21213
{
	if (HUD::DOES_BLIP_EXIST(uLocal_1387))
	{
		HUD::REMOVE_BLIP(&uLocal_1387);
	}
	if (GlobalFunc_663("FC_GOVAN2", 0, 0) || GlobalFunc_663("FC_GOVAN1", 0, 0))
	{
		GlobalFunc_7206(1, 1, 0, 0);
	}
}


int func_230(int iParam0, bool bParam1, int iParam2)//Position - 0x2126F
{
	if (func_203())
	{
		return GlobalFunc_6797(iParam0, bParam1, iParam2);
	}
	return 0;
}




int func_234(int iParam0, bool bParam1)//Position - 0x21399
{
	if (func_203())
	{
		return GlobalFunc_6783(iParam0, bParam1, 0);
	}
	return 0;
}


int func_236(struct<3> Param0, int iParam3)//Position - 0x213C8
{
	if (func_203())
	{
		return GlobalFunc_5914(Param0, iParam3);
	}
	return 0;
}



int func_239(char* sParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x21421
{
	int iVar0;
	struct<2> Var1;
	
	if ((iParam1 || !HUD::IS_MESSAGE_BEING_DISPLAYED()) || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (!GlobalFunc_111())
		{
			if (func_203())
			{
				if (bParam4)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
				if (iParam2 == 0)
				{
					return GlobalFunc_10618(&uLocal_1846, "FKN0AUD", sParam0, 8, iVar0, 0, 0);
				}
				else
				{
					StringCopy(&Var1, sParam0, 16);
					StringConCat(&Var1, "_", 16);
					StringIntConCat(&Var1, iParam2, 16);
					if (!bParam3)
					{
						return GlobalFunc_10630(&uLocal_1846, "FKN0AUD", sParam0, &Var1, 8, iVar0, 0);
					}
					else
					{
						return GlobalFunc_10626(&uLocal_1846, "FKN0AUD", sParam0, &Var1, 8, iVar0, 0);
					}
				}
			}
		}
	}
	return 0;
}



void func_242(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2156B
{
	if (iLocal_1765 < 0)
	{
		func_227(-1, -1, -1);
	}
	if (MISC::GET_GAME_TIMER() >= iLocal_1765)
	{
		if (func_239(sParam0, iParam4, 0, 0, 1))
		{
			if (iParam1 >= 0)
			{
				func_227(iParam1, -1, -1);
			}
			else
			{
				func_227(-1, iParam2, iParam3);
			}
		}
	}
}

void func_243(int iParam0)//Position - 0x215B3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (MISC::GET_GAME_TIMER() >= iLocal_1766)
	{
		iVar0 = 800;
		iVar1 = 3000;
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
		switch (iParam0)
		{
			case 0:
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
				{
					case 0:
						iVar3 = 0;
						break;
					
					case 1:
						iVar3 = 5;
						break;
				}
				iVar0 = 2000;
				iVar1 = 6000;
				break;
			
			case 1:
				if (iVar2 >= 90)
				{
					iVar3 = 4;
				}
				else if (iVar2 >= 70)
				{
					iVar3 = 7;
				}
				else if (iVar2 >= 40)
				{
					iVar3 = 0;
				}
				else
				{
					iVar3 = 5;
				}
				iVar0 = 2000;
				iVar1 = 5500;
				break;
			
			case 2:
				if (iLocal_1330 == 8 || iLocal_1330 == 9)
				{
					if (iVar2 >= 80)
					{
						iVar3 = 10;
					}
					else if (iVar2 <= 20)
					{
						iVar3 = 9;
						iVar0 = 400;
						iVar1 = 700;
					}
					else
					{
						iVar3 = 8;
						iVar0 = 400;
						iVar1 = 700;
					}
				}
				else
				{
					switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
					{
						case 0:
							iVar3 = 0;
							break;
						
						case 1:
							iVar3 = 5;
							break;
						
						case 2:
							iVar3 = 8;
							iVar0 = 400;
							iVar1 = 700;
							break;
						
						case 3:
							iVar3 = 9;
							iVar0 = 400;
							iVar1 = 700;
							break;
						}
				}
				break;
			
			case 3:
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
				{
					case 0:
						iVar3 = 1;
						break;
					
					case 1:
						iVar3 = 3;
						break;
				}
				break;
			
			case 5:
				iVar3 = 5;
				if (Local_1184 == 2 || Local_1184 == 1)
				{
					iVar0 = 400;
					iVar1 = 700;
				}
				break;
			
			case 6:
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
				{
					case 0:
						iVar3 = 0;
						break;
					
					case 1:
						iVar3 = 5;
						break;
				}
				if (Local_1184 == 2 || Local_1184 == 1)
				{
					iVar0 = 400;
					iVar1 = 700;
				}
				else
				{
					iVar0 = (iVar0 - 100);
					iVar1 = (iVar1 - 800);
				}
				break;
			
			case 7:
				if (iLocal_1330 == 8 || iLocal_1330 == 9)
				{
					if (iVar2 >= 90)
					{
						iVar3 = 10;
						iVar0 = 400;
						iVar1 = 700;
					}
					else if (iVar2 <= 20)
					{
						iVar3 = 9;
						iVar0 = 400;
						iVar1 = 700;
					}
					else
					{
						iVar3 = 8;
					}
				}
				else
				{
					switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
					{
						case 0:
							iVar3 = 8;
							iVar0 = 400;
							iVar1 = 700;
							break;
						
						case 1:
							iVar3 = 9;
							iVar0 = 400;
							iVar1 = 700;
							break;
						
						case 2:
							iVar3 = 7;
							break;
						}
				}
				break;
			
			case 4:
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
				{
					case 0:
						iVar3 = 0;
						break;
					
					case 1:
						iVar3 = 1;
						break;
					
					case 2:
						iVar3 = 2;
						break;
					
					case 3:
						iVar3 = 3;
						break;
				}
				if ((Local_1184 == 2 || Local_1184 == 1) || (iLocal_1106 == 2 && MISC::GET_GAME_TIMER() < iLocal_1767 + 6000))
				{
					iVar0 = 400;
					iVar1 = 700;
				}
				else
				{
					iVar0 = (iVar0 - 100);
					iVar1 = (iVar1 - 800);
				}
				break;
			
			case 8:
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
				{
					case 0:
						iVar3 = 0;
						break;
					
					case 1:
						iVar3 = 1;
						break;
					
					case 2:
						iVar3 = 3;
						break;
				}
				iVar0 = (iVar0 - 100);
				iVar1 = (iVar1 - 800);
				break;
			
			case 9:
				if (iLocal_1330 == 8 || iLocal_1330 == 9)
				{
					if (iVar2 >= 80)
					{
						iVar3 = 10;
					}
					else if (iVar2 <= 20)
					{
						iVar3 = 9;
						iVar0 = 400;
						iVar1 = 700;
					}
					else
					{
						iVar3 = 8;
						iVar0 = 400;
						iVar1 = 700;
					}
				}
				else
				{
					switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
					{
						case 0:
							iVar3 = 8;
							iVar0 = 400;
							iVar1 = 700;
							break;
						
						case 1:
							iVar3 = 9;
							iVar0 = 400;
							iVar1 = 700;
							break;
						}
				}
				break;
		}
		func_244(iVar3);
		iLocal_1766 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(iVar0, iVar1));
	}
}

void func_244(int iParam0)//Position - 0x219BB
{
	if (!PED::IS_PED_INJURED(iLocal_1352))
	{
		iLocal_1330 = iParam0;
	}
}

void func_245(bool bParam0)//Position - 0x219D3
{
	GlobalFunc_8523(39, bParam0);
	GlobalFunc_8523(40, bParam0);
	GlobalFunc_8523(41, bParam0);
	GlobalFunc_8523(42, bParam0);
	GlobalFunc_8523(43, bParam0);
}







void func_252()//Position - 0x21E1E
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	struct<3> Var8;
	bool bVar11;
	struct<3> Var12;
	float fVar15;
	struct<3> Var16;
	
	func_759();
	bLocal_1572 = false;
	if (Local_1184 != 2)
	{
		GlobalFunc_2904(&Local_1111, 1, 0);
	}
	if (!PED::IS_PED_INJURED(iLocal_1352))
	{
		if (MISC::GET_GAME_TIMER() <= iLocal_1767 + 3000)
		{
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_1352, 2f);
		}
	}
	if (!iLocal_1471)
	{
		if (!bLocal_1691)
		{
			if (!bLocal_1470)
			{
				bLocal_1691 = AUDIO::PREPARE_MUSIC_EVENT("FRA0_BADDY");
			}
		}
		if (bLocal_1470)
		{
			if (!iLocal_1651)
			{
				if (!PED::IS_PED_INJURED(iLocal_1352))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_1352, 517.267f, -648.6511f, 23.75121f, 1, 0, 0, 1);
				}
				if (!PED::IS_PED_INJURED(Local_1158))
				{
					ENTITY::SET_ENTITY_COORDS(Local_1158, 516.2095f, -646.3057f, 23.75121f, 1, 0, 0, 1);
				}
				bLocal_1579 = true;
				iLocal_1582 = 1;
				iLocal_1651 = 1;
			}
		}
		if (!bLocal_1470)
		{
			if (!PED::IS_PED_INJURED(iLocal_1354))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1354, PLAYER::PLAYER_PED_ID(), 1))
				{
					PED::APPLY_DAMAGE_TO_PED(iLocal_1354, 1000, 1);
				}
			}
			if (Local_1184 == 2)
			{
				func_757(!bLocal_1579);
			}
			else
			{
				func_24(1);
			}
			func_756();
			func_753();
			func_752();
			func_751();
			if (!bLocal_1689)
			{
				if (iLocal_1570)
				{
					bLocal_1689 = AUDIO::TRIGGER_MUSIC_EVENT("FRA0_OPEN_CAR");
				}
			}
			func_724();
			if (bLocal_1572)
			{
				GlobalFunc_187();
			}
			if (!bLocal_1470)
			{
				if (!PED::IS_PED_INJURED(iLocal_1352))
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_1352, 0) > 100f)
					{
						func_712(9);
					}
				}
			}
			switch (iLocal_1343)
			{
				case 0:
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1805) && bLocal_1672)
					{
						if (iLocal_1342 >= 1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_1354))
							{
								PED::DELETE_PED(&iLocal_1354);
							}
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_1158);
							TASK::TASK_PLAY_ANIM(Local_1158, func_198(3), "open_train_car_og", 1000f, -8f, -1, 2, 0.2f, 0, 0, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1158, 0, 0);
							iLocal_1343 = 1;
						}
					}
					break;
				
				case 1:
					if (!bLocal_1690)
					{
						bLocal_1690 = AUDIO::TRIGGER_MUSIC_EVENT("FRA0_FOUND");
					}
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1158, func_198(3), "open_train_car_og", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_1158, func_198(3), "open_train_car_og") >= 0.98f)
						{
							TASK::TASK_PLAY_ANIM(Local_1158, func_198(3), "find_ballasog_og", -8f, -8f, -1, 32768, 0, 0, 0, 0);
							iLocal_1343 = 2;
						}
					}
					break;
				
				case 2:
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_1158, 2f);
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1158, func_198(3), "find_ballasog_og", 3))
					{
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_1158, "hood5", 5, 32, -1);
						iLocal_1773 = MISC::GET_GAME_TIMER();
						iLocal_1343 = 3;
					}
					break;
				}
		}
		if (!bLocal_1579)
		{
			func_711();
			if (!iLocal_1599)
			{
				if (func_239("FKN0_FIND", 0, 0, 0, 1))
				{
					iLocal_1599 = 1;
					iLocal_1814 = MISC::GET_GAME_TIMER() + 6000;
				}
			}
			else
			{
				if (!iLocal_1475)
				{
					if (iLocal_1552)
					{
						iLocal_1475 = 1;
					}
					else if (Local_1184 == 0)
					{
						iLocal_1475 = func_201("FC_GOCHOP", 1, 0, 7500);
					}
				}
				if (!bLocal_1554)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_1814)
					{
						bLocal_1554 = func_239("FKN0_FIND2", 0, 0, 0, 1);
					}
				}
				func_702();
				if (iLocal_1202 == 0 || iLocal_1202 == 7)
				{
					fVar0 = 20f;
				}
				else
				{
					fVar0 = 40f;
				}
				if (!PED::IS_PED_INJURED(iLocal_1352))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1352, fVar0, fVar0, 4f, 0, 1, 0) && !bLocal_1572)
					{
						if (!PED::IS_PED_HEADTRACKING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1352))
						{
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1352, -1, 2048, 4);
						}
					}
					else if (PED::IS_PED_HEADTRACKING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1352))
					{
						TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					}
				}
				if (iLocal_1552)
				{
					if (iLocal_1202 == 0 || iLocal_1202 == 7)
					{
						if (!PED::IS_PED_INJURED(iLocal_1352))
						{
							bVar1 = ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1352, fVar0, fVar0, 2f, 0, 1, 0);
							bVar2 = ENTITY::IS_ENTITY_AT_COORD(iLocal_1352, 530.0251f, -678.9529f, 23.70727f, 2.5f, 2.5f, 2.5f, 0, 1, 0);
							if (bVar1 && !bLocal_1572)
							{
								if (iLocal_1475)
								{
									func_242("FKN0_FOLLOW", -1, 6000, 9000, 0);
								}
							}
							switch (iLocal_1328)
							{
								case 0:
									if (!bVar2)
									{
										func_243(5);
										if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_1352))
										{
											TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_1352, 1f, 0);
										}
										if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_1352, 528.3346f, -679.3179f, 23.79582f, 3f, 3f, 3f, 0, 0, 0))
										{
											if (MISC::GET_GAME_TIMER() >= iLocal_1790)
											{
												iLocal_1328 = 1;
											}
										}
									}
									else
									{
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_1843);
										TASK::OPEN_SEQUENCE_TASK(&uLocal_1843);
										TASK::TASK_GO_STRAIGHT_TO_COORD(0, 529.8922f, -679.1262f, 23.71802f, 1f, 20000, 83.2f, 1056964608);
										TASK::TASK_PLAY_ANIM(0, func_198(0), "CHOP_BARK_AT_CARRIAGE", 8f, -8f, -1, 1, 0, 0, 0, 0);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_1843);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_1352, uLocal_1843);
										PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_1352, 0);
										iLocal_1633 = 0;
										iLocal_1328 = 4;
									}
									break;
								
								case 1:
									if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_1352))
									{
										TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_1352, 0f, 0);
									}
									if (ENTITY::GET_ENTITY_SPEED(iLocal_1352) <= 0.2f)
									{
										iLocal_1328 = 2;
										iLocal_1789 = MISC::GET_GAME_TIMER();
									}
									break;
								
								case 2:
									if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_1352))
									{
										TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_1352, 0f, 0);
									}
									if (MISC::GET_GAME_TIMER() >= iLocal_1789 + 100)
									{
										TASK::TASK_PLAY_ANIM(iLocal_1352, func_198(3), "FRA0_IG_14_CHOP_SNIFF_FWDS", 2f, 2f, -1, 0, 0, 0, 0, 0);
										iLocal_1789 = MISC::GET_GAME_TIMER();
										iLocal_1328 = 3;
									}
									break;
								
								case 3:
									PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_1352, 1f);
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1352, func_198(3), "FRA0_IG_14_CHOP_SNIFF_FWDS", 3))
									{
										iLocal_1328 = 0;
										iLocal_1567 = 0;
										iLocal_1789 = MISC::GET_GAME_TIMER();
										iLocal_1790 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7000, 11000));
									}
									else if (!iLocal_1567)
									{
										if (MISC::GET_GAME_TIMER() >= iLocal_1789 + 600)
										{
											func_244(6);
											iLocal_1567 = 1;
										}
									}
									break;
								
								case 4:
									PED::SET_PED_RESET_FLAG(iLocal_1352, 71, 1);
									func_243(8);
									break;
							}
							if (iLocal_1328 == 0)
							{
								if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_1352))
								{
									Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_1352, 1) };
									if (Var3.f_1 < -607.75f)
									{
										TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("hood8", ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_1352, 0f, 1.5f, 0f), &iVar6);
										TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_1352, "hood8", iVar6, 4, -1);
										iLocal_1790 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 7000));
									}
								}
								else
								{
									iVar7 = TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_1352);
									if (iVar7 > iLocal_1793)
									{
										iLocal_1793 = iVar7;
									}
								}
							}
						}
					}
				}
				else if (!PED::IS_PED_INJURED(iLocal_1352))
				{
					Var8 = { ENTITY::GET_ENTITY_COORDS(iLocal_1352, 1) };
					if (Var8.f_1 < -614.75f)
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_1352, 1f);
					}
					else if (Var8.f_1 < -608.75f)
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_1352, 2f);
					}
					if (!iLocal_1553)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_1352, 542.4755f, -618.7315f, 23.74781f, 2f, 2f, 2f, 0, 1, 0))
						{
							if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1352, 30f, 30f, 30f, 0, 0, 0))
							{
								TASK::TASK_PLAY_ANIM(iLocal_1352, func_198(0), "FRA0_IG_12_CHOP_WAITING_B", 8f, -8f, -1, 1, 0, 0, 0, 0);
							}
							iLocal_1790 = MISC::GET_GAME_TIMER() + 1000;
							iLocal_1553 = 1;
						}
					}
					else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1352, 30f, 30f, 30f, 0, 0, 0))
					{
						if (func_701(0))
						{
							iLocal_1552 = 1;
						}
					}
				}
				switch (iLocal_1342)
				{
					case 0:
						if (Local_1235[2 /*12*/].f_3[1 /*4*/].f_2 == 2 && ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1805) && bLocal_1672) || MISC::GET_GAME_TIMER() >= iLocal_1801 + 5000))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_1354))
							{
								PED::DELETE_PED(&iLocal_1354);
							}
							if (!PED::IS_PED_INJURED(iLocal_1352))
							{
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_1352);
								PED::REQUEST_PED_VISIBILITY_TRACKING(iLocal_1352);
								Local_1170.f_9 = PED::CREATE_SYNCHRONIZED_SCENE(func_700(2), 0f, 0f, 83.079f, 2);
								PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_1170.f_9, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_1352, Local_1170.f_9, func_198(3), "find_ballasog_chop", 1000f, -8f, 6, 0, 1148846080, 0);
								PED::SET_SYNCHRONIZED_SCENE_RATE(Local_1170.f_9, fLocal_1754);
								iLocal_1328 = 4;
							}
							TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
							ENTITY::FREEZE_ENTITY_POSITION(Local_1158, 0);
							GlobalFunc_4935();
							func_219();
							if (!HUD::DOES_BLIP_EXIST(uLocal_1392))
							{
								uLocal_1392 = func_230(iLocal_1352, 0, 102);
							}
							if (!HUD::DOES_BLIP_EXIST(uLocal_1389))
							{
								uLocal_1389 = func_230(Local_1158, 1, 145);
							}
							Local_1235[2 /*12*/].f_3[0 /*4*/].f_3 = 3f;
							func_699(2, 0);
							iLocal_1798 = MISC::GET_GAME_TIMER();
							func_698(&Local_1184, -0.75f, 0f);
							iLocal_1342 = 1;
						}
						break;
					
					case 1:
						GlobalFunc_7629();
						if (MISC::GET_GAME_TIMER() >= iLocal_1798 + 3400)
						{
							if (!bLocal_1580)
							{
								bLocal_1580 = func_239("FKN0_FOUND1", 0, 0, 0, 1);
							}
						}
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1802))
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_198(3), "find_ballasOG_Fra", 8f, -1f, -1, 0, 0, 0, 0, 0);
							}
							func_696();
							if (!PED::IS_PED_INJURED(Local_1158))
							{
								PED::REQUEST_PED_VISIBILITY_TRACKING(Local_1158);
							}
							iLocal_1773 = MISC::GET_GAME_TIMER();
							iLocal_1475 = 0;
							iLocal_1599 = 0;
							bLocal_1579 = true;
							iLocal_1342 = 2;
						}
						break;
					}
			}
		}
		else
		{
			if (!bLocal_1470)
			{
				PED::SET_PED_MOVE_RATE_OVERRIDE(PLAYER::PLAYER_PED_ID(), 0.97f);
				if (!iLocal_1581)
				{
					func_696();
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_198(3), "find_ballasOG_Fra", 3))
				{
					GlobalFunc_7629();
				}
				func_695();
				func_243(4);
			}
			if (!PED::IS_PED_INJURED(Local_1158))
			{
				if (FIRE::IS_ENTITY_ON_FIRE(Local_1158))
				{
					func_712(4);
				}
			}
			func_71("FRA_0_MCS_4_P2_T3", func_79(22), 100f, 120f);
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				if (!PED::IS_PED_INJURED(iLocal_1351))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Lamar", iLocal_1351, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 8, 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_1352))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Chop", iLocal_1352, 0);
				}
				if (!PED::IS_PED_INJURED(Local_1158))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Ballas_OG", Local_1158, 0);
					CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Ballas_OG", 0, 0, 0, 0);
				}
			}
			if (!PED::IS_PED_INJURED(Local_1158) && !PED::IS_PED_INJURED(iLocal_1352))
			{
				bVar11 = false;
				Var12 = { ENTITY::GET_ENTITY_COORDS(Local_1158, 1) };
				PED::SET_PED_RESET_FLAG(iLocal_1352, 71, 1);
				PED::SET_PED_RESET_FLAG(Local_1158, 71, 1);
				if (!bLocal_1470)
				{
					if (!iLocal_1582)
					{
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1158))
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_1158, 3f, 0);
							if (bVar11)
							{
								PED::SET_PED_MOVE_RATE_OVERRIDE(Local_1158, 0.5f);
							}
							else
							{
								PED::SET_PED_MOVE_RATE_OVERRIDE(Local_1158, 0.99f);
							}
						}
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_1352))
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_1352, 3f, 0);
							if (Var12.f_1 <= -670f)
							{
								if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_1352, Local_1158, 3f, 3f, 3f, 0, 0, 0))
								{
									fVar15 = 1.15f;
								}
								else
								{
									fVar15 = 1.05f;
								}
							}
							else if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_1352, Local_1158, 2f, 2f, 2f, 0, 0, 0))
							{
								fVar15 = 1.13f;
							}
							else
							{
								fVar15 = 1.15f;
							}
							if (fVar15 > fLocal_1753)
							{
								fLocal_1753 = (fLocal_1753 + (0.1f * SYSTEM::TIMESTEP()));
								if (fLocal_1753 > fVar15)
								{
									fLocal_1753 = fVar15;
								}
							}
							else if (fVar15 < fLocal_1753)
							{
								fLocal_1753 = (fLocal_1753 - (0.1f * SYSTEM::TIMESTEP()));
								if (fLocal_1753 < fVar15)
								{
									fLocal_1753 = fVar15;
								}
							}
							if (bVar11)
							{
								PED::SET_PED_MOVE_RATE_OVERRIDE(iLocal_1352, (fLocal_1753 / 2f));
							}
							else
							{
								PED::SET_PED_MOVE_RATE_OVERRIDE(iLocal_1352, fLocal_1753);
							}
						}
						else if (!iLocal_1581)
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_1170.f_9))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1170.f_9) >= 0.98f)
								{
									PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_1352, iLocal_2011);
									TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_1352, "hood5", 5, 32, -1);
									iLocal_1581 = 1;
								}
							}
						}
					}
				}
			}
			if (!bLocal_1470)
			{
				if (!bLocal_1587)
				{
					bLocal_1587 = func_239("FKN0_DFYOU", 0, 0, 0, 1);
				}
				else if (!iLocal_1599)
				{
					if (iLocal_1327 < 1)
					{
						iLocal_1599 = func_239("FKN0_DOWN", 0, 0, 0, 1);
					}
					else
					{
						iLocal_1599 = func_239("FKN0_DOWN2", 0, 0, 0, 1);
					}
					iLocal_1815 = MISC::GET_GAME_TIMER() + 2800;
				}
				else
				{
					if (!iLocal_1475)
					{
						if (Local_1184 == 0)
						{
							iLocal_1475 = 1;
						}
					}
					if (!bLocal_1586)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_1815)
						{
							bLocal_1586 = func_239("FKN0_FOUND2", 0, 0, 0, 1);
						}
					}
				}
			}
			if (!PED::IS_PED_INJURED(Local_1158) && !PED::IS_PED_INJURED(iLocal_1352))
			{
				Var16 = { ENTITY::GET_ENTITY_COORDS(Local_1158, 1) };
				if (!iLocal_1582)
				{
					if (!iLocal_1584)
					{
						if (Var16.f_1 >= -647.2f || (Var16.f_1 >= -660f && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_1352, Local_1158, 1.6f, 1.6f, 3f, 0, 0, 0)))
						{
							Local_1170.f_3 = { ENTITY::GET_ENTITY_COORDS(iLocal_1352, 1) };
							Local_1170.f_6 = { ENTITY::GET_ENTITY_ROTATION(iLocal_1352, 2) };
							Local_1170.f_6.f_2 = GlobalFunc_2783(Local_1170.f_6.f_2);
							Local_1170.f_9 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1170.f_3, Local_1170.f_6, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_1352, Local_1170.f_9, func_198(3), "FRA_0_IG_CHOP_TAKE_DOWN_BALLA_CHOP", 4f, -8f, 5, 0, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_1170.f_9, 0.03f);
							Local_1158.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_1158, 1) };
							Local_1158.f_6 = { ENTITY::GET_ENTITY_ROTATION(Local_1158, 2) };
							Local_1158.f_6.f_2 = GlobalFunc_2783(Local_1158.f_6.f_2);
							Local_1727 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_1158.f_3, Local_1158.f_6.f_2, 0f, -1.5f, -0.6f) };
							Local_1730 = { Local_1158.f_6 };
							Local_1158.f_9 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1158.f_3, Local_1158.f_6, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_1158, Local_1158.f_9, func_198(3), "FRA_0_IG_CHOP_TAKE_DOWN_BALLA_VICTIM", 4f, -8f, 5, 0, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_1158.f_9, 0.03f);
							RECORDING::_0x293220DA1B46CEBC(2f, 2f, 3);
							AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 1);
							iLocal_1584 = 1;
						}
					}
					else
					{
						GlobalFunc_5915(&(Local_1170.f_3), Local_1727, (0.85f * 2f));
						GlobalFunc_5915(&(Local_1170.f_6), Local_1730, (7.5f * 2f));
						PED::SET_SYNCHRONIZED_SCENE_ORIGIN(Local_1170.f_9, Local_1170.f_3, Local_1170.f_6, 2);
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_1158.f_9))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1158.f_9) >= 0.237f)
							{
								func_691(0);
							}
							if (!iLocal_1583)
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1158.f_9) >= 0.147f)
								{
									iLocal_1583 = 1;
								}
							}
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1158.f_9) >= 0.98f)
							{
								iLocal_1582 = 1;
							}
						}
						else
						{
							func_691(0);
							iLocal_1582 = 1;
						}
						if (!iLocal_1588)
						{
							if (func_239("FKN0_DFALL", 0, 0, 0, 1))
							{
								iLocal_1588 = 1;
								iLocal_1765 = MISC::GET_GAME_TIMER() + 3000;
							}
						}
					}
				}
				else if (!bLocal_1470)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1158, 30f, 30f, 8f, 0, 1, 0))
					{
						func_242("FKN0_DHELP", -1, 5000, 10000, 0);
					}
					if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_1352, Local_1158, 2f, 2f, 2f, 0, 1, 0))
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_1807 + 2000)
						{
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_1843);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_1843);
							TASK::TASK_GO_STRAIGHT_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(Local_1158, 1) + Vector(0f, 0f, 1.5f), 2f, 20000, 1193033728, 1056964608);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_1843);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_1352, uLocal_1843);
							iLocal_1807 = MISC::GET_GAME_TIMER();
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1352, 242628503) == 7)
					{
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_1843);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_1843);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_1158, 0);
						TASK::TASK_PLAY_ANIM(0, func_198(3), "CHOP_BARK_AT_BALLAS", 8f, -8f, -1, 1, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_1843);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_1352, uLocal_1843);
					}
					if (!iLocal_1585)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_1806 + 2500)
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1158, 35f, 35f, 35f, 0, 0, 0))
							{
								PED::SET_PED_TO_RAGDOLL(Local_1158, 2000, 3000, 1, 1, 1, 0);
								PED::CREATE_NM_MESSAGE(1, 34);
								PED::GIVE_PED_NM_MESSAGE(Local_1158);
								iLocal_1585 = 1;
							}
						}
					}
					else if (PED::IS_PED_RUNNING_RAGDOLL_TASK(Local_1158))
					{
						PED::RESET_PED_RAGDOLL_TIMER(Local_1158);
					}
					else if (PED::CAN_PED_RAGDOLL(Local_1158))
					{
						PED::SET_PED_TO_RAGDOLL(Local_1158, 2000, 3000, 1, 1, 1, 0);
					}
				}
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1352, 7f, 7f, 2f, 0, 1, 0) || bLocal_1470)
				{
					if ((iLocal_1582 || iLocal_1583) || bLocal_1470)
					{
						if (func_203() || bLocal_1470)
						{
							if (GlobalFunc_Has_Cutscene_Loaded())
							{
								iLocal_1471 = 1;
							}
						}
					}
				}
			}
		}
	}
	else if (!iLocal_1559)
	{
		if (!bLocal_1579)
		{
		}
		else
		{
			func_255();
		}
	}
	else
	{
		func_253();
	}
}

void func_253()//Position - 0x22EA9
{
	switch (iLocal_1110)
	{
		case 0:
			func_7(1, 1, -1, 1, 1, 1, 1, 1);
			MISC::CLEAR_AREA(502.85f, -648.35f, 23.75f, 4f, 1, 0, 0, 0);
			if ((!PED::IS_PED_INJURED(iLocal_1352) && !PED::IS_PED_INJURED(iLocal_1354)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				Local_1170.f_9 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_ENTITY_COORDS(iLocal_1354, 1), ENTITY::GET_ENTITY_ROTATION(iLocal_1354, 2), 2);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				TASK::CLEAR_PED_SECONDARY_TASK(PLAYER::PLAYER_PED_ID());
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1170.f_9, func_198(3), "Hump_Exit_Scene_FRANKLIN", 1000f, -4f, 0, 0, 1148846080, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_1352, Local_1170.f_9, func_198(3), "Hump_Exit_Scene_CHOP", 1000f, -4f, 0, 0, 1148846080, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_1354, Local_1170.f_9, func_198(3), "Hump_Exit_Scene_LADYDOG", 1000f, -4f, 0, 0, 1148846080, 0);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(Local_1170.f_9, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_1352, 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_1354, 0, 0);
				func_54();
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_1395, Local_1170.f_9, "Hump_Exit_Scene_CAM", func_198(3));
			}
			iLocal_1762 = MISC::GET_GAME_TIMER();
			iLocal_1110 = 1;
			break;
		
		case 1:
			if (!bLocal_1564)
			{
				if (!iLocal_1565)
				{
					if (func_239("FKN0_MALE", 1, 0, 0, 1))
					{
						iLocal_1565 = 1;
						bLocal_1564 = true;
					}
				}
				else
				{
					bLocal_1564 = func_239("FC_GOAWAY", 1, 0, 0, 1);
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_1170.f_9))
			{
			}
			else
			{
				iLocal_1110 = 2;
			}
			break;
		
		case 2:
			func_254(6);
			func_48(0, 3, 0);
			iLocal_1561 = 1;
			iLocal_1559 = 0;
			iLocal_1471 = 0;
			break;
	}
}

void func_254(int iParam0)//Position - 0x2308B
{
	if (!PED::IS_PED_INJURED(iLocal_1352))
	{
		switch (iParam0)
		{
			case 2:
				TASK::TASK_PLAY_ANIM(iLocal_1352, func_198(3), "FRA_0_IG_15_CHOP_SPOTS_DOG", 8f, -8f, -1, 0, 0, 0, 0, 0);
				iLocal_1571 = 1;
				iLocal_1567 = 0;
				break;
			
			case 1:
				TASK::TASK_PLAY_ANIM(iLocal_1352, func_198(0), "FRA0_IG_12_CHOP_WAITING_B", 8f, -8f, -1, 1, 0, 0, 0, 0);
				break;
			
			case 3:
				if (!PED::IS_PED_INJURED(iLocal_1354))
				{
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_1843);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_1843);
					Local_1712 = { 502.9178f, -648.6818f, 23.75121f };
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 506.2516f, -650.0049f, 23.75121f, 3f, 20000, 10f, 0, 69.6f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 506.2516f, -650.0049f, 23.75121f, 2f, 20000, 1.1f, 0, 69.6f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1712, 1f, 20000, 0.08f, 0, 71.1f);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_1843);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_1352, uLocal_1843);
				}
				break;
			
			case 4:
				func_227(8000, -1, -1);
				iLocal_1799 = MISC::GET_GAME_TIMER();
				break;
			
			case 5:
				if (GlobalFunc_663("FC_CLOSER", 0, 0))
				{
					GlobalFunc_7206(0, 1, 0, 0);
				}
				GlobalFunc_571(0, -1);
				break;
			
			case 6:
				iLocal_1784 = MISC::GET_GAME_TIMER();
				GlobalFunc_571(0, -1);
				if (!PED::IS_PED_INJURED(iLocal_1354))
				{
					if (iLocal_1202 >= 4)
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_1354, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
					}
				}
				PED::SET_PED_CAN_RAGDOLL(iLocal_1352, 1);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_1352, 1);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1843);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_1843);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 519.48f, -657.47f, 23.79f, 3f, 20000, 2f, 0, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_79(27), 3f, 20000, 1f, 0, 40000f);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_1843);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_1352, uLocal_1843);
				break;
			
			case 7:
				iLocal_1567 = 0;
				break;
		}
		iLocal_1785 = MISC::GET_GAME_TIMER();
		iLocal_1202 = iParam0;
	}
}

void func_255()//Position - 0x2329A
{
	int iVar0;
	
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0))
	{
		VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(uLocal_1366[0], 0);
	}
	switch (iLocal_1110)
	{
		case 0:
			iLocal_1762 = MISC::GET_GAME_TIMER();
			AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 0);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Franklin", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_1351))
			{
				TASK::TASK_CLEAR_LOOK_AT(iLocal_1351);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1351, "Lamar", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_1352))
			{
				ENTITY::DETACH_ENTITY(iLocal_1352, 1, 1);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1352, "Chop", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(Local_1158))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1158, "Ballas_OG", 0, 0, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_1366[0], 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_1366[0], "Kidnapping_Van", 0, 0, 32);
			}
			GlobalFunc_4956();
			CUTSCENE::START_CUTSCENE(2048);
			iLocal_1702 = 0;
			RECORDING::_0x48621C9FCA3EBD28(4);
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
			iLocal_1110 = 1;
			break;
		
		case 1:
			if (!iLocal_1473)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					func_46();
					MISC::CLEAR_AREA(511.55f, -652.05f, 23.75f, 20f, 1, 1, 0, 0);
					MISC::CLEAR_AREA_OF_PROJECTILES(511.9636f, -658.3705f, 23.75104f, 25f, 0);
					FIRE::STOP_FIRE_IN_RANGE(511.9636f, -658.3705f, 23.75104f, 25f);
					GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(511.9636f, -658.3705f, 23.75104f, 25f);
					GlobalFunc_2904(&Local_1111, 1, 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0))
					{
						VEHICLE::REMOVE_VEHICLE_WINDOW(uLocal_1366[0], 0);
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(uLocal_1366[0], 0, 0, 0f);
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(uLocal_1366[0], 3, 0, 0f);
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(uLocal_1366[0], 2, 0, 0f);
					}
					GlobalFunc_2882(uLocal_1366[0]);
					func_42(6);
					if (bLocal_1470)
					{
						CAM::DO_SCREEN_FADE_IN(800);
						bLocal_1470 = false;
					}
					else if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					iLocal_1473 = 1;
				}
			}
			if (!iLocal_1663)
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Ballas_OG", 0)))
				{
					iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Ballas_OG", joaat("csb_ballasog")));
					if (!PED::IS_PED_INJURED(iVar0))
					{
						PED::APPLY_PED_BLOOD_SPECIFIC(iVar0, 2, 0.536f, 0.601f, 93.24f, 0.695f, -1, 0f, "stab");
						PED::APPLY_PED_BLOOD_SPECIFIC(iVar0, 2, 0.536f, 0.561f, 95.04f, 0.695f, -1, 0f, "stab");
						PED::APPLY_PED_BLOOD_SPECIFIC(iVar0, 2, 0.476f, 0.531f, 95.14f, 0.695f, -1, 0f, "stab");
						iLocal_1663 = 1;
					}
				}
			}
			if (!bLocal_1692)
			{
				if (bLocal_1691)
				{
					bLocal_1692 = GlobalFunc_2867("FRA0_BADDY");
				}
			}
			if (CUTSCENE::GET_CUTSCENE_TIME() >= 37400)
			{
			}
			if (!iLocal_1702)
			{
				if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() >= (CUTSCENE::GET_CUTSCENE_TOTAL_DURATION() - 300))
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_1702 = 1;
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				RECORDING::_0x81CBAE94390F9F89();
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_1366[0], -1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Ballas_OG", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0) && !PED::IS_PED_INJURED(Local_1158))
				{
					PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(Local_1158, 0);
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_1158, 0);
					PED::SET_PED_INTO_VEHICLE(Local_1158, uLocal_1366[0], 2);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1158, 0, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Chop", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0) && !PED::IS_PED_INJURED(iLocal_1352))
				{
					func_689(iLocal_1352, uLocal_1366[0], &uLocal_1345, &uLocal_1750, 1, 1, 0, 0, 0, 0, 0, 0);
					ENTITY::SET_ENTITY_PROOFS(iLocal_1352, 0, 1, 1, 0, 0, 0, 0, 1);
					PED::SET_PED_CAN_RAGDOLL(iLocal_1352, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lamar", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0) && !PED::IS_PED_INJURED(iLocal_1351))
				{
					func_44(0);
					PED::SET_PED_INTO_VEHICLE(iLocal_1351, uLocal_1366[0], 0);
					TASK::TASK_PLAY_ANIM(iLocal_1351, func_198(4), "InCar_PhoneIdle_Lem", 1000f, -8f, -1, 1, 0, 0, 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_1351, 0, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Kidnapping_Van", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0))
				{
					func_41();
					func_7(0, 1, -1, CUTSCENE::WAS_CUTSCENE_SKIPPED(), 1, 1, 1, 1);
					func_256(4, 0, 1, 1, 0, 1, 1, 1);
				}
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0))
			{
				VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(uLocal_1366[0], 1, 1, 1);
			}
			if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0);
			}
			break;
		
		case 2:
			break;
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
}

void func_256(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)//Position - 0x2374A
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	struct<3> Var10;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	
	iParam7 = iParam7;
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				if (!bLocal_1470)
				{
					Var0 = { func_79(1) };
					fVar3 = 93.3f;
				}
				else
				{
					Var0 = { func_79(2) };
					fVar3 = -106.5f;
				}
				break;
			
			case 1:
				Var0 = { func_79(11) };
				fVar3 = 164.8f;
				break;
			
			case 2:
				Var0 = { func_79(5) };
				fVar3 = -19.4f;
				break;
			
			case 3:
				if (!bLocal_1470)
				{
					Var0 = { func_79(20) };
					fVar3 = 137.26f;
				}
				else
				{
					Var0 = { 517.1f, -647.4f, 24.2f };
					fVar3 = -86f;
				}
				break;
			
			case 4:
				if (!bLocal_1470)
				{
					Var0 = { func_79(7) };
					fVar3 = 175.46f;
				}
				else
				{
					Var0 = { func_79(4) };
					fVar3 = 143.1f;
				}
				break;
		}
		GlobalFunc_2657();
		if (bParam5)
		{
			MISC::CLEAR_AREA(Var0, 10000f, 1, 0, 0, 0);
			if (iParam0 == 3)
			{
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(539.1184f, -626.1908f, 23.78954f, 40f);
			}
		}
		SYSTEM::WAIT(0);
		MISC::SET_WEATHER_TYPE_NOW_PERSIST("extrasunny");
		if (GlobalFunc_Is_Mission_Retry() && !iLocal_1693)
		{
			GlobalFunc_4972(Var0, fVar3, 1, 0);
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fVar3);
		}
	}
	func_682(iParam0, 1, 0);
	func_677(iParam0, 1, 0);
	func_672(iParam0, 1, 0);
	func_666(iParam0, 1, 0);
	func_661(iParam0, 1, 0);
	func_656(iParam0, 1, 0);
	func_650(iParam0, 1, 0);
	func_639(iParam0, 1, 0);
	func_638(1);
	CUTSCENE::REMOVE_CUTSCENE();
	iLocal_1109 = 0;
	func_636(iParam0);
	if (bParam6)
	{
		func_219();
	}
	GlobalFunc_7206((iParam2 || bParam1), (iParam2 || bParam1), 1, 0);
	GlobalFunc_4948(&uLocal_27, 0, 0);
	if (bParam1)
	{
		iVar4 = GlobalFunc_4283(iParam0);
		iVar5 = GlobalFunc_237(iVar4);
		if (GlobalFunc_8315() != iVar4)
		{
			while (!func_482(&(Local_1111[iVar5]), iVar4, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 0, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			while (!GlobalFunc_9134(&Local_1111, iVar5))
			{
				SYSTEM::WAIT(0);
			}
			while (!GlobalFunc_10979(&Local_1111, 1, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			iVar6 = 0;
			while (iVar6 < 3)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1111[iVar6]))
				{
					PED::DELETE_PED(&(Local_1111[iVar6]));
				}
				iVar6++;
			}
		}
	}
	if (bParam1 || iParam4)
	{
		if (bParam1)
		{
			iVar7 = 0;
			while (iVar7 <= 9)
			{
				GlobalFunc_200(&uLocal_1846, iVar7);
				iVar7++;
			}
		}
		GlobalFunc_173(&uLocal_1846, 2, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		Local_1111.f_6 = GlobalFunc_237(GlobalFunc_4283(iParam0));
		func_431(iParam0);
		func_430(PLAYER::PLAYER_PED_ID(), GlobalFunc_4283(iParam0), iParam0);
		if (bParam1)
		{
			GlobalFunc_2868();
			while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
			{
				SYSTEM::WAIT(0);
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0))
		{
			if (iParam0 >= 4)
			{
				VEHICLE::REMOVE_VEHICLE_WINDOW(uLocal_1366[0], 0);
			}
		}
		if (iParam0 > 0)
		{
			func_420(iParam0);
		}
	}
	if (bParam3)
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
	}
	if (bParam1)
	{
		VEHICLE::DELETE_ALL_TRAINS();
	}
	func_31(&Local_1184, &Local_1111, 0);
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				func_419();
				if (GlobalFunc_Is_Mission_Retry())
				{
					if (GlobalFunc_7984())
					{
						if (GlobalFunc_5667(GlobalFunc_2575(), 0f, 0f, 0f, 1))
						{
							iVar8 = func_397(func_79(30), 95.68f);
							GlobalFunc_10236(iVar8, func_79(30), 95.68f, 24, 0);
						}
					}
				}
			}
			iLocal_1397[23] = 0;
			func_367(iParam0, 1);
			func_365(iParam0, 1);
			func_364(1, 0);
			func_363(0);
			if (!bLocal_1470)
			{
				func_49(0);
			}
			PATHFIND::SET_GPS_DISABLED_ZONE(164f, -257f, -80f, 436f, 62f, 120f);
			if (bParam1)
			{
				if (!PED::IS_PED_INJURED(iLocal_1351))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_1351, func_79(12), 1, 0, 0, 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_1352))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_1352, func_79(15), 1, 0, 0, 1);
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_1352))
			{
				AUDIO::SET_ANIMAL_MOOD(iLocal_1352, 1);
			}
			iLocal_1813 = MISC::GET_GAME_TIMER() + 100;
			iLocal_1812 = MISC::GET_GAME_TIMER() + 1500;
			iLocal_1839 = MISC::GET_GAME_TIMER() + 2000;
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			break;
		
		case 1:
			if (bParam1)
			{
				iLocal_1669 = 0;
				func_367(iParam0, 1);
				func_365(iParam0, 1);
				func_362(iParam0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_1366[0], 1, 1);
				}
			}
			else
			{
				if (!PED::IS_PED_INJURED(iLocal_1352))
				{
					ENTITY::DETACH_ENTITY(iLocal_1352, 1, 1);
				}
				func_689(iLocal_1352, uLocal_1366[0], &uLocal_1345, &uLocal_1750, 0, 1, 0, 0, 0, 0, 0, 0);
				ENTITY::SET_ENTITY_PROOFS(iLocal_1352, 0, 1, 1, 0, 0, 0, 0, 1);
				PED::SET_PED_CAN_RAGDOLL(iLocal_1352, 0);
			}
			PED::REQUEST_PED_VISIBILITY_TRACKING(iLocal_1352);
			func_364(1, 1);
			if (!bParam1)
			{
				MISC::CLEAR_AREA(143.22f, -458.9f, 41.05f, 810f, 1, 0, 0, 0);
			}
			func_80(1);
			func_44(1);
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, 1);
			if (!PED::IS_PED_INJURED(iLocal_1353))
			{
				TASK::TASK_COWER(iLocal_1353, -1);
			}
			PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), 1);
			PATHFIND::SET_GPS_DISABLED_ZONE(0f, 0f, 0f, 0f, 0f, 0f);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0))
			{
				iLocal_1759 = ENTITY::GET_ENTITY_HEALTH(uLocal_1366[0]);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uLocal_1366[0], 1);
			}
			fLocal_461 = 50f;
			bLocal_61 = true;
			bLocal_68 = true;
			uLocal_1796 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(293.1273f, -83.67029f, 69.13698f, 5.1f, 0f, 0);
			func_358(func_361(), 1, 1, 1);
			func_357(0);
			func_356(1);
			func_355();
			func_354();
			func_49(2);
			STREAMING::SET_PED_POPULATION_BUDGET(2);
			if (!PED::IS_PED_INJURED(iLocal_1352))
			{
				AUDIO::STOP_PED_SPEAKING(iLocal_1352, 1);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[1], 0))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_1366[1], "FRANKLIN_0_Bike_Group", 0);
			}
			if (bParam1)
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					func_353();
				}
				GlobalFunc_2867("FRA0_CHASE_RESTART");
			}
			break;
		
		case 2:
			if (bParam1)
			{
				iLocal_1340 = 2;
				func_352();
				func_367(iParam0, 1);
				func_365(iParam0, 1);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_1366[0], 1, 1);
				}
			}
			VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(uLocal_1796);
			func_363(0);
			func_351();
			if (bParam1)
			{
				MISC::CLEAR_AREA(466f, -579f, 28f, 10000f, 1, 0, 0, 0);
			}
			func_364(1, 1);
			if (bParam1)
			{
				MISC::CLEAR_AREA_OF_OBJECTS(494f, -516f, 23f, 10f, 2);
			}
			Local_1170 = iLocal_1352;
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uLocal_1366[0], 0);
			}
			func_227(11000, -1, -1);
			if (!PED::IS_PED_INJURED(Local_1158))
			{
				if (!bParam1)
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_1158, "FRANKLIN_0_D_Group", 0);
				}
				PED::REQUEST_PED_VISIBILITY_TRACKING(Local_1158);
				if (!HUD::DOES_BLIP_EXIST(uLocal_1389))
				{
					uLocal_1389 = func_230(Local_1158, 1, 145);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1158, 1);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_1158, iLocal_2011);
				if (bParam1)
				{
					PED::FORCE_PED_MOTION_STATE(Local_1158, -1115154469, true, 1, 0);
				}
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_1158, 3f);
			}
			if (!PED::IS_PED_INJURED(iLocal_1352))
			{
				ENTITY::SET_ENTITY_PROOFS(iLocal_1352, 0, 0, 0, 0, 0, 0, 0, 1);
				ENTITY::DETACH_ENTITY(iLocal_1352, 1, 1);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_1352, iLocal_2011);
				if (bParam1)
				{
				}
				PED::SET_PED_CAN_RAGDOLL(iLocal_1352, 1);
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_1352, 3f);
				uLocal_1392 = func_230(iLocal_1352, 0, 102);
			}
			if (!PED::IS_PED_INJURED(iLocal_1351) && VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0))
			{
				if (!bParam1)
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_1351, uLocal_1366[0], 0))
					{
						ENTITY::DETACH_ENTITY(iLocal_1351, 1, 1);
						PED::SET_PED_INTO_VEHICLE(iLocal_1351, uLocal_1366[0], -1);
					}
				}
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uLocal_1366[0], 1);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_1351, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
			}
			func_349(&Local_1184);
			if (bParam1)
			{
				func_346(1, 0, 1, 1, 1);
				bLocal_1630 = false;
			}
			else
			{
				bLocal_1630 = true;
			}
			func_343();
			func_342();
			if (bParam1)
			{
				GlobalFunc_2867("FRA0_FOOT_CHASE_RESTART");
				func_49(3);
			}
			else
			{
				GlobalFunc_2867("FRA0_FRANK_CHASE");
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[1], 0))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uLocal_1366[1], 0);
				}
			}
			if (!bParam1)
			{
				iLocal_1475 = 1;
			}
			break;
		
		case 3:
			func_341();
			func_364(1, 1);
			func_363(0);
			iLocal_1805 = 123;
			if (bParam1)
			{
				func_367(iParam0, 1);
				func_365(iParam0, 1);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0))
				{
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uLocal_1366[0], 1);
					VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_1366[0], 1, 1);
				}
				iLocal_1568 = 0;
				iLocal_1816 = func_338(1, 1);
				iLocal_1594 = 0;
				iLocal_1596 = 0;
				bLocal_1642 = false;
				iLocal_1344 = 2;
				iLocal_1773 = MISC::GET_GAME_TIMER();
				iLocal_1773 = iLocal_1773;
				func_336(1, 3, 0);
				func_336(2, 3, 0);
				iLocal_1778[0] = MISC::GET_GAME_TIMER();
				iLocal_1778[1] = (MISC::GET_GAME_TIMER() - 10000);
				iLocal_1778[2] = (MISC::GET_GAME_TIMER() - 10000);
				func_759();
				SYSTEM::WAIT(0);
				func_343();
				func_349(&Local_1184);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0))
			{
				ENTITY::SET_ENTITY_COORDS(uLocal_1366[0], func_79(31), 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uLocal_1366[0], 87.3f);
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_1366[0], 1);
			}
			iVar9 = 0;
			while (iVar9 < 6)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1204[iVar9 /*5*/]))
				{
					PED::DELETE_PED(&(Local_1204[iVar9 /*5*/]));
				}
				iVar9++;
			}
			iVar9 = 0;
			while (iVar9 < iLocal_1355)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1355[iVar9]))
				{
					PED::DELETE_PED(&(iLocal_1355[iVar9]));
				}
				iVar9++;
			}
			iVar9 = 0;
			while (iVar9 < 7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_1369[iVar9]))
				{
					VEHICLE::DELETE_VEHICLE(&(uLocal_1369[iVar9]));
				}
				iVar9++;
			}
			if (!PED::IS_PED_INJURED(iLocal_1352))
			{
				PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iLocal_1352, iLocal_2011);
				uLocal_1392 = func_230(iLocal_1352, 0, 102);
				TASK::TASK_CLEAR_LOOK_AT(iLocal_1352);
				TASK::WAYPOINT_RECORDING_GET_COORD("hood8", 6, &Var10);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1843);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_1843);
				if (!bParam1)
				{
					TASK::TASK_PAUSE(0, 3500);
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var10, 3f, 20000, 0.25f, 0, 175.5f);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_1843);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_1352, uLocal_1843);
				PED::SET_PED_CAN_RAGDOLL(iLocal_1352, 1);
			}
			if (!PED::IS_PED_INJURED(Local_1158))
			{
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_1158, iLocal_2011);
			}
			if (!PED::IS_PED_INJURED(iLocal_1351))
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_1351, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0))
			{
				VEHICLE::REMOVE_VEHICLE_WINDOW(uLocal_1366[0], 0);
			}
			if (!bLocal_1470)
			{
				func_42(4);
				func_42(3);
				func_49(6);
				if (bParam1)
				{
					GlobalFunc_2867("FRA0_HIDING_RESTART");
				}
				else
				{
					GlobalFunc_2867("FRA0_SEARCH");
				}
			}
			break;
		
		case 4:
			func_364(0, 0);
			if (bParam1)
			{
				iLocal_1698 = 1;
				func_367(iParam0, 1);
				func_365(iParam0, 1);
			}
			func_363(0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0))
			{
				VEHICLE::REMOVE_VEHICLE_WINDOW(uLocal_1366[0], 0);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uLocal_1366[0], 0);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uLocal_1366[0], 1);
				VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_1366[0], 1, 1);
			}
			if (!PED::IS_PED_INJURED(Local_1158))
			{
				PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_1158, iLocal_2011);
				PED::SET_PED_CAN_RAGDOLL(Local_1158, 1);
				func_691(0);
				ENTITY::SET_ENTITY_PROOFS(Local_1158, 0, 0, 0, 0, 0, 0, 0, 0);
				PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(Local_1158, 0);
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_1158, 0);
				if (bParam1)
				{
					PED::SET_PED_INTO_VEHICLE(Local_1158, uLocal_1366[0], 2);
				}
				TASK::TASK_LOOK_AT_ENTITY(Local_1158, uLocal_1366[0], -1, 2048, 2);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1158, 1862763509);
			}
			func_49(7);
			if (bParam1)
			{
				if (bLocal_1470)
				{
					iLocal_1332 = 7;
					iLocal_1610 = 1;
					iLocal_1326 = 7;
				}
			}
			break;
	}
	if (bParam1)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (bParam1)
	{
		if (iParam0 >= 4)
		{
			func_80(1);
			func_44(0);
		}
		else if (iParam0 >= 2)
		{
			func_80(1);
			func_44(1);
		}
		else if (iParam0 < 1)
		{
			func_80(0);
			func_44(0);
		}
	}
	if (iParam0 == 1)
	{
		MISC::SET_INSTANCE_PRIORITY_HINT(2);
	}
	else
	{
		MISC::SET_INSTANCE_PRIORITY_HINT(0);
	}
	if (iParam0 >= 1 && iParam0 <= 3)
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bus"), 1);
	}
	else
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bus"), 0);
	}
	if (iParam0 >= 1 && iParam0 <= 3)
	{
		GlobalFunc_9132(1);
		Global_97297 = 1;
	}
	else
	{
		GlobalFunc_9132(0);
		Global_97297 = 0;
	}
	Global_97297 = 1;
	if (iParam0 == 2)
	{
		GRAPHICS::_0x949F397A288B28B3(4f);
	}
	else
	{
		GRAPHICS::_0x949F397A288B28B3(1f);
	}
	if (iParam0 == 2)
	{
		GlobalFunc_601(0, 1);
		GlobalFunc_601(2, 1);
	}
	else
	{
		GlobalFunc_601(0, 0);
		GlobalFunc_601(2, 0);
	}
	if (iParam0 != 1)
	{
		STREAMING::SET_PED_POPULATION_BUDGET(3);
	}
	if (iParam0 >= 1 && iParam0 <= 3)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		MISC::ENABLE_DISPATCH_SERVICE(5, 0);
		MISC::ENABLE_DISPATCH_SERVICE(3, 0);
		PED::SET_CREATE_RANDOM_COPS(0);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		MISC::ENABLE_DISPATCH_SERVICE(5, 1);
		MISC::ENABLE_DISPATCH_SERVICE(3, 1);
		PED::SET_CREATE_RANDOM_COPS(1);
	}
	iVar13 = 0;
	if (iParam0 >= 4)
	{
		iVar13 = 1;
	}
	if (func_333(iParam0))
	{
		GlobalFunc_Checkpoint2(iParam0, func_332(iParam0), iVar13, 0, 0, 1);
		if (iParam0 != 0 && !bParam1)
		{
			iLocal_1760 = 0;
		}
	}
	if (bParam1)
	{
		while (CAM::IS_SCREEN_FADING_OUT())
		{
			SYSTEM::WAIT(0);
		}
		if (!iLocal_1693)
		{
			if (GlobalFunc_Is_Mission_Retry())
			{
				if (GlobalFunc_188())
				{
					switch (iParam0)
					{
						case 4:
							iVar14 = uLocal_1366[0];
							break;
					}
					iVar15 = 1;
					iVar16 = -1;
					GlobalFunc_4967(iVar14, iVar16, iVar15);
					iLocal_1693 = 1;
				}
			}
		}
		switch (iParam0)
		{
			case 0:
				if (!bLocal_1470)
				{
					func_260();
					func_259();
					func_257();
				}
				break;
			
			case 1:
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
				{
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1115154469, false, 1, 0);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 3f);
				}
				else
				{
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), 1063765679, false, 1, 0);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 3f, 2000, 0, 1, 0);
				}
				break;
			
			case 2:
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
				{
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1115154469, true, 1, 0);
				}
				else
				{
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), 1063765679, true, 1, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_1352))
				{
					PED::FORCE_PED_MOTION_STATE(iLocal_1352, -1115154469, true, 1, 0);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_1352, 3f);
				}
				break;
			}
	}
	switch (iParam0)
	{
		case 2:
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
			{
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 2f);
			}
			else
			{
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 2000, 0, 1, 0);
			}
			break;
	}
	if (iParam0 != 2)
	{
		iLocal_1766 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1500, 3000));
	}
	else
	{
		iLocal_1766 = MISC::GET_GAME_TIMER() + 300;
	}
	iLocal_1767 = MISC::GET_GAME_TIMER();
	iLocal_1106 = iParam0;
}

void func_257()//Position - 0x2464B
{
	if (!PED::IS_PED_INJURED(iLocal_1352))
	{
		ENTITY::SET_ENTITY_HEADING(iLocal_1352, 91.93f);
		PED::FORCE_PED_MOTION_STATE(iLocal_1352, -668482597, false, 1, 0);
		PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_1352, 1f);
		func_258();
	}
}

void func_258()//Position - 0x24686
{
	TASK::TASK_GOTO_ENTITY_OFFSET_XY(iLocal_1352, iLocal_1351, -1, 0.2f, -0.8f, 3f, 1.25f, 1);
}

void func_259()//Position - 0x246AA
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
		if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
		{
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, false, 1, 0);
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		}
		else
		{
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), 1063765679, false, 1, 0);
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
		}
	}
}

void func_260()//Position - 0x2471B
{
	if (!PED::IS_PED_INJURED(iLocal_1351))
	{
		uLocal_1388 = func_230(iLocal_1351, 0, 145);
		ENTITY::SET_ENTITY_HEADING(iLocal_1351, 95.7f);
		func_261();
		PED::FORCE_PED_MOTION_STATE(iLocal_1351, -668482597, false, 1, 0);
		PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_1351, 1f);
	}
}

void func_261()//Position - 0x24763
{
	int iVar0;
	
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("hood6", ENTITY::GET_ENTITY_COORDS(iLocal_1351, 1), &iVar0);
	if (iVar0 < 2)
	{
		iVar0 = 2;
	}
	TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_1351, "hood6", iVar0 + 1, 517, -1);
}







































































char* func_332(int iParam0)//Position - 0x2B589
{
	switch (iParam0)
	{
		case 0:
			return "Get to Vinewood";
			break;
		
		case 1:
			return "Van chase";
			break;
		
		case 2:
			return "Foot chase";
			break;
		
		case 3:
			return "Find hiding bad guy";
			break;
		
		case 4:
			return "Drop off gangster";
			break;
	}
	return "invalid";
}

int func_333(int iParam0)//Position - 0x2B5EC
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
			break;
	}
	return 0;
}



void func_336(int iParam0, int iParam1, bool bParam2)//Position - 0x2B666
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	float fVar5;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 18;
			Var1 = { 526.88f, -534.26f, 24.12f };
			iVar4 = 0;
			fVar5 = 0f;
			break;
		
		case 1:
			iVar0 = 19;
			if (iParam1 == 2)
			{
				Var1 = { 543.18f, -579.82f, 25.41f };
				fVar5 = 0f;
			}
			else
			{
				Var1 = { 538.92f, -615f, 24.22f };
				fVar5 = 2.67f;
			}
			iVar4 = 1;
			break;
		
		case 2:
			iVar0 = 20;
			iVar4 = 1;
			if (iParam1 == 2)
			{
				if (bParam2)
				{
					Var1 = { 547.8f, -608.82f, 24.9f };
					fVar5 = 8f;
				}
				else
				{
					Var1 = { 532.1f, -741.2f, 24f };
					fVar5 = 0f;
				}
			}
			else
			{
				Var1 = { 556.5f, -530.7f, 24.2f };
				fVar5 = 5.5f;
			}
			break;
	}
	uLocal_1377[iParam0] = VEHICLE::CREATE_MISSION_TRAIN(iVar0, Var1, iVar4);
	VEHICLE::SET_TRAIN_CRUISE_SPEED(uLocal_1377[iParam0], fVar5);
	VEHICLE::SET_TRAIN_SPEED(uLocal_1377[iParam0], fVar5);
	if (iParam1 == 2)
	{
		func_337(1, iParam0, 1, 1);
	}
	fLocal_1755[iParam0] = fVar5;
	switch (iParam0)
	{
		case 1:
			VEHICLE::SET_VEHICLE_EXTRA(VEHICLE::GET_TRAIN_CARRIAGE(uLocal_1377[iParam0], 1), 1, true);
			VEHICLE::SET_VEHICLE_EXTRA(VEHICLE::GET_TRAIN_CARRIAGE(uLocal_1377[iParam0], 2), 1, false);
			break;
		
		case 2:
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(VEHICLE::GET_TRAIN_CARRIAGE(uLocal_1377[iParam0], 1), 3);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(VEHICLE::GET_TRAIN_CARRIAGE(uLocal_1377[iParam0], 2), 1);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(VEHICLE::GET_TRAIN_CARRIAGE(uLocal_1377[iParam0], 3), 2);
			break;
	}
}

void func_337(bool bParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x2B804
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (bParam0)
	{
		iVar0 = uLocal_1377[iParam1];
		iVar1 = iParam1 + 7;
	}
	else
	{
		iVar0 = uLocal_1369[iParam1];
		iVar1 = iParam1;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
	{
		bVar2 = iParam3;
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1355[iVar1]))
		{
			if (!bVar2)
			{
				if (PED::CAN_CREATE_RANDOM_DRIVER())
				{
					iLocal_1355[iVar1] = PED::CREATE_RANDOM_PED_AS_DRIVER(iVar0, 1);
				}
				else
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				STREAMING::REQUEST_MODEL(func_72(6));
				if (STREAMING::HAS_MODEL_LOADED(func_72(6)))
				{
					iLocal_1355[iVar1] = PED::CREATE_PED_INSIDE_VEHICLE(iVar0, 26, func_72(6), -1, 1, 1);
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_1355[iVar1]))
		{
			if (bParam2)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1355[iVar1], 1);
			}
			TASK::TASK_LOOK_AT_ENTITY(iLocal_1355[iVar1], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
		}
	}
}

int func_338(int iParam0, int iParam1)//Position - 0x2B8D3
{
	var uVar0;
	var uVar1;
	
	uVar1 = GlobalFunc_5153(iParam0, iParam1);
	STATS::STAT_GET_INT(uVar1, &uVar0, -1);
	return uVar0;
}



void func_341()//Position - 0x2BB5E
{
	iLocal_1354 = PED::CREATE_PED(26, func_72(4), func_79(24), 81.09f, 1, 1);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_1354, 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_1354, 4, 0, 1, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1354, 1);
	PED::SET_PED_KEEP_TASK(iLocal_1354, 1);
	PED::SET_PED_DIES_WHEN_INJURED(iLocal_1354, 1);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_1354, 0);
	ENTITY::SET_ENTITY_PROOFS(iLocal_1354, 0, 0, 0, 0, 0, 0, 0, 1);
	TASK::TASK_PLAY_ANIM(iLocal_1354, func_198(3), "FRA_0_IG_15_FEMALE_DOG_IDLE", 8f, -8f, -1, 262153, 0, 0, 0, 0);
}

void func_342()//Position - 0x2BBE9
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[1], 0))
	{
		if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(uLocal_1366[1]) > 300f)
		{
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(uLocal_1366[1], 300f);
		}
		bLocal_1632 = true;
	}
}

void func_343()//Position - 0x2BC25
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Var2 = { func_700(iVar0) };
		fVar5 = func_345(iVar0);
		Local_1235[iVar0 /*12*/] = OBJECT::CREATE_OBJECT(func_72(22), Var2, 1, 1, 0);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1235[iVar0 /*12*/], Var2, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(Local_1235[iVar0 /*12*/], fVar5);
		ENTITY::SET_ENTITY_COLLISION(Local_1235[iVar0 /*12*/], 0, 0);
		ENTITY::SET_ENTITY_VISIBLE(Local_1235[iVar0 /*12*/], 0);
		ENTITY::FREEZE_ENTITY_POSITION(Local_1235[iVar0 /*12*/], 1);
		Local_1235[iVar0 /*12*/].f_2 = 0;
		iVar1 = 0;
		while (iVar1 < 2)
		{
			Local_1235[iVar0 /*12*/].f_3[iVar1 /*4*/].f_2 = 0;
			Local_1235[iVar0 /*12*/].f_3[iVar1 /*4*/].f_3 = 0.0348647f;
			Local_1235[iVar0 /*12*/].f_3[iVar1 /*4*/] = OBJECT::CREATE_OBJECT(func_72(18), Var2, 1, 1, 0);
			func_699(iVar0, iVar1);
			if (!(iVar0 == 2 && iVar1 == 0))
			{
				Local_1235[iVar0 /*12*/].f_3[iVar1 /*4*/].f_1 = OBJECT::CREATE_OBJECT(func_72(19), Var2, 1, 1, 0);
				func_344(iVar0, iVar1);
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_344(int iParam0, int iParam1)//Position - 0x2BD4C
{
	struct<3> Var0;
	struct<3> Var3;
	
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				Var0 = { 547.6336f, -625.1866f, 25.0932f };
				Var3 = { 0f, 0f, -97f };
			}
			else
			{
				Var0 = { 550.2516f, -628.7438f, 25.1332f };
				Var3 = { 0f, 0f, 83f };
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				Var0 = { 545.6388f, -641.4614f, 25.0902f };
				Var3 = { 0f, 0f, -97f };
			}
			else
			{
				Var0 = { 548.2568f, -645.0185f, 25.0932f };
				Var3 = { 0f, 0f, 83f };
			}
			break;
		
		case 2:
			Var0 = { 528.0478f, -680.6921f, 25.1482f };
			Var3 = { 0f, 0f, 83.36f };
			break;
		
		case 3:
			if (iParam1 == 0)
			{
				Var0 = { 523.6058f, -693.3036f, 25.1182f };
				Var3 = { 0f, 0f, -96f };
			}
			else
			{
				Var0 = { 526.2855f, -696.8145f, 25.1382f };
				Var3 = { 0f, 0f, 84f };
			}
			break;
		
		case 4:
			if (iParam1 == 0)
			{
				Var0 = { 517.8303f, -704.0568f, 25.1782f };
				Var3 = { 0f, 0f, -95.66f };
			}
			else
			{
				Var0 = { 520.5307f, -707.5518f, 25.1332f };
				Var3 = { 0f, 0f, 84.34f };
			}
			break;
	}
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1235[iParam0 /*12*/].f_3[iParam1 /*4*/].f_1, Var0, 0, 0, 1);
	ENTITY::SET_ENTITY_ROTATION(Local_1235[iParam0 /*12*/].f_3[iParam1 /*4*/].f_1, Var3, 2, 1);
	ENTITY::FREEZE_ENTITY_POSITION(Local_1235[iParam0 /*12*/].f_3[iParam1 /*4*/].f_1, 1);
}

float func_345(int iParam0)//Position - 0x2BF01
{
	switch (iParam0)
	{
		case 0:
			return 83f;
			break;
		
		case 1:
			return 83f;
			break;
		
		case 2:
			return 83.36f;
			break;
		
		case 3:
			return 84f;
			break;
		
		case 4:
			return 84.34f;
			break;
	}
	return 0f;
}

void func_346(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x2BF66
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		bVar10 = true;
		iVar11 = 0;
		bVar12 = false;
		iVar9 = 0;
		Var3 = { IntToFloat(iVar0 * 20), IntToFloat(iVar0 * 10), -10f };
		fVar6 = 0f;
		iVar1 = 0;
		iVar2 = -1;
		fVar7 = 0f;
		fVar8 = 1f;
		switch (iVar0)
		{
			case 0:
				Var3 = { 491.43f, -537.62f, 23.75f };
				fVar6 = -92.24f;
				iVar2 = 2;
				bVar12 = true;
				iVar13 = 9;
				iVar11 = 1;
				break;
			
			case 1:
				iVar1 = 11;
				iVar2 = 2;
				iVar13 = 10;
				fVar8 = 0.7f;
				break;
			
			case 2:
				Var3 = { 451.5f, -681.2f, 28.1f };
				fVar6 = -95.1f;
				iVar2 = 0;
				iVar13 = 11;
				iVar11 = 1;
				break;
			
			case 3:
				Var3 = { 488.74f, -541.46f, 23.75f };
				fVar6 = 85.92f;
				iVar2 = 1;
				iVar13 = 10;
				bVar10 = false;
				break;
			
			case 4:
				iVar1 = 1;
				fVar7 = 700f;
				fVar8 = 0.8f;
				iVar2 = 0;
				iVar13 = 11;
				iVar11 = 1;
				break;
			
			case 5:
				bVar12 = true;
				Var3 = { 464.37f, -651.16f, 28.06f };
				fVar6 = 173f;
				iVar2 = 0;
				iVar13 = 11;
				iVar11 = 1;
				break;
			
			case 6:
				iVar1 = 12;
				iVar2 = 1;
				iVar13 = 11;
				bVar10 = false;
				break;
		}
		if (iVar0 != 2 || iParam0)
		{
			if ((iVar13 == 11 && iParam3) || (iVar13 != 11 && iParam2))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_1369[iVar0]))
				{
					uLocal_1369[iVar0] = VEHICLE::CREATE_VEHICLE(func_72(iVar13), Var3, fVar6, 1, 1);
					iVar9 = 1;
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1369[iVar0], 0) && iVar9)
		{
			if (bVar10)
			{
				func_337(0, iVar0, 1, iVar11);
			}
			if (iVar2 >= 0)
			{
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uLocal_1369[iVar0], iVar2);
			}
			if (iVar0 == 4)
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_1369[iVar0], "FRANKLIN_0_Reversing_Bus", 0);
			}
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uLocal_1369[iVar0], 1);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(uLocal_1369[iVar0], 3);
			if (iVar1 > 0 && !bVar12)
			{
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_1369[iVar0], iVar1, func_348(), 1);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(uLocal_1369[iVar0], fVar7);
				VEHICLE::SET_PLAYBACK_SPEED(uLocal_1369[iVar0], fVar8);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(uLocal_1369[iVar0], 1);
				VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(uLocal_1369[iVar0]);
			}
			else
			{
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_1369[iVar0]);
				if (bVar10)
				{
					iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uLocal_1369[iVar0], -1);
					if (!PED::IS_PED_INJURED(iVar14))
					{
						switch (iVar0)
						{
							case 2:
								TASK::TASK_VEHICLE_TEMP_ACTION(iVar14, uLocal_1369[iVar0], 24, 20000);
								break;
							
							default:
								if (!bVar12)
								{
									TASK::TASK_VEHICLE_DRIVE_WANDER(iVar14, uLocal_1369[iVar0], 2.5f, 786603);
								}
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
	if (bParam1)
	{
		func_347();
	}
	if (bParam4)
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			iVar15 = 0;
			iVar16 = iVar0;
			if (iVar16 != 1 && iVar16 != 2)
			{
				switch (iVar16)
				{
					case 0:
						Var3 = { 459.48f, -618.58f, 27.51f };
						fVar6 = 168.82f;
						iVar15 = 1;
						break;
					
					case 1:
						Var3 = { 466.44f, -630.26f, 27.51f };
						fVar6 = 61.25f;
						break;
					
					case 2:
						Var3 = { 464.38f, -629.01f, 27.51f };
						fVar6 = 240.21f;
						break;
					
					case 3:
						Var3 = { 471.04f, -591.71f, 27.51f };
						fVar6 = -27f;
						iVar15 = 1;
						break;
					
					case 4:
						Var3 = { 525.01f, -475.66f, 23.73f };
						fVar6 = 173.22f;
						iVar15 = 1;
						break;
					
					case 5:
						Var3 = { 515.01f, -512.17f, 23.75f };
						fVar6 = -4.39f;
						iVar15 = 1;
						break;
				}
				bVar17 = iVar15;
				if (!bVar17)
				{
					if (PED::CAN_CREATE_RANDOM_PED(0))
					{
						Local_1204[iVar0 /*5*/] = PED::CREATE_RANDOM_PED(Var3);
						ENTITY::SET_ENTITY_HEADING(Local_1204[iVar0 /*5*/], fVar6);
					}
					else
					{
						bVar17 = true;
					}
				}
				if (bVar17)
				{
					Local_1204[iVar0 /*5*/] = PED::CREATE_PED(26, func_72(6), Var3, fVar6, 1, 1);
				}
				if (!PED::IS_PED_INJURED(Local_1204[iVar0 /*5*/]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1204[iVar0 /*5*/], 1);
					PED::SET_PED_KEEP_TASK(Local_1204[iVar0 /*5*/], 1);
				}
				Local_1204[iVar0 /*5*/].f_4 = 0;
			}
			iVar0++;
		}
	}
}

void func_347()//Position - 0x2C3E6
{
	func_336(0, 2, 0);
	func_336(1, 2, 0);
	func_336(2, 2, 0);
}

char* func_348()//Position - 0x2C403
{
	return "fchase";
}

void func_349(var uParam0)//Position - 0x2C40F
{
	if (!CAM::DOES_CAM_EXIST(uParam0->f_4))
	{
		uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
		if (uParam0->f_12 != -1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_12))
			{
				AUDIO::STOP_SOUND(uParam0->f_12);
			}
			AUDIO::RELEASE_SOUND_ID(uParam0->f_12);
			uParam0->f_12 = -1;
		}
		uParam0->f_12 = AUDIO::GET_SOUND_ID();
		uParam0->f_10 = 0;
		uParam0->f_11 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		func_350(uParam0);
	}
}

void func_350(var uParam0)//Position - 0x2C476
{
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		uParam0->f_6 = -0.15f;
		uParam0->f_7 = 0.05f;
		CAM::ATTACH_CAM_TO_PED_BONE(uParam0->f_4, uParam0->f_3, 31086, 0f, uParam0->f_6, uParam0->f_7, 1);
		CAM::SET_CAM_NEAR_CLIP(uParam0->f_4, 0.101f);
		CAM::POINT_CAM_AT_ENTITY(uParam0->f_4, uParam0->f_3, 0f, 10f, uParam0->f_7, 1);
		CAM::SET_CAM_FOV(uParam0->f_4, 96.76f);
		CAM::SET_CAM_DOF_PLANES(uParam0->f_4, 0f, 0f, 100000f, 100000f);
	}
}

void func_351()//Position - 0x2C4FA
{
	MISC::CLEAR_AREA(466f, -579f, 28f, 5f, 1, 0, 0, 0);
	VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(461f, -584f, 23f, 471f, -574f, 33f);
	MISC::CLEAR_AREA(512f, -509f, 25f, 5f, 1, 0, 0, 0);
	VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(507f, -514f, 20f, 517f, -504f, 30f);
}

void func_352()//Position - 0x2C576
{
	int iVar0;
	
	iLocal_1182 = 0;
	iLocal_1183 = 0;
	iLocal_1203 = 0;
	Local_1158.f_1 = 0;
	Local_1158.f_2 = -1;
	Local_1158.f_11 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iLocal_1526[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iLocal_1534[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Local_1204[iVar0 /*5*/].f_1 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iLocal_1538[iVar0] = 0;
		iVar0++;
	}
	iLocal_1797 = 0;
	iLocal_1524 = 0;
	iLocal_1542 = 0;
	iLocal_1543 = 0;
	iLocal_1333 = 0;
}

void func_353()//Position - 0x2C61A
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[1], 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_1366[1]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uLocal_1366[1]);
		}
		VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_1366[1], 1, 1);
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_1366[1], 1, func_361(), 1);
		VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(uLocal_1366[1], 6500f);
		VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(uLocal_1366[1], 1);
	}
}

void func_354()//Position - 0x2C67D
{
	iLocal_53 = 1;
}

void func_355()//Position - 0x2C688
{
	Local_685[0 /*3*/] = { 370.608f, 148.292f, 102.507f };
	fLocal_73[0] = -0.006632f;
	fLocal_125[0] = 0.014155f;
	fLocal_177[0] = -0.182076f;
	fLocal_229[0] = 0.98316f;
	iLocal_462[0] = 3;
	fLocal_281[0] = 6300f;
	iLocal_933[0] = joaat("emperor");
	Local_685[1 /*3*/] = { 331.042f, 319.164f, 104.564f };
	fLocal_73[1] = 0.00314f;
	fLocal_125[1] = -0.035098f;
	fLocal_177[1] = 0.793992f;
	fLocal_229[1] = -0.606906f;
	iLocal_462[1] = 6;
	fLocal_281[1] = 6900f;
	iLocal_933[1] = joaat("emperor");
	Local_685[2 /*3*/] = { 354.004f, 101.885f, 101.654f };
	fLocal_73[2] = 0.074331f;
	fLocal_125[2] = 0.014374f;
	fLocal_177[2] = -0.163023f;
	fLocal_229[2] = 0.983713f;
	iLocal_462[2] = 5;
	fLocal_281[2] = 9000f;
	iLocal_933[2] = joaat("surfer");
	Local_685[3 /*3*/] = { 338.717f, 94.4636f, 99.6961f };
	fLocal_73[3] = -0.047298f;
	fLocal_125[3] = -0.086009f;
	fLocal_177[3] = 0.979703f;
	fLocal_229[3] = 0.174778f;
	iLocal_462[3] = 4;
	fLocal_281[3] = 10800f;
	iLocal_933[3] = joaat("surfer");
	Local_685[6 /*3*/] = { 289.1492f, -78.19f, 69.8117f };
	fLocal_73[6] = -0.0056f;
	fLocal_125[6] = 0.0028f;
	fLocal_177[6] = -0.1669f;
	fLocal_229[6] = 0.986f;
	iLocal_462[6] = 9;
	fLocal_281[6] = 22029f;
	iLocal_933[6] = joaat("surge");
	Local_685[7 /*3*/] = { 277.135f, -76.6118f, 69.5846f };
	fLocal_73[7] = -0.018861f;
	fLocal_125[7] = -8.8E-05f;
	fLocal_177[7] = 0.983353f;
	fLocal_229[7] = 0.180722f;
	iLocal_462[7] = 10;
	fLocal_281[7] = 22491f;
	iLocal_933[7] = joaat("emperor");
	Local_685[8 /*3*/] = { 290.813f, -40.5747f, 71.6218f };
	fLocal_73[8] = -0.031225f;
	fLocal_125[8] = -0.06827f;
	fLocal_177[8] = 0.98142f;
	fLocal_229[8] = 0.176577f;
	iLocal_462[8] = 8;
	fLocal_281[8] = 22577f;
	iLocal_933[8] = joaat("picador");
	Local_685[9 /*3*/] = { 283.2936f, -92.4837f, 69.7937f };
	fLocal_73[9] = -0.0028f;
	fLocal_125[9] = 0.0039f;
	fLocal_177[9] = -0.2089f;
	fLocal_229[9] = 0.9779f;
	iLocal_462[9] = 11;
	fLocal_281[9] = 22100f;
	iLocal_933[9] = joaat("picador");
	Local_685[10 /*3*/] = { 260.135f, -121.876f, 67.5997f };
	fLocal_73[10] = -0.03257f;
	fLocal_125[10] = -0.065471f;
	fLocal_177[10] = 0.982638f;
	fLocal_229[10] = 0.170511f;
	iLocal_462[10] = 12;
	fLocal_281[10] = 22200f;
	iLocal_933[10] = joaat("dominator");
	Local_685[11 /*3*/] = { 181.29f, -208.808f, 53.4241f };
	fLocal_73[11] = 0.000229f;
	fLocal_125[11] = -0.000583f;
	fLocal_177[11] = 0.818823f;
	fLocal_229[11] = -0.574044f;
	iLocal_462[11] = 15;
	fLocal_281[11] = 25705f;
	iLocal_933[11] = joaat("dominator");
	Local_685[12 /*3*/] = { 193.856f, -218.429f, 53.6124f };
	fLocal_73[12] = -0.019551f;
	fLocal_125[12] = -0.00641f;
	fLocal_177[12] = 0.817768f;
	fLocal_229[12] = -0.575179f;
	iLocal_462[12] = 16;
	fLocal_281[12] = 26211f;
	iLocal_933[12] = joaat("picador");
	Local_685[13 /*3*/] = { 179.383f, -213.776f, 53.5721f };
	fLocal_73[13] = -0.00917f;
	fLocal_125[13] = -0.024153f;
	fLocal_177[13] = 0.815156f;
	fLocal_229[13] = -0.578666f;
	iLocal_462[13] = 18;
	fLocal_281[13] = 26100f;
	iLocal_933[13] = joaat("emperor");
	Local_685[14 /*3*/] = { 250.805f, -222.757f, 53.7297f };
	fLocal_73[14] = -0.008553f;
	fLocal_125[14] = -0.006151f;
	fLocal_177[14] = 0.578679f;
	fLocal_229[14] = 0.815488f;
	iLocal_462[14] = 13;
	fLocal_281[14] = 26500f;
	iLocal_933[14] = joaat("issi2");
	Local_685[15 /*3*/] = { 268.287f, -229.843f, 53.546f };
	fLocal_73[15] = -0.011404f;
	fLocal_125[15] = -0.006868f;
	fLocal_177[15] = 0.562785f;
	fLocal_229[15] = 0.826496f;
	iLocal_462[15] = 17;
	fLocal_281[15] = 26800f;
	iLocal_933[15] = 0;
	Local_685[20 /*3*/] = { 184.405f, -360.884f, 43.522f };
	fLocal_73[20] = 0.028156f;
	fLocal_125[20] = -0.004063f;
	fLocal_177[20] = -0.187644f;
	fLocal_229[20] = 0.981825f;
	iLocal_462[20] = 19;
	fLocal_281[20] = 27100f;
	iLocal_933[20] = joaat("picador");
	Local_685[21 /*3*/] = { 149.265f, -402.928f, 40.8279f };
	fLocal_73[21] = -0.016245f;
	fLocal_125[21] = -0.006338f;
	fLocal_177[21] = 0.988408f;
	fLocal_229[21] = 0.150818f;
	iLocal_462[21] = 25;
	fLocal_281[21] = 30000f;
	iLocal_933[21] = joaat("picador");
	Local_685[22 /*3*/] = { 184.745f, -374.707f, 42.5835f };
	fLocal_73[22] = 0.023113f;
	fLocal_125[22] = 0.022802f;
	fLocal_177[22] = -0.207431f;
	fLocal_229[22] = 0.977711f;
	iLocal_462[22] = 22;
	fLocal_281[22] = 31000f;
	iLocal_933[22] = joaat("emperor");
	Local_685[23 /*3*/] = { 142.21f, -473.939f, 42.6967f };
	fLocal_73[23] = -0.015556f;
	fLocal_125[23] = 0.005188f;
	fLocal_177[23] = -0.1636f;
	fLocal_229[23] = 0.98639f;
	iLocal_462[23] = 27;
	fLocal_281[23] = 32500f;
	iLocal_933[23] = joaat("ruiner");
	Local_685[24 /*3*/] = { 163.8123f, -430.8667f, 40.8155f };
	fLocal_73[24] = -0.0114f;
	fLocal_125[24] = 0.0023f;
	fLocal_177[24] = -0.1527f;
	fLocal_229[24] = 0.9882f;
	iLocal_462[24] = 24;
	fLocal_281[24] = 33039f;
	iLocal_933[24] = joaat("surge");
	Local_685[25 /*3*/] = { 141.901f, -496.677f, 42.9011f };
	fLocal_73[25] = -0.008686f;
	fLocal_125[25] = 0.008488f;
	fLocal_177[25] = -0.139259f;
	fLocal_229[25] = 0.990182f;
	iLocal_462[25] = 29;
	fLocal_281[25] = 34000f;
	iLocal_933[25] = joaat("surge");
	Local_685[27 /*3*/] = { 151.388f, -465.998f, 41.923f };
	fLocal_73[27] = -0.035501f;
	fLocal_125[27] = 0.005991f;
	fLocal_177[27] = -0.151597f;
	fLocal_229[27] = 0.987786f;
	iLocal_462[27] = 28;
	fLocal_281[27] = 35500f;
	iLocal_933[27] = joaat("serrano");
	Local_685[29 /*3*/] = { 126.577f, -495.934f, 42.7229f };
	fLocal_73[29] = 0.004987f;
	fLocal_125[29] = 0.000985f;
	fLocal_177[29] = 0.986378f;
	fLocal_229[29] = 0.164417f;
	iLocal_462[29] = 30;
	fLocal_281[29] = 37500f;
	iLocal_933[29] = joaat("serrano");
	Local_685[30 /*3*/] = { 109.107f, -551.095f, 42.9767f };
	fLocal_73[30] = 0.003323f;
	fLocal_125[30] = 0.006051f;
	fLocal_177[30] = 0.985997f;
	fLocal_229[30] = 0.166621f;
	iLocal_462[30] = 34;
	fLocal_281[30] = 38300f;
	iLocal_933[30] = joaat("picador");
	Local_685[33 /*3*/] = { 138.572f, -587.025f, 43.6916f };
	fLocal_73[33] = -0.009659f;
	fLocal_125[33] = -0.014386f;
	fLocal_177[33] = 0.824594f;
	fLocal_229[33] = -0.565459f;
	iLocal_462[33] = 35;
	fLocal_281[33] = 40500f;
	iLocal_933[33] = joaat("issi2");
	Local_685[34 /*3*/] = { 231.514f, -688.146f, 36.2398f };
	fLocal_73[34] = 0.034012f;
	fLocal_125[34] = 0.021372f;
	fLocal_177[34] = -0.157919f;
	fLocal_229[34] = 0.986635f;
	iLocal_462[34] = 40;
	fLocal_281[34] = 44000f;
	iLocal_933[34] = joaat("dilettante");
	Local_685[35 /*3*/] = { 244.913f, -595.018f, 42.6265f };
	fLocal_73[35] = -0.022264f;
	fLocal_125[35] = -0.018083f;
	fLocal_177[35] = 0.975585f;
	fLocal_229[35] = 0.217742f;
	iLocal_462[35] = 36;
	fLocal_281[35] = 45000f;
	iLocal_933[35] = joaat("surge");
	Local_685[36 /*3*/] = { 232.357f, -637.287f, 39.5948f };
	fLocal_73[36] = -0.007482f;
	fLocal_125[36] = -0.045975f;
	fLocal_177[36] = 0.98294f;
	fLocal_229[36] = 0.17793f;
	iLocal_462[36] = 37;
	fLocal_281[36] = 45800f;
	iLocal_933[36] = joaat("issi2");
	Local_685[37 /*3*/] = { 190.257f, -798.034f, 31.049f };
	fLocal_73[37] = 0.023148f;
	fLocal_125[37] = 0.011794f;
	fLocal_177[37] = -0.181103f;
	fLocal_229[37] = 0.98312f;
	iLocal_462[37] = 41;
	fLocal_281[37] = 47700f;
	iLocal_933[37] = joaat("ruiner");
	Local_685[38 /*3*/] = { 185.226f, -799.949f, 30.9391f };
	fLocal_73[38] = 0.009881f;
	fLocal_125[38] = -0.000991f;
	fLocal_177[38] = -0.157923f;
	fLocal_229[38] = 0.987401f;
	iLocal_462[38] = 42;
	fLocal_281[38] = 47700f;
	iLocal_933[38] = joaat("issi2");
	Local_685[39 /*3*/] = { 209.914f, -698.063f, 35.545f };
	fLocal_73[39] = -0.006113f;
	fLocal_125[39] = -0.035622f;
	fLocal_177[39] = 0.983831f;
	fLocal_229[39] = 0.175416f;
	iLocal_462[39] = 38;
	fLocal_281[39] = 49000f;
	iLocal_933[39] = joaat("surge");
	Local_685[40 /*3*/] = { 210.827f, -712.926f, 34.6642f };
	fLocal_73[40] = -0.003782f;
	fLocal_125[40] = -0.025728f;
	fLocal_177[40] = 0.980536f;
	fLocal_229[40] = 0.194608f;
	iLocal_462[40] = 39;
	fLocal_281[40] = 49000f;
	iLocal_933[40] = joaat("dilettante");
	Local_685[41 /*3*/] = { 178.818f, -847.36f, 30.6204f };
	fLocal_73[41] = 0.013997f;
	fLocal_125[41] = 0.004302f;
	fLocal_177[41] = -0.155335f;
	fLocal_229[41] = 0.987753f;
	iLocal_462[41] = 44;
	fLocal_281[41] = 51000f;
	iLocal_933[41] = joaat("ruiner");
	Local_685[42 /*3*/] = { 389.96f, -854.675f, 29.5846f };
	fLocal_73[42] = 0.005696f;
	fLocal_125[42] = 0.002982f;
	fLocal_177[42] = 0.725659f;
	fLocal_229[42] = 0.688024f;
	iLocal_462[42] = 48;
	fLocal_281[42] = 51600f;
	iLocal_933[42] = joaat("hauler");
	Local_685[43 /*3*/] = { 146.167f, -815.117f, 30.7372f };
	fLocal_73[43] = 0.000773f;
	fLocal_125[43] = -0.001176f;
	fLocal_177[43] = 0.802925f;
	fLocal_229[43] = -0.596078f;
	iLocal_462[43] = 46;
	fLocal_281[43] = 52000f;
	iLocal_933[43] = joaat("dilettante");
	Local_685[45 /*3*/] = { 269.023f, -847.023f, 28.8521f };
	fLocal_73[45] = -0.00897f;
	fLocal_125[45] = -0.000601f;
	fLocal_177[45] = 0.549913f;
	fLocal_229[45] = 0.835174f;
	iLocal_462[45] = 45;
	fLocal_281[45] = 54500f;
	iLocal_933[45] = joaat("emperor");
	Local_685[46 /*3*/] = { 474.185f, -848.452f, 36.2803f };
	fLocal_73[46] = -0.036736f;
	fLocal_125[46] = -0.035333f;
	fLocal_177[46] = 0.709033f;
	fLocal_229[46] = 0.703331f;
	iLocal_462[46] = 51;
	fLocal_281[46] = 56000f;
	iLocal_933[46] = joaat("dilettante");
	Local_685[48 /*3*/] = { 338.219f, -865.494f, 28.824f };
	fLocal_73[48] = 0.015373f;
	fLocal_125[48] = 0.015142f;
	fLocal_177[48] = -0.70616f;
	fLocal_229[48] = 0.707723f;
	iLocal_462[48] = 50;
	fLocal_281[48] = 59000f;
	iLocal_933[48] = joaat("dilettante");
	Local_843[1 /*3*/] = { 285.644f, 159.194f, 103.819f };
	fLocal_337[1] = 0.009833f;
	fLocal_353[1] = -0.014362f;
	fLocal_369[1] = 0.808141f;
	fLocal_385[1] = -0.588732f;
	iLocal_618[1] = 7;
	fLocal_401[1] = 14800f;
	fLocal_417[1] = 1f;
	iLocal_987[1] = joaat("emperor");
	Local_843[2 /*3*/] = { 443.814f, 112.308f, 99.295f };
	fLocal_337[2] = 0.01759f;
	fLocal_353[2] = 0.011825f;
	fLocal_369[2] = 0.579222f;
	fLocal_385[2] = 0.814895f;
	iLocal_618[2] = 2;
	fLocal_401[2] = 15500f;
	fLocal_417[2] = 1f;
	iLocal_987[2] = joaat("surge");
	Local_843[3 /*3*/] = { 265.923f, 167.687f, 104.4f };
	fLocal_337[3] = 0.011139f;
	fLocal_353[3] = -0.011657f;
	fLocal_369[3] = 0.806724f;
	fLocal_385[3] = -0.590708f;
	iLocal_618[3] = 14;
	fLocal_401[3] = 16100f;
	fLocal_417[3] = 0.9f;
	iLocal_987[3] = joaat("surge");
	Local_843[4 /*3*/] = { 278.781f, -233.142f, 53.7075f };
	fLocal_337[4] = -0.001098f;
	fLocal_353[4] = 0.002631f;
	fLocal_369[4] = 0.574218f;
	fLocal_385[4] = 0.818697f;
	iLocal_618[4] = 20;
	fLocal_401[4] = 28500f;
	fLocal_417[4] = 0.8f;
	iLocal_987[4] = joaat("picador");
	Local_843[5 /*3*/] = { 294.562f, -239.728f, 53.3336f };
	fLocal_337[5] = 0.006082f;
	fLocal_353[5] = 0.003727f;
	fLocal_369[5] = 0.558519f;
	fLocal_385[5] = 0.829461f;
	iLocal_618[5] = 21;
	fLocal_401[5] = 28600f;
	fLocal_417[5] = 0.8f;
	iLocal_987[5] = joaat("dominator");
	Local_843[6 /*3*/] = { 160.448f, -202.345f, 53.9951f };
	fLocal_337[6] = 0.00611f;
	fLocal_353[6] = -0.010066f;
	fLocal_369[6] = 0.799184f;
	fLocal_385[6] = -0.600971f;
	iLocal_618[6] = 23;
	fLocal_401[6] = 28300f;
	fLocal_417[6] = 0.9f;
	iLocal_987[6] = joaat("issi2");
	Local_843[7 /*3*/] = { 236.955f, -354.8f, 43.9326f };
	fLocal_337[7] = -0.01241f;
	fLocal_353[7] = -0.009908f;
	fLocal_369[7] = 0.575418f;
	fLocal_385[7] = 0.817706f;
	iLocal_618[7] = 26;
	fLocal_401[7] = 32500f;
	fLocal_417[7] = 0.9f;
	iLocal_987[7] = joaat("emperor");
	Local_843[8 /*3*/] = { 243.385f, -350.767f, 44.1248f };
	fLocal_337[8] = -0.011465f;
	fLocal_353[8] = 0.013013f;
	fLocal_369[8] = 0.588918f;
	fLocal_385[8] = 0.808007f;
	iLocal_618[8] = 31;
	fLocal_401[8] = 33500f;
	fLocal_417[8] = 0.9f;
	iLocal_987[8] = joaat("ruiner");
	Local_843[9 /*3*/] = { 113.611f, -316.672f, 45.3552f };
	fLocal_337[9] = 0.00846f;
	fLocal_353[9] = -0.018241f;
	fLocal_369[9] = 0.827523f;
	fLocal_385[9] = -0.561072f;
	iLocal_618[9] = 32;
	fLocal_401[9] = 32200f;
	fLocal_417[9] = 0.9f;
	iLocal_987[9] = joaat("surge");
	Local_843[10 /*3*/] = { 110.55f, -592.478f, 44.2156f };
	fLocal_337[10] = -0.007297f;
	fLocal_353[10] = 0.028491f;
	fLocal_369[10] = -0.184284f;
	fLocal_385[10] = 0.982433f;
	iLocal_618[10] = 33;
	fLocal_401[10] = 33300f;
	fLocal_417[10] = 1E-07f;
	iLocal_987[10] = joaat("hauler");
	Local_843[11 /*3*/] = { 105.86f, -590.119f, 43.7371f };
	fLocal_337[11] = -0.003333f;
	fLocal_353[11] = 0.011106f;
	fLocal_369[11] = -0.189616f;
	fLocal_385[11] = 0.98179f;
	iLocal_618[11] = 49;
	fLocal_401[11] = 33300f;
	fLocal_417[11] = 1E-07f;
	iLocal_987[11] = joaat("ruiner");
	Local_843[12 /*3*/] = { 498.819f, -821.764f, 24.9128f };
	fLocal_337[12] = -0.006844f;
	fLocal_353[12] = 0.004888f;
	fLocal_369[12] = 0.711778f;
	fLocal_385[12] = 0.702352f;
	iLocal_618[12] = 53;
	fLocal_401[12] = 58500f;
	fLocal_417[12] = 1f;
	iLocal_987[12] = joaat("bus");
	Local_843[13 /*3*/] = { 457.43f, -827.98f, 27.4745f };
	fLocal_337[13] = 0.00146f;
	fLocal_353[13] = -0.052743f;
	fLocal_369[13] = 0.7108f;
	fLocal_385[13] = -0.701412f;
	iLocal_618[13] = 52;
	fLocal_401[13] = 65000f;
	fLocal_417[13] = 1f;
	iLocal_987[13] = joaat("bus");
	Local_843[14 /*3*/] = { 427.612f, -680.204f, 29.2124f };
	fLocal_337[14] = 0.009204f;
	fLocal_353[14] = 0.021699f;
	fLocal_369[14] = -0.705913f;
	fLocal_385[14] = 0.707905f;
	iLocal_618[14] = 54;
	fLocal_401[14] = 69570f;
	fLocal_417[14] = 1f;
	iLocal_987[14] = joaat("bus");
}

void func_356(bool bParam0)//Position - 0x2DADC
{
	bLocal_71 = bParam0;
}

void func_357(int iParam0)//Position - 0x2DAE8
{
	bLocal_66 = iParam0;
}

void func_358(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x2DAF4
{
	struct<3> Var0;
	
	StringCopy(&cLocal_916, sParam0, 64);
	bLocal_49 = true;
	iLocal_54 = 0;
	iLocal_668 = 0;
	iLocal_669 = 0;
	iLocal_670 = 0;
	iLocal_671 = iParam1;
	iLocal_672 = 0;
	iLocal_673 = 0;
	iLocal_674 = 0;
	iLocal_678 = 0;
	iLocal_681 = 0;
	iLocal_679 = -1;
	iLocal_680 = -1;
	iLocal_682 = 0;
	iLocal_683 = 0;
	fLocal_457 = 0f;
	fLocal_458 = 0f;
	fLocal_443 = 0f;
	iLocal_55 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		Local_892.x = (Var0.x - 100f);
		Local_892.f_1 = (Var0.f_1 - 100f);
		Local_892.f_2 = (Var0.f_2 - 100f);
		Local_895.x = (Var0.x + 100f);
		Local_895.f_1 = (Var0.f_1 + 100f);
		Local_895.f_2 = (Var0.f_2 + 100f);
		PATHFIND::SET_ROADS_IN_AREA(Local_892, Local_895, 0, 0);
		if (bParam2)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(Var0, 500f, 0, 0, 0, 0, 0);
		}
	}
	PED::ADD_RELATIONSHIP_GROUP("rgh_traffic", &iLocal_932);
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
	func_359();
}

void func_359()//Position - 0x2DC15
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 51)
	{
		iLocal_1006[iVar0] = 0;
		Local_685[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_73[iVar0] = 0f;
		fLocal_125[iVar0] = 0f;
		fLocal_177[iVar0] = 0f;
		fLocal_229[iVar0] = 0f;
		iLocal_462[iVar0] = 0;
		fLocal_281[iVar0] = 0f;
		iLocal_514[iVar0] = 0;
		iLocal_933[iVar0] = 0;
		iLocal_566[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iLocal_1058[iVar0] = 0;
		iVar0++;
	}
	iLocal_668 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iLocal_1067[iVar0] = 0;
		Local_839[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_433[iVar0] = 0f;
		fLocal_435[iVar0] = 0f;
		fLocal_437[iVar0] = 0f;
		fLocal_439[iVar0] = 0f;
		iLocal_666[iVar0] = 0;
		iLocal_985[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iLocal_1085[iVar0] = 0;
		iVar0++;
	}
	iLocal_670 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iLocal_1069[iVar0] = 0;
		Local_843[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_337[iVar0] = 0f;
		fLocal_353[iVar0] = 0f;
		fLocal_369[iVar0] = 0f;
		fLocal_385[iVar0] = 0f;
		iLocal_618[iVar0] = 0;
		fLocal_401[iVar0] = 0f;
		iLocal_634[iVar0] = 0;
		iLocal_987[iVar0] = 0;
		iLocal_650[iVar0] = 0;
		iVar0++;
	}
	iLocal_669 = 0;
	iLocal_672 = 0;
	iLocal_675 = 0;
	iLocal_676 = 0;
	iLocal_677 = 0;
}


char* func_361()//Position - 0x2DDE8
{
	return "fcuber";
}

void func_362(int iParam0)//Position - 0x2DDF4
{
	iLocal_1353 = PED::CREATE_PED(26, func_72(5), func_79(10), 157.24f, 1, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1353, 1);
	PED::SET_PED_KEEP_TASK(iLocal_1353, 1);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_1353, 0, 0, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_1353, 2, 2, 2, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_1353, 3, 0, 2, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_1353, 4, 1, 2, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_1353, 8, 0, 1, 0);
	PED::CLEAR_ALL_PED_PROPS(iLocal_1353);
	if (iParam0 == 0)
	{
		if (!PED::IS_PED_INJURED(Local_1158))
		{
			TASK::TASK_LOOK_AT_ENTITY(iLocal_1353, Local_1158, -1, 2048, 2);
			TASK::TASK_LOOK_AT_ENTITY(Local_1158, iLocal_1353, -1, 2048, 2);
		}
	}
	else
	{
		TASK::TASK_LOOK_AT_ENTITY(iLocal_1353, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
	}
}

void func_363(int iParam0)//Position - 0x2DEA8
{
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(428.19f, -688.97f, 10f, 677.84f, -388.92f, 36f, iParam0, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-233f, -1505.74f, -10f, -199f, -1467f, 110f, iParam0, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(495.9f, -652.6f, -10f, 513f, -635.9f, 110f, iParam0, 1);
}

void func_364(bool bParam0, int iParam1)//Position - 0x2DF1F
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		switch (iVar0)
		{
			case 0:
				Var1 = { 271.58f, -842.98f, 16.61f };
				Var4 = { 554.26f, -619.07f, 48.8f };
				break;
			
			case 1:
				Var1 = { 365.07f, 67.98f, 75.12f };
				Var4 = { 509.2f, 151.22f, 121.17f };
				break;
			
			case 2:
				Var1 = { -91.34664f, -1457.385f, 0.78976f };
				Var4 = { -73.12756f, -1381.66f, 48.3357f };
				break;
			
			case 3:
				Var1 = { 454.7581f, -817.2333f, 0.7081f };
				Var4 = { 459.416f, -685.3982f, 56.66263f };
				break;
		}
		if (bParam0)
		{
			if (iParam1 || iVar0 < 3)
			{
				PATHFIND::SET_ROADS_IN_AREA(Var1, Var4, 0, 1);
			}
		}
		else
		{
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Var1, Var4, 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		switch (iVar0)
		{
			case 0:
				Var1 = { -76.73f, -1477.92f, 21.17f };
				Var4 = { 16.05f, -1447.28f, 59.54f };
				break;
			
			case 1:
				Var1 = { 487.24f, -670.92f, 0f };
				Var4 = { 591.02f, -527.37f, 100f };
				break;
			
			case 2:
				Var1 = { 515.81f, -729.95f, 0f };
				Var4 = { 567.66f, -647.36f, 100f };
				break;
			
			case 3:
				Var1 = { 454.7581f, -817.2333f, 0.7081f };
				Var4 = { 459.416f, -685.3982f, 56.66263f };
				break;
		}
		if (bParam0)
		{
			PATHFIND::SET_PED_PATHS_IN_AREA(Var1, Var4, 0, 0);
			if (iVar0 == 3)
			{
				PED::SET_PED_NON_CREATION_AREA(Var1, Var4);
			}
		}
		else
		{
			PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(Var1, Var4, 0);
			PED::CLEAR_PED_NON_CREATION_AREA();
		}
		iVar0++;
	}
}

void func_365(int iParam0, bool bParam1)//Position - 0x2E134
{
	struct<3> Var0;
	float fVar3;
	bool bVar4;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1352))
	{
		Var0 = { 0f, 0f, 0f };
		fVar3 = 0f;
		switch (iParam0)
		{
			case 0:
				Var0 = { func_79(15) };
				fVar3 = 91.93f;
				break;
			
			case 2:
				Var0 = { func_79(16) };
				fVar3 = 27.1f;
				break;
			
			case 3:
				Var0 = { func_79(23) };
				fVar3 = 156.2f;
				break;
		}
		func_366(&iLocal_1352, Var0, fVar3, 0);
		iLocal_1653 = 0;
	}
	if (!PED::IS_PED_INJURED(iLocal_1352))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1352, 1);
		PED::SET_PED_KEEP_TASK(iLocal_1352, 1);
		PED::SET_PED_DIES_WHEN_INJURED(iLocal_1352, 1);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_1352, 0);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_1352, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_1352, 1862763509);
		GlobalFunc_173(&uLocal_1846, 5, iLocal_1352, "CHOP", 0, 1);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_1352, 3, 0, iLocal_1828, 0);
		Local_1111[0] = iLocal_1352;
		Local_1184.f_3 = iLocal_1352;
		if (bParam1)
		{
			GlobalFunc_2868();
			bVar4 = false;
			while (!bVar4)
			{
				if (!PED::IS_PED_INJURED(iLocal_1352))
				{
					if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_1352))
					{
						bVar4 = true;
					}
				}
				else
				{
					bVar4 = true;
				}
				SYSTEM::WAIT(0);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_1352))
		{
			switch (iParam0)
			{
				case 0:
					AUDIO::STOP_PED_SPEAKING(iLocal_1352, 1);
					ENTITY::SET_ENTITY_PROOFS(iLocal_1352, 0, 0, 0, 0, 0, 0, 0, 1);
					break;
				
				case 1:
					func_689(iLocal_1352, uLocal_1366[0], &uLocal_1345, &uLocal_1750, 0, 1, 0, 0, 0, 0, 0, 0);
					ENTITY::SET_ENTITY_PROOFS(iLocal_1352, 0, 1, 1, 0, 0, 0, 0, 1);
					PED::SET_PED_CAN_RAGDOLL(iLocal_1352, 0);
					break;
				
				case 4:
					func_689(iLocal_1352, uLocal_1366[0], &uLocal_1345, &uLocal_1750, 1, 1, 0, 0, 0, 0, 0, 0);
					ENTITY::SET_ENTITY_PROOFS(iLocal_1352, 0, 1, 1, 0, 0, 0, 0, 1);
					PED::SET_PED_CAN_RAGDOLL(iLocal_1352, 0);
					break;
				
				default:
					ENTITY::SET_ENTITY_PROOFS(iLocal_1352, 0, 0, 0, 0, 0, 0, 0, 1);
					break;
				}
			}
	}
}

int func_366(int iParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x2E319
{
	int iVar0;
	
	iVar0 = GlobalFunc_2579();
	STREAMING::REQUEST_MODEL(iVar0);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			PED::DELETE_PED(iParam0);
		}
		*iParam0 = PED::CREATE_PED(26, iVar0, Param1, fParam4, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 1, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 2, 0, 0, 0);
		if (Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT.f_263)
		{
			PED::SET_PED_COMPONENT_VARIATION(*iParam0, 3, 0, Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT.f_254.f_4, 0);
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(*iParam0, 3, 0, 4, 0);
		}
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 5, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 6, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 7, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 8, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 9, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 10, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 11, 0, 0, 0);
		PED::CLEAR_ALL_PED_PROPS(*iParam0);
		if (bParam5)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		}
		return 1;
	}
	return 0;
}

void func_367(int iParam0, bool bParam1)//Position - 0x2E41D
{
	int iVar0;
	bool bVar1;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1351))
	{
		switch (iParam0)
		{
			case 0:
				GlobalFunc_7047(&iLocal_1351, 19, func_79(12), 95.7f, 0);
				break;
			
			case 1:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0))
				{
					GlobalFunc_7047(&iLocal_1351, 19, func_79(13), 167.35f, 0);
					func_371(0);
				}
				break;
			
			default:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0))
				{
					if (iParam0 < 4)
					{
						iVar0 = -1;
					}
					else
					{
						iVar0 = 0;
					}
					GlobalFunc_6790(&iLocal_1351, 19, uLocal_1366[0], iVar0, 0);
				}
				break;
		}
		if (!PED::IS_PED_INJURED(iLocal_1351))
		{
			PED::SET_PED_COMPONENT_VARIATION(iLocal_1351, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_1351, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_1351, 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_1351, 3, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_1351, 4, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_1351, 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_1351, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_1351, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_1351, 6, 1, 0, 0);
		}
		if (bParam1)
		{
			GlobalFunc_2868();
			bVar1 = false;
			while (!bVar1)
			{
				if (!PED::IS_PED_INJURED(iLocal_1351))
				{
					if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_1351))
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
				SYSTEM::WAIT(0);
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_1351))
	{
		PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_1351, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_1351, 1862763509);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_1351, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1351, 1);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_1351, 1);
		PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iLocal_1351, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_1351, 32, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_1351, 26, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_1351, 118, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_1351, 206, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_1351, 182, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_1351, 174, 1);
		PED::SET_PED_KEEP_TASK(iLocal_1351, 1);
		PED::SET_PED_DIES_WHEN_INJURED(iLocal_1351, 1);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_1351, func_368(0), -1, 0, 0);
		GlobalFunc_173(&uLocal_1846, 3, iLocal_1351, "LAMAR", 0, 1);
	}
}

int func_368(int iParam0)//Position - 0x2E60C
{
	switch (iParam0)
	{
		case 0:
			return joaat("weapon_pistol");
			break;
	}
	return joaat("weapon_unarmed");
}



void func_371(bool bParam0)//Position - 0x2E6F7
{
	if (!PED::IS_PED_INJURED(iLocal_1351))
	{
		if (bParam0)
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_1351, func_79(13), 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iLocal_1351, 167.35f);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_1351);
		}
		TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_1351, func_79(29), 3f, 20000, 1193033728, 1056964608);
		PED::FORCE_PED_MOTION_STATE(iLocal_1351, -1115154469, bParam0, 1, 0);
		PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_1351, 3f);
	}
}


























int func_397(struct<3> Param0, float fParam3)//Position - 0x30D70
{
	return GlobalFunc_9008(&(Global_91351.f_2167), Param0, fParam3, 0);
}






















void func_419()//Position - 0x31E56
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), func_79(1), 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 93.3f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
	}
}

void func_420(int iParam0)//Position - 0x31E8D
{
	struct<3> Var0;
	float fVar3;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 4:
			Var0 = { 0f, 10f, 0f };
			fVar3 = 0f;
			break;
		
		case 2:
			Var0 = { func_79(14) };
			fVar3 = -8.69f;
			break;
		
		case 3:
			Var0 = { func_79(21) };
			fVar3 = 173f;
			break;
	}
	Local_1158 = PED::CREATE_PED(26, func_72(2), Var0, fVar3, 1, 1);
	if (iParam0 <= 4)
	{
		ENTITY::SET_ENTITY_PROOFS(Local_1158, 0, 0, 0, 1, 1, 0, 0, 0);
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1158, 1);
	PED::SET_PED_DIES_WHEN_INJURED(Local_1158, 1);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1158, 1);
	PED::SET_PED_KEEP_TASK(Local_1158, 1);
	PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(Local_1158, 0);
	PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_1158, 1);
	PED::CLEAR_ALL_PED_PROPS(Local_1158);
	PED::SET_PED_PROP_INDEX(Local_1158, 0, 0, 0, false);
	PED::SET_PED_COMPONENT_VARIATION(Local_1158, 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1158, 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1158, 10, 0, 0, 0);
	PED::SET_PED_CONFIG_FLAG(Local_1158, 208, 1);
	PED::SET_PED_CONFIG_FLAG(Local_1158, 118, 0);
	PED::SET_PED_CONFIG_FLAG(Local_1158, 26, 1);
	GlobalFunc_173(&uLocal_1846, 4, Local_1158, "BALLASOG", 0, 1);
	if (iParam0 <= 2)
	{
		func_421(1, 0f, 2f, 4f, 0f, 1, 1, 0);
		if (iParam0 < 2)
		{
			PED::SET_PED_INTO_VEHICLE(Local_1158, uLocal_1366[1], -1);
			ENTITY::SET_ENTITY_PROOFS(uLocal_1366[1], 0, 0, 0, 1, 1, 0, 0, 0);
			VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(uLocal_1366[1], 1);
			VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(uLocal_1366[1], 0);
			VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(uLocal_1366[1], 0);
		}
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uLocal_1366[1], 0);
	}
	if (iParam0 >= 2)
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_1158, "FRANKLIN_0_D_Group", 0);
	}
	switch (iParam0)
	{
		case 0:
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_1366[1], 14, func_348(), 1);
			VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(uLocal_1366[1]);
			break;
		
		case 1:
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_1366[1], 1, func_361(), 1);
			break;
		
		case 2:
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uLocal_1366[1], 460.669f, -682.118f, 26.5919f, 0, 0, 1);
			ENTITY::SET_ENTITY_ROTATION(uLocal_1366[1], 0.0150743f, 85.4796f, 10.1482f, 2, 1);
			break;
		
		case 4:
			break;
		
		case 3:
			ENTITY::FREEZE_ENTITY_POSITION(Local_1158, 1);
			break;
	}
}

void func_421(int iParam0, struct<3> Param1, float fParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x320C5
{
	int iVar0;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[iParam0], 0))
	{
		iVar0 = func_428(iParam0);
		if (iParam0 == 0)
		{
			func_424(&(uLocal_1366[iParam0]), 19, Param1, fParam4, 0, 0);
		}
		else
		{
			uLocal_1366[iParam0] = VEHICLE::CREATE_VEHICLE(func_72(iVar0), Param1, fParam4, 1, 1);
		}
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_1366[iParam0]);
		if (!bParam5)
		{
			func_197(iVar0);
		}
		if (bParam7)
		{
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(uLocal_1366[iParam0], 0);
			VEHICLE::SET_VEHICLE_CAN_BREAK(uLocal_1366[iParam0], 0);
			ENTITY::SET_ENTITY_PROOFS(uLocal_1366[iParam0], 1, 1, 1, 1, 1, 0, 0, 0);
		}
		if (!bParam6)
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uLocal_1366[iParam0]));
		}
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(uLocal_1366[iParam0], 0);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(uLocal_1366[iParam0], 0);
		VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(uLocal_1366[iParam0], 1);
		switch (iParam0)
		{
			case 0:
				VEHICLE::SET_VEHICLE_STRONG(uLocal_1366[iParam0], 1);
				VEHICLE::SET_VEHICLE_CAN_BREAK(uLocal_1366[iParam0], 0);
				VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(uLocal_1366[iParam0], 0, 0);
				VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(uLocal_1366[iParam0], 1, 0);
				VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(uLocal_1366[iParam0], 2, 0);
				VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(uLocal_1366[iParam0], 3, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uLocal_1366[iParam0], 1);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uLocal_1366[iParam0], false);
				GlobalFunc_504(uLocal_1366[iParam0], -1);
				GlobalFunc_2223(uLocal_1366[iParam0], -1);
				iLocal_1759 = ENTITY::GET_ENTITY_HEALTH(uLocal_1366[iParam0]);
				break;
			
			case 1:
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uLocal_1366[iParam0], 1);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uLocal_1366[iParam0], 1);
				AUDIO::SET_AUDIO_VEHICLE_PRIORITY(uLocal_1366[iParam0], 3);
				break;
			}
	}
}



int func_424(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)//Position - 0x322DE
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
				GlobalFunc_5107(uParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_57));
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
				GlobalFunc_7250(uParam0, Var0);
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




int func_428(int iParam0)//Position - 0x32B26
{
	switch (iParam0)
	{
		case 0:
			return 7;
			break;
		
		case 1:
			return 8;
			break;
	}
	return 7;
}


void func_430(int iParam0, int iParam1, int iParam2)//Position - 0x32B64
{
	iParam2 = iParam2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		switch (iParam1)
		{
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

void func_431(int iParam0)//Position - 0x32B93
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			func_421(0, func_79(6), 289.94f, 1, 1, 0);
			break;
		
		case 2:
			func_421(0, func_79(8), -12.7f, 1, 1, 0);
			break;
		
		case 3:
			func_421(0, func_79(31), 87.3f, 1, 1, 0);
			break;
		
		case 4:
			if (!bLocal_1470)
			{
				func_421(0, func_79(7), 175.46f, 1, 1, 0);
			}
			else
			{
				func_421(0, func_79(4), 143.1f, 1, 1, 0);
			}
			break;
	}
	if (iParam0 >= 1 && iParam0 < 4)
	{
	}
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), func_79(11), 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 164.8f);
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), func_79(5), 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), -19.4f);
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), func_79(20), 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 137.26f);
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_1366[0], -1);
			}
			break;
	}
}



















































int func_482(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x38A2E
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
			GlobalFunc_8386(*iParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*iParam0, 0, 0);
			func_626(*iParam0);
			GlobalFunc_7694(*iParam0, 1, 0);
			GlobalFunc_7693(*iParam0);
			GlobalFunc_7707(*iParam0);
			func_484(*iParam0, bParam8);
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


int func_484(int iParam0, bool bParam1)//Position - 0x38B46
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_5101(iVar0))
	{
		GlobalFunc_5100(iVar0, 0);
		GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		func_488(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (GlobalFunc_7685(iParam0))
		{
			GlobalFunc_5100(iVar0, 0);
			GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			func_488(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[120] && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122])
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (GlobalFunc_10910(iParam0, 3, 169))
					{
						GlobalFunc_11267(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						return 1;
					}
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 6))
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 17))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 20))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 21))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 22))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 11))
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 10))
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 50))
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 14, 59))
			{
				GlobalFunc_11267(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10910(iParam0, 8, 22))
			{
				GlobalFunc_11267(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 14))
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_10910(iParam0, 12, 13))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 14))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 15))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 4))
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 3))
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 14, 82))
			{
				GlobalFunc_11267(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10910(iParam0, 8, 76))
			{
				GlobalFunc_11267(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 1))
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 2:
			if (GlobalFunc_10910(iParam0, 12, 12))
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 15))
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (GlobalFunc_10910(iParam0, 3, 71))
				{
					GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 17))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 18))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 19))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 7))
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 6))
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 14, 88))
			{
				GlobalFunc_11267(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10910(iParam0, 8, 17))
			{
				GlobalFunc_11267(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 11))
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
	}
	return 0;
}




void func_488(int iParam0, int iParam1)//Position - 0x39295
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
				iVar1 = GlobalFunc_11028(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					GlobalFunc_521(iVar0);
					func_490(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
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


void func_490(int iParam0, var uParam1, bool bParam2)//Position - 0x3950C
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
			if (GlobalFunc_11030(iParam0, iVar1, &iVar2, 0))
			{
				GlobalFunc_11267(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (GlobalFunc_11026(iParam0, iVar1, &iVar2))
			{
				GlobalFunc_11267(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_6784(741, uParam1->f_60, Global_68104, 1);
			GlobalFunc_6784(742, uParam1->f_61, Global_68104, 1);
			iVar4 = GlobalFunc_4915(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			func_493(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			if (!bParam2)
			{
				iVar5 = GlobalFunc_4915(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_493(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
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



int func_493(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x397A3
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
				Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, iVar0, GlobalFunc_11087(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					uVar41 = { GlobalFunc_7617(iVar5, 0) };
					func_493(iParam0, iVar0, uVar41[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
			GlobalFunc_10633(iParam0, 11, uVar15[11], iParam6, 0);
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
							func_493(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						func_493(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
							func_493(iParam0, 8, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
								func_493(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
									func_493(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
								func_493(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_493(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
			GlobalFunc_10633(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, GlobalFunc_11087(iParam0, 8, -1), iParam2);
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
				func_533(iParam0, iParam2, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			GlobalFunc_10633(iParam0, iParam1, iParam2, iParam6, 0);
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
					iVar3 = GlobalFunc_11068(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_493(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
							func_493(iParam0, 9, iVar97, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						func_493(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_493(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
					iVar99 = GlobalFunc_11087(iParam0, 4, -1);
					iVar100 = iParam2;
				}
				else
				{
					iVar99 = iParam2;
					iVar100 = GlobalFunc_11087(iParam0, 11, -1);
				}
				if (GlobalFunc_6729(iVar5, 11, iVar100))
				{
					if (!GlobalFunc_6728(iVar5, 4, iVar99))
					{
						if (GlobalFunc_6727(iVar5, 4, iVar99, &uVar101))
						{
							func_493(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
				}
				else if (GlobalFunc_6728(iVar5, 4, iVar99))
				{
					if (GlobalFunc_6726(iVar5, 4, iVar99, &uVar101))
					{
						func_493(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
						func_493(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar3 = GlobalFunc_11068(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_493(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (GlobalFunc_11182(iParam0, &uVar4))
		{
			func_493(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	if (iVar6 != -99)
	{
		func_493(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar9 != -99)
	{
		func_493(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar7 != -99)
	{
		func_493(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				func_493(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}








































void func_533(int iParam0, int iParam1, bool bParam2)//Position - 0x3F81C
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
	func_534(iParam0, bParam2, 0);
}

void func_534(int iParam0, bool bParam1, bool bParam2)//Position - 0x3F85E
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
		bVar15 = GlobalFunc_11184(iParam0);
		bVar16 = GlobalFunc_5010(iParam0);
		bVar17 = GlobalFunc_11183(iParam0);
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




























































































void func_626(int iParam0)//Position - 0x64A8B
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
		func_490(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
		if (!Global_89948[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!GlobalFunc_526(49))
				{
					iVar1 = GlobalFunc_11028(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					GlobalFunc_11185(GlobalFunc_4917(0), 12, 16, 0, 0, 0, 0);
				}
				if (!GlobalFunc_526(44))
				{
					iVar1 = GlobalFunc_11028(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = GlobalFunc_11028(iParam0, 4, -1);
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
				iVar1 = GlobalFunc_11028(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				GlobalFunc_521(iVar0);
				func_490(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
			}
		}
		Global_89948[iVar0] = 1;
	}
}










void func_636(int iParam0)//Position - 0x6558A
{
	int iVar0;
	
	func_637();
	switch (iParam0)
	{
		case 0:
			iLocal_1334 = 0;
			iLocal_1335 = 0;
			iLocal_1336 = 0;
			iLocal_1338 = 0;
			iLocal_1349 = 0;
			bLocal_1489 = false;
			iLocal_1485 = 0;
			bLocal_1486 = false;
			iLocal_1487 = 0;
			iLocal_1488 = 0;
			bLocal_1490 = false;
			iLocal_1493 = 0;
			iLocal_1492 = 0;
			iLocal_1494 = 0;
			iLocal_1599 = 0;
			bLocal_1491 = false;
			iLocal_1495 = 0;
			iLocal_1497 = 0;
			iLocal_1496 = 0;
			iLocal_1498 = 0;
			iLocal_1481 = 0;
			iLocal_1615 = 0;
			bLocal_1678 = false;
			bLocal_1679 = false;
			iLocal_1499 = 0;
			iLocal_1619 = 0;
			iLocal_1622 = 0;
			bLocal_1620 = false;
			iLocal_1636 = 0;
			bLocal_1637 = false;
			iLocal_1638 = 0;
			iLocal_1639 = 0;
			iLocal_1625 = 0;
			iLocal_1650 = 0;
			iLocal_1660 = 0;
			iLocal_1694 = 0;
			bLocal_1667 = false;
			iLocal_1697 = 0;
			iLocal_1668 = 0;
			iLocal_1669 = 0;
			iLocal_1675 = 0;
			iLocal_1818 = 0;
			fLocal_1842 = 0f;
			fLocal_1752 = 0f;
			iLocal_1835 = -1;
			iLocal_1764 = 0;
			iLocal_1777 = -1;
			fLocal_1748 = 0.8f;
			break;
		
		case 1:
			iLocal_1157 = 0;
			iLocal_1337 = 0;
			iLocal_1325 = 0;
			iLocal_1339 = 0;
			fLocal_1745 = 1f;
			fLocal_1746 = 1f;
			fLocal_1749 = 0f;
			iLocal_1764 = 2;
			iLocal_1769 = 0;
			iLocal_1770 = 0;
			iLocal_1500 = 0;
			iLocal_1501 = 0;
			bLocal_1503 = false;
			iLocal_1504 = 0;
			bLocal_1507 = false;
			iLocal_1508 = 0;
			bLocal_1514 = false;
			iLocal_1515 = 0;
			bLocal_1505 = false;
			iLocal_1506 = 0;
			bLocal_1509 = false;
			bLocal_1510 = false;
			iLocal_1502 = 0;
			bLocal_1516 = false;
			bLocal_1517 = false;
			bLocal_1518 = false;
			bLocal_1519 = false;
			bLocal_1520 = false;
			iLocal_1660 = 0;
			iLocal_1592 = 0;
			iLocal_1521 = 0;
			iLocal_1522 = 0;
			iLocal_1523 = 0;
			iLocal_1499 = 0;
			bLocal_1512 = false;
			iLocal_1513 = 0;
			bLocal_1680 = false;
			bLocal_1681 = false;
			bLocal_1621 = false;
			iLocal_1625 = 0;
			bLocal_1632 = false;
			iLocal_1649 = 0;
			bLocal_1645 = false;
			iLocal_1652 = 0;
			bLocal_1556 = false;
			iLocal_1666 = 0;
			bLocal_1670 = false;
			iLocal_1671 = 0;
			iLocal_1674 = 0;
			iLocal_1818 = 0;
			iLocal_1834 = -1;
			func_352();
			break;
		
		case 2:
			iLocal_1155 = 0;
			Local_1170.f_1 = 0;
			Local_1170.f_2 = -1;
			Local_1170.f_11 = 0;
			Local_1184 = 0;
			iLocal_1202 = 0;
			iLocal_1329 = 0;
			iLocal_1341 = 0;
			iLocal_1331 = 0;
			iLocal_1340 = 0;
			bLocal_1511 = false;
			iLocal_1525 = 0;
			iLocal_1608 = 0;
			iLocal_1499 = 0;
			iLocal_1544 = 0;
			iLocal_1546 = 0;
			bLocal_1545 = false;
			bLocal_1548 = false;
			iLocal_1547 = 0;
			bLocal_1549 = false;
			bLocal_1550 = false;
			iLocal_1551 = 0;
			iLocal_1593 = 0;
			iLocal_1597 = 0;
			iLocal_1594 = 0;
			iLocal_1596 = 0;
			bLocal_1604 = false;
			iLocal_1614 = 0;
			iLocal_1568 = 0;
			bLocal_1683 = false;
			bLocal_1684 = false;
			bLocal_1685 = false;
			bLocal_1682 = false;
			iLocal_1623 = 0;
			iLocal_1626 = 0;
			bLocal_1640 = false;
			bLocal_1642 = false;
			iLocal_1654 = 0;
			iLocal_1661 = 0;
			iLocal_1662 = 0;
			iLocal_1699 = 0;
			iLocal_1677 = 0;
			iLocal_1344 = 0;
			iLocal_1816 = func_338(1, 1);
			iVar0 = 0;
			while (iVar0 < 7)
			{
				Local_1296[iVar0 /*4*/].f_1 = 0;
				Local_1296[iVar0 /*4*/] = 0;
				Local_1296[iVar0 /*4*/].f_3 = 0;
				iVar0++;
			}
			break;
		
		case 3:
			Local_1184 = 0;
			iLocal_1202 = 0;
			iLocal_1327 = 0;
			iLocal_1328 = 0;
			iLocal_1342 = 0;
			iLocal_1343 = 0;
			iLocal_1347 = 0;
			iLocal_1608 = 0;
			iLocal_1607 = 0;
			iLocal_1606 = 0;
			iLocal_1599 = 0;
			iLocal_1552 = 0;
			iLocal_1553 = 0;
			bLocal_1555 = false;
			bLocal_1557 = false;
			bLocal_1558 = false;
			iLocal_1562 = 0;
			iLocal_1560 = 0;
			iLocal_1561 = 0;
			iLocal_1559 = 0;
			bLocal_1563 = false;
			bLocal_1564 = false;
			iLocal_1565 = 0;
			iLocal_1566 = 0;
			iLocal_1567 = 0;
			bLocal_1579 = false;
			bLocal_1580 = false;
			iLocal_1581 = 0;
			iLocal_1582 = 0;
			iLocal_1583 = 0;
			iLocal_1585 = 0;
			iLocal_1584 = 0;
			iLocal_1499 = 0;
			bLocal_1554 = false;
			bLocal_1569 = false;
			iLocal_1570 = 0;
			iLocal_1571 = 0;
			bLocal_1573 = false;
			bLocal_1574 = false;
			bLocal_1575 = false;
			iLocal_1576 = 0;
			iLocal_1577 = 0;
			iLocal_1578 = 0;
			bLocal_1691 = false;
			bLocal_1692 = false;
			bLocal_1686 = false;
			bLocal_1687 = false;
			bLocal_1688 = false;
			bLocal_1689 = false;
			bLocal_1690 = false;
			bLocal_1618 = false;
			bLocal_1587 = false;
			iLocal_1588 = 0;
			bLocal_1586 = false;
			iLocal_1663 = 0;
			iLocal_1633 = 0;
			iLocal_1631 = 0;
			bLocal_1634 = false;
			iLocal_1635 = 0;
			bLocal_1595 = false;
			iLocal_1643 = 0;
			iLocal_1651 = 0;
			iLocal_1664 = 0;
			bLocal_1672 = false;
			iLocal_1794 = 0;
			iLocal_1784 = 0;
			iLocal_1793 = 0;
			iLocal_1825 = 0;
			iLocal_1826 = 0;
			fLocal_1753 = 1f;
			iLocal_1534[0] = 1;
			iLocal_1534[1] = 1;
			iLocal_1534[2] = 1;
			fLocal_1754 = 0.1f;
			break;
		
		case 4:
			iLocal_1332 = 0;
			iLocal_1326 = 0;
			iLocal_1346 = 0;
			iLocal_1350 = 0;
			iLocal_1156 = 0;
			Local_1703 = { 0f, 0f, 0f };
			Local_1706 = { 0f, 0f, 0f };
			iLocal_1599 = 0;
			iLocal_1589 = 0;
			bLocal_1590 = false;
			iLocal_1598 = 0;
			iLocal_1600 = 0;
			iLocal_1601 = 0;
			iLocal_1602 = 0;
			iLocal_1609 = 0;
			iLocal_1610 = 0;
			iLocal_1611 = 0;
			iLocal_1612 = 0;
			iLocal_1613 = 0;
			iLocal_1616 = 0;
			bLocal_1617 = false;
			iLocal_1624 = 0;
			iLocal_1628 = 0;
			iLocal_1629 = 0;
			iLocal_1641 = 0;
			iLocal_1643 = 0;
			iLocal_1644 = 0;
			iLocal_1646 = 0;
			iLocal_1647 = 0;
			bLocal_1655 = false;
			iLocal_1696 = 1;
			iLocal_1698 = 0;
			bLocal_1673 = false;
			iLocal_1700 = 0;
			iLocal_1676 = 0;
			iLocal_1764 = 2;
			fLocal_1751 = 0f;
			break;
	}
}

void func_637()//Position - 0x65A18
{
	iLocal_1108 = 0;
	Local_1111.f_7 = 4;
	iLocal_1110 = 0;
	iLocal_1471 = 0;
	bLocal_1472 = false;
	iLocal_1473 = 0;
	bLocal_1474 = false;
	iLocal_1475 = 0;
	iLocal_1476 = 0;
	bLocal_1477 = false;
	iLocal_1478 = 0;
	iLocal_1479 = 0;
	iLocal_1480 = 0;
	bLocal_1603 = false;
	bLocal_1591 = false;
	iLocal_1605 = 0;
	bLocal_1482 = false;
	iLocal_1765 = -1;
	iLocal_1776 = -1;
}

void func_638(bool bParam0)//Position - 0x65A6E
{
	HUD::REQUEST_ADDITIONAL_TEXT("FCHASE", 0);
	if (bParam0)
	{
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_639(int iParam0, bool bParam1, bool bParam2)//Position - 0x65A96
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_649(iVar1, iParam0))
		{
			func_646(iVar1);
		}
		else if (!func_649(iVar1, iLocal_1106) || !bParam2)
		{
			func_643(iVar1);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_640())
		{
			GlobalFunc_2868();
			while (!func_640())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_640()//Position - 0x65B05
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iLocal_1464[iVar0])
		{
			switch (iVar0)
			{
				case 0:
					if (!VEHICLE::HAS_VEHICLE_ASSET_LOADED(func_72(7)))
					{
						return 0;
					}
					break;
				
				case 1:
					if (!STREAMING::HAS_ANIM_SET_LOADED(func_642()))
					{
						return 0;
					}
					break;
				
				case 2:
					if (!GlobalFunc_557(&uLocal_1348))
					{
						return 0;
					}
					break;
				
				case 3:
					if (!STREAMING::HAS_CLIP_SET_LOADED("ANIM_GROUP_GESTURE_MISS_FRA0"))
					{
						return 0;
					}
					break;
				}
		}
		iVar0++;
	}
	return 1;
}


char* func_642()//Position - 0x65BAD
{
	return "move_injured_generic";
}

void func_643(int iParam0)//Position - 0x65BBA
{
	if (iLocal_1464[iParam0])
	{
		iLocal_1464[iParam0] = 0;
		switch (iParam0)
		{
			case 0:
				VEHICLE::REMOVE_VEHICLE_ASSET(func_72(7));
				break;
			
			case 1:
				STREAMING::REMOVE_ANIM_SET(func_642());
				break;
			
			case 2:
				GlobalFunc_5114(&uLocal_1348);
				break;
			
			case 3:
				STREAMING::REMOVE_CLIP_SET("ANIM_GROUP_GESTURE_MISS_FRA0");
				break;
			}
	}
}



void func_646(int iParam0)//Position - 0x65C4E
{
	iLocal_1464[iParam0] = 1;
	switch (iParam0)
	{
		case 0:
			VEHICLE::REQUEST_VEHICLE_ASSET(func_72(7), 3);
			break;
		
		case 1:
			STREAMING::REQUEST_ANIM_SET(func_642());
			break;
		
		case 2:
			GlobalFunc_5115(&uLocal_1348);
			break;
		
		case 3:
			STREAMING::REQUEST_CLIP_SET("ANIM_GROUP_GESTURE_MISS_FRA0");
			break;
	}
}



int func_649(int iParam0, int iParam1)//Position - 0x65CCB
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 4 || iParam1 == 1)
			{
				return 1;
			}
			break;
		
		case 1:
			break;
		
		case 2:
			if (iParam1 == 4)
			{
				return 1;
			}
			break;
		
		case 3:
			if (iParam1 == 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_650(int iParam0, bool bParam1, bool bParam2)//Position - 0x65D28
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = iVar0;
		if (func_655(iVar1, iParam0))
		{
			func_654(iVar1);
		}
		else if (!func_655(iVar1, iLocal_1106) || !bParam2)
		{
			func_653(iVar1);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_651())
		{
			GlobalFunc_2868();
			while (!func_651())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_651()//Position - 0x65D97
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iLocal_1461[iVar0])
		{
			if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK(func_652(iVar0), 0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

char* func_652(int iParam0)//Position - 0x65DCF
{
	switch (iParam0)
	{
		case 0:
			return "FRANKLIN_0_BOXCARS";
			break;
		
		case 1:
			return "FRANKLIN_0_GENERAL";
			break;
	}
	return "invalid!";
}

void func_653(int iParam0)//Position - 0x65E04
{
	char* sVar0;
	
	if (iLocal_1461[iParam0])
	{
		iLocal_1461[iParam0] = 0;
		sVar0 = func_652(iParam0);
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(sVar0);
	}
}

void func_654(int iParam0)//Position - 0x65E2C
{
	var uVar0;
	
	iLocal_1461[iParam0] = 1;
	uVar0 = func_652(iParam0);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK(uVar0, 0);
}

int func_655(int iParam0, int iParam1)//Position - 0x65E4C
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 3)
			{
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 2 || iParam1 == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_656(int iParam0, bool bParam1, bool bParam2)//Position - 0x65E8D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = iVar0;
		if (func_660(iVar1, iParam0))
		{
			func_659(iVar1);
		}
		else if (!func_660(iVar1, iLocal_1106) || !bParam2)
		{
			func_658(iVar1);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_657())
		{
			GlobalFunc_2868();
			while (!func_657())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_657()//Position - 0x65EFC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iLocal_1459[iVar0])
		{
			if (!STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_658(int iParam0)//Position - 0x65F2D
{
	if (iLocal_1459[iParam0])
	{
		iLocal_1459[iParam0] = 0;
		if (STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			STREAMING::REMOVE_PTFX_ASSET();
		}
	}
}

void func_659(int iParam0)//Position - 0x65F52
{
	iLocal_1459[iParam0] = 1;
	STREAMING::REQUEST_PTFX_ASSET();
}

int func_660(int iParam0, int iParam1)//Position - 0x65F66
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 >= 2)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_661(int iParam0, bool bParam1, bool bParam2)//Position - 0x65F89
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = iVar0;
		if (func_665(iVar1, iParam0))
		{
			func_664(iVar1);
		}
		else if (!func_665(iVar1, iLocal_1106) || !bParam2)
		{
			func_663(iVar1);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_662())
		{
			GlobalFunc_2868();
			while (!func_662())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_662()//Position - 0x65FF8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iLocal_1457[iVar0])
		{
			if (!WEAPON::HAS_WEAPON_ASSET_LOADED(func_368(iVar0)))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_663(int iParam0)//Position - 0x6602F
{
	var uVar0;
	
	if (iLocal_1457[iParam0])
	{
		iLocal_1457[iParam0] = 0;
		uVar0 = func_368(iParam0);
		if (WEAPON::HAS_WEAPON_ASSET_LOADED(uVar0))
		{
			WEAPON::REMOVE_WEAPON_ASSET(uVar0);
		}
	}
}

void func_664(int iParam0)//Position - 0x66060
{
	var uVar0;
	
	iLocal_1457[iParam0] = 1;
	uVar0 = func_368(iParam0);
	WEAPON::REQUEST_WEAPON_ASSET(uVar0, 31, 0);
}

int func_665(int iParam0, int iParam1)//Position - 0x66081
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 <= 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_666(int iParam0, bool bParam1, bool bParam2)//Position - 0x660A4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_671(iVar0, iParam0))
		{
			func_670(iVar0);
		}
		else if (!func_671(iVar0, iLocal_1106) || !bParam2)
		{
			func_669(iVar0);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_667())
		{
			GlobalFunc_2868();
			while (!func_667())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_667()//Position - 0x66110
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (iLocal_1444[iVar0])
		{
			Var1 = { func_668(iVar0) };
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&Var1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

struct<4> func_668(int iParam0)//Position - 0x6614E
{
	struct<4> Var0;
	
	StringCopy(&Var0, "hood", 16);
	StringIntConCat(&Var0, iParam0 + 1, 16);
	return Var0;
}

void func_669(int iParam0)//Position - 0x6616B
{
	struct<4> Var0;
	
	if (iLocal_1444[iParam0])
	{
		iLocal_1444[iParam0] = 0;
		Var0 = { func_668(iParam0) };
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&Var0) == 0)
		{
			TASK::REMOVE_WAYPOINT_RECORDING(&Var0);
		}
	}
}

void func_670(int iParam0)//Position - 0x6619F
{
	struct<4> Var0;
	
	iLocal_1444[iParam0] = 1;
	Var0 = { func_668(iParam0) };
	TASK::REQUEST_WAYPOINT_RECORDING(&Var0);
}

int func_671(int iParam0, int iParam1)//Position - 0x661BF
{
	switch (iParam0 + 1)
	{
		case 1:
			if (iParam1 == 2 || iParam1 == 1)
			{
				return 1;
			}
			break;
		
		case 2:
		case 3:
			if (iParam1 == 2)
			{
				return 1;
			}
			break;
		
		case 4:
			if (iParam1 == 2)
			{
				return 1;
			}
			break;
		
		case 5:
			if (iParam1 == 3)
			{
				return 1;
			}
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 2 || iParam1 == 1)
			{
				return 1;
			}
			break;
		
		case 8:
			if (iParam1 == 3)
			{
				return 1;
			}
			break;
		
		case 9:
		case 10:
			if (iParam1 == 4)
			{
				return 1;
			}
			break;
		
		case 11:
			if (iParam1 == 2)
			{
				return 1;
			}
			break;
		
		case 12:
			if (iParam1 == 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_672(int iParam0, bool bParam1, bool bParam2)//Position - 0x662B1
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = iVar0;
		if (func_676(iVar1, iParam0))
		{
			func_675(iVar1);
		}
		else if (!func_676(iVar1, iLocal_1106) || !bParam2)
		{
			func_674(iVar1);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_673())
		{
			GlobalFunc_2868();
			while (!func_673())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_673()//Position - 0x66320
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iLocal_1437[iVar0])
		{
			if (!STREAMING::HAS_ANIM_DICT_LOADED(func_198(iVar0)))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_674(int iParam0)//Position - 0x66357
{
	var uVar0;
	
	if (iLocal_1437[iParam0])
	{
		iLocal_1437[iParam0] = 0;
		uVar0 = func_198(iParam0);
		if (STREAMING::HAS_ANIM_DICT_LOADED(uVar0))
		{
			STREAMING::REMOVE_ANIM_DICT(uVar0);
		}
	}
}

void func_675(int iParam0)//Position - 0x66388
{
	var uVar0;
	
	iLocal_1437[iParam0] = 1;
	uVar0 = func_198(iParam0);
	STREAMING::REQUEST_ANIM_DICT(uVar0);
}

int func_676(int iParam0, int iParam1)//Position - 0x663A6
{
	iParam1 = iParam1;
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 2)
			{
				return 1;
			}
			break;
		
		case 3:
			if (iParam1 == 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (iParam1 == 4 || iParam1 == 1)
			{
				return 1;
			}
			break;
		
		case 5:
			if (iParam1 <= 1 || iParam1 == 4)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_677(int iParam0, bool bParam1, bool bParam2)//Position - 0x6643C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (func_681(iVar0 + 1, iParam0))
		{
			func_680(iVar0 + 1);
		}
		else if (!func_681(iVar0 + 1, iLocal_1106) || !bParam2)
		{
			func_679(iVar0 + 1);
		}
		iVar0++;
	}
	if (iParam0 == 1 || iParam0 == 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(1, func_361());
	}
	if (bParam1)
	{
		if (!func_678())
		{
			GlobalFunc_2868();
			while (!func_678())
			{
				SYSTEM::WAIT(0);
			}
		}
		if (iParam0 == 1)
		{
			while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, func_361()))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_678()//Position - 0x664E5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (iLocal_1422[iVar0])
		{
			if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iVar0 + 1, func_348()))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_679(int iParam0)//Position - 0x6651F
{
	if (iLocal_1422[(iParam0 - 1)])
	{
		iLocal_1422[(iParam0 - 1)] = 0;
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, func_348()))
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, func_348());
		}
	}
}

void func_680(int iParam0)//Position - 0x66554
{
	iLocal_1422[(iParam0 - 1)] = 1;
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, func_348());
}

int func_681(int iParam0, int iParam1)//Position - 0x66570
{
	switch (iParam0)
	{
		case 1:
		case 11:
		case 12:
			if (iParam1 == 2)
			{
				return 1;
			}
			break;
		
		case 14:
			if (iParam1 == 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_682(int iParam0, bool bParam1, bool bParam2)//Position - 0x665B2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (func_685(iVar0, iParam0))
		{
			func_684(iVar0);
		}
		else if (!func_685(iVar0, iLocal_1106) || !bParam2)
		{
			func_197(iVar0);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_683())
		{
			GlobalFunc_2868();
			while (!func_683())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_683()//Position - 0x6661E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (iLocal_1397[iVar0] == 1)
		{
			if (!STREAMING::HAS_MODEL_LOADED(func_72(iVar0)))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_684(int iParam0)//Position - 0x66657
{
	var uVar0;
	
	uVar0 = func_72(iParam0);
	STREAMING::REQUEST_MODEL(uVar0);
	iLocal_1397[iParam0] = 1;
}

int func_685(int iParam0, int iParam1)//Position - 0x66675
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			if (iParam1 > 0)
			{
				return 1;
			}
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			if (iParam1 == 3)
			{
				return 1;
			}
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 1;
			}
			break;
		
		case 6:
			if (iParam1 == 2)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				return 1;
			}
			break;
		
		case 8:
			if (iParam1 <= 2 && iParam1 > 0)
			{
				return 1;
			}
			break;
		
		case 11:
		case 9:
		case 10:
			if (iParam1 == 2)
			{
				return 1;
			}
			break;
		
		case 20:
		case 21:
			if (iParam1 == 4)
			{
				return 1;
			}
			break;
		
		case 23:
			if (iParam1 == 0)
			{
				if (GlobalFunc_Is_Mission_Retry())
				{
					if (GlobalFunc_7984())
					{
						if (GlobalFunc_5667(GlobalFunc_2575(), 0f, 0f, 0f, 1))
						{
							return 1;
						}
					}
				}
			}
			break;
		
		case 13:
		case 14:
		case 15:
		case 18:
		case 19:
		case 22:
			if (iParam1 == 3)
			{
				return 1;
			}
			break;
	}
	return 0;
}




void func_689(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x668BF
{
	char* sVar0;
	float fVar1;
	float fVar2;
	
	if (!PED::IS_PED_INJURED(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
		if (bParam5)
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
		}
		if (bParam4)
		{
			sVar0 = "CHOP_GROWL";
			fVar2 = 206f;
		}
		else
		{
			sVar0 = "CHOP_SIT_LOOP";
			if (!bParam6)
			{
				fVar2 = 0f;
			}
			else
			{
				fVar2 = 11.96f;
			}
		}
		if (bParam5)
		{
			fVar1 = 1000f;
		}
		else
		{
			fVar1 = 4f;
		}
		*uParam2 = 0;
		*uParam3 = 0f;
		func_63(iParam0, iParam1, fVar2, bParam6, bParam7, iParam8, iParam9, iParam10, iParam11);
		TASK::TASK_PLAY_ANIM(iParam0, func_62(), sVar0, fVar1, -8f, -1, 4097, 0, 0, 0, 0);
		if (bParam5)
		{
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, 0, 0);
		}
	}
}


void func_691(int iParam0)//Position - 0x6697D
{
	if (iParam0 || !iLocal_1643)
	{
		if (!PED::IS_PED_INJURED(Local_1158))
		{
			PED::APPLY_PED_BLOOD_SPECIFIC(Local_1158, 2, 0.536f, 0.601f, 93.24f, 0.695f, -1, 0f, "stab");
			PED::APPLY_PED_BLOOD_SPECIFIC(Local_1158, 2, 0.536f, 0.561f, 95.04f, 0.695f, -1, 0f, "stab");
			PED::APPLY_PED_BLOOD_SPECIFIC(Local_1158, 2, 0.476f, 0.531f, 95.14f, 0.695f, -1, 0f, "stab");
			iLocal_1643 = 1;
		}
	}
}




void func_695()//Position - 0x66AC3
{
	if (!PED::IS_PED_INJURED(Local_1158))
	{
		if (!PED::IS_PED_RAGDOLL(Local_1158))
		{
			PED::SET_PED_RESET_FLAG(Local_1158, 64, 1);
			PED::SET_PED_RESET_FLAG(Local_1158, 58, 1);
		}
	}
}

void func_696()//Position - 0x66AF5
{
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_1170.f_9))
	{
		fLocal_1754 = (fLocal_1754 + (0.83f * SYSTEM::TIMESTEP()));
		if (fLocal_1754 >= 0.93f)
		{
			fLocal_1754 = 0.93f;
		}
		PED::SET_SYNCHRONIZED_SCENE_RATE(Local_1170.f_9, fLocal_1754);
	}
}


void func_698(int iParam0, float fParam1, float fParam2)//Position - 0x66B62
{
	if (!PED::IS_PED_INJURED(iParam0->f_3) && CAM::DOES_CAM_EXIST(iParam0->f_4))
	{
		iParam0->f_6 = fParam1;
		iParam0->f_7 = fParam2;
		CAM::ATTACH_CAM_TO_PED_BONE(iParam0->f_4, iParam0->f_3, 31086, 0f, iParam0->f_6, iParam0->f_7, 1);
	}
}

void func_699(int iParam0, int iParam1)//Position - 0x66BA8
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (iParam1 == 0)
	{
		fVar0 = -Local_1235[iParam0 /*12*/].f_3[iParam1 /*4*/].f_3;
		fVar1 = 1.468f;
		fVar2 = 180f;
	}
	else
	{
		fVar0 = Local_1235[iParam0 /*12*/].f_3[iParam1 /*4*/].f_3;
		fVar1 = -1.468f;
		fVar2 = 0f;
	}
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_1235[iParam0 /*12*/].f_3[iParam1 /*4*/], Local_1235[iParam0 /*12*/], 0, fVar0, fVar1, 2.4635f, 0f, 0f, fVar2, 0, 0, 1, 0, 2, 1);
}

Vector3 func_700(int iParam0)//Position - 0x66C20
{
	switch (iParam0)
	{
		case 0:
			return 548.9426f, -626.9652f, 23.91f;
			break;
		
		case 1:
			return 546.9478f, -643.2399f, 23.91f;
			break;
		
		case 2:
			return 526.7276f, -678.9218f, 23.82f;
			break;
		
		case 3:
			return 524.9456f, -695.059f, 23.86f;
			break;
		
		case 4:
			return 519.1805f, -705.8043f, 23.87f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_701(bool bParam0)//Position - 0x66CB9
{
	int iVar0;
	float fVar1;
	
	iVar0 = 0;
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1352, func_198(0), "FRA0_IG_12_CHOP_WAITING_B", 3))
	{
		fVar1 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_1352, func_198(0), "FRA0_IG_12_CHOP_WAITING_B");
		if (fVar1 <= 0.25f || fVar1 >= 0.8f)
		{
			iVar0 = 1;
		}
		if (bParam0)
		{
			if (fVar1 >= 0.408f && fVar1 <= 0.65f)
			{
				iVar0 = 1;
			}
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1352, func_198(0), "FRA0_IG_12_CHOP_WAITING_A", 3))
	{
		TASK::TASK_PLAY_ANIM(Local_1170, func_198(0), "FRA0_IG_12_CHOP_FAST_TURN_B", 8f, -8f, -1, 2, 0, 0, 0, 0);
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1352, func_198(0), "FRA0_IG_12_CHOP_FAST_TURN_B", 3))
	{
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_1352, func_198(0), "FRA0_IG_12_CHOP_FAST_TURN_B") >= 0.98f)
		{
			iVar0 = 1;
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_702()//Position - 0x66D9C
{
	float fVar0;
	struct<3> Var1;
	bool bVar4;
	
	if (!PED::IS_PED_INJURED(iLocal_1352))
	{
		if (!PED::IS_PED_INJURED(iLocal_1354))
		{
			switch (iLocal_1327)
			{
				case 0:
					if (iLocal_1202 == 4)
					{
						Local_1709 = { ENTITY::GET_ENTITY_COORDS(iLocal_1354, 1) + Vector(-0.435374f, 0f, 0f) };
						fLocal_1747 = ENTITY::GET_ENTITY_HEADING(iLocal_1354);
						Local_1170.f_3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_1352, 0.129763f, 2.11939f, -0.435374f) };
						Local_1170.f_6 = { ENTITY::GET_ENTITY_ROTATION(iLocal_1352, 2) + Vector(16.03345f, 0f, 0f) };
						Local_1170.f_9 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1170.f_3, Local_1170.f_6, 2);
						iLocal_1792 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1709, 0f, 0f, fLocal_1747, 2);
						PED::SET_PED_CAN_RAGDOLL(iLocal_1352, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_1352, Local_1170.f_9, func_198(3), "Hump_enter_chop", 8f, -8f, 5, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_1354, iLocal_1792, func_198(3), "Hump_enter_ladydog", 8f, -8f, 5, 0, 1148846080, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_1170.f_9, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1792, 0);
						iLocal_1327 = 1;
					}
					break;
				
				case 1:
					if (!bLocal_1687)
					{
						bLocal_1687 = AUDIO::TRIGGER_MUSIC_EVENT("FRA0_MOUNT");
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1170.f_9) >= 0.98f)
					{
						func_244(7);
						Local_1170.f_9 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1709, 0f, 0f, fLocal_1747, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_1352, Local_1170.f_9, func_198(3), "Hump_loop_chop", 4f, -8f, 5, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_1354, Local_1170.f_9, func_198(3), "Hump_loop_ladydog", 4f, -8f, 5, 0, 1148846080, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_1170.f_9, 1);
						GlobalFunc_574(342, 0);
						iLocal_1327 = 2;
					}
					else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1170.f_9) >= 0.69f)
					{
						GlobalFunc_5915(&(Local_1170.f_3), Local_1709, 0.1f);
						GlobalFunc_5915(&(Local_1170.f_6), 0f, 0f, fLocal_1747, 5f);
						PED::SET_SYNCHRONIZED_SCENE_ORIGIN(Local_1170.f_9, Local_1170.f_3, Local_1170.f_6, 2);
					}
					break;
				
				case 2:
					func_243(7);
					if (iLocal_1202 == 5)
					{
						func_244(10);
						Local_1170.f_9 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1709, 0f, 0f, fLocal_1747, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_1352, Local_1170.f_9, func_198(3), "Hump_exit_chop", 8f, -8f, 5, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_1354, Local_1170.f_9, func_198(3), "Hump_exit_ladydog", 8f, -8f, 5, 0, 1148846080, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_1170.f_9, 0);
						if (!bLocal_1688)
						{
							bLocal_1688 = AUDIO::TRIGGER_MUSIC_EVENT("FRA0_DISMOUNT");
						}
						iLocal_1327 = 3;
					}
					break;
				
				case 3:
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1170.f_9) >= 0.98f)
					{
						PED::SET_PED_CAN_RAGDOLL(iLocal_1352, 1);
						iLocal_1327 = 4;
					}
					break;
				}
		}
		switch (iLocal_1202)
		{
			case 0:
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_1352, func_79(26), 1.5f, 1.5f, 2f, 0, 1, 0))
				{
					if (PED::IS_PED_INJURED(iLocal_1354))
					{
						func_254(7);
					}
					else
					{
						func_254(1);
					}
				}
				break;
			
			case 1:
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1352, 8f, 8f, 8f, 0, 1, 0))
				{
					if (func_701(0))
					{
						func_254(2);
					}
				}
				break;
			
			case 2:
				if (PED::IS_PED_INJURED(iLocal_1354))
				{
					func_254(6);
				}
				else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1352, func_198(3), "FRA_0_IG_15_CHOP_SPOTS_DOG", 3))
				{
					func_254(3);
				}
				else
				{
					fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_1352, func_198(3), "FRA_0_IG_15_CHOP_SPOTS_DOG");
					if (!iLocal_1567)
					{
						if (fVar0 >= 0.3f)
						{
							func_244(6);
							iLocal_1567 = 1;
						}
					}
					if (fVar0 >= 0.8f)
					{
						func_254(3);
					}
				}
				break;
			
			case 3:
				if (!bLocal_1686)
				{
					bLocal_1686 = AUDIO::TRIGGER_MUSIC_EVENT("FRA0_BOY");
				}
				if (PED::IS_PED_INJURED(iLocal_1354))
				{
					func_254(6);
				}
				else
				{
					if (MISC::GET_GAME_TIMER() <= iLocal_1785 + 1500)
					{
					}
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_1352, Local_1712, 0.5f, 0.5f, 2f, 0, 1, 0))
					{
						func_254(4);
					}
					else if (ENTITY::IS_ENTITY_AT_COORD(iLocal_1352, Local_1712, 6f, 6f, 2f, 0, 0, 0))
					{
						PED::SET_PED_RESET_FLAG(iLocal_1352, 71, 1);
						PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_1352, 0);
					}
				}
				if (!bLocal_1555)
				{
					func_243(6);
					if (MISC::GET_GAME_TIMER() >= iLocal_1785 + 2000 && !bLocal_1618)
					{
						bLocal_1555 = func_239("FC_WHEREGO", 0, 0, 0, 1);
					}
				}
				else if (!bLocal_1557)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_1785 + 5000)
					{
						if (!PED::IS_PED_INJURED(iLocal_1354))
						{
							if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_1354))
							{
								if (!bLocal_1618)
								{
									bLocal_1557 = func_239("FC_SEEDOG", 0, 0, 0, 1);
								}
							}
						}
					}
				}
				if (iLocal_1606)
				{
					if (func_203())
					{
						func_709();
					}
				}
				break;
			
			case 4:
				if (!bLocal_1618)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1352, 15f, 15f, 2f, 0, 1, 0))
					{
						if (!iLocal_1565)
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_1765)
							{
								if (func_239("FKN0_MALE", 0, 0, 0, 1))
								{
									iLocal_1765 = MISC::GET_GAME_TIMER() + 9000;
									iLocal_1565 = 1;
								}
							}
						}
						else
						{
							func_242("FKN0_WHUMP", -1, 7000, 11000, 0);
						}
					}
				}
				if (PED::IS_PED_INJURED(iLocal_1354))
				{
					func_254(6);
				}
				else
				{
					Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_1352, 1) };
					if (((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1354, PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1352, PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), Var1 - Vector(8f, 8f, 8f), Var1 + Vector(8f, 8f, 8f), 0, 1)) || MISC::IS_BULLET_IN_AREA(Var1, 3f, 1)) || MISC::IS_SNIPER_BULLET_IN_AREA(Var1 - Vector(3f, 3f, 3f), Var1 + Vector(3f, 3f, 3f))) || MISC::GET_GAME_TIMER() >= (iLocal_1799 + 60000))
					{
						if (iLocal_1201 == 2)
						{
							iLocal_1561 = 1;
						}
						func_254(5);
					}
					else if (!bLocal_1558)
					{
						if (((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1352, 18f, 18f, 2f, 0, 1, 0) && PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_1352, 35f)) && !PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1352, 11f, 11f, 2f, 0, 1, 0))
						{
							if (!bLocal_1618)
							{
								bLocal_1558 = func_239("FC_RUNOVER", 0, 0, 0, 1);
							}
						}
					}
				}
				if (func_203())
				{
					func_709();
					if (iLocal_1201 == 2)
					{
						if (!bLocal_1564)
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_1785 + 14000)
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1352, 2f, 2f, 2f, 0, 1, 0) && Local_1184 == 0)
								{
									if ((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && GlobalFunc_552(1, 0, 1)) && !GlobalFunc_111())
									{
										iLocal_1559 = 1;
										iLocal_1471 = 1;
									}
								}
								else if (!bLocal_1563)
								{
									if (Local_1184 == 0)
									{
										bLocal_1563 = func_201("FC_CLOSER", 1, 0, 7500);
									}
								}
							}
						}
					}
				}
				break;
			
			case 5:
				if (iLocal_1327 == 4 || PED::IS_PED_INJURED(iLocal_1354))
				{
					func_254(6);
				}
				break;
			
			case 6:
				if (bLocal_1687)
				{
					if (!bLocal_1688)
					{
						bLocal_1688 = AUDIO::TRIGGER_MUSIC_EVENT("FRA0_DISMOUNT");
					}
				}
				func_243(5);
				if (!iLocal_1560)
				{
					if (iLocal_1561)
					{
						switch (iLocal_1201)
						{
							case 1:
								iLocal_1560 = func_239("FKN0_CGOOD", 0, 0, 0, 1);
								break;
							
							case 0:
								iLocal_1560 = func_239("FKN0_CMED", 0, 0, 0, 1);
								break;
							
							case 2:
								iLocal_1560 = func_239("FKN0_CBAD", 0, 0, 0, 1);
								break;
						}
					}
					else
					{
						iLocal_1560 = 1;
					}
				}
				else
				{
					func_708();
				}
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_1352, func_79(27), 4f, 4f, 2f, 0, 1, 0))
				{
					func_254(7);
					func_227(3000, -1, -1);
					iLocal_1328 = 0;
					iLocal_1790 = MISC::GET_GAME_TIMER() + 1000;
					iLocal_1766 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000));
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_1352, "hood8", 43, 6, -1);
				}
				break;
			
			case 7:
				func_708();
				break;
		}
		if (!iLocal_1607)
		{
			if (iLocal_1202 >= 6)
			{
				if (!GlobalFunc_2577() && !GlobalFunc_63(17))
				{
					if (iLocal_1784 > 0)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_1784 + 1000)
						{
							iLocal_1607 = func_705("FC_APPHLP", 0, -1);
							if (iLocal_1607)
							{
								GlobalFunc_651(17);
							}
						}
					}
				}
				else
				{
					iLocal_1607 = 1;
				}
			}
		}
		bVar4 = false;
		if (((iLocal_1202 == 3 && MISC::GET_GAME_TIMER() >= iLocal_1785 + 2700) || iLocal_1202 == 4) && func_703())
		{
			if (Local_1184 == 0)
			{
				if (!iLocal_1606)
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						iLocal_1606 = 1;
						iLocal_1786 = 0;
					}
				}
				else if (!bLocal_1618)
				{
					bVar4 = true;
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						GlobalFunc_Display_Help_Text("FC_CALLHLP");
					}
				}
			}
			else if (Local_1184 == 2)
			{
				if (!iLocal_1631)
				{
					if (func_705("FC_SWFHLP1", 0, -1))
					{
						GlobalFunc_2904(&Local_1111, 1, 1);
						iLocal_1631 = 1;
					}
				}
			}
		}
		if (!bVar4)
		{
			if (GlobalFunc_74("FC_CALLHLP"))
			{
				HUD::CLEAR_HELP(1);
			}
		}
	}
}

int func_703()//Position - 0x676D3
{
	if (!PED::IS_PED_INJURED(iLocal_1352))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1352, 15f, 15f, 8f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 514.064f, -674.668f, 23.392f, 521.808f, -612.832f, 28.734f, 45f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}


int func_705(char* sParam0, int iParam1, int iParam2)//Position - 0x67781
{
	if (iParam1 || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		if (func_203())
		{
			GlobalFunc_159(sParam0, iParam2);
			return 1;
		}
	}
	return 0;
}



void func_708()//Position - 0x67807
{
	if (!iLocal_1562)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_1352, func_79(27), 28f, 28f, 2f, 0, 0, 0))
		{
			if (func_239("FC_BACKON", 0, 0, 0, 1))
			{
				iLocal_1562 = 1;
			}
		}
	}
}

void func_709()//Position - 0x67848
{
	int iVar0;
	struct<3> Var1;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	
	if (MISC::GET_GAME_TIMER() <= iLocal_1820 + 4100)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
	}
	switch (iLocal_1347)
	{
		case 0:
			if (func_703())
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(0, 51) && !PAD::IS_CONTROL_PRESSED(0, 37))
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_1786 + 5000)
					{
						switch (iLocal_1201)
						{
							case 2:
								bLocal_1618 = false;
								break;
							
							case 0:
								if (iLocal_1202 >= 4)
								{
									bLocal_1618 = true;
								}
								else
								{
									bLocal_1618 = false;
								}
								break;
							
							case 1:
								bLocal_1618 = true;
								break;
						}
						WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
						if (((((PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_1352, 40f) && !TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID())) && !TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID())) && !TASK::IS_PED_WALKING(PLAYER::PLAYER_PED_ID())) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1352, 20f, 20f, 2f, 0, 1, 0)) && iVar0 == joaat("weapon_unarmed"))
						{
							Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_1352, 1)) };
							if (Var1.x > 0f)
							{
								sVar4 = "Call_Chop_R";
							}
							else
							{
								sVar4 = "Call_Chop_L";
							}
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_198(3), sVar4, 8f, -4f, -1, 48, 0, 0, 0, 0);
							iLocal_1820 = MISC::GET_GAME_TIMER();
						}
						iLocal_1664 = 0;
						iLocal_1347 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (!iLocal_1664)
			{
				bVar5 = false;
				bVar6 = false;
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_198(3), "Call_Chop_R", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_198(3), "Call_Chop_L", 3))
				{
					bVar6 = true;
				}
				if (bVar6)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_1820 + 600)
					{
						bVar5 = true;
					}
				}
				else
				{
					bVar5 = true;
				}
				if (bVar5)
				{
					GlobalFunc_4956();
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_1836, "Franklin_Whistle_For_Chop", PLAYER::PLAYER_PED_ID(), "SPEECH_RELATED_SOUNDS", 0, 0);
					iLocal_1664 = 1;
				}
			}
			if ((!GlobalFunc_111() && AUDIO::HAS_SOUND_FINISHED(iLocal_1836)) && iLocal_1664)
			{
				if (iLocal_1327 >= 2)
				{
					if (func_239("FC_HUMP", 0, 0, 0, 1))
					{
						iLocal_1765 = MISC::GET_GAME_TIMER() + 5000;
					}
				}
				else
				{
					func_239("FC_WHISTLE", 0, 0, 0, 1);
				}
				if (bLocal_1618)
				{
					RECORDING::_0x293220DA1B46CEBC(8f, 3f, 4);
					iLocal_1347 = 2;
				}
				else
				{
					iLocal_1347 = 0;
				}
				iLocal_1786 = MISC::GET_GAME_TIMER();
			}
			break;
		
		case 2:
			if (MISC::GET_GAME_TIMER() >= iLocal_1786 + 800)
			{
				if (iLocal_1202 < 4)
				{
					func_254(6);
				}
				else
				{
					func_254(5);
				}
				iLocal_1561 = 1;
			}
			break;
	}
}


void func_711()//Position - 0x67B1D
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<3> Var3;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		switch (Local_1235[iVar0 /*12*/].f_2)
		{
			case 0:
				bVar2 = false;
				if (!PED::IS_PED_INJURED(iLocal_1352))
				{
					Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_1352, 1) };
					if (iVar0 < 2)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 547.5691f, -635.4587f, 27.41334f, 28f, 28f, 28f, 0, 1, 0))
						{
							if (ENTITY::IS_ENTITY_IN_AREA(iLocal_1352, 534.9f, -648.8f, -20f, 550.8f, -620.1f, 100f, 0, 0, 0) || Var3.f_1 < -643.6f)
							{
								bLocal_1569 = true;
								bVar2 = true;
							}
						}
					}
					else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 522.8358f, -691.1599f, 23.76571f, 40f, 40f, 40f, 0, 1, 0))
					{
						if (iLocal_1202 == 7)
						{
							if (ENTITY::IS_ENTITY_IN_AREA(iLocal_1352, 526.3f, -685.8f, -20f, 534.8f, -665.1f, 100f, 0, 0, 0))
							{
								iLocal_1570 = 1;
								bVar2 = true;
								if (!iLocal_1635)
								{
									iLocal_1633 = 0;
									bLocal_1634 = false;
									iLocal_1553 = 1;
									iLocal_1635 = 1;
								}
							}
						}
					}
				}
				if (bVar2)
				{
					Local_1235[iVar0 /*12*/].f_1 = func_236(func_700(iVar0), 0);
					Local_1235[iVar0 /*12*/].f_2 = 1;
				}
				break;
			
			case 1:
				iVar1 = 0;
				while (iVar1 < 2)
				{
					if (Local_1235[iVar0 /*12*/].f_3[iVar1 /*4*/].f_2 >= 2)
					{
						if (HUD::DOES_BLIP_EXIST(Local_1235[iVar0 /*12*/].f_1))
						{
							HUD::REMOVE_BLIP(&(Local_1235[iVar0 /*12*/].f_1));
						}
						Local_1235[iVar0 /*12*/].f_2 = 2;
					}
					iVar1++;
				}
				break;
			
			case 2:
				break;
		}
		iVar0++;
	}
	if (!bLocal_1569)
	{
	}
	else
	{
		if (!iLocal_1571)
		{
			if (!bLocal_1573)
			{
				bLocal_1573 = func_239("FKN0_ISHE1", 0, 0, 0, 1);
			}
			else if (Local_1184 == 0)
			{
				iLocal_1571 = func_201("FC_GOBOX", 1, 0, 7500);
			}
		}
		if (bLocal_1573)
		{
			if (!iLocal_1633)
			{
				if ((((iLocal_1202 == 0 || iLocal_1202 == 7) || iLocal_1570) && iLocal_1553) && !bLocal_1634)
				{
					if (Local_1184 == 2)
					{
						if (iLocal_1570 || !GlobalFunc_111())
						{
							if (func_705("FC_SWFHLP2", 0, -1))
							{
								GlobalFunc_2904(&Local_1111, 1, 1);
								iLocal_1633 = 1;
							}
						}
					}
				}
			}
		}
	}
}

void func_712(int iParam0)//Position - 0x67D8C
{
	char* sVar0;
	
	if (func_203())
	{
		func_219();
		GlobalFunc_7206(1, 1, 1, 1);
		AUDIO::TRIGGER_MUSIC_EVENT("FRA0_MISSION_FAIL");
		iLocal_1105 = 1;
		iLocal_1107 = iParam0;
		switch (iLocal_1107)
		{
			case 1:
				sVar0 = "FC_FAIL1";
				break;
			
			case 2:
				sVar0 = "FC_FAIL4";
				break;
			
			case 3:
				sVar0 = "FC_FAIL2";
				break;
			
			case 4:
				sVar0 = "FC_FAIL3";
				break;
			
			case 5:
				sVar0 = "FC_FAIL5";
				break;
			
			case 6:
				sVar0 = "FC_FAIL6";
				break;
			
			case 7:
				sVar0 = "FC_FAIL7";
				break;
			
			case 8:
				sVar0 = "FC_FAIL8";
				break;
			
			case 9:
				sVar0 = "FC_FAIL11";
				break;
			
			case 10:
				sVar0 = "FC_FAIL10";
				break;
			
			case 11:
				sVar0 = "FC_FAIL9";
				break;
		}
		GlobalFunc_10835(sVar0);
	}
}












void func_724()//Position - 0x68D0B
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	struct<3> Var7;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	
	func_737(&Local_1111, Local_1184 != 2, 1);
	func_736(&Local_1184);
	func_735(&Local_1184);
	switch (Local_1184)
	{
		case 0:
			if (Local_1184.f_9)
			{
				if (((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1056466932) != 7 || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1689270312) != 7) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -875674219) != 7) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1227113341) != 7)
				{
					if (((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1056466932) != 0 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1689270312) != 0) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -875674219) != 0) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1227113341) != 0)
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						Local_1184.f_9 = 0;
					}
				}
				else
				{
					Local_1184.f_9 = 0;
				}
			}
			if (func_734(&Local_1184, &Local_1111))
			{
				if (iLocal_1106 == 2 || iLocal_1552)
				{
					if (iLocal_1106 == 2)
					{
						if (bLocal_1548 || !func_733())
						{
							func_732();
						}
					}
				}
				if (TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) || TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					bLocal_1656 = true;
				}
				else
				{
					bLocal_1656 = false;
				}
				iLocal_1658 = 0;
				func_731(&Local_1184, 1, 1, 0, 0, 2000, 1, 1, 3);
				func_730(&Local_1184, &Local_1111, 0);
				GlobalFunc_565(343, 1, 0);
				if (iLocal_1106 == 2)
				{
					if (!bLocal_1682)
					{
						bLocal_1682 = AUDIO::TRIGGER_MUSIC_EVENT("FRA0_SWITCH_1");
					}
				}
			}
			break;
		
		case 2:
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			if (Local_1111.f_7 == 1)
			{
				GlobalFunc_571(0, -1);
				GlobalFunc_565(343, 1, 0);
				bLocal_1656 = false;
				iLocal_1657 = 0;
				func_728(&Local_1184, &Local_1111, 1, 1, 1, 1, 3);
			}
			else
			{
				if (iLocal_1106 == 2)
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(PLAYER::PLAYER_PED_ID(), 3f, 0);
						Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_1352, Var3) };
						if (Var0.f_1 < -20f)
						{
							PED::SET_PED_MOVE_RATE_OVERRIDE(PLAYER::PLAYER_PED_ID(), 1.15f);
						}
						iVar6 = TASK::GET_PED_WAYPOINT_PROGRESS(PLAYER::PLAYER_PED_ID());
						TASK::WAYPOINT_RECORDING_GET_COORD("hood4", iVar6, &Var7);
						if ((Var7.f_2 > (Var3.f_2 + 3f) || (iVar6 < 100 && Var3.f_1 > -560.8f)) || (iVar6 < 106 && Var3.f_1 > -554.1f))
						{
							func_732();
						}
					}
					else
					{
						func_732();
					}
				}
				func_727(1);
			}
			if (!bLocal_1548)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1689270312) != 7)
				{
					if (func_733())
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					}
				}
			}
			break;
		
		case 3:
			func_727(0);
			func_31(&Local_1184, &Local_1111, 0);
			if (!iLocal_1657)
			{
				if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 2)
					{
						if (STREAMING::GET_PLAYER_SWITCH_STATE() >= 7)
						{
							func_28(&Local_1184, &Local_1111);
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
							iLocal_1657 = 1;
						}
					}
				}
			}
			if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				func_26(&Local_1184, &Local_1111, 1, 1, 1, 1, 0, 1500);
				PAD::_0xCB0360EFEFB2580D(0);
				func_42(9);
				GlobalFunc_571(0, -1);
			}
			break;
		
		case 1:
			func_31(&Local_1184, &Local_1111, 1);
			func_727(1);
			if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				GlobalFunc_574(339, 0);
				func_725(&Local_1184, &Local_1111, 1, 0, 3000);
				func_49(9);
				HUD::GET_HUD_COLOUR(174, &uVar10, &uVar11, &uVar12, &uVar13);
				PAD::SET_CONTROL_LIGHT_EFFECT_COLOR(0, uVar10, uVar11, uVar12);
			}
			else if (!iLocal_1658)
			{
				if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 2)
				{
					if (STREAMING::GET_PLAYER_SWITCH_STATE() >= 7)
					{
						CAM::SET_CAM_ACTIVE(Local_1184.f_4, 1);
						if (!PED::IS_PED_INJURED(Local_1184.f_3))
						{
							ENTITY::SET_ENTITY_VISIBLE(Local_1184.f_3, 0);
							AUDIO::STOP_PED_SPEAKING(Local_1184.f_3, 1);
						}
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
						iLocal_1658 = 1;
					}
				}
			}
			break;
	}
	if (Local_1184 != 0)
	{
		if ((GlobalFunc_663("FC_GOCHOP", 0, 0) || GlobalFunc_663("FC_CLOSER", 0, 0)) || GlobalFunc_663("FC_GOBOX", 0, 0))
		{
			GlobalFunc_7206(0, 1, 0, 0);
		}
	}
	if (Local_1184 != 2)
	{
		if (GlobalFunc_74("FC_SWFHLP1") || GlobalFunc_74("FC_SWFHLP2"))
		{
			if (MISC::GET_GAME_TIMER() >= iLocal_1783 + 1000)
			{
				HUD::CLEAR_HELP(0);
				iLocal_1783 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

void func_725(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x6916D
{
	func_31(iParam0, iParam1, 1);
	GRAPHICS::SET_TIMECYCLE_MODIFIER("chop");
	CAM::SET_CAM_ACTIVE(iParam0->f_4, 1);
	if (bParam2)
	{
		CAM::RENDER_SCRIPT_CAMS(true, bParam3, iParam4, 1, 0, 0);
		if (bParam3)
		{
			iParam0->f_5 = (MISC::GET_GAME_TIMER() + iParam4);
		}
	}
	iParam1->f_7 = 4;
	if (iParam0->f_2 == 1)
	{
		GlobalFunc_2243();
	}
	GRAPHICS::ANIMPOSTFX_PLAY("ChopVision", 0, 0);
	PAD::_0xF239400E16C23E08(0, 1);
	if (!PED::IS_PED_INJURED(iParam0->f_3))
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam0->f_3, 0);
		AUDIO::STOP_PED_SPEAKING(iParam0->f_3, 1);
	}
	*iParam0 = 2;
}


void func_727(bool bParam0)//Position - 0x69200
{
	if (iLocal_1106 == 3)
	{
		if (!PED::IS_PED_INJURED(iLocal_1352))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1352, 7f, 7f, 2f, 0, 1, 0))
			{
				iLocal_1845 = TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1227113341);
				if (iLocal_1845 == 7)
				{
					if (bParam0)
					{
						TASK::TASK_GO_TO_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1352, -1, 6.5f, 2f, 1073741824, 0);
					}
				}
				else if (iLocal_1845 == 1)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1352, 12f, 12f, 12f, 0, 0, 0) || ((Local_1184 == 1 || Local_1184 == 3) && !bLocal_1656))
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					}
					else
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 2f);
					}
				}
			}
			else if (bParam0)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1352, -875674219) == 7)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1352, 0);
				}
			}
		}
	}
}

void func_728(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x692E9
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	}
	if (bParam4)
	{
		GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(iParam0->f_13, 2f);
	}
	if (bParam3)
	{
		iVar0 = 0;
		if (!bParam5)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0->f_3, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 70f)
			{
				iVar1 = 3;
			}
			else
			{
				iVar1 = 0;
				iVar0 = 1;
			}
		}
		else
		{
			iVar1 = iParam6;
		}
		STREAMING::START_PLAYER_SWITCH(iParam0->f_3, PLAYER::PLAYER_PED_ID(), iVar0, iVar1);
		if (iVar1 == 3)
		{
			func_28(iParam0, uParam1);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
		}
	}
	else
	{
		func_28(iParam0, uParam1);
	}
	*iParam0 = 3;
}


void func_730(int iParam0, int iParam1, int iParam2)//Position - 0x69439
{
	GlobalFunc_2904(iParam1, iParam0->f_1, iParam2);
}

void func_731(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, int iParam8)//Position - 0x6944D
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	}
	if (bParam2)
	{
		HUD::DISPLAY_HUD(0);
		HUD::DISPLAY_RADAR(0);
	}
	if (bParam3)
	{
		CAM::RENDER_SCRIPT_CAMS(true, bParam4, iParam5, 1, 0, 0);
		if (bParam4)
		{
			uParam0->f_5 = (MISC::GET_GAME_TIMER() + iParam5);
		}
	}
	if (bParam6)
	{
		iVar0 = 0;
		if (!bParam7)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 70f)
			{
				iVar1 = 3;
			}
			else
			{
				iVar1 = 0;
				iVar0 = 2;
			}
		}
		else
		{
			iVar1 = iParam8;
		}
		STREAMING::START_PLAYER_SWITCH(PLAYER::PLAYER_PED_ID(), uParam0->f_3, iVar0, iVar1);
	}
	GlobalFunc_73(1);
	*uParam0 = 1;
}

void func_732()//Position - 0x694EE
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	int iVar8;
	bool bVar9;
	
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("hood4", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &iVar0);
	Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	TASK::WAYPOINT_RECORDING_GET_COORD("hood4", iVar0, &Var1);
	TASK::WAYPOINT_RECORDING_GET_NUM_POINTS("hood4", &iVar7);
	iVar8 = iVar0 + 5;
	if (iVar8 >= (iVar7 - 1))
	{
		iVar8 = (iVar7 - 1);
	}
	bVar9 = false;
	if (Var1.f_2 > 27.3f && Var4.f_2 < 28.1f)
	{
		iVar0 = 109;
		TASK::WAYPOINT_RECORDING_GET_COORD("hood4", iVar0, &Var1);
		bVar9 = true;
	}
	else if (iVar0 >= 242 && iVar0 <= 248)
	{
		iVar0 = 245;
		bVar9 = true;
	}
	else if (iVar0 >= 72 && iVar0 <= 79)
	{
		iVar0 = 76;
		bVar9 = true;
	}
	else if (iVar0 >= 225 && iVar0 <= 231)
	{
		iVar0 = 229;
		bVar9 = true;
	}
	if (!bVar9)
	{
		iVar0 = iVar8;
	}
	TASK::TASK_FOLLOW_WAYPOINT_RECORDING(PLAYER::PLAYER_PED_ID(), "hood4", iVar0, 38, -1);
}

int func_733()//Position - 0x695EB
{
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 494.57f, -516.88f, 25.56f, 11f, 11f, 11f, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_734(var uParam0, int iParam1)//Position - 0x69624
{
	if (iParam1->f_7 == uParam0->f_1)
	{
		return 1;
	}
	return 0;
}

void func_735(int iParam0)//Position - 0x6963C
{
	if (*iParam0 == 2)
	{
		CAM::SET_USE_HI_DOF();
	}
}

void func_736(int iParam0)//Position - 0x6964F
{
	bool bVar0;
	
	switch (iParam0->f_10)
	{
		case 0:
			if (*iParam0 == 2)
			{
				iParam0->f_10 = 1;
			}
			break;
		
		case 1:
			bVar0 = false;
			switch (iParam0->f_11)
			{
				case 0:
					if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CHOP_CAM_A_01", 0) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CHOP_CAM_A_02", 0))
					{
						bVar0 = true;
					}
					break;
				
				case 1:
					if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CHOP_CAM_B_01", 0) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CHOP_CAM_B_02", 0))
					{
						bVar0 = true;
					}
					break;
				
				case 2:
					if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CHOP_CAM_C_01", 0) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CHOP_CAM_C_02", 0))
					{
						bVar0 = true;
					}
					break;
			}
			if (bVar0)
			{
				if (iParam0->f_12 != -1)
				{
					if (AUDIO::HAS_SOUND_FINISHED(iParam0->f_12))
					{
						switch (iParam0->f_11)
						{
							case 0:
								AUDIO::PLAY_SOUND_FRONTEND(iParam0->f_12, "CHOP_CAM_A", 0, 1);
								break;
							
							case 1:
								AUDIO::PLAY_SOUND_FRONTEND(iParam0->f_12, "CHOP_CAM_B", 0, 1);
								break;
							
							case 2:
								AUDIO::PLAY_SOUND_FRONTEND(iParam0->f_12, "CHOP_CAM_C", 0, 1);
								break;
							}
						}
				}
				iParam0->f_11++;
				if (iParam0->f_11 > 2)
				{
					iParam0->f_11 = 0;
				}
				iParam0->f_10 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

var func_737(int iParam0, bool bParam1, int iParam2)//Position - 0x6978A
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	bool bVar15;
	
	bVar5 = false;
	bVar6 = PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
	bVar7 = ((bVar6 && Global_68245) && GlobalFunc_70());
	bVar8 = GlobalFunc_758(bParam1);
	iParam0->f_6 = GlobalFunc_237(GlobalFunc_8315());
	Global_17098.f_12 = !iParam0->f_23;
	Global_17098.f_121 = bParam1;
	Global_17098.f_122 = iParam2;
	Global_17098.f_123 = bVar7;
	Global_17098.f_3 = Global_17098.f_2;
	Global_17098.f_70 = 0;
	bVar9 = ((Global_17098.f_104 == 4 || Global_17098.f_104 == 1) || Global_17098.f_104 == 3);
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		GlobalFunc_7724(iParam0, iVar0, 1, &iVar1, &iVar2, &uVar3, &uVar4);
		Global_17098.f_71[iVar0] = -1;
		Global_17098.f_76[iVar0] = -1;
		Global_17098.f_94[iVar0] = -1;
		Global_17098.f_99[iVar0] = -1;
		Global_17098.f_54[iVar0] = 0;
		Global_17098.f_59[iVar0] = 0;
		Global_17098.f_81[iVar0 /*3*/] = { 0f, 0f, 0f };
		if (GlobalFunc_39(14))
		{
			iVar10 = iVar0;
			if (iVar10 == 3)
			{
				Global_17098.f_70 = 1;
			}
			else if ((GlobalFunc_5142(iVar10) && GlobalFunc_6809(iVar10)) && iVar10 == GlobalFunc_237(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3215))
			{
				Global_17098.f_70 = 1;
			}
			else
			{
				Global_17098.f_70 = 0;
			}
		}
		else if (Global_17098.f_12)
		{
			if (!Global_17098.f_70)
			{
				if ((((!PED::IS_PED_INJURED((*iParam0)[iVar0]) && !iParam0->f_18[iVar0]) && (*iParam0)[iVar0] != PLAYER::PLAYER_PED_ID()) || iParam0->f_34[iVar0] == 2) || iParam0->f_24[iVar0] != 0)
				{
					Global_17098.f_70 = 1;
				}
			}
			if (iParam0->f_34[iVar0] == 3)
			{
				bVar5 = true;
			}
			else if (iParam0->f_6 == iVar0)
			{
				if (iParam0->f_34[iVar0] == 1 || iParam0->f_34[iVar0] == 2)
				{
					bVar5 = true;
				}
			}
			if (iParam0->f_8[iVar0])
			{
				if (iParam0->f_39 && iParam0->f_7 == iVar0)
				{
					iParam0->f_8[iVar0] = 0;
				}
				else if ((iParam0->f_6 == iVar0 && !bVar5) || iParam0->f_34[iVar0] == 3)
				{
					iParam0->f_8[iVar0] = 0;
				}
				else if ((PED::IS_PED_INJURED((*iParam0)[iVar0]) && !iParam0->f_23) && !iParam0->f_34[iVar0] == 2)
				{
					iParam0->f_8[iVar0] = 0;
				}
			}
			Global_17098.f_49[iVar0] = iParam0->f_8[iVar0];
			Global_17098.f_64[iVar0] = uVar3;
			if ((ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0]) && !PED::IS_PED_INJURED((*iParam0)[iVar0])) && (*iParam0)[iVar0] != PLAYER::PLAYER_PED_ID())
			{
				Global_17098.f_71[iVar0] = SYSTEM::FLOOR((((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH((*iParam0)[iVar0])) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH((*iParam0)[iVar0])) - 100f)) * 100f));
			}
			if ((Global_17098.f_71[iVar0] != -1 && IntToFloat(Global_17098.f_71[iVar0]) < 25f) || iParam0->f_13[iVar0])
			{
				if (iParam0->f_6 != iVar0)
				{
					Global_17098.f_54[iVar0] = 1;
					Global_17098.f_59[iVar0] = iParam0->f_13[iVar0];
				}
			}
		}
		else
		{
			Global_17098.f_49[iVar0] = iParam0->f_8[iVar0];
			Global_17098.f_64[iVar0] = uVar3;
		}
		if (Global_17098.f_124)
		{
			Global_17098.f_19[iVar2] = iVar1;
			Global_17098.f_24[iVar2] = uVar3;
			Global_17098.f_29[iVar2] = uVar4;
			Global_17098.f_34[iVar0] = 0;
			Global_17098.f_44[iVar0] = 0;
			Global_17098.f_39[iVar0] = 0;
			if (bVar9)
			{
				if (Global_17098.f_12)
				{
					if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0]) && !PED::IS_PED_INJURED((*iParam0)[iVar0]))
					{
						Global_17098.f_76[iVar0] = PED::GET_PED_ARMOUR((*iParam0)[iVar0]);
						if (iVar0 == 0)
						{
							STATS::STAT_GET_INT(joaat("sp0_special_ability"), &(Global_17098.f_94[iVar0]), -1);
							STATS::STAT_GET_INT(joaat("sp0_special_ability_unlocked"), &(Global_17098.f_99[iVar0]), -1);
						}
						else if (iVar0 == 1)
						{
							STATS::STAT_GET_INT(joaat("sp1_special_ability"), &(Global_17098.f_94[iVar0]), -1);
							STATS::STAT_GET_INT(joaat("sp1_special_ability_unlocked"), &(Global_17098.f_99[iVar0]), -1);
						}
						else if (iVar0 == 2)
						{
							STATS::STAT_GET_INT(joaat("sp2_special_ability"), &(Global_17098.f_94[iVar0]), -1);
							STATS::STAT_GET_INT(joaat("sp2_special_ability_unlocked"), &(Global_17098.f_99[iVar0]), -1);
						}
						Global_17098.f_81[iVar0 /*3*/] = { ENTITY::GET_ENTITY_COORDS((*iParam0)[iVar0], 1) };
					}
				}
				else if ((iVar0 < 3 && iVar1 != 3) && (!GlobalFunc_756() || GlobalFunc_39(14)))
				{
					Global_17098.f_34[iVar0] = Global_87680[iVar0];
					Global_17098.f_44[iVar0] = 0;
					Global_17098.f_34[iVar0] = (Global_17098.f_34[iVar0] + Global_87692[iVar0]);
					Global_17098.f_39[iVar0] = 0;
					Global_17098.f_34[iVar0] = (Global_17098.f_34[iVar0] + Global_87688[iVar0]);
				}
			}
		}
		if (((Global_17098.f_69 == -1 || !Global_17098.f_14) && Global_17098.f_69 != iVar2) && !GlobalFunc_39(14))
		{
			if ((iParam0->f_6 == iVar0 && !bVar5) || iParam0->f_34[iVar0] == 3)
			{
				Global_17098.f_69 = iVar2;
				Global_17098.f_14 = 1;
			}
		}
		iVar0++;
	}
	if (bVar8)
	{
		if ((((((Global_17098.f_124 && (!Global_17098.f_9 || Global_17098.f_10)) && ((!GlobalFunc_6687(0) || Global_17098.f_12) || GlobalFunc_39(14))) && ((!GlobalFunc_6687(3) || Global_17098.f_12) || GlobalFunc_39(14))) && ((!GlobalFunc_6687(2) || Global_17098.f_12) || GlobalFunc_39(14))) && ((!GlobalFunc_6687(9) || Global_17098.f_12) || GlobalFunc_39(14))) && ((!GlobalFunc_6687(10) || Global_17098.f_12) || GlobalFunc_39(14)))
		{
			if (Global_17098.f_104 == 4)
			{
				if (GlobalFunc_39(14))
				{
					if (Global_17098.f_69 == 0)
					{
						Global_17098.f_11 = GlobalFunc_5193(iParam0, 1);
					}
					else if (Global_17098.f_69 == 1)
					{
						Global_17098.f_11 = GlobalFunc_5193(iParam0, 2);
					}
					else if (Global_17098.f_69 == 2)
					{
						Global_17098.f_11 = GlobalFunc_5193(iParam0, 3);
					}
					else if (Global_17098.f_69 == 3)
					{
						Global_17098.f_11 = GlobalFunc_5193(iParam0, 0);
					}
				}
				else if (Global_17098.f_69 == 0)
				{
					Global_17098.f_11 = GlobalFunc_9134(iParam0, 1);
				}
				else if (Global_17098.f_69 == 1)
				{
					Global_17098.f_11 = GlobalFunc_9134(iParam0, 2);
				}
				else if (Global_17098.f_69 == 2)
				{
					Global_17098.f_11 = GlobalFunc_6820(iParam0);
				}
				else if (Global_17098.f_69 == 3)
				{
					Global_17098.f_11 = GlobalFunc_9134(iParam0, 0);
				}
			}
			else if (Global_17098.f_104 == 3 || (Global_17098.f_9 && Global_17098.f_10))
			{
				if ((((!Global_17098.f_11 && Global_17098.f_12) && Global_17098.f_70) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && !(GlobalFunc_752(PLAYER::PLAYER_PED_ID()) && (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))))
				{
					if (iParam0->f_34[0] == 3)
					{
						iVar11 = 0;
					}
					else if (iParam0->f_34[1] == 3)
					{
						iVar11 = 1;
					}
					else if (iParam0->f_34[2] == 3)
					{
						iVar11 = 2;
					}
					else
					{
						iVar11 = GlobalFunc_8315();
					}
					switch (iVar11)
					{
						case 0:
							if (iParam0->f_13[1] && !Global_17098.f_16)
							{
								iVar12 = 1;
							}
							else if (iParam0->f_13[2] && !Global_17098.f_16)
							{
								iVar12 = 2;
							}
							else if (iParam0->f_43)
							{
								iVar12 = iParam0->f_40;
								iVar13 = iParam0->f_41;
								iVar14 = iParam0->f_42;
							}
							else
							{
								iVar12 = 1;
								iVar13 = 2;
							}
							break;
						
						case 1:
							if (iParam0->f_13[2] && !Global_17098.f_16)
							{
								iVar12 = 2;
							}
							else if (iParam0->f_13[0] && !Global_17098.f_16)
							{
								iVar12 = 0;
							}
							else if (iParam0->f_43)
							{
								iVar12 = iParam0->f_40;
								iVar13 = iParam0->f_41;
								iVar14 = iParam0->f_42;
							}
							else
							{
								iVar12 = 2;
								iVar13 = 0;
							}
							break;
						
						case 2:
							if (iParam0->f_13[0] && !Global_17098.f_16)
							{
								iVar12 = 0;
							}
							else if (iParam0->f_13[1] && !Global_17098.f_16)
							{
								iVar12 = 1;
							}
							else if (iParam0->f_43)
							{
								iVar12 = iParam0->f_40;
								iVar13 = iParam0->f_41;
								iVar14 = iParam0->f_42;
							}
							else
							{
								iVar12 = 0;
								iVar13 = 1;
							}
							break;
					}
					bVar15 = true;
					if (PAD::_IS_USING_KEYBOARD(2))
					{
						if (!PAD::IS_CONTROL_JUST_RELEASED(0, 19))
						{
							if (PAD::IS_CONTROL_JUST_RELEASED(0, 166))
							{
								bVar15 = false;
								if (iVar11 != 0)
								{
									if (GlobalFunc_9134(iParam0, 0))
									{
										Global_17098.f_11 = 1;
									}
								}
							}
							else if (PAD::IS_CONTROL_JUST_RELEASED(0, 167))
							{
								bVar15 = false;
								if (iVar11 != 1)
								{
									if (GlobalFunc_9134(iParam0, 1))
									{
										Global_17098.f_11 = 1;
									}
								}
							}
							else if (PAD::IS_CONTROL_JUST_RELEASED(0, 168))
							{
								bVar15 = false;
								if (iVar11 != 2)
								{
									if (GlobalFunc_9134(iParam0, 2))
									{
										Global_17098.f_11 = 1;
									}
								}
							}
						}
					}
					if (bVar15)
					{
						if (GlobalFunc_9134(iParam0, iVar12))
						{
							Global_17098.f_11 = 1;
						}
						else if (GlobalFunc_9134(iParam0, iVar13))
						{
							Global_17098.f_11 = 1;
						}
						else if (GlobalFunc_9134(iParam0, iVar14))
						{
							Global_17098.f_11 = 1;
						}
					}
				}
			}
		}
	}
	if (Global_17098.f_11)
	{
		Global_17098.f_125 = 1;
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	}
	return Global_17098.f_11;
}














void func_751()//Position - 0x6ACF7
{
	bool bVar0;
	
	if (!bLocal_1642)
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (PLAYER::GET_PLAYER_SPRINT_TIME_REMAINING(PLAYER::PLAYER_ID()) <= 5f)
			{
				if (iLocal_1106 == 2)
				{
					bVar0 = true;
				}
				else if (iLocal_1594)
				{
					bVar0 = true;
				}
				if (bVar0)
				{
					bLocal_1642 = func_705("AM_H_NOSTAM", 0, -1);
					if (bLocal_1642)
					{
						GlobalFunc_651(29);
					}
				}
			}
		}
	}
}

void func_752()//Position - 0x6AD50
{
	if (!iLocal_1594)
	{
		if (Local_1184 != 0)
		{
			iLocal_1594 = 1;
		}
		else if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (MISC::GET_GAME_TIMER() >= iLocal_1767 + 5000)
			{
				if (func_705("FC_CHOPHLP", 0, 14000))
				{
					func_730(&Local_1184, &Local_1111, 1);
					iLocal_1782 = MISC::GET_GAME_TIMER();
					iLocal_1594 = 1;
				}
			}
		}
	}
	else
	{
		if (!iLocal_1596)
		{
			if (MISC::GET_GAME_TIMER() >= iLocal_1782 + 14000)
			{
				func_730(&Local_1184, &Local_1111, 0);
				iLocal_1596 = 1;
			}
		}
		if (Local_1184 >= 1)
		{
			if (GlobalFunc_74("FC_CHOPHLP"))
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_1783 + 500)
				{
					HUD::CLEAR_HELP(0);
					iLocal_1783 = MISC::GET_GAME_TIMER();
				}
			}
		}
		if (!bLocal_1595)
		{
			if (Local_1184 == 2 || Local_1184 == 0)
			{
				if (!bLocal_1572)
				{
					bLocal_1595 = func_705("FC_QSWHLP", 0, -1);
				}
			}
		}
		else if (GlobalFunc_74("FC_QSWHLP"))
		{
			if (Local_1184 == 1 || Local_1184 == 3)
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_1783 + 500)
				{
					HUD::CLEAR_HELP(0);
					iLocal_1783 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
}

void func_753()//Position - 0x6AE64
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<3> Var3;
	int iVar6;
	struct<3> Var7;
	float fVar10;
	struct<3> Var11;
	bool bVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	bool bVar18;
	
	bVar2 = false;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_1235[iVar0 /*12*/].f_3[iVar1 /*4*/]))
			{
				switch (Local_1235[iVar0 /*12*/].f_3[iVar1 /*4*/].f_2)
				{
					case 0:
						if (Local_1184 == 0)
						{
							if (Local_1235[iVar0 /*12*/].f_2 > 0)
							{
								if (((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !GlobalFunc_116(0)) && func_203()) && !bLocal_1579)
								{
									if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1235[iVar0 /*12*/].f_3[iVar1 /*4*/], 3.7f, 3.7f, 2f, 0, 1, 0))
									{
										if (!(iVar0 == 2 && iVar1 == 0))
										{
											Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_1235[iVar0 /*12*/].f_3[iVar1 /*4*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) };
											iVar6 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(Local_1235[iVar0 /*12*/].f_3[iVar1 /*4*/], 1), 3.5f, 0, 7);
											if ((Var3.f_1 < 0f && !ENTITY::DOES_ENTITY_EXIST(iVar6)) && ((iVar0 != 0 || iVar1 != 1) || Var3.x < 0f))
											{
												bVar2 = true;
												if (PAD::IS_CONTROL_JUST_PRESSED(0, 51) && !PAD::IS_CONTROL_PRESSED(0, 37))
												{
													Var7 = { 0f, 0f, 0f };
													if (iVar1 == 0)
													{
														Var7.x = 1.6f;
														Var7.f_1 = 2.36f;
														fVar10 = ((func_345(iVar0) - 180f) + 6.7f);
													}
													else
													{
														Var7.x = -1.6f;
														Var7.f_1 = -2.36f;
														fVar10 = (func_345(iVar0) + 6.7f);
													}
													Var11 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1235[iVar0 /*12*/], Var7) };
													PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
													TASK::CLEAR_SEQUENCE_TASK(&uLocal_1843);
													TASK::OPEN_SEQUENCE_TASK(&uLocal_1843);
													TASK::TASK_CLEAR_LOOK_AT(0);
													if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 1.8f)
													{
														TASK::TASK_STAND_STILL(0, 1000);
													}
													if ((iVar0 == 0 && iVar1 == 1) || (iVar0 == 1 && iVar1 == 1))
													{
														TASK::TASK_GO_STRAIGHT_TO_COORD(0, Var11, 1f, 20000, fVar10, 1056964608);
													}
													else
													{
														TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var11, 1f, 20000, 0.25f, 0, fVar10);
													}
													TASK::CLOSE_SEQUENCE_TASK(uLocal_1843);
													TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_1843);
													if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
													{
														PED::SET_PED_DESIRED_HEADING(PLAYER::PLAYER_PED_ID(), fVar10);
													}
													bVar2 = false;
													iLocal_1838 = MISC::GET_GAME_TIMER();
													Local_1235[iVar0 /*12*/].f_3[iVar1 /*4*/].f_2 = 1;
												}
											}
										}
									}
								}
							}
						}
						break;
					
					case 1:
						GlobalFunc_7629();
						if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
						{
							if (!PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1))
							{
								PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), 1063765679, false, 0, 0);
							}
							PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 69, 1);
						}
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
						bVar14 = false;
						if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 242628503) == 7 || MISC::GET_GAME_TIMER() >= iLocal_1838 + 21000)
						{
							bVar14 = true;
						}
						if (bVar14)
						{
							if (iVar1 == 0)
							{
								fVar15 = 180f;
							}
							else
							{
								fVar15 = 0f;
							}
							iLocal_1571 = 1;
							if (GlobalFunc_663("FC_GOBOX", 0, 0))
							{
								GlobalFunc_7206(0, 1, 0, 0);
							}
							HUD::CLEAR_HELP(1);
							if (Local_1235[iVar0 /*12*/].f_2 == 2)
							{
								bLocal_1574 = true;
								bLocal_1575 = true;
							}
							else
							{
								bLocal_1574 = false;
								bLocal_1575 = false;
							}
							iLocal_1576 = 0;
							iLocal_1577 = 0;
							iLocal_1578 = 0;
							bLocal_1634 = true;
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
							TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
							Local_1235[iVar0 /*12*/].f_3[iVar1 /*4*/].f_2 = 2;
							PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
							iLocal_1802 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							Local_1733 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 1.9f, 2.2f, -1f) };
							Local_1736 = { 0f, 0f, (ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) - 6.65f) };
							Local_1739 = { ENTITY::GET_ENTITY_COORDS(Local_1235[iVar0 /*12*/], 1) + Vector(func_755(iVar0, iVar1), 0f, 0f) };
							Local_1742 = { 0f, 0f, (fVar15 + func_345(iVar0)) };
							PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iLocal_1802, Local_1733, Local_1736, 2);
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_1802, 0);
							uLocal_1803 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_1803, Local_1235[iVar0 /*12*/], -1);
							PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iLocal_1803, 0f, 0f, 0f, 0f, 0f, fVar15, 2);
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_1803, 0);
							uLocal_1804 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::SET_SYNCHRONIZED_SCENE_ORIGIN(uLocal_1804, Local_1739, Local_1742, 2);
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_1804, 0);
							WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_1802, func_198(3), "open_train_car_fra", 4f, -2f, 5, 0, 1148846080, 0);
							ENTITY::DETACH_ENTITY(Local_1235[iVar0 /*12*/].f_3[iVar1 /*4*/], 1, 1);
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_1235[iVar0 /*12*/].f_3[iVar1 /*4*/], iLocal_1803, "open_train_car_door", func_198(3), 4f, 1090519040, 0, 1148846080);
							ENTITY::DETACH_ENTITY(Local_1235[iVar0 /*12*/].f_3[iVar1 /*4*/].f_1, 1, 1);
							ENTITY::FREEZE_ENTITY_POSITION(Local_1235[iVar0 /*12*/].f_3[iVar1 /*4*/].f_1, 0);
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_1235[iVar0 /*12*/].f_3[iVar1 /*4*/].f_1, iLocal_1804, "open_train_car_handle", func_198(3), 1000f, 1090519040, 0, 1148846080);
							ENTITY::SET_ENTITY_COLLISION(Local_1235[iVar0 /*12*/].f_3[iVar1 /*4*/].f_1, 0, 0);
							ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_1235[iVar0 /*12*/].f_3[iVar1 /*4*/].f_1);
							iLocal_1801 = MISC::GET_GAME_TIMER();
						}
						break;
					
					case 2:
						GlobalFunc_7629();
						if (!iLocal_1576)
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_1801 + 3500)
							{
								if (iVar0 != 2)
								{
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
									iLocal_1576 = 1;
								}
							}
						}
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1802))
						{
							GlobalFunc_5915(&Local_1733, Local_1739, (0.85f / 2f));
							GlobalFunc_5915(&Local_1736, Local_1742, (7.5f / 2f));
							PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iLocal_1802, Local_1733, Local_1736, 2);
							fVar16 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1802);
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1803))
							{
								PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_1803, fVar16);
							}
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1804))
							{
								PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_1804, fVar16);
							}
							if (iVar0 == 2)
							{
								if (!bLocal_1672)
								{
									if (fVar16 >= 0.36f)
									{
										iLocal_1805 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
										PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1805, Local_1235[iVar0 /*12*/], -1);
										PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iLocal_1805, 0f, 0f, 0f, 0f, 0f, 0f, 2);
										PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_1805, 0);
										func_754(iVar0, iVar1);
										PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_1805, 0.273f);
										HUD::DISPLAY_RADAR(0);
										HUD::DISPLAY_HUD(0);
										CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
										bLocal_1672 = true;
									}
								}
							}
							if (!iLocal_1577)
							{
								if (fVar16 >= 0.51f)
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Boxcar_Door_Slide", Local_1235[iVar0 /*12*/].f_3[iVar1 /*4*/], "FRANKLIN_0_SOUNDS", 0, 0);
									iLocal_1577 = 1;
								}
							}
							if (!iLocal_1578)
							{
								if (fVar16 >= 0.843f)
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Boxcar_Door_Limit", Local_1235[iVar0 /*12*/].f_3[iVar1 /*4*/], "FRANKLIN_0_SOUNDS", 0, 0);
									iLocal_1578 = 1;
								}
							}
						}
						if (iVar0 == 2)
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1805))
							{
								bVar18 = true;
								fVar17 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1805);
							}
							else if (bLocal_1672)
							{
								bVar18 = false;
							}
							else
							{
								bVar18 = true;
							}
						}
						else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1802))
						{
							bVar18 = true;
							fVar17 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1802);
						}
						else
						{
							bVar18 = false;
						}
						if (bVar18)
						{
							if (!bLocal_1574)
							{
								if (fVar17 >= 0.3f)
								{
									bLocal_1574 = func_239("FKN0_ISHE2", 0, 0, 0, 1);
									if (bLocal_1574)
									{
										RECORDING::_0x293220DA1B46CEBC(1f, 5f, 4);
									}
								}
							}
							if (iVar0 != 2)
							{
								if (fVar17 >= 0.88f)
								{
									if (!bLocal_1575)
									{
										bLocal_1575 = func_239("FKN0_ISHE3", 0, 0, 0, 1);
									}
								}
							}
						}
						else
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_1235[iVar0 /*12*/].f_3[iVar1 /*4*/], 1);
							ENTITY::SET_ENTITY_COLLISION(Local_1235[iVar0 /*12*/].f_3[iVar1 /*4*/], 1, 0);
							ENTITY::FREEZE_ENTITY_POSITION(Local_1235[iVar0 /*12*/].f_3[iVar1 /*4*/].f_1, 1);
							ENTITY::SET_ENTITY_COLLISION(Local_1235[iVar0 /*12*/].f_3[iVar1 /*4*/].f_1, 1, 0);
							Local_1235[iVar0 /*12*/].f_3[iVar1 /*4*/].f_2 = 3;
							iLocal_1576 = 1;
							if (iVar0 == 2)
							{
								func_48(0, 3, 0);
							}
						}
						break;
					
					case 3:
						break;
				}
				if (Local_1235[iVar0 /*12*/].f_3[iVar1 /*4*/].f_2 == 1 || Local_1235[iVar0 /*12*/].f_3[iVar1 /*4*/].f_2 == 2)
				{
					bLocal_1572 = true;
				}
			}
			iVar1++;
		}
		iVar0++;
	}
	if (bVar2)
	{
		if (!GlobalFunc_74("FC_BOXHLP"))
		{
			GlobalFunc_Display_Help_Text("FC_BOXHLP");
		}
	}
	else if (GlobalFunc_74("FC_BOXHLP"))
	{
		HUD::CLEAR_HELP(1);
	}
}

void func_754(int iParam0, int iParam1)//Position - 0x6B6D1
{
	char* sVar0;
	struct<3> Var1;
	
	func_54();
	if (iParam0 == 2)
	{
		sVar0 = "open_train_car_cam";
		MISC::CLEAR_AREA(516.2484f, -677.8181f, 24.2444f, 10f, 1, 0, 0, 0);
		MISC::CLEAR_AREA(511.58f, -651.0069f, 23.75105f, 24f, 1, 0, 0, 0);
		MISC::CLEAR_AREA_OF_PROJECTILES(517.1099f, -665.3444f, 23.80532f, 25f, 0);
		FIRE::STOP_FIRE_IN_RANGE(517.1099f, -665.3444f, 23.80532f, 25f);
		GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(517.1099f, -665.3444f, 23.80532f, 25f);
	}
	else
	{
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_1235[iParam0 /*12*/].f_3[iParam1 /*4*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) };
		if (Var1.x <= 0f)
		{
			if (iLocal_1825 == 0)
			{
				sVar0 = "open_train_car_CAML1";
				iLocal_1825 = 1;
			}
			else
			{
				sVar0 = "open_train_car_CAML2";
				iLocal_1825 = 0;
			}
		}
		else if (iLocal_1826 == 0)
		{
			sVar0 = "open_train_car_CAMR1";
			iLocal_1826 = 1;
		}
		else
		{
			sVar0 = "open_train_car_CAMR2";
			iLocal_1826 = 0;
		}
		MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8f, 0);
		FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8f);
		GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8f);
	}
	CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_1395, iLocal_1805, sVar0, func_198(3));
	PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_1805, 0);
}

float func_755(int iParam0, int iParam1)//Position - 0x6B827
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				return -0.145f;
			}
			else
			{
				return -0.105f;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				return -0.148f;
			}
			else
			{
				return -0.145f;
			}
			break;
		
		case 3:
			if (iParam1 == 0)
			{
				return -0.07f;
			}
			else
			{
				return -0.05f;
			}
			break;
		
		case 4:
			if (iParam1 == 0)
			{
				return -0.02f;
			}
			else
			{
				return -0.065f;
			}
			break;
	}
	return 0f;
}

void func_756()//Position - 0x6B8BF
{
	switch (iLocal_1344)
	{
		case 0:
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 488.903f, -495.385f, 23.597f, 562.402f, -504.983f, 26.316f, 41f, 0, 1, 0) || iLocal_1106 == 3) || iLocal_1568)
			{
				if (!iLocal_1471)
				{
					if (Local_1184 == 0)
					{
						if (func_705("FC_RUNHLP1", 0, -1))
						{
							iLocal_1344 = 1;
						}
					}
				}
			}
			break;
		
		case 1:
			if (!iLocal_1471)
			{
				if (Local_1184 == 0)
				{
					if (func_705("FC_RUNHLP2", 0, -1))
					{
						iLocal_1344 = 2;
					}
				}
			}
			break;
		
		case 2:
			break;
	}
	if (!iLocal_1568)
	{
		if (func_338(1, 1) > iLocal_1816 && !iLocal_1471)
		{
			if (func_239("FKN0_RUNUP", 0, 0, 0, 1))
			{
				func_227(-1, -1, -1);
				iLocal_1568 = 1;
			}
		}
	}
}

void func_757(bool bParam0)//Position - 0x6B9A7
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	struct<3> Var8;
	float fVar11;
	
	bVar0 = false;
	if (bParam0)
	{
		if (!PED::IS_PED_INJURED(iLocal_1352))
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_1352))
			{
				bVar0 = true;
			}
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (bParam0)
		{
			iVar1 = TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_1352);
			if (iVar1 > iLocal_1794)
			{
				func_24(0);
				iVar2 = iVar1 + 3;
				iVar3 = iVar1 + 7;
				TASK::WAYPOINT_RECORDING_GET_NUM_POINTS("hood8", &iVar4);
				iVar4 = (iVar4 - 1);
				if (iVar2 <= iVar4 && iVar3 <= iVar4)
				{
					TASK::WAYPOINT_RECORDING_GET_COORD("hood8", iVar2, &Var5);
					TASK::WAYPOINT_RECORDING_GET_COORD("hood8", iVar3, &Var8);
					fVar11 = (MISC::GET_HEADING_FROM_VECTOR_2D((Var8.x - Var5.x), (Var8.f_1 - Var5.f_1)) + 90f);
					uLocal_1844 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_franklin0_chop_trail", Var5 + Vector(0.3f, 0f, 0f), 0f, 0f, fVar11, 7f, 0, 0, 0, 0);
					Local_1184.f_13 = { Var5 };
					iLocal_1794 = iVar2;
				}
				else
				{
					Var5 = { 533.86f, -679.24f, 25.27f };
					Var8 = { 527.99f, -678.71f, 24.75f };
					fVar11 = (MISC::GET_HEADING_FROM_VECTOR_2D((Var8.x - Var5.x), (Var8.f_1 - Var5.f_1)) + 90f);
					uLocal_1844 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_franklin0_chop_trail", Var5 + Vector(0.3f, 0f, 0f), 0f, 0f, fVar11, 8f, 0, 0, 0, 0);
					Local_1184.f_13 = { Var5 };
					iLocal_1794 = iVar4;
				}
			}
		}
		else if (!iLocal_1608)
		{
			func_24(1);
			uLocal_1844 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE("scr_franklin0_chop_trail", Local_1158, 0f, 0f, 0f, 0f, 0f, 270f, 23553, 5f, 0, 0, 0);
			iLocal_1608 = 1;
		}
	}
	else
	{
		func_24(0);
	}
}


void func_759()//Position - 0x6BB54
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		switch (iVar0)
		{
			case 0:
				iVar1 = 5;
				iVar2 = 0;
				iVar3 = 1300;
				fVar4 = 4f;
				break;
			
			case 1:
				iVar1 = 8;
				iVar2 = 0;
				iVar3 = 20000;
				fVar4 = 2.67f;
				break;
			
			case 2:
				iVar1 = 7;
				iVar2 = 0;
				if (iLocal_1106 == 3 || iLocal_1471)
				{
					iVar3 = 7400;
					fVar4 = 6.5f;
				}
				else
				{
					iVar3 = 30000;
					fVar4 = 10f;
				}
				break;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1377[iVar0], 0))
		{
			if (!iLocal_1534[iVar0])
			{
				if (iLocal_1203 == iVar1)
				{
					if (MISC::GET_GAME_TIMER() >= (iLocal_1775 + iVar2))
					{
						iLocal_1534[iVar0] = 1;
						iLocal_1778[iVar0] = MISC::GET_GAME_TIMER();
						fLocal_1755[iVar0] = fVar4;
						VEHICLE::SET_TRAIN_CRUISE_SPEED(uLocal_1377[iVar0], fLocal_1755[iVar0]);
					}
				}
			}
			else if (MISC::GET_GAME_TIMER() >= (iLocal_1778[iVar0] + iVar3))
			{
				fLocal_1755[iVar0] = (fLocal_1755[iVar0] - (1f * SYSTEM::TIMESTEP()));
				if (fLocal_1755[iVar0] <= 0f)
				{
					fLocal_1755[iVar0] = 0f;
				}
				VEHICLE::SET_TRAIN_CRUISE_SPEED(uLocal_1377[iVar0], fLocal_1755[iVar0]);
				VEHICLE::SET_TRAIN_SPEED(uLocal_1377[iVar0], fLocal_1755[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_760()//Position - 0x6BCA1
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	int iVar15;
	int iVar16;
	
	if (!iLocal_1546)
	{
		GlobalFunc_2516();
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	if (!bLocal_1511)
	{
		bLocal_1511 = func_239("FKN0_GOGET3", 0, 0, 0, 1);
	}
	else if (!iLocal_1475)
	{
		iLocal_1475 = func_201("FC_CHASE", 1, 0, 7500);
	}
	if (!bLocal_1683)
	{
		bLocal_1683 = AUDIO::PREPARE_MUSIC_EVENT("FRA0_FENCE");
	}
	func_808();
	switch (iLocal_1340)
	{
		case 0:
			func_684(9);
			func_684(10);
			iLocal_1340 = 1;
			break;
		
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(func_72(9)) && STREAMING::HAS_MODEL_LOADED(func_72(10)))
			{
				func_346(0, 0, 1, 0, 0);
				iLocal_1340 = 2;
			}
			break;
	}
	if (!iLocal_1661)
	{
		if ((Var0.f_1 >= -550.1f && Var0.x >= 481.8f) && Var0.f_2 <= 25.3f)
		{
			iVar3 = 0;
			while (iVar3 < 7)
			{
				iVar4 = iVar3;
				if ((((iVar4 == 2 || iVar4 == 4) || iVar4 == 5) || iVar4 == 6) || iVar4 == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_1369[iVar3]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uLocal_1369[iVar3]))
						{
							iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uLocal_1369[iVar3], -1);
							if (ENTITY::DOES_ENTITY_EXIST(iVar5))
							{
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar5);
							}
						}
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uLocal_1369[iVar3]));
					}
				}
				iVar3++;
			}
			iVar3 = 0;
			while (iVar3 < 6)
			{
				iVar6 = iVar3;
				if (((iVar6 == 0 || iVar6 == 1) || iVar6 == 2) || iVar6 == 3)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_1204[iVar3 /*5*/]))
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1204[iVar3 /*5*/]));
					}
				}
				iVar3++;
			}
			func_197(11);
			iLocal_1661 = 1;
		}
	}
	if (!iLocal_1662)
	{
		if (iLocal_1546)
		{
			if (Var0.f_1 >= -517.4f && Var0.x >= 519.3f)
			{
				func_197(9);
				func_197(10);
				iVar7 = 0;
				while (iVar7 < 7)
				{
					iVar8 = iVar7;
					if (iVar8 == 0 || iVar8 == 3)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_1369[iVar7]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(uLocal_1369[iVar7]))
							{
								iVar9 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uLocal_1369[iVar7], -1);
								if (ENTITY::DOES_ENTITY_EXIST(iVar9))
								{
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar9);
								}
							}
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uLocal_1369[iVar7]));
						}
					}
					iVar7++;
				}
				iLocal_1662 = 1;
			}
		}
	}
	func_803();
	if (!iLocal_1471)
	{
		func_786();
	}
	func_772();
	func_695();
	func_756();
	func_751();
	if (iLocal_1329 != 2)
	{
		func_243(4);
	}
	else if (iLocal_1183 == 3)
	{
		func_243(8);
	}
	else
	{
		func_243(9);
	}
	if (!iLocal_1614)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_1366[1]))
		{
			bVar10 = false;
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_1366[1]))
			{
				if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_1366[1], 70f, 70f, 70f, 0, 0, 0))
				{
					bVar10 = true;
				}
			}
			else
			{
				bVar10 = true;
			}
			if (bVar10)
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uLocal_1366[1]));
				func_197(8);
				iLocal_1614 = 1;
			}
		}
	}
	switch (iLocal_1341)
	{
		case 0:
			func_684(13);
			func_684(14);
			func_684(15);
			iLocal_1341 = 1;
			break;
		
		case 1:
			if ((STREAMING::HAS_MODEL_LOADED(func_72(13)) && STREAMING::HAS_MODEL_LOADED(func_72(14))) && STREAMING::HAS_MODEL_LOADED(func_72(15)))
			{
				func_347();
				iLocal_1341 = 2;
			}
			break;
	}
	if (!iLocal_1471)
	{
		bVar11 = false;
		bVar12 = false;
		bVar13 = false;
		bVar14 = false;
		if (!PED::IS_PED_INJURED(iLocal_1352) && !PED::IS_PED_INJURED(Local_1158))
		{
			if (Local_1184 == 0 || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1352, 22f, 22f, 22f, 0, 0, 0))
			{
				if (((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1352, 30f, 30f, 30f, 0, 0, 0) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) >= 3.5f) && (ENTITY::GET_ENTITY_SPEED(iLocal_1352) >= 3.5f || Local_1170.f_1 == 1)) && iLocal_1329 == 0)
				{
					bVar11 = true;
				}
				if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1158, 40f, 40f, 40f, 0, 0, 0) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) >= 3.5f) && (ENTITY::GET_ENTITY_SPEED(Local_1158) >= 3.5f || Local_1158.f_1 == 1))
				{
					bVar12 = true;
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_1355[0]))
		{
			if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_1355[0]))
			{
				bVar11 = false;
				bVar12 = false;
			}
		}
		if (!bLocal_1640)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 480.145f, -590.657f, 30.419f, 467.195f, -589.278f, 27f, 30f, 0, 1, 0))
			{
				bLocal_1640 = func_705("FC_JUMHLP", 0, -1);
			}
		}
		else if (GlobalFunc_74("FC_JUMHLP"))
		{
			if (PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_1783 + 500)
				{
					HUD::CLEAR_HELP(0);
					iLocal_1783 = MISC::GET_GAME_TIMER();
				}
			}
		}
		if (!iLocal_1654)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 494.4673f, -538.4968f, 23.75095f, 493.0979f, -552.7206f, 26.25095f, 7.9f, 0, 1, 0) && (Local_1158.f_2 >= 2 || iLocal_1182 >= 3))
			{
				iLocal_1654 = func_705("FC_SLDHLP", 0, -1);
			}
		}
		if ((Var0.f_1 >= -538.074f || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "move_climb", "bonnet_slide_r_in", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "move_climb", "bonnet_slide_l_in", 3))
		{
			iLocal_1654 = 1;
			if (GlobalFunc_74("FC_SLDHLP"))
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_1783 + 500)
				{
					RECORDING::_0x293220DA1B46CEBC(3f, 4f, 3);
					HUD::CLEAR_HELP(0);
					iLocal_1783 = MISC::GET_GAME_TIMER();
				}
			}
		}
		if (bVar11)
		{
			if (bVar12)
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
				{
					case 1:
					case 2:
						bVar14 = true;
						break;
					
					case 0:
						bVar13 = true;
						break;
				}
			}
			else
			{
				bVar13 = true;
			}
		}
		else if (bVar12)
		{
			bVar14 = true;
		}
		else if (MISC::GET_GAME_TIMER() >= iLocal_1765)
		{
			func_227(500, 2000, -1);
		}
		if (!bLocal_1549)
		{
			if (iLocal_1182 != 6)
			{
				if (bVar14)
				{
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
					{
						func_242("FKN0_FCHASE", -1, 7000, 10000, 0);
					}
					else
					{
						func_242("FKN0_OG2", -1, 7000, 10000, 0);
					}
				}
				else if (bVar13)
				{
					func_242("FKN0_DOGCHS", -1, 7000, 10000, 0);
				}
			}
			else if (!PED::IS_PED_INJURED(iLocal_1352))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1352, 560.952f, -532.453f, 28.7f, 574.626f, -533.877f, 13.742f, 50f, 0, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 560.952f, -532.453f, 28.7f, 574.626f, -533.877f, 13.742f, 50f, 0, 1, 0))
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_1352))
					{
						bLocal_1549 = func_239("FKN0_GETHIM", 0, 0, 0, 1);
					}
				}
			}
		}
		if (!iLocal_1499)
		{
			if (MISC::GET_GAME_TIMER() >= iLocal_1767 + 1000)
			{
				iLocal_1499 = 1;
			}
			else if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
			{
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 3f);
			}
		}
		if (iLocal_1546)
		{
			if (iLocal_1547)
			{
				if (MISC::GET_GAME_TIMER() <= iLocal_1808 + 400)
				{
					if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
					{
						PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 2f);
					}
				}
			}
		}
		if (!iLocal_1593)
		{
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_79(8), 80f, 80f, 80f, 0, 0, 0))
			{
				func_771();
			}
		}
		if (!iLocal_1597)
		{
			if ((Var0.x > 485.92f && Var0.f_1 > -519f) && Var0.f_2 < 29.32f)
			{
				func_769();
			}
		}
		if (!PED::IS_PED_INJURED(Local_1158))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1158, 18f, 18f, 18f, 0, 0, 0))
			{
				PED::SET_PED_MOVE_RATE_OVERRIDE(PLAYER::PLAYER_PED_ID(), 0.94f);
			}
			else
			{
				PED::SET_PED_MOVE_RATE_OVERRIDE(PLAYER::PLAYER_PED_ID(), 0.97f);
			}
		}
		else
		{
			PED::SET_PED_MOVE_RATE_OVERRIDE(PLAYER::PLAYER_PED_ID(), 0.97f);
		}
		if (!iLocal_1546)
		{
			if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), 488.7149f, -527.1984f, 23.75116f, 499.2563f, -517.1548f, 25.89596f, 0, 1, 0))
			{
				if (PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID()))
				{
					PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 143, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
				}
			}
			if (Local_1184 == 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 494.3f, -516.89f, 23.05f, 494.07f, -519.45f, 25.85f, 7.8f, 0, 1, 1))
				{
					if (func_767(PLAYER::PLAYER_PED_ID(), 10, 50f))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
						{
							if (GlobalFunc_552(1, 0, 1))
							{
								iLocal_1788 = 1;
								if (func_203())
								{
									iLocal_1471 = 1;
								}
							}
						}
					}
				}
				else if ((Var0.f_1 >= -516.9f || iLocal_1182 >= 6) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 521.171f, -552.487f, 23.781f, 526.091f, -519.091f, 29.735f, 40f, 0, 1, 0))
				{
					bLocal_1545 = true;
					iLocal_1546 = 1;
				}
				else
				{
					iVar15 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(494.3488f, -516.8829f, 23.8982f, 2f, joaat("prop_fncconstruc_01d"), 0, 0, 1);
					if (ENTITY::DOES_ENTITY_EXIST(iVar15))
					{
						if (OBJECT::HAS_OBJECT_BEEN_BROKEN(iVar15))
						{
							bLocal_1545 = true;
							iLocal_1546 = 1;
						}
					}
				}
			}
		}
		else
		{
			if (!bLocal_1685)
			{
				if (!bLocal_1684)
				{
					bLocal_1685 = GlobalFunc_2867("FRA0_BYPASS_FENCE");
				}
			}
			if (!iLocal_1623)
			{
				func_42(3);
				func_49(4);
				iLocal_1623 = 1;
			}
		}
		if (bLocal_1545)
		{
			switch (iLocal_1331)
			{
				case 0:
					if (Local_1170.f_1 == 0)
					{
						TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("hood11", ENTITY::GET_ENTITY_COORDS(iLocal_1352, 1), &iVar16);
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_1352, "hood11", iVar16, 4, -1);
						Local_1170.f_11 = 0;
						iLocal_1329 = 3;
						Local_1170.f_1 = 0;
						Local_1170.f_9 = -1;
						Local_1170.f_10 = MISC::GET_GAME_TIMER();
						iLocal_1183 = 4;
						iLocal_1331 = 1;
					}
					break;
				
				case 1:
					if (Local_1170.f_1 != 0)
					{
						iLocal_1331 = 2;
					}
					break;
				}
		}
		if (iLocal_1699)
		{
			if (MISC::GET_GAME_TIMER() >= iLocal_1837 + 3000)
			{
				func_712(3);
			}
		}
		if (!bLocal_1550)
		{
			if (!PED::IS_PED_INJURED(Local_1158))
			{
				if (iLocal_1182 == 6)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(Local_1158, func_766(8), 1f, 1f, 3f, 0, 1, 0))
					{
						if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 542.683f, -531.091f, 23.268f, 588.103f, -536.543f, 30.591f, 80f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1158, 18f, 18f, 18f, 0, 0, 0)) || (ENTITY::IS_ENTITY_ON_SCREEN(Local_1158) && !ENTITY::IS_ENTITY_OCCLUDED(Local_1158))) || Local_1184 != 0)
						{
							iLocal_1788 = 2;
							if (func_203())
							{
								iLocal_1471 = 1;
							}
						}
						else
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_1389))
							{
								HUD::REMOVE_BLIP(&uLocal_1389);
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_1158))
							{
								PED::DELETE_PED(&Local_1158);
							}
							iLocal_1699 = 1;
							iLocal_1837 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
	}
	else
	{
		switch (iLocal_1788)
		{
			case 0:
				break;
			
			case 1:
				func_762();
				break;
			
			case 2:
				func_761();
				break;
			}
	}
}

void func_761()//Position - 0x6C84E
{
	int iVar0;
	
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	switch (iLocal_1110)
	{
		case 0:
			STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
			func_7(1, 1, -1, 1, 0, 1, 1, 1);
			func_49(5);
			PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			iLocal_1802 = PED::CREATE_SYNCHRONIZED_SCENE(559.729f, -569.216f, 23.967f, 0f, 0f, -6.5f, 2);
			func_54();
			CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_1395, iLocal_1802, "BallasOG_JumpOnTrain_IG7_CAMERA", func_198(2));
			MISC::CLEAR_AREA(551.07f, -573.04f, 23.8f, 18f, 1, 0, 0, 0);
			MISC::CLEAR_AREA_OF_PROJECTILES(551.07f, -573.04f, 23.8f, 18f, 0);
			FIRE::STOP_FIRE_IN_RANGE(551.07f, -573.04f, 23.8f, 18f);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(551.07f, -573.04f, 23.8f, 18f);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 562.88f, -545.27f, 23.79f, 1, 0, 0, 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_1352))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_1352, 561.94f, -543.4f, 23.77f, 1, 0, 0, 1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_1352);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_1377[2]))
			{
				VEHICLE::DELETE_MISSION_TRAIN(&(uLocal_1377[2]));
			}
			func_336(2, 2, 1);
			iLocal_1534[2] = 1;
			iLocal_1778[2] = MISC::GET_GAME_TIMER();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1377[1], 0) && !PED::IS_PED_INJURED(Local_1158))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_1158);
				Local_1158.f_9 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0.8f, 0f, 0f, 0f, 180f, 2);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(Local_1158.f_9, VEHICLE::GET_TRAIN_CARRIAGE(uLocal_1377[1], 2), 0);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_1158, Local_1158.f_9, func_198(2), "BallasOG_JumpOnTrain_IG7", 1000f, -1000f, 0, 0, 1148846080, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1158, 0, 0);
			}
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1204[iVar0 /*5*/]))
				{
					PED::DELETE_PED(&(Local_1204[iVar0 /*5*/]));
				}
				iVar0++;
			}
			iLocal_1702 = 0;
			RECORDING::_0x48621C9FCA3EBD28(4);
			iLocal_1762 = MISC::GET_GAME_TIMER();
			iLocal_1110 = 1;
			break;
		
		case 1:
			STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
			switch (iLocal_1155)
			{
				case 0:
					if (!iLocal_1551)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_1762 + 3800)
							{
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 561.64f, -559.8f, 23.79f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 137.43f);
								TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), func_79(20), 2f, 20000, 1193033728, 1056964608);
								iLocal_1551 = 1;
							}
						}
					}
					if (MISC::GET_GAME_TIMER() >= iLocal_1762 + 4000)
					{
						iLocal_1762 = MISC::GET_GAME_TIMER();
						iLocal_1155 = 1;
					}
					break;
				
				case 1:
					if (!bLocal_1604)
					{
						bLocal_1604 = func_239("FKN0_LOST", 1, 1, 0, 1);
					}
					if (!iLocal_1566)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_1762 + 1000)
						{
							if (!PED::IS_PED_INJURED(Local_1158))
							{
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_1158);
								ENTITY::DETACH_ENTITY(Local_1158, 1, 1);
								ENTITY::SET_ENTITY_COORDS(Local_1158, func_79(21), 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(Local_1158, 173f);
								ENTITY::FREEZE_ENTITY_POSITION(Local_1158, 1);
							}
							iLocal_1566 = 1;
						}
					}
					if (!iLocal_1702)
					{
						if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_1762 + 1700)
							{
								GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
								iLocal_1702 = 1;
							}
						}
					}
					if (MISC::GET_GAME_TIMER() >= iLocal_1762 + 2000)
					{
						iLocal_1110 = 2;
					}
					break;
			}
			break;
		
		case 2:
			RECORDING::_0x81CBAE94390F9F89();
			if (!PED::IS_PED_INJURED(iLocal_1352))
			{
				ENTITY::DETACH_ENTITY(iLocal_1352, 1, 1);
				if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_1352, PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, 0, 1, 0))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_1352, func_79(23), 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_1352, 156.2f);
				}
			}
			func_42(5);
			func_7(0, 1, -1, 1, 1, 1, 1, 1);
			func_256(3, 0, 1, 0, 0, 1, 1, 1);
			break;
	}
}

void func_762()//Position - 0x6CC5B
{
	switch (iLocal_1110)
	{
		case 0:
			func_7(1, 1, -1, 1, 0, 1, 1, 0);
			func_763(12, 1, 1800);
			MISC::CLEAR_AREA_OF_PROJECTILES(494.3577f, -516.894f, 23.8195f, 8f, 0);
			FIRE::STOP_FIRE_IN_RANGE(494.3577f, -516.894f, 23.8195f, 8f);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(494.3577f, -516.894f, 23.8195f, 8f);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 493.48f, -525.11f, 23.75148f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), -7.1f);
			TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_198(2), "franklin_wallcrash", 1000f, -8f, -1, 819200, 0.52f, 0, 0, 0);
			func_49(4);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
			if (!PED::IS_PED_INJURED(iLocal_1352))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_1352, 492.9f, -521.53f, 23.75f, 1, 0, 0, 1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_1352);
			}
			CAM::SHAKE_CAM(uLocal_1393, "HAND_SHAKE", 1f);
			RECORDING::_0x48621C9FCA3EBD28(4);
			iLocal_1702 = 0;
			iLocal_1762 = MISC::GET_GAME_TIMER();
			iLocal_1110 = 1;
			break;
		
		case 1:
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 91, 1);
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 2f);
			if (!iLocal_1626)
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_1762)
				{
					iLocal_1626 = 1;
				}
			}
			if (MISC::GET_GAME_TIMER() >= iLocal_1762 + 400)
			{
				if (bLocal_1683)
				{
					if (!bLocal_1685)
					{
						if (!bLocal_1684)
						{
							bLocal_1684 = GlobalFunc_2867("FRA0_FENCE");
						}
					}
				}
				if (!iLocal_1623)
				{
					CAM::SHAKE_CAM(uLocal_1393, "SMALL_EXPLOSION_SHAKE", 0.3f);
					PAD::SET_PAD_SHAKE(0, 500, 128);
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "Crash_Through_Fence", 494.4f, -516.9f, 24.9f, "FRANKLIN_0_SOUNDS", 0, 0, 0);
					iLocal_1623 = 1;
				}
			}
			if (MISC::GET_GAME_TIMER() >= iLocal_1762 + 1000)
			{
				if (!PED::IS_PED_INJURED(iLocal_1352))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_1352, 494.0186f, -518.8427f, 23.75159f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_1352, -15.75f);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_1352);
					PED::FORCE_PED_MOTION_STATE(iLocal_1352, -530524, true, 1, 0);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_1352, 2f);
					iLocal_1183 = 3;
					iLocal_1329 = 2;
				}
				iLocal_1110 = 2;
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
				{
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 2f);
				}
				else
				{
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 2000, 0, 1, 0);
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_1352))
			{
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_1352, 2f);
			}
			RECORDING::_0x81CBAE94390F9F89();
			func_7(0, 1, -1, 0, 0, 1, 0, 0);
			CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0f, 2, 0);
			iLocal_1547 = 1;
			iLocal_1808 = MISC::GET_GAME_TIMER();
			bLocal_1548 = true;
			iLocal_1546 = 1;
			break;
	}
}

void func_763(int iParam0, bool bParam1, int iParam2)//Position - 0x6CF26
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	func_765(iParam0, &Var0, &Var3, &fVar6);
	func_764(&uLocal_1393);
	CAM::DETACH_CAM(uLocal_1393);
	CAM::STOP_CAM_POINTING(uLocal_1393);
	CAM::SET_CAM_COORD(uLocal_1393, Var0);
	CAM::SET_CAM_ROT(uLocal_1393, Var3, 2);
	CAM::SET_CAM_FOV(uLocal_1393, fVar6);
	if (bParam1)
	{
		func_765(iParam0 + 1, &Var0, &Var3, &fVar6);
		func_764(&uLocal_1394);
		CAM::SET_CAM_COORD(uLocal_1394, Var0);
		CAM::SET_CAM_ROT(uLocal_1394, Var3, 2);
		CAM::SET_CAM_FOV(uLocal_1394, fVar6);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_1394, uLocal_1393, iParam2, 1, 1);
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
}

void func_764(var uParam0)//Position - 0x6CFC3
{
	if (CAM::DOES_CAM_EXIST(uLocal_1394))
	{
		CAM::DESTROY_CAM(uLocal_1394, 0);
	}
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::DESTROY_CAM(*uParam0, 0);
	}
	if (!CAM::DOES_CAM_EXIST(*uParam0))
	{
		*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
	}
}

void func_765(int iParam0, var uParam1, var uParam2, float fParam3)//Position - 0x6D006
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 383.42f, 357.86f, 102.65f };
			*uParam2 = { -1.53f, 0f, -89.85f };
			*fParam3 = 31.64f;
			break;
		
		case 1:
			*uParam1 = { 383.42f, 357.86f, 102.65f };
			*uParam2 = { -1.53f, 0f, -89.85f };
			*fParam3 = 29.64f;
			break;
		
		case 2:
			*uParam1 = { 390.96f, 357.8f, 102.85f };
			*uParam2 = { -1.62f, 0f, 85.38f };
			*fParam3 = 31.24f;
			break;
		
		case 3:
			*uParam1 = { 390.96f, 357.8f, 102.85f };
			*uParam2 = { -1.62f, 0f, 85.38f };
			*fParam3 = 29.24f;
			break;
		
		case 4:
			*uParam1 = { 374.79f, 360.54f, 101.92f };
			*uParam2 = { 8.38f, 0f, -102.25f };
			*fParam3 = 41.09f;
			break;
		
		case 5:
			*uParam1 = { 374.79f, 360.54f, 101.92f };
			*uParam2 = { 8.38f, 0f, -102.25f };
			*fParam3 = 39.09f;
			break;
		
		case 6:
			*uParam1 = { 367.78f, 366.68f, 108.92f };
			*uParam2 = { -22.82f, 0f, -145.5f };
			*fParam3 = 41.09f;
			break;
		
		case 7:
			*uParam1 = { 367.78f, 366.68f, 108.92f };
			*uParam2 = { -22.82f, 0f, -145.5f };
			*fParam3 = 39.09f;
			break;
		
		case 8:
			*uParam1 = { 457.5f, -704.22f, 27.6f };
			*uParam2 = { -6.9f, 0f, -24.43f };
			*fParam3 = 38.53f;
			break;
		
		case 9:
			*uParam1 = { 456.1f, -696.84f, 26.64f };
			*uParam2 = { 10.45f, 0f, -138.8f };
			*fParam3 = 33.53f;
			break;
		
		case 10:
			*uParam1 = { 494.95f, -562.77f, 26.8f };
			*uParam2 = { 36.68f, 0.31f, 98.29f };
			*fParam3 = 39.01f;
			break;
		
		case 11:
			*uParam1 = { 494.95f, -562.77f, 26.8f };
			*uParam2 = { 7.33f, 1.25f, 42.55f };
			*fParam3 = 39.01f;
			break;
		
		case 12:
			*uParam1 = { 493.14f, -519.1f, 24.76f };
			*uParam2 = { 6.54f, 0.98f, -39.25f };
			*fParam3 = 50f;
			break;
		
		case 13:
			*uParam1 = { 494.61f, -516.3f, 25.27f };
			*uParam2 = { -2.87f, 0.57f, -15.58f };
			*fParam3 = 50f;
			break;
		
		case 14:
			*uParam1 = { 555.54f, -559.33f, 27.13f };
			*uParam2 = { -10.37f, 4.4f, 143.73f };
			*fParam3 = 46.164f;
			break;
		
		case 15:
			*uParam1 = { 555.54f, -559.33f, 27.13f };
			*uParam2 = { -10.37f, 4.4f, 135.1f };
			*fParam3 = 46.164f;
			break;
		
		case 16:
			*uParam1 = { 563.9f, -560.71f, 29.68f };
			*uParam2 = { -19.32f, 5.88f, 130.27f };
			*fParam3 = 55f;
			break;
		
		case 17:
			*uParam1 = { 563.9f, -560.71f, 29.68f };
			*uParam2 = { -15.81f, 5.88f, 130.27f };
			*fParam3 = 55f;
			break;
		
		case 18:
			*uParam1 = { 532.45f, -678.69f, 25.22f };
			*uParam2 = { -2.12f, 0f, 99.72f };
			*fParam3 = 37.88f;
			break;
		
		case 19:
			*uParam1 = { 531.91f, -677.94f, 25.2f };
			*uParam2 = { -2.12f, 0f, 111.87f };
			*fParam3 = 37.88f;
			break;
		
		case 20:
			*uParam1 = { 527.4f, -674.36f, 25.92f };
			*uParam2 = { -7.43f, 0f, 162.87f };
			*fParam3 = 43.79f;
			break;
		
		case 21:
			*uParam1 = { 506.18f, -643.42f, 24.17f };
			*uParam2 = { 3.93f, 0f, -119.93f };
			*fParam3 = 24.91f;
			break;
		
		case 22:
			*uParam1 = { 506.18f, -643.42f, 24.17f };
			*uParam2 = { 3.93f, 0f, -119.93f };
			*fParam3 = 21.91f;
			break;
		
		case 23:
			*uParam1 = { 510.37f, -639.15f, 25.56f };
			*uParam2 = { -6.17f, 0f, -170.88f };
			*fParam3 = 27.6f;
			break;
		
		case 24:
			*uParam1 = { 510.37f, -639.15f, 25.56f };
			*uParam2 = { -6.17f, 0f, -170.88f };
			*fParam3 = 24.6f;
			break;
		
		case 25:
			*uParam1 = { -24.62f, -1472.97f, 36.19f };
			*uParam2 = { -13.11f, 0f, -21.69f };
			*fParam3 = 45f;
			break;
	}
}

Vector3 func_766(int iParam0)//Position - 0x6D563
{
	switch (iParam0)
	{
		case 0:
			return 475.59f, -586.06f, 27.51f;
			break;
		
		case 1:
			return 487.07f, -569.6f, 28.46f;
			break;
		
		case 2:
			return 493.2f, -545.27f, 23.75f;
			break;
		
		case 3:
			return 493.8f, -523.79f, 23.75f;
			break;
		
		case 4:
			return 531.66f, -502.47f, 23.8f;
			break;
		
		case 5:
			return 555.47f, -504.14f, 23.8f;
			break;
		
		case 8:
			return 552.98f, -564.71f, 23.83f;
			break;
		
		case 10:
			return 493.38f, -519.92f, 24.25f;
			break;
		
		case 11:
			return 478.3f, -582f, 27.85f;
			break;
		
		case 12:
			return 486.53f, -570.45f, 28.7f;
			break;
		
		case 13:
			return 492.53f, -544.55f, 24.18f;
			break;
		
		case 14:
			return 532f, -501.1f, 24.25f;
			break;
		
		case 15:
			return 556.72f, -503.84f, 24.25f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_767(int iParam0, int iParam1, float fParam2)//Position - 0x6D6D4
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = GlobalFunc_2783(ENTITY::GET_ENTITY_HEADING(iParam0));
	fVar1 = GlobalFunc_2783(func_768(iParam1));
	fVar2 = (fVar0 - fVar1);
	if (fVar2 < 0f)
	{
		fVar2 = (fVar2 * -1f);
	}
	if (fVar2 <= fParam2 || fVar2 >= (360f - fParam2))
	{
		return 1;
	}
	return 0;
}

float func_768(int iParam0)//Position - 0x6D726
{
	switch (iParam0)
	{
		case 0:
			return -96.59f;
			break;
		
		case 1:
			return 7.3f;
			break;
		
		case 2:
			return -8.93f;
			break;
		
		case 3:
		case 10:
			return -4.64f;
			break;
		
		case 4:
			return -96.77f;
			break;
		
		case 5:
			return -99.36f;
			break;
		
		case 8:
			return 79.23f;
			break;
		
		case 9:
			return -6.37f;
			break;
		
		case 11:
			return -110f;
			break;
		
		case 12:
			return -30f;
			break;
		
		case 13:
			return -4f;
			break;
		
		case 14:
			return -97.33f;
			break;
		
		case 15:
			return -96.5f;
			break;
	}
	return 0f;
}

void func_769()//Position - 0x6D819
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if ((((iVar0 == 2 || iVar0 == 3) || iVar0 == 7) || iVar0 == 8) || iVar0 == 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_1369[iVar0]))
			{
				func_770(uLocal_1369[iVar0]);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uLocal_1369[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iVar0 < 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_1204[iVar0 /*5*/]))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1204[iVar0 /*5*/]));
			}
		}
		iVar0++;
	}
	iLocal_1597 = 1;
}

void func_770(int iParam0)//Position - 0x6D8BD
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
}

void func_771()//Position - 0x6D8E7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iVar0 == 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_1369[iVar0]))
			{
				func_770(uLocal_1369[iVar0]);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uLocal_1369[iVar0]));
			}
		}
		iVar0++;
	}
	iLocal_1593 = 1;
}

void func_772()//Position - 0x6D92F
{
	func_784();
	func_759();
	func_774();
	GlobalFunc_587();
}


void func_774()//Position - 0x6D94F
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	struct<3> Var9;
	float fVar12;
	
	Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	if (!PED::IS_PED_INJURED(Local_1158))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (!PED::IS_PED_INJURED(Local_1204[iVar0 /*5*/]))
			{
				iVar4 = iVar0;
				switch (Local_1204[iVar4 /*5*/].f_1)
				{
					case 0:
						switch (iVar4)
						{
							case 0:
								if (MISC::GET_GAME_TIMER() >= iLocal_1775 + 1500 && iLocal_1203 >= 0)
								{
									func_780(iVar4, 5, 456.9f, -636.52f, 27.51f, Local_1158, -1082130432);
								}
								break;
							
							case 1:
								func_780(iVar4, 1, 0f, 0f, 0f, Local_1204[2 /*5*/], -1082130432);
								break;
							
							case 2:
								func_780(iVar4, 1, 0f, 0f, 0f, Local_1204[1 /*5*/], -1082130432);
								break;
							
							case 3:
								break;
							
							case 4:
								if (MISC::GET_GAME_TIMER() >= iLocal_1775 + 2000 && iLocal_1203 >= 4)
								{
									func_780(iVar4, 5, 515.9999f, -567.99f, 23.79971f, Local_1158, -1082130432);
								}
								break;
							
							case 5:
								if (MISC::GET_GAME_TIMER() >= iLocal_1775 + 6000 && iLocal_1203 >= 4)
								{
									func_780(iVar4, 5, 525.28f, -458.1278f, 23.81619f, Local_1158, -1082130432);
								}
								break;
						}
						break;
					
					case 1:
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_1204[iVar4 /*5*/], 264387021) == 7)
						{
							func_780(iVar4, 0, 0f, 0f, 0f, 0, -1082130432);
						}
						break;
					
					case 5:
						if (MISC::GET_GAME_TIMER() >= Local_1204[iVar4 /*5*/].f_3)
						{
							if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(iLocal_1352)) && !PED::IS_PED_INJURED(Local_1158))
							{
								fVar5 = GlobalFunc_156(Local_1204[iVar4 /*5*/], PLAYER::PLAYER_PED_ID(), 0);
								fVar6 = GlobalFunc_156(Local_1204[iVar4 /*5*/], iLocal_1352, 0);
								fVar7 = GlobalFunc_156(Local_1204[iVar4 /*5*/], Local_1158, 0);
								if (fVar5 < fVar6)
								{
									if (fVar5 < fVar7)
									{
										iVar8 = PLAYER::PLAYER_PED_ID();
									}
									else if (fVar7 < fVar6)
									{
										iVar8 = Local_1158;
									}
									else
									{
										iVar8 = iLocal_1352;
									}
								}
								else if (fVar6 < fVar7)
								{
									iVar8 = iLocal_1352;
								}
								else
								{
									iVar8 = Local_1158;
								}
								TASK::TASK_LOOK_AT_ENTITY(Local_1204[iVar4 /*5*/], iVar8, -1, 2048, 2);
								Local_1204[iVar4 /*5*/].f_3 = MISC::GET_GAME_TIMER() + 1000;
							}
						}
						break;
					
					case 2:
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1204[iVar4 /*5*/], func_198(2), "REACTION_FORWARD_BIG_INTRO_A", 3))
						{
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_1204[iVar4 /*5*/], func_198(2), "REACTION_FORWARD_BIG_INTRO_A") >= 0.98f)
							{
								if (iVar4 == 3)
								{
									func_780(iVar4, func_779(iVar4), 0f, 0f, 0f, 0, -1082130432);
								}
							}
						}
						else if (((MISC::GET_GAME_TIMER() >= Local_1204[iVar4 /*5*/].f_2 + 3000 && iVar4 == 3) || MISC::GET_GAME_TIMER() >= Local_1204[iVar4 /*5*/].f_2 + 10000) || Var1.f_1 > -625f)
						{
							func_780(iVar4, func_779(iVar4), 0f, 0f, 0f, 0, -1082130432);
						}
						else if (MISC::GET_GAME_TIMER() >= Local_1204[iVar4 /*5*/].f_2 + 1000)
						{
							if (iVar4 == 2)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_1204[iVar4 /*5*/], -875674219) == 7 && TASK::GET_SCRIPT_TASK_STATUS(Local_1204[iVar4 /*5*/], 242628503) == 7)
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1204[iVar4 /*5*/], Local_1158, 30000);
								}
							}
						}
						break;
					
					case 3:
						if (MISC::GET_GAME_TIMER() >= (Local_1204[iVar4 /*5*/].f_2 + func_778(iVar4)))
						{
							func_780(iVar4, 4, 0f, 0f, 0f, 0, -1082130432);
						}
						break;
					
					case 4:
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1204[iVar4 /*5*/], func_198(2), "BIG_EXIT_TO_GENERIC", 3))
						{
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_1204[iVar4 /*5*/], func_198(2), "BIG_EXIT_TO_GENERIC") >= 0.98f)
							{
								func_780(iVar4, func_779(iVar4), 0f, 0f, 0f, 0, -1082130432);
							}
						}
						else if (MISC::GET_GAME_TIMER() >= Local_1204[iVar4 /*5*/].f_2 + 1000)
						{
							func_780(iVar4, func_779(iVar4), 0f, 0f, 0f, 0, -1082130432);
						}
						break;
					
					case 6:
						if (!PED::IS_PED_RAGDOLL(Local_1204[iVar4 /*5*/]))
						{
							if (((iVar4 == 3 && MISC::GET_GAME_TIMER() >= Local_1204[iVar4 /*5*/].f_2 + 1000) || MISC::GET_GAME_TIMER() >= Local_1204[iVar4 /*5*/].f_2 + 8000) || Var1.f_1 > -626f)
							{
								Var9 = { 0f, 0f, 0f };
								Var9 = { Var9 };
								switch (iVar4)
								{
									case 3:
										Var9 = { 432.377f, -589.8359f, 27.49981f };
										break;
								}
								func_780(iVar4, func_779(iVar4), Var9, 0, -1082130432);
							}
						}
						break;
					
					case 8:
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_1204[iVar4 /*5*/], -1146898486) == 7)
						{
							func_780(iVar4, 8, 0f, 0f, 0f, 0, -1082130432);
						}
						break;
					
					case 9:
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_1204[iVar4 /*5*/], 1805844857) == 7)
						{
							func_780(iVar4, 9, 0f, 0f, 0f, 0, -1082130432);
						}
						break;
				}
				if (Local_1204[iVar4 /*5*/].f_1 != 9)
				{
					switch (iVar4)
					{
						case 1:
							if (ENTITY::IS_ENTITY_AT_ENTITY(Local_1204[iVar4 /*5*/], Local_1158, 1.5f, 1.5f, 0f, 0, 0, 0) && !PED::IS_PED_RAGDOLL(Local_1204[iVar4 /*5*/]))
							{
								func_780(iVar4, 6, 2f, 0f, 0f, 0, -1082130432);
							}
							break;
						
						case 2:
							if (Local_1204[1 /*5*/].f_1 == 6 && (Local_1204[iVar4 /*5*/].f_1 == 1 || Local_1204[iVar4 /*5*/].f_1 == 0))
							{
								func_780(iVar4, 2, 0f, 0f, 0f, 0, -1082130432);
							}
							break;
						
						case 3:
							if (ENTITY::IS_ENTITY_AT_ENTITY(Local_1204[iVar4 /*5*/], Local_1158, 1.5f, 1.5f, 0f, 0, 0, 0) && !PED::IS_PED_RAGDOLL(Local_1204[iVar4 /*5*/]))
							{
								func_780(iVar4, 6, -2f, 0f, 0f, 0, -1082130432);
							}
							break;
					}
					if (!Local_1204[iVar4 /*5*/].f_4)
					{
						if (!PED::IS_PED_INJURED(iLocal_1352))
						{
							switch (iVar4)
							{
								case 0:
									fVar12 = 20f;
									break;
								
								case 1:
									fVar12 = -1f;
									break;
								
								case 2:
									fVar12 = 3f;
									break;
								
								case 3:
									fVar12 = 6f;
									break;
								
								case 4:
									fVar12 = 6f;
									break;
								
								case 5:
									fVar12 = 16f;
									break;
							}
							if (fVar12 >= 0f)
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(Local_1204[iVar4 /*5*/], PLAYER::PLAYER_PED_ID(), 6f, 6f, 6f, 0, 0, 0))
								{
									if (!GlobalFunc_111())
									{
										GlobalFunc_5122(Local_1204[iVar4 /*5*/], "GENERIC_SHOCKED_MED", 9);
										Local_1204[iVar4 /*5*/].f_4 = 1;
									}
								}
							}
						}
					}
					if (func_775(Local_1204[iVar4 /*5*/], 1))
					{
						func_780(iVar4, 9, 0f, 0f, 0f, 0, -1082130432);
					}
				}
			}
			iVar0++;
		}
	}
}

int func_775(int iParam0, bool bParam1)//Position - 0x6E040
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 20f, 0f), 8f, 0, 0, 0))
		{
			return 1;
		}
	}
	if (bParam1)
	{
		if (PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), Var0 - Vector(35f, 35f, 35f), Var0 + Vector(35f, 35f, 35f), 0, 0))
		{
			return 1;
		}
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
	{
		return 1;
	}
	return 0;
}



int func_778(int iParam0)//Position - 0x6E31A
{
	iParam0 = iParam0;
	return 6000;
}

int func_779(int iParam0)//Position - 0x6E329
{
	switch (iParam0)
	{
		case 1:
			return 8;
			break;
		
		case 2:
			return 8;
			break;
		
		case 3:
			return 5;
			break;
	}
	return 7;
}

void func_780(int iParam0, int iParam1, struct<3> Param2, int iParam5, float fParam6)//Position - 0x6E362
{
	if (!PED::IS_PED_INJURED(Local_1204[iParam0 /*5*/]))
	{
		switch (iParam1)
		{
			case 5:
				TASK::TASK_GO_STRAIGHT_TO_COORD(Local_1204[iParam0 /*5*/], Param2, 1f, -1, 1193033728, 1056964608);
				break;
			
			case 1:
				if (!PED::IS_PED_INJURED(iParam5))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_1204[iParam0 /*5*/], iParam5, -1, 2048, 2);
					TASK::TASK_CHAT_TO_PED(Local_1204[iParam0 /*5*/], iParam5, 16, 0f, 0f, 0f, -1f, -1f);
				}
				break;
			
			case 6:
				PED::SET_PED_TO_RAGDOLL_WITH_FALL(Local_1204[iParam0 /*5*/], 3000, 3000, 2, GlobalFunc_107(Param2), 0f, 0f, 0f, 0f, 0f, 0f, 0f);
				if (iParam0 == 1)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_1204[iParam0 /*5*/], Local_1158, 30000);
				}
				break;
			
			case 2:
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1843);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_1843);
				if (!PED::IS_PED_INJURED(iParam5))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam5, 1000);
				}
				else if (fParam6 >= 0f)
				{
					TASK::TASK_ACHIEVE_HEADING(0, fParam6, 0);
				}
				TASK::TASK_PLAY_ANIM(0, func_198(2), "REACTION_FORWARD_BIG_INTRO_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_1843);
				TASK::TASK_PERFORM_SEQUENCE(Local_1204[iParam0 /*5*/], uLocal_1843);
				break;
			
			case 3:
				TASK::TASK_PLAY_ANIM(Local_1204[iParam0 /*5*/], func_782(iParam0), func_781(iParam0), 8f, -8f, -1, 1, 0, 0, 0, 0);
				break;
			
			case 4:
				TASK::TASK_PLAY_ANIM(Local_1204[iParam0 /*5*/], func_198(2), "BIG_EXIT_TO_GENERIC", 8f, -8f, -1, 2, 0, 0, 0, 0);
				break;
			
			case 7:
				TASK::TASK_LOOK_AT_ENTITY(Local_1204[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				break;
			
			case 8:
				TASK::TASK_LOOK_AT_ENTITY(Local_1204[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				TASK::TASK_WANDER_STANDARD(Local_1204[iParam0 /*5*/], 1193033728, 0);
				break;
			
			case 9:
				TASK::TASK_LOOK_AT_ENTITY(Local_1204[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				TASK::TASK_SMART_FLEE_PED(Local_1204[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
				break;
			}
	}
	Local_1204[iParam0 /*5*/].f_2 = MISC::GET_GAME_TIMER();
	Local_1204[iParam0 /*5*/].f_1 = iParam1;
}

char* func_781(int iParam0)//Position - 0x6E585
{
	switch (iParam0)
	{
		case 0:
			return "EXIT_TO_GENERIC";
			break;
		
		case 1:
			return "EXIT_TO_GENERIC";
			break;
		
		case 2:
			return "EXIT_TO_GENERIC";
			break;
		
		case 3:
			return "EXIT_TO_GENERIC";
			break;
		
		case 4:
			return "EXIT_TO_GENERIC";
			break;
		
		case 5:
			return "EXIT_TO_GENERIC";
			break;
	}
	return "badstring";
}

char* func_782(int iParam0)//Position - 0x6E5FF
{
	switch (iParam0)
	{
		case 0:
			return func_198(2);
			break;
		
		case 1:
			return func_198(2);
			break;
		
		case 2:
			return func_198(2);
			break;
		
		case 3:
			return func_198(2);
			break;
		
		case 4:
			return func_198(2);
			break;
		
		case 5:
			return func_198(2);
			break;
	}
	return "badstring";
}


void func_784()//Position - 0x6E6B8
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	int iVar9;
	bool bVar10;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!iLocal_1526[iVar0])
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1369[iVar0], 0))
			{
				switch (iVar0)
				{
					case 0:
						iVar2 = 800;
						iVar1 = 3;
						break;
					
					case 1:
						iVar1 = 1;
						iVar2 = 200;
						break;
					
					case 2:
					case 3:
						iVar2 = -1;
						fVar3 = -1f;
						break;
					
					case 4:
						iVar1 = 1;
						iVar2 = 0;
						break;
					
					case 5:
						iVar1 = 0;
						iVar2 = -1;
						fVar3 = 35f;
						break;
					
					case 6:
						iVar2 = -1;
						fVar3 = -1f;
						break;
				}
				iVar4 = 0;
				if (iVar2 >= 0)
				{
					if (iLocal_1203 == iVar1)
					{
						if (MISC::GET_GAME_TIMER() >= (iLocal_1775 + iVar2))
						{
							iVar4 = 1;
						}
					}
				}
				else if (fVar3 >= 0f)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_1369[iVar0], fVar3, fVar3, fVar3, 0, 0, 0))
					{
						iVar4 = 1;
					}
				}
				else
				{
					iLocal_1526[iVar0] = 1;
				}
				iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uLocal_1369[iVar0], -1);
				if (iVar4 && iLocal_1524)
				{
					if (iVar0 == 4)
					{
						AUDIO::SET_AUDIO_VEHICLE_PRIORITY(uLocal_1369[iVar0], 2);
						iLocal_1701 = 0;
					}
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_1369[iVar0]))
					{
						VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(uLocal_1369[iVar0]);
					}
					else if (!PED::IS_PED_INJURED(iVar5))
					{
						if (iVar0 == 5)
						{
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_1843);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_1843);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, uLocal_1369[iVar0], 462.887f, -678.7796f, 26.42194f, 5f, 0, ENTITY::GET_ENTITY_MODEL(uLocal_1369[iVar0]), 786603, 2f, 100000f);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, uLocal_1369[iVar0], 472.4382f, -680.0406f, 25.72182f, 5f, 0, ENTITY::GET_ENTITY_MODEL(uLocal_1369[iVar0]), 786603, 2f, 100000f);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, uLocal_1369[iVar0], 500.4013f, -772.943f, 23.84175f, 5f, 0, ENTITY::GET_ENTITY_MODEL(uLocal_1369[iVar0]), 786603, -1f, -1f);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_1843);
							TASK::TASK_PERFORM_SEQUENCE(iVar5, uLocal_1843);
						}
					}
					iLocal_1526[iVar0] = 1;
				}
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_1369[iVar0]))
				{
					if (PED::IS_PED_INJURED(iVar5))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uLocal_1369[iVar0]);
						AUDIO::SET_AUDIO_VEHICLE_PRIORITY(uLocal_1369[iVar0], 0);
					}
				}
			}
		}
		else if (!iLocal_1701)
		{
			if (iVar0 == 4)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1369[iVar0], 0))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_1369[iVar0]))
					{
						AUDIO::SET_AUDIO_VEHICLE_PRIORITY(uLocal_1369[iVar0], 0);
						iLocal_1701 = 1;
					}
				}
			}
		}
		iVar0++;
	}
	if (((!PED::IS_PED_INJURED(iLocal_1355[0]) && !PED::IS_PED_INJURED(iLocal_1352)) && !PED::IS_PED_INJURED(Local_1158)) && VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1369[0], 0))
	{
		switch (iLocal_1333)
		{
			case 0:
				Var6 = { ENTITY::GET_ENTITY_COORDS(Local_1158, 1) };
				if (Var6.f_1 > -538.4f)
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_1355[0], Local_1158, -1, 2048, 2);
					iLocal_1795 = MISC::GET_GAME_TIMER();
					iLocal_1333 = 1;
				}
				break;
			
			case 1:
				if (MISC::GET_GAME_TIMER() >= iLocal_1795 + 10)
				{
					TASK::TASK_LEAVE_VEHICLE(iLocal_1355[0], uLocal_1369[0], 256);
					iLocal_1333 = 2;
				}
				break;
			
			case 2:
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1355[0], 451360105) == 7)
				{
					iLocal_1795 = MISC::GET_GAME_TIMER();
					TASK::TASK_ACHIEVE_HEADING(iLocal_1355[0], -3.26f, 0);
					iLocal_1333 = 3;
				}
				break;
			
			case 3:
				if (GlobalFunc_5913(iLocal_1355[0], -3.26f, 20f))
				{
					iLocal_1333 = 4;
				}
				break;
			
			case 4:
				TASK::TASK_PLAY_ANIM(iLocal_1355[0], func_198(2), "REACT_SMALL_VARIATIONS_H", 8f, -8f, -1, 1, 0, 0, 0, 0);
				iLocal_1795 = MISC::GET_GAME_TIMER();
				iLocal_1333 = 5;
				break;
			
			case 5:
				break;
		}
		if (!iLocal_1543)
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_1355[0], iLocal_1352, 3f, 3f, 3f, 0, 0, 0))
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_1355[0], iLocal_1352, -1, 2048, 2);
				iLocal_1543 = 1;
			}
		}
		if (!iLocal_1542)
		{
			if (iLocal_1333 >= 2)
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1355[0], 8f, 8f, 2f, 0, 1, 0))
				{
					if (!GlobalFunc_111())
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_1355[0], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
						GlobalFunc_5122(iLocal_1355[0], "GENERIC_INSULT_HIGH", 9);
						iLocal_1542 = 1;
					}
				}
			}
		}
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_1170.f_9))
		{
			if (Local_1170.f_2 == 13)
			{
				switch (iLocal_1797)
				{
					case 0:
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1170.f_9) >= 0.45f)
						{
							ENTITY::APPLY_FORCE_TO_ENTITY(uLocal_1369[0], 1, 0f, 0f, -0.1f, 0f, 3f, 0f, 0, 1, 1, 1, 0, 1);
							iLocal_1797++;
						}
						break;
					
					case 1:
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1170.f_9) >= 0.595f)
						{
							ENTITY::APPLY_FORCE_TO_ENTITY(uLocal_1369[0], 1, 0f, 0f, -0.1f, 0f, 3f, 0f, 0, 1, 1, 1, 0, 1);
							iLocal_1797++;
						}
						break;
					}
				}
			}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_1355)
	{
		if (!PED::IS_PED_INJURED(iLocal_1355[iVar0]))
		{
			if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_1355[iVar0], 1805844857) == 7 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_1355[iVar0], -828834893) == 7) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_1355[iVar0], 242628503) == 7)
			{
				if (func_775(iLocal_1355[iVar0], 1))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_1355[iVar0], 0))
					{
						iVar9 = PED::GET_VEHICLE_PED_IS_IN(iLocal_1355[iVar0], 0);
						if (!ENTITY::IS_ENTITY_DEAD(iVar9))
						{
							AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iVar9, 0);
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iVar9))
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iVar9);
							}
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iVar9, 0);
						}
					}
					bVar10 = true;
					if (ENTITY::DOES_ENTITY_EXIST(iVar9))
					{
						if (VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar9)))
						{
							bVar10 = false;
						}
					}
					if (bVar10)
					{
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_1843);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_1843);
						if (!ENTITY::IS_ENTITY_DEAD(iVar9))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
						}
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_1843);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_1355[iVar0], uLocal_1843);
						if (iVar0 == 0)
						{
							iLocal_1542 = 1;
							iLocal_1333 = 7;
						}
					}
				}
			}
		}
		iVar0++;
	}
}


void func_786()//Position - 0x6ED18
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	struct<3> Var5;
	struct<3> Var8;
	struct<3> Var11;
	int iVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	struct<3> Var20;
	int iVar23;
	
	if (!PED::IS_PED_INJURED(Local_1170))
	{
		if (iLocal_1525)
		{
			switch (Local_1170.f_1)
			{
				case 0:
					if (iLocal_1329 == 0 || iLocal_1329 == 3)
					{
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1170) && !PED::IS_PED_INJURED(Local_1158))
						{
							fVar2 = 6f;
							fVar3 = 14f;
							bVar4 = true;
							if (iLocal_1183 == 4)
							{
								fVar2 = 20f;
								fVar3 = 50f;
							}
							Var5 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_1352, ENTITY::GET_ENTITY_COORDS(Local_1158, 1)) };
							if (ENTITY::IS_ENTITY_AT_ENTITY(Local_1170, Local_1158, fVar2, fVar2, 10f, 0, 0, 0) || Var5.f_1 < 0f)
							{
								fVar0 = 2.4f;
								fVar1 = 1f;
								bVar4 = false;
							}
							else if (ENTITY::IS_ENTITY_AT_ENTITY(Local_1170, Local_1158, fVar3, fVar3, 10f, 0, 0, 0))
							{
								fVar0 = 2.8f;
								fVar1 = 1.02f;
							}
							else if (ENTITY::IS_ENTITY_AT_ENTITY(Local_1170, PLAYER::PLAYER_PED_ID(), 10f, 10f, 20f, 0, 0, 0))
							{
								fVar0 = 3f;
								fVar1 = 1.15f;
							}
							else
							{
								fVar0 = 3f;
								fVar1 = 1.15f;
							}
							if (bVar4)
							{
								if (iLocal_1183 == 1)
								{
									fVar0 = 2.8f;
									fVar1 = 1f;
								}
								if (iLocal_1183 == 4)
								{
									fVar0 = 3f;
									fVar1 = 1.15f;
								}
							}
							if (iLocal_1331 == 1)
							{
								Var8 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
								if (Var8.f_1 >= -516.9f)
								{
									fVar0 = 3f;
									fVar1 = 1.15f;
								}
							}
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_1170, fVar0, 0);
							PED::SET_PED_MOVE_RATE_OVERRIDE(Local_1170, fVar1);
							if (iLocal_1183 == 3)
							{
								Var11 = { ENTITY::GET_ENTITY_COORDS(iLocal_1352, 1) };
								if (Var11.f_1 >= -524f)
								{
									PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_1170, 2f);
								}
								else
								{
									PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_1170, 3f);
								}
							}
							if (bLocal_1630)
							{
								if (MISC::GET_GAME_TIMER() <= iLocal_1767 + 2000)
								{
									PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_1170, 3f);
								}
							}
						}
						iVar14 = func_802();
						if (ENTITY::IS_ENTITY_AT_COORD(Local_1170, func_766(iVar14), func_801(iVar14), 0, 1, 1) || (func_800(Local_1170, iVar14) && iVar14 <= 16))
						{
							bVar15 = true;
							if (iVar14 == 13)
							{
								if (!func_799())
								{
									bVar15 = false;
								}
								else
								{
									ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_1352, uLocal_1369[0], 0);
								}
							}
							if (bVar15)
							{
								func_795(&Local_1170, iVar14);
							}
							else
							{
								iLocal_1183++;
							}
						}
					}
					break;
				
				case 1:
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_1170.f_9))
					{
						if (Local_1170.f_2 == 11 || Local_1170.f_2 == 12)
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1352, 25f, 25f, 25f, 0, 0, 0))
							{
								PED::SET_SYNCHRONIZED_SCENE_RATE(Local_1170.f_9, 1.25f);
							}
							else
							{
								PED::SET_SYNCHRONIZED_SCENE_RATE(Local_1170.f_9, 1f);
							}
						}
					}
					bVar16 = true;
					if (((iLocal_1183 == 0 || iLocal_1183 == 4) || iLocal_1183 == 5) || iLocal_1183 == 3)
					{
						bVar16 = false;
					}
					func_789(&Local_1170, 1, 1, -1, 1, bVar16);
					break;
			}
			switch (iLocal_1329)
			{
				case 0:
					if (Local_1170.f_1 == 0)
					{
						bVar17 = false;
						bVar18 = false;
						switch (iLocal_1183)
						{
							case 4:
								if (func_788(1))
								{
									if (ENTITY::IS_ENTITY_AT_COORD(Local_1170, 539.66f, -501.66f, 25.13f, 13f, 13f, 13f, 0, 0, 0))
									{
										if (Local_1184 == 0 || Local_1184 == 3)
										{
											bVar17 = true;
											bVar19 = true;
										}
									}
								}
								break;
							
							case 3:
								if (ENTITY::IS_ENTITY_AT_COORD(Local_1170, 494.48f, -516.88f, 23.75f, 4f, 4f, 4f, 0, 1, 0))
								{
									bVar17 = true;
									bVar19 = false;
									bVar18 = true;
								}
								break;
							
							case 1:
								if (func_787(1))
								{
									if (Local_1184 == 0 || Local_1184 == 3)
									{
										bVar17 = true;
										bVar19 = true;
									}
								}
								break;
						}
						if (bVar17)
						{
							if (bVar19)
							{
								TASK::TASK_PLAY_ANIM(Local_1170, func_198(0), "FRA0_IG_12_CHOP_FAST_TURN_A", 8f, -8f, -1, 2, 0, 0, 0, 0);
								iLocal_1329 = 1;
							}
							else
							{
								if (!bVar18)
								{
									TASK::TASK_PLAY_ANIM(Local_1170, func_198(0), "FRA0_IG_12_CHOP_WAITING_B", 8f, -8f, -1, 1, 0, 0, 0, 0);
								}
								else
								{
									TASK::TASK_PLAY_ANIM(Local_1170, func_198(0), "CHOP_BARK_AT_CARRIAGE", 8f, -8f, -1, 1, 0, 0, 0, 0);
								}
								iLocal_1329 = 2;
							}
						}
					}
					break;
				
				case 1:
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1170, func_198(0), "FRA0_IG_12_CHOP_FAST_TURN_A", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_1170, func_198(0), "FRA0_IG_12_CHOP_FAST_TURN_A") >= 0.98f)
						{
							TASK::TASK_PLAY_ANIM(Local_1170, func_198(0), "FRA0_IG_12_CHOP_WAITING_A", 8f, -8f, -1, 1, 0, 0, 0, 0);
							iLocal_1329 = 2;
						}
					}
					break;
				
				case 2:
					if (iLocal_1183 == 3)
					{
						PED::SET_PED_RESET_FLAG(iLocal_1352, 71, 1);
						if (bLocal_1548)
						{
							func_789(&Local_1170, 1, 0, -1, 1, 0);
						}
					}
					else if (iLocal_1183 == 4)
					{
						if (!func_788(0))
						{
							if (func_701(0))
							{
								iLocal_1329 = 3;
								func_789(&Local_1170, 1, 0, 146, 0, 0);
							}
						}
					}
					else if (iLocal_1183 == 1)
					{
						if (!func_787(0))
						{
							if (func_701(0))
							{
								iLocal_1329 = 3;
								func_789(&Local_1170, 1, 0, -1, 0, 1);
							}
						}
					}
					break;
			}
		}
		else
		{
			Var20 = { ENTITY::GET_ENTITY_COORDS(iLocal_1352, 1) };
			if (Var20.f_1 < -682.7f)
			{
				iVar23 = 7;
			}
			else
			{
				iVar23 = 11;
			}
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_1170, "hood7", iVar23, 36, -1);
			iLocal_1525 = 1;
		}
	}
}

int func_787(int iParam0)//Position - 0x6F27A
{
	if (((iLocal_1182 >= 2 || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 482.13f, -575.22f, 26.46f, 494.61f, -576.59f, 31.46f, 24f, 0, 0, 0)) || (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 488.4743f, -576.7356f, 28.29393f, 18.5f, 18.5f, 18.5f, 0, 0, 0) && iParam0)) || Local_1184 == 2)
	{
		return 0;
	}
	return 1;
}

int func_788(int iParam0)//Position - 0x6F304
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	if (!PED::IS_PED_INJURED(Local_1158))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(Local_1158, 1) };
	}
	if (((Var0.x >= 525f && Var3.x >= 552f) || Local_1184 == 2) || (Var0.x >= -517f && iParam0))
	{
		return 0;
	}
	return 1;
}

void func_789(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x6F36D
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		if (!iParam0->f_11)
		{
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iParam0->f_9))
			{
				if (bParam5)
				{
					iVar0 = 34;
				}
				else
				{
					iVar0 = 32;
				}
				TASK::TASK_CLEAR_LOOK_AT(*iParam0);
				if (!bParam1)
				{
					if (bParam4)
					{
						iLocal_1182++;
					}
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(*iParam0, func_794(), func_793(), 32, -1);
					iLocal_1773 = MISC::GET_GAME_TIMER();
				}
				else
				{
					if (bParam4)
					{
						iLocal_1183++;
						iLocal_1329 = 0;
					}
					if (iParam3 < 0)
					{
						iVar1 = func_792();
					}
					else
					{
						iVar1 = iParam3;
					}
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(*iParam0, "hood7", iVar1, iVar0 | 512, -1);
				}
				if (bParam2)
				{
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(*iParam0, 3f);
				}
				iParam0->f_9 = -1;
				iParam0->f_10 = MISC::GET_GAME_TIMER();
				iParam0->f_2 = -1;
				iParam0->f_1 = 0;
			}
			else
			{
				bVar2 = true;
				if (iParam0->f_2 != 7)
				{
					GlobalFunc_5915(&(iParam0->f_3), func_791(iParam0->f_2), 0.85f);
					GlobalFunc_5915(&(iParam0->f_6), 0f, 0f, func_790(iParam0->f_2), 7.5f);
					PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iParam0->f_9, iParam0->f_3, iParam0->f_6, 2);
				}
				else if (!iLocal_1677)
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(*iParam0))
					{
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_9, 0.98f);
						iLocal_1677 = 1;
					}
				}
				fVar3 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_9);
				if (fVar3 >= 0.98f)
				{
					if (iParam0->f_2 == 5)
					{
						func_795(iParam0, 6);
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*iParam0);
						iLocal_1774 = MISC::GET_GAME_TIMER();
						iParam0->f_11 = 1;
					}
					else if (iParam0->f_2 == 1)
					{
						if (!iLocal_1544)
						{
							if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), *iParam0, 20f, 20f, 20f, 0, 0, 0))
							{
								iLocal_1774 = MISC::GET_GAME_TIMER();
								iParam0->f_11 = 1;
							}
							else
							{
								iParam0->f_11 = 0;
							}
							TASK::CLEAR_PED_TASKS(*iParam0);
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*iParam0);
							iLocal_1544 = 1;
						}
					}
					else
					{
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iParam0->f_9, 0);
					}
				}
				else if (fVar3 >= 0.5f)
				{
					if (iParam0->f_2 == 1 || iParam0->f_2 == 11)
					{
						bVar2 = false;
					}
				}
				if (bVar2)
				{
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(*iParam0, 3f);
				}
			}
		}
		else if (!PED::IS_PED_INJURED(iLocal_1352))
		{
			if (iParam0->f_2 == 6)
			{
				if (((((((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), *iParam0, 16f, 16f, 16f, 0, 0, 0) || (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), *iParam0, 20f, 20f, 20f, 0, 0, 0) && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 537.228f, -540.125f, 23.679f, 557.91f, -542.702f, 29f, 63f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_ENTITY(iLocal_1352, *iParam0, 18f, 18f, 18f, 0, 0, 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, PLAYER::PLAYER_PED_ID(), 1)) || FIRE::IS_ENTITY_ON_FIRE(*iParam0)) || MISC::GET_GAME_TIMER() >= iLocal_1774 + 12000) || iLocal_1183 >= 6)
				{
					func_795(iParam0, 7);
					iParam0->f_11 = 0;
				}
			}
			else if (iParam0->f_2 == 1)
			{
				if (((((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), *iParam0, 25f, 25f, 25f, 0, 0, 0) || ENTITY::IS_ENTITY_AT_ENTITY(iLocal_1352, *iParam0, 11f, 11f, 11f, 0, 0, 0)) || PED::IS_TRACKED_PED_VISIBLE(Local_1158)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, PLAYER::PLAYER_PED_ID(), 1)) || FIRE::IS_ENTITY_ON_FIRE(*iParam0)) || MISC::GET_GAME_TIMER() >= iLocal_1774 + 11000)
				{
					iParam0->f_11 = 0;
				}
			}
		}
	}
}

float func_790(int iParam0)//Position - 0x6F70C
{
	switch (iParam0)
	{
		case 0:
			return -95.66f;
			break;
		
		case 1:
			return -8f;
			break;
		
		case 2:
			return -3f;
			break;
		
		case 3:
			return -3.99f;
			break;
		
		case 4:
			return -96.59f;
			break;
		
		case 5:
			return -97.53f;
			break;
		
		case 8:
			return 79.23f;
			break;
		
		case 9:
			return -6.37f;
			break;
		
		case 11:
			return -110f;
			break;
		
		case 12:
			return -30f;
			break;
		
		case 13:
			return -4f;
			break;
		
		case 14:
			return -97.33f;
			break;
		
		case 15:
			return -96.5f;
			break;
	}
	return 0f;
}

Vector3 func_791(int iParam0)//Position - 0x6F7F9
{
	switch (iParam0)
	{
		case 0:
			return 475.45f, -585.3f, 28.56f;
			break;
		
		case 1:
			return 486.8f, -569.62f, 29.13f;
			break;
		
		case 2:
			return 492.63f, -544.44f, 24.75f;
			break;
		
		case 3:
			return 493.74f, -524.13f, 24.75f;
			break;
		
		case 4:
			return 530.87f, -502.05f, 24.83f;
			break;
		
		case 5:
			return 555.47f, -504.14f, 24.8f;
			break;
		
		case 8:
			return 549.06f, -565.13f, 24.75f;
			break;
		
		case 10:
			return 493.38f, -519.92f, 25.25f;
			break;
		
		case 11:
			return 478.3f, -582f, 27.95f;
			break;
		
		case 12:
			return 486.53f, -570.45f, 28.7f;
			break;
		
		case 13:
			return 492.53f, -544.55f, 24.18f;
			break;
		
		case 14:
			return 532f, -501.1f, 24.25f;
			break;
		
		case 15:
			return 556.69f, -503.84f, 24.19f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_792()//Position - 0x6F96A
{
	switch (iLocal_1183)
	{
		case 1:
			return 64;
			break;
		
		case 2:
			return 89;
			break;
		
		case 3:
			return 106;
			break;
		
		case 4:
			return 109;
			break;
		
		case 5:
			return 158;
			break;
		
		case 6:
			return 185;
			break;
	}
	return 0;
}

int func_793()//Position - 0x6F9CF
{
	switch (iLocal_1182)
	{
		case 0:
			return 9;
			break;
		
		case 1:
			return 6;
			break;
		
		case 2:
			return 15;
			break;
		
		case 3:
			return 22;
			break;
		
		case 4:
			return 10;
			break;
		
		case 5:
			return 35;
			break;
		
		case 6:
			return 44;
			break;
	}
	return 0;
}

char* func_794()//Position - 0x6FA41
{
	switch (iLocal_1182)
	{
		case 0:
			return "hood1";
			break;
		
		case 1:
		case 2:
		case 3:
			return "hood2";
			break;
		
		case 4:
		case 5:
		case 6:
			return "hood3";
			break;
	}
	return "invalid";
}

void func_795(int iParam0, int iParam1)//Position - 0x6FAA0
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		iParam0->f_3 = { ENTITY::GET_ENTITY_COORDS(*iParam0, 1) };
		iParam0->f_6 = { ENTITY::GET_ENTITY_ROTATION(*iParam0, 2) };
		func_797(&(iParam0->f_6), 0f, 0f, func_790(iParam1));
		iParam0->f_9 = PED::CREATE_SYNCHRONIZED_SCENE(iParam0->f_3, iParam0->f_6, 2);
		if (iParam1 == 6)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 0;
		}
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iParam0->f_9, iVar0);
		PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_9, 0f);
		if (*iParam0 == iLocal_1352)
		{
			iVar1 = 7;
		}
		else if ((iParam1 == 5 || iParam1 == 6) || iParam1 == 7)
		{
			iVar1 = 7;
		}
		else
		{
			iVar1 = 6;
		}
		TASK::TASK_SYNCHRONIZED_SCENE(*iParam0, iParam0->f_9, func_198(2), func_796(iParam1), 8f, -8f, iVar1, 0, 1148846080, 0);
		if ((iParam1 == 8 || iParam1 == 11) || iParam1 == 4)
		{
			RECORDING::_0x293220DA1B46CEBC(3f, 5f, 3);
		}
	}
	iParam0->f_2 = iParam1;
	iParam0->f_1 = 1;
}

char* func_796(int iParam0)//Position - 0x6FBA1
{
	switch (iParam0)
	{
		case 0:
			return "ballasog_fenceclimb";
			break;
		
		case 1:
			return "ballasog_containerrun";
			break;
		
		case 2:
			return "ballasog_carbonnetslide";
			break;
		
		case 3:
			return "ballasog_fenceclimb_ig4";
			break;
		
		case 10:
			return "franklin_wallcrash";
			break;
		
		case 4:
			return "ballasog_hoptrainbreak_ig5";
			break;
		
		case 5:
			return "ballasog_rollthroughtraincar_ig6_in";
			break;
		
		case 6:
			return "ballasog_rollthroughtraincar_ig6_loop";
			break;
		
		case 7:
			return "ballasog_rollthroughtraincar_ig6_out";
			break;
		
		case 8:
			return "ballasog_jumpontrain_ig7";
			break;
		
		case 11:
			return "FRA_0_IG_8_P1_CHOP_JUMPS_UNDER_FENCE";
			break;
		
		case 12:
			return "FRA_0_CHOP_JUMPS_DOWN";
			break;
		
		case 13:
			return "FRA_0_IG_9_CHOP_JUMP_OVER_CAR_HOOD";
			break;
		
		case 14:
			return "FRA_0_IG_10_CHOP_JUMPS_OVER_FLATBED";
			break;
		
		case 15:
			return "FRA_0_IG_11_CHOP_JUMPS_THROUGH_BOXCAR";
			break;
	}
	return "invalid";
}

void func_797(var uParam0, struct<3> Param1)//Position - 0x6FCB3
{
	func_798(uParam0, Param1.x);
	func_798(&(uParam0->f_1), Param1.f_1);
	func_798(&(uParam0->f_2), Param1.f_2);
}

void func_798(var uParam0, float fParam1)//Position - 0x6FCDB
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (*uParam0 > 0f)
	{
		fVar0 = *uParam0;
		fVar1 = (*uParam0 - 360f);
	}
	else if (*uParam0 < 0f)
	{
		fVar0 = (*uParam0 + 360f);
		fVar1 = *uParam0;
	}
	fVar2 = (fVar0 - fParam1);
	if (fVar2 < 0f)
	{
		fVar2 = (fVar2 * -1f);
	}
	fVar3 = (fVar1 - fParam1);
	if (fVar3 < 0f)
	{
		fVar3 = (fVar3 * -1f);
	}
	if (fVar2 < fVar3)
	{
		*uParam0 = fVar0;
	}
	else
	{
		*uParam0 = fVar1;
	}
}

int func_799()//Position - 0x6FD53
{
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_1369[0]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1369[0], 0))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_1369[0], 495.362f, -537.695f, 20.751f, 485.086f, -537.464f, 26.751f, 3f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_800(int iParam0, int iParam1)//Position - 0x6FDAB
{
	struct<3> Var0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
		switch (iParam1)
		{
			case 0:
				if (Var0.x >= 475.59f)
				{
					return 1;
				}
				break;
			
			case 1:
				if (Var0.f_1 >= -569.6f)
				{
					return 1;
				}
				break;
			
			case 2:
				if (Var0.f_1 >= -545.27f)
				{
					return 1;
				}
				break;
			
			case 3:
				if (Var0.f_1 >= -523.79f)
				{
					return 1;
				}
				break;
			
			case 4:
				if (Var0.x >= 531.66f)
				{
					return 1;
				}
				break;
			
			case 5:
				if (Var0.x >= 555.47f)
				{
					return 1;
				}
				break;
			
			case 8:
				if (Var0.x <= 552.98f)
				{
					return 1;
				}
				break;
			
			case 9:
				return 0;
				break;
			
			case 11:
				if (Var0.x >= 478.3f)
				{
					return 1;
				}
				break;
			
			case 12:
				if (Var0.f_1 >= -570.45f)
				{
					return 1;
				}
				break;
			
			case 13:
				if (Var0.f_1 >= -544.55f)
				{
					return 1;
				}
				break;
			
			case 14:
				if (Var0.x >= 532f)
				{
					return 1;
				}
				break;
			
			case 15:
				if (Var0.x >= 556.72f)
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

Vector3 func_801(int iParam0)//Position - 0x6FF07
{
	switch (iParam0)
	{
		case 11:
			break;
	}
	return 0.5f, 0.5f, 2.5f;
}

int func_802()//Position - 0x6FF2E
{
	switch (iLocal_1183)
	{
		case 0:
			return 11;
			break;
		
		case 1:
			return 12;
			break;
		
		case 2:
			return 13;
			break;
		
		case 3:
			return 14;
			break;
		
		case 4:
			return 14;
			break;
		
		case 5:
			return 15;
			break;
	}
	return 16;
}

void func_803()//Position - 0x6FF94
{
	int iVar0;
	bool bVar1;
	float fVar2;
	
	if (!PED::IS_PED_INJURED(Local_1158))
	{
		if (iLocal_1524)
		{
			switch (Local_1158.f_1)
			{
				case 0:
					func_805();
					iVar0 = func_804();
					if (ENTITY::IS_ENTITY_AT_COORD(Local_1158, func_766(iVar0), func_801(iVar0), 0, 1, 1) || ((func_800(Local_1158, iVar0) && iVar0 < 16) && ENTITY::IS_ENTITY_AT_COORD(Local_1158, func_766(iVar0), 10f, 10f, 10f, 0, 0, 1)))
					{
						bVar1 = true;
						if (iVar0 == 2)
						{
							if (!func_799())
							{
								bVar1 = false;
							}
							else
							{
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_1158, uLocal_1369[0], 0);
							}
						}
						if (bVar1)
						{
							func_795(&Local_1158, iVar0);
						}
						else
						{
							iLocal_1182++;
						}
					}
					break;
				
				case 1:
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_1158.f_9))
					{
						fVar2 = 1.04f;
						if (!PED::IS_TRACKED_PED_VISIBLE(Local_1158))
						{
							if (Local_1158.f_2 == 1)
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1158.f_9) >= 0.392f)
								{
									fVar2 = 3.3f;
								}
							}
							else if (Local_1158.f_2 < 5)
							{
								fVar2 = 1.21f;
							}
						}
						else if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1158, 50f, 50f, 50f, 0, 0, 0))
						{
							fVar2 = 1f;
						}
						else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1158, 7f, 7f, 7f, 0, 0, 0))
						{
							fVar2 = 1.12f;
						}
						PED::SET_SYNCHRONIZED_SCENE_RATE(Local_1158.f_9, fVar2);
					}
					func_789(&Local_1158, 0, 1, -1, 1, 1);
					break;
			}
		}
		else
		{
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_1158, "hood1", func_793(), 36, -1);
			iLocal_1773 = MISC::GET_GAME_TIMER();
			iLocal_1775 = MISC::GET_GAME_TIMER();
			iLocal_1524 = 1;
		}
	}
}

int func_804()//Position - 0x7013F
{
	switch (iLocal_1182)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
	}
	return 16;
}

void func_805()//Position - 0x7019F
{
	float fVar0;
	struct<3> Var1;
	
	if (func_807())
	{
		iLocal_1203++;
		iLocal_1775 = MISC::GET_GAME_TIMER();
	}
	iLocal_1845 = TASK::GET_SCRIPT_TASK_STATUS(Local_1158, -1689270312);
	if (iLocal_1845 == 1)
	{
		switch (iLocal_1203)
		{
			case 1:
			case 3:
			case 5:
			case 8:
				fVar0 = 3f;
				break;
			
			case 0:
			case 2:
			case 4:
			case 6:
				fVar0 = func_806(40f, 2f, 3f);
				break;
			
			case 7:
				Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_1158, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) };
				if (Var1.f_1 < -4f)
				{
					fVar0 = func_806(35f, 2f, 3f);
				}
				else
				{
					fVar0 = 3f;
				}
				break;
		}
		if (iLocal_1106 == 1)
		{
			fVar0 = 2f;
		}
		if (iLocal_1106 != 1)
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1158))
			{
				if (fVar0 >= 2.5f)
				{
					PED::SET_PED_MOVE_RATE_OVERRIDE(Local_1158, 1.15f);
				}
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_1158, fVar0, 0);
			}
		}
		else
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_1158, 2f);
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_1158, 2f, 0);
			PED::SET_PED_MOVE_RATE_OVERRIDE(Local_1158, 0.98f);
		}
	}
}

float func_806(float fParam0, float fParam1, float fParam2)//Position - 0x702BA
{
	float fVar0;
	
	fVar0 = GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1158, 1);
	if (fVar0 < fParam0)
	{
		return fParam2;
	}
	else
	{
		return fParam1;
	}
	return 3f;
}

int func_807()//Position - 0x702E6
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(Local_1158, 1) };
	switch (iLocal_1203)
	{
		case 0:
			if (Var0.f_1 >= -641.49f)
			{
				return 1;
			}
			break;
		
		case 1:
			if (Var0.f_1 >= -635.98f)
			{
				return 1;
			}
			break;
		
		case 2:
			if (Var0.f_1 >= -552.7f)
			{
				if (!Local_1158.f_11)
				{
					return 1;
				}
			}
			break;
		
		case 3:
			if (Var0.f_1 >= -532.48f)
			{
				return 1;
			}
			break;
		
		case 4:
			if (Var0.x >= 512.69f)
			{
				return 1;
			}
			break;
		
		case 5:
			if (Var0.x >= 535.19f)
			{
				return 1;
			}
			break;
		
		case 6:
			if (Var0.f_1 <= -509.27f)
			{
				return 1;
			}
			break;
		
		case 7:
			if (Var0.f_1 <= -547.42f)
			{
				return 1;
			}
			break;
		
		case 8:
			return 0;
			break;
	}
	return 0;
}

void func_808()//Position - 0x703E5
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		switch (Local_1296[iVar0 /*4*/])
		{
			case 0:
				if (MISC::GET_GAME_TIMER() >= Local_1296[iVar0 /*4*/].f_2)
				{
					switch (iVar0)
					{
						case 0:
							Var1 = { 505.1914f, -498.6418f, 23.79694f };
							break;
						
						case 1:
							Var1 = { 505.6685f, -499.3541f, 23.86925f };
							break;
						
						case 2:
							Var1 = { 508.4406f, -499.5398f, 23.84134f };
							break;
						
						case 3:
							Var1 = { 508.1477f, -508.4314f, 23.88753f };
							break;
						
						case 4:
							Var1 = { 507.5164f, -509.3144f, 23.89202f };
							break;
						
						case 5:
							Var1 = { 508.4763f, -509.699f, 23.83075f };
							break;
						
						case 6:
							Var1 = { 492.7829f, -506.4185f, 23.79152f };
							break;
					}
					PED::SET_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND(1);
					PED::GET_CLOSEST_PED(Var1, 1f, 1, 0, &(Local_1296[iVar0 /*4*/].f_1), 0, 0, -1);
					if (!PED::IS_PED_INJURED(Local_1296[iVar0 /*4*/].f_1))
					{
						Local_1296[iVar0 /*4*/] = 1;
						Local_1296[iVar0 /*4*/].f_2 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 2000));
					}
					else
					{
						Local_1296[iVar0 /*4*/].f_2 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(500, 1500));
					}
				}
				break;
			
			case 1:
				if (MISC::GET_GAME_TIMER() >= Local_1296[iVar0 /*4*/].f_2)
				{
					if ((!PED::IS_PED_INJURED(Local_1296[iVar0 /*4*/].f_1) && !PED::IS_PED_INJURED(Local_1158)) && !PED::IS_PED_INJURED(iLocal_1352))
					{
						fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1296[iVar0 /*4*/].f_1, 1), 1);
						fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_1158, 1), ENTITY::GET_ENTITY_COORDS(Local_1296[iVar0 /*4*/].f_1, 1), 1);
						fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_1352, 1), ENTITY::GET_ENTITY_COORDS(Local_1296[iVar0 /*4*/].f_1, 1), 1);
						if (fVar5 < fVar7)
						{
							if (fVar5 < fVar6)
							{
								iVar4 = PLAYER::PLAYER_PED_ID();
							}
							else
							{
								iVar4 = Local_1158;
							}
						}
						else if (fVar6 < fVar7)
						{
							iVar4 = Local_1158;
						}
						else
						{
							iVar4 = iLocal_1352;
						}
						if (!PED::IS_PED_HEADTRACKING_ENTITY(Local_1296[iVar0 /*4*/].f_1, iVar4))
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_1296[iVar0 /*4*/].f_1, iVar4, -1, 2048, 4);
						}
						if (!Local_1296[iVar0 /*4*/].f_3)
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(Local_1296[iVar0 /*4*/].f_1, iLocal_1352, 6f, 6f, 6f, 0, 1, 0))
							{
								if (!GlobalFunc_111())
								{
									GlobalFunc_5122(Local_1296[iVar0 /*4*/].f_1, "GENERIC_SHOCKED_MED", 9);
									Local_1296[iVar0 /*4*/].f_3 = 1;
								}
							}
						}
						Local_1296[iVar0 /*4*/].f_2 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(500, 2000));
					}
				}
				break;
		}
		iVar0++;
	}
}


void func_810()//Position - 0x706C0
{
	float fVar0;
	struct<3> Var1;
	bool bVar4;
	int iVar5;
	float fVar6;
	char* sVar7;
	float fVar8;
	char* sVar9;
	struct<3> Var10;
	
	if (!iLocal_1471)
	{
		PAD::DISABLE_CONTROL_ACTION(2, 18, 1);
		func_882();
		if (!iLocal_1674)
		{
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				iLocal_1674 = func_49(10);
			}
		}
		else if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			func_42(10);
			iLocal_1674 = 0;
		}
		if (!iLocal_1592)
		{
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_79(10), 80f, 80f, 80f, 0, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1353))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_1353);
				}
				func_197(5);
				iLocal_1592 = 1;
			}
		}
		if (!iLocal_1625)
		{
			if (!PED::IS_PED_INJURED(iLocal_1352) && !PED::IS_PED_INJURED(iLocal_1351))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_1351, iLocal_1352, 14f, 14f, 14f, 0, 0, 0))
				{
					if (!PED::IS_TRACKED_PED_VISIBLE(iLocal_1352))
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_1813)
						{
							AUDIO::STOP_PED_SPEAKING(iLocal_1352, 0);
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
							{
								AUDIO::PLAY_ANIMAL_VOCALIZATION(iLocal_1352, 3, "BARK");
							}
							else
							{
								AUDIO::PLAY_ANIMAL_VOCALIZATION(iLocal_1352, 3, "BARK_SEQ");
							}
							AUDIO::STOP_PED_SPEAKING(iLocal_1352, 1);
							iLocal_1813 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(200, 1000));
						}
					}
					else
					{
						AUDIO::STOP_PED_SPEAKING(iLocal_1352, 0);
					}
				}
			}
		}
		switch (iLocal_1339)
		{
			case 0:
				if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), 394.5399f, -869.1152f, 20.28647f, 652.6829f, -666.7411f, 54.06824f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), 277.2883f, -831.6821f, 20.2434f, 390.6949f, -646.0926f, 54.50041f, 0, 1, 0))
				{
					func_684(11);
					func_684(6);
					func_680(11);
					func_680(1);
					func_680(12);
					iLocal_1339 = 1;
				}
				break;
			
			case 1:
				if ((((STREAMING::HAS_MODEL_LOADED(func_72(11)) && STREAMING::HAS_MODEL_LOADED(func_72(6))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(11, func_348())) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, func_348())) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(12, func_348()))
				{
					func_346(0, 0, 0, 1, 1);
					iLocal_1339 = 2;
				}
				break;
		}
		if (!iLocal_1499)
		{
			if (MISC::GET_GAME_TIMER() >= iLocal_1767 + 1000)
			{
				iLocal_1499 = 1;
			}
			else
			{
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
				{
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 2f);
				}
				if (!PED::IS_PED_INJURED(iLocal_1352))
				{
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_1352, 3f);
				}
			}
		}
		if (iLocal_1337 < 2)
		{
			func_61(iLocal_1352, uLocal_1366[0], &uLocal_1345, &uLocal_1750, &uLocal_1821, &uLocal_1822, 1);
		}
		if (!bLocal_1503)
		{
			if (!PED::IS_PED_INJURED(Local_1158))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(Local_1158, 0))
				{
					PED::APPLY_DAMAGE_TO_PED(Local_1158, 1000, 1);
				}
				else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1158, PLAYER::PLAYER_PED_ID(), 1))
				{
					if (PED::CAN_KNOCK_PED_OFF_VEHICLE(Local_1158))
					{
						PED::KNOCK_PED_OFF_VEHICLE(Local_1158);
					}
					else
					{
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_1158, 0);
					}
				}
			}
		}
		if (((VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[1], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0)) && !PED::IS_PED_INJURED(Local_1158)) && !PED::IS_PED_INJURED(iLocal_1351))
		{
			GlobalFunc_10692(&uLocal_27, uLocal_1366[1], 0, 0, 1, 1, 1);
			if (!iLocal_1501)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_1351, func_79(29), 2f, 2f, 3f, 0, 1, 0))
				{
					TASK::TASK_ENTER_VEHICLE(iLocal_1351, uLocal_1366[0], 20000, 0, 2f, 1, 0);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_1351, 2f);
					iLocal_1501 = 1;
				}
				else
				{
					PED::SET_PED_MOVE_RATE_OVERRIDE(iLocal_1351, 1.15f);
				}
			}
			if (!bLocal_1621)
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_1351, uLocal_1366[0], 0))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_1351);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, 0);
					bLocal_1621 = true;
				}
			}
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_1366[1]))
			{
				fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(uLocal_1366[1]);
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				func_859(fVar0);
				if (iLocal_1337 == 0)
				{
					func_834(uLocal_1366[1], fLocal_1745);
				}
				if (fVar0 >= 66300f)
				{
					VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(uLocal_1366[1], 0);
				}
				if (fVar0 >= 55000f && iLocal_1339 == 2)
				{
					if (!iLocal_1513)
					{
						func_833(func_72(6));
						func_357(1);
						func_356(0);
						iLocal_1513 = 1;
					}
				}
				if (!iLocal_1666)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1006[33], 0))
					{
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_1006[33], uLocal_1366[1], 0);
						iLocal_1666 = 1;
					}
				}
				if (!iLocal_1502)
				{
					bVar4 = false;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1069[14], 0))
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(uLocal_1366[1], iLocal_1069[14]))
						{
							bVar4 = true;
						}
					}
					if (fVar0 >= 73092f)
					{
						bVar4 = true;
					}
					if (bVar4)
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_1366[1]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uLocal_1366[1]);
						}
						iLocal_1502 = 1;
					}
				}
				else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1069[14], 0))
				{
					if (!iLocal_1523)
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1069[14]))
						{
							if (iLocal_634[14] == 4)
							{
								iLocal_1523 = 1;
							}
						}
					}
					else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1069[14], 0))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_1069[14], 2f, 1, 0);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_1369[2]))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1069[14]))
					{
						uLocal_1369[2] = iLocal_1069[14];
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1369[2], 0))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(uLocal_1369[2], 3);
						}
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1355[2]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1369[2], 0))
					{
						iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uLocal_1369[2], -1);
						if (!PED::IS_PED_INJURED(iVar5))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar5, 1, 1);
							iLocal_1355[2] = iVar5;
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1069[12], 0))
				{
					if (!iLocal_1522)
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1069[12]))
						{
							if (iLocal_634[12] == 4)
							{
								iLocal_1522 = 1;
							}
						}
						else if (iLocal_634[12] >= 3)
						{
							iLocal_1522 = 1;
						}
					}
					else
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_1069[12], 2f, 1, 0);
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1069[13], 0))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1069[13]))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_1069[13], 2f, 1, 0);
					}
				}
				switch (iLocal_1325)
				{
					case 0:
						if (fVar0 >= 50000f)
						{
							func_684(12);
							iLocal_1325 = 1;
						}
						break;
					
					case 1:
						if (iLocal_1397[12])
						{
							if (STREAMING::HAS_MODEL_LOADED(func_72(12)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1006[42], 0))
							{
								iLocal_1384 = VEHICLE::CREATE_VEHICLE(func_72(12), 396.0168f, -854.3585f, 31.0555f, 93.05f, 1, 1);
								VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_1006[42], iLocal_1384, 1065353216);
								iLocal_1325 = 2;
							}
						}
						break;
					
					case 2:
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_1384))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1384, 0))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1384))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1006[42], 0))
									{
										if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1006[42]))
										{
											VEHICLE::SET_PLAYBACK_SPEED(iLocal_1384, fLocal_1745);
										}
										else
										{
											VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1384);
										}
									}
									else
									{
										VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1384);
									}
								}
							}
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1006[42]))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1384);
								func_197(12);
								iLocal_1325 = 3;
							}
						}
						break;
				}
				if (!iLocal_1521)
				{
					if (fVar0 >= 65000f)
					{
						if (Var1.x >= 420.49f)
						{
							iLocal_1521 = 1;
						}
					}
				}
				fVar6 = GlobalFunc_156(PLAYER::PLAYER_PED_ID(), uLocal_1366[1], 1);
				GlobalFunc_2216(uLocal_1390, uLocal_1366[1], 300f, 1061158912, 0);
				if (fVar6 >= 300f)
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_1390))
					{
						HUD::REMOVE_BLIP(&uLocal_1390);
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_1389))
					{
						HUD::REMOVE_BLIP(&uLocal_1389);
					}
					func_712(3);
				}
				if (iLocal_1475)
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_1366[0], 0) && PED::IS_PED_IN_VEHICLE(iLocal_1351, uLocal_1366[0], 0))
					{
						if (!bLocal_1680)
						{
							bLocal_1680 = GlobalFunc_2867("FRA0_CHASE_START");
						}
						if (!iLocal_1625)
						{
							if (!PED::IS_PED_INJURED(iLocal_1352))
							{
								AUDIO::STOP_PED_SPEAKING(iLocal_1352, 0);
								AUDIO::SET_ANIMAL_MOOD(iLocal_1352, 0);
							}
							iLocal_1625 = 1;
						}
						func_243(2);
						if (!bLocal_1670)
						{
							if (iLocal_1834 >= 0)
							{
								if (MISC::GET_GAME_TIMER() >= iLocal_1834 + 2000)
								{
									bLocal_1670 = true;
								}
								else
								{
									bLocal_1670 = func_239("FKN0_SPEC", 0, 0, 0, 1);
								}
							}
							else if (bLocal_1519 && bLocal_1556)
							{
								if (!PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
								{
									if (iLocal_1671)
									{
										iLocal_1834 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
						if (!bLocal_1503)
						{
							if (fVar0 < 66000f)
							{
								if (MISC::GET_GAME_TIMER() >= iLocal_1827)
								{
									if (fVar6 <= 40f)
									{
										if (func_239("FKN0_OG1", 0, 0, 0, 1))
										{
											iLocal_1827 = MISC::GET_GAME_TIMER() + 20000;
										}
									}
								}
							}
						}
						if (fVar6 >= 150f && bLocal_1556)
						{
							if (iLocal_1765 < 0)
							{
								iLocal_1765 = MISC::GET_GAME_TIMER();
							}
							if (!bLocal_1503)
							{
								func_242("FKN0_LOSING", -1, -1, -1, 0);
							}
						}
						else
						{
							if (!GlobalFunc_111())
							{
								fLocal_1749 = (fLocal_1749 + (1f * SYSTEM::TIMESTEP()));
							}
							else
							{
								fLocal_1749 = 0f;
							}
							if (!bLocal_1514)
							{
								bLocal_1514 = func_239("FKN0_NOCAT1", 0, 0, 0, 1);
								if (bLocal_1514)
								{
									RECORDING::_0x293220DA1B46CEBC(3f, 8.5f, 3);
								}
							}
							else if (!iLocal_1515)
							{
								if (func_239("FKN0_NOCAT2", 0, 0, 0, 1))
								{
									iLocal_1515 = 1;
								}
							}
							else if (!bLocal_1556)
							{
								bLocal_1556 = func_239("FKN0_HOLDON", 0, 0, 0, 1);
							}
							if (iLocal_1770 < 2)
							{
								if (MISC::GET_GAME_TIMER() >= iLocal_1771)
								{
									if ((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_ON_SCREEN(Local_1158)) && iLocal_1515)
									{
										if (iLocal_1770 == 0)
										{
											sVar7 = "FKN0_FSHOOT1";
										}
										else
										{
											sVar7 = "FKN0_FSHOOT2";
										}
										if (func_239(sVar7, 0, 0, 0, 1))
										{
											iLocal_1770++;
											iLocal_1771 = MISC::GET_GAME_TIMER() + 8000;
										}
									}
								}
							}
							if (!bLocal_1516)
							{
								if (fVar0 >= 40000f)
								{
									bLocal_1516 = true;
								}
								else if ((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_1366[0], 277.51f, -66.64f, 48f, 293.19f, -72.39f, 102f, 340f, 0, 1, 0) && ENTITY::GET_ENTITY_SPEED(uLocal_1366[0]) >= 23f) && GlobalFunc_2786(PLAYER::PLAYER_PED_ID(), 156.7f, 30f)) && bLocal_1519) && fLocal_1749 >= 1.2f)
								{
									bLocal_1516 = func_239("FKN0_VCHAS6", 0, 0, 0, 1);
								}
							}
							if (!PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
							{
								if (!bLocal_1519)
								{
									if ((fVar0 >= 12000f && iLocal_1769 > 0) && fLocal_1749 >= 1f)
									{
										if (!ENTITY::IS_ENTITY_AT_COORD(uLocal_1366[0], 364.11f, 323f, 102.7f, 60f, 60f, 60f, 0, 0, 0))
										{
											if (func_239("FKN0_FSPEC", 0, 0, 0, 1))
											{
												bLocal_1519 = true;
												RECORDING::_0x293220DA1B46CEBC(0f, 10f, 3);
												iLocal_1772 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
							if (!bLocal_1517)
							{
								if (fVar0 >= 43000f)
								{
									bLocal_1517 = true;
								}
								else if (fVar0 >= 42000f)
								{
									if (fVar6 <= 70f && ENTITY::IS_ENTITY_ON_SCREEN(Local_1158))
									{
										if ((iLocal_1760 % 2) == 0)
										{
											bLocal_1517 = func_239("FKN0_VCHAS7", 0, 0, 0, 1);
										}
										else
										{
											bLocal_1517 = func_239("FKN0_VCHAS8", 0, 0, 0, 1);
										}
									}
								}
							}
							if (!bLocal_1512)
							{
								if (fVar0 >= 65800f)
								{
									if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_79(28), 70f, 70f, 70f, 0, 0, 0))
									{
										bLocal_1512 = true;
									}
								}
							}
							if (!bLocal_1518)
							{
								if (fVar0 >= 67400f)
								{
									bLocal_1518 = true;
								}
								else if (bLocal_1512)
								{
									if (ENTITY::IS_ENTITY_ON_SCREEN(Local_1158))
									{
										bLocal_1518 = func_239("FC_VANALL", 0, 0, 0, 1);
									}
								}
							}
							iLocal_1765 = -1;
							switch (iLocal_1769)
							{
								case 0:
									fVar8 = 13000f;
									break;
								
								case 1:
									fVar8 = 32000f;
									break;
								
								case 2:
									fVar8 = 48000f;
									break;
								
								case 3:
									fVar8 = 52000f;
									break;
								
								default:
									fVar8 = 1E+08f;
									break;
							}
							if ((((fVar0 >= fVar8 && fLocal_1749 >= 1.3f) && !bLocal_1518) && iLocal_1515) && !iLocal_1506)
							{
								switch (iLocal_1769)
								{
									case 0:
										switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
										{
											case 0:
												sVar9 = "FKN0_VCHAS4";
												break;
											
											case 1:
												sVar9 = "FKN0_VCHAS5";
												break;
										}
										break;
									
									case 1:
										switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8))
										{
											case 0:
												sVar9 = "FC_CCHAT9";
												break;
											
											case 1:
												sVar9 = "FKN0_VCHAS3";
												break;
											
											case 2:
												sVar9 = "FKN0_VCHAS1";
												break;
											
											case 3:
												sVar9 = "FKN0_VCHAS2";
												break;
											
											case 4:
												sVar9 = "FC_CCHAT7";
												break;
											
											case 5:
												sVar9 = "FC_CHAT10";
												break;
											
											case 6:
												sVar9 = "FC_CCHAT8";
												break;
											
											case 7:
												sVar9 = "FC_CCHAT6";
												break;
										}
										break;
									
									case 2:
										sVar9 = "FKN0_AGAIN";
										break;
									
									case 3:
										if ((iLocal_1760 % 2) == 0)
										{
											sVar9 = "FKN0_PHONE1";
										}
										else
										{
											sVar9 = "FKN0_PHONE2";
										}
										break;
										break;
								}
								if (func_239(sVar9, 0, 0, 0, 1))
								{
									iLocal_1769++;
								}
							}
						}
						if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
						{
							iLocal_1671 = 1;
							bLocal_1519 = true;
							bLocal_1520 = true;
							if (GlobalFunc_74("FC_SPCHLP"))
							{
								if (MISC::GET_GAME_TIMER() >= iLocal_1783 + 500)
								{
									HUD::CLEAR_HELP(0);
									iLocal_1783 = MISC::GET_GAME_TIMER();
								}
							}
							if (MISC::IS_PC_VERSION())
							{
								if (GlobalFunc_74("FC_SPCHLP_KM"))
								{
									if (MISC::GET_GAME_TIMER() >= iLocal_1783 + 500)
									{
										HUD::CLEAR_HELP(0);
										iLocal_1783 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
						else if (bLocal_1519)
						{
							if (!bLocal_1520)
							{
								if (MISC::GET_GAME_TIMER() >= iLocal_1772 + 600)
								{
									if (PAD::_IS_USING_KEYBOARD(0))
									{
										bLocal_1520 = func_705("FC_SPCHLP_KM", 1, 14000);
									}
									else
									{
										bLocal_1520 = func_705("FC_SPCHLP", 1, 14000);
									}
								}
							}
						}
					}
				}
				iLocal_1500 = iLocal_1500;
				func_829();
			}
			else
			{
				if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1158, 200f, 200f, 200f, 0, 0, 0))
				{
					func_712(3);
				}
				if (bLocal_1503)
				{
					if (iLocal_1108 == 2)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(Local_1158, 0))
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_1390))
							{
								HUD::REMOVE_BLIP(&uLocal_1390);
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[1], 0))
						{
							if (ENTITY::GET_ENTITY_SPEED(uLocal_1366[1]) >= 1f)
							{
							}
							else if (iLocal_1504)
							{
								Var10 = { ENTITY::GET_ENTITY_ROTATION(uLocal_1366[1], 2) };
								if ((Var10.f_1 < 0f && Var10.f_1 > -50f) || (Var10.f_1 > 0f && Var10.f_1 < 50f))
								{
									if (!PED::IS_PED_IN_VEHICLE(Local_1158, uLocal_1366[1], 0))
									{
									}
								}
							}
						}
						if (!iLocal_1506)
						{
							if (iLocal_1337 <= 1)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(Local_1158) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1158, 60f, 60f, 4f, 0, 1, 0))
								{
									GlobalFunc_4935();
									iLocal_1506 = 1;
								}
							}
						}
						else if (!bLocal_1505)
						{
							bLocal_1505 = func_239("FKN0_CRSHED", 0, 0, 0, 1);
							if (bLocal_1505)
							{
								RECORDING::_0x293220DA1B46CEBC(4f, 6f, 4);
							}
						}
						else if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_1366[0]))
						{
							PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
						}
						if (iLocal_1337 > 1)
						{
						}
						else
						{
							if (!iLocal_1508)
							{
								if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_1158) && !PED::CAN_KNOCK_PED_OFF_VEHICLE(Local_1158))
								{
									TASK::TASK_LEAVE_ANY_VEHICLE(Local_1158, 0, 4160);
								}
								iLocal_1508 = 1;
							}
							else if (!bLocal_1507)
							{
								if (PED::CAN_PED_RAGDOLL(Local_1158))
								{
									bLocal_1507 = PED::SET_PED_TO_RAGDOLL(Local_1158, 5000, 5000, 0, 1, 1, 0);
								}
							}
							if (PED::IS_PED_RUNNING_RAGDOLL_TASK(Local_1158))
							{
								PED::RESET_PED_RAGDOLL_TIMER(Local_1158);
							}
						}
					}
					if (!bLocal_1632)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_1817 + 3000)
						{
							func_342();
						}
					}
				}
				else
				{
					func_828();
				}
				func_829();
			}
			if (iLocal_1337 == 0)
			{
				if (!iLocal_1652)
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_1366[0], 0) && !PED::IS_PED_IN_VEHICLE(iLocal_1351, uLocal_1366[0], 0))
					{
						iLocal_1652 = 1;
					}
				}
				func_223(1, (iLocal_1652 && !bLocal_1621), 0, 1);
				func_827();
			}
		}
		if (!bLocal_1503)
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[1], 0))
			{
				if (!PED::IS_PED_INJURED(Local_1158))
				{
					PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_1158, 0);
					PED::APPLY_DAMAGE_TO_PED(Local_1158, 1000, 1);
				}
			}
		}
		if (PED::IS_PED_INJURED(Local_1158))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_1390))
			{
				HUD::REMOVE_BLIP(&uLocal_1390);
			}
		}
		func_882();
	}
	else
	{
		func_811();
		if (bLocal_1645)
		{
			if (!PED::IS_PED_RAGDOLL(Local_1158))
			{
				func_803();
				func_772();
				func_695();
			}
		}
	}
}

void func_811()//Position - 0x7177B
{
	struct<3> Var0;
	
	func_829();
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	switch (iLocal_1110)
	{
		case 0:
			STREAMING::REQUEST_ADDITIONAL_COLLISION_AT_COORD(457.7f, -690.7f, 27.7f);
			func_7(1, 1, -1, 1, 0, 1, 1, 1);
			iLocal_1337 = 2;
			GlobalFunc_4948(&uLocal_27, 0, 0);
			func_54();
			iLocal_1802 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0))
			{
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1802, uLocal_1366[0], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uLocal_1366[0], "seat_dside_f"));
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_1395, iLocal_1802, "VAN_GET_OUT_CAM", func_198(4));
			}
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_1802, 0);
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_1366[1]))
			{
				if (ENTITY::IS_ENTITY_IN_AREA(uLocal_1366[1], 457.7003f, -684.9044f, 26.79034f, 463.6363f, -670.4812f, 26.35947f, 0, 0, 0))
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(uLocal_1366[1], 1) + Vector(0f, 0f, 1.2f) };
					Var0.f_2 = 26.5919f;
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uLocal_1366[1], Var0, 0, 0, 1);
					ENTITY::SET_ENTITY_ROTATION(uLocal_1366[1], 0.0150743f, 85.4796f, 10.1482f, 2, 1);
					ENTITY::SET_ENTITY_VELOCITY(uLocal_1366[1], 0f, 0f, 0f);
				}
			}
			if ((((VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(iLocal_1352)) && !PED::IS_PED_INJURED(iLocal_1351)) && !PED::IS_PED_INJURED(Local_1158))
			{
				func_812(1, 1);
				MISC::CLEAR_AREA_OF_VEHICLES(458.02f, -691.4f, 27.46f, 400f, 1, 0, 0, 0, 0);
				MISC::CLEAR_AREA(457.7502f, -692.0654f, 26.66529f, 8f, 1, 0, 0, 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(456.8039f, -689.5776f, 26.84026f, 26f, 0);
				FIRE::STOP_FIRE_IN_RANGE(456.8039f, -689.5776f, 26.84026f, 26f);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(456.8039f, -689.5776f, 26.84026f, 26f);
				GlobalFunc_2882(uLocal_1366[0]);
				func_364(1, 1);
				func_363(0);
				ENTITY::SET_ENTITY_COORDS(uLocal_1366[0], 458.02f, -691.4f, 26.7f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uLocal_1366[0], -13.4f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_1366[0]);
				iLocal_1802 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1802, uLocal_1366[0], 0);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 0, 0, 1);
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_1802, func_198(4), "VAN_GET_OUT_FRANKLIN", 1000f, -8f, 2, 0, 1148846080, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				ENTITY::SET_ENTITY_COORDS(iLocal_1351, ENTITY::GET_ENTITY_COORDS(iLocal_1351, 1), 1, 0, 0, 1);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_1351, iLocal_1802, func_198(4), "van_get_out_lamar", 1000f, -8f, 2, 0, 1148846080, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_1351, 0, 0);
				ENTITY::DETACH_ENTITY(iLocal_1352, 1, 1);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_1352, iLocal_1802, func_198(4), "van_get_out_chop", 1000f, -8f, 2, 0, 1148846080, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_1352, 0, 0);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_1158);
				ENTITY::SET_ENTITY_COORDS(Local_1158, 465.8825f, -677.4347f, 26.25079f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_1158, 23.7f);
				VEHICLE::SET_VEHICLE_DOOR_LATCHED(uLocal_1366[0], 0, 1, 1, 0);
				ENTITY::PLAY_ENTITY_ANIM(uLocal_1366[0], "van_get_out_van", func_198(4), 1000f, 0, 0, 0, 0f, 0);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(uLocal_1366[0]);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_1802, 0);
				func_42(10);
				func_42(2);
				func_49(3);
				if (STREAMING::STREAMVOL_IS_VALID(uLocal_2042))
				{
					STREAMING::STREAMVOL_DELETE(uLocal_2042);
				}
				RECORDING::_0x48621C9FCA3EBD28(4);
				iLocal_1762 = MISC::GET_GAME_TIMER();
				iLocal_1110 = 1;
			}
			break;
		
		case 1:
			if (!bLocal_1645)
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_1762 + 3800)
				{
					bLocal_1645 = true;
				}
			}
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1802))
			{
				RECORDING::_0x81CBAE94390F9F89();
				func_48(10f, 1, 0);
				func_256(2, 0, 0, 0, 0, 1, 1, 1);
				iLocal_1471 = 0;
			}
			break;
		
		case 2:
			RECORDING::_0x81CBAE94390F9F89();
			break;
	}
}

void func_812(bool bParam0, bool bParam1)//Position - 0x71BA1
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_916))
	{
		iLocal_55 = 0;
		GlobalFunc_2214();
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_932);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
			PED::SET_CREATE_RANDOM_COPS(1);
		}
		if (bLocal_71)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_825());
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2213());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2212());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2211());
		if (!CAM::IS_SCREEN_FADED_OUT() && !bParam0)
		{
			func_821();
			func_820();
			func_817();
		}
		else
		{
			func_813();
			func_359();
		}
		if (bParam1)
		{
			GlobalFunc_9132(0);
		}
	}
}

void func_813()//Position - 0x71C5D
{
	func_816();
	func_815();
	func_814();
}

void func_814()//Position - 0x71C71
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1069[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1069[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1069[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1069[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1069[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_1069[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_1069[iVar0]));
			}
		}
		iLocal_634[iVar0] = 0;
		if (!bLocal_51 && !bLocal_64)
		{
			if (iLocal_618[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_618[iVar0], &cLocal_916);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_987[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_987[iVar0]);
		}
		iVar0++;
	}
}

void func_815()//Position - 0x71D67
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1067[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_1067[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_1067[iVar0]));
			}
		}
		iLocal_666[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!iLocal_985[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_985[iVar0]);
		}
		iVar0++;
	}
	iLocal_673 = 0;
	iLocal_670 = 0;
}

void func_816()//Position - 0x71DE2
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1006[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1006[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1006[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1006[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1006[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_1006[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_1006[iVar0]));
			}
		}
		if (!bLocal_51 && !bLocal_64)
		{
			if (iLocal_462[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_462[iVar0], &cLocal_916);
			}
		}
		iLocal_514[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (!iLocal_933[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_933[iVar0]);
		}
		iVar0++;
	}
	iLocal_672 = 0;
	iLocal_668 = 0;
}

void func_817()//Position - 0x71EE0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1069[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1069[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1069[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1069[iVar0]);
				}
			}
			func_819(iLocal_1069[iVar0]);
			GlobalFunc_2210(iLocal_1069[iVar0]);
		}
		iLocal_634[iVar0] = 0;
		iLocal_650[iVar0] = 0;
		if (!bLocal_51 && !bLocal_64)
		{
			if (iLocal_618[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_618[iVar0], &cLocal_916);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_987[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_987[iVar0]);
		}
		iVar0++;
	}
	iLocal_674 = 0;
}


void func_819(int iParam0)//Position - 0x71FC4
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
				if (bLocal_72)
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 65536, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, 0);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 6, 0);
			}
		}
	}
}

void func_820()//Position - 0x7205D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1067[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1067[iVar0]))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_1067[iVar0], 1, 0);
			}
			GlobalFunc_2210(iLocal_1067[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!iLocal_985[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_985[iVar0]);
		}
		iVar0++;
	}
	iLocal_673 = 0;
	iLocal_670 = 0;
}

void func_821()//Position - 0x720DE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1006[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1006[iVar0]))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_1006[iVar0], 1, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1006[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1006[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1006[iVar0]);
				}
			}
			func_819(iLocal_1006[iVar0]);
			GlobalFunc_2210(iLocal_1006[iVar0]);
		}
		iLocal_514[iVar0] = 0;
		iLocal_566[iVar0] = 0;
		if (!bLocal_51 && !bLocal_64)
		{
			if (iLocal_462[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_462[iVar0], &cLocal_916);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (!iLocal_933[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_933[iVar0]);
		}
		iVar0++;
	}
	iLocal_672 = 0;
	iLocal_668 = 0;
}




int func_825()//Position - 0x721F2
{
	if (iLocal_1003 == 0)
	{
		return joaat("a_m_y_business_01");
	}
	return iLocal_1003;
}


void func_827()//Position - 0x72239
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_HEALTH(uLocal_1366[0]);
	if (!bLocal_1482)
	{
		if (iVar0 < iLocal_1759)
		{
			if (MISC::GET_GAME_TIMER() >= iLocal_1776)
			{
				iLocal_1776 = MISC::GET_GAME_TIMER() + 800;
				bLocal_1482 = true;
			}
		}
		iLocal_1759 = iVar0;
	}
	else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_1366[0], 0))
	{
		if (!iLocal_1669)
		{
			sVar1 = "FKN0_CRASH";
		}
		else
		{
			sVar1 = "FC_WARNF";
		}
		if (func_239(sVar1, 0, 0, 0, 1))
		{
			iLocal_1669 = 1;
			bLocal_1482 = false;
			iLocal_1759 = iVar0;
			iLocal_1776 = MISC::GET_GAME_TIMER() + 12000;
		}
		else if (MISC::GET_GAME_TIMER() >= iLocal_1776)
		{
			iLocal_1759 = iVar0;
			bLocal_1482 = false;
		}
	}
	else
	{
		iLocal_1759 = iVar0;
		bLocal_1482 = false;
	}
}

void func_828()//Position - 0x722EC
{
	if (!bLocal_1503)
	{
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_1158, 0);
		if (PED::CAN_KNOCK_PED_OFF_VEHICLE(Local_1158))
		{
			PED::KNOCK_PED_OFF_VEHICLE(Local_1158);
			iLocal_1504 = 0;
		}
		else
		{
			iLocal_1504 = 1;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[1], 0))
		{
			ENTITY::SET_ENTITY_PROOFS(uLocal_1366[1], 0, 0, 0, 0, 0, 0, 0, 0);
			VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(uLocal_1366[1], 0);
			VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(uLocal_1366[1], 1);
			VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(uLocal_1366[1], 1);
		}
		RECORDING::_0x293220DA1B46CEBC(3f, 2f, 3);
		iLocal_1817 = MISC::GET_GAME_TIMER();
		bLocal_1503 = true;
	}
}

void func_829()//Position - 0x72376
{
	bool bVar0;
	float fVar1;
	float fVar2;
	
	if ((((VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(iLocal_1352)) && !PED::IS_PED_INJURED(iLocal_1351)) && !PED::IS_PED_INJURED(Local_1158))
	{
		switch (iLocal_1337)
		{
			case 0:
				if (iLocal_1339 == 2)
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_1366[0]))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 454.8479f, -688.8766f, 26.97397f, 17f, 17f, 17f, 0, 0, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 458.0811f, -660.4894f, 26.4879f, 35f, 35f, 35f, 0, 0, 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_1384))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1384);
							}
							func_197(12);
							iLocal_1069[14] = 0;
							if (STREAMING::STREAMVOL_IS_VALID(uLocal_2042))
							{
								STREAMING::STREAMVOL_DELETE(uLocal_2042);
							}
							uLocal_2042 = STREAMING::STREAMVOL_CREATE_FRUSTUM(456.5f, -686.2f, 28.9f, GlobalFunc_590(-2.5f, 0f, -178.1f), 100f, 12, 127);
							iLocal_1829 = MISC::GET_GAME_TIMER();
							iLocal_1337 = 1;
						}
					}
					else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1158, 7f, 7f, 7f, 0, 1, 0))
						{
							if (!GlobalFunc_111())
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_1384))
								{
									ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1384);
								}
								func_197(12);
								iLocal_1069[14] = 0;
								iLocal_1471 = 1;
							}
						}
					}
				}
				break;
			
			case 1:
				STREAMING::REQUEST_ADDITIONAL_COLLISION_AT_COORD(457.7f, -690.7f, 27.7f);
				if (!iLocal_1660)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_1829 + 3000)
					{
						GlobalFunc_4935();
						bLocal_1505 = true;
						iLocal_1660 = 1;
					}
				}
				if ((GlobalFunc_530(uLocal_1366[0], 14f, 1, 1056964608, 0, 1) && bLocal_1503) && !GlobalFunc_111())
				{
					iLocal_1471 = 1;
				}
				break;
			
			case 2:
				bVar0 = false;
				if (!bLocal_1681)
				{
					bLocal_1681 = GlobalFunc_2867("FRA0_CHASE_MID");
				}
				if (!bLocal_1509)
				{
					bLocal_1509 = func_239("FKN0_GOGET", 0, 0, 0, 1);
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1802))
				{
					fVar1 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1802);
					if (fVar1 >= 0f)
					{
						if (bLocal_1509)
						{
							if (!bLocal_1510)
							{
								if (fVar1 >= 0.6f)
								{
									bLocal_1510 = func_239("FKN0_GOGET2", 0, 0, 0, 1);
								}
							}
						}
						if (!iLocal_1649)
						{
							if (fVar1 >= 0.845f)
							{
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_1352);
								ENTITY::SET_ENTITY_COORDS(iLocal_1352, 457.7509f, -686.5527f, 26.77712f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iLocal_1352, -24.2f);
								PED::FORCE_PED_MOTION_STATE(iLocal_1352, -1115154469, true, 1, 0);
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_1352, "hood7", 7, 36, -1);
								iLocal_1649 = 1;
							}
						}
					}
				}
				else
				{
					bVar0 = true;
				}
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 3f);
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_1352, 3f);
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_1366[0], func_198(4), "van_get_out_van", 3))
				{
					fVar2 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_1366[0], func_198(4), "van_get_out_van");
					switch (iLocal_1818)
					{
						case 0:
							if (fVar2 >= 0.16f)
							{
								AUDIO::PLAY_VEHICLE_DOOR_OPEN_SOUND(uLocal_1366[0], 0);
								iLocal_1818++;
							}
							break;
						
						case 1:
							if (fVar2 >= 0.569f)
							{
								AUDIO::PLAY_VEHICLE_DOOR_OPEN_SOUND(uLocal_1366[0], 3);
								iLocal_1818++;
							}
							break;
						
						case 2:
							if (fVar2 >= 0.581f)
							{
								iLocal_1818++;
							}
							break;
						}
				}
				if (bVar0)
				{
				}
				break;
			}
	}
}




void func_833(int iParam0)//Position - 0x72926
{
	iLocal_1003 = iParam0;
}

void func_834(int iParam0, float fParam1)//Position - 0x72933
{
	float fVar0;
	struct<3> Var1;
	int iVar4;
	
	fVar0 = MISC::GET_FRAME_TIME();
	fVar0 = (fVar0 * 1000f);
	bLocal_70 = false;
	if (!bLocal_52)
	{
		if (bLocal_51)
		{
			GlobalFunc_2512();
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				MISC::CLEAR_AREA(Var1, 1000f, 1, 0, 0, 0);
			}
			bLocal_52 = true;
		}
	}
	else if (!bLocal_51)
	{
		GlobalFunc_2214();
		bLocal_52 = false;
	}
	if (bLocal_51)
	{
		fParam1 = 1f;
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (!bLocal_45)
	{
		if (iLocal_40)
		{
			fLocal_446 = 0f;
		}
		else
		{
			fLocal_446 = 1f;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (GlobalFunc_5657(PLAYER::PLAYER_PED_ID(), iParam0))
					{
						iLocal_50 = 1;
					}
					else
					{
						iLocal_50 = 0;
					}
				}
				fLocal_443 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
				VEHICLE::SET_PLAYBACK_SPEED(iParam0, ((fParam1 * fLocal_444) * fLocal_446));
				if (bLocal_49)
				{
					func_857(iParam0, fLocal_443);
					func_856(iParam0, fLocal_453);
					if (fLocal_448 > 1000f)
					{
						if (iLocal_684 == 0)
						{
							func_855(iParam0, fLocal_453);
						}
						fVar0 = ((fLocal_443 + 4000f) + (SYSTEM::TO_FLOAT(iLocal_684) * 2000f));
						func_854(iParam0, fVar0, fLocal_447);
						iLocal_684++;
						if (iLocal_684 > 2)
						{
							fLocal_448 = 0f;
						}
					}
					else
					{
						iLocal_684 = 0;
						fLocal_448 = (fLocal_448 + (MISC::GET_FRAME_TIME() * 1000f));
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
		if (fLocal_443 == 0f || CAM::IS_SCREEN_FADED_OUT())
		{
			iVar4 = 1;
		}
		if (iVar4 && !bLocal_57)
		{
			if (!iLocal_39)
			{
				func_851(iParam0, ((fParam1 * fLocal_444) * fLocal_446), 0);
				if (!iLocal_60)
				{
				}
				iLocal_60 = 0;
			}
			if (bLocal_42)
			{
				func_850(iParam0);
			}
			if (!iLocal_39)
			{
				func_837(iParam0, ((fParam1 * fLocal_444) * fLocal_446), 0);
			}
		}
		if (iLocal_47)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_1092 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					Local_889 = { ENTITY::GET_ENTITY_COORDS(iLocal_1092, 1) };
					ENTITY::GET_ENTITY_QUATERNION(iLocal_1092, &uLocal_333, &uLocal_334, &uLocal_335, &uLocal_336);
				}
			}
			iLocal_47 = 0;
		}
		if (iLocal_46)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1092))
			{
				GlobalFunc_2210(iLocal_1093);
				iLocal_1093 = iLocal_1092;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1093, 0))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_1093, Local_889, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_1093, uLocal_333, uLocal_334, uLocal_335, uLocal_336);
			}
			fLocal_442 = fLocal_445;
			iLocal_39 = 1;
			iLocal_46 = 0;
		}
		if (iLocal_39)
		{
			while (!func_835(&iParam0, fLocal_442))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_40 = 1;
		}
		if (iLocal_53)
		{
			iLocal_53 = 0;
		}
	}
}

int func_835(int iParam0, float fParam1)//Position - 0x72BCE
{
	if (!iLocal_54)
	{
		iLocal_39 = 1;
		func_813();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
				VEHICLE::SET_VEHICLE_FIXED(*iParam0);
			}
			if (!iLocal_671 == -1)
			{
				while (!func_836(iParam0, iLocal_671, fParam1, 1, 0, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!bLocal_44)
				{
					iLocal_40 = 1;
					fLocal_446 = 0f;
					iLocal_672 = 0;
					iLocal_674 = 0;
					iLocal_673 = 0;
					iLocal_668 = 0;
					iLocal_669 = 0;
					iLocal_670 = 0;
					iLocal_675 = 0;
					iLocal_676 = 0;
					iLocal_677 = 0;
				}
			}
		}
		iLocal_54 = 1;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(*iParam0, ((1f * fLocal_444) * fLocal_446));
				func_836(iParam0, iLocal_671, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_443 = fParam1;
		iLocal_678 = 0;
		iLocal_681 = 0;
		fLocal_458 = 0f;
		fLocal_457 = 0f;
		func_837(*iParam0, ((1f * fLocal_444) * fLocal_446), 1);
		func_851(*iParam0, ((1f * fLocal_444) * fLocal_446), 1);
		func_850(*iParam0);
		if ((iLocal_675 == 0 && iLocal_676 == 0) && iLocal_677 == 0)
		{
			iLocal_40 = 0;
			iLocal_39 = 0;
			iLocal_54 = 0;
			return 1;
		}
	}
	return 0;
}

int func_836(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x72D00
{
	float fVar0;
	
	if (iParam1 > 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_916);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, &cLocal_916))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 0);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_916, 1092616192, 786603);
					}
					else
					{
						if (iParam1 != iLocal_679 && iParam1 != iLocal_680)
						{
							if (bParam7)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_916, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_916, 1 | 4, 0, 786603);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_916, 1);
							}
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_916, 1);
						}
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, fParam2);
						if (bParam5)
						{
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, 1);
						}
						return 1;
					}
				}
				else if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(*uParam0) == VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, &cLocal_916))
				{
					fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(*uParam0);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*uParam0);
						VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_916);
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
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_916, 1092616192, 786603);
					}
					else if (iParam1 != iLocal_679 && iParam1 != iLocal_680)
					{
						if (bParam7)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_916, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_916, 1 | 4, 0, 786603);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_916, 1);
						}
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_916, 1);
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

void func_837(int iParam0, float fParam1, bool bParam2)//Position - 0x72EE6
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
	bool bVar16;
	var uVar17;
	bool bVar18;
	int iVar19;
	int iVar20;
	
	bVar15 = PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID());
	bVar16 = PED::CAN_CREATE_RANDOM_DRIVER();
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
		iVar0 = iLocal_674;
		while (iVar0 < 15)
		{
			if (iLocal_634[iVar0] != 99)
			{
				if (iLocal_634[iVar0] == 0)
				{
					if (iLocal_618[iVar0] > 0)
					{
						if (!iLocal_39)
						{
							if (fLocal_443 > (fLocal_401[iVar0] - (7000f * fParam1)))
							{
								if (GlobalFunc_2222(iLocal_987[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_650[iVar0]), 0);
								}
								else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_987[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_650[iVar0]), 2);
								}
								MISC::CLEAR_BIT(&(iLocal_650[iVar0]), 1);
								iLocal_634[iVar0]++;
								iLocal_676++;
							}
						}
						else
						{
							fVar12 = (fLocal_443 - fLocal_401[iVar0]);
							fVar12 = (fVar12 * fLocal_417[iVar0]);
							if (fVar12 >= 0f)
							{
								if (fVar12 < func_848(iLocal_618[iVar0]))
								{
									if (GlobalFunc_2222(iLocal_987[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_650[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_987[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_650[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_650[iVar0]), 1);
									iLocal_634[iVar0]++;
									iLocal_676++;
								}
								else
								{
									iLocal_634[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_634[iVar0] = 99;
					}
				}
				else if (iLocal_634[iVar0] == 1)
				{
					bVar14 = false;
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_618[iVar0], &cLocal_916);
					if (MISC::IS_BIT_SET(iLocal_650[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2211());
						bVar14 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
					}
					else if (!bLocal_66 && ((!MISC::IS_BIT_SET(iLocal_650[iVar0], 2) && bVar16) || (MISC::IS_BIT_SET(iLocal_650[iVar0], 2) && uVar17)))
					{
						bVar14 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_825());
						bVar14 = STREAMING::HAS_MODEL_LOADED(func_825());
					}
					if (bVar14)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1069[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_987[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_987[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_618[iVar0], &cLocal_916))
							{
								if (fLocal_443 >= (fLocal_401[iVar0] - (fLocal_456 * fParam1)))
								{
									if ((iLocal_53 || bParam2) || (!bLocal_70 && !func_847(Local_843[iVar0 /*3*/], Var9, 5f, fLocal_454)))
									{
										if (bLocal_49)
										{
											func_846(Local_843[iVar0 /*3*/], Var9, fLocal_447);
										}
										iLocal_1069[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_987[iVar0], Local_843[iVar0 /*3*/], 0f, 0, 0);
										if (iLocal_987[iVar0] == joaat("polmav"))
										{
											VEHICLE::SET_VEHICLE_LIVERY(iLocal_1069[iVar0], 0);
										}
										if (uLocal_62 && !MISC::IS_BIT_SET(iLocal_650[iVar0], 0))
										{
											func_845(iLocal_1069[iVar0]);
										}
										if (MISC::IS_BIT_SET(iLocal_650[iVar0], 3))
										{
											ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_1069[iVar0], 1);
										}
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_1069[iVar0], Local_843[iVar0 /*3*/], 0, 0, 1);
										ENTITY::SET_ENTITY_QUATERNION(iLocal_1069[iVar0], fLocal_337[iVar0], fLocal_353[iVar0], fLocal_369[iVar0], fLocal_385[iVar0]);
										if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_987[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_987[iVar0]))
										{
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1069[iVar0]);
										}
										if (!MISC::IS_BIT_SET(iLocal_650[iVar0], 0))
										{
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1069[iVar0], 1, 1);
											if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
											{
												VEHICLE::SET_VEHICLE_LIGHTS(iLocal_1069[iVar0], 3);
											}
										}
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_1069[iVar0], 1);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_987[iVar0]);
										iLocal_676 = (iLocal_676 - 1);
										iLocal_634[iVar0]++;
										bLocal_70 = true;
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_1069[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1069[iVar0], 0))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_1069[iVar0], Local_843[iVar0 /*3*/], 0, 0, 1);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_1069[iVar0], fLocal_337[iVar0], fLocal_353[iVar0], fLocal_369[iVar0], fLocal_385[iVar0]);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_987[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_987[iVar0]))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1069[iVar0]);
							}
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_1069[iVar0], 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_987[iVar0]);
							iLocal_676 = (iLocal_676 - 1);
							iLocal_634[iVar0]++;
						}
					}
				}
				else if (iLocal_634[iVar0] == 2)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_618[iVar0], &cLocal_916);
					if (!MISC::IS_BIT_SET(iLocal_650[iVar0], 1))
					{
						bVar14 = false;
						if (MISC::IS_BIT_SET(iLocal_650[iVar0], 0))
						{
							STREAMING::REQUEST_MODEL(GlobalFunc_2211());
							bVar14 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
							iVar19 = 2;
						}
						else if (!bLocal_66 && ((!MISC::IS_BIT_SET(iLocal_650[iVar0], 2) && bVar16) || (MISC::IS_BIT_SET(iLocal_650[iVar0], 2) && uVar17)))
						{
							bVar14 = true;
							iVar19 = 1;
						}
						else
						{
							STREAMING::REQUEST_MODEL(func_825());
							bVar14 = STREAMING::HAS_MODEL_LOADED(func_825());
							iVar19 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_1069[iVar0]))
						{
							if (!bLocal_70 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_1069[iVar0], -1))
							{
								if (bVar14)
								{
									if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_1069[iVar0], 1), Var9) < 10000f || bParam2) || iLocal_53)
									{
										func_843(&(iLocal_1069[iVar0]), iVar19, 1);
										MISC::SET_BIT(&(iLocal_650[iVar0]), 1);
									}
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1069[iVar0], 0))
					{
						if (fLocal_443 >= fLocal_401[iVar0])
						{
							if (8 > iLocal_669)
							{
								fVar12 = (fLocal_443 - fLocal_401[iVar0]);
								fVar12 = (fVar12 * fLocal_417[iVar0]);
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_618[iVar0], &cLocal_916))
								{
									if (fVar12 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_618[iVar0], &cLocal_916))
									{
										Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_1069[iVar0], 1) };
										Var6 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_618[iVar0], fVar12, &cLocal_916) };
										if (((!func_847(Var3, Var9, 5f, fLocal_454) && func_847(Var6, Var9, 5f, fLocal_454)) && !iLocal_53) && !bParam2)
										{
											if (!MISC::IS_BIT_SET(iLocal_650[iVar0], 1))
											{
												func_843(&(iLocal_1069[iVar0]), iVar19, 1);
											}
											iLocal_669++;
											iLocal_634[iVar0]++;
										}
										else if (((!bLocal_70 || MISC::IS_BIT_SET(iLocal_650[iVar0], 1)) || iLocal_53) || bParam2)
										{
											if (func_836(&(iLocal_1069[iVar0]), iLocal_618[iVar0], fVar12, 1, 0, 0, bLocal_68, bLocal_67))
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_1069[iVar0], (fParam1 * fLocal_417[iVar0]));
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1069[iVar0], 0))
												{
													if (MISC::IS_BIT_SET(iLocal_650[iVar0], 0))
													{
														VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1069[iVar0], 1, 1);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_1069[iVar0], 1);
														VEHICLE::SET_VEHICLE_LIGHTS(iLocal_1069[iVar0], 2);
														if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_987[iVar0]))
														{
															AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_1069[iVar0], 1);
														}
													}
												}
												if (!MISC::IS_BIT_SET(iLocal_650[iVar0], 1))
												{
													func_843(&(iLocal_1069[iVar0]), iVar19, 1);
												}
												iLocal_669++;
												iLocal_634[iVar0]++;
											}
										}
									}
									else
									{
										if (!MISC::IS_BIT_SET(iLocal_650[iVar0], 1))
										{
											func_843(&(iLocal_1069[iVar0]), iVar19, 1);
										}
										iLocal_669++;
										iLocal_634[iVar0]++;
									}
								}
							}
							else
							{
								if (!MISC::IS_BIT_SET(iLocal_650[iVar0], 1))
								{
									func_843(&(iLocal_1069[iVar0]), iVar19, 1);
								}
								iLocal_669++;
								iLocal_634[iVar0]++;
							}
						}
					}
					else
					{
						if (!MISC::IS_BIT_SET(iLocal_650[iVar0], 1))
						{
							func_843(&(iLocal_1069[iVar0]), iVar19, 1);
						}
						iLocal_669++;
						iLocal_634[iVar0]++;
					}
				}
				else if (iLocal_634[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1069[iVar0], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1069[iVar0]))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1069[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (bVar15)
								{
									if (((!bLocal_43 && !iLocal_40) && !bLocal_59) && (((!bLocal_68 && !bLocal_67) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1069[iVar0])) || func_842(iLocal_1069[iVar0])))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar2))
										{
											bVar14 = false;
											if (bLocal_61)
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
												else if (MISC::ABSF((fVar13 - ENTITY::GET_ENTITY_SPEED(iLocal_1069[iVar0]))) > 15f)
												{
													bVar14 = true;
												}
												else if (!GlobalFunc_5655(iLocal_1069[iVar0], iVar2, 45f))
												{
													bVar14 = true;
												}
												else if (GlobalFunc_5654(iVar2, iLocal_1069[iVar0], 0))
												{
													bVar14 = true;
												}
											}
											if (bVar14)
											{
												func_838(iLocal_1069[iVar0]);
												iLocal_634[iVar0]++;
											}
										}
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_1069[iVar0], (fParam1 * fLocal_417[iVar0]));
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1069[iVar0]);
							}
						}
						else
						{
							iLocal_634[iVar0]++;
						}
					}
					else
					{
						iLocal_634[iVar0]++;
					}
				}
				else if (iLocal_634[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1069[iVar0], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1069[iVar0]))
						{
							iLocal_634[iVar0]++;
						}
						else
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1069[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_1069[iVar0], (fParam1 * fLocal_417[iVar0]));
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1069[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_618[iVar0], &cLocal_916))
							{
								if (fLocal_443 > (fLocal_401[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_618[iVar0], &cLocal_916)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1069[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1069[iVar0]);
							}
						}
					}
					else
					{
						iLocal_634[iVar0]++;
					}
				}
				else if (iLocal_634[iVar0] == 5)
				{
					if (!iLocal_1069[iVar0] == iLocal_1094)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1069[iVar0], 0))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1069[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								iVar20 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, 242628503);
								if (iVar20 == 7)
								{
									fVar13 = ENTITY::GET_ENTITY_SPEED(iLocal_1069[iVar0]);
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
						if (!bLocal_51 && !bLocal_64)
						{
							if (iLocal_618[iVar0] > 0)
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_618[iVar0], &cLocal_916);
							}
						}
						if (!bLocal_41)
						{
							if (!bLocal_69)
							{
								GlobalFunc_2210(iLocal_1069[iVar0]);
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_1069[iVar0]))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_1069[iVar0]));
						}
					}
					iLocal_669 = (iLocal_669 - 1);
					iLocal_634[iVar0] = 99;
				}
				if (!bVar18)
				{
					iLocal_674 = iVar0;
					bVar18 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_817();
	}
}

void func_838(int iParam0)//Position - 0x73AE4
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_819(iParam0);
		VEHICLE::SET_PLAYBACK_TO_USE_AI(iParam0, 786603);
	}
}




int func_842(var uParam0)//Position - 0x73C47
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bLocal_65)
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

int func_843(var uParam0, int iParam1, bool bParam2)//Position - 0x73CA4
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, -1))
		{
			if (iParam1 == 2)
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, GlobalFunc_2211(), -1, 0, 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iLocal_932);
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
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 4, func_825(), -1, 0, 0);
				if (bLocal_71)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_825());
				}
			}
			if (bParam2)
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar0, 1);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iVar0, 0);
				PED::SET_PED_CONFIG_FLAG(iVar0, 32, 0);
			}
			if (bLocal_72)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(*uParam0, 1);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 1);
			GlobalFunc_2221(iVar0);
			bLocal_70 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}


void func_845(int iParam0)//Position - 0x73DB0
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iLocal_1004 >= -1 && iLocal_1005 >= -1)
	{
		while (iVar0 == iLocal_1004 || iVar0 == iLocal_1005)
		{
			iVar0++;
		}
	}
	else if (iLocal_1004 >= -1)
	{
		if (iVar0 == iLocal_1004)
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

void func_846(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x73F29
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (!bLocal_52)
	{
		if (!func_847(Param0, Param3, fParam6, 200f))
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

int func_847(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7)//Position - 0x73F99
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!bLocal_52)
		{
			if (!iLocal_39)
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

float func_848(int iParam0)//Position - 0x73FE0
{
	var uVar0;
	
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, &cLocal_916);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, &cLocal_916))
	{
		SYSTEM::WAIT(0);
	}
	uVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam0, &cLocal_916);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, &cLocal_916);
	return uVar0;
}


void func_850(int iParam0)//Position - 0x7409A
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
		iVar0 = iLocal_673;
		while (iVar0 < 1)
		{
			switch (iLocal_666[iVar0])
			{
				case 0:
					if (!iLocal_985[iVar0] == 0)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Local_839[iVar0 /*3*/], fLocal_441, fLocal_441, fLocal_441, 0, 1, 0))
						{
							iLocal_675++;
							iLocal_666[iVar0]++;
						}
					}
					else
					{
						iLocal_666[iVar0] = 99;
					}
					break;
				
				case 1:
					if (6 > iLocal_670)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1067[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_985[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_985[iVar0]))
							{
								if ((iLocal_39 || iLocal_53) || (!bLocal_70 && !func_847(Local_839[iVar0 /*3*/], Var1, 5f, fLocal_454)))
								{
									if (bLocal_49)
									{
										func_846(Local_839[iVar0 /*3*/], Var1, fLocal_447);
									}
									iLocal_1067[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_985[iVar0], Local_839[iVar0 /*3*/], 0f, 0, 0);
									if (iLocal_985[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_1067[iVar0], 0);
									}
									ENTITY::SET_ENTITY_QUATERNION(iLocal_1067[iVar0], fLocal_433[iVar0], fLocal_435[iVar0], fLocal_437[iVar0], fLocal_439[iVar0]);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_985[iVar0]);
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_1067[iVar0], GlobalFunc_2212()))
									{
										VEHICLE::SET_VEHICLE_SIREN(iLocal_1067[iVar0], 1);
										if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_985[iVar0]))
										{
											AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_1067[iVar0], 1);
										}
									}
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_1067[iVar0], GlobalFunc_2213()))
									{
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_1067[iVar0], 0, 0);
									}
									ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_1067[iVar0], 1);
									iLocal_675 = (iLocal_675 - 1);
									iLocal_670++;
									iLocal_666[iVar0]++;
									bLocal_70 = true;
								}
							}
						}
						else
						{
							iLocal_675 = (iLocal_675 - 1);
							iLocal_670++;
							iLocal_666[iVar0]++;
						}
					}
					break;
				
				case 2:
					if (!bVar7)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1067[iVar0], 0))
						{
							Var4 = { ENTITY::GET_ENTITY_COORDS(iLocal_1067[iVar0], 1) };
						}
						if (fLocal_455 == 0f || SYSTEM::VDIST2(Var1, Var4) < (fLocal_455 * fLocal_455))
						{
							if (!GlobalFunc_5654(iLocal_1067[iVar0], iParam0, 0))
							{
								if (!bLocal_41)
								{
									GlobalFunc_2210(iLocal_1067[iVar0]);
								}
								else
								{
									VEHICLE::DELETE_VEHICLE(&(iLocal_1067[iVar0]));
								}
								iLocal_670 = (iLocal_670 - 1);
								iLocal_666[iVar0] = 99;
								bVar7 = true;
							}
						}
					}
					break;
			}
			if (iLocal_666[iVar0] != 99)
			{
				if (!bVar8)
				{
					iLocal_673 = iVar0;
					bVar8 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_820();
	}
}

void func_851(int iParam0, float fParam1, int iParam2)//Position - 0x7438F
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
	bool bVar19;
	var uVar20;
	int iVar21;
	int iVar22;
	bool bVar23;
	bool bVar24;
	struct<3> Var25;
	
	iVar5 = 0;
	bVar18 = PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID());
	bVar19 = PED::CAN_CREATE_RANDOM_DRIVER();
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
			fLocal_443 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
		}
		iVar22 = -1;
		bVar23 = false;
		bVar24 = false;
		iVar0 = iLocal_672;
		while (iVar0 < 51 && !bVar23)
		{
			if (iLocal_514[iVar0] != 99)
			{
				if (iLocal_514[iVar0] == 0)
				{
					if (iLocal_462[iVar0] > 0 && iLocal_933[iVar0] != 0)
					{
						if (!iLocal_39)
						{
							if (fLocal_443 < (fLocal_281[iVar0] + 20000f))
							{
								if (fLocal_443 >= (fLocal_281[iVar0] - (7000f * fParam1)))
								{
									if (GlobalFunc_2222(iLocal_933[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_566[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_933[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_566[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_566[iVar0]), 1);
									iLocal_677++;
									iLocal_514[iVar0]++;
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
								func_853(iVar0, 1090519040);
							}
						}
						else
						{
							fVar15 = (fLocal_443 - fLocal_281[iVar0]);
							if (fVar15 >= 0f)
							{
								if (fVar15 < func_848(iLocal_462[iVar0]))
								{
									if (GlobalFunc_2222(iLocal_933[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_566[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_933[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_566[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_566[iVar0]), 1);
									iLocal_677++;
									iLocal_514[iVar0]++;
								}
								else
								{
									func_853(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_853(iVar0, 1090519040);
					}
				}
				else if (iLocal_514[iVar0] == 1)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_462[iVar0], &cLocal_916);
					bVar17 = false;
					if (MISC::IS_BIT_SET(iLocal_566[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2211());
						if (STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211()))
						{
							bVar17 = true;
						}
					}
					else if (!bLocal_66 && ((!MISC::IS_BIT_SET(iLocal_566[iVar0], 2) && bVar19) || (MISC::IS_BIT_SET(iLocal_566[iVar0], 2) && uVar20)))
					{
						bVar17 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_825());
						bVar17 = STREAMING::HAS_MODEL_LOADED(func_825());
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1006[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_933[iVar0]);
						if ((STREAMING::HAS_MODEL_LOADED(iLocal_933[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_462[iVar0], &cLocal_916)) && bVar17)
						{
							if (fLocal_443 >= (fLocal_281[iVar0] - (fLocal_456 * fParam1)))
							{
								if ((iLocal_53 || iParam2) || (!bLocal_70 && !func_847(Local_685[iVar0 /*3*/], Var12, 5f, fLocal_454)))
								{
									if (bLocal_49)
									{
										func_846(Local_685[iVar0 /*3*/], Var12, fLocal_447);
									}
									iLocal_1006[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_933[iVar0], Local_685[iVar0 /*3*/], 0f, 0, 0);
									if (iLocal_933[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_1006[iVar0], 0);
									}
									if (uLocal_62 && !MISC::IS_BIT_SET(iLocal_566[iVar0], 0))
									{
										func_845(iLocal_1006[iVar0]);
									}
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_1006[iVar0], Local_685[iVar0 /*3*/], 0, 0, 1);
									ENTITY::SET_ENTITY_QUATERNION(iLocal_1006[iVar0], fLocal_73[iVar0], fLocal_125[iVar0], fLocal_177[iVar0], fLocal_229[iVar0]);
									if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_933[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_933[iVar0]))
									{
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1006[iVar0]);
									}
									if (MISC::IS_BIT_SET(iLocal_566[iVar0], 3))
									{
										ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_1006[iVar0], 1);
									}
									if (!MISC::IS_BIT_SET(iLocal_566[iVar0], 0))
									{
										VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1006[iVar0], 1, 1);
										if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
										{
											VEHICLE::SET_VEHICLE_LIGHTS(iLocal_1006[iVar0], 3);
										}
									}
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_1006[iVar0], 1);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_1006[iVar0], 1);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_933[iVar0]);
									iLocal_677 = (iLocal_677 - 1);
									iLocal_514[iVar0]++;
									bLocal_70 = true;
								}
								else if (fLocal_443 > fLocal_281[iVar0])
								{
									iLocal_677 = (iLocal_677 - 1);
									func_853(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_514[iVar0] == 2)
				{
					bVar17 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_683 || iLocal_683 == 0)) || iLocal_53) || iParam2)
					{
						if (!MISC::IS_BIT_SET(iLocal_566[iVar0], 1))
						{
							if (MISC::IS_BIT_SET(iLocal_566[iVar0], 0))
							{
								STREAMING::REQUEST_MODEL(GlobalFunc_2211());
								bVar17 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
								iVar21 = 2;
							}
							else if (!bLocal_66 && ((!MISC::IS_BIT_SET(iLocal_566[iVar0], 2) && bVar19) || (MISC::IS_BIT_SET(iLocal_566[iVar0], 2) && uVar20)))
							{
								bVar17 = true;
								iVar21 = 1;
							}
							else
							{
								STREAMING::REQUEST_MODEL(func_825());
								bVar17 = STREAMING::HAS_MODEL_LOADED(func_825());
								iVar21 = 0;
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_1006[iVar0]))
							{
								if (!bLocal_70 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_1006[iVar0], -1))
								{
									if (bVar17)
									{
										if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_1006[iVar0], 1), Var12) < 10000f || iParam2) || iLocal_53)
										{
											func_843(&(iLocal_1006[iVar0]), iVar21, 0);
											MISC::SET_BIT(&(iLocal_566[iVar0]), 1);
										}
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1006[iVar0], 0))
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_462[iVar0], &cLocal_916);
							if (fLocal_443 >= fLocal_281[iVar0])
							{
								if (8 > iLocal_668)
								{
									fVar15 = (fLocal_443 - fLocal_281[iVar0]);
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_462[iVar0], &cLocal_916))
									{
										if (fVar15 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_462[iVar0], &cLocal_916))
										{
											Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_1006[iVar0], 1) };
											Var9 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_462[iVar0], fVar15, &cLocal_916) };
											if (!func_847(Var6, Var12, 5f, fLocal_454) && func_847(Var9, Var12, 5f, fLocal_454))
											{
												if (!MISC::IS_BIT_SET(iLocal_566[iVar0], 1))
												{
													func_843(&(iLocal_1006[iVar0]), iVar21, 0);
												}
												func_853(iVar0, 1090519040);
											}
											else if (((!bLocal_70 || MISC::IS_BIT_SET(iLocal_566[iVar0], 1)) || iLocal_53) || iParam2)
											{
												if (func_836(&(iLocal_1006[iVar0]), iLocal_462[iVar0], fVar15, 1, 0, 0, 1, bLocal_67))
												{
													if (!MISC::IS_BIT_SET(iLocal_566[iVar0], 1))
													{
														func_843(&(iLocal_1006[iVar0]), iVar21, 0);
													}
													ENTITY::SET_ENTITY_COLLISION(iLocal_1006[iVar0], 1, 0);
													VEHICLE::SET_PLAYBACK_SPEED(iLocal_1006[iVar0], fParam1);
													iLocal_668++;
													iLocal_514[iVar0]++;
												}
											}
										}
										else
										{
											if (!MISC::IS_BIT_SET(iLocal_566[iVar0], 1))
											{
												func_843(&(iLocal_1006[iVar0]), iVar21, 0);
											}
											func_853(iVar0, 1090519040);
										}
									}
									else if (fVar15 > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_462[iVar0], &cLocal_916))
									{
										if (!MISC::IS_BIT_SET(iLocal_566[iVar0], 1))
										{
											func_843(&(iLocal_1006[iVar0]), iVar21, 0);
										}
										func_853(iVar0, 1090519040);
									}
								}
								else
								{
									if (!MISC::IS_BIT_SET(iLocal_566[iVar0], 1))
									{
										func_843(&(iLocal_1006[iVar0]), iVar21, 0);
									}
									func_853(iVar0, 1090519040);
								}
							}
							else if (iLocal_50 && !bLocal_58)
							{
								if (!MISC::IS_BIT_SET(iLocal_566[iVar0], 1))
								{
									func_843(&(iLocal_1006[iVar0]), iVar21, 0);
								}
								func_853(iVar0, 1090519040);
							}
						}
						else
						{
							if (!MISC::IS_BIT_SET(iLocal_566[iVar0], 1))
							{
								func_843(&(iLocal_1006[iVar0]), iVar21, 0);
							}
							func_853(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_683 = iVar0;
					}
				}
				else if (iLocal_514[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1006[iVar0], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1006[iVar0]))
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1006[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								if (bVar18)
								{
									bVar24 = false;
									if (!bLocal_48)
									{
										if ((!bLocal_43 && !iLocal_40) && func_842(iLocal_1006[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_682 || iLocal_682 == 0))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iVar5))
												{
													bVar17 = false;
													if (!GlobalFunc_5656(iLocal_1006[iVar0], iVar5) || GlobalFunc_5654(iVar5, iLocal_1006[iVar0], 0))
													{
														bVar24 = true;
													}
												}
												iLocal_682 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_63 && !MISC::IS_BIT_SET(iLocal_566[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_682 || iLocal_682 == 0))
										{
											Var25 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iLocal_1006[iVar0], 1)) };
											if (Var25.f_1 < 0f)
											{
												if (MISC::ABSF(Var25.f_1) > MISC::ABSF(Var25.x))
												{
													bVar24 = true;
												}
											}
											iVar2++;
											iLocal_682 = iVar0;
										}
									}
									if (bVar24)
									{
										func_838(iLocal_1006[iVar0]);
										iLocal_514[iVar0]++;
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_1006[iVar0], fParam1);
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1006[iVar0]);
							}
						}
						else
						{
							iLocal_514[iVar0]++;
						}
					}
					else
					{
						iLocal_514[iVar0]++;
					}
				}
				else if (iLocal_514[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1006[iVar0], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1006[iVar0]))
						{
							iLocal_514[iVar0]++;
						}
						else
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1006[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_1006[iVar0], fParam1);
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1006[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_462[iVar0], &cLocal_916))
							{
								if (fLocal_443 > (fLocal_281[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_462[iVar0], &cLocal_916)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1006[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1006[iVar0]);
							}
						}
					}
					else
					{
						iLocal_514[iVar0]++;
					}
				}
				else if (iLocal_514[iVar0] == 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_1006[iVar0]))
					{
						fVar16 = ENTITY::GET_ENTITY_SPEED(iLocal_1006[iVar0]);
					}
					iLocal_668 = (iLocal_668 - 1);
					func_853(iVar0, fVar16);
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
			iLocal_672 = iVar22;
		}
		if (iVar2 < 3)
		{
			iLocal_682 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_683 = 0;
		}
	}
	else
	{
		func_821();
	}
}


void func_853(int iParam0, float fParam1)//Position - 0x74F57
{
	int iVar0;
	
	if (!iLocal_933[iParam0] == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_933[iParam0]);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_1006[iParam0]))
	{
		ENTITY::SET_ENTITY_COLLISION(iLocal_1006[iParam0], 1, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_1006[iParam0], 0);
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1006[iParam0], -1);
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
			TASK::TASK_VEHICLE_MISSION(iVar0, iLocal_1006[iParam0], 0, 1, fParam1, 786603, 5f, 5f, 1);
			PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
			if (bLocal_72)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, 0);
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar0, fParam1);
		}
	}
	if (!bLocal_41)
	{
		if (!bLocal_69)
		{
			GlobalFunc_2221(iVar0);
			GlobalFunc_2210(iLocal_1006[iParam0]);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::DELETE_PED(&iVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1006[iParam0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_1006[iParam0]));
		}
	}
	if (!bLocal_51 && !bLocal_64)
	{
		if (iLocal_462[iParam0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_462[iParam0], &cLocal_916);
		}
	}
	iLocal_514[iParam0] = 99;
}

void func_854(int iParam0, float fParam1, float fParam2)//Position - 0x750B0
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
			func_846(Var1, Var10, fVar13);
		}
	}
}

void func_855(int iParam0, float fParam1)//Position - 0x75133
{
	if (!bLocal_52)
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

void func_856(int iParam0, float fParam1)//Position - 0x75180
{
	if (!bLocal_52)
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

void func_857(int iParam0, float fParam1)//Position - 0x751CD
{
	var uVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
	{
		fVar1 = (fLocal_457 + 2000f);
		fVar2 = (fLocal_458 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			uVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (fVar1 <= VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(uVar0))
			{
				if (iLocal_678 == 0)
				{
					Local_904 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fLocal_457) };
					iLocal_678++;
				}
				else if (iLocal_678 == 1)
				{
					Local_907 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fVar1) };
					iLocal_678++;
				}
				else if (!bLocal_70)
				{
					if (Local_904.x > Local_907.x)
					{
						fVar3 = Local_904.x;
						Local_904.x = Local_907.x;
						Local_907.x = fVar3;
					}
					if (Local_904.f_1 > Local_907.f_1)
					{
						fVar3 = Local_904.f_1;
						Local_904.f_1 = Local_907.f_1;
						Local_907.f_1 = fVar3;
					}
					if (Local_904.f_2 > Local_907.f_2)
					{
						fVar3 = Local_904.f_2;
						Local_904.f_2 = Local_907.f_2;
						Local_907.f_2 = fVar3;
					}
					Local_904 = { Local_904 - Vector(fLocal_461, fLocal_461, fLocal_461) };
					Local_907 = { Local_907 + Vector(fLocal_461, fLocal_461, fLocal_461) };
					PATHFIND::SET_ROADS_IN_AREA(Local_904, Local_907, 0, 0);
					fLocal_457 = fVar1;
					iLocal_678 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			uVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (iLocal_681 == 0)
			{
				Local_910 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fLocal_458) };
				iLocal_681++;
			}
			else if (iLocal_681 == 1)
			{
				Local_913 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fVar2) };
				iLocal_681++;
			}
			else if (!bLocal_70 && !bVar4)
			{
				if (Local_910.x > Local_913.x)
				{
					fVar3 = Local_910.x;
					Local_910.x = Local_913.x;
					Local_913.x = fVar3;
				}
				if (Local_910.f_1 > Local_913.f_1)
				{
					fVar3 = Local_910.f_1;
					Local_910.f_1 = Local_913.f_1;
					Local_913.f_1 = fVar3;
				}
				if (Local_910.f_2 > Local_913.f_2)
				{
					fVar3 = Local_910.f_2;
					Local_910.f_2 = Local_913.f_2;
					Local_913.f_2 = fVar3;
				}
				Local_910 = { Local_910 - Vector(fLocal_461, fLocal_461, fLocal_461) };
				Local_913 = { Local_913 + Vector(fLocal_461, fLocal_461, fLocal_461) };
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_910, Local_913, 1);
				fLocal_458 = fVar2;
				iLocal_681 = 0;
			}
		}
	}
}


void func_859(float fParam0)//Position - 0x754BB
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
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	
	switch (iLocal_1157)
	{
		case 0:
			fVar0 = 15710f;
			break;
		
		case 1:
			fVar0 = 20500f;
			break;
		
		case 2:
			fVar0 = 24900f;
			break;
		
		case 3:
			fVar0 = 36000f;
			break;
		
		case 4:
			fVar0 = 44100f;
			break;
		
		case 5:
			fVar0 = 50000f;
			break;
		
		case 6:
			fVar0 = 56000f;
			break;
		
		case 7:
			fVar0 = 64000f;
			break;
		
		case 8:
			fVar0 = 67500f;
			break;
		
		case 9:
			fVar0 = 1E+08f;
			break;
	}
	if (fParam0 >= fVar0)
	{
		iLocal_1157++;
	}
	fVar1 = 1f;
	fVar2 = 10f;
	fVar3 = 25f;
	fVar4 = 52f;
	fVar5 = 2.2f;
	fVar6 = 0.6f;
	fVar7 = 0.45f;
	fVar8 = 0.03f;
	switch (iLocal_1157)
	{
		case 0:
			fVar6 = 0.6f;
			fVar7 = 0.6f;
			break;
		
		case 1:
			fVar4 = 110f;
			fVar6 = 0.6f;
			fVar7 = 0.5f;
			break;
		
		case 2:
			break;
		
		case 3:
			fVar2 = 13f;
			fVar3 = 35f;
			break;
		
		case 4:
			fVar2 = 15f;
			fVar3 = 40f;
			break;
		
		case 5:
			break;
		
		case 6:
			break;
		
		case 7:
			break;
		
		case 8:
			if (!PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()) || !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_1366[1], 15f, 15f, 15f, 0, 0, 0))
			{
				fVar2 = 12f;
				fVar3 = 28f;
			}
			else
			{
				fVar2 = 22f;
				fVar3 = 28f;
				fVar5 = 2.5f;
				fVar8 = 0.1f;
			}
			break;
		
		case 9:
			if (iLocal_1521)
			{
				Var9 = { ENTITY::GET_ENTITY_COORDS(uLocal_1366[1], 1) };
				Var12 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_1366[1], 8f, 8f, 8f, 0, 0, 0) || Var12.f_1 > (Var9.f_1 - 3f))
				{
					fVar2 = 260f;
					fVar3 = 300f;
					fVar4 = 550f;
					fVar6 = 1f;
					fVar7 = 1f;
					fVar5 = 2.5f;
					fVar8 = 0.2f;
				}
				else
				{
					fVar2 = 8f;
					fVar3 = 12f;
					fVar4 = 18f;
					fVar6 = 0.85f;
					fVar7 = 0.7f;
				}
			}
			else
			{
				fVar2 = 0.9f;
				fVar3 = 1f;
				fVar4 = 2f;
				fVar6 = 0.05f;
				fVar7 = 0.05f;
			}
			break;
	}
	Var15 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uLocal_1366[1], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) };
	if (iLocal_1157 == 3 || iLocal_1157 == 4)
	{
		if (((Var15.x < -60f || Var15.x > 60f) || Var15.f_1 > 0f) && Var15.f_1 > -130f)
		{
			fVar2 = 260f;
			fVar3 = 300f;
			fVar4 = 550f;
			fVar6 = 1f;
			fVar7 = 1f;
			fVar5 = 2.5f;
			fVar8 = 0.1f;
		}
	}
	if (fParam0 >= 8000f)
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_1366[0], 0) || fParam0 < 22000f)
		{
			func_861(&fLocal_1746, &(uLocal_1366[0]), uLocal_1366[1], fVar2, fVar3, fVar4, 1120403456, 1106247680, fVar1, fVar6, fVar7, fVar5, 1, 0, 1097859072, 1);
		}
		else
		{
			fLocal_1746 = 0.75f;
		}
		GlobalFunc_2514(&fLocal_1745, fLocal_1746, fVar8);
	}
	else
	{
		fLocal_1745 = 1f;
	}
}


void func_861(float fParam0, var uParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, float fParam13, float fParam14, int iParam15)//Position - 0x75899
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





















void func_882()//Position - 0x7682C
{
	if (iLocal_1108 >= 1 || iLocal_1339 >= 1)
	{
		func_684(11);
		func_684(9);
	}
}

void func_883()//Position - 0x76853
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	bool bVar3;
	struct<3> Var4;
	float fVar7;
	struct<3> Var8;
	struct<3> Var11;
	float fVar14;
	struct<6> Var15;
	char* sVar21;
	int iVar22;
	bool bVar23;
	float fVar24;
	struct<3> Var25;
	struct<3> Var28;
	bool bVar31;
	bool bVar32;
	
	if (!bLocal_1470)
	{
		func_891();
	}
	if (!iLocal_1471)
	{
		PAD::DISABLE_CONTROL_ACTION(2, 18, 1);
		switch (iLocal_1334)
		{
			case 0:
				func_684(7);
				iLocal_1334 = 1;
				break;
			
			case 1:
				if (func_683())
				{
					func_421(0, func_79(0), 210.17f, 1, 1, 0);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uLocal_1366[0], 0);
					iLocal_1334 = 2;
					iLocal_1800 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case 2:
				if (!iLocal_1615)
				{
					if (!iLocal_1493)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_1800 + 2000)
						{
							ENTITY::FREEZE_ENTITY_POSITION(uLocal_1366[0], 1);
							iLocal_1615 = 1;
						}
					}
				}
				break;
		}
		if (bLocal_1470)
		{
			if (!iLocal_1650)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_1366[0], 0))
					{
						ENTITY::SET_ENTITY_COORDS(uLocal_1366[0], func_79(2), 1, 0, 0, 1);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uLocal_1366[0], 1);
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_1366[0], -1);
						PED::SET_PED_INTO_VEHICLE(iLocal_1351, uLocal_1366[0], 0);
						func_689(iLocal_1352, uLocal_1366[0], &uLocal_1345, &uLocal_1750, 0, 1, 1, 0, 0, 0, 0, 0);
						ENTITY::SET_ENTITY_PROOFS(iLocal_1352, 0, 1, 1, 0, 0, 0, 0, 1);
						PED::SET_PED_CAN_RAGDOLL(iLocal_1352, 0);
						TASK::TASK_CLEAR_LOOK_AT(iLocal_1351);
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_1351, uLocal_1366[0], 1);
						iLocal_1619 = 1;
						ENTITY::FREEZE_ENTITY_POSITION(uLocal_1366[0], 0);
						SYSTEM::WAIT(0);
						iLocal_1338 = 4;
						iLocal_1493 = 1;
						bLocal_1474 = true;
						iLocal_1650 = 1;
					}
				}
			}
		}
		switch (iLocal_1335)
		{
			case 0:
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_79(10), 700f, 700f, 700f, 0, 0, 0))
				{
					func_684(2);
					iLocal_1840 = MISC::GET_GAME_TIMER() + 2000;
					iLocal_1335 = 1;
				}
				break;
			
			case 1:
				if (MISC::GET_GAME_TIMER() >= iLocal_1840 && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_79(10), 600f, 600f, 600f, 0, 0, 0))
				{
					func_684(5);
					iLocal_1840 = MISC::GET_GAME_TIMER() + 2000;
					iLocal_1335 = 2;
				}
				break;
			
			case 2:
				if (MISC::GET_GAME_TIMER() >= iLocal_1840 && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_79(10), 500f, 500f, 500f, 0, 0, 0))
				{
					func_684(8);
					iLocal_1335 = 3;
				}
				break;
			
			case 3:
				if (func_683())
				{
					func_420(0);
					iLocal_1335 = 4;
				}
				break;
			
			case 4:
				func_362(0);
				iLocal_1335 = 5;
				break;
			
			case 5:
				if (iLocal_1105 == 0)
				{
					if (!PED::IS_PED_INJURED(iLocal_1353) && !PED::IS_PED_INJURED(Local_1158))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1353, 264387021) == 7)
						{
							TASK::TASK_CHAT_TO_PED(iLocal_1353, Local_1158, 1, 0f, 0f, 0f, 0f, 0f);
						}
					}
				}
				break;
		}
		if (!bLocal_1470)
		{
			switch (iLocal_1336)
			{
				case 0:
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 335.2193f, 338.3544f, 104.2006f, 900f, 900f, 900f, 0, 0, 0))
					{
						func_684(16);
						iLocal_1841 = MISC::GET_GAME_TIMER() + 2000;
						iLocal_1336 = 1;
					}
					break;
				
				case 1:
					if (MISC::GET_GAME_TIMER() >= iLocal_1841 && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 335.2193f, 338.3544f, 104.2006f, 800f, 800f, 800f, 0, 0, 0))
					{
						func_684(17);
						iLocal_1336 = 2;
					}
					break;
				
				case 2:
					if (func_683())
					{
						func_890();
						iLocal_1336 = 3;
					}
					break;
				
				case 3:
					break;
				}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_1366[0], 0))
			{
				if (iLocal_1338 < 4)
				{
					PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
				}
			}
		}
		if (!bLocal_1470)
		{
			if (!PED::IS_PED_INJURED(iLocal_1352))
			{
				if (!iLocal_1625)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_1813)
					{
						AUDIO::STOP_PED_SPEAKING(iLocal_1352, 0);
						AUDIO::PLAY_ANIMAL_VOCALIZATION(iLocal_1352, 3, "BARK");
						AUDIO::STOP_PED_SPEAKING(iLocal_1352, 1);
						iLocal_1813 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(300, 800));
					}
					if (MISC::GET_GAME_TIMER() >= iLocal_1812)
					{
						AUDIO::STOP_PED_SPEAKING(iLocal_1352, 0);
						iLocal_1625 = 1;
					}
				}
			}
		}
		if (!bLocal_1470)
		{
			bVar0 = false;
			if (!PED::IS_PED_INJURED(Local_1158))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1158, PLAYER::PLAYER_PED_ID(), 1) || GlobalFunc_156(Local_1158, PLAYER::PLAYER_PED_ID(), 0) < 5f)
				{
					bVar0 = true;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1353))
			{
				if (!PED::IS_PED_INJURED(iLocal_1353))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1353, PLAYER::PLAYER_PED_ID(), 1))
					{
						bVar0 = true;
					}
				}
				else
				{
					bVar0 = true;
				}
			}
			if ((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 385.48f, 354.65f, 101.4f, 386.54f, 360.31f, 104.71f, 23.5f, 0, 1, 0) || PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), 361.21f, 334.32f, 95f, 435.91f, 351.51f, 113f, 0, 1)) || MISC::IS_SNIPER_BULLET_IN_AREA(func_79(10) - Vector(5f, 5f, 5f), func_79(10) + Vector(5f, 5f, 5f))) || MISC::IS_BULLET_IN_AREA(func_79(10), 5f, 1)) || FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(func_79(10), 18.8f) > 0)
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				if (!iLocal_1498)
				{
					if (!PED::IS_PED_INJURED(Local_1158))
					{
						WEAPON::GIVE_WEAPON_TO_PED(Local_1158, func_368(0), -1, 0, 1);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_1843);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_1843);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_1843);
						TASK::TASK_PERFORM_SEQUENCE(Local_1158, uLocal_1843);
					}
					if (!PED::IS_PED_INJURED(iLocal_1353))
					{
						TASK::TASK_COWER(iLocal_1353, -1);
					}
					iLocal_1498 = 1;
				}
				func_712(6);
			}
		}
		if (iLocal_1493)
		{
			if (iLocal_1335 == 5)
			{
				func_71("fra_0_mcs_1", func_79(2), (100f - 5f), (120f - 10f));
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1351, 20f, 20f, 4f, 0, 1, 0))
				{
					if (!bLocal_1603)
					{
						bLocal_1603 = func_239("FC_WANTBEF", 0, 0, 0, 1);
					}
				}
			}
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				if (!PED::IS_PED_INJURED(iLocal_1351))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Lamar", iLocal_1351, 0);
				}
				if (!PED::IS_PED_INJURED(Local_1158))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Ballas_OG", Local_1158, 0);
					CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Ballas_OG", 0, 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_1353))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Hoodrat_girl", iLocal_1353, 0);
				}
			}
			func_61(iLocal_1352, uLocal_1366[0], &uLocal_1345, &uLocal_1750, &uLocal_1821, &uLocal_1822, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0) && !PED::IS_PED_INJURED(iLocal_1351))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_1366[0], 0) && PED::IS_PED_IN_VEHICLE(iLocal_1351, uLocal_1366[0], 0))
				{
					if (!bLocal_1470)
					{
						if (iLocal_1201 == 2)
						{
							func_243(2);
						}
						else
						{
							func_243(1);
						}
					}
					iVar1 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					if (iVar1 == 0)
					{
						if (!bLocal_1470)
						{
							if (!iLocal_1599)
							{
								iLocal_1599 = func_239("FKN0_GOVINE", 0, 0, 0, 1);
							}
							else if (iLocal_1475)
							{
								if (!iLocal_1668)
								{
									if ((iLocal_1760 % 2) == 0)
									{
										iLocal_1668 = func_239("FKN0_CHOP", 0, 0, 0, 1);
									}
									else
									{
										iLocal_1668 = 1;
									}
								}
								else if (!bLocal_1477)
								{
									if ((iLocal_1760 % 2) == 0)
									{
										if (GlobalFunc_230(2))
										{
											sVar2 = "FKN0_WALK";
										}
										else
										{
											sVar2 = "FKN0_NOARM2";
										}
									}
									else if (GlobalFunc_230(2))
									{
										sVar2 = "FKN0_B1AV1";
									}
									else
									{
										sVar2 = "FKN0_B1AV2";
									}
									bLocal_1477 = func_239(sVar2, 0, 0, 0, 1);
								}
								else if (iLocal_1478)
								{
									if (!bLocal_1482 && !bLocal_1474)
									{
										if (func_221())
										{
											iLocal_1478 = 0;
										}
									}
								}
								else
								{
									if (!iLocal_1496)
									{
										if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 368.27f, 355.67f, 101.96f, 15f, 15f, 2f, 0, 1, 0))
										{
											if (!iLocal_1481)
											{
												GlobalFunc_4935();
												iLocal_1481 = 1;
											}
											else
											{
												iLocal_1496 = func_239("FKN0_CREEP", 0, 0, 0, 1);
											}
										}
									}
									if (!iLocal_1495 || !iLocal_1497)
									{
										if (GlobalFunc_111())
										{
											iLocal_1777 = -1;
										}
										else if (iLocal_1777 < 0)
										{
											iLocal_1777 = MISC::GET_GAME_TIMER();
										}
										else if (MISC::GET_GAME_TIMER() >= iLocal_1777 + 3000 && !bLocal_1474)
										{
											bVar3 = false;
											if (!iLocal_1497)
											{
												if (iLocal_1349 == 0 || iLocal_1349 == 4)
												{
													Var4 = { ENTITY::GET_ENTITY_ROTATION(uLocal_1366[0], 2) };
													fVar7 = ENTITY::GET_ENTITY_SPEED(uLocal_1366[0]);
													if (Var4.x >= 9f)
													{
														if (fVar7 <= 21f && fVar7 >= 4f)
														{
															if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uLocal_1366[0]))
															{
																if (func_239("FC_UPHILL", 0, 0, 0, 1))
																{
																	iLocal_1497 = 1;
																	bVar3 = true;
																}
															}
														}
													}
												}
											}
											if (!bVar3)
											{
												switch (iLocal_1349)
												{
													case 0:
														switch (iLocal_1201)
														{
															case 1:
																iLocal_1349 = 1;
																break;
															
															case 2:
																iLocal_1349 = 2;
																iLocal_1812 = MISC::GET_GAME_TIMER() + 6000;
																break;
															
															case 0:
																iLocal_1349 = 4;
																break;
														}
														break;
													
													case 1:
														if (func_239("FC_CBEHAVE", 0, 0, 0, 1))
														{
															iLocal_1349 = 4;
														}
														break;
													
													case 2:
														if (MISC::GET_GAME_TIMER() >= iLocal_1813)
														{
															AUDIO::STOP_PED_SPEAKING(iLocal_1352, 0);
															if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
															{
																AUDIO::PLAY_ANIMAL_VOCALIZATION(iLocal_1352, 3, "BARK");
															}
															else
															{
																AUDIO::PLAY_ANIMAL_VOCALIZATION(iLocal_1352, 3, "BARK_SEQ");
															}
															AUDIO::STOP_PED_SPEAKING(iLocal_1352, 1);
															iLocal_1813 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(200, 1000));
														}
														if (MISC::GET_GAME_TIMER() >= iLocal_1812)
														{
															AUDIO::STOP_PED_SPEAKING(iLocal_1352, 0);
															iLocal_1349 = 3;
														}
														break;
													
													case 3:
														if (func_239("FC_CMBEHAVE", 0, 0, 0, 1))
														{
															iLocal_1349 = 4;
														}
														break;
													}
												}
											}
										}
									}
								}
						}
						if (!bLocal_1470)
						{
							if (!iLocal_1494)
							{
								if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_79(2), 50f, 50f, 4f, 0, 1, 0))
								{
									if (!iLocal_1481)
									{
										GlobalFunc_4935();
										iLocal_1481 = 1;
									}
									else if ((iLocal_1760 % 2) == 0)
									{
										iLocal_1494 = func_239("FC_INALLEY", 0, 0, 0, 1);
										if (iLocal_1494)
										{
											RECORDING::_0x293220DA1B46CEBC(3f, 3f, 3);
										}
									}
									else
									{
										iLocal_1494 = func_239("FKN0_ALLEY", 0, 0, 0, 1);
										if (iLocal_1494)
										{
											RECORDING::_0x293220DA1B46CEBC(3f, 3f, 3);
										}
									}
								}
							}
						}
					}
					if (!bLocal_1474)
					{
						if (iVar1 == 0)
						{
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_79(2), 5f, 5f, 2f, 1, 1, 0))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_1366[0]))
								{
									if (GlobalFunc_552(1, 0, 1))
									{
										GlobalFunc_702(1, 0, 1);
										func_219();
										GlobalFunc_3001();
										iLocal_1763 = MISC::GET_GAME_TIMER();
										bLocal_1474 = true;
									}
								}
							}
						}
					}
					else
					{
						GlobalFunc_3001();
						if (GlobalFunc_530(uLocal_1366[0], 6f, 1, 1056964608, 0, 1))
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_1763 + 1000)
							{
								if (!iLocal_1660)
								{
									if (MISC::GET_GAME_TIMER() >= iLocal_1763 + 3000)
									{
										iLocal_1481 = 1;
										iLocal_1494 = 1;
										iLocal_1495 = 1;
										iLocal_1497 = 1;
										iLocal_1496 = 1;
										GlobalFunc_4935();
										iLocal_1660 = 1;
									}
								}
								if (!GlobalFunc_111())
								{
									if (func_203())
									{
										if (iLocal_1109 > 0)
										{
											if (GlobalFunc_Has_Cutscene_Loaded())
											{
												iLocal_1471 = 1;
											}
										}
									}
								}
								else
								{
									if (Global_15692 != 0)
									{
									}
									if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
									{
									}
								}
							}
						}
					}
				}
				if (!bLocal_1474)
				{
					func_223(1, 0, 1, 1);
					func_827();
				}
			}
		}
		else
		{
			func_243(0);
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			if (iLocal_1835 < 0)
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					iLocal_1835 = MISC::GET_GAME_TIMER();
				}
			}
			else if (MISC::GET_GAME_TIMER() >= iLocal_1835 + 2000)
			{
				func_712(11);
			}
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_1366[0]))
				{
					if (ENTITY::IS_ENTITY_DEAD(uLocal_1366[0]) || !ENTITY::IS_ENTITY_DEAD(uLocal_1366[0]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uLocal_1366[0], 0);
					}
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_1351))
			{
				if (MISC::GET_GAME_TIMER() <= iLocal_1767 + 1500)
				{
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_1351, 1f);
				}
				if (MISC::GET_GAME_TIMER() <= iLocal_1767 + 2000)
				{
					if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
					{
						PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					}
				}
				else if (!iLocal_1499)
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					iLocal_1499 = 1;
				}
				if (MISC::GET_GAME_TIMER() < iLocal_1839)
				{
					PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
				}
				Var8 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				Var11 = { ENTITY::GET_ENTITY_COORDS(iLocal_1351, 1) };
				if (!bLocal_1491)
				{
					if (iLocal_1338 == 0)
					{
						fVar14 = (Var11.x - Var8.x);
						if (fVar14 > 0f)
						{
							fLocal_1748 = (fLocal_1748 + (0.06f * SYSTEM::TIMESTEP()));
						}
						else if (fVar14 < -1.2f)
						{
							fLocal_1748 = (fLocal_1748 - (0.06f * SYSTEM::TIMESTEP()));
						}
						else if (fLocal_1748 > 1f)
						{
							fLocal_1748 = (fLocal_1748 - (0.06f * SYSTEM::TIMESTEP()));
							if (fLocal_1748 < 1f)
							{
								fLocal_1748 = 1f;
							}
						}
						else if (fLocal_1748 < 1f)
						{
							fLocal_1748 = (fLocal_1748 + (0.06f * SYSTEM::TIMESTEP()));
							if (fLocal_1748 > 1f)
							{
								fLocal_1748 = 1f;
							}
						}
						if (fLocal_1748 > 1.1f)
						{
							fLocal_1748 = 1.1f;
						}
						else if (fLocal_1748 < 0.8f)
						{
							fLocal_1748 = 0.8f;
						}
					}
					else if (fLocal_1748 > 1f)
					{
						fLocal_1748 = (fLocal_1748 - (0.1f * SYSTEM::TIMESTEP()));
						if (fLocal_1748 < 1f)
						{
							fLocal_1748 = 1f;
						}
					}
					else if (fLocal_1748 < 1f)
					{
						fLocal_1748 = (fLocal_1748 + (0.1f * SYSTEM::TIMESTEP()));
						if (fLocal_1748 > 1f)
						{
							fLocal_1748 = 1f;
						}
					}
					PED::SET_PED_MOVE_RATE_OVERRIDE(iLocal_1351, fLocal_1748);
					if (ENTITY::GET_ENTITY_SPEED(iLocal_1351) < 0.1f)
					{
						fLocal_1752 = (fLocal_1752 + (1f * SYSTEM::TIMESTEP()));
					}
					else
					{
						fLocal_1752 = (fLocal_1752 - (1f * SYSTEM::TIMESTEP()));
						if (fLocal_1752 < 0f)
						{
							fLocal_1752 = 0f;
						}
					}
				}
				else
				{
					fLocal_1752 = (fLocal_1752 - (2f * SYSTEM::TIMESTEP()));
					if (fLocal_1752 < 0f)
					{
						fLocal_1752 = 0f;
					}
				}
				if (iLocal_1334 < 2)
				{
					PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
					if (!PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
					{
						PAD::DISABLE_CONTROL_ACTION(0, 36, 1);
					}
					if (!iLocal_1487)
					{
						GlobalFunc_7632(1);
						iLocal_1487 = 1;
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0))
				{
					if (!iLocal_1493)
					{
						if (!iLocal_1475)
						{
							iLocal_1475 = 1;
						}
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1351, 3.6f, (3.6f + 1.5f), 4f, 0, 1, 0) && !iLocal_1619)
						{
							PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
							PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
							PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
							PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
							PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
							if (!PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
							{
								PAD::DISABLE_CONTROL_ACTION(0, 36, 1);
							}
							if (!iLocal_1487)
							{
								GlobalFunc_7632(1);
								iLocal_1487 = 1;
							}
						}
						else if (iLocal_1487)
						{
							GlobalFunc_7632(0);
							iLocal_1487 = 0;
						}
						if (ENTITY::GET_ENTITY_SPEED(iLocal_1351) < 1.2f && TASK::GET_SCRIPT_TASK_STATUS(iLocal_1351, -1689270312) == 7)
						{
							TASK::CLEAR_PED_SECONDARY_TASK(iLocal_1351);
						}
						if (iLocal_1338 == 0)
						{
							if (!PED::IS_PED_HEADTRACKING_ENTITY(iLocal_1351, PLAYER::PLAYER_PED_ID()))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_1351, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
							}
							if (!bLocal_1491)
							{
								if (!bLocal_1620)
								{
									if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_1351, uLocal_1366[0], 11f, 11f, 4f, 0, 1, 0))
									{
										GlobalFunc_4935();
										bLocal_1620 = true;
									}
								}
								if ((!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1351, 3.6f, 3.6f, 4f, 0, 1, 0) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && MISC::GET_GAME_TIMER() >= iLocal_1767 + 3000)
								{
									if (Var8.x > Var11.x || iLocal_1636)
									{
										if (!func_889())
										{
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_1843);
											TASK::OPEN_SEQUENCE_TASK(&uLocal_1843);
											TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
											TASK::CLOSE_SEQUENCE_TASK(uLocal_1843);
											TASK::TASK_PERFORM_SEQUENCE(iLocal_1351, uLocal_1843);
											TASK::CLEAR_PED_SECONDARY_TASK(iLocal_1351);
											TASK::CLEAR_PED_SECONDARY_TASK(PLAYER::PLAYER_PED_ID());
											TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
											iLocal_1488 = 0;
											iLocal_1485 = 0;
											bLocal_1491 = true;
										}
									}
									else
									{
										if (bLocal_1477)
										{
											if (!iLocal_1488)
											{
												if (!func_224())
												{
													if (!iLocal_1697)
													{
														bLocal_1477 = false;
													}
												}
												GlobalFunc_4935();
												iLocal_1488 = 1;
											}
										}
										bLocal_1637 = true;
									}
								}
								else
								{
									bLocal_1637 = false;
									if (!PED::IS_PED_HEADTRACKING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1351))
									{
										TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1351, -1, 2048, 2);
									}
									if (iLocal_1475)
									{
										if (func_203() && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
										{
											if (!bLocal_1477)
											{
												if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1351, 3.2f, 3.2f, 4f, 0, 1, 0) && iLocal_1625)
												{
													if (GlobalFunc_663("FC_FOLLAM", 0, 0))
													{
														GlobalFunc_7206(0, 1, 0, 0);
													}
													bLocal_1477 = func_239("FKN0_WALK2", 0, 0, 0, 1);
												}
											}
											else if (iLocal_1478)
											{
												if (!bLocal_1482 && !bLocal_1620)
												{
													if (func_221())
													{
														iLocal_1478 = 0;
													}
												}
											}
										}
									}
									if (!iLocal_1697)
									{
										if (GlobalFunc_111() && bLocal_1477)
										{
											Var15 = { GlobalFunc_2209() };
											if (MISC::ARE_STRINGS_EQUAL(&Var15, "FKN0_WALK2_1"))
											{
												iLocal_1697 = 1;
											}
										}
									}
								}
							}
							else
							{
								if (bLocal_1477)
								{
									if (!iLocal_1488)
									{
										func_224();
										GlobalFunc_4935();
										iLocal_1488 = 1;
									}
								}
								if (!iLocal_1485)
								{
									if (func_203())
									{
										if (((iLocal_1488 || !bLocal_1477) && !bLocal_1637) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
										{
											if (MISC::GET_GAME_TIMER() >= iLocal_1768)
											{
												if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1351, 15f, 15f, 15f, 0, 0, 0))
												{
													if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) >= 1.2f && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_1351, 45f))
													{
														sVar21 = "FKN0_LFOL2";
													}
													else
													{
														sVar21 = "FKN0_LFOL1";
													}
													if (func_239(sVar21, 0, 0, 0, 1))
													{
														iLocal_1485 = 1;
														iLocal_1768 = MISC::GET_GAME_TIMER() + 10000;
													}
												}
												else
												{
													iLocal_1485 = 1;
												}
											}
										}
									}
								}
								else if (!bLocal_1486)
								{
									bLocal_1486 = func_201("FC_FOLLAM", 1, 0, 7500);
								}
								if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1351, 3.2f, 3.2f, 4f, 0, 1, 0) || Var8.x < Var11.x) && (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || Var8.x < Var11.x))
								{
									if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1351, 3.2f, 3.2f, 4f, 0, 1, 0) || func_889()) || !iLocal_1636)
									{
										func_261();
										iLocal_1488 = 0;
										bLocal_1491 = false;
									}
								}
							}
							if (!PED::IS_PED_INJURED(iLocal_1352))
							{
								if (MISC::GET_GAME_TIMER() <= iLocal_1767 + 2000)
								{
									PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_1352, 1f);
								}
								if (ENTITY::GET_ENTITY_SPEED(iLocal_1351) >= 0.3f)
								{
									fLocal_1842 = 0f;
								}
								else
								{
									fLocal_1842 = (fLocal_1842 + (1f * SYSTEM::TIMESTEP()));
								}
								if ((fLocal_1842 < 0.6f && !bLocal_1491) || iLocal_1675)
								{
									if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_1352, -2015108952) == 7 && func_701(1)) && MISC::GET_GAME_TIMER() >= iLocal_1832 + 2000)
									{
										func_258();
										iLocal_1832 = MISC::GET_GAME_TIMER();
									}
								}
								else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1352, -2015108952) != 7 && MISC::GET_GAME_TIMER() >= iLocal_1832 + 2000)
								{
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_1843);
									TASK::OPEN_SEQUENCE_TASK(&uLocal_1843);
									if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_1352, iLocal_1351, 6f, 6f, 6f, 0, 0, 0))
									{
										TASK::TASK_GO_TO_ENTITY(0, iLocal_1351, -1, 1.8f, 2f, 1073741824, 0);
									}
									else if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_1352, iLocal_1351, 3f, 3f, 3f, 0, 0, 0))
									{
										TASK::TASK_GO_TO_ENTITY(0, iLocal_1351, -1, 1.6f, 1f, 1073741824, 0);
									}
									TASK::TASK_PAUSE(0, 1000);
									TASK::TASK_PLAY_ANIM(0, func_198(0), "FRA0_IG_12_CHOP_WAITING_B", 4f, -2f, -1, 1, 0, 0, 0, 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_1843);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_1352, uLocal_1843);
									iLocal_1832 = MISC::GET_GAME_TIMER();
								}
							}
						}
						else if (!iLocal_1619)
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1351, 15f, 15f, 15f, 0, 0, 0))
							{
								iLocal_1619 = func_239("FKN0_DRIVE", 0, 0, 0, 1);
							}
							else
							{
								iLocal_1619 = 1;
							}
						}
						else
						{
							func_223(0, iLocal_1638, 0, iLocal_1638);
						}
						switch (iLocal_1338)
						{
							case 0:
								if ((VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0) && !PED::IS_PED_INJURED(iLocal_1351)) && !PED::IS_PED_INJURED(iLocal_1352))
								{
									PED::SET_PED_GESTURE_GROUP(PLAYER::PLAYER_PED_ID(), "ANIM_GROUP_GESTURE_MISS_FRA0");
									PED::SET_PED_GESTURE_GROUP(iLocal_1351, "ANIM_GROUP_GESTURE_MISS_FRA0");
									if (!iLocal_1675)
									{
										if (fLocal_1752 >= 10f)
										{
											TASK::CLEAR_PED_TASKS(iLocal_1351);
											ENTITY::SET_ENTITY_COORDS(iLocal_1351, -77.0374f, -1461.031f, 31.12035f, 1, 0, 0, 1);
											ENTITY::SET_ENTITY_HEADING(iLocal_1351, 46.7f);
											iLocal_1675 = 1;
										}
									}
									if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_1351, uLocal_1366[0], 7f, 7f, 2f, 0, 1, 0) && !bLocal_1491)
									{
										if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1351, 3.6f, 3.6f, 4f, 0, 1, 0) && !func_889())
										{
											iLocal_1636 = 1;
										}
										else
										{
											TASK::TASK_LOOK_AT_ENTITY(iLocal_1351, iLocal_1352, -1, 2048, 2);
											TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
											GlobalFunc_4935();
											VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uLocal_1366[0], 1);
											if (HUD::DOES_BLIP_EXIST(uLocal_1388))
											{
												HUD::REMOVE_BLIP(&uLocal_1388);
											}
											iLocal_1478 = 0;
											if (ENTITY::IS_ENTITY_AT_COORD(iLocal_1352, -72.67596f, -1459.41f, 31.11492f, 7f, 7f, 7f, 0, 0, 0))
											{
												iVar22 = 261;
											}
											else
											{
												iVar22 = 263;
											}
											TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_1352, "hood12", 2, iVar22, -1);
											iLocal_1831 = MISC::GET_GAME_TIMER() + 30000;
											iLocal_1338 = 2;
										}
									}
									else if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_1352, iLocal_1351, 1.1f, 1.1f, 1.1f, 0, 0, 0))
									{
										PED::SET_PED_MOVE_RATE_OVERRIDE(iLocal_1352, 1.01f);
									}
									else if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_1352, iLocal_1351, 1.8f, 1.8f, 1.8f, 0, 0, 0))
									{
										PED::SET_PED_MOVE_RATE_OVERRIDE(iLocal_1352, 1.06f);
									}
									else if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_1352, iLocal_1351, 7f, 7f, 7f, 0, 0, 0))
									{
										if (ENTITY::GET_ENTITY_SPEED(iLocal_1352) >= 1f)
										{
											if (MISC::GET_GAME_TIMER() >= iLocal_1767 + 2000)
											{
												PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_1352, 1.5f);
												PED::SET_PED_MOVE_RATE_OVERRIDE(iLocal_1352, 1.06f);
											}
										}
									}
									else
									{
										PED::SET_PED_MOVE_RATE_OVERRIDE(iLocal_1352, 1.1f);
									}
								}
								break;
							
							case 2:
								if ((VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0) && !PED::IS_PED_INJURED(iLocal_1351)) && !PED::IS_PED_INJURED(iLocal_1352))
								{
									PED::SET_PED_MOVE_RATE_OVERRIDE(iLocal_1351, 1f);
									PED::SET_PED_MOVE_RATE_OVERRIDE(iLocal_1352, 1.15f);
									if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_1352))
									{
										TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_1352, 1f, 0);
										TASK::SET_PED_WAYPOINT_ROUTE_OFFSET(iLocal_1352, 0f, 0.2f, 0f);
									}
									if (ENTITY::IS_ENTITY_AT_COORD(iLocal_1351, -79.15181f, -1454.355f, 31.02351f, 2.5f, 2.5f, 2.5f, 0, 0, 0))
									{
										PED::SET_PED_RESET_FLAG(iLocal_1351, 71, 1);
										PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_1351, 0);
									}
									if (ENTITY::IS_ENTITY_AT_COORD(iLocal_1352, -79.15181f, -1454.355f, 31.02351f, 2.5f, 2.5f, 2.5f, 0, 0, 0))
									{
										PED::SET_PED_RESET_FLAG(iLocal_1352, 71, 1);
										PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_1352, 0);
									}
									bVar23 = false;
									if (MISC::GET_GAME_TIMER() >= iLocal_1831)
									{
										bVar23 = true;
									}
									else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1351, -1689270312) == 7 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_1352, -1689270312) == 7)
									{
										if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_1351, -79.51687f, -1453.277f, 31.12119f, 1f, 1f, 1f, 0, 0, 0) || !ENTITY::IS_ENTITY_AT_COORD(iLocal_1351, -79.0829f, -1453.59f, 31.53415f, 1f, 1f, 1f, 0, 0, 0))
										{
											bVar23 = true;
										}
									}
									if (bVar23)
									{
										func_689(iLocal_1352, uLocal_1366[0], &uLocal_1345, &uLocal_1750, 0, 1, 1, 0, 0, 0, 0, 0);
										ENTITY::SET_ENTITY_PROOFS(iLocal_1352, 0, 1, 1, 0, 0, 0, 0, 1);
										PED::SET_PED_CAN_RAGDOLL(iLocal_1352, 0);
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_1351);
										TASK::TASK_CLEAR_LOOK_AT(iLocal_1351);
										PED::SET_PED_INTO_VEHICLE(iLocal_1351, uLocal_1366[0], 0);
										iLocal_1638 = 1;
										iLocal_1694 = 1;
										iLocal_1492 = 1;
										bLocal_1667 = true;
										iLocal_1338 = 4;
									}
									else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1351, -1689270312) == 7 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_1352, -1689270312) == 7)
									{
										Local_1715 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_1351, -1.99f, 3.21f, -0.242f) };
										Local_1721 = { 0f, 0f, (ENTITY::GET_ENTITY_HEADING(iLocal_1351) + 36.655f) };
										Local_1718 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_1352, -2.596f, 1.97f, 0.332f) };
										Local_1724 = { 0f, 0f, (ENTITY::GET_ENTITY_HEADING(iLocal_1352) + 60.546f) };
										func_797(&Local_1721, ENTITY::GET_ENTITY_ROTATION(uLocal_1366[0], 2));
										func_797(&Local_1724, ENTITY::GET_ENTITY_ROTATION(uLocal_1366[0], 2));
										TASK::TASK_CLEAR_LOOK_AT(iLocal_1351);
										uLocal_1791 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1715, Local_1721, 2);
										PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_1791, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(iLocal_1351, iLocal_1791, func_198(1), "put_chop_in_van_lam", 8f, -8f, 5, 146, 1148846080, 0);
										Local_1170.f_9 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1718, Local_1724, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(iLocal_1352, Local_1170.f_9, func_198(1), "put_chop_in_van_chop", 8f, -2f, 5, 146, 1148846080, 0);
										PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(Local_1170.f_9, 0);
										ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_1352, uLocal_1366[0], 0);
										ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_1351, uLocal_1366[0], 0);
										ENTITY::PLAY_ENTITY_ANIM(uLocal_1366[0], "put_chop_in_van_van", func_198(1), 8f, 0, 0, 0, 0f, 262144);
										iLocal_1338 = 3;
									}
								}
								break;
							
							case 3:
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_1366[0], func_198(1), "put_chop_in_van_van", 3))
								{
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_1170.f_9))
									{
										ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(uLocal_1366[0], func_198(1), "put_chop_in_van_van", PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1170.f_9));
									}
									fVar24 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_1366[0], func_198(1), "put_chop_in_van_van");
									switch (iLocal_1818)
									{
										case 0:
											if (fVar24 >= 0.113f)
											{
												AUDIO::PLAY_VEHICLE_DOOR_OPEN_SOUND(uLocal_1366[0], 3);
												iLocal_1818++;
											}
											break;
										
										case 1:
											if (fVar24 >= 0.68f)
											{
												iLocal_1818++;
											}
											break;
										}
								}
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_1170.f_9))
								{
									Var25 = { ENTITY::GET_ENTITY_COORDS(uLocal_1366[0], 1) };
									Var28 = { ENTITY::GET_ENTITY_ROTATION(uLocal_1366[0], 2) };
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1791))
									{
										GlobalFunc_5915(&Local_1715, Var25, (1f / 3f));
										GlobalFunc_5915(&Local_1721, Var28, (20f / 3f));
										PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iLocal_1791, Local_1715, Local_1721, 2);
									}
									GlobalFunc_5915(&Local_1718, Var25, (1f / 4f));
									GlobalFunc_5915(&Local_1724, Var28, (20f / 4f));
									PED::SET_SYNCHRONIZED_SCENE_ORIGIN(Local_1170.f_9, Local_1718, Local_1724, 2);
									func_888();
								}
								else
								{
									func_689(iLocal_1352, uLocal_1366[0], &uLocal_1345, &uLocal_1750, 0, 0, 1, 0, 0, 0, 0, 0);
									ENTITY::SET_ENTITY_PROOFS(iLocal_1352, 0, 1, 1, 0, 0, 0, 0, 1);
									PED::SET_PED_CAN_RAGDOLL(iLocal_1352, 0);
									iLocal_1338 = 4;
								}
								break;
							
							case 4:
								if (!bLocal_1667)
								{
									func_888();
									PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_1351, 1);
								}
								break;
						}
						if (GlobalFunc_645(PLAYER::PLAYER_PED_ID(), uLocal_1366[0]) || iLocal_1338 > 2)
						{
							ENTITY::FREEZE_ENTITY_POSITION(uLocal_1366[0], 0);
						}
						if (!iLocal_1638)
						{
							if (iLocal_1338 == 4)
							{
								if (!PED::IS_PED_GROUP_MEMBER(iLocal_1351, GlobalFunc_468()))
								{
									if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_1351, uLocal_1366[0], 7.5f, 7.5f, 7.5f, 0, 0, 0) || ((iLocal_1639 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_1351, -1794415470) == 7) && MISC::GET_GAME_TIMER() >= iLocal_1830 + 1000))
									{
										TASK::CLEAR_PED_TASKS(iLocal_1351);
										TASK::TASK_LOOK_AT_ENTITY(iLocal_1351, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
										PED::SET_PED_AS_GROUP_MEMBER(iLocal_1351, GlobalFunc_468());
										iLocal_1638 = 1;
									}
								}
								else
								{
									iLocal_1638 = 1;
								}
							}
						}
						if (iLocal_1338 > 0)
						{
							if (!iLocal_1492)
							{
								if (!bLocal_1474)
								{
									if (iLocal_1764 > 0)
									{
										if (iLocal_1338 >= 3 && iLocal_1338 < 4)
										{
											if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1351, 15f, 15f, 15f, 0, 0, 0))
											{
												bVar31 = true;
												if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_1366[0], func_198(1), "put_chop_in_van_van", 3))
												{
													if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_1366[0], func_198(1), "put_chop_in_van_van") >= 0.34f)
													{
														bVar31 = false;
													}
												}
												if (bVar31)
												{
													iLocal_1492 = func_239("FKN0_GDDOG", 1, 0, 0, !HUD::IS_MESSAGE_BEING_DISPLAYED());
												}
												else
												{
													iLocal_1492 = 1;
												}
											}
											else
											{
												iLocal_1492 = 1;
											}
										}
									}
								}
							}
							if (iLocal_1338 >= 3)
							{
								if (!iLocal_1694)
								{
									bVar32 = false;
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_1366[0], func_198(1), "put_chop_in_van_van", 3))
									{
										if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_1366[0], func_198(1), "put_chop_in_van_van") >= 0.885f)
										{
											bVar32 = true;
										}
									}
									if (bVar32)
									{
										ENTITY::STOP_ENTITY_ANIM(uLocal_1366[0], "put_chop_in_van_van", func_198(1), -1000f);
										VEHICLE::SET_VEHICLE_DOOR_SHUT(uLocal_1366[0], 2, 1);
										VEHICLE::SET_VEHICLE_DOOR_SHUT(uLocal_1366[0], 3, 1);
										iLocal_1694 = 1;
									}
								}
							}
							if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_1351, uLocal_1366[0]))
							{
								if (PED::IS_PED_GROUP_MEMBER(iLocal_1351, GlobalFunc_468()))
								{
									PED::REMOVE_PED_FROM_GROUP(iLocal_1351);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1351, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1351, 3, 0);
								}
							}
							if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_1366[0]) && PED::IS_PED_IN_VEHICLE(iLocal_1351, uLocal_1366[0], 0))
							{
								if (iLocal_1338 == 4 && !GlobalFunc_111())
								{
									if (func_203())
									{
										if (!PED::IS_PED_INJURED(iLocal_1352))
										{
											PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_1352, 1);
										}
										if (!PED::IS_PED_INJURED(iLocal_1351))
										{
											PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_1351, 1);
										}
										func_42(0);
										func_49(1);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1351, 0);
										PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1351, 3, 0);
										func_643(3);
										bLocal_1477 = false;
										iLocal_1478 = 0;
										iLocal_1475 = 0;
										iLocal_1493 = 1;
										iLocal_1766 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(2000, 3000));
										iLocal_1764 = 2;
										PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
										PLAYER::SET_MAX_WANTED_LEVEL(5);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	else
	{
		func_884();
	}
}

void func_884()//Position - 0x78675
{
	int iVar0;
	int iVar1;
	
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	switch (iLocal_1110)
	{
		case 0:
			iLocal_1762 = MISC::GET_GAME_TIMER();
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Franklin", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_1351))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1351, "Lamar", 0, 0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1351, 1);
			}
			if (!PED::IS_PED_INJURED(Local_1158))
			{
				TASK::TASK_CLEAR_LOOK_AT(Local_1158);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1158, "Ballas_OG", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_1353))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1353, "Hoodrat_girl", 0, 0, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[1], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_1366[1]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uLocal_1366[1]);
				}
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_1366[1], "BallasOG_Bike", 0, 0, 0);
			}
			CUTSCENE::START_CUTSCENE(0);
			RECORDING::_0x48621C9FCA3EBD28(4);
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
			iLocal_1110 = 1;
			break;
		
		case 1:
			if (!iLocal_1473)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					func_46();
					iVar0 = GlobalFunc_11028(PLAYER::PLAYER_PED_ID(), 14, 0);
					if (GlobalFunc_6666(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 14, iVar0))
					{
						GlobalFunc_11267(PLAYER::PLAYER_PED_ID(), 14, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0))
					{
						VEHICLE::DETACH_VEHICLE_FROM_ANY_TOW_TRUCK(uLocal_1366[0]);
					}
					MISC::CLEAR_AREA(369.24f, 344.64f, 102.08f, 27f, 1, 0, 0, 0);
					MISC::CLEAR_AREA(363.5789f, 322.4775f, 102.7078f, 16f, 1, 0, 0, 0);
					MISC::CLEAR_AREA_OF_VEHICLES(340.9547f, 247.1014f, 102.7569f, 92f, 0, 0, 0, 0, 0);
					MISC::CLEAR_AREA_OF_PEDS(364.9471f, 313.038f, 102.6392f, 114f, 1);
					MISC::CLEAR_AREA_OF_PROJECTILES(370.3437f, 343.4283f, 102.0902f, 52f, 0);
					FIRE::STOP_FIRE_IN_RANGE(370.3437f, 343.4283f, 102.0902f, 52f);
					GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(370.3437f, 343.4283f, 102.0902f, 52f);
					func_42(1);
					iVar1 = 0;
					while (iVar1 < 2)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_1381[iVar1]))
						{
							VEHICLE::DELETE_VEHICLE(&(uLocal_1381[iVar1]));
						}
						iVar1++;
					}
					func_197(16);
					func_197(17);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0))
					{
						VEHICLE::DETACH_VEHICLE_FROM_ANY_TOW_TRUCK(uLocal_1366[0]);
						AUDIO::SET_VEH_RADIO_STATION(uLocal_1366[0], "OFF");
						func_41();
						ENTITY::FREEZE_ENTITY_POSITION(uLocal_1366[0], 0);
						ENTITY::SET_ENTITY_COORDS(uLocal_1366[0], func_79(6), 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(uLocal_1366[0], 289.94f);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_1366[0]);
						VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_1366[0], 1, 1);
						GlobalFunc_2882(uLocal_1366[0]);
					}
					if (bLocal_1470)
					{
						CAM::DO_SCREEN_FADE_IN(800);
						bLocal_1470 = false;
					}
					else if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					iLocal_1473 = 1;
				}
			}
			if (CUTSCENE::GET_CUTSCENE_TIME() >= 45231)
			{
				PAD::DISABLE_CONTROL_ACTION(2, 18, 1);
			}
			if (!bLocal_1678)
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() >= 37400)
				{
					bLocal_1678 = GlobalFunc_2867("FRA0_MISSION_START");
				}
			}
			if (!bLocal_1679)
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() >= 42200)
				{
					bLocal_1679 = GlobalFunc_2867("FRA0_SPEED_OFF");
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lamar", joaat("ig_lamardavis")))
			{
				func_371(0);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("BallasOG_Bike", 0))
			{
				func_353();
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Ballas_OG", 0))
			{
				func_886();
			}
			if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				while (!CAM::IS_SCREEN_FADED_OUT())
				{
					SYSTEM::WAIT(0);
				}
				while (!CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					SYSTEM::WAIT(0);
				}
				func_886();
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 371.0984f, 359.3351f, 101.6027f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 170f);
				STREAMING::LOAD_SCENE(371.0984f, 359.3351f, 101.6027f);
				SYSTEM::WAIT(0);
				RECORDING::_0x81CBAE94390F9F89();
				func_371(1);
				func_353();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				if (!bLocal_1678)
				{
					bLocal_1678 = GlobalFunc_2867("FRA0_CHASE_RESTART");
				}
				func_256(1, 0, 1, 1, 0, 1, 1, 1);
				func_885(1);
				func_7(0, 1, -1, 1, 1, 1, 1, 1);
			}
			else
			{
				if (CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					RECORDING::_0x81CBAE94390F9F89();
					func_7(0, 1, -1, 0, 1, 1, 1, 1);
					func_256(1, 0, 1, 1, 0, 1, 1, 1);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
				{
					func_885(0);
				}
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
				{
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 3f);
				}
				else
				{
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 3f, 2000, 0, 1, 0);
				}
			}
			break;
		
		case 2:
			break;
	}
}

void func_885(bool bParam0)//Position - 0x78B11
{
	if (bParam0)
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), func_79(11), 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 164.8f);
	}
	if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
	{
		PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1115154469, bParam0, 1, 0);
		PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 3f);
	}
	else
	{
		PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), 1063765679, bParam0, 1, 0);
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 3f, 2000, 0, 1, 0);
	}
}

void func_886()//Position - 0x78B84
{
	if (!PED::IS_PED_INJURED(Local_1158) && VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[1], 0))
	{
		PED::SET_PED_INTO_VEHICLE(Local_1158, uLocal_1366[1], -1);
	}
}


void func_888()//Position - 0x78BE5
{
	bool bVar0;
	
	if (!iLocal_1639)
	{
		if (!PED::IS_PED_GROUP_MEMBER(iLocal_1351, GlobalFunc_468()))
		{
			bVar0 = false;
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1351, 1785177548) == 7)
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				TASK::TASK_CLEAR_LOOK_AT(iLocal_1351);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_1351, uLocal_1366[0], 1);
				TASK::TASK_ENTER_VEHICLE(iLocal_1351, uLocal_1366[0], 20000, 0, 1f, 1, 0);
				iLocal_1830 = MISC::GET_GAME_TIMER();
				iLocal_1639 = 1;
			}
		}
	}
}

bool func_889()//Position - 0x78C52
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -81.93492f, -1453.06f, 30.99545f, -73.88771f, -1467.599f, 34.96272f, 10.5f, 0, 1, 0);
}

void func_890()//Position - 0x78C88
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		switch (iVar0)
		{
			case 0:
				iVar1 = 16;
				Var2 = { 343.02f, 333.05f, 104.87f };
				fVar5 = -138.08f;
				break;
			
			case 1:
				iVar1 = 17;
				Var2 = { 338.54f, 340.18f, 105.06f };
				fVar5 = -15.46f;
				break;
		}
		uLocal_1381[iVar0] = VEHICLE::CREATE_VEHICLE(func_72(iVar1), Var2, fVar5, 1, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_1381[iVar0]);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(uLocal_1381[iVar0], 3);
		iVar0++;
	}
}

void func_891()//Position - 0x78D28
{
	if (!iLocal_1622 && !iLocal_1665)
	{
		if (!GlobalFunc_2577())
		{
			if (MISC::GET_GAME_TIMER() >= iLocal_1767 + 5000)
			{
				if (func_705("FC_DOWNLHLP", 0, -1))
				{
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						iLocal_1665 = 1;
					}
					iLocal_1622 = 1;
				}
			}
		}
		else
		{
			iLocal_1622 = 1;
		}
	}
}


void func_893()//Position - 0x78DE5
{
	func_895();
	switch (iLocal_1105)
	{
		case 0:
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				func_80(0);
				iLocal_1469 = 1;
				func_954();
			}
			break;
	}
}


void func_895()//Position - 0x78E4C
{
	float fVar0;
	struct<3> Var1;
	
	if (!iLocal_1471)
	{
		if (PED::IS_PED_INJURED(iLocal_1351))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_1388))
			{
				HUD::REMOVE_BLIP(&uLocal_1388);
			}
			if (GlobalFunc_663("FC_FOLLAM", 0, 0))
			{
				GlobalFunc_7206(1, 1, 0, 0);
			}
			func_712(1);
		}
		else if (iLocal_1106 == 0)
		{
			if (!iLocal_1493)
			{
				if (!bLocal_1470)
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_1351, 0) > 100f)
					{
						func_712(7);
					}
				}
			}
		}
		if (PED::IS_PED_INJURED(iLocal_1352))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_1392))
			{
				HUD::REMOVE_BLIP(&uLocal_1392);
			}
			if (GlobalFunc_663("FC_GOCHOP", 0, 0) || GlobalFunc_663("FC_CLOSER", 0, 0))
			{
				GlobalFunc_7206(1, 1, 0, 0);
			}
			func_712(2);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_1158))
		{
			if (PED::IS_PED_INJURED(Local_1158))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_1389))
				{
					HUD::REMOVE_BLIP(&uLocal_1389);
				}
				if (GlobalFunc_663("FC_CHASE", 0, 0))
				{
					GlobalFunc_7206(1, 1, 0, 0);
				}
				if (iLocal_1106 == 1)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[1], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_1366[1]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uLocal_1366[1]);
						}
					}
				}
				func_712(4);
			}
			else if (iLocal_1106 == 2)
			{
				if (!PED::IS_TRACKED_PED_VISIBLE(Local_1158))
				{
					Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
					if ((Var1.x >= 487.3f && Var1.f_1 <= -614f) && Var1.f_2 <= 27.2f)
					{
						fVar0 = 70f;
					}
					else
					{
						fVar0 = 90f;
					}
				}
				else
				{
					fVar0 = 160f;
				}
				GlobalFunc_2216(uLocal_1389, Local_1158, fVar0, 1061158912, 0);
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1158, 0) >= fVar0 && Local_1184 == 0)
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_1389))
					{
						HUD::REMOVE_BLIP(&uLocal_1389);
					}
					func_712(3);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_1366[0]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 1))
			{
				func_712(5);
			}
			else if (((iLocal_1106 == 0 && iLocal_1493) || iLocal_1106 == 1) || iLocal_1106 == 4)
			{
				if (!bLocal_1470)
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), uLocal_1366[0], 0) > 100f)
					{
						func_712(8);
					}
				}
				if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uLocal_1366[0], 3, 30000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uLocal_1366[0], 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uLocal_1366[0], 1, 40000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uLocal_1366[0], 0, 7000))
				{
					func_712(10);
				}
			}
		}
	}
}

void func_896(bool bParam0)//Position - 0x790E1
{
	int iVar0;
	
	switch (iLocal_1108)
	{
		case 0:
			if (func_897() || bParam0)
			{
				if (bParam0)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = iLocal_1106 + 1;
				}
				func_682(iVar0, 0, 1);
				func_677(iVar0, 0, 1);
				func_672(iVar0, 0, 1);
				func_666(iVar0, 0, 1);
				func_661(iVar0, 0, 1);
				func_656(iVar0, 0, 1);
				func_650(iVar0, 0, 1);
				func_639(iVar0, 0, 1);
				func_638(0);
				iLocal_1108 = 1;
			}
			break;
		
		case 1:
			if ((((((((func_683() && func_678()) && func_673()) && func_667()) && func_662()) && func_657()) && func_651()) && func_640()) && HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				iLocal_1108 = 2;
			}
			break;
	}
}

int func_897()//Position - 0x791C1
{
	switch (iLocal_1106)
	{
		case 0:
			if (iLocal_1471)
			{
				return 1;
			}
			break;
		
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[1], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_1366[1]))
				{
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 2:
			if (iLocal_1203 >= 8)
			{
				return 1;
			}
			break;
		
		case 3:
			if (bLocal_1579)
			{
				return 1;
			}
			break;
			break;
		
		case 4:
			return 0;
			break;
	}
	return 0;
}

int func_898()//Position - 0x79248
{
	int iVar0;
	
	switch (iLocal_1104)
	{
		case 0:
			PED::SET_PED_NON_CREATION_AREA(-61.06803f, -1462.893f, 11.02068f, 5.86775f, -1444.149f, 49.5516f);
			GlobalFunc_7206(1, 1, 1, 0);
			func_953(1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
			iLocal_1201 = GlobalFunc_2576();
			func_1();
			if (GlobalFunc_5141(2))
			{
				GlobalFunc_5671(2, 0);
				iLocal_1695 = 1;
			}
			MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("extrasunny", 30f);
			func_950(&Local_1111, 0, 1);
			Local_1184.f_1 = 0;
			Local_1184.f_2 = 1;
			Global_97297 = 1;
			Local_1184.f_8 = 1;
			uLocal_2036 = PED::ADD_SCENARIO_BLOCKING_AREA(480.4f, -776.7f, -100f, 569.3f, -610.7f, 76f, 0, 1, 1, 1);
			uLocal_2037 = PED::ADD_SCENARIO_BLOCKING_AREA(-225.5192f, -1513.046f, -100f, -218.9672f, -1507.192f, 100.4621f, 0, 1, 1, 1);
			uLocal_2038 = PED::ADD_SCENARIO_BLOCKING_AREA(-91.34664f, -1457.385f, 0f, -73.12756f, -1381.66f, 100.3357f, 0, 1, 1, 1);
			uLocal_2039 = PED::ADD_SCENARIO_BLOCKING_AREA(449.9601f, -698.9451f, 0.66434f, 467.1348f, -680.6246f, 100.3357f, 0, 1, 1, 1);
			uLocal_2040 = PED::ADD_SCENARIO_BLOCKING_AREA(454.7581f, -817.2333f, 0.7081f, 459.416f, -685.3982f, 56.66263f, 0, 1, 1, 1);
			if (!GlobalFunc_Is_Mission_Retry())
			{
				iLocal_1760 = 0;
			}
			else
			{
				iLocal_1760 = Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[40 /*6*/].f_1 + 1;
			}
			iLocal_1104 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_Is_Mission_Retry())
			{
				GlobalFunc_3001();
				if (MISC::IS_BIT_SET(Global_86864.f_358, 4))
				{
					CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST(func_949(), 13, 8);
				}
				else
				{
					CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST(func_949(), 14, 8);
				}
				iLocal_1104 = 2;
			}
			else
			{
				CUTSCENE::STOP_CUTSCENE(0);
				func_943();
			}
			break;
		
		case 2:
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			if (func_915(40, &Local_2024, 0, 0, 0, 0, 0))
			{
				if (GlobalFunc_Has_Cutscene_Loaded())
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Franklin", 0, func_72(0), 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1351, "Lamar", 2, func_72(1), 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1352, "Chop", 2, func_72(3), 0);
					GlobalFunc_562(40);
					CUTSCENE::START_CUTSCENE(0);
					RECORDING::_0x48621C9FCA3EBD28(4);
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
					iLocal_1104 = 3;
				}
			}
			else if (!iLocal_1627)
			{
				if (CAM::DOES_CAM_EXIST(Local_2024.f_4))
				{
					if (STREAMING::STREAMVOL_IS_VALID(uLocal_2042))
					{
						STREAMING::STREAMVOL_DELETE(uLocal_2042);
					}
					uLocal_2042 = STREAMING::STREAMVOL_CREATE_FRUSTUM(-13.6f, -1449.2f, 31.1f, GlobalFunc_590(-0.7f, 0.8f, 4.3f), 30f, 12, 127);
					bLocal_1648 = true;
					func_907();
					iLocal_1627 = 1;
				}
			}
			break;
		
		case 3:
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
			if (!iLocal_1473)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (bLocal_1648)
					{
						GlobalFunc_9025(&Local_2024, 0, 0, 2000, 1, 1, 0, 1);
					}
					func_46();
					func_638(0);
					VEHICLE::DELETE_ALL_TRAINS();
					if (GlobalFunc_7091(0f, 0f, 0f, 1))
					{
						iVar0 = GlobalFunc_2251();
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
						{
							if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("speedo"))
							{
								if (VEHICLE::GET_VEHICLE_COLOUR_COMBINATION(iVar0) == 5)
								{
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
									VEHICLE::DELETE_VEHICLE(&iVar0);
								}
							}
						}
						GlobalFunc_10735(func_79(30), 95.68f, 0, 145);
					}
					func_907();
					MISC::CLEAR_AREA_OF_PROJECTILES(-14.20779f, -1448.726f, 30.01975f, 25f, 0);
					FIRE::STOP_FIRE_IN_RANGE(-14.20779f, -1448.726f, 30.01975f, 25f);
					GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(-14.20779f, -1448.726f, 30.01975f, 25f);
					MISC::CLEAR_AREA_OF_OBJECTS(-14.20779f, -1448.726f, 30.01975f, 25f, 2);
					func_80(0);
					func_44(0);
					if (STREAMING::STREAMVOL_IS_VALID(uLocal_2042))
					{
						STREAMING::STREAMVOL_DELETE(uLocal_2042);
					}
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					iLocal_1473 = 1;
				}
			}
			if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				bLocal_1472 = true;
			}
			if (CUTSCENE::GET_CUTSCENE_TIME() >= 55554 && !bLocal_1472)
			{
				func_891();
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1351))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lamar", 0)))
				{
					iLocal_1351 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lamar", 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1352))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Chop", 0)))
				{
					iLocal_1352 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Chop", 0));
				}
			}
			if (CUTSCENE::GET_CUTSCENE_TIME() >= 40000)
			{
				func_896(1);
			}
			if (!iLocal_1483)
			{
				if (iLocal_1108 == 2)
				{
					if (!iLocal_1484)
					{
						func_899();
						iLocal_1484 = 1;
					}
					else
					{
						func_431(0);
						iLocal_1483 = 1;
					}
				}
			}
			if (!bLocal_1472)
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lamar", 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_1351))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_1351, func_79(12), 1, 0, 0, 1);
					}
					func_260();
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Chop", 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_1352))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_1352, func_79(15), 1, 0, 0, 1);
					}
					func_257();
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				if (bLocal_1472)
				{
					func_419();
				}
				func_259();
			}
			else if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
			{
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
			else
			{
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
			}
			if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CAM::DOES_CAM_EXIST(Local_2024.f_4))
				{
					CAM::DESTROY_CAM(Local_2024.f_4, 0);
				}
				RECORDING::_0x81CBAE94390F9F89();
				bLocal_1659 = bLocal_1472;
				func_7(0, 1, -1, 0, 1, 0, 1, 1);
				func_943();
				PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
			}
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_899()//Position - 0x797D9
{
	GlobalFunc_2871(func_79(1));
	GlobalFunc_2871(func_79(0));
}








void func_907()//Position - 0x79B65
{
	GlobalFunc_9805(-42.555f, -1458.951f, 28.994f, -43.144f, -1452.933f, 35.456f, 62f, func_79(30), 95.68f, GlobalFunc_625(), 1, 0, 1, 0, 0);
	GlobalFunc_9805(-19.634f, -1431.664f, 28.812f, -18.772f, -1456.846f, 35.471f, 30f, func_79(30), 95.68f, GlobalFunc_625(), 1, 0, 1, 0, 0);
	GlobalFunc_9805(-75.69051f, -1460.396f, 31.11074f, -80.50679f, -1452.115f, 30.9896f, 7.15f, -64.4662f, -1463.362f, 31.6336f, 112.38f, GlobalFunc_625(), 1, 0, 1, 0, 0);
}








bool func_915(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x7A494
{
	struct<2> Var0;
	
	GlobalFunc_9026(iParam0, &Var0);
	GlobalFunc_741(iParam0, &Var0, &(Var0.f_1));
	return func_916(uParam1, &Var0, bParam2, bParam3, bParam4, bParam5, bParam6);
}

int func_916(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x7A4C2
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	
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
			fVar1 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
			INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
			MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, fVar1, 0);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, fVar1);
			GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar1);
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
				fVar3 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
				INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
				MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, fVar3, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, fVar3);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar3);
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
			fVar5 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
			INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
			MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, fVar5, 0);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, fVar5);
			GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar5);
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
			if (GlobalFunc_9196(uParam0->f_8, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
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
		else if (GlobalFunc_9196(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
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
					GlobalFunc_9196(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, 1f, 0, 1, 1065353216);
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



























void func_943()//Position - 0x7C79F
{
	int iVar0;
	
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!GlobalFunc_Is_Mission_Retry())
		{
			if (!bLocal_1659)
			{
				func_256(0, 0, 1, 1, 1, 1, 0, 1);
			}
			else
			{
				func_899();
				func_256(0, 1, 1, 1, 0, 0, 1, 1);
			}
		}
		else if (func_945())
		{
		}
		else
		{
			iVar0 = GlobalFunc_Get_Mission_Fail_Checkpoint();
			if (iVar0 == 0)
			{
				func_419();
			}
			func_256(iVar0, 1, 1, 1, 0, 1, 1, 1);
		}
		if (!bLocal_1470)
		{
			if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
		}
	}
	iLocal_1104 = 4;
}


int func_945()//Position - 0x7C862
{
	int iVar0;
	
	if (GlobalFunc_Is_Mission_Retry())
	{
		if (Global_84544 == 1)
		{
			switch (GlobalFunc_Get_Mission_Fail_Checkpoint())
			{
				case 0:
					iVar0 = 0;
					bLocal_1470 = true;
					break;
				
				case 1:
					iVar0 = 2;
					break;
				
				case 2:
					iVar0 = 3;
					break;
				
				case 3:
					iVar0 = 3;
					bLocal_1470 = true;
					break;
				
				case 4:
					iVar0 = 4;
					bLocal_1470 = true;
					break;
			}
			func_946();
			func_256(iVar0, 1, 1, 1, 0, 1, 1, 0);
			if (!bLocal_1470)
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			return 1;
		}
	}
	return 0;
}

void func_946()//Position - 0x7C8F1
{
	if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
	{
		if (!WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
		{
			if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == 0)
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
			}
		}
	}
	TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	SYSTEM::WAIT(1000);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	GlobalFunc_4948(&uLocal_27, 0, 0);
	func_812(1, 1);
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	GlobalFunc_8380(0, 1, 1, 0);
	func_947();
}

void func_947()//Position - 0x7C978
{
	int iVar0;
	int iVar1;
	
	AUDIO::DISTANT_COP_CAR_SIRENS(0);
	GlobalFunc_2657();
	func_26(&Local_1184, &Local_1111, 0, 1, 1, 1, 0, 3000);
	GlobalFunc_571(0, -1);
	func_948();
	PAD::_0xCB0360EFEFB2580D(0);
	if (STREAMING::STREAMVOL_IS_VALID(uLocal_2042))
	{
		STREAMING::STREAMVOL_DELETE(uLocal_2042);
	}
	VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(uLocal_1796);
	PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
	func_24(1);
	func_245(0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1111[iVar0]))
		{
			PED::DELETE_PED(&(Local_1111[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1158))
	{
		PED::DELETE_PED(&Local_1158);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_1355)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1355[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_1355[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1351))
	{
		PED::DELETE_PED(&iLocal_1351);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1352))
	{
		PED::DELETE_PED(&iLocal_1352);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1353))
	{
		PED::DELETE_PED(&iLocal_1353);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1354))
	{
		PED::DELETE_PED(&iLocal_1354);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_1366[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(uLocal_1366[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_1369[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(uLocal_1369[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_1377[iVar0]))
		{
			VEHICLE::DELETE_MISSION_TRAIN(&(uLocal_1377[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_1381[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(uLocal_1381[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1384))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_1384);
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1204[iVar0 /*5*/]))
		{
			PED::DELETE_PED(&(Local_1204[iVar0 /*5*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_1235[iVar0 /*12*/].f_3[iVar1 /*4*/]))
			{
				OBJECT::DELETE_OBJECT(&(Local_1235[iVar0 /*12*/].f_3[iVar1 /*4*/]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_1235[iVar0 /*12*/].f_3[iVar1 /*4*/].f_1))
			{
				OBJECT::DELETE_OBJECT(&(Local_1235[iVar0 /*12*/].f_3[iVar1 /*4*/].f_1));
			}
			iVar1++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_1235[iVar0 /*12*/]))
		{
			OBJECT::DELETE_OBJECT(&(Local_1235[iVar0 /*12*/]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1385))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1385);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1386))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1386);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_1393))
	{
		CAM::DESTROY_CAM(uLocal_1393, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_1395))
	{
		CAM::DESTROY_CAM(uLocal_1395, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_1396))
	{
		CAM::DESTROY_CAM(uLocal_1396, 0);
	}
	if (CAM::DOES_CAM_EXIST(Local_1184.f_4))
	{
		CAM::DESTROY_CAM(Local_1184.f_4, 0);
	}
	MISC::CLEAR_AREA(func_79(0), 10000f, 1, 0, 0, 0);
}

void func_948()//Position - 0x7CC75
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		func_42(iVar0);
		iVar0++;
	}
}

char* func_949()//Position - 0x7CC96
{
	return "fra_0_int";
}

void func_950(var uParam0, int iParam1, int iParam2)//Position - 0x7CCA3
{
	if (iParam1 != 4)
	{
		uParam0->f_24[iParam1] = iParam2;
	}
}



void func_953(int iParam0)//Position - 0x7CD2C
{
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_72(7), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_72(8), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("forklift"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_72(16), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_72(17), iParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(func_72(2), iParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(func_72(1), iParam0);
	if (iParam0 == 0)
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bus"), iParam0);
	}
}

void func_954()//Position - 0x7CD95
{
	int iVar0;
	int iVar1;
	
	AUDIO::TRIGGER_MUSIC_EVENT("FRA0_MISSION_FAIL");
	GlobalFunc_7206(1, 1, 1, 0);
	func_30(&Local_1184, 1);
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChopVision"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("ChopVision");
	}
	PAD::_0xCB0360EFEFB2580D(0);
	AUDIO::DISTANT_COP_CAR_SIRENS(0);
	func_948();
	GRAPHICS::_0x949F397A288B28B3(1f);
	GlobalFunc_4956();
	AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 0);
	GlobalFunc_601(0, 0);
	GlobalFunc_601(2, 0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
	if (STREAMING::STREAMVOL_IS_VALID(uLocal_2042))
	{
		STREAMING::STREAMVOL_DELETE(uLocal_2042);
	}
	func_245(0);
	MISC::ENABLE_DISPATCH_SERVICE(5, 1);
	MISC::ENABLE_DISPATCH_SERVICE(3, 1);
	func_24(1);
	CUTSCENE::REMOVE_CUTSCENE();
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	func_363(1);
	func_364(0, 0);
	func_953(0);
	PATHFIND::SET_GPS_DISABLED_ZONE(0f, 0f, 0f, 0f, 0f, 0f);
	VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(uLocal_1796);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_2036, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_2037, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_2038, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_2039, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_2040, 0);
	GlobalFunc_555();
	GlobalFunc_9132(0);
	Global_97297 = 0;
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[0], 0))
	{
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uLocal_1366[0], 1);
		VEHICLE::SET_VEHICLE_STRONG(uLocal_1366[0], 0);
		VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(uLocal_1366[0], 0);
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(uLocal_1366[0], 1);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(uLocal_1366[0], 1);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uLocal_1366[0], 0);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uLocal_1366[0], true);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1366[1], 0))
	{
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uLocal_1366[1], 1);
		ENTITY::SET_ENTITY_PROOFS(uLocal_1366[1], 0, 0, 0, 0, 0, 0, 0, 0);
		VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(uLocal_1366[1], 0);
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(uLocal_1366[1], 1);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(uLocal_1366[1], 1);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uLocal_1366[1], 0);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_1369[4], 0))
	{
		AUDIO::SET_AUDIO_VEHICLE_PRIORITY(uLocal_1369[4], 0);
	}
	if (!PED::IS_PED_INJURED(iLocal_1351))
	{
		if (PED::IS_PED_GROUP_MEMBER(iLocal_1351, GlobalFunc_468()))
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_1351);
		}
	}
	AUDIO::STOP_SOUND(iLocal_1836);
	AUDIO::RELEASE_SOUND_ID(iLocal_1836);
	if (iLocal_1469)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1385))
		{
			OBJECT::DELETE_OBJECT(&iLocal_1385);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1351))
		{
			PED::DELETE_PED(&iLocal_1351);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_1158))
		{
			PED::DELETE_PED(&Local_1158);
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
		if (((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1056466932) != 7 || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1227113341) != 7) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1689270312) != 7) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -875674219) != 7)
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
		if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
		{
			if (!WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
			{
				if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == 0)
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_1352))
	{
		TASK::CLEAR_PED_TASKS(iLocal_1352);
	}
	if (!PED::IS_PED_INJURED(iLocal_1354))
	{
		TASK::CLEAR_PED_TASKS(iLocal_1354);
	}
	if (!PED::IS_PED_INJURED(Local_1158))
	{
		TASK::CLEAR_PED_TASKS(Local_1158);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_1395))
	{
		CAM::DESTROY_CAM(uLocal_1395, 0);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_1235[iVar0 /*12*/].f_3[iVar1 /*4*/]))
			{
				ENTITY::DETACH_ENTITY(Local_1235[iVar0 /*12*/].f_3[iVar1 /*4*/], 1, 1);
				ENTITY::FREEZE_ENTITY_POSITION(Local_1235[iVar0 /*12*/].f_3[iVar1 /*4*/], 1);
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_1377[iVar0]))
		{
			if (iLocal_1469)
			{
				VEHICLE::DELETE_MISSION_TRAIN(&(uLocal_1377[iVar0]));
			}
			else
			{
				VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&(uLocal_1377[iVar0]), 1);
			}
		}
		iVar0++;
	}
	func_955();
	func_812(0, 1);
	if (iLocal_1695)
	{
		GlobalFunc_5671(2, 1);
	}
	GlobalFunc_8380(0, 1, 1, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_955()//Position - 0x7D17A
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 0);
	}
	HUD::DISPLAY_HUD(1);
	HUD::DISPLAY_RADAR(1);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	GlobalFunc_8380(0, 1, 1, 0);
	GlobalFunc_7632(0);
	GlobalFunc_4948(&uLocal_27, 0, 0);
}



