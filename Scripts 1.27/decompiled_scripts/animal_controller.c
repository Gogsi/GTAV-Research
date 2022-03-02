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
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
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
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	float fLocal_50 = 0f;
	float fLocal_51 = 0f;
	int iLocal_52 = 0;
	struct<22> Local_53 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	struct<29> Local_78 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	bool bLocal_132 = 0;
	int iLocal_133 = 0;
	var uLocal_134 = 0;
	float fLocal_135 = 0f;
	var uLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	struct<46> Local_141[4];
	struct<46> Local_326[4];
	struct<46> Local_511[4];
	struct<16> Local_696[4];
	struct<16> Local_761[4];
	struct<46> Local_826[4];
	struct<16> Local_1011[4];
	struct<46> Local_1076[4];
	struct<16> Local_1261[4];
	int iLocal_1326 = 0;
	int iLocal_1327 = 0;
	int iLocal_1328 = 0;
	int iLocal_1329 = 0;
	int iLocal_1330 = 0;
	var uLocal_1331[4] = { 0, 0, 0, 0 };
	var uLocal_1336[4] = { 0, 0, 0, 0 };
	int iLocal_1341[4] = { 0, 0, 0, 0 };
	int iLocal_1346 = 0;
	int iLocal_1347 = 0;
	var uLocal_1348[4] = { 0, 0, 0, 0 };
	int iLocal_1353 = 0;
	int iLocal_1354 = 0;
	int iLocal_1355 = 0;
	int iLocal_1356 = 0;
	int iLocal_1357 = 0;
	int iLocal_1358 = 0;
	int iLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	struct<16> Local_1362[4];
	int iLocal_1427 = 0;
	int iLocal_1428 = 0;
	var uLocal_1429 = 0;
	int iLocal_1430 = 0;
	var uLocal_1431 = 16;
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
	var uLocal_1558 = 0;
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
	char* sLocal_1596 = NULL;
	var uLocal_1597 = 0;
	struct<3> Local_1598 = { 0, 0, 0 } ;
	int iLocal_1601 = 0;
	int iLocal_1602 = 0;
	int iLocal_1603 = 0;
	var uLocal_1604 = 12;
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
	var uLocal_1617 = 12;
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
	var uLocal_1630 = 12;
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
	var uLocal_1643 = 9;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 9;
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
	int iLocal_1669 = 0;
	int iLocal_1670 = 0;
	struct<3> Local_1671 = { 0, 0, 0 } ;
	float fLocal_1674 = 0f;
	struct<3> Local_1675 = { 0, 0, 0 } ;
	float fLocal_1678 = 0f;
	var uLocal_1679 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
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
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	uLocal_45 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_46 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_48 = 1;
	iLocal_49 = 1;
	fLocal_50 = 10000f;
	fLocal_51 = 12100f;
	iLocal_124 = -1;
	iLocal_125 = -1;
	iLocal_127 = -1;
	iLocal_128 = -1;
	iLocal_129 = -1;
	iLocal_130 = -1;
	iLocal_131 = 145;
	iLocal_133 = 1;
	iLocal_137 = -1;
	iLocal_1327 = -1;
	iLocal_1346 = -1;
	iLocal_1347 = -1;
	iLocal_1359 = 1;
	iLocal_1430 = joaat("prop_peyote_chunk_01");
	sLocal_1596 = "";
	uLocal_1597 = MISC::GET_GAME_TIMER();
	Local_1598 = { 0f, 0f, 0f };
	iLocal_1601 = -1;
	iLocal_1602 = -1;
	iLocal_1603 = -1;
	Local_1671 = { 0f, 0f, 0f };
	fLocal_1674 = 0f;
	Local_1675 = { 0f, 0f, 0f };
	fLocal_1678 = 0f;
	uLocal_1679 = MISC::GET_GAME_TIMER();
	if (GlobalFunc_39(14) || HUD::_HAS_DIRECTOR_MODE_BEEN_TRIGGERED())
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_571();
	func_569();
	func_567();
	Global_24599 = 0;
	Global_24600 = -1;
	iLocal_1329 = 0;
	while (true)
	{
		if (!iLocal_122)
		{
			iLocal_122 = 1;
			if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
			{
				if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 1 && MISC::IS_BIT_SET(iLocal_126, 1))
				{
					func_566();
					iLocal_122 = 0;
				}
				else
				{
					if ((!Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PEYOTE_PROGRESSION_COMPLETE && iLocal_1601 != -1) && iLocal_1601 == iLocal_1355)
					{
						if (MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PEYOTE_PICKUP_OF_TYPE_FOUND[iLocal_1354], iLocal_1601))
						{
							MISC::CLEAR_BIT(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PEYOTE_PICKUP_OF_TYPE_FOUND[iLocal_1354]), iLocal_1601);
							MISC::CLEAR_BIT(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PEYOTE_ANIMAL_SEEN), uLocal_1348[iLocal_1354]);
							STATS::STAT_GET_INT(joaat("num_hidden_packages_5"), &iLocal_123, -1);
							iLocal_123 = (iLocal_123 - 1);
							STATS::STAT_SET_INT(joaat("num_hidden_packages_5"), iLocal_123, 1);
						}
					}
					func_564();
				}
				iLocal_1601 = -1;
			}
		}
		func_562();
		func_555();
		if ((((!GlobalFunc_4938(13) && !GlobalFunc_39(13)) && !GlobalFunc_39(14)) && !GlobalFunc_39(17)) || (GlobalFunc_39(14) || HUD::_HAS_DIRECTOR_MODE_BEEN_TRIGGERED()))
		{
			func_564();
		}
		iVar0 = GlobalFunc_6674(PLAYER::PLAYER_PED_ID());
		if (iVar0 != 145)
		{
			if (iVar0 != iLocal_131)
			{
				func_551(iVar0);
			}
		}
		switch (iLocal_52)
		{
			case 0:
				if (MISC::IS_BIT_SET(iLocal_126, 0))
				{
					if (STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(iLocal_131)))
					{
						iLocal_52 = 1;
					}
				}
				break;
			
			case 1:
				iVar1 = 0;
				while (iVar1 < 4)
				{
					iVar3 = func_549(iVar1);
					iVar2 = 0;
					while (iVar2 < iVar3)
					{
						if (iLocal_52 == 1)
						{
							if (func_543(iVar1, iVar2))
							{
								iLocal_1353 = uLocal_1348[iVar1];
								iLocal_1354 = iVar1;
								iLocal_1355 = iVar2;
								if (!Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PEYOTE_PROGRESSION_COMPLETE)
								{
									MISC::SET_BIT(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PEYOTE_PICKUP_OF_TYPE_FOUND[iVar1]), iVar2);
									MISC::SET_BIT(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PEYOTE_ANIMAL_SEEN), uLocal_1348[iVar1]);
									iLocal_1601 = iVar2;
									func_542();
								}
								func_536(iLocal_1353, 1);
								PAD::SET_PAD_SHAKE(0, 200, 250);
								STATS::_0x629526ABA383BCAA();
								GlobalFunc_6685(1);
								PAD::DISABLE_CONTROL_ACTION(0, 27, 1);
								iLocal_52 = 2;
							}
						}
						iVar2++;
					}
					iVar1++;
				}
				if (!Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PEYOTE_PROGRESSION_COMPLETE)
				{
					if ((MISC::GET_FRAME_COUNT() % 1000) == 0)
					{
						func_532();
					}
				}
				break;
			
			case 2:
				switch (GlobalFunc_7905(&iLocal_128, 6, 13, 0, 0))
				{
					case 1:
						STREAMING::REQUEST_MODEL(func_529(iLocal_1353));
						if (!Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PEYOTE_PROGRESSION_COMPLETE)
						{
							GlobalFunc_842(1, 1);
							GlobalFunc_4907();
						}
						iLocal_52 = 3;
						break;
					
					case 0:
						iLocal_52 = 1;
						break;
				}
				PAD::DISABLE_CONTROL_ACTION(0, 27, 1);
				break;
			
			case 3:
				if (func_475())
				{
					func_472();
					func_441();
					iLocal_52 = 4;
				}
				PAD::DISABLE_CONTROL_ACTION(0, 27, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 19, 1);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
				func_440();
				break;
			
			case 4:
				func_436(func_529(iLocal_1353), &iLocal_129, 1);
				func_433();
				if (!MISC::IS_BIT_SET(iLocal_126, 12))
				{
					if (GlobalFunc_10607(&uLocal_1431, "ANIMLAU", sLocal_1596, 3, 0, 0, 0))
					{
						MISC::SET_BIT(&iLocal_126, 12);
					}
				}
				AUDIO::LOAD_STREAM("PEYOTE_TRANSITION_OUT", 0);
				if (PAD::IS_CONTROL_PRESSED(0, 51))
				{
					if (iLocal_127 == -1)
					{
						iLocal_127 = MISC::GET_GAME_TIMER();
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_127) > 1250)
					{
						func_420();
						iLocal_52 = 5;
					}
				}
				else if (iLocal_127 != -1)
				{
					iLocal_127 = -1;
				}
				if (func_415(&uLocal_1679))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						PED::SET_PED_TO_RAGDOLL(PLAYER::PLAYER_PED_ID(), 1000, 3000, 0, 1, 1, 0);
					}
					func_420();
					iLocal_52 = 5;
				}
				break;
			
			case 5:
				if (func_19())
				{
					iLocal_1328 = func_18(iLocal_1353);
					if (iLocal_1328 != -1)
					{
						GlobalFunc_64(func_17(iLocal_1328));
					}
					MISC::CLEAR_BIT(&iLocal_126, 12);
					GlobalFunc_1997(&iLocal_128);
					iLocal_52 = 1;
				}
				else
				{
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
					PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 27, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 19, 1);
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
				}
				break;
		}
		func_4(&iLocal_1358, &iLocal_1359, &uLocal_1360, 6, &uLocal_1361, &uLocal_1429, "PEY_TITLE", "PEY_COLLECT");
		func_2();
		if (iLocal_130 != -1)
		{
			PAD::DISABLE_CONTROL_ACTION(0, 19, 1);
			GlobalFunc_187();
		}
		SYSTEM::WAIT(0);
	}
}


void func_2()//Position - 0x565
{
	int iVar0;
	float fVar1;
	
	if (bLocal_132)
	{
		iVar0 = (iLocal_137 - MISC::GET_GAME_TIMER());
		if (iLocal_133)
		{
			fVar1 = (255f - (IntToFloat(iVar0) * 0.51f));
			if (fVar1 >= 0f)
			{
				iLocal_138 = SYSTEM::ROUND(fVar1);
			}
			if (MISC::GET_GAME_TIMER() > iLocal_137)
			{
				iLocal_138 = 255;
			}
		}
		else
		{
			fVar1 = (IntToFloat(iVar0) * 0.51f);
			if (fVar1 >= 0f)
			{
				iLocal_138 = SYSTEM::ROUND(fVar1);
			}
			if (iLocal_138 < 0)
			{
				iLocal_138 = 0;
			}
			if (MISC::GET_GAME_TIMER() > iLocal_137)
			{
				func_3();
			}
		}
		GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 255, 255, 255, iLocal_138, 0);
	}
}

void func_3()//Position - 0x5F7
{
	bLocal_132 = false;
	iLocal_133 = 1;
	iLocal_137 = -1;
	iLocal_138 = 0;
}

void func_4(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, char* sParam6, char* sParam7)//Position - 0x60B
{
	int iVar0;
	
	GlobalFunc_840(0);
	if (*iParam0)
	{
		switch (*uParam4)
		{
			case 0:
				*uParam5 = unk_0x67D02A194A2FC2BD("MIDSIZED_MESSAGE");
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam5))
				{
					iVar0 = AUDIO::GET_SOUND_ID();
					if (iParam3 == 6)
					{
						AUDIO::PLAY_SOUND_FRONTEND(iVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", 1);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(iVar0, "COLLECTED", "HUD_AWARDS", 1);
					}
					*uParam4++;
				}
				break;
			
			case 1:
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam6);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam7);
				HUD::ADD_TEXT_COMPONENT_INTEGER(GlobalFunc_7735(iParam3));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				*uParam2 = MISC::GET_GAME_TIMER();
				*uParam4++;
				break;
			
			case 2:
				if ((MISC::GET_GAME_TIMER() - *uParam2) > 7000)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam5, "SHARD_ANIM_OUT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.33f);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					*uParam4++;
				}
				else if (!GlobalFunc_489())
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam5))
					{
						GlobalFunc_840(1);
						GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 3:
				if ((MISC::GET_GAME_TIMER() - *uParam2) > 7500)
				{
					*uParam4++;
				}
				else if (!GlobalFunc_489())
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam5))
					{
						GlobalFunc_840(1);
						GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 4:
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam5))
				{
					GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam5);
				}
				GlobalFunc_840(0);
				*iParam1 = 0;
				*iParam0 = 0;
				*uParam4 = 0;
				break;
			}
	}
}













char* func_17(int iParam0)//Position - 0xC9C
{
	switch (iParam0)
	{
		case 0:
			return "CM_ANIBOAR";
			break;
		
		case 1:
			return "CM_ANICAT";
			break;
		
		case 2:
			return "CM_ANICOW";
			break;
		
		case 3:
			return "CM_ANICOY";
			break;
		
		case 4:
			return "CM_ANIDEE";
			break;
		
		case 5:
			return "CM_ANIHUS";
			break;
		
		case 6:
			return "CM_ANIMOU";
			break;
		
		case 7:
			return "CM_ANIPIG";
			break;
		
		case 8:
			return "CM_ANIPOO";
			break;
		
		case 9:
			return "CM_ANIPUG";
			break;
		
		case 10:
			return "CM_ANIRAB";
			break;
		
		case 11:
			return "CM_ANIRET";
			break;
		
		case 12:
			return "CM_ANIROT";
			break;
		
		case 13:
			return "CM_ANISHE";
			break;
		
		case 14:
			return "CM_ANIWES";
			break;
		
		case 15:
			return "CM_ANICHI";
			break;
		
		case 16:
			return "CM_ANICOR";
			break;
		
		case 17:
			return "CM_ANICRO";
			break;
		
		case 18:
			return "CM_ANIHEN";
			break;
		
		case 19:
			return "CM_ANIPGN";
			break;
		
		case 20:
			return "CM_ANISEA";
			break;
		
		case 21:
			return "HAIR_GROUP_E0";
			break;
	}
	return "ERROR!";
}

int func_18(int iParam0)//Position - 0xE09
{
	switch (iParam0)
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
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 11:
			return 11;
			break;
		
		case 12:
			return 12;
			break;
		
		case 13:
			return 13;
			break;
		
		case 14:
			return 14;
			break;
		
		case 15:
			return 15;
			break;
		
		case 16:
			return 16;
			break;
		
		case 17:
			return 17;
			break;
		
		case 18:
			return 18;
			break;
		
		case 19:
			return 19;
			break;
		
		case 20:
			return 20;
			break;
		
		case 27:
			return 21;
			break;
	}
	return -1;
}

int func_19()//Position - 0xF45
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	
	iVar0 = GlobalFunc_4917(iLocal_131);
	if (!MISC::IS_BIT_SET(iLocal_126, 6))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_53.f_3))
		{
			STREAMING::REMOVE_ANIM_DICT(Local_53.f_3);
		}
		func_414(&Local_53, iLocal_1353);
		MISC::SET_BIT(&iLocal_126, 6);
	}
	if (iLocal_1347 != -1)
	{
		AUDIO::STOP_SOUND(iLocal_1347);
		AUDIO::RELEASE_SOUND_ID(iLocal_1347);
		iLocal_1347 = -1;
	}
	iVar1 = 1;
	if (MISC::ARE_STRINGS_EQUAL(Local_53, "random@peyote@generic"))
	{
		iVar1 = AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Taxi_Vomit", 0);
	}
	STREAMING::REQUEST_ANIM_DICT(Local_53.f_3);
	STREAMING::REQUEST_ANIM_DICT(Local_53);
	STREAMING::REQUEST_MODEL(iVar0);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!MISC::IS_BIT_SET(iLocal_126, 7))
		{
			if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PeyoteEndIn") && MISC::GET_GAME_TIMER() > (iLocal_140 - 500))
			{
				if (!bLocal_132)
				{
					func_413();
				}
			}
			if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PeyoteEndIn") && MISC::GET_GAME_TIMER() > iLocal_140)
			{
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					HUD::CLEAR_HELP(1);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_826[iLocal_1354 /*46*/][iLocal_1355 /*3*/], 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_1011[iLocal_1354 /*16*/][iLocal_1355]);
					func_412(&iLocal_1603);
					GRAPHICS::_0x649C97D52332341A(1);
					STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_826[iLocal_1354 /*46*/][iLocal_1355 /*3*/], 1000f, 0);
					iLocal_125 = MISC::GET_GAME_TIMER();
				}
				else if (((((STREAMING::IS_NEW_LOAD_SCENE_LOADED() || (MISC::GET_GAME_TIMER() - iLocal_125) > 12000) && STREAMING::HAS_MODEL_LOADED(iVar0)) && STREAMING::HAS_ANIM_DICT_LOADED(Local_53)) && STREAMING::HAS_ANIM_DICT_LOADED(Local_53.f_3)) && iVar1)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
					PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), iVar0);
					MISC::_SET_PLAYER_IS_IN_ANIMAL_FORM(0);
					STREAMING::NEW_LOAD_SCENE_STOP();
					MISC::CLEAR_AREA(Local_826[iLocal_1354 /*46*/][iLocal_1355 /*3*/], 30f, 1, 0, 0, 0);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_REST", 0);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER", 0);
					func_65(&Global_91351, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iLocal_1356, 0);
					iVar2 = GlobalFunc_7719();
					iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(5, 30);
					GlobalFunc_8385(&iVar2, 0, iVar3, 0, 0, 0, 0);
					CLOCK::SET_CLOCK_TIME(GlobalFunc_208(iVar2), GlobalFunc_207(iVar2), GlobalFunc_206(iVar2));
					CLOCK::SET_CLOCK_DATE(GlobalFunc_209(iVar2), GlobalFunc_210(iVar2), GlobalFunc_4975(iVar2));
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_826[iLocal_1354 /*46*/][iLocal_1355 /*3*/], 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_1011[iLocal_1354 /*16*/][iLocal_1355]);
					MISC::SET_BIT(&(uLocal_1336[iLocal_1354]), iLocal_1355);
					MISC::SET_BIT(&iLocal_126, 7);
					MISC::CLEAR_BIT(&iLocal_126, 8);
					MISC::CLEAR_BIT(&iLocal_126, 9);
					MISC::CLEAR_BIT(&iLocal_126, 1);
				}
			}
		}
		else if (!MISC::IS_BIT_SET(iLocal_126, 8))
		{
			if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
			{
				CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(iLocal_1357);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				GlobalFunc_842(0, 0);
				func_567();
				if (iLocal_1428 != 0 && !ENTITY::DOES_ENTITY_EXIST(iLocal_1428))
				{
					GlobalFunc_4927(24, 1);
					Global_67138[24] = 0;
				}
				AUDIO::STOP_AUDIO_SCENES();
				func_31();
				func_30(0);
				AUDIO::TRIGGER_MUSIC_EVENT("PEYOTE_TRIPS_STOP");
				if (!STREAMING::HAS_ANIM_DICT_LOADED(Local_53))
				{
				}
				Var4 = { Local_826[iLocal_1354 /*46*/][iLocal_1355 /*3*/] };
				if (iLocal_1354 != 2)
				{
					Var4.f_2 = (Var4.f_2 + 0.25f);
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2));
				}
				Var7 = { 0f, 0f, Local_1011[iLocal_1354 /*16*/][iLocal_1355] };
				uLocal_136 = PED::CREATE_SYNCHRONIZED_SCENE(Var4, Var7, 2);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_136, 1);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_136, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_136, Local_53, Local_53.f_1, 1000f, -4f, 0, 0, 1148846080, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				func_29();
				GRAPHICS::ANIMPOSTFX_STOP("PeyoteEndIn");
				GRAPHICS::ANIMPOSTFX_PLAY("PeyoteEndOut", 0, 0);
				MISC::SET_BIT(&iLocal_126, 8);
			}
		}
		else if (!MISC::IS_BIT_SET(iLocal_126, 9))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), Local_53, Local_53.f_1, 3))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("interrupt")))
				{
					if (!Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PEYOTE_PROGRESSION_COMPLETE)
					{
						iLocal_1358 = 1;
						iLocal_1359 = 1;
					}
					MISC::SET_BIT(&iLocal_126, 10);
					MISC::SET_BIT(&iLocal_126, 9);
				}
			}
			else
			{
				MISC::SET_BIT(&iLocal_126, 9);
			}
		}
		else if (MISC::IS_BIT_SET(iLocal_126, 10))
		{
			if (MISC::IS_BIT_SET(iLocal_126, 11))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -2017877118) == 7)
				{
					MISC::CLEAR_BIT(&iLocal_126, 10);
				}
			}
			else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_136) == 1f)
			{
				if (!MISC::IS_BIT_SET(iLocal_126, 11))
				{
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), Local_53.f_3, Local_53.f_4, 4f, -4f, -1, 0, 0, 0, 0, 0);
					MISC::SET_BIT(&iLocal_126, 11);
				}
			}
			if (func_28())
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1785177548) == 1)
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(PLAYER::PLAYER_PED_ID(), -0.5f, 1);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), Local_53.f_3, Local_53.f_4, 3))
				{
					ENTITY::STOP_ENTITY_ANIM(PLAYER::PLAYER_PED_ID(), Local_53.f_4, Local_53.f_3, -0.5f);
				}
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				MISC::CLEAR_BIT(&iLocal_126, 10);
			}
		}
		else
		{
			STREAMING::REMOVE_ANIM_DICT(Local_53);
			STREAMING::REMOVE_ANIM_DICT(Local_53.f_3);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_53.f_5)))
			{
				STREAMING::REMOVE_ANIM_DICT(&(Local_53.f_5));
				StringCopy(&(Local_53.f_5), "", 64);
				StringCopy(&(Local_53.f_21), "", 16);
			}
			MISC::CLEAR_BIT(&iLocal_126, 6);
			MISC::CLEAR_BIT(&iLocal_126, 7);
			MISC::CLEAR_BIT(&iLocal_126, 8);
			MISC::CLEAR_BIT(&iLocal_126, 9);
			MISC::CLEAR_BIT(&iLocal_126, 11);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			TASK::RESET_SCENARIO_TYPES_ENABLED();
			if (iLocal_1357 == 4)
			{
				CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(iLocal_1357);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			}
			iLocal_129 = -1;
			sLocal_1596 = "";
			GlobalFunc_8316(0, 1, 1, 0);
			STATS::_0x98E2BC1CA26287C3();
			return 1;
		}
	}
	return 0;
}









int func_28()//Position - 0x1716
{
	if (((((PAD::IS_CONTROL_PRESSED(0, 32) || PAD::IS_CONTROL_PRESSED(0, 33)) || PAD::IS_CONTROL_PRESSED(0, 34)) || PAD::IS_CONTROL_PRESSED(0, 35)) || PAD::IS_CONTROL_PRESSED(0, 24)) || PAD::IS_CONTROL_PRESSED(0, 45))
	{
		return 1;
	}
	return 0;
}

void func_29()//Position - 0x176E
{
	bLocal_132 = true;
	iLocal_133 = 0;
	iLocal_137 = MISC::GET_GAME_TIMER() + 500;
	iLocal_138 = 255;
}

void func_30(bool bParam0)//Position - 0x1789
{
	if (bParam0)
	{
		MISC::SET_FADE_OUT_AFTER_DEATH(0);
		MISC::SET_FADE_OUT_AFTER_ARREST(0);
		MISC::SET_FADE_IN_AFTER_DEATH_ARREST(0);
		MISC::_SET_RESTART_CUSTOM_POSITION(Local_826[iLocal_1354 /*46*/][iLocal_1355 /*3*/], Local_1011[iLocal_1354 /*16*/][iLocal_1355]);
	}
	else
	{
		MISC::SET_FADE_OUT_AFTER_DEATH(1);
		MISC::SET_FADE_OUT_AFTER_ARREST(1);
		MISC::SET_FADE_IN_AFTER_DEATH_ARREST(1);
		MISC::_CLEAR_RESTART_CUSTOM_POSITION();
		MISC::IGNORE_NEXT_RESTART(0);
		MISC::PAUSE_DEATH_ARREST_RESTART(0);
	}
}

void func_31()//Position - 0x17E5
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 157, 1);
		ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 200);
	}
	PED::SET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID(), 200);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 189, 0);
	PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1f);
	PLAYER::SET_SWIM_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1f);
	PLAYER::SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
	func_35(0);
	Global_97297 = 0;
	Global_24447 = 0;
	GlobalFunc_563(0);
	HUD::DISPLAY_RADAR(1);
	if (!GlobalFunc_39(14))
	{
		HUD::THEFEED_RESUME();
	}
	PLAYER::SET_PLAYER_CAN_USE_COVER(PLAYER::PLAYER_ID(), 1);
	MISC::SET_STUNT_JUMPS_CAN_TRIGGER(1);
	MISC::WATER_OVERRIDE_SET_STRENGTH(0f);
	GlobalFunc_601(0, 0);
	GlobalFunc_601(1, 0);
	GlobalFunc_601(2, 0);
	GlobalFunc_601(3, 0);
	GlobalFunc_601(4, 0);
	GlobalFunc_601(5, 0);
	GlobalFunc_601(6, 0);
	GlobalFunc_601(7, 0);
	GlobalFunc_601(8, 0);
	GlobalFunc_601(9, 0);
	GlobalFunc_601(10, 0);
	GlobalFunc_601(11, 0);
	GlobalFunc_601(12, 0);
	GlobalFunc_601(13, 0);
	GlobalFunc_601(14, 0);
	GlobalFunc_601(15, 0);
	GlobalFunc_601(16, 0);
	GlobalFunc_601(17, 0);
	GlobalFunc_601(18, 0);
	GlobalFunc_601(19, 0);
	GlobalFunc_601(20, 0);
	Global_90001 = 0;
	if (Global_24599 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(Global_24599);
	}
	GlobalFunc_1998(0);
}




void func_35(bool bParam0)//Position - 0x1981
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 44)
	{
		func_36(iVar0, bParam0);
		iVar0++;
	}
}

void func_36(int iParam0, bool bParam1)//Position - 0x19A4
{
	if (bParam1)
	{
		if (!GlobalFunc_7898(iParam0, 2, 1))
		{
			func_43(iParam0, 2, 1);
		}
	}
	else if (GlobalFunc_7898(iParam0, 2, 1))
	{
		func_37(iParam0, 2, 1);
	}
}

void func_37(int iParam0, int iParam1, bool bParam2)//Position - 0x19DB
{
	int iVar0;
	
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_90014.f_1267[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (GlobalFunc_3() == 0)
		{
			iVar0 = GlobalFunc_6709(GlobalFunc_329(iParam0), -1, 0);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			GlobalFunc_6784(GlobalFunc_329(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT[iParam0]), iParam1);
	}
}






void func_43(int iParam0, int iParam1, bool bParam2)//Position - 0x1D88
{
	int iVar0;
	
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_90014.f_1267[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (GlobalFunc_3() == 0)
		{
			iVar0 = GlobalFunc_6709(GlobalFunc_329(iParam0), -1, 0);
			MISC::SET_BIT(&iVar0, iParam1);
			GlobalFunc_6784(GlobalFunc_329(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT[iParam0]), iParam1);
	}
}






















void func_65(var uParam0, bool bParam1)//Position - 0x23FC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	CLOCK::SET_CLOCK_TIME(GlobalFunc_208(uParam0->f_1), GlobalFunc_207(uParam0->f_1), GlobalFunc_206(uParam0->f_1));
	CLOCK::SET_CLOCK_DATE(GlobalFunc_209(uParam0->f_1), GlobalFunc_210(uParam0->f_1), GlobalFunc_4975(uParam0->f_1));
	MISC::_SET_WEATHER_TYPE_TRANSITION(uParam0->f_6, uParam0->f_7, uParam0->f_8);
	if (!bParam1)
	{
		if (!func_338(*uParam0))
		{
			return;
		}
		GlobalFunc_2000(uParam0);
		GlobalFunc_5575(uParam0);
		STATS::STAT_SET_INT(joaat("sp0_special_ability"), uParam0->f_1618[0], 1);
		STATS::STAT_SET_INT(joaat("sp1_special_ability"), uParam0->f_1618[1], 1);
		STATS::STAT_SET_INT(joaat("sp2_special_ability"), uParam0->f_1618[2], 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::_0xFFEE8FA29AB9A18E(PLAYER::PLAYER_ID());
		}
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 <= 34)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar1 /*104*/])) && (iVar1 <= 20 || iVar1 >= 24))
			{
				if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar1 /*104*/].f_18.f_3 == 31)
				{
				}
				GlobalFunc_7641(&iVar0, Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar1 /*104*/].f_18, Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar1 /*104*/].f_18.f_1, Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar1 /*104*/].f_18.f_2, Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar1 /*104*/].f_18.f_3, (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar1 /*104*/].f_18.f_4 - 1), Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar1 /*104*/].f_18.f_5);
				if (GlobalFunc_7640(iVar0, uParam0->f_1))
				{
					GlobalFunc_1556(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar1 /*104*/]), 1);
					GlobalFunc_5574(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar1 /*104*/]));
				}
			}
			iVar1++;
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		iVar2 = 0;
		while (iVar2 < 3)
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iVar2 /*74*/] = { uParam0->f_25[0 /*223*/][iVar2 /*74*/] };
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iVar2 /*74*/] = { uParam0->f_25[1 /*223*/][iVar2 /*74*/] };
			if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1 != uParam0->f_9[iVar2])
			{
				while (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1 != uParam0->f_9[iVar2] && iVar3 < 11)
				{
					func_329(iVar2);
					iVar3++;
				}
			}
			iVar5 = (Global_51925[iVar2] - uParam0->f_13[iVar2]);
			if (iVar5 != 0)
			{
				Global_51925[iVar2] = uParam0->f_13[iVar2];
				GlobalFunc_175(iVar2);
			}
			iVar4 = 0;
			while (iVar4 <= 3)
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iVar2 /*15*/][iVar4] = uParam0->f_2115[iVar2 /*15*/][iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iVar2 /*15*/].f_5[iVar4] = uParam0->f_2115[iVar2 /*15*/].f_5[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iVar2 /*15*/].f_10[iVar4] = uParam0->f_2115[iVar2 /*15*/].f_10[iVar4];
				iVar4++;
			}
			iVar4 = 0;
			while (iVar4 <= 2)
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/][iVar4] = uParam0->f_1622[iVar2 /*164*/][iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_4[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_4[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_8[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_8[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_12[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_12[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_16[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_16[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_20[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_20[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_24[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_24[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_28[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_28[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_32[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_32[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_36[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_36[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_40[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_40[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_44[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_44[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_48[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_48[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_52[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_52[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_56[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_56[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_60[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_60[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_64[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_64[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_68[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_68[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_72[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_72[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_76[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_76[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_80[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_80[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_84[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_84[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_88[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_88[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_92[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_92[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_96[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_96[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_100[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_100[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_104[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_104[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_108[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_108[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_112[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_112[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_116[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_116[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_120[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_120[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_124[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_124[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_128[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_128[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_132[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_132[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_136[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_136[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_140[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_140[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_144[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_144[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_148[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_148[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_152[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_152[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_156[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_156[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_160[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_160[iVar4];
				iVar4++;
			}
			iVar2++;
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_11306(PLAYER::PLAYER_PED_ID(), &(Global_89752[GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) /*65*/]), 0);
			GlobalFunc_7693(PLAYER::PLAYER_PED_ID());
			GlobalFunc_7694(PLAYER::PLAYER_PED_ID(), 1, 0);
			PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
			PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
			PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), uParam0->f_2, 0))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), uParam0->f_2, 1);
			}
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID()));
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
			}
			GlobalFunc_7707(PLAYER::PLAYER_PED_ID());
		}
	}
	GlobalFunc_76(0);
	GlobalFunc_76(1);
	GlobalFunc_76(2);
	GlobalFunc_76(3);
	GlobalFunc_76(4);
	GlobalFunc_76(5);
	GlobalFunc_76(6);
	GlobalFunc_76(7);
	GlobalFunc_76(8);
	GlobalFunc_5095(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT), -1);
}








































































































































































































































































void func_329(int iParam0)//Position - 0x4B67B
{
	int iVar0;
	int iVar1;
	
	Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iParam0 /*69*/].f_1 = (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iParam0 /*69*/].f_1 - 1);
	if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iParam0 /*69*/].f_1 < 0)
	{
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iParam0 /*69*/].f_1 = 10;
	}
	iVar0 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iParam0 /*69*/].f_2[Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iParam0 /*69*/].f_1 /*6*/];
	iVar1 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iParam0 /*69*/].f_2[Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iParam0 /*69*/].f_1 /*6*/].f_2;
	switch (iVar0)
	{
		case 1:
			Global_51925[iParam0] = (Global_51925[iParam0] - iVar1);
			break;
		
		case 0:
			Global_51925[iParam0] = (Global_51925[iParam0] + iVar1);
			break;
	}
	Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iParam0 /*69*/].f_2[Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iParam0 /*69*/].f_1 /*6*/].f_2 = 0;
	Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iParam0 /*69*/].f_2[Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iParam0 /*69*/].f_1 /*6*/].f_1 = 0;
	Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iParam0 /*69*/] = (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iParam0 /*69*/] - 1);
	GlobalFunc_175(iParam0);
}









int func_338(int iParam0)//Position - 0x4C364
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	var uVar5;
	int iVar6;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
		
		default:
			return 0;
			break;
	}
	iVar6 = GlobalFunc_8315();
	if (iVar6 != 145)
	{
		Var1 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar6 /*3*/] };
		uVar4 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[iVar6];
		uVar5 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1542[iVar6];
	}
	while (!func_339(iVar0, 1))
	{
		SYSTEM::WAIT(0);
	}
	if (iVar6 != 145)
	{
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar6 /*3*/] = { Var1 };
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[iVar6] = uVar4;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1542[iVar6] = uVar5;
	}
	return 1;
}

int func_339(int iParam0, bool bParam1)//Position - 0x4C440
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
		func_409(&(Global_17052[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2));
		func_390(&(Global_17052[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_17052.f_7 = iParam0;
	Global_17052.f_39 = 1;
	func_342(&Global_17052, 0, 0, 0);
	GlobalFunc_5124(iParam0);
	return 1;
}



int func_342(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x4C5F8
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
	
	if (!uParam0->f_39)
	{
		if (uParam0->f_7 == 4)
		{
			return 1;
		}
	}
	if ((!PED::IS_PED_INJURED((*uParam0)[uParam0->f_7]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && (*uParam0)[uParam0->f_7] != PLAYER::PLAYER_PED_ID())
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
			if ((PED::IS_PED_RAGDOLL((*uParam0)[uParam0->f_7]) && !FIRE::IS_ENTITY_ON_FIRE((*uParam0)[uParam0->f_7])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE((*uParam0)[uParam0->f_7]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam0)[uParam0->f_7]);
			}
			else
			{
				TASK::CLEAR_PED_TASKS((*uParam0)[uParam0->f_7]);
			}
		}
		iVar0 = PLAYER::PLAYER_PED_ID();
		iVar1 = GlobalFunc_8315();
		if (!uParam0->f_23)
		{
			GlobalFunc_9119(iVar0, 0);
		}
		GlobalFunc_5127(iVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, 1);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, 1);
		iVar2 = GlobalFunc_584(uParam0->f_7);
		GlobalFunc_9119((*uParam0)[uParam0->f_7], 0);
		fVar3 = (((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH((*uParam0)[uParam0->f_7])) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH((*uParam0)[uParam0->f_7])) - 100f)) * 100f);
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
		PLAYER::CHANGE_PLAYER_PED(PLAYER::PLAYER_ID(), (*uParam0)[uParam0->f_7], bParam2, 0);
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
		uParam0->f_5 = GlobalFunc_237(iVar1);
		if (uParam0->f_5 == 4)
		{
			uParam0->f_5 = 3;
		}
		(*uParam0)[uParam0->f_5] = iVar0;
		(*uParam0)[uParam0->f_7] = 0;
		uParam0->f_6 = GlobalFunc_237(iVar2);
		uParam0->f_7 = 4;
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
		GlobalFunc_9118();
		GlobalFunc_8506(iVar2);
		GlobalFunc_10857(GlobalFunc_4933(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 145, 0));
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
		if (PED::IS_PED_INJURED((*uParam0)[uParam0->f_7]))
		{
		}
		if (PLAYER::PLAYER_PED_ID() == (*uParam0)[uParam0->f_7])
		{
		}
	}
	return 0;
}
















































int func_390(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x52E85
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
			*uParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam5, 0, 0);
			GlobalFunc_8386(*uParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
			GlobalFunc_11321(*uParam0);
			GlobalFunc_7694(*uParam0, 1, 0);
			GlobalFunc_7693(*uParam0);
			GlobalFunc_7707(*uParam0);
			GlobalFunc_11334(*uParam0, bParam8);
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



















int func_409(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x545EE
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
				GlobalFunc_8386(*uParam0, iParam1, bParam5);
				PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
				GlobalFunc_11321(*uParam0);
				GlobalFunc_7694(*uParam0, 1, 0);
				GlobalFunc_7693(*uParam0);
				GlobalFunc_7707(*uParam0);
				GlobalFunc_11334(*uParam0, bParam6);
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



void func_412(int iParam0)//Position - 0x546E7
{
	if (*iParam0 > -1 && *iParam0 < 8)
	{
		GRAPHICS::_0x649C97D52332341A(*iParam0);
		*iParam0 = -1;
	}
}

void func_413()//Position - 0x5470D
{
	bLocal_132 = true;
	iLocal_133 = 1;
	iLocal_137 = MISC::GET_GAME_TIMER() + 500;
	iLocal_138 = 0;
}

void func_414(var uParam0, int iParam1)//Position - 0x54727
{
	uParam0->f_1 = "wakeup";
	switch (iParam1)
	{
		case 0:
			*uParam0 = "random@peyote@deer";
			break;
		
		case 1:
			*uParam0 = "random@peyote@cat";
			break;
		
		case 2:
			*uParam0 = "random@peyote@deer";
			break;
		
		case 3:
			*uParam0 = "random@peyote@dog";
			break;
		
		case 4:
			*uParam0 = "random@peyote@deer";
			break;
		
		case 5:
			*uParam0 = "random@peyote@dog";
			break;
		
		case 6:
			*uParam0 = "random@peyote@cat";
			break;
		
		case 7:
			*uParam0 = "random@peyote@deer";
			break;
		
		case 8:
			*uParam0 = "random@peyote@dog";
			break;
		
		case 9:
			*uParam0 = "random@peyote@dog";
			break;
		
		case 10:
			*uParam0 = "random@peyote@rabbit";
			break;
		
		case 11:
			*uParam0 = "random@peyote@dog";
			break;
		
		case 12:
			*uParam0 = "random@peyote@dog";
			break;
		
		case 13:
			*uParam0 = "random@peyote@dog";
			break;
		
		case 14:
			*uParam0 = "random@peyote@dog";
			break;
		
		case 15:
			*uParam0 = "random@peyote@bird";
			break;
		
		case 16:
			*uParam0 = "random@peyote@bird";
			break;
		
		case 17:
			*uParam0 = "random@peyote@bird";
			break;
		
		case 18:
			*uParam0 = "random@peyote@chicken";
			break;
		
		case 19:
			*uParam0 = "random@peyote@bird";
			break;
		
		case 20:
			*uParam0 = "random@peyote@bird";
			break;
		
		case 21:
			*uParam0 = "random@peyote@fish";
			break;
		
		case 22:
			*uParam0 = "random@peyote@fish";
			break;
		
		case 23:
			*uParam0 = "random@peyote@fish";
			break;
		
		case 24:
			*uParam0 = "random@peyote@fish";
			break;
		
		case 25:
			*uParam0 = "random@peyote@fish";
			break;
		
		case 26:
			*uParam0 = "random@peyote@fish";
			break;
		
		case 27:
			*uParam0 = "random@peyote@generic";
			break;
		
		default:
			break;
	}
	if (iLocal_1354 == 2)
	{
		Local_53.f_3 = "SWIMMING@BASE";
		Local_53.f_4 = "DIVE_IDLE";
	}
	else
	{
		Local_53.f_4 = "idle_intro";
		switch (iLocal_131)
		{
			case 0:
				Local_53.f_3 = "move_p_m_zero";
				break;
			
			case 1:
				Local_53.f_3 = "move_p_m_one";
				break;
			
			case 2:
				Local_53.f_3 = "move_p_m_two";
				break;
			
			default:
				break;
			}
	}
}

int func_415(var uParam0)//Position - 0x54982
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (func_419(uParam0))
		{
			return 1;
		}
		if (func_416())
		{
			return 1;
		}
	}
	return 0;
}

int func_416()//Position - 0x549AF
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
		{
			if (func_417(0))
			{
				if (Global_24600 == -1)
				{
					Global_24600 = MISC::GET_GAME_TIMER() + 3000;
				}
				else if (MISC::GET_GAME_TIMER() > Global_24600)
				{
					return 1;
				}
			}
		}
		else
		{
			Global_24600 = -1;
		}
	}
	return 0;
}

int func_417(int iParam0)//Position - 0x54A01
{
	switch (GlobalFunc_1432())
	{
		case joaat("a_c_dolphin"):
		case joaat("a_c_fish"):
		case joaat("a_c_killerwhale"):
		case joaat("a_c_sharkhammer"):
		case joaat("a_c_sharktiger"):
		case joaat("a_c_stingray"):
			return 1;
		
		case joaat("ig_orleans"):
			return iParam0;
			break;
	}
	return 0;
}


int func_419(var uParam0)//Position - 0x54A59
{
	float fVar0;
	struct<3> Var1;
	float fVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
		{
			if (!func_417(1))
			{
				Var1 = { PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f) };
				Var1.f_2 = (Var1.f_2 + 0.75f);
				if (WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(Var1, 208, &fVar0) == 1)
				{
					fVar4 = -0.32f;
					if (GlobalFunc_1432() == joaat("a_c_hen"))
					{
						fVar4 = -0.24f;
					}
					if (((Var1.f_2 - fVar0) - 0.75f) < fVar4)
					{
						return 1;
					}
				}
			}
			Var5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (Var5.f_2 <= -150f)
			{
				if (GlobalFunc_1432() == joaat("ig_orleans"))
				{
					iVar8 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
					if (iVar8 < 500)
					{
						return 1;
					}
					else if (MISC::GET_GAME_TIMER() > *uParam0 + 2000)
					{
						ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), (iVar8 - 500));
						*uParam0 = MISC::GET_GAME_TIMER();
					}
				}
			}
		}
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1031.02f, -399.0387f, 37.4325f) < 40f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1027.634f, -397.8321f, 38.1158f, -1026.092f, -397.068f, 37.5389f, 1.5f, 0, 1, 0))
			{
				return 1;
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1033.187f, -400.7195f, 38.1248f, -1034.797f, -401.579f, 37.6024f, 1.5f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_420()//Position - 0x54BD3
{
	GRAPHICS::ANIMPOSTFX_PLAY("PeyoteEndIn", 0, 0);
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PEYOTE_TRANSITION_OUT_SCENE"))
	{
		AUDIO::START_AUDIO_SCENE("PEYOTE_TRANSITION_OUT_SCENE");
	}
	if (AUDIO::LOAD_STREAM("PEYOTE_TRANSITION_OUT", 0))
	{
		AUDIO::PLAY_STREAM_FRONTEND();
	}
	iLocal_140 = MISC::GET_GAME_TIMER() + 2500;
	GlobalFunc_8316(1, 1, 1, 0);
	GlobalFunc_5105();
}













void func_433()//Position - 0x552AB
{
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 36))
	{
		func_434(&(Local_53.f_5), &(Local_53.f_21), &uLocal_1597, iLocal_131, &iLocal_1347, &(Local_78.f_28));
	}
}

void func_434(char* sParam0, var uParam1, var uParam2, int iParam3, int iParam4, char* sParam5)//Position - 0x552D5
{
	if ((((!GlobalFunc_111() && !AUDIO::IS_ANIMAL_VOCALIZATION_PLAYING(PLAYER::PLAYER_PED_ID())) && (MISC::IS_STRING_NULL_OR_EMPTY(sParam0) || !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sParam0, uParam1, 3))) && MISC::GET_GAME_TIMER() > *uParam2) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 0);
		switch (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			case joaat("a_c_fish"):
			case joaat("a_c_sharkhammer"):
			case joaat("a_c_sharktiger"):
			case joaat("a_c_stingray"):
				switch (iParam3)
				{
					case 0:
						AUDIO::PLAY_AMBIENT_SPEECH_FROM_POSITION_NATIVE("DROWNING", "WAVELOAD_PAIN_MICHAEL", 0f, 0f, 0f, "SPEECH_PARAMS_FORCE_FRONTEND");
						break;
					
					case 1:
						AUDIO::PLAY_AMBIENT_SPEECH_FROM_POSITION_NATIVE("DROWNING", "WAVELOAD_PAIN_FRANKLIN", 0f, 0f, 0f, "SPEECH_PARAMS_FORCE_FRONTEND");
						break;
					
					case 2:
						AUDIO::PLAY_AMBIENT_SPEECH_FROM_POSITION_NATIVE("DROWNING", "WAVELOAD_PAIN_TREVOR", 0f, 0f, 0f, "SPEECH_PARAMS_FORCE_FRONTEND");
						break;
					
					default:
						AUDIO::PLAY_AMBIENT_SPEECH_FROM_POSITION_NATIVE("DROWNING", "WAVELOAD_PAIN_MICHAEL", 0f, 0f, 0f, "SPEECH_PARAMS_FORCE_FRONTEND");
						break;
				}
				break;
			
			case joaat("ig_orleans"):
				if (*iParam4 == -1)
				{
					*iParam4 = AUDIO::GET_SOUND_ID();
				}
				AUDIO::PLAY_SOUND_FROM_ENTITY(*iParam4, sParam5, PLAYER::PLAYER_PED_ID(), 0, 0, 0);
				break;
			
			default:
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
				{
					AUDIO::PLAY_ANIMAL_VOCALIZATION(PLAYER::PLAYER_PED_ID(), -1, sParam5);
				}
				break;
		}
		AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 1);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sParam0, uParam1, 8f, -4f, -1, 32, 0, 0, 0, 0);
			*uParam2 = MISC::GET_GAME_TIMER() + 500;
		}
	}
}


void func_436(int iParam0, int iParam1, bool bParam2)//Position - 0x55476
{
	func_439(iParam1);
	if (!func_438(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		if (!GlobalFunc_39(14))
		{
			HUD::THEFEED_HIDE_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 58, 1);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, 1);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 195, 1);
	}
	if ((!func_437(iParam0) || iParam0 == joaat("a_c_hen")) && iParam0 != joaat("ig_orleans"))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
	}
	if (!GlobalFunc_39(14))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 19, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 244, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 27, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 28, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 29, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 171, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 49, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 36, 1);
	if (iParam0 != joaat("ig_orleans"))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 45, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 50, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 55, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 58, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 262, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 261, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 7, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 48, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 53, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 54, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 56, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 57, 1);
	}
	else
	{
		CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		PLAYER::SET_PLAYER_CAN_USE_COVER(PLAYER::PLAYER_ID(), 0);
	}
	if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4 || CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 0)
	{
		CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(1);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
	}
	Global_90001 = 1;
}

int func_437(int iParam0)//Position - 0x55622
{
	switch (iParam0)
	{
		case joaat("a_c_chickenhawk"):
		case joaat("a_c_cormorant"):
		case joaat("a_c_crow"):
		case joaat("a_c_hen"):
		case joaat("a_c_pigeon"):
		case joaat("a_c_seagull"):
			return 1;
			break;
	}
	return 0;
}

int func_438(int iParam0)//Position - 0x5565D
{
	switch (iParam0)
	{
		case joaat("a_c_boar"):
		case joaat("a_c_cat_01"):
		case joaat("a_c_cow"):
		case joaat("a_c_coyote"):
		case joaat("a_c_deer"):
		case joaat("a_c_husky"):
		case joaat("a_c_mtlion"):
		case joaat("a_c_pig"):
		case joaat("a_c_poodle"):
		case joaat("a_c_pug"):
		case joaat("a_c_rabbit_01"):
		case joaat("a_c_retriever"):
		case joaat("a_c_rottweiler"):
		case joaat("a_c_shepherd"):
		case joaat("a_c_westy"):
		case joaat("a_c_chickenhawk"):
		case joaat("a_c_cormorant"):
		case joaat("a_c_crow"):
		case joaat("a_c_hen"):
		case joaat("a_c_pigeon"):
		case joaat("a_c_seagull"):
		case joaat("a_c_dolphin"):
		case joaat("a_c_fish"):
		case joaat("a_c_killerwhale"):
		case joaat("a_c_sharkhammer"):
		case joaat("a_c_sharktiger"):
		case joaat("a_c_stingray"):
		case joaat("ig_orleans"):
			return 1;
			break;
	}
	return 0;
}

void func_439(var uParam0)//Position - 0x5571C
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 1)
	{
		if (*uParam0 == -1)
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() > *uParam0 + 20000)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			*uParam0 = -1;
		}
	}
	else
	{
		*uParam0 = -1;
	}
}

void func_440()//Position - 0x5576C
{
	if ((ENTITY::DOES_ENTITY_EXIST(iLocal_1428) && !ENTITY::IS_ENTITY_DEAD(iLocal_1428)) && !VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_1428, -1))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_1428, Local_1671, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(iLocal_1428, fLocal_1674);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1428);
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1428);
		iLocal_1428 = 0;
		Local_1675 = { 0f, 0f, 0f };
		fLocal_1678 = 0f;
		Local_1671 = { 0f, 0f, 0f };
		fLocal_1674 = 0f;
	}
}

void func_441()//Position - 0x557DE
{
	if ((ENTITY::DOES_ENTITY_EXIST(iLocal_1428) && !ENTITY::IS_ENTITY_DEAD(iLocal_1428)) && func_470(iLocal_1428))
	{
		GlobalFunc_10013(iLocal_1428, Local_1675, fLocal_1678, 24, 0);
		Local_1675 = { 0f, 0f, 0f };
		fLocal_1678 = 0f;
		Local_1671 = { 0f, 0f, 0f };
		fLocal_1674 = 0f;
	}
}





























int func_470(int iParam0)//Position - 0x585E0
{
	if (VEHICLE::IS_VEHICLE_MODEL(iParam0, GlobalFunc_561()))
	{
		return 1;
	}
	return 0;
}


void func_472()//Position - 0x58607
{
	struct<6> Var0;
	
	switch (iLocal_1354)
	{
		case 2:
			if (iLocal_1353 == 26 || iLocal_1353 == 21)
			{
				StringCopy(&Var0, "PEY_W", 24);
				func_474(Var0);
			}
			else if (iLocal_1353 == 22)
			{
				func_473("PEY_GENERAL");
			}
			else
			{
				StringCopy(&Var0, "PEY_W_A", 24);
				func_474(Var0);
			}
			break;
		
		case 3:
			StringCopy(&Var0, "PEY_L_A", 24);
			func_474(Var0);
			break;
		
		case 0:
			if ((iLocal_1353 == 2 || iLocal_1353 == 1) || iLocal_1353 == 10)
			{
				StringCopy(&Var0, "PEY_L", 24);
				func_474(Var0);
			}
			else
			{
				StringCopy(&Var0, "PEY_L_A", 24);
				func_474(Var0);
			}
			break;
		
		default:
			switch (iLocal_1353)
			{
				case 18:
				case 2:
					StringCopy(&Var0, "PEY_L", 24);
					func_474(Var0);
					break;
				
				case 15:
				case 16:
				case 17:
				case 19:
				case 20:
					func_473("PEY_HIGH");
					break;
				
				default:
					StringCopy(&Var0, "PEY_L_A", 24);
					func_474(Var0);
					break;
			}
			break;
	}
}

void func_473(char[4] cParam0)//Position - 0x5873E
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(cParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 0, -1);
}

void func_474(char[12] cParam0, char[4] cParam3, char[4] cParam4, char[4] cParam5)//Position - 0x58754
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		StringConCat(&cParam0, "_PC", 24);
	}
	func_473(&cParam0);
}

int func_475()//Position - 0x58773
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	int iVar6;
	char* sVar7;
	int iVar8;
	
	iVar0 = func_529(iLocal_1353);
	STREAMING::REQUEST_MODEL(iVar0);
	if (!MISC::IS_BIT_SET(iLocal_126, 2))
	{
		func_523(&Local_53, func_525(iLocal_1354, iLocal_1355));
		func_522(&(Local_53.f_5), &(Local_53.f_21), iVar0);
		func_521();
		func_520(iLocal_1353);
		MISC::SET_BIT(&iLocal_126, 2);
	}
	if (MISC::IS_BIT_SET(iLocal_126, 3))
	{
		HUD::THEFEED_HIDE_THIS_FRAME();
	}
	if (!MISC::IS_BIT_SET(iLocal_126, 3))
	{
		STREAMING::REQUEST_ANIM_DICT(Local_53);
		STREAMING::REQUEST_MODEL(iLocal_1430);
		iVar1 = 1;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_53.f_5)))
		{
			STREAMING::REQUEST_ANIM_DICT(&(Local_53.f_5));
			iVar1 = STREAMING::HAS_ANIM_DICT_LOADED(&(Local_53.f_5));
		}
		iVar2 = 1;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_53.f_3))
		{
			STREAMING::REQUEST_ANIM_DICT(Local_53.f_3);
			iVar2 = STREAMING::HAS_ANIM_DICT_LOADED(Local_53.f_3);
		}
		if (((((STREAMING::HAS_ANIM_DICT_LOADED(Local_53) && iVar1) && iVar2) && STREAMING::HAS_MODEL_LOADED(iLocal_1430)) && AUDIO::LOAD_STREAM("PEYOTE_TRANSITION_IN", 0)) && func_516())
		{
			func_511(iLocal_1354, iLocal_1355);
			GlobalFunc_8316(1, 1, 1, 0);
			FIRE::STOP_FIRE_IN_RANGE(Local_141[iLocal_1354 /*46*/][iLocal_1355 /*3*/], 10f);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 1);
				MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2f, 1, 0, 0, 0);
			}
			HUD::DISPLAY_RADAR(0);
			HUD::THEFEED_PAUSE();
			uLocal_136 = PED::CREATE_SYNCHRONIZED_SCENE(Local_141[iLocal_1354 /*46*/][iLocal_1355 /*3*/], Local_326[iLocal_1354 /*46*/][iLocal_1355 /*3*/], 2);
			uLocal_134 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_136, 0);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_136, 0);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_136, Local_53, Local_53.f_1, 1000f, -1000f, 0, 0, 1148846080, 0);
			CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_134, uLocal_136, Local_53.f_2, Local_53);
			PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_136, 0.1f);
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PEYOTE_TRANSITION_IN_SCENE"))
			{
				AUDIO::START_AUDIO_SCENE("PEYOTE_TRANSITION_IN_SCENE");
			}
			if (AUDIO::LOAD_STREAM("PEYOTE_TRANSITION_IN", 0))
			{
				AUDIO::PLAY_STREAM_FRONTEND();
			}
			MISC::SET_BIT(&iLocal_126, 3);
		}
	}
	else if (!MISC::IS_BIT_SET(iLocal_126, 4))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("Create_Peyote")))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1427))
			{
				iLocal_1427 = OBJECT::CREATE_OBJECT(iLocal_1430, Local_141[iLocal_1354 /*46*/][iLocal_1355 /*3*/], 1, 1, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1430);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1427))
		{
			if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_1427))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_1427, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("Destroy_Peyote")))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1427))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(iLocal_1427))
				{
					ENTITY::DETACH_ENTITY(iLocal_1427, 1, 1);
					OBJECT::DELETE_OBJECT(&iLocal_1427);
					GRAPHICS::ANIMPOSTFX_PLAY("PeyoteIn", 0, 0);
					iLocal_140 = MISC::GET_GAME_TIMER() + 10000;
					MISC::SET_BIT(&iLocal_126, 4);
				}
			}
		}
	}
	if (MISC::IS_BIT_SET(iLocal_126, 4))
	{
		if (!MISC::IS_BIT_SET(iLocal_126, 5))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("Ragdoll")))
			{
				PED::SET_PED_TO_RAGDOLL(PLAYER::PLAYER_PED_ID(), 4000, 5000, 1, 1, 1, 0);
				PED::CREATE_NM_MESSAGE(1, 34);
				PED::GIVE_PED_NM_MESSAGE(PLAYER::PLAYER_PED_ID());
				MISC::SET_BIT(&iLocal_126, 5);
			}
		}
		if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PeyoteIn") && MISC::GET_GAME_TIMER() > (iLocal_140 - 9750))
		{
			if ((iLocal_1354 == 1 && iLocal_1355 == 3) || (iLocal_1354 == 0 && iLocal_1355 == 2))
			{
			}
			else
			{
				func_509();
			}
		}
		if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PeyoteIn") && MISC::GET_GAME_TIMER() > (iLocal_140 - 500))
		{
			if (!bLocal_132)
			{
				func_413();
			}
		}
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PeyoteIn") && MISC::GET_GAME_TIMER() > iLocal_140)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_136))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						STREAMING::REMOVE_ANIM_DICT(Local_53);
					}
					if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_511[iLocal_1354 /*46*/][iLocal_1355 /*3*/], 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_696[iLocal_1354 /*16*/][iLocal_1355]);
						STREAMING::NEW_LOAD_SCENE_START(Local_511[iLocal_1354 /*46*/][iLocal_1355 /*3*/], 0f, 0f, Local_696[iLocal_1354 /*16*/][iLocal_1355], 1000f, 0);
						iLocal_125 = MISC::GET_GAME_TIMER();
					}
					else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED() || (MISC::GET_GAME_TIMER() - iLocal_125) > 12000)
					{
						if (!GlobalFunc_486())
						{
							if (iLocal_124 == -1)
							{
								iLocal_124 = MISC::GET_GAME_TIMER();
								if (iLocal_1669)
								{
									GlobalFunc_11306(PLAYER::PLAYER_PED_ID(), &uLocal_1604, 0);
									iLocal_1669 = 0;
								}
								if (iLocal_1670)
								{
									PED::_SET_PED_SCUBA_GEAR_VARIATION(PLAYER::PLAYER_PED_ID());
									iLocal_1670 = 0;
								}
								func_485("animal_controller", 1, 0);
								iLocal_1356 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
								iLocal_1357 = CAM::GET_FOLLOW_PED_CAM_VIEW_MODE();
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(Local_761[iLocal_1354 /*16*/][iLocal_1355], 1065353216);
								PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), iVar0);
								PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
								func_484(&Var3, iLocal_1353);
								iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(0, Var3.f_2);
								func_482(&iVar6);
								PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(0, Var3.x), 0);
								PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 3, 0, MISC::GET_RANDOM_INT_IN_RANGE(0, Var3.f_1), 0);
								PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 4, 0, iVar6, 0);
								MISC::_SET_PLAYER_IS_IN_ANIMAL_FORM(1);
								func_481(func_529(iLocal_1353), 1, 1);
								func_30(1);
								MISC::CLEAR_AREA(Local_511[iLocal_1354 /*46*/][iLocal_1355 /*3*/], 15f, 1, 0, 0, 0);
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_511[iLocal_1354 /*46*/][iLocal_1355 /*3*/], 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_696[iLocal_1354 /*16*/][iLocal_1355]);
								func_479(&iLocal_1603, Local_511[iLocal_1354 /*46*/][iLocal_1355 /*3*/], 2.5f);
								CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
								CAM::DESTROY_CAM(uLocal_134, 0);
								MISC::SET_BIT(&iLocal_126, 1);
								iLocal_1601 = -1;
							}
							else if ((MISC::GET_GAME_TIMER() - iLocal_124) > 250)
							{
								if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
								{
									STREAMING::NEW_LOAD_SCENE_STOP();
									if (iLocal_1357 == 2 || func_478(iLocal_1353) == 1)
									{
										CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(2);
									}
									else
									{
										CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(1);
									}
									CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
									CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(Local_761[iLocal_1354 /*16*/][iLocal_1355], 1065353216);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
									STREAMING::REMOVE_ANIM_DICT(Local_53);
									MISC::CLEAR_BIT(&iLocal_126, 2);
									MISC::CLEAR_BIT(&iLocal_126, 3);
									MISC::CLEAR_BIT(&iLocal_126, 4);
									MISC::CLEAR_BIT(&iLocal_126, 5);
									AUDIO::SET_ANIMAL_MOOD(PLAYER::PLAYER_PED_ID(), 1);
									func_477(iLocal_1353);
									if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_53.f_3))
									{
										TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), Local_53.f_3, Local_53.f_4, 1000f, -1056964608, -1, 0, 0, 0, 0, 0);
									}
									func_29();
									GRAPHICS::ANIMPOSTFX_STOP("PeyoteIn");
									GRAPHICS::ANIMPOSTFX_PLAY("PeyoteOut", 0, 0);
									AUDIO::TRIGGER_MUSIC_EVENT("PEYOTE_TRIPS_START");
									if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1596))
									{
										switch (iLocal_131)
										{
											case 0:
												sVar7 = "MICHAEL";
												iVar8 = 0;
												break;
											
											case 1:
												sVar7 = "FRANKLIN";
												iVar8 = 1;
												break;
											
											case 2:
												sVar7 = "TREVOR";
												iVar8 = 1;
												break;
										}
										GlobalFunc_173(&uLocal_1431, iVar8, PLAYER::PLAYER_PED_ID(), sVar7, 0, 0);
									}
									else
									{
										MISC::SET_BIT(&iLocal_126, 12);
									}
									iLocal_124 = -1;
									GlobalFunc_8316(0, 1, 1, 0);
									return 1;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}


void func_477(int iParam0)//Position - 0x58F80
{
	switch (func_478(iParam0))
	{
		case 0:
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PLAYER_AS_ANIMAL_LAND_SCENE"))
			{
				AUDIO::START_AUDIO_SCENE("PLAYER_AS_ANIMAL_LAND_SCENE");
			}
			break;
		
		case 1:
			if (iParam0 != 18)
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PLAYER_AS_ANIMAL_AIR_SCENE"))
				{
					AUDIO::START_AUDIO_SCENE("PLAYER_AS_ANIMAL_AIR_SCENE");
				}
			}
			else if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PLAYER_AS_ANIMAL_LAND_SCENE"))
			{
				AUDIO::START_AUDIO_SCENE("PLAYER_AS_ANIMAL_LAND_SCENE");
			}
			break;
		
		case 2:
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PLAYER_AS_ANIMAL_WATER_SCENE"))
			{
				AUDIO::START_AUDIO_SCENE("PLAYER_AS_ANIMAL_WATER_SCENE");
			}
			break;
		
		case 3:
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PLAYER_AS_SASQUATCH_SCENE"))
			{
				AUDIO::START_AUDIO_SCENE("PLAYER_AS_SASQUATCH_SCENE");
			}
			break;
	}
}

int func_478(int iParam0)//Position - 0x59034
{
	switch (iParam0)
	{
		case 0:
		case 1:
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
		case 13:
		case 14:
			return 0;
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
			return 1;
			break;
		
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
			return 2;
			break;
		
		case 27:
			return 3;
			break;
	}
	return -1;
}

void func_479(int iParam0, struct<3> Param1, float fParam4)//Position - 0x59108
{
	var uVar0;
	
	if (func_480(&uVar0))
	{
		*iParam0 = uVar0;
		GRAPHICS::_0xAE51BC858F32BA66(*iParam0, Param1, fParam4);
	}
}

int func_480(var uParam0)//Position - 0x5912E
{
	*uParam0 = 0;
	*uParam0 = 0;
	while (*uParam0 < 8)
	{
		if (!GRAPHICS::_0x2C42340F916C5930(*uParam0))
		{
			return 1;
		}
		*uParam0++;
	}
	*uParam0 = -1;
	return 0;
}

void func_481(int iParam0, bool bParam1, bool bParam2)//Position - 0x59165
{
	if (!func_438(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		HUD::DISPLAY_RADAR(0);
		if (!GlobalFunc_39(14))
		{
			HUD::THEFEED_PAUSE();
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 0);
		if (iParam0 != joaat("ig_orleans"))
		{
			PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
			PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 0);
			ENTITY::SET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID(), 200);
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 200);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 189, 1);
			PLAYER::SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), 100f);
			PED::SET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID(), 2500);
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 2500);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 157, 0);
		if (bParam2)
		{
			switch (iParam0)
			{
				case joaat("a_c_mtlion"):
				case joaat("a_c_boar"):
				case joaat("a_c_cow"):
				case joaat("a_c_coyote"):
				case joaat("ig_orleans"):
					Global_24599 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(81, PLAYER::PLAYER_PED_ID(), 0f);
					if (Global_24599 == 0)
					{
					}
					break;
				}
			}
	}
	func_35(1);
	Global_97297 = 1;
	Global_24447 = 1;
	GlobalFunc_563(1);
	MISC::SET_STUNT_JUMPS_CAN_TRIGGER(0);
	MISC::WATER_OVERRIDE_SET_SHOREWAVEAMPLITUDE(0f);
	MISC::WATER_OVERRIDE_SET_SHOREWAVEMINAMPLITUDE(0f);
	MISC::WATER_OVERRIDE_SET_SHOREWAVEMAXAMPLITUDE(0f);
	MISC::WATER_OVERRIDE_SET_OCEANNOISEMINAMPLITUDE(0f);
	MISC::WATER_OVERRIDE_SET_OCEANWAVEAMPLITUDE(0f);
	MISC::WATER_OVERRIDE_SET_OCEANWAVEMINAMPLITUDE(0f);
	MISC::WATER_OVERRIDE_SET_OCEANWAVEMAXAMPLITUDE(0f);
	MISC::WATER_OVERRIDE_SET_RIPPLEBUMPINESS(0f);
	MISC::WATER_OVERRIDE_SET_RIPPLEMINBUMPINESS(0f);
	MISC::WATER_OVERRIDE_SET_RIPPLEMAXBUMPINESS(0f);
	MISC::WATER_OVERRIDE_SET_RIPPLEDISTURB(0f);
	MISC::WATER_OVERRIDE_SET_STRENGTH(0.1f);
	if (iParam0 != joaat("ig_orleans"))
	{
		GlobalFunc_601(0, 1);
		GlobalFunc_601(1, 1);
		GlobalFunc_601(2, 1);
		GlobalFunc_601(3, 1);
		GlobalFunc_601(4, 1);
		GlobalFunc_601(5, 1);
		GlobalFunc_601(6, 1);
		GlobalFunc_601(7, 1);
		GlobalFunc_601(8, 1);
		GlobalFunc_601(9, 1);
		GlobalFunc_601(10, 1);
		GlobalFunc_601(11, 1);
		GlobalFunc_601(12, 1);
		GlobalFunc_601(13, 1);
		GlobalFunc_601(14, 1);
		GlobalFunc_601(15, 1);
		GlobalFunc_601(16, 1);
		GlobalFunc_601(17, 1);
		GlobalFunc_601(18, 1);
		GlobalFunc_601(19, 1);
		GlobalFunc_601(20, 1);
	}
	GlobalFunc_1998(1);
}

void func_482(int iParam0)//Position - 0x59348
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	
	if (iLocal_1353 == 12)
	{
		if (*iParam0 == 0)
		{
			sVar0 = "";
			sVar1 = "";
			iVar2 = 28;
			switch (iLocal_131)
			{
				case 0:
					sVar0 = "ANIML_MCHOP";
					sVar1 = "ANIML_MCHOP2";
					if (MISC::IS_BIT_SET(Global_24699, iVar2))
					{
						sLocal_1596 = sVar1;
						MISC::CLEAR_BIT(&Global_24699, iVar2);
					}
					else if (MISC::IS_BIT_SET(Global_24702, iVar2))
					{
						sLocal_1596 = sVar0;
						MISC::CLEAR_BIT(&Global_24702, iVar2);
					}
					else if (GlobalFunc_745())
					{
						sLocal_1596 = sVar0;
						MISC::SET_BIT(&Global_24699, iVar2);
					}
					else
					{
						sLocal_1596 = sVar1;
						MISC::SET_BIT(&Global_24702, iVar2);
					}
					break;
				
				case 1:
					sVar0 = "ANIML_FCHOP";
					sVar1 = "ANIML_FCHOP2";
					if (MISC::IS_BIT_SET(Global_24698, iVar2))
					{
						sLocal_1596 = sVar1;
						MISC::CLEAR_BIT(&Global_24698, iVar2);
					}
					else if (MISC::IS_BIT_SET(Global_24701, iVar2))
					{
						sLocal_1596 = sVar0;
						MISC::CLEAR_BIT(&Global_24701, iVar2);
					}
					else if (GlobalFunc_745())
					{
						sLocal_1596 = sVar0;
						MISC::SET_BIT(&Global_24698, iVar2);
					}
					else
					{
						sLocal_1596 = sVar1;
						MISC::SET_BIT(&Global_24701, iVar2);
					}
					break;
				
				case 2:
					sVar0 = "ANIML_TCHOP";
					sVar1 = "ANIML_TCHOP2";
					if (MISC::IS_BIT_SET(Global_24700, iVar2))
					{
						sLocal_1596 = sVar1;
						MISC::CLEAR_BIT(&Global_24700, iVar2);
					}
					else if (MISC::IS_BIT_SET(Global_24703, iVar2))
					{
						sLocal_1596 = sVar0;
						MISC::CLEAR_BIT(&Global_24703, iVar2);
					}
					else if (GlobalFunc_745())
					{
						sLocal_1596 = sVar0;
						MISC::SET_BIT(&Global_24700, iVar2);
					}
					else
					{
						sLocal_1596 = sVar1;
						MISC::SET_BIT(&Global_24703, iVar2);
					}
					break;
				}
			}
	}
	if (iLocal_1353 == 14)
	{
		if ((MISC::ARE_STRINGS_EQUAL(sLocal_1596, "ANIML_FWST") || MISC::ARE_STRINGS_EQUAL(sLocal_1596, "ANIML_FWST2")) || MISC::ARE_STRINGS_EQUAL(sLocal_1596, "ANIML_TWST2"))
		{
			*iParam0 = 0;
		}
	}
}


void func_484(var uParam0, int iParam1)//Position - 0x59537
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 4;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		
		case 1:
			*uParam0 = 3;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		
		case 2:
			*uParam0 = 4;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		
		case 3:
			*uParam0 = 5;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		
		case 4:
			*uParam0 = 3;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 1, 0, 0);
			break;
		
		case 5:
			*uParam0 = 3;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		
		case 6:
			*uParam0 = 3;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		
		case 7:
			*uParam0 = 3;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		
		case 8:
			*uParam0 = 1;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		
		case 9:
			*uParam0 = 1;
			uParam0->f_1 = 6;
			uParam0->f_2 = 4;
			break;
		
		case 10:
			*uParam0 = 4;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		
		case 11:
			*uParam0 = 4;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		
		case 12:
			*uParam0 = 1;
			uParam0->f_1 = 4;
			uParam0->f_2 = 3;
			break;
		
		case 13:
			*uParam0 = 3;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		
		case 14:
			*uParam0 = 1;
			uParam0->f_1 = 6;
			uParam0->f_2 = 3;
			break;
		
		case 15:
			*uParam0 = 1;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		
		case 16:
			*uParam0 = 1;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		
		case 17:
			*uParam0 = 1;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		
		case 18:
			*uParam0 = 1;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		
		case 19:
			*uParam0 = 1;
			uParam0->f_1 = 4;
			uParam0->f_2 = 1;
			break;
		
		case 20:
			*uParam0 = 1;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		
		case 21:
			*uParam0 = 1;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		
		case 22:
			*uParam0 = 1;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		
		case 23:
			*uParam0 = 1;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		
		case 24:
			*uParam0 = 1;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		
		case 25:
			*uParam0 = 1;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		
		case 26:
			*uParam0 = 1;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		
		case 27:
			*uParam0 = 1;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			break;
		
		default:
			break;
	}
}

void func_485(char[4] cParam0, int iParam1, int iParam2)//Position - 0x597DA
{
	if (Global_89962 != 10 && Global_89962 != 9)
	{
		StringCopy(&Global_91343, cParam0, 32);
		func_487(&Global_91351, cParam0, 0, "Start", iParam1, iParam2);
		GlobalFunc_864();
		Global_84545 = 0;
	}
}


void func_487(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x5A4B0
{
	int iVar0;
	int iVar1;
	
	*uParam0 = GlobalFunc_8315();
	uParam0->f_1 = GlobalFunc_7719();
	MISC::_GET_WEATHER_TYPE_TRANSITION(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_10687(&(uParam0->f_2161), 0);
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
			GlobalFunc_8507(PLAYER::PLAYER_PED_ID(), &(uParam0->f_472[iVar1 /*65*/]), 1);
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
	sParam3 = sParam3;
	iParam2 = iParam2;
}






















void func_509()//Position - 0x5CBA2
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	fVar0 = 1f;
	iVar1 = 100;
	fVar2 = 4f;
	if (CAM::DOES_CAM_EXIST(uLocal_134))
	{
		if (!CAM::IS_CAM_SHAKING(uLocal_134))
		{
			fLocal_135 = fVar0;
			CAM::SHAKE_CAM(uLocal_134, "DRUNK_SHAKE", fLocal_135);
			iLocal_139 = (MISC::GET_GAME_TIMER() + iVar1);
		}
		else
		{
			fLocal_135 = GlobalFunc_253((fLocal_135 + (0.4f * SYSTEM::TIMESTEP())), fVar0, fVar2);
			if (fLocal_135 < fVar2 && MISC::GET_GAME_TIMER() > iLocal_139)
			{
				CAM::SET_CAM_SHAKE_AMPLITUDE(uLocal_134, fLocal_135);
				iLocal_139 = (MISC::GET_GAME_TIMER() + iVar1);
			}
		}
	}
}


void func_511(int iParam0, int iParam1)//Position - 0x5CC47
{
	struct<3> Var0;
	float fVar3;
	
	iLocal_1428 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1428) && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_1428, -1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1428, 0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1428, 0, 1);
			if (!func_515(iLocal_1428))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1428, 0, 1);
			}
			if ((!VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iLocal_1428)) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_1428))) && !func_514(iLocal_1428))
			{
				if (iParam0 == 1 && VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_1428)))
				{
					Var0 = { func_513(iParam1) };
					fVar3 = func_512(iParam1);
				}
				else
				{
					Var0 = { Local_1076[iParam0 /*46*/][iParam1 /*3*/] };
					fVar3 = Local_1261[iParam0 /*16*/][iParam1];
				}
				MISC::CLEAR_AREA(Var0, 9f, 1, 0, 0, 0);
				Local_1671 = { ENTITY::GET_ENTITY_COORDS(iLocal_1428, 1) };
				fLocal_1674 = ENTITY::GET_ENTITY_HEADING(iLocal_1428);
				ENTITY::SET_ENTITY_COORDS(iLocal_1428, Var0, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_1428, fVar3);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1428);
				if (!func_470(iLocal_1428))
				{
					GlobalFunc_10013(iLocal_1428, Var0, fVar3, 24, 0);
					Local_1671 = { 0f, 0f, 0f };
					fLocal_1674 = 0f;
				}
				else
				{
					Local_1675 = { Var0 };
					fLocal_1678 = fVar3;
				}
			}
			else
			{
				GlobalFunc_10013(iLocal_1428, ENTITY::GET_ENTITY_COORDS(iLocal_1428, 1), ENTITY::GET_ENTITY_HEADING(iLocal_1428), 24, 0);
			}
		}
	}
}

float func_512(int iParam0)//Position - 0x5CDA8
{
	switch (iParam0)
	{
		case 0:
			return 189.2918f;
			break;
		
		case 1:
			return 299.4451f;
			break;
		
		case 2:
			return 288.5849f;
			break;
		
		case 3:
			return 207.4062f;
			break;
		
		case 4:
			return 214.5423f;
			break;
		
		case 5:
			return 150.8355f;
			break;
	}
	return 0f;
}

Vector3 func_513(int iParam0)//Position - 0x5CE1E
{
	switch (iParam0)
	{
		case 0:
			return -124.688f, 426.3544f, 112.4759f;
			break;
		
		case 1:
			return -1349.745f, -1071.839f, 10.4666f;
			break;
		
		case 2:
			return 1495.258f, 6032.542f, 308.7726f;
			break;
		
		case 3:
			return 506.5558f, 5533.214f, 776.3751f;
			break;
		
		case 4:
			return 3293.081f, -146.4574f, 15.0023f;
			break;
		
		case 5:
			return -1001.41f, 4512.193f, 158.1028f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_514(int iParam0)//Position - 0x5CED2
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iVar0 == joaat("submersible2") || iVar0 == joaat("submersible"))
	{
		return 1;
	}
	return 0;
}

int func_515(int iParam0)//Position - 0x5CF00
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iVar0 == joaat("dodo"))
	{
		return 1;
	}
	return 0;
}

int func_516()//Position - 0x5CF1F
{
	int iVar0;
	
	if (!iLocal_1670 && func_519())
	{
		iLocal_1670 = 1;
		PED::CLEAR_PED_SCUBA_GEAR_VARIATION(PLAYER::PLAYER_PED_ID());
	}
	else if ((!iLocal_1670 && !iLocal_1669) && func_518(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_1669 = 1;
		GlobalFunc_8507(PLAYER::PLAYER_PED_ID(), &uLocal_1604, 1);
		iVar0 = 298819/*func_312*/;
		func_517(PLAYER::PLAYER_PED_ID(), &iVar0);
	}
	else if ((!iLocal_1669 && !iLocal_1670) || PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	return 0;
}

int func_517(int iParam0, int iParam1)//Position - 0x5CFAA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		iVar2 = iVar1;
		iVar4 = GlobalFunc_7614(iParam0, iVar2);
		if (GlobalFunc_6666(iVar5, 14, iVar4))
		{
			iVar6 = GlobalFunc_5013(iVar5, 14, iVar1);
			Stack.Push(iParam0);
			Stack.Push(14);
			Stack.Push(iVar6);
			Stack.Push(0);
			Stack.Push(-1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Stack.Push(-1);
			Stack.Push(-1);
			Stack.Push(0);
			Call_Loc(*iParam1);
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		iVar3 = iVar0;
		if ((iVar3 != 12 && iVar3 != 13) && iVar3 != 14)
		{
			iVar4 = GlobalFunc_6669(iParam0, iVar3);
			if (GlobalFunc_6666(iVar5, iVar3, iVar4))
			{
				iVar6 = GlobalFunc_5013(iVar5, iVar3, -1);
				Stack.Push(iParam0);
				Stack.Push(iVar3);
				Stack.Push(iVar6);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Call_Loc(*iParam1);
			}
		}
		iVar0++;
	}
	return 0;
}

int func_518(int iParam0)//Position - 0x5D072
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar5 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			iVar2 = iVar1;
			iVar4 = GlobalFunc_7614(iParam0, iVar2);
			if (GlobalFunc_6666(iVar5, 14, iVar4))
			{
				return 1;
			}
			iVar1++;
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			iVar3 = iVar0;
			if ((iVar3 != 12 && iVar3 != 13) && iVar3 != 14)
			{
				iVar4 = GlobalFunc_6669(iParam0, iVar3);
				if (GlobalFunc_6666(iVar5, iVar3, iVar4))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar6 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
		if (iVar6 > 0)
		{
			iVar7 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar6, PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
			if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("HAT"), 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_519()//Position - 0x5D143
{
	switch (iLocal_131)
	{
		case 0:
			if (GlobalFunc_10939(PLAYER::PLAYER_PED_ID(), 8, 22))
			{
				return 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_10939(PLAYER::PLAYER_PED_ID(), 8, 76))
			{
				return 1;
			}
			break;
		
		case 2:
			if (GlobalFunc_10939(PLAYER::PLAYER_PED_ID(), 8, 17))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_520(int iParam0)//Position - 0x5D1A4
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	
	iVar0 = iParam0;
	sVar1 = "";
	sVar2 = "";
	switch (iLocal_131)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					sVar1 = "ANIML_MBOAR";
					sVar2 = "ANIML_MBOAR2";
					break;
				
				case 1:
					sVar1 = "ANIML_MCAT";
					sVar2 = "ANIML_MCAT2";
					break;
				
				case 2:
					sVar1 = "ANIML_MCOW";
					sVar2 = "";
					break;
				
				case 3:
					sVar1 = "ANIML_MCYT";
					sVar2 = "ANIML_MCYT2";
					break;
				
				case 4:
					sVar1 = "ANIML_MDEER";
					sVar2 = "ANIML_MDEER2";
					break;
				
				case 5:
					sVar1 = "ANIML_MHSK";
					sVar2 = "ANIML_MHSK2";
					break;
				
				case 6:
					sVar1 = "ANIML_MLION";
					sVar2 = "ANIML_MLION2";
					break;
				
				case 7:
					sVar1 = "ANIML_MPIG";
					sVar2 = "ANIML_MPIG2";
					break;
				
				case 8:
					sVar1 = "ANIML_MPDL";
					sVar2 = "ANIML_MPDL2";
					break;
				
				case 9:
					sVar1 = "ANIML_MPUG";
					sVar2 = "ANIML_MPUG2";
					break;
				
				case 10:
					sVar1 = "ANIML_MBUN";
					sVar2 = "ANIML_MBUN2";
					break;
				
				case 11:
					sVar1 = "ANIML_MRET";
					sVar2 = "ANIML_MRET2";
					break;
				
				case 12:
					sVar1 = "ANIML_MRTW";
					sVar2 = "ANIML_MRTW2";
					break;
				
				case 13:
					sVar1 = "ANIML_MSPD";
					sVar2 = "ANIML_MSPD2";
					break;
				
				case 14:
					sVar1 = "ANIML_MWST";
					sVar2 = "ANIML_MWST2";
					break;
				
				case 15:
					sVar1 = "ANIML_MHWK";
					sVar2 = "ANIML_MHWK2";
					break;
				
				case 16:
					sVar1 = "ANIML_MCMT";
					sVar2 = "ANIML_MCMT2";
					break;
				
				case 17:
					sVar1 = "ANIML_MCROW";
					sVar2 = "ANIML_MCROW2";
					break;
				
				case 18:
					sVar1 = "ANIML_MHEN";
					sVar2 = "ANIML_MHEN2";
					break;
				
				case 19:
					sVar1 = "ANIML_MPGN";
					sVar2 = "ANIML_MPGN2";
					break;
				
				case 20:
					sVar1 = "ANIML_MGUL";
					sVar2 = "ANIML_MGUL2";
					break;
				
				case 21:
					sVar1 = "ANIML_MDOL";
					sVar2 = "ANIML_MDOL2";
					break;
				
				case 22:
					sVar1 = "ANIML_MFISH";
					sVar2 = "ANIML_MFISH2";
					break;
				
				case 23:
					sVar1 = "ANIML_MKILL";
					sVar2 = "ANIML_MKILL2";
					break;
				
				case 24:
					sVar1 = "ANIML_MHSHK";
					sVar2 = "ANIML_MHSHK2";
					break;
				
				case 25:
					sVar1 = "ANIML_MTSHK";
					sVar2 = "ANIML_MTSHK2";
					break;
				
				case 26:
					sVar1 = "ANIML_MRAY";
					sVar2 = "ANIML_MRAY2";
					break;
				
				case 27:
					sVar1 = "ANIML_MGE";
					sVar2 = "";
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					sVar1 = "ANIML_FBOAR";
					sVar2 = "ANIML_FBOAR2";
					break;
				
				case 1:
					sVar1 = "ANIML_FCAT";
					sVar2 = "ANIML_FCAT2";
					break;
				
				case 2:
					sVar1 = "ANIML_FCOW";
					sVar2 = "ANIML_FCOW2";
					break;
				
				case 3:
					sVar1 = "ANIML_FCYT";
					sVar2 = "ANIML_FCYT2";
					break;
				
				case 4:
					sVar1 = "ANIML_FDEER";
					sVar2 = "ANIML_FDEER2";
					break;
				
				case 5:
					sVar1 = "ANIML_FHSK";
					sVar2 = "ANIML_FHSK2";
					break;
				
				case 6:
					sVar1 = "ANIML_FLION";
					sVar2 = "ANIML_FLION2";
					break;
				
				case 7:
					sVar1 = "ANIML_FPIG";
					sVar2 = "ANIML_FPIG2";
					break;
				
				case 8:
					sVar1 = "ANIML_FPDL";
					sVar2 = "ANIML_FPDL2";
					break;
				
				case 9:
					sVar1 = "ANIML_FPUG";
					sVar2 = "ANIML_FPUG2";
					break;
				
				case 10:
					sVar1 = "ANIML_FBUN";
					sVar2 = "ANIML_FBUN2";
					break;
				
				case 11:
					sVar1 = "ANIML_FRET";
					sVar2 = "ANIML_FRET2";
					break;
				
				case 12:
					sVar1 = "ANIML_FRTW";
					sVar2 = "ANIML_FRTW2";
					break;
				
				case 13:
					sVar1 = "ANIML_FSPD";
					sVar2 = "ANIML_FSPD2";
					break;
				
				case 14:
					sVar1 = "ANIML_FWST";
					sVar2 = "ANIML_FWST2";
					break;
				
				case 15:
					sVar1 = "ANIML_FHWK";
					sVar2 = "ANIML_FHWK2";
					break;
				
				case 16:
					sVar1 = "ANIML_FCMT";
					sVar2 = "ANIML_FCMT2";
					break;
				
				case 17:
					sVar1 = "ANIML_FCROW";
					sVar2 = "ANIML_FCROW2";
					break;
				
				case 18:
					sVar1 = "ANIML_FHEN";
					sVar2 = "ANIML_FHEN2";
					break;
				
				case 19:
					sVar1 = "ANIML_FPGN";
					sVar2 = "ANIML_FPGN2";
					break;
				
				case 20:
					sVar1 = "ANIML_FGUL";
					sVar2 = "ANIML_FGUL2";
					break;
				
				case 21:
					sVar1 = "ANIML_FDOL";
					sVar2 = "ANIML_FDOL2";
					break;
				
				case 22:
					sVar1 = "ANIML_FFISH";
					sVar2 = "ANIML_FFISH2";
					break;
				
				case 23:
					sVar1 = "ANIML_FKILL";
					sVar2 = "";
					break;
				
				case 24:
					sVar1 = "ANIML_FHSHK";
					sVar2 = "ANIML_FHSHK2";
					break;
				
				case 25:
					sVar1 = "ANIML_TSHK";
					sVar2 = "ANIML_TSHK2";
					break;
				
				case 26:
					sVar1 = "ANIML_FRAY";
					sVar2 = "ANIML_FRAY2";
					break;
				
				case 27:
					sVar1 = "";
					sVar2 = "";
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					sVar1 = "ANIML_TBOAR";
					sVar2 = "ANIML_TBOAR2";
					break;
				
				case 1:
					sVar1 = "ANIML_TCAT";
					sVar2 = "ANIML_TCAT2";
					break;
				
				case 2:
					sVar1 = "ANIML_TCOW";
					sVar2 = "";
					break;
				
				case 3:
					sVar1 = "ANIML_TCYT";
					sVar2 = "ANIML_TCYT2";
					break;
				
				case 4:
					sVar1 = "ANIML_TDEER";
					sVar2 = "ANIML_TDEER2";
					break;
				
				case 5:
					sVar1 = "ANIML_THSK";
					sVar2 = "ANIML_THSK2";
					break;
				
				case 6:
					sVar1 = "ANIML_TLION";
					sVar2 = "ANIML_TLION2";
					break;
				
				case 7:
					sVar1 = "ANIML_TPIG";
					sVar2 = "ANIML_TPIG2";
					break;
				
				case 8:
					sVar1 = "ANIML_TPDL";
					sVar2 = "ANIML_TPDL2";
					break;
				
				case 9:
					sVar1 = "ANIML_TPUG";
					sVar2 = "ANIML_TPUG2";
					break;
				
				case 10:
					sVar1 = "ANIML_TBUN";
					sVar2 = "ANIML_TBUN2";
					break;
				
				case 11:
					sVar1 = "ANIML_TRET";
					sVar2 = "ANIML_TRET2";
					break;
				
				case 12:
					sVar1 = "ANIML_TRTW1";
					sVar2 = "ANIML_TRTW2";
					break;
				
				case 13:
					sVar1 = "ANIML_TSPD";
					sVar2 = "ANIML_TSPD2";
					break;
				
				case 14:
					sVar1 = "ANIML_TWST";
					sVar2 = "ANIML_TWST2";
					break;
				
				case 15:
					sVar1 = "ANIML_THWK";
					sVar2 = "ANIML_THWK2";
					break;
				
				case 16:
					sVar1 = "ANIML_TCMT";
					sVar2 = "ANIML_TCMT2";
					break;
				
				case 17:
					sVar1 = "ANIML_TCROW";
					sVar2 = "ANIML_TCROW2";
					break;
				
				case 18:
					sVar1 = "ANIML_THEN";
					sVar2 = "ANIML_THEN2";
					break;
				
				case 19:
					sVar1 = "ANIML_TPGN";
					sVar2 = "ANIML_TPGN2";
					break;
				
				case 20:
					sVar1 = "ANIML_TGUL";
					sVar2 = "ANIML_TGUL2";
					break;
				
				case 21:
					sVar1 = "ANIML_TDOL";
					sVar2 = "ANIML_TDOL2";
					break;
				
				case 22:
					sVar1 = "ANIML_TFISH";
					sVar2 = "ANIML_TFISH2";
					break;
				
				case 23:
					sVar1 = "ANIML_TKILL";
					sVar2 = "ANIML_TKILL2";
					break;
				
				case 24:
					sVar1 = "ANIML_HSHK";
					sVar2 = "ANIML_HSHK2";
					break;
				
				case 25:
					sVar1 = "ANIML_TTSHK";
					sVar2 = "ANIML_TTSHK2";
					break;
				
				case 26:
					sVar1 = "ANIML_TRAY";
					sVar2 = "ANIML_TRAY2";
					break;
				
				case 27:
					sVar1 = "";
					sVar2 = "";
					break;
			}
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		sLocal_1596 = "";
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		sLocal_1596 = sVar1;
	}
	else
	{
		switch (iLocal_131)
		{
			case 0:
				if (MISC::IS_BIT_SET(Global_24699, iVar0))
				{
					sLocal_1596 = sVar2;
					MISC::CLEAR_BIT(&Global_24699, iVar0);
				}
				else if (MISC::IS_BIT_SET(Global_24702, iVar0))
				{
					sLocal_1596 = sVar1;
					MISC::CLEAR_BIT(&Global_24702, iVar0);
				}
				else if (GlobalFunc_745())
				{
					sLocal_1596 = sVar1;
					MISC::SET_BIT(&Global_24699, iVar0);
				}
				else
				{
					sLocal_1596 = sVar2;
					MISC::SET_BIT(&Global_24702, iVar0);
				}
				break;
			
			case 1:
				if (MISC::IS_BIT_SET(Global_24698, iVar0))
				{
					sLocal_1596 = sVar2;
					MISC::CLEAR_BIT(&Global_24698, iVar0);
				}
				else if (MISC::IS_BIT_SET(Global_24701, iVar0))
				{
					sLocal_1596 = sVar1;
					MISC::CLEAR_BIT(&Global_24701, iVar0);
				}
				else if (GlobalFunc_745())
				{
					sLocal_1596 = sVar1;
					MISC::SET_BIT(&Global_24698, iVar0);
				}
				else
				{
					sLocal_1596 = sVar2;
					MISC::SET_BIT(&Global_24701, iVar0);
				}
				break;
			
			case 2:
				if (MISC::IS_BIT_SET(Global_24700, iVar0))
				{
					sLocal_1596 = sVar2;
					MISC::CLEAR_BIT(&Global_24700, iVar0);
				}
				else if (MISC::IS_BIT_SET(Global_24703, iVar0))
				{
					sLocal_1596 = sVar1;
					MISC::CLEAR_BIT(&Global_24703, iVar0);
				}
				else if (GlobalFunc_745())
				{
					sLocal_1596 = sVar1;
					MISC::SET_BIT(&Global_24700, iVar0);
				}
				else
				{
					sLocal_1596 = sVar2;
					MISC::SET_BIT(&Global_24703, iVar0);
				}
				break;
			}
	}
}

void func_521()//Position - 0x5DAC7
{
	switch (iLocal_1353)
	{
		case 0:
			Local_53.f_3 = "creatures@boar@amb@peyote@enter";
			break;
		
		case 1:
			Local_53.f_3 = "creatures@cat@amb@peyote@enter";
			break;
		
		case 2:
			Local_53.f_3 = "creatures@cow@amb@peyote@enter";
			break;
		
		case 3:
			Local_53.f_3 = "creatures@coyote@amb@peyote@enter";
			break;
		
		case 4:
			Local_53.f_3 = "creatures@deer@amb@peyote@enter";
			break;
		
		case 5:
			Local_53.f_3 = "creatures@retriever@amb@peyote@enter";
			break;
		
		case 6:
			Local_53.f_3 = "creatures@cougar@amb@peyote@enter";
			break;
		
		case 7:
			Local_53.f_3 = "creatures@pig@amb@peyote@enter";
			break;
		
		case 8:
			Local_53.f_3 = "creatures@pug@amb@peyote@enter";
			break;
		
		case 9:
			Local_53.f_3 = "creatures@pug@amb@peyote@enter";
			break;
		
		case 10:
			Local_53.f_3 = "creatures@rabbit@amb@peyote@enter";
			break;
		
		case 11:
			Local_53.f_3 = "creatures@retriever@amb@peyote@enter";
			break;
		
		case 12:
			Local_53.f_3 = "creatures@rottweiler@amb@peyote@enter";
			break;
		
		case 13:
			Local_53.f_3 = "creatures@rottweiler@amb@peyote@enter";
			break;
		
		case 14:
			Local_53.f_3 = "creatures@pug@amb@peyote@enter";
			break;
		
		case 15:
			Local_53.f_3 = "";
			break;
		
		case 16:
			Local_53.f_3 = "";
			break;
		
		case 17:
			Local_53.f_3 = "";
			break;
		
		case 18:
			Local_53.f_3 = "creatures@hen@amb@peyote@enter";
			break;
		
		case 19:
			Local_53.f_3 = "";
			break;
		
		case 20:
			Local_53.f_3 = "";
			break;
		
		case 21:
			Local_53.f_3 = "";
			break;
		
		case 22:
			Local_53.f_3 = "";
			break;
		
		case 23:
			Local_53.f_3 = "";
			break;
		
		case 24:
			Local_53.f_3 = "";
			break;
		
		case 25:
			Local_53.f_3 = "";
			break;
		
		case 26:
			Local_53.f_3 = "";
			break;
		
		case 27:
			Local_53.f_3 = "";
			break;
		
		default:
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_53.f_3))
	{
		Local_53.f_4 = "enter";
	}
}

void func_522(char* sParam0, char* sParam1, int iParam2)//Position - 0x5DCC3
{
	switch (iParam2)
	{
		case joaat("a_c_boar"):
			StringCopy(sParam0, "", 64);
			break;
		
		case joaat("a_c_cat_01"):
			StringCopy(sParam0, "", 64);
			break;
		
		case joaat("a_c_cow"):
			StringCopy(sParam0, "", 64);
			break;
		
		case joaat("a_c_coyote"):
			StringCopy(sParam0, "", 64);
			break;
		
		case joaat("a_c_deer"):
			StringCopy(sParam0, "", 64);
			break;
		
		case joaat("a_c_husky"):
			StringCopy(sParam0, "facials@creatures@retriever@bark", 64);
			break;
		
		case joaat("a_c_mtlion"):
			StringCopy(sParam0, "", 64);
			break;
		
		case joaat("a_c_pig"):
			StringCopy(sParam0, "", 64);
			break;
		
		case joaat("a_c_poodle"):
			StringCopy(sParam0, "facials@creatures@pug@bark", 64);
			break;
		
		case joaat("a_c_pug"):
			StringCopy(sParam0, "facials@creatures@pug@bark", 64);
			break;
		
		case joaat("a_c_rabbit_01"):
			StringCopy(sParam0, "", 64);
			break;
		
		case joaat("a_c_retriever"):
			StringCopy(sParam0, "facials@creatures@retriever@bark", 64);
			break;
		
		case joaat("a_c_rottweiler"):
			StringCopy(sParam0, "facials@creatures@rottweile@bark", 64);
			break;
		
		case joaat("a_c_shepherd"):
			StringCopy(sParam0, "facials@creatures@retriever@bark", 64);
			break;
		
		case joaat("a_c_westy"):
			StringCopy(sParam0, "facials@creatures@pug@bark", 64);
			break;
		
		case joaat("a_c_chickenhawk"):
			StringCopy(sParam0, "", 64);
			break;
		
		case joaat("a_c_cormorant"):
			StringCopy(sParam0, "", 64);
			break;
		
		case joaat("a_c_crow"):
			StringCopy(sParam0, "", 64);
			break;
		
		case joaat("a_c_hen"):
			StringCopy(sParam0, "", 64);
			break;
		
		case joaat("a_c_pigeon"):
			StringCopy(sParam0, "", 64);
			break;
		
		case joaat("a_c_seagull"):
			StringCopy(sParam0, "", 64);
			break;
		
		case joaat("a_c_dolphin"):
			StringCopy(sParam0, "", 64);
			break;
		
		case joaat("a_c_fish"):
			StringCopy(sParam0, "", 64);
			break;
		
		case joaat("a_c_killerwhale"):
			StringCopy(sParam0, "", 64);
			break;
		
		case joaat("a_c_sharkhammer"):
			StringCopy(sParam0, "", 64);
			break;
		
		case joaat("a_c_sharktiger"):
			StringCopy(sParam0, "", 64);
			break;
		
		case joaat("a_c_stingray"):
			StringCopy(sParam0, "", 64);
			break;
		
		case joaat("ig_orleans"):
			StringCopy(sParam0, "", 64);
			break;
		
		default:
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		StringCopy(sParam1, "bark_facial", 16);
	}
}

void func_523(char* sParam0, int iParam1)//Position - 0x5DEA1
{
	switch (iParam1)
	{
		case joaat("prop_peyote_lowland_01"):
		case joaat("prop_peyote_highland_01"):
		case joaat("prop_peyote_gold_01"):
			*sParam0 = "random@peyote@eat";
			sParam0->f_1 = "eat_peyote";
			break;
		
		case joaat("prop_peyote_lowland_02"):
		case joaat("prop_peyote_highland_02"):
			*sParam0 = "random@peyote@eat";
			sParam0->f_1 = "eat_peyote_plantpot";
			break;
		
		case joaat("prop_peyote_water_01"):
			*sParam0 = "random@peyote@eatswimming";
			sParam0->f_1 = "eat_peyote";
			break;
		
		default:
			break;
	}
	sParam0->f_2 = func_524();
}

char* func_524()//Position - 0x5DF1B
{
	char* sVar0;
	
	sVar0 = "";
	switch (iLocal_1354)
	{
		case 0:
			switch (iLocal_1355)
			{
				case 0:
				case 3:
				case 6:
				case 7:
				case 8:
				case 9:
				case 10:
				case 11:
				case 12:
				case 13:
				case 14:
					if (GlobalFunc_745())
					{
						sVar0 = "eat_peyote_cam1";
					}
					else
					{
						sVar0 = "eat_peyote_cam2";
					}
					break;
				
				case 1:
				case 2:
				case 4:
					switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
					{
						case 0:
							sVar0 = "eat_peyote_cam1";
							break;
						
						case 1:
							sVar0 = "eat_peyote_cam2";
							break;
						
						case 2:
							sVar0 = "eat_peyote_cam4";
							break;
					}
					break;
				
				case 5:
					sVar0 = "eat_peyote_plantpot_cam1";
					break;
			}
			break;
		
		case 1:
			switch (iLocal_1355)
			{
				case 0:
				case 1:
					sVar0 = "eat_peyote_plantpot_cam1";
					break;
				
				case 2:
				case 5:
					if (GlobalFunc_745())
					{
						sVar0 = "eat_peyote_cam1";
					}
					else
					{
						sVar0 = "eat_peyote_cam2";
					}
					break;
				
				case 3:
				case 4:
					sVar0 = "eat_peyote_cam2";
					break;
			}
			break;
		
		case 2:
			switch (iLocal_1355)
			{
				case 0:
					sVar0 = "eat_peyote_cam2";
					break;
				
				default:
					sVar0 = "eat_peyote_cam1";
					break;
			}
			break;
		
		case 3:
			sVar0 = "eat_peyote_cam1";
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
	}
	return sVar0;
}

int func_525(int iParam0, int iParam1)//Position - 0x5E0A7
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 5:
					return joaat("prop_peyote_lowland_02");
					break;
				
				default:
					return joaat("prop_peyote_lowland_01");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_peyote_highland_02");
					break;
				
				case 1:
					return joaat("prop_peyote_highland_02");
					break;
				
				default:
					return joaat("prop_peyote_highland_01");
					break;
			}
			break;
		
		case 2:
			return joaat("prop_peyote_water_01");
			break;
		
		case 3:
			return joaat("prop_peyote_gold_01");
			break;
	}
	return joaat("prop_peyote_lowland_01");
}




int func_529(int iParam0)//Position - 0x5E1D4
{
	switch (iParam0)
	{
		case 0:
			return joaat("a_c_boar");
			break;
		
		case 1:
			return joaat("a_c_cat_01");
			break;
		
		case 2:
			return joaat("a_c_cow");
			break;
		
		case 3:
			return joaat("a_c_coyote");
			break;
		
		case 4:
			return joaat("a_c_deer");
			break;
		
		case 5:
			return joaat("a_c_husky");
			break;
		
		case 6:
			return joaat("a_c_mtlion");
			break;
		
		case 7:
			return joaat("a_c_pig");
			break;
		
		case 8:
			return joaat("a_c_poodle");
			break;
		
		case 9:
			return joaat("a_c_pug");
			break;
		
		case 10:
			return joaat("a_c_rabbit_01");
			break;
		
		case 11:
			return joaat("a_c_retriever");
			break;
		
		case 12:
			return joaat("a_c_rottweiler");
			break;
		
		case 13:
			return joaat("a_c_shepherd");
			break;
		
		case 14:
			return joaat("a_c_westy");
			break;
		
		case 15:
			return joaat("a_c_chickenhawk");
			break;
		
		case 16:
			return joaat("a_c_cormorant");
			break;
		
		case 17:
			return joaat("a_c_crow");
			break;
		
		case 18:
			return joaat("a_c_hen");
			break;
		
		case 19:
			return joaat("a_c_pigeon");
			break;
		
		case 20:
			return joaat("a_c_seagull");
			break;
		
		case 21:
			return joaat("a_c_dolphin");
			break;
		
		case 22:
			return joaat("a_c_fish");
			break;
		
		case 23:
			return joaat("a_c_killerwhale");
			break;
		
		case 24:
			return joaat("a_c_sharkhammer");
			break;
		
		case 25:
			return joaat("a_c_sharktiger");
			break;
		
		case 26:
			return joaat("a_c_stingray");
			break;
		
		case 27:
			return joaat("ig_orleans");
			break;
	}
	return 0;
}



void func_532()//Position - 0x5E546
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < func_549(iVar0))
		{
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PEYOTE_PICKUP_OF_TYPE_FOUND[iVar0], iVar1))
			{
				return;
			}
			iVar1++;
		}
		iVar0++;
	}
	Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PEYOTE_PROGRESSION_COMPLETE = 1;
	func_567();
	GlobalFunc_4907();
}




void func_536(int iParam0, bool bParam1)//Position - 0x5E6E2
{
	int iVar0;
	
	iVar0 = func_18(iParam0);
	if (iVar0 != -1)
	{
		func_537(iVar0, bParam1);
	}
}

void func_537(int iParam0, bool bParam1)//Position - 0x5E700
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31)
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.DIRECTOR_SAVED_STRUCT.BitsetCharacterAnimalUnlock, iVar0))
		{
			MISC::SET_BIT(&(Global_SAVE_DATA.DIRECTOR_SAVED_STRUCT.BitsetCharacterAnimalUnlock), iVar0);
			if (!bParam1)
			{
				GlobalFunc_64(func_17(iParam0));
				if (!GlobalFunc_63(71))
				{
					GlobalFunc_6677("DI_HLP_ANML", 2, 0, 20000, 10000, 7, 0, 211, 0);
				}
			}
		}
	}
}





void func_542()//Position - 0x5EAC7
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < (4 - 1))
	{
		iVar1 = 0;
		while (iVar1 < func_549(iVar0))
		{
			if (MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PEYOTE_PICKUP_OF_TYPE_FOUND[iVar0], iVar1))
			{
				iVar2++;
			}
			iVar1++;
		}
		iVar0++;
	}
	STATS::STAT_SET_INT(joaat("num_hidden_packages_5"), iVar2, 1);
}

int func_543(int iParam0, int iParam1)//Position - 0x5EB26
{
	struct<3> Var0;
	float fVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_1362[iParam0 /*16*/][iParam1]))
	{
		if ((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) && !GlobalFunc_160()) && !GlobalFunc_39(14)) && !HUD::_HAS_DIRECTOR_MODE_BEEN_TRIGGERED())
		{
			Var0 = { Local_141[iParam0 /*46*/][iParam1 /*3*/] };
			Var0.f_2 = (Var0.f_2 + 0.8f);
			fVar3 = 0.49f;
			if (iParam0 == 2)
			{
				fVar3 = 0.81f;
			}
			if (GlobalFunc_100(Local_1598, 0f, 0f, 0f))
			{
				Local_1598 = { Var0 };
			}
			if (GlobalFunc_100(Local_1598, Var0))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1598) < fVar3)
				{
					if (iLocal_130 == -1)
					{
						GlobalFunc_6774(&iLocal_130, 2, "PEY_PICKUP", 0, 0);
					}
					else if (GlobalFunc_5079(iLocal_130, 1))
					{
						GlobalFunc_5084(&iLocal_130);
						Local_1598 = { 0f, 0f, 0f };
						return 1;
					}
				}
				else
				{
					if (iLocal_130 != -1)
					{
						GlobalFunc_5084(&iLocal_130);
					}
					Local_1598 = { 0f, 0f, 0f };
				}
			}
			else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1598) > fLocal_50)
			{
				if (iLocal_130 != -1)
				{
					GlobalFunc_5084(&iLocal_130);
				}
				Local_1598 = { 0f, 0f, 0f };
			}
		}
	}
	return 0;
}






int func_549(int iParam0)//Position - 0x5EED1
{
	switch (iParam0)
	{
		case 0:
			return 15;
			break;
		
		case 1:
			return 6;
			break;
		
		case 2:
			return 6;
			break;
		
		case 3:
			return 7;
			break;
	}
	return -1;
}


void func_551(int iParam0)//Position - 0x5EF40
{
	if (GlobalFunc_42(iParam0))
	{
		if (MISC::IS_BIT_SET(iLocal_126, 0))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4917(iLocal_131));
		}
		iLocal_131 = iParam0;
		STREAMING::REQUEST_MODEL(GlobalFunc_4917(iLocal_131));
		MISC::SET_BIT(&iLocal_126, 0);
	}
}




void func_555()//Position - 0x5F1AC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar0++;
		if (!iLocal_1329)
		{
			iLocal_1330++;
			if (iLocal_1330 >= func_549(iLocal_1326))
			{
				iLocal_1330 = 0;
				iVar1 = iLocal_1326;
				iVar1++;
				if (Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PEYOTE_PROGRESSION_COMPLETE)
				{
					if (iVar1 >= 4)
					{
						iVar1 = 0;
					}
				}
				else if (iVar1 >= 3)
				{
					iVar1 = 0;
				}
				iLocal_1326 = iVar1;
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (!MISC::IS_BIT_SET(uLocal_1331[iLocal_1326], iLocal_1330))
			{
				if (!MISC::IS_BIT_SET(uLocal_1336[iLocal_1326], iLocal_1330))
				{
					if (((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_141[iLocal_1326 /*46*/][iLocal_1330 /*3*/]) <= fLocal_50 && !GlobalFunc_39(13)) && !GlobalFunc_39(14)) && func_561())
					{
						if (Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PEYOTE_PROGRESSION_COMPLETE || !MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PEYOTE_PICKUP_OF_TYPE_FOUND[iLocal_1326], iLocal_1330))
						{
							if (iLocal_1326 != 3 || func_558(iLocal_1330))
							{
								iLocal_1329 = 1;
								iVar2 = uLocal_1348[iLocal_1326];
								iVar3 = func_529(iVar2);
								iVar4 = func_525(iLocal_1326, iLocal_1330);
								if (iLocal_1327 != iVar2)
								{
									if (iLocal_1346 != -1)
									{
										AUDIO::STOP_SOUND(iLocal_1346);
										AUDIO::RELEASE_SOUND_ID(iLocal_1346);
										iLocal_1346 = -1;
									}
									if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_78))
									{
										if (!MISC::ARE_STRINGS_EQUAL(&Local_78, "NONE"))
										{
											AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
										}
									}
									func_557(&Local_78, iVar3);
									iLocal_1327 = iVar2;
								}
								STREAMING::REQUEST_MODEL(iVar3);
								STREAMING::REQUEST_MODEL(iVar4);
								iVar5 = 1;
								if (!MISC::ARE_STRINGS_EQUAL(&Local_78, "NONE"))
								{
									iVar5 = AUDIO::REQUEST_SCRIPT_AUDIO_BANK(&Local_78, 0);
								}
								iVar6 = 1;
								if (iLocal_1327 == 27)
								{
									iVar6 = AUDIO::REQUEST_SCRIPT_AUDIO_BANK(&(Local_78.f_24), 0);
								}
								if (((STREAMING::HAS_MODEL_LOADED(iVar3) && STREAMING::HAS_MODEL_LOADED(iVar4)) && iVar5) && iVar6)
								{
									iVar7 = 0;
									MISC::SET_BIT(&iVar7, 1);
									MISC::SET_BIT(&iVar7, 5);
									Local_1362[iLocal_1326 /*16*/][iLocal_1330] = OBJECT::CREATE_OBJECT(iVar4, Local_141[iLocal_1326 /*46*/][iLocal_1330 /*3*/], 1, 1, 0);
									ENTITY::SET_ENTITY_ROTATION(Local_1362[iLocal_1326 /*16*/][iLocal_1330], Local_326[iLocal_1326 /*46*/][iLocal_1330 /*3*/], 2, 1);
									ENTITY::FREEZE_ENTITY_POSITION(Local_1362[iLocal_1326 /*16*/][iLocal_1330], 1);
									func_479(&iLocal_1602, Local_141[iLocal_1326 /*46*/][iLocal_1330 /*3*/], 2.5f);
									if (!MISC::ARE_STRINGS_EQUAL(&Local_78, "NONE") && !MISC::ARE_STRINGS_EQUAL(&(Local_78.f_16), "NONE"))
									{
										iLocal_1346 = AUDIO::GET_SOUND_ID();
										AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_1346, &(Local_78.f_16), Local_1362[iLocal_1326 /*16*/][iLocal_1330], "PEYOTE_ATTRACT_SOUNDSET", 0, 0);
									}
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar4);
									MISC::SET_BIT(&(uLocal_1331[iLocal_1326]), iLocal_1330);
									iLocal_1329 = 0;
								}
							}
						}
					}
				}
			}
			else if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_141[iLocal_1326 /*46*/][iLocal_1330 /*3*/]) >= fLocal_51 || MISC::IS_BIT_SET(iLocal_126, 1)) || !func_561())
			{
				if (iLocal_1346 != -1)
				{
					AUDIO::STOP_SOUND(iLocal_1346);
					AUDIO::RELEASE_SOUND_ID(iLocal_1346);
					iLocal_1346 = -1;
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_1362[iLocal_1326 /*16*/][iLocal_1330]))
				{
					OBJECT::DELETE_OBJECT(&(Local_1362[iLocal_1326 /*16*/][iLocal_1330]));
				}
				func_412(&iLocal_1602);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_525(iLocal_1326, iLocal_1330));
				func_556(iLocal_1326);
				MISC::CLEAR_BIT(&(uLocal_1331[iLocal_1326]), iLocal_1330);
			}
		}
	}
}

void func_556(int iParam0)//Position - 0x5F51D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 28)
	{
		iVar1 = iVar0;
		if (func_478(iVar1) == iParam0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_529(iVar1));
		}
		iVar0++;
	}
}

void func_557(char* sParam0, int iParam1)//Position - 0x5F551
{
	switch (iParam1)
	{
		case joaat("a_c_boar"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_BOAR", 64);
			StringCopy(&(sParam0->f_16), "BOAR", 32);
			StringCopy(&(sParam0->f_28), "EXCITED", 64);
			break;
		
		case joaat("a_c_cat_01"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_CAT", 64);
			StringCopy(&(sParam0->f_16), "CAT", 32);
			StringCopy(&(sParam0->f_28), "CAT_MEOW", 64);
			break;
		
		case joaat("a_c_cow"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_COW", 64);
			StringCopy(&(sParam0->f_16), "COW", 32);
			StringCopy(&(sParam0->f_28), "", 64);
			break;
		
		case joaat("a_c_coyote"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_COYOTE", 64);
			StringCopy(&(sParam0->f_16), "COYOTE", 32);
			StringCopy(&(sParam0->f_28), "BARK", 64);
			break;
		
		case joaat("a_c_deer"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_DEER", 64);
			StringCopy(&(sParam0->f_16), "DEER", 32);
			StringCopy(&(sParam0->f_28), "CALL", 64);
			break;
		
		case joaat("a_c_husky"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_HUSKY", 64);
			StringCopy(&(sParam0->f_16), "HUSKY", 32);
			StringCopy(&(sParam0->f_28), "BARK", 64);
			break;
		
		case joaat("a_c_mtlion"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_MTLION", 64);
			StringCopy(&(sParam0->f_16), "MTLION", 32);
			StringCopy(&(sParam0->f_28), "ROAR", 64);
			break;
		
		case joaat("a_c_pig"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_PIG", 64);
			StringCopy(&(sParam0->f_16), "PIG", 32);
			StringCopy(&(sParam0->f_28), "EXCITED", 64);
			break;
		
		case joaat("a_c_poodle"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_SMALL_DOG", 64);
			StringCopy(&(sParam0->f_16), "SMALL_DOG", 32);
			StringCopy(&(sParam0->f_28), "BARK", 64);
			break;
		
		case joaat("a_c_pug"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_SMALL_DOG", 64);
			StringCopy(&(sParam0->f_16), "SMALL_DOG", 32);
			StringCopy(&(sParam0->f_28), "BARK", 64);
			break;
		
		case joaat("a_c_rabbit_01"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_RABBIT", 64);
			StringCopy(&(sParam0->f_16), "RABBIT", 32);
			StringCopy(&(sParam0->f_28), "RABBIT_SCREAM", 64);
			break;
		
		case joaat("a_c_retriever"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_RETRIEVER", 64);
			StringCopy(&(sParam0->f_16), "RETRIEVER", 32);
			StringCopy(&(sParam0->f_28), "BARK", 64);
			break;
		
		case joaat("a_c_rottweiler"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_ROTTWEILER", 64);
			StringCopy(&(sParam0->f_16), "ROTTWEILER", 32);
			StringCopy(&(sParam0->f_28), "BARK", 64);
			break;
		
		case joaat("a_c_shepherd"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_SHEPHERD", 64);
			StringCopy(&(sParam0->f_16), "SHEPHERD", 32);
			StringCopy(&(sParam0->f_28), "BARK", 64);
			break;
		
		case joaat("a_c_westy"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_SMALL_DOG", 64);
			StringCopy(&(sParam0->f_16), "SMALL_DOG", 32);
			StringCopy(&(sParam0->f_28), "BARK", 64);
			break;
		
		case joaat("a_c_chickenhawk"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_CHICKENHAWK", 64);
			StringCopy(&(sParam0->f_16), "CHICKENHAWK", 32);
			StringCopy(&(sParam0->f_28), "SCREECH", 64);
			break;
		
		case joaat("a_c_cormorant"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_CORMORANT", 64);
			StringCopy(&(sParam0->f_16), "CORMORANT", 32);
			StringCopy(&(sParam0->f_28), "CALL", 64);
			break;
		
		case joaat("a_c_crow"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_CROW", 64);
			StringCopy(&(sParam0->f_16), "CROW", 32);
			StringCopy(&(sParam0->f_28), "FLIGHT", 64);
			break;
		
		case joaat("a_c_hen"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_HEN", 64);
			StringCopy(&(sParam0->f_16), "HEN", 32);
			StringCopy(&(sParam0->f_28), "SQUAWK", 64);
			break;
		
		case joaat("a_c_pigeon"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_PIGEON", 64);
			StringCopy(&(sParam0->f_16), "PIGEON", 32);
			StringCopy(&(sParam0->f_28), "COO", 64);
			break;
		
		case joaat("a_c_seagull"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_SEAGULL", 64);
			StringCopy(&(sParam0->f_16), "SEAGULL", 32);
			StringCopy(&(sParam0->f_28), "CALL", 64);
			break;
		
		case joaat("a_c_dolphin"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_DOLPHIN", 64);
			StringCopy(&(sParam0->f_16), "DOLPHIN", 32);
			StringCopy(&(sParam0->f_28), "DOLPHIN_CALL", 64);
			break;
		
		case joaat("a_c_fish"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_SEA_CREATURE", 64);
			StringCopy(&(sParam0->f_16), "SEA_CREATURE", 32);
			break;
		
		case joaat("a_c_killerwhale"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_SEA_CREATURE", 64);
			StringCopy(&(sParam0->f_16), "SEA_CREATURE", 32);
			StringCopy(&(sParam0->f_28), "WHALE_CALL", 64);
			break;
		
		case joaat("a_c_sharkhammer"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_SEA_CREATURE", 64);
			StringCopy(&(sParam0->f_16), "SEA_CREATURE", 32);
			break;
		
		case joaat("a_c_sharktiger"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_SEA_CREATURE", 64);
			StringCopy(&(sParam0->f_16), "SEA_CREATURE", 32);
			break;
		
		case joaat("a_c_stingray"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_SEA_CREATURE", 64);
			StringCopy(&(sParam0->f_16), "SEA_CREATURE", 32);
			break;
		
		case joaat("ig_orleans"):
			StringCopy(sParam0, "PEYOTE_ATTRACT_SASQUATCH", 64);
			StringCopy(&(sParam0->f_16), "SASQUATCH", 32);
			StringCopy(&(sParam0->f_24), "SAS_BANK_01", 16);
			StringCopy(&(sParam0->f_28), "PEYOTE_PLAYER_SECRET_VOCAL_MASTER", 64);
			break;
		
		default:
			break;
	}
}

int func_558(int iParam0)//Position - 0x5F99F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PEYOTE_PROGRESSION_COMPLETE)
	{
		iVar0 = GlobalFunc_7719();
		iVar1 = iVar0;
		GlobalFunc_94(&iVar0, 5);
		GlobalFunc_95(&iVar0, 30);
		GlobalFunc_96(&iVar0, 0);
		GlobalFunc_94(&iVar1, 8);
		GlobalFunc_95(&iVar1, 0);
		GlobalFunc_96(&iVar1, 0);
		if (GlobalFunc_8448(iVar0) && !GlobalFunc_8448(iVar1))
		{
			if (GlobalFunc_794(57))
			{
				if (CLOCK::GET_CLOCK_DAY_OF_WEEK() == iParam0)
				{
					MISC::_GET_WEATHER_TYPE_TRANSITION(&iVar2, &iVar3, &fVar4);
					if ((((iVar2 == -1368164796 && fVar4 <= 0.5f) || (iVar3 == -1368164796 && fVar4 >= 0.5f)) || (iVar2 == -1429616491 && fVar4 <= 0.5f)) || (iVar3 == -1429616491 && fVar4 >= 0.5f))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}



int func_561()//Position - 0x5FAC8
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f)
		{
			return 0;
		}
	}
	return 1;
}

void func_562()//Position - 0x5FAF6
{
	struct<3> Var0;
	int iVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		iVar3 = 0;
		while (iVar3 < 4)
		{
			if (MISC::IS_BIT_SET(uLocal_1336[iVar3], iLocal_1341[iVar3]))
			{
				if (SYSTEM::VDIST2(Var0, Local_141[iVar3 /*46*/][iLocal_1341[iVar3] /*3*/]) > fLocal_50 || CAM::IS_SCREEN_FADED_OUT())
				{
					func_563(iVar3, iLocal_1341[iVar3]);
				}
			}
			iLocal_1341[iVar3]++;
			if (iLocal_1341[iVar3] >= func_549(iVar3))
			{
				iLocal_1341[iVar3] = 0;
			}
			iVar3++;
		}
	}
}

void func_563(int iParam0, int iParam1)//Position - 0x5FB9C
{
	MISC::CLEAR_BIT(&(uLocal_1336[iParam0]), iParam1);
}

void func_564()//Position - 0x5FBB1
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = 0;
		while (iVar1 < func_549(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_1362[iVar0 /*16*/][iVar1]))
			{
				OBJECT::DELETE_OBJECT(&(Local_1362[iVar0 /*16*/][iVar1]));
				func_412(&iLocal_1602);
			}
			iVar1++;
		}
		iVar0++;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_BIT_SET(iLocal_126, 1))
		{
			func_565();
		}
	}
	if (iLocal_1669)
	{
		GlobalFunc_11306(PLAYER::PLAYER_PED_ID(), &uLocal_1604, 0);
	}
	if (iLocal_1670)
	{
		PED::_SET_PED_SCUBA_GEAR_VARIATION(PLAYER::PLAYER_PED_ID());
		iLocal_1670 = 0;
	}
	if (Global_24599 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(Global_24599);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_peyote_lowland_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_peyote_lowland_02"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_peyote_highland_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_peyote_highland_02"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_peyote_water_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_peyote_gold_01"));
	if (MISC::IS_BIT_SET(iLocal_126, 0))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4917(iLocal_131));
		MISC::CLEAR_BIT(&iLocal_126, 0);
	}
	if (iLocal_128 != -1)
	{
		func_31();
		func_30(0);
		GlobalFunc_1997(&iLocal_128);
	}
	if (iLocal_1346 != -1)
	{
		AUDIO::STOP_SOUND(iLocal_1346);
		AUDIO::RELEASE_SOUND_ID(iLocal_1346);
		iLocal_1346 = -1;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_78))
	{
		if (!MISC::ARE_STRINGS_EQUAL(&Local_78, "NONE"))
		{
			AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
		}
	}
	if (iLocal_130 != -1)
	{
		GlobalFunc_5084(&iLocal_130);
	}
	if (!GlobalFunc_39(14) && !HUD::_HAS_DIRECTOR_MODE_BEEN_TRIGGERED())
	{
		STATS::_0x98E2BC1CA26287C3();
	}
	iLocal_1601 = -1;
	AUDIO::STOP_AUDIO_SCENES();
	TASK::RESET_SCENARIO_TYPES_ENABLED();
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1596))
	{
		GlobalFunc_5105();
		sLocal_1596 = "";
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_53.f_5)))
	{
		STREAMING::REMOVE_ANIM_DICT(&(Local_53.f_5));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_53.f_3))
	{
		STREAMING::REMOVE_ANIM_DICT(Local_53.f_3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_53))
	{
		STREAMING::REMOVE_ANIM_DICT(Local_53);
	}
	GlobalFunc_8316(0, 1, 0, 0);
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	if (CAM::DOES_CAM_EXIST(uLocal_134))
	{
		CAM::DESTROY_CAM(uLocal_134, 0);
	}
	GlobalFunc_1998(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_565()//Position - 0x5FD9B
{
	HUD::CLEAR_HELP(1);
	func_412(&iLocal_1603);
	PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iLocal_1356, 0);
	if (iLocal_1347 != -1)
	{
		AUDIO::STOP_SOUND(iLocal_1347);
		AUDIO::RELEASE_SOUND_ID(iLocal_1347);
		iLocal_1347 = -1;
	}
	if (iLocal_1428 != 0 && !ENTITY::DOES_ENTITY_EXIST(iLocal_1428))
	{
		GlobalFunc_4927(24, 1);
		Global_67138[24] = 0;
	}
	GlobalFunc_842(0, 0);
	AUDIO::STOP_AUDIO_SCENES();
	func_31();
	func_30(0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_529(iLocal_1353));
}

void func_566()//Position - 0x5FE17
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING("PeyoteEndIn"))
	{
		GRAPHICS::ANIMPOSTFX_PLAY("PeyoteEndIn", 0, 0);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PEYOTE_TRANSITION_OUT_SCENE"))
		{
			AUDIO::START_AUDIO_SCENE("PEYOTE_TRANSITION_OUT_SCENE");
		}
		if (AUDIO::LOAD_STREAM("PEYOTE_TRANSITION_OUT", 0))
		{
			AUDIO::PLAY_STREAM_FRONTEND();
		}
		iLocal_140 = MISC::GET_GAME_TIMER() + 2500;
	}
	GlobalFunc_8316(1, 1, 1, 0);
	while (MISC::GET_GAME_TIMER() < iLocal_140)
	{
		if (MISC::GET_GAME_TIMER() > (iLocal_140 - 500))
		{
			if (!bLocal_132)
			{
				func_413();
			}
			func_2();
		}
		func_436(func_529(iLocal_1353), &iLocal_129, 1);
		SYSTEM::WAIT(0);
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = 0;
		while (iVar1 < func_549(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_1362[iVar0 /*16*/][iVar1]))
			{
				OBJECT::DELETE_OBJECT(&(Local_1362[iVar0 /*16*/][iVar1]));
				func_412(&iLocal_1602);
			}
			iVar1++;
		}
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_peyote_lowland_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_peyote_lowland_02"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_peyote_highland_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_peyote_highland_02"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_peyote_water_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_peyote_gold_01"));
	bVar2 = false;
	while (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!bVar2)
		{
			MISC::IGNORE_NEXT_RESTART(1);
			MISC::PAUSE_DEATH_ARREST_RESTART(0);
			bVar2 = true;
		}
		func_2();
		SYSTEM::WAIT(0);
	}
	iLocal_124 = -1;
	iLocal_52 = 5;
}

void func_567()//Position - 0x5FF61
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uLocal_1348[iVar0] = func_568(iVar0);
		iVar0++;
	}
}

var func_568(int iParam0)//Position - 0x5FF88
{
	int iVar0;
	int iVar1[15];
	int iVar17;
	int iVar18;
	int iVar19;
	
	iVar0 = iParam0;
	if (iParam0 == 1)
	{
		if (Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PEYOTE_PROGRESSION_COMPLETE && MISC::GET_RANDOM_INT_IN_RANGE(0, 51) == 50)
		{
			iVar0 = 0;
		}
	}
	iVar18 = 0;
	iVar17 = 0;
	while (iVar17 < 28)
	{
		if (func_478(iVar17) == iVar0)
		{
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PEYOTE_ANIMAL_SEEN, iVar17) || Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PEYOTE_PROGRESSION_COMPLETE)
			{
				iVar1[iVar18] = iVar17;
				iVar18++;
			}
		}
		iVar17++;
	}
	iVar19 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar18);
	return iVar1[iVar19];
}

void func_569()//Position - 0x6001F
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = 0;
		while (iVar1 < func_549(iVar0))
		{
			func_570(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

void func_570(int iParam0, int iParam1)//Position - 0x60058
{
	MISC::SET_BIT(&(uLocal_1336[iParam0]), iParam1);
}

void func_571()//Position - 0x6006D
{
	func_572();
	Local_141[0 /*46*/][0 /*3*/] = { -529.82f, 4188.161f, 191.65f };
	Local_326[0 /*46*/][0 /*3*/] = { -2.16f, 17.28f, -80f };
	Local_141[0 /*46*/][1 /*3*/] = { -116.178f, 1428.289f, 293.404f };
	Local_326[0 /*46*/][1 /*3*/] = { -3.6f, 6.48f, 100f };
	Local_141[0 /*46*/][2 /*3*/] = { 2592.256f, 6156.699f, 165.061f };
	Local_326[0 /*46*/][2 /*3*/] = { 5f, -10f, 25f };
	Local_141[0 /*46*/][3 /*3*/] = { 2347.476f, 2551.505f, 45.668f };
	Local_326[0 /*46*/][3 /*3*/] = { 4f, 0f, 90f };
	Local_141[0 /*46*/][4 /*3*/] = { 1422.945f, -2615.256f, 46.688f };
	Local_326[0 /*46*/][4 /*3*/] = { -8f, 0f, 180f };
	Local_141[0 /*46*/][5 /*3*/] = { 1328.343f, -607.007f, 73.513f };
	Local_326[0 /*46*/][5 /*3*/] = { 0f, 0f, 55f };
	Local_141[0 /*46*/][6 /*3*/] = { -320.583f, -1652.426f, 30.849f };
	Local_326[0 /*46*/][6 /*3*/] = { 1f, 4f, 155f };
	Local_141[0 /*46*/][7 /*3*/] = { -1162.315f, -1998.3f, 12.16f };
	Local_326[0 /*46*/][7 /*3*/] = { 6f, 1f, 245f };
	Local_141[0 /*46*/][8 /*3*/] = { -2001.561f, 3518.889f, 56.035f };
	Local_326[0 /*46*/][8 /*3*/] = { 12.96f, 0f, -51.84f };
	Local_141[0 /*46*/][9 /*3*/] = { -1615.908f, 2072.896f, 76.997f };
	Local_326[0 /*46*/][9 /*3*/] = { 11.52f, -7.92f, 210f };
	Local_141[0 /*46*/][10 /*3*/] = { 513.941f, 3009.893f, 39.797f };
	Local_326[0 /*46*/][10 /*3*/] = { 3f, 8f, 140f };
	Local_141[0 /*46*/][11 /*3*/] = { -1038.658f, 881.085f, 161.007f };
	Local_326[0 /*46*/][11 /*3*/] = { -2f, 0f, 160f };
	Local_141[0 /*46*/][12 /*3*/] = { 1306.135f, 2105.401f, 81.951f };
	Local_326[0 /*46*/][12 /*3*/] = { 3f, 10f, 165f };
	Local_141[0 /*46*/][13 /*3*/] = { 142.407f, 6865.949f, 27.324f };
	Local_326[0 /*46*/][13 /*3*/] = { 1f, 3f, 120f };
	Local_141[0 /*46*/][14 /*3*/] = { 437.683f, 782.841f, 192.166f };
	Local_326[0 /*46*/][14 /*3*/] = { -9f, -3.6f, 125.28f };
	Local_141[1 /*46*/][0 /*3*/] = { -95.011f, 321.923f, 141.565f };
	Local_326[1 /*46*/][0 /*3*/] = { 1f, 0.5f, 80f };
	Local_141[1 /*46*/][1 /*3*/] = { -1334.848f, -1066.133f, 11.307f };
	Local_326[1 /*46*/][1 /*3*/] = { 1f, 2f, 135f };
	Local_141[1 /*46*/][2 /*3*/] = { 1483.204f, 6029.105f, 310.793f };
	Local_326[1 /*46*/][2 /*3*/] = { 5f, 2f, 100f };
	Local_141[1 /*46*/][3 /*3*/] = { 502.151f, 5506.052f, 773.54f };
	Local_326[1 /*46*/][3 /*3*/] = { 1f, 2f, 245f };
	Local_141[1 /*46*/][4 /*3*/] = { 3336.348f, -274.956f, 3.965f };
	Local_326[1 /*46*/][4 /*3*/] = { 0f, 6f, 100f };
	Local_141[1 /*46*/][5 /*3*/] = { -1002.453f, 4499.704f, 156.972f };
	Local_326[1 /*46*/][5 /*3*/] = { 0f, 0f, 25f };
	Local_141[2 /*46*/][0 /*3*/] = { 87.199f, 4315.681f, 20.717f };
	Local_326[2 /*46*/][0 /*3*/] = { -8f, 3f, 180f };
	Local_141[2 /*46*/][1 /*3*/] = { -1845.74f, -1257.063f, -23.453f };
	Local_326[2 /*46*/][1 /*3*/] = { 8f, 0f, 0f };
	Local_141[2 /*46*/][2 /*3*/] = { -563.346f, -2481.856f, -17.769f };
	Local_326[2 /*46*/][2 /*3*/] = { -2f, 2f, 195f };
	Local_141[2 /*46*/][3 /*3*/] = { 4164.94f, 3569.537f, -48.4f };
	Local_326[2 /*46*/][3 /*3*/] = { 2.16f, -15.12f, 170f };
	Local_141[2 /*46*/][4 /*3*/] = { -781f, 6619.869f, -19.919f };
	Local_326[2 /*46*/][4 /*3*/] = { -15.84f, 4f, 100f };
	Local_141[2 /*46*/][5 /*3*/] = { -2873f, 2594.401f, -11.424f };
	Local_326[2 /*46*/][5 /*3*/] = { 5.76f, 0f, 330f };
	Local_141[3 /*46*/][0 /*3*/] = { -1597.148f, 4593.326f, 38.139f };
	Local_326[3 /*46*/][0 /*3*/] = { 5f, 20f, 0f };
	Local_141[3 /*46*/][1 /*3*/] = { -1562.325f, 4462.752f, 17.231f };
	Local_326[3 /*46*/][1 /*3*/] = { -11f, 2f, 200f };
	Local_141[3 /*46*/][2 /*3*/] = { -1472.531f, 4439.456f, 18.862f };
	Local_326[3 /*46*/][2 /*3*/] = { -10f, -5f, 0f };
	Local_141[3 /*46*/][3 /*3*/] = { 34.291f, 4322.551f, 42.358f };
	Local_326[3 /*46*/][3 /*3*/] = { 0f, 3f, 5f };
	Local_141[3 /*46*/][4 /*3*/] = { 295.732f, 4275.579f, 40.985f };
	Local_326[3 /*46*/][4 /*3*/] = { 7.92f, 0f, 0f };
	Local_141[3 /*46*/][5 /*3*/] = { 1106.727f, 4520.82f, 50.421f };
	Local_326[3 /*46*/][5 /*3*/] = { -1f, -2f, 310f };
	Local_141[3 /*46*/][6 /*3*/] = { 1662.614f, 5152.309f, 151.377f };
	Local_326[3 /*46*/][6 /*3*/] = { -5f, 0f, 260f };
	Local_511[0 /*46*/][0 /*3*/] = { -531.5155f, 4192.896f, 192.3638f };
	Local_696[0 /*16*/][0] = 184.6266f;
	Local_761[0 /*16*/][0] = -12f;
	Local_511[0 /*46*/][1 /*3*/] = { -112.5678f, 1425.685f, 293.9277f };
	Local_696[0 /*16*/][1] = 4.5629f;
	Local_761[0 /*16*/][1] = -12f;
	Local_511[0 /*46*/][2 /*3*/] = { 2584.312f, 6161.179f, 163.9988f };
	Local_696[0 /*16*/][2] = 358.1584f;
	Local_761[0 /*16*/][2] = -12f;
	Local_511[0 /*46*/][3 /*3*/] = { 2347.648f, 2549.352f, 45.6677f };
	Local_696[0 /*16*/][3] = 349.2026f;
	Local_761[0 /*16*/][3] = -12f;
	Local_511[0 /*46*/][4 /*3*/] = { 1422.365f, -2612.971f, 46.7801f };
	Local_696[0 /*16*/][4] = 3.9096f;
	Local_761[0 /*16*/][4] = -12f;
	Local_511[0 /*46*/][5 /*3*/] = { 1328.122f, -609.4195f, 73.3241f };
	Local_696[0 /*16*/][5] = 232.2858f;
	Local_761[0 /*16*/][5] = -12f;
	Local_511[0 /*46*/][6 /*3*/] = { -303.2847f, -1658.923f, 30.8488f };
	Local_696[0 /*16*/][6] = 332.2989f;
	Local_761[0 /*16*/][6] = -15f;
	Local_511[0 /*46*/][7 /*3*/] = { -1172.184f, -2018.766f, 12.1605f };
	Local_696[0 /*16*/][7] = 180.8184f;
	Local_761[0 /*16*/][7] = -12f;
	Local_511[0 /*46*/][8 /*3*/] = { -2003.719f, 3526.092f, 56.6927f };
	Local_696[0 /*16*/][8] = 164.7774f;
	Local_761[0 /*16*/][8] = -12f;
	Local_511[0 /*46*/][9 /*3*/] = { -1617.147f, 2073.686f, 76.9415f };
	Local_696[0 /*16*/][9] = 66.5177f;
	Local_761[0 /*16*/][9] = -12f;
	Local_511[0 /*46*/][10 /*3*/] = { 512.3995f, 3013.787f, 39.7735f };
	Local_696[0 /*16*/][10] = 119.1231f;
	Local_761[0 /*16*/][10] = -12f;
	Local_511[0 /*46*/][11 /*3*/] = { -1032.5f, 891.1083f, 167.2734f };
	Local_696[0 /*16*/][11] = 139.8774f;
	Local_761[0 /*16*/][11] = -12f;
	Local_511[0 /*46*/][12 /*3*/] = { 1299.465f, 2105.893f, 80.0829f };
	Local_696[0 /*16*/][12] = 97.5191f;
	Local_761[0 /*16*/][12] = -12f;
	Local_511[0 /*46*/][13 /*3*/] = { 143.9502f, 6867.64f, 27.3547f };
	Local_696[0 /*16*/][13] = 335.161f;
	Local_761[0 /*16*/][13] = -12f;
	Local_511[0 /*46*/][14 /*3*/] = { 436.9434f, 783.1006f, 192.1307f };
	Local_696[0 /*16*/][14] = 116.2676f;
	Local_761[0 /*16*/][14] = -12f;
	Local_511[1 /*46*/][0 /*3*/] = { -90.1056f, 318.6911f, 142.8513f };
	Local_696[1 /*16*/][0] = 155.7856f;
	Local_761[1 /*16*/][0] = -15f;
	Local_511[1 /*46*/][1 /*3*/] = { -1352.241f, -1090.495f, 19.1143f };
	Local_696[1 /*16*/][1] = 81.1243f;
	Local_761[1 /*16*/][1] = -5f;
	Local_511[1 /*46*/][2 /*3*/] = { 1466.033f, 6043.335f, 303.1763f };
	Local_696[1 /*16*/][2] = 329.329f;
	Local_761[1 /*16*/][2] = -28.5f;
	Local_511[1 /*46*/][3 /*3*/] = { 499.6498f, 5515.743f, 777.0497f };
	Local_696[1 /*16*/][3] = 202.7672f;
	Local_761[1 /*16*/][3] = -20f;
	Local_511[1 /*46*/][4 /*3*/] = { 3339.192f, -273.7192f, 4.1283f };
	Local_696[1 /*16*/][4] = 349.233f;
	Local_761[1 /*16*/][4] = -9f;
	Local_511[1 /*46*/][5 /*3*/] = { -983.5906f, 4484.869f, 145.7952f };
	Local_696[1 /*16*/][5] = 256.3761f;
	Local_761[1 /*16*/][5] = -18f;
	Local_511[2 /*46*/][0 /*3*/] = { 91.3454f, 4318.591f, 26.4644f };
	Local_696[2 /*16*/][0] = 171.3796f;
	Local_761[2 /*16*/][0] = -2f;
	Local_511[2 /*46*/][1 /*3*/] = { -1831.969f, -1223.177f, -2.9458f };
	Local_696[2 /*16*/][1] = 228.1f;
	Local_761[2 /*16*/][1] = -2f;
	Local_511[2 /*46*/][2 /*3*/] = { -574.5851f, -2478.375f, -11.061f };
	Local_696[2 /*16*/][2] = 262.1271f;
	Local_761[2 /*16*/][2] = -2f;
	Local_511[2 /*46*/][3 /*3*/] = { 4155.332f, 3566.998f, -39.9966f };
	Local_696[2 /*16*/][3] = 183.5475f;
	Local_761[2 /*16*/][3] = -2f;
	Local_511[2 /*46*/][4 /*3*/] = { -750.1962f, 6603.149f, -11.7596f };
	Local_696[2 /*16*/][4] = 61.7154f;
	Local_761[2 /*16*/][4] = -2f;
	Local_511[2 /*46*/][5 /*3*/] = { -2871.633f, 2613.862f, -4.2648f };
	Local_696[2 /*16*/][5] = 180.3624f;
	Local_761[2 /*16*/][5] = -2f;
	Local_511[3 /*46*/][0 /*3*/] = { -1596.128f, 4595.778f, 40.5927f };
	Local_696[3 /*16*/][0] = 200.6605f;
	Local_761[3 /*16*/][0] = -12f;
	Local_511[3 /*46*/][1 /*3*/] = { -1567.382f, 4464.305f, 17.4783f };
	Local_696[3 /*16*/][1] = 118.7467f;
	Local_761[3 /*16*/][1] = -12f;
	Local_511[3 /*46*/][2 /*3*/] = { -1436.305f, 4428.801f, 44.8536f };
	Local_696[3 /*16*/][2] = 43.5218f;
	Local_761[3 /*16*/][2] = -12f;
	Local_511[3 /*46*/][3 /*3*/] = { 31.2408f, 4328.052f, 43.9517f };
	Local_696[3 /*16*/][3] = 163.1396f;
	Local_761[3 /*16*/][3] = -12f;
	Local_511[3 /*46*/][4 /*3*/] = { 278.1924f, 4276.504f, 39.3595f };
	Local_696[3 /*16*/][4] = 75.6033f;
	Local_761[3 /*16*/][4] = -12f;
	Local_511[3 /*46*/][5 /*3*/] = { 1116.002f, 4506.765f, 64.8542f };
	Local_696[3 /*16*/][5] = 116.3962f;
	Local_761[3 /*16*/][5] = -12f;
	Local_511[3 /*46*/][6 /*3*/] = { 1676.193f, 5139.87f, 149.3976f };
	Local_696[3 /*16*/][6] = 232.4278f;
	Local_761[3 /*16*/][6] = -15f;
	Local_826[0 /*46*/][0 /*3*/] = { -524.6988f, 4192.316f, 192.736f };
	Local_1011[0 /*16*/][0] = 227.6253f;
	Local_826[0 /*46*/][1 /*3*/] = { -117.8253f, 1442.464f, 293.5365f };
	Local_1011[0 /*16*/][1] = 87.7333f;
	Local_826[0 /*46*/][2 /*3*/] = { 2557.46f, 6175.38f, 162.3287f };
	Local_1011[0 /*16*/][2] = 288.4795f;
	Local_826[0 /*46*/][3 /*3*/] = { 2348.438f, 2558.805f, 45.6677f };
	Local_1011[0 /*16*/][3] = 148.4075f;
	Local_826[0 /*46*/][4 /*3*/] = { 1430.151f, -2603.417f, 47.0881f };
	Local_1011[0 /*16*/][4] = 267.3886f;
	Local_826[0 /*46*/][5 /*3*/] = { 1333.477f, -612.6886f, 73.3284f };
	Local_1011[0 /*16*/][5] = 63.2009f;
	Local_826[0 /*46*/][6 /*3*/] = { -297.3636f, -1640.259f, 30.8488f };
	Local_1011[0 /*16*/][6] = 289.2072f;
	Local_826[0 /*46*/][7 /*3*/] = { -1165.918f, -2057.012f, 13.2056f };
	Local_1011[0 /*16*/][7] = 315.7894f;
	Local_826[0 /*46*/][8 /*3*/] = { -1994.084f, 3425.994f, 30.1122f };
	Local_1011[0 /*16*/][8] = 108.6822f;
	Local_826[0 /*46*/][9 /*3*/] = { -1639.058f, 2098.248f, 84.2193f };
	Local_1011[0 /*16*/][9] = 338.7872f;
	Local_826[0 /*46*/][10 /*3*/] = { 495.2835f, 3013.316f, 40.0883f };
	Local_1011[0 /*16*/][10] = 198.0553f;
	Local_826[0 /*46*/][11 /*3*/] = { -1066.237f, 846.7995f, 165.8318f };
	Local_1011[0 /*16*/][11] = 94.0064f;
	Local_826[0 /*46*/][12 /*3*/] = { 1383.177f, 2158.091f, 96.6152f };
	Local_1011[0 /*16*/][12] = 79.592f;
	Local_826[0 /*46*/][13 /*3*/] = { 103.1246f, 6858.525f, 14.4039f };
	Local_1011[0 /*16*/][13] = 332.0037f;
	Local_826[0 /*46*/][14 /*3*/] = { 391.7144f, 799.85f, 186.6764f };
	Local_1011[0 /*16*/][14] = 191.2877f;
	Local_826[1 /*46*/][0 /*3*/] = { -109.7514f, 360.1761f, 111.6961f };
	Local_1011[1 /*16*/][0] = 145.6437f;
	Local_826[1 /*46*/][1 /*3*/] = { -1298.909f, -1037.608f, 11.4803f };
	Local_1011[1 /*16*/][1] = 117.7394f;
	Local_826[1 /*46*/][2 /*3*/] = { 1479.498f, 6030.336f, 310.9688f };
	Local_1011[1 /*16*/][2] = 64.9945f;
	Local_826[1 /*46*/][3 /*3*/] = { 517.0012f, 5505.487f, 769.9974f };
	Local_1011[1 /*16*/][3] = 181.1102f;
	Local_826[1 /*46*/][4 /*3*/] = { 3334.116f, -278.0879f, 3.241f };
	Local_1011[1 /*16*/][4] = 253.444f;
	Local_826[1 /*46*/][5 /*3*/] = { -1019.046f, 4507.233f, 156.9224f };
	Local_1011[1 /*16*/][5] = 109.9727f;
	Local_826[2 /*46*/][0 /*3*/] = { 93.9209f, 4327.622f, 25.8346f };
	Local_1011[2 /*16*/][0] = 125.689f;
	Local_826[2 /*46*/][1 /*3*/] = { -1797.591f, -1234.838f, -5f };
	Local_1011[2 /*16*/][1] = 311.2352f;
	Local_826[2 /*46*/][2 /*3*/] = { -559.9407f, -2481.411f, -4.2611f };
	Local_1011[2 /*16*/][2] = 254.542f;
	Local_826[2 /*46*/][3 /*3*/] = { 4141.132f, 3552.249f, -4.0547f };
	Local_1011[2 /*16*/][3] = 116.5838f;
	Local_826[2 /*46*/][4 /*3*/] = { -772.8342f, 6616.065f, -4.3376f };
	Local_1011[2 /*16*/][4] = 218.2574f;
	Local_826[2 /*46*/][5 /*3*/] = { -2865.131f, 2603.202f, -4.1572f };
	Local_1011[2 /*16*/][5] = 239.9374f;
	Local_826[3 /*46*/][0 /*3*/] = { -1634.986f, 4588.821f, 43.2674f };
	Local_1011[3 /*16*/][0] = 37.7429f;
	Local_826[3 /*46*/][1 /*3*/] = { -1632.229f, 4436.886f, 0.1957f };
	Local_1011[3 /*16*/][1] = 47.7317f;
	Local_826[3 /*46*/][2 /*3*/] = { -1433.196f, 4421.395f, 46.2258f };
	Local_1011[3 /*16*/][2] = 66.4789f;
	Local_826[3 /*46*/][3 /*3*/] = { 39.512f, 4326.823f, 42.841f };
	Local_1011[3 /*16*/][3] = 248.584f;
	Local_826[3 /*46*/][4 /*3*/] = { 282.5654f, 4272.012f, 39.3133f };
	Local_1011[3 /*16*/][4] = 93.8162f;
	Local_826[3 /*46*/][5 /*3*/] = { 1111.1f, 4539.971f, 52.7703f };
	Local_1011[3 /*16*/][5] = 161.8738f;
	Local_826[3 /*46*/][6 /*3*/] = { 1674.52f, 5146.087f, 149.8852f };
	Local_1011[3 /*16*/][6] = 302.0059f;
	Local_1076[0 /*46*/][0 /*3*/] = { -538.6052f, 4192.451f, 191.9071f };
	Local_1261[0 /*16*/][0] = 117.3685f;
	Local_1076[0 /*46*/][1 /*3*/] = { -130.9344f, 1467.077f, 292.8185f };
	Local_1261[0 /*16*/][1] = 9.6516f;
	Local_1076[0 /*46*/][2 /*3*/] = { 2592.95f, 6179.652f, 165.768f };
	Local_1261[0 /*16*/][2] = 22.0803f;
	Local_1076[0 /*46*/][3 /*3*/] = { 2330.055f, 2546.652f, 45.6677f };
	Local_1261[0 /*16*/][3] = 1.6841f;
	Local_1076[0 /*46*/][4 /*3*/] = { 1440.25f, -2611.455f, 47.2619f };
	Local_1261[0 /*16*/][4] = 344.7832f;
	Local_1076[0 /*46*/][5 /*3*/] = { 1347.184f, -606.6709f, 73.3589f };
	Local_1261[0 /*16*/][5] = 323.1254f;
	Local_1076[0 /*46*/][6 /*3*/] = { -248.152f, -1689.017f, 32.4828f };
	Local_1261[0 /*16*/][6] = 179.6259f;
	Local_1076[0 /*46*/][7 /*3*/] = { -1155.694f, -2036.048f, 12.1606f };
	Local_1261[0 /*16*/][7] = 135.3064f;
	Local_1076[0 /*46*/][8 /*3*/] = { -2016.407f, 3412.073f, 30.1195f };
	Local_1261[0 /*16*/][8] = 2.2746f;
	Local_1076[0 /*46*/][9 /*3*/] = { -1585.894f, 2102.477f, 66.8681f };
	Local_1261[0 /*16*/][9] = 176.9579f;
	Local_1076[0 /*46*/][10 /*3*/] = { 522.2675f, 3030.546f, 38.8381f };
	Local_1261[0 /*16*/][10] = 222.1449f;
	Local_1076[0 /*46*/][11 /*3*/] = { -1086.987f, 787.2667f, 163.7984f };
	Local_1261[0 /*16*/][11] = 98.3083f;
	Local_1076[0 /*46*/][12 /*3*/] = { 1413.958f, 2160.102f, 97.1414f };
	Local_1261[0 /*16*/][12] = 11.7878f;
	Local_1076[0 /*46*/][13 /*3*/] = { 106.1145f, 6857.835f, 14.5062f };
	Local_1261[0 /*16*/][13] = 184.1832f;
	Local_1076[0 /*46*/][14 /*3*/] = { 402.4059f, 783.2064f, 186.6439f };
	Local_1261[0 /*16*/][14] = 134.5921f;
	Local_1076[1 /*46*/][0 /*3*/] = { -128.1134f, 379.8373f, 111.7576f };
	Local_1261[1 /*16*/][0] = 154.6337f;
	Local_1076[1 /*46*/][1 /*3*/] = { -1312.176f, -1068.464f, 5.8127f };
	Local_1261[1 /*16*/][1] = 29.1101f;
	Local_1076[1 /*46*/][2 /*3*/] = { 1495.258f, 6032.542f, 308.7726f };
	Local_1261[1 /*16*/][2] = 288.5849f;
	Local_1076[1 /*46*/][3 /*3*/] = { 506.5558f, 5533.214f, 776.3751f };
	Local_1261[1 /*16*/][3] = 207.4062f;
	Local_1076[1 /*46*/][4 /*3*/] = { 2852.063f, -111.2995f, 1.0301f };
	Local_1261[1 /*16*/][4] = 42.0921f;
	Local_1076[1 /*46*/][5 /*3*/] = { -972.9418f, 4549.848f, 126.8038f };
	Local_1261[1 /*16*/][5] = 262.626f;
	Local_1076[2 /*46*/][0 /*3*/] = { 12.7101f, 4443.635f, 58.5636f };
	Local_1261[2 /*16*/][0] = 276.7658f;
	Local_1076[2 /*46*/][1 /*3*/] = { -1811.789f, -1240.51f, 12.0174f };
	Local_1261[2 /*16*/][1] = 51.5445f;
	Local_1076[2 /*46*/][2 /*3*/] = { -439.6339f, -2460.336f, 5.0008f };
	Local_1261[2 /*16*/][2] = 228.8953f;
	Local_1076[2 /*46*/][3 /*3*/] = { 3911.276f, 3453.272f, 4.3854f };
	Local_1261[2 /*16*/][3] = 64.5589f;
	Local_1076[2 /*46*/][4 /*3*/] = { -543.1194f, 6411.564f, 1.7985f };
	Local_1261[2 /*16*/][4] = 288.9971f;
	Local_1076[2 /*46*/][5 /*3*/] = { -2780.548f, 2534.499f, 1.5562f };
	Local_1261[2 /*16*/][5] = 137.5726f;
	Local_1076[3 /*46*/][0 /*3*/] = { -1643.006f, 4603.595f, 44.1547f };
	Local_1261[3 /*16*/][0] = 280.9118f;
	Local_1076[3 /*46*/][1 /*3*/] = { -1634.691f, 4412.948f, 1.6828f };
	Local_1261[3 /*16*/][1] = 32.5647f;
	Local_1076[3 /*46*/][2 /*3*/] = { -1460.977f, 4480.495f, 18.2185f };
	Local_1261[3 /*16*/][2] = 289.6174f;
	Local_1076[3 /*46*/][3 /*3*/] = { 12.7101f, 4443.635f, 58.5636f };
	Local_1261[3 /*16*/][3] = 276.7658f;
	Local_1076[3 /*46*/][4 /*3*/] = { 282.5648f, 4300.998f, 43.2166f };
	Local_1261[3 /*16*/][4] = 355.7436f;
	Local_1076[3 /*46*/][5 /*3*/] = { 1061.731f, 4453.175f, 54.9683f };
	Local_1261[3 /*16*/][5] = 263.9897f;
	Local_1076[3 /*46*/][6 /*3*/] = { 1684.753f, 5173.515f, 145.7554f };
	Local_1261[3 /*16*/][6] = 221.6928f;
}

void func_572()//Position - 0x6189A
{
	if (MISC::IS_PC_VERSION())
	{
		fLocal_50 = 65025f;
		fLocal_51 = 70225f;
	}
	else
	{
		fLocal_50 = 10000f;
		fLocal_51 = 12100f;
	}
}


