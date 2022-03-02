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
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	struct<3> Local_24 = { 0, 0, 0 } ;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 10;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
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
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	struct<36> Local_94[8];
	int iLocal_383 = 0;
	struct<5> Local_384[58];
	struct<671> Local_675 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 3;
	var uLocal_1349 = 0;
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
	var uLocal_1396 = 4;
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
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 2;
	var uLocal_1462 = 0;
	var uLocal_1463 = 4;
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
	var uLocal_1529 = 4;
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
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 12;
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
	var uLocal_1739 = 0;
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
	var uLocal_1770 = 0;
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
	var uLocal_1781 = 3;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	float fLocal_1787 = 0f;
	struct<3> Local_1788 = { 0, 0, 0 } ;
	bool bLocal_1791 = 0;
	float fLocal_1792 = 0f;
	float fLocal_1793 = 0f;
	int iLocal_1794 = 0;
	int iLocal_1795 = 0;
	int iLocal_1796 = 0;
	int iLocal_1797 = 0;
	int iLocal_1798 = 0;
	struct<3> Local_1799 = { 0, 0, 0 } ;
	var uLocal_1802 = 0;
	bool bLocal_1803 = 0;
	int iLocal_1804 = 0;
	var uLocal_1805 = 0;
	int iLocal_1806 = 0;
	int iLocal_1807 = 0;
	struct<3> Local_1808 = { 0, 0, 0 } ;
	int iLocal_1811 = 0;
	int iLocal_1812 = 0;
	int iLocal_1813 = 0;
	int iLocal_1814 = 0;
	int iLocal_1815 = 0;
	int iLocal_1816 = 0;
	int iLocal_1817 = 0;
	int iLocal_1818 = 0;
	int iLocal_1819 = 0;
	float fLocal_1820 = 0f;
	float fLocal_1821 = 0f;
	int iLocal_1822 = 0;
	var uLocal_1823 = 0;
	int iLocal_1824 = 0;
	int iLocal_1825 = 0;
	int iLocal_1826 = 0;
	bool bLocal_1827 = 0;
	int iLocal_1828 = 0;
	var uLocal_1829 = 15;
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
	var uLocal_1881 = 15;
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
	float fLocal_1933 = 0f;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	int iLocal_1942 = 0;
	int iLocal_1943 = 0;
	int iLocal_1944 = 0;
	int iLocal_1945 = 0;
	var uLocal_1946 = 0;
	int iLocal_1947 = 0;
	int iLocal_1948 = 0;
	int iLocal_1949 = 0;
	int iLocal_1950 = 0;
	int iLocal_1951 = 0;
	int iLocal_1952 = 0;
	int iLocal_1953 = 0;
	int iLocal_1954 = 0;
	int iLocal_1955 = 0;
	int iLocal_1956 = 0;
	var uLocal_1957 = 0;
	int iLocal_1958 = 0;
	int iLocal_1959 = 0;
	int iLocal_1960 = 0;
	int iLocal_1961 = 0;
	struct<3> Local_1962 = { 0, 0, 0 } ;
	int iLocal_1965 = 0;
	struct<61> Local_1966 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_2027 = 0;
	int iLocal_2028 = 0;
	int iLocal_2029 = 0;
	int iLocal_2030 = 0;
	int iLocal_2031 = 0;
	int iLocal_2032 = 0;
	var uLocal_2033 = 16;
	var uLocal_2034 = 0;
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
	int iLocal_2198 = 0;
	int iLocal_2199 = 0;
	bool bLocal_2200 = 0;
	int iLocal_2201 = 0;
	bool bLocal_2202 = 0;
	int iLocal_2203 = 0;
	bool bLocal_2204 = 0;
	int iLocal_2205 = 0;
	int iLocal_2206 = 0;
	int iLocal_2207 = 0;
	int iLocal_2208 = 0;
	int iLocal_2209 = 0;
	int iLocal_2210 = 0;
	int iLocal_2211 = 0;
	int iLocal_2212 = 0;
	bool bLocal_2213 = 0;
	int iLocal_2214 = 0;
	int iLocal_2215 = 0;
	int iLocal_2216 = 0;
	var uLocal_2217 = 0;
	bool bLocal_2218 = 0;
	int iLocal_2219 = 0;
	int iLocal_2220 = 0;
	int iLocal_2221 = 0;
	int iLocal_2222 = 0;
	int iLocal_2223 = 0;
	int iLocal_2224 = 0;
	int iLocal_2225[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2239[5] = { 0, 0, 0, 0, 0 };
	int iLocal_2245[5] = { 0, 0, 0, 0, 0 };
	int iLocal_2251[5] = { 0, 0, 0, 0, 0 };
	int iLocal_2257[5] = { 0, 0, 0, 0, 0 };
	int iLocal_2263[5] = { 0, 0, 0, 0, 0 };
	int iLocal_2269[7] = { 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_2277 = 0;
	float fLocal_2278 = 0f;
	float fLocal_2279 = 0f;
	float fLocal_2280 = 0f;
	float fLocal_2281 = 0f;
	float fLocal_2282 = 0f;
	float fLocal_2283 = 0f;
	float fLocal_2284 = 0f;
	float fLocal_2285 = 0f;
	float fLocal_2286[5] = { 0f, 0f, 0f, 0f, 0f };
	int iLocal_2292 = 0;
	int iLocal_2293 = 0;
	int iLocal_2294 = 0;
	int iLocal_2295 = 0;
	int iLocal_2296 = 0;
	int iLocal_2297 = 0;
	int iLocal_2298 = 0;
	int iLocal_2299 = 0;
	int iLocal_2300 = 0;
	int iLocal_2301 = 0;
	int iLocal_2302 = 0;
	int iLocal_2303 = 0;
	int iLocal_2304 = 0;
	int iLocal_2305 = 0;
	int iLocal_2306 = 0;
	int iLocal_2307 = 0;
	char* sLocal_2308 = NULL;
	char* sLocal_2309 = NULL;
	char* sLocal_2310 = NULL;
	char* sLocal_2311 = NULL;
	struct<3> Local_2312 = { 0, 0, 0 } ;
	var uLocal_2315 = 0;
	var uLocal_2316 = 0;
	var uLocal_2317 = 0;
	char cLocal_2318[48] = "";
	struct<6> Local_2324 = { 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_2330 = { 0, 0, 0 } ;
	struct<3> Local_2333 = { 0, 0, 0 } ;
	struct<3> Local_2336 = { 0, 0, 0 } ;
	struct<3> Local_2339 = { 0, 0, 0 } ;
	struct<3> Local_2342 = { 0, 0, 0 } ;
	float fLocal_2345 = 0f;
	struct<3> Local_2346 = { 0, 0, 0 } ;
	float fLocal_2349 = 0f;
	struct<3> Local_2350 = { 0, 0, 0 } ;
	struct<3> Local_2353 = { 0, 0, 0 } ;
	struct<3> Local_2356 = { 0, 0, 0 } ;
	struct<3> Local_2359 = { 0, 0, 0 } ;
	struct<3> Local_2362 = { 0, 0, 0 } ;
	struct<3> Local_2365[5];
	struct<3> Local_2381 = { 0, 0, 0 } ;
	struct<3> Local_2384 = { 0, 0, 0 } ;
	float fLocal_2387 = 0f;
	struct<3> Local_2388 = { 0, 0, 0 } ;
	float fLocal_2391 = 0f;
	struct<3> Local_2392 = { 0, 0, 0 } ;
	float fLocal_2395 = 0f;
	struct<3> Local_2396 = { 0, 0, 0 } ;
	float fLocal_2399 = 0f;
	struct<3> Local_2400 = { 0, 0, 0 } ;
	struct<3> Local_2403 = { 0, 0, 0 } ;
	struct<3> Local_2406 = { 0, 0, 0 } ;
	struct<3> Local_2409 = { 0, 0, 0 } ;
	struct<3> Local_2412 = { 0, 0, 0 } ;
	struct<3> Local_2415 = { 0, 0, 0 } ;
	struct<3> Local_2418 = { 0, 0, 0 } ;
	struct<3> Local_2421 = { 0, 0, 0 } ;
	float fLocal_2424 = 0f;
	bool bLocal_2425 = 0;
	int iLocal_2426 = 0;
	bool bLocal_2427 = 0;
	int iLocal_2428 = 0;
	int iLocal_2429 = 0;
	int iLocal_2430 = 0;
	int iLocal_2431 = 0;
	int iLocal_2432 = 0;
	int iLocal_2433 = 0;
	int iLocal_2434 = 0;
	int iLocal_2435 = 0;
	int iLocal_2436 = 0;
	int iLocal_2437 = 0;
	int iLocal_2438 = 0;
	int iLocal_2439 = 0;
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
	sLocal_20 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_37 = 3;
	iLocal_84 = 1;
	iLocal_85 = 65;
	iLocal_86 = 49;
	iLocal_87 = 64;
	fLocal_1793 = 1f;
	Local_1808 = { 0f, 40f, 0f };
	iLocal_1815 = -1;
	iLocal_1816 = -1;
	iLocal_1818 = -1;
	fLocal_1820 = 0f;
	fLocal_1821 = 0f;
	fLocal_1933 = 1f;
	iLocal_1944 = -1;
	iLocal_1947 = -1;
	iLocal_1950 = -1;
	uLocal_1957 = GlobalFunc_4946(54);
	iLocal_1958 = joaat("dune");
	iLocal_1959 = WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_sniperrifle"));
	iLocal_1960 = WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("component_at_scope_large"));
	iLocal_1961 = WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("component_at_ar_supp_02"));
	Local_1962 = { -683.8261f, 5840.81f, 16.566f };
	fLocal_2278 = 301.6213f;
	fLocal_2279 = 255.0691f;
	fLocal_2280 = 280.2539f;
	fLocal_2281 = 265.0211f;
	fLocal_2282 = 301.6213f;
	fLocal_2283 = 255.0691f;
	fLocal_2284 = 320.8655f;
	fLocal_2285 = 209.3795f;
	iLocal_2303 = joaat("a_c_deer");
	sLocal_2309 = "HT2AUD";
	sLocal_2310 = "Trevor";
	StringCopy(&Local_2312, "HT_CUT", 24);
	StringCopy(&cLocal_2318, "HT_CUT_1", 24);
	Local_2330 = { -680.2113f, 5848.008f, 16.2569f };
	Local_2333 = { -677.2093f, 5847.636f, 16.3312f };
	Local_2336 = { -623.499f, 5849.976f, 22.071f };
	Local_2339 = { -621.9225f, 5849.997f, 22.1182f };
	Local_2342 = { -607.6183f, 5853.483f, 22.7782f };
	fLocal_2345 = 217.5379f;
	Local_2346 = { -605.165f, 5856.539f, 22.805f };
	fLocal_2349 = 174.8695f;
	Local_2350 = { -585.8595f, 5854.503f, 27.1148f };
	Local_2353 = { -585.6373f, 5857.525f, 27.2106f };
	Local_2356 = { -581.1332f, 5844.765f, 28.262f };
	Local_2359 = { -585.0704f, 5842.928f, 27.9043f };
	Local_2362 = { 0f, 60f, 0f };
	Local_2381 = { -529.062f, 5865.116f, 32.677f };
	Local_2384 = { -572.7f, 5786.51f, 38.37f };
	fLocal_2387 = 90.01f;
	Local_2388 = { -575.36f, 5788.6f, 37.59f };
	fLocal_2391 = -92.72f;
	Local_2392 = { -618.4669f, 5750.458f, 31.4123f };
	fLocal_2395 = 11.9731f;
	Local_2396 = { -659.7115f, 5711.6f, 23.6818f };
	fLocal_2399 = 125.9914f;
	Local_2400 = { -626.5519f, 5824.601f, 23.1475f };
	Local_2403 = { -588.3788f, 5829.897f, 29.0621f };
	Local_2406 = { -578.3123f, 5876.227f, 27.3243f };
	Local_2409 = { -536.2968f, 5860.105f, 32.3228f };
	Local_2412 = { -680.5353f, 5847.873f, 16f };
	Local_2415 = { -686.4902f, 5841.499f, 19f };
	Local_2418 = { -612.2185f, 5843.332f, 25.3576f };
	Local_2421 = { -691.781f, 5835.689f, 15.9653f };
	fLocal_2424 = 318.4915f;
	Local_1966 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_1966);
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		GlobalFunc_10539(1);
		func_518();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_517();
	func_516(0);
	GlobalFunc_5226(26);
	if (GlobalFunc_199())
	{
		Global_68490 = 1;
		iLocal_1956 = 0;
		while (!func_505(&Local_1966))
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_4923(&Local_1966, 0, 0);
		Global_68490 = 0;
	}
	iLocal_2306 = Local_1966.f_28[0];
	while (true)
	{
		RECORDING::_0x208784099002BC30("SF_FG", 0);
		func_488(Local_1966.f_9, 0, 0, 0, 0, 0);
		VEHICLE::SET_DISABLE_RANDOM_TRAINS_THIS_FRAME(1);
		if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
		{
			Local_1799 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if ((iLocal_2027 != 25 && iLocal_2027 != 0) && iLocal_2027 != 2)
			{
				func_467();
				func_460();
			}
			if ((((((iLocal_2027 != 25 && iLocal_2027 != 0) && iLocal_2027 != 18) && iLocal_2027 != 19) && iLocal_2027 != 20) && iLocal_2027 != 21) && iLocal_2027 != 22)
			{
				func_459();
			}
			if (iLocal_2201)
			{
				GlobalFunc_4270();
				if (iLocal_2221)
				{
					func_453(0, 1132920832);
				}
				else
				{
					func_453(1, 100f);
				}
			}
			switch (iLocal_2027)
			{
				case 0:
					func_441();
					break;
				
				case 1:
					func_414();
					break;
				
				case 2:
					func_413();
					break;
				
				case 3:
					func_412();
					break;
				
				case 4:
					func_411();
					break;
				
				case 5:
					func_410();
					break;
				
				case 6:
					func_409();
					break;
				
				case 7:
					func_408();
					break;
				
				case 9:
					func_407();
					break;
				
				case 10:
					func_406();
					break;
				
				case 11:
					func_403();
					break;
				
				case 13:
					func_401();
					break;
				
				case 14:
					func_336();
					break;
				
				case 15:
					func_329();
					break;
				
				case 17:
					func_274();
					break;
				
				case 18:
					func_273();
					break;
				
				case 19:
					func_270();
					break;
				
				case 20:
					func_262();
					break;
				
				case 21:
					func_236();
					break;
				
				case 22:
					func_234();
					break;
				
				case 23:
					func_217();
					break;
				
				case 24:
					func_15();
					break;
				
				case 25:
					func_1();
					break;
			}
			SYSTEM::WAIT(0);
		}
	}
}

void func_1()//Position - 0x5ED
{
	switch (iLocal_2028)
	{
		case 0:
			func_14(Local_94[iLocal_383 /*36*/]);
			if (!iLocal_2209)
			{
				HUD::CLEAR_PRINTS();
				GlobalFunc_635("HT_CALL");
				GlobalFunc_4454("HT_TXTMSG");
				iLocal_2201 = 0;
				func_10();
				if (bLocal_2204)
				{
					iLocal_2295 = MISC::GET_GAME_TIMER() + 3000;
				}
				else
				{
					iLocal_2295 = MISC::GET_GAME_TIMER() + 1700;
				}
				iLocal_2209 = 1;
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_2295 && !GlobalFunc_111())
			{
				if (iLocal_2029 != 14 && iLocal_2029 != 0)
				{
					if (!GlobalFunc_4924(iLocal_2306))
					{
						sLocal_2308 = "HT_FAIL4A";
					}
					if (!GlobalFunc_115(iLocal_2306))
					{
						sLocal_2308 = "HT_FAIL4";
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_94[iLocal_383 /*36*/]))
				{
					if (!GlobalFunc_115(Local_94[iLocal_383 /*36*/]))
					{
						if (iLocal_2032 == 8)
						{
							if (bLocal_2218)
							{
								sLocal_2308 = "HT_WGUN";
								iLocal_2032 = 10;
							}
						}
					}
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_2308))
				{
					GlobalFunc_10539(1);
				}
				else
				{
					GlobalFunc_10811(sLocal_2308, 1);
				}
				iLocal_2028 = 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				func_2();
				func_518();
				SCRIPT::TERMINATE_THIS_THREAD();
			}
			break;
	}
}

void func_2()//Position - 0x710
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2306))
	{
		if (GlobalFunc_115(iLocal_2306))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_2306, 0);
			if (PED::DOES_GROUP_EXIST(GlobalFunc_468()))
			{
				if (PED::IS_PED_GROUP_MEMBER(iLocal_2306, GlobalFunc_468()))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_2306);
				}
			}
		}
	}
	GlobalFunc_69(&iLocal_2306);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		GlobalFunc_69(&(Local_94[iVar0 /*36*/]));
		iVar0++;
	}
	if (CAM::DOES_CAM_EXIST(uLocal_2277))
	{
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		CAM::DESTROY_CAM(uLocal_2277, 0);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("HUNTING_02_SETTINGS"))
	{
		AUDIO::STOP_AUDIO_SCENE("HUNTING_02_SETTINGS");
		AUDIO::STOP_SOUND(iLocal_1818);
		AUDIO::RELEASE_SOUND_ID(iLocal_1818);
	}
	AUDIO::RELEASE_MISSION_AUDIO_BANK();
}








void func_10()//Position - 0x8CD
{
	int iVar0;
	
	GlobalFunc_146(&iLocal_2198);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		GlobalFunc_146(&(Local_94[iVar0 /*36*/].f_1));
		iVar0++;
	}
}




void func_14(int iParam0)//Position - 0x985
{
	struct<3> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, Var0, 20f))
		{
			bLocal_2218 = true;
		}
		if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
			{
				if (!WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0, joaat("weapon_sniperrifle"), 0) && !WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0, joaat("weapon_heavysniper"), 0))
				{
					bLocal_2218 = true;
				}
			}
		}
	}
}

void func_15()//Position - 0x9F5
{
	func_216();
	func_16();
}

void func_16()//Position - 0xA05
{
	HUD::CLEAR_PRINTS();
	GlobalFunc_4935();
	func_17(179, 1);
	func_518();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_17(int iParam0, bool bParam1)//Position - 0xA24
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
	GlobalFunc_2365(&uVar1, GlobalFunc_8310());
	func_45();
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




























void func_45()//Position - 0x1DC9
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
				if (GlobalFunc_10915(iVar1, 14, iVar2))
				{
					func_46(iVar1, 14, iVar2);
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

int func_46(int iParam0, int iParam1, int iParam2)//Position - 0x1E8A
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
	Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar0, iParam1, iParam2) };
	if (!MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!GlobalFunc_10915(iParam0, iParam1, iParam2))
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
				func_46(iParam0, iVar1, uVar2[iVar1]);
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
			if (!func_46(iParam0, 14, uVar20[iVar18]))
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
		Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar0, iParam1, uVar30[iParam1]) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, GlobalFunc_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, 0);
		}
	}
	if (GlobalFunc_11037(iParam0, iVar0, &iVar46, 0))
	{
		GlobalFunc_11274(iParam0, 2, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (GlobalFunc_11035(iParam0, iVar0, &iVar46))
	{
		GlobalFunc_11274(iParam0, 1, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	return 1;
}










































































































































































void func_216()//Position - 0x2535C
{
	if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
}

void func_217()//Position - 0x2537D
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	switch (iLocal_2028)
	{
		case 0:
			func_233();
			func_232();
			GlobalFunc_4935();
			GlobalFunc_4956();
			iLocal_2028 = 1;
			break;
		
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_10();
				if (GlobalFunc_4924(iLocal_2306))
				{
					TASK::CLEAR_PED_TASKS(iLocal_2306);
					GlobalFunc_69(&iLocal_2306);
				}
				if (!GlobalFunc_188())
				{
					GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), Local_2356, fLocal_2281, 0, 1);
					GlobalFunc_8326(Local_2356, 1112014848, 12, 5000, 0, 0);
				}
				func_516(1);
				func_220();
				iLocal_1797 = 0;
				iLocal_2201 = 0;
				iLocal_2028 = 2;
			}
			break;
		
		case 2:
			GlobalFunc_4967(0, -1, 1);
			GlobalFunc_4450();
			func_216();
			iLocal_2301 = MISC::GET_GAME_TIMER() + 3500;
			iLocal_2216 = 1;
			iLocal_2027 = 21;
			break;
	}
}



void func_220()//Position - 0x2552C
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 13)
	{
		iLocal_2225[iVar0] = 0;
		iVar0++;
	}
}












void func_232()//Position - 0x257FB
{
	GlobalFunc_69(&(Local_94[0 /*36*/]));
	GlobalFunc_69(&(Local_94[1 /*36*/]));
	GlobalFunc_69(&(Local_94[2 /*36*/]));
	GlobalFunc_69(&(Local_94[3 /*36*/]));
}

void func_233()//Position - 0x25827
{
	if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(500);
	}
}

void func_234()//Position - 0x25848
{
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	if (GlobalFunc_1993())
	{
		iLocal_2027 = 24;
	}
}


void func_236()//Position - 0x25879
{
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	if (MISC::GET_GAME_TIMER() > iLocal_2301)
	{
		if (GlobalFunc_2791(54) || iLocal_2216)
		{
			if (!iLocal_2215)
			{
				iLocal_2301 = MISC::GET_GAME_TIMER() + 8000;
				iLocal_2215 = 1;
			}
			else if (!iLocal_2214)
			{
				GlobalFunc_10725(54, "HT_TXTMSG", 1, 0, 0, 0, 0, 1, 0, 1);
				iLocal_2301 = MISC::GET_GAME_TIMER() + 10000;
				iLocal_2214 = 1;
			}
			else
			{
				GlobalFunc_173(&uLocal_2033, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
				GlobalFunc_173(&uLocal_2033, 3, 0, "CLETUS", 0, 1);
				if (GlobalFunc_10664(&uLocal_2033, 54, sLocal_2309, "HT2_END", 8, 0, 0, 1))
				{
					GlobalFunc_4454("HT_TXTMSG");
					iLocal_2027 = 22;
				}
			}
		}
		else
		{
			GlobalFunc_159("HT_BADREC", -1);
		}
	}
}


























void func_262()//Position - 0x26F0F
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	if (!GlobalFunc_666())
	{
		if (GlobalFunc_2194(2, Global_14362, 0))
		{
			GlobalFunc_2793(1);
			GlobalFunc_2792(0);
			iLocal_2198 = HUD::ADD_BLIP_FOR_ENTITY(Local_94[4 /*36*/]);
			if (HUD::DOES_BLIP_EXIST(iLocal_2198))
			{
				HUD::SET_BLIP_COLOUR(iLocal_2198, 1);
			}
			Global_16728 = 0;
			func_264("HT_PHOTO");
			iLocal_2027 = 19;
			return;
		}
	}
	if (GlobalFunc_4455())
	{
		if (GlobalFunc_2791(54))
		{
			GlobalFunc_6685(0);
			GlobalFunc_2793(0);
			GlobalFunc_2792(0);
			GlobalFunc_2793(0);
			iLocal_2301 = MISC::GET_GAME_TIMER() + 3000;
			iLocal_2027 = 21;
		}
		else
		{
			GlobalFunc_2793(1);
			GlobalFunc_2792(0);
			iLocal_2198 = HUD::ADD_BLIP_FOR_ENTITY(Local_94[4 /*36*/]);
			if (HUD::DOES_BLIP_EXIST(iLocal_2198))
			{
				HUD::SET_BLIP_COLOUR(iLocal_2198, 1);
			}
			Global_16728 = 0;
			func_264("HT_PHOTO");
			GlobalFunc_159("HT_BADREC", -1);
			iLocal_2027 = 19;
		}
	}
}


void func_264(char* sParam0)//Position - 0x2700A
{
	GlobalFunc_164(sParam0, 7500, 0);
}






void func_270()//Position - 0x27109
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	if (ENTITY::DOES_ENTITY_EXIST(Local_94[4 /*36*/]))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(Local_94[4 /*36*/], 0) };
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0, 0) < 40f)
	{
		Local_675.f_670 = CAM::GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR();
		if (GlobalFunc_2796())
		{
			fVar3 = SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			if (GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var0, &fVar4, &fVar5))
			{
				if ((((fVar4 > 0.1f && fVar4 < 0.9f) && fVar5 > 0.1f) && fVar5 < 0.9f) && fVar3 < ((100f * Local_675.f_670) * Local_675.f_670))
				{
					GlobalFunc_2792(1);
					GlobalFunc_2793(1);
					if (GlobalFunc_74("HT_NOGOOD"))
					{
						HUD::CLEAR_PRINTS();
					}
					TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					GlobalFunc_146(&iLocal_2198);
					func_264("HT_SENDPIC");
					iLocal_2027 = 20;
				}
				else
				{
					GlobalFunc_159("HT_NOGOOD", -1);
				}
			}
			else
			{
				GlobalFunc_159("HT_NOGOOD", -1);
			}
		}
	}
	else
	{
		GlobalFunc_2793(0);
		func_264("HT_RETURN");
		iLocal_2027 = 18;
	}
}



void func_273()//Position - 0x27260
{
	struct<3> Var0;
	
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.25f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	if (ENTITY::DOES_ENTITY_EXIST(Local_94[4 /*36*/]))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(Local_94[4 /*36*/], 0) };
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0, 0) < 5f)
	{
		Local_675.f_670 = CAM::GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR();
		GlobalFunc_2792(0);
		GlobalFunc_2793(1);
		func_264("HT_PHOTO");
		iLocal_2027 = 19;
	}
}

void func_274()//Position - 0x272C9
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	func_328();
	if (iLocal_2028 != 2)
	{
		func_283(4);
	}
	switch (iLocal_2028)
	{
		case 1:
			if (!Local_94[4 /*36*/].f_9)
			{
				if (!GlobalFunc_4924(Local_94[4 /*36*/]))
				{
					GlobalFunc_635("HT_OBJ");
					func_10();
					func_14(Local_94[4 /*36*/]);
					iLocal_1797 = 0;
					if (!bLocal_2218)
					{
						RECORDING::_0x293220DA1B46CEBC(2f, 5f, 4);
						iLocal_2301 = MISC::GET_GAME_TIMER() + 1700;
						iLocal_2028 = 2;
					}
					else
					{
						func_281(10);
					}
				}
				else if (!iLocal_2245[4])
				{
					if (HUD::DOES_BLIP_EXIST(Local_94[4 /*36*/].f_1))
					{
						func_264("HT_OBJ");
						iLocal_2245[4] = 1;
					}
				}
				else if (!iLocal_2269[2])
				{
					if (!GlobalFunc_663("HT_OBJ", 0, 0))
					{
						func_278(2);
						iLocal_2221 = 1;
					}
				}
			}
			else
			{
				func_14(Local_94[4 /*36*/]);
				if (bLocal_2218)
				{
					func_281(10);
				}
				else
				{
					GlobalFunc_553(770);
					func_275(func_276(4));
					func_281(iLocal_2032);
				}
			}
			break;
		
		case 2:
			if (MISC::GET_GAME_TIMER() > iLocal_2301)
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_94[4 /*36*/], 1, 1);
				iLocal_2198 = HUD::ADD_BLIP_FOR_ENTITY(Local_94[4 /*36*/]);
				if (HUD::DOES_BLIP_EXIST(iLocal_2198))
				{
					HUD::SET_BLIP_COLOUR(iLocal_2198, 1);
				}
				iLocal_2201 = 0;
				func_264("HT_APP");
				iLocal_2027 = 18;
			}
			break;
	}
}

void func_275(int iParam0)//Position - 0x27420
{
	switch (iParam0)
	{
		case 0:
			iLocal_2032 = 0;
			break;
		
		case 1:
			iLocal_2032 = 1;
			break;
		
		case 2:
			iLocal_2032 = 3;
			break;
		
		case 3:
			iLocal_2032 = 2;
			break;
		
		case 4:
			iLocal_2032 = 1;
			break;
		
		case 5:
			iLocal_2032 = 8;
			break;
	}
	bLocal_2204 = true;
}

int func_276(int iParam0)//Position - 0x27482
{
	return Local_94[iParam0 /*36*/].f_14;
}


void func_278(int iParam0)//Position - 0x27503
{
	switch (iParam0)
	{
		case 0:
			GlobalFunc_159("HT_WIND", -1);
			break;
		
		case 1:
			GlobalFunc_159("HT_DUCK", -1);
			break;
		
		case 2:
			GlobalFunc_159("HT_CHANGE", -1);
			break;
		
		case 3:
			GlobalFunc_1("HT_CALL");
			break;
		
		case 4:
			GlobalFunc_1("HT_CALL");
			break;
		
		case 5:
			GlobalFunc_1("HT_CALL");
			break;
		
		case 6:
			GlobalFunc_159("HT_MALE", -1);
			break;
	}
	if (!iLocal_2269[iParam0])
	{
		iLocal_2269[iParam0] = 1;
	}
}



void func_281(int iParam0)//Position - 0x275D1
{
	GlobalFunc_4935();
	HUD::CLEAR_PRINTS();
	func_282();
	func_10();
	if (iLocal_2027 >= 17)
	{
		iLocal_383 = 4;
	}
	else if (iLocal_2027 >= 13)
	{
		iLocal_383 = 2;
	}
	else if (iLocal_2027 >= 9)
	{
		iLocal_383 = 1;
	}
	else if (iLocal_2027 >= 5)
	{
		iLocal_383 = 0;
	}
	if (iLocal_2029 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2306))
		{
			if (!GlobalFunc_4924(iLocal_2306))
			{
				iParam0 = 5;
			}
			if (!GlobalFunc_115(iLocal_2306))
			{
				iParam0 = 4;
			}
		}
	}
	if (!GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		iParam0 = 0;
	}
	switch (iParam0)
	{
		case 1:
			sLocal_2308 = "HT_FAIL2";
			break;
		
		case 2:
			sLocal_2308 = "HT_FAIL1A";
			break;
		
		case 3:
			sLocal_2308 = "HT_FAIL3";
			break;
		
		case 4:
			sLocal_2308 = "HT_FAIL4";
			break;
		
		case 5:
			sLocal_2308 = "HT_FAIL4A";
			break;
		
		case 6:
			sLocal_2308 = "HT_FAIL5";
			break;
		
		case 7:
			sLocal_2308 = "HH_FAIL6";
			break;
		
		case 8:
			sLocal_2308 = "HT_MISS";
			break;
		
		case 10:
			sLocal_2308 = "HT_WGUN";
			break;
		
		case 9:
			sLocal_2308 = "HH_FAILCAR";
			break;
		
		case 15:
			sLocal_2308 = "HH_FAILCARA";
			break;
		
		case 11:
			sLocal_2308 = "HT_DOE";
			break;
		
		case 13:
			sLocal_2308 = "HT_INNOCENT";
			break;
		
		case 14:
			sLocal_2308 = "HH_FAIL6A";
			break;
		
		case 0:
			break;
	}
	iLocal_2028 = 0;
	iLocal_2027 = 25;
}

void func_282()//Position - 0x27753
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("HUNTING_02_SETTINGS"))
	{
		AUDIO::STOP_AUDIO_SCENE("HUNTING_02_SETTINGS");
		AUDIO::STOP_SOUND(iLocal_1818);
		AUDIO::RELEASE_SOUND_ID(iLocal_1818);
		iLocal_1818 = -1;
	}
}

void func_283(int iParam0)//Position - 0x2777E
{
	float fVar0;
	struct<3> Var1;
	int iVar4;
	var uVar5;
	struct<3> Var6;
	var uVar9;
	var uVar10;
	var uVar11;
	float fVar12;
	struct<3> Var13;
	
	if (Local_94[iParam0 /*36*/].f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_94[iParam0 /*36*/]) && ENTITY::IS_ENTITY_DEAD(Local_94[iParam0 /*36*/]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_94[iParam0 /*36*/], PLAYER::PLAYER_PED_ID(), 1))
			{
				iLocal_1822 = 1;
			}
		}
	}
	else
	{
		func_319(iParam0);
		func_318(iParam0);
		func_313(&(Local_94[iParam0 /*36*/]), iParam0);
		if (bLocal_1791)
		{
			fVar0 = 9999.9f;
			if (ENTITY::DOES_ENTITY_EXIST(Local_94[iParam0 /*36*/]))
			{
				if (!PED::IS_PED_INJURED(Local_94[iParam0 /*36*/]))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						Var1 = { ENTITY::GET_ENTITY_COORDS(Local_94[iParam0 /*36*/], 1) };
						fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_1799, Var1, 1);
						if (fVar0 > 250f)
						{
							if (!CAM::IS_SPHERE_VISIBLE(Var1, 2f) || CAM::IS_SCREEN_FADED_OUT())
							{
								Local_94[iParam0 /*36*/].f_16 = 16;
							}
						}
					}
				}
			}
		}
	}
	if (Local_94[iParam0 /*36*/].f_29)
	{
		Local_94[iParam0 /*36*/].f_16 = Local_94[Local_94[iParam0 /*36*/].f_30 /*36*/].f_16;
		return;
	}
	switch (Local_94[iParam0 /*36*/].f_16)
	{
		case 0:
			break;
		
		case 1:
			if (bLocal_1791)
			{
				if (iLocal_1807 < 8 && !bLocal_1803)
				{
					if (!Local_94[iParam0 /*36*/].f_35)
					{
						Local_94[iParam0 /*36*/].f_16 = 2;
					}
					else if (MISC::GET_GAME_TIMER() > Local_94[iParam0 /*36*/].f_34)
					{
						Local_94[iParam0 /*36*/].f_16 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (func_307(iParam0, 8, 1, 1))
			{
				if (bLocal_1791 && !func_306(Local_94[iParam0 /*36*/]))
				{
					if (!func_305())
					{
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 100)
						{
							Local_94[iParam0 /*36*/].f_16 = 3;
							func_298(iParam0);
						}
					}
				}
			}
			break;
		
		case 3:
			if (!Local_94[iParam0 /*36*/].f_9)
			{
				iVar4 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 3);
				TASK::OPEN_SEQUENCE_TASK(&uVar5);
				TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@enter", "enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
				if (iVar4 == 0)
				{
					TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@idle_a", "idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				}
				else if (iVar4 == 1)
				{
					TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@idle_a", "idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
				}
				else
				{
					TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@idle_a", "idle_c", 8f, -8f, -1, 1, 0, 0, 0, 0);
				}
				TASK::CLOSE_SEQUENCE_TASK(uVar5);
				TASK::TASK_PERFORM_SEQUENCE(Local_94[iParam0 /*36*/], uVar5);
				TASK::CLEAR_SEQUENCE_TASK(&uVar5);
				Local_94[iParam0 /*36*/].f_23 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(15000, 25000));
				Local_94[iParam0 /*36*/].f_16 = 4;
			}
			else
			{
				Local_94[iParam0 /*36*/].f_16 = 14;
			}
			break;
		
		case 4:
			if (func_297(iParam0))
			{
				if (!Local_94[iParam0 /*36*/].f_9)
				{
					Var6 = { ENTITY::GET_ENTITY_COORDS(Local_94[iParam0 /*36*/], 1) };
					if ((MISC::GET_GAME_TIMER() > Local_94[iParam0 /*36*/].f_23 && func_294(Var6)) && SYSTEM::VDIST2(Var6, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 10000f)
					{
						TASK::OPEN_SEQUENCE_TASK(&uVar9);
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_94[iParam0 /*36*/], 242628503) == 1)
						{
							TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@exit", "exit", 4f, -8f, -1, 0, 0, 0, 0, 0);
						}
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4200, 0, 2);
						TASK::CLOSE_SEQUENCE_TASK(uVar9);
						TASK::TASK_PERFORM_SEQUENCE(Local_94[iParam0 /*36*/], uVar9);
						TASK::CLEAR_SEQUENCE_TASK(&uVar9);
						Local_94[iParam0 /*36*/].f_23 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1500, 3000));
						Local_94[iParam0 /*36*/].f_16 = 5;
					}
				}
				else
				{
					Local_94[iParam0 /*36*/].f_16 = 14;
				}
			}
			else
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_PAIN_MASTER", Local_94[iParam0 /*36*/], 0, 0, 0);
				Local_94[iParam0 /*36*/].f_16 = 16;
			}
			break;
		
		case 5:
			if (func_297(iParam0))
			{
				if (!Local_94[iParam0 /*36*/].f_9)
				{
					if (MISC::GET_GAME_TIMER() > Local_94[iParam0 /*36*/].f_23)
					{
						Local_94[iParam0 /*36*/].f_16 = 6;
					}
				}
				else
				{
					Local_94[iParam0 /*36*/].f_16 = 14;
				}
			}
			else
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_PAIN_MASTER", Local_94[iParam0 /*36*/], 0, 0, 0);
				Local_94[iParam0 /*36*/].f_16 = 16;
			}
			break;
		
		case 6:
			if (func_297(iParam0))
			{
				if (!Local_94[iParam0 /*36*/].f_9)
				{
					iLocal_1811 = MISC::GET_RANDOM_INT_IN_RANGE(0, 58);
					if (func_292(iParam0, iLocal_1811))
					{
						Local_94[iParam0 /*36*/].f_27 = iLocal_1811;
					}
					else
					{
						Local_94[iParam0 /*36*/].f_27 = func_291(iParam0);
					}
					Local_384[Local_94[iParam0 /*36*/].f_25 /*5*/].f_3 = 0;
					if (bLocal_1791)
					{
						Local_384[Local_94[iParam0 /*36*/].f_27 /*5*/].f_3 = 1;
					}
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_94[iParam0 /*36*/], Local_384[Local_94[iParam0 /*36*/].f_27 /*5*/], 1f, -1, 0.25f, 0, 40000f);
					Local_94[iParam0 /*36*/].f_26 = Local_94[iParam0 /*36*/].f_25;
					Local_94[iParam0 /*36*/].f_16 = 7;
				}
				else
				{
					Local_94[iParam0 /*36*/].f_16 = 14;
				}
			}
			else
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_PAIN_MASTER", Local_94[iParam0 /*36*/], 0, 0, 0);
				Local_94[iParam0 /*36*/].f_16 = 16;
			}
			break;
		
		case 7:
			if (func_297(iParam0))
			{
				if (!Local_94[iParam0 /*36*/].f_9)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(Local_94[iParam0 /*36*/], Local_384[Local_94[iParam0 /*36*/].f_27 /*5*/], 3f, 3f, 3f, 0, 0, 0))
					{
						Local_94[iParam0 /*36*/].f_25 = Local_94[iParam0 /*36*/].f_27;
						TASK::CLEAR_PED_TASKS(Local_94[iParam0 /*36*/]);
						Local_94[iParam0 /*36*/].f_23 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1500, 3000));
						Local_94[iParam0 /*36*/].f_16 = 8;
					}
				}
				else
				{
					Local_94[iParam0 /*36*/].f_16 = 14;
				}
			}
			else
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_PAIN_MASTER", Local_94[iParam0 /*36*/], 0, 0, 0);
				Local_94[iParam0 /*36*/].f_16 = 16;
			}
			break;
		
		case 9:
			if (func_297(iParam0))
			{
				if (!Local_94[iParam0 /*36*/].f_9)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(Local_94[iParam0 /*36*/], Local_384[Local_94[iParam0 /*36*/].f_27 /*5*/], 3f, 3f, 3f, 0, 0, 0))
					{
						Local_94[iParam0 /*36*/].f_25 = Local_94[iParam0 /*36*/].f_27;
						TASK::CLEAR_PED_TASKS(Local_94[iParam0 /*36*/]);
						Local_94[iParam0 /*36*/].f_23 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1500, 3000));
						Local_94[iParam0 /*36*/].f_16 = 10;
					}
				}
				else
				{
					Local_94[iParam0 /*36*/].f_16 = 14;
				}
			}
			else
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_PAIN_MASTER", Local_94[iParam0 /*36*/], 0, 0, 0);
				Local_94[iParam0 /*36*/].f_16 = 16;
			}
			break;
		
		case 8:
			if (func_297(iParam0))
			{
				if (!Local_94[iParam0 /*36*/].f_9)
				{
					if (MISC::GET_GAME_TIMER() > Local_94[iParam0 /*36*/].f_23)
					{
						Local_94[iParam0 /*36*/].f_16 = 3;
					}
				}
				else
				{
					Local_94[iParam0 /*36*/].f_16 = 14;
				}
			}
			else
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_PAIN_MASTER", Local_94[iParam0 /*36*/], 0, 0, 0);
				Local_94[iParam0 /*36*/].f_16 = 16;
			}
			break;
		
		case 14:
			if (bLocal_1803)
			{
				GlobalFunc_146(&(Local_94[iParam0 /*36*/].f_1));
			}
			if (func_297(iParam0))
			{
				func_286(&(Local_94[iParam0 /*36*/]));
				TASK::CLEAR_PED_TASKS(Local_94[iParam0 /*36*/]);
				TASK::TASK_SMART_FLEE_PED(Local_94[iParam0 /*36*/], PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
				PED::SET_PED_KEEP_TASK(Local_94[iParam0 /*36*/], 1);
				Local_94[iParam0 /*36*/].f_16 = 15;
			}
			else
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_PAIN_MASTER", Local_94[iParam0 /*36*/], 0, 0, 0);
				Local_94[iParam0 /*36*/].f_16 = 16;
			}
			break;
		
		case 10:
			if (func_297(iParam0))
			{
				if (!Local_94[iParam0 /*36*/].f_9)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_94[iParam0 /*36*/], 242628503) == 7 || TASK::GET_SCRIPT_TASK_STATUS(Local_94[iParam0 /*36*/], 242628503) != 1)
					{
						TASK::OPEN_SEQUENCE_TASK(&uVar10);
						TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@enter", "enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@base", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
						if (GlobalFunc_745())
						{
							TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@idle_a", "idle_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@base", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						if (GlobalFunc_745())
						{
							TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@idle_a", "idle_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						else
						{
							TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@idle_a", "idle_c", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@base", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@exit", "exit", 8f, -4f, -1, 0, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar10);
						TASK::TASK_PERFORM_SEQUENCE(Local_94[iParam0 /*36*/], uVar10);
						TASK::CLEAR_SEQUENCE_TASK(&uVar10);
						Local_94[iParam0 /*36*/].f_24 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000));
						Local_94[iParam0 /*36*/].f_16 = 11;
					}
				}
				else
				{
					Local_94[iParam0 /*36*/].f_16 = 14;
				}
			}
			else
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_PAIN_MASTER", Local_94[iParam0 /*36*/], 0, 0, 0);
				Local_94[iParam0 /*36*/].f_16 = 16;
			}
			break;
		
		case 11:
			if (func_297(iParam0))
			{
				if (!Local_94[iParam0 /*36*/].f_9)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_94[iParam0 /*36*/], 242628503) == 7 || TASK::GET_SCRIPT_TASK_STATUS(Local_94[iParam0 /*36*/], 242628503) != 1)
					{
						if (MISC::GET_GAME_TIMER() > Local_94[iParam0 /*36*/].f_24)
						{
							TASK::OPEN_SEQUENCE_TASK(&uVar11);
							TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@enter", "enter", 16f, -8f, -1, 0, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@base", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
							if (GlobalFunc_745())
							{
								TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@base", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
								TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@idle_a", "idle_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
							}
							TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@exit", "exit", 8f, -4f, -1, 0, 0, 0, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uVar11);
							TASK::TASK_PERFORM_SEQUENCE(Local_94[iParam0 /*36*/], uVar11);
							TASK::CLEAR_SEQUENCE_TASK(&uVar11);
							Local_94[iParam0 /*36*/].f_16 = 10;
						}
					}
				}
				else
				{
					Local_94[iParam0 /*36*/].f_16 = 14;
				}
			}
			else
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_PAIN_MASTER", Local_94[iParam0 /*36*/], 0, 0, 0);
				Local_94[iParam0 /*36*/].f_16 = 16;
			}
			break;
		
		case 15:
			if (func_297(iParam0) && GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
			{
				Var13 = { ENTITY::GET_ENTITY_COORDS(Local_94[iParam0 /*36*/], 0) };
				fVar12 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var13, 1);
				if (fVar12 > 70f && !CAM::IS_SPHERE_VISIBLE(Var13, 5f))
				{
					Local_94[iParam0 /*36*/].f_16 = 16;
				}
			}
			else
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_PAIN_MASTER", Local_94[iParam0 /*36*/], 0, 0, 0);
				Local_94[iParam0 /*36*/].f_16 = 16;
			}
			break;
		
		case 16:
			GlobalFunc_146(&(Local_94[iParam0 /*36*/].f_1));
			Local_384[Local_94[iParam0 /*36*/].f_25 /*5*/].f_3 = 0;
			Local_384[Local_94[iParam0 /*36*/].f_27 /*5*/].f_3 = 0;
			Local_384[Local_94[iParam0 /*36*/].f_25 /*5*/].f_4 = (MISC::GET_GAME_TIMER() + 40000);
			Local_384[Local_94[iParam0 /*36*/].f_27 /*5*/].f_4 = (MISC::GET_GAME_TIMER() + 40000);
			if (ENTITY::DOES_ENTITY_EXIST(Local_94[iParam0 /*36*/]))
			{
				if (DECORATOR::DECOR_EXIST_ON(Local_94[iParam0 /*36*/], "doe_elk"))
				{
					iLocal_1806 = (iLocal_1806 - 1);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_94[iParam0 /*36*/]));
			}
			if (iLocal_1816 == iParam0)
			{
				iLocal_1816 = -1;
				iLocal_1817 = 0;
			}
			iLocal_1807 = (iLocal_1807 - 1);
			Local_94[iParam0 /*36*/].f_34 = MISC::GET_GAME_TIMER() + 1000;
			Local_94[iParam0 /*36*/].f_35 = 1;
			Local_94[iParam0 /*36*/].f_29 = 0;
			Local_94[iParam0 /*36*/].f_28 = 0;
			func_284(iParam0, 0);
			Local_94[iParam0 /*36*/].f_13 = 0;
			Local_94[iParam0 /*36*/].f_30 = -1;
			Local_94[iParam0 /*36*/].f_6 = 0;
			Local_94[iParam0 /*36*/].f_16 = 1;
			break;
	}
}

void func_284(int iParam0, int iParam1)//Position - 0x28322
{
	if (iParam0 < 0 || iParam0 >= 8)
	{
		return;
	}
	Local_94[iParam0 /*36*/].f_9 = iParam1;
}


void func_286(var uParam0)//Position - 0x2836A
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_1))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_1));
	}
	if (!uParam0->f_13)
	{
		func_287(&(uParam0->f_1), *uParam0, 1, 0.7f);
		HUD::SET_BLIP_ALPHA(uParam0->f_1, 128);
		HUD::SET_BLIP_SHOW_CONE(uParam0->f_1, 1);
	}
	uParam0->f_9 = 1;
}

void func_287(var uParam0, int iParam1, bool bParam2, float fParam3)//Position - 0x283B6
{
	if (!HUD::DOES_BLIP_EXIST(*uParam0))
	{
		if (GlobalFunc_4924(iParam1))
		{
			*uParam0 = func_288(iParam1, bParam2, 145);
			HUD::SET_BLIP_SCALE(*uParam0, fParam3);
		}
	}
}

int func_288(int iParam0, bool bParam1, int iParam2)//Position - 0x283E8
{
	var uVar0;
	
	uVar0 = GlobalFunc_5976(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(uVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam2 /*29*/].f_3));
	}
	return iVar0;
}



int func_291(int iParam0)//Position - 0x284F5
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	fVar1 = 10000f;
	iVar2 = 0;
	iVar3 = 0;
	iVar2 = 0;
	while (iVar2 < 58)
	{
		if ((iVar2 != Local_94[iParam0 /*36*/].f_25 && iVar2 != Local_94[iParam0 /*36*/].f_26) && !Local_384[iVar2 /*5*/].f_3)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_384[Local_94[iParam0 /*36*/].f_25 /*5*/], Local_384[iVar2 /*5*/], 0);
			if (fVar0 < fVar1)
			{
				fVar1 = fVar0;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	return iVar3;
}

int func_292(int iParam0, int iParam1)//Position - 0x2857E
{
	if (bLocal_1791 == 0)
	{
		return 0;
	}
	if (((iParam1 == Local_94[iParam0 /*36*/].f_25 || iParam1 == Local_94[iParam0 /*36*/].f_26) || Local_384[iParam1 /*5*/].f_3) || GlobalFunc_713(Local_94[iParam0 /*36*/], Local_384[iParam1 /*5*/], 1) > 50f)
	{
		return 0;
	}
	return 1;
}


int func_294(struct<3> Param0)//Position - 0x2861D
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()) };
	Var0.f_2 = 0f;
	Var3 = { Param0 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	Var3 = { GlobalFunc_107(Var3) };
	fVar6 = GlobalFunc_880(Var0, Var3);
	if (fVar6 > 0.1f)
	{
		return 1;
	}
	return 0;
}



bool func_297(int iParam0)//Position - 0x286C8
{
	return (ENTITY::DOES_ENTITY_EXIST(Local_94[iParam0 /*36*/]) && !ENTITY::IS_ENTITY_DEAD(Local_94[iParam0 /*36*/]));
}

void func_298(int iParam0)//Position - 0x286EA
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 3;
	while (iVar1 < 8 && iVar0 < 3)
	{
		if (!func_297(iVar1))
		{
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 50)
			{
				func_299(iVar1, iParam0);
				iVar0++;
				Local_94[iParam0 /*36*/].f_31++;
			}
		}
		iVar1++;
	}
}

int func_299(int iParam0, int iParam1)//Position - 0x28749
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	int iVar7;
	
	if (GlobalFunc_4924(Local_94[iParam1 /*36*/]))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(Local_94[iParam1 /*36*/], 1) };
		fVar6 = ENTITY::GET_ENTITY_HEADING(Local_94[iParam1 /*36*/]);
		switch (iParam0)
		{
			case 3:
				Var0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-3f, -2f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-2f, -2f), 0f };
				break;
			
			case 4:
				Var0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(3f, 2f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-2f, -2f), 0f };
				break;
			
			case 5:
				Var0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-2f, 2f), MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 3f), 0f };
				break;
			
			case 6:
				Var0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-2f, 2f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-3f, -2f), 0f };
				break;
		}
		Local_94[iParam0 /*36*/].f_17 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var3, fVar6, Var0) };
		GlobalFunc_4409(&(Local_94[iParam0 /*36*/].f_17), 0);
		Local_94[iParam0 /*36*/].f_32 = (fVar6 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-30f, 30f));
		Local_94[iParam0 /*36*/].f_25 = Local_94[iParam1 /*36*/].f_25;
		func_284(iParam0, 0);
		Local_94[iParam0 /*36*/].f_29 = 1;
		Local_94[iParam0 /*36*/].f_30 = iParam1;
		Local_94[iParam1 /*36*/].f_28 = 1;
		while (Local_94[iParam0 /*36*/].f_32 < -180f)
		{
			Local_94[iParam0 /*36*/].f_32 = (Local_94[iParam0 /*36*/].f_32 + 360f);
		}
		while (Local_94[iParam0 /*36*/].f_32 > 180f)
		{
			Local_94[iParam0 /*36*/].f_32 = (Local_94[iParam0 /*36*/].f_32 - 360f);
		}
		iVar7 = 0;
		if (Local_94[iParam1 /*36*/].f_31 != 0)
		{
			iVar7 = 1;
		}
		if (func_301(&(Local_94[iParam0 /*36*/]), Local_94[iParam0 /*36*/].f_17, Local_94[iParam0 /*36*/].f_32, Local_94[iParam0 /*36*/].f_15, 0, iVar7))
		{
			func_300(&(Local_94[iParam0 /*36*/]), 4, 1);
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_94[iParam0 /*36*/], Local_94[iParam1 /*36*/], Var0, 1f, -1, 1036831949, 1);
			return 1;
		}
		return 0;
	}
	return 0;
}

void func_300(var uParam0, int iParam1, int iParam2)//Position - 0x28943
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 0, 0);
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 1, 0);
		ENTITY::SET_ENTITY_HEALTH(*uParam0, 100);
		PED::SET_PED_BLOCKS_PATHING_WHEN_DEAD(*uParam0, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iLocal_93);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_93, 1862763509);
		PED::SET_PED_SEEING_RANGE(*uParam0, 20f);
		PED::SET_PED_HEARING_RANGE(*uParam0, 10f);
		ENTITY::SET_ENTITY_LOD_DIST(*uParam0, 1500);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 1);
		PED::SET_PED_LOD_MULTIPLIER(*uParam0, 5f);
		PED::SET_PED_CAN_BE_TARGETTED(*uParam0, 0);
		uParam0->f_31 = 0;
		uParam0->f_8 = 1;
		uParam0->f_12 = 0;
		uParam0->f_11 = iParam2;
		uParam0->f_9 = 0;
		if (bLocal_1791 && !uParam0->f_29)
		{
			Local_384[uParam0->f_25 /*5*/].f_3 = 1;
			Local_384[uParam0->f_25 /*5*/].f_4 = (MISC::GET_GAME_TIMER() + 40000);
		}
		iLocal_1822 = 0;
		iLocal_1807++;
		uParam0->f_16 = iParam1;
	}
}

int func_301(var uParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6, int iParam7)//Position - 0x28A2B
{
	if (func_302(uParam0, iParam5, Param1, uParam4, bParam6, 0, iParam7))
	{
		if (GlobalFunc_4924(*uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_302(var uParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6, bool bParam7, var uParam8)//Position - 0x28A58
{
	bool bVar0;
	float fVar1;
	
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (func_303(iParam1))
		{
			*uParam0 = PED::CREATE_PED(26, iParam1, Param2, uParam5, 1, 1);
			if (!bParam7)
			{
				if (iParam1 == joaat("a_c_deer"))
				{
					bVar0 = true;
					if (iLocal_1806 < 3 || uParam8)
					{
						fVar1 = 50f;
						if (iLocal_1807 != 0)
						{
							fVar1 = (SYSTEM::TO_FLOAT(iLocal_1806) / SYSTEM::TO_FLOAT(iLocal_1807));
							fVar1 = (fVar1 * 75f);
						}
						if (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 100)) > fVar1 || uParam8)
						{
							PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, 0, 0, 0);
							DECORATOR::DECOR_SET_BOOL(*uParam0, "doe_elk", 1);
							bVar0 = false;
							iLocal_1806++;
						}
					}
					if (bVar0)
					{
						PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, 1, 0, 0);
						if (DECORATOR::DECOR_EXIST_ON(*uParam0, "doe_elk"))
						{
							DECORATOR::DECOR_REMOVE(*uParam0, "doe_elk");
						}
					}
					PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(0, 3), 0);
				}
				else if (iParam1 == joaat("a_c_mtlion"))
				{
					PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(0, 3), 0);
				}
				else if (iParam1 == joaat("a_c_boar"))
				{
					PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(0, 4), 0);
				}
				ENTITY::SET_ENTITY_LOD_DIST(*uParam0, 1500);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 1);
				PED::SET_PED_LOD_MULTIPLIER(*uParam0, 5f);
			}
			if (bParam6)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				PED::SET_PED_CAN_BE_TARGETTED(*uParam0, 0);
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_303(int iParam0)//Position - 0x28BCC
{
	STREAMING::REQUEST_MODEL(iParam0);
	if (STREAMING::HAS_MODEL_LOADED(iParam0))
	{
		return 1;
	}
	return 0;
}


int func_305()//Position - 0x28C16
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (func_297(iVar0))
		{
			if (Local_94[iVar0 /*36*/].f_29)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_306(int iParam0)//Position - 0x28C4A
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "doe_elk"))
		{
			return DECORATOR::DECOR_GET_BOOL(iParam0, "doe_elk");
		}
	}
	return 0;
}

int func_307(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x28C76
{
	int iVar0;
	struct<3> Var1;
	
	if (iParam2 && bLocal_1791)
	{
		iVar0 = func_310();
		if (iVar0 > 58)
		{
			return 0;
		}
		else
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_384[iVar0 /*5*/]) > 22500f)
			{
				return 0;
			}
			if (MISC::GET_GAME_TIMER() < Local_384[iVar0 /*5*/].f_4)
			{
				return 0;
			}
			Var1 = { GlobalFunc_6474(Local_384[iVar0 /*5*/], 5f) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var1 + Vector(0f, 0.5f, 0f), &(Var1.f_2));
			Local_94[iParam0 /*36*/].f_17 = { Var1 };
			Local_94[iParam0 /*36*/].f_25 = iVar0;
			func_284(iParam0, 0);
			if (bLocal_1791)
			{
				Local_384[iVar0 /*5*/].f_3 = 1;
			}
		}
	}
	Local_94[iParam0 /*36*/].f_32 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 359.9f);
	if (func_301(&(Local_94[iParam0 /*36*/]), Local_94[iParam0 /*36*/].f_17, Local_94[iParam0 /*36*/].f_32, Local_94[iParam0 /*36*/].f_15, 0, 0))
	{
		func_300(&(Local_94[iParam0 /*36*/]), iParam1, iParam3);
		return 1;
	}
	return 0;
}



int func_310()//Position - 0x28DE3
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	struct<3> Var14;
	float fVar17;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 58);
	if (Local_384[iVar0 /*5*/].f_3)
	{
		return 59;
	}
	if (!GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		return 59;
	}
	if (CAM::IS_SPHERE_VISIBLE(Local_384[iVar0 /*5*/], 4f))
	{
		return 59;
	}
	Var1 = { CAM::GET_GAMEPLAY_CAM_COORD() };
	Var4 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	Var7 = { func_312(0f, 1f, 0f, Var4.f_2) };
	Var10 = { Local_384[iVar0 /*5*/] - Var1 };
	fVar13 = GlobalFunc_168(Var7, Var10);
	if (fVar13 > 0f)
	{
		return 59;
	}
	Var14 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	fVar17 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var14, Local_384[iVar0 /*5*/], 1);
	if (fVar17 > 30f || CAM::IS_SCREEN_FADED_OUT())
	{
		return iVar0;
	}
	return 59;
}


Vector3 func_312(struct<3> Param0, float fParam3)//Position - 0x28ED6
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	fVar3 = SYSTEM::SIN(uParam3);
	fVar4 = SYSTEM::COS(uParam3);
	Var0.x = ((Param0.x * fVar4) - (Param0.f_1 * fVar3));
	Var0.f_1 = ((Param0.x * fVar3) + (Param0.f_1 * fVar4));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

void func_313(var uParam0, int iParam1)//Position - 0x28F1A
{
	struct<3> Var0;
	float fVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	struct<3> Var10;
	int iVar13;
	
	if (!func_297(iParam1))
	{
		if (HUD::DOES_BLIP_EXIST(uParam0->f_1))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_1));
		}
		return;
	}
	if (uParam0->f_9)
	{
		return;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, 1) };
	fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_1799, Var0, 1);
	bVar4 = ENTITY::IS_ENTITY_ON_SCREEN(*uParam0);
	if (!uParam0->f_12)
	{
		bVar5 = true;
		if (((bVar4 && uParam0->f_2 < MISC::GET_GAME_TIMER()) && fVar3 < fLocal_1792) && (iLocal_1816 == iParam1 || iLocal_1816 == -1))
		{
			iLocal_1816 = iParam1;
			iVar6 = func_316(uParam0, Var0, fVar3);
			if (iVar6 == 1)
			{
				bVar5 = false;
			}
		}
		if (bVar4 && !bVar5)
		{
			HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(Var0, &fVar7, &fVar8);
			if ((((fVar7 > 0.3f && fVar7 < 0.7f) && fVar8 > 0.3f) && fVar8 < 0.7f) && fVar3 < fLocal_1792)
			{
				GlobalFunc_146(&(uParam0->f_1));
				func_287(&(uParam0->f_1), *uParam0, 1, 1065353216);
				HUD::SET_BLIP_SHOW_CONE(uParam0->f_1, 1);
				uParam0->f_12 = 1;
				func_314("HUNTING_SPOT_ANIMAL", 0);
				return;
			}
		}
	}
	if (!HUD::DOES_BLIP_EXIST(uParam0->f_1))
	{
		if (((iLocal_1798 && MISC::GET_GAME_TIMER() > iLocal_1942) && !uParam0->f_10) || uParam0->f_10)
		{
			if (uParam0->f_10)
			{
				fVar9 = (fVar3 * 0.5f);
				Var10 = { Var0 };
				uParam0->f_1 = HUD::ADD_BLIP_FOR_RADIUS(Var10, fVar9);
				HUD::SET_BLIP_ALPHA(uParam0->f_1, 100);
				HUD::SET_BLIP_COLOUR(uParam0->f_1, 1);
				HUD::SHOW_HEIGHT_ON_BLIP(uParam0->f_1, 0);
				uParam0->f_5 = MISC::GET_GAME_TIMER() + 4000;
			}
			if ((uParam0->f_8 && MISC::GET_GAME_TIMER() > iLocal_1942) || iLocal_1798)
			{
				if (!uParam0->f_10)
				{
					if (uParam0->f_6 == 0)
					{
						uParam0->f_6 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 11) * 100);
					}
					else if (uParam0->f_6 < MISC::GET_GAME_TIMER())
					{
						uParam0->f_6 = 0;
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_BREY_MASTER", *uParam0, 0, 0, 0);
						uParam0->f_10 = 1;
						iLocal_1813 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(30000, 60000));
					}
				}
			}
		}
	}
	else if (HUD::DOES_BLIP_EXIST(uParam0->f_1))
	{
		if ((iLocal_1798 && MISC::GET_GAME_TIMER() > iLocal_1942) && !uParam0->f_10)
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_BREY_MASTER", *uParam0, 0, 0, 0);
			uParam0->f_10 = 1;
			iLocal_1813 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(30000, 60000));
			return;
		}
		if ((MISC::GET_GAME_TIMER() > uParam0->f_5 && fVar3 > 35f) && uParam0->f_11)
		{
			if (bVar4)
			{
				if ((uParam0->f_2 < MISC::GET_GAME_TIMER() && (iLocal_1816 == iParam1 || iLocal_1816 == -1)) && fVar3 < fLocal_1792)
				{
					iLocal_1816 = iParam1;
					iVar13 = func_316(uParam0, Var0, fVar3);
					if (iVar13 == 1)
					{
						if (uParam0->f_12)
						{
							HUD::SET_BLIP_ALPHA(uParam0->f_1, 255);
						}
						else
						{
							HUD::SET_BLIP_ALPHA(uParam0->f_1, 100);
						}
						uParam0->f_5 = MISC::GET_GAME_TIMER() + 10000;
						return;
					}
					else if (iVar13 == -1)
					{
					}
					else if (iVar13 == 0)
					{
					}
				}
			}
			uParam0->f_3 = HUD::GET_BLIP_ALPHA(uParam0->f_1);
			if (uParam0->f_3 > 0)
			{
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 1000) > 666)
				{
					uParam0->f_3 = (uParam0->f_3 - 1);
					HUD::SET_BLIP_ALPHA(uParam0->f_1, uParam0->f_3);
				}
			}
			else
			{
				HUD::SET_BLIP_SHOW_CONE(uParam0->f_1, 0);
				GlobalFunc_146(&(uParam0->f_1));
				uParam0->f_12 = 0;
				uParam0->f_10 = 0;
				iLocal_1798 = 0;
			}
		}
	}
}

void func_314(char* sParam0, bool bParam1)//Position - 0x292AA
{
	if (!bParam1 && Local_675.f_54 > MISC::GET_GAME_TIMER())
	{
		return;
	}
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(PLAYER::PLAYER_PED_ID(), sParam0, "TREVOR_NORMAL", GlobalFunc_566(3), 0);
	Local_675.f_54 += 8000;
}


int func_316(var uParam0, struct<3> Param1, float fParam4)//Position - 0x294E0
{
	struct<3> Var0;
	int iVar3;
	var uVar4;
	var uVar7;
	var uVar10;
	int iVar11;
	
	if (iLocal_1817 == 0)
	{
		Var0 = { Local_1799 + Vector(0.75f, 0f, 0f) };
		iLocal_1817 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var0, Param1, 1, 0, 7);
	}
	else
	{
		iVar11 = SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_1817, &iVar3, &uVar4, &uVar7, &uVar10);
		if (iVar11 == 2)
		{
			if (iVar3 == 0)
			{
				uParam0->f_2 = (MISC::GET_GAME_TIMER() + func_317(fParam4));
				iLocal_1816 = -1;
				iLocal_1817 = 0;
				return 1;
			}
			else
			{
				uParam0->f_2 = (MISC::GET_GAME_TIMER() + func_317(fParam4));
				iLocal_1816 = -1;
				iLocal_1817 = 0;
				return -1;
			}
		}
		else if (iVar11 == 0)
		{
			iLocal_1816 = -1;
			iLocal_1817 = 0;
			return -1;
		}
	}
	return 0;
}

int func_317(float fParam0)//Position - 0x29581
{
	if (fParam0 > 180f)
	{
		return 3500;
	}
	else if (fParam0 > 120f)
	{
		return 2500;
	}
	else if (fParam0 > 50f)
	{
		return 2000;
	}
	return 1000;
}

void func_318(int iParam0)//Position - 0x295C5
{
	if (!func_297(iParam0))
	{
		return;
	}
	if (!Local_94[iParam0 /*36*/].f_8)
	{
		return;
	}
	if (Local_94[iParam0 /*36*/].f_9)
	{
		return;
	}
	if ((iLocal_1798 && iLocal_1943 + 4000 + 5000 < MISC::GET_GAME_TIMER()) && Local_94[iParam0 /*36*/].f_4 < MISC::GET_GAME_TIMER())
	{
		iLocal_1798 = 0;
		Local_94[iParam0 /*36*/].f_4 = MISC::GET_GAME_TIMER();
		Local_94[iParam0 /*36*/].f_10 = 1;
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_BREY_MASTER", Local_94[iParam0 /*36*/], 0, 0, 0);
		iLocal_1815 = -1;
		iLocal_1813 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(30000, 60000));
	}
	if (iLocal_1813 != -1 && iLocal_1813 < MISC::GET_GAME_TIMER())
	{
		Local_94[iParam0 /*36*/].f_10 = 1;
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_BREY_MASTER", Local_94[iParam0 /*36*/], 0, 0, 0);
		iLocal_1814 = MISC::GET_GAME_TIMER() + 4000;
		iLocal_1815 = iParam0;
		iLocal_1813 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(30000, 60000));
	}
	else if ((iLocal_1815 != -1 && iLocal_1814 < MISC::GET_GAME_TIMER()) && iLocal_1814 != -1)
	{
		if (iParam0 != iLocal_1815)
		{
			Local_94[iParam0 /*36*/].f_4 = MISC::GET_GAME_TIMER();
			Local_94[iParam0 /*36*/].f_10 = 1;
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_BREY_MASTER", Local_94[iParam0 /*36*/], 0, 0, 0);
			iLocal_1814 = MISC::GET_GAME_TIMER() + 4000;
		}
		iLocal_1812 = 1;
	}
}

void func_319(int iParam0)//Position - 0x29715
{
	bool bVar0;
	
	bVar0 = Local_94[iParam0 /*36*/].f_9;
	if (func_297(iParam0) && !Local_94[iParam0 /*36*/].f_9)
	{
		Local_94[iParam0 /*36*/].f_17 = { ENTITY::GET_ENTITY_COORDS(Local_94[iParam0 /*36*/], 0) };
		Local_94[iParam0 /*36*/].f_33 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94[iParam0 /*36*/].f_17, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 0);
		Local_94[iParam0 /*36*/].f_20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_94[iParam0 /*36*/].f_17, fLocal_1787, -Local_1808) };
		if (PED::CAN_PED_SEE_HATED_PED(Local_94[iParam0 /*36*/], PLAYER::PLAYER_PED_ID()))
		{
			if (bLocal_1791)
			{
				GlobalFunc_159("AHT_CROUCH", -1);
			}
			else
			{
				GlobalFunc_159("HT_CROUCH", -1);
				func_327(iParam0);
				Local_94[iParam0 /*36*/].f_14 = 1;
			}
			func_284(iParam0, 1);
		}
		if (Local_94[iParam0 /*36*/].f_33 < 8.25f)
		{
			if (bLocal_1791)
			{
				GlobalFunc_159("AHT_NOTICED", -1);
			}
			else
			{
				GlobalFunc_159("HT_HEARD", -1);
			}
			Local_94[iParam0 /*36*/].f_14 = 2;
			func_284(iParam0, 1);
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_94[iParam0 /*36*/].f_17 + Vector(-45f, 0f, 0f), Local_94[iParam0 /*36*/].f_20 + Vector(45f, 0f, 0f), 10f, 0, 0, 0))
		{
			if (bLocal_1791)
			{
				GlobalFunc_159("AHT_SCENT", -1);
			}
			else
			{
				GlobalFunc_159("HT_SCENT", -1);
			}
			func_327(iParam0);
			Local_94[iParam0 /*36*/].f_14 = 3;
			func_284(iParam0, 1);
		}
		if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), Local_94[iParam0 /*36*/]))
		{
			if (bLocal_1791)
			{
				GlobalFunc_159("AHT_HEARD", -1);
			}
			else
			{
				func_327(iParam0);
				GlobalFunc_159("HT_HEARD", -1);
				Local_94[iParam0 /*36*/].f_14 = 2;
			}
			func_284(iParam0, 1);
		}
		if (func_325(iParam0))
		{
			if (!bLocal_1791)
			{
				func_327(iParam0);
				Local_94[iParam0 /*36*/].f_14 = 4;
			}
			func_284(iParam0, 1);
		}
		if (GlobalFunc_8619(Local_94[iParam0 /*36*/], 1090519040, 1097859072))
		{
			if (!iLocal_1826)
			{
				iLocal_1825 = MISC::GET_GAME_TIMER() + 500;
				iLocal_1826 = 1;
			}
			if (bLocal_1791)
			{
				func_314("HUNTING_MISSED", 0);
				iLocal_1824 = Local_675.f_6;
				func_284(iParam0, 1);
			}
			else
			{
				func_327(iParam0);
				func_284(iParam0, 1);
				Local_94[iParam0 /*36*/].f_14 = 5;
			}
		}
		if (iLocal_1826)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_1825)
			{
				if (iLocal_1824 == Local_675.f_6 && !bLocal_1827)
				{
					if (bLocal_1791)
					{
						GlobalFunc_159("AHT_MISS", -1);
					}
					else
					{
						GlobalFunc_159("HT_MISS", -1);
					}
				}
				iLocal_1828 = 1;
				iLocal_1826 = 0;
			}
		}
	}
	if (Local_94[iParam0 /*36*/].f_9 && !bVar0)
	{
		Local_675.f_32 = 0;
		if (Local_94[iParam0 /*36*/].f_29 || Local_94[iParam0 /*36*/].f_28)
		{
			func_320(iParam0);
		}
	}
}

void func_320(int iParam0)//Position - 0x299C5
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (Local_94[iParam0 /*36*/].f_29)
	{
		iVar0 = Local_94[iParam0 /*36*/].f_30;
	}
	func_284(iParam0, 1);
	Local_94[iParam0 /*36*/].f_28 = 0;
	Local_94[iParam0 /*36*/].f_29 = 0;
	Local_94[iParam0 /*36*/].f_30 = -1;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (Local_94[iVar1 /*36*/].f_30 == iVar0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_94[iVar1 /*36*/]) && !ENTITY::IS_ENTITY_DEAD(Local_94[iVar1 /*36*/]))
			{
				func_327(iVar1);
				Local_94[iVar1 /*36*/].f_14 = 4;
				func_284(iVar1, 1);
				Local_94[iVar1 /*36*/].f_28 = 0;
				Local_94[iVar1 /*36*/].f_29 = 0;
				Local_94[iVar1 /*36*/].f_30 = -1;
			}
		}
		iVar1++;
	}
}





int func_325(int iParam0)//Position - 0x29CDD
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iVar0 != iParam0)
		{
			if (func_297(iVar0))
			{
				if (Local_94[iVar0 /*36*/].f_9)
				{
					if (GlobalFunc_156(Local_94[iParam0 /*36*/], Local_94[iVar0 /*36*/], 1) < 10f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}


void func_327(int iParam0)//Position - 0x29D91
{
	if (!bLocal_1791)
	{
		if (GlobalFunc_115(Local_94[iParam0 /*36*/]))
		{
			ENTITY::SET_ENTITY_PROOFS(Local_94[iParam0 /*36*/], 1, 0, 0, 0, 0, 0, 0, 0);
			TASK::TASK_SMART_FLEE_PED(Local_94[iParam0 /*36*/], PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
			PED::SET_PED_KEEP_TASK(Local_94[iParam0 /*36*/], 1);
		}
		func_284(iParam0, 1);
	}
}

void func_328()//Position - 0x29DE7
{
	int iVar0;
	
	if (!iLocal_1797)
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar0) != 0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_USING(iVar0)))
	{
		return;
	}
	if (GlobalFunc_111())
	{
		return;
	}
	if ((((PAD::IS_CONTROL_JUST_RELEASED(2, 234) && !PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID())) && !PED::IS_PED_RAGDOLL(iVar0)) && !PED::IS_PED_RUNNING_RAGDOLL_TASK(iVar0)) || iLocal_1944 != -1)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_1945)
		{
			if (iLocal_1944 == -1)
			{
				iLocal_1944 = MISC::GET_GAME_TIMER() + 250;
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_1944)
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
				{
					TASK::TASK_PLAY_ANIM(iVar0, "facials@p_m_one@variations@elkcall", "mood_elkcal_1", 8f, -8f, -1, 32, 0, 0, 0, 0);
				}
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "PLAYER_CALLS_ELK_MASTER", iVar0, 0, 0, 0);
				HUD::TRIGGER_SONAR_BLIP(ENTITY::GET_ENTITY_COORDS(iVar0, 1), 30f, 11);
				iLocal_1945 = MISC::GET_GAME_TIMER() + 2500;
				Local_675.f_34 = 0;
				Local_675.f_48 = MISC::GET_GAME_TIMER() + 1750;
				iLocal_1944 = -1;
				iLocal_1813 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(30000, 60000));
				if (!iLocal_1798)
				{
					iLocal_1942 = MISC::GET_GAME_TIMER() + 3500;
					iLocal_1943 = MISC::GET_GAME_TIMER() + 4000;
					iLocal_1798 = 1;
				}
			}
		}
	}
	if (MISC::GET_GAME_TIMER() < iLocal_1943)
	{
		HUD::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
}

void func_329()//Position - 0x29F40
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	if (iLocal_2225[11])
	{
		if (!GlobalFunc_111())
		{
			if (!iLocal_2269[5])
			{
				if (func_331(4))
				{
					func_330(4);
					Var0 = { Local_2392 };
					fVar3 = fLocal_2395;
					fVar4 = (8.25f * 4f);
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var0) <= fVar4)
					{
						Var0 = { Local_2396 };
						fVar3 = fLocal_2399;
					}
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_94[4 /*36*/], Var0, 2f, -1, 0.25f, 0, fVar3);
					Local_94[4 /*36*/].f_27 = 0;
					Local_384[0 /*5*/] = { Var0 };
					Local_94[4 /*36*/].f_16 = 9;
					iLocal_1944 = -1;
					func_278(5);
					iLocal_1797 = 1;
				}
			}
			else
			{
				func_283(4);
				func_328();
				if (PAD::IS_CONTROL_JUST_RELEASED(0, 234))
				{
					HUD::CLEAR_HELP(1);
					TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_2365[4 /*3*/], -1, 0, 2);
					iLocal_2301 = MISC::GET_GAME_TIMER() + 3000;
					iLocal_2027 = 17;
					iLocal_2028 = 1;
				}
				else if (Local_94[4 /*36*/].f_9)
				{
					func_14(Local_94[4 /*36*/]);
					if (bLocal_2218)
					{
						func_281(10);
					}
					else
					{
						GlobalFunc_553(770);
						func_275(func_276(4));
						func_281(iLocal_2032);
					}
				}
				else if (!GlobalFunc_4924(Local_94[4 /*36*/]))
				{
					HUD::CLEAR_HELP(1);
					iLocal_2027 = 17;
					GlobalFunc_635("HT_OBJ");
					func_10();
					func_14(Local_94[4 /*36*/]);
					iLocal_1797 = 0;
					if (!bLocal_2218)
					{
						iLocal_2301 = MISC::GET_GAME_TIMER() + 1700;
						iLocal_2028 = 2;
					}
					else
					{
						func_281(10);
					}
				}
			}
		}
	}
}

void func_330(int iParam0)//Position - 0x2A0C7
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_94[iParam0 /*36*/]) && !ENTITY::IS_ENTITY_VISIBLE(Local_94[iParam0 /*36*/]))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_94[iParam0 /*36*/], 1);
	}
}

int func_331(int iParam0)//Position - 0x2A0F7
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_94[iParam0 /*36*/]))
	{
		if (iParam0 == 0)
		{
			if (func_335(iParam0, 10, Local_2365[iParam0 /*3*/], 0, 0))
			{
				if (GlobalFunc_115(Local_94[iParam0 /*36*/]))
				{
					iLocal_1798 = 0;
					ENTITY::SET_ENTITY_HEADING(Local_94[iParam0 /*36*/], fLocal_2286[iParam0]);
					func_334(Local_94[iParam0 /*36*/], 1);
					GlobalFunc_1627(&(Local_94[iParam0 /*36*/]), 0);
					func_332(&(Local_94[iParam0 /*36*/]), 1);
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_94[iParam0 /*36*/]);
					return 1;
				}
			}
		}
		else if (func_335(iParam0, 10, Local_2365[iParam0 /*3*/], 0, 1))
		{
			if (GlobalFunc_115(Local_94[iParam0 /*36*/]))
			{
				iLocal_1798 = 0;
				ENTITY::SET_ENTITY_HEADING(Local_94[iParam0 /*36*/], fLocal_2286[iParam0]);
				GlobalFunc_1627(&(Local_94[iParam0 /*36*/]), 0);
				ENTITY::SET_ENTITY_VISIBLE(Local_94[iParam0 /*36*/], 0);
				if (iParam0 == 3)
				{
					func_334(Local_94[iParam0 /*36*/], 0);
				}
				else
				{
					func_334(Local_94[iParam0 /*36*/], 1);
					func_332(&(Local_94[iParam0 /*36*/]), 1);
				}
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_94[iParam0 /*36*/]);
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

void func_332(var uParam0, int iParam1)//Position - 0x2A20B
{
	uParam0->f_7 = iParam1;
}


void func_334(int iParam0, bool bParam1)//Position - 0x2A227
{
	if (bParam1)
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "doe_elk"))
		{
			DECORATOR::DECOR_REMOVE(iParam0, "doe_elk");
		}
		if (GlobalFunc_115(iParam0))
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 1, 0, 0);
		}
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "doe_elk"))
	{
		if (GlobalFunc_115(iParam0))
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 0, 0, 0);
		}
		DECORATOR::DECOR_SET_BOOL(iParam0, "doe_elk", 1);
	}
}

int func_335(int iParam0, int iParam1, struct<3> Param2, int iParam5, int iParam6)//Position - 0x2A291
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_94[iParam0 /*36*/]))
	{
		if (func_307(iParam0, iParam1, iParam5, iParam6))
		{
			GlobalFunc_5705(Local_94[iParam0 /*36*/], Param2, 0, 0, 1);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_336()//Position - 0x2A2D4
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	switch (iLocal_2028)
	{
		case 0:
			func_233();
			func_232();
			GlobalFunc_4935();
			GlobalFunc_4956();
			iLocal_2028 = 1;
			break;
		
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_10();
				if (GlobalFunc_4924(iLocal_2306))
				{
					TASK::CLEAR_PED_TASKS(iLocal_2306);
					GlobalFunc_5705(iLocal_2306, Local_2359, fLocal_2285, 0, 1);
					func_399(0, 0);
				}
				if (!GlobalFunc_188())
				{
					GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), Local_2356, fLocal_2281, 0, 1);
					GlobalFunc_8326(Local_2356, 1112014848, 12, 5000, 0, 0);
				}
				GlobalFunc_11110(4, "Player has done third elk", 1, 0, 0, 1);
				func_516(1);
				func_220();
				iLocal_1797 = 0;
				iLocal_2201 = 1;
				iLocal_2028 = 2;
			}
			break;
		
		case 2:
			GlobalFunc_4967(0, -1, 1);
			GlobalFunc_4450();
			func_216();
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PLAYER::PLAYER_PED_ID(), 1);
			iLocal_2301 = MISC::GET_GAME_TIMER() + 1700;
			iLocal_2269[5] = 0;
			iLocal_2225[10] = 1;
			iLocal_2031 = 0;
			iLocal_2029 = 12;
			iLocal_2028 = 0;
			iLocal_2027 = 15;
			break;
	}
}































































void func_399(bool bParam0, int iParam1)//Position - 0x2F851
{
	if (!HUD::DOES_BLIP_EXIST(iLocal_2199))
	{
		iLocal_2199 = GlobalFunc_4955(iLocal_2306, 1, 1, 5);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_2199))
	{
		if (!bParam0)
		{
			HUD::SET_BLIP_SCALE(iLocal_2199, 0.75f);
		}
		HUD::SET_BLIP_FLASHES(iLocal_2199, iParam1);
	}
}


void func_401()//Position - 0x2F8E8
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	func_328();
	func_283(2);
	func_283(3);
	switch (iLocal_2028)
	{
		case 0:
			iLocal_2028 = 1;
			break;
		
		case 1:
			if (!Local_94[2 /*36*/].f_9)
			{
				if (!GlobalFunc_4924(Local_94[2 /*36*/]))
				{
					if (iLocal_1797)
					{
						func_10();
						func_14(Local_94[2 /*36*/]);
						iLocal_1797 = 0;
					}
					if (!iLocal_2205)
					{
						if (GlobalFunc_4924(Local_94[3 /*36*/]))
						{
							func_327(3);
						}
						iLocal_2205 = 1;
					}
					if (!bLocal_2218)
					{
						if (func_402(15f))
						{
							HUD::CLEAR_HELP(1);
							if (iLocal_2220)
							{
								func_399(0, 0);
								GlobalFunc_635("HT_BAC");
								iLocal_2220 = 0;
							}
							TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
							PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PLAYER::PLAYER_PED_ID(), 1);
							iLocal_2301 = MISC::GET_GAME_TIMER() + 1700;
							iLocal_2028 = 2;
						}
						else if (!iLocal_2220 && !GlobalFunc_111())
						{
							HUD::CLEAR_HELP(1);
							func_399(0, 0);
							func_264("HT_BAC");
							iLocal_2220 = 1;
							TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
							PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PLAYER::PLAYER_PED_ID(), 1);
						}
					}
					else
					{
						HUD::CLEAR_HELP(1);
						func_281(10);
					}
				}
				else
				{
					if (!iLocal_2245[2])
					{
						if (iLocal_2225[9] && !GlobalFunc_111())
						{
							func_264("HT_OBJ");
							PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PLAYER::PLAYER_PED_ID(), 0);
							TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_2365[2 /*3*/], -1, 0, 2);
							iLocal_2245[2] = 1;
						}
					}
					else if (!GlobalFunc_663("HT_OBJ", 0, 0))
					{
						if (!iLocal_2269[6])
						{
							func_278(6);
						}
					}
					if (!GlobalFunc_4924(Local_94[3 /*36*/]))
					{
						if (!iLocal_2205)
						{
							func_327(2);
							iLocal_2205 = 1;
							func_281(1);
						}
						else if (!GlobalFunc_111())
						{
							func_281(11);
						}
					}
				}
			}
			else
			{
				HUD::CLEAR_HELP(1);
				func_14(Local_94[2 /*36*/]);
				if (bLocal_2218)
				{
					func_281(10);
				}
				else
				{
					GlobalFunc_553(770);
					func_275(func_276(2));
					func_281(iLocal_2032);
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_74("HT_MISS"))
			{
				HUD::CLEAR_HELP(1);
			}
			if (!iLocal_2205)
			{
				if (GlobalFunc_4924(Local_94[3 /*36*/]))
				{
					func_327(3);
				}
				iLocal_2205 = 1;
			}
			if (MISC::GET_GAME_TIMER() > iLocal_2301)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PLAYER::PLAYER_PED_ID(), 0);
				GlobalFunc_11110(4, "Player has done third elk", 1, 0, 0, 1);
				iLocal_2028 = 0;
				iLocal_2027 = 15;
			}
			break;
	}
}

int func_402(float fParam0)//Position - 0x2FB41
{
	float fVar0;
	
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()) && GlobalFunc_4924(iLocal_2306))
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_2306, 1), 0);
		if (fVar0 < fParam0)
		{
			return 1;
		}
	}
	return 0;
}

void func_403()//Position - 0x2FB85
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	if (func_402(15f))
	{
		func_399(0, 0);
		if (iLocal_2220)
		{
			GlobalFunc_635("HT_BAC");
			iLocal_2220 = 0;
		}
		if (iLocal_2225[8] && iLocal_2029 != 2)
		{
			if (!GlobalFunc_111())
			{
				if (!iLocal_2269[4] && !iLocal_1797)
				{
					iLocal_1944 = -1;
					iLocal_1797 = 1;
					func_278(4);
				}
				else if (!iLocal_2436)
				{
					func_328();
					if (PAD::IS_CONTROL_JUST_RELEASED(0, 234))
					{
						func_330(2);
						func_330(3);
						iLocal_2301 = MISC::GET_GAME_TIMER() + 3000;
						HUD::CLEAR_HELP(1);
						iLocal_2436 = 1;
					}
				}
				else if (func_331(2) && func_331(3))
				{
					func_405(&(Local_94[3 /*36*/]), 0);
					func_330(2);
					func_330(3);
					Local_94[2 /*36*/].f_27 = 0;
					Local_384[0 /*5*/] = { Local_2384 };
					Local_94[2 /*36*/].f_16 = 9;
					Local_94[3 /*36*/].f_27 = 0;
					Local_384[0 /*5*/] = { Local_2388 };
					Local_94[3 /*36*/].f_16 = 9;
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_94[2 /*36*/], Local_2384, 2f, -1, 0.25f, 0, fLocal_2387);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_94[3 /*36*/], Local_2388, 2f, -1, 0.25f, 0, fLocal_2391);
					iLocal_2027 = 13;
					iLocal_2028 = 0;
				}
			}
		}
	}
	else
	{
		func_404();
		if (!iLocal_2220)
		{
			iLocal_1797 = 0;
			HUD::CLEAR_HELP(1);
			iLocal_2269[4] = 0;
			func_399(0, 0);
			func_264("HT_BAC");
			iLocal_2220 = 1;
		}
	}
}

void func_404()//Position - 0x2FCFF
{
	float fVar0;
	
	if (GlobalFunc_4924(iLocal_2306))
	{
		if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
		{
			fVar0 = GlobalFunc_156(iLocal_2306, PLAYER::PLAYER_PED_ID(), 0);
			if (fVar0 > 100f)
			{
				if (!iLocal_2219)
				{
					func_264("HT_BAC");
					iLocal_2219 = 1;
				}
			}
			else if (iLocal_2219)
			{
				GlobalFunc_635("HT_BAC");
				iLocal_2219 = 0;
			}
			if (fVar0 > 150f)
			{
				func_281(6);
			}
		}
	}
}

void func_405(var uParam0, bool bParam1)//Position - 0x2FD6F
{
	uParam0->f_13 = !bParam1;
}

void func_406()//Position - 0x2FD7E
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	switch (iLocal_2028)
	{
		case 0:
			func_233();
			func_232();
			GlobalFunc_4935();
			GlobalFunc_4956();
			iLocal_2028 = 1;
			break;
		
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_10();
				if (!PED::IS_PED_INJURED(iLocal_2306))
				{
					TASK::CLEAR_PED_TASKS(iLocal_2306);
					GlobalFunc_5705(iLocal_2306, Local_2353, fLocal_2284, 0, 1);
					func_399(0, 0);
				}
				if (!GlobalFunc_188())
				{
					GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), Local_2350, fLocal_2280, 0, 1);
					GlobalFunc_8326(Local_2356, 1112014848, 12, 5000, 0, 0);
				}
				GlobalFunc_11110(3, "Player has done second elk", 0, 0, 0, 1);
				func_516(1);
				func_220();
				iLocal_1797 = 0;
				iLocal_2201 = 1;
				iLocal_2028 = 2;
			}
			break;
		
		case 2:
			GlobalFunc_4967(0, -1, 1);
			GlobalFunc_4450();
			func_216();
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PLAYER::PLAYER_PED_ID(), 1);
			iLocal_2301 = MISC::GET_GAME_TIMER() + 1700;
			iLocal_2269[4] = 0;
			iLocal_2031 = 0;
			iLocal_2029 = 9;
			iLocal_2028 = 0;
			iLocal_2027 = 11;
			break;
	}
}

void func_407()//Position - 0x2FE8B
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	func_328();
	func_283(1);
	switch (iLocal_2028)
	{
		case 0:
			iLocal_2028 = 1;
			break;
		
		case 1:
			if (!Local_94[1 /*36*/].f_9)
			{
				if (!GlobalFunc_4924(Local_94[1 /*36*/]))
				{
					if (iLocal_1797)
					{
						func_10();
						GlobalFunc_635("HT_OBJ");
						TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
						PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PLAYER::PLAYER_PED_ID(), 1);
						func_14(Local_94[1 /*36*/]);
						iLocal_1797 = 0;
					}
					if (!bLocal_2218)
					{
						if (iLocal_2225[6])
						{
							if (!GlobalFunc_111() || MISC::GET_PROFILE_SETTING(203) == 0)
							{
								if (func_402(6f))
								{
									if (iLocal_2220)
									{
										func_399(0, 0);
										GlobalFunc_635("HT_BAC");
										iLocal_2220 = 0;
									}
									iLocal_2301 = MISC::GET_GAME_TIMER() + 1700;
									iLocal_2028 = 2;
								}
								else if (!iLocal_2220 && !GlobalFunc_111())
								{
									func_399(0, 0);
									func_264("HT_BAC");
									iLocal_2220 = 1;
								}
							}
						}
					}
					else
					{
						func_281(10);
					}
				}
				else if (((HUD::DOES_BLIP_EXIST(Local_94[1 /*36*/].f_1) && !iLocal_2245[1]) && iLocal_2225[5]) && !GlobalFunc_111())
				{
					func_264("HT_OBJ");
					iLocal_2245[1] = 1;
				}
			}
			else
			{
				func_14(Local_94[1 /*36*/]);
				if (bLocal_2218)
				{
					func_281(10);
				}
				else
				{
					GlobalFunc_553(770);
					func_275(func_276(1));
					func_281(iLocal_2032);
				}
			}
			break;
		
		case 2:
			if (MISC::GET_GAME_TIMER() > iLocal_2301)
			{
				GlobalFunc_11110(3, "Player has done second elk", 0, 0, 0, 1);
				iLocal_2028 = 0;
				iLocal_2027 = 11;
			}
			break;
	}
}

void func_408()//Position - 0x30031
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	switch (iLocal_2028)
	{
		case 0:
			if (func_402(15f))
			{
				if (iLocal_2220)
				{
					func_399(0, 0);
					GlobalFunc_635("HT_BAC");
					iLocal_2220 = 0;
				}
				iLocal_2028 = 1;
			}
			break;
		
		case 1:
			if (func_402(15f))
			{
				iLocal_2220 = 0;
				if (iLocal_2225[4])
				{
					if (!GlobalFunc_111())
					{
						if (!iLocal_2269[3])
						{
							iLocal_1944 = -1;
							if (func_331(1))
							{
								func_330(1);
								Local_94[1 /*36*/].f_27 = 0;
								Local_384[0 /*5*/] = { Local_2381 };
								Local_94[1 /*36*/].f_16 = 9;
								func_278(3);
								iLocal_1797 = 1;
							}
						}
						else
						{
							if (!GlobalFunc_74("HT_CALL"))
							{
								if (GlobalFunc_663("HT_BAC", 0, 0))
								{
									HUD::CLEAR_THIS_PRINT("HT_BAC");
								}
								func_278(3);
							}
							func_328();
							func_283(1);
							if (PAD::IS_CONTROL_JUST_RELEASED(0, 234))
							{
								GlobalFunc_146(&iLocal_2199);
								HUD::CLEAR_HELP(1);
								iLocal_2028 = 2;
							}
						}
					}
				}
			}
			else
			{
				func_404();
				if (!iLocal_2220)
				{
					HUD::CLEAR_HELP(1);
					func_399(0, 0);
					func_264("HT_BAC");
					iLocal_2220 = 1;
				}
			}
			break;
		
		case 2:
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PLAYER::PLAYER_PED_ID(), 0);
			TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_2365[1 /*3*/], -1, 0, 2);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_94[1 /*36*/], Local_2381, 2f, -1, 0.25f, 0, 40000f);
			iLocal_2301 = MISC::GET_GAME_TIMER() + 3000;
			iLocal_2027 = 9;
			iLocal_2028 = 0;
			break;
	}
}

void func_409()//Position - 0x301B0
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	switch (iLocal_2028)
	{
		case 0:
			func_233();
			func_232();
			GlobalFunc_4935();
			GlobalFunc_4956();
			iLocal_2028 = 1;
			break;
		
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_10();
				if (!PED::IS_PED_INJURED(iLocal_2306))
				{
					TASK::CLEAR_PED_TASKS(iLocal_2306);
					GlobalFunc_5705(iLocal_2306, Local_2346, fLocal_2349, 0, 1);
					func_399(0, 0);
				}
				if (!GlobalFunc_188())
				{
					GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), Local_2342, fLocal_2345, 0, 1);
					GlobalFunc_8326(Local_2336, 1112014848, 12, 5000, 0, 0);
				}
				GlobalFunc_11110(2, "Player has done first elk", 0, 0, 0, 1);
				func_516(1);
				iLocal_2201 = 1;
				iLocal_1797 = 0;
				iLocal_2028 = 2;
			}
			break;
		
		case 2:
			GlobalFunc_4967(0, -1, 1);
			func_216();
			iLocal_2225[3] = 0;
			iLocal_2031 = 0;
			iLocal_2029 = 5;
			iLocal_2028 = 0;
			iLocal_2027 = 7;
			break;
	}
}

void func_410()//Position - 0x302A0
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	func_328();
	func_283(0);
	switch (iLocal_2028)
	{
		case 0:
			GlobalFunc_11110(1, "Player has done Hunter's tutorial", 0, 0, 0, 1);
			iLocal_2028 = 1;
			break;
		
		case 1:
			if (!iLocal_2245[0])
			{
				if ((iLocal_2225[1] && !GlobalFunc_111()) && bLocal_2425)
				{
					func_264("HT_OBJ");
					iLocal_1798 = 1;
					if (GlobalFunc_663("HT_OBJ", 0, 0))
					{
						iLocal_2245[0] = 1;
						GlobalFunc_146(&iLocal_2199);
					}
				}
			}
			else if (!GlobalFunc_663("HT_OBJ", 0, 0))
			{
				if (!iLocal_2269[1] && !PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
				{
					func_278(1);
				}
			}
			if (!Local_94[0 /*36*/].f_9)
			{
				if (!GlobalFunc_4924(Local_94[0 /*36*/]))
				{
					GlobalFunc_635("HT_OBJ");
					func_10();
					func_14(Local_94[0 /*36*/]);
					if (!bLocal_2218)
					{
						if (iLocal_2225[2])
						{
							if (!GlobalFunc_111() || MISC::GET_PROFILE_SETTING(203) == 0)
							{
								if (func_402(15f))
								{
									if (iLocal_2220)
									{
										GlobalFunc_635("HT_BAC");
										iLocal_2220 = 0;
									}
									func_399(0, 0);
									PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PLAYER::PLAYER_PED_ID(), 1);
									iLocal_2028 = 2;
								}
								else if (!iLocal_2220 && !GlobalFunc_111())
								{
									func_399(0, 0);
									func_264("HT_BAC");
									iLocal_2220 = 1;
								}
							}
						}
					}
					else
					{
						HUD::CLEAR_HELP(1);
						func_281(10);
					}
				}
			}
			else
			{
				HUD::CLEAR_HELP(1);
				func_10();
				func_14(Local_94[0 /*36*/]);
				if (bLocal_2218)
				{
					func_281(10);
				}
				else
				{
					GlobalFunc_553(770);
					func_275(func_276(0));
					func_281(iLocal_2032);
				}
			}
			break;
		
		case 2:
			GlobalFunc_11110(2, "Player has done first elk", 0, 0, 0, 1);
			iLocal_2028 = 0;
			iLocal_2027 = 7;
			break;
	}
}

void func_411()//Position - 0x30476
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.25f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	switch (iLocal_2028)
	{
		case 0:
			iLocal_2028 = 1;
			break;
		
		case 1:
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (!Local_94[0 /*36*/].f_9)
				{
					if (func_402(15f))
					{
						if (iLocal_2220)
						{
							func_399(0, 0);
							GlobalFunc_635("HT_BAC");
							iLocal_2220 = 0;
						}
						if (iLocal_2225[1])
						{
							iLocal_2435 = 0;
							if (func_331(0))
							{
								iLocal_2435 = 1;
								iLocal_2028 = 2;
							}
						}
					}
					else
					{
						func_404();
						if (!iLocal_2220)
						{
							func_399(0, 0);
							func_264("HT_BAC");
							iLocal_2220 = 1;
						}
						if (iLocal_2212)
						{
							PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PLAYER::PLAYER_PED_ID(), 0);
							iLocal_2212 = 0;
						}
					}
				}
				else
				{
					func_327(0);
					GlobalFunc_553(770);
					func_275(func_276(0));
					func_281(iLocal_2032);
				}
			}
			break;
		
		case 2:
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PLAYER::PLAYER_PED_ID(), 0);
			iLocal_2028 = 0;
			iLocal_2027 = 5;
			break;
	}
}

void func_412()//Position - 0x30570
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	switch (iLocal_2028)
	{
		case 0:
			func_233();
			func_232();
			GlobalFunc_4935();
			GlobalFunc_4956();
			iLocal_2028 = 1;
			break;
		
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_10();
				func_516(0);
				if (!GlobalFunc_188())
				{
					GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), Local_2336, fLocal_2279, 0, 1);
					GlobalFunc_8326(Local_2336, 1112014848, 12, 5000, 0, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_2306))
				{
					TASK::CLEAR_PED_TASKS(iLocal_2306);
				}
				GlobalFunc_5705(iLocal_2306, Local_2339, fLocal_2283, 0, 1);
				iLocal_2028 = 2;
			}
			break;
		
		case 2:
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PLAYER::PLAYER_PED_ID(), 1);
				GlobalFunc_4967(0, -1, 1);
				func_216();
				GlobalFunc_4450();
				GlobalFunc_4935();
				GlobalFunc_4956();
				iLocal_2201 = 1;
				func_278(0);
				iLocal_2031 = 0;
				iLocal_2029 = 3;
				iLocal_2028 = 0;
				iLocal_2027 = 4;
			}
			break;
	}
}

void func_413()//Position - 0x30666
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	switch (iLocal_2028)
	{
		case 0:
			func_233();
			iLocal_2028 = 1;
			break;
		
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (!GlobalFunc_188())
				{
					GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), Local_2330, fLocal_2278, 0, 1);
					GlobalFunc_8326(Local_2330, 1112014848, 12, 5000, 0, 0);
					GlobalFunc_4450();
				}
				GlobalFunc_11110(0, "Mocap Intro Done", 0, 0, 0, 1);
				GlobalFunc_5705(iLocal_2306, Local_2333, fLocal_2282, 0, 1);
				func_220();
				func_516(1);
				iLocal_2028 = 2;
			}
			break;
		
		case 2:
			GlobalFunc_4967(0, -1, 1);
			func_216();
			func_399(1, 0);
			iLocal_2029 = 1;
			iLocal_2031 = 0;
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PLAYER::PLAYER_PED_ID(), 1);
			GlobalFunc_164("HT_FOLLOW", 6500, 0);
			iLocal_2027 = 4;
			iLocal_2028 = 0;
			break;
	}
}

void func_414()//Position - 0x30747
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	switch (iLocal_2028)
	{
		case 0:
			iLocal_2293 = 0;
			GlobalFunc_9623("HUN_2_MCS_1", 0);
			iLocal_2028 = 1;
			break;
		
		case 1:
			switch (iLocal_2293)
			{
				case 0:
					if (GlobalFunc_8034(1, 1093140480, 0))
					{
						if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), sLocal_2310, 0, 0, 0);
						}
						if (GlobalFunc_115(iLocal_2306))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2306, "Cletus", 0, 0, 0);
							CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Cletus", PLAYER::PLAYER_PED_ID(), 0);
							iLocal_2304 = func_434(iLocal_2306, joaat("weapon_pumpshotgun"), 1, 0, 0, 0, 0);
							iLocal_2305 = func_434(iLocal_2306, joaat("weapon_sniperrifle"), 1, 0, 0, 0, 0);
							WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(iLocal_2305, joaat("component_at_ar_supp_02"));
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_2304))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2304, "Cletus_Gun", 0, 0, 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_2305))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2305, "Trevors_Weapon", 0, 0, 0);
						}
						GlobalFunc_9161();
						CUTSCENE::START_CUTSCENE(0);
						RECORDING::_0x48621C9FCA3EBD28(4);
						SYSTEM::WAIT(0);
						GlobalFunc_9628(Local_2412, Local_2415, 5f, Local_2421, fLocal_2424, 1, 1, 1, 0, 0);
						GlobalFunc_9628(Local_2412, Local_2418, 25f, Local_2421, fLocal_2424, 1, 1, 1, 0, 0);
						func_423(Local_2330, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1);
						iLocal_2293++;
					}
					break;
				
				case 1:
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Cletus", joaat("p_cletus_necklace_s")))
					{
						if (!iLocal_2206)
						{
							iLocal_2029 = 1;
							iLocal_2206 = 1;
						}
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_Weapon", WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_sniperrifle"))))
					{
						WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_2305, PLAYER::PLAYER_PED_ID());
						if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), 0))
						{
							WEAPON::SET_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), 10);
						}
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Cletus_Gun", WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_sniperrifle"))))
					{
						WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_2304, iLocal_2306);
						PED::FORCE_PED_MOTION_STATE(iLocal_2306, -668482597, 0, 1, 0);
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_2310, 0))
					{
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 0);
						PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2500, 0, 1, 0);
						bLocal_2200 = true;
					}
					if (!bLocal_2200)
					{
						GlobalFunc_4450();
					}
					if (CUTSCENE::HAS_CUTSCENE_FINISHED())
					{
						RECORDING::_0x81CBAE94390F9F89();
						iLocal_2293++;
					}
					break;
				
				case 2:
					if (CUTSCENE::WAS_CUTSCENE_SKIPPED() && CAM::IS_SCREEN_FADED_OUT())
					{
						GlobalFunc_5705(iLocal_2306, Local_2333, fLocal_2282, 0, 1);
						iLocal_2029 = 1;
					}
					if (!CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						iLocal_2293++;
					}
					break;
				
				case 3:
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						CUTSCENE::STOP_CUTSCENE(0);
					}
					else
					{
						if (CUTSCENE::HAS_CUTSCENE_LOADED())
						{
							CUTSCENE::REMOVE_CUTSCENE();
						}
						if (!iLocal_2206)
						{
							iLocal_2029 = 1;
						}
						GlobalFunc_4923(&Local_1966, 0, 0);
						func_415(1, 0, 1, 1);
						iLocal_2028 = 2;
					}
					break;
			}
			break;
		
		case 3:
			func_233();
			GlobalFunc_4935();
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (GlobalFunc_4924(iLocal_2306))
				{
					if (!iLocal_2206)
					{
						TASK::CLEAR_PED_TASKS(iLocal_2306);
						if (WEAPON::HAS_PED_GOT_WEAPON(iLocal_2306, joaat("weapon_pumpshotgun"), 0))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(iLocal_2306, joaat("weapon_pumpshotgun"), 1);
						}
						GlobalFunc_5705(iLocal_2306, Local_2333, fLocal_2282, 0, 1);
						iLocal_2029 = 1;
						iLocal_2206 = 1;
					}
				}
				if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				}
				GlobalFunc_4450();
				iLocal_2028 = 2;
			}
			break;
		
		case 2:
			func_399(1, 0);
			func_216();
			GlobalFunc_164("HT_FOLLOW", 6500, 0);
			GlobalFunc_11110(0, "Mocap Intro Done", 0, 0, 0, 1);
			iLocal_2027 = 4;
			iLocal_2028 = 0;
			break;
	}
}

void func_415(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x30AD9
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(uVar0, 0);
	PLAYER::SET_PLAYER_CONTROL(uVar0, bParam3, 0);
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
		if ((iLocal_38 != 0 && iLocal_38 != joaat("object")) && iLocal_38 != joaat("gadget_parachute"))
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_38, 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_38, 0);
				}
			}
		}
	}
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}








void func_423(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x30D83
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
					if (GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						GlobalFunc_11274(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						GlobalFunc_11274(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 8, 1) || GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						GlobalFunc_11274(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						GlobalFunc_11274(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
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
			iLocal_38 = 0;
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_38 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam5 == 1)
		{
			GlobalFunc_79(500, 0);
		}
	}
}











int func_434(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6)//Position - 0x3182C
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
		Var5 = { iParam4, iParam5, iParam6 };
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







void func_441()//Position - 0x31C4C
{
	int iVar0;
	
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	PLAYER::SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(PLAYER::PLAYER_ID(), 0);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER", 0);
	PAD::_SWITCH_TO_INPUT_MAPPING_SCHEME("HUNTING ELK CALL");
	GlobalFunc_173(&uLocal_2033, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	GlobalFunc_173(&uLocal_2033, 3, iLocal_2306, "CLETUS", 0, 1);
	func_452();
	func_451();
	func_450();
	func_449();
	GlobalFunc_3008(0);
	func_220();
	func_447();
	func_446();
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Hunting", 0);
	STREAMING::REQUEST_ANIM_DICT("facials@p_m_one@variations@elkcall");
	STREAMING::REQUEST_ANIM_DICT("gestures@m@standing@casual");
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_guard_patrol@male@idle_a");
	STREAMING::REQUEST_ANIM_DICT("oddjobs@hunter");
	TASK::REQUEST_WAYPOINT_RECORDING("HT2_CLE_0_1");
	TASK::REQUEST_WAYPOINT_RECORDING("HT2_CLE_1_2");
	TASK::REQUEST_WAYPOINT_RECORDING("HT2_CLE_2_3");
	GlobalFunc_9621(54, 2, 0);
	if (!PED::IS_PED_INJURED(iLocal_2306))
	{
		PED::SET_PED_DIES_IN_WATER(iLocal_2306, 0);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iLocal_2306);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_2306, 1);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_2306, 0);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_2306, joaat("weapon_pumpshotgun"), -1, 0, 1);
	}
	iLocal_1797 = 0;
	bLocal_1827 = true;
	fLocal_1787 = 0f;
	AUDIO::START_AUDIO_SCENE("AMBIENT_HUNTING_MIX");
	PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-641.6511f, 5846.579f, 20.3501f, 3f, 3f, 3f, 0f, 0, 7);
	PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-642.212f, 5851.602f, 19.9536f, 3f, 3f, 3f, 0f, 0, 7);
	PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-627.1213f, 5833.185f, 22.5278f, 3f, 3f, 3f, 0f, 0, 7);
	PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-636.4395f, 5829.735f, 22.0155f, 3f, 3f, 3f, 0f, 0, 7);
	PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-607.6405f, 5834.451f, 24.6594f, 3f, 3f, 3f, 0f, 0, 7);
	PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-594.2007f, 5834.414f, 27.2229f, 3f, 3f, 3f, 0f, 0, 7);
	PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-589.8816f, 5832.747f, 28.4124f, 3f, 3f, 3f, 0f, 0, 7);
	PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-586.3449f, 5834.044f, 29.0145f, 3f, 3f, 3f, 0f, 0, 7);
	PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-581.4914f, 5839.431f, 29.0466f, 3f, 3f, 3f, 0f, 0, 7);
	PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-587.1396f, 5844.697f, 27.3273f, 3f, 3f, 3f, 0f, 0, 7);
	PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-601.9974f, 5850.203f, 24.0529f, 4f, 4f, 4f, 0f, 0, 7);
	PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-634.3944f, 5857.542f, 20.5354f, 4f, 4f, 4f, 0f, 0, 7);
	PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-637.6848f, 5858.026f, 20.108f, 2f, 2f, 2f, 0f, 0, 7);
	PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-599.4448f, 5841.063f, 25.5058f, 3f, 3f, 3f, 0f, 0, 7);
	if (GlobalFunc_199())
	{
		iVar0 = GlobalFunc_198();
		iLocal_2028 = 0;
		if (Global_84544)
		{
			iVar0++;
		}
		HUD::CLEAR_PRINTS();
		GlobalFunc_4935();
		func_220();
		func_447();
		switch (iVar0)
		{
			case 0:
				GlobalFunc_4972(Local_2330, fLocal_2278, 1, 0);
				iLocal_2027 = 2;
				break;
			
			case 1:
				GlobalFunc_4972(Local_2336, fLocal_2279, 1, 0);
				iLocal_2027 = 3;
				break;
			
			case 2:
				GlobalFunc_4972(Local_2342, fLocal_2345, 1, 0);
				iLocal_2027 = 6;
				break;
			
			case 3:
				GlobalFunc_4972(Local_2350, fLocal_2280, 1, 0);
				iLocal_2027 = 10;
				break;
			
			case 4:
				GlobalFunc_4972(Local_2356, fLocal_2281, 1, 0);
				iLocal_2027 = 14;
				break;
			
			case 5:
				GlobalFunc_4972(Local_2350, fLocal_2280, 1, 0);
				iLocal_2027 = 23;
				break;
			
			default:
				break;
		}
	}
	else
	{
		iLocal_2029 = 0;
		iLocal_2027 = 1;
		iLocal_2028 = 0;
	}
}





void func_446()//Position - 0x322A9
{
	AUDIO::START_AUDIO_SCENE("HUNTING_02_TRAFFIC_SCENE");
}

void func_447()//Position - 0x322BB
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iLocal_2245[iVar0] = 0;
		iLocal_2251[iVar0] = 0;
		iLocal_2257[iVar0] = 0;
		iLocal_2263[iVar0] = 0;
		iLocal_2239[iVar0] = 0;
		iVar0++;
	}
}


void func_449()//Position - 0x32347
{
	STREAMING::REQUEST_MODEL(iLocal_2303);
	AUDIO::REQUEST_MISSION_AUDIO_BANK("SCRIPT\HUNTING_2_ELK_CALLS", 0);
	AUDIO::REQUEST_MISSION_AUDIO_BANK("SCRIPT\HUNTING_2_ELK_VOCALS", 0);
	AUDIO::REQUEST_MISSION_AUDIO_BANK("SCRIPT\HUNTING_MAIN_A", 0);
	STREAMING::REQUEST_ANIM_DICT("creatures@deer@amb@world_deer_grazing@enter");
	STREAMING::REQUEST_ANIM_DICT("creatures@deer@amb@world_deer_grazing@idle_a");
	STREAMING::REQUEST_ANIM_DICT("creatures@deer@amb@world_deer_grazing@exit");
	STREAMING::REQUEST_ANIM_DICT("creatures@deer@amb@world_deer_grazing@base");
	while (((((((!STREAMING::HAS_MODEL_LOADED(iLocal_2303) || !AUDIO::REQUEST_MISSION_AUDIO_BANK("SCRIPT\HUNTING_2_ELK_CALLS", 0)) || !AUDIO::REQUEST_MISSION_AUDIO_BANK("SCRIPT\HUNTING_2_ELK_VOCALS", 0)) || !AUDIO::REQUEST_MISSION_AUDIO_BANK("SCRIPT\HUNTING_MAIN_A", 0)) || !STREAMING::HAS_ANIM_DICT_LOADED("creatures@deer@amb@world_deer_grazing@enter")) || !STREAMING::HAS_ANIM_DICT_LOADED("creatures@deer@amb@world_deer_grazing@idle_a")) || !STREAMING::HAS_ANIM_DICT_LOADED("creatures@deer@amb@world_deer_grazing@exit")) || !STREAMING::HAS_ANIM_DICT_LOADED("creatures@deer@amb@world_deer_grazing@base"))
	{
		SYSTEM::WAIT(0);
	}
	iLocal_2203 = 1;
}

void func_450()//Position - 0x3241D
{
	HUD::REQUEST_ADDITIONAL_TEXT("HUNT2", 0);
	HUD::REQUEST_ADDITIONAL_TEXT(sLocal_2309, 6);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
	{
		SYSTEM::WAIT(0);
	}
}

void func_451()//Position - 0x32454
{
	Local_2365[0 /*3*/] = { -588.3788f, 5829.897f, 29.0621f };
	fLocal_2286[0] = 319.3601f;
	Local_2365[1 /*3*/] = { -493.6698f, 5880.714f, 27.8661f };
	fLocal_2286[1] = 48.4291f;
	Local_2365[2 /*3*/] = { -609.381f, 5715.263f, 29.0551f };
	fLocal_2286[2] = 52.5746f;
	Local_2365[3 /*3*/] = { -609.9327f, 5713.117f, 29.1666f };
	fLocal_2286[3] = 57.7444f;
	Local_2365[4 /*3*/] = { -607.819f, 5713.639f, 28.9654f };
	fLocal_2286[4] = 60.308f;
}

void func_452()//Position - 0x32506
{
	if (!iLocal_2210)
	{
		PED::ADD_RELATIONSHIP_GROUP("FRIENDLIES", &iLocal_2307);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_2306, iLocal_2307);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_2307, 1862763509);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_2307);
		PLAYER::SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(PLAYER::PLAYER_ID(), 0);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_2307, -2065892691);
		PED::ADD_RELATIONSHIP_GROUP("Elk Group", &iLocal_93);
		iLocal_2210 = 1;
	}
}

void func_453(bool bParam0, float fParam1)//Position - 0x3256C
{
	var uVar0;
	float fVar1;
	struct<3> Var2;
	var uVar5;
	
	if (iLocal_1947 == -1)
	{
		HUD::GET_HUD_COLOUR(18, &iLocal_1947, &iLocal_1948, &iLocal_1949, &uVar0);
		HUD::GET_HUD_COLOUR(18, &iLocal_1953, &iLocal_1954, &iLocal_1955, &uVar0);
		HUD::GET_HUD_COLOUR(6, &iLocal_1950, &iLocal_1951, &iLocal_1952, &uVar0);
	}
	fVar1 = 0f;
	Var2 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	if (!bParam0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			Local_1788 = { MISC::GET_WIND_DIRECTION() };
			fLocal_1787 = MISC::GET_HEADING_FROM_VECTOR_2D(Local_1788.x, Local_1788.f_1);
			fVar1 = (Var2.f_2 - fLocal_1787);
		}
	}
	else
	{
		fLocal_1787 = fParam1;
		fVar1 = (Var2.f_2 - fParam1);
	}
	while (fLocal_1787 < 0f)
	{
		fLocal_1787 = (fLocal_1787 + 360f);
	}
	while (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	uVar5 = MISC::GET_WIND_SPEED();
	if (func_457())
	{
		if (iLocal_1947 < iLocal_1950)
		{
			iLocal_1947++;
		}
		else if (iLocal_1947 > iLocal_1950)
		{
			iLocal_1947 = (iLocal_1947 - 1);
		}
		if (iLocal_1949 < iLocal_1952)
		{
			iLocal_1949++;
		}
		else if (iLocal_1949 > iLocal_1952)
		{
			iLocal_1949 = (iLocal_1949 - 1);
		}
		if (iLocal_1948 < iLocal_1951)
		{
			iLocal_1948++;
		}
		else if (iLocal_1948 > iLocal_1951)
		{
			iLocal_1948 = (iLocal_1948 - 1);
		}
	}
	else
	{
		if (iLocal_1947 < iLocal_1953)
		{
			iLocal_1947++;
		}
		else if (iLocal_1947 > iLocal_1953)
		{
			iLocal_1947 = (iLocal_1947 - 1);
		}
		if (iLocal_1949 < iLocal_1955)
		{
			iLocal_1949++;
		}
		else if (iLocal_1949 > iLocal_1955)
		{
			iLocal_1949 = (iLocal_1949 - 1);
		}
		if (iLocal_1948 < iLocal_1954)
		{
			iLocal_1948++;
		}
		else if (iLocal_1948 > iLocal_1954)
		{
			iLocal_1948 = (iLocal_1948 - 1);
		}
	}
	func_454("AHT_WIND_UPPR", SYSTEM::ROUND(uVar5), fVar1, iLocal_1947, iLocal_1948, iLocal_1949, 6);
}

void func_454(char* sParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x32732
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (iVar0 == -1)
		{
			if (GlobalFunc_659(8, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1328872.f_1 = 1;
		GlobalFunc_658(8, iVar0);
		StringCopy(&(Global_1328872.f_3430.f_9[iVar0 /*16*/]), sParam0, 64);
		Global_1328872.f_3430.f_138[iVar0] = uParam1;
		Global_1328872.f_3430[iVar0] = fParam2;
		Global_1328872.f_3430.f_147[iVar0] = iParam3;
		Global_1328872.f_3430.f_156[iVar0] = iParam4;
		Global_1328872.f_3430.f_165[iVar0] = iParam5;
		Global_1328872.f_3430.f_174[iVar0] = iParam6;
	}
}



int func_457()//Position - 0x32816
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (func_297(iVar0) && !Local_94[iVar0 /*36*/].f_9)
		{
			Var1 = { GlobalFunc_107(Local_94[iVar0 /*36*/].f_20 + Vector(45f, 0f, 0f) - Local_94[iVar0 /*36*/].f_17 + Vector(-45f, 0f, 0f)) };
			Var4 = { Local_94[iVar0 /*36*/].f_17 + Vector(45f, 0f, 0f) };
			Var7 = { Local_94[iVar0 /*36*/].f_20 + Vector(-45f, 0f, 0f) + Var1 * Vector(45f, 45f, 45f) };
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var4, Var7, (10f + 20f), 0, 0, 0))
			{
				if (bLocal_1791)
				{
					if (!Local_675.f_662)
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							GlobalFunc_159("AHT_DOWNWIND", -1);
							Local_675.f_662 = 1;
						}
					}
				}
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}


void func_459()//Position - 0x3290F
{
	struct<3> Var0;
	
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		if (!bLocal_2213 && !bLocal_2202)
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, Var0, 40f))
			{
				HUD::CLEAR_PRINTS();
				GlobalFunc_4935();
				TASK::TASK_WANDER_STANDARD(iLocal_2306, 1193033728, 0);
				PED::SET_PED_KEEP_TASK(iLocal_2306, 1);
				iLocal_2029 = 0;
				iLocal_2297 = MISC::GET_GAME_TIMER() + 1700;
				bLocal_2213 = true;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if ((GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_2365[0 /*3*/], 1) < 80f || GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_2365[1 /*3*/], 1) < 80f) || GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_2365[2 /*3*/], 1) < 80f)
				{
					HUD::CLEAR_PRINTS();
					GlobalFunc_4935();
					TASK::TASK_WANDER_STANDARD(iLocal_2306, 1193033728, 0);
					PED::SET_PED_KEEP_TASK(iLocal_2306, 1);
					iLocal_2029 = 0;
					iLocal_2297 = MISC::GET_GAME_TIMER() + 1700;
					bLocal_2202 = true;
				}
			}
		}
		else if (MISC::GET_GAME_TIMER() > iLocal_2297)
		{
			if (bLocal_2202)
			{
				func_281(15);
			}
			if (bLocal_2213)
			{
				func_281(3);
			}
		}
	}
}

void func_460()//Position - 0x32A32
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		if (((func_465() && !bLocal_1803) && PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID())) && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
		{
			if (iLocal_1818 == -1)
			{
				iLocal_1818 = AUDIO::GET_SOUND_ID();
			}
			if (iLocal_1819 >= 10)
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("HUNTING_02_SETTINGS"))
				{
					AUDIO::START_AUDIO_SCENE("HUNTING_02_SETTINGS");
					func_464(&fLocal_1820, &fLocal_1821);
					AUDIO::SET_AUDIO_SCENE_VARIABLE("HUNTING_02_SETTINGS", "Concentration", fLocal_1820);
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_1818, "Heart_Breathing", PLAYER::PLAYER_PED_ID(), 0, 0, 0);
				}
				else
				{
					func_463(&fLocal_1820, &fLocal_1821);
					AUDIO::SET_AUDIO_SCENE_VARIABLE("HUNTING_02_SETTINGS", "Concentration", fLocal_1820);
				}
				AUDIO::SET_VARIABLE_ON_SOUND(iLocal_1818, "Concentration", fLocal_1821);
			}
			else
			{
				iLocal_1819++;
			}
		}
		else
		{
			iLocal_1819 = 0;
			func_461();
		}
	}
	else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("HUNTING_02_SETTINGS"))
	{
		AUDIO::STOP_AUDIO_SCENE("HUNTING_02_SETTINGS");
		AUDIO::STOP_SOUND(iLocal_1818);
		AUDIO::RELEASE_SOUND_ID(iLocal_1818);
		iLocal_1818 = -1;
	}
}

void func_461()//Position - 0x32B29
{
	fLocal_1820 = (fLocal_1820 - 0.05f);
	if (!func_462())
	{
		fLocal_1821 = (fLocal_1821 - 0.05f);
	}
	if (fLocal_1820 <= 0f)
	{
		fLocal_1820 = 0f;
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("HUNTING_02_SETTINGS"))
		{
			AUDIO::STOP_AUDIO_SCENE("HUNTING_02_SETTINGS");
			AUDIO::STOP_SOUND(iLocal_1818);
			AUDIO::RELEASE_SOUND_ID(iLocal_1818);
			iLocal_1818 = -1;
		}
	}
	if (fLocal_1820 >= 1f)
	{
		fLocal_1820 = 1f;
	}
	if (fLocal_1821 >= 100f)
	{
		fLocal_1821 = 100f;
	}
	if (fLocal_1821 <= 70f)
	{
		fLocal_1821 = 70f;
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("HUNTING_02_SETTINGS"))
	{
		AUDIO::SET_AUDIO_SCENE_VARIABLE("HUNTING_02_SETTINGS", "Concentration", fLocal_1820);
		AUDIO::SET_AUDIO_SCENE_VARIABLE("HUNTING_02_SETTINGS", "Breathing", fLocal_1820);
		AUDIO::SET_VARIABLE_ON_SOUND(iLocal_1818, "Concentration", fLocal_1821);
	}
}

int func_462()//Position - 0x32BEB
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (func_297(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_463(float fParam0, float fParam1)//Position - 0x32C17
{
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		*fParam0 = (*fParam0 + 0.05f);
		*fParam1 = (*fParam1 + 0.05f);
		if (*fParam0 < 0f)
		{
			*fParam0 = 0f;
		}
		else if (*fParam0 > 1f)
		{
			*fParam0 = 1f;
		}
		if (*fParam1 < 0f)
		{
			*fParam1 = 0f;
		}
		else if (*fParam1 > 100f)
		{
			*fParam1 = 100f;
		}
	}
}

void func_464(float fParam0, float fParam1)//Position - 0x32C80
{
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		if (TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()))
		{
			*fParam0 = 0.2f;
			*fParam1 = 20f;
		}
		else if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
		{
			*fParam0 = 0f;
			*fParam1 = 0f;
		}
		else
		{
			*fParam0 = 0.3f;
			*fParam1 = 30f;
		}
	}
}

int func_465()//Position - 0x32CD7
{
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		if (WEAPON::GET_WEAPONTYPE_GROUP(GlobalFunc_1535(PLAYER::PLAYER_PED_ID())) == joaat("GROUP_SNIPER"))
		{
			if (!iLocal_1804)
			{
				iLocal_1804 = 1;
			}
			return 1;
		}
	}
	return 0;
}


void func_467()//Position - 0x32D22
{
	float fVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	struct<3> Var5;
	struct<3> Var8;
	float fVar11;
	var uVar12;
	struct<3> Var13;
	struct<3> Var16;
	float fVar19;
	
	func_483();
	switch (iLocal_2029)
	{
		case 0:
			break;
		
		case 1:
			switch (iLocal_2031)
			{
				case 0:
					if (!GlobalFunc_111())
					{
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_2306, "HT2_CLE_0_1", uLocal_2437, 2, -1);
						PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_2306, 0);
						SYSTEM::SETTIMERA(0);
						iLocal_2031 = 1;
					}
					break;
				
				case 1:
					if (func_402(15f))
					{
						if (!iLocal_2225[0])
						{
							if (SYSTEM::TIMERA() > 2500 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								StringCopy(&Local_2312, "HT_CUT", 24);
								if (GlobalFunc_10626(&uLocal_2033, sLocal_2309, &Local_2312, &cLocal_2318, 7, 0, 0))
								{
									if (!PED::IS_PED_HEADTRACKING_PED(iLocal_2306, PLAYER::PLAYER_PED_ID()))
									{
										TASK::TASK_LOOK_AT_ENTITY(iLocal_2306, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
									}
									if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_2318))
									{
										cLocal_2318 = { GlobalFunc_514() };
									}
									iLocal_2225[0] = 1;
								}
							}
						}
						else if (!iLocal_2269[0])
						{
							Local_2324 = { GlobalFunc_2209() };
							if (MISC::ARE_STRINGS_EQUAL(&Local_2324, "HT_CUT_6"))
							{
								iLocal_2201 = 1;
								func_278(0);
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_2306, -1689270312) == 7)
						{
							PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_2306, 1);
							iLocal_2031 = 2;
						}
					}
					else
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_2306, -1689270312) == 1)
						{
							iLocal_2437 = TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_2306);
						}
						func_399(0, 0);
						iLocal_2031 = 0;
						iLocal_2030 = 1;
						iLocal_2029 = 2;
					}
					break;
				
				case 2:
					iLocal_2031 = 0;
					iLocal_2029 = 3;
					break;
			}
			break;
		
		case 2:
			if (func_402(10f))
			{
				GlobalFunc_4935();
				iLocal_2225[0] = 0;
				iLocal_2225[3] = 0;
				func_399(0, 0);
				iLocal_2031 = 0;
				iLocal_2029 = iLocal_2030;
				iLocal_2299 = 0;
			}
			else
			{
				if (GlobalFunc_663("HT_BAC", 0, 0))
				{
					if (!iLocal_2299)
					{
						iLocal_2300 = 0;
						iLocal_2299 = 1;
					}
					if (iLocal_2300 == 0)
					{
						iLocal_2300 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
						TASK::TASK_STAND_STILL(iLocal_2306, -1);
						TASK::CLEAR_PED_TASKS(iLocal_2306);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_2306, PLAYER::PLAYER_PED_ID(), 0);
						if (GlobalFunc_111())
						{
							cLocal_2318 = { GlobalFunc_514() };
							GlobalFunc_4956();
						}
					}
				}
				if (MISC::GET_GAME_TIMER() > iLocal_2300)
				{
					fVar0 = GlobalFunc_4951(iLocal_2306, PLAYER::PLAYER_PED_ID());
					if (GlobalFunc_663("HT_BAC", 0, 0))
					{
						iVar1 = 1;
					}
					else
					{
						iVar1 = 0;
					}
					if (fVar0 < 20f)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (GlobalFunc_10618(&uLocal_2033, sLocal_2309, "HT2_WCAR", 7, iVar1, 0, 0))
							{
								iLocal_2300 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 12000));
							}
						}
						else
						{
							iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65535);
							if (iVar2 < 20000)
							{
								if (GlobalFunc_10618(&uLocal_2033, sLocal_2309, "HT2_TOOFAR", 7, iVar1, 0, 0))
								{
									iLocal_2300 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 12000));
								}
							}
							else if (iVar2 < 40000)
							{
								if (GlobalFunc_10618(&uLocal_2033, sLocal_2309, "HT2_MOVE", 7, iVar1, 0, 0))
								{
									iLocal_2300 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 12000));
								}
							}
							else if (GlobalFunc_10618(&uLocal_2033, sLocal_2309, "HT2_WLK1", 7, iVar1, 0, 0))
							{
								iLocal_2300 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 12000));
							}
						}
					}
					else if (fVar0 < 50f)
					{
						if (GlobalFunc_10618(&uLocal_2033, sLocal_2309, "HT2_LEAVE", 9, iVar1, 0, 0))
						{
							iLocal_2300 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 12000));
						}
					}
				}
			}
			break;
		
		case 3:
			if (func_402(15f))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					if (!GlobalFunc_111() && !iLocal_2225[1])
					{
						if (GlobalFunc_10618(&uLocal_2033, sLocal_2309, "HT2_HUNT", 7, 0, 0, 0))
						{
							SYSTEM::SETTIMERA(0);
							iLocal_2225[1] = 1;
							iLocal_2428 = 0;
						}
					}
					else if (iLocal_2225[1])
					{
						if (!iLocal_2428 && SYSTEM::TIMERA() > 333)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_2306) && !ENTITY::IS_ENTITY_DEAD(iLocal_2306))
							{
								TASK::OPEN_SEQUENCE_TASK(&uVar3);
								TASK::TASK_TURN_PED_TO_FACE_COORD(0, -607.1139f, 5851.372f, 23.0589f, 0);
								TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_point", 4f, -2f, -1, 48, 0, 0, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uVar3);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_2306, uVar3);
								TASK::CLEAR_SEQUENCE_TASK(&uVar3);
							}
							TASK::TASK_LOOK_AT_ENTITY(iLocal_2306, PLAYER::PLAYER_PED_ID(), -1, 1, 2);
							iLocal_2428 = 1;
						}
						Local_2324 = { GlobalFunc_2209() };
						if (MISC::ARE_STRINGS_EQUAL(&Local_2324, "HT2_HUNT_3") || !GlobalFunc_111())
						{
							func_477(iLocal_2306, 1);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_2306, -605.36f, 5856.549f, 22.7741f, 1f, 60000, 0.25f, 0, 239.6328f);
							PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_2306, 0);
							iLocal_2029 = 4;
						}
					}
				}
			}
			else
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_2306, -1689270312) == 1)
				{
					iLocal_2437 = TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_2306);
				}
				iLocal_2031 = 0;
				iLocal_2030 = 3;
				iLocal_2029 = 2;
			}
			if (iLocal_2435)
			{
				if (!GlobalFunc_4924(Local_94[0 /*36*/]))
				{
					GlobalFunc_4956();
					iLocal_2225[2] = 0;
					iLocal_2029 = 4;
					iLocal_2031 = 0;
				}
			}
			break;
		
		case 4:
			if (!bLocal_2425)
			{
				bLocal_2425 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_2306, 1), -605.36f, 5856.549f, 22.7741f) < 4f;
				TASK::TASK_LOOK_AT_ENTITY(iLocal_2306, Local_94[0 /*36*/], -1, 1, 2);
			}
			if (GlobalFunc_4924(Local_94[0 /*36*/]))
			{
				if (!Local_94[0 /*36*/].f_9)
				{
					if (iLocal_2245[0])
					{
						func_476(0);
						func_474(0);
						if (bLocal_2425)
						{
							func_472(0);
						}
					}
				}
				else if (GlobalFunc_10618(&uLocal_2033, sLocal_2309, "HT2_SPOOK", 6, 0, 0, 0))
				{
					GlobalFunc_4935();
					func_477(iLocal_2306, 0);
					iLocal_2029 = 0;
				}
			}
			else
			{
				HUD::CLEAR_PRINTS();
				GlobalFunc_4956();
				func_14(Local_94[0 /*36*/]);
				if (!bLocal_2218 && !Local_94[0 /*36*/].f_9)
				{
					if (!iLocal_2225[2])
					{
						sLocal_2311 = func_469(0);
						if (GlobalFunc_10618(&uLocal_2033, sLocal_2309, sLocal_2311, 7, 0, 0, 0))
						{
							func_477(iLocal_2306, 0);
							TASK::TASK_CLEAR_LOOK_AT(iLocal_2306);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_2306, PLAYER::PLAYER_PED_ID(), 0);
							TASK::TASK_LOOK_AT_ENTITY(iLocal_2306, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							iLocal_2225[2] = 1;
							iLocal_2029 = 5;
						}
					}
				}
			}
			break;
		
		case 5:
			if (func_402(15f))
			{
				if (!iLocal_2225[3])
				{
					if (!GlobalFunc_111() && !PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
					{
						iLocal_2029 = 7;
						iLocal_2031 = 0;
					}
				}
			}
			else
			{
				iLocal_2031 = 0;
				iLocal_2030 = 5;
				iLocal_2029 = 2;
			}
			break;
		
		case 7:
			switch (iLocal_2031)
			{
				case 0:
					if (iLocal_2438 == 0)
					{
						if (!iLocal_2225[3])
						{
							if (GlobalFunc_10618(&uLocal_2033, sLocal_2309, "HT2_WHISTLE2", 7, 0, 0, 0))
							{
								StringCopy(&Local_2312, "HT2_WHISTLE2", 24);
								iLocal_2225[3] = 1;
							}
						}
					}
					else
					{
						GlobalFunc_10626(&uLocal_2033, sLocal_2309, &Local_2312, &cLocal_2318, 7, 0, 0);
					}
					Local_2324 = { GlobalFunc_2209() };
					if (MISC::ARE_STRINGS_EQUAL(&Local_2324, "HT2_WHISTLE2_1") || iLocal_2438 != 0)
					{
						func_477(iLocal_2306, 1);
						TASK::TASK_CLEAR_LOOK_AT(iLocal_2306);
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_2306, "HT2_CLE_1_2", iLocal_2438, 258, -1);
						PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_2306, 0);
						iLocal_2031 = 1;
					}
					break;
				
				case 1:
					if (!iLocal_2225[4])
					{
						if (func_402(15f))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_2306, -1689270312) == 7)
							{
								if (!GlobalFunc_111())
								{
									if (GlobalFunc_10618(&uLocal_2033, sLocal_2309, "HT2_WHISTLE1", 7, 0, 0, 0))
									{
										func_477(iLocal_2306, 0);
										TASK::OPEN_SEQUENCE_TASK(&uVar4);
										TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000, 16, 4);
										TASK::TASK_PAUSE(0, 5000);
										TASK::TASK_PLAY_ANIM(0, "amb@world_human_guard_patrol@male@idle_a", "idle_b", 2f, -2f, -1, 1, 0, 0, 0, 0);
										TASK::CLOSE_SEQUENCE_TASK(uVar4);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_2306, uVar4);
										TASK::CLEAR_SEQUENCE_TASK(&uVar4);
										iLocal_2225[4] = 1;
										iLocal_1798 = 0;
									}
								}
							}
						}
						else
						{
							iLocal_2438 = TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_2306);
							iLocal_2031 = 0;
							iLocal_2030 = 7;
							iLocal_2029 = 2;
						}
					}
					else if (!iLocal_2426)
					{
						iLocal_2426 = iLocal_1798;
						iLocal_1798 = 0;
						SYSTEM::SETTIMERA(0);
					}
					else if (iLocal_2426 && !bLocal_2427)
					{
						if (SYSTEM::TIMERA() > 2500)
						{
							if (func_402(15f))
							{
								if (!GlobalFunc_111())
								{
									if (GlobalFunc_10618(&uLocal_2033, sLocal_2309, "HT2_COMM", 7, 0, 0, 0))
									{
										SYSTEM::SETTIMERA(0);
										bLocal_2427 = true;
									}
								}
							}
							else
							{
								iLocal_2031 = 2;
							}
						}
					}
					else if (bLocal_2427)
					{
						if (SYSTEM::TIMERA() > 5250)
						{
							iLocal_1798 = 1;
							iLocal_2031 = 2;
						}
					}
					break;
				
				case 2:
					if (!GlobalFunc_111())
					{
						iLocal_2029 = 6;
						iLocal_2031 = 0;
					}
					break;
			}
			break;
		
		case 6:
			if (HUD::DOES_BLIP_EXIST(Local_94[1 /*36*/].f_1))
			{
				if (!iLocal_2225[5])
				{
					if (!iLocal_2211)
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_2306);
						TASK::TASK_TURN_PED_TO_FACE_COORD(iLocal_2306, Local_2365[1 /*3*/], 0);
						func_477(iLocal_2306, 0);
						iLocal_2298 = MISC::GET_GAME_TIMER() + 2000;
						iLocal_2211 = 1;
					}
					else if (MISC::GET_GAME_TIMER() > iLocal_2298)
					{
						if (GlobalFunc_10618(&uLocal_2033, sLocal_2309, "HT2_WLK2", 6, 0, 0, 0))
						{
							RECORDING::_0x293220DA1B46CEBC(1f, 5f, 3);
							iLocal_2207 = 0;
							TASK::TASK_LOOK_AT_ENTITY(iLocal_2306, Local_94[1 /*36*/], -1, 0, 2);
							SYSTEM::SETTIMERA(0);
							iLocal_2225[5] = 1;
							iLocal_2029 = 8;
							iLocal_2031 = 0;
						}
					}
				}
			}
			if (!GlobalFunc_4924(Local_94[1 /*36*/]))
			{
				GlobalFunc_4956();
				iLocal_2225[6] = 0;
				iLocal_2429 = 0;
				iLocal_2029 = 8;
				iLocal_2031 = 0;
			}
			break;
		
		case 8:
			if (GlobalFunc_4924(Local_94[1 /*36*/]))
			{
				if (!iLocal_2430 && SYSTEM::TIMERA() > 1000)
				{
					Var5 = { GlobalFunc_107(ENTITY::GET_ENTITY_COORDS(Local_94[1 /*36*/], 1) - ENTITY::GET_ENTITY_COORDS(iLocal_2306, 1)) };
					Var8 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_2306) };
					fVar11 = GlobalFunc_168(Var8, Var5);
					if (fVar11 > 0.92f)
					{
						TASK::TASK_PLAY_ANIM(iLocal_2306, "oddjobs@hunter", "point_fwd", 4f, -2f, -1, 48, 0, 0, 0, 0);
						iLocal_2430 = 1;
						iLocal_2432 = 0;
					}
				}
				if (!Local_94[1 /*36*/].f_9)
				{
					if (iLocal_2245[1])
					{
						if (!GlobalFunc_111() && !GlobalFunc_74("HT_OBJ"))
						{
							func_476(1);
							func_474(1);
							func_468(1);
							func_472(1);
						}
					}
				}
				else if (GlobalFunc_10618(&uLocal_2033, sLocal_2309, "HT2_SPOOK", 6, 0, 0, 0))
				{
					GlobalFunc_4935();
					func_477(iLocal_2306, 0);
					iLocal_2029 = 0;
				}
			}
			else
			{
				HUD::CLEAR_PRINTS();
				GlobalFunc_4956();
				func_14(Local_94[1 /*36*/]);
				if (!iLocal_2225[6])
				{
					if (!GlobalFunc_111())
					{
						if (!bLocal_2218 && !Local_94[1 /*36*/].f_9)
						{
							if (!iLocal_2429)
							{
								func_477(iLocal_2306, 0);
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_2306, 713668775) != 1)
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_2306, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2f, 60000, 0.25f, 0, fLocal_2285);
								}
								sLocal_2311 = func_469(1);
								iLocal_2429 = 1;
							}
							else if (func_402(6f))
							{
								TASK::CLEAR_PED_TASKS(iLocal_2306);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_2306, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								if (GlobalFunc_10618(&uLocal_2033, sLocal_2309, sLocal_2311, 7, 0, 0, 0))
								{
									iLocal_2301 = MISC::GET_GAME_TIMER() + 10000;
									iLocal_2225[6] = 1;
									RECORDING::_0x293220DA1B46CEBC(2.5f, 5f, 4);
									iLocal_2029 = 9;
									iLocal_2031 = 0;
								}
							}
						}
					}
				}
			}
			break;
		
		case 9:
			if (!GlobalFunc_111())
			{
				if (func_402(15f))
				{
					if (!iLocal_2225[7])
					{
						if (!PED::IS_PED_INJURED(iLocal_2306))
						{
							TASK::CLEAR_PED_TASKS(iLocal_2306);
							TASK::TASK_CLEAR_LOOK_AT(iLocal_2306);
						}
						iLocal_2031 = 0;
						iLocal_2029 = 11;
					}
				}
			}
			break;
		
		case 11:
			switch (iLocal_2031)
			{
				case 0:
					if (!GlobalFunc_111() && func_402(15f))
					{
						if (iLocal_2439 == 0)
						{
							if (!iLocal_2225[7])
							{
								if (GlobalFunc_10618(&uLocal_2033, sLocal_2309, "HT_PAIR", 7, 0, 0, 0))
								{
									StringCopy(&Local_2312, "HT_PAIR", 24);
									iLocal_2225[7] = 1;
								}
							}
						}
						else
						{
							GlobalFunc_10626(&uLocal_2033, sLocal_2309, &Local_2312, &cLocal_2318, 7, 0, 0);
						}
						func_477(iLocal_2306, 1);
						TASK::TASK_LOOK_AT_COORD(iLocal_2306, Local_2365[2 /*3*/], -1, 0, 2);
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_2306, "HT2_CLE_2_3", iLocal_2439, 2, -1);
						iLocal_2031 = 1;
					}
					break;
				
				case 1:
					if (func_402(15f))
					{
						if (!GlobalFunc_111())
						{
							if (!iLocal_2225[8])
							{
								if (GlobalFunc_10618(&uLocal_2033, sLocal_2309, "HT_LEAD3", 6, 0, 0, 0))
								{
									iLocal_2225[8] = 1;
								}
							}
						}
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_2306, -1689270312) == 7)
						{
							if (func_402(15f))
							{
								TASK::TASK_CLEAR_LOOK_AT(iLocal_2306);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_2306, PLAYER::PLAYER_PED_ID(), 0);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_2306, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								iLocal_2031 = 2;
							}
						}
					}
					else if (iLocal_2027 == 11)
					{
						iLocal_2439 = TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_2306);
						iLocal_2031 = 0;
						iLocal_2030 = 11;
						iLocal_2029 = 2;
					}
					else
					{
						iLocal_2031 = 2;
					}
					break;
				
				case 2:
					iLocal_2031 = 0;
					iLocal_2029 = 10;
					break;
			}
			break;
		
		case 10:
			if (!GlobalFunc_111() && HUD::DOES_BLIP_EXIST(Local_94[2 /*36*/].f_1))
			{
				if (!iLocal_2431)
				{
					SYSTEM::SETTIMERA(0);
					iLocal_2431 = 1;
				}
				else if (SYSTEM::TIMERA() > 1700)
				{
					if (!iLocal_2225[9])
					{
						if (GlobalFunc_10618(&uLocal_2033, sLocal_2309, "HT2_ARR3", 6, 0, 0, 0))
						{
							RECORDING::_0x293220DA1B46CEBC(2f, 5f, 3);
							GlobalFunc_146(&iLocal_2199);
							iLocal_2225[9] = 1;
							func_477(iLocal_2306, 1);
							uVar12 = PED::GET_PED_GROUP_INDEX(PLAYER::PLAYER_PED_ID());
							PED::SET_PED_AS_GROUP_MEMBER(iLocal_2306, uVar12);
							iLocal_2432 = 0;
							iLocal_2031 = 0;
							iLocal_2029 = 12;
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_94[2 /*36*/]))
			{
				if (!GlobalFunc_4924(Local_94[2 /*36*/]))
				{
					GlobalFunc_4956();
					iLocal_2225[10] = 0;
					iLocal_2429 = 0;
					iLocal_2029 = 12;
					iLocal_2031 = 0;
					break;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_94[3 /*36*/]))
			{
				if (!GlobalFunc_4924(Local_94[3 /*36*/]))
				{
					GlobalFunc_4956();
					if (GlobalFunc_10618(&uLocal_2033, sLocal_2309, "HT2_SHDOE", 7, 0, 0, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_2306))
						{
							func_477(iLocal_2306, 0);
							TASK::CLEAR_PED_TASKS(iLocal_2306);
							TASK::TASK_WANDER_STANDARD(iLocal_2306, 1193033728, 0);
							PED::SET_PED_KEEP_TASK(iLocal_2306, 1);
							func_281(11);
							iLocal_2029 = 0;
							break;
						}
					}
				}
			}
			break;
		
		case 12:
			if (GlobalFunc_4924(Local_94[2 /*36*/]))
			{
				if (!Local_94[2 /*36*/].f_9)
				{
					if (!GlobalFunc_4924(Local_94[3 /*36*/]))
					{
						if (GlobalFunc_10618(&uLocal_2033, sLocal_2309, "HT2_SHDOE", 7, 0, 0, 0))
						{
							if (!PED::IS_PED_INJURED(iLocal_2306))
							{
								func_477(iLocal_2306, 0);
								TASK::CLEAR_PED_TASKS(iLocal_2306);
								TASK::TASK_WANDER_STANDARD(iLocal_2306, 1193033728, 0);
								PED::SET_PED_KEEP_TASK(iLocal_2306, 1);
								func_281(11);
								iLocal_2029 = 0;
							}
						}
					}
					if (iLocal_2245[2] && !GlobalFunc_663("HT_OBJ", 0, 0))
					{
						func_476(2);
						func_474(2);
						func_474(3);
						func_468(2);
						func_472(2);
					}
				}
				else if (GlobalFunc_10618(&uLocal_2033, sLocal_2309, "HT2_SPOOK", 6, 0, 0, 0))
				{
					GlobalFunc_4935();
					func_477(iLocal_2306, 0);
					iLocal_2029 = 0;
				}
			}
			else
			{
				HUD::CLEAR_PRINTS();
				GlobalFunc_4956();
				func_14(Local_94[2 /*36*/]);
				if (!bLocal_2218)
				{
					if (!iLocal_2225[10])
					{
						sLocal_2311 = func_469(2);
						if (GlobalFunc_10618(&uLocal_2033, sLocal_2309, sLocal_2311, 7, 0, 0, 0))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_2306);
							func_477(iLocal_2306, 0);
							iLocal_2225[10] = 1;
						}
					}
					else if (func_402(15f))
					{
						if (!GlobalFunc_111() && !iLocal_2225[11])
						{
							if (GlobalFunc_10618(&uLocal_2033, sLocal_2309, "HT2_WLKOFF", 7, 0, 0, 0))
							{
								if (!PED::IS_PED_INJURED(iLocal_2306))
								{
									TASK::CLEAR_PED_TASKS(iLocal_2306);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_2306, PLAYER::PLAYER_PED_ID(), -1);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_2306, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
									iLocal_2225[11] = 1;
									RECORDING::_0x293220DA1B46CEBC(2f, 5f, 4);
									iLocal_2029 = 13;
								}
							}
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_2306, 713668775) != 1)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_2306, Local_94[2 /*36*/].f_17, 1f, 60000, 0.25f, 0, fLocal_2285);
					}
				}
			}
			break;
		
		case 13:
			Local_2324 = { GlobalFunc_2209() };
			if (!GlobalFunc_111() || MISC::ARE_STRINGS_EQUAL(&Local_2324, "HT2_WLKOFF_4"))
			{
				TASK::TASK_CLEAR_LOOK_AT(iLocal_2306);
				GlobalFunc_146(&iLocal_2199);
				func_477(iLocal_2306, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_2306, Local_2333, 1f, 60000, 0.25f, 0, fLocal_2285);
				iLocal_2029 = 14;
			}
			break;
		
		case 14:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2306))
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_2306) && !func_402(15f))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_2306);
					GlobalFunc_69(&iLocal_2306);
					iLocal_2029 = 0;
				}
				else if (func_402(15f))
				{
					if (iLocal_2433 == 0)
					{
						iLocal_2433 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 12000));
					}
					else if (iLocal_2433 < MISC::GET_GAME_TIMER())
					{
						TASK::CLEAR_PED_TASKS(iLocal_2306);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_2306, PLAYER::PLAYER_PED_ID(), -1);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_2306, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						SYSTEM::SETTIMERA(0);
						iLocal_2029 = 15;
					}
				}
			}
			break;
		
		case 15:
			if (func_402(15f))
			{
				Var13 = { GlobalFunc_107(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - ENTITY::GET_ENTITY_COORDS(iLocal_2306, 1)) };
				Var16 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_2306) };
				fVar19 = GlobalFunc_168(Var16, Var13);
				if (fVar19 > 0.92f)
				{
					if (!iLocal_2434)
					{
						if (!GlobalFunc_111())
						{
							GlobalFunc_10618(&uLocal_2033, sLocal_2309, "HT2_PLYFOL", 7, 0, 0, 0);
							iLocal_2433 = 0;
							SYSTEM::SETTIMERA(0);
							iLocal_2434 = 1;
						}
					}
					else if (SYSTEM::TIMERA() > 1750)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_2306, Local_2333, 1f, 60000, 0.25f, 0, fLocal_2285);
						iLocal_2029 = 14;
					}
				}
			}
			else if (!iLocal_2434)
			{
				SYSTEM::SETTIMERA(0);
				iLocal_2434 = 1;
			}
			else if (SYSTEM::TIMERA() > 500)
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_2306, Local_2333, 1f, 60000, 0.25f, 0, fLocal_2285);
				iLocal_2029 = 14;
			}
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2306))
	{
		if (iLocal_2027 != 25 && iLocal_2029 != 0)
		{
			if (!iLocal_2208)
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_RAGDOLL(iLocal_2306))
					{
						GlobalFunc_4935();
						iLocal_2296 = MISC::GET_GAME_TIMER() + 1700;
						iLocal_2208 = 1;
					}
				}
				if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_2306, PLAYER::PLAYER_PED_ID(), 1) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iLocal_2306, 0, 2)) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(iLocal_2306, 0), 10f))
				{
					GlobalFunc_4935();
					iLocal_2296 = MISC::GET_GAME_TIMER() + 1700;
					iLocal_2208 = 1;
				}
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_2296)
			{
				if (!PED::IS_PED_INJURED(iLocal_2306))
				{
					TASK::CLEAR_PED_TASKS(iLocal_2306);
					TASK::TASK_SMART_FLEE_PED(iLocal_2306, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_2306, 1);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2306))
				{
					func_281(5);
				}
				else
				{
					func_281(4);
				}
				iLocal_2029 = 0;
			}
		}
	}
}

void func_468(int iParam0)//Position - 0x34006
{
	if (HUD::DOES_BLIP_EXIST(Local_94[iParam0 /*36*/].f_1))
	{
		Local_94[iParam0 /*36*/].f_3 = HUD::GET_BLIP_ALPHA(Local_94[iParam0 /*36*/].f_1);
		if (IntToFloat(Local_94[iParam0 /*36*/].f_3) < 0.1f)
		{
			if (!iLocal_2207)
			{
				iLocal_2292 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 10000));
				iLocal_2207 = 1;
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_2292)
			{
				if (GlobalFunc_10618(&uLocal_2033, sLocal_2309, "HT2_BLOW", 7, 0, 0, 0))
				{
					iLocal_2207 = 0;
				}
			}
		}
	}
}

char* func_469(int iParam0)//Position - 0x34087
{
	char* sVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	sVar0 = "";
	if (ENTITY::DOES_ENTITY_EXIST(Local_94[iParam0 /*36*/]))
	{
		PED::GET_PED_LAST_DAMAGE_BONE(Local_94[iParam0 /*36*/], &uVar1);
		iVar2 = uVar1;
		iVar3 = func_471(iVar2);
		switch (iVar3)
		{
			case 3:
				switch (iParam0)
				{
					case 0:
						sVar0 = "HT2_HEART1";
						break;
					
					case 1:
						sVar0 = "HT2_HEART2";
						break;
					
					case 2:
						sVar0 = "HT2_HEART3";
						break;
				}
				if (!iLocal_2239[iParam0])
				{
					GlobalFunc_565(771, 1, 0);
					iLocal_2239[iParam0] = 1;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 0:
						sVar0 = "HT2_NECK1";
						break;
					
					case 1:
						sVar0 = "HT2_NECK2";
						break;
					
					case 2:
						sVar0 = "HT2_NECK3";
						break;
				}
				break;
			
			case 1:
				switch (iParam0)
				{
					case 0:
						sVar0 = "HT2_HEAD1";
						break;
					
					case 1:
						sVar0 = "HT2_HEAD2";
						break;
					
					case 2:
						sVar0 = "HT2_HEAD3";
						break;
				}
				break;
			
			case 5:
				switch (iParam0)
				{
					case 0:
						sVar0 = "HT2_BODY1";
						break;
					
					case 1:
						sVar0 = "HT2_BODY2";
						break;
					
					case 2:
						sVar0 = "HT2_BODY3";
						break;
				}
				break;
			
			case 7:
			case 4:
				switch (iParam0)
				{
					case 0:
						sVar0 = "HT2_LEG1";
						break;
					
					case 1:
						sVar0 = "HT2_LEG2";
						break;
					
					case 2:
						sVar0 = "HT2_LEG3";
						break;
				}
				break;
			
			case 6:
				switch (iParam0)
				{
					case 0:
						sVar0 = "HT2_REAR1";
						break;
					
					case 1:
						sVar0 = "HT2_REAR2";
						break;
					
					case 2:
						sVar0 = "HT2_REAR3";
						break;
				}
				break;
			
			default:
				switch (iParam0)
				{
					case 0:
						sVar0 = "HT2_COMP1";
						break;
					
					case 1:
						sVar0 = "HT2_COMP2";
						break;
					
					case 2:
						sVar0 = "HT2_COMP3";
						break;
				}
				break;
			}
	}
	return sVar0;
}


int func_471(int iParam0)//Position - 0x34349
{
	switch (iParam0)
	{
		case 31086:
		case 65079:
			return 1;
			break;
		
		case 39317:
		case 24532:
			return 2;
			break;
		
		case 45509:
		case 40269:
		case 24818:
		case 24816:
		case 64729:
		case 10706:
			return 3;
			break;
		
		case 61163:
		case 26610:
		case 4089:
		case 18905:
		case 37709:
		case 36029:
		case 28252:
		case 58866:
		case 64016:
		case 57005:
		case 7966:
		case 6286:
			return 4;
			break;
		
		case 63931:
		case 14201:
		case 2108:
		case 7531:
		case 2718:
		case 65245:
		case 36864:
		case 52301:
		case 20781:
		case 45631:
		case 38142:
		case 35502:
			return 7;
			break;
		
		case 11816:
		case 58271:
		case 51826:
		case 839:
		case 840:
		case 841:
		case 842:
		case 843:
			return 6;
			break;
		
		case 0:
		case 57597:
		case 23553:
		case 24817:
		case 17916:
		case 53251:
			return 5;
			break;
	}
	return 5;
}

int func_472(int iParam0)//Position - 0x344AA
{
	if (!func_402(6f))
	{
		iLocal_2432 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(25000, 45000));
		return 1;
	}
	if (iLocal_2432 == 0)
	{
		iLocal_2432 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(25000, 45000));
		return 1;
	}
	if (GlobalFunc_111() && MISC::GET_GAME_TIMER() > iLocal_2432)
	{
		iLocal_2432 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(25000, 45000));
		return 1;
	}
	if (MISC::GET_GAME_TIMER() > iLocal_2432 && !func_473(iParam0))
	{
		if (GlobalFunc_10618(&uLocal_2033, sLocal_2309, "HT2_ENC", 7, 0, 0, 0))
		{
			iLocal_2432 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(25000, 45000));
		}
	}
	return 1;
}

int func_473(int iParam0)//Position - 0x3455C
{
	if (GlobalFunc_4924(Local_94[iParam0 /*36*/]))
	{
		if (ENTITY::IS_ENTITY_ON_SCREEN(Local_94[iParam0 /*36*/]))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_94[iParam0 /*36*/]))
			{
				if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(Local_94[iParam0 /*36*/].f_15, ENTITY::GET_ENTITY_COORDS(Local_94[iParam0 /*36*/], 0), 1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_474(int iParam0)//Position - 0x345B0
{
	if (func_473(iParam0) && !GlobalFunc_111())
	{
		if (func_475())
		{
			if (!iLocal_2251[iParam0])
			{
				switch (iParam0)
				{
					case 0:
						if (GlobalFunc_10618(&uLocal_2033, sLocal_2309, "HT2_KILL1", 7, 0, 0, 0))
						{
							iLocal_2251[iParam0] = 1;
						}
						break;
					
					case 1:
						if (GlobalFunc_10618(&uLocal_2033, sLocal_2309, "HT2_KILL2", 7, 0, 0, 0))
						{
							iLocal_2251[iParam0] = 1;
						}
						break;
					
					case 2:
						if (GlobalFunc_10618(&uLocal_2033, sLocal_2309, "HT2_KILL3", 7, 0, 0, 0))
						{
							iLocal_2251[iParam0] = 1;
						}
						break;
					
					case 3:
						if (GlobalFunc_10618(&uLocal_2033, sLocal_2309, "HT2_DOE", 7, 0, 0, 0))
						{
							iLocal_2251[iParam0] = 1;
						}
						break;
					}
			}
		}
		else if (!iLocal_2257[iParam0])
		{
			if (GlobalFunc_10618(&uLocal_2033, sLocal_2309, "HT2_WGUN", 7, 0, 0, 0))
			{
				iLocal_2257[iParam0] = 1;
			}
		}
	}
}

int func_475()//Position - 0x346AC
{
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()) && WEAPON::GET_WEAPONTYPE_GROUP(GlobalFunc_1535(PLAYER::PLAYER_PED_ID())) == joaat("GROUP_SNIPER"))
	{
		return 1;
	}
	return 0;
}

void func_476(int iParam0)//Position - 0x346DB
{
	if (!iLocal_2263[iParam0])
	{
		if (((iLocal_2245[iParam0] && !GlobalFunc_111()) && !GlobalFunc_663("HT_OBJ", 0, 0)) && ENTITY::IS_ENTITY_ON_SCREEN(Local_94[iParam0 /*36*/]))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_2400, Local_2403, 20f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_2406, Local_2409, 20f, 0, 1, 0))
			{
				if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(Local_94[iParam0 /*36*/].f_15, ENTITY::GET_ENTITY_COORDS(Local_94[iParam0 /*36*/], 0), 1))
				{
					if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
					{
						if (func_475())
						{
							if (GlobalFunc_10618(&uLocal_2033, sLocal_2309, "HT2_DIST", 7, 0, 0, 0))
							{
								iLocal_2263[iParam0] = 1;
							}
						}
						else if (GlobalFunc_10618(&uLocal_2033, sLocal_2309, "HT2_WGUN", 7, 0, 0, 0))
						{
							iLocal_2263[iParam0] = 1;
						}
					}
					else if (GlobalFunc_10618(&uLocal_2033, sLocal_2309, "HT2_NOWEAP", 7, 0, 0, 0))
					{
						iLocal_2263[iParam0] = 1;
					}
				}
			}
		}
	}
}

void func_477(int iParam0, bool bParam1)//Position - 0x347ED
{
	if (bParam1)
	{
		if (!PED::GET_PED_STEALTH_MOVEMENT(iParam0))
		{
			PED::SET_PED_STEALTH_MOVEMENT(iParam0, 1, "DEFAULT_ACTION");
		}
	}
	else if (PED::GET_PED_STEALTH_MOVEMENT(iParam0))
	{
		PED::SET_PED_STEALTH_MOVEMENT(iParam0, 0, 0);
	}
}






void func_483()//Position - 0x349C9
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (GlobalFunc_4924(iLocal_2306) && GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		if (GlobalFunc_4453())
		{
			iVar1 = 0;
			while (iVar1 < GlobalFunc_4452())
			{
				if (ENTITY::DOES_ENTITY_EXIST(GlobalFunc_4451(iVar1)))
				{
					iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(GlobalFunc_4451(iVar1));
					if (iVar0 != PLAYER::PLAYER_PED_ID() && iVar0 != iLocal_2306)
					{
						if ((!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0)) && PED::IS_PED_HUMAN(iVar0))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar0, PLAYER::PLAYER_PED_ID(), 1))
							{
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iVar0);
								iLocal_2294++;
							}
						}
					}
				}
				iVar1++;
			}
			if (iLocal_2294 == 1)
			{
				if (func_402(15f))
				{
					GlobalFunc_10618(&uLocal_2033, sLocal_2309, "HT2_INNO", 7, 0, 0, 0);
				}
			}
			else if (iLocal_2294 == 2)
			{
				if (!GlobalFunc_111())
				{
					func_281(13);
				}
			}
		}
	}
}





void func_488(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x34AFD
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
				if (fLocal_23 > fVar0)
				{
					Global_68501 = MISC::GET_GAME_TIMER();
					Local_24 = { HUD::GET_HUD_COMPONENT_POSITION(15) };
					fLocal_23 = 0f;
				}
				else
				{
					fLocal_23 = (fLocal_23 + MISC::GET_FRAME_TIME());
				}
			}
			else
			{
				fLocal_23 = 0f;
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
					fLocal_28 = 0.14f;
				}
				else
				{
					fLocal_28 = 0.17f;
				}
				if (fVar7 == -0.014f)
				{
					if (GlobalFunc_117(&Var4) > fLocal_28)
					{
						if (HUD::IS_HUD_COMPONENT_ACTIVE(15))
						{
							HUD::SET_HUD_COMPONENT_POSITION(15, Local_24.x, (Local_24.f_1 + fLocal_27));
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
					fLocal_23 = 0f;
				}
			}
			else
			{
				GlobalFunc_53();
				fLocal_23 = 0f;
			}
		}
	}
}

















int func_505(var uParam0)//Position - 0x35629
{
	int iVar0[5];
	int iVar6;
	bool bVar7;
	
	iVar0[0] = uLocal_1957;
	iVar0[1] = iLocal_1958;
	iVar0[2] = iLocal_1959;
	iVar0[3] = iLocal_1960;
	iVar0[4] = iLocal_1961;
	switch (iLocal_1956)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_27 = 0;
			uParam0->f_26 = 1;
			StringCopy(&(uParam0->f_9), "HUN_2_MCS_1", 24);
			uParam0->f_15 = 4f;
			iVar6 = 0;
			while (iVar6 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar6]);
				iVar6++;
			}
			STREAMING::REQUEST_ANIM_DICT("rcmhunting2");
			iLocal_1956 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmhunting2"))
			{
				return 0;
			}
			iLocal_1956 = 2;
			break;
		
		case 2:
			bVar7 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (GlobalFunc_8025(&(uParam0->f_28[0]), 54, -683.3276f, 5841.042f, 17.217f, 8.33f, "RC HUNTER 2", 1))
				{
					WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[0], joaat("weapon_pumpshotgun"), 0, 1, 1);
				}
				else
				{
					bVar7 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				func_506(&(uParam0->f_35[0]), -685.2281f, 5833.982f, 16.331f, 313.2204f, 0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_1965))
			{
				iLocal_1965 = WEAPON::CREATE_WEAPON_OBJECT(joaat("weapon_sniperrifle"), 0, Local_1962, 0, 1065353216, 0);
				WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(iLocal_1965, joaat("component_at_scope_large"));
				WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(iLocal_1965, joaat("component_at_ar_supp_02"));
			}
			if (bVar7)
			{
				iLocal_1956 = 3;
			}
			break;
		
		case 3:
			if (GlobalFunc_115(uParam0->f_28[0]))
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED("rcmhunting2"))
				{
					TASK::TASK_PLAY_ANIM_ADVANCED(uParam0->f_28[0], "rcmhunting2", "_idle_loop", -683.152f, 5841.281f, 17.32f, 0f, 0f, 17.024f, 1000f, -8f, -1, 790537, 0f, 2, 1);
				}
			}
			TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), -1, 3088, 2);
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Local_1962, 1f, iLocal_1959, 0))
			{
				ENTITY::SET_ENTITY_ROTATION(iLocal_1965, 0f, -90f, -162.64f, 2, 1);
			}
			iVar6 = 0;
			while (iVar6 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar6]);
				iVar6++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_506(var uParam0, struct<3> Param1, float fParam4, int iParam5)//Position - 0x35874
{
	func_507(uParam0, iLocal_1958, Param1, fParam4);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0);
		VEHICLE::SET_VEHICLE_EXTRA(*uParam0, 1, 1);
		VEHICLE::SET_VEHICLE_EXTRA(*uParam0, 2, 0);
		VEHICLE::SET_VEHICLE_EXTRA(*uParam0, 3, 1);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*uParam0, 0);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, 1);
		if (iParam5 == 1)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(*uParam0, 2);
		}
	}
}

void func_507(var uParam0, int iParam1, struct<3> Param2, var uParam5)//Position - 0x358D6
{
	GlobalFunc_6689(uParam0);
	*uParam0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, uParam5, 1, 1);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0);
		ENTITY::SET_ENTITY_HEALTH(*uParam0, 1000);
	}
}









void func_516(int iParam0)//Position - 0x35B81
{
	var uVar0;
	
	uVar0 = PLAYER::PLAYER_PED_ID();
	if (GlobalFunc_4924(uVar0))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(uVar0, joaat("weapon_sniperrifle"), 0))
		{
			iLocal_1794 = 0;
			WEAPON::GIVE_WEAPON_TO_PED(iVar0, joaat("weapon_sniperrifle"), -1, iParam0, 1);
		}
		else
		{
			iLocal_1794 = 1;
			WEAPON::SET_CURRENT_PED_WEAPON(iVar0, joaat("weapon_sniperrifle"), iParam0);
			iLocal_1796 = WEAPON::GET_PED_AMMO_BY_TYPE(iVar0, joaat("AMMO_SNIPER"));
			if (iLocal_1796 == 0)
			{
				WEAPON::SET_PED_AMMO_BY_TYPE(iVar0, joaat("AMMO_SNIPER"), 20);
				WEAPON::SET_AMMO_IN_CLIP(iVar0, joaat("weapon_sniperrifle"), 10);
				SYSTEM::WAIT(0);
			}
		}
		if (!WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iVar0, joaat("weapon_sniperrifle"), joaat("component_at_ar_supp_02")))
		{
			iLocal_1795 = 0;
			WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iVar0, joaat("weapon_sniperrifle"), joaat("component_at_ar_supp_02"));
		}
		else
		{
			iLocal_1795 = 1;
		}
		WEAPON::SET_PED_INFINITE_AMMO(iVar0, 1, joaat("weapon_sniperrifle"));
	}
}

void func_517()//Position - 0x35C3F
{
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), 0))
	{
		iLocal_1794 = 1;
		iLocal_2302 = WEAPON::GET_PED_WEAPON_TINT_INDEX(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"));
		iLocal_1796 = WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_SNIPER"));
		if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_ar_supp_02")))
		{
			iLocal_1795 = 1;
		}
		if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_scope_large")))
		{
			iLocal_2223 = 1;
		}
		if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_scope_max")))
		{
			iLocal_2224 = 1;
		}
		if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_sniperrifle_clip_01")))
		{
			iLocal_2222 = 1;
		}
	}
}

void func_518()//Position - 0x35CED
{
	int iVar0;
	
	GlobalFunc_53();
	GlobalFunc_9161();
	if (GlobalFunc_9162())
	{
	}
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER", 1);
	func_282();
	func_531();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("HUNTING_02_TRAFFIC_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("HUNTING_02_TRAFFIC_SCENE");
	}
	GlobalFunc_200(&uLocal_2033, 2);
	GlobalFunc_200(&uLocal_2033, 3);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_94[iVar0 /*36*/]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_94[iVar0 /*36*/]));
		}
		iVar0++;
	}
	if (iLocal_2203)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_c_deer"));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2306))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2306))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_2306, 0);
		}
		if (!PED::IS_PED_INJURED(iLocal_2306))
		{
			TASK::CLEAR_PED_TASKS(iLocal_2306);
		}
		func_477(iLocal_2306, 0);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_2306);
	}
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		func_477(PLAYER::PLAYER_PED_ID(), 0);
	}
	GlobalFunc_3008(1);
	AUDIO::STOP_AUDIO_SCENE("AMBIENT_HUNTING_MIX");
	func_2();
	PAD::_RESET_INPUT_MAPPING_SCHEME();
	if (iLocal_2210)
	{
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_2307);
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_93);
	}
	GlobalFunc_8956(&Local_1966, 0, 0, 0);
}













void func_531()//Position - 0x36017
{
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_1794)
		{
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), iLocal_1796, 0, 0);
			WEAPON::SET_PED_INFINITE_AMMO(PLAYER::PLAYER_PED_ID(), 0, joaat("weapon_sniperrifle"));
			WEAPON::SET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_SNIPER"), iLocal_1796);
			if (iLocal_1795)
			{
				WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_ar_supp_02"));
			}
			if (iLocal_2302 != -1)
			{
				WEAPON::SET_PED_WEAPON_TINT_INDEX(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), iLocal_2302);
			}
			if (iLocal_2222)
			{
				WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_sniperrifle_clip_01"));
			}
			if (iLocal_2223)
			{
				WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_scope_large"));
			}
			if (iLocal_2224)
			{
				WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_scope_max"));
			}
		}
	}
}






















