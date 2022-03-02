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
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	struct<3> Local_62 = { 0, 0, 0 } ;
	struct<3> Local_65 = { 0, 0, 0 } ;
	int iLocal_68 = 0;
	var uLocal_69 = 0;
	bool bLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	struct<3> Local_79 = { 0, 0, 0 } ;
	struct<3> Local_82 = { 0, 0, 0 } ;
	struct<3> Local_85 = { 0, 0, 0 } ;
	float fLocal_88 = 0f;
	struct<3> Local_89 = { 0, 0, 0 } ;
	struct<3> Local_92 = { 0, 0, 0 } ;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	bool bLocal_101 = 0;
	bool bLocal_102 = 0;
	bool bLocal_103 = 0;
	bool bLocal_104 = 0;
	bool bLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	bool bLocal_108 = 0;
	bool bLocal_109 = 0;
	int iLocal_110 = 0;
	bool bLocal_111 = 0;
	bool bLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	var uLocal_116 = 0;
	bool bLocal_117 = 0;
	bool bLocal_118 = 0;
	bool bLocal_119 = 0;
	int iLocal_120 = 0;
	bool bLocal_121 = 0;
	var uLocal_122 = 0;
	bool bLocal_123 = 0;
	bool bLocal_124 = 0;
	bool bLocal_125 = 0;
	bool bLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	bool bLocal_129 = 0;
	bool bLocal_130 = 0;
	bool bLocal_131 = 0;
	bool bLocal_132 = 0;
	float fLocal_133[36] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_170[36] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_207[36] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_244[36] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_281[36] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	float fLocal_322[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_358[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_394[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_430[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_466[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_502[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_538[17] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_556[17] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_574[17] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_592[17] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_610 = 0f;
	float fLocal_611 = 0f;
	float fLocal_612 = 0f;
	float fLocal_613 = 0f;
	float fLocal_614 = 0f;
	float fLocal_615 = 0f;
	float fLocal_616 = 0f;
	float fLocal_617 = 0f;
	float fLocal_618 = 0f;
	float fLocal_619 = 0f;
	float fLocal_620 = 0f;
	float fLocal_621 = 0f;
	float fLocal_622 = 0f;
	float fLocal_623 = 0f;
	float fLocal_624 = 0f;
	float fLocal_625 = 0f;
	float fLocal_626 = 0f;
	float fLocal_627 = 0f;
	float fLocal_628 = 0f;
	float fLocal_629 = 0f;
	float fLocal_630 = 0f;
	int iLocal_631[36] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_668[36] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_705[36] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_742[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_778[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_814[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_850[17] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_868 = 0;
	int iLocal_869 = 0;
	int iLocal_870 = 0;
	int iLocal_871 = 0;
	int iLocal_872 = 0;
	int iLocal_873 = 0;
	int iLocal_874 = 0;
	int iLocal_875 = 0;
	int iLocal_876 = 0;
	int iLocal_877 = 0;
	int iLocal_878 = 0;
	int iLocal_879 = 0;
	int iLocal_880 = 0;
	int iLocal_881 = 0;
	int iLocal_882 = 0;
	int iLocal_883 = 0;
	int iLocal_884 = 0;
	struct<3> Local_885[36];
	struct<3> Local_994[17];
	struct<3> Local_1046[35];
	struct<3> Local_1152 = { 0, 0, 0 } ;
	struct<3> Local_1155 = { 0, 0, 0 } ;
	struct<3> Local_1158 = { 0, 0, 0 } ;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	struct<3> Local_1167 = { 0, 0, 0 } ;
	struct<3> Local_1170 = { 0, 0, 0 } ;
	struct<3> Local_1173 = { 0, 0, 0 } ;
	struct<3> Local_1176 = { 0, 0, 0 } ;
	char cLocal_1179[64] = "";
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	int iLocal_1195 = 0;
	int iLocal_1196[36] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1233[17] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1251[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1287 = 0;
	int iLocal_1288 = 0;
	int iLocal_1289 = 0;
	int iLocal_1290[36] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1327[28] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1356[17] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1374[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1410[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1427 = 0;
	int iLocal_1428 = 0;
	int iLocal_1429 = 0;
	var uLocal_1430 = 28;
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
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	float fLocal_1459 = 0f;
	float fLocal_1460 = 0f;
	float fLocal_1461 = 0f;
	float fLocal_1462 = 0f;
	float fLocal_1463 = 0f;
	int iLocal_1464 = 0;
	int iLocal_1465[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1501 = 0;
	int iLocal_1502 = 0;
	int iLocal_1503 = 0;
	int iLocal_1504 = 0;
	int iLocal_1505 = 0;
	int iLocal_1506 = 0;
	int iLocal_1507 = 0;
	int iLocal_1508 = 0;
	int iLocal_1509 = 0;
	int iLocal_1510 = 0;
	int iLocal_1511 = 0;
	int iLocal_1512 = 0;
	int iLocal_1513 = 0;
	int iLocal_1514 = 0;
	int iLocal_1515 = 0;
	int iLocal_1516 = 0;
	var uLocal_1517 = 0;
	int iLocal_1518 = 0;
	int iLocal_1519 = 0;
	int iLocal_1520 = 0;
	int iLocal_1521 = 0;
	int iLocal_1522 = 0;
	struct<2> Local_1523 = { 0, 0 } ;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	struct<2> Local_1527 = { 0, 0 } ;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	int iLocal_1531 = 0;
	struct<6> Local_1532[4];
	int iLocal_1557 = 0;
	struct<3> Local_1558 = { 0, 0, 0 } ;
	struct<3> Local_1561 = { 0, 0, 0 } ;
	struct<3> Local_1564 = { 0, 0, 0 } ;
	struct<3> Local_1567 = { 0, 0, 0 } ;
	struct<3> Local_1570[3];
	float fLocal_1580[3] = { 0f, 0f, 0f };
	struct<3> Local_1584[5];
	float fLocal_1600[5] = { 0f, 0f, 0f, 0f, 0f };
	struct<3> Local_1606 = { 0, 0, 0 } ;
	struct<3> Local_1609 = { 0, 0, 0 } ;
	struct<3> Local_1612 = { 0, 0, 0 } ;
	int iLocal_1615 = 0;
	struct<3> Local_1616 = { 0, 0, 0 } ;
	struct<3> Local_1619 = { 0, 0, 0 } ;
	struct<3> Local_1622 = { 0, 0, 0 } ;
	struct<3> Local_1625 = { 0, 0, 0 } ;
	struct<3> Local_1628 = { 0, 0, 0 } ;
	struct<3> Local_1631 = { 0, 0, 0 } ;
	struct<3> Local_1634 = { 0, 0, 0 } ;
	struct<3> Local_1637[6];
	struct<3> Local_1656 = { 0, 0, 0 } ;
	struct<3> Local_1659 = { 0, 0, 0 } ;
	struct<3> Local_1662 = { 0, 0, 0 } ;
	struct<3> Local_1665 = { 0, 0, 0 } ;
	struct<3> Local_1668 = { 0, 0, 0 } ;
	struct<3> Local_1671 = { 0, 0, 0 } ;
	struct<3> Local_1674 = { 0, 0, 0 } ;
	struct<3> Local_1677 = { 0, 0, 0 } ;
	struct<3> Local_1680 = { 0, 0, 0 } ;
	struct<3> Local_1683 = { 0, 0, 0 } ;
	struct<3> Local_1686 = { 0, 0, 0 } ;
	struct<3> Local_1689 = { 0, 0, 0 } ;
	struct<3> Local_1692 = { 0, 0, 0 } ;
	float fLocal_1695 = 0f;
	struct<3> Local_1696[3];
	float fLocal_1706[3] = { 0f, 0f, 0f };
	struct<3> Local_1710 = { 0, 0, 0 } ;
	struct<3> Local_1713 = { 0, 0, 0 } ;
	struct<3> Local_1716 = { 0, 0, 0 } ;
	float fLocal_1719 = 0f;
	struct<3> Local_1720 = { 0, 0, 0 } ;
	struct<3> Local_1723 = { 0, 0, 0 } ;
	float fLocal_1726 = 0f;
	struct<3> Local_1727[5];
	float fLocal_1743[5] = { 0f, 0f, 0f, 0f, 0f };
	float fLocal_1749 = 0f;
	float fLocal_1750 = 0f;
	float fLocal_1751 = 0f;
	float fLocal_1752 = 0f;
	int iLocal_1753 = 0;
	char* sLocal_1754 = NULL;
	int iLocal_1755 = 0;
	var uLocal_1756 = 0;
	int iLocal_1757 = 0;
	struct<30> Local_1758[20];
	struct<2> Local_2359 = { 0, 0 } ;
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
	int iLocal_2379 = 0;
	struct<14> Local_2380 = { 0, 3, 0, 0, 0, 0, 0, 1092616192, 1101004800, 0, 0, 0, 0, 0 } ;
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 3;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	bool bLocal_2405 = 0;
	int iLocal_2406 = 0;
	int iLocal_2407 = 0;
	int iLocal_2408 = 0;
	bool bLocal_2409 = 0;
	int iLocal_2410 = 0;
	bool bLocal_2411 = 0;
	bool bLocal_2412 = 0;
	bool bLocal_2413 = 0;
	int iLocal_2414 = 0;
	int iLocal_2415 = 0;
	int iLocal_2416 = 0;
	int iLocal_2417 = 0;
	int iLocal_2418 = 0;
	int iLocal_2419 = 0;
	int iLocal_2420 = 0;
	int iLocal_2421 = 0;
	bool bLocal_2422 = 0;
	int iLocal_2423 = 0;
	int iLocal_2424 = 0;
	int iLocal_2425 = 0;
	int iLocal_2426 = 0;
	int iLocal_2427 = 0;
	int iLocal_2428 = 0;
	int iLocal_2429 = 0;
	int iLocal_2430 = 0;
	int iLocal_2431[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_2457 = { 0, 0, 0 } ;
	int iLocal_2460 = 0;
	int iLocal_2461 = 0;
	int iLocal_2462 = 0;
	int iLocal_2463 = 0;
	int iLocal_2464 = 0;
	int iLocal_2465 = 0;
	int iLocal_2466 = 0;
	int iLocal_2467 = 0;
	int iLocal_2468 = 0;
	int iLocal_2469 = 0;
	int iLocal_2470 = 0;
	int iLocal_2471 = 0;
	int iLocal_2472 = 0;
	float fLocal_2473 = 0f;
	bool bLocal_2474 = 0;
	bool bLocal_2475 = 0;
	int iLocal_2476 = 0;
	int iLocal_2477 = 0;
	int iLocal_2478 = 0;
	int iLocal_2479 = 0;
	int iLocal_2480 = 0;
	int iLocal_2481 = 0;
	int iLocal_2482 = 0;
	int iLocal_2483 = 0;
	int iLocal_2484 = 0;
	int iLocal_2485 = 0;
	int iLocal_2486[4] = { 0, 0, 0, 0 };
	int iLocal_2491 = 0;
	int iLocal_2492[5] = { 0, 0, 0, 0, 0 };
	int iLocal_2498[5] = { 0, 0, 0, 0, 0 };
	int iLocal_2504 = 0;
	int iLocal_2505[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_2512[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_2519 = 0;
	int iLocal_2520 = 0;
	int iLocal_2521 = 0;
	int iLocal_2522 = 0;
	int iLocal_2523 = 0;
	int iLocal_2524 = 0;
	int iLocal_2525 = 0;
	int iLocal_2526 = 0;
	int iLocal_2527 = 0;
	int iLocal_2528 = 0;
	int iLocal_2529 = 0;
	int iLocal_2530 = 0;
	int iLocal_2531 = 0;
	int iLocal_2532[4] = { 0, 0, 0, 0 };
	int iLocal_2537 = 0;
	int iLocal_2538[6] = { 0, 0, 0, 0, 0, 0 };
	float fLocal_2545[6] = { 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_2552 = 0;
	var uLocal_2553[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2589 = 0;
	int iLocal_2590 = 0;
	int iLocal_2591 = 0;
	int iLocal_2592 = 0;
	float fLocal_2593 = 0f;
	int iLocal_2594 = 0;
	var uLocal_2595 = 0;
	int iLocal_2596 = 0;
	int iLocal_2597 = 0;
	int iLocal_2598 = 0;
	int iLocal_2599 = 0;
	int iLocal_2600 = 0;
	int iLocal_2601 = 0;
	int iLocal_2602 = 0;
	var uLocal_2603 = 0;
	int iLocal_2604 = 0;
	int iLocal_2605 = 0;
	var uLocal_2606[2] = { 0, 0 };
	var uLocal_2609 = 0;
	var uLocal_2610 = 0;
	var uLocal_2611 = 0;
	var uLocal_2612 = 0;
	var uLocal_2613 = 0;
	var uLocal_2614 = 0;
	var uLocal_2615[3] = { 0, 0, 0 };
	var uLocal_2619 = 0;
	var uLocal_2620 = 0;
	var uLocal_2621[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_2628 = 4;
	var uLocal_2629 = 0;
	var uLocal_2630 = 0;
	var uLocal_2631 = 0;
	var uLocal_2632 = 0;
	var uLocal_2633 = 0;
	var uLocal_2634 = 0;
	var uLocal_2635 = 0;
	int iLocal_2636 = 0;
	int iLocal_2637 = 0;
	char[] cLocal_2638[8] = 0;
	char* sLocal_2639 = NULL;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	char* sLocal_2643 = NULL;
	char* sLocal_2644 = NULL;
	int iLocal_2645 = 0;
	float fLocal_2646 = 0f;
	float fLocal_2647 = 0f;
	float fLocal_2648 = 0f;
	float fLocal_2649 = 0f;
	float fLocal_2650 = 0f;
	char* sLocal_2651 = NULL;
	int iLocal_2652 = 0;
	float fLocal_2653 = 0f;
	float fLocal_2654 = 0f;
	float fLocal_2655 = 0f;
	struct<3> Local_2656 = { 0, 0, 0 } ;
	struct<40> Local_2659 = { 4, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0 } ;
	var uLocal_2699 = 0;
	var uLocal_2700 = 0;
	var uLocal_2701 = 0;
	var uLocal_2702 = 0;
	struct<20> Local_2703 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_2737 = 16;
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
	var uLocal_2904 = -1;
	var uLocal_2905 = 0;
	var uLocal_2906 = 0;
	var uLocal_2907 = 0;
	var uLocal_2908 = 0;
	var uLocal_2909 = 0;
	var uLocal_2910 = 0;
	var uLocal_2911 = 1000;
	var uLocal_2912 = 1000;
	var uLocal_2913 = 0;
	int iLocal_2914 = 0;
	int iLocal_2915 = 0;
	int iLocal_2916 = 0;
	int iLocal_2917 = 0;
	int iLocal_2918 = 0;
	bool bLocal_2919 = 0;
	bool bLocal_2920 = 0;
	bool bLocal_2921 = 0;
	bool bLocal_2922 = 0;
	int iLocal_2923 = 0;
	int iLocal_2924 = 0;
	int iLocal_2925 = 0;
	int iLocal_2926 = 0;
	int iLocal_2927 = 0;
	int iLocal_2928 = 0;
	int iLocal_2929 = 0;
	bool bLocal_2930 = 0;
	struct<7> Local_2931[8];
	int iLocal_2988 = 0;
	int iLocal_2989 = 0;
	int iLocal_2990 = 0;
	struct<3> Local_2991[12];
	int iLocal_3028 = 0;
	struct<3> Local_3029[35];
	int iLocal_3135 = 0;
	struct<3> Local_3136[50];
	int iLocal_3287 = 0;
	struct<4> Local_3288[19];
	var uLocal_3365 = 0;
	var uLocal_3366 = 0;
	var uLocal_3367 = 0;
	int iLocal_3368 = 0;
	struct<282> Local_3369 = { 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	float fLocal_3651 = 0f;
	int iLocal_3652 = 0;
	struct<2> Local_3653 = { 0, 0 } ;
	var uLocal_3655 = 0;
	var uLocal_3656 = 0;
	var uLocal_3657 = 2;
	var uLocal_3658 = 0;
	var uLocal_3659 = 0;
	var uLocal_3660 = 2;
	var uLocal_3661 = 0;
	var uLocal_3662 = 0;
	var uLocal_3663 = 20;
	var uLocal_3664 = 0;
	var uLocal_3665 = 0;
	var uLocal_3666 = 0;
	var uLocal_3667 = -1;
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
	var uLocal_3697 = 1065353216;
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
	var uLocal_3724 = -1;
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
	var uLocal_3754 = 1065353216;
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
	var uLocal_3781 = -1;
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
	var uLocal_3811 = 1065353216;
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
	var uLocal_3838 = -1;
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
	var uLocal_3868 = 1065353216;
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
	var uLocal_3895 = -1;
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
	var uLocal_3925 = 1065353216;
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
	var uLocal_3952 = -1;
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
	var uLocal_3982 = 1065353216;
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
	var uLocal_4009 = -1;
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
	var uLocal_4039 = 1065353216;
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
	var uLocal_4066 = -1;
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
	var uLocal_4096 = 1065353216;
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
	var uLocal_4123 = -1;
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
	var uLocal_4153 = 1065353216;
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
	var uLocal_4180 = -1;
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
	var uLocal_4210 = 1065353216;
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
	var uLocal_4237 = -1;
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
	var uLocal_4267 = 1065353216;
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
	var uLocal_4293 = 0;
	var uLocal_4294 = -1;
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
	var uLocal_4319 = 0;
	var uLocal_4320 = 0;
	var uLocal_4321 = 0;
	var uLocal_4322 = 0;
	var uLocal_4323 = 0;
	var uLocal_4324 = 1065353216;
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
	var uLocal_4348 = 0;
	var uLocal_4349 = 0;
	var uLocal_4350 = 0;
	var uLocal_4351 = -1;
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
	var uLocal_4381 = 1065353216;
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
	var uLocal_4408 = -1;
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
	var uLocal_4438 = 1065353216;
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
	var uLocal_4465 = -1;
	var uLocal_4466 = 0;
	var uLocal_4467 = 0;
	var uLocal_4468 = 0;
	var uLocal_4469 = 0;
	var uLocal_4470 = 0;
	var uLocal_4471 = 0;
	var uLocal_4472 = 0;
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
	var uLocal_4495 = 1065353216;
	var uLocal_4496 = 0;
	var uLocal_4497 = 0;
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
	var uLocal_4522 = -1;
	var uLocal_4523 = 0;
	var uLocal_4524 = 0;
	var uLocal_4525 = 0;
	var uLocal_4526 = 0;
	var uLocal_4527 = 0;
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
	var uLocal_4545 = 0;
	var uLocal_4546 = 0;
	var uLocal_4547 = 0;
	var uLocal_4548 = 0;
	var uLocal_4549 = 0;
	var uLocal_4550 = 0;
	var uLocal_4551 = 0;
	var uLocal_4552 = 1065353216;
	var uLocal_4553 = 0;
	var uLocal_4554 = 0;
	var uLocal_4555 = 0;
	var uLocal_4556 = 0;
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
	var uLocal_4569 = 0;
	var uLocal_4570 = 0;
	var uLocal_4571 = 0;
	var uLocal_4572 = 0;
	var uLocal_4573 = 0;
	var uLocal_4574 = 0;
	var uLocal_4575 = 0;
	var uLocal_4576 = 0;
	var uLocal_4577 = 0;
	var uLocal_4578 = 0;
	var uLocal_4579 = -1;
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
	var uLocal_4609 = 1065353216;
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
	var uLocal_4627 = 0;
	var uLocal_4628 = 0;
	var uLocal_4629 = 0;
	var uLocal_4630 = 0;
	var uLocal_4631 = 0;
	var uLocal_4632 = 0;
	var uLocal_4633 = 0;
	var uLocal_4634 = 0;
	var uLocal_4635 = 0;
	var uLocal_4636 = -1;
	var uLocal_4637 = 0;
	var uLocal_4638 = 0;
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
	var uLocal_4651 = 0;
	var uLocal_4652 = 0;
	var uLocal_4653 = 0;
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
	var uLocal_4666 = 1065353216;
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
	var uLocal_4693 = -1;
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
	var uLocal_4720 = 0;
	var uLocal_4721 = 0;
	var uLocal_4722 = 0;
	var uLocal_4723 = 1065353216;
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
	var uLocal_4735 = 0;
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
	var uLocal_4748 = 0;
	var uLocal_4749 = 0;
	var uLocal_4750 = -1;
	var uLocal_4751 = 0;
	var uLocal_4752 = 0;
	var uLocal_4753 = 0;
	var uLocal_4754 = 0;
	var uLocal_4755 = 0;
	var uLocal_4756 = 0;
	var uLocal_4757 = 0;
	var uLocal_4758 = 0;
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
	var uLocal_4780 = 1065353216;
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
	var uLocal_4791 = 0;
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
	var uLocal_4804 = 16;
	var uLocal_4805 = 0;
	var uLocal_4806 = -1082130432;
	var uLocal_4807 = 0;
	var uLocal_4808 = -1082130432;
	var uLocal_4809 = 0;
	var uLocal_4810 = -1082130432;
	var uLocal_4811 = 0;
	var uLocal_4812 = -1082130432;
	var uLocal_4813 = 0;
	var uLocal_4814 = -1082130432;
	var uLocal_4815 = 0;
	var uLocal_4816 = -1082130432;
	var uLocal_4817 = 0;
	var uLocal_4818 = -1082130432;
	var uLocal_4819 = 0;
	var uLocal_4820 = -1082130432;
	var uLocal_4821 = 0;
	var uLocal_4822 = -1082130432;
	var uLocal_4823 = 0;
	var uLocal_4824 = -1082130432;
	var uLocal_4825 = 0;
	var uLocal_4826 = -1082130432;
	var uLocal_4827 = 0;
	var uLocal_4828 = -1082130432;
	var uLocal_4829 = 0;
	var uLocal_4830 = -1082130432;
	var uLocal_4831 = 0;
	var uLocal_4832 = -1082130432;
	var uLocal_4833 = 0;
	var uLocal_4834 = -1082130432;
	var uLocal_4835 = 0;
	var uLocal_4836 = -1082130432;
	var uLocal_4837 = 16;
	var uLocal_4838 = 0;
	var uLocal_4839 = -1082130432;
	var uLocal_4840 = 0;
	var uLocal_4841 = -1082130432;
	var uLocal_4842 = 0;
	var uLocal_4843 = -1082130432;
	var uLocal_4844 = 0;
	var uLocal_4845 = -1082130432;
	var uLocal_4846 = 0;
	var uLocal_4847 = -1082130432;
	var uLocal_4848 = 0;
	var uLocal_4849 = -1082130432;
	var uLocal_4850 = 0;
	var uLocal_4851 = -1082130432;
	var uLocal_4852 = 0;
	var uLocal_4853 = -1082130432;
	var uLocal_4854 = 0;
	var uLocal_4855 = -1082130432;
	var uLocal_4856 = 0;
	var uLocal_4857 = -1082130432;
	var uLocal_4858 = 0;
	var uLocal_4859 = -1082130432;
	var uLocal_4860 = 0;
	var uLocal_4861 = -1082130432;
	var uLocal_4862 = 0;
	var uLocal_4863 = -1082130432;
	var uLocal_4864 = 0;
	var uLocal_4865 = -1082130432;
	var uLocal_4866 = 0;
	var uLocal_4867 = -1082130432;
	var uLocal_4868 = 0;
	var uLocal_4869 = -1082130432;
	var uLocal_4870 = 0;
	var uLocal_4871 = 0;
	var uLocal_4872 = 0;
	var uLocal_4873 = 0;
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
	var uLocal_4886 = -1082130432;
	var uLocal_4887 = -1082130432;
	var uLocal_4888 = 1;
	var uLocal_4889 = 1;
	var uLocal_4890 = 1;
	var uLocal_4891 = -1;
	var uLocal_4892 = -1;
	var uLocal_4893 = -1;
	int iLocal_4894 = 0;
	int iLocal_4895 = 0;
	float fLocal_4896 = 0f;
	float fLocal_4897 = 0f;
	char* sLocal_4898 = NULL;
	char* sLocal_4899 = NULL;
	char* sLocal_4900 = NULL;
	float fLocal_4901 = 0f;
	float fLocal_4902 = 0f;
	float fLocal_4903 = 0f;
	float fLocal_4904 = 0f;
	int iLocal_4905 = 0;
	float fLocal_4906 = 0f;
	int iLocal_4907 = 0;
	int iLocal_4908 = 0;
	int iLocal_4909 = 0;
	int iLocal_4910 = 0;
	int iLocal_4911 = 0;
	float fLocal_4912 = 0f;
	float fLocal_4913 = 0f;
	float fLocal_4914 = 0f;
	float fLocal_4915 = 0f;
	int iLocal_4916 = 0;
	int iLocal_4917 = 0;
	int iLocal_4918 = 0;
	int iLocal_4919 = 0;
	int iLocal_4920 = 0;
	int iLocal_4921 = 0;
	char* sLocal_4922 = NULL;
	int iLocal_4923 = 0;
	int iLocal_4924 = 0;
	var uLocal_4925 = 0;
	var uLocal_4926 = 0;
	var uLocal_4927 = 0;
	int iLocal_4928 = 0;
	int iLocal_4929 = 0;
	int iLocal_4930 = 0;
	var uLocal_4931 = 0;
	int iLocal_4932 = 0;
	int iLocal_4933 = 0;
	float fLocal_4934 = 0f;
	int iLocal_4935 = 0;
	int iLocal_4936 = 0;
	int iLocal_4937 = 0;
	int iLocal_4938 = 0;
	var uLocal_4939 = 0;
	var uLocal_4940 = 0;
	int iLocal_4941 = 0;
	int iLocal_4942 = 0;
	int iLocal_4943 = 0;
	bool bLocal_4944 = 0;
	struct<5> Local_4945 = { 0, 0, 0, 0, 0 } ;
	var uLocal_4950 = 0;
	var uLocal_4951 = 0;
	var uLocal_4952 = 21;
	var uLocal_4953 = 6;
	var uLocal_4954 = 0;
	var uLocal_4955 = 0;
	var uLocal_4956 = 0;
	int iLocal_4957 = 0;
	int iLocal_4958 = 0;
	int iLocal_4959 = 0;
	char* sLocal_4960 = NULL;
	char* sLocal_4961 = NULL;
	int iLocal_4962 = 0;
	float fLocal_4963 = 0f;
	int iLocal_4964 = 0;
	int iLocal_4965 = 0;
	bool bLocal_4966 = 0;
	int iLocal_4967 = 0;
	int iLocal_4968 = 0;
	int iLocal_4969 = 0;
	int iLocal_4970 = 0;
	bool bLocal_4971 = 0;
	float fLocal_4972 = 0f;
	float fLocal_4973 = 0f;
	int iLocal_4974 = 0;
	int iLocal_4975 = 0;
	int iLocal_4976 = 0;
	int iLocal_4977 = 0;
	int iLocal_4978 = 0;
	int iLocal_4979 = 0;
	int iLocal_4980 = 0;
	int iLocal_4981 = 0;
	struct<3> Local_4982 = { 0, 0, 0 } ;
	int iLocal_4985 = 0;
	int iLocal_4986 = 0;
	int iLocal_4987 = 0;
	int iLocal_4988 = 0;
	int iLocal_4989 = 0;
	int iLocal_4990 = 0;
	int iLocal_4991 = 0;
	int iLocal_4992 = 0;
	int iLocal_4993 = 0;
	bool bLocal_4994 = 0;
	int iLocal_4995 = 0;
	int iLocal_4996 = 0;
	int iLocal_4997[5] = { 0, 0, 0, 0, 0 };
	int iLocal_5003[5] = { 0, 0, 0, 0, 0 };
	int iLocal_5009 = 0;
	int iLocal_5010 = 0;
	var uLocal_5011 = 0;
	var uLocal_5012 = 0;
	int iLocal_5013 = 0;
	struct<3> Local_5014 = { 0, 0, 0 } ;
	int iLocal_5017 = 0;
	int iLocal_5018 = 0;
	float fLocal_5019 = 0f;
	int iLocal_5020 = 0;
	int iLocal_5021 = 0;
	int iLocal_5022 = 0;
	int iLocal_5023 = 0;
	int iLocal_5024 = 0;
	int iLocal_5025 = 0;
	int iLocal_5026 = 0;
	int iLocal_5027 = 0;
	int iLocal_5028 = 0;
	int iLocal_5029 = 0;
	int iLocal_5030 = 0;
	int iLocal_5031 = 0;
	int iLocal_5032 = 0;
	struct<3> Local_5033 = { 0, 0, 0 } ;
	float fLocal_5036 = 0f;
	float fLocal_5037 = 0f;
	float fLocal_5038 = 0f;
	int iLocal_5039 = 0;
	int iLocal_5040 = 0;
	float fLocal_5041 = 0f;
	float fLocal_5042 = 0f;
	int iLocal_5043 = 0;
	float fLocal_5044 = 0f;
	float fLocal_5045 = 0f;
	int iLocal_5046 = 0;
	bool bLocal_5047 = 0;
	int iLocal_5048 = 0;
	int iLocal_5049 = 0;
	float fLocal_5050 = 0f;
	int iLocal_5051 = 0;
	int iLocal_5052 = 0;
	int iLocal_5053 = 0;
	struct<3> Local_5054 = { 0, 0, 0 } ;
	int iLocal_5057 = 0;
	int iLocal_5058 = 0;
	int iLocal_5059 = 0;
	int iLocal_5060 = 0;
	int iLocal_5061 = 0;
	int iLocal_5062 = 0;
	int iLocal_5063 = 0;
	int iLocal_5064 = 0;
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
	Local_62 = { 0f, 0f, 0f };
	Local_65 = { 0f, 0f, 0f };
	iLocal_68 = -1;
	Local_89 = { 210.75f, -2006.8f, 20.2f };
	Local_92 = { 0f, 0f, 50f };
	bLocal_102 = true;
	bLocal_109 = true;
	bLocal_131 = true;
	fLocal_610 = 120f;
	fLocal_611 = 0f;
	fLocal_613 = 1f;
	fLocal_614 = 0f;
	fLocal_615 = 1f;
	fLocal_616 = 30f;
	fLocal_618 = 1f;
	fLocal_619 = 5f;
	fLocal_620 = 1f;
	fLocal_621 = 1f;
	fLocal_622 = 100f;
	fLocal_623 = 100f;
	fLocal_624 = 0f;
	fLocal_625 = 7000f;
	fLocal_626 = 0f;
	fLocal_627 = 0f;
	fLocal_628 = 0.3f;
	fLocal_629 = 0.5f;
	fLocal_630 = 50f;
	iLocal_871 = -1;
	iLocal_879 = -1;
	iLocal_880 = -1;
	fLocal_1460 = 26f;
	fLocal_1462 = 0.5f;
	fLocal_1463 = 1.75f;
	Local_1558 = { 712.3005f, -964.644f, 29.3953f };
	Local_1561 = { 713.8555f, -962.8375f, 29.3956f };
	Local_1564 = { 706.1772f, -966.1973f, 29.4598f };
	Local_1567 = { 706.4446f, -963.6882f, 29.4181f };
	Local_1606 = { 716.7158f, -987.8787f, 23.1366f };
	Local_1609 = { 726.6455f, -980.41f, 23.1478f };
	Local_1612 = { 726.4868f, -987.6694f, 23.1752f };
	Local_1616 = { -579.8401f, -279.824f, 34.1553f };
	Local_1619 = { -668.3368f, -228.1611f, 36.1767f };
	Local_1622 = { -655.8611f, -196.5738f, 36.5397f };
	Local_1625 = { -590.6932f, -227.4862f, 35.4301f };
	Local_1628 = { -669.2445f, -226.8173f, 36.1665f };
	Local_1631 = { -627.515f, -231.408f, 37.022f };
	Local_1634 = { 0f, 0f, -21f };
	Local_1656 = { 0f, 0f, 0f };
	Local_1659 = { 0f, 0f, 0f };
	Local_1662 = { 717.1673f, -965.0396f, 29.4338f };
	Local_1665 = { -634.1773f, -239.6257f, 37.1375f };
	Local_1668 = { -573.496f, -290.6799f, 34.1626f };
	Local_1671 = { -633.7017f, -237.1157f, 36.994f };
	Local_1674 = { -631.645f, -237.565f, 37.107f };
	Local_1677 = { 542.7192f, -890.5296f, 11.8885f };
	Local_1680 = { 1090.283f, -245.7385f, 56.7453f };
	Local_1683 = { 659.3379f, -775.9125f, 22.532f };
	Local_1686 = { -657.5221f, -224.0321f, 36.7346f };
	Local_1689 = { -657.3683f, -211.9329f, 36.2962f };
	Local_1710 = { -631.96f, -236.34f, 38.21f };
	Local_1713 = { 0f, 0f, 125.98f };
	Local_1716 = { 636.5427f, -1846.357f, 8.8126f };
	fLocal_1719 = 175.6148f;
	Local_1720 = { 648.2646f, -1843.412f, 8.1401f };
	fLocal_1749 = 0f;
	iLocal_1753 = joaat("a_c_seagull");
	sLocal_1754 = "creatures@gull@move";
	bLocal_2405 = true;
	iLocal_2461 = 19;
	iLocal_2471 = 1;
	fLocal_2473 = 1f;
	fLocal_2593 = 1f;
	iLocal_2605 = 877820577;
	cLocal_2638 = "JHAUD";
	sLocal_2639 = "H3HEIST";
	fLocal_2646 = 0f;
	fLocal_2647 = 0f;
	fLocal_2648 = 0f;
	fLocal_2649 = 0f;
	fLocal_2650 = 0f;
	fLocal_2653 = 0f;
	fLocal_2654 = 0f;
	fLocal_2655 = 0f;
	Local_2656 = { 0f, 0f, 0f };
	iLocal_2918 = -1;
	iLocal_4895 = 1000;
	fLocal_4896 = 0f;
	fLocal_4897 = 0f;
	sLocal_4898 = "missHeist_Jewel@Switch";
	sLocal_4899 = "switchcam_incar_buddy";
	sLocal_4900 = "switchcam_incar_mic";
	fLocal_4901 = 3600f;
	fLocal_4902 = 6000f;
	fLocal_4903 = 30f;
	fLocal_4904 = 0.9f;
	iLocal_4905 = 3000;
	fLocal_4906 = 2000f;
	iLocal_4911 = -1;
	fLocal_4912 = 0.61f;
	fLocal_4913 = 0.74f;
	fLocal_4914 = 0.61f;
	fLocal_4915 = 0.74f;
	sLocal_4922 = "shake_cam_all@";
	fLocal_4934 = 0.05f;
	fLocal_4963 = 0f;
	fLocal_4972 = 1f;
	fLocal_4973 = 1f;
	iLocal_4979 = 1;
	bLocal_4994 = true;
	fLocal_5019 = 0f;
	Local_5033 = { -51.2869f, -553.8421f, 29.2955f };
	fLocal_5042 = 0.01f;
	fLocal_5044 = 0f;
	func_1025(0, 4);
	func_1024(0, 4);
	func_1023(0, 0);
	func_1023(0, 1);
	GlobalFunc_3036(0, 1, (1000 - Global_86792) * 5);
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GlobalFunc_5100(0, iLocal_97);
		GlobalFunc_5100(1, iLocal_98);
		GlobalFunc_10632();
		func_1013();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_1011(0);
	switch (GlobalFunc_597(7))
	{
		case 1:
			bLocal_2405 = true;
			break;
		
		case 2:
			bLocal_2405 = false;
			break;
	}
	GlobalFunc_7621(88, 1, 0, 1, 0);
	GlobalFunc_7621(89, 1, 0, 1, 0);
	while (true)
	{
		func_1004();
		switch (iLocal_2379)
		{
			case 0:
				StringCopy(&Local_1523, func_1001(GlobalFunc_5133(0, 0)), 16);
				StringCopy(&Local_1527, func_1001(GlobalFunc_5133(0, 1)), 16);
				func_988();
				if (GlobalFunc_199())
				{
					iLocal_2379 = GlobalFunc_198();
					iVar0 = GlobalFunc_198();
					if (bLocal_2405)
					{
						switch (iVar0)
						{
							case 0:
							case 1:
								iLocal_2379 = 3;
								break;
							
							case 2:
								iLocal_2379 = 4;
								break;
							
							case 3:
								iLocal_2379 = 7;
								break;
							
							case 4:
								iLocal_2379 = 9;
								break;
							
							case 5:
								iLocal_2379 = 10;
								break;
							
							case 6:
								iLocal_2379 = 11;
								break;
							
							case 7:
								iLocal_2379 = 13;
								break;
							
							case 8:
								iLocal_2379 = 14;
								break;
						}
					}
					else
					{
						switch (iVar0)
						{
							case 0:
							case 1:
								iLocal_2379 = 3;
								break;
							
							case 2:
								iLocal_2379 = 7;
								break;
							
							case 3:
								iLocal_2379 = 9;
								break;
							
							case 4:
								iLocal_2379 = 10;
								break;
							
							case 5:
								iLocal_2379 = 11;
								break;
							
							case 6:
								iLocal_2379 = 13;
								break;
							
							case 7:
								iLocal_2379 = 14;
								break;
							}
					}
					iLocal_2379 = func_985(&iLocal_2379);
					func_980(1);
					iLocal_2406 = 0;
					iLocal_2463 = Global_89962.f_12[0];
					iLocal_2917 = iLocal_2463;
					MISC::CLEAR_AREA(Local_2656, 5000f, 1, 1, 0, 0);
					func_968(1);
				}
				else
				{
					Global_86791 = 1;
					Global_86789 = 0;
					iLocal_2379 = 2;
				}
				break;
		}
		if (func_966())
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				func_956();
			}
		}
		func_949();
		RECORDING::_0x208784099002BC30("M_TheJewelStoreJob", 0);
		switch (iLocal_2379)
		{
			case 2:
				if (func_897())
				{
					iLocal_2379 = 3;
				}
				break;
			
			case 3:
				if (bLocal_2405)
				{
					if (func_894())
					{
						iLocal_2379 = 4;
					}
				}
				else if (func_887())
				{
					iLocal_2379 = 6;
				}
				break;
			
			case 4:
				if (func_883())
				{
					iLocal_2379 = 5;
				}
				break;
			
			case 5:
				if (func_882())
				{
					iLocal_2379 = 7;
				}
				break;
			
			case 6:
				if (func_875())
				{
					iLocal_2379 = 7;
				}
				break;
			
			case 7:
				if (func_830())
				{
					iLocal_2379 = 8;
				}
				break;
			
			case 8:
				if (func_825())
				{
					iLocal_2379 = 9;
				}
				break;
			
			case 9:
			case 10:
			case 11:
				if (func_782())
				{
					iLocal_2379 = 12;
				}
				break;
			
			case 12:
				if (func_648())
				{
					iLocal_2379 = 13;
				}
				break;
			
			case 13:
				if (func_598())
				{
					iLocal_2379 = 14;
				}
				break;
			
			case 14:
				if (func_471())
				{
					iLocal_2379 = 15;
				}
				break;
			
			case 15:
				func_131();
				break;
			
			case 16:
				if (func_8())
				{
					func_956();
				}
				break;
		}
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x80C
{
	if (iLocal_2424)
	{
		GlobalFunc_1470();
		if (iLocal_2917 < iLocal_2463)
		{
			if (iLocal_2918 == -1)
			{
				iLocal_2918 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_2918, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", 1);
			}
			iLocal_2917 = (iLocal_2917 + SYSTEM::ROUND((0f + (255000f * SYSTEM::TIMESTEP()))));
		}
		else
		{
			iLocal_2918 = -1;
			iLocal_2917 = iLocal_2463;
		}
		if (iLocal_2917 < 3300000 && iLocal_2379 == 7)
		{
			GlobalFunc_6388(iLocal_2917, "CMN_TAKE", 1000, 6, 2, 0, "HUD_CASH", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			GlobalFunc_6388(iLocal_2917, "CMN_TAKE", 1000, 18, 2, 0, "HUD_CASH", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		}
	}
}







int func_8()//Position - 0xB2F
{
	if (!iLocal_2406)
	{
		func_130();
		func_126(1, 0);
		func_123(0, 1, 1, 1);
		func_122(joaat("weapon_pistol"), 1, 1, 0);
		iLocal_2424 = 0;
		CUTSCENE::REMOVE_CUTSCENE();
		SYSTEM::WAIT(0);
		iLocal_2466 = 0;
		while (iLocal_2466 <= 24)
		{
			iLocal_2431[iLocal_2466] = 0;
			iLocal_2466++;
		}
		VEHICLE::SET_RANDOM_TRAINS(0);
		func_111();
		func_108(800, 0, 0);
		iLocal_2467 = 0;
		iLocal_2407 = 0;
		iLocal_2406 = 1;
	}
	else
	{
		PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		switch (iLocal_2467)
		{
			case 0:
				SYSTEM::SETTIMERA(0);
				CUTSCENE::REQUEST_CUTSCENE("JH_2_ARREST_FAIL_C", 8);
				GlobalFunc_8316(1, 1, 1, 0);
				iLocal_2467++;
				break;
			
			case 1:
				if (bLocal_2405)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("JH2A_MISSION_FAIL");
				}
				else
				{
					AUDIO::TRIGGER_MUSIC_EVENT("JH2B_MISSION_FAIL");
				}
				if (!ENTITY::IS_ENTITY_DEAD(func_93(0)))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", func_93(0), 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2486[0]))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("driver_selection", iLocal_2486[0], 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2486[1]))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("gunman_selection_1", iLocal_2486[1], 0);
				}
				if (bLocal_2405)
				{
					GlobalFunc_10914("Franklin", joaat("player_one"), 8);
				}
				else
				{
					GlobalFunc_10914("Franklin", joaat("player_one"), 18);
				}
				if (CUTSCENE::HAS_CUTSCENE_LOADED() && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (!ENTITY::IS_ENTITY_DEAD(func_93(1)))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_93(1), "Franklin", 0, 0, 0);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2486[0]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2486[0], "driver_selection", 0, 0, 0);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2486[1]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2486[1], "gunman_selection_1", 0, 0, 0);
					}
					if (Local_3369 == joaat("bati2"))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "drivers_bike", 3, Local_3369, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "gunmans_bike", 3, Local_3369, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "franklins_getaway_bike", 3, Local_3369, 0);
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[0]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2532[0], "drivers_bati", 0, 0, 0);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[1]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2532[1], "gunmans_bati", 0, 0, 0);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[2]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2532[2], "franklins_getaway_bati", 0, 0, 0);
						}
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "drivers_bati", 3, Local_3369, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "gunmans_bati", 3, Local_3369, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "franklins_getaway_bati", 3, Local_3369, 0);
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[0]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2532[0], "drivers_bike", 0, 0, 0);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[1]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2532[1], "gunmans_bike", 0, 0, 0);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[2]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2532[2], "franklins_getaway_bike", 0, 0, 0);
						}
					}
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 1, 0);
					CUTSCENE::START_CUTSCENE(0);
					iLocal_2467++;
				}
				break;
			
			case 2:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 1, 0);
					func_9(func_93(0), 0, 0);
					OBJECT::DELETE_OBJECT(&iLocal_2602);
					PED::DELETE_PED(&iLocal_1513);
					VEHICLE::DELETE_VEHICLE(&iLocal_2552);
					PED::DELETE_PED(&(iLocal_2486[2]));
					iLocal_2467++;
				}
				break;
			
			case 3:
				iLocal_5022 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("police_left", joaat("police")));
				iLocal_5023 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("police_right", joaat("police")));
				iLocal_5024 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("rear_police", joaat("police")));
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_5022) && iLocal_5025 == 0)
				{
					AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_5022, 1);
					VEHICLE::SET_VEHICLE_SIREN(iLocal_5022, 1);
					iLocal_5025 = 1;
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_5023) && iLocal_5026 == 0)
				{
					AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_5023, 1);
					VEHICLE::SET_VEHICLE_SIREN(iLocal_5023, 1);
					iLocal_5026 = 1;
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_5024) && iLocal_5027 == 0)
				{
					AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_5024, 1);
					VEHICLE::SET_VEHICLE_SIREN(iLocal_5024, 1);
					iLocal_5027 = 1;
				}
				if (CUTSCENE::GET_CUTSCENE_TIME() > 13000)
				{
					GlobalFunc_8316(0, 1, 1, 0);
					iLocal_1522 = 26;
					func_956();
				}
				break;
		}
		if (iLocal_2467 >= 4)
		{
			iLocal_1522 = 26;
			WEAPON::REMOVE_WEAPON_ASSET(joaat("weapon_pistol"));
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			iLocal_2406 = 0;
			iLocal_2407 = 0;
			return 1;
		}
	}
	return 0;
}

void func_9(int iParam0, bool bParam1, bool bParam2)//Position - 0xF65
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == func_93(0) || iParam0 == func_93(1))
		{
			if (bParam1)
			{
				if (iParam0 == func_93(0))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 9, 1, 0, 0);
				}
				else
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 9, 6, 0, 0);
				}
			}
			else
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 9, 0, 0, 0);
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("hc_gunman"))
		{
			if (bParam1)
			{
				if (bParam2)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 9, 4, 0, 0);
				}
				else
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 9, 4, 0, 0);
				}
			}
			else
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 9, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 9, 1, 0, 0);
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 9, 0, 0, 0);
		}
	}
}




















































































int func_93(int iParam0)//Position - 0x194D7
{
	switch (iParam0)
	{
		case 0:
			if (GlobalFunc_237(GlobalFunc_8315()) == 0)
			{
				return PLAYER::PLAYER_PED_ID();
			}
			else
			{
				return Local_2659[0];
			}
			break;
		
		case 1:
			if (GlobalFunc_237(GlobalFunc_8315()) == 1)
			{
				return PLAYER::PLAYER_PED_ID();
			}
			else
			{
				return Local_2659[1];
			}
			break;
		
		case 2:
			if (GlobalFunc_237(GlobalFunc_8315()) == 2)
			{
				return PLAYER::PLAYER_PED_ID();
			}
			else
			{
				return Local_2659[2];
			}
			break;
	}
	return PLAYER::PLAYER_PED_ID();
}















void func_108(int iParam0, bool bParam1, bool bParam2)//Position - 0x19950
{
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		GlobalFunc_4450();
		CAM::DO_SCREEN_FADE_IN(iParam0);
	}
	if (bParam1)
	{
		while (CAM::IS_SCREEN_FADING_IN())
		{
			if (bParam2)
			{
				func_109(0);
			}
			else
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

void func_109(int iParam0)//Position - 0x19994
{
	func_1();
	SYSTEM::WAIT(iParam0);
	func_966();
}


void func_111()//Position - 0x199C2
{
	func_118(func_93(0), GlobalFunc_2020("0"), "MICHAEL");
	func_118(func_93(1), GlobalFunc_2020("1"), "FRANKLIN");
	if (func_117())
	{
		func_118(iLocal_2486[0], 3, "EDDIE");
	}
	else if (func_116())
	{
		func_118(iLocal_2486[0], 3, "TALINA");
	}
	else if (func_115())
	{
		func_118(iLocal_2486[0], 3, "KARIM");
	}
	if (func_114())
	{
		func_118(iLocal_2486[1], 4, "PACKIE");
	}
	else if (func_113())
	{
		func_118(iLocal_2486[1], 4, "GUSTAVO");
	}
	else if (func_112())
	{
		func_118(iLocal_2486[1], 4, "NORM");
	}
	func_118(iLocal_2492[0], GlobalFunc_2020("5"), "JewelSales");
	func_118(iLocal_2491, GlobalFunc_2020("6"), "JewelGuard");
	if (iLocal_2379 < 7)
	{
		switch (GlobalFunc_5133(0, 2))
		{
			case 6:
				func_118(iLocal_2486[2], 7, "PAIGE");
				break;
			
			case 7:
				func_118(iLocal_2486[2], 7, "CHRISTIAN");
				break;
			
			case 12:
				func_118(iLocal_2486[2], 7, "LIEngineer");
				break;
		}
	}
	else
	{
		switch (GlobalFunc_5133(0, 2))
		{
			case 6:
				func_118(0, 7, "PAIGE");
				break;
			
			case 7:
				func_118(0, 7, "CHRISTIAN");
				break;
			
			case 12:
				func_118(0, 7, "LIEngineer");
				break;
			}
	}
	func_118(iLocal_2504, 8, "JewelManager");
	func_118(iLocal_2492[1], GlobalFunc_2020("B"), "JewelShop0");
	func_118(iLocal_2492[2], GlobalFunc_2020("C"), "JewelShop1");
	func_118(0, GlobalFunc_2020("D"), "POLICE");
	func_118(iLocal_2519, GlobalFunc_2020("E"), "LESTER");
}

bool func_112()//Position - 0x19BAB
{
	return GlobalFunc_5133(0, 1) == 4;
}

bool func_113()//Position - 0x19BBB
{
	return GlobalFunc_5133(0, 1) == 1;
}

bool func_114()//Position - 0x19BCB
{
	return GlobalFunc_5133(0, 1) == 10;
}

bool func_115()//Position - 0x19BDC
{
	return GlobalFunc_5133(0, 0) == 9;
}

bool func_116()//Position - 0x19BED
{
	return GlobalFunc_5133(0, 0) == 13;
}

bool func_117()//Position - 0x19BFE
{
	return GlobalFunc_5133(0, 0) == 8;
}

void func_118(int iParam0, int iParam1, char* sParam2)//Position - 0x19C0F
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0))
	{
		GlobalFunc_173(&uLocal_2737, iParam1, iParam0, sParam2, 0, 1);
	}
	else
	{
		GlobalFunc_200(&uLocal_2737, iParam1);
		GlobalFunc_173(&uLocal_2737, iParam1, 0, sParam2, 0, 1);
	}
}




void func_122(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x19FAA
{
	WEAPON::REQUEST_WEAPON_ASSET(iParam0, 31, iParam3);
	if (bParam1)
	{
		while (!WEAPON::HAS_WEAPON_ASSET_LOADED(iParam0))
		{
			if (bParam2)
			{
				func_109(0);
			}
			else
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

void func_123(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x19FE0
{
	GlobalFunc_3039(GlobalFunc_5133(iParam0, iParam1));
	if (bParam2)
	{
		while (!GlobalFunc_3038(GlobalFunc_5133(iParam0, iParam1)))
		{
			if (bParam3)
			{
				func_109(0);
			}
			else
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}



void func_126(bool bParam0, bool bParam1)//Position - 0x1A04A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_3028 - 1))
	{
		if (Local_3029[iVar0 /*3*/] != 0)
		{
			if (Local_3029[iVar0 /*3*/].f_1)
			{
				if (!Local_3029[iVar0 /*3*/].f_2)
				{
					func_129(Local_3029[iVar0 /*3*/], 1, bParam0, bParam1);
					Local_3029[iVar0 /*3*/].f_2 = 1;
				}
			}
			else if (Local_3029[iVar0 /*3*/].f_2)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3029[iVar0 /*3*/]);
				Local_3029[iVar0 /*3*/].f_2 = 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_3135 - 1))
	{
		if (!MISC::ARE_STRINGS_EQUAL(Local_3136[iVar0 /*3*/], "missing"))
		{
			if (Local_3136[iVar0 /*3*/].f_1)
			{
				if (!Local_3136[iVar0 /*3*/].f_2)
				{
					func_128(Local_3136[iVar0 /*3*/], 1, bParam0, bParam1);
					Local_3136[iVar0 /*3*/].f_2 = 1;
				}
			}
			else if (Local_3136[iVar0 /*3*/].f_2)
			{
				STREAMING::REMOVE_ANIM_DICT(Local_3136[iVar0 /*3*/]);
				Local_3136[iVar0 /*3*/].f_2 = 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_3287 - 1))
	{
		if (!MISC::ARE_STRINGS_EQUAL(Local_3288[iVar0 /*4*/], "missing") && Local_3288[iVar0 /*4*/].f_1 != -1)
		{
			if (Local_3288[iVar0 /*4*/].f_2)
			{
				if (!Local_3288[iVar0 /*4*/].f_3)
				{
					func_127(Local_3288[iVar0 /*4*/].f_1, Local_3288[iVar0 /*4*/], 1, bParam0, bParam1);
					Local_3288[iVar0 /*4*/].f_3 = 1;
				}
			}
			else if (Local_3288[iVar0 /*4*/].f_3)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(Local_3288[iVar0 /*4*/].f_1, Local_3288[iVar0 /*4*/]);
				Local_3288[iVar0 /*4*/].f_3 = 0;
			}
		}
		iVar0++;
	}
}

void func_127(int iParam0, char* sParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x1A1EC
{
	VEHICLE::REQUEST_VEHICLE_RECORDING(uParam0, uParam1);
	if (bParam2)
	{
		while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, sParam1))
		{
			if (bParam4)
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			}
			if (bParam3)
			{
				func_109(0);
			}
			else
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

void func_128(char* sParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x1A230
{
	STREAMING::REQUEST_ANIM_DICT(uParam0);
	if (bParam1)
	{
		while (!STREAMING::HAS_ANIM_DICT_LOADED(sParam0))
		{
			if (bParam3)
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			}
			if (bParam2)
			{
				func_109(0);
			}
			else
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

void func_129(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x1A270
{
	STREAMING::REQUEST_MODEL(iParam0);
	if (bParam1)
	{
		while (!STREAMING::HAS_MODEL_LOADED(iParam0))
		{
			if (bParam3)
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			}
			if (bParam2)
			{
				func_109(0);
			}
			else
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

void func_130()//Position - 0x1A2B0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_3028 - 1))
	{
		Local_3029[iVar0 /*3*/].f_1 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_3135 - 1))
	{
		Local_3136[iVar0 /*3*/].f_1 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_3287 - 1))
	{
		Local_3288[iVar0 /*4*/].f_2 = 0;
		iVar0++;
	}
}

void func_131()//Position - 0x1A318
{
	func_9(func_93(0), 0, 0);
	if (!ENTITY::IS_ENTITY_DEAD(func_93(1)))
	{
		PED::REMOVE_PED_HELMET(func_93(1), 0);
	}
	if (bLocal_2405)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("JH2A_MISSION_FAIL");
	}
	else
	{
		AUDIO::TRIGGER_MUSIC_EVENT("JH2B_MISSION_FAIL");
	}
	CLOCK::SET_CLOCK_TIME(6, 0, 0);
	func_464(func_93(1));
	GlobalFunc_4967(0, -1, 1);
	Global_90001.f_8 = 1;
	func_457();
	PED::CLEAR_PED_WETNESS(func_93(1));
	PED::CLEAR_PED_BLOOD_DAMAGE(func_93(1));
	PED::RESET_PED_VISIBLE_DAMAGE(func_93(1));
	if (!ENTITY::DOES_ENTITY_EXIST(func_93(1)) || PED::IS_PED_INJURED(func_93(1)))
	{
		PED::DELETE_PED(&(Local_2659[1]));
		while (!func_278(&(Local_2659[1]), 1, 117.2587f, -1285.103f, 27.2705f, 98.4916f, 1, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
	}
	while (!GlobalFunc_9756(&iLocal_4930, 1, 138.1478f, -1301.595f, 28.1939f, 120.2019f, 0, 1))
	{
		SYSTEM::WAIT(0);
	}
	if (GlobalFunc_8315() != 1)
	{
		GlobalFunc_9019(&Local_2659, 1);
		func_167(&Local_2659, 1, 0, 0);
	}
	WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
	PED::DELETE_PED(&(Local_2659[0]));
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Global_88538[11 /*3*/], 1, 0, 0, 1);
	GlobalFunc_2200(Global_88538[11 /*3*/], 40f, 0, 10000);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), 0);
	while (!func_149())
	{
		SYSTEM::WAIT(0);
	}
	GlobalFunc_7621(88, 2, 1, 1, 0);
	GlobalFunc_7621(89, 0, 1, 1, 0);
	GlobalFunc_9804(6, 0);
	GlobalFunc_5103(0, 0);
	func_1013();
	SCRIPT::TERMINATE_THIS_THREAD();
}


















int func_149()//Position - 0x1A8E0
{
	float fVar0;
	var uVar1;
	
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	switch (iLocal_4928)
	{
		case 0:
			GlobalFunc_45(1, 1);
			if (GlobalFunc_2(0))
			{
				SCRIPT::REQUEST_SCRIPT("controller_AmbientArea");
				while (!SCRIPT::HAS_SCRIPT_LOADED("controller_AmbientArea"))
				{
					SYSTEM::WAIT(0);
				}
				SYSTEM::START_NEW_SCRIPT("controller_AmbientArea", 1424);
			}
			PATHFIND::DISABLE_NAVMESH_IN_AREA((115.1569f - 5f), (-1286.684f - 5f), (28.2613f - 5f), (115.1569f + 5f), (-1286.684f + 5f), (28.2613f + 5f), 1);
			GlobalFunc_4956();
			iLocal_4928++;
			break;
		
		case 1:
			SYSTEM::SETTIMERA(0);
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
				CUTSCENE::REMOVE_CUTSCENE();
			}
			iLocal_4928++;
			break;
		
		case 2:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher")) < 1 || SYSTEM::TIMERA() > 10000)
			{
				iLocal_4928++;
			}
			else if (Global_68505)
			{
				STREAMING::REQUEST_ANIM_DICT("SWITCH@FRANKLIN@STRIPCLUB");
				STREAMING::REQUEST_MODEL(joaat("prop_phone_ing_03"));
				SYSTEM::SETTIMERA(0);
				iLocal_4928++;
			}
			break;
		
		case 3:
			if (STREAMING::HAS_ANIM_DICT_LOADED("SWITCH@FRANKLIN@STRIPCLUB") && STREAMING::HAS_MODEL_LOADED(joaat("prop_phone_ing_03")))
			{
				if (!Global_68505)
				{
					MISC::CLEAR_AREA_OF_VEHICLES(153.3041f, -1308.071f, 31.1902f, 50f, 0, 0, 0, 0, 0);
					uLocal_4927 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
					CAM::SET_CAM_COORD(uLocal_4927, 153.3041f, -1308.071f, 31.1902f);
					CAM::SET_CAM_ROT(uLocal_4927, 1.6837f, 0.2426f, 67.9347f, 2);
					CAM::SET_CAM_FOV(uLocal_4927, 45f);
					CAM::SET_CAM_ACTIVE(uLocal_4927, 1);
					CAM::SHAKE_CAM(uLocal_4927, "HAND_SHAKE", 1f);
					CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					SYSTEM::SETTIMERA(0);
					SCRIPT::SET_NO_LOADING_SCREEN(0);
					CAM::DO_SCREEN_FADE_IN(500);
					GlobalFunc_173(&uLocal_2737, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_173(&uLocal_2737, 4, 0, "TANISHA", 0, 1);
					iLocal_4928++;
				}
			}
			break;
		
		case 4:
			if (GlobalFunc_2655())
			{
				if (GlobalFunc_10691(&uLocal_2737, "PRSAUD", "PSF_ARM3_D", 9, 0, 0, 0, 0))
				{
					iLocal_4928++;
				}
			}
			break;
		
		case 5:
			if (SYSTEM::TIMERA() > 4000 && (GlobalFunc_747(Global_96378, 32) || SYSTEM::TIMERA() > 10000))
			{
				uLocal_4925 = PED::CREATE_SYNCHRONIZED_SCENE(115.1569f, -1286.684f, 28.2613f, 0f, 0f, 111f, 2);
				uLocal_4926 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_4925, 0);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_4925, 0);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_4925, 0f);
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_4925, "SWITCH@FRANKLIN@STRIPCLUB", "002113_02_FRAS_15_STRIPCLUB_EXIT", 1000f, -1.5f, 0, 0, 1148846080, 0);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_4926, uLocal_4925, "002113_02_FRAS_15_STRIPCLUB_EXIT_CAM", "SWITCH@FRANKLIN@STRIPCLUB");
				CAM::SET_CAM_ACTIVE(uLocal_4926, 1);
				iLocal_4929 = OBJECT::CREATE_OBJECT(joaat("prop_phone_ing_03"), 115.1569f, -1286.684f, 28.2613f, 1, 1, 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_4929, func_93(1), PED::GET_PED_BONE_INDEX(func_93(1), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				GlobalFunc_2207();
				iLocal_4928++;
			}
			break;
		
		case 6:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_4925))
			{
				PAD::DISABLE_CONTROL_ACTION(2, 19, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 28, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 29, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 171, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 36, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 45, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 55, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				if (!ENTITY::FIND_ANIM_EVENT_PHASE("SWITCH@FRANKLIN@STRIPCLUB", "002113_02_FRAS_15_STRIPCLUB_EXIT", "WALKINTERRUPTABLE", &fVar0, &uVar1))
				{
					fVar0 = 0.9f;
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_4925) >= fVar0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_4929))
					{
						OBJECT::DELETE_OBJECT(&iLocal_4929);
					}
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1871534317, 1, 0, 0);
					CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
					STREAMING::REMOVE_ANIM_DICT("SWITCH@FRANKLIN@STRIPCLUB");
					PATHFIND::DISABLE_NAVMESH_IN_AREA((115.1569f - 5f), (-1286.684f - 5f), (28.2613f - 5f), (115.1569f + 5f), (-1286.684f + 5f), (28.2613f + 5f), 0);
					return 1;
				}
			}
			break;
	}
	return 0;
}


















int func_167(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x1B4A6
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
			GlobalFunc_9119(iVar0, 0);
		}
		GlobalFunc_5127(iVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, 1);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, 1);
		iVar2 = GlobalFunc_584(iParam0->f_7);
		GlobalFunc_9119((*iParam0)[iParam0->f_7], 0);
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
					if (MISC::IS_BIT_SET(Global_81119[iVar4 /*5*/].f_1, 2))
					{
						iVar5 = Global_81119[iVar4 /*5*/];
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
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true);
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
				ENTITY::SET_ENTITY_VISIBLE(iVar0, true);
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
		GlobalFunc_10842(GlobalFunc_4933(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 145, 0));
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
			GlobalFunc_8311();
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















































































































int func_278(var uParam0, int iParam1, struct<3> Param2, int iParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x27979
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
			*uParam0 = PED::CREATE_PED(26, iVar0, Param2, iParam5, 0, 0);
			GlobalFunc_8386(*uParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
			func_464(*uParam0);
			GlobalFunc_7694(*uParam0, 1, 0);
			GlobalFunc_7693(*uParam0);
			GlobalFunc_7707(*uParam0);
			func_280(*uParam0, bParam8);
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


int func_280(int iParam0, bool bParam1)//Position - 0x27A91
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_5101(iVar0))
	{
		GlobalFunc_5100(iVar0, 0);
		func_432(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		func_293(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (GlobalFunc_7685(iParam0))
		{
			GlobalFunc_5100(iVar0, 0);
			func_432(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			func_293(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[120] && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122])
			{
				func_432(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						func_432(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						return 1;
					}
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 6))
			{
				func_432(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_432(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 20))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_432(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 21))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_432(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 22))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_432(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 11))
			{
				func_432(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 10))
			{
				func_432(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 50))
			{
				func_432(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 14, 59))
			{
				func_432(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10915(iParam0, 8, 22))
			{
				func_432(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 14))
			{
				func_432(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_10915(iParam0, 12, 13))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_432(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 14))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_432(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 15))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_432(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 4))
			{
				func_432(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 3))
			{
				func_432(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 14, 82))
			{
				func_432(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10915(iParam0, 8, 76))
			{
				func_432(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 1))
			{
				func_432(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 2:
			if (GlobalFunc_10915(iParam0, 12, 12))
			{
				func_432(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 15))
			{
				func_432(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (GlobalFunc_10915(iParam0, 3, 71))
				{
					func_432(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_432(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 18))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_432(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 19))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_432(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 7))
			{
				func_432(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 6))
			{
				func_432(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 14, 88))
			{
				func_432(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10915(iParam0, 8, 17))
			{
				func_432(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 11))
			{
				func_432(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
	}
	return 0;
}













void func_293(int iParam0, int iParam1)//Position - 0x295A2
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
					func_295(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
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


void func_295(int iParam0, var uParam1, bool bParam2)//Position - 0x29819
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
			if (GlobalFunc_11037(iParam0, iVar1, &iVar2, 0))
			{
				func_432(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (GlobalFunc_11035(iParam0, iVar1, &iVar2))
			{
				func_432(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_6784(741, uParam1->f_60, Global_68104, 1);
			GlobalFunc_6784(742, uParam1->f_61, Global_68104, 1);
			iVar4 = GlobalFunc_4915(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			func_298(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			if (!bParam2)
			{
				iVar5 = GlobalFunc_4915(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_298(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
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



int func_298(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x29AB0
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
		func_389(iVar5, iParam1, iParam2, 1);
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
						func_389(iVar5, 10, 0, 1);
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
								GlobalFunc_515(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
								if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
								{
									func_389(iVar5, iVar0, uVar15[iVar0], 1);
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
								func_389(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iVar0, GlobalFunc_11041(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					uVar41 = { GlobalFunc_7617(iVar5, 0) };
					func_298(iParam0, iVar0, uVar41[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				GlobalFunc_9519(iVar57, 0, Global_68104);
			}
			GlobalFunc_10814(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar58 = { GlobalFunc_7616(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 14, uVar58[iVar1]) };
			GlobalFunc_515(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
			{
				func_389(iVar5, 14, uVar58[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_68105 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = GlobalFunc_11040(iParam0, iVar5, 14, uVar58[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_298(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
			iVar3 = GlobalFunc_11040(iParam0, iVar5, 1, iVar69, 14, Global_68106[1 /*14*/].f_12);
			if (iVar3 != -99 && iVar3 != iParam2)
			{
				iVar7 = GlobalFunc_5013(iVar5, 1, -1);
			}
		}
		GlobalFunc_515(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
		{
			func_389(iVar5, iParam1, iParam2, 1);
		}
		if (iParam5 == 0)
		{
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11040(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_298(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						iVar73 = GlobalFunc_11040(iParam0, iVar5, 11, iVar70, 3, 0);
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
							func_298(iParam0, 8, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
								func_298(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
									func_298(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
								func_298(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_298(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
						}
					}
				}
				else
				{
					GlobalFunc_10810(iVar5, iParam2);
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			GlobalFunc_10814(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, GlobalFunc_11041(iParam0, 8, -1), iParam2);
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
				func_341(iParam0, iParam2, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			GlobalFunc_10814(iParam0, iParam1, iParam2, iParam6, 0);
			iVar84 = GlobalFunc_6669(iParam0, 11);
			if (GlobalFunc_6737(iVar5, iVar84))
			{
				iVar85 = GlobalFunc_6736(iVar5, iParam2, Global_68106[1 /*14*/].f_4);
				GlobalFunc_10810(iVar5, iVar85);
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
						iVar3 = GlobalFunc_11040(iParam0, iVar5, iParam1, iVar94, 14, iVar95);
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
					iVar3 = GlobalFunc_11040(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_298(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						if (!GlobalFunc_10918(iParam0, 9, iVar97))
						{
							func_298(iParam0, 9, iVar97, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						func_298(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_298(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
					iVar99 = GlobalFunc_11041(iParam0, 4, -1);
					iVar100 = iParam2;
				}
				else
				{
					iVar99 = iParam2;
					iVar100 = GlobalFunc_11041(iParam0, 11, -1);
				}
				if (GlobalFunc_6729(iVar5, 11, iVar100))
				{
					if (!GlobalFunc_6728(iVar5, 4, iVar99))
					{
						if (GlobalFunc_6727(iVar5, 4, iVar99, &uVar101))
						{
							func_298(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
				}
				else if (GlobalFunc_6728(iVar5, 4, iVar99))
				{
					if (GlobalFunc_6726(iVar5, 4, iVar99, &uVar101))
					{
						func_298(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
					iVar3 = GlobalFunc_11040(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_298(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar3 = GlobalFunc_11040(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_298(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (GlobalFunc_11159(iParam0, &uVar4))
		{
			func_298(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	if (iVar6 != -99)
	{
		func_298(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar9 != -99)
	{
		func_298(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar7 != -99)
	{
		func_298(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				func_298(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}











































void func_341(int iParam0, int iParam1, bool bParam2)//Position - 0x2FDA9
{
	int iVar0;
	int iVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	GlobalFunc_10537(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = GlobalFunc_6735(iVar0, iParam1);
	if (iVar1 != -1)
	{
		GlobalFunc_9519(iVar1, 1, Global_68104);
	}
	GlobalFunc_11224(iParam0, bParam2, 0);
}
















































void func_389(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x3C75B
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9[2];
	struct<2> Var12;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	struct<2> Var33;
	int iVar50;
	int iVar51;
	int iVar52;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_68104 != GlobalFunc_5() || iParam2 == -99)
		{
			return;
		}
		Global_68106[2 /*14*/] = { GlobalFunc_10837(iParam0, iParam1, iParam2) };
		if (MISC::IS_BIT_SET(Global_68106[2 /*14*/].f_6, 1) && MISC::IS_BIT_SET(Global_68106[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				GlobalFunc_8014(Global_2621444, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				GlobalFunc_8014(Global_2621444, 2, 1, 1, -1);
			}
			else
			{
				GlobalFunc_8014(Global_2621444, 2, 1, 1, -1);
			}
			if (bParam3)
			{
				iVar0 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(Global_2621444);
				iVar1 = 0;
				while (iVar1 < iVar0)
				{
					if (iVar1 < Global_2542253)
					{
						Global_2542253[iVar1] = -1;
						Global_2542364[iVar1] = -1;
					}
					FILES::GET_VARIANT_COMPONENT(Global_2621444, iVar1, &iVar2, &uVar3, &iVar4);
					if (iVar4 != 10)
					{
						if (iVar2 != 0 && iVar2 != joaat("0"))
						{
							GlobalFunc_8014(iVar2, 2, 1, 1, -1);
							if (iVar1 < Global_2542253)
							{
								Global_2542253[iVar1] = iVar2;
								Global_2542364[iVar1] = iVar4;
							}
						}
						else
						{
							func_389(iParam0, GlobalFunc_33(iVar4), uVar3, 0);
						}
					}
					iVar1++;
				}
				Global_2542252++;
				if (Global_2542252 < 2)
				{
					iVar1 = 0;
					while (iVar1 < iVar0)
					{
						if (iVar1 < Global_2542253)
						{
							if (Global_2542253[iVar1] != -1)
							{
								if (iParam0 == joaat("mp_m_freemode_01"))
								{
									func_389(iParam0, GlobalFunc_33(Global_2542364[iVar1]), GlobalFunc_4914(iParam0, Global_2542253[iVar1], GlobalFunc_33(Global_2542364[iVar1]), 3), 1);
								}
								else
								{
									func_389(iParam0, GlobalFunc_33(Global_2542364[iVar1]), GlobalFunc_4914(iParam0, Global_2542253[iVar1], GlobalFunc_33(Global_2542364[iVar1]), 4), 1);
								}
							}
						}
						iVar1++;
					}
				}
				Global_2542252 = (Global_2542252 - 1);
			}
			return;
		}
		if (MISC::IS_BIT_SET(Global_68106[2 /*14*/].f_6, 1) && !MISC::IS_BIT_SET(Global_68106[2 /*14*/].f_6, 6))
		{
			if (GlobalFunc_36(iParam1, Global_68106[1 /*14*/].f_2, &iVar5))
			{
				iVar6 = GlobalFunc_6671(iVar5, Global_68104, 0);
				MISC::SET_BIT(&iVar6, Global_68106[2 /*14*/].f_1);
				GlobalFunc_6784(iVar5, iVar6, Global_68104, 1);
			}
			if (bParam3 == 1)
			{
				if (iParam0 == joaat("mp_m_freemode_01"))
				{
					if (iParam1 == 14)
					{
						if (iParam2 >= 83 && iParam2 <= 90)
						{
							iVar7 = (75 + Global_68106[2 /*14*/].f_4);
							func_389(iParam0, 14, iVar7, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar7 = (83 + Global_68106[2 /*14*/].f_4);
							func_389(iParam0, 14, iVar7, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar7 = (64 + Global_68106[2 /*14*/].f_4);
							func_389(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar7 = (48 + Global_68106[2 /*14*/].f_4);
							func_389(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar7 = (112 + Global_68106[2 /*14*/].f_4);
							func_389(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar7 = (96 + Global_68106[2 /*14*/].f_4);
							func_389(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar7 = (160 + Global_68106[2 /*14*/].f_4);
							func_389(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar7 = (176 + Global_68106[2 /*14*/].f_4);
							func_389(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar7 = (0 + Global_68106[2 /*14*/].f_4);
							func_389(iParam0, 11, iVar7, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar7 = (16 + Global_68106[2 /*14*/].f_4);
							func_389(iParam0, 11, iVar7, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar7 = (32 + Global_68106[2 /*14*/].f_4);
							func_389(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar7 = (224 + Global_68106[2 /*14*/].f_4);
							func_389(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_0");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_0");
									break;
								
								case 221:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_1");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_1");
									break;
								
								case 222:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_2");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_2");
									break;
								
								case 223:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_3");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_3");
									break;
								
								case 224:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_4");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_4");
									break;
								
								case 225:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_5");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_5");
									break;
								
								case 226:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_6");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_6");
									break;
								
								case 227:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_7");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_7");
									break;
								
								case 228:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_8");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_8");
									break;
								
								case 229:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_9");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_9");
									break;
								
								case 230:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_10");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_10");
									break;
								
								case 231:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_11");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_11");
									break;
								
								case 232:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_12");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_12");
									break;
								
								case 233:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_13");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_13");
									break;
								
								case 234:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_14");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_14");
									break;
								
								case 235:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_15");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_15");
									break;
							}
							FILES::INIT_SHOP_PED_COMPONENT(&Var12);
							iVar31 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(3, 6, -1, 0, -1, 8);
							iVar29 = 0;
							while (iVar29 < iVar31)
							{
								FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar29, &Var12);
								if (!FILES::IS_CONTENT_ITEM_LOCKED(Var12))
								{
									if (Var12.f_1 == iVar9[0] || Var12.f_1 == iVar9[1])
									{
										func_389(iParam0, 8, (241 + iVar30), 0);
										iVar29 = iVar31 + 1;
									}
									iVar30++;
								}
								iVar29++;
							}
						}
					}
					else if (iParam1 == 7)
					{
						if (iParam2 >= 41 && iParam2 <= 56)
						{
							switch (Global_68106[2 /*14*/].f_4)
							{
								case 0:
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								
								case 1:
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								
								case 2:
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								
								case 3:
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								
								case 4:
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								
								case 5:
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								
								case 6:
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								
								case 7:
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								
								case 8:
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								
								case 9:
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								
								case 10:
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								
								case 11:
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								
								case 12:
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								
								case 13:
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								
								case 14:
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								
								case 15:
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_68106[2 /*14*/].f_4)
							{
								case 0:
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								
								case 1:
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								
								case 2:
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								
								case 3:
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								
								case 4:
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								
								case 5:
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								
								case 6:
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								
								case 7:
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								
								case 8:
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								
								case 9:
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								
								case 10:
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								
								case 11:
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								
								case 12:
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								
								case 13:
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								
								case 14:
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								
								case 15:
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_389(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
									break;
								}
							}
					}
				}
				else if (iParam0 == joaat("mp_f_freemode_01"))
				{
					if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar7 = (16 + Global_68106[2 /*14*/].f_4);
							func_389(iParam0, 8, iVar7, 0);
						}
					}
				}
				Global_68106[2 /*14*/] = { GlobalFunc_10837(iParam0, iParam1, iParam2) };
				if (iParam1 == 11)
				{
					iVar8 = GlobalFunc_6741(iParam0, iParam2, Global_68106[2 /*14*/].f_4);
					if (iVar8 != -99)
					{
						func_389(iParam0, 8, iVar8, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								iVar32 = joaat("DLC_MP_BUSI_F_ACCS2_0");
								break;
							
							case 200:
								iVar32 = joaat("DLC_MP_BUSI_F_ACCS2_1");
								break;
							
							case 201:
								iVar32 = joaat("DLC_MP_BUSI_F_ACCS2_2");
								break;
						}
						FILES::INIT_SHOP_PED_COMPONENT(&Var33);
						iVar52 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(4, 6, -1, 0, -1, 8);
						iVar50 = 0;
						while (iVar50 < iVar52)
						{
							FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar50, &Var33);
							if (!FILES::IS_CONTENT_ITEM_LOCKED(Var33))
							{
								if (Var33.f_1 == iVar32)
								{
									func_389(iParam0, 8, (136 + iVar51), 0);
									iVar50 = iVar52 + 1;
								}
								iVar51++;
							}
							iVar50++;
						}
					}
				}
				else if (iParam1 == 8)
				{
					iVar8 = GlobalFunc_6736(iParam0, iParam2, Global_68106[2 /*14*/].f_4);
					if (iVar8 != -99)
					{
						func_389(iParam0, 11, iVar8, 0);
					}
				}
			}
		}
	}
}











































int func_432(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x5481E
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
		GlobalFunc_8613(iParam1);
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
							GlobalFunc_515(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8613(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = GlobalFunc_11222(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_432(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						GlobalFunc_8613(iVar0);
						if (Global_68105 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = GlobalFunc_11222(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_432(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iVar0, GlobalFunc_11038(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (GlobalFunc_11037(iParam0, iVar10, &iVar4, 1))
							{
								func_432(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_432(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
					func_432(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_432(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_432(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_432(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_432(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
			GlobalFunc_515(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8613(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11222(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_432(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		GlobalFunc_515(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		GlobalFunc_8613(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = GlobalFunc_11222(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_432(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = GlobalFunc_11222(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_432(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
		if (GlobalFunc_11037(iParam0, iVar10, &iVar4, 0))
		{
			func_432(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (GlobalFunc_11035(iParam0, iVar10, &iVar4))
		{
			func_432(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}

























void func_457()//Position - 0x57972
{
	int iVar0;
	
	if (Global_89962.f_12[2] > 20)
	{
	}
	iVar0 = (1000 - Global_86792) * 5;
	if ((iLocal_2463 - iVar0) <= 0)
	{
		iLocal_2463 = 0;
	}
	GlobalFunc_565(816, Global_89962.f_12[2], 0);
	GlobalFunc_565(810, iLocal_2463, 0);
	GlobalFunc_3036(0, 0, iLocal_2464);
	GlobalFunc_706(0, (iLocal_2463 + iLocal_2464));
	GlobalFunc_2771(0, (iLocal_2463 + iLocal_2464));
	HUD::CLEAR_HELP(1);
}







void func_464(int iParam0)//Position - 0x57BE6
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
		func_295(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
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
				func_295(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
			}
		}
		Global_89948[iVar0] = 1;
	}
}







int func_471()//Position - 0x584A2
{
	if (!iLocal_2406)
	{
		if (bLocal_2405)
		{
			func_559(8, "STAGE_RETURN_TO_BASE", 0, 0, 0, 1);
		}
		else
		{
			func_559(7, "STAGE_RETURN_TO_BASE", 0, 0, 0, 1);
		}
		AUDIO::SET_AUDIO_FLAG("OnlyAllowScriptTriggerPoliceScanner", 1);
		Global_89962.f_12[0] = iLocal_2463;
		GlobalFunc_2790(25, 1, 1);
		GlobalFunc_2790(26, 1, 1);
		func_130();
		func_126(1, 0);
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
		iLocal_2467 = 0;
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2552))
		{
			VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_2552, 5, 0);
			ENTITY::SET_ENTITY_PROOFS(iLocal_2552, 0, 0, 0, 0, 0, 0, 0, 0);
		}
		if (!PED::IS_PED_INJURED(iLocal_2486[2]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2486[2], 1);
		}
		GlobalFunc_2214();
		AUDIO::DISTANT_COP_CAR_SIRENS(0);
		func_118(func_93(0), GlobalFunc_2020("0"), "MICHAEL");
		func_118(0, GlobalFunc_2020("1"), "FRANKLIN");
		if (func_117())
		{
			func_118(0, 3, "EDDIE");
		}
		else if (func_116())
		{
			func_118(0, 3, "TALINA");
		}
		else if (func_115())
		{
			func_118(0, 3, "KARIM");
		}
		if (func_114())
		{
			func_118(0, 4, "PACKIE");
		}
		else if (func_113())
		{
			func_118(0, 4, "GUSTAVO");
		}
		else if (func_112())
		{
			func_118(0, 4, "NORM");
		}
		switch (GlobalFunc_5133(0, 2))
		{
			case 6:
				func_118(iLocal_2486[2], 7, "PAIGE");
				break;
			
			case 7:
				func_118(iLocal_2486[2], 7, "CHRISTIAN");
				break;
			
			case 12:
				func_118(iLocal_2486[2], 7, "LIEngineer");
				break;
		}
		SYSTEM::SETTIMERA(0);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.5f);
		func_556(1);
		PED::SET_CREATE_RANDOM_COPS(1);
		iLocal_4967 = 0;
		if (!PED::IS_PED_INJURED(func_93(1)))
		{
			PED::REMOVE_PED_HELMET(func_93(1), 1);
		}
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("JWL_HEIST_CAR_SMASHES_BIG");
		iLocal_5061 = 0;
		iLocal_5062 = 0;
		PED::ADD_SCENARIO_BLOCKING_AREA(192.9551f, -2060.928f, 10.8338f, 231.7729f, -1969.854f, 34.4133f, 0, 1, 1, 1);
		GlobalFunc_504(iLocal_2552, 817);
		AUDIO::STOP_AUDIO_SCENE("JSH_2B_LOAD_UP_TRUCK");
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_2B_GO_TO_LOCKUP"))
		{
			AUDIO::START_AUDIO_SCENE("JSH_2B_GO_TO_LOCKUP");
		}
		RECORDING::_0x293220DA1B46CEBC(0f, 10f, 4);
		GlobalFunc_6812(0, 1);
		func_108(800, 0, 0);
		iLocal_2406 = 1;
		iLocal_2467 = 0;
	}
	else
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 207.8754f, -2024.499f, 17.2804f, 1) < 200f && iLocal_5061 == 0)
		{
			STREAMING::REQUEST_ANIM_DICT("missheist_jewel");
			STREAMING::REQUEST_MODEL(joaat("ig_lestercrest"));
			STREAMING::REQUEST_MODEL(joaat("p_clothtarp_s"));
			STREAMING::REQUEST_MODEL(Local_3369.f_23);
			STREAMING::REQUEST_ANIM_DICT("p_clothtarp_s");
			STREAMING::REQUEST_ANIM_SET("move_lester_CaneUp");
			STREAMING::REQUEST_ANIM_DICT("missheist_jewel@tarp");
			AUDIO::REQUEST_AMBIENT_AUDIO_BANK("JWL_HEIST_FINALE_TARP", 0);
			VEHICLE::REQUEST_VEHICLE_RECORDING(1, "JHTarpScene");
			VEHICLE::REQUEST_VEHICLE_RECORDING(2, "JHTarpScene");
			iLocal_5061 = 1;
		}
		if (iLocal_5061 == 1 && iLocal_5062 == 0)
		{
			if ((((((((((STREAMING::HAS_MODEL_LOADED(joaat("ig_lestercrest")) && STREAMING::HAS_MODEL_LOADED(joaat("p_clothtarp_s"))) && STREAMING::HAS_MODEL_LOADED(Local_3369.f_23)) && STREAMING::HAS_ANIM_DICT_LOADED("missheist_jewel")) && STREAMING::HAS_ANIM_DICT_LOADED("p_clothtarp_s")) && STREAMING::HAS_ANIM_DICT_LOADED("missheist_jewel@tarp")) && STREAMING::HAS_ANIM_SET_LOADED("move_lester_CaneUp")) && !ENTITY::DOES_ENTITY_EXIST(iLocal_2519)) && AUDIO::REQUEST_AMBIENT_AUDIO_BANK("JWL_HEIST_FINALE_TARP", 0)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "JHTarpScene")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "JHTarpScene"))
			{
				iLocal_2519 = PED::CREATE_PED(26, joaat("ig_lestercrest"), 206.7173f, -2024.657f, 17.2513f, 227.0582f, 1, 1);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_2519, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_2519, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_2519, 3, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_2519, 4, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_2519, 5, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_2519, 7, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_2519, 8, 1, 0, 0);
				PED::SET_PED_PROP_INDEX(iLocal_2519, 1, 0, 0, false);
				ENTITY::SET_ENTITY_HEALTH(iLocal_2519, 500);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_2519, 0);
				TASK::TASK_PLAY_ANIM(iLocal_2519, "missheist_jewel", "hacker_waive_in_lester", 8f, -4f, -1, 1, 0, 0, 0, 0);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_2519, func_93(0), -1, 2048, 2);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2519, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_2519, 1862763509);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_2519, 1, 0);
				PED::SET_PED_LOD_MULTIPLIER(iLocal_2519, 2f);
				iLocal_2531 = OBJECT::CREATE_OBJECT(Local_3369.f_23, ENTITY::GET_ENTITY_COORDS(iLocal_2519, 0), 1, 1, 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_2531, iLocal_2519, PED::GET_PED_BONE_INDEX(iLocal_2519, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(iLocal_2519, "move_lester_CaneUp");
				GlobalFunc_173(&uLocal_2737, GlobalFunc_2020("E"), iLocal_2519, "LESTER", 0, 1);
				iLocal_5060 = OBJECT::CREATE_OBJECT(joaat("p_clothtarp_s"), Local_89, 1, 1, 0);
				ENTITY::SET_ENTITY_ROTATION(iLocal_5060, Local_92, 2, 1);
				iLocal_5062 = 1;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5060))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_5060, Local_89, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_ROTATION(iLocal_5060, Local_92, 2, 1);
		}
		RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
		if (ENTITY::DOES_ENTITY_EXIST(func_93(1)) && ENTITY::DOES_ENTITY_EXIST(iLocal_2552))
		{
			if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_2552, 5) < 0.05f)
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_2532[0]));
				VEHICLE::DELETE_VEHICLE(&(iLocal_2532[1]));
				VEHICLE::DELETE_VEHICLE(&(iLocal_2532[2]));
				PED::DELETE_PED(&(iLocal_2486[0]));
				PED::DELETE_PED(&(iLocal_2486[1]));
				ENTITY::SET_ENTITY_VISIBLE(func_93(1), false);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iLocal_2552))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[0]))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_2532[0]))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_2532[0], iLocal_2552, 0, ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_2552, ENTITY::GET_ENTITY_COORDS(iLocal_2532[0], 1)), ENTITY::GET_ENTITY_ROTATION(iLocal_2532[0], 2) - ENTITY::GET_ENTITY_ROTATION(iLocal_2552, 2), 0, 0, 0, 0, 2, 1);
						ENTITY::SET_ENTITY_COLLISION(iLocal_2532[0], false, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[1]))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_2532[1]))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_2532[1], iLocal_2552, 0, ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_2552, ENTITY::GET_ENTITY_COORDS(iLocal_2532[1], 1)), ENTITY::GET_ENTITY_ROTATION(iLocal_2532[1], 2) - ENTITY::GET_ENTITY_ROTATION(iLocal_2552, 2), 0, 0, 0, 0, 2, 1);
						ENTITY::SET_ENTITY_COLLISION(iLocal_2532[1], false, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[2]))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_2532[2]))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_2532[2], iLocal_2552, 0, ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_2552, ENTITY::GET_ENTITY_COORDS(iLocal_2532[2], 1)), ENTITY::GET_ENTITY_ROTATION(iLocal_2532[2], 2) - ENTITY::GET_ENTITY_ROTATION(iLocal_2552, 2), 0, 0, 0, 0, 2, 1);
						ENTITY::SET_ENTITY_COLLISION(iLocal_2532[2], false, 0);
					}
				}
			}
		}
		switch (iLocal_2467)
		{
			case 0:
				if (bLocal_2405)
				{
					if (AUDIO::PREPARE_MUSIC_EVENT("JH2A_ARRIVE_STOP_TRACK"))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("JH2A_ARRIVE_STOP_TRACK");
						iLocal_2467 = 2;
					}
				}
				else if (AUDIO::PREPARE_MUSIC_EVENT("JH2B_ARRIVE_STOP_TRACK"))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("JH2B_ARRIVE_STOP_TRACK");
					iLocal_2467 = 2;
				}
				iLocal_2467 = 2;
				break;
			
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 10:
			case 11:
			case 12:
				if (HUD::DOES_BLIP_EXIST(Local_2380.f_5))
				{
					if (iLocal_2467 == 2)
					{
						if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 207.8754f, -2024.499f, 17.2804f, 255f, 255f, 20f, false, 1, 0))
						{
							if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_END2", 9, 0, 0, 0))
							{
								iLocal_2467 = 3;
							}
						}
					}
					if (iLocal_2467 == 3)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 207.8754f, -2024.499f, 17.2804f, 255f, 255f, 20f, false, 1, 0))
						{
							if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_CELEBRATE", 9, 0, 0, 0))
							{
								iLocal_2467 = 4;
							}
						}
					}
					if (iLocal_2467 == 4)
					{
						if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_CELEB", 9, 0, 0, 0))
							{
								iLocal_2467 = 5;
							}
						}
					}
					if (iLocal_2467 == 5)
					{
						if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							if (func_113())
							{
								if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_CELEB_GM", 9, 0, 0, 0))
								{
									iLocal_2467 = 6;
								}
							}
							else if (func_114())
							{
								if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_CELEB_PM", 9, 0, 0, 0))
								{
									iLocal_2467 = 6;
								}
							}
						}
						if (bLocal_2475)
						{
							iLocal_2467 = 6;
						}
					}
					if (iLocal_2467 == 6)
					{
						if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							if (func_117())
							{
								if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_CEL_ET", 9, 0, 0, 0))
								{
									iLocal_2467 = 7;
								}
							}
							else if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_CEL_KD", 9, 0, 0, 0))
							{
								iLocal_2467 = 7;
							}
						}
					}
					if (iLocal_2467 == 7)
					{
						if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							if (func_537())
							{
								if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_HCKCEL_PH", 9, 0, 0, 0))
								{
									iLocal_2467 = 8;
								}
							}
							else if (func_536())
							{
								if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_HCKCEL_CF", 9, 0, 0, 0))
								{
									iLocal_2467 = 8;
								}
							}
							else if (func_535())
							{
								if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_HCKCEL_RL", 9, 0, 0, 0))
								{
									iLocal_2467 = 8;
								}
							}
						}
					}
					if (iLocal_2467 == 8)
					{
						iLocal_2467 = 9;
					}
					if (iLocal_2467 == 9)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 207.8754f, -2024.499f, 17.2804f, 20f, 20f, 20f, false, 1, 0))
						{
							if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_WAVEIN", 9, 0, 0, 0))
							{
								RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
								iLocal_2467 = 10;
							}
						}
					}
					if (iLocal_2467 == 10)
					{
						if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_GEMGUY", 9, 0, 0, 0) && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							iLocal_2467 = 11;
						}
					}
					if (iLocal_2467 == 11)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 204.2339f, -2003.66f, 17.8616f, 20.5f, 20.5f, 4f, false, 1, 0))
						{
							if (!PED::IS_PED_INJURED(iLocal_2519))
							{
								TASK::CLEAR_PED_TASKS(iLocal_2519);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_2519, iLocal_2552, 15000);
								iLocal_2467 = 12;
							}
						}
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2519))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_2552, iLocal_2519) && (MISC::GET_GAME_TIMER() - iLocal_5064) > 6000)
					{
						GlobalFunc_5653(iLocal_2519, "GENERIC_CURSE_HIGH", "LESTER", 3);
						iLocal_5064 = MISC::GET_GAME_TIMER();
					}
				}
				if (func_489(&Local_2380, 204.2339f, -2003.66f, 17.8616f, 0.1f, 0.1f, 2f, 1, iLocal_2486[2], 0, 0, iLocal_2552, "G_MIKEHOUSE", "", "", "", "", "G_JHTRUCK", "G_JHTRUCK", 1, 1, 1, -1) || (HUD::DOES_BLIP_EXIST(Local_2380.f_5) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_2552, 209.6063f, -2005.642f, 17.36146f, 212.1836f, -2012.635f, 21.52557f, 11f, 0, 1, 0)))
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					CUTSCENE::REQUEST_CUTSCENE("JH_2_CELEB", 8);
					GlobalFunc_4935();
					ENTITY::CREATE_MODEL_HIDE(207.3416f, -2009.923f, 17.8473f, 1f, joaat("prop_rub_binbag_03"), 1);
					GlobalFunc_7139(&Local_2380, 0);
					AUDIO::STOP_AUDIO_SCENE("JSH_2B_GO_TO_LOCKUP");
					if (!CAM::DOES_CAM_EXIST(uLocal_3365))
					{
						uLocal_3365 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
					}
					if (!CAM::DOES_CAM_EXIST(uLocal_3366))
					{
						uLocal_3366 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					CAM::SET_CAM_COORD(uLocal_3365, 210.3491f, -2023.885f, 19.0404f);
					CAM::SET_CAM_ROT(uLocal_3365, 6.383267f, 0f, 8.404858f, 2);
					CAM::SET_CAM_FOV(uLocal_3365, 39.81816f);
					CAM::SET_CAM_COORD(uLocal_3366, 210.9758f, -2022.584f, 23.66016f);
					CAM::SET_CAM_ROT(uLocal_3366, 5.365558f, 0f, 13.65268f, 2);
					CAM::SET_CAM_FOV(uLocal_3366, 39.81816f);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3366, uLocal_3365, 14000, 1, 1);
					CAM::SHAKE_CAM(uLocal_3366, "HAND_SHAKE", 0.4f);
					CAM::RENDER_SCRIPT_CAMS(true, 0, 3500, 1, 0, 0);
					SYSTEM::SETTIMERA(0);
					MISC::CLEAR_AREA(204.7989f, -2002.959f, 17.8615f, 80f, 1, 1, 1, 0);
					GRAPHICS::REMOVE_DECALS_IN_RANGE(204.7989f, -2002.959f, 17.8615f, 80f);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					if (GlobalFunc_1575(ENTITY::GET_ENTITY_HEADING(iLocal_2552), 15.0468f, 90f))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_2552, 1, "JHTarpScene", 1);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_2552, 4600f);
						iLocal_5063 = 1;
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_2552, 2, "JHTarpScene", 1);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_2552, 4400f);
						iLocal_5063 = 0;
					}
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_2552, 1);
					GlobalFunc_8316(1, 1, 1, 0);
					SYSTEM::SETTIMERA(0);
					iLocal_2467 = 13;
				}
				break;
			
			case 13:
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", PLAYER::PLAYER_PED_ID(), 0);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2552))
				{
					VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_2552, 1);
				}
				if (bLocal_2405)
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 0, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 2, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 3, 1, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 4, 1, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 5, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 7, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 8, 1, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Lester", 1, 0, 0, 0);
					GlobalFunc_10914("Franklin", joaat("player_one"), 8);
					GlobalFunc_6811("Driver_selection", GlobalFunc_5133(0, 0), 1, 1);
					if (!bLocal_2475)
					{
						GlobalFunc_6811("gunman_selection_1", GlobalFunc_5133(0, 1), 1, 1);
					}
					GlobalFunc_6811("hacker_selection", GlobalFunc_5133(0, 2), 0, 1);
				}
				else
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 0, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 2, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 3, 1, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 4, 1, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 5, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 7, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 8, 1, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Lester", 1, 0, 0, 0);
					GlobalFunc_10914("Franklin", joaat("player_one"), 18);
					CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Michael", 2, 0, 0, 0);
					GlobalFunc_6811("Driver_selection", GlobalFunc_5133(0, 0), 10, 1);
					if (!bLocal_2475)
					{
						GlobalFunc_6811("gunman_selection_1", GlobalFunc_5133(0, 1), 10, 1);
					}
					GlobalFunc_6811("hacker_selection", GlobalFunc_5133(0, 2), 0, 1);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2552))
				{
					VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_2552, 1);
				}
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				if (SYSTEM::TIMERA() > 3000 && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
				if ((SYSTEM::TIMERA() > 5000 && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && GlobalFunc_109())
				{
					if (bLocal_2475)
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2486[1], "gunman_selection_1", 3, joaat("hc_gunman"), 0);
					}
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2552, 0, 0);
					CUTSCENE::START_CUTSCENE(0);
					RECORDING::_0x48621C9FCA3EBD28(4);
					SYSTEM::SETTIMERA(0);
					iLocal_2467 = 14;
				}
				break;
			
			case 14:
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2552))
				{
					VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_2552, 1);
				}
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (iLocal_5063 == 1)
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_2552, 204.7989f, -2002.959f, 17.8615f, 1, 0, 0, 1);
					}
					MISC::CLEAR_AREA(204.7989f, -2002.959f, 17.8615f, 80f, 1, 1, 1, 0);
					GRAPHICS::REMOVE_DECALS_IN_RANGE(204.7989f, -2002.959f, 17.8615f, 80f);
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 1, 0);
					PED::DELETE_PED(&iLocal_2519);
					PED::DELETE_PED(&(iLocal_2486[2]));
				}
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 2966.667f)
				{
					ENTITY::PLAY_ENTITY_ANIM(iLocal_5060, "p_clothtarp_s_fall", "p_clothtarp_s", 1000f, 0, 1, 0, 0, 0);
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_5060);
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TARP", iLocal_5060, "JEWEL_HEIST_SOUNDS", 0, 0);
					iLocal_2467 = 15;
				}
				break;
			
			case 15:
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2552))
				{
					VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_2552, 1);
				}
				if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 34500f)
				{
					if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(3000);
					}
				}
				if (!CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					iLocal_2467 = 16;
				}
				break;
		}
		if (iLocal_2467 >= 16)
		{
			GlobalFunc_7139(&Local_2380, 0);
			STREAMING::REMOVE_ANIM_DICT("missheist_jewel@hacking");
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_lestercrest"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_clothtarp_s"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3369.f_23);
			STREAMING::REMOVE_ANIM_DICT("p_clothtarp_s");
			if (HUD::DOES_BLIP_EXIST(uLocal_2619))
			{
				HUD::REMOVE_BLIP(&uLocal_2619);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_2634))
			{
				HUD::REMOVE_BLIP(&uLocal_2634);
			}
			RECORDING::_0x81CBAE94390F9F89();
			iLocal_2466 = 0;
			while (iLocal_2466 <= 3)
			{
				func_475(&(iLocal_2486[iLocal_2466]), 1);
				iLocal_2466++;
			}
			iLocal_2466 = 0;
			while (iLocal_2466 <= 5)
			{
				func_475(&(iLocal_2505[iLocal_2466]), 1);
				iLocal_2466++;
			}
			iLocal_2466 = 0;
			while (iLocal_2466 <= 3)
			{
				func_475(&(iLocal_2512[iLocal_2466]), 1);
				iLocal_2466++;
			}
			iLocal_2466 = 0;
			while (iLocal_2466 <= 4)
			{
				func_475(&(iLocal_2492[iLocal_2466]), 1);
				iLocal_2466++;
			}
			func_475(&iLocal_2491, 1);
			func_475(&iLocal_2504, 1);
			func_475(&iLocal_2519, 1);
			func_474(&iLocal_2594, 1);
			iLocal_2466 = 0;
			while (iLocal_2466 <= 3)
			{
				func_472(&(iLocal_2532[iLocal_2466]), 1);
				iLocal_2466++;
			}
			func_472(&iLocal_2537, 1);
			iLocal_2466 = 0;
			while (iLocal_2466 <= 5)
			{
				func_472(&(iLocal_2538[iLocal_2466]), 1);
				iLocal_2466++;
			}
			func_472(&iLocal_2552, 1);
			func_472(&iLocal_2589, 1);
			func_472(&iLocal_2590, 1);
			func_472(&iLocal_2592, 1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
			GlobalFunc_8316(0, 1, 1, 0);
			iLocal_2406 = 0;
			return 1;
		}
	}
	return 0;
}

void func_472(int iParam0, bool bParam1)//Position - 0x5968A
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (bParam1)
		{
			func_473(*iParam0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
				{
					ENTITY::DETACH_ENTITY(*iParam0, 0, 1);
				}
			}
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, 1, 0);
			}
			VEHICLE::DELETE_VEHICLE(iParam0);
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_473(int iParam0)//Position - 0x596E9
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			uVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1);
			if (ENTITY::DOES_ENTITY_EXIST(uVar0))
			{
				if (!PED::IS_PED_INJURED(iVar0))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0);
				}
				else
				{
					PED::DELETE_PED(&iVar0);
				}
			}
			iVar2 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0);
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iVar1))
				{
					iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iVar1);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (!PED::IS_PED_INJURED(iVar0))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0);
						}
						else
						{
							PED::DELETE_PED(&iVar0);
						}
					}
				}
				iVar1++;
			}
		}
	}
}

void func_474(int iParam0, bool bParam1)//Position - 0x59782
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (bParam1)
		{
			if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
			{
				ENTITY::DETACH_ENTITY(*iParam0, 0, 1);
			}
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, 1, 0);
			}
			OBJECT::DELETE_OBJECT(iParam0);
		}
		else
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_475(int iParam0, bool bParam1)//Position - 0x597CF
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (bParam1)
		{
			if (!PED::IS_PED_INJURED(*iParam0))
			{
				if (!PED::IS_PED_INJURED(*iParam0))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, 1, 0);
					}
				}
			}
			PED::DELETE_PED(iParam0);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}














int func_489(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, char* sParam17, char* sParam18, bool bParam19, bool bParam20, bool bParam21, int iParam22)//Position - 0x5A563
{
	return func_490(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 5, uParam8, iParam9, iParam10, iParam11, sParam12, sParam13, sParam14, sParam15, sParam16, sParam17, bParam19, bParam20, sParam18, 0, 0, bParam21, iParam22, 0, 0, 0, 1, 1065353216);
}

int func_490(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, bool bParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, int iParam32, int iParam33, int iParam34, bool bParam35, float fParam36)//Position - 0x5A5AD
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
	if (GlobalFunc_8035(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, uParam0->f_8, bParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, bParam26))
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
					else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, Param4, bParam13, iVar6, iVar7))
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













































bool func_535()//Position - 0x5CEF2
{
	return GlobalFunc_5133(0, 2) == 12;
}

bool func_536()//Position - 0x5CF03
{
	return GlobalFunc_5133(0, 2) == 7;
}

bool func_537()//Position - 0x5CF13
{
	return GlobalFunc_5133(0, 2) == 6;
}



















void func_556(int iParam0)//Position - 0x5D6E7
{
	MISC::ENABLE_DISPATCH_SERVICE(5, iParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3, iParam0);
	MISC::ENABLE_DISPATCH_SERVICE(1, iParam0);
	MISC::ENABLE_DISPATCH_SERVICE(2, iParam0);
	MISC::ENABLE_DISPATCH_SERVICE(6, iParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4, iParam0);
}



void func_559(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x5D7F3
{
	int iVar0;
	int iVar1;
	var uVar2;
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
			uVar2 = GlobalFunc_5110(iVar1);
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
			STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, uVar2, Global_89999, iParam0);
		}
		else
		{
			iVar5 = GlobalFunc_7706(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
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
		func_560(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_89999)
	{
	}
}

void func_560(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x5D96A
{
	func_561(&Global_93588, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}

void func_561(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x5D986
{
	int iVar0;
	int iVar1;
	
	*uParam0 = GlobalFunc_8315();
	uParam0->f_1 = GlobalFunc_7719();
	MISC::_GET_WEATHER_TYPE_TRANSITION(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_10628(&(uParam0->f_2161), 0);
		GlobalFunc_7705(PLAYER::PLAYER_PED_ID());
		GlobalFunc_7904(PLAYER::PLAYER_PED_ID(), 0);
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_294[iVar1];
		if (iVar1 == GlobalFunc_8315())
		{
			GlobalFunc_8358(PLAYER::PLAYER_PED_ID(), &(uParam0->f_472[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_472[iVar1 /*65*/][iVar0] = Global_89752[iVar1 /*65*/][iVar0];
				uParam0->f_472[iVar1 /*65*/].f_13[iVar0] = Global_89752[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_472[iVar1 /*65*/].f_59 = Global_89752[iVar1 /*65*/].f_59;
			uParam0->f_472[iVar1 /*65*/].f_60 = Global_89752[iVar1 /*65*/].f_60;
			uParam0->f_472[iVar1 /*65*/].f_61 = Global_89752[iVar1 /*65*/].f_61;
			uParam0->f_472[iVar1 /*65*/].f_62 = Global_89752[iVar1 /*65*/].f_62;
			uParam0->f_472[iVar1 /*65*/].f_63 = Global_89752[iVar1 /*65*/].f_63;
			uParam0->f_472[iVar1 /*65*/].f_64 = Global_89752[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_472[iVar1 /*65*/].f_39[iVar0] = Global_89752[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_472[iVar1 /*65*/].f_49[iVar0] = Global_89752[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_668[iVar1 /*284*/][iVar0 /*3*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_668[iVar1 /*284*/].f_133[iVar0 /*3*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				STATS::STAT_GET_INT(joaat("sp0_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				STATS::STAT_GET_INT(joaat("sp1_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				STATS::STAT_GET_INT(joaat("sp2_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_51925[iVar1];
		uParam0->f_25[0 /*223*/][iVar1 /*74*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iVar1 /*74*/] };
		uParam0->f_25[1 /*223*/][iVar1 /*74*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iVar1 /*74*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2115[iVar1 /*15*/][iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iVar1 /*15*/][iVar0];
			uParam0->f_2115[iVar1 /*15*/].f_5[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2115[iVar1 /*15*/].f_10[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_1622[iVar1 /*164*/][iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/][iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_4[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_8[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_12[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_16[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_20[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_24[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_28[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_32[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_36[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_40[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_44[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_48[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_52[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_56[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_60[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_64[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_68[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_72[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_76[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_80[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_84[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_88[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_92[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_96[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_100[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_104[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_108[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_112[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_116[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_120[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_124[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_128[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_132[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_136[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_140[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_144[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_148[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_152[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_156[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_160[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	STATS::STAT_GET_INT(joaat("sp0_special_ability"), &(uParam0->f_1618[0]), -1);
	STATS::STAT_GET_INT(joaat("sp1_special_ability"), &(uParam0->f_1618[1]), -1);
	STATS::STAT_GET_INT(joaat("sp2_special_ability"), &(uParam0->f_1618[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		GlobalFunc_9750(&(uParam0->f_2167), uParam0, iParam5, 1, 1, 0);
	}
	GlobalFunc_542(&(uParam0->f_2233));
	uParam3 = uParam3;
	uParam2 = uParam2;
}





































int func_598()//Position - 0x623A8
{
	if (!iLocal_2406)
	{
		GlobalFunc_601(9, 0);
		GlobalFunc_601(8, 0);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[2]))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_2532[2], "JSH_2B_PLAYER_BIKE", 0);
			AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_2532[2], 3);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[0]))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_2532[0], "JSH_2B_BUDDY_BIKES", 0);
			AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_2532[0], 3);
		}
		if (!bLocal_2475)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[1]))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_2532[1], "JSH_2B_BUDDY_BIKES", 0);
				AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_2532[1], 3);
			}
		}
		AUDIO::SET_AUDIO_FLAG("OnlyAllowScriptTriggerPoliceScanner", 1);
		if (bLocal_2405)
		{
			func_559(7, "STAGE_CUTSCENE_RAMP_DOWN", 0, 0, 0, 1);
		}
		else
		{
			func_559(6, "STAGE_CUTSCENE_RAMP_DOWN", 0, 0, 0, 1);
		}
		Global_89962.f_12[0] = iLocal_2463;
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("JWL_HEIST_CAR_SMASHES_BIG");
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("ALARM_BELL_02");
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("JWL_HEIST_RAID_GLASS_SMASH");
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(Local_3369.f_247);
		GlobalFunc_7139(&Local_2380, 0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("police"));
		VEHICLE::REMOVE_VEHICLE_RECORDING(700, "JHUBER");
		VEHICLE::REMOVE_VEHICLE_RECORDING(998, "JHUBER");
		func_645();
		VEHICLE::DELETE_MISSION_TRAIN(&iLocal_1511);
		func_644();
		func_130();
		VEHICLE::REQUEST_VEHICLE_RECORDING(1, "JHLoadVan");
		VEHICLE::REQUEST_VEHICLE_RECORDING(2, "JHLoadVan");
		VEHICLE::REQUEST_VEHICLE_RECORDING(3, "JHLoadVan");
		AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TRUCK_RAMP_DOOR", 0);
		STREAMING::REQUEST_ANIM_DICT("MISSHeist_Jewel");
		STREAMING::PREFETCH_SRL("JHRAMPDOWNSCENE");
		while (((((!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "JHLoadVan") || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "JHLoadVan")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "JHLoadVan")) || !AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TRUCK_RAMP_DOOR", 0)) || !STREAMING::HAS_ANIM_DICT_LOADED("MISSHeist_Jewel")) || !STREAMING::IS_SRL_LOADED())
		{
			SYSTEM::WAIT(0);
		}
		GRAPHICS::_0x54E22EA2C1956A8D(0f);
		func_126(1, 0);
		func_643(0, 0, 1, 1, 1);
		STREAMING::BEGIN_SRL();
		GlobalFunc_4948(&uLocal_2902, 0, 0);
		if (iLocal_5051 != 0)
		{
			CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(iLocal_5051);
		}
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
		iLocal_2466 = 0;
		while (iLocal_2466 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2532[iLocal_2466]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_2532[iLocal_2466], 1, 1);
			}
			iLocal_2466++;
		}
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_2486[0], 1, 1);
		if (!bLocal_2475)
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_2486[1], 1, 1);
		}
		func_621(1);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			func_616(0);
			func_9(iLocal_2486[1], 1, 0);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2486[0]))
			{
				PED::SET_PED_HELMET_PROP_INDEX(iLocal_2486[1], 3, 1);
				PED::SET_PED_HELMET_TEXTURE_INDEX(iLocal_2486[1], 0);
				PED::SET_PED_PROP_INDEX(iLocal_2486[0], 0, 3, 0, false);
				PED::GIVE_PED_HELMET(iLocal_2486[0], 1, 16384, -1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2486[1]))
			{
				PED::SET_PED_HELMET_PROP_INDEX(iLocal_2486[1], 4, 1);
				PED::SET_PED_HELMET_TEXTURE_INDEX(iLocal_2486[1], 0);
				PED::SET_PED_PROP_INDEX(iLocal_2486[1], 0, 4, 0, false);
				PED::GIVE_PED_HELMET(iLocal_2486[1], 1, 16384, -1);
			}
			if (!PED::IS_PED_INJURED(func_93(1)))
			{
				PED::SET_PED_HELMET_PROP_INDEX(func_93(1), 6, 1);
				PED::SET_PED_HELMET_TEXTURE_INDEX(func_93(1), 8);
				PED::SET_PED_PROP_INDEX(func_93(1), 0, 6, 8, false);
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2552, 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_2486[2]))
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_2486[2], iLocal_2552, 0))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_2486[2]);
					PED::SET_PED_INTO_VEHICLE(iLocal_2486[2], iLocal_2552, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_2486[2], 0, 0);
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_2486[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_2532[0]))
		{
			VEHICLE::SET_VEHICLE_FIXED(iLocal_2532[0]);
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[0]);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2486[0], 0);
			if (!PED::IS_PED_IN_VEHICLE(iLocal_2486[0], iLocal_2532[0], 0))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_2486[0]);
				PED::SET_PED_INTO_VEHICLE(iLocal_2486[0], iLocal_2532[0], -1);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_2486[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_2532[1]))
		{
			VEHICLE::SET_VEHICLE_FIXED(iLocal_2532[1]);
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[1]);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2486[1], 0);
			if (!PED::IS_PED_IN_VEHICLE(iLocal_2486[1], iLocal_2532[1], 0))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_2486[1]);
				PED::SET_PED_INTO_VEHICLE(iLocal_2486[1], iLocal_2532[1], -1);
			}
		}
		if (!PED::IS_PED_INJURED(func_93(1)) && !ENTITY::IS_ENTITY_DEAD(iLocal_2532[2]))
		{
			VEHICLE::SET_VEHICLE_FIXED(iLocal_2532[2]);
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[2]);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_93(1));
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_93(1), 0);
			PED::SET_PED_INTO_VEHICLE(func_93(1), iLocal_2532[2], -1);
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(func_93(1), 1);
		}
		func_615(iLocal_2552, func_93(0), Local_1716, fLocal_1719);
		func_615(iLocal_2532[0], iLocal_2486[0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2552, -0.25f, -10f, -1f), fLocal_1719);
		func_615(iLocal_2532[1], iLocal_2486[1], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2552, 0.8f, -15f, -1f), fLocal_1719);
		func_615(iLocal_2532[2], func_93(1), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2552, -0.1f, -20f, -1f), fLocal_1719);
		iLocal_2466 = 0;
		while (iLocal_2466 <= 24)
		{
			iLocal_2431[iLocal_2466] = 0;
			iLocal_2466++;
		}
		if (!PED::IS_PED_INJURED(iLocal_2486[2]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2486[2], 1);
		}
		iLocal_2466 = 0;
		while (iLocal_2466 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2532[iLocal_2466]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[iLocal_2466]))
				{
					VEHICLE::SET_VEHICLE_FIXED(iLocal_2532[iLocal_2466]);
				}
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_2615[iLocal_2466]))
			{
				HUD::REMOVE_BLIP(&(uLocal_2615[iLocal_2466]));
			}
			iLocal_2466++;
		}
		MISC::SET_FAKE_WANTED_LEVEL(0);
		GlobalFunc_2512();
		func_111();
		func_108(800, 0, 0);
		iLocal_2466 = 0;
		while (iLocal_2466 <= 24)
		{
			iLocal_2431[iLocal_2466] = 0;
			iLocal_2466++;
		}
		iLocal_2467 = 0;
		iLocal_2407 = 0;
		iLocal_2406 = 1;
		PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
		GlobalFunc_8316(1, 1, 1, 0);
		func_613(657.0762f, -1879.361f, 9.100791f, 8.990174f, 0.270771f, 33.97086f, 34.12487f, 656.5653f, -1878.123f, 9.054264f, 8.990174f, 0.270771f, 33.97086f, 34.12487f, 3000, 0);
		func_612("ROAD_VIBRATION_SHAKE", 0.1f);
		SYSTEM::SETTIMERA(0);
		iLocal_2407 = 1;
		MISC::CLEAR_AREA_OF_PEDS(657.0762f, -1879.361f, 9.100791f, 200f, 0);
		TASK::TASK_LOOK_AT_COORD(iLocal_2486[2], 635.0606f, -1848.388f, 10.1182f, 4000, 2048, 2);
		TASK::TASK_PLAY_ANIM(func_93(0), "MISSHeist_Jewel", "Michael_InTruck_Shouting", 8f, -8f, -1, 40, 0, 0, 0, 0);
		VEHICLE::ROLL_DOWN_WINDOW(iLocal_2552, 0);
		if (bLocal_2405)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("JH2A_ENTER_TRUCK");
		}
		else
		{
			AUDIO::TRIGGER_MUSIC_EVENT("JH2B_ENTER_TRUCK");
		}
		func_604(Local_3369.f_130, 1, 0, 1, 7, 0, 0);
		AUDIO::START_AUDIO_SCENE("JSH_2B_LOAD_UP_TRUCK");
		RECORDING::_0x48621C9FCA3EBD28(4);
	}
	else
	{
		STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(0.9f);
		STREAMING::SET_SRL_TIME(SYSTEM::TO_FLOAT(SYSTEM::TIMERA()));
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[0]))
		{
			VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_2532[0], 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[1]))
		{
			VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_2532[1], 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[2]))
		{
			VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_2532[2], 1);
		}
		switch (iLocal_2467)
		{
			case 0:
				if (!iLocal_2407)
				{
				}
				else
				{
					if (SYSTEM::TIMERA() > 2000 && !iLocal_2431[5])
					{
						func_603(iLocal_2552, 1, 0.95f);
						iLocal_2431[5] = 1;
					}
					if (SYSTEM::TIMERA() > 3000)
					{
						iLocal_2467++;
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[0], 1, "JHLoadVan", 1);
						ENTITY::SET_ENTITY_INVINCIBLE(iLocal_2532[0], 1);
						if (!bLocal_2475)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[1], 2, "JHLoadVan", 1);
							ENTITY::SET_ENTITY_INVINCIBLE(iLocal_2532[1], 1);
						}
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[2], 3, "JHLoadVan", 1);
						ENTITY::SET_ENTITY_INVINCIBLE(iLocal_2532[2], 1);
						if (Local_3369 == joaat("sanchez"))
						{
							VEHICLE::_0x796A877E459B99EA(iLocal_2532[0], 0f, 0f, 0.15f);
							if (!bLocal_2475)
							{
								VEHICLE::_0x796A877E459B99EA(iLocal_2532[1], 0f, 0f, 0.15f);
							}
							VEHICLE::_0x796A877E459B99EA(iLocal_2532[2], 0f, 0f, 0.15f);
						}
						iLocal_2407 = 0;
					}
				}
				break;
			
			case 1:
				if (!iLocal_2407)
				{
					func_613(638.8626f, -1824.62f, 8.847853f, 4.575484f, -1.939967f, 172.0927f, 34.24781f, 639.03f, -1824.62f, 8.847853f, 4.575484f, -1.939967f, 172.0927f, 34.24781f, 2500, 0);
					func_612("ROAD_VIBRATION_SHAKE", 0.1f);
					iLocal_2407 = 1;
				}
				else
				{
					func_603(iLocal_2552, 1, 0.95f);
					if (SYSTEM::TIMERA() > 0)
					{
						iLocal_2467++;
						iLocal_2407 = 0;
					}
				}
				break;
			
			case 2:
				if (!iLocal_2407)
				{
					func_612("ROAD_VIBRATION_SHAKE", 0.1f);
					iLocal_5059 = 0;
					iLocal_2407 = 1;
				}
				else
				{
					if (iLocal_5059 == 0 && SYSTEM::TIMERA() > 4700)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "RAMP_DOWN", "TRUCK_RAMP_DOWN", 1);
						iLocal_5059 = 1;
					}
					if (!iLocal_2431[0] && SYSTEM::TIMERA() > 3750)
					{
						if (func_602(iLocal_2532[0]))
						{
							func_601(iLocal_2486[0], iLocal_2532[0]);
							iLocal_2431[0] = 1;
						}
					}
					if (SYSTEM::TIMERA() > 4800)
					{
						iLocal_2467++;
						iLocal_2407 = 0;
					}
				}
				break;
			
			case 3:
				if (!iLocal_2407)
				{
					iLocal_2407 = 1;
				}
				else
				{
					if (!iLocal_2431[0] && SYSTEM::TIMERA() > 4800)
					{
						if (func_602(iLocal_2532[0]))
						{
							func_601(iLocal_2486[0], iLocal_2532[0]);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_2552, true);
							iLocal_2431[0] = 1;
						}
					}
					func_603(iLocal_2552, 1, 0.95f);
					if (SYSTEM::TIMERA() > 5050)
					{
						iLocal_2467++;
						iLocal_2407 = 0;
					}
				}
				break;
			
			case 4:
				if (!iLocal_2407)
				{
					func_613(668.6678f, -1764.783f, 9.198649f, 2.612283f, -0.362411f, 165.7755f, 17.23542f, 664.3342f, -1764.783f, 9.198649f, 2.612283f, -0.362411f, 165.7755f, 17.23542f, 20000, 0);
					SYSTEM::SETTIMERB(0);
					CAM::SET_CAM_DOF_PLANES(uLocal_3366, 5f, 15f, 200f, 225f);
					iLocal_2407 = 1;
				}
				else
				{
					CAM::SET_USE_HI_DOF();
					func_603(iLocal_2552, 1, 0.95f);
					if (!iLocal_2431[0] && SYSTEM::TIMERA() > 5050)
					{
						if (func_602(iLocal_2532[0]))
						{
							func_601(iLocal_2486[0], iLocal_2532[0]);
							iLocal_2431[0] = 1;
						}
					}
					if (!iLocal_2431[1] && SYSTEM::TIMERA() > 5050)
					{
						if (!bLocal_2475)
						{
							if (func_602(iLocal_2532[1]))
							{
								func_601(iLocal_2486[1], iLocal_2532[1]);
								iLocal_2431[1] = 1;
							}
						}
						else
						{
							iLocal_2431[1] = 1;
						}
					}
					if (!iLocal_2431[2] && SYSTEM::TIMERA() > 5400)
					{
						if (func_602(iLocal_2532[2]))
						{
							func_601(func_93(1), iLocal_2532[2]);
							func_603(iLocal_2552, 0, 1065353216);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_2552, false);
							iLocal_2431[2] = 1;
						}
					}
					iLocal_2431[3] = 1;
					if (func_600() == 1)
					{
						if (!bLocal_2475)
						{
							if (!func_602(iLocal_2532[0]))
							{
								iLocal_2431[3] = 0;
							}
						}
					}
					else
					{
						if (!func_602(iLocal_2532[0]))
						{
							iLocal_2431[3] = 0;
						}
						if (!bLocal_2475)
						{
							if (!func_602(iLocal_2532[1]))
							{
								iLocal_2431[3] = 0;
							}
						}
						if (!func_602(iLocal_2532[2]))
						{
							iLocal_2431[3] = 0;
						}
					}
					if ((!bLocal_2475 && SYSTEM::TIMERB() > 7550) || (bLocal_2475 && SYSTEM::TIMERB() > 8350))
					{
						func_603(iLocal_2552, 0, 1065353216);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_2552, false);
					}
					if (SYSTEM::TIMERB() > 11550 && !iLocal_2431[4])
					{
						iLocal_2431[4] = 1;
					}
					if ((iLocal_2431[3] && SYSTEM::TIMERB() > 5000) || SYSTEM::TIMERB() > 12600)
					{
						iLocal_2467++;
						func_613(638.2712f, -1836.951f, 11.57569f, -7.141413f, 0f, 169.5585f, 50f, 638.2678f, -1836.97f, 12.07595f, -2.140849f, 0f, 169.5585f, 50f, 2000, 3);
						func_603(iLocal_2552, 0, 1065353216);
						CAM::SET_CAM_DOF_PLANES(uLocal_3366, 0f, 3f, 175f, 200f);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "RAMP_UP", "TRUCK_RAMP_DOWN", 1);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						SYSTEM::SETTIMERB(0);
						iLocal_2407 = 0;
					}
				}
				break;
			
			case 5:
				CAM::SET_USE_HI_DOF();
				if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_PARK", 9, 0, 0, 0))
				{
					iLocal_2467++;
				}
				break;
			
			case 6:
				CAM::SET_USE_HI_DOF();
				if (SYSTEM::TIMERB() > 2000)
				{
					iLocal_2467++;
				}
				break;
		}
		if (iLocal_2467 >= 7)
		{
			RECORDING::_0x81CBAE94390F9F89();
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::_0x9DFE13ECDC1EC196(0, 0);
			VEHICLE::ROLL_UP_WINDOW(iLocal_2552, 0);
			STREAMING::END_SRL();
			func_599(1, 1, 3000, 1, 1);
			GRAPHICS::_0x54E22EA2C1956A8D(1f);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_2552, false);
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[0]);
			if (!bLocal_2475)
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[1]);
			}
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[2]);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2552))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[0]))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_2532[0], iLocal_2552, 0, ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_2552, ENTITY::GET_ENTITY_COORDS(iLocal_2532[0], 1)), ENTITY::GET_ENTITY_ROTATION(iLocal_2532[0], 2) - ENTITY::GET_ENTITY_ROTATION(iLocal_2552, 2), 0, 0, 0, 0, 2, 1);
					ENTITY::SET_ENTITY_COLLISION(iLocal_2532[0], false, 0);
					AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_2532[0], 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[1]))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_2532[1], iLocal_2552, 0, ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_2552, ENTITY::GET_ENTITY_COORDS(iLocal_2532[1], 1)), ENTITY::GET_ENTITY_ROTATION(iLocal_2532[1], 2) - ENTITY::GET_ENTITY_ROTATION(iLocal_2552, 2), 0, 0, 0, 0, 2, 1);
					ENTITY::SET_ENTITY_COLLISION(iLocal_2532[1], false, 0);
					AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_2532[1], 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[2]))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_2532[2], iLocal_2552, 0, ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_2552, ENTITY::GET_ENTITY_COORDS(iLocal_2532[2], 1)), ENTITY::GET_ENTITY_ROTATION(iLocal_2532[2], 2) - ENTITY::GET_ENTITY_ROTATION(iLocal_2552, 2), 0, 0, 0, 0, 2, 1);
					ENTITY::SET_ENTITY_COLLISION(iLocal_2532[2], false, 0);
					AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_2532[2], 0);
				}
			}
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_2532[0], 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2532[1]))
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_2532[1], 0);
			}
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_2532[2], 0);
			VEHICLE::REMOVE_VEHICLE_RECORDING(1, "JHLoadVan");
			VEHICLE::REMOVE_VEHICLE_RECORDING(2, "JHLoadVan");
			VEHICLE::REMOVE_VEHICLE_RECORDING(3, "JHLoadVan");
			VEHICLE::REMOVE_VEHICLE_RECORDING(700, "JHUber");
			func_603(iLocal_2552, 0, 1065353216);
			GlobalFunc_8316(0, 1, 1, 0);
			iLocal_2406 = 0;
			iLocal_2407 = 0;
			return 1;
		}
	}
	return 0;
}

void func_599(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x6331B
{
	if (iLocal_3368)
	{
		GlobalFunc_8316(0, 1, iParam4, 0);
		HUD::DISPLAY_HUD(1);
		HUD::DISPLAY_RADAR(1);
		CAM::SET_WIDESCREEN_BORDERS(0, 500);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (CAM::DOES_CAM_EXIST(uLocal_3365))
			{
				CAM::SET_CAM_ACTIVE(uLocal_3365, 0);
				CAM::DESTROY_CAM(uLocal_3365, 0);
			}
			if (CAM::DOES_CAM_EXIST(uLocal_3366))
			{
				CAM::SET_CAM_ACTIVE(uLocal_3366, 0);
				CAM::DESTROY_CAM(uLocal_3366, 0);
			}
			if (CAM::DOES_CAM_EXIST(uLocal_3367))
			{
				CAM::SET_CAM_ACTIVE(uLocal_3367, 0);
				CAM::DESTROY_CAM(uLocal_3367, 0);
			}
			if (!bParam1)
			{
				CAM::RENDER_SCRIPT_CAMS(false, 0, iParam2, 1, 0, 0);
			}
			else if (bParam3)
			{
				CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
			}
			else
			{
				CAM::RENDER_SCRIPT_CAMS(false, 1, iParam2, 1, 0, 0);
			}
			CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
			if (bParam0)
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				}
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			iLocal_3368 = 0;
		}
	}
}

int func_600()//Position - 0x63417
{
	switch (GlobalFunc_237(GlobalFunc_8315()))
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
	}
	return 0;
}

void func_601(int iParam0, int iParam1)//Position - 0x63454
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1) && !PED::IS_PED_INJURED(iParam0))
	{
		TASK::TASK_VEHICLE_DRIVE_TO_COORD(iParam0, iParam1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 0f, 10f, 0f), ENTITY::GET_ENTITY_SPEED(iParam1), 0, ENTITY::GET_ENTITY_MODEL(iParam1), 262144, 9999999f, 9999999f);
	}
}

int func_602(int iParam0)//Position - 0x634A2
{
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2552, -0.035128f, 0.555196f, 0.113579f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2552, 0.031168f, -3.357668f, 2.159969f), 2.375f, 0, 1))
	{
		VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, 0, 1);
		return 1;
	}
	return 0;
}

void func_603(int iParam0, bool bParam1, float fParam2)//Position - 0x634F8
{
	if (bParam1)
	{
		VEHICLE::SET_VEHICLE_DOOR_LATCHED(iParam0, 5, 0, 0, 1);
		VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam0, 5, 1, fParam2);
	}
	else
	{
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iParam0, 5, 0);
	}
}

void func_604(char* sParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6)//Position - 0x63524
{
	if (bParam2 == 0)
	{
		bParam2 = !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON();
	}
	func_608(sParam0, bParam1, bParam2, bParam3, iParam4, iParam5, iParam6);
	if (!(bLocal_2919 && iLocal_2923 == MISC::GET_HASH_KEY(sParam0)))
	{
		if ((bParam1 || bParam2) || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
		{
			if (Local_2931[0 /*7*/].f_1 != -1)
			{
				func_605();
			}
			Local_2931[0 /*7*/] = sParam0;
			Local_2931[0 /*7*/].f_1 = MISC::GET_HASH_KEY(sParam0);
			Local_2931[0 /*7*/].f_2 = 1;
			Local_2931[0 /*7*/].f_6 = 0;
			Local_2931[0 /*7*/].f_3 = 0;
			Local_2931[0 /*7*/].f_4 = bParam3;
			Local_2931[0 /*7*/].f_5 = 0;
		}
	}
}

void func_605()//Position - 0x635CD
{
	func_607(7);
	iLocal_2926 = 0;
	while (iLocal_2926 <= 6)
	{
		func_606(((8 - iLocal_2926) - 1), ((8 - iLocal_2926) - 2));
		iLocal_2926++;
	}
	func_607(0);
}

void func_606(int iParam0, int iParam1)//Position - 0x63609
{
	Local_2931[iParam0 /*7*/] = Local_2931[iParam1 /*7*/];
	Local_2931[iParam0 /*7*/].f_1 = Local_2931[iParam1 /*7*/].f_1;
	Local_2931[iParam0 /*7*/].f_2 = Local_2931[iParam1 /*7*/].f_2;
	Local_2931[iParam0 /*7*/].f_6 = Local_2931[iParam1 /*7*/].f_6;
	Local_2931[iParam0 /*7*/].f_3 = Local_2931[iParam1 /*7*/].f_3;
	Local_2931[iParam0 /*7*/].f_4 = Local_2931[iParam1 /*7*/].f_4;
	Local_2931[iParam0 /*7*/].f_5 = Local_2931[iParam1 /*7*/].f_5;
}

void func_607(int iParam0)//Position - 0x6368B
{
	Local_2931[iParam0 /*7*/] = "";
	Local_2931[iParam0 /*7*/].f_1 = -1;
	Local_2931[iParam0 /*7*/].f_5 = 0;
	Local_2931[iParam0 /*7*/].f_2 = 0;
	Local_2931[iParam0 /*7*/].f_6 = 0;
}

void func_608(char* sParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6)//Position - 0x636C6
{
	bool bVar0;
	bool bVar1;
	
	if (iLocal_2923 != MISC::GET_HASH_KEY(sParam0))
	{
		bVar0 = false;
	}
	else
	{
		bVar0 = true;
	}
	bVar1 = true;
	if (bParam3)
	{
		bVar1 = false;
	}
	if (bParam1)
	{
		func_611(1, 1, 1);
		func_610();
	}
	else if (bParam2)
	{
		if (!bVar0)
		{
			func_611(bParam2, bParam2, bVar1);
		}
	}
	if (((!HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON() || bParam1) || (bParam2 && !bVar0)) || !bLocal_2919)
	{
		if (GlobalFunc_10618(&uLocal_2737, cLocal_2638, sParam0, iParam4, iParam5, iParam6, 0))
		{
			func_609(sParam0);
			bLocal_2919 = true;
		}
	}
}

void func_609(char* sParam0)//Position - 0x63760
{
	iLocal_2923 = MISC::GET_HASH_KEY(sParam0);
}

void func_610()//Position - 0x63771
{
	iLocal_2926 = 0;
	while (iLocal_2926 <= 7)
	{
		func_607(iLocal_2926);
		iLocal_2926++;
	}
}

void func_611(bool bParam0, bool bParam1, bool bParam2)//Position - 0x63796
{
	if (bParam0 == 1)
	{
		GlobalFunc_4935();
		iLocal_2923 = -1;
	}
	if (bParam1)
	{
		HUD::CLEAR_PRINTS();
		iLocal_2924 = -1;
	}
	if (bParam2)
	{
		HUD::CLEAR_HELP(1);
		iLocal_2925 = -1;
	}
}

void func_612(char* sParam0, float fParam1)//Position - 0x637C7
{
	CAM::SHAKE_CAM(uLocal_3365, sParam0, fParam1);
	CAM::SHAKE_CAM(uLocal_3366, sParam0, fParam1);
}

void func_613(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, struct<3> Param10, float fParam13, int iParam14, int iParam15)//Position - 0x637E5
{
	CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
	CAM::DETACH_CAM(uLocal_3365);
	CAM::STOP_CAM_POINTING(uLocal_3365);
	CAM::SET_CAM_COORD(uLocal_3365, Param0);
	CAM::SET_CAM_ROT(uLocal_3365, Param3, 2);
	CAM::SET_CAM_FOV(uLocal_3365, fParam6);
	CAM::SET_CAM_ACTIVE(uLocal_3366, 0);
	CAM::SET_CAM_ACTIVE(uLocal_3365, 1);
	CAM::DETACH_CAM(uLocal_3366);
	CAM::STOP_CAM_POINTING(uLocal_3366);
	CAM::SET_CAM_COORD(uLocal_3366, Param7);
	CAM::SET_CAM_ROT(uLocal_3366, Param10, 2);
	CAM::SET_CAM_FOV(uLocal_3366, fParam13);
	CAM::SET_CAM_ACTIVE(uLocal_3366, 1);
	CAM::SET_CAM_ACTIVE(uLocal_3365, 1);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3366, uLocal_3365, iParam14, iParam15, iParam15);
}


void func_615(int iParam0, int iParam1, struct<3> Param2, float fParam5)//Position - 0x638CF
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (!PED::IS_PED_SITTING_IN_VEHICLE(iParam1, iParam0))
			{
				PED::SET_PED_INTO_VEHICLE(iParam1, iParam0, -1);
			}
			ENTITY::SET_ENTITY_COORDS(iParam0, Param2, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iParam0, fParam5);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0);
			func_601(iParam1, iParam0);
		}
	}
}

void func_616(bool bParam0)//Position - 0x63925
{
	int iVar0;
	
	if (bLocal_2405)
	{
		if (!PED::IS_PED_INJURED(iLocal_2486[0]))
		{
			GlobalFunc_6803(iLocal_2486[0], GlobalFunc_5133(0, 0), 1, 1);
		}
		if (!PED::IS_PED_INJURED(iLocal_2486[1]))
		{
			GlobalFunc_6803(iLocal_2486[1], GlobalFunc_5133(0, 1), 1, 1);
		}
		if (!PED::IS_PED_INJURED(iLocal_2486[2]))
		{
			GlobalFunc_6803(iLocal_2486[2], GlobalFunc_5133(0, 2), 0, 1);
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(iLocal_2486[0]))
		{
			GlobalFunc_6803(iLocal_2486[0], GlobalFunc_5133(0, 0), 10, 1);
		}
		if (!PED::IS_PED_INJURED(iLocal_2486[1]))
		{
			GlobalFunc_6803(iLocal_2486[1], GlobalFunc_5133(0, 1), 10, 1);
		}
		if (!PED::IS_PED_INJURED(iLocal_2486[2]))
		{
			GlobalFunc_6803(iLocal_2486[2], GlobalFunc_5133(0, 2), 0, 1);
		}
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_619(iLocal_2486[iVar0]);
		iVar0++;
	}
	func_617(iLocal_2486[0], bParam0);
	func_617(iLocal_2486[1], bParam0);
}

void func_617(int iParam0, bool bParam1)//Position - 0x63A2D
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (bLocal_2405)
		{
			if (iParam0 == func_93(0))
			{
				if (bParam1)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 9, 0, 0);
				}
				else
				{
					func_618(iParam0);
				}
			}
			else if (bParam1)
			{
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("hc_gunman"))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 6, 3, 0, 0);
					PED::SET_PED_PROP_INDEX(iParam0, 2, 0, 0, false);
					PED::SET_PED_PROP_INDEX(iParam0, 0, 2, 0, false);
				}
				else
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 6, 1, 0, 0);
				}
			}
			else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("hc_gunman"))
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 6, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 0, 0, 0);
			}
			else
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 6, 0, 0, 0);
			}
		}
		else if (iParam0 == func_93(0))
		{
			if (bParam1)
			{
				PED::SET_PED_PROP_INDEX(iParam0, 0, 25, 0, false);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 1, 0, 0);
			}
			else
			{
				func_618(iParam0);
			}
		}
		else if (bParam1)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("hc_gunman"))
			{
				PED::SET_PED_PROP_INDEX(iParam0, 0, 4, 0, false);
			}
			else
			{
				PED::SET_PED_PROP_INDEX(iParam0, 0, 3, 0, false);
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("hc_gunman"))
		{
			PED::CLEAR_PED_PROP(iParam0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 1, 0, 0);
		}
		else
		{
			PED::CLEAR_PED_PROP(iParam0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 6, 0, 0, 0);
		}
	}
}

void func_618(int iParam0)//Position - 0x63B8D
{
	int iVar0;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_42(iVar0))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_13[2], Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/][2], 0);
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_13[0], Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/][0], 0);
	}
}

void func_619(int iParam0)//Position - 0x63BFE
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			PED::SET_PED_CAN_BE_DRAGGED_OUT(iParam0, 0);
			PED::SET_PED_CAN_BE_TARGETTED(iParam0, 0);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, 0);
			PED::SET_PED_NEVER_LEAVES_GROUP(iParam0, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, 1862763509);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 13, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 14, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 8, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 9, 0);
			PED::SET_PED_ALERTNESS(iParam0, 0);
			PED::SET_PED_COMBAT_ABILITY(iParam0, 0);
			PED::SET_PED_COMBAT_RANGE(iParam0, 0);
			PED::SET_PED_GENERATES_DEAD_BODY_EVENTS(iParam0, 0);
			PED::SET_PED_SEEING_RANGE(iParam0, 0f);
			PED::SET_PED_HEARING_RANGE(iParam0, 0f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
			PED::SET_PED_CAN_BE_DRAGGED_OUT(iParam0, 0);
			PED::SET_PED_HELMET(iParam0, 1);
		}
	}
}


void func_621(bool bParam0)//Position - 0x63CBB
{
	int iVar0;
	
	iLocal_1374[0] = 0;
	func_622(bParam0, 1);
	iVar0 = 0;
	while (iVar0 <= 34)
	{
		iLocal_1465[iVar0] = 0;
		iVar0++;
	}
}

void func_622(bool bParam0, bool bParam1)//Position - 0x63CEC
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1179))
	{
		iLocal_115 = 0;
		GlobalFunc_2214();
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1195);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
			PED::SET_CREATE_RANDOM_COPS(1);
		}
		if (bLocal_131)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_640());
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2213());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2212());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2211());
		if (!CAM::IS_SCREEN_FADED_OUT() && !bParam0)
		{
			func_636();
			func_635();
			func_632();
		}
		else
		{
			func_628();
			func_627();
		}
		if (bParam1)
		{
			GlobalFunc_9191(0);
		}
	}
}





void func_627()//Position - 0x63ED2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 36)
	{
		iLocal_1290[iVar0] = 0;
		Local_885[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_133[iVar0] = 0f;
		fLocal_170[iVar0] = 0f;
		fLocal_207[iVar0] = 0f;
		fLocal_244[iVar0] = 0f;
		iLocal_631[iVar0] = 0;
		fLocal_281[iVar0] = 0f;
		iLocal_668[iVar0] = 0;
		iLocal_1196[iVar0] = 0;
		iLocal_705[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 28)
	{
		iLocal_1327[iVar0] = 0;
		iVar0++;
	}
	iLocal_868 = 0;
	iVar0 = 0;
	while (iVar0 < 17)
	{
		iLocal_1356[iVar0] = 0;
		Local_994[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_538[iVar0] = 0f;
		fLocal_556[iVar0] = 0f;
		fLocal_574[iVar0] = 0f;
		fLocal_592[iVar0] = 0f;
		iLocal_850[iVar0] = 0;
		iLocal_1233[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		iLocal_1410[iVar0] = 0;
		iVar0++;
	}
	iLocal_870 = 0;
	iVar0 = 0;
	while (iVar0 < 35)
	{
		iLocal_1374[iVar0] = 0;
		Local_1046[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_322[iVar0] = 0f;
		fLocal_358[iVar0] = 0f;
		fLocal_394[iVar0] = 0f;
		fLocal_430[iVar0] = 0f;
		iLocal_742[iVar0] = 0;
		fLocal_466[iVar0] = 0f;
		iLocal_778[iVar0] = 0;
		iLocal_1251[iVar0] = 0;
		iLocal_814[iVar0] = 0;
		iVar0++;
	}
	iLocal_869 = 0;
	iLocal_872 = 0;
	iLocal_875 = 0;
	iLocal_876 = 0;
	iLocal_877 = 0;
}

void func_628()//Position - 0x6405F
{
	func_631();
	func_630();
	func_629();
}

void func_629()//Position - 0x64073
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1374[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1374[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1374[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1374[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1374[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_1374[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_1374[iVar0]));
			}
		}
		iLocal_778[iVar0] = 0;
		if (!bLocal_111 && !bLocal_124)
		{
			if (iLocal_742[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_742[iVar0], &cLocal_1179);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!iLocal_1251[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1251[iVar0]);
		}
		iVar0++;
	}
}

void func_630()//Position - 0x64169
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1356[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_1356[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_1356[iVar0]));
			}
		}
		iLocal_850[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (!iLocal_1233[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1233[iVar0]);
		}
		iVar0++;
	}
	iLocal_873 = 0;
	iLocal_870 = 0;
}

void func_631()//Position - 0x641E6
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 36)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1290[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1290[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1290[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1290[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1290[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_1290[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_1290[iVar0]));
			}
		}
		if (!bLocal_111 && !bLocal_124)
		{
			if (iLocal_631[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_631[iVar0], &cLocal_1179);
			}
		}
		iLocal_668[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 36)
	{
		if (!iLocal_1196[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1196[iVar0]);
		}
		iVar0++;
	}
	iLocal_872 = 0;
	iLocal_868 = 0;
}

void func_632()//Position - 0x642E4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1374[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1374[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1374[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1374[iVar0]);
				}
			}
			func_634(iLocal_1374[iVar0]);
			GlobalFunc_2210(iLocal_1374[iVar0]);
		}
		iLocal_778[iVar0] = 0;
		iLocal_814[iVar0] = 0;
		if (!bLocal_111 && !bLocal_124)
		{
			if (iLocal_742[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_742[iVar0], &cLocal_1179);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!iLocal_1251[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1251[iVar0]);
		}
		iVar0++;
	}
	iLocal_874 = 0;
}


void func_634(int iParam0)//Position - 0x643C8
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
				if (bLocal_132)
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 65536, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, 0);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 6, 0);
			}
		}
	}
}

void func_635()//Position - 0x64461
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1356[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1356[iVar0]))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_1356[iVar0], true, 0);
			}
			GlobalFunc_2210(iLocal_1356[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (!iLocal_1233[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1233[iVar0]);
		}
		iVar0++;
	}
	iLocal_873 = 0;
	iLocal_870 = 0;
}

void func_636()//Position - 0x644E4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 36)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1290[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1290[iVar0]))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_1290[iVar0], true, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1290[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1290[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1290[iVar0]);
				}
			}
			func_634(iLocal_1290[iVar0]);
			GlobalFunc_2210(iLocal_1290[iVar0]);
		}
		iLocal_668[iVar0] = 0;
		iLocal_705[iVar0] = 0;
		if (!bLocal_111 && !bLocal_124)
		{
			if (iLocal_631[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_631[iVar0], &cLocal_1179);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 36)
	{
		if (!iLocal_1196[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1196[iVar0]);
		}
		iVar0++;
	}
	iLocal_872 = 0;
	iLocal_868 = 0;
}




int func_640()//Position - 0x645F8
{
	if (iLocal_1287 == 0)
	{
		return joaat("a_m_y_business_01");
	}
	return iLocal_1287;
}



void func_643(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x6470C
{
	if (!iLocal_3368)
	{
		GlobalFunc_8316(1, 1, iParam4, 0);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			CAM::DESTROY_ALL_CAMS(0);
			if (!bParam1)
			{
				uLocal_3365 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
				uLocal_3366 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
				CAM::SET_CAM_COORD(uLocal_3365, 1f, 1f, 1f);
			}
			else
			{
				uLocal_3365 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
				uLocal_3366 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
				uLocal_3367 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
				CAM::SET_CAM_COORD(uLocal_3367, 1f, 1f, 1f);
			}
			if (bParam3)
			{
				HUD::DISPLAY_HUD(0);
				HUD::DISPLAY_RADAR(0);
				CAM::SET_WIDESCREEN_BORDERS(1, 500);
			}
			if (bParam0)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 4);
			}
			else
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			}
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), iParam2);
		}
		SYSTEM::SETTIMERB(0);
		iLocal_3368 = 1;
	}
}

void func_644()//Position - 0x647D4
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freight"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightcont1"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightcont2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightgrain"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tankercar"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightcar"));
}

void func_645()//Position - 0x64812
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3369.f_12);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3369.f_14);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3369.f_15);
	VEHICLE::REMOVE_VEHICLE_RECORDING(Local_3369.f_85, Local_3369.f_83);
	VEHICLE::REMOVE_VEHICLE_RECORDING(Local_3369.f_84, Local_3369.f_83);
	VEHICLE::REMOVE_VEHICLE_RECORDING(717, "JHUBER");
	func_646(GlobalFunc_5133(0, 1));
	func_646(GlobalFunc_5133(0, 2));
	WEAPON::REMOVE_WEAPON_ASSET(joaat("weapon_pistol"));
}

void func_646(int iParam0)//Position - 0x6487A
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_86242[iParam0 /*5*/].f_4);
}


int func_648()//Position - 0x648B2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!iLocal_2406)
	{
		GlobalFunc_601(9, 1);
		GlobalFunc_601(8, 1);
		CAM::_0x9DFE13ECDC1EC196(1, 1);
		GRAPHICS::_0xBB90E12CAC1DAB25(2f);
		AUDIO::SET_AUDIO_FLAG("OnlyAllowScriptTriggerPoliceScanner", 1);
		Local_2703.f_19 = 0;
		func_130();
		func_780();
		while (!func_779())
		{
			func_109(0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2552))
		{
			func_777();
		}
		if (!ENTITY::DOES_ENTITY_EXIST(func_93(0)) || PED::IS_PED_INJURED(func_93(0)))
		{
			while (!func_278(&(Local_2659[0]), 0, Local_1680, 147.6818f, 1, 0, 0))
			{
				func_109(0);
			}
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(func_93(0), Local_1680, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(func_93(0), 147.6818f);
			PED::SET_PED_INTO_VEHICLE(func_93(0), iLocal_2552, -1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[0]))
		{
			if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2532[0]))
			{
				func_774(0);
				func_771();
				func_770(Local_3369.f_83, Local_3369.f_84, 1, 1);
				func_771();
				iLocal_1374[0] = iLocal_2532[1];
				iLocal_778[0] = 3;
				fLocal_1749 = 1f;
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[0], Local_3369.f_84, Local_3369.f_83, 1);
				if (!bLocal_2475)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_2532[1], false);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[1], iLocal_742[0], Local_3369.f_83, 1);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[1], 157000f);
					VEHICLE::_0x796A877E459B99EA(iLocal_2532[1], Local_82);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_2532[1], 1);
				}
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[0], 157000f);
				VEHICLE::_0x796A877E459B99EA(iLocal_2532[0], Local_82);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_2532[0], 1);
				func_769(iLocal_2532[0], 157000f);
				func_768();
				func_743(iLocal_2532[0], 1f);
				func_109(0);
				func_768();
			}
		}
		func_742(0, 1, 0);
		func_9(func_93(1), 1, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2486[2]) || PED::IS_PED_INJURED(iLocal_2486[2]))
		{
			iLocal_2486[2] = func_738(0, 2, Local_1683, 261.2985f, 0, 1);
			func_646(GlobalFunc_5133(0, 2));
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_2486[2], joaat("weapon_pistol"), -1, 1, 1);
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_2486[2], Local_1683, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iLocal_2486[2], 261.2985f);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_2486[2], joaat("weapon_pistol"), -1, 1, 1);
		}
		func_111();
		switch (GlobalFunc_5133(0, 2))
		{
			case 6:
				func_118(iLocal_2486[2], 7, "PAIGE");
				break;
			
			case 7:
				func_118(iLocal_2486[2], 7, "CHRISTIAN");
				break;
			
			case 12:
				func_118(iLocal_2486[2], 7, "LIEngineer");
				break;
		}
		PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iLocal_2486[2], 0);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_2486[2]);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2486[2], 1);
		PED::SET_PED_NAME_DEBUG(iLocal_2486[2], "Driver");
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2552, 0))
		{
			if (!PED::IS_PED_IN_VEHICLE(func_93(0), iLocal_2552, 0))
			{
				PED::SET_PED_INTO_VEHICLE(func_93(0), iLocal_2552, -1);
			}
			if (!PED::IS_PED_IN_VEHICLE(iLocal_2486[2], iLocal_2552, 0))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_2486[2], iLocal_2552, 0);
			}
		}
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_2486[2], joaat("weapon_pistol"), -1, 1, 1);
		if (!PED::IS_PED_IN_VEHICLE(func_93(1), iLocal_2532[2], 0))
		{
			PED::SET_PED_INTO_VEHICLE(func_93(1), iLocal_2532[2], -1);
		}
		VEHICLE::SET_RANDOM_TRAINS(0);
		iLocal_2407 = 0;
		iLocal_2406 = 1;
		iLocal_2430 = 0;
		ENTITY::SET_ENTITY_COLLISION(iLocal_2552, true, 0);
		WEAPON::REMOVE_WEAPON_ASSET(joaat("weapon_pistol"));
		if (GlobalFunc_8315() != 1)
		{
			GlobalFunc_9019(&Local_2659, 1);
			func_167(&Local_2659, 1, 0, 0);
			func_619(func_93(0));
			func_619(func_93(1));
		}
		func_130();
		func_126(1, 0);
		WEAPON::GIVE_WEAPON_TO_PED(func_93(0), joaat("weapon_pistol"), 200, 1, 1);
		iLocal_2466 = 0;
		while (iLocal_2466 <= 24)
		{
			iLocal_2431[iLocal_2466] = 0;
			iLocal_2466++;
		}
		iLocal_1512 = 0;
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
		GlobalFunc_2512();
		SYSTEM::SETTIMERA(0);
		iLocal_2424 = 0;
		iLocal_2467 = 0;
		iLocal_2406 = 1;
		iLocal_1505 = 0;
		iLocal_1506 = 0;
		iLocal_2466 = 0;
		while (iLocal_2466 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2532[iLocal_2466]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[iLocal_2466]))
				{
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_2532[iLocal_2466], iLocal_2466);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2532[iLocal_2466], 1, 1);
				}
			}
			iLocal_2466++;
		}
		func_737(&uLocal_2620);
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(func_93(1), 1);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_93(1), 1);
		fLocal_5038 = 0f;
		iLocal_128 = 0;
		iLocal_127 = 1;
		iLocal_2467 = 0;
		iLocal_1514 = 0;
		iLocal_1515 = 0;
		iLocal_3652 = 1;
		iLocal_5039 = 0;
		iLocal_2467 = 1;
	}
	else
	{
		PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		func_733();
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2532[2]))
		{
			if (!PED::IS_PED_IN_VEHICLE(func_93(1), iLocal_2532[2], 0))
			{
				PED::SET_PED_INTO_VEHICLE(func_93(1), iLocal_2532[2], -1);
			}
		}
		if (!PED::IS_PED_IN_VEHICLE(iLocal_2486[0], iLocal_2532[0], 0))
		{
			PED::SET_PED_INTO_VEHICLE(iLocal_2486[0], iLocal_2532[0], -1);
		}
		GlobalFunc_10692(&uLocal_2902, iLocal_2532[2], 0, 0, 1, 1, 1);
		switch (iLocal_2467)
		{
			case 1:
				if (iLocal_1514 == 0)
				{
					GlobalFunc_7139(&Local_2380, 0);
					func_610();
					func_611(1, 1, 1);
					GlobalFunc_2904(&Local_2659, 0, 1);
					GlobalFunc_2904(&Local_2659, 1, 0);
					SYSTEM::SETTIMERA(0);
					Local_2703.f_12 = func_93(0);
					AUDIO::START_AUDIO_SCENE("JSH_2B_CHASE_EXIT_TUNNELS");
					func_710(0.975f);
					func_709();
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2486[2]) && !ENTITY::IS_ENTITY_DEAD(iLocal_1374[0]))
					{
						TASK::TASK_DRIVE_BY(iLocal_2486[2], 0, iLocal_1374[0], 0f, -5f, 0f, 200f, 100, 0, -753768974);
					}
					iLocal_1514 = 1;
				}
				fLocal_1749 = 1f;
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_2532[0], fLocal_1749);
				func_743(iLocal_2532[0], fLocal_1749);
				func_708();
				PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
				if (func_675(&Local_3653))
				{
					Local_2703.f_19 = 1;
				}
				if (Local_2703.f_19)
				{
					STREAMING::REMOVE_ANIM_DICT(sLocal_4922);
					HUD::DISPLAY_RADAR(1);
					HUD::DISPLAY_HUD(1);
					CAM::DESTROY_CAM(Local_3653.f_1, 0);
					iLocal_5051 = CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE();
					if (CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() != 4)
					{
						CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(2);
					}
					AUDIO::STOP_AUDIO_SCENE("JSH_2B_CHASE_EXIT_TUNNELS");
					AUDIO::START_AUDIO_SCENE("JSH_2B_RAM_POLICE");
					iLocal_1514 = 0;
					func_674();
					PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(func_93(1), 1);
					if (!PED::IS_PED_IN_VEHICLE(func_93(1), iLocal_2532[2], 0))
					{
						PED::SET_PED_INTO_VEHICLE(func_93(1), iLocal_2532[2], -1);
					}
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2532[2]))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[2]);
					}
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[2], 700, "JHUBER", 1);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[2], (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_2532[0]) - fLocal_466[15]));
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[2]))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(iLocal_2532[2], 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_4894))
					{
						OBJECT::DELETE_OBJECT(&iLocal_4894);
					}
					if (GlobalFunc_5133(0, 2) != 12)
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_2486[2]) && !ENTITY::IS_ENTITY_DEAD(iLocal_1374[17]))
						{
							TASK::TASK_DRIVE_BY(iLocal_2486[2], 0, iLocal_1374[17], 0f, 0f, 0f, 2000f, 75, 0, -753768974);
						}
					}
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_2532[2], 100f);
					VEHICLE::SET_VEHICLE_STRONG(iLocal_2552, 1);
					ENTITY::SET_ENTITY_HEALTH(iLocal_2552, 1000);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_2486[2], 1);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_2552, 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2486[1]))
					{
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_2486[1], 1);
					}
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_2486[0], 1);
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_2532[0], 1);
					if (!bLocal_2475)
					{
						ENTITY::SET_ENTITY_INVINCIBLE(iLocal_2532[1], 1);
					}
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_2532[2], 0);
					VEHICLE::SET_VEHICLE_FIXED(iLocal_2532[2]);
					GlobalFunc_504(iLocal_2532[2], 815);
					AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_JSH_2A_05", 0f);
					fLocal_1749 = 0.7f;
					iLocal_5049 = MISC::GET_GAME_TIMER();
					iLocal_2467 = 2;
				}
				break;
			
			case 2:
				if (func_672() || PAD::IS_CONTROL_PRESSED(0, 71))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2552))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2552);
					}
				}
				iLocal_1510 = 0;
				iVar3 = 0;
				while (iVar3 <= 16)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1356[iVar3]))
					{
						func_669(iLocal_1356[iVar3], iLocal_2552, 0.95f, 1.45f, 1);
					}
					iVar3++;
				}
				iLocal_2466 = 17;
				while (iLocal_2466 <= 34)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1374[iLocal_2466]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_1374[iLocal_2466]))
						{
							if (ENTITY::GET_ENTITY_MODEL(iLocal_1374[iLocal_2466]) == joaat("police3"))
							{
								if (!HUD::DOES_BLIP_EXIST(uLocal_2553[iLocal_2466]))
								{
									if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1374[iLocal_2466], 0) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1374[iLocal_2466])) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1374[iLocal_2466]) > 3750f)
									{
										VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(iLocal_1374[iLocal_2466], 1);
										uLocal_2553[iLocal_2466] = GlobalFunc_6783(iLocal_1374[iLocal_2466], 1, 0);
										iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1374[iLocal_2466], -1);
										if (!PED::IS_PED_INJURED(iVar1))
										{
											PED::SET_PED_CONFIG_FLAG(iVar1, 272, 1);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, 1);
											PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar1, iLocal_2637);
											WEAPON::GIVE_WEAPON_TO_PED(iVar1, joaat("weapon_pistol"), -1, 0, 1);
											if (GlobalFunc_745())
											{
												if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[0]))
												{
													TASK::TASK_DRIVE_BY(iVar1, 0, iLocal_2532[0], 0f, 0f, 0f, 200f, 75, 1, -753768974);
												}
											}
											else if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[2]))
											{
												TASK::TASK_DRIVE_BY(iVar1, 0, iLocal_2532[2], 0f, 0f, 0f, 200f, 75, 1, -753768974);
											}
											PED::SET_PED_ACCURACY(iVar1, 80);
										}
										if (((VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_1374[iLocal_2466], 0) && iLocal_2466 != 17) && iLocal_2466 != 18) && iLocal_2466 != 20)
										{
											iVar2 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1374[iLocal_2466], 6, joaat("s_m_y_cop_01"), 0, 1, 1);
											PED::SET_PED_CONFIG_FLAG(iVar2, 272, 1);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, 1);
											WEAPON::GIVE_WEAPON_TO_PED(iVar2, joaat("weapon_pistol"), -1, 0, 1);
											PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar2, iLocal_2637);
											if (GlobalFunc_745())
											{
												if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[0]))
												{
													TASK::TASK_DRIVE_BY(iVar2, 0, iLocal_2532[0], 0f, 0f, 0f, 200f, 90, 0, -753768974);
												}
											}
											else if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[2]))
											{
												TASK::TASK_DRIVE_BY(iVar2, 0, iLocal_2532[2], 0f, 0f, 0f, 200f, 90, 0, -753768974);
											}
											PED::SET_PED_KEEP_TASK(iVar2, 1);
											PED::SET_PED_ACCURACY(iVar2, 80);
											ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar2);
										}
									}
								}
								else
								{
									iLocal_1510++;
								}
								if (func_669(iLocal_1374[iLocal_2466], iLocal_2552, 0.95f, 1.45f, 1))
								{
									func_737(&(uLocal_2553[iLocal_2466]));
								}
								if (fLocal_5038 > (fLocal_466[iLocal_2466] + 3000f))
								{
									if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1374[iLocal_2466]) || (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1720, 1) < MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_1374[iLocal_2466], 0f, 15f, 0f), Local_1720, 1) && fLocal_5038 > 214664.9f))
									{
										if (func_737(&(uLocal_2553[iLocal_2466])))
										{
											if (!ENTITY::IS_ENTITY_DEAD(iLocal_1374[iLocal_2466]))
											{
												VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1374[iLocal_2466]);
												VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_1374[iLocal_2466], 0f);
											}
										}
									}
								}
							}
						}
					}
					iLocal_2466++;
				}
				func_666();
				if (fLocal_5038 < 187929.9f)
				{
					iVar0 = func_664(func_665(), PLAYER::PLAYER_PED_ID());
				}
				else if (!bLocal_2475)
				{
					iVar0 = func_664(func_665(), iLocal_2532[1]);
				}
				else
				{
					iVar0 = func_664(func_665(), iLocal_2532[2]);
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_5053) > 5000 && iLocal_1510 > 0)
				{
					if (GlobalFunc_5133(0, 2) != 12)
					{
						if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("police3"))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_2486[2]) && !ENTITY::IS_ENTITY_DEAD(iVar0))
							{
								TASK::TASK_DRIVE_BY(iLocal_2486[2], 0, iVar0, 0f, -5f, 0f, 200f, 100, 0, -753768974);
							}
							iLocal_5053 = MISC::GET_GAME_TIMER();
						}
					}
				}
				else
				{
					TASK::CLEAR_PED_TASKS(iLocal_2486[2]);
				}
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2532[0]))
				{
					fLocal_5038 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_2532[0]);
				}
				if (ENTITY::GET_ENTITY_MODEL(iVar0) == Local_3369)
				{
					if (fLocal_5038 > 0f)
					{
						fLocal_1750 = -8.5f;
					}
					if (fLocal_5038 > 180102.8f)
					{
						fLocal_1750 = -12.75f;
					}
					if (fLocal_5038 > 182929.9f)
					{
						fLocal_1750 = -15f;
					}
					if (fLocal_5038 > 188000f)
					{
						fLocal_1750 = -16f;
					}
					if (fLocal_5038 > 201344.1f)
					{
						fLocal_1750 = -18f;
					}
					if (iLocal_1510 == 0 && iLocal_1515)
					{
						fLocal_1750 = -26f;
					}
					fLocal_1749 = func_662(iVar0, fLocal_1750);
				}
				else
				{
					if (fLocal_5038 > 0f)
					{
						fLocal_1750 = 15.5f;
					}
					if (fLocal_5038 > 180102.8f)
					{
						fLocal_1750 = 9f;
					}
					if (fLocal_5038 > 185102.8f)
					{
						fLocal_1750 = 13f;
					}
					if (fLocal_5038 > 200303.2f)
					{
						fLocal_1750 = 15.5f;
					}
					fLocal_1749 = func_662(iVar0, fLocal_1750);
				}
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_2532[0], fLocal_1749);
				func_743(iLocal_2532[0], fLocal_1749);
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2532[2]) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2532[0]))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_2532[2]) + fLocal_466[15]) < VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_2532[0])
					{
						fLocal_5036 = (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_2532[0]) - (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_2532[2]) + fLocal_466[15]));
						if (fLocal_5036 > 1500f)
						{
							fLocal_5037 = 2.25f;
						}
						else
						{
							fLocal_5037 = ((fLocal_5036 / 1500f) * 2.25f);
						}
						fLocal_1751 = (fLocal_1749 * fLocal_5037);
						if (fLocal_1751 < 1.25f)
						{
							fLocal_1751 = 1.25f;
						}
						if (!CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_2532[2], 1), 1f))
						{
							fLocal_1751 = 6f;
						}
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_2532[2], fLocal_1751);
					}
					else
					{
						iLocal_2430 = 1;
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_2532[2], fLocal_1749);
					}
				}
				if (ENTITY::IS_ENTITY_AT_COORD(func_93(0), 680.7623f, -528.5031f, 14.2773f, 165f, 165f, 100f, false, 1, 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2520))
					{
						PED::DELETE_PED(&iLocal_2520);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2521))
					{
						PED::DELETE_PED(&iLocal_2521);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2522))
					{
						PED::DELETE_PED(&iLocal_2522);
					}
				}
				func_660();
				func_708();
				func_658();
				if (HUD::DOES_BLIP_EXIST(Local_2380.f_6))
				{
					HUD::SET_BLIP_ROUTE(Local_2380.f_6, 0);
					HUD::_SET_BLIP_DISPLAY_INDICATOR_ON_BLIP(Local_2380.f_6, 1);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[0]))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2532[0]))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_2532[0]) > 213898.7f)
						{
							if (iLocal_1515 == 0)
							{
								if (bLocal_2405)
								{
									AUDIO::TRIGGER_MUSIC_EVENT("JH2A_STORM_DRAIN_MA");
								}
								else
								{
									AUDIO::TRIGGER_MUSIC_EVENT("JH2B_STORM_DRAIN_MA");
								}
								iLocal_1515 = 1;
							}
						}
					}
				}
				if (!GlobalFunc_5172(&Local_2380, 1) && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					switch (iLocal_1506)
					{
						case 0:
							if (fLocal_5038 > 0.5f)
							{
								GlobalFunc_4956();
								if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_TRAP", 9, 0, 0, 0))
								{
									iLocal_1506++;
								}
							}
							break;
						
						case 1:
							if (fLocal_5038 > 0.5f)
							{
								if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_SWITCH", 9, 0, 0, 0))
								{
									iLocal_1506++;
								}
							}
							break;
						
						case 2:
							if (!GlobalFunc_5172(&Local_2380, 1))
							{
								MISC::SET_BIT(&(Local_2380.f_13), 2);
								GlobalFunc_164(Local_3369.f_234, 7500, 1);
								iLocal_1506++;
							}
							break;
						
						case 3:
							if (fLocal_5038 > 168995.5f)
							{
								if (!func_657(PLAYER::PLAYER_PED_ID()))
								{
									GlobalFunc_4956();
									if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_CROSS", 9, 0, 0, 0))
									{
										func_656("JH_FRSAVE2", 0, 0, 1);
										if (func_117())
										{
											func_656("JH_OHSHIT_ET", 0, 0, 1);
										}
										else
										{
											func_656("JH_OHSHIT_KD", 0, 0, 1);
										}
										iLocal_5049 = MISC::GET_GAME_TIMER();
										iLocal_1506++;
									}
								}
								else if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_FRSAVE2", 9, 0, 0, 0))
								{
									iLocal_1506++;
								}
							}
							break;
						
						case 4:
							if ((fLocal_5038 > 173000f && HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()) || (fLocal_5038 > 177000f && !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()))
							{
								if (func_657(PLAYER::PLAYER_PED_ID()))
								{
									GlobalFunc_4956();
									if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_RIVERLEFT", 9, 0, 0, 0))
									{
										if (func_117())
										{
											func_656("JH_OHSHIT_ET", 0, 0, 1);
										}
										else
										{
											func_656("JH_OHSHIT_KD", 0, 0, 1);
										}
										iLocal_1506++;
									}
								}
								else
								{
									if (func_117())
									{
										func_656("JH_OHSHIT_ET", 0, 0, 1);
									}
									else
									{
										func_656("JH_OHSHIT_KD", 0, 0, 1);
									}
									iLocal_1506++;
								}
							}
							break;
						
						case 5:
							if (fLocal_5038 > 206199.1f)
							{
								if (!func_657(PLAYER::PLAYER_PED_ID()))
								{
									GlobalFunc_4956();
									if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_RIVERRIGH", 9, 0, 0, 0))
									{
										iLocal_1506++;
									}
								}
							}
							break;
						}
				}
				if (!GlobalFunc_5172(&Local_2380, 1) && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					switch (iLocal_1507)
					{
						case 0:
							if (iLocal_1510 > 0)
							{
								if (fLocal_5038 > 175159f)
								{
									if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10) > 5)
									{
										GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_RIVERHLPR", 9, 0, 0, 0);
										iLocal_1507++;
									}
									else
									{
										GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_RIVERMORF", 9, 0, 0, 0);
										iLocal_1507++;
									}
								}
								else
								{
									iLocal_1507++;
								}
							}
							break;
						
						case 1:
							if (fLocal_5038 > 190433.2f)
							{
								if (iLocal_1510 > 0)
								{
									if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10) > 5)
									{
										GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_RIVERHLPR", 9, 0, 0, 0);
										iLocal_1507++;
									}
									else
									{
										GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_RIVERMORF", 9, 0, 0, 0);
										iLocal_1507++;
									}
								}
								else
								{
									iLocal_1507++;
								}
							}
							break;
						
						case 2:
							if (!GlobalFunc_5172(&Local_2380, 1))
							{
								if (func_537())
								{
									if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_HCKINT_PH", 9, 0, 0, 0))
									{
										iLocal_1507++;
									}
								}
								else if (func_536())
								{
									if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_HCKINT_CF", 9, 0, 0, 0))
									{
										iLocal_1507++;
									}
								}
								else if (func_535())
								{
									if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_HCKINT_RL", 9, 0, 0, 0))
									{
										iLocal_1507++;
									}
								}
							}
							break;
						
						case 3:
							if (!GlobalFunc_5172(&Local_2380, 1))
							{
								if (func_113())
								{
									if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_COPS_GM", 9, 0, 0, 0))
									{
										iLocal_1507++;
									}
								}
								else if (func_114())
								{
									if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_COPS_PM", 9, 0, 0, 0))
									{
										iLocal_1507++;
									}
								}
							}
							break;
						
						case 4:
							if (fLocal_5038 > 202000.8f)
							{
								if (iLocal_1510 > 0)
								{
									if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10) > 5)
									{
										GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_RIVERHLPR", 9, 0, 0, 0);
										iLocal_1507++;
									}
									else
									{
										GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_RIVERMORF", 9, 0, 0, 0);
										iLocal_1507++;
									}
								}
								else
								{
									iLocal_1507++;
								}
							}
							break;
						
						case 5:
							if (fLocal_5038 > 208199.1f && iLocal_1510 > 0)
							{
								if (!GlobalFunc_5172(&Local_2380, 1))
								{
									if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_NORIVER", 9, 0, 0, 0))
									{
										iLocal_1507++;
									}
								}
							}
							break;
						}
				}
				if ((((iLocal_1510 > 0 && !GlobalFunc_5172(&Local_2380, 1)) && !func_655()) && !func_654()) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2532[2]))
				{
					if ((ENTITY::GET_ENTITY_HEALTH(iLocal_2532[2]) - iLocal_95) > 0 && (MISC::GET_GAME_TIMER() - iLocal_5049) > 4000)
					{
						if (iLocal_5058 == 0)
						{
							if (func_117())
							{
								if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_COPOFF_ET", 9, 0, 0, 0))
								{
									iLocal_5058 = 1;
									iLocal_5049 = MISC::GET_GAME_TIMER();
									iLocal_95 = ENTITY::GET_ENTITY_HEALTH(iLocal_2532[2]);
								}
							}
							else if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_COPOFF_KD", 9, 0, 0, 0))
							{
								iLocal_5058 = 1;
								iLocal_5049 = MISC::GET_GAME_TIMER();
								iLocal_95 = ENTITY::GET_ENTITY_HEALTH(iLocal_2532[2]);
							}
						}
						else if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_RIVERDAMA", 9, 0, 0, 0))
						{
							iLocal_5058 = 0;
							iLocal_5049 = MISC::GET_GAME_TIMER();
							iLocal_95 = ENTITY::GET_ENTITY_HEALTH(iLocal_2532[2]);
						}
					}
					switch (iLocal_1505)
					{
						case 0:
							if ((MISC::GET_GAME_TIMER() - iLocal_5049) > 6000)
							{
								if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_2532[2]) < 500f)
								{
									iLocal_1505 = 3;
								}
								else
								{
									iLocal_1505 = 1;
								}
								iLocal_5049 = MISC::GET_GAME_TIMER();
							}
							break;
						
						case 1:
							if (iLocal_5058 == 0)
							{
								if (func_117())
								{
									if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_COPOFF_ET", 9, 0, 0, 0))
									{
										iLocal_5058 = 1;
										iLocal_1505 = 2;
									}
								}
								else if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_COPOFF_KD", 9, 0, 0, 0))
								{
									iLocal_5058 = 1;
									iLocal_1505 = 2;
								}
							}
							else if ((func_657(func_93(1)) && !func_657(PLAYER::PLAYER_PED_ID())) || (!func_657(func_93(1)) && func_657(PLAYER::PLAYER_PED_ID())))
							{
								if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_RIVERSIDE", 9, 0, 0, 0))
								{
									iLocal_5058 = 0;
									iLocal_1505 = 2;
								}
							}
							else if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_RIVERHELP", 9, 0, 0, 0))
							{
								iLocal_5058 = 0;
								iLocal_1505 = 2;
							}
							break;
						
						case 2:
							if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_MIKECOPS", 9, 0, 0, 0))
							{
								iLocal_1505 = 0;
							}
							break;
						}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_1374[24]))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1374[24]))
					{
						if (func_653(iLocal_1374[24]) > 10f)
						{
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_2532[2], (20f + (83f - func_653(iLocal_1374[24]))));
						}
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_1374[22]))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1374[22]))
					{
						if (func_653(iLocal_1374[22]) > 10f)
						{
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_2532[2], (20f + (88f - func_653(iLocal_1374[22]))));
						}
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[2]))
				{
					if (((VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_2532[2]) < 100f && VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_2532[2]) > 40f) && (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_2532[2]) - fLocal_5050) != 0f) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2532[2]))
					{
						iLocal_1505 = -1;
						if ((MISC::GET_GAME_TIMER() - iLocal_5049) > 8000)
						{
							if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_MOREDAM", 9, 0, 0, 0))
							{
								iLocal_5049 = MISC::GET_GAME_TIMER();
							}
						}
						iLocal_5052 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
						if (((MISC::GET_GAME_TIMER() - iLocal_5049) % 5) == 0)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_2532[iLocal_5052]))
							{
								MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2532[iLocal_5052], 0.5f, -2f, 0.1f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2532[iLocal_5052], 0f, 0f, 0.2f), 1, 1, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
							}
						}
					}
					if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_2532[2]) < 40f)
					{
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(func_93(1), 2);
						if ((((MISC::GET_GAME_TIMER() - iLocal_5049) > 5000 && (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_2532[2]) - fLocal_5050) != 0f) && PED::IS_PED_IN_VEHICLE(func_93(1), iLocal_2532[2], 0)) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2532[2]))
						{
							if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_RIVERDAM2", 9, 0, 0, 0))
							{
								iLocal_5049 = MISC::GET_GAME_TIMER();
							}
							iLocal_5052 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
							if (((MISC::GET_GAME_TIMER() - iLocal_5049) % 2) == 0)
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_2532[iLocal_5052]))
								{
									MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2532[iLocal_5052], 0.5f, -2f, 0.1f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2532[iLocal_5052], 0f, 0f, 0.2f), 1, 1, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
								}
							}
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_2532[2], 5f);
						}
						if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_2532[2]) < 30f)
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2532[2]))
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[2]);
								VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_2532[2], 30f);
								PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(func_93(1), 2);
							}
							else if (PED::CAN_KNOCK_PED_OFF_VEHICLE(func_93(1)))
							{
								PED::KNOCK_PED_OFF_VEHICLE(func_93(1));
								iLocal_5049 = MISC::GET_GAME_TIMER();
							}
						}
						Local_5054 = { ENTITY::GET_ENTITY_ROTATION(iLocal_2532[2], 2) };
						if (((Local_5054.f_1 > 70f && Local_5054.f_1 < 290f) || (Local_5054.x > 70f && Local_5054.x < 290f)) || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_2532[2]) < 15f)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[2]))
							{
								SYSTEM::WAIT(1000);
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[2]))
							{
								VEHICLE::EXPLODE_VEHICLE(iLocal_2532[2], 1, 0);
								ENTITY::SET_ENTITY_HEALTH(func_93(1), 0);
							}
						}
					}
					fLocal_5050 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_2532[2]);
				}
				if ((iLocal_1510 == 0 && iLocal_1515) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2532[2], 0))
				{
					if (iLocal_5039 == 0)
					{
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_2526);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_2527);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_2528);
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_2529);
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_2530);
						TASK::CLEAR_PED_TASKS(iLocal_2486[2]);
						if (GlobalFunc_697(GlobalFunc_5133(0, 1)) == 0)
						{
							func_656("JH_BRANCH2", 0, 0, 1);
							func_656("JH_BRANCH3A", 0, 0, 1);
							func_656("JH_BRANCH4A", 0, 0, 1);
							if (Global_89962.f_12[1] == 0)
							{
								func_656("JH_BRANCH5A", 0, 0, 1);
							}
							else
							{
								func_656("JH_BRANCH5B", 0, 0, 1);
							}
						}
						else
						{
							if (func_537())
							{
								func_604("JH_HCKNO_PH", 1, 1, 1, 9, 0, 0);
							}
							else if (func_536())
							{
								func_604("JH_HCKNO_CF", 1, 1, 1, 9, 0, 0);
							}
							else if (func_535())
							{
								func_604("JH_HCKNO_RL", 1, 1, 1, 9, 0, 0);
							}
							func_656("JH_LATECOPS1", 0, 0, 1);
						}
						iLocal_5039 = 1;
					}
				}
				else
				{
					PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
				}
				if (func_650(&Local_2380, Local_1716, 12f, 8f, 2f, 1, iLocal_2552, Local_3369.f_234, Local_3369.f_233, Local_3369.f_233, 0, 0, 1, -1))
				{
					while (!GlobalFunc_530(iLocal_2552, 6f, 5, 1056964608, 0, 1))
					{
						SYSTEM::WAIT(0);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					if (bLocal_2405)
					{
						AUDIO::TRIGGER_MUSIC_EVENT("JH2A_ARRIVE_DRAIN_MA");
					}
					iLocal_2467 = 6;
				}
				break;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[0]))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_2532[0], Local_1716, 12f, 8f, 8f, false, 1, 0))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_2532[0], 2f, -1, 0);
				if (!PED::IS_PED_INJURED(iLocal_2486[0]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2486[0], 1);
				}
			}
		}
		if (!bLocal_2475)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[1]))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_2532[1], Local_1716, 12f, 8f, 8f, false, 1, 0))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_2532[1], 2f, -1, 0);
					if (!PED::IS_PED_INJURED(iLocal_2486[1]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2486[1], 1);
					}
				}
			}
		}
		if (!GlobalFunc_8315() == 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[2]))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_2532[2], Local_1716, 12f, 8f, 8f, false, 1, 0))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_2532[2], 2f, -1, 0);
					if (!ENTITY::IS_ENTITY_DEAD(func_93(1)))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_93(1), 1);
					}
				}
			}
		}
		if (iLocal_2467 >= 6)
		{
			AUDIO::STOP_AUDIO_SCENE("JSH_2B_RAM_POLICE");
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			if (!ENTITY::IS_ENTITY_DEAD(func_93(1)))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(func_93(1), 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(func_93(0)))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(func_93(0), 0);
			}
			CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
			iLocal_2466 = 0;
			while (iLocal_2466 <= 3)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2552, 0) && (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2538[iLocal_2466], 0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2538[iLocal_2466], 0)))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2505[iLocal_2466]))
					{
						PED::DELETE_PED(&(iLocal_2505[iLocal_2466]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2512[iLocal_2466]))
					{
						PED::DELETE_PED(&(iLocal_2512[iLocal_2466]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2538[iLocal_2466]))
					{
						VEHICLE::DELETE_VEHICLE(&(iLocal_2538[iLocal_2466]));
					}
				}
				iLocal_2466++;
			}
			WEAPON::REMOVE_WEAPON_ASSET(joaat("weapon_smg"));
			iLocal_2466 = 0;
			while (iLocal_2466 <= 2)
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_2615[iLocal_2466]))
				{
					HUD::REMOVE_BLIP(&(uLocal_2615[iLocal_2466]));
				}
				iLocal_2466++;
			}
			ENTITY::SET_ENTITY_PROOFS(iLocal_2552, 0, 0, 0, 0, 0, 0, 0, 0);
			iLocal_2406 = 0;
			return 1;
		}
	}
	return 0;
}


bool func_650(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15)//Position - 0x667FA
{
	return func_490(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 5, 0, 0, 0, iParam8, sParam9, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), sParam10, 0, bParam12, sParam11, 0, iParam13, bParam14, iParam15, 0, 0, 0, 1, 1065353216);
}



float func_653(int iParam0)//Position - 0x66867
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			return (100f * (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0) / VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(iVar0)));
		}
	}
	else
	{
		return -1f;
	}
	return -1f;
}

int func_654()//Position - 0x668AB
{
	iLocal_2926 = 0;
	while (iLocal_2926 <= 7)
	{
		if (Local_2931[iLocal_2926 /*7*/].f_2)
		{
			if (Local_2931[iLocal_2926 /*7*/].f_3 == 1)
			{
				return 1;
			}
		}
		iLocal_2926++;
	}
	return 0;
}

int func_655()//Position - 0x668E9
{
	iLocal_2926 = 0;
	while (iLocal_2926 <= 7)
	{
		if (Local_2931[iLocal_2926 /*7*/].f_2)
		{
			if (Local_2931[iLocal_2926 /*7*/].f_3 == 0)
			{
				return 1;
			}
		}
		iLocal_2926++;
	}
	return 0;
}

void func_656(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x66927
{
	int iVar0;
	
	iVar0 = -1;
	iLocal_2926 = 0;
	while (iLocal_2926 < 8 && iVar0 == -1)
	{
		if (Local_2931[iLocal_2926 /*7*/].f_2 == 0)
		{
			iVar0 = iLocal_2926;
		}
		iLocal_2926++;
	}
	if (iVar0 != -1)
	{
		Local_2931[iVar0 /*7*/] = sParam0;
		Local_2931[iVar0 /*7*/].f_1 = MISC::GET_HASH_KEY(sParam0);
		Local_2931[iVar0 /*7*/].f_2 = 1;
		Local_2931[iVar0 /*7*/].f_6 = 1;
		Local_2931[iVar0 /*7*/].f_3 = iParam1;
		Local_2931[iVar0 /*7*/].f_4 = iParam3;
		Local_2931[iVar0 /*7*/].f_5 = iParam2;
	}
}

int func_657(int iParam0)//Position - 0x669B9
{
	if (((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 893.9555f, -388.9572f, 33.31392f, 765.801f, -419.5653f, 19.3361f, 25.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 623.364f, -511.0277f, 13.72464f, 732.4224f, -403.3153f, 35.58072f, 46.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 623.364f, -511.0277f, 11.97464f, 569.4682f, -648.6313f, 27.65489f, 46.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 575.3029f, -612.5222f, 7.281809f, 562.2474f, -1278.585f, 23.74253f, 46.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 653.6655f, -1606.389f, 2.708879f, 562.2474f, -1278.585f, 23.74253f, 46.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 653.6655f, -1606.389f, 2.708879f, 634.5008f, -1797.158f, 25.87507f, 46.25f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_658()//Position - 0x66AEF
{
	if (PED::IS_PED_IN_VEHICLE(func_93(0), iLocal_2552, 0))
	{
		if (!HUD::DOES_BLIP_EXIST(uLocal_2615[0]))
		{
			uLocal_2615[0] = GlobalFunc_6797(iLocal_2486[0], 0, 145);
		}
		if (!bLocal_2475)
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_2615[1]))
			{
				uLocal_2615[1] = GlobalFunc_6797(iLocal_2486[1], 0, 145);
			}
		}
		if (!HUD::DOES_BLIP_EXIST(uLocal_2615[2]))
		{
			uLocal_2615[2] = GlobalFunc_6797(func_93(1), 0, 145);
		}
	}
	else
	{
		func_737(&(uLocal_2615[0]));
		if (!bLocal_2475)
		{
			func_737(&(uLocal_2615[1]));
		}
		func_737(&(uLocal_2615[2]));
	}
}


void func_660()//Position - 0x66BED
{
	switch (iLocal_5057)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(func_93(0), 680.7623f, -528.5031f, 14.2773f, 105f, 105f, 100f, false, 1, 0))
			{
				STREAMING::REQUEST_MODEL(joaat("primo"));
				iLocal_5057++;
			}
			break;
		
		case 1:
			iLocal_2523 = PED::CREATE_PED(6, Local_3369.f_15, 680.7623f, -528.5031f, 14.2773f, 112.5884f, 1, 1);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_2523, 680.7623f, -528.5031f, 14.2773f, 2f, 0, 0);
			func_661(iLocal_2523, 0);
			TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iLocal_2523, 680.7623f, -528.5031f, 14.2773f, 200f, 0);
			iLocal_5057++;
			break;
		
		case 2:
			iLocal_2524 = PED::CREATE_PED(6, Local_3369.f_15, 683.2385f, -529.8103f, 14.3534f, 172.5926f, 1, 1);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_2524, 683.2385f, -529.8103f, 14.3534f, 2f, 0, 0);
			func_661(iLocal_2524, 0);
			TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iLocal_2524, 680.7623f, -528.5031f, 14.2773f, 200f, 0);
			iLocal_5057++;
			break;
		
		case 3:
			iLocal_2525 = PED::CREATE_PED(6, Local_3369.f_15, 668.7509f, -522.4036f, 14.2263f, 66f, 1, 1);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_2525, 668.7509f, -522.4036f, 14.2263f, 2f, 0, 0);
			func_661(iLocal_2525, 0);
			TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iLocal_2525, 680.7623f, -528.5031f, 14.2773f, 200f, 0);
			iLocal_5057++;
			break;
		
		case 4:
			if (STREAMING::HAS_MODEL_LOADED(joaat("primo")))
			{
				iLocal_2529 = VEHICLE::CREATE_VEHICLE(joaat("primo"), 575.9414f, -1103.27f, 9.199f, 227.2179f, 1, 1);
				VEHICLE::EXPLODE_VEHICLE(iLocal_2529, 1, 0);
				iLocal_5057++;
			}
			break;
		
		case 5:
			iLocal_2530 = VEHICLE::CREATE_VEHICLE(joaat("primo"), 565.9907f, -1116.246f, 9.1632f, 303.9077f, 1, 1);
			VEHICLE::EXPLODE_VEHICLE(iLocal_2530, 1, 0);
			iLocal_5057++;
			break;
		
		case 6:
			if (ENTITY::IS_ENTITY_AT_COORD(func_93(0), 581.0883f, -840.3623f, 9.9252f, 100f, 100f, 100f, false, 1, 0))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_2523);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_2524);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_2525);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("primo"));
				iLocal_2526 = PED::CREATE_PED(6, Local_3369.f_15, 581.0883f, -840.3623f, 9.9252f, 333.9399f, 1, 1);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_2526, 581.0883f, -840.3623f, 9.9252f, 2f, 0, 0);
				func_661(iLocal_2526, 0);
				TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iLocal_2526, 581.0883f, -840.3623f, 9.9252f, 200f, 0);
				iLocal_5057++;
			}
			break;
		
		case 7:
			iLocal_2527 = PED::CREATE_PED(6, Local_3369.f_15, 575.5164f, -839.3569f, 9.9279f, 348.5494f, 1, 1);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_2527, 575.5164f, -839.3569f, 9.9279f, 2f, 0, 0);
			func_661(iLocal_2527, 0);
			TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iLocal_2527, 581.0883f, -840.3623f, 9.9252f, 200f, 0);
			iLocal_5057++;
			break;
		
		case 8:
			iLocal_2528 = PED::CREATE_PED(6, Local_3369.f_15, 571.9435f, -839.0884f, 9.9286f, 356.4424f, 1, 1);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_2528, 571.9435f, -839.0884f, 9.9286f, 2f, 0, 0);
			func_661(iLocal_2528, 0);
			TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iLocal_2528, 581.0883f, -840.3623f, 9.9252f, 200f, 0);
			iLocal_5057++;
			break;
	}
}

void func_661(int iParam0, bool bParam1)//Position - 0x66FB9
{
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iLocal_2637);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 13, bParam1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 14, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 8, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 9, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 1, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, true);
	PED::SET_PED_ALERTNESS(iParam0, 3);
	PED::SET_PED_COMBAT_ABILITY(iParam0, 0);
	if (bParam1)
	{
		PED::SET_PED_COMBAT_RANGE(iParam0, 0);
	}
	else
	{
		PED::SET_PED_COMBAT_RANGE(iParam0, 2);
	}
	PED::SET_PED_GENERATES_DEAD_BODY_EVENTS(iParam0, 0);
	PED::SET_PED_SEEING_RANGE(iParam0, 60f);
	PED::SET_PED_HEARING_RANGE(iParam0, 60f);
	PED::SET_PED_ACCURACY(iParam0, 0);
	WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("weapon_pistol"), -1, 1, 1);
}

float func_662(int iParam0, float fParam1)//Position - 0x67055
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	
	Var0 = { 0f, 0f, 0f };
	Var3 = { 0f, 2.5f, 0f };
	Var7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2552, Var3) };
	Var0.f_1 = -10f;
	if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2532[0]))
	{
		fVar6 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_2532[0]);
		if (fVar6 > 135000f)
		{
			fLocal_1462 = 0.675f;
			fLocal_1463 = 1.95f;
		}
		if (fVar6 > 175000f)
		{
			fLocal_1462 = 0.8f;
			fLocal_1463 = 1.75f;
		}
		if (fVar6 > 190000f)
		{
			fLocal_1462 = 0.525f;
			fLocal_1463 = 1.75f;
		}
		if (fVar6 > 184714.5f && fVar6 < 186961f)
		{
			fLocal_1462 = 0.525f;
			fLocal_1463 = 1.3f;
		}
		if (fVar6 > 207559.5f && fVar6 < 215057.1f)
		{
			fLocal_1462 = 0.525f;
			fLocal_1463 = 1.15f;
		}
		if (fVar6 > 231790.1f)
		{
			fLocal_1462 = 0.5f;
			fLocal_1463 = 1f;
		}
	}
	if (fParam1 != -1f)
	{
		Var0.f_1 = fParam1;
	}
	PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var7, Local_1720, 1) < MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var0), Local_1720, 1) && fVar6 > 170211.4f)
			{
				fLocal_1459 = fLocal_1463;
				fLocal_88 = 0.35f;
			}
			else
			{
				fLocal_1459 = (fLocal_1460 / MISC::GET_DISTANCE_BETWEEN_COORDS(Var7, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var0), 1));
				fLocal_88 = 0.225f;
				PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
				VEHICLE::SET_VEHICLE_CHEAT_POWER_INCREASE(iLocal_2552, 1.8f);
			}
			if (fLocal_1461 < fLocal_1459)
			{
				fLocal_1461 = (fLocal_1461 + (fLocal_88 * SYSTEM::TIMESTEP()));
			}
			else
			{
				fLocal_1461 = (fLocal_1461 - (0.75f * SYSTEM::TIMESTEP()));
			}
			if (fLocal_1461 < fLocal_1462)
			{
				fLocal_1461 = fLocal_1462;
			}
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Local_3369)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var7, Local_1720, 1) < MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, -1.75f, 0f), Local_1720, 1) && !iLocal_1515)
				{
					fLocal_1461 = fLocal_1463;
					PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 2.5f);
				}
			}
		}
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 693.0313f, -520.2139f, 20.34405f, 629.4738f, -657.351f, 11.14848f, 46f, 0, 1, 0))
	{
		PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 2.55f);
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 560.6207f, -1202.87f, 41.15839f, 558.3175f, -749.7428f, 8.30583f, 46.75f, 0, 1, 0))
	{
		PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 2.55f);
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 705.6175f, -1545.083f, 6.983787f, 632.2512f, -1315.325f, 18.49226f, 46f, 0, 1, 0))
	{
		PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 2.55f);
	}
	if (GlobalFunc_156(iLocal_2552, iLocal_2532[0], 1) < 10f || GlobalFunc_156(iLocal_2552, iLocal_2532[2], 1) < 10f)
	{
		PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 14.5f);
		VEHICLE::SET_VEHICLE_CHEAT_POWER_INCREASE(iLocal_2552, 0.7f);
	}
	if (!bLocal_2475)
	{
		if (GlobalFunc_156(iLocal_2552, iLocal_2532[1], 1) < 10f)
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 14.5f);
			VEHICLE::SET_VEHICLE_CHEAT_POWER_INCREASE(iLocal_2552, 0.7f);
		}
	}
	if (iLocal_1510 == 0 && iLocal_1515)
	{
		VEHICLE::SET_VEHICLE_CHEAT_POWER_INCREASE(iLocal_2552, 1f);
	}
	return fLocal_1461;
}


int func_664(int iParam0, int iParam1)//Position - 0x67439
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	fVar1 = 1000000f;
	iVar0 = 0;
	while (iVar0 <= 34)
	{
		if (iVar0 != 14 && ENTITY::DOES_ENTITY_EXIST(iLocal_1374[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1374[iVar0]))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1374[iVar0]))
				{
					if ((ENTITY::GET_ENTITY_MODEL(iLocal_1374[iVar0]) == joaat("police") || ENTITY::GET_ENTITY_MODEL(iLocal_1374[iVar0]) == joaat("police2")) || ENTITY::GET_ENTITY_MODEL(iLocal_1374[iVar0]) == joaat("police3"))
					{
						if (GlobalFunc_156(iParam1, iLocal_1374[iVar0], 1) < fVar1)
						{
							fVar1 = GlobalFunc_156(iParam1, iLocal_1374[iVar0], 1);
							iVar2 = iVar0;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (fVar1 > GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iParam0, 1))
	{
		return iParam0;
	}
	return iLocal_1374[iVar2];
}

int func_665()//Position - 0x6751A
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = 1E+08f;
	fVar1 = 1E+08f;
	fVar2 = 1E+08f;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2532[0]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[0]))
		{
			fVar0 = GlobalFunc_156(iLocal_2532[0], PLAYER::PLAYER_PED_ID(), 1);
		}
	}
	if (!bLocal_2475)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2532[1]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[1]))
			{
				fVar1 = GlobalFunc_156(iLocal_2532[1], PLAYER::PLAYER_PED_ID(), 1);
			}
		}
	}
	if (iLocal_2430)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2532[2]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[2]))
			{
				fVar2 = GlobalFunc_156(iLocal_2532[2], PLAYER::PLAYER_PED_ID(), 1);
			}
		}
	}
	if (fVar0 < fVar1 && fVar0 < fVar2)
	{
		return iLocal_2532[0];
	}
	if (!bLocal_2475)
	{
		if (fVar1 < fVar0 && fVar1 < fVar2)
		{
			return iLocal_2532[1];
		}
	}
	if (fVar2 < fVar0 && fVar2 < fVar1)
	{
		return iLocal_2532[2];
	}
	return 0;
}

void func_666()//Position - 0x67621
{
	iLocal_120 = 1;
}



int func_669(int iParam0, int iParam1, float fParam2, float fParam3, bool bParam4)//Position - 0x67660
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	float fVar15;
	float fVar16;
	bool bVar17;
	int iVar18;
	float fVar19;
	float fVar20;
	
	if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("JWL_HEIST_CAR_SMASHES_BIG", 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam1, iParam0) && !ENTITY::IS_ENTITY_IN_AIR(iParam0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iParam0);
				}
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, 1)) };
				Var3 = { Local_2656 };
				Var6 = { Local_2656 };
				Var9 = { ENTITY::GET_ENTITY_SPEED_VECTOR(iParam1, 0) };
				Var12 = { ENTITY::GET_ENTITY_SPEED_VECTOR(iParam0, 0) };
				fVar15 = ENTITY::GET_ENTITY_SPEED(iParam1);
				fVar16 = ENTITY::GET_ENTITY_SPEED(iParam0);
				bVar17 = false;
				iVar18 = 0;
				if (MISC::ABSF(Var0.x) > (fParam2 + fParam3))
				{
					iVar18 = 0;
				}
				else if (Var0.f_1 > 0f)
				{
					iVar18 = 1;
				}
				else
				{
					iVar18 = 2;
				}
				if (bParam4)
				{
					fVar19 = 0.6f;
					fVar20 = 5f;
				}
				else
				{
					fVar19 = 1.4f;
					fVar20 = 15f;
				}
				switch (iVar18)
				{
					case 0:
						if (MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var9.x, Var9.f_1, Var12.x, Var12.f_1) > 2.5f && fVar15 > fVar20)
						{
							Var3.x = -Var0.x;
							Var3.f_1 = 0f;
							Var3.f_2 = 0f;
							Var3 = { GlobalFunc_107(Var3) };
							Var3.x = (Var3.x * fVar19);
							Var3.f_2 = fVar19;
							Var6.x = Var0.x;
							Var6.f_1 = 0f;
							Var6.f_2 = 0f;
							if (Var0.x > 0f)
							{
								VEHICLE::SMASH_VEHICLE_WINDOW(iParam0, 1);
								VEHICLE::SMASH_VEHICLE_WINDOW(iParam0, 3);
							}
							else
							{
								VEHICLE::SMASH_VEHICLE_WINDOW(iParam0, 0);
								VEHICLE::SMASH_VEHICLE_WINDOW(iParam0, 2);
							}
							bVar17 = true;
						}
						break;
					
					case 1:
						if (fVar16 > fVar20)
						{
							Var3.x = 0f;
							Var3.f_1 = -Var0.f_1;
							Var3.f_2 = 0f;
							Var3 = { GlobalFunc_107(Var3) };
							Var3.f_1 = (Var3.f_1 * fVar19);
							Var3.f_2 = 0f;
							Var6.x = (Var0.x / 2f);
							Var6.f_1 = Var0.f_1;
							Var6.f_2 = 0f;
							VEHICLE::SMASH_VEHICLE_WINDOW(iParam0, 1);
							VEHICLE::SMASH_VEHICLE_WINDOW(iParam0, 0);
							bVar17 = true;
						}
						break;
					
					case 2:
						if (fVar15 > fVar20)
						{
							Var3.x = -Var0.x;
							Var3.f_1 = 0f;
							Var3.f_2 = 0f;
							Var3 = { GlobalFunc_107(Var3) };
							Var3.x = (Var3.x * fVar19);
							Var3.f_2 = 0f;
							Var6.x = Var0.x;
							Var6.f_1 = (Var0.f_1 / 2f);
							Var6.f_2 = 0f;
							VEHICLE::SMASH_VEHICLE_WINDOW(iParam0, 3);
							VEHICLE::SMASH_VEHICLE_WINDOW(iParam0, 2);
							bVar17 = true;
						}
						break;
				}
				if (bVar17)
				{
					VEHICLE::SET_VEHICLE_DAMAGE(iParam0, Var0, 20f, 100f, 1);
					if (Var6.x > 1.7f)
					{
						Var6.x = 1.7f;
					}
					if (Var6.x < -1.7f)
					{
						Var6.x = -1.7f;
					}
					if (Var6.f_1 > 1.7f)
					{
						Var6.f_1 = 1.7f;
					}
					if (Var6.f_1 < -1.7f)
					{
						Var6.f_1 = -1.7f;
					}
					if (Var6.f_2 > 1.7f)
					{
						Var6.f_2 = 1.7f;
					}
					if (Var6.f_2 < -1.7f)
					{
						Var6.f_2 = -1.7f;
					}
					Var3 = { Var3 * Vector(0.72f, 0.72f, 0.72f) };
					if (!GlobalFunc_5172(&Local_2380, 1))
					{
						GlobalFunc_5157(&uLocal_2737, "JHAUD", "JH_SMASHCOPS", 9, 0, 0);
					}
					if (!ENTITY::IS_ENTITY_DEAD(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1)))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1), 0);
						WEAPON::GIVE_WEAPON_TO_PED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1), joaat("weapon_pistol"), -1, 0, 1);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1), 200f, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1), 1, false);
					}
					if ((MISC::GET_GAME_TIMER() - iLocal_4943) > 2500)
					{
						RECORDING::_0x293220DA1B46CEBC(3f, 2f, 3);
						iLocal_4942 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_4942, "Destroy_Cop_Car", iParam0, "JEWEL_HEIST_SOUNDS", 0, 0);
						iLocal_4943 = MISC::GET_GAME_TIMER();
					}
					if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) > 100f)
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 20f);
					}
					if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iParam0) > 100f)
					{
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iParam0, 75f);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}



int func_672()//Position - 0x67A96
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	GlobalFunc_612(&uVar0, &uVar1, &uVar2, &uVar3, 0);
	if ((MISC::ABSI(uVar0) > 75 || MISC::ABSI(uVar1) > 75) || PAD::IS_CONTROL_JUST_PRESSED(0, 25))
	{
		return 1;
	}
	return 0;
}


void func_674()//Position - 0x67BAD
{
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(12, 1);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(2, 1);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(4, 1);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(7, 1);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(8, 1);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(9, 1);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(10, 1);
	MISC::ENABLE_DISPATCH_SERVICE(1, 0);
	MISC::ENABLE_DISPATCH_SERVICE(12, 0);
	MISC::ENABLE_DISPATCH_SERVICE(2, 0);
	MISC::ENABLE_DISPATCH_SERVICE(4, 0);
	MISC::ENABLE_DISPATCH_SERVICE(7, 0);
	MISC::ENABLE_DISPATCH_SERVICE(8, 0);
	MISC::ENABLE_DISPATCH_SERVICE(9, 0);
	MISC::ENABLE_DISPATCH_SERVICE(10, 0);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 4, 0);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
}

int func_675(var uParam0)//Position - 0x67C2F
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
	switch (iLocal_3652)
	{
		case 0:
			break;
		
		case 1:
			STREAMING::SET_GAME_PAUSES_FOR_STREAMING(0);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[2]))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_2532[2], 1);
			}
			RECORDING::_0x48621C9FCA3EBD28(3);
			CAM::DESTROY_ALL_CAMS(0);
			func_707(uParam0, iLocal_2532[2], iLocal_2552);
			GlobalFunc_7718(uParam0);
			CAM::SET_CAM_ACTIVE(uParam0->f_1, 1);
			CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
			GRAPHICS::ANIMPOSTFX_PLAY("SwitchOpenFranklin", 0, 0);
			HUD::DISPLAY_RADAR(0);
			HUD::DISPLAY_HUD(0);
			GlobalFunc_8316(1, 1, 1, 0);
			iLocal_4907 = 0;
			iLocal_4908 = 0;
			iLocal_4909 = 0;
			iLocal_4916 = 0;
			iLocal_4917 = 0;
			iLocal_4918 = 0;
			iLocal_4919 = 0;
			iLocal_4920 = 0;
			iLocal_4921 = 0;
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
			}
			SYSTEM::SETTIMERB(0);
			iLocal_3652 = 2;
		
		case 2:
			if (CAM::IS_CAM_ACTIVE(uParam0->f_1))
			{
				iVar0 = func_677(uParam0);
				fVar1 = CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1);
				if (GlobalFunc_8315() != 0)
				{
					if (iVar0 >= uParam0->f_1218)
					{
						GlobalFunc_9019(&Local_2659, 0);
						Local_2659.f_39 = 1;
						Local_2659.f_7 = 0;
						func_167(&Local_2659, 1, 0, 0);
					}
				}
				if (iLocal_4908 == 0)
				{
					if (iVar0 >= uParam0->f_1218)
					{
						func_676();
						iLocal_4908 = 1;
					}
				}
				if (!iLocal_4907)
				{
					if (iVar0 >= 4)
					{
						func_610();
						func_611(1, 1, 1);
						GlobalFunc_4935();
						GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_TRUCK", 9, 0, 0, 0);
						iLocal_4907 = 1;
					}
				}
				if (!iLocal_4916)
				{
					if (fVar1 >= fLocal_4912)
					{
						iLocal_4911 = AUDIO::GET_SOUND_ID();
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						}
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_4911, "In", "SHORT_PLAYER_SWITCH_SOUND_SET", 1);
						iLocal_4916 = 1;
					}
				}
				if (!iLocal_4917)
				{
					if (fVar1 >= fLocal_4913)
					{
						AUDIO::STOP_SOUND(iLocal_4911);
						iLocal_4917 = 1;
					}
				}
				if (!iLocal_4918)
				{
					if (fVar1 >= fLocal_4914)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchShortFranklinIn", 0, 0);
						iLocal_4918 = 1;
					}
				}
				if (!iLocal_4919)
				{
					if (fVar1 >= fLocal_4915)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchShortMichaelMid", 0, 0);
						iLocal_4919 = 1;
					}
				}
				if (!iLocal_4920)
				{
					if (iVar0 >= 4)
					{
						AUDIO::ACTIVATE_AUDIO_SLOWMO_MODE("JSH_EXIT_TUNNEL_SLOWMO");
						iLocal_4920 = 1;
					}
				}
				if (!iLocal_4921)
				{
					if (iVar0 >= 7)
					{
						AUDIO::DEACTIVATE_AUDIO_SLOWMO_MODE("JSH_EXIT_TUNNEL_SLOWMO");
						iLocal_4921 = 1;
					}
				}
				if (iVar0 == (uParam0->f_1217 - 1))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_4896);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_4897, 1065353216);
				}
				if (fVar1 >= 0.925f && iLocal_4924 == 0)
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					}
					iLocal_4924 = 1;
				}
				if (fVar1 >= 1f)
				{
					MISC::SET_TIME_SCALE(1f);
					if (CAM::DOES_CAM_EXIST(uParam0->f_1))
					{
						CAM::DESTROY_CAM(uParam0->f_1, 0);
						CAM::DESTROY_ALL_CAMS(0);
					}
					CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
					AUDIO::STOP_SOUND(iLocal_4911);
					HUD::DISPLAY_RADAR(1);
					HUD::DISPLAY_HUD(1);
					GlobalFunc_8316(0, 1, 1, 0);
					SYSTEM::SETTIMERB(0);
					iLocal_3652 = 3;
				}
			}
			break;
		
		case 3:
			if (!iLocal_4909)
			{
				GlobalFunc_612(&iVar2, &iVar3, &iVar4, &iVar5, 0);
				if ((((((iVar2 != 0 || iVar3 != 0) || iVar4 != 0) || iVar5 != 0) || PAD::IS_CONTROL_PRESSED(0, 71)) || PAD::IS_CONTROL_PRESSED(0, 72)) || SYSTEM::TIMERB() > iLocal_4895)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2552))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_2552))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2552))
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2552);
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(func_93(0)))
					{
						if (!ENTITY::IS_ENTITY_DEAD(func_93(0)))
						{
							TASK::CLEAR_PED_TASKS(func_93(0));
						}
					}
					RECORDING::_0x81CBAE94390F9F89();
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					STREAMING::SET_GAME_PAUSES_FOR_STREAMING(1);
					SYSTEM::SETTIMERA(0);
					iLocal_3652 = 0;
					iLocal_4909 = 1;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_676()//Position - 0x6800A
{
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_4898))
	{
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2486[2]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2486[2]))
		{
			TASK::TASK_PLAY_ANIM(iLocal_2486[2], sLocal_4898, sLocal_4899, 1000f, -1000f, -1, 1, 0, 0, 0, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_2486[2], 1, 0);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(func_93(0)))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2486[2]))
		{
			TASK::TASK_PLAY_ANIM(func_93(0), sLocal_4898, sLocal_4900, 1000f, -1000f, -1, 1, 0, 0, 0, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_93(0), 1, 0);
		}
	}
}

int func_677(var uParam0)//Position - 0x680A9
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






























void func_707(var uParam0, var uParam1, int iParam2)//Position - 0x69BFE
{
	if (!*uParam0)
	{
		uParam0->f_10[0 /*57*/].f_2 = 2;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { 1020.42f, -223.5525f, 44.3141f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 0f;
		uParam0->f_10[0 /*57*/].f_9 = { 0.5452f, 2.0735f, 162.6459f };
		uParam0->f_10[0 /*57*/].f_18 = 1;
		uParam0->f_10[0 /*57*/].f_19 = 1;
		uParam0->f_10[0 /*57*/].f_20 = 0;
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
		{
			uParam0->f_10[0 /*57*/].f_21 = 62.5f;
		}
		else
		{
			uParam0->f_10[0 /*57*/].f_21 = 50f;
		}
		uParam0->f_10[0 /*57*/].f_50 = 0;
		uParam0->f_10[0 /*57*/].f_51 = 0f;
		uParam0->f_10[0 /*57*/].f_52 = 0f;
		uParam0->f_10[0 /*57*/].f_22 = 0f;
		uParam0->f_10[0 /*57*/].f_53 = 2;
		uParam0->f_10[0 /*57*/].f_23 = 0.2f;
		uParam0->f_10[0 /*57*/].f_28 = 0;
		uParam0->f_10[0 /*57*/].f_29 = 0f;
		uParam0->f_10[0 /*57*/].f_30 = 0;
		uParam0->f_10[0 /*57*/].f_33 = 1f;
		uParam0->f_10[0 /*57*/].f_34 = 0;
		uParam0->f_10[0 /*57*/].f_35 = 0f;
		uParam0->f_10[0 /*57*/].f_36 = 0;
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
		uParam0->f_10[1 /*57*/].f_2 = 2;
		uParam0->f_10[1 /*57*/].f_4 = 0;
		uParam0->f_10[1 /*57*/].f_5 = 0;
		uParam0->f_10[1 /*57*/].f_6 = { 1020.42f, -223.5525f, 44.3141f };
		uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_12 = 0f;
		uParam0->f_10[1 /*57*/].f_9 = { 0.5452f, 2.0735f, 162.6459f };
		uParam0->f_10[1 /*57*/].f_18 = 1;
		uParam0->f_10[1 /*57*/].f_19 = 1;
		uParam0->f_10[1 /*57*/].f_20 = 0;
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
		{
			uParam0->f_10[1 /*57*/].f_21 = 62.5f;
		}
		else
		{
			uParam0->f_10[1 /*57*/].f_21 = 50f;
		}
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 0f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0f;
		uParam0->f_10[1 /*57*/].f_53 = 2;
		uParam0->f_10[1 /*57*/].f_23 = 0.2f;
		uParam0->f_10[1 /*57*/].f_28 = 0;
		uParam0->f_10[1 /*57*/].f_29 = 0f;
		uParam0->f_10[1 /*57*/].f_30 = 0;
		uParam0->f_10[1 /*57*/].f_33 = 1f;
		uParam0->f_10[1 /*57*/].f_34 = 0;
		uParam0->f_10[1 /*57*/].f_35 = 0f;
		uParam0->f_10[1 /*57*/].f_36 = 0;
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
		uParam0->f_10[2 /*57*/].f_4 = 0;
		uParam0->f_10[2 /*57*/].f_5 = 1000;
		uParam0->f_10[2 /*57*/].f_6 = { -1.2686f, 4.4238f, 0.7634f };
		uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_12 = 0f;
		uParam0->f_10[2 /*57*/].f_9 = { -0.1759f, -0.0402f, 0.7239f };
		uParam0->f_10[2 /*57*/].f_18 = 1;
		uParam0->f_10[2 /*57*/].f_19 = 1;
		uParam0->f_10[2 /*57*/].f_20 = 0;
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
		{
			uParam0->f_10[2 /*57*/].f_21 = 65.5f;
		}
		else
		{
			uParam0->f_10[2 /*57*/].f_21 = 50f;
		}
		uParam0->f_10[2 /*57*/].f_50 = 0;
		uParam0->f_10[2 /*57*/].f_51 = 0f;
		uParam0->f_10[2 /*57*/].f_52 = 0f;
		uParam0->f_10[2 /*57*/].f_22 = 0f;
		uParam0->f_10[2 /*57*/].f_53 = 2;
		uParam0->f_10[2 /*57*/].f_23 = 0.2f;
		uParam0->f_10[2 /*57*/].f_28 = 0;
		uParam0->f_10[2 /*57*/].f_29 = 0f;
		uParam0->f_10[2 /*57*/].f_30 = 0;
		uParam0->f_10[2 /*57*/].f_33 = 1f;
		uParam0->f_10[2 /*57*/].f_34 = 0;
		uParam0->f_10[2 /*57*/].f_35 = 0f;
		uParam0->f_10[2 /*57*/].f_36 = 0;
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
		uParam0->f_10[3 /*57*/].f_2 = 0;
		uParam0->f_10[3 /*57*/].f_4 = 0;
		uParam0->f_10[3 /*57*/].f_5 = 1000;
		uParam0->f_10[3 /*57*/].f_6 = { -3.3723f, 3.9445f, -0.1419f };
		uParam0->f_10[3 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[3 /*57*/].f_12 = 0f;
		uParam0->f_10[3 /*57*/].f_9 = { 3.7017f, 0f, -137.848f };
		uParam0->f_10[3 /*57*/].f_18 = 0;
		uParam0->f_10[3 /*57*/].f_19 = 0;
		uParam0->f_10[3 /*57*/].f_20 = 0;
		uParam0->f_10[3 /*57*/].f_21 = 50f;
		uParam0->f_10[3 /*57*/].f_50 = 0;
		uParam0->f_10[3 /*57*/].f_51 = 0f;
		uParam0->f_10[3 /*57*/].f_52 = 0f;
		uParam0->f_10[3 /*57*/].f_22 = 0f;
		uParam0->f_10[3 /*57*/].f_53 = 2;
		uParam0->f_10[3 /*57*/].f_23 = 0.2f;
		uParam0->f_10[3 /*57*/].f_28 = 0;
		uParam0->f_10[3 /*57*/].f_29 = 0f;
		uParam0->f_10[3 /*57*/].f_30 = 0;
		uParam0->f_10[3 /*57*/].f_33 = 1f;
		uParam0->f_10[3 /*57*/].f_34 = 0;
		uParam0->f_10[3 /*57*/].f_35 = 0f;
		uParam0->f_10[3 /*57*/].f_36 = 0;
		uParam0->f_10[3 /*57*/].f_39 = 0f;
		uParam0->f_10[3 /*57*/].f_40 = 0f;
		uParam0->f_10[3 /*57*/].f_41 = 0;
		uParam0->f_10[3 /*57*/].f_42 = 0;
		uParam0->f_10[3 /*57*/].f_43 = 0;
		uParam0->f_10[3 /*57*/].f_38 = 0f;
		uParam0->f_10[3 /*57*/].f_45 = 0;
		uParam0->f_10[3 /*57*/].f_46 = 0;
		uParam0->f_10[3 /*57*/].f_47 = 0f;
		uParam0->f_10[3 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[3 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[4 /*57*/].f_2 = 0;
		uParam0->f_10[4 /*57*/].f_4 = 0;
		uParam0->f_10[4 /*57*/].f_5 = 500;
		uParam0->f_10[4 /*57*/].f_6 = { -2.8073f, 3.3803f, 0.0177f };
		uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_12 = 0f;
		uParam0->f_10[4 /*57*/].f_9 = { -0.5709f, -0.2904f, 0.0941f };
		uParam0->f_10[4 /*57*/].f_18 = 1;
		uParam0->f_10[4 /*57*/].f_19 = 1;
		uParam0->f_10[4 /*57*/].f_20 = 0;
		uParam0->f_10[4 /*57*/].f_21 = 50f;
		uParam0->f_10[4 /*57*/].f_50 = 0;
		uParam0->f_10[4 /*57*/].f_51 = 0f;
		uParam0->f_10[4 /*57*/].f_52 = 0f;
		uParam0->f_10[4 /*57*/].f_22 = 0f;
		uParam0->f_10[4 /*57*/].f_53 = 2;
		uParam0->f_10[4 /*57*/].f_23 = 0.2f;
		uParam0->f_10[4 /*57*/].f_28 = 0;
		uParam0->f_10[4 /*57*/].f_29 = 0f;
		uParam0->f_10[4 /*57*/].f_30 = 0;
		uParam0->f_10[4 /*57*/].f_33 = 1f;
		uParam0->f_10[4 /*57*/].f_34 = 0;
		uParam0->f_10[4 /*57*/].f_35 = 0f;
		uParam0->f_10[4 /*57*/].f_36 = 0;
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
		uParam0->f_10[5 /*57*/].f_4 = 0;
		uParam0->f_10[5 /*57*/].f_5 = 1000;
		uParam0->f_10[5 /*57*/].f_6 = { -1.9069f, 4.1475f, 0.0177f };
		uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_12 = 0f;
		uParam0->f_10[5 /*57*/].f_9 = { -0.5866f, -0.2491f, 0.0934f };
		uParam0->f_10[5 /*57*/].f_18 = 1;
		uParam0->f_10[5 /*57*/].f_19 = 1;
		uParam0->f_10[5 /*57*/].f_20 = 0;
		uParam0->f_10[5 /*57*/].f_21 = 50f;
		uParam0->f_10[5 /*57*/].f_50 = 0;
		uParam0->f_10[5 /*57*/].f_51 = 0f;
		uParam0->f_10[5 /*57*/].f_52 = 0f;
		uParam0->f_10[5 /*57*/].f_22 = 0f;
		uParam0->f_10[5 /*57*/].f_53 = 2;
		uParam0->f_10[5 /*57*/].f_23 = 0.2f;
		uParam0->f_10[5 /*57*/].f_28 = 0;
		uParam0->f_10[5 /*57*/].f_29 = 0f;
		uParam0->f_10[5 /*57*/].f_30 = 0;
		uParam0->f_10[5 /*57*/].f_33 = 0.5f;
		uParam0->f_10[5 /*57*/].f_34 = 0;
		uParam0->f_10[5 /*57*/].f_35 = 0f;
		uParam0->f_10[5 /*57*/].f_36 = 0;
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
		uParam0->f_10[6 /*57*/].f_4 = 0;
		uParam0->f_10[6 /*57*/].f_5 = 300;
		uParam0->f_10[6 /*57*/].f_6 = { -0.2482f, 10.6558f, 0.9422f };
		uParam0->f_10[6 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_12 = 0f;
		uParam0->f_10[6 /*57*/].f_9 = { 2.3013f, 0.9288f, 1.0667f };
		uParam0->f_10[6 /*57*/].f_18 = 1;
		uParam0->f_10[6 /*57*/].f_19 = 1;
		uParam0->f_10[6 /*57*/].f_20 = 0;
		uParam0->f_10[6 /*57*/].f_21 = 50f;
		uParam0->f_10[6 /*57*/].f_50 = 0;
		uParam0->f_10[6 /*57*/].f_51 = 0f;
		uParam0->f_10[6 /*57*/].f_52 = 0f;
		uParam0->f_10[6 /*57*/].f_22 = 0.5f;
		uParam0->f_10[6 /*57*/].f_53 = 2;
		uParam0->f_10[6 /*57*/].f_23 = 0.2f;
		uParam0->f_10[6 /*57*/].f_28 = 0;
		uParam0->f_10[6 /*57*/].f_29 = 0f;
		uParam0->f_10[6 /*57*/].f_30 = 0;
		uParam0->f_10[6 /*57*/].f_33 = 0.5f;
		uParam0->f_10[6 /*57*/].f_34 = 0;
		uParam0->f_10[6 /*57*/].f_35 = 0f;
		uParam0->f_10[6 /*57*/].f_36 = 0;
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
		uParam0->f_10[7 /*57*/].f_4 = 0;
		uParam0->f_10[7 /*57*/].f_5 = 300;
		uParam0->f_10[7 /*57*/].f_6 = { 6.3795f, 13.1729f, 3.1116f };
		uParam0->f_10[7 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[7 /*57*/].f_12 = 0f;
		uParam0->f_10[7 /*57*/].f_9 = { -1.0851f, -0.1238f, 2.4081f };
		uParam0->f_10[7 /*57*/].f_18 = 1;
		uParam0->f_10[7 /*57*/].f_19 = 1;
		uParam0->f_10[7 /*57*/].f_20 = 0;
		uParam0->f_10[7 /*57*/].f_21 = 50f;
		uParam0->f_10[7 /*57*/].f_50 = 0;
		uParam0->f_10[7 /*57*/].f_51 = 0f;
		uParam0->f_10[7 /*57*/].f_52 = 0f;
		uParam0->f_10[7 /*57*/].f_22 = 0f;
		uParam0->f_10[7 /*57*/].f_53 = 2;
		uParam0->f_10[7 /*57*/].f_23 = 0.2f;
		uParam0->f_10[7 /*57*/].f_28 = 0;
		uParam0->f_10[7 /*57*/].f_29 = 0f;
		uParam0->f_10[7 /*57*/].f_30 = 0;
		uParam0->f_10[7 /*57*/].f_33 = 1f;
		uParam0->f_10[7 /*57*/].f_34 = 0;
		uParam0->f_10[7 /*57*/].f_35 = 0f;
		uParam0->f_10[7 /*57*/].f_36 = 0;
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
		uParam0->f_1218 = 6;
		uParam0->f_2 = 1;
		uParam0->f_3 = 1;
		uParam0->f_1219 = 1000;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_JewelHeist_SwitchCam.txt";
		uParam0->f_1225 = "CameraInfo_JewelHeist_SwitchCam.xml";
		*uParam0 = 1;
	}
	uParam0->f_4[0] = uParam1;
	uParam0->f_4[1] = iParam2;
}

void func_708()//Position - 0x6A932
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_2552))
	{
		if (!bLocal_2475)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[1]))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_2486[1], func_93(0), 20f, 20f, 20f, 0, 0, 0))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_2486[1], func_93(0), 1) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_2552, iLocal_2532[1]))
					{
						if (!iLocal_2431[0])
						{
							func_604(Local_3369.f_152, 1, 0, 1, 7, 0, 0);
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_2486[1]);
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_2486[1], 2);
							PED::KNOCK_PED_OFF_VEHICLE(iLocal_2486[1]);
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[1]);
							ENTITY::SET_ENTITY_HEALTH(iLocal_2486[1], 0);
							iLocal_2431[0] = 1;
						}
					}
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[0]))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_2486[0], func_93(0), 20f, 20f, 20f, 0, 0, 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_2486[0], func_93(0), 1) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_2552, iLocal_2532[0]))
				{
					if (!iLocal_2431[1])
					{
						func_604(Local_3369.f_152, 1, 0, 1, 7, 0, 0);
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_2486[0]);
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_2486[0], 2);
						PED::KNOCK_PED_OFF_VEHICLE(iLocal_2486[0]);
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[0]);
						ENTITY::SET_ENTITY_HEALTH(iLocal_2486[0], 0);
						iLocal_2431[1] = 1;
					}
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[2]))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(func_93(1), func_93(0), 20f, 20f, 20f, 0, 0, 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(func_93(1), func_93(0), 1) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_2552, iLocal_2532[2]))
				{
					if (!iLocal_2431[2])
					{
						func_604(Local_3369.f_152, 1, 0, 1, 7, 0, 0);
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(func_93(1));
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(func_93(1), 2);
						PED::KNOCK_PED_OFF_VEHICLE(func_93(1));
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[2]);
						PED::APPLY_DAMAGE_TO_PED(func_93(1), 500, 1);
						iLocal_2431[2] = 1;
					}
				}
			}
		}
	}
}

void func_709()//Position - 0x6AB4D
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2486[2]) && ENTITY::DOES_ENTITY_EXIST(iLocal_1374[0]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2486[2]) && !ENTITY::IS_ENTITY_DEAD(iLocal_1374[0]))
		{
			TASK::CLEAR_PED_TASKS(iLocal_2486[2]);
			TASK::TASK_DRIVE_BY(iLocal_2486[2], 0, iLocal_1374[0], 0f, -5f, 0f, 200f, 100, 0, -753768974);
		}
	}
}

void func_710(float fParam0)//Position - 0x6ABBE
{
	if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(717, "JHUBER"))
	{
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2552))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2552))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2552))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2552);
			}
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_2552, 717, "JHUBER", 1);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_2552, fLocal_4901);
			VEHICLE::SET_PLAYBACK_SPEED(iLocal_2552, fParam0);
		}
	}
}























void func_733()//Position - 0x6BA40
{
	switch (iLocal_1512)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[0]))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2532[0]))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_2532[0]) > 180763.7f)
					{
						func_736();
						iLocal_1512++;
					}
				}
			}
			break;
		
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[0]))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2532[0]))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_2532[0]) > 190763.7f)
					{
						func_735();
						iLocal_1512++;
					}
				}
			}
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[0]))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2532[0]))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_2532[0]) > 198763.7f)
					{
						iLocal_1512++;
					}
				}
			}
			break;
		
		case 3:
			if (func_734())
			{
				VEHICLE::SET_RANDOM_TRAINS(0);
				iLocal_1511 = VEHICLE::CREATE_MISSION_TRAIN(2, 542.7376f, -1536.972f, 21.3978f, 1);
				VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_1511, 18f);
				VEHICLE::SET_TRAIN_SPEED(iLocal_1511, 18f);
				iLocal_1512++;
			}
			break;
		
		case 4:
			fLocal_2593 = fLocal_1749;
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1511))
			{
				VEHICLE::SET_TRAIN_SPEED(iLocal_1511, (18f * fLocal_2593));
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[0]))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_2532[0], 647.3274f, -1292.162f, 19.98258f, 565.9138f, -1380.372f, 28.39544f, 15f, 0, 1, 0))
				{
					iLocal_5048 = MISC::GET_GAME_TIMER();
					iLocal_1512++;
				}
			}
			break;
		
		case 5:
			if ((MISC::GET_GAME_TIMER() - iLocal_5048) > 5000)
			{
				VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&iLocal_1511, 0);
				func_644();
				iLocal_1512++;
			}
			break;
	}
}

int func_734()//Position - 0x6BC07
{
	if (((((STREAMING::HAS_MODEL_LOADED(joaat("freight")) && STREAMING::HAS_MODEL_LOADED(joaat("freightcont1"))) && STREAMING::HAS_MODEL_LOADED(joaat("freightcont2"))) && STREAMING::HAS_MODEL_LOADED(joaat("freightgrain"))) && STREAMING::HAS_MODEL_LOADED(joaat("tankercar"))) && STREAMING::HAS_MODEL_LOADED(joaat("freightcar")))
	{
		return 1;
	}
	return 0;
}

void func_735()//Position - 0x6BC66
{
	STREAMING::REQUEST_MODEL(joaat("freight"));
	STREAMING::REQUEST_MODEL(joaat("freightcont1"));
	STREAMING::REQUEST_MODEL(joaat("freightcont2"));
}

void func_736()//Position - 0x6BC89
{
	STREAMING::REQUEST_MODEL(joaat("freightgrain"));
	STREAMING::REQUEST_MODEL(joaat("tankercar"));
	STREAMING::REQUEST_MODEL(joaat("freightcar"));
}

int func_737(var uParam0)//Position - 0x6BCAC
{
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		HUD::REMOVE_BLIP(uParam0);
		return 1;
	}
	return 0;
}

int func_738(int iParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6, bool bParam7)//Position - 0x6BCC9
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 >= 5)
	{
		return 0;
	}
	iVar0 = GlobalFunc_5133(iParam0, iParam1);
	if ((iVar0 == 0 || iVar0 == 15) || iVar0 == 14)
	{
		return 0;
	}
	return GlobalFunc_7722(iVar0, Param2, fParam5, iParam6, bParam7);
}




void func_742(bool bParam0, int iParam1, int iParam2)//Position - 0x6BDFC
{
	if (bLocal_2405)
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_93(0)) && iParam1)
		{
			if (!PED::IS_PED_INJURED(func_93(0)))
			{
				func_432(func_93(0), 12, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				PED::SET_PED_COMPONENT_VARIATION(func_93(0), 5, 6, 0, 0);
				PED::CLEAR_PED_PROP(func_93(0), 0);
				PED::CLEAR_PED_PROP(func_93(0), 1);
				PED::CLEAR_PED_PROP(func_93(0), 2);
				PED::CLEAR_PED_PROP(func_93(0), 3);
				PED::CLEAR_PED_PROP(func_93(0), 4);
				PED::CLEAR_PED_PROP(func_93(0), 5);
				PED::CLEAR_PED_PROP(func_93(0), 6);
				PED::CLEAR_PED_PROP(func_93(0), 7);
				PED::CLEAR_PED_PROP(func_93(0), 8);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(func_93(1)) && iParam2)
		{
			if (!PED::IS_PED_INJURED(func_93(1)))
			{
				PED::SET_PED_COMPONENT_VARIATION(func_93(1), 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(func_93(1), 3, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(func_93(1), 4, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(func_93(1), 5, 4, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(func_93(1), 6, 7, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(func_93(1), 7, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(func_93(1), 8, 14, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(func_93(1), 9, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(func_93(1), 10, 2, 0, 0);
				PED::SET_PED_PROP_INDEX(func_93(1), 0, 15, 0, false);
			}
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_93(0)) && iParam1)
		{
			if (!PED::IS_PED_INJURED(func_93(0)))
			{
				PED::CLEAR_PED_PROP(func_93(0), 0);
				PED::CLEAR_PED_PROP(func_93(0), 1);
				PED::CLEAR_PED_PROP(func_93(0), 2);
				PED::CLEAR_PED_PROP(func_93(0), 3);
				PED::CLEAR_PED_PROP(func_93(0), 4);
				PED::CLEAR_PED_PROP(func_93(0), 5);
				PED::CLEAR_PED_PROP(func_93(0), 6);
				PED::CLEAR_PED_PROP(func_93(0), 7);
				PED::CLEAR_PED_PROP(func_93(0), 8);
				func_432(func_93(0), 12, 31, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(func_93(1)) && iParam2)
		{
			if (!PED::IS_PED_INJURED(func_93(1)))
			{
				func_432(func_93(1), 12, 18, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
	func_617(func_93(0), bParam0);
	func_432(func_93(0), 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0);
}

void func_743(int iParam0, float fParam1)//Position - 0x6C03A
{
	float fVar0;
	struct<3> Var1;
	int iVar4;
	
	fVar0 = MISC::GET_FRAME_TIME();
	fVar0 = (fVar0 * 1000f);
	bLocal_130 = false;
	if (!bLocal_112)
	{
		if (bLocal_111)
		{
			GlobalFunc_2512();
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				MISC::CLEAR_AREA(Var1, 1000f, 1, 0, 0, 0);
			}
			bLocal_112 = true;
		}
	}
	else if (!bLocal_111)
	{
		GlobalFunc_2214();
		bLocal_112 = false;
	}
	if (bLocal_111)
	{
		fParam1 = 1f;
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (!bLocal_105)
	{
		if (iLocal_100)
		{
			fLocal_615 = 0f;
		}
		else
		{
			fLocal_615 = 1f;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (GlobalFunc_5657(PLAYER::PLAYER_PED_ID(), iParam0))
					{
						iLocal_110 = 1;
					}
					else
					{
						iLocal_110 = 0;
					}
				}
				fLocal_612 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
				VEHICLE::SET_PLAYBACK_SPEED(iParam0, ((fParam1 * fLocal_613) * fLocal_615));
				if (bLocal_109)
				{
					func_766(iParam0, fLocal_612);
					func_765(iParam0, fLocal_622);
					if (fLocal_617 > 1000f)
					{
						if (iLocal_884 == 0)
						{
							func_764(iParam0, fLocal_622);
						}
						fVar0 = ((fLocal_612 + 4000f) + (SYSTEM::TO_FLOAT(iLocal_884) * 2000f));
						func_763(iParam0, fVar0, fLocal_616);
						iLocal_884++;
						if (iLocal_884 > 2)
						{
							fLocal_617 = 0f;
						}
					}
					else
					{
						iLocal_884 = 0;
						fLocal_617 = (fLocal_617 + (MISC::GET_FRAME_TIME() * 1000f));
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
		if (fLocal_612 == 0f || CAM::IS_SCREEN_FADED_OUT())
		{
			iVar4 = 1;
		}
		if (iVar4 && !bLocal_117)
		{
			if (!iLocal_99)
			{
				func_760(iParam0, ((fParam1 * fLocal_613) * fLocal_615), 0);
				if (!iLocal_120)
				{
				}
				iLocal_120 = 0;
			}
			if (bLocal_102)
			{
				func_759(iParam0);
			}
			if (!iLocal_99)
			{
				func_746(iParam0, ((fParam1 * fLocal_613) * fLocal_615), 0);
			}
		}
		if (iLocal_107)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_1427 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					Local_1152 = { ENTITY::GET_ENTITY_COORDS(iLocal_1427, 1) };
					ENTITY::GET_ENTITY_QUATERNION(iLocal_1427, &uLocal_318, &uLocal_319, &uLocal_320, &uLocal_321);
				}
			}
			iLocal_107 = 0;
		}
		if (iLocal_106)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1427))
			{
				GlobalFunc_2210(iLocal_1428);
				iLocal_1428 = iLocal_1427;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1428, 0))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_1428, Local_1152, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_1428, uLocal_318, uLocal_319, uLocal_320, uLocal_321);
			}
			fLocal_611 = fLocal_614;
			iLocal_99 = 1;
			iLocal_106 = 0;
		}
		if (iLocal_99)
		{
			while (!func_744(&iParam0, fLocal_611))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_100 = 1;
		}
		if (iLocal_113)
		{
			iLocal_113 = 0;
		}
	}
}

int func_744(int iParam0, float fParam1)//Position - 0x6C2D5
{
	if (!iLocal_114)
	{
		iLocal_99 = 1;
		func_628();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
				VEHICLE::SET_VEHICLE_FIXED(*iParam0);
			}
			if (!iLocal_871 == -1)
			{
				while (!func_745(iParam0, iLocal_871, fParam1, 1, 0, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!bLocal_104)
				{
					iLocal_100 = 1;
					fLocal_615 = 0f;
					iLocal_872 = 0;
					iLocal_874 = 0;
					iLocal_873 = 0;
					iLocal_868 = 0;
					iLocal_869 = 0;
					iLocal_870 = 0;
					iLocal_875 = 0;
					iLocal_876 = 0;
					iLocal_877 = 0;
				}
			}
		}
		iLocal_114 = 1;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(*iParam0, ((1f * fLocal_613) * fLocal_615));
				func_745(iParam0, iLocal_871, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_612 = fParam1;
		iLocal_878 = 0;
		iLocal_881 = 0;
		fLocal_627 = 0f;
		fLocal_626 = 0f;
		func_746(*iParam0, ((1f * fLocal_613) * fLocal_615), 1);
		func_760(*iParam0, ((1f * fLocal_613) * fLocal_615), 1);
		func_759(*iParam0);
		if ((iLocal_875 == 0 && iLocal_876 == 0) && iLocal_877 == 0)
		{
			iLocal_100 = 0;
			iLocal_99 = 0;
			iLocal_114 = 0;
			return 1;
		}
	}
	return 0;
}

int func_745(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x6C407
{
	float fVar0;
	
	if (iParam1 > 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_1179);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, &cLocal_1179))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*iParam0, iParam1, &cLocal_1179, 1092616192, 786603);
					}
					else
					{
						if (iParam1 != iLocal_879 && iParam1 != iLocal_880)
						{
							if (bParam7)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_1179, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_1179, 1 | 4, 0, 786603);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_1179, 1);
							}
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_1179, 1);
						}
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, fParam2);
						if (bParam5)
						{
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*iParam0, 1);
						}
						return 1;
					}
				}
				else if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(*iParam0) == VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, &cLocal_1179))
				{
					fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(*iParam0);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
						VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_1179);
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
					ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*iParam0, iParam1, &cLocal_1179, 1092616192, 786603);
					}
					else if (iParam1 != iLocal_879 && iParam1 != iLocal_880)
					{
						if (bParam7)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_1179, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_1179, 1 | 4, 0, 786603);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_1179, 1);
						}
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_1179, 1);
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

void func_746(int iParam0, float fParam1, bool bParam2)//Position - 0x6C5ED
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
		iVar0 = iLocal_874;
		while (iVar0 < 35)
		{
			if (iLocal_778[iVar0] != 99)
			{
				if (iLocal_778[iVar0] == 0)
				{
					if (iLocal_742[iVar0] > 0)
					{
						if (!iLocal_99)
						{
							if (fLocal_612 > (fLocal_466[iVar0] - (7000f * fParam1)))
							{
								if (GlobalFunc_2222(iLocal_1251[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_814[iVar0]), 0);
								}
								else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_1251[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_814[iVar0]), 2);
								}
								MISC::CLEAR_BIT(&(iLocal_814[iVar0]), 1);
								iLocal_778[iVar0]++;
								iLocal_876++;
							}
						}
						else
						{
							fVar12 = (fLocal_612 - fLocal_466[iVar0]);
							fVar12 = (fVar12 * fLocal_502[iVar0]);
							if (fVar12 >= 0f)
							{
								if (fVar12 < func_757(iLocal_742[iVar0]))
								{
									if (GlobalFunc_2222(iLocal_1251[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_814[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_1251[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_814[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_814[iVar0]), 1);
									iLocal_778[iVar0]++;
									iLocal_876++;
								}
								else
								{
									iLocal_778[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_778[iVar0] = 99;
					}
				}
				else if (iLocal_778[iVar0] == 1)
				{
					bVar14 = false;
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_742[iVar0], &cLocal_1179);
					if (MISC::IS_BIT_SET(iLocal_814[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2211());
						bVar14 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
					}
					else if (!bLocal_126 && ((!MISC::IS_BIT_SET(iLocal_814[iVar0], 2) && uVar16) || (MISC::IS_BIT_SET(iLocal_814[iVar0], 2) && uVar17)))
					{
						bVar14 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_640());
						bVar14 = STREAMING::HAS_MODEL_LOADED(func_640());
					}
					if (bVar14)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1374[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_1251[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_1251[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_742[iVar0], &cLocal_1179))
							{
								if (fLocal_612 >= (fLocal_466[iVar0] - (fLocal_625 * fParam1)))
								{
									if ((iLocal_113 || bParam2) || (!bLocal_130 && !func_756(Local_1046[iVar0 /*3*/], Var9, 5f, fLocal_623)))
									{
										if (bLocal_109)
										{
											func_755(Local_1046[iVar0 /*3*/], Var9, fLocal_616);
										}
										iLocal_1374[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_1251[iVar0], Local_1046[iVar0 /*3*/], 0f, 0, 0);
										if (iLocal_1251[iVar0] == joaat("polmav"))
										{
											VEHICLE::SET_VEHICLE_LIVERY(iLocal_1374[iVar0], 0);
										}
										if (uLocal_122 && !MISC::IS_BIT_SET(iLocal_814[iVar0], 0))
										{
											func_754(iLocal_1374[iVar0]);
										}
										if (MISC::IS_BIT_SET(iLocal_814[iVar0], 3))
										{
											ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_1374[iVar0], 1);
										}
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_1374[iVar0], Local_1046[iVar0 /*3*/], 0, 0, 1);
										ENTITY::SET_ENTITY_QUATERNION(iLocal_1374[iVar0], fLocal_322[iVar0], fLocal_358[iVar0], fLocal_394[iVar0], fLocal_430[iVar0]);
										if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_1251[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_1251[iVar0]))
										{
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1374[iVar0]);
										}
										if (!MISC::IS_BIT_SET(iLocal_814[iVar0], 0))
										{
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1374[iVar0], 1, 1);
											if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
											{
												VEHICLE::SET_VEHICLE_LIGHTS(iLocal_1374[iVar0], 3);
											}
										}
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_1374[iVar0], true);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1251[iVar0]);
										iLocal_876 = (iLocal_876 - 1);
										iLocal_778[iVar0]++;
										bLocal_130 = true;
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_1374[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1374[iVar0], 0))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_1374[iVar0], Local_1046[iVar0 /*3*/], 0, 0, 1);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_1374[iVar0], fLocal_322[iVar0], fLocal_358[iVar0], fLocal_394[iVar0], fLocal_430[iVar0]);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_1251[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_1251[iVar0]))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1374[iVar0]);
							}
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_1374[iVar0], true);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1251[iVar0]);
							iLocal_876 = (iLocal_876 - 1);
							iLocal_778[iVar0]++;
						}
					}
				}
				else if (iLocal_778[iVar0] == 2)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_742[iVar0], &cLocal_1179);
					if (!MISC::IS_BIT_SET(iLocal_814[iVar0], 1))
					{
						bVar14 = false;
						if (MISC::IS_BIT_SET(iLocal_814[iVar0], 0))
						{
							STREAMING::REQUEST_MODEL(GlobalFunc_2211());
							bVar14 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
							iVar19 = 2;
						}
						else if (!bLocal_126 && ((!MISC::IS_BIT_SET(iLocal_814[iVar0], 2) && uVar16) || (MISC::IS_BIT_SET(iLocal_814[iVar0], 2) && uVar17)))
						{
							bVar14 = true;
							iVar19 = 1;
						}
						else
						{
							STREAMING::REQUEST_MODEL(func_640());
							bVar14 = STREAMING::HAS_MODEL_LOADED(func_640());
							iVar19 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_1374[iVar0]))
						{
							if (!bLocal_130 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_1374[iVar0], -1))
							{
								if (bVar14)
								{
									if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_1374[iVar0], 1), Var9) < 10000f || bParam2) || iLocal_113)
									{
										func_752(&(iLocal_1374[iVar0]), iVar19, 1);
										MISC::SET_BIT(&(iLocal_814[iVar0]), 1);
									}
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1374[iVar0], 0))
					{
						if (fLocal_612 >= fLocal_466[iVar0])
						{
							if (14 > iLocal_869)
							{
								fVar12 = (fLocal_612 - fLocal_466[iVar0]);
								fVar12 = (fVar12 * fLocal_502[iVar0]);
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_742[iVar0], &cLocal_1179))
								{
									if (fVar12 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_742[iVar0], &cLocal_1179))
									{
										Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_1374[iVar0], 1) };
										Var6 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_742[iVar0], fVar12, &cLocal_1179) };
										if (((!func_756(Var3, Var9, 5f, fLocal_623) && func_756(Var6, Var9, 5f, fLocal_623)) && !iLocal_113) && !bParam2)
										{
											if (!MISC::IS_BIT_SET(iLocal_814[iVar0], 1))
											{
												func_752(&(iLocal_1374[iVar0]), iVar19, 1);
											}
											iLocal_869++;
											iLocal_778[iVar0]++;
										}
										else if (((!bLocal_130 || MISC::IS_BIT_SET(iLocal_814[iVar0], 1)) || iLocal_113) || bParam2)
										{
											if (func_745(&(iLocal_1374[iVar0]), iLocal_742[iVar0], fVar12, 1, 0, 0, iLocal_128, iLocal_127))
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_1374[iVar0], (fParam1 * fLocal_502[iVar0]));
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1374[iVar0], 0))
												{
													if (MISC::IS_BIT_SET(iLocal_814[iVar0], 0))
													{
														VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1374[iVar0], 1, 1);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_1374[iVar0], 1);
														VEHICLE::SET_VEHICLE_LIGHTS(iLocal_1374[iVar0], 2);
														if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_1251[iVar0]))
														{
															AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_1374[iVar0], 1);
														}
													}
												}
												if (!MISC::IS_BIT_SET(iLocal_814[iVar0], 1))
												{
													func_752(&(iLocal_1374[iVar0]), iVar19, 1);
												}
												iLocal_869++;
												iLocal_778[iVar0]++;
											}
										}
									}
									else
									{
										if (!MISC::IS_BIT_SET(iLocal_814[iVar0], 1))
										{
											func_752(&(iLocal_1374[iVar0]), iVar19, 1);
										}
										iLocal_869++;
										iLocal_778[iVar0]++;
									}
								}
							}
							else
							{
								if (!MISC::IS_BIT_SET(iLocal_814[iVar0], 1))
								{
									func_752(&(iLocal_1374[iVar0]), iVar19, 1);
								}
								iLocal_869++;
								iLocal_778[iVar0]++;
							}
						}
					}
					else
					{
						if (!MISC::IS_BIT_SET(iLocal_814[iVar0], 1))
						{
							func_752(&(iLocal_1374[iVar0]), iVar19, 1);
						}
						iLocal_869++;
						iLocal_778[iVar0]++;
					}
				}
				else if (iLocal_778[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1374[iVar0], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1374[iVar0]))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1374[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (bVar15)
								{
									if (((!bLocal_103 && !iLocal_100) && !bLocal_119) && (((!iLocal_128 && !iLocal_127) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1374[iVar0])) || func_751(iLocal_1374[iVar0])))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar2))
										{
											bVar14 = false;
											if (bLocal_121)
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
												else if (MISC::ABSF((fVar13 - ENTITY::GET_ENTITY_SPEED(iLocal_1374[iVar0]))) > 15f)
												{
													bVar14 = true;
												}
												else if (!GlobalFunc_5655(iLocal_1374[iVar0], iVar2, 45f))
												{
													bVar14 = true;
												}
												else if (GlobalFunc_5654(iVar2, iLocal_1374[iVar0], 0))
												{
													bVar14 = true;
												}
											}
											if (bVar14)
											{
												func_747(iLocal_1374[iVar0]);
												iLocal_778[iVar0]++;
											}
										}
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_1374[iVar0], (fParam1 * fLocal_502[iVar0]));
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1374[iVar0]);
							}
						}
						else
						{
							iLocal_778[iVar0]++;
						}
					}
					else
					{
						iLocal_778[iVar0]++;
					}
				}
				else if (iLocal_778[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1374[iVar0], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1374[iVar0]))
						{
							iLocal_778[iVar0]++;
						}
						else
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1374[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_1374[iVar0], (fParam1 * fLocal_502[iVar0]));
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1374[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_742[iVar0], &cLocal_1179))
							{
								if (fLocal_612 > (fLocal_466[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_742[iVar0], &cLocal_1179)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1374[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1374[iVar0]);
							}
						}
					}
					else
					{
						iLocal_778[iVar0]++;
					}
				}
				else if (iLocal_778[iVar0] == 5)
				{
					if (!iLocal_1374[iVar0] == iLocal_1429)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1374[iVar0], 0))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1374[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								iVar20 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, 242628503);
								if (iVar20 == 7)
								{
									fVar13 = ENTITY::GET_ENTITY_SPEED(iLocal_1374[iVar0]);
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
						if (!bLocal_111 && !bLocal_124)
						{
							if (iLocal_742[iVar0] > 0)
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_742[iVar0], &cLocal_1179);
							}
						}
						if (!bLocal_101)
						{
							if (!bLocal_129)
							{
								GlobalFunc_2210(iLocal_1374[iVar0]);
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_1374[iVar0]))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_1374[iVar0]));
						}
					}
					iLocal_869 = (iLocal_869 - 1);
					iLocal_778[iVar0] = 99;
				}
				if (!bVar18)
				{
					iLocal_874 = iVar0;
					bVar18 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_632();
	}
}

void func_747(int iParam0)//Position - 0x6D1EB
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_634(iParam0);
		VEHICLE::SET_PLAYBACK_TO_USE_AI(iParam0, 786603);
	}
}




int func_751(int iParam0)//Position - 0x6D34E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bLocal_125)
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

int func_752(var uParam0, int iParam1, bool bParam2)//Position - 0x6D3AB
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, -1))
		{
			if (iParam1 == 2)
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, GlobalFunc_2211(), -1, 0, 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iLocal_1195);
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
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 4, func_640(), -1, 0, 0);
				if (bLocal_131)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_640());
				}
			}
			if (bParam2)
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar0, 1);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iVar0, 0);
				PED::SET_PED_CONFIG_FLAG(iVar0, 32, 0);
			}
			if (bLocal_132)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(*uParam0, 1);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 1);
			GlobalFunc_2221(iVar0);
			bLocal_130 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}


void func_754(int iParam0)//Position - 0x6D4B7
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iLocal_1288 >= -1 && iLocal_1289 >= -1)
	{
		while (iVar0 == iLocal_1288 || iVar0 == iLocal_1289)
		{
			iVar0++;
		}
	}
	else if (iLocal_1288 >= -1)
	{
		if (iVar0 == iLocal_1288)
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

void func_755(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x6D630
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (!bLocal_112)
	{
		if (!func_756(Param0, Param3, fParam6, 200f))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (!ENTITY::IS_ENTITY_DEAD(iVar1))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iVar1, Param0, fParam6, fParam6, fParam6, false, 1, 0))
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

int func_756(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7)//Position - 0x6D6A0
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!bLocal_112)
		{
			if (!iLocal_99)
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

float func_757(int iParam0)//Position - 0x6D6E7
{
	var uVar0;
	
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, &cLocal_1179);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, &cLocal_1179))
	{
		SYSTEM::WAIT(0);
	}
	uVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam0, &cLocal_1179);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, &cLocal_1179);
	return uVar0;
}


void func_759(int iParam0)//Position - 0x6D79D
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
		iVar0 = iLocal_873;
		while (iVar0 < 17)
		{
			switch (iLocal_850[iVar0])
			{
				case 0:
					if (!iLocal_1233[iVar0] == 0)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Local_994[iVar0 /*3*/], fLocal_610, fLocal_610, fLocal_610, false, 1, 0))
						{
							iLocal_875++;
							iLocal_850[iVar0]++;
						}
					}
					else
					{
						iLocal_850[iVar0] = 99;
					}
					break;
				
				case 1:
					if (16 > iLocal_870)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1356[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_1233[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_1233[iVar0]))
							{
								if ((iLocal_99 || iLocal_113) || (!bLocal_130 && !func_756(Local_994[iVar0 /*3*/], Var1, 5f, fLocal_623)))
								{
									if (bLocal_109)
									{
										func_755(Local_994[iVar0 /*3*/], Var1, fLocal_616);
									}
									iLocal_1356[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_1233[iVar0], Local_994[iVar0 /*3*/], 0f, 0, 0);
									if (iLocal_1233[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_1356[iVar0], 0);
									}
									ENTITY::SET_ENTITY_QUATERNION(iLocal_1356[iVar0], fLocal_538[iVar0], fLocal_556[iVar0], fLocal_574[iVar0], fLocal_592[iVar0]);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1233[iVar0]);
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_1356[iVar0], GlobalFunc_2212()))
									{
										VEHICLE::SET_VEHICLE_SIREN(iLocal_1356[iVar0], 1);
										if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_1233[iVar0]))
										{
											AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_1356[iVar0], 1);
										}
									}
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_1356[iVar0], GlobalFunc_2213()))
									{
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_1356[iVar0], 0, 0);
									}
									ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_1356[iVar0], 1);
									iLocal_875 = (iLocal_875 - 1);
									iLocal_870++;
									iLocal_850[iVar0]++;
									bLocal_130 = true;
								}
							}
						}
						else
						{
							iLocal_875 = (iLocal_875 - 1);
							iLocal_870++;
							iLocal_850[iVar0]++;
						}
					}
					break;
				
				case 2:
					if (!bVar7)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1356[iVar0], 0))
						{
							Var4 = { ENTITY::GET_ENTITY_COORDS(iLocal_1356[iVar0], 1) };
						}
						if (fLocal_624 == 0f || SYSTEM::VDIST2(Var1, Var4) < (fLocal_624 * fLocal_624))
						{
							if (!GlobalFunc_5654(iLocal_1356[iVar0], iParam0, 0))
							{
								if (!bLocal_101)
								{
									GlobalFunc_2210(iLocal_1356[iVar0]);
								}
								else
								{
									VEHICLE::DELETE_VEHICLE(&(iLocal_1356[iVar0]));
								}
								iLocal_870 = (iLocal_870 - 1);
								iLocal_850[iVar0] = 99;
								bVar7 = true;
							}
						}
					}
					break;
			}
			if (iLocal_850[iVar0] != 99)
			{
				if (!bVar8)
				{
					iLocal_873 = iVar0;
					bVar8 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_635();
	}
}

void func_760(int iParam0, float fParam1, int iParam2)//Position - 0x6DA94
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
			fLocal_612 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
		}
		iVar22 = -1;
		bVar23 = false;
		bVar24 = false;
		iVar0 = iLocal_872;
		while (iVar0 < 36 && !bVar23)
		{
			if (iLocal_668[iVar0] != 99)
			{
				if (iLocal_668[iVar0] == 0)
				{
					if (iLocal_631[iVar0] > 0 && iLocal_1196[iVar0] != 0)
					{
						if (!iLocal_99)
						{
							if (fLocal_612 < (fLocal_281[iVar0] + 20000f))
							{
								if (fLocal_612 >= (fLocal_281[iVar0] - (7000f * fParam1)))
								{
									if (GlobalFunc_2222(iLocal_1196[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_705[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_1196[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_705[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_705[iVar0]), 1);
									iLocal_877++;
									iLocal_668[iVar0]++;
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
								func_762(iVar0, 1090519040);
							}
						}
						else
						{
							fVar15 = (fLocal_612 - fLocal_281[iVar0]);
							if (fVar15 >= 0f)
							{
								if (fVar15 < func_757(iLocal_631[iVar0]))
								{
									if (GlobalFunc_2222(iLocal_1196[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_705[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_1196[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_705[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_705[iVar0]), 1);
									iLocal_877++;
									iLocal_668[iVar0]++;
								}
								else
								{
									func_762(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_762(iVar0, 1090519040);
					}
				}
				else if (iLocal_668[iVar0] == 1)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_631[iVar0], &cLocal_1179);
					bVar17 = false;
					if (MISC::IS_BIT_SET(iLocal_705[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2211());
						if (STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211()))
						{
							bVar17 = true;
						}
					}
					else if (!bLocal_126 && ((!MISC::IS_BIT_SET(iLocal_705[iVar0], 2) && uVar19) || (MISC::IS_BIT_SET(iLocal_705[iVar0], 2) && uVar20)))
					{
						bVar17 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_640());
						bVar17 = STREAMING::HAS_MODEL_LOADED(func_640());
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1290[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_1196[iVar0]);
						if ((STREAMING::HAS_MODEL_LOADED(iLocal_1196[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_631[iVar0], &cLocal_1179)) && bVar17)
						{
							if (fLocal_612 >= (fLocal_281[iVar0] - (fLocal_625 * fParam1)))
							{
								if ((iLocal_113 || iParam2) || (!bLocal_130 && !func_756(Local_885[iVar0 /*3*/], Var12, 5f, fLocal_623)))
								{
									if (bLocal_109)
									{
										func_755(Local_885[iVar0 /*3*/], Var12, fLocal_616);
									}
									iLocal_1290[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_1196[iVar0], Local_885[iVar0 /*3*/], 0f, 0, 0);
									if (iLocal_1196[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_1290[iVar0], 0);
									}
									if (uLocal_122 && !MISC::IS_BIT_SET(iLocal_705[iVar0], 0))
									{
										func_754(iLocal_1290[iVar0]);
									}
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_1290[iVar0], Local_885[iVar0 /*3*/], 0, 0, 1);
									ENTITY::SET_ENTITY_QUATERNION(iLocal_1290[iVar0], fLocal_133[iVar0], fLocal_170[iVar0], fLocal_207[iVar0], fLocal_244[iVar0]);
									if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_1196[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_1196[iVar0]))
									{
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1290[iVar0]);
									}
									if (MISC::IS_BIT_SET(iLocal_705[iVar0], 3))
									{
										ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_1290[iVar0], 1);
									}
									if (!MISC::IS_BIT_SET(iLocal_705[iVar0], 0))
									{
										VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1290[iVar0], 1, 1);
										if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
										{
											VEHICLE::SET_VEHICLE_LIGHTS(iLocal_1290[iVar0], 3);
										}
									}
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_1290[iVar0], true);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_1290[iVar0], 1);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1196[iVar0]);
									iLocal_877 = (iLocal_877 - 1);
									iLocal_668[iVar0]++;
									bLocal_130 = true;
								}
								else if (fLocal_612 > fLocal_281[iVar0])
								{
									iLocal_877 = (iLocal_877 - 1);
									func_762(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_668[iVar0] == 2)
				{
					bVar17 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_883 || iLocal_883 == 0)) || iLocal_113) || iParam2)
					{
						if (!MISC::IS_BIT_SET(iLocal_705[iVar0], 1))
						{
							if (MISC::IS_BIT_SET(iLocal_705[iVar0], 0))
							{
								STREAMING::REQUEST_MODEL(GlobalFunc_2211());
								bVar17 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
								iVar21 = 2;
							}
							else if (!bLocal_126 && ((!MISC::IS_BIT_SET(iLocal_705[iVar0], 2) && uVar19) || (MISC::IS_BIT_SET(iLocal_705[iVar0], 2) && uVar20)))
							{
								bVar17 = true;
								iVar21 = 1;
							}
							else
							{
								STREAMING::REQUEST_MODEL(func_640());
								bVar17 = STREAMING::HAS_MODEL_LOADED(func_640());
								iVar21 = 0;
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_1290[iVar0]))
							{
								if (!bLocal_130 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_1290[iVar0], -1))
								{
									if (bVar17)
									{
										if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_1290[iVar0], 1), Var12) < 10000f || iParam2) || iLocal_113)
										{
											func_752(&(iLocal_1290[iVar0]), iVar21, 0);
											MISC::SET_BIT(&(iLocal_705[iVar0]), 1);
										}
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1290[iVar0], 0))
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_631[iVar0], &cLocal_1179);
							if (fLocal_612 >= fLocal_281[iVar0])
							{
								if (28 > iLocal_868)
								{
									fVar15 = (fLocal_612 - fLocal_281[iVar0]);
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_631[iVar0], &cLocal_1179))
									{
										if (fVar15 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_631[iVar0], &cLocal_1179))
										{
											Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_1290[iVar0], 1) };
											Var9 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_631[iVar0], fVar15, &cLocal_1179) };
											if (!func_756(Var6, Var12, 5f, fLocal_623) && func_756(Var9, Var12, 5f, fLocal_623))
											{
												if (!MISC::IS_BIT_SET(iLocal_705[iVar0], 1))
												{
													func_752(&(iLocal_1290[iVar0]), iVar21, 0);
												}
												func_762(iVar0, 1090519040);
											}
											else if (((!bLocal_130 || MISC::IS_BIT_SET(iLocal_705[iVar0], 1)) || iLocal_113) || iParam2)
											{
												if (func_745(&(iLocal_1290[iVar0]), iLocal_631[iVar0], fVar15, 1, 0, 0, 1, iLocal_127))
												{
													if (!MISC::IS_BIT_SET(iLocal_705[iVar0], 1))
													{
														func_752(&(iLocal_1290[iVar0]), iVar21, 0);
													}
													ENTITY::SET_ENTITY_COLLISION(iLocal_1290[iVar0], true, 0);
													VEHICLE::SET_PLAYBACK_SPEED(iLocal_1290[iVar0], fParam1);
													iLocal_868++;
													iLocal_668[iVar0]++;
												}
											}
										}
										else
										{
											if (!MISC::IS_BIT_SET(iLocal_705[iVar0], 1))
											{
												func_752(&(iLocal_1290[iVar0]), iVar21, 0);
											}
											func_762(iVar0, 1090519040);
										}
									}
									else if (fVar15 > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_631[iVar0], &cLocal_1179))
									{
										if (!MISC::IS_BIT_SET(iLocal_705[iVar0], 1))
										{
											func_752(&(iLocal_1290[iVar0]), iVar21, 0);
										}
										func_762(iVar0, 1090519040);
									}
								}
								else
								{
									if (!MISC::IS_BIT_SET(iLocal_705[iVar0], 1))
									{
										func_752(&(iLocal_1290[iVar0]), iVar21, 0);
									}
									func_762(iVar0, 1090519040);
								}
							}
							else if (iLocal_110 && !bLocal_118)
							{
								if (!MISC::IS_BIT_SET(iLocal_705[iVar0], 1))
								{
									func_752(&(iLocal_1290[iVar0]), iVar21, 0);
								}
								func_762(iVar0, 1090519040);
							}
						}
						else
						{
							if (!MISC::IS_BIT_SET(iLocal_705[iVar0], 1))
							{
								func_752(&(iLocal_1290[iVar0]), iVar21, 0);
							}
							func_762(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_883 = iVar0;
					}
				}
				else if (iLocal_668[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1290[iVar0], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1290[iVar0]))
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1290[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								if (bVar18)
								{
									bVar24 = false;
									if (!bLocal_108)
									{
										if ((!bLocal_103 && !iLocal_100) && func_751(iLocal_1290[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_882 || iLocal_882 == 0))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iVar5))
												{
													bVar17 = false;
													if (!GlobalFunc_5656(iLocal_1290[iVar0], iVar5) || GlobalFunc_5654(iVar5, iLocal_1290[iVar0], 0))
													{
														bVar24 = true;
													}
												}
												iLocal_882 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_123 && !MISC::IS_BIT_SET(iLocal_705[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_882 || iLocal_882 == 0))
										{
											Var25 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iLocal_1290[iVar0], 1)) };
											if (Var25.f_1 < 0f)
											{
												if (MISC::ABSF(Var25.f_1) > MISC::ABSF(Var25.x))
												{
													bVar24 = true;
												}
											}
											iVar2++;
											iLocal_882 = iVar0;
										}
									}
									if (bVar24)
									{
										func_747(iLocal_1290[iVar0]);
										iLocal_668[iVar0]++;
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_1290[iVar0], fParam1);
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1290[iVar0]);
							}
						}
						else
						{
							iLocal_668[iVar0]++;
						}
					}
					else
					{
						iLocal_668[iVar0]++;
					}
				}
				else if (iLocal_668[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1290[iVar0], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1290[iVar0]))
						{
							iLocal_668[iVar0]++;
						}
						else
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1290[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_1290[iVar0], fParam1);
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1290[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_631[iVar0], &cLocal_1179))
							{
								if (fLocal_612 > (fLocal_281[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_631[iVar0], &cLocal_1179)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1290[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1290[iVar0]);
							}
						}
					}
					else
					{
						iLocal_668[iVar0]++;
					}
				}
				else if (iLocal_668[iVar0] == 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_1290[iVar0]))
					{
						fVar16 = ENTITY::GET_ENTITY_SPEED(iLocal_1290[iVar0]);
					}
					iLocal_868 = (iLocal_868 - 1);
					func_762(iVar0, fVar16);
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
			iLocal_872 = iVar22;
		}
		if (iVar2 < 3)
		{
			iLocal_882 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_883 = 0;
		}
	}
	else
	{
		func_636();
	}
}


void func_762(int iParam0, float fParam1)//Position - 0x6E65C
{
	int iVar0;
	
	if (!iLocal_1196[iParam0] == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1196[iParam0]);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_1290[iParam0]))
	{
		ENTITY::SET_ENTITY_COLLISION(iLocal_1290[iParam0], true, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_1290[iParam0], false);
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1290[iParam0], -1);
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
			TASK::TASK_VEHICLE_MISSION(iVar0, iLocal_1290[iParam0], 0, 1, fParam1, 786603, 5f, 5f, 1);
			PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
			if (bLocal_132)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, false);
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar0, fParam1);
		}
	}
	if (!bLocal_101)
	{
		if (!bLocal_129)
		{
			GlobalFunc_2221(iVar0);
			GlobalFunc_2210(iLocal_1290[iParam0]);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::DELETE_PED(&iVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1290[iParam0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_1290[iParam0]));
		}
	}
	if (!bLocal_111 && !bLocal_124)
	{
		if (iLocal_631[iParam0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_631[iParam0], &cLocal_1179);
		}
	}
	iLocal_668[iParam0] = 99;
}

void func_763(int iParam0, float fParam1, float fParam2)//Position - 0x6E7B5
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
			func_755(Var1, Var10, fVar13);
		}
	}
}

void func_764(int iParam0, float fParam1)//Position - 0x6E838
{
	if (!bLocal_112)
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

void func_765(int iParam0, float fParam1)//Position - 0x6E885
{
	if (!bLocal_112)
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

void func_766(int iParam0, float fParam1)//Position - 0x6E8D2
{
	var uVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
	{
		fVar1 = (fLocal_626 + 2000f);
		fVar2 = (fLocal_627 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			uVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (fVar1 <= VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(uVar0))
			{
				if (iLocal_878 == 0)
				{
					Local_1167 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_626) };
					iLocal_878++;
				}
				else if (iLocal_878 == 1)
				{
					Local_1170 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar1) };
					iLocal_878++;
				}
				else if (!bLocal_130)
				{
					if (Local_1167.x > Local_1170.x)
					{
						fVar3 = Local_1167.x;
						Local_1167.x = Local_1170.x;
						Local_1170.x = fVar3;
					}
					if (Local_1167.f_1 > Local_1170.f_1)
					{
						fVar3 = Local_1167.f_1;
						Local_1167.f_1 = Local_1170.f_1;
						Local_1170.f_1 = fVar3;
					}
					if (Local_1167.f_2 > Local_1170.f_2)
					{
						fVar3 = Local_1167.f_2;
						Local_1167.f_2 = Local_1170.f_2;
						Local_1170.f_2 = fVar3;
					}
					Local_1167 = { Local_1167 - Vector(fLocal_630, fLocal_630, fLocal_630) };
					Local_1170 = { Local_1170 + Vector(fLocal_630, fLocal_630, fLocal_630) };
					PATHFIND::SET_ROADS_IN_AREA(Local_1167, Local_1170, 0, 0);
					fLocal_626 = fVar1;
					iLocal_878 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (iLocal_881 == 0)
			{
				Local_1173 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_627) };
				iLocal_881++;
			}
			else if (iLocal_881 == 1)
			{
				Local_1176 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar2) };
				iLocal_881++;
			}
			else if (!bLocal_130 && !bVar4)
			{
				if (Local_1173.x > Local_1176.x)
				{
					fVar3 = Local_1173.x;
					Local_1173.x = Local_1176.x;
					Local_1176.x = fVar3;
				}
				if (Local_1173.f_1 > Local_1176.f_1)
				{
					fVar3 = Local_1173.f_1;
					Local_1173.f_1 = Local_1176.f_1;
					Local_1176.f_1 = fVar3;
				}
				if (Local_1173.f_2 > Local_1176.f_2)
				{
					fVar3 = Local_1173.f_2;
					Local_1173.f_2 = Local_1176.f_2;
					Local_1176.f_2 = fVar3;
				}
				Local_1173 = { Local_1173 - Vector(fLocal_630, fLocal_630, fLocal_630) };
				Local_1176 = { Local_1176 + Vector(fLocal_630, fLocal_630, fLocal_630) };
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_1173, Local_1176, 1);
				fLocal_627 = fVar2;
				iLocal_881 = 0;
			}
		}
	}
}


void func_768()//Position - 0x6EBC0
{
	iLocal_113 = 1;
}

void func_769(int iParam0, float fParam1)//Position - 0x6EBCB
{
	int iVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			func_768();
			func_745(&iParam0, iLocal_871, fParam1, 1, 0, 1, 0, 0);
			fLocal_612 = fParam1;
			iVar0 = 0;
			while (iVar0 < 35)
			{
				if (iLocal_778[iVar0] > 2 && iLocal_778[iVar0] < 6)
				{
					bVar2 = false;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1374[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_1374[iVar0]))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1374[iVar0]))
							{
								fVar1 = (fParam1 - fLocal_466[iVar0]);
								fVar1 = (fVar1 * fLocal_502[iVar0]);
								if (fVar1 >= 0f)
								{
									if (fVar1 < func_757(iLocal_742[iVar0]))
									{
										func_745(&(iLocal_1374[iVar0]), iLocal_742[iVar0], fVar1, 1, 0, 1, iLocal_128, iLocal_127);
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
						iLocal_778[iVar0] = 99;
						iLocal_869 = (iLocal_869 - 1);
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 36)
			{
				if (iLocal_668[iVar0] > 2 && iLocal_668[iVar0] < 6)
				{
					bVar2 = false;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1290[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_1290[iVar0]))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1290[iVar0]))
							{
								fVar1 = (fParam1 - fLocal_281[iVar0]);
								if (fVar1 >= 0f)
								{
									if (fVar1 < func_757(iLocal_631[iVar0]))
									{
										func_745(&(iLocal_1290[iVar0]), iLocal_631[iVar0], fVar1, 1, 0, 1, 1, iLocal_127);
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
						iLocal_668[iVar0] = 99;
						iLocal_868 = (iLocal_868 - 1);
					}
				}
				iVar0++;
			}
			iLocal_872 = 0;
			iLocal_874 = 0;
			iVar0 = 0;
			while (iVar0 < 17)
			{
				if (iLocal_850[iVar0] > 2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1356[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_1356[iVar0]))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1356[iVar0], 1, 0);
							iLocal_870++;
							iLocal_850[iVar0] = 2;
						}
					}
					else
					{
						iLocal_850[iVar0] = 0;
					}
				}
				iVar0++;
			}
			iLocal_873 = 0;
			iLocal_878 = 0;
			iLocal_881 = 0;
			fLocal_627 = fParam1;
			fLocal_626 = fParam1;
			Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			Local_1155 = { Var3 - Vector(100f, 100f, 100f) };
			Local_1158 = { Var3 + Vector(100f, 100f, 100f) };
			PATHFIND::SET_ROADS_IN_AREA(Local_1155, Local_1158, 0, 0);
		}
	}
}

void func_770(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x6EE77
{
	struct<3> Var0;
	
	StringCopy(&cLocal_1179, sParam0, 64);
	bLocal_109 = true;
	iLocal_114 = 0;
	iLocal_868 = 0;
	iLocal_869 = 0;
	iLocal_870 = 0;
	iLocal_871 = iParam1;
	iLocal_872 = 0;
	iLocal_873 = 0;
	iLocal_874 = 0;
	iLocal_878 = 0;
	iLocal_881 = 0;
	iLocal_879 = -1;
	iLocal_880 = -1;
	iLocal_882 = 0;
	iLocal_883 = 0;
	fLocal_626 = 0f;
	fLocal_627 = 0f;
	fLocal_612 = 0f;
	iLocal_115 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		Local_1155.x = (Var0.x - 100f);
		Local_1155.f_1 = (Var0.f_1 - 100f);
		Local_1155.f_2 = (Var0.f_2 - 100f);
		Local_1158.x = (Var0.x + 100f);
		Local_1158.f_1 = (Var0.f_1 + 100f);
		Local_1158.f_2 = (Var0.f_2 + 100f);
		PATHFIND::SET_ROADS_IN_AREA(Local_1155, Local_1158, 0, 0);
		if (bParam2)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(Var0, 500f, 0, 0, 0, 0, 0);
		}
	}
	PED::ADD_RELATIONSHIP_GROUP("rgh_traffic", &iLocal_1195);
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
	func_627();
}

void func_771()//Position - 0x6EF99
{
	func_773(1);
	func_772();
}

void func_772()//Position - 0x6EFAA
{
	Local_885[4 /*3*/] = { -33.8633f, -499.4361f, 32.4682f };
	fLocal_133[4] = -0.0134f;
	fLocal_170[4] = -0.0135f;
	fLocal_207[4] = 0.7107f;
	fLocal_244[4] = 0.7033f;
	iLocal_631[4] = 25;
	fLocal_281[4] = 0f;
	iLocal_1196[4] = joaat("intruder");
	Local_885[5 /*3*/] = { -782.225f, -280.0836f, 36.5154f };
	fLocal_133[5] = -0.0062f;
	fLocal_170[5] = 0.0047f;
	fLocal_207[5] = 0.1901f;
	fLocal_244[5] = 0.9817f;
	iLocal_631[5] = 28;
	fLocal_281[5] = 5f;
	iLocal_1196[5] = joaat("intruder");
	Local_885[6 /*3*/] = { -780.7571f, -281.1153f, 36.4944f };
	fLocal_133[6] = -0.0074f;
	fLocal_170[6] = 0.0167f;
	fLocal_207[6] = 0.1845f;
	fLocal_244[6] = 0.9827f;
	iLocal_631[6] = 29;
	fLocal_281[6] = 7000f;
	iLocal_1196[6] = joaat("intruder");
	Local_885[7 /*3*/] = { -792.6519f, -285.0189f, 36.6133f };
	fLocal_133[7] = 0.0236f;
	fLocal_170[7] = 0.0063f;
	fLocal_207[7] = 0.9975f;
	fLocal_244[7] = -0.0664f;
	iLocal_631[7] = 2;
	fLocal_281[7] = 7458f;
	iLocal_1196[7] = joaat("futo");
	Local_885[8 /*3*/] = { -807.5777f, -268.1831f, 36.4f };
	fLocal_133[8] = 0.0231f;
	fLocal_170[8] = -0.0174f;
	fLocal_207[8] = 0.9862f;
	fLocal_244[8] = -0.1629f;
	iLocal_631[8] = 3;
	fLocal_281[8] = 7722f;
	iLocal_1196[8] = joaat("intruder");
	Local_885[9 /*3*/] = { -804.7911f, -324.1086f, 36.6377f };
	fLocal_133[9] = 0.0045f;
	fLocal_170[9] = -0.0154f;
	fLocal_207[9] = 0.8405f;
	fLocal_244[9] = -0.5416f;
	iLocal_631[9] = 8;
	fLocal_281[9] = 9000f;
	iLocal_1196[9] = joaat("intruder");
	if (!Global_86789)
	{
		Local_885[10 /*3*/] = { -761.9318f, -336.713f, 35.7959f };
		fLocal_133[10] = 0.003f;
		fLocal_170[10] = -0.017f;
		fLocal_207[10] = 0.8328f;
		fLocal_244[10] = -0.5533f;
		iLocal_631[10] = 10;
		fLocal_281[10] = 9000f;
		iLocal_1196[10] = joaat("intruder");
	}
	Local_885[11 /*3*/] = { -743.8067f, -349.9666f, 35.1022f };
	fLocal_133[11] = -0.0101f;
	fLocal_170[11] = -0.0319f;
	fLocal_207[11] = 0.8296f;
	fLocal_244[11] = -0.5573f;
	iLocal_631[11] = 12;
	fLocal_281[11] = 9000f;
	iLocal_1196[11] = joaat("intruder");
	Local_885[12 /*3*/] = { -808.8842f, -298.8781f, 36.6708f };
	fLocal_133[12] = 0.0049f;
	fLocal_170[12] = 0.0272f;
	fLocal_207[12] = 0.5848f;
	fLocal_244[12] = 0.8107f;
	iLocal_631[12] = 4;
	fLocal_281[12] = 9240f;
	iLocal_1196[12] = joaat("futo");
	Local_885[13 /*3*/] = { -658.5707f, -365.369f, 34.3948f };
	fLocal_133[13] = -0.0044f;
	fLocal_170[13] = -0.0145f;
	fLocal_207[13] = 0.5708f;
	fLocal_244[13] = 0.821f;
	iLocal_631[13] = 45;
	fLocal_281[13] = 11000f;
	iLocal_1196[13] = joaat("futo");
	Local_885[14 /*3*/] = { -700.582f, -343.4963f, 34.2747f };
	fLocal_133[14] = -0.007f;
	fLocal_170[14] = 0.0146f;
	fLocal_207[14] = 0.583f;
	fLocal_244[14] = 0.8123f;
	iLocal_631[14] = 31;
	fLocal_281[14] = 11000f;
	iLocal_1196[14] = joaat("intruder");
	Local_885[15 /*3*/] = { -742.2833f, -333.4205f, 35.5649f };
	fLocal_133[15] = 0.0118f;
	fLocal_170[15] = -0.0022f;
	fLocal_207[15] = 0.5698f;
	fLocal_244[15] = 0.8217f;
	iLocal_631[15] = 30;
	fLocal_281[15] = 13000f;
	iLocal_1196[15] = joaat("intruder");
	if (Global_86788 == 0)
	{
		Local_885[16 /*3*/] = { -652.4525f, -309.8684f, 34.8913f };
		fLocal_133[16] = 0.0048f;
		fLocal_170[16] = -0.0153f;
		fLocal_207[16] = 0.9671f;
		fLocal_244[16] = -0.2538f;
		iLocal_631[16] = 57;
		fLocal_281[16] = 14500f;
		iLocal_1196[16] = joaat("surfer");
	}
	Local_885[17 /*3*/] = { -629.4591f, -419.8522f, 34.3522f };
	fLocal_133[17] = -0.0038f;
	fLocal_170[17] = -0.0006f;
	fLocal_207[17] = 0.1536f;
	fLocal_244[17] = 0.9881f;
	iLocal_631[17] = 56;
	fLocal_281[17] = 17000f;
	iLocal_1196[17] = joaat("washington");
	Local_885[18 /*3*/] = { -646.1561f, -330.1735f, 34.4512f };
	fLocal_133[18] = 0.0023f;
	fLocal_170[18] = -0.0063f;
	fLocal_207[18] = 0.972f;
	fLocal_244[18] = -0.2347f;
	iLocal_631[18] = 6;
	fLocal_281[18] = 17000f;
	iLocal_1196[18] = joaat("buffalo");
	Local_885[19 /*3*/] = { -645.9526f, -365.6587f, 34.2968f };
	fLocal_133[19] = 0.0087f;
	fLocal_170[19] = -0.0028f;
	fLocal_207[19] = 0.6804f;
	fLocal_244[19] = 0.7328f;
	iLocal_631[19] = 11;
	fLocal_281[19] = 17556f;
	iLocal_1196[19] = joaat("intruder");
	Local_885[20 /*3*/] = { -533.9698f, -366.4778f, 34.7457f };
	fLocal_133[20] = 0.0024f;
	fLocal_170[20] = -0.01f;
	fLocal_207[20] = 0.6975f;
	fLocal_244[20] = 0.7166f;
	iLocal_631[20] = 35;
	fLocal_281[20] = 18000f;
	iLocal_1196[20] = joaat("intruder");
	Local_885[21 /*3*/] = { -537.3636f, -339.162f, 34.6386f };
	fLocal_133[21] = -0.0126f;
	fLocal_170[21] = -0.0109f;
	fLocal_207[21] = 0.9881f;
	fLocal_244[21] = -0.1527f;
	iLocal_631[21] = 38;
	fLocal_281[21] = 18000f;
	iLocal_1196[21] = joaat("futo");
	if (Global_86788 == 0)
	{
		Local_885[22 /*3*/] = { -583.7382f, -370.7444f, 34.7169f };
		fLocal_133[22] = 0.0012f;
		fLocal_170[22] = -0.0106f;
		fLocal_207[22] = 0.7034f;
		fLocal_244[22] = 0.7108f;
		iLocal_631[22] = 5;
		fLocal_281[22] = 18000f;
		iLocal_1196[22] = joaat("bobcatxl");
	}
	Local_885[24 /*3*/] = { -519.8954f, -365.4402f, 34.6054f };
	fLocal_133[24] = -0.0167f;
	fLocal_170[24] = -0.007f;
	fLocal_207[24] = 0.7061f;
	fLocal_244[24] = 0.7079f;
	iLocal_631[24] = 14;
	fLocal_281[24] = 22704f;
	iLocal_1196[24] = joaat("intruder");
	Local_885[25 /*3*/] = { -536.8012f, -381.7743f, 34.5752f };
	fLocal_133[25] = 0.0049f;
	fLocal_170[25] = 0.0087f;
	fLocal_207[25] = -0.7044f;
	fLocal_244[25] = 0.7098f;
	iLocal_631[25] = 40;
	fLocal_281[25] = 25000f;
	iLocal_1196[25] = joaat("futo");
	Local_885[26 /*3*/] = { -326.7438f, -373.6238f, 29.595f };
	fLocal_133[26] = -0.0009f;
	fLocal_170[26] = -0.0062f;
	fLocal_207[26] = 0.959f;
	fLocal_244[26] = 0.2834f;
	iLocal_631[26] = 43;
	fLocal_281[26] = 28000f;
	iLocal_1196[26] = joaat("intruder");
	Local_885[27 /*3*/] = { -292.27f, -394.0676f, 29.6529f };
	fLocal_133[27] = -0.0033f;
	fLocal_170[27] = -0.0044f;
	fLocal_207[27] = 0.6476f;
	fLocal_244[27] = 0.762f;
	iLocal_631[27] = 44;
	fLocal_281[27] = 28000f;
	iLocal_1196[27] = joaat("futo");
	Local_885[28 /*3*/] = { -430.528f, -391.5486f, 32.3151f };
	fLocal_133[28] = 0.0072f;
	fLocal_170[28] = -0.0286f;
	fLocal_207[28] = 0.7321f;
	fLocal_244[28] = -0.6806f;
	iLocal_631[28] = 47;
	fLocal_281[28] = 29000f;
	iLocal_1196[28] = joaat("intruder");
	Local_885[29 /*3*/] = { -498.0784f, -378.6452f, 34.5305f };
	fLocal_133[29] = 0.0118f;
	fLocal_170[29] = -0.0114f;
	fLocal_207[29] = 0.7557f;
	fLocal_244[29] = -0.6547f;
	iLocal_631[29] = 15;
	fLocal_281[29] = 29000f;
	iLocal_1196[29] = joaat("bjxl");
	Local_885[30 /*3*/] = { -408.6873f, -378.5633f, 31.8791f };
	fLocal_133[30] = 0.0077f;
	fLocal_170[30] = 0.0055f;
	fLocal_207[30] = 0.6494f;
	fLocal_244[30] = 0.7604f;
	iLocal_631[30] = 42;
	fLocal_281[30] = 30000f;
	iLocal_1196[30] = joaat("intruder");
	Local_885[31 /*3*/] = { -316.7394f, -402.1969f, 30.3198f };
	fLocal_133[31] = 0.0029f;
	fLocal_170[31] = -0.0031f;
	fLocal_207[31] = 0.7466f;
	fLocal_244[31] = -0.6653f;
	iLocal_631[31] = 17;
	fLocal_281[31] = 30228f;
	iLocal_1196[31] = joaat("intruder");
	Local_885[33 /*3*/] = { -275.0721f, -400.0645f, 29.6053f };
	fLocal_133[33] = 0.0063f;
	fLocal_170[33] = 0.0002f;
	fLocal_207[33] = -0.2606f;
	fLocal_244[33] = 0.9654f;
	iLocal_631[33] = 18;
	fLocal_281[33] = 31746f;
	iLocal_1196[33] = joaat("intruder");
	Local_885[35 /*3*/] = { -223.3546f, -530.3926f, 26.3561f };
	fLocal_133[35] = -0.0131f;
	fLocal_170[35] = 0.0132f;
	fLocal_207[35] = 0.7157f;
	fLocal_244[35] = -0.6982f;
	iLocal_631[35] = 718;
	fLocal_281[35] = 34719f;
	iLocal_1196[35] = joaat("jackal");
	Local_994[1 /*3*/] = { -452.527f, -392.0529f, 33.3284f };
	fLocal_538[1] = -0.0042f;
	fLocal_556[1] = -0.0277f;
	fLocal_574[1] = 0.7473f;
	fLocal_592[1] = -0.6639f;
	iLocal_1233[1] = joaat("futo");
	Local_994[2 /*3*/] = { -379.4753f, -401.2219f, 31.11f };
	fLocal_538[2] = -0.0141f;
	fLocal_556[2] = -0.0365f;
	fLocal_574[2] = 0.7427f;
	fLocal_592[2] = -0.6685f;
	iLocal_1233[2] = joaat("futo");
	Local_994[3 /*3*/] = { -371.2489f, -402.2385f, 30.8473f };
	fLocal_538[3] = -0.004f;
	fLocal_556[3] = -0.0306f;
	fLocal_574[3] = 0.7518f;
	fLocal_592[3] = -0.6586f;
	iLocal_1233[3] = joaat("futo");
	Local_994[4 /*3*/] = { -336.2818f, -406.7365f, 29.5646f };
	fLocal_538[4] = -0.0099f;
	fLocal_556[4] = -0.0202f;
	fLocal_574[4] = 0.7622f;
	fLocal_592[4] = -0.647f;
	iLocal_1233[4] = joaat("intruder");
	Local_994[5 /*3*/] = { 1041.398f, -276.8591f, 50.223f };
	fLocal_538[5] = -0.0127f;
	fLocal_556[5] = -0.0271f;
	fLocal_574[5] = 0.9913f;
	fLocal_592[5] = 0.1283f;
	iLocal_1233[5] = joaat("police3");
	Local_994[6 /*3*/] = { 1045.654f, -299.9178f, 49.4434f };
	fLocal_538[6] = 0.0082f;
	fLocal_556[6] = -0.0401f;
	fLocal_574[6] = -0.4631f;
	fLocal_592[6] = 0.8854f;
	iLocal_1233[6] = joaat("police3");
	Local_994[11 /*3*/] = { 565.6103f, -836.3173f, 9.9359f };
	fLocal_538[11] = 0.0012f;
	fLocal_556[11] = 0.0008f;
	fLocal_574[11] = -0.6146f;
	fLocal_592[11] = 0.7888f;
	iLocal_1233[11] = joaat("police3");
	Local_994[12 /*3*/] = { 573.8864f, -837.935f, 9.9314f };
	fLocal_538[12] = 0.0012f;
	fLocal_556[12] = -0.0009f;
	fLocal_574[12] = 0.7139f;
	fLocal_592[12] = 0.7003f;
	iLocal_1233[12] = joaat("police3");
	Local_994[13 /*3*/] = { 582.9113f, -839.4673f, 9.7816f };
	fLocal_538[13] = 0.0501f;
	fLocal_556[13] = 0.0509f;
	fLocal_574[13] = 0.6493f;
	fLocal_592[13] = 0.7572f;
	iLocal_1233[13] = joaat("police3");
	Local_994[14 /*3*/] = { 679.7463f, -525.5728f, 14.256f };
	fLocal_538[14] = -0.0102f;
	fLocal_556[14] = -0.0023f;
	fLocal_574[14] = 0.9769f;
	fLocal_592[14] = -0.2135f;
	iLocal_1233[14] = joaat("police3");
	Local_994[15 /*3*/] = { 686.1791f, -529.5911f, 14.4451f };
	fLocal_538[15] = -0.012f;
	fLocal_556[15] = 0.01f;
	fLocal_574[15] = 0.7669f;
	fLocal_592[15] = -0.6416f;
	iLocal_1233[15] = joaat("police3");
	Local_994[16 /*3*/] = { 670.8864f, -522.0038f, 14.2409f };
	fLocal_538[16] = 0.0035f;
	fLocal_556[16] = -0.0055f;
	fLocal_574[16] = 0.5541f;
	fLocal_592[16] = 0.8324f;
	iLocal_1233[16] = joaat("police3");
	Local_1046[0 /*3*/] = { -638.6117f, -242.9966f, 37.6235f };
	fLocal_322[0] = 0f;
	fLocal_358[0] = 0f;
	fLocal_394[0] = 0.3646f;
	fLocal_430[0] = 0.9312f;
	iLocal_742[0] = 998;
	fLocal_466[0] = 0f;
	fLocal_502[0] = 1f;
	iLocal_1251[0] = Local_3369;
	Local_1046[1 /*3*/] = { -840.979f, -377.3532f, 39.4003f };
	fLocal_322[1] = -0.0063f;
	fLocal_358[1] = 0.0194f;
	fLocal_394[1] = -0.512f;
	fLocal_430[1] = 0.8588f;
	iLocal_742[1] = 53;
	fLocal_466[1] = 3500f;
	fLocal_502[1] = 1f;
	iLocal_1251[1] = joaat("biff");
	Local_1046[2 /*3*/] = { -868.8333f, -287.1481f, 40.2375f };
	fLocal_322[2] = 0.0024f;
	fLocal_358[2] = -0.0158f;
	fLocal_394[2] = 0.8924f;
	fLocal_430[2] = -0.451f;
	iLocal_742[2] = 54;
	fLocal_466[2] = 7250f;
	fLocal_502[2] = 1f;
	iLocal_1251[2] = joaat("bjxl");
	Local_1046[3 /*3*/] = { -875.2956f, -282.3078f, 39.9842f };
	fLocal_322[3] = -0.0007f;
	fLocal_358[3] = -0.0132f;
	fLocal_394[3] = 0.8808f;
	fLocal_430[3] = -0.4733f;
	iLocal_742[3] = 55;
	fLocal_466[3] = 7250f;
	fLocal_502[3] = 1f;
	iLocal_1251[3] = joaat("washington");
	Local_1046[4 /*3*/] = { -479.2266f, -344.1364f, 34.14f };
	fLocal_322[4] = -0.0001f;
	fLocal_358[4] = -0.0003f;
	fLocal_394[4] = 0.9967f;
	fLocal_430[4] = 0.0811f;
	iLocal_742[4] = 7;
	fLocal_466[4] = 19500f;
	fLocal_502[4] = 0.8f;
	iLocal_1251[4] = joaat("ambulance");
	Local_1046[6 /*3*/] = { -160.6159f, -349.8996f, 34.0634f };
	fLocal_322[6] = -0.0608f;
	fLocal_358[6] = -0.0647f;
	fLocal_394[6] = 0.9587f;
	fLocal_430[6] = 0.2702f;
	iLocal_742[6] = 60;
	fLocal_466[6] = 30000f;
	fLocal_502[6] = 1f;
	iLocal_1251[6] = joaat("police3");
	Local_1046[8 /*3*/] = { -136.4866f, -296.7225f, 39.7642f };
	fLocal_322[8] = -0.021f;
	fLocal_358[8] = -0.0531f;
	fLocal_394[8] = 0.9846f;
	fLocal_430[8] = 0.1651f;
	iLocal_742[8] = 50;
	fLocal_466[8] = 30000f;
	fLocal_502[8] = 1f;
	iLocal_1251[8] = joaat("police3");
	Local_1046[9 /*3*/] = { -233.3454f, -619.1058f, 33.8295f };
	fLocal_322[9] = 0.0149f;
	fLocal_358[9] = 0.0266f;
	fLocal_394[9] = -0.1565f;
	fLocal_430[9] = 0.9872f;
	iLocal_742[9] = 51;
	fLocal_466[9] = 31000f;
	fLocal_502[9] = 1f;
	iLocal_1251[9] = joaat("bus");
	Local_1046[10 /*3*/] = { -231.0461f, -603.5657f, 33.8332f };
	fLocal_322[10] = 0.0017f;
	fLocal_358[10] = 0.0013f;
	fLocal_394[10] = -0.1655f;
	fLocal_430[10] = 0.9862f;
	iLocal_742[10] = 52;
	fLocal_466[10] = 30000f;
	fLocal_502[10] = 1f;
	iLocal_1251[10] = joaat("police3");
	Local_1046[12 /*3*/] = { 1081.227f, -354.8069f, 67.0946f };
	fLocal_322[12] = -0.017f;
	fLocal_358[12] = -0.0003f;
	fLocal_394[12] = 0.3461f;
	fLocal_430[12] = 0.9381f;
	iLocal_742[12] = 803;
	fLocal_466[12] = 151328f;
	fLocal_502[12] = 1f;
	iLocal_1251[12] = joaat("riot");
	Local_1046[13 /*3*/] = { 1021.537f, -310.6206f, 66.7659f };
	fLocal_322[13] = -0.01f;
	fLocal_358[13] = 0.0008f;
	fLocal_394[13] = 0.8815f;
	fLocal_430[13] = -0.4722f;
	iLocal_742[13] = 804;
	fLocal_466[13] = 159087f;
	fLocal_502[13] = 1f;
	iLocal_1251[13] = joaat("police3");
	Local_1046[14 /*3*/] = { 695.325f, -395.2741f, 40.9185f };
	fLocal_322[14] = -0.0003f;
	fLocal_358[14] = -0.002f;
	fLocal_394[14] = 0.7092f;
	fLocal_430[14] = -0.705f;
	iLocal_742[14] = 805;
	fLocal_466[14] = 166840f;
	fLocal_502[14] = 1f;
	iLocal_1251[14] = joaat("police3");
	Local_1046[15 /*3*/] = { 1040.132f, -284.6946f, 49.7886f };
	fLocal_322[15] = 0.0118f;
	fLocal_358[15] = -0.0124f;
	fLocal_394[15] = 0.9569f;
	fLocal_430[15] = 0.2898f;
	iLocal_742[15] = 700;
	fLocal_466[15] = 158000f;
	fLocal_502[15] = 1f;
	iLocal_1251[15] = Local_3369;
	iLocal_778[15] = 3;
	Local_1046[17 /*3*/] = { 1084.025f, -254.2668f, 57.7442f };
	fLocal_322[17] = 0.0041f;
	fLocal_358[17] = 0.0153f;
	fLocal_394[17] = 0.9649f;
	fLocal_430[17] = 0.2623f;
	iLocal_742[17] = 702;
	fLocal_466[17] = 152700f;
	fLocal_502[17] = 0.95f;
	iLocal_1251[17] = joaat("police3");
	Local_1046[18 /*3*/] = { 1085.8f, -257.063f, 57.7623f };
	fLocal_322[18] = 0f;
	fLocal_358[18] = 0f;
	fLocal_394[18] = 0.9545f;
	fLocal_430[18] = 0.2982f;
	iLocal_742[18] = 703;
	fLocal_466[18] = 153100f;
	fLocal_502[18] = 0.92f;
	iLocal_1251[18] = joaat("police3");
	Local_1046[19 /*3*/] = { 976.2125f, -325.9881f, 61.8851f };
	fLocal_322[19] = 0.2821f;
	fLocal_358[19] = -0.2157f;
	fLocal_394[19] = 0.9255f;
	fLocal_430[19] = 0.1313f;
	iLocal_742[19] = 999;
	fLocal_466[19] = 153500f;
	fLocal_502[19] = 1f;
	iLocal_1251[19] = joaat("police3");
	Local_1046[20 /*3*/] = { 973.0397f, -317.2896f, 66.2431f };
	fLocal_322[20] = -0.034f;
	fLocal_358[20] = -0.0516f;
	fLocal_394[20] = 0.9158f;
	fLocal_430[20] = -0.3969f;
	iLocal_742[20] = 705;
	fLocal_466[20] = 154400f;
	fLocal_502[20] = 0.95f;
	iLocal_1251[20] = joaat("police3");
	Local_1046[21 /*3*/] = { 623.5294f, -468.4917f, 24.5423f };
	fLocal_322[21] = 0.0006f;
	fLocal_358[21] = 0.0061f;
	fLocal_394[21] = 0.9911f;
	fLocal_430[21] = 0.1329f;
	iLocal_742[21] = 706;
	fLocal_466[21] = 172600f;
	fLocal_502[21] = 0.907f;
	iLocal_1251[21] = joaat("police3");
	Local_1046[22 /*3*/] = { 659.6873f, -854.3524f, 14.0619f };
	fLocal_322[22] = -0.0338f;
	fLocal_358[22] = -0.0317f;
	fLocal_394[22] = 0.7275f;
	fLocal_430[22] = 0.6846f;
	iLocal_742[22] = 707;
	fLocal_466[22] = 187300f;
	fLocal_502[22] = 0.99f;
	iLocal_1251[22] = joaat("police3");
	Local_1046[24 /*3*/] = { 658.1793f, -1169.973f, 13.8373f };
	fLocal_322[24] = -0.031f;
	fLocal_358[24] = -0.0276f;
	fLocal_394[24] = 0.7661f;
	fLocal_430[24] = 0.6414f;
	iLocal_742[24] = 708;
	fLocal_466[24] = 200000f;
	fLocal_502[24] = 0.9205f;
	iLocal_1251[24] = joaat("police3");
	Local_1046[25 /*3*/] = { -582.8351f, -304.9959f, 34.7214f };
	fLocal_322[25] = -0.0057f;
	fLocal_358[25] = -0.0024f;
	fLocal_394[25] = 0.8591f;
	fLocal_430[25] = 0.5118f;
	iLocal_742[25] = 709;
	fLocal_466[25] = 15615f;
	fLocal_502[25] = 1f;
	iLocal_1251[25] = joaat("police3");
	Local_1046[26 /*3*/] = { -571.1154f, -309.1694f, 34.7754f };
	fLocal_322[26] = -0.002f;
	fLocal_358[26] = -0.0042f;
	fLocal_394[26] = 0.8688f;
	fLocal_430[26] = 0.4952f;
	iLocal_742[26] = 710;
	fLocal_466[26] = 11615f;
	fLocal_502[26] = 1f;
	iLocal_1251[26] = joaat("police3");
	Local_1046[27 /*3*/] = { -623.1417f, -446.3074f, 34.381f };
	fLocal_322[27] = -0.0018f;
	fLocal_358[27] = 0.0103f;
	fLocal_394[27] = -0.0151f;
	fLocal_430[27] = 0.9998f;
	iLocal_742[27] = 711;
	fLocal_466[27] = 16298f;
	fLocal_502[27] = 1f;
	iLocal_1251[27] = joaat("police3");
	Local_1046[28 /*3*/] = { -522.9142f, -446.6633f, 33.8793f };
	fLocal_322[28] = -0.0099f;
	fLocal_358[28] = -0.0197f;
	fLocal_394[28] = -0.0663f;
	fLocal_430[28] = 0.9976f;
	iLocal_742[28] = 712;
	fLocal_466[28] = 21963f;
	fLocal_502[28] = 1f;
	iLocal_1251[28] = joaat("police3");
	Local_1046[30 /*3*/] = { -37.9929f, -499.319f, 32.5247f };
	fLocal_322[30] = -0.0082f;
	fLocal_358[30] = -0.008f;
	fLocal_394[30] = 0.7138f;
	fLocal_430[30] = 0.7002f;
	iLocal_742[30] = 714;
	fLocal_466[30] = 34719f;
	fLocal_502[30] = 1f;
	iLocal_1251[30] = joaat("tiptruck");
	Local_1046[31 /*3*/] = { -22.294f, -493.0348f, 33.4044f };
	fLocal_322[31] = -0.0053f;
	fLocal_358[31] = -0.005f;
	fLocal_394[31] = 0.7117f;
	fLocal_430[31] = 0.7024f;
	iLocal_742[31] = 715;
	fLocal_466[31] = 34719f;
	fLocal_502[31] = 1f;
	iLocal_1251[31] = joaat("flatbed");
	Local_1046[32 /*3*/] = { -196.7399f, -517.8179f, 27.2766f };
	fLocal_322[32] = 0.005f;
	fLocal_358[32] = -0.018f;
	fLocal_394[32] = -0.7058f;
	fLocal_430[32] = 0.7082f;
	iLocal_742[32] = 696;
	fLocal_466[32] = 32841f;
	fLocal_502[32] = 1f;
	iLocal_1251[32] = joaat("bus");
	if (Global_86789)
	{
		Local_1046[33 /*3*/] = { -651.2066f, -193.8645f, 37.2064f };
		fLocal_322[33] = -0.0118f;
		fLocal_358[33] = 0.0007f;
		fLocal_394[33] = 0.8824f;
		fLocal_430[33] = 0.4703f;
		iLocal_742[33] = 721;
		fLocal_466[33] = 1500f;
		fLocal_502[33] = 1f;
		iLocal_1251[33] = joaat("police3");
	}
	else
	{
		Local_1046[7 /*3*/] = { -154.2711f, -348.7168f, 34.8215f };
		fLocal_322[7] = -0.0296f;
		fLocal_358[7] = -0.056f;
		fLocal_394[7] = 0.9915f;
		fLocal_430[7] = 0.1138f;
		iLocal_742[7] = 61;
		fLocal_466[7] = 30000f;
		fLocal_502[7] = 1f;
		iLocal_1251[7] = joaat("police3");
	}
	if (!Global_86789)
	{
		Local_1046[34 /*3*/] = { -676.7388f, -250.0423f, 36.027f };
		fLocal_322[34] = -0.0004f;
		fLocal_358[34] = 0.0247f;
		fLocal_394[34] = 0.2695f;
		fLocal_430[34] = 0.9627f;
		iLocal_742[34] = 26;
		fLocal_466[34] = 700f;
		fLocal_502[34] = 1f;
		iLocal_1251[34] = joaat("intruder");
	}
}

void func_773(int iParam0)//Position - 0x70BF4
{
	bLocal_126 = iParam0;
}

void func_774(int iParam0)//Position - 0x70C00
{
	switch (iParam0)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2532[0]))
			{
				iLocal_2532[0] = VEHICLE::CREATE_VEHICLE(Local_3369, Local_1570[0 /*3*/] + Local_82, fLocal_1580[0], 1, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2532[1]) && !(bLocal_2475 && iLocal_2379 >= 10))
			{
				iLocal_2532[1] = VEHICLE::CREATE_VEHICLE(Local_3369, Local_1570[1 /*3*/] + Local_82, fLocal_1580[1], 1, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2532[2]))
			{
				iLocal_2532[2] = VEHICLE::CREATE_VEHICLE(Local_3369, Local_1570[2 /*3*/] + Local_82, fLocal_1580[2], 1, 1);
			}
			break;
		
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2532[0]))
			{
				iLocal_2532[0] = VEHICLE::CREATE_VEHICLE(Local_3369, -53.0656f, -551.6052f, 29.5633f, 219.6935f, 1, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2532[1]) && !(bLocal_2475 && iLocal_2379 >= 10))
			{
				iLocal_2532[1] = VEHICLE::CREATE_VEHICLE(Local_3369, -53.0656f, -551.6052f, 29.5633f, 219.6935f, 1, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2532[2]))
			{
				iLocal_2532[2] = VEHICLE::CREATE_VEHICLE(Local_3369, -63.0551f, -541.7521f, 30.8795f, 219.6935f, 1, 1);
			}
			break;
		
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2532[0]))
			{
				iLocal_2532[0] = VEHICLE::CREATE_VEHICLE(Local_3369, Vector(49.2269f, -284.8706f, 1033.864f) + Local_82, 208.3043f, 1, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2532[1]) && !(bLocal_2475 && iLocal_2379 >= 10))
			{
				iLocal_2532[1] = VEHICLE::CREATE_VEHICLE(Local_3369, Vector(49.2269f, -284.8706f, 1035.864f) + Local_82, 208.3043f, 1, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2532[2]))
			{
				iLocal_2532[2] = VEHICLE::CREATE_VEHICLE(Local_3369, Vector(49.2269f, -284.8706f, 1037.864f) + Local_82, 208.3043f, 1, 1);
			}
			break;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[0]))
	{
		VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_2532[0], 2f);
		VEHICLE::_0x1F9FB66F3A3842D2(iLocal_2532[0], 1);
		VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(iLocal_2532[0], 1);
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_2532[0], 0);
		ENTITY::SET_ENTITY_PROOFS(iLocal_2532[0], 0, 0, 0, 1, 0, 1, 0, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[1]))
	{
		VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_2532[1], 2f);
		VEHICLE::_0x1F9FB66F3A3842D2(iLocal_2532[1], 1);
		VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(iLocal_2532[1], 1);
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_2532[1], 0);
		ENTITY::SET_ENTITY_PROOFS(iLocal_2532[1], 0, 0, 0, 1, 0, 1, 0, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[2]))
	{
		VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_2532[2], 2f);
		ENTITY::SET_ENTITY_PROOFS(iLocal_2532[2], 0, 0, 0, 1, 0, 1, 0, 0);
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_2532[2], 0);
		if (Local_3369 == joaat("bati2"))
		{
			AUDIO::_FORCE_VEHICLE_ENGINE_AUDIO(iLocal_2532[2], "CARBONRS");
		}
		GlobalFunc_2223(iLocal_2532[2], -1);
	}
	VEHICLE::SET_VEHICLE_NAME_DEBUG(iLocal_2532[0], "Bike 0");
	if (!bLocal_2475)
	{
		VEHICLE::SET_VEHICLE_NAME_DEBUG(iLocal_2532[1], "Bike 1");
	}
	VEHICLE::SET_VEHICLE_NAME_DEBUG(iLocal_2532[2], "Bike 2");
	func_775();
}

void func_775()//Position - 0x70F56
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_2532[iVar0]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_2532[iVar0], 1, 0);
			}
			VEHICLE::SET_VEHICLE_STRONG(iLocal_2532[iVar0], 1);
			VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(iLocal_2532[iVar0], 0);
			VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_2532[iVar0], 0);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2532[iVar0], 1, 1);
			if (iVar0 != 2)
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2532[iVar0], 0);
			}
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_2532[iVar0], 0);
			VEHICLE::SET_VEHICLE_TYRE_FIXED(iLocal_2532[iVar0], 6);
			VEHICLE::SET_VEHICLE_TYRE_FIXED(iLocal_2532[iVar0], 7);
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_2532[iVar0], 0);
			VEHICLE::SET_VEHICLE_HAS_UNBREAKABLE_LIGHTS(iLocal_2532[iVar0], 1);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_2532[iVar0], iVar0);
		}
		iVar0++;
	}
}


void func_777()//Position - 0x71039
{
	iLocal_2552 = VEHICLE::CREATE_VEHICLE(Local_3369.f_12, 1104.058f, -222.2266f, 55.7692f, 147.2209f, 1, 1);
	func_778(iLocal_2552);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2552))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2552))
		{
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_2552, 128, 3);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_2552, 6, false);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2552, 1);
			ENTITY::SET_ENTITY_PROOFS(iLocal_2552, 0, 1, 1, 0, 0, 0, 0, 0);
			VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_2552, 0);
			PED::SET_PED_INTO_VEHICLE(Local_2659[0], iLocal_2552, -1);
		}
	}
}

void func_778(int iParam0)//Position - 0x710BF
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (iVar0 > 0)
				{
					if (VEHICLE::DOES_EXTRA_EXIST(iParam0, iVar0))
					{
						if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0))
						{
							VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar0, true);
						}
					}
				}
				iVar0++;
			}
		}
	}
}

int func_779()//Position - 0x71112
{
	if ((((((((((((STREAMING::HAS_MODEL_LOADED(Local_3369) && STREAMING::HAS_MODEL_LOADED(Local_3369.f_12)) && STREAMING::HAS_MODEL_LOADED(Local_3369.f_14)) && STREAMING::HAS_MODEL_LOADED(Local_3369.f_15)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_3369.f_85, Local_3369.f_83)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_3369.f_84, Local_3369.f_83)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(717, "JHUBER")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(700, "JHUBER")) && STREAMING::HAS_ANIM_DICT_LOADED(Local_3369.f_60)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_4922)) && GlobalFunc_3038(GlobalFunc_5133(0, 1))) && GlobalFunc_3038(GlobalFunc_5133(0, 2))) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_pistol")))
	{
		return 1;
	}
	return 0;
}

void func_780()//Position - 0x711E1
{
	STREAMING::REQUEST_MODEL(Local_3369);
	STREAMING::REQUEST_MODEL(Local_3369.f_12);
	STREAMING::REQUEST_MODEL(Local_3369.f_14);
	STREAMING::REQUEST_MODEL(Local_3369.f_15);
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_3369.f_85, Local_3369.f_83);
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_3369.f_84, Local_3369.f_83);
	VEHICLE::REQUEST_VEHICLE_RECORDING(717, "JHUBER");
	VEHICLE::REQUEST_VEHICLE_RECORDING(700, "JHUBER");
	VEHICLE::REQUEST_VEHICLE_RECORDING(722, Local_3369.f_83);
	STREAMING::REQUEST_ANIM_DICT(Local_3369.f_60);
	STREAMING::REQUEST_ANIM_DICT(sLocal_4922);
	GlobalFunc_3039(GlobalFunc_5133(0, 1));
	GlobalFunc_3039(GlobalFunc_5133(0, 2));
	WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_pistol"), 31, 0);
	GlobalFunc_7215(0);
}


int func_782()//Position - 0x712A5
{
	if (!iLocal_2406)
	{
		GlobalFunc_601(9, 1);
		GlobalFunc_601(8, 1);
		CAM::_0x9DFE13ECDC1EC196(1, 1);
		INTERIOR::DISABLE_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-164.3822f, -619.0884f, 33.3318f, "dt1_02_carpark"), 1);
		INTERIOR::DISABLE_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-179.314f, -180.2154f, 42.6246f, "bt1_04_carpark"), 1);
		INTERIOR::DISABLE_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-16.2958f, -684.0385f, 33.5083f, "dt1_03_carpark"), 1);
		INTERIOR::DISABLE_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(141.2044f, -717.2167f, 32.1327f, "dt1_05_carpark"), 1);
		AUDIO::SET_AUDIO_FLAG("OnlyAllowScriptTriggerPoliceScanner", 1);
		iLocal_5032 = -1;
		iLocal_5030 = 0;
		if (iLocal_2379 == 9)
		{
			GlobalFunc_4450();
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) != 4)
			{
				func_599(0, 1, 1500, 0, 1);
			}
			iLocal_5032 = 0;
			if (bLocal_2405)
			{
				func_559(4, "STAGE_BIKE_CHASE", 0, 0, 0, 1);
			}
			else
			{
				func_559(3, "STAGE_BIKE_CHASE", 0, 0, 0, 1);
			}
			Global_89962.f_12[0] = iLocal_2463;
			if (!bLocal_70 && CAM::IS_SCREEN_FADED_OUT())
			{
				STREAMING::LOAD_SCENE(-665.6722f, -231.6896f, 36.1003f);
			}
		}
		else if (iLocal_2379 == 10)
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -63.0551f, -541.7521f, 30.8795f, 1, 0, 0, 1);
			if (!bLocal_70)
			{
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(-63.0551f, -541.7521f, 30.8795f, 15f, 0);
				while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
					SYSTEM::WAIT(0);
				}
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
			if (bLocal_2405)
			{
				func_559(5, "STAGE_BIKE_CHASE_START_OF_TUNNEL", 0, 0, 0, 1);
			}
			else
			{
				func_559(4, "STAGE_BIKE_CHASE_START_OF_TUNNEL", 0, 0, 0, 1);
			}
		}
		else if (iLocal_2379 == 11)
		{
			func_824(&iLocal_5031, 1021.416f, -201.1791f, 41.7879f, "V_31_NEWTUN4", 1, 1);
			if (bLocal_2405)
			{
				func_559(6, "STAGE_BIKE_CHASE_END_OF_TUNNEL", 0, 0, 0, 1);
			}
			else
			{
				func_559(5, "STAGE_BIKE_CHASE_END_OF_TUNNEL", 0, 0, 0, 1);
			}
			if (!bLocal_70)
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1021.416f, -201.1791f, 41.7879f, 1, 0, 0, 1);
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(1021.416f, -201.1791f, 41.7879f, 25f, 0);
				while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
					SYSTEM::WAIT(0);
				}
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
		}
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_2602);
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
		STREAMING::SET_PED_POPULATION_BUDGET(1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_3369, 1);
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
		PED::SET_PED_NON_CREATION_AREA(-186.7415f, -506.2248f, 30.7621f, -166.2254f, -476.2848f, 39.7972f);
		PATHFIND::DISABLE_NAVMESH_IN_AREA(-186.7415f, -506.2248f, 30.7621f, -166.2254f, -476.2848f, 39.7972f, 1);
		func_130();
		func_823(Local_3369);
		func_823(joaat("ig_trafficwarden"));
		func_821(Local_3369.f_35);
		func_820(Local_3369.f_83, Local_3369.f_84);
		VEHICLE::REQUEST_VEHICLE_RECORDING(722, Local_3369.f_83);
		func_820(Local_3369.f_83, Local_3369.f_85);
		if (Global_86789)
		{
			func_823(Local_3369.f_14);
			func_823(Local_3369.f_15);
			func_820("JHLateCops", 1);
			func_820("JHLateCops", 2);
			func_820("JHLateCops", 3);
		}
		VEHICLE::REQUEST_VEHICLE_ASSET(Local_3369, 3);
		STREAMING::REQUEST_PTFX_ASSET();
		while ((!func_819() || !VEHICLE::HAS_VEHICLE_ASSET_LOADED(Local_3369)) || !STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			func_109(0);
		}
		if (iLocal_2379 == 10)
		{
			func_774(1);
		}
		else if (iLocal_2379 == 11)
		{
			func_774(2);
		}
		else
		{
			func_774(0);
		}
		WEAPON::SET_PED_AMMO(func_93(1), joaat("weapon_bzgas"), 0);
		WEAPON::REMOVE_WEAPON_FROM_PED(func_93(1), joaat("weapon_bzgas"));
		if (!PED::IS_PED_INJURED(iLocal_2486[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_2532[0]))
		{
			if (!PED::IS_PED_IN_VEHICLE(iLocal_2486[0], iLocal_2532[0], 0))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_2486[0], iLocal_2532[0], -1);
			}
			ENTITY::SET_ENTITY_VISIBLE(iLocal_2486[0], true);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_2486[0], 1);
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_2486[0], 1);
			if (!PED::IS_PED_IN_VEHICLE(iLocal_2486[0], iLocal_2532[0], 0))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_2486[0], iLocal_2532[0], -1);
			}
			PED::SET_PED_PROP_INDEX(iLocal_2486[0], 0, 3, 0, false);
			PED::SET_PED_LOD_MULTIPLIER(iLocal_2486[0], 2f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2486[0], 1);
			EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(96, iLocal_2486[0], -1082130432);
		}
		if (!PED::IS_PED_INJURED(iLocal_2486[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_2532[1]))
		{
			if (!PED::IS_PED_IN_VEHICLE(iLocal_2486[1], iLocal_2532[1], 0))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_2486[1], iLocal_2532[1], -1);
			}
			ENTITY::SET_ENTITY_VISIBLE(iLocal_2486[1], true);
			if (!PED::IS_PED_IN_VEHICLE(iLocal_2486[1], iLocal_2532[1], 0))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_2486[1], iLocal_2532[1], -1);
			}
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_2486[1], 1);
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_2486[1], 1);
			PED::SET_PED_PROP_INDEX(iLocal_2486[1], 0, 4, 0, false);
			func_9(iLocal_2486[1], 1, 0);
			PED::SET_PED_LOD_MULTIPLIER(iLocal_2486[1], 2f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2486[1], 1);
			EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(96, iLocal_2486[1], -1082130432);
		}
		if (!PED::IS_PED_INJURED(func_93(1)) && !ENTITY::IS_ENTITY_DEAD(iLocal_2532[2]))
		{
			ENTITY::SET_ENTITY_VISIBLE(func_93(1), true);
			if (!PED::IS_PED_IN_VEHICLE(func_93(1), iLocal_2532[2], 0))
			{
				PED::SET_PED_INTO_VEHICLE(func_93(1), iLocal_2532[2], -1);
			}
			PED::REMOVE_PED_HELMET(func_93(1), 1);
			PED::SET_PED_HELMET_PROP_INDEX(func_93(1), 6, 1);
			PED::SET_PED_PROP_INDEX(func_93(1), 0, 6, 8, false);
			PED::SET_PED_HELMET(func_93(1), 1);
			PED::SET_PED_LOD_MULTIPLIER(func_93(1), 2f);
			EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(96, func_93(1), -1082130432);
		}
		func_619(func_93(0));
		func_617(func_93(0), 1);
		func_619(func_93(1));
		func_818(func_93(1), 0);
		func_818(iLocal_2486[0], 0);
		func_818(iLocal_2486[1], 0);
		WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_pistol"), 31, 0);
		func_821(Local_3369.f_60);
		func_128(Local_3369.f_60, 0, 0, 0);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[0]))
		{
			func_771();
			MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(func_93(1), 1), 500f, 0, 0, 0, 0, 0);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_2532[2], false);
			func_770(Local_3369.f_83, Local_3369.f_84, 1, 1);
			iLocal_128 = 1;
			iLocal_879 = 998;
			func_771();
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_2532[0], false);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[0], Local_3369.f_84, Local_3369.f_83, 1);
			iLocal_1374[0] = iLocal_2532[1];
			iLocal_778[0] = 3;
			if (iLocal_2379 == 9)
			{
				Global_89962.f_12[1] = 0;
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_2532[1], false);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[1], iLocal_742[0], Local_3369.f_83, 1);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[1], 1000f);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[0], 1000f);
				VEHICLE::_0x796A877E459B99EA(iLocal_2532[0], Local_82);
				VEHICLE::_0x796A877E459B99EA(iLocal_2532[1], Local_82);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_2532[0], 1);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_2532[1], 1);
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_jew_biKe_burnout", iLocal_2532[0], 0f, 0f, 0f, 0f, 0f, 0f, 1.1f, 0, 0, 0);
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_jew_biKe_burnout", iLocal_2532[1], 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
			}
			else if (iLocal_2379 == 10)
			{
				fLocal_1749 = 1f;
				if (!bLocal_2475)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_2532[1], false);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[1], iLocal_742[0], Local_3369.f_83, 1);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[1], 46810.32f);
					VEHICLE::_0x796A877E459B99EA(iLocal_2532[1], Local_82);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_2532[1], 1);
				}
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[0], 46810.32f);
				VEHICLE::_0x796A877E459B99EA(iLocal_2532[0], Local_82);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_2532[0], 1);
			}
			else if (iLocal_2379 == 11)
			{
				fLocal_1749 = 1f;
				if (bLocal_2475)
				{
					fLocal_5045 = 146000f;
				}
				else
				{
					fLocal_5045 = 147000f;
				}
				if (!bLocal_2475)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_2532[1], false);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[1], iLocal_742[0], Local_3369.f_83, 1);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[1], fLocal_5045);
					VEHICLE::_0x796A877E459B99EA(iLocal_2532[1], Local_82);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_2532[1], 1);
				}
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[0], fLocal_5045);
				VEHICLE::_0x796A877E459B99EA(iLocal_2532[0], Local_82);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_2532[0], 1);
				func_768();
			}
			if (iLocal_2379 == 10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[2]))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_2532[2], -63.0551f, -541.7521f, 30.8795f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_ROTATION(iLocal_2532[2], 0f, 0f, 0f, 2, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_2532[2], 219.6241f);
				}
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_2532[2], 16f);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_93(1), 1, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			else if (iLocal_2379 == 11)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[2]))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_2532[2], 979.6f, -139.4f, 34.2f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_2532[2], -130f);
				}
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_2532[2], 20f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			if (iLocal_2379 == 11)
			{
				func_780();
			}
			if (Global_86789 && iLocal_2379 == 9)
			{
				iLocal_2466 = 0;
				while (iLocal_2466 <= 2)
				{
					if (iLocal_2466 != 1)
					{
						iLocal_2538[iLocal_2466] = VEHICLE::CREATE_VEHICLE(Local_3369.f_14, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_2466 + 1, 0f, "JHLateCops"), 0f, 1, 1);
						iLocal_2505[iLocal_2466] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_2538[iLocal_2466], 6, Local_3369.f_15, -1, 1, 1);
						func_661(iLocal_2505[iLocal_2466], 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_2505[iLocal_2466], 39, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2505[iLocal_2466], 1);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_2538[iLocal_2466], iLocal_2466 + 1, "JHLateCops", 1);
						VEHICLE::SET_VEHICLE_SIREN(iLocal_2538[iLocal_2466], 1);
						func_817("JHLateCops", iLocal_2466 + 1);
						VEHICLE::SET_VEHICLE_NAME_DEBUG(iLocal_2538[iLocal_2466], GlobalFunc_5245(iLocal_2466));
					}
					iLocal_2466++;
				}
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_2538[2], 2000f);
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_2538[2], 1.2f);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[2]))
		{
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2532[2], 1);
		}
		AUDIO::DISTANT_COP_CAR_SIRENS(1);
		GlobalFunc_7263(0);
		func_812(func_93(1), 1);
		fLocal_610 = 200f;
		fLocal_624 = 50f;
		iLocal_2421 = 0;
		bLocal_2422 = false;
		iLocal_2427 = 0;
		iLocal_2476 = 0;
		iLocal_4932 = 0;
		iLocal_4910 = 0;
		iLocal_2462 = MISC::GET_GAME_TIMER();
		iLocal_2466 = 0;
		while (iLocal_2466 <= 24)
		{
			iLocal_2431[iLocal_2466] = 0;
			iLocal_2466++;
		}
		iLocal_2426 = 0;
		iLocal_2424 = 1;
		VEHICLE::SET_RANDOM_TRAINS(0);
		PATHFIND::SET_ROADS_IN_AREA(-891.3078f, -707.2606f, -17.5355f, 395.0734f, -125.4589f, 127.5168f, 0, 1);
		PATHFIND::SET_ROADS_IN_AREA(-322.6849f, -509.2203f, 21.5231f, 112.3121f, -484.9729f, 38.3947f, 1, 1);
		func_111();
		if (iLocal_2379 == 9)
		{
			if (Local_3369 == joaat("sanchez"))
			{
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_JSH_2A_01", 0f);
			}
			else
			{
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_JSH_2A_02", 0f);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1513))
			{
				iLocal_1513 = PED::CREATE_PED(26, joaat("ig_trafficwarden"), -630.91f, -240.94f, 37.2314f, 132.8672f, 1, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1513))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_1513))
				{
					AUDIO::STOP_PED_SPEAKING(iLocal_1513, 1);
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1513, "missheist_jewel", "cop_on_floor", 3))
					{
						TASK::TASK_PLAY_ANIM(iLocal_1513, "missheist_jewel", "cop_on_floor", 1000f, -8f, -1, 262145, 0, 0, 0, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_1513, 0, 0);
					}
					PED::SET_PED_PROP_INDEX(iLocal_1513, 0, 0, 0, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1513, 1);
					func_811(joaat("ig_trafficwarden"));
					STREAMING::REMOVE_ANIM_DICT(Local_3369.f_35);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_1513, 1862763509);
				}
			}
			func_604("JH_BIKESGO", 1, 0, 1, 7, 0, 0);
			if (func_117())
			{
				func_656("JH_LEFTE", 0, 0, 1);
			}
			else if (func_116())
			{
				func_656("JH_LEFTT", 0, 0, 1);
			}
			else if (func_115())
			{
				func_656("JH_LEFTK", 0, 0, 1);
			}
			func_656(Local_3369.f_223, 1, 0, 1);
			if (Global_86789)
			{
				if (func_114())
				{
					func_656("JH_GET_COPCP", 0, 0, 1);
				}
				else if (func_113())
				{
					func_656("JH_GET_COPCR", 0, 0, 1);
				}
				else if (func_112())
				{
					func_656("JH_GET_COPCN", 0, 0, 1);
				}
			}
			AUDIO::START_AUDIO_SCENE("JSH_2B_CHASE_START");
		}
		GlobalFunc_504(iLocal_2532[2], 815);
		func_108(800, 0, 0);
		iLocal_2467 = 0;
		iLocal_2406 = 1;
		iLocal_2407 = 0;
		GlobalFunc_9019(&Local_2659, 1);
		iLocal_2408 = 0;
		iLocal_2481 = 0;
		iLocal_2482 = 0;
		iLocal_2483 = 0;
		iLocal_2478 = 0;
		iLocal_2477 = 0;
		iLocal_5040 = 0;
		iLocal_1503 = 0;
		if (iLocal_2379 == 10)
		{
			PLAYER::SPECIAL_ABILITY_CHARGE_ABSOLUTE(PLAYER::PLAYER_ID(), 25, 1);
			iLocal_2467 = 4;
			iLocal_2482 = 1;
			iLocal_2478 = 1;
		}
		func_674();
		MISC::SET_INSTANCE_PRIORITY_HINT(2);
		ENTITY::CREATE_FORCED_OBJECT(-63f, -541f, 32f, 15f, joaat("prop_barrier_work06b"), 1);
		ENTITY::CREATE_FORCED_OBJECT(-63f, -541f, 32f, 15f, joaat("prop_barrier_work06a"), 1);
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_2532[2], "JSH_2B_PLAYER_BIKE", 0);
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_2532[0], "JSH_2B_BUDDY_BIKES", 0);
		if (iLocal_2379 == 9 || bLocal_2475 == 0)
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_2532[1], "JSH_2B_BUDDY_BIKES", 0);
		}
		SYSTEM::SETTIMERA(0);
		SYSTEM::SETTIMERB(0);
		iLocal_5046 = MISC::GET_GAME_TIMER();
		RECORDING::_0x293220DA1B46CEBC(0f, 10f, 4);
	}
	else
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2486[0]))
		{
			PED::SET_PED_RESET_FLAG(iLocal_2486[0], 236, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2486[1]))
		{
			PED::SET_PED_RESET_FLAG(iLocal_2486[1], 236, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1374[3]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1374[3]))
			{
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_1374[3], 14, 14);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1290[5]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1290[5]))
			{
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_1290[5], 28, 28);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_1513))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1513, PLAYER::PLAYER_PED_ID(), 1) || GlobalFunc_156(iLocal_1513, PLAYER::PLAYER_PED_ID(), 1) > 60f)
			{
				PED::APPLY_DAMAGE_TO_PED(iLocal_1513, 100, 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_1513);
				func_823(joaat("ig_trafficwarden"));
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_2659[0]));
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_1513))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_1513);
			func_823(joaat("ig_trafficwarden"));
		}
		GlobalFunc_2216(uLocal_2615[0], iLocal_2532[0], 195f, 0.85f, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2532[1]))
		{
			GlobalFunc_2216(uLocal_2615[1], iLocal_2532[1], 195f, 0.85f, 0);
		}
		if (iLocal_2419 == 0)
		{
			if (AUDIO::PREPARE_ALARM("JEWEL_STORE_HEIST_ALARMS"))
			{
				AUDIO::START_ALARM("JEWEL_STORE_HEIST_ALARMS", 0);
				iLocal_2419 = 1;
			}
		}
		func_809();
		if (iLocal_5040 == 0)
		{
		}
		if (iLocal_2478 == 0)
		{
			if (bLocal_2405)
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("JH2A_ONTO_BIKE_MA"))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("JH2A_ONTO_BIKE_MA");
					iLocal_2478 = 1;
				}
			}
			else if (AUDIO::PREPARE_MUSIC_EVENT("JH2B_ONTO_BIKE_MA"))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("JH2B_ONTO_BIKE_MA");
				iLocal_2478 = 1;
			}
		}
		if (iLocal_2467 >= 5)
		{
			HUD::SET_RADAR_ZOOM(1100);
			HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_fakeTunnels"), -150f, -500f, 0, 0);
		}
		PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
		if (Global_86790 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1374[5]))
			{
				Global_86790 = 1;
			}
		}
		func_807();
		if (iLocal_2379 == 9)
		{
			func_806();
		}
		switch (iLocal_2467)
		{
			case 0:
				if (iLocal_5031 != 0)
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_5031);
				}
				SYSTEM::SETTIMERA(0);
				if (GlobalFunc_8315() != 1)
				{
					GlobalFunc_9019(&Local_2659, 1);
					func_167(&Local_2659, 1, 0, 0);
					func_619(func_93(0));
					func_619(func_93(1));
				}
				WEAPON::GIVE_WEAPON_TO_PED(func_93(1), joaat("weapon_microsmg"), 200, 1, 1);
				if (!func_805(func_93(0), 713668775))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_93(0), Local_1668, 1f, -1, 0.25f, 0, 40000f);
				}
				ENTITY::SET_ENTITY_INVINCIBLE(func_93(0), 0);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(func_93(0), 1);
				if (ENTITY::DOES_ENTITY_EXIST(Local_2659[0]))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_2659[0], 1), 50f, 50f, 50f, false, 1, 0))
					{
						PED::REMOVE_PED_ELEGANTLY(&(Local_2659[0]));
					}
				}
				fLocal_1749 = 1f;
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_2532[0], fLocal_1749);
				func_743(iLocal_2532[0], fLocal_1749);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2538[0], 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2538[0]))
					{
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_2538[0], fLocal_1749);
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2538[1], 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2538[1]))
					{
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_2538[1], fLocal_1749);
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2538[2], 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2538[2]))
					{
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_2538[2], fLocal_1749);
					}
				}
				SYSTEM::SETTIMERA(0);
				CAM::DESTROY_CAM(uLocal_3367, 0);
				iLocal_2467 = 3;
				func_768();
				func_743(iLocal_2532[0], fLocal_1749);
				break;
			
			case 3:
			case 4:
			case 5:
			case 6:
				func_802();
				func_795();
				if (iLocal_2467 < 5)
				{
					func_794();
				}
				func_791();
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -172.8348f, -483.799f, 33.22941f, -176.1481f, -494.0209f, 37.72083f, 4f, 0, 1, 0))
				{
					iLocal_2481 = 1;
				}
				if (iLocal_2481 == 1 && iLocal_2478 == 1)
				{
					if (iLocal_2467 == 3)
					{
						if (bLocal_2405)
						{
							if (AUDIO::PREPARE_MUSIC_EVENT("JH2A_JUMP_OS"))
							{
								AUDIO::TRIGGER_MUSIC_EVENT("JH2A_JUMP_OS");
								iLocal_2467 = 4;
							}
						}
						else if (AUDIO::PREPARE_MUSIC_EVENT("JH2B_JUMP_OS"))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("JH2B_JUMP_OS");
							iLocal_2467 = 4;
						}
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -58.07921f, -540.8043f, 30.77474f, -68.36142f, -541.7203f, 36.43761f, 8f, 0, 1, 0) || iLocal_2379 == 10)
				{
					iLocal_2482 = 1;
				}
				if (iLocal_2482 == 1)
				{
					if (iLocal_2467 == 4)
					{
						if (bLocal_2405)
						{
							if (AUDIO::PREPARE_MUSIC_EVENT("JH2A_ENTER_TUNNEL_MA"))
							{
								AUDIO::TRIGGER_MUSIC_EVENT("JH2A_ENTER_TUNNEL_MA");
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_2B_CHASE_START"))
								{
									AUDIO::STOP_AUDIO_SCENE("JSH_2B_CHASE_START");
								}
								RECORDING::_0x293220DA1B46CEBC(5f, 4f, 4);
								iLocal_5040 = 1;
								if (iLocal_5031 != 0)
								{
									INTERIOR::UNPIN_INTERIOR(iLocal_5031);
								}
								if (bLocal_2405)
								{
									func_559(5, "STAGE_BIKE_CHASE_START_OF_TUNNEL", 0, 0, 0, 1);
								}
								else
								{
									func_559(4, "STAGE_BIKE_CHASE_START_OF_TUNNEL", 0, 0, 0, 1);
								}
								Global_89962.f_12[0] = iLocal_2463;
								GlobalFunc_4948(&uLocal_2902, 0, 0);
								iLocal_2467 = 5;
							}
						}
						else if (AUDIO::PREPARE_MUSIC_EVENT("JH2B_ENTER_TUNNEL_MA"))
						{
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_2B_CHASE_START"))
							{
								AUDIO::STOP_AUDIO_SCENE("JSH_2B_CHASE_START");
							}
							RECORDING::_0x293220DA1B46CEBC(5f, 4f, 4);
							AUDIO::SET_AUDIO_FLAG("OnlyAllowScriptTriggerPoliceScanner", 1);
							if (iLocal_5031 != 0)
							{
								INTERIOR::UNPIN_INTERIOR(iLocal_5031);
							}
							iLocal_5040 = 1;
							AUDIO::TRIGGER_MUSIC_EVENT("JH2B_ENTER_TUNNEL_MA");
							if (bLocal_2405)
							{
								func_559(5, "STAGE_BIKE_CHASE_START_OF_TUNNEL", 0, 0, 0, 1);
							}
							else
							{
								func_559(4, "STAGE_BIKE_CHASE_START_OF_TUNNEL", 0, 0, 0, 1);
							}
							Global_89962.f_12[0] = iLocal_2463;
							GlobalFunc_4948(&uLocal_2902, 0, 0);
							iLocal_2467 = 5;
						}
					}
				}
				if (iLocal_1503 == 0 || iLocal_1503 == 10)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[1]))
					{
						func_789(iLocal_2532[2], iLocal_2532[1], &fLocal_5041);
					}
					else
					{
						func_789(iLocal_2532[2], iLocal_2532[0], &fLocal_5041);
					}
					fLocal_5042 = 0.01f;
					if (fLocal_1749 < 1f && fLocal_1459 > fLocal_1749)
					{
						fLocal_5042 = (fLocal_5042 * 2f);
					}
					GlobalFunc_2514(&fLocal_1749, fLocal_5041, fLocal_5042);
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_2532[0], fLocal_1749);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2538[1], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2538[1]))
						{
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_2532[1], fLocal_1749);
						}
					}
					if ((MISC::GET_GAME_TIMER() - iLocal_5046) < 5000)
					{
						func_768();
					}
					func_743(iLocal_2532[0], fLocal_1749);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2538[0], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2538[0]))
						{
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_2538[0], fLocal_1749);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2538[1], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2538[1]))
						{
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_2538[1], fLocal_1749);
						}
					}
				}
				if (GlobalFunc_697(GlobalFunc_5133(0, 0)) == 0 && bLocal_2475)
				{
					switch (iLocal_1503)
					{
						case 0:
							STREAMING::REQUEST_ANIM_DICT("missheist_jewel@lost");
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_2532[0], -14.76301f, -805.2279f, 15.39101f, -24.69407f, -782.2549f, 22.46775f, 21.75f, 0, 1, 0) && STREAMING::HAS_ANIM_DICT_LOADED("missHeist_jewel@lost"))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2532[0]))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[0]);
								}
								iLocal_5043 = 0;
								iLocal_1503++;
							}
							break;
						
						case 1:
							if (GlobalFunc_530(iLocal_2532[0], 15f, 1, 1056964608, 0, 1))
							{
								TASK::TASK_VEHICLE_TEMP_ACTION(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2532[0], -1), iLocal_2532[0], 6, -1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2532[0], -1), 1);
								iLocal_5043 = 1;
							}
							if (iLocal_5043)
							{
								RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
								func_610();
								GlobalFunc_4935();
								iLocal_1503++;
							}
							break;
						
						case 2:
							if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_WHICH_KD", 9, 0, 0, 0))
								{
									iLocal_5043 = 0;
									fLocal_1751 = 0.1f;
									iLocal_1504 = MISC::GET_GAME_TIMER();
									if (Local_3369 == joaat("bati2"))
									{
										TASK::TASK_PLAY_ANIM(iLocal_2486[0], "missheist_jewel@lost", "lost_idle_sports_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
									}
									else
									{
										TASK::TASK_PLAY_ANIM(iLocal_2486[0], "missheist_jewel@lost", "lost_idle_dirt_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
									}
									TASK::TASK_LOOK_AT_ENTITY(iLocal_2486[0], PLAYER::PLAYER_PED_ID(), 15000, 2048, 2);
									bLocal_5047 = false;
									iLocal_1503++;
								}
							}
							break;
						
						case 3:
							if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_2486[0], 1) > 20f)
								{
									if ((MISC::GET_GAME_TIMER() - iLocal_1504) > 6000)
									{
										if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_WHERE_KD", 9, 0, 0, 0))
										{
											bLocal_5047 = true;
											iLocal_1504 = MISC::GET_GAME_TIMER();
										}
									}
								}
								else if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_2486[0], 1) < 16f)
								{
									if (bLocal_5047)
									{
										if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_FRANK_KD", 9, 0, 0, 0))
										{
											iLocal_1503++;
										}
									}
									else
									{
										iLocal_1503++;
									}
								}
							}
							break;
						
						case 4:
							if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_WHICH_KD", 9, 0, 0, 0))
								{
									TASK::TASK_LOOK_AT_COORD(iLocal_2486[0], -17.8649f, -809.1964f, 18.7799f, 4000, 2048, 2);
									iLocal_1503 = 5;
								}
							}
							break;
						
						case 5:
							if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_LOST_KD", 9, 0, 0, 0))
								{
									TASK::TASK_LOOK_AT_COORD(iLocal_2486[0], -17.8649f, -809.1964f, 18.7799f, 4000, 2048, 2);
									iLocal_1503++;
								}
							}
							break;
						
						case 6:
							if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_UMM_KD", 9, 0, 0, 0))
								{
									TASK::TASK_LOOK_AT_COORD(iLocal_2486[0], -7.7608f, -805.0465f, 18.8407f, 4000, 2048, 2);
									iLocal_1503++;
								}
							}
							break;
						
						case 7:
							if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_THIS_KD", 9, 0, 0, 0))
								{
									TASK::TASK_LOOK_AT_COORD(iLocal_2486[0], -17.8649f, -809.1964f, 18.7799f, 4000, 2048, 2);
									iLocal_1503++;
								}
							}
							break;
						
						case 8:
							if ((MISC::GET_GAME_TIMER() - iLocal_1504) > 5000)
							{
								if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_SETOFF_KD", 9, 0, 0, 0))
									{
										RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[0], Local_3369.f_84, Local_3369.f_83, 1);
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_2532[0], 0.1f);
										VEHICLE::SET_PLAYBACK_TO_USE_AI_TRY_TO_REVERT_BACK_LATER(iLocal_2532[0], 2000, 786469, 0);
										fLocal_5044 = 0f;
										iLocal_1503 = 9;
									}
								}
							}
							break;
						
						case 9:
							if (fLocal_5044 < fLocal_1459)
							{
								fLocal_5044 = (fLocal_5044 + (0.2f * SYSTEM::TIMESTEP()));
							}
							else
							{
								iLocal_1503 = 10;
							}
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_2532[0], fLocal_5044);
							break;
						}
				}
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 77.9623f, -758.2039f, 16.7359f, 5f, 5f, 5f, false, 1, 0))
				{
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
				}
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 124.5188f, -615.0482f, 16.7761f, 5f, 5f, 5f, false, 1, 0) && iLocal_2483 == 0)
				{
					if (bLocal_2405)
					{
						AUDIO::TRIGGER_MUSIC_EVENT("JH2A_TUNNEL_MID");
					}
					else
					{
						AUDIO::TRIGGER_MUSIC_EVENT("JH2B_TUNNEL_MID");
					}
					RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
					func_780();
					iLocal_2483 = 1;
				}
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -65.733f, -539.4092f, 30.7915f, 25f, 25f, 30f, false, 1, 0) && iLocal_2477 == 0)
				{
					VEHICLE::SET_VEHICLE_LIGHTS(iLocal_2532[0], 3);
					if (!bLocal_2475)
					{
						VEHICLE::SET_VEHICLE_LIGHTS(iLocal_2532[1], 2);
					}
					if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_LIGHTSON", 9, 0, 0, 0))
					{
						RECORDING::_0x293220DA1B46CEBC(10f, 5f, 4);
						iLocal_2477 = 1;
					}
				}
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1022.06f, -207.22f, 43f, 65f, 65f, 40f, false, 1, 0) && iLocal_2408 == 0)
				{
					GlobalFunc_7215(0);
					RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
					AUDIO::DISTANT_COP_CAR_SIRENS(1);
					CLOCK::SET_CLOCK_TIME(19, 20, 0);
					iLocal_2408 = 1;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_2659[0]))
				{
					if (!func_278(&(Local_2659[0]), 0, 1091.118f, -260.9309f, 68.3108f, 129.7877f, 1, 0, 0))
					{
					}
					else
					{
						if (bLocal_2405)
						{
							func_432(func_93(0), 12, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						}
						else
						{
							func_432(func_93(0), 12, 31, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						}
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2659[0], 1);
					}
				}
				if (!iLocal_4910)
				{
					if (func_787())
					{
						func_786();
						iLocal_4910 = 1;
					}
				}
				if (func_785())
				{
					if (bLocal_2405)
					{
						AUDIO::TRIGGER_MUSIC_EVENT("JH2A_EXIT_TUNNEL_MA");
					}
					else
					{
						AUDIO::TRIGGER_MUSIC_EVENT("JH2B_EXIT_TUNNEL_MA");
					}
					if (bLocal_2405)
					{
						func_559(6, "STAGE_BIKE_CHASE_END_OF_TUNNEL", 0, 0, 0, 1);
					}
					else
					{
						func_559(5, "STAGE_BIKE_CHASE_END_OF_TUNNEL", 0, 0, 0, 1);
					}
					Global_89962.f_12[0] = iLocal_2463;
					func_777();
					AUDIO::STOP_AUDIO_SCENE("JSH_2B_CHASE_ENTER_TUNNELS");
					AUDIO::SET_AUDIO_FLAG("OnlyAllowScriptTriggerPoliceScanner", 1);
					fLocal_1749 = func_662(iLocal_2552, -7f);
					if (fLocal_1749 <= 0.5f)
					{
						fLocal_1749 = 0.5f;
					}
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_2532[0], fLocal_1749);
					func_743(iLocal_2532[0], fLocal_1749);
					iLocal_2467 = 7;
				}
				break;
		}
		if (iLocal_2467 >= 7)
		{
			iLocal_2466 = 0;
			while (iLocal_2466 <= 2)
			{
				if (!(bLocal_2475 && iLocal_2466 == 1))
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_2615[iLocal_2466]))
					{
						HUD::REMOVE_BLIP(&(uLocal_2615[iLocal_2466]));
					}
				}
				iLocal_2466++;
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_2620))
			{
				HUD::REMOVE_BLIP(&uLocal_2620);
			}
			PLAYER::SET_POLICE_RADAR_BLIPS(1);
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
			STREAMING::SET_PED_POPULATION_BUDGET(3);
			func_783(0);
			func_783(5);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_3369, 0);
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2591))
			{
				VEHICLE::DELETE_MISSION_TRAIN(&iLocal_2591);
			}
			CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
			GlobalFunc_2214();
			CAM::STOP_GAMEPLAY_HINT(0);
			WEAPON::REMOVE_WEAPON_ASSET(joaat("weapon_pistol"));
			iLocal_2406 = 0;
			return 1;
		}
	}
	return 0;
}

void func_783(int iParam0)//Position - 0x72ED3
{
	if (func_784(iParam0))
	{
		if (!AUDIO::HAS_SOUND_FINISHED(Local_2991[iParam0 /*3*/]))
		{
			AUDIO::STOP_SOUND(Local_2991[iParam0 /*3*/]);
		}
		AUDIO::RELEASE_SOUND_ID(Local_2991[iParam0 /*3*/]);
		Local_2991[iParam0 /*3*/].f_1 = 0;
		Local_2991[iParam0 /*3*/].f_2 = 0;
	}
}

int func_784(int iParam0)//Position - 0x72F1D
{
	if (Local_2991[iParam0 /*3*/].f_2)
	{
		return 1;
	}
	return 0;
}

int func_785()//Position - 0x72F36
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 1038f, -226f, 40f };
	Var3 = { 1008f, -231.5f, 55f };
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && ENTITY::DOES_ENTITY_EXIST(iLocal_2532[2]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iLocal_2532[2]))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2532[2], 0))
			{
				if (iLocal_4923 == 0)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var3, 12.5f, 0, 1, 0))
					{
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							iLocal_4923 = 1;
						}
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var3, 5f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_786()//Position - 0x73012
{
	if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(722, "JHUBER"))
	{
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2532[2]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[2]))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2532[2]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[2]);
			}
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(iLocal_2532[2], 722, "JHUBER", fLocal_4903, 262144);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[2], fLocal_4902);
			VEHICLE::SET_PLAYBACK_SPEED(iLocal_2532[2], fLocal_4904);
			VEHICLE::SET_PLAYBACK_TO_USE_AI_TRY_TO_REVERT_BACK_LATER(iLocal_2532[2], iLocal_4905, 262144, 0);
		}
	}
}

int func_787()//Position - 0x730AB
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 1007.6f, -198.4f, 35f };
	Var3 = { 1033.6f, -192.9f, 50f };
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && ENTITY::DOES_ENTITY_EXIST(iLocal_2532[2]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iLocal_2532[2]))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2532[2], 0))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var3, 5f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}


void func_789(var uParam0, int iParam1, var uParam2)//Position - 0x73160
{
	Local_85 = { 0f, 0f, 0f };
	Local_85.f_1 = -20f;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2532[0], 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2532[0]))
		{
			fLocal_1752 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_2532[0]);
		}
	}
	if (fLocal_1752 > IntToFloat(Local_3369.f_118))
	{
		if (bLocal_2475)
		{
			Local_85.f_1 = 45f;
		}
		else
		{
			Local_85.f_1 = 35f;
		}
	}
	else if (fLocal_1752 > IntToFloat(Local_3369.f_102))
	{
		if (bLocal_2475)
		{
			Local_85.f_1 = 34.5f;
		}
		else
		{
			Local_85.f_1 = 24.5f;
		}
	}
	else if (fLocal_1752 > IntToFloat(Local_3369.f_101))
	{
		Local_85.f_1 = 26.5f;
	}
	else if (fLocal_1752 > IntToFloat(Local_3369.f_100))
	{
		Local_85.f_1 = 22f;
	}
	else if (fLocal_1752 > IntToFloat(Local_3369.f_99))
	{
		Local_85.f_1 = 25f;
	}
	else if (fLocal_1752 > IntToFloat(Local_3369.f_98))
	{
		Local_85.f_1 = 22f;
	}
	else if (fLocal_1752 > IntToFloat(Local_3369.f_97))
	{
		Local_85.f_1 = 22.5f;
	}
	else if (fLocal_1752 > IntToFloat(Local_3369.f_96))
	{
		Local_85.f_1 = 20f;
	}
	else if (fLocal_1752 > IntToFloat(Local_3369.f_95))
	{
		Local_85.f_1 = 24.5f;
	}
	else if (fLocal_1752 > IntToFloat(Local_3369.f_94))
	{
		Local_85.f_1 = 20f;
	}
	else if (fLocal_1752 > IntToFloat(Local_3369.f_93))
	{
		Local_85.f_1 = 21f;
	}
	else if (fLocal_1752 > IntToFloat(Local_3369.f_92))
	{
		Local_85.f_1 = 25f;
	}
	else if (fLocal_1752 > IntToFloat(Local_3369.f_91))
	{
		Local_85.f_1 = 25f;
	}
	else if (fLocal_1752 > IntToFloat(Local_3369.f_90))
	{
		Local_85.f_1 = 25f;
	}
	else if (fLocal_1752 > IntToFloat(Local_3369.f_89))
	{
		Local_85.f_1 = 30f;
	}
	else if (fLocal_1752 > IntToFloat(Local_3369.f_88))
	{
		Local_85.f_1 = 30f;
	}
	else if (fLocal_1752 > IntToFloat(Local_3369.f_87))
	{
		Local_85.f_1 = 22f;
	}
	else
	{
		Local_85.f_1 = 20f;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_77))
	{
		func_790(uParam2, &uParam0, iParam1, 5f, 10f, 50f, 100f, 30f, 1f, 0.4f, 0.4f, 2f, 1, (fLocal_3651 * 3f), 30f, 1);
	}
	else if (((GlobalFunc_697(GlobalFunc_5133(0, 0)) == 0 && bLocal_2475) && fLocal_1752 > 55000f) && fLocal_1752 < 60000f)
	{
		func_790(uParam2, &uParam0, iParam1, 5f, 10f, 50f, 100f, 30f, 1f, 0.65f, 0.5f, 2f, 1, (fLocal_3651 * 3f), 30f, 1);
	}
	else
	{
		func_790(uParam2, &uParam0, iParam1, (Local_85.f_1 * 0.85f), Local_85.f_1, 50f, 100f, 30f, 1f, 0.75f, 0.5f, 2f, 1, fLocal_3651, (fLocal_3651 * 2f), 1);
	}
	if (iLocal_2431[4])
	{
		VEHICLE::MODIFY_VEHICLE_TOP_SPEED(iLocal_2532[2], (fLocal_3651 * -1f));
	}
}

void func_790(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, float fParam13, float fParam14, int iParam15)//Position - 0x7347B
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
				*uParam0 = (fParam9 - ((fParam9 - fParam10) * fVar10));
			}
			else
			{
				*uParam0 = fParam9;
			}
		}
		else if (fVar9 > fParam4)
		{
			fVar10 = ((fVar9 - fParam4) / (fParam5 - fParam4));
			*uParam0 = (1f - (fVar12 * fVar10));
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
				*uParam0 = (1f + ((fVar10 * fVar11) * 2f));
			}
			else
			{
				*uParam0 = (1f + (fVar10 * fVar11));
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
			*uParam0 = (2f + fVar10);
		}
		else if (ENTITY::GET_ENTITY_SPEED(*uParam1) < 5f && fVar14 > 0f)
		{
			*uParam0 = (0.6f + fVar10);
		}
		else
		{
			*uParam0 = (1f + fVar10);
		}
	}
	*uParam0 = (*uParam0 * fParam8);
	if (bParam12)
	{
		fVar15 = fParam13;
		if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()) && iParam15)
		{
			fParam14 = (fParam14 * 2f);
			fParam13 = (fParam13 * 2f);
		}
		if (*uParam0 > 1f)
		{
			fVar15 = (fParam13 + ((fParam14 - fParam13) * (*uParam0 - 1f)));
		}
		VEHICLE::MODIFY_VEHICLE_TOP_SPEED(*uParam1, -fVar15);
	}
}

void func_791()//Position - 0x7365F
{
	if (!PED::IS_PED_IN_VEHICLE(func_93(1), iLocal_2532[2], 0))
	{
		if (!HUD::DOES_BLIP_EXIST(uLocal_2620))
		{
			uLocal_2620 = GlobalFunc_6783(iLocal_2532[2], 0, 0);
			func_792("G_BIKE", 0, 1, 1, 7500);
		}
		func_737(&(uLocal_2615[0]));
		func_737(&(uLocal_2615[1]));
	}
	else
	{
		func_737(&uLocal_2620);
		if (!HUD::DOES_BLIP_EXIST(uLocal_2615[0]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2532[0]))
			{
				uLocal_2615[0] = GlobalFunc_6783(iLocal_2532[0], 0, 0);
			}
		}
		if (!HUD::DOES_BLIP_EXIST(uLocal_2615[1]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2532[1]))
			{
				uLocal_2615[1] = GlobalFunc_6783(iLocal_2532[1], 0, 0);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2532[1]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[1]))
		{
			if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2532[1]))
			{
				func_737(&(uLocal_2615[1]));
			}
		}
	}
	else
	{
		func_737(&(uLocal_2615[1]));
	}
}

void func_792(char* sParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x73761
{
	bool bVar0;
	bool bVar1;
	
	if (iLocal_2924 != MISC::GET_HASH_KEY(sParam0))
	{
		bVar0 = false;
	}
	else
	{
		bVar0 = true;
	}
	bVar1 = true;
	if (bParam3)
	{
		bVar1 = false;
	}
	if (bParam1)
	{
		func_611(1, 1, 1);
		func_610();
	}
	else if (bParam2)
	{
		if (!bVar0)
		{
			func_611(bParam2, bParam2, bVar1);
		}
	}
	if (((bParam1 || (bParam2 && !bVar0)) || !bLocal_2920) || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		GlobalFunc_164(sParam0, iParam4, 1);
		func_793(sParam0);
		bLocal_2920 = true;
	}
}

void func_793(char* sParam0)//Position - 0x737EE
{
	iLocal_2924 = MISC::GET_HASH_KEY(sParam0);
}

void func_794()//Position - 0x737FF
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[0]))
	{
		GlobalFunc_10692(&uLocal_2902, iLocal_2532[0], "H_HELPFOCUS", 0, 1, 0, 1);
	}
}

void func_795()//Position - 0x7382B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	
	if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2532[0]))
	{
		fLocal_1752 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_2532[0]);
	}
	if (Global_86788 == 0)
	{
		if (fLocal_1752 > 23480.4f)
		{
			Global_86788 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_4933))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_4933))
		{
			if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iLocal_4933)))
			{
				AUDIO::_SOUND_VEHICLE_HORN_THIS_FRAME(iLocal_4933);
			}
		}
	}
	else
	{
		iLocal_4933 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 30f, 0, 0);
	}
	if (!iLocal_2416)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_2532[2], Local_1677, 6f, 6f, 6f, false, 0, 0))
		{
			iLocal_2466 = 0;
			while (iLocal_2466 <= 3)
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_2621[iLocal_2466]))
				{
					HUD::REMOVE_BLIP(&(uLocal_2621[iLocal_2466]));
				}
				iLocal_2538[iLocal_2466] = VEHICLE::CREATE_VEHICLE(Local_3369.f_14, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(Local_3369.f_84, 0f, Local_3369.f_76[iLocal_2466]), 0f, 1, 1);
				iLocal_2505[iLocal_2466] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_2538[iLocal_2466], 6, Local_3369.f_15, -1, 1, 1);
				func_661(iLocal_2505[iLocal_2466], 0);
				iLocal_2512[iLocal_2466] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_2538[iLocal_2466], 6, Local_3369.f_15, 0, 1, 1);
				func_661(iLocal_2512[iLocal_2466], 0);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_2505[iLocal_2466]));
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_2512[iLocal_2466]));
				VEHICLE::SET_VEHICLE_SIREN(iLocal_2538[iLocal_2466], 1);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_2538[iLocal_2466], Local_3369.f_84, Local_3369.f_76[iLocal_2466], 1);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_2538[iLocal_2466], 0f);
				fLocal_2545[iLocal_2466] = 0.5f;
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_2538[iLocal_2466], fLocal_2545[iLocal_2466]);
				iLocal_2466++;
			}
			iLocal_2416 = 1;
		}
	}
	iLocal_2466 = 0;
	while (iLocal_2466 <= 34)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1374[iLocal_2466]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1374[iLocal_2466], 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(iLocal_1374[iLocal_2466]) == joaat("ambulance"))
				{
					if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_1374[iLocal_2466]))
					{
						VEHICLE::SET_VEHICLE_SIREN(iLocal_1374[iLocal_2466], 1);
						AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_1374[iLocal_2466], 1);
					}
				}
				if (ENTITY::IS_ENTITY_UPSIDEDOWN(iLocal_1374[iLocal_2466]))
				{
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
					iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
					if (GlobalFunc_540(ENTITY::GET_ENTITY_MODEL(iLocal_1374[iLocal_2466])))
					{
						if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_1374[iLocal_2466], iVar0))
						{
							VEHICLE::SET_VEHICLE_DOOR_BROKEN(iLocal_1374[iLocal_2466], iVar0, 0);
							VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_1374[iLocal_2466], iVar1, 0, 0);
						}
					}
				}
				if (GlobalFunc_540(ENTITY::GET_ENTITY_MODEL(iLocal_1374[iLocal_2466])))
				{
					if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_1374[iLocal_2466]))
					{
						VEHICLE::SET_VEHICLE_SIREN(iLocal_1374[iLocal_2466], 1);
						AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_1374[iLocal_2466], 1);
					}
					if (((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1374[iLocal_2466]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1374[iLocal_2466]) > 5000f) && ENTITY::GET_ENTITY_SPEED(iLocal_1374[iLocal_2466]) < 1f) && !VEHICLE::IS_VEHICLE_MODEL(iLocal_1374[iLocal_2466], joaat("polmav")))
					{
						if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_1374[iLocal_2466], -1))
						{
							iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1374[iLocal_2466], -1);
							if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !PED::IS_PED_INJURED(iVar2))
							{
								WEAPON::GIVE_WEAPON_TO_PED(iVar2, joaat("weapon_pistol"), -1, 1, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(iVar2, 1, false);
								TASK::TASK_DRIVE_BY(iVar2, func_93(1), 0, 0f, 0f, 0f, 150f, 100, 1, -957453492);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(iVar2, ENTITY::GET_ENTITY_COORDS(iVar2, 1), 5.5f, 0, 0);
								PED::SET_PED_KEEP_TASK(iVar2, 1);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar2);
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_1374[iLocal_2466], 0) && iLocal_1465[iLocal_2466] == 0)
					{
						iVar4 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1374[iLocal_2466], 6, joaat("s_m_y_cop_01"), 0, 1, 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar4, 1);
						WEAPON::GIVE_WEAPON_TO_PED(iVar4, joaat("weapon_pistol"), -1, 1, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(iVar4, 1, false);
						iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_2532[iVar3]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2532[iVar3], -1)))
							{
								TASK::TASK_DRIVE_BY(iVar4, VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2532[iVar3], -1), 0, 0f, 0f, 0f, 700f, 100, 1, -957453492);
							}
						}
						else
						{
							TASK::TASK_DRIVE_BY(iVar4, func_93(1), 0, 0f, 0f, 0f, 150f, 100, 1, -957453492);
						}
						PED::SET_PED_KEEP_TASK(iVar4, 1);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar4);
						iLocal_1465[iLocal_2466] = 1;
					}
				}
			}
		}
		iLocal_2466++;
	}
	iLocal_2466 = 0;
	while (iLocal_2466 <= 16)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1356[iLocal_2466]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1356[iLocal_2466], 0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_1356[iLocal_2466], -5.679473f, -524.588f, 34.2944f, 69.3125f, 16.25f, 4f, false, 0, 0))
				{
					if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_1356[iLocal_2466], -1))
					{
						if (PED::CAN_CREATE_RANDOM_PED(0))
						{
							PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_1356[iLocal_2466], 1);
							VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1356[iLocal_2466], 1, 1);
						}
					}
				}
			}
		}
		iLocal_2466++;
	}
	if (!iLocal_2427)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(func_93(1), 1042.129f, -278.9554f, 49.519f, 28f, 24.4f, 13.75f, false, 1, 0))
		{
			iLocal_2520 = PED::CREATE_PED(6, Local_3369.f_15, 1042.129f, -278.9554f, 49.519f, 65.9411f, 1, 1);
			iLocal_2521 = PED::CREATE_PED(6, Local_3369.f_15, 1044.801f, -301.9515f, 48.7054f, 133.1042f, 1, 1);
			iLocal_2522 = PED::CREATE_PED(6, Local_3369.f_15, 1047.872f, -299.8919f, 49.1066f, 7.8463f, 1, 1);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_2520, 1042.129f, -278.9554f, 49.519f, 2f, 0, 0);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_2521, 1044.801f, -301.9515f, 48.7054f, 2f, 0, 0);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_2522, 1047.872f, -299.8919f, 49.1066f, 2f, 0, 0);
			func_661(iLocal_2520, 0);
			func_661(iLocal_2521, 0);
			func_661(iLocal_2522, 0);
			iLocal_2427 = 1;
		}
	}
	if (bLocal_2475)
	{
		STREAMING::REQUEST_MODEL(joaat("prop_cs_heist_bag_02"));
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2532[1]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2532[1], 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_2486[1]))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2532[1]))
					{
						if (fLocal_1752 > 34174f)
						{
							STREAMING::REQUEST_COLLISION_AT_COORD(-125.4693f, -522.0388f, 28.9007f);
						}
						if (fLocal_1752 > 45174f)
						{
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_2486[1], 2);
							if (PED::CAN_KNOCK_PED_OFF_VEHICLE(iLocal_2486[1]))
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Gunman_Bike_Crash", iLocal_2532[1], "JEWEL_HEIST_SOUNDS", 0, 0);
								GlobalFunc_5653(iLocal_2486[1], "JH_FPAA", "NORM", 4);
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1374[0]))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1374[0]);
								}
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2532[1]))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[1]);
								}
								func_9(iLocal_2486[1], 0, 0);
								ENTITY::SET_ENTITY_PROOFS(iLocal_2486[1], 0, 0, 0, 0, 0, 0, 0, 0);
								PED::SET_PED_CAN_RAGDOLL(iLocal_2486[1], 1);
								PED::SET_PED_CAN_BE_DRAGGED_OUT(iLocal_2486[1], 1);
								ENTITY::SET_ENTITY_PROOFS(iLocal_2532[1], 0, 0, 0, 0, 0, 0, 0, 0);
								PED::KNOCK_PED_OFF_VEHICLE(iLocal_2486[1]);
								ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_2486[1], 1, 0f, 3f, 1f, 0f, 0f, 0.3f, 0, 1, 1, 1, 0, 1);
								ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_2532[1], 1, 1f, 0.5f, 0f, 0f, 0.3f, 0f, 0, 1, 1, 1, 0, 1);
								Var5 = { ENTITY::GET_ENTITY_COORDS(iLocal_2486[1], 1) };
								MISC::GET_GROUND_Z_FOR_3D_COORD(Var5, &(Var5.f_2));
								iLocal_77 = OBJECT::CREATE_OBJECT(joaat("prop_cs_heist_bag_02"), Var5, 1, 1, 0);
								uLocal_4931 = GlobalFunc_6799(iLocal_77);
								iLocal_78 = 0;
								Local_79 = { ENTITY::GET_ENTITY_VELOCITY(iLocal_2532[1]) };
								if ((iLocal_2463 / 3) * 2 < 2741082)
								{
									iLocal_2464 = (iLocal_2463 - 2741082);
									iLocal_2463 = 2741082;
								}
								else
								{
									iLocal_2464 = (iLocal_2463 / 3);
									iLocal_2463 = (iLocal_2463 / 3) * 2;
								}
								func_109(0);
								if (!PED::IS_PED_INJURED(iLocal_2486[1]))
								{
									ENTITY::SET_ENTITY_HEALTH(iLocal_2486[1], 99);
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2532[1], 0))
								{
									ENTITY::SET_ENTITY_HEALTH(iLocal_2532[1], 0);
									VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_2532[1], 0f);
								}
								func_111();
							}
						}
						else
						{
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_2486[1], 1);
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_2532[1], 1);
						}
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_77))
		{
			if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(iLocal_77) && iLocal_78 == 0)
			{
				ENTITY::SET_ENTITY_VELOCITY(iLocal_77, Local_79);
				iLocal_78 = 1;
			}
		}
		if (iLocal_2476 == 0 && fLocal_1752 > 46500f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -171.155f, -488.4529f, 25.97522f, -63.24057f, -537.0475f, 40.2474f, 64.75f, 0, 1, 0))
			{
				func_604(Local_3369.f_148, 1, 1, 1, 7, 0, 0);
				if (func_117())
				{
					func_656("JH_GDIE_ET", 0, 0, 1);
				}
				else
				{
					func_656("JH_GDIE_KD", 0, 0, 1);
				}
				iLocal_2476 = 1;
			}
		}
	}
	else
	{
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_2486[1], 1);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_2532[1], 1);
	}
	if (bLocal_2422)
	{
		func_798(Local_3369.f_12);
		func_798(Local_3369.f_14);
		func_798(Local_3369.f_15);
		func_796(Local_3369.f_82, Local_3369.f_84);
		func_123(0, 1, 0, 0);
		func_123(0, 2, 0, 0);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_3369.f_84, Local_3369.f_82) && STREAMING::HAS_MODEL_LOADED(Local_3369.f_12))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2552) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2552, 0))
			{
				iLocal_2552 = VEHICLE::CREATE_VEHICLE(Local_3369.f_12, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(Local_3369.f_84, 0f, Local_3369.f_82), 135f, 1, 1);
				func_778(iLocal_2552);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_2552, 128, 3);
				VEHICLE::SET_VEHICLE_EXTRA(iLocal_2552, 6, false);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_2552, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(Local_3369.f_84, 0f, Local_3369.f_82), 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_2552, 135f);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(func_93(0)) || PED::IS_PED_INJURED(func_93(0)))
		{
			func_278(&(Local_2659[0]), 0, Local_1680, 147.6818f, 1, 0, 0);
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(func_93(0), Local_1680, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(func_93(0), 147.6818f);
		}
		if (GlobalFunc_3038(GlobalFunc_5133(0, 2)))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2486[2]) || PED::IS_PED_INJURED(iLocal_2486[2]))
			{
				iLocal_2486[2] = func_738(0, 2, Local_1683, 261.2985f, 0, 1);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_2486[2], Local_1683, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_2486[2], 261.2985f);
			}
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_2486[2], joaat("weapon_pistol"), -1, 1, 1);
		}
	}
}

void func_796(char* sParam0, int iParam1)//Position - 0x742F9
{
	int iVar0;
	
	iVar0 = func_797(sParam0, iParam1);
	if (iVar0 != -1)
	{
		if (!Local_3288[iVar0 /*4*/].f_3)
		{
			func_127(Local_3288[iVar0 /*4*/].f_1, Local_3288[iVar0 /*4*/], 0, 0, 0);
			Local_3288[iVar0 /*4*/].f_2 = 1;
		}
	}
}

int func_797(char* sParam0, int iParam1)//Position - 0x7433F
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar0 = -1;
	bVar1 = false;
	iVar2 = 0;
	while (!bVar1)
	{
		if (MISC::ARE_STRINGS_EQUAL(Local_3288[iVar2 /*4*/], sParam0) && Local_3288[iVar2 /*4*/].f_1 == iParam1)
		{
			bVar1 = true;
			iVar0 = iVar2;
		}
		else
		{
			iVar2++;
			if (iVar2 >= iLocal_3287)
			{
				bVar1 = true;
			}
		}
	}
	return iVar0;
}

void func_798(int iParam0)//Position - 0x74397
{
	int iVar0;
	
	iVar0 = func_799(iParam0);
	if (iVar0 != -1)
	{
		if (!Local_3029[iVar0 /*3*/].f_2)
		{
			func_129(Local_3029[iVar0 /*3*/], 0, 0, 0);
			Local_3029[iVar0 /*3*/].f_1 = 1;
		}
	}
}

int func_799(int iParam0)//Position - 0x743D2
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar0 = -1;
	bVar1 = false;
	iVar2 = 0;
	while (!bVar1)
	{
		if (Local_3029[iVar2 /*3*/] == iParam0)
		{
			bVar1 = true;
			iVar0 = iVar2;
		}
		else
		{
			iVar2++;
			if (iVar2 >= iLocal_3028)
			{
				bVar1 = true;
			}
		}
	}
	return iVar0;
}



void func_802()//Position - 0x7447E
{
	if (!iLocal_2426)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(func_93(0)))
		{
			func_111();
			iLocal_2426 = 1;
		}
	}
	if (!iLocal_2431[0])
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_2532[0], -777.4823f, -259.3957f, 45.09581f, 11.0625f, 14.5625f, 9f, false, 1, 0))
		{
			func_804("JH_SHARPLE", "JH_SHARPLT", "JH_LOSTF");
			if (!Global_86789)
			{
				if (func_115())
				{
					func_656(Local_3369.f_194, 0, 0, 1);
				}
				else
				{
					func_656("JH_FRENCO", 0, 0, 1);
				}
			}
			iLocal_2431[0] = 1;
		}
	}
	if (!iLocal_2431[1])
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_2532[0], -295.6372f, -425.5895f, 28.48712f, -291.2658f, -364.6477f, 33.50071f, 14.25f, 0, 1, 0))
		{
			func_803("JH_BRIDE", "JH_BRIDT", "JH_LOSTF");
			iLocal_2431[1] = 1;
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_2B_CHASE_POLICE_AT_BRIDGE"))
			{
				AUDIO::START_AUDIO_SCENE("JSH_2B_CHASE_POLICE_AT_BRIDGE");
			}
		}
	}
	if (!iLocal_2431[2])
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_2532[0], -176.0295f, -486.3936f, 42.42462f, 46f, 40f, 9f, false, 1, 0))
		{
			iLocal_2431[2] = 1;
		}
	}
	if (ENTITY::IS_ENTITY_AT_COORD(iLocal_2532[0], -176.0295f, -486.3936f, 42.42462f, 5f, 5f, 9f, false, 1, 0))
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_2B_CHASE_JUMP_FREEWAY"))
		{
			AUDIO::START_AUDIO_SCENE("JSH_2B_CHASE_JUMP_FREEWAY");
		}
	}
	if (!iLocal_2431[3])
	{
		if (iLocal_2431[2] == 1)
		{
			if (!bLocal_2475)
			{
				func_803("JH_OFFE", "JH_OFFT", "JH_OFFK");
			}
			if (func_112())
			{
				func_656("JH_JUMP_NR", 0, 0, 1);
				func_656("JH_LSCN_NR", 0, 0, 1);
			}
			else if (func_113())
			{
				func_656("JH_JUMP_GM", 0, 0, 1);
			}
			else if (func_114())
			{
				func_656("JH_JUMP_PM", 0, 0, 1);
			}
			func_803("JH_RIGHTE", "JH_RIGHTT", "JH_LOSTF");
			iLocal_2431[3] = 1;
		}
	}
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -60.5417f, -543.5551f, 30.8804f, 8f, 8f, 8f, false, 1, 0))
	{
		if (bLocal_2475)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_2486[1]));
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_2532[1]));
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_2B_CHASE_POLICE_AT_BRIDGE"))
		{
			AUDIO::STOP_AUDIO_SCENE("JSH_2B_CHASE_POLICE_AT_BRIDGE");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_2B_CHASE_JUMP_FREEWAY"))
		{
			AUDIO::STOP_AUDIO_SCENE("JSH_2B_CHASE_JUMP_FREEWAY");
		}
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_2B_CHASE_ENTER_TUNNELS"))
		{
			AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_JSH_2A_04", 0f);
			AUDIO::START_AUDIO_SCENE("JSH_2B_CHASE_ENTER_TUNNELS");
		}
	}
	if (!iLocal_2431[4])
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -65.733f, -539.4092f, 30.7915f, 42f, 42f, 30f, false, 1, 0))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 6.5f);
			VEHICLE::SET_VEHICLE_LIGHTS(iLocal_2532[0], 2);
			if (!bLocal_2475)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_2532[1], 2);
			}
			VEHICLE::SET_VEHICLE_LIGHTS(iLocal_2532[2], 3);
			VEHICLE::SET_VEHICLE_FULLBEAM(iLocal_2532[0], 1);
			if (!bLocal_2475)
			{
				VEHICLE::SET_VEHICLE_FULLBEAM(iLocal_2532[1], 1);
			}
			VEHICLE::SET_VEHICLE_FULLBEAM(iLocal_2532[2], 1);
			AUDIO::DISTANT_COP_CAR_SIRENS(0);
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(Local_3369.f_244);
			iLocal_2431[4] = 1;
			iLocal_2431[1] = 1;
		}
	}
	if (!iLocal_2431[5])
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -32.7017f, -578.515f, 27.3165f, 5f, 5f, 5f, false, 1, 0))
		{
			iLocal_2431[5] = 1;
		}
	}
	if (!iLocal_2431[6])
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 20.5861f, -647.6309f, 15.0881f, 5f, 5f, 5f, false, 1, 0))
		{
			func_803("JH_TUNNELE", "JH_TUNNELT", "JH_TUNNELK");
			func_803("JH_SPLITE", "JH_SPLITT", "JH_SPLITK");
			iLocal_2431[6] = 1;
		}
	}
	if (!iLocal_2431[7])
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_2532[0], 2.365517f, -633.196f, 18.06596f, 21.3125f, 20f, 3.5625f, false, 1, 0))
		{
			iLocal_2431[7] = 1;
		}
	}
	if (!iLocal_2431[8])
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_2532[0], -14.76301f, -805.2279f, 15.39101f, -24.69407f, -782.2549f, 22.46775f, 21.75f, 0, 1, 0))
		{
			iLocal_2431[8] = 1;
		}
	}
	if (!iLocal_2431[9])
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_2532[0], 49.1018f, -801.2584f, 16.8009f, 15f, 15f, 4f, false, 1, 0))
		{
			func_803("JH_MUDE", "JH_MUDT", "JH_MUDK");
			if (Local_3369 == joaat("bati2"))
			{
				func_656("JH_SHITBIKE", 0, 0, 1);
			}
			else if (func_113())
			{
				func_656("JH_BIKEG_GM", 0, 0, 1);
			}
			else if (func_114())
			{
				func_656("JH_BIKEG_PM", 0, 0, 1);
			}
			func_803("JH_COMP_ET", "JH_COMP_ET", "JH_COMP_KD");
			iLocal_2431[9] = 1;
		}
	}
	if (ENTITY::IS_ENTITY_IN_AIR(iLocal_2532[2]))
	{
		PLAYER::SPECIAL_ABILITY_CHARGE_CONTINUOUS(PLAYER::PLAYER_ID(), 1);
	}
	if (iLocal_4932 == 0)
	{
		if (PLAYER::IS_SPECIAL_ABILITY_ENABLED(PLAYER::PLAYER_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 124.5188f, -615.0482f, 16.7761f, 5f, 5f, 5f, false, 1, 0))
			{
				PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 10.5f);
				if (PAD::_IS_USING_KEYBOARD(0))
				{
					GlobalFunc_159("JWL_ABILITY_KM", 12000);
				}
				else
				{
					GlobalFunc_159("JWL_ABILITY", 12000);
				}
				iLocal_4932 = 1;
			}
		}
	}
	if (!iLocal_2431[10])
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_2532[0], 122.4857f, -612.9412f, 16.7999f, 15f, 15f, 4f, false, 1, 0))
		{
			if (!func_115())
			{
				if (bLocal_2475)
				{
					func_803("JH_LEFTE2", "JH_LEFTT2", "JH_LEFTK2");
				}
			}
			iLocal_2431[10] = 1;
		}
	}
	if (!iLocal_2431[11])
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_2532[0], 230.4518f, -504.3735f, 23.5882f, 11f, 10f, 4f, false, 1, 0))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 6.5f);
			func_803("JH_CORRE", "JH_CORRT", "JH_CORRK");
			iLocal_2431[11] = 1;
		}
	}
	if (!iLocal_2431[12])
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_2532[0], 337.6855f, -454.0294f, 22.505f, 11f, 10f, 4f, false, 1, 0))
		{
			func_803("JH_LIPE", "JH_LIPT", "JH_LIPK");
			iLocal_2431[12] = 1;
		}
	}
	if (!iLocal_2431[13])
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_2532[0], 421.6507f, -495.5566f, 7.7602f, 11f, 10f, 4f, false, 1, 0))
		{
			func_803("JH_LEFLEFE", "JH_LEFLEFT", "JH_LEFLEFK");
			iLocal_2431[13] = 1;
		}
	}
	if (!iLocal_2431[13])
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_2532[0], 551.4762f, -520.8657f, -4.4253f, 11f, 10f, 4f, false, 1, 0))
		{
			func_803("JH_GATEE", "JH_GATET", "JH_GATEK");
			iLocal_2431[13] = 1;
		}
	}
	if (!iLocal_2431[14])
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_2532[0], 134.773f, -606.3827f, 19.62934f, 15.875f, 15f, 3.125f, false, 1, 0))
		{
			iLocal_2431[14] = 1;
		}
	}
	if (!iLocal_2431[15])
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_2532[0], 1015.712f, -181.0643f, 39.7388f, 80.75f, 70.5625f, 30.25f, false, 1, 0))
		{
			func_803("JH_HILLE", "JH_HILLT", "JH_HILLK");
			switch (GlobalFunc_697(GlobalFunc_5133(0, 2)))
			{
				case 2:
					func_656("JH_HCKARIVER", 0, 0, 1);
					break;
				
				case 1:
					func_656("JH_HCKBRIVER", 0, 0, 1);
					break;
				
				case 0:
					func_656("JH_HCKCRIVER", 0, 0, 1);
					break;
			}
			iLocal_2431[15] = 1;
		}
	}
	if (!iLocal_2431[16])
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_2532[0], 595.4016f, -437.2173f, -4.3002f, 10.75f, 4.5625f, 4.25f, false, 1, 0))
		{
			func_803("JH_CLIMBE", "JH_CLIMBT", "JH_CLIMBK");
			iLocal_2431[16] = 1;
		}
	}
	if (!iLocal_2431[17])
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_2532[0], 1034.203f, -285.5826f, 49.1856f, 6f, 6f, 6f, false, 1, 0))
		{
			func_656(Local_3369.f_128, 0, 0, 1);
			iLocal_2431[17] = 1;
		}
	}
	if (!iLocal_2431[18])
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_2532[0], 833.7619f, -294.1365f, 4.4777f, 11f, 10f, 4f, false, 1, 0))
		{
			func_803("JH_TRUCKE", "JH_TRUCKT", "JH_TRUCKK");
			iLocal_2431[18] = 1;
		}
	}
	if (!bLocal_2920 && !bLocal_2919)
	{
		if (!func_655())
		{
			if (((!func_654() && (iLocal_1503 == 0 || iLocal_1503 == 10)) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_2532[0], 1) < 80f) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if ((SYSTEM::TIMERA() > 10000 && iLocal_4932) && iLocal_2431[14] == 0)
				{
					SYSTEM::SETTIMERA(0);
					if (iLocal_2431[6] && !iLocal_2431[15])
					{
						if (!bLocal_2475)
						{
							func_604(Local_3369.f_195, 1, 1, 1, 7, 0, 0);
						}
					}
					else if (!iLocal_2431[15])
					{
						if (func_115())
						{
							func_604(Local_3369.f_194, 1, 1, 1, 7, 0, 0);
						}
						else
						{
							func_604("JH_FRENCO", 1, 1, 1, 7, 0, 0);
						}
					}
				}
			}
		}
	}
}

void func_803(char* sParam0, char* sParam1, char* sParam2)//Position - 0x74E60
{
	if (func_117())
	{
		func_656(sParam0, 0, 0, 1);
	}
	else if (func_116())
	{
		func_656(sParam1, 0, 0, 1);
	}
	else if (func_115())
	{
		func_656(sParam2, 0, 0, 1);
	}
}

void func_804(char* sParam0, char* sParam1, char* sParam2)//Position - 0x74E9E
{
	if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_2532[0], 1) < 95f)
	{
		if (func_117())
		{
			func_604(sParam0, 1, 1, 1, 7, 0, 0);
		}
		else if (func_116())
		{
			func_604(sParam1, 1, 1, 1, 7, 0, 0);
		}
		else if (func_115())
		{
			if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam2) > 0)
			{
				func_604(sParam2, 1, 1, 1, 7, 0, 0);
			}
		}
	}
}

int func_805(int iParam0, int iParam1)//Position - 0x74F0A
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1)
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

void func_806()//Position - 0x74F37
{
	int iVar0;
	
	if (Global_86789)
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2532[0]))
		{
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_2532[0]) > 5753.612f)
			{
				if (!iLocal_2421)
				{
					iLocal_2466 = 0;
					while (iLocal_2466 <= 2)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2538[iLocal_2466], 0))
						{
							if (!PED::IS_PED_INJURED(iLocal_2505[iLocal_2466]))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2538[iLocal_2466]))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2538[iLocal_2466]);
									VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_2538[iLocal_2466], 3f, -1, 0);
								}
								else if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_2538[iLocal_2466]))
								{
									PED::SET_PED_ACCURACY(iLocal_2505[iLocal_2466], 0);
									WEAPON::GIVE_WEAPON_TO_PED(iLocal_2505[iLocal_2466], joaat("weapon_pistol"), 1000, 1, 1);
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_2505[iLocal_2466], iLocal_2637);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2505[iLocal_2466], 0);
									TASK::OPEN_SEQUENCE_TASK(&uLocal_2609);
									TASK::TASK_PAUSE(0, MISC::GET_RANDOM_INT_IN_RANGE(0, 1000));
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_2609);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_2505[iLocal_2466], uLocal_2609);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_2609);
									iLocal_2421 = 1;
								}
								else
								{
									VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_2538[iLocal_2466], 3f, -1, 0);
								}
							}
						}
						iLocal_2466++;
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1374[33]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_1374[33]))
				{
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_1374[33], 1);
					if (ENTITY::GET_ENTITY_HEALTH(iLocal_1374[33]) < 850)
					{
						iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1374[33], -1);
						if (!PED::IS_PED_INJURED(iVar0) && ENTITY::GET_ENTITY_HEALTH(iVar0) > 0)
						{
							ENTITY::SET_ENTITY_HEALTH(iVar0, 0);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
							if (func_113())
							{
								func_604("JH_GET_COPRE", 1, 1, 1, 7, 0, 0);
							}
							else if (func_114())
							{
								func_604("JH_THNX_PM", 1, 1, 1, 7, 0, 0);
							}
							else if (func_112())
							{
								func_604("JH_THNX_NR", 1, 1, 1, 7, 0, 0);
							}
							if (func_117())
							{
								func_656("JH_GOOD_ET", 0, 0, 1);
							}
							else if (func_115())
							{
								func_656("JH_GOOD_KD", 0, 0, 1);
							}
						}
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1374[33]);
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_5029) > 4500 && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_2532[0], 1) < 100f)
					{
						if (iLocal_5030 == 0)
						{
							if (func_114())
							{
								func_656("JH_COPOFF_PM", 0, 0, 1);
							}
							else if (func_113())
							{
								func_656("JH_COPOFF_GM", 0, 0, 1);
							}
							else if (func_112())
							{
								func_656("JH_COPOFF_NR", 0, 0, 1);
							}
							iLocal_5030 = 1;
						}
						else if (func_114())
						{
							func_656("JH_GET_COPCP", 0, 0, 1);
						}
						else if (func_113())
						{
							func_656("JH_GET_COPCR", 0, 0, 1);
						}
						else if (func_112())
						{
							func_656("JH_GET_COPCN", 0, 0, 1);
						}
						iLocal_5029 = MISC::GET_GAME_TIMER();
					}
				}
			}
		}
	}
}

void func_807()//Position - 0x7521E
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	if ((MISC::GET_GAME_TIMER() - iLocal_5028) > 3000)
	{
		if (!GlobalFunc_111())
		{
			iVar0 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10f, 0, GlobalFunc_2220());
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				bVar2 = false;
				iVar3 = 0;
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iLocal_2532[2]))
				{
					bVar2 = true;
				}
				else if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iVar0)) > 2f)
				{
					if (MISC::ABSF((ENTITY::GET_ENTITY_HEADING(iVar0) - ENTITY::GET_ENTITY_HEADING(iLocal_2532[2]))) > 60f)
					{
						iVar3 = 1;
					}
				}
				if (bVar2 || iVar3)
				{
					iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1);
					if (!PED::IS_PED_INJURED(iVar1))
					{
						if (bVar2)
						{
							GlobalFunc_5130(iVar1, "GENERIC_CURSE_HIGH", 5);
						}
						else
						{
							GlobalFunc_5130(iVar1, "GENERIC_INSULT_HIGH", 5);
						}
						iLocal_5028 = MISC::GET_GAME_TIMER();
					}
				}
			}
		}
	}
}


void func_809()//Position - 0x752FC
{
	switch (iLocal_5032)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_5033, 200f, 200f, 200f, false, 1, 0))
			{
				iLocal_5031 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Local_5033, "V_31_TUN_01");
				iLocal_5032++;
			}
			break;
		
		case 1:
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_5031);
			iLocal_5032++;
			break;
		
		case 2:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_5033, 9f, 9f, 9f, false, 1, 0))
			{
				INTERIOR::UNPIN_INTERIOR(iLocal_5031);
				iLocal_5032++;
			}
			break;
	}
}


void func_811(int iParam0)//Position - 0x754FB
{
	int iVar0;
	
	iVar0 = func_799(iParam0);
	if (iVar0 != -1)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3029[iVar0 /*3*/]);
		Local_3029[iVar0 /*3*/].f_1 = 0;
		Local_3029[iVar0 /*3*/].f_2 = 0;
	}
}

void func_812(int iParam0, bool bParam1)//Position - 0x75530
{
	if (bParam1)
	{
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iParam0, 3);
	}
	else
	{
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iParam0, 0);
	}
}





void func_817(char* sParam0, int iParam1)//Position - 0x75620
{
	int iVar0;
	
	iVar0 = func_797(sParam0, iParam1);
	if (iVar0 != -1)
	{
		VEHICLE::REMOVE_VEHICLE_RECORDING(Local_3288[iVar0 /*4*/].f_1, Local_3288[iVar0 /*4*/]);
		Local_3288[iVar0 /*4*/].f_2 = 0;
		Local_3288[iVar0 /*4*/].f_3 = 0;
	}
}

void func_818(int iParam0, bool bParam1)//Position - 0x75660
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam0, !bParam1);
		if (!PED::IS_PED_IN_ANY_VEHICLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 0))
		{
			ENTITY::SET_ENTITY_COLLISION(iParam0, !bParam1, 0);
		}
		if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(iParam0))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iParam0, bParam1);
			}
		}
		if (bParam1)
		{
			ENTITY::SET_ENTITY_COORDS(iParam0, -722.6866f, -346.5041f, 34.45f, 1, 0, 0, 1);
		}
	}
}

int func_819()//Position - 0x756D2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_3028 - 1))
	{
		if (Local_3029[iVar0 /*3*/] != 0)
		{
			if (Local_3029[iVar0 /*3*/].f_1)
			{
				STREAMING::REQUEST_MODEL(Local_3029[iVar0 /*3*/]);
				Local_3029[iVar0 /*3*/].f_2 = 1;
			}
			else if (Local_3029[iVar0 /*3*/].f_2)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3029[iVar0 /*3*/]);
				Local_3029[iVar0 /*3*/].f_2 = 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_3135 - 1))
	{
		if (!MISC::ARE_STRINGS_EQUAL(Local_3136[iVar0 /*3*/], "missing"))
		{
			if (Local_3136[iVar0 /*3*/].f_1)
			{
				STREAMING::REQUEST_ANIM_DICT(Local_3136[iVar0 /*3*/]);
				Local_3136[iVar0 /*3*/].f_2 = 1;
			}
			else if (Local_3136[iVar0 /*3*/].f_2)
			{
				STREAMING::REMOVE_ANIM_DICT(Local_3136[iVar0 /*3*/]);
				Local_3136[iVar0 /*3*/].f_2 = 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_3287 - 1))
	{
		if (!MISC::ARE_STRINGS_EQUAL(Local_3288[iVar0 /*4*/], "missing") && Local_3288[iVar0 /*4*/].f_1 != -1)
		{
			if (Local_3288[iVar0 /*4*/].f_2)
			{
				VEHICLE::REQUEST_VEHICLE_RECORDING(Local_3288[iVar0 /*4*/].f_1, Local_3288[iVar0 /*4*/]);
				Local_3288[iVar0 /*4*/].f_3 = 1;
			}
			else if (Local_3288[iVar0 /*4*/].f_3)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(Local_3288[iVar0 /*4*/].f_1, Local_3288[iVar0 /*4*/]);
				Local_3288[iVar0 /*4*/].f_3 = 0;
			}
		}
		iVar0++;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		STREAMING::LOAD_ALL_OBJECTS_NOW();
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_3028 - 1))
	{
		if (Local_3029[iVar0 /*3*/].f_2 == 1)
		{
			if (!STREAMING::HAS_MODEL_LOADED(Local_3029[iVar0 /*3*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_3135 - 1))
	{
		if (Local_3136[iVar0 /*3*/].f_2 == 1)
		{
			if (!STREAMING::HAS_ANIM_DICT_LOADED(Local_3136[iVar0 /*3*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_3287 - 1))
	{
		if (Local_3288[iVar0 /*4*/].f_3 == 1)
		{
			if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_3288[iVar0 /*4*/].f_1, Local_3288[iVar0 /*4*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_820(char* sParam0, int iParam1)//Position - 0x758F5
{
	int iVar0;
	
	iVar0 = func_797(sParam0, iParam1);
	if (iVar0 != -1)
	{
		Local_3288[iVar0 /*4*/].f_2 = 1;
	}
}

void func_821(char* sParam0)//Position - 0x75917
{
	int iVar0;
	
	iVar0 = func_822(sParam0);
	if (iVar0 != -1)
	{
		Local_3136[iVar0 /*3*/].f_1 = 1;
	}
}

int func_822(char* sParam0)//Position - 0x75937
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar0 = -1;
	bVar1 = false;
	iVar2 = 0;
	while (!bVar1)
	{
		if (MISC::ARE_STRINGS_EQUAL(Local_3136[iVar2 /*3*/], sParam0))
		{
			bVar1 = true;
			iVar0 = iVar2;
		}
		else
		{
			iVar2++;
			if (iVar2 >= iLocal_3135)
			{
				bVar1 = true;
			}
		}
	}
	return iVar0;
}

void func_823(int iParam0)//Position - 0x7597E
{
	int iVar0;
	
	iVar0 = func_799(iParam0);
	if (iVar0 != -1)
	{
		Local_3029[iVar0 /*3*/].f_1 = 1;
	}
}

void func_824(int iParam0, struct<3> Param1, char* sParam4, bool bParam5, bool bParam6)//Position - 0x7599E
{
	*iParam0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Param1, sParam4);
	INTERIOR::PIN_INTERIOR_IN_MEMORY(*iParam0);
	if (bParam5)
	{
		while (!INTERIOR::IS_INTERIOR_READY(*iParam0))
		{
			if (bParam6)
			{
				func_109(0);
			}
			else
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_825()//Position - 0x759DF
{
	int iVar0;
	int iVar1;
	
	if (!iLocal_2406)
	{
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(Local_3369.f_245);
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(Local_3369.f_247);
		if (bLocal_2405)
		{
			AUDIO::STOP_SOUND(Local_2991[11 /*3*/]);
		}
		AUDIO::SET_AUDIO_FLAG("OnlyAllowScriptTriggerPoliceScanner", 1);
		AUDIO::CLEAR_ALL_BROKEN_GLASS();
		PED::DELETE_PED(&(iLocal_2492[0]));
		PED::DELETE_PED(&(iLocal_2492[1]));
		PED::DELETE_PED(&(iLocal_2492[2]));
		PED::DELETE_PED(&(iLocal_2492[3]));
		PED::DELETE_PED(&(iLocal_2492[4]));
		PED::DELETE_PED(&iLocal_2491);
		if (iLocal_2604 != 0)
		{
			INTERIOR::UNPIN_INTERIOR(iLocal_2604);
		}
		if (!ENTITY::IS_ENTITY_DEAD(func_93(1)) && !ENTITY::IS_ENTITY_DEAD(iLocal_2532[2]))
		{
			if (!PED::IS_PED_IN_VEHICLE(func_93(1), iLocal_2532[2], 0))
			{
				PED::SET_PED_INTO_VEHICLE(func_93(1), iLocal_2532[2], -1);
				func_9(func_93(1), 0, 0);
				PED::REMOVE_PED_HELMET(func_93(1), 1);
				PED::SET_PED_HELMET_PROP_INDEX(func_93(1), 6, 1);
				PED::SET_PED_HELMET_TEXTURE_INDEX(func_93(1), 8);
				PED::SET_PED_PROP_INDEX(func_93(1), 0, 6, 8, false);
				PED::SET_PED_HELMET(func_93(1), 1);
				TASK::TASK_LOOK_AT_ENTITY(func_93(1), func_93(0), 5000, 2048, 2);
				PED::SET_PED_PRELOAD_VARIATION_DATA(func_93(1), 9, 6, 0);
			}
		}
		STREAMING::REMOVE_PTFX_ASSET();
		func_130();
		func_126(1, 0);
		VEHICLE::REQUEST_VEHICLE_RECORDING(Local_3369.f_84, Local_3369.f_83);
		VEHICLE::REQUEST_VEHICLE_RECORDING(998, Local_3369.f_83);
		VEHICLE::REQUEST_VEHICLE_RECORDING(722, Local_3369.f_83);
		STREAMING::REQUEST_ANIM_DICT("missheist_jewel");
		STREAMING::REQUEST_PTFX_ASSET();
		if (Global_86789)
		{
			VEHICLE::REQUEST_VEHICLE_RECORDING(1, "JHLateCops");
			VEHICLE::REQUEST_VEHICLE_RECORDING(2, "JHLateCops");
			VEHICLE::REQUEST_VEHICLE_RECORDING(3, "JHLateCops");
			STREAMING::REQUEST_MODEL(Local_3369.f_14);
			STREAMING::REQUEST_MODEL(Local_3369.f_15);
		}
		if (Local_3369 == joaat("bati2"))
		{
			CUTSCENE::REQUEST_CUTSCENE(Local_3369.f_123, 8);
		}
		else
		{
			CUTSCENE::REQUEST_CUTSCENE(Local_3369.f_124, 8);
		}
		VEHICLE::REQUEST_VEHICLE_ASSET(Local_3369, 3);
		while (((!CUTSCENE::HAS_CUTSCENE_LOADED() || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_3369.f_84, Local_3369.f_83)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(998, Local_3369.f_83)) || !STREAMING::HAS_ANIM_DICT_LOADED("missheist_jewel"))
		{
			func_109(0);
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", func_93(1), 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", func_93(0), 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1513))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Traffic_Warden", iLocal_1513, 0);
				}
			}
		}
		func_824(&iLocal_2604, -625.1706f, -232.8408f, 39.4937f, "V_JEWEL2", 1, 1);
		func_111();
		func_9(iLocal_2486[1], 1, 0);
		SYSTEM::SETTIMERA(0);
		func_108(800, 0, 0);
		iLocal_2467 = 0;
		iLocal_2407 = 0;
		iLocal_2406 = 1;
		iLocal_5021 = 0;
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[2]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[2]);
			if (Local_3369 == joaat("bati2"))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2532[2], "Franklins_Heist_Bike", 0, Local_3369, 0);
			}
			else
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2532[2], "Franklins_Heist_Bike", 0, Local_3369, 0);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1513))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1513))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1513, "Traffic_Warden", 0, 0, 0);
			}
		}
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_93(0), "Michael", 0, 0, 0);
		GlobalFunc_8316(1, 1, 1, 0);
		func_828(1, 1, 0);
		GlobalFunc_4956();
		CUTSCENE::START_CUTSCENE(0);
		RECORDING::_0x48621C9FCA3EBD28(4);
		func_798(Local_3369);
		func_122(joaat("weapon_pistol"), 0, 0, 0);
		func_771();
		iVar0 = iLocal_1374;
		iVar1 = iLocal_1290;
		iLocal_2466 = 0;
		while (iLocal_2466 < iVar0)
		{
			if (iLocal_742[iLocal_2466] > 0)
			{
				VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_742[iLocal_2466], Local_3369.f_83);
			}
			iLocal_2466++;
		}
		iLocal_2466 = 0;
		while (iLocal_2466 < iVar1)
		{
			if (iLocal_631[iLocal_2466] > 0)
			{
				VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_631[iLocal_2466], Local_3369.f_83);
			}
			iLocal_2466++;
		}
		iLocal_2484 = 0;
		AUDIO::PREPARE_ALARM("JEWEL_STORE_HEIST_ALARMS");
		if (Global_86789)
		{
			func_798(Local_3369.f_14);
			func_798(Local_3369.f_15);
			func_796("JHLateCops", 1);
			func_796("JHLateCops", 2);
			func_796("JHLateCops", 3);
		}
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		iLocal_2917 = iLocal_2463;
	}
	else
	{
		switch (iLocal_2467)
		{
			case 0:
			case 1:
			case 2:
				if (CUTSCENE::IS_CUTSCENE_PLAYING() && iLocal_5021 == 0)
				{
					CLOCK::SET_CLOCK_TIME(15, 0, 0);
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_2612))
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_2612, 0);
					}
					func_9(func_93(0), 0, 0);
					if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_3369.f_84, Local_3369.f_83) && !ENTITY::IS_ENTITY_DEAD(iLocal_2532[0]))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[0]);
						ENTITY::SET_ENTITY_COORDS(iLocal_2532[0], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(Local_3369.f_84, 1000f, Local_3369.f_83) + Local_82, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(iLocal_2532[0], VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(Local_3369.f_84, 1000f, Local_3369.f_83), 2, 1);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_2532[0], true);
						VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(iLocal_2532[0], 1, 1, 1);
					}
					if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_742[0], Local_3369.f_83) && !ENTITY::IS_ENTITY_DEAD(iLocal_2532[1]))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[1]);
						ENTITY::SET_ENTITY_COORDS(iLocal_2532[1], Local_82 + VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_742[0], 1000f, Local_3369.f_83), 1, 0, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(iLocal_2532[1], VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_742[0], 1000f, Local_3369.f_83), 2, 1);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_2532[1], true);
						VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(iLocal_2532[1], 1, 1, 1);
					}
					MISC::CLEAR_AREA_OF_PEDS(-636.56f, -241.84f, 38.41f, 200f, 1);
					MISC::CLEAR_AREA_OF_VEHICLES(-636.56f, -241.84f, 38.41f, 200f, 1, 0, 0, 0, 0);
					MISC::CLEAR_AREA_OF_PROJECTILES(-636.56f, -241.84f, 38.41f, 200f, 1);
					if (!PED::IS_PED_INJURED(iLocal_2491))
					{
						PED::SET_PED_KEEP_TASK(iLocal_2491, 1);
					}
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_2491);
					VEHICLE::DELETE_VEHICLE(&iLocal_2552);
					PED::DELETE_PED(&(iLocal_2486[2]));
					func_646(GlobalFunc_5133(0, 2));
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_2486[0]))
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_2486[0], iLocal_2532[0], 0))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_2486[0], iLocal_2532[0], -1);
						}
						func_617(iLocal_2486[0], 0);
						func_9(iLocal_2486[0], 1, 0);
						PED::SET_PED_PROP_INDEX(iLocal_2486[0], 0, 3, 0, false);
						func_827(iLocal_2486[0], iLocal_2532[0]);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2486[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_2532[1]))
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_2486[1], iLocal_2532[1], 0))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_2486[1], iLocal_2532[1], -1);
						}
						func_617(iLocal_2486[1], 0);
						PED::SET_PED_PROP_INDEX(iLocal_2486[1], 0, 4, 0, false);
						func_827(iLocal_2486[1], iLocal_2532[1]);
					}
					if (GlobalFunc_8315() != 1)
					{
						GlobalFunc_9019(&Local_2659, 1);
						func_167(&Local_2659, 1, 1, 0);
					}
					iLocal_5021 = 1;
				}
				if (Local_3369 == joaat("bati2"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Franklins_Heist_Bike", 0)))
					{
						iLocal_2532[2] = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Franklins_Heist_Bike", 0));
						VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_2532[2], 2);
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Franklins_getaway_Bike", 0)))
				{
					iLocal_2532[2] = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Franklins_getaway_Bike", 0));
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_2532[2], 2);
				}
				if (CUTSCENE::GET_CUTSCENE_TIME() > 1402 && iLocal_2484 == 0)
				{
					if (bLocal_2405)
					{
						if (AUDIO::PREPARE_MUSIC_EVENT("JH2A_EXIT_SHOP_MA"))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("JH2A_EXIT_SHOP_MA");
							iLocal_2484 = 1;
						}
					}
					else if (AUDIO::PREPARE_MUSIC_EVENT("JH2B_EXIT_SHOP_MA"))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("JH2B_EXIT_SHOP_MA");
						iLocal_2484 = 1;
					}
				}
				if (iLocal_2419 == 0 && CUTSCENE::GET_CUTSCENE_TIME() > 5402)
				{
					if (AUDIO::PREPARE_ALARM("JEWEL_STORE_HEIST_ALARMS"))
					{
						AUDIO::START_ALARM("JEWEL_STORE_HEIST_ALARMS", 0);
						iLocal_2419 = 1;
					}
				}
				if (iLocal_2467 == 0)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 10866)
					{
						iLocal_2467 = 1;
					}
				}
				if (iLocal_2467 == 1)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 12066)
					{
						iLocal_2485 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_2485, "all", "SHORT_PLAYER_SWITCH_SOUND_SET", 1);
						iLocal_2467 = 2;
					}
				}
				if (CUTSCENE::GET_CUTSCENE_TIME() > 13000)
				{
					func_9(func_93(1), 1, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[2]))
				{
					if (Local_3369 == joaat("bati2"))
					{
						if (!CUTSCENE::IS_CUTSCENE_PLAYING())
						{
							ENTITY::SET_ENTITY_VELOCITY(iLocal_2532[2], 0f, 0f, 0f);
							if (!PED::IS_PED_IN_VEHICLE(func_93(1), iLocal_2532[2], 0))
							{
								PED::SET_PED_INTO_VEHICLE(func_93(1), iLocal_2532[2], -1);
							}
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_93(1), 0, 0);
							func_9(func_93(1), 1, 0);
							if (!(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4 || (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4 && CAM::_0xEAF0FA793D05C592())))
							{
								func_643(0, 0, 1, 1, 1);
								CAM::SET_CAM_COORD(uLocal_3366, -631.2991f, -241.8959f, 38.92136f);
								CAM::SET_CAM_ROT(uLocal_3366, -7.602906f, 0f, 78.4102f, 2);
								CAM::SET_CAM_FOV(uLocal_3366, 50f);
								CAM::SET_CAM_ACTIVE(uLocal_3366, 1);
								CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
							}
							func_774(0);
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_2486[0]))
							{
								if (!PED::IS_PED_IN_VEHICLE(iLocal_2486[0], iLocal_2532[0], 0))
								{
									PED::SET_PED_INTO_VEHICLE(iLocal_2486[0], iLocal_2532[0], -1);
								}
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_2486[1]))
							{
								if (!PED::IS_PED_IN_VEHICLE(iLocal_2486[1], iLocal_2532[1], 0))
								{
									PED::SET_PED_INTO_VEHICLE(iLocal_2486[1], iLocal_2532[1], -1);
								}
							}
							ENTITY::SET_ENTITY_HEADING(func_93(0), 205.4952f);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_93(0), Local_1668, 1f, -1, 0.25f, 0, 40000f);
							PED::FORCE_PED_MOTION_STATE(func_93(0), -668482597, 1, 1, 0);
						}
					}
					else if (!CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[2]) && !ENTITY::IS_ENTITY_DEAD(func_93(1)))
						{
							if (!PED::IS_PED_IN_VEHICLE(func_93(1), iLocal_2532[2], 0))
							{
								PED::SET_PED_INTO_VEHICLE(func_93(1), iLocal_2532[2], -1);
							}
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_93(1), 0, 0);
							func_9(func_93(1), 1, 0);
							if (!(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4 || (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4 && CAM::_0xEAF0FA793D05C592())))
							{
								func_643(0, 0, 1, 1, 1);
								CAM::SET_CAM_COORD(uLocal_3366, -631.2991f, -241.8959f, 38.92136f);
								CAM::SET_CAM_ROT(uLocal_3366, -7.602906f, 0f, 78.4102f, 2);
								CAM::SET_CAM_FOV(uLocal_3366, 50f);
								CAM::SET_CAM_ACTIVE(uLocal_3366, 1);
								CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
							}
							func_774(0);
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_2486[0]))
							{
								if (!PED::IS_PED_IN_VEHICLE(iLocal_2486[0], iLocal_2532[0], 0))
								{
									PED::SET_PED_INTO_VEHICLE(iLocal_2486[0], iLocal_2532[0], -1);
								}
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_2486[1]))
							{
								if (!PED::IS_PED_IN_VEHICLE(iLocal_2486[1], iLocal_2532[1], 0))
								{
									PED::SET_PED_INTO_VEHICLE(iLocal_2486[1], iLocal_2532[1], -1);
								}
							}
						}
						ENTITY::SET_ENTITY_HEADING(func_93(0), 205.4952f);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_93(0), Local_1668, 1f, -1, 0.25f, 0, 40000f);
						PED::FORCE_PED_MOTION_STATE(func_93(0), -668482597, 1, 1, 0);
					}
				}
				if (!CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (!PED::IS_PED_INJURED(iLocal_1513))
					{
						TASK::TASK_PLAY_ANIM(iLocal_1513, "missheist_jewel", "cop_on_floor", 1000f, -8f, -1, 262145, 0, 0, 0, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_1513, 0, 0);
					}
				}
				if (!CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					GlobalFunc_8316(0, 1, 1, 0);
					func_111();
					iLocal_2467 = 3;
				}
				break;
		}
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		}
		if (iLocal_2467 >= 3)
		{
			GlobalFunc_2898(1);
			if (!bLocal_2405)
			{
				PED::SET_PED_CLOTH_PRONE(PLAYER::PLAYER_PED_ID(), 1);
			}
			func_827(iLocal_2486[0], iLocal_2532[0]);
			func_827(iLocal_2486[1], iLocal_2532[1]);
			INTERIOR::UNPIN_INTERIOR(iLocal_2604);
			func_9(func_93(1), 1, 0);
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_2485))
			{
				AUDIO::STOP_SOUND(iLocal_2485);
			}
			RECORDING::_0x81CBAE94390F9F89();
			iLocal_2406 = 0;
			iLocal_2407 = 0;
			return 1;
		}
	}
	return 0;
}


void func_827(int iParam0, int iParam1)//Position - 0x766A9
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, 0))
		{
			TASK::CLEAR_PED_TASKS(iParam0);
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iParam0, 1);
			PED::SET_PED_CAN_BE_DRAGGED_OUT(iParam0, 0);
			ENTITY::SET_ENTITY_PROOFS(iParam1, 0, 1, 1, 1, 1, 0, 0, 0);
			ENTITY::FREEZE_ENTITY_POSITION(iParam1, false);
		}
	}
}

void func_828(bool bParam0, bool bParam1, bool bParam2)//Position - 0x766FC
{
	if (bParam0)
	{
		if (func_600() != 0)
		{
			if (func_829(0))
			{
				if (!PED::IS_PED_INJURED(func_93(0)))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_93(0), "Michael", 0, joaat("player_zero"), 0);
				}
			}
		}
	}
	if (bParam1)
	{
		if (func_600() != 1)
		{
			if (func_829(1))
			{
				if (!PED::IS_PED_INJURED(func_93(1)))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_93(1), "Franklin", 0, joaat("player_one"), 0);
				}
			}
		}
	}
	if (bParam2)
	{
		if (func_600() != 2)
		{
			if (func_829(2))
			{
				if (!PED::IS_PED_INJURED(func_93(1)))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_93(2), "Trevor", 0, joaat("player_two"), 0);
				}
			}
		}
	}
}

int func_829(int iParam0)//Position - 0x767A7
{
	switch (iParam0)
	{
		case 0:
			if (GlobalFunc_237(GlobalFunc_8315()) == 0)
			{
				return 1;
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Local_2659[0]))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (GlobalFunc_237(GlobalFunc_8315()) == 1)
			{
				return 1;
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Local_2659[1]))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			if (GlobalFunc_237(GlobalFunc_8315()) == 2)
			{
				return 1;
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Local_2659[2]))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_830()//Position - 0x76853
{
	float fVar0;
	
	if (!iLocal_2406)
	{
		Global_89962.f_12[0] = 0;
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
		func_872();
		AUDIO::SET_AUDIO_FLAG("OnlyAllowScriptTriggerPoliceScanner", 1);
		if (!bLocal_2405)
		{
			iLocal_2470 = 0;
			iLocal_2471 = 1;
		}
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_2486[0], iLocal_1464, 1000, 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_2486[1], iLocal_1464, 1000, 0, 1);
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_2486[0], iLocal_1464, 1);
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_2486[1], iLocal_1464, 1);
		WEAPON::SET_CURRENT_PED_WEAPON(func_93(0), iLocal_1464, 1);
		VEHICLE::DELETE_VEHICLE(&iLocal_2590);
		func_811(Local_3369.f_2);
		func_130();
		iLocal_2466 = 0;
		iLocal_2466 = 0;
		while (iLocal_2466 <= 19)
		{
			uLocal_2642 = OBJECT::GET_RAYFIRE_MAP_OBJECT(Local_1758[iLocal_2466 /*30*/], 1f, Local_1758[iLocal_2466 /*30*/].f_27);
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_2642))
			{
				if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_2642) != 3)
				{
					OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_2642, 11);
				}
			}
			Local_1758[iLocal_2466 /*30*/].f_28 = 0;
			iLocal_2466++;
		}
		Global_89962.f_12[2] = 0;
		STREAMING::REQUEST_MODEL(Local_3369.f_18);
		STREAMING::REQUEST_MODEL(Local_3369.f_19);
		STREAMING::REQUEST_MODEL(Local_3369.f_20);
		STREAMING::REQUEST_MODEL(Local_3369.f_21);
		STREAMING::REQUEST_ANIM_DICT(Local_3369.f_35);
		STREAMING::REQUEST_ANIM_DICT(Local_3369.f_61);
		STREAMING::REQUEST_ANIM_DICT(Local_3369.f_35);
		while (((((!STREAMING::HAS_MODEL_LOADED(Local_3369.f_18) || !STREAMING::HAS_MODEL_LOADED(Local_3369.f_19)) || !STREAMING::HAS_MODEL_LOADED(Local_3369.f_20)) || !STREAMING::HAS_MODEL_LOADED(Local_3369.f_21)) || !STREAMING::HAS_ANIM_DICT_LOADED(Local_3369.f_35)) || !STREAMING::HAS_ANIM_DICT_LOADED(Local_3369.f_61))
		{
			SYSTEM::WAIT(0);
		}
		AUDIO::REQUEST_AMBIENT_AUDIO_BANK(Local_3369.f_245, 0);
		AUDIO::REQUEST_AMBIENT_AUDIO_BANK(Local_3369.f_244, 0);
		STREAMING::REQUEST_PTFX_ASSET();
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!PED::IS_PED_INJURED(iLocal_2486[iLocal_2470]))
			{
				if (bLocal_2405)
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_2486[iLocal_2470], -629.47f, -232.86f, 37.057f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_2486[iLocal_2470], -118.52f);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_2486[iLocal_2470], -629.42f, -236.67f, 37.057f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_2486[iLocal_2470], -121.52f);
				}
				PED::SET_PED_USING_ACTION_MODE(iLocal_2486[iLocal_2470], 1, -1, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_2486[iLocal_2471]))
			{
				if (bLocal_2405)
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_2486[iLocal_2471], -629.56f, -236.72f, 37.057f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_2486[iLocal_2471], -114.55f);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_2486[iLocal_2471], -628.6705f, -232.0854f, 37.057f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_2486[iLocal_2471], 305.2619f);
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_2486[iLocal_2471]))
		{
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(iLocal_2486[iLocal_2471], -623.2735f, -236.2186f, 37.057f, -622.8721f, -230.6936f, 37.8568f, 2f, 0, 1056964608, 1082130432, 1, 0, 0, -957453492);
		}
		if (bLocal_2405)
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_2609);
			TASK::TASK_GO_TO_COORD_ANY_MEANS(0, Local_1671, 1f, 0, 0, 786603, -1082130432);
			TASK::TASK_ACHIEVE_HEADING(0, 130.4809f, 0);
			TASK::TASK_PLAY_ANIM(0, Local_3369.f_61, "idle_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, Local_3369.f_61, "idle_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, Local_3369.f_61, "idle_d", 8f, -8f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, Local_3369.f_61, Local_3369.f_62, 8f, -8f, -1, 1, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_2609);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_2486[iLocal_2471], uLocal_2609);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_2609);
		}
		func_871();
		if (bLocal_2405)
		{
			func_870(1, 0, 0, 1, 1);
		}
		else
		{
			func_870(0, 0, 0, 1, 1);
		}
		func_111();
		func_611(1, 1, 1);
		func_610();
		func_656("JH_GOGO", 0, 0, 1);
		if (bLocal_2405)
		{
			if (func_113())
			{
				func_656("JH_CLEARG", 0, 0, 1);
			}
			else if (func_114())
			{
				func_656("JH_CLEARP", 0, 0, 1);
			}
			else if (func_112())
			{
				func_656("JH_CLEARN", 0, 0, 1);
			}
		}
		else if (func_117())
		{
			func_656("JH_CLEAN_ET", 0, 0, 1);
		}
		else if (func_115())
		{
			func_656("JH_CLEAN_KD", 0, 0, 1);
		}
		func_656(Local_3369.f_220, 1, 0, 1);
		switch (GlobalFunc_697(GlobalFunc_5133(0, 2)))
		{
			case 2:
				func_656(Local_3369.f_142, 0, 0, 1);
				func_656("JH_HCKARESP", 0, 0, 1);
				break;
			
			case 1:
				func_656(Local_3369.f_143, 0, 0, 1);
				func_656("JH_HCKBRESP", 0, 0, 1);
				break;
			
			case 0:
				func_656("JH_HCKCGO", 0, 0, 1);
				func_656("JH_HCKCRESP", 0, 0, 1);
				break;
		}
		if (!bLocal_2405)
		{
			iLocal_1518 = 0;
			if (bLocal_2474)
			{
				iLocal_2469 = 0;
			}
		}
		Global_89962.f_12[2] = 0;
		iLocal_4937 = MISC::GET_GAME_TIMER();
		iLocal_2418 = 0;
		iLocal_2420 = 0;
		bLocal_2412 = false;
		bLocal_2413 = false;
		iLocal_2414 = 0;
		iLocal_2415 = 0;
		iLocal_2419 = 0;
		iLocal_2428 = 0;
		iLocal_5017 = 0;
		iLocal_4941 = 0;
		func_869();
		PED::SET_CREATE_RANDOM_COPS(0);
		AUDIO::PREPARE_ALARM("JEWEL_STORE_HEIST_ALARMS");
		SYSTEM::SETTIMERA(0);
		SYSTEM::SETTIMERB(0);
		iLocal_2466 = 0;
		while (iLocal_2466 <= 24)
		{
			iLocal_2431[iLocal_2466] = 0;
			iLocal_2466++;
		}
		func_9(iLocal_2486[0], 1, 1);
		func_9(iLocal_2486[1], 1, 1);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			func_9(func_93(0), 1, 1);
		}
		func_617(func_93(0), 1);
		func_617(iLocal_2486[0], 1);
		func_617(iLocal_2486[1], 1);
		if (bLocal_2405)
		{
			func_868(11, Local_3369.f_254, 1);
		}
		iLocal_2463 = 0;
		iLocal_2465 = 0;
		iLocal_2460 = 0;
		iLocal_1509 = 0;
		iLocal_1755 = 0;
		iLocal_5013 = 0;
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		MISC::SET_FAKE_WANTED_LEVEL(0);
		func_867(&Local_2359);
		func_866(&uLocal_2361);
		func_866(&uLocal_2370);
		CUTSCENE::REMOVE_CUTSCENE();
		iLocal_2424 = 1;
		iLocal_2418 = 0;
		iLocal_73 = 0;
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_j2_door"), -629.1f, -230.2f, 38.2f, 1, 0f, 0);
		PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(PLAYER::PLAYER_ID(), 1);
		GlobalFunc_574(814, 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		iLocal_2410 = 0;
		AUDIO::START_AUDIO_SCENE("JSH_2B_GRAB_LOOT_MAIN");
		if (bLocal_2405)
		{
			fLocal_5019 = 0f;
			func_559(3, "STAGE_GRAB_LOOT", 0, 0, 0, 1);
		}
		else
		{
			func_559(2, "STAGE_GRAB_LOOT", 0, 0, 0, 1);
		}
		func_108(800, 0, 0);
		iLocal_2467 = 0;
		iLocal_2406 = 1;
		iLocal_5018 = 0;
		if (Local_3369 == joaat("bati2"))
		{
			CUTSCENE::REQUEST_CUTSCENE(Local_3369.f_123, 8);
		}
		else
		{
			CUTSCENE::REQUEST_CUTSCENE(Local_3369.f_124, 8);
		}
		VEHICLE::REQUEST_VEHICLE_RECORDING(Local_3369.f_84, Local_3369.f_83);
		VEHICLE::REQUEST_VEHICLE_RECORDING(998, Local_3369.f_83);
		iLocal_5020 = 0;
		RECORDING::_0x293220DA1B46CEBC(0f, 8f, 4);
	}
	else
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", func_93(1), 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", func_93(0), 0);
		func_864();
		PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		if (bLocal_2405)
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_2612))
			{
				uLocal_2612 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_jewel_fog_volume", -622f, -231f, 38f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uLocal_2612, "scr_jewel_fog_volume", fLocal_5019, 0);
			}
			if (SYSTEM::TIMERA() < (iLocal_2472 - 7000) && Global_89962.f_12[2] < 16)
			{
				fLocal_5019 = (fLocal_5019 + (0.05f * SYSTEM::TIMESTEP()));
				if (fLocal_5019 >= 1f)
				{
					fLocal_5019 = 1f;
				}
			}
			else
			{
				fLocal_5019 = (fLocal_5019 - (0.01f * SYSTEM::TIMESTEP()));
				if (fLocal_5019 <= 0f)
				{
					fLocal_5019 = 0.1f;
				}
			}
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uLocal_2612, "scr_jewel_fog_volume", fLocal_5019, 0);
		}
		func_863();
		func_860();
		if (!bLocal_2412 && !bLocal_2413)
		{
			if (iLocal_72 == 0)
			{
				iLocal_2466 = 0;
				while (iLocal_2466 <= 4)
				{
					if (func_859(iLocal_2492[iLocal_2466]))
					{
						iLocal_72 = 1;
					}
					iLocal_2466++;
				}
				if (func_859(iLocal_2504) || func_859(iLocal_2491))
				{
					iLocal_72 = 1;
				}
			}
			if (iLocal_72 && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (bLocal_2405)
				{
				}
			}
		}
		if (!(!func_112() && (bLocal_2413 == 1 && iLocal_2415 == 0)))
		{
			if (!bLocal_2405)
			{
				if (!iLocal_2418)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_2486[iLocal_2471], 432954108) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_2486[iLocal_2471], 242628503) != 1)
					{
						func_856(iLocal_2486[iLocal_2471], &uLocal_2361);
					}
				}
			}
		}
		STREAMING::SET_INTERIOR_ACTIVE(iLocal_2604, 1);
		INTERIOR::_0x405DC2AEF6AF95B9(iLocal_2605);
		PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, 1);
		switch (iLocal_2467)
		{
			case 0:
				if (!bLocal_2405)
				{
					func_853();
				}
				if (!bLocal_2412 && !bLocal_2413)
				{
					func_852(SYSTEM::TIMERA());
				}
				if (!iLocal_2418)
				{
					if (!bLocal_2412 && !bLocal_2413)
					{
						if (!bLocal_2920 && !bLocal_2919)
						{
							if ((!func_655() && !GlobalFunc_5172(&Local_2380, 1)) && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								if (!func_654())
								{
									if (bLocal_2922)
									{
										SYSTEM::SETTIMERB(0);
									}
									else if (SYSTEM::TIMERB() > 3000)
									{
										if (iLocal_2917 > 3300000)
										{
											if (iLocal_2410 == 0)
											{
												func_656("JH_2MIL", 0, 0, 1);
												iLocal_2410 = 1;
											}
											else
											{
												func_656(Local_3369.f_147, 0, 0, 1);
												func_656(Local_3369.f_191, 0, 0, 1);
											}
										}
										else
										{
											switch (iLocal_5013)
											{
												case 0:
													if (!bLocal_2405)
													{
														if (func_114())
														{
															func_656("JH_STAYDWNGD", 0, 0, 1);
														}
														else if (func_113())
														{
															func_656("JH_CTRL", 0, 0, 1);
														}
														else if (func_112())
														{
															GlobalFunc_5653(iLocal_2486[1], "JH_CJAA", "NORM", 24);
														}
													}
													iLocal_5013++;
													break;
												
												case 1:
													func_656(Local_3369.f_147, 0, 0, 1);
													iLocal_5013++;
													break;
												
												case 2:
													if (GlobalFunc_697(GlobalFunc_5133(0, iLocal_2470)) == 2)
													{
														func_656("JH_MENCGP", 0, 0, 1);
													}
													else
													{
														func_656("JH_MENCN", 0, 0, 1);
													}
													func_656(Local_3369.f_191, 0, 0, 1);
													AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DROP_ITEMS", iLocal_2486[iLocal_2470], "JEWEL_HEIST_SOUNDS", 0, 0);
													iLocal_5013++;
													break;
												
												case 3:
													iLocal_5013 = 0;
													break;
											}
											func_656(Local_3369.f_191, 0, 0, 1);
										}
									}
								}
							}
						}
					}
				}
				func_846(iLocal_2486[iLocal_2470], &Local_2359);
				func_844();
				PAD::DISABLE_CONTROL_ACTION(0, 263, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 264, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
				if (bLocal_2411)
				{
					func_839();
				}
				else
				{
					func_838();
					func_837();
					if (MISC::ARE_STRINGS_EQUAL(Local_1758[iLocal_2460 /*30*/].f_27, Local_3369.f_278))
					{
						sLocal_2643 = Local_3369.f_39;
					}
					else if (MISC::ARE_STRINGS_EQUAL(Local_1758[iLocal_2460 /*30*/].f_27, Local_3369.f_279))
					{
						sLocal_2643 = Local_3369.f_37;
					}
					else if (MISC::ARE_STRINGS_EQUAL(Local_1758[iLocal_2460 /*30*/].f_27, Local_3369.f_280))
					{
						sLocal_2643 = Local_3369.f_42;
					}
					else if (MISC::ARE_STRINGS_EQUAL(Local_1758[iLocal_2460 /*30*/].f_27, Local_3369.f_281))
					{
						sLocal_2643 = Local_3369.f_44;
					}
					if (ENTITY::IS_ENTITY_AT_COORD(func_93(0), PED::GET_ANIM_INITIAL_OFFSET_POSITION(Local_3369.f_35, sLocal_2643, Local_1758[iLocal_2460 /*30*/].f_3, Local_1758[iLocal_2460 /*30*/].f_6, 0, 2), 0.75f, 0.75f, 1f, false, 1, 0))
					{
						PAD::DISABLE_CONTROL_ACTION(0, 45, 1);
					}
					if ((((((ENTITY::IS_ENTITY_AT_COORD(func_93(0), PED::GET_ANIM_INITIAL_OFFSET_POSITION(Local_3369.f_35, sLocal_2643, Local_1758[iLocal_2460 /*30*/].f_3, Local_1758[iLocal_2460 /*30*/].f_6, 0, 2), 0.75f, 0.75f, 1f, false, 1, 0) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_2486[iLocal_2470], PED::GET_ANIM_INITIAL_OFFSET_POSITION(Local_3369.f_35, sLocal_2643, Local_1758[iLocal_2460 /*30*/].f_3, Local_1758[iLocal_2460 /*30*/].f_6, 0, 2), 0.75f, 0.75f, 1f, false, 1, 0)) && !Local_1758[iLocal_2460 /*30*/].f_24) && !PED::IS_PED_IN_ANY_VEHICLE(func_93(0), 0)) && PED::IS_PED_HEADING_TOWARDS_POSITION(func_93(0), Local_1758[iLocal_2460 /*30*/], 135f)) && !GlobalFunc_116(0)) && CAM::IS_GAMEPLAY_CAM_RENDERING())
					{
						if (!iLocal_2420)
						{
							if (iLocal_2465 < 2)
							{
								if (PAD::_IS_USING_KEYBOARD(0))
								{
									if (!GlobalFunc_74("H_HELPSTEAL_KM"))
									{
										GlobalFunc_1("H_HELPSTEAL_KM");
										func_109(0);
										iLocal_2420 = 1;
									}
								}
								else if (!GlobalFunc_74(Local_3369.f_238))
								{
									GlobalFunc_1(Local_3369.f_238);
									func_109(0);
									iLocal_2420 = 1;
								}
							}
						}
						else
						{
							iLocal_2420 = 0;
						}
						if ((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 225) && !PAD::_IS_USING_KEYBOARD(0)) || ((PAD::IS_CONTROL_JUST_PRESSED(0, 51) && !PAD::IS_CONTROL_JUST_PRESSED(0, 25)) && PAD::_IS_USING_KEYBOARD(0)))
						{
							uLocal_2640 = OBJECT::GET_RAYFIRE_MAP_OBJECT(Local_1758[iLocal_2460 /*30*/], 1f, Local_1758[iLocal_2460 /*30*/].f_27);
							if (Local_1758[iLocal_2460 /*30*/].f_28 == 0)
							{
								OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_2640, 4);
							}
							iLocal_2465++;
							func_835(&(Local_1758[iLocal_2460 /*30*/]));
						}
					}
					else if (func_834(Local_3369.f_238) || (PAD::_IS_USING_KEYBOARD(0) && func_834("H_HELPSTEAL_KM")))
					{
						func_611(0, 0, 1);
					}
					if (!iLocal_2418)
					{
						if ((!func_805(iLocal_2486[iLocal_2470], -2017877118) && !bLocal_2411) && (iLocal_1509 > 100 || iLocal_1509 == 0))
						{
							if (SYSTEM::TIMERA() > (iLocal_2472 - 7000) || Global_89962.f_12[2] > 16)
							{
								STREAMING::REQUEST_MODEL(joaat("ig_trafficwarden"));
							}
							if (SYSTEM::TIMERA() > iLocal_2472 || Global_89962.f_12[2] == 20)
							{
								if (STREAMING::HAS_MODEL_LOADED(joaat("ig_trafficwarden")) && func_833(PLAYER::PLAYER_PED_ID()))
								{
									GlobalFunc_571(0, -1);
									if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1513))
									{
										iLocal_1513 = PED::CREATE_PED(26, joaat("ig_trafficwarden"), -629.4808f, -242.2689f, 37.2096f, 45.1069f, 1, 1);
									}
									PED::SET_PED_LOD_MULTIPLIER(iLocal_1513, 1.5f);
									PED::_0xA9B61A329BFDCBEA(iLocal_1513, 0);
									AUDIO::STOP_PED_SPEAKING(iLocal_1513, 1);
									fVar0 = 170.4931f;
									TASK::OPEN_SEQUENCE_TASK(&uLocal_2609);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -633.0743f, -240.248f, 37.0325f, 1f, 40000, 0.5f, 0, fVar0);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, func_93(1), 0);
									TASK::TASK_PLAY_ANIM(0, Local_3369.f_35, Local_3369.f_31, 8f, -8f, -1, 0, 0, 0, 0, 0);
									TASK::TASK_PLAY_ANIM(0, Local_3369.f_35, Local_3369.f_32, 8f, -8f, -1, 0, 0, 0, 0, 0);
									TASK::TASK_PLAY_ANIM(0, Local_3369.f_35, Local_3369.f_34, 8f, -8f, -1, 0, 0, 0, 0, 0);
									TASK::TASK_PLAY_ANIM(0, Local_3369.f_35, "warden", 8f, -8f, -1, 0, 0, 0, 0, 0);
									TASK::TASK_PLAY_ANIM(0, Local_3369.f_35, Local_3369.f_33, 8f, -8f, -1, 0, 0, 0, 0, 0);
									TASK::TASK_PLAY_ANIM(0, Local_3369.f_35, Local_3369.f_34, 8f, -8f, -1, 0, 0, 0, 0, 0);
									TASK::TASK_PLAY_ANIM(0, Local_3369.f_35, "warden", 8f, -8f, -1, 0, 0, 0, 0, 0);
									TASK::TASK_PLAY_ANIM(0, Local_3369.f_35, Local_3369.f_32, 8f, -8f, -1, 0, 0, 0, 0, 0);
									TASK::TASK_PLAY_ANIM(0, Local_3369.f_35, Local_3369.f_34, 8f, -8f, -1, 0, 0, 0, 0, 0);
									TASK::TASK_PLAY_ANIM(0, Local_3369.f_35, "warden", 8f, -8f, -1, 0, 0, 0, 0, 0);
									TASK::TASK_PLAY_ANIM(0, Local_3369.f_35, Local_3369.f_33, 8f, -8f, -1, 0, 0, 0, 0, 0);
									TASK::TASK_PLAY_ANIM(0, Local_3369.f_35, Local_3369.f_31, 8f, -8f, -1, 17, 0, 0, 0, 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_2609);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_1513, uLocal_2609);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_2609);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1513, 1);
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_1513, 1862763509);
									PED::SET_PED_COMPONENT_VARIATION(iLocal_1513, 0, 0, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(iLocal_1513, 3, 0, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(iLocal_1513, 4, 0, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(iLocal_1513, 8, 0, 0, 0);
									PED::SET_PED_PROP_INDEX(iLocal_1513, 0, 0, 0, false);
									if (iLocal_2417)
									{
										func_831(0, 0f);
										iLocal_2417 = 0;
									}
									VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2532[0], 0);
									VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2532[1], 0);
									func_811(Local_3369);
									func_610();
									func_656("JH_CLEAR", 0, 0, 1);
									if (iLocal_2463 > 0 && iLocal_2463 < 3300000)
									{
										func_656("JH_SCORE_BAD", 0, 0, 1);
									}
									else if (iLocal_2463 > 3300000 && iLocal_2463 < 5000000)
									{
										func_656("JH_SCORE_MED", 0, 0, 1);
									}
									else if (iLocal_2463 > 5000000)
									{
										func_656("JH_SCORE_GID", 0, 0, 1);
									}
									RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
									func_656(Local_3369.f_221, 1, 0, 1);
									PED::SET_PED_INTO_VEHICLE(func_93(1), iLocal_2532[2], -1);
									if (!ENTITY::IS_ENTITY_ATTACHED(func_93(0)))
									{
										ENTITY::FREEZE_ENTITY_POSITION(func_93(0), false);
									}
									if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_2486[0]))
									{
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_2486[0], false);
									}
									TASK::TASK_LOOK_AT_ENTITY(iLocal_2486[iLocal_2470], func_93(0), 60000, 2048, 2);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_2486[iLocal_2471], func_93(0), 60000, 2048, 2);
									TASK::TASK_LOOK_AT_ENTITY(func_93(1), func_93(0), 60000, 2048, 2);
									func_798(Local_3369.f_17);
									iLocal_2418 = 1;
								}
							}
						}
					}
					else
					{
						if ((!PED::IS_PED_IN_VEHICLE(iLocal_2486[0], iLocal_2532[0], 1) && !PED::IS_PED_IN_VEHICLE(func_93(1), iLocal_2532[0], 1)) && !TASK::GET_SCRIPT_TASK_STATUS(iLocal_2486[0], -1794415470) == 1)
						{
							if (iLocal_5020 == 0)
							{
								TASK::TASK_ENTER_VEHICLE(iLocal_2486[0], iLocal_2532[0], 20000, -1, 2f, 1, 0);
								iLocal_5020 = 1;
							}
						}
						if (!PED::IS_PED_IN_VEHICLE(iLocal_2486[1], iLocal_2532[1], 0) && !func_805(iLocal_2486[1], -1794415470))
						{
							if (!bLocal_2405)
							{
								if (GlobalFunc_156(iLocal_2486[0], iLocal_2532[0], 1) < 9f)
								{
									TASK::TASK_ENTER_VEHICLE(iLocal_2486[1], iLocal_2532[1], 20000, -1, 2f, 131072, 0);
								}
							}
							else
							{
								TASK::TASK_ENTER_VEHICLE(iLocal_2486[1], iLocal_2532[1], 20000, -1, 2f, 131072, 0);
							}
						}
					}
					if (iLocal_2463 >= 3300000 || iLocal_2418)
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_1513))
						{
							Local_5014 = { ENTITY::GET_ENTITY_COORDS(iLocal_1513, 1) };
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_93(0), -630.1519f, -238.299f, 37.06799f, -631.6417f, -236.0442f, 40.44416f, 1f, 0, 1, 0) || (iLocal_2463 >= 3300000 && MISC::IS_BULLET_IN_AREA(Local_5014, 3f, 1)))
						{
							iLocal_2467++;
						}
					}
					if (Global_89962.f_12[2] == 20 && iLocal_5017 == 0)
					{
						if (GlobalFunc_745())
						{
							func_604("JH_SMASHALL", 1, 0, 1, 7, 0, 0);
						}
						else
						{
							func_604("JH_SMASHALL", 1, 0, 1, 7, 0, 0);
						}
						iLocal_5017 = 1;
					}
					if (iLocal_2418 && iLocal_5017 == 0)
					{
						func_604("JH_MBYE", 1, 0, 1, 7, 0, 0);
						iLocal_5017 = 1;
					}
					if (iLocal_2419 == 0 && SYSTEM::TIMERA() > iLocal_2472 + 3500)
					{
						if (AUDIO::PREPARE_ALARM("JEWEL_STORE_HEIST_ALARMS"))
						{
							AUDIO::START_ALARM("JEWEL_STORE_HEIST_ALARMS", 0);
							iLocal_2419 = 1;
						}
					}
					if (iLocal_5018 == 0 && SYSTEM::TIMERA() > iLocal_2472 + 5000)
					{
						AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_JSH_2A_03", 0f);
						iLocal_5018 = 1;
					}
					if (!Global_86789)
					{
						if (SYSTEM::TIMERA() > iLocal_2472 + 15000)
						{
							switch (GlobalFunc_697(GlobalFunc_5133(0, 2)))
							{
								case 2:
									func_656("JH_HCKACOPS", 0, 0, 1);
									break;
								
								case 1:
									func_656("JH_HCKBCOPS", 0, 0, 1);
									break;
								
								case 0:
									func_656("JH_LATECOPS2", 0, 0, 1);
									break;
							}
							Global_86789 = 1;
						}
					}
					if (SYSTEM::TIMERA() > iLocal_2472 + 30000 || iLocal_2429 == 1)
					{
						switch (GlobalFunc_697(GlobalFunc_5133(0, 2)))
						{
							case 2:
								func_604("JH_HCKAOUT", 1, 1, 1, 7, 0, 0);
								break;
							
							case 1:
								func_604("JH_HCKBOUT", 1, 1, 1, 7, 0, 0);
								break;
							
							case 0:
								func_604("JH_HCKCCOPS", 1, 1, 1, 7, 0, 0);
								func_656("JH_LATECOPS3", 0, 0, 1);
								break;
						}
						if (!PED::IS_PED_INJURED(iLocal_1513))
						{
							TASK::CLEAR_PED_TASKS(iLocal_1513);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_1513, -609.3799f, -286.0605f, 37.7909f, 1f, 20000, 0.25f, 0, 40000f);
						}
						iLocal_2429 = 1;
						iLocal_2467 = 2;
					}
				}
				break;
		}
		if (iLocal_2467 >= 1)
		{
			AUDIO::STOP_AUDIO_SCENE("JSH_2B_GRAB_LOOT_MAIN");
			GlobalFunc_571(0, -1);
			func_783(6);
			func_783(7);
			if (bLocal_2405)
			{
				func_783(10);
			}
			func_783(11);
			PATHFIND::DISABLE_NAVMESH_IN_AREA(-623.1895f, -231.5713f, 36.8759f, -620.66f, -229.683f, 38.0054f, 0);
			iLocal_2466 = 0;
			while (iLocal_2466 <= 19)
			{
				if (HUD::DOES_BLIP_EXIST(Local_1758[iLocal_2466 /*30*/].f_23))
				{
					HUD::REMOVE_BLIP(&(Local_1758[iLocal_2466 /*30*/].f_23));
				}
				iLocal_2466++;
			}
			if (iLocal_2429 == 1)
			{
				iLocal_2406 = 0;
				iLocal_2467 = 0;
				func_611(1, 1, 1);
				func_610();
				iLocal_2379 = 16;
				return 0;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_2359.f_1))
			{
				OBJECT::DELETE_OBJECT(&(Local_2359.f_1));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2594))
			{
				OBJECT::DELETE_OBJECT(&iLocal_2594);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2597))
			{
				OBJECT::DELETE_OBJECT(&iLocal_2597);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_2619))
			{
				HUD::REMOVE_BLIP(&uLocal_2619);
			}
			iLocal_2466 = 0;
			while (iLocal_2466 <= 4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2492[iLocal_2466]))
				{
					if (!PED::IS_PED_INJURED(iLocal_2492[iLocal_2466]))
					{
						PED::SET_PED_KEEP_TASK(iLocal_2492[iLocal_2466], 1);
					}
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_2492[iLocal_2466]));
				}
				iLocal_2466++;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2504))
			{
				if (!PED::IS_PED_INJURED(iLocal_2504))
				{
					PED::SET_PED_KEEP_TASK(iLocal_2504, 1);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_2504);
			}
			func_811(Local_3369.f_18);
			func_811(Local_3369.f_19);
			func_811(Local_3369.f_20);
			func_811(Local_3369.f_21);
			if (INTERIOR::IS_INTERIOR_READY(iLocal_2604))
			{
				INTERIOR::UNPIN_INTERIOR(iLocal_2604);
			}
			STREAMING::SET_INTERIOR_ACTIVE(iLocal_2604, 0);
			INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
			if (iLocal_2417)
			{
				func_831(0, 0f);
				iLocal_2417 = 0;
			}
			WEAPON::REMOVE_WEAPON_ASSET(iLocal_1464);
			func_611(1, 1, 1);
			func_610();
			iLocal_2424 = 0;
			iLocal_2406 = 0;
			iLocal_2467 = 0;
			if (iLocal_2463 < 3300000)
			{
				iLocal_2428 = 1;
			}
			return 1;
		}
	}
	return 0;
}

void func_831(int iParam0, float fParam1)//Position - 0x77FA4
{
	OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("p_jewel_door_r1"), -630.39f, -238.51f, 38.96f, iParam0, fParam1, 0);
	OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("p_jewel_door_l"), -632.05f, -236.19f, 38.96f, iParam0, -fParam1, 0);
}


bool func_833(int iParam0)//Position - 0x78082
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -617.0469f, -227.0004f, 35.40814f, -631.6362f, -237.8731f, 42.07837f, 17.25f, 0, 1, 0);
}

int func_834(char* sParam0)//Position - 0x780B6
{
	int iVar0;
	
	if (bLocal_2919)
	{
		iVar0 = MISC::GET_HASH_KEY(sParam0);
		if (iVar0 == iLocal_2923)
		{
			return 1;
		}
	}
	if (bLocal_2920)
	{
		iVar0 = MISC::GET_HASH_KEY(sParam0);
		if (iVar0 == iLocal_2924)
		{
			return 1;
		}
	}
	if (bLocal_2921)
	{
		iVar0 = MISC::GET_HASH_KEY(sParam0);
		if (iVar0 == iLocal_2925)
		{
			return 1;
		}
	}
	return 0;
}

void func_835(var uParam0)//Position - 0x7810D
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_23))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_23));
	}
	uParam0->f_24 = 1;
	bLocal_2411 = true;
	iLocal_2468 = 0;
}


void func_837()//Position - 0x7814B
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(func_93(0), 1) };
	iLocal_2466 = 0;
	while (iLocal_2466 <= 19)
	{
		if (!Local_1758[iLocal_2466 /*30*/].f_24)
		{
			if (SYSTEM::VDIST2(Local_1758[iLocal_2466 /*30*/], Var0) < SYSTEM::VDIST2(Local_1758[iLocal_2460 /*30*/], Var0))
			{
				if (iLocal_2460 != iLocal_2466)
				{
					iLocal_2460 = iLocal_2466;
				}
			}
		}
		iLocal_2466++;
	}
}

void func_838()//Position - 0x781BD
{
	iLocal_2466 = 0;
	while (iLocal_2466 <= 19)
	{
		if (!HUD::DOES_BLIP_EXIST(Local_1758[iLocal_2466 /*30*/].f_23))
		{
			if (!Local_1758[iLocal_2466 /*30*/].f_24)
			{
				Local_1758[iLocal_2466 /*30*/].f_23 = GlobalFunc_5104(Local_1758[iLocal_2466 /*30*/], 0);
				HUD::SET_BLIP_SCALE(Local_1758[iLocal_2466 /*30*/].f_23, 0.5f);
				HUD::SET_BLIP_COLOUR(Local_1758[iLocal_2466 /*30*/].f_23, 2);
			}
		}
		iLocal_2466++;
	}
}

void func_839()//Position - 0x78237
{
	struct<3> Var0;
	var uVar3;
	float fVar6;
	bool bVar7;
	struct<16> Var8;
	float fVar24;
	
	fVar6 = -1f;
	bVar7 = false;
	fVar24 = 0f;
	PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
	switch (iLocal_2468)
	{
		case 0:
			if (MISC::ARE_STRINGS_EQUAL(Local_1758[iLocal_2460 /*30*/].f_27, Local_3369.f_278))
			{
				sLocal_2643 = Local_3369.f_39;
				Var8 = { func_843(sLocal_2643) };
				sLocal_2643 = GlobalFunc_217(&Var8);
				sLocal_2644 = Local_3369.f_40;
				iLocal_2645 = Local_3369.f_20;
				fLocal_2646 = 0.2f;
				fLocal_2647 = 0.4f;
				fLocal_2648 = 0.71f;
				fLocal_2649 = -1f;
				fLocal_2650 = -1f;
				if (Local_1758[iLocal_2460 /*30*/].f_28 > 0)
				{
					fVar24 = 0.49f;
				}
				else
				{
					fVar24 = 0f;
				}
				if (iLocal_2460 == 0)
				{
					sLocal_2644 = Local_3369.f_36;
				}
			}
			else if (MISC::ARE_STRINGS_EQUAL(Local_1758[iLocal_2460 /*30*/].f_27, Local_3369.f_279))
			{
				sLocal_2643 = Local_3369.f_37;
				Var8 = { func_843(sLocal_2643) };
				sLocal_2643 = GlobalFunc_217(&Var8);
				sLocal_2644 = Local_3369.f_38;
				if (iLocal_2460 == 4)
				{
					sLocal_2644 = Local_3369.f_43;
				}
				iLocal_2645 = Local_3369.f_21;
				fLocal_2646 = 0.143f;
				fLocal_2647 = 0.625f;
				fLocal_2648 = 0.786f;
				fLocal_2649 = -1f;
				fLocal_2650 = -1f;
				if (Local_1758[iLocal_2460 /*30*/].f_28 > 0)
				{
					fVar24 = 0.319f;
				}
				else
				{
					fVar24 = 0f;
				}
			}
			else if (MISC::ARE_STRINGS_EQUAL(Local_1758[iLocal_2460 /*30*/].f_27, Local_3369.f_280))
			{
				sLocal_2643 = Local_3369.f_42;
				Var8 = { func_843(sLocal_2643) };
				sLocal_2643 = GlobalFunc_217(&Var8);
				sLocal_2644 = Local_3369.f_43;
				iLocal_2645 = Local_3369.f_19;
				fLocal_2646 = 0.168f;
				fLocal_2647 = 0.483f;
				fLocal_2648 = 0.753f;
				fLocal_2649 = -1f;
				fLocal_2650 = -1f;
				if (Local_1758[iLocal_2460 /*30*/].f_28 > 0)
				{
					fVar24 = 0.269f;
				}
				else
				{
					fVar24 = 0f;
				}
				if (iLocal_2460 == 5)
				{
					sLocal_2644 = Local_3369.f_45;
				}
			}
			else if (MISC::ARE_STRINGS_EQUAL(Local_1758[iLocal_2460 /*30*/].f_27, Local_3369.f_281))
			{
				sLocal_2643 = Local_3369.f_44;
				Var8 = { func_843(sLocal_2643) };
				sLocal_2643 = GlobalFunc_217(&Var8);
				sLocal_2644 = Local_3369.f_45;
				iLocal_2645 = Local_3369.f_18;
				fLocal_2646 = 0.041f;
				fLocal_2647 = 0.415f;
				fLocal_2648 = 0.738f;
				fLocal_2649 = -1f;
				fLocal_2650 = -1f;
				if (Local_1758[iLocal_2460 /*30*/].f_28 > 0)
				{
					fVar24 = 0.25f;
				}
				else
				{
					fVar24 = 0f;
				}
			}
			WEAPON::SET_CURRENT_PED_WEAPON(func_93(0), iLocal_1464, 1);
			AUDIO::START_AUDIO_SCENE("JSH_2B_CABINET_SMASH");
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
			{
				func_643(0, 1, 0, 0, 0);
			}
			HUD::CLEAR_HELP(1);
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
			{
				uLocal_2613 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1758[iLocal_2460 /*30*/].f_3 - Vector(0f, 0f, 0f), Local_1758[iLocal_2460 /*30*/].f_6, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(func_93(0), uLocal_2613, Local_3369.f_35, sLocal_2643, 1000f, -4f, 1, 0, 1148846080, 0);
			}
			else
			{
				uLocal_2613 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1758[iLocal_2460 /*30*/].f_3 - Vector(0f, 0f, 0f), Local_1758[iLocal_2460 /*30*/].f_6, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(func_93(0), uLocal_2613, Local_3369.f_35, sLocal_2643, 2f, -4f, 1, 0, 1148846080, 0);
			}
			PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_2613, fVar24);
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
			{
				if (SYSTEM::VMAG(Local_1758[iLocal_2460 /*30*/].f_9) == 0f)
				{
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_3367, uLocal_2613, sLocal_2644, Local_3369.f_35);
					CAM::SET_CAM_ACTIVE(uLocal_3367, 1);
					CAM::_0x661B5C8654ADD825(uLocal_3367, 1);
				}
				else
				{
					CAM::SET_CAM_COORD(uLocal_3365, Local_1758[iLocal_2460 /*30*/].f_9);
					CAM::SET_CAM_ROT(uLocal_3365, Local_1758[iLocal_2460 /*30*/].f_12, 2);
					CAM::SET_CAM_FOV(uLocal_3365, Local_1758[iLocal_2460 /*30*/].f_21);
					CAM::SET_CAM_COORD(uLocal_3366, Local_1758[iLocal_2460 /*30*/].f_15);
					CAM::SET_CAM_ROT(uLocal_3366, Local_1758[iLocal_2460 /*30*/].f_18, 2);
					CAM::SET_CAM_FOV(uLocal_3366, Local_1758[iLocal_2460 /*30*/].f_22);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3366, uLocal_3365, 2500, 3, 3);
					CAM::_0x661B5C8654ADD825(uLocal_3366, 1);
				}
				CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
			}
			uLocal_4939 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(Local_1758[iLocal_2460 /*30*/], 2f, 2f, 2f, 0f, 0, 7);
			iLocal_2468++;
			break;
		
		case 1:
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
			{
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_2486[iLocal_2470], 1) < 1f)
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_2486[iLocal_2470], false);
				}
			}
			CAM::_0x5A43C76F7FC7BA5F();
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_2613))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_2613) > fLocal_2646)
				{
					if (Local_1758[iLocal_2460 /*30*/].f_28 == 0)
					{
						Local_2991[6 /*3*/] = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FROM_COORD(Local_2991[6 /*3*/], "SMASH_CABINET_PLAYER", Local_1758[iLocal_2460 /*30*/], "JEWEL_HEIST_SOUNDS", 0, 0, 0);
						if ((iLocal_2460 % 2) == 0)
						{
							RECORDING::_0x293220DA1B46CEBC(2f, 4f, 4);
						}
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_jewel_cab_smash", WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(PLAYER::PLAYER_PED_ID()), Local_1656, Local_1659, 1065353216, 0, 0, 0);
						if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Local_1758[iLocal_2460 /*30*/], 2f, joaat("p_int_jewel_mirror"), 0))
						{
							OBJECT::GET_COORDS_AND_ROTATION_OF_CLOSEST_OBJECT_OF_TYPE(Local_1758[iLocal_2460 /*30*/], 2f, joaat("p_int_jewel_mirror"), &Var0, &uVar3, 2);
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2594))
							{
								iLocal_2594 = OBJECT::CREATE_OBJECT(Local_3369.f_11, Var0, 1, 1, 0);
							}
							ENTITY::SET_ENTITY_VISIBLE(iLocal_2594, false);
							ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_2594, 0, 0f, 0f, 0.1f, Local_2656, 0, 1, 1, 0, 0, 1);
						}
					}
					iLocal_2468++;
				}
			}
			break;
		
		case 2:
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
			{
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_2486[iLocal_2470], 1) < 1f)
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_2486[iLocal_2470], false);
				}
			}
			CAM::_0x5A43C76F7FC7BA5F();
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_2613))
			{
				if (Local_1758[iLocal_2460 /*30*/].f_28 == 0)
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_2613) > fLocal_2646)
					{
						if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_2640) == 5)
						{
							OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_2640, 6);
						}
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2596))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_2613) > fLocal_2647)
					{
						iLocal_2596 = OBJECT::CREATE_OBJECT(iLocal_2645, Local_1758[iLocal_2460 /*30*/].f_3, 1, 1, 0);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_2596, func_93(0), PED::GET_PED_BONE_INDEX(func_93(0), 60309), Local_2656, Local_2656, 0, 0, 0, 0, 2, 1);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_2594))
						{
							OBJECT::DELETE_OBJECT(&iLocal_2594);
						}
						iLocal_2463 = (iLocal_2463 + Local_1758[iLocal_2460 /*30*/].f_26);
						if ((iLocal_2460 == 10 || iLocal_2460 == 11) || iLocal_2460 == 13)
						{
							iLocal_73 = 1;
						}
						Global_89962.f_12[2]++;
						iLocal_2468++;
					}
				}
			}
			break;
		
		case 3:
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
			{
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_2486[iLocal_2470], 1) < 1f)
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_2486[iLocal_2470], false);
				}
			}
			CAM::_0x5A43C76F7FC7BA5F();
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_2613))
			{
				if (fLocal_2649 < 0f)
				{
					iLocal_2468++;
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_2596))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_2613) > fLocal_2648)
					{
						OBJECT::DELETE_OBJECT(&iLocal_2596);
					}
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_2613) > fLocal_2649)
				{
					iLocal_2596 = OBJECT::CREATE_OBJECT(iLocal_2645, Local_1758[iLocal_2460 /*30*/].f_3, 1, 1, 0);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_2596, func_93(0), PED::GET_PED_BONE_INDEX(func_93(0), 60309), Local_2656, Local_2656, 0, 0, 0, 0, 2, 1);
					iLocal_2468++;
				}
			}
			break;
		
		case 4:
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
			{
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_2486[iLocal_2470], 1) < 1f)
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_2486[iLocal_2470], false);
				}
			}
			CAM::_0x5A43C76F7FC7BA5F();
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_2613))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2596))
				{
					if (fLocal_2649 < 0f)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_2613) > fLocal_2648)
						{
							OBJECT::DELETE_OBJECT(&iLocal_2596);
						}
					}
					else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_2613) > fLocal_2650)
					{
						OBJECT::DELETE_OBJECT(&iLocal_2596);
					}
				}
				fVar6 = PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_2613);
				if (fVar6 > 0.92f)
				{
					bVar7 = true;
				}
				if (iLocal_2460 == 0)
				{
					if (fVar6 > 0.8f)
					{
						bVar7 = true;
					}
				}
				if (func_841(uLocal_2613) || (ENTITY::HAS_ANIM_EVENT_FIRED(func_93(0), MISC::GET_HASH_KEY("early_out")) && (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 30) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 31))))
				{
					bVar7 = true;
				}
			}
			else
			{
				bVar7 = true;
			}
			if (bVar7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2596))
				{
					OBJECT::DELETE_OBJECT(&iLocal_2596);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(func_93(0), iLocal_1464, 1);
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(func_93(0), 0);
				PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(uLocal_4939);
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
				{
					func_599(0, 1, 1500, 1, 0);
				}
				TASK::CLEAR_PED_TASKS(func_93(0));
				ENTITY::SET_ENTITY_VISIBLE(iLocal_2486[iLocal_2470], true);
				if (fVar6 > 0f)
				{
				}
				func_840(func_93(0), 0, 0, 0, 0, 0, 0, 0);
				AUDIO::STOP_AUDIO_SCENE("JSH_2B_CABINET_SMASH");
				bLocal_2411 = false;
			}
			break;
	}
}

void func_840(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x78B02
{
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, 0, 0);
	if (iParam1 != 0)
	{
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam1, 0, 0);
		if (iParam2 != 0)
		{
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam2, 0, 0);
			if (iParam3 != 0)
			{
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam3, 0, 0);
				if (iParam4 != 0)
				{
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam4, 0, 0);
					if (iParam5 != 0)
					{
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam5, 0, 0);
						if (iParam6 != 0)
						{
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam6, 0, 0);
							if (iParam7 != 0)
							{
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam7, 0, 0);
							}
						}
					}
				}
			}
		}
	}
}

int func_841(var uParam0)//Position - 0x78B74
{
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0))
	{
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam0) >= 1f)
		{
			return 1;
		}
	}
	return 0;
}


struct<16> func_843(char* sParam0)//Position - 0x78B9F
{
	struct<16> Var0;
	struct<16> Var16;
	
	StringCopy(&Var0, "FP_", 64);
	StringCopy(&Var16, sParam0, 64);
	if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
	{
		StringConCat(&Var0, &Var16, 64);
		return Var0;
	}
	return Var16;
}

void func_844()//Position - 0x78BD5
{
	struct<3> Var0;
	var uVar3;
	
	iLocal_2466 = 0;
	while (iLocal_2466 <= 19)
	{
		if (!Local_1758[iLocal_2466 /*30*/].f_24)
		{
			switch (Local_1758[iLocal_2466 /*30*/].f_28)
			{
				case 0:
					if (MISC::IS_BULLET_IN_AREA(Local_1758[iLocal_2466 /*30*/], 0.8f, 1))
					{
						Local_1758[iLocal_2466 /*30*/].f_29 = OBJECT::GET_RAYFIRE_MAP_OBJECT(Local_1758[iLocal_2466 /*30*/], 1f, Local_1758[iLocal_2466 /*30*/].f_27);
						OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_1758[iLocal_2466 /*30*/].f_29, 4);
						Local_1758[iLocal_2466 /*30*/].f_28++;
					}
					break;
				
				case 1:
					if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_1758[iLocal_2466 /*30*/].f_29) == 5)
					{
						OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_1758[iLocal_2466 /*30*/].f_29, 6);
						func_845(6, Local_3369.f_249, Local_1758[iLocal_2466 /*30*/], 0);
						if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Local_1758[iLocal_2466 /*30*/], 2f, joaat("p_int_jewel_mirror"), 0))
						{
							OBJECT::GET_COORDS_AND_ROTATION_OF_CLOSEST_OBJECT_OF_TYPE(Local_1758[iLocal_2466 /*30*/], 2f, joaat("p_int_jewel_mirror"), &Var0, &uVar3, 2);
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2594))
							{
								iLocal_2594 = OBJECT::CREATE_OBJECT(Local_3369.f_11, Var0, 1, 1, 0);
							}
							ENTITY::SET_ENTITY_VISIBLE(iLocal_2594, false);
							ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_2594, 0, 0f, 0f, 0.1f, Local_2656, 0, 1, 1, 0, 0, 1);
						}
						Local_1758[iLocal_2466 /*30*/].f_28++;
					}
					break;
				
				case 2:
					break;
				}
		}
		iLocal_2466++;
	}
}

void func_845(int iParam0, char* sParam1, struct<3> Param2, bool bParam5)//Position - 0x78D49
{
	if (!Local_2991[iParam0 /*3*/].f_1)
	{
		if (!Local_2991[iParam0 /*3*/].f_2)
		{
			Local_2991[iParam0 /*3*/] = AUDIO::GET_SOUND_ID();
		}
		AUDIO::PLAY_SOUND_FROM_COORD(Local_2991[iParam0 /*3*/], uParam1, Param2, 0, 0, 0, 0);
		Local_2991[iParam0 /*3*/].f_2 = 1;
		if (bParam5)
		{
			Local_2991[iParam0 /*3*/].f_1 = 1;
		}
	}
}

void func_846(int iParam0, int iParam1)//Position - 0x78DA4
{
	struct<3> Var0;
	var uVar3;
	struct<3> Var6;
	float fVar9;
	
	fVar9 = 0f;
	switch (iLocal_1509)
	{
		case 0:
			if (Global_89962.f_12[2] >= 19 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_4940))
			{
				iLocal_1509 = 100;
			}
			else if ((bLocal_2413 == 1 || bLocal_2412 == 1) && iLocal_2418 == 0)
			{
				iLocal_1509 = 99;
			}
			else
			{
				if (iLocal_4941 == 0)
				{
					if (bLocal_2405)
					{
						iLocal_2461 = 8;
					}
					else
					{
						iLocal_2461 = 6;
					}
					iLocal_4941 = 1;
				}
				else
				{
					func_850();
				}
				if (iLocal_2461 != -1)
				{
					iLocal_1508 = iLocal_2461;
					if (Local_1758[iLocal_1508 /*30*/].f_28 == 0)
					{
						uLocal_2641 = OBJECT::GET_RAYFIRE_MAP_OBJECT(Local_1758[iLocal_1508 /*30*/], 1f, Local_1758[iLocal_1508 /*30*/].f_27);
						OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_2641, 4);
					}
					iLocal_1509 = 1;
				}
			}
			break;
		
		case 1:
			if (iLocal_1508 == iLocal_2460)
			{
				TASK::CLEAR_PED_TASKS(iParam0);
				iLocal_1509 = 0;
			}
			else if (func_847(iParam0, Local_1758[iLocal_1508 /*30*/].f_3, GlobalFunc_830(Local_1758[iLocal_1508 /*30*/].f_3, Local_1758[iLocal_1508 /*30*/]), 2f, 0.5f, 10f))
			{
				if (Local_1758[iLocal_1508 /*30*/].f_24 == 1)
				{
				}
				if (MISC::ARE_STRINGS_EQUAL(Local_1758[iLocal_1508 /*30*/].f_27, Local_3369.f_278))
				{
					sLocal_2651 = Local_3369.f_41;
					iLocal_2652 = Local_3369.f_19;
					fLocal_2653 = 0.204f;
					fLocal_2654 = 0.3f;
					fLocal_2655 = 0.691f;
					if (Local_1758[iLocal_1508 /*30*/].f_28 > 0)
					{
						fVar9 = 0.49f;
					}
					else
					{
						fVar9 = 0f;
					}
				}
				else if (MISC::ARE_STRINGS_EQUAL(Local_1758[iLocal_1508 /*30*/].f_27, Local_3369.f_279))
				{
					sLocal_2651 = Local_3369.f_37;
					iLocal_2652 = Local_3369.f_21;
					fLocal_2653 = 0.143f;
					fLocal_2654 = 0.625f;
					fLocal_2655 = 0.786f;
					if (Local_1758[iLocal_1508 /*30*/].f_28 > 0)
					{
						fVar9 = 0.319f;
					}
					else
					{
						fVar9 = 0f;
					}
				}
				else if (MISC::ARE_STRINGS_EQUAL(Local_1758[iLocal_1508 /*30*/].f_27, Local_3369.f_280))
				{
					sLocal_2651 = Local_3369.f_42;
					iLocal_2652 = Local_3369.f_19;
					fLocal_2653 = 0.168f;
					fLocal_2654 = 0.483f;
					fLocal_2655 = 0.753f;
					if (Local_1758[iLocal_1508 /*30*/].f_28 > 0)
					{
						fVar9 = 0.269f;
					}
					else
					{
						fVar9 = 0f;
					}
				}
				else if (MISC::ARE_STRINGS_EQUAL(Local_1758[iLocal_1508 /*30*/].f_27, Local_3369.f_281))
				{
					sLocal_2651 = Local_3369.f_44;
					iLocal_2652 = Local_3369.f_18;
					fLocal_2653 = 0.051f;
					fLocal_2654 = 0.415f;
					fLocal_2655 = 0.738f;
					if (Local_1758[iLocal_1508 /*30*/].f_28 > 0)
					{
						fVar9 = 0.25f;
					}
					else
					{
						fVar9 = 0f;
					}
				}
				WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iLocal_1464, 1);
				if (HUD::DOES_BLIP_EXIST(Local_1758[iLocal_1508 /*30*/].f_23))
				{
					HUD::REMOVE_BLIP(&(Local_1758[iLocal_1508 /*30*/].f_23));
				}
				uLocal_4940 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1758[iLocal_1508 /*30*/].f_3, Local_1758[iLocal_1508 /*30*/].f_6, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(iParam0, uLocal_4940, Local_3369.f_35, sLocal_2651, 4f, -4f, 1, 0, 4f, 0);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_4940, fVar9);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_4940, 0);
				Local_1758[iLocal_1508 /*30*/].f_24 = 1;
				Global_89962.f_12[2]++;
				iLocal_1509++;
			}
			break;
		
		case 2:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_4940))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_1))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_4940) > fLocal_2654 && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_4940) < fLocal_2655)
					{
						iParam1->f_1 = OBJECT::CREATE_OBJECT(iLocal_2652, Local_1758[iLocal_1508 /*30*/].f_3, 1, 1, 0);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iParam1->f_1, iParam0, PED::GET_PED_BONE_INDEX(iParam0, 60309), Local_2656, Local_2656, 0, 0, 0, 0, 2, 1);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_2594))
						{
							OBJECT::DELETE_OBJECT(&iLocal_2594);
						}
					}
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_4940) > fLocal_2655)
				{
					OBJECT::DELETE_OBJECT(&(iParam1->f_1));
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_4940) > fLocal_2653)
				{
					if (Local_1758[iLocal_1508 /*30*/].f_28 == 0)
					{
						if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_2641) == 5)
						{
							OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_2641, 6);
							Local_2991[7 /*3*/] = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FROM_COORD(Local_2991[7 /*3*/], "SMASH_CABINET_NPC", Local_1758[iLocal_1508 /*30*/], "JEWEL_HEIST_SOUNDS", 0, 0, 0);
							if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Local_1758[iLocal_1508 /*30*/], 2f, joaat("p_int_jewel_mirror"), 0))
							{
								OBJECT::GET_COORDS_AND_ROTATION_OF_CLOSEST_OBJECT_OF_TYPE(Local_1758[iLocal_1508 /*30*/], 2f, joaat("p_int_jewel_mirror"), &Var0, &uVar3, 2);
								if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2594))
								{
									iLocal_2594 = OBJECT::CREATE_OBJECT(Local_3369.f_11, Var0, 1, 1, 0);
								}
								ENTITY::SET_ENTITY_VISIBLE(iLocal_2594, false);
								ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_2594, 0, 0f, 0f, 0.1f, Local_2656, 0, 1, 1, 0, 0, 1);
							}
							Var6 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(Local_3369.f_35, sLocal_2651, Local_1758[iLocal_1508 /*30*/].f_3, Local_1758[iLocal_1508 /*30*/].f_6, 0, 2) };
							MISC::GET_GROUND_Z_FOR_3D_COORD(Var6, &(Var6.f_2));
							AUDIO::RECORD_BROKEN_GLASS(Var6, 2f);
						}
					}
					iLocal_1509++;
				}
			}
			break;
		
		case 3:
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_4940) > 0.8f)
			{
				iLocal_2463 = (iLocal_2463 + SYSTEM::ROUND((IntToFloat(Local_1758[iLocal_1508 /*30*/].f_26) * fLocal_2473)));
				iLocal_1509++;
			}
			break;
		
		case 4:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_4940))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_4940) >= 1f)
				{
					iLocal_1509 = 0;
					TASK::CLEAR_PED_TASKS(iParam0);
				}
			}
			else
			{
				iLocal_1509 = 0;
			}
			break;
		
		case 99:
			if (bLocal_2413 == 0 && (iLocal_2469 == 99 || bLocal_2412 == 0))
			{
				iLocal_1509 = 0;
			}
			func_856(iParam0, &uLocal_2370);
			break;
		
		case 100:
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_4940))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_1))
				{
					OBJECT::DELETE_OBJECT(&(iParam1->f_1));
				}
				if ((!func_805(iParam0, 713668775) && !func_805(iParam0, -1794415470)) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, Local_1665, 2f, 20000, 0.25f, 0, 40000f);
					iLocal_1509++;
				}
			}
			break;
	}
}

int func_847(int iParam0, struct<3> Param1, float fParam4, float fParam5, float fParam6, float fParam7)//Position - 0x793B2
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0.x = fParam4;
	Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) + Vector(-1f, 0f, 0f) };
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!func_805(iParam0, 242628503))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_2609);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(0, Param1, fParam5, 40000, fParam6, 2, Var0, 1193033728);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_2609);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, uLocal_2609);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_2609);
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, Param1, 1) < fParam6 && GlobalFunc_2786(iParam0, fParam4, fParam7))
		{
			return 1;
		}
	}
	return 0;
}



void func_850()//Position - 0x7950B
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0f;
	fVar1 = 0f;
	iLocal_2461 = -1;
	iLocal_2466 = 0;
	while (iLocal_2466 <= 19)
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_1758[iLocal_2466 /*30*/], ENTITY::GET_ENTITY_COORDS(func_93(0), 1), 1);
		if (fVar0 > fVar1)
		{
			if (Local_1758[iLocal_2466 /*30*/].f_24 == 0)
			{
				uLocal_2642 = OBJECT::GET_RAYFIRE_MAP_OBJECT(Local_1758[iLocal_2466 /*30*/], 1f, Local_1758[iLocal_2466 /*30*/].f_27);
				if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_2642))
				{
					if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_2642) == 3)
					{
						if (iLocal_2461 == iLocal_2460)
						{
						}
						else
						{
							iLocal_2461 = iLocal_2466;
							fVar1 = fVar0;
						}
					}
				}
			}
		}
		iLocal_2466++;
	}
	if (func_851())
	{
	}
}

int func_851()//Position - 0x795B6
{
	iLocal_2466 = 0;
	while (iLocal_2466 <= 19)
	{
		if (!Local_1758[iLocal_2466 /*30*/].f_24)
		{
			return 0;
		}
		iLocal_2466++;
	}
	return 1;
}

void func_852(int iParam0)//Position - 0x795E8
{
	switch (GlobalFunc_5133(0, 2))
	{
		case 6:
			if (iParam0 > iLocal_2472)
			{
				if (!iLocal_2431[1])
				{
					func_656("JH_HCKA00", 0, 0, 1);
					iLocal_2431[1] = 1;
				}
			}
			else if (iParam0 > iLocal_2472)
			{
				if (!iLocal_2431[2])
				{
					func_656(Local_3369.f_132, 0, 0, 1);
					iLocal_2431[2] = 1;
				}
			}
			else if (iParam0 > (iLocal_2472 - 20000))
			{
				if (!iLocal_2431[3])
				{
					if (Global_89962.f_12[2] < 17)
					{
						func_656("JH_NOTIME", 0, 0, 1);
					}
					func_656(Local_3369.f_133, 0, 0, 1);
					if (iLocal_2463 < 3300000)
					{
						func_656("JH_NO2MIL", 0, 0, 1);
					}
					iLocal_2431[3] = 1;
				}
			}
			else if (iParam0 > (iLocal_2472 - 30000))
			{
				if (!iLocal_2431[4])
				{
					func_656(Local_3369.f_134, 0, 0, 1);
					iLocal_2431[4] = 1;
				}
			}
			else if (iParam0 > (iLocal_2472 - 40000))
			{
				if (!iLocal_2431[5])
				{
					func_656(Local_3369.f_135, 0, 0, 1);
					if (iLocal_2463 < 3300000)
					{
						func_656("JH_HALF", 0, 0, 1);
					}
					iLocal_2431[5] = 1;
				}
			}
			else if (iParam0 > (iLocal_2472 - 50000))
			{
				if (!iLocal_2431[6])
				{
					func_656(Local_3369.f_136, 0, 0, 1);
					iLocal_2431[6] = 1;
				}
			}
			else if (iParam0 > (iLocal_2472 - 60000))
			{
				if (!iLocal_2431[7])
				{
					func_656(Local_3369.f_137, 0, 0, 1);
					iLocal_2431[7] = 1;
				}
			}
			else if (iParam0 > (iLocal_2472 - 70000))
			{
				if (!iLocal_2431[8])
				{
					iLocal_2431[8] = 1;
				}
			}
			else if (iParam0 > (iLocal_2472 - 80000))
			{
				if (!iLocal_2431[9])
				{
					func_656("JH_LOTSTIME", 0, 0, 1);
					func_656("JH_HCKA80", 0, 0, 1);
					iLocal_2431[9] = 1;
				}
			}
			break;
		
		case 7:
			if (iParam0 > iLocal_2472)
			{
				if (!iLocal_2431[1])
				{
					func_656("JH_HCKB00", 0, 0, 1);
					iLocal_2431[1] = 1;
				}
			}
			else if (iParam0 > (iLocal_2472 - 10000))
			{
				if (!iLocal_2431[2])
				{
					func_656(Local_3369.f_138, 0, 0, 1);
					iLocal_2431[2] = 1;
				}
			}
			else if (iParam0 > (iLocal_2472 - 20000))
			{
				if (!iLocal_2431[3])
				{
					if (Global_89962.f_12[2] < 17)
					{
						func_656("JH_NOTIME", 0, 0, 1);
					}
					func_656(Local_3369.f_139, 0, 0, 1);
					if (iLocal_2463 < 3300000)
					{
						func_656("JH_NO2MIL", 0, 0, 1);
					}
					iLocal_2431[3] = 1;
				}
			}
			else if (iParam0 > (iLocal_2472 - 30000))
			{
				if (!iLocal_2431[4])
				{
					func_656(Local_3369.f_140, 0, 0, 1);
					if (iLocal_2463 < 3300000)
					{
						func_656("JH_HALF", 0, 0, 1);
					}
					iLocal_2431[4] = 1;
				}
			}
			else if (iParam0 > (iLocal_2472 - 40000))
			{
				if (!iLocal_2431[5])
				{
					func_656(Local_3369.f_141, 0, 0, 1);
					iLocal_2431[5] = 1;
				}
			}
			else if (iParam0 > (iLocal_2472 - 50000))
			{
				if (!iLocal_2431[6])
				{
					func_656("JH_HCKB50", 0, 0, 1);
					iLocal_2431[6] = 1;
				}
			}
			break;
		
		case 12:
			if (iParam0 > iLocal_2472 + 10000)
			{
				if (!iLocal_2431[0])
				{
					func_656("JH_HCKCC5", 0, 0, 1);
					iLocal_2431[0] = 1;
				}
			}
			else if (iParam0 > iLocal_2472 + 8000)
			{
				if (!iLocal_2431[1])
				{
					func_656("JH_HCKCC4", 0, 0, 1);
					iLocal_2431[1] = 1;
				}
			}
			else if (iParam0 > iLocal_2472 + 5000)
			{
				if (!iLocal_2431[2])
				{
					iLocal_2431[2] = 1;
				}
			}
			else if (iParam0 > (iLocal_2472 - 13000))
			{
				if (!iLocal_2431[3])
				{
					func_656("JH_HCKCCDWN", 0, 0, 1);
					iLocal_2431[3] = 1;
				}
			}
			else if (iParam0 > (iLocal_2472 - 19000))
			{
				if (!iLocal_2431[4])
				{
					if (Global_89962.f_12[2] < 17)
					{
						func_656("JH_NOTIME", 0, 0, 1);
					}
					iLocal_2431[4] = 1;
				}
			}
			else if (iParam0 > (iLocal_2472 - 32000))
			{
				if (!iLocal_2431[4])
				{
					func_656("JH_HCK30", 0, 0, 1);
					iLocal_2431[4] = 1;
				}
			}
			else if (iParam0 > (iLocal_2472 - 36500))
			{
				if (!iLocal_2431[5])
				{
					if (iLocal_2463 < 3300000)
					{
						func_656("JH_NO2MIL", 0, 0, 1);
					}
					iLocal_2431[5] = 1;
				}
			}
			else if (iParam0 > (iLocal_2472 - 50000))
			{
				if (!iLocal_2431[6])
				{
					func_656("JH_HCKCC3", 0, 0, 1);
					iLocal_2431[6] = 1;
				}
			}
			else if (iParam0 > (iLocal_2472 - 50000))
			{
				if (!iLocal_2431[7])
				{
					iLocal_2431[7] = 1;
				}
			}
			else if (iParam0 > (iLocal_2472 - 60000))
			{
				if (!iLocal_2431[8])
				{
					iLocal_2431[8] = 1;
				}
			}
			break;
	}
}

void func_853()//Position - 0x79ADB
{
	struct<3> Var0;
	
	if (!PED::IS_PED_INJURED(iLocal_2491))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_2491, PLAYER::PLAYER_PED_ID(), 1))
		{
			PED::APPLY_DAMAGE_TO_PED(iLocal_2491, 100, 1);
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_2504))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_2504, PLAYER::PLAYER_PED_ID(), 1))
		{
			PED::APPLY_DAMAGE_TO_PED(iLocal_2504, 100, 1);
		}
	}
	if (bLocal_2474)
	{
		if (!iLocal_2414)
		{
			if ((!iLocal_2425 && bLocal_2412 == 1) && iLocal_2469 <= 7)
			{
				if (!PED::IS_PED_INJURED(iLocal_2491))
				{
					if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_2491) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_2491))
					{
						HUD::CLEAR_PRINTS();
						func_610();
						GlobalFunc_4956();
						func_604("JH_DOWN", 1, 1, 1, 7, 0, 0);
						func_656("JH_BERATE", 0, 0, 1);
						RECORDING::_0x293220DA1B46CEBC(4f, 2f, 3);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_2491, 0, 0);
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_2B_SECURITY_ESCAPE"))
						{
							AUDIO::STOP_AUDIO_SCENE("JSH_2B_SECURITY_ESCAPE");
						}
						iLocal_2469 = 97;
						iLocal_2425 = 1;
					}
				}
				else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_2B_SECURITY_ESCAPE"))
				{
					AUDIO::STOP_AUDIO_SCENE("JSH_2B_SECURITY_ESCAPE");
				}
			}
			switch (iLocal_2469)
			{
				case 0:
					if (!PED::IS_PED_INJURED(iLocal_2491))
					{
						func_855(iLocal_2491);
						PED::SET_PED_CAN_BE_TARGETTED(iLocal_2491, 1);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_2491);
						TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME(iLocal_2491, "HeistJewel_SecurityGuard2B", -1629.104f, -231.389f, 38.064f, 0f, 0f, 158f, 2, 0f, 0, "", 4);
					}
					iLocal_2425 = 0;
					iLocal_2469++;
					break;
				
				case 1:
					if (((((((((MISC::GET_GAME_TIMER() - iLocal_4937) > 7000 && !bLocal_2411) && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && ((iLocal_1518 < 3 || iLocal_1518 == 11) || (ENTITY::DOES_ENTITY_EXIST(iLocal_2504) && PED::IS_PED_INJURED(iLocal_2504)))) && !PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_2491)) && !PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_2491)) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && CAM::IS_GAMEPLAY_CAM_RENDERING())
					{
						if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_RUN", 9, 0, 0, 0))
						{
							AUDIO::START_AUDIO_SCENE("JSH_2B_SECURITY_ESCAPE");
							GlobalFunc_4956();
							bLocal_2412 = true;
							iLocal_2469++;
						}
					}
					break;
				
				case 2:
					iLocal_2469++;
					break;
				
				case 3:
					if (!PED::IS_PED_INJURED(iLocal_2491))
					{
						if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iLocal_2491))
						{
							ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_2491, 1, 0);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_2491, false);
							func_831(0, 0f);
							func_854();
							uLocal_2635 = GlobalFunc_6797(iLocal_2491, 1, 145);
							func_643(1, 0, 0, 1, 1);
							func_613(-628.311f, -230.8964f, 37.33458f, 3.294292f, 0f, 145.1866f, 45f, -628.5309f, -231.2128f, 37.35677f, 3.294292f, 0f, 145.1866f, 45f, 2500, 0);
							SYSTEM::SETTIMERB(0);
							if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(iLocal_2491))
							{
								TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iLocal_2491, "UP");
							}
							ENTITY::CREATE_MODEL_HIDE(-621.8983f, -230.8202f, 37.057f, 10f, joaat("p_jewel_door_l"), 0);
							iLocal_2602 = OBJECT::CREATE_OBJECT(joaat("p_jewel_door_l"), -631.96f, -236.33f, 37.057f, 1, 1, 0);
							ENTITY::SET_ENTITY_HEADING(iLocal_2602, -54.43099f);
							uLocal_2603 = PED::CREATE_SYNCHRONIZED_SCENE(-631.934f, -236.331f, 37.059f, 0f, 0f, 36f, 2);
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_2602, uLocal_2603, "2B_door_shut", "missHeist_jewel", 1000f, 1090519040, 0, 1148846080);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_2603, 1);
							bLocal_2412 = true;
							iLocal_2469++;
						}
						else
						{
							iLocal_2469 = 99;
						}
					}
					else
					{
						iLocal_2469 = 99;
					}
					break;
				
				case 4:
					if (SYSTEM::TIMERB() > 2500)
					{
						if (!PED::IS_PED_INJURED(iLocal_2491))
						{
							Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_2491, 1) - ENTITY::GET_ENTITY_COORDS(func_93(0), 1) };
							ENTITY::SET_ENTITY_HEADING(func_93(0), MISC::GET_HEADING_FROM_VECTOR_2D(Var0.x, Var0.f_1));
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							func_111();
							SYSTEM::SETTIMERB(0);
							func_792(Local_3369.f_225, 1, 1, 1, 7500);
							if (!PED::IS_PED_INJURED(iLocal_2491))
							{
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_2491, 1, 0);
							}
						}
						iLocal_4938 = 0;
						func_599(1, 0, 3000, 1, 1);
						iLocal_2469++;
					}
					break;
				
				case 5:
					if (!PED::IS_PED_INJURED(iLocal_2491))
					{
						if (!PED::IS_PED_INJURED(iLocal_2491))
						{
							if (TASK::GET_TASK_MOVE_NETWORK_SIGNAL_BOOL(iLocal_2491, "Run"))
							{
								iLocal_2469++;
							}
						}
					}
					else
					{
						iLocal_2469 = 99;
					}
					break;
				
				case 6:
					if (!PED::IS_PED_INJURED(iLocal_2491))
					{
						if (TASK::GET_TASK_MOVE_NETWORK_SIGNAL_BOOL(iLocal_2491, "Escape"))
						{
							uLocal_2603 = PED::CREATE_SYNCHRONIZED_SCENE(-631.934f, -236.331f, 37.059f, 0f, 0f, 36f, 2);
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_2602, uLocal_2603, "2B_door_escape", "missHeist_jewel", 1000f, 1090519040, 0, 1148846080);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_2603, 0);
							SYSTEM::SETTIMERB(0);
							iLocal_2469++;
						}
					}
					else
					{
						iLocal_2469 = 99;
					}
					break;
				
				case 7:
					if (!PED::IS_PED_INJURED(iLocal_2491))
					{
						if (SYSTEM::TIMERB() > 2468)
						{
							ENTITY::SET_ENTITY_COLLISION(iLocal_2491, true, 0);
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_2491);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_2609);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1686, 3f, -1, 0.25f, 8192, 40000f);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1689, 3f, -1, 0.25f, 8192, 40000f);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_2609);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_2491, uLocal_2609);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_2609);
							PED::FORCE_PED_MOTION_STATE(iLocal_2491, -1115154469, 1, 0, 0);
							func_840(iLocal_2491, 0, 0, 0, 0, 0, 0, 0);
							iLocal_2469++;
						}
					}
					else
					{
						iLocal_2469 = 99;
					}
					break;
				
				case 8:
					if (!PED::IS_PED_INJURED(iLocal_2491))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_2491, -656.5159f, -211.4847f, 38.80968f, 3.5625f, 3.75f, 2.5f, false, 1, 0))
						{
							iLocal_1522 = 20;
							func_956();
						}
					}
					else
					{
						iLocal_2469 = 99;
					}
					break;
				
				case 97:
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2491, 1);
					TASK::TASK_PLAY_ANIM(iLocal_2491, "missheist_jewel", "2b_guard_getdown", 8f, -8f, -1, 8, 0, 0, 0, 0);
					RECORDING::_0x293220DA1B46CEBC(4f, 2f, 3);
					SYSTEM::SETTIMERB(0);
					HUD::REMOVE_BLIP(&uLocal_2635);
					iLocal_2469 = 98;
					break;
				
				case 98:
					if (SYSTEM::TIMERB() > 1500)
					{
						iLocal_2469 = 99;
					}
					break;
				
				case 99:
					func_599(1, 0, 3000, 1, 1);
					if (HUD::DOES_BLIP_EXIST(uLocal_2635))
					{
						HUD::REMOVE_BLIP(&uLocal_2635);
					}
					ENTITY::REMOVE_MODEL_HIDE(-621.8983f, -230.8202f, 37.057f, 10f, joaat("p_jewel_door_l"), 0);
					OBJECT::DELETE_OBJECT(&iLocal_2602);
					bLocal_2412 = false;
					iLocal_2414 = 1;
					iLocal_2469 = 100;
					break;
			}
			if (iLocal_2469 >= 3)
			{
				if (iLocal_4938 == 0)
				{
					if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_RUNNER", 9, 1, 0, 0))
					{
						iLocal_4938 = 1;
					}
				}
			}
		}
		else if (!PED::IS_PED_INJURED(iLocal_2491))
		{
			if ((!TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iLocal_2491) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_2491, "missheist_jewel", "2b_guard_getdown", 3)) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_2491, "missheist_jewel", "2b_guard_getdown") >= 0.99f)
			{
				if (!PED::IS_PED_INJURED(iLocal_2491))
				{
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_2491, 0, 0);
				}
				TASK::TASK_PLAY_ANIM(iLocal_2491, "missheist_jewel", Local_3369.f_48, 1000f, -8f, -1, 9, 0, 0, 0, 0);
			}
		}
	}
	if (iLocal_2469 > 6)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_2603))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_2603) >= 1f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2602))
				{
					ENTITY::REMOVE_MODEL_HIDE(-621.8983f, -230.8202f, 37.057f, 10f, joaat("p_jewel_door_l"), 0);
					OBJECT::DELETE_OBJECT(&iLocal_2602);
				}
			}
		}
	}
	if (iLocal_4936 == 0)
	{
		if (iLocal_1518 >= 3)
		{
			if (!PED::IS_PED_INJURED(iLocal_2504))
			{
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_2504) && (MISC::GET_GAME_TIMER() - iLocal_2990) > 2000)
				{
					switch (iLocal_74)
					{
						case 0:
							GlobalFunc_5653(iLocal_2504, "JH_SVAA", "JEWELMANAGER", 4);
							iLocal_2988 = 0;
							iLocal_74++;
							break;
						
						case 1:
							GlobalFunc_5653(iLocal_2504, "JH_SWAA", "JEWELMANAGER", 4);
							iLocal_74++;
							break;
						
						case 2:
							GlobalFunc_5653(iLocal_2504, "JH_SXAA", "JEWELMANAGER", 4);
							iLocal_74++;
							break;
						
						case 3:
							GlobalFunc_5653(iLocal_2504, "JH_SYAA", "JEWELMANAGER", 4);
							iLocal_74++;
							break;
					}
					iLocal_2990 = MISC::GET_GAME_TIMER();
				}
			}
			iLocal_4937 = MISC::GET_GAME_TIMER();
		}
	}
	if (iLocal_74 >= 1 && iLocal_2988 == 0)
	{
		if (func_112())
		{
			GlobalFunc_164("G_BACK", 7500, 1);
			iLocal_2989 = 1;
			iLocal_2988 = 1;
		}
		else if (func_114())
		{
			GlobalFunc_4956();
			if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_GUNMANDWN", 9, 1, 0, 0))
			{
				iLocal_2988 = 1;
			}
		}
		else if (func_113())
		{
			GlobalFunc_4956();
			if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_GUNMANDWB", 9, 1, 0, 0))
			{
				iLocal_2988 = 1;
			}
		}
	}
	if ((iLocal_2988 == 1 && iLocal_2989 == 0) && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (func_114())
		{
			if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_GUNDWNRES", 9, 1, 0, 0))
			{
				iLocal_2989 = 1;
			}
		}
		else if (func_113())
		{
			if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_GUNDWN2", 9, 1, 0, 0))
			{
				iLocal_2989 = 1;
			}
		}
	}
	if (!iLocal_2415)
	{
		if (iLocal_1518 > 2 && iLocal_1518 < 5)
		{
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-629.1f, -230.2f, 38.2f, 2f, joaat("v_ilev_j2_door"), 0))
			{
				fLocal_4934 = (fLocal_4934 + 0.06f);
				if (fLocal_4934 > 1f)
				{
					fLocal_4934 = 1f;
				}
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_j2_door"), -629.1f, -230.2f, 38.2f, 1, (-1f * fLocal_4934), 0);
			}
		}
		switch (iLocal_1518)
		{
			case 0:
				STREAMING::REQUEST_MODEL(Local_3369.f_10);
				STREAMING::REQUEST_MODEL(Local_3369.f_16);
				iLocal_1518 = 1;
				break;
			
			case 1:
				if (STREAMING::HAS_MODEL_LOADED(Local_3369.f_10) && STREAMING::HAS_MODEL_LOADED(Local_3369.f_16))
				{
					iLocal_1518 = 2;
				}
				break;
			
			case 2:
				if (((iLocal_73 && bLocal_2412 == 0) && SYSTEM::TIMERA() < (iLocal_2472 - 10000)) && iLocal_2463 < 3300000)
				{
					iLocal_4936 = 0;
					iLocal_74 = 0;
					iLocal_4935 = 0;
					iLocal_2597 = OBJECT::CREATE_OBJECT(Local_3369.f_16, -629.73f, -228.2782f, 37.057f, 1, 1, 0);
					iLocal_2504 = PED::CREATE_PED(26, Local_3369.f_10, -629.73f, -228.2782f, 37.157f, 219.6529f, 1, 1);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_2597, iLocal_2504, PED::GET_PED_BONE_INDEX(iLocal_2504, 60309), Local_2656, Local_2656, 0, 0, 0, 0, 2, 1);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_2504, 0);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3369.f_10);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3369.f_16);
					func_111();
					func_855(iLocal_2504);
					func_831(0, 0f);
					func_854();
					uLocal_2635 = GlobalFunc_6797(iLocal_2504, 1, 145);
					uLocal_2614 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1631, Local_1634, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_2504, uLocal_2614, Local_3369.f_35, Local_3369.f_54, 1000f, -8f, 1, 0, 1148846080, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_2614, 0);
					SYSTEM::SETTIMERB(0);
					if (bLocal_2474)
					{
						if (!PED::IS_PED_INJURED(iLocal_2491))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_2491, true);
						}
					}
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_2504, 1, 0);
					AUDIO::START_AUDIO_SCENE("JSH_2B_MANAGER_ARRIVE");
					AUDIO::TRIGGER_MUSIC_EVENT("JH2B_SECURITY_MA");
					bLocal_2413 = true;
					iLocal_1518 = 3;
				}
				break;
			
			case 3:
				iLocal_1518 = 4;
				break;
			
			case 4:
				if (!PED::IS_PED_INJURED(iLocal_2504))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_2614))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_2614) >= 0.99f)
						{
							if (func_112())
							{
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_2611);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -624.8931f, -234.163f, 37.057f, iLocal_2504, 2f, 0, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
								TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_2504, 7000, 0);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -623.2735f, -236.2186f, 37.057f, -622.8721f, -230.6936f, 37.8568f, 2f, 0, 1056964608, 1082130432, 1, 0, 0, -957453492);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_2611);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_2486[iLocal_2471], uLocal_2611);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_2611);
							}
							if (!PED::IS_PED_INJURED(iLocal_2504))
							{
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_2504, 1, 0);
							}
							iLocal_1518 = 5;
						}
					}
				}
				else
				{
					iLocal_1518 = 6;
				}
				break;
			
			case 5:
				if (!PED::IS_PED_INJURED(iLocal_2504))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_2614))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_2614) >= 1f || iLocal_4935)
						{
							uLocal_2614 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1631, Local_1634, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_2504, uLocal_2614, Local_3369.f_35, Local_3369.f_58, 8f, -8f, 1, 0, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_2614, 1);
							SYSTEM::SETTIMERB(0);
							iLocal_75 = MISC::GET_GAME_TIMER();
							if (bLocal_2474)
							{
								if (!PED::IS_PED_INJURED(iLocal_2491))
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_2491, false);
								}
							}
							iLocal_1518 = 6;
						}
					}
				}
				else
				{
					iLocal_1518 = 6;
				}
				break;
			
			case 6:
				if (!PED::IS_PED_INJURED(iLocal_2504))
				{
					if ((!PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_2504) && !PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_2504)) && func_112())
					{
						func_854();
						if ((MISC::GET_GAME_TIMER() - iLocal_75) > 7500)
						{
							uLocal_2614 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1631, Local_1634, 2);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_2614, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_2504, uLocal_2614, Local_3369.f_35, Local_3369.f_55, 8f, -8f, 1, 0, 1148846080, 0);
							iLocal_1518 = 7;
						}
					}
					else
					{
						if (!PED::IS_PED_INJURED(iLocal_2504))
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_2504, func_93(0), 3000, 2048, 2);
						}
						uLocal_2614 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1631, Local_1634, 2);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_2614, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_2504, uLocal_2614, Local_3369.f_35, Local_3369.f_56, 8f, -8f, 1, 0, 1148846080, 0);
						ENTITY::DETACH_ENTITY(iLocal_2597, 1, 1);
						HUD::REMOVE_BLIP(&uLocal_2635);
						AUDIO::PLAY_PAIN(iLocal_2504, 7, 0, 0);
						iLocal_1518 = 11;
					}
				}
				else
				{
					HUD::REMOVE_BLIP(&uLocal_2635);
					bLocal_2413 = false;
					iLocal_2415 = 1;
				}
				break;
			
			case 11:
				if (!PED::IS_PED_INJURED(iLocal_2504))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_2614))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_2614) > 0.6f)
						{
							uLocal_2614 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1631, Local_1634, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_2504, uLocal_2614, Local_3369.f_35, Local_3369.f_57, 4f, -4f, 5, 0, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_2614, 1);
							if (HUD::DOES_BLIP_EXIST(uLocal_2635))
							{
								HUD::REMOVE_BLIP(&uLocal_2635);
							}
							bLocal_2413 = false;
							iLocal_2415 = 1;
						}
						else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_2614) > 0.1f)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_2597))
							{
								if (ENTITY::IS_ENTITY_ATTACHED(iLocal_2597))
								{
									ENTITY::DETACH_ENTITY(iLocal_2597, 0, 1);
								}
							}
						}
					}
				}
				else
				{
					HUD::REMOVE_BLIP(&uLocal_2635);
					bLocal_2413 = false;
					iLocal_2415 = 1;
				}
				break;
			
			case 7:
				if (!PED::IS_PED_INJURED(iLocal_2504))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_2614))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_2614) > 0.025f)
						{
							SYSTEM::SETTIMERB(0);
							iLocal_1518 = 8;
						}
					}
				}
				else
				{
					ENTITY::DETACH_ENTITY(iLocal_2597, 1, 1);
					HUD::REMOVE_BLIP(&uLocal_2635);
					bLocal_2413 = false;
					iLocal_2415 = 1;
				}
				break;
			
			case 8:
				if (!PED::IS_PED_INJURED(iLocal_2504))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_2614))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_2614) > 0.61f)
						{
							fLocal_4934 = (fLocal_4934 - 0.06f);
							if (fLocal_4934 < 0f)
							{
								fLocal_4934 = 0f;
							}
						}
						OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_j2_door"), -629.1f, -230.2f, 38.2f, 1, (-1f * fLocal_4934), 0);
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_2614) > 0.99f)
						{
							if (SYSTEM::TIMERA() < (iLocal_2472 - 10000) && iLocal_2463 < 3300000)
							{
								iLocal_1522 = 19;
								func_956();
							}
						}
					}
				}
				else
				{
					ENTITY::DETACH_ENTITY(iLocal_2597, 1, 1);
					func_611(1, 1, 1);
					func_610();
					HUD::REMOVE_BLIP(&uLocal_2635);
					bLocal_2413 = false;
					iLocal_2415 = 1;
				}
				break;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2504))
		{
			if (SYSTEM::TIMERA() > (iLocal_2472 - 10000) || iLocal_2463 > 3300000)
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_2635))
				{
					HUD::REMOVE_BLIP(&uLocal_2635);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2504))
			{
				if ((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_2504) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_2504)) || !func_112())
				{
					if (iLocal_4935 == 0)
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_2B_MANAGER_ARRIVE"))
						{
							AUDIO::STOP_AUDIO_SCENE("JSH_2B_MANAGER_ARRIVE");
							func_610();
							HUD::CLEAR_PRINTS();
						}
						if (func_112())
						{
							GlobalFunc_4956();
							if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_GETDOWN", 9, 0, 0, 0))
							{
								iLocal_4935 = 1;
							}
						}
						else
						{
							iLocal_4935 = 1;
						}
					}
				}
				else if (iLocal_1518 >= 6 && iLocal_4935 == 0)
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_2486[1]))
					{
						AUDIO::SET_AUDIO_FLAG("ScriptedConvListenerMaySpeak", 1);
						GlobalFunc_5653(iLocal_2486[1], "JH_IVAA", "JEWELGUNBAD", 4);
					}
				}
			}
			else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_2B_MANAGER_ARRIVE"))
			{
				AUDIO::STOP_AUDIO_SCENE("JSH_2B_MANAGER_ARRIVE");
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -632.5275f, -230.2955f, 37.05703f, -628.8489f, -227.6441f, 40.55703f, 3.6f, 0, 1, 0) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -629.1f, -230.2f, 38.2f, 1.5f, 1.5f, 1.5f, false, 1, 0))
	{
		fLocal_4934 = (fLocal_4934 - 0.06f);
		if (fLocal_4934 < 0f)
		{
			fLocal_4934 = 0f;
		}
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_j2_door"), -629.1f, -230.2f, 38.2f, 1, (-1f * fLocal_4934), 0);
	}
}

void func_854()//Position - 0x7ACB7
{
	iLocal_2466 = 0;
	while (iLocal_2466 <= 19)
	{
		if (HUD::DOES_BLIP_EXIST(Local_1758[iLocal_2466 /*30*/].f_23))
		{
			HUD::REMOVE_BLIP(&(Local_1758[iLocal_2466 /*30*/].f_23));
		}
		iLocal_2466++;
	}
}

void func_855(int iParam0)//Position - 0x7ACF5
{
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iLocal_2636);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 13, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 14, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 8, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 9, false);
	PED::SET_PED_ALERTNESS(iParam0, 0);
	PED::SET_PED_COMBAT_ABILITY(iParam0, 0);
	PED::SET_PED_COMBAT_RANGE(iParam0, 0);
	PED::SET_PED_GENERATES_DEAD_BODY_EVENTS(iParam0, 0);
	PED::SET_PED_SEEING_RANGE(iParam0, 0f);
	PED::SET_PED_HEARING_RANGE(iParam0, 0f);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
}

void func_856(int iParam0, var uParam1)//Position - 0x7AD5B
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = false;
	uParam1->f_7 = (uParam1->f_7 + (MISC::GET_GAME_TIMER() - uParam1->f_6));
	uParam1->f_6 = MISC::GET_GAME_TIMER();
	if (uParam1->f_7 > uParam1->f_8)
	{
		uParam1->f_7 = 0;
		uParam1->f_8 = (1500 + MISC::GET_RANDOM_INT_IN_RANGE(0, 500));
		*uParam1 = { uParam1->f_3 };
		if ((((((PED::IS_PED_INJURED(iLocal_2492[0]) && PED::IS_PED_INJURED(iLocal_2492[1])) && PED::IS_PED_INJURED(iLocal_2492[2])) && PED::IS_PED_INJURED(iLocal_2492[3])) && PED::IS_PED_INJURED(iLocal_2492[4])) && PED::IS_PED_INJURED(iLocal_2491)) && PED::IS_PED_INJURED(iLocal_2504))
		{
			uParam1->f_3 = { ENTITY::GET_ENTITY_COORDS(func_93(0), 1) };
			bVar1 = true;
		}
		else if (!bVar1)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
			if (bLocal_2413)
			{
				iVar0 = 1;
			}
			if (iVar0 > 87)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2491) && !PED::IS_PED_INJURED(iLocal_2491))
				{
					uParam1->f_3 = { ENTITY::GET_ENTITY_COORDS(iLocal_2491, 1) };
					bVar1 = true;
				}
			}
			else if (iVar0 > 74)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2492[0]) && !PED::IS_PED_INJURED(iLocal_2492[0]))
				{
					uParam1->f_3 = { ENTITY::GET_ENTITY_COORDS(iLocal_2492[0], 1) };
					bVar1 = true;
				}
			}
			else if (iVar0 > 61)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2492[1]) && !PED::IS_PED_INJURED(iLocal_2492[1]))
				{
					uParam1->f_3 = { ENTITY::GET_ENTITY_COORDS(iLocal_2492[1], 1) };
					bVar1 = true;
				}
			}
			else if (iVar0 > 48)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2492[2]) && !PED::IS_PED_INJURED(iLocal_2492[2]))
				{
					uParam1->f_3 = { ENTITY::GET_ENTITY_COORDS(iLocal_2492[2], 1) };
					bVar1 = true;
				}
			}
			else if (iVar0 > 35)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2492[3]) && !PED::IS_PED_INJURED(iLocal_2492[3]))
				{
					uParam1->f_3 = { ENTITY::GET_ENTITY_COORDS(iLocal_2492[3], 1) };
					bVar1 = true;
				}
			}
			else if (iVar0 > 22)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2492[4]) && !PED::IS_PED_INJURED(iLocal_2492[4]))
				{
					uParam1->f_3 = { ENTITY::GET_ENTITY_COORDS(iLocal_2492[4], 1) };
					bVar1 = true;
				}
			}
			else if (iVar0 > 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2504) && !PED::IS_PED_INJURED(iLocal_2504))
				{
					uParam1->f_3 = { ENTITY::GET_ENTITY_COORDS(iLocal_2504, 1) };
					bVar1 = true;
				}
			}
		}
		if (!bLocal_2412 && !bLocal_2413)
		{
			if (func_114())
			{
				if (!func_858("JH_STAYDWNGD"))
				{
					if (!bLocal_2919 && !bLocal_2920)
					{
						func_604("JH_STAYDWNGD", 1, 1, 1, 7, 0, 0);
					}
				}
			}
			else if (func_113())
			{
				if (!func_858("JH_CTRL"))
				{
					if (!bLocal_2919 && !bLocal_2920)
					{
						func_604("JH_CTRL", 1, 1, 1, 7, 0, 0);
					}
				}
			}
		}
	}
	else if (!iLocal_2418 && !Global_89962.f_12[2] >= 19)
	{
		TASK::TASK_AIM_GUN_AT_COORD(iParam0, func_857(*uParam1, uParam1->f_3, (SYSTEM::TO_FLOAT(uParam1->f_7) / IntToFloat(uParam1->f_8))), 1000, 0, 0);
	}
}

Vector3 func_857(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x7B07F
{
	struct<3> Var0;
	
	if (fParam6 > 1f)
	{
		fParam6 = 1f;
	}
	else if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	Var0.x = (Param0.x + ((Param3.x - Param0.x) * fParam6));
	Var0.f_1 = (Param0.f_1 + ((Param3.f_1 - Param0.f_1) * fParam6));
	Var0.f_2 = (Param0.f_2 + ((Param3.f_2 - Param0.f_2) * fParam6));
	return Var0;
}

int func_858(char* sParam0)//Position - 0x7B0D9
{
	bool bVar0;
	
	bVar0 = false;
	iLocal_2926 = 0;
	while (iLocal_2926 < 8 && bVar0 == 0)
	{
		if (Local_2931[iLocal_2926 /*7*/].f_2 == 1)
		{
			if (Local_2931[iLocal_2926 /*7*/].f_1 == MISC::GET_HASH_KEY(sParam0))
			{
				bVar0 = true;
			}
		}
		iLocal_2926++;
	}
	if (bVar0)
	{
		return 1;
	}
	return 0;
}

int func_859(int iParam0)//Position - 0x7B133
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_860()//Position - 0x7B170
{
	switch (iLocal_1755)
	{
		case 0:
			VEHICLE::REQUEST_VEHICLE_RECORDING(1, "JHGetBike");
			VEHICLE::REQUEST_VEHICLE_RECORDING(2, "JHGetBike");
			VEHICLE::REQUEST_VEHICLE_RECORDING(3, "JHGetBike");
			VEHICLE::REQUEST_VEHICLE_RECORDING(4, "JHGetBike");
			STREAMING::REQUEST_MODEL(Local_3369.f_12);
			STREAMING::REQUEST_MODEL(Local_3369);
			GlobalFunc_3039(GlobalFunc_5133(0, 2));
			if (!ENTITY::IS_ENTITY_DEAD(func_93(1)))
			{
				func_862();
				PED::SET_PED_HELMET_PROP_INDEX(func_93(1), 6, 1);
				PED::SET_PED_HELMET_TEXTURE_INDEX(func_93(1), 8);
				PED::SET_PED_PROP_INDEX(func_93(1), 0, 6, 8, false);
				PED::GIVE_PED_HELMET(func_93(1), 1, 4096, -1);
			}
			iLocal_1755++;
			break;
		
		case 1:
			if ((((((VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "JHGetBike") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "JHGetBike")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "JHGetBike")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "JHGetBike")) && STREAMING::HAS_MODEL_LOADED(Local_3369.f_12)) && STREAMING::HAS_MODEL_LOADED(Local_3369)) && GlobalFunc_3038(GlobalFunc_5133(0, 2)))
			{
				iLocal_1755++;
			}
			break;
		
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2552))
			{
				iLocal_2552 = VEHICLE::CREATE_VEHICLE(Local_3369.f_12, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(1, 3000f, "JHGetBike"), 135f, 1, 1);
				func_778(iLocal_2552);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_2552, 128, 3);
				VEHICLE::SET_VEHICLE_EXTRA(iLocal_2552, 6, false);
			}
			iLocal_2486[2] = func_738(0, 2, Local_1683, 261.2985f, 0, 1);
			PED::SET_PED_INTO_VEHICLE(iLocal_2486[2], iLocal_2552, -1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2486[2], 1);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2552, 0);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_2552, 1, "JHGetBike", 1);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_2552, 3000f);
			ENTITY::SET_ENTITY_PROOFS(iLocal_2552, 0, 0, 0, 1, 0, 0, 0, 0);
			VEHICLE::SET_PLAYBACK_SPEED(iLocal_2552, -1.1f);
			iLocal_1755++;
			break;
		
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2552))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_2552) < 100f)
				{
					func_603(iLocal_2552, 1, 0.92f);
					iLocal_5010 = MISC::GET_GAME_TIMER();
					iLocal_1755++;
				}
			}
			break;
		
		case 4:
			if ((MISC::GET_GAME_TIMER() - iLocal_5010) > 500)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2532[2]))
				{
					iLocal_2532[2] = VEHICLE::CREATE_VEHICLE(Local_3369, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(2, 0f, "JHGetBike"), ENTITY::GET_ENTITY_HEADING(iLocal_2552), 1, 1);
				}
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_2532[2], 0);
				ENTITY::SET_ENTITY_PROOFS(iLocal_2532[2], 0, 0, 0, 1, 0, 0, 0, 0);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2532[2], 0);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[2], 2, "JHGetBike", 1);
				VEHICLE::_0x796A877E459B99EA(iLocal_2532[2], Local_82);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_2532[2], 0);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2532[2], 0);
				PED::SET_PED_INTO_VEHICLE(func_93(1), iLocal_2532[2], -1);
				PED::REMOVE_PED_HELMET(func_93(1), 1);
				PED::SET_PED_HELMET_PROP_INDEX(func_93(1), 6, 1);
				PED::SET_PED_HELMET_TEXTURE_INDEX(func_93(1), 8);
				PED::SET_PED_PROP_INDEX(func_93(1), 0, 6, 8, false);
				PED::SET_PED_HELMET(func_93(1), 1);
				PED::SET_PED_STEERS_AROUND_OBJECTS(func_93(1), 0);
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_2532[2], 1.15f);
				PED::SET_PED_CAN_RAGDOLL(func_93(1), 0);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2532[1]))
				{
					iLocal_2532[1] = VEHICLE::CREATE_VEHICLE(Local_3369, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(3, 50f, "JHGetBike"), ENTITY::GET_ENTITY_HEADING(iLocal_2552), 1, 1);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2532[1], 0);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[1], 3, "JHGetBike", 1);
					VEHICLE::_0x796A877E459B99EA(iLocal_2532[1], Local_82 + Vector(0f, -0.4f, 0.3f));
					VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[1]);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_2532[1], 1);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_2532[1], 0);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2532[0]))
				{
					iLocal_2532[0] = VEHICLE::CREATE_VEHICLE(Local_3369, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(4, 50f, "JHGetBike"), ENTITY::GET_ENTITY_HEADING(iLocal_2552), 1, 1);
					ENTITY::SET_ENTITY_PROOFS(iLocal_2532[0], 0, 0, 0, 1, 0, 0, 0, 0);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2532[0], 0);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[0], 4, "JHGetBike", 1);
					VEHICLE::_0x796A877E459B99EA(iLocal_2532[0], Local_82);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_2532[0], 0);
					VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[0]);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_2532[0], 2);
					ENTITY::SET_ENTITY_COLLISION(iLocal_2532[0], false, 0);
				}
				iLocal_1755++;
			}
			break;
		
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2552))
			{
				func_603(iLocal_2552, 1, 0.92f);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[2]))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2532[2]))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2532[2]);
					iLocal_1755++;
				}
			}
			break;
		
		case 6:
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2532[1], -1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2532[1]))
				{
					ENTITY::SET_ENTITY_COLLISION(iLocal_2532[1], true, 0);
				}
				VEHICLE::SET_VEHICLE_INACTIVE_DURING_PLAYBACK(iLocal_2552, 1);
				ENTITY::SET_ENTITY_PROOFS(iLocal_2532[1], 0, 0, 0, 1, 0, 0, 0, 0);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2532[1], 0);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_1756);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, -639.9664f, -239.2199f, 36.9977f, 2f, 20000, 1193033728, 1056964608);
				TASK::TASK_ENTER_VEHICLE(0, iLocal_2532[1], 5000, -1, 2f, 1, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_1756);
				TASK::TASK_PERFORM_SEQUENCE(func_93(1), uLocal_1756);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1756);
				iLocal_1755++;
			}
			break;
		
		case 7:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2552))
			{
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_2552, 5, 0, 1f);
			}
			if (PED::IS_PED_IN_VEHICLE(func_93(1), iLocal_2532[1], 0))
			{
				VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[1]);
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_2532[1], 1.15f);
				iLocal_1755++;
			}
			break;
		
		case 8:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2552))
			{
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_2552, 5, 0, 1f);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[1]))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2532[1]))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2532[1]);
					iLocal_1755++;
				}
			}
			break;
		
		case 9:
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2532[0], -1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2532[0]))
				{
					ENTITY::SET_ENTITY_COLLISION(iLocal_2532[0], true, 0);
				}
				TASK::OPEN_SEQUENCE_TASK(&uLocal_1756);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, -638.5618f, -240.0035f, 37.0538f, 2f, 6000, 1193033728, 1056964608);
				TASK::TASK_ENTER_VEHICLE(0, iLocal_2532[0], 5000, -1, 2f, 1, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_1756);
				TASK::TASK_PERFORM_SEQUENCE(func_93(1), uLocal_1756);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1756);
				iLocal_1755++;
			}
			break;
		
		case 10:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2552))
			{
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_2552, 5, 0, 1f);
			}
			if (PED::IS_PED_IN_VEHICLE(func_93(1), iLocal_2532[0], 0))
			{
				VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_2532[0]);
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_2532[0], 1.15f);
				iLocal_1755++;
			}
			break;
		
		case 11:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2552))
			{
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_2552, 5, 0, 1f);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2532[0]))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2532[0]))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2532[0]);
					VEHICLE::SET_VEHICLE_INACTIVE_DURING_PLAYBACK(iLocal_2552, 0);
					TASK::TASK_LOOK_AT_ENTITY(func_93(1), func_93(0), 60000, 2048, 2);
					iLocal_1755++;
				}
			}
			break;
		
		case 12:
			if (!func_861(func_93(0)))
			{
				func_603(iLocal_2552, 0, 1065353216);
				VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_2552);
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_2552, 1.15f);
				iLocal_1755++;
			}
			else
			{
				func_603(iLocal_2552, 1, 0.92f);
			}
			break;
		
		case 13:
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2532[2], -1))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_1756);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_ENTER_VEHICLE(0, iLocal_2532[2], 5000, -1, 2f, 1, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_1756);
				TASK::TASK_PERFORM_SEQUENCE(func_93(1), uLocal_1756);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1756);
				iLocal_1755++;
			}
			break;
		
		case 14:
			func_603(iLocal_2552, 0, 1065353216);
			if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_2552))
			{
				func_646(GlobalFunc_5133(0, 2));
				VEHICLE::DELETE_VEHICLE(&iLocal_2552);
				PED::DELETE_PED(&(iLocal_2486[2]));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3369.f_12);
				VEHICLE::REMOVE_VEHICLE_RECORDING(1, "JHGetBike");
				VEHICLE::REMOVE_VEHICLE_RECORDING(2, "JHGetBike");
				VEHICLE::REMOVE_VEHICLE_RECORDING(3, "JHGetBike");
				VEHICLE::REMOVE_VEHICLE_RECORDING(4, "JHGetBike");
				PED::SET_PED_CAN_RAGDOLL(func_93(1), 1);
				iLocal_1755++;
			}
			break;
	}
}

int func_861(int iParam0)//Position - 0x7B9E7
{
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2552, -0.035128f, 0.555196f, 0.113579f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2552, 0.031168f, -3.357668f, 2.159969f), 2.375f, 0, 1))
	{
		return 1;
	}
	return 0;
}

void func_862()//Position - 0x7BA35
{
	if (bLocal_2405)
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_93(1)))
		{
			if (!PED::IS_PED_INJURED(func_93(1)))
			{
				func_432(func_93(1), 12, 8, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(func_93(1)))
	{
		if (!PED::IS_PED_INJURED(func_93(1)))
		{
			func_432(func_93(1), 12, 18, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
}

void func_863()//Position - 0x7BAA4
{
	if (!bLocal_2405)
	{
		switch (iLocal_1520)
		{
			case 0:
				iLocal_4996 = 0;
				while (iLocal_4996 <= 4)
				{
					iLocal_4997[iLocal_4996] = 0;
					iLocal_2498[iLocal_4996] = 0;
					iLocal_4996++;
				}
				iLocal_1520++;
				break;
			
			case 1:
				iLocal_1521 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
				if (!PED::IS_PED_INJURED(iLocal_2492[iLocal_1521]))
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_4995) > 4000)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_1519) > 750)
						{
							if (PED::IS_PED_MALE(iLocal_2492[iLocal_1521]))
							{
								GlobalFunc_5653(iLocal_2492[iLocal_1521], "WHIMPER", "WAVELOAD_PAIN_MALE", 24);
							}
							else
							{
								GlobalFunc_5653(iLocal_2492[iLocal_1521], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 24);
							}
							iLocal_1519 = MISC::GET_GAME_TIMER();
						}
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_5009) > 50)
					{
						if (GlobalFunc_745())
						{
							AUDIO::PLAY_PAIN(iLocal_2492[iLocal_1521], 6, 0, 0);
						}
						else if (GlobalFunc_745())
						{
							GlobalFunc_5130(iLocal_2492[iLocal_1521], "GENERIC_FRIGHTENED_HIGH", 4);
						}
						else
						{
							AUDIO::PLAY_PAIN(iLocal_2492[iLocal_1521], 3, 0, 0);
						}
						iLocal_5009 = MISC::GET_GAME_TIMER();
					}
					iLocal_1520++;
				}
				break;
			
			case 2:
				if ((MISC::GET_GAME_TIMER() - iLocal_1519) > 500)
				{
					iLocal_1520 = 1;
				}
				break;
			}
	}
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_4995 = MISC::GET_GAME_TIMER();
	}
	iLocal_4996 = 0;
	while (iLocal_4996 <= 4)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_2492[iLocal_4996]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_2492[iLocal_4996], PLAYER::PLAYER_PED_ID(), 1)) && iLocal_2498[iLocal_4996] == 0)
		{
			func_604("JH_SHOOTING", 1, 1, 1, 9, 0, 0);
			iLocal_2498[iLocal_4996] = 1;
		}
		if (!GlobalFunc_5172(&Local_2380, 1))
		{
			if (!iLocal_4997[iLocal_4996])
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2492[iLocal_4996]))
				{
					if (ENTITY::IS_ENTITY_DEAD(iLocal_2492[iLocal_4996]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_2492[iLocal_4996], PLAYER::PLAYER_PED_ID(), 1))
					{
						if (func_114())
						{
							func_604("JH_KOP", 1, 1, 1, 9, 0, 0);
						}
						else if (func_113())
						{
							func_604("JH_GUSSTOP", 1, 1, 1, 9, 0, 0);
						}
						else if (func_112())
						{
							func_604("JH_NORMSTOP", 1, 1, 1, 9, 0, 0);
						}
						iLocal_4997[iLocal_4996] = 1;
					}
				}
			}
			else if (!iLocal_5003[iLocal_4996] && !PED::IS_PED_INJURED(iLocal_2492[iLocal_4996]))
			{
				iLocal_5003[iLocal_4996] = 1;
			}
		}
		iLocal_4996++;
	}
}

void func_864()//Position - 0x7BD38
{
	if (bLocal_2405)
	{
		if (!PED::IS_PED_INJURED(iLocal_2492[0]))
		{
			if (ENTITY::GET_ENTITY_HEALTH(iLocal_2492[0]) < 10000)
			{
				PED::SET_PED_CAN_RAGDOLL(iLocal_2492[0], 1);
			}
			if (!func_805(iLocal_2492[0], -2017877118))
			{
				TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_2492[0], Local_3369.f_35, Local_3369.f_46, Local_1710, Local_1713, 1000f, -1000f, -1, 5121, 0f, 2, 0);
			}
		}
		iLocal_2466 = 1;
		while (iLocal_2466 <= 4)
		{
			if (!PED::IS_PED_INJURED(iLocal_2492[iLocal_2466]))
			{
				if (ENTITY::GET_ENTITY_HEALTH(iLocal_2492[iLocal_2466]) < 10000)
				{
					PED::SET_PED_CAN_RAGDOLL(iLocal_2492[iLocal_2466], 1);
				}
				if (!func_805(iLocal_2492[iLocal_2466], -2017877118))
				{
					TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_2492[iLocal_2466], Local_3369.f_35, Local_3369.f_49[(iLocal_2466 - 1)], Local_1710, Local_1713, 1000f, -1000f, -1, 5121, 0f, 2, 0);
				}
			}
			iLocal_2466++;
		}
		if (!PED::IS_PED_INJURED(iLocal_2491))
		{
			if (ENTITY::GET_ENTITY_HEALTH(iLocal_2491) < 10000)
			{
				PED::SET_PED_CAN_RAGDOLL(iLocal_2491, 1);
				ENTITY::SET_ENTITY_HEALTH(iLocal_2491, 0);
			}
			if (!func_805(iLocal_2491, -2017877118))
			{
				TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_2491, Local_3369.f_35, Local_3369.f_47, Local_1710, Local_1713, 1000f, -1000f, -1, 5121, 0f, 2, 0);
			}
		}
	}
}


void func_866(var uParam0)//Position - 0x7BEF1
{
	uParam0->f_7 = 0;
	uParam0->f_6 = MISC::GET_GAME_TIMER();
	uParam0->f_8 = 1000;
	if (!PED::IS_PED_INJURED(iLocal_2492[0]))
	{
		*uParam0 = { ENTITY::GET_ENTITY_COORDS(iLocal_2492[0], 1) };
	}
	else
	{
		*uParam0 = { Local_2656 };
	}
	if (!PED::IS_PED_INJURED(iLocal_2492[1]))
	{
		uParam0->f_3 = { ENTITY::GET_ENTITY_COORDS(iLocal_2492[1], 1) };
	}
	else
	{
		uParam0->f_3 = { Local_2656 };
	}
}

void func_867(var uParam0)//Position - 0x7BF63
{
	Local_2359 = -1;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_1));
	}
}

void func_868(int iParam0, char* sParam1, bool bParam2)//Position - 0x7BF82
{
	if (!Local_2991[iParam0 /*3*/].f_1)
	{
		if (!Local_2991[iParam0 /*3*/].f_2)
		{
			Local_2991[iParam0 /*3*/] = AUDIO::GET_SOUND_ID();
		}
		AUDIO::PLAY_SOUND_FRONTEND(Local_2991[iParam0 /*3*/], sParam1, 0, 1);
		Local_2991[iParam0 /*3*/].f_2 = 1;
		if (bParam2)
		{
			Local_2991[iParam0 /*3*/].f_1 = 1;
		}
	}
}

void func_869()//Position - 0x7BFD7
{
	iLocal_2466 = 0;
	while (iLocal_2466 <= 19)
	{
		Local_1758[iLocal_2466 /*30*/].f_24 = 0;
		iLocal_2466++;
	}
	func_838();
}

void func_870(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x7C007
{
	if (bParam4)
	{
		func_823(Local_3369.f_3);
		iLocal_2466 = 0;
		while (iLocal_2466 <= 4)
		{
			func_823(Local_3369.f_4[iLocal_2466]);
			iLocal_2466++;
		}
		func_126(bParam3, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2491))
	{
		iLocal_2491 = PED::CREATE_PED(26, Local_3369.f_3, Local_1723, fLocal_1726, 1, 1);
		func_811(Local_3369.f_3);
		if (!PED::IS_PED_INJURED(iLocal_2491))
		{
		}
	}
	else if (!PED::IS_PED_INJURED(iLocal_2491))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_2491, Local_1723, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(iLocal_2491, fLocal_1726);
	}
	if (!PED::IS_PED_INJURED(iLocal_2491))
	{
		func_855(iLocal_2491);
	}
	iLocal_2466 = 0;
	while (iLocal_2466 <= 4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2492[iLocal_2466]))
		{
			iLocal_2492[iLocal_2466] = PED::CREATE_PED(26, Local_3369.f_4[iLocal_2466], Local_1727[iLocal_2466 /*3*/], fLocal_1743[iLocal_2466], 1, 1);
			if (!PED::IS_PED_INJURED(iLocal_2492[iLocal_2466]))
			{
			}
		}
		else if (!PED::IS_PED_INJURED(iLocal_2492[iLocal_2466]))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_2492[iLocal_2466], Local_1727[iLocal_2466 /*3*/], 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iLocal_2492[iLocal_2466], fLocal_1743[iLocal_2466]);
		}
		if (!PED::IS_PED_INJURED(iLocal_2492[iLocal_2466]))
		{
			func_855(iLocal_2492[iLocal_2466]);
			PED::_0xA9B61A329BFDCBEA(iLocal_2492[iLocal_2466], 0);
		}
		iLocal_2466++;
	}
	iLocal_2466 = 0;
	while (iLocal_2466 <= 4)
	{
		func_811(Local_3369.f_4[iLocal_2466]);
		iLocal_2466++;
	}
	if (!PED::IS_PED_INJURED(iLocal_2492[0]))
	{
		PED::SET_PED_COMPONENT_VARIATION(iLocal_2492[0], 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_2492[0], 1, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_2492[0], 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_2492[0], 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_2492[0], 4, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_2492[0], 5, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_2492[0], 6, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_2492[0], 7, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_2492[0], 8, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_2492[0], 9, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_2492[0], 10, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_2492[0], 11, 0, 0, 0);
		PED::CLEAR_PED_PROP(iLocal_2492[0], 0);
		PED::CLEAR_PED_PROP(iLocal_2492[0], 1);
		PED::CLEAR_PED_PROP(iLocal_2492[0], 2);
		PED::CLEAR_PED_PROP(iLocal_2492[0], 3);
		PED::CLEAR_PED_PROP(iLocal_2492[0], 4);
		PED::CLEAR_PED_PROP(iLocal_2492[0], 5);
		PED::CLEAR_PED_PROP(iLocal_2492[0], 6);
		PED::CLEAR_PED_PROP(iLocal_2492[0], 7);
		PED::CLEAR_PED_PROP(iLocal_2492[0], 8);
	}
	if (!PED::IS_PED_INJURED(iLocal_2492[2]))
	{
		PED::SET_PED_COMPONENT_VARIATION(iLocal_2492[2], 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_2492[2], 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_2492[2], 3, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_2492[2], 4, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_2492[2], 8, 0, 0, 0);
	}
	if (!PED::IS_PED_INJURED(iLocal_2492[3]))
	{
		PED::SET_PED_COMPONENT_VARIATION(iLocal_2492[3], 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_2492[3], 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_2492[3], 3, 0, 5, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_2492[3], 4, 1, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_2492[3], 8, 0, 0, 0);
	}
	if (!PED::IS_PED_INJURED(iLocal_2492[4]) && !bLocal_2405)
	{
		PED::SET_PED_COMPONENT_VARIATION(iLocal_2492[4], 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_2492[4], 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_2492[4], 3, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_2492[4], 4, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_2492[4], 8, 0, 0, 0);
	}
	if (bParam0)
	{
		TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_2491, Local_3369.f_35, Local_3369.f_47, Local_1710, Local_1713, 1000f, -1000f, -1, 2102272, 0.9f, 2, 0);
		TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_2492[0], Local_3369.f_35, Local_3369.f_46, Local_1710, Local_1713, 1000f, -1000f, -1, 2102272, 0.9f, 2, 0);
		iLocal_2466 = 1;
		while (iLocal_2466 <= 4)
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_2492[iLocal_2466], Local_3369.f_35, Local_3369.f_49[(iLocal_2466 - 1)], Local_1710, Local_1713, 1000f, -1000f, -1, 2102272, 0.9f, 2, 0);
			iLocal_2466++;
		}
		TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_2492[2], Local_3369.f_35, Local_3369.f_49[1], Local_1710 + Vector(-0.85f, 0f, 0f), Local_1713, 1000f, -1000f, -1, 2102272, 0.9f, 2, 0);
	}
	else if (bParam1)
	{
		TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_2492[0], Local_3369.f_35, "JH_2B_EndLoop_Male2", -625.444f, -234.01f, 37.72f, 0f, 0f, 36f, 1000f, -1000f, -1, 790537, 0f, 2, 0);
		TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_2492[1], Local_3369.f_35, "JH_2B_EndLoop_female1", -625.444f, -234.01f, 37.72f, 0f, 0f, 36f, 1000f, -1000f, -1, 790537, 0f, 2, 0);
		TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_2492[2], Local_3369.f_35, "JH_2B_EndLoop_female2", -625.444f, -234.01f, 37.72f, 0f, 0f, 36f, 1000f, -1000f, -1, 790537, 0f, 2, 0);
		TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_2492[3], Local_3369.f_35, "JH_2B_EndLoop_Male3", -625.444f, -234.01f, 37.72f, 0f, 0f, 36f, 1000f, -1000f, -1, 790537, 0f, 2, 0);
		TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_2492[4], Local_3369.f_35, "JH_2B_EndLoop_Male1", -625.444f, -234.01f, 37.72f, 0f, 0f, 36f, 1000f, -1000f, -1, 790537, 0f, 2, 0);
		TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_2491, Local_3369.f_35, Local_3369.f_48, -625.445f, -234.01f, 37.719f, 0f, 0f, 36.1f, 1000f, -1000f, -1, 5129, 0f, 2, 0);
	}
	if (bParam2)
	{
		func_840(iLocal_2492[0], iLocal_2492[1], iLocal_2492[2], iLocal_2492[3], iLocal_2492[4], iLocal_2491, 0, 0);
	}
	if (bParam0)
	{
		iLocal_2466 = 0;
		while (iLocal_2466 <= 4)
		{
			ENTITY::SET_ENTITY_HEALTH(iLocal_2492[iLocal_2466], 101);
			PED::SET_PED_CAN_RAGDOLL(iLocal_2492[iLocal_2466], 0);
			PED::SET_PED_KEEP_TASK(iLocal_2492[iLocal_2466], 1);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_2492[iLocal_2466], 0);
			iLocal_2466++;
		}
		ENTITY::SET_ENTITY_HEALTH(iLocal_2491, 10000);
		PED::SET_PED_CAN_RAGDOLL(iLocal_2491, 0);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_2491, 0);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_2491, 0);
	}
	else
	{
		iLocal_2466 = 0;
		while (iLocal_2466 <= 4)
		{
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_2492[iLocal_2466], 0);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_2492[iLocal_2466], 0);
			iLocal_2466++;
		}
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_2491, 0);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_2491, 0);
	}
	iLocal_2466 = 0;
	while (iLocal_2466 <= 4)
	{
		ENTITY::SET_ENTITY_HEALTH(iLocal_2492[iLocal_2466], 101);
		iLocal_2466++;
	}
	PED::DELETE_PED(&(iLocal_2492[3]));
}

void func_871()//Position - 0x7C746
{
	MISC::CLEAR_AREA_OF_PEDS(-625.1706f, -232.8408f, 39.4937f, 100f, 0);
}

void func_872()//Position - 0x7C767
{
	switch (GlobalFunc_697(GlobalFunc_5133(0, 2)))
	{
		case 2:
			iLocal_2472 = 90000;
			break;
		
		case 1:
			iLocal_2472 = 65000;
			break;
		
		case 0:
			iLocal_2472 = 55000;
			break;
	}
	if (bLocal_2405)
	{
		switch (GlobalFunc_697(GlobalFunc_5133(0, 1)))
		{
			case 2:
				fLocal_2473 = 1f;
				break;
			
			case 1:
				fLocal_2473 = 0.9f;
				break;
			
			case 0:
				fLocal_2473 = 0.8f;
				break;
		}
	}
	else
	{
		switch (GlobalFunc_697(GlobalFunc_5133(0, 0)))
		{
			case 2:
				fLocal_2473 = 1f;
				break;
			
			case 1:
				fLocal_2473 = 0.9f;
				break;
			
			case 0:
				fLocal_2473 = 0.8f;
				break;
			}
	}
	iLocal_2470 = 1;
	iLocal_2471 = 0;
	if (GlobalFunc_697(GlobalFunc_5133(0, 1)) == 0)
	{
		bLocal_2475 = true;
	}
	else
	{
		bLocal_2475 = false;
	}
	if (!bLocal_2405)
	{
		if (GlobalFunc_697(GlobalFunc_5133(0, 1)) == 0)
		{
			bLocal_2474 = true;
		}
	}
	else
	{
		bLocal_2474 = false;
	}
	GlobalFunc_5156(0, GlobalFunc_5133(0, 0), 1);
	if (bLocal_2475)
	{
		GlobalFunc_5156(0, GlobalFunc_5133(0, 1), 3);
	}
	else
	{
		GlobalFunc_5156(0, GlobalFunc_5133(0, 1), 1);
	}
	GlobalFunc_5156(0, GlobalFunc_5133(0, 2), 1);
	GlobalFunc_5156(0, GlobalFunc_5133(0, 2), 1);
}



int func_875()//Position - 0x7C93D
{
	if (!iLocal_2406)
	{
		PED::ADD_SCENARIO_BLOCKING_AREA(-655.1706f, -272.8408f, 9.4937f, -575.1706f, -152.8408f, 69.4937f, 0, 1, 1, 1);
		PED::SET_PED_NON_CREATION_AREA(-655.1706f, -272.8408f, 9.4937f, -575.1706f, -152.8408f, 69.4937f);
		func_472(&iLocal_2552, 1);
		func_811(Local_3369.f_12);
		if (iLocal_1615 == 0)
		{
			iLocal_1615 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
		}
		if (iLocal_1615 != 4)
		{
			VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1615, "JHArrive");
		}
		WEAPON::REQUEST_WEAPON_ASSET(iLocal_1464, 31, 20);
		STREAMING::REQUEST_MODEL(WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("component_at_ar_supp")));
		func_610();
		GlobalFunc_4956();
		AUDIO::_0x02E93C796ABD3A97(1);
		AUDIO::TRIGGER_MUSIC_EVENT("JH2B_RADIO_FADE");
		AUDIO::START_AUDIO_SCENE("JSH_2B_REVERSE_TRUCK_CUTSCENE");
		iLocal_2467 = 0;
		iLocal_2407 = 0;
		iLocal_2406 = 1;
		STREAMING::REQUEST_MODEL(Local_3369.f_3);
		iLocal_2466 = 0;
		while (iLocal_2466 <= 4)
		{
			STREAMING::REQUEST_MODEL(Local_3369.f_4[iLocal_2466]);
			iLocal_2466++;
		}
		STREAMING::REQUEST_ANIM_DICT(Local_3369.f_35);
		VEHICLE::REQUEST_VEHICLE_RECORDING(1, "JHArrive");
		VEHICLE::REQUEST_VEHICLE_RECORDING(2, "JHArrive");
		VEHICLE::REQUEST_VEHICLE_RECORDING(3, "JHArrive");
		func_616(0);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_2486[0], iLocal_1464, 1000, 1, 1);
		func_9(iLocal_2486[0], 1, 1);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_2486[1], iLocal_1464, 1000, 1, 1);
		func_9(iLocal_2486[1], 1, 1);
		WEAPON::GIVE_WEAPON_TO_PED(func_93(0), iLocal_1464, 1000, 1, 1);
		func_9(func_93(0), 1, 1);
		func_617(func_93(0), 1);
		func_617(iLocal_2486[0], 1);
		func_617(iLocal_2486[1], 1);
		bLocal_4994 = false;
		CUTSCENE::REQUEST_CUTSCENE(Local_3369.f_122, 8);
		PED::REQUEST_ACTION_MODE_ASSET("MICHAEL_ACTION");
		iLocal_2467 = 0;
	}
	else
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", func_93(0), 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("gunman_selection_1", iLocal_2486[1], 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("driver_selection", iLocal_2486[0], 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", func_93(1), 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("angry_customer", 0, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("angry_customer", 2, 1, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("angry_customer", 3, 1, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("angry_customer", 4, 1, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("angry_customer", 8, 0, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2492[1]))
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Jewellery_Assitance", iLocal_2492[1], 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2492[4]))
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("shop_assistant", iLocal_2492[4], 0);
			}
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("boyfriend", 0, 1, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("boyfriend", 2, 1, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("boyfriend", 3, 0, 5, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("boyfriend", 4, 1, 2, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("boyfriend", 8, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("customer", 0, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("customer", 2, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("customer", 3, 0, 1, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("customer", 4, 1, 1, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("customer", 8, 0, 0, 0);
		}
		if (iLocal_2423)
		{
			iLocal_2423 = 0;
			iLocal_2466 = 0;
			while (iLocal_2466 <= 19)
			{
				uLocal_2642 = OBJECT::GET_RAYFIRE_MAP_OBJECT(Local_1758[iLocal_2466 /*30*/], 1f, Local_1758[iLocal_2466 /*30*/].f_27);
				if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_2642))
				{
					if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_2642) != 3)
					{
						OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_2642, 11);
					}
				}
				else
				{
					iLocal_2423 = 1;
				}
				iLocal_2466++;
			}
		}
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE() || CUTSCENE::HAS_CUTSCENE_FINISHED())
		{
			if (GlobalFunc_75() && iLocal_2467 > 1)
			{
				CAM::DO_SCREEN_FADE_OUT(500);
				while (CAM::IS_SCREEN_FADING_OUT())
				{
					SYSTEM::WAIT(0);
				}
				CUTSCENE::REMOVE_CUTSCENE();
				STREAMING::REQUEST_MODEL(Local_3369.f_3);
				iLocal_2466 = 0;
				while (iLocal_2466 <= 4)
				{
					STREAMING::REQUEST_MODEL(Local_3369.f_4[iLocal_2466]);
					iLocal_2466++;
				}
				STREAMING::REQUEST_ANIM_DICT(Local_3369.f_35);
				while (((((((!STREAMING::HAS_MODEL_LOADED(Local_3369.f_3) || !STREAMING::HAS_MODEL_LOADED(Local_3369.f_4[0])) || !STREAMING::HAS_MODEL_LOADED(Local_3369.f_4[1])) || !STREAMING::HAS_MODEL_LOADED(Local_3369.f_4[2])) || !STREAMING::HAS_MODEL_LOADED(Local_3369.f_4[3])) || !STREAMING::HAS_MODEL_LOADED(Local_3369.f_4[4])) || !STREAMING::HAS_ANIM_DICT_LOADED(Local_3369.f_35)) || !PED::HAS_ACTION_MODE_ASSET_LOADED("MICHAEL_ACTION"))
				{
					SYSTEM::WAIT(0);
				}
				func_824(&iLocal_2604, -625.1706f, -232.8408f, 39.4937f, "V_JEWEL2", 1, 0);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2590))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2590))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2590);
					}
				}
				func_870(0, 1, 1, 1, 1);
				if (GlobalFunc_8315() != 0)
				{
					GlobalFunc_9019(&Local_2659, 0);
					func_167(&Local_2659, 1, 0, 0);
					func_619(func_93(0));
					func_619(func_93(1));
				}
				bLocal_4994 = true;
				iLocal_2467 = 5;
			}
		}
		switch (iLocal_2467)
		{
			case 0:
				if ((iLocal_1615 != 4 && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1615, "JHArrive")) || iLocal_1615 == 4)
				{
					GlobalFunc_4956();
					GlobalFunc_619(0);
					if (iLocal_1615 == 1)
					{
						func_643(0, 1, 0, 1, 1);
						CAM::SET_CAM_COORD(uLocal_3365, -681.9772f, -222.6924f, 36.8357f);
						CAM::SET_CAM_ROT(uLocal_3365, 9.68531f, 0.613758f, -104.1865f, 2);
						CAM::SET_CAM_FOV(uLocal_3365, 43.55497f);
						CAM::SET_CAM_COORD(uLocal_3366, -682.0558f, -223.2239f, 36.83055f);
						CAM::SET_CAM_ROT(uLocal_3366, 1.751721f, 0.613758f, -135.1886f, 2);
						CAM::SET_CAM_FOV(uLocal_3366, 43.55497f);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3366, uLocal_3365, 4250, 3, 3);
						iLocal_1615 = 1;
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_2590, iLocal_1615, "JHArrive", 1);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_2590, 6000f);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_2590, 0.9f);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_2590, 1);
						MISC::CLEAR_AREA(-669.3546f, -224.706f, 36.219f, 20f, 1, 0, 0, 0);
						func_871();
						CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
						PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
						iLocal_2467++;
						SYSTEM::SETTIMERA(0);
					}
					else if (iLocal_1615 == 2)
					{
						func_643(0, 1, 0, 1, 1);
						CAM::SET_CAM_COORD(uLocal_3365, -678.8114f, -227.0168f, 36.63797f);
						CAM::SET_CAM_ROT(uLocal_3365, 14.19127f, 0.284852f, -77.50282f, 2);
						CAM::SET_CAM_FOV(uLocal_3365, 34.80661f);
						CAM::SET_CAM_COORD(uLocal_3366, -678.4884f, -227.7141f, 36.71359f);
						CAM::SET_CAM_ROT(uLocal_3366, 7.48602f, 0.28485f, -107.4328f, 2);
						CAM::SET_CAM_FOV(uLocal_3366, 34.80661f);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3366, uLocal_3365, 3250, 3, 3);
						iLocal_1615 = 2;
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_2590, iLocal_1615, "JHArrive", 1);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_2590, 3700f);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_2590, 1);
						MISC::CLEAR_AREA(-669.3546f, -224.706f, 36.219f, 20f, 1, 0, 0, 0);
						func_871();
						CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
						PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
						iLocal_2467++;
						SYSTEM::SETTIMERA(0);
					}
					else if (iLocal_1615 == 3)
					{
						func_643(0, 1, 0, 1, 1);
						CAM::SET_CAM_COORD(uLocal_3365, -687.8701f, -219.9936f, 36.74343f);
						CAM::SET_CAM_ROT(uLocal_3365, 9.234026f, -2.307101f, -110.813f, 2);
						CAM::SET_CAM_FOV(uLocal_3365, 37.24925f);
						CAM::SET_CAM_COORD(uLocal_3366, -686.5961f, -219.9158f, 36.88629f);
						CAM::SET_CAM_ROT(uLocal_3366, 3.781409f, -2.307101f, -99.38617f, 2);
						CAM::SET_CAM_FOV(uLocal_3366, 37.24925f);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3366, uLocal_3365, 3750, 3, 3);
						iLocal_1615 = 3;
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_2590, iLocal_1615, "JHArrive", 1);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_2590, 4500f);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_2590, 1.15f);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_2590, 1);
						MISC::CLEAR_AREA(-669.3546f, -224.706f, 36.219f, 20f, 1, 0, 0, 0);
						func_871();
						CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
						PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
						SYSTEM::SETTIMERA(0);
						iLocal_2467++;
					}
					else if (iLocal_1615 == 4)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						iLocal_2467++;
					}
					if (GlobalFunc_8315() != 0)
					{
						GlobalFunc_9019(&Local_2659, 0);
						func_167(&Local_2659, 1, 0, 0);
						func_619(func_93(0));
						func_619(func_93(1));
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2590))
					{
						ENTITY::SET_ENTITY_HEALTH(iLocal_2590, 1000);
					}
					if (!PED::IS_PED_IN_VEHICLE(func_93(0), iLocal_2590, 0))
					{
						PED::SET_PED_INTO_VEHICLE(func_93(0), iLocal_2590, 0);
					}
					RECORDING::_0x293220DA1B46CEBC(4f, 5f, 3);
					func_108(800, 0, 0);
				}
				break;
			
			case 1:
				if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_ACRLVE", 9, 0, 0, 0))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("JH2B_MISSION_START_ST");
					PED::REQUEST_ACTION_MODE_ASSET("MICHAEL_ACTION");
					Local_2457 = { Local_1619 };
					func_111();
					func_824(&iLocal_2604, -625.1706f, -232.8408f, 39.4937f, "V_JEWEL2", 0, 0);
					func_556(0);
					if (iLocal_1615 == 4)
					{
						iLocal_2467 = 5;
					}
					else
					{
						iLocal_2467 = 3;
					}
				}
				break;
			
			case 3:
				switch (iLocal_1615)
				{
					case 1:
						if (SYSTEM::TIMERA() > 4300)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_2590))
							{
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_2590, 2000f);
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_2590, 0);
							}
							CAM::SET_CAM_COORD(uLocal_3365, -640.4509f, -233.4439f, 37.80636f);
							CAM::SET_CAM_ROT(uLocal_3365, 4.411565f, 0.527128f, 81.38555f, 2);
							CAM::SET_CAM_FOV(uLocal_3365, 33.84415f);
							CAM::SET_CAM_COORD(uLocal_3366, -642.6585f, -233.653f, 37.52855f);
							CAM::SET_CAM_ROT(uLocal_3366, 3.940768f, 0.527128f, 96.26064f, 2);
							CAM::SET_CAM_FOV(uLocal_3366, 33.84415f);
							CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3366, uLocal_3365, 2000, 3, 3);
							iLocal_2467 = 4;
						}
						break;
					
					case 2:
						if (SYSTEM::TIMERA() > 3000)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_2590))
							{
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_2590, 1700f);
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_2590, 0);
							}
							CAM::SET_CAM_COORD(uLocal_3366, -639.4245f, -231.2812f, 37.31658f);
							CAM::SET_CAM_ROT(uLocal_3366, 4.64518f, -2.29626f, 91.56691f, 2);
							CAM::SET_CAM_FOV(uLocal_3366, 34.80661f);
							CAM::SET_CAM_COORD(uLocal_3365, -642.1667f, -230.967f, 37.46484f);
							CAM::SET_CAM_ROT(uLocal_3365, 6.755442f, -2.29626f, 90.17682f, 2);
							CAM::SET_CAM_FOV(uLocal_3365, 34.80661f);
							CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3366, uLocal_3365, 3250, 3, 3);
							iLocal_2467 = 4;
						}
						break;
					
					case 3:
						if (SYSTEM::TIMERA() > 3000)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_2590))
							{
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_2590, 2000f);
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_2590, 0);
							}
							CAM::SET_CAM_COORD(uLocal_3365, -633.4784f, -235.1979f, 37.63464f);
							CAM::SET_CAM_ROT(uLocal_3365, 4.998171f, -2.24293f, 83.91781f, 2);
							CAM::SET_CAM_FOV(uLocal_3365, 29.61693f);
							CAM::SET_CAM_COORD(uLocal_3366, -636.2968f, -235.5831f, 37.67347f);
							CAM::SET_CAM_ROT(uLocal_3366, 4.210197f, -2.24293f, 93.95094f, 2);
							CAM::SET_CAM_FOV(uLocal_3366, 29.61693f);
							CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3366, uLocal_3365, 3000, 3, 3);
							iLocal_2467 = 4;
						}
						break;
				}
				break;
			
			case 4:
				CAM::SET_USE_HI_DOF();
				if (((((((((PED::HAS_ACTION_MODE_ASSET_LOADED("MICHAEL_ACTION") && CUTSCENE::HAS_CUTSCENE_LOADED()) && STREAMING::HAS_MODEL_LOADED(Local_3369.f_3)) && STREAMING::HAS_MODEL_LOADED(Local_3369.f_4[0])) && STREAMING::HAS_MODEL_LOADED(Local_3369.f_4[1])) && STREAMING::HAS_MODEL_LOADED(Local_3369.f_4[2])) && STREAMING::HAS_MODEL_LOADED(Local_3369.f_4[3])) && STREAMING::HAS_MODEL_LOADED(Local_3369.f_4[4])) && STREAMING::HAS_ANIM_DICT_LOADED(Local_3369.f_35)) && WEAPON::HAS_WEAPON_ASSET_LOADED(iLocal_1464))
				{
					if (((SYSTEM::TIMERA() > 7000 && iLocal_1615 == 1) || (SYSTEM::TIMERA() > 7000 && iLocal_1615 == 2)) || (SYSTEM::TIMERA() > 6300 && iLocal_1615 == 3))
					{
						func_870(0, 1, 1, 1, 1);
						iLocal_2467++;
					}
				}
				break;
			
			case 5:
				if (STREAMING::HAS_MODEL_LOADED(WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("component_at_ar_supp"))) && WEAPON::HAS_WEAPON_ASSET_LOADED(iLocal_1464))
				{
					if (GlobalFunc_8315() != 0)
					{
						GlobalFunc_9019(&Local_2659, 0);
						func_167(&Local_2659, 1, 0, 0);
						func_619(func_93(0));
						func_619(func_93(1));
					}
					WEAPON::SET_CURRENT_PED_WEAPON(func_93(0), iLocal_1464, 1);
					WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(func_93(0), iLocal_1464, joaat("component_at_ar_supp"));
					func_879(func_93(0), iLocal_1464, joaat("component_carbinerifle_clip_01"));
					iLocal_2598 = func_877(func_93(0), 1, 0, 0, 0, 0);
					iLocal_2599 = WEAPON::CREATE_WEAPON_OBJECT(iLocal_1464, -1, 0.1f, 1f, 1f, 1, 1065353216, 0);
					WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(iLocal_2599, joaat("component_carbinerifle_clip_01"));
					WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(iLocal_2599, joaat("component_at_ar_supp"));
					iLocal_2600 = WEAPON::CREATE_WEAPON_OBJECT(iLocal_1464, -1, 0.1f, 1f, 1f, 1, 1065353216, 0);
					WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(iLocal_2600, joaat("component_carbinerifle_clip_01"));
					WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(iLocal_2600, joaat("component_at_ar_supp"));
					if (!bLocal_4994)
					{
						func_828(1, 1, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_2659[1], "Franklin", 0, joaat("player_one"), 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2492[0], "angry_customer", 0, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2492[1], "Jewellery_Assitance", 0, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2492[4], "shop_assistant", 0, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2492[2], "customer", 0, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2491, "security_guard", 0, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2486[1], "gunman_selection_1", 0, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2486[0], "driver_selection", 0, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2590, "BURRITO3", 0, joaat("burrito3"), 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2598, "Michaels_weapon", 0, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2599, "HC_GUNMAN_2_HANDEDWEAPON", 0, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2600, "HC_GUNMAN1_2_HANDEDWEAPON", 0, 0, 0);
						iLocal_2466 = 0;
						while (iLocal_2466 <= 4)
						{
							func_811(Local_3369.f_4[iLocal_2466]);
							iLocal_2466++;
						}
						func_811(Local_3369.f_3);
						GlobalFunc_8316(1, 1, 1, 0);
						CUTSCENE::START_CUTSCENE(0);
						RECORDING::_0x48621C9FCA3EBD28(4);
					}
					AUDIO::STOP_AUDIO_SCENE("JSH_2B_REVERSE_TRUCK_CUTSCENE");
					AUDIO::TRIGGER_MUSIC_EVENT("JH2B_MISSION_START_ST");
					iLocal_2467++;
				}
				break;
			
			case 6:
			case 7:
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					ENTITY::SET_ENTITY_COORDS(func_93(0), -629.2506f, -234.1249f, 37.057f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(func_93(0), 291.8499f);
					if (GlobalFunc_8315() != 0)
					{
						GlobalFunc_9019(&Local_2659, 0);
						func_167(&Local_2659, 1, 0, 0);
						func_619(func_93(0));
						func_619(func_93(1));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2598))
					{
						WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_2598, PLAYER::PLAYER_PED_ID());
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2599))
					{
						WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_2599, iLocal_2486[0]);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2600))
					{
						WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_2600, iLocal_2486[1]);
					}
					WEAPON::SET_CURRENT_PED_WEAPON(func_93(0), iLocal_1464, 1);
					PED::SET_PED_USING_ACTION_MODE(func_93(0), 1, -1, 0);
					PED::FORCE_PED_MOTION_STATE(func_93(0), -1871534317, 1, 1, 0);
					if (!bLocal_4994)
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_2492[0], Local_3369.f_35, "JH_2B_EndLoop_Male2", -625.444f, -234.01f, 37.72f, 0f, 0f, 36f, 1000f, -1000f, -1, 5121, 0f, 2, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_2492[0], 0, 0);
						TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_2492[1], Local_3369.f_35, "JH_2B_EndLoop_female1", -625.444f, -234.01f, 37.72f, 0f, 0f, 36f, 1000f, -1000f, -1, 790529, 0f, 2, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_2492[1], 0, 0);
						TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_2492[2], Local_3369.f_35, "JH_2B_EndLoop_female2", -625.444f, -234.01f, 37.72f, 0f, 0f, 36f, 1000f, -1000f, -1, 5121, 0f, 2, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_2492[2], 0, 0);
						TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_2492[4], Local_3369.f_35, "JH_2B_EndLoop_Male1", -625.444f, -234.01f, 37.72f, 0f, 0f, 36f, 1000f, -1000f, -1, 790529, 0f, 2, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_2492[4], 0, 0);
						TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_2491, Local_3369.f_35, Local_3369.f_48, Local_1710, Local_1713, 1000f, -1000f, -1, 5121, 0f, 2, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_2491, 0, 0);
					}
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(-625.1706f, -232.8408f, 39.4937f, 10f, 0);
						while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
						{
							SYSTEM::WAIT(0);
						}
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					GlobalFunc_4450();
				}
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					func_846(iLocal_2486[0], &Local_2359);
				}
				if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 8890f && iLocal_2479 == 0)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("JH2B_ENTER_SHOP_MA");
					iLocal_2479 = 1;
				}
				if (iLocal_2467 == 6)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 18000)
					{
						iLocal_2467 = 7;
					}
				}
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					PED::SET_PED_COMPONENT_VARIATION(func_93(0), 6, 0, 0, 0);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2590))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2590))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2590);
						}
					}
				}
				GlobalFunc_4450();
				if (CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					func_599(0, 0, 3000, 1, 1);
					HUD::DISPLAY_HUD(0);
					HUD::DISPLAY_RADAR(0);
					CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
				}
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					GlobalFunc_8316(0, 1, 1, 0);
					func_111();
					func_599(0, 0, 3000, 1, 1);
					CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
					iLocal_2467 = 8;
				}
				break;
		}
		if (iLocal_2467 >= 8)
		{
			func_876(0);
			GlobalFunc_2898(0);
			if (iLocal_2479 == 0)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("JH2B_MISSION_RESTART");
			}
			if (GlobalFunc_8315() != 0)
			{
				GlobalFunc_9019(&Local_2659, 0);
				func_167(&Local_2659, 1, 0, 0);
				func_619(func_93(0));
				func_619(func_93(1));
			}
			func_817("JHArrive", 1);
			func_817("JHArrive", 2);
			func_817("JHArrive", 3);
			func_870(0, 1, 0, 1, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("component_at_ar_supp")));
			HUD::DISPLAY_HUD(1);
			HUD::DISPLAY_RADAR(1);
			RECORDING::_0x81CBAE94390F9F89();
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			ENTITY::SET_ENTITY_COORDS(func_93(1), -617.9512f, -240.0968f, 54.6514f, 1, 0, 0, 1);
			WEAPON::REMOVE_WEAPON_ASSET(iLocal_1464);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2590))
			{
				VEHICLE::DELETE_VEHICLE(&iLocal_2590);
			}
			iLocal_2406 = 0;
			return 1;
		}
	}
	return 0;
}

void func_876(int iParam0)//Position - 0x7DBE5
{
	if (CAM::DOES_CAM_EXIST(uLocal_3365))
	{
		CAM::STOP_CAM_SHAKING(uLocal_3365, iParam0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_3366))
	{
		CAM::STOP_CAM_SHAKING(uLocal_3366, iParam0);
	}
}

int func_877(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5)//Position - 0x7DC13
{
	int iVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
	return func_878(iParam0, iVar0, iParam1, bParam2, iParam3, iParam4, iParam5);
}

int func_878(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4, var uParam5, var uParam6)//Position - 0x7DC37
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	iVar0 = 0;
	iVar2 = iParam1;
	if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, iParam1, 0))
	{
		iVar0 = 1;
	}
	if (iVar2 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	iVar3 = 0;
	if (iParam2 == 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			iVar3 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar2);
		}
		if (iVar3 == -1)
		{
			iVar4 = WEAPON::GET_WEAPON_CLIP_SIZE(iVar2);
			if (iVar4 > 0)
			{
				iVar3 = iVar4;
			}
			else
			{
				WEAPON::GET_MAX_AMMO(iParam0, iVar2, &iVar3);
			}
		}
	}
	Var5 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) - Vector(10f, 0f, 0f) };
	if (bParam3)
	{
		Var5 = { uParam4, uParam5, uParam6 };
	}
	uVar1 = WEAPON::CREATE_WEAPON_OBJECT(iVar2, iVar3, Var5, iVar0, 1065353216, 0);
	while (GlobalFunc_4980(iVar2, iVar8) != 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iVar2, GlobalFunc_4980(iVar2, iVar8)))
			{
				WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(uVar1, GlobalFunc_4980(iVar2, iVar8));
			}
		}
		iVar8++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar2, 0))
		{
			WEAPON::SET_WEAPON_OBJECT_TINT_INDEX(iVar1, WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, iVar2));
		}
	}
	return iVar1;
}

void func_879(int iParam0, int iParam1, int iParam2)//Position - 0x7DD45
{
	if (!bLocal_2405)
	{
		WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iParam0, iParam1, iParam2);
	}
	else
	{
		WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iParam0, iParam1, joaat("component_at_ar_supp_02"));
	}
}



int func_882()//Position - 0x7DDAD
{
	int iVar0;
	
	if (!iLocal_2406)
	{
		func_475(&(iLocal_2486[1]), 1);
		func_475(&(iLocal_2486[0]), 1);
		PED::ADD_SCENARIO_BLOCKING_AREA(-655.1706f, -272.8408f, 9.4937f, -575.1706f, -152.8408f, 69.4937f, 0, 1, 1, 1);
		PED::SET_PED_NON_CREATION_AREA(-655.1706f, -272.8408f, 9.4937f, -575.1706f, -152.8408f, 69.4937f);
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			PED::DELETE_PED(&(Local_1532[iVar0 /*6*/]));
			iVar0++;
		}
		STREAMING::REMOVE_ANIM_DICT(sLocal_1754);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1753);
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SEAGULLS");
		func_130();
		func_821(Local_3369.f_35);
		func_823(Local_3369.f_24);
		func_823(Local_3369.f_25);
		WEAPON::REQUEST_WEAPON_ASSET(iLocal_1464, 31, 4);
		STREAMING::REQUEST_PTFX_ASSET();
		while (!func_819() || !WEAPON::HAS_WEAPON_ASSET_LOADED(iLocal_1464))
		{
			HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_Refit"), -587.171f, -286.01f, 30, 2);
			SYSTEM::WAIT(0);
		}
		func_616(1);
		func_9(iLocal_2486[0], 1, 0);
		func_9(iLocal_2486[1], 1, 0);
		func_742(1, 1, 1);
		func_9(func_93(0), 1, 1);
		func_617(func_93(0), 1);
		CUTSCENE::REQUEST_CUTSCENE(Local_3369.f_121, 8);
		PED::REQUEST_ACTION_MODE_ASSET("MICHAEL_ACTION");
		while (!CUTSCENE::HAS_CUTSCENE_LOADED() || !PED::HAS_ACTION_MODE_ASSET_LOADED("MICHAEL_ACTION"))
		{
			HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_Refit"), -587.171f, -286.01f, 30, 2);
			func_109(0);
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", func_93(0), 0);
			}
		}
		func_824(&iLocal_2604, -625.1706f, -232.8408f, 39.4937f, "V_JEWEL2", 1, 1);
		ENTITY::SET_ENTITY_COORDS(func_93(0), -630.2189f, -236.5104f, 37.057f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(func_93(0), 300.8775f);
		WEAPON::GIVE_WEAPON_TO_PED(func_93(0), iLocal_1464, 1000, 1, 1);
		func_879(func_93(0), iLocal_1464, joaat("component_at_ar_supp_02"));
		func_879(func_93(0), iLocal_1464, joaat("component_at_ar_supp_02"));
		if (!PED::IS_PED_INJURED(iLocal_2486[0]))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_2486[0], -634.4145f, -243.1337f, 37.2759f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iLocal_2486[0], 38.2811f);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_2486[0], iLocal_1464, 1000, 1, 1);
			func_617(iLocal_2486[0], 1);
		}
		if (!PED::IS_PED_INJURED(iLocal_2486[1]))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_2486[1], -637.5032f, -238.9592f, 37.0954f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iLocal_2486[1], 292.9207f);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_2486[1], iLocal_1464, 1000, 1, 1);
			func_879(iLocal_2486[0], iLocal_1464, joaat("component_at_ar_supp_02"));
			func_617(iLocal_2486[1], 1);
		}
		WEAPON::SET_CURRENT_PED_WEAPON(func_93(0), joaat("weapon_unarmed"), 1);
		func_871();
		func_111();
		iLocal_2431[0] = 0;
		func_108(800, 0, 0);
		iLocal_2467 = 0;
		iLocal_2407 = 0;
		iLocal_2406 = 1;
		iLocal_4990 = 0;
		AUDIO::_0x02E93C796ABD3A97(1);
		if (bLocal_2405)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("JH2A_GAS_SHOP_MA");
		}
	}
	else
	{
		switch (iLocal_2467)
		{
			case 0:
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_93(0), "Michael", 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "customer_1_withassist_1", 2, joaat("a_m_y_bevhills_01"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "shop_assistant", 2, joaat("a_f_y_business_02"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "customer_2_withassist_2", 2, joaat("a_m_y_bevhills_01"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "jewellery_Assitance", 2, joaat("ig_jewelass"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "security", 2, Local_3369.f_3, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "gunman_selection_1", 2, Local_3369.f_24, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "driver_selection", 2, Local_3369.f_25, 0);
				WEAPON::SET_CURRENT_PED_WEAPON(func_93(0), iLocal_1464, 1);
				WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(func_93(0), iLocal_1464, joaat("component_at_ar_supp_02"));
				func_879(func_93(0), iLocal_1464, joaat("component_at_ar_supp_02"));
				iLocal_2598 = func_877(func_93(0), 1, 0, 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2598, "Michaels_2_handedweapon", 0, 0, 0);
				iLocal_2599 = WEAPON::CREATE_WEAPON_OBJECT(iLocal_1464, -1, 0.1f, 1f, 1f, 1, 1065353216, 0);
				WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(iLocal_2599, joaat("component_at_ar_supp_02"));
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2599, "HC_GUNMAN_2_HANDEDWEAPON", 0, 0, 0);
				iLocal_2600 = WEAPON::CREATE_WEAPON_OBJECT(iLocal_1464, -1, 0.1f, 1f, 1f, 1, 1065353216, 0);
				WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(iLocal_2600, joaat("component_at_ar_supp_02"));
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2600, "HC_GUNMAN1_2_HANDEDWEAPON", 0, 0, 0);
				iLocal_4991 = 0;
				iLocal_4992 = 0;
				GlobalFunc_8316(1, 1, 1, 0);
				iLocal_2479 = 0;
				iLocal_2480 = 0;
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				STREAMING::REQUEST_MODEL(Local_3369.f_18);
				STREAMING::REQUEST_MODEL(Local_3369.f_19);
				STREAMING::REQUEST_MODEL(Local_3369.f_20);
				STREAMING::REQUEST_MODEL(Local_3369.f_21);
				STREAMING::REQUEST_ANIM_DICT(Local_3369.f_35);
				STREAMING::REQUEST_ANIM_DICT(Local_3369.f_61);
				STREAMING::REQUEST_ANIM_DICT(Local_3369.f_35);
				iLocal_4993 = 0;
				iLocal_2467++;
				break;
			
			case 1:
			case 2:
				if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 14100f && iLocal_2479 == 0)
				{
					if (bLocal_2405)
					{
						if (AUDIO::PREPARE_MUSIC_EVENT("JH2A_GAS_SHOP_OS"))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("JH2A_GAS_SHOP_OS");
							iLocal_2479 = 1;
						}
					}
				}
				if ((IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 20000f && iLocal_2480 == 0) && iLocal_2479 == 1)
				{
					if (bLocal_2405)
					{
						if (AUDIO::PREPARE_MUSIC_EVENT("JH2A_ENTER_SHOP_MA"))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("JH2A_ENTER_SHOP_MA");
							iLocal_2480 = 1;
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Franklin", 0)))
				{
					Local_2659[1] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Franklin", 0));
				}
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("customer_1_withassist_1", 0)))
				{
					iLocal_2492[1] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("customer_1_withassist_1", 0));
				}
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("shop_assistant", 0)))
				{
					iLocal_2492[2] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("shop_assistant", 0));
				}
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("customer_2_withassist_2", 0)))
				{
					iLocal_2492[3] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("customer_2_withassist_2", 0));
				}
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("jewellery_Assitance", 0)))
				{
					iLocal_2492[4] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("jewellery_Assitance", 0));
				}
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("security", 0)))
				{
					iLocal_2491 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("security", 0));
				}
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("driver_selection", 0)) && iLocal_4991 == 0)
				{
					iLocal_2486[0] = func_738(0, 0, 100f, 100f, 100f, 0f, 0, 1);
					PED::DELETE_PED(&(iLocal_2486[0]));
					iLocal_2486[0] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("driver_selection", 0));
					func_9(iLocal_2486[0], 1, 0);
					iLocal_4991 = 1;
				}
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("gunman_selection_1", 0)) && iLocal_4992 == 0)
				{
					iLocal_2486[1] = func_738(0, 1, 100f, 100f, 100f, 0f, 0, 1);
					PED::DELETE_PED(&(iLocal_2486[1]));
					iLocal_2486[1] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("gunman_selection_1", 0));
					func_9(iLocal_2486[1], 1, 0);
					iLocal_4992 = 1;
				}
				if (iLocal_4990 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2486[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_2486[1]))
					{
						func_616(1);
						func_9(iLocal_2486[1], 1, 0);
						func_9(iLocal_2486[0], 1, 0);
						iLocal_4990 = 1;
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(1))
				{
				}
				if (iLocal_2467 == 1)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 22655)
					{
						iLocal_2467 = 2;
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
				{
					if (GlobalFunc_8315() != 0)
					{
						GlobalFunc_9019(&Local_2659, 0);
						func_167(&Local_2659, 1, 0, 0);
						func_619(func_93(0));
						func_619(func_93(1));
					}
					PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
					PED::FORCE_PED_MOTION_STATE(func_93(0), -762290521, 1, 1, 0);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 250, 0, 1, 0);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michaels_2_handedweapon", 0))
				{
					WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_2598, func_93(0));
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("HC_GUNMAN_2_HANDEDWEAPON", 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_2486[0]))
					{
						WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_2599, iLocal_2486[0]);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("HC_GUNMAN1_2_HANDEDWEAPON", 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_2486[1]))
					{
						WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_2600, iLocal_2486[1]);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("customer_1_withassist_1", 0))
				{
					TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_2492[1], Local_3369.f_35, Local_3369.f_49[0], Local_1710, Local_1713, 1000f, -1000f, -1, 2364416, 0.8f, 2, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_2492[1], 0, 0);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("shop_assistant", 0))
				{
					TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_2492[2], Local_3369.f_35, Local_3369.f_49[1], Local_1710 + Vector(-0.85f, 0f, 0f), Local_1713, 1000f, -1000f, -1, 2102272, 0.8f, 2, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_2492[2], 0, 0);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("customer_2_withassist_2", 0))
				{
					TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_2492[3], Local_3369.f_35, Local_3369.f_49[2], Local_1710, Local_1713, 1000f, -1000f, -1, 2102272, 0.8f, 2, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_2492[3], 0, 0);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("jewellery_Assitance", 0))
				{
					TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_2492[4], Local_3369.f_35, Local_3369.f_49[3], Local_1710, Local_1713, 1000f, -1000f, -1, 2364416, 0.8f, 2, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_2492[4], 0, 0);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("security", 0))
				{
					TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_2491, Local_3369.f_35, Local_3369.f_47, Local_1710, Local_1713, 1000f, -1000f, -1, 2102272, 0.8f, 2, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_2491, 0, 0);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("gunman_selection_1", 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2486[iLocal_2470]))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_2486[iLocal_2470], -631.8019f, -234.8645f, 37.057f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iLocal_2486[iLocal_2470], 320.984f);
						PED::SET_PED_USING_ACTION_MODE(iLocal_2486[iLocal_2470], 1, -1, 0);
					}
				}
				if (CUTSCENE::IS_CUTSCENE_PLAYING() && iLocal_4993 == 0)
				{
					MISC::CLEAR_AREA(Local_2656, 5000f, 1, 1, 0, 0);
					WEAPON::SET_CURRENT_PED_WEAPON(func_93(1), joaat("weapon_unarmed"), 0);
					iLocal_4993 = 1;
				}
				if (CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					if (!iLocal_2431[0])
					{
						func_845(10, Local_3369.f_253, -623.02f, -224.89f, 42.27f, 1);
						iLocal_2431[0] = 1;
					}
					if (iLocal_2423)
					{
						iLocal_2423 = 0;
						iLocal_2466 = 0;
						while (iLocal_2466 <= 19)
						{
							uLocal_2642 = OBJECT::GET_RAYFIRE_MAP_OBJECT(Local_1758[iLocal_2466 /*30*/], 1f, Local_1758[iLocal_2466 /*30*/].f_27);
							if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_2642))
							{
								if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_2642) != 3)
								{
									OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_2642, 11);
								}
							}
							else
							{
								iLocal_2423 = 1;
							}
							iLocal_2466++;
						}
					}
				}
				else
				{
					func_870(1, 0, 0, 0, 1);
					GlobalFunc_8316(0, 1, 1, 0);
					func_111();
					iLocal_2467++;
				}
				break;
		}
		if (iLocal_2467 >= 3)
		{
			GlobalFunc_2898(0);
			func_783(5);
			func_111();
			WEAPON::REMOVE_WEAPON_ASSET(iLocal_1464);
			if (GlobalFunc_8315() != 0)
			{
				GlobalFunc_9019(&Local_2659, 0);
				func_167(&Local_2659, 1, 0, 0);
				func_619(func_93(0));
				func_619(func_93(1));
			}
			RECORDING::_0x81CBAE94390F9F89();
			STREAMING::NEW_LOAD_SCENE_STOP();
			iLocal_2406 = 0;
			iLocal_2407 = 0;
			return 1;
		}
	}
	return 0;
}

int func_883()//Position - 0x7E922
{
	if (!iLocal_2406)
	{
		func_559(2, "STAGE_ROOF", 0, 0, 0, 1);
		Global_89962.f_12[0] = 0;
		func_472(&iLocal_2552, 1);
		func_475(&(iLocal_2486[2]), 1);
		func_475(&(iLocal_2486[2]), 1);
		func_475(&(iLocal_2486[1]), 1);
		func_475(&(iLocal_2486[0]), 1);
		func_475(&iLocal_2519, 1);
		func_130();
		func_821(Local_3369.f_35);
		func_823(joaat("prop_ld_test_01"));
		func_823(Local_3369.f_2);
		while (!func_819())
		{
			SYSTEM::WAIT(0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2590))
		{
			iLocal_2590 = VEHICLE::CREATE_VEHICLE(Local_3369.f_2, -651.1321f, -234.4142f, 36.5393f, 75.5169f, 1, 1);
			func_886();
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2590))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2590);
			ENTITY::SET_ENTITY_COORDS(iLocal_2590, -651.1321f, -234.4142f, 36.5393f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iLocal_2590, 75.5169f);
		}
		func_656(Local_3369.f_219, 1, 0, 1);
		if (HUD::DOES_BLIP_EXIST(uLocal_2619))
		{
			HUD::REMOVE_BLIP(&uLocal_2619);
		}
		uLocal_2619 = GlobalFunc_5104(Local_1637[5 /*3*/], 0);
		func_845(5, Local_3369.f_251, -622.4f, -233.6f, 57.7f, 1);
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
		if (GlobalFunc_8315() != 1)
		{
			GlobalFunc_9019(&Local_2659, 1);
			func_167(&Local_2659, 1, 1, 0);
			func_619(func_93(0));
			func_619(func_93(1));
			func_742(1, 1, 1);
			func_9(func_93(0), 1, 1);
			func_617(func_93(0), 1);
		}
		WEAPON::GIVE_WEAPON_TO_PED(func_93(1), joaat("weapon_bzgas"), (5 - WEAPON::GET_AMMO_IN_PED_WEAPON(func_93(1), joaat("weapon_bzgas"))), 0, 0);
		iLocal_1501 = 1;
		TASK::TASK_CLEAR_LOOK_AT(func_93(1));
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_3369.f_1, 0);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_3369.f_2, 0);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_3369.f_12, 0);
		func_556(0);
		func_111();
		func_108(800, 0, 0);
		iLocal_4988 = MISC::GET_GAME_TIMER();
		iLocal_2467 = 0;
		iLocal_2406 = 1;
		iLocal_4985 = 0;
		func_824(&iLocal_2604, -625.1706f, -232.8408f, 39.4937f, "V_JEWEL2", 0, 0);
		iLocal_4987 = 0;
		AUDIO::REQUEST_AMBIENT_AUDIO_BANK("JWL_HEIST_GRENADES", 0);
		iLocal_4986 = 0;
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2537))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2537))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_2537, 1), ENTITY::GET_ENTITY_COORDS(func_93(1), 1), 1) > 50f)
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_2537))
					{
						VEHICLE::DELETE_VEHICLE(&iLocal_2537);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("primo"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3369.f_1);
						ENTITY::SET_ENTITY_COORDS(func_93(0), -661.0373f, -222.0719f, 36.7327f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(func_93(0), 80.2333f);
					}
				}
			}
		}
		if (iLocal_2467 <= 5)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(func_93(1), -631.597f, -237.6347f, 38.87703f, 3f, 3f, 1.8125f, false, 1, 0) && (MISC::GET_GAME_TIMER() - iLocal_4977) > 10000)
			{
				func_831(1, 0f);
				if (ENTITY::IS_ENTITY_AT_COORD(func_93(1), -631.597f, -237.6347f, 38.87703f, 1.5f, 1.5f, 1.8125f, false, 1, 0))
				{
					if (!func_834(Local_3369.f_199) && !func_858(Local_3369.f_199))
					{
						func_604(Local_3369.f_199, 1, 1, 1, 7, 0, 0);
						iLocal_4977 = MISC::GET_GAME_TIMER();
					}
				}
			}
		}
		iLocal_2466 = 0;
		while (iLocal_2466 <= 5)
		{
			if (iLocal_2467 < iLocal_2466)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(func_93(1), Local_1637[iLocal_2466 /*3*/], 2f, 2f, 1.5f, iLocal_2466 == 5, 1, 0))
				{
					iLocal_2467 = iLocal_2466;
				}
			}
			iLocal_2466++;
		}
		switch (iLocal_2467)
		{
			case 0:
				if (ENTITY::IS_ENTITY_AT_COORD(func_93(1), Local_1637[0 /*3*/], 2f, 2f, 1.5f, false, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_93(1), -584.54f, -289.9488f, 34.45472f, -591.3989f, -279.3279f, 39.77776f, 13.25f, 0, 1, 0))
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_2A_GET_TO_STORE"))
					{
						AUDIO::STOP_AUDIO_SCENE("JSH_2A_GET_TO_STORE");
					}
					AUDIO::START_AUDIO_SCENE("JSH_2A_GET_TO_ROOF");
					func_656("JH_SHOUT", 0, 0, 1);
					RECORDING::_0x293220DA1B46CEBC(3f, 3f, 4);
					iLocal_2467++;
				}
				break;
			
			case 1:
				if (ENTITY::IS_ENTITY_AT_COORD(func_93(1), Local_1637[1 /*3*/], 2f, 2f, 1.5f, false, 1, 0))
				{
					func_656(Local_3369.f_189, 0, 0, 1);
					iLocal_2467++;
				}
				break;
			
			case 2:
				if (ENTITY::IS_ENTITY_AT_COORD(func_93(1), Local_1637[2 /*3*/], 3f, 3f, 1.5f, false, 1, 0))
				{
					RECORDING::_0x293220DA1B46CEBC(3f, 3f, 4);
					TASK::TASK_LOOK_AT_COORD(func_93(1), -595.126f, -293.2816f, 46.5502f, 5000, 2048, 2);
					iLocal_2467++;
				}
				break;
			
			case 3:
				if (ENTITY::IS_ENTITY_AT_COORD(func_93(1), Local_1637[3 /*3*/], 2f, 2f, 1.5f, false, 1, 0))
				{
					iLocal_2467++;
					AUDIO::STOP_AUDIO_SCENE("JSH_2A_GET_TO_ROOF");
					AUDIO::START_AUDIO_SCENE("JSH_2A_GET_ACROSS_ROOF");
					RECORDING::_0x293220DA1B46CEBC(3f, 3f, 4);
				}
				break;
			
			case 4:
				if (ENTITY::IS_ENTITY_AT_COORD(func_93(1), Local_1637[4 /*3*/], 4f, 4f, 1.5f, false, 1, 0) && GlobalFunc_10618(&uLocal_2737, "JHAUD", Local_3369.f_131, 9, 0, 0, 0))
				{
					if (WEAPON::HAS_PED_GOT_WEAPON(func_93(1), joaat("weapon_grenade"), 0) && WEAPON::GET_PED_AMMO_BY_TYPE(func_93(1), WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(func_93(1), joaat("weapon_grenade"))) > 0)
					{
						func_656("JH_GRENADE", 0, 0, 1);
					}
					MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(func_93(1), 1), 200f, 0);
					RECORDING::_0x293220DA1B46CEBC(3f, 5f, 4);
					iLocal_2467++;
				}
				break;
			
			case 5:
				ENTITY::IS_ENTITY_AT_COORD(func_93(1), Local_1637[5 /*3*/], 3.5f, 3.5f, 1.75f, true, 1, 0);
				if (ENTITY::IS_ENTITY_AT_COORD(func_93(1), -625.9125f, -216.1734f, 60.4256f, 3.5f, 3.5f, 1.75f, false, 1, 0) && !PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
				{
					func_737(&uLocal_2619);
					AUDIO::STOP_AUDIO_SCENE("JSH_2A_GET_ACROSS_ROOF");
					AUDIO::START_AUDIO_SCENE("JSH_2A_THROW_GAS");
					GlobalFunc_159("JH_GRENHELP1", -1);
					func_656("JH_ANGLE", 0, 0, 1);
					func_656("JWL_VENT", 1, 0, 1);
					iLocal_1757 = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), -622.4311f, -233.6548f, 58.41259f, 1, 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_1757, true);
					ENTITY::SET_ENTITY_COLLISION(iLocal_1757, false, 0);
					OBJECT::SET_OBJECT_TARGETTABLE(iLocal_1757, 1);
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_1757, 1, 0);
					TASK::TASK_LOOK_AT_ENTITY(func_93(1), iLocal_1757, 60000, 2048, 2);
					AUDIO::STOP_PED_SPEAKING(func_93(0), 1);
					uLocal_1517 = GlobalFunc_6799(iLocal_1757);
					HUD::SET_BLIP_COLOUR(uLocal_1517, 2);
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					iLocal_2467 = 6;
				}
				break;
			
			case 6:
				if (HUD::IS_HUD_COMPONENT_ACTIVE(19))
				{
					if (HUD::_HUD_WEAPON_WHEEL_GET_SELECTED_HASH() == joaat("weapon_grenade"))
					{
						if (iLocal_4978 == 0)
						{
							GlobalFunc_159("JH_GRENHELPG", -1);
							iLocal_4978 = 1;
						}
					}
					else if (HUD::_HUD_WEAPON_WHEEL_GET_SELECTED_HASH() == joaat("weapon_bzgas"))
					{
						iLocal_2467++;
					}
				}
				break;
			
			case 7:
				WEAPON::GET_CURRENT_PED_WEAPON(func_93(1), &iLocal_4981, 1);
				if (iLocal_4981 == joaat("weapon_bzgas") && iLocal_4985 == 0)
				{
					GlobalFunc_159("JH_GRENHELP2", -1);
					iLocal_4985 = 1;
				}
				break;
			
			case 8:
				if (SYSTEM::TIMERA() > 500)
				{
					if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_CANIN", 9, 0, 0, 0))
					{
						iLocal_2467++;
					}
				}
				break;
			
			case 9:
				if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					iLocal_2467++;
				}
				break;
			
			case 10:
				break;
		}
		if (iLocal_2467 >= 3)
		{
			if (iLocal_4986 == 0)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(func_93(1), Local_1637[5 /*3*/], 20.5f, 20.5f, 15.75f, true, 1, 0))
				{
					STREAMING::NEW_LOAD_SCENE_START_SPHERE(-623.7916f, -232.2508f, 38.3262f, 35f, 0);
					iLocal_4986 = 1;
				}
			}
			EVENT::SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME();
			HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_Refit"), -587.171f, -286.01f, 30, 2);
			HUD::SET_RADAR_ZOOM(0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1757) && iLocal_2467 < 8)
		{
			ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -622.4559f, -233.6758f, 56.7967f, 0.1f, 0.1f, 0.1f, !iLocal_4987, 1, 0);
		}
		if (iLocal_2467 < 8)
		{
			if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(-622.4311f, -233.6548f, 58.41259f, joaat("weapon_bzgas"), 1f, 1))
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("JWL_HEIST_GRENADES", 0))
				{
					if (iLocal_4987 == 0)
					{
						AUDIO::PLAY_SOUND_FROM_COORD(-1, "Grenade_Throw_Success", -622.4311f, -233.6548f, 58.41259f, "JEWEL_HEIST_SOUNDS", 0, 0, 0);
						HUD::CLEAR_PRINTS();
						RECORDING::_0x293220DA1B46CEBC(8f, 3f, 4);
						iLocal_4989 = 0;
						iLocal_4987 = 1;
					}
				}
			}
			else if (!MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(-622.4311f, -233.6548f, 58.41259f, joaat("weapon_bzgas"), 1.4f, 1))
			{
				iLocal_4987 = 0;
			}
			if (FIRE::IS_EXPLOSION_IN_SPHERE(21, -622.4311f, -233.6548f, 58.41259f, 1.5f))
			{
				SYSTEM::SETTIMERA(0);
				iLocal_2467 = 8;
			}
		}
		if (iLocal_4987 == 1 && iLocal_4989 == 0)
		{
			if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_LANDG", 9, 0, 0, 0))
			{
				iLocal_4989 = 1;
			}
		}
		if ((PAD::IS_CONTROL_JUST_PRESSED(0, 24) && !MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), joaat("weapon_bzgas"), 2f, 1)) && iLocal_2467 < 8)
		{
			iLocal_1502 = MISC::GET_GAME_TIMER();
			iLocal_4980 = 0;
			iLocal_4979 = 0;
		}
		if (iLocal_4979 == 0 && iLocal_2467 < 8)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_1502) > 4200)
			{
				if ((MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(-587.7454f, -295.5597f, -34.0722f, -638.5672f, -203.2724f, 165.5777f, 33.25f, joaat("weapon_bzgas"), 1) && !MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(-620.6958f, -236.4711f, 58.13749f, -624.1169f, -230.8335f, 59.13751f, 3f, joaat("weapon_bzgas"), 1)) && !FIRE::IS_EXPLOSION_IN_SPHERE(21, -622.4311f, -233.6548f, 58.41259f, 1.5f))
				{
					if (iLocal_4980 == 0)
					{
						MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(PLAYER::PLAYER_PED_ID(), joaat("weapon_bzgas"), 30.5f, &Local_4982, 0);
						AUDIO::PLAY_SOUND_FROM_COORD(-1, "Grenade_Throw_Miss", Local_4982, "JEWEL_HEIST_SOUNDS", 0, 0, 0);
						iLocal_4980 = 1;
					}
					if (MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(-622.451f, -233.7207f, 59.38752f, -609.8139f, -256.9233f, 51.04313f, 20.5f, joaat("weapon_bzgas"), 1))
					{
						if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_FAR", 9, 0, 0, 0))
						{
							iLocal_4979 = 1;
						}
					}
					else if (MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(-622.451f, -233.7207f, 59.38752f, -630.0067f, -220.0716f, 52.29401f, 20.5f, joaat("weapon_bzgas"), 1))
					{
						if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_SHORT", 9, 0, 0, 0))
						{
							iLocal_4979 = 1;
						}
					}
					else if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_MISS", 9, 0, 0, 0))
					{
						iLocal_4979 = 1;
					}
				}
			}
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_4988) > 70000 && iLocal_4987 == 0)
		{
			func_656("JH_IMP", 0, 0, 1);
			func_656("JH_CHILL", 0, 0, 1);
			iLocal_4988 = MISC::GET_GAME_TIMER();
		}
		func_884();
		if (iLocal_2467 >= 10)
		{
			func_472(&iLocal_2590, 1);
			CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
			HUD::REMOVE_BLIP(&uLocal_1517);
			func_831(0, 0f);
			func_474(&iLocal_1757, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2537, 0))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_2537);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_2619))
			{
				HUD::REMOVE_BLIP(&uLocal_2619);
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_2A_GET_TO_ROOF"))
			{
				AUDIO::STOP_AUDIO_SCENE("JSH_2A_GET_TO_ROOF");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_2A_GET_TO_ROOF"))
			{
				AUDIO::STOP_AUDIO_SCENE("JSH_2A_GET_ACROSS_ROOF");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_2A_THROW_GAS"))
			{
				AUDIO::STOP_AUDIO_SCENE("JSH_2A_THROW_GAS");
			}
			if (!PED::IS_PED_INJURED(func_93(0)))
			{
				AUDIO::STOP_PED_SPEAKING(func_93(0), 0);
			}
			iLocal_2406 = 0;
			return 1;
		}
	}
	return 0;
}

void func_884()//Position - 0x7F52D
{
	int iVar0;
	
	switch (iLocal_1531)
	{
		case 0:
			if (Global_86791 == 1)
			{
				iVar0 = 0;
				while (iVar0 < Local_1532)
				{
					Local_1532[iVar0 /*6*/].f_1 = 0;
					iVar0++;
				}
				iLocal_1557 = 0;
				STREAMING::REQUEST_MODEL(iLocal_1753);
				STREAMING::REQUEST_ANIM_DICT(sLocal_1754);
				iLocal_1531++;
			}
			break;
		
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(iLocal_1753) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_1754))
			{
				iLocal_1531++;
			}
			break;
		
		case 2:
			iVar0 = 0;
			while (iVar0 < Local_1532)
			{
				if (Local_1532[iVar0 /*6*/].f_1 == 0)
				{
					if (iVar0 == 0)
					{
						Local_1532[iVar0 /*6*/] = PED::CREATE_PED(26, iLocal_1753, Vector(49.3284f, -293.4879f, -592.2896f) + Vector(-0.15f, 0f, 0f), 298.4107f, 1, 1);
					}
					else if (iVar0 == 1)
					{
						Local_1532[iVar0 /*6*/] = PED::CREATE_PED(26, iLocal_1753, Vector(49.3288f, -279.8143f, -589.9229f) + Vector(-0.15f, 0f, 0f), 233.7321f, 1, 1);
					}
					else if (iVar0 == 2)
					{
						Local_1532[iVar0 /*6*/] = PED::CREATE_PED(26, iLocal_1753, Vector(49.9288f, -283.9244f, -581.4795f) + Vector(-0.15f, 0f, 0f), 358.268f, 1, 1);
					}
					else if (iVar0 == 3)
					{
						Local_1532[iVar0 /*6*/] = PED::CREATE_PED(26, iLocal_1753, Vector(49.9288f, -285.6026f, -580.4676f) + Vector(-0.15f, 0f, 0f), 199.0853f, 1, 1);
					}
					else if (iVar0 == 4)
					{
						Local_1532[iVar0 /*6*/] = PED::CREATE_PED(26, iLocal_1753, Vector(49.3287f, -278.951f, -587.5387f) + Vector(-0.15f, 0f, 0f), 45.4051f, 1, 1);
					}
					else if (iVar0 == 5)
					{
						Local_1532[iVar0 /*6*/] = PED::CREATE_PED(26, iLocal_1753, Vector(49.3285f, -288.1526f, -589.8799f) + Vector(-0.15f, 0f, 0f), 319.812f, 1, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1753);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1532[iVar0 /*6*/], 1);
					PED::SET_PED_CAN_RAGDOLL(Local_1532[iVar0 /*6*/], 1);
					ENTITY::FREEZE_ENTITY_POSITION(Local_1532[iVar0 /*6*/], true);
					ENTITY::SET_ENTITY_COLLISION(Local_1532[iVar0 /*6*/], true, 0);
					PED::SET_PED_CAN_BE_TARGETTED(Local_1532[iVar0 /*6*/], 0);
					AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Seagulls", 0);
				}
				iVar0++;
			}
			iLocal_1531++;
			break;
		
		case 3:
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -584.7792f, -291.4717f, 49.07785f, -591.996f, -278.703f, 55.47215f, 15.75f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -592.7419f, -291.9719f, 49.327f, 2.15f, 2.15f, 2f, false, 1, 0)) || iLocal_1557 == 1)
			{
				if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_FRANSCARE", 8, 0, 0, 0))
				{
					iLocal_1557 = 1;
					iLocal_1531++;
				}
			}
			break;
		
		case 4:
			Global_86791 = 0;
			iVar0 = 0;
			while (iVar0 < Local_1532)
			{
				if (Local_1532[iVar0 /*6*/].f_1 == 0)
				{
					if (!PED::IS_PED_INJURED(Local_1532[iVar0 /*6*/]))
					{
						TASK::TASK_PLAY_ANIM(Local_1532[iVar0 /*6*/], sLocal_1754, "idle", 8f, -8f, -1, 9, 0, 0, 0, 0);
						Local_1532[iVar0 /*6*/].f_1 = 1;
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(Local_1532[iVar0 /*6*/]))
				{
					if (!PED::IS_PED_INJURED(Local_1532[iVar0 /*6*/]))
					{
						switch (Local_1532[iVar0 /*6*/].f_1)
						{
							case 1:
								if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Seagulls", 0) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1532[iVar0 /*6*/], 1)) < 625f)
								{
									if (iVar0 == 0)
									{
										AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Seagulls", Local_1532[iVar0 /*6*/], "JEWEL_HEIST_SOUNDS", 0, 0);
									}
									Local_1532[iVar0 /*6*/].f_2 = MISC::GET_GAME_TIMER();
									Local_1532[iVar0 /*6*/].f_1++;
								}
								break;
							
							case 2:
								if ((MISC::GET_GAME_TIMER() - Local_1532[iVar0 /*6*/].f_2) > 100)
								{
									ENTITY::FREEZE_ENTITY_POSITION(Local_1532[iVar0 /*6*/], false);
									ENTITY::SET_ENTITY_COLLISION(Local_1532[iVar0 /*6*/], true, 0);
									Local_1532[iVar0 /*6*/].f_3 = { GlobalFunc_590(ENTITY::GET_ENTITY_ROTATION(Local_1532[iVar0 /*6*/], 2) + Vector(0f, 0f, 45f)) };
									ENTITY::SET_ENTITY_VELOCITY(Local_1532[iVar0 /*6*/], Local_1532[iVar0 /*6*/].f_3 * Vector(7f, 7f, 7f));
									TASK::TASK_PLAY_ANIM(Local_1532[iVar0 /*6*/], sLocal_1754, "flapping", 4f, -8f, -1, 1, 0, 0, 0, 0);
									Local_1532[iVar0 /*6*/].f_1++;
								}
								break;
							
							case 3:
								if (!PED::IS_PED_INJURED(Local_1532[iVar0 /*6*/]))
								{
									ENTITY::SET_ENTITY_VELOCITY(Local_1532[iVar0 /*6*/], Local_1532[iVar0 /*6*/].f_3 * Vector(7f, 7f, 7f));
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1532[iVar0 /*6*/], sLocal_1754, "flapping", 3))
									{
										ENTITY::SET_ENTITY_ANIM_SPEED(Local_1532[iVar0 /*6*/], sLocal_1754, "flapping", 1f);
										Local_1532[iVar0 /*6*/].f_1++;
									}
								}
								break;
							
							case 4:
								if (!PED::IS_PED_INJURED(Local_1532[iVar0 /*6*/]))
								{
									ENTITY::SET_ENTITY_VELOCITY(Local_1532[iVar0 /*6*/], Local_1532[iVar0 /*6*/].f_3 * Vector(7f, 7f, 7f));
								}
								break;
							}
					}
					if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -591.4834f, -291.3098f, 49.3284f, 7.5f, 7.5f, 7.5f, false, 1, 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						PED::DELETE_PED(&(Local_1532[iVar0 /*6*/]));
					}
				}
				else if (iVar0 == 0)
				{
					STREAMING::REMOVE_ANIM_DICT(sLocal_1754);
					AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("Seagulls");
				}
				iVar0++;
			}
			break;
	}
}


void func_886()//Position - 0x7FAED
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_2590))
	{
		if (bLocal_2405)
		{
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_2590, "TODO PT1");
		}
		else
		{
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_2590, "RW1602B0");
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_2590, 0, 0);
		}
	}
}

int func_887()//Position - 0x7FB2A
{
	if (!iLocal_2406)
	{
		func_559(1, "STAGE_DRIVE_TO_STORE", 0, 0, 0, 1);
		Global_89962.f_12[0] = 0;
		func_130();
		VEHICLE::REQUEST_VEHICLE_RECORDING(1, "JHArrive");
		VEHICLE::REQUEST_VEHICLE_RECORDING(2, "JHArrive");
		VEHICLE::REQUEST_VEHICLE_RECORDING(3, "JHArrive");
		VEHICLE::REQUEST_VEHICLE_RECORDING(1, "JHBENSONEXIT");
		func_893(Local_3369.f_244, 0, 1);
		func_893(Local_3369.f_245, 0, 1);
		Local_2457 = { Local_1619 };
		func_111();
		iLocal_2466 = 0;
		while (iLocal_2466 <= 24)
		{
			iLocal_2431[iLocal_2466] = 0;
			iLocal_2466++;
		}
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_3369.f_2, 1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_3369.f_12, 1);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2552))
		{
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2552, 0);
		}
		Local_2380 = GlobalFunc_6783(iLocal_2590, 0, 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2552, 0))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_2552, 3);
		}
		func_604(Local_3369.f_156, 1, 1, 1, 7, 0, 0);
		func_656(Local_3369.f_231, 1, 0, 1);
		if (func_537())
		{
			func_656("JH_VAN_PH", 0, 0, 1);
		}
		else if (func_536())
		{
			func_656("JH_VAN_CF", 0, 0, 1);
		}
		else if (func_535())
		{
			func_656("JH_VAN_RL", 0, 0, 1);
		}
		if (func_113() && func_117())
		{
			func_656("JH_VAN_GE", 0, 0, 1);
		}
		else if (func_113() && func_115())
		{
			func_656("JH_VAN_GK", 0, 0, 1);
		}
		else if (func_114() && func_117())
		{
			func_656("JH_VAN_PE", 0, 0, 1);
		}
		else if (func_114() && func_115())
		{
			func_656("JH_VAN_PK", 0, 0, 1);
		}
		else if (func_112() && func_117())
		{
			func_656("JH_VAN_NE", 0, 0, 1);
		}
		else if (func_112() && func_115())
		{
			func_656("JH_VAN_NK", 0, 0, 1);
		}
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(756.4408f, -1005.63f, 21.89208f, 753.2204f, -919.5325f, 30.69128f, 55f, 0, 0, 1);
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(777.2901f, -991.4522f, 23.63091f, 770.1435f, -740.8588f, 31.30616f, 13.5f, 0, 0, 1);
		fLocal_4963 = 1f;
		bLocal_4966 = false;
		AUDIO::TRIGGER_MUSIC_EVENT("JH2B_VEHICLE");
		bLocal_4971 = false;
		SYSTEM::SETTIMERA(0);
		iLocal_4967 = 0;
		func_108(800, 0, 0);
		iLocal_4965 = 0;
		iLocal_4969 = 0;
		iLocal_2467 = 0;
		iLocal_96 = 0;
		iLocal_2406 = 1;
		RECORDING::_0x293220DA1B46CEBC(0f, 6f, 4);
	}
	else
	{
		switch (iLocal_4975)
		{
			case 0:
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_1710, 100f, 100f, 100f, false, 1, 0))
				{
					func_9(iLocal_2486[0], 1, 1);
					func_9(iLocal_2486[1], 1, 1);
					CUTSCENE::REQUEST_CUTSCENE(Local_3369.f_122, 8);
					iLocal_4975++;
				}
				break;
			
			case 1:
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					GlobalFunc_10914("Franklin", joaat("player_one"), 18);
					GlobalFunc_10914("Michael", joaat("player_zero"), 31);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 9, 1, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Michael", 2, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("gunman_selection_1", iLocal_2486[1], 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("driver_selection", iLocal_2486[0], 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("angry_customer", 0, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("angry_customer", 2, 1, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("angry_customer", 3, 1, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("angry_customer", 4, 1, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("angry_customer", 8, 0, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2492[1]))
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Jewellery_Assitance", iLocal_2492[1], 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2492[4]))
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("shop_assistant", iLocal_2492[4], 0);
					}
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("boyfriend", 0, 1, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("boyfriend", 2, 1, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("boyfriend", 3, 0, 5, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("boyfriend", 4, 1, 2, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("boyfriend", 8, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("customer", 0, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("customer", 2, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("customer", 3, 0, 1, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("customer", 4, 1, 1, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("customer", 8, 0, 0, 0);
					iLocal_4975++;
				}
				break;
			
			case 2:
				if (CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					STREAMING::REQUEST_MODEL(Local_3369.f_3);
					iLocal_2466 = 0;
					while (iLocal_2466 <= 4)
					{
						STREAMING::REQUEST_MODEL(Local_3369.f_4[iLocal_2466]);
						iLocal_2466++;
					}
					STREAMING::REQUEST_ANIM_DICT(Local_3369.f_35);
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "JHArrive");
					VEHICLE::REQUEST_VEHICLE_RECORDING(2, "JHArrive");
					VEHICLE::REQUEST_VEHICLE_RECORDING(3, "JHArrive");
					WEAPON::REQUEST_WEAPON_ASSET(iLocal_1464, 31, 16);
					iLocal_4975++;
				}
				break;
		}
		func_892();
		if (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) || iLocal_4965 == 1)
		{
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(func_93(0), 2f);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_2486[0], 2f);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_2486[1], 2f);
			iLocal_4965 = 1;
		}
		else
		{
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(func_93(0), 1f);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_2486[0], 1f);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_2486[1], 1f);
		}
		TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_2486[2], 1f);
		switch (iLocal_2467)
		{
			case 0:
				iLocal_4970 = 0;
				AUDIO::TRIGGER_MUSIC_EVENT("JH2B_START");
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2552))
				{
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_2552, 0, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2590))
				{
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_2590, 0, 0);
					VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_2590, 1, 0);
				}
				SYSTEM::SETTIMERA(0);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_2486[0], 1);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_2486[1], 1);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_2486[2], 1);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_93(0), 1);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_2486[2], PLAYER::PLAYER_PED_ID(), -1);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_2486[2], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_2486[0], iLocal_2486[1], -1, 0, 2);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_2486[1], iLocal_2486[0], -1, 0, 2);
				TASK::TASK_LOOK_AT_ENTITY(func_93(0), PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				if (!PED::IS_PED_INJURED(func_93(0)))
				{
					if (!PED::IS_PED_INJURED(func_93(0)) && !PED::IS_PED_INJURED(func_93(1)))
					{
						TASK::TASK_LOOK_AT_ENTITY(func_93(0), func_93(1), 99999999, 2048, 2);
					}
					func_847(Local_2659[0], 713.2115f, -962.9461f, 29.4335f, 190.7033f, 1f, 1f, 15f);
				}
				iLocal_2467++;
				break;
			
			case 1:
				if ((((ENTITY::IS_ENTITY_AT_COORD(func_93(1), Local_1662, 9f, 9f, 3f, false, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_93(1), 718.0956f, -975.3729f, 23.70991f, 717.5604f, -965.2232f, 31.39535f, 3.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_ENTITY(func_93(1), iLocal_2590, 5f, 5f, 1.5f, 0, 1, 0)) || PAD::IS_CONTROL_PRESSED(0, 31)) || PAD::IS_CONTROL_PRESSED(0, 30))
				{
					func_891(func_93(0), iLocal_2590, 0, 1f, 60000, 0);
					PED::SET_PED_CONFIG_FLAG(func_93(0), 104, 1);
					SYSTEM::SETTIMERA(0);
					GlobalFunc_5653(func_93(0), "WALK_ME_TO_THE_CAR", "MICHAEL", 4);
					iLocal_2467++;
				}
				else if (SYSTEM::TIMERA() > 15000 && iLocal_4970 == 0)
				{
					func_656("JH_GOF", 0, 0, 1);
					iLocal_4970 = 1;
				}
				break;
			
			case 2:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_93(1), 717.6572f, -966.0149f, 31.64528f, 718.0654f, -975.373f, 23.73061f, 3.25f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_ENTITY(func_93(1), iLocal_2590, 5f, 5f, 1.5f, 0, 1, 0))
				{
					iLocal_4959 = 99;
					TASK::TASK_CLEAR_LOOK_AT(func_93(1));
					func_891(iLocal_2486[2], iLocal_2552, -1, 1f, 60000, 0);
					func_891(iLocal_2486[0], iLocal_2590, 2, 1f, 60000, 500);
					func_891(iLocal_2486[1], iLocal_2590, 1, 1f, 60000, 3000);
					PED::SET_PED_CONFIG_FLAG(iLocal_2486[2], 104, 1);
					PED::SET_PED_CONFIG_FLAG(iLocal_2486[0], 104, 1);
					PED::SET_PED_CONFIG_FLAG(iLocal_2486[1], 104, 1);
					PED::SET_PED_CONFIG_FLAG(func_93(0), 104, 1);
					PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iLocal_2486[2], 0);
					PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iLocal_2486[0], 0);
					PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iLocal_2486[1], 0);
					iLocal_2467++;
				}
				else if (SYSTEM::TIMERA() > 15000 && iLocal_4970 == 0)
				{
					func_656("JH_GOF", 0, 0, 1);
					iLocal_4970 = 1;
				}
				break;
			
			case 3:
				if (PED::IS_PED_IN_VEHICLE(func_93(1), iLocal_2590, 0))
				{
					SYSTEM::SETTIMERA(0);
					fLocal_4963 = 2f;
					func_811(Local_3369.f_22);
					func_811(Local_3369.f_23);
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_2531);
					func_475(&iLocal_2519, 1);
					STREAMING::REMOVE_ANIM_DICT("move_m@generic_variations@idle@b");
					AUDIO::START_AUDIO_SCENE("JSH_2B_GET_TO_STORE");
					RECORDING::_0x293220DA1B46CEBC(3f, 10f, 4);
					iLocal_2467++;
				}
				break;
			
			case 4:
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2552))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2486[2]))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_2486[2], iLocal_2552, 0))
						{
							if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_2552, Local_1625, 5f, 5f, 5f, false, 1, 0))
							{
								if (!iLocal_4967 && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "JHBENSONEXIT"))
								{
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_2552, 1, "JHBENSONEXIT", 1);
									iLocal_4967 = 1;
								}
								if (iLocal_4967)
								{
									if (!func_805(iLocal_2486[2], 567490903))
									{
										if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2552))
										{
											TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(iLocal_2486[2], iLocal_2552, Local_1625, 19f, 786603, 5f);
											SYSTEM::SETTIMERA(0);
										}
									}
								}
								if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2552, 0f, 3f, 0f), 4f, 4f, 4f, false, 1, 0))
								{
									if (fLocal_4972 > 0f)
									{
										fLocal_4972 = (fLocal_4972 - (0.5f * SYSTEM::TIMESTEP()));
									}
									else
									{
										fLocal_4972 = 0f;
									}
								}
								else if (fLocal_4972 < 1f)
								{
									fLocal_4972 = (fLocal_4972 + (0.5f * SYSTEM::TIMESTEP()));
								}
								else
								{
									fLocal_4972 = 1f;
								}
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_2552, fLocal_4972);
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(func_93(1)))
				{
					if (PED::IS_PED_IN_VEHICLE(func_93(1), iLocal_2590, 0))
					{
						bLocal_4966 = true;
					}
				}
				if ((((func_890(&Local_2380, Local_2457, 5f, 5f, 5f, 1, func_93(0), iLocal_2486[1], iLocal_2486[0], iLocal_2590, Local_3369.f_218, Local_3369.f_229, "G_PICKCREW", "G_PICKCREW", Local_3369.f_230, Local_3369.f_231, Local_3369.f_232, "", &Local_1523, &Local_1527, 0, bLocal_4966, 1, -1) || (HUD::DOES_BLIP_EXIST(Local_2380.f_5) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -665.7065f, -246.3712f, 35.00265f, -700.7289f, -266.4113f, 46.02726f, 38.75f, 0, 1, 0))) || (HUD::DOES_BLIP_EXIST(Local_2380.f_5) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -648.9164f, -208.8591f, 35.88916f, -659.2429f, -187.9048f, 44.67384f, 42.25f, 0, 1, 0))) || (HUD::DOES_BLIP_EXIST(Local_2380.f_5) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -701.6043f, -207.6847f, 35.56207f, -683.2875f, -243.608f, 43.69417f, 42.25f, 0, 1, 0))) || (HUD::DOES_BLIP_EXIST(Local_2380.f_5) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -663.1459f, -228.753f, 35.3631f, -646.9983f, -233.3743f, 39.71256f, 16.5f, 0, 1, 0)))
				{
					if (GlobalFunc_552(1, 1, 1))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -665.7065f, -246.3712f, 35.00265f, -700.7289f, -266.4113f, 46.02726f, 38.75f, 0, 1, 0))
						{
							iLocal_1615 = 1;
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -648.9164f, -208.8591f, 35.88916f, -659.2429f, -187.9048f, 44.67384f, 42.25f, 0, 1, 0))
						{
							iLocal_1615 = 2;
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -701.6043f, -207.6847f, 35.56207f, -683.2875f, -243.608f, 43.69417f, 42.25f, 0, 1, 0))
						{
							iLocal_1615 = 3;
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -663.1459f, -228.753f, 35.3631f, -646.9983f, -233.3743f, 39.71256f, 16.5f, 0, 1, 0))
						{
							iLocal_1615 = 4;
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						}
						SYSTEM::SETTIMERB(0);
						GlobalFunc_5652(&Local_2380, 1, 0);
						iLocal_2467++;
					}
				}
				if (PED::IS_PED_IN_VEHICLE(func_93(1), iLocal_2590, 0))
				{
					if ((PED::IS_PED_IN_VEHICLE(func_93(0), iLocal_2590, 0) && PED::IS_PED_IN_VEHICLE(iLocal_2486[0], iLocal_2590, 0)) && PED::IS_PED_IN_VEHICLE(iLocal_2486[1], iLocal_2590, 0))
					{
						if (!GlobalFunc_5172(&Local_2380, 0) && MISC::IS_BIT_SET(Local_2380.f_13, 2))
						{
							if (!iLocal_2431[1])
							{
								func_611(1, 1, 1);
								func_656("JH_PLAN3", 0, 2000, 1);
								if (func_113())
								{
									func_656("JH_GUS", 0, 0, 1);
								}
								else if (func_112())
								{
									func_656("JH_NORM", 0, 0, 1);
								}
								else if (func_114())
								{
									func_656("JH_PACKIE", 0, 0, 1);
								}
								if (func_117())
								{
									func_656("JH_NOTCLOSE", 0, 0, 1);
								}
								else if (func_115())
								{
									func_656("JH_NOTCLOSEK", 0, 0, 1);
								}
								func_656("JH_CREWMEM", 2, 0, 0);
								TASK::TASK_CLEAR_LOOK_AT(func_93(0));
								iLocal_2431[1] = 1;
								iLocal_2431[2] = 1;
							}
						}
					}
				}
				if (((((iLocal_4969 == 0 && PED::IS_PED_IN_ANY_VEHICLE(func_93(1), 0)) && PED::IS_PED_IN_ANY_VEHICLE(func_93(0), 0)) && ENTITY::GET_ENTITY_SPEED(iLocal_2590) < 0.5f) && iLocal_2431[1] == 1) && !GlobalFunc_5172(&Local_2380, 1))
				{
					if (GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_MICGO", 9, 0, 0, 0))
					{
						iLocal_4969 = 1;
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2590))
				{
					if (ENTITY::GET_ENTITY_HEALTH(iLocal_2590) < 500 && iLocal_4974 == 0)
					{
						func_656("JH_VANDAM", 0, 0, 1);
						iLocal_4974 = 1;
					}
				}
				if (ENTITY::IS_ENTITY_AT_COORD(func_93(1), Local_2457, 200f, 200f, 50f, false, 1, 0))
				{
					func_129(Local_3369.f_3, 0, 0, 0);
					iLocal_2466 = 0;
					while (iLocal_2466 <= 4)
					{
						func_129(Local_3369.f_4[iLocal_2466], 0, 0, 0);
						iLocal_2466++;
					}
					func_128(Local_3369.f_35, 0, 0, 0);
					if (bLocal_4971 == 0)
					{
						bLocal_4971 = true;
					}
				}
				if (bLocal_4971)
				{
					func_889();
				}
				if (iLocal_2431[1] == 1 && iLocal_2431[2] == 1)
				{
					if (!HUD::DOES_BLIP_EXIST(Local_2380.f_5) || ENTITY::IS_ENTITY_UPSIDEDOWN(iLocal_2590))
					{
						if (!GlobalFunc_620())
						{
							GlobalFunc_619(1);
							iLocal_4976 = 0;
						}
						if (!GlobalFunc_5172(&Local_2380, 1) && iLocal_4976 == 0)
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
							{
								GlobalFunc_5653(func_93(1), "POLICE_PURSUIT_DRIVEN", "FRANKLIN_NORMAL", 24);
								iLocal_4976 = 1;
							}
						}
					}
					else if (GlobalFunc_620() && GlobalFunc_1976(func_93(0), func_93(1)))
					{
						GlobalFunc_619(0);
					}
				}
				break;
		}
		PED::SET_PED_RESET_FLAG(iLocal_2486[2], 60, 1);
		PED::SET_PED_RESET_FLAG(iLocal_2486[0], 60, 1);
		PED::SET_PED_RESET_FLAG(iLocal_2486[1], 60, 1);
		PED::SET_PED_RESET_FLAG(func_93(0), 60, 1);
		if (iLocal_2467 >= 5)
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_2619))
			{
				HUD::REMOVE_BLIP(&uLocal_2619);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_2620))
			{
				HUD::REMOVE_BLIP(&uLocal_2620);
			}
			iLocal_2466 = 0;
			while (iLocal_2466 <= 2)
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_2615[iLocal_2466]))
				{
					HUD::REMOVE_BLIP(&(uLocal_2615[iLocal_2466]));
				}
				iLocal_2466++;
			}
			PED::SET_PED_CONFIG_FLAG(iLocal_2486[2], 104, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_2486[0], 104, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_2486[1], 104, 0);
			PED::SET_PED_CONFIG_FLAG(func_93(0), 104, 0);
			if (bLocal_2405)
			{
				func_472(&iLocal_2590, 1);
			}
			func_472(&iLocal_2552, 1);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_2537);
			func_475(&(iLocal_2486[2]), 1);
			func_475(&(iLocal_2486[2]), 1);
			func_475(&iLocal_2519, 1);
			AUDIO::STOP_AUDIO_SCENE("JSH_2B_GET_TO_STORE");
			func_111();
			iLocal_2406 = 0;
			return 1;
		}
	}
	return 0;
}


void func_889()//Position - 0x80C1A
{
	float fVar0;
	var uVar1;
	
	switch (iLocal_76)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("MISSCOMMON@VAN_PUT_ON_MASKS");
			iLocal_76++;
			break;
		
		case 1:
			if (STREAMING::HAS_ANIM_DICT_LOADED("MISSCOMMON@VAN_PUT_ON_MASKS"))
			{
				TASK::TASK_PLAY_ANIM(func_93(0), "MISSCOMMON@VAN_PUT_ON_MASKS", "PUT_ON_MASK_PS", 8f, -8f, -1, 40, 0, 0, 0, 0);
				iLocal_76++;
			}
			break;
		
		case 2:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(func_93(0), "MISSCOMMON@VAN_PUT_ON_MASKS", "PUT_ON_MASK_PS", 3) && iLocal_4964 == 0)
			{
				PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
				ENTITY::FIND_ANIM_EVENT_PHASE("MISSCOMMON@VAN_PUT_ON_MASKS", "PUT_ON_MASK_PS", "MASK", &fVar0, &uVar1);
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(func_93(0), "MISSCOMMON@VAN_PUT_ON_MASKS", "PUT_ON_MASK_PS") > fVar0)
				{
					func_617(func_93(0), 1);
					STREAMING::REMOVE_ANIM_DICT("MISSCOMMON@VAN_PUT_ON_MASKS");
					iLocal_4964 = 1;
				}
			}
			break;
	}
}

int func_890(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, var uParam9, var uParam10, int iParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, char* sParam17, char* sParam18, int iParam19, int iParam20, int iParam21, bool bParam22, bool bParam23, bool bParam24, int iParam25)//Position - 0x80CFA
{
	return func_490(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 5, iParam8, uParam9, uParam10, iParam11, sParam12, sParam13, sParam14, sParam15, sParam16, sParam17, bParam22, bParam23, sParam18, 0, 0, bParam24, iParam25, iParam19, iParam20, iParam21, 1, 1065353216);
}

void func_891(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5)//Position - 0x80D47
{
	var uVar0;
	
	TASK::OPEN_SEQUENCE_TASK(&uVar0);
	TASK::TASK_PAUSE(0, iParam5);
	TASK::TASK_ENTER_VEHICLE(0, iParam1, iParam4, iParam2, fParam3, 1, 0);
	TASK::CLOSE_SEQUENCE_TASK(uVar0);
	if (!PED::IS_PED_INJURED(iParam0))
	{
		TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar0);
	}
	TASK::CLEAR_SEQUENCE_TASK(&uVar0);
}

void func_892()//Position - 0x80D8C
{
	int iVar0;
	
	switch (iLocal_96)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("MISSHeist_JewelLester_waitidles");
			STREAMING::REQUEST_ANIM_DICT("move_characters@lester@STD_CaneUp");
			if (STREAMING::HAS_ANIM_DICT_LOADED("MISSHeist_JewelLester_waitidles") && STREAMING::HAS_ANIM_DICT_LOADED("move_characters@lester@STD_CaneUp"))
			{
				if (!PED::IS_PED_INJURED(iLocal_2519))
				{
					sLocal_4960 = "LESTER_WAITIDLE_1";
					TASK::TASK_PLAY_ANIM(iLocal_2519, "move_characters@lester@STD_CaneUp", "idle_outro", 8f, -8f, -1, 2, 0, 0, 0, 0);
					iLocal_96++;
				}
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2519))
			{
				if (!PED::IS_PED_INJURED(iLocal_2519))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_2519, "MISSHeist_JewelLester_waitidles", sLocal_4960, 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_2519, "MISSHeist_JewelLester_waitidles", sLocal_4960) >= 0.99f)
						{
							iLocal_71 = 1;
						}
					}
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_2519, "move_characters@lester@STD_CaneUp", "idle_outro", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_2519, "move_characters@lester@STD_CaneUp", "idle_outro") >= 0.99f)
						{
							STREAMING::REMOVE_ANIM_DICT("move_characters@lester@STD_CaneUp");
							iLocal_71 = 1;
						}
					}
				}
			}
			if (iLocal_71 == 1)
			{
				iLocal_4957 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
				switch (iLocal_4957)
				{
					case 0:
						sLocal_4960 = "LESTER_WAITIDLE_1";
						break;
					
					case 1:
						sLocal_4960 = "LESTER_WAITIDLE_2";
						break;
					
					case 2:
						sLocal_4960 = "LESTER_WAITIDLE_3";
						break;
					
					case 3:
						sLocal_4960 = "LESTER_WAITIDLE_4";
						break;
					
					case 4:
						sLocal_4960 = "LESTER_WAITIDLE_5";
						break;
				}
				TASK::TASK_PLAY_ANIM(iLocal_2519, "MISSHeist_JewelLester_waitidles", sLocal_4960, 8f, -8f, -1, 1, 0, 0, 0, 0);
				iLocal_71 = 0;
			}
			break;
	}
	switch (iLocal_4959)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("move_m@generic_variations@idle@b");
			iLocal_4959++;
			break;
		
		case 1:
			if (STREAMING::HAS_ANIM_DICT_LOADED("move_m@generic_variations@idle@b"))
			{
				sLocal_4961 = "idle_e";
				iLocal_4959++;
			}
			break;
		
		case 2:
			if ((MISC::GET_GAME_TIMER() - iLocal_4958) > 2000)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2486[iVar0]))
				{
					if (!PED::IS_PED_INJURED(iLocal_2486[iVar0]))
					{
						if ((((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_2486[iVar0], "move_m@generic_variations@idle@b", "idle_e", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_2486[iVar0], "move_m@generic_variations@idle@b", "idle_f", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_2486[iVar0], "move_m@generic_variations@idle@b", "idle_g", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_2486[iVar0], "move_m@generic_variations@idle@b", "idle_h", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_2486[iVar0], "move_m@generic_variations@idle@b", "idle_i", 3))
						{
							iLocal_4957 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
							switch (iLocal_4957)
							{
								case 0:
									sLocal_4961 = "idle_e";
									break;
								
								case 1:
									sLocal_4961 = "idle_g";
									break;
								
								case 2:
									sLocal_4961 = "idle_i";
									break;
							}
							TASK::TASK_CLEAR_LOOK_AT(iLocal_2486[iVar0]);
							TASK::TASK_PLAY_ANIM(iLocal_2486[iVar0], "move_m@generic_variations@idle@b", sLocal_4961, 4f, -4f, -1, 0, 0, 0, 0, 0);
							iLocal_4958 = MISC::GET_GAME_TIMER();
						}
						else
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_2486[iVar0], PLAYER::PLAYER_PED_ID(), 4000, 0, 2);
						}
					}
				}
			}
			break;
	}
}

void func_893(char* sParam0, bool bParam1, bool bParam2)//Position - 0x810B8
{
	AUDIO::REQUEST_AMBIENT_AUDIO_BANK(sParam0, 0);
	if (bParam1)
	{
		while (!AUDIO::REQUEST_AMBIENT_AUDIO_BANK(sParam0, 0))
		{
			if (bParam2)
			{
				func_109(0);
			}
			else
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_894()//Position - 0x810ED
{
	if (!iLocal_2406)
	{
		func_559(1, "STAGE_DRIVE_TO_STORE", 0, 0, 0, 1);
		Global_89962.f_12[0] = 0;
		func_130();
		if (bLocal_2405)
		{
			VEHICLE::REQUEST_VEHICLE_ASSET(Local_3369.f_1, 3);
		}
		VEHICLE::REQUEST_VEHICLE_RECORDING(1, "JH2BArrive");
		VEHICLE::REQUEST_VEHICLE_RECORDING(2, "JH2BArrive");
		VEHICLE::REQUEST_VEHICLE_RECORDING(1, "JHBENSONEXIT");
		VEHICLE::REQUEST_VEHICLE_RECORDING(1, "JHBugStrExit");
		func_893(Local_3369.f_244, 0, 1);
		func_893(Local_3369.f_245, 0, 1);
		if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
		{
			GlobalFunc_4450();
		}
		Local_2457 = { Local_1616 };
		func_111();
		iLocal_2466 = 0;
		while (iLocal_2466 <= 24)
		{
			iLocal_2431[iLocal_2466] = 0;
			iLocal_2466++;
		}
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_3369.f_1, 1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_3369.f_2, 1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_3369.f_12, 1);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2552))
		{
			VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_2552, 0, 0);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_2590, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2537))
		{
			VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_2537, 0, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2590))
		{
			VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_2590, 0, 0);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_2590, 1);
		}
		Local_2380 = GlobalFunc_6783(iLocal_2537, 0, 0);
		if (!PED::IS_PED_INJURED(func_93(0)) && !PED::IS_PED_INJURED(func_93(1)))
		{
			TASK::TASK_LOOK_AT_ENTITY(func_93(1), func_93(0), 99999999, 2048, 2);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2590, 0))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_2590, 3);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2552, 0))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_2552, 3);
		}
		func_604(Local_3369.f_155, 1, 1, 1, 7, 0, 0);
		if (GlobalFunc_5133(0, 1) == 1 && GlobalFunc_5133(0, 0) == 8)
		{
			func_656("JH_GETIN1", 0, 0, 1);
		}
		if (GlobalFunc_5133(0, 1) == 1 && GlobalFunc_5133(0, 0) == 13)
		{
			func_656("JH_GETIN2", 0, 0, 1);
		}
		if (GlobalFunc_5133(0, 1) == 1 && GlobalFunc_5133(0, 0) == 9)
		{
			func_656("JH_GETIN3", 0, 0, 1);
		}
		if (GlobalFunc_5133(0, 1) == 10 && GlobalFunc_5133(0, 0) == 8)
		{
			func_656("JH_GETIN4", 0, 0, 1);
		}
		if (GlobalFunc_5133(0, 1) == 10 && GlobalFunc_5133(0, 0) == 13)
		{
			func_656("JH_GETIN5", 0, 0, 1);
		}
		if (GlobalFunc_5133(0, 1) == 10 && GlobalFunc_5133(0, 0) == 9)
		{
			func_656("JH_GETIN6", 0, 0, 1);
		}
		if (GlobalFunc_5133(0, 1) == 4 && GlobalFunc_5133(0, 0) == 8)
		{
			func_656("JH_GETIN7", 0, 0, 1);
		}
		if (GlobalFunc_5133(0, 1) == 4 && GlobalFunc_5133(0, 0) == 13)
		{
			func_656("JH_GETIN8", 0, 0, 1);
		}
		if (GlobalFunc_5133(0, 1) == 4 && GlobalFunc_5133(0, 0) == 9)
		{
			func_656("JH_GETIN9", 0, 0, 1);
		}
		func_656(Local_3369.f_227, 1, 0, 1);
		func_656("JH_DIR", 0, 0, 1);
		iLocal_4967 = 0;
		fLocal_4963 = 1f;
		MISC::SET_BIT(&(Local_2380.f_13), 9);
		MISC::SET_BIT(&(Local_2380.f_13), 3);
		MISC::SET_BIT(&(Local_2380.f_13), 4);
		MISC::CLEAR_BIT(&(Local_2380.f_13), 14);
		SYSTEM::SETTIMERA(0);
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(756.4408f, -1005.63f, 21.89208f, 753.2204f, -919.5325f, 30.69128f, 55f, 0, 0, 1);
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(777.2901f, -991.4522f, 23.63091f, 770.1435f, -740.8588f, 31.30616f, 13.5f, 0, 0, 1);
		MISC::CLEAR_AREA_OF_VEHICLES(Local_1612, 500f, 1, 0, 0, 0, 0);
		AUDIO::TRIGGER_MUSIC_EVENT("JH2A_VEHICLE");
		func_108(800, 0, 0);
		iLocal_4965 = 0;
		iLocal_2467 = 0;
		iLocal_2406 = 1;
		iLocal_4970 = 0;
		SYSTEM::SETTIMERA(0);
		RECORDING::_0x293220DA1B46CEBC(0f, 6f, 4);
	}
	else
	{
		func_892();
		if ((PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) || PAD::IS_CONTROL_PRESSED(0, 71)) || iLocal_4965 == 1)
		{
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(func_93(1), 2f);
			iLocal_4965 = 1;
		}
		else
		{
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(func_93(1), 1f);
		}
		TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_2486[2], 1f);
		TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_2486[0], 1f);
		TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_2486[1], 1f);
		PED::SET_PED_RESET_FLAG(iLocal_2486[2], 60, 1);
		PED::SET_PED_RESET_FLAG(iLocal_2486[0], 60, 1);
		PED::SET_PED_RESET_FLAG(iLocal_2486[1], 60, 1);
		PED::SET_PED_RESET_FLAG(func_93(1), 60, 1);
		switch (iLocal_2467)
		{
			case 0:
				if (ENTITY::IS_ENTITY_AT_COORD(func_93(0), Local_1662, 4f, 4f, 3f, false, 1, 0))
				{
					iLocal_4959 = 99;
					TASK::TASK_CLEAR_LOOK_AT(func_93(1));
					func_891(iLocal_2486[2], iLocal_2552, -1, fLocal_4963, 60000, 0);
					func_891(iLocal_2486[0], iLocal_2590, -1, fLocal_4963, 60000, 3000);
					func_891(iLocal_2486[1], iLocal_2590, 0, fLocal_4963, 60000, 4500);
					func_891(func_93(1), iLocal_2537, 0, fLocal_4963, 60000, 0);
					PED::SET_PED_CONFIG_FLAG(iLocal_2486[2], 104, 1);
					PED::SET_PED_CONFIG_FLAG(iLocal_2486[0], 104, 1);
					PED::SET_PED_CONFIG_FLAG(iLocal_2486[1], 104, 1);
					PED::SET_PED_CONFIG_FLAG(func_93(1), 104, 1);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_2486[0], 1);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_2486[1], 1);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_2486[2], 1);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_93(1), 1);
					PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iLocal_2486[2], 0);
					PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iLocal_2486[0], 0);
					PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iLocal_2486[1], 0);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2552, 0);
					iLocal_2467++;
				}
				else if (SYSTEM::TIMERA() > 25000 && iLocal_4970 == 0)
				{
					func_656("JH_LESGO", 0, 0, 1);
					iLocal_4970 = 1;
				}
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				func_896(&Local_2380, Local_2457, 5f, 5f, 5f, 1, func_93(1), iLocal_2537, Local_3369.f_218, Local_3369.f_228, Local_3369.f_227, Local_3369.f_226, 0, 0, 1, -1);
				break;
			
			case 1:
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.2f);
				if (PED::IS_PED_IN_VEHICLE(func_93(0), iLocal_2537, 0))
				{
					RECORDING::_0x293220DA1B46CEBC(3f, 10f, 4);
					TASK::TASK_LOOK_AT_ENTITY(func_93(1), func_93(0), 60000, 2048, 2);
					SYSTEM::SETTIMERA(0);
					fLocal_4963 = 2f;
					GlobalFunc_504(iLocal_2537, 817);
					func_811(Local_3369.f_22);
					func_475(&iLocal_2519, 1);
					VEHICLE::REMOVE_VEHICLE_ASSET(Local_3369.f_1);
					STREAMING::REMOVE_ANIM_DICT("move_m@generic_variations@idle@b");
					AUDIO::SET_RADIO_TO_STATION_INDEX(4);
					AUDIO::START_AUDIO_SCENE("JSH_2A_GET_TO_STORE");
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_2486[0], 1) < 15f)
					{
						if (func_117())
						{
							func_656("JH_DRIVE_ET", 0, 0, 1);
						}
						else if (func_115())
						{
							func_656("JH_DRIVE_KD", 0, 0, 1);
						}
					}
					iLocal_2467++;
				}
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				func_896(&Local_2380, Local_2457, 5f, 5f, 5f, 1, func_93(1), iLocal_2537, Local_3369.f_218, Local_3369.f_228, Local_3369.f_227, Local_3369.f_226, 0, 0, 1, -1);
				break;
			
			case 2:
				PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(758.5399f, -1003.136f, Local_1625.x, Local_1625.f_1);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2552))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2486[2]))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_2486[2], iLocal_2552, 0))
						{
							if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_2552, Local_1625, 5f, 5f, 5f, false, 1, 0) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_2590, Local_1612, 5f, 5f, 3f, false, 1, 0))
							{
								if (!iLocal_4967 && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "JHBENSONEXIT"))
								{
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_2552, 1, "JHBENSONEXIT", 0);
									VEHICLE::SET_PLAYBACK_TO_USE_AI_TRY_TO_REVERT_BACK_LATER(iLocal_2552, 2000, 786603, 1);
									VEHICLE::_0x063AE2B2CC273588(iLocal_2552, 1);
									iLocal_4967 = 1;
								}
								if (iLocal_4967)
								{
									if (!func_805(iLocal_2486[2], 567490903))
									{
										if (ENTITY::IS_ENTITY_AT_COORD(iLocal_2552, 758.5399f, -1003.136f, 25.2859f, 5f, 5f, 6f, false, 1, 0))
										{
											TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(iLocal_2486[2], iLocal_2552, Local_1625, 19f, 786603, 5f);
											SYSTEM::SETTIMERA(0);
										}
									}
								}
								if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2552, 0f, 4f, 0f), 6f, 6f, 4f, false, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(iLocal_2590, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2552, 0f, 5f, 0f), 11f, 11f, 4f, false, 1, 0))
								{
									if (fLocal_4972 > 0f)
									{
										fLocal_4972 = (fLocal_4972 - (0.5f * SYSTEM::TIMESTEP()));
									}
									else
									{
										fLocal_4972 = 0f;
									}
								}
								else if (fLocal_4972 < 1f)
								{
									fLocal_4972 = (fLocal_4972 + (0.5f * SYSTEM::TIMESTEP()));
								}
								else
								{
									fLocal_4972 = 1f;
								}
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_2552, fLocal_4972);
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2590))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2486[0]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_2486[1]))
						{
							if (PED::IS_PED_IN_VEHICLE(iLocal_2486[0], iLocal_2590, 0))
							{
								if (PED::IS_PED_IN_VEHICLE(iLocal_2486[1], iLocal_2590, 0))
								{
									if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_2590, Local_1628, 5f, 5f, 5f, false, 1, 0))
									{
										if (!func_805(iLocal_2486[0], 567490903))
										{
											if (!iLocal_4968 && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "JHBugStrExit"))
											{
												VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_2590, 1, "JHBugStrExit", 1);
												VEHICLE::SET_PLAYBACK_TO_USE_AI_TRY_TO_REVERT_BACK_LATER(iLocal_2590, 2000, 786603, 1);
												VEHICLE::_0x063AE2B2CC273588(iLocal_2590, 1);
												iLocal_4968 = 1;
											}
											if (iLocal_4968 && ENTITY::IS_ENTITY_AT_COORD(iLocal_2590, 748.7f, -1003.6f, 26.7f, 9f, 9f, 6f, false, 1, 0))
											{
												TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(iLocal_2486[0], iLocal_2590, Local_1628, 19f, 786603, 5f);
											}
											if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2590, 0f, 3f, 0f), 4f, 4f, 4f, false, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(iLocal_2552, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2590, 0f, 3f, 0f), 5f, 5f, 4f, false, 1, 0))
											{
												if (fLocal_4973 > 0f)
												{
													fLocal_4973 = (fLocal_4973 - (0.5f * SYSTEM::TIMESTEP()));
												}
												else
												{
													fLocal_4973 = 0f;
												}
											}
											else if (fLocal_4973 < 1f)
											{
												fLocal_4973 = (fLocal_4973 + (0.5f * SYSTEM::TIMESTEP()));
											}
											else
											{
												fLocal_4973 = 1f;
											}
											VEHICLE::SET_PLAYBACK_SPEED(iLocal_2590, fLocal_4973);
										}
									}
								}
							}
						}
					}
				}
				if (PED::IS_PED_IN_VEHICLE(func_93(0), iLocal_2537, 0))
				{
					if (PED::IS_PED_IN_VEHICLE(func_93(1), iLocal_2537, 0))
					{
						if (!iLocal_2431[0])
						{
							func_656(Local_3369.f_125, 0, 3000, 1);
							func_656(Local_3369.f_175, 0, 0, 1);
							if ((GlobalFunc_697(GlobalFunc_5133(0, 0)) == 0 && GlobalFunc_697(GlobalFunc_5133(0, 1)) == 0) && (GlobalFunc_697(GlobalFunc_5133(0, 2)) == 0 || GlobalFunc_697(GlobalFunc_5133(0, 2)) == 1))
							{
								func_656("JH_TALK1", 0, 0, 1);
							}
							if ((GlobalFunc_697(GlobalFunc_5133(0, 0)) == 2 && GlobalFunc_697(GlobalFunc_5133(0, 1)) == 0) && (GlobalFunc_697(GlobalFunc_5133(0, 2)) == 0 || GlobalFunc_697(GlobalFunc_5133(0, 2)) == 1))
							{
								func_656("JH_TALK2", 0, 0, 1);
							}
							if ((GlobalFunc_697(GlobalFunc_5133(0, 0)) == 2 && GlobalFunc_697(GlobalFunc_5133(0, 1)) == 2) && (GlobalFunc_697(GlobalFunc_5133(0, 2)) == 0 || GlobalFunc_697(GlobalFunc_5133(0, 2)) == 1))
							{
								func_656("JH_TALK3", 0, 0, 1);
							}
							if ((GlobalFunc_697(GlobalFunc_5133(0, 0)) == 0 && GlobalFunc_697(GlobalFunc_5133(0, 1)) == 2) && (GlobalFunc_697(GlobalFunc_5133(0, 2)) == 0 || GlobalFunc_697(GlobalFunc_5133(0, 2)) == 1))
							{
								func_656("JH_TALK4", 0, 0, 1);
							}
							if ((GlobalFunc_697(GlobalFunc_5133(0, 0)) == 2 && GlobalFunc_697(GlobalFunc_5133(0, 1)) == 2) && GlobalFunc_697(GlobalFunc_5133(0, 2)) == 2)
							{
								func_656("JH_TALK5", 0, 0, 1);
							}
							if ((GlobalFunc_697(GlobalFunc_5133(0, 0)) == 0 && GlobalFunc_697(GlobalFunc_5133(0, 1)) == 2) && GlobalFunc_697(GlobalFunc_5133(0, 2)) == 2)
							{
								func_656("JH_TALK6", 0, 0, 1);
							}
							if ((GlobalFunc_697(GlobalFunc_5133(0, 0)) == 0 && GlobalFunc_697(GlobalFunc_5133(0, 1)) == 0) && GlobalFunc_697(GlobalFunc_5133(0, 2)) == 2)
							{
								func_656("JH_TALK7", 0, 0, 1);
							}
							if ((GlobalFunc_697(GlobalFunc_5133(0, 0)) == 2 && GlobalFunc_697(GlobalFunc_5133(0, 1)) == 0) && GlobalFunc_697(GlobalFunc_5133(0, 2)) == 2)
							{
								func_656("JH_TALK8", 0, 0, 1);
							}
							func_656("JH_CREWMEM", 2, 0, 0);
							TASK::TASK_CLEAR_LOOK_AT(func_93(1));
							iLocal_2431[0] = 1;
							iLocal_2431[2] = 1;
						}
					}
					else if (!iLocal_2431[2] && !GlobalFunc_5172(&Local_2380, 1))
					{
						if (GlobalFunc_10618(&uLocal_2737, "JHAUD", Local_3369.f_169, 9, 0, 0, 0))
						{
							iLocal_2431[2] = 1;
						}
					}
				}
				if (iLocal_2431[0] == 1)
				{
					if (!HUD::DOES_BLIP_EXIST(Local_2380.f_5))
					{
						if (!GlobalFunc_620())
						{
							GlobalFunc_619(1);
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
							{
								GlobalFunc_5653(func_93(1), "POLICE_PURSUIT_DRIVEN", "FRANKLIN_NORMAL", 24);
							}
						}
					}
					else if (GlobalFunc_620())
					{
						GlobalFunc_619(0);
					}
				}
				if (ENTITY::IS_ENTITY_AT_COORD(func_93(0), Local_2457, 150f, 150f, 150f, false, 1, 0) && iLocal_2431[3] == 0)
				{
					func_656("JH_NEARLYTHE", 0, 0, 1);
					AUDIO::TRIGGER_MUSIC_EVENT("JH2A_RADIO_FADE");
					iLocal_2431[3] = 1;
				}
				if (func_896(&Local_2380, -576.1586f, -277.9921f, 33.8018f, 0.1f, 0.1f, 1.5f, 1, func_93(1), iLocal_2537, Local_3369.f_218, Local_3369.f_228, Local_3369.f_227, Local_3369.f_226, 0, 1, 1, -1) || (HUD::DOES_BLIP_EXIST(Local_2380.f_5) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_93(0), -574.1349f, -283.2379f, 33.77819f, -579.4506f, -274.0813f, 37.2725f, 6.75f, 0, 1, 0)))
				{
					if (GlobalFunc_552(1, 1, 1))
					{
						AUDIO::STOP_AUDIO_SCENE("JSH_2B_GET_TO_STORE");
						STREAMING::NEW_LOAD_SCENE_START(-583.3762f, -282.5733f, 35.2789f, Vector(35.2789f, -282.5733f, -583.3762f) - Vector(35.2799f, -282.8672f, -583.9982f), 500f, 0);
						RECORDING::_0x293220DA1B46CEBC(6f, 10f, 4);
						FIRE::STOP_FIRE_IN_RANGE(-576.1586f, -277.9921f, 33.8018f, 20f);
						while (!GlobalFunc_530(iLocal_2537, 6f, 5, 1056964608, 0, 1))
						{
							RECORDING::_0x293220DA1B46CEBC(3f, 10f, 4);
							SYSTEM::WAIT(0);
						}
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						SYSTEM::SETTIMERB(0);
						iLocal_2467++;
					}
				}
				break;
			
			case 3:
				if (bLocal_2405)
				{
					if (AUDIO::PREPARE_MUSIC_EVENT("JH2A_MISSION_START_OS"))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("JH2A_MISSION_START_OS");
						iLocal_2467++;
					}
				}
				break;
			
			case 4:
				VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_2537);
				if ((SYSTEM::TIMERB() > 1000 && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "JH2BArrive")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "JH2BArrive"))
				{
					GlobalFunc_4935();
					GlobalFunc_5652(&Local_2380, 1, 0);
					func_643(1, 0, 1, 1, 1);
					MISC::CLEAR_AREA(Local_2457, 100f, 1, 1, 0, 0);
					if (GlobalFunc_1575(ENTITY::GET_ENTITY_HEADING(iLocal_2537), 29.7f, 90f))
					{
						PED::SET_PED_COORDS_KEEP_VEHICLE(func_93(1), -575.5158f, -278.976f, 34.1733f);
						ENTITY::SET_ENTITY_HEADING(PED::GET_VEHICLE_PED_IS_IN(func_93(1), 0), 29.7163f);
					}
					else
					{
						PED::SET_PED_COORDS_KEEP_VEHICLE(func_93(1), -575.416f, -277.5119f, 34.183f);
						ENTITY::SET_ENTITY_HEADING(PED::GET_VEHICLE_PED_IS_IN(func_93(1), 0), 208.8154f);
					}
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PED::GET_VEHICLE_PED_IS_IN(func_93(1), 0));
					CAM::SET_CAM_FAR_DOF(uLocal_3365, 9f);
					CAM::SET_CAM_NEAR_DOF(uLocal_3365, 3.5f);
					CAM::SET_CAM_FAR_DOF(uLocal_3366, 9f);
					CAM::SET_CAM_NEAR_DOF(uLocal_3366, 3.5f);
					func_613(-584.7731f, -283.176f, 35.33306f, 1.308213f, 1.022223f, -63.65855f, 25.95283f, -584.7682f, -283.1656f, 34.93697f, 1.308213f, 1.022223f, -63.65855f, 25.95283f, 5000, 0);
					TASK::TASK_LOOK_AT_ENTITY(func_93(0), func_93(1), 5000, 2048, 2);
					TASK::TASK_LOOK_AT_ENTITY(func_93(1), func_93(0), 5000, 2048, 2);
					func_604(Local_3369.f_126, 1, 0, 1, 7, 0, 0);
					func_656(Local_3369.f_176, 0, 0, 1);
					SYSTEM::SETTIMERB(0);
					if (GlobalFunc_8315() != 1)
					{
						GlobalFunc_9019(&Local_2659, 1);
						func_167(&Local_2659, 1, 0, 0);
						func_619(func_93(0));
						func_619(func_93(1));
					}
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2590))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2590);
					}
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2552))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2552);
					}
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_2590, 1, "JH2BArrive", 1);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_2590, 2000f);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_2552, 2, "JH2BArrive", 1);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_2552, 4000f);
					iLocal_2467++;
				}
				break;
			
			case 5:
				CAM::SET_USE_HI_DOF();
				MISC::CLEAR_AREA_OF_VEHICLES(-584.7731f, -283.176f, 35.33306f, 40f, 0, 0, 0, 0, 0);
				VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_2537);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2537, 0))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(func_93(1), iLocal_2537))
					{
						if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_2537))
						{
							RECORDING::_0x293220DA1B46CEBC(3f, 2f, 3);
							TASK::CLEAR_PED_TASKS(func_93(1));
							TASK::TASK_LOOK_AT_ENTITY(func_93(1), func_93(0), 4000, 2048, 2);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_2609);
							TASK::TASK_LEAVE_VEHICLE(0, iLocal_2537, 0);
							TASK::TASK_PAUSE(0, 0);
							TASK::TASK_ACHIEVE_HEADING(0, 108.7326f, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_2609);
							TASK::TASK_PERFORM_SEQUENCE(func_93(1), uLocal_2609);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_2609);
							iLocal_2467++;
						}
					}
				}
				break;
			
			case 6:
				VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_2537);
				CAM::SET_USE_HI_DOF();
				if (!PED::IS_PED_INJURED(func_93(1)))
				{
					if (PED::IS_PED_ON_FOOT(func_93(1)))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_2467 = 7;
					}
				}
				if (GlobalFunc_4926(1000))
				{
					CAM::DO_SCREEN_FADE_OUT(500);
					while (CAM::IS_SCREEN_FADING_OUT())
					{
						SYSTEM::WAIT(0);
					}
					iLocal_2467 = 7;
				}
				break;
			
			case 7:
			case 8:
				VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_2537);
				CAM::SET_USE_HI_DOF();
				if (iLocal_2467 == 7)
				{
					if (SYSTEM::TIMERA() > 500)
					{
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						}
						iLocal_2467 = 8;
					}
				}
				if (SYSTEM::TIMERA() > 1000)
				{
					iLocal_2467 = 9;
				}
				if (GlobalFunc_75())
				{
					CAM::DO_SCREEN_FADE_OUT(500);
					while (CAM::IS_SCREEN_FADING_OUT())
					{
						SYSTEM::WAIT(0);
					}
					iLocal_2467 = 9;
				}
				break;
			
			case 9:
				VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_2537);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2537, 0))
				{
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(func_93(0), iLocal_2537, Local_1622, 24f, 0, Local_3369.f_1, 786469, 5f, 1f);
				}
				if (!PED::IS_PED_INJURED(func_93(1)))
				{
					if (GlobalFunc_1575(ENTITY::GET_ENTITY_HEADING(iLocal_2537), 29.7f, 90f))
					{
						ENTITY::SET_ENTITY_COORDS(func_93(1), -573.5828f, -278.3935f, 34.1906f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(func_93(1), 105f);
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(func_93(1), -576.837f, -279.6357f, 34.2772f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(func_93(1), 108.7326f);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				}
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_93(1), 0, 0);
				func_599(0, 0, 3000, 1, 1);
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
				{
					GlobalFunc_2898(1);
				}
				if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
				{
					while (CAM::IS_SCREEN_FADING_OUT())
					{
						SYSTEM::WAIT(0);
					}
					CAM::DO_SCREEN_FADE_IN(500);
				}
				iLocal_2467++;
				break;
		}
		if (iLocal_2467 >= 10)
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_2619))
			{
				HUD::REMOVE_BLIP(&uLocal_2619);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_2620))
			{
				HUD::REMOVE_BLIP(&uLocal_2620);
			}
			if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
			VEHICLE::REMOVE_VEHICLE_RECORDING(1, "JH2BArrive");
			VEHICLE::REMOVE_VEHICLE_RECORDING(2, "JH2BArrive");
			VEHICLE::REMOVE_VEHICLE_RECORDING(1, "JHBENSONEXIT");
			iLocal_2466 = 0;
			while (iLocal_2466 <= 2)
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_2615[iLocal_2466]))
				{
					HUD::REMOVE_BLIP(&(uLocal_2615[iLocal_2466]));
				}
				iLocal_2466++;
			}
			func_111();
			GlobalFunc_5652(&Local_2380, 1, 0);
			iLocal_2406 = 0;
			return 1;
		}
	}
	return 0;
}


int func_896(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, int iParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)//Position - 0x8258D
{
	return func_489(uParam0, Param1, Param4, iParam7, iParam8, 0, 0, iParam9, sParam10, sParam11, sParam11, sParam11, sParam11, sParam12, sParam13, bParam14, bParam15, bParam16, iParam17);
}

int func_897()//Position - 0x825C1
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 703.6298f, -965.6701f, 29.40725f, 719.1329f, -964.4007f, 31.64533f, 12.25f, 0, 1, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
	}
	if (!iLocal_2406)
	{
		iLocal_4962 = 0;
		HUD::DISPLAY_RADAR(0);
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
		GlobalFunc_2287(0, 1);
		func_130();
		STREAMING::REQUEST_ANIM_DICT("MISSHEIST_JEWEL");
		func_126(1, 0);
		if (ENTITY::DOES_ENTITY_EXIST(Local_2659[1]))
		{
			if (!PED::IS_PED_A_PLAYER(Local_2659[1]))
			{
				PED::DELETE_PED(&(Local_2659[1]));
			}
		}
		func_944(0, 1);
		GlobalFunc_9810(&Local_2659, 1, 1);
		if (GlobalFunc_8315() == 1)
		{
			while (!func_278(&(Local_2659[0]), 0, 0f, 3f, 0f, 0, 1, 0, 0))
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			while (!func_278(&(Local_2659[1]), 1, 0f, 3f, 0f, 0, 1, 0, 0))
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				SYSTEM::WAIT(0);
			}
		}
		if (bLocal_2405)
		{
			if (GlobalFunc_8315() == 1)
			{
				CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST(Local_3369.f_119, 71, 8);
			}
			else
			{
				CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST(Local_3369.f_119, 120, 8);
			}
			while (!(CUTSCENE::HAS_CUTSCENE_LOADED() && GlobalFunc_2288(0)))
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				func_109(0);
				GlobalFunc_10914("Michael", joaat("player_zero"), 15);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 0, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 2, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 3, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 4, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 5, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 7, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 8, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Lester", 1, 0, 0, 0);
				GlobalFunc_10914("Franklin", joaat("player_one"), 8);
				GlobalFunc_6811("Driver_selection", GlobalFunc_5133(0, 0), 1, 1);
				GlobalFunc_6811("gunman_selection_1", GlobalFunc_5133(0, 1), 1, 1);
				GlobalFunc_6811("hacker_selection", GlobalFunc_5133(0, 2), 0, 1);
			}
		}
		else
		{
			if (GlobalFunc_8315() == 1)
			{
				CUTSCENE::REQUEST_CUTSCENE(Local_3369.f_120, 8);
			}
			else
			{
				CUTSCENE::REQUEST_CUTSCENE(Local_3369.f_120, 8);
			}
			while (!(CUTSCENE::HAS_CUTSCENE_LOADED() && GlobalFunc_2288(0)))
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				func_109(0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 0, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 2, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 3, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 4, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 5, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 7, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 8, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Lester", 1, 0, 0, 0);
				GlobalFunc_10914("Michael", joaat("player_zero"), 31);
				GlobalFunc_10914("Franklin", joaat("player_one"), 18);
				GlobalFunc_6811("Driver_selection", GlobalFunc_5133(0, 0), 10, 1);
				GlobalFunc_6811("gunman_selection_1", GlobalFunc_5133(0, 1), 10, 1);
				GlobalFunc_6811("hacker_selection", GlobalFunc_5133(0, 2), 0, 1);
			}
		}
		while (!func_904())
		{
			SYSTEM::WAIT(0);
		}
		func_903(Local_3369.f_12, 1);
		func_903(Local_3369.f_2, 1);
		MISC::CLEAR_AREA_OF_VEHICLES(Local_1561, 50f, 0, 0, 0, 0, 0);
		iLocal_2552 = VEHICLE::CREATE_VEHICLE(Local_3369.f_12, Local_1609, 269.3407f, 1, 1);
		func_778(iLocal_2552);
		VEHICLE::SET_VEHICLE_COLOURS(iLocal_2552, 128, 3);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_2552, 6, false);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_2552, 1);
		if (bLocal_2405)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2537))
			{
				STREAMING::REQUEST_MODEL(joaat("primo"));
				while (!STREAMING::HAS_MODEL_LOADED(joaat("primo")))
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					func_109(0);
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 703.6298f, -965.6701f, 29.40725f, 719.1329f, -964.4007f, 31.64533f, 12.25f, 0, 1, 0))
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					}
				}
				iLocal_2537 = VEHICLE::CREATE_VEHICLE(joaat("primo"), Local_1606, 275.6314f, 1, 1);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_2537, 0, 0);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iLocal_2537))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_2537, Local_1606, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_2537, 275.6314f);
			}
			iLocal_2590 = VEHICLE::CREATE_VEHICLE(Local_3369.f_2, Local_1612, 275.8923f, 1, 1);
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2537))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_2537, 711.2791f, -979.8723f, 23.1111f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_2537, 223.3972f);
			}
			iLocal_2590 = VEHICLE::CREATE_VEHICLE(Local_3369.f_2, Local_1606, 275.6314f, 1, 1);
		}
		func_886();
		if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_START_SPHERE(716.5068f, -966.4983f, 29.1884f, 10f, 0);
			SYSTEM::SETTIMERA(0);
			while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() && SYSTEM::TIMERA() < 10000)
			{
				SYSTEM::WAIT(0);
			}
			if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
		}
		GlobalFunc_563(1);
		GlobalFunc_10639(64, 6);
		GlobalFunc_10639(64, 0);
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-874851305, 0.8f, 1, 1);
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-874851305, -1f, 0, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-874851305, 3, 0, 1);
		MISC::CLEAR_AREA_OF_VEHICLES(Local_1606, 120f, 0, 0, 0, 0, 0);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(719.4675f, -989.3281f, 22.3075f, 691.5195f, -972.6179f, 26.9428f, 0, 1);
		SYSTEM::SETTIMERA(0);
		iLocal_2467 = 0;
		iLocal_2407 = 0;
		iLocal_2406 = 1;
	}
	else
	{
		switch (iLocal_2467)
		{
			case 0:
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_ss_door8"), 716.8f, -975.4f, 25f, 0, 0f, 0);
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_ss_door7"), 719.4f, -975.4f, 25f, 0, 0f, 0);
				func_828(1, 0, 0);
				if (!ENTITY::IS_ENTITY_DEAD(Local_2659[1]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_2659[1], "Franklin", 0, joaat("player_one"), 4);
				}
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2486[1], "gunman_selection_1", 2, Local_3369.f_24, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2486[0], "Driver_selection", 2, Local_3369.f_25, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2486[2], "Hacker_selection", 2, Local_3369.f_26, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2519, "Lester", 2, Local_3369.f_22, 0);
				if (bLocal_2405)
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "seamstress_near_michael", 3, joaat("s_f_y_sweatshop_01"), 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "seamstress_near_door", 3, joaat("s_f_y_sweatshop_01"), 0);
				}
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2531, "WalkingStick_lester", 2, Local_3369.f_23, 0);
				GlobalFunc_8316(1, 1, 1, 0);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				GlobalFunc_4491(0);
				iLocal_2467++;
				break;
			
			case 1:
			case 2:
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				if (CUTSCENE::IS_CUTSCENE_PLAYING() && iLocal_2467 == 1)
				{
					func_108(800, 0, 0);
					SCRIPT::SHUTDOWN_LOADING_SCREEN();
					if (iLocal_2537 != PLAYER::GET_PLAYERS_LAST_VEHICLE())
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
						{
							if ((ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()) != joaat("burrito2") && ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()) != joaat("boxville3")) && ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()) != joaat("fbi2"))
							{
								GlobalFunc_2889(706.8325f, -980.0989f, 23.1208f, 221.3399f);
							}
						}
					}
					MISC::CLEAR_AREA(Local_1606, 100f, 1, 0, 0, 0);
					MISC::CLEAR_AREA(Local_2656, 5000f, 1, 1, 0, 0);
					CLOCK::SET_CLOCK_TIME(7, 0, 0);
					func_898(&Local_4945, 0, 0, 2000, 1, 1, 0, 1);
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
					iLocal_2467 = 2;
				}
				if ((((ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", 0)) && ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Hacker_selection", 0))) && ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Driver_selection", 0))) && ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("gunman_selection_1", 0))) && ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("WalkingStick_lester", 0)))
				{
					iLocal_2519 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", 0));
					iLocal_2486[2] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Hacker_selection", 0));
					iLocal_2486[0] = func_738(0, 0, 100f, 100f, 100f, 0f, 0, 1);
					iLocal_2486[1] = func_738(0, 1, 100f, 100f, 100f, 0f, 0, 1);
					PED::DELETE_PED(&(iLocal_2486[0]));
					PED::DELETE_PED(&(iLocal_2486[1]));
					iLocal_2486[0] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Driver_selection", 0));
					iLocal_2486[1] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("gunman_selection_1", 0));
					iLocal_2531 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("WalkingStick_lester", 0));
					func_432(Local_2659[1], 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					func_617(iLocal_2486[0], 0);
					func_617(iLocal_2486[1], 0);
					if (!bLocal_2405)
					{
						if (GlobalFunc_8315() != 1)
						{
							GlobalFunc_9019(&Local_2659, 1);
							func_167(&Local_2659, 1, 1, 0);
						}
					}
					iLocal_2467 = 3;
				}
				break;
			
			case 3:
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					GlobalFunc_4450();
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
				{
					GlobalFunc_4450();
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lester", 0))
				{
					func_892();
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2519))
					{
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_2519, 0, 0);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_2531, iLocal_2519, PED::GET_PED_BONE_INDEX(iLocal_2519, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					}
				}
				if (!bLocal_2405)
				{
					if (iLocal_4962 == 0)
					{
						if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 70432.32f)
						{
							if (bLocal_4944)
							{
								GlobalFunc_2898(1);
								iLocal_4962 = 1;
							}
						}
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(func_93(0)))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_93(0), 713.2115f, -962.9461f, 29.4335f, 1f, 20000, 0.25f, 0, 190.7f);
							PED::FORCE_PED_MOTION_STATE(func_93(0), -668482597, 1, 1, 0);
						}
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						iLocal_2467 = 4;
					}
				}
				else
				{
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
					{
						if (!PED::IS_PED_INJURED(func_93(1)))
						{
							ENTITY::SET_ENTITY_COORDS(func_93(1), 705.3368f, -965.3012f, 29.3953f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(func_93(1), 275.2882f);
						}
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
					{
						if (GlobalFunc_8315() != 0)
						{
							if (!bLocal_4944)
							{
								GlobalFunc_2898(0);
							}
							GlobalFunc_9019(&Local_2659, 0);
							func_167(&Local_2659, 1, 0, 0);
							ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), true, 0);
						}
						if (!PED::IS_PED_INJURED(func_93(1)))
						{
							TASK::CLEAR_PED_TASKS(func_93(1));
						}
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 260.4394f);
						if (!PED::IS_PED_INJURED(iLocal_2486[0]))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_2486[0], 706.6033f, -966.9639f, 29.4179f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iLocal_2486[0], 7.126f);
						}
						if (bLocal_2405)
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
							PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1500, 0, 1, 0);
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 0);
						}
						iLocal_2467 = 4;
					}
				}
				break;
		}
		if (iLocal_2467 >= 4)
		{
			if (bLocal_2405)
			{
				if (!PED::IS_PED_INJURED(iLocal_2486[2]))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_2486[2], 705.5753f, -966.6228f, 29.3953f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_2486[2], 309.9281f);
				}
			}
			RECORDING::_0x81CBAE94390F9F89();
			GlobalFunc_8316(0, 1, 1, 0);
			GlobalFunc_2287(0, 0);
			func_111();
			func_9(iLocal_2486[0], 0, 0);
			func_9(iLocal_2486[1], 0, 0);
			if (!PED::IS_PED_INJURED(func_93(1)))
			{
				func_9(func_93(1), 0, 0);
			}
			func_9(func_93(0), 0, 0);
			func_616(0);
			func_742(0, 1, 1);
			func_111();
			if (!PED::IS_PED_INJURED(func_93(0)))
			{
				func_619(func_93(0));
			}
			if (!PED::IS_PED_INJURED(func_93(1)))
			{
				func_619(func_93(1));
				TASK::TASK_LOOK_AT_ENTITY(func_93(1), func_93(0), -1, 0, 2);
			}
			if (!PED::IS_PED_INJURED(iLocal_2519))
			{
				func_619(iLocal_2519);
			}
			if (!PED::IS_PED_INJURED(iLocal_2486[0]))
			{
				func_619(iLocal_2486[0]);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_2486[0], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
			if (!PED::IS_PED_INJURED(iLocal_2486[1]))
			{
				func_619(iLocal_2486[1]);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_2486[1], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
			if (!PED::IS_PED_INJURED(iLocal_2486[2]))
			{
				func_619(iLocal_2486[2]);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_2486[2], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
			if (!PED::IS_PED_INJURED(iLocal_2486[2]))
			{
				func_619(iLocal_2486[2]);
				func_122(joaat("weapon_pistol"), 1, 1, 0);
				if (!PED::IS_PED_INJURED(iLocal_2486[2]))
				{
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_2486[2], joaat("weapon_pistol"), 1000, 0, 1);
				}
				WEAPON::REMOVE_WEAPON_ASSET(joaat("weapon_pistol"));
				PED::SET_PED_ACCURACY(iLocal_2486[2], 50);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_2486[2], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2590))
			{
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_2590, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2537))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2537))
				{
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_2590, 1);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2519))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_2519, 185, 1);
			}
			Global_67064 = 0;
			HUD::DISPLAY_RADAR(1);
			iLocal_2406 = 0;
			iLocal_2407 = 0;
			return 1;
		}
	}
	return 0;
}

void func_898(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x832EB
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
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true);
		}
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			ENTITY::SET_ENTITY_VISIBLE(iVar0, true);
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
			Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4249 = GlobalFunc_7719();
		}
	}
}





void func_903(int iParam0, bool bParam1)//Position - 0x83510
{
	int iVar0;
	
	iVar0 = func_799(iParam0);
	if (iVar0 != -1)
	{
		func_129(Local_3029[iVar0 /*3*/], 1, 1, bParam1);
		Local_3029[iVar0 /*3*/].f_1 = 1;
		Local_3029[iVar0 /*3*/].f_2 = 1;
	}
}

int func_904()//Position - 0x83549
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 703.6298f, -965.6701f, 29.40725f, 719.1329f, -964.4007f, 31.64533f, 12.25f, 0, 1, 0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		}
	}
	if (func_905(90, &Local_4945, 1, 0, 0, 0, 0))
	{
		iLocal_2467 = 0;
		func_742(0, 1, 1);
		return 1;
	}
	else if ((iLocal_2467 == 0 && CAM::DOES_CAM_EXIST(Local_4945.f_4)) && CAM::IS_CAM_ACTIVE(Local_4945.f_4))
	{
		if (CAM::IS_CAM_RENDERING(Local_4945.f_4))
		{
			if (Local_4945.f_3 >= 1)
			{
				SCRIPT::SHUTDOWN_LOADING_SCREEN();
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 702.9835f, -984.5344f, 23.0969f, 1, 0, 0, 1);
					STREAMING::LOAD_SCENE(718.7215f, -977.4476f, 36.5705f);
					CAM::DO_SCREEN_FADE_IN(500);
				}
				iLocal_2467++;
			}
		}
	}
	return 0;
}

bool func_905(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x83640
{
	struct<2> Var0;
	
	GlobalFunc_9026(iParam0, &Var0);
	GlobalFunc_741(iParam0, &Var0, &(Var0.f_1));
	return func_906(uParam1, &Var0, bParam2, bParam3, bParam4, bParam5, bParam6);
}

int func_906(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x8366E
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	
	uParam0->f_7 = *uParam1;
	uParam0->f_8 = uParam1->f_1;
	if ((GlobalFunc_2(0) && !bParam2) && !bParam4)
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
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false);
				}
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
					}
					ENTITY::SET_ENTITY_VISIBLE(iVar0, false);
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
			func_898(uParam0, 1, 0, 2000, 1, 1, 0, 1);
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
						ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false);
					}
					iVar2 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar2))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, 1, 0);
						}
						ENTITY::SET_ENTITY_VISIBLE(iVar2, false);
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
				func_898(uParam0, 1, 0, 2000, 1, 1, 0, 1);
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
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false);
				}
				iVar4 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar4))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar4))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar4, 1, 0);
					}
					ENTITY::SET_ENTITY_VISIBLE(iVar4, false);
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
			func_898(uParam0, 1, 0, 2000, 1, 1, 0, 1);
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
			if (GlobalFunc_9141(uParam0->f_8, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
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
		else if (GlobalFunc_9141(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
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
					GlobalFunc_9141(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, 1f, 0, 1, 1065353216);
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






































int func_944(int iParam0, bool bParam1)//Position - 0x86DE4
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
		func_947(&(Global_17052[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2));
		func_278(&(Global_17052[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_17052.f_7 = iParam0;
	Global_17052.f_39 = 1;
	func_167(&Global_17052, 0, 0, 0);
	GlobalFunc_5124(iParam0);
	return 1;
}



int func_947(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x86F9C
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
				func_464(*iParam0);
				GlobalFunc_7694(*iParam0, 1, 0);
				GlobalFunc_7693(*iParam0);
				GlobalFunc_7707(*iParam0);
				func_280(*iParam0, bParam6);
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


void func_949()//Position - 0x8708D
{
	func_955();
	bLocal_2930 = false;
	if (Local_2931[0 /*7*/].f_2 && bLocal_2413 == 0)
	{
		switch (Local_2931[0 /*7*/].f_3)
		{
			case 0:
				if (!bLocal_2919 && (!bLocal_2920 || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()))
				{
					if (!bLocal_2921 || Local_2931[0 /*7*/].f_4)
					{
						if (func_954(0))
						{
							func_608(Local_2931[0 /*7*/], 0, 0, Local_2931[0 /*7*/].f_4, 7, 0, 0);
							if (bLocal_2919 && iLocal_2923 == Local_2931[0 /*7*/].f_1)
							{
								func_953();
							}
						}
					}
				}
				break;
			
			case 1:
				if (!bLocal_2920 && (!bLocal_2919 || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()))
				{
					if (!bLocal_2921 || Local_2931[0 /*7*/].f_4)
					{
						if (func_954(0))
						{
							func_792(Local_2931[0 /*7*/], 0, 0, Local_2931[0 /*7*/].f_4, 7500);
							func_953();
						}
					}
				}
				break;
			
			case 2:
				if (!bLocal_2921)
				{
					if ((!bLocal_2919 && !bLocal_2920) || Local_2931[0 /*7*/].f_4)
					{
						if (func_954(0))
						{
							func_951(Local_2931[0 /*7*/], 0, 0, Local_2931[0 /*7*/].f_4, 0);
							func_953();
						}
					}
				}
				break;
			}
	}
	if (!bLocal_2930)
	{
		func_950();
	}
}

void func_950()//Position - 0x871E8
{
	iLocal_2928 = 0;
	iLocal_2927 = 0;
	iLocal_2929 = 0;
}

void func_951(char* sParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x871FC
{
	bool bVar0;
	bool bVar1;
	
	if (iLocal_2925 != MISC::GET_HASH_KEY(sParam0))
	{
		bVar0 = false;
	}
	else
	{
		bVar0 = true;
	}
	bVar1 = true;
	if (bParam3)
	{
		bVar1 = false;
	}
	if (bParam1)
	{
		func_611(1, 1, 1);
		func_610();
	}
	else if (bParam2)
	{
		if (!bVar0)
		{
			func_611(bVar1, bVar1, bParam2);
		}
	}
	if ((bParam1 || (bParam2 && !bVar0)) || !bLocal_2921)
	{
		if (bParam4)
		{
			GlobalFunc_1(sParam0);
		}
		else
		{
			GlobalFunc_159(sParam0, -1);
		}
		func_952(sParam0);
		bLocal_2921 = true;
	}
}

void func_952(char* sParam0)//Position - 0x8728A
{
	iLocal_2925 = MISC::GET_HASH_KEY(sParam0);
}

void func_953()//Position - 0x8729B
{
	func_607(0);
	iLocal_2926 = 0;
	while (iLocal_2926 <= 6)
	{
		func_606(iLocal_2926, iLocal_2926 + 1);
		iLocal_2926++;
	}
	func_607(7);
}

int func_954(int iParam0)//Position - 0x872CF
{
	bLocal_2930 = true;
	if (!iLocal_2929)
	{
		iLocal_2928 = MISC::GET_GAME_TIMER();
		iLocal_2927 = 0;
		iLocal_2929 = 1;
		if (Local_2931[iParam0 /*7*/].f_5 == 0)
		{
			return 1;
		}
	}
	else
	{
		iLocal_2927 = (iLocal_2927 + (MISC::GET_GAME_TIMER() - iLocal_2928));
		iLocal_2928 = MISC::GET_GAME_TIMER();
		if (iLocal_2927 > Local_2931[iParam0 /*7*/].f_5)
		{
			return 1;
		}
	}
	return 0;
}

void func_955()//Position - 0x8732F
{
	bLocal_2919 = AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING();
	bLocal_2920 = GlobalFunc_5172(&Local_2380, 1);
	bLocal_2921 = HUD::IS_HELP_MESSAGE_BEING_DISPLAYED();
}

void func_956()//Position - 0x87350
{
	switch (iLocal_1522)
	{
		case 0:
			GlobalFunc_509(Local_3369.f_201);
			break;
		
		case 1:
			GlobalFunc_509("JH_FAILCLOSE");
			break;
		
		case 2:
			GlobalFunc_509(Local_3369.f_202);
			break;
		
		case 3:
			GlobalFunc_509(Local_3369.f_203);
			break;
		
		case 4:
			GlobalFunc_509(Local_3369.f_204);
			break;
		
		case 5:
			GlobalFunc_509(Local_3369.f_205);
			break;
		
		case 6:
			GlobalFunc_509("JH2_HCKDEAD");
			break;
		
		case 7:
			GlobalFunc_509("JH2_HCKGUN");
			break;
		
		case 8:
			GlobalFunc_509("JH2_HCKDRV");
			break;
		
		case 9:
			GlobalFunc_509(Local_3369.f_206);
			break;
		
		case 10:
			GlobalFunc_509(Local_3369.f_215);
			break;
		
		case 11:
			GlobalFunc_509(Local_3369.f_216);
			break;
		
		case 12:
			GlobalFunc_509(Local_3369.f_217);
			break;
		
		case 13:
			GlobalFunc_509(Local_3369.f_207);
			break;
		
		case 14:
			GlobalFunc_509(Local_3369.f_208);
			break;
		
		case 15:
			GlobalFunc_509(Local_3369.f_209);
			break;
		
		case 16:
			GlobalFunc_509(Local_3369.f_210);
			break;
		
		case 17:
			GlobalFunc_509(Local_3369.f_212);
			break;
		
		case 18:
			GlobalFunc_509(Local_3369.f_213);
			break;
		
		case 19:
			GlobalFunc_509(Local_3369.f_214);
			break;
		
		case 20:
			GlobalFunc_509("F_SECESCAPE");
			break;
		
		case 21:
			GlobalFunc_509("F_INSUFTAKE");
			break;
		
		case 26:
			GlobalFunc_509("F_ARRESTED");
			break;
		
		case 22:
			GlobalFunc_509("F_BLEW");
			break;
		
		case 23:
			GlobalFunc_509("F_BLEWID");
			break;
		
		case 24:
			GlobalFunc_509("JWL_GASFAIL");
			break;
		
		case 25:
			GlobalFunc_509("F_GAS");
			break;
	}
	GlobalFunc_10616(0);
	if (bLocal_2405)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("JH2A_MISSION_FAIL");
	}
	else
	{
		AUDIO::TRIGGER_MUSIC_EVENT("JH2B_MISSION_FAIL");
	}
	while (!GlobalFunc_145())
	{
		SYSTEM::WAIT(0);
	}
	func_464(PLAYER::PLAYER_PED_ID());
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	VEHICLE::DELETE_VEHICLE(&iLocal_2537);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2590))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_2590))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_2590);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2486[0]))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_2486[0]))
		{
			PED::DELETE_PED(&(iLocal_2486[0]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2486[2]))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_2486[2]))
		{
			PED::DELETE_PED(&(iLocal_2486[2]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2486[1]))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_2486[1]))
		{
			PED::DELETE_PED(&(iLocal_2486[1]));
		}
	}
	GlobalFunc_5100(0, iLocal_97);
	GlobalFunc_5100(1, iLocal_98);
	GlobalFunc_7621(88, 0, 1, 1, 0);
	GlobalFunc_7621(89, 0, 1, 1, 0);
	func_1013();
	SCRIPT::TERMINATE_THIS_THREAD();
}










int func_966()//Position - 0x8847F
{
	int iVar0;
	
	if (iLocal_2379 != 15 && iLocal_2379 != 2)
	{
		if (iLocal_2379 != 0 && iLocal_2379 != 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(func_93(0)))
			{
				if (PED::IS_PED_INJURED(func_93(0)))
				{
					if ((iLocal_2379 == 9 || iLocal_2379 == 10) || iLocal_2379 == 11)
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(func_93(0), PLAYER::PLAYER_PED_ID(), 1))
						{
							iLocal_1522 = 3;
							return 1;
						}
					}
					if ((iLocal_2379 != 9 || iLocal_2379 != 10) || iLocal_2379 != 11)
					{
						iLocal_1522 = 3;
						return 1;
					}
				}
			}
			if (iLocal_2379 != 14)
			{
				if (PED::IS_PED_INJURED(func_93(1)))
				{
					iLocal_1522 = 18;
					return 1;
				}
			}
		}
		switch (iLocal_2379)
		{
			case 1:
				break;
			
			case 2:
				if (PED::IS_PED_INJURED(iLocal_2486[1]))
				{
					iLocal_1522 = 5;
					return 1;
				}
				if (PED::IS_PED_INJURED(iLocal_2486[2]))
				{
					iLocal_1522 = 5;
					return 1;
				}
				if (PED::IS_PED_INJURED(iLocal_2486[2]))
				{
					iLocal_1522 = 5;
					return 1;
				}
				if (bLocal_2405)
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2537, 0))
					{
					}
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2590, 0))
					{
					}
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2552, 0))
					{
					}
				}
				else
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2590, 0))
					{
					}
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2552, 0))
					{
					}
				}
				break;
			
			case 3:
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2519))
				{
					if (PED::IS_PED_INJURED(iLocal_2519))
					{
						iLocal_1522 = 5;
						return 1;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2486[1]))
				{
					if (PED::IS_PED_INJURED(iLocal_2486[1]))
					{
						iLocal_1522 = 5;
						return 1;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2486[0]))
				{
					if (PED::IS_PED_INJURED(iLocal_2486[0]))
					{
						iLocal_1522 = 5;
						return 1;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2486[2]))
				{
					if (PED::IS_PED_INJURED(iLocal_2486[2]))
					{
						iLocal_1522 = 5;
						return 1;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2486[2]))
				{
					if (PED::IS_PED_INJURED(iLocal_2486[2]))
					{
						iLocal_1522 = 5;
						return 1;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2552))
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2552, 0))
					{
						iLocal_1522 = 12;
						return 1;
					}
				}
				if (bLocal_2405)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_93(0), -631.2317f, -237.4819f, 37.05722f, -617.0735f, -227.0687f, 41.90396f, 17f, 0, 1, 0))
					{
						iLocal_1522 = 22;
						return 1;
					}
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2537, 0))
					{
						iLocal_1522 = 11;
						return 1;
					}
					else if (GlobalFunc_2226(&iLocal_2537))
					{
						iLocal_1522 = 11;
						return 1;
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2590))
					{
						if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2590, 0))
						{
							iLocal_1522 = 10;
							return 1;
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(func_93(1)) && !ENTITY::IS_ENTITY_DEAD(func_93(0)))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_93(1), 1), ENTITY::GET_ENTITY_COORDS(func_93(0), 1), 1) > 200f)
						{
							GlobalFunc_164("CMN_FLEAVE", 7500, 1);
							iLocal_1522 = 16;
							return 1;
						}
					}
				}
				else
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_93(1), -631.2317f, -237.4819f, 37.05722f, -617.0735f, -227.0687f, 41.90396f, 17f, 0, 1, 0))
					{
						iLocal_1522 = 22;
						return 1;
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2590))
					{
						if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2590, 0))
						{
							iLocal_1522 = 10;
							return 1;
						}
						if (GlobalFunc_2226(&iLocal_2590))
						{
							iLocal_1522 = 10;
							return 1;
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(func_93(1)))
					{
						WEAPON::GET_CURRENT_PED_WEAPON(func_93(1), &iVar0, 1);
						if (iVar0 != joaat("weapon_unarmed"))
						{
							if (PED::IS_PED_ON_FOOT(func_93(1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_93(1), 1), Local_1619, 1) < 50f)
								{
									iLocal_1522 = 22;
									return 1;
								}
							}
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(func_93(1)) && !ENTITY::IS_ENTITY_DEAD(func_93(0)))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_93(1), 1), ENTITY::GET_ENTITY_COORDS(func_93(0), 1), 1) > 200f)
						{
							iLocal_1522 = 15;
							return 1;
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(func_93(1)) && !ENTITY::IS_ENTITY_DEAD(iLocal_2486[0]))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_93(1), 1), ENTITY::GET_ENTITY_COORDS(iLocal_2486[0], 1), 1) > 200f)
						{
							iLocal_1522 = 17;
							return 1;
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(func_93(1)) && !ENTITY::IS_ENTITY_DEAD(iLocal_2486[1]))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_93(1), 1), ENTITY::GET_ENTITY_COORDS(iLocal_2486[1], 1), 1) > 200f)
						{
							iLocal_1522 = 17;
							return 1;
						}
					}
				}
				if (CLOCK::GET_CLOCK_HOURS() > 18)
				{
					iLocal_1522 = 1;
					return 1;
				}
				break;
			
			case 4:
				if (CLOCK::GET_CLOCK_HOURS() > 18)
				{
					iLocal_1522 = 1;
					return 1;
				}
				if (((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_93(1), -580.5092f, -296.5444f, 33.94491f, -651.7164f, -202.9675f, 90.15153f, 40.75f, 0, 1, 0) && !ENTITY::IS_ENTITY_AT_COORD(func_93(1), -578.8325f, -280.2415f, 34.3058f, 25f, 25f, 25f, false, 1, 0)) && !PED::IS_PED_RAGDOLL(func_93(1))) && !PED::IS_PED_JUMPING(func_93(1)))
				{
					iLocal_1522 = 2;
					return 1;
				}
				if (iLocal_1501 == 1)
				{
					if (WEAPON::HAS_PED_GOT_WEAPON(func_93(1), joaat("weapon_bzgas"), 0))
					{
						iLocal_1501 = 0;
						WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_bzgas"), 31, 0);
					}
				}
				if (((iLocal_1501 == 0 && iLocal_2406) && iLocal_2467 < 8) && (MISC::GET_GAME_TIMER() - iLocal_1502) > 7500)
				{
					WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_bzgas"), 31, 0);
					if (WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_bzgas")))
					{
						if (WEAPON::GET_AMMO_IN_PED_WEAPON(func_93(1), joaat("weapon_bzgas")) == 0)
						{
							iLocal_1522 = 25;
							return 1;
						}
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_93(1), -631.2317f, -237.4819f, 37.05722f, -617.0735f, -227.0687f, 41.90396f, 17f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(func_93(1), -631.597f, -237.6347f, 38.87703f, 3.5f, 3.5f, 1.8125f, false, 1, 0))
				{
					iLocal_1522 = 23;
					return 1;
				}
				if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -550.5181f, -387.0717f, 30.87467f, -727.1269f, -77.97614f, 85.24414f, 223.5f) && !FIRE::IS_EXPLOSION_IN_ANGLED_AREA(21, -550.5181f, -387.0717f, 30.87467f, -727.1269f, -77.97614f, 85.24414f, 223.5f))
				{
					while (!GlobalFunc_10618(&uLocal_2737, "JHAUD", "JH_BOOM", 9, 0, 0, 0))
					{
						SYSTEM::WAIT(0);
					}
					while (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						SYSTEM::WAIT(0);
					}
					iLocal_1522 = 22;
					return 1;
				}
				if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(21, -550.5181f, -387.0717f, 30.87467f, -727.1269f, -77.97614f, 85.24414f, 223.5f) && !FIRE::IS_EXPLOSION_IN_ANGLED_AREA(21, -587.7454f, -295.5597f, -34.0722f, -638.5672f, -203.2724f, 165.5777f, 33.25f))
				{
					iLocal_1522 = 24;
					return 1;
				}
				if ((PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 && iLocal_2467 < 6) || MISC::IS_BULLET_IN_ANGLED_AREA(-550.5181f, -387.0717f, 30.87467f, -727.1269f, -77.97614f, 85.24414f, 223.5f, 1))
				{
					iLocal_1522 = 22;
					return 1;
				}
				break;
			
			case 5:
				iLocal_2466 = 0;
				while (iLocal_2466 <= 4)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2492[iLocal_2466]))
					{
						if (PED::IS_PED_INJURED(iLocal_2492[iLocal_2466]))
						{
						}
					}
					iLocal_2466++;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2491))
				{
					if (PED::IS_PED_INJURED(iLocal_2491))
					{
					}
				}
				break;
			
			case 6:
				iLocal_2466 = 0;
				while (iLocal_2466 <= 4)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2492[iLocal_2466]))
					{
						if (PED::IS_PED_INJURED(iLocal_2492[iLocal_2466]))
						{
						}
					}
					iLocal_2466++;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2491))
				{
					if (PED::IS_PED_INJURED(iLocal_2491))
					{
					}
				}
				if (PED::IS_PED_INJURED(iLocal_2486[0]))
				{
					iLocal_1522 = 5;
					return 1;
				}
				if (PED::IS_PED_INJURED(iLocal_2486[1]))
				{
					iLocal_1522 = 5;
					return 1;
				}
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2590, 0))
				{
				}
				break;
			
			case 7:
				if (PED::IS_PED_INJURED(iLocal_2486[1]))
				{
					iLocal_1522 = 5;
					return 1;
				}
				if (PED::IS_PED_INJURED(iLocal_2486[0]))
				{
					iLocal_1522 = 5;
					return 1;
				}
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_93(0), -643.1521f, -243.8355f, 50.90952f, -609.5488f, -224.0781f, 34.87283f, 21.25f, 0, 1, 0))
					{
						iLocal_1522 = 2;
						return 1;
					}
				}
				if (bLocal_2474)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2491))
					{
						if (!PED::IS_PED_INJURED(iLocal_2491))
						{
							if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_2491, -643.1521f, -243.8355f, 50.90952f, -609.5488f, -224.0781f, 34.87283f, 21.25f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_2491, -673.4018f, -222.5538f, 35.03787f, -639.3054f, -237.3636f, 39.20784f, 18.5f, 0, 1, 0))
							{
								iLocal_1522 = 20;
								return 1;
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2552))
				{
					if (ENTITY::IS_ENTITY_DEAD(iLocal_2552))
					{
						iLocal_1522 = 12;
						return 1;
					}
				}
				iLocal_2466 = 0;
				while (iLocal_2466 <= 2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2532[iLocal_2466]))
					{
						if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2532[iLocal_2466], 0) || (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_2532[iLocal_2466], 6, 0) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_2532[iLocal_2466], 7, 0)))
						{
							iLocal_1522 = 9;
							return 1;
						}
					}
					iLocal_2466++;
				}
				if (!func_833(PLAYER::PLAYER_PED_ID()))
				{
					if (((MISC::GET_GAME_TIMER() - iLocal_2916) > 20000 && iLocal_2915 == 1) || bLocal_2405)
					{
						iLocal_1522 = 2;
						return 1;
					}
					if (iLocal_2915 == 0 && !GlobalFunc_5172(&Local_2380, 2))
					{
						GlobalFunc_164("JH_ABANDON", 7500, 1);
						iLocal_2915 = 1;
					}
				}
				else
				{
					iLocal_2915 = 0;
					iLocal_2916 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case 8:
				if (iLocal_2428)
				{
					iLocal_1522 = 21;
					return 1;
				}
				if (PED::IS_PED_INJURED(iLocal_2486[1]))
				{
					iLocal_1522 = 5;
					return 1;
				}
				break;
			
			case 9:
			case 10:
			case 11:
				if (!bLocal_2475)
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2532[1], 0))
					{
						iLocal_1522 = 9;
						return 1;
					}
					else
					{
						if (PED::IS_PED_INJURED(iLocal_2486[1]))
						{
							iLocal_1522 = 5;
						}
						if (!PED::IS_PED_INJURED(iLocal_2486[1]))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_2486[1], 0) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2532[1]))
							{
								iLocal_1522 = 5;
								return 1;
							}
						}
					}
				}
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2532[0], 0))
				{
					iLocal_1522 = 9;
					return 1;
				}
				else
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_93(1), 1), ENTITY::GET_ENTITY_COORDS(iLocal_2532[0], 1), 1) > 150f)
					{
						if (iLocal_2914 == 0)
						{
							GlobalFunc_164("JH_LOSINGC", 7500, 1);
							iLocal_2914 = 1;
						}
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_93(1), 1), ENTITY::GET_ENTITY_COORDS(iLocal_2532[0], 1), 1) > 200f)
					{
						if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_2532[0]))
						{
							iLocal_1522 = 13;
							return 1;
						}
					}
					if (ENTITY::IS_ENTITY_AT_COORD(func_93(1), 1003.359f, -206.0158f, (69.3833f + 2.5f), 100f, 100f, 2f, false, 1, 0))
					{
						iLocal_1522 = 13;
						return 1;
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_93(1), -213.0718f, -615.9269f, 47.34452f, -278.7134f, -607.777f, 30.75745f, 25f, 0, 1, 0))
					{
						iLocal_1522 = 13;
						return 1;
					}
					if (!PED::IS_PED_INJURED(iLocal_2486[0]))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_2486[0], 0) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2532[0]))
						{
							iLocal_1522 = 5;
						}
					}
				}
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2532[2], 0))
				{
					iLocal_1522 = 9;
					return 1;
				}
				else if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_2532[2], func_93(1), 150f, 150f, 150f, 0, 0, 0))
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_2532[2]))
					{
						iLocal_1522 = 14;
						return 1;
					}
				}
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2532[0]))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_2532[0]) > 152720.2f)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_93(1), 1), ENTITY::GET_ENTITY_COORDS(iLocal_2532[0], 1), 1) > 125f)
						{
							iLocal_1522 = 13;
							return 1;
						}
					}
				}
				break;
			
			case 12:
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2486[0]))
				{
					if (!PED::IS_PED_INJURED(iLocal_2486[0]))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_2486[0], 0))
						{
						}
					}
					else
					{
						iLocal_1522 = 8;
						return iLocal_2406;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2486[2]))
				{
					if (PED::IS_PED_INJURED(iLocal_2486[2]))
					{
						iLocal_1522 = 6;
						return iLocal_2406;
					}
				}
				if (!bLocal_2475)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2486[1]))
					{
						if (PED::IS_PED_INJURED(iLocal_2486[1]) || !PED::IS_PED_IN_ANY_VEHICLE(iLocal_2486[1], 0))
						{
							iLocal_1522 = 7;
							return iLocal_2406;
						}
					}
				}
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2532[0], 0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2532[2], 0))
				{
					iLocal_1522 = 9;
					return iLocal_2406;
				}
				if (!bLocal_2475)
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2532[1], 0))
					{
						iLocal_1522 = 9;
						return iLocal_2406;
					}
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2552, 0) || GlobalFunc_2226(&iLocal_2552))
					{
						iLocal_1522 = 12;
						return iLocal_2406;
					}
				}
				if (fLocal_1752 > 222000f)
				{
					if (iLocal_1510 > 0)
					{
						iLocal_1522 = 26;
						return iLocal_2406;
					}
				}
				if (iLocal_1515 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(func_93(0)))
					{
						if (GlobalFunc_156(func_93(0), iLocal_2486[0], 0) > 350f)
						{
							iLocal_1522 = 17;
							return iLocal_2406;
						}
					}
				}
				if (func_600() == 0)
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_2552, 0) > 200f)
					{
						iLocal_1522 = 2;
						return iLocal_2406;
					}
				}
				break;
			
			case 13:
				if (!bLocal_2475)
				{
					if (PED::IS_PED_INJURED(iLocal_2486[1]))
					{
					}
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2532[1], 0))
					{
					}
				}
				if (PED::IS_PED_INJURED(iLocal_2486[0]))
				{
				}
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2532[0], 0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2532[2], 0))
				{
				}
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2552, 0))
				{
				}
				break;
			
			case 14:
				if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 206.7173f, -2024.657f, 17.2513f, 1) > 1000f)
				{
					iLocal_1522 = 2;
					return 1;
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 209.6063f, -2005.642f, 17.36146f, 212.1836f, -2012.635f, 21.52557f, 11f, 0, 1, 0))
					{
						iLocal_1522 = 22;
						return 1;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2519))
				{
					if (PED::IS_PED_INJURED(iLocal_2519))
					{
						iLocal_1522 = 5;
						return 1;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2486[2]))
				{
					if (PED::IS_PED_INJURED(iLocal_2486[2]))
					{
						iLocal_1522 = 6;
						return 1;
					}
				}
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2552, 0) || GlobalFunc_2226(&iLocal_2552))
				{
					iLocal_1522 = 12;
					return 1;
				}
				break;
			}
	}
	return 0;
}


void func_968(bool bParam0)//Position - 0x89492
{
	bLocal_70 = bParam0;
	func_872();
	PED::ADD_RELATIONSHIP_GROUP("SHOP", &iLocal_2636);
	PED::ADD_RELATIONSHIP_GROUP("COPPERS", &iLocal_2637);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 1862763509, iLocal_2636);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_2637);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_2637, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_2637, iLocal_2636);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_2636, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_2636, iLocal_2637);
	func_978(bParam0);
	func_974();
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(Local_3369.f_244);
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(Local_3369.f_245);
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(Local_3369.f_246);
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(Local_3369.f_247);
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("JWL_HEIST_CAR_SMASHES_BIG");
	AUDIO::DISTANT_COP_CAR_SIRENS(0);
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	if (iLocal_2604 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_2604);
	}
	MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
	iLocal_2423 = 1;
	if (iLocal_2379 > 7)
	{
		if (iLocal_2463 == 0)
		{
			iLocal_2463 = 3160280;
			iLocal_2917 = iLocal_2463;
		}
	}
	switch (iLocal_2379)
	{
		case 0:
			func_973(&iLocal_1516, 716.5068f, -966.4983f, 29.1884f, 1, 0);
			GlobalFunc_4967(0, -1, 1);
			break;
		
		case 2:
			func_130();
			func_126(0, 0);
			func_973(&iLocal_1516, 716.5068f, -966.4983f, 29.1884f, 1, 0);
			GlobalFunc_4967(0, -1, 1);
			break;
		
		case 3:
			func_130();
			func_823(Local_3369.f_12);
			func_823(Local_3369.f_2);
			func_126(0, 0);
			func_824(&iLocal_1516, 716.5068f, -966.4983f, 29.1884f, "V_sweat", 1, 0);
			while (!GlobalFunc_7047(&iLocal_2519, 12, Local_1567, 213.4447f, 1))
			{
				SYSTEM::WAIT(0);
			}
			func_619(iLocal_2519);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2519))
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_2519, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_2519, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_2519, 3, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_2519, 4, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_2519, 5, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_2519, 7, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_2519, 8, 0, 0, 0);
				PED::SET_PED_PROP_INDEX(iLocal_2519, 1, 0, 0, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_2519, 185, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2519))
			{
				iLocal_2531 = OBJECT::CREATE_OBJECT(Local_3369.f_23, ENTITY::GET_ENTITY_COORDS(iLocal_2519, 0), 1, 1, 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_2531, iLocal_2519, PED::GET_PED_BONE_INDEX(iLocal_2519, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			}
			if (bLocal_2405)
			{
				STREAMING::REQUEST_MODEL(joaat("primo"));
				while (!STREAMING::HAS_MODEL_LOADED(joaat("primo")))
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					func_109(0);
				}
				iLocal_2537 = VEHICLE::CREATE_VEHICLE(joaat("primo"), Local_1606, 275.6314f, 1, 1);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_2537, 0, 0);
				iLocal_2590 = VEHICLE::CREATE_VEHICLE(Local_3369.f_2, Local_1612, 275.8923f, 1, 1);
			}
			else
			{
				iLocal_2590 = VEHICLE::CREATE_VEHICLE(Local_3369.f_2, Local_1606, 275.6314f, 1, 1);
			}
			iLocal_2552 = VEHICLE::CREATE_VEHICLE(Local_3369.f_12, Local_1609, 269.3407f, 1, 1);
			func_778(iLocal_2552);
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_2552, 128, 3);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_2552, 6, false);
			CLOCK::SET_CLOCK_TIME(9, 0, 0);
			GlobalFunc_4967(0, -1, 1);
			break;
		
		case 4:
			func_130();
			func_126(0, 0);
			Local_2457 = { Local_1616 };
			STREAMING::REQUEST_MODEL(joaat("primo"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("primo")))
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				func_109(0);
			}
			iLocal_2537 = VEHICLE::CREATE_VEHICLE(joaat("primo"), Local_1606, 275.6314f, 1, 1);
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_2537, 0, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2537, 0))
			{
				if (!PED::IS_PED_INJURED(func_93(0)))
				{
					PED::SET_PED_INTO_VEHICLE(func_93(0), iLocal_2537, -1);
				}
				if (!PED::IS_PED_INJURED(iLocal_2486[0]))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_2486[0], iLocal_2537, 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_2486[1]))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_2486[1], iLocal_2537, 2);
				}
			}
			AUDIO::TRIGGER_MUSIC_EVENT("JH2A_MISSION_START_ST");
			func_556(0);
			MISC::CLEAR_AREA(Local_1616, 50f, 1, 0, 0, 0);
			GlobalFunc_4967(0, -1, 1);
			break;
		
		case 5:
			func_969(1, 0);
			func_130();
			func_126(0, 0);
			Local_2457 = { Local_1616 };
			if (!bParam0)
			{
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(-623.7916f, -232.2508f, 38.3262f, 35f, 0);
				SYSTEM::SETTIMERA(0);
				while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() && SYSTEM::TIMERA() < 10000)
				{
					SYSTEM::WAIT(0);
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
			}
			func_556(0);
			if (bLocal_2405)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("JH2A_GAS_SHOP_RESTART");
			}
			GlobalFunc_4967(0, -1, 1);
			break;
		
		case 6:
			func_130();
			func_823(Local_3369.f_2);
			func_823(Local_3369.f_3);
			iLocal_2466 = 0;
			while (iLocal_2466 <= 4)
			{
				func_823(Local_3369.f_4[iLocal_2466]);
				iLocal_2466++;
			}
			func_821(Local_3369.f_35);
			func_126(0, 0);
			func_122(iLocal_1464, 1, 0, 0);
			Local_2457 = { Local_1619 };
			iLocal_2590 = VEHICLE::CREATE_VEHICLE(Local_3369.f_2, Local_1622, 275.6314f, 1, 1);
			if (!PED::IS_PED_INJURED(func_93(0)))
			{
				if (!bParam0)
				{
					WEAPON::GIVE_WEAPON_TO_PED(func_93(0), iLocal_1464, 1000, 1, 1);
					func_879(func_93(0), iLocal_1464, joaat("component_at_ar_supp"));
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(func_93(0), iLocal_1464, 1);
				}
			}
			if (!PED::IS_PED_INJURED(func_93(1)))
			{
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2590, 0))
			{
				if (!PED::IS_PED_INJURED(func_93(1)))
				{
					PED::SET_PED_INTO_VEHICLE(func_93(1), iLocal_2590, -1);
				}
				if (!PED::IS_PED_INJURED(func_93(0)))
				{
					PED::SET_PED_INTO_VEHICLE(func_93(0), iLocal_2590, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_2486[0]))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_2486[0], iLocal_2590, 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_2486[1]))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_2486[1], iLocal_2590, 2);
				}
			}
			WEAPON::REMOVE_WEAPON_ASSET(iLocal_1464);
			func_556(0);
			if (iLocal_1615 == 0)
			{
				iLocal_1615 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
			}
			iLocal_2467 = 0;
			GlobalFunc_4967(iLocal_2590, -1, 1);
			break;
		
		case 7:
			func_130();
			func_823(Local_3369.f_3);
			iLocal_2466 = 0;
			while (iLocal_2466 <= 4)
			{
				func_823(Local_3369.f_4[iLocal_2466]);
				iLocal_2466++;
			}
			if (!bLocal_2405)
			{
				func_823(Local_3369.f_10);
			}
			if (bLocal_2405)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("JH2A_ENTER_SHOP_RESTART");
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("JH2B_ENTER_SHOP_RESTART");
			}
			func_823(Local_3369.f_18);
			func_823(Local_3369.f_19);
			func_823(Local_3369.f_20);
			func_823(Local_3369.f_21);
			func_823(Local_3369);
			func_821(Local_3369.f_35);
			func_126(0, 0);
			while (!func_819())
			{
				SYSTEM::WAIT(0);
			}
			func_969(1, 0);
			func_824(&iLocal_2604, -625.1706f, -232.8408f, 39.4937f, "V_JEWEL2", 1, 1);
			func_978(0);
			func_122(iLocal_1464, 1, 0, 0);
			if (!PED::IS_PED_INJURED(func_93(0)) && !bParam0)
			{
				WEAPON::GIVE_WEAPON_TO_PED(func_93(0), iLocal_1464, 1000, 1, 1);
				func_879(func_93(0), iLocal_1464, joaat("component_at_ar_supp"));
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(func_93(0), iLocal_1464, 1);
			}
			iLocal_2491 = PED::CREATE_PED(26, Local_3369.f_3, Local_1723, fLocal_1726, 1, 1);
			if (bLocal_2405)
			{
				func_870(1, 0, 1, 0, 1);
			}
			else
			{
				func_870(0, 1, 1, 0, 1);
			}
			WEAPON::REMOVE_WEAPON_ASSET(iLocal_1464);
			func_556(0);
			func_9(func_93(0), 1, 0);
			func_617(func_93(0), 1);
			while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_93(0)))
			{
				func_109(0);
			}
			GlobalFunc_4967(0, -1, 1);
			MISC::CLEAR_AREA(Local_1723, 300f, 1, 0, 0, 0);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2486[0]))
			{
				while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_2486[0]))
				{
					func_109(0);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2486[1]))
			{
				while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_2486[1]))
				{
					func_109(0);
				}
			}
			break;
		
		case 8:
			func_130();
			func_823(Local_3369);
			func_126(0, 0);
			func_122(iLocal_1464, 1, 0, 0);
			func_969(1, 0);
			func_774(0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2532[0], 0) && !PED::IS_PED_INJURED(iLocal_2486[0]))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_2486[0], iLocal_2532[0], -1);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2532[1], 0) && !PED::IS_PED_INJURED(iLocal_2486[1]))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_2486[1], iLocal_2532[1], -1);
			}
			if (!PED::IS_PED_INJURED(func_93(0)) && !bParam0)
			{
				WEAPON::GIVE_WEAPON_TO_PED(func_93(0), iLocal_1464, 1000, 1, 1);
				func_879(func_93(0), iLocal_1464, joaat("component_at_ar_supp"));
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(func_93(0), iLocal_1464, 1);
			}
			func_617(func_93(0), 1);
			if (!PED::IS_PED_INJURED(func_93(1)))
			{
			}
			WEAPON::REMOVE_WEAPON_ASSET(iLocal_1464);
			func_556(0);
			if (bLocal_2405)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("JH2A_EXIT_SHOP_RESTART");
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("JH2A_EXIT_SHOP_RESTART");
			}
			GlobalFunc_4967(0, -1, 1);
			break;
		
		case 9:
			func_130();
			func_969(1, 0);
			func_823(Local_3369);
			func_126(0, 0);
			func_774(0);
			func_556(0);
			func_9(func_93(1), 1, 0);
			if (bLocal_2405)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("JH2A_ONTO_BIKE_RESTART");
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("JH2B_ONTO_BIKE_RESTART");
			}
			GlobalFunc_4967(iLocal_2532[2], -1, 1);
			if (Global_86789)
			{
				STREAMING::REQUEST_MODEL(Local_3369.f_14);
				STREAMING::REQUEST_MODEL(Local_3369.f_15);
				while (!STREAMING::HAS_MODEL_LOADED(Local_3369.f_14) || !STREAMING::HAS_MODEL_LOADED(Local_3369.f_15))
				{
					SYSTEM::WAIT(0);
				}
			}
			else
			{
				STREAMING::REQUEST_MODEL(joaat("intruder"));
				while (!STREAMING::HAS_MODEL_LOADED(joaat("intruder")))
				{
					SYSTEM::WAIT(0);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2532[0], 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_2486[0]))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_2486[0], iLocal_2532[0], -1);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2532[1], 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_2486[1]))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_2486[1], iLocal_2532[1], -1);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2486[0]))
			{
				PED::SET_PED_HELMET_PROP_INDEX(iLocal_2486[0], 3, 1);
				PED::SET_PED_HELMET_TEXTURE_INDEX(iLocal_2486[0], 0);
				PED::SET_PED_PROP_INDEX(iLocal_2486[0], 0, 3, 0, false);
				PED::GIVE_PED_HELMET(iLocal_2486[0], 1, 16384, -1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2486[1]))
			{
				PED::SET_PED_HELMET_PROP_INDEX(iLocal_2486[1], 4, 1);
				PED::SET_PED_HELMET_TEXTURE_INDEX(iLocal_2486[1], 0);
				PED::SET_PED_PROP_INDEX(iLocal_2486[1], 0, 4, 0, false);
				PED::GIVE_PED_HELMET(iLocal_2486[1], 1, 16384, -1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(func_93(1)))
			{
				PED::SET_PED_HELMET_PROP_INDEX(func_93(1), 6, 1);
				PED::SET_PED_HELMET_TEXTURE_INDEX(func_93(1), 8);
				PED::SET_PED_PROP_INDEX(func_93(1), 0, 6, 8, false);
			}
			PED::GIVE_PED_HELMET(func_93(1), 1, 16384, -1);
			while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_2486[0]))
			{
				func_109(0);
			}
			if (!bLocal_2475)
			{
				while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_2486[1]))
				{
					func_109(0);
				}
			}
			while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_93(1)))
			{
				func_109(0);
			}
			iLocal_2466 = 0;
			while (iLocal_2466 <= 19)
			{
				uLocal_2642 = OBJECT::GET_RAYFIRE_MAP_OBJECT(Local_1758[iLocal_2466 /*30*/], 1f, Local_1758[iLocal_2466 /*30*/].f_27);
				if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_2642))
				{
					OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_2642, 9);
				}
				iLocal_2466++;
			}
			break;
		
		case 10:
			func_130();
			func_823(Local_3369);
			func_126(0, 0);
			CLOCK::SET_CLOCK_TIME(19, 20, 0);
			func_774(1);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2532[0], 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_2486[0]))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_2486[0], iLocal_2532[0], -1);
				}
			}
			if (!bLocal_2475)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2532[1], 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_2486[1]))
					{
						PED::SET_PED_INTO_VEHICLE(iLocal_2486[1], iLocal_2532[1], -1);
					}
				}
			}
			else
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_2532[1]));
				PED::DELETE_PED(&(iLocal_2486[1]));
			}
			if (bLocal_2405)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("JH2A_EXIT_TUNNEL_RESTART");
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("JH2B_EXIT_TUNNEL_RESTART");
			}
			func_556(0);
			func_9(func_93(1), 1, 0);
			GlobalFunc_4967(iLocal_2532[2], -1, 1);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2486[0]))
			{
				PED::SET_PED_HELMET_PROP_INDEX(iLocal_2486[0], 3, 1);
				PED::SET_PED_HELMET_TEXTURE_INDEX(iLocal_2486[0], 0);
				PED::SET_PED_PROP_INDEX(iLocal_2486[0], 0, 3, 0, false);
				PED::GIVE_PED_HELMET(iLocal_2486[0], 1, 16384, -1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2486[1]))
			{
				PED::SET_PED_HELMET_PROP_INDEX(iLocal_2486[1], 4, 1);
				PED::SET_PED_HELMET_TEXTURE_INDEX(iLocal_2486[1], 0);
				PED::SET_PED_PROP_INDEX(iLocal_2486[1], 0, 4, 0, false);
				PED::GIVE_PED_HELMET(iLocal_2486[1], 1, 16384, -1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(func_93(1)))
			{
				PED::SET_PED_HELMET_PROP_INDEX(func_93(1), 6, 1);
				PED::SET_PED_HELMET_TEXTURE_INDEX(func_93(1), 8);
				PED::SET_PED_PROP_INDEX(func_93(1), 0, 6, 8, false);
			}
			PED::GIVE_PED_HELMET(func_93(1), 1, 4096, -1);
			PED::INSTANTLY_FILL_PED_POPULATION();
			MISC::POPULATE_NOW();
			while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_2486[0]))
			{
				func_109(0);
			}
			if (!bLocal_2475)
			{
				while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_2486[1]))
				{
					func_109(0);
				}
			}
			while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_93(1)))
			{
				func_109(0);
			}
			break;
		
		case 11:
			func_130();
			func_823(Local_3369);
			func_823(Local_3369.f_12);
			func_823(Local_3369.f_14);
			func_823(Local_3369.f_15);
			func_820(Local_3369.f_83, Local_3369.f_85);
			func_820(Local_3369.f_83, Local_3369.f_84);
			func_820("JHUBER", 717);
			func_126(0, 0);
			func_123(0, 1, 1, 1);
			func_123(0, 2, 1, 1);
			func_122(joaat("weapon_pistol"), 1, 1, 0);
			CLOCK::SET_CLOCK_TIME(19, 20, 0);
			iLocal_2532[0] = VEHICLE::CREATE_VEHICLE(Local_3369, 1035.864f, -284.8706f, 49.2269f, 208.3043f, 1, 1);
			iLocal_2532[1] = VEHICLE::CREATE_VEHICLE(Local_3369, 1037.864f, -284.8706f, 49.2269f, 208.3043f, 1, 1);
			iLocal_2532[2] = VEHICLE::CREATE_VEHICLE(Local_3369, 1033.864f, -284.8706f, 49.2269f, 208.3043f, 1, 1);
			iLocal_2466 = 0;
			while (iLocal_2466 <= 2)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2532[iLocal_2466]))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2532[iLocal_2466]);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_2532[iLocal_2466], iLocal_2466);
				}
				iLocal_2466++;
			}
			if (bLocal_2405)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("JH2A_EXIT_TUNNEL_RESTART");
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("JH2B_EXIT_TUNNEL_RESTART");
			}
			func_556(0);
			func_9(func_93(1), 1, 0);
			GlobalFunc_4967(0, -1, 1);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2532[2], 0))
			{
				PED::SET_PED_INTO_VEHICLE(func_93(1), iLocal_2532[2], -1);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2532[0], 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_2486[0]))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_2486[0], iLocal_2532[0], -1);
				}
			}
			if (!bLocal_2475)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2532[1], 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_2486[1]))
					{
						PED::SET_PED_INTO_VEHICLE(iLocal_2486[1], iLocal_2532[1], -1);
					}
				}
			}
			else
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_2532[1]));
				PED::DELETE_PED(&(iLocal_2486[1]));
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2486[0]))
			{
				PED::SET_PED_HELMET_PROP_INDEX(iLocal_2486[0], 3, 1);
				PED::SET_PED_HELMET_TEXTURE_INDEX(iLocal_2486[0], 0);
				PED::SET_PED_PROP_INDEX(iLocal_2486[0], 0, 3, 0, false);
				PED::GIVE_PED_HELMET(iLocal_2486[0], 1, 16384, -1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2486[1]))
			{
				PED::SET_PED_HELMET_PROP_INDEX(iLocal_2486[1], 4, 1);
				PED::SET_PED_HELMET_TEXTURE_INDEX(iLocal_2486[1], 0);
				PED::SET_PED_PROP_INDEX(iLocal_2486[1], 0, 4, 0, false);
				PED::GIVE_PED_HELMET(iLocal_2486[1], 1, 16384, -1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(func_93(1)))
			{
				PED::SET_PED_HELMET_PROP_INDEX(func_93(1), 6, 1);
				PED::SET_PED_HELMET_TEXTURE_INDEX(func_93(1), 8);
				PED::SET_PED_PROP_INDEX(func_93(1), 0, 6, 8, false);
			}
			PED::GIVE_PED_HELMET(func_93(1), 1, 4096, -1);
			while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_2486[0]))
			{
				func_109(0);
			}
			if (!bLocal_2475)
			{
				while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_2486[1]))
				{
					func_109(0);
				}
			}
			while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_93(1)))
			{
				func_109(0);
			}
			break;
		
		case 12:
			func_130();
			func_126(0, 0);
			func_780();
			while (!func_779())
			{
				SYSTEM::WAIT(0);
			}
			func_122(joaat("weapon_pistol"), 1, 0, 0);
			iLocal_2552 = VEHICLE::CREATE_VEHICLE(Local_3369.f_12, Local_1692, fLocal_1695, 1, 1);
			func_778(iLocal_2552);
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_2552, 128, 3);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_2552, 6, false);
			iLocal_2466 = 0;
			while (iLocal_2466 <= 2)
			{
				if (!(bLocal_2475 && iLocal_2466 == 1))
				{
					iLocal_2532[iLocal_2466] = VEHICLE::CREATE_VEHICLE(Local_3369, Local_1696[iLocal_2466 /*3*/], fLocal_1706[iLocal_2466], 1, 1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2532[iLocal_2466]);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_2532[iLocal_2466], iLocal_2466);
				}
				iLocal_2466++;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2532[2], 0) && !PED::IS_PED_INJURED(func_93(1)))
			{
				if (!PED::IS_PED_IN_VEHICLE(func_93(1), iLocal_2532[2], 0))
				{
					PED::SET_PED_INTO_VEHICLE(func_93(1), iLocal_2532[2], -1);
				}
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2532[2], 1, 1);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_2532[2], 8f);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2552, 0) && !PED::IS_PED_INJURED(func_93(0)))
			{
				if (!PED::IS_PED_IN_VEHICLE(func_93(0), iLocal_2552, 0))
				{
					PED::SET_PED_INTO_VEHICLE(func_93(0), iLocal_2552, -1);
				}
			}
			if (!bLocal_2475)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2532[1], 0) && !PED::IS_PED_INJURED(iLocal_2486[1]))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_2486[1], iLocal_2532[1], 0))
					{
						PED::SET_PED_INTO_VEHICLE(iLocal_2486[1], iLocal_2532[1], -1);
					}
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2532[1], 1, 1);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_2532[1], 8f);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2532[0], 0) && !PED::IS_PED_INJURED(iLocal_2486[0]))
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_2486[0], iLocal_2532[0], 0))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_2486[0], iLocal_2532[0], -1);
				}
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2532[0], 1, 1);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_2532[0], 8f);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2552, 0) && !PED::IS_PED_INJURED(iLocal_2486[2]))
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_2486[2], iLocal_2552, 0))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_2486[2], iLocal_2552, 0);
				}
			}
			CLOCK::SET_CLOCK_TIME(19, 0, 0);
			if (bLocal_2405)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("JH2A_EXIT_TUNNEL_RESTART");
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("JH2B_EXIT_TUNNEL_RESTART");
			}
			WEAPON::REMOVE_WEAPON_ASSET(joaat("weapon_pistol"));
			func_556(0);
			GlobalFunc_4967(iLocal_2552, -1, 1);
			break;
		
		case 13:
			func_130();
			func_823(Local_3369.f_12);
			func_823(Local_3369);
			func_126(0, 0);
			VEHICLE::DELETE_VEHICLE(&iLocal_2552);
			iLocal_2552 = VEHICLE::CREATE_VEHICLE(Local_3369.f_12, Local_1716, fLocal_1719, 1, 1);
			func_778(iLocal_2552);
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_2552, 128, 3);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_2552, 6, false);
			iLocal_2466 = 0;
			while (iLocal_2466 <= 2)
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_2532[iLocal_2466]));
				if (!(bLocal_2475 && iLocal_2466 == 1))
				{
					iLocal_2532[iLocal_2466] = VEHICLE::CREATE_VEHICLE(Local_3369, Local_1696[iLocal_2466 /*3*/], fLocal_1706[iLocal_2466], 1, 1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2532[iLocal_2466]);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_2532[iLocal_2466], iLocal_2466);
				}
				iLocal_2466++;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2532[2], 0) && !PED::IS_PED_INJURED(func_93(1)))
			{
				PED::SET_PED_INTO_VEHICLE(func_93(1), iLocal_2532[2], -1);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2552, 0) && !PED::IS_PED_INJURED(func_93(0)))
			{
				PED::SET_PED_INTO_VEHICLE(func_93(0), iLocal_2552, -1);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2532[0], 0) && !PED::IS_PED_INJURED(iLocal_2486[0]))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_2486[0], iLocal_2532[0], -1);
			}
			if (!bLocal_2475)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2532[1], 0) && !PED::IS_PED_INJURED(iLocal_2486[1]))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_2486[1], iLocal_2532[1], -1);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2552, 0) && !PED::IS_PED_INJURED(iLocal_2486[2]))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_2486[2], iLocal_2552, 0);
			}
			CLOCK::SET_CLOCK_TIME(22, 0, 0);
			func_556(0);
			GlobalFunc_4967(iLocal_2552, -1, 1);
			break;
		
		case 14:
			func_130();
			func_823(Local_3369.f_12);
			func_126(0, 0);
			iLocal_2552 = VEHICLE::CREATE_VEHICLE(Local_3369.f_12, Local_1716, fLocal_1719, 1, 1);
			func_778(iLocal_2552);
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_2552, 128, 3);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_2552, 6, false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2552, 0) && !PED::IS_PED_INJURED(func_93(0)))
			{
				PED::SET_PED_INTO_VEHICLE(func_93(0), iLocal_2552, -1);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2552, 0) && !ENTITY::IS_ENTITY_DEAD(func_93(1)))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(func_93(1), iLocal_2552, 0, -0.09f, -1.63f, 0.91f, 0f, 0f, -165.24f, 0, 0, 0, 0, 2, 1);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2552, 0) && !ENTITY::IS_ENTITY_DEAD(iLocal_2486[0]))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_2486[0], iLocal_2552, 0, -0.67f, -2.81f, 0.91f, 0f, 0f, -147.96f, 0, 0, 0, 0, 2, 1);
			}
			if (!bLocal_2475)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2552, 0) && !ENTITY::IS_ENTITY_DEAD(iLocal_2486[1]))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_2486[1], iLocal_2552, 0, 0.728f, -2.928f, 0.91f, 0f, 0f, 83.52f, 0, 0, 0, 0, 2, 1);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2552, 0) && !PED::IS_PED_INJURED(iLocal_2486[2]))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_2486[2], iLocal_2552, 0);
			}
			CLOCK::SET_CLOCK_TIME(22, 0, 0);
			GlobalFunc_4967(iLocal_2552, -1, 1);
			break;
		
		case 15:
			func_131();
			break;
	}
	func_886();
	func_111();
	func_616(0);
}

void func_969(bool bParam0, bool bParam1)//Position - 0x8AB05
{
	STREAMING::REQUEST_PTFX_ASSET();
	if (bParam0)
	{
		while (!STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			if (bParam1)
			{
				func_109(0);
			}
			else
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}




void func_973(int iParam0, struct<3> Param1, bool bParam4, bool bParam5)//Position - 0x8AC32
{
	*iParam0 = INTERIOR::GET_INTERIOR_AT_COORDS(Param1);
	INTERIOR::PIN_INTERIOR_IN_MEMORY(*iParam0);
	if (bParam4)
	{
		while (!INTERIOR::IS_INTERIOR_READY(*iParam0))
		{
			if (bParam5)
			{
				func_109(0);
			}
			else
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

void func_974()//Position - 0x8AC71
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	float fVar5;
	bool bVar6;
	bool bVar7;
	struct<3> Var8;
	float fVar11;
	bool bVar12;
	bool bVar13;
	struct<3> Var14;
	float fVar17;
	
	bVar0 = false;
	bVar1 = false;
	Var2 = { Local_2656 };
	fVar5 = 0f;
	bVar6 = false;
	bVar7 = false;
	Var8 = { Local_2656 };
	fVar11 = 0f;
	bVar12 = false;
	bVar13 = false;
	Var14 = { Local_2656 };
	fVar17 = 0f;
	func_130();
	if (bLocal_2405)
	{
		func_823(Local_3369.f_24);
	}
	else
	{
		func_823(Local_3369.f_24);
	}
	func_126(0, 0);
	func_975(0, 1, 0);
	func_122(joaat("weapon_pistol"), 1, 0, 0);
	switch (iLocal_2379)
	{
		case 0:
			break;
		
		case 2:
			break;
		
		case 3:
			bVar0 = true;
			bVar1 = true;
			Var2 = { Local_1584[0 /*3*/] };
			fVar5 = fLocal_1600[0];
			bVar6 = false;
			bVar7 = true;
			Var8 = { Local_1584[1 /*3*/] };
			fVar11 = fLocal_1600[1];
			bVar12 = false;
			bVar13 = true;
			Var14 = { Local_1584[3 /*3*/] };
			fVar17 = fLocal_1600[3];
			break;
		
		case 4:
			bVar0 = true;
			bVar1 = true;
			Var2 = { Local_1622 + Vector(0f, 0f, 2f) };
			fVar5 = fLocal_1600[0];
			bVar6 = false;
			bVar7 = true;
			Var8 = { Local_1622 + Vector(0f, 0f, -2f) };
			fVar11 = fLocal_1600[1];
			bVar12 = false;
			break;
		
		case 5:
			bVar0 = true;
			bVar1 = true;
			Var2 = { Local_1622 + Vector(0f, 0f, 2f) };
			fVar5 = fLocal_1600[0];
			bVar6 = false;
			bVar7 = true;
			Var8 = { Local_1622 + Vector(0f, 0f, -2f) };
			fVar11 = fLocal_1600[1];
			bVar12 = false;
			break;
		
		case 6:
			bVar0 = true;
			bVar1 = true;
			Var2 = { Local_1622 + Vector(0f, 0f, 2f) };
			fVar5 = fLocal_1600[0];
			bVar6 = true;
			bVar7 = true;
			Var8 = { Local_1622 + Vector(0f, 0f, -2f) };
			fVar11 = fLocal_1600[1];
			bVar12 = true;
			break;
		
		case 7:
			bVar0 = true;
			bVar1 = true;
			Var2 = { -631.7494f, -239.9052f, 37.1067f };
			fVar5 = 126.86f;
			bVar6 = true;
			bVar7 = true;
			Var8 = { -633.5875f, -237.0871f, 37.0487f };
			fVar11 = 125.3744f;
			bVar12 = true;
			break;
		
		case 8:
			bVar0 = true;
			bVar1 = true;
			Var2 = { -633.5875f, -237.0871f, 37.0487f };
			fVar5 = 125.3744f;
			bVar6 = true;
			bVar7 = true;
			Var8 = { -631.7494f, -239.9052f, 37.1067f };
			fVar11 = 126.86f;
			bVar12 = true;
			break;
		
		case 9:
			bVar0 = true;
			bVar1 = true;
			Var2 = { -633.5875f, -237.0871f, 37.0487f };
			fVar5 = 125.3744f;
			bVar6 = true;
			bVar7 = true;
			Var8 = { -631.7494f, -239.9052f, 37.1067f };
			fVar11 = 126.86f;
			bVar12 = true;
			break;
		
		case 10:
			bVar0 = true;
			bVar1 = true;
			Var2 = { -633.5875f, -237.0871f, 37.0487f };
			fVar5 = 125.3744f;
			bVar6 = true;
			bVar7 = true;
			Var8 = { -631.7494f, -239.9052f, 37.1067f };
			fVar11 = 126.86f;
			bVar12 = true;
			break;
		
		case 11:
			bVar0 = true;
			bVar1 = true;
			Var2 = { 1025.433f, -211.5901f, 42.0321f };
			fVar5 = 182.3647f;
			bVar6 = true;
			bVar7 = true;
			Var8 = { 1021.869f, -223.4366f, 42.282f };
			fVar11 = 187.8349f;
			bVar12 = true;
			break;
		
		case 12:
			bVar0 = true;
			bVar1 = true;
			Var2 = { Local_1696[0 /*3*/] + Vector(0f, 0f, 3f) };
			fVar5 = 125.3744f;
			bVar6 = true;
			bVar7 = !bLocal_2475;
			Var8 = { Local_1696[1 /*3*/] + Vector(0f, 0f, 3f) };
			fVar11 = 126.86f;
			bVar12 = true;
			bVar13 = true;
			Var14 = { Local_1683 };
			fVar17 = 261.2985f;
			break;
		
		case 13:
			bVar0 = true;
			bVar1 = true;
			Var2 = { Local_1696[0 /*3*/] + Vector(0f, 0f, 3f) };
			fVar5 = 125.3744f;
			bVar6 = true;
			bVar7 = !bLocal_2475;
			Var8 = { Local_1696[1 /*3*/] + Vector(0f, 0f, 3f) };
			fVar11 = 126.86f;
			bVar12 = true;
			bVar13 = true;
			Var14 = { Local_1683 };
			fVar17 = 261.2985f;
			break;
		
		case 14:
			bVar0 = true;
			bVar1 = true;
			Var2 = { -633.5875f, -237.0871f, 37.0487f };
			fVar5 = 125.3744f;
			bVar6 = true;
			bVar7 = !bLocal_2475;
			Var8 = { -631.7494f, -239.9052f, 37.1067f };
			fVar11 = 126.86f;
			bVar12 = true;
			bVar13 = true;
			Var14 = { Local_1683 };
			fVar17 = 261.2985f;
			break;
		
		case 15:
			break;
	}
	if (bVar0)
	{
		if (bVar1)
		{
			iLocal_2486[0] = func_738(0, 0, Var2, fVar5, 0, 1);
			func_9(iLocal_2486[0], bVar6, 0);
			func_619(iLocal_2486[0]);
		}
		if (bVar7)
		{
			iLocal_2486[1] = func_738(0, 1, Var8, fVar11, 0, 1);
			func_9(iLocal_2486[1], bVar12, 0);
			func_619(iLocal_2486[1]);
		}
		if (bVar13)
		{
			iLocal_2486[2] = func_738(0, 2, Var14, fVar17, 0, 1);
			func_619(iLocal_2486[2]);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_2486[2], joaat("weapon_pistol"), 1000, 0, 1);
			PED::SET_PED_ACCURACY(iLocal_2486[2], 50);
		}
	}
	func_616(0);
	GlobalFunc_7263(0);
	WEAPON::REMOVE_WEAPON_ASSET(joaat("weapon_pistol"));
}

void func_975(int iParam0, bool bParam1, bool bParam2)//Position - 0x8B184
{
	GlobalFunc_7265(iParam0);
	if (bParam1)
	{
		while (!GlobalFunc_7264(iParam0))
		{
			if (bParam2)
			{
				func_109(0);
			}
			else
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}



void func_978(bool bParam0)//Position - 0x8B270
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<3> Var3;
	int iVar6;
	struct<3> Var7;
	float fVar10;
	bool bVar11;
	bool bVar12;
	
	bVar0 = false;
	bVar1 = false;
	bVar2 = false;
	Var3 = { Local_2656 };
	iVar6 = 0f;
	Var7 = { Local_2656 };
	fVar10 = 0f;
	bVar11 = false;
	bVar12 = false;
	switch (iLocal_2379)
	{
		case 0:
			break;
		
		case 2:
			bVar0 = true;
			bVar1 = false;
			bVar2 = false;
			Var7 = { Local_1558 };
			fVar10 = 253.4039f;
			bVar12 = false;
			break;
		
		case 3:
			if (bLocal_2405)
			{
				bVar0 = true;
				bVar1 = false;
				bVar2 = true;
				Var3 = { Local_1564 };
				iVar6 = 347.5504f;
				Var7 = { Local_1558 };
				fVar10 = 253.4039f;
			}
			else
			{
				bVar0 = true;
				bVar1 = true;
				bVar2 = true;
				Var3 = { 705.2056f, -965.38f, 29.3953f };
				iVar6 = 278.2279f;
				Var7 = { Local_1561 };
				fVar10 = 198.7614f;
			}
			bVar11 = false;
			bVar12 = false;
			break;
		
		case 4:
			bVar0 = true;
			bVar1 = true;
			bVar2 = true;
			Var3 = { -578.8325f, -280.2415f, 34.3058f };
			iVar6 = 109.3759f;
			Var7 = { Local_1622 + Vector(0f, 2f, 0f) };
			fVar10 = 275.6314f;
			bVar11 = false;
			bVar12 = false;
			break;
		
		case 5:
			bVar0 = true;
			bVar1 = true;
			bVar2 = true;
			Var3 = { -614.3f, -224.1f, 37.5f };
			iVar6 = 0f;
			Var7 = { -634.8f, -235.7f, 38f };
			fVar10 = 275.6314f;
			bVar11 = false;
			bVar12 = false;
			break;
		
		case 6:
			bVar0 = true;
			bVar1 = true;
			bVar2 = true;
			Var3 = { -668.6204f, -227.7277f, 36.1821f };
			iVar6 = 0f;
			Var7 = { -669.6204f, -227.7277f, 36.1821f };
			fVar10 = 0f;
			bVar11 = false;
			bVar12 = true;
			break;
		
		case 7:
			bVar0 = true;
			bVar1 = false;
			bVar2 = true;
			Var3 = { -620.1548f, -232.3427f, 56.1278f };
			iVar6 = 31.6812f;
			if (bLocal_2405)
			{
				Var7 = { -630.3759f, -235.1867f, 37.057f };
				fVar10 = 301.4192f;
			}
			else
			{
				Var7 = { -628.4352f, -234.1821f, 37.057f };
				fVar10 = 292.9868f;
			}
			bVar11 = false;
			bVar12 = true;
			break;
		
		case 8:
			bVar0 = true;
			bVar1 = false;
			bVar2 = true;
			Var3 = { -637.3582f, -241.8902f, 37.118f };
			iVar6 = 300.7801f;
			Var7 = { Local_1674 };
			fVar10 = 0f;
			bVar11 = false;
			bVar12 = false;
			break;
		
		case 9:
			bVar0 = true;
			bVar1 = true;
			bVar2 = true;
			Var3 = { -637.3582f, -241.8902f, 37.118f };
			iVar6 = 300.7801f;
			Var7 = { -631.9154f, -244.4217f, 37.233f };
			iVar6 = 301.4192f;
			bVar11 = true;
			bVar12 = false;
			break;
		
		case 10:
			bVar0 = true;
			bVar1 = true;
			bVar2 = true;
			Var3 = { -63.0551f, -541.7521f, 30.8795f };
			iVar6 = 219.6241f;
			Var7 = { Local_1665 };
			fVar10 = 131.8341f;
			bVar11 = true;
			bVar12 = false;
			break;
		
		case 11:
			bVar0 = true;
			bVar1 = true;
			bVar2 = true;
			Var3 = { 1021.416f, -201.1791f, 41.7879f };
			iVar6 = 183.8065f;
			Var7 = { Local_1665 };
			fVar10 = 131.8341f;
			bVar11 = true;
			bVar12 = false;
			break;
		
		case 12:
			bVar0 = true;
			bVar1 = false;
			bVar2 = true;
			Var3 = { 608.8254f, -850.8471f, 9.8777f };
			iVar6 = fLocal_1706[2];
			Var7 = { 608.8254f, -850.8471f, 9.8777f };
			fVar10 = fLocal_1706[2];
			bVar11 = true;
			bVar12 = false;
			break;
		
		case 13:
			bVar0 = true;
			bVar1 = false;
			bVar2 = true;
			Var3 = { 636.5349f, -1846.369f, 8.2475f };
			iVar6 = 175.6113f;
			Var7 = { 636.5349f, -1846.369f, 8.2475f };
			fVar10 = 175.6113f;
			bVar11 = true;
			bVar12 = false;
			break;
		
		case 14:
			bVar0 = true;
			bVar1 = false;
			bVar2 = true;
			Var3 = { 636.5349f, -1846.369f, 8.2475f };
			iVar6 = 175.6113f;
			Var7 = { 636.5349f, -1846.369f, 8.2475f };
			fVar10 = 175.6113f;
			bVar11 = false;
			bVar12 = false;
			break;
		
		case 15:
			bVar0 = true;
			bVar1 = true;
			bVar2 = false;
			Var3 = { -13.9543f, -1451.477f, 29.5418f };
			iVar6 = 0f;
			Var7 = { -13.9543f, -1455.477f, 29.5418f };
			fVar10 = 0f;
			bVar11 = false;
			bVar12 = false;
			break;
	}
	if (bVar0)
	{
		if (bVar1)
		{
			if (GlobalFunc_8315() != 1)
			{
				if (!func_829(1))
				{
					while (!func_278(&(Local_2659[1]), 1, Var3, 0, 1, 0, 0))
					{
						SYSTEM::WAIT(0);
					}
				}
				GlobalFunc_9019(&Local_2659, 1);
				func_167(&Local_2659, 1, 0, 0);
			}
			if (!bParam0)
			{
				ENTITY::SET_ENTITY_COORDS(func_93(1), Var3, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(func_93(1), iVar6);
			}
			else
			{
				GlobalFunc_4972(Var3, iVar6, 1, 0);
			}
			if (bVar2)
			{
				while (!func_278(&(Local_2659[0]), 0, Var7, fVar10, 1, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
		else
		{
			if (GlobalFunc_8315() != 0)
			{
				if (!func_829(0))
				{
					while (!func_278(&(Local_2659[0]), 0, Var7, 0, 1, 0, 0))
					{
						SYSTEM::WAIT(0);
					}
				}
				GlobalFunc_9019(&Local_2659, 0);
				func_167(&Local_2659, 1, 0, 0);
			}
			if (!bParam0)
			{
				ENTITY::SET_ENTITY_COORDS(func_93(0), Var7, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(func_93(0), fVar10);
			}
			else
			{
				GlobalFunc_4972(Var7, fVar10, 1, 0);
			}
			if (bVar2)
			{
				while (!func_278(&(Local_2659[1]), 1, Var3, iVar6, 1, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
		if (bVar1 || bVar2)
		{
			func_9(func_93(1), bVar11, 0);
			func_619(func_93(1));
		}
		if (!bVar1 || bVar2)
		{
			func_9(func_93(0), bVar12, 0);
			func_619(func_93(0));
			func_742(0, 1, 1);
		}
	}
}


void func_980(bool bParam0)//Position - 0x8B8E4
{
	if (!PED::IS_PED_INJURED(func_93(0)))
	{
		AUDIO::STOP_PED_SPEAKING(func_93(0), 0);
	}
	if (bLocal_2405)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("JH2A_MISSION_FAIL");
	}
	else
	{
		AUDIO::TRIGGER_MUSIC_EVENT("JH2B_MISSION_FAIL");
	}
	MISC::SET_TIME_SCALE(1f);
	iLocal_2914 = 0;
	CUTSCENE::REMOVE_CUTSCENE();
	func_645();
	AUDIO::STOP_AUDIO_SCENES();
	if (iLocal_1516 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_1516);
	}
	AUDIO::STOP_ALARM("JEWEL_STORE_HEIST_ALARMS", 1);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	AUDIO::CLEAR_ALL_BROKEN_GLASS();
	CAM::STOP_GAMEPLAY_HINT(0);
	PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
	}
	VEHICLE::SET_RANDOM_TRAINS(1);
	func_556(1);
	iLocal_2423 = 0;
	iLocal_2424 = 0;
	iLocal_96 = 0;
	iLocal_76 = 0;
	func_984();
	func_621(1);
	GlobalFunc_7139(&Local_2380, 0);
	AUDIO::STOP_SOUND(Local_2991[0 /*3*/]);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	if (iLocal_2417)
	{
		func_831(0, 0f);
		iLocal_2417 = 0;
	}
	func_737(&uLocal_1517);
	func_983(&uLocal_2615);
	func_737(&uLocal_2619);
	func_737(&uLocal_2620);
	func_983(&uLocal_2621);
	func_983(&uLocal_2628);
	func_737(&uLocal_2633);
	func_737(&uLocal_2634);
	func_737(&uLocal_2635);
	iLocal_2466 = 0;
	while (iLocal_2466 <= 19)
	{
		func_737(&(Local_1758[iLocal_2466 /*30*/].f_23));
		iLocal_2466++;
	}
	func_983(&uLocal_2553);
	func_474(&iLocal_2594, 1);
	func_474(&uLocal_2595, 1);
	func_474(&iLocal_2596, 1);
	func_474(&iLocal_2597, 1);
	func_474(&iLocal_1757, 1);
	OBJECT::DELETE_OBJECT(&iLocal_2598);
	OBJECT::DELETE_OBJECT(&iLocal_2599);
	OBJECT::DELETE_OBJECT(&iLocal_2600);
	OBJECT::DELETE_OBJECT(&iLocal_2531);
	func_982();
	STREAMING::REMOVE_ANIM_DICT("missheist_jewellester_waitidles");
	STREAMING::REMOVE_ANIM_DICT("move_m@generic_variations@idle@b");
	if (func_981(13))
	{
		func_472(&(iLocal_2532[0]), 1);
		func_472(&(iLocal_2532[1]), 1);
		func_472(&(iLocal_2532[2]), bParam0);
		func_472(&(iLocal_2532[3]), 1);
	}
	else
	{
		iLocal_2466 = 0;
		while (iLocal_2466 <= 3)
		{
			func_472(&(iLocal_2532[iLocal_2466]), bParam0);
			iLocal_2466++;
		}
	}
	func_472(&iLocal_2537, bParam0);
	iLocal_2466 = 0;
	while (iLocal_2466 <= 5)
	{
		func_472(&(iLocal_2538[iLocal_2466]), bParam0);
		iLocal_2466++;
	}
	func_472(&iLocal_2552, bParam0);
	func_472(&iLocal_2589, bParam0);
	func_472(&iLocal_2590, bParam0);
	func_472(&iLocal_2592, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2591))
	{
		if (bParam0)
		{
			VEHICLE::DELETE_MISSION_TRAIN(&iLocal_2591);
		}
		else
		{
			VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&iLocal_2591, 0);
		}
	}
	func_644();
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, "JH2BArrive");
	VEHICLE::REMOVE_VEHICLE_RECORDING(2, "JH2BArrive");
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, "JHBENSONEXIT");
	PED::DELETE_PED(&iLocal_2523);
	PED::DELETE_PED(&iLocal_2524);
	PED::DELETE_PED(&iLocal_2525);
	PED::DELETE_PED(&iLocal_2526);
	PED::DELETE_PED(&iLocal_2527);
	PED::DELETE_PED(&iLocal_2528);
	PED::DELETE_PED(&iLocal_1513);
	if (func_981(13))
	{
		iLocal_2466 = 0;
		while (iLocal_2466 <= 3)
		{
			func_475(&(iLocal_2486[iLocal_2466]), 1);
			iLocal_2466++;
		}
	}
	else
	{
		iLocal_2466 = 0;
		while (iLocal_2466 <= 3)
		{
			func_475(&(iLocal_2486[iLocal_2466]), bParam0);
			iLocal_2466++;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_2659[1]))
	{
		if (!PED::IS_PED_INJURED(Local_2659[1]) || PED::IS_PED_INJURED(Local_2659[1]))
		{
			func_9(func_93(1), 0, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_2659[0]))
	{
		if (!PED::IS_PED_INJURED(Local_2659[0]) || PED::IS_PED_INJURED(Local_2659[0]))
		{
			func_9(func_93(0), 0, 0);
			func_617(func_93(0), 0);
		}
	}
	if (!bParam0)
	{
		func_475(&(Local_2659[1]), bParam0);
		func_475(&(Local_2659[0]), bParam0);
	}
	iLocal_2466 = 0;
	while (iLocal_2466 <= 5)
	{
		func_475(&(iLocal_2505[iLocal_2466]), bParam0);
		iLocal_2466++;
	}
	iLocal_2466 = 0;
	while (iLocal_2466 <= 3)
	{
		func_475(&(iLocal_2512[iLocal_2466]), bParam0);
		iLocal_2466++;
	}
	iLocal_2466 = 0;
	while (iLocal_2466 <= 4)
	{
		func_475(&(iLocal_2492[iLocal_2466]), bParam0);
		iLocal_2466++;
	}
	func_475(&iLocal_2491, bParam0);
	func_475(&iLocal_2504, bParam0);
	func_475(&iLocal_2519, bParam0);
	PED::DELETE_PED(&iLocal_2520);
	PED::DELETE_PED(&iLocal_2521);
	PED::DELETE_PED(&iLocal_2522);
	WEAPON::REMOVE_WEAPON_ASSET(joaat("weapon_pistol"));
	WEAPON::REMOVE_WEAPON_ASSET(iLocal_1464);
	WEAPON::REMOVE_WEAPON_ASSET(joaat("weapon_pumpshotgun"));
	WEAPON::REMOVE_WEAPON_ASSET(joaat("weapon_smg"));
	TASK::REMOVE_COVER_POINT(uLocal_2606[0]);
	TASK::REMOVE_COVER_POINT(uLocal_2606[1]);
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_2609);
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_2610);
	if (CAM::DOES_CAM_EXIST(uLocal_3367))
	{
		CAM::DESTROY_CAM(uLocal_3367, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_3365))
	{
		CAM::DESTROY_CAM(uLocal_3365, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_3366))
	{
		CAM::DESTROY_CAM(uLocal_3366, 0);
	}
	if (CAM::DOES_CAM_EXIST(Local_3653.f_1))
	{
		CAM::SET_CAM_ACTIVE(Local_3653.f_1, 0);
		CAM::DESTROY_CAM(Local_3653.f_1, 0);
	}
	CAM::DESTROY_ALL_CAMS(0);
	MISC::SET_TIME_SCALE(1f);
	CAM::RENDER_SCRIPT_CAMS(false, 1, 1000, 1, 0, 0);
	CAM::DESTROY_ALL_CAMS(0);
	func_599(1, 0, 3000, 1, 1);
	CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
	CAM::SET_WIDESCREEN_BORDERS(0, 0);
	if (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
	}
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_2636);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_2637);
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, "JHGetBike");
	VEHICLE::REMOVE_VEHICLE_RECORDING(2, "JHGetBike");
	VEHICLE::REMOVE_VEHICLE_RECORDING(3, "JHGetBike");
	VEHICLE::REMOVE_VEHICLE_RECORDING(4, "JHGetBike");
	AUDIO::STOP_SCRIPTED_CONVERSATION(0);
}

int func_981(int iParam0)//Position - 0x8BE7B
{
	if (bLocal_2409)
	{
		if (iLocal_1522 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

void func_982()//Position - 0x8BE96
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_3028 - 1))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3029[iVar0 /*3*/]);
		Local_3029[iVar0 /*3*/].f_1 = 0;
		Local_3029[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_3135 - 1))
	{
		STREAMING::REMOVE_ANIM_DICT(Local_3136[iVar0 /*3*/]);
		Local_3136[iVar0 /*3*/].f_1 = 0;
		Local_3136[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_3287 - 1))
	{
		VEHICLE::REMOVE_VEHICLE_RECORDING(Local_3288[iVar0 /*4*/].f_1, Local_3288[iVar0 /*4*/]);
		Local_3288[iVar0 /*4*/].f_2 = 0;
		Local_3288[iVar0 /*4*/].f_3 = 0;
		iVar0++;
	}
}

void func_983(var uParam0)//Position - 0x8BF46
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		func_737(uParam0[iVar0]);
		iVar0++;
	}
}

void func_984()//Position - 0x8BF6F
{
	func_610();
	bLocal_2919 = false;
	bLocal_2920 = false;
	bLocal_2921 = false;
	iLocal_2923 = -1;
	iLocal_2924 = -1;
	iLocal_2925 = -1;
	iLocal_2926 = 0;
	iLocal_2927 = 0;
	iLocal_2928 = 0;
	iLocal_2929 = 0;
	bLocal_2930 = false;
}

int func_985(int iParam0)//Position - 0x8BFA7
{
	if (Global_84544 == 1)
	{
		switch (*iParam0)
		{
			case 2:
				return 3;
				break;
			
			case 3:
				if (bLocal_2405)
				{
					return 4;
				}
				else
				{
					return 6;
				}
				break;
			
			case 4:
				return 5;
				break;
			
			case 5:
				return 7;
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
			
			case 10:
				return 11;
				break;
			
			case 11:
				return 13;
				break;
			
			case 12:
				return 13;
				break;
			
			case 13:
			case 14:
				return 15;
				break;
			}
	}
	return *iParam0;
}



void func_988()//Position - 0x8C10F
{
	if (GlobalFunc_8315() == 0)
	{
		bLocal_4944 = true;
	}
	else
	{
		bLocal_4944 = false;
	}
	if (bLocal_2405)
	{
		iLocal_1464 = joaat("weapon_assaultrifle");
	}
	else
	{
		iLocal_1464 = joaat("weapon_carbinerifle");
	}
	AUDIO::SET_AUDIO_FLAG("ScriptedConvListenerMaySpeak", 1);
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	PED::ADD_SCENARIO_BLOCKING_AREA(713.7754f, -996.4443f, 22.3085f, 715.7624f, -991.7067f, 25.6214f, 0, 1, 1, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(Vector(42.10857f, -241.569f, -636.5995f) - Vector(5.75f, 9.5f, 8.75f), -603.6248f, -208.9597f, 53.7091f, 0, 1, 1, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(-586.8279f, -310.899f, 27.7631f, -574.8138f, -244.2133f, 41.2733f, 0, 1, 1, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(Vector(37.38137f, -227.7353f, -669.3129f) - Vector(1.5f, 2.25f, 14.75f), Vector(37.38137f, -227.7353f, -669.3129f) + Vector(1.5f, 2.25f, 14.75f), 0, 1, 1, 1);
	PED::SET_PED_NON_CREATION_AREA(Vector(37.38137f, -227.7353f, -669.3129f) - Vector(1.5f, 2.25f, 14.75f), Vector(37.38137f, -227.7353f, -669.3129f) + Vector(1.5f, 2.25f, 14.75f));
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	func_1000();
	func_995();
	func_993();
	GlobalFunc_52(0, 0);
	GlobalFunc_695(0);
	VEHICLE::DELETE_ALL_TRAINS();
	GlobalFunc_563(1);
	func_990(sLocal_2639, 0, 1, 1);
	func_872();
	PED::ADD_RELATIONSHIP_GROUP("SHOP", &iLocal_2636);
	PED::ADD_RELATIONSHIP_GROUP("COPPERS", &iLocal_2637);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, iLocal_2636);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_2637);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_2637, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_2637, iLocal_2636);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_2636, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_2636, iLocal_2637);
	if (!PED::IS_PED_INJURED(func_93(0)))
	{
		if (PED::IS_PED_DUCKING(func_93(0)))
		{
			PED::SET_PED_DUCKING(func_93(0), 0);
		}
	}
	MISC::CLEAR_AREA_OF_PEDS(Local_1561, 2f, 0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
	PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
	PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
	GlobalFunc_696();
	iLocal_97 = GlobalFunc_5101(0);
	iLocal_98 = GlobalFunc_5101(1);
	if (bLocal_2405)
	{
		GRAPHICS::ADD_TCMODIFIER_OVERRIDE("NEW_Jewel", "NEW_jewel_EXIT");
	}
}


void func_990(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x8C381
{
	HUD::REQUEST_ADDITIONAL_TEXT(sParam0, iParam1);
	if (bParam2)
	{
		while (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(sParam0, iParam1))
		{
			if (bParam3)
			{
				func_109(0);
			}
			else
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}



void func_993()//Position - 0x8C3D9
{
	Local_1570[0 /*3*/] = { -639.42f, -237.89f, 37.45f };
	fLocal_1580[0] = 59.5395f;
	Local_1570[1 /*3*/] = { -638.6117f, -242.9966f, 37.1304f };
	fLocal_1580[1] = 42.6795f;
	Local_1570[2 /*3*/] = { -634.4958f, -241.2315f, 37.1219f };
	fLocal_1580[2] = 40.5422f;
	Local_1584[0 /*3*/] = { 708.2659f, -966.5298f, 29.4334f };
	fLocal_1600[0] = 26.5931f;
	Local_1584[1 /*3*/] = { 706.1772f, -966.1973f, 29.4598f };
	fLocal_1600[1] = 347.5504f;
	Local_1584[2 /*3*/] = { 708.775f, -963.8549f, 29.4334f };
	fLocal_1600[2] = 132.5186f;
	Local_1584[3 /*3*/] = { 709.2004f, -965.6567f, 29.4334f };
	fLocal_1600[3] = 101.424f;
	Local_1584[4 /*3*/] = { 707.5271f, -962.924f, 29.4334f };
	fLocal_1600[4] = 176.8285f;
	Local_1637[0 /*3*/] = { -583.6948f, -283.4582f, 34.2523f };
	Local_1637[1 /*3*/] = { -596.4763f, -284.1328f, 40.6868f };
	Local_1637[2 /*3*/] = { -596.0881f, -293.9532f, 40.6868f };
	Local_1637[3 /*3*/] = { -596.8112f, -294.6171f, 47.0676f };
	Local_1637[4 /*3*/] = { -616.3251f, -239.7347f, 54.6582f };
	Local_1637[5 /*3*/] = { -625.7886f, -216.2038f, 58.1056f };
	Local_1692 = { 793.2487f, -462.3718f, 28.3002f };
	fLocal_1695 = 75.2595f;
	Local_1696[0 /*3*/] = { 722.6227f, -441.2054f, 16.2914f };
	fLocal_1706[0] = 126.6293f;
	Local_1696[1 /*3*/] = { 743.0473f, -463.6686f, 16.4246f };
	fLocal_1706[1] = 122.2695f;
	Local_1696[2 /*3*/] = { 745.7171f, -427.7663f, 18.2352f };
	fLocal_1706[2] = 116.5734f;
	Local_1723 = { -629.0375f, -232.8257f, 37.208f };
	fLocal_1726 = 103.2488f;
	Local_1727[0 /*3*/] = { -622.0082f, -230.5164f, 37.208f };
	fLocal_1743[0] = 57.43999f;
	Local_1727[1 /*3*/] = { -625.4323f, -235.8507f, 37.208f };
	fLocal_1743[1] = 41.50998f;
	Local_1727[2 /*3*/] = { -626.0464f, -236.6019f, 37.208f };
	fLocal_1743[2] = 18.79999f;
	Local_1727[3 /*3*/] = { -623.9794f, -232.241f, 37.208f };
	fLocal_1743[3] = 6.109993f;
	Local_1727[4 /*3*/] = { -623.5298f, -234.9338f, 37.208f };
	fLocal_1743[4] = -22.49154f;
	bLocal_2411 = false;
	iLocal_2417 = 0;
	bLocal_2412 = false;
	bLocal_2413 = false;
	iLocal_2414 = 0;
	iLocal_2415 = 0;
	func_994(&(Local_1758[0 /*30*/]), -627.735f, -234.439f, 37.875f, -628.187f, -233.538f, 37.0946f, 0f, 0f, -144f, Local_3369.f_256[0], 99750, Local_3369.f_278);
	func_994(&(Local_1758[1 /*30*/]), -626.716f, -233.685f, 37.8583f, -627.136f, -232.775f, 37.0946f, 0f, 0f, -144f, Local_3369.f_256[1], 159600, Local_3369.f_278);
	func_994(&(Local_1758[2 /*30*/]), -627.35f, -234.947f, 37.8531f, -626.62f, -235.725f, 37.0946f, 0f, 0f, 36f, Local_3369.f_256[2], 104737, Local_3369.f_280);
	func_994(&(Local_1758[3 /*30*/]), -626.298f, -234.193f, 37.8492f, -625.57f, -234.962f, 37.0946f, 0f, 0f, 36f, Local_3369.f_256[3], 154613, Local_3369.f_281);
	func_994(&(Local_1758[4 /*30*/]), -626.399f, -239.132f, 37.8616f, -626.894f, -238.2f, 37.0856f, 0f, 0f, -144f, Local_3369.f_256[4], 39900, Local_3369.f_279);
	func_994(&(Local_1758[5 /*30*/]), -625.376f, -238.358f, 37.8687f, -625.867f, -237.458f, 37.0946f, 0f, 0f, -144f, Local_3369.f_256[5], 59850, Local_3369.f_280);
	func_994(&(Local_1758[6 /*30*/]), -625.517f, -227.421f, 37.86f, -624.738f, -228.2f, 37.0946f, 0f, 0f, 36f, Local_3369.f_256[6], 219450, Local_3369.f_280);
	func_994(&(Local_1758[7 /*30*/]), -624.467f, -226.653f, 37.861f, -623.688f, -227.437f, 37.0946f, 0f, 0f, 36f, Local_3369.f_256[7], 299250, Local_3369.f_281);
	func_994(&(Local_1758[8 /*30*/]), -623.8118f, -228.6336f, 37.8522f, -624.293f, -227.831f, 37.0946f, 0f, 0f, -143.511f, Local_3369.f_256[8], 305235, Local_3369.f_279);
	func_994(&(Local_1758[9 /*30*/]), -624.1267f, -230.7476f, 37.8618f, -624.939f, -231.247f, 37.0946f, 0f, 0f, -54.13f, Local_3369.f_256[9], 448793, Local_3369.f_281);
	func_994(&(Local_1758[10 /*30*/]), -621.7181f, -228.9636f, 37.8425f, -620.864f, -228.481f, 37.0946f, 0f, 0f, 126.925f, Local_3369.f_256[10], 546125, Local_3369.f_280);
	Local_1758[10 /*30*/].f_9 = { -620.8779f, -227.7553f, 38.7692f };
	Local_1758[10 /*30*/].f_12 = { -15.0723f, -0.325f, 147.1275f };
	Local_1758[10 /*30*/].f_21 = 35.2071f;
	Local_1758[10 /*30*/].f_15 = { -620.4113f, -227.7727f, 38.6039f };
	Local_1758[10 /*30*/].f_18 = { -1.7684f, 0.1702f, 123.3868f };
	Local_1758[10 /*30*/].f_22 = 35.2071f;
	func_994(&(Local_1758[11 /*30*/]), -622.7541f, -232.614f, 37.8638f, -623.3596f, -233.2296f, 37.0946f, 0f, 0f, -52.984f, Local_3369.f_256[11], 498750, Local_3369.f_278);
	Local_1758[11 /*30*/].f_9 = { -622.0359f, -233.6082f, 38.44986f };
	Local_1758[11 /*30*/].f_12 = { -1.763292f, -2.630027f, 46.96361f };
	Local_1758[11 /*30*/].f_21 = 39.74993f;
	Local_1758[11 /*30*/].f_15 = { -621.4892f, -232.9718f, 38.6356f };
	Local_1758[11 /*30*/].f_18 = { -8.36115f, -2.628445f, 86.69191f };
	Local_1758[11 /*30*/].f_22 = 37.1155f;
	func_994(&(Local_1758[12 /*30*/]), -620.3262f, -230.829f, 37.8578f, -619.408f, -230.1969f, 37.0946f, 0f, 0f, 126.352f, Local_3369.f_256[12], 685775, Local_3369.f_278);
	func_994(&(Local_1758[13 /*30*/]), -620.6465f, -232.9308f, 37.8407f, -620.184f, -233.729f, 37.0946f, 0f, 0f, 36.398f, Local_3369.f_256[13], 118450, Local_3369.f_281);
	Local_1758[13 /*30*/].f_9 = { -618.883f, -233.4098f, 38.15371f };
	Local_1758[13 /*30*/].f_12 = { -2.226855f, -2.630027f, 64.84428f };
	Local_1758[13 /*30*/].f_21 = 40.18032f;
	Local_1758[13 /*30*/].f_15 = { -618.9713f, -233.348f, 38.638f };
	Local_1758[13 /*30*/].f_18 = { -1.0873f, -1.7225f, 84.9176f };
	Local_1758[13 /*30*/].f_22 = 40.18032f;
	func_994(&(Local_1758[14 /*30*/]), -619.978f, -234.93f, 37.8537f, -620.44f, -234.084f, 37.0946f, 0f, 0f, -144f, Local_3369.f_256[14], 449375, Local_3369.f_278);
	func_994(&(Local_1758[15 /*30*/]), -618.937f, -234.16f, 37.8425f, -619.39f, -233.32f, 37.0946f, 0f, 0f, -144f, Local_3369.f_256[15], 59250, Local_3369.f_280);
	func_994(&(Local_1758[16 /*30*/]), -620.163f, -226.212f, 37.8266f, -620.797f, -226.79f, 37.0946f, 0f, 0f, -54f, Local_3369.f_256[16], 59350, Local_3369.f_278);
	func_994(&(Local_1758[17 /*30*/]), -619.384f, -227.259f, 37.8342f, -620.055f, -227.817f, 37.0856f, 0f, 0f, -54f, Local_3369.f_256[17], 99250, Local_3369.f_279);
	func_994(&(Local_1758[18 /*30*/]), -618.019f, -229.115f, 37.8302f, -618.679f, -229.704f, 37.0946f, 0f, 0f, -54f, Local_3369.f_256[18], 99250, Local_3369.f_280);
	func_994(&(Local_1758[19 /*30*/]), -617.249f, -230.156f, 37.8201f, -617.937f, -230.731f, 37.0856f, 0f, 0f, -54f, Local_3369.f_256[19], 439400, Local_3369.f_279);
}

void func_994(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, var uParam10, int iParam11, var uParam12)//Position - 0x8CDA7
{
	*uParam0 = { Param1 };
	uParam0->f_3 = { Param4 };
	uParam0->f_6 = { Param7 };
	uParam0->f_24 = 0;
	uParam0->f_25 = uParam10;
	uParam0->f_26 = iParam11;
	uParam0->f_27 = uParam12;
}

void func_995()//Position - 0x8CDE2
{
	func_999();
	func_998(joaat("prop_ld_test_01"));
	func_998(Local_3369);
	func_998(Local_3369.f_1);
	func_998(Local_3369.f_2);
	func_998(Local_3369.f_3);
	iLocal_2466 = 0;
	while (iLocal_2466 <= 4)
	{
		func_998(Local_3369.f_4[iLocal_2466]);
		iLocal_2466++;
	}
	func_998(Local_3369.f_10);
	func_998(Local_3369.f_11);
	func_998(Local_3369.f_12);
	func_998(Local_3369.f_14);
	func_998(Local_3369.f_15);
	func_998(Local_3369.f_16);
	func_998(Local_3369.f_17);
	func_998(Local_3369.f_18);
	func_998(Local_3369.f_19);
	func_998(Local_3369.f_20);
	func_998(Local_3369.f_21);
	func_998(Local_3369.f_24);
	func_998(Local_3369.f_25);
	func_998(joaat("ig_trafficwarden"));
	func_998(Local_3369.f_22);
	func_998(Local_3369.f_23);
	func_997(Local_3369.f_35);
	func_997(Local_3369.f_35);
	func_997(Local_3369.f_61);
	func_997(Local_3369.f_60);
	func_996(Local_3369.f_82, Local_3369.f_84);
	func_996(Local_3369.f_81, Local_3369.f_84);
	func_996(Local_3369.f_83, Local_3369.f_84);
	func_996(Local_3369.f_83, Local_3369.f_85);
	func_996(Local_3369.f_83, Local_3369.f_86);
	func_996("JHLateCops", 1);
	func_996("JHLateCops", 2);
	func_996("JHLateCops", 3);
	func_996("JHUBER", 717);
	func_996(Local_3369.f_83, 998);
	func_996("JHArrive", 1);
	func_996("JHArrive", 2);
	func_996("JHArrive", 3);
	func_996("JHBENSONEXIT", 1);
	func_996("JHBugStrExit", 1);
	func_996("JH2BArrive", 1);
	func_996("JH2BArrive", 2);
}

void func_996(char* sParam0, int iParam1)//Position - 0x8CFB3
{
	if (iLocal_3287 < 19)
	{
		Local_3288[iLocal_3287 /*4*/] = sParam0;
		Local_3288[iLocal_3287 /*4*/].f_1 = iParam1;
		Local_3288[iLocal_3287 /*4*/].f_2 = 0;
		Local_3288[iLocal_3287 /*4*/].f_3 = 0;
		iLocal_3287++;
	}
}

void func_997(char* sParam0)//Position - 0x8CFFA
{
	if (iLocal_3135 < 50)
	{
		Local_3136[iLocal_3135 /*3*/] = sParam0;
		Local_3136[iLocal_3135 /*3*/].f_1 = 0;
		Local_3136[iLocal_3135 /*3*/].f_2 = 0;
		iLocal_3135++;
	}
}

void func_998(int iParam0)//Position - 0x8D035
{
	if (iLocal_3028 < 35)
	{
		Local_3029[iLocal_3028 /*3*/] = iParam0;
		Local_3029[iLocal_3028 /*3*/].f_1 = 0;
		Local_3029[iLocal_3028 /*3*/].f_2 = 0;
		iLocal_3028++;
	}
}

void func_999()//Position - 0x8D070
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 34)
	{
		Local_3029[iVar0 /*3*/] = 0;
		Local_3029[iVar0 /*3*/].f_1 = 0;
		Local_3029[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	iLocal_3028 = 0;
	iVar0 = 0;
	while (iVar0 <= 49)
	{
		Local_3136[iVar0 /*3*/] = "missing";
		Local_3136[iVar0 /*3*/].f_1 = 0;
		Local_3136[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	iLocal_3135 = 0;
	iVar0 = 0;
	while (iVar0 <= 18)
	{
		Local_3288[iVar0 /*4*/] = "missing";
		Local_3288[iVar0 /*4*/].f_1 = -1;
		Local_3288[iVar0 /*4*/].f_2 = 0;
		Local_3288[iVar0 /*4*/].f_3 = 0;
		iVar0++;
	}
	iLocal_3287 = 0;
}

void func_1000()//Position - 0x8D121
{
	if (GlobalFunc_697(GlobalFunc_5133(0, 0)) == 2 || GlobalFunc_697(GlobalFunc_5133(0, 0)) == 1)
	{
		Local_3369 = joaat("sanchez");
		Local_82 = { 0f, 0f, 0f };
		fLocal_3651 = 5f;
	}
	else
	{
		Local_3369 = joaat("bati2");
		Local_82 = { 0f, 0f, -0.1227f };
		fLocal_3651 = 20f;
	}
	Local_3369.f_1 = joaat("primo");
	if (bLocal_2405)
	{
		Local_3369.f_2 = joaat("burrito2");
	}
	else
	{
		Local_3369.f_2 = joaat("burrito3");
	}
	Local_3369.f_3 = joaat("u_m_m_jewelsec_01");
	Local_3369.f_4[0] = joaat("a_f_y_business_02");
	Local_3369.f_4[1] = joaat("ig_jewelass");
	Local_3369.f_4[2] = joaat("a_m_y_bevhills_01");
	Local_3369.f_4[3] = joaat("a_m_y_bevhills_01");
	if (bLocal_2405)
	{
		Local_3369.f_4[4] = joaat("a_m_y_bevhills_01");
	}
	else
	{
		Local_3369.f_4[4] = joaat("a_f_y_business_02");
	}
	Local_3369.f_10 = joaat("a_f_m_bevhills_02");
	Local_3369.f_11 = joaat("prop_gas_grenade");
	Local_3369.f_12 = joaat("benson");
	Local_3369.f_14 = joaat("police3");
	Local_3369.f_15 = joaat("s_m_y_cop_01");
	Local_3369.f_16 = joaat("prop_phone_ing");
	Local_3369.f_17 = joaat("prop_cs_heist_bag_02");
	Local_3369.f_18 = joaat("prop_j_neck_disp_02");
	Local_3369.f_19 = joaat("prop_jewel_02a");
	Local_3369.f_20 = joaat("prop_jewel_04a");
	Local_3369.f_21 = joaat("prop_jewel_04b");
	Local_3369.f_22 = joaat("ig_lestercrest");
	Local_3369.f_23 = joaat("prop_cs_walking_stick");
	Local_3369.f_24 = joaat("hc_gunman");
	Local_3369.f_25 = joaat("hc_driver");
	Local_3369.f_26 = joaat("hc_hacker");
	Local_3369.f_35 = "missheist_jewel";
	Local_3369.f_36 = "cam_smash_case_d";
	Local_3369.f_37 = "smash_case_e";
	Local_3369.f_38 = "cam_smash_case_e";
	Local_3369.f_39 = "smash_case_necklace";
	Local_3369.f_40 = "cam_smash_case_necklace";
	Local_3369.f_41 = "smash_case_necklace_skull";
	Local_3369.f_42 = "smash_case_tray_a";
	Local_3369.f_43 = "cam_smash_case_tray_a";
	Local_3369.f_44 = "smash_case_tray_b";
	Local_3369.f_45 = "cam_smash_case_tray_b";
	Local_3369.f_46 = "gassed_npc_assistant";
	Local_3369.f_47 = "gassed_npc_guard";
	Local_3369.f_48 = "2b_guard_onfloor_loop";
	Local_3369.f_49[0] = "gassed_npc_customer1";
	Local_3369.f_49[1] = "gassed_npc_customer2";
	Local_3369.f_49[2] = "gassed_npc_customer3";
	Local_3369.f_49[3] = "gassed_npc_customer4";
	Local_3369.f_54 = "manageress_enter";
	Local_3369.f_55 = "manageress_exit";
	Local_3369.f_56 = "manageress_kneel_intro";
	Local_3369.f_57 = "manageress_kneel_loop";
	Local_3369.f_58 = "manageress_loop";
	Local_3369.f_59 = "manageress_enter_cam";
	Local_3369.f_28 = "do_it";
	Local_3369.f_29 = "time";
	Local_3369.f_30 = "fold_arms_oh_yeah";
	Local_3369.f_31 = "im_telling_you";
	Local_3369.f_32 = "but_why";
	Local_3369.f_33 = "damn";
	Local_3369.f_34 = "despair";
	Local_3369.f_61 = "missbigscore2big_2";
	Local_3369.f_62 = "idle_e";
	Local_3369.f_60 = "missHeist_Jewel@Switch";
	Local_3369.f_64 = "switchcam_incar_buddy";
	Local_3369.f_63 = "switchcam_incar_mic";
	Local_3369.f_76[0] = "JHCopTrap1st";
	Local_3369.f_76[1] = "JHCopTrap2nd";
	Local_3369.f_76[2] = "JHCopTrap3rd";
	Local_3369.f_76[3] = "JHCopTrap4th";
	Local_3369.f_81 = "JHTruckExit";
	Local_3369.f_82 = "JHTruckLead";
	Local_3369.f_83 = "JHUber";
	Local_3369.f_84 = 650;
	Local_3369.f_85 = 998;
	Local_3369.f_86 = 59;
	Local_3369.f_87 = 0;
	Local_3369.f_88 = 6689;
	Local_3369.f_89 = 9792;
	Local_3369.f_90 = 11768;
	Local_3369.f_91 = 13744;
	Local_3369.f_92 = 20344;
	Local_3369.f_93 = 22413;
	Local_3369.f_94 = 25325;
	Local_3369.f_95 = 26112;
	Local_3369.f_96 = 36000;
	Local_3369.f_97 = 35737;
	Local_3369.f_98 = 35737;
	Local_3369.f_99 = 40891;
	Local_3369.f_100 = 41600;
	Local_3369.f_101 = 41377;
	Local_3369.f_102 = 45023;
	Local_3369.f_103 = 47653;
	Local_3369.f_104 = 49412;
	Local_3369.f_105 = 54300;
	Local_3369.f_106 = 65621;
	Local_3369.f_107 = 68548;
	Local_3369.f_108 = 78070;
	Local_3369.f_109 = 79936;
	Local_3369.f_110 = 83350;
	Local_3369.f_111 = 93149;
	Local_3369.f_112 = 103173;
	Local_3369.f_113 = 105225;
	Local_3369.f_114 = 113288;
	Local_3369.f_115 = 123606;
	Local_3369.f_116 = 132227;
	Local_3369.f_117 = 134596;
	Local_3369.f_118 = 140440;
	Local_3369.f_119 = "JH_2A_INTp4";
	Local_3369.f_120 = "jh_2b_int";
	Local_3369.f_121 = "JH_2A_MCS_1";
	Local_3369.f_122 = "JH_2B_MCS_1";
	Local_3369.f_123 = "Jh_2_fin_a_mcs4_a1";
	Local_3369.f_124 = "Jh2_fina_mcs4_a1a2";
	Local_3369.f_125 = "JH_PLAN";
	Local_3369.f_126 = "JH_CARLVE";
	Local_3369.f_127 = "JH_MOVE";
	Local_3369.f_128 = "JH_TRAP";
	Local_3369.f_129 = "JH_TRUCK";
	Local_3369.f_130 = "JH_MOUNT";
	Local_3369.f_131 = "JH_ROOF";
	Local_3369.f_132 = "JH_HCKA10";
	Local_3369.f_133 = "JH_HCKA20";
	Local_3369.f_134 = "JH_HCKA30";
	Local_3369.f_135 = "JH_HCKA40";
	Local_3369.f_136 = "JH_HCKA50";
	Local_3369.f_137 = "JH_HCKA60";
	Local_3369.f_138 = "JH_HCKB10";
	Local_3369.f_139 = "JH_HCKB20";
	Local_3369.f_140 = "JH_HCKB30";
	Local_3369.f_141 = "JH_HCKB40";
	Local_3369.f_142 = "JH_HCKAGO";
	Local_3369.f_143 = "JH_HCKBGO";
	Local_3369.f_144 = "JH_HCKA00";
	Local_3369.f_145 = "JH_HCKB00";
	Local_3369.f_146 = "JH_HCKLT";
	Local_3369.f_147 = "JH_MENC";
	Local_3369.f_148 = "JH_BKCRSH";
	Local_3369.f_149 = "JH_PLCSC2";
	Local_3369.f_150 = "JH_FRLST";
	Local_3369.f_151 = "JH_PLCSC3";
	Local_3369.f_152 = "JH_MMISS";
	Local_3369.f_153 = "JH_CTRL";
	switch (GlobalFunc_697(GlobalFunc_5133(0, 2)))
	{
		case 2:
			Local_3369.f_155 = "JH_WALK1";
			break;
		
		case 1:
			Local_3369.f_155 = "JH_WALK2";
			break;
		
		case 0:
			Local_3369.f_155 = "JH_WALK3";
			break;
	}
	Local_3369.f_156 = "JH_VAN";
	Local_3369.f_157 = "JH_MANAG";
	Local_3369.f_158 = "JH_FMANA";
	Local_3369.f_159 = "JH_RUN";
	Local_3369.f_160 = "JH_CLEFT";
	Local_3369.f_161 = "JH_CJUMP";
	Local_3369.f_162 = "JH_CTUNN";
	Local_3369.f_163 = "JH_CRAMP";
	Local_3369.f_164 = "JH_AIM";
	Local_3369.f_165 = "JH_AIMKO";
	Local_3369.f_166 = "JH_BUMPM";
	Local_3369.f_167 = "JH_BUMPF";
	Local_3369.f_168 = "JH_BOYS";
	Local_3369.f_169 = "JH_VAN";
	Local_3369.f_170 = "JH_SLOWF";
	Local_3369.f_171 = "JH_FASTF";
	Local_3369.f_172 = "JH_BEHND";
	Local_3369.f_173 = "JH_FASTM";
	Local_3369.f_174 = "JH_SLOWM";
	Local_3369.f_175 = "JH_PLAN2";
	Local_3369.f_176 = "JH_SROOF";
	Local_3369.f_177 = "JH_APLAN2";
	Local_3369.f_178 = "JH_GSTOP";
	Local_3369.f_179 = "JH_LVEGB";
	Local_3369.f_180 = "JH_LVEGG";
	Local_3369.f_181 = "JH_LVEGM";
	Local_3369.f_182 = "JH_LVEMB";
	Local_3369.f_183 = "JH_LVEBB";
	Local_3369.f_184 = "JH_COPG1";
	Local_3369.f_185 = "JH_COPG2";
	Local_3369.f_186 = "JH_COPM";
	Local_3369.f_187 = "JH_COPB1";
	Local_3369.f_188 = "JH_COPB2";
	Local_3369.f_189 = "JH_ROOFC";
	Local_3369.f_190 = "JH_SHTCOP";
	if (bLocal_2405)
	{
		if (func_114())
		{
			Local_3369.f_191 = "JH_CRSPND";
		}
		else if (func_113())
		{
			Local_3369.f_191 = "JH_RESPG";
		}
		else if (func_112())
		{
			Local_3369.f_191 = "JH_RESPN";
		}
	}
	else if (func_117())
	{
		Local_3369.f_191 = "JH_RESP_ET";
	}
	else if (func_115())
	{
		Local_3369.f_191 = "JH_RESP_KD";
	}
	Local_3369.f_192 = "JH_COPC1";
	Local_3369.f_193 = "JH_COPC2";
	Local_3369.f_194 = "JH_LOSTF";
	Local_3369.f_195 = "JH_FRENCT";
	Local_3369.f_196 = "JH_CRENC1";
	Local_3369.f_197 = "JH_CRENC2";
	Local_3369.f_198 = "JH_SHOOT";
	Local_3369.f_199 = "JH_GOAWAY";
	Local_3369.f_202 = "F_ABANDON";
	Local_3369.f_203 = "F_KILLMICHAEL";
	Local_3369.f_204 = "F_KILLTREVOR";
	Local_3369.f_205 = "F_KILLCREW";
	Local_3369.f_206 = "F_DESTROYBIKE";
	Local_3369.f_216 = "F_DESTROYCAR";
	Local_3369.f_207 = "F_LOSECHASE";
	Local_3369.f_208 = "F_LOSEBIKE";
	Local_3369.f_209 = "F_LOSEMICHAEL";
	Local_3369.f_210 = "F_LOSEFRANKLIN";
	Local_3369.f_211 = "F_LOSETREVOR";
	Local_3369.f_212 = "F_LOSECREW";
	Local_3369.f_213 = "F_KILLFRANK";
	Local_3369.f_214 = "F_CALLPOLICE";
	Local_3369.f_215 = "F_DESTROYVAN";
	Local_3369.f_217 = "F_DESTROYTRUCK";
	Local_3369.f_201 = "M_FAIL";
	Local_3369.f_228 = "CMN_FLEAVE";
	Local_3369.f_229 = "CMN_MLEAVE";
	Local_3369.f_200 = "G_GETVEHICLE";
	Local_3369.f_218 = "G_DRIVETOSTORE";
	Local_3369.f_219 = "G_GETTOROOF";
	Local_3369.f_220 = "G_STEALJEWELRY";
	Local_3369.f_221 = "G_LEAVE";
	Local_3369.f_222 = "G_BIKE";
	Local_3369.f_223 = "G_FOLLOWCREW";
	Local_3369.f_224 = "G_COPS";
	Local_3369.f_225 = "G_GUARD";
	Local_3369.f_226 = "G_GETBACKCAR";
	Local_3369.f_227 = "G_GETINCAR";
	Local_3369.f_230 = "G_PICKCREW";
	Local_3369.f_231 = "G_GETINVAN";
	Local_3369.f_232 = "G_GETBACKVAN";
	Local_3369.f_233 = "G_GETBACKTRUCK";
	Local_3369.f_234 = "G_STRMSIDE";
	Local_3369.f_235 = "G_DOSWCHM";
	Local_3369.f_236 = "G_DOSWCHF";
	Local_3369.f_237 = "H_HELPCLIMB";
	Local_3369.f_238 = "H_HELPSTEAL";
	Local_3369.f_239 = "H_HELPFOCUS";
	Local_3369.f_240 = "H_VIEWMIKE";
	Local_3369.f_241 = "H_VIEWFRNK";
	Local_3369.f_242 = "H_SWITCHM";
	Local_3369.f_243 = "H_SWITCHF";
	Local_3369.f_244 = "SCRIPT\JWL_HA_RAID_STORE";
	Local_3369.f_245 = "SCRIPT\JWL_HEIST_RAID_GLASS_SMASH";
	Local_3369.f_246 = "SCRIPT\JWL_HEIST_RAID_RAYFIRE_CRASH";
	Local_3369.f_247 = "SCRIPT\Underwater";
	Local_3369.f_248 = "JWL_HA_RAYFIRE_CRASH";
	Local_3369.f_249 = "JWL_HA_SMASH_CABINET";
	Local_3369.f_250 = "JWL_HA_SMASH_CABINET_NPC";
	Local_3369.f_251 = "JWL_HA_ROOFTOP_AIRCON";
	Local_3369.f_252 = "JWL_HA_ALARM_BELL";
	Local_3369.f_253 = "JWL_HA_GAS_ESCAPE";
	Local_3369.f_254 = "JWL_HA_GAS_MASK";
	Local_3369.f_255 = "jewel_heist_counter";
	Local_3369.f_256[0] = "JWL_00";
	Local_3369.f_256[1] = "JWL_01";
	Local_3369.f_256[2] = "JWL_02";
	Local_3369.f_256[3] = "JWL_03";
	Local_3369.f_256[4] = "JWL_04";
	Local_3369.f_256[5] = "JWL_05";
	Local_3369.f_256[6] = "JWL_06";
	Local_3369.f_256[7] = "JWL_07";
	Local_3369.f_256[8] = "JWL_08";
	Local_3369.f_256[9] = "JWL_09";
	Local_3369.f_256[10] = "JWL_10";
	Local_3369.f_256[11] = "JWL_11";
	Local_3369.f_256[12] = "JWL_12";
	Local_3369.f_256[13] = "JWL_13";
	Local_3369.f_256[14] = "JWL_14";
	Local_3369.f_256[15] = "JWL_15";
	Local_3369.f_256[16] = "JWL_16";
	Local_3369.f_256[17] = "JWL_17";
	Local_3369.f_256[18] = "JWL_18";
	Local_3369.f_256[19] = "JWL_19";
	Local_3369.f_277 = "JWL_NONE";
	Local_3369.f_278 = "DES_Jewel_Cab";
	Local_3369.f_279 = "DES_Jewel_Cab2";
	Local_3369.f_280 = "DES_Jewel_Cab3";
	Local_3369.f_281 = "DES_Jewel_Cab4";
}

var func_1001(int iParam0)//Position - 0x8DCD5
{
	return func_1002(iParam0);
}

char* func_1002(int iParam0)//Position - 0x8DCE3
{
	switch (iParam0)
	{
		case 1:
			return "HC_FN_GUS";
			break;
		
		case 2:
			return "HC_FN_KAR";
			break;
		
		case 10:
			return "HC_FN_PAC";
			break;
		
		case 11:
			return "HC_FN_CHE";
			break;
		
		case 3:
			return "HC_FN_HUG";
			break;
		
		case 4:
			return "HC_FN_NOR";
			break;
		
		case 5:
			return "HC_FN_DAR";
			break;
		
		case 6:
			return "HC_FN_PAI";
			break;
		
		case 7:
			return "HC_FN_CHR";
			break;
		
		case 12:
			return "HC_FN_RIC";
			break;
		
		case 8:
			return "HC_FN_EDD";
			break;
		
		case 13:
			return "HC_FN_TAL";
			break;
		
		case 9:
			return "HC_FN_KRM";
			break;
	}
	return "ERROR!";
}


void func_1004()//Position - 0x8DE15
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_77))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_77, 1f, 1f, 2.2f, 0, 1, 0))
		{
			OBJECT::DELETE_OBJECT(&iLocal_77);
			func_737(&uLocal_4931);
			PAD::SET_PAD_SHAKE(0, 250, 255);
			iLocal_2463 = (iLocal_2463 + iLocal_2464);
			iLocal_2464 = 0;
			Global_89962.f_12[0] = iLocal_2463;
			Global_89962.f_12[1] = 1;
		}
		else if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_77, 65f, 65f, 120f, 0, 1, 0))
		{
			OBJECT::DELETE_OBJECT(&iLocal_77);
			func_737(&uLocal_4931);
		}
	}
}







void func_1011(int iParam0)//Position - 0x9230E
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_597(GlobalFunc_598(iParam0));
	iVar1 = 0;
	while (iVar1 < Global_86396[iVar0 /*19*/])
	{
		if (Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_SELECTED_CREW_ARRAY[iVar0 /*6*/][iVar1] == 0)
		{
			func_1012(iVar0, iVar1);
		}
		else if (Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_SELECTED_CREW_ARRAY[iVar0 /*6*/][iVar1] == 15)
		{
			func_1012(iVar0, iVar1);
		}
		else if (GlobalFunc_595(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_SELECTED_CREW_ARRAY[iVar0 /*6*/][iVar1]) != Global_86396[iVar0 /*19*/].f_1[iVar1])
		{
			func_1012(iVar0, iVar1);
		}
		iVar1++;
	}
}

void func_1012(int iParam0, int iParam1)//Position - 0x923A7
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	while (!bVar1)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 14);
		bVar1 = true;
		if (Global_86242[iVar0 /*5*/] != Global_86396[iParam0 /*19*/].f_1[iParam1])
		{
			bVar1 = false;
		}
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.HEIST_DATA_STRUCT.Crew_Unlocked_Bitset, iVar0))
		{
			bVar1 = false;
		}
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.HEIST_DATA_STRUCT.Crew_Dead_Bitset, iVar0))
		{
			bVar1 = false;
		}
		if (iVar0 == 11)
		{
			if (iParam0 == 6 || iParam0 == 7)
			{
				bVar1 = false;
			}
		}
		iVar2 = 0;
		while (iVar2 < Global_86396[iParam0 /*19*/])
		{
			if (iVar2 != iParam1)
			{
				if (iVar0 == Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_SELECTED_CREW_ARRAY[iParam0 /*6*/][iVar2])
				{
					bVar1 = false;
				}
			}
			iVar2++;
		}
	}
	Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_SELECTED_CREW_ARRAY[iParam0 /*6*/][iParam1] = iVar0;
}

void func_1013()//Position - 0x92471
{
	CUTSCENE::STOP_CUTSCENE(1);
	GlobalFunc_601(9, 0);
	GlobalFunc_601(8, 0);
	GlobalFunc_2790(25, 0, 1);
	GlobalFunc_2790(26, 0, 1);
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_2612))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_2612, 0);
	}
	CAM::_0x9DFE13ECDC1EC196(0, 0);
	if (!PED::IS_PED_INJURED(func_93(1)))
	{
		EVENT::REMOVE_SHOCKING_EVENT(96);
		PED::REMOVE_PED_HELMET(func_93(1), 1);
		PED::SET_PED_HELMET_TEXTURE_INDEX(func_93(1), -1);
	}
	if (!PED::IS_PED_INJURED(func_93(0)))
	{
		PED::REMOVE_PED_HELMET(func_93(0), 1);
		PED::SET_PED_HELMET_TEXTURE_INDEX(func_93(0), -1);
	}
	iLocal_2466 = 0;
	while (iLocal_2466 <= 19)
	{
		uLocal_2642 = OBJECT::GET_RAYFIRE_MAP_OBJECT(Local_1758[iLocal_2466 /*30*/], 1f, Local_1758[iLocal_2466 /*30*/].f_27);
		if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_2642))
		{
			if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_2642) != 3)
			{
				OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_2642, 11);
			}
		}
		iLocal_2466++;
	}
	INTERIOR::DISABLE_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-164.3822f, -619.0884f, 33.3318f, "dt1_02_carpark"), 0);
	INTERIOR::DISABLE_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-179.314f, -180.2154f, 42.6246f, "bt1_04_carpark"), 0);
	INTERIOR::DISABLE_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-16.2958f, -684.0385f, 33.5083f, "dt1_03_carpark"), 0);
	INTERIOR::DISABLE_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(141.2044f, -717.2167f, 32.1327f, "dt1_05_carpark"), 0);
	STREAMING::SET_GAME_PAUSES_FOR_STREAMING(1);
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	GRAPHICS::_0xBB90E12CAC1DAB25(1f);
	PATHFIND::DISABLE_NAVMESH_IN_AREA(-623.1895f, -231.5713f, 36.8759f, -620.66f, -229.683f, 38.0054f, 0);
	GlobalFunc_52(1, 1);
	AUDIO::_0x02E93C796ABD3A97(0);
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_2601))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_2601, true);
		ENTITY::SET_ENTITY_COLLISION(iLocal_2601, true, 0);
	}
	OBJECT::DELETE_OBJECT(&iLocal_2602);
	GlobalFunc_563(0);
	AUDIO::DISTANT_COP_CAR_SIRENS(0);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	GlobalFunc_563(0);
	func_980(0);
	GlobalFunc_7632(0);
	GlobalFunc_695(1);
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	if (bLocal_2405)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("JH2A_MISSION_FAIL");
	}
	else
	{
		AUDIO::TRIGGER_MUSIC_EVENT("JH2B_MISSION_FAIL");
	}
	GlobalFunc_699();
	iLocal_3652 = 0;
	if (CAM::DOES_CAM_EXIST(Local_3653.f_1))
	{
		CAM::SET_CAM_ACTIVE(Local_3653.f_1, 0);
		CAM::DESTROY_CAM(Local_3653.f_1, 0);
	}
	CAM::DESTROY_ALL_CAMS(0);
	Local_2703.f_19 = 0;
}










void func_1023(int iParam0, int iParam1)//Position - 0x92ABB
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_86597[iParam0 /*38*/].f_24)
	{
		if (Global_86597[iParam0 /*38*/].f_18[iVar0] == iParam1)
		{
			return;
		}
		iVar0++;
	}
	if (Global_86597[iParam0 /*38*/].f_24 == 5)
	{
		return;
	}
	Global_86597[iParam0 /*38*/].f_18[Global_86597[iParam0 /*38*/].f_24] = iParam1;
	Global_86597[iParam0 /*38*/].f_24++;
}

void func_1024(int iParam0, int iParam1)//Position - 0x92B36
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_86597[iParam0 /*38*/].f_12[iVar0] == iParam1)
		{
			Global_86597[iParam0 /*38*/][iVar0] = 0;
			return;
		}
		iVar0++;
	}
}

void func_1025(int iParam0, int iParam1)//Position - 0x92B76
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_86597[iParam0 /*38*/].f_12[iVar0] == iParam1)
		{
			Global_86597[iParam0 /*38*/][iVar0] = 1;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_86597[iParam0 /*38*/].f_12[iVar0] == 0)
		{
			Global_86597[iParam0 /*38*/].f_12[iVar0] = iParam1;
			Global_86597[iParam0 /*38*/][iVar0] = 1;
			Global_86597[iParam0 /*38*/].f_6[iVar0] = 0;
			return;
		}
		iVar0++;
	}
}

