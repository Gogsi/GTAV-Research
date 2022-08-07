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
	int iLocal_47 = 0;
	int iLocal_48[17] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_66[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_74[5] = { 0, 0, 0, 0, 0 };
	int iLocal_80[5] = { 0, 0, 0, 0, 0 };
	struct<28> Local_86[17];
	struct<28> Local_563[7];
	struct<28> Local_760[5];
	struct<28> Local_901[5];
	struct<28> Local_1042[2];
	struct<18> Local_1099 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<25> Local_1127 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	int iLocal_1155 = 0;
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
	struct<15> Local_1183[2];
	struct<15> Local_1214[2];
	struct<7> Local_1245 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	struct<3> Local_1260 = { 0, 0, 0 } ;
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
	struct<3> Local_1284 = { 0, 0, 0 } ;
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
	struct<24> Local_1308[2];
	struct<24> Local_1357 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_1381 = { 0, 0, 0 } ;
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
	struct<24> Local_1405[1];
	int iLocal_1430 = 0;
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
	int iLocal_1454 = 0;
	int iLocal_1455 = 0;
	bool bLocal_1456 = 0;
	bool bLocal_1457 = 0;
	int iLocal_1458 = 0;
	int iLocal_1459 = 0;
	int iLocal_1460 = 0;
	bool bLocal_1461 = 0;
	bool bLocal_1462 = 0;
	int iLocal_1463 = 0;
	int iLocal_1464 = 0;
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
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	int iLocal_1482 = 0;
	int iLocal_1483 = 0;
	var uLocal_1484 = 0;
	int iLocal_1485[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1508 = 0;
	int iLocal_1509 = 0;
	int iLocal_1510 = 0;
	var uLocal_1511 = 0;
	int iLocal_1512 = 0;
	int iLocal_1513 = 0;
	int iLocal_1514 = 0;
	int iLocal_1515 = 0;
	int iLocal_1516 = 0;
	int iLocal_1517 = 0;
	int iLocal_1518 = 0;
	int iLocal_1519 = 0;
	int iLocal_1520 = 0;
	int iLocal_1521 = 0;
	int iLocal_1522[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1528 = 0;
	int iLocal_1529 = 0;
	int iLocal_1530 = 0;
	int iLocal_1531 = 0;
	int iLocal_1532 = 0;
	int iLocal_1533 = 0;
	int iLocal_1534 = 0;
	int iLocal_1535[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_1551 = { 0, 0, 0 } ;
	struct<3> Local_1554 = { 0, 0, 0 } ;
	float fLocal_1557 = 0f;
	float fLocal_1558 = 0f;
	char* sLocal_1559 = NULL;
	var uLocal_1560 = 16;
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
	struct<6> Local_1725 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_1731 = 0;
	var uLocal_1732 = 1092616192;
	var uLocal_1733 = 1101004800;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 3;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	int iLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754[17] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1772[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1780 = 0;
	var uLocal_1781[6] = { 0, 0, 0, 0, 0, 0 };
	char cLocal_1788[16] = "";
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	struct<2> Local_1792 = { 0, 0 } ;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	int iLocal_1796 = 0;
	int iLocal_1797 = 0;
	int iLocal_1798 = 0;
	int iLocal_1799 = 0;
	float fLocal_1800 = 0f;
	float fLocal_1801 = 0f;
	float fLocal_1802 = 0f;
	float fLocal_1803 = 0f;
	float fLocal_1804 = 0f;
	struct<3> Local_1805 = { 0, 0, 0 } ;
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
	iLocal_1477 = -1;
	fLocal_1800 = 0.5f;
	fLocal_1801 = 55f;
	fLocal_1802 = 67.4f;
	fLocal_1803 = -139f;
	fLocal_1804 = -119f;
	Local_1805 = { 63.40054f, 0f, -129.3897f };
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GlobalFunc_5695(PLAYER::PLAYER_PED_ID(), GlobalFunc_8315());
		GlobalFunc_10632();
		func_707();
		if (!iLocal_1469)
		{
			GlobalFunc_5738(0);
		}
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Global_85623 = 1;
		}
		func_703();
	}
	func_647();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!iLocal_1454)
		{
			if (func_645())
			{
				func_633();
			}
		}
		GlobalFunc_587();
		RECORDING::_0x208784099002BC30("M_DeadManWalking", 0);
		switch (iLocal_47)
		{
			case 0:
				func_630();
				break;
			
			case 1:
				func_622();
				break;
			
			case 3:
				func_621();
				break;
			
			case 4:
				func_615();
				break;
			
			case 5:
				func_559();
				break;
			
			case 6:
				func_557();
				break;
			
			case 8:
				func_328();
				break;
			
			case 10:
				func_322();
				break;
			
			case 11:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x1A2
{
	int iVar0;
	
	iVar0 = 0;
	func_320();
	SYSTEM::WAIT(0);
	func_319();
	switch (iLocal_1796)
	{
		case 0:
			func_312();
			break;
		
		case 1:
			func_288();
			break;
		
		case 2:
			func_287();
			break;
		
		case 3:
			func_278();
			break;
		
		case 4:
			STREAMING::REQUEST_MODEL(Local_1214[0 /*15*/].f_1);
			STREAMING::REQUEST_MODEL(Local_1214[1 /*15*/].f_1);
			STREAMING::REQUEST_MODEL(Local_760[0 /*28*/].f_1);
			STREAMING::REQUEST_MODEL(joaat("v_ilev_cor_windowsmash"));
			STREAMING::REQUEST_MODEL(Local_1405[0 /*24*/].f_2);
			STREAMING::REQUEST_ANIM_DICT("missfbi1");
			AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_01_DMW_02", 0);
			PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 3, 19, 0);
			PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 4, 0, 0);
			PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 5, 0, 0);
			PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 6, 0, 0);
			PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 7, 0, 0);
			PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 8, 0, 0);
			PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 9, 0, 0);
			PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 10, 0, 0);
			PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 11, 0, 0);
			GlobalFunc_7621(69, 1, 0, 1, 0);
			iLocal_1752 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(279.9322f, -1337.49f, 23.7419f, "v_coroner");
			while (!INTERIOR::IS_VALID_INTERIOR(iLocal_1752))
			{
				iLocal_1752 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(279.9322f, -1337.49f, 23.7419f, "v_coroner");
				SYSTEM::WAIT(0);
			}
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_1752);
			while (((((((!STREAMING::HAS_MODEL_LOADED(Local_1214[0 /*15*/].f_1) || !STREAMING::HAS_MODEL_LOADED(Local_1214[1 /*15*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_760[0 /*28*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(joaat("v_ilev_cor_windowsmash"))) || !STREAMING::HAS_MODEL_LOADED(Local_1405[0 /*24*/].f_2)) || !STREAMING::HAS_ANIM_DICT_LOADED("missfbi1")) || !AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_01_DMW_02", 0)) || !INTERIOR::IS_INTERIOR_READY(iLocal_1752))
			{
				SYSTEM::WAIT(0);
				GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
			}
			MISC::CLEAR_AREA(234.2708f, -1360.306f, 44.034f, 300f, 1, 0, 0, 0);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 239.4876f, -1360.436f, 38.5342f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 50.2059f);
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 3, 19, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 11, 0, 0, 0);
			func_158(PLAYER::PLAYER_PED_ID(), 1, 1, 1);
			func_156(PLAYER::PLAYER_PED_ID(), joaat("weapon_combatpistol"), 50);
			ENTITY::CREATE_MODEL_SWAP(236.03f, -1357.49f, 40.45f, 1f, joaat("v_ilev_cor_windowsolid"), joaat("v_ilev_cor_windowsmash"), 1);
			Local_1357 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(236.03f, -1357.49f, 40.45f, 1f, joaat("v_ilev_cor_windowsmash"), 1, 0, 1);
			if (ENTITY::DOES_ENTITY_EXIST(Local_1357))
			{
				Local_1357.f_23 = 1;
			}
			iVar0 = 0;
			while (iVar0 <= (Local_1214 - 1))
			{
				Local_1214[iVar0 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_1214[iVar0 /*15*/].f_1, Local_1214[iVar0 /*15*/].f_3, Local_1214[iVar0 /*15*/].f_6, 1, 1);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1214[iVar0 /*15*/], 7);
				iVar0++;
			}
			Local_1405[0 /*24*/] = OBJECT::CREATE_OBJECT(Local_1405[0 /*24*/].f_2, Local_1405[0 /*24*/].f_3, 1, 1, 0);
			ENTITY::SET_ENTITY_ROTATION(Local_1405[0 /*24*/], Local_1405[0 /*24*/].f_12, 2, 1);
			ENTITY::FREEZE_ENTITY_POSITION(Local_1405[0 /*24*/], 1);
			func_154(1);
			AUDIO::TRIGGER_MUSIC_EVENT("FBI1_SHOOTOUT_HALFWAY_RT");
			STREAMING::LOAD_SCENE(234.2708f, -1360.306f, 44.034f);
			func_149(1, 0, 0, 1);
			iLocal_1519 = 3;
			iLocal_1478 = 3;
			iLocal_1516 = 2;
			iLocal_1475 = 6;
			iLocal_47 = 5;
			break;
		
		case 5:
			func_88();
			break;
		
		case 6:
			func_2();
			break;
	}
}

void func_2()//Position - 0x5C0
{
	if (iLocal_1797)
	{
		GlobalFunc_5116(1612.071f, -1943.603f, 100.9448f, 153.72f, 1, 0);
	}
	STREAMING::REQUEST_MODEL(GlobalFunc_4917(0));
	STREAMING::REQUEST_MODEL(Local_1214[0 /*15*/].f_1);
	STREAMING::REQUEST_MODEL(Local_1245.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1245.f_1, 1);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 3, 19, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 4, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 5, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 6, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 7, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 8, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 9, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 10, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 11, 0, 0);
	if (iLocal_1797)
	{
		GlobalFunc_5108(0, -1, 1);
	}
	while (((!STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(0)) || !STREAMING::HAS_MODEL_LOADED(Local_1214[0 /*15*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1245.f_1)) || !PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID()))
	{
		SYSTEM::WAIT(0);
	}
	MISC::CLEAR_AREA(1612.071f, -1943.603f, 100.9448f, 1000f, 1, 0, 0, 0);
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1612.071f, -1943.603f, 100.9448f, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 153.7002f);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 3, 19, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 11, 0, 0, 0);
	func_158(PLAYER::PLAYER_PED_ID(), 1, 1, 1);
	GlobalFunc_173(&uLocal_1560, 0, PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
	Local_1214[0 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_1214[0 /*15*/].f_1, 1616.203f, -1933.765f, 100.745f, 65.3292f, 1, 1);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1214[0 /*15*/]);
	GlobalFunc_9756(&Local_1245, 1, Local_1245.f_3, Local_1245.f_6, 1, 2);
	CUTSCENE::REQUEST_CUTSCENE("FBI_1_EXT", 8);
	while (!CUTSCENE::HAS_CUTSCENE_LOADED())
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("michael", PLAYER::PLAYER_PED_ID(), 0);
		SYSTEM::WAIT(0);
	}
	if (!iLocal_1797)
	{
		STREAMING::NEW_LOAD_SCENE_START(1612.071f, -1943.603f, 100.9448f, GlobalFunc_590(0f, 0f, 153.7f), 100f, 0);
		while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			SYSTEM::WAIT(0);
		}
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	GlobalFunc_8380(1, 1, 1, 0);
	CUTSCENE::START_CUTSCENE(0);
	while (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		SYSTEM::WAIT(0);
	}
	GlobalFunc_9805(1629.403f, -1946.552f, 91.196f, 1571.303f, -1946.552f, 107.096f, 62.1f, 1616.203f, -1933.765f, 100.745f, 65.3292f, 15f, 15f, 15f, 1, 1, 1, 0, 0);
	func_3(1616.203f, -1933.765f, 100.745f, 65.3292f, 1);
	VEHICLE::SET_AMBIENT_VEHICLE_RANGE_MULTIPLIER_THIS_FRAME(2f);
	iLocal_1472 = MISC::GET_GAME_TIMER();
	iLocal_1482 = 5;
	iLocal_47 = 8;
	CAM::DO_SCREEN_FADE_IN(800);
}

void func_3(struct<3> Param0, float fParam3, bool bParam4)//Position - 0x8F5
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			if (bParam4)
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, 1, 1);
			}
			GlobalFunc_9622(iVar0, Param0, fParam3, 24, 0);
		}
	}
}





















































































void func_88()//Position - 0x7FCF
{
	int iVar0;
	
	iVar0 = 0;
	if (iLocal_1797)
	{
		GlobalFunc_5116(235.5931f, -1354.163f, 29.5508f, 34.39f, 1, 0);
	}
	STREAMING::REQUEST_MODEL(Local_1099.f_1);
	STREAMING::REQUEST_MODEL(Local_760[1 /*28*/].f_1);
	STREAMING::REQUEST_MODEL(Local_760[3 /*28*/].f_1);
	STREAMING::REQUEST_MODEL(Local_1214[0 /*15*/].f_1);
	STREAMING::REQUEST_MODEL(Local_1214[1 /*15*/].f_1);
	STREAMING::REQUEST_MODEL(Local_1183[0 /*15*/].f_1);
	STREAMING::REQUEST_MODEL(Local_1245.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1245.f_1, 1);
	STREAMING::REQUEST_MODEL(Local_1405[0 /*24*/].f_2);
	STREAMING::REQUEST_ANIM_DICT("MISSFBI1LEADINOUTFBI_1_EXT");
	STREAMING::REQUEST_ANIM_DICT("missfbi1");
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_1183[0 /*15*/].f_13, "lkfbi1");
	STREAMING::REQUEST_PTFX_ASSET();
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 3, 19, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 4, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 5, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 6, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 7, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 8, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 9, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 10, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 11, 0, 0);
	if (iLocal_1797)
	{
		GlobalFunc_5108(0, -1, 1);
	}
	while ((((((((((((!STREAMING::HAS_MODEL_LOADED(Local_1099.f_1) || !STREAMING::HAS_MODEL_LOADED(Local_760[1 /*28*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_760[3 /*28*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1214[0 /*15*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1214[1 /*15*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1183[0 /*15*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1245.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1405[0 /*24*/].f_2)) || !STREAMING::HAS_ANIM_DICT_LOADED("MISSFBI1LEADINOUTFBI_1_EXT")) || !STREAMING::HAS_ANIM_DICT_LOADED("missfbi1")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_1183[0 /*15*/].f_13, "lkfbi1")) || !STREAMING::HAS_PTFX_ASSET_LOADED()) || !PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID()))
	{
		SYSTEM::WAIT(0);
	}
	MISC::CLEAR_AREA(287.9576f, -1345.725f, 23.2416f, 300f, 1, 0, 0, 0);
	AUDIO::DISTANT_COP_CAR_SIRENS(1);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 235.5931f, -1354.163f, 29.5508f, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 34.391f);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 3, 19, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 11, 0, 0, 0);
	func_158(PLAYER::PLAYER_PED_ID(), 1, 1, 1);
	WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), 1);
	GlobalFunc_6789(PLAYER::PLAYER_PED_ID(), &Global_2544928, 1);
	GlobalFunc_173(&uLocal_1560, 0, PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
	Local_1405[0 /*24*/] = OBJECT::CREATE_OBJECT(Local_1405[0 /*24*/].f_2, Local_1405[0 /*24*/].f_3, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(Local_1405[0 /*24*/], Local_1405[0 /*24*/].f_12, 2, 1);
	ENTITY::FREEZE_ENTITY_POSITION(Local_1405[0 /*24*/], 1);
	iVar0 = 0;
	while (iVar0 <= (Local_1214 - 1))
	{
		Local_1214[iVar0 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_1214[iVar0 /*15*/].f_1, Local_1214[iVar0 /*15*/].f_3, Local_1214[iVar0 /*15*/].f_6, 1, 1);
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1214[iVar0 /*15*/]));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1214[iVar0 /*15*/].f_1);
		iVar0++;
	}
	if (!iLocal_1797)
	{
		STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
	}
	PLAYER::SET_MAX_WANTED_LEVEL(3);
	PED::SET_CREATE_RANDOM_COPS(0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.5f);
	PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
	PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
	GlobalFunc_574(281, 0);
	while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
	{
		SYSTEM::WAIT(0);
	}
	iLocal_1519 = 3;
	func_149(1, 0, 0, 1);
	AUDIO::TRIGGER_MUSIC_EVENT("FBI1_OUTSIDE_CORONERS_RT");
	AUDIO::START_AUDIO_SCENE("FBI_1_LOSE_COPS");
	GlobalFunc_164("LOSE_WANTED", 7500, 1);
	GlobalFunc_Checkpoint1(4, "outside coroners escape police", 1, 0, 0, 1);
	iLocal_47 = 8;
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
}





























































void func_149(bool bParam0, float fParam1, float fParam2, bool bParam3)//Position - 0xF130
{
	GlobalFunc_8380(0, 1, 1, 0);
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	GlobalFunc_5105();
	HUD::DISPLAY_HUD(1);
	HUD::DISPLAY_RADAR(1);
	CAM::SET_WIDESCREEN_BORDERS(0, 500);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		CAM::DESTROY_ALL_CAMS(0);
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam1);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam2, 1065353216);
		if (bParam0)
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
		PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(PLAYER::PLAYER_ID(), 1);
	}
	if (bParam3)
	{
		GlobalFunc_698();
	}
	else
	{
		GlobalFunc_626();
	}
	CAM::DO_SCREEN_FADE_IN(800);
}





void func_154(int iParam0)//Position - 0xF240
{
	if (!iLocal_1455)
	{
		if ((((iLocal_1459 && GlobalFunc_588(&iLocal_1471, 2000)) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 287.544f, -1354.412f, 23.247f, 294.497f, -1345.887f, 26.247f, 13.4f, 0, 1, 0)) || GlobalFunc_588(&uLocal_1511, 40000)) || iParam0)
		{
			if (AUDIO::PREPARE_ALARM("FBI_01_MORGUE_ALARMS"))
			{
				AUDIO::START_ALARM("FBI_01_MORGUE_ALARMS", 0);
				iLocal_1471 = MISC::GET_GAME_TIMER();
				iLocal_1455 = 1;
				AUDIO::TRIGGER_MUSIC_EVENT("FBI1_ALARM");
			}
		}
	}
}


void func_156(int iParam0, int iParam1, int iParam2)//Position - 0xF2F8
{
	int iVar0;
	
	iVar0 = GlobalFunc_2284(GlobalFunc_6674(iParam0));
	if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed"))
	{
		if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar0) < 10)
		{
			WEAPON::SET_PED_AMMO(iParam0, iVar0, 10);
		}
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iVar0, 1);
	}
	else if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, iParam1, 0))
	{
		WEAPON::GIVE_WEAPON_TO_PED(iParam0, iParam1, iParam2, 1, 1);
	}
	else if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iParam1) < iParam2)
	{
		WEAPON::SET_PED_AMMO(iParam0, iParam1, iParam2);
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iParam1, 1);
	}
}


void func_158(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xF3A9
{
	if (bParam1)
	{
		func_159(iParam0, 14, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (bParam2)
	{
		func_159(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (bParam3)
	{
		func_159(iParam0, 14, 2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
}

int func_159(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0xF3F9
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
				iVar5 = GlobalFunc_7150(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = GlobalFunc_7150(iParam0, 9);
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
							GlobalFunc_309(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8357(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_172(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_159(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
								iVar3 = func_172(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_159(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, iVar0, func_169(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_168(iParam0, iVar10, &iVar4, 1))
							{
								func_159(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_159(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
					func_159(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_159(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_159(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_159(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_159(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
			GlobalFunc_309(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8357(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_172(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_159(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		GlobalFunc_309(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		GlobalFunc_8357(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_172(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_159(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = func_172(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_159(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
		if (func_168(iParam0, iVar10, &iVar4, 0))
		{
			func_159(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (func_160(iParam0, iVar10, &iVar4))
		{
			func_159(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}

int func_160(int iParam0, int iParam1, int iParam2)//Position - 0xFBE6
{
	int iVar0;
	
	iVar0 = GlobalFunc_19(iParam1);
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_161(iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = -99;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_161(int iParam0, int iParam1, int iParam2)//Position - 0xFC72
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
				if (!func_161(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar21 = { GlobalFunc_7616(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_161(iParam0, 14, uVar21[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_68106[2 /*14*/] = { GlobalFunc_10828(iVar0, 14, iVar4) };
									if (Global_68106[2 /*14*/].f_12 == iVar3)
									{
										if (func_161(iParam0, 14, iVar4))
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
						iVar1 = GlobalFunc_7150(iParam0, iVar2);
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
			if (!func_161(iParam0, 14, uVar32[iVar31]))
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







int func_168(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1072C
{
	int iVar0;
	
	iVar0 = GlobalFunc_19(iParam1);
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_161(iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_59;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 = -99;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_169(int iParam0, int iParam1, int iParam2)//Position - 0x107C2
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
				if (func_161(iParam0, iParam1, iVar0))
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
				if (func_161(iParam0, iParam1, iVar1))
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
			return GlobalFunc_7150(iParam0, iParam1);
		}
	}
	return -99;
}



int func_172(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x10C1A
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
				iVar1 = GlobalFunc_7150(iParam0, 1);
				iVar0 = GlobalFunc_24(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = GlobalFunc_7150(iParam0, 2);
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
									if (!GlobalFunc_8056(iParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!GlobalFunc_8056(iParam0, 3, 135, 150))
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
									if (!GlobalFunc_8056(iParam0, 3, 209, 222))
									{
										iVar0 = GlobalFunc_11029(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!GlobalFunc_8056(iParam0, 3, 243, 258))
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
									if (!GlobalFunc_8056(iParam0, 3, 176, 191) && !GlobalFunc_8056(iParam0, 3, 227, 242))
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
								iVar4 = GlobalFunc_7150(iParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = GlobalFunc_7150(iParam0, 11);
								iVar5 = GlobalFunc_11156(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = GlobalFunc_7150(iParam0, 8);
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
								iVar7 = GlobalFunc_7150(iParam0, 8);
								iVar8 = GlobalFunc_7150(iParam0, 11);
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
								iVar9 = GlobalFunc_7150(iParam0, 11);
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










































































































void func_278()//Position - 0x2F6D7
{
	int iVar0;
	
	iVar0 = 0;
	if (iLocal_1797)
	{
		GlobalFunc_5116(248.6566f, -1366.236f, 23.5377f, 90.17f, 0, 0);
	}
	STREAMING::REQUEST_MODEL(Local_901[0 /*28*/].f_1);
	STREAMING::REQUEST_MODEL(Local_1042[0 /*28*/].f_1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(Local_1042[0 /*28*/].f_1, 1);
	STREAMING::REQUEST_MODEL(Local_1042[1 /*28*/].f_1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(Local_1042[1 /*28*/].f_1, 1);
	STREAMING::REQUEST_MODEL(Local_86[0 /*28*/].f_1);
	STREAMING::REQUEST_MODEL(Local_1308[0 /*24*/].f_2);
	STREAMING::REQUEST_MODEL(Local_1405[0 /*24*/].f_2);
	STREAMING::REQUEST_ANIM_DICT("missfbi1");
	AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_01_DMW_01", 0);
	AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_01_DMW_02", 0);
	STREAMING::REQUEST_PTFX_ASSET();
	GlobalFunc_7621(69, 1, 0, 1, 0);
	iLocal_1752 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(279.9322f, -1337.49f, 23.7419f, "v_coroner");
	while (!INTERIOR::IS_VALID_INTERIOR(iLocal_1752))
	{
		iLocal_1752 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(279.9322f, -1337.49f, 23.7419f, "v_coroner");
		SYSTEM::WAIT(0);
	}
	INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_1752);
	TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("coroner2");
	TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("coroner_stairs");
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 3, 19, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 4, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 5, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 6, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 7, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 8, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 9, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 10, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 11, 0, 0);
	PED::REQUEST_ACTION_MODE_ASSET("michael_ACTION");
	if (iLocal_1797)
	{
		GlobalFunc_5108(0, -1, 1);
	}
	while ((((((((((((!STREAMING::HAS_MODEL_LOADED(Local_901[0 /*28*/].f_1) || !STREAMING::HAS_MODEL_LOADED(Local_1042[0 /*28*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1042[1 /*28*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_86[0 /*28*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1405[0 /*24*/].f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_1308[0 /*24*/].f_2)) || !STREAMING::HAS_ANIM_DICT_LOADED("missfbi1")) || !AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_01_DMW_01", 0)) || !AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_01_DMW_02", 0)) || !STREAMING::HAS_PTFX_ASSET_LOADED()) || !INTERIOR::IS_INTERIOR_READY(iLocal_1752)) || !PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID())) || !PED::HAS_ACTION_MODE_ASSET_LOADED("michael_action"))
	{
		SYSTEM::WAIT(0);
	}
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_1535[8], -1f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1535[8], 4, 0, 1);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_1535[9], 1f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1535[9], 4, 0, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(278f, -1473.12f, 100f, 222.5f, -1243.38f, -100f, 0, 1, 1, 1);
	MISC::CLEAR_AREA(287.9576f, -1345.725f, 23.2416f, 300f, 1, 0, 0, 0);
	GRAPHICS::REMOVE_DECALS_IN_RANGE(287.9576f, -1345.725f, 23.2416f, 300f);
	func_286();
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 248.6566f, -1366.236f, 23.5377f, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 90.1748f);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 3, 19, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 11, 0, 0, 0);
	func_158(PLAYER::PLAYER_PED_ID(), 1, 1, 1);
	WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), 1);
	GlobalFunc_6789(PLAYER::PLAYER_PED_ID(), &Global_2544928, 1);
	func_156(PLAYER::PLAYER_PED_ID(), joaat("weapon_combatpistol"), 50);
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, 1);
	PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
	PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -633298724, 0, 0, 0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
	PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
	GlobalFunc_173(&uLocal_1560, 0, PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
	INTERIOR::FORCE_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1752, MISC::GET_HASH_KEY("CorridorBottom"));
	INTERIOR::FORCE_ROOM_FOR_GAME_VIEWPORT(iLocal_1752, MISC::GET_HASH_KEY("CorridorBottom"));
	func_285(&(Local_1042[0 /*28*/]));
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 3, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 11, 0, 0, 0);
	PED::_0x733C87D4CE22BEA2(Local_1042[0 /*28*/]);
	PED::SET_PED_CAN_RAGDOLL(Local_1042[0 /*28*/], 1);
	INTERIOR::_0x82EBB79E258FA2B7(Local_1042[0 /*28*/], INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(292.205f, -1345.025f, 24.57f, "V_Coroner"));
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1042[0 /*28*/], 1);
	Local_1551 = { 291.552f, -1345.871f, 24.57f };
	Local_1554 = { 0f, 0f, 147f };
	TASK::TASK_PLAY_ANIM_ADVANCED(Local_1042[0 /*28*/], "missfbi1", "cpr_pumpchest_idle", Local_1551, Local_1554, 1000f, -8f, -1, 2102280, 0.99f, 2, 0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1042[0 /*28*/], 0, 0);
	func_285(&(Local_1042[1 /*28*/]));
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 11, 0, 0, 0);
	PED::_0x733C87D4CE22BEA2(Local_1042[1 /*28*/]);
	PED::SET_PED_CAN_RAGDOLL(Local_1042[1 /*28*/], 1);
	INTERIOR::_0x82EBB79E258FA2B7(Local_1042[1 /*28*/], INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(297.302f, -1348.671f, 24.57f, "V_Coroner"));
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1042[1 /*28*/], 1);
	Local_1551 = { 296.702f, -1349.621f, 24.57f };
	Local_1554 = { 0f, 0f, 140f };
	TASK::TASK_PLAY_ANIM_ADVANCED(Local_1042[1 /*28*/], "missfbi1", "cpr_pumpchest_idle", Local_1551, Local_1554, 1000f, -8f, -1, 2102280, 0.99f, 2, 0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1042[1 /*28*/], 0, 0);
	func_282(&(Local_901[3 /*28*/]), 0);
	HUD::REMOVE_BLIP(&(Local_901[3 /*28*/].f_2));
	PED::SET_PED_CAN_BE_TARGETTED(Local_901[3 /*28*/], 0);
	GlobalFunc_173(&uLocal_1560, GlobalFunc_2020("D"), Local_901[3 /*28*/], "doctor1", 0, 1);
	TASK::TASK_COWER(Local_901[3 /*28*/], -1);
	iLocal_80[3] = 1;
	iVar0 = 1;
	while (iVar0 <= (Local_1308 - 1))
	{
		Local_1308[iVar0 /*24*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_1308[iVar0 /*24*/].f_2, Local_1308[iVar0 /*24*/].f_3, 1, 1, 0);
		ENTITY::SET_ENTITY_HEADING(Local_1308[iVar0 /*24*/], Local_1308[iVar0 /*24*/].f_18);
		if (iVar0 == 0)
		{
			INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_1308[iVar0 /*24*/], INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(277.2329f, -1336.357f, 24f, "V_coroner"), MISC::GET_HASH_KEY("AutopsySmall"));
		}
		else if (iVar0 == 1)
		{
			INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_1308[iVar0 /*24*/], INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(249f, -1372.3f, 39.5f, "V_coroner"), MISC::GET_HASH_KEY("topoff_mid"));
		}
		iVar0++;
	}
	Local_1405[0 /*24*/] = OBJECT::CREATE_OBJECT(Local_1405[0 /*24*/].f_2, Local_1405[0 /*24*/].f_3, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(Local_1405[0 /*24*/], Local_1405[0 /*24*/].f_12, 2, 1);
	ENTITY::FREEZE_ENTITY_POSITION(Local_1405[0 /*24*/], 1);
	SYSTEM::WAIT(0);
	while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
	{
		SYSTEM::WAIT(0);
	}
	uLocal_1753 = GlobalFunc_5104(236.4304f, -1357.755f, 38.5342f, 0);
	iLocal_1519 = 3;
	iLocal_1475 = 2;
	iLocal_1478 = 3;
	iLocal_1516 = 2;
	func_154(1);
	AUDIO::TRIGGER_MUSIC_EVENT("FBI1_SHOOTOUT_HALFWAY_RT");
	AUDIO::START_AUDIO_SCENE("FBI_1_ESCAPE_BASE_SCENE");
	func_149(0, 0f, 0f, 0);
	GlobalFunc_Checkpoint1(3, "half way through shootout", 0, 0, 0, 1);
	iLocal_47 = 5;
}




void func_282(var uParam0, bool bParam1)//Position - 0x3025B
{
	MISC::CLEAR_AREA(uParam0->f_11, 1.5f, 1, 0, 0, 0);
	if (!bParam1)
	{
		*uParam0 = PED::CREATE_PED(26, uParam0->f_1, uParam0->f_11, uParam0->f_17, 1, 1);
	}
	else
	{
		*uParam0 = PED::CREATE_PED(6, uParam0->f_1, uParam0->f_11, uParam0->f_17, 1, 1);
	}
	PED::SET_PED_RANDOM_COMPONENT_VARIATION(*uParam0, 0);
	PED::SET_PED_DIES_WHEN_INJURED(*uParam0, 1);
	PED::SET_PED_AS_ENEMY(*uParam0, 1);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam0, 1, 0);
	PED::SET_PED_KEEP_TASK(*uParam0, 1);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 132, 1);
	PED::SET_PED_MONEY(*uParam0, 0);
	WEAPON::GIVE_WEAPON_TO_PED(*uParam0, uParam0->f_23, -1, 1, 1);
	ENTITY::SET_ENTITY_HEALTH(*uParam0, uParam0->f_18);
	PED::SET_PED_MAX_HEALTH(*uParam0, uParam0->f_18);
	if (uParam0->f_20)
	{
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*uParam0, 1);
	}
	if (uParam0->f_21)
	{
		PED::ADD_ARMOUR_TO_PED(*uParam0, 100);
	}
	PED::SET_PED_NAME_DEBUG(*uParam0, &(uParam0->f_24));
	PED::SET_PED_SEEING_RANGE(*uParam0, 250f);
	PED::SET_PED_HEARING_RANGE(*uParam0, 250f);
	PED::SET_PED_ID_RANGE(*uParam0, 250f);
	PED::SET_PED_CAN_EVASIVE_DIVE(*uParam0, 1);
	func_284(uParam0, 1);
	PED::SET_PED_ACCURACY(*uParam0, uParam0->f_19);
	GlobalFunc_593(*uParam0, 0);
	uParam0->f_22 = 1;
}


void func_284(int iParam0, bool bParam1)//Position - 0x3041F
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1798, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_1798);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1799, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_1799);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_1799);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1798, iLocal_1799);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1799, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1799, iLocal_1798);
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam0, iLocal_1799);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 29, 1);
			PED::SET_PED_TARGET_LOSS_RESPONSE(*iParam0, 1);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*iParam0, 1, 0);
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

void func_285(var uParam0)//Position - 0x304DD
{
	MISC::CLEAR_AREA(uParam0->f_11, 4f, 1, 0, 0, 0);
	*uParam0 = PED::CREATE_PED(26, uParam0->f_1, uParam0->f_11, uParam0->f_17, 1, 1);
	ENTITY::SET_ENTITY_HEALTH(*uParam0, uParam0->f_18);
	PED::SET_PED_DIES_WHEN_INJURED(*uParam0, 0);
	PED::SET_PED_CAN_BE_TARGETTED(*uParam0, 0);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(*uParam0, 0);
	PED::SET_PED_CAN_EVASIVE_DIVE(*uParam0, 0);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam0, 0, 0);
	PED::SET_PED_KEEP_TASK(*uParam0, 1);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 132, 1);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 32, 0);
	PED::SET_PED_CAN_RAGDOLL(*uParam0, 0);
	WEAPON::GIVE_WEAPON_TO_PED(*uParam0, uParam0->f_23, -1, 0, 1);
	PED::SET_PED_SEEING_RANGE(*uParam0, 250f);
	PED::SET_PED_HEARING_RANGE(*uParam0, 250f);
	PED::SET_PED_ID_RANGE(*uParam0, 250f);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
}

void func_286()//Position - 0x3059F
{
	uLocal_1781[0] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_health_standard"), 262.471f, -1357.852f, 24.8703f, 0f, 0f, 63f, 0, -1, 2, 1, 0);
	INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(uLocal_1781[0], "Reception");
	uLocal_1781[1] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_health_standard"), 240.8327f, -1359.421f, 38.6342f, 0f, 0f, 27f, 0, -1, 2, 1, 0);
	INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(uLocal_1781[1], "topoff_right");
	uLocal_1781[2] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_health_standard"), 254.35f, -1342.04f, 24.61f, 0f, 0f, 50f, 0, -1, 2, 1, 0);
	INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(uLocal_1781[2], "AutopsyLargeA");
	uLocal_1781[3] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_health_standard"), 248.13f, -1355.14f, 24.62f, 90f, 0f, -40f, 0, -1, 2, 1, 0);
	INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(uLocal_1781[3], "AutopsyLargeB");
	uLocal_1781[4] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_health_standard"), 241.899f, -1364.692f, 24.9978f, 0f, 0f, -39.44f, 0, -1, 2, 1, 0);
	INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(uLocal_1781[4], "CorridorBottom");
	uLocal_1781[5] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_armour_standard"), 247.6937f, -1374.546f, 38.7342f, 0f, 0f, 20f, 0, -1, 2, 1, 0);
	INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(uLocal_1781[5], "topoff_mid");
}

void func_287()//Position - 0x306FB
{
	int iVar0;
	
	if (iLocal_1797)
	{
		GlobalFunc_5116(294.457f, -1351.791f, 23.5344f, 58.34f, 0, 0);
	}
	STREAMING::REQUEST_MODEL(Local_901[0 /*28*/].f_1);
	STREAMING::REQUEST_MODEL(Local_901[2 /*28*/].f_1);
	STREAMING::REQUEST_MODEL(Local_1042[0 /*28*/].f_1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(Local_1042[0 /*28*/].f_1, 1);
	STREAMING::REQUEST_MODEL(Local_1042[1 /*28*/].f_1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(Local_1042[1 /*28*/].f_1, 1);
	STREAMING::REQUEST_MODEL(Local_86[0 /*28*/].f_1);
	STREAMING::REQUEST_MODEL(Local_1405[0 /*24*/].f_2);
	STREAMING::REQUEST_MODEL(Local_1308[0 /*24*/].f_2);
	STREAMING::REQUEST_ANIM_DICT("missfbi1");
	STREAMING::REQUEST_ANIM_DICT("dead");
	AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_01_DMW_01", 0);
	AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_01_DMW_02", 0);
	STREAMING::REQUEST_PTFX_ASSET();
	GlobalFunc_7621(69, 1, 0, 1, 0);
	iLocal_1752 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(279.9322f, -1337.49f, 23.7419f, "v_coroner");
	while (!INTERIOR::IS_VALID_INTERIOR(iLocal_1752))
	{
		iLocal_1752 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(279.9322f, -1337.49f, 23.7419f, "v_coroner");
		SYSTEM::WAIT(0);
	}
	INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_1752);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 3, 19, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 4, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 5, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 6, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 7, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 8, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 9, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 10, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 11, 0, 0);
	TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("coroner2");
	TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("coroner_stairs");
	if (iLocal_1797)
	{
		GlobalFunc_5108(0, -1, 1);
	}
	while (((((((((((((!STREAMING::HAS_MODEL_LOADED(Local_901[0 /*28*/].f_1) || !STREAMING::HAS_MODEL_LOADED(Local_901[2 /*28*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1042[0 /*28*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1042[1 /*28*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_86[0 /*28*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1405[0 /*24*/].f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_1308[0 /*24*/].f_2)) || !STREAMING::HAS_ANIM_DICT_LOADED("missfbi1")) || !STREAMING::HAS_ANIM_DICT_LOADED("dead")) || !AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_01_DMW_01", 0)) || !AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_01_DMW_02", 0)) || !STREAMING::HAS_PTFX_ASSET_LOADED()) || !INTERIOR::IS_INTERIOR_READY(iLocal_1752)) || !PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID()))
	{
		SYSTEM::WAIT(0);
		GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
	}
	PED::ADD_SCENARIO_BLOCKING_AREA(278f, -1473.12f, 100f, 222.5f, -1243.38f, -100f, 0, 1, 1, 1);
	MISC::CLEAR_AREA(287.9576f, -1345.725f, 23.2416f, 300f, 1, 0, 0, 0);
	GRAPHICS::REMOVE_DECALS_IN_RANGE(287.9576f, -1345.725f, 23.2416f, 300f);
	func_286();
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 294.457f, -1351.791f, 23.5344f, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 58.341f);
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, 1);
	PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 3, 19, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 11, 0, 0, 0);
	func_158(PLAYER::PLAYER_PED_ID(), 1, 1, 1);
	GlobalFunc_173(&uLocal_1560, 0, PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
	INTERIOR::FORCE_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1752, MISC::GET_HASH_KEY("BodyStorage"));
	INTERIOR::FORCE_ROOM_FOR_GAME_VIEWPORT(iLocal_1752, MISC::GET_HASH_KEY("BodyStorage"));
	WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), 1);
	if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_combatpistol"), 0))
	{
		WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_combatpistol"), 50, 1, 1);
	}
	else
	{
		if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_combatpistol")) < 50)
		{
			WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), joaat("weapon_combatpistol"), 50);
		}
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_combatpistol"), 1);
	}
	iVar0 = 1;
	while (iVar0 <= (Local_1308 - 1))
	{
		Local_1308[iVar0 /*24*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_1308[iVar0 /*24*/].f_2, Local_1308[iVar0 /*24*/].f_3, 1, 1, 0);
		ENTITY::SET_ENTITY_HEADING(Local_1308[iVar0 /*24*/], Local_1308[iVar0 /*24*/].f_18);
		if (iVar0 == 0)
		{
			INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_1308[iVar0 /*24*/], INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(277.2329f, -1336.357f, 24f, "V_coroner"), MISC::GET_HASH_KEY("AutopsySmall"));
		}
		else if (iVar0 == 1)
		{
			INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_1308[iVar0 /*24*/], INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(249f, -1372.3f, 39.5f, "V_coroner"), MISC::GET_HASH_KEY("topoff_mid"));
		}
		iVar0++;
	}
	Local_1405[0 /*24*/] = OBJECT::CREATE_OBJECT(Local_1405[0 /*24*/].f_2, Local_1405[0 /*24*/].f_3, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(Local_1405[0 /*24*/], Local_1405[0 /*24*/].f_12, 2, 1);
	ENTITY::FREEZE_ENTITY_POSITION(Local_1405[0 /*24*/], 1);
	if (!iLocal_1797)
	{
		STREAMING::NEW_LOAD_SCENE_START(294.457f, -1351.791f, 23.5344f, GlobalFunc_590(0f, 0f, 58.34f), 8f, 0);
		while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			SYSTEM::WAIT(0);
		}
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	func_285(&(Local_1042[0 /*28*/]));
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 3, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 11, 0, 0, 0);
	PED::_0x733C87D4CE22BEA2(Local_1042[0 /*28*/]);
	PED::SET_PED_CAN_RAGDOLL(Local_1042[0 /*28*/], 1);
	INTERIOR::_0x82EBB79E258FA2B7(Local_1042[0 /*28*/], INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(292.205f, -1345.025f, 24.57f, "V_Coroner"));
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1042[0 /*28*/], 1);
	Local_1551 = { 291.552f, -1345.871f, 24.57f };
	Local_1554 = { 0f, 0f, 147f };
	TASK::TASK_PLAY_ANIM_ADVANCED(Local_1042[0 /*28*/], "missfbi1", "cpr_pumpchest_idle", Local_1551, Local_1554, 1000f, -8f, -1, 2102280, 0.99f, 2, 0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1042[0 /*28*/], 0, 0);
	func_285(&(Local_1042[1 /*28*/]));
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 11, 0, 0, 0);
	PED::_0x733C87D4CE22BEA2(Local_1042[1 /*28*/]);
	PED::SET_PED_CAN_RAGDOLL(Local_1042[1 /*28*/], 1);
	INTERIOR::_0x82EBB79E258FA2B7(Local_1042[1 /*28*/], INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(297.302f, -1348.671f, 24.57f, "V_Coroner"));
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1042[1 /*28*/], 1);
	Local_1551 = { 296.702f, -1349.621f, 24.57f };
	Local_1554 = { 0f, 0f, 140f };
	TASK::TASK_PLAY_ANIM_ADVANCED(Local_1042[1 /*28*/], "missfbi1", "cpr_pumpchest_idle", Local_1551, Local_1554, 1000f, -8f, -1, 2102280, 0.99f, 2, 0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1042[1 /*28*/], 0, 0);
	func_282(&(Local_901[1 /*28*/]), 0);
	PED::_0x733C87D4CE22BEA2(Local_901[1 /*28*/]);
	AUDIO::DISABLE_PED_PAIN_AUDIO(Local_901[1 /*28*/], 1);
	AUDIO::STOP_PED_SPEAKING(Local_901[1 /*28*/], 1);
	PED::SET_PED_COMPONENT_VARIATION(Local_901[1 /*28*/], 0, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_901[1 /*28*/], 3, 0, 1, 0);
	HUD::REMOVE_BLIP(&(Local_901[1 /*28*/].f_2));
	PED::SET_PED_CAN_RAGDOLL(Local_901[1 /*28*/], 1);
	TASK::TASK_PLAY_ANIM_ADVANCED(Local_901[1 /*28*/], "Dead", "dead_c", 278.835f, -1336.046f, 24.58f, 0f, 0f, 74f, 1000f, -8f, -1, 2102280, 0.99f, 2, 0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_901[1 /*28*/], 0, 0);
	PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
	iLocal_1478 = 3;
	uLocal_1753 = GlobalFunc_5104(236.4304f, -1357.755f, 38.5342f, 0);
	func_154(1);
	AUDIO::TRIGGER_MUSIC_EVENT("FBI1_SHOOTOUT_RT");
	AUDIO::START_AUDIO_SCENE("FBI_1_ESCAPE_BASE_SCENE");
	func_149(0, 0f, 0f, 0);
	GlobalFunc_Checkpoint1(2, "Start of shootout", 0, 0, 0, 1);
	iLocal_47 = 5;
}

void func_288()//Position - 0x31029
{
	int iVar0;
	
	if (iLocal_1797)
	{
		GlobalFunc_5116(279.0734f, -1337.076f, 23.5545f, 227.22f, 0, 0);
	}
	STREAMING::REQUEST_MODEL(Local_901[0 /*28*/].f_1);
	STREAMING::REQUEST_MODEL(Local_1042[0 /*28*/].f_1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(Local_1042[0 /*28*/].f_1, 1);
	STREAMING::REQUEST_MODEL(Local_1042[1 /*28*/].f_1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(Local_1042[1 /*28*/].f_1, 1);
	STREAMING::REQUEST_MODEL(Local_86[0 /*28*/].f_1);
	STREAMING::REQUEST_MODEL(Local_1308[0 /*24*/].f_2);
	STREAMING::REQUEST_MODEL(Local_1405[0 /*24*/].f_2);
	STREAMING::REQUEST_MODEL(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_combatpistol")));
	WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_combatpistol"), 31, 0);
	STREAMING::REQUEST_ANIM_DICT("missfbi1");
	STREAMING::REQUEST_ANIM_DICT("missfbi1ig_7");
	STREAMING::REQUEST_ANIM_DICT("dead");
	PED::REQUEST_STEALTH_MODE_ASSET("MICHAEL_ACTION");
	AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_01_DMW_01", 0);
	AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_01_DMW_02", 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 3, 19, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 4, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 5, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 6, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 7, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 8, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 9, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 10, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 11, 0, 0);
	STREAMING::REQUEST_PTFX_ASSET();
	GlobalFunc_7621(69, 1, 0, 1, 0);
	iLocal_1752 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(279.9322f, -1337.49f, 23.7419f, "v_coroner");
	while (!INTERIOR::IS_VALID_INTERIOR(iLocal_1752))
	{
		iLocal_1752 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(279.9322f, -1337.49f, 23.7419f, "v_coroner");
		SYSTEM::WAIT(0);
	}
	INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_1752);
	TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("coroner2");
	TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("coroner_stairs");
	if (iLocal_1797)
	{
		GlobalFunc_5108(0, -1, 1);
	}
	while ((((((((((((((((!STREAMING::HAS_MODEL_LOADED(Local_901[0 /*28*/].f_1) || !STREAMING::HAS_MODEL_LOADED(Local_1042[0 /*28*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1042[1 /*28*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_86[0 /*28*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1308[0 /*24*/].f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_1405[0 /*24*/].f_2)) || !STREAMING::HAS_MODEL_LOADED(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_combatpistol")))) || !WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_combatpistol"))) || !STREAMING::HAS_ANIM_DICT_LOADED("missfbi1")) || !STREAMING::HAS_ANIM_DICT_LOADED("missfbi1ig_7")) || !STREAMING::HAS_ANIM_DICT_LOADED("dead")) || !PED::HAS_STEALTH_MODE_ASSET_LOADED("michael_action")) || !AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_01_DMW_01", 0)) || !AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_01_DMW_02", 0)) || !PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID())) || !STREAMING::HAS_PTFX_ASSET_LOADED()) || !INTERIOR::IS_INTERIOR_READY(iLocal_1752))
	{
		SYSTEM::WAIT(0);
	}
	PED::ADD_SCENARIO_BLOCKING_AREA(278f, -1473.12f, 100f, 222.5f, -1243.38f, -100f, 0, 1, 1, 1);
	MISC::CLEAR_AREA(278.58f, -1336.61f, 23.68f, 1000f, 1, 0, 0, 0);
	GRAPHICS::REMOVE_DECALS_IN_RANGE(278.58f, -1336.61f, 23.68f, 1000f);
	func_286();
	WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), 1);
	GlobalFunc_601(4, 1);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 3, 19, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 11, 0, 0, 0);
	func_159(PLAYER::PLAYER_PED_ID(), 14, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 279.0734f, -1337.076f, 23.5545f, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 227.5366f);
	PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 1, 0);
	PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), 1110276645, 0, 0, 0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
	GlobalFunc_173(&uLocal_1560, 0, PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
	INTERIOR::FORCE_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1752, MISC::GET_HASH_KEY("AutopsySmall"));
	INTERIOR::FORCE_ROOM_FOR_GAME_VIEWPORT(iLocal_1752, MISC::GET_HASH_KEY("AutopsySmall"));
	func_282(&Local_1127, 0);
	Local_1127.f_2 = GlobalFunc_6797(Local_1127, 1, 145);
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_1127, joaat("weapon_combatpistol"), joaat("component_at_pi_flsh"));
	WEAPON::SET_CURRENT_PED_WEAPON(Local_1127, joaat("weapon_combatpistol"), 1);
	AUDIO::STOP_PED_SPEAKING(Local_1127, 1);
	GlobalFunc_173(&uLocal_1560, GlobalFunc_2020("6"), Local_1127, "CIA1", 0, 1);
	PED::FORCE_PED_MOTION_STATE(Local_1127, 1063765679, 1, 0, 0);
	func_289();
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1127, 0, 0);
	iVar0 = 0;
	while (iVar0 <= (Local_1308 - 1))
	{
		Local_1308[iVar0 /*24*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_1308[iVar0 /*24*/].f_2, Local_1308[iVar0 /*24*/].f_3, 1, 1, 0);
		ENTITY::SET_ENTITY_HEADING(Local_1308[iVar0 /*24*/], Local_1308[iVar0 /*24*/].f_18);
		if (iVar0 == 0)
		{
			INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_1308[iVar0 /*24*/], INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(277.2329f, -1336.357f, 24f, "V_coroner"), MISC::GET_HASH_KEY("AutopsySmall"));
		}
		else if (iVar0 == 1)
		{
			INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_1308[iVar0 /*24*/], INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(249f, -1372.3f, 39.5f, "V_coroner"), MISC::GET_HASH_KEY("topoff_mid"));
		}
		iVar0++;
	}
	Local_1405[0 /*24*/] = OBJECT::CREATE_OBJECT(Local_1405[0 /*24*/].f_2, Local_1405[0 /*24*/].f_3, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(Local_1405[0 /*24*/], Local_1405[0 /*24*/].f_12, 2, 1);
	ENTITY::FREEZE_ENTITY_POSITION(Local_1405[0 /*24*/], 1);
	func_285(&(Local_1042[0 /*28*/]));
	HUD::REMOVE_BLIP(&(Local_1042[0 /*28*/].f_2));
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 3, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 11, 0, 0, 0);
	PED::_0x733C87D4CE22BEA2(Local_1042[0 /*28*/]);
	PED::SET_PED_CAN_RAGDOLL(Local_1042[0 /*28*/], 1);
	INTERIOR::_0x82EBB79E258FA2B7(Local_1042[0 /*28*/], INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(292.205f, -1345.025f, 24.57f, "V_Coroner"));
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1042[0 /*28*/], 1);
	Local_1551 = { 291.552f, -1345.871f, 24.57f };
	Local_1554 = { 0f, 0f, 147f };
	TASK::TASK_PLAY_ANIM_ADVANCED(Local_1042[0 /*28*/], "missfbi1", "cpr_pumpchest_idle", Local_1551, Local_1554, 1000f, -8f, -1, 2102280, 0.99f, 2, 0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1042[0 /*28*/], 0, 0);
	func_285(&(Local_1042[1 /*28*/]));
	HUD::REMOVE_BLIP(&(Local_1042[1 /*28*/].f_2));
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 11, 0, 0, 0);
	PED::_0x733C87D4CE22BEA2(Local_1042[1 /*28*/]);
	PED::SET_PED_CAN_RAGDOLL(Local_1042[1 /*28*/], 1);
	INTERIOR::_0x82EBB79E258FA2B7(Local_1042[1 /*28*/], INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(297.302f, -1348.671f, 24.57f, "V_Coroner"));
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1042[1 /*28*/], 1);
	Local_1551 = { 296.702f, -1349.621f, 24.57f };
	Local_1554 = { 0f, 0f, 140f };
	TASK::TASK_PLAY_ANIM_ADVANCED(Local_1042[1 /*28*/], "missfbi1", "cpr_pumpchest_idle", Local_1551, Local_1554, 1000f, -8f, -1, 2102280, 0.99f, 2, 0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1042[1 /*28*/], 0, 0);
	func_282(&(Local_901[1 /*28*/]), 0);
	PED::_0x733C87D4CE22BEA2(Local_901[1 /*28*/]);
	AUDIO::DISABLE_PED_PAIN_AUDIO(Local_901[1 /*28*/], 1);
	AUDIO::STOP_PED_SPEAKING(Local_901[1 /*28*/], 1);
	PED::SET_PED_COMPONENT_VARIATION(Local_901[1 /*28*/], 0, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_901[1 /*28*/], 3, 0, 1, 0);
	HUD::REMOVE_BLIP(&(Local_901[1 /*28*/].f_2));
	PED::SET_PED_CAN_RAGDOLL(Local_901[1 /*28*/], 1);
	func_282(&(Local_901[4 /*28*/]), 0);
	HUD::REMOVE_BLIP(&(Local_901[4 /*28*/].f_2));
	PED::SET_PED_CAN_BE_TARGETTED(Local_901[4 /*28*/], 0);
	TASK::TASK_PLAY_ANIM_ADVANCED(Local_901[1 /*28*/], "Dead", "dead_c", 278.835f, -1336.046f, 24.58f, 0f, 0f, 74f, 1000f, -8f, -1, 2102280, 0.99f, 2, 0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_901[1 /*28*/], 0, 0);
	if (!iLocal_1797)
	{
		STREAMING::NEW_LOAD_SCENE_START(279.0734f, -1337.076f, 23.5545f, GlobalFunc_590(0f, 0f, 227.5366f), 8f, 0);
		while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			SYSTEM::WAIT(0);
		}
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	AUDIO::TRIGGER_MUSIC_EVENT("FBI1_WAKE_UP_RT");
	AUDIO::START_AUDIO_SCENE("FBI_1_STEALTH_KILL_AGENT");
	func_149(0, 0f, 0f, 0);
	iLocal_47 = 3;
	GlobalFunc_Checkpoint1(1, "stealth the cia guard", 0, 0, 0, 1);
}

void func_289()//Position - 0x319D2
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!PED::IS_PED_INJURED(Local_1127))
	{
		PED::SET_PED_RESET_FLAG(Local_1127, 258, 1);
		if (iLocal_1517 < 22)
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1127, 0f, 0.5f, 0f) - ENTITY::GET_ENTITY_COORDS(Local_1127, 1) };
			Var3 = { ENTITY::GET_ENTITY_COORDS(Local_1127, 1) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (((((GlobalFunc_168(Var0, Var3) < 0f && PED::CAN_PED_SEE_HATED_PED(Local_1127, PLAYER::PLAYER_PED_ID())) || func_307(&Local_1127, &(Local_1127.f_18))) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1127)) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), Local_1127)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 283.228f, -1348.54f, 23.538f, 279.005f, -1344.71f, 26.538f, 2f, 0, 1, 0))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1127, 0);
				TASK::TASK_COMBAT_PED(Local_1127, PLAYER::PLAYER_PED_ID(), 0, 16);
				iLocal_1472 = MISC::GET_GAME_TIMER();
				iLocal_1517 = 22;
			}
		}
		switch (iLocal_1517)
		{
			case 0:
				TASK::OPEN_SEQUENCE_TASK(&uLocal_1750);
				TASK::TASK_PLAY_ANIM(0, "missfbi1ig_7", "idle_a", 4f, -1056964608, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, "missfbi1ig_7", "idle_b", 8f, -1056964608, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, "missfbi1ig_7", "idle_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_1750);
				TASK::TASK_PERFORM_SEQUENCE(Local_1127, uLocal_1750);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1750);
				iLocal_1517++;
				break;
			
			case 1:
				if (func_306(Local_1127, 242628503, -2))
				{
					PED::FORCE_PED_MOTION_STATE(Local_1127, 1063765679, 0, 0, 0);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_1750);
					TASK::TASK_AIM_GUN_AT_COORD(0, 296.9f, -1352.5f, 24f, 4000, 1, 0);
					TASK::TASK_AIM_GUN_AT_COORD(0, 296.3f, -1348.3f, 25f, 4000, 0, 0);
					TASK::TASK_AIM_GUN_AT_COORD(0, 296.9f, -1352.5f, 24f, 4000, 0, 0);
					TASK::TASK_AIM_GUN_AT_COORD(0, 296.3f, -1348.3f, 25f, 4000, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_1750);
					TASK::TASK_PERFORM_SEQUENCE(Local_1127, uLocal_1750);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_1750);
					iLocal_1517++;
				}
				break;
			
			case 2:
				if (func_306(Local_1127, 242628503, -2))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_1750);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 288.0984f, -1346.547f, 23.53782f, 285.4f, -1352f, 25f, 1f, 0, 0.1f, 0.1f, 1, 1, 0, -957453492);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 286.7805f, -1348.758f, 23.5377f, 285.4f, -1352f, 25f, 1f, 0, 0.1f, 0.1f, 1, 512, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, 284.2f, -1351.1f, 24f, 1500, 0, 0);
					TASK::TASK_AIM_GUN_AT_COORD(0, 284.1f, -1351.8f, 25.7f, 2000, 0, 0);
					TASK::TASK_AIM_GUN_AT_COORD(0, 286.9f, -1352f, 25f, 2000, 0, 0);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 290.8698f, -1348.45f, 23.53797f, 295.6f, -1352.3f, 25f, 1f, 0, 0.5f, 4f, 1, 0, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, 295.6f, -1352.3f, 25f, 4000, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_1750);
					TASK::TASK_PERFORM_SEQUENCE(Local_1127, uLocal_1750);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_1750);
					iLocal_1517++;
				}
				break;
			
			case 3:
				if (!PED::IS_PED_FACING_PED(Local_1127, PLAYER::PLAYER_PED_ID(), 35f) || !func_305(&Local_1127, ENTITY::GET_ENTITY_COORDS(Local_1127, 1), 1f, 1f, 1.6f))
				{
					if (func_306(Local_1127, 242628503, -2))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_1750);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1f, 0, 0.1f, 0.1f, 1, 512, 0, -957453492);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_1750);
						TASK::TASK_PERFORM_SEQUENCE(Local_1127, uLocal_1750);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_1750);
					}
				}
				break;
			
			case 22:
				PED::SET_PED_RESET_FLAG(Local_1127, 187, 1);
				if (GlobalFunc_588(&iLocal_1472, 1500))
				{
					AUDIO::STOP_PED_SPEAKING(Local_1127, 0);
					iLocal_1517++;
				}
				break;
			
			case 23:
				PED::SET_PED_RESET_FLAG(Local_1127, 187, 1);
				break;
		}
		func_290();
	}
}

void func_290()//Position - 0x31E47
{
	switch (iLocal_1518)
	{
		case 0:
			if (GlobalFunc_10618(&uLocal_1560, "FBI1AUD", "fbi1_look", 7, 0, 0, 0))
			{
				iLocal_1518++;
			}
			break;
		
		case 1:
			if (!GlobalFunc_5172(&Local_1725, 0))
			{
				iLocal_1518++;
			}
			break;
		
		case 2:
			if (GlobalFunc_588(&iLocal_1472, 7000))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1127, 1), 1) < 25f)
				{
					if (!GlobalFunc_5172(&Local_1725, 0))
					{
						if (GlobalFunc_10618(&uLocal_1560, "FBI1AUD", "fbi1_look", 7, 0, 0, 0))
						{
							iLocal_1472 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
			break;
	}
}















int func_305(int iParam0, struct<3> Param1, struct<3> Param4)//Position - 0x32606
{
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(*iParam0, Param1, Param4, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_306(int iParam0, int iParam1, int iParam2)//Position - 0x32633
{
	int iVar0;
	
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1);
	if ((iVar0 == 7 || iVar0 == 2) || TASK::GET_SEQUENCE_PROGRESS(iParam0) == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_307(int iParam0, var uParam1)//Position - 0x3266A
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(*iParam0);
			if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, PLAYER::PLAYER_PED_ID(), 1) || iVar0 < *uParam1) || PED::IS_PED_RESPONDING_TO_EVENT(*iParam0, 17))
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





void func_312()//Position - 0x327FF
{
	if (iLocal_1797)
	{
		GlobalFunc_5116(280.645f, -1335.833f, 24.5f, -138f, 0, 0);
	}
	STREAMING::REQUEST_MODEL(Local_901[0 /*28*/].f_1);
	STREAMING::REQUEST_MODEL(Local_901[2 /*28*/].f_1);
	STREAMING::REQUEST_MODEL(Local_1042[0 /*28*/].f_1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(Local_1042[0 /*28*/].f_1, 1);
	STREAMING::REQUEST_MODEL(Local_1042[1 /*28*/].f_1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(Local_1042[1 /*28*/].f_1, 1);
	STREAMING::REQUEST_MODEL(Local_86[0 /*28*/].f_1);
	STREAMING::REQUEST_MODEL(Local_1260.f_2);
	STREAMING::REQUEST_MODEL(Local_1284.f_2);
	STREAMING::REQUEST_MODEL(Local_1381.f_2);
	STREAMING::REQUEST_MODEL(Local_1308[0 /*24*/].f_2);
	STREAMING::REQUEST_MODEL(Local_1405[0 /*24*/].f_2);
	STREAMING::REQUEST_MODEL(WEAPON::GET_WEAPONTYPE_MODEL(Local_1127.f_23));
	WEAPON::REQUEST_WEAPON_ASSET(Local_1127.f_23, 31, 1);
	STREAMING::REQUEST_ANIM_DICT("missfbi1");
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("fbi1", 0);
	AUDIO::PREPARE_ALARM("FBI_01_MORGUE_ALARMS");
	AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_01_DMW_01", 0);
	AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_01_DMW_02", 0);
	AUDIO::REQUEST_AMBIENT_AUDIO_BANK("FBI_01_DMW_Autopsy_1", 0);
	AUDIO::LOAD_STREAM("FIB1_MORGUE_AMBIENCE_master", 0);
	AUDIO::PREPARE_MUSIC_EVENT("FBI1_WAKE_UP");
	GlobalFunc_7621(69, 1, 0, 1, 0);
	iLocal_1752 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(279.9322f, -1337.49f, 23.7419f, "v_coroner");
	while (!INTERIOR::IS_VALID_INTERIOR(iLocal_1752))
	{
		iLocal_1752 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(279.9322f, -1337.49f, 23.7419f, "v_coroner");
		SYSTEM::WAIT(0);
	}
	INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_1752);
	STREAMING::REQUEST_PTFX_ASSET();
	TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("coroner2");
	TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("coroner_stairs");
	if (iLocal_1797)
	{
		GlobalFunc_5108(0, -1, 1);
	}
	while (((((((((((((((((((((!STREAMING::HAS_MODEL_LOADED(Local_901[0 /*28*/].f_1) || !STREAMING::HAS_MODEL_LOADED(Local_901[2 /*28*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1042[0 /*28*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1042[1 /*28*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_86[0 /*28*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1260.f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_1284.f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_1381.f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_1308[0 /*24*/].f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_1405[0 /*24*/].f_2)) || !STREAMING::HAS_MODEL_LOADED(WEAPON::GET_WEAPONTYPE_MODEL(Local_1127.f_23))) || !WEAPON::HAS_WEAPON_ASSET_LOADED(Local_1127.f_23)) || !STREAMING::HAS_ANIM_DICT_LOADED("missfbi1")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("fbi1")) || !AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_01_DMW_01", 0)) || !AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_01_DMW_02", 0)) || !AUDIO::REQUEST_AMBIENT_AUDIO_BANK("script\FBI_01_DMW_Autopsy_1", 0)) || !AUDIO::LOAD_STREAM("FIB1_MORGUE_AMBIENCE_master", 0)) || !STREAMING::HAS_PTFX_ASSET_LOADED()) || !AUDIO::PREPARE_MUSIC_EVENT("FBI1_WAKE_UP")) || !INTERIOR::IS_INTERIOR_READY(iLocal_1752)) || !STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		SYSTEM::WAIT(0);
		GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
	}
	GlobalFunc_7632(1);
	PED::ADD_SCENARIO_BLOCKING_AREA(278f, -1473.12f, 100f, 222.5f, -1243.38f, -100f, 0, 1, 1, 1);
	MISC::CLEAR_AREA(287.9576f, -1345.725f, 23.2416f, 300f, 1, 0, 0, 0);
	GRAPHICS::REMOVE_DECALS_IN_RANGE(287.9576f, -1345.725f, 23.2416f, 300f);
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, 1);
	func_286();
	AUDIO::PLAY_STREAM_FRONTEND();
	func_313(1, 1, 0, 0, 0, 3000, 1);
	GlobalFunc_Checkpoint1(0, "Start of mission", 0, 0, 0, 1);
	iLocal_47 = 1;
}

void func_313(bool bParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, int iParam5, bool bParam6)//Position - 0x32B9A
{
	GlobalFunc_8380(0, 1, 1, 0);
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	GlobalFunc_5105();
	HUD::DISPLAY_HUD(1);
	HUD::DISPLAY_RADAR(1);
	CAM::SET_WIDESCREEN_BORDERS(0, 500);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		CAM::DESTROY_ALL_CAMS(0);
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
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
		PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(PLAYER::PLAYER_ID(), 1);
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






void func_319()//Position - 0x32E22
{
	iLocal_1535[0] = MISC::GET_HASH_KEY("fbi_1_door_0");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_1535[0], joaat("v_ilev_cor_doorglassa"), 283.59f, -1340.94f, 24.68f, 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_1535[0], -1.2f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1535[0], 4, 0, 1);
	iLocal_1535[1] = MISC::GET_HASH_KEY("fbi_1_door_1");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_1535[1], joaat("v_ilev_cor_doorglassb"), 281.93f, -1342.9f, 24.68f, 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_1535[1], 1.2f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1535[1], 4, 0, 1);
	iLocal_1535[2] = MISC::GET_HASH_KEY("fbi_1_door_2");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_1535[2], joaat("v_ilev_cor_doorglassb"), 287.23f, -1343.99f, 24.68f, 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_1535[2], 1f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1535[2], 4, 0, 1);
	iLocal_1535[3] = MISC::GET_HASH_KEY("fbi_1_door_3");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_1535[3], joaat("v_ilev_cor_doorglassa"), 285.57f, -1345.96f, 24.68f, 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_1535[3], -1f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1535[3], 4, 0, 1);
	iLocal_1535[4] = MISC::GET_HASH_KEY("fbi_1_door_4");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_1535[4], joaat("v_ilev_cor_doorglassb"), 265.77f, -1345.87f, 24.68f, 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_1535[4], 1f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1535[4], 3, 0, 1);
	iLocal_1535[5] = MISC::GET_HASH_KEY("fbi_1_door_5");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_1535[5], joaat("v_ilev_cor_doorglassa"), 267.42f, -1343.9f, 24.68f, 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_1535[5], -1.6f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1535[5], 4, 0, 1);
	iLocal_1535[6] = MISC::GET_HASH_KEY("fbi_1_door_6");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_1535[6], joaat("v_ilev_cor_firedoor"), 252.87f, -1366.76f, 24.55f, 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_1535[6], 0f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1535[6], 4, 0, 1);
	iLocal_1535[7] = MISC::GET_HASH_KEY("fbi_1_door_7");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_1535[7], joaat("v_ilev_cor_firedoor"), 251.1f, -1365.28f, 24.55f, 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_1535[7], 0f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1535[7], 4, 0, 1);
	iLocal_1535[8] = MISC::GET_HASH_KEY("fbi_1_door_8");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_1535[8], joaat("v_ilev_cor_doorlift01"), 248.86f, -1371.01f, 23.52f, 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_1535[8], 0f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1535[8], 4, 0, 1);
	iLocal_1535[9] = MISC::GET_HASH_KEY("fbi_1_door_9");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_1535[9], joaat("v_ilev_cor_doorlift02"), 247.58f, -1369.94f, 24.52f, 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_1535[9], 0f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1535[9], 4, 0, 1);
	iLocal_1535[10] = MISC::GET_HASH_KEY("fbi_1_door_10");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_1535[10], joaat("v_ilev_cor_firedoorwide"), 243.51f, -1367.83f, 29.66f, 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_1535[10], 0f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1535[10], 3, 0, 1);
	iLocal_1535[11] = MISC::GET_HASH_KEY("fbi_1_door_11");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_1535[11], joaat("v_ilev_cor_firedoor"), 251.1f, -1365.28f, 29.67f, 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_1535[11], 1f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1535[11], 4, 0, 1);
	iLocal_1535[12] = MISC::GET_HASH_KEY("fbi_1_door_12");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_1535[12], joaat("v_ilev_cor_firedoor"), 252.87f, -1366.76f, 29.67f, 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_1535[12], -1f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1535[12], 3, 0, 1);
	iLocal_1535[13] = MISC::GET_HASH_KEY("fbi_1_door_13");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_1535[13], joaat("v_ilev_cor_firedoor"), 252.87f, -1366.76f, 39.55f, 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_1535[13], -1.2f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1535[13], 4, 0, 1);
	iLocal_1535[14] = MISC::GET_HASH_KEY("fbi_1_door_14");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_1535[14], joaat("v_ilev_cor_firedoor"), 251.1f, -1365.28f, 39.55f, 1, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_1535[14], 1.2f, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1535[14], 4, 0, 1);
}

void func_320()//Position - 0x332A0
{
	int iVar0;
	
	iLocal_1454 = 0;
	iLocal_1455 = 0;
	bLocal_1456 = false;
	iLocal_1458 = 0;
	iLocal_1459 = 0;
	iLocal_1460 = 0;
	bLocal_1461 = false;
	bLocal_1462 = false;
	iLocal_1463 = 0;
	iLocal_1464 = 0;
	iLocal_1465 = 0;
	bLocal_1457 = false;
	iLocal_1466 = 0;
	iLocal_1467 = 0;
	iLocal_1468 = 0;
	iLocal_1470 = 0;
	iLocal_1473 = 0;
	iLocal_1474 = 0;
	iLocal_1475 = 0;
	iLocal_1476 = 0;
	iLocal_1477 = -1;
	iLocal_1478 = 0;
	iLocal_1482 = 0;
	iLocal_1509 = 0;
	iLocal_1510 = 0;
	iLocal_1513 = 0;
	iLocal_1514 = 0;
	iLocal_1515 = 0;
	iLocal_1516 = 0;
	iLocal_1517 = 0;
	iLocal_1518 = 0;
	iLocal_1519 = 0;
	iLocal_1520 = 0;
	iLocal_1521 = 0;
	iLocal_1528 = 0;
	iLocal_1529 = 0;
	iLocal_1530 = 0;
	iLocal_1531 = 0;
	iLocal_1532 = 0;
	iLocal_1533 = 0;
	iLocal_1534 = 0;
	fLocal_1557 = 0f;
	fLocal_1558 = 0f;
	StringCopy(&cLocal_1788, "", 16);
	StringCopy(&Local_1792, "", 16);
	func_321();
	uLocal_1483 = AUDIO::GET_SOUND_ID();
	uLocal_1484 = AUDIO::GET_SOUND_ID();
	Local_1260.f_2 = joaat("p_cs_clipboard");
	Local_1284.f_2 = joaat("prop_pencil_01");
	Local_1381.f_2 = joaat("prop_bonesaw");
	Local_1308[0 /*24*/].f_2 = joaat("prop_ld_rub_binbag_01");
	Local_1308[0 /*24*/].f_3 = { 274.7f, -1375.76f, 23.81f };
	Local_1308[0 /*24*/].f_18 = 0f;
	Local_1308[1 /*24*/].f_2 = joaat("prop_ld_rub_binbag_01");
	Local_1308[1 /*24*/].f_3 = { 249.2f, -1375.408f, 38.81f };
	Local_1308[1 /*24*/].f_18 = 0f;
	Local_1405[0 /*24*/].f_2 = joaat("prop_bin_14b");
	Local_1405[0 /*24*/].f_3 = { 233.89f, -1355.93f, 29.56f };
	Local_1405[0 /*24*/].f_12 = { 0f, 0f, 318.07f };
	Local_901[0 /*28*/].f_1 = joaat("s_m_y_autopsy_01");
	Local_901[0 /*28*/].f_11 = { 278.6999f, -1337.546f, 23.261f };
	Local_901[0 /*28*/].f_17 = 328f;
	Local_901[0 /*28*/].f_23 = joaat("weapon_unarmed");
	Local_901[0 /*28*/].f_18 = 200;
	StringCopy(&(Local_901[0 /*28*/].f_24), "doctor 0", 16);
	Local_901[1 /*28*/].f_1 = joaat("s_m_y_autopsy_01");
	Local_901[1 /*28*/].f_11 = { 280.0447f, -1336.337f, 23.2419f };
	Local_901[1 /*28*/].f_17 = 148.5733f;
	Local_901[1 /*28*/].f_23 = joaat("weapon_unarmed");
	Local_901[1 /*28*/].f_18 = 200;
	StringCopy(&(Local_901[1 /*28*/].f_24), "doctor 1", 16);
	Local_901[2 /*28*/].f_1 = joaat("s_m_y_autopsy_01");
	Local_901[2 /*28*/].f_11 = { 265.6501f, -1360.343f, 23.2419f };
	Local_901[2 /*28*/].f_17 = 5.1035f;
	Local_901[2 /*28*/].f_23 = joaat("weapon_unarmed");
	Local_901[2 /*28*/].f_18 = 150;
	StringCopy(&(Local_901[2 /*28*/].f_24), "doctor 2", 16);
	Local_901[3 /*28*/].f_1 = joaat("s_m_y_autopsy_01");
	Local_901[3 /*28*/].f_11 = { 261.4272f, -1354.815f, 23.2419f };
	Local_901[3 /*28*/].f_17 = 135.6336f;
	Local_901[3 /*28*/].f_14 = { 253.3714f, -1373.175f, 23.5377f };
	Local_901[3 /*28*/].f_23 = joaat("weapon_unarmed");
	Local_901[3 /*28*/].f_18 = 150;
	StringCopy(&(Local_901[3 /*28*/].f_24), "doctor 3", 16);
	Local_901[4 /*28*/].f_1 = joaat("s_m_y_autopsy_01");
	Local_901[4 /*28*/].f_11 = { 265.6501f, -1360.343f, 23.2419f };
	Local_901[4 /*28*/].f_17 = 5.1035f;
	Local_901[4 /*28*/].f_14 = { 265.6501f, -1360.343f, 23.2419f };
	Local_901[4 /*28*/].f_23 = joaat("weapon_unarmed");
	Local_901[4 /*28*/].f_18 = 150;
	StringCopy(&(Local_901[4 /*28*/].f_24), "doctor 4", 16);
	Local_1042[0 /*28*/].f_11 = { 292.205f, -1345.025f, 24.27f };
	Local_1042[0 /*28*/].f_17 = 142f;
	Local_1042[0 /*28*/].f_18 = 200;
	Local_1042[0 /*28*/].f_1 = joaat("u_f_y_corpse_01");
	Local_1042[0 /*28*/].f_23 = joaat("weapon_unarmed");
	Local_1042[1 /*28*/].f_11 = { 297.302f, -1348.671f, 24.27f };
	Local_1042[1 /*28*/].f_17 = 140f;
	Local_1042[1 /*28*/].f_18 = 200;
	Local_1042[1 /*28*/].f_1 = joaat("u_f_m_corpse_01");
	Local_1042[1 /*28*/].f_23 = joaat("weapon_unarmed");
	Local_1127.f_11 = { 284.5221f, -1343.067f, 23.538f };
	Local_1127.f_17 = 231.3517f;
	Local_1127.f_23 = joaat("weapon_combatpistol");
	Local_1127.f_1 = joaat("s_m_m_ciasec_01");
	Local_1127.f_18 = 200;
	Local_1127.f_19 = 5;
	StringCopy(&(Local_1127.f_24), "cia enemy 0", 16);
	iVar0 = 0;
	while (iVar0 <= (Local_86 - 1))
	{
		Local_86[iVar0 /*28*/].f_22 = 0;
		iLocal_48[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_563 - 1))
	{
		Local_563[iVar0 /*28*/].f_22 = 0;
		iLocal_66[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_74 - 1))
	{
		Local_760[iVar0 /*28*/].f_22 = 0;
		iLocal_74[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_901 - 1))
	{
		iLocal_80[iVar0] = 0;
		iVar0++;
	}
	Local_86[0 /*28*/].f_1 = joaat("s_m_m_ciasec_01");
	Local_86[0 /*28*/].f_23 = joaat("weapon_combatpistol");
	Local_86[0 /*28*/].f_11 = { 269.8f, -1344.5f, 23.538f };
	Local_86[0 /*28*/].f_14 = { 272.1514f, -1343.914f, 23.53772f };
	Local_86[0 /*28*/].f_17 = 314.0738f;
	Local_86[0 /*28*/].f_18 = 200;
	Local_86[0 /*28*/].f_19 = 5;
	StringCopy(&(Local_86[0 /*28*/].f_24), "cia enemy 0", 16);
	Local_86[1 /*28*/].f_1 = joaat("s_m_m_ciasec_01");
	Local_86[1 /*28*/].f_23 = joaat("weapon_combatpistol");
	Local_86[1 /*28*/].f_11 = { 264.3177f, -1339.174f, 23.538f };
	Local_86[1 /*28*/].f_17 = 223.5415f;
	Local_86[1 /*28*/].f_14 = { 271.223f, -1342.765f, 23.538f };
	Local_86[1 /*28*/].f_18 = 150;
	Local_86[1 /*28*/].f_19 = 5;
	StringCopy(&(Local_86[1 /*28*/].f_24), "cia enemy 1", 16);
	Local_86[2 /*28*/].f_1 = joaat("s_m_m_ciasec_01");
	Local_86[2 /*28*/].f_23 = joaat("weapon_combatpistol");
	Local_86[2 /*28*/].f_11 = { 265.7096f, -1354.011f, 23.2419f };
	Local_86[2 /*28*/].f_17 = 316.8201f;
	Local_86[2 /*28*/].f_14 = { 260.8433f, -1353.216f, 23.2419f };
	Local_86[2 /*28*/].f_18 = 200;
	Local_86[2 /*28*/].f_19 = 5;
	StringCopy(&(Local_86[2 /*28*/].f_24), "cia enemy 2", 16);
	Local_86[3 /*28*/].f_1 = joaat("s_m_m_ciasec_01");
	Local_86[3 /*28*/].f_23 = joaat("weapon_pumpshotgun");
	Local_86[3 /*28*/].f_11 = { 265.5608f, -1354.871f, 23.538f };
	Local_86[3 /*28*/].f_17 = 349.8424f;
	Local_86[3 /*28*/].f_14 = { 269.4462f, -1345.055f, 23.538f };
	Local_86[3 /*28*/].f_18 = 200;
	Local_86[3 /*28*/].f_19 = 5;
	StringCopy(&(Local_86[3 /*28*/].f_24), "cia enemy 3", 16);
	Local_86[4 /*28*/].f_1 = joaat("s_m_m_ciasec_01");
	Local_86[4 /*28*/].f_23 = joaat("weapon_combatpistol");
	Local_86[4 /*28*/].f_11 = { 263.1902f, -1359.312f, 23.2419f };
	Local_86[4 /*28*/].f_17 = 351.5096f;
	Local_86[4 /*28*/].f_14 = { 263.1902f, -1359.312f, 23.5377f };
	Local_86[4 /*28*/].f_18 = 125;
	Local_86[4 /*28*/].f_19 = 5;
	StringCopy(&(Local_86[4 /*28*/].f_24), "cia enemy 4", 16);
	Local_86[5 /*28*/].f_1 = joaat("s_m_m_ciasec_01");
	Local_86[5 /*28*/].f_23 = joaat("weapon_combatpistol");
	Local_86[5 /*28*/].f_11 = { 249.5796f, -1365.968f, 23.2392f };
	Local_86[5 /*28*/].f_17 = 222.9028f;
	Local_86[5 /*28*/].f_14 = { 255.7347f, -1363.134f, 23.2419f };
	Local_86[5 /*28*/].f_18 = 200;
	Local_86[5 /*28*/].f_19 = 5;
	StringCopy(&(Local_86[5 /*28*/].f_24), "cia enemy 5", 16);
	Local_86[6 /*28*/].f_1 = joaat("s_m_m_ciasec_01");
	Local_86[6 /*28*/].f_23 = joaat("weapon_pumpshotgun");
	Local_86[6 /*28*/].f_11 = { 253.0823f, -1356.303f, 23.2419f };
	Local_86[6 /*28*/].f_17 = 182.8046f;
	Local_86[6 /*28*/].f_14 = { 258.29f, -1361.33f, 23.24f };
	Local_86[6 /*28*/].f_18 = 200;
	Local_86[6 /*28*/].f_19 = 5;
	StringCopy(&(Local_86[6 /*28*/].f_24), "cia enemy 6", 16);
	Local_86[7 /*28*/].f_1 = joaat("s_m_m_ciasec_01");
	Local_86[7 /*28*/].f_23 = joaat("weapon_combatpistol");
	Local_86[7 /*28*/].f_11 = { 261.515f, -1348.826f, 23.2419f };
	Local_86[7 /*28*/].f_17 = 34.0855f;
	Local_86[7 /*28*/].f_14 = { 254.9045f, -1344.027f, 23.2419f };
	Local_86[7 /*28*/].f_18 = 200;
	Local_86[7 /*28*/].f_19 = 5;
	StringCopy(&(Local_86[7 /*28*/].f_24), "cia enemy 7", 16);
	Local_86[7 /*28*/].f_22 = 1;
	Local_86[8 /*28*/].f_1 = joaat("s_m_m_ciasec_01");
	Local_86[8 /*28*/].f_23 = joaat("weapon_combatpistol");
	Local_86[8 /*28*/].f_11 = { 255.673f, -1354.582f, 23.2419f };
	Local_86[8 /*28*/].f_17 = 213.8065f;
	Local_86[8 /*28*/].f_14 = { 250.03f, -1350.03f, 24.25f };
	Local_86[8 /*28*/].f_18 = 200;
	Local_86[8 /*28*/].f_19 = 5;
	StringCopy(&(Local_86[8 /*28*/].f_24), "cia enemy 8", 16);
	Local_86[9 /*28*/].f_1 = joaat("s_m_m_ciasec_01");
	Local_86[9 /*28*/].f_23 = joaat("weapon_smg");
	Local_86[9 /*28*/].f_11 = { 247.1438f, -1371.696f, 23.2391f };
	Local_86[9 /*28*/].f_17 = 322.0567f;
	Local_86[9 /*28*/].f_14 = { 248.4301f, -1366.539f, 23.5377f };
	Local_86[9 /*28*/].f_18 = 200;
	Local_86[9 /*28*/].f_19 = 5;
	StringCopy(&(Local_86[9 /*28*/].f_24), "cia enemy 9", 16);
	Local_86[10 /*28*/].f_1 = joaat("s_m_m_ciasec_01");
	Local_86[10 /*28*/].f_23 = joaat("weapon_combatpistol");
	Local_86[10 /*28*/].f_11 = { 248.9279f, -1366.297f, 23.538f };
	Local_86[10 /*28*/].f_17 = 312.8393f;
	Local_86[10 /*28*/].f_14 = { 265.0469f, -1350.674f, 23.538f };
	Local_86[10 /*28*/].f_18 = 200;
	Local_86[10 /*28*/].f_19 = 5;
	StringCopy(&(Local_86[10 /*28*/].f_24), "cia enemy 10", 16);
	Local_86[11 /*28*/].f_1 = joaat("s_m_m_ciasec_01");
	Local_86[11 /*28*/].f_23 = joaat("weapon_combatpistol");
	Local_86[11 /*28*/].f_11 = { 244.5939f, -1365.707f, 28.3555f };
	Local_86[11 /*28*/].f_17 = 143.0724f;
	Local_86[11 /*28*/].f_14 = { 241.339f, -1369.866f, 28.3555f };
	Local_86[11 /*28*/].f_18 = 200;
	Local_86[11 /*28*/].f_19 = 5;
	StringCopy(&(Local_86[11 /*28*/].f_24), "cia enemy 11", 16);
	Local_86[12 /*28*/].f_1 = joaat("s_m_m_ciasec_01");
	Local_86[12 /*28*/].f_23 = joaat("weapon_combatpistol");
	Local_86[12 /*28*/].f_11 = { 256.1583f, -1357.664f, 36.0631f };
	Local_86[12 /*28*/].f_17 = 227f;
	Local_86[12 /*28*/].f_14 = { 251.7f, -1362.8f, 33.2999f };
	Local_86[12 /*28*/].f_18 = 200;
	Local_86[12 /*28*/].f_19 = 5;
	StringCopy(&(Local_86[12 /*28*/].f_24), "cia enemy 12", 16);
	Local_86[13 /*28*/].f_1 = joaat("s_m_m_ciasec_01");
	Local_86[13 /*28*/].f_23 = joaat("weapon_combatpistol");
	Local_86[13 /*28*/].f_11 = { 258.8216f, -1361.405f, 31.1218f };
	Local_86[13 /*28*/].f_17 = 169.2f;
	Local_86[13 /*28*/].f_14 = { 250.1255f, -1366.659f, 28.6482f };
	Local_86[13 /*28*/].f_18 = 200;
	Local_86[13 /*28*/].f_19 = 5;
	StringCopy(&(Local_86[13 /*28*/].f_24), "cia enemy 13", 16);
	Local_86[14 /*28*/].f_1 = joaat("s_m_m_ciasec_01");
	Local_86[14 /*28*/].f_23 = joaat("weapon_smg");
	Local_86[14 /*28*/].f_11 = { 248.9279f, -1366.297f, 23.538f };
	Local_86[14 /*28*/].f_17 = 312.8393f;
	Local_86[14 /*28*/].f_14 = { 258.1613f, -1360.382f, 23.538f };
	Local_86[14 /*28*/].f_18 = 200;
	Local_86[14 /*28*/].f_19 = 5;
	StringCopy(&(Local_86[14 /*28*/].f_24), "cia enemy 14", 16);
	Local_86[15 /*28*/].f_1 = joaat("s_m_m_ciasec_01");
	Local_86[15 /*28*/].f_23 = joaat("weapon_combatpistol");
	Local_86[15 /*28*/].f_11 = { 266.8378f, -1345.473f, 23.53782f };
	Local_86[15 /*28*/].f_17 = 315.5344f;
	Local_86[15 /*28*/].f_14 = { 284.2f, -1344.524f, 23.5344f };
	Local_86[15 /*28*/].f_18 = 200;
	Local_86[15 /*28*/].f_19 = 5;
	StringCopy(&(Local_86[15 /*28*/].f_24), "cia enemy 15", 16);
	Local_86[16 /*28*/].f_1 = joaat("s_m_m_ciasec_01");
	Local_86[16 /*28*/].f_23 = joaat("weapon_combatpistol");
	Local_86[16 /*28*/].f_11 = { 274.4696f, -1341.797f, 23.2416f };
	Local_86[16 /*28*/].f_17 = 229.5128f;
	Local_86[16 /*28*/].f_14 = { 279.2521f, -1344.341f, 23.5344f };
	Local_86[16 /*28*/].f_18 = 200;
	Local_86[16 /*28*/].f_19 = 5;
	StringCopy(&(Local_86[16 /*28*/].f_24), "cia enemy 16", 16);
	Local_86[16 /*28*/].f_22 = 1;
	Local_563[0 /*28*/].f_1 = joaat("s_m_m_ciasec_01");
	Local_563[0 /*28*/].f_23 = joaat("weapon_combatpistol");
	Local_563[0 /*28*/].f_11 = { 242.2337f, -1367.52f, 38.5343f };
	Local_563[0 /*28*/].f_17 = 332f;
	Local_563[0 /*28*/].f_14 = { 242.5351f, -1374.246f, 38.5343f };
	Local_563[0 /*28*/].f_18 = 200;
	Local_563[0 /*28*/].f_19 = 5;
	StringCopy(&(Local_563[0 /*28*/].f_24), "top floor 0", 16);
	Local_563[1 /*28*/].f_1 = joaat("s_m_m_ciasec_01");
	Local_563[1 /*28*/].f_23 = joaat("weapon_combatpistol");
	Local_563[1 /*28*/].f_11 = { 236.2051f, -1369.011f, 38.5344f };
	Local_563[1 /*28*/].f_17 = 239.4541f;
	Local_563[1 /*28*/].f_14 = { 242.2337f, -1367.52f, 38.5343f };
	Local_563[1 /*28*/].f_18 = 200;
	Local_563[1 /*28*/].f_19 = 5;
	StringCopy(&(Local_563[1 /*28*/].f_24), "top floor 1", 16);
	Local_563[2 /*28*/].f_1 = joaat("s_m_m_ciasec_01");
	Local_563[2 /*28*/].f_23 = joaat("weapon_smg");
	Local_563[2 /*28*/].f_11 = { 239.4661f, -1379.319f, 38.5342f };
	Local_563[2 /*28*/].f_17 = 11.6926f;
	Local_563[2 /*28*/].f_14 = { 242.9099f, -1375.572f, 38.5342f };
	Local_563[2 /*28*/].f_18 = 200;
	Local_563[2 /*28*/].f_19 = 5;
	StringCopy(&(Local_563[2 /*28*/].f_24), "top floor 2", 16);
	Local_563[3 /*28*/].f_1 = joaat("s_m_m_ciasec_01");
	Local_563[3 /*28*/].f_23 = joaat("weapon_combatpistol");
	Local_563[3 /*28*/].f_11 = { 254.7773f, -1366.038f, 33.5921f };
	Local_563[3 /*28*/].f_17 = 323.0041f;
	Local_563[3 /*28*/].f_14 = { 246.0538f, -1364.669f, 38.5342f };
	Local_563[3 /*28*/].f_18 = 200;
	Local_563[3 /*28*/].f_19 = 5;
	StringCopy(&(Local_563[3 /*28*/].f_24), "top floor 3", 16);
	Local_563[4 /*28*/].f_1 = joaat("s_m_m_ciasec_01");
	Local_563[4 /*28*/].f_23 = joaat("weapon_combatpistol");
	Local_563[4 /*28*/].f_11 = { 252.0599f, -1362.642f, 33.5921f };
	Local_563[4 /*28*/].f_17 = 193.9636f;
	Local_563[4 /*28*/].f_14 = { 254.2647f, -1371.111f, 38.5342f };
	Local_563[4 /*28*/].f_18 = 200;
	Local_563[4 /*28*/].f_19 = 5;
	StringCopy(&(Local_563[4 /*28*/].f_24), "top floor 4", 16);
	Local_563[5 /*28*/].f_1 = joaat("s_m_m_ciasec_01");
	Local_563[5 /*28*/].f_23 = joaat("weapon_combatpistol");
	Local_563[5 /*28*/].f_11 = { 245.1608f, -1371.301f, 38.2413f };
	Local_563[5 /*28*/].f_17 = 252.777f;
	Local_563[5 /*28*/].f_14 = { 245.2636f, -1376.604f, 38.2673f };
	Local_563[5 /*28*/].f_18 = 200;
	Local_563[5 /*28*/].f_19 = 5;
	StringCopy(&(Local_563[5 /*28*/].f_24), "top floor 5", 16);
	Local_563[6 /*28*/].f_1 = joaat("s_m_m_ciasec_01");
	Local_563[6 /*28*/].f_23 = joaat("weapon_combatpistol");
	Local_563[6 /*28*/].f_11 = { 238.59f, -1368.96f, 38.24f };
	Local_563[6 /*28*/].f_17 = 50f;
	Local_563[6 /*28*/].f_14 = { 238.59f, -1368.96f, 38.24f };
	Local_563[6 /*28*/].f_18 = 200;
	Local_563[6 /*28*/].f_19 = 5;
	StringCopy(&(Local_563[6 /*28*/].f_24), "top floor 6", 16);
	Local_760[0 /*28*/].f_1 = joaat("s_m_m_ciasec_01");
	Local_760[0 /*28*/].f_23 = joaat("weapon_combatpistol");
	Local_760[0 /*28*/].f_11 = { 249.5792f, -1342.768f, 30.8178f };
	Local_760[0 /*28*/].f_17 = 114.22f;
	Local_760[0 /*28*/].f_14 = { 231.9526f, -1348.46f, 29.4711f };
	Local_760[0 /*28*/].f_18 = 200;
	Local_760[0 /*28*/].f_19 = 2;
	StringCopy(&(Local_760[0 /*28*/].f_24), "out 0", 16);
	Local_760[1 /*28*/].f_1 = joaat("s_m_m_ciasec_01");
	Local_760[1 /*28*/].f_23 = joaat("weapon_combatpistol");
	Local_760[1 /*28*/].f_11 = { 228.5237f, -1376.503f, 29.704f };
	Local_760[1 /*28*/].f_17 = 87.4471f;
	Local_760[1 /*28*/].f_14 = { 225.1319f, -1361.105f, 29.5114f };
	Local_760[1 /*28*/].f_18 = 200;
	Local_760[1 /*28*/].f_19 = 2;
	StringCopy(&(Local_760[1 /*28*/].f_24), "out 1", 16);
	Local_760[2 /*28*/].f_1 = joaat("s_m_m_ciasec_01");
	Local_760[2 /*28*/].f_23 = joaat("weapon_combatpistol");
	Local_760[2 /*28*/].f_11 = { 230.6237f, -1386.945f, 29.4619f };
	Local_760[2 /*28*/].f_17 = 41.9494f;
	Local_760[2 /*28*/].f_14 = { 222.6815f, -1356.754f, 29.5875f };
	Local_760[2 /*28*/].f_18 = 200;
	Local_760[2 /*28*/].f_19 = 2;
	StringCopy(&(Local_760[2 /*28*/].f_24), "out 2", 16);
	Local_760[3 /*28*/].f_1 = joaat("s_m_y_cop_01");
	Local_760[3 /*28*/].f_23 = joaat("weapon_pistol");
	Local_760[3 /*28*/].f_14 = { 222.4067f, -1363.619f, 29.5217f };
	Local_760[3 /*28*/].f_18 = 200;
	Local_760[3 /*28*/].f_19 = 2;
	StringCopy(&(Local_760[3 /*28*/].f_24), "out 3 ", 16);
	Local_760[4 /*28*/].f_1 = joaat("s_m_y_cop_01");
	Local_760[4 /*28*/].f_23 = joaat("weapon_pistol");
	Local_760[4 /*28*/].f_14 = { 217.4619f, -1361.306f, 29.5875f };
	Local_760[4 /*28*/].f_18 = 200;
	Local_760[4 /*28*/].f_19 = 2;
	StringCopy(&(Local_760[4 /*28*/].f_24), "out 4", 16);
	Local_1099.f_11 = { 1600.402f, -1944.477f, 99.6178f };
	Local_1099.f_17 = 16.6913f;
	Local_1099.f_1 = GlobalFunc_4917(1);
	Local_1183[0 /*15*/].f_1 = joaat("police3");
	Local_1183[0 /*15*/].f_3 = { 230.1168f, -1396.665f, 29.49f };
	Local_1183[0 /*15*/].f_6 = 7.3f;
	Local_1183[0 /*15*/].f_13 = 1;
	Local_1183[1 /*15*/].f_1 = joaat("police3");
	Local_1183[1 /*15*/].f_3 = { 120.5738f, -1449.255f, 28.2778f };
	Local_1183[1 /*15*/].f_6 = 28.9034f;
	Local_1214[0 /*15*/].f_3 = { 223.1269f, -1352.667f, 29.5775f };
	Local_1214[0 /*15*/].f_6 = 229.9205f;
	Local_1214[0 /*15*/].f_1 = joaat("felon");
	Local_1214[1 /*15*/].f_3 = { 225.6844f, -1349.625f, 29.5556f };
	Local_1214[1 /*15*/].f_6 = 229.4848f;
	Local_1214[1 /*15*/].f_1 = joaat("baller2");
	Local_1245.f_3 = { 1604.959f, -1944.817f, 100.693f };
	Local_1245.f_6 = 98.9533f;
	Local_1245.f_1 = GlobalFunc_4931(1, 2);
}

void func_321()//Position - 0x3460B
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_1485)
	{
		iLocal_1485[iVar0] = 0;
		iVar0++;
	}
}

void func_322()//Position - 0x34632
{
	if (!PED::IS_PED_INJURED(Local_1127))
	{
		PED::SET_PED_RESET_FLAG(Local_1127, 187, 1);
	}
	if (GlobalFunc_145())
	{
		if (bLocal_1461)
		{
			GlobalFunc_5129(338.3677f, -1394.118f, 31.5093f, 61.652f);
		}
		else
		{
			GlobalFunc_5129(-413.37f, 1168.526f, 324.8537f, 156.3851f);
		}
		func_323();
	}
}

void func_323()//Position - 0x34693
{
	GlobalFunc_5574("FBI1_WPN");
	func_703();
}





void func_328()//Position - 0x34804
{
	int iVar0;
	
	iVar0 = 0;
	GlobalFunc_587();
	func_555();
	switch (iLocal_1482)
	{
		case 0:
			STREAMING::REQUEST_MODEL(Local_1099.f_1);
			STREAMING::REQUEST_MODEL(Local_760[1 /*28*/].f_1);
			STREAMING::REQUEST_MODEL(Local_760[3 /*28*/].f_1);
			STREAMING::REQUEST_MODEL(Local_1183[0 /*15*/].f_1);
			STREAMING::REQUEST_MODEL(Local_1245.f_1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1245.f_1, 1);
			STREAMING::REQUEST_ANIM_DICT("MISSFBI1LEADINOUTFBI_1_EXT");
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_1183[0 /*15*/].f_13, "lkfbi1");
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1099))
			{
				if (iLocal_1472 == 0)
				{
					iLocal_1472 = MISC::GET_GAME_TIMER();
				}
				if (((((((STREAMING::HAS_MODEL_LOADED(Local_1099.f_1) && STREAMING::HAS_MODEL_LOADED(Local_760[1 /*28*/].f_1)) && STREAMING::HAS_MODEL_LOADED(Local_760[3 /*28*/].f_1)) && STREAMING::HAS_MODEL_LOADED(Local_1183[0 /*15*/].f_1)) && STREAMING::HAS_MODEL_LOADED(Local_1245.f_1)) && STREAMING::HAS_ANIM_DICT_LOADED("MISSFBI1LEADINOUTFBI_1_EXT")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_1183[0 /*15*/].f_13, "lkfbi1")) && GlobalFunc_588(&iLocal_1472, 3000))
				{
					iVar0 = 1;
					while (iVar0 <= 2)
					{
						func_282(&(Local_760[iVar0 /*28*/]), 1);
						iVar0++;
					}
					func_401(&Local_1099, 1, Local_1099.f_11, Local_1099.f_17, 1, 0, 0);
					func_400(Local_1099);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1099, 1);
					GlobalFunc_173(&uLocal_1560, GlobalFunc_2020("1"), Local_1099, "franklin", 0, 1);
					Local_1551 = { 1602.06f, -1944.361f, 100.796f };
					Local_1554 = { 0f, 1f, 12f };
					uLocal_1479 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1551, Local_1554, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_1099, uLocal_1479, "MISSFBI1LEADINOUTFBI_1_EXT", "_LEADIN_FRANKLIN", 1000f, -8f, 1, 0, 1148846080, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_1479, 1);
					GlobalFunc_9756(&Local_1245, 1, Local_1245.f_3, Local_1245.f_6, 1, 2);
					iVar0 = 0;
					while (iVar0 <= 0)
					{
						MISC::CLEAR_AREA(Local_1183[iVar0 /*15*/].f_3, 10f, 1, 0, 0, 0);
						Local_1183[iVar0 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_1183[iVar0 /*15*/].f_1, Local_1183[iVar0 /*15*/].f_3, Local_1183[iVar0 /*15*/].f_6, 1, 1);
						if (iVar0 == 0)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1183[iVar0 /*15*/], Local_1183[iVar0 /*15*/].f_13, "lkfbi1", 1);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1183[iVar0 /*15*/], 0f);
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1183[iVar0 /*15*/], 1);
							VEHICLE::SET_VEHICLE_SIREN(Local_1183[iVar0 /*15*/], 1);
						}
						iVar0++;
					}
					func_399(&(Local_760[3 /*28*/]), &(Local_1183[0 /*15*/]), -1, 0);
					func_399(&(Local_760[4 /*28*/]), &(Local_1183[0 /*15*/]), 0, 0);
				}
			}
			else
			{
				func_397();
				if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("FBI1_COPS_LOST");
					}
					else
					{
						AUDIO::TRIGGER_MUSIC_EVENT("FBI1_RADIO");
					}
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_1_LOSE_COPS"))
					{
						AUDIO::STOP_AUDIO_SCENE("FBI_1_LOSE_COPS");
					}
					GlobalFunc_571(0, -1);
					HUD::CLEAR_THIS_PRINT("LOSE_WANTED");
					PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
					iLocal_1482++;
				}
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(Local_1245))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1245, 0))
				{
					VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Local_1245);
				}
			}
			func_393();
			func_397();
			func_391();
			func_390();
			GlobalFunc_9193(&Local_1725, 1593.383f, -1934.378f, 98.6576f, 0.01f, 0.01f, 0.01f, 0, "FBI1_God_6", 1, 1, -1);
			func_346();
			if (HUD::DOES_BLIP_EXIST(Local_1725.f_5))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1586.747f, -1943.608f, 90.969f, 1611.747f, -1943.609f, 110.969f, 42f, 0, 1, 0))
				{
					if (GlobalFunc_2881(&iLocal_1780))
					{
						if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iLocal_1780))
						{
							GlobalFunc_2875(&iLocal_1780);
							GlobalFunc_530(iLocal_1780, 7f, 1, 1056964608, 0, 1);
							GlobalFunc_4935();
							iLocal_1482++;
						}
					}
					else if (GlobalFunc_Has_Cutscene_Loaded())
					{
						if (func_337(0, 1, 1, 0))
						{
							PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
							func_336(&Local_1099);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1099, "Franklin", 1, 0, 0);
							if (ENTITY::DOES_ENTITY_EXIST(Local_1245))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1245, 0))
								{
									VEHICLE::SET_FORCE_HD_VEHICLE(Local_1245, 1);
								}
							}
							RECORDING::_0x293220DA1B46CEBC(7.5f, 0f, 3);
							CUTSCENE::START_CUTSCENE(0);
							RECORDING::_0x48621C9FCA3EBD28(4);
							iLocal_1482 = 4;
						}
					}
				}
			}
			break;
		
		case 2:
			func_391();
			if (GlobalFunc_530(iLocal_1780, 7f, 1, 1056964608, 0, 1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				iLocal_1482++;
			}
			break;
		
		case 3:
			func_391();
			if (GlobalFunc_Has_Cutscene_Loaded())
			{
				if (!GlobalFunc_5172(&Local_1725, 0))
				{
					if (func_337(0, 1, 1, 1))
					{
						PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
						func_336(&Local_1099);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1099, "Franklin", 1, 0, 0);
						if (ENTITY::DOES_ENTITY_EXIST(Local_1245))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1245, 0))
							{
								VEHICLE::SET_FORCE_HD_VEHICLE(Local_1245, 1);
							}
						}
						CUTSCENE::START_CUTSCENE(0);
						RECORDING::_0x48621C9FCA3EBD28(4);
						iLocal_1482++;
					}
				}
			}
			break;
		
		case 4:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				GlobalFunc_9805(1629.403f, -1946.552f, 91.196f, 1571.303f, -1946.552f, 107.096f, 62.1f, 1616.203f, -1933.765f, 100.745f, 65.3292f, 15f, 15f, 15f, 1, 1, 1, 0, 0);
				func_3(1616.203f, -1933.765f, 100.745f, 65.3292f, 1);
				MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 300f, 1, 0, 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(Local_1245))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1245, 0))
					{
						GlobalFunc_2875(&Local_1245);
						ENTITY::SET_ENTITY_HEADING(Local_1245, Local_1245.f_6);
						ENTITY::SET_ENTITY_COORDS(Local_1245, Local_1245.f_3, 1, 0, 0, 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1245);
						ENTITY::FREEZE_ENTITY_POSITION(Local_1245, 1);
					}
				}
				VEHICLE::SET_AMBIENT_VEHICLE_RANGE_MULTIPLIER_THIS_FRAME(2f);
				iLocal_1472 = MISC::GET_GAME_TIMER();
				iLocal_1482++;
			}
			break;
		
		case 5:
			if (ENTITY::DOES_ENTITY_EXIST(Local_1245))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1245, 0))
				{
					VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Local_1245);
				}
			}
			VEHICLE::SET_AMBIENT_VEHICLE_RANGE_MULTIPLIER_THIS_FRAME(2f);
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (!CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("michael", GlobalFunc_4917(0)))
					{
					}
				}
				else
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 1, 0);
					iLocal_1482 = 22;
				}
			}
			else
			{
				GlobalFunc_5917(&iLocal_1780);
				if (ENTITY::DOES_ENTITY_EXIST(Local_1245))
				{
					VEHICLE::DELETE_VEHICLE(&Local_1245);
				}
				func_313(0, 0, 0, 0, 0, 3000, 1);
				RECORDING::_0x81CBAE94390F9F89();
				func_329();
			}
			break;
		
		case 22:
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				GlobalFunc_5917(&iLocal_1780);
				if (ENTITY::DOES_ENTITY_EXIST(Local_1245))
				{
					VEHICLE::DELETE_VEHICLE(&Local_1245);
				}
				func_149(0, 0, 0, 1);
				RECORDING::_0x81CBAE94390F9F89();
				func_329();
			}
			break;
	}
}

void func_329()//Position - 0x34EDB
{
	GlobalFunc_5103(0, 0);
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	func_703();
}







void func_336(int iParam0)//Position - 0x35107
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			ENTITY::SET_ENTITY_PROOFS(*iParam0, 1, 1, 1, 1, 1, 0, 0, 0);
		}
	}
}

int func_337(bool bParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x35133
{
	if (GlobalFunc_552(1, 0, 1) || iParam3)
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(1);
		if (bParam2)
		{
			GlobalFunc_4956();
		}
		else
		{
			GlobalFunc_4935();
		}
		PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
		GlobalFunc_8380(1, 1, 1, 0);
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
		GlobalFunc_626();
		return 1;
	}
	return 0;
}









void func_346()//Position - 0x35530
{
	if (HUD::DOES_BLIP_EXIST(Local_1725.f_5))
	{
		if (!iLocal_1467)
		{
			GlobalFunc_2269(&(Local_1725.f_5), 1610.201f, -1914.601f, 99.6843f, 138.8997f);
			iLocal_1467 = 1;
		}
	}
	else
	{
		iLocal_1467 = 0;
	}
}












































void func_390()//Position - 0x37EF0
{
	int iVar0;
	
	iVar0 = 0;
	if (!iLocal_1466)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 235.2498f, -1354.122f, 29.5623f, 1) > 100f)
		{
			iVar0 = 0;
			while (iVar0 <= (Local_760 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_760[iVar0 /*28*/]))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_760[iVar0 /*28*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_760[iVar0 /*28*/].f_1);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= (Local_1183 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1183[iVar0 /*15*/]))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1183[iVar0 /*15*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1183[iVar0 /*15*/].f_1);
				}
				iVar0++;
			}
			iLocal_1466 = 1;
		}
	}
}

void func_391()//Position - 0x37FA4
{
	GlobalFunc_650(1593.383f, -1934.378f, 97.8f, 100f, 120f, "FBI_1_EXT");
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("michael", PLAYER::PLAYER_PED_ID(), 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("franklin", Local_1099, 0);
}


void func_393()//Position - 0x3803E
{
	switch (iLocal_1529)
	{
		case 0:
			if (GlobalFunc_10638(&uLocal_1560, 1, "fbi1aud", "call2", 9, 1, 0, 0, 0))
			{
				RECORDING::_0x293220DA1B46CEBC(1f, 10f, 2);
				iLocal_1529++;
			}
			break;
		
		case 1:
			if (GlobalFunc_1993())
			{
				GlobalFunc_173(&uLocal_1560, GlobalFunc_2020("5"), 0, "dave", 0, 1);
				iLocal_1530 = MISC::GET_GAME_TIMER();
				iLocal_1529++;
			}
			break;
		
		case 2:
			if (GlobalFunc_588(&iLocal_1530, 4000))
			{
				if (GlobalFunc_10638(&uLocal_1560, 30, "fbi1aud", "call3", 9, 1, 0, 0, 0))
				{
					iLocal_1529++;
				}
			}
			break;
		
		case 3:
			if (GlobalFunc_1993())
			{
				iLocal_1529++;
			}
			break;
		
		case 4:
			break;
	}
}




void func_397()//Position - 0x38226
{
	struct<3> Var0;
	
	if (!PED::IS_PED_INJURED(Local_1099))
	{
		switch (iLocal_1510)
		{
			case 0:
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1479))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(Local_1099, Local_1099.f_11, 0.7f, 0.7f, 2.5f, 0, 1, 0))
					{
						if (func_306(Local_1099, 242628503, 1))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_1750);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1099.f_11, 1f, -1, 1048576000, 0, 1193033728);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_1750);
							TASK::TASK_PERFORM_SEQUENCE(Local_1099, uLocal_1750);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_1750);
						}
					}
				}
				if (GlobalFunc_111())
				{
					MemCopy(&cLocal_1788, {GlobalFunc_560()}, 4);
					if (MISC::ARE_STRINGS_EQUAL(&cLocal_1788, "call2"))
					{
						TASK::TASK_USE_MOBILE_PHONE(Local_1099, 1, 1);
						iLocal_1510++;
					}
				}
				break;
			
			case 1:
				if (GlobalFunc_1993() || !GlobalFunc_111())
				{
					TASK::TASK_USE_MOBILE_PHONE(Local_1099, 0, 1);
					iLocal_1510++;
				}
				break;
			
			case 2:
				Local_1551 = { 1602.06f, -1944.361f, 100.796f };
				Local_1554 = { 0f, 1f, 12f };
				Local_1099.f_11 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("MISSFBI1LEADINOUTFBI_1_EXT", "_LEADIN_FRANKLIN", Local_1551, Local_1554, 0f, 2) };
				Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("MISSFBI1LEADINOUTFBI_1_EXT", "_LEADIN_FRANKLIN", Local_1551, Local_1554, 0, 2) };
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_1099, Local_1099.f_11, 1f, 1f, 1.6f, 0, 1, 0))
				{
					if (func_306(Local_1099, 242628503, -2))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_1750);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1099.f_11, 1f, -1, 0.1f, 0, Var0.f_2);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_1750);
						TASK::TASK_PERFORM_SEQUENCE(Local_1099, uLocal_1750);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_1750);
					}
				}
				else
				{
					Local_1551 = { 1602.06f, -1944.361f, 100.796f };
					Local_1554 = { 0f, 1f, 12f };
					uLocal_1479 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1551, Local_1554, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_1099, uLocal_1479, "MISSFBI1LEADINOUTFBI_1_EXT", "_LEADIN_FRANKLIN", 4f, -8f, 1, 0, 8f, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_1479, 1);
				}
				break;
			}
	}
}


void func_399(int iParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x38475
{
	MISC::CLEAR_AREA(iParam0->f_11, 2f, 1, 0, 0, 0);
	*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam1, 6, iParam0->f_1, iParam2, 1, 1);
	PED::SET_PED_RANDOM_COMPONENT_VARIATION(*iParam0, 0);
	PED::SET_PED_DIES_WHEN_INJURED(*iParam0, 1);
	PED::SET_PED_AS_ENEMY(*iParam0, 1);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*iParam0, 1, 0);
	PED::SET_PED_KEEP_TASK(*iParam0, 1);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 132, 0);
	WEAPON::GIVE_WEAPON_TO_PED(*iParam0, iParam0->f_23, -1, 1, 1);
	PED::SET_PED_ACCURACY(*iParam0, iParam0->f_19);
	ENTITY::SET_ENTITY_HEALTH(*iParam0, iParam0->f_18);
	PED::SET_PED_MAX_HEALTH(*iParam0, iParam0->f_18);
	if (iParam0->f_20)
	{
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*iParam0, 1);
	}
	if (iParam0->f_21)
	{
		PED::ADD_ARMOUR_TO_PED(*iParam0, 100);
	}
	iParam0->f_22 = 1;
	PED::SET_PED_NAME_DEBUG(*iParam0, &(iParam0->f_24));
	PED::SET_PED_HEARING_RANGE(*iParam0, 250f);
	PED::SET_PED_SEEING_RANGE(*iParam0, 250f);
	PED::SET_PED_ID_RANGE(*iParam0, 250f);
	if (bParam3)
	{
		iParam0->f_2 = GlobalFunc_6797(*iParam0, 1, 145);
		HUD::SET_BLIP_DISPLAY(iParam0->f_2, 2);
	}
	PED::SET_PED_CAN_EVASIVE_DIVE(*iParam0, 1);
	func_284(iParam0, 1);
}

void func_400(int iParam0)//Position - 0x3857F
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
	PED::SET_PED_CONFIG_FLAG(iParam0, 208, 0);
}

int func_401(var uParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x385F7
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
			*uParam0 = PED::CREATE_PED(26, iVar0, Param2, uParam5, 0, 0);
			GlobalFunc_8364(*uParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
			func_547(*uParam0);
			GlobalFunc_7694(*uParam0, 1, 0);
			GlobalFunc_7693(*uParam0);
			GlobalFunc_7714(*uParam0);
			func_403(*uParam0, bParam8);
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


int func_403(int iParam0, bool bParam1)//Position - 0x3870F
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_5101(iVar0))
	{
		GlobalFunc_5100(iVar0, 0);
		func_159(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		func_407(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (GlobalFunc_7997(iParam0))
		{
			GlobalFunc_5100(iVar0, 0);
			func_159(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			func_407(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[120] && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122])
			{
				func_159(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_161(iParam0, 3, 169))
					{
						func_159(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						return 1;
					}
				}
			}
			if (func_161(iParam0, 12, 6))
			{
				func_159(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (func_161(iParam0, 12, 17))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_159(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (func_161(iParam0, 12, 20))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_159(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (func_161(iParam0, 12, 21))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_159(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (func_161(iParam0, 12, 22))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_159(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (func_161(iParam0, 12, 11))
			{
				func_159(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (func_161(iParam0, 12, 10))
			{
				func_159(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (func_161(iParam0, 12, 50))
			{
				func_159(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (func_161(iParam0, 14, 59))
			{
				func_159(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (func_161(iParam0, 8, 22))
			{
				func_159(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_161(iParam0, 12, 14))
			{
				func_159(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 1:
			if (func_161(iParam0, 12, 13))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_159(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (func_161(iParam0, 12, 14))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_159(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (func_161(iParam0, 12, 15))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_159(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (func_161(iParam0, 12, 4))
			{
				func_159(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (func_161(iParam0, 12, 3))
			{
				func_159(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (func_161(iParam0, 14, 82))
			{
				func_159(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (func_161(iParam0, 8, 76))
			{
				func_159(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_161(iParam0, 12, 1))
			{
				func_159(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 2:
			if (func_161(iParam0, 12, 12))
			{
				func_159(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (func_161(iParam0, 12, 15))
			{
				func_159(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_161(iParam0, 3, 71))
				{
					func_159(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (func_161(iParam0, 12, 17))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_159(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (func_161(iParam0, 12, 18))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_159(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (func_161(iParam0, 12, 19))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_159(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (func_161(iParam0, 12, 7))
			{
				func_159(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (func_161(iParam0, 12, 6))
			{
				func_159(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (func_161(iParam0, 14, 88))
			{
				func_159(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (func_161(iParam0, 8, 17))
			{
				func_159(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_161(iParam0, 12, 11))
			{
				func_159(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
	}
	return 0;
}




void func_407(int iParam0, int iParam1)//Position - 0x38E5E
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
				iVar1 = func_169(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					GlobalFunc_521(iVar0);
					func_414(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
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
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[iVar67 /*4*/][iVar0] = GlobalFunc_7150(iParam0, GlobalFunc_33(iVar67));
						iVar67++;
					}
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[iVar67 /*4*/][iVar0] = GlobalFunc_7150(iParam0, GlobalFunc_33(iVar67));
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







void func_414(int iParam0, var uParam1, bool bParam2)//Position - 0x39752
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
			if (func_168(iParam0, iVar1, &iVar2, 0))
			{
				func_159(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_160(iParam0, iVar1, &iVar2))
			{
				func_159(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_6784(741, uParam1->f_60, Global_68104, 1);
			GlobalFunc_6784(742, uParam1->f_61, Global_68104, 1);
			iVar4 = GlobalFunc_5668(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			func_417(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			if (!bParam2)
			{
				iVar5 = GlobalFunc_5668(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_417(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
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



int func_417(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x399E9
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
								GlobalFunc_309(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
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
				Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, iVar0, func_503(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					uVar41 = { GlobalFunc_7617(iVar5, 0) };
					func_417(iParam0, iVar0, uVar41[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
			func_498(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar58 = { GlobalFunc_7616(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, 14, uVar58[iVar1]) };
			GlobalFunc_309(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
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
						iVar3 = func_496(iParam0, iVar5, 14, uVar58[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_417(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
			iVar69 = GlobalFunc_7150(iParam0, 1);
			iVar3 = func_496(iParam0, iVar5, 1, iVar69, 14, Global_68106[1 /*14*/].f_12);
			if (iVar3 != -99 && iVar3 != iParam2)
			{
				iVar7 = GlobalFunc_5013(iVar5, 1, -1);
			}
		}
		GlobalFunc_309(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
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
					iVar3 = func_496(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_417(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar70 = GlobalFunc_7150(iParam0, 11);
				iVar71 = GlobalFunc_7150(iParam0, 8);
				iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
				{
					iVar9 = GlobalFunc_7150(iParam0, 8);
				}
				iVar72 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar72, joaat("GLOVES"), 3))
				{
					iVar73 = GlobalFunc_6739(iVar5, iVar71, iVar70);
					if (iVar73 == -99)
					{
						iVar73 = func_496(iParam0, iVar5, 11, iVar70, 3, 0);
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
					iVar70 = GlobalFunc_7150(iParam0, 11);
					if (iVar70 >= 256)
					{
						iVar76 = GlobalFunc_4913(iVar5, iVar70, 11, 4);
					}
					if (iVar70 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("VEST_SHIRT"), 0))
					{
						iVar77 = GlobalFunc_6738(iVar5, iVar70, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar77 != -99)
						{
							func_417(iParam0, 8, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
								func_417(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
									func_417(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
								func_417(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_417(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
			func_498(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, func_503(iParam0, 8, -1), iParam2);
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
				func_457(iParam0, iParam2, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			func_498(iParam0, iParam1, iParam2, iParam6, 0);
			iVar84 = GlobalFunc_7150(iParam0, 11);
			if (GlobalFunc_6737(iVar5, iVar84))
			{
				iVar85 = GlobalFunc_6736(iVar5, iParam2, Global_68106[1 /*14*/].f_4);
				GlobalFunc_10622(iVar5, iVar85);
			}
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, iParam2, GlobalFunc_7150(iParam0, 11));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar86 = GlobalFunc_7150(iParam0, 7);
				if (!GlobalFunc_8583(iVar5, iVar86, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99))
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
					iVar94 = GlobalFunc_7150(iParam0, 1);
					iVar95 = 0;
					while (iVar95 < 9)
					{
						iVar3 = func_496(iParam0, iVar5, iParam1, iVar94, 14, iVar95);
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
					iVar3 = func_496(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_417(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				if (GlobalFunc_7998(iParam0))
				{
					iVar97 = -99;
					iVar97 = GlobalFunc_6730(iVar5, iParam2);
					if (iVar97 > 0)
					{
						iVar97 = (iVar97 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!func_434(iParam0, 9, iVar97))
						{
							func_417(iParam0, 9, iVar97, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						func_417(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_417(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
					iVar99 = func_503(iParam0, 4, -1);
					iVar100 = iParam2;
				}
				else
				{
					iVar99 = iParam2;
					iVar100 = func_503(iParam0, 11, -1);
				}
				if (GlobalFunc_6729(iVar5, 11, iVar100))
				{
					if (!GlobalFunc_6728(iVar5, 4, iVar99))
					{
						if (GlobalFunc_6727(iVar5, 4, iVar99, &uVar101))
						{
							func_417(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
				}
				else if (GlobalFunc_6728(iVar5, 4, iVar99))
				{
					if (GlobalFunc_6726(iVar5, 4, iVar99, &uVar101))
					{
						func_417(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
					iVar3 = func_496(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_417(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar3 = func_496(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_417(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_418(iParam0, &uVar4))
		{
			func_417(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	if (iVar6 != -99)
	{
		func_417(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar9 != -99)
	{
		func_417(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar7 != -99)
	{
		func_417(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				func_417(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}

int func_418(int iParam0, var uParam1)//Position - 0x3AAAD
{
	int iVar0;
	int iVar1;
	
	*uParam1 = func_503(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (GlobalFunc_6671(741, Global_68104, 0) != -99 && GlobalFunc_6714())
	{
		if (GlobalFunc_278() == 4)
		{
			return 1;
		}
		if (GlobalFunc_6671(741, Global_68104, 0) == 0 && GlobalFunc_6671(742, Global_68104, 0) == 0)
		{
			if (GlobalFunc_6707(161, Global_68104))
			{
				if (GlobalFunc_6671(2035, Global_68104, 0) == 0)
				{
					return 0;
				}
			}
			else if (GlobalFunc_6671(740, Global_68104, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = GlobalFunc_6671(741, Global_68104, 0);
		iVar1 = GlobalFunc_6671(742, Global_68104, 0);
		if (!func_434(iParam0, iVar1, iVar0))
		{
			if (GlobalFunc_6707(161, Global_68104))
			{
				*uParam1 = GlobalFunc_6671(2035, Global_68104, 0);
			}
			else
			{
				*uParam1 = GlobalFunc_6671(740, Global_68104, 0);
			}
			GlobalFunc_6784(741, -99, Global_68104, 1);
			GlobalFunc_6784(742, 2, Global_68104, 1);
			return 1;
		}
	}
	return 0;
}
















int func_434(int iParam0, int iParam1, int iParam2)//Position - 0x3BFF8
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar24;
	int iVar34;
	var uVar35;
	var uVar45;
	
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar0, iParam1, iParam2) };
	uVar2 = Global_2621444;
	uVar3 = Global_2621445;
	if (!MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { GlobalFunc_7617(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 < 7)
		{
			switch (iVar7)
			{
				case 0:
					iVar4 = 1;
					break;
				
				case 1:
					iVar4 = 4;
					break;
				
				case 2:
					iVar4 = 6;
					break;
				
				case 3:
					iVar4 = 7;
					break;
				
				case 4:
					iVar4 = 8;
					break;
				
				case 5:
					iVar4 = 11;
					break;
				
				case 6:
					iVar4 = 13;
					break;
			}
			if (uVar8[iVar4] != -99)
			{
				if (!func_434(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2621444 = uVar2;
					Global_2621445 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar24 = { GlobalFunc_7616(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_434(iParam0, 14, uVar24[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_68106[2 /*14*/] = { GlobalFunc_10864(iVar0, 14, iVar6) };
									if (Global_68106[2 /*14*/].f_12 == iVar5)
									{
										if (func_434(iParam0, 14, iVar6))
										{
											if (!GlobalFunc_8307(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_68106[2 /*14*/])))
											{
												Global_2621444 = uVar2;
												Global_2621445 = uVar3;
												return 0;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else
					{
						iVar1 = GlobalFunc_7150(iParam0, iVar4);
						Global_68106[2 /*14*/] = { GlobalFunc_10864(iVar0, iVar4, iVar1) };
						if (!GlobalFunc_8307(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_68106[2 /*14*/])))
						{
							Global_2621444 = uVar2;
							Global_2621445 = uVar3;
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
		if (uVar8[10] != 0 && uVar8[10] != joaat("0"))
		{
			if (GlobalFunc_6671(1743, Global_68104, 0) != uVar8[10])
			{
				Global_2621444 = uVar2;
				Global_2621445 = uVar3;
				return 0;
			}
		}
		Global_2621444 = uVar2;
		Global_2621445 = uVar3;
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar35 = { GlobalFunc_7616(iVar0, iParam2) };
		iVar34 = 0;
		while (iVar34 <= 8)
		{
			if (!func_434(iParam0, 14, uVar35[iVar34]))
			{
				return 0;
			}
			iVar34++;
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
	else
	{
		if (Global_68106[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, GlobalFunc_33(iParam1)) && Global_68106[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, GlobalFunc_33(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			if (GlobalFunc_6729(iVar0, 11, GlobalFunc_7150(iParam0, 11)))
			{
				if (GlobalFunc_6727(iVar0, 4, iParam2, &uVar45))
				{
					return func_434(iParam0, 4, uVar45);
				}
			}
			else if (GlobalFunc_6726(iVar0, 4, iParam2, &uVar45))
			{
				return func_434(iParam0, 4, uVar45);
			}
		}
	}
	return 0;
}























void func_457(int iParam0, int iParam1, bool bParam2)//Position - 0x3FA65
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
	func_458(iParam0, bParam2, 0);
}

void func_458(int iParam0, bool bParam1, bool bParam2)//Position - 0x3FAA8
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
		bVar15 = func_474(iParam0);
		bVar16 = GlobalFunc_5010(iParam0);
		bVar17 = func_471(iParam0);
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
				if (GlobalFunc_5134(&Var1, iVar18, iVar14, iParam0, -1))
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













int func_471(int iParam0)//Position - 0x4389D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = GlobalFunc_6671(1743, -1, 0);
			if (iVar0 > 15)
			{
				iVar2 = func_503(iParam0, 11, -1);
				if (iVar2 >= 256)
				{
					iVar3 = GlobalFunc_4913(joaat("mp_f_freemode_01"), iVar2, 11, 4);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						if (iVar1 == joaat("MP_Elite_M_Tshirt_1"))
						{
							return 1;
						}
					}
				}
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = GlobalFunc_6671(1743, -1, 0);
			if (iVar0 > 15)
			{
				iVar4 = func_503(iParam0, 11, -1);
				if (iVar4 >= 256)
				{
					iVar5 = GlobalFunc_4913(joaat("mp_f_freemode_01"), iVar4, 11, 4);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						if (iVar1 == joaat("MP_Elite_F_Tshirt_1"))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}



int func_474(int iParam0)//Position - 0x43A6C
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
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 9:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar2 = func_503(iParam0, 11, -1);
						if (iVar2 >= 237)
						{
							iVar3 = GlobalFunc_4913(joaat("mp_m_freemode_01"), iVar2, 11, 3);
							if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("TAT_DECL_NO_SAVE"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar4 = func_503(iParam0, 8, -1);
						if (iVar4 >= 241)
						{
							iVar5 = GlobalFunc_4913(joaat("mp_m_freemode_01"), iVar4, 8, 3);
							if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("TAT_DECL_NO_SAVE"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
						case 7:
						case 4:
						case 9:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 0:
						case 1:
						case 2:
						case 3:
						case 4:
							return 1;
							break;
					}
					break;
				
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar6 = func_503(iParam0, 11, -1);
						if (iVar6 >= 256)
						{
							iVar7 = GlobalFunc_4913(joaat("mp_f_freemode_01"), iVar6, 11, 4);
							if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("TAT_DECL_NO_SAVE"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar8 = func_503(iParam0, 8, -1);
						if (iVar8 >= 136)
						{
							iVar9 = GlobalFunc_4913(joaat("mp_f_freemode_01"), iVar8, 8, 4);
							if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("TAT_DECL_NO_SAVE"), 0))
							{
								return 1;
							}
						}
					}
					break;
				}
		}
		if (GlobalFunc_302(iParam0))
		{
			return 1;
		}
	}
	return 0;
}






















int func_496(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x4ACEE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	bool bVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	bool bVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
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
	int iVar90;
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
	bool bVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	int iVar112;
	int iVar113;
	int iVar114;
	int iVar115;
	int iVar116;
	int iVar117;
	int iVar118;
	int iVar119;
	int iVar120;
	int iVar121;
	int iVar122;
	int iVar123;
	int iVar124;
	int iVar125;
	int iVar126;
	int iVar127;
	int iVar128;
	int iVar129;
	int iVar130;
	
	iVar0 = -99;
	if (iParam4 == 2)
	{
		func_497(iParam0, iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		if (iParam4 == 3)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 2;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 107)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 123)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 139)
				{
					iVar0 = 8;
				}
				else if (iParam3 <= 155)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 171)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 187)
				{
					iVar2 = GlobalFunc_7150(iParam0, 8);
					iVar3 = GlobalFunc_4913(iParam1, iVar2, 8, 3);
					iVar4 = GlobalFunc_306(iVar3);
					if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar4 == 6)) || (iVar2 >= 241 && iVar4 == 7)) || (iVar2 >= 241 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("VEST_SHIRT"), 0)))
					{
						iVar0 = -99;
					}
					else
					{
						iVar0 = 11;
					}
				}
				else if (iParam3 <= 203)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 219)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 235)
				{
					iVar0 = 4;
				}
				else if (iParam3 == 236)
				{
					iVar0 = 15;
				}
				else if (iParam3 >= 237)
				{
					iVar5 = GlobalFunc_4913(iParam1, iParam3, 11, 3);
					if (iVar5 != -1)
					{
						bVar6 = true;
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("DRAW_11"), 0))
						{
							iVar2 = GlobalFunc_7150(iParam0, 8);
							iVar7 = GlobalFunc_4913(iParam1, iVar2, 8, 3);
							iVar8 = GlobalFunc_306(iVar7);
							if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar8 == 6)) || (iVar2 >= 241 && iVar8 == 7)) || (iVar2 >= 241 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("VEST_SHIRT"), 0)))
							{
								bVar6 = false;
							}
						}
						if (bVar6)
						{
							iVar9 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar5);
							iVar10 = 0;
							while (iVar10 < iVar9)
							{
								FILES::GET_FORCED_COMPONENT(iVar5, iVar10, &iVar11, &iVar12, &iVar13);
								if (iVar13 == 3)
								{
									if (iVar11 != 0 && iVar11 != joaat("0"))
									{
										iVar0 = GlobalFunc_4914(iParam1, iVar11, 3, 3);
									}
									else
									{
										iVar0 = iVar12;
									}
									iVar10 = iVar9 + 1;
								}
								iVar10++;
							}
						}
					}
				}
			}
			else if (iParam2 == 8)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 6;
				}
				else if (iParam3 <= 111)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 223)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 239)
				{
					iVar0 = -99;
				}
				else if (iParam3 == 240)
				{
					iVar0 = 14;
				}
				else if (iParam3 >= 241)
				{
					iVar14 = GlobalFunc_4913(iParam1, iParam3, 8, 3);
					if (iVar14 != -1)
					{
						iVar15 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar16 = 0;
						while (iVar16 < iVar15)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar16, &iVar17, &iVar18, &iVar19);
							if (iVar19 == 3)
							{
								if (iVar17 != 0 && iVar17 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar17, 3, 3);
								}
								else
								{
									iVar0 = iVar18;
									iVar16 = iVar15 + 1;
								}
							}
							iVar16++;
						}
					}
				}
			}
		}
		else if (iParam4 == 8)
		{
			if (iParam2 == 11)
			{
				iVar20 = -1;
				if (iParam3 >= 237)
				{
					iVar20 = GlobalFunc_306(GlobalFunc_4913(iParam1, iParam3, 11, 3));
				}
				if (iParam3 <= 15)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 107)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 123)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 139)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 155)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 171)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 187 || iVar20 == 11)
				{
					iVar2 = GlobalFunc_7150(iParam0, 8);
					iVar21 = GlobalFunc_4913(iParam1, iVar2, 8, 3);
					iVar22 = GlobalFunc_306(iVar21);
					if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar22 == 6)) || (iVar2 >= 241 && iVar22 == 7)) || (iVar2 >= 241 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, joaat("VEST_SHIRT"), 0)))
					{
					}
					else
					{
						iVar0 = 112;
					}
				}
				else if (iParam3 <= 203)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 219)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 235)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 236)
				{
					iVar0 = 240;
				}
				else if (iParam3 >= 237)
				{
					iVar23 = GlobalFunc_4913(iParam1, iParam3, 11, 3);
					if (iVar23 != -1)
					{
						iVar24 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar23);
						iVar25 = 0;
						while (iVar25 < iVar24)
						{
							FILES::GET_FORCED_COMPONENT(iVar23, iVar25, &iVar26, &iVar27, &iVar28);
							if (iVar28 == 8)
							{
								if (iVar26 != 0 && iVar26 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar26, 8, 3);
								}
								else
								{
									iVar0 = iVar27;
									iVar25 = iVar24 + 1;
								}
							}
							iVar25++;
						}
					}
				}
			}
			else if (iParam2 == 7)
			{
				iVar29 = -1;
				iVar30 = -1;
				if (iParam3 >= 92)
				{
					iVar30 = GlobalFunc_4913(iParam1, iParam3, 7, 3);
					iVar29 = GlobalFunc_306(iVar30);
				}
				if (((((((((iParam3 >= 41 && iParam3 <= 56) || (iParam3 >= 57 && iParam3 <= 72)) || (iParam3 >= 73 && iParam3 <= 88)) || iVar29 == 10) || iVar29 == 11) || iVar29 == 12) || (iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar30, joaat("VEST_TIE"), 0))) || (iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar30, joaat("TUX_TIE"), 0))) || (iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar30, joaat("TIE"), 0)))
				{
					iVar2 = GlobalFunc_7150(iParam0, 8);
					if (iVar2 >= 48 && iVar2 <= 63)
					{
						iVar1 = (iVar2 - 48);
						iVar0 = (64 + iVar1);
					}
					else if (iVar2 >= 112 && iVar2 <= 127)
					{
						iVar1 = (iVar2 - 112);
						iVar0 = (96 + iVar1);
					}
					else if (iVar2 >= 176 && iVar2 <= 191)
					{
						iVar1 = (iVar2 - 176);
						iVar0 = (160 + iVar1);
					}
					else if (iVar2 >= 241)
					{
						iVar31 = GlobalFunc_4913(iParam1, iVar2, 8, 3);
						iVar32 = GlobalFunc_306(iVar31);
						bVar33 = FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar31, joaat("TUX_VEST"), 0);
						if (((iVar32 == 3 || iVar32 == 7) || iVar32 == 11) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar31, joaat("OPEN_COLLAR"), 0))
						{
							if (iVar31 != -1)
							{
								iVar34 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar31);
								iVar35 = 0;
								while (iVar35 < iVar34)
								{
									FILES::GET_VARIANT_COMPONENT(iVar31, iVar35, &iVar36, &iVar37, &iVar38);
									if ((iVar38 == 8 && !bVar33) || (iVar38 == 10 && bVar33))
									{
										if (iVar36 != 0 && iVar36 != joaat("0"))
										{
											iVar0 = GlobalFunc_4914(iParam1, iVar36, 8, 3);
										}
										else
										{
											iVar0 = iVar37;
										}
										iVar35 = iVar34 + 1;
									}
									iVar35++;
								}
							}
						}
					}
				}
				else if ((iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar30, joaat("LOOSE_TIE"), 0)) || (iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar30, joaat("SLACK_TIE"), 0)))
				{
					iVar39 = GlobalFunc_4913(iParam1, iVar2, 8, 3);
					iVar40 = GlobalFunc_306(iVar39);
					bVar41 = FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar39, joaat("TUX_VEST"), 0);
					if (((iVar40 == 3 || iVar40 == 7) || iVar40 == 11) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar39, joaat("OPEN_COLLAR"), 0))
					{
						if (iVar39 != -1)
						{
							iVar42 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar39);
							iVar43 = 0;
							while (iVar43 < iVar42)
							{
								FILES::GET_VARIANT_COMPONENT(iVar39, iVar43, &iVar44, &iVar45, &iVar46);
								if ((iVar46 == 8 && !bVar41) || (iVar46 == 10 && bVar41))
								{
									if (iVar44 != 0 && iVar44 != joaat("0"))
									{
										iVar0 = GlobalFunc_4914(iParam1, iVar44, 8, 3);
									}
									else
									{
										iVar0 = iVar45;
									}
									iVar43 = iVar42 + 1;
								}
								iVar43++;
							}
						}
					}
				}
				else if (iParam3 >= 92)
				{
					iVar47 = GlobalFunc_4913(iParam1, iParam3, 7, 3);
					if (iVar47 != -1)
					{
						iVar48 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar47);
						iVar49 = 0;
						while (iVar49 < iVar48)
						{
							FILES::GET_FORCED_COMPONENT(iVar47, iVar49, &iVar50, &iVar51, &iVar52);
							if (iVar52 == 8)
							{
								if (iVar50 != 0 && iVar50 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar50, 8, 3);
								}
								else
								{
									iVar0 = iVar51;
									iVar49 = iVar48 + 1;
								}
							}
							iVar49++;
						}
					}
				}
			}
		}
		else if (iParam4 == 11)
		{
			if (iParam2 == 7)
			{
				iVar53 = -1;
				iVar54 = -1;
				if (iParam3 >= 92)
				{
					iVar54 = GlobalFunc_4913(iParam1, iParam3, 7, 3);
					iVar53 = GlobalFunc_306(iVar54);
				}
				if (((((((iParam3 >= 41 && iParam3 <= 56) || (iParam3 >= 57 && iParam3 <= 72)) || (iParam3 >= 73 && iParam3 <= 88)) || iVar53 == 10) || iVar53 == 11) || iVar53 == 12) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar54, joaat("TIE"), 0))
				{
					iVar55 = GlobalFunc_7150(iParam0, 11);
					if (iVar55 >= 237)
					{
						iVar56 = GlobalFunc_4913(iParam1, iVar55, 11, 3);
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar56, joaat("SHIRT_BRACES"), 0) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar56, joaat("OPEN_COLLAR"), 0))
						{
							if (iVar56 != -1)
							{
								iVar57 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar56);
								iVar58 = 0;
								while (iVar58 < iVar57)
								{
									FILES::GET_VARIANT_COMPONENT(iVar56, iVar58, &iVar59, &iVar60, &iVar61);
									if (iVar61 == 11)
									{
										if (iVar59 != 0 && iVar59 != joaat("0"))
										{
											iVar0 = GlobalFunc_4914(iParam1, iVar59, 11, 3);
										}
										else
										{
											iVar0 = iVar60;
										}
										iVar58 = iVar57 + 1;
									}
									iVar58++;
								}
							}
						}
					}
				}
			}
		}
		else if (iParam4 == 7)
		{
			if (iParam2 == 11)
			{
				iVar62 = GlobalFunc_7150(iParam0, 11);
				if (iVar62 >= 237)
				{
					iVar63 = GlobalFunc_4913(iParam1, iVar62, 11, 3);
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar63, joaat("SHIRT_BRACES"), 0) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar63, joaat("OPEN_COLLAR"), 0))
					{
						iVar63 = GlobalFunc_4913(iParam1, iParam3, 11, 3);
						if (iVar63 != -1)
						{
							iVar64 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar63);
							iVar65 = 0;
							while (iVar65 < iVar64)
							{
								FILES::GET_FORCED_COMPONENT(iVar63, iVar65, &iVar66, &iVar67, &iVar68);
								if (iVar68 == 7)
								{
									if (iVar66 != 0 && iVar66 != joaat("0"))
									{
										iVar0 = GlobalFunc_4914(iParam1, iVar66, 7, 3);
									}
									else
									{
										iVar0 = iVar67;
										iVar65 = iVar64 + 1;
									}
								}
								iVar65++;
							}
						}
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar69 = GlobalFunc_4913(iParam1, iParam3, 14, 3);
					if (iVar69 != -1)
					{
						iVar70 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar69);
						iVar71 = 0;
						while (iVar71 < iVar70)
						{
							FILES::GET_FORCED_COMPONENT(iVar69, iVar71, &iVar72, &iVar73, &iVar74);
							if (iVar74 == 7)
							{
								if (iVar72 != 0 && iVar72 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar72, 7, 3);
								}
								else
								{
									iVar0 = iVar73;
									iVar71 = iVar70 + 1;
								}
							}
							iVar71++;
						}
					}
				}
			}
		}
		else if (iParam4 == 6)
		{
			if (iParam2 == 4)
			{
				if (iParam3 >= 256)
				{
					iVar75 = GlobalFunc_4913(iParam1, iParam3, 4, 3);
					if (iVar75 != -1)
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar75);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_FORCED_COMPONENT(iVar75, iVar77, &iVar78, &iVar79, &iVar80);
							if (iVar80 == 6)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar78, 6, 3);
								}
								else
								{
									iVar0 = iVar79;
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
			}
		}
		else if (iParam4 == 14)
		{
			if (iParam2 == 1)
			{
				if (iParam3 >= 26)
				{
					iVar81 = GlobalFunc_4913(iParam1, iParam3, 1, 3);
					if (iVar81 != -1)
					{
						iVar82 = FILES::GET_SHOP_PED_APPAREL_FORCED_PROP_COUNT(iVar81);
						iVar83 = 0;
						while (iVar83 < iVar82)
						{
							FILES::GET_FORCED_PROP(iVar81, iVar83, &iVar84, &iVar85, &iVar86);
							if (iVar86 == iParam5)
							{
								if (iVar84 != 0 && iVar84 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar84, 14, 3);
									iVar83 = iVar82 + 1;
								}
								else
								{
									iVar0 = iVar85;
									iVar83 = iVar82 + 1;
								}
							}
							iVar83++;
						}
					}
				}
			}
		}
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		if (iParam4 == 3)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 2;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 3;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 111)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = 6;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 9;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = 7;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 223)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 239)
				{
					iVar0 = 14;
				}
				else if (iParam3 <= 255)
				{
					iVar0 = 15;
				}
				else if (iParam3 >= 256)
				{
					iVar87 = GlobalFunc_4913(iParam1, iParam3, 11, 4);
					if (iVar87 != -1)
					{
						iVar88 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar87);
						iVar89 = 0;
						while (iVar89 < iVar88)
						{
							FILES::GET_FORCED_COMPONENT(iVar87, iVar89, &iVar90, &iVar91, &iVar92);
							if (iVar92 == 3)
							{
								if (iVar90 != 0 && iVar90 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar90, 3, 4);
								}
								else
								{
									iVar0 = iVar91;
									iVar89 = iVar88 + 1;
								}
							}
							iVar89++;
						}
					}
				}
			}
		}
		else if (iParam4 == 8)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 111)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 223)
				{
					iVar1 = (iParam3 - 208);
					iVar0 = (103 + iVar1);
				}
				else if (iParam3 <= 239)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 255)
				{
					iVar0 = 33;
				}
				else if (iParam3 >= 256)
				{
					iVar93 = GlobalFunc_4913(iParam1, iParam3, 11, 4);
					if (iVar93 != -1)
					{
						iVar94 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar93);
						iVar95 = 0;
						while (iVar95 < iVar94)
						{
							FILES::GET_FORCED_COMPONENT(iVar93, iVar95, &iVar96, &iVar97, &iVar98);
							if (iVar98 == 8)
							{
								if (iVar96 != 0 && iVar96 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar96, 8, 4);
								}
								else
								{
									iVar0 = iVar97;
									iVar95 = iVar94 + 1;
								}
							}
							iVar95++;
						}
					}
				}
			}
			else if (iParam2 == 7)
			{
				iVar99 = -1;
				if (iParam3 >= 55)
				{
					iVar99 = GlobalFunc_4913(iParam1, iParam3, 7, 4);
				}
				if ((iVar99 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar99, joaat("TIE"), 0)) || (iVar99 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar99, joaat("BOWTIE"), 0)))
				{
					iVar100 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					bVar101 = false;
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar99, joaat("LOOSE_TIE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar99, joaat("LOOSE_BOWTIE"), 0))
					{
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar100, joaat("CLOSED_COLLAR"), 0))
						{
							bVar101 = true;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar100, joaat("OPEN_COLLAR"), 0))
					{
						bVar101 = true;
					}
					if (bVar101)
					{
						iVar102 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar100);
						iVar103 = 0;
						while (iVar103 < iVar102)
						{
							FILES::GET_VARIANT_COMPONENT(iVar100, iVar103, &iVar104, &iVar105, &iVar106);
							if (iVar106 == 8)
							{
								if (iVar104 != 0 && iVar104 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar104, 8, 4);
								}
								else
								{
									iVar0 = iVar105;
								}
								iVar103 = iVar102 + 1;
							}
							iVar103++;
						}
					}
				}
			}
		}
		else if (iParam4 == 6)
		{
			if (iParam2 == 4)
			{
				if (iParam3 >= 256)
				{
					iVar107 = GlobalFunc_4913(iParam1, iParam3, 4, 4);
					if (iVar107 != -1)
					{
						iVar108 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar107);
						iVar109 = 0;
						while (iVar109 < iVar108)
						{
							FILES::GET_FORCED_COMPONENT(iVar107, iVar109, &iVar110, &iVar111, &iVar112);
							if (iVar112 == 6)
							{
								if (iVar110 != 0 && iVar110 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar110, 6, 4);
								}
								else
								{
									iVar0 = iVar111;
									iVar109 = iVar108 + 1;
								}
							}
							iVar109++;
						}
					}
				}
			}
		}
		else if (iParam4 == 4)
		{
			if (iParam2 == 11)
			{
				if (iParam3 >= 256)
				{
					iVar113 = GlobalFunc_4913(iParam1, iParam3, 11, 4);
					if (iVar113 != -1)
					{
						iVar114 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar113);
						iVar115 = 0;
						while (iVar115 < iVar114)
						{
							FILES::GET_FORCED_COMPONENT(iVar113, iVar115, &iVar116, &iVar117, &iVar118);
							if (iVar118 == 4)
							{
								if (iVar116 != 0 && iVar116 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar116, 4, 4);
								}
								else
								{
									iVar0 = iVar117;
									iVar115 = iVar114 + 1;
								}
							}
							iVar115++;
						}
					}
				}
			}
		}
		else if (iParam4 == 7)
		{
			if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar119 = GlobalFunc_4913(iParam1, iParam3, 14, 4);
					if (iVar119 != -1)
					{
						iVar120 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar119);
						iVar121 = 0;
						while (iVar121 < iVar120)
						{
							FILES::GET_FORCED_COMPONENT(iVar119, iVar121, &iVar122, &iVar123, &iVar124);
							if (iVar124 == 7)
							{
								if (iVar122 != 0 && iVar122 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar122, 7, 4);
								}
								else
								{
									iVar0 = iVar123;
									iVar121 = iVar120 + 1;
								}
							}
							iVar121++;
						}
					}
				}
			}
		}
		else if (iParam4 == 14)
		{
			if (iParam2 == 1)
			{
				if (iParam3 >= 26)
				{
					iVar125 = GlobalFunc_4913(iParam1, iParam3, 1, 4);
					if (iVar125 != -1)
					{
						iVar126 = FILES::GET_SHOP_PED_APPAREL_FORCED_PROP_COUNT(iVar125);
						iVar127 = 0;
						while (iVar127 < iVar126)
						{
							FILES::GET_FORCED_PROP(iVar125, iVar127, &iVar128, &iVar129, &iVar130);
							if (iVar130 == iParam5)
							{
								if (iVar128 != 0 && iVar128 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar128, 14, 4);
									iVar127 = iVar126 + 1;
								}
								else
								{
									iVar0 = iVar129;
									iVar127 = iVar126 + 1;
								}
							}
							iVar127++;
						}
					}
				}
			}
		}
	}
	return iVar0;
}

int func_497(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x4C07E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;
	int iVar13;
	
	*iParam4 = -99;
	switch (iParam1)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam2)
			{
				case 1:
					if (((((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8)) || iParam3 == 9) || (iParam3 >= 14 && iParam3 <= 17)) || (iParam3 >= 22 && iParam3 <= 25))
					{
						*iParam4 = 0;
					}
					if (iParam3 >= GlobalFunc_26(iParam1, 1))
					{
						GlobalFunc_10864(iParam1, 1, iParam3);
						if (Global_2621445 == joaat("CU_XMAS_CLOTHES"))
						{
							*iParam4 = 0;
						}
					}
					iVar0 = GlobalFunc_7150(iParam0, 1);
					if (iVar0 >= 26)
					{
						iVar1 = GlobalFunc_4913(iParam1, iVar0, 1, 3);
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("NIGHT_VISION"), 0))
						{
							iVar1 = GlobalFunc_4913(iParam1, iParam3, 1, 3);
							if (iVar1 != -1)
							{
								iVar2 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar1);
								iVar3 = 0;
								while (iVar3 < iVar2)
								{
									FILES::GET_FORCED_COMPONENT(iVar1, iVar3, &iVar4, &uVar5, &iVar6);
									if (iVar6 == 2)
									{
										if (iVar4 != 0 && iVar4 != joaat("0"))
										{
											*iParam4 = GlobalFunc_4914(iParam1, iVar4, 2, 3);
										}
										else
										{
											*iParam4 = uVar5;
											iVar3 = iVar2 + 1;
										}
									}
									iVar3++;
								}
							}
						}
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam2)
			{
				case 1:
					if (((((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8)) || iParam3 == 9) || (iParam3 >= 14 && iParam3 <= 17)) || (iParam3 >= 22 && iParam3 <= 25))
					{
						*iParam4 = 0;
					}
					if (iParam3 >= GlobalFunc_26(iParam1, 1))
					{
						GlobalFunc_10864(iParam1, 1, iParam3);
						if (Global_2621445 == joaat("CU_XMAS_CLOTHES"))
						{
							*iParam4 = 0;
						}
					}
					iVar7 = GlobalFunc_7150(iParam0, 1);
					if (iVar7 >= 26)
					{
						iVar8 = GlobalFunc_4913(iParam1, iVar7, 1, 4);
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("NIGHT_VISION"), 0))
						{
							iVar8 = GlobalFunc_4913(iParam1, iParam3, 1, 4);
							if (iVar8 != -1)
							{
								iVar9 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar8);
								iVar10 = 0;
								while (iVar10 < iVar9)
								{
									FILES::GET_FORCED_COMPONENT(iVar8, iVar10, &iVar11, &uVar12, &iVar13);
									if (iVar13 == 2)
									{
										if (iVar11 != 0 && iVar11 != joaat("0"))
										{
											*iParam4 = GlobalFunc_4914(iParam1, iVar11, 2, 4);
										}
										else
										{
											*iParam4 = uVar12;
											iVar10 = iVar9 + 1;
										}
									}
									iVar10++;
								}
							}
						}
					}
					break;
			}
			break;
	}
	if (*iParam4 != -99)
	{
		GlobalFunc_6784(741, iParam3, Global_68104, 1);
		GlobalFunc_6784(742, iParam2, Global_68104, 1);
		return 1;
	}
	return 0;
}

void func_498(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x4C345
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
					iParam2 = GlobalFunc_7150(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = GlobalFunc_7150(iParam0, 11);
				if (!GlobalFunc_6737(iVar0, iVar1))
				{
					return;
				}
			}
			GlobalFunc_9803(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!GlobalFunc_9719(iVar0, iParam2, 13) && !GlobalFunc_9719(iVar0, iParam2, 14)) && !GlobalFunc_9719(iVar0, iParam2, 15)) && !GlobalFunc_9719(iVar0, iParam2, 16)) && !GlobalFunc_9719(iVar0, iParam2, 71)) && !GlobalFunc_9719(iVar0, iParam2, 72))
				{
					GlobalFunc_9803(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = GlobalFunc_9002(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					GlobalFunc_9016(iParam0, iVar2);
				}
				else
				{
					GlobalFunc_9004(iVar2, 1, Global_68104);
				}
			}
		}
	}
}





int func_503(int iParam0, int iParam1, int iParam2)//Position - 0x4C5B8
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
				if (func_434(iParam0, iParam1, iVar0))
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
				if (func_434(iParam0, iParam1, iVar1))
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
			return GlobalFunc_7150(iParam0, iParam1);
		}
	}
	return -99;
}












































void func_547(int iParam0)//Position - 0x64825
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
		func_414(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
		if (!Global_89948[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!GlobalFunc_526(49))
				{
					iVar1 = func_169(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					GlobalFunc_11185(GlobalFunc_4917(0), 12, 16, 0, 0, 0, 0);
				}
				if (!GlobalFunc_526(44))
				{
					iVar1 = func_169(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_169(iParam0, 4, -1);
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
				iVar1 = func_169(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				GlobalFunc_521(iVar0);
				func_414(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
			}
		}
		Global_89948[iVar0] = 1;
	}
}








void func_555()//Position - 0x65233
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_760 - 1))
	{
		if (!PED::IS_PED_INJURED(Local_760[iVar0 /*28*/]))
		{
			switch (iLocal_74[iVar0])
			{
				case 0:
					switch (iVar0)
					{
						case 0:
						case 1:
						case 2:
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_760[iVar0 /*28*/], 0);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_760[iVar0 /*28*/], Local_760[iVar0 /*28*/].f_14, 2f, 0, 0);
							TASK::TASK_COMBAT_PED(Local_760[iVar0 /*28*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							iLocal_74[iVar0] = 1;
							break;
						
						case 3:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1183[0 /*15*/], 0))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1183[0 /*15*/]))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1183[0 /*15*/]) + 500f) > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(Local_1183[0 /*15*/].f_13, "lkfbi1")
									{
										VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1183[0 /*15*/]);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_760[iVar0 /*28*/], 37, 1);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_760[iVar0 /*28*/], 0);
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_760[iVar0 /*28*/], Local_760[iVar0 /*28*/].f_14, 2f, 0, 0);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_760[iVar0 /*28*/], 200f, 0);
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_760[iVar0 /*28*/]));
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_760[iVar0 /*28*/].f_1);
										iLocal_74[iVar0] = 4;
									}
								}
							}
							else
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_760[iVar0 /*28*/], 37, 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_760[iVar0 /*28*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_760[iVar0 /*28*/], Local_760[iVar0 /*28*/].f_14, 2f, 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_760[iVar0 /*28*/], 200f, 0);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_760[iVar0 /*28*/]));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_760[iVar0 /*28*/].f_1);
								iLocal_74[iVar0] = 4;
							}
							break;
						
						case 4:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1183[0 /*15*/], 0))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1183[0 /*15*/]))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_1750);
									TASK::TASK_PAUSE(0, 500);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_1750);
									TASK::TASK_PERFORM_SEQUENCE(Local_760[iVar0 /*28*/], uLocal_1750);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_1750);
									iLocal_74[iVar0] = 1;
								}
							}
							else
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_760[iVar0 /*28*/], 37, 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_760[iVar0 /*28*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_760[iVar0 /*28*/], Local_760[iVar0 /*28*/].f_14, 2f, 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_760[iVar0 /*28*/], 200f, 0);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_760[iVar0 /*28*/]));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_760[iVar0 /*28*/].f_1);
								iLocal_74[iVar0] = 4;
							}
							break;
					}
					break;
				
				case 1:
					switch (iVar0)
					{
						case 0:
						case 1:
						case 2:
							if (ENTITY::IS_ENTITY_AT_COORD(Local_760[iVar0 /*28*/], Local_760[iVar0 /*28*/].f_14, 4f, 4f, 4f, 0, 1, 0))
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_760[iVar0 /*28*/], 51, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_760[iVar0 /*28*/], 50, 1);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_760[iVar0 /*28*/]));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_760[iVar0 /*28*/].f_1);
								iLocal_74[iVar0] = 4;
							}
							break;
						
						case 4:
							if (func_306(Local_760[iVar0 /*28*/], 242628503, -2))
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_760[iVar0 /*28*/], 37, 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_760[iVar0 /*28*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_760[iVar0 /*28*/], Local_760[iVar0 /*28*/].f_14, 2f, 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_760[iVar0 /*28*/], 200f, 0);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_760[iVar0 /*28*/]));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_760[iVar0 /*28*/].f_1);
								iLocal_74[iVar0] = 4;
							}
							break;
					}
					break;
				
				case 4:
					break;
				}
		}
		iVar0++;
	}
}


void func_557()//Position - 0x655BB
{
	int iVar0;
	
	iVar0 = 0;
	switch (iLocal_1476)
	{
		case 0:
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1479))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1479) >= 0.95f)
				{
					if (func_337(1, 1, 1, 0))
					{
						RECORDING::_0x48621C9FCA3EBD28(4);
						MISC::SET_INSTANCE_PRIORITY_HINT(0);
						MISC::SET_FAKE_WANTED_LEVEL(3);
						iVar0 = 0;
						while (iVar0 <= (Local_86 - 1))
						{
							PED::DELETE_PED(&(Local_86[iVar0 /*28*/]));
							if (HUD::DOES_BLIP_EXIST(Local_86[iVar0 /*28*/].f_2))
							{
								HUD::REMOVE_BLIP(&(Local_86[iVar0 /*28*/].f_2));
							}
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 <= (Local_563 - 1))
						{
							PED::DELETE_PED(&(Local_563[iVar0 /*28*/]));
							if (HUD::DOES_BLIP_EXIST(Local_563[iVar0 /*28*/].f_2))
							{
								HUD::REMOVE_BLIP(&(Local_563[iVar0 /*28*/].f_2));
							}
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 <= (Local_901 - 1))
						{
							PED::DELETE_PED(&(Local_901[iVar0 /*28*/]));
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_901[iVar0 /*28*/].f_1);
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 <= (Local_1042 - 1))
						{
							PED::DELETE_PED(&(Local_1042[iVar0 /*28*/]));
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1042[iVar0 /*28*/].f_1);
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 <= (Local_1308 - 1))
						{
							OBJECT::DELETE_OBJECT(&(Local_1308[iVar0 /*24*/]));
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1308[iVar0 /*24*/].f_2);
							iVar0++;
						}
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&Local_1260);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1260.f_2);
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&Local_1284);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1284.f_2);
						MISC::CLEAR_AREA(233.4198f, -1355.469f, 29.559f, 200f, 1, 0, 0, 0);
						AUDIO::PREPARE_MUSIC_EVENT("FBI1_JUMP");
						AUDIO::START_AUDIO_SCENE("FBI_1_JUMP");
						PED::REMOVE_SCENARIO_BLOCKING_AREAS();
						iVar0 = 0;
						while (iVar0 <= (Local_1214 - 1))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_1214[iVar0 /*15*/]))
							{
								if (!ENTITY::IS_ENTITY_AT_COORD(Local_1214[iVar0 /*15*/], Local_1214[iVar0 /*15*/].f_3, 5f, 5f, 5f, 0, 1, 0))
								{
									ENTITY::SET_ENTITY_COORDS(Local_1214[iVar0 /*15*/], Local_1214[iVar0 /*15*/].f_3, 0, 0, 0, 1);
									ENTITY::SET_ENTITY_HEADING(Local_1214[iVar0 /*15*/], Local_1214[iVar0 /*15*/].f_6);
								}
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1214[iVar0 /*15*/]));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1214[iVar0 /*15*/].f_1);
							}
							iVar0++;
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_1357))
						{
							PHYSICS::BREAK_ENTITY_GLASS(Local_1357, 236.05f, -1357.488f, 40.02953f, 0.3f, -0.6866288f, 0.6827963f, -0.2496601f, 500f, 2, 1);
						}
						INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
						INTERIOR::CLEAR_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID());
						GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(0);
						Local_1551 = { 236.344f, -1356.722f, 39.304f };
						Local_1554 = { 0f, 0f, -40.68f };
						uLocal_1479 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1551, Local_1554, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_1479, "missfbi1", "ledge_jump", 1000f, -4f, 0, 0, 1148846080, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_1405[0 /*24*/], uLocal_1479, "ledge_jump_Bin", "missfbi1", 1000f, 1090519040, 0, 1148846080);
						ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_1405[0 /*24*/]);
						uLocal_1751 = CAM::CREATE_CAMERA(964613260, 1);
						CAM::PLAY_CAM_ANIM(uLocal_1751, "ledge_jump_cam", "missfbi1", Local_1551, Local_1554, 0, 2);
						CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_1_AGENT_BURSTS_THROUGH_DOOR"))
						{
							AUDIO::STOP_AUDIO_SCENE("FBI_1_AGENT_BURSTS_THROUGH_DOOR");
						}
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_1_ESCAPE_BASE_SCENE"))
						{
							AUDIO::STOP_AUDIO_SCENE("FBI_1_ESCAPE_BASE_SCENE");
						}
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_1_AIM_AT_WINDOW"))
						{
							AUDIO::STOP_AUDIO_SCENE("FBI_1_AIM_AT_WINDOW");
						}
						iLocal_1476++;
					}
				}
			}
			break;
		
		case 1:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1479))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1479) >= 0.09f)
				{
					iLocal_1476++;
				}
			}
			break;
		
		case 2:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1479))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1479) >= 0.21f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FBI_01_DMW_GARBAGE_LAND", PLAYER::PLAYER_PED_ID(), "FBI_01_DMW_02_SOUNDS", 0, 0);
					PAD::SET_PAD_SHAKE(0, 1000, 200);
					GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_fbi1_litter", 233.5f, -1355.5f, 31.3f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
					PED::APPLY_PED_DAMAGE_PACK(PLAYER::PLAYER_PED_ID(), "SCR_Dumpster", 0f, 1f);
					iLocal_1476++;
				}
			}
			break;
		
		case 3:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1479))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1479) >= 0.46f)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FBI1_LAND_TRUCK");
					iLocal_1476++;
				}
			}
			break;
		
		case 4:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1479))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1479) >= 0.95f)
				{
					STREAMING::REQUEST_MODEL(Local_1099.f_1);
					STREAMING::REQUEST_MODEL(Local_760[1 /*28*/].f_1);
					STREAMING::REQUEST_MODEL(Local_760[3 /*28*/].f_1);
					STREAMING::REQUEST_MODEL(Local_1183[0 /*15*/].f_1);
					STREAMING::REQUEST_MODEL(Local_1245.f_1);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1245.f_1, 1);
					STREAMING::REQUEST_ANIM_DICT("MISSFBI1LEADINOUTFBI_1_EXT");
					VEHICLE::REQUEST_VEHICLE_RECORDING(Local_1183[0 /*15*/].f_13, "lkfbi1");
					iLocal_1476++;
				}
			}
			break;
		
		case 5:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1479))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1479) >= 1f)
				{
					RECORDING::_0x81CBAE94390F9F89();
					STREAMING::NEW_LOAD_SCENE_STOP();
					GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
					STREAMING::REMOVE_ANIM_DICT("missfbi1");
					MISC::SET_TIME_SCALE(1f);
					MISC::SET_FAKE_WANTED_LEVEL(0);
					PLAYER::SET_MAX_WANTED_LEVEL(3);
					PED::SET_CREATE_RANDOM_COPS(0);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.5f);
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
					GlobalFunc_574(281, 0);
					AUDIO::DISTANT_COP_CAR_SIRENS(0);
					iLocal_1472 = 0;
					ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
					func_313(1, 0, 0, 0, 0, 3000, 1);
					CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
					PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
					GlobalFunc_164("LOSE_WANTED", 7500, 1);
					GlobalFunc_200(&uLocal_1560, 3);
					GlobalFunc_200(&uLocal_1560, 4);
					GlobalFunc_200(&uLocal_1560, 5);
					GlobalFunc_200(&uLocal_1560, 6);
					GlobalFunc_200(&uLocal_1560, 7);
					GlobalFunc_200(&uLocal_1560, 8);
					if (INTERIOR::IS_VALID_INTERIOR(iLocal_1752))
					{
						INTERIOR::UNPIN_INTERIOR(iLocal_1752);
					}
					VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
					AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_FIB_1_01", 0f);
					AUDIO::TRIGGER_MUSIC_EVENT("FBI1_LOSE_COPS_START");
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_1_JUMPR"))
					{
						AUDIO::STOP_AUDIO_SCENE("FBI_1_JUMP");
					}
					AUDIO::START_AUDIO_SCENE("FBI_1_LOSE_COPS");
					GlobalFunc_Checkpoint1(4, "outside coroners escape police", 1, 0, 0, 1);
					GlobalFunc_6796(PLAYER::PLAYER_PED_ID(), &Global_2544928);
					RECORDING::_0x81CBAE94390F9F89();
					iLocal_47 = 8;
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
				}
			}
			break;
	}
}


int func_559()//Position - 0x65C31
{
	func_614();
	RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	if (func_594())
	{
		iLocal_47 = 6;
		return 1;
	}
	func_592();
	func_154(0);
	func_590();
	func_588();
	func_586();
	func_584();
	func_581();
	func_579();
	func_577();
	func_575();
	func_567();
	func_565();
	func_564();
	if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
	{
		if (GlobalFunc_74("FBI1_help4"))
		{
			HUD::CLEAR_HELP(1);
			func_560("FBI1_help4", 1);
			HUD::FLASH_ABILITY_BAR(0);
		}
		if (MISC::IS_PC_VERSION())
		{
			if (GlobalFunc_74("FBI1_help4_KM"))
			{
				HUD::CLEAR_HELP(1);
				func_560("FBI1_help4", 1);
				HUD::FLASH_ABILITY_BAR(0);
			}
		}
	}
	return 0;
}

void func_560(char* sParam0, bool bParam1)//Position - 0x65CD8
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
		while (!bVar2 && iVar1 < iLocal_1485)
		{
			if (iLocal_1485[iVar1] == iVar0)
			{
				bVar2 = true;
			}
			else if (iLocal_1485[iVar1] == 0)
			{
				iLocal_1485[iVar1] = iVar0;
				bVar2 = true;
			}
			iVar1++;
		}
	}
	else
	{
		iVar3 = func_562(iVar0);
		if (iVar3 != -1)
		{
			iLocal_1485[iVar3] = 0;
			func_561();
		}
	}
}

void func_561()//Position - 0x65D53
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iLocal_1485 - 1))
	{
		if (iLocal_1485[iVar0] == 0)
		{
			if (iLocal_1485[iVar0 + 1] != 0)
			{
				iLocal_1485[iVar0] = iLocal_1485[iVar0 + 1];
				iLocal_1485[iVar0 + 1] = 0;
			}
		}
		iVar0++;
	}
}

int func_562(int iParam0)//Position - 0x65DA6
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_1485)
	{
		if (iLocal_1485[iVar0] == 0)
		{
			return -1;
		}
		else if (iLocal_1485[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}


void func_564()//Position - 0x65DFC
{
	switch (iLocal_1534)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(Local_86[11 /*28*/]))
			{
				iLocal_1534++;
			}
			break;
		
		case 1:
			if (PED::IS_PED_INJURED(Local_86[11 /*28*/]))
			{
				RECORDING::_0x293220DA1B46CEBC(3f, 2f, 2);
				iLocal_1534++;
			}
			break;
		
		case 2:
			break;
	}
}

void func_565()//Position - 0x65E58
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar0 = 0;
	switch (iLocal_1531)
	{
		case 0:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 251.106f, -1365.121f, 28.653f, 253.007f, -1366.745f, 31.153f, 1.5f, 0, 1, 0))
			{
				iLocal_1531++;
			}
			break;
		
		case 1:
			iVar4 = 0;
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			iVar0 = 0;
			while (iVar0 <= 10)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_86[iVar0 /*28*/]))
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_86[iVar0 /*28*/]))
					{
						if (((!func_566(Local_86[iVar0 /*28*/], 247.7852f, -1366.473f, 28.648f, "CorridorTop", "v_coroner") && !func_566(Local_86[iVar0 /*28*/], 256.6936f, -1363.869f, 29.5428f, "MainStairs", "v_coroner")) && !func_566(Local_86[iVar0 /*28*/], 250.0518f, -1368.504f, 38.5342f, "topoff_mid", "v_coroner")) && !ENTITY::IS_ENTITY_AT_COORD(Local_86[iVar0 /*28*/], Var1, 5f, 5f, 2.5f, 0, 1, 0))
						{
							PED::DELETE_PED(&(Local_86[iVar0 /*28*/]));
							if (HUD::DOES_BLIP_EXIST(Local_86[iVar0 /*28*/].f_2))
							{
								HUD::REMOVE_BLIP(&(Local_86[iVar0 /*28*/].f_2));
							}
							iVar4++;
						}
					}
				}
				else if (Local_86[iVar0 /*28*/].f_22)
				{
					iVar4++;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= (Local_901 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_86[iVar0 /*28*/]))
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_86[iVar0 /*28*/]))
					{
						PED::DELETE_PED(&(Local_86[iVar0 /*28*/]));
						iVar4++;
					}
				}
				else if (Local_86[iVar0 /*28*/].f_22)
				{
					iVar4++;
				}
				iVar0++;
			}
			if (iVar4 > (11 + Local_901))
			{
				iLocal_1531++;
			}
			break;
		
		case 2:
			break;
	}
}

int func_566(int iParam0, struct<3> Param1, char* sParam4, char* sParam5)//Position - 0x66034
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Param1, sParam5);
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

void func_567()//Position - 0x6608B
{
	if (!iLocal_1464)
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_combatpistol"), 0))
		{
			WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_combatpistol"), joaat("component_at_pi_flsh"));
			WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), joaat("weapon_combatpistol"), 80);
			func_568(0, joaat("weapon_combatpistol"), joaat("component_at_pi_flsh"), 1);
			iLocal_1464 = 1;
		}
	}
}

void func_568(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x660E0
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (GlobalFunc_42(iParam0))
	{
		uVar0 = GlobalFunc_7249(iParam0, iParam1, iParam2);
		iVar1 = GlobalFunc_5846(iParam2, iParam1);
		iVar2 = GlobalFunc_299(iVar1);
		if (bParam3)
		{
			MISC::SET_BIT(&uVar0, iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(&uVar0, iVar2);
		}
		func_569(iParam0, iParam1, iParam2, uVar0);
	}
}

void func_569(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x66133
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_5846(iParam2, iParam1);
	iVar1 = GlobalFunc_300(iVar0);
	switch (iVar1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_addon_purch_0"), uParam3, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_addon_purch_0"), iParam3, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_addon_purch_0"), iParam3, 1);
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_addon_purch_1"), iParam3, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_addon_purch_1"), iParam3, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_addon_purch_1"), iParam3, 1);
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_addon_purch_2"), iParam3, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_addon_purch_2"), iParam3, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_addon_purch_2"), iParam3, 1);
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_addon_purch_3"), iParam3, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_addon_purch_3"), iParam3, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_addon_purch_3"), iParam3, 1);
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_addon_purch_4"), iParam3, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_addon_purch_4"), iParam3, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_addon_purch_4"), iParam3, 1);
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_addon_purch_5"), iParam3, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_addon_purch_5"), iParam3, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_addon_purch_5"), iParam3, 1);
					break;
			}
			break;
		
		default:
			break;
	}
}






void func_575()//Position - 0x66FA2
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_1308[1 /*24*/]))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1308[1 /*24*/]))
		{
			OBJECT::DELETE_OBJECT(&(Local_1308[1 /*24*/]));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1308[1 /*24*/].f_2);
			if (HUD::DOES_BLIP_EXIST(Local_1308[1 /*24*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_1308[1 /*24*/].f_1));
			}
			GlobalFunc_8011(PLAYER::PLAYER_PED_ID(), 0);
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "PICK_UP_PARACHUTE", PLAYER::PLAYER_PED_ID(), "HUD_FRONTEND_CUSTOM_SOUNDSET", 0, 0);
			iLocal_1469 = 1;
		}
	}
}


void func_577()//Position - 0x67078
{
	switch (iLocal_1516)
	{
		case 0:
			if (func_578(&Local_86, 5))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FBI1_THREE_DEAD");
				iLocal_1516++;
			}
			if (AUDIO::PREPARE_MUSIC_EVENT("FBI1_LIFT_ENEMY"))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 252.686f, -1367.138f, 23.538f, 250.692f, -1365.47f, 26.1f, 1f, 0, 1, 0))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FBI1_LIFT_ENEMY");
					AUDIO::TRIGGER_MUSIC_EVENT("FBI1_THREE_DEAD");
					iLocal_1516 = 2;
				}
			}
			break;
		
		case 1:
			if (AUDIO::PREPARE_MUSIC_EVENT("FBI1_LIFT_ENEMY"))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 252.686f, -1367.138f, 23.538f, 250.692f, -1365.47f, 26.1f, 1f, 0, 1, 0))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FBI1_LIFT_ENEMY");
					RECORDING::_0x293220DA1B46CEBC(4f, 8f, 2);
					iLocal_1516++;
				}
			}
			break;
		
		case 2:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 243.591f, -1368.662f, 23.537f, 241.829f, -1367.184f, 26.137f, 1.3f, 0, 1, 0))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FBI1_STAIRWELL");
				iLocal_1516++;
			}
			break;
		
		case 3:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 251.106f, -1365.121f, 28.653f, 253.007f, -1366.745f, 31.153f, 1.5f, 0, 1, 0))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FBI1_2ND_STAIRWELL");
				iLocal_1516++;
			}
			break;
		
		case 4:
			if (AUDIO::PREPARE_MUSIC_EVENT("FBI1_TOP_FLOOR"))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 252.445f, -1367.718f, 38.246f, 250.278f, -1365.944f, 41.246f, 7.5f, 0, 1, 0))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FBI1_TOP_FLOOR");
					iLocal_1516++;
				}
			}
			break;
		
		case 5:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 238.427f, -1362.878f, 38.539f, 240.223f, -1360.73f, 41.746f, 4f, 0, 1, 0))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FBI1_ESCAPE");
				iLocal_1516++;
			}
			break;
	}
}

int func_578(int iParam0, int iParam1)//Position - 0x67295
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (*iParam0 - 1))
	{
		if ((iParam0[iVar1 /*28*/])->f_22)
		{
			if (PED::IS_PED_INJURED((*iParam0)[iVar1 /*28*/]))
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

void func_579()//Position - 0x672E3
{
	switch (iLocal_1519)
	{
		case 0:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 273.212f, -1344.521f, 23.538f, 276.105f, -1341.074f, 26.538f, 2f, 0, 1, 0))
			{
				PLAYER::SPECIAL_ABILITY_UNLOCK(GlobalFunc_4917(0));
				PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), 1);
				PLAYER::SPECIAL_ABILITY_CHARGE_NORMALIZED(PLAYER::PLAYER_ID(), 1f, 1);
				if (PAD::_IS_USING_KEYBOARD(0))
				{
					GlobalFunc_159("FBI1_help4_KM", 12500);
				}
				else
				{
					GlobalFunc_159("FBI1_help4", 12500);
				}
				HUD::FLASH_ABILITY_BAR(10000);
				iLocal_1519++;
			}
			break;
		
		case 1:
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				iLocal_1520 = MISC::GET_GAME_TIMER();
				iLocal_1519++;
			}
			break;
		
		case 2:
			if (GlobalFunc_588(&iLocal_1520, 2000))
			{
				GlobalFunc_159("FBI1_help5", 12000);
				iLocal_1519++;
			}
			break;
		
		case 3:
			break;
	}
}


void func_581()//Position - 0x673E1
{
	switch (iLocal_1509)
	{
		case 0:
			if (func_583("cia_attak0") || (Local_86[15 /*28*/].f_22 && PED::IS_PED_INJURED(Local_86[15 /*28*/])))
			{
				if (!GlobalFunc_5172(&Local_1725, 0))
				{
					HUD::CLEAR_PRINTS();
					GlobalFunc_164("FBI1_God_7", 7500, 1);
					iLocal_1508 = MISC::GET_GAME_TIMER();
					iLocal_1509++;
				}
			}
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
	if (GlobalFunc_588(&iLocal_1508, 13000))
	{
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			if (!GlobalFunc_5172(&Local_1725, 0))
			{
				if (func_582())
				{
					if (GlobalFunc_10618(&uLocal_1560, "fbi1aud", "mik_attk0", 6, 0, 0, 0))
					{
						iLocal_1508 = MISC::GET_GAME_TIMER();
					}
				}
			}
		}
	}
}

int func_582()//Position - 0x674B4
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_86 - 1))
	{
		if (!PED::IS_PED_INJURED(Local_86[iVar0 /*28*/]))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_563 - 1))
	{
		if (!PED::IS_PED_INJURED(Local_563[iVar0 /*28*/]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_583(char* sParam0)//Position - 0x67510
{
	return func_562(MISC::GET_HASH_KEY(sParam0)) != -1;
}

int func_584()//Position - 0x67524
{
	if (!func_583("lift0"))
	{
		if (!GlobalFunc_5172(&Local_1725, 0))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 246.014f, -1370.986f, 23.537f, 248.076f, -1372.73f, 26.537f, 3.2f, 0, 1, 0))
			{
				if (GlobalFunc_10618(&uLocal_1560, "FBI1AUD", "lift0", 6, 0, 0, 0))
				{
					func_560("lift0", 1);
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(Local_86[9 /*28*/]))
	{
		if (!func_583("cia_attak4"))
		{
			if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_1535[8]) < -0.5f && OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_1535[9]) > 0.5f)
			{
				if (!GlobalFunc_5172(&Local_1725, 0))
				{
					if (GlobalFunc_10618(&uLocal_1560, "FBI1AUD", "cia_attak4", 6, 0, 0, 0))
					{
						func_560("cia_attak4", 1);
					}
				}
			}
		}
	}
	if (bLocal_1456)
	{
		if (func_585(iLocal_1535[8], iLocal_1535[9], 1, 0.5f))
		{
			return 1;
		}
	}
	return 0;
}

int func_585(var uParam0, var uParam1, bool bParam2, float fParam3)//Position - 0x6762F
{
	float fVar0;
	float fVar1;
	
	if (OBJECT::DOOR_SYSTEM_GET_IS_PHYSICS_LOADED(uParam0) && OBJECT::DOOR_SYSTEM_GET_IS_PHYSICS_LOADED(uParam1))
	{
		fVar0 = OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(uParam0);
		fVar1 = OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(uParam1);
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
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(uParam0, fVar0, 0, 0);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam0, 4, 0, 1);
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(uParam1, fVar1, 0, 0);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1, 4, 0, 1);
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
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(uParam0, fVar0, 0, 0);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam0, 4, 0, 1);
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(uParam1, fVar1, 0, 0);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1, 4, 0, 1);
			if (fVar0 == 0f && fVar1 == 0f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_586()//Position - 0x67730
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 2;
	while (iVar0 <= (Local_901 - 1))
	{
		if (!PED::IS_PED_INJURED(Local_901[iVar0 /*28*/]))
		{
			switch (iLocal_80[iVar0])
			{
				case 0:
					switch (iVar0)
					{
						case 2:
						case 4:
							TASK::OPEN_SEQUENCE_TASK(&uLocal_1750);
							TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							TASK::TASK_HANDS_UP(0, -1, 0, -1, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_1750);
							TASK::TASK_PERFORM_SEQUENCE(Local_901[iVar0 /*28*/], uLocal_1750);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_1750);
							iLocal_80[iVar0] = 1;
							break;
						
						case 3:
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 273.347f, -1344.646f, 23.247f, 276.306f, -1341.125f, 26.747f, 2f, 0, 1, 0))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_1750);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_901[iVar0 /*28*/].f_14, 2f, -1, 1048576000, 0, 1193033728);
								TASK::TASK_COWER(0, -1);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_1750);
								TASK::TASK_PERFORM_SEQUENCE(Local_901[iVar0 /*28*/], uLocal_1750);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_1750);
								GlobalFunc_5122(Local_901[iVar0 /*28*/], "SCREAM_PANIC", 24);
								iLocal_80[iVar0] = 1;
							}
							break;
					}
					break;
				
				case 1:
					switch (iVar0)
					{
						case 2:
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 267.343f, -1351.262f, 23.543f, 254.703f, -1340.656f, 26f, 6f, 0, 1, 0))
							{
								if (CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_901[iVar0 /*28*/], 1), 1f))
								{
									iLocal_1472 = MISC::GET_GAME_TIMER();
									iLocal_80[iVar0] = 3;
								}
							}
							break;
						
						case 3:
							if (!ENTITY::IS_ENTITY_AT_COORD(Local_901[iVar0 /*28*/], Local_901[iVar0 /*28*/].f_14, 2f, 2f, 2.5f, 0, 1, 0))
							{
								if (func_587(Local_901[iVar0 /*28*/], 242628503))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_1750);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_901[iVar0 /*28*/].f_14, 2f, -1, 1048576000, 0, 1193033728);
									TASK::TASK_COWER(0, -1);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_1750);
									TASK::TASK_PERFORM_SEQUENCE(Local_901[iVar0 /*28*/], uLocal_1750);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_1750);
								}
							}
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_901[iVar0 /*28*/], 1), 1) < 3f)
							{
								if (GlobalFunc_588(&(iLocal_1522[iVar0]), 10000))
								{
									GlobalFunc_5122(Local_901[iVar0 /*28*/], "GENERIC_FRIGHTENED_HIGH", 24);
									iLocal_1522[iVar0] = MISC::GET_GAME_TIMER();
								}
							}
							break;
						
						case 4:
							if (!ENTITY::IS_ENTITY_AT_COORD(Local_901[iVar0 /*28*/], Local_901[iVar0 /*28*/].f_11, 2f, 2f, 2.5f, 0, 1, 0))
							{
								if (func_587(Local_901[iVar0 /*28*/], 242628503))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_1750);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_901[iVar0 /*28*/].f_11, (1f - 1f), 20000, 1048576000, 0, 1193033728);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
									TASK::TASK_HANDS_UP(0, -1, 0, -1, 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_1750);
									TASK::TASK_PERFORM_SEQUENCE(Local_901[iVar0 /*28*/], uLocal_1750);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_1750);
								}
							}
							break;
					}
					break;
				
				case 3:
					switch (iVar0)
					{
						case 2:
							if (GlobalFunc_588(&iLocal_1472, 250))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_1750);
								TASK::TASK_COWER(0, -1);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_1750);
								TASK::TASK_PERFORM_SEQUENCE(Local_901[iVar0 /*28*/], uLocal_1750);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_1750);
								iLocal_80[iVar0] = 4;
							}
							break;
						
						case 4:
							if (GlobalFunc_588(&iLocal_1512, 2000))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_1750);
								TASK::TASK_CLEAR_LOOK_AT(0);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_901[0 /*28*/].f_11, 2f, -1, 1048576000, 0, 1193033728);
								TASK::TASK_COWER(0, -1);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_1750);
								TASK::TASK_PERFORM_SEQUENCE(Local_901[iVar0 /*28*/], uLocal_1750);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_1750);
								iLocal_80[iVar0] = 4;
							}
							break;
					}
					break;
				
				case 4:
					switch (iVar0)
					{
						case 2:
							if (func_306(Local_901[iVar0 /*28*/], 242628503, -2))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_1750);
								TASK::TASK_COWER(0, -1);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_1750);
								TASK::TASK_PERFORM_SEQUENCE(Local_901[iVar0 /*28*/], uLocal_1750);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_1750);
							}
							if (!iLocal_1470)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_901[iVar0 /*28*/], 1), 1) > 15f)
								{
									AUDIO::STOP_PED_SPEAKING(Local_901[iVar0 /*28*/], 1);
								}
							}
							else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_901[iVar0 /*28*/], 1), 1) < 10f)
							{
								AUDIO::STOP_PED_SPEAKING(Local_901[iVar0 /*28*/], 0);
								iLocal_1470 = 0;
							}
							break;
					}
					break;
				}
		}
		iVar0++;
	}
}

int func_587(int iParam0, int iParam1)//Position - 0x67BBC
{
	int iVar0;
	
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(uParam0, iParam1);
	if (iVar0 == 7 || iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

void func_588()//Position - 0x67BE4
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_563 - 1))
	{
		if (!PED::IS_PED_INJURED(Local_563[iVar0 /*28*/]))
		{
			switch (iLocal_66[iVar0])
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							TASK::OPEN_SEQUENCE_TASK(&uLocal_1750);
							TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, 242.2713f, -1367.464f, 38.53431f, -1, 0, 0f, 0, 0, uLocal_1772[0], 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_1750);
							TASK::TASK_PERFORM_SEQUENCE(Local_563[iVar0 /*28*/], uLocal_1750);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_1750);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_563[iVar0 /*28*/], 0, 0);
							iLocal_66[iVar0] = 1;
							break;
						
						case 1:
							if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 247.127f, -1367.785f, 38.54f, 249.778f, -1364.398f, 42.04f, 5f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 244.069f, -1383.662f, 38.542f, 246.962f, -1380.216f, 42.042f, 2f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 247.172f, -1369.088f, 38.537f, 249.7f, -1371.208f, 42.042f, 2f, 0, 1, 0)) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_563[iVar0 /*28*/], 1), 1) < 8f)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_563[iVar0 /*28*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_563[iVar0 /*28*/], Local_563[iVar0 /*28*/].f_14, 1f, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_563[iVar0 /*28*/], 51, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_563[iVar0 /*28*/], 50, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_563[iVar0 /*28*/], 57, 0);
								TASK::TASK_COMBAT_PED(Local_563[iVar0 /*28*/], PLAYER::PLAYER_PED_ID(), 0, 16);
								iLocal_66[iVar0] = 4;
							}
							break;
						
						case 2:
							TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_563[iVar0 /*28*/], 239.4913f, -1379.236f, 38.53422f, -1, 0, 0f, 1, 1, uLocal_1772[2], 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_563[iVar0 /*28*/], 1, 0);
							iLocal_66[iVar0] = 1;
							break;
						
						case 3:
						case 4:
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_563[iVar0 /*28*/], 0);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_563[iVar0 /*28*/], Local_563[iVar0 /*28*/].f_14, 2f, 0, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_563[iVar0 /*28*/], 51, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_563[iVar0 /*28*/], 50, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_563[iVar0 /*28*/], 57, 0);
							TASK::TASK_COMBAT_PED(Local_563[iVar0 /*28*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							iLocal_66[iVar0] = 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar0)
					{
						case 0:
							if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 250.167f, -1365.738f, 38.539f, 252.706f, -1367.846f, 41.039f, 1.4f, 0, 1, 0) || func_307(&(Local_563[iVar0 /*28*/]), &(Local_563[iVar0 /*28*/].f_18))) || GlobalFunc_592(&(Local_563[iVar0 /*28*/]), 15f, 1))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_563[iVar0 /*28*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_563[iVar0 /*28*/], Local_563[iVar0 /*28*/].f_14, 1f, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_563[iVar0 /*28*/], 51, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_563[iVar0 /*28*/], 50, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_563[iVar0 /*28*/], 57, 0);
								TASK::TASK_COMBAT_PED(Local_563[iVar0 /*28*/], PLAYER::PLAYER_PED_ID(), 0, 16);
								iLocal_66[iVar0] = 4;
							}
							break;
						
						case 1:
							if (!func_583("cia_attak5"))
							{
								if (!GlobalFunc_5172(&Local_1725, 0))
								{
									if (GlobalFunc_10618(&uLocal_1560, "FBI1AUD", "cia_attak5", 7, 0, 0, 0))
									{
										func_560("cia_attak5", 1);
									}
								}
							}
							if (func_587(Local_563[iVar0 /*28*/], 242628503))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_563[iVar0 /*28*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_563[iVar0 /*28*/], Local_563[iVar0 /*28*/].f_14, 1f, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_563[iVar0 /*28*/], 51, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_563[iVar0 /*28*/], 50, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_563[iVar0 /*28*/], 57, 0);
								TASK::TASK_COMBAT_PED(Local_563[iVar0 /*28*/], PLAYER::PLAYER_PED_ID(), 0, 16);
								iLocal_66[iVar0] = 4;
							}
							break;
						
						case 2:
							if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 252.643f, -1367.767f, 38.534f, 250.109f, -1365.654f, 41.534f, 1.3f, 0, 1, 0) || func_307(&(Local_563[iVar0 /*28*/]), &(Local_563[iVar0 /*28*/].f_18))) || GlobalFunc_592(&(Local_563[iVar0 /*28*/]), 15f, 1))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_563[iVar0 /*28*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_563[iVar0 /*28*/], Local_563[iVar0 /*28*/].f_14, 1f, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_563[iVar0 /*28*/], 51, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_563[iVar0 /*28*/], 50, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_563[iVar0 /*28*/], 57, 0);
								TASK::TASK_COMBAT_PED(Local_563[iVar0 /*28*/], PLAYER::PLAYER_PED_ID(), 0, 16);
								iLocal_66[iVar0] = 4;
							}
							break;
						
						case 3:
						case 4:
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_563[iVar0 /*28*/], 1), 1) < 5f)
							{
								PED::REMOVE_PED_DEFENSIVE_AREA(Local_563[iVar0 /*28*/], 0);
								PED::SET_PED_COMBAT_MOVEMENT(Local_563[iVar0 /*28*/], 2);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_563[iVar0 /*28*/], 50, 1);
								iLocal_66[iVar0] = 4;
							}
							break;
					}
					break;
				
				case 3:
					break;
				
				case 4:
					switch (iVar0)
					{
						case 1:
							if (!func_583("cia_attak5"))
							{
								if (!GlobalFunc_5172(&Local_1725, 0))
								{
									if (GlobalFunc_10618(&uLocal_1560, "FBI1AUD", "cia_attak5", 7, 0, 0, 0))
									{
										func_560("cia_attak5", 1);
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


void func_590()//Position - 0x68255
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_86 - 1))
	{
		if (!PED::IS_PED_INJURED(Local_86[iVar0 /*28*/]))
		{
			switch (iLocal_48[iVar0])
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							PED::REGISTER_TARGET(Local_86[iVar0 /*28*/], PLAYER::PLAYER_PED_ID());
							TASK::OPEN_SEQUENCE_TASK(&uLocal_1750);
							TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_86[iVar0 /*28*/].f_14, 2000, 0, 0.25f, 0, 0, uLocal_1754[0], 1);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_1750);
							TASK::TASK_PERFORM_SEQUENCE(Local_86[iVar0 /*28*/], uLocal_1750);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_1750);
							iLocal_48[iVar0] = 1;
							break;
						
						case 1:
							TASK::TASK_AIM_GUN_AT_COORD(Local_86[iVar0 /*28*/], 270.7f, -1343.9f, 25.3f, -1, 0, 0);
							iLocal_48[iVar0] = 1;
							break;
						
						case 2:
							TASK::TASK_AIM_GUN_AT_COORD(Local_86[iVar0 /*28*/], 270.7f, -1343.9f, 25.3f, -1, 0, 0);
							iLocal_48[iVar0] = 1;
							break;
						
						case 3:
							TASK::TASK_AIM_GUN_AT_COORD(Local_86[iVar0 /*28*/], 270.7f, -1343.9f, 25.3f, -1, 0, 0);
							iLocal_48[iVar0] = 1;
							break;
						
						case 4:
							TASK::OPEN_SEQUENCE_TASK(&uLocal_1750);
							TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, 262.6846f, -1358.729f, 23.53772f, -1, 0, 0f, 0, 0, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_1750);
							TASK::TASK_PERFORM_SEQUENCE(Local_86[iVar0 /*28*/], uLocal_1750);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_1750);
							iLocal_48[iVar0] = 1;
							break;
						
						case 5:
							if (PED::IS_PED_INJURED(Local_86[6 /*28*/]) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 256.101f, -1364.552f, 23.538f, 252.639f, -1361.677f, 26.538f, 2.2f, 0, 1, 0))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_1750);
								TASK::TASK_PAUSE(0, (50 * MISC::GET_RANDOM_INT_IN_RANGE(1, 2)));
								TASK::CLOSE_SEQUENCE_TASK(uLocal_1750);
								TASK::TASK_PERFORM_SEQUENCE(Local_86[iVar0 /*28*/], uLocal_1750);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_1750);
								iLocal_48[iVar0] = 1;
							}
							break;
						
						case 6:
							TASK::TASK_AIM_GUN_AT_COORD(Local_86[iVar0 /*28*/], 270.7f, -1343.9f, 25.3f, -1, 0, 0);
							iLocal_48[iVar0] = 1;
							break;
						
						case 7:
							TASK::TASK_AIM_GUN_AT_COORD(Local_86[7 /*28*/], 268.82f, -1343.19f, 25.13f, -1, 0, 0);
							iLocal_48[iVar0] = 2;
							break;
						
						case 8:
							TASK::TASK_AIM_GUN_AT_COORD(Local_86[iVar0 /*28*/], 270.7f, -1343.9f, 25.3f, -1, 0, 0);
							iLocal_48[iVar0] = 1;
							break;
						
						case 9:
							AUDIO::STOP_PED_SPEAKING(Local_86[iVar0 /*28*/], 1);
							TASK::TASK_AIM_GUN_AT_ENTITY(Local_86[iVar0 /*28*/], PLAYER::PLAYER_PED_ID(), -1, 0);
							iLocal_48[iVar0] = 1;
							break;
						
						case 10:
							if ((PED::IS_PED_INJURED(Local_86[2 /*28*/]) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 267.96f, -1350.535f, 23.538f, 264.483f, -1347.523f, 26.538f, 2f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 259.288f, -1353.374f, 23.536f, 250.221f, -1345.979f, 28.536f, 2f, 0, 1, 0))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_86[iVar0 /*28*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_86[iVar0 /*28*/], Local_86[iVar0 /*28*/].f_14, 2f, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_86[iVar0 /*28*/], 51, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_86[iVar0 /*28*/], 50, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_86[iVar0 /*28*/], 200f, 0);
								iLocal_48[iVar0] = 4;
							}
							break;
						
						case 11:
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 236.294f, -1369.881f, 25.801f, 237.938f, -1371.343f, 29.301f, 5f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 234.6f, -1371.647f, 26.095f, 238.332f, -1374.823f, 29.095f, 2.2f, 0, 1, 0))
							{
								PED::SET_PED_CAPSULE(Local_86[iVar0 /*28*/], 0.5f);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_1750);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_86[iVar0 /*28*/].f_14, PLAYER::PLAYER_PED_ID(), 2f, 0, 0.5f, 0.8f, 1, 0, 0, -957453492, 20000);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_1750);
								TASK::TASK_PERFORM_SEQUENCE(Local_86[iVar0 /*28*/], uLocal_1750);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_1750);
								AUDIO::START_AUDIO_SCENE("FBI_1_AGENT_BURSTS_THROUGH_DOOR");
								iLocal_48[iVar0] = 1;
							}
							break;
						
						case 12:
							if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 255.901f, -1363.158f, 28.578f, 257.557f, -1364.607f, 32.078f, 3f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 253.856f, -1358.69f, 28.654f, 257.135f, -1361.471f, 31.654f, 2.1f, 0, 1, 0)) || func_307(&(Local_86[iVar0 /*28*/]), &(Local_86[iVar0 /*28*/].f_18)))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_1750);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_86[iVar0 /*28*/].f_14, PLAYER::PLAYER_PED_ID(), 2f, 0, 0.5f, 0.8f, 1, 0, 0, -957453492, 20000);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_1750);
								TASK::TASK_PERFORM_SEQUENCE(Local_86[iVar0 /*28*/], uLocal_1750);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_1750);
								iLocal_48[iVar0] = 1;
							}
							break;
						
						case 13:
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 244.371f, -1367.501f, 28.648f, 242.762f, -1366.151f, 31.648f, 1.4f, 0, 1, 0))
							{
								iLocal_48[iVar0] = 1;
							}
							break;
						
						case 14:
							if ((PED::IS_PED_INJURED(Local_86[2 /*28*/]) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 267.96f, -1350.535f, 23.538f, 264.483f, -1347.523f, 26.538f, 2f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 259.288f, -1353.374f, 23.536f, 250.221f, -1345.979f, 28.536f, 2f, 0, 1, 0))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_1750);
								TASK::TASK_PAUSE(0, 2000);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_1750);
								TASK::TASK_PERFORM_SEQUENCE(Local_86[iVar0 /*28*/], uLocal_1750);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_1750);
								iLocal_48[iVar0] = 1;
							}
							break;
						
						case 15:
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 287.544f, -1354.412f, 23.247f, 294.497f, -1345.887f, 26.247f, 13.4f, 0, 1, 0))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_1750);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_86[iVar0 /*28*/].f_14, PLAYER::PLAYER_PED_ID(), 2f, 0, 0.5f, 4f, 1, 0, 0, -957453492, 20000);
								TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 7500, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_1750);
								TASK::TASK_PERFORM_SEQUENCE(Local_86[iVar0 /*28*/], uLocal_1750);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_1750);
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_1750);
								TASK::TASK_PAUSE(0, 500);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_86[iVar0 /*28*/].f_14, PLAYER::PLAYER_PED_ID(), 2f, 0, 0.5f, 4f, 1, 0, 0, -957453492, 20000);
								TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 7500, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_1750);
								TASK::TASK_PERFORM_SEQUENCE(Local_86[iVar0 /*28*/], uLocal_1750);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_1750);
							}
							iLocal_48[iVar0] = 1;
							break;
						
						case 16:
							TASK::OPEN_SEQUENCE_TASK(&uLocal_1750);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_86[iVar0 /*28*/].f_14, PLAYER::PLAYER_PED_ID(), 1.5f, 0, 0.5f, 0.8f, 1, 0, 0, -957453492, 20000);
							TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, 280.03f, -1344.69f, 23.53f, -1, 1, 0f, 0, 0, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_1750);
							TASK::TASK_PERFORM_SEQUENCE(Local_86[iVar0 /*28*/], uLocal_1750);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_1750);
							PED::SET_COMBAT_FLOAT(Local_86[iVar0 /*28*/], 3, 10f);
							PED::SET_COMBAT_FLOAT(Local_86[iVar0 /*28*/], 4, 5f);
							iLocal_48[iVar0] = 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar0)
					{
						case 0:
							if (((func_587(Local_86[iVar0 /*28*/], 242628503) || func_307(&(Local_86[iVar0 /*28*/]), &(Local_86[iVar0 /*28*/].f_18))) || (GlobalFunc_592(&(Local_86[iVar0 /*28*/]), 10f, 1) && PED::IS_PED_IN_COVER(Local_86[iVar0 /*28*/], 1))) || (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 276.603f, -1347.275f, 23.248f, 279.499f, -1343.83f, 26.748f, 2f, 0, 1, 0) && PED::IS_PED_IN_COVER(Local_86[iVar0 /*28*/], 1)))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_86[iVar0 /*28*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_86[iVar0 /*28*/], Local_86[iVar0 /*28*/].f_14, 8f, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_86[iVar0 /*28*/], 51, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_86[iVar0 /*28*/], 50, 1);
								TASK::TASK_COMBAT_PED(Local_86[iVar0 /*28*/], PLAYER::PLAYER_PED_ID(), 0, 16);
								iLocal_48[iVar0] = 4;
							}
							break;
						
						case 1:
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 272.711f, -1344.186f, 23.538f, 275.649f, -1340.646f, 26.538f, 1.6f, 0, 1, 0))
							{
								WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_86[iVar0 /*28*/], 0.5f, 0.8f);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_86[iVar0 /*28*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_86[iVar0 /*28*/], Local_86[iVar0 /*28*/].f_14, 2f, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_86[iVar0 /*28*/], 51, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_86[iVar0 /*28*/], 50, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_86[iVar0 /*28*/], 200f, 0);
								iLocal_48[iVar0] = 4;
							}
							break;
						
						case 2:
							PED::SET_PED_RESET_FLAG(Local_86[iVar0 /*28*/], 282, 1);
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 272.293f, -1345.321f, 23.247f, 268.848f, -1342.426f, 26.747f, 2f, 0, 1, 0) || (PED::IS_PED_INJURED(Local_86[0 /*28*/]) && PED::IS_PED_INJURED(Local_86[1 /*28*/])))
							{
								if (!func_583("cia_attak2"))
								{
									if (GlobalFunc_10618(&uLocal_1560, "FBI1AUD", "cia_attak2", 7, 0, 0, 0))
									{
										func_560("cia_attak2", 1);
									}
								}
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_86[iVar0 /*28*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_86[iVar0 /*28*/], Local_86[iVar0 /*28*/].f_14, 2f, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_86[iVar0 /*28*/], 73, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_86[iVar0 /*28*/], 51, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_86[iVar0 /*28*/], 50, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_86[iVar0 /*28*/], 200f, 0);
								iLocal_48[iVar0] = 4;
							}
							break;
						
						case 3:
							PED::SET_PED_RESET_FLAG(Local_86[iVar0 /*28*/], 282, 1);
							PED::SET_PED_RESET_FLAG(Local_86[iVar0 /*28*/], 258, 1);
							if (PED::IS_PED_INJURED(Local_86[1 /*28*/]) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 271.829f, -1345.845f, 23.538f, 268.325f, -1342.712f, 26.538f, 1.3f, 0, 1, 0))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_86[iVar0 /*28*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_86[iVar0 /*28*/], Local_86[iVar0 /*28*/].f_14, 2f, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_86[iVar0 /*28*/], 73, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_86[iVar0 /*28*/], 51, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_86[iVar0 /*28*/], 50, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_86[iVar0 /*28*/], 200f, 0);
								iLocal_48[iVar0] = 4;
							}
							break;
						
						case 4:
							if (func_307(&(Local_86[iVar0 /*28*/]), &(Local_86[iVar0 /*28*/].f_18)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 268.439f, -1349.881f, 23.247f, 255.876f, -1339.339f, 26.748f, 2f, 0, 1, 0))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_86[iVar0 /*28*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_86[iVar0 /*28*/], Local_86[iVar0 /*28*/].f_14, 4f, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_86[iVar0 /*28*/], 73, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_86[iVar0 /*28*/], 51, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_86[iVar0 /*28*/], 50, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_86[iVar0 /*28*/], 200f, 0);
								iLocal_48[iVar0] = 4;
							}
							break;
						
						case 5:
							if (func_587(Local_86[iVar0 /*28*/], 242628503))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_86[iVar0 /*28*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_86[iVar0 /*28*/], Local_86[iVar0 /*28*/].f_14, 2f, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_86[iVar0 /*28*/], 51, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_86[iVar0 /*28*/], 50, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_86[iVar0 /*28*/], 200f, 0);
								iLocal_48[iVar0] = 4;
							}
							break;
						
						case 6:
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 268.798f, -1358.956f, 23.247f, 252.79f, -1345.52f, 26.72f, 10f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 260.849f, -1351.601f, 23.255f, 257.326f, -1348.643f, 26.355f, 26.3f, 0, 1, 0))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_86[iVar0 /*28*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_86[iVar0 /*28*/], Local_86[iVar0 /*28*/].f_14, 2f, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_86[iVar0 /*28*/], 73, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_86[iVar0 /*28*/], 51, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_86[iVar0 /*28*/], 50, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_86[iVar0 /*28*/], 200f, 0);
								iLocal_48[iVar0] = 4;
							}
							break;
						
						case 8:
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 260.849f, -1351.601f, 23.255f, 257.326f, -1348.643f, 26.355f, 26.3f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 259.076f, -1359.946f, 23.248f, 256.168f, -1357.5f, 26.748f, 2f, 0, 1, 0))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_86[iVar0 /*28*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_86[iVar0 /*28*/], Local_86[iVar0 /*28*/].f_14, 2f, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_86[iVar0 /*28*/], 51, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_86[iVar0 /*28*/], 200f, 0);
								iLocal_48[iVar0] = 2;
							}
							break;
						
						case 9:
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 252.429f, -1367.32f, 23.247f, 250.59f, -1365.777f, 26.72f, 7f, 0, 1, 0))
							{
								AUDIO::STOP_PED_SPEAKING(Local_86[iVar0 /*28*/], 0);
								TASK::TASK_AIM_GUN_AT_ENTITY(Local_86[iVar0 /*28*/], PLAYER::PLAYER_PED_ID(), -1, 0);
								AUDIO::PLAY_SOUND_FROM_COORD(uLocal_1484, "FBI_01_DMW_LIFT_ARRIVE", Local_86[iVar0 /*28*/].f_11, "FBI_01_SOUNDS", 0, 0, 0);
								bLocal_1456 = true;
								iLocal_48[iVar0] = 2;
							}
							break;
						
						case 13:
							if (func_587(Local_86[iVar0 /*28*/], 242628503))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_86[iVar0 /*28*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_86[iVar0 /*28*/], Local_86[iVar0 /*28*/].f_14, 1.5f, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_86[iVar0 /*28*/], 51, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_86[iVar0 /*28*/], 50, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_86[iVar0 /*28*/], 200f, 0);
								iLocal_48[iVar0] = 4;
							}
							break;
						
						case 11:
							if (func_587(Local_86[iVar0 /*28*/], 242628503))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_86[iVar0 /*28*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_86[iVar0 /*28*/], Local_86[iVar0 /*28*/].f_14, 2f, 0, 0);
								TASK::TASK_COMBAT_PED(Local_86[iVar0 /*28*/], PLAYER::PLAYER_PED_ID(), 0, 16);
								iLocal_48[iVar0] = 2;
							}
							else
							{
								PED::SET_PED_CAPSULE(Local_86[iVar0 /*28*/], 0.5f);
							}
							if (!func_583("cia_attak3"))
							{
								if (!GlobalFunc_5172(&Local_1725, 0))
								{
									if (GlobalFunc_10618(&uLocal_1560, "FBI1AUD", "cia_attak3", 7, 0, 0, 0))
									{
										func_560("cia_attak3", 1);
									}
								}
							}
							break;
						
						case 12:
							if (func_587(Local_86[iVar0 /*28*/], 242628503))
							{
								if (!func_583("cia_attak1"))
								{
									if (!GlobalFunc_5172(&Local_1725, 0))
									{
										if (GlobalFunc_10618(&uLocal_1560, "FBI1AUD", "cia_attak1", 7, 0, 0, 0))
										{
											func_560("cia_attak1", 1);
										}
									}
								}
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_86[iVar0 /*28*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_86[iVar0 /*28*/], Local_86[iVar0 /*28*/].f_14, 2f, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_86[iVar0 /*28*/], 51, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_86[iVar0 /*28*/], 50, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_86[iVar0 /*28*/], 200f, 0);
								iLocal_48[iVar0] = 4;
							}
							break;
						
						case 14:
							if (func_587(Local_86[iVar0 /*28*/], 242628503))
							{
								WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_86[iVar0 /*28*/], 0.5f, 0.8f);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_86[iVar0 /*28*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_86[iVar0 /*28*/], Local_86[iVar0 /*28*/].f_14, 2f, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_86[iVar0 /*28*/], 51, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_86[iVar0 /*28*/], 50, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_86[iVar0 /*28*/], 200f, 0);
								iLocal_48[iVar0] = 4;
							}
							break;
						
						case 15:
							if (ENTITY::IS_ENTITY_AT_COORD(Local_86[iVar0 /*28*/], Local_86[iVar0 /*28*/].f_14, 2f, 2f, 2f, 0, 1, 0))
							{
								if (!func_583("cia_attak0"))
								{
									if (!GlobalFunc_5172(&Local_1725, 0))
									{
										if (GlobalFunc_10618(&uLocal_1560, "FBI1AUD", "cia_attak0", 7, 0, 0, 0))
										{
											func_560("cia_attak0", 1);
										}
									}
								}
							}
							if ((((((func_587(Local_86[iVar0 /*28*/], 242628503) || func_307(&(Local_86[15 /*28*/]), &(Local_86[15 /*28*/].f_18))) || func_307(&(Local_86[16 /*28*/]), &(Local_86[16 /*28*/].f_18))) || func_591(&(Local_86[15 /*28*/]))) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_86[15 /*28*/])) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) || (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 287.544f, -1354.412f, 23.247f, 294.497f, -1345.887f, 26.247f, 13.4f, 0, 1, 0) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_86[iVar0 /*28*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 3f))
							{
								if (!func_583("cia_attak0"))
								{
									if (!GlobalFunc_5172(&Local_1725, 0))
									{
										if (GlobalFunc_10618(&uLocal_1560, "FBI1AUD", "cia_attak0", 7, 0, 0, 0))
										{
											func_560("cia_attak0", 1);
										}
									}
								}
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_86[iVar0 /*28*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_86[iVar0 /*28*/], Local_86[iVar0 /*28*/].f_14, 2f, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_86[iVar0 /*28*/], 51, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_86[iVar0 /*28*/], 50, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_86[iVar0 /*28*/], 200f, 0);
								iLocal_48[iVar0] = 4;
							}
							break;
						
						case 16:
							iVar1 = joaat("weapon_unarmed");
							WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
							if (((((func_587(Local_86[iVar0 /*28*/], 242628503) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 287.544f, -1354.412f, 23.247f, 294.497f, -1345.887f, 26.247f, 13.4f, 0, 1, 0)) || func_307(&(Local_86[15 /*28*/]), &(Local_86[15 /*28*/].f_18))) || func_307(&(Local_86[16 /*28*/]), &(Local_86[16 /*28*/].f_18))) || func_591(&(Local_86[iVar0 /*28*/]))) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
							{
								PED::SET_COMBAT_FLOAT(Local_86[iVar0 /*28*/], 3, 2.5f);
								PED::SET_COMBAT_FLOAT(Local_86[iVar0 /*28*/], 4, 10f);
								PED::SET_PED_COMBAT_MOVEMENT(Local_86[iVar0 /*28*/], 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_86[iVar0 /*28*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_86[iVar0 /*28*/], Local_86[iVar0 /*28*/].f_14, 2f, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_86[iVar0 /*28*/], 51, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_86[iVar0 /*28*/], 50, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_86[iVar0 /*28*/], 200f, 0);
								iLocal_48[iVar0] = 4;
							}
							break;
					}
					break;
				
				case 2:
					switch (iVar0)
					{
						case 1:
							if (func_587(Local_86[iVar0 /*28*/], 242628503))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_86[iVar0 /*28*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_86[iVar0 /*28*/], Local_86[iVar0 /*28*/].f_14, 8f, 0, 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_86[iVar0 /*28*/], 271.9024f, -1359.933f, 23.5377f, 8f, 0, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_86[iVar0 /*28*/], 51, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_86[iVar0 /*28*/], 50, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_86[iVar0 /*28*/], 200f, 0);
								iLocal_48[iVar0] = 4;
							}
							break;
						
						case 2:
						case 6:
							if (func_587(Local_86[iVar0 /*28*/], 242628503))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_86[iVar0 /*28*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_86[iVar0 /*28*/], Local_86[iVar0 /*28*/].f_14, 2f, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_86[iVar0 /*28*/], 51, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_86[iVar0 /*28*/], 50, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_86[iVar0 /*28*/], 200f, 0);
								iLocal_48[iVar0] = 4;
							}
							break;
						
						case 7:
							if (((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 260.849f, -1351.601f, 23.255f, 257.326f, -1348.643f, 26.355f, 26.3f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 259.076f, -1359.946f, 23.248f, 256.168f, -1357.5f, 26.748f, 2f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 273.56f, -1343.79f, 23.538f, 270.113f, -1340.897f, 26.538f, 2f, 0, 1, 0)) || func_307(&(Local_86[iVar0 /*28*/]), &(Local_86[iVar0 /*28*/].f_18))) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_86[iVar0 /*28*/])) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_86[iVar0 /*28*/]))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_1750);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_86[iVar0 /*28*/].f_14, PLAYER::PLAYER_PED_ID(), 2f, 1, 0.5f, 0.8f, 1, 0, 0, -957453492, 20000);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_1750);
								TASK::TASK_PERFORM_SEQUENCE(Local_86[iVar0 /*28*/], uLocal_1750);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_1750);
								iLocal_48[iVar0] = 3;
							}
							break;
						
						case 8:
							if (PED::IS_PED_INJURED(Local_86[9 /*28*/]))
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_86[iVar0 /*28*/], 50, 1);
								iLocal_48[iVar0] = 4;
							}
							break;
						
						case 9:
							if (func_584())
							{
								PED::SET_PED_RESET_FLAG(Local_86[iVar0 /*28*/], 282, 1);
								WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_86[iVar0 /*28*/], 0.5f, 0.8f);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_86[iVar0 /*28*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_86[iVar0 /*28*/], Local_86[iVar0 /*28*/].f_14, 2f, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_86[iVar0 /*28*/], 51, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_86[iVar0 /*28*/], 50, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_86[iVar0 /*28*/], 200f, 0);
								iLocal_48[iVar0] = 4;
							}
							break;
						
						case 11:
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 236.687f, -1369.182f, 26.866f, 238.485f, -1370.617f, 30.466f, 1.3f, 0, 1, 0))
							{
								PED::REMOVE_PED_DEFENSIVE_AREA(Local_86[iVar0 /*28*/], 0);
								PED::SET_PED_COMBAT_MOVEMENT(Local_86[iVar0 /*28*/], 2);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_86[iVar0 /*28*/], 50, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_86[iVar0 /*28*/], 200f, 0);
								iLocal_48[iVar0] = 4;
							}
							break;
					}
					break;
				
				case 3:
					switch (iVar0)
					{
						case 7:
							if (func_587(Local_86[iVar0 /*28*/], 242628503))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_86[iVar0 /*28*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_86[iVar0 /*28*/], Local_86[iVar0 /*28*/].f_14, 2f, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_86[iVar0 /*28*/], 51, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_86[iVar0 /*28*/], 50, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_86[iVar0 /*28*/], 200f, 0);
								iLocal_48[iVar0] = 4;
							}
							break;
					}
					break;
				
				case 4:
					switch (iVar0)
					{
						case 2:
							PED::SET_PED_RESET_FLAG(Local_86[iVar0 /*28*/], 282, 1);
							break;
						
						case 3:
							PED::SET_PED_RESET_FLAG(Local_86[iVar0 /*28*/], 282, 1);
							PED::SET_PED_RESET_FLAG(Local_86[iVar0 /*28*/], 258, 1);
							break;
						
						case 6:
							break;
						
						case 12:
							if (!func_583("cia_attak1"))
							{
								if (!GlobalFunc_5172(&Local_1725, 0))
								{
									if (GlobalFunc_10618(&uLocal_1560, "FBI1AUD", "cia_attak1", 7, 0, 0, 0))
									{
										func_560("cia_attak1", 1);
									}
								}
							}
							break;
						
						case 15:
							if (!func_583("cia_attak0"))
							{
								if (!GlobalFunc_5172(&Local_1725, 0))
								{
									if (GlobalFunc_10618(&uLocal_1560, "FBI1AUD", "cia_attak0", 7, 0, 0, 0))
									{
										func_560("cia_attak0", 1);
									}
								}
							}
							break;
					}
					break;
			}
		}
		else
		{
			switch (iVar0)
			{
				case 11:
					if (Local_86[iVar0 /*28*/].f_22)
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_1_AGENT_BURSTS_THROUGH_DOOR"))
						{
							AUDIO::STOP_AUDIO_SCENE("FBI_1_AGENT_BURSTS_THROUGH_DOOR");
						}
					}
					break;
				}
		}
		iVar0++;
	}
}

int func_591(var uParam0)//Position - 0x69A63
{
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), *uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_592()//Position - 0x69A89
{
	switch (iLocal_1478)
	{
		case 0:
			if (GlobalFunc_10638(&uLocal_1560, 30, "fbi1aud", "call1d", 9, 1, 0, 0, 0))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FBI1_CALL_NORTON");
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_1_INSPECT_BODIES"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_1_INSPECT_BODIES");
				}
				RECORDING::_0x293220DA1B46CEBC(2f, 12f, 4);
				iLocal_1477 = -1;
				iLocal_1478++;
			}
			break;
		
		case 1:
			if (!GlobalFunc_1993())
			{
				if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() != -1)
				{
					iLocal_1477 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
				}
			}
			else if (iLocal_1477 != -1)
			{
				if (!GlobalFunc_781() || iLocal_1477 >= 0)
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_1753))
					{
						uLocal_1753 = GlobalFunc_5104(236.4304f, -1357.755f, 38.5342f, 0);
					}
					iLocal_1478 = 2;
				}
				else
				{
					iLocal_1478 = 0;
				}
			}
			else
			{
				iLocal_1478 = 0;
				iLocal_1515++;
				if (iLocal_1515 > 2)
				{
					iLocal_1478 = 2;
				}
			}
			break;
		
		case 2:
			AUDIO::TRIGGER_MUSIC_EVENT("FBI1_LEAK");
			AUDIO::START_AUDIO_SCENE("FBI_1_ESCAPE_BASE_SCENE");
			iLocal_1459 = 1;
			iLocal_1471 = MISC::GET_GAME_TIMER();
			iLocal_1478++;
			break;
		
		case 3:
			break;
	}
}


int func_594()//Position - 0x69BD3
{
	int iVar0;
	
	iVar0 = 0;
	func_611(&Local_86, 1);
	func_611(&Local_563, 1);
	if (HUD::DOES_BLIP_EXIST(Local_901[3 /*28*/].f_2))
	{
	}
	switch (iLocal_1475)
	{
		case 0:
			if ((((iLocal_1459 && (CAM::IS_SPHERE_VISIBLE(284.24f, -1343.17f, 25.33f, 4f) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 287.544f, -1354.412f, 23.247f, 294.497f, -1345.887f, 26.247f, 13.4f, 0, 1, 0))) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 284.463f, -1354.515f, 23.538f, 294.471f, -1342.418f, 26.538f, 18.6f, 0, 1, 0)) || GlobalFunc_588(&uLocal_1511, 40000)) || iLocal_1468)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_901[4 /*28*/]))
				{
					PED::DELETE_PED(&(Local_901[4 /*28*/]));
				}
				MISC::SET_INSTANCE_PRIORITY_HINT(1);
				PLAYER::SET_PLAYER_CAN_USE_COVER(PLAYER::PLAYER_ID(), 1);
				STREAMING::REMOVE_ANIM_DICT("Dead");
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
				PED::REMOVE_STEALTH_MODE_ASSET("MICHAEL_ACTION");
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_1535[6], 0f, 0, 0);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1535[6], 3, 0, 1);
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_1535[7], 0f, 0, 0);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1535[7], 3, 0, 1);
				if (!HUD::DOES_BLIP_EXIST(uLocal_1753))
				{
					uLocal_1753 = GlobalFunc_5104(236.4304f, -1357.755f, 38.5342f, 0);
				}
				iVar0 = 15;
				while (iVar0 <= 15)
				{
					func_282(&(Local_86[iVar0 /*28*/]), 0);
					AUDIO::STOP_PED_SPEAKING(Local_86[iVar0 /*28*/], 1);
					iVar0++;
				}
				GlobalFunc_173(&uLocal_1560, GlobalFunc_2020("6"), Local_86[15 /*28*/], "CIA1", 0, 1);
				AUDIO::START_AUDIO_SCENE("FBI_1_SHOOTOUT_GROUND_FLOOR");
				GlobalFunc_Checkpoint1(2, "Start of shootout", 0, 0, 0, 1);
				RECORDING::_0x293220DA1B46CEBC(2f, 12f, 3);
				GlobalFunc_6796(PLAYER::PLAYER_PED_ID(), &Global_2544928);
				iLocal_1475++;
			}
			break;
		
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 284.213f, -1347.35f, 23.247f, 280.73f, -1344.5f, 26.747f, 3f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 278.582f, -1349.604f, 23.528f, 281.867f, -1345.703f, 26.728f, 6.5f, 0, 1, 0))
			{
				iVar0 = 0;
				while (iVar0 <= 10)
				{
					if (iVar0 != 7)
					{
						func_282(&(Local_86[iVar0 /*28*/]), 0);
						if (iVar0 == 3)
						{
							WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_86[iVar0 /*28*/], joaat("weapon_pumpshotgun"), joaat("component_at_ar_flsh"));
						}
					}
					iVar0++;
				}
				func_282(&(Local_86[14 /*28*/]), 0);
				GlobalFunc_173(&uLocal_1560, GlobalFunc_2020("8"), Local_86[2 /*28*/], "CIA3", 0, 1);
				GlobalFunc_173(&uLocal_1560, GlobalFunc_2020("E"), Local_86[6 /*28*/], "CIA8", 0, 1);
				GlobalFunc_173(&uLocal_1560, GlobalFunc_2020("B"), Local_86[9 /*28*/], "CIA5", 0, 1);
				iVar0 = 2;
				while (iVar0 <= 3)
				{
					func_282(&(Local_901[iVar0 /*28*/]), 0);
					PED::SET_PED_CAN_BE_TARGETTED(Local_901[iVar0 /*28*/], 0);
					iVar0++;
				}
				GlobalFunc_173(&uLocal_1560, GlobalFunc_2020("F"), Local_901[2 /*28*/], "doctor2", 0, 1);
				GlobalFunc_173(&uLocal_1560, GlobalFunc_2020("D"), Local_901[3 /*28*/], "doctor1", 0, 1);
				iLocal_1472 = MISC::GET_GAME_TIMER();
				iLocal_1475++;
			}
			break;
		
		case 2:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 243.756f, -1367.919f, 23.537f, 247.835f, -1362.988f, 26.737f, 2.6f, 0, 1, 0))
			{
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\FBI_01_DMW_01");
				iVar0 = 11;
				while (iVar0 <= 13)
				{
					if (!Local_86[iVar0 /*28*/].f_22)
					{
						func_282(&(Local_86[iVar0 /*28*/]), 0);
					}
					iVar0++;
				}
				GlobalFunc_173(&uLocal_1560, GlobalFunc_2020("A"), Local_86[11 /*28*/], "CIA4", 0, 1);
				GlobalFunc_173(&uLocal_1560, GlobalFunc_2020("7"), Local_86[12 /*28*/], "CIA2", 0, 1);
				GlobalFunc_10725(30, "FBI1_WPN", 1, 1, 0, 0, 0, 1, 0, 1);
				Local_1308[1 /*24*/].f_1 = GlobalFunc_6783(Local_1308[1 /*24*/], 0, 0);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_1_SHOOTOUT_GROUND_FLOOR"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_1_SHOOTOUT_GROUND_FLOOR");
				}
				AUDIO::START_AUDIO_SCENE("FBI_1_GET_UPSTAIRS");
				GlobalFunc_Checkpoint1(3, "half way through shootout", 0, 0, 0, 1);
				GlobalFunc_6796(PLAYER::PLAYER_PED_ID(), &Global_2544928);
				iLocal_1475++;
			}
			break;
		
		case 3:
			STREAMING::REQUEST_MODEL(joaat("v_ilev_cor_windowsmash"));
			STREAMING::REQUEST_MODEL(Local_1214[0 /*15*/].f_1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1214[0 /*15*/].f_1, 1);
			STREAMING::REQUEST_MODEL(Local_1214[1 /*15*/].f_1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1214[1 /*15*/].f_1, 1);
			iLocal_1475++;
			break;
		
		case 4:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 252.445f, -1367.718f, 38.246f, 250.278f, -1365.944f, 41.246f, 7.5f, 0, 1, 0))
			{
				iVar0 = 0;
				while (iVar0 <= (Local_86 - 1))
				{
					if (HUD::DOES_BLIP_EXIST(Local_86[iVar0 /*28*/].f_2))
					{
						HUD::REMOVE_BLIP(&(Local_86[iVar0 /*28*/].f_2));
					}
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 <= 2)
				{
					func_282(&(Local_563[iVar0 /*28*/]), 0);
					iVar0++;
				}
				GlobalFunc_173(&uLocal_1560, GlobalFunc_2020("C"), Local_563[1 /*28*/], "CIA6", 0, 1);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_1_GET_UPSTAIRS"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_1_GET_UPSTAIRS");
				}
				AUDIO::START_AUDIO_SCENE("FBI_1_AIM_AT_WINDOW");
				GlobalFunc_164("FBI1_God_4", 7500, 1);
				iLocal_1475++;
			}
			break;
		
		case 5:
			func_598();
			STREAMING::REQUEST_MODEL(joaat("v_ilev_cor_windowsmash"));
			STREAMING::REQUEST_MODEL(Local_1214[0 /*15*/].f_1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1214[0 /*15*/].f_1, 1);
			STREAMING::REQUEST_MODEL(Local_1214[1 /*15*/].f_1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1214[1 /*15*/].f_1, 1);
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(236.03f, -1357.49f, 40.45f, 2f, joaat("v_ilev_cor_windowsolid"), 0))
			{
				if ((STREAMING::HAS_MODEL_LOADED(joaat("v_ilev_cor_windowsmash")) && STREAMING::HAS_MODEL_LOADED(Local_1214[0 /*15*/].f_1)) && STREAMING::HAS_MODEL_LOADED(Local_1214[1 /*15*/].f_1))
				{
					ENTITY::CREATE_MODEL_SWAP(236.03f, -1357.49f, 40.45f, 1f, joaat("v_ilev_cor_windowsolid"), joaat("v_ilev_cor_windowsmash"), 1);
					Local_1357 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(236.03f, -1357.49f, 40.45f, 1f, joaat("v_ilev_cor_windowsmash"), 1, 0, 1);
					if (ENTITY::DOES_ENTITY_EXIST(Local_1357))
					{
						Local_1357.f_23 = 1;
					}
					iVar0 = 0;
					while (iVar0 <= (Local_1214 - 1))
					{
						Local_1214[iVar0 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_1214[iVar0 /*15*/].f_1, Local_1214[iVar0 /*15*/].f_3, Local_1214[iVar0 /*15*/].f_6, 1, 1);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1214[iVar0 /*15*/], 7);
						iVar0++;
					}
					iLocal_1475++;
				}
			}
			break;
		
		case 6:
			func_598();
			if (ENTITY::DOES_ENTITY_EXIST(Local_1357))
			{
				if (ENTITY::IS_ENTITY_ON_SCREEN(Local_1357))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_1357, 0);
				}
			}
			else
			{
				Local_1357 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(236.03f, -1357.49f, 40.45f, 1f, joaat("v_ilev_cor_windowsmash"), 1, 0, 1);
				if (ENTITY::DOES_ENTITY_EXIST(Local_1357))
				{
					Local_1357.f_23 = 1;
				}
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 234.193f, -1364.507f, 38.634f, 240.026f, -1357.653f, 41.534f, 6.05f, 0, 1, 0) && ENTITY::DOES_ENTITY_EXIST(Local_1357))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_1357, 0);
				if (!OBJECT::GET_OBJECT_FRAGMENT_DAMAGE_HEALTH(Local_1357, 0) < 0.7f)
				{
					GlobalFunc_164("FBI1_God_12", 7500, 1);
				}
				iLocal_1475++;
			}
			break;
		
		case 7:
			func_598();
			if (OBJECT::GET_OBJECT_FRAGMENT_DAMAGE_HEALTH(Local_1357, 0) < 0.7f)
			{
				if (!iLocal_1460)
				{
					func_597();
				}
				if (!func_583("FBI1_God_14"))
				{
					GlobalFunc_164("FBI1_God_14", 7500, 1);
					func_560("FBI1_God_14", 1);
					iLocal_1472 = MISC::GET_GAME_TIMER();
				}
				Local_1551 = { 236.344f, -1356.722f, 39.304f };
				Local_1554 = { 0f, 0f, -40.68f };
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi1", "ledge_climbout", Local_1551, Local_1554, 0f, 2), 0.75f, 0.75f, 1.6f, 0, 1, 0))
				{
					if (GlobalFunc_662(PLAYER::PLAYER_PED_ID(), 48.26f, 45f) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
					{
						if (!func_583("FBI1_help6"))
						{
							if (GlobalFunc_588(&iLocal_1472, 1000))
							{
								GlobalFunc_159("FBI1_help6", -1);
								func_560("FBI1_help6", 1);
							}
						}
						if (PAD::IS_CONTROL_PRESSED(0, 22) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 22))
						{
							AUDIO::DISTANT_COP_CAR_SIRENS(1);
							STREAMING::NEW_LOAD_SCENE_START(235.1414f, -1357.602f, 29.554f, GlobalFunc_590(0f, 0f, 53.2332f), 5f, 0);
							HUD::CLEAR_HELP(1);
							if (GlobalFunc_663("FBI1_God_14", 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
							if (HUD::DOES_BLIP_EXIST(uLocal_1753))
							{
								HUD::REMOVE_BLIP(&uLocal_1753);
							}
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
							uLocal_1479 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1551, Local_1554, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_1479, "missfbi1", "ledge_climbout", 4f, -8f, 4, 0, 4f, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_1479, 0.11f);
							ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 1, 1, 0, 0, 0);
							iLocal_1475++;
						}
					}
				}
			}
			break;
		
		case 8:
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1479))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1479) >= 0.9f)
				{
					func_557();
					iLocal_1475++;
					return 1;
				}
			}
			break;
		
		case 9:
			return 1;
			break;
	}
	return 0;
}



void func_597()//Position - 0x6A5E2
{
	switch (iLocal_1533)
	{
		case 0:
			iLocal_1533++;
			break;
		
		case 1:
			PHYSICS::BREAK_ENTITY_GLASS(Local_1357, 236.05f, -1357.488f, 40.02953f, 0.3f, -0.6866288f, 0.6827963f, -0.2496601f, 700f, 3, 0);
			PHYSICS::BREAK_ENTITY_GLASS(Local_1357, 235.8064f, -1357.778f, 40.1281f, 0.4f, -0.6795667f, 0.7014526f, -0.2148329f, 500f, 3, 0);
			PHYSICS::BREAK_ENTITY_GLASS(Local_1357, 236.3226f, -1357.163f, 39.7619f, 0.5f, -0.376403f, 0.8627338f, -0.3376553f, 500f, 3, 0);
			iLocal_1533++;
			iLocal_1460 = 1;
			break;
	}
}

void func_598()//Position - 0x6A6AB
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	if (!Local_563[3 /*28*/].f_22)
	{
		iVar0 = 0;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_563[iVar1 /*28*/]))
			{
				if (PED::IS_PED_INJURED(Local_563[iVar1 /*28*/]))
				{
					iVar0++;
				}
			}
			else if (Local_563[iVar1 /*28*/].f_22)
			{
				iVar0++;
			}
			iVar1++;
		}
		if (iVar0 >= 2)
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (Var2.f_2 > 38f)
			{
				func_282(&(Local_563[3 /*28*/]), 0);
				func_282(&(Local_563[4 /*28*/]), 0);
			}
		}
	}
}













int func_611(int iParam0, bool bParam1)//Position - 0x6B62D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (*iParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar1 /*28*/]))
		{
			if (PED::IS_PED_INJURED((*iParam0)[iVar1 /*28*/]))
			{
				if (bParam1)
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0[iVar1 /*28*/]);
				}
				if (HUD::DOES_BLIP_EXIST((iParam0[iVar1 /*28*/])->f_2))
				{
					HUD::REMOVE_BLIP(&((iParam0[iVar1 /*28*/])->f_2));
				}
				if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
				{
					GlobalFunc_565(276, 1, 0);
				}
				GlobalFunc_565(280, 1, 0);
				iVar0++;
			}
		}
		else if ((iParam0[iVar1 /*28*/])->f_22)
		{
			iVar0++;
		}
		if (!HUD::DOES_BLIP_EXIST((iParam0[iVar1 /*28*/])->f_2))
		{
			GlobalFunc_661((*iParam0)[iVar1 /*28*/], &((iParam0[iVar1 /*28*/])->f_3), -1, 0, 0, 0, -1082130432, 0);
		}
		iVar1++;
	}
	if (iVar0 == *iParam0)
	{
		return 1;
	}
	return 0;
}



void func_614()//Position - 0x6B8D0
{
	Global_24694 = 0;
}

int func_615()//Position - 0x6B8DC
{
	int iVar0;
	
	if (!HUD::DOES_BLIP_EXIST(Local_1042[0 /*28*/].f_2) && !HUD::DOES_BLIP_EXIST(Local_1042[1 /*28*/].f_2))
	{
		if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_front", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_left", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_right", 3))
		{
			if (func_583("mr_k_0") && func_583("mr_k_1"))
			{
				if (!GlobalFunc_5172(&Local_1725, 0))
				{
					TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					PLAYER::SET_PLAYER_CAN_USE_COVER(PLAYER::PLAYER_ID(), 1);
					GlobalFunc_601(4, 0);
					GlobalFunc_173(&uLocal_1560, GlobalFunc_2020("5"), 0, "dave", 0, 1);
					uLocal_1511 = MISC::GET_GAME_TIMER();
					iLocal_47 = 5;
					return 1;
				}
			}
		}
	}
	if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 284.463f, -1354.515f, 23.538f, 294.471f, -1342.418f, 26.538f, 18.6f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 277.116f, -1340.988f, 23.537f, 283.48f, -1333.405f, 26.537f, 11f, 0, 1, 0))
	{
		iVar0 = 0;
		while (iVar0 <= (Local_1042 - 1))
		{
			if (HUD::DOES_BLIP_EXIST(Local_1042[iVar0 /*28*/].f_2))
			{
				HUD::REMOVE_BLIP(&(Local_1042[iVar0 /*28*/].f_2));
			}
			iVar0++;
		}
		iLocal_1478 = 3;
		PLAYER::SET_PLAYER_CAN_USE_COVER(PLAYER::PLAYER_ID(), 1);
		GlobalFunc_601(4, 0);
		iLocal_1468 = 1;
		iLocal_47 = 5;
		return 1;
	}
	if (func_566(PLAYER::PLAYER_PED_ID(), 288.9353f, -1347.943f, 23.5378f, "BodyStorage", "v_coroner"))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
	}
	func_620();
	func_617();
	func_616();
	func_567();
	return 0;
}

void func_616()//Position - 0x6BAA2
{
	if (!func_583("mr_k_0"))
	{
		if (!HUD::DOES_BLIP_EXIST(Local_1042[0 /*28*/].f_2))
		{
			if (GlobalFunc_10618(&uLocal_1560, "FBI1AUD", "mr_k_0", 6, 0, 0, 0))
			{
				HUD::CLEAR_PRINTS();
				func_560("mr_k_0", 1);
			}
		}
	}
	if (!func_583("mr_k_1"))
	{
		if (!HUD::DOES_BLIP_EXIST(Local_1042[1 /*28*/].f_2))
		{
			if (GlobalFunc_10618(&uLocal_1560, "FBI1AUD", "mr_k_1", 6, 0, 0, 0))
			{
				HUD::CLEAR_PRINTS();
				func_560("mr_k_1", 1);
			}
		}
	}
}

void func_617()//Position - 0x6BB2E
{
	struct<3> Var0;
	struct<3> Var3;
	
	func_619(Local_1042[1 /*28*/]);
	switch (iLocal_1514)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("missfbi1ig_9");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi1ig_9"))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_1042[1 /*28*/], 0), 2f, 2f, 2.5f, 0, 1, 0))
				{
					if (func_618(PLAYER::PLAYER_PED_ID(), Local_1042[1 /*28*/], 60f))
					{
						if (func_618(PLAYER::PLAYER_PED_ID(), Local_1042[1 /*28*/], 35f))
						{
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_front", 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
						else if (func_619(Local_1042[1 /*28*/]) < -35f)
						{
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_right", 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
						else if (func_619(Local_1042[1 /*28*/]) > 35f)
						{
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_left", 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
						{
							Var0 = { ENTITY::GET_ENTITY_COORDS(Local_1042[1 /*28*/], 0) };
							Var0.f_2 = (Var0.f_2 - 1f);
							CAM::SET_GAMEPLAY_COORD_HINT(Var0, 3000, 2500, 2000, 0);
						}
						if (HUD::DOES_BLIP_EXIST(Local_1042[1 /*28*/].f_2))
						{
							HUD::REMOVE_BLIP(&(Local_1042[1 /*28*/].f_2));
						}
						TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_1042[1 /*28*/], 0), -1, 0, 2);
						iLocal_1514 = 2;
					}
					else
					{
						Var3 = { ENTITY::GET_ENTITY_COORDS(Local_1042[1 /*28*/], 0) };
						Var3.f_2 = (Var3.f_2 - 1f);
						CAM::SET_GAMEPLAY_COORD_HINT(Var3, 3000, 2500, 2000, 0);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_1750);
						TASK::TASK_TURN_PED_TO_FACE_COORD(0, ENTITY::GET_ENTITY_COORDS(Local_1042[1 /*28*/], 0), 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_1750);
						TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_1750);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_1750);
						iLocal_1514++;
					}
				}
			}
			break;
		
		case 1:
			if (!func_618(PLAYER::PLAYER_PED_ID(), Local_1042[1 /*28*/], 25f))
			{
				if (func_306(PLAYER::PLAYER_PED_ID(), 242628503, -2))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_1750);
					TASK::TASK_TURN_PED_TO_FACE_COORD(0, ENTITY::GET_ENTITY_COORDS(Local_1042[1 /*28*/], 0), 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_1750);
					TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_1750);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_1750);
				}
			}
			else if (func_618(PLAYER::PLAYER_PED_ID(), Local_1042[1 /*28*/], 60f))
			{
				if (func_618(PLAYER::PLAYER_PED_ID(), Local_1042[1 /*28*/], 35f))
				{
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_front", 4f, -4f, -1, 0, 0, 0, 0, 0);
				}
				else if (func_619(Local_1042[1 /*28*/]) < -35f)
				{
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_right", 4f, -4f, -1, 0, 0, 0, 0, 0);
				}
				else if (func_619(Local_1042[1 /*28*/]) > 35f)
				{
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_left", 4f, -4f, -1, 0, 0, 0, 0, 0);
				}
				if (HUD::DOES_BLIP_EXIST(Local_1042[1 /*28*/].f_2))
				{
					HUD::REMOVE_BLIP(&(Local_1042[1 /*28*/].f_2));
				}
				TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_1042[1 /*28*/], 0), -1, 0, 2);
				iLocal_1514 = 2;
			}
			break;
		
		case 2:
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
				}
			}
			if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_front", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_right", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_left", 3))
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				CAM::STOP_GAMEPLAY_HINT(0);
				iLocal_1514 = 22;
			}
			break;
		
		case 22:
			break;
	}
}

int func_618(int iParam0, int iParam1, float fParam2)//Position - 0x6BEE2
{
	struct<3> Var0;
	float fVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, 0) - ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
		fVar3 = (MISC::GET_HEADING_FROM_VECTOR_2D(Var0.x, Var0.f_1) - ENTITY::GET_ENTITY_HEADING(iParam0));
		if (fVar3 > 180f)
		{
			fVar3 = (fVar3 - 360f);
		}
		if (fVar3 < -180f)
		{
			fVar3 = (fVar3 + 360f);
		}
		if (MISC::ABSF(fVar3) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

float func_619(int iParam0)//Position - 0x6BF54
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	fVar3 = (MISC::GET_HEADING_FROM_VECTOR_2D(Var0.x, Var0.f_1) - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
	if (fVar3 > 180f)
	{
		fVar3 = (fVar3 - 360f);
	}
	if (fVar3 < -180f)
	{
		fVar3 = (fVar3 + 360f);
	}
	return fVar3;
}

void func_620()//Position - 0x6BFB2
{
	struct<3> Var0;
	struct<3> Var3;
	
	func_619(Local_1042[0 /*28*/]);
	switch (iLocal_1513)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("missfbi1ig_9");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi1ig_9"))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_1042[0 /*28*/], 0), 2f, 2f, 2.5f, 0, 1, 0))
				{
					if (func_618(PLAYER::PLAYER_PED_ID(), Local_1042[0 /*28*/], 60f))
					{
						if (func_618(PLAYER::PLAYER_PED_ID(), Local_1042[0 /*28*/], 35f))
						{
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_front", 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
						else if (func_619(Local_1042[0 /*28*/]) < -35f)
						{
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_right", 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
						else if (func_619(Local_1042[0 /*28*/]) > 35f)
						{
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_left", 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
						{
							Var0 = { ENTITY::GET_ENTITY_COORDS(Local_1042[0 /*28*/], 0) };
							Var0.f_2 = (Var0.f_2 - 1f);
							CAM::SET_GAMEPLAY_COORD_HINT(Var0, 3000, 2500, 2000, 0);
						}
						if (HUD::DOES_BLIP_EXIST(Local_1042[0 /*28*/].f_2))
						{
							HUD::REMOVE_BLIP(&(Local_1042[0 /*28*/].f_2));
						}
						TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_1042[0 /*28*/], 0), -1, 0, 2);
						iLocal_1513 = 2;
					}
					else
					{
						Var3 = { ENTITY::GET_ENTITY_COORDS(Local_1042[0 /*28*/], 0) };
						Var3.f_2 = (Var3.f_2 - 1f);
						CAM::SET_GAMEPLAY_COORD_HINT(Var3, 3000, 2500, 2000, 0);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_1750);
						TASK::TASK_TURN_PED_TO_FACE_COORD(0, ENTITY::GET_ENTITY_COORDS(Local_1042[0 /*28*/], 0), 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_1750);
						TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_1750);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_1750);
						iLocal_1532 = MISC::GET_GAME_TIMER();
						iLocal_1513++;
					}
				}
			}
			break;
		
		case 1:
			if (!func_618(PLAYER::PLAYER_PED_ID(), Local_1042[0 /*28*/], 25f))
			{
				if (func_306(PLAYER::PLAYER_PED_ID(), 242628503, -2))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_1750);
					TASK::TASK_TURN_PED_TO_FACE_COORD(0, ENTITY::GET_ENTITY_COORDS(Local_1042[0 /*28*/], 0), 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_1750);
					TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_1750);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_1750);
				}
			}
			else if (func_306(PLAYER::PLAYER_PED_ID(), 242628503, -2))
			{
				iLocal_1532 = iLocal_1532;
				if (func_618(PLAYER::PLAYER_PED_ID(), Local_1042[0 /*28*/], 60f))
				{
					if (func_618(PLAYER::PLAYER_PED_ID(), Local_1042[0 /*28*/], 35f))
					{
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_front", 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (func_619(Local_1042[0 /*28*/]) < -35f)
					{
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_right", 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (func_619(Local_1042[0 /*28*/]) > 35f)
					{
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_left", 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					if (HUD::DOES_BLIP_EXIST(Local_1042[0 /*28*/].f_2))
					{
						HUD::REMOVE_BLIP(&(Local_1042[0 /*28*/].f_2));
					}
					TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_1042[0 /*28*/], 0), -1, 0, 2);
					iLocal_1513 = 2;
				}
			}
			break;
		
		case 2:
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
				}
			}
			if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_front", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_right", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_left", 3))
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				CAM::STOP_GAMEPLAY_HINT(0);
				iLocal_1513 = 22;
			}
			break;
		
		case 22:
			break;
	}
}

void func_621()//Position - 0x6C387
{
	int iVar0;
	
	func_614();
	if (func_566(PLAYER::PLAYER_PED_ID(), 288.9353f, -1347.943f, 23.5378f, "BodyStorage", "v_coroner"))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
	}
	if (PED::IS_PED_INJURED(Local_1127))
	{
		STREAMING::REMOVE_ANIM_DICT("missfbi1ig_7");
		TASK::REMOVE_WAYPOINT_RECORDING("fbi1_0");
		RECORDING::_0x293220DA1B46CEBC(3f, 2f, 2);
		if (HUD::DOES_BLIP_EXIST(Local_1127.f_2))
		{
			HUD::REMOVE_BLIP(&(Local_1127.f_2));
		}
		Local_1042[0 /*28*/].f_2 = HUD::ADD_BLIP_FOR_ENTITY(Local_1042[0 /*28*/]);
		HUD::SET_BLIP_COLOUR(Local_1042[0 /*28*/].f_2, 2);
		HUD::SET_BLIP_SCALE(Local_1042[0 /*28*/].f_2, 0.5f);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_1042[0 /*28*/].f_2, "FBI1_God_13");
		Local_1042[1 /*28*/].f_2 = HUD::ADD_BLIP_FOR_ENTITY(Local_1042[1 /*28*/]);
		HUD::SET_BLIP_COLOUR(Local_1042[1 /*28*/].f_2, 2);
		HUD::SET_BLIP_SCALE(Local_1042[1 /*28*/].f_2, 0.5f);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_1042[1 /*28*/].f_2, "FBI1_God_13");
		AUDIO::TRIGGER_MUSIC_EVENT("FBI1_FIND_BODY");
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_1_STEALTH_KILL_AGENT"))
		{
			AUDIO::STOP_AUDIO_SCENE("FBI_1_STEALTH_KILL_AGENT");
		}
		AUDIO::START_AUDIO_SCENE("FBI_1_INSPECT_BODIES");
		GlobalFunc_164("FBI1_God_1", 7500, 1);
		iLocal_1472 = MISC::GET_GAME_TIMER();
		iLocal_47 = 4;
	}
	else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 284.463f, -1354.515f, 23.538f, 294.471f, -1342.418f, 26.538f, 18.6f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 277.116f, -1340.988f, 23.537f, 283.48f, -1333.405f, 26.537f, 11f, 0, 1, 0))
	{
		iVar0 = 0;
		while (iVar0 <= (Local_1042 - 1))
		{
			if (HUD::DOES_BLIP_EXIST(Local_1042[iVar0 /*28*/].f_2))
			{
				HUD::REMOVE_BLIP(&(Local_1042[iVar0 /*28*/].f_2));
			}
			iVar0++;
		}
		iLocal_1478 = 3;
		PLAYER::SET_PLAYER_CAN_USE_COVER(PLAYER::PLAYER_ID(), 1);
		GlobalFunc_601(4, 0);
		iLocal_1468 = 1;
		iLocal_47 = 5;
		return;
	}
	func_289();
	func_575();
	func_567();
}

void func_622()//Position - 0x6C578
{
	int iVar0;
	float fVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	
	iVar0 = 0;
	func_629();
	func_628();
	switch (iLocal_1474)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("Dead");
			GlobalFunc_702(1, 1, 1);
			if (func_337(1, 1, 1, 0))
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), 1);
				GlobalFunc_601(4, 1);
				MISC::CLEAR_AREA(278.58f, -1336.61f, 23.68f, 300f, 1, 0, 0, 0);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(278.58f, -1336.61f, 23.68f, 300f);
				uLocal_1751 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 280.336f, -1335.462f, 24.55331f, 63.40054f, 0f, -129.3897f, 56f, 0, 2);
				CAM::SET_CAM_NEAR_DOF(uLocal_1751, 0.01f);
				CAM::SET_CAM_FAR_DOF(uLocal_1751, 0.05f);
				CAM::SET_CAM_DOF_STRENGTH(uLocal_1751, 0.2f);
				CAM::SET_CAM_USE_SHALLOW_DOF_MODE(uLocal_1751, 1);
				func_282(&(Local_901[0 /*28*/]), 0);
				PED::_0x733C87D4CE22BEA2(Local_901[0 /*28*/]);
				AUDIO::DISABLE_PED_PAIN_AUDIO(Local_901[0 /*28*/], 1);
				PED::SET_PED_COMPONENT_VARIATION(Local_901[0 /*28*/], 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_901[0 /*28*/], 3, 0, 0, 0);
				GlobalFunc_173(&uLocal_1560, GlobalFunc_2020("3"), Local_901[0 /*28*/], "doctor1", 0, 1);
				HUD::REMOVE_BLIP(&(Local_901[0 /*28*/].f_2));
				Local_1260.x = OBJECT::CREATE_OBJECT(Local_1260.f_2, Local_901[0 /*28*/].f_11 + Vector(1f, 0f, 0f), 1, 1, 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_1260.x, Local_901[0 /*28*/], PED::GET_PED_BONE_INDEX(Local_901[0 /*28*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				Local_1284.x = OBJECT::CREATE_OBJECT(Local_1284.f_2, Local_901[0 /*28*/].f_11 + Vector(1.5f, 0f, 0f), 1, 1, 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_1284.x, Local_901[0 /*28*/], PED::GET_PED_BONE_INDEX(Local_901[0 /*28*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				Local_1551 = { 280.583f, -1335.896f, 23.588f };
				Local_1554 = { 0f, 0f, 38f };
				uLocal_1480 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1551, Local_1554, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_901[0 /*28*/], uLocal_1480, "missfbi1", "fbi_1_ig_1_b_clipb", 1000f, -8f, 0, 0, 1148846080, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_901[0 /*28*/], 0, 0);
				func_282(&(Local_901[1 /*28*/]), 0);
				PED::_0x733C87D4CE22BEA2(Local_901[1 /*28*/]);
				AUDIO::DISABLE_PED_PAIN_AUDIO(Local_901[1 /*28*/], 1);
				AUDIO::STOP_PED_SPEAKING(Local_901[1 /*28*/], 1);
				PED::SET_PED_COMPONENT_VARIATION(Local_901[1 /*28*/], 0, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_901[1 /*28*/], 3, 0, 1, 0);
				GlobalFunc_173(&uLocal_1560, GlobalFunc_2020("4"), Local_901[1 /*28*/], "doctor2", 0, 1);
				HUD::REMOVE_BLIP(&(Local_901[1 /*28*/].f_2));
				Local_1551 = { 281.083f, -1336.146f, 23.638f };
				Local_1554 = { 0f, 0f, 44f };
				uLocal_1481 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1551, Local_1554, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_901[1 /*28*/], uLocal_1481, "missfbi1", "fbi_1_ig_1_a", 1000f, -8f, 0, 0, 1148846080, 0);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_1481, 0.145f);
				PED::SET_SYNCHRONIZED_SCENE_RATE(uLocal_1481, 0f);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_901[1 /*28*/], 0, 0);
				func_282(&(Local_901[4 /*28*/]), 0);
				HUD::REMOVE_BLIP(&(Local_901[4 /*28*/].f_2));
				PED::SET_PED_CAN_BE_TARGETTED(Local_901[4 /*28*/], 0);
				func_285(&(Local_1042[0 /*28*/]));
				PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 1, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 3, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 5, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 6, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 7, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 9, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 10, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_1042[0 /*28*/], 11, 0, 0, 0);
				PED::_0x733C87D4CE22BEA2(Local_1042[0 /*28*/]);
				PED::SET_PED_CAN_RAGDOLL(Local_1042[0 /*28*/], 1);
				INTERIOR::_0x82EBB79E258FA2B7(Local_1042[0 /*28*/], INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(292.205f, -1345.025f, 24.57f, "V_Coroner"));
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1042[0 /*28*/], 1);
				Local_1551 = { 291.552f, -1345.871f, 24.57f };
				Local_1554 = { 0f, 0f, 147f };
				TASK::TASK_PLAY_ANIM_ADVANCED(Local_1042[0 /*28*/], "missfbi1", "cpr_pumpchest_idle", Local_1551, Local_1554, 1000f, -8f, -1, 2102280, 0.99f, 2, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1042[0 /*28*/], 0, 0);
				func_285(&(Local_1042[1 /*28*/]));
				PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 1, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 5, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 6, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 7, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 9, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 10, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_1042[1 /*28*/], 11, 0, 0, 0);
				PED::_0x733C87D4CE22BEA2(Local_1042[1 /*28*/]);
				PED::SET_PED_CAN_RAGDOLL(Local_1042[1 /*28*/], 1);
				INTERIOR::_0x82EBB79E258FA2B7(Local_1042[1 /*28*/], INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(297.302f, -1348.671f, 24.57f, "V_Coroner"));
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1042[1 /*28*/], 1);
				Local_1551 = { 296.702f, -1349.621f, 24.57f };
				Local_1554 = { 0f, 0f, 140f };
				TASK::TASK_PLAY_ANIM_ADVANCED(Local_1042[1 /*28*/], "missfbi1", "cpr_pumpchest_idle", Local_1551, Local_1554, 1000f, -8f, -1, 2102280, 0.99f, 2, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1042[1 /*28*/], 0, 0);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				Local_1551 = { 280.645f, -1335.833f, 24.5f };
				Local_1554 = { 0f, 0f, -138f };
				uLocal_1479 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1551, Local_1554, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_1479, "missfbi1", "cpr_pumpchest_idle", 1000f, -8f, 0, 0, 1148846080, 0);
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 3, 26, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 4, 18, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 6, 7, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 7, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 10, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 11, 0, 0, 0);
				PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
				PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 1);
				PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 2);
				PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 3);
				PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 4);
				PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 5);
				PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 6);
				PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 7);
				PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 8);
				GlobalFunc_173(&uLocal_1560, 0, PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
				iVar0 = 0;
				while (iVar0 <= (Local_1308 - 1))
				{
					Local_1308[iVar0 /*24*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_1308[iVar0 /*24*/].f_2, Local_1308[iVar0 /*24*/].f_3, 1, 1, 0);
					ENTITY::SET_ENTITY_HEADING(Local_1308[iVar0 /*24*/], Local_1308[iVar0 /*24*/].f_18);
					if (iVar0 == 0)
					{
						INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_1308[iVar0 /*24*/], INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(277.2329f, -1336.357f, 24f, "V_coroner"), MISC::GET_HASH_KEY("AutopsySmall"));
					}
					else if (iVar0 == 1)
					{
						INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_1308[iVar0 /*24*/], INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(249f, -1372.3f, 39.5f, "V_coroner"), MISC::GET_HASH_KEY("topoff_mid"));
					}
					iVar0++;
				}
				Local_1405[0 /*24*/] = OBJECT::CREATE_OBJECT(Local_1405[0 /*24*/].f_2, Local_1405[0 /*24*/].f_3, 1, 1, 0);
				ENTITY::SET_ENTITY_ROTATION(Local_1405[0 /*24*/], Local_1405[0 /*24*/].f_12, 2, 1);
				ENTITY::FREEZE_ENTITY_POSITION(Local_1405[0 /*24*/], 1);
				fLocal_1557 = 0.05f;
				fLocal_1558 = -0.5f;
				CAM::SET_CAM_ACTIVE(uLocal_1751, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				RECORDING::_0x48621C9FCA3EBD28(3);
				CAM::_0x661B5C8654ADD825(uLocal_1751, 1);
				GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
				SYSTEM::WAIT(0);
				INTERIOR::_0xAF348AFCB575A441("rm_bsmt_AutopsySmall");
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
				CAM::DO_SCREEN_FADE_IN(2000);
				AUDIO::START_AUDIO_SCENE("FBI_01_DMW_IN_BODY_BAG");
				iLocal_1472 = MISC::GET_GAME_TIMER();
				iLocal_1474++;
			}
			GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
			break;
		
		case 1:
			GRAPHICS::DRAW_SPRITE("fbi1", "zipbig", 0.5f, fLocal_1558, 1f, 3.1f, 0f, 255, 255, 255, 255, 0);
			if (CAM::IS_SCREEN_FADED_IN())
			{
				if (GlobalFunc_10618(&uLocal_1560, "FBI1AUD", "fbi1_doc1", 7, 0, 0, 0))
				{
					iLocal_1474++;
				}
			}
			CAM::SET_USE_HI_DOF();
			break;
		
		case 2:
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
			if (!GlobalFunc_111())
			{
				if (!bLocal_1457)
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_01_DMW_IN_BODY_BAG");
					AUDIO::PLAY_SOUND_FROM_ENTITY(uLocal_1483, "UNZIP", PLAYER::PLAYER_PED_ID(), "FBI_01_SOUNDS", 0, 0);
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1481))
					{
						PED::SET_SYNCHRONIZED_SCENE_RATE(uLocal_1481, 1f);
					}
					bLocal_1457 = true;
				}
				if (fLocal_1557 < 0.2f)
				{
					fLocal_1557 = (fLocal_1557 + 0.01f);
				}
				if (fLocal_1558 < 2.5f)
				{
					fLocal_1558 = (fLocal_1558 + fLocal_1557);
					GRAPHICS::DRAW_SPRITE("fbi1", "zipbig", 0.5f, fLocal_1558, 1f, 3.1f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					if (bLocal_1457)
					{
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_1483))
						{
							AUDIO::STOP_SOUND(iLocal_1483);
						}
					}
					iLocal_1472 = MISC::GET_GAME_TIMER();
					iLocal_1474++;
				}
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("fbi1", "zipbig", 0.5f, fLocal_1558, 1f, 3.1f, 0f, 255, 255, 255, 255, 0);
			}
			CAM::SET_USE_HI_DOF();
			break;
		
		case 3:
			if (GlobalFunc_10618(&uLocal_1560, "FBI1AUD", "fbi1_doc5", 6, 0, 0, 0))
			{
				iLocal_1474++;
			}
			CAM::SET_USE_HI_DOF();
			break;
		
		case 4:
			if (CAM::GET_CAM_FAR_DOF(uLocal_1751) < 4f)
			{
				fVar1 = CAM::GET_CAM_FAR_DOF(uLocal_1751);
				fVar1 = (fVar1 + ((fVar1 * 2f) * SYSTEM::TIMESTEP()));
				if (fVar1 > 4f)
				{
					fVar1 = 4f;
				}
				CAM::SET_CAM_FAR_DOF(uLocal_1751, fVar1);
				CAM::SET_USE_HI_DOF();
				if (fVar1 == 4f)
				{
					iLocal_1474++;
				}
			}
			break;
		
		case 5:
			if (!func_583("fbi1_doc2"))
			{
				GlobalFunc_612(&uVar2, &uVar3, &iVar4, &iVar5, 0);
				if (!PAD::IS_LOOK_INVERTED())
				{
					iVar5 = (iVar5 * -1);
				}
				if (((iVar4 > 28 || iVar4 < -28) || iVar5 > 28) || iVar5 < -28)
				{
					if (GlobalFunc_10618(&uLocal_1560, "FBI1AUD", "fbi1_doc2", 7, 0, 0, 0))
					{
						func_560("fbi1_doc2", 1);
						GlobalFunc_Display_Help_Text("FBI1_help1");
						iLocal_1508 = MISC::GET_GAME_TIMER();
						iLocal_1472 = MISC::GET_GAME_TIMER();
						iLocal_1474++;
					}
				}
			}
			if (!GlobalFunc_111())
			{
				GlobalFunc_Display_Help_Text("FBI1_help1");
				iLocal_1508 = MISC::GET_GAME_TIMER();
				iLocal_1472 = MISC::GET_GAME_TIMER();
				iLocal_1474++;
			}
			break;
		
		case 6:
			if (!func_583("fbi1_doc2"))
			{
				if (!func_583("fbi1_doc4"))
				{
					GlobalFunc_612(&uVar6, &uVar7, &iVar8, &iVar9, 0);
					if (!PAD::IS_LOOK_INVERTED())
					{
						iVar9 = (iVar9 * -1);
					}
					if (((iVar8 > 28 || iVar8 < -28) || iVar9 > 28) || iVar9 < -28)
					{
						if (GlobalFunc_111())
						{
							MemCopy(&cLocal_1788, {GlobalFunc_560()}, 4);
							if (MISC::ARE_STRINGS_EQUAL(&cLocal_1788, "fbi1_doc3"))
							{
								MemCopy(&Local_1792, {GlobalFunc_514()}, 4);
								iLocal_1458 = 1;
							}
						}
						if (GlobalFunc_10618(&uLocal_1560, "FBI1AUD", "fbi1_doc2", 7, 0, 0, 0))
						{
							func_560("fbi1_doc2", 1);
						}
					}
				}
			}
			if (!func_583("fbi1_doc3"))
			{
				if (!GlobalFunc_5172(&Local_1725, 0))
				{
					if (GlobalFunc_10618(&uLocal_1560, "FBI1AUD", "fbi1_doc3", 6, 0, 0, 0))
					{
						func_560("fbi1_doc3", 1);
					}
				}
			}
			else if (!GlobalFunc_5172(&Local_1725, 0))
			{
				if (iLocal_1458)
				{
					if (!MISC::IS_STRING_NULL(&Local_1792))
					{
						if (GlobalFunc_10626(&uLocal_1560, "FBI1AUD", "fbi1_doc3", &Local_1792, 6, 0, 0))
						{
							iLocal_1458 = 0;
						}
					}
					else
					{
						iLocal_1458 = 0;
					}
				}
			}
			if (!func_583("fbi1_doc4"))
			{
				if (GlobalFunc_588(&iLocal_1472, 55000))
				{
					if (!GlobalFunc_5172(&Local_1725, 0))
					{
						if (GlobalFunc_10618(&uLocal_1560, "FBI1AUD", "fbi1_doc4", 7, 0, 0, 0))
						{
							if (!PED::IS_PED_INJURED(Local_901[0 /*28*/]))
							{
								Local_1551 = { 280.583f, -1335.896f, 23.588f };
								Local_1554 = { 0f, 0f, 38f };
								uLocal_1480 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1551, Local_1554, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_901[0 /*28*/], uLocal_1480, "missfbi1", "fbi_1_ig_3_b_clipb", 1f, -8f, 0, 0, 1148846080, 0);
								PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_1480, 0.45f);
							}
							if (!PED::IS_PED_INJURED(Local_901[1 /*28*/]))
							{
								Local_1551 = { 281.083f, -1336.146f, 23.638f };
								Local_1554 = { 0f, 0f, 44f };
								uLocal_1481 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1551, Local_1554, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_901[1 /*28*/], uLocal_1481, "missfbi1", "fbi_1_ig_3_a", 1f, -8f, 0, 0, 1148846080, 0);
								PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_1481, 0.45f);
							}
							func_560("fbi1_doc4", 1);
						}
					}
				}
				else
				{
					if (!PED::IS_PED_INJURED(Local_901[0 /*28*/]))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1480))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1480) >= 1f)
							{
								Local_1551 = { 280.583f, -1335.896f, 23.588f };
								Local_1554 = { 0f, 0f, 38f };
								uLocal_1480 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1551, Local_1554, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_901[0 /*28*/], uLocal_1480, "missfbi1", "fbi_1_ig_2_b_clipb", 8f, -8f, 0, 0, 1148846080, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_901[0 /*28*/], 0, 0);
							}
						}
					}
					if (!PED::IS_PED_INJURED(Local_901[1 /*28*/]))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1481))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1480) >= 1f)
							{
								Local_1551 = { 281.083f, -1336.146f, 23.638f };
								Local_1554 = { 0f, 0f, 44f };
								uLocal_1481 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1551, Local_1554, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_901[1 /*28*/], uLocal_1481, "missfbi1", "fbi_1_ig_2_a", 8f, -8f, 0, 0, 1148846080, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_901[1 /*28*/], 0, 0);
							}
						}
					}
				}
			}
			else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1481))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1481) >= 0.6f)
				{
					HUD::CLEAR_HELP(1);
					if (!PED::IS_PED_INJURED(Local_901[1 /*28*/]))
					{
						Local_1381.x = OBJECT::CREATE_OBJECT(Local_1381.f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_901[1 /*28*/], 0f, 0f, 1f), 1, 1, 0);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_1381.x, Local_901[1 /*28*/], PED::GET_PED_BONE_INDEX(Local_901[1 /*28*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					}
					iLocal_1474 = 30;
				}
			}
			if (PAD::IS_CONTROL_PRESSED(2, 18))
			{
				if (CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					if (func_337(0, 1, 1, 0))
					{
						AUDIO::STOP_STREAM();
						AUDIO::TRIGGER_MUSIC_EVENT("FBI1_WAKE_UP");
						if (!PED::IS_PED_INJURED(Local_901[0 /*28*/]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_901[0 /*28*/], "Scientist_with_clipboard", 0, 0, 0);
						}
						if (!PED::IS_PED_INJURED(Local_901[1 /*28*/]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_901[1 /*28*/], "Scientist_whos_grabbed", 0, 0, 0);
						}
						if (ENTITY::IS_ENTITY_ATTACHED(Local_1260.x))
						{
							ENTITY::DETACH_ENTITY(Local_1260.x, 1, 1);
						}
						if (ENTITY::IS_ENTITY_ATTACHED(Local_1284.x))
						{
							ENTITY::DETACH_ENTITY(Local_1284.x, 1, 1);
						}
						iLocal_1430 = WEAPON::CREATE_WEAPON_OBJECT(Local_1127.f_23, -1, 282.9f, -1345.1f, 25.3f, 1, 1065353216, 0);
						WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(iLocal_1430, joaat("component_at_pi_flsh"));
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1430, "cia_pistol", 0, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1260.x, "FIB_1_clipboard", 0, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1284.x, "FIB_1_Pencil", 0, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "cia_guard", 2, Local_1127.f_1, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1430, "cia_pistol", 0, 0, 0);
						CUTSCENE::START_CUTSCENE(0);
						PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 3, 19, 0);
						PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 4, 0, 0);
						PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 5, 0, 0);
						PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 6, 0, 0);
						PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 7, 0, 0);
						PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 8, 0, 0);
						PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 9, 0, 0);
						PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 10, 0, 0);
						PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 11, 0, 0);
						iLocal_1472 = MISC::GET_GAME_TIMER();
						iLocal_1474 = 7;
					}
				}
			}
			break;
		
		case 7:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				GlobalFunc_4956();
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
				ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), 1, 0);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
				CAM::DESTROY_ALL_CAMS(0);
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				if (ENTITY::DOES_ENTITY_EXIST(Local_1381.x))
				{
					OBJECT::DELETE_OBJECT(&Local_1381);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1381.f_2);
				}
				iLocal_1474++;
			}
			break;
		
		case 8:
			STREAMING::REQUEST_ANIM_DICT("missfbi1ig_7");
			PED::REQUEST_STEALTH_MODE_ASSET("MICHAEL_ACTION");
			if (ENTITY::DOES_ENTITY_EXIST(Local_1127))
			{
				if (!PED::IS_PED_INJURED(Local_1127))
				{
					PED::SET_PED_RESET_FLAG(Local_1127, 258, 1);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1430))
			{
				OBJECT::_SET_CREATE_WEAPON_OBJECT_LIGHT_SOURCE(iLocal_1430, 1);
			}
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (!CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					if (!bLocal_1462)
					{
						if (CUTSCENE::GET_CUTSCENE_TIME() > 17200)
						{
							PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 3, 19, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 4, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 6, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 7, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 10, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 11, 0, 0, 0);
							func_158(PLAYER::PLAYER_PED_ID(), 1, 1, 1);
							bLocal_1462 = true;
						}
					}
					if (!iLocal_1463)
					{
						if (CUTSCENE::GET_CUTSCENE_TIME() > 500)
						{
							CUTSCENE::_0xC61B86C9F61EB404(1);
							PAD::SET_PAD_SHAKE(0, 6500, 200);
							iLocal_1463 = 1;
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("cia_guard", Local_1127.f_1)))
					{
						Local_1127 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("cia_guard", Local_1127.f_1));
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Scientist_whos_grabbed", 0))
					{
						if (!PED::IS_PED_INJURED(Local_901[1 /*28*/]))
						{
							PED::SET_PED_CAN_RAGDOLL(Local_901[1 /*28*/], 1);
							TASK::TASK_PLAY_ANIM_ADVANCED(Local_901[1 /*28*/], "Dead", "dead_c", 278.835f, -1336.046f, 24.58f, 0f, 0f, 74f, 1000f, -8f, -1, 2102280, 0.99f, 2, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_901[1 /*28*/], 0, 0);
							GlobalFunc_200(&uLocal_1560, 4);
						}
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("cia_guard", 0))
					{
						if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi1ig_7"))
						{
							if (!PED::IS_PED_INJURED(Local_1127))
							{
								func_623(&Local_1127);
								func_284(&Local_1127, 1);
								WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_1127, joaat("weapon_combatpistol"), joaat("component_at_pi_flsh"));
								WEAPON::SET_CURRENT_PED_WEAPON(Local_1127, joaat("weapon_combatpistol"), 1);
								AUDIO::STOP_PED_SPEAKING(Local_1127, 1);
								GlobalFunc_173(&uLocal_1560, GlobalFunc_2020("6"), Local_1127, "CIA1", 0, 1);
								PED::FORCE_PED_MOTION_STATE(Local_1127, 1063765679, 1, 0, 0);
								func_289();
							}
						}
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("cia_pistol", 0))
					{
						WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_1430, Local_1127);
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("michael", 0))
					{
						if (PED::HAS_STEALTH_MODE_ASSET_LOADED("MICHAEL_ACTION"))
						{
							PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 1, 0);
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), 1110276645, 0, 0, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
							PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1500, 0, 1, 0);
							RECORDING::_0x81CBAE94390F9F89();
						}
					}
				}
				else
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 1, 0);
					iLocal_1474 = 22;
				}
			}
			else
			{
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("script\FBI_01_DMW_Autopsy_1");
				PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
				PED::DELETE_PED(&(Local_901[0 /*28*/]));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_901[0 /*28*/].f_1);
				if (ENTITY::DOES_ENTITY_EXIST(Local_1260.x))
				{
					OBJECT::DELETE_OBJECT(&Local_1260);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1260.f_2);
				if (ENTITY::DOES_ENTITY_EXIST(Local_1284.x))
				{
					OBJECT::DELETE_OBJECT(&Local_1284);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1284.f_2);
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("fbi1");
				GlobalFunc_7632(0);
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
				GlobalFunc_Checkpoint1(1, "stealth_the_cia_officer", 0, 0, 0, 1);
				AUDIO::TRIGGER_MUSIC_EVENT("FBI1_GET_GUN");
				AUDIO::START_AUDIO_SCENE("FBI_1_STEALTH_KILL_AGENT");
				func_313(0, 0, 0, 0, 0, 3000, 1);
				iLocal_47 = 3;
			}
			break;
		
		case 22:
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("cia_guard", GlobalFunc_4917(2))))
				{
					Local_1127 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("cia_guard", GlobalFunc_4917(2)));
				}
			}
			else if ((STREAMING::HAS_ANIM_DICT_LOADED("missfbi1ig_7") && PED::HAS_STEALTH_MODE_ASSET_LOADED("MICHAEL_ACTION")) && PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID()))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_01_DMW_IN_BODY_BAG"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_01_DMW_IN_BODY_BAG");
				}
				if (bLocal_1457)
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_1483))
					{
						AUDIO::STOP_SOUND(iLocal_1483);
					}
				}
				PED::DELETE_PED(&(Local_901[0 /*28*/]));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_901[0 /*28*/].f_1);
				if (ENTITY::DOES_ENTITY_EXIST(Local_1260.x))
				{
					OBJECT::DELETE_OBJECT(&Local_1260);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1260.f_2);
				if (ENTITY::DOES_ENTITY_EXIST(Local_1284.x))
				{
					OBJECT::DELETE_OBJECT(&Local_1284);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1284.f_2);
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("fbi1");
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("fbi1");
				if (!bLocal_1462)
				{
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 3, 19, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 4, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 6, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 7, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 10, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 11, 0, 0, 0);
					func_158(PLAYER::PLAYER_PED_ID(), 1, 1, 1);
				}
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
				ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), 1, 0);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 279.0734f, -1337.076f, 23.5545f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 227.5366f);
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 1, 0);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), 1110276645, 0, 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1500, 0, 1, 0);
				if (!PED::IS_PED_INJURED(Local_1127))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_1127);
					ENTITY::SET_ENTITY_COORDS(Local_1127, 284.5221f, -1343.067f, 23.538f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_1127, 231.3517f);
					func_623(&Local_1127);
					func_284(&Local_1127, 1);
					WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_1430, Local_1127);
					WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_1127, joaat("weapon_combatpistol"), joaat("component_at_pi_flsh"));
					WEAPON::SET_CURRENT_PED_WEAPON(Local_1127, joaat("weapon_combatpistol"), 0);
					AUDIO::STOP_PED_SPEAKING(Local_1127, 1);
					GlobalFunc_173(&uLocal_1560, GlobalFunc_2020("6"), Local_1127, "CIA1", 0, 1);
					PED::FORCE_PED_MOTION_STATE(Local_1127, 1063765679, 1, 0, 0);
					func_289();
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1127, 0, 0);
				}
				if (!PED::IS_PED_INJURED(Local_901[1 /*28*/]))
				{
					PED::SET_PED_CAN_RAGDOLL(Local_901[1 /*28*/], 1);
					TASK::TASK_PLAY_ANIM_ADVANCED(Local_901[1 /*28*/], "Dead", "dead_c", 278.835f, -1336.046f, 24.58f, 0f, 0f, 74f, 1000f, -8f, -1, 2102280, 0.99f, 2, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_901[1 /*28*/], 0, 0);
					GlobalFunc_200(&uLocal_1560, 4);
				}
				GlobalFunc_7632(0);
				GlobalFunc_Checkpoint1(1, "stealth_the_cia_officer", 0, 0, 0, 1);
				AUDIO::TRIGGER_MUSIC_EVENT("FBI1_GET_GUN");
				AUDIO::START_AUDIO_SCENE("FBI_1_STEALTH_KILL_AGENT");
				while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
				{
					SYSTEM::WAIT(0);
				}
				func_149(1, 0, 0, 1);
				iLocal_47 = 3;
			}
			break;
		
		case 30:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1481))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1481) >= 0.65f)
				{
					GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_fbi_autopsy_blood", 280.7f, -1335.8f, 24.7f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
					PAD::SET_PAD_SHAKE(0, 1500, 200);
					iLocal_1474++;
				}
			}
			break;
		
		case 31:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1481))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1481) >= 0.72f)
				{
					if (!CAM::IS_SCREEN_FADED_OUT())
					{
						if (!CAM::IS_SCREEN_FADING_OUT())
						{
							HUD::CLEAR_HELP(1);
							CAM::DO_SCREEN_FADE_OUT(2000);
						}
					}
					else
					{
						GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(280.7f, -1335.8f, 24.7f, 100f);
						ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
						ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 2);
						func_313(1, 1, 0, 0, 0, 3000, 1);
					}
				}
			}
			break;
	}
}

void func_623(int iParam0)//Position - 0x6DE03
{
	PED::SET_PED_DIES_WHEN_INJURED(*iParam0, 1);
	PED::SET_PED_AS_ENEMY(*iParam0, 1);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*iParam0, 1, 0);
	PED::SET_PED_KEEP_TASK(*iParam0, 1);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 132, 1);
	PED::SET_PED_MONEY(*iParam0, 0);
	iParam0->f_2 = GlobalFunc_6797(*iParam0, 1, 145);
	WEAPON::GIVE_WEAPON_TO_PED(*iParam0, iParam0->f_23, -1, 1, 1);
	ENTITY::SET_ENTITY_HEALTH(*iParam0, iParam0->f_18);
	PED::SET_PED_MAX_HEALTH(*iParam0, iParam0->f_18);
	if (iParam0->f_20)
	{
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*iParam0, 1);
	}
	if (iParam0->f_21)
	{
		PED::ADD_ARMOUR_TO_PED(*iParam0, 100);
	}
	PED::SET_PED_NAME_DEBUG(*iParam0, &(iParam0->f_24));
	PED::SET_PED_SEEING_RANGE(*iParam0, 250f);
	PED::SET_PED_HEARING_RANGE(*iParam0, 250f);
	PED::SET_PED_ID_RANGE(*iParam0, 250f);
	PED::SET_PED_CAN_EVASIVE_DIVE(*iParam0, 1);
	PED::SET_PED_ACCURACY(*iParam0, iParam0->f_19);
	GlobalFunc_593(*iParam0, 0);
}





void func_628()//Position - 0x6E0C4
{
	if (iLocal_1474 > 0 && !iLocal_1474 >= 6)
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			CUTSCENE::REQUEST_CUTSCENE("FBI_1_MCS_1_concat", 8);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", PLAYER::PLAYER_PED_ID(), 0);
			if (!PED::IS_PED_INJURED(Local_901[0 /*28*/]))
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Scientist_with_clipboard", Local_901[0 /*28*/], 0);
			}
			if (!PED::IS_PED_INJURED(Local_901[1 /*28*/]))
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Scientist_whos_grabbed", Local_901[1 /*28*/], 0);
			}
		}
	}
}

void func_629()//Position - 0x6E13C
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	switch (iLocal_1528)
	{
		case 0:
			if (CAM::DOES_CAM_EXIST(uLocal_1751))
			{
			}
			CAM::SET_USE_HI_DOF();
			iLocal_1528++;
			break;
		
		case 1:
			if (CAM::DOES_CAM_EXIST(uLocal_1751))
			{
				GlobalFunc_612(&uVar0, &uVar1, &iVar2, &iVar3, 0);
				if (!PAD::IS_LOOK_INVERTED())
				{
					iVar3 = (iVar3 * -1);
				}
				if (iVar3 > 28 || iVar3 < -28)
				{
					fVar4 = SYSTEM::TO_FLOAT(iVar3);
					fVar4 = (fVar4 * fVar4);
					fVar4 = (fVar4 / (SYSTEM::TO_FLOAT(100) * SYSTEM::TO_FLOAT(100)));
					fVar4 = (fVar4 * fLocal_1800);
					if (iVar3 < 0)
					{
						fVar4 = (fVar4 * -1f);
					}
					Local_1805.x = (Local_1805.x + fVar4);
					if (Local_1805.x < fLocal_1801)
					{
						Local_1805.x = fLocal_1801;
					}
					if (Local_1805.x > fLocal_1802)
					{
						Local_1805.x = fLocal_1802;
					}
				}
				if (iVar2 > 28 || iVar2 < -28)
				{
					fVar4 = SYSTEM::TO_FLOAT(iVar2);
					fVar4 = (fVar4 * fVar4);
					fVar4 = (fVar4 / (SYSTEM::TO_FLOAT(100) * SYSTEM::TO_FLOAT(100)));
					fVar4 = (fVar4 * fLocal_1800);
					if (iVar2 > 0)
					{
						fVar4 = (fVar4 * -1f);
					}
					Local_1805.f_2 = (Local_1805.f_2 + fVar4);
					if (Local_1805.f_2 < fLocal_1803)
					{
						Local_1805.f_2 = fLocal_1803;
					}
					if (Local_1805.f_2 > fLocal_1804)
					{
						Local_1805.f_2 = fLocal_1804;
					}
				}
				CAM::SET_CAM_ROT(uLocal_1751, Local_1805.x, 0f, Local_1805.f_2, 2);
			}
			break;
	}
}

void func_630()//Position - 0x6E29A
{
	switch (iLocal_1473)
	{
		case 0:
			CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("fbi_1_int", 62, 8);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("michael", PLAYER::PLAYER_PED_ID(), 0);
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
				{
					iLocal_1155 = Global_86864.f_9[0];
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1155, 1, 1);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1155, "Dave_FBI", 0, 0, 0);
				}
				GlobalFunc_8380(1, 1, 1, 0);
				GlobalFunc_562(29);
				CUTSCENE::START_CUTSCENE(2048);
				RECORDING::_0x48621C9FCA3EBD28(4);
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 1, 0);
				iLocal_1473++;
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				GlobalFunc_9805(-389.924f, 1116.777f, 324.517f, -472.317f, 1138.854f, 340.917f, 148.5f, -410.9237f, 1174.479f, 324.6415f, 253.2136f, 15f, 15f, 15f, 1, 1, 1, 0, 0);
				func_3(-410.9237f, 1174.479f, 324.6415f, 253.2136f, 1);
				MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1000f, 1, 0, 0, 0);
				iLocal_1473++;
			}
			break;
		
		case 2:
			if (!iLocal_1465)
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() >= 133861)
				{
					CUTSCENE::_0xC61B86C9F61EB404(1);
					PAD::SET_PAD_SHAKE(0, 1000, 200);
					iLocal_1465 = 1;
				}
			}
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				RECORDING::_0x81CBAE94390F9F89();
				func_312();
			}
			break;
	}
}



void func_633()//Position - 0x6E430
{
	GlobalFunc_10835(sLocal_1559);
	func_634();
	AUDIO::TRIGGER_MUSIC_EVENT("FBI1_DEAD");
	iLocal_1454 = 1;
	iLocal_47 = 10;
}

void func_634()//Position - 0x6E455
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_1308 - 1))
	{
		if (HUD::DOES_BLIP_EXIST(Local_1308[iVar0 /*24*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_1308[iVar0 /*24*/].f_1));
		}
		iVar0++;
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_1753))
	{
		HUD::REMOVE_BLIP(&uLocal_1753);
	}
	iVar0 = 0;
	while (iVar0 <= (Local_1042 - 1))
	{
		if (HUD::DOES_BLIP_EXIST(Local_1042[iVar0 /*28*/].f_2))
		{
			HUD::REMOVE_BLIP(&(Local_1042[iVar0 /*28*/].f_2));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_86 - 1))
	{
		if (HUD::DOES_BLIP_EXIST(Local_86[iVar0 /*28*/].f_2))
		{
			HUD::REMOVE_BLIP(&(Local_86[iVar0 /*28*/].f_2));
		}
		GlobalFunc_589(&(Local_86[iVar0 /*28*/].f_3));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_563 - 1))
	{
		if (HUD::DOES_BLIP_EXIST(Local_563[iVar0 /*28*/].f_2))
		{
			HUD::REMOVE_BLIP(&(Local_563[iVar0 /*28*/].f_2));
		}
		GlobalFunc_589(&(Local_563[iVar0 /*28*/].f_3));
		iVar0++;
	}
}











int func_645()//Position - 0x6F3E6
{
	switch (iLocal_47)
	{
		case 1:
			if (bLocal_1461)
			{
				sLocal_1559 = "FBI1_fail_3";
				return 1;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(Local_1127))
			{
				if (iLocal_1517 >= 22)
				{
					if (GlobalFunc_588(&iLocal_1472, 12000))
					{
						AUDIO::START_ALARM("FBI_01_MORGUE_ALARMS", 1);
						sLocal_1559 = "FBI1_fail_2";
						return 1;
					}
				}
			}
			break;
		
		case 4:
			break;
		
		case 5:
			break;
		
		case 6:
			break;
		
		case 8:
			if (func_646(&Local_1099))
			{
				sLocal_1559 = "FBI1_fail_0";
				return 1;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1099))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1099, 1), 1) < 45f)
					{
						if (ENTITY::IS_ENTITY_ON_SCREEN(Local_1099))
						{
							sLocal_1559 = "FBI1_fail_1";
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_646(var uParam0)//Position - 0x6F4DD
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return PED::IS_PED_INJURED(*uParam0);
	}
	return 0;
}

void func_647()//Position - 0x6F4FA
{
	int iVar0;
	
	GlobalFunc_696();
	GlobalFunc_52(0, 1);
	GlobalFunc_504(PLAYER::PLAYER_PED_ID(), -1);
	GlobalFunc_7621(69, 0, 1, 1, 0);
	func_699();
	func_698();
	TASK::ADD_COVER_POINT(267.638f, -1350.057f, 23.53772f, 139.1686f, 0, 2, 0, 0);
	TASK::ADD_COVER_POINT(281.0947f, -1344.614f, 23.53772f, 49.3918f, 1, 2, 0, 1);
	TASK::ADD_COVER_POINT(245.975f, -1367.51f, 23.53797f, 137.184f, 0, 2, 0, 0);
	TASK::ADD_COVER_POINT(242.5864f, -1364.728f, 23.53797f, 137.2854f, 1, 2, 0, 0);
	TASK::ADD_COVER_POINT(247.167f, -1366.894f, 38.53422f, 139.2864f, 0, 2, 0, 0);
	TASK::ADD_COVER_POINT(237.5704f, -1357.657f, 38.53421f, 230.8f, 0, 2, 0, 0);
	TASK::ADD_COVER_POINT(236.4078f, -1359.098f, 38.53421f, 230.807f, 1, 2, 0, 0);
	TASK::ADD_COVER_POINT(234.0508f, -1361.902f, 38.53421f, 230.8812f, 0, 2, 0, 0);
	uLocal_1754[0] = TASK::ADD_COVER_POINT(272.0515f, -1344.098f, 23.53782f, 232.8f, 1, 2, 0, 0);
	uLocal_1754[3] = TASK::ADD_COVER_POINT(258.43f, -1355.88f, 23.54f, 324.4275f, 0, 0, 0, 0);
	uLocal_1754[4] = TASK::ADD_COVER_POINT(262.6538f, -1358.82f, 23.53772f, 49.0454f, 0, 0, 0, 0);
	uLocal_1754[6] = TASK::ADD_COVER_POINT(258.29f, -1361.33f, 23.54f, 315.0264f, 1, 2, 0, 0);
	uLocal_1754[16] = TASK::ADD_COVER_POINT(280.02f, -1344.69f, 23.54f, 322.6696f, 0, 2, 0, 0);
	uLocal_1754[4] = TASK::ADD_COVER_POINT(260.622f, -1352.676f, 23.53772f, 322.8431f, 0, 2, 0, 0);
	uLocal_1772[0] = TASK::ADD_COVER_POINT(242.2713f, -1367.464f, 38.53431f, 234.1995f, 1, 2, 0, 0);
	uLocal_1772[2] = TASK::ADD_COVER_POINT(239.4913f, -1379.236f, 38.53422f, 0f, 2, 0, 0, 0);
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	PED::SET_CREATE_RANDOM_COPS(0);
	Local_1357.f_23 = 0;
	func_320();
	func_319();
	if (GlobalFunc_Is_Mission_Retry())
	{
		iLocal_1797 = 1;
		if (!Global_84544)
		{
			switch (GlobalFunc_Get_Mission_Fail_Checkpoint())
			{
				case 0:
					func_696();
					break;
				
				case 1:
					func_288();
					break;
				
				case 2:
					func_287();
					break;
				
				case 3:
					func_278();
					break;
				
				case 4:
					func_88();
					break;
			}
		}
		else
		{
			iVar0 = GlobalFunc_Get_Mission_Fail_Checkpoint() + 1;
			switch (iVar0)
			{
				case 1:
					func_288();
					break;
				
				case 2:
					func_287();
					break;
				
				case 3:
					func_278();
					break;
				
				case 4:
					func_88();
					break;
				
				case 5:
					func_2();
					break;
				}
		}
		iLocal_1797 = 0;
	}
	else
	{
		GlobalFunc_7963(PLAYER::PLAYER_PED_ID());
		if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
		{
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				if (!CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
		else
		{
			func_648();
		}
	}
}

void func_648()//Position - 0x6F822
{
	STREAMING::REQUEST_MODEL(GlobalFunc_4917(0));
	while (!STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(0)))
	{
		SYSTEM::WAIT(0);
	}
	func_649(0, 1);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -444.1117f, 1060.115f, 326.6852f, 1, 0, 0, 1);
	CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("fbi_1_int", 62, 8);
	while (!CUTSCENE::HAS_CUTSCENE_LOADED())
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("michael", PLAYER::PLAYER_PED_ID(), 0);
		SYSTEM::WAIT(0);
	}
	CUTSCENE::START_CUTSCENE(0);
	CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 1, 0);
	while (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		SYSTEM::WAIT(0);
	}
	GlobalFunc_9805(-411.094f, 1180.761f, 324.342f, -414.034f, 1171.203f, 330.642f, 13f, -410.9237f, 1174.479f, 324.6415f, 253.2136f, 15f, 15f, 15f, 1, 1, 1, 0, 0);
	func_3(-410.9237f, 1174.479f, 324.6415f, 253.2136f, 1);
	MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1000f, 1, 0, 0, 0);
	iLocal_1473 = 1;
	CAM::DO_SCREEN_FADE_IN(800);
	GlobalFunc_Checkpoint1(0, "Start of mission", 0, 0, 0, 1);
}

int func_649(int iParam0, bool bParam1)//Position - 0x6F94D
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
		func_693(&(Global_17052[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2));
		func_401(&(Global_17052[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_17052.f_7 = iParam0;
	Global_17052.f_39 = 1;
	GlobalFunc_10924(&Global_17052, 0, 0, 0);
	GlobalFunc_5124(iParam0);
	return 1;
}












































int func_693(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x75171
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
				GlobalFunc_8364(*uParam0, iParam1, bParam5);
				PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
				func_547(*uParam0);
				GlobalFunc_7694(*uParam0, 1, 0);
				GlobalFunc_7693(*uParam0);
				GlobalFunc_7714(*uParam0);
				func_403(*uParam0, bParam6);
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



void func_696()//Position - 0x752AE
{
	WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), 1);
	GlobalFunc_601(4, 1);
	func_312();
}


void func_698()//Position - 0x752F3
{
	PED::ADD_RELATIONSHIP_GROUP("players group", &iLocal_1798);
	PED::ADD_RELATIONSHIP_GROUP("enemy group", &iLocal_1799);
}

void func_699()//Position - 0x75315
{
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	GlobalFunc_173(&uLocal_1560, GlobalFunc_2020("0"), PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
	HUD::REQUEST_ADDITIONAL_TEXT("fbi1", 0);
	HUD::REQUEST_ADDITIONAL_TEXT("fbi1aud", 6);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
	{
		SYSTEM::WAIT(0);
	}
}




void func_703()//Position - 0x753FE
{
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		CUTSCENE::STOP_CUTSCENE(0);
	}
	else
	{
		CUTSCENE::REMOVE_CUTSCENE();
	}
	CUTSCENE::REMOVE_CUTSCENE();
	GlobalFunc_52(1, 1);
	GlobalFunc_4935();
	GlobalFunc_7621(69, 0, 1, 1, 0);
	if (!iLocal_1469)
	{
		GlobalFunc_8011(PLAYER::PLAYER_PED_ID(), 0);
	}
	GlobalFunc_601(4, 0);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		if (!ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
		}
	}
	AUDIO::STOP_ALARM("FBI_01_MORGUE_ALARMS", 0);
	AUDIO::TRIGGER_MUSIC_EVENT("FBI1_DEAD");
	AUDIO::STOP_AUDIO_SCENES();
	AUDIO::SET_AUDIO_SCRIPT_CLEANUP_TIME(5000);
	GlobalFunc_7632(0);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	PLAYER::SET_MAX_WANTED_LEVEL(6);
	PED::SET_CREATE_RANDOM_COPS(1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
	GlobalFunc_699();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
	HUD::DISPLAY_HUD(1);
	HUD::DISPLAY_RADAR(1);
	CAM::SET_WIDESCREEN_BORDERS(0, 500);
	func_704();
	func_707();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_704()//Position - 0x754FD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_1535 - 1))
	{
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_1535[iVar0]))
		{
			OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_1535[iVar0]);
		}
		iVar0++;
	}
}



void func_707()//Position - 0x75588
{
	if (Local_1357.f_23)
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&Local_1357);
		ENTITY::REMOVE_MODEL_SWAP(236.03f, -1357.49f, 40.45f, 1f, joaat("v_ilev_cor_windowsolid"), joaat("v_ilev_cor_windowsmash"), 0);
		Local_1357.f_23 = 0;
	}
}






