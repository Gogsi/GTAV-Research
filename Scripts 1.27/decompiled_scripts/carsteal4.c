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
	float fLocal_47 = 0f;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	int iLocal_58 = 0;
	var uLocal_59 = 0;
	bool bLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	int iLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	bool bLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	bool bLocal_80 = 0;
	bool bLocal_81 = 0;
	float fLocal_82[60] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_143[60] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_204[60] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_265[60] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_326[60] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	float fLocal_391[10] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_402[10] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_413[10] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_424[10] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_435[10] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	var uLocal_446 = 10;
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
	float fLocal_457[20] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_478[20] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_499[20] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_520[20] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_541 = 0f;
	float fLocal_542 = 0f;
	var uLocal_543 = 0;
	float fLocal_544 = 0f;
	float fLocal_545 = 0f;
	float fLocal_546 = 0f;
	float fLocal_547 = 0f;
	var uLocal_548 = 0;
	float fLocal_549 = 0f;
	float fLocal_550 = 0f;
	float fLocal_551 = 0f;
	float fLocal_552 = 0f;
	float fLocal_553 = 0f;
	float fLocal_554 = 0f;
	float fLocal_555 = 0f;
	float fLocal_556 = 0f;
	float fLocal_557 = 0f;
	float fLocal_558 = 0f;
	float fLocal_559 = 0f;
	float fLocal_560 = 0f;
	float fLocal_561 = 0f;
	int iLocal_562[60] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_623[60] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_684[60] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_745[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_756[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_767[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_778[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_799 = 0;
	int iLocal_800 = 0;
	int iLocal_801 = 0;
	int iLocal_802 = 0;
	int iLocal_803 = 0;
	int iLocal_804 = 0;
	int iLocal_805 = 0;
	int iLocal_806 = 0;
	int iLocal_807 = 0;
	int iLocal_808 = 0;
	var uLocal_809 = 0;
	int iLocal_810 = 0;
	int iLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	struct<3> Local_816[60];
	struct<3> Local_997[20];
	struct<3> Local_1058[10];
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
	int iLocal_1133[60] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1194[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1215[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	int iLocal_1229[60] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1290[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1303[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1324[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1335[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 12;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	int iLocal_1362 = 0;
	int iLocal_1363 = 0;
	int iLocal_1364 = 0;
	int iLocal_1365 = 0;
	bool bLocal_1366 = 0;
	int iLocal_1367 = 0;
	bool bLocal_1368 = 0;
	int iLocal_1369 = 0;
	int iLocal_1370 = 0;
	int iLocal_1371 = 0;
	int iLocal_1372 = 0;
	bool bLocal_1373 = 0;
	bool bLocal_1374 = 0;
	int iLocal_1375 = 0;
	bool bLocal_1376 = 0;
	bool bLocal_1377 = 0;
	bool bLocal_1378 = 0;
	int iLocal_1379 = 0;
	int iLocal_1380 = 0;
	int iLocal_1381 = 0;
	int iLocal_1382 = 0;
	int iLocal_1383 = 0;
	int iLocal_1384 = 0;
	int iLocal_1385 = 0;
	int iLocal_1386 = 0;
	int iLocal_1387 = 0;
	int iLocal_1388 = 0;
	int iLocal_1389 = 0;
	int iLocal_1390 = 0;
	int iLocal_1391[60] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1452 = 0;
	int iLocal_1453 = 0;
	int iLocal_1454 = 0;
	int iLocal_1455 = 0;
	int iLocal_1456 = 0;
	int iLocal_1457 = 0;
	int iLocal_1458 = 0;
	int iLocal_1459 = 0;
	int iLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	int iLocal_1465 = 0;
	int iLocal_1466 = 0;
	int iLocal_1467 = 0;
	int iLocal_1468 = 0;
	int iLocal_1469 = 0;
	int iLocal_1470 = 0;
	int iLocal_1471 = 0;
	int iLocal_1472 = 0;
	int iLocal_1473 = 0;
	int iLocal_1474 = 0;
	int iLocal_1475 = 0;
	int iLocal_1476 = 0;
	int iLocal_1477 = 0;
	int iLocal_1478 = 0;
	int iLocal_1479 = 0;
	int iLocal_1480 = 0;
	int iLocal_1481 = 0;
	var uLocal_1482 = 0;
	int iLocal_1483 = 0;
	int iLocal_1484 = 0;
	int iLocal_1485 = 0;
	int iLocal_1486 = 0;
	int iLocal_1487 = 0;
	int iLocal_1488 = 0;
	int iLocal_1489 = 0;
	int iLocal_1490 = 0;
	int iLocal_1491 = 0;
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
	int iLocal_1503 = 0;
	int iLocal_1504 = 0;
	int iLocal_1505 = 0;
	int iLocal_1506 = 0;
	int iLocal_1507 = 0;
	int iLocal_1508 = 0;
	int iLocal_1509 = 0;
	float fLocal_1510 = 0f;
	float fLocal_1511 = 0f;
	float fLocal_1512 = 0f;
	float fLocal_1513 = 0f;
	float fLocal_1514 = 0f;
	float fLocal_1515 = 0f;
	float fLocal_1516 = 0f;
	struct<3> Local_1517 = { 0, 0, 0 } ;
	struct<3> Local_1520 = { 0, 0, 0 } ;
	struct<3> Local_1523 = { 0, 0, 0 } ;
	struct<3> Local_1526 = { 0, 0, 0 } ;
	struct<3> Local_1529 = { 0, 0, 0 } ;
	struct<3> Local_1532 = { 0, 0, 0 } ;
	struct<3> Local_1535 = { 0, 0, 0 } ;
	struct<3> Local_1538 = { 0, 0, 0 } ;
	struct<3> Local_1541 = { 0, 0, 0 } ;
	struct<3> Local_1544 = { 0, 0, 0 } ;
	struct<3> Local_1547 = { 0, 0, 0 } ;
	struct<3> Local_1550 = { 0, 0, 0 } ;
	struct<3> Local_1553 = { 0, 0, 0 } ;
	struct<3> Local_1556 = { 0, 0, 0 } ;
	int iLocal_1559 = 0;
	int iLocal_1560 = 0;
	int iLocal_1561 = 0;
	int iLocal_1562 = 0;
	char* sLocal_1563 = NULL;
	char* sLocal_1564 = NULL;
	char* sLocal_1565 = NULL;
	char* sLocal_1566 = NULL;
	char* sLocal_1567 = NULL;
	char* sLocal_1568 = NULL;
	char* sLocal_1569 = NULL;
	char* sLocal_1570 = NULL;
	char* sLocal_1571 = NULL;
	char* sLocal_1572 = NULL;
	char* sLocal_1573 = NULL;
	char* sLocal_1574 = NULL;
	char* sLocal_1575 = NULL;
	char* sLocal_1576 = NULL;
	char* sLocal_1577 = NULL;
	char* sLocal_1578 = NULL;
	int iLocal_1579 = 0;
	struct<6> Local_1580 = { 0, 0, 0, 0, 0, 0 } ;
	char cLocal_1586[24] = "";
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	int iLocal_1598[3] = { 0, 0, 0 };
	int iLocal_1602[3] = { 0, 0, 0 };
	int iLocal_1606 = 0;
	var uLocal_1607 = 0;
	int iLocal_1608 = 0;
	int iLocal_1609 = 0;
	int iLocal_1610 = 0;
	int iLocal_1611[7] = { 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1619 = 0;
	int iLocal_1620 = 0;
	int iLocal_1621 = 0;
	int iLocal_1622 = 0;
	int iLocal_1623 = 0;
	int iLocal_1624 = 0;
	int iLocal_1625[5] = { 0, 0, 0, 0, 0 };
	struct<19> Local_1631[6];
	struct<3> Local_1746 = { 0, 0, 0 } ;
	struct<3> Local_1749 = { 0, 0, 0 } ;
	var uLocal_1752 = 0;
	struct<4> Local_1753[14];
	struct<14> Local_1810 = { 0, 3, 0, 0, 0, 0, 0, 1092616192, 1101004800, 0, 0, 0, 0, 0 } ;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 3;
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
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	struct<14> Local_1853[10];
	struct<6> Local_1994 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2000 = 3;
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
	int iLocal_2032 = 0;
	int iLocal_2033 = 0;
	int iLocal_2034 = 0;
	int iLocal_2035 = 0;
	int iLocal_2036 = 0;
	int iLocal_2037 = 0;
	int iLocal_2038 = 0;
	int iLocal_2039 = 0;
	int iLocal_2040 = 0;
	int iLocal_2041 = 0;
	int iLocal_2042 = 0;
	var uLocal_2043 = 0;
	int iLocal_2044 = 0;
	int iLocal_2045 = 4;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 4;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 4;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 4;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 4;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 4;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 4;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	struct<20> Local_2089 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<10> Local_2123[16];
	var uLocal_2284 = 0;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = 0;
	var uLocal_2290 = -1;
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
	var uLocal_2293 = 0;
	var uLocal_2294 = 0;
	var uLocal_2295 = 0;
	var uLocal_2296 = 0;
	var uLocal_2297 = 1000;
	var uLocal_2298 = 1000;
	var uLocal_2299 = 0;
	bool bLocal_2300 = 0;
	bool bLocal_2301 = 0;
	float fLocal_2302 = 0f;
	float fLocal_2303 = 0f;
	int iLocal_2304 = 0;
	int iLocal_2305 = 0;
	int iLocal_2306 = 0;
	int iLocal_2307 = 0;
	float fLocal_2308 = 0f;
	bool bLocal_2309 = 0;
	var uLocal_2310 = 0;
	var uLocal_2311 = 0;
	var uLocal_2312 = 0;
	var uLocal_2313 = 0;
	var uLocal_2314 = 2;
	var uLocal_2315 = 0;
	var uLocal_2316 = 0;
	var uLocal_2317 = 2;
	var uLocal_2318 = 0;
	var uLocal_2319 = 0;
	var uLocal_2320 = 20;
	var uLocal_2321 = 0;
	var uLocal_2322 = 0;
	var uLocal_2323 = 0;
	var uLocal_2324 = -1;
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
	var uLocal_2354 = 1065353216;
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
	var uLocal_2381 = -1;
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
	var uLocal_2411 = 1065353216;
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
	var uLocal_2438 = -1;
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
	var uLocal_2468 = 1065353216;
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
	var uLocal_2495 = -1;
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
	var uLocal_2524 = 0;
	var uLocal_2525 = 1065353216;
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
	var uLocal_2552 = -1;
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
	var uLocal_2582 = 1065353216;
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
	var uLocal_2609 = -1;
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
	var uLocal_2639 = 1065353216;
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
	var uLocal_2666 = -1;
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
	var uLocal_2696 = 1065353216;
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
	var uLocal_2723 = -1;
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
	var uLocal_2753 = 1065353216;
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
	var uLocal_2780 = -1;
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
	var uLocal_2810 = 1065353216;
	var uLocal_2811 = 0;
	var uLocal_2812 = 0;
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
	var uLocal_2828 = 0;
	var uLocal_2829 = 0;
	var uLocal_2830 = 0;
	var uLocal_2831 = 0;
	var uLocal_2832 = 0;
	var uLocal_2833 = 0;
	var uLocal_2834 = 0;
	var uLocal_2835 = 0;
	var uLocal_2836 = 0;
	var uLocal_2837 = -1;
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
	var uLocal_2867 = 1065353216;
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
	var uLocal_2894 = -1;
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
	var uLocal_2923 = 0;
	var uLocal_2924 = 1065353216;
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
	var uLocal_2951 = -1;
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
	var uLocal_2974 = 0;
	var uLocal_2975 = 0;
	var uLocal_2976 = 0;
	var uLocal_2977 = 0;
	var uLocal_2978 = 0;
	var uLocal_2979 = 0;
	var uLocal_2980 = 0;
	var uLocal_2981 = 1065353216;
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
	var uLocal_3000 = 0;
	var uLocal_3001 = 0;
	var uLocal_3002 = 0;
	var uLocal_3003 = 0;
	var uLocal_3004 = 0;
	var uLocal_3005 = 0;
	var uLocal_3006 = 0;
	var uLocal_3007 = 0;
	var uLocal_3008 = -1;
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
	var uLocal_3029 = 0;
	var uLocal_3030 = 0;
	var uLocal_3031 = 0;
	var uLocal_3032 = 0;
	var uLocal_3033 = 0;
	var uLocal_3034 = 0;
	var uLocal_3035 = 0;
	var uLocal_3036 = 0;
	var uLocal_3037 = 0;
	var uLocal_3038 = 1065353216;
	var uLocal_3039 = 0;
	var uLocal_3040 = 0;
	var uLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = 0;
	var uLocal_3050 = 0;
	var uLocal_3051 = 0;
	var uLocal_3052 = 0;
	var uLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	var uLocal_3060 = 0;
	var uLocal_3061 = 0;
	var uLocal_3062 = 0;
	var uLocal_3063 = 0;
	var uLocal_3064 = 0;
	var uLocal_3065 = -1;
	var uLocal_3066 = 0;
	var uLocal_3067 = 0;
	var uLocal_3068 = 0;
	var uLocal_3069 = 0;
	var uLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 0;
	var uLocal_3073 = 0;
	var uLocal_3074 = 0;
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
	var uLocal_3077 = 0;
	var uLocal_3078 = 0;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 0;
	var uLocal_3082 = 0;
	var uLocal_3083 = 0;
	var uLocal_3084 = 0;
	var uLocal_3085 = 0;
	var uLocal_3086 = 0;
	var uLocal_3087 = 0;
	var uLocal_3088 = 0;
	var uLocal_3089 = 0;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 1065353216;
	var uLocal_3096 = 0;
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
	var uLocal_3122 = -1;
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
	var uLocal_3152 = 1065353216;
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
	var uLocal_3179 = -1;
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
	var uLocal_3209 = 1065353216;
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
	var uLocal_3236 = -1;
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
	var uLocal_3266 = 1065353216;
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
	var uLocal_3293 = -1;
	var uLocal_3294 = 0;
	var uLocal_3295 = 0;
	var uLocal_3296 = 0;
	var uLocal_3297 = 0;
	var uLocal_3298 = 0;
	var uLocal_3299 = 0;
	var uLocal_3300 = 0;
	var uLocal_3301 = 0;
	var uLocal_3302 = 0;
	var uLocal_3303 = 0;
	var uLocal_3304 = 0;
	var uLocal_3305 = 0;
	var uLocal_3306 = 0;
	var uLocal_3307 = 0;
	var uLocal_3308 = 0;
	var uLocal_3309 = 0;
	var uLocal_3310 = 0;
	var uLocal_3311 = 0;
	var uLocal_3312 = 0;
	var uLocal_3313 = 0;
	var uLocal_3314 = 0;
	var uLocal_3315 = 0;
	var uLocal_3316 = 0;
	var uLocal_3317 = 0;
	var uLocal_3318 = 0;
	var uLocal_3319 = 0;
	var uLocal_3320 = 0;
	var uLocal_3321 = 0;
	var uLocal_3322 = 0;
	var uLocal_3323 = 1065353216;
	var uLocal_3324 = 0;
	var uLocal_3325 = 0;
	var uLocal_3326 = 0;
	var uLocal_3327 = 0;
	var uLocal_3328 = 0;
	var uLocal_3329 = 0;
	var uLocal_3330 = 0;
	var uLocal_3331 = 0;
	var uLocal_3332 = 0;
	var uLocal_3333 = 0;
	var uLocal_3334 = 0;
	var uLocal_3335 = 0;
	var uLocal_3336 = 0;
	var uLocal_3337 = 0;
	var uLocal_3338 = 0;
	var uLocal_3339 = 0;
	var uLocal_3340 = 0;
	var uLocal_3341 = 0;
	var uLocal_3342 = 0;
	var uLocal_3343 = 0;
	var uLocal_3344 = 0;
	var uLocal_3345 = 0;
	var uLocal_3346 = 0;
	var uLocal_3347 = 0;
	var uLocal_3348 = 0;
	var uLocal_3349 = 0;
	var uLocal_3350 = -1;
	var uLocal_3351 = 0;
	var uLocal_3352 = 0;
	var uLocal_3353 = 0;
	var uLocal_3354 = 0;
	var uLocal_3355 = 0;
	var uLocal_3356 = 0;
	var uLocal_3357 = 0;
	var uLocal_3358 = 0;
	var uLocal_3359 = 0;
	var uLocal_3360 = 0;
	var uLocal_3361 = 0;
	var uLocal_3362 = 0;
	var uLocal_3363 = 0;
	var uLocal_3364 = 0;
	var uLocal_3365 = 0;
	var uLocal_3366 = 0;
	var uLocal_3367 = 0;
	var uLocal_3368 = 0;
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
	var uLocal_3380 = 1065353216;
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
	var uLocal_3407 = -1;
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
	var uLocal_3437 = 1065353216;
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
	var uLocal_3461 = 16;
	var uLocal_3462 = 0;
	var uLocal_3463 = -1082130432;
	var uLocal_3464 = 0;
	var uLocal_3465 = -1082130432;
	var uLocal_3466 = 0;
	var uLocal_3467 = -1082130432;
	var uLocal_3468 = 0;
	var uLocal_3469 = -1082130432;
	var uLocal_3470 = 0;
	var uLocal_3471 = -1082130432;
	var uLocal_3472 = 0;
	var uLocal_3473 = -1082130432;
	var uLocal_3474 = 0;
	var uLocal_3475 = -1082130432;
	var uLocal_3476 = 0;
	var uLocal_3477 = -1082130432;
	var uLocal_3478 = 0;
	var uLocal_3479 = -1082130432;
	var uLocal_3480 = 0;
	var uLocal_3481 = -1082130432;
	var uLocal_3482 = 0;
	var uLocal_3483 = -1082130432;
	var uLocal_3484 = 0;
	var uLocal_3485 = -1082130432;
	var uLocal_3486 = 0;
	var uLocal_3487 = -1082130432;
	var uLocal_3488 = 0;
	var uLocal_3489 = -1082130432;
	var uLocal_3490 = 0;
	var uLocal_3491 = -1082130432;
	var uLocal_3492 = 0;
	var uLocal_3493 = -1082130432;
	var uLocal_3494 = 16;
	var uLocal_3495 = 0;
	var uLocal_3496 = -1082130432;
	var uLocal_3497 = 0;
	var uLocal_3498 = -1082130432;
	var uLocal_3499 = 0;
	var uLocal_3500 = -1082130432;
	var uLocal_3501 = 0;
	var uLocal_3502 = -1082130432;
	var uLocal_3503 = 0;
	var uLocal_3504 = -1082130432;
	var uLocal_3505 = 0;
	var uLocal_3506 = -1082130432;
	var uLocal_3507 = 0;
	var uLocal_3508 = -1082130432;
	var uLocal_3509 = 0;
	var uLocal_3510 = -1082130432;
	var uLocal_3511 = 0;
	var uLocal_3512 = -1082130432;
	var uLocal_3513 = 0;
	var uLocal_3514 = -1082130432;
	var uLocal_3515 = 0;
	var uLocal_3516 = -1082130432;
	var uLocal_3517 = 0;
	var uLocal_3518 = -1082130432;
	var uLocal_3519 = 0;
	var uLocal_3520 = -1082130432;
	var uLocal_3521 = 0;
	var uLocal_3522 = -1082130432;
	var uLocal_3523 = 0;
	var uLocal_3524 = -1082130432;
	var uLocal_3525 = 0;
	var uLocal_3526 = -1082130432;
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
	var uLocal_3543 = -1082130432;
	var uLocal_3544 = -1082130432;
	var uLocal_3545 = 1;
	var uLocal_3546 = 1;
	var uLocal_3547 = 1;
	var uLocal_3548 = -1;
	var uLocal_3549 = -1;
	var uLocal_3550 = -1;
	int iLocal_3551 = 0;
	int iLocal_3552 = 0;
	int iLocal_3553 = 0;
	int iLocal_3554 = 0;
	bool bLocal_3555 = 0;
	int iLocal_3556 = 0;
	bool bLocal_3557 = 0;
	int iLocal_3558 = 0;
	int iLocal_3559 = 0;
	bool bLocal_3560 = 0;
	int iLocal_3561 = 0;
	int iLocal_3562 = 0;
	int iLocal_3563 = 0;
	int iLocal_3564 = 0;
	int iLocal_3565 = 0;
	int iLocal_3566 = 0;
	int iLocal_3567 = 0;
	int iLocal_3568 = 0;
	float fLocal_3569 = 0f;
	float fLocal_3570 = 0f;
	float fLocal_3571 = 0f;
	float fLocal_3572 = 0f;
	float fLocal_3573 = 0f;
	float fLocal_3574 = 0f;
	float fLocal_3575 = 0f;
	float fLocal_3576 = 0f;
	float fLocal_3577 = 0f;
	float fLocal_3578 = 0f;
	float fLocal_3579 = 0f;
	float fLocal_3580 = 0f;
	float fLocal_3581 = 0f;
	float fLocal_3582 = 0f;
	float fLocal_3583 = 0f;
	float fLocal_3584 = 0f;
	int iLocal_3585 = 0;
	int iLocal_3586 = 0;
	int iLocal_3587 = 0;
	struct<3> Local_3588 = { 0, 0, 0 } ;
	struct<3> Local_3591 = { 0, 0, 0 } ;
	struct<3> Local_3594 = { 0, 0, 0 } ;
	struct<3> Local_3597 = { 0, 0, 0 } ;
	struct<3> Local_3600 = { 0, 0, 0 } ;
	int iLocal_3603 = 0;
	var uLocal_3604 = 0;
	var uLocal_3605 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
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
	fLocal_47 = 1f;
	iLocal_51 = 1;
	iLocal_58 = 1;
	bLocal_80 = true;
	fLocal_541 = 120f;
	fLocal_542 = 0f;
	fLocal_544 = 1f;
	fLocal_545 = 0f;
	fLocal_546 = 1f;
	fLocal_547 = 30f;
	fLocal_549 = 1f;
	fLocal_550 = 5f;
	fLocal_551 = 1f;
	fLocal_552 = 1f;
	fLocal_553 = 100f;
	fLocal_554 = 100f;
	fLocal_555 = 0f;
	fLocal_556 = 7000f;
	fLocal_557 = 0f;
	fLocal_558 = 0f;
	fLocal_559 = 0.3f;
	fLocal_560 = 0.5f;
	fLocal_561 = 50f;
	iLocal_802 = -1;
	iLocal_810 = -1;
	iLocal_811 = -1;
	iLocal_1452 = 3;
	iLocal_1488 = -1;
	iLocal_1490 = -1;
	fLocal_1510 = 221.0246f;
	fLocal_1511 = 47.0949f;
	fLocal_1512 = 0f;
	fLocal_1513 = 0f;
	fLocal_1514 = -50f;
	fLocal_1515 = 154.5624f;
	fLocal_1516 = 0f;
	Local_1517 = { 517.0918f, -1327.611f, 28.2764f };
	Local_1520 = { 508.1402f, -1316.788f, 30.2369f };
	Local_1523 = { 520.1395f, -1326.776f, 28.3382f };
	Local_1526 = { 1566.434f, 6463.426f, 23.191f };
	Local_1535 = { -2197.776f, 4265.894f, 47.3056f };
	Local_1538 = { 1576.93f, 6451.702f, 24.0479f };
	Local_1541 = { 0.75f, -10.85f, -1f };
	Local_1544 = { -0.75f, -10.85f, -1f };
	Local_1550 = { 255f, 100f, 10f };
	Local_1553 = { 0.6f, 0.5f, 0f };
	Local_1556 = { 0f, -0.08f, 0.05f };
	sLocal_1563 = "MattCarHeist";
	sLocal_1564 = "carsteal5_10";
	sLocal_1565 = "carsteal5_11";
	sLocal_1566 = "misscarstealfinale";
	sLocal_1567 = "";
	sLocal_1568 = "misscarstealfinalecar_5_ig_8";
	sLocal_1569 = "misscarstealfinalecar_5_ig_6";
	sLocal_1570 = "misscarstealfinalecar_5_ig_3";
	sLocal_1571 = "misscarstealfinalecar_5_ig_4";
	sLocal_1572 = "misscarstealfinalecar_5_ig_1";
	sLocal_1573 = "misscarstealfinalecar_5_ig_10_switch";
	sLocal_1574 = "misscarsteal4leadinout";
	sLocal_1575 = "veh@truck@ps@base";
	sLocal_1576 = "misscarsteal4asleep";
	sLocal_1577 = "FACIALS@P_M_ONE@BASE";
	sLocal_1578 = "shake_cam_all@";
	iLocal_2032 = joaat("packer");
	iLocal_2033 = joaat("tr4");
	iLocal_2034 = joaat("prop_tyre_spike_01");
	iLocal_2035 = joaat("s_m_y_sheriff_01");
	iLocal_2036 = joaat("sheriff");
	iLocal_2037 = joaat("ig_molly");
	iLocal_2038 = joaat("felon");
	iLocal_2039 = joaat("a_m_y_business_02");
	iLocal_2040 = joaat("oracle2");
	iLocal_2044 = 2;
	bLocal_2300 = true;
	fLocal_2302 = 0.8f;
	fLocal_2303 = 1f;
	iLocal_2304 = 1000;
	iLocal_2305 = 900;
	iLocal_2306 = 600;
	iLocal_2307 = 500;
	fLocal_2308 = 0.25f;
	fLocal_3569 = 0.125f;
	fLocal_3570 = 0.1f;
	fLocal_3571 = 0.08f;
	fLocal_3572 = 0.25f;
	fLocal_3573 = 0.72f;
	fLocal_3574 = 0.725f;
	fLocal_3575 = 0f;
	fLocal_3576 = 0f;
	fLocal_3577 = 0f;
	fLocal_3578 = 0.3f;
	fLocal_3579 = 0f;
	fLocal_3580 = 0.245f;
	fLocal_3581 = 30f;
	fLocal_3582 = 100f;
	fLocal_3583 = 0f;
	fLocal_3584 = 0f;
	iLocal_3587 = 250;
	Local_3588 = { 15f, 10f, 0f };
	Local_3591 = { -5f, -10f, 0f };
	Local_3594 = { 0f, -40f, 0f };
	Local_3597 = { -0.75f, -0.8f, 1f };
	Local_3600 = { 0f, 0f, 180f };
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GlobalFunc_10632();
		func_782();
	}
	func_780();
	if (GlobalFunc_Is_Mission_Retry())
	{
		iVar0 = GlobalFunc_Get_Mission_Fail_Checkpoint();
		if (Global_84544)
		{
			iVar0++;
		}
		if (iVar0 == 0)
		{
			func_777(0, 0);
		}
		else if (iVar0 == 1)
		{
			func_777(1, 0);
			bLocal_1373 = true;
			GlobalFunc_7621(8, 0, 0, 1, 0);
			GlobalFunc_7621(9, 0, 0, 1, 0);
			GlobalFunc_7621(10, 0, 0, 1, 0);
			GlobalFunc_7621(7, 0, 0, 1, 0);
		}
		else if (iVar0 == 2)
		{
			func_777(3, 0);
		}
		else if (iVar0 == 3)
		{
			func_777(4, 0);
		}
		else if (iVar0 == 4)
		{
			func_777(5, 0);
		}
		else if (iVar0 > 4)
		{
			func_777(7, 0);
		}
		bLocal_1377 = true;
	}
	else
	{
		GlobalFunc_Checkpoint7(0, "START_PHONE_CALL", 0, 0, 0, 1);
	}
	if (GlobalFunc_Is_Mission_Retry() || GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
		}
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (bLocal_1377)
		{
			if (iLocal_2042 == 1)
			{
				bLocal_1377 = false;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2045[1]))
		{
			if (PED::IS_PED_INJURED(iLocal_2045[1]))
			{
				func_724(1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2045[2]))
		{
			if (PED::IS_PED_INJURED(iLocal_2045[2]))
			{
				func_724(2);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_1749.x))
		{
			if (PED::IS_PED_INJURED(Local_1749.x))
			{
				func_724(12);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_1746.f_1))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_1746.f_1))
			{
				func_724(4);
			}
			else
			{
				VEHICLE::_0xBE5C1255A1830FF5(Local_1746.f_1, 1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_1746.x))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1746.x, 0))
			{
				func_724(4);
			}
			else
			{
				if (((GlobalFunc_2226(&Local_1746) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_1746.f_1, 0, 7000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_1746.f_1, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_1746.f_1, 1, 40000))
				{
					func_724(8);
				}
				VEHICLE::_0xBE5C1255A1830FF5(Local_1746.x, 1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1622))
		{
			if (PED::IS_PED_INJURED(iLocal_1622))
			{
				func_724(17);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1608))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1608, 0))
			{
				func_724(21);
			}
		}
		iVar1 = 0;
		iVar2 = 0;
		iVar1 = 0;
		while (iVar1 < Local_1631)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_1631[iVar1 /*19*/]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1631[iVar1 /*19*/], 0))
				{
					iVar2++;
				}
				else if (iLocal_2041 == 1 || iLocal_2041 == 5)
				{
					if (!ENTITY::IS_ENTITY_ATTACHED(Local_1631[iVar1 /*19*/]))
					{
						iVar3 = 1;
						if (iLocal_2041 == 5 && iVar1 == iLocal_1452)
						{
							iVar3 = 1;
						}
						if (GlobalFunc_2226(&(Local_1631[iVar1 /*19*/])) && iVar3)
						{
							func_724(7);
						}
					}
				}
			}
			iVar1++;
		}
		if (iVar2 > 0)
		{
			if (iVar2 == 1)
			{
				func_724(3);
			}
			else if (iVar2 == Local_1631)
			{
				func_724(6);
			}
			else
			{
				func_724(5);
			}
		}
		if (iLocal_2041 > 1)
		{
			if (!func_722())
			{
				GlobalFunc_2224(1);
			}
		}
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (!ENTITY::IS_ENTITY_DEAD(iVar4))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Global_54761) || (ENTITY::IS_ENTITY_A_VEHICLE(Global_54761) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Global_54761) != iVar4))
				{
					GlobalFunc_503(iVar4, -1);
				}
				if (iVar4 != Local_1746.x)
				{
					if (iLocal_2041 > 3)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Global_54763) || (ENTITY::IS_ENTITY_A_VEHICLE(Global_54763) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Global_54763) != iVar4))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar4, 0) && VEHICLE::IS_VEHICLE_MODEL(iVar4, joaat("jb700")))
							{
								GlobalFunc_504(iVar4, -1);
							}
						}
					}
				}
			}
		}
		RECORDING::_0x208784099002BC30("M_PackMan", 0);
		if (iLocal_1509 > MISC::GET_GAME_TIMER())
		{
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
		}
		switch (iLocal_2041)
		{
			case 0:
				func_680();
				break;
			
			case 1:
				func_630();
				break;
			
			case 2:
				func_626();
				break;
			
			case 3:
			case 4:
				func_533();
				break;
			
			case 5:
				func_491();
				break;
			
			case 6:
				func_407();
				break;
			
			case 7:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x7BD
{
	int iVar0;
	int iVar1;
	
	if (iLocal_2042 == 0)
	{
		if (iLocal_1362)
		{
			if (iLocal_1388 != 99)
			{
				if (func_356())
				{
					if (bLocal_1377)
					{
						GlobalFunc_5116(1542.97f, 6481.625f, 21.582f, 314.9911f, 1, 0);
						iLocal_1388 = 99;
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1542.97f, 6481.625f, 21.582f, 1, 0, 0, 1);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
						STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
						iLocal_1388 = 99;
					}
				}
			}
			else
			{
				MISC::CLEAR_AREA_OF_VEHICLES(Local_1526, 50f, 0, 0, 0, 0, 0);
				if ((((((GlobalFunc_82() && func_352(1563.57f, 6465.22f, 23.96f, 231.4902f)) && func_349()) && func_345(1522.97f, 6481.625f, 21.582f, 200.8915f)) && func_51(1512.97f, 6481.625f, 21.582f, 204.3612f)) && func_50(0)) && func_49(0))
				{
					GlobalFunc_5108(0, -1, 0);
					func_45(1);
					GlobalFunc_9132(1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1746.x, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_2045[2]))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_2045[2], Local_1746.x, -1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2045[2], 1);
							PED::SET_PED_MAX_HEALTH(iLocal_2045[2], 1800);
							ENTITY::SET_ENTITY_HEALTH(iLocal_2045[2], 1800);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_2045[2], 3, 0);
							PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_2045[2], 0);
						}
						if (!PED::IS_PED_INJURED(Local_1749.x))
						{
							PED::SET_PED_INTO_VEHICLE(Local_1749.x, Local_1746.x, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1749.x, 1);
							PED::SET_PED_MAX_HEALTH(Local_1749.x, 1800);
							ENTITY::SET_ENTITY_HEALTH(Local_1749.x, 1800);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1749.x, 3, 0);
							PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_1749.x, 0);
						}
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1746.x, 0);
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_1746.x, 0, 1862763509);
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_1746.f_1))
					{
						VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1746.f_1, 5, 0, 0);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1746.f_1, 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1631[iLocal_1452 /*19*/], 0))
					{
						ENTITY::DETACH_ENTITY(Local_1631[iLocal_1452 /*19*/], 1, 1);
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_1631[iLocal_1452 /*19*/], 0);
						VEHICLE::SET_VEHICLE_STRONG(Local_1631[iLocal_1452 /*19*/], 1);
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1631[iLocal_1452 /*19*/], 1);
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1631[iLocal_1452 /*19*/], -1);
						ENTITY::SET_ENTITY_COLLISION(Local_1631[iLocal_1452 /*19*/], 1, 0);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1631[iLocal_1452 /*19*/], 1, 1);
						ENTITY::SET_ENTITY_COORDS(Local_1631[iLocal_1452 /*19*/], 1542.97f, 6481.625f, 21.582f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_1631[iLocal_1452 /*19*/], 231.4902f);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1631[iLocal_1452 /*19*/], 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1631[iLocal_1452 /*19*/]);
					}
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < Local_1631)
					{
						if (iVar0 != iLocal_1452)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1631[iVar0 /*19*/], 0))
							{
								VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1631[iVar0 /*19*/], 0);
							}
						}
						iVar0++;
					}
					func_34(1);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					iLocal_1362 = 0;
				}
			}
		}
		else
		{
			CUTSCENE::REQUEST_CUTSCENE("CAR_5_EXT", 8);
			GlobalFunc_2536(1, 0);
			func_24("CAR_5_EXT");
			if (GlobalFunc_Has_Cutscene_Loaded() && !GlobalFunc_5172(&Local_1810, 0))
			{
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(1);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
				if (!PED::IS_PED_INJURED(iLocal_1622))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1622, "Molly", 0, 0, 0);
					TASK::TASK_CLEAR_LOOK_AT(iLocal_1622);
				}
				if (!PED::IS_PED_INJURED(iLocal_1623))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1623, "CAR_5_Driver", 0, 0, 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1608, 0))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1608, "Felon", 0, 0, 0);
				}
				PATHFIND::SET_ROADS_IN_AREA(1547.461f, 6427.142f, 0.6085f, 1577.701f, 6472.868f, 58.6085f, 1, 1);
				GlobalFunc_8316(1, 1, 1, 0);
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x293220DA1B46CEBC(5f, 0f, 4);
				RECORDING::_0x48621C9FCA3EBD28(4);
				SYSTEM::SETTIMERB(0);
				Local_1749.f_2 = 0;
				iLocal_1388 = 0;
				iLocal_1367 = 0;
				iLocal_1382 = 0;
				iLocal_2042 = 1;
			}
		}
	}
	if (iLocal_2042 == 1)
	{
		if (!iLocal_1382)
		{
			if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 55000)
			{
				MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(1570.441f, 6426.118f, 23.42837f, 1644.326f, 6396.519f, 35.54884f, 17.25f, 0, 0, 0, 0, 0);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				iLocal_1382 = 1;
			}
		}
		else
		{
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		}
		switch (iLocal_1388)
		{
			case 0:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 2);
					CAM::STOP_GAMEPLAY_HINT(1);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_1609))
					{
						ENTITY::SET_ENTITY_HEADING(iLocal_1609, fLocal_1515);
						ENTITY::SET_ENTITY_COORDS(iLocal_1609, Local_1538, 1, 0, 0, 1);
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_1631[iLocal_1452 /*19*/]))
					{
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1631[iLocal_1452 /*19*/], 0, 0);
						if (ENTITY::IS_ENTITY_AT_COORD(Local_1631[iLocal_1452 /*19*/], 1587.147f, 6446.023f, 25.64085f, 3f, 6f, 2f, 0, 1, 0))
						{
							ENTITY::SET_ENTITY_HEADING(Local_1631[iLocal_1452 /*19*/], 231.4902f);
							ENTITY::SET_ENTITY_COORDS(Local_1631[iLocal_1452 /*19*/], 1542.97f, 6481.625f, 21.582f, 1, 0, 0, 1);
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_1746.x))
					{
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_1746.x, 0);
					}
					func_9(&Local_1994);
					STREAMING::REMOVE_ANIM_DICT(sLocal_1574);
					MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 200f, 1, 0, 0, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
					AUDIO::STOP_SOUND(iLocal_3585);
					AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CAR_STEAL_4");
					GlobalFunc_2204();
					iLocal_1388++;
				}
				break;
			
			case 1:
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
					iLocal_1367 = 1;
				}
				if (CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
					{
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Molly", 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1608, 0) && !PED::IS_PED_INJURED(iLocal_1622))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_1622, iLocal_1608, 2);
						}
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("CAR_5_Driver", 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1608, 0) && !PED::IS_PED_INJURED(iLocal_1623))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_1623, iLocal_1608, -1);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(iLocal_1623, iLocal_1608, 133.1f, 6550.4f, 31.4f, 70f, 786599, 5f);
							PED::SET_PED_KEEP_TASK(iLocal_1623, true);
						}
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Felon", 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1608, 0))
						{
							VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_1608, 1);
							VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1608, 1, 1);
							ENTITY::SET_ENTITY_HEADING(iLocal_1608, 152.2173f);
							ENTITY::SET_ENTITY_COORDS(iLocal_1608, 1589.998f, 6438.887f, 24.1705f, 1, 0, 0, 1);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_1608, 7.5f);
						}
					}
				}
				else if (CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					func_7(&(iLocal_2045[2]), 1, 0);
					func_7(&Local_1749, 1, 0);
					iVar1 = 0;
					while (iVar1 < Local_1631)
					{
						func_6(&(Local_1631[iVar1 /*19*/]), 1, 1);
						iVar1++;
					}
					func_6(&(Local_1746.f_1), 1, 1);
					func_6(&Local_1746, 1, 1);
					if (iLocal_1367 == 1)
					{
						func_7(&iLocal_1622, 1, 0);
						func_7(&iLocal_1623, 1, 0);
						func_6(&iLocal_1608, 1, 1);
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1586.364f, 6446.762f, 24.1461f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 160.0188f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					}
					GlobalFunc_8316(0, 1, 1, 0);
					RECORDING::_0x81CBAE94390F9F89();
					SYSTEM::SETTIMERB(0);
					iLocal_1388++;
				}
				break;
			
			case 2:
				PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
				if (SYSTEM::TIMERB() > 3000 || iLocal_1367)
				{
					iLocal_2042 = 2;
				}
				break;
		}
		if (!PED::IS_PED_INJURED(iLocal_2045[2]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1746.x, 0))
		{
			switch (Local_1749.f_2)
			{
				case 0:
					VEHICLE::REQUEST_VEHICLE_RECORDING(100, sLocal_1563);
					if ((CUTSCENE::IS_CUTSCENE_PLAYING() && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(100, sLocal_1563)) && CUTSCENE::GET_CUTSCENE_TIME() > 29000)
					{
						VEHICLE::DETACH_VEHICLE_FROM_TRAILER(Local_1746.x);
						if (ENTITY::DOES_ENTITY_EXIST(Local_1631[iLocal_1452 /*19*/]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_1631[iLocal_1452 /*19*/]))
							{
								if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Local_1631[iLocal_1452 /*19*/]))
								{
									VEHICLE::ATTACH_VEHICLE_ON_TO_TRAILER(Local_1631[iLocal_1452 /*19*/], Local_1746.f_1, 0f, 0f, 0f, Local_1631[iLocal_1452 /*19*/].f_2, Local_1631[iLocal_1452 /*19*/].f_5, -1f);
								}
								VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_1631[iLocal_1452 /*19*/], 0);
								VEHICLE::SET_VEHICLE_STRONG(Local_1631[iLocal_1452 /*19*/], 1);
								VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1631[iLocal_1452 /*19*/], 1);
								AUDIO::SET_HORN_ENABLED(Local_1631[iLocal_1452 /*19*/], 0);
							}
						}
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1746.x, 1, 1);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1746.x, 100, sLocal_1563, 1);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1746.x, 0);
						VEHICLE::SET_PLAYBACK_SPEED(Local_1746.x, 0f);
						VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_1746.f_1, 5, 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2045[2], 1);
						Local_1749.f_2++;
					}
					break;
				
				case 1:
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Local_1746.x))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1746.f_1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1746.x, 0.191836f, -9.89637f, 0.27933f), 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_1746.f_1, ENTITY::GET_ENTITY_HEADING(Local_1746.x));
						VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_1746.x, Local_1746.f_1, 1065353216);
						VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_1746.f_1, 5, 1);
						PHYSICS::ACTIVATE_PHYSICS(Local_1746.f_1);
					}
					if (CUTSCENE::GET_CUTSCENE_TIME() > 49000)
					{
						VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_1746.f_1, 5, 1);
						VEHICLE::SET_PLAYBACK_SPEED(Local_1746.x, 1f);
						Local_1749.f_2++;
					}
					break;
				
				case 2:
					break;
				}
			}
	}
	if (iLocal_2042 == 2)
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(1);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(1547.461f, 6427.142f, 0.6085f, 1577.701f, 6472.868f, 58.6085f, 1);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		func_2();
	}
	if (iLocal_2042 == 3)
	{
		CUTSCENE::STOP_CUTSCENE(0);
		while (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			SYSTEM::WAIT(0);
		}
		iLocal_1367 = 1;
		iLocal_2042 = 1;
	}
}

void func_2()//Position - 0x11B1
{
	GlobalFunc_7621(8, 0, 0, 1, 0);
	GlobalFunc_7621(9, 0, 0, 1, 0);
	GlobalFunc_7621(10, 0, 0, 1, 0);
	GlobalFunc_7621(7, 0, 0, 1, 0);
	GlobalFunc_2204();
	GlobalFunc_5103(0, 0);
	func_782();
}




void func_6(int iParam0, bool bParam1, bool bParam2)//Position - 0x1337
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (bParam2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
				{
					ENTITY::DETACH_ENTITY(*iParam0, 1, 1);
				}
			}
		}
		if (bParam1)
		{
			VEHICLE::DELETE_VEHICLE(iParam0);
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_7(int iParam0, bool bParam1, bool bParam2)//Position - 0x1380
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, 0) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(*iParam0))
			{
				if ((ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(*iParam0) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0)) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(*iParam0))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, sLocal_1575, "sit", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, sLocal_1575, "die", 3))
					{
						ENTITY::DETACH_ENTITY(*iParam0, 1, 1);
					}
				}
				ENTITY::FREEZE_ENTITY_POSITION(*iParam0, 0);
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, 0))
			{
				ENTITY::SET_ENTITY_COLLISION(*iParam0, 1, 0);
			}
			AUDIO::STOP_PED_SPEAKING(*iParam0, 0);
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(*iParam0);
			if (bParam2)
			{
				PED::SET_PED_KEEP_TASK(*iParam0, bParam2);
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


void func_9(var uParam0)//Position - 0x1488
{
	STREAMING::REMOVE_PTFX_ASSET();
	if (uParam0->f_2 != -1)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_2))
		{
			AUDIO::STOP_SOUND(uParam0->f_2);
		}
		AUDIO::RELEASE_SOUND_ID(uParam0->f_2);
		uParam0->f_2 = -1;
	}
	if (uParam0->f_3 != -1)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_3))
		{
			AUDIO::STOP_SOUND(uParam0->f_3);
		}
		AUDIO::RELEASE_SOUND_ID(uParam0->f_3);
		uParam0->f_3 = -1;
	}
}















void func_24(char* sParam0)//Position - 0x17F3
{
	int iVar0;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		if (iVar0 == -497473443)
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", PLAYER::PLAYER_PED_ID(), 0);
			if (!PED::IS_PED_INJURED(Local_1749.x) && !PED::IS_PED_INJURED(iLocal_2045[2]))
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Lamar", Local_1749.x, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", iLocal_2045[2], 0);
			}
		}
		else if (iVar0 == -1189620261)
		{
			if ((!PED::IS_PED_INJURED(func_25(1)) && !PED::IS_PED_INJURED(func_25(2))) && !PED::IS_PED_INJURED(Local_1749.x))
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", func_25(1), 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", func_25(2), 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Lamar", Local_1749.x, 0);
			}
		}
		else if (iVar0 == 1439764295)
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", PLAYER::PLAYER_PED_ID(), 0);
			if (!PED::IS_PED_INJURED(iLocal_1621))
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Devin", iLocal_1621, 0);
			}
		}
		else if (iVar0 == -1961265987)
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", PLAYER::PLAYER_PED_ID(), 0);
			if (!PED::IS_PED_INJURED(iLocal_1622))
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("A_F_Y_Vinewood_02", iLocal_1622, 0);
			}
		}
	}
}

int func_25(int iParam0)//Position - 0x1917
{
	if (GlobalFunc_8315() == iParam0)
	{
		return PLAYER::PLAYER_PED_ID();
	}
	return iLocal_2045[GlobalFunc_237(iParam0)];
}









void func_34(bool bParam0)//Position - 0x1BC8
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam0)
	{
		if (iLocal_1625[0] == 0)
		{
			iLocal_1625[0] = PED::ADD_SCENARIO_BLOCKING_AREA(-2257.812f, 4221.464f, 0.1865f, -2119.211f, 4336.617f, 54.1865f, 0, 1, 1, 1);
		}
		if (iLocal_1625[1] == 0)
		{
			iLocal_1625[1] = PED::ADD_SCENARIO_BLOCKING_AREA(-470.8388f, 5992.07f, 0.8099f, -412.9256f, 6094.301f, 38.3099f, 0, 1, 1, 1);
		}
		if (iLocal_1625[2] == 0)
		{
			iLocal_1625[2] = PED::ADD_SCENARIO_BLOCKING_AREA(-107.0392f, 6259.404f, 0.2007f, -94.94563f, 6268.518f, 38.3446f, 0, 1, 1, 1);
		}
		if (iLocal_1625[3] == 0)
		{
			iLocal_1625[3] = PED::ADD_SCENARIO_BLOCKING_AREA(1547.081f, 6406.139f, 0.7764f, 1650.053f, 6498.229f, 40.7764f, 0, 1, 1, 1);
		}
		if (iLocal_1625[4] == 0)
		{
			iLocal_1625[4] = PED::ADD_SCENARIO_BLOCKING_AREA(-38.98565f, 6296.902f, 0.2007f, -25.40839f, 6308.043f, 38.3446f, 0, 1, 1, 1);
		}
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(1547.081f, 6406.139f, 0.7764f, 1650.053f, 6498.229f, 60.7764f, 0, 1);
		TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_POLICE_BIKE", 0);
		TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_POLICE_CAR", 0);
		TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_POLICE_NEXT_TO_CAR", 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iLocal_1625)
		{
			if (iLocal_1625[iVar0] != 0)
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1625[iVar0], 0);
				iLocal_1625[iVar0] = 0;
			}
			iVar0++;
		}
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(1547.081f, 6406.139f, 0.7764f, 1650.053f, 6498.229f, 60.7764f, 1, 1);
		TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_POLICE_BIKE", 1);
		TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_POLICE_CAR", 1);
		TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_POLICE_NEXT_TO_CAR", 1);
	}
}











void func_45(int iParam0)//Position - 0x2269
{
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("packer"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("phantom"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("hauler"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("pounder"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("scrap"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("mixer"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("flatbed"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("trailersmall"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("boattrailer"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tr2"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tr3"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tr4"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("trailerlogs"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("trailers"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("trailers2"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("trailers3"), iParam0);
}




int func_49(bool bParam0)//Position - 0x2422
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1609))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1538) < 40000f || CAM::IS_SCREEN_FADED_OUT())
		{
			STREAMING::REQUEST_MODEL(iLocal_2040);
			if (STREAMING::HAS_MODEL_LOADED(iLocal_2040))
			{
				if (bParam0)
				{
					return 1;
				}
				else
				{
					MISC::CLEAR_AREA(Local_1538, 10f, 1, 0, 0, 0);
					iLocal_1609 = VEHICLE::CREATE_VEHICLE(iLocal_2040, Local_1538, fLocal_1515, 1, 1);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_1609, 61, 61);
					VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_1609, 67, 0);
					VEHICLE::SET_VEHICLE_DIRT_LEVEL(iLocal_1609, 1f);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1609);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_1609, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2040);
					return 1;
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_50(bool bParam0)//Position - 0x24DC
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	
	Var0 = { 1587.45f, 6447.68f, 24.1753f };
	Var3 = { 1587.789f, 6445.383f, 24.2117f };
	fVar6 = 88.1625f;
	fVar7 = 156.445f;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1608))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var3) < 40000f)
		{
			STREAMING::REQUEST_MODEL(iLocal_2037);
			STREAMING::REQUEST_MODEL(iLocal_2038);
			STREAMING::REQUEST_MODEL(iLocal_2039);
			if ((STREAMING::HAS_MODEL_LOADED(iLocal_2037) && STREAMING::HAS_MODEL_LOADED(iLocal_2038)) && STREAMING::HAS_MODEL_LOADED(iLocal_2039))
			{
				if (bParam0)
				{
					return 1;
				}
				else
				{
					MISC::CLEAR_AREA(Var3, 10f, 1, 0, 0, 0);
					iLocal_1608 = VEHICLE::CREATE_VEHICLE(iLocal_2038, Var3, fVar7, 1, 1);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_1608, 0, 0);
					VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_1608, 0, 0);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_1608, "665LDI37");
					VEHICLE::SET_VEHICLE_DIRT_LEVEL(iLocal_1608, 0f);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1608);
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_1608, 3, 1, 0);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_1608, 1);
					AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_1608, 0);
					iLocal_1622 = PED::CREATE_PED(26, iLocal_2037, Var0, fVar6, 1, 1);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_1622, 1);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_1622, 1862763509);
					PED::SET_PED_PROP_INDEX(iLocal_1622, 1, 0, 0, false);
					PED::SET_PED_LOD_MULTIPLIER(iLocal_1622, 2f);
					iLocal_2044 = 2;
					iLocal_1490 = -1;
					iLocal_1623 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1608, 26, iLocal_2039, -1, 1, 1);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_1623, 1862763509);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2037);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2038);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2039);
					return 1;
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_51(struct<3> Param0, float fParam3)//Position - 0x266C
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2045[2]))
	{
		if (func_53(&(iLocal_2045[2]), 2, Param0, fParam3, 1, 0, 0))
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iLocal_2045[2], 1);
			GlobalFunc_173(&Local_2123, 2, iLocal_2045[2], "TREVOR", 0, 1);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_2045[2], 0);
			PED::SET_PED_MAX_HEALTH(iLocal_2045[2], 200);
			ENTITY::SET_ENTITY_HEALTH(iLocal_2045[2], 200);
			PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_2045[2], 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_2045[2], 1862763509);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}


int func_53(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x279C
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
			GlobalFunc_8569(*iParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*iParam0, 0, 0);
			GlobalFunc_11317(*iParam0);
			GlobalFunc_7694(*iParam0, 1, 0);
			GlobalFunc_7693(*iParam0);
			GlobalFunc_7707(*iParam0);
			GlobalFunc_11332(*iParam0, bParam8);
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




































































































































































































































































































int func_345(struct<3> Param0, float fParam3)//Position - 0x4CF64
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1749.x))
	{
		if (GlobalFunc_7142(&Local_1749, 19, Param0, fParam3, 1))
		{
			PED::SET_PED_CAN_BE_TARGETTED(Local_1749.x, 0);
			PED::SET_PED_MAX_HEALTH(Local_1749.x, 200);
			ENTITY::SET_ENTITY_HEALTH(Local_1749.x, 200);
			PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_1749.x, 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1749.x, 1862763509);
			PED::SET_PED_CONFIG_FLAG(Local_1749.x, 32, 0);
			PED::SET_PED_CONFIG_FLAG(Local_1749.x, 118, 0);
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Local_1749.x, 1);
			GlobalFunc_173(&Local_2123, 5, Local_1749.x, "LAMAR", 0, 1);
			WEAPON::GIVE_WEAPON_TO_PED(Local_1749.x, joaat("weapon_pistol"), -1, 0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_1749.x, 2, 1);
			ENTITY::SET_ENTITY_LOD_DIST(Local_1749.x, 150);
			PED::SET_PED_LOD_MULTIPLIER(Local_1749.x, 5f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}




int func_349()//Position - 0x4D11A
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1631[5 /*19*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1746.f_1))
		{
			STREAMING::REQUEST_MODEL(Local_1631[0 /*19*/].f_18);
			STREAMING::REQUEST_MODEL(Local_1631[3 /*19*/].f_18);
			if (STREAMING::HAS_MODEL_LOADED(Local_1631[0 /*19*/].f_18) && STREAMING::HAS_MODEL_LOADED(Local_1631[3 /*19*/].f_18))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < Local_1631)
				{
					switch (iVar0)
					{
						case 0:
						case 3:
							if (!ENTITY::DOES_ENTITY_EXIST(Local_1631[iVar0 /*19*/]))
							{
								Local_1631[iVar0 /*19*/] = func_351(Local_1631[iVar0 /*19*/].f_18, Local_1517 + Vector(IntToFloat(iVar0), 0f, 0f), 0f);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1631[iVar0 /*19*/], 1);
								GlobalFunc_743(Local_1631[iVar0 /*19*/], iVar0);
								if (Local_1631[iVar0 /*19*/].f_18 == joaat("monroe"))
								{
									VEHICLE::ATTACH_VEHICLE_ON_TO_TRAILER(Local_1631[iVar0 /*19*/], Local_1746.f_1, 0f, 0f, 0f, Local_1631[iVar0 /*19*/].f_2, Local_1631[iVar0 /*19*/].f_5, -1f);
								}
								else
								{
									VEHICLE::ATTACH_VEHICLE_ON_TO_TRAILER(Local_1631[iVar0 /*19*/], Local_1746.f_1, 0f, 0f, 0f, Local_1631[iVar0 /*19*/].f_2, Local_1631[iVar0 /*19*/].f_5, -1f);
								}
								Local_1631[iVar0 /*19*/].f_12 = 0;
								if (Local_1631[iVar0 /*19*/].f_18 == joaat("jb700"))
								{
									VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_1631[iVar0 /*19*/], 0);
									VEHICLE::SET_VEHICLE_STRONG(Local_1631[iVar0 /*19*/], 1);
									VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1631[iVar0 /*19*/], 1);
									AUDIO::SET_HORN_ENABLED(Local_1631[iVar0 /*19*/], 0);
								}
							}
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1631[iVar0 /*19*/].f_18);
							break;
					}
					iVar0++;
				}
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


int func_351(int iParam0, struct<3> Param1, float fParam4)//Position - 0x4D2CA
{
	int iVar0;
	
	if (iParam0 == joaat("monroe"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, fParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 89, 89);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 88, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, " FA5T66 ");
	}
	else if (iParam0 == joaat("cheetah"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, fParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 62, 62);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 68, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, " SDTM1YP");
	}
	else if (iParam0 == joaat("stinger"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, fParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 27, 27);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 36, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, "ALPHADOG");
		VEHICLE::SET_VEHICLE_EXTRA(iVar0, 1, true);
	}
	else if (iParam0 == joaat("jb700"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, fParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 3, 3);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 3, 3);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, "  4G3NT");
	}
	else if (iParam0 == joaat("entityxf"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, fParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 38, 38);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 37, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, " MKB652 ");
	}
	else if (iParam0 == joaat("ztype"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, fParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 0, 0);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 10, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, " V1NTAG3");
	}
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(iVar0, 0f);
		VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iVar0, 0, 0);
		VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar0, 0);
	}
	return iVar0;
}

int func_352(struct<3> Param0, float fParam3)//Position - 0x4D453
{
	if (func_353(Param0, fParam3))
	{
		if (iLocal_1362 && iLocal_1455 == 0)
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0 + Vector(0f, 10f, 10f), 1, 0, 0, 1);
			SYSTEM::WAIT(500);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_1746.f_1))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1746.x, 0))
			{
				if (iLocal_1455 == 0)
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_1746.x, 0);
					if (iLocal_1362)
					{
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1746.x);
						ENTITY::FREEZE_ENTITY_POSITION(Local_1746.x, 1);
					}
					ENTITY::FREEZE_ENTITY_POSITION(Local_1746.f_1, 0);
					if (iLocal_1362)
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1746.f_1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1746.x, -0.00281182f, -9.76194f, 0.332852f), 0, 0, 1);
						ENTITY::FREEZE_ENTITY_POSITION(Local_1746.x, 0);
						VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_1746.x, Local_1746.f_1, 1065353216);
					}
					VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_1746.f_1, 5, 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1746.x, 1);
					iLocal_1455++;
					return 1;
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

int func_353(struct<3> Param0, float fParam3)//Position - 0x4D54A
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1746.f_1))
	{
		STREAMING::REQUEST_MODEL(iLocal_2032);
		STREAMING::REQUEST_MODEL(iLocal_2033);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_2032) && STREAMING::HAS_MODEL_LOADED(iLocal_2033))
		{
			Local_1746.x = VEHICLE::CREATE_VEHICLE(iLocal_2032, Param0, fParam3, 1, 1);
			Local_1746.f_1 = VEHICLE::CREATE_VEHICLE(iLocal_2033, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1746.x, -0.3f, -9.5f, -0.25f), (ENTITY::GET_ENTITY_HEADING(Local_1746.x) - 20f), 1, 1);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1746.f_1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1746.x, -0.00281182f, -9.76194f, 0.332852f), 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(Local_1746.f_1, fParam3);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1746.f_1, 3);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1746.f_1, 0);
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_1746.f_1, 0);
			VEHICLE::SET_VEHICLE_EXTRA(Local_1746.f_1, 7, true);
			VEHICLE::SET_VEHICLE_COLOURS(Local_1746.x, 45, 40);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_1746.x, 35, 156);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1746.x, 3);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2032);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2033);
			ENTITY::FREEZE_ENTITY_POSITION(Local_1746.x, 1);
			ENTITY::FREEZE_ENTITY_POSITION(Local_1746.f_1, 1);
			VEHICLE::SET_VEHICLE_STRONG(Local_1746.x, 1);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1746.x, 1);
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_1746.x, 0);
			AUDIO::SET_VEH_RADIO_STATION(Local_1746.x, "RADIO_01_CLASS_ROCK");
			GlobalFunc_743(Local_1746.x, 6);
			iLocal_1455 = 0;
			iLocal_1456 = 0;
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}



int func_356()//Position - 0x4D736
{
	if (GlobalFunc_8315() != 1)
	{
		func_358(1, 1);
	}
	else
	{
		func_357();
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), 1862763509);
		return 1;
	}
	return 0;
}

void func_357()//Position - 0x4D766
{
	if (!PED::IS_PED_INJURED(iLocal_2045[0]))
	{
		if (Local_2123[0 /*10*/] != iLocal_2045[0])
		{
			GlobalFunc_173(&Local_2123, 0, iLocal_2045[0], "MICHAEL", 0, 1);
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_2045[1]))
	{
		if (Local_2123[1 /*10*/] != iLocal_2045[1])
		{
			GlobalFunc_173(&Local_2123, 1, iLocal_2045[1], "FRANKLIN", 0, 1);
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_2045[2]))
	{
		if (Local_2123[2 /*10*/] != iLocal_2045[2])
		{
			GlobalFunc_173(&Local_2123, 2, iLocal_2045[2], "TREVOR", 0, 1);
		}
	}
	if (GlobalFunc_8315() == 0)
	{
		if (Local_2123[0 /*10*/] != PLAYER::PLAYER_PED_ID())
		{
			GlobalFunc_173(&Local_2123, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		}
	}
	else if (GlobalFunc_8315() == 1)
	{
		if (Local_2123[1 /*10*/] != PLAYER::PLAYER_PED_ID())
		{
			GlobalFunc_173(&Local_2123, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		}
	}
	else if (GlobalFunc_8315() == 2)
	{
		if (Local_2123[2 /*10*/] != PLAYER::PLAYER_PED_ID())
		{
			GlobalFunc_173(&Local_2123, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
	}
}

int func_358(int iParam0, bool bParam1)//Position - 0x4D880
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
		func_405(&(Global_17052[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2));
		func_53(&(Global_17052[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_17052.f_7 = iParam0;
	Global_17052.f_39 = 1;
	func_361(&Global_17052, 0, 0, 0);
	GlobalFunc_5124(iParam0);
	return 1;
}



int func_361(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x4DA38
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
	
	if (!iParam0->f_39)
	{
		if (iParam0->f_7 == 4)
		{
			return 1;
		}
	}
	if ((!PED::IS_PED_INJURED((*iParam0)[iParam0->f_7]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && (*iParam0)[iParam0->f_7] != PLAYER::PLAYER_PED_ID())
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
			if ((PED::IS_PED_RAGDOLL((*iParam0)[iParam0->f_7]) && !FIRE::IS_ENTITY_ON_FIRE((*iParam0)[iParam0->f_7])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE((*iParam0)[iParam0->f_7]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY((*iParam0)[iParam0->f_7]);
			}
			else
			{
				TASK::CLEAR_PED_TASKS((*iParam0)[iParam0->f_7]);
			}
		}
		iVar0 = PLAYER::PLAYER_PED_ID();
		iVar1 = GlobalFunc_8315();
		if (!iParam0->f_23)
		{
			GlobalFunc_9198(iVar0, 0);
		}
		GlobalFunc_5127(iVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, 1);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, 1);
		iVar2 = GlobalFunc_584(iParam0->f_7);
		GlobalFunc_9198((*iParam0)[iParam0->f_7], 0);
		fVar3 = (((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH((*iParam0)[iParam0->f_7])) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH((*iParam0)[iParam0->f_7])) - 100f)) * 100f);
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
		PLAYER::CHANGE_PLAYER_PED(PLAYER::PLAYER_ID(), (*iParam0)[iParam0->f_7], bParam2, 0);
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
		iParam0->f_5 = GlobalFunc_237(iVar1);
		if (iParam0->f_5 == 4)
		{
			iParam0->f_5 = 3;
		}
		(*iParam0)[iParam0->f_5] = iVar0;
		(*iParam0)[iParam0->f_7] = 0;
		iParam0->f_6 = GlobalFunc_237(iVar2);
		iParam0->f_7 = 4;
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
		GlobalFunc_10873(GlobalFunc_4933(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 145, 0));
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
		if (PED::IS_PED_INJURED((*iParam0)[iParam0->f_7]))
		{
		}
		if (PLAYER::PLAYER_PED_ID() == (*iParam0)[iParam0->f_7])
		{
		}
	}
	return 0;
}












































int func_405(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x53427
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
				GlobalFunc_8569(*iParam0, iParam1, bParam5);
				PED::_0xE861D0B05C7662B8(*iParam0, 0, 0);
				GlobalFunc_11317(*iParam0);
				GlobalFunc_7694(*iParam0, 1, 0);
				GlobalFunc_7693(*iParam0);
				GlobalFunc_7707(*iParam0);
				GlobalFunc_11332(*iParam0, bParam6);
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


void func_407()//Position - 0x53507
{
	int iVar0;
	int iVar1;
	struct<6> Var2;
	var uVar8;
	float fVar9;
	
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	if (iLocal_2042 == 0)
	{
		if (iLocal_1362)
		{
			if (iLocal_1388 != 99)
			{
				if (func_356())
				{
					if (bLocal_1377)
					{
						GlobalFunc_5116(1542.97f, 6481.625f, 21.582f, 314.9911f, 1, 0);
						iLocal_1388 = 99;
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1542.97f, 6481.625f, 21.582f, 1, 0, 0, 1);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
						STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
						iLocal_1388 = 99;
					}
				}
			}
			else
			{
				MISC::CLEAR_AREA_OF_VEHICLES(Local_1526, 50f, 0, 0, 0, 0, 0);
				if ((((((GlobalFunc_82() && func_352(1563.57f, 6465.22f, 23.96f, 231.4902f)) && func_349()) && func_345(504.1672f, -1304.744f, 28.3103f, 200.8915f)) && func_51(496.6033f, -1308.379f, 28.302f, 204.3612f)) && func_50(0)) && func_49(0))
				{
					GlobalFunc_5108(0, -1, 0);
					func_45(1);
					GlobalFunc_9132(1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1746.x, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_2045[2]))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_2045[2], Local_1746.x, -1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2045[2], 1);
							PED::SET_PED_MAX_HEALTH(iLocal_2045[2], 1800);
							ENTITY::SET_ENTITY_HEALTH(iLocal_2045[2], 1800);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_2045[2], 3, 0);
							PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_2045[2], 0);
						}
						if (!PED::IS_PED_INJURED(Local_1749.x))
						{
							PED::SET_PED_INTO_VEHICLE(Local_1749.x, Local_1746.x, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1749.x, 1);
							PED::SET_PED_MAX_HEALTH(Local_1749.x, 1800);
							ENTITY::SET_ENTITY_HEALTH(Local_1749.x, 1800);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1749.x, 3, 0);
							PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_1749.x, 0);
						}
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1746.x, 0);
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_1746.x, 0, 1862763509);
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_1746.f_1))
					{
						VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1746.f_1, 5, 0, 0);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1746.f_1, 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1631[iLocal_1452 /*19*/], 0))
					{
						ENTITY::DETACH_ENTITY(Local_1631[iLocal_1452 /*19*/], 1, 1);
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_1631[iLocal_1452 /*19*/], 0);
						VEHICLE::SET_VEHICLE_STRONG(Local_1631[iLocal_1452 /*19*/], 1);
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1631[iLocal_1452 /*19*/], 1);
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1631[iLocal_1452 /*19*/], -1);
						ENTITY::SET_ENTITY_COLLISION(Local_1631[iLocal_1452 /*19*/], 1, 0);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1631[iLocal_1452 /*19*/], 1, 1);
						ENTITY::SET_ENTITY_COORDS(Local_1631[iLocal_1452 /*19*/], 1542.97f, 6481.625f, 21.582f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_1631[iLocal_1452 /*19*/], 231.4902f);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1631[iLocal_1452 /*19*/], 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1631[iLocal_1452 /*19*/]);
					}
					func_490(&Local_1994);
					func_489();
					func_34(1);
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < Local_1631)
					{
						if (iVar0 != iLocal_1452)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1631[iVar0 /*19*/], 0))
							{
								VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1631[iVar0 /*19*/], 0);
							}
						}
						iVar0++;
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					iLocal_1362 = 0;
				}
			}
		}
		else
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
			VEHICLE::_0xB264C4D2F2B0A78B(1);
			iLocal_1470 = 0;
			iLocal_1495 = 0;
			iLocal_1496 = 0;
			iLocal_1489 = 0;
			iLocal_1506 = 0;
			iLocal_1380 = 0;
			iLocal_1381 = 0;
			if (!PED::IS_PED_INJURED(iLocal_1622))
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_1622, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
			}
			GlobalFunc_2204();
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			SYSTEM::SETTIMERB(0);
			iLocal_1388 = 0;
			iLocal_2042 = 1;
		}
	}
	if (iLocal_2042 == 1)
	{
		func_488(0);
		func_478();
		func_477(Local_1631[iLocal_1452 /*19*/], &Local_1994);
		func_476();
		if (!PED::IS_PED_INJURED(iLocal_1622))
		{
			if (!func_475("CST7_MEET"))
			{
				if (!GlobalFunc_5172(&Local_1810, 1))
				{
					if (GlobalFunc_10691(&Local_2123, "CST7AUD", "CST7_MEET", 7, 0, 0, 0, 0))
					{
						GlobalFunc_2207();
						func_472("CST7_MEET", 1);
						RECORDING::_0x293220DA1B46CEBC(4f, 10f, 4);
					}
				}
			}
			GlobalFunc_9193(&Local_1810, Local_1526, 0.001f, 0.001f, 2f, 0, "CH_MEETMOL", 1, 1, -1);
			if (HUD::DOES_BLIP_EXIST(Local_1810.f_5))
			{
				switch (iLocal_1388)
				{
					case 0:
						if (!HUD::DOES_BLIP_EXIST(uLocal_1592))
						{
							HUD::SET_BLIP_ALPHA(Local_1810.f_5, 0);
							HUD::SET_BLIP_ROUTE(Local_1810.f_5, 0);
							uLocal_1592 = GlobalFunc_6783(iLocal_1622, 0, 0);
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1575.005f, 6446.953f, 23.16296f, 1595.828f, 6440.487f, 29.37853f, 16f, 0, 1, 0))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								iLocal_1506 = MISC::GET_GAME_TIMER();
								iLocal_1381 = 1;
							}
							if (GlobalFunc_111())
							{
								Var2 = { GlobalFunc_560() };
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var2))
								{
									if (MISC::ARE_STRINGS_EQUAL(&Var2, "CST7_MEET"))
									{
										GlobalFunc_5105();
									}
								}
							}
							iLocal_1388++;
						}
						break;
					
					case 1:
						if (iLocal_1381 == 1)
						{
							GlobalFunc_2536(1, 0);
							func_427();
						}
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
						{
							if (iLocal_1381 == 1)
							{
								if ((MISC::GET_GAME_TIMER() - iLocal_1506) > 3000)
								{
									iLocal_2042 = 2;
								}
							}
						}
						else
						{
							iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1);
							if (!ENTITY::IS_ENTITY_DEAD(iVar1))
							{
								if (GlobalFunc_530(iVar1, 5f, 1, 1056964608, 0, 1))
								{
									TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
									iLocal_1388++;
								}
							}
						}
						break;
					
					case 2:
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							iLocal_1506 = MISC::GET_GAME_TIMER();
							iLocal_1381 = 1;
							iLocal_1388++;
						}
						break;
					
					case 3:
						if (iLocal_1381 == 1)
						{
							GlobalFunc_2536(1, 0);
							func_427();
						}
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
						{
							if (iLocal_1381 == 1)
							{
								if ((MISC::GET_GAME_TIMER() - iLocal_1506) > 3000)
								{
									iLocal_2042 = 2;
								}
							}
						}
						break;
					}
			}
			if (!func_475("CST7_NOGO"))
			{
				if (!GlobalFunc_5172(&Local_1810, 1))
				{
					if (iLocal_1489 == 0)
					{
						iLocal_1489 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6000, 9000));
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_1489) > 0)
					{
						if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_NOGO", 7, 0, 0, 0))
						{
							func_472("CST7_NOGO", 1);
						}
					}
				}
			}
			if (!func_475("CST7_MOLLY"))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_1622, 1), 18f, 18f, 18f, 0, 1, 0))
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_1622) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_1622))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_1622, PLAYER::PLAYER_PED_ID()))
							{
								if ((MISC::GET_GAME_TIMER() - iLocal_1496) > 6000)
								{
									if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &uVar8, 1))
									{
										if (WEAPON::GET_WEAPONTYPE_GROUP(uVar8) != joaat("GROUP_MELEE"))
										{
											if (!GlobalFunc_5172(&Local_1810, 1))
											{
												GlobalFunc_173(&Local_2123, 8, iLocal_1622, "MOLLY", 0, 1);
												if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_MOLLY", 7, 0, 0, 0))
												{
													iLocal_1495++;
													iLocal_1496 = MISC::GET_GAME_TIMER();
													if (iLocal_1495 == 4)
													{
														func_472("CST7_MOLLY", 1);
													}
												}
											}
											else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_1622))
											{
												GlobalFunc_5653(iLocal_1622, "CST7_AJAA", "MOLLY", 6);
												iLocal_1495++;
												iLocal_1496 = MISC::GET_GAME_TIMER();
												if (iLocal_1495 == 4)
												{
													func_472("CST7_MOLLY", 1);
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
			if (!func_475("CST7_MOLLY1"))
			{
				if (!GlobalFunc_5172(&Local_1810, 1))
				{
					if (!iLocal_1380)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_1622, 1), 11f, 11f, 6f, 0, 1, 0))
						{
							if (func_475("CST7_MEET"))
							{
								iLocal_1380 = 1;
							}
						}
					}
					else if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_1622, 1), 13f, 13f, 6f, 0, 1, 0))
					{
						GlobalFunc_173(&Local_2123, 8, iLocal_1622, "MOLLY", 0, 1);
						if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_MOLLY1", 7, 0, 0, 0))
						{
							func_472("CST7_MOLLY1", 1);
						}
					}
				}
			}
			if (((((FIRE::IS_EXPLOSION_IN_SPHERE(0, ENTITY::GET_ENTITY_COORDS(iLocal_1622, 1), 5f) || FIRE::IS_EXPLOSION_IN_SPHERE(4, ENTITY::GET_ENTITY_COORDS(iLocal_1622, 1), 5f)) || FIRE::IS_EXPLOSION_IN_SPHERE(2, ENTITY::GET_ENTITY_COORDS(iLocal_1622, 1), 5f)) || FIRE::IS_EXPLOSION_IN_SPHERE(5, ENTITY::GET_ENTITY_COORDS(iLocal_1622, 1), 5f)) || FIRE::IS_EXPLOSION_IN_SPHERE(3, ENTITY::GET_ENTITY_COORDS(iLocal_1622, 1), 5f)) || FIRE::IS_EXPLOSION_IN_SPHERE(1, ENTITY::GET_ENTITY_COORDS(iLocal_1622, 1), 5f))
			{
				PED::APPLY_DAMAGE_TO_PED(iLocal_1622, 400, 1);
			}
			if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_1622, 1), 8f, 1))
			{
				AUDIO::PLAY_PAIN(iLocal_1622, 5, 0, 0);
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_1622, -8f, 1);
				TASK::TASK_SMART_FLEE_PED(iLocal_1622, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
				func_724(26);
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1622, PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_1622))
			{
				AUDIO::PLAY_PAIN(iLocal_1622, 5, 0, 0);
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_1622, -8f, 1);
				TASK::TASK_SMART_FLEE_PED(iLocal_1622, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
				func_724(26);
			}
		}
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1746.x, 0))
		{
			func_724(4);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_1746.x))
		{
			if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Local_1746.x))
			{
				func_724(9);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_1622))
		{
			fVar9 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_1622, 1));
			if (fVar9 < (100f * 100f))
			{
				CUTSCENE::REQUEST_CUTSCENE("CAR_5_EXT", 8);
				func_24("CAR_5_EXT");
			}
			else if (fVar9 > 40000f)
			{
				func_724(18);
			}
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			func_724(19);
		}
	}
	if (iLocal_2042 == 2)
	{
		HUD::CLEAR_PRINTS();
		func_413();
		GlobalFunc_5652(&Local_1810, 1, 0);
		GlobalFunc_5105();
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 768);
		SYSTEM::SETTIMERA(0);
		iLocal_2042 = 0;
		iLocal_2041 = 7;
	}
	if (iLocal_2042 == 3)
	{
		func_777(7, 1);
	}
}






void func_413()//Position - 0x54185
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(uLocal_1592))
	{
		HUD::REMOVE_BLIP(&uLocal_1592);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_1631)
	{
		if (HUD::DOES_BLIP_EXIST(Local_1631[iVar0 /*19*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_1631[iVar0 /*19*/].f_1));
		}
		iVar0++;
	}
	if (HUD::DOES_BLIP_EXIST(Local_1746.f_2))
	{
		HUD::REMOVE_BLIP(&(Local_1746.f_2));
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_1593))
	{
		HUD::REMOVE_BLIP(&uLocal_1593);
	}
	if (HUD::DOES_BLIP_EXIST(Local_1749.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_1749.f_1));
	}
}














void func_427()//Position - 0x54C1B
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1622))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1622))
		{
			if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::SET_GAMEPLAY_HINT_FOV(35f);
				CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_1622, -1f, 0f, 0.5f, 1, -1, 2500, 2000, 0);
				CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(-0.75f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(0.05f);
				CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.35f);
				CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(-4f);
			}
		}
	}
}













































void func_472(char* sParam0, bool bParam1)//Position - 0x57395
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = iLocal_1391;
	iVar2 = 0;
	bVar3 = false;
	while (iVar2 < iVar1 && !bVar3)
	{
		if (bParam1)
		{
			if (iLocal_1391[iVar2] == 0)
			{
				iLocal_1391[iVar2] = iVar0;
				bVar3 = true;
			}
		}
		else if (iLocal_1391[iVar2] == iVar0)
		{
			iLocal_1391[iVar2] = 0;
			bVar3 = true;
		}
		iVar2++;
	}
}



int func_475(char* sParam0)//Position - 0x57462
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = iLocal_1391;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (iLocal_1391[iVar2] == iVar0)
		{
			return 1;
		}
		iVar2++;
	}
	return 0;
}

void func_476()//Position - 0x5749E
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { -0.05f, 0f, -0.1f };
	if (!PED::IS_PED_INJURED(iLocal_1622) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1608, 0))
	{
		STREAMING::REQUEST_ANIM_DICT(sLocal_1574);
		if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_1574))
		{
			switch (iLocal_2044)
			{
				case 0:
					break;
				
				case 1:
					break;
				
				case 2:
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1490))
					{
						if (!PED::IS_PED_RAGDOLL(iLocal_1622) && !TASK::IS_PED_GETTING_UP(iLocal_1622))
						{
							iLocal_1490 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1490, iLocal_1608, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_1622, iLocal_1490, sLocal_1574, "ig_1_base", 8f, -8f, 1, 208, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1490, 1);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_1490, 0f);
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_1622, iLocal_1608, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1622, 1);
							PED::SET_PED_CONFIG_FLAG(iLocal_1622, 172, 0);
						}
					}
					else
					{
						MemCopy(&uVar3, {GlobalFunc_560()}, 4);
						if (MISC::ARE_STRINGS_EQUAL(&uVar3, "CST7_MOLLY1"))
						{
							iLocal_1490 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1490, iLocal_1608, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_1622, iLocal_1490, sLocal_1574, "ig_1_idle_b", 8f, -8f, 1, 208, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1490, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_1490, 0f);
							iLocal_2044 = 3;
						}
					}
					break;
				
				case 3:
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1490))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1490) > 0.99f)
						{
							iLocal_1490 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1490, iLocal_1608, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_1622, iLocal_1490, sLocal_1574, "ig_1_base", 8f, -8f, 1, 208, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1490, 1);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_1490, 0f);
							iLocal_2044 = 2;
						}
					}
					break;
				}
			}
	}
}

void func_477(int iParam0, var uParam1)//Position - 0x57673
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	
	STREAMING::REQUEST_PTFX_ASSET();
	if (PAD::_IS_USING_KEYBOARD(0))
	{
		uParam1->f_5 = 69;
	}
	else
	{
		uParam1->f_5 = 68;
	}
	if (uParam1->f_2 == -1)
	{
		uParam1->f_2 = AUDIO::GET_SOUND_ID();
	}
	if (uParam1->f_3 == -1)
	{
		uParam1->f_3 = AUDIO::GET_SOUND_ID();
	}
	if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0)) && STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
		if (PAD::_IS_USING_KEYBOARD(0))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
		}
		PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 100, 1);
		if (PAD::IS_DISABLED_CONTROL_PRESSED(0, uParam1->f_5))
		{
			if ((MISC::GET_GAME_TIMER() - *uParam1) > 225)
			{
				if (uParam1->f_1 == 0)
				{
					uParam1->f_1 = 1;
				}
				Var0 = { (0.6826f * IntToFloat(uParam1->f_1)), 1.6707f, 0.3711f };
				Var3 = { Var0.x, (Var0.f_1 + 10f), (Var0.f_2 - 0.1f) };
				Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var0) };
				Var9 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var3) };
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var6, Var9, 15, 1, joaat("weapon_assaultshotgun"), PLAYER::PLAYER_PED_ID(), 1, 1, -1082130432);
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var6 + Vector(0.2f, 0f, 0f), Var9 + Vector(0.2f, 0f, 0f), 15, 1, joaat("weapon_assaultshotgun"), PLAYER::PLAYER_PED_ID(), 1, 1, -1082130432);
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_carsteal5_car_muzzle_flash", iParam0, Var0 + Vector(0f, -0.15f, 0f), 0f, 0f, 90f, 1065353216, 0, 0, 0);
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
					{
						AUDIO::PLAY_SOUND_FROM_COORD(-1, "FRANKLIN_GUN_MASTER", Var6, 0, 0, 0, 0);
					}
					else
					{
						AUDIO::PLAY_SOUND_FROM_COORD(-1, "JB700_GUN_PLAYER_MASTER", Var6, 0, 0, 0, 0);
					}
				}
				uParam1->f_4 = 1;
				uParam1->f_1 = (uParam1->f_1 * -1);
				*uParam1 = MISC::GET_GAME_TIMER();
			}
		}
	}
	else
	{
		if (!AUDIO::HAS_SOUND_FINISHED(uParam1->f_2))
		{
			AUDIO::STOP_SOUND(uParam1->f_2);
		}
		if (!AUDIO::HAS_SOUND_FINISHED(uParam1->f_3))
		{
			AUDIO::STOP_SOUND(uParam1->f_3);
		}
	}
}

void func_478()//Position - 0x57870
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	int iVar5;
	int iVar6;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	struct<3> Var16;
	struct<3> Var19;
	struct<3> Var22;
	struct<3> Var25;
	struct<3> Var28[3];
	var uVar38[3];
	var uVar42;
	var uVar43;
	var uVar46;
	var uVar49;
	struct<3> Var50;
	struct<3> Var53;
	struct<3> Var56;
	struct<3> Var59;
	float fVar62;
	int iVar63;
	bool bVar64;
	struct<3> Var65;
	float fVar68;
	float fVar69;
	float fVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1631[iLocal_1452 /*19*/], 0))
	{
		iVar0 = 0;
		Var1 = { ENTITY::GET_ENTITY_COORDS(Local_1631[iLocal_1452 /*19*/], 1) };
		STREAMING::REQUEST_MODEL(iLocal_2034);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_THEFT_FINALE", 0);
		STREAMING::REQUEST_PTFX_ASSET();
		PAD::_0x7F4724035FDCA1DD(0);
		if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1631[iLocal_1452 /*19*/]))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
			if (((((!CAM::DOES_CAM_EXIST(uLocal_1595) && PAD::IS_CONTROL_JUST_PRESSED(0, 230)) && (MISC::GET_GAME_TIMER() - iLocal_1454) > 1600) && ENTITY::IS_ENTITY_UPRIGHT(Local_1631[iLocal_1452 /*19*/], 1119092736)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_THEFT_FINALE", 0)) && STREAMING::HAS_MODEL_LOADED(iLocal_2034))
			{
				bVar4 = true;
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1598[0]))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_1598[0], 1)) < 9f)
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					iVar5 = func_487();
					if (iVar5 == -1)
					{
						iVar5 = 0;
					}
					Local_1853[iVar5 /*14*/].f_10 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1631[iLocal_1452 /*19*/], 0f, -2f, 0f) };
					Local_1853[iVar5 /*14*/] = 0;
					Local_1853[iVar5 /*14*/].f_2 = 0;
					Local_1853[iVar5 /*14*/].f_3 = 0;
					Local_1853[iVar5 /*14*/].f_13 = 0;
					iVar0 = 0;
					while (iVar0 < iLocal_1598)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_1598[iVar0]))
						{
							GlobalFunc_2537(&(iLocal_1598[iVar0]), !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_1598[iVar0]));
						}
						iVar0++;
					}
					iLocal_1453 = MISC::GET_GAME_TIMER();
					iLocal_1454 = MISC::GET_GAME_TIMER();
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "spikes", Local_1631[iLocal_1452 /*19*/], "CAR_THEFT_DB5_ESCAPE", 0, 0);
				}
			}
		}
		if (iLocal_1453 != 0)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_1453) < 100)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1598[0]))
				{
					iLocal_1598[0] = OBJECT::CREATE_OBJECT(iLocal_2034, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1631[iLocal_1452 /*19*/], 0f, -1.2f, -0.25f), 1, 1, 0);
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_1598[0], Local_1631[iLocal_1452 /*19*/], 1);
					ENTITY::SET_ENTITY_DYNAMIC(iLocal_1598[0], 1);
					PHYSICS::ACTIVATE_PHYSICS(iLocal_1598[0]);
					iLocal_1602[0] = 0;
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_1453) < 160)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1598[1]))
				{
					iLocal_1598[1] = OBJECT::CREATE_OBJECT(iLocal_2034, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1631[iLocal_1452 /*19*/], 0.15f, -1.1f, -0.25f), 1, 1, 0);
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_1598[1], Local_1631[iLocal_1452 /*19*/], 1);
					ENTITY::SET_ENTITY_DYNAMIC(iLocal_1598[1], 1);
					PHYSICS::ACTIVATE_PHYSICS(iLocal_1598[1]);
					iLocal_1602[1] = 0;
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_1453) < 220)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1598[2]))
				{
					iLocal_1598[2] = OBJECT::CREATE_OBJECT(iLocal_2034, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1631[iLocal_1452 /*19*/], -0.15f, -1f, -0.25f), 1, 1, 0);
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_1598[2], Local_1631[iLocal_1452 /*19*/], 1);
					ENTITY::SET_ENTITY_DYNAMIC(iLocal_1598[2], 1);
					PHYSICS::ACTIVATE_PHYSICS(iLocal_1598[2]);
					iLocal_1453 = 0;
					iLocal_1602[2] = 0;
				}
			}
		}
		if (STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			if (iLocal_1602[0] == 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1598[0]))
				{
					if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_1598[0]))
					{
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_carsteal4_tyre_spikes", iLocal_1598[0], 0f, 0f, -0.025f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
						iLocal_1602[0] = 1;
					}
				}
			}
			if (iLocal_1602[1] == 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1598[1]))
				{
					if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_1598[1]))
					{
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_carsteal4_tyre_spikes", iLocal_1598[1], 0f, 0f, -0.025f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
						iLocal_1602[1] = 1;
					}
				}
			}
			if (iLocal_1602[2] == 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1598[2]))
				{
					if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_1598[2]))
					{
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_carsteal4_tyre_spikes", iLocal_1598[2], 0f, 0f, -0.025f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
						iLocal_1602[2] = 1;
					}
				}
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1620))
		{
			STREAMING::REQUEST_MODEL(GlobalFunc_4946(19));
			STREAMING::REQUEST_PTFX_ASSET();
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_THEFT_FINALE", 0);
			if (STREAMING::HAS_MODEL_LOADED(GlobalFunc_4946(19)))
			{
				if (Local_1853[0 /*14*/].f_10 != 0f)
				{
					iLocal_1620 = PED::CREATE_PED(26, GlobalFunc_4946(19), Local_1853[0 /*14*/].f_10 - Vector(5f, 0f, 0f), 0f, 1, 1);
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_1620, 1);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_1620, 0);
					ENTITY::SET_ENTITY_COLLISION(iLocal_1620, 0, 0);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_1620, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(19));
				}
			}
		}
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_1598[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_1598[1])) && ENTITY::DOES_ENTITY_EXIST(iLocal_1598[2]))
		{
			iVar6 = VEHICLE::GET_CLOSEST_VEHICLE(Local_1853[0 /*14*/].f_10, 10f, 0, func_485());
			if (((((!ENTITY::IS_ENTITY_DEAD(iVar6) && iVar6 != Local_1631[iLocal_1452 /*19*/]) && iVar6 != Local_1746.x) && iVar6 != Local_1746.f_1) && ENTITY::GET_ENTITY_MODEL(iVar6) != joaat("police")) && !VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar6)))
			{
				Var7 = { ENTITY::GET_ENTITY_COORDS(iLocal_1598[0], 1) };
				Var10 = { ENTITY::GET_ENTITY_COORDS(iLocal_1598[1], 1) };
				Var13 = { ENTITY::GET_ENTITY_COORDS(iLocal_1598[2], 1) };
				Var16 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iVar6, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar6, "wheel_lf")) };
				Var19 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iVar6, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar6, "wheel_rf")) };
				Var22 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iVar6, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar6, "wheel_rr")) };
				Var25 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iVar6, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar6, "wheel_lr")) };
				if ((SYSTEM::VDIST2(Var7, Var16) < 4f || SYSTEM::VDIST2(Var10, Var16) < 4f) || SYSTEM::VDIST2(Var13, Var16) < 4f)
				{
					if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iVar6, 0, 0))
					{
						VEHICLE::SET_VEHICLE_TYRE_BURST(iVar6, 0, 1, 1148846080);
					}
				}
				if ((SYSTEM::VDIST2(Var7, Var19) < 4f || SYSTEM::VDIST2(Var10, Var19) < 4f) || SYSTEM::VDIST2(Var13, Var19) < 4f)
				{
					if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iVar6, 1, 0))
					{
						VEHICLE::SET_VEHICLE_TYRE_BURST(iVar6, 1, 1, 1148846080);
					}
				}
				if ((SYSTEM::VDIST2(Var7, Var22) < 4f || SYSTEM::VDIST2(Var10, Var22) < 4f) || SYSTEM::VDIST2(Var13, Var22) < 4f)
				{
					if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iVar6, 5, 0))
					{
						VEHICLE::SET_VEHICLE_TYRE_BURST(iVar6, 5, 1, 1148846080);
					}
				}
				if ((SYSTEM::VDIST2(Var7, Var25) < 4f || SYSTEM::VDIST2(Var10, Var25) < 4f) || SYSTEM::VDIST2(Var13, Var25) < 4f)
				{
					if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iVar6, 4, 0))
					{
						VEHICLE::SET_VEHICLE_TYRE_BURST(iVar6, 4, 1, 1148846080);
					}
				}
			}
		}
		iVar0 = 0;
		while (iVar0 < Local_1853)
		{
			if (Local_1853[iVar0 /*14*/].f_10 != 0f)
			{
				if (Local_1853[iVar0 /*14*/].f_3 == 0)
				{
					if (!CAM::DOES_CAM_EXIST(uLocal_1595))
					{
						if (SYSTEM::VDIST2(Local_1853[iVar0 /*14*/].f_10, Var1) > 2500f)
						{
							Local_1853[iVar0 /*14*/].f_10 = { 0f, 0f, 0f };
						}
						else
						{
							if (!PED::IS_PED_INJURED(iLocal_1620))
							{
								Var50 = { ENTITY::GET_ENTITY_COORDS(iLocal_1620, 1) };
								if (SYSTEM::VDIST2(Var50.x, Var50.f_1, 0f, Local_1853[iVar0 /*14*/].f_10, Local_1853[iVar0 /*14*/].f_10.f_1, 0f) > 1f)
								{
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_1620, Local_1853[iVar0 /*14*/].f_10 - Vector(5f, 0f, 0f), 0, 0, 1);
								}
							}
							Local_1853[iVar0 /*14*/].f_13 = func_484(iLocal_1620);
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1853[iVar0 /*14*/].f_13, 0))
							{
								Var53 = { ENTITY::GET_ENTITY_COORDS(Local_1853[iVar0 /*14*/].f_13, 1) };
								if (((((SYSTEM::VDIST2(Var53, Local_1853[iVar0 /*14*/].f_10) < 100f && SYSTEM::VDIST2(Var1, Local_1853[iVar0 /*14*/].f_10) > 225f) && ENTITY::GET_ENTITY_SPEED(Local_1853[iVar0 /*14*/].f_13) > 10f) && ENTITY::DOES_ENTITY_EXIST(iLocal_1598[0])) && ENTITY::DOES_ENTITY_EXIST(iLocal_1598[1])) && ENTITY::DOES_ENTITY_EXIST(iLocal_1598[2]))
								{
									Var56 = { GlobalFunc_590(0f, 0f, ENTITY::GET_ENTITY_HEADING(Local_1853[iVar0 /*14*/].f_13)) };
									Var59 = { Local_1853[iVar0 /*14*/].f_10 - Var53 };
									Var59 = { Var59 / FtoV(SYSTEM::VMAG(Var59)) };
									if (GlobalFunc_168(Var56, Var59) > 0f)
									{
										STREAMING::REQUEST_PTFX_ASSET();
										Local_1853[iVar0 /*14*/].f_4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1853[iVar0 /*14*/].f_13, -4f, 25f, 2f) };
										Local_1853[iVar0 /*14*/].f_7 = { ENTITY::GET_ENTITY_COORDS(Local_1853[iVar0 /*14*/].f_13, 1) };
										MISC::GET_GROUND_Z_FOR_3D_COORD(Local_1853[iVar0 /*14*/].f_4 + Vector(100f, 0f, 0f), &(Local_1853[iVar0 /*14*/].f_4.f_2));
										Local_1853[iVar0 /*14*/].f_4.f_2 = (Local_1853[iVar0 /*14*/].f_4.f_2 + 2f);
										fVar62 = (Local_1853[iVar0 /*14*/].f_4.f_2 - Local_1853[iVar0 /*14*/].f_7.f_2);
										if (fVar62 < 7f && fVar62 > -1f)
										{
											Local_1853[iVar0 /*14*/].f_3++;
										}
									}
								}
							}
						}
					}
				}
				else if (Local_1853[iVar0 /*14*/].f_3 == 1)
				{
					if (iLocal_1624 == 0)
					{
						iLocal_1624 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Local_1853[iVar0 /*14*/].f_4, Local_1853[iVar0 /*14*/].f_7, 1, 0, 7);
					}
					if (iLocal_1624 != 0)
					{
						iVar63 = SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_1624, &uVar42, &uVar43, &uVar46, &uVar49);
						if (iVar63 == 2)
						{
						}
						else if (iVar63 == 0)
						{
						}
					}
					Var28[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1853[iVar0 /*14*/].f_13, 0.8f, 6f, 0f) };
					Var28[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1853[iVar0 /*14*/].f_13, 0.5f, 7f, 0f) };
					Var28[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1853[iVar0 /*14*/].f_13, 0.9f, 8f, 0f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var28[0 /*3*/], &(uVar38[0]));
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var28[1 /*3*/], &(uVar38[1]));
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var28[2 /*3*/], &(uVar38[2]));
					ENTITY::SET_ENTITY_COORDS(iLocal_1598[0], Var28[0 /*3*/], Var28[0 /*3*/].f_1, (uVar38[0] + 0.05f), 1, 0, 0, 1);
					ENTITY::SET_ENTITY_COORDS(iLocal_1598[1], Var28[1 /*3*/], Var28[1 /*3*/].f_1, (uVar38[1] + 0.05f), 1, 0, 0, 1);
					ENTITY::SET_ENTITY_COORDS(iLocal_1598[2], Var28[2 /*3*/], Var28[2 /*3*/].f_1, (uVar38[2] + 0.05f), 1, 0, 0, 1);
					Local_1853[iVar0 /*14*/].f_10 = { Var28[1 /*3*/] };
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1631[iLocal_1452 /*19*/], 0) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1631[iLocal_1452 /*19*/]))
					{
						uLocal_1595 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
						CAM::SET_CAM_COORD(uLocal_1595, Local_1853[iVar0 /*14*/].f_4);
						CAM::SET_CAM_FOV(uLocal_1595, 30f);
						CAM::SHAKE_CAM(uLocal_1595, "HAND_SHAKE", 1f);
						CAM::POINT_CAM_AT_ENTITY(uLocal_1595, Local_1853[iVar0 /*14*/].f_13, 0f, 0f, 0f, 1);
						CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
						TASK::TASK_VEHICLE_MISSION_COORS_TARGET(PLAYER::PLAYER_PED_ID(), Local_1631[iLocal_1452 /*19*/], Local_1538, 4, 20f, 786469, 5f, 10f, 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), 1);
						GlobalFunc_4948(&uLocal_2288, 0, 0);
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_FOCUS_ON_TRUCK"))
						{
							AUDIO::STOP_AUDIO_SCENE("CAR_4_FOCUS_ON_TRUCK");
						}
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_SPIKES_CAM_SCENE"))
						{
							AUDIO::START_AUDIO_SCENE("CAR_4_SPIKES_CAM_SCENE");
						}
						GlobalFunc_565(135, 1, 0);
						RECORDING::_0x293220DA1B46CEBC(3f, 0f, 3);
						Local_1853[iVar0 /*14*/].f_2 = MISC::GET_GAME_TIMER();
						Local_1853[iVar0 /*14*/].f_3++;
					}
					else
					{
						Local_1853[iVar0 /*14*/].f_3 = 0;
					}
				}
				else if (Local_1853[iVar0 /*14*/].f_3 == 2)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_1853[iVar0 /*14*/].f_13))
					{
						Var65 = { ENTITY::GET_ENTITY_COORDS(Local_1853[iVar0 /*14*/].f_13, 1) };
						if (Local_1853[iVar0 /*14*/] == 0)
						{
							if (SYSTEM::VDIST2(Var65, Local_1853[iVar0 /*14*/].f_10) < 9f)
							{
								fVar68 = VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(Local_1853[iVar0 /*14*/].f_13);
								fVar69 = ENTITY::GET_ENTITY_SPEED(Local_1853[iVar0 /*14*/].f_13);
								fVar70 = (fVar69 / (fVar68 - 20f));
								if (fVar70 > 1f)
								{
									fVar70 = 1f;
								}
								else if (fVar70 < 0.3f)
								{
									fVar70 = 0.3f;
								}
								Local_1853[iVar0 /*14*/] = (MISC::GET_GAME_TIMER() - SYSTEM::ROUND(((1f - fVar70) * 1000f)));
								if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
								{
									Local_1853[iVar0 /*14*/].f_1 = 1;
								}
								else
								{
									Local_1853[iVar0 /*14*/].f_1 = -1;
								}
								VEHICLE::SET_VEHICLE_TYRE_BURST(Local_1853[iVar0 /*14*/].f_13, 0, 0, 1148846080);
								VEHICLE::SET_VEHICLE_TYRE_BURST(Local_1853[iVar0 /*14*/].f_13, 1, 0, 1148846080);
								if (STREAMING::HAS_PTFX_ASSET_LOADED() && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_THEFT_FINALE", 0))
								{
									GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_carsteal5_tyre_spiked", Local_1853[iVar0 /*14*/].f_13, 1.2f, 2f, -0.3f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
									GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_carsteal5_tyre_spiked", Local_1853[iVar0 /*14*/].f_13, -1.2f, 2f, -0.3f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "tyre", Local_1853[iVar0 /*14*/].f_13, "CAR_THEFT_DB5_ESCAPE", 0, 0);
								}
							}
						}
						else if ((MISC::GET_GAME_TIMER() - Local_1853[iVar0 /*14*/]) < 1000)
						{
							ENTITY::APPLY_FORCE_TO_ENTITY(Local_1853[iVar0 /*14*/].f_13, 0, (25f * IntToFloat(Local_1853[iVar0 /*14*/].f_1)), 0f, 0f, 0f, -2f, 0f, 0, 1, 1, 1, 0, 1);
						}
						else if ((MISC::GET_GAME_TIMER() - Local_1853[iVar0 /*14*/]) > 1750)
						{
							iVar71 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_1853[iVar0 /*14*/].f_13, 0);
							if (!PED::IS_PED_INJURED(iVar71) && TASK::GET_SCRIPT_TASK_STATUS(iVar71, 2104565373) != 1)
							{
								TASK::TASK_DRIVE_BY(iVar71, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 50f, 100, 0, -753768974);
							}
						}
						PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
						if ((MISC::GET_GAME_TIMER() - Local_1853[iVar0 /*14*/].f_2) > 2000)
						{
							bVar64 = true;
						}
					}
					else
					{
						bVar64 = true;
					}
					if (!CAM::DOES_CAM_EXIST(uLocal_1595))
					{
						bVar64 = true;
					}
					if (bVar64)
					{
						if (iLocal_2041 == 5)
						{
							iVar72 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_1853[iVar0 /*14*/].f_13, -1);
							iVar73 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_1853[iVar0 /*14*/].f_13, 0);
							if (!PED::IS_PED_INJURED(iVar72))
							{
								PED::APPLY_DAMAGE_TO_PED(iVar72, 200, 1);
							}
							if (!PED::IS_PED_INJURED(iVar73))
							{
								PED::APPLY_DAMAGE_TO_PED(iVar73, 200, 1);
							}
						}
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), 0);
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_SPIKES_CAM_SCENE"))
						{
							AUDIO::STOP_AUDIO_SCENE("CAR_4_SPIKES_CAM_SCENE");
						}
						CAM::DESTROY_ALL_CAMS(0);
						CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
						STREAMING::REMOVE_PTFX_ASSET();
						Local_1853[iVar0 /*14*/].f_3 = 0;
						Local_1853[iVar0 /*14*/].f_10 = { 0f, 0f, 0f };
					}
				}
			}
			iVar0++;
		}
	}
}






var func_484(int iParam0)//Position - 0x589B4
{
	int iVar0[10];
	int iVar11;
	int iVar12;
	float fVar13;
	struct<3> Var14;
	int iVar17;
	float fVar18;
	
	iVar11 = 0;
	iVar12 = 0;
	fVar13 = 0f;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		Var14 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
		PED::GET_PED_NEARBY_VEHICLES(iParam0, &iVar0);
		iVar12 = 0;
		while (iVar12 < iVar0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0[iVar12], 0))
			{
				iVar17 = ENTITY::GET_ENTITY_MODEL(iVar0[iVar12]);
				if (iVar17 == joaat("police") || iVar17 == joaat("sheriff"))
				{
					fVar18 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar0[iVar12], 1), Var14);
					if (fVar18 < fVar13 || fVar13 == 0f)
					{
						fVar13 = fVar18;
						iVar11 = iVar12;
					}
				}
			}
			iVar12++;
		}
	}
	if (fVar13 == 0f)
	{
		iVar0[iVar11] = 0;
	}
	return iVar0[iVar11];
}

int func_485()//Position - 0x58A72
{
	return 2110;
}


int func_487()//Position - 0x58AB6
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_1853)
	{
		if (Local_1853[iVar0 /*14*/].f_10 == 0f)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_488(int iParam0)//Position - 0x58AE9
{
	VEHICLE::REQUEST_VEHICLE_ASSET(iLocal_2032, 3);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1746.x, 0) && !ENTITY::IS_ENTITY_DEAD(Local_1746.f_1))
	{
		if (!PED::IS_PED_INJURED(iLocal_2045[2]) && !PED::IS_PED_INJURED(Local_1749.x))
		{
			VEHICLE::_0x2C4A1590ABF43E8B(Local_1746.x, 1);
			VEHICLE::_0x2C4A1590ABF43E8B(Local_1746.f_1, 1);
			if (PED::IS_PED_GROUP_MEMBER(iLocal_2045[2], GlobalFunc_468()))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_2045[2]);
			}
			if (!PED::IS_PED_IN_VEHICLE(iLocal_2045[2], Local_1746.x, 1))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_2045[2], -1794415470) != 1)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2045[2], 1);
					TASK::TASK_ENTER_VEHICLE(iLocal_2045[2], Local_1746.x, 20000, -1, 2f, 1, 0);
				}
			}
			else if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_2045[2], Local_1746.x))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(Local_1749.x, Local_1746.x))
				{
					switch (iLocal_1470)
					{
						case 0:
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1746.x, 0f, 4.1723f, -2.3128f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1746.x, 0f, 12.1723f, 3.3128f), 6f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1631[iLocal_1452 /*19*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1746.x, 0f, 4.1723f, -2.3128f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1746.x, 0f, 12.1723f, 3.3128f), 6f, 0, 1, 0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_2045[2], -2118855366) == 7)
								{
									if (ENTITY::GET_ENTITY_SPEED(Local_1746.x) > 1f)
									{
										TASK::TASK_VEHICLE_TEMP_ACTION(iLocal_2045[2], Local_1746.x, 24, -1);
									}
								}
							}
							else
							{
								if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1746.x, 1), Local_1526) > 100f)
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_2045[2], -1817882002) == 7 || iParam0)
									{
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_2045[2], Local_1746.x, Local_1526, 35f, 0, iLocal_2032, 262208, 10f, 20f);
									}
								}
								TASK::REQUEST_WAYPOINT_RECORDING(sLocal_1565);
								if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_1565))
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1746.x, 1), 1250.4f, 6483.8f, 19.9f) < 100f)
									{
										iLocal_1470++;
									}
								}
							}
							break;
						
						case 1:
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1746.x, 0f, 4.1723f, -2.3128f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1746.x, 0f, 12.1723f, 3.3128f), 6f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1631[iLocal_1452 /*19*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1746.x, 0f, 4.1723f, -2.3128f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1746.x, 0f, 12.1723f, 3.3128f), 6f, 0, 1, 0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_2045[2], -2118855366) == 7)
								{
									if (ENTITY::GET_ENTITY_SPEED(Local_1746.x) > 1f)
									{
										TASK::TASK_VEHICLE_TEMP_ACTION(iLocal_2045[2], Local_1746.x, 24, -1);
									}
								}
							}
							else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1746.x, 1), Local_1526) > 400f)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_2045[2], -235832601) == 7 || iParam0)
								{
									TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_2045[2], Local_1746.x, sLocal_1565, 262144, 0, 8, -1, 35f, 0, 5f);
								}
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1746.x, 0))
							{
								if (VEHICLE::IS_VEHICLE_STOPPED(Local_1746.x))
								{
									if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3585))
									{
										AUDIO::STOP_SOUND(iLocal_3585);
										AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CAR_STEAL_4");
									}
								}
							}
							break;
					}
					if ((MISC::GET_GAME_TIMER() - iLocal_1473) > 0 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
					{
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(Local_1749.x))
		{
			if (PED::IS_PED_GROUP_MEMBER(Local_1749.x, GlobalFunc_468()))
			{
				PED::REMOVE_PED_FROM_GROUP(Local_1749.x);
			}
			if (!PED::IS_PED_IN_VEHICLE(Local_1749.x, Local_1746.x, 1))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_1749.x, -1794415470) != 1)
				{
					TASK::TASK_ENTER_VEHICLE(Local_1749.x, Local_1746.x, 20000, 0, 2f, 1, 0);
				}
			}
		}
	}
}

void func_489()//Position - 0x58EAA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_1631)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1631[iVar0 /*19*/]))
		{
			if (Local_1631[iVar0 /*19*/].f_18 != joaat("jb700"))
			{
			}
		}
		iVar0++;
	}
}

void func_490(var uParam0)//Position - 0x58EE6
{
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_1 = 1;
	uParam0->f_4 = 0;
	uParam0->f_5 = 68;
	uParam0->f_36 = 0;
	uParam0->f_37 = 0;
	uParam0->f_31 = 0;
	uParam0->f_32 = 0;
	uParam0->f_33 = 0;
	uParam0->f_34 = 0;
	uParam0->f_35 = 0;
}

void func_491()//Position - 0x58F2F
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3604))
	{
		GRAPHICS::SET_PARTICLE_FX_LOOPED_OFFSETS(uLocal_3604, Local_1544, Local_1547);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3605))
	{
		GRAPHICS::SET_PARTICLE_FX_LOOPED_OFFSETS(uLocal_3605, Local_1541, Local_1547);
	}
	if (iLocal_2042 == 0)
	{
		if (iLocal_1362)
		{
			if (iLocal_1388 != 99)
			{
				if (bLocal_1377)
				{
					GlobalFunc_5116(-1815.56f, 4701.307f, 56.0453f, 314.9911f, 1, 0);
					iLocal_1388 = 99;
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1815.56f, 4701.307f, 56.0453f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 314.9911f);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
					STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
					SYSTEM::WAIT(0);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
					iLocal_1388 = 99;
				}
				iLocal_1471 = 0;
				iLocal_1476 = 0;
				iLocal_1477 = 0;
				iLocal_1478 = 0;
				iLocal_1479 = 0;
				GlobalFunc_82();
				func_45(1);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				MISC::CLEAR_AREA_OF_PEDS(-1779.38f, 4732.687f, 56.0433f, 15f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(-1810.56f, 4701.307f, 56.0453f, 100f, 0, 0, 0, 0, 0);
				func_532(-1815.56f, 4701.307f, 56.0453f);
				STREAMING::REQUEST_PTFX_ASSET();
				while (((((!func_356() || !func_352(-1779.38f, 4732.687f, 56.0433f, 314.9911f)) || !func_349()) || !func_345(504.1672f, -1304.744f, 28.3103f, 200.8915f)) || !func_51(496.6033f, -1308.379f, 28.302f, 204.3612f)) || !STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
					SYSTEM::WAIT(0);
				}
				GlobalFunc_5108(0, -1, 0);
				if (!ENTITY::IS_ENTITY_DEAD(Local_1746.f_1))
				{
					if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3604))
					{
						uLocal_3604 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_carsteal4_trailer_scrape", Local_1746.f_1, Local_1544, Local_1547, 1065353216, 0, 0, 0);
					}
					if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3605))
					{
						uLocal_3605 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_carsteal4_trailer_scrape", Local_1746.f_1, Local_1541, Local_1547, 1065353216, 0, 0, 0);
					}
				}
				SYSTEM::SETTIMERB(0);
				while (!ENTITY::DOES_ENTITY_EXIST(iLocal_1611[0]) || SYSTEM::TIMERB() < 2000)
				{
					if (!PED::IS_PED_INJURED(Local_1749.x))
					{
						func_525();
					}
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
					func_532(ENTITY::GET_ENTITY_COORDS(Local_1746.x, 1));
					PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(Local_1529.x, Local_1529.f_1, Local_1532.x, Local_1532.f_1);
					SYSTEM::WAIT(0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1746.x, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_2045[2]))
					{
						PED::SET_PED_INTO_VEHICLE(iLocal_2045[2], Local_1746.x, -1);
					}
					if (!PED::IS_PED_INJURED(Local_1749.x))
					{
						PED::SET_PED_INTO_VEHICLE(Local_1749.x, Local_1746.x, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_1746.f_1))
				{
					VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1746.f_1, 5, 0, 0);
				}
				func_524();
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1631[iLocal_1452 /*19*/], 0))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_1631[iLocal_1452 /*19*/]))
					{
						ENTITY::DETACH_ENTITY(Local_1631[iLocal_1452 /*19*/], 1, 1);
					}
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1631[iLocal_1452 /*19*/], -1);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_1631[iLocal_1452 /*19*/], 0);
					VEHICLE::SET_VEHICLE_STRONG(Local_1631[iLocal_1452 /*19*/], 1);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1631[iLocal_1452 /*19*/], 1);
					ENTITY::SET_ENTITY_COLLISION(Local_1631[iLocal_1452 /*19*/], 1, 0);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1631[iLocal_1452 /*19*/], 1, 1);
					ENTITY::SET_ENTITY_COORDS(Local_1631[iLocal_1452 /*19*/], -1810.56f, 4701.307f, 56.0453f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_1631[iLocal_1452 /*19*/], 309.9444f);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1631[iLocal_1452 /*19*/], 1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1631[iLocal_1452 /*19*/]);
				}
				func_489();
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 230, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				iLocal_1383 = 1;
				iLocal_1362 = 0;
			}
		}
		else
		{
			if (!PED::IS_PED_INJURED(iLocal_2045[2]))
			{
				if (PED::IS_PED_GROUP_MEMBER(iLocal_2045[2], GlobalFunc_468()))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_2045[2]);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2045[2], 1);
				PED::SET_PED_MAX_HEALTH(iLocal_2045[2], 1800);
				ENTITY::SET_ENTITY_HEALTH(iLocal_2045[2], 1800);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_2045[2], 3, 0);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_2045[2], 0);
			}
			if (!PED::IS_PED_INJURED(Local_1749.x))
			{
				if (PED::IS_PED_GROUP_MEMBER(Local_1749.x, GlobalFunc_468()))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_1749.x);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1749.x, 1);
				PED::SET_PED_MAX_HEALTH(Local_1749.x, 1800);
				ENTITY::SET_ENTITY_HEALTH(Local_1749.x, 1800);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1749.x, 3, 0);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_1749.x, 0);
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Local_1631)
			{
				if (iVar0 != iLocal_1452)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1631[iVar0 /*19*/], 0))
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1631[iVar0 /*19*/], 0);
					}
				}
				iVar0++;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1746.x, 0))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1746.x, 0);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_1746.x, 0, 1862763509);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1746.x, 1);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_1746.x, "CAR_4_TRANSPORTER_GROUP", 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_1746.f_1))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1746.f_1, 0);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1746.f_1, 1);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_1746.f_1, "CAR_4_TRANSPORTER_GROUP", 0);
			}
			PLAYER::SET_POLICE_RADAR_BLIPS(1);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 0);
			PED::SET_CREATE_RANDOM_COPS(0);
			MISC::ENABLE_DISPATCH_SERVICE(3, 0);
			MISC::ENABLE_DISPATCH_SERVICE(1, 0);
			MISC::ENABLE_DISPATCH_SERVICE(8, 0);
			MISC::ENABLE_DISPATCH_SERVICE(2, 0);
			MISC::ENABLE_DISPATCH_SERVICE(6, 0);
			MISC::ENABLE_DISPATCH_SERVICE(5, 0);
			MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(2, 1);
			MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(8, 1);
			VEHICLE::_0xB264C4D2F2B0A78B(0);
			GRAPHICS::_0x54E22EA2C1956A8D(5f);
			func_34(1);
			GlobalFunc_9132(1);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				AUDIO::TRIGGER_MUSIC_EVENT("CAR4_TRUCK_RESTART");
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_DEFEND_THE_TRUCK"))
			{
				AUDIO::START_AUDIO_SCENE("CAR_4_DEFEND_THE_TRUCK");
			}
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			PLAYER::SET_MAX_WANTED_LEVEL(3);
			iLocal_1468 = 0;
			iLocal_1470 = 0;
			func_490(&Local_1994);
			func_357();
			GlobalFunc_Checkpoint7(4, "LOSE_COPS", 0, 0, 0, 1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				MISC::CLEAR_AREA_OF_COPS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 500f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 300f, 0, 0, 0, 0, 0);
				CAM::DO_SCREEN_FADE_IN(800);
				while (!CAM::IS_SCREEN_FADED_IN())
				{
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
					PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
					PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
					PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
					PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(Local_1529.x, Local_1529.f_1, Local_1532.x, Local_1532.f_1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1746.x, 0))
					{
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_1746.x, 15f);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1631[iLocal_1452 /*19*/], 0))
					{
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_1631[iLocal_1452 /*19*/], 15f);
					}
					SYSTEM::WAIT(0);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1631[iLocal_1452 /*19*/], 0))
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1631[iLocal_1452 /*19*/], 0);
			}
			SYSTEM::SETTIMERB(0);
			iLocal_1501 = 0;
			iLocal_1505 = 0;
			iLocal_1503 = 0;
			iLocal_1504 = 0;
			iLocal_1502 = 0;
			iLocal_1559 = 0;
			iLocal_1560 = 0;
			iLocal_1561 = 0;
			iLocal_1562 = 0;
			iLocal_1389 = 0;
			iLocal_1390 = MISC::GET_GAME_TIMER();
			iLocal_1388 = 0;
			iLocal_2042 = 1;
		}
	}
	if (iLocal_2042 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1746.x))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_1746.x))
			{
				VEHICLE::SET_FORCE_HD_VEHICLE(Local_1746.x, 1);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_1746.f_1))
		{
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3604))
			{
				func_523(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1746.f_1, Local_1544 + Local_1556), Local_1550, Local_1553.x, Local_1553.f_1, &iLocal_1559, &iLocal_1560, 50, 300, 30, 100);
			}
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3605))
			{
				func_523(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1746.f_1, Local_1541 + Local_1556), Local_1550, Local_1553.x, Local_1553.f_1, &iLocal_1561, &iLocal_1562, 50, 300, 30, 100);
			}
		}
		if (!iLocal_1383)
		{
			if (!CAM::_0x3044240D2E0FA842())
			{
				CAM::DESTROY_ALL_CAMS(0);
				iLocal_1383 = 1;
			}
		}
		func_532(ENTITY::GET_ENTITY_COORDS(Local_1746.x, 1));
		PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(Local_1529.x, Local_1529.f_1, Local_1532.x, Local_1532.f_1);
		if (HUD::DOES_BLIP_EXIST(Local_1810.f_5))
		{
			if (!HUD::DOES_BLIP_EXIST(Local_1746.f_2))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1746.x, 0))
				{
					Local_1746.f_2 = GlobalFunc_6783(Local_1746.x, 0, 0);
				}
			}
		}
		else if (HUD::DOES_BLIP_EXIST(Local_1746.f_2))
		{
			HUD::REMOVE_BLIP(&(Local_1746.f_2));
		}
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
		func_525();
		func_50(0);
		func_476();
		func_49(0);
		func_478();
		func_477(Local_1631[iLocal_1452 /*19*/], &Local_1994);
		func_488(0);
		uVar1 = func_521();
		switch (iLocal_1388)
		{
			case 0:
				GlobalFunc_9194(&Local_1810, Local_1526, 0.001f, 0.001f, 2f, 0, Local_1631[iLocal_1452 /*19*/], "CH_DEFTRUCK", "CH_GETINCAR", "CH_GETBACKCAR", 0, 0, 1, -1);
				if (uVar1 || !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					GlobalFunc_5652(&Local_1810, 1, 0);
					HUD::CLEAR_PRINTS();
					PED::SET_CREATE_RANDOM_COPS(0);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2035);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2036);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_DEFEND_THE_TRUCK"))
					{
						AUDIO::STOP_AUDIO_SCENE("CAR_4_DEFEND_THE_TRUCK");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_FOLLOW_TRUCK"))
					{
						AUDIO::START_AUDIO_SCENE("CAR_4_FOLLOW_TRUCK");
					}
					GlobalFunc_571(0, -1);
					iLocal_1388++;
				}
				else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1746.x, 0))
				{
					if (!func_475("CST7_NEAREND") && iLocal_1468 < 50)
					{
						if (!GlobalFunc_5172(&Local_1810, 1))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1746.x, 1), Local_1526) < 640000f && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1746.x, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 40000f)
							{
								if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_NEAREND", 7, 0, 0, 0))
								{
									func_472("CST7_NEAREND", 1);
								}
							}
						}
					}
					if ((((MISC::GET_GAME_TIMER() - iLocal_1480) > 0 && iLocal_1481 < 7) && !func_475("CST7_CDONE")) && !GlobalFunc_5172(&Local_1810, 1))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1746.x, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 40000f)
						{
							if (GlobalFunc_10618(&Local_2123, "CST7AUD", GlobalFunc_1078(GlobalFunc_745(), "CST7_LAMSH", "CST7_LOFF"), 7, 0, 0, 0))
							{
								iLocal_1481++;
								iLocal_1480 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, (13000 + iLocal_1481 * 500)));
							}
						}
					}
					if (!func_475("CST7_HSET"))
					{
						if (!GlobalFunc_5172(&Local_1810, 1))
						{
							if (SYSTEM::TIMERB() > MISC::GET_RANDOM_INT_IN_RANGE(10000, 13000))
							{
								if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
								{
									if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_HSET1", 7, 0, 0, 0))
									{
										func_472("CST7_HSET", 1);
									}
								}
								else if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_HSET2", 7, 0, 0, 0))
								{
									func_472("CST7_HSET", 1);
								}
							}
						}
					}
					else if (!GlobalFunc_5172(&Local_1810, 1))
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_1505) > 0)
						{
							if (!func_475("CST7_SHOOT"))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1631[iLocal_1452 /*19*/]))
								{
									if (PAD::IS_DISABLED_CONTROL_PRESSED(0, Local_1994.f_5))
									{
										if ((MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_1746.x, 1), 2.5f, 1) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_1746.x, 1), 2.5f, 1)) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_1631[0 /*19*/], 1), 2.5f, 1))
										{
											if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_SHOOT", 7, 0, 0, 0))
											{
												iLocal_1502++;
												iLocal_1505 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 15000));
												if (iLocal_1502 == 5)
												{
													func_472("CST7_SHOOT", 1);
												}
											}
										}
									}
								}
							}
							if (!func_475("CST7_BASH"))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1631[iLocal_1452 /*19*/]))
								{
									if (!PAD::IS_DISABLED_CONTROL_PRESSED(0, Local_1994.f_5))
									{
										if (((((ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_1746.f_1, Local_1631[iLocal_1452 /*19*/]) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_1746.x, Local_1631[iLocal_1452 /*19*/])) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_1631[0 /*19*/], Local_1631[iLocal_1452 /*19*/])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1746.f_1, Local_1631[iLocal_1452 /*19*/], 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1746.x, Local_1631[iLocal_1452 /*19*/], 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1631[0 /*19*/], Local_1631[iLocal_1452 /*19*/], 1))
										{
											if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_BASH", 7, 0, 0, 0))
											{
												iLocal_1503++;
												iLocal_1505 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 15000));
												ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_1746.f_1);
												ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_1746.x);
												ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_1631[0 /*19*/]);
												if (iLocal_1503 == 6)
												{
													func_472("CST7_BASH", 1);
												}
											}
										}
									}
								}
							}
							if (!func_475("CST7_STING"))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1631[iLocal_1452 /*19*/]))
								{
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_1598[iVar2]))
										{
											if (!ENTITY::IS_ENTITY_DEAD(iLocal_1598[iVar2]))
											{
												if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1598[iVar2], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1746.x, 0f, 4.1723f, -2.3128f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1746.x, 0f, 12.1723f, 3.3128f), 6f, 0, 1, 0))
												{
													if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_STING", 7, 0, 0, 0))
													{
														iLocal_1504++;
														iLocal_1505 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 15000));
														if (iLocal_1504 == 3)
														{
															func_472("CST7_STING", 1);
														}
													}
												}
											}
										}
										iVar2++;
									}
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if (!func_475("CST7_FIN02"))
				{
					if (!func_475("CST7_FIN01") && !func_475("CST7_FIN01B"))
					{
						if (!GlobalFunc_5172(&Local_1810, 1))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1526) > 40000f)
							{
								GlobalFunc_173(&Local_2123, 8, 0, "MOLLY", 0, 1);
								if (GlobalFunc_10638(&Local_2123, 45, "CST7AUD", GlobalFunc_1078(GlobalFunc_Is_Mission_Retry(), "CST7_FIN01B", "CST7_FIN01"), 11, 1, 0, 0, 0))
								{
									func_472(GlobalFunc_1078(GlobalFunc_Is_Mission_Retry(), "CST7_FIN01B", "CST7_FIN01"), 1);
									RECORDING::_0x293220DA1B46CEBC(4f, 10f, 4);
								}
							}
							else
							{
								func_472("CST7_FIN01", 1);
								func_472("CST7_FIN01B", 1);
							}
						}
					}
					else if (!AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
					{
						func_472("CST7_FIN02", 1);
					}
				}
				else
				{
					if (!func_475("CST7_STOP"))
					{
						if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_STOP", 7, 0, 0, 0))
						{
							func_472("CST7_STOP", 1);
						}
					}
					else if (!func_475("CST7_DRIVE"))
					{
						if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_DRIVE", 7, 0, 0, 0))
						{
							func_472("CST7_DRIVE", 1);
						}
					}
					GlobalFunc_9194(&Local_1810, Local_1526, 0.001f, 0.001f, 2f, 0, Local_1631[iLocal_1452 /*19*/], "CH_FOLTRUCK2", "CH_GETINCAR", "CH_GETBACKCAR", 0, 0, 1, -1);
				}
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					GlobalFunc_5652(&Local_1810, 1, 0);
					iLocal_1468 = 0;
					iLocal_1388 = (iLocal_1388 - 1);
				}
				if (HUD::DOES_BLIP_EXIST(Local_1810.f_5))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1746.x, 0))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1746.x, 1), Local_1526) < 400f && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1746.x, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 900f)
						{
							iLocal_2042 = 2;
						}
					}
				}
				if (HUD::DOES_BLIP_EXIST(Local_1810))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1746.x, 0))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1746.x, 1), Local_1526) < 400f && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1746.x, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 900f)
						{
							iLocal_2042 = 2;
						}
					}
				}
				break;
		}
		if (!func_475("CST7_WALK2"))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1746.x, 1), Local_1526) > 900f)
			{
				if (HUD::DOES_BLIP_EXIST(Local_1810))
				{
					if (!PED::IS_PED_INJURED(iLocal_1622))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_1622, 1), 18f, 18f, 18f, 0, 1, 0))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_1622, PLAYER::PLAYER_PED_ID()))
							{
								if (!GlobalFunc_5172(&Local_1810, 1))
								{
									GlobalFunc_173(&Local_2123, 8, iLocal_1622, "MOLLY", 0, 1);
									if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_WALK2", 7, 0, 0, 0))
									{
										func_472("CST7_WALK2", 1);
									}
								}
								else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_1622))
								{
									GlobalFunc_5653(iLocal_1622, "CST7_AIAA", "MOLLY", 6);
									func_472("CST7_WALK2", 1);
								}
							}
						}
					}
				}
			}
		}
		if (!func_475("CST7_WALK1"))
		{
			if (func_475("CST7_WALK2"))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1746.x, 1), Local_1526) > 900f)
				{
					if (HUD::DOES_BLIP_EXIST(Local_1810))
					{
						if (!PED::IS_PED_INJURED(iLocal_1622))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_1622, 1), 10f, 10f, 10f, 0, 1, 0))
							{
								if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_1622, PLAYER::PLAYER_PED_ID()))
								{
									if (!GlobalFunc_5172(&Local_1810, 1))
									{
										GlobalFunc_173(&Local_2123, 8, iLocal_1622, "MOLLY", 0, 1);
										if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_WALK1", 7, 0, 0, 0))
										{
											func_472("CST7_WALK1", 1);
										}
									}
									else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_1622))
									{
										GlobalFunc_5653(iLocal_1622, "CST7_AIAA", "MOLLY", 6);
										func_472("CST7_WALK1", 1);
									}
								}
							}
						}
					}
				}
			}
		}
		switch (iLocal_1389)
		{
			case 0:
				iLocal_1389++;
				break;
			
			case 1:
				if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (AUDIO::PREPARE_MUSIC_EVENT("CAR4_RADIO_1"))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("CAR4_RADIO_1");
						iLocal_1390 = MISC::GET_GAME_TIMER();
						iLocal_1389++;
					}
				}
				break;
			
			case 2:
				if ((MISC::GET_GAME_TIMER() - iLocal_1390) > 5000)
				{
					iLocal_1389++;
				}
				break;
		}
		if (!func_475("CST7_MORE"))
		{
			if (!GlobalFunc_5172(&Local_1810, 0))
			{
				if (iLocal_1485 > 1)
				{
					iVar3 = (iLocal_1485 - 1);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_1611[iVar3]) && !ENTITY::IS_ENTITY_DEAD(Local_1746.f_1))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1746.f_1, 1), ENTITY::GET_ENTITY_COORDS(iLocal_1611[iVar3], 1)) < 1600f)
						{
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
							{
								if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_LMORE", 7, 0, 0, 0))
								{
									func_472("CST7_MORE", 1);
								}
							}
							else if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_TMORE", 7, 0, 0, 0))
							{
								func_472("CST7_MORE", 1);
							}
						}
					}
				}
			}
		}
		else if (iLocal_1485 != iLocal_1471)
		{
			func_472("CST7_MORE", 0);
		}
		iLocal_1485 = iLocal_1471;
		if (HUD::DOES_BLIP_EXIST(Local_1810.f_5))
		{
			HUD::SET_BLIP_ALPHA(Local_1810.f_5, 0);
			HUD::SET_BLIP_ROUTE(Local_1810.f_5, 0);
		}
		if (!func_475("CH_SHOTHELP"))
		{
			if (SYSTEM::TIMERB() > 3000 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_HELP(1);
				if (PAD::_IS_USING_KEYBOARD(0))
				{
					GlobalFunc_159("CH_SHOTHELP_KM", 15000);
				}
				else
				{
					GlobalFunc_159("CH_SHOTHELP", 15000);
				}
				func_472("CH_SHOTHELP", 1);
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1631[iLocal_1452 /*19*/], 0))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1631[iLocal_1452 /*19*/]))
			{
				if (!func_475("CST7_BUTTON"))
				{
					if (GlobalFunc_663("LOSE_WANTED", 0, 0))
					{
						if (SYSTEM::TIMERB() > 4000)
						{
							HUD::CLEAR_PRINTS();
						}
					}
					if (Local_1994.f_4 == 0)
					{
						if (!GlobalFunc_5172(&Local_1810, 1))
						{
							if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_BUTTON", 7, 0, 0, 0))
							{
								func_472("CST7_BUTTON", 1);
							}
						}
					}
					else
					{
						func_472("CST7_BUTTON", 1);
					}
				}
			}
			else
			{
				if (GlobalFunc_74("CH_SHOTHELP"))
				{
					HUD::CLEAR_HELP(1);
				}
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1631[iLocal_1452 /*19*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 10000f)
				{
					func_724(25);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_1746.x))
			{
				GlobalFunc_10692(&uLocal_2288, Local_1746.x, 0, 0, 1, 1, 1);
			}
		}
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_FOCUS_ON_TRUCK"))
			{
				AUDIO::START_AUDIO_SCENE("CAR_4_FOCUS_ON_TRUCK");
			}
		}
		else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_FOCUS_ON_TRUCK"))
		{
			AUDIO::STOP_AUDIO_SCENE("CAR_4_FOCUS_ON_TRUCK");
		}
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1746.x, 0))
		{
			func_724(4);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_1746.x))
		{
			if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Local_1746.x))
			{
				func_724(9);
			}
		}
		if (!PED::IS_PED_INJURED(Local_1749.x) && !PED::IS_PED_INJURED(iLocal_2045[2]))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1749.x, 1)) > 90000f)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_2045[2], 1)) > 40000f)
				{
					func_724(15);
				}
				else
				{
					func_724(13);
				}
			}
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_2045[2], 1)) > 90000f)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1749.x, 1)) > 40000f)
				{
					func_724(15);
				}
				else
				{
					func_724(14);
				}
			}
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1746.x, 1), Local_1526) < 22500f && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1746.x, 1)) < 3600f)
			{
				func_724(19);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1622))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1622))
			{
				if (((((FIRE::IS_EXPLOSION_IN_SPHERE(0, ENTITY::GET_ENTITY_COORDS(iLocal_1622, 1), 5f) || FIRE::IS_EXPLOSION_IN_SPHERE(4, ENTITY::GET_ENTITY_COORDS(iLocal_1622, 1), 5f)) || FIRE::IS_EXPLOSION_IN_SPHERE(2, ENTITY::GET_ENTITY_COORDS(iLocal_1622, 1), 5f)) || FIRE::IS_EXPLOSION_IN_SPHERE(5, ENTITY::GET_ENTITY_COORDS(iLocal_1622, 1), 5f)) || FIRE::IS_EXPLOSION_IN_SPHERE(3, ENTITY::GET_ENTITY_COORDS(iLocal_1622, 1), 5f)) || FIRE::IS_EXPLOSION_IN_SPHERE(1, ENTITY::GET_ENTITY_COORDS(iLocal_1622, 1), 5f))
				{
					PED::APPLY_DAMAGE_TO_PED(iLocal_1622, 400, 1);
				}
				if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1622, PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_1622)) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_1622, PLAYER::PLAYER_PED_ID()))
				{
					AUDIO::PLAY_PAIN(iLocal_1622, 5, 0, 0);
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_1622, -8f, 1);
					TASK::TASK_SMART_FLEE_PED(iLocal_1622, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					func_724(26);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1608))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_1608))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1608, PLAYER::PLAYER_PED_ID(), 1) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_1608, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()))))
						{
							AUDIO::PLAY_PAIN(iLocal_1622, 5, 0, 0);
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_1622, -8f, 1);
							TASK::TASK_SMART_FLEE_PED(iLocal_1622, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
							func_724(26);
						}
					}
				}
				if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_1622, 1), 8f, 1))
				{
					AUDIO::PLAY_PAIN(iLocal_1622, 5, 0, 0);
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_1622, -8f, 1);
					TASK::TASK_SMART_FLEE_PED(iLocal_1622, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					func_724(26);
				}
			}
		}
	}
	if (((ENTITY::DOES_ENTITY_EXIST(Local_1746.x) && !ENTITY::IS_ENTITY_DEAD(Local_1746.x)) && ENTITY::DOES_ENTITY_EXIST(Local_1746.f_1)) && !ENTITY::IS_ENTITY_DEAD(Local_1746.f_1))
	{
		if (ENTITY::GET_ENTITY_SPEED(Local_1746.x) < 1f || VEHICLE::IS_VEHICLE_STOPPED(Local_1746.x))
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3585))
			{
				AUDIO::STOP_SOUND(iLocal_3585);
			}
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3604))
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_3604, 0);
			}
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3605))
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_3605, 0);
			}
		}
		else
		{
			if (AUDIO::HAS_SOUND_FINISHED(iLocal_3585))
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_STEAL_4", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_1631[0 /*19*/]) && !ENTITY::IS_ENTITY_DEAD(Local_1631[0 /*19*/]))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_3585, "CAR_STEAL_4_RAMP_SCRAPE", Local_1631[0 /*19*/], "CAR_STEAL_4_SOUNDSET", 0, 0);
					}
				}
			}
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3604))
			{
				uLocal_3604 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_carsteal4_trailer_scrape", Local_1746.f_1, Local_1544, Local_1547, 1065353216, 0, 0, 0);
			}
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3605))
			{
				uLocal_3605 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_carsteal4_trailer_scrape", Local_1746.f_1, Local_1541, Local_1547, 1065353216, 0, 0, 0);
			}
		}
	}
	if (iLocal_2042 == 2)
	{
		HUD::CLEAR_PRINTS();
		func_413();
		GlobalFunc_5652(&Local_1810, 1, 0);
		AUDIO::STOP_AUDIO_SCENES();
		GRAPHICS::_0x54E22EA2C1956A8D(1f);
		GlobalFunc_4948(&uLocal_2288, 0, 0);
		if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3585))
		{
			AUDIO::STOP_SOUND(iLocal_3585);
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3604))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_3604, 0);
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3605))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_3605, 0);
		}
		iLocal_2042 = 0;
		iLocal_2041 = 6;
	}
	if (iLocal_2042 == 3)
	{
		func_777(6, 0);
	}
}






























int func_521()//Position - 0x5B7EF
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5[10];
	float fVar16;
	float fVar17;
	
	iVar0 = 0;
	iVar1 = iLocal_1611;
	iVar2 = 0;
	fVar3 = 0f;
	fVar4 = 0f;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1611[iVar0], 0))
		{
			iVar2++;
		}
		else if (iVar0 >= iLocal_1471)
		{
			iVar2++;
		}
		iVar0++;
	}
	if (!PED::IS_PED_INJURED(iLocal_2045[2]))
	{
		PED::GET_PED_NEARBY_VEHICLES(iLocal_2045[2], &iVar5);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar5[iVar0]))
			{
				if (GlobalFunc_540(ENTITY::GET_ENTITY_MODEL(iVar5[iVar0])) || ENTITY::GET_ENTITY_MODEL(iVar5[iVar0]) == iLocal_2036)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar5[iVar0]))
					{
						fVar16 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_2045[2], 1), ENTITY::GET_ENTITY_COORDS(iVar5[iVar0], 1));
						fVar17 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iVar5[iVar0], 1));
						if (fVar3 == 0f || fVar16 < fVar3)
						{
							fVar3 = fVar16;
						}
						if (fVar4 == 0f || fVar17 < fVar4)
						{
							fVar4 = fVar17;
						}
					}
				}
			}
			iVar0++;
		}
	}
	switch (iLocal_1468)
	{
		case 0:
			PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
			PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
			PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
			if (iLocal_1471 >= 5)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(2);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				iLocal_1468++;
			}
			break;
		
		case 1:
			PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
			PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
			PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
			if (iLocal_1471 >= (iVar1 - 1))
			{
				iLocal_1468++;
			}
			break;
		
		case 2:
			PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
			PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
			PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || (iVar2 == 0 && iLocal_1471 >= iVar1))
			{
				PLAYER::SET_MAX_WANTED_LEVEL(1);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				iLocal_1468 = 50;
				iLocal_1469 = MISC::GET_GAME_TIMER();
			}
			break;
		
		case 50:
			if (!func_475("CST7_CDONE"))
			{
				if (!GlobalFunc_5172(&Local_1810, 1))
				{
					if (CAM::IS_GAMEPLAY_CAM_RENDERING())
					{
						if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_CDONE", 7, 0, 0, 0))
						{
							func_472("CST7_CDONE", 1);
						}
					}
				}
			}
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || (iVar2 == 0 && iLocal_1471 >= iVar1))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_1469) > 10000)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					iLocal_1468 = 100;
				}
			}
			else
			{
				iLocal_1469 = MISC::GET_GAME_TIMER();
			}
			break;
		
		case 100:
			return 1;
			break;
	}
	return 0;
}


void func_523(struct<3> Param0, struct<3> Param3, var uParam6, var uParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x5BB17
{
	if ((MISC::GET_GAME_TIMER() - *iParam8) > 0)
	{
		if (*iParam9 == 0)
		{
			*iParam9 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(iParam10, iParam11));
		}
		else
		{
			GRAPHICS::DRAW_LIGHT_WITH_RANGE(Param0, SYSTEM::FLOOR(Param3.x), SYSTEM::FLOOR(Param3.f_1), SYSTEM::FLOOR(Param3.f_2), uParam6, uParam7);
			if ((MISC::GET_GAME_TIMER() - *iParam9) > 0)
			{
				*iParam8 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(iParam12, iParam13));
				*iParam9 = 0;
			}
		}
	}
}

void func_524()//Position - 0x5BB87
{
	if (!PED::IS_PED_INJURED(iLocal_2045[1]))
	{
		GlobalFunc_11257(iLocal_2045[1], 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (!PED::IS_PED_INJURED(iLocal_2045[2]))
	{
		GlobalFunc_11257(iLocal_2045[2], 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == GlobalFunc_4917(1))
	{
		GlobalFunc_11257(PLAYER::PLAYER_PED_ID(), 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	else
	{
		GlobalFunc_11257(PLAYER::PLAYER_PED_ID(), 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (!PED::IS_PED_INJURED(Local_1749.x))
	{
		PED::SET_PED_PROP_INDEX(Local_1749.x, 2, 0, 0, false);
	}
}

void func_525()//Position - 0x5BC2C
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	float fVar14;
	float fVar15;
	struct<3> Var16;
	int iVar19;
	
	if (!ENTITY::IS_ENTITY_DEAD(Local_1746.f_1) && !ENTITY::IS_ENTITY_DEAD(Local_1746.x))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		Var6 = { ENTITY::GET_ENTITY_COORDS(Local_1746.f_1, 1) };
		AUDIO::REQUEST_MISSION_AUDIO_BANK("JWL_HEIST_CAR_SMASHES_BIG", 0);
		if (iLocal_1471 == 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1611[0]))
			{
				if ((SYSTEM::VDIST2(Var3, Local_1535) < 40000f || (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1746.x, 1), Local_1526) < 1.6E+07f && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1535) > 4000000f)) || iLocal_2041 == 5)
				{
					STREAMING::REQUEST_MODEL(iLocal_2035);
					STREAMING::REQUEST_MODEL(iLocal_2036);
					if (STREAMING::HAS_MODEL_LOADED(iLocal_2035) && STREAMING::HAS_MODEL_LOADED(iLocal_2036))
					{
						if (iLocal_2041 == 5 || SYSTEM::VDIST2(Var3, Local_1535) > 40000f)
						{
							if (func_531(&Var0, &fVar9, 0, -40f))
							{
								if (SYSTEM::VDIST2(Var3, Var0) < 40000f)
								{
									MISC::CLEAR_AREA(Var0, 3f, 1, 0, 0, 0);
									iLocal_1611[0] = VEHICLE::CREATE_VEHICLE(iLocal_2036, Var0, fVar9, 1, 1);
								}
							}
						}
						else
						{
							iLocal_1611[0] = VEHICLE::CREATE_VEHICLE(iLocal_2036, Local_1535, 54.7075f, 1, 1);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_1611[0]))
						{
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_1611[0], "CAR_4_COPS_GROUP", 0);
							Local_1753[0 /*4*/] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1611[0], 6, iLocal_2035, -1, 1, 1);
							Local_1753[1 /*4*/] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1611[0], 6, iLocal_2035, 0, 1, 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2036);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2035);
							Local_1753[0 /*4*/].f_2 = 1;
							Local_1753[1 /*4*/].f_2 = 0;
							Local_1753[0 /*4*/].f_3 = 0;
							Local_1753[1 /*4*/].f_3 = 0;
							fLocal_1514 = -60f;
							iLocal_1471++;
							iLocal_1509 = MISC::GET_GAME_TIMER() + 1000;
						}
					}
				}
			}
		}
		else if ((PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) && !ENTITY::IS_ENTITY_DEAD(Local_1746.f_1)) && !ENTITY::IS_ENTITY_DEAD(Local_1746.x))
		{
			STREAMING::REQUEST_MODEL(iLocal_2035);
			STREAMING::REQUEST_MODEL(iLocal_2036);
			iVar10 = 0;
			iVar11 = 0;
			while (iVar11 < iLocal_1611)
			{
				iVar12 = iVar11 * 2;
				iVar13 = iVar12 + 1;
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1611[iVar11]))
				{
					func_529(&(Local_1753[iVar12 /*4*/]), iLocal_1611[iVar11], Local_1753[iVar12 /*4*/], -1, Local_1746.x, PLAYER::PLAYER_PED_ID());
					func_529(&(Local_1753[iVar13 /*4*/]), iLocal_1611[iVar11], Local_1753[iVar12 /*4*/], 0, Local_1746.x, PLAYER::PLAYER_PED_ID());
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1611[iVar11], 0))
					{
						Var16 = { ENTITY::GET_ENTITY_COORDS(iLocal_1611[iVar11], 1) };
						fVar14 = SYSTEM::VDIST2(Var6, Var16);
						fVar15 = SYSTEM::VDIST2(Var3, Var16);
						if (!PED::IS_PED_INJURED(Local_1753[iVar12 /*4*/]))
						{
							if (Local_1753[iVar12 /*4*/].f_2 == 1 || Local_1753[iVar12 /*4*/].f_2 == 2)
							{
								if ((MISC::GET_GAME_TIMER() - iLocal_1475) > 0 && !GlobalFunc_5172(&Local_1810, 1))
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1753[iVar12 /*4*/], 1), ENTITY::GET_ENTITY_COORDS(Local_1746.f_1, 1)) < 1600f)
									{
										iVar19 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
										if (iLocal_2041 == 5)
										{
											if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1753[iVar12 /*4*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 1600f)
											{
												if (iVar19 == 0)
												{
													if (iLocal_1478 < 4)
													{
														GlobalFunc_200(&Local_2123, 4);
														GlobalFunc_200(&Local_2123, 6);
														GlobalFunc_173(&Local_2123, 4, Local_1753[iVar12 /*4*/], "CSTFCop1", 0, 1);
														if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_COPWAR3", 7, 0, 0, 0))
														{
															iLocal_1475 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(11000, 15000));
															iLocal_1478++;
														}
													}
												}
												else if (iLocal_1479 < 4)
												{
													GlobalFunc_200(&Local_2123, 4);
													GlobalFunc_200(&Local_2123, 6);
													GlobalFunc_173(&Local_2123, 6, Local_1753[iVar12 /*4*/], "CSTFCop2", 0, 1);
													if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_COPWAR4", 7, 0, 0, 0))
													{
														iLocal_1475 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(11000, 15000));
														iLocal_1479++;
													}
												}
											}
										}
										else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1753[iVar12 /*4*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 2500f)
										{
											if (Local_2123[4 /*10*/] != Local_1753[iVar12 /*4*/])
											{
												GlobalFunc_173(&Local_2123, 4, Local_1753[iVar12 /*4*/], "CSTFCop1", 0, 1);
											}
											if (iLocal_1476 < 2)
											{
												if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_COPWARN", 7, 0, 0, 0))
												{
													iLocal_1475 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(11000, 15000));
													iLocal_1476++;
												}
											}
											else if (iLocal_1477 < 4)
											{
												if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_COPWAR2", 7, 0, 0, 0))
												{
													iLocal_1475 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(11000, 15000));
													iLocal_1477++;
												}
											}
										}
									}
								}
							}
						}
						if (iLocal_2041 == 5)
						{
							if (((MISC::GET_GAME_TIMER() - iLocal_1501) > 0 && !ENTITY::IS_ENTITY_DEAD(Local_1631[iLocal_1452 /*19*/])) && !GlobalFunc_5172(&Local_1810, 1))
							{
								if ((PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1631[iLocal_1452 /*19*/]) && !PAD::IS_DISABLED_CONTROL_PRESSED(0, Local_1994.f_5)) && MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2.5f, 0, 1))
								{
									if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_SHOT", 7, 0, 0, 0))
									{
										iLocal_1501 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 12500));
									}
								}
							}
						}
						if ((VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_1611[iVar11]) < 400f || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_1611[iVar11]) < 400f) || (fVar14 > 40000f && fVar15 > 40000f))
						{
							if (!PED::IS_PED_INJURED(Local_1753[iVar12 /*4*/]) && PED::IS_PED_IN_VEHICLE(Local_1753[iVar12 /*4*/], iLocal_1611[iVar11], 0))
							{
								PED::APPLY_DAMAGE_TO_PED(Local_1753[iVar12 /*4*/], 200, 1);
								RECORDING::_0x293220DA1B46CEBC(3f, 5f, 3);
							}
							else
							{
								func_7(&(Local_1753[iVar12 /*4*/]), 0, 0);
							}
							if (!PED::IS_PED_INJURED(Local_1753[iVar13 /*4*/]) && PED::IS_PED_IN_VEHICLE(Local_1753[iVar13 /*4*/], iLocal_1611[iVar11], 0))
							{
								PED::APPLY_DAMAGE_TO_PED(Local_1753[iVar13 /*4*/], 200, 1);
							}
							else
							{
								func_7(&(Local_1753[iVar13 /*4*/]), 0, 0);
							}
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_1611[iVar11], 900f);
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_1611[iVar11], 900f);
							if (AUDIO::REQUEST_MISSION_AUDIO_BANK("JWL_HEIST_CAR_SMASHES_BIG", 0))
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Destroy_Cop_Car", iLocal_1611[iVar11], "JEWEL_HEIST_SOUNDS", 0, 0);
							}
						}
						else if (func_527(iLocal_1611[iVar11], Local_1631[iLocal_1452 /*19*/]))
						{
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_1611[iVar11], (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_1611[iVar11]) - 100f));
							WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(iLocal_1611[iVar11]);
						}
						if (!PED::IS_PED_INJURED(Local_1753[iVar12 /*4*/]) && !PED::IS_PED_INJURED(Local_1753[iVar13 /*4*/]))
						{
							iVar10++;
						}
						else if (PED::IS_PED_INJURED(Local_1753[iVar12 /*4*/]) && PED::IS_PED_INJURED(Local_1753[iVar13 /*4*/]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_1611[iVar11]))
							{
								AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_1611[iVar11], 0);
							}
							func_7(&(Local_1753[iVar12 /*4*/]), 0, 0);
							func_7(&(Local_1753[iVar13 /*4*/]), 0, 0);
							func_6(&(iLocal_1611[iVar11]), 0, 1);
						}
					}
					else
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_1611[iVar11]))
						{
							AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_1611[iVar11], 0);
						}
						func_7(&(Local_1753[iVar12 /*4*/]), 0, 1);
						func_7(&(Local_1753[iVar13 /*4*/]), 0, 1);
						func_6(&(iLocal_1611[iVar11]), 0, 1);
					}
				}
				else if (!CAM::IS_SCREEN_FADED_OUT())
				{
					if (iVar11 == iLocal_1471)
					{
						if ((iVar10 < 2 && iLocal_1471 > 1) || (iVar10 < 1 && iLocal_1471 == 1))
						{
							if (STREAMING::HAS_MODEL_LOADED(iLocal_2035) && STREAMING::HAS_MODEL_LOADED(iLocal_2036))
							{
								if (GlobalFunc_2522(PLAYER::PLAYER_PED_ID(), Local_1746.x) || GlobalFunc_2522(PLAYER::PLAYER_PED_ID(), Local_1631[iLocal_1452 /*19*/]))
								{
									if (func_531(&Var0, &fVar9, 0, fLocal_1514))
									{
										if (SYSTEM::VDIST2(Var3, Var0) < 40000f)
										{
											MISC::CLEAR_AREA(Var0, 3f, 1, 0, 0, 0);
											iLocal_1611[iVar11] = VEHICLE::CREATE_VEHICLE(iLocal_2036, Var0, fVar9, 1, 1);
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1611[iVar11], 1, 1);
											VEHICLE::SET_VEHICLE_SIREN(iLocal_1611[iVar11], 1);
											AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_1611[iVar11], 1);
											VEHICLE::SET_VEHICLE_LIGHTS(iLocal_1611[iVar11], 2);
											AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_1611[iVar11], "CAR_4_COPS_GROUP", 0);
											VEHICLE::SET_VEHICLE_STRONG(iLocal_1611[iVar11], 1);
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1611[iVar11]);
											Local_1753[iVar12 /*4*/] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1611[iVar11], 6, iLocal_2035, -1, 1, 1);
											Local_1753[iVar13 /*4*/] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1611[iVar11], 6, iLocal_2035, 0, 1, 1);
											Local_1753[iVar12 /*4*/].f_2 = 0;
											Local_1753[iVar13 /*4*/].f_2 = 0;
											Local_1753[iVar12 /*4*/].f_3 = 0;
											Local_1753[iVar13 /*4*/].f_3 = 0;
											if (fLocal_1514 == -50f)
											{
												fLocal_1514 = -60f;
											}
											else if (fLocal_1514 == -60f)
											{
												fLocal_1514 = -50f;
											}
											iVar10++;
											if (GlobalFunc_8315() == 1)
											{
												iLocal_1471++;
											}
										}
									}
								}
							}
						}
					}
				}
				iVar11++;
			}
		}
	}
}


int func_527(int iParam0, int iParam1)//Position - 0x5C5E5
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0, joaat("weapon_pumpshotgun"), 0) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam1))
		{
			return 1;
		}
	}
	return 0;
}


void func_529(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x5C643
{
	float fVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam4, 0), ENTITY::GET_ENTITY_COORDS(iParam1, 0), 1);
			switch (uParam0->f_2)
			{
				case 0:
					if (uParam0->f_3 == 0)
					{
						WEAPON::GIVE_WEAPON_TO_PED(*uParam0, joaat("weapon_pistol"), -1, 0, 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
						uParam0->f_3 = 1;
					}
					if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
					{
						if (GlobalFunc_2522(*uParam0, iParam1))
						{
							switch (GlobalFunc_2234(*uParam0, iParam1))
							{
								case -1:
									uParam0->f_3 = 0;
									uParam0->f_2 = 2;
									break;
								
								case 0:
									uParam0->f_3 = 0;
									uParam0->f_2 = 3;
									break;
								}
						}
					}
					else
					{
						uParam0->f_3 = 0;
						uParam0->f_2 = 5;
					}
					break;
				
				case 1:
					if (uParam0->f_3 == 0)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam4, 0))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
							{
								TASK::TASK_VEHICLE_MISSION(*uParam0, iParam1, iParam4, 10, 50f, 786468, 5f, 10f, 1);
							}
						}
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
						iLocal_1507 = MISC::GET_GAME_TIMER();
						uParam0->f_3 = 1;
					}
					if (uParam0->f_3 == 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iParam1))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iParam1))
							{
								if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iParam1, 0, 1) || VEHICLE::IS_VEHICLE_TYRE_BURST(iParam1, 1, 1)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iParam1, 4, 1)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iParam1, 5, 1))
								{
									uParam0->f_3 = 0;
									uParam0->f_2 = 5;
								}
								if (!PED::IS_PED_IN_VEHICLE(*uParam0, iParam1, 0))
								{
									uParam0->f_3 = 0;
									uParam0->f_2 = 5;
								}
								if (PED::IS_PED_JACKING(iParam5) && PED::GET_VEHICLE_PED_IS_USING(iParam5) == iParam1)
								{
									uParam0->f_3 = 0;
									uParam0->f_2 = 5;
								}
								if (PED::IS_PED_IN_VEHICLE(*uParam0, iParam1, 0))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam4, 0))
									{
										if (fVar0 < 40f)
										{
											if (VEHICLE::IS_VEHICLE_STOPPED(iParam4) || VEHICLE::IS_VEHICLE_SEAT_FREE(iParam4, -1))
											{
												uParam0->f_3 = 0;
												uParam0->f_2 = 5;
											}
										}
									}
									if ((MISC::GET_GAME_TIMER() - iLocal_1507) > 45000)
									{
										uParam0->f_3 = 0;
										uParam0->f_2 = 2;
									}
								}
							}
						}
					}
					break;
				
				case 2:
					if (uParam0->f_3 == 0)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam4, 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam4, -1)))
							{
								TASK::TASK_VEHICLE_CHASE(*uParam0, VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam4, -1));
							}
							else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
							{
								TASK::TASK_VEHICLE_MISSION(*uParam0, iParam1, iParam4, 4, 25f, 786468, 20f, 20f, 1);
							}
						}
						WEAPON::GIVE_WEAPON_TO_PED(*uParam0, joaat("weapon_pistol"), -1, 0, 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
						uParam0->f_3 = 1;
					}
					if (uParam0->f_3 == 1)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 579380604) == 1)
						{
							TASK::SET_TASK_VEHICLE_CHASE_BEHAVIOR_FLAG(*uParam0, 8, 1);
							TASK::SET_TASK_VEHICLE_CHASE_BEHAVIOR_FLAG(*uParam0, 1, 1);
							TASK::SET_TASK_VEHICLE_CHASE_BEHAVIOR_FLAG(*uParam0, 2, 1);
							TASK::SET_TASK_VEHICLE_CHASE_BEHAVIOR_FLAG(*uParam0, 32, 1);
							if (iLocal_3603 == 0)
							{
								TASK::SET_TASK_VEHICLE_CHASE_IDEAL_PURSUIT_DISTANCE(*uParam0, 20f);
							}
							else
							{
								TASK::SET_TASK_VEHICLE_CHASE_IDEAL_PURSUIT_DISTANCE(*uParam0, 60f);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iParam1))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iParam1))
							{
								if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iParam1, 0, 1) || VEHICLE::IS_VEHICLE_TYRE_BURST(iParam1, 1, 1)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iParam1, 4, 1)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iParam1, 5, 1))
								{
									uParam0->f_3 = 0;
									uParam0->f_2 = 5;
								}
								if (!PED::IS_PED_IN_VEHICLE(*uParam0, iParam1, 0))
								{
									uParam0->f_3 = 0;
									uParam0->f_2 = 5;
								}
								if (PED::IS_PED_JACKING(iParam5) && PED::GET_VEHICLE_PED_IS_USING(iParam5) == iParam1)
								{
									uParam0->f_3 = 0;
									uParam0->f_2 = 5;
								}
								if (PED::IS_PED_IN_VEHICLE(*uParam0, iParam1, 0))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam4, 0))
									{
										if (fVar0 < 40f)
										{
											if (VEHICLE::IS_VEHICLE_STOPPED(iParam4) || VEHICLE::IS_VEHICLE_SEAT_FREE(iParam4, -1))
											{
												uParam0->f_3 = 0;
												uParam0->f_2 = 5;
											}
										}
									}
								}
							}
						}
					}
					break;
				
				case 3:
					if (uParam0->f_3 == 0)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
						uParam0->f_3 = 1;
					}
					if (uParam0->f_3 == 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iParam1))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iParam1))
							{
								if (!PED::IS_PED_IN_VEHICLE(*uParam0, iParam1, 0))
								{
									uParam0->f_3 = 0;
									uParam0->f_2 = 5;
								}
								if (PED::IS_PED_JACKING(iParam5) && PED::GET_VEHICLE_PED_IS_USING(iParam5) == iParam1)
								{
									uParam0->f_3 = 0;
									uParam0->f_2 = 5;
								}
								if (PED::IS_PED_IN_VEHICLE(*uParam0, iParam1, 0))
								{
									if (PED::IS_PED_INJURED(iParam2))
									{
										uParam0->f_3 = 0;
										uParam0->f_2 = 2;
									}
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam4, 0))
									{
										if (fVar0 < 40f)
										{
											if (VEHICLE::IS_VEHICLE_STOPPED(iParam4) || VEHICLE::IS_VEHICLE_SEAT_FREE(iParam4, -1))
											{
												uParam0->f_3 = 0;
												uParam0->f_2 = 5;
											}
										}
									}
									if (iLocal_2041 == 5)
									{
										if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*uParam0, iParam5, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, iParam5, 1))
										{
											uParam0->f_3 = 0;
											uParam0->f_2 = 4;
										}
									}
								}
							}
						}
					}
					break;
				
				case 4:
					if (uParam0->f_3 == 0)
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 39, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 1, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 2, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 3, 0);
						TASK::TASK_COMBAT_PED(*uParam0, iParam5, 67108864, 16);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 0);
						uParam0->f_3 = 1;
					}
					if (uParam0->f_3 == 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iParam1))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iParam1))
							{
								if (!PED::IS_PED_IN_VEHICLE(*uParam0, iParam1, 0))
								{
									uParam0->f_3 = 0;
									uParam0->f_2 = 5;
								}
								if (PED::IS_PED_JACKING(iParam5) && PED::GET_VEHICLE_PED_IS_USING(iParam5) == iParam1)
								{
									uParam0->f_3 = 0;
									uParam0->f_2 = 5;
								}
								if (PED::IS_PED_IN_VEHICLE(*uParam0, iParam1, 0))
								{
									if (PED::IS_PED_INJURED(iParam2))
									{
										uParam0->f_3 = 0;
										uParam0->f_2 = 2;
									}
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam4, 0))
									{
										if (fVar0 < 40f)
										{
											if (VEHICLE::IS_VEHICLE_STOPPED(iParam4) || VEHICLE::IS_VEHICLE_SEAT_FREE(iParam4, -1))
											{
												uParam0->f_3 = 0;
												uParam0->f_2 = 5;
											}
										}
									}
								}
							}
						}
					}
					break;
				
				case 5:
					if (uParam0->f_3 == 0)
					{
						PED::SET_PED_COMBAT_RANGE(*uParam0, 0);
						PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 2);
						PED::SET_PED_COMBAT_ABILITY(*uParam0, 2);
						PED::SET_COMBAT_FLOAT(*uParam0, 5, 0.9f);
						PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 39, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 1, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 2, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 3, 1);
						PED::SET_COMBAT_FLOAT(*uParam0, 13, 15f);
						TASK::TASK_COMBAT_PED(*uParam0, iParam5, 0, 16);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 0);
						uParam0->f_3 = 1;
					}
					if (uParam0->f_3 == 1)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam4, 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam4, -1)))
							{
								if (!ENTITY::IS_ENTITY_DEAD(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam4, -1)))
								{
									if (PED::IS_PED_SITTING_IN_VEHICLE(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam4, -1), iParam4))
									{
										if (!VEHICLE::IS_VEHICLE_STOPPED(iParam4))
										{
											if (fVar0 > 50f)
											{
												uParam0->f_3 = 0;
												uParam0->f_2 = 6;
											}
										}
									}
								}
							}
						}
					}
					break;
				
				case 6:
					if (uParam0->f_3 == 0)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
						{
							if (!PED::IS_PED_INJURED(iParam2))
							{
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam1, iParam3))
								{
									TASK::TASK_ENTER_VEHICLE(*uParam0, iParam1, 40000, iParam3, 2f, 8388609, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
								}
							}
							else if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam1, -1))
							{
								TASK::TASK_ENTER_VEHICLE(*uParam0, iParam1, 40000, -1, 2f, 1, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
							}
						}
						uParam0->f_3 = 1;
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(*uParam0, iParam1))
						{
							switch (GlobalFunc_2234(*uParam0, iParam1))
							{
								case -1:
									uParam0->f_3 = 0;
									uParam0->f_2 = 2;
									break;
								
								case 0:
									if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*uParam0, iParam5, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, iParam5, 1))
									{
										uParam0->f_3 = 0;
										uParam0->f_2 = 4;
									}
									else
									{
										uParam0->f_3 = 0;
										uParam0->f_2 = 3;
									}
									break;
								}
						}
					}
					else
					{
						uParam0->f_3 = 0;
						uParam0->f_2 = 5;
					}
					break;
				}
			}
	}
}


int func_531(var uParam0, float fParam1, int iParam2, float fParam3)//Position - 0x5CE4A
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	var uVar19;
	
	if (!ENTITY::IS_ENTITY_DEAD(Local_1746.f_1) && !ENTITY::IS_ENTITY_DEAD(Local_1746.x))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		Var3 = { ENTITY::GET_ENTITY_COORDS(Local_1746.f_1, 1) };
		if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(Var0, &Var6, 1, 1077936128, 0))
		{
			if (SYSTEM::VDIST2(Var0, Var6) < 100f)
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1746.x, 0))
				{
					fVar18 = ENTITY::GET_ENTITY_HEADING(Local_1746.x);
				}
				else
				{
					fVar18 = MISC::GET_HEADING_FROM_VECTOR_2D((Var3.x - Var0.x), (Var3.f_1 - Var0.f_1));
				}
				Var12 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar18, 0f, fParam3, 0f) };
				if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Var12, 1, &Var9, &fVar15, &uVar19, 1, 1077936128, 0))
				{
					*uParam0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var9, fVar15, 0f, (-10f * IntToFloat(iParam2)), 0f) };
					if (!CAM::IS_SPHERE_VISIBLE(*uParam0, 3f) || CAM::IS_SCREEN_FADED_OUT())
					{
						fVar16 = MISC::GET_HEADING_FROM_VECTOR_2D((Var0.x - *uParam0), (Var0.f_1 - uParam0->f_1));
						fVar17 = MISC::ABSF((fVar16 - fVar15));
						if (fVar17 > 180f)
						{
							fVar17 = MISC::ABSF((fVar17 - 360f));
						}
						if (fVar17 < 90f)
						{
							*fParam1 = fVar15;
						}
						else
						{
							*fParam1 = (fVar15 + 180f);
						}
						iLocal_1509 = MISC::GET_GAME_TIMER() + 1000;
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_532(struct<3> Param0)//Position - 0x5CFA0
{
	Local_1529 = { 0f, 0f, 0f };
	Local_1532 = { 0f, 0f, 0f };
	if (Param0.x < Local_1526.x)
	{
		Local_1529.x = Param0.x;
		Local_1532.x = Local_1526.x;
	}
	else
	{
		Local_1529.x = Local_1526.x;
		Local_1532.x = Param0.x;
	}
	if (Param0.f_1 < Local_1526.f_1)
	{
		Local_1529.f_1 = Param0.f_1;
		Local_1532.f_1 = Local_1526.f_1;
	}
	else
	{
		Local_1529.f_1 = Local_1526.f_1;
		Local_1532.f_1 = Param0.f_1;
	}
	if (Param0.f_2 < Local_1526.f_2)
	{
		Local_1529.f_2 = Param0.f_2;
		Local_1532.f_2 = Local_1526.f_2;
	}
	else
	{
		Local_1529.f_2 = Local_1526.f_2;
		Local_1532.f_2 = Param0.f_2;
	}
	Local_1529 = { Local_1529 - Vector(200f, 200f, 200f) };
	Local_1532 = { Local_1532 + Vector(200f, 200f, 200f) };
}

void func_533()//Position - 0x5D07A
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	var uVar5;
	struct<3> Var9;
	struct<3> Var12;
	bool bVar15;
	bool bVar16;
	int iVar17;
	struct<3> Var18;
	
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 228, 1);
	if (!PED::IS_PED_INJURED(Local_1749.x))
	{
		PED::SET_PED_RESET_FLAG(Local_1749.x, 227, 1);
	}
	Var0 = { Local_1517 };
	fVar3 = fLocal_1510;
	if (iLocal_2041 == 4)
	{
		Var0 = { -2205.16f, 4326.368f, 48.4147f };
		fVar3 = 339.0508f;
	}
	if (iLocal_2042 == 0)
	{
		if (iLocal_1362)
		{
			if (bLocal_1377)
			{
				GlobalFunc_5116(Var0 + Vector(0f, 5f, 5f), 0f, 1, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0 + Vector(0f, 5f, 5f), 1, 0, 0, 1);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
				SYSTEM::WAIT(0);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			}
			func_625();
			GlobalFunc_82();
			STREAMING::REQUEST_ANIM_DICT(sLocal_1570);
			STREAMING::REQUEST_ANIM_DICT(sLocal_1573);
			STREAMING::REQUEST_ANIM_DICT(sLocal_1578);
			while (((((((!func_624() || !func_352(Var0, fVar3)) || !func_349()) || !func_345(Var0 + Vector(0f, 10f, 10f), 200.8915f)) || !func_623(Var0 + Vector(0f, 15f, 15f), 204.3612f)) || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_1570)) || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_1573)) || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_1578))
			{
				STREAMING::REQUEST_ANIM_DICT(sLocal_1570);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_1517, 30f, 0, 0, 0, 0, 0);
				SYSTEM::WAIT(0);
			}
			GlobalFunc_5108(Local_1746.x, -1, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1746.x, 0) && !ENTITY::IS_ENTITY_DEAD(Local_1746.f_1))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1746.x, 0))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1746.x, -1);
				}
				if (!PED::IS_PED_INJURED(iLocal_2045[1]))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_2045[1], Local_1746.x, 0);
				}
				if (!PED::IS_PED_INJURED(Local_1749.x))
				{
					PED::SET_PED_MAX_HEALTH(Local_1749.x, 500);
					ENTITY::SET_ENTITY_HEALTH(Local_1749.x, 500);
					func_622();
				}
			}
			func_489();
			iLocal_1388 = 99;
			iLocal_1362 = 0;
		}
		else
		{
			iLocal_1471 = 0;
			iLocal_1491 = 0;
			iLocal_1492 = 0;
			iLocal_1493 = 0;
			iLocal_1476 = 0;
			iLocal_1477 = 0;
			iLocal_1478 = 0;
			iLocal_1479 = 0;
			func_45(1);
			func_34(1);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (iLocal_2041 == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1746.x, 0) && !ENTITY::IS_ENTITY_DEAD(Local_1746.f_1))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1746.x, 0))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1746.x, -1);
						}
						MISC::CLEAR_AREA_OF_VEHICLES(Var0, 100f, 0, 0, 0, 0, 0);
						ENTITY::SET_ENTITY_COORDS(Local_1746.x, Var0, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_1746.x, fVar3);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1746.x, 0) && !ENTITY::IS_ENTITY_DEAD(Local_1746.f_1))
						{
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1746.x);
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1746.f_1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1746.x, 0.191836f, -9.89637f, 0.27933f), 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(Local_1746.f_1, ENTITY::GET_ENTITY_HEADING(Local_1746.x));
							VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_1746.x, Local_1746.f_1, 1065353216);
							PHYSICS::ACTIVATE_PHYSICS(Local_1746.f_1);
						}
					}
					SYSTEM::SETTIMERB(0);
					while (SYSTEM::TIMERB() < 2000)
					{
						func_525();
						SYSTEM::WAIT(0);
					}
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				}
				else if (iLocal_1388 != 99)
				{
					STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
					SYSTEM::WAIT(500);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
			iVar4 = 0;
			iVar4 = 0;
			while (iVar4 < Local_1631)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1631[iVar4 /*19*/], 0))
				{
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1631[iVar4 /*19*/], 0);
				}
				iVar4++;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1746.x, 0))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1746.x, 1);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1746.x, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_1746.f_1))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1746.f_1, 0);
			}
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			PED::SET_CREATE_RANDOM_COPS(0);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(2, 1);
			MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(8, 1);
			MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(10, 1);
			MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(9, 1);
			MISC::CLEAR_AREA_OF_COPS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 500f, 0);
			iLocal_1365 = 0;
			iLocal_1364 = 0;
			iLocal_1375 = 0;
			bLocal_1376 = false;
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 230, 0);
			if (iLocal_2041 == 4)
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_COPS_ARRIVE"))
				{
					AUDIO::START_AUDIO_SCENE("CAR_4_COPS_ARRIVE");
				}
				GlobalFunc_Checkpoint7(3, "COPS_ARRIVE", 0, 0, 0, 1);
				bLocal_1378 = true;
			}
			else
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_GET_TO_PALETO"))
				{
					AUDIO::START_AUDIO_SCENE("CAR_4_GET_TO_PALETO");
				}
				GlobalFunc_Checkpoint7(2, "GO_TO_GAS_STATION", 0, 0, 0, 1);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				MISC::CLEAR_AREA_OF_COPS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 500f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 100f, 0, 0, 0, 0, 0);
				if (iLocal_2041 == 3)
				{
					SYSTEM::WAIT(2000);
				}
				CAM::DO_SCREEN_FADE_IN(800);
				while (!CAM::IS_SCREEN_FADED_IN())
				{
					if (iLocal_2041 == 4)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1746.x, 0))
						{
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_1746.x, 15f);
						}
					}
					SYSTEM::WAIT(0);
				}
			}
			if (!PED::IS_PED_INJURED(Local_1749.x))
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Local_1749.x, 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_2045[2]))
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iLocal_2045[2], 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_2045[1]))
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iLocal_2045[1], 1);
			}
			GlobalFunc_173(&Local_2123, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			GlobalFunc_173(&Local_2123, 1, iLocal_2045[1], "FRANKLIN", 0, 1);
			GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_GODROP", 7, 0, 0, 0);
			Local_1529 = { 0f, 0f, 0f };
			Local_1532 = { 0f, 0f, 0f };
			iLocal_1465 = 0;
			fLocal_1513 = 0f;
			iLocal_1370 = 1;
			bLocal_1378 = false;
			iLocal_1389 = 0;
			iLocal_1488 = -1;
			iLocal_1559 = 0;
			iLocal_1560 = 0;
			iLocal_1561 = 0;
			iLocal_1562 = 0;
			iLocal_1388 = 0;
			iLocal_2042 = 1;
		}
	}
	if (iLocal_2042 == 1)
	{
		func_525();
		func_622();
		if (!ENTITY::IS_ENTITY_DEAD(Local_1746.f_1))
		{
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3604))
			{
				func_523(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1746.f_1, Local_1544 + Local_1556), Local_1550, Local_1553.x, Local_1553.f_1, &iLocal_1559, &iLocal_1560, 50, 300, 30, 100);
			}
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3605))
			{
				func_523(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1746.f_1, Local_1541 + Local_1556), Local_1550, Local_1553.x, Local_1553.f_1, &iLocal_1561, &iLocal_1562, 50, 300, 30, 100);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_1746.x))
		{
			if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Local_1746.x))
			{
				if (HUD::DOES_BLIP_EXIST(Local_1810.f_5) && iLocal_1388 < 100)
				{
					if (!HUD::DOES_BLIP_EXIST(Local_1746.f_2))
					{
						HUD::CLEAR_PRINTS();
						Local_1746.f_2 = GlobalFunc_6783(Local_1746.f_1, 0, 0);
					}
					if (!func_475("CST7_UNHOOK"))
					{
						if (!GlobalFunc_5172(&Local_1810, 1))
						{
							if (iLocal_1491 < 3)
							{
								if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_UNHOOK", 7, 0, 0, 0))
								{
									func_472("CST7_UNHOOK", 1);
									func_472("CST7_HOOKED", 0);
									iLocal_1491++;
								}
								else
								{
									GlobalFunc_5105();
								}
							}
							else
							{
								func_472("CST7_UNHOOK", 1);
							}
						}
						else
						{
							MemCopy(&uVar5, {GlobalFunc_560()}, 4);
							if ((((((((MISC::ARE_STRINGS_EQUAL(&uVar5, "CST7_DRIVE2B") || MISC::ARE_STRINGS_EQUAL(&uVar5, "CST7_DRIVE2B")) || MISC::ARE_STRINGS_EQUAL(&uVar5, "CST7_DRIVE2C")) || MISC::ARE_STRINGS_EQUAL(&uVar5, "CST7_DRIVcon")) || MISC::ARE_STRINGS_EQUAL(&uVar5, "CST7_DRIVE2D")) || MISC::ARE_STRINGS_EQUAL(&uVar5, "CST7_DRIVE2R")) || MISC::ARE_STRINGS_EQUAL(&uVar5, "CST7_DRIVE2F")) || MISC::ARE_STRINGS_EQUAL(&uVar5, "CST7_DRIV2Fb")) || MISC::ARE_STRINGS_EQUAL(&uVar5, "CST7_DRIVE2G"))
							{
								GlobalFunc_5105();
							}
						}
					}
					else if (!func_475("CH_REATTACH"))
					{
						if (!GlobalFunc_5172(&Local_1810, 2))
						{
							GlobalFunc_164("CH_REATTACH", 7500, 0);
							func_472("CH_REATTACH", 1);
						}
					}
					else if (!func_475("CST7_UNHOOK2"))
					{
						if (iLocal_1493 < 5)
						{
							if (!GlobalFunc_5172(&Local_1810, 1))
							{
								if ((MISC::GET_GAME_TIMER() - iLocal_1494) > 7700)
								{
									if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_UNHOOK2", 7, 0, 0, 0))
									{
										func_472("CST7_UNHOOK2", 1);
										iLocal_1493++;
									}
								}
							}
							else
							{
								iLocal_1494 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(Local_1746.f_2))
				{
					HUD::REMOVE_BLIP(&(Local_1746.f_2));
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_1486) > 90000)
				{
					func_724(9);
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_1486) > 30000)
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Local_1746.x))
					{
						if (!ENTITY::IS_ENTITY_UPRIGHT(Local_1746.f_1, 1119092736) || ENTITY::IS_ENTITY_UPSIDEDOWN(Local_1746.f_1))
						{
							func_724(9);
						}
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_1746.f_1))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1746.f_1, 1)) > 40000f)
					{
						func_724(10);
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(Local_1746.f_2))
				{
					HUD::REMOVE_BLIP(&(Local_1746.f_2));
				}
				if (GlobalFunc_663("CH_REATTACH", 0, 0))
				{
					HUD::CLEAR_PRINTS();
				}
				if (func_475("CST7_UNHOOK"))
				{
					if (!func_475("CST7_HOOKED"))
					{
						if (iLocal_1492 < 2)
						{
							if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_HOOKED", 7, 0, 0, 0))
							{
								func_472("CST7_HOOKED", 1);
								iLocal_1492++;
							}
						}
					}
					func_472("CST7_UNHOOK", 0);
				}
				iLocal_1486 = MISC::GET_GAME_TIMER();
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_1746.f_1))
		{
			Var9 = { ENTITY::GET_ENTITY_ROTATION(Local_1746.f_1, 2) };
		}
		if (iLocal_2041 == 4)
		{
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
			func_532(ENTITY::GET_ENTITY_COORDS(Local_1746.x, 1));
			PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(Local_1529.x, Local_1529.f_1, Local_1532.x, Local_1532.f_1);
		}
		else
		{
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.7f);
		}
		if (iLocal_2041 == 4)
		{
			if ((GlobalFunc_1461(PLAYER::PLAYER_PED_ID(), Local_1746.x, 0) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4) && (!CAM::DOES_CAM_EXIST(uLocal_1595) || (CAM::DOES_CAM_EXIST(uLocal_1595) && !CAM::IS_CAM_RENDERING(uLocal_1595))))
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_FIRST_PERSON_MUTES_SCENE"))
				{
					AUDIO::START_AUDIO_SCENE("CAR_4_FIRST_PERSON_MUTES_SCENE");
				}
			}
			else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_FIRST_PERSON_MUTES_SCENE"))
			{
				AUDIO::STOP_AUDIO_SCENE("CAR_4_FIRST_PERSON_MUTES_SCENE");
			}
		}
		else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_FIRST_PERSON_MUTES_SCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("CAR_4_FIRST_PERSON_MUTES_SCENE");
		}
		switch (iLocal_1388)
		{
			case 0:
				if (iLocal_2041 != 4)
				{
					MISC::SET_BIT(&(Local_1810.f_13), 24);
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Local_1746.x))
					{
						GlobalFunc_10157(&Local_1810, Local_1526, 0.001f, 0.001f, 2f, 1, iLocal_2045[1], Local_1746.x, "CH_GOTODROP", "CH_LEAVEFRAN", "CH_GETIN_TRUCK", "CH_GETBACK", 0, 0, 1, -1);
					}
					else
					{
						GlobalFunc_10157(&Local_1810, Local_1526, 0.001f, 0.001f, 2f, 1, iLocal_2045[1], Local_1746.x, "", "CH_LEAVEFRAN", "CH_GETIN_TRUCK", "CH_GETBACK", 0, 0, 1, -1);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_1611[0]))
				{
					Var12 = { ENTITY::GET_ENTITY_COORDS(iLocal_1611[0], 1) };
					bVar15 = (((MISC::IS_PROJECTILE_IN_AREA(Var12 - Vector(15f, 15f, 15f), Var12 + Vector(15f, 15f, 15f), 1) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, Var12, 30f)) || MISC::IS_BULLET_IN_AREA(Var12, 30f, 1)) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var12) < 225f);
				}
				if (!bLocal_1378)
				{
					bVar16 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1746.x, -2149.358f, 4304.077f, 70.41945f, -2375.684f, 4450.168f, -5.207527f, 53.5f, 0, 1, 0);
					if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1746.x, 1), Local_1526) < 1.6E+07f || bVar16) || bVar15)
					{
						if (((bVar16 || bVar15) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1535) > 4000000f) || (ENTITY::DOES_ENTITY_EXIST(iLocal_1611[0]) && ENTITY::IS_ENTITY_DEAD(iLocal_1611[0])))
						{
							PLAYER::SET_MAX_WANTED_LEVEL(5);
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
							PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
							PLAYER::SET_POLICE_RADAR_BLIPS(1);
							PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 0);
							PED::SET_CREATE_RANDOM_COPS(0);
							MISC::ENABLE_DISPATCH_SERVICE(3, 0);
							MISC::ENABLE_DISPATCH_SERVICE(1, 0);
							MISC::ENABLE_DISPATCH_SERVICE(8, 0);
							MISC::ENABLE_DISPATCH_SERVICE(2, 0);
							MISC::ENABLE_DISPATCH_SERVICE(6, 0);
							MISC::ENABLE_DISPATCH_SERVICE(5, 0);
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_GET_TO_PALETO"))
							{
								AUDIO::STOP_AUDIO_SCENE("CAR_4_GET_TO_PALETO");
							}
							if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_COPS_ARRIVE"))
							{
								AUDIO::START_AUDIO_SCENE("CAR_4_COPS_ARRIVE");
							}
							AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_CAR_STEAL_4_01", 0f);
							bLocal_1378 = true;
						}
					}
				}
				if ((HUD::DOES_BLIP_EXIST(Local_1810.f_5) || iLocal_2041 == 4) && VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Local_1746.x))
				{
					if (iLocal_2041 != 4)
					{
						func_618(1);
					}
					if (GlobalFunc_620())
					{
						GlobalFunc_619(0);
					}
					if (bLocal_1378)
					{
						if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_WAKE", 7, 0, 0, 0))
						{
							if (!PED::IS_PED_INJURED(iLocal_2045[1]))
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_2045[1], sLocal_1576, "franklin_asleep", 3))
								{
									TASK::STOP_ANIM_TASK(iLocal_2045[1], sLocal_1576, "franklin_asleep", -1f);
								}
								TASK::CLEAR_PED_SECONDARY_TASK(iLocal_2045[1]);
								PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(iLocal_2045[1]);
								AUDIO::STOP_PED_SPEAKING(iLocal_2045[1], 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2045[1], 1);
							}
							if (iLocal_1364)
							{
								HUD::SET_GPS_MULTI_ROUTE_RENDER(0);
								HUD::CLEAR_GPS_MULTI_ROUTE();
								iLocal_1364 = 0;
							}
							GlobalFunc_5652(&Local_1810, 1, 0);
							GlobalFunc_574(134, 0);
							RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
							fLocal_1512 = 0f;
							iLocal_1452 = 3;
							iLocal_1466 = 0;
							iLocal_1388++;
							iLocal_2041 = 4;
							GlobalFunc_Checkpoint7(3, "COPS_ARRIVE", 0, 0, 0, 1);
						}
						else
						{
							GlobalFunc_5105();
						}
					}
					if (iLocal_2041 != 4)
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1535) > 10000f)
						{
							if (!GlobalFunc_5172(&Local_1810, 1))
							{
								if (!func_475("CST7_DRIVE2B"))
								{
									if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_DRIVE2B", 7, 0, 0, 0))
									{
										func_472("CST7_DRIVE2B", 1);
										iLocal_1472 = 0;
									}
								}
								else if (!func_475("CST7_DRIVE2C"))
								{
									STREAMING::REQUEST_ANIM_DICT(sLocal_1576);
									STREAMING::REQUEST_ANIM_DICT(sLocal_1577);
									if (iLocal_1472 == 0)
									{
										if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_1576) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_1577))
										{
											TASK::TASK_PLAY_ANIM(iLocal_2045[1], sLocal_1576, "franklin_asleep", 1f, -1f, -1, 9, 0, 0, 0, 0);
											PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(iLocal_2045[1], "mood_sleeping_1", 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2045[1], 1);
											AUDIO::STOP_PED_SPEAKING(iLocal_2045[1], 1);
											iLocal_1472 = MISC::GET_GAME_TIMER();
										}
									}
									else if ((MISC::GET_GAME_TIMER() - iLocal_1472) > 5000)
									{
										if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_DRIVE2C", 7, 0, 0, 0))
										{
											func_472("CST7_DRIVE2C", 1);
											iLocal_1472 = 0;
										}
									}
								}
								else if (!func_475("CST7_DRIVCon"))
								{
									if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_DRIVCon", 7, 0, 0, 0))
									{
										func_472("CST7_DRIVCon", 1);
										iLocal_1472 = 0;
									}
								}
								else if (!func_475("CST7_DRIVE2D"))
								{
									if (iLocal_1472 == 0)
									{
										iLocal_1472 = MISC::GET_GAME_TIMER();
									}
									else if ((MISC::GET_GAME_TIMER() - iLocal_1472) > 5000)
									{
										if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_DRIVE2D", 7, 0, 0, 0))
										{
											func_472("CST7_DRIVE2D", 1);
											iLocal_1472 = 0;
										}
									}
								}
								else if (!func_475("CST7_DRIVE2E"))
								{
									if (iLocal_1472 == 0)
									{
										iLocal_1472 = MISC::GET_GAME_TIMER();
									}
									else if ((MISC::GET_GAME_TIMER() - iLocal_1472) > 3000)
									{
										if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_DRIVE2E", 7, 0, 0, 0))
										{
											func_472("CST7_DRIVE2E", 1);
										}
									}
								}
								else if (!func_475("CST7_DRIVE2F"))
								{
									if (iLocal_1472 == 0)
									{
										iLocal_1472 = MISC::GET_GAME_TIMER();
									}
									else if ((MISC::GET_GAME_TIMER() - iLocal_1472) > 3000)
									{
										if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_DRIVE2F", 7, 0, 0, 0))
										{
											func_472("CST7_DRIVE2F", 1);
										}
									}
								}
								else if (!func_475("CST7_DRIV2Fb"))
								{
									if (iLocal_1472 == 0)
									{
										iLocal_1472 = MISC::GET_GAME_TIMER();
									}
									else if ((MISC::GET_GAME_TIMER() - iLocal_1472) > 2000)
									{
										if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_DRIV2Fb", 7, 0, 0, 0))
										{
											func_472("CST7_DRIV2Fb", 1);
										}
									}
								}
								else if (!func_475("CST7_DRIVE2G"))
								{
									if (iLocal_1472 == 0)
									{
										iLocal_1472 = MISC::GET_GAME_TIMER();
									}
									else if ((MISC::GET_GAME_TIMER() - iLocal_1472) > 3000)
									{
										if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_DRIVE2G", 7, 0, 0, 0))
										{
											func_472("CST7_DRIVE2G", 1);
										}
									}
								}
							}
						}
					}
				}
				else
				{
					func_618(0);
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Local_1746.x))
					{
						if (func_475("CST7_FHANG") || func_475("CST7_DRIVE2B"))
						{
							if (!GlobalFunc_620())
							{
								if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
								{
									if (iLocal_1465 == 0 || (MISC::GET_GAME_TIMER() - iLocal_1465) > 7000)
									{
										GlobalFunc_619(1);
									}
								}
								else
								{
									GlobalFunc_619(1);
								}
							}
						}
					}
				}
				break;
			
			case 1:
				PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
				STREAMING::REQUEST_PTFX_ASSET();
				STREAMING::REQUEST_ANIM_DICT(sLocal_1573);
				STREAMING::REQUEST_ANIM_DICT(sLocal_1578);
				MISC::SET_BIT(&(Local_1810.f_13), 24);
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Local_1746.x))
				{
					GlobalFunc_9194(&Local_1810, Local_1526, 0.001f, 0.001f, 2f, 0, Local_1746.x, "", "", "CH_GETBACK", 0, 0, 1, -1);
				}
				else
				{
					GlobalFunc_9194(&Local_1810, Local_1526, 0.001f, 0.001f, 2f, 0, Local_1746.x, "", "", "CH_GETBACK", 0, 0, 1, -1);
				}
				if (HUD::DOES_BLIP_EXIST(Local_1810.f_5) && VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Local_1746.x))
				{
					HUD::SET_BLIP_ALPHA(Local_1810.f_5, 0);
					HUD::SET_BLIP_ROUTE(Local_1810.f_5, 0);
					if (!HUD::DOES_BLIP_EXIST(uLocal_1592))
					{
						if (!PED::IS_PED_INJURED(iLocal_2045[1]))
						{
							uLocal_1592 = GlobalFunc_6783(iLocal_2045[1], 0, 0);
						}
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_1592))
					{
						HUD::REMOVE_BLIP(&uLocal_1592);
					}
					if (HUD::DOES_BLIP_EXIST(Local_1810.f_5) && !VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Local_1746.x))
					{
						HUD::SET_BLIP_ALPHA(Local_1810.f_5, 0);
						HUD::SET_BLIP_ROUTE(Local_1810.f_5, 0);
					}
				}
				if (func_475("CST7_SIDE"))
				{
					func_615();
				}
				iVar17 = 1;
				if (MISC::ABSF(Var9.f_1) > 30f)
				{
					iVar17 = 0;
				}
				if ((((((!GlobalFunc_116(0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && CAM::DOES_CAM_EXIST(uLocal_1595)) && GlobalFunc_4953(1, 1, 1)) && GlobalFunc_7635(&uLocal_2288, 1, 1, 1)) && iVar17) && VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Local_1746.x))
				{
					if (CAM::DOES_CAM_EXIST(uLocal_1595))
					{
						if (!iLocal_1375)
						{
							if (GlobalFunc_74("CH_FRANHELP"))
							{
								HUD::CLEAR_HELP(1);
							}
							if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_FOCUS_ON_FRANKLIN"))
							{
								AUDIO::START_AUDIO_SCENE("CAR_4_FOCUS_ON_FRANKLIN");
							}
							CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
							iLocal_1375 = 1;
						}
					}
				}
				else if (iLocal_1375)
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_FOCUS_ON_FRANKLIN"))
					{
						AUDIO::STOP_AUDIO_SCENE("CAR_4_FOCUS_ON_FRANKLIN");
					}
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					iLocal_1375 = 0;
				}
				if (!func_475("CST7_TODO"))
				{
					if (!GlobalFunc_5172(&Local_1810, 1))
					{
						if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_TODO", 7, 0, 0, 0))
						{
							func_472("CST7_TODO", 1);
						}
					}
				}
				else if (!func_475("CST7_OUTSIDE"))
				{
					if (!GlobalFunc_5172(&Local_1810, 1))
					{
						if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_OUTSIDE", 7, 0, 0, 0))
						{
							func_472("CST7_OUTSIDE", 1);
						}
					}
				}
				else if (!func_475("CST7_SIDE"))
				{
					if (!GlobalFunc_5172(&Local_1810, 1))
					{
						if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_SIDE", 7, 0, 0, 0))
						{
							func_472("CST7_SIDE", 1);
						}
					}
				}
				else if (!func_475("CST7_HEADS"))
				{
					if (!GlobalFunc_5172(&Local_1810, 1))
					{
						if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_HEADS", 7, 0, 0, 0))
						{
							func_524();
							func_472("CST7_HEADS", 1);
						}
					}
				}
				else if (!func_475("CH_STEADY"))
				{
					if (!GlobalFunc_5172(&Local_1810, 2))
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_1592))
						{
							GlobalFunc_164("CH_STEADY", 7500, 0);
							RECORDING::_0x293220DA1B46CEBC(4f, 10f, 4);
							func_472("CH_STEADY", 1);
						}
					}
				}
				else if (!func_475("CST7_WAIT"))
				{
					if (!GlobalFunc_5172(&Local_1810, 1))
					{
						if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_WAIT", 7, 0, 0, 0))
						{
							func_472("CST7_WAIT", 1);
							iLocal_1474 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 12000));
						}
					}
				}
				else if ((MISC::GET_GAME_TIMER() - iLocal_1474) > 0)
				{
					if (!GlobalFunc_5172(&Local_1810, 1))
					{
						if (bLocal_1376)
						{
							Var18 = { ENTITY::GET_ENTITY_ROTATION(Local_1746.f_1, 2) };
							if (((ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_1746.f_1) || ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_1746.x)) || Var18.f_1 < -5f) || Var18.f_1 > 5f)
							{
								if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_MESS", 7, 0, 0, 0))
								{
									iLocal_1474 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(9000, 11000));
								}
							}
							else if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_CLIMB", 7, 0, 0, 0))
							{
								iLocal_1474 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(9000, 11000));
							}
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1631[iLocal_1452 /*19*/], 0) && !PED::IS_PED_INJURED(iLocal_2045[1]))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_2045[1], Local_1631[iLocal_1452 /*19*/]))
					{
						STREAMING::REMOVE_ANIM_DICT(sLocal_1569);
						STREAMING::REMOVE_ANIM_DICT(sLocal_1568);
						STREAMING::REMOVE_ANIM_DICT(sLocal_1571);
						STREAMING::REMOVE_ANIM_DICT(sLocal_1576);
						STREAMING::REMOVE_ANIM_DICT(sLocal_1577);
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_FOCUS_ON_FRANKLIN"))
						{
							AUDIO::STOP_AUDIO_SCENE("CAR_4_FOCUS_ON_FRANKLIN");
						}
						RECORDING::_0x293220DA1B46CEBC(7f, 5f, 4);
						GlobalFunc_2511(&iLocal_2045, 1, 0, 2);
						GlobalFunc_2518(&iLocal_2045, 1, 1);
						GlobalFunc_5652(&Local_1810, 1, 0);
						func_413();
						iLocal_1388++;
					}
				}
				break;
			
			case 2:
				MISC::SET_BIT(&(Local_1810.f_13), 24);
				GlobalFunc_9194(&Local_1810, Local_1526, 0.001f, 0.001f, 2f, 0, Local_1746.x, "", "", "CH_GETBACK", 0, 0, 1, -1);
				PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
				PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
				PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_STEAL_4", 0);
				if (HUD::DOES_BLIP_EXIST(Local_1810.f_5) && VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Local_1746.x))
				{
					HUD::SET_BLIP_ALPHA(Local_1810.f_5, 0);
					HUD::SET_BLIP_ROUTE(Local_1810.f_5, 0);
					if (MISC::ABSF(Var9.f_1) < 30f)
					{
						if (!func_475("CH_SWFRAN"))
						{
							if (!GlobalFunc_5172(&Local_1810, 2))
							{
								GlobalFunc_164("CH_SWFRAN", 15000, 0);
								func_472("CH_SWFRAN", 1);
							}
						}
						if (GlobalFunc_9810(&iLocal_2045, 1, 1))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_1746.f_1))
							{
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1746.f_1, 1);
								VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1746.f_1, 5, 0, 0);
								VEHICLE::_0x2C4A1590ABF43E8B(Local_1746.f_1, 1);
							}
							if (!ENTITY::IS_ENTITY_DEAD(Local_1746.x))
							{
								VEHICLE::_0x2C4A1590ABF43E8B(Local_1746.x, 1);
							}
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_COPS_ARRIVE"))
							{
								AUDIO::STOP_AUDIO_SCENE("CAR_4_COPS_ARRIVE");
							}
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_FIRST_PERSON_MUTES_SCENE"))
							{
								AUDIO::STOP_AUDIO_SCENE("CAR_4_FIRST_PERSON_MUTES_SCENE");
							}
							if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_REVERSE_OFF_TRUCK"))
							{
								AUDIO::START_AUDIO_SCENE("CAR_4_REVERSE_OFF_TRUCK");
							}
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(PLAYER::PLAYER_PED_ID(), Local_1746.x, Local_1526, 35f, 0, iLocal_2032, 262208, 10f, 20f);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), 1);
							GlobalFunc_2518(&iLocal_2045, 1, 0);
							GlobalFunc_5652(&Local_1810, 1, 0);
							HUD::CLEAR_PRINTS();
							SYSTEM::SETTIMERB(0);
							iLocal_1388 = 100;
							iLocal_3564 = 0;
							if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
							{
								iLocal_3603 = 1;
							}
							else
							{
								iLocal_3603 = 2;
							}
						}
					}
				}
				if (!func_475("CST7_CLIMB2"))
				{
					if (!PED::IS_PED_INJURED(iLocal_2045[1]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_1631[iLocal_1452 /*19*/]))
						{
							if (PED::IS_PED_IN_VEHICLE(iLocal_2045[1], Local_1631[iLocal_1452 /*19*/], 0))
							{
								if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_CLIMB2", 7, 0, 0, 0))
								{
									func_472("CST7_CLIMB2", 1);
								}
							}
						}
					}
				}
				break;
			
			case 100:
				if (!ENTITY::IS_ENTITY_DEAD(Local_1746.x))
				{
					VEHICLE::SET_VEHICLE_LIGHTS(Local_1746.x, 2);
				}
				PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
				PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
				PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
				PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
				if (!func_475("CST7_SWITCH"))
				{
					if (!PED::IS_PED_INJURED(iLocal_2045[1]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_1631[iLocal_1452 /*19*/]))
						{
							if (PED::IS_PED_IN_VEHICLE(iLocal_2045[1], Local_1631[iLocal_1452 /*19*/], 0))
							{
								if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_SWITCH", 7, 0, 0, 0))
								{
									RECORDING::_0x293220DA1B46CEBC(2f, 10f, 4);
									func_472("CST7_SWITCH", 1);
								}
							}
						}
					}
				}
				if (!PED::IS_PED_INJURED(Local_1749.x) && !ENTITY::IS_ENTITY_DEAD(Local_1746.x))
				{
					if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_1749.x, Local_1746.x))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_1749.x);
						if (ENTITY::IS_ENTITY_ATTACHED(Local_1749.x))
						{
							ENTITY::DETACH_ENTITY(Local_1749.x, 1, 1);
						}
						PED::SET_PED_INTO_VEHICLE(Local_1749.x, Local_1746.x, 0);
					}
				}
				if (func_539(&uLocal_2310))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					func_357();
					VEHICLE::_0xB264C4D2F2B0A78B(0);
					Local_1631[iLocal_1452 /*19*/].f_10 = 0;
					iLocal_1388++;
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					iLocal_2042 = 2;
				}
				else
				{
					func_538();
					func_488(0);
				}
				break;
		}
		switch (iLocal_1389)
		{
			case 0:
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("CAR4_RADIO_2");
					iLocal_1390 = MISC::GET_GAME_TIMER();
					iLocal_1389++;
				}
				break;
			
			case 1:
				AUDIO::PREPARE_MUSIC_EVENT("CAR4_RADIO_2_START_TRACK");
				if ((MISC::GET_GAME_TIMER() - iLocal_1390) > 6000)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("CAR4_RADIO_2_START_TRACK");
					iLocal_1389++;
				}
				break;
			
			case 2:
				if (bLocal_1376 && !PED::IS_PED_INJURED(iLocal_2045[1]))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1458))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1458) > 0.6f)
						{
							AUDIO::TRIGGER_MUSIC_EVENT("CAR4_CLIMB");
							iLocal_1389++;
						}
					}
				}
				break;
		}
		if (!PED::IS_PED_INJURED(Local_1749.x) && !PED::IS_PED_INJURED(iLocal_2045[1]))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1749.x, 1)) > 90000f)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_2045[1], 1)) > 40000f)
				{
					func_724(16);
				}
				else
				{
					func_724(13);
				}
			}
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_2045[1], 1)) > 90000f)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_1483) > 500)
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1749.x, 1)) > 40000f)
					{
						func_724(16);
					}
					else
					{
						func_724(11);
					}
				}
			}
			else
			{
				iLocal_1483 = MISC::GET_GAME_TIMER();
			}
		}
		if (((ENTITY::DOES_ENTITY_EXIST(Local_1746.x) && ENTITY::DOES_ENTITY_EXIST(Local_1746.f_1)) && !ENTITY::IS_ENTITY_DEAD(Local_1746.f_1)) && !ENTITY::IS_ENTITY_DEAD(Local_1746.x))
		{
			if ((GlobalFunc_877(ENTITY::GET_ENTITY_COORDS(Local_1746.x, 1), 3, 0, 0) && GlobalFunc_877(ENTITY::GET_ENTITY_COORDS(Local_1746.f_1, 1), 3, 0, 0)) || (GlobalFunc_877(ENTITY::GET_ENTITY_COORDS(Local_1746.x, 1), 4, 0, 0) && GlobalFunc_877(ENTITY::GET_ENTITY_COORDS(Local_1746.f_1, 1), 4, 0, 0)))
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				func_724(23);
			}
		}
		if (((!ENTITY::IS_ENTITY_DEAD(Local_1746.f_1) && !ENTITY::IS_ENTITY_DEAD(Local_1746.x)) && !ENTITY::IS_ENTITY_DEAD(Local_1631[iLocal_1452 /*19*/])) && !PED::IS_PED_INJURED(iLocal_2045[1]))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_2045[1], 0) && iLocal_1388 > 0)
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_2045[1], Local_1631[iLocal_1452 /*19*/], 0))
				{
					if (MISC::ABSF(Var9.f_1) > 45f)
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_2045[1], -8f, 1);
						iLocal_1458 = -1;
						ENTITY::DETACH_ENTITY(iLocal_2045[1], 1, 0);
						PED::SET_PED_CAN_RAGDOLL(iLocal_2045[1], 1);
						PED::SET_PED_TO_RAGDOLL(iLocal_2045[1], 3000, 10000, 2, 1, 1, 0);
					}
				}
				if ((!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1458) && !ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_2045[1], Local_1746.f_1)) && !ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_2045[1], Local_1746.x))
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_1484) > 500)
					{
						func_724(24);
					}
				}
				else
				{
					iLocal_1484 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
	if (iLocal_2042 == 2)
	{
		func_413();
		GlobalFunc_5652(&Local_1810, 1, 0);
		GlobalFunc_5105();
		GlobalFunc_2538(&iLocal_2045);
		AUDIO::STOP_AUDIO_SCENES();
		STREAMING::REMOVE_ANIM_DICT(sLocal_1575);
		STREAMING::REMOVE_ANIM_DICT(sLocal_1576);
		STREAMING::REMOVE_ANIM_DICT(sLocal_1577);
		STREAMING::REMOVE_ANIM_DICT(sLocal_1573);
		STREAMING::REMOVE_ANIM_DICT(sLocal_1578);
		iLocal_2042 = 0;
		iLocal_2041 = 5;
	}
	if (iLocal_2042 == 3)
	{
		if (iLocal_1388 == 0)
		{
			if (iLocal_1364)
			{
				HUD::SET_GPS_MULTI_ROUTE_RENDER(0);
				HUD::CLEAR_GPS_MULTI_ROUTE();
				iLocal_1364 = 0;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1746.x, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1746.f_1, 0))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1746.x, 0))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1746.x, -1);
				}
				ENTITY::SET_ENTITY_COORDS(Local_1746.x, -2205.16f, 4326.368f, 48.4147f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_1746.x, 339.0508f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1746.x);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1746.f_1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1746.x, 0.191836f, -9.89637f, 0.27933f), 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_1746.f_1, ENTITY::GET_ENTITY_HEADING(Local_1746.x));
				VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_1746.x, Local_1746.f_1, 1065353216);
				PHYSICS::ACTIVATE_PHYSICS(Local_1746.f_1);
			}
			while (!ENTITY::DOES_ENTITY_EXIST(iLocal_1611[0]))
			{
				func_525();
				SYSTEM::WAIT(0);
			}
			SYSTEM::SETTIMERB(0);
			GlobalFunc_4956();
			HUD::CLEAR_PRINTS();
			iLocal_2042 = 1;
		}
		else
		{
			func_777(5, 0);
		}
	}
}





void func_538()//Position - 0x5FC33
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
}

int func_539(var uParam0)//Position - 0x5FCAB
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	CAM::_0x59424BD75174C9B1();
	PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
	switch (iLocal_3603)
	{
		case 0:
			break;
		
		case 1:
			HUD::DISPLAY_HUD(0);
			HUD::DISPLAY_RADAR(0);
			if (!iLocal_3564)
			{
				GRAPHICS::ANIMPOSTFX_PLAY("SwitchShortTrevorIn", 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				iLocal_3564 = 1;
			}
			if (SYSTEM::TIMERB() >= 800)
			{
				SYSTEM::SETTIMERB(0);
				GlobalFunc_5810(&uLocal_1835);
				func_597(&uLocal_1835, Local_1631[iLocal_1452 /*19*/], 1, fLocal_2303, iLocal_2304, iLocal_2305, iLocal_2306, iLocal_2307, fLocal_2308);
				iLocal_3603 = 2;
			}
			break;
		
		case 2:
			HUD::DISPLAY_HUD(0);
			HUD::DISPLAY_RADAR(0);
			CAM::SET_WIDESCREEN_BORDERS(1, 500);
			if (ENTITY::DOES_ENTITY_EXIST(Local_1631[iLocal_1452 /*19*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_1631[iLocal_1452 /*19*/]))
				{
					Var2 = { ENTITY::GET_ENTITY_COORDS(Local_1631[iLocal_1452 /*19*/], 1) };
					MISC::CLEAR_AREA(Var2, 50f, 1, 0, 0, 0);
					MISC::CLEAR_AREA_OF_VEHICLES(Var2, 50f, 0, 0, 0, 0, 0);
					VEHICLE::SET_VEHICLE_LIGHTS(Local_1631[iLocal_1452 /*19*/], 3);
				}
			}
			CAM::DESTROY_ALL_CAMS(0);
			CAM::SET_CINEMATIC_MODE_ACTIVE(0);
			func_596(uParam0, Local_1631[iLocal_1452 /*19*/], Local_1631[iLocal_1452 /*19*/]);
			GlobalFunc_7718(uParam0);
			CAM::SET_CAM_ACTIVE(uParam0->f_1, 1);
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			func_578();
			GlobalFunc_4948(&uLocal_2288, 0, 0);
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_COPS_ARRIVE"))
			{
				AUDIO::STOP_AUDIO_SCENE("CAR_4_COPS_ARRIVE");
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_REVERSE_OFF_TRUCK"))
			{
				AUDIO::START_AUDIO_SCENE("CAR_4_REVERSE_OFF_TRUCK");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_FIRST_PERSON_MUTES_SCENE"))
			{
				AUDIO::STOP_AUDIO_SCENE("CAR_4_FIRST_PERSON_MUTES_SCENE");
			}
			AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", 1);
			if (iLocal_3564 == 0)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
			}
			SYSTEM::SETTIMERA(0);
			SYSTEM::SETTIMERB(0);
			iLocal_3551 = 0;
			iLocal_3552 = 0;
			iLocal_3561 = 0;
			iLocal_3553 = 0;
			iLocal_3554 = 0;
			bLocal_3555 = false;
			iLocal_3556 = 0;
			bLocal_3557 = false;
			iLocal_3558 = 0;
			bLocal_3560 = false;
			iLocal_3562 = 0;
			iLocal_3563 = 0;
			if (iLocal_3564 == 0)
			{
				iLocal_3565 = 0;
			}
			else
			{
				iLocal_3565 = 1;
			}
			iLocal_3566 = 0;
			iLocal_3567 = 0;
			iLocal_3568 = 0;
			RECORDING::_0x293220DA1B46CEBC(3f, 0f, 3);
			iLocal_3603 = 3;
		
		case 3:
			if (CAM::IS_CAM_ACTIVE(uParam0->f_1))
			{
				iVar0 = iVar0;
				iVar0 = func_566(uParam0);
				fVar1 = CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1);
				if (!iLocal_3561)
				{
					if (AUDIO::PREPARE_MUSIC_EVENT("CAR4_REVERSE"))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("CAR4_REVERSE");
						iLocal_3561 = 1;
					}
				}
				if (!iLocal_3562)
				{
					if (fVar1 > fLocal_3577)
					{
						iLocal_3586 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_3586, "out", "SHORT_PLAYER_SWITCH_SOUND_SET", 1);
						iLocal_3562 = 1;
					}
				}
				if (!iLocal_3568)
				{
					if (SYSTEM::TIMERB() > 200)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Short_Transition_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_3568 = 1;
					}
				}
				if (!iLocal_3565)
				{
					if (fVar1 >= fLocal_3579)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchShortTrevorIn", 0, 0);
						iLocal_3565 = 1;
					}
				}
				if (!iLocal_3551)
				{
					if (GlobalFunc_8315() != 1)
					{
						iLocal_2045[2] = PLAYER::PLAYER_PED_ID();
						GlobalFunc_9019(&iLocal_2045, 1);
						func_361(&iLocal_2045, 1, 1, 1);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
						if (!PED::IS_PED_INJURED(iLocal_2045[2]))
						{
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_2045[2], Local_1746.x, Local_1526, 35f, 0, iLocal_2032, 262208, 10f, 20f);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2045[2], 1);
						}
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), 1);
								TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
								TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_1573, "ig_10_switch_franklin", 8f, 8f, -1, 0, 0, 0, 0, 0);
							}
						}
						iLocal_3551 = 1;
					}
				}
				if (!iLocal_3552)
				{
					if (GlobalFunc_8315() == 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), 1);
								TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
								TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_1573, "ig_10_switch_franklin", 8f, 8f, -1, 0, fLocal_3569, 0, 0, 0);
								iLocal_3552 = 1;
							}
						}
					}
				}
				if (!iLocal_3553)
				{
					if (fVar1 > fLocal_3570)
					{
						func_560();
						iLocal_3553 = 1;
					}
				}
				if (!iLocal_3554)
				{
					if (fVar1 > fLocal_3571)
					{
						func_559();
						uLocal_3604 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_carsteal4_trailer_scrape", Local_1746.f_1, Local_1544, Local_1547, 1065353216, 0, 0, 0);
						uLocal_3605 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_carsteal4_trailer_scrape", Local_1746.f_1, Local_1541, Local_1547, 1065353216, 0, 0, 0);
						iLocal_3554 = 1;
					}
				}
				if (!bLocal_3555)
				{
					func_558();
					func_557();
					bLocal_3555 = true;
				}
				if (!iLocal_3556)
				{
					if (bLocal_3555)
					{
						if (fVar1 > fLocal_3572)
						{
							iLocal_3556 = 1;
						}
						else
						{
							func_556();
						}
					}
				}
				if (!bLocal_3557)
				{
					if (fVar1 > fLocal_3572)
					{
						func_555();
						func_554();
						bLocal_3557 = true;
					}
				}
				if (!iLocal_3558)
				{
					if (bLocal_3557)
					{
						if (fVar1 > fLocal_3573)
						{
							CAM::RENDER_SCRIPT_CAMS(0, 1, 2000, 0, 0, 0);
							bLocal_3560 = true;
							iLocal_3603 = 5;
						}
						if (func_552(uParam0))
						{
							func_551(fVar1);
							func_550();
							iLocal_3558 = 1;
						}
						else
						{
							func_549();
							func_548();
						}
					}
				}
				if (iLocal_3558 && !bLocal_3560)
				{
					func_545(fVar1);
				}
				if (iVar0 >= 3)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_3575);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_3576, 1065353216);
				}
				if (!bLocal_3560)
				{
					if (iLocal_3558 && fVar1 > fLocal_3574)
					{
						GlobalFunc_612(&iVar5, &iVar6, &iVar7, &iVar8, 0);
						if (((((((iVar5 != 0 || iVar6 != 0) || iVar7 != 0) || iVar8 != 0) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 71)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 71)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 72)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 72))
						{
							if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
							{
								iLocal_3603 = 4;
							}
							else
							{
								CAM::RENDER_SCRIPT_CAMS(0, 1, 2000, 0, 0, 0);
								iLocal_3603 = 5;
							}
							bLocal_3560 = true;
						}
					}
				}
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
				{
					if (fVar1 >= fLocal_2302)
					{
						iLocal_3603 = 4;
					}
				}
				else if (fVar1 >= 1f)
				{
					iLocal_3603 = 5;
				}
			}
			break;
		
		case 4:
			if (func_540(&uLocal_1835, bLocal_2300, 1, 1, bLocal_2301, bLocal_2309, 0))
			{
				iLocal_3603 = 5;
			}
			break;
		
		case 5:
			MISC::SET_TIME_SCALE(1f);
			AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", 0);
			if (!bLocal_3560)
			{
				if (CAM::DOES_CAM_EXIST(uParam0->f_1))
				{
					if (CAM::IS_CAM_ACTIVE(uParam0->f_1))
					{
						CAM::DESTROY_CAM(uParam0->f_1, 0);
					}
				}
				CAM::DESTROY_ALL_CAMS(0);
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), 0);
				}
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			HUD::DISPLAY_HUD(1);
			HUD::DISPLAY_RADAR(1);
			CAM::SET_WIDESCREEN_BORDERS(0, 500);
			STREAMING::REMOVE_ANIM_DICT(sLocal_1573);
			STREAMING::REMOVE_ANIM_DICT(sLocal_1578);
			iLocal_3603 = 0;
			return 1;
			break;
	}
	return 0;
}

int func_540(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x6037A
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18;
	var uVar21;
	
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
				uVar21 = CAM::GET_FINAL_RENDERED_CAM_FOV();
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
				CAM::SET_CAM_FOV(uParam0->f_1, uVar21);
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





void func_545(float fParam0)//Position - 0x6086D
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_1631[iLocal_1452 /*19*/]) && ENTITY::DOES_ENTITY_EXIST(Local_1746.x))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1631[iLocal_1452 /*19*/]) && !ENTITY::IS_ENTITY_DEAD(Local_1746.x))
		{
			Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(Local_1746.x, 1) };
			Var3 = { ENTITY::GET_ENTITY_SPEED_VECTOR(Local_1631[iLocal_1452 /*19*/], 1) };
			fVar6 = GlobalFunc_253(((fParam0 - fLocal_3583) * (1f / MISC::ABSF((1f - fLocal_3583)))), 0f, 1f);
			fVar7 = GlobalFunc_551(Var3.f_1, Var0.f_1, fVar6);
			if ((fVar7 - Var3.f_1) > 1f)
			{
				fVar7 = (Var3.f_1 + 1f);
			}
			else if ((fVar7 - Var3.f_1) < 1f)
			{
				fVar7 = (Var3.f_1 - 1f);
			}
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_1631[iLocal_1452 /*19*/], fVar7);
		}
	}
}



void func_548()//Position - 0x60969
{
	struct<3> Var0;
	bool bVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_1631[iLocal_1452 /*19*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1631[iLocal_1452 /*19*/]))
		{
			Var0 = { ENTITY::GET_ENTITY_ROTATION(Local_1631[iLocal_1452 /*19*/], 2) };
			bVar3 = false;
			if (Var0.x > Local_3588.x)
			{
				Var0.x = Local_3588.x;
				bVar3 = true;
			}
			else if (Var0.x < Local_3591.x)
			{
				Var0.x = Local_3591.x;
				bVar3 = true;
			}
			if (Var0.f_1 > Local_3588.f_1)
			{
				Var0.f_1 = Local_3588.f_1;
				bVar3 = true;
			}
			else if (Var0.f_1 < Local_3591.f_1)
			{
				Var0.f_1 = Local_3591.f_1;
				bVar3 = true;
			}
			if (bVar3)
			{
				ENTITY::SET_ENTITY_ROTATION(Local_1631[iLocal_1452 /*19*/], Var0, 2, 1);
			}
		}
	}
}

void func_549()//Position - 0x60A15
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_1631[iLocal_1452 /*19*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1631[iLocal_1452 /*19*/]))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1631[iLocal_1452 /*19*/], 0))
			{
				iVar0 = PLAYER::PLAYER_PED_ID();
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 0);
			}
			else
			{
				iVar0 = iLocal_2045[1];
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 1);
			}
			ENTITY::APPLY_FORCE_TO_ENTITY(Local_1631[iLocal_1452 /*19*/], 2, Local_3594, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
			if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, -2118855366) != 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0))
					{
					}
				}
			}
		}
	}
}

void func_550()//Position - 0x60AAC
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_1631[iLocal_1452 /*19*/]) && ENTITY::DOES_ENTITY_EXIST(Local_1746.x))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1631[iLocal_1452 /*19*/]) && !ENTITY::IS_ENTITY_DEAD(Local_1746.x))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1631[iLocal_1452 /*19*/], 0))
			{
				iVar0 = PLAYER::PLAYER_PED_ID();
			}
			else
			{
				iVar0 = iLocal_2045[1];
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					TASK::CLEAR_PED_TASKS(iVar0);
					TASK::TASK_VEHICLE_TEMP_ACTION(iVar0, Local_1631[iLocal_1452 /*19*/], 9, 5000);
				}
			}
		}
	}
}

void func_551(float fParam0)//Position - 0x60B3D
{
	struct<3> Var0;
	
	fLocal_3583 = fParam0;
	if (ENTITY::DOES_ENTITY_EXIST(Local_1631[iLocal_1452 /*19*/]) && ENTITY::DOES_ENTITY_EXIST(Local_1746.x))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1631[iLocal_1452 /*19*/]) && !ENTITY::IS_ENTITY_DEAD(Local_1746.x))
		{
			Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(Local_1631[iLocal_1452 /*19*/], 1) };
			fLocal_3584 = Var0.f_1;
			fLocal_3584 = fLocal_3584;
		}
	}
}

int func_552(var uParam0)//Position - 0x60BA0
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_1631[iLocal_1452 /*19*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1631[iLocal_1452 /*19*/]))
		{
			if (func_553() && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_1631[iLocal_1452 /*19*/]))
			{
				if (!iLocal_3559)
				{
					if (!iLocal_3567)
					{
						CAM::SHAKE_CAM(uParam0->f_1, "SMALL_EXPLOSION_SHAKE", 0.15f);
						iLocal_3567 = 1;
					}
					if (!iLocal_3566)
					{
						fLocal_3580 = fLocal_3580;
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneFranklin", 0, 0);
						iLocal_3566 = 1;
					}
					if (!iLocal_3563)
					{
						fLocal_3578 = fLocal_3578;
						AUDIO::STOP_SOUND(iLocal_3586);
						iLocal_3563 = 1;
					}
					SYSTEM::SETTIMERB(0);
					iLocal_3559 = 1;
				}
				else if (SYSTEM::TIMERB() > iLocal_3587)
				{
					return 1;
				}
			}
			else
			{
				SYSTEM::SETTIMERB(0);
				iLocal_3559 = 0;
			}
		}
	}
	return 0;
}

int func_553()//Position - 0x60C5E
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_1631[iLocal_1452 /*19*/]) && ENTITY::DOES_ENTITY_EXIST(Local_1746.f_1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1631[iLocal_1452 /*19*/]) && !ENTITY::IS_ENTITY_DEAD(Local_1746.f_1))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1631[iLocal_1452 /*19*/], 1), ENTITY::GET_ENTITY_COORDS(Local_1746.f_1, 1)) > fLocal_3582)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_554()//Position - 0x60CC9
{
	int iVar0;
	float fVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_1631[iLocal_1452 /*19*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1631[iLocal_1452 /*19*/]))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1631[iLocal_1452 /*19*/], 0))
			{
				iVar0 = PLAYER::PLAYER_PED_ID();
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 0);
			}
			else
			{
				iVar0 = iLocal_2045[1];
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_1746.f_1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_1746.f_1))
				{
					fVar1 = ENTITY::GET_ENTITY_SPEED(Local_1746.f_1);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_1631[iLocal_1452 /*19*/], fVar1);
				}
			}
			ENTITY::APPLY_FORCE_TO_ENTITY(Local_1631[iLocal_1452 /*19*/], 2, Local_3594, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
				}
			}
		}
	}
}

void func_555()//Position - 0x60D83
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_1631[iLocal_1452 /*19*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1631[iLocal_1452 /*19*/]))
		{
			ENTITY::SET_ENTITY_COLLISION(Local_1631[iLocal_1452 /*19*/], 1, 0);
		}
	}
}

void func_556()//Position - 0x60DB8
{
	struct<3> Var0;
	
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1746.f_1) && ENTITY::DOES_ENTITY_EXIST(Local_1631[iLocal_1452 /*19*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1631[0 /*19*/]))
	{
		if ((!ENTITY::IS_ENTITY_DEAD(Local_1746.f_1) && !ENTITY::IS_ENTITY_DEAD(Local_1631[iLocal_1452 /*19*/])) && !ENTITY::IS_ENTITY_DEAD(Local_1631[0 /*19*/]))
		{
			Var0 = { ENTITY::GET_ENTITY_ROTATION(Local_1631[0 /*19*/], 2) };
			ENTITY::SET_ENTITY_ROTATION(Local_1631[iLocal_1452 /*19*/], Var0, 2, 1);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1631[iLocal_1452 /*19*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1746.f_1, Local_1631[iLocal_1452 /*19*/].f_2), 0, 0, 1);
		}
	}
}

void func_557()//Position - 0x60E60
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_1631[iLocal_1452 /*19*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1631[iLocal_1452 /*19*/]))
		{
			ENTITY::SET_ENTITY_COLLISION(Local_1631[iLocal_1452 /*19*/], 0, 0);
		}
	}
}

void func_558()//Position - 0x60E95
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_1746.f_1) && ENTITY::DOES_ENTITY_EXIST(Local_1631[iLocal_1452 /*19*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1746.f_1) && !ENTITY::IS_ENTITY_DEAD(Local_1631[iLocal_1452 /*19*/]))
		{
			ENTITY::DETACH_ENTITY(Local_1631[iLocal_1452 /*19*/], 1, 0);
		}
	}
}

void func_559()//Position - 0x60EE7
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_1746.f_1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1746.f_1))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1746.f_1, 1);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1746.f_1, 5, 0, 0);
		}
	}
}

void func_560()//Position - 0x60F1E
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_1631[iLocal_1452 /*19*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1631[iLocal_1452 /*19*/]))
		{
			GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_carsteal4_wheel_burnout", Local_1631[iLocal_1452 /*19*/], Local_3597, Local_3600, 1065353216, 0, 0, 0);
			if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_STEAL_4", 0))
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "CAR_STEAL_4_BURNOUT", Local_1631[iLocal_1452 /*19*/], "CAR_STEAL_4_SOUNDSET", 0, 0);
			}
		}
	}
}






int func_566(var uParam0)//Position - 0x61228
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












void func_578()//Position - 0x61BEC
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_1746.x))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1746.x))
		{
			if (ENTITY::GET_ENTITY_SPEED(Local_1746.x) > fLocal_3581)
			{
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_1746.x, fLocal_3581);
			}
		}
	}
}


















void func_596(var uParam0, var uParam1, var uParam2)//Position - 0x62DB5
{
	if (!*uParam0)
	{
		uParam0->f_10[0 /*57*/].f_2 = 0;
		uParam0->f_10[0 /*57*/].f_3 = -1;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { -0.7917f, 2.2113f, 0.6422f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 0f;
		uParam0->f_10[0 /*57*/].f_16 = 0f;
		uParam0->f_10[0 /*57*/].f_17 = 0;
		uParam0->f_10[0 /*57*/].f_9 = { -0.2027f, -0.0921f, 0.2221f };
		uParam0->f_10[0 /*57*/].f_18 = 1;
		uParam0->f_10[0 /*57*/].f_19 = 1;
		uParam0->f_10[0 /*57*/].f_20 = 1;
		uParam0->f_10[0 /*57*/].f_21 = 40f;
		uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_27 = 0;
		uParam0->f_10[0 /*57*/].f_50 = 0;
		uParam0->f_10[0 /*57*/].f_51 = 0f;
		uParam0->f_10[0 /*57*/].f_52 = 0f;
		uParam0->f_10[0 /*57*/].f_22 = 0f;
		uParam0->f_10[0 /*57*/].f_53 = 2;
		uParam0->f_10[0 /*57*/].f_23 = 0.2f;
		uParam0->f_10[0 /*57*/].f_28 = 0;
		uParam0->f_10[0 /*57*/].f_29 = 0f;
		uParam0->f_10[0 /*57*/].f_32 = 0f;
		uParam0->f_10[0 /*57*/].f_30 = 0;
		uParam0->f_10[0 /*57*/].f_31 = 0;
		uParam0->f_10[0 /*57*/].f_33 = 0.2f;
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
		uParam0->f_10[1 /*57*/].f_5 = 300;
		uParam0->f_10[1 /*57*/].f_6 = { -0.9939f, 3.0014f, 0.7855f };
		uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_12 = 0f;
		uParam0->f_10[1 /*57*/].f_16 = 0f;
		uParam0->f_10[1 /*57*/].f_17 = 0;
		uParam0->f_10[1 /*57*/].f_9 = { -0.2026f, -0.0923f, 0.2216f };
		uParam0->f_10[1 /*57*/].f_18 = 1;
		uParam0->f_10[1 /*57*/].f_19 = 1;
		uParam0->f_10[1 /*57*/].f_20 = 1;
		uParam0->f_10[1 /*57*/].f_21 = 40f;
		uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_27 = 0;
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 0f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0f;
		uParam0->f_10[1 /*57*/].f_53 = 2;
		uParam0->f_10[1 /*57*/].f_23 = 0.2f;
		uParam0->f_10[1 /*57*/].f_28 = 0;
		uParam0->f_10[1 /*57*/].f_29 = 0f;
		uParam0->f_10[1 /*57*/].f_32 = 0f;
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
		uParam0->f_10[2 /*57*/].f_2 = 0;
		uParam0->f_10[2 /*57*/].f_3 = -1;
		uParam0->f_10[2 /*57*/].f_4 = 0;
		uParam0->f_10[2 /*57*/].f_5 = 1200;
		uParam0->f_10[2 /*57*/].f_6 = { -1.0419f, 3.1884f, 0.819f };
		uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_12 = 0f;
		uParam0->f_10[2 /*57*/].f_16 = 0f;
		uParam0->f_10[2 /*57*/].f_17 = 0;
		uParam0->f_10[2 /*57*/].f_9 = { -0.2029f, -0.0924f, 0.2218f };
		uParam0->f_10[2 /*57*/].f_18 = 1;
		uParam0->f_10[2 /*57*/].f_19 = 1;
		uParam0->f_10[2 /*57*/].f_20 = 1;
		uParam0->f_10[2 /*57*/].f_21 = 40f;
		uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_27 = 0;
		uParam0->f_10[2 /*57*/].f_50 = 0;
		uParam0->f_10[2 /*57*/].f_51 = 0f;
		uParam0->f_10[2 /*57*/].f_52 = 0f;
		uParam0->f_10[2 /*57*/].f_22 = 0f;
		uParam0->f_10[2 /*57*/].f_53 = 2;
		uParam0->f_10[2 /*57*/].f_23 = 0.2f;
		uParam0->f_10[2 /*57*/].f_28 = 0;
		uParam0->f_10[2 /*57*/].f_29 = 0f;
		uParam0->f_10[2 /*57*/].f_32 = 0f;
		uParam0->f_10[2 /*57*/].f_30 = 0;
		uParam0->f_10[2 /*57*/].f_31 = 0;
		uParam0->f_10[2 /*57*/].f_33 = 0.4f;
		uParam0->f_10[2 /*57*/].f_34 = 0;
		uParam0->f_10[2 /*57*/].f_35 = 0.8f;
		uParam0->f_10[2 /*57*/].f_36 = 0;
		uParam0->f_10[2 /*57*/].f_37 = 0;
		uParam0->f_10[2 /*57*/].f_39 = 0f;
		uParam0->f_10[2 /*57*/].f_40 = 0f;
		uParam0->f_10[2 /*57*/].f_41 = 0;
		uParam0->f_10[2 /*57*/].f_42 = 0;
		uParam0->f_10[2 /*57*/].f_43 = 0;
		uParam0->f_10[2 /*57*/].f_38 = 0f;
		uParam0->f_10[2 /*57*/].f_45 = 0;
		uParam0->f_10[2 /*57*/].f_46 = 0;
		uParam0->f_10[2 /*57*/].f_47 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[3 /*57*/].f_54 = 1;
		uParam0->f_10[4 /*57*/].f_2 = 0;
		uParam0->f_10[4 /*57*/].f_3 = -1;
		uParam0->f_10[4 /*57*/].f_4 = 0;
		uParam0->f_10[4 /*57*/].f_5 = 0;
		uParam0->f_10[4 /*57*/].f_6 = { -1.4945f, -4.9765f, 0.3261f };
		uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_12 = 0f;
		uParam0->f_10[4 /*57*/].f_16 = 0f;
		uParam0->f_10[4 /*57*/].f_17 = 0;
		uParam0->f_10[4 /*57*/].f_9 = { -0.2235f, 0.0415f, -0.1569f };
		uParam0->f_10[4 /*57*/].f_18 = 1;
		uParam0->f_10[4 /*57*/].f_19 = 1;
		uParam0->f_10[4 /*57*/].f_20 = 1;
		uParam0->f_10[4 /*57*/].f_21 = 50f;
		uParam0->f_10[4 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_27 = 0;
		uParam0->f_10[4 /*57*/].f_50 = 0;
		uParam0->f_10[4 /*57*/].f_51 = 0f;
		uParam0->f_10[4 /*57*/].f_52 = 0f;
		uParam0->f_10[4 /*57*/].f_22 = 0f;
		uParam0->f_10[4 /*57*/].f_53 = 2;
		uParam0->f_10[4 /*57*/].f_23 = 0.2f;
		uParam0->f_10[4 /*57*/].f_28 = 0;
		uParam0->f_10[4 /*57*/].f_29 = 0f;
		uParam0->f_10[4 /*57*/].f_32 = 0f;
		uParam0->f_10[4 /*57*/].f_30 = 0;
		uParam0->f_10[4 /*57*/].f_31 = 0;
		uParam0->f_10[4 /*57*/].f_33 = 2f;
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
		uParam0->f_10[5 /*57*/].f_2 = 0;
		uParam0->f_10[5 /*57*/].f_3 = -1;
		uParam0->f_10[5 /*57*/].f_4 = 0;
		uParam0->f_10[5 /*57*/].f_5 = 1000;
		uParam0->f_10[5 /*57*/].f_6 = { -1.5344f, -6.3627f, 0.4002f };
		uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_12 = 0f;
		uParam0->f_10[5 /*57*/].f_16 = 0f;
		uParam0->f_10[5 /*57*/].f_17 = 0;
		uParam0->f_10[5 /*57*/].f_9 = { 0.0236f, -0.015f, -0.1142f };
		uParam0->f_10[5 /*57*/].f_18 = 1;
		uParam0->f_10[5 /*57*/].f_19 = 1;
		uParam0->f_10[5 /*57*/].f_20 = 1;
		uParam0->f_10[5 /*57*/].f_21 = 50f;
		uParam0->f_10[5 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_27 = 0;
		uParam0->f_10[5 /*57*/].f_50 = 0;
		uParam0->f_10[5 /*57*/].f_51 = 0f;
		uParam0->f_10[5 /*57*/].f_52 = 0f;
		uParam0->f_10[5 /*57*/].f_22 = 0f;
		uParam0->f_10[5 /*57*/].f_53 = 2;
		uParam0->f_10[5 /*57*/].f_23 = 0.2f;
		uParam0->f_10[5 /*57*/].f_28 = 0;
		uParam0->f_10[5 /*57*/].f_29 = 0f;
		uParam0->f_10[5 /*57*/].f_32 = 0f;
		uParam0->f_10[5 /*57*/].f_30 = 0;
		uParam0->f_10[5 /*57*/].f_31 = 0;
		uParam0->f_10[5 /*57*/].f_33 = 0.01f;
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
		uParam0->f_10[6 /*57*/].f_2 = 0;
		uParam0->f_10[6 /*57*/].f_3 = -1;
		uParam0->f_10[6 /*57*/].f_4 = 0;
		uParam0->f_10[6 /*57*/].f_5 = 600;
		uParam0->f_10[6 /*57*/].f_6 = { -0.9759f, -4.926f, 1.5771f };
		uParam0->f_10[6 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_12 = 0f;
		uParam0->f_10[6 /*57*/].f_16 = 0f;
		uParam0->f_10[6 /*57*/].f_17 = 0;
		uParam0->f_10[6 /*57*/].f_9 = { -0.2805f, 0.0644f, 0.0843f };
		uParam0->f_10[6 /*57*/].f_18 = 1;
		uParam0->f_10[6 /*57*/].f_19 = 1;
		uParam0->f_10[6 /*57*/].f_20 = 1;
		uParam0->f_10[6 /*57*/].f_21 = 0f;
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
		uParam0->f_10[6 /*57*/].f_30 = 0;
		uParam0->f_10[6 /*57*/].f_31 = 0;
		uParam0->f_10[6 /*57*/].f_33 = 2f;
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
		uParam0->f_10[7 /*57*/].f_5 = 2200;
		uParam0->f_10[7 /*57*/].f_6 = { -0.4285f, -5.1203f, 0.883f };
		uParam0->f_10[7 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[7 /*57*/].f_12 = 0f;
		uParam0->f_10[7 /*57*/].f_16 = 0f;
		uParam0->f_10[7 /*57*/].f_17 = 0;
		uParam0->f_10[7 /*57*/].f_9 = { -0.4801f, 0.0052f, 0.8198f };
		uParam0->f_10[7 /*57*/].f_18 = 1;
		uParam0->f_10[7 /*57*/].f_19 = 1;
		uParam0->f_10[7 /*57*/].f_20 = 1;
		uParam0->f_10[7 /*57*/].f_21 = 0f;
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
		uParam0->f_1218 = 0;
		uParam0->f_1233 = -1f;
		uParam0->f_1234 = -1f;
		uParam0->f_1235 = 1;
		uParam0->f_1236 = 1;
		uParam0->f_1237 = 1;
		uParam0->f_2 = 0;
		uParam0->f_3 = 1;
		uParam0->f_1219 = 1000;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_CarSteal4_TruckToCar.txt";
		uParam0->f_1225 = "CameraInfo_CarSteal4_TruckToCar.xml";
		*uParam0 = 1;
	}
	uParam0->f_4[0] = uParam1;
	uParam0->f_4[1] = uParam2;
}

void func_597(var uParam0, var uParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, float fParam8)//Position - 0x63B7F
{
	uParam0->f_5 = uParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_12 = fParam3;
	uParam0->f_14 = iParam4;
	uParam0->f_15 = iParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_17 = iParam7;
	uParam0->f_13 = fParam8;
}


















void func_615()//Position - 0x6517B
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	STREAMING::REQUEST_ANIM_DICT(sLocal_1569);
	STREAMING::REQUEST_ANIM_DICT(sLocal_1568);
	STREAMING::REQUEST_ANIM_DICT(sLocal_1571);
	if (!PED::IS_PED_INJURED(iLocal_2045[1]))
	{
		if ((((STREAMING::HAS_ANIM_DICT_LOADED(sLocal_1569) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_1568)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_1571)) && !ENTITY::IS_ENTITY_DEAD(Local_1746.f_1)) && !ENTITY::IS_ENTITY_DEAD(Local_1746.x))
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1458))
			{
				fLocal_1512 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1458);
			}
			if (iLocal_1466 > 0)
			{
				if (!func_475("CH_FRANHELP"))
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1746.x))
						{
							if (GlobalFunc_4953(1, 1, 1))
							{
								GlobalFunc_159("CH_FRANHELP", -1);
								func_472("CH_FRANHELP", 1);
							}
						}
					}
				}
				else if (GlobalFunc_74("CH_FRANHELP"))
				{
					if (!GlobalFunc_4953(1, 1, 1) || !PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1746.x))
					{
						HUD::CLEAR_HELP(1);
					}
				}
			}
			if (iLocal_1466 == 0)
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Local_1746.x))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_2045[1], -1000f, 1);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_2045[1]);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2045[1], 1);
					if (ENTITY::IS_ENTITY_ATTACHED(iLocal_2045[1]))
					{
						ENTITY::DETACH_ENTITY(iLocal_2045[1], 1, 1);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1631[iLocal_1452 /*19*/], 0))
					{
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_2045[1], Local_1631[iLocal_1452 /*19*/], 0);
					}
					PED::SET_PED_MAX_HEALTH(iLocal_2045[1], 1800);
					ENTITY::SET_ENTITY_HEALTH(iLocal_2045[1], 1800);
					iLocal_1458 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1458, Local_1746.x, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_1746.x, "seat_pside_f"));
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_2045[1], iLocal_1458, sLocal_1568, "ig_8_part_01_exit", 1000f, -1000f, 5, 9843, 1148846080, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_2045[1], 0, 0);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_1458, 0f);
					PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_1458, 1f);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1458, 0);
					ENTITY::PLAY_ENTITY_ANIM(Local_1746.x, "ig_8_part_01_exit_door", sLocal_1568, 8f, 0, 0, 0, 0, 0);
					CAM::DESTROY_ALL_CAMS(0);
					uLocal_1595 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_1595, iLocal_1458, "ig_8_part_01_exit_cam", sLocal_1568);
					if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1631[2 /*19*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1631[4 /*19*/], 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1631[3 /*19*/], 0))
					{
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_2045[1], Local_1631[2 /*19*/], 0);
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_2045[1], Local_1631[4 /*19*/], 0);
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_2045[1], Local_1631[3 /*19*/], 0);
					}
					iLocal_1386 = 0;
					iLocal_1387 = 0;
					bLocal_1376 = false;
					iLocal_1466++;
				}
			}
			else if (iLocal_1466 == 1)
			{
				if (iLocal_1386 == 0)
				{
					if (fLocal_1512 >= 0.05f)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1746.x, 0))
						{
							AUDIO::PLAY_VEHICLE_DOOR_OPEN_SOUND(Local_1746.x, 1);
						}
						iLocal_1386 = 1;
					}
				}
				if (iLocal_1387 == 0)
				{
					if (fLocal_1512 >= 0.535f)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1746.x, 0))
						{
							AUDIO::PLAY_VEHICLE_DOOR_CLOSE_SOUND(Local_1746.x, 1);
						}
						iLocal_1387 = 1;
					}
				}
				if (fLocal_1512 >= 1f)
				{
					iLocal_1458 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1458, Local_1746.x, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_1746.x, "seat_pside_f"));
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_2045[1], iLocal_1458, sLocal_1568, "ig_8_part_02_loop", 1000f, -1000f, 5, 9843, 1148846080, 0);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_1458, 0f);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1458, 1);
					PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_1458, 1.15f);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_1595, iLocal_1458, "ig_8_part_02_loop_cam", sLocal_1568);
					AUDIO::_SET_SYNCHRONIZED_AUDIO_EVENT_POSITION_THIS_FRAME("CAR_5_IG_6", iLocal_2045[1]);
					iLocal_1508 = 0;
					iLocal_1467 = MISC::GET_GAME_TIMER();
					iLocal_1466++;
				}
			}
			else if (iLocal_1466 == 2)
			{
				fVar1 = ENTITY::GET_ENTITY_HEADING(Local_1746.x);
				fVar2 = ENTITY::GET_ENTITY_HEADING(Local_1746.f_1);
				if (MISC::ABSF((fVar1 - fVar2)) < 10f)
				{
					if (iLocal_1508 == 0)
					{
						iLocal_1508 = MISC::GET_GAME_TIMER();
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_1508) > 1000)
					{
						iVar0 = 1;
					}
				}
				else
				{
					iLocal_1508 = 0;
					iVar0 = 0;
				}
				if ((((MISC::GET_GAME_TIMER() - iLocal_1467) > 500 && AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT("CAR_5_IG_6", 0)) && VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Local_1746.x)) && iVar0)
				{
					iLocal_1458 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1458, Local_1746.x, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_1746.x, "seat_pside_f"));
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_2045[1], iLocal_1458, sLocal_1568, "ig_8_part_03_jump", 4f, -1000f, 5, 9843, 1148846080, 0);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_1458, 0f);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1458, 0);
					PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_1458, 1.15f);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_1595, iLocal_1458, "ig_8_part_03_jump_cam", sLocal_1568);
					iLocal_1467 = MISC::GET_GAME_TIMER();
					iLocal_1466++;
				}
			}
			else if (iLocal_1466 == 3)
			{
				if (fLocal_1512 >= 0.5f)
				{
					iLocal_1459 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1459, Local_1746.f_1, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_2045[1], iLocal_1459, sLocal_1568, "ig_8_part_03_jump_alt_trailer", 1000f, -1000f, 5, 9843, 1148846080, 0);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_1459, fLocal_1512);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1459, 0);
					PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_1459, 1.15f);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_2045[1], 1, 0);
					iLocal_1467 = MISC::GET_GAME_TIMER();
					iLocal_1466++;
				}
			}
			else if (iLocal_1466 == 4)
			{
				if (fLocal_1512 >= 1f)
				{
					iLocal_1458 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1458, Local_1746.f_1, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_2045[1], iLocal_1458, sLocal_1571, "car_5_ig_4", 1000f, -1000f, 13, 9843, 1148846080, 0);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_1458, 0f);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1458, 0);
					PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_1458, 1.15f);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_1595, iLocal_1458, "car_5_ig_4_cam", sLocal_1571);
					iLocal_1466 = 50;
				}
			}
			else if (iLocal_1466 == 50)
			{
				if (fLocal_1512 >= 1f)
				{
					iLocal_1458 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1458, Local_1746.f_1, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_2045[1], iLocal_1458, sLocal_1569, "car_5_ig_6", 1000f, -1000f, 5, 9843, 1148846080, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1458, 0);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_1595, iLocal_1458, "car_5_ig_6_cam", sLocal_1569);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1631[iLocal_1452 /*19*/], 0))
					{
						ENTITY::PLAY_ENTITY_ANIM(Local_1631[iLocal_1452 /*19*/], "car_5_ig_6_car", sLocal_1569, 1000f, 0, 0, 0, 0f, 0);
						ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_1631[iLocal_1452 /*19*/]);
					}
					AUDIO::PLAY_SYNCHRONIZED_AUDIO_EVENT(iLocal_1458);
					bLocal_1376 = true;
					iLocal_1466++;
				}
			}
			else if (iLocal_1466 == 51)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1631[iLocal_1452 /*19*/], 0))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1631[iLocal_1452 /*19*/], sLocal_1569, "car_5_ig_6_car", 3))
					{
						ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(Local_1631[iLocal_1452 /*19*/], sLocal_1569, "car_5_ig_6_car", fLocal_1512);
					}
				}
				if (fLocal_1512 >= 1f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1631[iLocal_1452 /*19*/], 0))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_2045[1], -1000f, 1);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_2045[1]);
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_2045[1], Local_1631[iLocal_1452 /*19*/], 1);
						PED::SET_PED_INTO_VEHICLE(iLocal_2045[1], Local_1631[iLocal_1452 /*19*/], -1);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1631[iLocal_1452 /*19*/], 1);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1631[iLocal_1452 /*19*/], 1);
						CAM::DESTROY_ALL_CAMS(0);
						CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
						GlobalFunc_4948(&uLocal_2288, 0, 0);
						bLocal_1376 = false;
						iLocal_1466++;
					}
				}
			}
		}
	}
	else if (ENTITY::GET_ENTITY_HEALTH(iLocal_2045[1]) < 150)
	{
		ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_2045[1], -8f, 1);
		PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_1458, -1f);
		PED::SET_PED_CAN_RAGDOLL(iLocal_2045[1], 1);
		PED::SET_PED_TO_RAGDOLL(iLocal_2045[1], 1000, 7000, 2, 1, 1, 0);
		PED::APPLY_DAMAGE_TO_PED(iLocal_2045[1], ENTITY::GET_ENTITY_HEALTH(iLocal_2045[1]) + 50, 1);
	}
}



void func_618(bool bParam0)//Position - 0x659B6
{
	int iVar0;
	int iVar1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var6[12];
	float fVar43;
	struct<3> Var44;
	
	if (bParam0)
	{
		if (!iLocal_1365)
		{
			iVar0 = 0;
			iVar1 = -1;
			fVar2 = 0f;
			Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			Var6[0 /*3*/] = { 536.0454f, -1421.631f, 28.356f };
			Var6[1 /*3*/] = { 473.5091f, -1420.091f, 28.343f };
			Var6[2 /*3*/] = { 353.3233f, -1335.361f, 31.5383f };
			Var6[3 /*3*/] = { -2225.334f, -338.3899f, 12.4178f };
			Var6[4 /*3*/] = { -2726.101f, 2263.61f, 19.3537f };
			Var6[5 /*3*/] = { -2694.336f, 2351.509f, 15.9009f };
			Var6[6 /*3*/] = { -2654.281f, 2614.467f, 15.6938f };
			Var6[7 /*3*/] = { -2585.688f, 3168.405f, 13.2889f };
			Var6[8 /*3*/] = { -2567.392f, 3336.45f, 12.5477f };
			Var6[9 /*3*/] = { -2028.62f, 4484.072f, 56.0054f };
			Var6[10 /*3*/] = { -735.6742f, 5510.315f, 34.996f };
			Var6[11 /*3*/] = { Local_1526 };
			iVar0 = 0;
			while (iVar0 < (Var6.x - 1))
			{
				fVar43 = SYSTEM::VDIST2(Var3, Var6[iVar0 /*3*/]);
				if (iVar1 == -1 || fVar43 < fVar2)
				{
					iVar1 = iVar0;
					fVar2 = fVar43;
				}
				iVar0++;
			}
			if (SYSTEM::VDIST2(Var3, Var6[iVar1 + 1 /*3*/]) < SYSTEM::VDIST2(Var6[iVar1 /*3*/], Var6[iVar1 + 1 /*3*/]))
			{
				iVar1++;
			}
			if (iVar1 != iLocal_1488 && (fVar2 > 20000f || iLocal_1488 == -1))
			{
				if (!GlobalFunc_537(Local_1526, Var6[iVar1 /*3*/], 1056964608))
				{
					HUD::SET_BLIP_ALPHA(Local_1810.f_5, 255);
					HUD::SET_BLIP_ROUTE(Local_1810.f_6, 0);
					HUD::CLEAR_GPS_MULTI_ROUTE();
					HUD::START_GPS_MULTI_ROUTE(156, 1, 0);
					iVar0 = iVar1;
					while (iVar0 < (Var6.x - 1))
					{
						HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(Var6[iVar0 /*3*/]);
						iVar0++;
					}
					HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(Local_1526);
					HUD::SET_GPS_MULTI_ROUTE_RENDER(1);
					iLocal_1364 = 1;
				}
				else if (iLocal_1364)
				{
					HUD::SET_GPS_MULTI_ROUTE_RENDER(0);
					HUD::CLEAR_GPS_MULTI_ROUTE();
					iLocal_1364 = 0;
				}
			}
			Var44 = { 1618.82f, 1168.37f, 85f };
			if (SYSTEM::VDIST2(Var44, Var3) < fVar2)
			{
				if (iLocal_1364)
				{
					HUD::SET_GPS_MULTI_ROUTE_RENDER(0);
					HUD::CLEAR_GPS_MULTI_ROUTE();
					iLocal_1364 = 0;
				}
				if (HUD::DOES_BLIP_EXIST(Local_1810.f_5))
				{
					HUD::SET_BLIP_ALPHA(Local_1810.f_5, 255);
					HUD::SET_BLIP_ROUTE(Local_1810.f_6, 1);
				}
				iLocal_1365 = 1;
			}
			iLocal_1488 = iVar1;
		}
	}
	else
	{
		if (HUD::DOES_BLIP_EXIST(Local_1810.f_5))
		{
			HUD::SET_BLIP_ALPHA(Local_1810.f_5, 0);
			HUD::SET_BLIP_ROUTE(Local_1810.f_6, 0);
		}
		if (iLocal_1364)
		{
			HUD::SET_GPS_MULTI_ROUTE_RENDER(0);
			HUD::CLEAR_GPS_MULTI_ROUTE();
			iLocal_1364 = 0;
		}
		iLocal_1488 = -1;
		iLocal_1365 = 0;
	}
}




void func_622()//Position - 0x65D63
{
	if (!PED::IS_PED_INJURED(Local_1749.x) && !ENTITY::IS_ENTITY_DEAD(Local_1746.x))
	{
		STREAMING::REQUEST_ANIM_DICT(sLocal_1575);
		if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_1749.x, Local_1746.x))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_1749.x, Local_1746.x, 0, 0f, 1.5f, 0.85f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
		}
		if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_1575))
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1749.x, sLocal_1575, "sit", 3))
			{
				TASK::TASK_PLAY_ANIM(Local_1749.x, sLocal_1575, "sit", 8f, -8f, -1, 9, 0, 0, 0, 0);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_1749.x, 0);
				PED::SET_PED_CAN_RAGDOLL(Local_1749.x, 0);
				PED::SET_PED_CONFIG_FLAG(Local_1749.x, 118, 0);
				PED::SET_PED_CONFIG_FLAG(Local_1749.x, 208, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1749.x, 1);
				PED::SET_PED_KEEP_TASK(Local_1749.x, true);
			}
			if (IntToFloat(ENTITY::GET_ENTITY_HEALTH(Local_1749.x)) < 150f)
			{
				TASK::TASK_PLAY_ANIM(Local_1749.x, sLocal_1575, "die", 8f, -8f, -1, 10, 0, 0, 0, 0);
				ENTITY::SET_ENTITY_HEALTH(Local_1749.x, 0);
			}
		}
	}
}

int func_623(struct<3> Param0, float fParam3)//Position - 0x65E5F
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2045[1]))
	{
		if (func_53(&(iLocal_2045[1]), 1, Param0, fParam3, 1, 0, 0))
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iLocal_2045[1], 1);
			GlobalFunc_173(&Local_2123, 1, iLocal_2045[1], "FRANKLIN", 0, 1);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_2045[1], 0);
			PED::SET_PED_MAX_HEALTH(iLocal_2045[1], 200);
			ENTITY::SET_ENTITY_HEALTH(iLocal_2045[1], 200);
			PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_2045[1], 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_2045[1], 1862763509);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_624()//Position - 0x65EF5
{
	if (GlobalFunc_8315() != 2)
	{
		func_358(2, 1);
	}
	else
	{
		func_357();
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), 1862763509);
		return 1;
	}
	return 0;
}

int func_625()//Position - 0x65F25
{
	int iVar0;
	
	Local_1631[0 /*19*/].f_2 = { 0f, -5f, 0.82f };
	Local_1631[0 /*19*/].f_5 = { 3.8f, 0f, 0f };
	Local_1631[0 /*19*/].f_16 = 46164f;
	Local_1631[0 /*19*/].f_9 = 5;
	Local_1631[0 /*19*/].f_18 = joaat("monroe");
	Local_1631[1 /*19*/].f_2 = { 0f, 0f, 0.95f };
	Local_1631[1 /*19*/].f_5 = { -2.6f, 0f, 0f };
	Local_1631[1 /*19*/].f_18 = joaat("cheetah");
	Local_1631[2 /*19*/].f_2 = { 0f, 5f, 0.85f };
	Local_1631[2 /*19*/].f_5 = { 0.09f, 0f, 0f };
	Local_1631[2 /*19*/].f_18 = joaat("stinger");
	Local_1631[3 /*19*/].f_2 = { 0f, -5f, 3.35f };
	Local_1631[3 /*19*/].f_5 = { 0.09f, 0f, 0f };
	Local_1631[3 /*19*/].f_16 = 46045f;
	Local_1631[3 /*19*/].f_9 = 7;
	Local_1631[3 /*19*/].f_18 = joaat("jb700");
	Local_1631[4 /*19*/].f_2 = { 0f, -0.25f, 2.95f };
	Local_1631[4 /*19*/].f_5 = { -4.67f, 0f, 0f };
	Local_1631[4 /*19*/].f_18 = joaat("entityxf");
	Local_1631[5 /*19*/].f_2 = { 0f, 5f, 2.91f };
	Local_1631[5 /*19*/].f_5 = { 4f, 0f, 0f };
	Local_1631[5 /*19*/].f_18 = joaat("ztype");
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_1631)
	{
		Local_1631[iVar0 /*19*/].f_13 = 0;
		Local_1631[iVar0 /*19*/].f_14 = 0;
		Local_1631[iVar0 /*19*/].f_12 = 0;
		Local_1631[iVar0 /*19*/].f_15 = 0;
		Local_1631[iVar0 /*19*/].f_8 = 0;
		iVar0++;
	}
	return 1;
}

void func_626()//Position - 0x660C5
{
	if (iLocal_2042 == 0)
	{
		if (iLocal_1362)
		{
			if (iLocal_1388 != 99)
			{
				if (bLocal_1377)
				{
					GlobalFunc_5116(Local_1517 + Vector(0f, 5f, 5f), 0f, 1, 0);
					iLocal_1388 = 99;
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_1517 + Vector(0f, 5f, 5f), 1, 0, 0, 1);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
					STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
					iLocal_1388 = 99;
				}
			}
			else if (func_356() && func_625())
			{
				MISC::CLEAR_AREA_OF_VEHICLES(Local_1517, 30f, 0, 0, 0, 0, 0);
				if (((((func_629() && GlobalFunc_82()) && func_352(Local_1517, fLocal_1510)) && func_349()) && func_345(504.1672f, -1304.744f, 28.3103f, 200.8915f)) && func_51(496.6033f, -1308.379f, 28.302f, 204.3612f))
				{
					GlobalFunc_5108(0, -1, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					iLocal_1362 = 0;
				}
			}
		}
		else
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
			CUTSCENE::REQUEST_CUTSCENE("CAR_5_MCS_1", 8);
			func_24("CAR_5_MCS_1");
			if (GlobalFunc_Has_Cutscene_Loaded())
			{
				if (!PED::IS_PED_INJURED(iLocal_2045[2]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2045[2], "Trevor", 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(Local_1749.x))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1749.x, "Lamar", 0, 0, 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1746.x, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_1746.x, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1746.x, "CAR_5_Truck", 0, 0, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_1746.f_1))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_1746.f_1, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1746.f_1, "CAR_5_Trailer", 0, 0, 0);
				}
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
				CUTSCENE::_0x7F96F23FA9B73327(iLocal_2032);
				CUTSCENE::START_CUTSCENE(1024);
				RECORDING::_0x48621C9FCA3EBD28(4);
				RECORDING::_0x293220DA1B46CEBC(8f, 0f, 4);
				GlobalFunc_2204();
				GlobalFunc_8316(1, 1, 1, 0);
				iLocal_1367 = 0;
				iLocal_1388 = 0;
				iLocal_2042 = 1;
			}
		}
	}
	if (iLocal_2042 == 1)
	{
		if (!iLocal_1367)
		{
			if (GlobalFunc_1080())
			{
				iLocal_1367 = 1;
			}
		}
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			iLocal_2042 = 2;
		}
		STREAMING::REQUEST_ANIM_DICT(sLocal_1575);
		switch (iLocal_1388)
		{
			case 0:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1631[0 /*19*/], 0) && !ENTITY::IS_ENTITY_DEAD(Local_1746.f_1))
					{
						ENTITY::SET_ENTITY_COLLISION(Local_1631[0 /*19*/], 1, 0);
						ENTITY::FREEZE_ENTITY_POSITION(Local_1631[0 /*19*/], 0);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1631[0 /*19*/], 1);
						VEHICLE::ATTACH_VEHICLE_ON_TO_TRAILER(Local_1631[0 /*19*/], Local_1746.f_1, 0f, 0f, 0f, Local_1631[0 /*19*/].f_2, Local_1631[0 /*19*/].f_5, -1f);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1631[0 /*19*/], 0, 0);
						AUDIO::SET_VEHICLE_RADIO_LOUD(Local_1631[0 /*19*/], 0);
						VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_1746.f_1, 5, 1);
					}
					func_629();
					MISC::CLEAR_AREA_OF_VEHICLES(Local_1517, 200f, 0, 0, 0, 0, 0);
					MISC::CLEAR_AREA_OF_PROJECTILES(Local_1517, 100f, 0);
					AUDIO::STOP_AUDIO_SCENES();
					iLocal_1388++;
				}
				break;
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_1746.f_1) && !ENTITY::IS_ENTITY_DEAD(Local_1746.x))
		{
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("CAR_5_Truck", 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_1746.x, 1);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1746.x, 1);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("CAR_5_Trailer", 0))
			{
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				if (GlobalFunc_8315() != 2)
				{
					GlobalFunc_9019(&iLocal_2045, 2);
					func_361(&iLocal_2045, 1, 0, 0);
					func_357();
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) != 4)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneTrevor", 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", 1);
					}
				}
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), 1862763509);
				if (!PED::IS_PED_INJURED(iLocal_2045[1]))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_2045[1], 1862763509);
				}
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1746.x, -1);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				if (!PED::IS_PED_INJURED(iLocal_2045[1]))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_2045[1], Local_1746.x, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_2045[1], 0, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				RECORDING::_0x81CBAE94390F9F89();
				RECORDING::_0x293220DA1B46CEBC(0f, 10f, 4);
				if (!CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_1631[3 /*19*/]) && !ENTITY::IS_ENTITY_DEAD(Local_1631[3 /*19*/]))
					{
						ENTITY::DETACH_ENTITY(Local_1631[3 /*19*/], 0, 1);
						VEHICLE::ATTACH_VEHICLE_ON_TO_TRAILER(Local_1631[3 /*19*/], Local_1746.f_1, 0f, 0f, 0f, Local_1631[3 /*19*/].f_2, Local_1631[3 /*19*/].f_5, -1f);
					}
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				func_489();
			}
			if (!PED::IS_PED_INJURED(Local_1749.x))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lamar", 0))
				{
					PED::SET_PED_MAX_HEALTH(Local_1749.x, 500);
					ENTITY::SET_ENTITY_HEALTH(Local_1749.x, 500);
					func_622();
				}
			}
		}
		STREAMING::REQUEST_ANIM_DICT(sLocal_1570);
	}
	if (iLocal_2042 == 2)
	{
		STREAMING::REQUEST_ANIM_DICT(sLocal_1570);
		if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_1570))
		{
			if (iLocal_1367)
			{
				while (CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					SYSTEM::WAIT(0);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_1746.f_1) && !ENTITY::IS_ENTITY_DEAD(Local_1746.x))
			{
				if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1746.x))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1746.x, -1);
				}
			}
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(491.9493f, -1421.738f, 10.2604f, 563.2618f, -1267.808f, 40.3393f, 1);
			GlobalFunc_8316(0, 1, 1, 0);
			STREAMING::REMOVE_ANIM_DICT(sLocal_1566);
			iLocal_1388 = 0;
			iLocal_2042 = 0;
			iLocal_2041 = 3;
		}
	}
	if (iLocal_2042 == 3)
	{
		func_627(0);
		RECORDING::_0x13B350B8AD0EEE10();
		CUTSCENE::STOP_CUTSCENE(0);
		iLocal_1367 = 1;
		iLocal_2042 = 1;
	}
}

void func_627(bool bParam0)//Position - 0x66637
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(800);
		}
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (bParam0)
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			}
			SYSTEM::WAIT(0);
		}
	}
}


int func_629()//Position - 0x666A1
{
	PATHFIND::SET_ROADS_IN_AREA(491.9493f, -1421.738f, 10.2604f, 563.2618f, -1267.808f, 40.3393f, 0, 1);
	return 1;
}

void func_630()//Position - 0x666CE
{
	int iVar0[3];
	int iVar4;
	struct<3> Var5;
	struct<3> Var8;
	float fVar11;
	struct<3> Var12;
	struct<3> Var15;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	var uVar21;
	int iVar22;
	var uVar23;
	var uVar24;
	
	if (iLocal_2042 == 0)
	{
		if (iLocal_1362)
		{
			if (bLocal_1377)
			{
				if (bLocal_1373)
				{
					GlobalFunc_5116(-212.6681f, -1358.643f, 30.261f, 326.8683f, 1, 0);
				}
				else
				{
					GlobalFunc_5116(-62.8697f, -1457.641f, 31.1163f, 111.782f, 1, 0);
				}
			}
			else
			{
				if (bLocal_1373)
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -212.6681f, -1358.643f, 30.261f, 1, 0, 0, 1);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 493.5279f, -1315.546f, 28.2455f, 1, 0, 0, 1);
				}
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 326.8683f);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
				SYSTEM::WAIT(0);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			}
			func_625();
			while ((!func_356() || !ENTITY::DOES_ENTITY_EXIST(Local_1631[0 /*19*/])) || !(ENTITY::DOES_ENTITY_EXIST(Local_1749.x) || !bLocal_1373))
			{
				func_679(-209.6797f, -1360.294f, 30.2959f, 117.6006f);
				if (bLocal_1373)
				{
					func_345(-210.6681f, -1358.643f, 30.261f, 123.1137f);
				}
				SYSTEM::WAIT(0);
			}
			GlobalFunc_5108(0, -1, 0);
			iLocal_1362 = 0;
		}
		else
		{
			func_625();
			if (func_679(-209.6797f, -1360.294f, 30.2959f, 117.6006f))
			{
				GlobalFunc_82();
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					if (bLocal_1373)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1631[0 /*19*/], 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1631[0 /*19*/], 0))
							{
								PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1631[0 /*19*/], -1);
							}
							if (!PED::IS_PED_INJURED(Local_1749.x) && !PED::IS_PED_IN_VEHICLE(Local_1749.x, Local_1631[0 /*19*/], 0))
							{
								PED::SET_PED_INTO_VEHICLE(Local_1749.x, Local_1631[0 /*19*/], 0);
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1610, 0))
					{
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1610);
					}
					MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2000f, 1, 1, 0, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				}
				if (!bLocal_1373)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1631[0 /*19*/], 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_1631[0 /*19*/], 1);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1631[0 /*19*/], 1, 1);
						AUDIO::SET_VEHICLE_RADIO_LOUD(Local_1631[0 /*19*/], 1);
						AUDIO::SET_VEH_RADIO_STATION(Local_1631[0 /*19*/], "RADIO_03_HIPHOP_NEW");
					}
					Local_1749.f_2 = 0;
					iLocal_1388 = 0;
				}
				else
				{
					func_629();
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_TAKE_CAR_TO_TRANSPORTER"))
					{
						AUDIO::START_AUDIO_SCENE("CAR_4_TAKE_CAR_TO_TRANSPORTER");
					}
					GlobalFunc_Checkpoint7(1, "MEET_TREVOR", 0, 0, 0, 1);
					Local_1749.f_2 = 1;
					iLocal_1388 = 50;
				}
				GlobalFunc_2204();
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1610))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1610);
				}
				fLocal_1516 = 0f;
				iLocal_1379 = 0;
				bLocal_1368 = false;
				iLocal_1362 = 0;
				iLocal_1369 = 0;
				iLocal_1371 = 0;
				iLocal_1457 = 0;
				iLocal_1499 = 0;
				iLocal_1500 = 0;
				iLocal_1497 = 0;
				iLocal_1498 = 0;
				iLocal_1579 = 0;
				iLocal_2042 = 1;
			}
		}
	}
	if (iLocal_2042 == 1)
	{
		VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			PLAYER::_0xC3376F42B1FACCC6(PLAYER::PLAYER_ID());
		}
		iVar4 = 0;
		Var8 = { 507.5f, -1316.7f, 30f };
		if (!ENTITY::IS_ENTITY_DEAD(Local_1746.f_1))
		{
			if (ENTITY::GET_ENTITY_SPEED(Local_1746.f_1) < 0.5f)
			{
				Var5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1746.f_1, 0f, -4.8707f, 0.5282f) };
			}
			else
			{
				Var5 = { Local_1520 };
			}
		}
		else
		{
			Var5 = { Local_1520 };
		}
		if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1460) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1631[0 /*19*/], 0)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1631[0 /*19*/], 0))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_1749.x))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_1749.x))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1631[0 /*19*/], 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_1749.x, Local_1631[0 /*19*/], 0))
					{
						AUDIO::_0xC1805D05E6D4FE10(Local_1631[0 /*19*/]);
						AUDIO::SET_VEH_RADIO_STATION(Local_1631[0 /*19*/], "RADIO_03_HIPHOP_NEW");
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1606))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1606);
		}
		switch (iLocal_1388)
		{
			case 0:
				GlobalFunc_9194(&Local_1810, Var8, 0.001f, 0.001f, 2f, 0, Local_1631[0 /*19*/], "CH_CHOPSHOP", "CH_COLLECT", "CH_GETBACKCAR", 1, 0, 1, -1);
				if (!ENTITY::DOES_ENTITY_EXIST(Local_1749.x))
				{
					if (SYSTEM::VDIST2(-209.6797f, -1360.294f, 30.2959f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 22500f)
					{
						func_345(-210.6681f, -1358.643f, 30.261f, 123.1137f);
					}
				}
				if (!PED::IS_PED_INJURED(Local_1749.x) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1631[0 /*19*/], 0))
				{
					if (Local_1749.f_2 == 0)
					{
						STREAMING::REQUEST_ANIM_DICT(sLocal_1572);
						if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_1572))
						{
							iLocal_1460 = PED::CREATE_SYNCHRONIZED_SCENE(0f, -0.6f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1460, Local_1631[0 /*19*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_1631[0 /*19*/], "seat_pside_f"));
							TASK::TASK_SYNCHRONIZED_SCENE(Local_1749.x, iLocal_1460, sLocal_1572, "waitloop_lamar", 1000f, -8f, 1, 153, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_1460, 0f);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1460, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1749.x, 1);
							Local_1749.f_2++;
						}
					}
					else
					{
						Var12 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						Var15 = { ENTITY::GET_ENTITY_COORDS(Local_1631[0 /*19*/], 1) };
						fVar11 = SYSTEM::VDIST2(Var12, Var15);
						if (!bLocal_1368)
						{
							if (((PED::IS_PED_RAGDOLL(Local_1749.x) || TASK::IS_PED_GETTING_UP(Local_1749.x)) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1460)) || PED::IS_PED_IN_COMBAT(Local_1749.x, 0))
							{
								bLocal_1368 = true;
							}
						}
						PED::GET_PED_NEARBY_VEHICLES(Local_1749.x, &iVar0);
						iVar4 = 0;
						while (iVar4 < iVar0)
						{
							if (iVar0[iVar4] != Local_1631[0 /*19*/])
							{
								if (!ENTITY::IS_ENTITY_DEAD(iVar0[iVar4]) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0[iVar4], 0))
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1749.x, 1), ENTITY::GET_ENTITY_COORDS(iVar0[iVar4], 1)) < 100f && ENTITY::GET_ENTITY_SPEED(iVar0[iVar4]) > 3f)
									{
										ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_1749.x, -8f, 1);
										TASK::CLEAR_PED_TASKS(Local_1749.x);
										iLocal_1460 = -1;
									}
								}
							}
							iVar4++;
						}
						if (fVar11 < 225f)
						{
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, 1);
						}
						if (fVar11 < 225f)
						{
							if (!ENTITY::IS_ENTITY_OCCLUDED(Local_1749.x) && ENTITY::IS_ENTITY_ON_SCREEN(Local_1749.x))
							{
								fLocal_1516 = (fLocal_1516 + MISC::GET_FRAME_TIME());
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1631[0 /*19*/], 0))
						{
							if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == Local_1631[0 /*19*/] || PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()) == Local_1631[0 /*19*/])
							{
								ENTITY::FREEZE_ENTITY_POSITION(Local_1631[0 /*19*/], 0);
							}
						}
						bVar18 = (((fVar11 < 225f && MISC::ABSF((Var12.f_2 - Var15.f_2)) < 2f) && (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Local_1749.x, PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1631[0 /*19*/], 1))) && (fLocal_1516 > 1f || fVar11 < 64f));
						bVar19 = ((bLocal_1368 && fVar11 < 400f) && MISC::ABSF((Var12.f_2 - Var15.f_2)) < 2f);
						if (bVar18 || bVar19)
						{
							if (!PED::IS_PED_RAGDOLL(Local_1749.x) && !TASK::IS_PED_GETTING_UP(Local_1749.x))
							{
								if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_LAMHI", 7, 0, 0, 0))
								{
									if (!bLocal_1368)
									{
										iLocal_1460 = PED::CREATE_SYNCHRONIZED_SCENE(0f, -0.6f, 0f, 0f, 0f, 0f, 2);
										PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1460, Local_1631[0 /*19*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_1631[0 /*19*/], "seat_pside_f"));
										TASK::TASK_SYNCHRONIZED_SCENE(Local_1749.x, iLocal_1460, sLocal_1572, "entercar_lamar", 8f, -1.5f, 1, 153, 1148846080, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1749.x, 1);
										ENTITY::SET_ENTITY_COLLISION(Local_1749.x, 1, 0);
										PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_1460, 0f);
										PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1460, 0);
									}
									else
									{
										ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_1749.x, -1.5f, 1);
										iLocal_1460 = -1;
										TASK::TASK_ENTER_VEHICLE(Local_1749.x, Local_1631[0 /*19*/], 20000, 0, 2f, 1, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1749.x, 1);
									}
									ENTITY::FREEZE_ENTITY_POSITION(Local_1631[0 /*19*/], 0);
									GlobalFunc_5652(&Local_1810, 1, 0);
									HUD::CLEAR_PRINTS();
									iLocal_1372 = 0;
									iLocal_1388++;
								}
							}
							else
							{
								ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_1749.x, -8f, 1);
								iLocal_1460 = -1;
							}
						}
					}
				}
				break;
			
			case 1:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1631[0 /*19*/], 0))
				{
					if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1631[0 /*19*/]))
					{
						if (!HUD::DOES_BLIP_EXIST(Local_1631[0 /*19*/].f_1))
						{
							Local_1631[0 /*19*/].f_1 = GlobalFunc_6783(Local_1631[0 /*19*/], 0, 0);
						}
					}
					else if (HUD::DOES_BLIP_EXIST(Local_1631[0 /*19*/].f_1))
					{
						HUD::REMOVE_BLIP(&(Local_1631[0 /*19*/].f_1));
					}
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1631[0 /*19*/], 0))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1460))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1460) < 0.55f)
							{
								if (SYSTEM::VMAG(ENTITY::GET_ENTITY_VELOCITY(Local_1631[0 /*19*/])) > 0.5f)
								{
									bVar20 = true;
								}
							}
						}
					}
				}
				if (!PED::IS_PED_INJURED(Local_1749.x))
				{
					if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1460) && !PED::IS_PED_RAGDOLL(Local_1749.x)) && !bVar20)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1631[0 /*19*/], 0))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1460) >= 1f)
							{
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_1749.x);
								PED::SET_PED_INTO_VEHICLE(Local_1749.x, Local_1631[0 /*19*/], 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1749.x, 0, 0);
								ENTITY::FREEZE_ENTITY_POSITION(Local_1631[0 /*19*/], 0);
								PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, 0);
								func_413();
								iLocal_1388++;
							}
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1460) >= 0.24f)
							{
								ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_1749.x, -1.5f, 1);
								TASK::TASK_ENTER_VEHICLE(Local_1749.x, Local_1631[0 /*19*/], 20000, 0, 1f, 1, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1749.x, 1);
								ENTITY::FREEZE_ENTITY_POSITION(Local_1631[0 /*19*/], 0);
								PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, 0);
								func_413();
								iLocal_1460 = -1;
								iLocal_1388++;
							}
						}
					}
					else
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1460))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_1749.x, -8f, 1);
						}
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1631[0 /*19*/], sLocal_1572, "entercar_cardoor", 3))
						{
							ENTITY::STOP_ENTITY_ANIM(Local_1631[0 /*19*/], "entercar_cardoor", sLocal_1572, -8f);
						}
						PED::SET_PED_TO_RAGDOLL(Local_1749.x, 1500, 2500, 0, 0, 0, 0);
						ENTITY::FREEZE_ENTITY_POSITION(Local_1631[0 /*19*/], 0);
						iLocal_1460 = -1;
						iLocal_1388++;
					}
				}
				if (!iLocal_1372)
				{
					GlobalFunc_2269(&(Local_1631[0 /*19*/].f_1), 217.3918f, -1395.365f, 30.265f, 26.1585f);
					iLocal_1372 = 1;
				}
				break;
			
			case 2:
				if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1631[0 /*19*/], 0) && !PED::IS_PED_INJURED(Local_1749.x))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1631[0 /*19*/], 1))
					{
						if (HUD::DOES_BLIP_EXIST(Local_1631[0 /*19*/].f_1))
						{
							HUD::REMOVE_BLIP(&(Local_1631[0 /*19*/].f_1));
						}
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1749.x, 1), ENTITY::GET_ENTITY_COORDS(Local_1631[0 /*19*/], 1)) < 16f)
						{
							if ((!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) && GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_GOTREV", 7, 0, 0, 0)) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
							{
								GlobalFunc_7621(8, 0, 0, 1, 0);
								GlobalFunc_7621(9, 0, 0, 1, 0);
								GlobalFunc_7621(10, 0, 0, 1, 0);
								GlobalFunc_7621(7, 0, 0, 1, 0);
								func_629();
								if (GlobalFunc_7091(0f, 0f, 0f, 1))
								{
									GlobalFunc_10709(-219.37f, -1355.889f, 30.2681f, 117.4465f, 0, 145);
								}
								GlobalFunc_Checkpoint7(1, "MEET_TREVOR", 0, 0, 0, 1);
								RECORDING::_0x293220DA1B46CEBC(10f, 10f, 4);
								iLocal_1487 = 0;
								iLocal_1388 = 50;
							}
						}
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_TAKE_CAR_TO_TRANSPORTER"))
						{
							AUDIO::START_AUDIO_SCENE("CAR_4_TAKE_CAR_TO_TRANSPORTER");
						}
					}
				}
				if (HUD::DOES_BLIP_EXIST(Local_1631[0 /*19*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_1631[0 /*19*/].f_1));
				}
				GlobalFunc_10157(&Local_1810, Var8, 0.001f, 0.001f, 2f, 0, Local_1749.x, Local_1631[0 /*19*/], "", "CH_LEAVELAM", "", "CH_GETBACKCAR", 0, 1, !iLocal_1371, -1);
				if (HUD::DOES_BLIP_EXIST(Local_1810.f_5))
				{
					HUD::SET_BLIP_COLOUR(Local_1810.f_5, 3);
					HUD::SET_BLIP_ROUTE_COLOUR(Local_1810.f_5, 3);
					ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var5, GlobalFunc_716(), 1, 1, 0);
				}
				else if (HUD::DOES_BLIP_EXIST(Local_1746.f_2))
				{
					HUD::REMOVE_BLIP(&(Local_1746.f_2));
				}
				break;
			
			case 50:
				VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1.5f);
				if (GlobalFunc_10157(&Local_1810, Var8, 0.001f, 0.001f, 2f, 0, Local_1749.x, Local_1631[0 /*19*/], "CH_CHOPSHOP", "CH_LEAVELAM", "", "CH_GETBACKCAR", 0, 1, !iLocal_1371, -1))
				{
					iLocal_1388++;
				}
				if (HUD::DOES_BLIP_EXIST(Local_1810.f_5))
				{
					HUD::SET_BLIP_COLOUR(Local_1810.f_5, 3);
					HUD::SET_BLIP_ROUTE_COLOUR(Local_1810.f_5, 3);
					ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var5, GlobalFunc_716(), 1, 1, 0);
					if (!ENTITY::IS_ENTITY_DEAD(Local_1746.f_1))
					{
						if (!GlobalFunc_5172(&Local_1810, 1))
						{
							if (!func_475("CST7_LINEUP2"))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1746.f_1, -0.034f, -9.8469f, 0.5873f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1746.f_1, 0.1043f, -2.2616f, 2.2863f), 1.75f, 0, 1, 0))
								{
									if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_LINEUP2", 7, 0, 0, 0))
									{
										func_472("CST7_LINEUP2", 1);
									}
								}
							}
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1746.f_1, -0.034f, -5.8469f, 0.5873f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1746.f_1, 0.1043f, -2.2616f, 2.2863f), 1.75f, 0, 1, 0))
						{
							GlobalFunc_6685(0);
							GlobalFunc_5105();
							GlobalFunc_7139(&Local_1810, 0);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
							SYSTEM::SETTIMERB(0);
							iLocal_1388++;
						}
					}
					if (GlobalFunc_620())
					{
						GlobalFunc_619(0);
					}
					if (!GlobalFunc_5172(&Local_1810, 1))
					{
						if (!func_475("CST7_CHAT1") && !func_475("CST7_CHAT1b"))
						{
							if (iLocal_1487 == 0)
							{
								iLocal_1487 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(250, 750));
							}
							else if ((MISC::GET_GAME_TIMER() - iLocal_1487) > 0)
							{
								if (GlobalFunc_7066() > 0)
								{
									if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_CHAT1", 7, 0, 0, 0))
									{
										func_472("CST7_CHAT1", 1);
									}
								}
								else if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_CHAT1b", 7, 0, 0, 0))
								{
									func_472("CST7_CHAT1b", 1);
								}
							}
						}
						else if (!func_475("CST7_LINEUP"))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_1746.f_1))
							{
								if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1746.f_1, 1)) < 1600f)
								{
									if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_LINEUP", 7, 0, 0, 0))
									{
										func_472("CST7_LINEUP", 1);
									}
								}
							}
						}
						else if (!func_475("CST7_TREVHI"))
						{
							if (!PED::IS_PED_INJURED(iLocal_2045[2]))
							{
								if (ENTITY::IS_ENTITY_VISIBLE(iLocal_2045[2]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_2045[2], 1)) < 900f)
								{
									if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_2045[2], PLAYER::PLAYER_PED_ID()))
									{
										if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_TREVHI", 7, 0, 0, 0))
										{
											func_472("CST7_TREVHI", 1);
											iLocal_1497 = 0;
											iLocal_1498 = MISC::GET_GAME_TIMER();
										}
									}
								}
							}
						}
						if (iLocal_1579 == 1)
						{
							if (func_475("CST7_DMG"))
							{
								if (func_475("CST7_CHAT1") || func_475("CST7_CHAT1b"))
								{
									if (!GlobalFunc_5172(&Local_1810, 1))
									{
										if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_1580) && !MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1586))
										{
											if (GlobalFunc_10626(&Local_2123, "CST7AUD", &Local_1580, &cLocal_1586, 7, 0, 0))
											{
												iLocal_1579 = 0;
												func_472("CST7_DMG", 0);
											}
										}
									}
								}
							}
						}
						if (!func_475("CST7_BACK"))
						{
							if (func_475("CST7_TREVHI"))
							{
								if (!PED::IS_PED_INJURED(iLocal_2045[2]))
								{
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_2045[2], sLocal_1566, "packer_idle_base_trevor", 3))
									{
										if ((MISC::GET_GAME_TIMER() - iLocal_1498) > 7500)
										{
											if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 523.937f, -1325.785f, 27.22119f, 509.3284f, -1302.509f, 33.19123f, 16f, 0, 1, 0))
											{
												if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_2045[2], PLAYER::PLAYER_PED_ID()))
												{
													if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_BACK", 7, 0, 0, 0))
													{
														TASK::TASK_LOOK_AT_ENTITY(iLocal_2045[2], PLAYER::PLAYER_PED_ID(), 3000, 2048, 2);
														iLocal_1497++;
														iLocal_1498 = MISC::GET_GAME_TIMER();
														if (iLocal_1497 == 3)
														{
															func_472("CST7_TREVHI", 1);
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
					if (!func_475("CST7_MONDMG"))
					{
						if (!func_475("CST7_LINEUP"))
						{
							if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_1631[0 /*19*/]))
							{
								if ((MISC::GET_GAME_TIMER() - iLocal_1500) > 5000)
								{
									if (func_475("CST7_CHAT1") || func_475("CST7_CHAT1b"))
									{
										if (GlobalFunc_111())
										{
											Local_1580 = { GlobalFunc_560() };
											if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_1580))
											{
												if (MISC::ARE_STRINGS_EQUAL(&Local_1580, "CST7_CHAT1") || MISC::ARE_STRINGS_EQUAL(&Local_1580, "CST7_CHAT1b"))
												{
													Local_1580 = { GlobalFunc_560() };
													cLocal_1586 = { GlobalFunc_514() };
													if (MISC::ARE_STRINGS_EQUAL(&cLocal_1586, "NULL"))
													{
														cLocal_1586 = { Local_1580 };
														StringConCat(&cLocal_1586, "_1", 24);
													}
													GlobalFunc_4956();
													iLocal_1579 = 1;
												}
											}
										}
									}
								}
							}
							if (iLocal_1579 == 1)
							{
								if (!func_475("CST7_DMG"))
								{
									if (!GlobalFunc_111())
									{
										if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_DMG", 7, 0, 0, 0))
										{
											func_472("CST7_DMG", 1);
											iLocal_1499++;
											iLocal_1500 = MISC::GET_GAME_TIMER();
											if (iLocal_1499 == 4)
											{
												func_472("CST7_MONDMG", 1);
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
					if (func_475("CST7_CHAT1") || func_475("CST7_CHAT1b"))
					{
						if (!GlobalFunc_620())
						{
							GlobalFunc_619(1);
						}
					}
					if (HUD::DOES_BLIP_EXIST(Local_1746.f_2))
					{
						HUD::REMOVE_BLIP(&(Local_1746.f_2));
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_1746.f_1))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1746.f_1, 1)) < (100f * 100f))
					{
						CUTSCENE::REQUEST_CUTSCENE("CAR_5_MCS_1", 8);
						func_24("CAR_5_MCS_1");
					}
				}
				break;
			
			case 51:
				if (!ENTITY::IS_ENTITY_DEAD(Local_1631[0 /*19*/]))
				{
					if (ENTITY::GET_ENTITY_SPEED(Local_1631[0 /*19*/]) < 0.5f)
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(Local_1631[0 /*19*/], 1f, 5, 0);
					}
				}
				if (!GlobalFunc_5172(&Local_1810, 1))
				{
					if (!func_475("CST7_LINEUP2"))
					{
						if (GlobalFunc_10618(&Local_2123, "CST7AUD", "CST7_LINEUP2", 7, 0, 0, 0))
						{
							func_472("CST7_LINEUP2", 1);
						}
					}
					else if (SYSTEM::TIMERB() > 1000)
					{
						iLocal_2042 = 2;
					}
				}
				break;
		}
		if (!iLocal_1371)
		{
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				iLocal_1371 = 1;
			}
		}
		else if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			iLocal_1371 = 0;
		}
		if (iLocal_1388 > 0)
		{
			if (!PED::IS_PED_INJURED(Local_1749.x))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1749.x, 1)) > 90000f)
				{
					func_724(13);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1631[0 /*19*/], 0))
		{
			if (iLocal_1388 > 0)
			{
				if (!func_632(Local_1517, fLocal_1510))
				{
					VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(468.4835f, -1336.439f, 27.2305f, 480.836f, -1334.431f, 38.2508f, 0, 1);
					MISC::CLEAR_AREA_OF_VEHICLES(Local_1517, 30f, 0, 0, 0, 0, 0);
				}
				func_349();
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2045[2]))
				{
					func_51(503.2f, -1345.4f, 29.9f, fLocal_1511);
					func_631();
				}
			}
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1631[0 /*19*/], 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_1746.f_1))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1746.f_1, -0.0617f, -15.5324f, -0.8495f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1746.f_1, 0.0877f, 1.9641f, 4.6127f), 3.75f, 0, 1, 0))
					{
						PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_2045[2]))
		{
			if (ENTITY::IS_ENTITY_VISIBLE(iLocal_2045[2]))
			{
				STREAMING::REQUEST_ANIM_DICT(sLocal_1566);
				if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_1566) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (iLocal_1457 == 0)
					{
						TASK::TASK_PLAY_ANIM(iLocal_2045[2], sLocal_1566, "packer_idle_base_trevor", 8f, -8f, -1, 1, 0, 0, 0, 0);
						iLocal_1457 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(-2000, 2000));
					}
					else if (!iLocal_1369)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_2045[2], -2017877118) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_2045[2], 242628503) != 1)
						{
							TASK::CLEAR_PED_TASKS(iLocal_2045[2]);
							iLocal_1369 = 1;
						}
						else
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_1457) > 10000 && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_2045[2], sLocal_1566, "packer_idle_base_trevor", 3))
							{
								iVar22 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
								TASK::OPEN_SEQUENCE_TASK(&uVar21);
								if (iVar22 == 0)
								{
									TASK::TASK_PLAY_ANIM(0, sLocal_1566, "packer_idle_1_trevor", 8f, -8f, -1, 262144, 0, 0, 0, 0);
								}
								else if (iVar22 == 1)
								{
									if (!iLocal_1379)
									{
										TASK::TASK_PLAY_ANIM(0, sLocal_1566, "packer_idle_2_trevor", 8f, -8f, -1, 262144, 0, 0, 0, 0);
									}
								}
								else if (iVar22 == 2)
								{
									TASK::TASK_PLAY_ANIM(0, sLocal_1566, "packer_idle_3_trevor", 8f, -8f, -1, 262144, 0, 0, 0, 0);
								}
								TASK::TASK_PLAY_ANIM(0, sLocal_1566, "packer_idle_base_trevor", 8f, -8f, -1, 262145, 0, 0, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uVar21);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_2045[2], uVar21);
								TASK::CLEAR_SEQUENCE_TASK(&uVar21);
								iLocal_1457 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(-2000, 2000));
							}
							if (!iLocal_1379)
							{
								if (func_475("CST7_TREVHI"))
								{
									TASK::OPEN_SEQUENCE_TASK(&uVar23);
									TASK::TASK_PLAY_ANIM(0, sLocal_1566, "packer_idle_4_trevor", 8f, -8f, -1, 262144, 0, 0, 0, 0);
									TASK::TASK_PLAY_ANIM(0, sLocal_1566, "packer_idle_base_trevor", 8f, -8f, -1, 262145, 0, 0, 0, 0);
									TASK::CLOSE_SEQUENCE_TASK(uVar23);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_2045[2], uVar23);
									TASK::CLEAR_SEQUENCE_TASK(&uVar23);
									iLocal_1379 = 1;
								}
							}
						}
					}
					else if (SYSTEM::VDIST2(Local_1523, ENTITY::GET_ENTITY_COORDS(iLocal_2045[2], 1)) > 2f)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_2045[2], 242628503) != 1)
						{
							TASK::OPEN_SEQUENCE_TASK(&uVar24);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1523, 1f, 20000, 0.25f, 0, 1193033728);
							TASK::TASK_TURN_PED_TO_FACE_COORD(0, 512.32f, -1316.91f, 30.32f, 0);
							TASK::CLOSE_SEQUENCE_TASK(uVar24);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_2045[2], uVar24);
							TASK::CLEAR_SEQUENCE_TASK(&uVar24);
						}
					}
				}
			}
			else if (!ENTITY::IS_ENTITY_DEAD(Local_1746.x))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_2045[2], 1);
				ENTITY::SET_ENTITY_COLLISION(iLocal_2045[2], 1, 0);
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_2045[2], 0);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_2045[2], 0);
				ENTITY::SET_ENTITY_COORDS(iLocal_2045[2], 519.93f, -1327.7f, 28.31f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_2045[2], 51f);
			}
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_1746.x))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1746.x, 1)) < 2500f)
				{
					func_724(23);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_1631[0 /*19*/]))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1631[0 /*19*/], 1)) < 2500f)
				{
					func_724(20);
				}
			}
		}
	}
	if (iLocal_2042 == 2)
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(1);
		GlobalFunc_5652(&Local_1810, 1, 0);
		func_413();
		GlobalFunc_4956();
		STREAMING::REMOVE_ANIM_DICT(sLocal_1572);
		iLocal_2042 = 0;
		iLocal_2041 = 2;
	}
	if (iLocal_2042 == 3)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1631[0 /*19*/], 0))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1631[0 /*19*/], 0))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1631[0 /*19*/], -1);
			}
			if (!PED::IS_PED_INJURED(Local_1749.x) && !PED::IS_PED_IN_VEHICLE(Local_1749.x, Local_1631[0 /*19*/], 0))
			{
				PED::SET_PED_INTO_VEHICLE(Local_1749.x, Local_1631[0 /*19*/], 0);
			}
			ENTITY::FREEZE_ENTITY_POSITION(Local_1631[0 /*19*/], 0);
			if (iLocal_1388 >= 2)
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1631[0 /*19*/], Local_1520, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_1631[0 /*19*/], fLocal_1510);
			}
		}
		iLocal_2042 = 1;
	}
}

int func_631()//Position - 0x67FA4
{
	if (!PED::IS_PED_INJURED(iLocal_2045[2]))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_2045[2], 0);
		ENTITY::SET_ENTITY_COLLISION(iLocal_2045[2], 0, 0);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_2045[2], 1);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_2045[2], 1);
		return 1;
	}
	return 0;
}

int func_632(struct<3> Param0, float fParam3)//Position - 0x67FEC
{
	int iVar0;
	
	iVar0 = 0;
	if (func_353(Param0, fParam3))
	{
		switch (iLocal_1455)
		{
			case 0:
				if (!ENTITY::IS_ENTITY_DEAD(Local_1746.f_1) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1746.x, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_1746.f_1, 0);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1746.f_1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1746.x, -0.00281182f, -9.76194f, 0.332852f), 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_1746.f_1, fParam3);
					iLocal_1456 = MISC::GET_GAME_TIMER();
					iLocal_1455++;
				}
				break;
			
			case 1:
				if ((MISC::GET_GAME_TIMER() - iLocal_1456) > 500)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_1746.f_1))
					{
						if (!ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(Local_1746.f_1) && ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_1746.f_1))
						{
							VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_1746.x, Local_1746.f_1, 1065353216);
							VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1746.f_1, 5, 0, 0);
							iLocal_1456 = MISC::GET_GAME_TIMER();
							iLocal_1455++;
						}
					}
				}
				break;
			
			case 2:
				if ((MISC::GET_GAME_TIMER() - iLocal_1456) > 1000)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_1746.f_1) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1746.x, 0))
					{
						if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1746.f_1, 1)) < 2500f && !ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(Local_1746.f_1)) && ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_1746.f_1))
						{
							iVar0 = 0;
							while (iVar0 < Local_1631)
							{
								if (iVar0 != 0)
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1631[iVar0 /*19*/], 0))
									{
										VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1631[iVar0 /*19*/], 0);
									}
								}
								iVar0++;
							}
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1746.x, 0);
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1746.f_1, 0);
							iLocal_1455++;
						}
					}
				}
				break;
			
			case 3:
				return 1;
				break;
			}
	}
	return 0;
}















































int func_679(struct<3> Param0, float fParam3)//Position - 0x6B4F5
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1631[0 /*19*/]))
	{
		STREAMING::REQUEST_MODEL(Local_1631[0 /*19*/].f_18);
		if (STREAMING::HAS_MODEL_LOADED(Local_1631[0 /*19*/].f_18))
		{
			MISC::CLEAR_AREA(Param0, 22f, 1, 0, 0, 0);
			Local_1631[0 /*19*/] = func_351(Local_1631[0 /*19*/].f_18, Param0, fParam3);
			GlobalFunc_743(Local_1631[0 /*19*/], 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1631[0 /*19*/].f_18);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_680()//Position - 0x6B572
{
	if (iLocal_2042 == 0)
	{
		if (iLocal_1362)
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -62.8697f, -1457.641f, 31.1163f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 111.782f);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
			STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			SYSTEM::WAIT(0);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			func_625();
			iLocal_1362 = 0;
		}
		else
		{
			GlobalFunc_2204();
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 30f);
			iLocal_1384 = 0;
			iLocal_1388 = 0;
			iLocal_2042 = 1;
		}
	}
	if (iLocal_2042 == 1)
	{
		switch (iLocal_1388)
		{
			case 0:
				switch (GlobalFunc_8315())
				{
					case 1:
						if (!func_475("CST7_LAMPH"))
						{
							func_357();
							GlobalFunc_173(&Local_2123, 5, 0, "LAMAR", 0, 1);
							if (GlobalFunc_10664(&Local_2123, 19, "CST7AUD", "CST7_LAMPH", 7, 0, 0, 1))
							{
								func_472("CST7_LAMPH", 1);
							}
						}
						else if (!GlobalFunc_111())
						{
							if ((!AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() && !GlobalFunc_665(19)) && !GlobalFunc_889(19))
							{
								iLocal_1388 = 0;
								iLocal_2042 = 2;
							}
						}
						else if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -210.6681f, -1358.643f, 30.261f, 1) <= 65f)
						{
							GlobalFunc_6685(0);
						}
						break;
					
					case 2:
						if (!func_475("CST7_LAMPH2"))
						{
							func_357();
							GlobalFunc_173(&Local_2123, 5, 0, "LAMAR", 0, 1);
							if (GlobalFunc_10664(&Local_2123, 19, "CST7AUD", "CST7_LAMPH2", 7, 0, 0, 1))
							{
								func_472("CST7_LAMPH2", 1);
							}
						}
						else if (!GlobalFunc_111())
						{
							if ((!AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() && !GlobalFunc_665(19)) && !GlobalFunc_889(19))
							{
								iLocal_1388++;
							}
						}
						break;
				}
				break;
			
			case 1:
				switch (GlobalFunc_8315())
				{
					case 1:
						break;
					
					case 2:
						VEHICLE::REQUEST_VEHICLE_RECORDING(900, sLocal_1563);
						if ((VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(900, sLocal_1563) && func_623(-951.4235f, -1234.18f, 4.2849f, 299.6498f)) && GlobalFunc_9756(&iLocal_1606, 1, -952.6679f, -1229.871f, 4.3307f, 298.613f, 1, 1))
						{
							if (!PED::IS_PED_INJURED(iLocal_2045[1]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1606, 0))
							{
								CAM::DESTROY_ALL_CAMS(0);
								uLocal_1594 = CAM::CREATE_CAMERA(26379945, 0);
								CAM::SET_CAM_PARAMS(uLocal_1594, -940.1711f, -1224.301f, 27.47961f, -89.28317f, -0.029118f, -60.13877f, 44.4f, 0, 1, 1, 2);
								PED::SET_PED_INTO_VEHICLE(iLocal_2045[1], iLocal_1606, -1);
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_1606, 900, sLocal_1563, 1);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_1606, 3000f);
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_1606, 1);
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_1606, 0f);
								GlobalFunc_9019(&iLocal_2045, 1);
								Local_2089.f_12 = iLocal_2045[iLocal_2045.f_7];
								iLocal_1388++;
							}
						}
						break;
				}
				break;
			
			case 2:
				if (func_682(&Local_2089, uLocal_1594, 1, 0, 1148829696, 1148829696, 0, 0, 0, 2))
				{
					if (!iLocal_1384)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1606, 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1606))
							{
								if (STREAMING::GET_PLAYER_SWITCH_STATE() == 8 && STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() == 0)
								{
									MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_1606, 1), 50f, 1, 0, 0, 0);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_1606, (1500f - VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1606)));
									VEHICLE::SET_PLAYBACK_SPEED(iLocal_1606, 0.7f);
									iLocal_1384 = 1;
								}
							}
						}
					}
					if (Local_2089.f_18)
					{
						if (!Local_2089.f_19)
						{
							if (func_361(&iLocal_2045, 1, 1, 0))
							{
								Local_2089.f_19 = 1;
							}
						}
					}
					if (!iLocal_1385)
					{
						if (STREAMING::GET_PLAYER_SWITCH_STATE() == 9)
						{
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_1606, (3000f - VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1606)));
							iLocal_1385 = 1;
						}
					}
				}
				else if ((!GlobalFunc_579() && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && !GlobalFunc_236())
				{
					if (GlobalFunc_8315() == 1)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1606, 0))
						{
							VEHICLE::REMOVE_VEHICLE_RECORDING(900, sLocal_1563);
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1606);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_1606, ENTITY::GET_ENTITY_SPEED(iLocal_1606));
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1606);
						}
					}
					func_7(&(iLocal_2045[2]), 1, 0);
					iLocal_1388 = 0;
					iLocal_2042 = 2;
				}
				break;
			}
	}
	if (iLocal_2042 == 2)
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(1);
		GlobalFunc_5652(&Local_1810, 1, 0);
		func_413();
		GlobalFunc_4956();
		iLocal_2042 = 0;
		iLocal_2041 = 1;
	}
}


int func_682(var uParam0, var uParam1, int iParam2, int iParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x6BA0D
{
	return func_683(uParam0, uParam1, iParam2, iParam3, fParam4, fParam5, bParam6, bParam7, iParam8, iParam9, 0, 0, 0);
	return 1;
}

int func_683(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, char* sParam8, var uParam9, bool bParam10, bool bParam11, int iParam12)//Position - 0x6BA34
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
				if (CAM::DOES_CAM_EXIST(uParam1) || !MISC::IS_STRING_NULL_OR_EMPTY(uParam8))
				{
					iVar0 |= 2;
				}
				if (GlobalFunc_268())
				{
					iVar0 |= 1;
				}
				if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					STREAMING::START_PLAYER_SWITCH(uParam0->f_13, uParam0->f_12, iVar0, uParam2);
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
				if (CAM::DOES_CAM_EXIST(uParam1))
				{
					if (STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(ENTITY::GET_ENTITY_COORDS(uParam0->f_13, 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_12, 1)) != 3)
					{
						STREAMING::SET_PLAYER_SWITCH_OUTRO(CAM::GET_CAM_COORD(uParam1), CAM::GET_CAM_ROT(uParam1, uParam9), CAM::GET_CAM_FOV(uParam1), CAM::GET_CAM_FAR_CLIP(uParam1), uParam9);
					}
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					STREAMING::SET_PLAYER_SWITCH_ESTABLISHING_SHOT(sParam8);
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







































bool func_722()//Position - 0x6FD40
{
	return Global_67138.f_138;
}


void func_724(int iParam0)//Position - 0x6FDA8
{
	if (!bLocal_1366)
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(1);
		func_413();
		GlobalFunc_5652(&Local_1810, 1, 0);
		GlobalFunc_5810(&uLocal_1835);
		GlobalFunc_4935();
		if (iLocal_1364)
		{
			HUD::SET_GPS_MULTI_ROUTE_RENDER(0);
			HUD::CLEAR_GPS_MULTI_ROUTE();
			iLocal_1364 = 0;
		}
		if (!PED::IS_PED_INJURED(iLocal_1622))
		{
			TASK::TASK_SMART_FLEE_COORD(iLocal_1622, ENTITY::GET_ENTITY_COORDS(iLocal_1622, 1), 500f, -1, 0, 0);
			PED::SET_PED_KEEP_TASK(iLocal_1622, true);
		}
		switch (iParam0)
		{
			case 0:
				sLocal_1567 = "";
				break;
			
			case 3:
				sLocal_1567 = "CH_CARDEAD";
				break;
			
			case 6:
				sLocal_1567 = "CH_CARSDEAD";
				break;
			
			case 5:
				sLocal_1567 = "CH_CARSDEAD2";
				break;
			
			case 4:
				sLocal_1567 = "CH_TRUCKDEAD";
				break;
			
			case 1:
				sLocal_1567 = "CMN_FDIED";
				break;
			
			case 2:
				sLocal_1567 = "CMN_TDIED";
				break;
			
			case 7:
				sLocal_1567 = "CH_STUCK";
				break;
			
			case 8:
				sLocal_1567 = "CH_STUCK2";
				break;
			
			case 9:
				sLocal_1567 = "CH_TRAILFAIL";
				break;
			
			case 11:
				sLocal_1567 = "CMN_FLEFT";
				break;
			
			case 12:
				sLocal_1567 = "CH_LAMDEAD";
				break;
			
			case 13:
				sLocal_1567 = "CH_LAMLEFT";
				break;
			
			case 14:
				sLocal_1567 = "CMN_TLEFT";
				break;
			
			case 15:
				sLocal_1567 = "CH_TLLEFT";
				break;
			
			case 16:
				sLocal_1567 = "CH_FLLEFT";
				break;
			
			case 17:
				sLocal_1567 = "CH_MOLDEAD";
				break;
			
			case 18:
				sLocal_1567 = "CH_MLEFT";
				break;
			
			case 19:
				sLocal_1567 = "CH_COPFAIL3";
				break;
			
			case 21:
				sLocal_1567 = "CH_MOLCDEAD";
				break;
			
			case 22:
				sLocal_1567 = "CH_TRAILFAIL";
				break;
			
			case 23:
				sLocal_1567 = "CH_COPFAIL4";
				break;
			
			case 20:
				sLocal_1567 = "CH_COPFAIL2";
				break;
			
			case 24:
				sLocal_1567 = "CH_FELLFAIL";
				break;
			
			case 25:
				sLocal_1567 = "CH_CARABAN";
				break;
			
			case 10:
				sLocal_1567 = "CH_TRABAN";
				break;
			
			case 26:
				sLocal_1567 = "CH_MSPOOK";
				break;
			}
	}
	AUDIO::TRIGGER_MUSIC_EVENT("CAR4_MISSION_FAIL");
	GlobalFunc_10835(sLocal_1567);
	while (!GlobalFunc_145())
	{
		SYSTEM::WAIT(0);
	}
	func_725(iLocal_2045[1]);
	func_725(iLocal_2045[2]);
	func_725(Local_1749.x);
	GlobalFunc_7621(8, 1, 0, 1, 0);
	GlobalFunc_7621(9, 1, 0, 1, 0);
	GlobalFunc_7621(10, 1, 0, 1, 0);
	GlobalFunc_7621(7, 1, 0, 1, 0);
	func_782();
}

void func_725(int iParam0)//Position - 0x70050
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_GROUP_MEMBER(iParam0, GlobalFunc_468()) || GlobalFunc_2227(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			func_7(&iParam0, 1, 0);
		}
	}
}




















































void func_777(int iParam0, bool bParam1)//Position - 0x79A2C
{
	func_627(0);
	iLocal_1362 = 1;
	iLocal_1388 = 0;
	iLocal_2041 = iParam0;
	iLocal_2042 = 0;
	func_782();
	if (bParam1)
	{
		if (iLocal_2041 >= 5)
		{
			GlobalFunc_Checkpoint7(4, "LOSE_COPS", 1, 0, 0, 1);
		}
		else if (iLocal_2041 >= 4)
		{
			GlobalFunc_Checkpoint7(3, "COPS_ARRIVE", 0, 0, 0, 1);
		}
		else if (iLocal_2041 >= 3)
		{
			GlobalFunc_Checkpoint7(2, "GO_TO_GAS_STATION", 0, 0, 0, 1);
		}
		else
		{
			GlobalFunc_Checkpoint7(0, "COLLECT_FINAL_CAR", 0, 0, 0, 1);
		}
	}
	if (iParam0 >= 3)
	{
		GlobalFunc_7621(8, 0, 0, 1, 0);
		GlobalFunc_7621(9, 0, 0, 1, 0);
		GlobalFunc_7621(10, 0, 0, 1, 0);
		GlobalFunc_7621(7, 0, 0, 1, 0);
	}
}



void func_780()//Position - 0x79B24
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	}
	HUD::CLEAR_HELP(1);
	HUD::CLEAR_PRINTS();
	PAD::_SWITCH_TO_INPUT_MAPPING_SCHEME("Carsteal5_spycar_crane");
	HUD::REQUEST_ADDITIONAL_TEXT("H4HEIST", 0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, 1862763509);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), 1862763509);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(585.5f, -2645.5f, 1.6f, 600f, -2610.9f, 10.6f, 0, 1);
	GlobalFunc_173(&Local_2123, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	func_625();
	GlobalFunc_696();
	GlobalFunc_2224(1);
	GlobalFunc_8523(39, 1);
	GlobalFunc_8523(40, 1);
	GlobalFunc_8523(41, 1);
	GlobalFunc_8523(42, 1);
	GlobalFunc_8523(43, 1);
	func_490(&Local_1994);
	iLocal_3585 = AUDIO::GET_SOUND_ID();
	MISC::SET_STUNT_JUMPS_CAN_TRIGGER(0);
}


void func_782()//Position - 0x79C0A
{
	HUD::CLEAR_HELP(1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
	PED::SET_CREATE_RANDOM_COPS(1);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	MISC::ENABLE_DISPATCH_SERVICE(3, 1);
	MISC::ENABLE_DISPATCH_SERVICE(1, 1);
	MISC::ENABLE_DISPATCH_SERVICE(8, 1);
	MISC::ENABLE_DISPATCH_SERVICE(10, 1);
	MISC::ENABLE_DISPATCH_SERVICE(9, 1);
	MISC::ENABLE_DISPATCH_SERVICE(2, 1);
	MISC::ENABLE_DISPATCH_SERVICE(6, 1);
	MISC::ENABLE_DISPATCH_SERVICE(5, 1);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(2, 0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(8, 0);
	VEHICLE::SET_RANDOM_TRAINS(1);
	WEAPON::ENABLE_LASER_SIGHT_RENDERING(1);
	GlobalFunc_9132(0);
	GlobalFunc_563(0);
	MISC::RESET_DISPATCH_SPAWN_BLOCKING_AREAS();
	VEHICLE::_0xB264C4D2F2B0A78B(1);
	GRAPHICS::_0x54E22EA2C1956A8D(1f);
	AUDIO::TRIGGER_MUSIC_EVENT("CAR4_MISSION_FAIL");
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
			}
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), 0);
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
		WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 0);
		PED::SET_PED_CAN_RAGDOLL(PLAYER::PLAYER_PED_ID(), 1);
		PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, 0);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 230, 1);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		if (iLocal_1362)
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		}
	}
	else if (!PED::IS_PED_INJURED(iLocal_1622))
	{
		TASK::TASK_SMART_FLEE_COORD(iLocal_1622, ENTITY::GET_ENTITY_COORDS(iLocal_1622, 1), 500f, -1, 0, 0);
		PED::SET_PED_KEEP_TASK(iLocal_1622, true);
	}
	if (!CUTSCENE::HAS_CUTSCENE_FINISHED())
	{
		CUTSCENE::STOP_CUTSCENE(0);
	}
	CUTSCENE::REMOVE_CUTSCENE();
	if (iLocal_1362)
	{
		while (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			SYSTEM::WAIT(0);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_1746.f_1))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1746.f_1, 1);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1746.f_1, 1);
	}
	STREAMING::REMOVE_ANIM_DICT("map_objects");
	STREAMING::REMOVE_ANIM_DICT(sLocal_1569);
	STREAMING::REMOVE_ANIM_DICT(sLocal_1568);
	STREAMING::REMOVE_ANIM_DICT(sLocal_1572);
	STREAMING::REMOVE_ANIM_DICT(sLocal_1570);
	STREAMING::REMOVE_ANIM_DICT(sLocal_1571);
	STREAMING::REMOVE_ANIM_DICT(sLocal_1575);
	STREAMING::REMOVE_ANIM_DICT(sLocal_1576);
	STREAMING::REMOVE_ANIM_DICT(sLocal_1577);
	STREAMING::REMOVE_ANIM_DICT(sLocal_1574);
	VEHICLE::REMOVE_VEHICLE_ASSET(iLocal_2032);
	AUDIO::STOP_AUDIO_SCENES();
	AUDIO::SET_AUDIO_FLAG("ForceSeamlessRadioSwitch", 0);
	AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", 0);
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CAR_THEFT_FINALE");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("Crane");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("Crane_Impact_Sweeteners");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("Crane_Stress");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("JWL_HEIST_CAR_SMASHES_BIG");
	AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
	HUD::SET_GPS_MULTI_ROUTE_RENDER(0);
	HUD::CLEAR_GPS_MULTI_ROUTE();
	STREAMING::REMOVE_PTFX_ASSET();
	GlobalFunc_4935();
	func_789(iLocal_1362, 1);
	GlobalFunc_200(&Local_2123, 2);
	GlobalFunc_504(0, -1);
	func_413();
	func_788();
	func_787(iLocal_1362);
	func_786(iLocal_1362);
	func_785(iLocal_1362);
	GlobalFunc_8316(0, 1, 1, 0);
	func_9(&Local_1994);
	GlobalFunc_2538(&iLocal_2045);
	GlobalFunc_4948(&uLocal_2288, 0, 0);
	if (iLocal_1363)
	{
		PLAYER::ASSISTED_MOVEMENT_FLUSH_ROUTE();
		PLAYER::ASSISTED_MOVEMENT_CLOSE_ROUTE();
		iLocal_1363 = 0;
	}
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(491.9493f, -1421.738f, 10.2604f, 563.2618f, -1267.808f, 40.3393f, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(468.4835f, -1336.439f, 27.2305f, 480.836f, -1334.431f, 38.2508f, 1, 1);
	func_34(0);
	if (bLocal_1374)
	{
		MISC::_CLEAR_CLOUD_HAT();
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
	}
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	AUDIO::STOP_SOUND(iLocal_3585);
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CAR_STEAL_4");
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3604))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_3604, 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3604))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_3604, 0);
	}
	if (!iLocal_1362)
	{
		GlobalFunc_7621(60, 0, 0, 1, 0);
		GlobalFunc_2224(0);
		GlobalFunc_8523(39, 0);
		GlobalFunc_8523(40, 0);
		GlobalFunc_8523(41, 0);
		GlobalFunc_8523(42, 0);
		GlobalFunc_8523(43, 0);
		GlobalFunc_5105();
		GlobalFunc_699();
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(585.5f, -2645.5f, 1.6f, 600f, -2610.9f, 10.6f, 1, 1);
		func_45(0);
		PAD::_RESET_INPUT_MAPPING_SCHEME();
		MISC::SET_STUNT_JUMPS_CAN_TRIGGER(1);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	else
	{
		func_783();
		GlobalFunc_5652(&Local_1810, 1, 0);
		GlobalFunc_5810(&uLocal_1835);
		func_625();
		HUD::CLEAR_PRINTS();
		GlobalFunc_4956();
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2035);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2036);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2040);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2037);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2038);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2039);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2034);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2033);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2032);
		VEHICLE::REMOVE_VEHICLE_RECORDING(100, sLocal_1563);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 2);
		MISC::CLEAR_AREA(0f, 0f, 0f, 10000f, 1, 0, 0, 0);
		bLocal_1373 = false;
	}
}

void func_783()//Position - 0x7A09E
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_1391;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iLocal_1391[iVar1] = 0;
		iVar1++;
	}
}


void func_785(bool bParam0)//Position - 0x7A0E5
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_1631)
	{
		if (bParam0)
		{
			func_6(&(Local_1631[iVar0 /*19*/]), bParam0, 1);
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1631[iVar0 /*19*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_1611)
	{
		func_6(&(iLocal_1611[iVar0]), bParam0, 1);
		iVar0++;
	}
	func_6(&Local_1746, bParam0, 0);
	func_6(&(Local_1746.f_1), bParam0, 0);
	func_6(&uLocal_1607, bParam0, 1);
}

void func_786(bool bParam0)//Position - 0x7A167
{
	int iVar0;
	
	func_7(&(iLocal_2045[1]), bParam0, 0);
	func_7(&(iLocal_2045[2]), bParam0, 0);
	func_7(&Local_1749, bParam0, 0);
	func_7(&iLocal_1620, 1, 0);
	func_7(&iLocal_1621, bParam0, 0);
	func_7(&uLocal_1619, bParam0, 0);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_1753)
	{
		func_7(&(Local_1753[iVar0 /*4*/]), bParam0, 1);
		iVar0++;
	}
}

void func_787(bool bParam0)//Position - 0x7A1D5
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_1598)
	{
		GlobalFunc_2537(&(iLocal_1598[iVar0]), bParam0);
		iVar0++;
	}
}

void func_788()//Position - 0x7A201
{
	bool bVar0;
	
	bVar0 = false;
	if (CAM::DOES_CAM_EXIST(uLocal_1595))
	{
		if (CAM::IS_CAM_RENDERING(uLocal_1595))
		{
			bVar0 = true;
		}
		CAM::DESTROY_CAM(uLocal_1595, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_1597))
	{
		if (CAM::IS_CAM_RENDERING(uLocal_1597))
		{
			bVar0 = true;
		}
		CAM::DESTROY_CAM(uLocal_1597, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_1596))
	{
		if (CAM::IS_CAM_RENDERING(uLocal_1596))
		{
			bVar0 = true;
		}
		CAM::DESTROY_CAM(uLocal_1596, 0);
	}
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	if (bVar0)
	{
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	}
}

void func_789(bool bParam0, bool bParam1)//Position - 0x7A284
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&uLocal_1116))
	{
		iLocal_64 = 0;
		GlobalFunc_2214();
		PED::REMOVE_RELATIONSHIP_GROUP(uLocal_1132);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
			PED::SET_CREATE_RANDOM_COPS(1);
		}
		if (bLocal_80)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_803());
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2213());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2212());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2211());
		if (!CAM::IS_SCREEN_FADED_OUT() && !bParam0)
		{
			func_799();
			func_798();
			func_795();
		}
		else
		{
			func_791();
			func_790();
		}
		if (bParam1)
		{
			GlobalFunc_9132(0);
		}
	}
}

void func_790()//Position - 0x7A340
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 60)
	{
		iLocal_1229[iVar0] = 0;
		Local_816[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_82[iVar0] = 0f;
		fLocal_143[iVar0] = 0f;
		fLocal_204[iVar0] = 0f;
		fLocal_265[iVar0] = 0f;
		iLocal_562[iVar0] = 0;
		fLocal_326[iVar0] = 0f;
		iLocal_623[iVar0] = 0;
		iLocal_1133[iVar0] = 0;
		iLocal_684[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		iLocal_1290[iVar0] = 0;
		iVar0++;
	}
	iLocal_799 = 0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iLocal_1303[iVar0] = 0;
		Local_997[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_457[iVar0] = 0f;
		fLocal_478[iVar0] = 0f;
		fLocal_499[iVar0] = 0f;
		fLocal_520[iVar0] = 0f;
		iLocal_778[iVar0] = 0;
		iLocal_1194[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_1335[iVar0] = 0;
		iVar0++;
	}
	iLocal_801 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_1324[iVar0] = 0;
		Local_1058[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_391[iVar0] = 0f;
		fLocal_402[iVar0] = 0f;
		fLocal_413[iVar0] = 0f;
		fLocal_424[iVar0] = 0f;
		iLocal_745[iVar0] = 0;
		fLocal_435[iVar0] = 0f;
		iLocal_756[iVar0] = 0;
		iLocal_1215[iVar0] = 0;
		iLocal_767[iVar0] = 0;
		iVar0++;
	}
	iLocal_800 = 0;
	iLocal_803 = 0;
	iLocal_806 = 0;
	iLocal_807 = 0;
	iLocal_808 = 0;
}

void func_791()//Position - 0x7A4CC
{
	func_794();
	func_793();
	func_792();
}

void func_792()//Position - 0x7A4E0
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1324[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1324[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1324[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1324[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1324[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_1324[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_1324[iVar0]));
			}
		}
		iLocal_756[iVar0] = 0;
		if (!bLocal_60 && !bLocal_73)
		{
			if (iLocal_745[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_745[iVar0], &uLocal_1116);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!iLocal_1215[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1215[iVar0]);
		}
		iVar0++;
	}
}

void func_793()//Position - 0x7A5D6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1303[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_1303[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_1303[iVar0]));
			}
		}
		iLocal_778[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!iLocal_1194[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1194[iVar0]);
		}
		iVar0++;
	}
	iLocal_804 = 0;
	iLocal_801 = 0;
}

void func_794()//Position - 0x7A653
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1229[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1229[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1229[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1229[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1229[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_1229[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_1229[iVar0]));
			}
		}
		if (!bLocal_60 && !bLocal_73)
		{
			if (iLocal_562[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_562[iVar0], &uLocal_1116);
			}
		}
		iLocal_623[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!iLocal_1133[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1133[iVar0]);
		}
		iVar0++;
	}
	iLocal_803 = 0;
	iLocal_799 = 0;
}

void func_795()//Position - 0x7A751
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1324[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1324[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1324[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1324[iVar0]);
				}
			}
			func_797(iLocal_1324[iVar0]);
			GlobalFunc_2210(iLocal_1324[iVar0]);
		}
		iLocal_756[iVar0] = 0;
		iLocal_767[iVar0] = 0;
		if (!bLocal_60 && !bLocal_73)
		{
			if (iLocal_745[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_745[iVar0], &uLocal_1116);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!iLocal_1215[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1215[iVar0]);
		}
		iVar0++;
	}
	iLocal_805 = 0;
}


void func_797(int iParam0)//Position - 0x7A835
{
	float fVar0;
	int iVar1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
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

void func_798()//Position - 0x7A8CE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1303[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1303[iVar0]))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_1303[iVar0], 1, 0);
			}
			GlobalFunc_2210(iLocal_1303[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!iLocal_1194[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1194[iVar0]);
		}
		iVar0++;
	}
	iLocal_804 = 0;
	iLocal_801 = 0;
}

void func_799()//Position - 0x7A951
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1229[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1229[iVar0]))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_1229[iVar0], 1, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1229[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1229[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1229[iVar0]);
				}
			}
			func_797(iLocal_1229[iVar0]);
			GlobalFunc_2210(iLocal_1229[iVar0]);
		}
		iLocal_623[iVar0] = 0;
		iLocal_684[iVar0] = 0;
		if (!bLocal_60 && !bLocal_73)
		{
			if (iLocal_562[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_562[iVar0], &uLocal_1116);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!iLocal_1133[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1133[iVar0]);
		}
		iVar0++;
	}
	iLocal_803 = 0;
	iLocal_799 = 0;
}




int func_803()//Position - 0x7AA65
{
	if (iLocal_1226 == 0)
	{
		return joaat("a_m_y_business_01");
	}
	return iLocal_1226;
}





